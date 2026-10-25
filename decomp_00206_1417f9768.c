// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1417f9768 FUN_1417f9768 body=562 status=ok
// SIG undefined FUN_1417f9768(void)

void FUN_1417f9768(longlong param_1)

{
  double dVar1;
  undefined8 uVar2;
  byte bVar3;
  double dVar4;
  double dVar5;
  undefined1 auVar6 [16];
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  bool bVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  
  bVar3 = *(byte *)(param_1 + 700);
  puVar13 = (undefined8 *)FUN_14001cc68(0x48,0x10);
  uVar2 = DAT_14c8464e8;
  bVar14 = (bVar3 & 1) != 0;
  if (bVar14) {
    uVar19 = *(undefined4 *)(param_1 + 0x2b8);
    uVar15 = *(undefined4 *)(param_1 + 0x2b4);
    uVar16 = *(undefined4 *)(param_1 + 0x2b0);
    uVar17 = *(undefined4 *)(param_1 + 0x2ac);
    uVar18 = *(undefined4 *)(param_1 + 0x2a8);
    uVar12 = *(undefined8 *)(param_1 + 0x268);
    uVar2 = *(undefined8 *)(param_1 + 0x270);
    *puVar13 = *(undefined8 *)(param_1 + 0x260);
    puVar13[1] = uVar12;
    puVar13[2] = uVar2;
    uVar2 = DAT_14c8464e8;
    puVar13[3] = DAT_14c8464e0;
    puVar13[4] = uVar2;
    puVar13[5] = DAT_14c8464f0;
  }
  else {
    uVar15 = *(undefined4 *)(param_1 + 0x2b4);
    uVar16 = *(undefined4 *)(param_1 + 0x2b0);
    uVar17 = *(undefined4 *)(param_1 + 0x2ac);
    uVar18 = *(undefined4 *)(param_1 + 0x2a8);
    dVar9 = *(double *)(param_1 + 0x240);
    dVar10 = *(double *)(param_1 + 0x248);
    dVar11 = *(double *)(param_1 + 0x250);
    dVar1 = *(double *)(param_1 + 600);
    dVar4 = dVar9 * 0.0 - dVar10 * 1.0;
    dVar5 = dVar10 * 0.0 - dVar11 * 0.0;
    dVar8 = dVar11 * 1.0 - dVar9 * 0.0;
    dVar5 = dVar5 + dVar5;
    dVar8 = dVar8 + dVar8;
    dVar4 = dVar4 + dVar4;
    dVar7 = (dVar11 * dVar5 - dVar9 * dVar4) + *(double *)(param_1 + 600) * dVar8 + 0.0;
    *puVar13 = DAT_14c8464e0;
    puVar13[1] = uVar2;
    puVar13[2] = DAT_14c8464f0;
    auVar6._8_4_ = SUB84(dVar7,0);
    auVar6._0_8_ = (dVar4 * dVar10 - dVar8 * dVar11) + dVar1 * dVar5 + 1.0;
    auVar6._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
    *(undefined1 (*) [16])(puVar13 + 3) = auVar6;
    puVar13[5] = dVar4 * dVar1 + 0.0 + (dVar8 * dVar9 - dVar5 * dVar10);
    uVar19 = 0;
  }
  *(undefined4 *)(puVar13 + 6) = uVar18;
  *(undefined4 *)((longlong)puVar13 + 0x34) = uVar17;
  *(undefined4 *)(puVar13 + 7) = uVar16;
  *(undefined4 *)((longlong)puVar13 + 0x3c) = uVar15;
  *(undefined4 *)(puVar13 + 8) = uVar19;
  *(bool *)((longlong)puVar13 + 0x44) = bVar14;
  return;
}



// FUNCTION 1417f999a FUN_1417f999a body=228 status=ok
// SIG undefined FUN_1417f999a(void)

ulonglong FUN_1417f999a(longlong param_1)

{
  bool bVar1;
  byte bVar2;
  longlong lVar3;
  bool bVar4;
  undefined8 unaff_RSI;
  ulonglong uVar5;
  
  bVar2 = *(byte *)(param_1 + 0x152);
  uVar5 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if (((bVar2 == 1) || ((bVar2 < 7 && ((0x68U >> (bVar2 & 0x1f) & 1) != 0)))) &&
     (*(char *)(param_1 + 0x758) != '\x01')) {
    if (DAT_14c7614c8 == 0) {
      bVar1 = false;
    }
    else {
      bVar1 = DAT_14cae9144 + DAT_14cae90e8 != 0 &&
              SCARRY4(DAT_14cae9144,DAT_14cae90e8) == DAT_14cae9144 + DAT_14cae90e8 < 0;
    }
    lVar3 = FUN_1449baec6(param_1);
    if ((lVar3 == 0) || (lVar3 = FUN_1449baec6(param_1), (*(byte *)(lVar3 + 0x6c) & 2) != 0)) {
      bVar4 = false;
    }
    else {
      bVar4 = 1.0 < *(double *)(param_1 + 0x6d0);
    }
    bVar2 = (*(code *)PTR_FUN_14c75b118)();
    if ((((bVar1) || (*(char *)(param_1 + 0x758) == '\x02')) ||
        ((bVar2 & bVar4 & DAT_14c7614cc == 0) != 0)) ||
       (((bVar4 & 0 < (int)DAT_14cad5910) == 1 && (DAT_14cad5910 <= *(ushort *)(param_1 + 0x75a)))))
    {
      uVar5 = 0;
    }
  }
  return uVar5 & 0xffffffff;
}



// FUNCTION 1417f9a7e FUN_1417f9a7e body=247 status=ok
// SIG undefined FUN_1417f9a7e(void)

undefined8 FUN_1417f9a7e(longlong param_1,undefined4 param_2)

{
  byte bVar1;
  undefined8 uVar2;
  undefined1 auStack_a8 [40];
  undefined1 local_80 [8];
  undefined1 local_78 [28];
  char local_5c;
  undefined8 local_50;
  char local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  bVar1 = *(byte *)(param_1 + 0x155);
  if ((bVar1 & 0x20) == 0) {
    *(byte *)(param_1 + 0x155) = bVar1 | 0x20;
    FUN_1409f3758(&DAT_14cb10ae8,param_1);
    bVar1 = *(byte *)(param_1 + 0x155);
  }
  if ((((bVar1 & 1) == 0) || (*(longlong *)(param_1 + 0x30) == 0)) ||
     (*(int *)(*(longlong *)(param_1 + 0x30) + 0xa8) == 0)) {
    uVar2 = 0;
  }
  else {
    FUN_1405f0e9c(local_80,param_1,5);
    if (local_5c == '\0') {
      do {
        FUN_140331450(local_50,param_2);
        FUN_14059e512(local_80);
      } while (local_5c == '\0');
    }
    if (local_28 == '\x01') {
      FUN_14024445c(local_78);
    }
    FUN_1405f0e42(param_1,0);
    uVar2 = 1;
  }
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417f9b76 FUN_1417f9b76 body=185 status=ok
// SIG undefined FUN_1417f9b76(void)

undefined8 FUN_1417f9b76(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_140244c74(&local_30,param_3);
  FUN_14490d954(param_1 + 0x3f8,param_2,&local_30);
  if (local_28 != 0) {
    if (local_30 == (undefined8 *)0x0) goto LAB_1417f9bd5;
    (**(code **)*local_30)(local_30,0);
    FUN_1446efa72(&local_30,0,0,0x10);
    local_28 = 0;
  }
  if (local_30 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_1417f9bd5:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417f9c30 FUN_1417f9c30 body=18 status=ok
// SIG undefined FUN_1417f9c30(void)

void FUN_1417f9c30(longlong param_1,longlong param_2)

{
  if (param_2 != 0) {
    FUN_14480f766(param_1 + 0x3f8);
    return;
  }
  return;
}



// FUNCTION 1417f9c42 FUN_1417f9c42 body=109 status=ok
// SIG undefined FUN_1417f9c42(void)

undefined8 FUN_1417f9c42(undefined8 param_1)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined8 *local_30;
  code *local_28;
  undefined8 **local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = &local_18;
  local_18 = 0;
  local_20 = &local_30;
  local_28 = FUN_143794c14;
  local_38 = 0;
  FUN_144a56f9f(param_1,&local_28,0,0);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return local_18;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417f9cb0 FUN_1417f9cb0 body=330 status=ok
// SIG undefined FUN_1417f9cb0(void)

undefined4
FUN_1417f9cb0(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4)

{
  char cVar1;
  undefined4 uVar2;
  longlong *plVar3;
  undefined2 *puVar4;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_90;
  longlong local_88 [2];
  longlong local_78 [2];
  undefined2 *local_68;
  undefined8 uStack_60;
  undefined2 *local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_58 = (undefined2 *)0x0;
  uStack_50 = 0;
  local_68 = (undefined2 *)0x0;
  uStack_60 = 0;
  FUN_140056680(local_78);
  FUN_140056680(local_88,&DAT_149e0635c);
  local_90 = 0;
  local_98 = 1;
  cVar1 = FUN_1407cdbc6(local_78,local_88,&local_68,&local_58);
  if (local_88[0] != 0) {
    FUN_1400020a8();
  }
  if (local_78[0] != 0) {
    FUN_1400020a8();
  }
  if (cVar1 != '\0') {
    puVar4 = local_68;
    if ((int)uStack_60 == 0) {
      puVar4 = &DAT_149dfb77a;
    }
    plVar3 = (longlong *)FUN_140277b32(0,param_1,puVar4,0);
    if (plVar3 != (longlong *)0x0) {
      puVar4 = local_58;
      if ((int)uStack_50 == 0) {
        puVar4 = &DAT_149dfb77a;
      }
      uVar2 = (**(code **)(*plVar3 + 0x98))(plVar3,puVar4,param_3,param_4);
      goto LAB_1417f9da8;
    }
  }
  *param_3 = 0;
  uVar2 = 0;
LAB_1417f9da8:
  if (local_68 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 1417f9dfc FUN_1417f9dfc body=1463 status=ok
// SIG undefined FUN_1417f9dfc(void)

int * FUN_1417f9dfc(longlong *param_1,int *param_2,undefined8 *param_3)

{
  uint *puVar1;
  ulonglong *puVar2;
  ulonglong *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  byte bVar10;
  int iVar11;
  uint *puVar12;
  ulonglong uVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  longlong *plVar17;
  ulonglong uVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  longlong lVar22;
  int iVar23;
  ulonglong uVar24;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar20 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar20 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar20) {
      FUN_14482b872(param_1,iVar20);
    }
    iVar23 = (int)param_1[5];
    if (iVar23 == 0) {
      iVar7 = -1;
    }
    else {
      iVar7 = iVar23 + 0x1e;
      if (-1 < iVar23 + -1) {
        iVar7 = iVar23 + -1;
      }
      iVar7 = iVar7 >> 5;
    }
    plVar9 = param_1 + 2;
    iVar11 = iVar23 + 1;
    iVar15 = iVar23 + 0x1f;
    if (-1 < iVar23) {
      iVar15 = iVar23;
    }
    if (iVar15 >> 5 == iVar7) {
      *(int *)(param_1 + 5) = iVar11;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar23) {
        if (iVar23 + 0x20U < 0xa0) {
          iVar11 = 0x80;
          iVar7 = iVar23;
        }
        else {
          uVar19 = iVar23 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar14 = 4;
            if (4 < uVar19) {
              uVar14 = uVar19;
            }
          }
          else {
            uVar14 = (uVar19 * 3 >> 3) + uVar19 + 0x10;
          }
          uVar13 = FUN_144a3809e(uVar14 << 2,0);
          iVar7 = (int)(uVar13 >> 2);
          iVar11 = -0x20;
          if ((int)uVar19 <= iVar7) {
            iVar11 = iVar7 << 5;
          }
          iVar7 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar11;
        FUN_1446efbd8(plVar9,iVar7);
        iVar11 = (int)param_1[5] + 1;
      }
      iVar7 = iVar11 + 0x1f;
      if (-1 < iVar11) {
        iVar7 = iVar11;
      }
      *(int *)(param_1 + 5) = iVar11;
      if (iVar11 % 0x20 != 0) {
        plVar17 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar17 = plVar9;
        }
        bVar10 = -(char)(iVar11 % 0x20);
        *(uint *)((longlong)plVar17 + (longlong)(iVar7 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar17 + (longlong)(iVar7 >> 5) * 4) << (bVar10 & 0x1f)) >>
             (bVar10 & 0x1f);
      }
    }
    lVar8 = (longlong)iVar20;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar9 = (longlong *)param_1[4];
    }
    bVar10 = (byte)iVar23 & 0x1f;
    puVar1 = (uint *)((longlong)plVar9 + (longlong)(iVar15 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar10 | 0xfffffffeU >> 0x20 - bVar10);
  }
  else {
    iVar20 = (int)param_1[6];
    lVar8 = (longlong)iVar20;
    iVar23 = *(int *)(*param_1 + 4 + lVar8 * 0x18);
    *(int *)(param_1 + 6) = iVar23;
    iVar7 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar7;
    if (iVar7 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar23 * 0x18) = 0xffffffff;
    }
  }
  puVar1 = (uint *)(param_1 + 2);
  puVar12 = (uint *)param_1[4];
  if ((uint *)param_1[4] == (uint *)0x0) {
    puVar12 = puVar1;
  }
  iVar23 = iVar20 + 0x1f;
  if (-1 < iVar20) {
    iVar23 = iVar20;
  }
  puVar12[iVar23 >> 5] = puVar12[iVar23 >> 5] | 1 << ((byte)iVar20 & 0x1f);
  uVar19 = 1;
  puVar2 = (ulonglong *)(*param_1 + lVar8 * 0x18);
  puVar4 = (undefined4 *)param_3[1];
  uVar13 = *(ulonglong *)*param_3;
  *puVar2 = uVar13;
  *(undefined4 *)(puVar2 + 1) = *puVar4;
  *(undefined4 *)(puVar2 + 2) = 0xffffffff;
  uVar14 = ((uint)(uVar13 >> 0x14) & 0xffff ^ (uint)(uVar13 >> 4)) * -0x7a143595;
  uVar14 = (uVar14 >> 0xd ^ uVar14) * -0x3d4d51cb;
  uVar14 = uVar14 >> 0x10 ^ uVar14;
  uVar21 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if ((uVar21 != 0) && (uVar21 != 1)) {
    plVar9 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar9 = (longlong *)param_1[8];
    }
    iVar23 = *(int *)((longlong)plVar9 + (ulonglong)((int)param_1[9] - 1U & uVar14) * 4);
    if (iVar23 != -1) {
      do {
        puVar3 = (ulonglong *)(*param_1 + (longlong)iVar23 * 0x18);
        if (*puVar3 == uVar13) {
          uVar5 = *(undefined4 *)((longlong)puVar2 + 4);
          uVar13 = puVar2[1];
          uVar6 = *(undefined4 *)((longlong)puVar2 + 0xc);
          *(int *)puVar3 = (int)*puVar2;
          *(undefined4 *)((longlong)puVar3 + 4) = uVar5;
          *(int *)(puVar3 + 1) = (int)uVar13;
          *(undefined4 *)((longlong)puVar3 + 0xc) = uVar6;
          FUN_147dae6a6(param_1,iVar20);
          iVar20 = iVar23;
          goto LAB_1417f9fdf;
        }
        iVar23 = (int)puVar3[2];
      } while (iVar23 != -1);
    }
  }
  if (3 < uVar21) {
    uVar13 = (ulonglong)(uVar21 & 0xfffffffe) + 0xf;
    lVar8 = 0x3f;
    if (uVar13 != 0) {
      for (; uVar13 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar19 = 1 << ((byte)lVar8 & 0x1f);
  }
  if (((int)uVar21 < 1) || ((int)uVar19 <= (int)param_1[9])) {
    uVar14 = (int)param_1[9] - 1U & uVar14;
    *(uint *)((longlong)puVar2 + 0x14) = uVar14;
    plVar9 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar9 = param_1 + 7;
    }
    *(undefined4 *)(puVar2 + 2) =
         *(undefined4 *)
          ((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar14) * 4);
    plVar9 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar9 = param_1 + 7;
    }
    *(int *)((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar14) * 4) =
         iVar20;
    goto LAB_1417f9fdf;
  }
  *(uint *)(param_1 + 9) = uVar19;
  plVar9 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar9,0,0,4);
    uVar19 = *(uint *)(param_1 + 9);
  }
  plVar17 = param_1 + 7;
  if (uVar19 == 1) {
    if (*plVar9 != 0) {
      FUN_1446efa72(plVar9,0,0,4);
    }
LAB_1417fa071:
    uVar14 = 0;
    do {
      plVar9 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar9 = plVar17;
      }
      *(undefined4 *)((longlong)plVar9 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar14) * 4) =
           0xffffffff;
      uVar14 = uVar14 + 1;
    } while (uVar19 != uVar14);
  }
  else {
    if (uVar19 == 0) goto LAB_1417f9fdf;
    FUN_1446efa72(plVar9,0,uVar19,4);
    if (0 < (int)uVar19) goto LAB_1417fa071;
  }
  iVar23 = (int)param_1[5];
  if (iVar23 == 0) {
    uVar13 = 0;
    uVar18 = 1;
    iVar7 = 0;
    iVar11 = 0;
  }
  else {
    puVar12 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar12 = puVar1;
    }
    uVar19 = *puVar12;
    if (uVar19 == 0) {
      iVar7 = iVar23 + 0x1e;
      if (-1 < iVar23 + -1) {
        iVar7 = iVar23 + -1;
      }
      uVar13 = 0;
      uVar18 = (ulonglong)(uint)(iVar7 >> 5);
      if (iVar7 >> 5 < 1) {
        uVar18 = uVar13;
      }
      iVar11 = 0;
      do {
        if (uVar18 == uVar13) goto LAB_1417f9fdf;
        iVar11 = iVar11 + 0x20;
        uVar19 = puVar12[uVar13 + 1];
        uVar13 = uVar13 + 1;
      } while (uVar19 == 0);
    }
    else {
      uVar13 = 0;
      iVar11 = 0;
    }
    uVar18 = (ulonglong)(-uVar19 & uVar19);
    uVar24 = uVar18 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar24 != 0) {
      for (; uVar24 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iVar7 = (iVar11 - ((uint)lVar8 ^ 0x3f)) + 0x3e;
    if (iVar23 <= iVar7) {
      iVar7 = iVar23;
    }
  }
  if (iVar7 < iVar23) {
    uVar19 = 0xffffffff;
    do {
      lVar8 = *param_1;
      lVar22 = (longlong)iVar7;
      uVar24 = *(ulonglong *)(lVar8 + lVar22 * 0x18);
      uVar14 = ((uint)(uVar24 >> 0x14) & 0xffff ^ (uint)(uVar24 >> 4)) * -0x7a143595;
      uVar14 = (uVar14 >> 0xd ^ uVar14) * -0x3d4d51cb;
      uVar24 = (longlong)(int)(uVar14 >> 0x10 ^ uVar14) & (longlong)(int)param_1[9] - 1U;
      iVar23 = (int)uVar24;
      *(int *)(lVar8 + 0x14 + lVar22 * 0x18) = iVar23;
      plVar9 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar9 = plVar17;
      }
      *(undefined4 *)(lVar8 + 0x10 + lVar22 * 0x18) =
           *(undefined4 *)((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & uVar24) * 4);
      plVar9 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar9 = plVar17;
      }
      *(int *)((longlong)plVar9 + ((longlong)iVar23 & (longlong)(int)param_1[9] - 1U) * 4) = iVar7;
      uVar19 = ~(uint)uVar18 & uVar19;
      puVar12 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar12 = puVar1;
      }
      iVar23 = (int)param_1[5];
      iVar7 = (int)uVar13;
      lVar8 = (longlong)iVar7;
      uVar14 = puVar12[lVar8] & uVar19;
      if (uVar14 == 0) {
        iVar15 = iVar23 + 0x1e;
        if (-1 < iVar23 + -1) {
          iVar15 = iVar23 + -1;
        }
        iVar15 = iVar15 >> 5;
        iVar16 = iVar15;
        if (iVar15 < iVar7) {
          iVar16 = iVar7;
        }
        if (iVar15 <= iVar7) break;
        lVar22 = 0;
        while( true ) {
          iVar11 = iVar11 + 0x20;
          uVar14 = puVar12[lVar8 + lVar22 + 1];
          if (uVar14 != 0) break;
          lVar22 = lVar22 + 1;
          if (iVar16 - lVar8 == lVar22) goto LAB_1417f9fdf;
        }
        uVar13 = (ulonglong)(iVar7 + (int)lVar22 + 1);
        uVar19 = 0xffffffff;
      }
      uVar18 = (ulonglong)(-uVar14 & uVar14);
      uVar24 = uVar18 * 2 + 1;
      lVar8 = 0x3f;
      if (uVar24 != 0) {
        for (; uVar24 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = (iVar11 - ((uint)lVar8 ^ 0x3f)) + 0x3e;
    } while (iVar7 < iVar23);
  }
LAB_1417f9fdf:
  *param_2 = iVar20;
  return param_2;
}



// FUNCTION 1417fa3b4 FUN_1417fa3b4 body=353 status=ok
// SIG undefined FUN_1417fa3b4(void)

void FUN_1417fa3b4(longlong param_1)

{
  longlong lVar1;
  byte bVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar3 = *(uint *)(param_1 + 8);
  uVar6 = (ulonglong)uVar3;
  if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar6);
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar6 = 4;
    if (4 < uVar3) {
      uVar6 = (ulonglong)uVar3;
    }
  }
  else {
    uVar6 = uVar6 + (uVar6 * 3 >> 3) + 0x10;
  }
  uVar5 = uVar6 * 8;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar4 = uVar5 + 0xf;
      if (uVar6 < 0xfff) {
        uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
      }
      else {
        if ((uVar4 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar2 = (&DAT_14c841e00)[uVar4 >> 4];
          uVar6 = 0x32;
          if (0x32 < bVar2) {
            uVar6 = (ulonglong)bVar2;
          }
          uVar7 = 0x32 - (ulonglong)bVar2;
          do {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar7 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar7 & 0xffffffff] & 0xf) == 0) goto LAB_1417fa436;
            lVar1 = uVar6 + 1 + uVar7;
            uVar7 = uVar7 - 1;
          } while (lVar1 != 0x33);
        }
        uVar6 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar6 = (ulonglong)DAT_14c841df8;
        }
        uVar5 = -uVar6 & ((uVar4 & 0xfffffffffffffff0) + uVar6) - 1;
      }
    }
    else {
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
    }
  }
LAB_1417fa436:
  uVar6 = 0x7fffffff;
  if ((int)uVar3 <= (int)(uVar5 >> 3)) {
    uVar6 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar6;
  FUN_1446f8d3c(param_1,0,uVar6,8,8);
  return;
}



// FUNCTION 1417fa516 FUN_1417fa516 body=353 status=ok
// SIG undefined FUN_1417fa516(void)

void FUN_1417fa516(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1417fa59b;
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
LAB_1417fa59b:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 1417fa678 FUN_1417fa678 body=230 status=ok
// SIG undefined FUN_1417fa678(void)

void FUN_1417fa678(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = (ulonglong)param_2 * 0x90;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (param_2 < 0xe4) {
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
    if ((int)param_2 <= (int)(uVar1 / 0x90)) {
      uVar2 = uVar1 / 0x90 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x90,8);
  }
  return;
}



// FUNCTION 1417fa75e FUN_1417fa75e body=470 status=ok
// SIG undefined FUN_1417fa75e(void)

int * FUN_1417fa75e(longlong *param_1,int *param_2)

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



// FUNCTION 1417fa934 FUN_1417fa934 body=373 status=ok
// SIG undefined FUN_1417fa934(void)

void FUN_1417fa934(longlong param_1,int param_2)

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
  uVar5 = lVar4 * 0x28;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1417fa9bf;
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
LAB_1417fa9bf:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x28)) {
    uVar7 = uVar5 / 0x28 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x28,8);
  return;
}



// FUNCTION 1417faaaa FUN_1417faaaa body=269 status=ok
// SIG undefined FUN_1417faaaa(void)

void FUN_1417faaaa(longlong param_1,int param_2)

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



// FUNCTION 1417fabb8 FUN_1417fabb8 body=142 status=ok
// SIG undefined FUN_1417fabb8(void)

void FUN_1417fabb8(longlong param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar3 = (ulonglong)uVar1;
  iVar2 = *(int *)(param_1 + 0xc);
  if (((((longlong)(int)(iVar2 - uVar1) & 0xffffffffffffc00U) != 0) ||
      ((int)(uVar1 * 3) < iVar2 * 2)) && (uVar1 == 0 || 0x40 < (int)(iVar2 - uVar1))) {
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



// FUNCTION 1417fac46 FUN_1417fac46 body=195 status=ok
// SIG undefined FUN_1417fac46(void)

void FUN_1417fac46(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

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
        goto LAB_1417facec;
      }
    }
    uVar5 = uVar7 - 1;
    bVar6 = true;
  } while (1 < uVar7);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_1417facec:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 1417fad09 FUN_1417fad09 body=49 status=ok
// SIG undefined FUN_1417fad09(void)

longlong FUN_1417fad09(void)

{
  if (DAT_14cb10ee8 == 0) {
    FUN_1409ce572(&DAT_14cb10ee8,&PTR_FUN_14ab0f3d0);
  }
  return DAT_14cb10ee8;
}



// FUNCTION 1417fad3a FUN_1417fad3a body=48 status=ok
// SIG undefined FUN_1417fad3a(void)

void FUN_1417fad3a(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_14077009c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14ab0f090;
  *(undefined2 *)(puVar1 + 6) = 1;
  *(undefined4 *)((longlong)puVar1 + 0x34) = 0xff000000;
  return;
}



// FUNCTION 1417fad74 FUN_1417fad74 body=62 status=ok
// SIG undefined FUN_1417fad74(void)

void FUN_1417fad74(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  FUN_1411ac5e8(param_1,&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417fadb3 FUN_1417fadb3 body=49 status=ok
// SIG undefined FUN_1417fadb3(void)

longlong FUN_1417fadb3(void)

{
  if (DAT_14cb11198 == 0) {
    FUN_14073dd9a(&DAT_14cb11198,&PTR_LAB_14ab12f50);
  }
  return DAT_14cb11198;
}



// FUNCTION 1417fade4 FUN_1417fade4 body=1261 status=ok
// SIG undefined FUN_1417fade4(void)

void FUN_1417fade4(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  byte bVar13;
  longlong lVar14;
  longlong lVar15;
  bool bVar16;
  undefined1 auStack_d8 [40];
  undefined8 local_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  longlong *local_90;
  undefined4 local_88;
  uint uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cc78);
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3ca68);
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cbb8);
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cbc8);
  FUN_1402d084a(param_1,param_2);
  lVar9 = DAT_14cb11330;
  iVar2 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  if (iVar2 == 0x40000002) {
    uVar8 = 0;
  }
  else {
    bVar16 = true;
    if ((DAT_14c86a9f8 == '\x01') && (iVar2 != 2)) {
      if (iVar2 == 1) {
        DVar4 = FUN_140ad26c0();
        DVar5 = GetCurrentThreadId();
        bVar16 = DVar4 == DVar5;
      }
      else {
        bVar16 = false;
      }
    }
    uVar8 = (ulonglong)(bVar16 ^ 1);
  }
  iVar2 = *(int *)(lVar9 + uVar8 * 4);
  if (iVar2 < 1) goto LAB_1417faeb5;
  local_a8 = 0;
  uStack_a0 = 0;
  lVar9 = FUN_145b3d0ce();
  if ((lVar9 == 0) || (DAT_14c950c29 == 0)) {
    if (lVar9 != 0) goto LAB_1417faf12;
    local_b0 = 1;
LAB_1417faf32:
    lVar14 = 0;
  }
  else {
    FUN_1456cec3c(lVar9);
LAB_1417faf12:
    lVar10 = FUN_144a78d6a();
    if ((lVar10 == 0) || (*(int *)(lVar9 + 0x38) < *(int *)(lVar10 + 0x38))) {
      local_b0 = 0;
      goto LAB_1417faf32;
    }
    local_b0 = 0;
    lVar14 = 0;
    if (*(longlong *)(*(longlong *)(lVar9 + 0x30) + (longlong)*(int *)(lVar10 + 0x38) * 8) ==
        lVar10 + 0x30) {
      lVar14 = lVar9;
    }
  }
  lVar10 = FUN_144a78d6a();
  bVar13 = lVar9 != 0 & DAT_14c950c29;
  if (lVar14 == lVar10) {
    if (bVar13 != 0) {
      FUN_1456cec3c(lVar9);
    }
    plVar1 = (longlong *)(param_1 + 0x240);
    lVar9 = param_1 + 0x250;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    uStack_50 = 0;
    uStack_60 = lVar9;
    if (*(int *)(param_1 + 0x268) == 0) {
      iVar12 = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      iVar12 = *(int *)(param_1 + 0x268);
    }
    local_88 = (undefined4)local_68;
    uStack_84 = local_68._4_4_;
    uStack_80 = (undefined4)uStack_60;
    uStack_7c = uStack_60._4_4_;
    uStack_70 = CONCAT44(uStack_4c,uStack_50);
    local_78 = local_58;
    uVar3 = local_78;
    local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
    local_90 = plVar1;
    if ((local_78._4_4_ != iVar12) || (uStack_60 != lVar9)) {
      iVar6 = local_78._4_4_;
      local_78 = uVar3;
      do {
        uVar8 = uStack_a0;
        lVar10 = *(longlong *)(*local_90 + (longlong)iVar6 * 0x10);
        if ((lVar10 != 0) && (*(int *)(lVar10 + 0x728) < iVar2)) {
          lVar14 = (longlong)(int)uStack_a0;
          uVar7 = (int)uStack_a0 + 1;
          uStack_a0 = CONCAT44(uStack_a0._4_4_,uVar7);
          if (uStack_a0._4_4_ < uVar7) {
            FUN_147dbe038(&local_a8,uVar8 & 0xffffffff);
          }
          *(longlong *)(local_a8 + lVar14 * 8) = lVar10;
        }
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~uStack_84);
        FUN_1449c0562(&local_88);
        iVar6 = local_78._4_4_;
        uVar3 = local_78;
      } while (local_90 != plVar1 ||
               (CONCAT44(uStack_7c,uStack_80) != lVar9 || local_78._4_4_ != iVar12));
    }
  }
  else {
    if (bVar13 != 0) {
      FUN_1456cec3c(lVar9);
    }
    plVar1 = (longlong *)(param_1 + 0x240);
    lVar10 = param_1 + 0x250;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    uStack_50 = 0;
    uStack_60 = lVar10;
    if (*(int *)(param_1 + 0x268) == 0) {
      iVar12 = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      iVar12 = *(int *)(param_1 + 0x268);
    }
    uStack_70 = CONCAT44(uStack_4c,uStack_50);
    local_78 = local_58;
    uVar3 = local_78;
    local_88 = (undefined4)local_68;
    uStack_84 = local_68._4_4_;
    uStack_80 = (undefined4)uStack_60;
    uStack_7c = uStack_60._4_4_;
    local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
    iVar6 = local_78._4_4_;
    local_90 = plVar1;
    if ((local_78._4_4_ != iVar12) || (uStack_60 != lVar10)) {
      do {
        local_78 = uVar3;
        lVar14 = *(longlong *)(*local_90 + (longlong)iVar6 * 0x10);
        if (lVar14 != 0) {
          if ((lVar9 != 0) && (DAT_14c950c29 != 0)) {
            FUN_1456cec3c(lVar9);
          }
          if ((((char)local_b0 == '\0') && (lVar15 = FUN_144a78d6a(), lVar15 != 0)) &&
             (*(int *)(lVar15 + 0x38) <= *(int *)(lVar9 + 0x38))) {
            lVar11 = 0;
            if (*(longlong *)(*(longlong *)(lVar9 + 0x30) + (longlong)*(int *)(lVar15 + 0x38) * 8)
                == lVar15 + 0x30) {
              lVar11 = lVar9;
            }
          }
          else {
            lVar11 = 0;
          }
          uVar8 = uStack_a0;
          if (((*(int *)(lVar11 + 0x38) <= *(int *)(*(longlong *)(lVar14 + 0x10) + 0x38)) &&
              (*(longlong *)
                (*(longlong *)(*(longlong *)(lVar14 + 0x10) + 0x30) +
                (longlong)*(int *)(lVar11 + 0x38) * 8) == lVar11 + 0x30)) &&
             (*(int *)(lVar14 + 0x728) < iVar2)) {
            lVar15 = (longlong)(int)uStack_a0;
            uVar7 = (int)uStack_a0 + 1;
            uStack_a0 = CONCAT44(uStack_a0._4_4_,uVar7);
            if (uStack_a0._4_4_ < uVar7) {
              FUN_147dbe038(&local_a8,uVar8 & 0xffffffff);
            }
            *(longlong *)(local_a8 + lVar15 * 8) = lVar14;
          }
        }
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~uStack_84);
        FUN_1449c0562(&local_88);
        iVar6 = local_78._4_4_;
        uVar3 = local_78;
      } while (local_90 != plVar1 ||
               (CONCAT44(uStack_7c,uStack_80) != lVar10 || local_78._4_4_ != iVar12));
    }
  }
  local_78 = uVar3;
  lVar9 = local_a8;
  lVar10 = (longlong)(int)uStack_a0;
  if (lVar10 != 0) {
    lVar14 = 0;
    do {
      FUN_1400f829a(param_1,*(undefined8 *)(lVar9 + lVar14));
      plVar1 = *(longlong **)(lVar9 + lVar14);
      (**(code **)(*plVar1 + 0x420))(plVar1,0);
      lVar14 = lVar14 + 8;
    } while (lVar10 * 8 != lVar14);
  }
  if (local_a8 != 0) {
    FUN_1400020a8(local_a8);
  }
LAB_1417faeb5:
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1417fb2d2 FUN_1417fb2d2 body=40 status=ok
// SIG undefined FUN_1417fb2d2(void)

undefined8 FUN_1417fb2d2(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417fb2fa FUN_1417fb2fa body=69 status=ok
// SIG undefined FUN_1417fb2fa(void)

undefined8 * FUN_1417fb2fa(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ab0ff00;
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417fb340 FUN_1417fb340 body=40 status=ok
// SIG undefined FUN_1417fb340(void)

undefined8 FUN_1417fb340(undefined8 param_1,int param_2)

{
  FUN_1402ef4ac();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417fb368 FUN_1417fb368 body=29 status=ok
// SIG undefined FUN_1417fb368(void)

undefined8 FUN_1417fb368(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417fb386 FUN_1417fb386 body=594 status=ok
// SIG undefined FUN_1417fb386(void)

void FUN_1417fb386(longlong *param_1)

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
        lVar13 = (longlong)iVar7;
        uVar2 = *(undefined8 *)(lVar14 + lVar13 * 0x18);
        uVar4 = (uint)((ulonglong)uVar2 >> 0x10);
        uVar15 = (uint)uVar2 & 0xffff;
        uVar11 = (longlong)
                 (int)(((uint)uVar2 << 0x10 | uVar15) + (int)((ulonglong)uVar2 >> 0x20) +
                       (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar15 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar10 = (int)uVar11;
        *(int *)(lVar14 + 0x14 + lVar13 * 0x18) = iVar10;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar14 + 0x10 + lVar13 * 0x18) =
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
            if (iVar3 - lVar14 == lVar13) goto LAB_1417fb58f;
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
LAB_1417fb58f:
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417fb5da FUN_1417fb5da body=714 status=ok
// SIG undefined FUN_1417fb5da(void)

void FUN_1417fb5da(longlong *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  longlong *plVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  undefined2 *puVar15;
  ulonglong uVar16;
  int iVar17;
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
  uVar14 = *(uint *)(param_1 + 9);
  if (uVar14 != 0) {
    plVar1 = param_1 + 7;
    FUN_144a1cbf0(plVar1,0,uVar14,4);
    if (0 < (int)uVar14) {
      uVar5 = 0;
      do {
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar5) * 4) =
             0xffffffff;
        uVar5 = uVar5 + 1;
      } while (uVar14 != uVar5);
    }
    local_60 = param_1 + 2;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    if ((int)param_1[5] == 0) {
      uVar16 = 1;
      local_58._0_4_ = 0xffffffff;
      local_58._4_4_ = 0;
      uVar10 = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      uVar10 = local_68 & 0xffffffff;
      uVar16 = local_68 >> 0x20;
    }
    uVar14 = (uint)local_58;
    iVar17 = local_58._4_4_;
    iVar11 = local_50;
    if (local_58._4_4_ < (int)local_60[3]) {
      do {
        local_7c = iVar11;
        local_70 = uVar10;
        puVar2 = (undefined8 *)(*param_1 + (longlong)iVar17 * 0x20);
        iVar11 = *(int *)(*param_1 + 8 + (longlong)iVar17 * 0x20);
        iVar4 = iVar11 + -1;
        if (iVar11 == 0) {
          iVar4 = 0;
        }
        uVar5 = 0;
        if (0 < iVar4) {
          puVar15 = &DAT_149dfb77a;
          if (iVar11 != 0) {
            puVar15 = (undefined2 *)*puVar2;
          }
          lVar12 = 0;
          uVar5 = 0;
          do {
            uVar6 = ((uint)(ushort)puVar15[lVar12] +
                    (uint)(0x19 < (ushort)puVar15[lVar12] - 0x61) * 0x20) - 0x20;
            uVar5 = uVar5 >> 8 ^ *(uint *)(&DAT_14c75d150 + (ulonglong)((uVar5 ^ uVar6) & 0xff) * 4)
            ;
            uVar5 = uVar5 >> 8 ^
                    *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar5 & 0xff ^ uVar6 >> 8 & 0xff) * 4);
            lVar12 = lVar12 + 1;
          } while (iVar4 != (int)lVar12);
        }
        uVar10 = (longlong)(int)uVar5 & (longlong)(int)param_1[9] - 1U;
        iVar11 = (int)uVar10;
        *(int *)((longlong)puVar2 + 0x1c) = iVar11;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(puVar2 + 3) =
             *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar11 & (longlong)(int)param_1[9] - 1U) * 4) =
             iVar17;
        uVar14 = uVar14 & ~(uint)uVar16;
        plVar7 = (longlong *)local_60[2];
        if ((longlong *)local_60[2] == (longlong *)0x0) {
          plVar7 = local_60;
        }
        iVar4 = (int)local_60[3];
        iVar17 = (int)local_70;
        lVar12 = (longlong)iVar17;
        uVar5 = *(uint *)((longlong)plVar7 + lVar12 * 4) & uVar14;
        uVar10 = local_70;
        iVar11 = local_7c;
        local_78 = local_60;
        if (uVar5 == 0) {
          iVar8 = iVar4 + 0x1e;
          if (-1 < iVar4 + -1) {
            iVar8 = iVar4 + -1;
          }
          iVar8 = iVar8 >> 5;
          iVar9 = iVar8;
          if (iVar8 < iVar17) {
            iVar9 = iVar17;
          }
          if (iVar8 <= iVar17) break;
          lVar13 = 0;
          while( true ) {
            iVar11 = iVar11 + 0x20;
            uVar5 = *(uint *)((longlong)plVar7 + lVar13 * 4 + lVar12 * 4 + 4);
            if (uVar5 != 0) break;
            lVar13 = lVar13 + 1;
            if (iVar9 - lVar12 == lVar13) goto LAB_1417fb866;
          }
          uVar14 = 0xffffffff;
          uVar10 = (ulonglong)(iVar17 + (int)lVar13 + 1);
        }
        uVar16 = (ulonglong)(-uVar5 & uVar5);
        uVar3 = uVar16 * 2 + 1;
        lVar12 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        iVar17 = (iVar11 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
      } while (iVar17 < iVar4);
    }
  }
LAB_1417fb866:
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417fb8a6 FUN_1417fb8a6 body=167 status=ok
// SIG undefined FUN_1417fb8a6(void)

undefined8 FUN_1417fb8a6(longlong param_1,longlong *param_2)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  lVar2 = *(longlong *)(param_1 + 0x40);
  if (lVar2 == 0) {
    lVar2 = FUN_14475ec7e(param_1);
  }
  bVar1 = *(byte *)(lVar2 + 0x152);
  if ((((bVar1 == 1) || ((bVar1 < 7 && ((0x68U >> (bVar1 & 0x1f) & 1) != 0)))) &&
      (param_2 != (longlong *)0x0)) && (*(longlong *)(param_1 + 0xe0) != 0)) {
    lVar2 = (**(code **)(*param_2 + 8))(param_2);
    if (lVar2 != 0) {
      lVar3 = FUN_14019a59a();
      if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8
           ) == lVar3 + 0x30)) {
                    /* WARNING: Could not recover jumptable at 0x0001417fb925. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar4 = (**(code **)(**(longlong **)(param_1 + 0xe0) + 0x2b0))
                          (*(longlong **)(param_1 + 0xe0),lVar2);
        return uVar4;
      }
    }
  }
  return 1;
}



// FUNCTION 1417fb9d8 FUN_1417fb9d8 body=353 status=ok
// SIG undefined FUN_1417fb9d8(void)

void FUN_1417fb9d8(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1417fba5d;
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
LAB_1417fba5d:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 1417fbb3a FUN_1417fbb3a body=694 status=ok
// SIG undefined FUN_1417fbb3a(void)

void FUN_1417fbb3a(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  ulonglong uVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  ulonglong uVar14;
  uint uVar15;
  uint uVar16;
  undefined1 auStack_88 [40];
  ulonglong local_60;
  longlong *local_58;
  undefined8 local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
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
    local_58 = param_1 + 2;
    local_60 = 0x100000000;
    local_50 = 0xffffffff;
    local_48 = 0;
    if ((int)param_1[5] == 0) {
      uVar8 = 1;
      local_50._0_4_ = 0xffffffff;
      local_50._4_4_ = 0;
      local_60._0_4_ = 0;
    }
    else {
      FUN_1449c0562(&local_60);
      uVar8 = local_60 >> 0x20;
    }
    iVar4 = (int)local_60;
    uVar5 = (uint)local_50;
    iVar6 = local_50._4_4_;
    iVar10 = local_48;
    if (local_50._4_4_ < (int)local_58[3]) {
      do {
        lVar12 = *param_1;
        lVar11 = (longlong)iVar6 * 0x50;
        uVar3 = *(uint *)(lVar12 + 4 + lVar11);
        uVar15 = uVar3 >> 0xd ^ *(int *)(lVar12 + lVar11) - uVar3;
        uVar9 = uVar15 << 8 ^ (-0x61c88647 - uVar3) - uVar15;
        uVar3 = uVar9 >> 0xd ^ (uVar3 - uVar15) - uVar9;
        uVar15 = uVar3 >> 0xc ^ (uVar15 - uVar9) - uVar3;
        uVar16 = uVar15 << 0x10 ^ (uVar9 - uVar3) - uVar15;
        uVar3 = uVar16 >> 5 ^ (uVar3 - uVar15) - uVar16;
        uVar9 = uVar3 >> 3 ^ (uVar15 - uVar16) - uVar3;
        uVar15 = uVar9 << 10 ^ (uVar16 - uVar3) - uVar9;
        uVar14 = (longlong)(int)(uVar15 >> 0xf ^ uVar3 - (uVar9 + uVar15)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar13 = (int)uVar14;
        *(int *)(lVar12 + 0x4c + lVar11) = iVar13;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar12 + 0x48 + lVar11) =
             *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar14) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar13 & (longlong)(int)param_1[9] - 1U) * 4) = iVar6
        ;
        uVar5 = ~(uint)uVar8 & uVar5;
        plVar7 = (longlong *)local_58[2];
        if ((longlong *)local_58[2] == (longlong *)0x0) {
          plVar7 = local_58;
        }
        iVar13 = (int)local_58[3];
        lVar12 = (longlong)iVar4;
        uVar3 = *(uint *)((longlong)plVar7 + lVar12 * 4) & uVar5;
        if (uVar3 == 0) {
          iVar6 = iVar13 + 0x1e;
          if (-1 < iVar13 + -1) {
            iVar6 = iVar13 + -1;
          }
          iVar6 = iVar6 >> 5;
          iVar2 = iVar6;
          if (iVar6 < iVar4) {
            iVar2 = iVar4;
          }
          if (iVar6 <= iVar4) break;
          lVar11 = 0;
          while( true ) {
            iVar10 = iVar10 + 0x20;
            uVar3 = *(uint *)((longlong)plVar7 + lVar11 * 4 + lVar12 * 4 + 4);
            if (uVar3 != 0) break;
            lVar11 = lVar11 + 1;
            if (iVar2 - lVar12 == lVar11) goto LAB_1417fbda9;
          }
          iVar4 = iVar4 + (int)lVar11 + 1;
          uVar5 = 0xffffffff;
        }
        uVar8 = (ulonglong)(-uVar3 & uVar3);
        uVar14 = uVar8 * 2 + 1;
        lVar12 = 0x3f;
        if (uVar14 != 0) {
          for (; uVar14 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        iVar6 = (iVar10 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
      } while (iVar6 < iVar13);
    }
  }
LAB_1417fbda9:
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417fbdf1 FUN_1417fbdf1 body=77 status=ok
// SIG undefined FUN_1417fbdf1(void)

void FUN_1417fbdf1(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1403c12a8(puVar1,param_1);
  *puVar1 = &PTR_FUN_14ab1fef0;
  *(undefined2 *)(puVar1 + 0x38) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x1c4) = 0;
  puVar1[0x3a] = 0;
  puVar1[0x3b] = 0;
  puVar1[0x3c] = 0;
  puVar1[0x3d] = 0;
  puVar1[0x3e] = 0;
  return;
}



// FUNCTION 1417fbe3e FUN_1417fbe3e body=493 status=ok
// SIG undefined FUN_1417fbe3e(void)

longlong FUN_1417fbe3e(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  wchar_t *local_58;
  code *local_50;
  undefined1 *local_48;
  code **local_40;
  code *local_38;
  code *local_30;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar3 = FUN_140183c32(param_1 + 0x1d0);
  if (lVar3 != 0) {
    lVar3 = FUN_140183c32(param_1 + 0x1d0);
    if (DAT_14cb10130 == 0) {
      local_40 = &local_20;
      local_20 = FUN_140754f84;
      local_30 = FUN_14081d0ea;
      local_38 = FUN_14081d0ea;
      local_48 = &LAB_147da9a76;
      local_50 = FUN_1409f3105;
      local_58 = L"Engine";
      local_60 = 0;
      local_68 = 0x10000000;
      local_70 = 8;
      local_78 = 0x990;
      FUN_14081cfa3(L"/Script/Engine",L"World",&DAT_14cb10130,FUN_14640e230);
    }
    lVar2 = DAT_14cb10130;
    if (DAT_14c951858 == 0) {
      local_40 = &local_20;
      local_20 = FUN_1449e2820;
      local_30 = FUN_14081d0ea;
      local_38 = FUN_14081d0ea;
      local_48 = &LAB_1468c5283;
      local_50 = FUN_142809da0;
      local_58 = L"Engine";
      local_60 = 0x400000000;
      local_68 = 0x10000000;
      local_70 = 8;
      local_78 = 0x50;
      FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
    }
    lVar3 = *(longlong *)(lVar3 + 0x20);
    if (lVar3 != 0) {
      iVar1 = *(int *)(lVar2 + 0x38);
      do {
        if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x38) < iVar1) ||
           (lVar4 = lVar3,
           *(longlong *)(*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)iVar1 * 8) !=
           lVar2 + 0x30)) {
          lVar4 = 0;
        }
      } while ((lVar4 == 0) && (lVar3 = *(longlong *)(lVar3 + 0x20), lVar3 != 0));
      goto LAB_1417fbed4;
    }
  }
  lVar4 = 0;
LAB_1417fbed4:
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return lVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417fc032 FUN_1417fc032 body=50 status=ok
// SIG undefined FUN_1417fc032(void)

undefined8 * FUN_1417fc032(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x98);
  if (plVar1 == (longlong *)0x0) {
    *param_2 = 0;
  }
  else {
    (**(code **)(*plVar1 + 0x2d0))(plVar1,param_2);
  }
  return param_2;
}



// FUNCTION 1417fc064 FUN_1417fc064 body=611 status=ok
// SIG undefined FUN_1417fc064(void)

void FUN_1417fc064(longlong *param_1,undefined8 *param_2)

{
  byte bVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  longlong local_78;
  longlong *local_70;
  longlong *local_68;
  longlong local_60;
  undefined8 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_70 = param_1;
  local_58 = param_2;
  if ((longlong)(int)param_1[0x11] != 0) {
    lVar7 = param_1[0x10];
    local_60 = (longlong)(int)param_1[0x11] * 0xc0 + lVar7;
    do {
      local_78 = lVar7;
      if (*(char *)(lVar7 + 0x88) == '\x01') {
        lVar7 = (**(code **)(*local_70 + 0x180))();
        bVar1 = *(byte *)(lVar7 + 0x152);
        if ((bVar1 != 1) && ((6 < bVar1 || ((0x68U >> (bVar1 & 0x1f) & 1) == 0))))
        goto LAB_1417fc0d0;
        iVar6 = FUN_14490d72a(lVar7);
        if (iVar6 == 2) {
          if ((*(uint *)(local_70 + 1) & 0x10) == 0) {
            lVar7 = local_70[4];
          }
          else {
            lVar7 = 0;
          }
          cVar5 = FUN_1400900b4(lVar7);
          if (cVar5 != '\0') goto LAB_1417fc0d0;
        }
        else if (iVar6 != 1) goto LAB_1417fc0d0;
      }
      else {
LAB_1417fc0d0:
        pcVar2 = (code *)*local_58;
        uVar3 = local_58[1];
        if ((longlong)*(int *)(local_78 + 0x48) != 0) {
          local_80 = *(longlong **)(local_78 + 0x40);
          local_68 = local_80 + (longlong)*(int *)(local_78 + 0x48) * 0xc;
          do {
            if ((longlong)(int)local_80[1] != 0) {
              plVar9 = (longlong *)*local_80;
              plVar10 = plVar9 + (longlong)(int)local_80[1] * 2;
              do {
                lVar7 = plVar9[1];
                if ((longlong)(int)lVar7 != 0) {
                  lVar4 = *plVar9;
                  lVar8 = 0;
                  do {
                    local_50 = *(undefined8 *)(lVar4 + lVar8);
                    cVar5 = (*pcVar2)(uVar3,&local_50);
                    if (cVar5 == '\0') goto LAB_1417fc178;
                    lVar8 = lVar8 + 8;
                  } while ((longlong)(int)lVar7 * 8 != lVar8);
                }
                plVar9 = plVar9 + 2;
              } while (plVar9 != plVar10);
            }
            local_80 = local_80 + 0xc;
          } while (local_80 != local_68);
        }
LAB_1417fc178:
        if ((longlong)*(int *)(local_78 + 0xa8) != 0) {
          local_80 = *(longlong **)(local_78 + 0xa0);
          local_68 = local_80 + (longlong)*(int *)(local_78 + 0xa8) * 0xc;
          do {
            if ((longlong)(int)local_80[1] != 0) {
              plVar9 = (longlong *)*local_80;
              plVar10 = plVar9 + (longlong)(int)local_80[1] * 2;
              do {
                lVar7 = plVar9[1];
                if ((longlong)(int)lVar7 != 0) {
                  lVar4 = *plVar9;
                  lVar8 = 0;
                  do {
                    local_50 = *(undefined8 *)(lVar4 + lVar8);
                    cVar5 = (*pcVar2)(uVar3,&local_50);
                    if (cVar5 == '\0') goto LAB_1417fc21a;
                    lVar8 = lVar8 + 8;
                  } while ((longlong)(int)lVar7 * 8 != lVar8);
                }
                plVar9 = plVar9 + 2;
              } while (plVar9 != plVar10);
            }
            local_80 = local_80 + 0xc;
          } while (local_80 != local_68);
        }
      }
LAB_1417fc21a:
      lVar7 = local_78 + 0xc0;
    } while (lVar7 != local_60);
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1417fc2d4 FUN_1417fc2d4 body=117 status=ok
// SIG undefined FUN_1417fc2d4(void)

void FUN_1417fc2d4(longlong param_1,longlong *param_2)

{
  FUN_1402d084a();
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e31250);
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e39238);
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_14ab2b9e8);
  if (((int)param_2[8] < 0x14d) &&
     ((*(float *)(param_1 + 0x41c) != 0.0 || (NAN(*(float *)(param_1 + 0x41c)))))) {
    *(byte *)(param_1 + 0x39e) = *(byte *)(param_1 + 0x39e) | 2;
  }
  return;
}



// FUNCTION 1417fc34a FUN_1417fc34a body=70 status=ok
// SIG undefined FUN_1417fc34a(void)

undefined8 * FUN_1417fc34a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ab1fef0;
  if (param_1[0x3d] != 0) {
    FUN_1400020a8();
  }
  FUN_1402beb54(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417fc390 FUN_1417fc390 body=130 status=ok
// SIG undefined FUN_1417fc390(void)

undefined8 * FUN_1417fc390(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ab233a0;
  if (param_1[0x26] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x24] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x22] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a772ed0;
  if (*(char *)(param_1 + 0x18) == '\x01') {
    *(undefined1 *)(param_1 + 0x18) = 0;
  }
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417fc412 FUN_1417fc412 body=374 status=ok
// SIG undefined FUN_1417fc412(void)

undefined8 * FUN_1417fc412(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  if (param_1 == param_2) {
    return param_1;
  }
  iVar2 = *(int *)(param_2 + 9);
  plVar1 = param_1 + 8;
  if ((ulonglong)(longlong)iVar2 < 2) {
    if (*plVar1 != 0) {
      FUN_1446efa72(plVar1,0,0,4);
    }
    if (iVar2 == 0) goto LAB_1417fc473;
  }
  else {
    FUN_1446efa72(plVar1,0,iVar2,4);
  }
  puVar6 = param_1 + 7;
  if ((undefined8 *)*plVar1 != (undefined8 *)0x0) {
    puVar6 = (undefined8 *)*plVar1;
  }
  puVar7 = param_2 + 7;
  if ((undefined8 *)param_2[8] != (undefined8 *)0x0) {
    puVar7 = (undefined8 *)param_2[8];
  }
  memcpy(puVar6,puVar7,(longlong)iVar2 << 2);
LAB_1417fc473:
  *(int *)(param_1 + 9) = iVar2;
  uVar3 = *(uint *)(param_2 + 1);
  FUN_14005bc2a(param_1,uVar3);
  iVar2 = *(int *)(param_1 + 1);
  *(uint *)(param_1 + 1) = iVar2 + uVar3;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar3) {
    FUN_1446efaca(param_1);
  }
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
  *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
  uVar4 = *(int *)(param_2 + 5) + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar4) ||
     (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
    uVar5 = 0x80;
    if (0x80 < (int)uVar4) {
      uVar5 = uVar4;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar5;
    FUN_1446efbd8(param_1 + 2,0);
  }
  iVar2 = *(int *)(param_2 + 5);
  *(int *)(param_1 + 5) = iVar2;
  if (iVar2 != 0) {
    puVar6 = param_2 + 2;
    if ((undefined8 *)param_2[4] != (undefined8 *)0x0) {
      puVar6 = (undefined8 *)param_2[4];
    }
    puVar7 = param_1 + 2;
    if ((undefined8 *)param_1[4] != (undefined8 *)0x0) {
      puVar7 = (undefined8 *)param_1[4];
    }
    memcpy(puVar7,puVar6,(ulonglong)(iVar2 + 0x1fU >> 3 & 0xfffffffc));
  }
  if (uVar3 != 0) {
    memcpy((void *)*param_1,(void *)*param_2,(longlong)(int)uVar3 << 4);
  }
  return param_1;
}



// FUNCTION 1417fc588 FUN_1417fc588 body=353 status=ok
// SIG undefined FUN_1417fc588(void)

void FUN_1417fc588(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1417fc60f;
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
LAB_1417fc60f:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 1417fc6ea FUN_1417fc6ea body=482 status=ok
// SIG undefined FUN_1417fc6ea(void)

void FUN_1417fc6ea(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0x58;
        uVar4 = *(undefined8 *)(lVar3 + lVar7);
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar8 = (uint)uVar4 & 0xffff;
        uVar10 = (longlong)
                 (int)(((uint)uVar4 << 0x10 | uVar8) + (int)((ulonglong)uVar4 >> 0x20) +
                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x54 + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x50 + lVar7) =
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



// FUNCTION 1417fc8ce FUN_1417fc8ce body=353 status=ok
// SIG undefined FUN_1417fc8ce(void)

void FUN_1417fc8ce(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1417fc953;
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
LAB_1417fc953:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 1417fca2f FUN_1417fca2f body=49 status=ok
// SIG undefined FUN_1417fca2f(void)

longlong FUN_1417fca2f(void)

{
  if (DAT_14cb127e8 == 0) {
    FUN_14086a14e(&DAT_14cb127e8,&PTR_FUN_14ab34940);
  }
  return DAT_14cb127e8;
}



// FUNCTION 1417fca60 FUN_1417fca60 body=199 status=ok
// SIG undefined FUN_1417fca60(void)

void FUN_1417fca60(undefined8 param_1,longlong *param_2)

{
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
  local_198 = param_2;
  switchD_143c3d4dc::caseD_20();
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cbe8);
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_14ab36890);
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cbb8);
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cbf8);
  if ((local_10 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x0001417fcb1f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x218))(param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_1c8,&DAT_149e3ca68);
}



// FUNCTION 1417fcb28 FUN_1417fcb28 body=127 status=ok
// SIG undefined FUN_1417fcb28(void)

void FUN_1417fcb28(longlong param_1)

{
  char cVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(byte *)(*(longlong *)(param_1 + 0x10) + 0xd5) & 4) != 0) {
    local_38 = 0;
    uStack_30 = 0;
    FUN_1400033ba(param_1,0,0,0);
  }
  cVar1 = FUN_1400439fc(param_1,0,&local_19);
  if (cVar1 == '\0') {
    if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58);
}



// FUNCTION 1417fcbbc FUN_1417fcbbc body=133 status=ok
// SIG undefined FUN_1417fcbbc(void)

longlong * FUN_1417fcbbc(longlong *param_1,longlong *param_2,undefined8 param_3)

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
        FUN_14099d612(param_2,iVar1);
      }
      *(longlong *)(*param_2 + (longlong)iVar1 * 8) = lVar4;
      iVar5 = iVar5 + 1;
    } while (iVar2 != iVar5);
  }
  return param_2;
}



// FUNCTION 1417fcc42 FUN_1417fcc42 body=2867 status=ok
// SIG undefined FUN_1417fcc42(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1417fcc42(longlong param_1,longlong *param_2)

{
  double *pdVar1;
  double *pdVar2;
  undefined1 auVar3 [16];
  double dVar4;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  longlong lVar16;
  ulonglong uVar17;
  longlong lVar18;
  int iVar19;
  longlong lVar20;
  longlong *plVar21;
  undefined4 uVar22;
  uint uVar23;
  longlong *plVar24;
  code **ppcVar25;
  undefined8 *puVar26;
  undefined8 *puVar27;
  ulonglong uVar28;
  longlong lVar29;
  longlong *plVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  double dVar46;
  double dVar47;
  undefined1 auVar48 [16];
  double dVar49;
  double dVar50;
  undefined1 auStack_328 [32];
  undefined4 local_308;
  undefined4 local_300;
  undefined4 local_2f8;
  undefined8 local_2f0;
  wchar_t *local_2e8;
  undefined1 *local_2e0;
  undefined1 *local_2d8;
  code **local_2d0;
  undefined1 *local_2c8;
  code *local_2c0;
  longlong *local_2b0;
  longlong *local_2a8;
  longlong local_2a0;
  double local_298;
  double dStack_290;
  undefined1 local_288 [16];
  double local_278;
  double dStack_270;
  double local_268;
  undefined8 uStack_260;
  double local_258;
  double dStack_250;
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
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  undefined8 uStack_1e0;
  double local_1d8;
  double dStack_1d0;
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
  code *local_178;
  double local_170;
  double local_168;
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
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_328;
  plVar30 = (longlong *)param_2[0xcb];
  if (plVar30 == (longlong *)0x0) {
    plVar30 = (longlong *)param_2[0xcc];
    if ((DAT_14c950c29 & plVar30 != (longlong *)0x0) != 0) goto LAB_1417fcfac;
    if (plVar30 != (longlong *)0x0) goto LAB_1417fccec;
  }
  else {
    if (DAT_14c950c29 == 1) {
LAB_1417fcfac:
      FUN_14689c22e(plVar30);
    }
LAB_1417fccec:
    if (DAT_14cb06da8 == 0) {
      local_2d0 = &local_178;
      local_178 = FUN_1449e2820;
      local_2c0 = FUN_14081d0ea;
      local_2c8 = &LAB_1464003b0;
      local_2d8 = &LAB_147d17bdf;
      local_2e0 = &LAB_1417edf22;
      local_2e8 = L"Engine";
      local_2f0 = 0;
      local_2f8 = 0x10000000;
      local_300 = 8;
      local_308 = 0x588;
      FUN_14081cfa3(L"/Script/Engine",L"SkeletalMesh",&DAT_14cb06da8,FUN_14640038e);
    }
    if ((*(int *)(DAT_14cb06da8 + 0x38) <= *(int *)(plVar30[2] + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(plVar30[2] + 0x30) + (longlong)*(int *)(DAT_14cb06da8 + 0x38) * 8) ==
        DAT_14cb06da8 + 0x30)) goto LAB_1417fcd1f;
  }
  plVar30 = (longlong *)0x0;
LAB_1417fcd1f:
  if ((((*(int *)((longlong)param_2 + 0x66c) == 0) ||
       (uVar23 = *(uint *)(param_2 + 0xcd), (int)uVar23 < 0)) || (DAT_14c9647dc <= (int)uVar23)) ||
     (((plVar24 = (longlong *)
                  ((ulonglong)((uVar23 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar23 >> 0x10) * 8)),
       plVar24 == (longlong *)0x0 || ((int)plVar24[2] != *(int *)((longlong)param_2 + 0x66c))) ||
      (((*(uint *)(plVar24 + 1) & 0x10200000) != 0 || (lVar16 = *plVar24, lVar16 == 0)))))) {
    if ((longlong *)(param_1 + 8) != param_2 + (longlong)(int)param_2[0xe3] * 2 + 0xda) {
      iVar19 = (int)param_2[(longlong)(int)param_2[0xe3] * 2 + 0xdb];
      *(int *)(param_1 + 0x10) = iVar19;
      if (iVar19 == 0 && *(int *)(param_1 + 0x14) == 0) {
        *(undefined4 *)(param_1 + 0x14) = 0;
      }
      else {
        FUN_144756262((longlong *)(param_1 + 8),iVar19);
        if (iVar19 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_f0 ^ (ulonglong)auStack_328);
        }
      }
    }
  }
  else {
    plVar24 = (longlong *)(**(code **)(*param_2 + 0xa78))(param_2,0);
    uVar23 = *(uint *)(plVar24 + 1);
    uVar28 = (ulonglong)uVar23;
    if (uVar28 == 0) {
      if (plVar30 != (longlong *)0x0) {
        lVar16 = (**(code **)(*plVar30 + 0x308))(plVar30);
        iVar19 = *(int *)(lVar16 + 0x28);
        if (iVar19 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(iVar19);
        }
        *(undefined4 *)(param_1 + 0x10) = 0;
        if (*(int *)(param_1 + 0x14) != iVar19) {
          FUN_1401a2688(param_1 + 8,iVar19);
        }
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_f0 ^ (ulonglong)auStack_328);
      }
    }
    else {
      plVar21 = (longlong *)(param_1 + 8);
      FUN_140ee6e38(plVar21,uVar28);
      ppcVar25 = (code **)(ulonglong)uVar23;
      local_2b0 = plVar21;
      FUN_146ed49ae(plVar21);
      if (0 < (int)uVar23) {
        local_2a8 = (longlong *)((longlong)*(int *)(lVar16 + 0x718) * 0x10 + lVar16 + 0x6d0);
        local_2a0 = uVar28 * 0xc;
        lVar16 = 0;
        uVar28 = 0;
        do {
          if ((longlong)uVar28 < (longlong)(int)plVar24[1]) {
            iVar19 = *(int *)(*plVar24 + uVar28 * 4);
            if (((longlong)iVar19 == -1) || ((int)local_2a8[1] <= iVar19)) goto LAB_1417fd13e;
            puVar26 = (undefined8 *)((longlong)iVar19 * 0x60 + *local_2a8);
            puVar27 = (undefined8 *)(lVar16 * 8 + *local_2b0);
            for (lVar20 = 0xc; lVar20 != 0; lVar20 = lVar20 + -1) {
              *puVar27 = *puVar26;
              puVar26 = puVar26 + 1;
              puVar27 = puVar27 + 1;
            }
          }
          else {
LAB_1417fd13e:
            if (plVar30 != (longlong *)0x0) {
              lVar20 = (**(code **)(*plVar30 + 0x308))(plVar30);
              uVar22 = SUB84(ppcVar25,0);
              if ((longlong)uVar28 < (longlong)*(int *)(lVar20 + 0x28)) {
                iVar19 = *(int *)(*(longlong *)(lVar20 + 0x20) + 8 + lVar16);
                uVar17 = (ulonglong)iVar19;
                if ((((longlong)uVar17 < 0) || (uVar28 <= uVar17)) ||
                   (*(int *)(param_1 + 0x10) <= iVar19)) goto LAB_1417fd640;
                lVar20 = *local_2b0;
                lVar29 = uVar17 * 0x60;
                pdVar1 = (double *)(lVar20 + lVar29);
                plVar21 = plVar30;
                lVar18 = (**(code **)(*plVar30 + 0x308))();
                auVar48 = _DAT_149934d80;
                lVar18 = *(longlong *)(lVar18 + 0x30);
                auVar37 = *(undefined1 (*) [16])(lVar18 + 0x40 + lVar16 * 8);
                dVar43 = auVar37._0_8_;
                dVar35 = auVar37._8_8_;
                auVar38 = *(undefined1 (*) [16])(lVar18 + 0x50 + lVar16 * 8);
                dVar33 = auVar38._0_8_;
                dVar7 = auVar38._8_8_;
                auVar31 = *(undefined1 (*) [16])(lVar20 + 0x40 + lVar29);
                auVar32 = *(undefined1 (*) [16])(lVar20 + 0x50 + lVar29);
                auVar37 = minpd(auVar31,auVar37);
                auVar44 = minpd(auVar32,auVar38);
                auVar38._8_8_ = -(ulonglong)(auVar37._8_8_ < 0.0);
                auVar38._0_8_ = -(ulonglong)(auVar37._0_8_ < 0.0);
                iVar19 = movmskpd((int)plVar21,auVar38);
                auVar45._8_8_ = -(ulonglong)(auVar44._8_8_ < 0.0);
                auVar45._0_8_ = -(ulonglong)(auVar44._0_8_ < 0.0);
                uVar23 = movmskpd(uVar22,auVar45);
                if ((uVar23 & 0x3fffffff) == 0 && iVar19 == 0) {
                  dVar46 = *pdVar1;
                  dVar4 = pdVar1[1];
                  dVar8 = pdVar1[2];
                  dVar49 = pdVar1[3];
                  pdVar2 = (double *)(lVar18 + lVar16 * 8);
                  dVar12 = *pdVar2;
                  dVar13 = pdVar2[1];
                  pdVar2 = (double *)(lVar18 + 0x10 + lVar16 * 8);
                  dVar14 = *pdVar2;
                  dVar15 = pdVar2[1];
                  pdVar2 = (double *)(lVar18 + 0x18 + lVar16 * 8);
                  dVar39 = *pdVar2;
                  dVar47 = *pdVar2;
                  pdVar2 = (double *)(lVar18 + lVar16 * 8);
                  dVar6 = *pdVar2;
                  dVar10 = *pdVar2;
                  pdVar2 = (double *)(lVar18 + 8 + lVar16 * 8);
                  dVar11 = *pdVar2;
                  dVar40 = *pdVar2;
                  pdVar2 = (double *)(lVar18 + 0x10 + lVar16 * 8);
                  dVar41 = *pdVar2;
                  dVar42 = *pdVar2;
                  dVar34 = dVar4 * dVar41 * -1.0 +
                           dVar8 * dVar11 + dVar49 * dVar6 * 1.0 + dVar46 * dVar39;
                  dVar36 = dVar46 * dVar42 * 1.0 +
                           dVar49 * dVar40 + dVar8 * dVar10 * -1.0 + dVar4 * dVar47;
                  auVar37._0_8_ =
                       dVar49 * dVar41 * 1.0 +
                       ((dVar6 * dVar4 * 1.0 + dVar8 * dVar39) - dVar46 * dVar11);
                  auVar37._8_8_ =
                       dVar8 * dVar42 * -1.0 +
                       ((dVar10 * dVar46 * -1.0 + dVar49 * dVar47) - dVar4 * dVar40);
                  dVar40 = pdVar1[4] * dVar43;
                  dVar8 = pdVar1[5] * dVar35;
                  dVar46 = pdVar1[6] * dVar33;
                  dVar4 = pdVar1[7] * dVar7;
                  dVar41 = dVar8 * dVar12 - dVar13 * dVar40;
                  dVar49 = dVar46 * dVar13 - dVar14 * dVar8;
                  dVar50 = dVar40 * dVar14 - dVar12 * dVar46;
                  dVar42 = dVar4 * dVar15 - dVar15 * dVar4;
                  dVar49 = dVar49 + dVar49;
                  dVar50 = dVar50 + dVar50;
                  dVar41 = dVar41 + dVar41;
                  dVar42 = dVar42 + dVar42;
                  dVar10 = auVar31._0_8_ * dVar43;
                  dVar11 = auVar31._8_8_ * dVar35;
                  dVar6 = auVar32._0_8_ * dVar33;
                  dVar7 = auVar32._8_8_ * dVar7;
                  pdVar1 = (double *)(lVar18 + 0x20 + lVar16 * 8);
                  dVar35 = (dVar41 * dVar13 - dVar14 * dVar50) + dVar39 * dVar49 + dVar40 + *pdVar1;
                  dVar40 = (dVar49 * dVar14 - dVar41 * dVar12) + dVar47 * dVar50 + dVar8 + pdVar1[1]
                  ;
                  pdVar1 = (double *)(lVar18 + 0x30 + lVar16 * 8);
                  dVar43 = (dVar50 * dVar12 - dVar13 * dVar49) + dVar39 * dVar41 + dVar46 + *pdVar1;
                  dVar33 = (dVar42 * dVar15 - dVar42 * dVar15) + dVar47 * dVar42 + dVar4 + pdVar1[1]
                  ;
                  ppcVar25 = (code **)0x0;
                }
                else {
                  dVar10 = auVar31._0_8_ * dVar43;
                  dVar11 = auVar31._8_8_ * dVar35;
                  dVar6 = auVar32._0_8_ * dVar33;
                  dVar7 = auVar32._8_8_ * dVar7;
                  pdVar2 = (double *)(lVar18 + lVar16 * 8);
                  dVar40 = *pdVar2;
                  dVar47 = pdVar2[1];
                  dVar36 = *(double *)(lVar18 + 0x10 + lVar16 * 8);
                  dVar39 = dVar47 + dVar47;
                  dVar41 = dVar36 + dVar36;
                  dVar34 = dVar40 * (dVar40 + dVar40);
                  local_1f8 = ((double)DAT_149934d80 - (dVar36 * dVar41 + dVar47 * dVar39)) * dVar43
                  ;
                  dStack_1d0 = (DAT_149934d80._8_8_ - (dVar36 * dVar41 + dVar34)) * dVar35;
                  local_1a8 = (1.0 - (dVar34 + dVar47 * dVar39)) * dVar33;
                  dVar36 = *(double *)(lVar18 + lVar16 * 8) * dVar41;
                  pdVar2 = (double *)(lVar18 + 0x18 + lVar16 * 8);
                  dVar34 = *pdVar2;
                  dVar42 = dVar41 * dVar34;
                  dVar46 = (dVar40 + dVar40) * *pdVar2;
                  dVar34 = dVar39 * dVar34;
                  dStack_1f0 = (dVar39 * dVar40 + dVar42) * dVar43;
                  local_1c8 = (dVar41 * dVar47 + dVar46) * dVar35;
                  local_1b8 = (dVar34 + dVar36) * dVar33;
                  local_1d8 = (dVar39 * dVar40 - dVar42) * dVar35;
                  dStack_1b0 = (dVar41 * dVar47 - dVar46) * dVar33;
                  local_1e8 = (dVar36 - dVar34) * dVar43;
                  uStack_1e0 = 0;
                  uStack_1c0 = 0;
                  uStack_1a0 = 0;
                  puVar26 = (undefined8 *)(lVar18 + 0x20 + lVar16 * 8);
                  local_198 = *puVar26;
                  uStack_190 = puVar26[1];
                  local_188 = *(undefined8 *)(lVar18 + 0x30 + lVar16 * 8);
                  uStack_180 = 0x3ff0000000000000;
                  dVar33 = *pdVar1;
                  dVar34 = pdVar1[1];
                  dVar36 = pdVar1[2];
                  local_268 = pdVar1[8];
                  local_258 = pdVar1[9];
                  dStack_230 = pdVar1[10];
                  dVar47 = dVar34 + dVar34;
                  dVar35 = dVar36 + dVar36;
                  dVar43 = dVar33 * (dVar33 + dVar33);
                  local_278 = ((double)DAT_149934d80 - (dVar36 * dVar35 + dVar34 * dVar47)) *
                              local_268;
                  dStack_250 = (DAT_149934d80._8_8_ - (dVar36 * dVar35 + dVar43)) * local_258;
                  local_228 = (1.0 - (dVar43 + dVar34 * dVar47)) * dStack_230;
                  dVar43 = pdVar1[3];
                  dVar36 = dVar35 * dVar43;
                  dVar40 = (dVar33 + dVar33) * pdVar1[3];
                  dVar43 = dVar47 * dVar43;
                  dStack_270 = (dVar47 * dVar33 + dVar36) * local_268;
                  local_248 = (dVar35 * dVar34 + dVar40) * local_258;
                  local_238 = (dVar43 + *pdVar1 * dVar35) * dStack_230;
                  local_268 = (*pdVar1 * dVar35 - dVar43) * local_268;
                  local_258 = (dVar47 * dVar33 - dVar36) * local_258;
                  dStack_230 = (dVar35 * dVar34 - dVar40) * dStack_230;
                  uStack_260 = 0;
                  uStack_240 = 0;
                  uStack_220 = 0;
                  local_218 = pdVar1[4];
                  dStack_210 = pdVar1[5];
                  local_208 = pdVar1[6];
                  uStack_200 = 0x3ff0000000000000;
                  ppcVar25 = &local_178;
                  FUN_1447fea8d(ppcVar25,&local_278,&local_1f8);
                  FUN_144a1c686(ppcVar25,0x3e45798ee0000000);
                  auVar31._8_8_ = -(ulonglong)(0.0 <= dVar11);
                  auVar31._0_8_ = -(ulonglong)(0.0 <= dVar10);
                  auVar37 = blendvpd(_DAT_149936790,auVar48,auVar31);
                  dVar43 = (double)(~-(ulonglong)(0.0 <= dVar6) & 0xbff0000000000000 |
                                   -(ulonglong)(0.0 <= dVar6) & 0x3ff0000000000000);
                  dVar33 = auVar37._0_8_;
                  local_168 = local_168 * dVar33;
                  local_170 = local_170 * dVar33;
                  local_178 = (code *)((double)local_178 * dVar33);
                  dVar33 = auVar37._8_8_;
                  local_148 = local_148 * dVar33;
                  local_150 = local_150 * dVar33;
                  local_158 = dVar33 * local_158;
                  local_128 = local_128 * dVar43;
                  local_130 = local_130 * dVar43;
                  local_138 = dVar43 * local_138;
                  FUN_14481fd10(&local_298);
                  dVar43 = local_288._0_8_;
                  dVar33 = local_288._8_8_;
                  dVar34 = dVar43 * dVar43 + local_298 * local_298;
                  dVar36 = dVar33 * dVar33 + dStack_290 * dStack_290;
                  auVar44._0_8_ = dVar34 + dVar36;
                  auVar44._8_8_ = dVar34 + dVar36;
                  auVar32._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar44._8_8_);
                  auVar32._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar44._0_8_);
                  auVar37 = sqrtpd(auVar44,auVar44);
                  auVar37 = divpd(auVar48,auVar37);
                  auVar48._0_8_ = auVar37._0_8_ * dVar43;
                  auVar48._8_8_ = auVar37._8_8_ * dVar33;
                  dVar34 = (double)((ulonglong)(local_298 * auVar37._0_8_) &
                                   -(ulonglong)(9.99999993922529e-09 <= auVar44._0_8_));
                  dVar36 = (double)((ulonglong)(dStack_290 * auVar37._8_8_) &
                                   -(ulonglong)(9.99999993922529e-09 <= auVar44._8_8_));
                  auVar37 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar48,auVar32);
                  dVar33 = 0.0;
                  dVar43 = local_108;
                  dVar35 = local_118;
                  dVar40 = dStack_110;
                }
              }
              else {
LAB_1417fd640:
                lVar20 = (**(code **)(*plVar30 + 0x308))(plVar30);
                lVar20 = *(longlong *)(lVar20 + 0x30);
                pdVar1 = (double *)(lVar20 + lVar16 * 8);
                dVar34 = *pdVar1;
                dVar36 = pdVar1[1];
                auVar37 = *(undefined1 (*) [16])(lVar20 + 0x10 + lVar16 * 8);
                pdVar1 = (double *)(lVar20 + 0x20 + lVar16 * 8);
                dVar35 = *pdVar1;
                dVar40 = pdVar1[1];
                pdVar1 = (double *)(lVar20 + 0x30 + lVar16 * 8);
                dVar43 = *pdVar1;
                dVar33 = pdVar1[1];
                pdVar1 = (double *)(lVar20 + 0x40 + lVar16 * 8);
                dVar10 = *pdVar1;
                dVar11 = pdVar1[1];
                pdVar1 = (double *)(lVar20 + 0x50 + lVar16 * 8);
                dVar6 = *pdVar1;
                dVar7 = pdVar1[1];
              }
              lVar20 = *local_2b0;
              pdVar1 = (double *)(lVar20 + lVar16 * 8);
              *pdVar1 = dVar34;
              pdVar1[1] = dVar36;
              *(undefined1 (*) [16])(lVar20 + 0x10 + lVar16 * 8) = auVar37;
              pdVar1 = (double *)(lVar20 + 0x20 + lVar16 * 8);
              *pdVar1 = dVar35;
              pdVar1[1] = dVar40;
              auVar3._8_4_ = SUB84(dVar33,0);
              auVar3._0_8_ = dVar43;
              auVar3._12_4_ = (int)((ulonglong)dVar33 >> 0x20);
              *(undefined1 (*) [16])(lVar20 + 0x30 + lVar16 * 8) = auVar3;
              auVar9._8_4_ = SUB84(dVar11,0);
              auVar9._0_8_ = dVar10;
              auVar9._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
              *(undefined1 (*) [16])(lVar20 + 0x40 + lVar16 * 8) = auVar9;
              auVar5._8_4_ = SUB84(dVar7,0);
              auVar5._0_8_ = dVar6;
              auVar5._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
              *(undefined1 (*) [16])(lVar20 + 0x50 + lVar16 * 8) = auVar5;
            }
          }
          uVar28 = uVar28 + 1;
          lVar16 = lVar16 + 0xc;
        } while (local_2a0 != lVar16);
      }
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_328) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1417fd866 FUN_1417fd866 body=538 status=ok
// SIG undefined FUN_1417fd866(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1417fd866(longlong param_1,longlong param_2,char param_3)

{
  longlong *plVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong *plVar12;
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
  code *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar1 = (longlong *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (*(int *)(param_1 + 0x24) < 0) {
    FUN_14491ce3c(plVar1,0);
  }
  if (param_3 == '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
  }
  plVar12 = *(longlong **)(param_2 + 0x658);
  if (plVar12 == (longlong *)0x0) {
    plVar12 = *(longlong **)(param_2 + 0x660);
    if ((DAT_14c950c29 & plVar12 != (longlong *)0x0) != 0) goto LAB_1417fda92;
    if (plVar12 == (longlong *)0x0) goto LAB_1417fd99b;
  }
  else if (DAT_14c950c29 == 1) {
LAB_1417fda92:
    FUN_14689c22e(plVar12);
  }
  if (DAT_14cb06da8 == 0) {
    local_50 = &local_30;
    local_30 = FUN_1449e2820;
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
  if ((*(int *)(DAT_14cb06da8 + 0x38) <= *(int *)(plVar12[2] + 0x38)) &&
     (*(longlong *)(*(longlong *)(plVar12[2] + 0x30) + (longlong)*(int *)(DAT_14cb06da8 + 0x38) * 8)
      == DAT_14cb06da8 + 0x30)) {
    lVar11 = (**(code **)(*plVar12 + 0x308))(plVar12);
    uVar4 = *(uint *)(lVar11 + 0x28);
    iVar5 = *(int *)(param_1 + 0x20);
    *(uint *)(param_1 + 0x20) = iVar5 + uVar4;
    if ((uint)(*(int *)(param_1 + 0x24) - iVar5) < uVar4) {
      FUN_140491d2e(plVar1);
    }
    if (0 < (int)uVar4) {
      lVar11 = 0;
      do {
        uVar10 = _DAT_14c846288;
        lVar6 = *plVar1;
        puVar3 = (undefined8 *)(lVar6 + 0x30 + lVar11);
        *puVar3 = _DAT_14c846280;
        puVar3[1] = uVar10;
        uVar10 = _DAT_14c846278;
        puVar3 = (undefined8 *)(lVar6 + 0x20 + lVar11);
        *puVar3 = _DAT_14c846270;
        puVar3[1] = uVar10;
        uVar10 = _DAT_14c846268;
        puVar3 = (undefined8 *)(lVar6 + 0x10 + lVar11);
        *puVar3 = _DAT_14c846260;
        puVar3[1] = uVar10;
        uVar9 = DAT_14c846258._4_4_;
        uVar8 = (undefined4)DAT_14c846258;
        uVar7 = DAT_14c846254;
        puVar2 = (undefined4 *)(lVar6 + lVar11);
        *puVar2 = DAT_14c846250;
        puVar2[1] = uVar7;
        puVar2[2] = uVar8;
        puVar2[3] = uVar9;
        lVar11 = lVar11 + 0x40;
      } while ((ulonglong)uVar4 << 6 != lVar11);
    }
  }
LAB_1417fd99b:
  if ((local_28 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1417fdaa0 FUN_1417fdaa0 body=1364 status=ok
// SIG undefined FUN_1417fdaa0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_1417fdaa0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  void *pvVar2;
  char cVar3;
  undefined4 uVar4;
  DWORD DVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined2 *puVar9;
  longlong lVar10;
  undefined1 auStack_88 [32];
  undefined2 **local_68;
  undefined8 uStack_60;
  undefined2 *local_58;
  ulonglong uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = param_3;
  uVar4 = FUN_140988638(&local_48,L"SESSION",1);
  if ((char)uVar4 == '\0') goto LAB_1417fdadd;
  cVar3 = FUN_140988638(&local_48,L"AUTH",1);
  if (cVar3 == '\0') {
    cVar3 = FUN_140988638(&local_48,L"DENY",1);
    if (cVar3 == '\0') {
      cVar3 = FUN_140988638(&local_48,L"DENYALL",1);
      if (cVar3 != '\0') {
        FUN_1447a1747(DAT_14c867010,DAT_14c867018);
        DAT_14c867018 = 0;
        if (DAT_14c86701c != 0) {
          FUN_1408be2c4(&DAT_14c867010,0);
        }
        goto LAB_1417fdadd;
      }
      cVar3 = FUN_140988638(&local_48,L"STATUS",1);
      if (cVar3 == '\0') {
        cVar3 = FUN_140988638(&local_48,L"SETNAME",1);
        if (cVar3 == '\0') {
          cVar3 = FUN_140988638(&local_48,L"SETOWNER",1);
          if (cVar3 == '\0') {
            FUN_1468161aa(param_4,L"Usage: SESSION <Command>");
            FUN_1468161aa(param_4,&DAT_149dfb77a);
            FUN_1468161aa(param_4,L"Command");
            FUN_1468161aa(param_4,
                          L"    AUTH <UserName> = Authorize a user to interact with this instance");
            FUN_1468161aa(param_4,
                          L"    DENY <UserName> = Unauthorize a user from interacting with this instance"
                         );
            FUN_1468161aa(param_4,L"    DENYALL = Removes all authorized session users");
            FUN_1468161aa(param_4,L"    SETNAME <Name> = Sets the name of this instance");
            FUN_1468161aa(param_4,
                          L"    SETOWNER <Owner> = Sets the name of the owner of this instance");
            FUN_1468161aa(param_4,L"    STATUS = Displays the status of this application session");
            goto LAB_1417fdadd;
          }
          FUN_14619c2be(&local_58,&local_48,0);
          puVar9 = local_58;
          uVar1 = (uint)uStack_50;
          DAT_14c867008 = (uint)uStack_50;
          if ((uint)uStack_50 != 0 || DAT_14c86700c != 0) {
            FUN_1446dd670(&DAT_14c867000,uStack_50 & 0xffffffff);
            pvVar2 = DAT_14c867000;
            goto joined_r0x0001417fdd7d;
          }
          DAT_14c86700c = 0;
        }
        else {
          FUN_14619c2be(&local_58,&local_48,0);
          puVar9 = local_58;
          uVar1 = (uint)uStack_50;
          DAT_14c867038 = (uint)uStack_50;
          if ((uint)uStack_50 == 0 && DAT_14c86703c == 0) {
            DAT_14c86703c = 0;
          }
          else {
            FUN_1446dd670(&DAT_14c867030,uStack_50 & 0xffffffff);
            pvVar2 = DAT_14c867030;
joined_r0x0001417fdd7d:
            if (uVar1 != 0) {
              memcpy(pvVar2,puVar9,(longlong)(int)uVar1 * 2);
            }
          }
        }
        goto LAB_1417fdb44;
      }
      lVar6 = FUN_140932b5c();
      FUN_145bdec9c(&local_68);
      local_58 = (undefined2 *)0x0;
      uStack_50 = 0;
      FUN_1407c869a(&local_68,&local_58,0);
      puVar9 = local_58;
      if ((uint)uStack_50 == 0) {
        puVar9 = &DAT_149dfb77a;
      }
      FUN_140047918(param_4,L"Instance ID: %s",puVar9);
      if (local_58 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      DVar5 = GetCurrentProcessId();
      uVar7 = FUN_1468306ee();
      FUN_140002266(&local_58,L"%s-%i",uVar7,DVar5);
      puVar9 = local_58;
      if ((uint)uStack_50 == 0) {
        puVar9 = &DAT_149dfb77a;
      }
      FUN_140047918(param_4,L"Instance Name: %s",puVar9);
      if (local_58 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      local_68 = _DAT_14c867020;
      uStack_60 = _DAT_14c867028;
      local_58 = (undefined2 *)0x0;
      uStack_50 = 0;
      FUN_1407c869a(&local_68,&local_58,0);
      puVar9 = local_58;
      if ((uint)uStack_50 == 0) {
        puVar9 = &DAT_149dfb77a;
      }
      FUN_140047918(param_4,L"Session ID: %s",puVar9);
      if (local_58 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      pvVar2 = DAT_14c867030;
      local_58 = (undefined2 *)0x0;
      lVar10 = (longlong)(int)DAT_14c867038;
      uStack_50 = CONCAT44(uStack_50._4_4_,DAT_14c867038);
      if (lVar10 == 0) {
        uStack_50 = (ulonglong)DAT_14c867038;
LAB_1417fde6a:
        puVar9 = &DAT_149dfb77a;
      }
      else {
        FUN_1446dd670(&local_58,DAT_14c867038,0);
        memcpy(local_58,pvVar2,lVar10 * 2);
        puVar9 = local_58;
        if ((uint)uStack_50 == 0) goto LAB_1417fde6a;
      }
      FUN_140047918(param_4,L"Session Name: %s",puVar9);
      if (local_58 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      pvVar2 = DAT_14c867000;
      local_58 = (undefined2 *)0x0;
      lVar10 = (longlong)(int)DAT_14c867008;
      uStack_50 = CONCAT44(uStack_50._4_4_,DAT_14c867008);
      if (lVar10 == 0) {
        uStack_50 = (ulonglong)DAT_14c867008;
LAB_1417fdeec:
        puVar9 = &DAT_149dfb77a;
      }
      else {
        FUN_1446dd670(&local_58,DAT_14c867008,0);
        memcpy(local_58,pvVar2,lVar10 * 2);
        puVar9 = local_58;
        if ((uint)uStack_50 == 0) goto LAB_1417fdeec;
      }
      FUN_140047918(param_4,L"Session Owner: %s",puVar9);
      if (local_58 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      puVar8 = (undefined8 *)
               FUN_1447a1f4a(*(undefined8 *)(lVar6 + 0x10 + (ulonglong)(DAT_14c759098 ^ 1) * 8));
      if (*(int *)(puVar8 + 1) == 0) {
        puVar9 = &DAT_149dfb77a;
      }
      else {
        puVar9 = (undefined2 *)*puVar8;
      }
      FUN_140047918(param_4,L"Standalone: %s",puVar9);
      goto LAB_1417fdadd;
    }
    FUN_14619c2be(&local_58,&local_48,0);
    local_68 = &local_58;
    FUN_140c8411c(&DAT_14c867010);
  }
  else {
    FUN_14619c2be(&local_58,&local_48,0);
    FUN_1412fabe8(&DAT_14c867010,&local_58);
  }
LAB_1417fdb44:
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
LAB_1417fdadd:
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417fdff6 FUN_1417fdff6 body=426 status=ok
// SIG undefined FUN_1417fdff6(void)

undefined8
FUN_1417fdff6(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,uint param_4,char param_5)

{
  DWORD DVar1;
  DWORD dwTlsIndex;
  DWORD DVar2;
  LPVOID lpTlsValue;
  bool bVar3;
  undefined1 auStack_88 [40];
  undefined8 *local_60;
  undefined8 local_58;
  longlong local_50;
  char local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_5 != '\0') {
    dwTlsIndex = DAT_14c7585d0;
    if (DAT_14c7585d0 == 0xffffffff) {
      dwTlsIndex = TlsAlloc();
      DVar2 = 0xffffffff;
      LOCK();
      bVar3 = DAT_14c7585d0 != 0xffffffff;
      DVar1 = dwTlsIndex;
      if (bVar3) {
        DVar2 = DAT_14c7585d0;
        DVar1 = DAT_14c7585d0;
      }
      DAT_14c7585d0 = DVar1;
      UNLOCK();
      if (bVar3) {
        TlsFree(dwTlsIndex);
        dwTlsIndex = DVar2;
      }
    }
    lpTlsValue = TlsGetValue(dwTlsIndex);
    if (lpTlsValue == (LPVOID)0x0) {
      lpTlsValue = (LPVOID)FUN_140036a08(&local_60);
      FUN_140fddf04(lpTlsValue);
      TlsSetValue(dwTlsIndex,lpTlsValue);
    }
    local_60 = (undefined8 *)((longlong)lpTlsValue + 0x10);
    local_58 = *(undefined8 *)((longlong)lpTlsValue + 0x10);
    local_50 = *(longlong *)((longlong)lpTlsValue + 0x20);
    local_48 = '\0';
    local_40 = *(undefined8 *)((longlong)lpTlsValue + 0x28);
    *(undefined8 ***)((longlong)lpTlsValue + 0x28) = &local_60;
    *(int *)((longlong)lpTlsValue + 0x30) = *(int *)((longlong)lpTlsValue + 0x30) + 1;
    (*(code *)**(undefined8 **)*param_3)();
    if (local_48 == '\0') {
      local_48 = '\x01';
      *(int *)(local_60 + 4) = *(int *)(local_60 + 4) + -1;
      if (local_50 != local_60[2]) {
        FUN_14004673c();
      }
      *local_60 = local_58;
      local_60[3] = local_40;
    }
  }
  if (param_4 < 0x18) {
    FUN_1437e5522(param_2 + 5,param_3,param_2);
  }
  else {
    param_2[5] = &PTR_FUN_14ab46080;
    *param_2 = *param_3;
    param_2[1] = param_3[1];
    param_3[1] = 0;
    param_2[2] = param_3[2];
    param_3[2] = 0;
  }
  *param_1 = LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
             TTaskDelegateDummy::vftable;
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 0;
}



// FUNCTION 1417fe1a1 FUN_1417fe1a1 body=49 status=ok
// SIG undefined FUN_1417fe1a1(void)

longlong FUN_1417fe1a1(void)

{
  if (DAT_14cb1a350 == 0) {
    FUN_14086a14e(&DAT_14cb1a350,&PTR_FUN_14ab4aad8);
  }
  return DAT_14cb1a350;
}



// FUNCTION 1417fe1d2 FUN_1417fe1d2 body=49 status=ok
// SIG undefined FUN_1417fe1d2(void)

longlong FUN_1417fe1d2(void)

{
  if (DAT_14cb1a368 == 0) {
    FUN_14086a14e(&DAT_14cb1a368,&PTR_FUN_14ab4afb8);
  }
  return DAT_14cb1a368;
}



// FUNCTION 1417fe20c FUN_1417fe20c body=80 status=ok
// SIG undefined FUN_1417fe20c(void)

void FUN_1417fe20c(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined1 local_38 [40];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = *param_2;
  FUN_1446dcdd4(local_38);
  FUN_1400d6974(local_38);
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417fe25e FUN_1417fe25e body=117 status=ok
// SIG undefined FUN_1417fe25e(void)

undefined8 * FUN_1417fe25e(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  longlong lVar1;
  undefined4 *puVar2;
  
  if (param_3 == 0) {
    *param_2 = 0;
  }
  else {
    puVar2 = &DAT_14c9485f0;
    if (*(undefined4 **)(param_3 + 8) != (undefined4 *)0x0) {
      puVar2 = *(undefined4 **)(param_3 + 8);
    }
    if (DAT_14c947fe0 == 0) {
      lVar1 = FUN_14001cc68(0x140,0x10);
      FUN_1456b2032(lVar1);
      DAT_14c947fe0 = lVar1;
    }
    FUN_140045924(DAT_14c947fe0,param_2,puVar2,1);
  }
  return param_2;
}



// FUNCTION 1417fe2d8 FUN_1417fe2d8 body=49 status=ok
// SIG undefined FUN_1417fe2d8(void)

longlong FUN_1417fe2d8(void)

{
  if (DAT_14cb1a860 == 0) {
    FUN_14073dd9a(&DAT_14cb1a860,&PTR_LAB_14ab56ac0);
  }
  return DAT_14cb1a860;
}



// FUNCTION 1417fe30a FUN_1417fe30a body=438 status=ok
// SIG undefined FUN_1417fe30a(void)

void FUN_1417fe30a(longlong param_1,longlong param_2)

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
  if (*(longlong *)(param_1 + 0x410) != 0) {
    FUN_140af95c6(*(longlong *)(param_1 + 0x410),local_1c != 0);
  }
  if ((CONCAT44(uStack_14,uStack_18) ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417fe4c2 FUN_1417fe4c2 body=475 status=ok
// SIG undefined FUN_1417fe4c2(void)

void FUN_1417fe4c2(longlong param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  longlong *plVar4;
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
  plVar4 = *(longlong **)(param_1 + 0x410);
  if (plVar4 != (longlong *)0x0) {
    if ((bool)(char)plVar4[0x109] != (local_1c != 0)) {
      *(bool *)(plVar4 + 0x109) = local_1c != 0;
      (**(code **)(*plVar4 + 0xa98))(plVar4,local_1c != 0);
    }
  }
  if ((CONCAT44(uStack_14,uStack_18) ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417fe69e FUN_1417fe69e body=49 status=ok
// SIG undefined FUN_1417fe69e(void)

longlong FUN_1417fe69e(void)

{
  if (DAT_14cb1a918 == 0) {
    FUN_14073dd9a(&DAT_14cb1a918,&PTR_LAB_14ab580a0);
  }
  return DAT_14cb1a918;
}



// FUNCTION 1417fe6d0 FUN_1417fe6d0 body=67 status=ok
// SIG undefined FUN_1417fe6d0(void)

undefined8 * FUN_1417fe6d0(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ab523c0;
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417fe714 FUN_1417fe714 body=67 status=ok
// SIG undefined FUN_1417fe714(void)

undefined8 * FUN_1417fe714(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ab52860;
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417fe758 FUN_1417fe758 body=40 status=ok
// SIG undefined FUN_1417fe758(void)

undefined8 FUN_1417fe758(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417fe780 FUN_1417fe780 body=40 status=ok
// SIG undefined FUN_1417fe780(void)

undefined8 FUN_1417fe780(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417fe7a8 FUN_1417fe7a8 body=67 status=ok
// SIG undefined FUN_1417fe7a8(void)

undefined8 * FUN_1417fe7a8(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ab53820;
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417fe7ec FUN_1417fe7ec body=140 status=ok
// SIG undefined FUN_1417fe7ec(void)

undefined8 * FUN_1417fe7ec(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  code *pcVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ab53e30;
  plVar1 = param_1 + 10;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)*(byte *)(param_1 + 0xe) * 0x120)
                     );
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0xd)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0xd)) {
    FUN_1400020a8(*plVar1);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417fe878 FUN_1417fe878 body=140 status=ok
// SIG undefined FUN_1417fe878(void)

undefined8 * FUN_1417fe878(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  code *pcVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ab54520;
  plVar1 = param_1 + 10;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)*(byte *)(param_1 + 0xe) * 0x120)
                     );
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0xd)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0xd)) {
    FUN_1400020a8(*plVar1);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417fe904 FUN_1417fe904 body=336 status=ok
// SIG undefined FUN_1417fe904(void)

void FUN_1417fe904(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 2,0,0x150);
  param_2[1] = 0;
  *param_2 = &PTR_FUN_14ab5d380;
  *(undefined2 *)(param_2 + 7) = 4;
  *(undefined4 *)(param_2 + 4) = 1;
  *(undefined1 *)(param_2 + 8) = 2;
  *(byte *)(param_2 + 9) = (byte)~DAT_14c9a8754 >> 4 & 2;
  param_2[10] = 0;
  *(undefined2 *)(param_2 + 0xe) = 4;
  *(undefined4 *)(param_2 + 0xb) = 1;
  *(undefined1 *)(param_2 + 0xf) = 2;
  *(byte *)(param_2 + 0x10) = (byte)~DAT_14c9a8754 >> 4 & 2;
  *(undefined1 *)(param_2 + 0x11) = 0;
  param_2[0x12] = 0;
  *(undefined2 *)(param_2 + 0x16) = 4;
  *(undefined4 *)(param_2 + 0x13) = 1;
  *(undefined1 *)(param_2 + 0x17) = 2;
  *(byte *)(param_2 + 0x18) = (byte)~DAT_14c9a8754 >> 4 & 2;
  *(undefined1 *)(param_2 + 0x19) = 0;
  param_2[0x1a] = 0;
  *(undefined2 *)(param_2 + 0x1e) = 4;
  *(undefined4 *)(param_2 + 0x1b) = 0x45fa0000;
  *(undefined1 *)(param_2 + 0x1f) = 3;
  *(char *)(param_2 + 0x20) = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  param_2[0x23] = 0;
  param_2[0x21] = 0;
  param_2[0x22] = 0;
  *(undefined2 *)(param_2 + 0x27) = 4;
  *(undefined4 *)(param_2 + 0x24) = 0;
  *(undefined1 *)(param_2 + 0x28) = 3;
  *(char *)(param_2 + 0x29) = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  *(undefined1 *)(param_2 + 0x2a) = 1;
  FUN_1446f470e((longlong)param_2 + 0x154,L"Default",1);
  return;
}



// FUNCTION 1417fea54 FUN_1417fea54 body=483 status=ok
// SIG undefined FUN_1417fea54(void)

void FUN_1417fea54(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 1,0,0x208);
  *param_2 = &PTR_FUN_14ab5d3e0;
  param_2[4] = 0;
  *(undefined2 *)(param_2 + 8) = 4;
  *(undefined4 *)(param_2 + 5) = 1;
  *(undefined1 *)(param_2 + 9) = 2;
  *(byte *)(param_2 + 10) = (byte)~DAT_14c9a8754 >> 4 & 2;
  param_2[0xb] = 0;
  *(undefined2 *)(param_2 + 0xf) = 4;
  *(undefined4 *)(param_2 + 0xc) = 1;
  *(undefined1 *)(param_2 + 0x10) = 2;
  *(byte *)(param_2 + 0x11) = (byte)~DAT_14c9a8754 >> 4 & 2;
  param_2[0x12] = 0;
  *(undefined2 *)(param_2 + 0x16) = 4;
  *(undefined4 *)(param_2 + 0x13) = 1;
  *(undefined1 *)(param_2 + 0x17) = 2;
  *(byte *)(param_2 + 0x18) = (byte)~DAT_14c9a8754 >> 4 & 2;
  *(undefined1 *)(param_2 + 0x19) = 0;
  param_2[0x1a] = 0;
  *(undefined2 *)(param_2 + 0x1e) = 4;
  *(undefined4 *)(param_2 + 0x1b) = 1;
  *(undefined1 *)(param_2 + 0x1f) = 2;
  *(byte *)(param_2 + 0x20) = (byte)~DAT_14c9a8754 >> 4 & 2;
  *(undefined1 *)(param_2 + 0x21) = 0;
  param_2[0x22] = 0;
  *(undefined2 *)(param_2 + 0x26) = 4;
  *(undefined4 *)(param_2 + 0x23) = 0x45fa0000;
  *(undefined1 *)(param_2 + 0x27) = 3;
  *(char *)(param_2 + 0x28) = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  param_2[0x2b] = 0;
  param_2[0x29] = 0;
  param_2[0x2a] = 0;
  *(undefined2 *)(param_2 + 0x2f) = 4;
  *(undefined4 *)(param_2 + 0x2c) = 0;
  *(undefined1 *)(param_2 + 0x30) = 3;
  *(char *)(param_2 + 0x31) = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  param_2[0x32] = 0;
  *(undefined2 *)(param_2 + 0x36) = 4;
  *(undefined4 *)(param_2 + 0x33) = 0;
  *(undefined1 *)(param_2 + 0x37) = 3;
  *(char *)(param_2 + 0x38) = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  param_2[0x39] = 0;
  *(undefined2 *)(param_2 + 0x3d) = 4;
  *(undefined4 *)(param_2 + 0x3a) = 0x3f800000;
  *(undefined1 *)(param_2 + 0x3e) = 3;
  *(char *)(param_2 + 0x3f) = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  *(undefined1 *)(param_2 + 0x40) = 1;
  FUN_1446f470e((longlong)param_2 + 0x204,L"Default",1);
  return;
}



// FUNCTION 1417fec38 FUN_1417fec38 body=57 status=ok
// SIG undefined FUN_1417fec38(void)

void FUN_1417fec38(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb1aab8 == 0) {
    uVar1 = FUN_140eca898();
    DAT_14cb1aab8 = FUN_140002ddd(FUN_146419a56,uVar1,L"SpawnGroupDef");
  }
  return;
}



// FUNCTION 1417fec71 FUN_1417fec71 body=57 status=ok
// SIG undefined FUN_1417fec71(void)

void FUN_1417fec71(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1400ead26(puVar1,param_1);
  *puVar1 = &PTR_FUN_14ab5ed90;
  puVar1[5] = &PTR_FUN_14ab5f370;
  puVar1[6] = &PTR_LAB_14ab5f3b0;
  return;
}



// FUNCTION 1417fecaa FUN_1417fecaa body=719 status=ok
// SIG undefined FUN_1417fecaa(void)

undefined8 FUN_1417fecaa(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  undefined8 uVar12;
  bool bVar13;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *plStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar7 = (**(code **)(*param_1 + 0x28))();
  if ((((*(int *)(lVar7 + 0x74) == 0) || (uVar3 = *(uint *)(lVar7 + 0x70), (int)uVar3 < 0)) ||
      (DAT_14c9647dc <= (int)uVar3)) ||
     (((plVar9 = (longlong *)
                 ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
       plVar9 == (longlong *)0x0 || ((int)plVar9[2] != *(int *)(lVar7 + 0x74))) ||
      (((*(uint *)(plVar9 + 1) & 0x10200000) != 0 ||
       ((*plVar9 == 0 || (lVar7 = FUN_1447210f0(), uVar4 = DAT_14cb1ae68, lVar7 == 0)))))))) {
LAB_1417feeab:
    bVar13 = true;
    plVar11 = (longlong *)0x0;
LAB_1417feeb0:
    local_38 = 0;
    plStack_30 = (longlong *)0x0;
  }
  else {
    if (DAT_14c9a7d10 == (undefined8 *)0x0) {
      DAT_14c9a7d10 = (undefined8 *)FUN_14001cc68(0x20,0x10);
      *DAT_14c9a7d10 = 0;
      DAT_14c9a7d10[1] = 0;
      DAT_14c9a7d10[2] = 0;
      DAT_14c9a7d10[3] = 0;
    }
    FUN_14005915a(DAT_14c9a7d10,&local_38,uVar4,lVar7);
    plVar9 = plStack_30;
    lVar7 = local_38;
    if ((local_38 == 0) || (plStack_30 == (longlong *)0x0)) {
      plVar9 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(plStack_30 + 1) = (int)plStack_30[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)((longlong)plStack_30 + 0xc) = *(int *)((longlong)plStack_30 + 0xc) + 1;
      UNLOCK();
      LOCK();
      plVar11 = plStack_30 + 1;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)*plVar11 == 0) {
        (**(code **)*plStack_30)(plStack_30);
        LOCK();
        piVar2 = (int *)((longlong)plVar9 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
    }
    plVar11 = plStack_30;
    if (plStack_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_30 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_30)(plStack_30);
        LOCK();
        piVar2 = (int *)((longlong)plVar11 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
        }
      }
    }
    if (plVar9 == (longlong *)0x0) goto LAB_1417feeab;
    iVar6 = (int)plVar9[1];
    do {
      plVar11 = (longlong *)0x0;
      if (iVar6 == 0) break;
      LOCK();
      iVar5 = (int)plVar9[1];
      bVar13 = iVar6 == iVar5;
      if (bVar13) {
        *(int *)(plVar9 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
      plVar11 = plVar9;
    } while (!bVar13);
    LOCK();
    piVar2 = (int *)((longlong)plVar9 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
    }
    if (plVar11 == (longlong *)0x0) goto LAB_1417feeab;
    if (lVar7 == 0) {
      bVar13 = false;
      goto LAB_1417feeb0;
    }
    lVar8 = (**(code **)(*param_1 + 0x28))(param_1);
    FUN_1448c1bf6(lVar7,&local_38,lVar8 + 0xb8);
    if ((local_38 != 0) && (*(int *)(local_38 + 0x108) != 0)) {
      uVar3 = *(uint *)(local_38 + 0x104);
      uVar12 = 0;
      bVar13 = false;
      if (((int)uVar3 < 0) || (DAT_14c9647dc <= (int)uVar3)) goto LAB_1417fee6c;
      puVar10 = (undefined8 *)
                ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
      if (((puVar10 != (undefined8 *)0x0) && (*(int *)(puVar10 + 2) == *(int *)(local_38 + 0x108)))
         && ((*(uint *)(puVar10 + 1) & 0x10200000) == 0)) {
        uVar12 = *puVar10;
        bVar13 = false;
        goto LAB_1417fee6c;
      }
    }
    bVar13 = false;
  }
  uVar12 = 0;
LAB_1417fee6c:
  plVar9 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar9 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
  }
  if (!bVar13) {
    LOCK();
    plVar9 = plVar11 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
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
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar12;
}



// FUNCTION 1417fef7a FUN_1417fef7a body=31 status=ok
// SIG undefined FUN_1417fef7a(void)

undefined8 FUN_1417fef7a(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = (**(code **)(*param_1 + 0x18))();
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(lVar1 + 0xbc8);
  }
  return uVar2;
}



// FUNCTION 1417fef9a FUN_1417fef9a body=389 status=ok
// SIG undefined FUN_1417fef9a(void)

undefined4 FUN_1417fef9a(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  DWORD DVar3;
  char cVar4;
  DWORD dwTlsIndex;
  DWORD DVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong lVar8;
  LPVOID lpTlsValue;
  bool bVar9;
  
  if (*(int *)(param_1 + 0x74) != 0) {
    uVar1 = *(uint *)(param_1 + 0x70);
    if ((int)uVar1 < 0) {
      return 0;
    }
    if (DAT_14c9647dc <= (int)uVar1) {
      return 0;
    }
    plVar6 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if ((((plVar6 != (longlong *)0x0) && ((int)plVar6[2] == *(int *)(param_1 + 0x74))) &&
        ((*(uint *)(plVar6 + 1) & 0x10200000) == 0)) && (lVar2 = *plVar6, lVar2 != 0)) {
      lVar8 = *(longlong *)(param_1 + 0x60);
      if (lVar8 == 0) {
        uVar7 = FUN_140927942();
        lVar8 = FUN_14477b664(uVar7);
        *(longlong *)(param_1 + 0x60) = lVar8;
      }
      if (*(longlong *)(param_1 + 0x68) == 0) {
        if (lVar8 == 0) {
          return 0;
        }
        if (*(longlong *)(param_1 + 0x58) == 0) {
          return 0;
        }
        plVar6 = *(longlong **)(lVar8 + 0xb8);
        if ((plVar6 == (longlong *)0x0) ||
           (cVar4 = (**(code **)(*plVar6 + 0x108))(plVar6), cVar4 == '\0')) {
          *(undefined8 *)(param_1 + 0x68) = 0;
          return 0;
        }
        uVar7 = (**(code **)(*plVar6 + 0x110))(plVar6);
        lVar8 = FUN_144aff482(uVar7,(longlong *)(param_1 + 0x58));
        *(longlong *)(param_1 + 0x68) = lVar8;
        if (lVar8 == 0) {
          return 0;
        }
      }
      dwTlsIndex = DAT_14c75ec34;
      if (DAT_14c75ec34 == 0xffffffff) {
        dwTlsIndex = TlsAlloc();
        DVar5 = 0xffffffff;
        LOCK();
        bVar9 = DAT_14c75ec34 != 0xffffffff;
        DVar3 = dwTlsIndex;
        if (bVar9) {
          DVar5 = DAT_14c75ec34;
          DVar3 = DAT_14c75ec34;
        }
        DAT_14c75ec34 = DVar3;
        UNLOCK();
        if (bVar9) {
          TlsFree(dwTlsIndex);
          dwTlsIndex = DVar5;
        }
      }
      lpTlsValue = TlsGetValue(dwTlsIndex);
      if (lpTlsValue == (LPVOID)0x0) {
        lpTlsValue = (LPVOID)FUN_14001cc68(0x60,0x10);
        FUN_141073f92(lpTlsValue);
        FUN_140fddf04(lpTlsValue);
        TlsSetValue(dwTlsIndex,lpTlsValue);
      }
      if (*(char *)((longlong)lpTlsValue + 0x20) == '\0') {
        uVar1 = *(uint *)(lVar2 + 8);
        return CONCAT31((int3)(uVar1 >> 8),(uVar1 & 0x3200) == 0);
      }
    }
  }
  return 0;
}



// FUNCTION 1417ff120 FUN_1417ff120 body=398 status=ok
// SIG undefined FUN_1417ff120(void)

void FUN_1417ff120(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((4 < *(byte *)(param_1 + 0x101)) ||
     ((*(byte *)(param_1 + 0x101) == 4 && (*(longlong *)(param_1 + 0xd8) != 0))))
  goto LAB_1417ff251;
  if (*(longlong *)(param_1 + 0x60) == 0) {
    uVar3 = FUN_140927942();
    uVar3 = FUN_14477b664(uVar3);
    *(undefined8 *)(param_1 + 0x60) = uVar3;
  }
  lVar2 = FUN_140927942();
  uVar3 = FUN_140927942();
  FUN_1402d1bfa(&local_30,uVar3,param_2);
  if (*(longlong *)(param_1 + 0x58) != local_30) {
    *(undefined8 *)(param_1 + 0x68) = 0;
  }
  *(longlong *)(param_1 + 0x58) = local_30;
  lVar4 = FUN_140927942();
  if (lVar2 == 0) {
LAB_1417ff1be:
    lVar4 = lVar2;
  }
  else if (lVar4 == 0) {
    lVar4 = 0;
  }
  else if ((*(int *)(lVar4 + 0x38) <= *(int *)(lVar2 + 0x38)) &&
          (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
           lVar4 + 0x30)) goto LAB_1417ff1be;
  if (*(longlong *)(param_1 + 0x60) != lVar4) {
    *(undefined8 *)(param_1 + 0x68) = 0;
  }
  uVar3 = FUN_14477b664(lVar4);
  lVar2 = FUN_14477b664(uVar3);
  *(longlong *)(param_1 + 0x60) = lVar2;
  if ((lVar2 != 0) && (*(longlong *)(param_1 + 0x58) != 0)) {
    *(undefined8 *)(param_1 + 0x68) = param_2;
  }
  if (*(int *)(param_1 + 0x74) == 0) {
LAB_1417ff272:
    uVar3 = 0;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x70);
    uVar3 = 0;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      puVar7 = (undefined8 *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((puVar7 == (undefined8 *)0x0) ||
         ((*(int *)(puVar7 + 2) != *(int *)(param_1 + 0x74) ||
          ((*(uint *)(puVar7 + 1) & 0x10200000) != 0)))) goto LAB_1417ff272;
      uVar3 = *puVar7;
    }
  }
  uVar5 = FUN_1401b0f18();
  plVar6 = (longlong *)FUN_144718840(uVar3,uVar5);
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x68))(plVar6);
  }
LAB_1417ff251:
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1417ff2b0 FUN_1417ff2b0 body=416 status=ok
// SIG undefined FUN_1417ff2b0(void)

bool FUN_1417ff2b0(longlong param_1)

{
  uint uVar1;
  byte bVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  
  if (*(int *)(param_1 + 0x74) == 0) {
LAB_1417ff38c:
    lVar6 = 0;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x70);
    lVar6 = 0;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      plVar7 = (longlong *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((plVar7 == (longlong *)0x0) ||
         (((int)plVar7[2] != *(int *)(param_1 + 0x74) || ((*(uint *)(plVar7 + 1) & 0x10200000) != 0)
          ))) goto LAB_1417ff38c;
      lVar6 = *plVar7;
    }
  }
  lVar4 = FUN_1447210f0(lVar6);
  if (lVar4 != 0) {
    bVar2 = *(byte *)(lVar4 + 0x152);
    if (bVar2 != 1) {
      if (6 < bVar2) {
        return false;
      }
      if ((0x68U >> (bVar2 & 0x1f) & 1) == 0) {
        return false;
      }
    }
    if ((*(byte *)(lVar6 + 0x60) & 2) == 0) {
      if ((((*(longlong *)(lVar6 + 0x1c8) != 0) &&
           (lVar4 = *(longlong *)(*(longlong *)(lVar6 + 0x1c8) + 0x120), lVar4 != 0)) &&
          (lVar4 = *(longlong *)(lVar4 + 0xa8), lVar4 != 0)) && (*(char *)(lVar4 + 0x60) < '\0')) {
        uVar5 = FUN_1401b0f18();
        lVar4 = FUN_144718840(lVar4,uVar5);
        if (lVar4 != 0) {
          return true;
        }
      }
      uVar5 = FUN_1401b0f18();
      plVar7 = (longlong *)FUN_144718840(lVar6,uVar5);
      bVar2 = (**(code **)(*plVar7 + 0x58))(plVar7);
      return (bool)(bVar2 ^ 1);
    }
    lVar6 = *(longlong *)(param_1 + 0x60);
    if (lVar6 == 0) {
      uVar5 = FUN_140927942();
      lVar6 = FUN_14477b664(uVar5);
      *(longlong *)(param_1 + 0x60) = lVar6;
    }
    if (*(longlong *)(param_1 + 0x68) != 0) {
LAB_1417ff37a:
      return *(byte *)(param_1 + 0x101) < 4;
    }
    if (lVar6 == 0) {
      return false;
    }
    if (*(longlong *)(param_1 + 0x58) == 0) {
      return false;
    }
    plVar7 = *(longlong **)(lVar6 + 0xb8);
    if ((plVar7 == (longlong *)0x0) ||
       (cVar3 = (**(code **)(*plVar7 + 0x108))(plVar7), cVar3 == '\0')) {
      *(undefined8 *)(param_1 + 0x68) = 0;
    }
    else {
      uVar5 = (**(code **)(*plVar7 + 0x110))(plVar7);
      lVar6 = FUN_144aff482(uVar5,(longlong *)(param_1 + 0x58));
      *(longlong *)(param_1 + 0x68) = lVar6;
      if (lVar6 != 0) goto LAB_1417ff37a;
    }
  }
  return false;
}



// FUNCTION 1417ff450 FUN_1417ff450 body=26 status=ok
// SIG undefined FUN_1417ff450(void)

longlong FUN_1417ff450(longlong param_1)

{
  FUN_14069798a(param_1 + 0x40);
  return param_1;
}



// FUNCTION 1417ff46a FUN_1417ff46a body=40 status=ok
// SIG undefined FUN_1417ff46a(void)

undefined8 FUN_1417ff46a(undefined8 param_1,int param_2)

{
  FUN_14006e79a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417ff492 FUN_1417ff492 body=331 status=ok
// SIG undefined FUN_1417ff492(void)

void FUN_1417ff492(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_68 [40];
  longlong *local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  memset(param_2 + 1,0,0x98);
  *param_2 = &PTR_FUN_14ab51200;
  *(undefined4 *)((longlong)param_2 + 0x1c) = 0x44610000;
  *(undefined2 *)((longlong)param_2 + 0x24) = 0x100;
  *(undefined1 *)((longlong)param_2 + 0x26) = 1;
  local_38 = (longlong *)FUN_14001cc68(0x98,0x10);
  local_38[1] = (longlong)&DAT_100000001;
  *local_38 = (longlong)&PTR_FUN_14a1b6cc0;
  local_40 = local_38 + 2;
  local_38[2] = (longlong)&PTR_FUN_14a18e458;
  local_38[3] = 0;
  local_38[4] = 0;
  local_38[5] = 0;
  local_38[6] = 0;
  local_38[7] = 0;
  local_38[8] = 0;
  local_38[9] = 0;
  local_38[10] = 0;
  local_38[0xb] = 0;
  local_38[0xc] = 0;
  local_38[0xd] = 0;
  local_38[0xe] = 0;
  local_38[0xf] = 0;
  local_38[0x10] = 0;
  local_38[0x11] = 0;
  local_38[0x12] = 0;
  FUN_1404e24cc(&local_40);
  FUN_1404e256a(param_2 + 5,&local_40);
  plVar3 = local_38;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_38 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  *(byte *)(param_2 + 8) = *(byte *)(param_2 + 8) & 0xfc;
  *(undefined8 *)((longlong)param_2 + 0x44) = 0x466a6000;
  *(undefined4 *)((longlong)param_2 + 0x4b) = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  *param_2 = &PTR_FUN_14ab620b0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417ff620 FUN_1417ff620 body=103 status=ok
// SIG undefined FUN_1417ff620(void)

void FUN_1417ff620(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  code *pcVar2;
  longlong *plVar3;
  
  plVar1 = (longlong *)(param_2 + 0xc0);
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_2 + 0xe0) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_2 + 0xd8)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (*(ushort *)(param_2 + 0xd8) < 0x19) {
    return;
  }
  FUN_1400020a8(*plVar1);
  return;
}



// FUNCTION 1417ff688 FUN_1417ff688 body=102 status=ok
// SIG undefined FUN_1417ff688(void)

void FUN_1417ff688(longlong *param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_1407be990();
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



// FUNCTION 1417ff6f0 FUN_1417ff6f0 body=29 status=ok
// SIG undefined FUN_1417ff6f0(void)

undefined8 FUN_1417ff6f0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1417ff70e FUN_1417ff70e body=66 status=ok
// SIG undefined FUN_1417ff70e(void)

undefined8 * FUN_1417ff70e(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14ab634a0;
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



// FUNCTION 1417ff750 FUN_1417ff750 body=118 status=ok
// SIG undefined FUN_1417ff750(void)

void FUN_1417ff750(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14ab634a0;
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



// FUNCTION 1417ff7c6 thunk_FUN_144837462 body=5 status=ok
// SIG undefined thunk_FUN_144837462(void)

undefined8 thunk_FUN_144837462(longlong *param_1,int *param_2)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  uint uVar5;
  uint *puVar6;
  longlong lVar7;
  undefined8 *puVar8;
  uint uVar9;
  longlong *plVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  uint uVar14;
  
  if (*(code **)(*param_1 + 0x300) == (code *)&LAB_144837a50) {
    if (((*(byte *)((longlong)param_1 + 0x154) & 1) == 0) ||
       ((int)param_1[0x3a] <= *(int *)((longlong)param_1 + 0x1fc))) {
LAB_144837614:
      lVar7 = FUN_144837648(param_1,param_2,1);
      if (lVar7 == 0) {
        return 0;
      }
      FUN_14012a344(param_1,lVar7,0);
      puVar8 = (undefined8 *)(lVar7 + 0x30);
      goto LAB_144837566;
    }
  }
  else {
    cVar4 = (**(code **)(*param_1 + 0x300))(param_1);
    if (cVar4 == '\0') goto LAB_144837614;
  }
  puVar6 = (uint *)&DAT_14c948618;
  if (((*param_2 != 0) && (0 < param_2[1])) && (*param_2 != DAT_14c948000)) {
    puVar6 = (uint *)(param_2 + 2);
    if (0 < param_2[9]) {
      puVar6 = *(uint **)(param_2 + 6);
    }
    if (1 < (uint)param_2[1]) {
      puVar6 = *(uint **)(param_2 + 6);
    }
  }
  uVar2 = *puVar6;
  uVar3 = puVar6[2];
  uVar5 = uVar2;
  if (uVar3 != 0) {
    uVar5 = uVar3 >> 0xd ^ uVar2 - uVar3;
    uVar9 = uVar5 << 8 ^ (-0x61c88647 - uVar3) - uVar5;
    uVar12 = uVar9 >> 0xd ^ (uVar3 - uVar5) - uVar9;
    uVar5 = uVar12 >> 0xc ^ (uVar5 - uVar9) - uVar12;
    uVar14 = uVar5 << 0x10 ^ (uVar9 - uVar12) - uVar5;
    uVar9 = uVar14 >> 5 ^ (uVar12 - uVar5) - uVar14;
    uVar12 = uVar9 >> 3 ^ (uVar5 - uVar14) - uVar9;
    uVar5 = uVar12 << 10 ^ (uVar14 - uVar9) - uVar12;
    uVar5 = uVar5 >> 0xf ^ uVar9 - (uVar12 + uVar5);
  }
  if ((int)param_1[0x3a] != *(int *)((longlong)param_1 + 0x1fc)) {
    plVar10 = param_1 + 0x40;
    if ((longlong *)param_1[0x41] != (longlong *)0x0) {
      plVar10 = (longlong *)param_1[0x41];
    }
    iVar11 = *(int *)((longlong)plVar10 + (ulonglong)((int)param_1[0x42] - 1U & uVar5) * 4);
    if (iVar11 != -1) {
      lVar7 = param_1[0x39];
      while ((lVar13 = (longlong)iVar11 * 0x20, *(uint *)(lVar7 + lVar13) != uVar2 ||
             (lVar1 = lVar7 + lVar13, *(uint *)(lVar1 + 8) != uVar3))) {
        iVar11 = *(int *)(lVar7 + 0x18 + lVar13);
        if (iVar11 == -1) {
          return 0;
        }
      }
      if (lVar1 == 0) {
        return 0;
      }
      puVar8 = (undefined8 *)(lVar1 + 0x10);
      if (puVar8 == (undefined8 *)0x0) {
        return 0;
      }
LAB_144837566:
      return *puVar8;
    }
  }
  return 0;
}



// FUNCTION 1417ff7cc FUN_1417ff7cc body=328 status=ok
// SIG undefined FUN_1417ff7cc(void)

ulonglong FUN_1417ff7cc(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  DWORD DVar2;
  DWORD DVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined4 extraout_var;
  ulonglong uVar6;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  lVar5 = DAT_14cb1ae98;
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 == 0) {
    uVar4 = 0;
  }
  else {
    uVar1 = *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0xc60);
    uVar4 = (ulonglong)uVar1;
    if (((uVar1 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (uVar1 == 2)) {
      uVar6 = 0;
    }
    else if (uVar1 == 1) {
      DVar2 = FUN_140ad26c0();
      DVar3 = GetCurrentThreadId();
      uVar4 = CONCAT44(extraout_var,DVar3);
      uVar6 = (ulonglong)(DVar2 != DVar3);
    }
    else {
      uVar6 = 1;
    }
    if ((*(char *)(lVar5 + uVar6) == '\x01') && (*(char *)(param_2 + 0xc0) == '\0')) {
      if (DAT_14c947fe0 == 0) {
        lVar5 = FUN_14001cc68(0x140,0x10);
        FUN_1456b2032(lVar5);
        DAT_14c947fe0 = lVar5;
      }
      FUN_140045924(DAT_14c947fe0,&local_28,&DAT_14cb1af60,1);
      lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      uVar4 = 0;
      if ((*(longlong *)(param_2 + 0x18) != local_28 && *(int *)(lVar5 + 0xfc8) == 0) ||
         (*(int *)(lVar5 + 0xfcc) != 0)) goto LAB_1417ff8ac;
    }
    uVar4 = CONCAT71((int7)(uVar4 >> 8),1);
  }
LAB_1417ff8ac:
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1417ff916 FUN_1417ff916 body=48 status=ok
// SIG undefined FUN_1417ff916(void)

void FUN_1417ff916(undefined8 param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_14ab65f70);
  FUN_1402d084a(param_1,param_2);
  return;
}



// FUNCTION 1417ff946 FUN_1417ff946 body=161 status=ok
// SIG undefined FUN_1417ff946(void)

ulonglong FUN_1417ff946(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  undefined8 unaff_RDI;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  if (*(char *)(param_1 + 0x28) == '\x01') {
    if ((longlong)*(int *)(param_1 + 0x38) != 0) {
      lVar2 = *(longlong *)(param_1 + 0x30);
      lVar5 = (longlong)*(int *)(param_1 + 0x38) * 8;
      lVar7 = 0;
      do {
        plVar3 = *(longlong **)(lVar2 + lVar7);
        if ((plVar3 != (longlong *)0x0) &&
           (cVar4 = (**(code **)(*plVar3 + 0x2b8))(plVar3,param_2), cVar4 != '\0')) {
          uVar6 = CONCAT71((int7)((ulonglong)lVar5 >> 8),1);
          goto LAB_1417ff995;
        }
        lVar7 = lVar7 + 8;
      } while (lVar5 != lVar7);
    }
  }
  else if (*(char *)(param_1 + 0x28) == '\0') {
    iVar1 = *(int *)(param_1 + 0x38);
    uVar6 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
    if ((longlong)iVar1 != 0) {
      lVar2 = *(longlong *)(param_1 + 0x30);
      lVar5 = 0;
      do {
        plVar3 = *(longlong **)(lVar2 + lVar5);
        if ((plVar3 != (longlong *)0x0) &&
           (cVar4 = (**(code **)(*plVar3 + 0x2b8))(plVar3,param_2), cVar4 == '\0'))
        goto LAB_1417ff993;
        lVar5 = lVar5 + 8;
      } while ((longlong)iVar1 * 8 != lVar5);
    }
    goto LAB_1417ff995;
  }
LAB_1417ff993:
  uVar6 = 0;
LAB_1417ff995:
  return uVar6 & 0xffffffff;
}



// FUNCTION 1417ff9e8 FUN_1417ff9e8 body=127 status=ok
// SIG undefined FUN_1417ff9e8(void)

void FUN_1417ff9e8(longlong param_1)

{
  char cVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(byte *)(*(longlong *)(param_1 + 0x10) + 0xd5) & 4) != 0) {
    local_38 = 0;
    uStack_30 = 0;
    FUN_1400033ba(param_1,0,0,0);
  }
  cVar1 = FUN_1400439fc(param_1,0,&local_19);
  if (cVar1 == '\0') {
    if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58);
}



// FUNCTION 1417ffa7c FUN_1417ffa7c body=558 status=ok
// SIG undefined FUN_1417ffa7c(void)

void FUN_1417ffa7c(longlong param_1,longlong *param_2,longlong *param_3,undefined4 param_4)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 auStack_68 [32];
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar5 = param_3[1];
  if (lVar5 == 0) {
    uVar4 = FUN_140927942();
    lVar5 = FUN_14477b664(uVar4);
    param_3[1] = lVar5;
  }
  if (param_3[2] == 0) {
    if ((lVar5 != 0) && (*param_3 != 0)) {
      plVar2 = *(longlong **)(lVar5 + 0xb8);
      if ((plVar2 == (longlong *)0x0) ||
         (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
        param_3[2] = 0;
      }
      else {
        uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
        lVar5 = FUN_144aff482(uVar4,param_3);
        param_3[2] = lVar5;
        if (lVar5 != 0) goto LAB_1417ffb22;
      }
    }
    if (0 < *(int *)(param_1 + 0xa90)) {
      local_48 = param_2;
      FUN_1410d9a60(param_1 + 0xa08);
    }
  }
  else {
LAB_1417ffb22:
    plVar2 = (longlong *)(param_1 + 0xa08);
    plVar6 = *(longlong **)(param_1 + 0xa88);
    plVar8 = plVar6;
    if (plVar6 == (longlong *)0x0) {
      plVar8 = plVar2;
    }
    iVar1 = *(int *)(param_1 + 0xa90);
    lVar5 = (longlong)iVar1;
    if (lVar5 != 0) {
      lVar7 = lVar5 << 5;
      do {
        if (plVar8[3] == *param_2) {
          if (plVar8 != (longlong *)0x0) goto LAB_1417ffb94;
          break;
        }
        plVar8 = plVar8 + 4;
        lVar7 = lVar7 + -0x20;
      } while (lVar7 != 0);
    }
    *(uint *)(param_1 + 0xa90) = iVar1 + 1U;
    if (*(uint *)(param_1 + 0xa94) < iVar1 + 1U) {
      FUN_147e283d6(plVar2,iVar1);
      plVar6 = *(longlong **)(param_1 + 0xa88);
    }
    if (plVar6 == (longlong *)0x0) {
      plVar6 = plVar2;
    }
    plVar6[lVar5 * 4 + 2] = 0;
    (plVar6 + lVar5 * 4 + 2)[1] = 0;
    plVar6[lVar5 * 4] = 0;
    (plVar6 + lVar5 * 4)[1] = 0;
    plVar6 = *(longlong **)(param_1 + 0xa88);
    if (*(longlong **)(param_1 + 0xa88) == (longlong *)0x0) {
      plVar6 = plVar2;
    }
    plVar8 = plVar6 + lVar5 * 4;
    plVar6[lVar5 * 4 + 3] = *param_2;
LAB_1417ffb94:
    lVar5 = *param_3;
    if (*plVar8 != lVar5) {
      plVar8[2] = 0;
    }
    *plVar8 = lVar5;
    if (plVar8[1] != param_3[1]) {
      plVar8[2] = 0;
    }
    uVar4 = FUN_14477b664();
    lVar5 = FUN_14477b664(uVar4);
    plVar8[1] = lVar5;
    plVar8[2] = param_3[2];
  }
  if ((longlong)*(int *)(param_1 + 0xa90) < 1) {
    lVar5 = param_1 + 0x9f0;
  }
  else {
    lVar5 = param_1 + 0xa08;
    if (*(longlong *)(param_1 + 0xa88) != 0) {
      lVar5 = *(longlong *)(param_1 + 0xa88);
    }
    lVar5 = lVar5 + (longlong)*(int *)(param_1 + 0xa90) * 0x20 + -0x20;
  }
  FUN_14052f9ee(param_1,lVar5,param_4);
  if ((local_40 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1417ffcac FUN_1417ffcac body=57 status=ok
// SIG undefined FUN_1417ffcac(void)

void FUN_1417ffcac(longlong param_1)

{
  FUN_1400f8246();
  FUN_1408105d4(param_1 + 0x800,0);
  if (*(longlong *)(param_1 + 0xb0) == 0) {
    FUN_1448abda6(param_1);
    return;
  }
  return;
}



// FUNCTION 1417ffce6 FUN_1417ffce6 body=49 status=ok
// SIG undefined FUN_1417ffce6(void)

void FUN_1417ffce6(longlong param_1)

{
  FUN_1408105d4(param_1 + 0x800,0);
  FUN_14028f8fc(param_1 + 0x7d8,0);
  FUN_1400f7f2e(param_1);
  return;
}



// FUNCTION 1417ffd18 FUN_1417ffd18 body=35 status=ok
// SIG undefined FUN_1417ffd18(void)

void FUN_1417ffd18(longlong param_1)

{
  FUN_14028f8fc(param_1 + 0x7d8,0);
  FUN_1400f7f2e(param_1);
  return;
}



// FUNCTION 1417ffd3c FUN_1417ffd3c body=48 status=ok
// SIG undefined FUN_1417ffd3c(void)

void FUN_1417ffd3c(undefined8 param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_14ab65fd0);
  FUN_1448284b2(param_1,param_2);
  return;
}



// FUNCTION 1417ffd6c FUN_1417ffd6c body=637 status=ok
// SIG undefined FUN_1417ffd6c(void)

void FUN_1417ffd6c(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
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
  if (param_2 != (longlong *)0x0) {
    if (DAT_14c9a4e08 == 0) {
      local_50 = &local_38;
      local_38 = FUN_1449e2820;
      local_40 = FUN_14081d0ea;
      local_48 = FUN_1427b09ee;
      local_58 = &LAB_1470c76a3;
      local_60 = FUN_1462ab034;
      local_68 = L"Engine";
      local_70 = 0;
      local_78 = 0x10004001;
      local_80 = 8;
      local_88 = 0x28;
      FUN_14081cfa3(L"/Script/GbxEngine",L"GbxBlackboardOwner",&DAT_14c9a4e08,&DAT_1470c76a2);
    }
    plVar1 = (longlong *)(**(code **)(*param_2 + 0x288))(param_2,DAT_14c9a4e08);
    if (plVar1 != (longlong *)0x0) {
      if (DAT_14c9a4e08 == 0) {
        local_50 = &local_38;
        local_38 = FUN_1449e2820;
        local_40 = FUN_14081d0ea;
        local_48 = FUN_1427b09ee;
        local_58 = &LAB_1470c76a3;
        local_60 = FUN_1462ab034;
        local_68 = L"Engine";
        local_70 = 0;
        local_78 = 0x10004001;
        local_80 = 8;
        local_88 = 0x28;
        FUN_14081cfa3(L"/Script/GbxEngine",L"GbxBlackboardOwner",&DAT_14c9a4e08,&DAT_1470c76a2);
      }
      plVar2 = (longlong *)FUN_144718840(plVar1,DAT_14c9a4e08);
      if ((plVar1 != plVar2) && (plVar2 != (longlong *)0x0)) {
        plVar1 = (longlong *)(**(code **)(*plVar2 + 0x18))(plVar2);
        if ((plVar1 != (longlong *)0x0) && ((longlong)*(int *)(param_1 + 0xbd8) != 0)) {
          lVar3 = *(longlong *)(param_1 + 0xbd0);
          lVar6 = (longlong)*(int *)(param_1 + 0xbd8) * 0x58 + lVar3;
          do {
            if ((longlong)(int)plVar1[1] != 0) {
              lVar4 = *plVar1;
              lVar5 = (longlong)(int)plVar1[1] * 0x58;
              do {
                if (*(longlong *)(lVar4 + 0x38) == *(longlong *)(lVar3 + 0x38)) {
                  if (lVar4 != 0) {
                    FUN_1470eb520(lVar4,lVar3);
                  }
                  break;
                }
                lVar4 = lVar4 + 0x58;
                lVar5 = lVar5 + -0x58;
              } while (lVar5 != 0);
            }
            lVar3 = lVar3 + 0x58;
          } while (lVar3 != lVar6);
        }
        lVar3 = (**(code **)(*plVar2 + 0x28))(plVar2);
        if ((plVar1 == (longlong *)0x0) || (*(char *)(lVar3 + 0x924) != '\0')) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_a8);
        }
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14180001c FUN_14180001c body=228 status=ok
// SIG undefined FUN_14180001c(void)

void FUN_14180001c(longlong param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar1 = param_1 + 0xab8;
  lVar4 = *(longlong *)(param_1 + 0xb58);
  lVar5 = lVar4;
  if (lVar4 == 0) {
    lVar5 = lVar1;
  }
  iVar3 = *(int *)(param_1 + 0xb60);
  lVar7 = (longlong)iVar3;
  if (lVar7 != 0) {
    lVar6 = lVar7 * 0x28;
    do {
      if (*(longlong *)(lVar5 + 0x20) == *param_2) {
        if (lVar5 != 0) goto LAB_1418000a6;
        break;
      }
      lVar5 = lVar5 + 0x28;
      lVar6 = lVar6 + -0x28;
    } while (lVar6 != 0);
  }
  *(uint *)(param_1 + 0xb60) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0xb64) < iVar3 + 1U) {
    FUN_147e282b6(lVar1,iVar3);
    lVar4 = *(longlong *)(param_1 + 0xb58);
  }
  if (lVar4 == 0) {
    lVar4 = lVar1;
  }
  lVar7 = lVar7 * 0x28;
  puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar7);
  *puVar2 = 0;
  puVar2[1] = 0;
  *(undefined8 *)(lVar4 + lVar7) = 0;
  ((undefined8 *)(lVar4 + lVar7))[1] = 0;
  *(undefined8 *)(lVar4 + 0x20 + lVar7) = 0;
  lVar4 = *(longlong *)(param_1 + 0xb58);
  if (*(longlong *)(param_1 + 0xb58) == 0) {
    lVar4 = lVar1;
  }
  lVar5 = lVar4 + lVar7;
  *(longlong *)(lVar4 + 0x20 + lVar7) = *param_2;
LAB_1418000a6:
  FUN_1403de7ba(lVar5,param_3);
  return;
}



// FUNCTION 141800100 FUN_141800100 body=71 status=ok
// SIG undefined FUN_141800100(void)

bool FUN_141800100(undefined8 param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  FUN_14051243c(param_1,&local_18,0);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return local_18 == 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141800148 FUN_141800148 body=508 status=ok
// SIG undefined FUN_141800148(void)

void FUN_141800148(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  char cVar7;
  int iVar8;
  uint *puVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  int iVar14;
  int iVar15;
  ulonglong uVar16;
  uint uVar17;
  int iVar18;
  
  iVar3 = *(int *)(param_1 + 0x420);
  if (iVar3 == 0) {
    uVar16 = 1;
    uVar11 = 0;
    iVar8 = 0;
    iVar18 = 0;
  }
  else {
    puVar9 = *(uint **)(param_1 + 0x418);
    if (*(uint **)(param_1 + 0x418) == (uint *)0x0) {
      puVar9 = (uint *)(param_1 + 0x410);
    }
    uVar17 = *puVar9;
    if (uVar17 == 0) {
      iVar8 = iVar3 + 0x1e;
      if (-1 < iVar3 + -1) {
        iVar8 = iVar3 + -1;
      }
      uVar11 = 0;
      uVar16 = (ulonglong)(uint)(iVar8 >> 5);
      if (iVar8 >> 5 < 1) {
        uVar16 = uVar11;
      }
      iVar18 = 0;
      do {
        if (uVar16 == uVar11) {
          return;
        }
        iVar18 = iVar18 + 0x20;
        uVar17 = puVar9[uVar11 + 1];
        uVar11 = uVar11 + 1;
      } while (uVar17 == 0);
    }
    else {
      uVar11 = 0;
      iVar18 = 0;
    }
    uVar16 = (ulonglong)(-uVar17 & uVar17);
    uVar2 = uVar16 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iVar8 = (iVar18 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    if (iVar3 <= iVar8) {
      iVar8 = iVar3;
    }
  }
  if (iVar8 != iVar3) {
    uVar17 = 0xffffffff;
    do {
      lVar12 = *(longlong *)(param_1 + 0x400);
      if (*(longlong *)(param_1 + 0x400) == 0) {
        lVar12 = param_1;
      }
      plVar5 = *(longlong **)(lVar12 + (longlong)iVar8 * 0x20);
      if ((plVar5 != (longlong *)0x0) &&
         (cVar7 = (**(code **)(*plVar5 + 0x60))(plVar5,*param_2), cVar7 != '\0')) {
        piVar1 = (int *)(lVar12 + (longlong)iVar8 * 0x20 + 8);
        *piVar1 = *piVar1 + -1;
      }
      uVar17 = uVar17 & ~(uint)uVar16;
      puVar9 = *(uint **)(param_1 + 0x418);
      if (*(uint **)(param_1 + 0x418) == (uint *)0x0) {
        puVar9 = (uint *)(param_1 + 0x410);
      }
      iVar4 = *(int *)(param_1 + 0x420);
      iVar8 = (int)uVar11;
      lVar12 = (longlong)iVar8;
      uVar10 = puVar9[lVar12] & uVar17;
      if (uVar10 == 0) {
        iVar14 = iVar4 + 0x1e;
        if (-1 < iVar4 + -1) {
          iVar14 = iVar4 + -1;
        }
        iVar14 = iVar14 >> 5;
        iVar18 = iVar18 + 0x20;
        iVar15 = iVar14;
        if (iVar14 < iVar8) {
          iVar15 = iVar8;
        }
        lVar6 = lVar12;
        if (iVar8 < iVar14) {
          lVar13 = 0;
          do {
            uVar10 = puVar9[lVar12 + lVar13 + 1];
            if (uVar10 != 0) {
              uVar11 = (ulonglong)(iVar8 + (int)lVar13 + 1);
              uVar17 = 0xffffffff;
              goto LAB_14180029d;
            }
            iVar18 = iVar18 + 0x20;
            lVar13 = lVar13 + 1;
            uVar17 = 0xffffffff;
            lVar6 = (longlong)iVar15;
          } while (iVar15 - lVar12 != lVar13);
        }
        uVar11 = lVar6 + 1U & 0xffffffff;
        iVar8 = iVar4;
      }
      else {
LAB_14180029d:
        uVar16 = (ulonglong)(-uVar10 & uVar10);
        uVar2 = uVar16 * 2 + 1;
        lVar12 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        iVar8 = (iVar18 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
        if (iVar4 <= iVar8) {
          iVar8 = iVar4;
        }
      }
    } while (iVar8 != iVar3);
  }
  return;
}



// FUNCTION 141800344 FUN_141800344 body=503 status=ok
// SIG undefined FUN_141800344(void)

int FUN_141800344(longlong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  
  iVar2 = *(int *)(param_1 + 0x50);
  iVar8 = 0;
  if (iVar2 == 0) {
    uVar16 = 1;
    uVar15 = 0;
    iVar11 = 0;
    iVar9 = 0;
  }
  else {
    puVar5 = *(uint **)(param_1 + 0x48);
    if (*(uint **)(param_1 + 0x48) == (uint *)0x0) {
      puVar5 = (uint *)(param_1 + 0x38);
    }
    uVar10 = *puVar5;
    if (uVar10 == 0) {
      iVar11 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar11 = iVar2 + -1;
      }
      uVar15 = 0;
      uVar16 = (ulonglong)(uint)(iVar11 >> 5);
      if (iVar11 >> 5 < 1) {
        uVar16 = uVar15;
      }
      iVar9 = 0;
      do {
        if (uVar16 == uVar15) {
          return 0;
        }
        iVar9 = iVar9 + 0x20;
        uVar10 = puVar5[uVar15 + 1];
        uVar15 = uVar15 + 1;
      } while (uVar10 == 0);
    }
    else {
      uVar15 = 0;
      iVar9 = 0;
    }
    uVar16 = (ulonglong)(-uVar10 & uVar10);
    uVar1 = uVar16 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iVar11 = (iVar9 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar11) {
      iVar11 = iVar2;
    }
  }
  if (iVar11 != iVar2) {
    uVar10 = 0xffffffff;
    iVar8 = 0;
    iVar4 = iVar2;
    do {
      if (*(char *)(*(longlong *)(param_1 + 0x28) + 0x14 + (longlong)iVar11 * 0x58) == '\x01') {
        bVar3 = FUN_14069eaf4(*(longlong *)(param_1 + 0x28) + (longlong)iVar11 * 0x58 + 0x48,param_2
                             );
        iVar8 = iVar8 + (uint)bVar3;
        iVar4 = *(int *)(param_1 + 0x50);
      }
      uVar10 = uVar10 & ~(uint)uVar16;
      puVar5 = *(uint **)(param_1 + 0x48);
      if (*(uint **)(param_1 + 0x48) == (uint *)0x0) {
        puVar5 = (uint *)(param_1 + 0x38);
      }
      iVar11 = (int)uVar15;
      lVar12 = (longlong)iVar11;
      uVar14 = puVar5[lVar12] & uVar10;
      if (uVar14 == 0) {
        iVar6 = iVar4 + 0x1e;
        if (-1 < iVar4 + -1) {
          iVar6 = iVar4 + -1;
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
            uVar14 = puVar5[lVar12 + lVar13 + 1];
            if (uVar14 != 0) {
              uVar15 = (ulonglong)(iVar11 + (int)lVar13 + 1);
              uVar10 = 0xffffffff;
              goto LAB_141800476;
            }
            iVar9 = iVar9 + 0x20;
            lVar13 = lVar13 + 1;
          } while (iVar7 - lVar12 != lVar13);
          uVar10 = 0xffffffff;
          iVar11 = iVar7;
        }
        uVar15 = (ulonglong)(iVar11 + 1);
        iVar11 = iVar4;
      }
      else {
LAB_141800476:
        uVar16 = (ulonglong)(-uVar14 & uVar14);
        uVar1 = uVar16 * 2 + 1;
        lVar12 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        iVar11 = (iVar9 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
        if (iVar4 <= iVar11) {
          iVar11 = iVar4;
        }
      }
    } while (iVar11 != iVar2);
  }
  return iVar8;
}



// FUNCTION 14180053c FUN_14180053c body=503 status=ok
// SIG undefined FUN_14180053c(void)

int FUN_14180053c(longlong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  longlong lVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  
  iVar2 = *(int *)(param_1 + 0x50);
  iVar9 = 0;
  if (iVar2 == 0) {
    uVar16 = 1;
    uVar15 = 0;
    iVar12 = 0;
    iVar10 = 0;
  }
  else {
    puVar5 = *(uint **)(param_1 + 0x48);
    if (*(uint **)(param_1 + 0x48) == (uint *)0x0) {
      puVar5 = (uint *)(param_1 + 0x38);
    }
    uVar11 = *puVar5;
    if (uVar11 == 0) {
      iVar12 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar12 = iVar2 + -1;
      }
      uVar15 = 0;
      uVar16 = (ulonglong)(uint)(iVar12 >> 5);
      if (iVar12 >> 5 < 1) {
        uVar16 = uVar15;
      }
      iVar10 = 0;
      do {
        if (uVar16 == uVar15) {
          return 0;
        }
        iVar10 = iVar10 + 0x20;
        uVar11 = puVar5[uVar15 + 1];
        uVar15 = uVar15 + 1;
      } while (uVar11 == 0);
    }
    else {
      uVar15 = 0;
      iVar10 = 0;
    }
    uVar16 = (ulonglong)(-uVar11 & uVar11);
    uVar1 = uVar16 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iVar12 = (iVar10 - ((uint)lVar8 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar12) {
      iVar12 = iVar2;
    }
  }
  if (iVar12 != iVar2) {
    uVar11 = 0xffffffff;
    iVar9 = 0;
    iVar4 = iVar2;
    do {
      if ((*(char *)(*(longlong *)(param_1 + 0x28) + 0x40 + (longlong)iVar12 * 0x58) == '\0') &&
         (lVar8 = *(longlong *)(param_1 + 0x28) + (longlong)iVar12 * 0x58,
         *(char *)(lVar8 + 0x14) == '\x01')) {
        bVar3 = FUN_14069eaf4(lVar8 + 0x48,param_2);
        iVar9 = iVar9 + (uint)bVar3;
        iVar4 = *(int *)(param_1 + 0x50);
      }
      uVar11 = uVar11 & ~(uint)uVar16;
      puVar5 = *(uint **)(param_1 + 0x48);
      if (*(uint **)(param_1 + 0x48) == (uint *)0x0) {
        puVar5 = (uint *)(param_1 + 0x38);
      }
      iVar12 = (int)uVar15;
      lVar8 = (longlong)iVar12;
      uVar14 = puVar5[lVar8] & uVar11;
      if (uVar14 == 0) {
        iVar6 = iVar4 + 0x1e;
        if (-1 < iVar4 + -1) {
          iVar6 = iVar4 + -1;
        }
        iVar6 = iVar6 >> 5;
        iVar10 = iVar10 + 0x20;
        iVar7 = iVar6;
        if (iVar6 < iVar12) {
          iVar7 = iVar12;
        }
        if (iVar12 < iVar6) {
          lVar13 = 0;
          do {
            uVar14 = puVar5[lVar8 + lVar13 + 1];
            if (uVar14 != 0) {
              uVar15 = (ulonglong)(iVar12 + (int)lVar13 + 1);
              uVar11 = 0xffffffff;
              goto LAB_141800677;
            }
            iVar10 = iVar10 + 0x20;
            lVar13 = lVar13 + 1;
          } while (iVar7 - lVar8 != lVar13);
          uVar11 = 0xffffffff;
          iVar12 = iVar7;
        }
        uVar15 = (ulonglong)(iVar12 + 1);
        iVar12 = iVar4;
      }
      else {
LAB_141800677:
        uVar16 = (ulonglong)(-uVar14 & uVar14);
        uVar1 = uVar16 * 2 + 1;
        lVar8 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
          }
        }
        iVar12 = (iVar10 - ((uint)lVar8 ^ 0x3f)) + 0x3e;
        if (iVar4 <= iVar12) {
          iVar12 = iVar4;
        }
      }
    } while (iVar12 != iVar2);
  }
  return iVar9;
}



// FUNCTION 141800734 FUN_141800734 body=739 status=ok
// SIG undefined FUN_141800734(void)

void FUN_141800734(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  code *pcVar5;
  byte bVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  undefined *puVar10;
  longlong lVar11;
  undefined4 *puVar12;
  longlong lVar13;
  undefined4 *puVar14;
  bool bVar15;
  undefined4 uVar16;
  undefined1 auStack_e8 [40];
  char local_c0 [16];
  longlong *local_b0;
  int local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  ushort local_78;
  byte local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  ushort local_50;
  byte local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + 1;
  plVar3 = *(longlong **)(param_1 + 0x68);
  *(undefined4 *)(param_1 + 0x4c) =
       *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x10) + 0x1d0);
  if (plVar3 != (longlong *)0x0) {
    iVar7 = (int)plVar3[1];
    do {
      if (iVar7 == 0) goto LAB_141800839;
      LOCK();
      iVar9 = (int)plVar3[1];
      bVar15 = iVar7 == iVar9;
      if (bVar15) {
        *(int *)(plVar3 + 1) = iVar7 + 1;
        iVar9 = iVar7;
      }
      iVar7 = iVar9;
      UNLOCK();
    } while (!bVar15);
    lVar4 = *(longlong *)(param_1 + 0x60);
    if (lVar4 != 0) {
      FUN_1402e0c9c(*(undefined8 *)(param_1 + 8),local_c0);
      puVar12 = &local_90;
      FUN_1447c3578(lVar4 + 0x118,puVar12,local_c0);
      if (local_70 == 3) {
        uVar8 = 3;
        uVar16 = local_90;
      }
      else {
        puVar14 = &local_68;
        FUN_1400b56fe(puVar14,&local_90,3);
        uVar16 = 0;
        if (local_48 != 0) {
          uVar16 = local_68;
        }
        pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_48 * 0x120));
        if (pcVar5 != (code *)0x0) {
          if (0x18 < local_50) {
            puVar14 = (undefined4 *)CONCAT44(uStack_64,local_68);
          }
          (*pcVar5)(puVar14);
        }
        if (0x18 < local_50) {
          FUN_1400020a8(CONCAT44(uStack_64,local_68));
        }
        uVar8 = (uint)local_70;
      }
      *(undefined4 *)(param_1 + 0x48) = uVar16;
      pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar8 * 0x120));
      if (pcVar5 != (code *)0x0) {
        if (0x18 < local_78) {
          puVar12 = (undefined4 *)CONCAT44(uStack_8c,local_90);
        }
        (*pcVar5)(puVar12);
      }
      if (0x18 < local_78) {
        FUN_1400020a8(CONCAT44(uStack_8c,local_90));
      }
      lVar4 = DAT_14c9a3da0;
      if ((longlong)local_98 != 0) {
        lVar13 = (longlong)local_98 + -1;
        lVar11 = lVar13 * 0x10;
        FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar11),
                      *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar11));
        if (*(longlong *)(lVar4 + lVar11) != 0) {
          FUN_1400020a8();
        }
        lVar4 = DAT_14c9a3da0;
        iVar7 = (int)lVar13;
        if (DAT_14c9a3dd4 != 0) {
          *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar7;
        }
        *(undefined4 *)(lVar4 + lVar11) = 0xffffffff;
        iVar9 = -1;
        if (0 < DAT_14c9a3dd4) {
          iVar9 = DAT_14c9a3dd0;
        }
        *(int *)(lVar4 + 4 + lVar11) = iVar9;
        DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
        puVar10 = &DAT_14c9a3db0;
        if (DAT_14c9a3dc0 != (undefined *)0x0) {
          puVar10 = DAT_14c9a3dc0;
        }
        iVar9 = iVar7 + 0x1f;
        if (-1 < iVar7) {
          iVar9 = iVar7;
        }
        bVar6 = (byte)lVar13 & 0x1f;
        DAT_14c9a3dd0 = iVar7;
        *(uint *)(puVar10 + (longlong)(iVar9 >> 5) * 4) =
             *(uint *)(puVar10 + (longlong)(iVar9 >> 5) * 4) &
             (-2 << bVar6 | 0xfffffffeU >> 0x20 - bVar6);
        local_98 = 0;
      }
      if ((local_c0[0] == '\x03') && (local_b0 != (longlong *)0x0)) {
        LOCK();
        piVar2 = (int *)((longlong)local_b0 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_b0 + 0x10))();
        }
      }
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
LAB_141800839:
  if ((local_40 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141800a18 FUN_141800a18 body=90 status=ok
// SIG undefined FUN_141800a18(void)

void FUN_141800a18(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  plVar2 = *(longlong **)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000141800a66. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 141800a72 FUN_141800a72 body=742 status=ok
// SIG undefined FUN_141800a72(void)

void FUN_141800a72(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  code *pcVar5;
  byte bVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  undefined *puVar10;
  longlong lVar11;
  undefined4 *puVar12;
  longlong lVar13;
  undefined4 *puVar14;
  bool bVar15;
  undefined4 uVar16;
  undefined1 auStack_e8 [40];
  char local_c0 [16];
  longlong *local_b0;
  int local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  ushort local_78;
  byte local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  ushort local_50;
  byte local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 1;
  *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + 1;
  plVar3 = *(longlong **)(param_1 + 0x30);
  *(undefined4 *)(param_1 + 0x74) =
       *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x10) + 0x1d0);
  if (plVar3 != (longlong *)0x0) {
    iVar7 = (int)plVar3[1];
    do {
      if (iVar7 == 0) goto LAB_141800b7a;
      LOCK();
      iVar9 = (int)plVar3[1];
      bVar15 = iVar7 == iVar9;
      if (bVar15) {
        *(int *)(plVar3 + 1) = iVar7 + 1;
        iVar9 = iVar7;
      }
      iVar7 = iVar9;
      UNLOCK();
    } while (!bVar15);
    lVar4 = *(longlong *)(param_1 + 0x28);
    if (lVar4 != 0) {
      FUN_1402e0c9c(*(undefined8 *)(param_1 + 8),local_c0);
      puVar12 = &local_90;
      FUN_1447c3578(lVar4 + 0x158,puVar12,local_c0);
      if (local_70 == 3) {
        uVar8 = 3;
        uVar16 = local_90;
      }
      else {
        puVar14 = &local_68;
        FUN_1400b56fe(puVar14,&local_90,3);
        uVar16 = 0;
        if (local_48 != 0) {
          uVar16 = local_68;
        }
        pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_48 * 0x120));
        if (pcVar5 != (code *)0x0) {
          if (0x18 < local_50) {
            puVar14 = (undefined4 *)CONCAT44(uStack_64,local_68);
          }
          (*pcVar5)(puVar14);
        }
        if (0x18 < local_50) {
          FUN_1400020a8(CONCAT44(uStack_64,local_68));
        }
        uVar8 = (uint)local_70;
      }
      *(undefined4 *)(param_1 + 0x70) = uVar16;
      pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar8 * 0x120));
      if (pcVar5 != (code *)0x0) {
        if (0x18 < local_78) {
          puVar12 = (undefined4 *)CONCAT44(uStack_8c,local_90);
        }
        (*pcVar5)(puVar12);
      }
      if (0x18 < local_78) {
        FUN_1400020a8(CONCAT44(uStack_8c,local_90));
      }
      lVar4 = DAT_14c9a3da0;
      if ((longlong)local_98 != 0) {
        lVar13 = (longlong)local_98 + -1;
        lVar11 = lVar13 * 0x10;
        FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar11),
                      *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar11));
        if (*(longlong *)(lVar4 + lVar11) != 0) {
          FUN_1400020a8();
        }
        lVar4 = DAT_14c9a3da0;
        iVar7 = (int)lVar13;
        if (DAT_14c9a3dd4 != 0) {
          *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar7;
        }
        *(undefined4 *)(lVar4 + lVar11) = 0xffffffff;
        iVar9 = -1;
        if (0 < DAT_14c9a3dd4) {
          iVar9 = DAT_14c9a3dd0;
        }
        *(int *)(lVar4 + 4 + lVar11) = iVar9;
        DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
        puVar10 = &DAT_14c9a3db0;
        if (DAT_14c9a3dc0 != (undefined *)0x0) {
          puVar10 = DAT_14c9a3dc0;
        }
        iVar9 = iVar7 + 0x1f;
        if (-1 < iVar7) {
          iVar9 = iVar7;
        }
        bVar6 = (byte)lVar13 & 0x1f;
        DAT_14c9a3dd0 = iVar7;
        *(uint *)(puVar10 + (longlong)(iVar9 >> 5) * 4) =
             *(uint *)(puVar10 + (longlong)(iVar9 >> 5) * 4) &
             (-2 << bVar6 | 0xfffffffeU >> 0x20 - bVar6);
        local_98 = 0;
      }
      if ((local_c0[0] == '\x03') && (local_b0 != (longlong *)0x0)) {
        LOCK();
        piVar2 = (int *)((longlong)local_b0 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_b0 + 0x10))();
        }
      }
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
LAB_141800b7a:
  if ((local_40 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141800d70 FUN_141800d70 body=974 status=ok
// SIG undefined FUN_141800d70(void)

void FUN_141800d70(longlong *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  int iVar12;
  uint uVar13;
  longlong *plVar14;
  longlong lVar15;
  longlong lVar16;
  longlong *plVar17;
  longlong lVar18;
  undefined4 uVar19;
  undefined1 auStack_f8 [32];
  longlong *local_d8;
  longlong *local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  plVar17 = param_1 + 0x36;
  *(undefined4 *)(param_1 + 0x37) = 0;
  if (*(int *)((longlong)param_1 + 0x1bc) < 4) {
    FUN_1447a8aa0(plVar17,4);
  }
  local_d8 = param_1 + 0x38;
  *(undefined4 *)(param_1 + 0x39) = 0;
  if (*(int *)((longlong)param_1 + 0x1cc) < 4) {
    FUN_1447a8aa0(local_d8,4);
  }
  if (*(int *)((longlong)param_1 + 0xc) == 0) {
LAB_1418010e2:
    lVar16 = 0;
  }
  else {
    uVar13 = *(uint *)(param_1 + 1);
    lVar16 = 0;
    if ((-1 < (int)uVar13) && ((int)uVar13 < DAT_14c9647dc)) {
      plVar14 = (longlong *)
                ((ulonglong)((uVar13 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar13 >> 0x10) * 8));
      if ((plVar14 == (longlong *)0x0) ||
         (((int)plVar14[2] != *(int *)((longlong)param_1 + 0xc) ||
          ((*(uint *)(plVar14 + 1) & 0x10200000) != 0)))) goto LAB_1418010e2;
      lVar16 = *plVar14;
    }
  }
  iVar12 = *(int *)(lVar16 + 0x238);
  local_d0 = plVar17;
  if (iVar12 < 1) {
    uVar19 = *(undefined4 *)((longlong)param_1 + 0x1d4);
LAB_14180105e:
    uVar11 = 0;
    uVar10 = 0;
    if ((char)param_1[0x3b] == '\0') goto LAB_141801069;
  }
  else {
    lVar15 = 0;
    uVar13 = 0;
    do {
      iVar2 = *(int *)(*(longlong *)(lVar16 + 0x230) + 4 + lVar15 * 8);
      if (((((iVar2 != 0) &&
            (uVar3 = *(uint *)(*(longlong *)(lVar16 + 0x230) + lVar15 * 8), -1 < (int)uVar3)) &&
           ((int)uVar3 < DAT_14c9647dc)) &&
          ((plVar17 = (longlong *)
                      ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
           plVar17 != (longlong *)0x0 && ((int)plVar17[2] == iVar2)))) &&
         (((*(uint *)(plVar17 + 1) & 0x10200000) == 0 &&
          ((lVar4 = *plVar17, lVar4 != 0 &&
           (plVar17 = *(longlong **)(lVar4 + 0x3d0), plVar17 != (longlong *)0x0)))))) {
        (**(code **)(*param_1 + 0x80))(param_1,&local_c8,plVar17);
        iVar12 = (int)param_1[0x37];
        *(uint *)(param_1 + 0x37) = iVar12 + 1U;
        if (*(uint *)((longlong)param_1 + 0x1bc) < iVar12 + 1U) {
          FUN_1403e3958(local_d0,iVar12);
        }
        lVar18 = param_1[0x36];
        *(undefined8 *)(lVar18 + 0x10 + (longlong)iVar12 * 0x18) = local_b8;
        puVar1 = (undefined4 *)(lVar18 + (longlong)iVar12 * 0x18);
        *puVar1 = local_c8;
        puVar1[1] = uStack_c4;
        puVar1[2] = uStack_c0;
        puVar1[3] = uStack_bc;
        (**(code **)(*plVar17 + 0x710))(plVar17,&local_c8);
        dVar8 = (double)FUN_144719204(local_c8,0);
        dVar9 = (double)FUN_144719204(uStack_c0,0);
        dVar6 = sin(dVar8 * 0.017453292519943295);
        dVar8 = cos(dVar8 * 0.017453292519943295);
        dVar7 = sin(dVar9 * 0.017453292519943295);
        dVar9 = cos(dVar9 * 0.017453292519943295);
        iVar12 = (int)param_1[0x39];
        lVar18 = (longlong)iVar12;
        *(uint *)(param_1 + 0x39) = iVar12 + 1U;
        if (*(uint *)((longlong)param_1 + 0x1cc) < iVar12 + 1U) {
          FUN_1403e3958(local_d8,iVar12);
        }
        lVar5 = *local_d8;
        *(double *)(lVar5 + lVar18 * 0x18) = dVar9 * dVar8;
        *(double *)(lVar5 + 8 + lVar18 * 0x18) = dVar7 * dVar8;
        *(double *)(lVar5 + 0x10 + lVar18 * 0x18) = dVar6;
        if ((uVar13 & 1) == 0) {
          uVar13 = (**(code **)(*param_1 + 0x78))(param_1,lVar4);
        }
        else {
          uVar13 = 1;
        }
        iVar12 = *(int *)(lVar16 + 0x238);
      }
      lVar15 = lVar15 + 1;
    } while ((int)lVar15 < iVar12);
    uVar19 = *(undefined4 *)((longlong)param_1 + 0x1d4);
    if ((uVar13 & 1) == 0) goto LAB_14180105e;
    uVar10 = 1;
  }
  uVar11 = uVar10;
  *(undefined4 *)((longlong)param_1 + 0x1dc) = uVar19;
LAB_141801069:
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1d9) = 1;
  *(undefined1 *)(param_1 + 0x3b) = uVar11;
  if ((local_b0 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14180114c FUN_14180114c body=31 status=ok
// SIG undefined FUN_14180114c(void)

longlong FUN_14180114c(longlong param_1)

{
  FUN_140244c74(*(longlong *)(param_1 + 8) + 0x120);
  return param_1;
}



// FUNCTION 14180116c FUN_14180116c body=154 status=ok
// SIG undefined FUN_14180116c(void)

void FUN_14180116c(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  char *pcVar7;
  longlong lVar8;
  
  pcVar7 = *(char **)(param_1 + 8);
  if (pcVar7 != (char *)0x0) {
    if (*pcVar7 == '\0') {
      cVar4 = FUN_1405136b0();
      if (cVar4 != '\0') {
        return;
      }
      pcVar7 = *(char **)(param_1 + 8);
      if (pcVar7 == (char *)0x0) goto LAB_1418011be;
    }
    if (*(longlong *)(param_1 + 0x30) != 0) {
      uVar5 = FUN_14479d2ce(pcVar7 + 4);
      **(undefined8 **)(param_1 + 0x30) = uVar5;
    }
  }
LAB_1418011be:
  uVar5 = *(undefined8 *)(param_1 + 0x24);
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  uVar3 = *(undefined8 *)(param_1 + 0x1c);
  *(undefined1 *)(param_2 + 0x60) = 1;
  iVar2 = *(int *)(param_2 + 0x58);
  lVar8 = (longlong)iVar2;
  *(uint *)(param_2 + 0x58) = iVar2 + 1U;
  if (*(uint *)(param_2 + 0x5c) < iVar2 + 1U) {
    FUN_14579eadc(param_2,iVar2);
  }
  lVar6 = *(longlong *)(param_2 + 0x50);
  if (*(longlong *)(param_2 + 0x50) == 0) {
    lVar6 = param_2;
  }
  *(undefined8 *)(lVar6 + lVar8 * 0x14) = uVar3;
  *(undefined4 *)(lVar6 + 8 + lVar8 * 0x14) = uVar1;
  *(undefined8 *)(lVar6 + 0xc + lVar8 * 0x14) = uVar5;
  return;
}



// FUNCTION 141801206 FUN_141801206 body=353 status=ok
// SIG undefined FUN_141801206(void)

void FUN_141801206(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14180128d;
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
LAB_14180128d:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 141801368 FUN_141801368 body=722 status=ok
// SIG undefined FUN_141801368(void)

void FUN_141801368(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
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
  uVar5 = *(uint *)(param_1 + 9);
  if (uVar5 != 0) {
    plVar1 = param_1 + 7;
    FUN_144a1cbf0(plVar1,0,uVar5);
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
    local_60 = param_1 + 2;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    if ((int)param_1[5] == 0) {
      uVar11 = 1;
      local_58._0_4_ = 0xffffffff;
      local_58._4_4_ = 0;
      local_68._0_4_ = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      uVar11 = local_68 >> 0x20;
    }
    iVar4 = (int)local_68;
    uVar5 = (uint)local_58;
    iVar6 = local_58._4_4_;
    iVar10 = local_50;
    if (local_58._4_4_ < (int)local_60[3]) {
      do {
        lVar13 = *param_1;
        lVar12 = (longlong)iVar6 * 0x20;
        uVar3 = *(uint *)(lVar13 + lVar12);
        uVar14 = *(uint *)(lVar13 + 8 + lVar12);
        if (uVar14 != 0) {
          uVar16 = uVar14 >> 0xd ^ uVar3 - uVar14;
          uVar3 = uVar16 << 8 ^ (-0x61c88647 - uVar14) - uVar16;
          uVar14 = uVar3 >> 0xd ^ (uVar14 - uVar16) - uVar3;
          uVar15 = uVar14 >> 0xc ^ (uVar16 - uVar3) - uVar14;
          uVar3 = uVar15 << 0x10 ^ (uVar3 - uVar14) - uVar15;
          uVar16 = uVar3 >> 5 ^ (uVar14 - uVar15) - uVar3;
          uVar14 = uVar16 >> 3 ^ (uVar15 - uVar3) - uVar16;
          uVar3 = uVar14 << 10 ^ (uVar3 - uVar16) - uVar14;
          uVar3 = uVar3 >> 0xf ^ uVar16 - (uVar14 + uVar3);
        }
        uVar9 = (longlong)(int)uVar3 & (longlong)(int)param_1[9] - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar13 + lVar12 + 0x1c) = iVar8;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar13 + lVar12 + 0x18) =
             *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar9) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar8 & (longlong)(int)param_1[9] - 1U) * 4) = iVar6;
        uVar5 = uVar5 & ~(uint)uVar11;
        plVar7 = (longlong *)local_60[2];
        if ((longlong *)local_60[2] == (longlong *)0x0) {
          plVar7 = local_60;
        }
        iVar8 = (int)local_60[3];
        lVar13 = (longlong)iVar4;
        uVar3 = *(uint *)((longlong)plVar7 + lVar13 * 4) & uVar5;
        if (uVar3 == 0) {
          iVar6 = iVar8 + 0x1e;
          if (-1 < iVar8 + -1) {
            iVar6 = iVar8 + -1;
          }
          iVar6 = iVar6 >> 5;
          iVar2 = iVar6;
          if (iVar6 < iVar4) {
            iVar2 = iVar4;
          }
          if (iVar6 <= iVar4) break;
          lVar12 = 0;
          while( true ) {
            iVar10 = iVar10 + 0x20;
            uVar3 = *(uint *)((longlong)plVar7 + lVar12 * 4 + lVar13 * 4 + 4);
            if (uVar3 != 0) break;
            lVar12 = lVar12 + 1;
            if (iVar2 - lVar13 == lVar12) goto LAB_1418015fe;
          }
          iVar4 = iVar4 + (int)lVar12 + 1;
          uVar5 = 0xffffffff;
        }
        uVar11 = (ulonglong)(-uVar3 & uVar3);
        uVar9 = uVar11 * 2 + 1;
        lVar13 = 0x3f;
        if (uVar9 != 0) {
          for (; uVar9 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        iVar6 = (iVar10 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
      } while (iVar6 < iVar8);
    }
  }
LAB_1418015fe:
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14180163c FUN_14180163c body=269 status=ok
// SIG undefined FUN_14180163c(void)

void FUN_14180163c(longlong param_1,int param_2)

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



// FUNCTION 14180174a FUN_14180174a body=110 status=ok
// SIG undefined FUN_14180174a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14180174a(longlong param_1)

{
  undefined8 *puVar1;
  
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14a171dc0;
  if ((*(char *)(param_1 + 0x20) != '\0') &&
     (puVar1 = *(undefined8 **)(param_1 + 0x18), puVar1 != (undefined8 *)0x0)) {
    if (puVar1[3] != 0) {
      FUN_1400020a8();
    }
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    _DAT_14c9a0eac = _DAT_14c9a0eac + -1;
    *puVar1 = DAT_14c9a0ea0;
    DAT_14c9a0ea0 = puVar1;
                    /* WARNING: Could not recover jumptable at 0x0001418017aa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    return;
  }
  return;
}



// FUNCTION 1418017b8 FUN_1418017b8 body=29 status=ok
// SIG undefined FUN_1418017b8(void)

undefined8 FUN_1418017b8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418017d6 FUN_1418017d6 body=29 status=ok
// SIG undefined FUN_1418017d6(void)

undefined8 FUN_1418017d6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418017f4 FUN_1418017f4 body=29 status=ok
// SIG undefined FUN_1418017f4(void)

undefined8 FUN_1418017f4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141801812 FUN_141801812 body=29 status=ok
// SIG undefined FUN_141801812(void)

undefined8 FUN_141801812(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141801830 FUN_141801830 body=29 status=ok
// SIG undefined FUN_141801830(void)

undefined8 FUN_141801830(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14180184e FUN_14180184e body=29 status=ok
// SIG undefined FUN_14180184e(void)

undefined8 FUN_14180184e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14180186c FUN_14180186c body=68 status=ok
// SIG undefined FUN_14180186c(void)

undefined8 * FUN_14180186c(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14ab670b0;
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



// FUNCTION 1418018b0 FUN_1418018b0 body=118 status=ok
// SIG undefined FUN_1418018b0(void)

void FUN_1418018b0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ab67120;
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar3;
  *puVar1 = &PTR_FUN_14ab670b0;
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



// FUNCTION 141801926 FUN_141801926 body=247 status=ok
// SIG undefined FUN_141801926(void)

void FUN_141801926(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  int iVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar4 = (ulonglong)uVar1;
  iVar3 = *(int *)(param_1 + 0xc);
  if (((((longlong)(int)(iVar3 - uVar1) & 0xffffffffffffc00U) != 0) ||
      ((int)(uVar1 * 3) < iVar3 * 2)) && ((uVar1 == 0 || (0x40 < (int)(iVar3 - uVar1))))) {
    if (0 < (int)uVar1) {
      uVar2 = uVar4 * 0x10;
      if (DAT_14c872d28 != (longlong *)0x0) {
        if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
          if (uVar1 < 0x800) {
            uVar2 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4]];
          }
          else {
            uVar4 = 0x10;
            if (0x10 < DAT_14c841df8) {
              uVar4 = (ulonglong)DAT_14c841df8;
            }
            uVar2 = -uVar4 & (uVar2 + uVar4) - 1;
          }
        }
        else {
          uVar2 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar2,8);
          iVar3 = *(int *)(param_1 + 0xc);
        }
      }
      uVar4 = uVar2 >> 4 & 0xffffffff;
    }
    if ((int)uVar4 != iVar3) {
      *(int *)(param_1 + 0xc) = (int)uVar4;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar4,0x10,8);
    }
  }
  return;
}



// FUNCTION 141801a1e FUN_141801a1e body=29 status=ok
// SIG undefined FUN_141801a1e(void)

undefined8 FUN_141801a1e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141801a3c FUN_141801a3c body=29 status=ok
// SIG undefined FUN_141801a3c(void)

undefined8 FUN_141801a3c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141801a5a FUN_141801a5a body=49 status=ok
// SIG undefined FUN_141801a5a(void)

void FUN_141801a5a(longlong *param_1)

{
  FUN_140f063d4(&DAT_14cb1b3c0,param_1);
  if (*param_1 != 0) {
    FUN_1400020a8();
  }
  *param_1 = 0;
  return;
}



// FUNCTION 141801a8c FUN_141801a8c body=71 status=ok
// SIG undefined FUN_141801a8c(void)

void FUN_141801a8c(longlong param_1,undefined8 param_2)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x170));
  *(undefined8 *)(param_1 + 0x40) = param_2;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x170));
  LOCK();
  *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + 1;
  UNLOCK();
  FUN_14029b9a0(param_1 + -0x18,1);
  return;
}



// FUNCTION 141801ad3 FUN_141801ad3 body=35 status=ok
// SIG undefined FUN_141801ad3(void)

void FUN_141801ad3(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140751bbe(puVar1,param_1);
  *puVar1 = &PTR_FUN_14ab6a680;
  return;
}



// FUNCTION 141801af6 FUN_141801af6 body=49 status=ok
// SIG undefined FUN_141801af6(void)

void FUN_141801af6(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140751bbe(puVar1,param_1);
  *puVar1 = &PTR_FUN_14ab6aab0;
  puVar1[6] = 0x3dcccccd3dcccccd;
  return;
}



// FUNCTION 141801b28 FUN_141801b28 body=40 status=ok
// SIG undefined FUN_141801b28(void)

undefined8 FUN_141801b28(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141801b50 FUN_141801b50 body=40 status=ok
// SIG undefined FUN_141801b50(void)

undefined8 FUN_141801b50(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141801b78 FUN_141801b78 body=40 status=ok
// SIG undefined FUN_141801b78(void)

undefined8 FUN_141801b78(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141801ba0 FUN_141801ba0 body=40 status=ok
// SIG undefined FUN_141801ba0(void)

undefined8 FUN_141801ba0(undefined8 param_1,int param_2)

{
  FUN_1402ef4ac();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141801bc8 FUN_141801bc8 body=68 status=ok
// SIG undefined FUN_141801bc8(void)

void FUN_141801bc8(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_140e14f84(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20));
    if (*(longlong *)(param_1 + 0x18) != 0) {
      FUN_1400020a8();
    }
    FUN_140d4add0(param_1);
    param_1 = param_1 + 0x30;
  }
  return;
}



// FUNCTION 141801c0c FUN_141801c0c body=116 status=ok
// SIG undefined FUN_141801c0c(void)

longlong * FUN_141801c0c(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  
  if (param_1 != param_2) {
    FUN_140d4ae10(param_1);
    lVar3 = *param_2;
    *param_1 = lVar3;
    if (lVar3 != 0) {
      FUN_144b3d910();
    }
    lVar3 = param_2[1];
    lVar4 = param_2[2];
    if (lVar4 != 0) {
      LOCK();
      *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
      UNLOCK();
    }
    plVar5 = (longlong *)param_1[2];
    param_1[1] = lVar3;
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
  }
  return param_1;
}



// FUNCTION 141801c86 FUN_141801c86 body=106 status=ok
// SIG undefined FUN_141801c86(void)

undefined4 * FUN_141801c86(undefined4 *param_1,undefined4 *param_2)

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
  
  uVar2 = *param_2;
  uVar3 = param_2[1];
  uVar4 = param_2[2];
  uVar5 = param_2[3];
  uVar6 = param_2[4];
  uVar7 = param_2[5];
  uVar8 = param_2[6];
  uVar9 = param_2[7];
  uVar10 = *(undefined4 *)((longlong)param_2 + 0x1f);
  uVar11 = *(undefined4 *)((longlong)param_2 + 0x23);
  uVar12 = *(undefined4 *)((longlong)param_2 + 0x27);
  *(undefined4 *)((longlong)param_1 + 0x1b) = *(undefined4 *)((longlong)param_2 + 0x1b);
  *(undefined4 *)((longlong)param_1 + 0x1f) = uVar10;
  *(undefined4 *)((longlong)param_1 + 0x23) = uVar11;
  *(undefined4 *)((longlong)param_1 + 0x27) = uVar12;
  param_1[4] = uVar6;
  param_1[5] = uVar7;
  param_1[6] = uVar8;
  param_1[7] = uVar9;
  *param_1 = uVar2;
  param_1[1] = uVar3;
  param_1[2] = uVar4;
  param_1[3] = uVar5;
  FUN_14034cca6(param_1 + 0xc,param_2 + 0xc);
  *(undefined2 *)(param_1 + 0x1a) = *(undefined2 *)(param_2 + 0x1a);
  lVar1 = *(longlong *)(param_2 + 0x1c);
  *(longlong *)(param_1 + 0x1c) = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  param_1[0x1e] = param_2[0x1e];
  return param_1;
}



// FUNCTION 141801cf0 FUN_141801cf0 body=193 status=ok
// SIG undefined FUN_141801cf0(void)

void FUN_141801cf0(longlong *param_1,longlong *param_2,longlong *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_68 [40];
  longlong local_40;
  int local_38;
  undefined8 local_30;
  longlong lStack_28;
  int local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = 0;
  local_38 = 0xc;
  local_30 = 0;
  lStack_28 = 0;
  local_20 = 0xc;
  if (*param_2 != 0 || (int)param_2[1] != 0xc) {
    local_40 = *param_2;
    local_38 = (int)param_2[1];
  }
  if ((*param_3 != 0) || ((int)param_3[1] != 0xc)) {
    lStack_28 = *param_3;
    local_20 = (int)param_3[1];
  }
  local_18 = 0;
  uVar1 = FUN_14477b072(param_1,DAT_14cb1ba08);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_40);
  if ((local_10 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141801db7 FUN_141801db7 body=168 status=ok
// SIG undefined FUN_141801db7(void)

void FUN_141801db7(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140be5df0(puVar1,param_1);
  *puVar1 = &PTR_FUN_14ab8efa0;
  puVar1[5] = &PTR_FUN_14ab8f9d0;
  puVar1[6] = &PTR_LAB_14ab8fa10;
  puVar1[0x55] = &PTR_FUN_14ab8fa60;
  puVar1[0x56] = &PTR_FUN_14ab8fae0;
  puVar1[0x57] = &PTR_FUN_14ab8faf0;
  *(undefined1 *)(puVar1 + 0xd8) = 0;
  puVar1[199] = 0;
  puVar1[200] = 0;
  puVar1[0xca] = 0;
  puVar1[0xcb] = 0;
  puVar1[0xcc] = 0;
  puVar1[0xcd] = 0;
  puVar1[0xce] = 0;
  puVar1[0xcf] = 0;
  puVar1[0xd0] = 0;
  puVar1[0xd1] = 0;
  *(undefined4 *)(puVar1 + 0xd2) = 0;
  puVar1[0xda] = 0;
  puVar1[0xdb] = 0;
  puVar1[0xdc] = 0;
  puVar1[0xdd] = 0;
  return;
}



// FUNCTION 141801e60 FUN_141801e60 body=756 status=ok
// SIG undefined FUN_141801e60(void)

void FUN_141801e60(longlong param_1,longlong param_2)

{
  byte *pbVar1;
  longlong *plVar2;
  longlong lVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  char cVar7;
  undefined8 *puVar8;
  int *_Src;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  undefined8 local_50;
  undefined8 local_48;
  code *local_40;
  int local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  uStack_28 = (undefined4)(DAT_14c707940 ^ (ulonglong)auStack_78);
  uStack_24 = (undefined4)((DAT_14c707940 ^ (ulonglong)auStack_78) >> 0x20);
  local_2c = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951d20) {
    FUN_144b3d300(&DAT_14c951d20);
    if (DAT_14c951d20 == -1) {
      local_48 = FUN_1446ddbd2();
      local_40 = FUN_14067a048;
      local_50 = 0;
      local_58 = 0x28001;
      FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0);
      atexit(FUN_142811fe5);
      _Init_thread_footer(&DAT_14c951d20);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar2[3];
    if ((*(byte *)((longlong)plVar2 + 0x39) & 1) == 0) {
      lVar3 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar2 + 0x44) + lVar3;
      *(longlong *)(param_2 + 0x40) = lVar3;
      pcVar4 = *(code **)(*plVar2 + 0x120);
      if (pcVar4 == FUN_144afffdc) {
        pcVar4 = *(code **)(*plVar2 + 0x88);
        if (pcVar4 != (code *)&LAB_1447713a0) {
          cVar7 = (*pcVar4)(plVar2);
          if (cVar7 != '\0') {
            (**(code **)(*plVar2 + 0xa0))(plVar2,lVar3,&local_2c);
            goto LAB_141801f4c;
          }
        }
        _Src = (int *)(lVar3 + *(int *)((longlong)plVar2 + 0x44));
        if (_Src != &local_2c) {
          if ((*(byte *)((longlong)plVar2 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar2 + 0x100))(plVar2,&local_2c,_Src,(int)plVar2[6]);
          }
          else {
            memcpy(&local_2c,_Src,
                   (longlong)(int)plVar2[6] * (longlong)*(int *)((longlong)plVar2 + 0x34));
          }
        }
      }
      else if (pcVar4 == FUN_14007468e) {
        local_50 = CONCAT44(local_50._4_4_,(int)plVar2[6]);
        local_58 = local_58 & 0xffffffff00000000;
        FUN_1400746b0(plVar2,&local_2c,lVar3,1);
      }
      else {
        (*pcVar4)(plVar2,&local_2c,lVar3);
      }
    }
    else {
      puVar8 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar5 = (undefined8 *)*puVar8;
        puVar8 = puVar5 + 2;
      } while ((longlong *)*puVar5 != plVar2);
      *(undefined8 *)(param_2 + 0x38) = puVar5[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar6 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar4 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar4 == FUN_14002ddda) {
      FUN_14002ddda(uVar6,param_2,&local_2c);
    }
    else if (pcVar4 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar6,param_2,&local_2c);
    }
    else if (pcVar4 == (code *)&LAB_1428293cc) {
      uVar6 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_2c = (int)uVar6;
      uStack_28 = (undefined4)((ulonglong)uVar6 >> 0x20);
    }
    else {
      (*pcVar4)(uVar6,param_2,&local_2c);
    }
  }
LAB_141801f4c:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if ((bool)*(char *)(param_1 + 0x680) != (local_2c != 0)) {
    *(bool *)(param_1 + 0x680) = local_2c != 0;
    FUN_140acee66(param_1);
  }
  if ((CONCAT44(uStack_24,uStack_28) ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141802156 FUN_141802156 body=40 status=ok
// SIG undefined FUN_141802156(void)

undefined8 FUN_141802156(undefined8 param_1,int param_2)

{
  FUN_1402ef4ac();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14180217e FUN_14180217e body=116 status=ok
// SIG undefined FUN_14180217e(void)

longlong * FUN_14180217e(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  
  if (param_1 != param_2) {
    FUN_140d4b01e(param_1);
    lVar3 = *param_2;
    *param_1 = lVar3;
    if (lVar3 != 0) {
      FUN_144b3d910();
    }
    lVar3 = param_2[1];
    lVar4 = param_2[2];
    if (lVar4 != 0) {
      LOCK();
      *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
      UNLOCK();
    }
    plVar5 = (longlong *)param_1[2];
    param_1[1] = lVar3;
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
  }
  return param_1;
}



// FUNCTION 1418021f2 FUN_1418021f2 body=117 status=ok
// SIG undefined FUN_1418021f2(void)

longlong * FUN_1418021f2(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  *param_1 = lVar2;
  param_1[1] = param_2[1];
  lVar1 = param_2[2];
  param_1[2] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
    lVar2 = *param_1;
  }
  if (lVar2 != 0) {
    FUN_144b3d910();
  }
  lVar2 = param_2[3];
  param_1[3] = lVar2;
  param_1[4] = param_2[4];
  lVar1 = param_2[5];
  param_1[5] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
    lVar2 = param_1[3];
  }
  if (lVar2 != 0) {
    FUN_144b3d910();
  }
  return param_1;
}



// FUNCTION 141802284 FUN_141802284 body=118 status=ok
// SIG undefined FUN_141802284(void)

longlong * FUN_141802284(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  
  if (param_1 != param_2) {
    FUN_1409f51ce(param_1);
    lVar3 = *param_2;
    *param_1 = lVar3;
    if (lVar3 != 0) {
      FUN_144b3d910();
    }
    lVar3 = param_2[1];
    lVar4 = param_2[2];
    if (lVar4 != 0) {
      LOCK();
      *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
      UNLOCK();
    }
    plVar5 = (longlong *)param_1[2];
    param_1[1] = lVar3;
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
  }
  return param_1;
}



// FUNCTION 1418022fa FUN_1418022fa body=112 status=ok
// SIG undefined FUN_1418022fa(void)

undefined8 * FUN_1418022fa(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  longlong lVar1;
  undefined4 *puVar2;
  
  if (param_3 == 0) {
    *param_2 = 0;
  }
  else {
    puVar2 = &DAT_14c9485f0;
    if (*(undefined4 **)(param_3 + 8) != (undefined4 *)0x0) {
      puVar2 = *(undefined4 **)(param_3 + 8);
    }
    if (DAT_14c947fe0 == 0) {
      lVar1 = FUN_14494321d(0x140);
      FUN_1456b2032(lVar1);
      DAT_14c947fe0 = lVar1;
    }
    FUN_140045924(DAT_14c947fe0,param_2,puVar2,1);
  }
  return param_2;
}



// FUNCTION 14180236a FUN_14180236a body=73 status=ok
// SIG undefined FUN_14180236a(void)

void FUN_14180236a(undefined8 param_1,undefined8 *param_2)

{
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[10] = 0;
  FUN_14044066a(param_2 + 1,0x14,1);
  param_2[8] = 0;
  *(undefined4 *)(param_2 + 9) = 0xc;
  param_2[10] = 0;
  return;
}



// FUNCTION 1418023b4 FUN_1418023b4 body=91 status=ok
// SIG undefined FUN_1418023b4(void)

void FUN_1418023b4(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  code *pcVar2;
  longlong *plVar3;
  
  plVar1 = (longlong *)(param_2 + 0x10);
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_2 + 0x30) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_2 + 0x28)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (*(ushort *)(param_2 + 0x28) < 0x19) {
    return;
  }
  FUN_1400020a8(*plVar1);
  return;
}



// FUNCTION 141802410 FUN_141802410 body=91 status=ok
// SIG undefined FUN_141802410(void)

void FUN_141802410(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  code *pcVar2;
  longlong *plVar3;
  
  plVar1 = (longlong *)(param_2 + 8);
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_2 + 0x28) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_2 + 0x20)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (*(ushort *)(param_2 + 0x20) < 0x19) {
    return;
  }
  FUN_1400020a8(*plVar1);
  return;
}



// FUNCTION 14180246c FUN_14180246c body=88 status=ok
// SIG undefined FUN_14180246c(void)

longlong * FUN_14180246c(longlong *param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (*param_1 != lVar2) {
    param_1[2] = 0;
  }
  *param_1 = lVar2;
  if (param_1[1] != param_2[1]) {
    param_1[2] = 0;
  }
  uVar1 = FUN_14477b664();
  lVar2 = FUN_14477b664(uVar1);
  param_1[1] = lVar2;
  param_1[2] = param_2[2];
  return param_1;
}



// FUNCTION 1418024c4 FUN_1418024c4 body=71 status=ok
// SIG undefined FUN_1418024c4(void)

undefined8 * FUN_1418024c4(undefined8 *param_1,undefined8 *param_2)

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



// FUNCTION 14180250c FUN_14180250c body=148 status=ok
// SIG undefined FUN_14180250c(void)

void FUN_14180250c(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  code *pcVar2;
  longlong *plVar3;
  
  *(undefined4 *)(param_2 + 0x12) = 0;
  if (param_2[0x11] != 0) {
    FUN_1400020a8();
  }
  FUN_14052c796(param_2 + 9);
  plVar1 = param_2 + 3;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)*(byte *)(param_2 + 7) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_2 + 6)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_2 + 6)) {
    FUN_1400020a8(*plVar1);
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1418025a0 FUN_1418025a0 body=70 status=ok
// SIG undefined FUN_1418025a0(void)

void FUN_1418025a0(undefined8 param_1,longlong param_2)

{
  FUN_14052c7cd(*(undefined8 *)(param_2 + 0x50),*(undefined4 *)(param_2 + 0x58));
  if (*(longlong *)(param_2 + 0x50) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_2 + 0x48) = 0;
  if (*(longlong *)(param_2 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_14052c796(param_2);
  return;
}



// FUNCTION 14180261e FUN_14180261e body=349 status=ok
// SIG undefined FUN_14180261e(void)

void FUN_14180261e(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  if (*(int *)(param_1 + 300) < 0) {
    *(undefined4 *)(param_1 + 0x128) = 0;
    FUN_14791bb40(param_1 + 0x100,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x128) = 0;
  }
  FUN_140aeed2c((longlong *)(param_1 + 0x20),4,1);
  puVar2 = *(undefined8 **)(param_1 + 0x20);
  *puVar2 = *(undefined8 *)(param_1 + 0x130);
  *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_1 + 0x138);
  lVar3 = param_1 + 0x180;
  lVar5 = 0x10;
  do {
    *(longlong *)(*(longlong *)(param_1 + 0x20) + lVar5) = lVar3;
    lVar3 = lVar3 + 0xa0;
    lVar5 = lVar5 + 0x10;
  } while (lVar5 != 0x40);
  *(longlong *)(param_1 + 0x168) = param_2;
  if ((param_2 != 0) && ((longlong)*(int *)(param_1 + 0x148) != 0)) {
    lVar3 = *(longlong *)(param_1 + 0x140);
    lVar5 = (longlong)*(int *)(param_1 + 0x148) * 0x70 + lVar3;
    do {
      if ((longlong)*(int *)(lVar3 + 0x58) != 0) {
        lVar7 = *(longlong *)(lVar3 + 0x50);
        lVar6 = (longlong)*(int *)(lVar3 + 0x58) * 0x18;
        do {
          lVar4 = FUN_14058d91e(lVar7);
          if (lVar4 != 0) {
            lVar4 = FUN_14058d9a8(*(longlong *)(param_1 + 0x168) + 0x968,lVar4);
            if (lVar4 != 0) {
              iVar1 = *(int *)(lVar3 + 0x68);
              *(uint *)(lVar3 + 0x68) = iVar1 + 1U;
              if (*(uint *)(lVar3 + 0x6c) < iVar1 + 1U) {
                FUN_14058da88((longlong *)(lVar3 + 0x60),iVar1);
              }
              *(longlong *)(*(longlong *)(lVar3 + 0x60) + (longlong)iVar1 * 8) = lVar4;
            }
          }
          lVar7 = lVar7 + 0x18;
          lVar6 = lVar6 + -0x18;
        } while (lVar6 != 0);
      }
      lVar3 = lVar3 + 0x70;
    } while (lVar3 != lVar5);
  }
  return;
}



// FUNCTION 141802798 FUN_141802798 body=568 status=ok
// SIG undefined FUN_141802798(void)

undefined8 * FUN_141802798(longlong param_1,undefined8 *param_2,float param_3,longlong param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  float fVar7;
  float fVar8;
  
  dVar2 = *(double *)(param_4 + 0xa0);
  dVar3 = dVar2 - *(double *)(param_4 + 0x28);
  dVar1 = *(double *)(param_4 + 0xa8);
  dVar4 = dVar1 - *(double *)(param_4 + 0x30);
  dVar5 = *(double *)(param_4 + 0xb0);
  dVar6 = dVar5 - *(double *)(param_4 + 0x38);
  fVar7 = (float)SQRT(dVar6 * dVar6 + dVar4 * dVar4 + dVar3 * dVar3) / *(float *)(param_1 + 0x70);
  fVar8 = *(float *)(param_4 + 0x118) * param_3;
  if (fVar8 < fVar7) {
    dVar2 = (double)(fVar8 / fVar7);
    dVar5 = *(double *)(param_4 + 0x38) + dVar6 * dVar2;
    dVar1 = *(double *)(param_4 + 0x30) + dVar4 * dVar2;
    dVar2 = *(double *)(param_4 + 0x28) + dVar3 * dVar2;
  }
  dVar3 = (double)FUN_144719204(*(double *)(param_4 + 0x90) - *(double *)(param_4 + 0x18),
                                0x4076800000000000);
  dVar3 = (double)(~-(ulonglong)(dVar3 < 0.0) & (ulonglong)dVar3 |
                  (ulonglong)(dVar3 + 360.0) & -(ulonglong)(dVar3 < 0.0));
  dVar3 = (double)FUN_144719204((double)((float)(double)(~-(ulonglong)(180.0 < dVar3) &
                                                         (ulonglong)dVar3 |
                                                        (ulonglong)(dVar3 + -360.0) &
                                                        -(ulonglong)(180.0 < dVar3)) * param_3) +
                                *(double *)(param_4 + 0x18),0x4076800000000000);
  dVar3 = (double)(~-(ulonglong)(dVar3 < 0.0) & (ulonglong)dVar3 |
                  (ulonglong)(dVar3 + 360.0) & -(ulonglong)(dVar3 < 0.0));
  *param_2 = 0;
  param_2[1] = (double)(float)(double)(~-(ulonglong)(180.0 < dVar3) & (ulonglong)dVar3 |
                                      (ulonglong)(dVar3 + -360.0) & -(ulonglong)(180.0 < dVar3));
  param_2[2] = 0;
  param_2[3] = dVar2;
  param_2[4] = dVar1;
  param_2[5] = dVar5;
  return param_2;
}



// FUNCTION 1418029d0 FUN_1418029d0 body=327 status=ok
// SIG undefined FUN_1418029d0(void)

float * FUN_1418029d0(longlong param_1,float *param_2,float param_3,longlong param_4)

{
  double dVar1;
  double dVar2;
  longlong *plVar3;
  longlong *plVar4;
  float fVar5;
  double dVar6;
  undefined8 uVar7;
  
  plVar3 = (longlong *)FUN_140257578(param_1 + 0x48);
  plVar4 = (longlong *)FUN_140257578(param_1 + 0x20);
  if ((plVar3 == (longlong *)0x0) || (plVar4 == (longlong *)0x0)) {
    param_2[0] = 0.0;
    param_2[1] = 0.0;
    param_2[2] = 0.0;
    param_2[3] = 0.0;
    param_2[0x18] = 0.0;
    param_2[0x19] = 0.0;
    param_2[0x1a] = 0.0;
    param_2[0x1b] = 0.0;
    param_2[0x14] = 0.0;
    param_2[0x15] = 0.0;
    param_2[0x16] = 0.0;
    param_2[0x17] = 0.0;
    param_2[0x10] = 0.0;
    param_2[0x11] = 0.0;
    param_2[0x12] = 0.0;
    param_2[0x13] = 0.0;
    param_2[0xc] = 0.0;
    param_2[0xd] = 0.0;
    param_2[0xe] = 0.0;
    param_2[0xf] = 0.0;
    param_2[8] = 0.0;
    param_2[9] = 0.0;
    param_2[10] = 0.0;
    param_2[0xb] = 0.0;
    param_2[4] = 0.0;
    param_2[5] = 0.0;
    param_2[6] = 0.0;
    param_2[7] = 0.0;
    param_2[0x1c] = 0.0;
    param_2[0x1d] = 0.0;
    param_2[1] = 1.0;
    *(undefined1 *)(param_2 + 2) = 1;
  }
  else {
    dVar1 = *(double *)(param_4 + 0xa0) - *(double *)(param_4 + 0x28);
    dVar6 = *(double *)(param_4 + 0xa8) - *(double *)(param_4 + 0x30);
    dVar2 = *(double *)(param_4 + 0xb0) - *(double *)(param_4 + 0x38);
    fVar5 = (float)SQRT(dVar2 * dVar2 + dVar6 * dVar6 + dVar1 * dVar1) / *(float *)(param_1 + 0x70);
    if (fVar5 <= param_3) {
      *param_2 = param_3 - fVar5;
      param_2[1] = 1.0;
      *(undefined1 *)(param_2 + 2) = 0;
      *(longlong **)(param_2 + 4) = plVar3;
      plVar4 = plVar3;
    }
    else {
      uVar7 = (**(code **)(*plVar4 + 0x2b0))(plVar4);
      FUN_1447c7e44(param_3,uVar7);
      *param_2 = param_3;
      param_2[1] = 1.0;
      *(undefined1 *)(param_2 + 2) = 1;
      *(longlong **)(param_2 + 4) = plVar4;
    }
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(plVar4);
    }
  }
  *(undefined1 *)(param_2 + 0x1c) = 0;
  return param_2;
}



// FUNCTION 141802b18 FUN_141802b18 body=64 status=ok
// SIG undefined FUN_141802b18(void)

bool FUN_141802b18(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_140257578(param_1 + 0x20);
  if ((lVar1 != 0) && (lVar1 = FUN_140257578(param_1 + 0x48), lVar1 != 0)) {
    lVar1 = FUN_140257578(param_1 + 0x70);
    return lVar1 != 0;
  }
  return false;
}



// FUNCTION 141802b58 FUN_141802b58 body=200 status=ok
// SIG undefined FUN_141802b58(void)

void FUN_141802b58(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  float fVar4;
  float fVar5;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [52];
  float local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar1 = FUN_140257578(param_1 + 0x20);
  plVar2 = (longlong *)FUN_140257578(param_1 + 0x70);
  fVar4 = 0.0;
  if ((lVar1 != 0) && (plVar2 != (longlong *)0x0)) {
    FUN_1409cd1e6(0,local_88,param_2);
    plVar3 = (longlong *)FUN_140257578(param_1 + 0x20);
    fVar4 = (float)(**(code **)(*plVar3 + 0x2b0))(plVar3);
    fVar5 = (float)(**(code **)(*plVar2 + 0x2b0))(plVar2);
    fVar4 = fVar5 + fVar4 + local_54;
  }
  if ((local_50 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(fVar4);
}



// FUNCTION 141802c22 FUN_141802c22 body=119 status=ok
// SIG undefined FUN_141802c22(void)

bool FUN_141802c22(longlong param_1,float param_2,longlong param_3)

{
  float fVar1;
  bool bVar2;
  longlong lVar3;
  longlong *plVar4;
  float extraout_XMM0_Da;
  
  lVar3 = FUN_140257578(param_1 + 0x70);
  if (lVar3 == 0) {
    bVar2 = false;
  }
  else {
    fVar1 = *(float *)(param_3 + 0x118);
    plVar4 = (longlong *)FUN_140257578(param_1 + 0x70);
    (**(code **)(*plVar4 + 0x2b0))(plVar4);
    bVar2 = (1.0 - param_2) * fVar1 < extraout_XMM0_Da * 0.75;
  }
  return bVar2;
}



// FUNCTION 141802c9a FUN_141802c9a body=470 status=ok
// SIG undefined FUN_141802c9a(void)

float * FUN_141802c9a(longlong param_1,float *param_2,float param_3,longlong param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  plVar1 = (longlong *)FUN_140257578(param_1 + 0x20);
  plVar2 = (longlong *)FUN_140257578(param_1 + 0x70);
  plVar3 = (longlong *)FUN_140257578(param_1 + 0x48);
  if (((plVar1 == (longlong *)0x0) || (plVar2 == (longlong *)0x0)) || (plVar3 == (longlong *)0x0)) {
    param_2[0] = 0.0;
    param_2[1] = 0.0;
    param_2[2] = 0.0;
    param_2[3] = 0.0;
    param_2[0x18] = 0.0;
    param_2[0x19] = 0.0;
    param_2[0x1a] = 0.0;
    param_2[0x1b] = 0.0;
    param_2[0x14] = 0.0;
    param_2[0x15] = 0.0;
    param_2[0x16] = 0.0;
    param_2[0x17] = 0.0;
    param_2[0x10] = 0.0;
    param_2[0x11] = 0.0;
    param_2[0x12] = 0.0;
    param_2[0x13] = 0.0;
    param_2[0xc] = 0.0;
    param_2[0xd] = 0.0;
    param_2[0xe] = 0.0;
    param_2[0xf] = 0.0;
    param_2[8] = 0.0;
    param_2[9] = 0.0;
    param_2[10] = 0.0;
    param_2[0xb] = 0.0;
    param_2[4] = 0.0;
    param_2[5] = 0.0;
    param_2[6] = 0.0;
    param_2[7] = 0.0;
    param_2[0x1c] = 0.0;
    param_2[0x1d] = 0.0;
    param_2[1] = 1.0;
    *(undefined1 *)(param_2 + 2) = 1;
  }
  else {
    fVar7 = *(float *)(param_4 + 0x118);
    fVar4 = (float)(**(code **)(*plVar1 + 0x2b0))(plVar1);
    fVar5 = (float)(**(code **)(*plVar2 + 0x2b0))(plVar2);
    fVar6 = (float)(**(code **)(*plVar1 + 0x2b0))(plVar1);
    if (param_3 < fVar6) {
      *param_2 = param_3;
      param_2[1] = 1.0;
      *(undefined1 *)(param_2 + 2) = 0;
      *(longlong **)(param_2 + 4) = plVar1;
      plVar2 = plVar1;
    }
    else {
      fVar5 = (fVar7 - fVar4) - fVar5;
      fVar7 = (float)(**(code **)(*plVar1 + 0x2b0))(plVar1);
      fVar4 = (float)(**(code **)(*plVar1 + 0x2b0))(plVar1);
      if (fVar7 + fVar5 < param_3) {
        *param_2 = (param_3 - fVar4) - fVar5;
        param_2[1] = 1.0;
        *(undefined1 *)(param_2 + 2) = 0;
        *(longlong **)(param_2 + 4) = plVar2;
      }
      else {
        fVar5 = (param_3 - fVar4) / fVar5;
        if (1.0 <= fVar5) {
          fVar5 = 1.0;
        }
        if (fVar5 <= 0.0) {
          fVar5 = 0.0;
        }
        fVar7 = (float)(**(code **)(*plVar3 + 0x2b0))(plVar3);
        *param_2 = fVar7 * fVar5;
        param_2[1] = 1.0;
        *(undefined1 *)(param_2 + 2) = 0;
        *(longlong **)(param_2 + 4) = plVar3;
        plVar2 = plVar3;
      }
    }
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(plVar2);
    }
  }
  *(undefined1 *)(param_2 + 0x1c) = 0;
  return param_2;
}



// FUNCTION 141802e70 FUN_141802e70 body=47 status=ok
// SIG undefined FUN_141802e70(void)

float FUN_141802e70(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  float fVar2;
  
  uVar1 = FUN_140257578(param_1 + 0x20);
  fVar2 = (float)FUN_144867862(param_2,uVar1);
  return fVar2 * *(float *)(param_1 + 0x9c);
}



// FUNCTION 141802ea0 FUN_141802ea0 body=47 status=ok
// SIG undefined FUN_141802ea0(void)

float FUN_141802ea0(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  float fVar2;
  
  uVar1 = FUN_140257578(param_1 + 0x70);
  fVar2 = (float)FUN_144867862(param_2,uVar1);
  return fVar2 * *(float *)(param_1 + 0xa4);
}



// FUNCTION 141802ed0 FUN_141802ed0 body=411 status=ok
// SIG undefined FUN_141802ed0(void)

undefined8 * FUN_141802ed0(undefined8 param_1,undefined8 *param_2,float param_3,longlong param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  if (1.0 <= param_3) {
    param_3 = 1.0;
  }
  if (param_3 <= 0.0) {
    param_3 = 0.0;
  }
  dVar8 = (double)FUN_144719204(*(double *)(param_4 + 0x90) - *(double *)(param_4 + 0x18),
                                0x4076800000000000);
  dVar8 = (double)(~-(ulonglong)(dVar8 < 0.0) & (ulonglong)dVar8 |
                  (ulonglong)(dVar8 + 360.0) & -(ulonglong)(dVar8 < 0.0));
  dVar8 = (double)FUN_144719204((double)((float)(double)(~-(ulonglong)(180.0 < dVar8) &
                                                         (ulonglong)dVar8 |
                                                        (ulonglong)(dVar8 + -360.0) &
                                                        -(ulonglong)(180.0 < dVar8)) * param_3) +
                                *(double *)(param_4 + 0x18),0x4076800000000000);
  dVar7 = (double)(~-(ulonglong)(dVar8 < 0.0) & (ulonglong)dVar8 |
                  (ulonglong)(dVar8 + 360.0) & -(ulonglong)(dVar8 < 0.0));
  dVar8 = *(double *)(param_4 + 0xb0);
  dVar1 = *(double *)(param_4 + 0x38);
  dVar2 = *(double *)(param_4 + 0xa8);
  dVar3 = *(double *)(param_4 + 0x28);
  dVar4 = *(double *)(param_4 + 0x30);
  dVar5 = *(double *)(param_4 + 0xa0);
  dVar6 = (double)param_3;
  *param_2 = 0;
  param_2[1] = (double)(float)(double)(~-(ulonglong)(180.0 < dVar7) & (ulonglong)dVar7 |
                                      (ulonglong)(dVar7 + -360.0) & -(ulonglong)(180.0 < dVar7));
  param_2[2] = 0;
  param_2[3] = (dVar5 - dVar3) * dVar6 + dVar3;
  param_2[4] = (dVar2 - dVar4) * dVar6 + dVar4;
  param_2[5] = (dVar8 - dVar1) * dVar6 + dVar1;
  return param_2;
}



// FUNCTION 14180306c FUN_14180306c body=165 status=ok
// SIG undefined FUN_14180306c(void)

undefined8 * FUN_14180306c(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  longlong *plVar1;
  undefined4 uVar2;
  
  plVar1 = (longlong *)FUN_140257578(param_1 + 0x20);
  if (plVar1 == (longlong *)0x0) {
    *param_2 = 0;
    param_2[1] = 0;
    param_2[0xc] = 0;
    param_2[0xd] = 0;
    param_2[10] = 0;
    param_2[0xb] = 0;
    param_2[8] = 0;
    param_2[9] = 0;
    param_2[6] = 0;
    param_2[7] = 0;
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[0xe] = 0;
    *(undefined4 *)((longlong)param_2 + 4) = 0x3f800000;
    *(undefined1 *)(param_2 + 1) = 1;
  }
  else {
    uVar2 = (**(code **)(*plVar1 + 0x2b0))(plVar1);
    uVar2 = FUN_1447c7e44(param_3,uVar2);
    *(undefined4 *)param_2 = uVar2;
    *(undefined4 *)((longlong)param_2 + 4) = 0x3f800000;
    *(undefined1 *)(param_2 + 1) = 1;
    param_2[2] = plVar1;
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(plVar1);
    }
  }
  *(undefined1 *)(param_2 + 0xe) = 0;
  return param_2;
}



// FUNCTION 141803112 FUN_141803112 body=24 status=ok
// SIG undefined FUN_141803112(void)

bool FUN_141803112(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_140257578(param_1 + 0x20);
  return lVar1 != 0;
}



// FUNCTION 14180312a FUN_14180312a body=133 status=ok
// SIG undefined FUN_14180312a(void)

undefined8 FUN_14180312a(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  undefined4 uVar5;
  double dVar6;
  
  lVar1 = FUN_1408c0926();
  if (lVar1 == 0) {
    fVar3 = 0.0;
    uVar5 = 0;
  }
  else {
    fVar2 = (float)FUN_144867862(param_2 + 0x100,lVar1);
    uVar5 = 0;
    fVar3 = 0.0;
    if ((0.0 < fVar2) && (fVar3 = 0.0, 0.0 < *(float *)(lVar1 + 0x1f8))) {
      dVar4 = *(double *)(param_2 + 0xa0) - *(double *)(param_2 + 0x28);
      dVar6 = *(double *)(param_2 + 0xa8) - *(double *)(param_2 + 0x30);
      dVar4 = SQRT(dVar6 * dVar6 + dVar4 * dVar4);
      uVar5 = (undefined4)((ulonglong)dVar4 >> 0x20);
      fVar3 = (float)dVar4 / (fVar2 * *(float *)(lVar1 + 0x1f8));
    }
  }
  return CONCAT44(uVar5,fVar3);
}



// FUNCTION 1418031b0 FUN_1418031b0 body=411 status=ok
// SIG undefined FUN_1418031b0(void)

undefined8 * FUN_1418031b0(undefined8 param_1,undefined8 *param_2,float param_3,longlong param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  if (1.0 <= param_3) {
    param_3 = 1.0;
  }
  if (param_3 <= 0.0) {
    param_3 = 0.0;
  }
  dVar8 = (double)FUN_144719204(*(double *)(param_4 + 0x90) - *(double *)(param_4 + 0x18),
                                0x4076800000000000);
  dVar8 = (double)(~-(ulonglong)(dVar8 < 0.0) & (ulonglong)dVar8 |
                  (ulonglong)(dVar8 + 360.0) & -(ulonglong)(dVar8 < 0.0));
  dVar8 = (double)FUN_144719204((double)((float)(double)(~-(ulonglong)(180.0 < dVar8) &
                                                         (ulonglong)dVar8 |
                                                        (ulonglong)(dVar8 + -360.0) &
                                                        -(ulonglong)(180.0 < dVar8)) * param_3) +
                                *(double *)(param_4 + 0x18),0x4076800000000000);
  dVar7 = (double)(~-(ulonglong)(dVar8 < 0.0) & (ulonglong)dVar8 |
                  (ulonglong)(dVar8 + 360.0) & -(ulonglong)(dVar8 < 0.0));
  dVar8 = *(double *)(param_4 + 0xb0);
  dVar1 = *(double *)(param_4 + 0x38);
  dVar2 = *(double *)(param_4 + 0xa8);
  dVar3 = *(double *)(param_4 + 0x28);
  dVar4 = *(double *)(param_4 + 0x30);
  dVar5 = *(double *)(param_4 + 0xa0);
  dVar6 = (double)param_3;
  *param_2 = 0;
  param_2[1] = (double)(float)(double)(~-(ulonglong)(180.0 < dVar7) & (ulonglong)dVar7 |
                                      (ulonglong)(dVar7 + -360.0) & -(ulonglong)(180.0 < dVar7));
  param_2[2] = 0;
  param_2[3] = (dVar5 - dVar3) * dVar6 + dVar3;
  param_2[4] = (dVar2 - dVar4) * dVar6 + dVar4;
  param_2[5] = (dVar8 - dVar1) * dVar6 + dVar1;
  return param_2;
}



// FUNCTION 14180334c FUN_14180334c body=27 status=ok
// SIG undefined FUN_14180334c(void)

bool FUN_14180334c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_140257578(param_1 + 0x128);
  return lVar1 != 0;
}



// FUNCTION 141803368 FUN_141803368 body=46 status=ok
// SIG undefined FUN_141803368(void)

undefined8 FUN_141803368(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = (longlong *)FUN_140257578(param_1 + 0x128);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000141803387. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*plVar1 + 0x2b0))(plVar1);
    return uVar2;
  }
  return 0;
}



// FUNCTION 141803396 FUN_141803396 body=1888 status=ok
// SIG undefined FUN_141803396(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_141803396(longlong param_1,undefined8 *param_2,undefined8 param_3,longlong param_4)

{
  longlong lVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  undefined1 auVar22 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar23 [16];
  float fVar24;
  double dVar25;
  undefined1 auStack_1a8 [32];
  double local_188;
  double local_180;
  double local_178;
  undefined1 local_170 [8];
  double local_168;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  double local_138;
  double local_130;
  double local_128;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  ulonglong local_d0;
  
  fVar24 = in_XMM2._0_4_;
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  lVar1 = param_1 + 0x128;
  lVar10 = FUN_140257578(lVar1);
  if (lVar10 == 0) {
    uVar8 = *(undefined8 *)(param_4 + 0x10);
    uVar9 = *(undefined8 *)(param_4 + 0x18);
    uVar12 = *(undefined8 *)(param_4 + 0x20);
    uVar6 = *(undefined8 *)(param_4 + 0x28);
    uVar7 = *(undefined8 *)(param_4 + 0x38);
    param_2[4] = *(undefined8 *)(param_4 + 0x30);
    param_2[5] = uVar7;
    param_2[2] = uVar12;
    param_2[3] = uVar6;
    *param_2 = uVar8;
    param_2[1] = uVar9;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_d0 ^ (ulonglong)auStack_1a8);
  }
  if (1.0 <= fVar24) {
    fVar24 = 1.0;
  }
  if (fVar24 <= 0.0) {
    fVar24 = 0.0;
  }
  if (*(char *)(param_1 + 0x154) == '\0') {
    uVar12 = FUN_140257578(lVar1);
    fVar14 = (float)FUN_144867862(param_4 + 0x100,uVar12);
    dVar4 = (double)fVar14;
  }
  else {
    dVar4 = 1.0;
  }
  auVar22._8_8_ = 0;
  auVar22._0_8_ = *(double *)(param_4 + 0x18);
  auVar22 = divpd(auVar22 << 0x40,_DAT_1499387d0);
  auVar22 = roundpd(auVar22,auVar22,3);
  auVar23 = roundpd(in_XMM2,ZEXT816(0),3);
  dVar2 = (0.0 - auVar22._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
  dVar21 = (*(double *)(param_4 + 0x18) - auVar22._8_8_ * DAT_1499387d0._8_8_) *
           0.008726646259971648;
  dVar3 = (0.0 - auVar23._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
  dVar5 = (0.0 - auVar23._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
  dVar15 = sin(dVar2);
  dVar16 = sin(dVar21);
  dVar17 = sin(dVar3);
  sin(dVar5);
  dVar18 = cos(dVar2);
  dVar19 = cos(dVar21);
  dVar20 = cos(dVar3);
  cos(dVar5);
  dVar2 = -(dVar19 * dVar15 * dVar17) + dVar16 * dVar18 * dVar20;
  dVar21 = dVar16 * dVar15 * dVar17 + dVar19 * dVar18 * dVar20;
  dVar3 = dVar15 * dVar16 * dVar20 - dVar18 * dVar19 * dVar17;
  dVar5 = -(dVar15 * dVar19 * dVar20) - dVar18 * dVar16 * dVar17;
  plVar11 = (longlong *)FUN_140257578(lVar1);
  fVar13 = (float)(**(code **)(*plVar11 + 0x2b0))(plVar11);
  uVar12 = FUN_140257578(lVar1);
  FUN_1409cd860(uVar12,&local_158,0,fVar24 * fVar13);
  fVar14 = *(float *)(param_1 + 0x2c);
  fVar24 = fVar24 * fVar13 - *(float *)(param_1 + 0x28);
  if (fVar14 <= fVar24) {
    fVar24 = fVar14;
  }
  if (fVar24 <= 0.0) {
    fVar24 = 0.0;
  }
  local_178 = *(double *)(param_4 + 0x38);
  dVar20 = *(double *)(param_4 + 0xb0) - local_178;
  local_188 = *(double *)(param_4 + 0x28);
  local_180 = *(double *)(param_4 + 0x30);
  dVar16 = *(double *)(param_4 + 0xa8) - local_180;
  dVar17 = *(double *)(param_4 + 0xa0) - local_188;
  dVar25 = dVar5 * dVar17 - dVar3 * dVar16;
  dVar19 = dVar3 * dVar20 - dVar2 * dVar17;
  dVar18 = dVar2 * dVar16 - dVar5 * dVar20;
  dVar25 = dVar25 + dVar25;
  dVar19 = dVar19 + dVar19;
  dVar18 = dVar18 + dVar18;
  dVar15 = (double)(float)(-(uint)(0.0 < fVar14) & (uint)(fVar24 / fVar14));
  dVar20 = ((((dVar5 * dVar18 - dVar3 * dVar19) + dVar21 * dVar25 + dVar20) -
            *(double *)(param_1 + 0x70) * dVar4) - DAT_14c8464f0) * dVar15 + DAT_14c8464f0 +
           local_128 * dVar4;
  dVar16 = ((((dVar3 * dVar25 - dVar18 * dVar2) + dVar21 * dVar19 + dVar16) -
            *(double *)(param_1 + 0x68) * dVar4) - DAT_14c8464e8) * dVar15 + DAT_14c8464e8 +
           local_130 * dVar4;
  dVar19 = ((((dVar19 * dVar2 - dVar25 * dVar5) + dVar21 * dVar18 + dVar17) -
            *(double *)(param_1 + 0x60) * dVar4) - DAT_14c8464e0) * dVar15 + DAT_14c8464e0 +
           dVar4 * local_138;
  dVar17 = dVar5 * dVar20 - dVar16 * dVar2;
  dVar17 = dVar17 + dVar17;
  dVar18 = dVar3 * dVar16 - dVar19 * dVar5;
  dVar18 = dVar18 + dVar18;
  dVar25 = dVar2 * dVar19 - dVar20 * dVar3;
  dVar25 = dVar25 + dVar25;
  dVar4 = (dVar3 * dVar25 - dVar17 * dVar5) + dVar21 * dVar18 + dVar20 + local_178;
  dVar3 = (dVar2 * dVar17 - dVar18 * dVar3) + dVar21 * dVar25 + dVar16 + local_180;
  dVar2 = (dVar5 * dVar18 - dVar25 * dVar2) + dVar21 * dVar17 + dVar19 + local_188;
  fVar24 = *(float *)(param_4 + 0x114);
  if ((fVar24 != 0.0) || (NAN(fVar24))) {
    fVar14 = *(float *)(param_1 + 0x150);
    fVar13 = (float)FUN_147a43f5c(param_1 + 0xa0);
    dVar4 = dVar4 + (double)(fVar13 * (fVar24 - fVar14) + 0.0);
  }
  dVar21 = *(double *)(param_4 + 0x90);
  dVar5 = *(double *)(param_4 + 0x18);
  local_f8 = *(undefined8 *)(param_1 + 0x40);
  uStack_f0 = *(undefined8 *)(param_1 + 0x48);
  local_e8 = *(undefined8 *)(param_1 + 0x50);
  uStack_e0 = *(undefined8 *)(param_1 + 0x58);
  FUN_1448052ee(&local_f8,local_170);
  dVar21 = (double)FUN_144719204((double)(float)((double)(float)(dVar21 - dVar5) - local_168),
                                 0x4076800000000000);
  dVar21 = (double)(~-(ulonglong)(dVar21 < 0.0) & (ulonglong)dVar21 |
                   (ulonglong)(dVar21 + 360.0) & -(ulonglong)(dVar21 < 0.0));
  local_f8 = local_158;
  uStack_f0 = uStack_150;
  local_e8 = local_148;
  uStack_e0 = uStack_140;
  FUN_1448052ee(&local_f8,local_170);
  dVar21 = (double)FUN_144719204((double)((float)local_168 +
                                         (float)((double)(~-(ulonglong)(180.0 < dVar21) &
                                                          (ulonglong)dVar21 |
                                                         (ulonglong)(dVar21 + -360.0) &
                                                         -(ulonglong)(180.0 < dVar21)) * dVar15)) +
                                 *(double *)(param_4 + 0x18),0x4076800000000000);
  dVar21 = (double)(~-(ulonglong)(dVar21 < 0.0) & (ulonglong)dVar21 |
                   (ulonglong)(dVar21 + 360.0) & -(ulonglong)(dVar21 < 0.0));
  *param_2 = 0;
  param_2[1] = (double)(float)(double)(~-(ulonglong)(180.0 < dVar21) & (ulonglong)dVar21 |
                                      (ulonglong)(dVar21 + -360.0) & -(ulonglong)(180.0 < dVar21));
  param_2[2] = 0;
  param_2[3] = dVar2;
  param_2[4] = dVar3;
  param_2[5] = dVar4;
  if ((local_d0 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141803afc FUN_141803afc body=89 status=ok
// SIG undefined FUN_141803afc(void)

undefined4 * FUN_141803afc(longlong param_1,undefined4 *param_2,undefined4 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_140257578(param_1 + 0x128);
  *param_2 = param_3;
  param_2[1] = 0x3f800000;
  *(undefined1 *)(param_2 + 2) = 0;
  *(longlong *)(param_2 + 4) = lVar1;
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  *(undefined1 *)(param_2 + 0x1c) = 0;
  return param_2;
}



// FUNCTION 141803b56 FUN_141803b56 body=47 status=ok
// SIG undefined FUN_141803b56(void)

float FUN_141803b56(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  float fVar2;
  
  uVar1 = FUN_140257578(param_1 + 0x128);
  fVar2 = (float)FUN_144867862(param_2,uVar1);
  return fVar2 * *(float *)(param_1 + 0x20);
}



// FUNCTION 141803b86 FUN_141803b86 body=47 status=ok
// SIG undefined FUN_141803b86(void)

float FUN_141803b86(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  float fVar2;
  
  uVar1 = FUN_140257578(param_1 + 0x128);
  fVar2 = (float)FUN_144867862(param_2,uVar1);
  return fVar2 * *(float *)(param_1 + 0x24);
}



// FUNCTION 141803bb6 FUN_141803bb6 body=58 status=ok
// SIG undefined FUN_141803bb6(void)

void FUN_141803bb6(longlong *param_1)

{
  longlong lVar1;
  
  FUN_1400f8246();
  if (((*(byte *)((longlong)param_1 + 0x9c) & 1) == 0) ||
     (lVar1 = 0xa08, (*(byte *)((longlong)param_1 + 0x9f) & 4) == 0)) {
    lVar1 = 0xa10;
  }
                    /* WARNING: Could not recover jumptable at 0x000141803bdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + lVar1))(param_1);
  return;
}



// FUNCTION 141803bf0 FUN_141803bf0 body=210 status=ok
// SIG undefined FUN_141803bf0(void)

double * FUN_141803bf0(undefined8 param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined1 auStack_88 [32];
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140b03ca2(param_1,&local_68);
  dVar1 = (local_40 - local_58) * 0.5;
  dVar2 = (local_48 - local_60) * 0.5;
  dVar3 = (local_50 - local_68) * 0.5;
  *param_2 = local_68 + dVar3;
  param_2[1] = local_60 + dVar2;
  param_2[2] = local_58 + dVar1;
  param_2[3] = dVar3;
  param_2[4] = dVar2;
  param_2[5] = dVar1;
  param_2[6] = SQRT(dVar1 * dVar1 + dVar3 * dVar3 + dVar2 * dVar2);
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141803cc4 FUN_141803cc4 body=372 status=ok
// SIG undefined FUN_141803cc4(void)

ulonglong FUN_141803cc4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  ulonglong uVar4;
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
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar3 = FUN_1447262c2(param_3);
  if (lVar3 != 0) {
    if (DAT_14cac9ca8 == 0) {
      local_40 = &local_28;
      local_28 = FUN_141030f22;
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
    if ((*(int *)(DAT_14cac9ca8 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) == DAT_14cac9ca8 + 0x30)) goto LAB_141803d18;
  }
  lVar3 = 0;
LAB_141803d18:
  FUN_14070cbf4(&local_28,lVar3);
  if (local_28 == (code *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = CONCAT71((int7)((ulonglong)lVar3 >> 8),local_28[0x2b0]);
  }
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_20 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar2 = (int *)((longlong)local_20 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_20 + 0x10))(local_20);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar4 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141803e3a FUN_141803e3a body=59 status=ok
// SIG undefined FUN_141803e3a(void)

undefined8 FUN_141803e3a(longlong param_1,float param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  if (*(float *)(param_1 + 0x500) <= param_2) {
    if (*(longlong *)(param_1 + 0x4b0) != 0) {
      cVar1 = FUN_1449c239e(*(longlong *)(param_1 + 0x4b0),*(undefined8 *)(param_1 + 0x520));
      if (cVar1 != '\x01') goto LAB_141803e4b;
    }
    uVar2 = 1;
  }
  else {
LAB_141803e4b:
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 141803e76 FUN_141803e76 body=145 status=ok
// SIG undefined FUN_141803e76(void)

void FUN_141803e76(longlong param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar3 = (ulonglong)uVar1;
  iVar2 = *(int *)(param_1 + 0xc);
  if (((0x3fff < (ulonglong)((longlong)(int)(iVar2 - uVar1) * 0x78)) ||
      ((int)(uVar1 * 3) < iVar2 * 2)) && ((uVar1 == 0 || (0x40 < (int)(iVar2 - uVar1))))) {
    if (0 < (int)uVar1) {
      uVar3 = FUN_144a3809e(uVar3 * 0x78,8);
      uVar3 = uVar3 / 0x78;
      iVar2 = *(int *)(param_1 + 0xc);
    }
    if ((int)uVar3 != iVar2) {
      *(int *)(param_1 + 0xc) = (int)uVar3;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar3,0x78,8);
    }
  }
  return;
}



// FUNCTION 141803f08 FUN_141803f08 body=333 status=ok
// SIG undefined FUN_141803f08(void)

void FUN_141803f08(longlong param_1,uint param_2)

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
    uVar3 = (ulonglong)param_2 * 0x78;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar4 = uVar3 + 0xf;
        if (param_2 < 0x111) {
          uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
        }
        else {
          if ((uVar4 & 0x7ffffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar4 >> 4];
            uVar5 = 0x32;
            if (0x32 < bVar2) {
              uVar5 = (ulonglong)bVar2;
            }
            uVar6 = 0x32 - (ulonglong)bVar2;
            do {
              uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar6 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_141803f71;
              lVar1 = uVar5 + 1 + uVar6;
              uVar6 = uVar6 - 1;
            } while (lVar1 != 0x33);
          }
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar3 & ((uVar4 & 0x7ffffffff0) + uVar3) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
LAB_141803f71:
    uVar4 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar3 / 0x78)) {
      uVar4 = uVar3 / 0x78 & 0xffffffff;
    }
  }
  if ((int)uVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar4;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar4,0x78,8);
  }
  return;
}



// FUNCTION 141804056 FUN_141804056 body=369 status=ok
// SIG undefined FUN_141804056(void)

void FUN_141804056(longlong param_1,int param_2)

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
  uVar5 = lVar4 * 0x78;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1418040db;
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
LAB_1418040db:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x78)) {
    uVar7 = uVar5 / 0x78 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x78,8);
  return;
}



// FUNCTION 1418041c8 FUN_1418041c8 body=225 status=ok
// SIG undefined FUN_1418041c8(void)

undefined8
FUN_1418041c8(longlong param_1,undefined4 param_2,float param_3,undefined8 param_4,float param_5)

{
  float fVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if (*(float *)(param_1 + 0x134) <= ABS(param_3)) {
    lVar2 = FUN_14022af78(*(float *)(param_1 + 0x134),0);
    if (lVar2 != 0) {
      lVar2 = FUN_14022b0b8(lVar2,param_2,param_4,6);
      if (lVar2 != 0) {
        fVar1 = param_3;
        if (*(float *)(param_1 + 0x130) <= ABS(param_3)) {
          fVar1 = param_5;
        }
        uVar3 = FUN_140300779((ulonglong)((fVar1 < 0.0 ^ 1) << 4) + lVar2 + 0x40,param_3);
        return uVar3;
      }
    }
  }
  return 0;
}



// FUNCTION 1418042aa FUN_1418042aa body=193 status=ok
// SIG undefined FUN_1418042aa(void)

undefined8 FUN_1418042aa(longlong param_1,undefined8 param_2,float param_3,float param_4)

{
  float fVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if (*(float *)(param_1 + 0x134) <= ABS(param_3)) {
    lVar2 = FUN_14022af78(*(float *)(param_1 + 0x134),0);
    if (lVar2 != 0) {
      lVar2 = FUN_14022a99c(lVar2,param_2,6);
      if (lVar2 != 0) {
        fVar1 = param_3;
        if (*(float *)(param_1 + 0x130) <= ABS(param_3)) {
          fVar1 = param_4;
        }
        uVar3 = FUN_140300779((ulonglong)((fVar1 < 0.0 ^ 1) << 4) + lVar2 + 0x40,param_3);
        return uVar3;
      }
    }
  }
  return 0;
}



// FUNCTION 14180436c FUN_14180436c body=166 status=ok
// SIG undefined FUN_14180436c(void)

undefined8 FUN_14180436c(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  float fVar7;
  undefined4 uVar9;
  undefined8 uVar8;
  
  fVar7 = 0.0;
  uVar9 = 0;
  if ((longlong)*(int *)(param_1 + 0x108) != 0) {
    lVar3 = *(longlong *)(param_1 + 0x100);
    lVar1 = lVar3 + (longlong)*(int *)(param_1 + 0x108) * 0x28;
    do {
      if ((longlong)*(int *)(lVar3 + 0x18) != 0) {
        plVar5 = *(longlong **)(lVar3 + 0x10);
        plVar6 = plVar5 + (longlong)*(int *)(lVar3 + 0x18) * 0x13;
        do {
          iVar2 = (int)plVar5[1];
          if ((longlong)iVar2 != 0) {
            lVar4 = 0;
            do {
              if (*(longlong *)(*plVar5 + lVar4) == param_2) {
                uVar8 = 0x3f800000;
                if ((0 < iVar2) && (uVar8 = 0x3f800000, *(longlong *)*plVar5 != 0)) {
                  uVar8 = FUN_144867862(param_3);
                }
                uVar9 = (undefined4)((ulonglong)uVar8 >> 0x20);
                fVar7 = (float)uVar8 * *(float *)(plVar5 + 4);
                goto LAB_14180440a;
              }
              lVar4 = lVar4 + 8;
            } while ((longlong)iVar2 * 8 - lVar4 != 0);
          }
          plVar5 = plVar5 + 0x13;
        } while (plVar5 != plVar6);
      }
      lVar3 = lVar3 + 0x28;
    } while (lVar3 != lVar1);
  }
LAB_14180440a:
  return CONCAT44(uVar9,fVar7);
}



// FUNCTION 141804412 FUN_141804412 body=345 status=ok
// SIG undefined FUN_141804412(void)

void FUN_141804412(longlong param_1,float param_2,float param_3,longlong param_4)

{
  uint uVar1;
  float fVar2;
  double dVar3;
  
  if ((-1 < *(int *)(param_4 + 4)) && (*(int *)(param_4 + 4) < *(int *)(param_1 + 0x108))) {
    dVar3 = (double)FUN_144719204(SUB84((double)(param_2 - param_3),0),0x4076800000000000);
    fVar2 = *(float *)(*(longlong *)(param_1 + 0x100) + 8 + (longlong)*(int *)(param_4 + 4) * 0x28);
    if (179.0 < fVar2) {
      dVar3 = (double)(~-(ulonglong)(dVar3 < 0.0) & (ulonglong)dVar3 |
                      (ulonglong)(dVar3 + 360.0) & -(ulonglong)(dVar3 < 0.0));
      fVar2 = (float)(double)(~-(ulonglong)(180.0 < dVar3) & (ulonglong)dVar3 |
                             (ulonglong)(dVar3 + -360.0) & -(ulonglong)(180.0 < dVar3));
      uVar1 = -(uint)(0.0 < fVar2);
      fVar2 = (float)(uVar1 & 0x43330000 | ~uVar1 & -(uint)(fVar2 < 0.0) & 0xc3330000);
    }
    FUN_144719204(SUB84((double)(param_2 - fVar2),0),0x4076800000000000);
  }
  return;
}



// FUNCTION 14180456c FUN_14180456c body=128 status=ok
// SIG undefined FUN_14180456c(void)

void FUN_14180456c(undefined8 param_1,longlong *param_2)

{
  undefined1 auStack_1c8 [32];
  undefined **local_1a8;
  longlong *local_1a0;
  undefined ***local_198;
  undefined8 **local_190;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_14ab9fb24);
  local_190 = &local_198;
  local_1a8 = &PTR_FUN_149e37810;
  local_198 = &local_1a8;
  local_1a0 = param_2;
  switchD_143c3d4dc::caseD_20(param_1);
  if ((local_18 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418045ee FUN_1418045ee body=127 status=ok
// SIG undefined FUN_1418045ee(void)

void FUN_1418045ee(longlong param_1)

{
  char cVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(byte *)(*(longlong *)(param_1 + 0x10) + 0xd5) & 4) != 0) {
    local_38 = 0;
    uStack_30 = 0;
    FUN_1400033ba(param_1,0,0,0);
  }
  cVar1 = FUN_1400439fc(param_1,0,&local_19);
  if (cVar1 == '\0') {
    if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58);
}



// FUNCTION 141804692 FUN_141804692 body=1077 status=ok
// SIG undefined FUN_141804692(void)

undefined8 FUN_141804692(longlong param_1,double *param_2)

{
  longlong *plVar1;
  int *piVar2;
  double dVar3;
  double dVar4;
  byte bVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  double dVar9;
  undefined1 auStack_188 [32];
  undefined1 local_168 [24];
  double local_150;
  longlong *local_148;
  double local_140;
  float local_138;
  longlong *local_d8;
  longlong *local_60;
  char local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_188;
  if (((*(char *)(param_1 + 0x1558) == '\x01') && (*(longlong *)(param_1 + 0x110) != 0)) &&
     (*(longlong *)(param_1 + 0x14e8) != 0)) {
    dVar3 = *(double *)(param_1 + 0x1540);
    plVar8 = *(longlong **)(param_1 + 0x1548);
    dVar4 = *(double *)(param_1 + 0x1550);
    if (((9.999999747378752e-05 < ABS(dVar3)) || (9.999999747378752e-05 < ABS((double)plVar8))) ||
       (9.999999747378752e-05 < ABS(dVar4))) {
      dVar9 = dVar3 * dVar3 + (double)plVar8 * (double)plVar8;
      if (*(char *)(param_1 + 0x1539) == '\x02') {
        dVar9 = SQRT(dVar4 * dVar4 + dVar9);
        if (1.0 <= dVar9) {
          dVar9 = 1.0;
        }
        local_140 = dVar4;
        if (dVar9 <= 0.0) {
          dVar9 = 0.0;
        }
      }
      else {
        dVar9 = SQRT(dVar9);
        if (1.0 <= dVar9) {
          dVar9 = 1.0;
        }
        local_140 = 0.0;
        if (dVar9 <= 0.0) {
          dVar9 = 0.0;
        }
      }
      local_138 = (float)dVar9;
      bVar5 = 1;
      local_150 = dVar3;
      local_148 = plVar8;
    }
    else {
      if (*(float *)(param_1 + 0x1780) <= 1.0) {
        plVar8 = *(longlong **)(*(longlong *)(param_1 + 0x14e8) + 0x3c0);
        if (plVar8 == (longlong *)0x0) {
          lVar7 = param_1 + 0x1750;
          goto LAB_1418049f4;
        }
        (**(code **)(*plVar8 + 0x680))(plVar8,local_168);
        FUN_144a76660(local_168,&local_150);
      }
      else {
        lVar7 = param_1 + 0x1768;
LAB_1418049f4:
        FUN_144a76660(lVar7,&local_150);
      }
      if (*(char *)(param_1 + 0x1539) != '\x02') {
        local_140 = 0.0;
      }
      bVar5 = *(byte *)(param_1 + 0x1558);
      local_138 = 0.0;
    }
    if ((bVar5 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x1558) = 0;
    }
    local_30 = '\0';
    if (&local_150 != param_2) {
      if (*(char *)(param_2 + 0x25) == '\x01') {
        FUN_1437f9e3c(param_2);
      }
      *(undefined1 *)(param_2 + 0x24) = 0xff;
      FUN_140a8a2e2(param_2,&local_150);
      *(undefined1 *)(param_2 + 0x25) = 1;
      if (local_30 == '\x01') {
        local_30 = -1;
        plVar8 = local_148;
      }
      else {
        if (local_30 != '\x02') goto LAB_1418048d8;
        local_30 = -1;
        plVar8 = local_d8;
        if (local_60 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_60 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_60)(local_60);
            LOCK();
            piVar2 = (int *)((longlong)local_60 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            plVar8 = local_d8;
            if (*piVar2 == 0) {
              (**(code **)(*local_60 + 0x10))(local_60);
              plVar8 = local_d8;
            }
          }
        }
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
    }
LAB_1418048d8:
    uVar6 = 1;
    goto LAB_1418046cf;
  }
  if (*(char *)(param_1 + 0x1708) == '\x01') {
    local_30 = -1;
    FUN_140a8a93c(&local_150,param_1 + 0x15e8);
    if (&local_150 != param_2) {
      if (*(char *)(param_2 + 0x25) == '\x01') {
        FUN_1437f9e3c(param_2);
      }
      *(undefined1 *)(param_2 + 0x24) = 0xff;
      FUN_140a8a2e2(param_2,&local_150);
      *(undefined1 *)(param_2 + 0x25) = 1;
    }
    if (local_30 == '\x01') {
      local_30 = -1;
      plVar8 = local_148;
LAB_141804905:
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
    }
    else if (local_30 == '\x02') {
      local_30 = -1;
      plVar8 = local_d8;
      if (local_60 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_60 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_60)(local_60);
          LOCK();
          piVar2 = (int *)((longlong)local_60 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          plVar8 = local_d8;
          if (*piVar2 == 0) {
            (**(code **)(*local_60 + 0x10))(local_60);
            plVar8 = local_d8;
          }
        }
      }
      goto LAB_141804905;
    }
    if (*(char *)(param_1 + 0x1708) == '\x01') {
      plVar8 = *(longlong **)(param_1 + 0x16d8);
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
      plVar8 = *(longlong **)(param_1 + 0x1660);
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
      *(undefined1 *)(param_1 + 0x1708) = 0;
    }
  }
  uVar6 = 0;
LAB_1418046cf:
  if ((local_28 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6;
}



// FUNCTION 141804ac8 FUN_141804ac8 body=891 status=ok
// SIG undefined FUN_141804ac8(void)

void FUN_141804ac8(longlong *param_1,void *param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_1c8 [32];
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined1 local_198 [184];
  undefined4 uStack_e0;
  undefined4 local_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined8 local_cc;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined1 *local_98 [2];
  undefined8 *local_88;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14caddfd8) && (FUN_144b3d300(&DAT_14caddfd8), DAT_14caddfd8 == -1)) {
    FUN_1456bdea2(&DAT_14caddf88);
    atexit((_func_5014 *)&LAB_14350c396);
    _Init_thread_footer(&DAT_14caddfd8);
  }
  if (DAT_14caddfd0 != '\x01') {
    if ((local_50 ^ (ulonglong)auStack_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
                    /* WARNING: Could not recover jumptable at 0x000141804d72. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xc10))(param_1,param_2,param_3,param_4);
    return;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14caddfd8) && (FUN_144b3d300(&DAT_14caddfd8), DAT_14caddfd8 == -1)) {
    FUN_1456bdea2(&DAT_14caddf88);
    atexit((_func_5014 *)&LAB_14350c396);
    _Init_thread_footer(&DAT_14caddfd8);
  }
  if (param_1 == (longlong *)0x0) {
    uVar9 = 0;
    uVar7 = 0;
  }
  else {
    uVar9 = *(uint *)((longlong)param_1 + 0xc);
    if ((int)uVar9 < DAT_14c9647dc) {
      lVar10 = (ulonglong)((uVar9 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8);
    }
    else {
      lVar10 = 0;
    }
    uVar7 = (ulonglong)*(uint *)(lVar10 + 0x10);
    if (*(uint *)(lVar10 + 0x10) == 0) {
      LOCK();
      iVar4 = DAT_14c964868 + 1;
      UNLOCK();
      uVar8 = DAT_14c964868 + 1;
      bVar11 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar4;
      if (bVar11) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar8);
      }
      LOCK();
      uVar5 = *(uint *)(lVar10 + 0x10);
      bVar11 = uVar5 == 0;
      if (bVar11) {
        *(uint *)(lVar10 + 0x10) = uVar8;
        uVar5 = 0;
      }
      UNLOCK();
      if (bVar11) {
        uVar5 = uVar8;
      }
      uVar7 = (ulonglong)uVar5;
    }
  }
  memcpy(local_198,param_2,0xb8);
  uVar3 = *(undefined8 *)((longlong)param_2 + 0xb8);
  local_1a8 = *(undefined8 *)((longlong)param_2 + 0xc0);
  uStack_1a0 = *(undefined8 *)((longlong)param_2 + 200);
  uVar2 = *(undefined4 *)((longlong)param_2 + 0xd0);
  uVar1 = *(undefined1 *)((longlong)param_2 + 0xd4);
  local_a0 = *(undefined8 *)((longlong)param_2 + 0xf8);
  local_b0 = *(undefined8 *)((longlong)param_2 + 0xe8);
  uStack_a8 = *(undefined8 *)((longlong)param_2 + 0xf0);
  local_c0 = *(undefined8 *)((longlong)param_2 + 0xd8);
  uStack_b8 = *(undefined8 *)((longlong)param_2 + 0xe0);
  local_cc = *(undefined8 *)(param_4 + 4);
  local_dc = *param_4;
  uStack_d8 = param_4[1];
  uStack_d4 = param_4[2];
  uStack_d0 = param_4[3];
  local_98[0] = (undefined1 *)0x0;
  puVar6 = (undefined8 *)FUN_14001cc68(0x130,8);
  *puVar6 = &PTR_FUN_14aba06e0;
  puVar6[1] = uVar7 << 0x20 | (ulonglong)uVar9;
  local_88 = puVar6;
  memcpy(puVar6 + 2,local_198,0xb8);
  puVar6[0x19] = uVar3;
  puVar6[0x1a] = local_1a8;
  puVar6[0x1b] = uStack_1a0;
  *(undefined4 *)(puVar6 + 0x1c) = uVar2;
  *(undefined1 *)((longlong)puVar6 + 0xe4) = uVar1;
  puVar6[0x21] = local_a0;
  puVar6[0x1f] = local_b0;
  puVar6[0x20] = uStack_a8;
  puVar6[0x1d] = local_c0;
  puVar6[0x1e] = uStack_b8;
  *(undefined4 *)(puVar6 + 0x22) = param_3;
  *(undefined4 *)(puVar6 + 0x24) = uStack_d4;
  *(undefined4 *)((longlong)puVar6 + 0x124) = uStack_d0;
  *(undefined4 *)(puVar6 + 0x25) = (undefined4)local_cc;
  *(undefined4 *)((longlong)puVar6 + 300) = local_cc._4_4_;
  *(undefined4 *)((longlong)puVar6 + 0x114) = uStack_e0;
  *(undefined4 *)(puVar6 + 0x23) = local_dc;
  *(undefined4 *)((longlong)puVar6 + 0x11c) = uStack_d8;
  *(undefined4 *)(puVar6 + 0x24) = uStack_d4;
  if (puVar6 != (undefined8 *)&DAT_fffffffffffffff8) {
    local_98[0] = &LAB_143802492;
  }
  FUN_140058b88(&DAT_14caddf88,local_98);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_50 ^ (ulonglong)auStack_1c8);
}



// FUNCTION 141804e5e FUN_141804e5e body=609 status=ok
// SIG undefined FUN_141804e5e(void)

undefined4 * FUN_141804e5e(undefined4 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  longlong *plVar5;
  float fVar6;
  undefined1 auStack_348 [32];
  undefined4 local_328;
  undefined4 uStack_324;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  double local_318;
  undefined1 local_308 [104];
  double local_2a0;
  byte local_25b;
  float local_208;
  float local_200;
  char local_1fc;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  longlong *local_1b8;
  undefined4 local_1b0;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined1 local_198 [4];
  undefined4 local_194;
  undefined4 local_f4;
  undefined4 local_c8;
  undefined4 local_98;
  undefined8 local_90;
  char local_70;
  undefined1 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_348;
  local_1f8 = *param_2;
  local_1f0 = param_2[1];
  uStack_1e8 = param_2[2];
  local_1e0 = param_2[3];
  uStack_1d8 = param_2[4];
  local_1d0 = param_2[5];
  uStack_1c8 = param_2[6];
  local_1c0 = param_2[7];
  local_1b8 = (longlong *)param_2[8];
  if (local_1b8 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_1b8 + 1) = (int)local_1b8[1] + 1;
    UNLOCK();
  }
  local_1b0 = *(undefined4 *)(param_2 + 9);
  local_1a8 = param_2[10];
  local_1a0 = *(undefined4 *)(param_2 + 0xb);
  memset(local_198,0,0x100);
  local_c8 = 0xffffffff;
  local_194 = 0x3f800000;
  local_f4 = 0xffffffff;
  local_98 = 0;
  local_90 = 0x41400000;
  local_70 = '\0';
  local_68 = 0;
  FUN_14038e3ee(local_308,&local_1f8);
  if ((local_25b & 3) == 1) {
    local_208 = 0.0;
    local_318 = (double)param_2[3];
    local_328 = *(undefined4 *)(param_2 + 1);
    uStack_324 = *(undefined4 *)((longlong)param_2 + 0xc);
    uStack_320 = *(undefined4 *)(param_2 + 2);
    uStack_31c = *(undefined4 *)((longlong)param_2 + 0x14);
    fVar3 = *(float *)(param_2 + 10);
    fVar4 = *(float *)((longlong)param_2 + 0x54);
    FUN_14496c60e(&local_200);
    if (local_1fc != '\0') {
      fVar6 = 0.0;
      if (0.699999988079071 <= local_2a0) {
        fVar6 = (float)((double)fVar3 / local_2a0 - (double)fVar3);
      }
      local_318 = (double)(fVar4 + fVar6 + local_200 + local_208);
    }
    *(double *)(param_1 + 4) = local_318;
    *param_1 = local_328;
    param_1[1] = uStack_324;
    param_1[2] = uStack_320;
    param_1[3] = uStack_31c;
    *(undefined1 *)(param_1 + 6) = 1;
  }
  else {
    *(undefined1 *)(param_1 + 6) = 0;
  }
  plVar5 = local_1b8;
  if (local_70 == '\x01') {
    local_70 = '\0';
  }
  if (local_1b8 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_1b8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_1b8)(local_1b8);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_348) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418050c0 FUN_1418050c0 body=447 status=ok
// SIG undefined FUN_1418050c0(void)

void FUN_1418050c0(longlong param_1)

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
  FUN_1447c0e7a();
  lVar5 = *(longlong *)(param_1 + 0xb0);
  if ((lVar5 != 0) || (lVar5 = FUN_1448abda6(param_1), lVar5 != 0)) {
    uVar2 = DAT_14cb1c840;
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
          FUN_140d36aa0(local_38 + 0x200,param_1,1);
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



// FUNCTION 141805280 FUN_141805280 body=258 status=ok
// SIG undefined FUN_141805280(void)

int FUN_141805280(longlong param_1,char param_2)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  float fVar6;
  
  lVar4 = *(longlong *)(param_1 + 0x6d0);
  if (lVar4 != 0) {
    if ((param_2 != '\0') && (*(longlong *)(lVar4 + 0x30) != 0)) {
      lVar4 = *(longlong *)(lVar4 + 0x30);
    }
    cVar1 = *(char *)(lVar4 + 0x3c);
    fVar6 = 0.0;
    if (*(char *)(param_1 + 0x6dc) == '\x01') {
      fVar6 = *(float *)(param_1 + 0x6d8);
    }
    if (*(longlong *)(param_1 + 0xb0) == 0) {
      FUN_1448abda6();
    }
    lVar3 = FUN_14477bcf0();
    if ((longlong)*(int *)(lVar3 + 0x78) != 0) {
      fVar6 = fVar6 / *(float *)(&DAT_14ab9fa70 + (ulonglong)(cVar1 == '\x03') * 4);
      if (1.0 <= fVar6) {
        fVar6 = 1.0;
      }
      if (fVar6 <= 0.0) {
        fVar6 = 0.0;
      }
      lVar5 = 0;
      iVar2 = 0;
      do {
        if (*(longlong *)(*(longlong *)(lVar3 + 0x70) + lVar5) == lVar4) {
          if (0x1f < (uint)-iVar2) {
            return -1;
          }
          return ((int)ROUND(fVar6 * 33554432.0 + fVar6 * 33554432.0 + 0.5) & 0xffffffeU) * 0x10 -
                 iVar2;
        }
        iVar2 = iVar2 + -1;
        lVar5 = lVar5 + 8;
      } while ((longlong)*(int *)(lVar3 + 0x78) * 8 != lVar5);
    }
  }
  return -1;
}



// FUNCTION 141805382 FUN_141805382 body=118 status=ok
// SIG undefined FUN_141805382(void)

longlong FUN_141805382(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FUN_14069cbf6(param_1 + 0x470,param_1 + 0x478);
  if ((((lVar2 != 0) && (*(int *)(lVar2 + 8) == 8)) &&
      (*(int *)(lVar2 + 0x30) == 0 && *(int *)(lVar2 + 0x28) == 0)) &&
     ((longlong)*(int *)(lVar2 + 0x18) != 0)) {
    lVar3 = 0;
    do {
      lVar1 = *(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x28 + lVar3);
      if (*(int *)(*(longlong *)(lVar1 + 0x20) + 0x180) == param_3) {
        return lVar1;
      }
      lVar3 = lVar3 + 0x60;
    } while ((longlong)*(int *)(lVar2 + 0x18) * 0x60 != lVar3);
  }
  return 0;
}



// FUNCTION 1418053f8 FUN_1418053f8 body=482 status=ok
// SIG undefined FUN_1418053f8(void)

void FUN_1418053f8(longlong param_1)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x1d0));
  iVar2 = *(int *)(param_1 + 0x108);
  if (iVar2 == 0) {
    uVar13 = 1;
    uVar14 = 0;
    iVar5 = 0;
    iVar9 = 0;
  }
  else {
    puVar4 = *(uint **)(param_1 + 0x100);
    if (*(uint **)(param_1 + 0x100) == (uint *)0x0) {
      puVar4 = (uint *)(param_1 + 0xf0);
    }
    uVar10 = *puVar4;
    if (uVar10 == 0) {
      iVar5 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar5 = iVar2 + -1;
      }
      uVar14 = 0;
      uVar13 = (ulonglong)(uint)(iVar5 >> 5);
      if (iVar5 >> 5 < 1) {
        uVar13 = uVar14;
      }
      iVar9 = 0;
      do {
        if (uVar13 == uVar14) goto LAB_14180557f;
        iVar9 = iVar9 + 0x20;
        uVar10 = puVar4[uVar14 + 1];
        uVar14 = uVar14 + 1;
      } while (uVar10 == 0);
    }
    else {
      uVar14 = 0;
      iVar9 = 0;
    }
    uVar13 = (ulonglong)(-uVar10 & uVar10);
    uVar1 = uVar13 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    iVar5 = (iVar9 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar5) {
      iVar5 = iVar2;
    }
  }
  if (iVar5 != iVar2) {
    uVar10 = 0xffffffff;
    iVar3 = iVar2;
    do {
      lVar11 = *(longlong *)(*(longlong *)(param_1 + 0xe0) + 8 + (longlong)iVar5 * 0x20);
      if (lVar11 != 0) {
        FUN_140574030(*(longlong *)(lVar11 + 0xcc8) + 0x1bc0);
        iVar3 = *(int *)(param_1 + 0x108);
      }
      uVar10 = uVar10 & ~(uint)uVar13;
      puVar4 = *(uint **)(param_1 + 0x100);
      if (*(uint **)(param_1 + 0x100) == (uint *)0x0) {
        puVar4 = (uint *)(param_1 + 0xf0);
      }
      iVar5 = (int)uVar14;
      lVar11 = (longlong)iVar5;
      uVar6 = puVar4[lVar11] & uVar10;
      if (uVar6 == 0) {
        iVar7 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar7 = iVar3 + -1;
        }
        iVar7 = iVar7 >> 5;
        iVar9 = iVar9 + 0x20;
        iVar8 = iVar7;
        if (iVar7 < iVar5) {
          iVar8 = iVar5;
        }
        if (iVar5 < iVar7) {
          lVar12 = 0;
          do {
            uVar6 = puVar4[lVar11 + lVar12 + 1];
            if (uVar6 != 0) {
              uVar14 = (ulonglong)(iVar5 + (int)lVar12 + 1);
              uVar10 = 0xffffffff;
              goto LAB_141805552;
            }
            iVar9 = iVar9 + 0x20;
            lVar12 = lVar12 + 1;
          } while (iVar8 - lVar11 != lVar12);
          uVar10 = 0xffffffff;
          iVar5 = iVar8;
        }
        uVar14 = (ulonglong)(iVar5 + 1);
        iVar5 = iVar3;
      }
      else {
LAB_141805552:
        uVar13 = (ulonglong)(-uVar6 & uVar6);
        uVar1 = uVar13 * 2 + 1;
        lVar11 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        iVar5 = (iVar9 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
        if (iVar3 <= iVar5) {
          iVar5 = iVar3;
        }
      }
    } while (iVar5 != iVar2);
  }
LAB_14180557f:
                    /* WARNING: Could not recover jumptable at 0x000141805594. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x1d0));
  return;
}



// FUNCTION 1418055da FUN_1418055da body=295 status=ok
// SIG undefined FUN_1418055da(void)

void FUN_1418055da(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  ulonglong uVar1;
  uint uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined1 auStack_78 [40];
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
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
  uVar3 = (**(code **)(*param_2 + 0x10))(param_2,uVar4 * 0x10,&local_50);
  FUN_144b3d470(uVar3,*param_1,(longlong)*(int *)(param_1 + 1) << 4);
  uVar1 = uVar4 * 0x10 + 0x10;
  uVar5 = uVar4;
  if (uVar1 <= local_50) {
    uVar5 = uVar4 + 1;
    local_50 = local_50 - 0x10;
    if (uVar1 <= local_50) {
      uVar5 = uVar5 + (local_50 + uVar4 * -0x10 >> 4);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (**(code **)(*param_2 + 0x18))(param_2,*param_1,((ulonglong)uVar2 & 0x7fffffff) << 4);
  }
  *(int *)((longlong)param_1 + 0xc) = (int)uVar5;
  *param_1 = uVar3;
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141805702 FUN_141805702 body=292 status=ok
// SIG undefined FUN_141805702(void)

void FUN_141805702(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  ulonglong uVar1;
  uint uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined1 auStack_78 [40];
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
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
  uVar3 = (**(code **)(*param_2 + 0x10))(param_2,uVar4 * 0x10,&local_50);
  FUN_144b3d470(uVar3,*param_1,(longlong)*(int *)(param_1 + 1) << 4);
  uVar1 = uVar4 * 0x10 + 0x10;
  uVar5 = uVar4;
  if (uVar1 <= local_50) {
    uVar5 = uVar4 + 1;
    local_50 = local_50 - 0x10;
    if (uVar1 <= local_50) {
      uVar5 = uVar5 + (local_50 + uVar4 * -0x10 >> 4);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (**(code **)(*param_2 + 0x18))(param_2,*param_1,((ulonglong)uVar2 & 0x7fffffff) << 4);
  }
  *(int *)((longlong)param_1 + 0xc) = (int)uVar5;
  *param_1 = uVar3;
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141805828 FUN_141805828 body=282 status=ok
// SIG undefined FUN_141805828(void)

void FUN_141805828(undefined8 *param_1,longlong param_2,ulonglong param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 auStack_68 [40];
  ulonglong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar3 = (ulonglong)(uint)(*(int *)((longlong)param_1 + 0xc) * 2);
  if (uVar3 <= param_3) {
    uVar3 = param_3;
  }
  if ((0x7ffffffe < uVar3) && (uVar3 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "..\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  local_40 = uVar3 * 0x10;
  uVar2 = (*DAT_14c787670)(*(undefined1 *)(param_2 + 8),&local_40,*(undefined4 *)(param_2 + 0xc));
  FUN_144b3d470(uVar2,*param_1,(longlong)*(int *)(param_1 + 1) << 4);
  uVar1 = uVar3 * 0x10 + 0x10;
  uVar4 = uVar3;
  if (uVar1 <= local_40) {
    uVar4 = uVar3 + 1;
    local_40 = local_40 - 0x10;
    if (uVar1 <= local_40) {
      uVar4 = uVar4 + (local_40 + uVar3 * -0x10 >> 4);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)(CONCAT71((int7)(uVar1 >> 8),*(undefined1 *)(param_2 + 8)),*param_1,0);
  }
  *(int *)((longlong)param_1 + 0xc) = (int)uVar4;
  *param_1 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141805944 FUN_141805944 body=552 status=ok
// SIG undefined FUN_141805944(void)

void FUN_141805944(longlong *param_1)

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
        lVar10 = (longlong)iVar6 * 0x20;
        uVar13 = (longlong)
                 (int)((uint)((ulonglong)*(undefined8 *)(lVar11 + lVar10) >> 0x20) ^
                      (uint)*(undefined8 *)(lVar11 + lVar10)) & (longlong)(int)param_1[9] - 1U;
        iVar12 = (int)uVar13;
        *(int *)(lVar11 + 0x1c + lVar10) = iVar12;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar11 + 0x18 + lVar10) =
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
            if (iVar2 - lVar11 == lVar10) goto LAB_141805b27;
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
LAB_141805b27:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141805b6e FUN_141805b6e body=320 status=ok
// SIG undefined FUN_141805b6e(void)

void FUN_141805b6e(longlong param_1,uint param_2)

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
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_141805bd7;
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
LAB_141805bd7:
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



// FUNCTION 141805cae FUN_141805cae body=337 status=ok
// SIG undefined FUN_141805cae(void)

void FUN_141805cae(longlong param_1,uint param_2)

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
    uVar4 = (ulonglong)param_2 * 0x18;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar3 = uVar4 + 0xf;
        if (param_2 < 0x555) {
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
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_141805d1b;
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
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
      }
    }
LAB_141805d1b:
    uVar3 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar4 / 0x18)) {
      uVar3 = uVar4 / 0x18 & 0xffffffff;
    }
  }
  if ((int)uVar3 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar3;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar3,0x18,8);
  }
  return;
}



// FUNCTION 141805e00 FUN_141805e00 body=562 status=ok
// SIG undefined FUN_141805e00(void)

void FUN_141805e00(void *param_1,int param_2)

{
  ulonglong uVar1;
  byte bVar2;
  uint uVar3;
  void *_Src;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  
  uVar3 = *(uint *)((longlong)param_1 + 0xa908);
  if ((int)uVar3 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar3);
  }
  if (uVar3 < 0x21) {
    *(undefined4 *)((longlong)param_1 + 0xa90c) = 0x20;
    _Src = *(void **)((longlong)param_1 + 0xa900);
joined_r0x000141805fbc:
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x548);
    param_2 = 0;
    uVar5 = 0;
  }
  else {
    lVar4 = (longlong)(int)uVar3;
    if (0x20 < *(uint *)((longlong)param_1 + 0xa90c)) {
      lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
    }
    uVar5 = lVar4 * 0x548;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar1 = uVar5 + 0xf;
        if (uVar5 < 0x7ff1) {
          uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
        }
        else {
          if ((uVar1 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar1 >> 4];
            uVar6 = 0x32;
            if (0x32 < bVar2) {
              uVar6 = (ulonglong)bVar2;
            }
            uVar8 = 0x32 - (ulonglong)bVar2;
            do {
              uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_141805e99;
              lVar4 = uVar6 + 1 + uVar8;
              uVar8 = uVar8 - 1;
            } while (lVar4 != 0x33);
          }
          uVar5 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar5 = (ulonglong)DAT_14c841df8;
          }
          uVar5 = -uVar5 & ((uVar1 & 0xfffffffffffffff0) + uVar5) - 1;
        }
      }
      else {
        uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,0);
      }
    }
LAB_141805e99:
    uVar5 = uVar5 / 0x548;
    uVar7 = (uint)uVar5;
    if ((int)uVar7 < (int)uVar3) {
      *(undefined4 *)((longlong)param_1 + 0xa90c) = 0x7fffffff;
      uVar5 = 0x7fffffff;
      _Src = *(void **)((longlong)param_1 + 0xa900);
    }
    else {
      *(uint *)((longlong)param_1 + 0xa90c) = uVar7;
      _Src = *(void **)((longlong)param_1 + 0xa900);
      if (uVar7 < 0x21) goto joined_r0x000141805fbc;
    }
    if (_Src == (void *)0x0) {
      FUN_1446efa72((longlong)param_1 + 0xa900,0,uVar5,0x548);
      memmove(*(void **)((longlong)param_1 + 0xa900),param_1,(longlong)param_2 * 0x548);
      return;
    }
  }
  FUN_1446efa72((longlong)param_1 + 0xa900,param_2,uVar5,0x548);
  return;
}



// FUNCTION 141806032 FUN_141806032 body=353 status=ok
// SIG undefined FUN_141806032(void)

void FUN_141806032(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1418060b9;
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
LAB_1418060b9:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 141806194 FUN_141806194 body=353 status=ok
// SIG undefined FUN_141806194(void)

void FUN_141806194(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_141806219;
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
LAB_141806219:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 1418062f6 FUN_1418062f6 body=271 status=ok
// SIG undefined FUN_1418062f6(void)

void FUN_1418062f6(longlong param_1,int param_2)

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
    uVar4 = lVar3 * 0xb0;
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
    if ((int)uVar1 <= (int)(uVar4 / 0xb0)) {
      uVar5 = uVar4 / 0xb0 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0xb0,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 141806406 FUN_141806406 body=29 status=ok
// SIG undefined FUN_141806406(void)

undefined8 FUN_141806406(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141806424 FUN_141806424 body=346 status=ok
// SIG undefined FUN_141806424(void)

void FUN_141806424(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1418064b6;
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
LAB_1418064b6:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 141806580 FUN_141806580 body=353 status=ok
// SIG undefined FUN_141806580(void)

void FUN_141806580(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_141806605;
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
LAB_141806605:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 1418066e2 FUN_1418066e2 body=159 status=ok
// SIG undefined FUN_1418066e2(void)

void FUN_1418066e2(longlong param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar3 = (ulonglong)uVar1;
  iVar2 = *(int *)(param_1 + 0xc);
  if (((0x3fff < (ulonglong)((longlong)(int)(iVar2 - uVar1) * 0xc)) ||
      ((int)(uVar1 * 3) < iVar2 * 2)) && (uVar1 == 0 || 0x40 < (int)(iVar2 - uVar1))) {
    if (0 < (int)uVar1) {
      uVar3 = FUN_144a3809e(uVar3 * 0xc,4);
      uVar3 = uVar3 / 0xc;
      iVar2 = *(int *)(param_1 + 0xc);
    }
    if ((int)uVar3 != iVar2) {
      *(int *)(param_1 + 0xc) = (int)uVar3;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar3,0xc,4);
    }
  }
  return;
}



// FUNCTION 141806782 FUN_141806782 body=470 status=ok
// SIG undefined FUN_141806782(void)

int * FUN_141806782(longlong *param_1,int *param_2)

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
      FUN_14482b872(param_1,iVar11);
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
    iVar6 = *(int *)(*param_1 + 4 + lVar2 * 0x18);
    *(int *)(param_1 + 6) = iVar6;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
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
  *(longlong *)(param_2 + 2) = lVar2 * 0x18 + *param_1;
  return param_2;
}



// FUNCTION 141806958 FUN_141806958 body=587 status=ok
// SIG undefined FUN_141806958(void)

void FUN_141806958(longlong *param_1)

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
        lVar10 = (longlong)iVar6;
        uVar13 = *(ulonglong *)(lVar11 + lVar10 * 0x18);
        uVar3 = ((uint)(uVar13 >> 0x14) & 0xffff ^ (uint)(uVar13 >> 4)) * -0x7a143595;
        uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
        uVar13 = (longlong)(int)(uVar3 >> 0x10 ^ uVar3) & (longlong)(int)param_1[9] - 1U;
        iVar12 = (int)uVar13;
        *(int *)(lVar11 + 0x14 + lVar10 * 0x18) = iVar12;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar11 + 0x10 + lVar10 * 0x18) =
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
            if (iVar2 - lVar11 == lVar10) goto LAB_141806b5e;
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
LAB_141806b5e:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141806ba4 FUN_141806ba4 body=100 status=ok
// SIG undefined FUN_141806ba4(void)

void FUN_141806ba4(longlong *param_1,uint param_2)

{
  longlong *_Dst;
  int iVar1;
  
  _Dst = (longlong *)(*param_1 + (longlong)(int)param_2 * 0x70);
  if (*(longlong *)(*param_1 + 0x38 + (longlong)(int)param_2 * 0x70) != 0) {
    FUN_1400020a8();
  }
  if (*_Dst != 0) {
    FUN_1400020a8();
  }
  iVar1 = (int)param_1[1];
  if (~param_2 + iVar1 != 0) {
    memmove(_Dst,_Dst + 0xe,(longlong)(int)(~param_2 + iVar1) * 0x70);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 + -1;
  return;
}



// FUNCTION 141806c08 FUN_141806c08 body=151 status=ok
// SIG undefined FUN_141806c08(void)

void FUN_141806c08(longlong param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar3 = (ulonglong)uVar1;
  iVar2 = *(int *)(param_1 + 0xc);
  if (((0x3fff < (ulonglong)((longlong)(int)(iVar2 - uVar1) * 0x70)) ||
      ((int)(uVar1 * 3) < iVar2 * 2)) && (uVar1 == 0 || 0x40 < (int)(iVar2 - uVar1))) {
    if (0 < (int)uVar1) {
      uVar3 = FUN_144a3809e(uVar3 * 0x70,8);
      uVar3 = uVar3 / 0x70;
      iVar2 = *(int *)(param_1 + 0xc);
    }
    if ((int)uVar3 != iVar2) {
      *(int *)(param_1 + 0xc) = (int)uVar3;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar3,0x70,8);
    }
  }
  return;
}



// FUNCTION 141806ca0 FUN_141806ca0 body=283 status=ok
// SIG undefined FUN_141806ca0(void)

undefined8 * FUN_141806ca0(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  
  uVar2 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  uVar2 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar2;
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x24);
  uVar4 = *(undefined4 *)(param_2 + 5);
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x2c);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar3;
  *(undefined4 *)(param_1 + 5) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x2c) = uVar5;
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
  *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 7);
  *(undefined4 *)((longlong)param_1 + 0x3c) = *(undefined4 *)((longlong)param_2 + 0x3c);
  puVar6 = param_1 + 10;
  param_1[8] = puVar6;
  param_1[9] = 0x8000000400000000;
  if (param_2 == param_1) {
    param_1[0xc] = param_1 + 0xe;
    param_1[0xd] = 0x8000000400000000;
  }
  else {
    iVar1 = *(int *)(param_2 + 9);
    lVar7 = (longlong)iVar1;
    uVar2 = param_2[8];
    if (4 < lVar7) {
      FUN_141807e20(param_1 + 8,&PTR_vftable_14c6e47a0,lVar7);
      puVar6 = (undefined8 *)param_1[8];
    }
    FUN_144b3d470(puVar6,uVar2,lVar7 << 2);
    *(int *)(param_1 + 9) = iVar1;
    puVar6 = param_1 + 0xe;
    param_1[0xc] = puVar6;
    param_1[0xd] = 0x8000000400000000;
    iVar1 = *(int *)(param_2 + 0xd);
    lVar7 = (longlong)iVar1;
    uVar2 = param_2[0xc];
    if (4 < lVar7) {
      FUN_141807e20(param_1 + 0xc,&PTR_vftable_14c6e47a0,lVar7);
      puVar6 = (undefined8 *)param_1[0xc];
    }
    FUN_144b3d470(puVar6,uVar2,lVar7 << 2);
    *(int *)(param_1 + 0xd) = iVar1;
  }
  *(undefined1 *)((longlong)param_1 + 0x84) = *(undefined1 *)((longlong)param_2 + 0x84);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  return param_1;
}



// FUNCTION 141806dbc FUN_141806dbc body=563 status=ok
// SIG undefined FUN_141806dbc(void)

void FUN_141806dbc(longlong param_1)

{
  int *piVar1;
  byte bVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  byte bVar12;
  bool bVar13;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  uVar6 = DAT_14cb1c840;
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (((((*(int *)(param_1 + 0x6c) != 0) && (uVar3 = *(uint *)(param_1 + 0x68), -1 < (int)uVar3)) &&
       ((int)uVar3 < DAT_14c9647dc)) &&
      ((plVar11 = (longlong *)
                  ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
       plVar11 != (longlong *)0x0 && ((int)plVar11[2] == *(int *)(param_1 + 0x6c))))) &&
     ((bVar2 = *(byte *)(param_1 + 0xbc), (*(uint *)(plVar11 + 1) & 0x10200000) == 0 &&
      (lVar4 = *plVar11, lVar4 != 0)))) {
    if (DAT_14c9a7d10 == (undefined8 *)0x0) {
      DAT_14c9a7d10 = (undefined8 *)FUN_14001cc68(0x20,0x10);
      *DAT_14c9a7d10 = 0;
      DAT_14c9a7d10[1] = 0;
      DAT_14c9a7d10[2] = 0;
      DAT_14c9a7d10[3] = 0;
    }
    FUN_14005915a(DAT_14c9a7d10,&local_38,uVar6,lVar4);
    plVar11 = local_30;
    if ((local_38 == 0) || (local_30 == (longlong *)0x0)) {
      plVar11 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(local_30 + 1) = (int)local_30[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)((longlong)local_30 + 0xc) = *(int *)((longlong)local_30 + 0xc) + 1;
      UNLOCK();
      LOCK();
      plVar10 = local_30 + 1;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)*plVar10 == 0) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar1 = (int *)((longlong)plVar11 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
        }
      }
    }
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar10 = local_30 + 1;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)*plVar10 == 0) {
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
    if (plVar11 != (longlong *)0x0) {
      iVar8 = (int)plVar11[1];
      do {
        plVar10 = (longlong *)0x0;
        if (iVar8 == 0) break;
        LOCK();
        iVar7 = (int)plVar11[1];
        bVar13 = iVar8 == iVar7;
        if (bVar13) {
          *(int *)(plVar11 + 1) = iVar8 + 1;
          iVar7 = iVar8;
        }
        iVar8 = iVar7;
        UNLOCK();
        plVar10 = plVar11;
      } while (!bVar13);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
      if (plVar10 != (longlong *)0x0) {
        if (local_38 != 0) {
          iVar8 = *(int *)(local_38 + 0x4d0);
          if ((longlong)iVar8 != 0) {
            lVar4 = *(longlong *)(local_38 + 0x4c8);
            lVar9 = 0;
            do {
              lVar5 = *(longlong *)(lVar4 + lVar9);
              if ((*(int *)(lVar5 + 0x30) == 1) &&
                 (*(undefined4 *)(lVar5 + 0x30) = 0, *(int *)(lVar5 + 8) == 5)) {
                bVar12 = *(int *)(lVar5 + 0x28) == 0 & bVar2;
                *(uint *)(lVar5 + 8) = (uint)bVar12 + (uint)bVar12 * 4 + 1;
              }
              lVar9 = lVar9 + 8;
            } while ((longlong)iVar8 * 8 != lVar9);
          }
          *(undefined1 *)(local_38 + 0x500) = 1;
        }
        LOCK();
        plVar11 = plVar10 + 1;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)*plVar11 == 0) {
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
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141806ff0 FUN_141806ff0 body=48 status=ok
// SIG undefined FUN_141806ff0(void)

void FUN_141806ff0(undefined8 param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_14aba2408);
  FUN_1402d084a(param_1,param_2);
  return;
}



// FUNCTION 141807026 FUN_141807026 body=20 status=ok
// SIG undefined FUN_141807026(void)

void FUN_141807026(longlong param_1,char param_2)

{
  if (*(char *)(param_1 + 0x680) == param_2) {
    return;
  }
  *(char *)(param_1 + 0x680) = param_2;
  FUN_140acee66();
  return;
}



// FUNCTION 14180703a FUN_14180703a body=462 status=ok
// SIG undefined FUN_14180703a(void)

void FUN_14180703a(longlong param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar5 = *(longlong *)(param_1 + 0xb0);
  if ((lVar5 != 0) || (lVar5 = FUN_1448abda6(param_1), lVar5 != 0)) {
    uVar2 = DAT_14cb1c840;
    if (DAT_14c9a7d10 == (undefined8 *)0x0) {
      DAT_14c9a7d10 = (undefined8 *)FUN_14001cc68(0x20,0x10);
      *DAT_14c9a7d10 = 0;
      DAT_14c9a7d10[1] = 0;
      DAT_14c9a7d10[2] = 0;
      DAT_14c9a7d10[3] = 0;
    }
    FUN_14005915a(DAT_14c9a7d10,&local_48,uVar2,lVar5);
    plVar6 = local_40;
    if ((local_48 == 0) || (local_40 == (longlong *)0x0)) {
      plVar6 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(local_40 + 1) = (int)local_40[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)((longlong)local_40 + 0xc) = *(int *)((longlong)local_40 + 0xc) + 1;
      UNLOCK();
      LOCK();
      plVar7 = local_40 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
    }
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_40 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar1 = (int *)((longlong)local_40 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_40 + 0x10))(local_40);
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
        if (local_48 != 0) {
          FUN_1408c1da2(local_48 + 0x2f0,param_1,1);
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
  FUN_1448c4a0e(param_1,param_2);
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141807228 FUN_141807228 body=147 status=ok
// SIG undefined FUN_141807228(void)

void FUN_141807228(longlong param_1,undefined8 *param_2,float param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  iVar2 = *(int *)(param_1 + 0x30);
  lVar5 = (longlong)iVar2;
  *(uint *)(param_1 + 0x30) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x34) < iVar2 + 1U) {
    FUN_145ae9cbc((longlong *)(param_1 + 0x28),iVar2);
  }
  lVar3 = *(longlong *)(param_1 + 0x28);
  puVar1 = (undefined8 *)(lVar3 + 0x10 + lVar5 * 0x28);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(lVar3 + lVar5 * 0x28);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(lVar3 + 0x20 + lVar5 * 0x28) = 0;
  *(undefined8 *)(lVar3 + 0x18 + lVar5 * 0x28) = 0xffffffffbf800000;
  uVar4 = param_2[1];
  puVar1 = (undefined8 *)(lVar3 + lVar5 * 0x28);
  *puVar1 = *param_2;
  puVar1[1] = uVar4;
  *(undefined8 *)(lVar3 + 0x10 + lVar5 * 0x28) = param_2[2];
  *(float *)(lVar3 + 0x18 + lVar5 * 0x28) = param_3 + 100.0;
  *(undefined4 *)(lVar3 + 0x20 + lVar5 * 0x28) = param_4;
  *(undefined1 *)(lVar3 + 0x24 + lVar5 * 0x28) = 1;
  return;
}



// FUNCTION 1418072bb FUN_1418072bb body=187 status=ok
// SIG undefined FUN_1418072bb(void)

void FUN_1418072bb(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 param_5)

{
  double *pdVar1;
  undefined4 uVar2;
  undefined1 auStack_168 [32];
  undefined4 local_148;
  undefined4 local_140;
  undefined8 local_138;
  undefined1 local_130 [56];
  double local_f8 [14];
  byte local_83;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_168;
  uVar2 = FUN_1402efefa(param_3,0x42c80000);
  local_138 = param_5;
  local_140 = 0x453b8000;
  local_148 = param_4;
  FUN_14496c979(local_130,param_1,param_2,uVar2);
  pdVar1 = (double *)&DAT_14cb1cdb8;
  if ((local_83 & 3) == 1) {
    pdVar1 = local_f8;
  }
  if ((local_30 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0((float)*pdVar1);
}



// FUNCTION 141807377 FUN_141807377 body=211 status=ok
// SIG undefined FUN_141807377(void)

undefined4 *
FUN_141807377(undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined4 param_5,undefined8 param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined1 auStack_178 [32];
  undefined4 local_158;
  undefined4 local_150;
  undefined8 local_148;
  undefined1 local_140 [40];
  undefined8 local_118 [16];
  byte local_93;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_178;
  uVar4 = FUN_1402efefa(param_4,0x42c80000);
  local_148 = param_6;
  local_158 = param_5;
  local_150 = 0x453b8000;
  FUN_14496c979(local_140,param_2,param_3,uVar4);
  puVar3 = &DAT_14cb1cda8;
  if ((local_93 & 3) == 1) {
    puVar3 = local_118;
  }
  *(undefined8 *)(param_1 + 4) = puVar3[2];
  uVar4 = *(undefined4 *)((longlong)puVar3 + 4);
  uVar1 = *(undefined4 *)(puVar3 + 1);
  uVar2 = *(undefined4 *)((longlong)puVar3 + 0xc);
  *param_1 = *(undefined4 *)puVar3;
  param_1[1] = uVar4;
  param_1[2] = uVar1;
  param_1[3] = uVar2;
  if ((local_40 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14180744c FUN_14180744c body=73 status=ok
// SIG undefined FUN_14180744c(void)

void FUN_14180744c(longlong param_1)

{
  int iVar1;
  
  FUN_140d4ae10();
  iVar1 = *(int *)(param_1 + 0x24);
  FUN_140e14f84(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20));
  *(undefined4 *)(param_1 + 0x20) = 0;
  if ((iVar1 < 0) && (*(int *)(param_1 + 0x24) != 0)) {
    FUN_140e15106(param_1 + 0x18,0);
    return;
  }
  return;
}



// FUNCTION 141807496 FUN_141807496 body=48 status=ok
// SIG undefined FUN_141807496(void)

void FUN_141807496(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x40,8);
  }
  return;
}



// FUNCTION 1418074c6 FUN_1418074c6 body=605 status=ok
// SIG undefined FUN_1418074c6(void)

undefined8 * FUN_1418074c6(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  *param_1 = &PTR_LAB_14aba2b70;
  *(undefined4 *)(param_1 + 0xf) = 0;
  if ((-1 < (longlong)*(int *)((longlong)param_1 + 0x7c)) && (param_1[0xe] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[0xe],(longlong)*(int *)((longlong)param_1 + 0x7c) << 5
              );
  }
  param_1[0xe] = 0;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0x80000000;
  *(undefined4 *)(param_1 + 0xd) = 0;
  if ((-1 < (longlong)*(int *)((longlong)param_1 + 0x6c)) && (param_1[0xc] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[0xc],(longlong)*(int *)((longlong)param_1 + 0x6c) << 5
              );
  }
  param_1[0xc] = 0;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0x80000000;
  *(undefined4 *)(param_1 + 0xb) = 0;
  if ((-1 < (longlong)*(int *)((longlong)param_1 + 0x5c)) && (param_1[10] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[10],(longlong)*(int *)((longlong)param_1 + 0x5c) << 3)
    ;
  }
  param_1[10] = 0;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0x80000000;
  lVar2 = param_1[8];
  if ((lVar2 != 0) && (*(int *)(lVar2 + 4) != -2)) {
    (*DAT_14c787678)(DAT_14c6e47a8,lVar2,0);
    FUN_144b3ec00(param_1 + 8);
  }
  if ((longlong)*(int *)(param_1 + 7) != 0) {
    lVar2 = param_1[6];
    lVar4 = (longlong)*(int *)(param_1 + 7) * 0x18;
    do {
      lVar3 = *(longlong *)(lVar2 + -0x10 + lVar4);
      *(undefined4 *)(lVar2 + -8 + lVar4) = 0;
      if ((lVar3 != 0) && (uVar1 = *(uint *)(lVar2 + -4 + lVar4), -1 < (int)uVar1)) {
        (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                  (&PTR_vftable_14c6e47a0,lVar3,(ulonglong)uVar1 * 0x14);
      }
      *(undefined8 *)(lVar2 + -0x10 + lVar4) = 0;
      *(undefined4 *)(lVar2 + -4 + lVar4) = 0x80000000;
      lVar4 = lVar4 + -0x18;
    } while (lVar4 != 0);
  }
  *(undefined4 *)(param_1 + 7) = 0;
  if ((-1 < (longlong)*(int *)((longlong)param_1 + 0x3c)) && (param_1[6] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[6],(longlong)*(int *)((longlong)param_1 + 0x3c) * 0x18
              );
  }
  param_1[6] = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x80000000;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((-1 < (longlong)*(int *)((longlong)param_1 + 0x2c)) && (param_1[4] != 0)) {
    (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
              (&PTR_vftable_14c6e47a0,param_1[4],(longlong)*(int *)((longlong)param_1 + 0x2c) << 4);
  }
  param_1[4] = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80000000;
  *param_1 = &PTR_FUN_14ab67d10;
  if (param_2 != 0) {
    (*DAT_14c787678)(0,param_1,0);
  }
  return param_1;
}



// FUNCTION 141807724 FUN_141807724 body=328 status=ok
// SIG undefined FUN_141807724(void)

void FUN_141807724(longlong param_1,undefined4 param_2)

{
  uint uVar1;
  ulonglong uVar2;
  longlong *plVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined1 auStack_68 [32];
  ulonglong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar3 = *(longlong **)(param_1 + 0x10);
  iVar5 = (int)plVar3[1];
  uVar1 = iVar5 + 1;
  if (iVar5 < (int)(*(uint *)((longlong)plVar3 + 0xc) & 0x7fffffff)) {
    lVar6 = *plVar3;
  }
  else {
    uVar4 = *(uint *)((longlong)plVar3 + 0xc) * 2;
    if (uVar4 <= uVar1) {
      uVar4 = uVar1;
    }
    uVar7 = (ulonglong)uVar4;
    if ((0x7ffffffe < uVar4) && (uVar7 = 0x7ffffffe, uVar1 == 0x7fffffff)) {
      FUN_144bfc170(0x4648a379,
                    "..\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                    ,0x90,"Invalid requestedCapacity");
    }
    local_48 = uVar7 * 4;
    lVar6 = (*DAT_14c787670)(DAT_14c6e47c8,&local_48,DAT_14c6e47cc);
    FUN_144b3d470(lVar6,*plVar3,(longlong)(int)plVar3[1] << 2);
    uVar2 = uVar7 * 4 + 4;
    uVar8 = uVar7;
    if (uVar2 <= local_48) {
      uVar8 = uVar7 + 1;
      local_48 = local_48 - 4;
      if (uVar2 <= local_48) {
        uVar8 = uVar8 + (local_48 + uVar7 * -4 >> 2);
      }
    }
    if (-1 < *(int *)((longlong)plVar3 + 0xc)) {
      (*DAT_14c787678)(CONCAT71((int7)(uVar2 >> 8),DAT_14c6e47c8),*plVar3,0);
    }
    *(int *)((longlong)plVar3 + 0xc) = (int)uVar8;
    *plVar3 = lVar6;
    iVar5 = (int)plVar3[1];
  }
  *(undefined4 *)(lVar6 + (longlong)iVar5 * 4) = param_2;
  *(uint *)(plVar3 + 1) = uVar1;
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14180786e FUN_14180786e body=29 status=ok
// SIG undefined FUN_14180786e(void)

undefined8 FUN_14180786e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14180788c FUN_14180788c body=258 status=ok
// SIG undefined FUN_14180788c(void)

void FUN_14180788c(undefined8 *param_1,longlong *param_2,ulonglong param_3)

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
  uVar5 = (ulonglong)(uVar2 * 2);
  if (uVar5 <= param_3) {
    uVar5 = param_3;
  }
  if ((0x7ffffffe < uVar5) && (uVar5 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "..\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  uVar3 = (**(code **)(*param_2 + 0x10))(param_2,uVar5,&local_48);
  FUN_144b3d470(uVar3,*param_1,(longlong)*(int *)(param_1 + 1));
  uVar4 = uVar5;
  uVar1 = local_48;
  if (uVar5 < local_48) {
    uVar1 = local_48 - 1;
    uVar4 = uVar5 + 1;
    if (uVar5 < uVar1) {
      uVar4 = local_48;
    }
  }
  local_48 = uVar1;
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (**(code **)(*param_2 + 0x18))(param_2,*param_1,uVar2 & 0x7fffffff);
  }
  *(int *)((longlong)param_1 + 0xc) = (int)uVar4;
  *param_1 = uVar3;
  if ((local_40 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141807990 FUN_141807990 body=278 status=ok
// SIG undefined FUN_141807990(void)

void FUN_141807990(undefined8 *param_1,longlong param_2,ulonglong param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 auStack_68 [40];
  ulonglong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar4 = (ulonglong)(uint)(*(int *)((longlong)param_1 + 0xc) * 2);
  if (uVar4 <= param_3) {
    uVar4 = param_3;
  }
  if ((0x7ffffffe < uVar4) && (uVar4 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "..\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  local_40 = uVar4 * 4;
  uVar2 = (*DAT_14c787670)(*(undefined1 *)(param_2 + 8),&local_40,*(undefined4 *)(param_2 + 0xc));
  FUN_144b3d470(uVar2,*param_1,(longlong)*(int *)(param_1 + 1) << 2);
  uVar1 = uVar4 * 4 + 4;
  uVar3 = uVar4;
  if (uVar1 <= local_40) {
    uVar3 = uVar4 + 1;
    local_40 = local_40 - 4;
    if (uVar1 <= local_40) {
      uVar3 = uVar3 + (local_40 + uVar4 * -4 >> 2);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)(CONCAT71((int7)(uVar1 >> 8),*(undefined1 *)(param_2 + 8)),*param_1,0);
  }
  *(int *)((longlong)param_1 + 0xc) = (int)uVar3;
  *param_1 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141807aa8 FUN_141807aa8 body=289 status=ok
// SIG undefined FUN_141807aa8(void)

void FUN_141807aa8(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  ulonglong uVar1;
  uint uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined1 auStack_78 [40];
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar2 = *(uint *)((longlong)param_1 + 0xc);
  uVar5 = (ulonglong)(uVar2 * 2);
  if (uVar5 <= param_3) {
    uVar5 = param_3;
  }
  if ((0x7ffffffe < uVar5) && (uVar5 = 0x7ffffffe, 0x7ffffffe < param_3)) {
    FUN_144bfc170(0x4648a379,
                  "..\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x90,"Invalid requestedCapacity");
  }
  uVar3 = (**(code **)(*param_2 + 0x10))(param_2,uVar5 * 4,&local_50);
  FUN_144b3d470(uVar3,*param_1,(longlong)*(int *)(param_1 + 1) << 2);
  uVar1 = uVar5 * 4 + 4;
  uVar4 = uVar5;
  if (uVar1 <= local_50) {
    uVar4 = uVar5 + 1;
    local_50 = local_50 - 4;
    if (uVar1 <= local_50) {
      uVar4 = uVar4 + (local_50 + uVar5 * -4 >> 2);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (**(code **)(*param_2 + 0x18))(param_2,*param_1,((ulonglong)uVar2 & 0x7fffffff) << 2);
  }
  *(int *)((longlong)param_1 + 0xc) = (int)uVar4;
  *param_1 = uVar3;
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141807bca FUN_141807bca body=300 status=ok
// SIG undefined FUN_141807bca(void)

void FUN_141807bca(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  ulonglong uVar1;
  uint uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined1 auStack_78 [40];
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
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
  uVar3 = (**(code **)(*param_2 + 0x10))(param_2,uVar4 * 4,&local_50);
  FUN_144b3d470(uVar3,*param_1,(longlong)*(int *)(param_1 + 1) << 2);
  uVar1 = uVar4 * 4 + 4;
  uVar5 = uVar4;
  if (uVar1 <= local_50) {
    uVar5 = uVar4 + 1;
    local_50 = local_50 - 4;
    if (uVar1 <= local_50) {
      uVar5 = uVar5 + (local_50 + uVar4 * -4 >> 2);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (**(code **)(*param_2 + 0x18))(param_2,*param_1,((ulonglong)uVar2 & 0x7fffffff) << 2);
  }
  *(int *)((longlong)param_1 + 0xc) = (int)uVar5;
  *param_1 = uVar3;
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141807cf8 FUN_141807cf8 body=295 status=ok
// SIG undefined FUN_141807cf8(void)

void FUN_141807cf8(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  ulonglong uVar1;
  uint uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined1 auStack_78 [40];
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
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
  uVar3 = (**(code **)(*param_2 + 0x10))(param_2,uVar4 * 0x20,&local_50);
  FUN_144b3d470(uVar3,*param_1,(longlong)*(int *)(param_1 + 1) << 5);
  uVar1 = uVar4 * 0x20 + 0x20;
  uVar5 = uVar4;
  if (uVar1 <= local_50) {
    uVar5 = uVar4 + 1;
    local_50 = local_50 - 0x20;
    if (uVar1 <= local_50) {
      uVar5 = uVar5 + (local_50 + uVar4 * -0x20 >> 5);
    }
  }
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (**(code **)(*param_2 + 0x18))(param_2,*param_1,((ulonglong)uVar2 & 0x7fffffff) << 5);
  }
  *(int *)((longlong)param_1 + 0xc) = (int)uVar5;
  *param_1 = uVar3;
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141807e20 FUN_141807e20 body=137 status=ok
// SIG undefined FUN_141807e20(void)

void FUN_141807e20(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  undefined8 uVar1;
  
  if (0x7ffffffe < param_3) {
    FUN_144bfc170(0x4648a379,
                  "..\\Plugins\\Havok\\HavokCore\\Source\\ThirdParty\\HavokSDK\\Source\\Common/Base/Container/Array/hkArray.inl"
                  ,0x5e,"Invalid requestedCapacity");
  }
  uVar1 = (**(code **)(*param_2 + 8))(param_2,param_3 * 4);
  FUN_144b3d470(uVar1,*param_1,(longlong)*(int *)(param_1 + 1) << 2);
  if (-1 < *(int *)((longlong)param_1 + 0xc)) {
    (*DAT_14c787678)((char)param_2[1],*param_1,0);
  }
  *(int *)((longlong)param_1 + 0xc) = (int)param_3;
  *param_1 = uVar1;
  return;
}



// FUNCTION 141807eaa FUN_141807eaa body=275 status=ok
// SIG undefined FUN_141807eaa(void)

void FUN_141807eaa(longlong param_1,int param_2)

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
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,0x10);
      }
    }
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0xa0)) {
      uVar5 = uVar4 / 0xa0 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0xa0,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 141807fbe FUN_141807fbe body=255 status=ok
// SIG undefined FUN_141807fbe(void)

void FUN_141807fbe(longlong param_1,int param_2)

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



// FUNCTION 1418080be FUN_1418080be body=29 status=ok
// SIG undefined FUN_1418080be(void)

undefined8 FUN_1418080be(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418080dc FUN_1418080dc body=29 status=ok
// SIG undefined FUN_1418080dc(void)

undefined8 FUN_1418080dc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418080fa FUN_1418080fa body=101 status=ok
// SIG undefined FUN_1418080fa(void)

void FUN_1418080fa(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14aba48f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 141808160 FUN_141808160 body=159 status=ok
// SIG undefined FUN_141808160(void)

void FUN_141808160(longlong param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar3 = (ulonglong)uVar1;
  iVar2 = *(int *)(param_1 + 0xc);
  if (((0x3fff < (ulonglong)((longlong)(int)(iVar2 - uVar1) * 0x18)) ||
      ((int)(uVar1 * 3) < iVar2 * 2)) && (uVar1 == 0 || 0x40 < (int)(iVar2 - uVar1))) {
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



// FUNCTION 141808200 FUN_141808200 body=275 status=ok
// SIG undefined FUN_141808200(void)

void FUN_141808200(longlong param_1,int param_2)

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



// FUNCTION 141808314 FUN_141808314 body=29 status=ok
// SIG undefined FUN_141808314(void)

undefined8 FUN_141808314(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141808332 FUN_141808332 body=29 status=ok
// SIG undefined FUN_141808332(void)

undefined8 FUN_141808332(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141808350 FUN_141808350 body=142 status=ok
// SIG undefined FUN_141808350(void)

void FUN_141808350(longlong param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar3 = (ulonglong)uVar1;
  iVar2 = *(int *)(param_1 + 0xc);
  if (((((longlong)(int)(iVar2 - uVar1) & 0x3ffffffffffff000U) != 0) ||
      ((int)(uVar1 * 3) < iVar2 * 2)) && (uVar1 == 0 || 0x40 < (int)(iVar2 - uVar1))) {
    if (0 < (int)uVar1) {
      uVar3 = FUN_144a3809e(uVar3 << 2,4);
      uVar3 = uVar3 >> 2;
      iVar2 = *(int *)(param_1 + 0xc);
    }
    if ((int)uVar3 != iVar2) {
      *(int *)(param_1 + 0xc) = (int)uVar3;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar3,4,4);
    }
  }
  return;
}



// FUNCTION 1418083de FUN_1418083de body=269 status=ok
// SIG undefined FUN_1418083de(void)

void FUN_1418083de(longlong param_1,int param_2)

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



// FUNCTION 1418084ec FUN_1418084ec body=369 status=ok
// SIG undefined FUN_1418084ec(void)

void FUN_1418084ec(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar11 & 0xffffffff] & 0xf) == 0) goto LAB_141808571;
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
LAB_141808571:
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



// FUNCTION 14180865e FUN_14180865e body=600 status=ok
// SIG undefined FUN_14180865e(void)

void FUN_14180865e(longlong *param_1)

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
        lVar10 = (longlong)iVar6;
        uVar13 = *(ulonglong *)(lVar11 + lVar10 * 0x28);
        uVar3 = ((uint)(uVar13 >> 0x14) & 0xffff ^ (uint)(uVar13 >> 4)) * -0x7a143595;
        uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
        uVar13 = (longlong)(int)(uVar3 >> 0x10 ^ uVar3) & (longlong)(int)param_1[9] - 1U;
        iVar12 = (int)uVar13;
        *(int *)(lVar11 + 0x24 + lVar10 * 0x28) = iVar12;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar11 + 0x20 + lVar10 * 0x28) =
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
            if (iVar2 - lVar11 == lVar10) goto LAB_141808854;
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
LAB_141808854:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418088b8 FUN_1418088b8 body=29 status=ok
// SIG undefined FUN_1418088b8(void)

undefined8 FUN_1418088b8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418088d6 FUN_1418088d6 body=121 status=ok
// SIG undefined FUN_1418088d6(void)

undefined8 * FUN_1418088d6(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_1 != param_2) {
    FUN_140d4b01e(param_1);
    *param_1 = *param_2;
    *param_2 = 0;
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



// FUNCTION 141808950 FUN_141808950 body=121 status=ok
// SIG undefined FUN_141808950(void)

undefined8 * FUN_141808950(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_1 != param_2) {
    FUN_1409380d0(param_1);
    *param_1 = *param_2;
    *param_2 = 0;
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



// FUNCTION 1418089ca FUN_1418089ca body=272 status=ok
// SIG undefined FUN_1418089ca(void)

void FUN_1418089ca(longlong param_1,int param_2)

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



// FUNCTION 141808ada FUN_141808ada body=255 status=ok
// SIG undefined FUN_141808ada(void)

void FUN_141808ada(longlong param_1,int param_2)

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



// FUNCTION 141808bda FUN_141808bda body=666 status=ok
// SIG undefined FUN_141808bda(void)

double * FUN_141808bda(longlong param_1,double *param_2,double *param_3,double *param_4,
                      double *param_5)

{
  double dVar1;
  double dVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  float fVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  float fVar10;
  undefined1 auStack_d8 [40];
  double local_b0;
  double local_a8;
  double local_a0;
  float local_7c;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (*(char *)(param_1 + 0x518) != '\0') {
    dVar9 = *param_4 - *param_3;
    dVar7 = param_4[1] - param_3[1];
    dVar8 = param_4[2] - param_3[2];
    fVar6 = (float)SQRT(dVar8 * dVar8 + dVar7 * dVar7 + dVar9 * dVar9);
    dVar7 = *param_5 - *param_3;
    dVar9 = param_5[1] - param_3[1];
    dVar8 = param_5[2] - param_3[2];
    fVar10 = (float)((double)fVar6 - SQRT(dVar8 * dVar8 + dVar9 * dVar9 + dVar7 * dVar7));
    if (fVar10 <= fVar6 * 0.5) {
      FUN_144912966(param_1 + 0x3c0,&local_b0,param_5);
      if (1.0 <= local_7c) {
        if (*(char *)(param_1 + 0x6b0) == '\x01') {
          dVar7 = param_5[2];
          local_a0 = local_a0 - dVar7;
          dVar9 = *param_5;
          dVar8 = param_5[1];
          local_a8 = local_a8 - dVar8;
          local_b0 = local_b0 - dVar9;
          dVar2 = 1.0 / SQRT(local_a0 * local_a0 + local_b0 * local_b0 + local_a8 * local_a8);
          local_a0 = local_a0 * dVar2;
          local_a8 = local_a8 * dVar2;
          dVar2 = dVar2 * local_b0;
        }
        else {
          dVar9 = *param_5;
          dVar8 = param_5[1];
          local_a8 = local_a8 - dVar8;
          local_b0 = local_b0 - dVar9;
          dVar2 = 1.0 / SQRT(local_b0 * local_b0 + local_a8 * local_a8);
          local_a8 = local_a8 * dVar2;
          dVar2 = dVar2 * local_b0;
          dVar7 = param_5[2];
          local_a0 = 0.0;
        }
        fVar10 = fVar10 * 0.5;
        if (local_7c <= fVar10) {
          fVar10 = local_7c;
        }
        dVar1 = (double)fVar10;
        *param_2 = dVar2 * dVar1 + dVar9;
        param_2[1] = local_a8 * dVar1 + dVar8;
        param_2[2] = local_a0 * dVar1 + dVar7;
        if ((local_70 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0();
        }
        return param_2;
      }
    }
  }
  param_2[2] = param_5[2];
  uVar3 = *(undefined4 *)((longlong)param_5 + 4);
  uVar4 = *(undefined4 *)(param_5 + 1);
  uVar5 = *(undefined4 *)((longlong)param_5 + 0xc);
  *(undefined4 *)param_2 = *(undefined4 *)param_5;
  *(undefined4 *)((longlong)param_2 + 4) = uVar3;
  *(undefined4 *)(param_2 + 1) = uVar4;
  *(undefined4 *)((longlong)param_2 + 0xc) = uVar5;
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_70 ^ (ulonglong)auStack_d8);
}



// FUNCTION 141808e76 FUN_141808e76 body=311 status=ok
// SIG undefined FUN_141808e76(void)

ulonglong FUN_141808e76(longlong param_1,longlong param_2,longlong param_3)

{
  float fVar1;
  longlong lVar2;
  float *pfVar3;
  undefined8 unaff_RSI;
  undefined7 uVar5;
  ulonglong uVar4;
  float *pfVar6;
  double dVar7;
  
  uVar5 = (undefined7)((ulonglong)unaff_RSI >> 8);
  if (*(char *)(param_2 + 0x3b0) == '\x01') {
    uVar4 = CONCAT71(uVar5,*(undefined1 *)(param_2 + 0x3c6)) ^ 1;
    goto LAB_141808eaa;
  }
  if (*(char *)(param_2 + 0x19) == '\x01') {
    uVar4 = CONCAT71(uVar5,1);
    if ((*(char *)(param_3 + 0x290) != '\0') || (1e-08 < ABS(*(float *)(param_3 + 0x50))))
    goto LAB_141808eaa;
    lVar2 = *(longlong *)(param_2 + 0x70);
    if (lVar2 != 0) {
      if (*(longlong *)(lVar2 + 0x148) != 0) goto LAB_141808eaa;
      pfVar6 = (float *)(param_2 + 0x198);
      if (*(char *)(param_1 + 0x1ce0) != '\0') {
        pfVar6 = (float *)(param_1 + 0x1c98);
      }
      pfVar3 = (float *)(lVar2 + 0x13c);
      if (*(char *)(param_2 + 0x54) != '\0') {
        pfVar3 = (float *)(param_2 + 0x50);
      }
      fVar1 = *pfVar3;
      dVar7 = (double)FUN_144719204(SUB84((double)*pfVar6 - *(double *)(param_2 + 0x98),0));
      dVar7 = (double)(~-(ulonglong)(dVar7 < 0.0) & (ulonglong)dVar7 |
                      (ulonglong)(dVar7 + 360.0) & -(ulonglong)(dVar7 < 0.0));
      if (ABS((float)(double)(~-(ulonglong)(180.0 < dVar7) & (ulonglong)dVar7 |
                             (ulonglong)(dVar7 + -360.0) & -(ulonglong)(180.0 < dVar7))) < fVar1)
      goto LAB_141808eaa;
    }
  }
  uVar4 = 0;
LAB_141808eaa:
  return uVar4 & 0xffffffff;
}



// FUNCTION 141808fae FUN_141808fae body=335 status=ok
// SIG undefined FUN_141808fae(void)

void FUN_141808fae(longlong param_1,undefined8 param_2,longlong param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 auStack_f8 [40];
  undefined8 local_d0 [12];
  undefined8 local_70;
  longlong *local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_30 = *(undefined8 *)(param_3 + 0xe8);
  local_40 = *(undefined8 *)(param_3 + 0xd8);
  uStack_38 = *(undefined8 *)(param_3 + 0xe0);
  local_58 = *(undefined4 *)(param_3 + 0x20);
  uStack_54 = *(undefined4 *)(param_3 + 0x24);
  uStack_50 = *(undefined4 *)(param_3 + 0x28);
  uStack_4c = *(undefined4 *)(param_3 + 0x2c);
  local_48 = *(undefined8 *)(param_3 + 0x30);
  FUN_140183318(local_d0,&local_58,param_3 + 0x278);
  plVar2 = local_68;
  puVar5 = local_d0;
  puVar6 = (undefined8 *)(param_1 + 0x1b48);
  for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  if ((undefined8 *)(param_1 + 0x1ba8) != &local_70) {
    *(undefined8 *)(param_1 + 0x1ba8) = local_70;
    local_70 = 0;
    plVar3 = *(longlong **)(param_1 + 0x1bb0);
    if (local_68 != plVar3) {
      local_68 = (longlong *)0x0;
      *(longlong **)(param_1 + 0x1bb0) = plVar2;
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
  plVar2 = local_68;
  *(undefined4 *)(param_1 + 0x1bb8) = local_60;
  if (local_68 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_68 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
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
  if ((local_20 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418090fe FUN_1418090fe body=691 status=ok
// SIG undefined FUN_1418090fe(void)

void FUN_1418090fe(undefined8 param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  double dVar3;
  double dVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  double dVar11;
  double dVar12;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  double local_a8;
  double local_a0;
  double local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (*(char *)(param_2 + 0x3b0) == '\x01') {
    uVar6 = *(undefined8 *)(param_2 + 0x350);
    uVar7 = *(undefined8 *)(param_2 + 0x358);
    uVar8 = *(undefined8 *)(param_2 + 0x360);
    uVar9 = *(undefined8 *)(param_2 + 0x368);
    dVar12 = *(double *)(param_2 + 0x380);
    dVar3 = *(double *)(param_2 + 0x158);
    dVar11 = *(double *)(param_2 + 0x378);
    dVar4 = *(double *)(param_2 + 0x150);
    *(double *)(param_3 + 0xd0) = *(double *)(param_2 + 0x370) + *(double *)(param_2 + 0x148);
    *(double *)(param_3 + 0xd8) = dVar11 + dVar4;
    *(double *)(param_3 + 0xe0) = dVar12 + dVar3;
    uVar10 = DAT_14cb1c868;
    *(undefined8 *)(param_3 + 0xe8) = DAT_14cb1c860;
    *(undefined8 *)(param_3 + 0xf0) = uVar10;
    *(undefined8 *)(param_3 + 0xf8) = DAT_14cb1c870;
    *(undefined8 *)(param_3 + 0x100) = 0;
    plVar5 = *(longlong **)(param_3 + 0x108);
    if (plVar5 != (longlong *)0x0) {
      *(undefined8 *)(param_3 + 0x108) = 0;
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
    *(undefined4 *)(param_3 + 0x110) = 0xffffffff;
    if ((*(byte *)(param_2 + 0x3c6) & 1) == 0) {
      local_c8 = uVar6;
      uStack_c0 = uVar7;
      local_b8 = uVar8;
      uStack_b0 = uVar9;
      FUN_1448052ee(&local_c8,&local_a8);
      dVar12 = *(double *)(param_2 + 0xa0);
      dVar3 = *(double *)(param_2 + 0x90);
      dVar11 = (double)FUN_144719204(*(double *)(param_2 + 0x98) + local_a0,0x4076800000000000);
      dVar11 = (double)(~-(ulonglong)(dVar11 < 0.0) & (ulonglong)dVar11 |
                       (ulonglong)(dVar11 + 360.0) & -(ulonglong)(dVar11 < 0.0));
      FUN_144719204(dVar12 + local_98,0x4076800000000000);
      dVar12 = (double)FUN_144719204(dVar3 + local_a8,0x4076800000000000);
      dVar12 = (double)(~-(ulonglong)(dVar12 < 0.0) & (ulonglong)dVar12 |
                       (ulonglong)(dVar12 + 360.0) & -(ulonglong)(dVar12 < 0.0));
      *(ulonglong *)(param_3 + 0x18) =
           ~-(ulonglong)(180.0 < dVar12) & (ulonglong)dVar12 |
           (ulonglong)(dVar12 + -360.0) & -(ulonglong)(180.0 < dVar12);
      *(ulonglong *)(param_3 + 0x20) =
           ~-(ulonglong)(180.0 < dVar11) & (ulonglong)dVar11 |
           (ulonglong)(dVar11 + -360.0) & -(ulonglong)(180.0 < dVar11);
      *(undefined8 *)(param_3 + 0x28) = 0;
    }
  }
  if ((local_90 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418093b2 FUN_1418093b2 body=42 status=ok
// SIG undefined FUN_1418093b2(void)

void FUN_1418093b2(longlong param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  
  cVar1 = FUN_14019f5de();
  if (cVar1 != '\0') {
    *(longlong *)(param_3 + 0x130) = param_1 + 0x1cf0;
  }
  return;
}



// FUNCTION 1418093dc FUN_1418093dc body=324 status=ok
// SIG undefined FUN_1418093dc(void)

ulonglong FUN_1418093dc(longlong param_1,longlong param_2,longlong param_3)

{
  float fVar1;
  longlong lVar2;
  float *pfVar3;
  undefined8 unaff_RSI;
  undefined7 uVar5;
  ulonglong uVar4;
  float *pfVar6;
  double dVar7;
  
  uVar5 = (undefined7)((ulonglong)unaff_RSI >> 8);
  if (*(char *)(param_2 + 0x3b0) == '\x01') {
    uVar4 = CONCAT71(uVar5,*(undefined1 *)(param_2 + 0x3c6)) ^ 1;
    goto LAB_14180941d;
  }
  if ((*(char *)(param_2 + 0x3c5) == '\x01') && (*(char *)(param_2 + 0x19) == '\x01')) {
    uVar4 = CONCAT71(uVar5,1);
    if ((*(char *)(param_3 + 0x290) != '\0') || (1e-08 < ABS(*(float *)(param_3 + 0x50))))
    goto LAB_14180941d;
    lVar2 = *(longlong *)(param_2 + 0x70);
    if (lVar2 != 0) {
      if (*(longlong *)(lVar2 + 0x148) != 0) goto LAB_14180941d;
      pfVar6 = (float *)(param_2 + 0x198);
      if (*(char *)(param_1 + 0x1ce0) != '\0') {
        pfVar6 = (float *)(param_1 + 0x1c98);
      }
      pfVar3 = (float *)(lVar2 + 0x13c);
      if (*(char *)(param_2 + 0x54) != '\0') {
        pfVar3 = (float *)(param_2 + 0x50);
      }
      fVar1 = *pfVar3;
      dVar7 = (double)FUN_144719204(SUB84((double)*pfVar6 - *(double *)(param_2 + 0x98),0));
      dVar7 = (double)(~-(ulonglong)(dVar7 < 0.0) & (ulonglong)dVar7 |
                      (ulonglong)(dVar7 + 360.0) & -(ulonglong)(dVar7 < 0.0));
      if (ABS((float)(double)(~-(ulonglong)(180.0 < dVar7) & (ulonglong)dVar7 |
                             (ulonglong)(dVar7 + -360.0) & -(ulonglong)(180.0 < dVar7))) < fVar1)
      goto LAB_14180941d;
    }
  }
  uVar4 = 0;
LAB_14180941d:
  return uVar4 & 0xffffffff;
}



// FUNCTION 141809520 FUN_141809520 body=475 status=ok
// SIG undefined FUN_141809520(void)

void FUN_141809520(undefined8 param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  double dVar12;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_68 [8];
  double local_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(char *)(param_2 + 0x3b0) == '\x01') {
    uVar7 = *(undefined8 *)(param_2 + 0x350);
    uVar8 = *(undefined8 *)(param_2 + 0x358);
    uVar9 = *(undefined8 *)(param_2 + 0x360);
    uVar10 = *(undefined8 *)(param_2 + 0x368);
    dVar12 = *(double *)(param_2 + 0x380);
    dVar3 = *(double *)(param_2 + 0x158);
    dVar4 = *(double *)(param_2 + 0x378);
    dVar5 = *(double *)(param_2 + 0x150);
    *(double *)(param_3 + 0xd0) = *(double *)(param_2 + 0x370) + *(double *)(param_2 + 0x148);
    *(double *)(param_3 + 0xd8) = dVar4 + dVar5;
    *(double *)(param_3 + 0xe0) = dVar12 + dVar3;
    uVar11 = DAT_14cb1c868;
    *(undefined8 *)(param_3 + 0xe8) = DAT_14cb1c860;
    *(undefined8 *)(param_3 + 0xf0) = uVar11;
    *(undefined8 *)(param_3 + 0xf8) = DAT_14cb1c870;
    *(undefined8 *)(param_3 + 0x100) = 0;
    plVar6 = *(longlong **)(param_3 + 0x108);
    if (plVar6 != (longlong *)0x0) {
      *(undefined8 *)(param_3 + 0x108) = 0;
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
    *(undefined4 *)(param_3 + 0x110) = 0xffffffff;
    if ((*(byte *)(param_2 + 0x3c6) & 1) == 0) {
      dVar12 = *(double *)(param_2 + 0x98);
      local_88 = uVar7;
      uStack_80 = uVar8;
      local_78 = uVar9;
      uStack_70 = uVar10;
      FUN_1448052ee(&local_88,local_68);
      dVar12 = (double)FUN_144719204(dVar12 + local_60);
      dVar12 = (double)(~-(ulonglong)(dVar12 < 0.0) & (ulonglong)dVar12 |
                       (ulonglong)(dVar12 + 360.0) & -(ulonglong)(dVar12 < 0.0));
      *(ulonglong *)(param_3 + 0x20) =
           ~-(ulonglong)(180.0 < dVar12) & (ulonglong)dVar12 |
           (ulonglong)(dVar12 + -360.0) & -(ulonglong)(180.0 < dVar12);
    }
  }
  if ((local_50 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418096fc FUN_1418096fc body=1137 status=ok
// SIG undefined FUN_1418096fc(void)

longlong FUN_1418096fc(longlong *param_1,longlong param_2,undefined8 param_3,undefined1 param_4,
                      undefined8 param_5,int param_6)

{
  int *piVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  ulonglong uVar23;
  char cVar24;
  uint uVar25;
  longlong *plVar26;
  int iVar27;
  longlong lVar28;
  longlong lVar29;
  int iVar30;
  longlong lVar31;
  longlong lVar32;
  longlong lVar33;
  undefined1 auStack_2d8 [39];
  undefined1 local_2b1;
  longlong local_2b0;
  longlong local_2a8 [60];
  longlong *local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  longlong *local_80;
  undefined4 local_78;
  undefined8 local_70;
  char local_68;
  longlong local_60;
  undefined4 local_58;
  byte local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_2d8;
  local_2b1 = param_4;
  cVar24 = (**(code **)(*param_1 + 8))();
  if (cVar24 != '\0') {
    *(undefined1 *)(param_2 + 0x328) = 0xff;
    *(undefined1 *)(param_2 + 0x330) = 1;
    goto LAB_1418099a4;
  }
  iVar5 = (int)param_1[0x45];
  lVar32 = (longlong)iVar5;
  iVar27 = (int)param_1[0x43] - iVar5;
  if (param_6 < iVar27) {
    iVar27 = param_6;
  }
  iVar30 = 100;
  if (iVar27 < 100) {
    iVar30 = iVar27;
  }
  local_c8 = (longlong *)0x0;
  local_c0 = 0x400000000;
  local_68 = '\0';
  local_50 = 0;
  if (iVar27 < 1) {
    local_c0 = 0x400000001;
LAB_1418099e0:
    plVar26 = local_c8;
    if (local_c8 == (longlong *)0x0) {
      plVar26 = local_2a8;
    }
    plVar26[2] = param_1[0x12];
    lVar32 = param_1[0x11];
    *plVar26 = param_1[0x10];
    plVar26[1] = lVar32;
    plVar26[5] = DAT_14cb1c870;
    plVar26[3] = DAT_14cb1c860;
    plVar26[4] = DAT_14cb1c868;
    plVar26[6] = 0;
    plVar26[7] = 0;
    *(undefined4 *)(plVar26 + 8) = 0xffffffff;
    plVar26[9] = -1;
    *(undefined4 *)(plVar26 + 10) = 0xffffffff;
    *(undefined1 *)((longlong)plVar26 + 0x5c) = 0;
    *(undefined8 *)((longlong)plVar26 + 0x54) = 0;
    *(undefined4 *)(plVar26 + 0xc) = (undefined4)DAT_14c8464e0;
    *(undefined4 *)((longlong)plVar26 + 100) = DAT_14c8464e0._4_4_;
    *(undefined4 *)(plVar26 + 0xd) = (undefined4)DAT_14c8464e8;
    *(undefined4 *)((longlong)plVar26 + 0x6c) = DAT_14c8464e8._4_4_;
    plVar26[0xe] = DAT_14c8464f0;
    plVar26 = local_c8;
    if (local_c8 == (longlong *)0x0) {
      plVar26 = local_2a8;
    }
    *(undefined4 *)(plVar26 + (longlong)((int)local_c0 + -1) * 0xf + 0xb) = 3;
  }
  else {
    lVar31 = (longlong)(iVar30 + iVar5);
    lVar29 = lVar32 * 0x78 + 0x48;
    do {
      uVar23 = local_c0;
      lVar6 = param_1[0x42];
      lVar33 = (longlong)(int)local_c0;
      uVar25 = (int)local_c0 + 1;
      local_c0 = CONCAT44(local_c0._4_4_,uVar25);
      if (local_c0._4_4_ < uVar25) {
        local_2b0 = lVar31;
        FUN_1407d4a32(local_2a8,uVar23 & 0xffffffff);
        lVar31 = local_2b0;
      }
      lVar2 = lVar29 + lVar6;
      plVar26 = local_c8;
      if (local_c8 == (longlong *)0x0) {
        plVar26 = local_2a8;
      }
      lVar28 = lVar33 * 0x78;
      lVar18 = *(longlong *)(lVar2 + -0x48);
      lVar19 = *(longlong *)(lVar2 + -0x40);
      lVar20 = *(longlong *)(lVar2 + -0x38);
      lVar21 = *(longlong *)(lVar2 + -0x30);
      lVar22 = *(longlong *)(lVar2 + -0x20);
      plVar26[lVar33 * 0xf + 4] = *(longlong *)(lVar2 + -0x28);
      (plVar26 + lVar33 * 0xf + 4)[1] = lVar22;
      plVar26[lVar33 * 0xf + 2] = lVar20;
      (plVar26 + lVar33 * 0xf + 2)[1] = lVar21;
      plVar26[lVar33 * 0xf] = lVar18;
      (plVar26 + lVar33 * 0xf)[1] = lVar19;
      plVar26[lVar33 * 0xf + 6] = *(longlong *)(lVar2 + -0x18);
      lVar2 = *(longlong *)(lVar2 + -0x10);
      plVar26[lVar33 * 0xf + 7] = lVar2;
      if (lVar2 != 0) {
        LOCK();
        *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
        UNLOCK();
      }
      *(undefined4 *)(plVar26 + lVar33 * 0xf + 8) = *(undefined4 *)(lVar6 + -8 + lVar29);
      puVar4 = (undefined4 *)(lVar6 + lVar29);
      uVar7 = puVar4[1];
      uVar8 = puVar4[2];
      uVar9 = puVar4[3];
      puVar3 = (undefined4 *)(lVar6 + 0x10 + lVar29);
      uVar10 = *puVar3;
      uVar11 = puVar3[1];
      uVar12 = puVar3[2];
      uVar13 = puVar3[3];
      puVar3 = (undefined4 *)(lVar6 + 0x20 + lVar29);
      uVar14 = *puVar3;
      uVar15 = puVar3[1];
      uVar16 = puVar3[2];
      uVar17 = puVar3[3];
      *(undefined4 *)(plVar26 + lVar33 * 0xf + 9) = *puVar4;
      *(undefined4 *)((longlong)plVar26 + lVar28 + 0x4c) = uVar7;
      *(undefined4 *)(plVar26 + lVar33 * 0xf + 10) = uVar8;
      *(undefined4 *)((longlong)plVar26 + lVar28 + 0x54) = uVar9;
      *(undefined4 *)(plVar26 + lVar33 * 0xf + 0xb) = uVar10;
      *(undefined4 *)((longlong)plVar26 + lVar28 + 0x5c) = uVar11;
      *(undefined4 *)(plVar26 + lVar33 * 0xf + 0xc) = uVar12;
      *(undefined4 *)((longlong)plVar26 + lVar28 + 100) = uVar13;
      *(undefined4 *)(plVar26 + lVar33 * 0xf + 0xd) = uVar14;
      *(undefined4 *)((longlong)plVar26 + lVar28 + 0x6c) = uVar15;
      *(undefined4 *)(plVar26 + lVar33 * 0xf + 0xe) = uVar16;
      *(undefined4 *)((longlong)plVar26 + lVar28 + 0x74) = uVar17;
      lVar32 = lVar32 + 1;
      lVar29 = lVar29 + 0x78;
    } while (lVar32 < lVar31);
    if ((int)local_c0 == 0) {
      local_c0 = CONCAT44(local_c0._4_4_,1);
      if (local_c0._4_4_ == 0) {
        FUN_1407d4a32(local_2a8,0);
      }
      goto LAB_1418099e0;
    }
  }
  if (iVar30 + iVar5 == (int)param_1[0x43]) {
    if (param_1 + 0x19 != (longlong *)&local_b8) {
      FUN_1402faf4a(&local_b8,param_1 + 0x19);
    }
  }
  *(undefined1 *)(param_2 + 0x328) = 0xff;
  FUN_1449493b2(param_2);
  *(undefined8 *)(param_2 + 0x1e0) = 0;
  plVar26 = local_2a8;
  if (local_c8 != (longlong *)0x0) {
    plVar26 = local_c8;
  }
  FUN_140105d28(param_2,plVar26,local_c0 & 0xffffffff,0);
  *(char *)(param_2 + 0x240) = local_68;
  if (local_68 == '\x01') {
    *(undefined8 *)(param_2 + 0x210) = local_98;
    *(undefined8 *)(param_2 + 0x218) = uStack_90;
    *(undefined8 *)(param_2 + 0x200) = local_a8;
    *(undefined8 *)(param_2 + 0x208) = uStack_a0;
    *(undefined4 *)(param_2 + 0x1f0) = local_b8;
    *(undefined4 *)(param_2 + 500) = uStack_b4;
    *(undefined4 *)(param_2 + 0x1f8) = uStack_b0;
    *(undefined4 *)(param_2 + 0x1fc) = uStack_ac;
    *(undefined8 *)(param_2 + 0x220) = local_88;
    *(longlong **)(param_2 + 0x228) = local_80;
    if (local_80 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_80 + 1) = (int)local_80[1] + 1;
      UNLOCK();
    }
    *(undefined4 *)(param_2 + 0x230) = local_78;
    *(undefined8 *)(param_2 + 0x238) = local_70;
  }
  *(byte *)(param_2 + 600) = local_50;
  if (local_50 == 1) {
    *(longlong *)(param_2 + 0x248) = local_60;
    if ((local_60 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    *(undefined4 *)(param_2 + 0x250) = local_58;
  }
  *(undefined1 *)(param_2 + 0x328) = 1;
  *(undefined1 *)(param_2 + 0x330) = local_2b1;
  if ((local_50 & 1) != 0) {
    local_50 = 0;
  }
  if (local_68 == '\x01') {
    if (local_80 != (longlong *)0x0) {
      LOCK();
      plVar26 = local_80 + 1;
      *(int *)plVar26 = (int)*plVar26 + -1;
      UNLOCK();
      if ((int)*plVar26 == 0) {
        (**(code **)*local_80)(local_80);
        LOCK();
        piVar1 = (int *)((longlong)local_80 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_80 + 0x10))(local_80);
        }
      }
    }
    local_68 = '\0';
  }
  FUN_1402f4baa(local_2a8);
LAB_1418099a4:
  if ((local_48 ^ (ulonglong)auStack_2d8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141809b6e FUN_141809b6e body=1341 status=ok
// SIG undefined FUN_141809b6e(void)

bool FUN_141809b6e(longlong param_1,double *param_2,longlong param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  ulonglong uVar4;
  double dVar5;
  double dVar6;
  bool bVar7;
  int iVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined1 auStack_188 [32];
  undefined4 local_168;
  double local_158;
  undefined8 uStack_150;
  double local_148;
  undefined8 uStack_140;
  undefined8 local_138 [4];
  undefined1 local_118 [16];
  double local_108;
  double dStack_100;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_188;
  if (*(char *)(param_2 + 0xe) == '\x01') {
    if (param_3 == 0) {
      puVar10 = &DAT_14c846480;
      puVar11 = local_138;
      for (lVar9 = 0xc; lVar9 != 0; lVar9 = lVar9 + -1) {
        *puVar11 = *puVar10;
        puVar10 = puVar10 + 1;
        puVar11 = puVar11 + 1;
      }
    }
    else {
      local_168 = *(undefined4 *)(param_1 + 0x54);
      FUN_1449432a4(param_3,local_138,0,0x7f7fffff);
      dVar12 = (double)*(float *)(param_1 + 0x50);
      dVar3 = dVar12 * (double)local_118._8_8_;
      local_108 = dVar12 * local_108;
      dStack_100 = dStack_100 * 0.0;
      local_118._8_4_ = SUB84(dVar3,0);
      local_118._0_8_ = dVar12 * (double)local_118._0_8_;
      local_118._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
    }
    dVar3 = *param_2;
    dVar12 = param_2[1];
    local_148 = param_2[2] - (double)*(float *)((longlong)param_2 + 0x4c);
    uStack_140 = 0;
    dVar1 = *(double *)(param_1 + 0xd0);
    dVar2 = *(double *)(param_1 + 0xd8);
    local_158 = *(double *)(param_1 + 0xe0) - (double)*(float *)(param_1 + 0x11c);
    dVar13 = (double)FUN_144719204(*(undefined8 *)(param_1 + 0x18),0);
    dVar14 = (double)FUN_144719204(*(undefined8 *)(param_1 + 0x20),0);
    dVar15 = sin(dVar13 * 0.017453292519943295);
    dVar16 = cos(dVar13 * 0.017453292519943295);
    dVar13 = sin(dVar14 * 0.017453292519943295);
    dVar14 = cos(dVar14 * 0.017453292519943295);
    dVar13 = dVar13 * dVar16 * (double)local_118._8_8_ + dVar2;
    dVar14 = dVar14 * dVar16 * (double)local_118._0_8_ + dVar1;
    dVar2 = dVar12 - dVar2;
    dVar1 = dVar3 - dVar1;
    dVar16 = dVar1 * dVar1 + dVar2 * dVar2;
    if ((dVar16 != 1.0) || (NAN(dVar16))) {
      if (dVar16 < 9.99999993922529e-09) {
        uVar17 = SUB84(DAT_14c8464f0,0);
        uVar18 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
        dVar2 = DAT_14c8464e8;
        dVar1 = DAT_14c8464e0;
      }
      else {
        uVar17 = 0;
        uVar18 = 0;
        dVar2 = dVar2 * (1.0 / SQRT(dVar16));
        dVar1 = dVar1 * (1.0 / SQRT(dVar16));
      }
    }
    else {
      uVar4 = -(ulonglong)(local_148 - local_158 == 0.0) & (ulonglong)(local_148 - local_158);
      uVar17 = (undefined4)uVar4;
      uVar18 = (undefined4)(uVar4 >> 0x20);
    }
    dVar15 = local_158 + dVar15 * local_108;
    dVar12 = dVar12 - dVar13;
    dVar3 = dVar3 - dVar14;
    dVar16 = dVar3 * dVar3 + dVar12 * dVar12;
    if ((dVar16 != 1.0) || (NAN(dVar16))) {
      dVar5 = DAT_14c8464e8;
      dVar6 = DAT_14c8464e0;
      local_158 = DAT_14c8464f0;
      if (9.99999993922529e-09 <= dVar16) {
        local_158 = 0.0;
        dVar5 = dVar12 * (1.0 / SQRT(dVar16));
        dVar6 = dVar3 * (1.0 / SQRT(dVar16));
      }
    }
    else {
      local_158 = local_148 - dVar15;
      local_158 = (double)(-(ulonglong)(local_158 == 0.0) & (ulonglong)local_158);
      dVar5 = dVar12;
      dVar6 = dVar3;
    }
    uStack_150 = 0;
    dVar3 = *param_2;
    if ((((((dVar3 <= -DAT_14cb1d020) || (DAT_14cb1d020 <= dVar3)) ||
          (dVar12 = param_2[1], dVar12 <= -DAT_14cb1d028)) ||
         ((DAT_14cb1d028 <= dVar12 || (dVar16 = param_2[2], dVar16 <= -DAT_14cb1d030)))) ||
        (((DAT_14cb1d030 <= dVar16 ||
          ((iVar8 = _finite(dVar3), iVar8 == 0 || (iVar8 = _finite(dVar12), iVar8 == 0)))) ||
         (iVar8 = _finite(dVar16), iVar8 == 0)))) ||
       (((dVar13 = dVar13 - param_2[1], dVar14 = dVar14 - *param_2,
         *(float *)(param_2 + 9) * *(float *)(param_2 + 9) + 0.01 <
         (float)(dVar14 * dVar14 + dVar13 * dVar13) ||
         (*(float *)((longlong)param_2 + 0x4c) + 0.01 <
          ABS((float)((double)(float)dVar15 - param_2[2])))) ||
        ((bVar7 = true, *(char *)(param_2 + 0xc) == '\x01' && (param_2[10] != 0.0)))))) {
      bVar7 = 0.8660253882408142 <
              (double)CONCAT44(uVar18,uVar17) * local_158 + dVar1 * dVar6 + dVar2 * dVar5;
    }
  }
  else {
    bVar7 = true;
  }
  if ((local_d0 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar7;
}



// FUNCTION 14180a0ac FUN_14180a0ac body=648 status=ok
// SIG undefined FUN_14180a0ac(void)

undefined8 *
FUN_14180a0ac(undefined8 *param_1,undefined8 *param_2,double *param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  longlong *plVar4;
  double dVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  longlong lVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  
  dVar17 = (double)param_1[0x11] - param_3[2];
  dVar21 = (double)param_1[0x10] - param_3[1];
  dVar19 = (double)param_1[0xf] - *param_3;
  dVar5 = dVar17 * dVar17 + dVar19 * dVar19 + dVar21 * dVar21;
  if (((dVar5 != 1.0) || (dVar18 = dVar17, dVar20 = dVar19, dVar22 = dVar21, NAN(dVar5))) &&
     (dVar18 = DAT_14c8464f0, dVar20 = DAT_14c8464e0, dVar22 = DAT_14c8464e8,
     9.99999993922529e-09 <= dVar5)) {
    dVar5 = 1.0 / SQRT(dVar5);
    dVar18 = dVar17 * dVar5;
    dVar20 = dVar19 * dVar5;
    dVar22 = dVar21 * dVar5;
  }
  puVar15 = param_1;
  puVar16 = param_2;
  for (lVar14 = 0xf; lVar14 != 0; lVar14 = lVar14 + -1) {
    *puVar16 = *puVar15;
    puVar15 = puVar15 + 1;
    puVar16 = puVar16 + 1;
  }
  uVar6 = param_1[0xf];
  uVar7 = param_1[0x10];
  uVar8 = param_1[0x11];
  uVar9 = param_1[0x12];
  uVar10 = param_1[0x14];
  param_2[0x13] = param_1[0x13];
  param_2[0x14] = uVar10;
  param_2[0x11] = uVar8;
  param_2[0x12] = uVar9;
  param_2[0xf] = uVar6;
  param_2[0x10] = uVar7;
  param_2[0x15] = param_1[0x15];
  lVar14 = param_1[0x16];
  param_2[0x16] = lVar14;
  if (lVar14 != 0) {
    LOCK();
    *(int *)(lVar14 + 8) = *(int *)(lVar14 + 8) + 1;
    UNLOCK();
  }
  *(undefined4 *)(param_2 + 0x17) = *(undefined4 *)(param_1 + 0x17);
  uVar6 = param_1[0x18];
  uVar7 = param_1[0x19];
  uVar8 = param_1[0x1a];
  uVar9 = param_1[0x1b];
  uVar10 = param_1[0x1d];
  param_2[0x1c] = param_1[0x1c];
  param_2[0x1d] = uVar10;
  param_2[0x1a] = uVar8;
  param_2[0x1b] = uVar9;
  param_2[0x18] = uVar6;
  param_2[0x19] = uVar7;
  *(undefined4 *)((longlong)param_2 + 0xf7) = *(undefined4 *)((longlong)param_1 + 0xf7);
  param_2[0x1e] = param_1[0x1e];
  uVar6 = param_1[0x20];
  uVar7 = param_1[0x21];
  uVar8 = param_1[0x22];
  uVar9 = param_1[0x23];
  uVar10 = param_1[0x25];
  param_2[0x24] = param_1[0x24];
  param_2[0x25] = uVar10;
  param_2[0x20] = uVar6;
  param_2[0x21] = uVar7;
  param_2[0x22] = uVar8;
  param_2[0x23] = uVar9;
  param_2[0x26] = param_1[0x26];
  cVar3 = *(char *)(param_1 + 0x2a);
  *(char *)(param_2 + 0x2a) = cVar3;
  if (cVar3 == '\x01') {
    param_2[0x29] = param_1[0x29];
    uVar6 = param_1[0x28];
    param_2[0x27] = param_1[0x27];
    param_2[0x28] = uVar6;
  }
  dVar21 = (double)(float)param_4;
  dVar5 = param_3[2];
  dVar17 = param_3[1];
  dVar19 = *param_3;
  param_2[0x14] = DAT_14cb1c870;
  uVar13 = DAT_14cb1c868._4_4_;
  uVar12 = (undefined4)DAT_14cb1c868;
  uVar11 = DAT_14cb1c860._4_4_;
  *(undefined4 *)(param_2 + 0x12) = (undefined4)DAT_14cb1c860;
  *(undefined4 *)((longlong)param_2 + 0x94) = uVar11;
  *(undefined4 *)(param_2 + 0x13) = uVar12;
  *(undefined4 *)((longlong)param_2 + 0x9c) = uVar13;
  param_2[0xf] = dVar20 * dVar21 + dVar19;
  param_2[0x10] = dVar22 * dVar21 + dVar17;
  param_2[0x11] = dVar18 * dVar21 + dVar5;
  param_2[0x15] = 0;
  plVar4 = (longlong *)param_2[0x16];
  if (plVar4 != (longlong *)0x0) {
    param_2[0x16] = 0;
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
  *(undefined4 *)(param_2 + 0x17) = 0xffffffff;
  FUN_140801b3e(param_2,param_4);
  return param_2;
}



// FUNCTION 14180a334 FUN_14180a334 body=655 status=ok
// SIG undefined FUN_14180a334(void)

float * FUN_14180a334(float *param_1,float *param_2,undefined8 param_3)

{
  float fVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  float fVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 in_R8;
  double dVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  double dVar12;
  float fVar13;
  undefined1 auStack_188 [32];
  float local_168;
  undefined1 local_158 [16];
  double local_148;
  undefined8 uStack_140;
  undefined1 local_130 [8];
  double local_128;
  double local_118;
  double local_110;
  double local_108;
  undefined8 local_100;
  double local_f8;
  undefined8 local_f0;
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined1 local_c8 [16];
  double local_b8;
  double dStack_b0;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_188;
  if (*(longlong *)(param_1 + 0x24) == 0) {
    fVar1 = param_1[6];
    fVar2 = param_1[7];
    fVar13 = param_1[8];
    fVar5 = param_1[9];
    uVar7 = *(undefined8 *)(param_1 + 10);
    uVar8 = *(undefined8 *)(param_1 + 0xc);
    uVar6 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_1 + 0xe);
    *(undefined8 *)(param_2 + 10) = uVar6;
    *(undefined8 *)(param_2 + 4) = uVar7;
    *(undefined8 *)(param_2 + 6) = uVar8;
    *param_2 = fVar1;
    param_2[1] = fVar2;
    param_2[2] = fVar13;
    param_2[3] = fVar5;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_80 ^ (ulonglong)auStack_188);
  }
  local_168 = param_1[3];
  FUN_1449432a4(*(longlong *)(param_1 + 0x24),local_e8,in_R8,param_3);
  local_148 = (double)param_1[2];
  dVar4 = local_148 * (double)local_c8._0_8_;
  uVar10 = SUB84(local_148 * (double)local_c8._8_8_,0);
  uVar11 = (undefined4)((ulonglong)(local_148 * (double)local_c8._8_8_) >> 0x20);
  local_148 = local_148 * local_b8;
  dStack_b0 = dStack_b0 * 0.0;
  local_c8._8_4_ = uVar10;
  local_c8._0_8_ = dVar4;
  local_c8._12_4_ = uVar11;
  fVar13 = (float)param_3 - *param_1;
  fVar1 = param_1[1];
  fVar2 = param_1[4];
  if (fVar1 <= fVar13) {
    fVar13 = fVar1;
  }
  if (fVar13 <= 0.0) {
    fVar13 = 0.0;
  }
  dVar12 = *(double *)(param_1 + 8);
  if (*(char *)(param_1 + 0x26) != '\0') {
    dVar12 = dVar12 + (double)fVar2;
  }
  local_f8 = (double)(float)dVar12;
  local_100 = 0;
  local_f0 = 0;
  local_158._8_4_ = uVar10;
  local_158._0_8_ = dVar4;
  local_158._12_4_ = uVar11;
  local_b8 = local_148;
  FUN_1401c9a0e(&local_100,&local_118,local_158);
  dVar4 = *(double *)(param_1 + 0x10);
  dVar12 = *(double *)(param_1 + 0xc);
  dVar3 = *(double *)(param_1 + 0xe);
  local_148 = (double)local_d8;
  uStack_140 = uStack_d0;
  FUN_1448052ee(local_158,local_130);
  dVar9 = (double)FUN_144719204(SUB84((double)((float)(-(uint)(0.0 < fVar1) & (uint)(fVar13 / fVar1)
                                                      ) * fVar2) +
                                      (double)(float)local_128 + *(double *)(param_1 + 8),0));
  dVar9 = (double)(~-(ulonglong)(dVar9 < 0.0) & (ulonglong)dVar9 |
                  (ulonglong)(dVar9 + 360.0) & -(ulonglong)(dVar9 < 0.0));
  param_2[0] = 0.0;
  param_2[1] = 0.0;
  *(double *)(param_2 + 2) =
       (double)(float)(double)(~-(ulonglong)(180.0 < dVar9) & (ulonglong)dVar9 |
                              (ulonglong)(dVar9 + -360.0) & -(ulonglong)(180.0 < dVar9));
  param_2[4] = 0.0;
  param_2[5] = 0.0;
  *(double *)(param_2 + 6) = dVar12 + local_118;
  *(double *)(param_2 + 8) = dVar3 + local_110;
  *(double *)(param_2 + 10) = dVar4 + local_108;
  if ((local_80 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


