// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 140984b66 FUN_140984b66 body=1146 status=ok
// SIG undefined FUN_140984b66(void)

undefined8 * FUN_140984b66(longlong param_1,undefined8 *param_2,int *param_3,longlong param_4)

{
  uint uVar1;
  longlong *plVar2;
  bool bVar3;
  double dVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  char cVar11;
  int iVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  int iVar16;
  longlong *plVar17;
  float fVar18;
  undefined1 auStack_c8 [32];
  char *local_a8;
  char local_91;
  undefined8 *local_90;
  longlong *local_88;
  longlong *local_80;
  int local_78;
  undefined8 local_70;
  int local_68;
  char local_5d [5];
  longlong local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  *(undefined4 *)(param_4 + 0x94) = 0;
  if (*param_3 == 0) {
    *(undefined4 *)(param_4 + 0x94) = 4;
  }
  else {
    local_5d[1] = -1;
    local_5d[2] = -1;
    local_5d[3] = -1;
    local_5d[4] = -1;
    local_a8 = local_5d;
    local_5d[0] = '\0';
    local_70 = *(undefined8 *)param_3;
    local_68 = param_3[2];
    lVar6 = FUN_140bc60a2(param_1 + 0x68,param_1 + 0x30,&local_70);
    cVar11 = local_5d[0];
    if (lVar6 == 0) {
      *(undefined4 *)(param_4 + 0x94) = 7;
    }
    else {
      if (local_5d[0] == '\x01') {
        if (*(float **)(param_4 + 0x38) == (float *)0x0) {
          fVar18 = 0.0;
          if ((((*(int *)(param_1 + 0xc) != 0) && (uVar1 = *(uint *)(param_1 + 8), -1 < (int)uVar1))
              && ((int)uVar1 < DAT_14c9647dc)) &&
             (((plVar17 = (longlong *)
                          ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
               plVar17 != (longlong *)0x0 && ((int)plVar17[2] == *(int *)(param_1 + 0xc))) &&
              ((*(uint *)(plVar17 + 1) & 0x10200000) == 0)))) {
            if ((*(uint *)(plVar17 + 1) & 0x10200000) == 0) {
              lVar15 = *plVar17;
            }
            else {
              lVar15 = 0;
            }
            if (((*(longlong *)(lVar15 + 0x30) != 0) &&
                (lVar15 = *(longlong *)(*(longlong *)(lVar15 + 0x30) + 0x360), lVar15 != 0)) &&
               (plVar17 = *(longlong **)(lVar15 + 0x178), plVar17 != (longlong *)0x0)) {
              dVar4 = (double)(**(code **)(*plVar17 + 0x640))();
              fVar18 = (float)dVar4;
            }
          }
        }
        else {
          fVar18 = **(float **)(param_4 + 0x38);
        }
        *(float *)(lVar6 + 0x14) = fVar18;
      }
      if ((*(longlong **)(param_4 + 0x20) != (longlong *)0x0 && *(int *)(param_4 + 0x28) != 0) &&
         (cVar5 = (**(code **)(**(longlong **)(param_4 + 0x20) + 0x30))(), cVar5 != '\0')) {
        local_80 = (longlong *)0x0;
        local_78 = 0;
        FUN_1401aa3da(&local_80,param_4 + 0x20);
        if ((local_78 != 0) &&
           ((local_80 != (longlong *)0x0 &&
            (cVar5 = (**(code **)(*local_80 + 0x30))(), cVar5 != '\0')))) {
          plVar17 = (longlong *)(lVar6 + 0x18);
          uVar13 = (ulonglong)*(int *)(lVar6 + 0x20);
          if (0 < (longlong)uVar13) {
            lVar15 = uVar13 * 0x10 + -8;
            do {
              if (((*(int *)(*plVar17 + lVar15) == 0) ||
                  (plVar2 = *(longlong **)(*plVar17 + -8 + lVar15), plVar2 == (longlong *)0x0)) ||
                 (cVar5 = (**(code **)(*plVar2 + 0x30))(), cVar5 == '\0')) {
                FUN_140826afa(plVar17,(int)uVar13 + -1);
                FUN_140826a70(plVar17);
              }
              lVar15 = lVar15 + -0x10;
              bVar3 = 1 < uVar13;
              uVar13 = uVar13 - 1;
            } while (bVar3);
          }
          local_91 = cVar11;
          if ((local_78 == 0) || (local_80 == (longlong *)0x0)) {
            local_58 = 0;
          }
          else {
            (**(code **)(*local_80 + 0x38))(local_80,&local_58);
          }
          lVar15 = local_58;
          iVar12 = *(int *)(lVar6 + 0x20);
          local_88 = plVar17;
          if ((longlong)iVar12 == 0) {
            iVar12 = 0;
          }
          else {
            lVar9 = *(longlong *)(lVar6 + 0x18);
            lVar14 = 0;
            iVar16 = 0;
            local_90 = param_2;
            do {
              if (*(int *)(lVar9 + 8 + lVar14) == 0) {
                lVar7 = 0;
              }
              else {
                plVar17 = *(longlong **)(lVar9 + lVar14);
                lVar7 = 0;
                if (plVar17 != (longlong *)0x0) {
                  (**(code **)(*plVar17 + 0x38))(plVar17,&local_50);
                  lVar7 = local_50;
                }
              }
              param_2 = local_90;
              if (lVar7 == lVar15) {
                iVar12 = *(int *)(lVar6 + 0x20);
                if ((iVar16 < 0) || (cVar11 = local_91, iVar12 <= iVar16)) goto LAB_140984de2;
                goto LAB_140984e32;
              }
              iVar16 = iVar16 + 1;
              lVar14 = lVar14 + 0x10;
            } while ((longlong)iVar12 * 0x10 != lVar14);
            iVar12 = *(int *)(lVar6 + 0x20);
          }
LAB_140984de2:
          plVar17 = local_88;
          cVar11 = local_91;
          *(uint *)(lVar6 + 0x20) = iVar12 + 1U;
          if (*(uint *)(lVar6 + 0x24) < iVar12 + 1U) {
            FUN_141883016(local_88,iVar12);
          }
          lVar15 = *plVar17;
          lVar9 = (longlong)iVar12 * 0x10;
          *(undefined8 *)(lVar15 + lVar9) = 0;
          *(undefined4 *)(lVar15 + 8 + lVar9) = 0;
          FUN_1401aa3da(lVar15 + lVar9,&local_80);
        }
LAB_140984e32:
        if (local_78 != 0) {
          if (local_80 == (longlong *)0x0) goto LAB_140984e6e;
          (**(code **)*local_80)(local_80,0);
          FUN_1446efa72(&local_80,0,0,0x10);
          local_78 = 0;
        }
        if (local_80 != (longlong *)0x0) {
          FUN_1400020a8();
        }
      }
LAB_140984e6e:
      FUN_144976b9c(param_4 + 0x10,*(undefined8 *)(lVar6 + 0xc));
      *(undefined4 *)(param_4 + 0x30) = *(undefined4 *)(lVar6 + 0x14);
      if (((((cVar11 != '\0') && (*(int *)(param_1 + 0xc) != 0)) &&
           (uVar1 = *(uint *)(param_1 + 8), -1 < (int)uVar1)) &&
          (((int)uVar1 < DAT_14c9647dc &&
           (puVar10 = (undefined8 *)
                      ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
           puVar10 != (undefined8 *)0x0)))) &&
         ((*(int *)(puVar10 + 2) == *(int *)(param_1 + 0xc) &&
          ((*(uint *)(puVar10 + 1) & 0x10200000) == 0)))) {
        if ((*(uint *)(puVar10 + 1) & 0x10200000) == 0) {
          uVar8 = *puVar10;
        }
        else {
          uVar8 = 0;
        }
        FUN_1405f658a(uVar8);
      }
      *(undefined4 *)(param_4 + 0x94) = 1;
      plVar17 = *(longlong **)(param_4 + 0x20);
      if (plVar17 != (longlong *)0x0 && *(int *)(param_4 + 0x28) != 0) {
        (**(code **)(*plVar17 + 0x38))(plVar17,param_2);
        goto LAB_140984f06;
      }
    }
  }
  *param_2 = 0;
LAB_140984f06:
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 140984fe2 FUN_140984fe2 body=894 status=ok
// SIG undefined FUN_140984fe2(void)

longlong FUN_140984fe2(longlong *param_1,uint param_2,int *param_3)

{
  uint *puVar1;
  int *piVar2;
  int *piVar3;
  undefined8 *puVar4;
  longlong lVar5;
  int iVar6;
  uint uVar7;
  longlong *plVar8;
  byte bVar9;
  uint uVar10;
  int iVar11;
  ulonglong uVar12;
  longlong *plVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  longlong lVar17;
  
  iVar16 = (int)param_1[1];
  iVar15 = *(int *)((longlong)param_1 + 0x34);
  if (iVar16 != iVar15) {
    plVar8 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar8 = (longlong *)param_1[8];
    }
    iVar6 = *(int *)((longlong)plVar8 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar6 != -1) {
      do {
        lVar17 = *param_1 + (longlong)iVar6 * 0x20;
        if (*(int *)(*param_1 + (longlong)iVar6 * 0x20) == *param_3) {
          if (lVar17 != 0) goto LAB_1409851f8;
          break;
        }
        iVar6 = *(int *)(lVar17 + 0x18);
      } while (iVar6 != -1);
    }
  }
  if (iVar15 == 0) {
    *(int *)(param_1 + 1) = iVar16 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar16) {
      FUN_1447711aa(param_1,iVar16);
    }
    iVar15 = (int)param_1[5];
    if (iVar15 == 0) {
      iVar6 = -1;
    }
    else {
      iVar6 = iVar15 + 0x1e;
      if (-1 < iVar15 + -1) {
        iVar6 = iVar15 + -1;
      }
      iVar6 = iVar6 >> 5;
    }
    plVar8 = param_1 + 2;
    iVar11 = iVar15 + 1;
    iVar14 = iVar15 + 0x1f;
    if (-1 < iVar15) {
      iVar14 = iVar15;
    }
    if (iVar14 >> 5 == iVar6) {
      *(int *)(param_1 + 5) = iVar11;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar15) {
        if (iVar15 + 0x20U < 0xa0) {
          iVar11 = 0x80;
          iVar6 = iVar15;
        }
        else {
          uVar7 = iVar15 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar10 = 4;
            if (4 < uVar7) {
              uVar10 = uVar7;
            }
          }
          else {
            uVar10 = (uVar7 * 3 >> 3) + uVar7 + 0x10;
          }
          uVar12 = FUN_144a3809e(uVar10 << 2,0);
          iVar6 = (int)(uVar12 >> 2);
          iVar11 = -0x20;
          if ((int)uVar7 <= iVar6) {
            iVar11 = iVar6 << 5;
          }
          iVar6 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar11;
        FUN_1446efbd8(plVar8,iVar6);
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
          plVar13 = plVar8;
        }
        bVar9 = -(char)(iVar11 % 0x20);
        *(uint *)((longlong)plVar13 + (longlong)(iVar6 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar13 + (longlong)(iVar6 >> 5) * 4) << (bVar9 & 0x1f)) >>
             (bVar9 & 0x1f);
      }
    }
    lVar17 = (longlong)iVar16;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar8 = (longlong *)param_1[4];
    }
    bVar9 = (byte)iVar15 & 0x1f;
    puVar1 = (uint *)((longlong)plVar8 + (longlong)(iVar14 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar9 | 0xfffffffeU >> 0x20 - bVar9);
  }
  else {
    iVar16 = (int)param_1[6];
    lVar17 = (longlong)iVar16;
    iVar6 = *(int *)(*param_1 + 4 + lVar17 * 0x20);
    *(int *)(param_1 + 6) = iVar6;
    *(int *)((longlong)param_1 + 0x34) = iVar15 + -1;
    if (iVar15 + -1 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar6 * 0x20) = 0xffffffff;
    }
  }
  plVar8 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar8 = (longlong *)param_1[4];
  }
  iVar15 = iVar16 + 0x1f;
  if (-1 < iVar16) {
    iVar15 = iVar16;
  }
  puVar1 = (uint *)((longlong)plVar8 + (longlong)(iVar15 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar16 & 0x1f);
  iVar15 = 1;
  lVar5 = *param_1;
  lVar17 = lVar17 * 0x20;
  piVar2 = (int *)(lVar5 + lVar17);
  *(int *)(lVar5 + lVar17) = *param_3;
  puVar4 = (undefined8 *)(lVar5 + 8 + lVar17);
  *puVar4 = 0;
  puVar4[1] = 0;
  FUN_1410fdcb9(0,0);
  *(undefined4 *)(lVar5 + 0x18 + lVar17) = 0xffffffff;
  uVar7 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar7 != 1) {
    if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
      plVar8 = param_1 + 7;
      if ((longlong *)param_1[8] != (longlong *)0x0) {
        plVar8 = (longlong *)param_1[8];
      }
      iVar6 = *(int *)((longlong)plVar8 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
      if (iVar6 != -1) {
        do {
          piVar3 = (int *)(*param_1 + (longlong)iVar6 * 0x20);
          if (*(int *)(*param_1 + (longlong)iVar6 * 0x20) == *piVar2) {
            FUN_1410fdcb9(*(undefined8 *)(piVar3 + 2),piVar3[4]);
            if (*(longlong *)(piVar3 + 2) != 0) {
              FUN_1400020a8();
            }
            iVar15 = *piVar2;
            iVar6 = piVar2[1];
            iVar11 = piVar2[2];
            iVar14 = piVar2[3];
            *(undefined8 *)(piVar3 + 4) = *(undefined8 *)(piVar2 + 4);
            *piVar3 = iVar15;
            piVar3[1] = iVar6;
            piVar3[2] = iVar11;
            piVar3[3] = iVar14;
            FUN_14884e3c8(param_1,iVar16);
            goto LAB_1409851d8;
          }
          iVar6 = piVar3[6];
        } while (iVar6 != -1);
      }
    }
    if (3 < uVar7) {
      uVar12 = (ulonglong)(uVar7 & 0xfffffffe) + 0xf;
      lVar17 = 0x3f;
      if (uVar12 != 0) {
        for (; uVar12 >> lVar17 == 0; lVar17 = lVar17 + -1) {
        }
      }
      iVar15 = 1 << ((byte)lVar17 & 0x1f);
    }
  }
  if (((int)uVar7 < 1) || (iVar15 <= (int)param_1[9])) {
    param_2 = (int)param_1[9] - 1U & param_2;
    piVar2[7] = param_2;
    plVar8 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar8 = param_1 + 7;
    }
    piVar2[6] = *(int *)((longlong)plVar8 +
                        ((longlong)(int)param_1[9] - 1U & (longlong)(int)param_2) * 4);
    plVar8 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar8 = param_1 + 7;
    }
    *(int *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)param_2) * 4) =
         iVar16;
  }
  else {
    *(int *)(param_1 + 9) = iVar15;
    FUN_140986d08(param_1);
  }
LAB_1409851d8:
  lVar17 = *param_1 + (longlong)iVar16 * 0x20;
LAB_1409851f8:
  return lVar17 + 8;
}



// FUNCTION 140985360 FUN_140985360 body=782 status=ok
// SIG undefined FUN_140985360(void)

undefined4 FUN_140985360(longlong param_1,longlong *param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined2 *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  code **local_40;
  code *local_38;
  code *local_30;
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(char *)(param_1 + 0x68) == '\0') {
    uVar3 = 0xffffffff;
    if (param_2 != (longlong *)0x0) {
      while( true ) {
        if (DAT_14cb61cd0 == 0) {
          local_40 = &local_28;
          local_28 = FUN_141030f22;
          local_30 = FUN_14081d0ea;
          local_38 = (code *)&LAB_1463b31ae;
          local_48 = &LAB_1486dca4f;
          local_50 = &LAB_1464f50a6;
          local_58 = &DAT_149e063b2;
          local_60 = 0;
          local_68 = 0x10000004;
          local_70 = 8;
          local_78 = 0xd70;
          FUN_14081cfa3(L"/Script/GbxGame",L"GbxPlayerController",&DAT_14cb61cd0,FUN_1464f5084);
        }
        lVar4 = param_2[2];
        iVar1 = *(int *)(lVar4 + 0x38);
        if ((*(int *)(DAT_14cb61cd0 + 0x38) <= iVar1) &&
           (*(longlong *)
             (*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(DAT_14cb61cd0 + 0x38) * 8) ==
            DAT_14cb61cd0 + 0x30)) break;
        if (DAT_14caf64b8 == 0) {
          local_40 = &local_28;
          local_28 = FUN_141030f22;
          local_30 = FUN_14081d0ea;
          local_38 = FUN_142b4754c;
          local_48 = &LAB_147c45ce0;
          local_50 = &LAB_1463f1ff4;
          local_58 = &DAT_149e063b2;
          local_60 = 0x4000000000;
          local_68 = 0x10000004;
          local_70 = 8;
          local_78 = 0x428;
          FUN_14081cfa3(L"/Script/Engine",L"Pawn",&DAT_14caf64b8,FUN_1463f1fd2);
          lVar4 = param_2[2];
          iVar1 = *(int *)(lVar4 + 0x38);
        }
        if ((iVar1 < *(int *)(DAT_14caf64b8 + 0x38)) ||
           (*(longlong *)
             (*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(DAT_14caf64b8 + 0x38) * 8) !=
            DAT_14caf64b8 + 0x30)) {
          lVar4 = FUN_140d12354();
          if ((*(int *)(param_2[2] + 0x38) < *(int *)(lVar4 + 0x38)) ||
             (*(longlong *)(*(longlong *)(param_2[2] + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
              != lVar4 + 0x30)) {
            lVar4 = FUN_140789e1e();
            if ((*(int *)(param_2[2] + 0x38) < *(int *)(lVar4 + 0x38)) ||
               (*(longlong *)
                 (*(longlong *)(param_2[2] + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) !=
                lVar4 + 0x30)) goto LAB_1409854d9;
            param_2 = (longlong *)(**(code **)(*param_2 + 0x2b8))(param_2);
          }
          else {
            param_2 = (longlong *)(**(code **)(*param_2 + 0x5f0))(param_2);
          }
        }
        else {
          param_2 = (longlong *)(**(code **)(*param_2 + 0x5d8))(param_2);
        }
        if (param_2 == (longlong *)0x0) goto LAB_1409854d9;
      }
      if ((((*(int *)(param_1 + 0x54) != 0) &&
           ((((uVar2 = *(uint *)(param_1 + 0x50), -1 < (int)uVar2 && ((int)uVar2 < DAT_14c9647dc))
             && (plVar5 = (longlong *)
                          ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
                plVar5 != (longlong *)0x0)) &&
            (((int)plVar5[2] == *(int *)(param_1 + 0x54) &&
             ((*(uint *)(plVar5 + 1) & 0x10200000) == 0)))))) && (*plVar5 != 0)) &&
         ((lVar4 = *(longlong *)(*plVar5 + 0x1e0), lVar4 != 0 &&
          (lVar4 = *(longlong *)(lVar4 + 0x68), lVar4 != 0)))) {
        FUN_140d27df6(lVar4,&local_28,param_2);
        uVar3 = FUN_140b9fef0(lVar4,&local_28,0);
      }
    }
  }
  else {
    uVar3 = 0;
  }
LAB_1409854d9:
  if ((local_20 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 140985670 FUN_140985670 body=560 status=ok
// SIG undefined FUN_140985670(void)

undefined8 * FUN_140985670(longlong param_1,undefined8 *param_2,longlong param_3,longlong param_4)

{
  byte bVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  undefined8 *puVar9;
  uint uVar10;
  uint uVar11;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  uint local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((((*(int *)(param_3 + 0x10) == 0) || (iVar2 = *(int *)(param_3 + 0x14), iVar2 == 0)) ||
      (*(int *)(param_3 + 0x10) == DAT_14c948000)) || ((iVar2 == 1 || (iVar2 < 2)))) {
    local_30 = DAT_14c948620;
    puVar9 = DAT_14c948618;
  }
  else {
    local_30 = *(uint *)(*(longlong *)(param_3 + 0x28) + 0x14);
    puVar9 = *(undefined8 **)(*(longlong *)(param_3 + 0x28) + 0xc);
  }
  local_38._0_4_ = (uint)puVar9;
  if (local_30 != 0) {
    uVar6 = local_30 >> 0xd ^ (uint)local_38 - local_30;
    uVar8 = uVar6 << 8 ^ (-0x61c88647 - local_30) - uVar6;
    uVar11 = uVar8 >> 0xd ^ (local_30 - uVar6) - uVar8;
    uVar10 = uVar11 >> 0xc ^ (uVar6 - uVar8) - uVar11;
    uVar6 = uVar10 << 0x10 ^ (uVar8 - uVar11) - uVar10;
    uVar11 = uVar6 >> 5 ^ (uVar11 - uVar10) - uVar6;
    uVar8 = uVar11 >> 3 ^ (uVar10 - uVar6) - uVar11;
    uVar6 = uVar8 << 10 ^ (uVar6 - uVar11) - uVar8;
    local_38._0_4_ = uVar6 >> 0xf ^ uVar11 - (uVar8 + uVar6);
  }
  uVar6 = (uint)local_38;
  local_38 = puVar9;
  lVar7 = FUN_14113056a(param_1 + 8,uVar6,&local_38);
  bVar1 = *(byte *)(lVar7 + 0x60);
  puVar9 = &DAT_14cb7c580;
  if (bVar1 != 0) {
    puVar9 = &DAT_14cb7c588;
  }
  uVar3 = *puVar9;
  *(undefined1 *)(param_4 + 0x10) = 1;
  *(undefined8 *)(param_4 + 0x14) = uVar3;
  *(uint *)(param_4 + 0x1c) = (uint)bVar1;
  *(undefined4 *)(param_4 + 0x94) = 1;
  if (*(longlong **)(param_4 + 0x20) != (longlong *)0x0 && *(int *)(param_4 + 0x28) != 0) {
    cVar5 = (**(code **)(**(longlong **)(param_4 + 0x20) + 0x30))();
    if (cVar5 != '\0') {
      local_38 = (undefined8 *)0x0;
      local_30 = 0;
      FUN_1401aa3da(&local_38,param_4 + 0x20);
      FUN_14594d64e(lVar7,&local_38);
      if (local_30 != 0) {
        if (local_38 == (undefined8 *)0x0) goto LAB_140985839;
        (**(code **)*local_38)(local_38,0);
        FUN_1446efa72(&local_38,0,0,0x10);
        local_30 = 0;
      }
      if (local_38 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
  }
LAB_140985839:
  plVar4 = *(longlong **)(param_4 + 0x20);
  if (plVar4 == (longlong *)0x0 || *(int *)(param_4 + 0x28) == 0) {
    *param_2 = 0;
  }
  else {
    (**(code **)(*plVar4 + 0x38))(plVar4,param_2);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1409858a2 FUN_1409858a2 body=5221 status=ok
// SIG undefined FUN_1409858a2(void)

undefined8 * FUN_1409858a2(longlong param_1,undefined8 *param_2,char *param_3,longlong **param_4)

{
  longlong **pplVar1;
  undefined4 *puVar2;
  bool bVar3;
  byte bVar4;
  char cVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  char *pcVar9;
  undefined8 uVar10;
  longlong lVar11;
  uint *puVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong lVar15;
  undefined8 *puVar16;
  int iVar17;
  undefined7 uVar18;
  uint uVar19;
  int *piVar20;
  longlong lVar21;
  undefined8 *puVar22;
  char *pcVar23;
  uint uVar24;
  int *piVar25;
  uint uVar26;
  int iVar27;
  longlong lVar28;
  ulonglong uVar29;
  undefined1 auStack_288 [32];
  longlong local_268;
  undefined8 **local_260;
  longlong **local_258;
  undefined4 local_244;
  longlong local_240;
  undefined4 local_234;
  longlong local_230;
  ulonglong local_228;
  undefined8 local_220;
  longlong **local_218;
  longlong **local_210;
  longlong **local_208;
  undefined8 *local_200;
  undefined8 *local_1f8;
  uint local_1f0;
  undefined8 *local_1e8;
  uint local_1e0;
  undefined8 *local_1d8;
  uint local_1d0;
  longlong *local_1c8;
  longlong *plStack_1c0;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 local_178;
  undefined4 uStack_174;
  longlong *plStack_170;
  undefined8 local_168;
  int local_160;
  undefined4 local_15c;
  undefined8 local_158;
  undefined4 local_150;
  undefined8 local_148;
  undefined4 local_140;
  longlong *local_138;
  undefined8 *local_128;
  uint local_120;
  undefined8 *local_118;
  uint local_110;
  undefined8 *local_108;
  uint local_100;
  undefined8 *local_f8;
  uint local_f0;
  undefined8 *local_e8;
  uint local_e0;
  byte local_d9;
  uint local_d8;
  undefined4 uStack_d4;
  uint local_d0;
  uint local_c8;
  undefined4 uStack_c4;
  uint local_c0;
  undefined8 *local_b8;
  uint local_b0;
  undefined8 *local_a8;
  int local_a0;
  longlong local_80;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_288;
  *(undefined4 *)((longlong)param_4 + 0x94) = 0;
  cVar5 = FUN_1401144ce(param_3);
  if (cVar5 == '\0') {
    *(undefined4 *)((longlong)param_4 + 0x94) = 4;
  }
  else {
    if (*(int *)(param_1 + 0x2c) != 0) {
      iVar8 = *(int *)(param_3 + 0x10);
      piVar25 = (int *)&DAT_14c948618;
      piVar20 = (int *)&DAT_14c948620;
      if (((iVar8 != 0) && (1 < *(int *)(param_3 + 0x14))) && (iVar8 != DAT_14c948000)) {
        piVar25 = (int *)(*(longlong *)(param_3 + 0x28) + 0xc);
        piVar20 = (int *)(*(longlong *)(param_3 + 0x28) + 0x14);
      }
      if ((*piVar25 == 0) ||
         ((*piVar25 == *(int *)(param_1 + 0x2c) && (*piVar20 == *(int *)(param_1 + 0x34))))) {
LAB_140985946:
        if ((iVar8 == 0) ||
           ((iVar27 = *(int *)(param_3 + 0x14), iVar27 == 0 || (iVar8 == DAT_14c948000)))) {
          local_c0 = DAT_14c948620;
          local_c8 = (uint)DAT_14c948618;
          uStack_c4 = (undefined4)((ulonglong)DAT_14c948618 >> 0x20);
LAB_140986ab1:
          local_d0 = DAT_14c948620;
          puVar22 = DAT_14c948618;
        }
        else {
          pcVar9 = param_3 + 0x18;
          if (0 < *(int *)(param_3 + 0x34)) {
            pcVar9 = *(char **)(param_3 + 0x28);
          }
          if (1 < iVar27) {
            pcVar9 = *(char **)(param_3 + 0x28);
          }
          if ((iVar27 == 1) || (iVar27 < 3)) {
            local_c0 = DAT_14c948620;
            puVar22 = DAT_14c948618;
          }
          else {
            local_c0 = *(uint *)(pcVar9 + 0x20);
            puVar22 = *(undefined8 **)(pcVar9 + 0x18);
          }
          local_c8 = (uint)puVar22;
          uStack_c4 = (undefined4)((ulonglong)puVar22 >> 0x20);
          pcVar9 = param_3 + 0x18;
          if (0 < *(int *)(param_3 + 0x34)) {
            pcVar9 = *(char **)(param_3 + 0x28);
          }
          if (1 < iVar27) {
            pcVar9 = *(char **)(param_3 + 0x28);
          }
          if ((iVar27 == 1) || (iVar27 < 4)) goto LAB_140986ab1;
          local_d0 = *(uint *)(pcVar9 + 0x2c);
          puVar22 = *(undefined8 **)(pcVar9 + 0x24);
        }
        local_d8 = (uint)puVar22;
        uStack_d4 = (undefined4)((ulonglong)puVar22 >> 0x20);
        uVar6 = local_c8;
        if (local_c0 != 0) {
          uVar6 = local_c0 >> 0xd ^ local_c8 - local_c0;
          uVar19 = uVar6 << 8 ^ (-0x61c88647 - local_c0) - uVar6;
          uVar26 = uVar19 >> 0xd ^ (local_c0 - uVar6) - uVar19;
          uVar24 = uVar26 >> 0xc ^ (uVar6 - uVar19) - uVar26;
          uVar6 = uVar24 << 0x10 ^ (uVar19 - uVar26) - uVar24;
          uVar26 = uVar6 >> 5 ^ (uVar26 - uVar24) - uVar6;
          uVar19 = uVar26 >> 3 ^ (uVar24 - uVar6) - uVar26;
          uVar6 = uVar19 << 10 ^ (uVar6 - uVar26) - uVar19;
          uVar6 = uVar6 >> 0xf ^ uVar26 - (uVar19 + uVar6);
        }
        uVar10 = FUN_140726908(param_1 + 0x78,uVar6,&local_c8);
        uVar6 = local_d8;
        if (local_d0 != 0) {
          uVar6 = local_d0 >> 0xd ^ local_d8 - local_d0;
          uVar19 = uVar6 << 8 ^ (-0x61c88647 - local_d0) - uVar6;
          uVar26 = uVar19 >> 0xd ^ (local_d0 - uVar6) - uVar19;
          uVar24 = uVar26 >> 0xc ^ (uVar6 - uVar19) - uVar26;
          uVar6 = uVar24 << 0x10 ^ (uVar19 - uVar26) - uVar24;
          uVar26 = uVar6 >> 5 ^ (uVar26 - uVar24) - uVar6;
          uVar19 = uVar26 >> 3 ^ (uVar24 - uVar6) - uVar26;
          uVar6 = uVar19 << 10 ^ (uVar6 - uVar26) - uVar19;
          uVar6 = uVar6 >> 0xf ^ uVar26 - (uVar19 + uVar6);
        }
        uVar10 = FUN_140726d02(uVar10,uVar6,&local_d8);
        local_d9 = 0;
        if (((*(int *)(param_3 + 0x10) == 0) || (iVar8 = *(int *)(param_3 + 0x14), iVar8 == 0)) ||
           (*(int *)(param_3 + 0x10) == DAT_14c948000)) {
LAB_140986a7c:
          local_e0 = DAT_14c948620;
          local_e8 = DAT_14c948618;
        }
        else {
          pcVar9 = param_3 + 0x18;
          if (0 < *(int *)(param_3 + 0x34)) {
            pcVar9 = *(char **)(param_3 + 0x28);
          }
          if (1 < iVar8) {
            pcVar9 = *(char **)(param_3 + 0x28);
          }
          if ((iVar8 == 1) || (iVar8 < 5)) goto LAB_140986a7c;
          local_e0 = *(uint *)(pcVar9 + 0x38);
          local_e8 = *(undefined8 **)(pcVar9 + 0x30);
        }
        lVar11 = FUN_14072739f(&local_e8,uVar10,&local_d9);
        if (param_4[9] == (longlong *)0x0) {
          if (0 < *(int *)(lVar11 + 0x28)) {
            puVar12 = (uint *)(lVar11 + 0x10);
            if (*(uint **)(lVar11 + 0x20) != (uint *)0x0) {
              puVar12 = *(uint **)(lVar11 + 0x20);
            }
            if (puVar12[1] == 0) {
LAB_140986b22:
              plVar13 = (longlong *)0x0;
            }
            else {
              uVar6 = *puVar12;
              plVar13 = (longlong *)0x0;
              if ((-1 < (int)uVar6) && ((int)uVar6 < DAT_14c9647dc)) {
                puVar22 = (undefined8 *)
                          ((ulonglong)((uVar6 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8));
                if ((puVar22 == (undefined8 *)0x0) ||
                   ((*(uint *)(puVar22 + 2) != puVar12[1] ||
                    ((*(uint *)(puVar22 + 1) & 0x10200000) != 0)))) goto LAB_140986b22;
                plVar13 = (longlong *)*puVar22;
              }
            }
            param_4[9] = plVar13;
          }
          local_234 = 0;
          local_220 = (ulonglong)local_220._4_4_ << 0x20;
        }
        else {
          local_258 = (longlong **)(param_1 + 0x1b0);
          local_260 = (undefined8 **)(param_1 + 0x118);
          local_268 = param_1 + 200;
          uVar10 = FUN_14167dc44(param_4[9],&local_c8,&local_d8,lVar11);
          puVar12 = (uint *)CONCAT71((int7)((ulonglong)uVar10 >> 8),0 < *(int *)(lVar11 + 0x68));
          local_220 = CONCAT44(local_220._4_4_,(int)puVar12);
          if (0 < *(int *)(lVar11 + 0x68)) {
            if (((*(int *)(param_3 + 0x10) == 0) || (iVar8 = *(int *)(param_3 + 0x14), iVar8 == 0))
               || (*(int *)(param_3 + 0x10) == DAT_14c948000)) {
LAB_140986b09:
              local_f0 = DAT_14c948620;
              local_f8 = DAT_14c948618;
            }
            else {
              pcVar9 = param_3 + 0x18;
              if (0 < *(int *)(param_3 + 0x34)) {
                pcVar9 = *(char **)(param_3 + 0x28);
              }
              if (1 < iVar8) {
                pcVar9 = *(char **)(param_3 + 0x28);
              }
              if ((iVar8 == 1) || (iVar8 < 5)) goto LAB_140986b09;
              local_f0 = *(uint *)(pcVar9 + 0x38);
              local_f8 = *(undefined8 **)(pcVar9 + 0x30);
            }
            iVar8 = *(int *)(param_1 + 0x1a8);
            *(uint *)(param_1 + 0x1a8) = iVar8 + 1U;
            if (*(uint *)(param_1 + 0x1ac) < iVar8 + 1U) {
              FUN_1408e8c18((longlong *)(param_1 + 0x1a0),iVar8);
            }
            lVar28 = *(longlong *)(param_1 + 0x1a0);
            puVar12 = (uint *)(lVar28 + (longlong)iVar8 * 0x24);
            puVar12[0] = 0;
            puVar12[1] = 0;
            puVar12[2] = 0;
            puVar12[3] = 0;
            puVar12[4] = 0;
            puVar12[5] = 0;
            if (local_c8 == 0) {
              puVar12[2] = DAT_14cb7bd70;
              *(undefined8 *)puVar12 = DAT_14cb7bd68;
            }
            else {
              *puVar12 = local_c8;
              *(ulonglong *)(puVar12 + 1) = CONCAT44(local_c0,uStack_c4);
            }
            if (local_d8 == 0) {
              lVar28 = lVar28 + (longlong)iVar8 * 0x24;
              *(undefined4 *)(lVar28 + 0x14) = DAT_14cb7bd88;
              *(undefined8 *)(lVar28 + 0xc) = DAT_14cb7bd80;
            }
            else {
              puVar12[3] = local_d8;
              *(ulonglong *)(puVar12 + 4) = CONCAT44(local_d0,uStack_d4);
            }
            puVar12[8] = local_f0;
            *(undefined8 **)(puVar12 + 6) = local_f8;
          }
          local_234 = (undefined4)
                      CONCAT71((int7)((ulonglong)puVar12 >> 8),0 < *(int *)(param_1 + 0x1b8));
        }
        local_210 = param_4 + 4;
        local_228 = CONCAT44(local_228._4_4_,(int)CONCAT71((int7)((ulonglong)local_210 >> 8),1));
        local_240 = lVar11;
        if ((param_4[4] == (longlong *)0x0 || *(int *)(param_4 + 5) == 0) ||
           (cVar5 = (**(code **)(*param_4[4] + 0x30))(), cVar5 == '\0')) {
          local_244 = 0;
        }
        else {
          if (*(char *)(param_4 + 0x12) == '\0') {
            pcVar9 = param_3;
            cVar5 = FUN_140114448(param_3);
            uVar18 = (undefined7)((ulonglong)pcVar9 >> 8);
            local_244 = (undefined4)CONCAT71(uVar18,1);
            local_228 = CONCAT44(local_228._4_4_,(int)CONCAT71(uVar18,1));
            if (cVar5 == '\0') goto LAB_140985f90;
          }
          local_1c8 = (longlong *)0x0;
          plStack_1c0 = (longlong *)((ulonglong)plStack_1c0 & 0xffffffff00000000);
          FUN_1401aa3da(&local_1c8,local_210);
          uVar10 = FUN_1401aa203(lVar11 + 0x40,&local_1c8);
          iVar8 = *(int *)(lVar11 + 0x38);
          if ((longlong)iVar8 != 0) {
            lVar11 = *(longlong *)(local_240 + 0x30);
            lVar28 = 0;
            do {
              uVar10 = FUN_1401aa203(*(longlong *)(param_1 + 0x40) +
                                     (longlong)*(int *)(lVar11 + lVar28) * 0x68 + 0x50,&local_1c8);
              lVar28 = lVar28 + 4;
            } while ((longlong)iVar8 * 4 != lVar28);
          }
          lVar11 = local_240;
          if ((int)plStack_1c0 == 0) {
LAB_140985f67:
            if (local_1c8 != (longlong *)0x0) {
              uVar10 = FUN_1400020a8();
            }
          }
          else if (local_1c8 != (longlong *)0x0) {
            (**(code **)*local_1c8)(local_1c8,0);
            uVar10 = FUN_1446efa72(&local_1c8,0,0,0x10);
            plStack_1c0 = (longlong *)((ulonglong)plStack_1c0 & 0xffffffff00000000);
            goto LAB_140985f67;
          }
          local_244 = (undefined4)CONCAT71((int7)((ulonglong)uVar10 >> 8),1);
          local_228 = local_228 & 0xffffffff00000000;
        }
LAB_140985f90:
        pplVar1 = param_4 + 0xe;
        local_218 = param_4;
        if ((param_4[0xe] != (longlong *)0x0 && *(int *)(param_4 + 0xf) != 0) &&
           (cVar5 = (**(code **)(*param_4[0xe] + 0x30))(), cVar5 != '\0')) {
          local_1c8 = (longlong *)0x0;
          plStack_1c0 = (longlong *)((ulonglong)plStack_1c0 & 0xffffffff00000000);
          FUN_140295bfa(&local_1c8,pplVar1);
          if (((int)plStack_1c0 != 0) && (local_1c8 != (longlong *)0x0)) {
            local_230 = param_1;
            local_200 = param_2;
            cVar5 = (**(code **)(*local_1c8 + 0x30))();
            if (cVar5 != '\0') {
              plVar13 = (longlong *)(lVar11 + 0x50);
              uVar29 = (ulonglong)*(int *)(lVar11 + 0x58);
              if (0 < (longlong)uVar29) {
                lVar28 = uVar29 * 0x10 + -8;
                do {
                  if (((*(int *)(*plVar13 + lVar28) == 0) ||
                      (plVar14 = *(longlong **)(*plVar13 + -8 + lVar28), plVar14 == (longlong *)0x0)
                      ) || (cVar5 = (**(code **)(*plVar14 + 0x30))(), cVar5 == '\0')) {
                    FUN_140722504(plVar13,(int)uVar29 + -1);
                    FUN_140722476();
                  }
                  lVar28 = lVar28 + -0x10;
                  bVar3 = 1 < uVar29;
                  uVar29 = uVar29 - 1;
                } while (bVar3);
              }
              if (((int)plStack_1c0 == 0) || (local_1c8 == (longlong *)0x0)) {
                local_b8 = (undefined8 *)0x0;
              }
              else {
                (**(code **)(*local_1c8 + 0x38))(local_1c8,&local_b8);
              }
              puVar22 = local_b8;
              lVar28 = local_240;
              iVar8 = *(int *)(lVar11 + 0x58);
              iVar27 = 0;
              if ((longlong)iVar8 != 0) {
                local_208 = *(longlong ***)(lVar11 + 0x50);
                lVar11 = 0;
                iVar17 = 0;
                do {
                  if (*(int *)((longlong)local_208 + lVar11 + 8) == 0) {
                    puVar16 = (undefined8 *)0x0;
                  }
                  else {
                    plVar14 = *(longlong **)((longlong)local_208 + lVar11);
                    puVar16 = (undefined8 *)0x0;
                    if (plVar14 != (longlong *)0x0) {
                      (**(code **)(*plVar14 + 0x38))(plVar14,&local_a8);
                      puVar16 = local_a8;
                    }
                  }
                  param_4 = local_218;
                  if (puVar16 == puVar22) {
                    iVar27 = *(int *)(local_240 + 0x58);
                    lVar11 = local_240;
                    if ((iVar17 < 0) || (iVar27 <= iVar17)) goto LAB_14098606b;
                    goto LAB_1409860b3;
                  }
                  iVar17 = iVar17 + 1;
                  lVar11 = lVar11 + 0x10;
                } while ((longlong)iVar8 * 0x10 != lVar11);
                iVar27 = *(int *)(lVar28 + 0x58);
                lVar11 = lVar28;
              }
LAB_14098606b:
              *(uint *)(lVar11 + 0x58) = iVar27 + 1U;
              if (*(uint *)(lVar11 + 0x5c) < iVar27 + 1U) {
                FUN_141885f4a(plVar13,iVar27);
              }
              lVar28 = *plVar13;
              lVar21 = (longlong)iVar27 * 0x10;
              *(undefined8 *)(lVar28 + lVar21) = 0;
              *(undefined4 *)(lVar28 + 8 + lVar21) = 0;
              FUN_140295bfa(lVar28 + lVar21,&local_1c8);
            }
LAB_1409860b3:
            param_2 = local_200;
            param_1 = local_230;
          }
          if ((int)plStack_1c0 != 0) {
            if (local_1c8 == (longlong *)0x0) goto LAB_14098610d;
            (**(code **)*local_1c8)(local_1c8,0);
            FUN_1446efa72(&local_1c8,0,0,0x10);
            plStack_1c0 = (longlong *)((ulonglong)plStack_1c0 & 0xffffffff00000000);
          }
          if (local_1c8 != (longlong *)0x0) {
            FUN_1400020a8();
          }
        }
LAB_14098610d:
        if ((param_4[0x10] != (longlong *)0x0 && *(int *)(param_4 + 0x11) != 0) &&
           (cVar5 = (**(code **)(*param_4[0x10] + 0x30))(), cVar5 != '\0')) {
          local_1c8 = (longlong *)0x0;
          plStack_1c0 = (longlong *)((ulonglong)plStack_1c0 & 0xffffffff00000000);
          FUN_1407266be(&local_1c8,param_4 + 0x10);
          FUN_1407264ef(lVar11 + 0x60,&local_1c8);
          if ((int)plStack_1c0 != 0) {
            if (local_1c8 == (longlong *)0x0) goto LAB_1409861b7;
            (**(code **)*local_1c8)(local_1c8,0);
            FUN_1446efa72(&local_1c8,0,0,0x10);
            plStack_1c0 = (longlong *)((ulonglong)plStack_1c0 & 0xffffffff00000000);
          }
          if (local_1c8 != (longlong *)0x0) {
            FUN_1400020a8();
          }
        }
LAB_1409861b7:
        local_208 = param_4 + 0x10;
        cVar5 = FUN_1411184fc(param_1);
        bVar4 = local_d9;
        local_230 = CONCAT71(local_230._1_7_,cVar5);
        if ((cVar5 == '\0') && ((~local_d9 & *(char *)((longlong)param_4 + 0x93) == '\0') == 0)) {
          uVar7 = 2;
          if (*(char *)((longlong)param_4 + 0x92) == '\0') {
            plVar13 = param_4[9];
            if (plVar13 != (longlong *)0x0) {
              uVar10 = FUN_140427846();
              plVar13 = (longlong *)(**(code **)(*plVar13 + 0x288))(plVar13,uVar10);
              if (plVar13 != (longlong *)0x0) {
                uVar10 = FUN_140427846();
                plVar14 = (longlong *)FUN_144718840(plVar13,uVar10);
                if (plVar14 != (longlong *)0x0 && plVar13 != plVar14) {
                  lVar28 = (**(code **)(*plVar14 + 0x10))(plVar14);
                  if (lVar28 == 0) {
                    uVar7 = 0;
                  }
                  else {
                    uVar7 = *(undefined4 *)(lVar28 + 0x10);
                  }
                  goto LAB_1409861f7;
                }
              }
            }
          }
          else {
LAB_1409861f7:
            *(undefined4 *)(lVar11 + 0xc) = uVar7;
          }
        }
        if ((((((bVar4 != 0) || ((char)local_234 != '\0' || (char)local_220 != '\0')) &&
              (*(int *)(param_1 + 0xc) != 0)) &&
             ((uVar6 = *(uint *)(param_1 + 8), -1 < (int)uVar6 && ((int)uVar6 < DAT_14c9647dc)))) &&
            (puVar22 = (undefined8 *)
                       ((ulonglong)((uVar6 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8)),
            puVar22 != (undefined8 *)0x0)) &&
           ((*(int *)(puVar22 + 2) == *(int *)(param_1 + 0xc) &&
            ((*(uint *)(puVar22 + 1) & 0x10200000) == 0)))) {
          if ((*(uint *)(puVar22 + 1) & 0x10200000) == 0) {
            uVar10 = *puVar22;
          }
          else {
            uVar10 = 0;
          }
          FUN_1405f658a(uVar10);
        }
        cVar5 = FUN_140114448(param_3);
        if (cVar5 == '\0') {
          local_1c8 = (longlong *)0x0;
          plStack_1c0 = (longlong *)((ulonglong)plStack_1c0 & 0xffffffff00000000);
          if ((*(byte *)((longlong)param_4 + 0x91) & (byte)local_244 & (byte)local_228) == 1) {
            FUN_1401aa3da(&local_1c8,local_210);
          }
          if (((*(int *)(param_3 + 0x10) == 0) || (iVar8 = *(int *)(param_3 + 0x14), iVar8 == 0)) ||
             (*(int *)(param_3 + 0x10) == DAT_14c948000)) {
            local_120 = DAT_14c948620;
            local_108 = DAT_14c948618;
            local_118 = DAT_14c948618;
            local_128 = DAT_14c948618;
            local_110 = local_120;
            local_100 = local_120;
          }
          else {
            pcVar9 = param_3 + 0x18;
            pcVar23 = pcVar9;
            if (0 < *(int *)(param_3 + 0x34)) {
              pcVar23 = *(char **)(param_3 + 0x28);
            }
            if (1 < iVar8) {
              pcVar23 = *(char **)(param_3 + 0x28);
            }
            if ((iVar8 == 1) || (iVar8 < 6)) {
              local_100 = DAT_14c948620;
              local_108 = DAT_14c948618;
            }
            else {
              local_100 = *(uint *)(pcVar23 + 0x44);
              local_108 = *(undefined8 **)(pcVar23 + 0x3c);
            }
            pcVar23 = pcVar9;
            if (0 < *(int *)(param_3 + 0x34)) {
              pcVar23 = *(char **)(param_3 + 0x28);
            }
            if (1 < iVar8) {
              pcVar23 = *(char **)(param_3 + 0x28);
            }
            if ((iVar8 == 1) || (iVar8 < 4)) {
              local_110 = DAT_14c948620;
              local_118 = DAT_14c948618;
            }
            else {
              local_110 = *(uint *)(pcVar23 + 0x2c);
              local_118 = *(undefined8 **)(pcVar23 + 0x24);
            }
            if (0 < *(int *)(param_3 + 0x34)) {
              pcVar9 = *(char **)(param_3 + 0x28);
            }
            if (1 < iVar8) {
              pcVar9 = *(char **)(param_3 + 0x28);
            }
            if ((iVar8 == 1) || (iVar8 < 3)) {
              local_120 = DAT_14c948620;
              local_128 = DAT_14c948618;
            }
            else {
              local_120 = *(uint *)(pcVar9 + 0x20);
              local_128 = *(undefined8 **)(pcVar9 + 0x18);
            }
          }
          local_260 = &local_108;
          local_268 = CONCAT71(local_268._1_7_,(undefined1)local_230);
          local_258 = param_4;
          FUN_143d4555e(param_1,&local_128,&local_118,lVar11);
          if ((int)plStack_1c0 != 0) {
            if (local_1c8 == (longlong *)0x0) goto LAB_14098645f;
            (**(code **)*local_1c8)(local_1c8,0);
            FUN_1446efa72(&local_1c8,0,0,0x10);
            plStack_1c0 = (longlong *)((ulonglong)plStack_1c0 & 0xffffffff00000000);
          }
          if (local_1c8 != (longlong *)0x0) {
            FUN_1400020a8();
          }
        }
LAB_14098645f:
        if (param_4[0xb] != (longlong *)0x0) {
          local_1c8 = *param_4;
          plStack_1c0 = param_4[1];
          local_1b8 = *(undefined4 *)(param_4 + 2);
          uStack_1b4 = *(undefined4 *)((longlong)param_4 + 0x14);
          uStack_1b0 = *(undefined4 *)(param_4 + 3);
          uStack_1ac = *(undefined4 *)((longlong)param_4 + 0x1c);
          local_1a8 = 0;
          local_1a0 = 0;
          FUN_1401aa3da(&local_1a8,local_210);
          local_198 = *(undefined4 *)(param_4 + 6);
          uStack_194 = *(undefined4 *)((longlong)param_4 + 0x34);
          uStack_190 = *(undefined4 *)(param_4 + 7);
          uStack_18c = *(undefined4 *)((longlong)param_4 + 0x3c);
          local_188 = *(undefined4 *)(param_4 + 8);
          uStack_184 = *(undefined4 *)((longlong)param_4 + 0x44);
          uStack_180 = *(undefined4 *)(param_4 + 9);
          uStack_17c = *(undefined4 *)((longlong)param_4 + 0x4c);
          local_178 = *(undefined4 *)(param_4 + 10);
          uStack_174 = *(undefined4 *)((longlong)param_4 + 0x54);
          plStack_170 = param_4[0xb];
          local_168 = 0;
          iVar8 = *(int *)(param_4 + 0xd);
          plVar13 = param_4[0xc];
          local_160 = iVar8;
          if (iVar8 == 0) {
            local_15c = 0;
          }
          else {
            FUN_1410b5974(&local_168,iVar8,0);
            FUN_1410b5937(local_168,plVar13,iVar8);
          }
          uVar7 = 0;
          local_158 = 0;
          local_150 = 0;
          local_200 = param_2;
          FUN_140295bfa(&local_158,pplVar1);
          local_148 = 0;
          local_140 = 0;
          FUN_1407266be(&local_148,local_208);
          local_138 = param_4[0x12];
          plStack_170 = (longlong *)0x0;
          local_1c8 = (longlong *)0x0;
          plStack_1c0 = (longlong *)0x0;
          plVar13 = param_4[0xb];
          lVar28 = *plVar13;
          lVar11 = plVar13[1];
          if ((longlong)(int)lVar11 != 0) {
            local_220 = lVar28 + 0x18;
            lVar21 = 0;
            do {
              iVar8 = *(int *)(lVar28 + 0x10 + lVar21);
              piVar25 = (int *)&DAT_14c948618;
              if (iVar8 != 0) {
                iVar27 = *(int *)(lVar28 + 0x14 + lVar21);
                piVar25 = (int *)&DAT_14c948618;
                if (((iVar27 != 0) && (piVar25 = (int *)&DAT_14c948618, iVar8 != DAT_14c948000)) &&
                   (piVar25 = (int *)&DAT_14c948618, 5 < iVar27)) {
                  piVar25 = (int *)(*(longlong *)(lVar28 + 0x28 + lVar21) + 0x3c);
                }
              }
              if (*piVar25 != 0) {
                puVar22 = (undefined8 *)(lVar28 + 0x38 + lVar21);
                local_1c8 = (longlong *)*puVar22;
                plStack_1c0 = (longlong *)puVar22[1];
                local_a8 = (undefined8 *)0x0;
                local_a0 = 0;
                if ((*(byte *)((longlong)param_4 + 0x91) & (byte)local_244 & (byte)local_228) == 1)
                {
                  FUN_1401aa3da(&local_1a8,local_210);
                  iVar8 = *(int *)(lVar28 + 0x10 + lVar21);
                }
                if (((iVar8 == 0) || (iVar27 = *(int *)(lVar28 + 0x14 + lVar21), iVar27 == 0)) ||
                   (iVar8 == DAT_14c948000)) {
LAB_1409867ad:
                  local_1d0 = DAT_14c948620;
                  local_1d8 = DAT_14c948618;
                }
                else {
                  if ((iVar27 < 2) && (*(int *)(lVar28 + 0x34 + lVar21) < 1)) {
                    lVar15 = local_220 + lVar21;
                  }
                  else {
                    lVar15 = *(longlong *)(lVar28 + 0x28 + lVar21);
                  }
                  if ((iVar27 == 1) || (iVar27 < 6)) goto LAB_1409867ad;
                  local_1d0 = *(uint *)(lVar15 + 0x44);
                  local_1d8 = *(undefined8 **)(lVar15 + 0x3c);
                }
                if (((*(int *)(param_3 + 0x10) == 0) ||
                    (iVar8 = *(int *)(param_3 + 0x14), iVar8 == 0)) ||
                   (*(int *)(param_3 + 0x10) == DAT_14c948000)) {
                  local_1f0 = DAT_14c948620;
                  local_1e8 = DAT_14c948618;
                  local_1f8 = DAT_14c948618;
                  local_1e0 = local_1f0;
                }
                else {
                  pcVar9 = param_3 + 0x18;
                  if (0 < *(int *)(param_3 + 0x34)) {
                    pcVar9 = *(char **)(param_3 + 0x28);
                  }
                  if (1 < iVar8) {
                    pcVar9 = *(char **)(param_3 + 0x28);
                  }
                  if ((iVar8 == 1) || (iVar8 < 4)) {
                    local_1e0 = DAT_14c948620;
                    local_1e8 = DAT_14c948618;
                  }
                  else {
                    local_1e0 = *(uint *)(pcVar9 + 0x2c);
                    local_1e8 = *(undefined8 **)(pcVar9 + 0x24);
                  }
                  pcVar9 = param_3 + 0x18;
                  if (0 < *(int *)(param_3 + 0x34)) {
                    pcVar9 = *(char **)(param_3 + 0x28);
                  }
                  if (1 < iVar8) {
                    pcVar9 = *(char **)(param_3 + 0x28);
                  }
                  if ((iVar8 == 1) || (iVar8 < 3)) {
                    local_1f0 = DAT_14c948620;
                    local_1f8 = DAT_14c948618;
                  }
                  else {
                    local_1f0 = *(uint *)(pcVar9 + 0x20);
                    local_1f8 = *(undefined8 **)(pcVar9 + 0x18);
                  }
                }
                local_258 = &local_1c8;
                local_260 = &local_1d8;
                local_268 = CONCAT71(local_268._1_7_,(undefined1)local_230);
                FUN_143d4555e(param_1,&local_1f8,&local_1e8,local_240);
                if (local_a0 != 0) {
                  if (local_a8 == (undefined8 *)0x0) goto LAB_14098678e;
                  (**(code **)*local_a8)(local_a8,0);
                  FUN_1446efa72(&local_a8,0,0,0x10);
                  local_a0 = 0;
                }
                if (local_a8 != (undefined8 *)0x0) {
                  FUN_1400020a8();
                }
              }
LAB_14098678e:
              lVar21 = lVar21 + 0x60;
            } while ((longlong)(int)lVar11 * 0x60 != lVar21);
            plVar13 = param_4[0xb];
            uVar7 = (undefined4)plVar13[1];
            lVar28 = *plVar13;
          }
          lVar11 = local_240;
          FUN_1405dc41e(lVar28,uVar7);
          *(undefined4 *)(plVar13 + 1) = 0;
          if (*(int *)((longlong)plVar13 + 0xc) != 0) {
            FUN_141882e20(plVar13,0);
          }
          if (*(int *)(lVar11 + 0x38) != 0) {
            plVar13 = param_4[0xb];
            cVar5 = FUN_1401144ce(param_3);
            if (((plVar13 != (longlong *)0x0) && (cVar5 != '\0')) &&
               ((longlong)*(int *)(lVar11 + 0x38) != 0)) {
              local_228 = *(ulonglong *)(lVar11 + 0x30);
              local_230 = (longlong)*(int *)(lVar11 + 0x38) << 2;
              lVar28 = 0;
              do {
                if (((*(int *)(param_3 + 0x10) == 0) ||
                    (iVar8 = *(int *)(param_3 + 0x14), iVar8 == 0)) ||
                   ((*(int *)(param_3 + 0x10) == DAT_14c948000 || ((iVar8 == 1 || (iVar8 < 2)))))) {
                  local_b0 = DAT_14c948620;
                  local_b8 = DAT_14c948618;
                }
                else {
                  local_b0 = *(uint *)(*(longlong *)(param_3 + 0x28) + 0x14);
                  local_b8 = *(undefined8 **)(*(longlong *)(param_3 + 0x28) + 0xc);
                }
                FUN_14013e9cc(&local_a8,
                              (longlong)*(int *)(local_228 + lVar28) * 0x68 +
                              *(longlong *)(param_1 + 0x40),&local_b8);
                iVar8 = (int)plVar13[1];
                *(uint *)(plVar13 + 1) = iVar8 + 1U;
                if (*(uint *)((longlong)plVar13 + 0xc) < iVar8 + 1U) {
                  FUN_141882f02(plVar13,iVar8);
                }
                lVar11 = *plVar13;
                lVar21 = (longlong)iVar8 * 0x60;
                FUN_14014e938(lVar11 + lVar21,&local_a8);
                puVar22 = (undefined8 *)(lVar11 + 0x38 + lVar21);
                *puVar22 = local_70;
                puVar22[1] = uStack_68;
                *(undefined8 *)(lVar11 + 0x58 + lVar21) = local_50;
                puVar2 = (undefined4 *)(lVar11 + 0x48 + lVar21);
                *puVar2 = local_60;
                puVar2[1] = uStack_5c;
                puVar2[2] = uStack_58;
                puVar2[3] = uStack_54;
                if (local_80 != 0) {
                  FUN_1400020a8();
                }
                lVar28 = lVar28 + 4;
                param_4 = local_218;
                lVar11 = local_240;
              } while (local_230 != lVar28);
            }
          }
          FUN_1409838b8(&local_1c8);
          param_2 = local_200;
        }
        *(undefined4 *)((longlong)param_4 + 0x94) = 1;
        FUN_1410b58da(param_4 + 0xc,lVar11 + 0x80);
        if (((byte)local_244 != '\0') &&
           (plVar13 = param_4[4], plVar13 != (longlong *)0x0 && *(int *)(param_4 + 5) != 0)) {
          (**(code **)(*plVar13 + 0x38))(plVar13,param_2);
          goto LAB_140986a26;
        }
        goto LAB_140986a1f;
      }
      if (*param_3 == '\x01') {
        piVar20 = (int *)&DAT_14c948620;
        piVar25 = (int *)&DAT_14c948618;
        if (((iVar8 != 0) && (1 < *(int *)(param_3 + 0x14))) && (iVar8 != DAT_14c948000)) {
          piVar25 = (int *)(*(longlong *)(param_3 + 0x28) + 0xc);
          piVar20 = (int *)(*(longlong *)(param_3 + 0x28) + 0x14);
        }
        if ((*piVar25 == (int)DAT_14cb7bb98) && (*piVar20 == DAT_14cb7bba0)) goto LAB_140985946;
      }
    }
    *(undefined4 *)((longlong)param_4 + 0x94) = 5;
  }
LAB_140986a1f:
  *param_2 = 0;
LAB_140986a26:
  if ((local_48 ^ (ulonglong)auStack_288) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 140986d08 FUN_140986d08 body=539 status=ok
// SIG undefined FUN_140986d08(void)

void FUN_140986d08(longlong *param_1)

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
        uVar13 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar11 + lVar10);
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
            if (iVar2 - lVar11 == lVar10) goto LAB_140986ede;
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
LAB_140986ede:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140986f24 FUN_140986f24 body=2147 status=ok
// SIG undefined FUN_140986f24(void)

undefined8 * FUN_140986f24(longlong *param_1,undefined8 *param_2,char *param_3,char *param_4)

{
  byte bVar1;
  undefined8 uVar2;
  bool bVar3;
  ulonglong *puVar4;
  uint *puVar5;
  char cVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  char *pcVar12;
  longlong *plVar13;
  undefined8 *puVar14;
  int iVar15;
  longlong lVar16;
  longlong lVar17;
  longlong *plVar18;
  ulonglong uVar19;
  longlong lVar20;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  char local_a9;
  longlong *local_a8;
  char *local_a0;
  char *local_98;
  longlong *local_90;
  ulonglong local_88;
  uint local_80;
  ulonglong local_78;
  uint local_70;
  ulonglong *local_68;
  int local_5c;
  longlong *local_58;
  int local_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  param_4[0x94] = '\0';
  param_4[0x95] = '\0';
  param_4[0x96] = '\0';
  param_4[0x97] = '\0';
  if (((((*(int *)((longlong)param_1 + 0xc) == 0) ||
        (uVar11 = *(uint *)(param_1 + 1), (int)uVar11 < 0)) || (DAT_14c9647dc <= (int)uVar11)) ||
      ((plVar13 = (longlong *)
                  ((ulonglong)((uVar11 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8)),
       plVar13 == (longlong *)0x0 || ((int)plVar13[2] != *(int *)((longlong)param_1 + 0xc))))) ||
     ((*(uint *)(plVar13 + 1) & 0x10200000) != 0)) {
LAB_140986fd3:
    if ((*param_3 == '\a') && (cVar6 = FUN_140114204(param_3), cVar6 != '\0')) {
      if (((*(int *)(param_3 + 0x10) == 0) || (iVar8 = *(int *)(param_3 + 0x14), iVar8 == 0)) ||
         (*(int *)(param_3 + 0x10) == DAT_14c948000)) {
        local_70 = DAT_14c948620;
        local_78 = DAT_14c948618;
LAB_14098760d:
        local_80 = DAT_14c948620;
        local_88 = DAT_14c948618;
      }
      else {
        pcVar12 = param_3 + 0x18;
        if (0 < *(int *)(param_3 + 0x34)) {
          pcVar12 = *(char **)(param_3 + 0x28);
        }
        if (1 < iVar8) {
          pcVar12 = *(char **)(param_3 + 0x28);
        }
        if ((iVar8 == 1) || (iVar8 < 3)) {
          local_70 = DAT_14c948620;
          local_78 = DAT_14c948618;
        }
        else {
          local_70 = *(uint *)(pcVar12 + 0x20);
          local_78 = *(ulonglong *)(pcVar12 + 0x18);
        }
        if ((iVar8 == 1) || (iVar8 < 2)) goto LAB_14098760d;
        local_80 = *(uint *)(*(longlong *)(param_3 + 0x28) + 0x14);
        local_88 = *(ulonglong *)(*(longlong *)(param_3 + 0x28) + 0xc);
      }
      plVar13 = param_1 + 5;
      uVar19 = local_88 & 0xffffffff;
      local_98 = param_3;
      if (local_80 != 0) {
        uVar11 = FUN_144a78877(uVar19,local_80);
        uVar19 = (ulonglong)uVar11;
      }
      iVar8 = FUN_140987788(plVar13,uVar19,&local_88);
      lVar20 = 0;
      if (iVar8 != -1) {
        lVar20 = (longlong)iVar8 * 0x68 + *plVar13;
      }
      cVar6 = lVar20 == 0;
      if ((bool)cVar6) {
        local_68 = &local_88;
        FUN_140987d30(plVar13,&local_58);
        puVar5 = (uint *)CONCAT44(uStack_4c,local_50);
        FUN_140987962(&local_68,puVar5);
        puVar5[0x18] = 0xffffffff;
        local_5c = (int)local_58;
        if (puVar5[2] == 0) {
          uVar11 = *puVar5;
        }
        else {
          uVar11 = FUN_144a78877(*puVar5,puVar5[2]);
        }
        cVar7 = FUN_140987848(plVar13,uVar11,puVar5,&local_5c);
        lVar20 = (longlong)local_5c;
        if (cVar7 == '\0') {
          uVar9 = (int)param_1[6] - *(int *)((longlong)param_1 + 0x5c);
          if (uVar9 < 4) {
            iVar8 = 1;
          }
          else {
            uVar19 = (ulonglong)(uVar9 & 0xfffffffe) + 0xf;
            lVar16 = 0x3f;
            if (uVar19 != 0) {
              for (; uVar19 >> lVar16 == 0; lVar16 = lVar16 + -1) {
              }
            }
            iVar8 = 1 << ((byte)lVar16 & 0x1f);
          }
          if (((int)uVar9 < 1) || (iVar8 <= (int)param_1[0xe])) {
            uVar11 = (int)param_1[0xe] - 1U & uVar11;
            puVar5[0x19] = uVar11;
            plVar18 = (longlong *)param_1[0xd];
            if ((longlong *)param_1[0xd] == (longlong *)0x0) {
              plVar18 = param_1 + 0xc;
            }
            puVar5[0x18] = *(uint *)((longlong)plVar18 +
                                    ((longlong)(int)param_1[0xe] - 1U & (longlong)(int)uVar11) * 4);
            plVar18 = (longlong *)param_1[0xd];
            if ((longlong *)param_1[0xd] == (longlong *)0x0) {
              plVar18 = param_1 + 0xc;
            }
            *(int *)((longlong)plVar18 +
                    ((longlong)(int)param_1[0xe] - 1U & (longlong)(int)uVar11) * 4) = local_5c;
          }
          else {
            *(int *)(param_1 + 0xe) = iVar8;
            FUN_1409881c0(plVar13);
          }
        }
        lVar20 = *plVar13 + lVar20 * 0x68;
      }
      plVar13 = (longlong *)(lVar20 + 0x10);
      if (local_70 != 0) {
        FUN_144a78877(local_78 & 0xffffffff,local_70);
      }
      iVar8 = FUN_1409877e8(plVar13);
      if (iVar8 == -1) {
LAB_1409873ba:
        FUN_140987b58(plVar13,&local_58);
        puVar4 = (ulonglong *)CONCAT44(uStack_4c,local_50);
        *(uint *)(puVar4 + 1) = local_70;
        *puVar4 = local_78;
        *(undefined1 *)(puVar4 + 2) = 0;
        puVar4[3] = 0;
        puVar4[4] = 0;
        puVar4[5] = 0;
        FUN_1410b51e5(0,0);
        *(uint *)(puVar4 + 6) = 0xffffffff;
        local_68 = (ulonglong *)CONCAT44(local_68._4_4_,(int)local_58);
        if ((uint)puVar4[1] == 0) {
          uVar11 = (uint)*puVar4;
        }
        else {
          uVar11 = FUN_144a78877((uint)*puVar4,(uint)puVar4[1]);
        }
        cVar6 = FUN_1409878ce(plVar13,uVar11,puVar4,&local_68);
        lVar16 = (longlong)(int)local_68;
        if (cVar6 == '\0') {
          uVar9 = *(int *)(lVar20 + 0x18) - *(int *)(lVar20 + 0x44);
          iVar8 = (int)&DAT_00000001;
          if (3 < uVar9) {
            uVar19 = (ulonglong)(uVar9 & 0xfffffffe) + 0xf;
            lVar17 = 0x3f;
            if (uVar19 != 0) {
              for (; uVar19 >> lVar17 == 0; lVar17 = lVar17 + -1) {
              }
            }
            iVar8 = 1 << ((byte)lVar17 & 0x1f);
          }
          if (((int)uVar9 < 1) || (iVar8 <= *(int *)(lVar20 + 0x58))) {
            uVar11 = *(int *)(lVar20 + 0x58) - 1U & uVar11;
            *(uint *)((longlong)puVar4 + 0x34) = uVar11;
            lVar17 = *(longlong *)(lVar20 + 0x50);
            if (*(longlong *)(lVar20 + 0x50) == 0) {
              lVar17 = lVar20 + 0x48;
            }
            *(uint *)(puVar4 + 6) =
                 *(uint *)(lVar17 + ((longlong)*(int *)(lVar20 + 0x58) - 1U & (longlong)(int)uVar11)
                                    * 4);
            lVar17 = *(longlong *)(lVar20 + 0x50);
            if (*(longlong *)(lVar20 + 0x50) == 0) {
              lVar17 = lVar20 + 0x48;
            }
            *(int *)(lVar17 + ((longlong)*(int *)(lVar20 + 0x58) - 1U & (longlong)(int)uVar11) * 4)
                 = (int)local_68;
          }
          else {
            *(int *)(lVar20 + 0x58) = iVar8;
            FUN_140987f12(plVar13);
          }
        }
        lVar20 = *plVar13 + lVar16 * 0x38;
        cVar6 = true;
      }
      else {
        if (*plVar13 + (longlong)iVar8 * 0x38 == 0) goto LAB_1409873ba;
        lVar20 = *plVar13 + (longlong)iVar8 * 0x38;
      }
      if ((byte *)(lVar20 + 0x10) == (byte *)0x0) goto LAB_140987697;
      if (((*(int *)(param_4 + 0x28) != 0) && (*(longlong **)(param_4 + 0x20) != (longlong *)0x0))
         && (cVar7 = (**(code **)(**(longlong **)(param_4 + 0x20) + 0x30))(), cVar7 != '\0')) {
        local_58 = (longlong *)0x0;
        local_50 = 0;
        FUN_1401aa3da(&local_58,param_4 + 0x20);
        if (((local_50 != 0) && (local_58 != (longlong *)0x0)) &&
           (cVar7 = (**(code **)(*local_58 + 0x30))(), cVar7 != '\0')) {
          plVar13 = (longlong *)(lVar20 + 0x18);
          uVar19 = (ulonglong)*(int *)(lVar20 + 0x20);
          if (0 < (longlong)uVar19) {
            lVar16 = uVar19 * 0x10 + -8;
            do {
              if (((*(int *)(*plVar13 + lVar16) == 0) ||
                  (plVar18 = *(longlong **)(*plVar13 + -8 + lVar16), plVar18 == (longlong *)0x0)) ||
                 (cVar7 = (**(code **)(*plVar18 + 0x30))(), cVar7 == '\0')) {
                FUN_140e50de8(plVar13,(int)uVar19 + -1);
                FUN_140e50d5e(plVar13);
              }
              lVar16 = lVar16 + -0x10;
              bVar3 = 1 < uVar19;
              uVar19 = uVar19 - 1;
            } while (bVar3);
          }
          local_a9 = cVar6;
          local_a8 = param_1;
          local_a0 = param_4;
          local_90 = plVar13;
          if ((local_50 == 0) || (local_58 == (longlong *)0x0)) {
            local_88 = 0;
          }
          else {
            (**(code **)(*local_58 + 0x38))(local_58,&local_88);
          }
          uVar19 = local_88;
          iVar8 = *(int *)(lVar20 + 0x20);
          if ((longlong)iVar8 == 0) {
            iVar8 = 0;
          }
          else {
            lVar16 = *(longlong *)(lVar20 + 0x18);
            lVar17 = 0;
            iVar15 = 0;
            do {
              if (*(int *)(lVar16 + 8 + lVar17) == 0) {
                uVar10 = 0;
              }
              else {
                plVar13 = *(longlong **)(lVar16 + lVar17);
                uVar10 = 0;
                if (plVar13 != (longlong *)0x0) {
                  (**(code **)(*plVar13 + 0x38))(plVar13,&local_78);
                  uVar10 = local_78;
                }
              }
              if (uVar10 == uVar19) {
                iVar8 = *(int *)(lVar20 + 0x20);
                if ((iVar15 < 0) ||
                   (param_4 = local_a0, param_1 = local_a8, cVar6 = local_a9, iVar8 <= iVar15))
                goto LAB_140987281;
                goto LAB_1409872d3;
              }
              iVar15 = iVar15 + 1;
              lVar17 = lVar17 + 0x10;
            } while ((longlong)iVar8 * 0x10 != lVar17);
            iVar8 = *(int *)(lVar20 + 0x20);
          }
LAB_140987281:
          plVar13 = local_90;
          param_4 = local_a0;
          param_1 = local_a8;
          cVar6 = local_a9;
          *(uint *)(lVar20 + 0x20) = iVar8 + 1U;
          if (*(uint *)(lVar20 + 0x24) < iVar8 + 1U) {
            FUN_140987a4a(local_90,iVar8);
          }
          lVar16 = *plVar13;
          lVar17 = (longlong)iVar8 * 0x10;
          *(undefined8 *)(lVar16 + lVar17) = 0;
          *(undefined4 *)(lVar16 + 8 + lVar17) = 0;
          FUN_1401aa3da(lVar16 + lVar17,&local_58);
        }
LAB_1409872d3:
        if (local_50 != 0) {
          if (local_58 == (longlong *)0x0) goto LAB_1409872e4;
          (**(code **)*local_58)(local_58,0);
          FUN_1446efa72(&local_58,0,0,0x10);
          local_50 = 0;
        }
        if (local_58 != (longlong *)0x0) {
          FUN_1400020a8();
        }
      }
LAB_1409872e4:
      if (cVar6 != '\0') {
        if (*param_4 == '\x01') {
          if (*(int *)(param_4 + 0xc) != 0) {
LAB_1409875b0:
            local_b8 = 0;
            (**(code **)(*param_1 + 0x58))(param_1,local_98,1,0);
          }
        }
        else {
          cVar6 = FUN_140321d1a(param_4);
          if (cVar6 != '\0') goto LAB_1409875b0;
        }
      }
      bVar1 = *(byte *)(lVar20 + 0x10);
      puVar14 = &DAT_14cb7c580;
      if (bVar1 != 0) {
        puVar14 = &DAT_14cb7c588;
      }
      uVar2 = *puVar14;
      param_4[0x10] = '\x01';
      *(undefined8 *)(param_4 + 0x14) = uVar2;
      *(uint *)(param_4 + 0x1c) = (uint)bVar1;
      param_4[0x94] = '\x01';
      param_4[0x95] = '\0';
      param_4[0x96] = '\0';
      param_4[0x97] = '\0';
      if ((*(int *)(param_4 + 0x28) != 0) &&
         (plVar13 = *(longlong **)(param_4 + 0x20), plVar13 != (longlong *)0x0)) {
        (**(code **)(*plVar13 + 0x38))(plVar13,param_2);
        goto LAB_14098733e;
      }
    }
    else {
      param_4[0x94] = '\x04';
      param_4[0x95] = '\0';
      param_4[0x96] = '\0';
      param_4[0x97] = '\0';
    }
  }
  else {
    if ((*(uint *)(plVar13 + 1) & 0x10200000) == 0) {
      lVar20 = *plVar13;
    }
    else {
      lVar20 = 0;
    }
    if (((*(longlong *)(lVar20 + 0x30) == 0) ||
        (lVar20 = *(longlong *)(*(longlong *)(lVar20 + 0x30) + 0x360), lVar20 == 0)) ||
       (*(char *)(lVar20 + 0x152) != '\x05')) goto LAB_140986fd3;
LAB_140987697:
    param_4[0x94] = '\a';
    param_4[0x95] = '\0';
    param_4[0x96] = '\0';
    param_4[0x97] = '\0';
  }
  *param_2 = 0;
LAB_14098733e:
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140987788 FUN_140987788 body=95 status=ok
// SIG undefined FUN_140987788(void)

int FUN_140987788(longlong *param_1,uint param_2,int *param_3)

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
        lVar4 = (longlong)iVar1 * 0x68;
        if ((*(int *)(lVar2 + lVar4) == *param_3) && (*(int *)(lVar2 + lVar4 + 8) == param_3[2])) {
          return iVar1;
        }
        iVar1 = *(int *)(lVar2 + 0x60 + lVar4);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 1409877e8 FUN_1409877e8 body=95 status=ok
// SIG undefined FUN_1409877e8(void)

int FUN_1409877e8(longlong *param_1,uint param_2,int *param_3)

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
        lVar4 = (longlong)iVar1 * 0x38;
        if ((*(int *)(lVar2 + lVar4) == *param_3) && (*(int *)(lVar2 + lVar4 + 8) == param_3[2])) {
          return iVar1;
        }
        iVar1 = *(int *)(lVar2 + 0x30 + lVar4);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 140987848 FUN_140987848 body=134 status=ok
// SIG undefined FUN_140987848(void)

undefined8 FUN_140987848(longlong *param_1,undefined8 param_2,void *param_3,int *param_4)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar2 = FUN_140987788(), iVar2 != -1)) {
    lVar1 = *param_1;
    lVar3 = (longlong)iVar2 * 0x68;
    *(undefined4 *)(lVar1 + 0x58 + lVar3) = 0;
    if (*(longlong *)(lVar1 + 0x50 + lVar3) != 0) {
      FUN_1400020a8();
    }
    FUN_1410b4f94(lVar1 + lVar3 + 0x10);
    memmove((void *)(lVar1 + lVar3),param_3,0x60);
    FUN_1488395c4(param_1,*param_4);
    *param_4 = iVar2;
    return 1;
  }
  return 0;
}



// FUNCTION 1409878ce FUN_1409878ce body=147 status=ok
// SIG undefined FUN_1409878ce(void)

undefined8 FUN_1409878ce(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
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
  undefined4 uVar13;
  int iVar14;
  longlong lVar15;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar14 = FUN_1409877e8(), iVar14 != -1)) {
    lVar2 = *param_1;
    lVar15 = (longlong)iVar14 * 0x38;
    puVar1 = (undefined4 *)(lVar2 + lVar15);
    FUN_1410b51e5(*(undefined8 *)(lVar2 + 0x18 + lVar15),*(undefined4 *)(lVar2 + 0x20 + lVar15));
    if (*(longlong *)(lVar2 + 0x18 + lVar15) != 0) {
      FUN_1400020a8();
    }
    uVar3 = *param_3;
    uVar4 = param_3[1];
    uVar5 = param_3[2];
    uVar6 = param_3[3];
    uVar7 = param_3[4];
    uVar8 = param_3[5];
    uVar9 = param_3[6];
    uVar10 = param_3[7];
    uVar11 = param_3[9];
    uVar12 = param_3[10];
    uVar13 = param_3[0xb];
    puVar1[8] = param_3[8];
    puVar1[9] = uVar11;
    puVar1[10] = uVar12;
    puVar1[0xb] = uVar13;
    puVar1[4] = uVar7;
    puVar1[5] = uVar8;
    puVar1[6] = uVar9;
    puVar1[7] = uVar10;
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    FUN_148839638(param_1,*param_4);
    *param_4 = iVar14;
    return 1;
  }
  return 0;
}



// FUNCTION 140987962 FUN_140987962 body=230 status=ok
// SIG undefined FUN_140987962(void)

undefined8 * FUN_140987962(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uStack_30 = 0;
  local_58 = 0;
  uStack_50 = 0;
  uStack_40 = 0x8000000000;
  puVar1 = (undefined8 *)*param_1;
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(puVar1 + 1);
  *param_2 = *puVar1;
  param_2[6] = 0;
  *(undefined4 *)(param_2 + 7) = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *(undefined8 *)((longlong)param_2 + 0x3c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_2 + 0x44) = 0;
  if (param_2 + 2 != &local_68) {
    *(undefined4 *)((longlong)param_2 + 0x1c) = 0;
    *(undefined4 *)(param_2 + 4) = 0;
    *(undefined4 *)((longlong)param_2 + 0x24) = 0;
    *(undefined4 *)(param_2 + 5) = 0;
    *(undefined4 *)((longlong)param_2 + 0x2c) = 0;
    *(undefined4 *)((longlong)param_2 + 0x3c) = 0x80;
    uStack_40 = 0;
    *(undefined4 *)((longlong)param_2 + 0x44) = 0;
  }
  uStack_60 = 0;
  local_38 = 0xffffffff;
  local_48 = 0;
  local_68 = 0;
  *(undefined4 *)(param_2 + 9) = 0;
  param_2[10] = 0;
  local_28 = 0;
  *(undefined4 *)(param_2 + 0xb) = 0;
  uStack_20 = 0;
  FUN_1410b4f94();
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140987a4a FUN_140987a4a body=269 status=ok
// SIG undefined FUN_140987a4a(void)

void FUN_140987a4a(longlong param_1,int param_2)

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



// FUNCTION 140987b58 FUN_140987b58 body=472 status=ok
// SIG undefined FUN_140987b58(void)

int * FUN_140987b58(longlong *param_1,int *param_2)

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
      FUN_1447030e2(param_1,iVar11);
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
    iVar6 = *(int *)(*param_1 + 4 + lVar3 * 0x38);
    *(int *)(param_1 + 6) = iVar6;
    iVar2 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar2;
    if (iVar2 != 0) {
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
  *(longlong *)(param_2 + 2) = lVar3 * 0x38 + *param_1;
  return param_2;
}



// FUNCTION 140987d30 FUN_140987d30 body=481 status=ok
// SIG undefined FUN_140987d30(void)

int * FUN_140987d30(longlong *param_1,int *param_2)

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
      FUN_1406a7630(param_1,iVar11);
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
    iVar6 = *(int *)(*param_1 + 4 + lVar3 * 0x68);
    *(int *)(param_1 + 6) = iVar6;
    iVar2 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar6 * 0x68) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar3 * 0x68 + *param_1;
  return param_2;
}



// FUNCTION 140987f12 FUN_140987f12 body=685 status=ok
// SIG undefined FUN_140987f12(void)

void FUN_140987f12(longlong *param_1)

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
    if ((int)uVar15 < 1) goto LAB_140987f78;
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
LAB_140987f78:
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
      iVar12 = iVar4 + 0x1e;
      if (-1 < iVar4 + -1) {
        iVar12 = iVar4 + -1;
      }
      uVar16 = 0;
      uVar14 = (ulonglong)(uint)(iVar12 >> 5);
      if (iVar12 >> 5 < 1) {
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
      piVar2 = (int *)(*param_1 + (longlong)iVar12 * 0x38);
      iVar4 = *(int *)(*param_1 + 8 + (longlong)iVar12 * 0x38);
      if (iVar4 == 0) {
        iVar4 = *piVar2;
      }
      else {
        iVar4 = FUN_144a78877(*piVar2,iVar4);
      }
      uVar5 = (longlong)iVar4 & (longlong)(int)param_1[9] - 1U;
      iVar4 = (int)uVar5;
      piVar2[0xd] = iVar4;
      plVar9 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar9 = plVar1;
      }
      piVar2[0xc] = *(int *)((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & uVar5) * 4);
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



// FUNCTION 1409881c0 FUN_1409881c0 body=477 status=ok
// SIG undefined FUN_1409881c0(void)

void FUN_1409881c0(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  undefined8 uVar4;
  int iVar5;
  ulonglong uVar6;
  longlong *plVar7;
  uint uVar8;
  int iVar9;
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
    uVar8 = 0;
    FUN_144a1cbf0(plVar1,0,uVar3,4);
    if (0 < (int)uVar3) {
      do {
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
             0xffffffff;
        uVar8 = uVar8 + 1;
      } while (uVar3 != uVar8);
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
      iVar9 = local_68._4_4_;
      local_68 = uVar4;
      do {
        piVar2 = (int *)(*local_80 + (longlong)iVar9 * 0x68);
        iVar5 = *(int *)(*local_80 + 8 + (longlong)iVar9 * 0x68);
        if (iVar5 == 0) {
          iVar5 = *piVar2;
        }
        else {
          iVar5 = FUN_144a78877(*piVar2,iVar5);
        }
        uVar6 = (longlong)iVar5 & (longlong)(int)param_1[9] - 1U;
        iVar5 = (int)uVar6;
        piVar2[0x19] = iVar5;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        piVar2[0x18] = *(int *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar6) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar5 & (longlong)(int)param_1[9] - 1U) * 4) = iVar9;
        local_68 = CONCAT44(local_68._4_4_,(uint)local_68 & ~local_78._4_4_);
        FUN_1449c0562(&local_78);
        iVar9 = local_68._4_4_;
        uVar4 = local_68;
      } while (local_68._4_4_ < (int)local_70[3]);
    }
  }
  local_68 = uVar4;
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14098839e FUN_14098839e body=664 status=ok
// SIG undefined FUN_14098839e(void)

ulonglong FUN_14098839e(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  longlong lVar2;
  undefined8 unaff_RDI;
  ulonglong uVar3;
  ulonglong uVar5;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  undefined7 uVar4;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar4 = (undefined7)((ulonglong)unaff_RDI >> 8);
  uVar3 = CONCAT71(uVar4,1);
  local_30 = param_3;
  cVar1 = FUN_140988638(&local_30,L"FLUSHPERSISTENTDEBUGLINES",1);
  if (cVar1 != '\0') {
    FUN_14347d00c(*(undefined8 *)(param_1 + 0x48));
    goto LAB_1409884f0;
  }
  cVar1 = FUN_140988638(&local_30,L"LOGACTORCOUNTS",1);
  if (cVar1 == '\0') {
    uVar3 = CONCAT71(uVar4,1);
    cVar1 = FUN_140988638(&local_30,L"DEMOREC",1);
    if (cVar1 != '\0') {
      FUN_147daa95a();
      goto LAB_1409884f0;
    }
    uVar3 = CONCAT71(uVar4,1);
    cVar1 = FUN_140988638(&local_30,L"DEMOPLAY",1);
    if (cVar1 != '\0') {
      FUN_143788f8c(param_1,local_30);
      goto LAB_1409884f0;
    }
    uVar3 = CONCAT71(uVar4,1);
    cVar1 = FUN_140988638(&local_30,L"DEMOSTOP",1);
    if (cVar1 != '\0') {
      if ((param_2 != 0) && (*(longlong **)(param_2 + 0x1f0) != (longlong *)0x0)) {
        (**(code **)(**(longlong **)(param_2 + 0x1f0) + 0x368))();
      }
      goto LAB_1409884f0;
    }
    uVar3 = CONCAT71(uVar4,1);
    cVar1 = FUN_140988638(&local_30,L"DEMOSCRUB",1);
    if (cVar1 != '\0') {
      FUN_147daa60a(param_1,local_30,param_4);
      goto LAB_1409884f0;
    }
    uVar3 = CONCAT71(uVar4,1);
    cVar1 = FUN_140988638(&local_30,L"DEMOPAUSE",1);
    if (cVar1 != '\0') {
      FUN_147daa7c4(param_1);
      goto LAB_1409884f0;
    }
    uVar3 = CONCAT71(uVar4,1);
    cVar1 = FUN_140988638(&local_30,L"DEMOSPEED",1);
    if (cVar1 != '\0') {
      FUN_147daa862(param_1,local_30,param_4);
      goto LAB_1409884f0;
    }
    uVar3 = CONCAT71(uVar4,1);
    cVar1 = FUN_140988638(&local_30,L"DEMOCHECKPOINT",1);
    if (cVar1 != '\0') {
      FUN_147daa91a(param_1);
      goto LAB_1409884f0;
    }
    cVar1 = FUN_140988722(local_30,param_4,param_2);
    uVar3 = 0;
    if (cVar1 == '\0') goto LAB_1409884f0;
    uVar5 = uVar3;
    if (0 < (longlong)*(int *)(param_2 + 0x198)) {
      lVar2 = 0;
      uVar3 = 0;
      do {
        uVar3 = (ulonglong)
                (uint)((int)uVar3 +
                      *(int *)(*(longlong *)(*(longlong *)(param_2 + 400) + lVar2 * 8) + 0xa8));
        lVar2 = lVar2 + 1;
        uVar5 = uVar3;
      } while (*(int *)(param_2 + 0x198) != lVar2);
    }
  }
  else if ((longlong)*(int *)(param_2 + 0x198) < 1) {
    uVar5 = 0;
  }
  else {
    lVar2 = 0;
    uVar5 = 0;
    do {
      uVar5 = (ulonglong)
              (uint)((int)uVar5 +
                    *(int *)(*(longlong *)(*(longlong *)(param_2 + 400) + lVar2 * 8) + 0xa8));
      lVar2 = lVar2 + 1;
    } while (*(int *)(param_2 + 0x198) != lVar2);
  }
  FUN_140047918(param_4,L"Num Actors: %i",uVar5);
  uVar3 = CONCAT71((int7)(uVar3 >> 8),1);
LAB_1409884f0:
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 140988638 FUN_140988638 body=233 status=ok
// SIG undefined FUN_140988638(void)

undefined8 FUN_140988638(longlong *param_1,wchar_t *param_2)

{
  int iVar1;
  size_t sVar2;
  longlong lVar3;
  undefined8 uVar4;
  short *psVar5;
  longlong lVar6;
  ushort *puVar7;
  ulonglong uVar8;
  ushort uVar9;
  ushort uVar10;
  ulonglong uVar11;
  longlong lVar12;
  
  puVar7 = (ushort *)*param_1;
  while( true ) {
    uVar9 = *puVar7;
    if ((uVar9 != 0x20) && (uVar9 != 9)) break;
    puVar7 = puVar7 + 1;
    *param_1 = (longlong)puVar7;
  }
  sVar2 = wcslen(param_2);
  lVar12 = (longlong)(int)sVar2;
  if ((sVar2 & 0xffffffff) != 0) {
    lVar3 = 2;
    lVar6 = lVar12;
    while( true ) {
      uVar8 = (ulonglong)uVar9;
      uVar10 = *(ushort *)((longlong)param_2 + lVar3 + -2);
      if (uVar9 != uVar10) break;
      if (uVar9 == 0) goto LAB_1409886cc;
LAB_140988693:
      lVar6 = lVar6 + -1;
      if (lVar6 == 0) goto LAB_1409886cc;
      uVar9 = *(ushort *)((longlong)puVar7 + lVar3);
      lVar3 = lVar3 + 2;
    }
    if ((uVar10 | uVar9) < 0x80) {
      uVar9 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
      uVar11 = (ulonglong)uVar10;
      uVar10 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
      if ((&DAT_149e05da0)[uVar8] == (&DAT_149e05da0)[uVar11]) goto LAB_140988693;
    }
    if (uVar9 != uVar10) goto LAB_1409886ec;
  }
LAB_1409886cc:
  *param_1 = (longlong)(puVar7 + lVar12);
  iVar1 = iswalnum(puVar7[lVar12]);
  psVar5 = (short *)*param_1;
  if (iVar1 == 0) {
    while( true ) {
      if ((*psVar5 != 0x20) && (*psVar5 != 9)) break;
      *param_1 = (longlong)(psVar5 + 1);
      psVar5 = psVar5 + 1;
    }
    FUN_14681c27a(&DAT_14c868808,param_2);
    uVar4 = 1;
  }
  else {
    *param_1 = (longlong)((short *)*param_1 + -lVar12);
LAB_1409886ec:
    uVar4 = 0;
  }
  return uVar4;
}



// FUNCTION 140988722 FUN_140988722 body=163 status=ok
// SIG undefined FUN_140988722(void)

ulonglong FUN_140988722(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 unaff_RBX;
  ulonglong uVar4;
  undefined1 auStack_58 [44];
  undefined4 local_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar4 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
  local_28 = param_1;
  cVar1 = FUN_140988638(&local_28,L"ChaosGeometryMemory",1);
  if (cVar1 == '\0') {
    local_2c = 0;
    uVar2 = FUN_1409887c6(local_28,L"ChaosRewind");
    uVar4 = (ulonglong)uVar2;
    if ((char)uVar2 != '\0') {
      FUN_147c69bd8(*(undefined8 *)(param_3 + 0x260),local_2c);
    }
  }
  else {
    uVar3 = FUN_146e258ac();
    FUN_146e259ae(uVar3,param_2);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar4 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1409887c6 FUN_1409887c6 body=129 status=ok
// SIG undefined FUN_1409887c6(void)

undefined4 FUN_1409887c6(undefined8 param_1,undefined8 param_2,ulong *param_3)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined1 auStack_258 [32];
  undefined1 local_238;
  undefined8 local_230;
  wchar_t *local_220;
  wchar_t local_218 [256];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_258;
  local_230 = 0;
  local_238 = 1;
  uVar1 = FUN_140751ea8(param_1,param_2,local_218,0x100);
  if ((char)uVar1 != '\0') {
    uVar2 = wcstoul(local_218,&local_220,10);
    *param_3 = uVar2;
  }
  if ((local_18 ^ (ulonglong)auStack_258) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140988856 FUN_140988856 body=101 status=ok
// SIG undefined FUN_140988856(void)

undefined8 * FUN_140988856(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a42e020;
  FUN_1448d844e(param_1[10],*(undefined4 *)(param_1 + 0xb));
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_140280a77(param_1[8],*(undefined4 *)(param_1 + 9));
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1409888bc FUN_1409888bc body=485 status=ok
// SIG undefined FUN_1409888bc(void)

undefined8 FUN_1409888bc(longlong param_1,longlong param_2,int *param_3)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  ulonglong *puVar6;
  undefined4 *puVar7;
  ulonglong uVar8;
  bool bVar9;
  undefined1 auStack_68 [36];
  int local_44 [3];
  ulonglong local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (((param_2 != 0) && (*(longlong *)(param_2 + 0x20) == *(longlong *)(param_1 + 0x10))) &&
     (*(char *)(param_2 + 0x29) != '\0')) {
    FUN_1447715ec(param_3,&DAT_14c9485f0);
    param_3[10] = -1;
    puVar7 = *(undefined4 **)(param_2 + 8);
    if (puVar7 == (undefined4 *)0x0) {
      puVar7 = &DAT_14c9485f0;
    }
    FUN_1447715ec(param_3,puVar7);
    if (*(char *)(param_2 + 0x28) == '\x02') {
      if (((*param_3 == 0) || (iVar2 = param_3[1], iVar2 == 0)) || (*param_3 == DAT_14c948000)) {
LAB_140988a6f:
        local_30 = DAT_14c948620;
        local_38 = DAT_14c948618;
      }
      else {
        if ((iVar2 < 2) && (param_3[9] < 1)) {
          puVar6 = (ulonglong *)(param_3 + 2);
        }
        else {
          puVar6 = *(ulonglong **)(param_3 + 6);
        }
        if (iVar2 < 1) goto LAB_140988a6f;
        local_30 = (int)puVar6[1];
        local_38 = *puVar6;
      }
      FUN_1400f0e12(param_3,local_44,1);
      uVar8 = local_38 & 0xffffffff;
      if (local_30 != 0) {
        uVar3 = FUN_144a78877(uVar8,local_30);
        uVar8 = (ulonglong)uVar3;
      }
      iVar2 = FUN_140988aa2((longlong *)(param_1 + 0xb8),uVar8,&local_38);
      if (iVar2 != -1) {
        lVar1 = *(longlong *)(param_1 + 0xb8);
        if ((((lVar1 + (longlong)iVar2 * 0x20 != 0) &&
             (plVar4 = (longlong *)((longlong)iVar2 * 0x20 + lVar1 + 0x10),
             plVar4 != (longlong *)0x0)) && (local_44[0] != 0)) &&
           ((plVar4 = (longlong *)*plVar4, plVar4 != (longlong *)0x0 &&
            (lVar1 = *plVar4, lVar1 != 0)))) {
          bVar9 = *(char *)(lVar1 + 0x29) != '\0';
          uVar5 = CONCAT71((int7)((ulonglong)plVar4 >> 8),bVar9);
          if (((bVar9) && (*(short *)(param_1 + 0x50) <= *(short *)(lVar1 + 0x2a))) &&
             (*(short *)(param_1 + 0x52) <= *(short *)(param_2 + 0x2a))) {
            *(short *)(param_3 + 10) = *(short *)(lVar1 + 0x2a);
            *(undefined2 *)((longlong)param_3 + 0x2a) = *(undefined2 *)(param_2 + 0x2a);
          }
          goto LAB_140988a37;
        }
      }
    }
    else if (*(char *)(param_2 + 0x28) == '\x01') {
      uVar5 = 1;
      if (*(short *)(param_1 + 0x50) <= *(short *)(param_2 + 0x2a)) {
        *(short *)(param_3 + 10) = *(short *)(param_2 + 0x2a);
      }
      goto LAB_140988a37;
    }
  }
  uVar5 = 0;
LAB_140988a37:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140988aa2 FUN_140988aa2 body=95 status=ok
// SIG undefined FUN_140988aa2(void)

int FUN_140988aa2(longlong *param_1,uint param_2,int *param_3)

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



// FUNCTION 140988b08 FUN_140988b08 body=57 status=ok
// SIG undefined FUN_140988b08(void)

void FUN_140988b08(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbc0d38 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbc0d38 = FUN_140002ddd(FUN_14661922d,uVar1,L"WeaponBehaviorDef_OakStatusEffectModifier");
  }
  return;
}



// FUNCTION 140988b42 FUN_140988b42 body=3822 status=ok
// SIG undefined FUN_140988b42(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_140988b42(longlong param_1)

{
  ulonglong uVar1;
  char cVar2;
  int *piVar3;
  longlong *plVar4;
  longlong *plVar5;
  ushort *puVar6;
  longlong **pplVar7;
  byte bVar8;
  bool bVar9;
  longlong ***ppplVar10;
  byte bVar11;
  int iVar12;
  longlong ***ppplVar13;
  longlong ****pppplVar14;
  longlong ****pppplVar15;
  longlong ***ppplVar16;
  longlong lVar17;
  undefined8 uVar18;
  int iVar19;
  longlong ****pppplVar20;
  longlong ***_Src;
  longlong ***ppplVar21;
  uint uVar22;
  int iVar23;
  longlong ***ppplVar24;
  longlong ***ppplVar25;
  int iVar26;
  longlong ****pppplVar27;
  PSRWLOCK SRWLock;
  longlong ****pppplVar28;
  int iVar29;
  int iVar30;
  uint uVar31;
  longlong lVar32;
  ulonglong uVar33;
  longlong ***ppplVar34;
  ulonglong uVar35;
  int *piVar36;
  bool bVar37;
  float fVar38;
  undefined1 auStack_4998 [40];
  longlong **local_4970;
  longlong **local_4968;
  longlong ***local_4960;
  longlong **local_4958;
  PSRWLOCK local_4950;
  undefined8 local_4948;
  longlong *local_4940;
  longlong local_4938 [2];
  longlong *local_4928 [2];
  longlong *local_4918 [2];
  undefined8 local_4908;
  longlong *local_4900;
  longlong **local_48f8;
  undefined4 local_48f0;
  longlong ***local_24f8;
  ulonglong local_24f0;
  longlong ***local_24e8 [16];
  longlong ****local_2468;
  uint local_2460;
  uint local_245c;
  longlong ***local_2458 [2];
  undefined4 local_2448;
  undefined4 uStack_2444;
  undefined1 local_2438 [96];
  longlong ****local_23d8;
  uint local_23d0;
  uint local_23cc;
  longlong ***local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_4998;
  if ((*(byte *)(param_1 + 0x8c) & 0x80) == 0) goto LAB_140988b76;
  FUN_1448d5e3c(local_2458,param_1 + 0x208);
  ppplVar24 = local_2458[1];
  ppplVar13 = local_2458[0];
  if (local_2458[1] != (longlong ***)0x0) {
    LOCK();
    ppplVar25 = local_2458[1] + 1;
    *(int *)ppplVar25 = *(int *)ppplVar25 + -1;
    UNLOCK();
    if (*(int *)ppplVar25 == 0) {
      (*(code *)**local_2458[1])(local_2458[1]);
      LOCK();
      piVar3 = (int *)((longlong)ppplVar24 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (*(code *)(*ppplVar24)[2])(ppplVar24);
      }
    }
  }
  local_4960 = (longlong ***)ppplVar13[0x28];
  SRWLock = (PSRWLOCK)(local_4960 + 0xb);
  AcquireSRWLockShared(SRWLock);
  iVar23 = *(int *)(param_1 + 0x2e0);
  if (iVar23 == 0) {
    uVar33 = 1;
    uVar35 = 0;
    iVar12 = 0;
    iVar26 = 0;
  }
  else {
    ppplVar13 = *(longlong ****)(param_1 + 0x2d8);
    if (*(longlong ****)(param_1 + 0x2d8) == (longlong ***)0x0) {
      ppplVar13 = (longlong ***)(param_1 + 0x2c8);
    }
    uVar22 = *(uint *)ppplVar13;
    if (uVar22 == 0) {
      iVar12 = iVar23 + 0x1e;
      if (-1 < iVar23 + -1) {
        iVar12 = iVar23 + -1;
      }
      uVar35 = 0;
      uVar33 = (ulonglong)(uint)(iVar12 >> 5);
      if (iVar12 >> 5 < 1) {
        uVar33 = uVar35;
      }
      iVar26 = 0;
      do {
        if (uVar33 == uVar35) {
          bVar37 = false;
          goto LAB_140988d7b;
        }
        iVar26 = iVar26 + 0x20;
        uVar22 = *(uint *)((longlong)ppplVar13 + (uVar35 + 1) * 4);
        uVar35 = uVar35 + 1;
      } while (uVar22 == 0);
    }
    else {
      uVar35 = 0;
      iVar26 = 0;
    }
    uVar33 = (ulonglong)(-uVar22 & uVar22);
    uVar1 = uVar33 * 2 + 1;
    lVar32 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar32 == 0; lVar32 = lVar32 + -1) {
      }
    }
    iVar12 = (iVar26 - ((uint)lVar32 ^ 0x3f)) + 0x3e;
    if (iVar23 <= iVar12) {
      iVar12 = iVar23;
    }
  }
  local_4950 = SRWLock;
  if (iVar12 == iVar23) {
LAB_140988d74:
    bVar37 = false;
    SRWLock = local_4950;
  }
  else {
    uVar22 = 0xffffffff;
    bVar11 = 0;
    local_4970 = (longlong **)(param_1 + 0x2c8);
    do {
      bVar8 = bVar11;
      lVar32 = *(longlong *)(param_1 + 0x2b8) + (longlong)iVar12 * 0x14;
      iVar12 = FUN_140989a32(local_4960,lVar32);
      pplVar7 = local_4970;
      bVar37 = *(int *)(lVar32 + 8) != iVar12;
      *(int *)(lVar32 + 8) = iVar12;
      uVar22 = ~(uint)uVar33 & uVar22;
      ppplVar13 = *(longlong ****)(param_1 + 0x2d8);
      if (*(longlong ****)(param_1 + 0x2d8) == (longlong ***)0x0) {
        ppplVar13 = (longlong ***)local_4970;
      }
      iVar19 = *(int *)(param_1 + 0x2e0);
      iVar12 = (int)uVar35;
      lVar32 = (longlong)iVar12;
      uVar31 = *(uint *)((longlong)ppplVar13 + lVar32 * 4) & uVar22;
      if (uVar31 == 0) {
        iVar29 = iVar19 + 0x1e;
        if (-1 < iVar19 + -1) {
          iVar29 = iVar19 + -1;
        }
        iVar29 = iVar29 >> 5;
        iVar26 = iVar26 + 0x20;
        iVar30 = iVar29;
        if (iVar29 < iVar12) {
          iVar30 = iVar12;
        }
        if (iVar12 < iVar29) {
          lVar17 = 0;
          do {
            uVar31 = *(uint *)((longlong)ppplVar13 + (lVar32 + lVar17 + 1) * 4);
            if (uVar31 != 0) {
              uVar35 = (ulonglong)(iVar12 + (int)lVar17 + 1);
              uVar22 = 0xffffffff;
              goto LAB_140988d30;
            }
            iVar26 = iVar26 + 0x20;
            lVar17 = lVar17 + 1;
          } while (iVar30 - lVar32 != lVar17);
          uVar22 = 0xffffffff;
          lVar32 = (longlong)iVar30;
        }
        uVar35 = lVar32 + 1U & 0xffffffff;
        iVar12 = iVar19;
      }
      else {
LAB_140988d30:
        uVar33 = (ulonglong)(-uVar31 & uVar31);
        uVar1 = uVar33 * 2 + 1;
        lVar32 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar32 == 0; lVar32 = lVar32 + -1) {
          }
        }
        iVar12 = (iVar26 - ((uint)lVar32 ^ 0x3f)) + 0x3e;
        if (iVar19 <= iVar12) {
          iVar12 = iVar19;
        }
      }
      bVar11 = bVar8 | bVar37;
    } while (iVar12 != iVar23);
    if (!(bool)(bVar8 | bVar37)) goto LAB_140988d74;
    ppplVar13 = (longlong ***)(param_1 + 0x2a0);
    FUN_140989cc7(*(undefined8 *)(param_1 + 0x2a0),*(undefined4 *)(param_1 + 0x2a8));
    *(undefined4 *)(param_1 + 0x2a8) = 0;
    if (*(int *)(param_1 + 0x2ac) != 0) {
      FUN_140989f18(ppplVar13,0);
    }
    local_23d8 = (longlong ****)0x0;
    local_23cc = 0x10;
    iVar23 = *(int *)(param_1 + 0x2c0) - *(int *)(param_1 + 0x2ec);
    if (iVar23 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar23);
    }
    local_23d0 = 0;
    if (iVar23 != 0x10) {
      FUN_140989ea8();
    }
    iVar23 = *(int *)(param_1 + 0x2e0);
    local_4968 = (longlong **)ppplVar13;
    if (iVar23 == 0) {
      uVar33 = 1;
      uVar35 = 0;
      iVar12 = 0;
      iVar26 = 0;
    }
    else {
      ppplVar13 = *(longlong ****)(param_1 + 0x2d8);
      if (*(longlong ****)(param_1 + 0x2d8) == (longlong ***)0x0) {
        ppplVar13 = (longlong ***)pplVar7;
      }
      uVar22 = *(uint *)ppplVar13;
      if (uVar22 == 0) {
        iVar12 = iVar23 + 0x1e;
        if (-1 < iVar23 + -1) {
          iVar12 = iVar23 + -1;
        }
        uVar35 = 0;
        uVar33 = (ulonglong)(uint)(iVar12 >> 5);
        if (iVar12 >> 5 < 1) {
          uVar33 = uVar35;
        }
        iVar26 = 0;
        do {
          if (uVar33 == uVar35) goto LAB_1409891df;
          iVar26 = iVar26 + 0x20;
          uVar22 = *(uint *)((longlong)ppplVar13 + (uVar35 + 1) * 4);
          uVar35 = uVar35 + 1;
        } while (uVar22 == 0);
      }
      else {
        uVar35 = 0;
        iVar26 = 0;
      }
      uVar33 = (ulonglong)(-uVar22 & uVar22);
      uVar1 = uVar33 * 2 + 1;
      lVar32 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar32 == 0; lVar32 = lVar32 + -1) {
        }
      }
      iVar12 = (iVar26 - ((uint)lVar32 ^ 0x3f)) + 0x3e;
      if (iVar23 <= iVar12) {
        iVar12 = iVar23;
      }
    }
    if (iVar12 < iVar23) {
      uVar22 = 0xffffffff;
      do {
        uVar31 = local_23d0;
        lVar32 = *(longlong *)(param_1 + 0x2b8);
        lVar17 = (longlong)(int)local_23d0;
        local_23d0 = local_23d0 + 1;
        if (local_23cc < local_23d0) {
          FUN_1468b3bb8(local_2458,uVar31);
        }
        pppplVar14 = local_23d8;
        if (local_23d8 == (longlong ****)0x0) {
          pppplVar14 = local_2458;
        }
        pppplVar14[lVar17] = *(longlong ****)((longlong)iVar12 * 0x14 + lVar32);
        uVar22 = uVar22 & ~(uint)uVar33;
        ppplVar13 = *(longlong ****)(param_1 + 0x2d8);
        if (*(longlong ****)(param_1 + 0x2d8) == (longlong ***)0x0) {
          ppplVar13 = (longlong ***)local_4970;
        }
        iVar23 = *(int *)(param_1 + 0x2e0);
        iVar12 = (int)uVar35;
        lVar32 = (longlong)iVar12;
        uVar31 = *(uint *)((longlong)ppplVar13 + lVar32 * 4) & uVar22;
        if (uVar31 == 0) {
          iVar19 = iVar23 + 0x1e;
          if (-1 < iVar23 + -1) {
            iVar19 = iVar23 + -1;
          }
          iVar19 = iVar19 >> 5;
          iVar29 = iVar19;
          if (iVar19 < iVar12) {
            iVar29 = iVar12;
          }
          if (iVar19 <= iVar12) break;
          lVar17 = 0;
          while( true ) {
            iVar26 = iVar26 + 0x20;
            uVar31 = *(uint *)((longlong)ppplVar13 + (lVar32 + lVar17 + 1) * 4);
            if (uVar31 != 0) break;
            lVar17 = lVar17 + 1;
            if (iVar29 - lVar32 == lVar17) goto LAB_1409891df;
          }
          uVar35 = (ulonglong)(iVar12 + (int)lVar17 + 1);
          uVar22 = 0xffffffff;
        }
        uVar33 = (ulonglong)(-uVar31 & uVar31);
        uVar1 = uVar33 * 2 + 1;
        lVar32 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar32 == 0; lVar32 = lVar32 + -1) {
          }
        }
        iVar12 = (iVar26 - ((uint)lVar32 ^ 0x3f)) + 0x3e;
      } while (iVar12 < iVar23);
    }
LAB_1409891df:
    pppplVar20 = local_23d8;
    pppplVar14 = local_23d8;
    if (local_23d8 == (longlong ****)0x0) {
      pppplVar14 = local_24e8;
      pppplVar27 = local_2458;
      pppplVar28 = pppplVar14;
      for (lVar32 = 0x10; lVar32 != 0; lVar32 = lVar32 + -1) {
        *pppplVar28 = *pppplVar27;
        pppplVar27 = pppplVar27 + 1;
        pppplVar28 = pppplVar28 + 1;
      }
    }
    local_2468 = pppplVar20;
    local_2460 = local_23d0;
    local_245c = local_23cc;
    pppplVar20 = local_2458;
    if ((longlong)(int)local_23d0 != 0) {
      pppplVar28 = pppplVar14 + (int)local_23d0;
      pppplVar27 = (longlong ****)(local_4960 + 7);
LAB_140989266:
      local_58 = (longlong ***)0x0;
      local_50 = 0x2000000000;
      if (*(int *)(local_4960 + 1) != *(int *)((longlong)local_4960 + 0x34)) {
        ppplVar13 = *pppplVar14;
        uVar22 = (uint)((ulonglong)ppplVar13 >> 0x10);
        uVar31 = (uint)ppplVar13 & 0xffff;
        pppplVar15 = (longlong ****)local_4960[8];
        if ((longlong ****)local_4960[8] == (longlong ****)0x0) {
          pppplVar15 = pppplVar27;
        }
        iVar23 = *(int *)((longlong)pppplVar15 +
                         (ulonglong)
                         (*(int *)(local_4960 + 9) - 1U &
                         (int)((ulonglong)ppplVar13 >> 0x20) + ((uint)ppplVar13 << 0x10 | uVar31) +
                         (uVar22 << 0x13 | uVar22 & 0xffff) + (uVar31 >> 4)) * 4);
        if (iVar23 != -1) {
          ppplVar24 = (longlong ***)*local_4960;
          iVar12 = iVar23;
          do {
            if ((longlong ***)ppplVar24[(longlong)iVar12 * 5] == ppplVar13) goto LAB_14098930b;
            iVar12 = *(int *)(ppplVar24 + (longlong)iVar12 * 5 + 4);
          } while (iVar12 != -1);
        }
      }
      goto LAB_14098938d;
    }
LAB_140989490:
    if (local_2468 != (longlong ****)0x0) {
      FUN_1400020a8(local_2468);
    }
    iVar23 = *(int *)(param_1 + 0x2a8);
    bVar37 = true;
    SRWLock = local_4950;
    if (1 < (longlong)iVar23) {
      ppplVar13 = (longlong ***)*local_4968;
      memset(&local_2448,0,0x2f0);
      local_2458[1] = ppplVar13 + (longlong)iVar23 * 0x24 + -0x24;
      local_2458[0] = ppplVar13;
      fVar38 = logf((float)iVar23);
      local_2448 = (int)(longlong)(fVar38 + fVar38);
      do {
        ppplVar13 = *pppplVar20;
        ppplVar24 = pppplVar20[1];
        iVar23 = *(int *)(pppplVar20 + 2);
        iVar12 = (int)((ulonglong)((longlong)ppplVar24 - (longlong)ppplVar13) >> 5);
        ppplVar25 = ppplVar24;
        ppplVar16 = ppplVar13;
        local_4960 = (longlong ***)pppplVar20;
        if (iVar23 != 0) {
LAB_14098952f:
          uVar22 = iVar12 * 0x38e38e39 + 1;
          if (8 < (int)uVar22) {
            memcpy(&local_48f8,ppplVar13 + (ulonglong)(uVar22 >> 1) * 0x24,0x120);
            memcpy(ppplVar13 + (ulonglong)(uVar22 >> 1) * 0x24,ppplVar13,0x120);
            memcpy(ppplVar13,&local_48f8,0x120);
            local_4968 = (longlong **)(ppplVar25 + 0x24);
            local_4970 = (longlong **)ppplVar13;
            do {
              ppplVar34 = (longlong ***)(local_4970 + 0x24);
              ppplVar10 = (longlong ***)(local_4970 + 0x24);
              do {
                _Src = ppplVar10;
                local_4958 = (longlong **)ppplVar34;
                if (ppplVar25 < _Src) break;
                bVar9 = *(byte *)((longlong)_Src + 0xc) < *(byte *)((longlong)ppplVar13 + 0xc);
                if (*(byte *)((longlong)ppplVar13 + 0xc) == *(byte *)((longlong)_Src + 0xc)) {
                  bVar9 = (int)*(uint *)ppplVar13 < (int)*(uint *)_Src;
                }
                ppplVar34 = (longlong ***)(local_4958 + 0x24);
                ppplVar10 = _Src + 0x24;
              } while (!bVar9);
              ppplVar10 = (longlong ***)(local_4968 + -0x48);
              ppplVar34 = (longlong ***)local_4968;
              do {
                ppplVar21 = ppplVar10;
                local_4968 = (longlong **)(ppplVar34 + -0x24);
                if (local_4968 <= ppplVar13) break;
                bVar9 = *(byte *)((longlong)ppplVar13 + 0xc) <
                        *(byte *)((longlong)ppplVar34 + -0x114);
                if (*(byte *)((longlong)ppplVar34 + -0x114) == *(byte *)((longlong)ppplVar13 + 0xc))
                {
                  bVar9 = (int)*(uint *)local_4968 < (int)*(uint *)ppplVar13;
                }
                ppplVar10 = ppplVar21 + -0x24;
                ppplVar34 = (longlong ***)local_4968;
              } while (!bVar9);
              local_4970 = (longlong **)_Src;
              if (local_4968 < _Src) goto LAB_1409898b8;
              memcpy(&local_48f8,_Src,0x120);
              pplVar7 = local_4968;
              memcpy(_Src,local_4968,0x120);
              memcpy(pplVar7,&local_48f8,0x120);
            } while( true );
          }
          if (ppplVar13 < ppplVar25) {
            do {
              ppplVar24 = ppplVar13;
              if (ppplVar13 + 0x24 <= ppplVar25) {
                uVar22 = *(uint *)ppplVar13;
                ppplVar16 = ppplVar13 + 0x24;
                do {
                  bVar9 = *(byte *)((longlong)ppplVar16 + 0xc) <
                          *(byte *)((longlong)ppplVar24 + 0xc);
                  if (*(byte *)((longlong)ppplVar24 + 0xc) == *(byte *)((longlong)ppplVar16 + 0xc))
                  {
                    bVar9 = (int)uVar22 < (int)*(uint *)ppplVar16;
                  }
                  ppplVar34 = ppplVar16;
                  uVar31 = *(uint *)ppplVar16;
                  if (!bVar9) {
                    ppplVar34 = ppplVar24;
                    uVar31 = uVar22;
                  }
                  uVar22 = uVar31;
                  ppplVar24 = ppplVar34;
                  ppplVar16 = ppplVar16 + 0x24;
                } while (ppplVar16 <= ppplVar25);
              }
              ppplVar16 = ppplVar25 + -0x24;
              memcpy(&local_48f8,ppplVar24,0x120);
              memcpy(ppplVar24,ppplVar25,0x120);
              memcpy(ppplVar25,&local_48f8,0x120);
              ppplVar25 = ppplVar16;
            } while (ppplVar13 < ppplVar16);
          }
          goto LAB_1409895e6;
        }
LAB_14098974a:
        local_4970 = (longlong **)ppplVar13;
        FUN_148e794af(local_4970);
LAB_1409895e6:
        pppplVar20 = (longlong ****)(local_4960 + -3);
        SRWLock = local_4950;
      } while (local_2458 <= pppplVar20);
    }
  }
LAB_140988d7b:
  lVar32 = *(longlong *)(param_1 + 0x288);
  if (lVar32 != 0) {
    cVar2 = *(char *)(param_1 + 0x298);
    if (cVar2 == '\0') {
      if (*(int *)(param_1 + 0x2a8) == 0) {
LAB_140988da1:
        if ((*(byte *)(param_1 + 0x8c) & 0x80) != 0) {
          FUN_140989adc(param_1,*(undefined8 *)(param_1 + 0x308));
        }
      }
      else {
        FUN_14098a4fe(param_1,*(undefined8 *)(param_1 + 0x2a0));
      }
    }
    else if (cVar2 == '\x01') {
      if ((longlong)*(int *)(param_1 + 0x2a8) != 0) {
        piVar3 = *(int **)(param_1 + 0x2a0);
        iVar23 = *(int *)(lVar32 + 0x1ec);
        lVar17 = (longlong)*(int *)(param_1 + 0x2a8) * 0x120;
        piVar36 = piVar3;
        do {
          if (iVar23 == *piVar36) {
            if (piVar36 != (int *)0x0) {
              if (iVar23 == *piVar3) {
                if (bVar37) {
                  if (*(longlong *)(piVar3 + 1) == DAT_14cbd9858) {
                    FUN_14098a4fe(param_1);
                  }
                  else {
                    FUN_1400b22c2(local_4938,&DAT_149e02088);
                    FUN_140233b1a(local_4928,local_4938);
                    FUN_14023409e(&local_4948,piVar36 + 4,1);
                    local_2458[0] = (longlong ***)CONCAT44(local_2458[0]._4_4_,4);
                    FUN_14023423e(&local_2448,local_4928);
                    local_24e8[0] = (longlong ***)local_2458;
                    local_24e8[1] = (longlong ***)local_2438;
                    FUN_14010d304(&local_48f8);
                    local_4908 = local_4948;
                    local_4900 = local_4940;
                    if (local_4940 != (longlong *)0x0) {
                      LOCK();
                      *(int *)(local_4940 + 1) = (int)local_4940[1] + 1;
                      UNLOCK();
                    }
                    FUN_14010c016(local_4918,&local_4908,&local_48f8);
                    FUN_14007f2db(local_48f8,local_48f0);
                    if ((longlong ***)local_48f8 != (longlong ***)0x0) {
                      FUN_1400020a8();
                    }
                    if ((longlong *)CONCAT44(uStack_2444,local_2448) != (longlong *)0x0) {
                      (**(code **)(*(longlong *)CONCAT44(uStack_2444,local_2448) + 0x10))();
                    }
                    if (local_4940 != (longlong *)0x0) {
                      LOCK();
                      plVar4 = local_4940 + 1;
                      *(int *)plVar4 = (int)*plVar4 + -1;
                      UNLOCK();
                      if ((int)*plVar4 == 0) {
                        (**(code **)*local_4940)(local_4940);
                        LOCK();
                        piVar3 = (int *)((longlong)local_4940 + 0xc);
                        *piVar3 = *piVar3 + -1;
                        UNLOCK();
                        if (*piVar3 == 0) {
                          (**(code **)(*local_4940 + 0x10))(local_4940);
                        }
                      }
                    }
                    if (local_4928[0] != (longlong *)0x0) {
                      (**(code **)(*local_4928[0] + 0x10))();
                    }
                    FUN_140008f88(lVar32 + 0xb8,local_4918);
                    if (local_4918[0] != (longlong *)0x0) {
                      (**(code **)(*local_4918[0] + 0x10))();
                    }
                    if (local_4938[0] != 0) {
                      FUN_1400020a8();
                    }
                    plVar4 = *(longlong **)(piVar36 + 8);
                    plVar5 = *(longlong **)(lVar32 + 200);
                    if (plVar5 != plVar4) {
                      *(longlong **)(lVar32 + 200) = plVar4;
                      if (plVar4 != (longlong *)0x0) {
                        (**(code **)(*plVar4 + 8))();
                      }
                      if (plVar5 != (longlong *)0x0) {
                        (**(code **)(*plVar5 + 0x10))(plVar5);
                      }
                    }
                    *(int *)(lVar32 + 0xd0) = piVar36[10];
                  }
                  puVar6 = *(ushort **)(lVar32 + 0x80);
                  if (puVar6 != (ushort *)0x0) {
                    *puVar6 = *puVar6 | (ushort)(1L << (*(byte *)(lVar32 + 0x78) & 0x3f));
                  }
                }
                goto LAB_140988dba;
              }
              if ((char)piVar3[3] != '\x04') goto LAB_140988dba;
              uVar18 = FUN_14001cc68(0x40,0x10);
              FUN_148e74952(uVar18,*(undefined8 *)(param_1 + 0x30),iVar23);
              FUN_140391314(param_1,uVar18);
              uVar18 = 1;
              goto LAB_14098963b;
            }
            break;
          }
          piVar36 = piVar36 + 0x48;
          lVar17 = lVar17 + -0x120;
        } while (lVar17 != 0);
      }
      uVar18 = 0;
LAB_14098963b:
      FUN_141197056(param_1,uVar18);
    }
    else if ((cVar2 == '\x02') && (*(int *)(param_1 + 0x2a8) == 0)) goto LAB_140988da1;
  }
LAB_140988dba:
  ReleaseSRWLockShared(SRWLock);
LAB_140988b76:
  if ((local_48 ^ (ulonglong)auStack_4998) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
  while (iVar23 = *(int *)(ppplVar25 + 4), iVar23 != -1) {
LAB_14098930b:
    ppplVar25 = ppplVar24 + (longlong)iVar23 * 5;
    if ((longlong ***)*ppplVar25 == ppplVar13) goto LAB_14098931f;
  }
  ppplVar25 = (longlong ***)0x0;
LAB_14098931f:
  FUN_140989cc7(pppplVar20);
  iVar23 = *(int *)(ppplVar25 + 2);
  pplVar7 = ppplVar25[1];
  local_50 = CONCAT44(local_50._4_4_,iVar23);
  if (iVar23 == 0 && local_50._4_4_ == 0) {
    local_50 = CONCAT44(0x20,iVar23);
  }
  else {
    FUN_140989d30(pppplVar20,iVar23);
    pppplVar15 = (longlong ****)local_58;
    if ((longlong ****)local_58 == (longlong ****)0x0) {
      pppplVar15 = pppplVar20;
    }
    FUN_140989cf2(pppplVar15,pplVar7,iVar23);
  }
  pppplVar15 = (longlong ****)local_58;
  if ((longlong ****)local_58 == (longlong ****)0x0) {
LAB_14098938d:
    memcpy(&local_48f8,pppplVar20,0x2400);
    pppplVar15 = (longlong ****)0x0;
  }
  local_58 = (longlong ***)0x0;
  local_24f0 = local_50;
  local_50 = 0x2000000000;
  local_24f8 = (longlong ***)pppplVar15;
  FUN_140989c8a(pppplVar20);
  pplVar7 = local_4968;
  lVar32 = (longlong)(int)(uint)local_24f0;
  if (lVar32 != 0) {
    iVar23 = *(int *)(param_1 + 0x2a8);
    *(uint *)(param_1 + 0x2a8) = iVar23 + (uint)local_24f0;
    if ((uint)(*(int *)(param_1 + 0x2ac) - iVar23) < (uint)local_24f0) {
      FUN_140989f8a(local_4968,iVar23);
    }
    pppplVar15 = (longlong ****)local_24f8;
    if ((longlong ****)local_24f8 == (longlong ****)0x0) {
      pppplVar15 = (longlong ****)&local_48f8;
    }
    memmove(*pplVar7 + (longlong)iVar23 * 0x24,pppplVar15,lVar32 * 0x120);
    local_24f0 = local_24f0 & 0xffffffff00000000;
  }
  FUN_140989c8a(&local_48f8);
  pppplVar14 = pppplVar14 + 1;
  if (pppplVar14 == pppplVar28) goto LAB_140989490;
  goto LAB_140989266;
LAB_1409898b8:
  memcpy(&local_48f8,ppplVar13,0x120);
  memcpy(ppplVar13,local_4968,0x120);
  memcpy(local_4968,&local_48f8,0x120);
  iVar23 = iVar23 + -1;
  ppplVar34 = (longlong ***)(local_4968 + -0x24);
  if ((longlong)ppplVar21 - (longlong)ppplVar16 < (longlong)ppplVar24 - (longlong)local_4958) {
    if (local_4970 < ppplVar25) {
      *local_4960 = local_4970;
      local_4960[1] = (longlong **)ppplVar25;
      *(int *)(local_4960 + 2) = iVar23;
      local_4960 = local_4960 + 3;
    }
    ppplVar24 = ppplVar21;
    ppplVar16 = ppplVar13;
    if (local_4968 <= ppplVar13 + 0x24) goto LAB_1409895e6;
  }
  else {
    if (ppplVar13 + 0x24 < local_4968) {
      *local_4960 = (longlong **)ppplVar13;
      local_4960[1] = (longlong **)ppplVar34;
      *(int *)(local_4960 + 2) = iVar23;
      local_4960 = local_4960 + 3;
    }
    ppplVar24 = ppplVar25;
    ppplVar34 = ppplVar25;
    ppplVar13 = (longlong ***)local_4970;
    ppplVar16 = (longlong ***)local_4958;
    if (ppplVar25 <= local_4970) goto LAB_1409895e6;
  }
  local_4958 = (longlong **)ppplVar16;
  local_4970 = (longlong **)ppplVar13;
  iVar12 = (int)((ulonglong)((longlong)ppplVar24 - (longlong)local_4958) >> 5);
  ppplVar13 = (longlong ***)local_4970;
  ppplVar25 = ppplVar34;
  ppplVar16 = (longlong ***)local_4958;
  if (iVar23 == 0) goto LAB_14098974a;
  goto LAB_14098952f;
}



// FUNCTION 140989a32 FUN_140989a32 body=170 status=ok
// SIG undefined FUN_140989a32(void)

undefined4 FUN_140989a32(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  longlong *plVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
    return 0;
  }
  lVar1 = *param_2;
  uVar3 = (uint)((ulonglong)lVar1 >> 0x10);
  uVar6 = (uint)lVar1 & 0xffff;
  plVar4 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[8];
  }
  iVar5 = *(int *)((longlong)plVar4 +
                  (ulonglong)
                  ((int)param_1[9] - 1U &
                  (int)((ulonglong)lVar1 >> 0x20) + ((uint)lVar1 << 0x10 | uVar6) +
                  (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar6 >> 4)) * 4);
  if (iVar5 == -1) {
    return 0;
  }
  lVar2 = *param_1;
  iVar7 = iVar5;
  while (*(longlong *)(lVar2 + (longlong)iVar7 * 0x28) != lVar1) {
    iVar7 = *(int *)(lVar2 + (longlong)iVar7 * 0x28 + 0x20);
    if (iVar7 == -1) {
      return 0;
    }
  }
  do {
    plVar4 = (longlong *)(lVar2 + (longlong)iVar5 * 0x28);
    if (*plVar4 == lVar1) goto LAB_140989ac9;
    iVar5 = (int)plVar4[4];
  } while (iVar5 != -1);
  plVar4 = (longlong *)0x0;
LAB_140989ac9:
  return (int)plVar4[3];
}



// FUNCTION 140989adc FUN_140989adc body=428 status=ok
// SIG undefined FUN_140989adc(void)

void FUN_140989adc(longlong param_1,longlong param_2)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_f8 [40];
  undefined8 local_d0;
  undefined1 local_c8 [8];
  longlong local_c0;
  short *local_b8;
  short *local_b0;
  ulonglong *local_a8;
  byte local_a0;
  short local_98 [9];
  short local_86 [55];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_b8 = local_98;
  local_a0 = 0;
  local_a8 = &local_18;
  local_c0 = param_2;
  local_b0 = local_b8;
  if (((*(int *)(param_1 + 0x34) == 0) || (uVar1 = *(uint *)(param_1 + 0x30), (int)uVar1 < 0)) ||
     (DAT_14c9647dc <= (int)uVar1)) goto LAB_140989b6d;
  lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
  if (((lVar3 == 0) || (*(int *)(lVar3 + 0x10) != *(int *)(param_1 + 0x34))) ||
     (param_2 == 0 || (*(uint *)(lVar3 + 8) & 0x10200000) != 0)) goto LAB_140989b6d;
  lVar3 = 0;
  do {
    local_98[lVar3] = (short)"UI.State."[lVar3];
    lVar3 = lVar3 + 1;
  } while (lVar3 != 9);
  local_b0 = local_86;
  FUN_14005eb5c(&local_c0,&local_b8);
  *local_b0 = 0;
  FUN_1446f470e(&local_d0,local_b8,1);
  if (DAT_14caa8580 == 0) {
    FUN_140608a9e();
  }
  FUN_1400702d4(DAT_14caa8580,local_c8,local_d0,1);
  if (*(int *)(param_1 + 0x34) == 0) {
LAB_140989c74:
    lVar3 = 0;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x30);
    lVar3 = 0;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      plVar2 = (longlong *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((plVar2 == (longlong *)0x0) ||
         (((int)plVar2[2] != *(int *)(param_1 + 0x34) || ((*(uint *)(plVar2 + 1) & 0x10200000) != 0)
          ))) goto LAB_140989c74;
      lVar3 = *plVar2;
    }
  }
  FUN_140c125e6(lVar3 + 0x3c0,local_c8);
  if ((local_a0 & 1) != 0) {
    FUN_1400020a8(local_b8);
  }
LAB_140989b6d:
  if ((local_18 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140989c8a FUN_140989c8a body=61 status=ok
// SIG undefined FUN_140989c8a(void)

void FUN_140989c8a(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x2400);
  if (*(longlong *)(param_1 + 0x2400) == 0) {
    lVar1 = param_1;
  }
  FUN_140989cc7(lVar1,*(undefined4 *)(param_1 + 0x2408));
  if (*(longlong *)(param_1 + 0x2400) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140989cc7 FUN_140989cc7 body=43 status=ok
// SIG undefined FUN_140989cc7(void)

void FUN_140989cc7(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_140989dc4(param_1);
    param_1 = param_1 + 0x120;
  }
  return;
}



// FUNCTION 140989cf2 FUN_140989cf2 body=62 status=ok
// SIG undefined FUN_140989cf2(void)

void FUN_140989cf2(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_14098a09a(param_1,param_2);
    param_1 = param_1 + 0x120;
    param_2 = param_2 + 0x120;
  }
  return;
}



// FUNCTION 140989d30 FUN_140989d30 body=147 status=ok
// SIG undefined FUN_140989d30(void)

void FUN_140989d30(longlong param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 0;
  if ((param_2 != 0) && (uVar3 = 0x20, 0x20 < param_2)) {
    uVar1 = FUN_144a3809e((longlong)(int)param_2 * 0x120,0);
    uVar2 = (uint)(uVar1 / 0x120);
    uVar3 = 0x7fffffff;
    if ((int)param_2 <= (int)uVar2) {
      uVar3 = uVar2;
    }
  }
  if (((int)param_3 < (int)uVar3) &&
     ((param_3 = uVar3, 0x20 < uVar3 || (*(longlong *)(param_1 + 0x2400) != 0)))) {
    uVar2 = 0;
    if (0x20 < uVar3) {
      uVar2 = uVar3;
    }
    FUN_1446efa72(param_1 + 0x2400,0,uVar2,0x120);
  }
  *(uint *)(param_1 + 0x240c) = param_3;
  return;
}



// FUNCTION 140989dc4 FUN_140989dc4 body=227 status=ok
// SIG undefined FUN_140989dc4(void)

void FUN_140989dc4(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x108) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xd0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong **)(param_1 + 0xb0) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0xb0) + 0x10))();
  }
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong **)(param_1 + 0x48) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x48) + 0x10))();
  }
  if (*(longlong **)(param_1 + 0x30) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x30) + 0x10))();
  }
  if (*(longlong **)(param_1 + 0x20) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x20) + 0x10))();
  }
  if (*(longlong **)(param_1 + 0x10) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000140989e6a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x10) + 0x10))();
    return;
  }
  return;
}



// FUNCTION 140989ea8 FUN_140989ea8 body=112 status=ok
// SIG undefined FUN_140989ea8(void)

void FUN_140989ea8(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0x10;
    if (0x10 < param_2) {
      uVar1 = FUN_144a3809e((longlong)(int)param_2 << 3,0);
      uVar2 = 0x7fffffff;
      if ((int)param_2 <= (int)(uVar1 >> 3)) {
        uVar2 = uVar1 >> 3 & 0xffffffff;
      }
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0x8c)) {
    *(int *)(param_1 + 0x8c) = (int)uVar2;
    FUN_1468b3c36(param_1,*(undefined4 *)(param_1 + 0x88),uVar2,8);
    return;
  }
  return;
}



// FUNCTION 140989f18 FUN_140989f18 body=113 status=ok
// SIG undefined FUN_140989f18(void)

void FUN_140989f18(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x120,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x120)) {
      uVar2 = uVar1 / 0x120 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x120,8);
  }
  return;
}



// FUNCTION 140989f8a FUN_140989f8a body=272 status=ok
// SIG undefined FUN_140989f8a(void)

void FUN_140989f8a(longlong param_1,int param_2)

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
    uVar4 = lVar3 * 0x120;
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
    if ((int)uVar1 <= (int)(uVar4 / 0x120)) {
      uVar5 = uVar4 / 0x120 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x120,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14098a09a FUN_14098a09a body=793 status=ok
// SIG undefined FUN_14098a09a(void)

undefined8 * FUN_14098a09a(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  void *pvVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  
  uVar2 = *param_2;
  *(undefined8 *)((longlong)param_1 + 5) = *(undefined8 *)((longlong)param_2 + 5);
  *param_1 = uVar2;
  plVar3 = (longlong *)param_2[2];
  param_1[2] = plVar3;
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  plVar3 = (longlong *)param_2[4];
  param_1[4] = plVar3;
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
  plVar3 = (longlong *)param_2[6];
  param_1[6] = plVar3;
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 7);
  param_1[8] = param_2[8];
  plVar3 = (longlong *)param_2[9];
  param_1[9] = plVar3;
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 10);
  param_1[0xb] = 0;
  iVar1 = *(int *)(param_2 + 0xc);
  pvVar4 = (void *)param_2[0xb];
  *(int *)(param_1 + 0xc) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 100) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0xb,iVar1,0);
    memcpy((void *)param_1[0xb],pvVar4,(longlong)iVar1 * 2);
  }
  param_1[0xd] = 0;
  iVar1 = *(int *)(param_2 + 0xe);
  pvVar4 = (void *)param_2[0xd];
  *(int *)(param_1 + 0xe) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0xd,iVar1,0);
    memcpy((void *)param_1[0xd],pvVar4,(longlong)iVar1 * 2);
  }
  *(undefined2 *)(param_1 + 0x15) = *(undefined2 *)(param_2 + 0x15);
  uVar5 = *(undefined4 *)(param_2 + 0xf);
  uVar6 = *(undefined4 *)((longlong)param_2 + 0x7c);
  uVar7 = *(undefined4 *)(param_2 + 0x10);
  uVar8 = *(undefined4 *)((longlong)param_2 + 0x84);
  uVar9 = *(undefined4 *)(param_2 + 0x11);
  uVar10 = *(undefined4 *)((longlong)param_2 + 0x8c);
  uVar11 = *(undefined4 *)(param_2 + 0x12);
  uVar12 = *(undefined4 *)((longlong)param_2 + 0x94);
  uVar13 = *(undefined4 *)((longlong)param_2 + 0x9c);
  uVar14 = *(undefined4 *)(param_2 + 0x14);
  uVar15 = *(undefined4 *)((longlong)param_2 + 0xa4);
  *(undefined4 *)(param_1 + 0x13) = *(undefined4 *)(param_2 + 0x13);
  *(undefined4 *)((longlong)param_1 + 0x9c) = uVar13;
  *(undefined4 *)(param_1 + 0x14) = uVar14;
  *(undefined4 *)((longlong)param_1 + 0xa4) = uVar15;
  *(undefined4 *)(param_1 + 0x11) = uVar9;
  *(undefined4 *)((longlong)param_1 + 0x8c) = uVar10;
  *(undefined4 *)(param_1 + 0x12) = uVar11;
  *(undefined4 *)((longlong)param_1 + 0x94) = uVar12;
  *(undefined4 *)(param_1 + 0xf) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0x7c) = uVar6;
  *(undefined4 *)(param_1 + 0x10) = uVar7;
  *(undefined4 *)((longlong)param_1 + 0x84) = uVar8;
  plVar3 = (longlong *)param_2[0x16];
  param_1[0x16] = plVar3;
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  *(undefined4 *)(param_1 + 0x17) = *(undefined4 *)(param_2 + 0x17);
  param_1[0x18] = 0;
  iVar1 = *(int *)(param_2 + 0x19);
  pvVar4 = (void *)param_2[0x18];
  *(int *)(param_1 + 0x19) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xcc) = 0;
  }
  else {
    FUN_14098a3b4(param_1 + 0x18,iVar1,0);
    memcpy((void *)param_1[0x18],pvVar4,(longlong)iVar1 * 3);
  }
  param_1[0x1a] = 0;
  iVar1 = *(int *)(param_2 + 0x1b);
  pvVar4 = (void *)param_2[0x1a];
  *(int *)(param_1 + 0x1b) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xdc) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x1a,iVar1,0);
    memcpy((void *)param_1[0x1a],pvVar4,(longlong)iVar1 * 2);
  }
  param_1[0x1c] = param_2[0x1c];
  param_1[0x1d] = 0;
  iVar1 = *(int *)(param_2 + 0x1e);
  pvVar4 = (void *)param_2[0x1d];
  *(int *)(param_1 + 0x1e) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xf4) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x1d,iVar1,0);
    memcpy((void *)param_1[0x1d],pvVar4,(longlong)iVar1 * 2);
  }
  uVar5 = *(undefined4 *)((longlong)param_2 + 0xfc);
  uVar6 = *(undefined4 *)(param_2 + 0x20);
  uVar7 = *(undefined4 *)((longlong)param_2 + 0x104);
  *(undefined4 *)(param_1 + 0x1f) = *(undefined4 *)(param_2 + 0x1f);
  *(undefined4 *)((longlong)param_1 + 0xfc) = uVar5;
  *(undefined4 *)(param_1 + 0x20) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x104) = uVar7;
  param_1[0x21] = 0;
  iVar1 = *(int *)(param_2 + 0x22);
  pvVar4 = (void *)param_2[0x21];
  *(int *)(param_1 + 0x22) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x114) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x21,iVar1,0);
    memcpy((void *)param_1[0x21],pvVar4,(longlong)iVar1 * 2);
  }
  *(undefined2 *)(param_1 + 0x23) = *(undefined2 *)(param_2 + 0x23);
  return param_1;
}



// FUNCTION 14098a3b4 FUN_14098a3b4 body=329 status=ok
// SIG undefined FUN_14098a3b4(void)

void FUN_14098a3b4(longlong param_1,int param_2,int param_3)

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
    uVar4 = (longlong)param_2 * 3;
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
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14098a422;
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
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,1);
      }
    }
LAB_14098a422:
    iVar5 = (int)(uVar4 / 3);
    iVar7 = 0x7fffffff;
    if (param_2 <= iVar5) {
      iVar7 = iVar5;
    }
  }
  if (param_3 < iVar7) {
    FUN_1446f8d3c(param_1,0,iVar7,3,1);
    param_3 = iVar7;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14098a4fe FUN_14098a4fe body=4369 status=ok
// SIG undefined FUN_14098a4fe(void)

/* WARNING: Removing unreachable block (ram,0x00014098af32) */
/* WARNING: Removing unreachable block (ram,0x00014098af3c) */
/* WARNING: Removing unreachable block (ram,0x00014098b44d) */
/* WARNING: Removing unreachable block (ram,0x00014098af5b) */
/* WARNING: Removing unreachable block (ram,0x00014098af47) */
/* WARNING: Removing unreachable block (ram,0x00014098af51) */

void FUN_14098a4fe(longlong param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  float fVar3;
  byte bVar4;
  ushort uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  void *pvVar10;
  ushort *puVar11;
  int iVar12;
  undefined **ppuVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  byte bVar20;
  char cVar21;
  uint uVar22;
  undefined8 uVar23;
  ulonglong uVar24;
  undefined2 *puVar25;
  undefined8 *puVar26;
  undefined1 *puVar27;
  int iVar28;
  longlong lVar29;
  longlong lVar30;
  undefined1 *puVar31;
  longlong lVar32;
  undefined4 uVar33;
  undefined1 auStack_208 [40];
  longlong local_1e0;
  longlong *local_1d8;
  longlong *local_1d0;
  undefined8 local_1c8;
  longlong *local_1c0;
  undefined8 local_1b8;
  longlong *local_1b0;
  longlong *local_1a8 [2];
  longlong *local_198 [2];
  undefined8 local_188;
  longlong *local_180;
  void *local_178;
  int local_170;
  undefined4 local_16c;
  longlong *local_168 [2];
  longlong *local_158;
  int local_150;
  undefined4 local_14c;
  undefined8 local_148;
  longlong *local_140;
  undefined ***local_138;
  undefined8 *local_130;
  longlong local_128;
  longlong *plStack_120;
  undefined **local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  ulonglong local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined2 local_68;
  undefined1 local_66;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_208;
  lVar6 = *(longlong *)(param_1 + 0x288);
  if (lVar6 == 0) goto LAB_14098aed3;
  uVar33 = *param_2;
  *(undefined4 *)(lVar6 + 0x1ec) = uVar33;
  *(undefined4 *)(lVar6 + 0xb0) = uVar33;
  FUN_1400b22c2(&local_178,&DAT_149e02088);
  FUN_140233b1a(local_168,&local_178);
  FUN_14023409e(&local_188,param_2 + 4,1);
  local_118 = (undefined **)CONCAT44(local_118._4_4_,4);
  FUN_14023423e(&local_108,local_168);
  local_138 = &local_118;
  local_130 = &local_f8;
  FUN_14010d304(&local_128);
  local_148 = local_188;
  local_140 = local_180;
  if (local_180 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_180 + 1) = (int)local_180[1] + 1;
    UNLOCK();
  }
  FUN_14010c016(&local_158,&local_148,&local_128);
  FUN_14007f2db(local_128,(ulonglong)plStack_120 & 0xffffffff);
  if (local_128 != 0) {
    FUN_1400020a8();
  }
  if (local_108 != (longlong *)0x0) {
    (**(code **)(*local_108 + 0x10))();
  }
  if (local_180 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_180 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*local_180)(local_180);
      LOCK();
      piVar1 = (int *)((longlong)local_180 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_180 + 0x10))(local_180);
      }
    }
  }
  if (local_168[0] != (longlong *)0x0) {
    (**(code **)(*local_168[0] + 0x10))();
  }
  FUN_140008f88(lVar6 + 0xb8,&local_158);
  if (local_158 != (longlong *)0x0) {
    (**(code **)(*local_158 + 0x10))();
  }
  if (local_178 != (void *)0x0) {
    FUN_1400020a8();
  }
  plVar7 = *(longlong **)(param_2 + 8);
  plVar8 = *(longlong **)(lVar6 + 200);
  if (plVar8 != plVar7) {
    *(longlong **)(lVar6 + 200) = plVar7;
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*plVar7 + 8))();
    }
    if (plVar8 != (longlong *)0x0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
    }
  }
  *(undefined4 *)(lVar6 + 0xd0) = param_2[10];
  plVar7 = *(longlong **)(param_2 + 0x2c);
  plVar8 = *(longlong **)(lVar6 + 0xd8);
  if (plVar8 != plVar7) {
    *(longlong **)(lVar6 + 0xd8) = plVar7;
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*plVar7 + 8))();
    }
    if (plVar8 != (longlong *)0x0) {
      (**(code **)(*plVar8 + 0x10))(plVar8);
    }
  }
  *(undefined4 *)(lVar6 + 0xe0) = param_2[0x2e];
  plVar7 = (longlong *)(lVar6 + 0xe8);
  plVar8 = *(longlong **)(param_2 + 0xc);
  plVar9 = *(longlong **)(lVar6 + 0xe8);
  if (plVar9 != plVar8) {
    *plVar7 = (longlong)plVar8;
    if (plVar8 != (longlong *)0x0) {
      (**(code **)(*plVar8 + 8))();
    }
    if (plVar9 != (longlong *)0x0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
    }
  }
  *(undefined4 *)(lVar6 + 0xf0) = param_2[0xe];
  plVar8 = *(longlong **)(param_2 + 0x12);
  plVar9 = *(longlong **)(lVar6 + 0xf8);
  if (plVar9 != plVar8) {
    *(longlong **)(lVar6 + 0xf8) = plVar8;
    if (plVar8 != (longlong *)0x0) {
      (**(code **)(*plVar8 + 8))();
    }
    if (plVar9 != (longlong *)0x0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
    }
  }
  *(undefined4 *)(lVar6 + 0x100) = param_2[0x14];
  *(undefined8 *)(lVar6 + 0x108) = *(undefined8 *)(param_2 + 0x10);
  if (param_2[0x18] == 0) {
    puVar25 = &DAT_149dfb77a;
  }
  else {
    puVar25 = *(undefined2 **)(param_2 + 0x16);
  }
  FUN_1446f470e(&local_118,puVar25);
  *(undefined ***)(lVar6 + 0x120) = local_118;
  local_1d8 = plVar7;
  if (local_118 == DAT_14cbdb960) {
    puVar26 = (undefined8 *)(param_2 + 0x16);
LAB_14098b422:
    FUN_144a787a6(lVar6 + 0x110,puVar26);
  }
  else if (local_118 != (undefined **)0x0) {
    puVar26 = &DAT_14cbdb930;
    goto LAB_14098b422;
  }
  puVar26 = (undefined8 *)(lVar6 + 0x138);
  if (puVar26 != (undefined8 *)(param_2 + 0x3a)) {
    iVar28 = param_2[0x3c];
    pvVar10 = *(void **)(param_2 + 0x3a);
    *(int *)(lVar6 + 0x140) = iVar28;
    if (iVar28 == 0 && *(int *)(lVar6 + 0x144) == 0) {
      *(undefined4 *)(lVar6 + 0x144) = 0;
    }
    else {
      FUN_1446dd670(puVar26,iVar28);
      if (iVar28 != 0) {
        memcpy((void *)*puVar26,pvVar10,(longlong)iVar28 * 2);
      }
    }
  }
  local_1e0 = param_1;
  FUN_1400021e4(param_2 + 0x23,&local_118);
  ppuVar13 = local_118;
  iVar28 = (int)uStack_110;
  uVar22 = (int)uStack_110 - 1;
  if ((int)uStack_110 == 0) {
    uVar22 = 0;
  }
  if (0 < (int)uVar22) {
    uVar24 = 0;
    do {
      uVar5 = *(ushort *)((longlong)local_118 + uVar24 * 2);
      *(ushort *)((longlong)local_118 + uVar24 * 2) = (ushort)(uVar5 - 0x41 < 0x1a) * 0x20 + uVar5;
      uVar24 = uVar24 + 1;
    } while (uVar22 != uVar24);
  }
  uVar33 = uStack_110._4_4_;
  local_118 = (undefined **)0x0;
  uStack_110 = 0;
  if (*(longlong *)(lVar6 + 0x128) == 0) {
    *(undefined ***)(lVar6 + 0x128) = ppuVar13;
    *(int *)(lVar6 + 0x130) = iVar28;
    *(undefined4 *)(lVar6 + 0x134) = uVar33;
  }
  else {
    FUN_1400020a8();
    *(undefined ***)(lVar6 + 0x128) = ppuVar13;
    *(int *)(lVar6 + 0x130) = iVar28;
    *(undefined4 *)(lVar6 + 0x134) = uVar33;
    if (local_118 != (undefined **)0x0) {
      FUN_1400020a8();
    }
  }
  FUN_1400021e4(param_2 + 1,&local_118);
  ppuVar13 = local_118;
  iVar28 = (int)uStack_110;
  uVar22 = (int)uStack_110 - 1;
  if ((int)uStack_110 == 0) {
    uVar22 = 0;
  }
  if (0 < (int)uVar22) {
    uVar24 = 0;
    do {
      uVar5 = *(ushort *)((longlong)local_118 + uVar24 * 2);
      *(ushort *)((longlong)local_118 + uVar24 * 2) = (ushort)(uVar5 - 0x41 < 0x1a) * 0x20 + uVar5;
      uVar24 = uVar24 + 1;
    } while (uVar22 != uVar24);
  }
  uVar33 = uStack_110._4_4_;
  local_118 = (undefined **)0x0;
  uStack_110 = 0;
  if (*(longlong *)(lVar6 + 0x188) == 0) {
    *(undefined ***)(lVar6 + 0x188) = ppuVar13;
    *(int *)(lVar6 + 400) = iVar28;
    *(undefined4 *)(lVar6 + 0x194) = uVar33;
  }
  else {
    FUN_1400020a8();
    *(undefined ***)(lVar6 + 0x188) = ppuVar13;
    *(int *)(lVar6 + 400) = iVar28;
    *(undefined4 *)(lVar6 + 0x194) = uVar33;
    if (local_118 != (undefined **)0x0) {
      FUN_1400020a8();
    }
  }
  lVar29 = *(longlong *)(param_2 + 0x20);
  *(longlong *)(lVar6 + 0x148) = lVar29;
  bVar20 = (lVar29 != 0) * '\x02' | *(byte *)(param_2 + 0x22) | *(byte *)(lVar6 + 0x19b) & 0xfc;
  *(byte *)(lVar6 + 0x19b) = bVar20;
  bVar4 = *(byte *)(param_2 + 0x1f);
  *(byte *)(lVar6 + 0x1ea) = *(byte *)(lVar6 + 0x1ea) & 0xfe | bVar4;
  uVar33 = 0;
  if (bVar4 != 0) {
    uVar33 = param_2[0x1e];
  }
  *(undefined4 *)(lVar6 + 0x1f0) = uVar33;
  *(undefined4 *)(lVar6 + 0x150) = uVar33;
  *(byte *)(lVar6 + 0x19b) = bVar20 & 0xfb | *(char *)(param_2 + 0x2a) << 2;
  *(undefined4 *)(lVar6 + 0x19c) = param_2[0x26];
  if (0 < *(int *)(lVar6 + 0x1a8)) {
    iVar28 = *(int *)(lVar6 + 0x1ac);
    FUN_141197972(*(undefined8 *)(lVar6 + 0x1a0));
    *(undefined4 *)(lVar6 + 0x1a8) = 0;
    if ((iVar28 < 0) && (*(int *)(lVar6 + 0x1ac) != 0)) {
      FUN_145827952((longlong *)(lVar6 + 0x1a0));
    }
  }
  if ((longlong)(int)param_2[0x32] != 0) {
    puVar27 = *(undefined1 **)(param_2 + 0x30);
    puVar31 = puVar27 + (longlong)(int)param_2[0x32] * 3;
    local_1d0 = (longlong *)(lVar6 + 0x1a0);
    ppuVar13 = local_118;
    lVar29 = uStack_110;
    plVar7 = local_108;
    uVar24 = local_100;
    uVar23 = local_f8;
    uVar14 = local_f0;
    uVar15 = local_e8;
    uVar16 = local_e0;
    uVar17 = local_d8;
    uVar18 = local_b8;
    uVar19 = uStack_b0;
    do {
      uStack_b0 = uVar19;
      local_b8 = uVar18;
      local_d8 = uVar17;
      local_e0 = uVar16;
      local_e8 = uVar15;
      local_f0 = uVar14;
      local_f8 = uVar23;
      local_100 = uVar24;
      local_108 = plVar7;
      uStack_110 = lVar29;
      local_118 = ppuVar13;
      plVar7 = local_1d0;
      memset(&local_118,0,0xb8);
      FUN_1408f3f9e(&local_118);
      local_118 = &PTR_FUN_14b8b8430;
      local_68 = 0;
      local_66 = 0;
      iVar28 = *(int *)(lVar6 + 0x1a8);
      *(uint *)(lVar6 + 0x1a8) = iVar28 + 1U;
      if (*(uint *)(lVar6 + 0x1ac) < iVar28 + 1U) {
        FUN_14098b610(plVar7,iVar28);
      }
      lVar32 = *plVar7;
      lVar30 = (longlong)iVar28 * 0xb8;
      *(undefined ***)(lVar32 + lVar30) = &PTR_FUN_14b473650;
      *(undefined8 *)(lVar32 + 8 + lVar30) = 0;
      *(longlong *)(lVar32 + 8 + lVar30) = uStack_110;
      *(undefined4 *)(lVar32 + 0x10 + lVar30) = (undefined4)local_108;
      *(undefined4 *)(lVar32 + 0x14 + lVar30) = local_108._4_4_;
      *(undefined8 *)(lVar32 + 0x18 + lVar30) = 0;
      *(ulonglong *)(lVar32 + 0x18 + lVar30) = local_100;
      *(undefined4 *)(lVar32 + 0x20 + lVar30) = (undefined4)local_f8;
      *(undefined4 *)(lVar32 + 0x24 + lVar30) = local_f8._4_4_;
      *(undefined8 *)(lVar32 + 0x28 + lVar30) = 0;
      *(undefined8 *)(lVar32 + 0x28 + lVar30) = local_f0;
      *(undefined4 *)(lVar32 + 0x30 + lVar30) = (undefined4)local_e8;
      *(undefined4 *)(lVar32 + 0x34 + lVar30) = local_e8._4_4_;
      *(undefined8 *)(lVar32 + 0x38 + lVar30) = 0;
      *(undefined8 *)(lVar32 + 0x38 + lVar30) = local_e0;
      *(undefined4 *)(lVar32 + 0x40 + lVar30) = (undefined4)local_d8;
      *(undefined4 *)(lVar32 + 0x44 + lVar30) = local_d8._4_4_;
      *(undefined4 *)(lVar32 + 0x58 + lVar30) = local_c0;
      puVar26 = (undefined8 *)(lVar32 + 0x48 + lVar30);
      *puVar26 = local_d0;
      puVar26[1] = uStack_c8;
      *(undefined8 *)(lVar32 + 0x60 + lVar30) = local_b8;
      *(undefined8 *)(lVar32 + 0x68 + lVar30) = uStack_b0;
      puVar2 = (undefined4 *)(lVar32 + 0xa0 + lVar30);
      *puVar2 = local_78;
      puVar2[1] = uStack_74;
      puVar2[2] = uStack_70;
      puVar2[3] = uStack_6c;
      puVar2 = (undefined4 *)(lVar32 + 0x90 + lVar30);
      *puVar2 = local_88;
      puVar2[1] = uStack_84;
      puVar2[2] = uStack_80;
      puVar2[3] = uStack_7c;
      puVar2 = (undefined4 *)(lVar32 + 0x80 + lVar30);
      *puVar2 = local_98;
      puVar2[1] = uStack_94;
      puVar2[2] = uStack_90;
      puVar2[3] = uStack_8c;
      puVar2 = (undefined4 *)(lVar32 + 0x70 + lVar30);
      *puVar2 = local_a8;
      puVar2[1] = uStack_a4;
      puVar2[2] = uStack_a0;
      puVar2[3] = uStack_9c;
      *(undefined ***)(lVar32 + lVar30) = &PTR_FUN_14b8b8430;
      *(undefined1 *)(lVar32 + 0xb2 + lVar30) = local_66;
      *(undefined2 *)(lVar32 + 0xb0 + lVar30) = local_68;
      uStack_b0 = 0;
      uVar19 = uStack_b0;
      local_b8 = 0;
      uVar18 = local_b8;
      local_d8 = 0;
      uVar17 = local_d8;
      local_e0 = 0;
      uVar16 = local_e0;
      local_e8 = 0;
      uVar15 = local_e8;
      local_f0 = 0;
      uVar14 = local_f0;
      local_f8 = 0;
      uVar23 = local_f8;
      local_100 = 0;
      uVar24 = local_100;
      local_108 = (longlong *)0x0;
      plVar7 = local_108;
      uStack_110 = 0;
      lVar29 = uStack_110;
      local_118 = &PTR_FUN_14b473650;
      ppuVar13 = local_118;
      uStack_b0 = 0;
      local_b8 = 0;
      local_d8 = 0;
      local_e0 = 0;
      local_e8 = 0;
      local_f0 = 0;
      local_f8 = 0;
      local_100 = 0;
      local_108 = (longlong *)0x0;
      uStack_110 = 0;
      local_118 = &PTR_FUN_14b473650;
      lVar32 = lVar32 + lVar30;
      *(undefined1 *)(lVar32 + 0xb0) = *puVar27;
      *(undefined1 *)(lVar32 + 0xb2) = puVar27[1];
      *(undefined1 *)(lVar32 + 0xb1) = puVar27[2];
      puVar27 = puVar27 + 3;
    } while (puVar27 != puVar31);
  }
  *(byte *)(lVar6 + 0x1b0) = *(byte *)(lVar6 + 0x1b0) & 0xfe | *(byte *)((longlong)param_2 + 0xa9);
  puVar26 = (undefined8 *)(lVar6 + 0x178);
  if (puVar26 != (undefined8 *)(param_2 + 0x34)) {
    iVar28 = param_2[0x36];
    pvVar10 = *(void **)(param_2 + 0x34);
    *(int *)(lVar6 + 0x180) = iVar28;
    if (iVar28 == 0 && *(int *)(lVar6 + 0x184) == 0) {
      *(undefined4 *)(lVar6 + 0x184) = 0;
    }
    else {
      FUN_1446dd670(puVar26,iVar28);
      if (iVar28 != 0) {
        memcpy((void *)*puVar26,pvVar10,(longlong)iVar28 * 2);
      }
    }
  }
  local_128 = 0;
  plStack_120 = (longlong *)0x0;
  FUN_140e6da68(&local_118,*(undefined8 *)(param_2 + 0x38));
  FUN_140008f88(lVar6 + 0x168,&local_118);
  if (local_118 != (undefined **)0x0) {
    (**(code **)(*local_118 + 0x10))();
  }
  plVar7 = plStack_120;
  if (plStack_120 != (longlong *)0x0) {
    LOCK();
    plVar8 = plStack_120 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*plStack_120)(plStack_120);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  *(undefined1 *)(lVar6 + 0x1e9) = *(undefined1 *)((longlong)param_2 + 0x119);
  uVar23 = DAT_14cbd9850;
  local_158 = (longlong *)0x0;
  local_150 = *(int *)(lVar6 + 400);
  lVar29 = (longlong)local_150;
  pvVar10 = *(void **)(lVar6 + 0x188);
  if (lVar29 == 0) {
    local_14c = 0;
  }
  else {
    FUN_1446dd670(&local_158,local_150,0);
    memcpy(local_158,pvVar10,lVar29 * 2);
  }
  cVar21 = FUN_1402ca054(uVar23,local_158);
  if (local_158 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  lVar29 = local_1e0;
  if (cVar21 != '\0') {
    FUN_1446ddc76(&local_128,"respawn_cost_text");
    FUN_1446dcdd4(&local_118,&local_128);
    FUN_140ac6c96(&local_118,lVar6 + 0x158);
    if (local_100 != 0) {
      FUN_1400020a8();
    }
  }
  uVar23 = DAT_14cbd9860;
  if (*(longlong *)(param_2 + 0x38) != 0) {
    local_178 = (void *)0x0;
    local_170 = *(int *)(lVar6 + 400);
    lVar29 = (longlong)local_170;
    pvVar10 = *(void **)(lVar6 + 0x188);
    if (lVar29 == 0) {
      local_16c = 0;
      iVar28 = 0;
    }
    else {
      FUN_1446dd670(&local_178,local_170,0);
      memcpy(local_178,pvVar10,lVar29 * 2);
      iVar28 = local_170;
    }
    iVar12 = iVar28 + -1;
    if (iVar28 == 0) {
      iVar12 = 0;
    }
    cVar21 = FUN_1402ca054(uVar23,local_178,iVar12);
    if (local_178 != (void *)0x0) {
      FUN_1400020a8();
    }
    lVar29 = local_1e0;
    if (cVar21 != '\0') {
      FUN_1446ddc76(&local_128,"acquired_text",1);
      FUN_1446dcdd4(&local_118,&local_128);
      FUN_140ac6c96(&local_118,local_1d8);
      if (local_100 != 0) {
        FUN_1400020a8();
      }
    }
  }
  if (*(longlong *)(param_2 + 0x40) != 0) {
    FUN_144a5dc74(local_198);
    FUN_1446ddc76(&local_128,"VaultLevelText",1);
    FUN_1446dcdd4(&local_118,&local_128);
    FUN_140ac6c96(&local_118,local_198);
    if (local_100 != 0) {
      FUN_1400020a8();
    }
    lVar32 = *(longlong *)(param_2 + 0x40);
    FUN_14023409e(&local_1b8,local_198,1);
    local_118 = (undefined **)CONCAT44(local_118._4_4_,1);
    local_108 = (longlong *)0x0;
    local_100 = local_100 & 0xffffffff00000000;
    local_130 = &local_f8;
    local_138 = &local_118;
    uStack_110 = lVar32;
    FUN_14010d304(&local_128);
    local_148 = local_1b8;
    local_140 = local_1b0;
    if (local_1b0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_1b0 + 1) = (int)local_1b0[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(local_1a8,&local_148,&local_128);
    FUN_14007f2db(local_128,(ulonglong)plStack_120 & 0xffffffff);
    if (local_128 != 0) {
      FUN_1400020a8();
    }
    if (local_108 != (longlong *)0x0) {
      (**(code **)(*local_108 + 0x10))();
    }
    if (local_1b0 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_1b0 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)*local_1b0)(local_1b0);
        LOCK();
        piVar1 = (int *)((longlong)local_1b0 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_1b0 + 0x10))(local_1b0);
        }
      }
    }
    uVar23 = FUN_1447a1f4a(local_1a8);
    FUN_144a787a6(lVar6 + 0x1c8,uVar23);
    if (local_1a8[0] != (longlong *)0x0) {
      (**(code **)(*local_1a8[0] + 0x10))();
    }
    if (local_198[0] != (longlong *)0x0) {
      (**(code **)(*local_198[0] + 0x10))();
    }
  }
  cVar21 = *(char *)(param_2 + 0x46);
  *(char *)(lVar6 + 0x1e8) = cVar21;
  if (cVar21 == '\x01') {
    FUN_144a5dc74(local_198);
    FUN_1446ddc76(&local_128,"VaultProgressPercent",1);
    FUN_1446dcdd4(&local_118,&local_128);
    FUN_140ac6c96(&local_118,local_198);
    if (local_100 != 0) {
      FUN_1400020a8();
    }
    fVar3 = (float)param_2[0x26];
    FUN_14023409e(&local_1c8,local_198,1);
    local_118 = (undefined **)((ulonglong)local_118 & 0xffffffff00000000);
    local_108 = (longlong *)0x0;
    local_100 = local_100 & 0xffffffff00000000;
    uStack_110 = (longlong)((int)ROUND(fVar3 + fVar3 + 0.5) >> 1);
    local_130 = &local_f8;
    local_138 = &local_118;
    FUN_14010d304(&local_128);
    local_148 = local_1c8;
    local_140 = local_1c0;
    if (local_1c0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_1c0 + 1) = (int)local_1c0[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(local_1a8,&local_148,&local_128);
    FUN_14007f2db(local_128,(ulonglong)plStack_120 & 0xffffffff);
    if (local_128 != 0) {
      FUN_1400020a8();
    }
    if (local_108 != (longlong *)0x0) {
      (**(code **)(*local_108 + 0x10))();
    }
    if (local_1c0 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_1c0 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)*local_1c0)(local_1c0);
        LOCK();
        piVar1 = (int *)((longlong)local_1c0 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_1c0 + 0x10))(local_1c0);
        }
      }
    }
    uVar23 = FUN_1447a1f4a(local_1a8);
    FUN_144a787a6(lVar6 + 0x1d8,uVar23);
    if (local_1a8[0] != (longlong *)0x0) {
      (**(code **)(*local_1a8[0] + 0x10))();
    }
    FUN_144a787a6(lVar6 + 0x1b8,param_2 + 0x42);
    if (local_198[0] != (longlong *)0x0) {
      (**(code **)(*local_198[0] + 0x10))();
    }
  }
  puVar11 = *(ushort **)(lVar6 + 0x80);
  if (puVar11 != (ushort *)0x0) {
    *puVar11 = *puVar11 | (ushort)(1L << (*(byte *)(lVar6 + 0x78) & 0x3f));
  }
  FUN_140845074(lVar6,lVar29 + 0x30);
  *(undefined1 *)(lVar29 + 0x298) = 1;
  if ((int)param_2[0x1c] < 2) {
    if (*(longlong *)(lVar29 + 0x308) == DAT_14cbd9880) {
      FUN_1400b22c2(&local_118,"DisplayGenericSlideOut");
      FUN_140de1078(lVar29,&local_118,0,0);
      if (local_118 != (undefined **)0x0) {
        FUN_1400020a8();
      }
    }
  }
  else {
    FUN_140de1078(lVar29,param_2 + 0x1a,0,0);
  }
  lVar6 = *(longlong *)(lVar29 + 0x288);
  if ((lVar6 != 0) && (FUN_14098b788(lVar6,lVar29 + 0xd8), *(longlong *)(lVar6 + 0x120) != 0)) {
    FUN_14575b2fa(lVar29);
  }
  if (*(char *)(param_2 + 0x3e) == '\x01') {
    FUN_1442ba168(lVar29,1);
  }
LAB_14098aed3:
  if ((local_60 ^ (ulonglong)auStack_208) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14098b610 FUN_14098b610 body=375 status=ok
// SIG undefined FUN_14098b610(void)

void FUN_14098b610(longlong param_1,int param_2)

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
  uVar5 = lVar4 * 0xb8;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14098b698;
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
LAB_14098b698:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0xb8)) {
    uVar7 = uVar5 / 0xb8 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0xb8,8);
  return;
}



// FUNCTION 14098b788 FUN_14098b788 body=757 status=ok
// SIG undefined FUN_14098b788(void)

void FUN_14098b788(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  undefined8 *puVar7;
  uint uVar8;
  longlong *plVar9;
  uint uVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  bool bVar14;
  undefined1 auStack_88 [47];
  undefined1 local_59;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar2 = *(longlong **)(param_1 + 0x68);
  if (plVar2 == (longlong *)0x0) goto LAB_14098b7e3;
  iVar6 = (int)plVar2[1];
  do {
    if (iVar6 == 0) goto LAB_14098b7e3;
    LOCK();
    iVar12 = (int)plVar2[1];
    bVar14 = iVar6 == iVar12;
    if (bVar14) {
      *(int *)(plVar2 + 1) = iVar6 + 1;
      iVar12 = iVar6;
    }
    iVar6 = iVar12;
    UNLOCK();
  } while (!bVar14);
  lVar3 = *(longlong *)(param_1 + 0x60);
  if (((lVar3 != 0) && (lVar13 = *(longlong *)(param_1 + 0x108), lVar13 != 0)) &&
     (*(int *)(param_1 + 0x200) != *(int *)(param_1 + 0x22c))) {
    uVar8 = (uint)((ulonglong)lVar13 >> 0x10);
    uVar10 = (uint)lVar13 & 0xffff;
    uVar8 = (int)((ulonglong)lVar13 >> 0x20) + ((uint)lVar13 << 0x10 | uVar10) +
            (uVar8 << 0x13 | uVar8 & 0xffff) + (uVar10 >> 4);
    lVar11 = *(longlong *)(param_1 + 0x238);
    if (*(longlong *)(param_1 + 0x238) == 0) {
      lVar11 = param_1 + 0x230;
    }
    iVar6 = *(int *)(lVar11 + (ulonglong)(*(int *)(param_1 + 0x240) - 1U & uVar8) * 4);
    if (iVar6 != -1) {
      lVar11 = *(longlong *)(param_1 + 0x1f8);
      iVar12 = iVar6;
      do {
        if (*(longlong *)(lVar11 + (longlong)iVar12 * 0x14) == lVar13) goto LAB_14098b8cf;
        iVar12 = *(int *)(lVar11 + (longlong)iVar12 * 0x14 + 0xc);
      } while (iVar12 != -1);
    }
  }
  goto LAB_14098b7d9;
  while (iVar6 = *(int *)((longlong)plVar9 + 0xc), iVar6 != -1) {
LAB_14098b8cf:
    plVar9 = (longlong *)(lVar11 + (longlong)iVar6 * 0x14);
    if (*plVar9 == lVar13) goto LAB_14098b8e4;
  }
  plVar9 = (longlong *)0x0;
LAB_14098b8e4:
  if (((char)plVar9[1] == '\0') && ((int)param_2[1] != *(int *)((longlong)param_2 + 0x34))) {
    plVar9 = param_2 + 7;
    if ((longlong *)param_2[8] != (longlong *)0x0) {
      plVar9 = (longlong *)param_2[8];
    }
    iVar6 = *(int *)((longlong)plVar9 + (ulonglong)((int)param_2[9] - 1U & uVar8) * 4);
    if (iVar6 != -1) {
      do {
        plVar9 = (longlong *)(*param_2 + (longlong)iVar6 * 0x18);
        if (*plVar9 == lVar13) {
          if (plVar9 + 1 != (longlong *)0x0 && plVar9 != (longlong *)0x0) {
            puVar7 = (undefined8 *)FUN_14001cc68(0x48,0x10);
            local_59 = *(undefined1 *)(lVar3 + 0x148);
            local_58 = 0;
            FUN_14485c47a(&local_58,plVar9[1]);
            uVar5 = local_58;
            uVar4 = *(undefined8 *)(param_1 + 0x54);
            *puVar7 = &PTR_FUN_14b9bf530;
            FUN_1446ddc76(&local_50,"AddInputMappingContext",1);
            FUN_14039176c(puVar7,uVar4,local_50,1);
            *puVar7 = &PTR_FUN_14b9bf530;
            puVar7[7] = uVar5;
            *(undefined1 *)(puVar7 + 8) = local_59;
            FUN_140391314(lVar3,puVar7);
            if (*(int *)(param_1 + 0x200) == *(int *)(param_1 + 0x22c)) goto LAB_14098b9f9;
            lVar3 = *(longlong *)(param_1 + 0x108);
            uVar8 = (uint)((ulonglong)lVar3 >> 0x10);
            uVar10 = (uint)lVar3 & 0xffff;
            lVar13 = param_1 + 0x230;
            if (*(longlong *)(param_1 + 0x238) != 0) {
              lVar13 = *(longlong *)(param_1 + 0x238);
            }
            iVar6 = *(int *)(lVar13 + (ulonglong)
                                      (*(int *)(param_1 + 0x240) - 1U &
                                      (int)((ulonglong)lVar3 >> 0x20) +
                                      ((uint)lVar3 << 0x10 | uVar10) +
                                      (uVar8 << 0x13 | uVar8 & 0xffff) + (uVar10 >> 4)) * 4);
            if (iVar6 == -1) goto LAB_14098b9f9;
            goto LAB_14098ba61;
          }
          break;
        }
        iVar6 = (int)plVar9[2];
      } while (iVar6 != -1);
    }
  }
  goto LAB_14098b7d9;
  while (iVar6 = *(int *)((longlong)plVar9 + 0xc), iVar6 != -1) {
LAB_14098ba61:
    plVar9 = (longlong *)(*(longlong *)(param_1 + 0x1f8) + (longlong)iVar6 * 0x14);
    if (*plVar9 == lVar3) goto LAB_14098b9fb;
  }
LAB_14098b9f9:
  plVar9 = (longlong *)0x0;
LAB_14098b9fb:
  *(undefined1 *)(plVar9 + 1) = 1;
LAB_14098b7d9:
  LOCK();
  plVar9 = plVar2 + 1;
  *(int *)plVar9 = (int)*plVar9 + -1;
  UNLOCK();
  if ((int)*plVar9 == 0) {
    (**(code **)*plVar2)(plVar2);
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
LAB_14098b7e3:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14098ba7e FUN_14098ba7e body=466 status=ok
// SIG undefined FUN_14098ba7e(void)

undefined8
FUN_14098ba7e(longlong param_1,longlong *param_2,uint param_3,uint param_4,byte param_5,byte param_6
             )

{
  ulonglong uVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_118 [32];
  undefined **local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined2 local_e4;
  undefined1 local_e0 [24];
  longlong local_c8;
  longlong local_b8;
  longlong local_a8;
  longlong local_98;
  longlong local_88;
  longlong local_78;
  longlong local_68;
  undefined2 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_f0 = 0xffffffffffffffff;
  local_e8 = 0xffffffff;
  local_e4 = 0;
  memset(local_e0,0,0x8c);
  local_f8 = &PTR_FUN_14b8fbe80;
  local_50 = 0;
  if (param_4 < param_3) {
    local_f8 = &PTR_FUN_14b517f90;
    uVar4 = 0;
  }
  else {
    uVar4 = 0;
    do {
      uVar1 = (longlong)(int)param_3 % (longlong)*(int *)(param_1 + 0x2c);
      uVar2 = -(int)uVar1;
      uVar3 = (ulonglong)uVar2;
      if ((int)uVar2 < 0) {
        uVar3 = uVar1 & 0xffffffff;
      }
      if (param_3 == *(uint *)(*(longlong *)(param_1 + 0x10) + 0xc + uVar3 * 0xb0)) {
        lVar5 = *(longlong *)(param_1 + 0x10) + uVar3 * 0xb0;
        FUN_14098bcca(&local_f8,lVar5);
        local_50 = *(undefined2 *)(lVar5 + 0xa8);
        if (((byte)(param_5 ^ 1 | local_e4._1_1_) != 1) || ((local_e4._1_1_ & param_6) == 1)) {
          (**(code **)(*param_2 + 0x68))(param_2,param_3,&local_f8);
          uVar4 = 1;
        }
      }
      param_3 = param_3 + 1;
    } while (param_3 <= param_4);
    local_f8 = &PTR_FUN_14b517f90;
    if (local_68 != 0) {
      FUN_1400020a8();
    }
  }
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  if (local_c8 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 14098bc52 FUN_14098bc52 body=119 status=ok
// SIG undefined FUN_14098bc52(void)

undefined8 FUN_14098bc52(longlong param_1,int param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  
  uVar3 = (longlong)param_2 % (longlong)*(int *)(param_1 + 0x2c);
  uVar4 = -(int)uVar3;
  uVar5 = (ulonglong)uVar4;
  if ((int)uVar4 < 0) {
    uVar5 = uVar3 & 0xffffffff;
  }
  *(int *)(param_1 + 0x24) = param_2;
  *(int *)(param_1 + 0x28) = (int)uVar5;
  lVar2 = *(longlong *)(param_1 + 0x10);
  FUN_14098bcca(lVar2 + uVar5 * 0xb0,param_3);
  *(undefined2 *)(lVar2 + 0xa8 + uVar5 * 0xb0) = *(undefined2 *)(param_3 + 0xa8);
  iVar1 = *(int *)(*(longlong *)(param_1 + 0x10) + 0xc + (longlong)*(int *)(param_1 + 0x28) * 0xb0);
  iVar6 = *(int *)(param_1 + 0x20);
  if (*(int *)(param_1 + 0x20) < iVar1) {
    iVar6 = iVar1;
  }
  *(int *)(param_1 + 0x20) = iVar6;
  return CONCAT71((uint7)(uint3)((uint)iVar1 >> 8),1);
}



// FUNCTION 14098bcca FUN_14098bcca body=513 status=ok
// SIG undefined FUN_14098bcca(void)

longlong FUN_14098bcca(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  void *pvVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  uVar2 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_2 + 0xe);
  *(undefined8 *)(param_1 + 8) = uVar2;
  uVar4 = *(undefined4 *)(param_2 + 0x1c);
  uVar5 = *(undefined4 *)(param_2 + 0x20);
  uVar6 = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x1c) = uVar4;
  *(undefined4 *)(param_1 + 0x20) = uVar5;
  *(undefined4 *)(param_1 + 0x24) = uVar6;
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 0x38);
    pvVar3 = *(void **)(param_2 + 0x30);
    *(int *)(param_1 + 0x38) = iVar1;
    if (iVar1 == 0 && *(int *)(param_1 + 0x3c) == 0) {
      *(undefined4 *)(param_1 + 0x3c) = 0;
    }
    else {
      FUN_1447c510a((undefined8 *)(param_1 + 0x30),iVar1);
      if (iVar1 != 0) {
        memcpy(*(void **)(param_1 + 0x30),pvVar3,(longlong)iVar1 << 2);
      }
    }
    iVar1 = *(int *)(param_2 + 0x48);
    pvVar3 = *(void **)(param_2 + 0x40);
    *(int *)(param_1 + 0x48) = iVar1;
    if (iVar1 == 0 && *(int *)(param_1 + 0x4c) == 0) {
      *(undefined4 *)(param_1 + 0x4c) = 0;
    }
    else {
      FUN_1447c510a((undefined8 *)(param_1 + 0x40),iVar1);
      if (iVar1 != 0) {
        memcpy(*(void **)(param_1 + 0x40),pvVar3,(longlong)iVar1 << 2);
      }
    }
    iVar1 = *(int *)(param_2 + 0x58);
    pvVar3 = *(void **)(param_2 + 0x50);
    *(int *)(param_1 + 0x58) = iVar1;
    if (iVar1 == 0 && *(int *)(param_1 + 0x5c) == 0) {
      *(undefined4 *)(param_1 + 0x5c) = 0;
    }
    else {
      FUN_1447c510a((undefined8 *)(param_1 + 0x50),iVar1);
      if (iVar1 != 0) {
        memcpy(*(void **)(param_1 + 0x50),pvVar3,(longlong)iVar1 << 2);
      }
    }
    iVar1 = *(int *)(param_2 + 0x68);
    pvVar3 = *(void **)(param_2 + 0x60);
    *(int *)(param_1 + 0x68) = iVar1;
    if (iVar1 == 0 && *(int *)(param_1 + 0x6c) == 0) {
      *(undefined4 *)(param_1 + 0x6c) = 0;
    }
    else {
      FUN_1447c510a((undefined8 *)(param_1 + 0x60),iVar1);
      if (iVar1 != 0) {
        memcpy(*(void **)(param_1 + 0x60),pvVar3,(longlong)iVar1 << 2);
      }
    }
    iVar1 = *(int *)(param_2 + 0x78);
    pvVar3 = *(void **)(param_2 + 0x70);
    *(int *)(param_1 + 0x78) = iVar1;
    if (iVar1 == 0 && *(int *)(param_1 + 0x7c) == 0) {
      *(undefined4 *)(param_1 + 0x7c) = 0;
    }
    else {
      FUN_1447c510a((undefined8 *)(param_1 + 0x70),iVar1);
      if (iVar1 != 0) {
        memcpy(*(void **)(param_1 + 0x70),pvVar3,(longlong)iVar1 << 2);
      }
    }
  }
  FUN_14054c6c4(param_1 + 0x80,param_2 + 0x80);
  FUN_14054c6c4(param_1 + 0x90,param_2 + 0x90);
  *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_2 + 0xa0);
  return param_1;
}



// FUNCTION 14098beda FUN_14098beda body=55 status=ok
// SIG undefined FUN_14098beda(void)

void FUN_14098beda(undefined8 param_1,longlong param_2)

{
  int iVar1;
  
  if ((*(byte *)(param_2 + 0x28) & 1) != 0) {
    iVar1 = FUN_1448332aa(param_2,&DAT_14ac8a528);
    if (iVar1 < 0) {
      FUN_147f4ecbe(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 14098bf12 FUN_14098bf12 body=332 status=ok
// SIG undefined FUN_14098bf12(void)

void FUN_14098bf12(longlong param_1,int param_2)

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
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_14098bf80;
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
LAB_14098bf80:
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



// FUNCTION 14098c05e FUN_14098c05e body=370 status=ok
// SIG undefined FUN_14098c05e(void)

void FUN_14098c05e(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14098c0e7;
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
LAB_14098c0e7:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x18)) {
    uVar7 = uVar5 / 0x18 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x18,8);
  return;
}



// FUNCTION 14098c1d0 FUN_14098c1d0 body=4609 status=ok
// SIG undefined FUN_14098c1d0(void)

void FUN_14098c1d0(undefined **param_1,longlong param_2,undefined8 param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  LARGE_INTEGER LVar9;
  ulonglong uVar10;
  char cVar11;
  byte bVar12;
  int iVar13;
  DWORD DVar14;
  DWORD DVar15;
  undefined **ppuVar16;
  undefined8 uVar17;
  undefined4 *puVar18;
  uint *puVar19;
  uint uVar20;
  undefined *puVar21;
  undefined ***pppuVar22;
  uint *puVar23;
  ulonglong uVar24;
  longlong lVar25;
  undefined **ppuVar26;
  undefined8 *puVar27;
  longlong *plVar28;
  longlong lVar29;
  bool bVar30;
  bool bVar31;
  undefined1 auStack_158 [32];
  LARGE_INTEGER *local_138;
  undefined **local_130;
  undefined8 local_128;
  longlong *local_120;
  undefined **local_118;
  undefined ***local_108;
  undefined **local_f8;
  undefined **ppuStack_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined **local_d8;
  undefined **local_d0;
  undefined8 local_c8;
  undefined **local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  LARGE_INTEGER local_98;
  undefined8 uStack_90;
  undefined ***local_88;
  uint local_80;
  uint local_7c;
  undefined **local_78;
  undefined **ppuStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  byte local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_128 = param_3;
  FUN_1404077d0();
  iVar13 = *(int *)(param_1 + 7);
  if (iVar13 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar13);
  }
  ppuVar16 = param_1 + 2;
  if (*(int *)((longlong)param_1 + 0x1c) < iVar13) {
    FUN_14183a8e8(ppuVar16);
  }
  *(undefined2 *)((longlong)param_1 + 0x42) = 0;
  local_130 = param_1;
  if ((longlong)*(int *)(param_2 + 0x110) != 0) {
    plVar28 = *(longlong **)(param_2 + 0x108);
    local_120 = plVar28 + (longlong)*(int *)(param_2 + 0x110) * 2;
    do {
      plVar4 = (longlong *)*plVar28;
      if (*(char *)(*(longlong *)(*(longlong *)(plVar4[1] + 0x38) + 0xb8) + 0x20 +
                   (longlong)(int)plVar4[0x19] * 0x48) == '\x01') {
        (**(code **)(*plVar4 + 0x78))(plVar4,&local_98);
        LVar9 = local_98;
        lVar29 = (longlong)(int)uStack_90;
        if (lVar29 != 0) {
          lVar25 = 0;
          do {
            plVar5 = *(longlong **)(LVar9.QuadPart + lVar25);
            if (((plVar5 != (longlong *)0x0) &&
                (cVar11 = (**(code **)(*plVar5 + 0x308))(plVar5), cVar11 != '\0')) &&
               (cVar11 = (**(code **)(*plVar5 + 0x2d8))
                                   (plVar5,*(undefined1 *)((longlong)plVar4 + 0xd1)), cVar11 != '\0'
               )) {
              cVar11 = (**(code **)(*plVar5 + 0x300))(plVar5);
              if (((cVar11 == '\0') ||
                  (lVar6 = *plVar28, *(char *)(*(longlong *)(lVar6 + 0x10) + 0xb0) != '\x01')) ||
                 (*(int *)(lVar6 + 0xd4) == 4)) {
                uVar17 = 0;
              }
              else {
                uVar17 = (**(code **)(*plVar5 + 0x2a0))
                                   (plVar5,*(undefined4 *)((longlong)local_130 + 0x44),lVar6,
                                    local_128);
                if (*(char *)((longlong)plVar5 + 0x5c) != '\x03') {
                  *(undefined1 *)((longlong)local_130 + 0x42) = 1;
                }
                cVar11 = (**(code **)(*plVar5 + 0x338))(plVar5);
                if (cVar11 != '\0') {
                  *(undefined1 *)((longlong)local_130 + 0x43) = 1;
                }
              }
              iVar13 = *(int *)(local_130 + 3);
              *(uint *)(local_130 + 3) = iVar13 + 1U;
              if (*(uint *)((longlong)local_130 + 0x1c) < iVar13 + 1U) {
                FUN_1481f82ac(ppuVar16,iVar13);
              }
              *(undefined8 *)(*ppuVar16 + (longlong)iVar13 * 8) = uVar17;
            }
            lVar25 = lVar25 + 8;
          } while (lVar29 * 8 != lVar25);
        }
      }
      plVar28 = plVar28 + 2;
    } while (plVar28 != local_120);
  }
  ppuVar16 = (undefined **)FUN_1448fe162();
  *ppuVar16 = (undefined *)UE::Tasks::Private::FTaskBase::vftable;
  ppuVar16[1] = &DAT_100000001;
  ppuVar16[2] = (undefined *)0x0;
  *(undefined4 *)(ppuVar16 + 3) = 0;
  *(undefined4 *)(ppuVar16 + 4) = 0xffffffff;
  ppuVar16[6] = (undefined *)0x0;
  ppuVar16[7] = (undefined *)0x100000000;
  *(undefined1 *)(ppuVar16 + 8) = 1;
  ppuVar16[0xe] =
       (undefined *)
       LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
       TTaskDelegateDummy::vftable;
  ppuVar16[0xf] = (undefined *)0x0;
  ppuVar16[0x10] = (undefined *)0xe800000000000020;
  ppuVar16[0x12] = (undefined *)0x0;
  ppuVar16[0x13] = (undefined *)0x100000000;
  *(undefined2 *)(ppuVar16 + 0x14) = 0;
  LOCK();
  bVar30 = *(char *)(ppuVar16 + 8) == '\x01';
  if (bVar30) {
    *(char *)(ppuVar16 + 8) = '\0';
  }
  UNLOCK();
  if (!bVar30) {
    FUN_14008cdb0(ppuVar16 + 8);
  }
  *ppuVar16 = (undefined *)&PTR_FUN_149e1e2e0;
  if (*(code **)(ppuVar16[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(ppuVar16[0xe] + 0x18))(ppuVar16 + 0xe,ppuVar16 + 9);
  }
  ppuVar16[0xe] =
       (undefined *)
       LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
       ::vftable;
  ppuVar16[9] = (undefined *)ppuVar16;
  ppuVar16[10] = (undefined *)ppuVar16;
  lVar29 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  lVar25 = *(longlong *)(lVar29 + 0x2b8);
  if (lVar25 == 0) {
    puVar21 = (undefined *)0x0;
  }
  else {
    puVar21 = *(undefined **)(lVar25 + 0x30);
  }
  ppuVar16[0xf] = puVar21;
  ppuVar16[0x10] = (undefined *)0xc8000052b8920980;
  *(undefined4 *)((longlong)ppuVar16 + 0x1c) = 2;
  if (ppuVar16 != (undefined **)0x0) {
    LOCK();
    *(int *)(ppuVar16 + 1) = *(int *)(ppuVar16 + 1) + 1;
    UNLOCK();
  }
  plVar28 = (longlong *)(lVar29 + 0x2b8);
  local_108 = (undefined ***)0x0;
  local_f8 = &PTR_LAB_14ae26ad0;
  ppuStack_f0 = ppuVar16;
  local_118 = (undefined **)&LAB_143acd4de;
  if (DAT_14ca9a43c == 2) {
    LOCK();
    bVar30 = DAT_14cb3af10 == '\0';
    if (bVar30) {
      DAT_14cb3af10 = '\x01';
    }
    UNLOCK();
    if (!bVar30) {
      FUN_1447d2058(&DAT_14cb3af10);
    }
    if (*(undefined **)
         (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xec0) ==
        &DAT_14cb3af08) {
      local_98.QuadPart = (LONGLONG)local_118;
      local_88 = local_108;
      local_108 = (undefined ***)0x0;
      local_78 = local_f8;
      ppuStack_70 = ppuStack_f0;
      local_68 = local_e8;
      uStack_64 = uStack_e4;
      uStack_60 = uStack_e0;
      uStack_5c = uStack_dc;
      if (local_118 != (undefined **)0x0) {
        local_118 = (undefined **)0x0;
      }
      local_58 = 0;
      FUN_1401a96bc(&DAT_14cb3af08,&local_98,L"SignalFence",&DAT_14cb439dc);
LAB_14098c670:
      (*(code *)(&PTR_LAB_14a3931f0)[local_58])();
      bVar30 = false;
    }
    else {
      if (DAT_14cb3af18 != 0) {
        local_98.QuadPart = (LONGLONG)local_118;
        local_88 = local_108;
        local_108 = (undefined ***)0x0;
        local_78 = local_f8;
        ppuStack_70 = ppuStack_f0;
        local_68 = local_e8;
        uStack_64 = uStack_e4;
        uStack_60 = uStack_e0;
        uStack_5c = uStack_dc;
        if (local_118 != (undefined **)0x0) {
          local_118 = (undefined **)0x0;
        }
        local_58 = 0;
        FUN_1401a98c8(&DAT_14cb3af08,&local_98,L"SignalFence",&DAT_14cb439dc);
        goto LAB_14098c670;
      }
      bVar30 = true;
    }
    LOCK();
    bVar31 = DAT_14cb3af10 == '\x01';
    if (bVar31) {
      DAT_14cb3af10 = '\0';
    }
    UNLOCK();
    if (!bVar31) {
      FUN_14008cdb0(&DAT_14cb3af10);
    }
    if (bVar30) {
      local_d8 = local_118;
      local_c8 = local_108;
      local_a8 = CONCAT44(uStack_e4,local_e8);
      uStack_a0 = CONCAT44(uStack_dc,uStack_e0);
      local_b8 = local_f8;
      uStack_b0 = ppuStack_f0;
      if (local_118 != (undefined **)0x0) goto LAB_14098c6e4;
      ppuVar26 = (undefined **)0x0;
      goto LAB_14098c6ed;
    }
  }
  else {
    local_d8 = (undefined **)&LAB_143acd4de;
    local_c8 = (undefined ***)0x0;
    local_b8 = &PTR_LAB_14ae26ad0;
    uStack_b0 = ppuVar16;
    local_a8 = CONCAT44(uStack_e4,local_e8);
    uStack_a0 = CONCAT44(uStack_dc,uStack_e0);
LAB_14098c6e4:
    local_118 = (undefined **)0x0;
    ppuVar26 = local_d8;
LAB_14098c6ed:
    local_108 = (undefined ***)0x0;
    lVar29 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    iVar13 = *(int *)(lVar29 + 0xc60);
    local_f8 = local_b8;
    ppuStack_f0 = uStack_b0;
    if (DAT_14c86a9fc == 0) {
      if (iVar13 != 2) {
        if (iVar13 != 1) goto LAB_14098c711;
        DVar14 = FUN_140ad26c0();
        DVar15 = GetCurrentThreadId();
        ppuVar26 = local_d8;
        if (DVar14 == DVar15) goto LAB_14098c716;
        goto LAB_14098c752;
      }
LAB_14098c716:
      pppuVar22 = local_c8;
      if (local_c8 == (undefined ***)0x0) {
        pppuVar22 = (undefined ***)&local_b8;
      }
      uVar17 = (*(code *)(*pppuVar22)[1])();
      (*(code *)ppuVar26)(uVar17);
    }
    else {
LAB_14098c711:
      if (iVar13 == 0x10) goto LAB_14098c716;
LAB_14098c752:
      if (DAT_14ca9a438 == '\0') {
        ppuVar26 = local_d8;
        if ((DAT_14c86a9f8 != '\x01') || (iVar13 = *(int *)(lVar29 + 0xc60), iVar13 == 2))
        goto LAB_14098c716;
        if (iVar13 == 1) {
          DVar14 = FUN_140ad26c0();
          DVar15 = GetCurrentThreadId();
          ppuVar26 = local_d8;
          if (DVar14 == DVar15) goto LAB_14098c716;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar19 = (uint *)*puVar2;
        if (puVar19 != (uint *)0x0) goto LAB_14098ca81;
        do {
          uVar20 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar20 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar20 | 1;
            __tlregdtor(&LAB_143acaafd);
          }
          lVar29 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar18 = *(undefined4 **)(lVar29 + 0x310);
          *(undefined8 *)(lVar29 + 0x310) = 0;
          if (puVar18 == (undefined4 *)0x0) {
            puVar18 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar18 = 0xffffffff;
          *(undefined4 **)(puVar18 + 0x10) = puVar18 + 0x16;
          puVar18[0x12] = 0;
          *puVar2 = puVar18;
          FUN_140217a48(puVar2);
          puVar19 = (uint *)*puVar2;
LAB_14098ca81:
          uVar24 = *(longlong *)(puVar19 + 0x10) + 0xf;
          uVar20 = puVar19[0x12];
          while( true ) {
            puVar27 = (undefined8 *)(uVar24 & 0xfffffffffffffff0);
            if (puVar27 + 0x1e <= puVar19 + 0x4000) {
              *(undefined8 **)(puVar19 + 0x10) = puVar27 + 0x1e;
              puVar19[0x12] = uVar20 + 1;
              FUN_1447247dc(puVar27,0);
              *puVar27 = &PTR_FUN_14ae26ac0;
              puVar27[0x16] = local_d8;
              puVar27[0x18] = local_c8;
              local_c8 = (undefined ***)0x0;
              *(undefined4 *)(puVar27 + 0x1c) = (undefined4)local_a8;
              *(undefined4 *)((longlong)puVar27 + 0xe4) = local_a8._4_4_;
              *(undefined4 *)(puVar27 + 0x1d) = (undefined4)uStack_a0;
              *(undefined4 *)((longlong)puVar27 + 0xec) = uStack_a0._4_4_;
              *(undefined4 *)(puVar27 + 0x1a) = (undefined4)local_b8;
              *(undefined4 *)((longlong)puVar27 + 0xd4) = local_b8._4_4_;
              *(undefined4 *)(puVar27 + 0x1b) = (undefined4)uStack_b0;
              *(undefined4 *)((longlong)puVar27 + 0xdc) = uStack_b0._4_4_;
              if (local_d8 != (undefined **)0x0) {
                local_d8 = (undefined **)0x0;
              }
              if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
                uVar20 = DAT_14c7585c8 >> 10 & 3;
                iVar13 = 0;
                if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar20 < 2) {
                  uVar24 = (ulonglong)(byte)(&DAT_149e38edc)[uVar20];
                  iVar13 = 0;
                }
                else {
                  uVar24 = 2;
                }
              }
              else {
                iVar13 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                         *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
                uVar24 = 5;
              }
              if (*(code **)(puVar27[0xe] + 0x18) != FUN_144713626) {
                (**(code **)(puVar27[0xe] + 0x18))(puVar27 + 0xe,puVar27 + 9);
              }
              puVar27[0xe] = LowLevelTasks::
                             TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                             TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                             ::vftable;
              puVar27[9] = puVar27;
              puVar27[10] = puVar27;
              lVar29 = *plVar28;
              if (lVar29 == 0) {
                uVar10 = 1;
                if ((char)uVar24 != '\x06') {
                  uVar10 = uVar24;
                }
                uVar24 = uVar10;
                uVar17 = 0;
              }
              else {
                if ((char)uVar24 == '\x06') {
                  uVar24 = *(ulonglong *)(lVar29 + 0x38) >> 0x3b;
                }
                uVar17 = *(undefined8 *)(lVar29 + 0x30);
              }
              puVar27[0xf] = uVar17;
              puVar27[0x10] = uVar24 << 0x3b | 0xc00000527800b400;
              *(int *)((longlong)puVar27 + 0x1c) = iVar13;
              if (puVar27 == (undefined8 *)0x0) {
                local_98.s.LowPart._0_1_ = 1;
                FUN_1447439e4(0);
              }
              else {
                LOCK();
                *(int *)(puVar27 + 1) = *(int *)(puVar27 + 1) + 1;
                UNLOCK();
                local_98.s.LowPart._0_1_ = 1;
                FUN_1447439e4(puVar27);
                LOCK();
                piVar1 = (int *)(puVar27 + 1);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)*puVar27)(puVar27,1);
                }
              }
              goto LAB_14098c864;
            }
            *(uint **)(puVar19 + 0x10) = puVar19 + 0x4000;
            LOCK();
            uVar3 = *puVar19;
            *puVar19 = *puVar19 + uVar20 + 1;
            UNLOCK();
            if ((uVar3 ^ uVar20) != 0xffffffff) break;
            puVar19 = (uint *)*puVar2;
            *puVar19 = 0xffffffff;
            *(uint **)(puVar19 + 0x10) = puVar19 + 0x16;
            puVar19[0x12] = 0;
            *puVar2 = puVar19;
            uVar24 = (longlong)puVar19 + 0x67;
            uVar20 = 0;
          }
        } while( true );
      }
      local_98.QuadPart = 0;
      local_88 = (undefined ***)0x0;
      local_88 = (undefined ***)FUN_14001cc68(0x50,0x10);
      *local_88 = &PTR_LAB_14ae26aa0;
      local_88[2] = local_d8;
      local_88[4] = (undefined **)local_c8;
      local_c8 = (undefined ***)0x0;
      *(undefined4 *)(local_88 + 8) = (undefined4)local_a8;
      *(undefined4 *)((longlong)local_88 + 0x44) = local_a8._4_4_;
      *(undefined4 *)(local_88 + 9) = (undefined4)uStack_a0;
      *(undefined4 *)((longlong)local_88 + 0x4c) = uStack_a0._4_4_;
      *(undefined4 *)(local_88 + 6) = (undefined4)local_b8;
      *(undefined4 *)((longlong)local_88 + 0x34) = local_b8._4_4_;
      *(undefined4 *)(local_88 + 7) = (undefined4)uStack_b0;
      *(undefined4 *)((longlong)local_88 + 0x3c) = uStack_b0._4_4_;
      if (local_d8 != (undefined **)0x0) {
        local_d8 = (undefined **)0x0;
      }
      if (local_88 != (undefined ***)&DAT_fffffffffffffff0) {
        local_98.QuadPart = (LONGLONG)FUN_143acd29a;
      }
      local_138 = &local_98;
      FUN_14005a792(&DAT_14ca9a440,L"SignalFence",&DAT_14cb439dc);
      if ((undefined **)local_98.QuadPart != (undefined **)0x0) {
        pppuVar22 = local_88;
        if (local_88 == (undefined ***)0x0) {
          pppuVar22 = &local_78;
        }
        (*(code *)(*pppuVar22)[2])();
      }
    }
LAB_14098c864:
    if (local_d8 != (undefined **)0x0) {
      pppuVar22 = (undefined ***)&local_b8;
      if (local_c8 != (undefined ***)0x0) {
        pppuVar22 = local_c8;
      }
      (*(code *)(*pppuVar22)[2])(pppuVar22);
    }
  }
  if (local_118 != (undefined **)0x0) {
    pppuVar22 = &local_f8;
    if (local_108 != (undefined ***)0x0) {
      pppuVar22 = local_108;
    }
    (*(code *)(*pppuVar22)[2])(pppuVar22);
  }
  local_d8 = local_130;
  local_d0 = (undefined **)0x0;
  uVar20 = *(uint *)(local_130 + 3);
  puVar21 = local_130[2];
  local_c8 = (undefined ***)CONCAT44(local_c8._4_4_,uVar20);
  if ((longlong)(int)uVar20 == 0) {
    local_c8 = (undefined ***)(ulonglong)uVar20;
  }
  else {
    FUN_14183aa24(&local_d0,uVar20);
    memcpy(local_d0,puVar21,(longlong)(int)uVar20 << 3);
  }
  lVar29 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar13 = *(int *)(lVar29 + 0xc60);
  local_c0 = ppuVar16;
  if (DAT_14c86a9fc == 0) {
    if (iVar13 != 2) {
      if (iVar13 != 1) goto LAB_14098c92b;
      DVar14 = FUN_140ad26c0();
      DVar15 = GetCurrentThreadId();
      if (DVar14 == DVar15) goto LAB_14098c93c;
      goto LAB_14098cd52;
    }
  }
  else {
LAB_14098c92b:
    if (iVar13 != 0x10) {
LAB_14098cd52:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar13 = *(int *)(lVar29 + 0xc60), iVar13 == 2))
        goto LAB_14098c93c;
        if (iVar13 == 1) {
          DVar14 = FUN_140ad26c0();
          DVar15 = GetCurrentThreadId();
          if (DVar14 == DVar15) goto LAB_14098c93c;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar19 = (uint *)*puVar2;
        if (puVar19 != (uint *)0x0) goto LAB_14098cf69;
        while( true ) {
          uVar20 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar20 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar20 | 1;
            __tlregdtor(&LAB_143acaafd);
          }
          lVar29 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar18 = *(undefined4 **)(lVar29 + 0x310);
          *(undefined8 *)(lVar29 + 0x310) = 0;
          if (puVar18 == (undefined4 *)0x0) {
            puVar18 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar18 = 0xffffffff;
          *(undefined4 **)(puVar18 + 0x10) = puVar18 + 0x16;
          puVar18[0x12] = 0;
          *puVar2 = puVar18;
          FUN_140217a48(puVar2);
          puVar19 = (uint *)*puVar2;
LAB_14098cf69:
          puVar27 = (undefined8 *)(*(longlong *)(puVar19 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar23 = (uint *)(puVar27 + 0x19);
          uVar20 = puVar19[0x12];
          if (puVar23 <= puVar19 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar19 + 0x10) = puVar19 + 0x4000;
            LOCK();
            uVar3 = *puVar19;
            *puVar19 = *puVar19 + uVar20 + 1;
            UNLOCK();
            if ((uVar3 ^ uVar20) != 0xffffffff) break;
            puVar19 = (uint *)*puVar2;
            *puVar19 = 0xffffffff;
            *(uint **)(puVar19 + 0x10) = puVar19 + 0x16;
            puVar19[0x12] = 0;
            *puVar2 = puVar19;
            puVar27 = (undefined8 *)((longlong)puVar19 + 0x5fU & 0xfffffffffffffff8);
            puVar23 = (uint *)(puVar27 + 0x19);
            uVar20 = 0;
            if (puVar23 <= puVar19 + 0x4000) {
              uVar20 = 1;
              goto LAB_14098cfe9;
            }
          }
        }
        uVar20 = uVar20 + 1;
LAB_14098cfe9:
        *(uint **)(puVar19 + 0x10) = puVar23;
        puVar19[0x12] = uVar20;
        iVar13 = 0;
        FUN_1447247dc(puVar27,0);
        *puVar27 = &PTR_FUN_14ae26b40;
        puVar27[0x15] = local_d8;
        puVar27[0x16] = local_d0;
        local_d0 = (undefined **)0x0;
        *(undefined4 *)(puVar27 + 0x17) = (undefined4)local_c8;
        *(undefined4 *)((longlong)puVar27 + 0xbc) = local_c8._4_4_;
        local_c8 = (undefined ***)0x0;
        puVar27[0x18] = local_c0;
        local_c0 = (undefined **)0x0;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar20 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar20 < 2) {
            uVar24 = (ulonglong)(byte)(&DAT_149e38edc)[uVar20];
          }
          else {
            uVar24 = 2;
          }
        }
        else {
          iVar13 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                   *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar24 = 5;
        }
        if (*(code **)(puVar27[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar27[0xe] + 0x18))(puVar27 + 0xe,puVar27 + 9);
        }
        puVar27[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar27[9] = puVar27;
        puVar27[10] = puVar27;
        lVar29 = *plVar28;
        if (lVar29 == 0) {
          uVar10 = 1;
          if ((char)uVar24 != '\x06') {
            uVar10 = uVar24;
          }
          uVar24 = uVar10;
          uVar17 = 0;
        }
        else {
          if ((char)uVar24 == '\x06') {
            uVar24 = *(ulonglong *)(lVar29 + 0x38) >> 0x3b;
          }
          uVar17 = *(undefined8 *)(lVar29 + 0x30);
        }
        puVar27[0xf] = uVar17;
        puVar27[0x10] = uVar24 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar27 + 0x1c) = iVar13;
        if (puVar27 == (undefined8 *)0x0) {
          local_98.s.LowPart._0_1_ = 1;
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar27 + 1) = *(int *)(puVar27 + 1) + 1;
          UNLOCK();
          local_98.s.LowPart._0_1_ = 1;
          FUN_1447439e4(puVar27);
          LOCK();
          piVar1 = (int *)(puVar27 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar27)(puVar27,1);
          }
        }
      }
      else {
        local_98.QuadPart = 0;
        local_88 = (undefined ***)FUN_14001cc68(0x28,8);
        ppuVar26 = local_c0;
        ppuVar16 = local_d0;
        *local_88 = &PTR_LAB_14ae26af0;
        local_d0 = (undefined **)0x0;
        uVar7 = (undefined4)local_c8;
        uVar8 = local_c8._4_4_;
        local_c8 = (undefined ***)0x0;
        local_c0 = (undefined **)0x0;
        local_88[1] = local_d8;
        local_88[2] = ppuVar16;
        *(undefined4 *)(local_88 + 3) = uVar7;
        *(undefined4 *)((longlong)local_88 + 0x1c) = uVar8;
        local_88[4] = ppuVar26;
        if (local_88 + 1 != (undefined ***)0x0) {
          local_98.QuadPart = (LONGLONG)FUN_143acd53e;
        }
        local_138 = &local_98;
        FUN_14005a792(&DAT_14ca9a440,L"NiagaraRecacheRenderers",&DAT_14cb439e0);
        if ((undefined **)local_98.QuadPart != (undefined **)0x0) {
          pppuVar22 = local_88;
          if (local_88 == (undefined ***)0x0) {
            pppuVar22 = &local_78;
          }
          (*(code *)(*pppuVar22)[2])();
        }
      }
      goto LAB_14098ce6c;
    }
  }
LAB_14098c93c:
  ppuVar26 = local_c0;
  ppuVar16 = local_d8;
  if (local_c0 != (undefined **)0x0) {
    if (DAT_14c87e718 == '\0') {
      iVar13 = *(int *)((longlong)local_c0 + 0x1c);
      if ((2 < iVar13) &&
         (bVar12 = (**(code **)(*DAT_14c82b500 + 0x10))(DAT_14c82b500,0), bVar12 < 3)) {
        local_98.QuadPart = 0x20100000001;
        uStack_90 = 0x30100000101;
        local_88 = (undefined ***)(CONCAT44(DAT_14c7585c8,DAT_14c7585c8) | 0x20000000000);
        local_80 = DAT_14c7585c8 | 0x100;
        local_7c = DAT_14c7585c8 | 0x300;
        local_78 = (undefined **)0x20000000000;
        ppuStack_70 = (undefined **)0x30000000100;
        if (*(byte *)((longlong)&local_98 + (ulonglong)(iVar13 - 3) * 4) == bVar12)
        goto LAB_14098d337;
      }
      QueryPerformanceCounter(&local_98);
      uStack_90 = 0xffffffffffffffff;
      FUN_140056092(ppuVar26,&local_98);
    }
    else {
LAB_14098d337:
      FUN_140082318(ppuVar26);
    }
  }
  FUN_1405e23da(ppuVar16);
  if ((undefined ***)(ppuVar16 + 4) != &local_d0) {
    if (ppuVar16[4] != (undefined *)0x0) {
      FUN_1400020a8();
    }
    ppuVar16[4] = (undefined *)local_d0;
    local_d0 = (undefined **)0x0;
    *(undefined4 *)(ppuVar16 + 5) = (undefined4)local_c8;
    *(undefined4 *)((longlong)ppuVar16 + 0x2c) = local_c8._4_4_;
    local_c8 = (undefined ***)0x0;
  }
LAB_14098ce6c:
  if (local_c0 != (undefined **)0x0) {
    LOCK();
    ppuVar16 = local_c0 + 1;
    *(int *)ppuVar16 = *(int *)ppuVar16 + -1;
    UNLOCK();
    if (*(int *)ppuVar16 == 0) {
      (**(code **)*local_c0)(local_c0,1);
    }
  }
  if (local_d0 != (undefined **)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14098d3d2 FUN_14098d3d2 body=145 status=ok
// SIG undefined FUN_14098d3d2(void)

void FUN_14098d3d2(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  plVar3 = (longlong *)FUN_14098d464();
  iVar1 = (int)plVar3[1];
  *(uint *)(plVar3 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)plVar3 + 0xc) < iVar1 + 1U) {
    FUN_14575b356(plVar3,iVar1);
  }
  lVar2 = *plVar3;
  lVar4 = (longlong)iVar1 * 0x20;
  *(undefined8 *)(lVar2 + lVar4) = param_1;
  *(undefined8 *)(lVar2 + 8 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = param_2;
  *(undefined8 *)(lVar2 + 0x18 + lVar4) = param_4;
  FUN_14058d631(param_2,param_3,3,0,param_1,0,0);
  return;
}



// FUNCTION 14098d464 FUN_14098d464 body=116 status=ok
// SIG undefined FUN_14098d464(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14098d464(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c964098) {
    FUN_144b3d300(&DAT_14c964098);
    if (DAT_14c964098 == -1) {
      DAT_14c964080 = 0;
      uRam000000014c964088 = 0;
      _DAT_14c964090 = 0;
      atexit((_func_5014 *)&LAB_14282d723);
      _Init_thread_footer(&DAT_14c964098);
    }
  }
  return &DAT_14c964080;
}



// FUNCTION 14098d4d8 FUN_14098d4d8 body=71 status=ok
// SIG undefined FUN_14098d4d8(void)

void FUN_14098d4d8(longlong param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 8) = param_2;
    if ((uint)(*(int *)(param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_14098d520();
      return;
    }
  }
  else {
    if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(param_2);
    }
    if (param_2 < iVar1) {
      *(int *)(param_1 + 8) = param_2;
      FUN_1474bf216();
      return;
    }
  }
  return;
}



// FUNCTION 14098d520 FUN_14098d520 body=255 status=ok
// SIG undefined FUN_14098d520(void)

void FUN_14098d520(longlong param_1,int param_2)

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



// FUNCTION 14098d620 FUN_14098d620 body=103 status=ok
// SIG undefined FUN_14098d620(void)

ulonglong FUN_14098d620(longlong param_1)

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
LAB_14098d66a:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_14098d66a;
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



// FUNCTION 14098d69c FUN_14098d69c body=53 status=ok
// SIG undefined FUN_14098d69c(void)

void FUN_14098d69c(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  bool bVar4;
  char cVar5;
  ulonglong uVar6;
  bool bVar7;
  longlong lVar8;
  ulonglong uVar9;
  
  if ((longlong)*(int *)(param_1 + 0x38) != 0) {
    lVar8 = 0;
    do {
      if ((*(int *)(*(longlong *)(param_1 + 0x30) + 8 + lVar8) != 0) &&
         (*(longlong *)(*(longlong *)(param_1 + 0x30) + lVar8) != 0)) {
        iVar1 = *(int *)(param_1 + 0x44);
        *(int *)(param_1 + 0x44) = iVar1 + 1;
        uVar6 = (ulonglong)*(int *)(param_1 + 0x38);
        if ((longlong)uVar6 < 1) {
          *(int *)(param_1 + 0x44) = iVar1;
          return;
        }
        bVar7 = false;
        do {
          lVar8 = uVar6 * 0x10 + -8;
          uVar9 = uVar6;
          while (((lVar2 = *(longlong *)(param_1 + 0x30), *(int *)(lVar2 + lVar8) != 0 &&
                  (plVar3 = *(longlong **)(lVar2 + -8 + lVar8), plVar3 != (longlong *)0x0)) &&
                 (cVar5 = (**(code **)(*plVar3 + 0x60))(plVar3,param_2,param_3), cVar5 != '\0'))) {
            lVar8 = lVar8 + -0x10;
            bVar4 = uVar9 < 2;
            uVar9 = uVar9 - 1;
            if (bVar4) {
              *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + -1;
              if (!bVar7) {
                return;
              }
              goto LAB_14098d84b;
            }
          }
          uVar6 = uVar9 - 1;
          bVar7 = true;
        } while (1 < uVar9);
        *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + -1;
LAB_14098d84b:
        FUN_14474d06a((longlong *)(param_1 + 0x30),0);
        return;
      }
      lVar8 = lVar8 + 0x10;
    } while ((longlong)*(int *)(param_1 + 0x38) * 0x10 != lVar8);
  }
  return;
}



// FUNCTION 14098d6d2 FUN_14098d6d2 body=225 status=ok
// SIG undefined FUN_14098d6d2(void)

void FUN_14098d6d2(longlong *param_1,int *param_2)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((longlong)(int)param_1[4] != 0) {
    lVar2 = 0;
    do {
      if ((*(int *)(param_1[3] + 8 + lVar2) != 0) && (*(longlong *)(param_1[3] + lVar2) != 0)) {
        FUN_14098d7b4(param_1 + 3,param_2);
        break;
      }
      lVar2 = lVar2 + 0x10;
    } while ((longlong)(int)param_1[4] * 0x10 != lVar2);
  }
  if (((char)param_1[0x18] == '\0') && (2 < param_2[1])) {
    if ((*param_2 == 0) || (*param_2 == DAT_14c948000)) {
      local_20 = DAT_14c948620;
      local_28 = DAT_14c948618;
    }
    else {
      local_20 = *(undefined4 *)(*(longlong *)(param_2 + 6) + 0x20);
      local_28 = *(undefined8 *)(*(longlong *)(param_2 + 6) + 0x18);
    }
    cVar1 = (**(code **)(*param_1 + 8))(param_1,&local_28);
    if (cVar1 != '\0') {
      FUN_14575b3dc(param_1);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14098d7b4 FUN_14098d7b4 body=173 status=ok
// SIG undefined FUN_14098d7b4(void)

void FUN_14098d7b4(longlong *param_1,undefined8 param_2,undefined8 param_3)

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
        goto LAB_14098d84b;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_14098d84b:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 14098d862 FUN_14098d862 body=196 status=ok
// SIG undefined FUN_14098d862(void)

undefined8 FUN_14098d862(longlong param_1,int *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  byte bVar6;
  int iVar7;
  longlong lVar8;
  bool bVar9;
  
  plVar2 = *(longlong **)(param_1 + 0xb8);
  if (plVar2 != (longlong *)0x0) {
    iVar7 = (int)plVar2[1];
    do {
      if (iVar7 == 0) goto LAB_14098d8b6;
      LOCK();
      iVar5 = (int)plVar2[1];
      bVar9 = iVar7 == iVar5;
      if (bVar9) {
        *(int *)(plVar2 + 1) = iVar7 + 1;
        iVar5 = iVar7;
      }
      iVar7 = iVar5;
      UNLOCK();
    } while (!bVar9);
    plVar3 = *(longlong **)(param_1 + 0xb0);
    if (plVar3 == (longlong *)0x0) {
      bVar6 = 1;
    }
    else {
      bVar6 = (**(code **)(*plVar3 + 0x140))(plVar3,param_2);
      bVar6 = bVar6 ^ 1;
    }
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
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
    if (bVar6 == 0) {
      return 1;
    }
  }
LAB_14098d8b6:
  lVar4 = *(longlong *)(param_1 + 0x90);
  if ((lVar4 != 0) && ((longlong)*(int *)(lVar4 + 0x70) != 0)) {
    lVar8 = 0;
    do {
      if ((*(int *)(*(longlong *)(lVar4 + 0x68) + lVar8) == *param_2) &&
         (*(int *)(*(longlong *)(lVar4 + 0x68) + 8 + lVar8) == param_2[2])) {
        return 1;
      }
      lVar8 = lVar8 + 0xc;
    } while ((longlong)*(int *)(lVar4 + 0x70) * 0xc != lVar8);
  }
  return 0;
}



// FUNCTION 14098d926 FUN_14098d926 body=55 status=ok
// SIG undefined FUN_14098d926(void)

undefined8 FUN_14098d926(longlong *param_1)

{
  longlong lVar1;
  
  do {
    if (param_1[5] != 0) {
      lVar1 = *(longlong *)(param_1[5] + 0x30);
      if (lVar1 == 0) {
        return 0;
      }
      return *(undefined8 *)(lVar1 + 0x360);
    }
    param_1 = (longlong *)(**(code **)(*param_1 + 0x2f0))();
  } while (param_1 != (longlong *)0x0);
  return 0;
}



// FUNCTION 14098d95e FUN_14098d95e body=21 status=ok
// SIG undefined FUN_14098d95e(void)

undefined8 FUN_14098d95e(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 14098d992 FUN_14098d992 body=1757 status=ok
// SIG undefined FUN_14098d992(void)

void FUN_14098d992(undefined8 *param_1,undefined4 *param_2,undefined8 param_3,undefined8 *param_4)

{
  uint *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  char cVar7;
  uint uVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong *plVar11;
  longlong *plVar12;
  int iVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  uint *puVar16;
  longlong lVar17;
  undefined1 auStack_1b8 [32];
  undefined4 local_198;
  undefined4 local_190;
  undefined4 local_188;
  undefined8 local_180;
  wchar_t *local_178;
  undefined1 *local_170;
  undefined1 *local_168;
  code **local_160;
  code *local_158;
  code *local_150;
  char local_139;
  undefined4 *local_138;
  longlong *local_130;
  undefined8 *local_128;
  code *local_120;
  longlong local_118;
  longlong lStack_110;
  longlong *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  (**(code **)*param_1)();
  lVar2 = param_1[0x4e];
  if (lVar2 != 0) {
    local_139 = *(char *)(param_1 + 0x4d);
    lVar9 = FUN_14098e070();
    if (((*(int *)(lVar9 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8)
         == lVar9 + 0x30)) && ((longlong)*(int *)(param_4 + 1) != 0)) {
      puVar16 = (uint *)*param_4;
      puVar1 = puVar16 + (longlong)*(int *)(param_4 + 1) * 2;
      do {
        if ((*(char *)(lVar2 + 0xa0) != '\0') || (*(char *)(lVar2 + 0xa1) == '\x01')) {
          local_58 = (longlong *)0x0;
          local_50 = 0x1800000000;
          if (puVar16[1] != 0) {
            uVar8 = *puVar16;
            local_138 = param_2;
            if ((((int)uVar8 < 0) || (DAT_14c9647dc <= (int)uVar8)) ||
               ((plVar12 = (longlong *)
                           ((ulonglong)((uVar8 & 0xffff) * 0x18) +
                           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8)),
                plVar12 == (longlong *)0x0 ||
                (((*(uint *)(plVar12 + 2) != puVar16[1] ||
                  ((*(uint *)(plVar12 + 1) & 0x10200000) != 0)) || (lVar9 = *plVar12, lVar9 == 0))))
               )) {
LAB_14098dcaa:
              if ((((puVar16[1] != 0) &&
                   ((uVar8 = *puVar16, -1 < (int)uVar8 && ((int)uVar8 < DAT_14c9647dc)))) &&
                  (plVar12 = (longlong *)
                             ((ulonglong)((uVar8 & 0xffff) * 0x18) +
                             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8)),
                  plVar12 != (longlong *)0x0)) &&
                 (((*(uint *)(plVar12 + 2) == puVar16[1] &&
                   ((*(uint *)(plVar12 + 1) & 0x10200000) == 0)) && (lVar9 = *plVar12, lVar9 != 0)))
                 ) {
                if (DAT_14cb63950 == 0) {
                  local_160 = &local_120;
                  local_120 = FUN_144a7958c;
                  local_150 = FUN_14081d0ea;
                  local_158 = (code *)&LAB_1464ec72a;
                  local_168 = &LAB_1486f5f75;
                  local_170 = &LAB_140945686;
                  local_178 = L"Engine";
                  local_180 = 0;
                  local_188 = 0x10000004;
                  local_190 = 0x10;
                  local_198 = 0x19d0;
                  FUN_14081cfa3(L"/Script/GbxGame",L"GbxSkeletalMeshComponent",&DAT_14cb63950,
                                FUN_1464fe8ee);
                }
                uVar6 = local_50;
                if ((*(int *)(DAT_14cb63950 + 0x38) <= *(int *)(*(longlong *)(lVar9 + 0x10) + 0x38))
                   && (*(longlong *)
                        (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) +
                        (longlong)*(int *)(DAT_14cb63950 + 0x38) * 8) == DAT_14cb63950 + 0x30)) {
                  lVar17 = (longlong)(int)local_50;
                  uVar8 = (int)local_50 + 1;
                  local_50 = CONCAT44(local_50._4_4_,uVar8);
                  if (local_50._4_4_ < uVar8) {
                    FUN_1488b4568(&local_118,uVar6 & 0xffffffff);
                  }
                  plVar12 = local_58;
                  if (local_58 == (longlong *)0x0) {
                    plVar12 = &local_118;
                  }
                  plVar12[lVar17] = lVar9;
                }
              }
            }
            else {
              if (DAT_14cac9ca8 == 0) {
                local_160 = &local_120;
                local_120 = FUN_141030f22;
                local_150 = FUN_14081d0ea;
                local_158 = FUN_14081d0ea;
                local_168 = &LAB_1478c0a72;
                local_170 = &LAB_1417b2375;
                local_178 = L"Engine";
                local_180 = 0x1000000000;
                local_188 = 0x10000004;
                local_190 = 8;
                local_198 = 0x390;
                FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
              }
              if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x38) < *(int *)(DAT_14cac9ca8 + 0x38)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) +
                   (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) != DAT_14cac9ca8 + 0x30))
              goto LAB_14098dcaa;
              FUN_140312d42(lVar9,&local_118,0);
            }
            plVar12 = local_58;
            if (local_58 == (longlong *)0x0) {
              plVar12 = &local_118;
            }
            if ((longlong)(int)local_50 != 0) {
              local_130 = plVar12 + (int)local_50;
              do {
                plVar11 = (longlong *)*plVar12;
                if (plVar11 != (longlong *)0x0) {
                  local_128 = param_1 + 0xb6;
                  puVar14 = (undefined8 *)param_1[0xc6];
                  if ((undefined8 *)param_1[0xc6] == (undefined8 *)0x0) {
                    puVar14 = local_128;
                  }
                  if ((longlong)*(int *)(param_1 + 199) == 0) {
                    iVar13 = 0;
                  }
                  else {
                    lVar9 = (longlong)*(int *)(param_1 + 199) << 3;
                    do {
                      cVar7 = FUN_14098e308(puVar14,plVar11);
                      if (cVar7 != '\0') goto LAB_14098de74;
                      puVar14 = puVar14 + 1;
                      lVar9 = lVar9 + -8;
                    } while (lVar9 != 0);
                    iVar13 = *(int *)(param_1 + 199);
                  }
                  puVar14 = local_128;
                  *(uint *)(param_1 + 199) = iVar13 + 1U;
                  if (*(uint *)((longlong)param_1 + 0x63c) < iVar13 + 1U) {
                    FUN_1489581bc(local_128,iVar13);
                  }
                  if ((undefined8 *)param_1[0xc6] != (undefined8 *)0x0) {
                    puVar14 = (undefined8 *)param_1[0xc6];
                  }
                  puVar14[iVar13] = 0;
                  FUN_14485c47a(puVar14 + iVar13,plVar11);
                  if (local_139 == '\x01') {
                    if (*(char *)(lVar2 + 0xa0) == '\x01') {
                      local_120 = *(code **)(lVar2 + 0x18);
                      FUN_140d52e40(plVar11,&local_120,1,1);
                      (**(code **)(*plVar11 + 0xcf0))(plVar11);
                    }
                    if (*(char *)(lVar2 + 0xa1) == '\x01') {
                      FUN_140c16f42(plVar11,1);
                    }
                  }
                }
LAB_14098de74:
                plVar12 = plVar12 + 1;
              } while (plVar12 != local_130);
            }
            param_2 = local_138;
            if (local_58 != (longlong *)0x0) {
              FUN_1400020a8();
            }
          }
        }
        if (((puVar16[1] != 0) && (uVar8 = *puVar16, -1 < (int)uVar8)) &&
           (((int)uVar8 < DAT_14c9647dc &&
            ((((plVar12 = (longlong *)
                          ((ulonglong)((uVar8 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8)),
               plVar12 != (longlong *)0x0 && (*(uint *)(plVar12 + 2) == puVar16[1])) &&
              ((*(uint *)(plVar12 + 1) & 0x10200000) == 0)) &&
             (plVar12 = (longlong *)*plVar12, plVar12 != (longlong *)0x0)))))) {
          uVar10 = FUN_14098e156();
          plVar12 = (longlong *)(**(code **)(*plVar12 + 0x288))(plVar12,uVar10);
          if (plVar12 != (longlong *)0x0) {
            uVar10 = FUN_14098e156();
            plVar11 = (longlong *)FUN_144718840(plVar12,uVar10);
            if ((plVar12 != plVar11) && (plVar11 != (longlong *)0x0)) {
              puVar14 = param_1 + 200;
              puVar15 = (undefined8 *)param_1[0x108];
              if ((undefined8 *)param_1[0x108] == (undefined8 *)0x0) {
                puVar15 = puVar14;
              }
              iVar13 = 0;
              local_138 = param_2;
              if ((longlong)*(int *)(param_1 + 0x109) != 0) {
                plVar12 = (longlong *)((longlong)*(int *)(param_1 + 0x109) << 5);
                do {
                  param_2 = local_138;
                  local_130 = plVar12;
                  if ((puVar15[1] == 0) || (cVar7 = FUN_144729dda(puVar15), cVar7 == '\0')) {
                    plVar12 = (longlong *)0x0;
                  }
                  else {
                    plVar12 = (longlong *)puVar15[1];
                  }
                  if (plVar12 == plVar11) goto LAB_14098da97;
                  puVar15 = puVar15 + 4;
                  plVar12 = local_130 + -4;
                } while (plVar12 != (longlong *)0x0);
                iVar13 = *(int *)(param_1 + 0x109);
              }
              *(uint *)(param_1 + 0x109) = iVar13 + 1U;
              if (*(uint *)((longlong)param_1 + 0x84c) < iVar13 + 1U) {
                FUN_1489582c2(puVar14,iVar13);
              }
              if ((undefined8 *)param_1[0x108] != (undefined8 *)0x0) {
                puVar14 = (undefined8 *)param_1[0x108];
              }
              FUN_14098e23c(&local_118,plVar11);
              param_2 = local_138;
              puVar14[(longlong)iVar13 * 4] = local_118;
              (puVar14 + (longlong)iVar13 * 4)[1] = lStack_110;
              uVar3 = local_138[1];
              uVar4 = local_138[2];
              uVar5 = local_138[3];
              puVar14 = puVar14 + (longlong)iVar13 * 4 + 2;
              *(undefined4 *)puVar14 = *local_138;
              *(undefined4 *)((longlong)puVar14 + 4) = uVar3;
              *(undefined4 *)(puVar14 + 1) = uVar4;
              *(undefined4 *)((longlong)puVar14 + 0xc) = uVar5;
              if (local_139 == '\x01') {
                (**(code **)(*plVar11 + 0x20))(plVar11,lVar2,local_138,1);
              }
            }
          }
        }
LAB_14098da97:
        puVar16 = puVar16 + 2;
      } while (puVar16 != puVar1);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14098e070 FUN_14098e070 body=228 status=ok
// SIG undefined FUN_14098e070(void)

longlong FUN_14098e070(void)

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
  if (DAT_14cb600e8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1463674e6;
    local_38 = &LAB_1486c10a3;
    local_40 = &LAB_1464eaedc;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0xb0;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxLevelSequenceBase",&DAT_14cb600e8,&DAT_1486c10a2);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb600e8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14098e156 FUN_14098e156 body=228 status=ok
// SIG undefined FUN_14098e156(void)

longlong FUN_14098e156(void)

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
  if (DAT_14cb601a0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_1486c10f1;
    local_40 = FUN_1464eb281;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxLevelSequenceParticipant",&DAT_14cb601a0,&DAT_1486c10f0);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb601a0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14098e23c FUN_14098e23c body=204 status=ok
// SIG undefined FUN_14098e23c(void)

uint * FUN_14098e23c(uint *param_1,longlong *param_2)

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



// FUNCTION 14098e308 FUN_14098e308 body=311 status=ok
// SIG undefined FUN_14098e308(void)

ulonglong FUN_14098e308(uint *param_1,longlong param_2)

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



// FUNCTION 14098e440 FUN_14098e440 body=116 status=ok
// SIG undefined FUN_14098e440(void)

void FUN_14098e440(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x58) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x58) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x58 + 4) = uVar5;
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



// FUNCTION 14098e4b4 FUN_14098e4b4 body=569 status=ok
// SIG undefined FUN_14098e4b4(void)

void FUN_14098e4b4(longlong *param_1)

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
        lVar9 = (longlong)iVar7 * 0x58;
        local_74 = iVar5;
        iVar5 = FUN_144a48dbc(lVar9 + lVar10);
        uVar6 = (longlong)iVar5 & (longlong)(int)param_1[9] - 1U;
        iVar5 = (int)uVar6;
        *(int *)(lVar10 + 0x54 + lVar9) = iVar5;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = local_70;
        }
        *(undefined4 *)(lVar10 + 0x50 + lVar9) =
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
            if (iVar3 - lVar10 == lVar9) goto LAB_14098e6b0;
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
LAB_14098e6b0:
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14098e6fa FUN_14098e6fa body=163 status=ok
// SIG undefined FUN_14098e6fa(void)

undefined8 * FUN_14098e6fa(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = DAT_14cb1d1f8;
  uVar2 = FUN_14098e79e();
  FUN_140486538(param_2,uVar1);
  FUN_14048646a(param_2 + 0x20,uVar1,uVar2,0);
  FUN_14098e884(param_1,param_2);
  *param_1 = &PTR_FUN_14b6d4cf0;
  param_1[0x72] = &PTR_FUN_14b6d5330;
  param_1[0x73] = &PTR_FUN_14b6d5350;
  param_1[0x75] = &PTR_FUN_14b6d5370;
  param_1[0x76] = &PTR_FUN_14b6d5390;
  param_1[0x77] = &PTR_FUN_14b6d53b0;
  return param_1;
}



// FUNCTION 14098e79e FUN_14098e79e body=228 status=ok
// SIG undefined FUN_14098e79e(void)

longlong FUN_14098e79e(void)

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
  if (DAT_14cba6ae0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1464c52f8;
    local_38 = &LAB_148bec773;
    local_40 = FUN_140a1803f;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x1130;
    FUN_14081cfa3(L"/Script/OakGame",L"OakAINodeComponent",&DAT_14cba6ae0,&DAT_148bec772);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cba6ae0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14098e884 FUN_14098e884 body=348 status=ok
// SIG undefined FUN_14098e884(void)

undefined8 * FUN_14098e884(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  uVar1 = DAT_14cb1d1f8;
  uVar2 = FUN_14048be4a();
  FUN_140486538(param_2,uVar1);
  FUN_14048646a(param_2 + 0x20,uVar1,uVar2,0);
  FUN_14098e9e0(param_1,param_2);
  *param_1 = &PTR_FUN_14b0988b0;
  param_1[0x72] = &PTR_FUN_14b098ef0;
  param_1[0x73] = &PTR_FUN_14b098f10;
  param_1[0x75] = &PTR_FUN_14b098f30;
  param_1[0x76] = &PTR_FUN_14b098f50;
  param_1[0x77] = &PTR_FUN_14b098f70;
  param_1[0x78] = 0;
  param_1[0x79] = 0;
  param_1[0x7a] = 0;
  param_1[0x7b] = 0;
  param_1[0x7c] = 0;
  param_1[0x7d] = &DAT_14a171d50;
  param_1[0x7f] = 0;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  param_1[0x82] = 0;
  param_1[0x83] = 0;
  param_1[0x84] = 0;
  param_1[0x85] = 0;
  param_1[0x86] = 0;
  param_1[0x7e] = &DAT_14cb70058;
  param_1[0x87] = 0;
  uVar1 = DAT_14cb241e0;
  uVar2 = FUN_1407fc1c8();
  lVar3 = FUN_14048696c(param_1,uVar1,uVar2,uVar2,1,0);
  if ((lVar3 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar3);
  }
  param_1[0x87] = lVar3;
  FUN_140486fc4(lVar3,param_1[0x39],0);
  return param_1;
}



// FUNCTION 14098e9e0 FUN_14098e9e0 body=192 status=ok
// SIG undefined FUN_14098e9e0(void)

undefined8 * FUN_14098e9e0(undefined8 *param_1)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  FUN_140312256();
  *param_1 = &PTR_FUN_14ab67e70;
  param_1[0x72] = &PTR_FUN_14ab684b0;
  param_1[0x73] = &PTR_FUN_14ab684d0;
  param_1[0x74] = 0;
  uVar2 = DAT_14cb1d1f8;
  uVar3 = FUN_14098eaa0();
  lVar4 = FUN_14048696c(param_1,uVar2,uVar3,uVar3,1,0);
  if (lVar4 != 0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c(lVar4);
  }
  bVar1 = DAT_14c950c29;
  param_1[0x74] = lVar4;
  if ((lVar4 != 0) && ((bVar1 & 1) != 0)) {
    FUN_1456cec3c(lVar4);
    lVar4 = param_1[0x74];
  }
  param_1[0x39] = lVar4;
  return param_1;
}



// FUNCTION 14098eaa0 FUN_14098eaa0 body=228 status=ok
// SIG undefined FUN_14098eaa0(void)

longlong FUN_14098eaa0(void)

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
  if (DAT_14cb1b470 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_142b4ce0c;
    local_38 = &LAB_147e2d66f;
    local_40 = &LAB_14641b68f;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x690;
    FUN_14081cfa3(L"/Script/GbxNav",L"AINodeComponent",&DAT_14cb1b470,&DAT_147e2d66e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb1b470;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14098eb86 FUN_14098eb86 body=1694 status=ok
// SIG undefined FUN_14098eb86(void)

void FUN_14098eb86(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  char cVar5;
  undefined8 *puVar6;
  undefined4 *_Src;
  int *_Src_00;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  undefined8 local_50;
  undefined8 local_48;
  code *local_40;
  int local_38;
  undefined4 local_34;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9520b0) {
    FUN_144b3d300(&DAT_14c9520b0);
    if (DAT_14c9520b0 == -1) {
      local_48 = FUN_1446ddbd2();
      local_40 = FUN_1409e12a0;
      local_50 = 0;
      local_58 = 0xa001;
      FUN_14000176a(&DAT_14c952060,L"FNameProperty",0x2000,0);
      atexit(FUN_142816ef9);
      _Init_thread_footer(&DAT_14c9520b0);
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
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_30);
            goto LAB_14098ec71;
          }
        }
        puVar6 = (undefined8 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (puVar6 != &local_30) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_30,puVar6,(int)plVar1[6]);
          }
          else {
            memcpy(&local_30,puVar6,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_50 = CONCAT44(local_50._4_4_,(int)plVar1[6]);
        local_58 = local_58 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,&local_30,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_30,lVar2);
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
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
LAB_14098ec71:
  local_34 = 0;
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
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_34);
            goto LAB_14098ed3d;
          }
        }
        _Src = (undefined4 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (_Src != &local_34) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_34,_Src,(int)plVar1[6]);
          }
          else {
            memcpy(&local_34,_Src,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_50 = CONCAT44(local_50._4_4_,(int)plVar1[6]);
        local_58 = local_58 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,&local_34,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_34,lVar2);
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
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_34);
  }
LAB_14098ed3d:
  local_38 = 0;
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
            goto LAB_14098ee09;
          }
        }
        _Src_00 = (int *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (_Src_00 != &local_38) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_38,_Src_00,(int)plVar1[6]);
          }
          else {
            memcpy(&local_38,_Src_00,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_50 = CONCAT44(local_50._4_4_,(int)plVar1[6]);
        local_58 = local_58 & 0xffffffff00000000;
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
LAB_14098ee09:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0xa98))(param_1,local_30,local_34,local_38 != 0);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14098f226 FUN_14098f226 body=193 status=ok
// SIG undefined FUN_14098f226(void)

void FUN_14098f226(undefined8 param_1,undefined8 param_2,uint param_3,undefined1 param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((int)param_3 < 0) {
    FUN_14098f2e8(param_1,&local_30,param_2,1);
    uVar1 = FUN_1447210f0(param_1);
    lVar2 = FUN_144a49150(uVar1,local_30);
    if ((lVar2 != 0) && (*(uint *)(lVar2 + 0x1a8) != *(uint *)(lVar2 + 0x1ac))) {
      *(uint *)(lVar2 + 0x1ac) = param_3 & 0x7fffffff;
      if (((char)*(undefined4 *)(lVar2 + 0x1a0) != '\0' && *(int *)(lVar2 + 0x19c) == 0) &&
         (*(uint *)(lVar2 + 0x1a8) == (param_3 & 0x7fffffff))) {
        *(undefined1 *)(lVar2 + 0x198) = param_4;
        *(undefined1 *)(lVar2 + 0x199) = 1;
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14098f2e8 FUN_14098f2e8 body=184 status=ok
// SIG undefined FUN_14098f2e8(void)

undefined8 FUN_14098f2e8(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined2 *puVar3;
  undefined1 auStack_68 [32];
  undefined2 *local_48;
  int local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = param_3;
  FUN_1400021e4(&local_38,&local_48);
  plVar1 = DAT_14cb0d2b0;
  uVar2 = (**(code **)(*param_1 + 0x498))(param_1);
  (**(code **)(*plVar1 + 0x480))(plVar1,uVar2,&local_48,param_4);
  puVar3 = local_48;
  if (local_40 == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  FUN_1446f470e(param_2,puVar3,1);
  if (local_48 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14098f3b0 FUN_14098f3b0 body=31 status=ok
// SIG undefined FUN_14098f3b0(void)

undefined8 FUN_14098f3b0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14098f3d0 FUN_14098f3d0 body=269 status=ok
// SIG undefined FUN_14098f3d0(void)

void FUN_14098f3d0(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  bool bVar6;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c998000) && (FUN_144b3d300(&DAT_14c998000), DAT_14c998000 == -1)) {
    FUN_145984cc0(&DAT_14c997f90);
    atexit((_func_5014 *)&LAB_142a64008);
    _Init_thread_footer(&DAT_14c998000);
  }
  if (param_2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar1 = *(uint *)(param_2 + 0xc);
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
      iVar5 = DAT_14c964868 + 1;
      bVar6 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar2;
      if (bVar6) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar5);
      }
      LOCK();
      iVar2 = *(int *)(lVar4 + 0x10);
      bVar6 = iVar2 == 0;
      if (bVar6) {
        *(int *)(lVar4 + 0x10) = iVar5;
        iVar2 = 0;
      }
      UNLOCK();
      if (bVar6) {
        iVar2 = iVar5;
      }
    }
    uVar3 = CONCAT44(iVar2,uVar1);
  }
  FUN_14098f4de(&DAT_14c997f90,uVar3);
  return;
}



// FUNCTION 14098f4de FUN_14098f4de body=91 status=ok
// SIG undefined FUN_14098f4de(void)

void FUN_14098f4de(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if ((*(int *)(param_1 + 0x58) == (int)param_2) &&
     (*(int *)(param_1 + 0x5c) == (int)((ulonglong)param_2 >> 0x20))) {
    *(undefined8 *)(param_1 + 0x58) = 0;
    *(undefined8 *)(param_1 + 0x60) = 0;
  }
  local_10 = param_2;
  FUN_14098f53a(param_1 + 8,&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14098f53a FUN_14098f53a body=266 status=ok
// SIG undefined FUN_14098f53a(void)

undefined8 FUN_14098f53a(longlong *param_1,int *param_2)

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
        lVar9 = (longlong)iVar2 * 0x20;
        if ((*(int *)(lVar3 + lVar9) == *param_2) && (*(uint *)(lVar3 + 4 + lVar9) == uVar1)) {
          FUN_14098f644();
          return 1;
        }
        iVar2 = *(int *)(lVar9 + lVar3 + 0x18);
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 14098f644 FUN_14098f644 body=152 status=ok
// SIG undefined FUN_14098f644(void)

void FUN_14098f644(longlong *param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  int *piVar6;
  longlong lVar7;
  
  lVar2 = *param_1;
  lVar3 = (longlong)param_2 * 0x20;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  lVar7 = (longlong)*(int *)(lVar2 + 0x1c + lVar3);
  iVar4 = *(int *)((longlong)plVar5 + lVar7 * 4);
  if (iVar4 == param_2) {
    piVar6 = (int *)((longlong)plVar5 + lVar7 * 4);
  }
  else {
    do {
      piVar6 = (int *)(lVar2 + (longlong)iVar4 * 0x20 + 0x18);
      iVar4 = *piVar6;
    } while (iVar4 != param_2);
  }
  *piVar6 = *(int *)(lVar2 + lVar3 + 0x18);
  plVar5 = *(longlong **)(*param_1 + 0x10 + lVar3);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar6 = (int *)((longlong)plVar5 + 0xc);
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (*piVar6 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  FUN_14098f724(param_1,param_2);
  return;
}



// FUNCTION 14098f6dc FUN_14098f6dc body=71 status=ok
// SIG undefined FUN_14098f6dc(void)

void FUN_14098f6dc(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x78) = 0;
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_1400020a8();
  }
  FUN_140202178(param_1 + 0x30);
  if (*(longlong *)(param_1 + 0x20) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14098f724 FUN_14098f724 body=114 status=ok
// SIG undefined FUN_14098f724(void)

void FUN_14098f724(longlong *param_1,int param_2)

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



// FUNCTION 14098f828 FUN_14098f828 body=523 status=ok
// SIG undefined FUN_14098f828(void)

void FUN_14098f828(longlong *param_1,int param_2)

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
  longlong *plVar13;
  int iVar14;
  undefined1 auStack_98 [40];
  longlong *local_70;
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_60 = param_1 + 2;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  local_50 = 0;
  if ((int)param_1[5] == 0) {
    uVar9 = 1;
    local_58._4_4_ = 0;
    plVar13 = local_60;
    uVar12 = 0xffffffff;
    iVar14 = 0;
  }
  else {
    local_70 = local_60;
    FUN_1449c0562(&local_68);
    uVar9 = local_68 >> 0x20;
    plVar13 = local_70;
    uVar12 = (uint)local_58;
    iVar14 = (int)local_68;
  }
  plVar3 = local_60;
  iVar4 = (int)local_60[3];
  iVar6 = local_58._4_4_;
  iVar10 = local_50;
  if (local_58._4_4_ < iVar4) {
    do {
      if (*(longlong *)(*param_1 + 0x10 + (longlong)iVar6 * 0x50) != 0) {
        FUN_1400020a8();
        iVar4 = (int)plVar3[3];
      }
      uVar12 = uVar12 & ~(uint)uVar9;
      plVar7 = (longlong *)plVar3[2];
      if ((longlong *)plVar3[2] == (longlong *)0x0) {
        plVar7 = plVar3;
      }
      lVar11 = (longlong)iVar14;
      uVar5 = *(uint *)((longlong)plVar7 + lVar11 * 4) & uVar12;
      if (uVar5 == 0) {
        iVar6 = iVar4 + 0x1e;
        if (-1 < iVar4 + -1) {
          iVar6 = iVar4 + -1;
        }
        iVar6 = iVar6 >> 5;
        iVar2 = iVar6;
        if (iVar6 < iVar14) {
          iVar2 = iVar14;
        }
        if (iVar6 <= iVar14) break;
        lVar8 = 0;
        while( true ) {
          iVar10 = iVar10 + 0x20;
          uVar5 = *(uint *)((longlong)plVar7 + lVar8 * 4 + lVar11 * 4 + 4);
          if (uVar5 != 0) break;
          lVar8 = lVar8 + 1;
          if (iVar2 - lVar11 == lVar8) goto LAB_14098f94d;
        }
        iVar14 = iVar14 + (int)lVar8 + 1;
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
LAB_14098f94d:
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_140e9549c(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar12 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(int *)((longlong)param_1 + 0x2c) < (int)uVar12 || 0x80 < *(int *)((longlong)param_1 + 0x2c))
  {
    uVar5 = 0x80;
    if (0x80 < (int)uVar12) {
      uVar5 = uVar12;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar5;
    FUN_1446efbd8(plVar13,0);
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14098fa36 FUN_14098fa36 body=526 status=ok
// SIG undefined FUN_14098fa36(void)

void FUN_14098fa36(longlong *param_1,int param_2)

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
      lVar10 = (longlong)iVar6 * 0x70;
      *(undefined4 *)(lVar11 + 0x58 + lVar10) = 0;
      if (*(longlong *)(lVar11 + 0x50 + lVar10) != 0) {
        FUN_1400020a8();
      }
      FUN_14098fc46(lVar11 + lVar10 + 0x10);
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
          if (iVar3 - lVar11 == lVar10) goto LAB_14098fb95;
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
LAB_14098fb95:
  iVar13 = local_74;
  if (local_74 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(local_74);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != local_74) {
    FUN_140875b54(param_1,local_74);
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



// FUNCTION 14098fc46 FUN_14098fc46 body=55 status=ok
// SIG undefined FUN_14098fc46(void)

void FUN_14098fc46(longlong *param_1)

{
  FUN_14098fc7e(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14098fc7e FUN_14098fc7e body=543 status=ok
// SIG undefined FUN_14098fc7e(void)

void FUN_14098fc7e(longlong *param_1,int param_2)

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
        if (uVar8 == uVar14) goto LAB_14098fe1c;
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
      lVar10 = (longlong)iVar6 * 0x68;
      *(undefined4 *)(lVar11 + 0x58 + lVar10) = 0;
      if (*(longlong *)(lVar11 + 0x50 + lVar10) != 0) {
        FUN_1400020a8();
      }
      FUN_14098fe9e(lVar11 + lVar10 + 0x10);
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
          if (iVar5 - lVar11 == lVar10) goto LAB_14098fe1c;
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
LAB_14098fe1c:
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_14059f004(param_1,param_2);
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



// FUNCTION 14098fe9e FUN_14098fe9e body=55 status=ok
// SIG undefined FUN_14098fe9e(void)

void FUN_14098fe9e(longlong *param_1)

{
  FUN_14098fed6(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14098fed6 FUN_14098fed6 body=509 status=ok
// SIG undefined FUN_14098fed6(void)

void FUN_14098fed6(longlong *param_1,int param_2)

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
  longlong lVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  
  puVar1 = (uint *)(param_1 + 2);
  iVar2 = (int)param_1[5];
  if (iVar2 == 0) {
    uVar12 = 0;
    uVar14 = 1;
    iVar10 = 0;
    iVar6 = 0;
  }
  else {
    puVar7 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar7 = puVar1;
    }
    uVar13 = *puVar7;
    if (uVar13 == 0) {
      iVar10 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar10 = iVar2 + -1;
      }
      uVar12 = 0;
      uVar8 = (ulonglong)(uint)(iVar10 >> 5);
      if (iVar10 >> 5 < 1) {
        uVar8 = uVar12;
      }
      iVar10 = 0;
      do {
        if (uVar8 == uVar12) goto LAB_14098ffbe;
        iVar10 = iVar10 + 0x20;
        uVar13 = puVar7[uVar12 + 1];
        uVar12 = uVar12 + 1;
      } while (uVar13 == 0);
    }
    else {
      uVar12 = 0;
      iVar10 = 0;
    }
    uVar14 = (ulonglong)(-uVar13 & uVar13);
    uVar8 = uVar14 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    iVar6 = (iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar6) {
      iVar6 = iVar2;
    }
  }
  if (iVar6 < iVar2) {
    uVar13 = 0xffffffff;
    do {
      FUN_1409900d4((longlong)iVar6 * 0xa8 + *param_1 + 0x10);
      uVar13 = ~(uint)uVar14 & uVar13;
      puVar7 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar7 = puVar1;
      }
      iVar2 = (int)param_1[5];
      iVar6 = (int)uVar12;
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
        lVar9 = 0;
        while( true ) {
          iVar10 = iVar10 + 0x20;
          uVar3 = puVar7[lVar11 + lVar9 + 1];
          if (uVar3 != 0) break;
          lVar9 = lVar9 + 1;
          if (iVar5 - lVar11 == lVar9) goto LAB_14098ffbe;
        }
        uVar12 = (ulonglong)(iVar6 + (int)lVar9 + 1);
        uVar13 = 0xffffffff;
      }
      uVar14 = (ulonglong)(-uVar3 & uVar3);
      uVar8 = uVar14 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar6 = (iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    } while (iVar6 < iVar2);
  }
LAB_14098ffbe:
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_14099029e(param_1,param_2);
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



// FUNCTION 1409900d4 FUN_1409900d4 body=203 status=ok
// SIG undefined FUN_1409900d4(void)

void FUN_1409900d4(longlong param_1)

{
  FUN_1409839df(*(undefined8 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x88));
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FUN_1400020a8();
  }
  FUN_14099019f(*(undefined8 *)(param_1 + 0x70),*(undefined4 *)(param_1 + 0x78));
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FUN_1400020a8();
  }
  FUN_1409901dd(*(undefined8 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 0x68));
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FUN_1400020a8();
  }
  FUN_14099023d(*(undefined8 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x58));
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
  }
  FUN_1402954e1(*(undefined8 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x48));
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x20) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14099019f FUN_14099019f body=62 status=ok
// SIG undefined FUN_14099019f(void)

void FUN_14099019f(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x10);
    do {
      FUN_1402954e1(*plVar1,(int)plVar1[1]);
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1409901dd FUN_1409901dd body=96 status=ok
// SIG undefined FUN_1409901dd(void)

void FUN_1409901dd(longlong *param_1,int param_2)

{
  undefined8 *puVar1;
  
  do {
    if (param_2 == 0) {
      return;
    }
    if ((int)param_1[1] == 0) {
LAB_1409901f9:
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
        goto LAB_1409901f9;
      }
    }
    param_1 = param_1 + 2;
    param_2 = param_2 + -1;
  } while( true );
}



// FUNCTION 14099023d FUN_14099023d body=96 status=ok
// SIG undefined FUN_14099023d(void)

void FUN_14099023d(longlong *param_1,int param_2)

{
  undefined8 *puVar1;
  
  do {
    if (param_2 == 0) {
      return;
    }
    if ((int)param_1[1] == 0) {
LAB_140990259:
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
        goto LAB_140990259;
      }
    }
    param_1 = param_1 + 2;
    param_2 = param_2 + -1;
  } while( true );
}



// FUNCTION 14099029e FUN_14099029e body=112 status=ok
// SIG undefined FUN_14099029e(void)

void FUN_14099029e(longlong param_1,int param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  if (param_2 != 0) {
    uVar2 = FUN_144a3809e((longlong)param_2 * 0xa8,8);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2 >> 3;
    iVar3 = SUB164(auVar1 * ZEXT816(0xc30c30c30c30c31),8);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar3) {
      iVar4 = iVar3;
    }
  }
  if (iVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar4;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar4,0xa8,8);
  }
  return;
}



// FUNCTION 14099030e FUN_14099030e body=527 status=ok
// SIG undefined FUN_14099030e(void)

void FUN_14099030e(longlong *param_1,int param_2)

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
    local_58._4_4_ = 0;
    uVar12 = 0xffffffff;
    iVar13 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    uVar8 = local_68 >> 0x20;
    uVar12 = (uint)local_58;
    iVar13 = (int)local_68;
  }
  plVar4 = local_60;
  iVar6 = local_58._4_4_;
  iVar9 = local_50;
  if (local_58._4_4_ < (int)local_60[3]) {
    do {
      lVar11 = *param_1;
      lVar10 = (longlong)iVar6 * 0x68;
      FUN_1402954e1(*(undefined8 *)(lVar11 + 0x50 + lVar10),*(undefined4 *)(lVar11 + 0x58 + lVar10))
      ;
      if (*(longlong *)(lVar11 + 0x50 + lVar10) != 0) {
        FUN_1400020a8();
      }
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
          if (iVar3 - lVar11 == lVar10) goto LAB_14099047f;
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
LAB_14099047f:
  plVar4 = local_70;
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
  if (*(int *)((longlong)param_1 + 0x2c) < (int)uVar12 || 0x80 < *(int *)((longlong)param_1 + 0x2c))
  {
    uVar5 = 0x80;
    if (0x80 < (int)uVar12) {
      uVar5 = uVar12;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar5;
    FUN_1446efbd8(plVar4,0);
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140990520 FUN_140990520 body=1121 status=ok
// SIG undefined FUN_140990520(void)

void FUN_140990520(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  longlong *plVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  int iVar11;
  int iVar12;
  undefined2 *puVar13;
  longlong lVar14;
  longlong lVar15;
  uint uVar16;
  longlong lVar17;
  longlong lVar18;
  int iVar19;
  int iVar20;
  ulonglong uVar21;
  undefined1 auStack_b8 [44];
  int local_8c;
  ulonglong local_88;
  uint local_7c;
  longlong *local_78;
  longlong *local_70;
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar7 = *(uint *)(param_1 + 9);
  if (uVar7 != 0) {
    plVar1 = param_1 + 7;
    FUN_144a1cbf0(plVar1,0,uVar7,4);
    if (0 < (int)uVar7) {
      uVar5 = 0;
      do {
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar5) * 4) =
             0xffffffff;
        uVar5 = uVar5 + 1;
      } while (uVar7 != uVar5);
    }
    local_60 = param_1 + 2;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    if ((int)param_1[5] == 0) {
      uVar21 = 1;
      local_58._0_4_ = 0xffffffff;
      local_58._4_4_ = 0;
      local_88 = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      local_88 = local_68 & 0xffffffff;
      uVar21 = local_68 >> 0x20;
    }
    uVar7 = (uint)local_58;
    iVar19 = local_58._4_4_;
    iVar20 = local_50;
    if (local_58._4_4_ < (int)local_60[3]) {
      do {
        local_8c = iVar20;
        local_7c = uVar7;
        lVar18 = *param_1;
        lVar17 = (longlong)iVar19 * 0x50;
        lVar14 = lVar18 + lVar17;
        iVar20 = *(int *)(lVar18 + 0x18 + lVar17);
        iVar4 = iVar20 + -1;
        if (iVar20 == 0) {
          iVar4 = 0;
        }
        uVar7 = 0;
        if (0 < iVar4) {
          puVar13 = &DAT_149dfb77a;
          if (iVar20 != 0) {
            puVar13 = *(undefined2 **)(lVar14 + 0x10);
          }
          lVar15 = 0;
          uVar7 = 0;
          do {
            uVar5 = ((uint)(ushort)puVar13[lVar15] +
                    (uint)(0x19 < (ushort)puVar13[lVar15] - 0x61) * 0x20) - 0x20;
            uVar7 = uVar7 >> 8 ^ *(uint *)(&DAT_14c75d150 + (ulonglong)((uVar7 ^ uVar5) & 0xff) * 4)
            ;
            uVar7 = uVar7 >> 8 ^
                    *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar7 & 0xff ^ uVar5 >> 8 & 0xff) * 4);
            lVar15 = lVar15 + 1;
          } while (iVar4 != (int)lVar15);
        }
        uVar2 = *(undefined8 *)(lVar18 + lVar17);
        uVar3 = *(undefined8 *)(lVar18 + 8 + lVar17);
        uVar5 = (uint)((ulonglong)uVar3 >> 0x10);
        uVar9 = (uint)((ulonglong)uVar2 >> 0x10);
        uVar8 = (uint)uVar2 & 0xffff;
        uVar8 = ((uint)uVar2 << 0x10 | uVar8) + (int)((ulonglong)uVar2 >> 0x20) +
                (uVar9 << 0x13 | uVar9 & 0xffff) + (uVar8 >> 4);
        uVar9 = (uint)uVar3 & 0xffff;
        uVar8 = (uVar8 >> 2) + 0x9e3779b9 +
                ((uint)uVar3 << 0x10 | uVar9) + (int)((ulonglong)uVar3 >> 0x20) +
                (uVar5 << 0x13 | uVar5 & 0xffff) + (uVar9 >> 4) + uVar8 * 0x40 ^ uVar8;
        uVar9 = uVar8 >> 0xd ^ -uVar8;
        uVar5 = uVar9 << 8 ^ (-0x61c88647 - uVar8) - uVar9;
        uVar8 = uVar5 >> 0xd ^ (uVar8 - uVar9) - uVar5;
        uVar16 = uVar8 >> 0xc ^ (uVar9 - uVar5) - uVar8;
        uVar9 = uVar16 << 0x10 ^ (uVar5 - uVar8) - uVar16;
        uVar5 = uVar9 >> 5 ^ (uVar8 - uVar16) - uVar9;
        uVar8 = uVar5 >> 3 ^ (uVar16 - uVar9) - uVar5;
        uVar9 = uVar8 << 10 ^ (uVar9 - uVar5) - uVar8;
        uVar5 = uVar7 >> 0xd ^ (uVar9 >> 0xf ^ uVar5 - (uVar8 + uVar9)) - uVar7;
        uVar9 = uVar5 << 8 ^ (-0x61c88647 - uVar7) - uVar5;
        uVar8 = uVar9 >> 0xd ^ (uVar7 - uVar5) - uVar9;
        uVar16 = uVar8 >> 0xc ^ (uVar5 - uVar9) - uVar8;
        uVar7 = uVar16 << 0x10 ^ (uVar9 - uVar8) - uVar16;
        uVar5 = uVar7 >> 5 ^ (uVar8 - uVar16) - uVar7;
        uVar9 = uVar5 >> 3 ^ (uVar16 - uVar7) - uVar5;
        uVar7 = uVar9 << 10 ^ (uVar7 - uVar5) - uVar9;
        uVar10 = (longlong)(int)(uVar7 >> 0xf ^ uVar5 - (uVar9 + uVar7)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar20 = (int)uVar10;
        *(int *)(lVar14 + 0x4c) = iVar20;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar14 + 0x48) =
             *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)iVar20 & (longlong)(int)param_1[9] - 1U) * 4) =
             iVar19;
        uVar7 = local_7c & ~(uint)uVar21;
        plVar6 = (longlong *)local_60[2];
        if ((longlong *)local_60[2] == (longlong *)0x0) {
          plVar6 = local_60;
        }
        iVar4 = (int)local_60[3];
        iVar19 = (int)local_88;
        lVar14 = (longlong)iVar19;
        uVar5 = *(uint *)((longlong)plVar6 + lVar14 * 4) & uVar7;
        iVar20 = local_8c;
        local_78 = local_60;
        local_70 = plVar1;
        if (uVar5 == 0) {
          iVar11 = iVar4 + 0x1e;
          if (-1 < iVar4 + -1) {
            iVar11 = iVar4 + -1;
          }
          iVar11 = iVar11 >> 5;
          iVar12 = iVar11;
          if (iVar11 < iVar19) {
            iVar12 = iVar19;
          }
          if (iVar11 <= iVar19) break;
          lVar18 = 0;
          while( true ) {
            iVar20 = iVar20 + 0x20;
            uVar5 = *(uint *)((longlong)plVar6 + lVar18 * 4 + lVar14 * 4 + 4);
            if (uVar5 != 0) break;
            lVar18 = lVar18 + 1;
            if (iVar12 - lVar14 == lVar18) goto LAB_14099095a;
          }
          local_88 = (ulonglong)(iVar19 + (int)lVar18 + 1);
          uVar7 = 0xffffffff;
        }
        uVar21 = (ulonglong)(-uVar5 & uVar5);
        uVar10 = uVar21 * 2 + 1;
        lVar14 = 0x3f;
        if (uVar10 != 0) {
          for (; uVar10 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        iVar19 = (iVar20 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
      } while (iVar19 < iVar4);
    }
  }
LAB_14099095a:
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140990982 FUN_140990982 body=178 status=ok
// SIG undefined FUN_140990982(void)

void FUN_140990982(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined1 *local_c8;
  undefined8 *local_c0;
  undefined2 *local_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined1 *local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined2 local_38;
  undefined1 local_36;
  undefined1 local_30 [24];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_c8 = local_30;
  local_c0 = &local_60;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  local_b8 = &local_38;
  local_38 = 0;
  local_36 = 0;
  local_78 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_d8 = param_2;
  local_d0 = param_3;
  local_68 = local_c8;
  FUN_140990a36(0,&local_a8,&local_68);
  if ((local_18 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140990a36 FUN_140990a36 body=1730 status=ok
// SIG undefined FUN_140990a36(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_140990a36(longlong *param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4,
                       double *param_5,longlong *param_6,undefined8 param_7,undefined8 param_8,
                       undefined8 param_9)

{
  undefined8 *puVar1;
  double dVar2;
  undefined4 uVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong **pplVar8;
  uint uVar9;
  uint uVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined4 *puVar13;
  ulonglong uVar14;
  longlong lVar15;
  double *pdVar16;
  longlong *plVar17;
  longlong lVar18;
  longlong lVar19;
  undefined4 *puVar20;
  bool bVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auStack_1158 [32];
  double *local_1138;
  longlong *local_1130;
  undefined8 local_1128;
  undefined8 local_1120;
  undefined8 local_1118;
  longlong *local_1108;
  undefined4 local_10fc;
  double local_10f8 [6];
  double local_10c8 [9];
  longlong *local_1080;
  double *local_1078;
  longlong *local_1070;
  longlong *local_1068 [3];
  longlong **local_1050;
  double *pdStack_1048;
  ulonglong local_1040;
  undefined8 local_1038;
  undefined8 local_1030;
  undefined8 *local_1028;
  longlong **local_78;
  uint local_70;
  uint local_6c;
  ulonglong local_60;
  undefined8 uStack_48;
  
  uStack_48 = 0x140990a4c;
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1158;
  local_1070 = (longlong *)0x0;
  local_1108 = param_1;
  if ((longlong)(int)param_1[0x22] != 0) {
    puVar20 = (undefined4 *)param_1[0x21];
    puVar13 = puVar20 + (longlong)(int)param_1[0x22] * 0xe;
    do {
      local_1068[2] = (longlong *)*(undefined8 *)(puVar20 + 6);
      local_1068[0] = *(longlong **)(puVar20 + 2);
      local_1068[1] = (longlong *)*(undefined8 *)(puVar20 + 4);
      local_1040 = *(ulonglong *)(puVar20 + 0xc);
      local_1050 = *(longlong ***)(puVar20 + 8);
      pdStack_1048 = *(double **)(puVar20 + 10);
      lVar15 = 0;
      do {
        if (((double)local_1068[lVar15 + 3] <= param_5[lVar15] &&
             param_5[lVar15] != (double)local_1068[lVar15 + 3]) ||
           (param_5[lVar15 + 3] <= (double)local_1068[lVar15] &&
            (double)local_1068[lVar15] != param_5[lVar15 + 3])) goto LAB_140990db9;
        lVar15 = lVar15 + 1;
      } while (lVar15 != 3);
      local_10fc = *puVar20;
      plVar17 = (longlong *)*param_6;
      iVar5 = (int)plVar17[1];
      *(uint *)(plVar17 + 1) = iVar5 + 1U;
      if (*(uint *)((longlong)plVar17 + 0xc) < iVar5 + 1U) {
        FUN_1446f48e2(plVar17,iVar5);
      }
      *(undefined4 *)(*plVar17 + (longlong)iVar5 * 4) = local_10fc;
LAB_140990db9:
      puVar20 = puVar20 + 0xe;
    } while (puVar20 != puVar13);
  }
  if (local_1108[0x18] == 0) {
    local_1068[0] = param_6;
    local_1068[2] = (longlong *)param_3;
    local_1050 = &local_1070;
    pdStack_1048 = param_5;
    local_1040 = param_4;
    local_1038 = param_7;
    local_1030 = param_8;
    local_1028 = &param_9;
    local_1068[1] = (longlong *)param_2;
    if (0 < (int)*(uint *)(local_1108 + 7)) {
      plVar17 = param_6;
      if ((((0.0 < (double)local_1108[0x19]) &&
           (plVar11 = (longlong *)(longlong)(int)local_1108[0x1b], 0 < (longlong)plVar11)) &&
          (0 < *(int *)((longlong)local_1108 + 0xdc))) &&
         ((0 < (int)local_1108[0x1c] &&
          (plVar17 = local_1108, *(int *)((longlong)local_1108 + 0x84) < (int)local_1108[0xb])))) {
        dVar2 = (double)local_1108[0x1a];
        auVar23._8_8_ = 0;
        auVar23._0_8_ = ABS(*param_5 * dVar2) * 2.220446049250313e-16 + *param_5 * dVar2;
        auVar23 = roundpd(auVar23,auVar23,1);
        lVar15 = (longlong)auVar23._0_8_;
        auVar24._8_8_ = 0;
        auVar24._0_8_ = ABS(param_5[3] * dVar2) * 2.220446049250313e-16 + param_5[3] * dVar2;
        auVar23 = roundpd(auVar24,auVar24,1);
        lVar6 = (longlong)auVar23._0_8_;
        if (lVar15 <= lVar6) {
          auVar25._8_8_ = 0;
          auVar25._0_8_ = ABS(param_5[1] * dVar2) * 2.220446049250313e-16 + param_5[1] * dVar2;
          auVar23 = roundpd(auVar25,auVar25,1);
          lVar7 = (longlong)auVar23._0_8_;
          auVar22._8_8_ = 0;
          auVar22._0_8_ = ABS(dVar2 * param_5[4]) * 2.220446049250313e-16 + dVar2 * param_5[4];
          auVar23 = roundpd(auVar22,auVar22,1);
          lVar19 = (longlong)auVar23._0_8_;
          plVar17 = (longlong *)(lVar19 - lVar7);
          if (((lVar7 <= lVar19) &&
              (plVar12 = (longlong *)((lVar6 - lVar15) + 1), plVar12 <= plVar11)) &&
             ((plVar17 = (longlong *)((longlong)plVar17 + 1), plVar17 <= plVar11 &&
              (plVar17 = (longlong *)((longlong)plVar17 * (longlong)plVar12),
              plVar17 < plVar11 || (longlong)plVar17 - (longlong)plVar11 == 0)))) {
            local_1078 = local_10f8;
            local_10f8[0] = 0.0;
            local_10f8[1] = 0.0;
            local_1080 = local_1108;
            do {
              uVar9 = ((uint)lVar15 & 0xff00) << 8 | (uint)lVar15 & 0xff;
              uVar9 = (uVar9 << 4 | uVar9) & 0xf0f0f0f;
              uVar9 = (uVar9 * 4 | uVar9) & 0x33333333;
              lVar18 = lVar7;
              do {
                uVar10 = ((uint)lVar18 & 0xff00) << 8 | (uint)lVar18 & 0xff;
                uVar10 = (uVar10 << 4 | uVar10) & 0xf0f0f0f;
                uVar10 = (uVar10 * 4 | uVar10) & 0x33333333;
                cVar4 = FUN_146e30344(&local_1080,
                                      (uVar10 * 2 | uVar10 * 4) & 0xaaaaaaaa |
                                      (uVar9 * 2 | uVar9) & 0x55555555);
                if (cVar4 == '\0') goto LAB_1409910a2;
                lVar18 = lVar18 + 1;
              } while (lVar19 + 1 != lVar18);
              bVar21 = lVar15 != lVar6;
              lVar15 = lVar15 + 1;
            } while (bVar21);
LAB_1409910a2:
            pplVar8 = local_1068;
            pdVar16 = local_10f8 + 6;
            for (lVar15 = 9; lVar15 != 0; lVar15 = lVar15 + -1) {
              *pdVar16 = (double)*pplVar8;
              pplVar8 = pplVar8 + 1;
              pdVar16 = pdVar16 + 1;
            }
            param_4 = FUN_146e3018c(local_1108,local_10f8);
            param_4 = param_4 & 0xffffffff;
            if (local_10f8[0] != 0.0) {
              FUN_1400020a8();
            }
            cVar4 = (char)param_4;
            goto joined_r0x000140990e16;
          }
        }
      }
      param_4 = local_1108[6];
      lVar15 = (ulonglong)*(uint *)(local_1108 + 7) * 0x38;
      do {
        cVar4 = FUN_146e30290(local_1068,param_4,plVar17);
        if (cVar4 == '\0') goto LAB_140990e1c;
        param_4 = param_4 + 0x38;
        lVar15 = lVar15 + -0x38;
        plVar17 = param_6;
      } while (lVar15 != 0);
    }
  }
  else {
    local_1118 = param_9;
    local_1120 = param_8;
    local_1128 = param_7;
    local_1130 = param_6;
    local_1138 = param_5;
    cVar4 = FUN_140990a36(local_1108[0x18],param_2,param_3,param_4);
joined_r0x000140990e16:
    if (cVar4 == '\0') {
LAB_140990e1c:
      uVar14 = 0;
      goto LAB_140990cbf;
    }
  }
  local_78 = (longlong **)0x0;
  local_6c = 0xff;
  if ((char)local_1108[8] == '\x01') {
    iVar5 = *(int *)((longlong)local_1108 + 0x44);
    if (iVar5 == -1) goto LAB_140990fbb;
  }
  else {
    iVar5 = 0;
    if ((int)local_1108[3] == 0) {
LAB_140990fbb:
      uVar14 = CONCAT71((int7)(param_4 >> 8),1);
      goto LAB_140990cbf;
    }
  }
  local_70 = 1;
  local_1068[0] = (longlong *)CONCAT44(local_1068[0]._4_4_,iVar5);
  local_1068[1] = (longlong *)0x0;
  local_70 = 1;
  plVar17 = local_1108;
  do {
    pplVar8 = local_78;
    if (local_78 == (longlong **)0x0) {
      pplVar8 = local_1068;
    }
    lVar6 = (longlong)(int)local_70;
    local_70 = local_70 - 1;
    lVar15 = plVar17[2] + (longlong)*(int *)(pplVar8 + lVar6 * 2 + -2) * 0x70;
    if ((*(byte *)(plVar17[2] + 0x6c + (longlong)*(int *)(pplVar8 + lVar6 * 2 + -2) * 0x70) & 1) ==
        0) {
      lVar6 = 0;
      lVar19 = 0;
      do {
        uVar9 = local_70;
        plVar11 = local_1070;
        local_10f8[2] = (double)*(undefined8 *)(lVar15 + 0x10 + lVar19);
        local_10f8[0] = *(double *)(lVar15 + lVar19);
        local_10f8[1] = ((double *)(lVar15 + lVar19))[1];
        local_10f8[5] = (double)*(undefined8 *)(lVar15 + 0x28 + lVar19);
        puVar1 = (undefined8 *)(lVar15 + 0x18 + lVar19);
        local_10f8[3] = (double)*puVar1;
        local_10f8[4] = (double)puVar1[1];
        lVar7 = 0;
        do {
          if ((local_10f8[lVar7 + 3] <= param_5[lVar7] && param_5[lVar7] != local_10f8[lVar7 + 3])
             || (param_5[lVar7 + 3] <= local_10f8[lVar7] && local_10f8[lVar7] != param_5[lVar7 + 3])
             ) goto LAB_140990c5c;
          lVar7 = lVar7 + 1;
        } while (lVar7 != 3);
        uVar3 = *(undefined4 *)(lVar15 + 0x60 + lVar6 * 4);
        lVar7 = (longlong)(int)local_70;
        local_70 = local_70 + 1;
        if (local_6c < local_70) {
          FUN_146e303f0(local_1068,uVar9);
          plVar17 = local_1108;
        }
        pplVar8 = local_78;
        if (local_78 == (longlong **)0x0) {
          pplVar8 = local_1068;
        }
        param_4 = lVar7 * 0x10;
        *(undefined4 *)(pplVar8 + lVar7 * 2) = uVar3;
        pplVar8[lVar7 * 2 + 1] = plVar11;
LAB_140990c5c:
        lVar6 = lVar6 + 1;
        lVar19 = lVar19 + 0x30;
      } while (lVar19 != 0x60);
    }
    else {
      cVar4 = FUN_1409910fa((longlong)*(int *)(lVar15 + 0x60) * 0x48 + plVar17[4],param_5,param_6);
      plVar17 = local_1108;
      if (cVar4 == '\0') {
        uVar14 = 0;
        goto LAB_140990cae;
      }
    }
  } while (local_70 != 0);
  uVar14 = CONCAT71((int7)(param_4 >> 8),1);
LAB_140990cae:
  if (local_78 != (longlong **)0x0) {
    FUN_1400020a8();
  }
LAB_140990cbf:
  if ((local_60 ^ (ulonglong)auStack_1158) == DAT_14c707940) {
    return uVar14 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1409910fa FUN_1409910fa body=794 status=ok
// SIG undefined FUN_1409910fa(void)

undefined8 FUN_1409910fa(longlong param_1,double *param_2,longlong *param_3)

{
  double *pdVar1;
  double dVar2;
  double dVar4;
  double dVar5;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  longlong *plVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  int iVar16;
  int iVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  ulonglong uVar24;
  int iVar25;
  longlong lVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  double dVar3;
  double dVar6;
  
  iVar7 = *(int *)(param_1 + 0x38);
  iVar25 = iVar7 + 3;
  if (-1 < iVar7) {
    iVar25 = iVar7;
  }
  if (3 < iVar7) {
    lVar23 = 0;
    uVar24 = 0;
    do {
      lVar20 = *(longlong *)(param_1 + 0x30);
      lVar18 = (uVar24 * 4 + 3) * 0x38;
      lVar19 = (uVar24 * 4 + 2) * 0x38;
      lVar22 = (uVar24 * 4 + 1) * 0x38;
      lVar21 = uVar24 * 0xe0;
      dVar2 = param_2[3];
      dVar3 = param_2[3];
      lVar26 = -(ulonglong)(dVar3 < *(double *)(lVar20 + 8 + lVar22));
      auVar31._8_8_ = -(ulonglong)(dVar3 < *(double *)(lVar20 + 8 + lVar18));
      auVar31._0_8_ = -(ulonglong)(dVar2 < *(double *)(lVar20 + 8 + lVar19));
      dVar3 = param_2[1];
      dVar4 = param_2[1];
      auVar28._8_8_ = -(ulonglong)(*(double *)(lVar20 + 0x28 + lVar22) < dVar4);
      auVar28._0_8_ = -(ulonglong)(*(double *)(lVar20 + 0x28 + lVar21) < dVar3);
      auVar13._8_8_ = -(ulonglong)(*(double *)(lVar20 + 0x20 + lVar22) < *param_2);
      auVar13._0_8_ = -(ulonglong)(*(double *)(lVar20 + 0x20 + lVar21) < *param_2);
      auVar33._8_8_ = -(ulonglong)(*(double *)(lVar20 + 0x28 + lVar18) < dVar4);
      auVar33._0_8_ = -(ulonglong)(*(double *)(lVar20 + 0x28 + lVar19) < dVar3);
      dVar3 = param_2[4];
      dVar4 = param_2[4];
      auVar11._8_8_ = -(ulonglong)(*(double *)(lVar20 + 0x20 + lVar18) < *param_2);
      auVar11._0_8_ = -(ulonglong)(*(double *)(lVar20 + 0x20 + lVar19) < *param_2);
      dVar5 = param_2[2];
      dVar6 = param_2[2];
      auVar27._8_8_ = -(ulonglong)(*(double *)(lVar20 + 0x30 + lVar22) < dVar6);
      auVar27._0_8_ = -(ulonglong)(*(double *)(lVar20 + 0x30 + lVar21) < dVar5);
      auVar15._8_4_ = (int)lVar26;
      auVar15._0_8_ = -(ulonglong)(dVar2 < *(double *)(lVar20 + 8 + lVar21));
      auVar15._12_4_ = (int)((ulonglong)lVar26 >> 0x20);
      auVar29._8_8_ = -(ulonglong)(*(double *)(lVar20 + 0x30 + lVar18) < dVar6);
      auVar29._0_8_ = -(ulonglong)(*(double *)(lVar20 + 0x30 + lVar19) < dVar5);
      dVar2 = param_2[5];
      dVar5 = param_2[5];
      auVar32._8_8_ = -(ulonglong)(dVar5 < *(double *)(lVar20 + 0x18 + lVar22));
      auVar32._0_8_ = -(ulonglong)(dVar2 < *(double *)(lVar20 + 0x18 + lVar21));
      auVar12._8_8_ = -(ulonglong)(dVar4 < *(double *)(lVar20 + 0x10 + lVar22));
      auVar12._0_8_ = -(ulonglong)(dVar3 < *(double *)(lVar20 + 0x10 + lVar21));
      auVar30._8_8_ = -(ulonglong)(dVar5 < *(double *)(lVar20 + 0x18 + lVar18));
      auVar30._0_8_ = -(ulonglong)(dVar2 < *(double *)(lVar20 + 0x18 + lVar19));
      auVar14._8_8_ = -(ulonglong)(dVar4 < *(double *)(lVar20 + 0x10 + lVar18));
      auVar14._0_8_ = -(ulonglong)(dVar3 < *(double *)(lVar20 + 0x10 + lVar19));
      iVar16 = movmskpd((int)lVar20,auVar32 | auVar12 | auVar27 | auVar15 | auVar28 | auVar13);
      iVar17 = movmskpd((int)lVar18,auVar30 | auVar14 | auVar29 | auVar31 | auVar33 | auVar11);
      lVar18 = 0;
      lVar20 = lVar23;
      do {
        if (((uint)(iVar16 + iVar17 * 4) >> ((uint)lVar18 & 0x1f) & 1) == 0) {
          uVar9 = *(undefined4 *)(*(longlong *)(param_1 + 0x30) + lVar20);
          plVar10 = (longlong *)*param_3;
          iVar8 = (int)plVar10[1];
          *(uint *)(plVar10 + 1) = iVar8 + 1U;
          if (*(uint *)((longlong)plVar10 + 0xc) < iVar8 + 1U) {
            FUN_1446f48e2(plVar10,iVar8);
          }
          *(undefined4 *)(*plVar10 + (longlong)iVar8 * 4) = uVar9;
        }
        lVar18 = lVar18 + 1;
        lVar20 = lVar20 + 0x38;
      } while (lVar18 != 4);
      uVar24 = uVar24 + 1;
      lVar23 = lVar23 + 0xe0;
    } while (uVar24 != (uint)(iVar25 >> 2));
  }
  iVar25 = (iVar25 >> 2) * 4;
  if (iVar25 < iVar7) {
    lVar23 = (longlong)iVar25;
    lVar20 = lVar23 * 0x38 + 0x20;
    do {
      lVar18 = *(longlong *)(param_1 + 0x30) + lVar20;
      lVar19 = -3;
      do {
        dVar2 = *(double *)(lVar18 + lVar19 * 8);
        if ((param_2[lVar19 + 6] <= dVar2 && dVar2 != param_2[lVar19 + 6]) ||
           (pdVar1 = (double *)(lVar18 + 0x18 + lVar19 * 8),
           *pdVar1 <= param_2[lVar19 + 3] && param_2[lVar19 + 3] != *pdVar1)) goto LAB_1409913a0;
        lVar19 = lVar19 + 1;
      } while (lVar19 != 0);
      uVar9 = *(undefined4 *)(lVar23 * 0x38 + *(longlong *)(param_1 + 0x30));
      plVar10 = (longlong *)*param_3;
      iVar25 = (int)plVar10[1];
      *(uint *)(plVar10 + 1) = iVar25 + 1U;
      if (*(uint *)((longlong)plVar10 + 0xc) < iVar25 + 1U) {
        FUN_1446f48e2(plVar10,iVar25);
      }
      *(undefined4 *)(*plVar10 + (longlong)iVar25 * 4) = uVar9;
LAB_1409913a0:
      lVar23 = lVar23 + 1;
      lVar20 = lVar20 + 0x38;
    } while (iVar7 != (int)lVar23);
  }
  return 1;
}



// FUNCTION 14099141a FUN_14099141a body=423 status=ok
// SIG undefined FUN_14099141a(void)

undefined8 FUN_14099141a(longlong *param_1)

{
  int iVar1;
  longlong *plVar2;
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
  undefined1 *local_38;
  code *local_30;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (0 < (longlong)(int)param_1[0x12]) {
    uVar4 = (longlong)(int)param_1[0x12] + 1;
    do {
      plVar2 = *(longlong **)(param_1[0x11] + -0x10 + uVar4 * 8);
      if (((plVar2 != (longlong *)0x0) && (*plVar2 != 0)) &&
         ((*(float *)(plVar2 + 0x2e) != 0.0 || (NAN(*(float *)(plVar2 + 0x2e)))))) {
        plVar2 = plVar2 + 7;
        goto LAB_14099149c;
      }
      uVar4 = uVar4 - 1;
    } while (1 < uVar4);
  }
  lVar3 = param_1[4];
  if (lVar3 != 0) {
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
    lVar3 = *(longlong *)(lVar3 + 0x10);
    iVar1 = *(int *)(DAT_14cad2858 + 0x38);
    if ((iVar1 <= *(int *)(lVar3 + 0x38)) &&
       (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar1 * 8) == DAT_14cad2858 + 0x30)) {
      FUN_14036294a(param_1[4],CONCAT71((int7)(int3)((uint)iVar1 >> 8),1),1);
    }
  }
  lVar3 = param_1[0x7c];
  if (lVar3 == 0) {
    lVar3 = (**(code **)(*param_1 + 0x350))(param_1);
    param_1[0x7c] = lVar3;
  }
  plVar2 = (longlong *)(lVar3 + 0x9a9);
LAB_14099149c:
  if ((local_18 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT71((int7)((ulonglong)plVar2 >> 8),(char)*plVar2);
}



// FUNCTION 1409915c2 FUN_1409915c2 body=35 status=ok
// SIG undefined FUN_1409915c2(void)

void FUN_1409915c2(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1409915e6(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b74d930;
  return;
}



// FUNCTION 1409915e6 FUN_1409915e6 body=94 status=ok
// SIG undefined FUN_1409915e6(void)

undefined8 * FUN_1409915e6(undefined8 *param_1,longlong *param_2)

{
  *param_1 = &PTR_FUN_149e8f7e0;
  if ((undefined8 *)*param_2 != param_1 && (undefined8 *)*param_2 != (undefined8 *)0x0) {
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectGlobals.cpp",0xe8e,
                  L"UObject(const FObjectInitializer&) constructor called but it\'s not the object that\'s currently being constructed with NewObject. Maybe you are trying to construct it on the stack, which is not supported."
                 );
  }
  *param_2 = (longlong)param_1;
  *(undefined1 *)((longlong)param_2 + 0x12) = 0;
  *param_1 = &PTR_FUN_14acd3c80;
  return param_1;
}



// FUNCTION 140991644 FUN_140991644 body=1009 status=ok
// SIG undefined FUN_140991644(void)

undefined8 FUN_140991644(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  char cVar3;
  ushort uVar4;
  ushort uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  int iVar12;
  uint *puVar13;
  longlong *plVar14;
  uint uVar15;
  int iVar16;
  longlong lVar17;
  uint uVar18;
  longlong lVar19;
  longlong lVar20;
  ulonglong uVar21;
  bool bVar22;
  
  if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
    iVar6 = (int)param_1[3];
    if ((iVar6 == (int)param_2[3]) &&
       ((iVar6 == 0 ||
        (iVar6 = memcmp((void *)param_1[2],(void *)param_2[2],(longlong)iVar6 << 3), iVar6 == 0))))
    {
      iVar6 = (int)param_1[5];
      if ((iVar6 == (int)param_2[5]) &&
         ((iVar6 == 0 ||
          (iVar6 = memcmp((void *)param_1[4],(void *)param_2[4],(longlong)iVar6 << 3), iVar6 == 0)))
         ) {
        uVar10 = *(uint *)(param_2 + 9);
        uVar9 = (ulonglong)uVar10;
        uVar11 = 0;
        if ((int)param_1[9] - *(int *)((longlong)param_1 + 0x74) ==
            uVar10 - *(uint *)((longlong)param_2 + 0x74)) {
          iVar6 = (int)param_1[0xd];
          if (iVar6 == 0) {
            uVar21 = 1;
            iVar16 = 0;
            iVar12 = 0;
          }
          else {
            puVar13 = (uint *)param_1[0xc];
            if ((uint *)param_1[0xc] == (uint *)0x0) {
              puVar13 = (uint *)(param_1 + 10);
            }
            uVar15 = *puVar13;
            if (uVar15 == 0) {
              iVar16 = iVar6 + 0x1e;
              if (-1 < iVar6 + -1) {
                iVar16 = iVar6 + -1;
              }
              uVar11 = 0;
              uVar21 = (ulonglong)(uint)(iVar16 >> 5);
              if (iVar16 >> 5 < 1) {
                uVar21 = uVar11;
              }
              iVar12 = 0;
              do {
                if (uVar21 == uVar11) goto LAB_140991964;
                iVar12 = iVar12 + 0x20;
                uVar15 = puVar13[uVar11 + 1];
                uVar11 = uVar11 + 1;
              } while (uVar15 == 0);
            }
            else {
              uVar11 = 0;
              iVar12 = 0;
            }
            uVar21 = (ulonglong)(-uVar15 & uVar15);
            uVar2 = uVar21 * 2 + 1;
            lVar19 = 0x3f;
            if (uVar2 != 0) {
              for (; uVar2 >> lVar19 == 0; lVar19 = lVar19 + -1) {
              }
            }
            iVar16 = (iVar12 - ((uint)lVar19 ^ 0x3f)) + 0x3e;
            if (iVar6 <= iVar16) {
              iVar16 = iVar6;
            }
          }
          if (iVar16 != iVar6) {
            plVar14 = param_2 + 0xf;
            if ((longlong *)param_2[0x10] != (longlong *)0x0) {
              plVar14 = (longlong *)param_2[0x10];
            }
            iVar8 = iVar6 + 0x1e;
            if (-1 < iVar6 + -1) {
              iVar8 = iVar6 + -1;
            }
            if (uVar10 == *(uint *)((longlong)param_2 + 0x74)) {
              return 0;
            }
            uVar15 = iVar8 >> 5;
            uVar10 = 0xffffffff;
            do {
              lVar19 = *(longlong *)(param_1[8] + (longlong)iVar16 * 0x18);
              uVar7 = (uint)((ulonglong)lVar19 >> 0x10);
              uVar18 = (uint)lVar19 & 0xffff;
              iVar8 = *(int *)((longlong)plVar14 +
                              (ulonglong)
                              ((int)((ulonglong)lVar19 >> 0x20) + ((uint)lVar19 << 0x10 | uVar18) +
                               (uVar7 << 0x13 | uVar7 & 0xffff) + (uVar18 >> 4) &
                              (int)param_2[0x11] - 1U) * 4);
              if (iVar8 == -1) {
                return 0;
              }
              while (plVar1 = (longlong *)(param_2[8] + (longlong)iVar8 * 0x18), *plVar1 != lVar19)
              {
                iVar8 = (int)plVar1[2];
                if (iVar8 == -1) {
                  return 0;
                }
              }
              if (plVar1 == (longlong *)0x0) {
                return 0;
              }
              if (plVar1 + 1 == (longlong *)0x0) {
                return 0;
              }
              lVar19 = plVar1[1];
              if (lVar19 == 0) {
                return 0;
              }
              lVar17 = *(longlong *)(param_1[8] + (longlong)iVar16 * 0x18 + 8);
              if (lVar17 == 0) {
                return 0;
              }
              cVar3 = *(char *)(lVar19 + 8);
              if (cVar3 != *(char *)(lVar17 + 8)) {
                return 0;
              }
              if (cVar3 == '\0') {
                if (*(longlong *)(lVar19 + 0x28) != *(longlong *)(lVar17 + 0x28)) {
                  return 0;
                }
              }
              else if (cVar3 == '\x01') {
                if (*(float *)(lVar19 + 0x30) != *(float *)(lVar17 + 0x30)) {
                  return 0;
                }
                if (NAN(*(float *)(lVar19 + 0x30)) || NAN(*(float *)(lVar17 + 0x30))) {
                  return 0;
                }
              }
              else {
                if (cVar3 != '\x02') {
                  return 0;
                }
                iVar16 = *(int *)(lVar19 + 0x40);
                if (iVar16 == *(int *)(lVar17 + 0x40)) {
                  if (1 < iVar16) {
                    lVar20 = 0;
                    while( true ) {
                      uVar4 = *(ushort *)(*(longlong *)(lVar19 + 0x38) + lVar20);
                      uVar5 = *(ushort *)(*(longlong *)(lVar17 + 0x38) + lVar20);
                      if (uVar4 != uVar5) {
                        if ((uVar5 | uVar4) < 0x80) {
                          if ((&DAT_149e05da0)[uVar4] == (&DAT_149e05da0)[(uint)uVar5])
                          goto LAB_1409919d0;
                          iVar16 = (uint)(byte)(&DAT_149e05da0)[uVar4] -
                                   (uint)(byte)(&DAT_149e05da0)[(uint)uVar5];
                        }
                        else {
                          iVar16 = (uint)uVar4 - (uint)uVar5;
                        }
                        bVar22 = iVar16 == 0;
                        goto LAB_140991a25;
                      }
                      if (uVar4 == 0) break;
LAB_1409919d0:
                      lVar20 = lVar20 + 2;
                    }
                  }
                }
                else {
                  bVar22 = *(int *)(lVar17 + 0x40) + iVar16 == 1;
LAB_140991a25:
                  if (!bVar22) {
                    return 0;
                  }
                }
              }
              uVar10 = uVar10 & ~(uint)uVar21;
              puVar13 = (uint *)param_1[0xc];
              if ((uint *)param_1[0xc] == (uint *)0x0) {
                puVar13 = (uint *)(param_1 + 10);
              }
              iVar16 = (int)uVar11;
              lVar19 = (longlong)iVar16;
              uVar7 = puVar13[lVar19] & uVar10;
              if (uVar7 == 0) {
                uVar9 = (ulonglong)uVar15;
                if ((int)uVar15 < iVar16) {
                  uVar9 = uVar11 & 0xffffffff;
                }
                if ((int)uVar15 <= iVar16) break;
                iVar8 = (int)uVar9;
                lVar17 = 0;
                while( true ) {
                  iVar12 = iVar12 + 0x20;
                  uVar7 = puVar13[lVar19 + lVar17 + 1];
                  if (uVar7 != 0) break;
                  lVar17 = lVar17 + 1;
                  uVar9 = 0;
                  if (iVar8 - lVar19 == lVar17) goto LAB_140991964;
                }
                uVar11 = (ulonglong)(iVar16 + (int)lVar17 + 1);
                uVar10 = 0xffffffff;
              }
              uVar21 = (ulonglong)(-uVar7 & uVar7);
              uVar9 = uVar21 * 2 + 1;
              lVar19 = 0x3f;
              if (uVar9 != 0) {
                for (; uVar9 >> lVar19 == 0; lVar19 = lVar19 + -1) {
                }
              }
              uVar7 = (uint)lVar19 ^ 0x3f;
              uVar9 = (ulonglong)uVar7;
              iVar16 = (iVar12 - uVar7) + 0x3e;
            } while (iVar16 < iVar6);
          }
LAB_140991964:
          return CONCAT71((int7)(uVar9 >> 8),1);
        }
      }
    }
  }
  return 0;
}



// FUNCTION 140991a36 FUN_140991a36 body=40 status=ok
// SIG undefined FUN_140991a36(void)

undefined8 FUN_140991a36(undefined8 param_1,int param_2)

{
  FUN_140991a5e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140991a5e FUN_140991a5e body=69 status=ok
// SIG undefined FUN_140991a5e(void)

void FUN_140991a5e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ab80920;
  if (param_1[0x74] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x72] != 0) {
    FUN_1400020a8();
  }
  FUN_1402ef4ac(param_1);
  return;
}



// FUNCTION 140991aa4 FUN_140991aa4 body=262 status=ok
// SIG undefined FUN_140991aa4(void)

longlong FUN_140991aa4(int *param_1,undefined4 param_2,longlong param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  
  iVar3 = *param_1;
  plVar1 = (longlong *)(param_1 + 4);
  if (iVar3 < param_1[6]) {
    lVar6 = *plVar1;
    *(undefined4 *)(lVar6 + 4 + (longlong)iVar3 * 8) = param_2;
    lVar6 = (longlong)*(int *)(lVar6 + (longlong)iVar3 * 8) * 0x30 + *(longlong *)(param_3 + 0x40);
  }
  else {
    plVar2 = (longlong *)(param_3 + 0x40);
    iVar3 = *(int *)(param_3 + 0x58);
    if ((longlong)iVar3 == 0) {
      iVar5 = *(int *)(param_3 + 0x48);
      lVar6 = (longlong)iVar5;
      *(int *)(param_3 + 0x48) = iVar5 + 1;
      if (*(int *)(param_3 + 0x4c) == iVar5) {
        FUN_140333052(plVar2,iVar5);
      }
      FUN_14033221b(lVar6 * 0x30 + *plVar2);
    }
    else {
      iVar5 = *(int *)(*(longlong *)(param_3 + 0x50) + -4 + (longlong)iVar3 * 4);
      *(int *)(param_3 + 0x58) = iVar3 + -1;
      FUN_14479f406(param_3 + 0x50);
      lVar6 = (longlong)iVar5;
    }
    lVar6 = lVar6 * 0x30 + *plVar2;
    iVar3 = param_1[6];
    uVar4 = iVar3 + 1;
    param_1[6] = uVar4;
    if ((uint)param_1[7] < uVar4) {
      FUN_1400e6b38(plVar1);
    }
    *(ulonglong *)(*plVar1 + (longlong)iVar3 * 8) = CONCAT44(param_2,iVar5);
  }
  iVar3 = param_1[2];
  iVar5 = 0;
  if (*param_1 + 1 != iVar3) {
    iVar5 = *param_1 + 1;
  }
  *param_1 = iVar5;
  iVar5 = param_1[1] + 1;
  if (iVar3 <= param_1[1] + 1) {
    iVar5 = iVar3;
  }
  param_1[1] = iVar5;
  return lVar6;
}



// FUNCTION 140991baa FUN_140991baa body=231 status=ok
// SIG undefined FUN_140991baa(void)

void FUN_140991baa(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = (longlong)param_2 * 0x1a0;
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
        uVar1 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar1,0x10);
      }
    }
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x1a0)) {
      uVar2 = uVar1 / 0x1a0 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x1a0,0x10);
  }
  return;
}



// FUNCTION 140991c92 FUN_140991c92 body=236 status=ok
// SIG undefined FUN_140991c92(void)

void FUN_140991c92(float *param_1,longlong *param_2)

{
  double dVar1;
  double dVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar4 = (longlong)(int)param_2[1];
  lVar3 = *(longlong *)(*param_2 + 0x308);
  dVar1 = *(double *)(lVar3 + 0x10 + lVar4 * 0x18);
  dVar2 = *(double *)(lVar3 + 8 + lVar4 * 0x18);
  *param_1 = (float)*(double *)(lVar3 + lVar4 * 0x18);
  param_1[1] = (float)dVar2;
  param_1[2] = (float)dVar1;
  lVar4 = (longlong)(int)param_2[1];
  lVar3 = *(longlong *)(*param_2 + 800);
  dVar1 = *(double *)(lVar3 + 0x10 + lVar4 * 0x18);
  dVar2 = *(double *)(lVar3 + 8 + lVar4 * 0x18);
  param_1[3] = (float)*(double *)(lVar3 + lVar4 * 0x18);
  param_1[4] = (float)dVar2;
  param_1[5] = (float)dVar1;
  lVar4 = (longlong)(int)param_2[1];
  lVar3 = *(longlong *)(*param_2 + 0x338);
  dVar1 = *(double *)(lVar3 + 0x10 + lVar4 * 0x18);
  dVar2 = *(double *)(lVar3 + 8 + lVar4 * 0x18);
  param_1[6] = (float)*(double *)(lVar3 + lVar4 * 0x18);
  param_1[7] = (float)dVar2;
  param_1[8] = (float)dVar1;
  lVar4 = (longlong)(int)param_2[1];
  lVar3 = *(longlong *)(*param_2 + 0x350);
  dVar1 = *(double *)(lVar3 + 0x10 + lVar4 * 0x18);
  dVar2 = *(double *)(lVar3 + 8 + lVar4 * 0x18);
  param_1[9] = (float)*(double *)(lVar3 + lVar4 * 0x18);
  param_1[10] = (float)dVar2;
  param_1[0xb] = (float)dVar1;
  return;
}



// FUNCTION 140991d7e FUN_140991d7e body=231 status=ok
// SIG undefined FUN_140991d7e(void)

void FUN_140991d7e(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
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



// FUNCTION 140991e66 FUN_140991e66 body=381 status=ok
// SIG undefined FUN_140991e66(void)

void FUN_140991e66(longlong *param_1,ulonglong param_2,char param_3)

{
  ulonglong uVar1;
  uint uVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  ulonglong *puVar6;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar2 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    iVar4 = *(int *)((longlong)plVar3 +
                    (ulonglong)((int)param_1[9] - 1U & (uVar2 >> 0x10 ^ uVar2)) * 4);
    if (iVar4 != -1) {
      do {
        puVar6 = (ulonglong *)(*param_1 + (longlong)iVar4 * 0x18);
        if (*puVar6 == param_2) {
          if (puVar6 == (ulonglong *)0x0) {
            return;
          }
          puVar6 = puVar6 + 1;
          if (puVar6 == (ulonglong *)0x0) {
            return;
          }
          FUN_140991fe4(param_1 + 10,(int)*puVar6,1);
          if (param_3 == '\x01') {
            FUN_14099248e(param_1 + 10);
          }
          iVar4 = (int)*puVar6;
          if ((int)param_1[0xb] <= iVar4) goto LAB_140991fb2;
          if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) goto LAB_140991fdf;
          uVar1 = *(ulonglong *)(param_1[10] + 0x40 + (longlong)iVar4 * 0x60);
          uVar2 = ((uint)(uVar1 >> 0x14) & 0xffff ^ (uint)(uVar1 >> 4)) * -0x7a143595;
          uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
          plVar3 = param_1 + 7;
          if ((longlong *)param_1[8] != (longlong *)0x0) {
            plVar3 = (longlong *)param_1[8];
          }
          iVar5 = *(int *)((longlong)plVar3 +
                          (ulonglong)((int)param_1[9] - 1U & (uVar2 >> 0x10 ^ uVar2)) * 4);
          if (iVar5 == -1) goto LAB_140991fdf;
          goto LAB_140991f9f;
        }
        iVar4 = (int)puVar6[2];
      } while (iVar4 != -1);
    }
  }
  return;
  while (iVar5 = (int)puVar6[2], iVar5 != -1) {
LAB_140991f9f:
    puVar6 = (ulonglong *)(*param_1 + (longlong)iVar5 * 0x18);
    if (*puVar6 == uVar1) goto LAB_140991faf;
  }
LAB_140991fdf:
  puVar6 = (ulonglong *)0x0;
LAB_140991faf:
  *(int *)(puVar6 + 1) = iVar4;
LAB_140991fb2:
  FUN_1409921b4(param_1,param_2);
  return;
}



// FUNCTION 140991fe4 FUN_140991fe4 body=122 status=ok
// SIG undefined FUN_140991fe4(void)

void FUN_140991fe4(longlong *param_1,int param_2,int param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  void *_Dst;
  
  lVar1 = *param_1;
  _Dst = (void *)((longlong)param_2 * 0x60 + lVar1);
  FUN_14099205e(_Dst,param_3);
  iVar2 = (int)param_1[1];
  iVar3 = iVar2 - (param_2 + param_3);
  if (param_3 < iVar3) {
    iVar3 = param_3;
  }
  if (iVar3 != 0) {
    memmove(_Dst,(void *)(lVar1 + (longlong)(iVar2 - iVar3) * 0x60),(longlong)iVar3 * 0x60);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 - param_3;
  return;
}



// FUNCTION 14099205e FUN_14099205e body=38 status=ok
// SIG undefined FUN_14099205e(void)

void FUN_14099205e(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_140992084(param_1);
    param_1 = param_1 + 0x60;
  }
  return;
}



// FUNCTION 140992084 FUN_140992084 body=84 status=ok
// SIG undefined FUN_140992084(void)

void FUN_140992084(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x48);
  if (lVar1 != 0) {
    FUN_1409920d8(param_1,lVar1);
    FUN_140992144(param_1 + 0x20,lVar1);
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x10) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1409920d8 FUN_1409920d8 body=108 status=ok
// SIG undefined FUN_1409920d8(void)

void FUN_1409920d8(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(param_1 + 0x18);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x10);
    lVar3 = 0;
    do {
      FUN_140992334(param_2 + 0xe0,*(undefined4 *)(lVar2 + lVar3));
      lVar3 = lVar3 + 8;
    } while ((longlong)iVar1 * 8 != lVar3);
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_1400c95aa(param_1 + 0x10,0);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}



// FUNCTION 140992144 FUN_140992144 body=112 status=ok
// SIG undefined FUN_140992144(void)

void FUN_140992144(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(param_1 + 0x18);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x10);
    lVar3 = 0;
    do {
      FUN_146d98a20(param_2 + 0x100,*(undefined4 *)(lVar2 + lVar3));
      lVar3 = lVar3 + 8;
    } while ((longlong)iVar1 * 8 != lVar3);
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_1400c95aa(param_1 + 0x10,0);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}



// FUNCTION 1409921b4 FUN_1409921b4 body=155 status=ok
// SIG undefined FUN_1409921b4(void)

undefined8 FUN_1409921b4(longlong *param_1,ulonglong param_2)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar2 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 +
                    ((longlong)(int)(uVar2 >> 0x10 ^ uVar2) & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(ulonglong *)(*param_1 + (longlong)iVar1 * 0x18) == param_2) {
          FUN_140992250(param_1,iVar1);
          return 1;
        }
        iVar1 = *(int *)(*param_1 + (longlong)iVar1 * 0x18 + 0x10);
      } while (iVar1 != -1);
    }
  }
  return 0;
}



// FUNCTION 140992250 FUN_140992250 body=91 status=ok
// SIG undefined FUN_140992250(void)

void FUN_140992250(longlong *param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  int *piVar4;
  longlong lVar5;
  
  plVar3 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar3 = (longlong *)param_1[8];
  }
  lVar1 = *param_1 + (longlong)param_2 * 0x18;
  lVar5 = (longlong)*(int *)(lVar1 + 0x14);
  iVar2 = *(int *)((longlong)plVar3 + lVar5 * 4);
  if (iVar2 == param_2) {
    piVar4 = (int *)((longlong)plVar3 + lVar5 * 4);
  }
  else {
    do {
      piVar4 = (int *)(*param_1 + (longlong)iVar2 * 0x18 + 0x10);
      iVar2 = *piVar4;
    } while (iVar2 != param_2);
  }
  *piVar4 = *(int *)(lVar1 + 0x10);
  FUN_1409922ac(param_1,param_2,1);
  return;
}



// FUNCTION 1409922ac FUN_1409922ac body=136 status=ok
// SIG undefined FUN_1409922ac(void)

void FUN_1409922ac(longlong *param_1,int param_2,int param_3)

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



// FUNCTION 140992334 FUN_140992334 body=152 status=ok
// SIG undefined FUN_140992334(void)

void FUN_140992334(longlong *param_1,int param_2)

{
  int iVar1;
  undefined1 auStack_358 [32];
  undefined1 local_338 [784];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_358;
  FUN_1408c9ee8(local_338);
  memcpy((void *)((longlong)param_2 * 0x310 + *param_1),local_338,0x310);
  iVar1 = (int)param_1[3];
  *(uint *)(param_1 + 3) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0x1c) < iVar1 + 1U) {
    FUN_1446f48e2(param_1 + 2,iVar1);
  }
  *(int *)(param_1[2] + (longlong)iVar1 * 4) = param_2;
  if ((local_28 ^ (ulonglong)auStack_358) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1409923ce FUN_1409923ce body=192 status=ok
// SIG undefined FUN_1409923ce(void)

byte FUN_1409923ce(float *param_1,float *param_2)

{
  byte bVar1;
  byte bVar2;
  
  bVar2 = 0;
  bVar1 = 0;
  if ((((*param_1 == *param_2) && (!NAN(*param_1) && !NAN(*param_2))) && (param_1[1] == param_2[1]))
     && (((bVar2 = bVar1, !NAN(param_1[1]) && !NAN(param_2[1]) && (param_1[2] == param_2[2])) &&
         (!NAN(param_1[2]) && !NAN(param_2[2]))))) {
    bVar2 = 0;
    if (((param_1[3] == param_2[3]) && (!NAN(param_1[3]) && !NAN(param_2[3]))) &&
       ((param_1[4] == param_2[4] &&
        (((!NAN(param_1[4]) && !NAN(param_2[4]) && (param_1[5] == param_2[5])) &&
         (!NAN(param_1[5]) && !NAN(param_2[5]))))))) {
      bVar2 = 0;
      if (((param_1[6] == param_2[6]) && (!NAN(param_1[6]) && !NAN(param_2[6]))) &&
         ((param_1[7] == param_2[7] &&
          (((!NAN(param_1[7]) && !NAN(param_2[7]) && (param_1[8] == param_2[8])) &&
           (!NAN(param_1[8]) && !NAN(param_2[8]))))))) {
        bVar2 = 0;
        if ((((param_1[9] == param_2[9]) && (!NAN(param_1[9]) && !NAN(param_2[9]))) &&
            (param_1[10] == param_2[10])) && (!NAN(param_1[10]) && !NAN(param_2[10]))) {
          bVar2 = -(param_2[0xb] == param_1[0xb]) & 1;
        }
      }
    }
  }
  return bVar2;
}



// FUNCTION 14099248e FUN_14099248e body=64 status=ok
// SIG undefined FUN_14099248e(void)

void FUN_14099248e(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_140992dd8(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x60,8);
  }
  return;
}



// FUNCTION 1409924ce FUN_1409924ce body=257 status=ok
// SIG undefined FUN_1409924ce(void)

bool FUN_1409924ce(int *param_1,longlong *param_2,uint param_3,longlong param_4)

{
  double *pdVar1;
  float *pfVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  int iVar6;
  longlong lVar7;
  double *pdVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  
  iVar6 = param_1[1];
  bVar13 = true;
  if (0 < iVar6) {
    iVar11 = *param_1;
    iVar12 = (int)(param_3 * 4) >> 2;
    iVar9 = -1;
    do {
      if (iVar11 < 1) {
        iVar11 = param_1[6];
      }
      uVar3 = *(uint *)(*(longlong *)(param_1 + 4) + -4 + (longlong)iVar11 * 8);
      iVar10 = (int)(uVar3 * 4) >> 2;
      if ((iVar10 < iVar12) || ((iVar10 == iVar12 && (uVar3 >> 0x1e < param_3 >> 0x1e)))) break;
      iVar11 = iVar11 + -1;
      iVar6 = iVar6 + -1;
      iVar9 = iVar11;
    } while (iVar6 != 0);
    if ((iVar9 != -1) &&
       (pdVar8 = (double *)
                 ((longlong)*(int *)(*(longlong *)(param_1 + 4) + (longlong)iVar9 * 8) * 0x40 +
                 *(longlong *)(param_4 + 0xc0)), pdVar8 != (double *)0x0)) {
      lVar4 = *(longlong *)(*param_2 + 0x2a8);
      lVar7 = (longlong)(int)param_2[1] * 0x40;
      if (((*(int *)(pdVar8 + 6) != *(int *)(lVar4 + 0x30 + lVar7)) ||
          (((*pdVar8 != *(double *)(lVar4 + lVar7) ||
            (NAN(*pdVar8) || NAN(*(double *)(lVar4 + lVar7)))) ||
           (pdVar1 = (double *)(lVar4 + 8 + lVar7), pdVar8[1] != *pdVar1)))) ||
         (((NAN(pdVar8[1]) || NAN(*pdVar1) ||
           (pdVar1 = (double *)(lVar4 + 0x10 + lVar7), pdVar8[2] != *pdVar1)) ||
          (NAN(pdVar8[2]) || NAN(*pdVar1))))) {
        bVar13 = false;
      }
      else {
        pfVar2 = (float *)(lVar4 + 0x20 + lVar7);
        auVar5._4_4_ = -(uint)(pfVar2[1] != *(float *)((longlong)pdVar8 + 0x24));
        auVar5._0_4_ = -(uint)(*pfVar2 != *(float *)(pdVar8 + 4));
        auVar5._8_4_ = -(uint)(pfVar2[2] != *(float *)(pdVar8 + 5));
        auVar5._12_4_ = -(uint)(pfVar2[3] != *(float *)((longlong)pdVar8 + 0x2c));
        iVar6 = movmskps((int)lVar7,auVar5);
        bVar13 = iVar6 == 0;
      }
    }
  }
  return bVar13;
}



// FUNCTION 1409925d0 FUN_1409925d0 body=289 status=ok
// SIG undefined FUN_1409925d0(void)

bool FUN_1409925d0(int *param_1,longlong *param_2,uint param_3,longlong *param_4)

{
  double *pdVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  double *pdVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  
  iVar4 = param_1[1];
  bVar11 = true;
  if (0 < iVar4) {
    iVar9 = *param_1;
    iVar10 = (int)(param_3 * 4) >> 2;
    iVar7 = -1;
    do {
      if (iVar9 < 1) {
        iVar9 = param_1[6];
      }
      uVar2 = *(uint *)(*(longlong *)(param_1 + 4) + -4 + (longlong)iVar9 * 8);
      iVar8 = (int)(uVar2 * 4) >> 2;
      if ((iVar8 < iVar10) || ((iVar8 == iVar10 && (uVar2 >> 0x1e < param_3 >> 0x1e)))) break;
      iVar9 = iVar9 + -1;
      iVar4 = iVar4 + -1;
      iVar7 = iVar9;
    } while (iVar4 != 0);
    if ((iVar7 != -1) &&
       (pdVar6 = (double *)
                 ((longlong)*(int *)(*(longlong *)(param_1 + 4) + (longlong)iVar7 * 8) * 0x30 +
                 *param_4), pdVar6 != (double *)0x0)) {
      lVar5 = (longlong)(int)param_2[1];
      lVar3 = *(longlong *)(*param_2 + 0x28);
      pdVar1 = (double *)(lVar3 + lVar5 * 0x18);
      if (((*pdVar6 != *pdVar1) ||
          (((NAN(*pdVar6) || NAN(*pdVar1) ||
            (pdVar1 = (double *)(lVar3 + lVar5 * 0x18 + 8), pdVar6[1] != *pdVar1)) ||
           (NAN(pdVar6[1]) || NAN(*pdVar1))))) ||
         ((pdVar1 = (double *)(lVar3 + 0x10 + lVar5 * 0x18), pdVar6[2] != *pdVar1 ||
          (NAN(pdVar6[2]) || NAN(*pdVar1))))) {
        bVar11 = false;
      }
      else {
        lVar3 = *(longlong *)(*param_2 + 0x48);
        lVar5 = lVar5 * 0x10;
        auVar12 = insertps(ZEXT416(*(uint *)(lVar3 + lVar5)),ZEXT416(*(uint *)(lVar3 + 4 + lVar5)),
                           0x10);
        auVar12 = insertps(auVar12,ZEXT416(*(uint *)(lVar3 + 8 + lVar5)),0x20);
        auVar12 = insertps(auVar12,ZEXT416(*(uint *)(lVar3 + 0xc + lVar5)),0x30);
        auVar13._4_4_ = -(uint)(auVar12._4_4_ != *(float *)((longlong)pdVar6 + 0x24));
        auVar13._0_4_ = -(uint)(auVar12._0_4_ != *(float *)(pdVar6 + 4));
        auVar13._8_4_ = -(uint)(auVar12._8_4_ != *(float *)(pdVar6 + 5));
        auVar13._12_4_ = -(uint)(auVar12._12_4_ != *(float *)((longlong)pdVar6 + 0x2c));
        iVar4 = movmskps((int)lVar5,auVar13);
        bVar11 = iVar4 == 0;
      }
    }
  }
  return bVar11;
}



// FUNCTION 1409926f2 FUN_1409926f2 body=283 status=ok
// SIG undefined FUN_1409926f2(void)

byte FUN_1409926f2(int *param_1,longlong *param_2,uint param_3,longlong param_4)

{
  float *pfVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  byte bVar5;
  float *pfVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  
  iVar11 = param_1[1];
  bVar5 = 1;
  if (0 < iVar11) {
    iVar9 = *param_1;
    iVar10 = (int)(param_3 * 4) >> 2;
    iVar7 = -1;
    do {
      if (iVar9 < 1) {
        iVar9 = param_1[6];
      }
      uVar2 = *(uint *)(*(longlong *)(param_1 + 4) + -4 + (longlong)iVar9 * 8);
      iVar8 = (int)(uVar2 * 4) >> 2;
      if ((iVar8 < iVar10) || ((iVar8 == iVar10 && (uVar2 >> 0x1e < param_3 >> 0x1e)))) break;
      iVar9 = iVar9 + -1;
      iVar11 = iVar11 + -1;
      iVar7 = iVar9;
    } while (iVar11 != 0);
    if ((iVar7 != -1) &&
       (pfVar6 = (float *)((longlong)*(int *)(*(longlong *)(param_1 + 4) + (longlong)iVar7 * 8) *
                           0x18 + *(longlong *)(param_4 + 0x20)), pfVar6 != (float *)0x0)) {
      lVar4 = (longlong)(int)param_2[1] * 0xc;
      lVar3 = *(longlong *)(*param_2 + 0x278);
      if ((*pfVar6 == *(float *)(lVar3 + lVar4)) &&
         (!NAN(*pfVar6) && !NAN(*(float *)(lVar3 + lVar4)))) {
        pfVar1 = (float *)(lVar3 + lVar4 + 4);
        if ((pfVar6[1] == *pfVar1) && (!NAN(pfVar6[1]) && !NAN(*pfVar1))) {
          pfVar1 = (float *)(lVar3 + 8 + lVar4);
          if ((pfVar6[2] == *pfVar1) && (!NAN(pfVar6[2]) && !NAN(*pfVar1))) {
            lVar3 = *(longlong *)(*param_2 + 0x290);
            if ((pfVar6[3] == *(float *)(lVar3 + lVar4)) &&
               (!NAN(pfVar6[3]) && !NAN(*(float *)(lVar3 + lVar4)))) {
              pfVar1 = (float *)(lVar3 + 4 + lVar4);
              if ((pfVar6[4] == *pfVar1) && (!NAN(pfVar6[4]) && !NAN(*pfVar1))) {
                return -(*(float *)(lVar3 + 8 + lVar4) == pfVar6[5]) & 1;
              }
            }
          }
        }
      }
      bVar5 = 0;
    }
  }
  return bVar5;
}



// FUNCTION 14099280e FUN_14099280e body=199 status=ok
// SIG undefined FUN_14099280e(void)

ulonglong FUN_14099280e(longlong param_1,longlong param_2,undefined4 param_3,longlong param_4)

{
  byte bVar1;
  int iVar2;
  ulonglong uVar3;
  undefined7 uVar4;
  ulonglong uVar5;
  void *_Buf1;
  undefined1 auStack_358 [32];
  undefined1 local_338 [792];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_358;
  uVar3 = FUN_1409928d6(param_1,param_3);
  uVar5 = uVar3 & 0xffffffff;
  uVar4 = (undefined7)(uVar3 >> 8);
  bVar1 = 1;
  if ((int)uVar3 != -1) {
    uVar5 = (ulonglong)*(int *)(*(longlong *)(param_1 + 0x10) + (longlong)(int)uVar3 * 8);
    _Buf1 = (void *)(uVar5 * 0x310 + *(longlong *)(param_4 + 0xe0));
    if (_Buf1 != (void *)0x0) {
      FUN_1408c9ee8(local_338);
      memcpy(local_338,
             (void *)((longlong)*(int *)(param_2 + 0x18) * 0x310 +
                     *(longlong *)(*(longlong *)(param_2 + 8) + 0xe8)),0x310);
      iVar2 = memcmp(_Buf1,local_338,0x310);
      uVar5 = (ulonglong)(iVar2 == 0);
      bVar1 = 0;
      uVar4 = 0;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_358) == DAT_14c707940) {
    return CONCAT71(uVar4,bVar1 | (byte)uVar5) & 0xffffffffffffff01;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1409928d6 FUN_1409928d6 body=104 status=ok
// SIG undefined FUN_1409928d6(void)

int FUN_1409928d6(int *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar4 = param_1[1];
  if (iVar4 < 1) {
    iVar5 = -1;
  }
  else {
    iVar5 = *param_1;
    iVar6 = (int)(param_2 * 4) >> 2;
    iVar2 = -1;
    do {
      if (iVar5 < 1) {
        iVar5 = param_1[6];
      }
      uVar1 = *(uint *)(*(longlong *)(param_1 + 4) + -4 + (longlong)iVar5 * 8);
      iVar3 = (int)(uVar1 * 4) >> 2;
      if (iVar3 < iVar6) {
        return iVar2;
      }
      if ((iVar3 == iVar6) && (uVar1 >> 0x1e < param_2 >> 0x1e)) {
        return iVar2;
      }
      iVar5 = iVar5 + -1;
      iVar4 = iVar4 + -1;
      iVar2 = iVar5;
    } while (iVar4 != 0);
  }
  return iVar5;
}



// FUNCTION 14099293e FUN_14099293e body=320 status=ok
// SIG undefined FUN_14099293e(void)

ulonglong FUN_14099293e(int *param_1,undefined8 param_2,uint param_3,longlong param_4)

{
  int *piVar1;
  uint uVar2;
  byte bVar3;
  undefined7 uVar4;
  int iVar5;
  byte unaff_SIL;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong *plVar9;
  int iVar10;
  undefined1 auStack_78 [40];
  undefined8 *local_50;
  int local_48;
  short local_44;
  undefined8 local_40;
  char local_38;
  char local_37;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar10 = param_1[1];
  uVar4 = (undefined7)(local_30 >> 8);
  bVar3 = 1;
  if (0 < iVar10) {
    iVar8 = (int)(param_3 * 4) >> 2;
    iVar7 = -1;
    iVar6 = *param_1;
    do {
      if (iVar6 < 1) {
        iVar6 = param_1[6];
      }
      uVar2 = *(uint *)(*(longlong *)(param_1 + 4) + -4 + (longlong)iVar6 * 8);
      iVar5 = (int)(uVar2 * 4) >> 2;
      if ((iVar5 < iVar8) || ((iVar5 == iVar8 && (uVar2 >> 0x1e < param_3 >> 0x1e)))) break;
      iVar7 = iVar6 + -1;
      iVar10 = iVar10 + -1;
      iVar6 = iVar7;
    } while (iVar10 != 0);
    unaff_SIL = (byte)iVar6;
    if ((iVar7 != -1) &&
       (plVar9 = (longlong *)
                 ((longlong)*(int *)(*(longlong *)(param_1 + 4) + (longlong)iVar7 * 8) * 0x20 +
                 *(longlong *)(param_4 + 0x80)), plVar9 != (longlong *)0x0)) {
      local_50 = (undefined8 *)0x0;
      local_48 = -1;
      local_44 = 0;
      local_40 = 0xffffffffffffffff;
      FUN_1403ee9bc(&local_50);
      if (((undefined8 *)*plVar9 == local_50) &&
         ((((int)plVar9[1] == local_48 && (*(short *)((longlong)plVar9 + 0xc) == local_44)) &&
          ((char)plVar9[3] == local_38)))) {
        unaff_SIL = *(char *)((longlong)plVar9 + 0x19) == local_37;
      }
      else {
        unaff_SIL = false;
      }
      if (local_50 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_50 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if ((*piVar1 == 0) && (*(int *)((longlong)local_50 + 0xc) == 0)) {
          (**(code **)*local_50)(local_50,1);
        }
      }
      bVar3 = 0;
      uVar4 = 0;
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT71(uVar4,bVar3 | unaff_SIL) & 0xffffffffffffff01;
}



// FUNCTION 140992a80 FUN_140992a80 body=399 status=ok
// SIG undefined FUN_140992a80(void)

ulonglong FUN_140992a80(int *param_1,longlong *param_2,ulonglong param_3,longlong param_4)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  longlong lVar4;
  byte bVar5;
  uint uVar6;
  undefined7 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  int iVar13;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_5c;
  undefined4 local_54;
  undefined8 local_50;
  undefined8 local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  iVar13 = param_1[1];
  uVar7 = (undefined7)(local_30 >> 8);
  bVar5 = 1;
  if (0 < iVar13) {
    iVar10 = *param_1;
    iVar11 = (int)param_3 * 4 >> 2;
    iVar8 = -1;
    do {
      if (iVar10 < 1) {
        iVar10 = param_1[6];
      }
      uVar6 = *(uint *)(*(longlong *)(param_1 + 4) + -4 + (longlong)iVar10 * 8);
      iVar9 = (int)(uVar6 * 4) >> 2;
      if ((iVar9 < iVar11) || ((iVar9 == iVar11 && (uVar6 >> 0x1e < ((uint)(param_3 >> 0x1e) & 3))))
         ) break;
      iVar10 = iVar10 + -1;
      iVar13 = iVar13 + -1;
      iVar8 = iVar10;
    } while (iVar13 != 0);
    if ((iVar8 != -1) &&
       ((longlong)*(int *)(*(longlong *)(param_1 + 4) + (longlong)iVar8 * 8) * 0x70 +
        *(longlong *)(param_4 + 0xa0) != 0)) {
      lVar3 = *param_2;
      lVar12 = (longlong)(int)param_2[1];
      local_98 = *(undefined8 *)(*(longlong *)(lVar3 + 0x3e0) + 0x10 + lVar12 * 0x18);
      puVar1 = (undefined8 *)(*(longlong *)(lVar3 + 0x3e0) + lVar12 * 0x18);
      local_a8 = *puVar1;
      uStack_a0 = puVar1[1];
      puVar1 = (undefined8 *)(*(longlong *)(lVar3 + 0x3f8) + lVar12 * 0x20);
      local_88 = *puVar1;
      uStack_80 = puVar1[1];
      puVar2 = (undefined4 *)(*(longlong *)(lVar3 + 0x3f8) + 0x10 + lVar12 * 0x20);
      local_78 = *puVar2;
      uStack_74 = puVar2[1];
      uStack_70 = puVar2[2];
      uStack_6c = puVar2[3];
      lVar4 = lVar12 * 0xc;
      local_60 = *(undefined4 *)(*(longlong *)(lVar3 + 0x368) + 8 + lVar4);
      local_68 = *(undefined8 *)(*(longlong *)(lVar3 + 0x368) + lVar4);
      local_54 = *(undefined4 *)(*(longlong *)(lVar3 + 0x380) + 8 + lVar4);
      local_5c = *(undefined8 *)(*(longlong *)(lVar3 + 0x380) + lVar4);
      local_50 = *(undefined8 *)(*(longlong *)(lVar3 + 0x3b0) + lVar12 * 8);
      local_48 = *(undefined8 *)(*(longlong *)(lVar3 + 0x3c8) + lVar12 * 8);
      uVar6 = FUN_146ef0c40();
      param_3 = (ulonglong)uVar6;
      bVar5 = 0;
      uVar7 = 0;
    }
  }
  if ((local_30 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT71(uVar7,bVar5 | (byte)param_3) & 0xffffffffffffff01;
}



// FUNCTION 140992c10 FUN_140992c10 body=454 status=ok
// SIG undefined FUN_140992c10(void)

ulonglong FUN_140992c10(int *param_1,undefined8 param_2,uint param_3,longlong param_4)

{
  uint uVar1;
  byte bVar2;
  undefined7 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float *pfVar8;
  int iVar9;
  byte bVar10;
  undefined1 auStack_88 [44];
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  undefined8 local_4c;
  float local_44;
  char local_40;
  char local_3e;
  float local_3c;
  short local_38;
  char local_33;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  iVar9 = param_1[1];
  uVar3 = (undefined7)(local_30 >> 8);
  bVar2 = 1;
  if (0 < iVar9) {
    iVar6 = *param_1;
    iVar7 = (int)(param_3 * 4) >> 2;
    iVar4 = -1;
    do {
      if (iVar6 < 1) {
        iVar6 = param_1[6];
      }
      uVar1 = *(uint *)(*(longlong *)(param_1 + 4) + -4 + (longlong)iVar6 * 8);
      iVar5 = (int)(uVar1 * 4) >> 2;
      if ((iVar5 < iVar7) || ((iVar5 == iVar7 && (uVar1 >> 0x1e < param_3 >> 0x1e)))) break;
      iVar6 = iVar6 + -1;
      iVar9 = iVar9 + -1;
      iVar4 = iVar6;
    } while (iVar9 != 0);
    if (iVar4 != -1) {
      param_1 = (int *)(longlong)*(int *)(*(longlong *)(param_1 + 4) + (longlong)iVar4 * 8);
      pfVar8 = (float *)((longlong)param_1 * 0x2c + *(longlong *)(param_4 + 0x60));
      if (pfVar8 != (float *)0x0) {
        local_4c = 0x3f80000000000000;
        local_3c = 0.0;
        local_38 = 0;
        FUN_1400e690a(&local_5c);
        if (((((*(char *)(pfVar8 + 7) != local_40) || (*pfVar8 != local_5c)) ||
             (NAN(*pfVar8) || NAN(local_5c))) ||
            (((pfVar8[1] != local_58 || (NAN(pfVar8[1]) || NAN(local_58))) ||
             ((pfVar8[2] != local_54 ||
              ((NAN(pfVar8[2]) || NAN(local_54) || (pfVar8[3] != local_50)))))))) ||
           (NAN(pfVar8[3]) || NAN(local_50))) {
LAB_140992dd3:
          bVar10 = false;
        }
        else {
          if ((pfVar8[4] != (float)local_4c) || (NAN(pfVar8[4]) || NAN((float)local_4c)))
          goto LAB_140992dd3;
          if ((pfVar8[5] != local_4c._4_4_) ||
             ((((NAN(pfVar8[5]) || NAN(local_4c._4_4_) || (pfVar8[6] != local_44)) ||
               (*(char *)((longlong)pfVar8 + 0x1e) != local_3e)) ||
              ((pfVar8[8] != local_3c || (*(short *)(pfVar8 + 9) != local_38))))))
          goto LAB_140992dd3;
          bVar10 = *(char *)((longlong)pfVar8 + 0x29) == local_33;
        }
        bVar2 = 0;
        uVar3 = 0;
        goto LAB_140992d7c;
      }
    }
  }
  bVar10 = (byte)param_1;
LAB_140992d7c:
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT71(uVar3,bVar2 | bVar10) & 0xffffffffffffff01;
}



// FUNCTION 140992dd8 FUN_140992dd8 body=117 status=ok
// SIG undefined FUN_140992dd8(void)

ulonglong FUN_140992dd8(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((ulonglong)((longlong)(int)(param_3 - param_2) * 0x60) < 0x4000) &&
     ((int)(param_3 * 2) <= (int)(param_2 * 3))) {
    return uVar1;
  }
  if (param_2 == 0 || 0x40 < (int)(param_3 - param_2)) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x60,8);
      uVar1 = uVar1 / 0x60;
    }
  }
  return uVar1;
}



// FUNCTION 140992e4e FUN_140992e4e body=315 status=ok
// SIG undefined FUN_140992e4e(void)

void FUN_140992e4e(longlong param_1,int param_2)

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
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_140992eb8;
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
LAB_140992eb8:
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



// FUNCTION 140992f8a FUN_140992f8a body=94 status=ok
// SIG undefined FUN_140992f8a(void)

void FUN_140992f8a(int *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = param_1[1];
  if (iVar2 != 0) {
    iVar4 = (int)(param_2 * 4) >> 2;
    iVar5 = *param_1;
    do {
      iVar2 = iVar2 + -1;
      if (iVar5 < 1) {
        iVar5 = param_1[6];
      }
      uVar1 = *(uint *)(*(longlong *)(param_1 + 4) + -4 + (longlong)iVar5 * 8);
      iVar3 = (int)(uVar1 * 4) >> 2;
      if (iVar3 < iVar4) {
        return;
      }
      if ((iVar3 == iVar4) && (uVar1 >> 0x1e < param_2 >> 0x1e)) {
        return;
      }
      iVar5 = iVar5 + -1;
      *param_1 = iVar5;
      param_1[1] = iVar2;
    } while (iVar2 != 0);
  }
  return;
}



// FUNCTION 140992fe8 FUN_140992fe8 body=98 status=ok
// SIG undefined FUN_140992fe8(void)

void FUN_140992fe8(int *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  
  iVar2 = param_1[1];
  if (iVar2 != 0) {
    iVar4 = (int)(param_2 * 4) >> 2;
    iVar5 = *param_1;
    do {
      iVar2 = iVar2 + -1;
      if (iVar5 < 1) {
        iVar5 = param_1[6];
      }
      lVar6 = (longlong)iVar5;
      iVar5 = iVar5 + -1;
      uVar1 = *(uint *)(*(longlong *)(param_1 + 4) + -4 + lVar6 * 8);
      iVar3 = (int)(uVar1 * 4) >> 2;
      if (iVar3 < iVar4) {
        return;
      }
      if ((iVar3 == iVar4) && (uVar1 >> 0x1e < param_2 >> 0x1e)) {
        return;
      }
      *param_1 = iVar5;
      param_1[1] = iVar2;
    } while (iVar2 != 0);
  }
  return;
}



// FUNCTION 14099304a FUN_14099304a body=1208 status=ok
// SIG undefined FUN_14099304a(void)

void FUN_14099304a(int *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = param_1[1];
  if (iVar2 != 0) {
    iVar4 = (int)(param_2 * 4) >> 2;
    iVar5 = *param_1;
    do {
      iVar2 = iVar2 + -1;
      if (iVar5 < 1) {
        iVar5 = param_1[6];
      }
      uVar1 = *(uint *)(*(longlong *)(param_1 + 4) + -4 + (longlong)iVar5 * 8);
      iVar3 = (int)(uVar1 * 4) >> 2;
      if ((iVar3 < iVar4) || ((iVar3 == iVar4 && (uVar1 >> 0x1e < param_2 >> 0x1e)))) break;
      iVar5 = iVar5 + -1;
      *param_1 = iVar5;
      param_1[1] = iVar2;
    } while (iVar2 != 0);
  }
  iVar2 = param_1[9];
  if (iVar2 != 0) {
    iVar4 = (int)(param_2 * 4) >> 2;
    iVar5 = param_1[8];
    do {
      iVar2 = iVar2 + -1;
      if (iVar5 < 1) {
        iVar5 = param_1[0xe];
      }
      uVar1 = *(uint *)(*(longlong *)(param_1 + 0xc) + -4 + (longlong)iVar5 * 8);
      iVar3 = (int)(uVar1 * 4) >> 2;
      if ((iVar3 < iVar4) || ((iVar3 == iVar4 && (uVar1 >> 0x1e < param_2 >> 0x1e)))) break;
      iVar5 = iVar5 + -1;
      param_1[8] = iVar5;
      param_1[9] = iVar2;
    } while (iVar2 != 0);
  }
  iVar2 = param_1[0x11];
  if (iVar2 != 0) {
    iVar4 = (int)(param_2 * 4) >> 2;
    iVar5 = param_1[0x10];
    do {
      iVar2 = iVar2 + -1;
      if (iVar5 < 1) {
        iVar5 = param_1[0x16];
      }
      uVar1 = *(uint *)(*(longlong *)(param_1 + 0x14) + -4 + (longlong)iVar5 * 8);
      iVar3 = (int)(uVar1 * 4) >> 2;
      if ((iVar3 < iVar4) || ((iVar3 == iVar4 && (uVar1 >> 0x1e < param_2 >> 0x1e)))) break;
      iVar5 = iVar5 + -1;
      param_1[0x10] = iVar5;
      param_1[0x11] = iVar2;
    } while (iVar2 != 0);
  }
  iVar2 = param_1[0x19];
  if (iVar2 != 0) {
    iVar4 = (int)(param_2 * 4) >> 2;
    iVar5 = param_1[0x18];
    do {
      iVar2 = iVar2 + -1;
      if (iVar5 < 1) {
        iVar5 = param_1[0x1e];
      }
      uVar1 = *(uint *)(*(longlong *)(param_1 + 0x1c) + -4 + (longlong)iVar5 * 8);
      iVar3 = (int)(uVar1 * 4) >> 2;
      if ((iVar3 < iVar4) || ((iVar3 == iVar4 && (uVar1 >> 0x1e < param_2 >> 0x1e)))) break;
      iVar5 = iVar5 + -1;
      param_1[0x18] = iVar5;
      param_1[0x19] = iVar2;
    } while (iVar2 != 0);
  }
  iVar2 = param_1[0x21];
  if (iVar2 != 0) {
    iVar4 = (int)(param_2 * 4) >> 2;
    iVar5 = param_1[0x20];
    do {
      iVar2 = iVar2 + -1;
      if (iVar5 < 1) {
        iVar5 = param_1[0x26];
      }
      uVar1 = *(uint *)(*(longlong *)(param_1 + 0x24) + -4 + (longlong)iVar5 * 8);
      iVar3 = (int)(uVar1 * 4) >> 2;
      if ((iVar3 < iVar4) || ((iVar3 == iVar4 && (uVar1 >> 0x1e < param_2 >> 0x1e)))) break;
      iVar5 = iVar5 + -1;
      param_1[0x20] = iVar5;
      param_1[0x21] = iVar2;
    } while (iVar2 != 0);
  }
  iVar2 = param_1[0x29];
  if (iVar2 != 0) {
    iVar4 = (int)(param_2 * 4) >> 2;
    iVar5 = param_1[0x28];
    do {
      iVar2 = iVar2 + -1;
      if (iVar5 < 1) {
        iVar5 = param_1[0x2e];
      }
      uVar1 = *(uint *)(*(longlong *)(param_1 + 0x2c) + -4 + (longlong)iVar5 * 8);
      iVar3 = (int)(uVar1 * 4) >> 2;
      if ((iVar3 < iVar4) || ((iVar3 == iVar4 && (uVar1 >> 0x1e < param_2 >> 0x1e)))) break;
      iVar5 = iVar5 + -1;
      param_1[0x28] = iVar5;
      param_1[0x29] = iVar2;
    } while (iVar2 != 0);
  }
  iVar2 = param_1[0x31];
  if (iVar2 != 0) {
    iVar4 = (int)(param_2 * 4) >> 2;
    iVar5 = param_1[0x30];
    do {
      iVar2 = iVar2 + -1;
      if (iVar5 < 1) {
        iVar5 = param_1[0x36];
      }
      uVar1 = *(uint *)(*(longlong *)(param_1 + 0x34) + -4 + (longlong)iVar5 * 8);
      iVar3 = (int)(uVar1 * 4) >> 2;
      if ((iVar3 < iVar4) || ((iVar3 == iVar4 && (uVar1 >> 0x1e < param_2 >> 0x1e)))) break;
      iVar5 = iVar5 + -1;
      param_1[0x30] = iVar5;
      param_1[0x31] = iVar2;
    } while (iVar2 != 0);
  }
  iVar2 = param_1[0x39];
  if (iVar2 != 0) {
    iVar4 = (int)(param_2 * 4) >> 2;
    iVar5 = param_1[0x38];
    do {
      iVar2 = iVar2 + -1;
      if (iVar5 < 1) {
        iVar5 = param_1[0x3e];
      }
      uVar1 = *(uint *)(*(longlong *)(param_1 + 0x3c) + -4 + (longlong)iVar5 * 8);
      iVar3 = (int)(uVar1 * 4) >> 2;
      if ((iVar3 < iVar4) || ((iVar3 == iVar4 && (uVar1 >> 0x1e < param_2 >> 0x1e)))) break;
      iVar5 = iVar5 + -1;
      param_1[0x38] = iVar5;
      param_1[0x39] = iVar2;
    } while (iVar2 != 0);
  }
  iVar2 = param_1[0x41];
  if (iVar2 != 0) {
    iVar4 = (int)(param_2 * 4) >> 2;
    iVar5 = param_1[0x40];
    do {
      iVar2 = iVar2 + -1;
      if (iVar5 < 1) {
        iVar5 = param_1[0x46];
      }
      uVar1 = *(uint *)(*(longlong *)(param_1 + 0x44) + -4 + (longlong)iVar5 * 8);
      iVar3 = (int)(uVar1 * 4) >> 2;
      if ((iVar3 < iVar4) || ((iVar3 == iVar4 && (uVar1 >> 0x1e < param_2 >> 0x1e)))) break;
      iVar5 = iVar5 + -1;
      param_1[0x40] = iVar5;
      param_1[0x41] = iVar2;
    } while (iVar2 != 0);
  }
  iVar2 = param_1[0x49];
  if (iVar2 != 0) {
    iVar4 = (int)(param_2 * 4) >> 2;
    iVar5 = param_1[0x48];
    do {
      iVar2 = iVar2 + -1;
      if (iVar5 < 1) {
        iVar5 = param_1[0x4e];
      }
      uVar1 = *(uint *)(*(longlong *)(param_1 + 0x4c) + -4 + (longlong)iVar5 * 8);
      iVar3 = (int)(uVar1 * 4) >> 2;
      if (iVar3 < iVar4) {
        return;
      }
      if ((iVar3 == iVar4) && (uVar1 >> 0x1e < param_2 >> 0x1e)) {
        return;
      }
      iVar5 = iVar5 + -1;
      param_1[0x48] = iVar5;
      param_1[0x49] = iVar2;
    } while (iVar2 != 0);
  }
  return;
}



// FUNCTION 140993502 FUN_140993502 body=103 status=ok
// SIG undefined FUN_140993502(void)

void FUN_140993502(longlong param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_1;
  if (param_1 != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14cb25e50);
    FUN_14099356a(&DAT_14cb25e78,&local_18,1);
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cb25e50);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14099356a FUN_14099356a body=177 status=ok
// SIG undefined FUN_14099356a(void)

undefined8 FUN_14099356a(longlong *param_1,longlong *param_2,char param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  
  iVar2 = (int)param_1[1];
  if ((longlong)iVar2 != 0) {
    lVar1 = *param_1;
    iVar4 = 1;
    lVar6 = 0;
    lVar3 = 0;
    do {
      if (*(longlong *)(lVar1 + lVar6) == *param_2) {
        if (iVar4 == 0) {
          return 0;
        }
        iVar4 = iVar2 - iVar4;
        if (iVar4 != 0) {
          iVar5 = 1;
          if (iVar4 < 1) {
            iVar5 = iVar4;
          }
          memmove((void *)(lVar1 + (lVar3 >> 0x20) * 8),
                  (void *)(lVar1 + (longlong)(iVar2 - iVar5) * 8),(longlong)iVar5 << 3);
          iVar2 = (int)param_1[1];
        }
        *(int *)(param_1 + 1) = iVar2 + -1;
        if (param_3 == '\x01') {
          FUN_14099361c(param_1);
          return 1;
        }
        return 1;
      }
      lVar3 = lVar3 + 0x100000000;
      iVar4 = iVar4 + 1;
      lVar6 = lVar6 + 8;
    } while ((longlong)iVar2 << 3 != lVar6);
  }
  return 0;
}



// FUNCTION 14099361c FUN_14099361c body=142 status=ok
// SIG undefined FUN_14099361c(void)

void FUN_14099361c(longlong param_1)

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
      uVar3 = FUN_144a3809e(uVar3 << 3,8);
      uVar3 = uVar3 >> 3;
      iVar2 = *(int *)(param_1 + 0xc);
    }
    if ((int)uVar3 != iVar2) {
      *(int *)(param_1 + 0xc) = (int)uVar3;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar3,8,8);
    }
  }
  return;
}



// FUNCTION 1409936aa FUN_1409936aa body=23 status=ok
// SIG undefined FUN_1409936aa(void)

bool FUN_1409936aa(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x3c0))();
  return iVar1 != 0;
}



// FUNCTION 1409936c2 FUN_1409936c2 body=49 status=ok
// SIG undefined FUN_1409936c2(void)

undefined8 FUN_1409936c2(longlong param_1)

{
  undefined8 uVar1;
  
  if (((0 < *(int *)(param_1 + 200)) &&
      ((longlong *)**(longlong **)(param_1 + 0xc0) != (longlong *)0x0)) &&
     (uVar1 = (**(code **)(*(longlong *)**(longlong **)(param_1 + 0xc0) + 0x3c0))(),
     (int)uVar1 != -1)) {
    return uVar1;
  }
  return 0;
}



// FUNCTION 1409936f4 FUN_1409936f4 body=349 status=ok
// SIG undefined FUN_1409936f4(void)

void FUN_1409936f4(longlong param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_68 [36];
  undefined8 local_44;
  undefined4 local_3c;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((param_2 == 0) || (*(char *)(param_3 + 0x78) != '\0')) goto LAB_140993722;
  lVar3 = FUN_140993a2e();
  if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x38) < *(int *)(lVar3 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
      != lVar3 + 0x30)) goto LAB_140993722;
  lVar3 = *(longlong *)(param_2 + 0x2bf0);
  if (lVar3 == 0) {
    uVar4 = FUN_140aed8fc();
    lVar3 = FUN_14477b664(uVar4);
    *(longlong *)(param_2 + 0x2bf0) = lVar3;
  }
  lVar5 = *(longlong *)(param_2 + 0x2be8);
  if (*(longlong *)(param_2 + 0x2bf8) == 0) {
    if ((lVar5 == 0) || (lVar3 == 0)) goto LAB_140993722;
    plVar1 = *(longlong **)(lVar3 + 0xb8);
    if (plVar1 != (longlong *)0x0) {
      cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1);
      if (cVar2 != '\0') {
        uVar4 = (**(code **)(*plVar1 + 0x110))(plVar1);
        lVar3 = FUN_144aff482(uVar4,(longlong *)(param_2 + 0x2be8));
        *(longlong *)(param_2 + 0x2bf8) = lVar3;
        if (lVar3 == 0) goto LAB_140993722;
        lVar5 = *(longlong *)(param_2 + 0x2be8);
        goto LAB_140993794;
      }
    }
    *(undefined8 *)(param_2 + 0x2bf8) = 0;
  }
  else {
LAB_140993794:
    local_38 = lVar5;
    FUN_1401533ba(&local_44,&local_38,1);
    *(undefined4 *)(param_1 + 0xb8) = local_3c;
    *(undefined8 *)(param_1 + 0xb0) = local_44;
  }
LAB_140993722:
  FUN_140993852(param_1,param_2,param_3);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140993852 FUN_140993852 body=472 status=ok
// SIG undefined FUN_140993852(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140993852(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  double dVar1;
  undefined1 uVar2;
  char cVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  double dVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  double dVar18;
  double dVar19;
  
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0xbf800000;
  puVar5 = param_3;
  puVar6 = (undefined8 *)(param_1 + 0x10);
  for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  if (*(char *)(param_3 + 0xf) != '\0') {
    return;
  }
  uVar2 = (**(code **)(*param_2 + 0x5c8))(param_2);
  *(undefined1 *)(param_1 + 9) = uVar2;
  *(bool *)(param_1 + 8) = param_3[0xd] != 0;
  lVar4 = param_2[0x3e];
  if (lVar4 == 0) {
    return;
  }
  if (*(longlong **)(lVar4 + 0x428) == (longlong *)0x0) {
    *(undefined1 *)(param_1 + 10) = 0;
  }
  else {
    cVar3 = (**(code **)(**(longlong **)(lVar4 + 0x428) + 0xbb0))();
    *(char *)(param_1 + 10) = cVar3;
    if (cVar3 != '\0') {
      if ((*(longlong *)(lVar4 + 0x428) == 0) ||
         (lVar4 = *(longlong *)(*(longlong *)(lVar4 + 0x428) + 0xae8), lVar4 == 0)) {
        lVar4 = 0;
      }
      else {
        lVar4 = *(longlong *)(lVar4 + 0x358);
      }
      uVar7 = *(undefined4 *)(lVar4 + 0x148);
      goto LAB_1409938e9;
    }
  }
  uVar7 = 0xbf800000;
LAB_1409938e9:
  *(undefined4 *)(param_1 + 0x90) = uVar7;
  auVar15 = *(undefined1 (*) [16])(param_3 + 7);
  dVar13 = (double)DAT_1499387d0;
  dVar1 = DAT_1499387d0._8_8_;
  auVar8 = divpd(auVar15,_DAT_1499387d0);
  auVar10._8_8_ = 0;
  auVar10._0_8_ = param_3[9];
  auVar11 = divpd(auVar10,_DAT_1499387d0);
  auVar8 = roundpd(auVar8,auVar8,3);
  auVar11 = roundpd(auVar11,auVar11,3);
  auVar17._0_8_ = auVar15._0_8_ - auVar8._0_8_ * dVar13;
  auVar17._8_8_ = auVar15._8_8_ - auVar8._8_8_ * dVar1;
  dVar18 = (double)param_3[9] - auVar11._0_8_ * dVar13;
  dVar19 = 0.0 - auVar11._8_8_ * dVar1;
  auVar16._0_8_ = auVar17._0_8_ + dVar13;
  auVar16._8_8_ = auVar17._8_8_ + dVar1;
  auVar14._0_8_ = dVar13 + dVar18;
  auVar14._8_8_ = dVar1 + dVar19;
  auVar8._8_8_ = -(ulonglong)(0.0 <= auVar17._8_8_);
  auVar8._0_8_ = -(ulonglong)(0.0 <= auVar17._0_8_);
  auVar8 = blendvpd(auVar16,auVar17,auVar8);
  auVar11._8_8_ = -(ulonglong)(0.0 <= dVar19);
  auVar11._0_8_ = -(ulonglong)(0.0 <= dVar18);
  auVar15._8_8_ = dVar19;
  auVar15._0_8_ = dVar18;
  auVar15 = blendvpd(auVar14,auVar15,auVar11);
  auVar12._0_8_ = auVar8._0_8_ + -360.0;
  auVar12._8_8_ = auVar8._8_8_ + -360.0;
  auVar9._8_8_ = -(ulonglong)(180.0 < auVar8._8_8_);
  auVar9._0_8_ = -(ulonglong)(180.0 < auVar8._0_8_);
  auVar8 = blendvpd(auVar8,auVar12,auVar9);
  dVar13 = auVar15._0_8_;
  *(double *)(param_1 + 0x98) = auVar8._0_8_ / 180.0;
  *(double *)(param_1 + 0xa0) = auVar8._8_8_ / 180.0;
  *(double *)(param_1 + 0xa8) =
       (double)(~-(ulonglong)(180.0 < dVar13) & (ulonglong)dVar13 |
               (ulonglong)(dVar13 + -360.0) & -(ulonglong)(180.0 < dVar13)) / 180.0;
  if ((0 < (int)param_2[0x1b3]) || (0 < (int)param_2[0x1b5])) {
    *(undefined1 *)(param_1 + 0xb) = 1;
  }
                    /* WARNING: Read-only address (ram,0x0001499387d0) is written */
  return;
}



// FUNCTION 140993a2e FUN_140993a2e body=228 status=ok
// SIG undefined FUN_140993a2e(void)

longlong FUN_140993a2e(void)

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
  if (DAT_14cb5bad0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_140c3e862;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14641d24e;
    local_38 = &LAB_14867efcc;
    local_40 = &LAB_1457b92e5;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x41f0;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxCharacterMovementComponent",&DAT_14cb5bad0,FUN_1464d1b52);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb5bad0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140993b1a FUN_140993b1a body=57 status=ok
// SIG undefined FUN_140993b1a(void)

void FUN_140993b1a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb22aa8 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb22aa8 = FUN_140002ddd(FUN_14643abca,uVar1,L"GpsGenerator_Point");
  }
  return;
}



// FUNCTION 140993b54 FUN_140993b54 body=230 status=ok
// SIG undefined FUN_140993b54(void)

void FUN_140993b54(longlong *param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  iVar3 = (int)param_1[0x2f];
  if ((longlong)iVar3 != 0) {
    lVar2 = param_1[0x2e];
    lVar4 = 0;
    do {
      if (*(longlong *)(lVar2 + lVar4) == *param_2) {
        uVar5 = (int)(lVar4 >> 3) * -0x49249249;
        if ((int)uVar5 < 0) {
          return;
        }
        if (iVar3 <= (int)uVar5) {
          return;
        }
        lVar4 = (ulonglong)(uVar5 & 0x7fffffff) * 0x38;
        cVar1 = *(char *)(lVar2 + 0x30 + lVar4);
        iVar6 = ~uVar5 + iVar3;
        if (iVar6 != 0) {
          iVar7 = 1;
          if (iVar6 < 1) {
            iVar7 = iVar6;
          }
          memmove((void *)(lVar4 + lVar2),(void *)((ulonglong)(uint)(iVar3 - iVar7) * 0x38 + lVar2),
                  (longlong)iVar7 * 0x38);
          iVar3 = (int)param_1[0x2f];
        }
        *(int *)(param_1 + 0x2f) = iVar3 + -1;
        FUN_140993c3c(param_1 + 0x2e);
        if (cVar1 == '\0') {
          return;
        }
        (**(code **)(*param_1 + 0x80))(param_1,param_2);
        FUN_140993ccc(param_1 + 6,param_2);
        return;
      }
      lVar4 = lVar4 + 0x38;
    } while ((longlong)iVar3 * 0x38 - lVar4 != 0);
  }
  return;
}



// FUNCTION 140993c3c FUN_140993c3c body=143 status=ok
// SIG undefined FUN_140993c3c(void)

void FUN_140993c3c(longlong param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar3 = (ulonglong)uVar1;
  iVar2 = *(int *)(param_1 + 0xc);
  if (((0x3fff < (ulonglong)((longlong)(int)(iVar2 - uVar1) * 0x38)) ||
      ((int)(uVar1 * 3) < iVar2 * 2)) && ((uVar1 == 0 || (0x40 < (int)(iVar2 - uVar1))))) {
    if (0 < (int)uVar1) {
      uVar3 = FUN_144a3809e(uVar3 * 0x38,8);
      uVar3 = uVar3 / 0x38;
      iVar2 = *(int *)(param_1 + 0xc);
    }
    if ((int)uVar3 != iVar2) {
      *(int *)(param_1 + 0xc) = (int)uVar3;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar3,0x38,8);
    }
  }
  return;
}



// FUNCTION 140993ccc FUN_140993ccc body=162 status=ok
// SIG undefined FUN_140993ccc(void)

void FUN_140993ccc(longlong *param_1,undefined8 param_2)

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
        goto LAB_140993d54;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_140993d54:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 140993d6e FUN_140993d6e body=50 status=ok
// SIG undefined FUN_140993d6e(void)

undefined8 * FUN_140993d6e(undefined8 *param_1)

{
  FUN_140993da0();
  *param_1 = &PTR_FUN_14ab72ae0;
  param_1[0xab] = 0;
  *(undefined1 *)(param_1 + 0xac) = 0;
  return param_1;
}



// FUNCTION 140993da0 FUN_140993da0 body=282 status=ok
// SIG undefined FUN_140993da0(void)

undefined8 * FUN_140993da0(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  uVar2 = FUN_14007ca06();
  FUN_140b4820a(param_1,uVar2);
  *param_1 = &PTR_FUN_14a1aab90;
  param_1[0x8b] = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  param_1[0x87] = 0;
  param_1[0x88] = 0;
  *(undefined8 *)((longlong)param_1 + 0x464) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x46c) = 0;
  param_1[0x8f] = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  param_1[0x95] = 0;
  *(undefined4 *)(param_1 + 0x96) = 0;
  param_1[0x91] = 0;
  param_1[0x92] = 0;
  *(undefined8 *)((longlong)param_1 + 0x4b4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x4bc) = 0;
  param_1[0x99] = 0;
  *(undefined4 *)(param_1 + 0x9a) = 0;
  param_1[0x9b] = 0;
  param_1[0x9c] = 0;
  param_1[0x9d] = 0;
  param_1[0x9e] = 0;
  param_1[0x9f] = 0;
  param_1[0xa0] = 0;
  *(undefined8 *)((longlong)param_1 + 0x501) = 0;
  *(undefined8 *)((longlong)param_1 + 0x509) = 0;
  param_1[0xa9] = 0;
  param_1[0xaa] = 0;
  param_1[0xa7] = 0;
  param_1[0xa8] = 0;
  param_1[0xa5] = 0;
  param_1[0xa6] = 0;
  param_1[0xa3] = 0;
  param_1[0xa4] = 0;
  lVar1 = param_1[2];
  lVar3 = 0;
  if (lVar1 != 0) {
    lVar3 = FUN_140993eba();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x38) < *(int *)(lVar3 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        != lVar3 + 0x30)) {
      lVar3 = 0;
    }
    else {
      lVar3 = lVar1;
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(lVar1);
      }
    }
  }
  param_1[0x9d] = lVar3;
  return param_1;
}



// FUNCTION 140993eba FUN_140993eba body=228 status=ok
// SIG undefined FUN_140993eba(void)

longlong FUN_140993eba(void)

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
  undefined1 *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cacaee8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_140631fbe;
    local_20 = &LAB_145834656;
    local_28 = &LAB_14635d504;
    local_38 = &LAB_1478d53d7;
    local_40 = FUN_1417b3b33;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x648;
    FUN_14081cfa3(L"/Script/Engine",L"AnimBlueprintGeneratedClass",&DAT_14cacaee8,&DAT_1478d53d6);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cacaee8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140993fa0 FUN_140993fa0 body=106 status=ok
// SIG undefined FUN_140993fa0(void)

void FUN_140993fa0(longlong *param_1)

{
  byte bVar1;
  byte bVar2;
  
  bVar1 = *(byte *)(param_1[6] + 0xbdc);
  bVar2 = 1;
  if ((bVar1 & 0x3f) != 0x3f) {
    bVar2 = bVar1 + 1 & 0x3f;
  }
  bVar2 = bVar2 | bVar1 & 0xc0;
  FUN_14099400a(param_1[6],bVar2,-1 < *(char *)((longlong)param_1 + 0x2d1) || (bVar1 & 0x3f) == 0);
                    /* WARNING: Could not recover jumptable at 0x000140994007. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x318))(param_1,bVar2,0);
  return;
}



// FUNCTION 14099400a FUN_14099400a body=193 status=ok
// SIG undefined FUN_14099400a(void)

void FUN_14099400a(longlong param_1,char param_2,char param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined *puVar3;
  uint *puVar4;
  longlong *plVar5;
  uint uVar6;
  
  *(char *)(param_1 + 0xbdc) = param_2;
  if ((param_3 != '\0') && (*(char *)(param_1 + 0xbde) != param_2)) {
    *(char *)(param_1 + 0xbde) = param_2;
    uVar1 = *(ulonglong *)(param_1 + 0x28);
    if (uVar1 < 0xffffffff00000000) {
      plVar5 = DAT_14c9980d0;
      if (DAT_14c9980d8 == 0) {
        plVar5 = (longlong *)0x0;
      }
                    /* WARNING: Could not recover jumptable at 0x0001409940c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar5 + 0x58))(plVar5,param_1,uVar1,0x14);
      return;
    }
    uVar6 = (uint)uVar1;
    if ((-1 < (int)uVar6) && ((int)uVar6 < DAT_14c998088)) {
      puVar3 = &DAT_14c998070;
      if (DAT_14c998080 != (undefined *)0x0) {
        puVar3 = DAT_14c998080;
      }
      if ((*(uint *)(puVar3 + ((uint)(uVar1 >> 3) & 0xffffffc)) >> (uVar6 & 0x1f) & 1) != 0) {
        lVar2 = DAT_14c998060 + (ulonglong)(uVar6 & 0x7fffffff) * 0x68;
        puVar4 = *(uint **)(lVar2 + 0x18);
        if (*(uint **)(lVar2 + 0x18) == (uint *)0x0) {
          puVar4 = (uint *)(lVar2 + 8);
        }
        *puVar4 = *puVar4 | 0x100000;
        *(byte *)(lVar2 + 0x60) = *(byte *)(lVar2 + 0x60) | 1;
      }
    }
  }
  return;
}



// FUNCTION 1409940cc FUN_1409940cc body=218 status=ok
// SIG undefined FUN_1409940cc(void)

void FUN_1409940cc(longlong param_1,ulonglong param_2,char param_3)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (*(longlong *)(param_1 + 0x308) != 0) {
    lVar2 = FUN_1401b4c98(*(undefined8 *)(param_1 + 0x30));
    lVar1 = *(longlong *)(param_1 + 0x308);
    if (lVar1 != 0) {
      uVar3 = (uint)lVar1;
      if ((int)(uVar3 & 0xffffff) < *(int *)(lVar2 + 0x10)) {
        lVar4 = lVar2 + 0x18;
        if (*(longlong *)(lVar2 + 0x28) != 0) {
          lVar4 = *(longlong *)(lVar2 + 0x28);
        }
        if ((*(uint *)(lVar4 + (ulonglong)((uVar3 & 0xffffff) >> 5) * 4) >> (uVar3 & 0x1f) & 1) != 0
           ) {
          lVar4 = *(longlong *)(lVar2 + 8);
          lVar5 = (ulonglong)(uVar3 & 0xffffff) * 0x70;
          if (((lVar4 + lVar5 != 0) && (*(longlong *)(lVar4 + 0x60 + lVar5) == lVar1)) &&
             (*(char *)(lVar4 + 1 + lVar5) != '\x04')) {
            FUN_1405a424c(lVar2);
          }
        }
      }
    }
    *(undefined8 *)(param_1 + 0x308) = 0;
  }
  if ((param_2 & 0x3f) != 0) {
    if ((param_3 != '\0') && (*(char *)(param_1 + 0x2d1) < '\0')) {
      FUN_140b37562(param_1);
      return;
    }
    FUN_1409941a6(param_1);
    return;
  }
  FUN_140994af2(param_1);
  return;
}



// FUNCTION 1409941a6 FUN_1409941a6 body=2379 status=ok
// SIG undefined FUN_1409941a6(void)

ulonglong FUN_1409941a6(longlong *param_1)

{
  int *piVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  code *pcVar5;
  char cVar6;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong lVar14;
  longlong *plVar15;
  int iVar16;
  code *pcVar17;
  code *pcVar18;
  bool bVar19;
  float fVar20;
  undefined1 auStack_168 [32];
  undefined8 *local_148;
  uint local_140;
  uint local_138;
  undefined8 local_130;
  wchar_t *local_128;
  code *local_120;
  undefined1 *local_118;
  undefined8 *local_110;
  code *local_108;
  code *local_100;
  undefined1 local_f0 [24];
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  code *local_c0;
  int local_b8;
  undefined4 uStack_b4;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_7c;
  undefined4 local_74;
  longlong local_68;
  undefined4 local_60;
  ulonglong local_50;
  
  uVar10 = DAT_14c707940 ^ (ulonglong)auStack_168;
  lVar4 = param_1[6];
  local_50 = uVar10;
  if (lVar4 == 0) goto LAB_1409947c6;
  FUN_14054d5aa(&DAT_14cb95108);
  *(undefined1 *)(lVar4 + 0xbd9) = *(undefined1 *)(lVar4 + 0xbda);
  uVar10 = FUN_14487fd02(lVar4);
  if ((int)uVar10 == 3) {
    if ((*(char *)(lVar4 + 0x178) != '\x03') &&
       ((*(longlong **)(lVar4 + 0x1b0) == (longlong *)0x0 ||
        (cVar6 = (**(code **)(**(longlong **)(lVar4 + 0x1b0) + 0x700))(), cVar6 == '\0')))) {
      *(byte *)(param_1 + 0x5a) = *(byte *)(param_1 + 0x5a) | 2;
      *(int *)((longlong)param_1 + 0x2dc) = *(int *)((longlong)param_1 + 0x2dc) + 1;
      FUN_143ec3f86(param_1,0);
      fVar20 = (float)(**(code **)(*param_1 + 0x450))(param_1);
      if (0.0 < fVar20) {
        bVar2 = *(byte *)(param_1 + 7);
        if (((int)(uint)bVar2 < *(int *)(param_1[6] + 0xbf0)) &&
           (lVar12 = *(longlong *)
                      (*(longlong *)(param_1[6] + 0xbe8) + 0x40 +
                      (ulonglong)bVar2 * 0x80 + (ulonglong)bVar2 * 8), lVar12 != 0)) {
          FUN_14093f1ce(lVar12,fVar20);
        }
      }
      FUN_1447f69b6(param_1 + 0x11);
    }
LAB_1409942c8:
    if (*(char *)((longlong)param_1 + 0x2fa) == '\0') {
      iVar16 = 0;
    }
    else {
      if ((*(byte *)((longlong)param_1 + 0x2d1) & 0x10) == 0) {
        bVar2 = *(byte *)((longlong)param_1 + 0x2f9);
      }
      else {
        bVar2 = *(byte *)(param_1 + 0x5f);
      }
      iVar16 = bVar2 + 1;
    }
    plVar15 = *(longlong **)(param_1[6] + 0x1b0);
    if (plVar15 == (longlong *)0x0) {
      bVar19 = false;
    }
    else {
      pcVar18 = *(code **)(*plVar15 + 0x5e8);
      if (pcVar18 == FUN_140972dde) {
        lVar12 = plVar15[0x76];
        if (lVar12 == 0) {
          pcVar18 = *(code **)(*plVar15 + 0x5f8);
          if (pcVar18 == FUN_144784df4) {
            if (*(code **)(plVar15[0x784] + 0x18) == (code *)&LAB_144904684) {
              if (*(int *)((longlong)plVar15 + 0x75b4) != 0) {
                uVar9 = *(uint *)(plVar15 + 0xeb6);
                lVar12 = 0;
                if (((int)uVar9 < 0) || (DAT_14c9647dc <= (int)uVar9)) goto LAB_1409943ae;
                plVar11 = (longlong *)
                          ((ulonglong)((uVar9 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8));
                if ((plVar11 != (longlong *)0x0) &&
                   (((int)plVar11[2] == *(int *)((longlong)plVar15 + 0x75b4) &&
                    ((*(uint *)(plVar11 + 1) & 0x10200000) == 0)))) {
                  if ((*(uint *)(plVar11 + 1) & 0x10200000) == 0) {
                    lVar12 = *plVar11;
                  }
                  else {
                    lVar12 = 0;
                  }
                  lVar12 = lVar12 + 0x110;
                  goto LAB_140994812;
                }
              }
            }
            else {
              lVar12 = (**(code **)(plVar15[0x784] + 0x18))(plVar15 + 0x784);
LAB_140994812:
              if (lVar12 != 0) {
                lVar12 = *(longlong *)(lVar12 + 0x20);
                goto LAB_14099481f;
              }
            }
          }
          else {
            lVar12 = (*pcVar18)(plVar15);
LAB_14099481f:
            if (lVar12 != 0) {
              lVar12 = *(longlong *)(lVar12 + 0x3b0);
              goto LAB_1409943ae;
            }
          }
          lVar12 = 0;
        }
      }
      else {
        lVar12 = (*pcVar18)(plVar15);
      }
LAB_1409943ae:
      bVar19 = lVar12 != 0;
    }
    local_148 = (undefined8 *)((ulonglong)local_148 & 0xffffffffffffff00);
    FUN_140980406(lVar4,DAT_14cb94558,(char)param_1[7],iVar16);
    uVar8 = (**(code **)(*param_1 + 0x3c8))(param_1);
    fVar20 = (float)FUN_140284960(param_1);
    plVar11 = *(longlong **)(lVar4 + 0x900);
    if (plVar11 != (longlong *)0x0) {
      (**(code **)(*plVar11 + 0x70))
                (plVar11,*(undefined1 *)(lVar4 + 0xbd8),
                 ~-(uint)(0.0 < fVar20) & 0x3dcccccd | (uint)(1.0 / fVar20) & -(uint)(0.0 < fVar20),
                 uVar8);
    }
    if (*(char *)((longlong)param_1 + 0x2fb) == '\0') {
      local_88 = 0;
      local_80 = 0;
      local_a8 = (code *)0x0;
      uStack_a0 = 0;
      local_7c = 0xffffffff00000080;
      local_74 = 0;
      local_68 = 0;
      local_60 = 0;
      if ((*(longlong *)(lVar4 + 0xb38) != 0) &&
         (plVar11 = *(longlong **)(lVar4 + 0xb40), plVar11 != (longlong *)0x0)) {
        local_140 = CONCAT31(local_140._1_3_,bVar19) ^ 1;
        local_148 = &local_a8;
        uVar8 = (**(code **)(*plVar11 + 0x20))
                          (plVar11,DAT_14cb94948,*(undefined8 *)(lVar4 + 0xcfc),lVar4);
        if ((plVar15 != (longlong *)0x0) && ((char)uVar8 != '\0')) {
          FUN_1407ca880();
          plVar11 = (longlong *)(**(code **)(*plVar15 + 0x288))(plVar15);
          if (plVar11 != (longlong *)0x0) {
            FUN_1407ca880();
            plVar13 = (longlong *)FUN_144718840(plVar11);
            if (((plVar11 != plVar13) && (plVar13 != (longlong *)0x0)) &&
               (lVar12 = (**(code **)(*plVar13 + 0x50))(plVar13), lVar12 != 0)) {
              FUN_140dc01da(lVar12,&local_c0,uVar8);
              pcVar18 = local_c0;
              if (local_c0 != (code *)0x0) {
                lVar12 = *(longlong *)(local_c0 + 0x30);
                lVar14 = FUN_140ed0e8c();
                if ((*(int *)(lVar14 + 0x38) <= *(int *)(*(longlong *)(lVar12 + 0x10) + 0x38)) &&
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x30) +
                     (longlong)*(int *)(lVar14 + 0x38) * 8) == lVar14 + 0x30)) {
                  *(char *)((longlong)param_1 + 0x2fb) = (char)uVar8;
                  FUN_148a19c86(pcVar18 + 0x18,&local_d8,param_1);
                }
              }
              plVar11 = (longlong *)CONCAT44(uStack_b4,local_b8);
              if (plVar11 != (longlong *)0x0) {
                LOCK();
                plVar13 = plVar11 + 1;
                *(int *)plVar13 = (int)*plVar13 + -1;
                UNLOCK();
                if ((int)*plVar13 == 0) {
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
      }
      local_60 = 0;
      if (local_68 != 0) {
        FUN_1400020a8();
      }
      FUN_140333f4e(&local_a8);
    }
    if (1 < *(byte *)((longlong)param_1 + 0x2fa)) {
      *(char *)((longlong)param_1 + 0x2f9) =
           (char)((*(byte *)((longlong)param_1 + 0x2f9) + 1) %
                 (uint)(ushort)*(byte *)((longlong)param_1 + 0x2fa));
    }
    uVar10 = param_1[0x2f];
    if (((*(longlong *)(uVar10 + 0x250) != 0) &&
        (uVar9 = *(int *)(uVar10 + 600) - 1,
        uVar10 = (ulonglong)CONCAT31((int3)(uVar9 >> 8),0xfffffffd < uVar9),
        bVar19 == true && 0xfffffffd >= uVar9)) &&
       (plVar11 = (longlong *)plVar15[0x78], plVar11 != (longlong *)0x0)) {
      if (DAT_14cb61cd0 == 0) {
        local_110 = &local_a8;
        local_a8 = FUN_141030f22;
        local_100 = FUN_14081d0ea;
        local_108 = (code *)&LAB_1463b31ae;
        local_118 = &LAB_1486dca4f;
        local_120 = (code *)&LAB_1464f50a6;
        local_128 = L"Game";
        local_130 = 0;
        local_138 = 0x10000004;
        local_140 = 8;
        local_148 = (undefined8 *)CONCAT44(local_148._4_4_,0xd70);
        FUN_14081cfa3(L"/Script/GbxGame",L"GbxPlayerController",&DAT_14cb61cd0,FUN_1464f5084);
      }
      uVar10 = DAT_14cb61cd0;
      if (((*(int *)(DAT_14cb61cd0 + 0x38) <= *(int *)(plVar11[2] + 0x38)) &&
          (uVar10 = DAT_14cb61cd0 + 0x30,
          *(ulonglong *)
           (*(longlong *)(plVar11[2] + 0x30) + (longlong)*(int *)(DAT_14cb61cd0 + 0x38) * 8) ==
          uVar10)) && (uVar10 = (**(code **)(*plVar11 + 0x6c8))(plVar11), (char)uVar10 != '\0')) {
        bVar2 = *(byte *)(lVar4 + 0xbd8);
        if ((int)(uint)bVar2 < *(int *)(lVar4 + 0xbf0)) {
          lVar12 = *(longlong *)
                    (*(longlong *)(lVar4 + 0xbe8) + 0x28 +
                    (ulonglong)bVar2 * 0x80 + (ulonglong)bVar2 * 8);
        }
        else {
          lVar12 = 0;
        }
        pcVar18 = *(code **)(param_1[0x2f] + 0x250);
        iVar16 = *(int *)(param_1[0x2f] + 600);
        uVar9 = 0x3f800000;
        if (plVar15 != (longlong *)0x0) {
          if (DAT_14cb6fd70 == 0) {
            local_110 = &local_a8;
            local_a8 = FUN_1449e2820;
            local_100 = FUN_14081d0ea;
            local_108 = FUN_1427b09ee;
            local_118 = &LAB_1487a9cc9;
            local_120 = FUN_1465433f8;
            local_128 = L"Engine";
            local_130 = 0;
            local_138 = 0x10004001;
            local_140 = 8;
            local_148 = (undefined8 *)CONCAT44(local_148._4_4_,0x28);
            FUN_14081cfa3(L"/Script/GbxGame",L"ZoomHandler",&DAT_14cb6fd70,&DAT_1487a9cc8);
          }
          plVar15 = (longlong *)(**(code **)(*plVar15 + 0x288))(plVar15,DAT_14cb6fd70);
          if (plVar15 != (longlong *)0x0) {
            if (DAT_14cb6fd70 == 0) {
              local_110 = &local_a8;
              local_a8 = FUN_1449e2820;
              local_100 = FUN_14081d0ea;
              local_108 = FUN_1427b09ee;
              local_118 = &LAB_1487a9cc9;
              local_120 = FUN_1465433f8;
              local_128 = L"Engine";
              local_130 = 0;
              local_138 = 0x10004001;
              local_140 = 8;
              local_148 = (undefined8 *)CONCAT44(local_148._4_4_,0x28);
              FUN_14081cfa3(L"/Script/GbxGame",L"ZoomHandler",&DAT_14cb6fd70,&DAT_1487a9cc8);
            }
            plVar13 = (longlong *)FUN_144718840(plVar15,DAT_14cb6fd70);
            if (((plVar15 != plVar13) && (lVar12 != 0)) &&
               ((plVar13 != (longlong *)0x0 &&
                (cVar6 = (**(code **)(*plVar13 + 0x48))(plVar13,1), cVar6 != '\0')))) {
              lVar12 = *(longlong *)(lVar12 + 0x38);
              pcVar5 = *(code **)(lVar12 + 0xb8);
              iVar3 = *(int *)(lVar12 + 0xc0);
              pcVar17 = pcVar5;
              if (iVar16 == iVar3) {
                pcVar17 = pcVar18;
              }
              if (pcVar18 != pcVar5) {
                pcVar17 = pcVar5;
              }
              if (pcVar5 != (code *)0x0 && iVar3 - 1U < 0xfffffffe) {
                pcVar18 = pcVar17;
                iVar16 = iVar3;
              }
              uVar9 = *(uint *)(lVar12 + 0xd0);
            }
          }
        }
        if (*(char *)(param_1[0x2f] + 0x2b5) == '\x01') {
          FUN_148a21650(lVar4,*(undefined8 *)(param_1[0x2f] + 0x280),&local_d8,local_f0);
          local_120 = (code *)&local_a8;
          local_98 = local_c8;
          local_a8 = (code *)CONCAT44(uStack_d4,local_d8);
          uStack_a0 = CONCAT44(uStack_cc,uStack_d0);
          local_b0 = 0;
          local_110 = (undefined8 *)((ulonglong)local_110 & 0xffffffff00000000);
          local_118 = (undefined1 *)((ulonglong)local_118 & 0xffffffff00000000);
          local_128 = (wchar_t *)0x0;
          local_130 = CONCAT44(local_130._4_4_,uVar9);
          local_138 = local_138 & 0xffffff00;
          local_140 = local_140 & 0xffffff00;
          local_148 = (undefined8 *)((ulonglong)local_148 & 0xffffffffffffff00);
          local_c0 = pcVar18;
          local_b8 = iVar16;
          uVar10 = FUN_1410a29b6(plVar11,&local_c0,0xff,plVar11 + 300);
        }
        else {
          uStack_a0 = CONCAT44(uStack_a0._4_4_,iVar16);
          local_98 = 0;
          local_130 = 0;
          local_140 = local_140 & 0xffffff00;
          local_148 = (undefined8 *)((ulonglong)local_148 & 0xffffffffffffff00);
          local_138 = uVar9;
          local_a8 = pcVar18;
          uVar10 = FUN_140cab31c(plVar11,&local_a8,0xff,plVar11 + 300);
        }
      }
    }
    uVar9 = *(uint *)(lVar4 + 0xd10);
  }
  else {
    if ((int)uVar10 != 1) goto LAB_1409942c8;
    uVar9 = *(uint *)(lVar4 + 0xd10);
  }
  if (1 < (int)uVar9) {
    uVar7 = *(byte *)(lVar4 + 0xbd9) + 1;
    uVar10 = (ulonglong)uVar7 / (ulonglong)uVar9;
    *(char *)(lVar4 + 0xbda) = (char)(uVar7 % uVar9);
  }
LAB_1409947c6:
  if ((local_50 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return uVar10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140994af2 FUN_140994af2 body=745 status=ok
// SIG undefined FUN_140994af2(void)

void FUN_140994af2(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  int7 iVar9;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_40;
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar3 = *(longlong *)(param_1 + 0x30);
  *(byte *)(param_1 + 0x2d0) = *(byte *)(param_1 + 0x2d0) & 0xfd;
  iVar6 = FUN_14487fd02(lVar3);
  if ((iVar6 == 3) && (*(char *)(lVar3 + 0x178) != '\x03')) {
    if (*(longlong **)(lVar3 + 0x1b0) != (longlong *)0x0) {
      cVar5 = (**(code **)(**(longlong **)(lVar3 + 0x1b0) + 0x700))();
      if (cVar5 != '\0') goto LAB_140994b25;
    }
    *(undefined4 *)(param_1 + 0x2dc) = 0;
    FUN_1447f69b6(param_1 + 0x70);
    if (0 < *(int *)(lVar3 + 0xac8)) {
      FUN_1418ba386(lVar3 + 0xac0);
    }
  }
LAB_140994b25:
  if (*(char *)(param_1 + 0x2fb) == '\0') goto LAB_140994b32;
  lVar8 = FUN_1407ca824(*(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x1b0));
  if (lVar8 == 0) {
LAB_140994c6e:
    if (((*(char *)(param_1 + 0x2fb) != '\0') && (*(longlong *)(lVar3 + 0xb38) != 0)) &&
       (*(longlong **)(lVar3 + 0xb40) != (longlong *)0x0)) {
      (**(code **)(**(longlong **)(lVar3 + 0xb40) + 0x38))();
    }
  }
  else {
    FUN_140dc01da(lVar8,&local_38,*(undefined1 *)(param_1 + 0x2fb));
    if (local_38 == 0) {
LAB_140994c47:
      if (local_30 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_30 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
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
      goto LAB_140994c6e;
    }
    lVar8 = *(longlong *)(local_38 + 0x30);
    lVar7 = FUN_140ed0e8c();
    plVar4 = local_30;
    lVar8 = *(longlong *)(lVar8 + 0x10);
    iVar6 = *(int *)(lVar7 + 0x38);
    if ((*(int *)(lVar8 + 0x38) < iVar6) ||
       (*(longlong *)(*(longlong *)(lVar8 + 0x30) + (longlong)iVar6 * 8) != lVar7 + 0x30))
    goto LAB_140994c47;
    iVar9 = (int7)(int3)((uint)iVar6 >> 8);
    if (local_30 == (longlong *)0x0) {
      FUN_1410c9a0e(local_38,CONCAT71(iVar9,1));
    }
    else {
      LOCK();
      *(int *)(local_30 + 1) = (int)local_30[1] + 1;
      UNLOCK();
      FUN_1410c9a0e(local_38,CONCAT71(iVar9,1));
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
      if (local_30 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_30 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
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
    }
  }
  *(undefined1 *)(param_1 + 0x2fb) = 0;
LAB_140994b32:
  lVar8 = *(longlong *)(param_1 + 0x178);
  if (((*(char *)(lVar8 + 0x2b4) == '\x01') && (*(longlong *)(lVar8 + 0x250) != 0)) &&
     ((*(int *)(lVar8 + 600) - 1U < 0xfffffffe &&
      ((lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x1b0), lVar8 != 0 &&
       (plVar4 = *(longlong **)(lVar8 + 0x3c0), plVar4 != (longlong *)0x0)))))) {
    lVar8 = FUN_1449f3324();
    if ((*(int *)(lVar8 + 0x38) <= *(int *)(plVar4[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(plVar4[2] + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) ==
        lVar8 + 0x30)) {
      cVar5 = (**(code **)(*plVar4 + 0x6c8))(plVar4);
      if (cVar5 != '\0') {
        local_50 = *(undefined8 *)(*(longlong *)(param_1 + 0x178) + 0x250);
        local_48 = *(undefined4 *)(*(longlong *)(param_1 + 0x178) + 600);
        local_40 = 0;
        FUN_145815ce0(plVar4,&local_50,plVar4 + 300,0);
      }
    }
  }
  FUN_140994e4c(lVar3,DAT_14cb94558,*(undefined1 *)(param_1 + 0x38),1);
  if (*(longlong *)(lVar3 + 0x900) != 0) {
    FUN_140994ddc(*(longlong *)(lVar3 + 0x900),*(undefined1 *)(lVar3 + 0xbd8));
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140994ddc FUN_140994ddc body=112 status=ok
// SIG undefined FUN_140994ddc(void)

void FUN_140994ddc(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  
  if (*(char *)(param_1 + 0x3c) == '\x01') {
    lVar1 = *(longlong *)(param_1 + 0x468);
    if (((lVar1 != 0) && (*(char *)(lVar1 + 8) == '\x01')) && (DAT_14cb259f8 != 0)) {
      FUN_140993502(lVar1);
      *(undefined1 *)(lVar1 + 8) = 0;
    }
    if (*(char *)(param_1 + 0x489) == '\x01') {
      FUN_140a9d838(param_1,param_1 + 0x410,param_2,0);
      *(undefined1 *)(param_1 + 0x489) = 0;
      *(undefined1 *)(param_1 + 0x461) = 0;
    }
  }
  return;
}



// FUNCTION 140994e4c FUN_140994e4c body=151 status=ok
// SIG undefined FUN_140994e4c(void)

void FUN_140994e4c(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(param_1 + 0xd10);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0xd08);
    lVar3 = 0;
    do {
      FUN_140994ee4(*(undefined8 *)(lVar2 + lVar3),param_2,param_3,param_4);
      lVar3 = lVar3 + 8;
    } while ((longlong)iVar1 * 8 != lVar3);
  }
  iVar1 = *(int *)(param_1 + 0xd20);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0xd18);
    lVar3 = 0;
    do {
      FUN_140994ee4(*(undefined8 *)(lVar2 + lVar3),param_2,param_3,param_4);
      lVar3 = lVar3 + 8;
    } while ((longlong)iVar1 * 8 != lVar3);
  }
  return;
}



// FUNCTION 140994ee4 FUN_140994ee4 body=144 status=ok
// SIG undefined FUN_140994ee4(void)

void FUN_140994ee4(longlong param_1,longlong param_2,byte param_3,char param_4)

{
  byte *pbVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  
  iVar2 = *(int *)(param_1 + 0x98);
  if ((longlong)iVar2 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x90);
    lVar5 = 0;
    do {
      if ((((*(longlong *)(lVar3 + lVar5) == param_2) &&
           ((*(uint *)(lVar3 + 0xc + lVar5) & 1 << (param_3 & 0x1f)) != 0)) &&
          ((param_4 == '\0' || ((*(byte *)(lVar3 + 0x10 + lVar5) & 0x80) != 0)))) &&
         (plVar4 = *(longlong **)(lVar3 + 0xe8 + lVar5), plVar4 != (longlong *)0x0)) {
        (**(code **)(*plVar4 + 0x2b0))();
        pbVar1 = (byte *)(lVar3 + 0x15 + lVar5);
        *pbVar1 = *pbVar1 & 0xf7;
      }
      lVar5 = lVar5 + 0xf0;
    } while ((longlong)iVar2 * 0xf0 - lVar5 != 0);
  }
  return;
}



// FUNCTION 140994f74 FUN_140994f74 body=51 status=ok
// SIG undefined FUN_140994f74(void)

void FUN_140994f74(undefined8 param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 == 0) {
    lVar1 = 0;
    do {
      FUN_140994fa8((longlong)&DAT_14c9a8508 + lVar1);
      lVar1 = lVar1 + 0x120;
    } while (lVar1 != 0x2880);
  }
  return;
}



// FUNCTION 140994fa8 FUN_140994fa8 body=761 status=ok
// SIG undefined FUN_140994fa8(void)

void FUN_140994fa8(longlong param_1)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined *puVar5;
  longlong lVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  bool bVar10;
  
  if ((((*(int *)(param_1 + 0x34) != 0) && (uVar2 = *(uint *)(param_1 + 0x30), -1 < (int)uVar2)) &&
      ((int)uVar2 < DAT_14c9647dc)) &&
     (((lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8), lVar6 != 0 &&
       (*(int *)(lVar6 + 0x10) == *(int *)(param_1 + 0x34))) &&
      ((*(uint *)(lVar6 + 8) & 0x10200000) == 0)))) {
    plVar1 = (longlong *)(param_1 + 0x38);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c951a88) && (FUN_144b3d300(&DAT_14c951a88), DAT_14c951a88 == -1)) {
      uVar4 = FUN_140342cba();
      FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0,0x8001,0,uVar4,FUN_1468c7f1e);
      atexit(FUN_14280c819);
      _Init_thread_footer(&DAT_14c951a88);
    }
    if (*plVar1 == 0) {
      if (*(int *)(param_1 + 0x50) == 0) goto LAB_1409950f8;
    }
    else {
      if (((((*(int *)(param_1 + 0x44) != 0) && (uVar2 = *(uint *)(param_1 + 0x40), -1 < (int)uVar2)
            ) && ((int)uVar2 < DAT_14c9647dc)) &&
          ((lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8), lVar6 != 0 &&
           (*(int *)(lVar6 + 0x10) == *(int *)(param_1 + 0x44))))) &&
         ((*(uint *)(lVar6 + 8) & 0x10200000) == 0)) {
        return;
      }
      if (*(int *)(param_1 + 0x50) == 0) {
        return;
      }
    }
    lVar6 = FUN_14007daa4(plVar1,0,0);
    if (lVar6 != 0) {
      puVar5 = *(undefined **)(lVar6 + 8);
      if (DAT_14c951a40 == 0) {
        bVar10 = puVar5 != (undefined *)0x0;
        if (puVar5 != &DAT_14c951a38 && bVar10) {
          do {
            puVar5 = *(undefined **)(puVar5 + 0x30);
            bVar10 = puVar5 != (undefined *)0x0;
            if (puVar5 == &DAT_14c951a38) break;
          } while (puVar5 != (undefined *)0x0);
        }
        if (bVar10) goto LAB_1409950af;
      }
      else if ((*(ulonglong *)(puVar5 + 0x18) & DAT_14c951a40) != 0) {
LAB_1409950af:
        *plVar1 = lVar6;
        return;
      }
    }
    if (*plVar1 != 0) {
      *plVar1 = 0;
      *(undefined8 *)(param_1 + 0x40) = 0;
    }
  }
LAB_1409950f8:
  if (*(code **)(param_1 + 0x28) == (code *)0x0) {
    return;
  }
  lVar6 = (**(code **)(param_1 + 0x28))(param_1);
  if (lVar6 != 0) {
    for (uVar8 = *(ulonglong *)(lVar6 + 0x10); (uVar8 & 1) == 0;
        uVar8 = *(ulonglong *)(uVar8 + 0x10)) {
      if (uVar8 < 2) goto LAB_140995249;
    }
    uVar8 = uVar8 & 0xfffffffffffffffe;
    if (uVar8 != 0) {
      if (DAT_14c950c29 != '\0') {
        FUN_1456cec3c(uVar8);
      }
      uVar2 = *(uint *)(uVar8 + 0xc);
      *(uint *)(param_1 + 0x30) = uVar2;
      if ((int)uVar2 < DAT_14c9647dc) {
        lVar9 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      }
      else {
        lVar9 = 0;
      }
      iVar3 = *(int *)(lVar9 + 0x10);
      if (*(int *)(lVar9 + 0x10) == 0) {
        LOCK();
        iVar3 = DAT_14c964868 + 1;
        UNLOCK();
        iVar7 = DAT_14c964868 + 1;
        bVar10 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar3;
        if (bVar10) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar7);
        }
        LOCK();
        iVar3 = *(int *)(lVar9 + 0x10);
        bVar10 = iVar3 == 0;
        if (bVar10) {
          *(int *)(lVar9 + 0x10) = iVar7;
          iVar3 = 0;
        }
        UNLOCK();
        if (bVar10) {
          iVar3 = iVar7;
        }
      }
      goto LAB_140995173;
    }
  }
LAB_140995249:
  *(undefined4 *)(param_1 + 0x30) = 0;
  iVar3 = 0;
LAB_140995173:
  *(int *)(param_1 + 0x34) = iVar3;
  *(longlong *)(param_1 + 0x38) = lVar6;
  FUN_1449651a4(param_1 + 0x38,lVar6);
  return;
}



// FUNCTION 1409952a2 FUN_1409952a2 body=104 status=ok
// SIG undefined FUN_1409952a2(void)

void FUN_1409952a2(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = (**(code **)(*param_1 + 0x6b8))();
  if (lVar2 != 0) {
    lVar3 = FUN_14099530a();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x38) < *(int *)(lVar3 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        != lVar3 + 0x30)) {
      cVar1 = FUN_140eff651(param_1,param_2);
      if (cVar1 != '\0') goto LAB_1409952ef;
    }
    return;
  }
LAB_1409952ef:
  FUN_1409953f0(param_1,param_2);
  return;
}



// FUNCTION 14099530a FUN_14099530a body=228 status=ok
// SIG undefined FUN_14099530a(void)

longlong FUN_14099530a(void)

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
  if (DAT_14cba5620 == 0) {
    local_30 = &local_10;
    local_10 = FUN_14096c2dc;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1459f28be;
    local_38 = &LAB_148bda34d;
    local_40 = &LAB_145abb03b;
    local_48 = &DAT_149e063b2;
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x2980;
    FUN_14081cfa3(L"/Script/OakGame",L"MainMenuStationObject",&DAT_14cba5620,&DAT_148bda34c);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cba5620;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1409953f0 FUN_1409953f0 body=356 status=ok
// SIG undefined FUN_1409953f0(void)

void FUN_1409953f0(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar4 = FUN_1447210f0();
  if (lVar4 != 0) {
    lVar4 = FUN_140995560(lVar4);
    if (lVar4 != 0) {
      if (*(longlong *)(param_1 + 0xbd8) != 0) {
        FUN_14480f766(lVar4 + 0x30);
      }
      cVar3 = FUN_1409956fc(lVar4);
      if (cVar3 != '\0') {
        uStack_48 = 0;
        local_50 = param_1;
        FUN_14485c47a(&uStack_48,param_2);
        local_38 = (undefined8 *)0x0;
        local_30 = 0;
        FUN_1446efa72(&local_38,0,3,0x10);
        puVar1 = local_38;
        local_30 = 3;
        *local_38 = &PTR_LAB_149e020b0;
        LOCK();
        UNLOCK();
        lVar5 = DAT_14c758608 + 1;
        lVar2 = DAT_14c758608 + 1;
        if (lVar5 == 0) {
          LOCK();
          UNLOCK();
          lVar5 = DAT_14c758608 + 2;
          lVar2 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar2;
        local_38[2] = lVar5;
        *local_38 = &PTR_FUN_14b3e9220;
        local_38[3] = 0;
        FUN_14485c47a(local_38 + 3,param_1);
        *(undefined4 *)(puVar1 + 4) = (undefined4)local_50;
        *(undefined4 *)((longlong)puVar1 + 0x24) = local_50._4_4_;
        *(undefined4 *)(puVar1 + 5) = (undefined4)uStack_48;
        *(undefined4 *)((longlong)puVar1 + 0x2c) = uStack_48._4_4_;
        FUN_1448b6402(lVar4 + 0x30,&local_40,&local_38);
        FUN_1449db362(&local_38);
        *(undefined8 *)(param_1 + 0xbd8) = local_40;
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_78);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    FUN_140995754(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140995560 FUN_140995560 body=105 status=ok
// SIG undefined FUN_140995560(void)

void FUN_140995560(longlong param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_140995616();
  if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_18);
  }
  FUN_1409955ca(param_1 + 0x870,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1409955ca FUN_1409955ca body=76 status=ok
// SIG undefined FUN_1409955ca(void)

void FUN_1409955ca(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar1 = FUN_140995616();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar2 = *param_2;
      goto LAB_140995607;
    }
  }
  lVar2 = 0;
LAB_140995607:
  FUN_1448a6f9c(param_1,lVar2);
  return;
}



// FUNCTION 140995616 FUN_140995616 body=228 status=ok
// SIG undefined FUN_140995616(void)

longlong FUN_140995616(void)

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
  if (DAT_14cb60278 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_141737a50;
    local_38 = &LAB_1486c4d37;
    local_40 = FUN_1464ebbd6;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x50;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxLevelSequenceSubsystem",&DAT_14cb60278,&DAT_1486c4d36);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb60278;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1409956fc FUN_1409956fc body=87 status=ok
// SIG undefined FUN_1409956fc(void)

undefined8 FUN_1409956fc(void)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_1408bbab6();
  if ((lVar1 != 0) && ((longlong)*(int *)(lVar1 + 0x520) != 0)) {
    lVar2 = 0;
    do {
      if ((*(char *)(*(longlong *)(lVar1 + 0x518) + 0x38 + lVar2) == '\x01') &&
         (*(char *)(*(longlong *)(lVar1 + 0x518) + 0x48 + lVar2) != '\x01')) {
        return 1;
      }
      lVar2 = lVar2 + 0x90;
    } while ((longlong)*(int *)(lVar1 + 0x520) * 0x90 != lVar2);
  }
  return 0;
}



// FUNCTION 140995754 FUN_140995754 body=248 status=ok
// SIG undefined FUN_140995754(void)

void FUN_140995754(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  undefined4 local_40;
  undefined1 local_3c;
  undefined8 local_38;
  undefined4 local_30;
  undefined1 local_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((char)param_1[0x8b] == '\x01') {
    iVar1 = FUN_14487fd02();
    if (iVar1 == 3) {
      lVar2 = (**(code **)(*param_1 + 0x6b8))(param_1);
      if (lVar2 != 0) {
        lVar3 = FUN_140995914();
        if (((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
            (*(longlong *)
              (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
              (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30)) &&
           (iVar1 = FUN_14798bef0(lVar2), iVar1 != -1)) goto LAB_1409957c0;
      }
    }
    else {
      lVar2 = (**(code **)(*param_1 + 0xda8))();
      if (lVar2 != 0) {
        local_30 = 0;
        local_2c = 1;
        local_28 = 0x40000000;
        (**(code **)(*param_1 + 0xe38))(param_1,lVar2);
        goto LAB_1409957c0;
      }
    }
    local_40 = 0;
    local_3c = 1;
    local_38 = 0x40000000;
    (**(code **)(*param_1 + 0xe38))(param_1,param_2);
  }
LAB_1409957c0:
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14099584e FUN_14099584e body=198 status=ok
// SIG undefined FUN_14099584e(void)

longlong FUN_14099584e(longlong param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  iVar1 = FUN_14487fd02();
  if ((((iVar1 != 3) && (lVar3 = FUN_1447210f0(param_1), lVar3 != 0)) &&
      (0 < *(int *)(lVar3 + 0x248))) && (0 < *(int *)(lVar3 + 0x238))) {
    lVar6 = 0;
    lVar5 = 0;
    while (lVar4 = FUN_14479d2ce(*(longlong *)(lVar3 + 0x230) + lVar6), lVar4 != param_1) {
      lVar5 = lVar5 + 1;
      lVar6 = lVar6 + 8;
      if (*(int *)(lVar3 + 0x238) <= lVar5) {
        return 0;
      }
    }
    iVar1 = 0;
    if (0 < *(int *)(lVar3 + 0x248)) {
      lVar6 = 0;
      while ((lVar4 = FUN_14479d2ce(*(longlong *)(lVar3 + 0x240) + lVar6), lVar4 == 0 ||
             (iVar2 = FUN_14798bef0(lVar4), iVar2 != (int)lVar5))) {
        lVar6 = lVar6 + 8;
        iVar1 = iVar1 + 1;
        if (*(int *)(lVar3 + 0x248) <= iVar1) {
          return 0;
        }
      }
      return lVar4;
    }
  }
  return 0;
}



// FUNCTION 140995914 FUN_140995914 body=228 status=ok
// SIG undefined FUN_140995914(void)

longlong FUN_140995914(void)

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
  if (DAT_14cacefa0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_141030f22;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_142b4754c;
    local_38 = &LAB_14798befa;
    local_40 = &LAB_1463afe64;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0xc80;
    FUN_14081cfa3(L"/Script/Engine",L"CameraActor",&DAT_14cacefa0,FUN_1463afe42);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cacefa0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1409959fa FUN_1409959fa body=191 status=ok
// SIG undefined FUN_1409959fa(void)

void FUN_1409959fa(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  plVar1 = (longlong *)FUN_140995b6b(DAT_14c951640);
  *(byte *)((longlong)plVar1 + 0x66c) = *(byte *)((longlong)plVar1 + 0x66c) | 4;
  lVar2 = FUN_140995ab9(DAT_14c951640);
  *(byte *)(lVar2 + 0x2c8) = *(byte *)(lVar2 + 0x2c8) | 2;
  if ((longlong)*(int *)(param_1 + 0x40) != 0) {
    lVar4 = *(longlong *)(param_1 + 0x38);
    lVar5 = (longlong)*(int *)(param_1 + 0x40) * 0x28;
    do {
      lVar3 = FUN_1401ca522(lVar4);
      if (lVar3 != 0) {
        (**(code **)(*plVar1 + 0xa78))(plVar1,lVar3);
      }
      lVar4 = lVar4 + 0x28;
      lVar5 = lVar5 + -0x28;
    } while (lVar5 != 0);
  }
  if ((longlong)*(int *)(param_1 + 200) != 0) {
    lVar4 = *(longlong *)(param_1 + 0xc0);
    lVar5 = (longlong)*(int *)(param_1 + 200) * 0x28;
    do {
      lVar3 = FUN_1402d20ea(lVar4);
      if (lVar3 != 0) {
        FUN_14084ef06(lVar2,lVar3);
      }
      lVar4 = lVar4 + 0x28;
      lVar5 = lVar5 + -0x28;
    } while (lVar5 != 0);
  }
  return;
}



// FUNCTION 140995ab9 FUN_140995ab9 body=177 status=ok
// SIG undefined FUN_140995ab9(void)

undefined8 FUN_140995ab9(undefined8 param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
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
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  local_b8 = FUN_1405fc15c();
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
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140995b6b FUN_140995b6b body=355 status=ok
// SIG undefined FUN_140995b6b(void)

undefined8 FUN_140995b6b(undefined8 param_1)

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
  if (DAT_14cad3688 == (code *)0x0) {
    local_d0 = &local_b8;
    local_b8 = FUN_144b223ce;
    local_c0 = FUN_14081d0ea;
    local_c8 = &LAB_1417963e0;
    local_d8 = &LAB_147a2f4c9;
    local_e0 = &LAB_1400ea6f8;
    local_e8 = L"Engine";
    local_f0 = 0x200000000000;
    local_f8 = 0x10000004;
    local_100 = 0x10;
    local_108 = 0x720;
    FUN_14081cfa3(L"/Script/Engine",L"StaticMeshComponent",&DAT_14cad3688,FUN_1463bfdc8);
  }
  local_b8 = DAT_14cad3688;
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



// FUNCTION 140995cd0 FUN_140995cd0 body=1019 status=ok
// SIG undefined FUN_140995cd0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140995cd0(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  bool bVar8;
  undefined1 auStack_78 [40];
  undefined1 local_50 [8];
  undefined8 *local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(char *)(param_1 + 0x1b0) != '\0') goto LAB_140995f44;
  *(undefined1 *)(param_1 + 0x1b0) = 1;
  if (param_1 == 0) {
    _DAT_000001b8 = 0;
    iVar4 = 0;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0xc);
    *(uint *)(param_1 + 0x1b8) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar6 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar6 = 0;
    }
    iVar4 = *(int *)(lVar6 + 0x10);
    if (*(int *)(lVar6 + 0x10) == 0) {
      LOCK();
      iVar4 = DAT_14c964868 + 1;
      UNLOCK();
      iVar7 = DAT_14c964868 + 1;
      bVar8 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar4;
      if (bVar8) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar7);
      }
      LOCK();
      iVar4 = *(int *)(lVar6 + 0x10);
      bVar8 = iVar4 == 0;
      if (bVar8) {
        *(int *)(lVar6 + 0x10) = iVar7;
        iVar4 = 0;
      }
      UNLOCK();
      if (bVar8) {
        iVar4 = iVar7;
      }
    }
  }
  *(int *)(param_1 + 0x1bc) = iVar4;
  lVar2 = *(longlong *)(param_1 + 0x28);
  lVar6 = param_1 + 0x48;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  local_40 = 3;
  *local_48 = &PTR_LAB_14a4d7700;
  LOCK();
  UNLOCK();
  lVar5 = DAT_14c758608 + 1;
  lVar3 = DAT_14c758608 + 1;
  if (lVar5 == 0) {
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 2;
    lVar3 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar3;
  local_48[2] = lVar5;
  *local_48 = &PTR_FUN_14a4d7b80;
  local_48[3] = lVar6;
  local_48[4] = FUN_14086ad62;
  FUN_1409960cc(lVar2 + 0x658,local_50,&local_48);
  if (local_40 == 0) {
LAB_140995dec:
    if (local_48 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_48 != (undefined8 *)0x0) {
    (**(code **)*local_48)(local_48,0);
    FUN_1446efa72(&local_48,0,0,0x10);
    local_40 = 0;
    goto LAB_140995dec;
  }
  lVar2 = *(longlong *)(param_1 + 0x28);
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  local_40 = 3;
  *local_48 = &PTR_LAB_14a4d7700;
  LOCK();
  UNLOCK();
  lVar5 = DAT_14c758608 + 1;
  lVar3 = DAT_14c758608 + 1;
  if (lVar5 == 0) {
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 2;
    lVar3 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar3;
  local_48[2] = lVar5;
  *local_48 = &PTR_FUN_14a4d7b80;
  local_48[3] = lVar6;
  local_48[4] = FUN_14086b132;
  FUN_1409960cc(lVar2 + 0x670,local_50,&local_48);
  if (local_40 == 0) {
LAB_140995e8a:
    if (local_48 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_48 != (undefined8 *)0x0) {
    (**(code **)*local_48)(local_48,0);
    FUN_1446efa72(&local_48,0,0,0x10);
    local_40 = 0;
    goto LAB_140995e8a;
  }
  lVar2 = *(longlong *)(param_1 + 0x28);
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  local_40 = 3;
  *local_48 = &PTR_LAB_14a481140;
  LOCK();
  UNLOCK();
  lVar5 = DAT_14c758608 + 1;
  lVar3 = DAT_14c758608 + 1;
  if (lVar5 == 0) {
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 2;
    lVar3 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar3;
  local_48[2] = lVar5;
  *local_48 = &PTR_FUN_14a4d7bf0;
  local_48[3] = lVar6;
  local_48[4] = &DAT_1402d0134;
  FUN_140996264(lVar2 + 0x688,local_50,&local_48);
  if (local_40 != 0) {
    if (local_48 == (undefined8 *)0x0) goto LAB_140995f44;
    (**(code **)*local_48)(local_48,0);
    FUN_1446efa72(&local_48,0,0,0x10);
    local_40 = 0;
  }
  if (local_48 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_140995f44:
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1409960cc FUN_1409960cc body=370 status=ok
// SIG undefined FUN_1409960cc(void)

undefined8 * FUN_1409960cc(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 140996264 FUN_140996264 body=370 status=ok
// SIG undefined FUN_140996264(void)

undefined8 * FUN_140996264(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 1409963ec FUN_1409963ec body=35 status=ok
// SIG undefined FUN_1409963ec(void)

void FUN_1409963ec(longlong param_1)

{
  FUN_1403d8a98();
  FUN_140996410(param_1 + 0x488,0);
  return;
}



// FUNCTION 140996410 FUN_140996410 body=126 status=ok
// SIG undefined FUN_140996410(void)

void FUN_140996410(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  
  if (param_1[2] != 0) {
    LOCK();
    *(int *)(param_1[3] + 8) = *(int *)(param_1[3] + 8) + -1;
    UNLOCK();
    plVar2 = (longlong *)param_1[3];
    if (*param_1 == 0) {
      lVar3 = 0;
      plVar4 = plVar2;
    }
    else {
      *(undefined8 *)(*param_1 + 8) = 0;
      lVar3 = *param_1;
      plVar4 = (longlong *)param_1[3];
    }
    LOCK();
    plVar1 = (longlong *)*plVar4;
    if (param_1 == plVar1) {
      *plVar4 = lVar3;
    }
    UNLOCK();
    if (param_1 != plVar1) {
      while ((longlong *)param_1[1] == (longlong *)0x0) {
        SwitchToThread();
      }
      lVar3 = *param_1;
      *(longlong *)param_1[1] = lVar3;
      if (lVar3 != 0) {
        *(longlong *)(lVar3 + 8) = param_1[1];
      }
    }
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    LOCK();
    plVar2 = plVar2 + 1;
    *(int *)plVar2 = (int)*plVar2 + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 140996496 FUN_140996496 body=66 status=ok
// SIG undefined FUN_140996496(void)

undefined8 FUN_140996496(longlong param_1,undefined8 *param_2)

{
  byte *pbVar1;
  undefined8 *puVar2;
  
  pbVar1 = (byte *)*param_2;
  if ((pbVar1 != (byte *)0x0) && ((~*pbVar1 & 3) == 0)) {
    puVar2 = (undefined8 *)FUN_1408db3b0(pbVar1,PTR_s_primaryuseinfo_14c763a80);
    if (((byte *)*puVar2 != (byte *)0x0) && ((~*(byte *)*puVar2 & 3) == 0)) {
      *(undefined1 *)(param_1 + 0x38) = 1;
    }
  }
  return 0;
}



// FUNCTION 1409964d8 FUN_1409964d8 body=76 status=ok
// SIG undefined FUN_1409964d8(void)

undefined8 FUN_1409964d8(undefined8 param_1,undefined8 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_140996524(param_2);
  if ((lVar1 != 0) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x40), UNRECOVERED_JUMPTABLE != (code *)0x0)) {
    plVar2 = (longlong *)(lVar1 + 0x60);
    if (*(longlong **)(lVar1 + 0x50) != (longlong *)0x0) {
      plVar2 = *(longlong **)(lVar1 + 0x50);
    }
    uVar3 = (**(code **)(*plVar2 + 8))(plVar2);
                    /* WARNING: Could not recover jumptable at 0x000140996519. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (*UNRECOVERED_JUMPTABLE)(uVar3);
    return uVar3;
  }
  return 0;
}



// FUNCTION 140996524 FUN_140996524 body=181 status=ok
// SIG undefined FUN_140996524(void)

longlong FUN_140996524(longlong *param_1)

{
  longlong lVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  uint uVar7;
  
  plVar3 = (longlong *)FUN_1409965da();
  lVar1 = *param_1;
  if ((int)plVar3[1] != *(int *)((longlong)plVar3 + 0x34)) {
    uVar2 = (uint)((ulonglong)lVar1 >> 0x10);
    uVar7 = (uint)lVar1 & 0xffff;
    plVar6 = plVar3 + 7;
    if ((longlong *)plVar3[8] != (longlong *)0x0) {
      plVar6 = (longlong *)plVar3[8];
    }
    iVar5 = *(int *)((longlong)plVar6 +
                    (ulonglong)
                    ((int)plVar3[9] - 1U &
                    (int)((ulonglong)lVar1 >> 0x20) + ((uint)lVar1 << 0x10 | uVar7) +
                    (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar7 >> 4)) * 4);
    if (iVar5 != -1) {
      do {
        plVar6 = (longlong *)(*plVar3 + (longlong)iVar5 * 0x18);
        if (*plVar6 == lVar1) {
          if (plVar6 + 1 != (longlong *)0x0 && plVar6 != (longlong *)0x0) {
            return plVar6[1];
          }
          break;
        }
        iVar5 = (int)plVar6[2];
      } while (iVar5 != -1);
    }
  }
  lVar4 = DAT_14cb7ebb8;
  if (lVar1 != 0) {
    lVar4 = 0;
  }
  return lVar4;
}



// FUNCTION 1409965da FUN_1409965da body=157 status=ok
// SIG undefined FUN_1409965da(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1409965da(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb7ec10) {
    FUN_144b3d300(&DAT_14cb7ec10);
    if (DAT_14cb7ec10 == -1) {
      DAT_14cb7ebe0 = 0;
      DAT_14cb7ebe8 = 0;
      DAT_14cb7ebc0 = 0;
      _DAT_14cb7ebc8 = 0;
      _DAT_14cb7ebec = 0xffffffff00000080;
      DAT_14cb7ebf4 = 0;
      DAT_14cb7ec00 = 0;
      DAT_14cb7ec08 = 0;
      atexit(FUN_143d639bf);
      _Init_thread_footer(&DAT_14cb7ec10);
    }
  }
  return &DAT_14cb7ebc0;
}



// FUNCTION 140996686 FUN_140996686 body=61 status=ok
// SIG undefined FUN_140996686(void)

undefined8 * FUN_140996686(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b3185b0;
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1409966c4 FUN_1409966c4 body=678 status=ok
// SIG undefined FUN_1409966c4(void)

void FUN_1409966c4(longlong param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  int iVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint *puVar14;
  longlong lVar15;
  longlong lVar16;
  
  uVar12 = (ulonglong)(((param_2 >> 1) - 1) + (uint)(param_2 >> 1 == 0)) * 2 + 1;
  lVar3 = 0x3f;
  if (uVar12 != 0) {
    for (; uVar12 >> lVar3 == 0; lVar3 = lVar3 + -1) {
    }
  }
  iVar9 = 1 << ((byte)lVar3 & 0x1f);
  if ((uint)lVar3 < 5) {
    iVar9 = 0x20;
  }
  if (param_2 < 4) {
    iVar9 = 0x20;
  }
  iVar11 = *(int *)(param_1 + 0x6b8);
  if ((0 < (int)param_2 && iVar11 < iVar9) || (iVar9 < iVar11)) {
    FUN_14099696a(param_1);
    *(int *)(param_1 + 0x6b8) = iVar9;
    FUN_140996be0(param_1);
    return;
  }
  lVar3 = param_1 + 0x630;
  if (*(longlong *)(param_1 + 0x6b0) != 0) {
    lVar3 = *(longlong *)(param_1 + 0x6b0);
  }
  iVar9 = iVar11 + 3;
  if (-1 < iVar11) {
    iVar9 = iVar11;
  }
  if (*(int *)(param_1 + 0x608) - *(int *)(param_1 + 0x62c) < iVar9 >> 2) {
    iVar9 = *(int *)(param_1 + 0x620);
    if (iVar9 == 0) {
      uVar12 = 0;
      uVar13 = 1;
      iVar11 = 0;
      iVar6 = 0;
    }
    else {
      puVar14 = *(uint **)(param_1 + 0x618);
      if (*(uint **)(param_1 + 0x618) == (uint *)0x0) {
        puVar14 = (uint *)(param_1 + 0x610);
      }
      uVar4 = *puVar14;
      uVar12 = 0;
      iVar11 = 0;
      if (uVar4 == 0) {
        iVar11 = iVar9 + 0x1e;
        if (-1 < iVar9 + -1) {
          iVar11 = iVar9 + -1;
        }
        uVar12 = 0;
        uVar10 = (ulonglong)(uint)(iVar11 >> 5);
        if (iVar11 >> 5 < 1) {
          uVar10 = uVar12;
        }
        iVar11 = 0;
        do {
          if (uVar10 == uVar12) goto LAB_1409968b1;
          iVar11 = iVar11 + 0x20;
          uVar4 = puVar14[uVar12 + 1];
          uVar12 = uVar12 + 1;
        } while (uVar4 == 0);
      }
      uVar13 = (ulonglong)(-uVar4 & uVar4);
      uVar10 = uVar13 * 2 + 1;
      lVar15 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar15 == 0; lVar15 = lVar15 + -1) {
        }
      }
      iVar6 = (iVar11 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
      if (iVar9 <= iVar6) {
        iVar6 = iVar9;
      }
    }
    if (iVar6 != iVar9) {
      uVar4 = 0xffffffff;
      do {
        lVar15 = *(longlong *)(param_1 + 0x600);
        if (*(longlong *)(param_1 + 0x600) == 0) {
          lVar15 = param_1;
        }
        *(undefined4 *)(lVar3 + (longlong)*(int *)(lVar15 + 0x14 + (longlong)iVar6 * 0x18) * 4) =
             0xffffffff;
        uVar4 = ~(uint)uVar13 & uVar4;
        puVar14 = *(uint **)(param_1 + 0x618);
        if (*(uint **)(param_1 + 0x618) == (uint *)0x0) {
          puVar14 = (uint *)(param_1 + 0x610);
        }
        iVar1 = *(int *)(param_1 + 0x620);
        iVar6 = (int)uVar12;
        lVar15 = (longlong)iVar6;
        uVar5 = puVar14[lVar15] & uVar4;
        if (uVar5 == 0) {
          iVar7 = iVar1 + 0x1e;
          if (-1 < iVar1 + -1) {
            iVar7 = iVar1 + -1;
          }
          iVar7 = iVar7 >> 5;
          iVar11 = iVar11 + 0x20;
          iVar8 = iVar7;
          if (iVar7 < iVar6) {
            iVar8 = iVar6;
          }
          lVar2 = lVar15;
          if (iVar6 < iVar7) {
            lVar16 = 0;
            do {
              uVar5 = puVar14[lVar15 + lVar16 + 1];
              if (uVar5 != 0) {
                uVar12 = (ulonglong)(iVar6 + (int)lVar16 + 1);
                uVar4 = 0xffffffff;
                goto LAB_1409967db;
              }
              iVar11 = iVar11 + 0x20;
              lVar16 = lVar16 + 1;
              uVar4 = 0xffffffff;
              lVar2 = (longlong)iVar8;
            } while (iVar8 - lVar15 != lVar16);
          }
          uVar12 = lVar2 + 1U & 0xffffffff;
          iVar6 = iVar1;
        }
        else {
LAB_1409967db:
          uVar13 = (ulonglong)(-uVar5 & uVar5);
          uVar10 = uVar13 * 2 + 1;
          lVar15 = 0x3f;
          if (uVar10 != 0) {
            for (; uVar10 >> lVar15 == 0; lVar15 = lVar15 + -1) {
            }
          }
          iVar6 = (iVar11 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
          if (iVar1 <= iVar6) {
            iVar6 = iVar1;
          }
        }
      } while (iVar6 != iVar9);
    }
  }
  else if (0 < iVar11) {
    lVar15 = 0;
    do {
      *(undefined4 *)(lVar3 + lVar15 * 4) = 0xffffffff;
      lVar15 = lVar15 + 1;
    } while (lVar15 < *(int *)(param_1 + 0x6b8));
  }
LAB_1409968b1:
  FUN_14099696a(param_1);
  return;
}



// FUNCTION 14099696a FUN_14099696a body=137 status=ok
// SIG undefined FUN_14099696a(void)

void FUN_14099696a(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 0x608) = 0;
  if (*(int *)(param_1 + 0x60c) != param_2) {
    FUN_1409969f4(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x628) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x620) = 0;
  if (((int)uVar2 <= *(int *)(param_1 + 0x624)) && (*(int *)(param_1 + 0x624) < 0x41)) {
    return;
  }
  uVar1 = 0x40;
  if (0x40 < (int)uVar2) {
    uVar1 = uVar2;
  }
  *(uint *)(param_1 + 0x624) = uVar1;
  FUN_1401cad60(param_1 + 0x610,0);
  return;
}



// FUNCTION 1409969f4 FUN_1409969f4 body=343 status=ok
// SIG undefined FUN_1409969f4(void)

void FUN_1409969f4(longlong param_1,uint param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  
  if (param_2 == 0) {
    iVar7 = 0;
  }
  else {
    iVar7 = 0x40;
    if (0x40 < param_2) {
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
              uVar6 = 0x32;
              if (0x32 < bVar2) {
                uVar6 = (ulonglong)bVar2;
              }
              uVar8 = 0x32 - (ulonglong)bVar2;
              do {
                uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
                if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140996a98;
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
LAB_140996a98:
      iVar5 = (int)(uVar4 / 0x18);
      iVar7 = 0x7fffffff;
      if ((int)param_2 <= iVar5) {
        iVar7 = iVar5;
      }
    }
  }
  if (iVar7 != *(int *)(param_1 + 0x60c)) {
    *(int *)(param_1 + 0x60c) = iVar7;
    FUN_140996b4c(param_1,*(undefined4 *)(param_1 + 0x608));
    return;
  }
  return;
}



// FUNCTION 140996b4c FUN_140996b4c body=148 status=ok
// SIG undefined FUN_140996b4c(void)

void FUN_140996b4c(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x600);
  if ((uint)param_3 < 0x41) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x18);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x600,0,param_3,0x18);
    memmove(*(void **)((longlong)param_1 + 0x600),param_1,(longlong)param_2 * 0x18);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x600,param_2,param_3,0x18);
  return;
}



// FUNCTION 140996be0 FUN_140996be0 body=527 status=ok
// SIG undefined FUN_140996be0(void)

void FUN_140996be0(longlong param_1)

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
  if (*(longlong *)(param_1 + 0x6b0) != 0) {
    FUN_1446efa72(param_1 + 0x6b0,0,0,4);
  }
  uVar7 = *(uint *)(param_1 + 0x6b8);
  uVar2 = local_58;
  if (uVar7 != 0) {
    lVar1 = param_1 + 0x630;
    uVar6 = 0;
    FUN_140437db6(lVar1,0,uVar7,4);
    if (0 < (int)uVar7) {
      do {
        lVar5 = *(longlong *)(param_1 + 0x6b0);
        if (*(longlong *)(param_1 + 0x6b0) == 0) {
          lVar5 = lVar1;
        }
        *(undefined4 *)(lVar5 + (ulonglong)(*(int *)(param_1 + 0x6b8) + 0x7fffffffU & uVar6) * 4) =
             0xffffffff;
        uVar6 = uVar6 + 1;
      } while (uVar7 != uVar6);
    }
    local_40 = param_1 + 0x610;
    local_48 = 0x100000000;
    local_38 = 0xffffffff;
    local_30 = 0;
    if (*(int *)(param_1 + 0x620) != 0) {
      FUN_144a7765a(&local_48);
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
        lVar5 = *(longlong *)(local_70 + 0x600);
        if (*(longlong *)(local_70 + 0x600) == 0) {
          lVar5 = local_70;
        }
        lVar4 = (longlong)iVar3;
        uVar10 = *(ulonglong *)(lVar5 + lVar4 * 0x18);
        uVar7 = ((uint)(uVar10 >> 0x14) & 0xffff ^ (uint)(uVar10 >> 4)) * -0x7a143595;
        uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar7 >> 0x10 ^ uVar7) & (longlong)*(int *)(param_1 + 0x6b8) - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar5 + 0x14 + lVar4 * 0x18) = iVar9;
        lVar8 = *(longlong *)(param_1 + 0x6b0);
        if (*(longlong *)(param_1 + 0x6b0) == 0) {
          lVar8 = lVar1;
        }
        *(undefined4 *)(lVar5 + 0x10 + lVar4 * 0x18) =
             *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x6b8) - 1U & uVar10) * 4);
        lVar5 = *(longlong *)(param_1 + 0x6b0);
        if (*(longlong *)(param_1 + 0x6b0) == 0) {
          lVar5 = lVar1;
        }
        *(int *)(lVar5 + ((longlong)iVar9 & (longlong)*(int *)(param_1 + 0x6b8) - 1U) * 4) = iVar3;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_144a7765a(&local_68);
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



// FUNCTION 140996dfc FUN_140996dfc body=187 status=ok
// SIG undefined FUN_140996dfc(void)

undefined8 FUN_140996dfc(undefined8 param_1,undefined8 param_2,uint param_3,undefined4 param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  plVar1 = (longlong *)FUN_1400dbadc();
  plVar2 = (longlong *)*plVar1;
  if (plVar2 == (longlong *)0x0) {
    plVar2 = (longlong *)FUN_140e92164();
    *plVar1 = (longlong)plVar2;
  }
  plVar2 = (longlong *)(**(code **)(*plVar2 + 0xe8))(plVar2,param_2,(param_3 & 4) >> 2);
  if (plVar2 == (longlong *)0x0) {
    if ((param_3 & 1) != 0) {
      FUN_140033559(".\\Runtime/Core/Private/HAL/FileManagerGeneric.cpp",0x36,
                    L"Failed to read file: %s",param_2);
    }
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_14001cc68(0xe8,0x10);
    uVar4 = (**(code **)(*plVar2 + 0x50))(plVar2);
    FUN_140996eb8(uVar3,plVar2,param_2,uVar4,param_4,param_3);
  }
  return uVar3;
}



// FUNCTION 140996eb8 FUN_140996eb8 body=220 status=ok
// SIG undefined FUN_140996eb8(void)

longlong *
FUN_140996eb8(longlong *param_1,longlong param_2,undefined8 param_3,ulonglong param_4,int param_5,
             undefined4 param_6)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  
  FUN_144869430();
  *param_1 = (longlong)&PTR_FUN_149e119d0;
  FUN_140056680(param_1 + 0x12,param_3);
  param_1[0x14] = param_4;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = param_2;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1c) = param_6;
  *(undefined1 *)((longlong)param_1 + 0xe4) = 0;
  uVar3 = (ulonglong)(param_5 + (uint)(param_5 == 0)) - 1;
  if (uVar3 == 0) {
    bVar2 = 0;
  }
  else {
    lVar1 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    bVar2 = (byte)lVar1 ^ 0x3f;
  }
  uVar3 = 1L << (-bVar2 & 0x3f);
  if (param_4 <= uVar3) {
    uVar3 = param_4;
  }
  param_1[0x1b] = uVar3;
  (**(code **)(*param_1 + 0xb0))(param_1,1);
  (**(code **)(*param_1 + 0xf0))(param_1,1);
  return param_1;
}



// FUNCTION 140996f94 FUN_140996f94 body=11 status=ok
// SIG undefined FUN_140996f94(void)

void FUN_140996f94(longlong param_1,byte param_2)

{
  *(byte *)(param_1 + 0x28) = *(byte *)(param_1 + 0x28) & 0xfe | param_2;
  return;
}



// FUNCTION 140996fa0 FUN_140996fa0 body=665 status=ok
// SIG undefined FUN_140996fa0(void)

void FUN_140996fa0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  char cVar5;
  undefined8 *puVar6;
  undefined1 auStack_88 [32];
  ulonglong local_68;
  undefined8 local_60;
  undefined8 local_58;
  code *local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a58) {
    FUN_144b3d300(&DAT_14c952a58);
    if (DAT_14c952a58 == -1) {
      local_58 = FUN_1446ddbd2();
      local_50 = FUN_1403a682c;
      local_60 = 0;
      local_68 = 0x108001;
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
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_48);
            goto LAB_140997093;
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
        local_60 = CONCAT44(local_60._4_4_,(int)plVar1[6]);
        local_68 = local_68 & 0xffffffff00000000;
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
LAB_140997093:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar5 = FUN_14099723a(&local_48);
  if (cVar5 == '\0') {
    DAT_14c949520 = L"ServerUpdateLevelVisibility_Validate";
  }
  else {
    FUN_1409973c2(param_1,&local_48);
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14099723a FUN_14099723a body=391 status=ok
// SIG undefined FUN_14099723a(void)

undefined4 FUN_14099723a(longlong param_1)

{
  undefined4 uVar1;
  undefined1 auStack_78 [32];
  longlong local_58;
  int local_50;
  longlong local_48;
  int local_40;
  longlong *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((uint)*(ushort *)(param_1 + 2) < DAT_14c87eb08 + 1U) {
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
    local_38 = DAT_14c844840;
    if (DAT_14c844840 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c844840 + 8) == FUN_144907e24) {
        LOCK();
        *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
        UNLOCK();
      }
      else {
        (**(code **)(*DAT_14c844840 + 8))();
      }
    }
    local_30 = 0;
    FUN_1400021e4(param_1,&local_58);
    local_48 = local_58;
    local_40 = local_50 + -1;
    if (local_50 == 0) {
      local_40 = 0;
    }
    uVar1 = FUN_14022ef98(&local_48,1,&local_38);
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    if (local_38 != (longlong *)0x0) {
      (**(code **)(*local_38 + 0x10))();
    }
  }
  else {
    uVar1 = 0;
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1409973c2 FUN_1409973c2 body=475 status=ok
// SIG undefined FUN_1409973c2(void)

void FUN_1409973c2(longlong *param_1,uint *param_2)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  int iVar7;
  undefined1 uVar8;
  undefined1 auStack_88 [32];
  uint local_68;
  uint uStack_64;
  undefined8 uStack_60;
  ulonglong local_58;
  undefined8 local_48;
  undefined4 local_40;
  undefined1 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_1[0x86] != 0) {
    lVar5 = FUN_140496b24();
    lVar1 = param_1[0x86];
    if ((((lVar1 != 0) && (lVar5 != 0)) && (lVar2 = *(longlong *)(lVar1 + 0x10), lVar2 != 0)) &&
       ((*(int *)(lVar5 + 0x38) <= *(int *)(lVar2 + 0x38) &&
        (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
         lVar5 + 0x30)))) {
      local_68 = *param_2;
      uStack_64 = param_2[1];
      uStack_60 = *(undefined8 *)(param_2 + 2);
      local_58 = *(ulonglong *)(param_2 + 4);
      uVar8 = 1;
      FUN_14098f2e8(param_1,&local_68,*(undefined8 *)param_2,1);
      FUN_14098f2e8(param_1,&local_48,uStack_60,1);
      uStack_60 = local_48;
      FUN_140e32956(lVar1,&local_68);
      if ((int)local_58 < 0) {
        uVar6 = FUN_1447210f0(param_1);
        cVar4 = FUN_14355fe00(uVar6);
        if (cVar4 != '\0') {
          if (((local_58 & 0x200000000) != 0) &&
             (*(int *)(lVar1 + 0x1538) != *(int *)(lVar1 + 0x1564))) {
            uVar3 = (uint)((ulonglong)CONCAT44(uStack_64,local_68) >> 0x10);
            lVar5 = lVar1 + 0x1568;
            if (*(longlong *)(lVar1 + 0x1570) != 0) {
              lVar5 = *(longlong *)(lVar1 + 0x1570);
            }
            iVar7 = *(int *)(lVar5 + (ulonglong)
                                     (*(int *)(lVar1 + 0x1578) - 1U &
                                     uStack_64 + (local_68 << 0x10 | local_68 & 0xffff) +
                                     (uVar3 << 0x13 | uVar3 & 0xffff) + ((local_68 & 0xffff) >> 4))
                                     * 4);
            if (iVar7 != -1) {
              do {
                if (*(longlong *)(*(longlong *)(lVar1 + 0x1530) + (longlong)iVar7 * 0x10) ==
                    CONCAT44(uStack_64,local_68)) goto LAB_140997542;
                iVar7 = *(int *)((longlong)iVar7 * 0x10 + *(longlong *)(lVar1 + 0x1530) + 8);
              } while (iVar7 != -1);
            }
          }
          uVar8 = 0;
        }
LAB_140997542:
        local_48 = *(undefined8 *)param_2;
        local_40 = (int)local_58;
        local_3c = uVar8;
        uVar6 = FUN_14477b072(param_1,DAT_14caf9558);
        (**(code **)(*param_1 + 0x248))(param_1,uVar6,&local_48);
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14099759e FUN_14099759e body=1134 status=ok
// SIG undefined FUN_14099759e(void)

void FUN_14099759e(int param_1,longlong *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  int local_ec;
  undefined8 local_e8;
  undefined1 local_dc [4];
  longlong *local_d8;
  undefined8 local_d0;
  undefined1 local_c4 [4];
  longlong *local_c0 [2];
  longlong *local_b0;
  char local_84;
  ulonglong local_60;
  
  uVar1 = DAT_14c872be8;
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_ec = param_1;
  local_e8 = param_3;
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
  plVar5 = DAT_14c844840;
  local_d8 = DAT_14c844840;
  if (DAT_14c844840 == (longlong *)0x0) {
    plVar5 = (longlong *)0x0;
  }
  else if (*(code **)(*DAT_14c844840 + 8) == FUN_144907e24) {
    LOCK();
    *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
    UNLOCK();
  }
  else {
    (**(code **)(*DAT_14c844840 + 8))(DAT_14c844840);
  }
  local_d0 = (undefined1 *)((ulonglong)local_d0._4_4_ << 0x20);
  local_f8 = uVar1;
  FUN_140997f46(local_c0,(float)(int)param_2[1],&local_d8,1);
  FUN_140997a0e(local_c0);
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
  }
  if (0 < (int)param_2[1]) {
    lVar6 = 0;
    lVar4 = 0;
    do {
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
      local_d8 = DAT_14c844840;
      if (DAT_14c844840 != (longlong *)0x0) {
        if (*(code **)(*DAT_14c844840 + 8) == FUN_144907e24) {
          LOCK();
          *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
          UNLOCK();
        }
        else {
          (**(code **)(*DAT_14c844840 + 8))();
        }
      }
      local_d0 = (undefined1 *)((ulonglong)local_d0 & 0xffffffff00000000);
      FUN_140997b30(local_c0,0x3f800000,&local_d8);
      if (local_d8 != (longlong *)0x0) {
        (**(code **)(*local_d8 + 0x10))();
      }
      lVar3 = *param_2;
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c874a20) && (FUN_144b3d300(&DAT_14c874a20), DAT_14c874a20 == -1))
      {
        FUN_145762954(&DAT_14c874628);
        DAT_14c874a18 = 1;
        atexit(FUN_14278de47);
        _Init_thread_footer(&DAT_14c874a20);
      }
      cVar2 = FUN_14011feae(&DAT_14c874628,*(undefined8 *)(lVar3 + lVar6));
      if ((cVar2 == '\0') && (*(int *)(lVar3 + 0xc + lVar6) == local_ec)) {
        plVar5 = (longlong *)(lVar3 + lVar6);
        cVar2 = FUN_14099815c(plVar5);
        if (cVar2 != '\0') {
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110)
               < DAT_14c874a20) && (FUN_144b3d300(&DAT_14c874a20), DAT_14c874a20 == -1)) {
            FUN_145762954(&DAT_14c874628);
            DAT_14c874a18 = 1;
            atexit(FUN_14278de47);
            _Init_thread_footer(&DAT_14c874a20);
          }
          lVar3 = FUN_1409983d4(&DAT_14c874628,*plVar5,local_dc,0);
          if (lVar3 == 0) {
            local_d0 = local_dc;
            local_d8 = plVar5;
            FUN_14685280a(local_e8,local_c4);
          }
        }
      }
      lVar4 = lVar4 + 1;
      lVar6 = lVar6 + 0x168;
    } while (lVar4 < (int)param_2[1]);
  }
  FUN_140997a5c(local_c0);
  if (local_84 == '\x01') {
    local_84 = '\0';
  }
  if (local_b0 != (longlong *)0x0) {
    (**(code **)(*local_b0 + 0x10))();
  }
  if (local_c0[0] != (longlong *)0x0) {
    (**(code **)(*local_c0[0] + 0x10))();
  }
  if ((local_60 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140997a0e FUN_140997a0e body=78 status=ok
// SIG undefined FUN_140997a0e(void)

void FUN_140997a0e(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  
  if (*(char *)(param_1 + 0x40) == '\x01') {
    lVar2 = *(longlong *)(param_1 + 0x48);
    iVar1 = *(int *)(lVar2 + 0xf0);
    *(uint *)(lVar2 + 0xf0) = iVar1 + 1U;
    if (*(uint *)(lVar2 + 0xf4) < iVar1 + 1U) {
      FUN_14626c588((longlong *)(lVar2 + 0xe8),iVar1);
    }
    *(longlong *)(*(longlong *)(lVar2 + 0xe8) + (longlong)iVar1 * 8) = param_1;
  }
  return;
}



// FUNCTION 140997a5c FUN_140997a5c body=210 status=ok
// SIG undefined FUN_140997a5c(void)

void FUN_140997a5c(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(char *)(param_1 + 0x40) == '\x01') {
    if (*(char *)(param_1 + 0x41) == '\x01') {
      uVar2 = *(undefined8 *)(param_1 + 0x48);
      FUN_140997e44(uVar2,1);
      FUN_140997e44(uVar2,1);
      (**(code **)(**(longlong **)(param_1 + 0x48) + 0x70))();
    }
    lVar3 = *(longlong *)(param_1 + 0x48);
    if (*(int *)(lVar3 + 0xf0) != 0) {
      plVar1 = (longlong *)(lVar3 + 0xe8);
      iVar4 = *(int *)(lVar3 + 0xf0) + -1;
      if (*(longlong *)(*plVar1 + (longlong)iVar4 * 8) == param_1) {
        *(int *)(lVar3 + 0xf0) = iVar4;
      }
      else {
        local_28 = param_1;
        FUN_14681a6d2(plVar1,&local_28,0);
        iVar4 = *(int *)(lVar3 + 0xf0);
      }
      if (iVar4 != 0) {
        lVar3 = *(longlong *)(*plVar1 + (longlong)(iVar4 + -1) * 8);
        FUN_140997b30(lVar3,0,lVar3 + 0x10);
        FUN_140997e44(*(undefined8 *)(lVar3 + 0x48),0);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140997b30 FUN_140997b30 body=516 status=ok
// SIG undefined FUN_140997b30(void)

void FUN_140997b30(longlong param_1,float param_2,longlong *param_3)

{
  code *pcVar1;
  longlong *plVar2;
  longlong *plVar3;
  float fVar4;
  
  if (*(char *)(param_1 + 0x40) != '\x01') {
    return;
  }
  plVar2 = (longlong *)*param_3;
  if (*(code **)(*plVar2 + 0x50) != FUN_144828418) {
    plVar2 = (longlong *)(**(code **)(*plVar2 + 0x50))();
  }
  FUN_1447a1fc0(plVar2);
  plVar2 = (longlong *)*param_3;
  pcVar1 = *(code **)(*plVar2 + 0x28);
  if (pcVar1 == FUN_14482841c) {
    plVar3 = plVar2 + 3;
    if (plVar2[5] != 0) {
      plVar3 = (longlong *)(plVar2[5] + 8);
    }
  }
  else if (pcVar1 == (code *)&LAB_14010c34c) {
    plVar3 = plVar2 + 2;
  }
  else {
    plVar3 = (longlong *)(*pcVar1)(plVar2);
  }
  if ((int)plVar3[1] < 2) {
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
    plVar3 = DAT_14c844840;
    plVar2 = *(longlong **)(param_1 + 0x10);
    if (plVar2 == DAT_14c844840) {
      param_3 = (longlong *)&DAT_14c844840;
      goto LAB_140997be5;
    }
    *(longlong **)(param_1 + 0x10) = DAT_14c844840;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    param_3 = (longlong *)&DAT_14c844840;
  }
  else {
    plVar3 = (longlong *)*param_3;
    plVar2 = *(longlong **)(param_1 + 0x10);
    if (plVar2 == plVar3) goto LAB_140997be5;
    *(longlong **)(param_1 + 0x10) = plVar3;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
  }
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
  }
LAB_140997be5:
  *(int *)(param_1 + 0x18) = (int)param_3[1];
  fVar4 = *(float *)(param_1 + 0x28) + *(float *)(param_1 + 0x24);
  *(float *)(param_1 + 0x24) = fVar4;
  fVar4 = *(float *)(param_1 + 0x20) - fVar4;
  if (param_2 <= fVar4) {
    fVar4 = param_2;
  }
  *(float *)(param_1 + 0x28) = fVar4;
  if (*(char *)(param_1 + 0x40) != '\x01') {
    return;
  }
  FUN_140997d34(param_1);
  FUN_140997e44(*(undefined8 *)(param_1 + 0x48),0);
  return;
}



// FUNCTION 140997d34 FUN_140997d34 body=115 status=ok
// SIG undefined FUN_140997d34(void)

void FUN_140997d34(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (*(char *)(param_1 + 0x40) == '\x01') {
    if ((*(byte *)(param_1 + 0x50) & 4) != 0) {
      FUN_140997da8(param_1);
      return;
    }
    *(byte *)(param_1 + 0x50) = *(byte *)(param_1 + 0x50) | 4;
    lVar3 = (longlong)*(int *)(*(longlong *)(param_1 + 0x48) + 0xf0);
    if (lVar3 != 0) {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x48) + 0xe8);
      lVar4 = 0;
      do {
        cVar2 = FUN_140997da8(*(undefined8 *)(lVar1 + lVar4));
        if (cVar2 != '\0') {
          *(byte *)(param_1 + 0x50) = *(byte *)(param_1 + 0x50) & 0xfb;
        }
        lVar4 = lVar4 + 8;
      } while (lVar3 * 8 != lVar4);
    }
  }
  return;
}



// FUNCTION 140997da8 FUN_140997da8 body=155 status=ok
// SIG undefined FUN_140997da8(void)

undefined8 FUN_140997da8(longlong param_1,undefined4 param_2)

{
  BOOL BVar1;
  undefined4 extraout_var;
  undefined8 uVar2;
  undefined3 uVar3;
  ulonglong uVar4;
  undefined1 auStack_48 [40];
  LARGE_INTEGER local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (((*(char *)(param_1 + 0x40) == '\x01') && (*(char *)(param_1 + 0x41) == '\0')) &&
     (*(char *)(param_1 + 0x3c) == '\x01')) {
    BVar1 = QueryPerformanceCounter(&local_20);
    uVar2 = CONCAT71((int7)(CONCAT44(extraout_var,BVar1) >> 8),1);
    if ((float)(((double)local_20.QuadPart * DAT_14c83f420 + 16777216.0) -
               *(double *)(param_1 + 0x30)) < *(float *)(param_1 + 0x38)) goto LAB_140997dd4;
    uVar3 = (undefined3)((uint)param_2 >> 8);
    uVar4 = (ulonglong)CONCAT31(uVar3,*(undefined1 *)(param_1 + 0x50)) & 0xffffffffffffff02;
    FUN_14681a61e(param_1,CONCAT31(uVar3,*(undefined1 *)(param_1 + 0x50)) & 0xffffff01,
                  CONCAT71((int7)(uVar4 >> 8),(byte)uVar4 >> 1));
  }
  uVar2 = 0;
LAB_140997dd4:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140997e44 FUN_140997e44 body=257 status=ok
// SIG undefined FUN_140997e44(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140997e44(undefined8 param_1,char param_2)

{
  double dVar1;
  undefined1 auStack_48 [32];
  LARGE_INTEGER local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c868248) {
    FUN_144b3d300(&DAT_14c868248);
    if (DAT_14c868248 == -1) {
      QueryPerformanceCounter(&local_28);
      _DAT_14c868240 = (double)local_28.QuadPart * DAT_14c83f420 + 16777216.0;
      _Init_thread_footer(&DAT_14c868248);
    }
  }
  QueryPerformanceCounter(&local_28);
  dVar1 = (double)local_28.QuadPart * DAT_14c83f420 + 16777216.0;
  if ((param_2 != '\0') || (0.2 < dVar1 - _DAT_14c868240)) {
    _DAT_14c868240 = dVar1;
    FUN_14575c792(param_1);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140997f46 FUN_140997f46 body=532 status=ok
// SIG undefined FUN_140997f46(void)

longlong *
FUN_140997f46(longlong *param_1,undefined4 param_2,longlong *param_3,char param_4,longlong param_5)

{
  int iVar1;
  longlong *plVar2;
  DWORD DVar3;
  DWORD DVar4;
  bool bVar5;
  undefined1 auStack_68 [32];
  LARGE_INTEGER local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar2 = (longlong *)*param_3;
  *param_1 = (longlong)plVar2;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  *(int *)(param_1 + 1) = (int)param_3[1];
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
  plVar2 = DAT_14c844840;
  param_1[2] = (longlong)DAT_14c844840;
  if (plVar2 != (longlong *)0x0) {
    if (*(code **)(*plVar2 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*plVar2 + 8))();
    }
  }
  bVar5 = false;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined4 *)(param_1 + 4) = param_2;
  *(undefined8 *)((longlong)param_1 + 0x24) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  QueryPerformanceCounter(&local_48);
  param_1[6] = (longlong)((double)local_48.QuadPart * DAT_14c83f420 + 16777216.0);
  *(undefined1 *)((longlong)param_1 + 0x3c) = 0;
  if ((param_4 != '\0') && (bVar5 = true, DAT_14c86a9f8 == '\x01')) {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 != 2) {
      if (iVar1 == 1) {
        DVar3 = FUN_140ad26c0();
        DVar4 = GetCurrentThreadId();
        bVar5 = DVar3 == DVar4;
      }
      else {
        bVar5 = false;
      }
    }
  }
  *(bool *)(param_1 + 8) = bVar5;
  *(undefined1 *)((longlong)param_1 + 0x41) = 0;
  param_1[9] = param_5;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  param_1[0xb] = 0;
  if ((*(float *)(param_1 + 4) == 0.0) && (!NAN(*(float *)(param_1 + 4)))) {
    *(undefined4 *)(param_1 + 5) = 0x3f800000;
    *(undefined4 *)(param_1 + 4) = 0x3f800000;
  }
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14099815c FUN_14099815c body=426 status=ok
// SIG undefined FUN_14099815c(void)

byte FUN_14099815c(longlong param_1)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  ushort uVar7;
  ushort uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined1 auStack_68 [40];
  longlong local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar2 = FUN_140998308();
  if (cVar2 == '\0') goto switchD_14099829b_caseD_4;
  FUN_1400b22c2(&local_40,"OakGame");
  if ((0 < *(int *)(param_1 + 0x138)) &&
     (cVar2 = FUN_144a23846(param_1 + 0x130,&local_40), cVar2 == '\0')) {
    if (local_40 != 0) {
      FUN_1400020a8();
    }
    goto switchD_14099829b_caseD_4;
  }
  if ((longlong)*(int *)(param_1 + 0x148) != 0) {
    plVar5 = *(longlong **)(param_1 + 0x140);
    plVar4 = plVar5 + (longlong)*(int *)(param_1 + 0x148) * 2;
LAB_140998212:
    if ((int)plVar5[1] == local_38) {
      bVar1 = true;
      if (1 < local_38) {
        lVar6 = 0;
        do {
          uVar8 = *(ushort *)(*plVar5 + lVar6);
          uVar9 = (ulonglong)uVar8;
          uVar7 = *(ushort *)(local_40 + lVar6);
          if (uVar8 == uVar7) {
            if (uVar8 == 0) break;
          }
          else {
            if (0x7f < (uVar7 | uVar8)) goto LAB_140998279;
            uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
            uVar10 = (ulonglong)uVar7;
            uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar10];
            if ((&DAT_149e05da0)[uVar9] != (&DAT_149e05da0)[uVar10]) goto LAB_140998279;
          }
          lVar6 = lVar6 + 2;
        } while( true );
      }
    }
    else {
      if ((int)plVar5[1] + local_38 != 1) goto LAB_14099822c;
      bVar1 = true;
    }
    goto LAB_1409981b6;
  }
  bVar1 = false;
LAB_1409981b6:
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  if (bVar1) goto switchD_14099829b_caseD_4;
  bVar3 = 1;
  if (*(int *)(param_1 + 8) == 0) goto switchD_14099829b_caseD_2;
  switch(*(int *)(param_1 + 8)) {
  case 1:
    if (DAT_14c872bf0 == 0) break;
  default:
switchD_14099829b_caseD_4:
    bVar3 = 0;
    break;
  case 2:
  case 3:
  case 0xb:
  case 0xc:
    break;
  case 0xd:
    bVar3 = DAT_14c872bf0 ^ 1;
  }
switchD_14099829b_caseD_2:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_140998279:
  if (uVar8 == uVar7) goto LAB_1409981b6;
LAB_14099822c:
  plVar5 = plVar5 + 2;
  bVar1 = false;
  if (plVar5 == plVar4) goto LAB_1409981b6;
  goto LAB_140998212;
}



// FUNCTION 140998308 FUN_140998308 body=203 status=ok
// SIG undefined FUN_140998308(void)

undefined4 FUN_140998308(undefined8 param_1)

{
  undefined4 uVar1;
  undefined1 auStack_98 [32];
  undefined1 local_78;
  undefined1 local_70;
  undefined1 local_68;
  longlong *local_60;
  longlong local_58 [2];
  longlong local_48 [2];
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_140056680(local_38,&DAT_149e04820);
  FUN_1400b22c2(local_48,"OakGame");
  FUN_140056680(local_58,L"Win64");
  local_68 = 1;
  local_78 = 1;
  local_70 = 0;
  local_60 = local_38;
  uVar1 = FUN_1427a0606(param_1,local_58,4,local_48);
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1409983d4 FUN_1409983d4 body=2572 status=ok
// SIG undefined FUN_1409983d4(void)

longlong FUN_1409983d4(longlong param_1,longlong param_2,undefined4 *param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  ulonglong uVar12;
  undefined *puVar13;
  longlong lVar14;
  undefined8 uVar15;
  byte bVar16;
  int iVar17;
  longlong *plVar18;
  ulonglong uVar19;
  uint uVar20;
  longlong lVar21;
  ulonglong uVar22;
  int iVar23;
  uint uVar24;
  undefined2 *puVar25;
  ulonglong uVar26;
  int iVar27;
  undefined2 *puVar28;
  bool bVar29;
  undefined1 auStack_a8 [40];
  ulonglong local_80;
  undefined2 *local_78;
  longlong *local_70;
  undefined1 local_61;
  undefined2 *local_60;
  longlong *local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *param_3 = 0;
  local_50 = param_2;
  FUN_144830a4e(param_1,&local_60,param_2);
  puVar28 = local_60;
  if ((local_60 != (undefined2 *)0x0) && (lVar21 = *(longlong *)(local_60 + 0x14), lVar21 != 0))
  goto LAB_1409989a4;
  FUN_1400021e4(&local_50,&local_78);
  puVar25 = local_78;
  if ((int)local_70 == 0) {
    puVar25 = &DAT_149dfb77a;
  }
  FUN_14089e62a(&local_61,L"Loading Module %s",puVar25);
  if (local_78 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (puVar28 == (undefined2 *)0x0) {
    if (param_2 != 0) {
      if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
        uVar20 = (uint)((ulonglong)param_2 >> 0x10);
        uVar24 = (uint)param_2 & 0xffff;
        lVar21 = param_1 + 0x40;
        if (*(longlong *)(param_1 + 0x48) != 0) {
          lVar21 = *(longlong *)(param_1 + 0x48);
        }
        iVar8 = *(int *)(lVar21 + (ulonglong)
                                  (*(int *)(param_1 + 0x50) - 1U &
                                  (int)((ulonglong)param_2 >> 0x20) +
                                  ((uint)param_2 << 0x10 | uVar24) +
                                  (uVar20 << 0x13 | uVar20 & 0xffff) + (uVar24 >> 4)) * 4);
        if (iVar8 != -1) {
          do {
            if (*(longlong *)(*(longlong *)(param_1 + 8) + (longlong)iVar8 * 0x20) == param_2)
            goto LAB_140998815;
            iVar8 = *(int *)((longlong)iVar8 * 0x20 + *(longlong *)(param_1 + 8) + 0x18);
          } while (iVar8 != -1);
        }
      }
      puVar10 = (undefined8 *)FUN_14001cc68(0x38,0x10);
      *puVar10 = 0;
      puVar10[1] = 0;
      puVar10[2] = 0;
      puVar10[3] = 0;
      puVar10[4] = 0;
      puVar10[5] = 0;
      *(undefined1 *)(puVar10 + 6) = 0;
      *(undefined1 *)((longlong)puVar10 + 0x31) = 0;
      iVar8 = DAT_14c75d638 + 1;
      *(int *)((longlong)puVar10 + 0x34) = DAT_14c75d638;
      DAT_14c75d638 = iVar8;
      plVar11 = (longlong *)FUN_14001cc68(0x18,0x10);
      plVar11[1] = (longlong)&DAT_100000001;
      *plVar11 = (longlong)&PTR_FUN_149e35d00;
      plVar11[2] = (longlong)puVar10;
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c874a20) && (FUN_144b3d300(&DAT_14c874a20), DAT_14c874a20 == -1))
      {
        FUN_145762954(&DAT_14c874628);
        DAT_14c874a18 = 1;
        atexit(FUN_14278de47);
        _Init_thread_footer(&DAT_14c874a20);
      }
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14c8749f0);
      iVar27 = DAT_14c874660;
      iVar8 = DAT_14c874638;
      if (DAT_14c874664 == 0) {
        iVar27 = DAT_14c874638 + 1;
        bVar29 = DAT_14c87463c == DAT_14c874638;
        DAT_14c874638 = iVar27;
        if (bVar29) {
          FUN_1447711aa(&DAT_14c874630,iVar8);
        }
        iVar27 = DAT_14c874658;
        if (DAT_14c874658 == 0) {
          iVar7 = -1;
        }
        else {
          iVar7 = DAT_14c874658 + 0x1e;
          if (-1 < DAT_14c874658 + -1) {
            iVar7 = DAT_14c874658 + -1;
          }
          iVar7 = iVar7 >> 5;
        }
        iVar17 = DAT_14c874658 + 1;
        iVar23 = DAT_14c874658 + 0x1f;
        if (-1 < DAT_14c874658) {
          iVar23 = DAT_14c874658;
        }
        if (iVar23 >> 5 != iVar7) {
          if (DAT_14c87465c <= DAT_14c874658) {
            if (DAT_14c874658 + 0x20U < 0xa0) {
              DAT_14c87465c = 0x80;
            }
            else {
              uVar20 = DAT_14c874658 + 0x20U >> 5;
              if (DAT_14c87465c + 0x1fU < 0xa0) {
                uVar24 = 4;
                if (4 < uVar20) {
                  uVar24 = uVar20;
                }
              }
              else {
                uVar24 = uVar20 + (uVar20 * 3 >> 3) + 0x10;
              }
              uVar12 = (ulonglong)(uVar24 * 4);
              if (DAT_14c872d28 != (longlong *)0x0) {
                if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
                  uVar9 = (uint)(uVar12 + 0xf);
                  if (uVar24 < 0x1ffd) {
                    uVar12 = (ulonglong)
                             (ushort)(&DAT_14c841d90)
                                     [0x32 - (byte)(&DAT_14c841e00)[uVar12 + 0xf >> 4]];
                  }
                  else {
                    uVar19 = (ulonglong)(uVar9 & 0xfffffff0);
                    if (uVar19 < 0x7ff1) {
                      bVar16 = (&DAT_14c841e00)[uVar9 >> 4];
                      uVar22 = 0x32;
                      if (0x32 < bVar16) {
                        uVar22 = (ulonglong)bVar16;
                      }
                      uVar26 = 0x32 - (ulonglong)bVar16;
                      do {
                        uVar12 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar26 & 0xffffffff];
                        if (((&DAT_14c841d90)[uVar26 & 0xffffffff] & 0xf) == 0) goto LAB_140998bab;
                        lVar21 = uVar22 + 1 + uVar26;
                        uVar26 = uVar26 - 1;
                      } while (lVar21 != 0x33);
                    }
                    uVar12 = 0x10;
                    if (0x10 < DAT_14c841df8) {
                      uVar12 = (ulonglong)DAT_14c841df8;
                    }
                    uVar12 = -uVar12 & (uVar19 + uVar12) - 1;
                  }
                }
                else {
                  local_80 = (ulonglong)uVar20;
                  uVar12 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar12,0);
                  uVar20 = (uint)local_80;
                }
              }
LAB_140998bab:
              iVar7 = (int)(uVar12 >> 2);
              DAT_14c87465c = -0x20;
              if ((int)uVar20 <= iVar7) {
                DAT_14c87465c = iVar7 << 5;
              }
            }
            FUN_1446efbd8(&DAT_14c874640,DAT_14c874658);
            iVar17 = DAT_14c874658 + 1;
          }
          iVar7 = iVar17 + 0x1f;
          if (-1 < iVar17) {
            iVar7 = iVar17;
          }
          if (iVar17 % 0x20 != 0) {
            puVar13 = &DAT_14c874640;
            if (DAT_14c874650 != (undefined *)0x0) {
              puVar13 = DAT_14c874650;
            }
            bVar16 = -(char)(iVar17 % 0x20);
            DAT_14c874658 = iVar17;
            *(uint *)(puVar13 + (longlong)(iVar7 >> 5) * 4) =
                 (uint)(*(int *)(puVar13 + (longlong)(iVar7 >> 5) * 4) << (bVar16 & 0x1f)) >>
                 (bVar16 & 0x1f);
            iVar17 = DAT_14c874658;
          }
        }
        DAT_14c874658 = iVar17;
        lVar21 = (longlong)iVar8;
        puVar13 = &DAT_14c874640;
        if (DAT_14c874650 != (undefined *)0x0) {
          puVar13 = DAT_14c874650;
        }
        bVar16 = (byte)iVar27 & 0x1f;
        *(uint *)(puVar13 + (longlong)(iVar23 >> 5) * 4) =
             *(uint *)(puVar13 + (longlong)(iVar23 >> 5) * 4) &
             (-2 << bVar16 | 0xfffffffeU >> 0x20 - bVar16);
        iVar27 = iVar8;
      }
      else {
        lVar21 = (longlong)DAT_14c874660;
        DAT_14c874660 = *(int *)(DAT_14c874630 + 4 + lVar21 * 0x20);
        DAT_14c874664 = DAT_14c874664 + -1;
        if (DAT_14c874664 != 0) {
          *(undefined4 *)(DAT_14c874630 + (longlong)DAT_14c874660 * 0x20) = 0xffffffff;
        }
      }
      iVar8 = 1;
      puVar13 = &DAT_14c874640;
      if (DAT_14c874650 != (undefined *)0x0) {
        puVar13 = DAT_14c874650;
      }
      iVar7 = iVar27 + 0x1f;
      if (-1 < iVar27) {
        iVar7 = iVar27;
      }
      *(uint *)(puVar13 + (longlong)(iVar7 >> 5) * 4) =
           *(uint *)(puVar13 + (longlong)(iVar7 >> 5) * 4) | 1 << ((byte)iVar27 & 0x1f);
      lVar14 = DAT_14c874630;
      lVar21 = lVar21 * 0x20;
      plVar18 = (longlong *)(DAT_14c874630 + lVar21);
      *(longlong *)(DAT_14c874630 + lVar21) = param_2;
      *(undefined8 **)(lVar14 + 8 + lVar21) = puVar10;
      *(longlong **)(lVar14 + 0x10 + lVar21) = plVar11;
      lVar21 = param_2;
      if (plVar11 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
        UNLOCK();
        lVar21 = *plVar18;
      }
      *(undefined4 *)(plVar18 + 3) = 0xffffffff;
      uVar20 = (uint)((ulonglong)lVar21 >> 0x10);
      uVar24 = (uint)lVar21 & 0xffff;
      uVar20 = ((uint)lVar21 << 0x10 | uVar24) + (int)((ulonglong)lVar21 >> 0x20) +
               (uVar20 << 0x13 | uVar20 & 0xffff) + (uVar24 >> 4);
      uVar24 = DAT_14c874638 - DAT_14c874664;
      if (uVar24 != 1) {
        if (DAT_14c874638 != DAT_14c874664) {
          puVar13 = &DAT_14c874668;
          if (DAT_14c874670 != (undefined *)0x0) {
            puVar13 = DAT_14c874670;
          }
          iVar7 = *(int *)(puVar13 + (ulonglong)(DAT_14c874678 - 1U & uVar20) * 4);
          while (iVar7 != -1) {
            puVar2 = (undefined4 *)(DAT_14c874630 + (longlong)iVar7 * 0x20);
            if (*(longlong *)(DAT_14c874630 + (longlong)iVar7 * 0x20) == lVar21) {
              plVar4 = *(longlong **)(puVar2 + 4);
              if (plVar4 != (longlong *)0x0) {
                LOCK();
                plVar3 = plVar4 + 1;
                *(int *)plVar3 = (int)*plVar3 + -1;
                UNLOCK();
                if ((int)*plVar3 == 0) {
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
              lVar21 = *plVar18;
              uVar5 = *(undefined4 *)((longlong)plVar18 + 4);
              lVar14 = plVar18[1];
              uVar6 = *(undefined4 *)((longlong)plVar18 + 0xc);
              *(longlong *)(puVar2 + 4) = plVar18[2];
              *puVar2 = (int)lVar21;
              puVar2[1] = uVar5;
              puVar2[2] = (int)lVar14;
              puVar2[3] = uVar6;
              FUN_146820e48(iVar27);
              goto LAB_1409987be;
            }
            iVar7 = puVar2[6];
          }
        }
        if (3 < uVar24) {
          uVar12 = (ulonglong)(uVar24 & 0xfffffffe) + 0xf;
          lVar21 = 0x3f;
          if (uVar12 != 0) {
            for (; uVar12 >> lVar21 == 0; lVar21 = lVar21 + -1) {
            }
          }
          iVar8 = 1 << ((byte)lVar21 & 0x1f);
        }
      }
      if (((int)uVar24 < 1) || (iVar8 <= DAT_14c874678)) {
        uVar20 = DAT_14c874678 - 1U & uVar20;
        *(uint *)((longlong)plVar18 + 0x1c) = uVar20;
        puVar13 = DAT_14c874670;
        if (DAT_14c874670 == (undefined *)0x0) {
          puVar13 = &DAT_14c874668;
        }
        *(undefined4 *)(plVar18 + 3) =
             *(undefined4 *)(puVar13 + ((longlong)DAT_14c874678 - 1U & (longlong)(int)uVar20) * 4);
        puVar13 = DAT_14c874670;
        if (DAT_14c874670 == (undefined *)0x0) {
          puVar13 = &DAT_14c874668;
        }
        *(int *)(puVar13 + ((longlong)DAT_14c874678 - 1U & (longlong)(int)uVar20) * 4) = iVar27;
      }
      else {
        DAT_14c874678 = iVar8;
        FUN_14170bc1a();
      }
LAB_1409987be:
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14c8749f0);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c874a20) && (FUN_144b3d300(&DAT_14c874a20), DAT_14c874a20 == -1))
      {
        FUN_145762954(&DAT_14c874628);
        DAT_14c874a18 = 1;
        atexit(FUN_14278de47);
        _Init_thread_footer(&DAT_14c874a20);
      }
      FUN_14170be92(&DAT_14c874938,param_2,2);
      if (plVar11 != (longlong *)0x0) {
        LOCK();
        plVar18 = plVar11 + 1;
        *(int *)plVar18 = (int)*plVar18 + -1;
        UNLOCK();
        if ((int)*plVar18 == 0) {
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
LAB_140998815:
    FUN_144830a4e(param_1,&local_78,param_2);
    plVar18 = local_58;
    plVar11 = local_70;
    puVar28 = local_78;
    local_60 = local_78;
    local_78 = (undefined2 *)0x0;
    if (local_70 != local_58) {
      local_70 = (longlong *)0x0;
      local_58 = plVar11;
      if (plVar18 == (longlong *)0x0) goto LAB_1409988a3;
      LOCK();
      plVar11 = plVar18 + 1;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)*plVar11 == 0) {
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
    plVar11 = local_70;
    puVar28 = local_60;
    if (local_70 != (longlong *)0x0) {
      LOCK();
      plVar18 = local_70 + 1;
      *(int *)plVar18 = (int)*plVar18 + -1;
      UNLOCK();
      if ((int)*plVar18 == 0) {
        (**(code **)*local_70)(local_70);
        LOCK();
        piVar1 = (int *)((longlong)plVar11 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        puVar28 = local_60;
        if (*piVar1 == 0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
          puVar28 = local_60;
        }
      }
    }
  }
LAB_1409988a3:
  plVar11 = local_58;
  if (local_58 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_58 + 1) = (int)local_58[1] + 1;
    UNLOCK();
  }
  FUN_1410c118a(param_1);
  if (*(int *)(param_1 + 0x270) != *(int *)(param_1 + 0x29c)) {
    uVar20 = (uint)((ulonglong)local_50 >> 0x10);
    uVar24 = (uint)local_50 & 0xffff;
    lVar21 = param_1 + 0x2a0;
    if (*(longlong *)(param_1 + 0x2a8) != 0) {
      lVar21 = *(longlong *)(param_1 + 0x2a8);
    }
    iVar8 = *(int *)(lVar21 + (ulonglong)
                              (*(int *)(param_1 + 0x2b0) - 1U &
                              (int)((ulonglong)local_50 >> 0x20) + ((uint)local_50 << 0x10 | uVar24)
                              + (uVar20 << 0x13 | uVar20 & 0xffff) + (uVar24 >> 4)) * 4);
    if (iVar8 != -1) {
      do {
        lVar21 = *(longlong *)(param_1 + 0x268) + (longlong)iVar8 * 0x20;
        if (*(longlong *)(*(longlong *)(param_1 + 0x268) + (longlong)iVar8 * 0x20) == local_50) {
          if ((undefined8 *)(lVar21 + 8) != (undefined8 *)0x0 && lVar21 != 0) {
            if (*(int *)(lVar21 + 0x10) == 0) {
              plVar18 = (longlong *)0x0;
            }
            else {
              plVar18 = *(longlong **)(lVar21 + 8);
            }
            lVar21 = (**(code **)(*plVar18 + 0x58))();
            puVar10 = *(undefined8 **)(puVar28 + 0x14);
            *(longlong *)(puVar28 + 0x14) = lVar21;
            if (puVar10 != (undefined8 *)0x0) {
              (**(code **)*puVar10)(puVar10,1);
              lVar21 = *(longlong *)(puVar28 + 0x14);
            }
            if (lVar21 != 0) {
              LOCK();
              DAT_14c844c74 = DAT_14c844c74 + '\x01';
              UNLOCK();
              FUN_1412ba6c8(param_1 + 0x350,local_50,*(undefined1 *)(param_1 + 0x2b8));
              LOCK();
              DAT_14c844c74 = DAT_14c844c74 + -1;
              UNLOCK();
              (**(code **)(**(longlong **)(puVar28 + 0x14) + 8))();
              iVar8 = DAT_14c75d638 + 1;
              *(int *)(puVar28 + 0x1a) = DAT_14c75d638;
              DAT_14c75d638 = iVar8;
              LOCK();
              *(undefined1 *)((longlong)puVar28 + 0x31) = 1;
              UNLOCK();
              FUN_14170be92(param_1 + 0x310,local_50,0);
              lVar21 = *(longlong *)(puVar28 + 0x14);
              goto LAB_140998969;
            }
            *param_3 = 4;
            goto LAB_140998966;
          }
          break;
        }
        iVar8 = *(int *)(lVar21 + 0x18);
      } while (iVar8 != -1);
    }
  }
  *param_3 = 1;
LAB_140998966:
  lVar21 = 0;
LAB_140998969:
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    plVar18 = plVar11 + 1;
    *(int *)plVar18 = (int)*plVar18 + -1;
    UNLOCK();
    if ((int)*plVar18 == 0) {
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
  lVar14 = FUN_1407bb686();
  uVar15 = FUN_1407bb416();
  FUN_1407bb482(uVar15,*(undefined8 *)(lVar14 + 0x10));
LAB_1409989a4:
  plVar11 = local_58;
  if (local_58 != (longlong *)0x0) {
    LOCK();
    plVar18 = local_58 + 1;
    *(int *)plVar18 = (int)*plVar18 + -1;
    UNLOCK();
    if ((int)*plVar18 == 0) {
      (**(code **)*local_58)(local_58);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return lVar21;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140998de2 FUN_140998de2 body=73 status=ok
// SIG undefined FUN_140998de2(void)

float FUN_140998de2(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  float fVar3;
  
  lVar2 = (longlong)(int)param_1[1];
  if (param_2 < (int)param_1[1]) {
    fVar3 = 0.0;
    do {
      lVar1 = *(longlong *)(*param_1 + -8 + lVar2 * 8);
      lVar2 = lVar2 + -1;
      fVar3 = (*(float *)(lVar1 + 0x28) / *(float *)(lVar1 + 0x20)) * fVar3 +
              *(float *)(lVar1 + 0x24) / *(float *)(lVar1 + 0x20);
    } while (param_2 < lVar2);
  }
  else {
    fVar3 = 0.0;
  }
  return fVar3;
}



// FUNCTION 140998e2c FUN_140998e2c body=38 status=ok
// SIG undefined FUN_140998e2c(void)

undefined8 FUN_140998e2c(undefined8 param_1,int param_2)

{
  FUN_140998e52();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140998e52 FUN_140998e52 body=318 status=ok
// SIG undefined FUN_140998e52(void)

void FUN_140998e52(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b0e7650;
  *(undefined4 *)(param_1 + 0x166) = 0;
  if (param_1[0x165] != 0) {
    FUN_1400020a8();
  }
  FUN_140998f90(param_1 + 0x15d);
  *param_1 = &PTR_FUN_14ab72a10;
  plVar3 = (longlong *)param_1[0x157];
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
  if (*(char *)(param_1 + 0x14f) == '\x01') {
    if (param_1[0x14d] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x14f) = 0;
  }
  *param_1 = &PTR_FUN_14a1aaf20;
  FUN_140a87f4b(param_1[299],*(undefined4 *)(param_1 + 300));
  if (param_1[299] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x127] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x126) = 0;
  if (param_1[0x125] != 0) {
    FUN_1400020a8();
  }
  FUN_1403c4632(param_1 + 0x11d);
  if (param_1[0x117] != 0) {
    FUN_1400020a8();
  }
  FUN_14064e066(param_1);
  return;
}



// FUNCTION 140998f90 FUN_140998f90 body=55 status=ok
// SIG undefined FUN_140998f90(void)

void FUN_140998f90(longlong *param_1)

{
  FUN_140998fc8(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140998fc8 FUN_140998fc8 body=123 status=ok
// SIG undefined FUN_140998fc8(void)

void FUN_140998fc8(longlong param_1,int param_2)

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



// FUNCTION 140999044 FUN_140999044 body=640 status=ok
// SIG undefined FUN_140999044(void)

undefined8 *
FUN_140999044(undefined8 *param_1,undefined8 param_2,longlong param_3,longlong param_4,
             longlong param_5,byte param_6,undefined1 param_7)

{
  ulonglong *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  bool bVar4;
  uint uVar5;
  longlong *plVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
  undefined1 auStack_88 [40];
  undefined8 *local_60;
  ulonglong *local_58;
  undefined8 **local_50;
  undefined1 local_44 [4];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *param_1 = param_2;
  FUN_1446f470e(param_1 + 1,param_2,1);
  puVar1 = param_1 + 2;
  FUN_14099931e(puVar1,param_1 + 1);
  FUN_1409992c6(param_1 + 3,*(undefined8 *)(param_3 + 0x38));
  puVar2 = param_1 + 4;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = param_1;
  *(undefined1 *)((longlong)param_1 + 0xac) = param_7;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  if (param_5 == 0) {
    uVar5 = 0;
    iVar10 = 0;
  }
  else {
    *(undefined4 *)(param_1 + 5) = 1;
    FUN_14575c85a(puVar2,0);
    *(longlong *)param_1[4] = param_5;
    param_1[9] = param_5;
    iVar10 = *(int *)(param_1 + 5);
    uVar5 = *(uint *)((longlong)param_1 + 0x2c);
  }
  if (param_4 != 0) {
    *(uint *)(param_1 + 5) = iVar10 + 1U;
    if (uVar5 < iVar10 + 1U) {
      FUN_14575c85a(puVar2,iVar10);
    }
    *(longlong *)(param_1[4] + (longlong)iVar10 * 8) = param_4;
    param_1[(ulonglong)(param_6 ^ 1) * 2 + 8] = param_4;
    iVar10 = *(int *)(param_1 + 5);
    uVar5 = *(uint *)((longlong)param_1 + 0x2c);
  }
  *(uint *)(param_1 + 5) = iVar10 + 1U;
  if (uVar5 < iVar10 + 1U) {
    FUN_14575c85a(puVar2,iVar10);
  }
  *(longlong *)(param_1[4] + (longlong)iVar10 * 8) = param_3;
  param_1[(ulonglong)param_6 + 6] = param_3;
  DAT_14ca9859c = DAT_14ca9859c + 1;
  *(int *)(param_1 + 0x15) = DAT_14ca9859c;
  if (DAT_14ca985f8 != (undefined8 *)0x0) {
    *(undefined8 **)((longlong)DAT_14ca985f8 + 8) = param_1 + 0x12;
  }
  param_1[0x12] = DAT_14ca985f8;
  param_1[0x13] = &DAT_14ca985f8;
  DAT_14ca985f8 = param_1 + 0x12;
  FUN_140999504();
  local_50 = &local_60;
  local_60 = param_1;
  local_58 = puVar1;
  FUN_14575c8de(local_44);
  plVar6 = (longlong *)FUN_140945e89(*(undefined4 *)(param_3 + 8));
  uVar5 = *(uint *)(plVar6 + 1);
  lVar7 = *plVar6;
  if ((int)uVar5 < 1) {
    uVar9 = 0;
  }
  else {
    uVar9 = 0;
    uVar8 = uVar5;
    do {
      uVar3 = (uVar8 >> 1) + uVar9;
      if (*(ulonglong *)(*(longlong *)(lVar7 + (ulonglong)uVar3 * 8) + 0x10) < *puVar1) {
        uVar9 = uVar3 + (uVar8 & 1);
      }
      bVar4 = 1 < uVar8;
      uVar8 = uVar8 >> 1;
    } while (bVar4);
  }
  *(uint *)(plVar6 + 1) = uVar5 + 1;
  if (*(uint *)((longlong)plVar6 + 0xc) < uVar5 + 1) {
    FUN_1409995a2(plVar6,uVar5);
    lVar7 = *plVar6;
  }
  uVar11 = (ulonglong)uVar9;
  memmove((void *)(lVar7 + uVar11 * 8 + 8),(void *)(lVar7 + uVar11 * 8),
          (ulonglong)(uVar5 - uVar9) << 3);
  *(undefined8 **)(*plVar6 + uVar11 * 8) = param_1;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1409992c6 FUN_1409992c6 body=86 status=ok
// SIG undefined FUN_1409992c6(void)

undefined8 FUN_1409992c6(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1446f470e(local_20,param_2,1);
  FUN_14099931e(param_1,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14099931e FUN_14099931e body=485 status=ok
// SIG undefined FUN_14099931e(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 * FUN_14099931e(undefined8 *param_1,ulonglong *param_2)

{
  ushort *puVar1;
  ushort uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  size_t sVar5;
  ulonglong uVar6;
  int iVar7;
  undefined1 auStack_10e8 [32];
  undefined1 local_10c8 [128];
  longlong local_1048;
  undefined8 local_1040;
  undefined4 local_1038;
  wchar_t local_1030 [1024];
  ushort local_830 [1024];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_10e8;
  uVar6 = *param_2;
  if (uVar6 == 0) {
    *param_1 = 0;
  }
  else {
    if (DAT_14c87ead8 == '\0') {
      FUN_140024d3a(&DAT_14c87eb00);
      DAT_14c87ead8 = '\x01';
      iVar7 = *(int *)((longlong)param_2 + 4);
    }
    else {
      iVar7 = (int)(uVar6 >> 0x20);
    }
    puVar1 = (ushort *)((&DAT_14c87eb10)[uVar6 >> 0x10 & 0xffff] + (uVar6 & 0xffff) * 2);
    uVar2 = *puVar1;
    uVar6 = (ulonglong)(uVar2 >> 6);
    if ((uVar2 & 1) == 0) {
      memcpy(local_830,puVar1 + 1,uVar6);
      *(undefined1 *)((longlong)local_830 + uVar6) = 0;
      if (0x3f < uVar2) {
        uVar3 = 0;
        do {
          *(char *)((longlong)local_1030 + uVar3) =
               (0x19 < (int)*(char *)((longlong)local_830 + uVar3) - 0x61U) * ' ' +
               *(char *)((longlong)local_830 + uVar3) + -0x20;
          uVar3 = uVar3 + 1;
        } while (uVar6 != uVar3);
      }
      *(undefined1 *)((longlong)local_1030 + uVar6) = 0;
      uVar4 = FUN_144859ac6(local_1030,uVar6,(longlong)iVar7);
      *param_1 = uVar4;
    }
    else {
      FUN_144aff3de(puVar1,local_830);
      if (0x3f < uVar2) {
        uVar3 = 0;
        do {
          local_1030[uVar3] =
               local_830[uVar3] + (ushort)(0x19 < local_830[uVar3] - 0x61) * 0x20 + L'￠';
          uVar3 = uVar3 + 1;
        } while (uVar6 != uVar3);
      }
      local_1030[uVar6] = L'\0';
      local_1048 = 0;
      sVar5 = wcslen(local_1030);
      FUN_1446fe5a4(local_10c8,local_1030,sVar5 & 0xffffffff,1);
      uVar4 = FUN_144859ac6(local_1040,local_1038,(longlong)iVar7);
      *param_1 = uVar4;
      if (local_1048 != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_10e8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140999504 FUN_140999504 body=157 status=ok
// SIG undefined FUN_140999504(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140999504(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca985f0) {
    FUN_144b3d300(&DAT_14ca985f0);
    if (DAT_14ca985f0 == -1) {
      DAT_14ca985c0 = 0;
      DAT_14ca985c8 = 0;
      DAT_14ca985a0 = 0;
      _DAT_14ca985a8 = 0;
      _DAT_14ca985cc = 0xffffffff00000080;
      DAT_14ca985d4 = 0;
      DAT_14ca985e0 = 0;
      DAT_14ca985e8 = 0;
      atexit(FUN_143227011);
      _Init_thread_footer(&DAT_14ca985f0);
    }
  }
  return &DAT_14ca985a0;
}



// FUNCTION 1409995a2 FUN_1409995a2 body=353 status=ok
// SIG undefined FUN_1409995a2(void)

void FUN_1409995a2(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140999627;
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
LAB_140999627:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 140999704 FUN_140999704 body=497 status=ok
// SIG undefined FUN_140999704(void)

void FUN_140999704(void)

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
  if (DAT_14ca985e0 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14ca985e0,0,0,4);
  }
  uVar3 = DAT_14ca985e8;
  uVar2 = local_50;
  if (DAT_14ca985e8 != 0) {
    uVar7 = 0;
    FUN_144a1cbf0(&DAT_14ca985d8,0,DAT_14ca985e8,4);
    if (0 < (int)uVar3) {
      do {
        puVar6 = DAT_14ca985e0;
        if (DAT_14ca985e0 == (undefined *)0x0) {
          puVar6 = &DAT_14ca985d8;
        }
        *(undefined4 *)(puVar6 + (ulonglong)(DAT_14ca985e8 + 0x7fffffff & uVar7) * 4) = 0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
    }
    local_40 = 0x100000000;
    local_38 = &DAT_14ca985b0;
    local_30 = 0xffffffff;
    local_28 = 0;
    if (DAT_14ca985c8 != 0) {
      FUN_1449c0562(&local_40);
    }
    local_68 = &DAT_14ca985a0;
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
        uVar9 = (longlong)((int)((ulonglong)uVar2 >> 0x20) * 0x17 + (int)uVar2) &
                (longlong)(int)DAT_14ca985e8 - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar1 + 0x14 + lVar5 * 0x18) = iVar8;
        puVar6 = DAT_14ca985e0;
        if (DAT_14ca985e0 == (undefined *)0x0) {
          puVar6 = &DAT_14ca985d8;
        }
        *(undefined4 *)(lVar1 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)(puVar6 + ((longlong)(int)DAT_14ca985e8 - 1U & uVar9) * 4);
        puVar6 = DAT_14ca985e0;
        if (DAT_14ca985e0 == (undefined *)0x0) {
          puVar6 = &DAT_14ca985d8;
        }
        *(int *)(puVar6 + ((longlong)iVar8 & (longlong)(int)DAT_14ca985e8 - 1U) * 4) = iVar4;
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



// FUNCTION 1409998f6 FUN_1409998f6 body=225 status=ok
// SIG undefined FUN_1409998f6(void)

void FUN_1409998f6(longlong *param_1,char param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  
  if (param_1[2] != 0) {
    LOCK();
    *(int *)(param_1[3] + 0x38) = *(int *)(param_1[3] + 0x38) + -1;
    UNLOCK();
    lVar2 = param_1[3];
    if (*param_1 == 0) {
      lVar4 = 0;
      lVar5 = lVar2;
    }
    else {
      *(undefined8 *)(*param_1 + 8) = 0;
      lVar4 = *param_1;
      lVar5 = param_1[3];
    }
    LOCK();
    bVar7 = param_1 == *(longlong **)(lVar5 + 0x30);
    if (bVar7) {
      *(longlong *)(lVar5 + 0x30) = lVar4;
    }
    UNLOCK();
    if (!bVar7) {
      plVar3 = (longlong *)param_1[1];
      while (plVar3 == (longlong *)0x0) {
        SwitchToThread();
        plVar3 = (longlong *)param_1[1];
      }
      lVar4 = *param_1;
      *plVar3 = lVar4;
      if (lVar4 != 0) {
        *(longlong *)(lVar4 + 8) = param_1[1];
      }
    }
    lVar4 = param_1[2];
    lVar5 = param_1[3];
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    if ((param_2 == '\0') && ((longlong)*(int *)(lVar5 + 0x20) != 0)) {
      lVar6 = 0;
      do {
        if ((*(int *)(*(longlong *)(lVar5 + 0x18) + 8 + lVar6) != 0) &&
           (*(longlong *)(*(longlong *)(lVar5 + 0x18) + lVar6) != 0)) {
          FUN_1409999d8(lVar5 + 0x18,lVar4);
          break;
        }
        lVar6 = lVar6 + 0x10;
      } while ((longlong)*(int *)(lVar5 + 0x20) * 0x10 != lVar6);
    }
    LOCK();
    piVar1 = (int *)(lVar2 + 0x38);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 1409999d8 FUN_1409999d8 body=162 status=ok
// SIG undefined FUN_1409999d8(void)

void FUN_1409999d8(longlong *param_1,undefined8 param_2)

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
        goto LAB_140999a65;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_140999a65:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 140999a7a FUN_140999a7a body=682 status=ok
// SIG undefined FUN_140999a7a(void)

void FUN_140999a7a(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  ulonglong uVar14;
  
  iVar4 = *(int *)(param_1 + 0x38) - *(int *)(param_1 + 100);
  if (iVar4 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar4);
  }
  *(undefined4 *)(param_1 + 0x88) = 0;
  if (*(int *)(param_1 + 0x8c) < iVar4) {
    FUN_14575cbd6();
  }
  iVar4 = *(int *)(param_1 + 0x58);
  if (iVar4 == 0) {
    uVar14 = 1;
    uVar7 = 0;
    iVar8 = 0;
    iVar6 = 0;
  }
  else {
    puVar3 = *(uint **)(param_1 + 0x50);
    if (*(uint **)(param_1 + 0x50) == (uint *)0x0) {
      puVar3 = (uint *)(param_1 + 0x40);
    }
    uVar13 = *puVar3;
    if (uVar13 == 0) {
      iVar8 = iVar4 + 0x1e;
      if (-1 < iVar4 + -1) {
        iVar8 = iVar4 + -1;
      }
      uVar7 = 0;
      uVar9 = (ulonglong)(uint)(iVar8 >> 5);
      if (iVar8 >> 5 < 1) {
        uVar9 = uVar7;
      }
      iVar8 = 0;
      do {
        if (uVar9 == uVar7) goto LAB_140999adb;
        iVar8 = iVar8 + 0x20;
        uVar13 = puVar3[uVar7 + 1];
        uVar7 = uVar7 + 1;
      } while (uVar13 == 0);
    }
    else {
      uVar7 = 0;
      iVar8 = 0;
    }
    uVar14 = (ulonglong)(-uVar13 & uVar13);
    uVar9 = uVar14 * 2 + 1;
    lVar2 = 0x3f;
    if (uVar9 != 0) {
      for (; uVar9 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    iVar6 = (iVar8 - ((uint)lVar2 ^ 0x3f)) + 0x3e;
    if (iVar4 <= iVar6) {
      iVar6 = iVar4;
    }
  }
  if (iVar6 != iVar4) {
    uVar13 = 0xffffffff;
    do {
      lVar2 = FUN_140999d24(*(undefined8 *)
                             (*(longlong *)(param_1 + 0x30) + 8 + (longlong)iVar6 * 0x20));
      if (lVar2 != 0) {
        if (DAT_14c950c29 == '\x01') {
          FUN_1456cec3c(lVar2);
        }
        iVar6 = *(int *)(param_1 + 0x88);
        *(uint *)(param_1 + 0x88) = iVar6 + 1U;
        if (*(uint *)(param_1 + 0x8c) < iVar6 + 1U) {
          FUN_1488a530c((longlong *)(param_1 + 0x80),iVar6);
        }
        *(longlong *)(*(longlong *)(param_1 + 0x80) + (longlong)iVar6 * 8) = lVar2;
        if (DAT_14c950c29 == '\x01') {
          FUN_1456cec3c(lVar2);
        }
      }
      uVar13 = uVar13 & ~(uint)uVar14;
      puVar3 = *(uint **)(param_1 + 0x50);
      if (*(uint **)(param_1 + 0x50) == (uint *)0x0) {
        puVar3 = (uint *)(param_1 + 0x40);
      }
      iVar1 = *(int *)(param_1 + 0x58);
      iVar6 = (int)uVar7;
      lVar2 = (longlong)iVar6;
      uVar5 = puVar3[lVar2] & uVar13;
      if (uVar5 == 0) {
        iVar11 = iVar1 + 0x1e;
        if (-1 < iVar1 + -1) {
          iVar11 = iVar1 + -1;
        }
        iVar11 = iVar11 >> 5;
        iVar8 = iVar8 + 0x20;
        iVar12 = iVar11;
        if (iVar11 < iVar6) {
          iVar12 = iVar6;
        }
        if (iVar6 < iVar11) {
          lVar10 = 0;
          do {
            uVar5 = puVar3[lVar2 + lVar10 + 1];
            if (uVar5 != 0) {
              uVar7 = (ulonglong)(iVar6 + (int)lVar10 + 1);
              uVar13 = 0xffffffff;
              goto LAB_140999c06;
            }
            iVar8 = iVar8 + 0x20;
            lVar10 = lVar10 + 1;
          } while (iVar12 - lVar2 != lVar10);
          uVar13 = 0xffffffff;
          lVar2 = (longlong)iVar12;
        }
        uVar7 = lVar2 + 1U & 0xffffffff;
        iVar6 = iVar1;
      }
      else {
LAB_140999c06:
        uVar14 = (ulonglong)(-uVar5 & uVar5);
        uVar9 = uVar14 * 2 + 1;
        lVar2 = 0x3f;
        if (uVar9 != 0) {
          for (; uVar9 >> lVar2 == 0; lVar2 = lVar2 + -1) {
          }
        }
        iVar6 = (iVar8 - ((uint)lVar2 ^ 0x3f)) + 0x3e;
        if (iVar1 <= iVar6) {
          iVar6 = iVar1;
        }
      }
    } while (iVar6 != iVar4);
  }
LAB_140999adb:
  (**(code **)(*param_2 + 0x90))
            (param_2,*(undefined8 *)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x88),0,0);
  return;
}



// FUNCTION 140999d24 FUN_140999d24 body=363 status=ok
// SIG undefined FUN_140999d24(void)

longlong FUN_140999d24(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  wchar_t *local_58;
  code *local_50;
  undefined1 *local_48;
  undefined1 **local_40;
  code *local_38;
  code *local_30;
  undefined1 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = *(longlong *)(param_1 + 0x40);
  if ((lVar1 != 0) && (lVar2 = *(longlong *)(lVar1 + 0x10), lVar2 != 0)) {
    if (DAT_14c9a53e8 == 0) {
      local_40 = &local_20;
      local_20 = &LAB_141741c86;
      local_30 = FUN_14081d0ea;
      local_38 = FUN_14081d0ea;
      local_48 = &LAB_1470cc1e5;
      local_50 = FUN_1462ad312;
      local_58 = L"Engine";
      local_60 = 0;
      local_68 = 0x10000001;
      local_70 = 8;
      local_78 = 0x50;
      FUN_14081cfa3(L"/Script/GbxEngine",L"GbxGraphAsset",&DAT_14c9a53e8,&DAT_1470cc1e4);
      lVar2 = *(longlong *)(lVar1 + 0x10);
      if (lVar2 == 0) goto LAB_140999e67;
    }
    if ((((DAT_14c9a53e8 != 0) && (lVar1 = *(longlong *)(lVar2 + 0x10), lVar1 != 0)) &&
        (*(int *)(DAT_14c9a53e8 + 0x38) <= *(int *)(lVar1 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(DAT_14c9a53e8 + 0x38) * 8) ==
        DAT_14c9a53e8 + 0x30)) {
      lVar1 = FUN_140999e90();
      if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
           ) == lVar1 + 0x30)) goto LAB_140999e69;
    }
  }
LAB_140999e67:
  lVar2 = 0;
LAB_140999e69:
  if ((local_18 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar2;
}



// FUNCTION 140999e90 FUN_140999e90 body=228 status=ok
// SIG undefined FUN_140999e90(void)

longlong FUN_140999e90(void)

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
  if (DAT_14cb60650 == 0) {
    local_30 = &local_10;
    local_10 = &LAB_141741c86;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1458b5086;
    local_38 = &LAB_1486c7e58;
    local_40 = FUN_141854a8a;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x60;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxMomentData",&DAT_14cb60650,FUN_1464ed176);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb60650;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140999f76 FUN_140999f76 body=1263 status=ok
// SIG undefined FUN_140999f76(void)

/* WARNING: Removing unreachable block (ram,0x00014099a445) */

undefined8 FUN_140999f76(undefined8 param_1,longlong *param_2,longlong *param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong lVar14;
  longlong *_Dst;
  ulonglong uVar15;
  longlong lVar16;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined4 local_80;
  longlong local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  do {
    if (param_4 == 0) {
      if ((local_60 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return 1;
    }
    if (param_3 != param_2) {
      local_78 = 0;
      uStack_70 = 0;
      lVar8 = param_3[1];
      if ((longlong)(int)lVar8 != 0) {
        lVar3 = *param_3;
        lVar14 = 0;
        do {
          if ((*(int *)(lVar3 + 8 + lVar14) != 0) &&
             (plVar13 = *(longlong **)(lVar3 + lVar14), plVar13 != (longlong *)0x0)) {
            local_88 = 0;
            local_80 = 0;
            (**(code **)(*plVar13 + 0x40))();
            lVar16 = (longlong)(int)uStack_70;
            uVar10 = (int)uStack_70 + 1;
            uStack_70 = CONCAT44(uStack_70._4_4_,uVar10);
            if (uStack_70._4_4_ < uVar10) {
              FUN_1447a71f6(&local_78);
            }
            lVar16 = lVar16 * 0x10;
            *(undefined8 *)(local_78 + lVar16) = 0;
            *(undefined4 *)(local_78 + 8 + lVar16) = 0;
            *(undefined8 *)(local_78 + lVar16) = local_88;
            local_88 = 0;
            *(undefined4 *)(local_78 + 8 + lVar16) = local_80;
            local_80 = 0;
          }
          lVar14 = lVar14 + 0x10;
        } while ((longlong)(int)lVar8 * 0x10 != lVar14);
      }
      FUN_1448a8284(param_2);
      if (&local_78 == param_2) {
        uVar15 = uStack_70 & 0xffffffff;
      }
      else {
        FUN_144760e21(*param_2,(int)param_2[1]);
        if (*param_2 != 0) {
          FUN_1400020a8();
        }
        *param_2 = local_78;
        local_78 = 0;
        *(int *)(param_2 + 1) = (int)uStack_70;
        *(uint *)((longlong)param_2 + 0xc) = uStack_70._4_4_;
        uStack_70 = 0;
        uVar15 = 0;
      }
      FUN_144760e21(local_78,uVar15);
      if (local_78 != 0) {
        FUN_1400020a8();
      }
    }
    param_2[7] = param_3[7];
    lVar8 = param_3[3];
    uVar4 = *(undefined4 *)((longlong)param_3 + 0x1c);
    lVar3 = param_3[4];
    uVar5 = *(undefined4 *)((longlong)param_3 + 0x24);
    uVar6 = *(undefined4 *)((longlong)param_3 + 0x2c);
    lVar14 = param_3[6];
    uVar7 = *(undefined4 *)((longlong)param_3 + 0x34);
    *(int *)(param_2 + 5) = (int)param_3[5];
    *(undefined4 *)((longlong)param_2 + 0x2c) = uVar6;
    *(int *)(param_2 + 6) = (int)lVar14;
    *(undefined4 *)((longlong)param_2 + 0x34) = uVar7;
    *(int *)(param_2 + 3) = (int)lVar8;
    *(undefined4 *)((longlong)param_2 + 0x1c) = uVar4;
    *(int *)(param_2 + 4) = (int)lVar3;
    *(undefined4 *)((longlong)param_2 + 0x24) = uVar5;
    lVar8 = param_3[8];
    lVar3 = param_3[9];
    if (lVar3 != 0) {
      LOCK();
      *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
      UNLOCK();
    }
    plVar13 = (longlong *)param_2[9];
    param_2[8] = lVar8;
    param_2[9] = lVar3;
    if (plVar13 != (longlong *)0x0) {
      LOCK();
      plVar12 = plVar13 + 1;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)*plVar12 == 0) {
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
    if (param_3 != param_2) {
      iVar2 = (int)param_3[0x13];
      plVar13 = param_2 + 0x12;
      if ((ulonglong)(longlong)iVar2 < 2) {
        if (*plVar13 != 0) {
          FUN_1446efa72(plVar13,0,0,4);
        }
        if (iVar2 != 0) goto LAB_14099a1bd;
      }
      else {
        FUN_1446efa72(plVar13,0,iVar2,4);
LAB_14099a1bd:
        plVar12 = param_2 + 0x11;
        if ((longlong *)*plVar13 != (longlong *)0x0) {
          plVar12 = (longlong *)*plVar13;
        }
        plVar13 = param_3 + 0x11;
        if ((longlong *)param_3[0x12] != (longlong *)0x0) {
          plVar13 = (longlong *)param_3[0x12];
        }
        memcpy(plVar12,plVar13,(longlong)iVar2 << 2);
      }
      plVar13 = param_2 + 10;
      *(int *)(param_2 + 0x13) = iVar2;
      uVar10 = *(uint *)(param_3 + 0xb);
      FUN_14063af44(plVar13,(ulonglong)uVar10);
      lVar8 = param_2[0xb];
      *(uint *)(param_2 + 0xb) = (int)lVar8 + uVar10;
      if ((uint)(*(int *)((longlong)param_2 + 0x5c) - (int)lVar8) < uVar10) {
        FUN_1447711aa(plVar13);
      }
      *(int *)(param_2 + 0x10) = (int)param_3[0x10];
      *(undefined4 *)((longlong)param_2 + 0x84) = *(undefined4 *)((longlong)param_3 + 0x84);
      uVar9 = (int)param_3[0xf] + 0x1fU & 0xffffffe0;
      *(undefined4 *)(param_2 + 0xf) = 0;
      if ((*(int *)((longlong)param_2 + 0x7c) < (int)uVar9) ||
         (0x80 < *(int *)((longlong)param_2 + 0x7c))) {
        uVar11 = 0x80;
        if (0x80 < (int)uVar9) {
          uVar11 = uVar9;
        }
        *(uint *)((longlong)param_2 + 0x7c) = uVar11;
        FUN_1446efbd8(param_2 + 0xc);
      }
      iVar2 = (int)param_3[0xf];
      *(int *)(param_2 + 0xf) = iVar2;
      if (iVar2 != 0) {
        plVar12 = (longlong *)param_3[0xe];
        if ((longlong *)param_3[0xe] == (longlong *)0x0) {
          plVar12 = param_3 + 0xc;
        }
        _Dst = param_2 + 0xc;
        if ((longlong *)param_2[0xe] != (longlong *)0x0) {
          _Dst = (longlong *)param_2[0xe];
        }
        memcpy(_Dst,plVar12,(ulonglong)(iVar2 + 0x1fU >> 3 & 0xfffffffc));
      }
      if (0 < (int)uVar10) {
        lVar8 = *plVar13;
        lVar3 = param_3[10];
        lVar14 = 0;
        uVar15 = 0;
        do {
          plVar13 = (longlong *)param_3[0xe];
          if ((longlong *)param_3[0xe] == (longlong *)0x0) {
            plVar13 = param_3 + 0xc;
          }
          if ((*(uint *)((longlong)plVar13 + (uVar15 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar15 & 0x1f)
              & 1) == 0) {
            *(undefined4 *)(lVar8 + lVar14) = *(undefined4 *)(lVar3 + lVar14);
            *(undefined4 *)(lVar8 + 4 + lVar14) = *(undefined4 *)(lVar3 + 4 + lVar14);
          }
          else {
            *(undefined8 *)(lVar8 + lVar14) = *(undefined8 *)(lVar3 + lVar14);
            *(undefined8 *)(lVar8 + 8 + lVar14) = *(undefined8 *)(lVar3 + 8 + lVar14);
            lVar16 = *(longlong *)(lVar3 + 0x10 + lVar14);
            *(longlong *)(lVar8 + 0x10 + lVar14) = lVar16;
            if (lVar16 != 0) {
              LOCK();
              *(int *)(lVar16 + 8) = *(int *)(lVar16 + 8) + 1;
              UNLOCK();
            }
            *(undefined8 *)(lVar8 + 0x18 + lVar14) = *(undefined8 *)(lVar3 + 0x18 + lVar14);
          }
          uVar15 = uVar15 + 1;
          lVar14 = lVar14 + 0x20;
        } while (uVar10 != uVar15);
      }
    }
    FUN_14099a466(param_2 + 0x14,param_3 + 0x14);
    lVar8 = param_3[0x16];
    lVar3 = param_3[0x17];
    if (lVar3 != 0) {
      LOCK();
      *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
      UNLOCK();
    }
    plVar13 = (longlong *)param_2[0x17];
    param_2[0x16] = lVar8;
    param_2[0x17] = lVar3;
    if (plVar13 != (longlong *)0x0) {
      LOCK();
      plVar12 = plVar13 + 1;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)*plVar12 == 0) {
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
    param_3 = param_3 + 0x1a;
    FUN_14099a466(param_2 + 0x18);
    param_4 = param_4 + -1;
    param_2 = param_2 + 0x1a;
  } while( true );
}



// FUNCTION 14099a466 FUN_14099a466 body=93 status=ok
// SIG undefined FUN_14099a466(void)

undefined8 * FUN_14099a466(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_14028f404(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_14099a736(param_1,iVar1);
      FUN_14099a4c3(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14099a4c3 FUN_14099a4c3 body=168 status=ok
// SIG undefined FUN_14099a4c3(void)

void FUN_14099a4c3(longlong param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (param_3 != 0) {
    puVar3 = (undefined8 *)(param_1 + 0x18);
    do {
      puVar3[-3] = 0;
      puVar3[-2] = 0;
      puVar3[-1] = 0;
      puVar3[-3] = *param_2;
      uVar2 = FUN_14477b664(param_2[1]);
      uVar2 = FUN_14477b664(uVar2);
      puVar3[-2] = uVar2;
      puVar3[-1] = param_2[2];
      *puVar3 = 0;
      iVar1 = *(int *)(param_2 + 4);
      uVar2 = param_2[3];
      *(int *)(puVar3 + 1) = iVar1;
      if (iVar1 == 0) {
        *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
      }
      else {
        FUN_14099a5ec(puVar3,iVar1,0);
        FUN_14099a56b(*puVar3,uVar2);
      }
      param_2 = param_2 + 5;
      puVar3 = puVar3 + 5;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 14099a56b FUN_14099a56b body=128 status=ok
// SIG undefined FUN_14099a56b(void)

void FUN_14099a56b(longlong param_1,longlong param_2,int param_3)

{
  undefined8 uVar1;
  
  if (param_3 != 0) {
    param_1 = param_1 + 0x20;
    param_2 = param_2 + 0x20;
    do {
      *(undefined1 *)(param_1 + -0x20) = *(undefined1 *)(param_2 + -0x20);
      *(undefined8 *)(param_1 + -0x18) = 0;
      *(undefined8 *)(param_1 + -0x10) = 0;
      *(undefined8 *)(param_1 + -8) = 0;
      *(undefined8 *)(param_1 + -0x18) = *(undefined8 *)(param_2 + -0x18);
      uVar1 = FUN_14477b664(*(undefined8 *)(param_2 + -0x10));
      uVar1 = FUN_14477b664(uVar1);
      *(undefined8 *)(param_1 + -0x10) = uVar1;
      *(undefined8 *)(param_1 + -8) = *(undefined8 *)(param_2 + -8);
      FUN_14034cca6(param_1,param_2);
      param_1 = param_1 + 0x58;
      param_2 = param_2 + 0x58;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 14099a5ec FUN_14099a5ec body=330 status=ok
// SIG undefined FUN_14099a5ec(void)

void FUN_14099a5ec(longlong param_1,int param_2,int param_3)

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
    uVar4 = (longlong)param_2 * 0x58;
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
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14099a65a;
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
LAB_14099a65a:
    iVar5 = (int)(uVar4 / 0x58);
    iVar7 = 0x7fffffff;
    if (param_2 <= iVar5) {
      iVar7 = iVar5;
    }
  }
  if (param_3 < iVar7) {
    FUN_1446f8d3c(param_1,0,iVar7,0x58,8);
    param_3 = iVar7;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14099a736 FUN_14099a736 body=334 status=ok
// SIG undefined FUN_14099a736(void)

void FUN_14099a736(longlong param_1,int param_2,int param_3)

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
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14099a7a8;
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
LAB_14099a7a8:
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



// FUNCTION 14099a892 FUN_14099a892 body=40 status=ok
// SIG undefined FUN_14099a892(void)

undefined8 FUN_14099a892(undefined8 param_1,int param_2)

{
  FUN_14099a8ba();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14099a8ba FUN_14099a8ba body=339 status=ok
// SIG undefined FUN_14099a8ba(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14099a8ba(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14b056c30;
  FUN_143c3e2a3(param_1[0x28],*(undefined4 *)(param_1 + 0x29));
  if (param_1[0x28] != 0) {
    FUN_1400020a8();
  }
  FUN_140841fbd(param_1[0x26],*(undefined4 *)(param_1 + 0x27));
  if (param_1[0x26] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x24] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (param_1[0x1f] != 0) {
    FUN_1400020a8();
  }
  FUN_1408e69fe(param_1 + 0x17);
  *(undefined4 *)(param_1 + 0x16) = 0;
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  FUN_1408e6a36(param_1 + 0xd);
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  if (param_1[3] != 0) {
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
                    /* WARNING: Could not recover jumptable at 0x00014099a9eb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    return;
  }
  return;
}



// FUNCTION 14099aa1c FUN_14099aa1c body=74 status=ok
// SIG undefined FUN_14099aa1c(void)

undefined8 FUN_14099aa1c(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  byte bVar2;
  undefined8 uVar3;
  
  uVar3 = (**(code **)(*param_1 + 8))();
  FUN_1402057ac(param_2,param_1,uVar3,0);
  lVar1 = param_1[8];
  if (lVar1 != 0) {
    uVar3 = FUN_14099aa66();
    bVar2 = FUN_1448093f4(lVar1,uVar3);
    *(byte *)((longlong)param_1 + 0x3c) = bVar2 ^ 1;
  }
  return 1;
}



// FUNCTION 14099aa66 FUN_14099aa66 body=57 status=ok
// SIG undefined FUN_14099aa66(void)

void FUN_14099aa66(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba4460 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba4460 = FUN_140002ddd(FUN_1465bda50,uVar1,L"GrenadeBehaviorDef_Delivery");
  }
  return;
}



// FUNCTION 14099aaa0 FUN_14099aaa0 body=70 status=ok
// SIG undefined FUN_14099aaa0(void)

void FUN_14099aaa0(longlong param_1)

{
  FUN_14099ab1d(*(undefined8 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x58));
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_14099aae6(param_1);
  return;
}



// FUNCTION 14099aae6 FUN_14099aae6 body=55 status=ok
// SIG undefined FUN_14099aae6(void)

void FUN_14099aae6(longlong *param_1)

{
  FUN_14099ab68(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14099ab1d FUN_14099ab1d body=75 status=ok
// SIG undefined FUN_14099ab1d(void)

void FUN_14099ab1d(longlong param_1,int param_2)

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



// FUNCTION 14099ab68 FUN_14099ab68 body=543 status=ok
// SIG undefined FUN_14099ab68(void)

void FUN_14099ab68(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  longlong *plVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  ulonglong uVar11;
  longlong lVar12;
  int iVar13;
  longlong lVar14;
  ulonglong uVar15;
  uint uVar16;
  ulonglong uVar17;
  
  puVar1 = (uint *)(param_1 + 2);
  iVar4 = (int)param_1[5];
  if (iVar4 == 0) {
    uVar17 = 0;
    uVar15 = 1;
    iVar13 = 0;
    iVar9 = 0;
  }
  else {
    puVar10 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar10 = puVar1;
    }
    uVar16 = *puVar10;
    if (uVar16 == 0) {
      iVar13 = iVar4 + 0x1e;
      if (-1 < iVar4 + -1) {
        iVar13 = iVar4 + -1;
      }
      uVar17 = 0;
      uVar11 = (ulonglong)(uint)(iVar13 >> 5);
      if (iVar13 >> 5 < 1) {
        uVar11 = uVar17;
      }
      iVar13 = 0;
      do {
        if (uVar11 == uVar17) goto LAB_14099ad06;
        iVar13 = iVar13 + 0x20;
        uVar16 = puVar10[uVar17 + 1];
        uVar17 = uVar17 + 1;
      } while (uVar16 == 0);
    }
    else {
      uVar17 = 0;
      iVar13 = 0;
    }
    uVar15 = (ulonglong)(-uVar16 & uVar16);
    uVar11 = uVar15 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar11 != 0) {
      for (; uVar11 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    iVar9 = (iVar13 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
    if (iVar4 <= iVar9) {
      iVar9 = iVar4;
    }
  }
  if (iVar9 < iVar4) {
    uVar16 = 0xffffffff;
    do {
      plVar5 = *(longlong **)(*param_1 + 0x20 + (longlong)iVar9 * 0x30);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar5 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar5)(plVar5);
          LOCK();
          piVar3 = (int *)((longlong)plVar5 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar5 + 0x10))(plVar5);
          }
        }
      }
      uVar16 = uVar16 & ~(uint)uVar15;
      puVar10 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar10 = puVar1;
      }
      iVar4 = (int)param_1[5];
      iVar9 = (int)uVar17;
      lVar14 = (longlong)iVar9;
      uVar6 = puVar10[lVar14] & uVar16;
      if (uVar6 == 0) {
        iVar7 = iVar4 + 0x1e;
        if (-1 < iVar4 + -1) {
          iVar7 = iVar4 + -1;
        }
        iVar7 = iVar7 >> 5;
        iVar8 = iVar7;
        if (iVar7 < iVar9) {
          iVar8 = iVar9;
        }
        if (iVar7 <= iVar9) break;
        lVar12 = 0;
        while( true ) {
          iVar13 = iVar13 + 0x20;
          uVar6 = puVar10[lVar14 + lVar12 + 1];
          if (uVar6 != 0) break;
          lVar12 = lVar12 + 1;
          if (iVar8 - lVar14 == lVar12) goto LAB_14099ad06;
        }
        uVar17 = (ulonglong)(iVar9 + (int)lVar12 + 1);
        uVar16 = 0xffffffff;
      }
      uVar15 = (ulonglong)(-uVar6 & uVar6);
      uVar11 = uVar15 * 2 + 1;
      lVar14 = 0x3f;
      if (uVar11 != 0) {
        for (; uVar11 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      iVar9 = (iVar13 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
    } while (iVar9 < iVar4);
  }
LAB_14099ad06:
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_14494313c(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar16 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (((int)uVar16 <= *(int *)((longlong)param_1 + 0x2c)) &&
     (*(int *)((longlong)param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar6 = 0x80;
  if (0x80 < (int)uVar16) {
    uVar6 = uVar16;
  }
  *(uint *)((longlong)param_1 + 0x2c) = uVar6;
  FUN_1446efbd8(puVar1,0);
  return;
}



// FUNCTION 14099ad88 FUN_14099ad88 body=58 status=ok
// SIG undefined FUN_14099ad88(void)

void FUN_14099ad88(longlong param_1)

{
  FUN_14099adc2(*(undefined8 *)(param_1 + 0x110),*(undefined4 *)(param_1 + 0x118));
  if (*(longlong *)(param_1 + 0x110) != 0) {
    FUN_1400020a8();
  }
  FUN_1409def00(param_1);
  return;
}



// FUNCTION 14099adc2 FUN_14099adc2 body=75 status=ok
// SIG undefined FUN_14099adc2(void)

void FUN_14099adc2(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 0x28);
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
      plVar4 = plVar4 + 7;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14099ae0e FUN_14099ae0e body=175 status=ok
// SIG undefined FUN_14099ae0e(void)

void FUN_14099ae0e(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  FUN_14099aebe();
  if (1 < DAT_14cad39b0 + 1U) {
    plVar2 = (longlong *)FUN_140083894();
    (**(code **)(*plVar2 + 0x50))(plVar2,param_1);
  }
  switchD_143c3d4dc::caseD_1d(param_1);
  if (*(longlong *)(param_1 + 0x2e8) != 0) {
    FUN_140191fb4(*(longlong *)(param_1 + 0x2e8),param_1);
  }
  lVar1 = *(longlong *)(param_1 + 0xc0);
  if (((lVar1 != 0) && (*(longlong *)(lVar1 + 0x30) == param_1)) &&
     (plVar2 = *(longlong **)(lVar1 + 0x218), plVar2 != (longlong *)0x0)) {
    (**(code **)(*plVar2 + 0x250))(plVar2,0);
    plVar2 = *(longlong **)(*(longlong *)(param_1 + 0xc0) + 0x218);
    (**(code **)(*plVar2 + 600))(plVar2,0);
  }
  FUN_14099af08(param_1);
  FUN_1400fb146(param_1 + 0x208,0);
  return;
}



// FUNCTION 14099aebe FUN_14099aebe body=74 status=ok
// SIG undefined FUN_14099aebe(void)

void FUN_14099aebe(undefined8 param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14cae9090);
  DAT_14cae90c0 = 0;
  DAT_14cae90b8 = param_1;
  FUN_140192130(&DAT_14cae9040,param_1);
                    /* WARNING: Could not recover jumptable at 0x00014099af01. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cae9090);
  return;
}



// FUNCTION 14099af08 FUN_14099af08 body=405 status=ok
// SIG undefined FUN_14099af08(void)

void FUN_14099af08(longlong param_1)

{
  longlong *plVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c8442bc) && (FUN_144b3d300(&DAT_14c8442bc), DAT_14c8442bc == -1)) {
      if (DAT_14c846b14 == '\0') {
        FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                      L"Attempting to get the command line but it hasn\'t been initialized yet.");
      }
      DAT_14c8442b8 = FUN_14054d46e(&DAT_14c846b20,L"nullrhi");
      _Init_thread_footer(&DAT_14c8442bc);
    }
    bVar2 = DAT_14c8442b8;
    if (DAT_14c872bf0 == '\x01') {
      if (DAT_14c872bf1 != '\x01') {
        return;
      }
      bVar2 = DAT_14c8442b8 & 1;
    }
    if ((bVar2 == 0) && (lVar6 = FUN_14099b09e(param_1,1), lVar6 == param_1)) {
      if (*(longlong *)(param_1 + 0x238) != 0) {
        FUN_147cb0ad0(*(longlong *)(param_1 + 0x238),
                      *(undefined8 *)(*(longlong *)(param_1 + 0xc0) + 0x218));
      }
      lVar6 = *(longlong *)(param_1 + 0x160);
      if (lVar6 != 0) {
        if (*(char *)(lVar6 + 8) == '\x01') {
          plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xc0) + 0x218);
          *(undefined1 *)(lVar6 + 8) = 0;
          if (plVar1 != (longlong *)0x0) {
            (**(code **)(*plVar1 + 0x1e0))(plVar1,lVar6);
          }
        }
        *(undefined8 *)(lVar6 + 0x28) = DAT_14c8464f0;
        uVar5 = DAT_14c8464e8._4_4_;
        uVar4 = (undefined4)DAT_14c8464e8;
        uVar3 = DAT_14c8464e0._4_4_;
        *(undefined4 *)(lVar6 + 0x18) = (undefined4)DAT_14c8464e0;
        *(undefined4 *)(lVar6 + 0x1c) = uVar3;
        *(undefined4 *)(lVar6 + 0x20) = uVar4;
        *(undefined4 *)(lVar6 + 0x24) = uVar5;
      }
      if (*(longlong *)(param_1 + 0x168) != 0) {
        FUN_14099b8fe(*(longlong *)(param_1 + 0x168),
                      *(undefined8 *)(*(longlong *)(param_1 + 0xc0) + 0x218));
        return;
      }
    }
  }
  return;
}



// FUNCTION 14099b09e FUN_14099b09e body=2143 status=ok
// SIG undefined FUN_14099b09e(void)

ulonglong FUN_14099b09e(ulonglong param_1,char param_2)

{
  ulonglong *puVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  ulonglong uVar7;
  int iVar8;
  longlong lVar9;
  undefined *puVar10;
  ulonglong uVar11;
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
  uVar11 = 0;
  if (param_2 != '\0') {
    uVar11 = param_1;
  }
  while( true ) {
    lVar5 = *(longlong *)(param_1 + 0xc0);
    if (DAT_14cb10130 == 0) {
      local_70 = &local_50;
      local_50 = FUN_140754f84;
      local_60 = FUN_14081d0ea;
      local_68 = FUN_14081d0ea;
      local_78 = &LAB_147da9a76;
      local_80 = FUN_1409f3105;
      local_88 = L"Engine";
      local_90 = 0;
      local_98 = 0x10000000;
      local_a0 = 8;
      local_a8 = 0x990;
      FUN_14081cfa3(L"/Script/Engine",L"World",&DAT_14cb10130,FUN_14640e230);
    }
    lVar2 = DAT_14cb10130;
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
    lVar4 = *(longlong *)(param_1 + 0x20);
    if (lVar4 == 0) {
      lVar9 = 0;
    }
    else {
      iVar8 = *(int *)(lVar2 + 0x38);
      do {
        if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < iVar8) ||
           (lVar9 = lVar4,
           *(longlong *)(*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)iVar8 * 8) !=
           lVar2 + 0x30)) {
          lVar9 = 0;
        }
      } while ((lVar9 == 0) && (lVar4 = *(longlong *)(lVar4 + 0x20), lVar4 != 0));
    }
    if ((param_1 == 0) ||
       (((lVar5 == lVar9 || (*(longlong *)(param_1 + 0xc0) == 0)) ||
        (*(ulonglong *)(*(longlong *)(param_1 + 0xc0) + 0x30) == param_1)))) goto LAB_14099b161;
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14cae9090);
    if (DAT_14cae90b8 != param_1) break;
LAB_14099b1ac:
    uVar7 = DAT_14cae90c0;
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cae9090);
    if (uVar7 == 0) goto LAB_14099b161;
    if (DAT_14cae8e78 == 0) {
      local_70 = &local_50;
      local_50 = FUN_1449e2820;
      local_60 = (code *)&LAB_1457dfdaa;
      local_68 = (code *)&LAB_14637debc;
      local_78 = &LAB_147b97a51;
      local_80 = FUN_1417ddfba;
      local_88 = L"Engine";
      local_90 = 0;
      local_98 = 0x10000008;
      local_a0 = 0x10;
      local_a8 = 0x1f0;
      FUN_14081cfa3(L"/Script/Engine",L"LevelStreamingLevelInstance",&DAT_14cae8e78,&DAT_147b97a50);
    }
    if (((*(int *)(*(longlong *)(uVar7 + 0x10) + 0x38) < *(int *)(DAT_14cae8e78 + 0x38)) ||
        (*(longlong *)
          (*(longlong *)(*(longlong *)(uVar7 + 0x10) + 0x30) +
          (longlong)*(int *)(DAT_14cae8e78 + 0x38) * 8) != DAT_14cae8e78 + 0x30)) ||
       ((plVar6 = (longlong *)FUN_1448a53de(uVar7), plVar6 == (longlong *)0x0 ||
        (lVar5 = (**(code **)(*plVar6 + 8))(plVar6), lVar5 == 0)))) {
LAB_14099b1e6:
      lVar5 = FUN_14048957e();
      if ((*(int *)(*(longlong *)(uVar7 + 0x10) + 0x38) < *(int *)(lVar5 + 0x38)) ||
         ((*(longlong *)
            (*(longlong *)(*(longlong *)(uVar7 + 0x10) + 0x30) +
            (longlong)*(int *)(lVar5 + 0x38) * 8) != lVar5 + 0x30 ||
          (lVar5 = FUN_140007850(uVar7 + 0x1d8), lVar5 == 0)))) goto LAB_14099b161;
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
      lVar2 = DAT_14cae8b20;
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
      uVar7 = *(ulonglong *)(lVar5 + 0x20);
      if (uVar7 == 0) goto LAB_14099b161;
      iVar8 = *(int *)(lVar2 + 0x38);
      do {
        if ((*(int *)(*(longlong *)(uVar7 + 0x10) + 0x38) < iVar8) ||
           (param_1 = uVar7,
           *(longlong *)(*(longlong *)(*(longlong *)(uVar7 + 0x10) + 0x30) + (longlong)iVar8 * 8) !=
           lVar2 + 0x30)) {
          param_1 = 0;
        }
      } while ((param_1 == 0) && (uVar7 = *(ulonglong *)(uVar7 + 0x20), uVar7 != 0));
    }
    else {
      if (DAT_14cac9ca8 == 0) {
        local_70 = &local_50;
        local_50 = FUN_141030f22;
        local_60 = FUN_14081d0ea;
        local_68 = FUN_14081d0ea;
        local_78 = &LAB_1478c0a72;
        local_80 = (code *)&LAB_1417b2375;
        local_88 = L"Engine";
        local_90 = 0x1000000000;
        local_98 = 0x10000004;
        local_a0 = 8;
        local_a8 = 0x390;
        FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
      }
      if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x38) < *(int *)(DAT_14cac9ca8 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) != DAT_14cac9ca8 + 0x30))
      goto LAB_14099b1e6;
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
      lVar2 = DAT_14cae8b20;
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
      uVar7 = *(ulonglong *)(lVar5 + 0x20);
      if (uVar7 == 0) goto LAB_14099b161;
      iVar8 = *(int *)(lVar2 + 0x38);
      do {
        if ((*(int *)(*(longlong *)(uVar7 + 0x10) + 0x38) < iVar8) ||
           (param_1 = uVar7,
           *(longlong *)(*(longlong *)(*(longlong *)(uVar7 + 0x10) + 0x30) + (longlong)iVar8 * 8) !=
           lVar2 + 0x30)) {
          param_1 = 0;
        }
      } while ((param_1 == 0) && (uVar7 = *(ulonglong *)(uVar7 + 0x20), uVar7 != 0));
    }
    if ((param_1 == 0) || (uVar11 = param_1, param_2 == '\0')) goto LAB_14099b161;
  }
  DAT_14cae90b8 = param_1;
  if (DAT_14cae9048 != DAT_14cae9074) {
    uVar3 = ((uint)(param_1 >> 0x14) & 0xffff ^ (uint)(param_1 >> 4)) * -0x7a143595;
    uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    puVar10 = &DAT_14cae9078;
    if (DAT_14cae9080 != (undefined *)0x0) {
      puVar10 = DAT_14cae9080;
    }
    iVar8 = *(int *)(puVar10 + (ulonglong)(DAT_14cae9088 - 1U & (uVar3 >> 0x10 ^ uVar3)) * 4);
    if (iVar8 != -1) {
      while (puVar1 = (ulonglong *)(DAT_14cae9040 + (longlong)iVar8 * 0x18), *puVar1 != param_1) {
        iVar8 = (int)puVar1[2];
        if (iVar8 == -1) goto LAB_14099b5de;
      }
      if ((puVar1 != (ulonglong *)0x0) && (puVar1 + 1 != (ulonglong *)0x0)) {
        DAT_14cae90c0 = puVar1[1];
        goto LAB_14099b1ac;
      }
    }
  }
LAB_14099b5de:
  DAT_14cae90c0 = 0;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cae9090);
LAB_14099b161:
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar11;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14099b8fe FUN_14099b8fe body=222 status=ok
// SIG undefined FUN_14099b8fe(void)

void FUN_14099b8fe(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  char cVar3;
  longlong lVar4;
  
  if (DAT_14c760e18 == '\x01') {
    if (*(char *)(param_1 + 8) == '\x01') {
      *(undefined1 *)(param_1 + 8) = 0;
      puVar1 = (undefined8 *)(param_1 + 0xc);
      cVar3 = FUN_144729dda(puVar1);
      if (((param_2 != (longlong *)0x0 && cVar3 == '\0') &&
          (lVar4 = (**(code **)(*param_2 + 0x3d0))(param_2), lVar4 != 0)) &&
         (lVar4 = (**(code **)(*param_2 + 0x3d0))(param_2), (*(uint *)(lVar4 + 8) >> 0x1e & 1) == 0)
         ) {
        (**(code **)(*param_2 + 0x3d0))();
      }
      cVar3 = FUN_144729dda(puVar1);
      if ((cVar3 != '\0') && (*puVar1 = 0, param_2 != (longlong *)0x0)) {
        (**(code **)(*param_2 + 0x1f8))(param_2,param_1);
      }
    }
    *(undefined8 *)(param_1 + 0x28) = DAT_14c8464f0;
    uVar2 = DAT_14c8464e8;
    *(undefined8 *)(param_1 + 0x18) = DAT_14c8464e0;
    *(undefined8 *)(param_1 + 0x20) = uVar2;
  }
  return;
}



// FUNCTION 14099b9ea FUN_14099b9ea body=61 status=ok
// SIG undefined FUN_14099b9ea(void)

undefined8 * FUN_14099b9ea(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a3de8d0;
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14099ba28 FUN_14099ba28 body=391 status=ok
// SIG undefined FUN_14099ba28(void)

undefined8 * FUN_14099ba28(longlong *param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (((((char)param_1[0xca] == '\x01') || (param_1[0xec] == 0)) || (param_1[0xf0] == 0)) ||
     (((param_1[0xf1] == 0 || (*(int *)(param_1[0xf1] + 8) < 1)) ||
      (lVar1 = *(longlong *)(param_1[0xec] + 0x18), lVar1 == 0)))) {
    puVar5 = (undefined8 *)0x0;
  }
  else {
    (**(code **)(*param_1 + 0xac0))(param_1);
    param_1[0xce] = 0;
    puVar5 = (undefined8 *)FUN_14001cc68(0x300,0x10);
    FUN_1406ff4f8(puVar5,param_1,0);
    *puVar5 = &PTR_FUN_14a5400e0;
    puVar5[0x56] = (double)param_1[0xe6] * 0.017453292519943295;
    uVar2 = *(undefined4 *)((longlong)param_1 + 0x68c);
    lVar4 = param_1[0xd2];
    uVar3 = *(undefined4 *)((longlong)param_1 + 0x694);
    *(int *)(puVar5 + 0x57) = (int)param_1[0xd1];
    *(undefined4 *)((longlong)puVar5 + 700) = uVar2;
    *(int *)(puVar5 + 0x58) = (int)lVar4;
    *(undefined4 *)((longlong)puVar5 + 0x2c4) = uVar3;
    puVar5[0x59] = lVar1;
    puVar5[0x5a] = param_1[0xe1];
    puVar5[0x5b] = param_1[0xe2];
    puVar5[0x5c] = 0;
    *(undefined1 *)(puVar5 + 0x5e) = *(undefined1 *)((longlong)param_1 + 0x6cc);
    *(char *)((longlong)puVar5 + 0x2f1) = (char)param_1[0xe5];
    uVar6 = (**(code **)(*param_1 + 0x7a0))(param_1);
    puVar5[0x5f] = uVar6;
    *(byte *)((longlong)puVar5 + 0x6f) = *(byte *)((longlong)puVar5 + 0x6f) & 0x7f;
    if (puVar5[0x5b] != 0) {
      FUN_14470a074(puVar5[0x5b],&local_38,*(undefined4 *)(puVar5[0x42] + 8));
      *(undefined4 *)(puVar5 + 0x5c) = local_38;
      *(undefined4 *)((longlong)puVar5 + 0x2e4) = uStack_34;
      *(undefined4 *)(puVar5 + 0x5d) = uStack_30;
      *(undefined4 *)((longlong)puVar5 + 0x2ec) = uStack_2c;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return puVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14099bbb0 FUN_14099bbb0 body=28 status=ok
// SIG undefined FUN_14099bbb0(void)

undefined8 FUN_14099bbb0(longlong param_1)

{
  FUN_14099bbec(param_1,0);
  return *(undefined8 *)(param_1 + 0x6d0);
}



// FUNCTION 14099bbec FUN_14099bbec body=770 status=ok
// SIG undefined FUN_14099bbec(void)

void FUN_14099bbec(longlong param_1,byte param_2)

{
  undefined8 *puVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  double dVar5;
  double dVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_f8 [32];
  undefined **local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined ***local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (*(char *)(param_1 + 0x650) == '\x01') {
    *(undefined8 *)(param_1 + 0x6d0) = 0;
  }
  else if ((*(longlong *)(param_1 + 0x6d0) != 0 & (param_2 ^ 1)) == 0) {
    lVar7 = FUN_14099beef(param_1);
    if ((lVar7 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar7);
    }
    *(longlong *)(param_1 + 0x6d0) = lVar7;
    *(undefined1 *)(lVar7 + 0x31) = 2;
    lVar7 = *(longlong *)(param_1 + 0x6d0);
    local_b0 = &local_d8;
    uStack_d0 = 0;
    uStack_cc = 0;
    uStack_c8 = 0;
    uStack_c4 = 1;
    uStack_c0 = CONCAT22(uStack_c0._2_2_,0x3ff);
    local_b8 = 6;
    local_d8 = &PTR_FUN_14a1e3c70;
    local_a8 = DAT_14c8464e0;
    uStack_a0 = DAT_14c8464e8;
    local_98 = DAT_14c8464f0;
    uStack_90 = (undefined4)DAT_14c8464f8;
    uStack_8c = DAT_14c8464f8._4_4_;
    uStack_88 = (undefined4)DAT_14c846500;
    uStack_84 = DAT_14c846500._4_4_;
    uStack_80 = (undefined4)DAT_14c846508;
    uStack_7c = (undefined4)((ulonglong)DAT_14c846508 >> 0x20);
    uStack_78 = 0x3f800000;
    uStack_74 = 0x3f800000;
    local_70 = 0x3f800000;
    iVar4 = *(int *)(lVar7 + 0x50);
    *(uint *)(lVar7 + 0x50) = iVar4 + 1U;
    if (*(uint *)(lVar7 + 0x54) < iVar4 + 1U) {
      FUN_140c9d5a2((longlong *)(lVar7 + 0x48),iVar4);
    }
    lVar7 = *(longlong *)(lVar7 + 0x48);
    lVar8 = (longlong)iVar4 * 0x70;
    *(undefined ***)(lVar7 + lVar8) = &PTR_FUN_14a1dee50;
    *(undefined4 *)(lVar7 + 8 + lVar8) = uStack_d0;
    *(ulonglong *)(lVar7 + 0xc + lVar8) = CONCAT44(uStack_c8,uStack_cc);
    *(undefined4 *)(lVar7 + 0x14 + lVar8) = uStack_c4;
    *(byte *)(lVar7 + 0x18 + lVar8) = *(byte *)(lVar7 + 0x18 + lVar8) & 0xfe | (byte)uStack_c0 & 1;
    *(undefined1 *)(lVar7 + 0x19 + lVar8) = uStack_c0._1_1_;
    *(undefined4 *)(lVar7 + 0x20 + lVar8) = 6;
    *(longlong *)(lVar7 + 0x28 + lVar8) = lVar7 + lVar8;
    *(undefined ***)(lVar7 + lVar8) = &PTR_FUN_14a1e3c70;
    puVar1 = (undefined8 *)(lVar7 + 0x30 + lVar8);
    *puVar1 = local_a8;
    puVar1[1] = uStack_a0;
    puVar1 = (undefined8 *)(lVar7 + 0x40 + lVar8);
    *puVar1 = local_98;
    puVar1[1] = CONCAT44(uStack_8c,uStack_90);
    puVar1 = (undefined8 *)(lVar7 + 0x50 + lVar8);
    *puVar1 = CONCAT44(uStack_84,uStack_88);
    puVar1[1] = CONCAT44(uStack_7c,uStack_80);
    puVar1 = (undefined8 *)(lVar7 + 0x5c + lVar8);
    *puVar1 = CONCAT44(uStack_78,uStack_7c);
    puVar1[1] = CONCAT44(local_70,uStack_74);
    lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x6d0) + 0x48);
    if (*(char *)(param_1 + 0x728) == '\x01') {
      dVar5 = *(double *)(param_1 + 0x730) * 0.017453292519943295;
      dVar2 = (double)*(int *)(param_1 + 0x678) / dVar5;
      dVar5 = sin(dVar5 * 0.5);
      dVar5 = dVar5 * (dVar2 + dVar2);
    }
    else {
      dVar5 = (double)*(int *)(param_1 + 0x678);
    }
    iVar4 = *(int *)(param_1 + 0x67c);
    dVar6 = (double)iVar4;
    dVar2 = *(double *)(param_1 + 0x690);
    dVar3 = *(double *)(param_1 + 0x688);
    *(undefined4 *)(lVar7 + 0x60) = 0x3c23d70a;
    *(float *)(lVar7 + 100) = (float)dVar5;
    *(float *)(lVar7 + 0x68) = (float)iVar4;
    local_d8 = DAT_14c846480;
    uStack_d0 = (undefined4)DAT_14c846488;
    uStack_cc = (undefined4)((ulonglong)DAT_14c846488 >> 0x20);
    uStack_c8 = (undefined4)DAT_14c846490;
    uStack_c4 = DAT_14c846490._4_4_;
    uStack_c0 = (undefined4)DAT_14c846498;
    uStack_bc = DAT_14c846498._4_4_;
    FUN_1448052ee(&local_d8,&local_68);
    *(undefined8 *)(lVar7 + 0x58) = local_58;
    *(undefined4 *)(lVar7 + 0x48) = local_68;
    *(undefined4 *)(lVar7 + 0x4c) = uStack_64;
    *(undefined4 *)(lVar7 + 0x50) = uStack_60;
    *(undefined4 *)(lVar7 + 0x54) = uStack_5c;
    *(undefined8 *)(lVar7 + 0x30) = 0x3fe0000000000000;
    *(double *)(lVar7 + 0x38) = dVar3 * dVar5 - dVar5 * 0.5;
    *(double *)(lVar7 + 0x40) = dVar2 * dVar6 - dVar6 * 0.5;
  }
  if ((local_50 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14099beef FUN_14099beef body=177 status=ok
// SIG undefined FUN_14099beef(void)

undefined8 FUN_14099beef(undefined8 param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
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
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  local_b8 = FUN_14099bfa2();
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
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14099bfa2 FUN_14099bfa2 body=228 status=ok
// SIG undefined FUN_14099bfa2(void)

longlong FUN_14099bfa2(void)

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
  if (DAT_14caf6798 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_145a510aa;
    local_38 = &LAB_147c48b01;
    local_40 = &LAB_140190b65;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x310;
    FUN_14081cfa3(L"/Script/Engine",L"BodySetup",&DAT_14caf6798,&DAT_147c48b00);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14caf6798;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14099c088 FUN_14099c088 body=376 status=ok
// SIG undefined FUN_14099c088(void)

void FUN_14099c088(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar2 = *(uint *)(param_1 + 200);
  if ((int)uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar2);
  }
  if (uVar2 < 9) {
    uVar6 = 8;
  }
  else {
    lVar3 = (longlong)(int)uVar2;
    if (8 < *(uint *)(param_1 + 0xcc)) {
      lVar3 = lVar3 + ((ulonglong)(lVar3 * 3) >> 3) + 0x10;
    }
    uVar4 = lVar3 * 0x18;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar6 = uVar4 + 0xf;
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar6 >> 4]];
        }
        else {
          if ((uVar6 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar1 = (&DAT_14c841e00)[uVar6 >> 4];
            uVar5 = 0x32;
            if (0x32 < bVar1) {
              uVar5 = (ulonglong)bVar1;
            }
            uVar7 = 0x32 - (ulonglong)bVar1;
            do {
              uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar7 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar7 & 0xffffffff] & 0xf) == 0) goto LAB_14099c113;
              lVar3 = uVar5 + 1 + uVar7;
              uVar7 = uVar7 - 1;
            } while (lVar3 != 0x33);
          }
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar4 & ((uVar6 & 0xfffffffffffffff0) + uVar4) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,0);
      }
    }
LAB_14099c113:
    uVar6 = 0x7fffffff;
    if ((int)uVar2 <= (int)(uVar4 / 0x18)) {
      uVar6 = uVar4 / 0x18 & 0xffffffff;
    }
  }
  *(int *)(param_1 + 0xcc) = (int)uVar6;
  FUN_14099c200(param_1,param_2,uVar6,0x18);
  return;
}



// FUNCTION 14099c200 FUN_14099c200 body=150 status=ok
// SIG undefined FUN_14099c200(void)

void FUN_14099c200(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0xc0);
  if ((uint)param_3 < 9) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x18);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0xc0,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0xc0),param_1,(longlong)param_2 * 0x18);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0xc0,param_2,param_3,param_4);
  return;
}



// FUNCTION 14099c296 FUN_14099c296 body=55 status=ok
// SIG undefined FUN_14099c296(void)

void FUN_14099c296(longlong *param_1)

{
  FUN_14099c2ce(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14099c2ce FUN_14099c2ce body=549 status=ok
// SIG undefined FUN_14099c2ce(void)

void FUN_14099c2ce(longlong *param_1,int param_2)

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
    iVar4 = 0;
    iVar10 = 0;
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
        if (uVar14 == uVar13) goto LAB_14099c430;
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
      if (*(longlong *)(lVar11 + 0x28 + (longlong)iVar4 * 0x40) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar11 + (longlong)iVar4 * 0x40) != 0) {
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
          if (iVar7 - lVar11 == lVar9) goto LAB_14099c430;
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
LAB_14099c430:
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_140b7ce44(param_1,param_2);
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



// FUNCTION 14099c4f4 FUN_14099c4f4 body=119 status=ok
// SIG undefined FUN_14099c4f4(void)

longlong * FUN_14099c4f4(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if ((((lVar1 == 0) || (lVar2 = FUN_1405621bc(), lVar2 == 0)) ||
      (*(int *)(lVar1 + 0x38) < *(int *)(lVar2 + 0x38))) ||
     ((*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
       lVar2 + 0x30 || (lVar1 = *(longlong *)(param_1 + 8), lVar1 == 0)))) {
    lVar1 = FUN_14099c56c();
    *param_2 = lVar1;
    if (lVar1 == 0) {
      return param_2;
    }
    if (DAT_14c950c29 == '\0') {
      return param_2;
    }
  }
  else {
    *param_2 = lVar1;
    if (DAT_14c950c29 != '\x01') {
      return param_2;
    }
  }
  FUN_1456cec3c(lVar1);
  return param_2;
}


