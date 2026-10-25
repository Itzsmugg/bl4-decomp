// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14103a0d2 FUN_14103a0d2 body=761 status=ok
// SIG undefined FUN_14103a0d2(void)

undefined4 FUN_14103a0d2(ulonglong param_1,longlong *param_2)

{
  ulonglong *puVar1;
  longlong lVar2;
  char cVar3;
  uint uVar4;
  ulonglong *puVar5;
  longlong *plVar6;
  ulonglong uVar7;
  uint uVar8;
  int iVar9;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined8 local_80;
  wchar_t *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  code **local_60;
  code *local_58;
  code *local_50;
  int local_48;
  undefined4 local_44;
  code *local_40;
  ulonglong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_48 = 0;
  if ((int)param_2[1] != *(int *)((longlong)param_2 + 0x34)) {
    uVar4 = ((uint)(param_1 >> 0x14) & 0xffff ^ (uint)(param_1 >> 4)) * -0x7a143595;
    uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
    plVar6 = param_2 + 7;
    if ((longlong *)param_2[8] != (longlong *)0x0) {
      plVar6 = (longlong *)param_2[8];
    }
    iVar9 = *(int *)((longlong)plVar6 +
                    (ulonglong)((int)param_2[9] - 1U & (uVar4 >> 0x10 ^ uVar4)) * 4);
    if (iVar9 != -1) {
      do {
        puVar1 = (ulonglong *)(*param_2 + (longlong)iVar9 * 0x18);
        if (*puVar1 == param_1) {
          puVar5 = puVar1 + 1;
          if (puVar5 != (ulonglong *)0x0 && puVar1 != (ulonglong *)0x0) goto LAB_14103a1f1;
          break;
        }
        iVar9 = (int)puVar1[2];
      } while (iVar9 != -1);
    }
  }
  if (DAT_14cac7648 == 0) {
    local_60 = &local_40;
    local_40 = FUN_144a7958c;
    local_50 = FUN_14081d0ea;
    local_58 = FUN_143242436;
    local_68 = &LAB_14789ef1f;
    local_70 = &LAB_1417b008f;
    local_78 = L"Engine";
    local_80 = 0x8000000000;
    local_88 = 0x10000004;
    local_90 = 0x10;
    local_98 = CONCAT44(local_98._4_4_,0x2b0);
    FUN_14081cfa3(L"/Script/Engine",L"SceneComponent",&DAT_14cac7648,FUN_146393848);
  }
  iVar9 = 0;
  if ((((*(int *)(DAT_14cac7648 + 0x38) <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x38)) &&
       (iVar9 = 0,
       *(longlong *)
        (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) +
        (longlong)*(int *)(DAT_14cac7648 + 0x38) * 8) == DAT_14cac7648 + 0x30)) &&
      (lVar2 = *(longlong *)(param_1 + 0x120), iVar9 = 0, lVar2 != 0)) &&
     (*(longlong *)(lVar2 + 0xa8) == *(longlong *)(param_1 + 0xa8))) {
    iVar9 = FUN_14103a0d2(lVar2,param_2);
    iVar9 = iVar9 + 1;
    local_48 = iVar9;
  }
  FUN_14103a70c(param_2,&local_40);
  *local_38 = param_1;
  *(int *)(local_38 + 1) = iVar9;
  *(undefined4 *)(local_38 + 2) = 0xffffffff;
  local_44 = local_40._0_4_;
  uVar4 = ((uint)(param_1 >> 0x14) & 0xffff ^ (uint)(param_1 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  uVar4 = uVar4 >> 0x10 ^ uVar4;
  local_98 = 0;
  cVar3 = FUN_14103a3cc(param_2,uVar4,local_38);
  if (cVar3 == '\0') {
    uVar8 = (int)param_2[1] - *(int *)((longlong)param_2 + 0x34);
    iVar9 = 1;
    if (3 < uVar8) {
      uVar7 = (ulonglong)(uVar8 & 0xfffffffe) + 0xf;
      lVar2 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar8 < 1) || (iVar9 <= (int)param_2[9])) {
      uVar4 = (int)param_2[9] - 1U & uVar4;
      *(uint *)((longlong)local_38 + 0x14) = uVar4;
      plVar6 = (longlong *)param_2[8];
      if ((longlong *)param_2[8] == (longlong *)0x0) {
        plVar6 = param_2 + 7;
      }
      *(undefined4 *)(local_38 + 2) =
           *(undefined4 *)
            ((longlong)plVar6 + ((longlong)(int)param_2[9] - 1U & (longlong)(int)uVar4) * 4);
      plVar6 = (longlong *)param_2[8];
      if ((longlong *)param_2[8] == (longlong *)0x0) {
        plVar6 = param_2 + 7;
      }
      *(undefined4 *)
       ((longlong)plVar6 + ((longlong)(int)param_2[9] - 1U & (longlong)(int)uVar4) * 4) = local_44;
    }
    else {
      *(int *)(param_2 + 9) = iVar9;
      FUN_14103a464(param_2);
    }
  }
  puVar5 = (ulonglong *)&local_48;
LAB_14103a1f1:
  if ((local_30 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return (int)*puVar5;
}



// FUNCTION 14103a3cc FUN_14103a3cc body=152 status=ok
// SIG undefined FUN_14103a3cc(void)

void FUN_14103a3cc(longlong *param_1,uint param_2,longlong *param_3,int *param_4,undefined1 *param_5
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
          FUN_1478c8cb6((int)lVar3,*param_4,1);
          *param_4 = iVar7;
          uVar5 = 1;
          break;
        }
        iVar7 = (int)plVar6[2];
        uVar5 = 0;
      } while (iVar7 != -1);
      goto LAB_14103a3f0;
    }
  }
  uVar5 = 0;
LAB_14103a3f0:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar5;
  }
  return;
}



// FUNCTION 14103a464 FUN_14103a464 body=679 status=ok
// SIG undefined FUN_14103a464(void)

void FUN_14103a464(longlong *param_1)

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
    if ((int)uVar7 < 1) goto LAB_14103a4c8;
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
LAB_14103a4c8:
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



// FUNCTION 14103a70c FUN_14103a70c body=476 status=ok
// SIG undefined FUN_14103a70c(void)

int * FUN_14103a70c(longlong *param_1,int *param_2)

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



// FUNCTION 14103a8e8 FUN_14103a8e8 body=887 status=ok
// SIG undefined FUN_14103a8e8(void)

void FUN_14103a8e8(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  ulonglong uVar3;
  byte *pbVar4;
  int iVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  ulonglong uVar14;
  longlong *plVar15;
  int iVar16;
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
  cVar6 = (**(code **)(*param_1 + 0x300))();
  local_a0 = param_1;
  if (cVar6 == '\0') {
    plVar1 = param_1 + 0x51;
    local_90 = (longlong *)&DAT_100000000;
    uStack_80 = (longlong *)&DAT_ffffffff;
    local_78 = (ulonglong)local_78._4_4_ << 0x20;
    local_88 = plVar1;
    if ((int)param_1[0x54] == 0) {
      uVar14 = 1;
      iVar13 = 0;
      iVar10 = 0;
      uVar12 = 0xffffffff;
      iVar9 = 0;
      iVar16 = 0;
    }
    else {
      FUN_1449c0562(&local_90);
      uVar14 = (ulonglong)local_90 >> 0x20;
      iVar13 = (int)param_1[0x54];
      iVar10 = (int)local_90;
      uVar12 = (uint)uStack_80;
      iVar9 = uStack_80._4_4_;
      iVar16 = (uint)local_78;
    }
    plVar2 = local_88;
    if (iVar9 != iVar13 || local_88 != plVar1) {
      do {
        local_a4 = iVar13;
        lVar7 = param_1[0x4f];
        lVar8 = *(longlong *)(lVar7 + 0x10 + (longlong)iVar9 * 0x20);
        if (lVar8 != 0) {
          FUN_144837e54(lVar8,0);
          lVar7 = *(longlong *)(lVar7 + (longlong)iVar9 * 0x20 + 0x10);
          pbVar4 = *(byte **)(lVar7 + 0x48);
          if (((pbVar4 != (byte *)0x0) && ((*pbVar4 & 0x6b) == 3)) &&
             (plVar15 = *(longlong **)(lVar7 + 0x30), plVar15 != (longlong *)0x0)) {
            lVar7 = (**(code **)(*plVar15 + 8))(plVar15);
            lVar8 = FUN_14103ac60();
            if (((lVar8 != 0) && (*(int *)(lVar8 + 0x38) <= *(int *)(lVar7 + 0x38))) &&
               (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) ==
                lVar8 + 0x30)) {
              (*(code *)*local_98)(local_98[1],plVar15);
            }
          }
        }
        uVar12 = uVar12 & ~(uint)uVar14;
        plVar15 = (longlong *)plVar2[2];
        if ((longlong *)plVar2[2] == (longlong *)0x0) {
          plVar15 = plVar2;
        }
        iVar13 = (int)plVar2[3];
        lVar7 = (longlong)iVar10;
        uVar11 = *(uint *)((longlong)plVar15 + lVar7 * 4) & uVar12;
        if (uVar11 == 0) {
          iVar9 = iVar13 + 0x1e;
          if (-1 < iVar13 + -1) {
            iVar9 = iVar13 + -1;
          }
          iVar9 = iVar9 >> 5;
          iVar16 = iVar16 + 0x20;
          iVar5 = iVar9;
          if (iVar9 < iVar10) {
            iVar5 = iVar10;
          }
          if (iVar10 < iVar9) {
            lVar8 = 0;
            do {
              uVar11 = *(uint *)((longlong)plVar15 + lVar8 * 4 + lVar7 * 4 + 4);
              if (uVar11 != 0) {
                iVar10 = iVar10 + (int)lVar8 + 1;
                uVar12 = 0xffffffff;
                goto LAB_14103aaaf;
              }
              iVar16 = iVar16 + 0x20;
              lVar8 = lVar8 + 1;
            } while (iVar5 - lVar7 != lVar8);
            uVar12 = 0xffffffff;
            iVar10 = iVar5;
          }
          iVar10 = iVar10 + 1;
          iVar9 = iVar13;
        }
        else {
LAB_14103aaaf:
          uVar14 = (ulonglong)(-uVar11 & uVar11);
          uVar3 = uVar14 * 2 + 1;
          lVar7 = 0x3f;
          if (uVar3 != 0) {
            for (; uVar3 >> lVar7 == 0; lVar7 = lVar7 + -1) {
            }
          }
          iVar9 = (iVar16 - ((uint)lVar7 ^ 0x3f)) + 0x3e;
          if (iVar13 <= iVar9) {
            iVar9 = iVar13;
          }
        }
        param_1 = local_a0;
        iVar13 = local_a4;
      } while (iVar9 != local_a4 || plVar2 != plVar1);
    }
  }
  else {
    plVar1 = param_1 + 0x39;
    plVar2 = param_1 + 0x3b;
    local_68 = (longlong *)&DAT_100000000;
    local_58 = 0xffffffff;
    uStack_50 = 0;
    plStack_60 = plVar2;
    if ((int)param_1[0x3e] == 0) {
      iVar13 = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      iVar13 = (int)local_a0[0x3e];
    }
    uStack_70 = CONCAT44(uStack_4c,uStack_50);
    local_78 = local_58;
    lVar7 = local_78;
    local_88 = local_68;
    uStack_80 = plStack_60;
    local_78._4_4_ = (uint)((ulonglong)local_58 >> 0x20);
    iVar10 = local_78._4_4_;
    local_90 = plVar1;
    if ((local_78._4_4_ != iVar13) || (local_78 = lVar7, plStack_60 != plVar2)) {
      do {
        local_78 = lVar7;
        plVar15 = *(longlong **)(*local_90 + 0x10 + (longlong)iVar10 * 0x20);
        if (plVar15 != (longlong *)0x0) {
          lVar7 = (**(code **)(*plVar15 + 8))(plVar15);
          lVar8 = FUN_14103ac60();
          if (((lVar8 != 0) && (*(int *)(lVar8 + 0x38) <= *(int *)(lVar7 + 0x38))) &&
             (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) ==
              lVar8 + 0x30)) {
            (*(code *)*local_98)(local_98[1],plVar15);
          }
        }
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
        FUN_1449c0562(&local_88);
        iVar10 = local_78._4_4_;
        lVar7 = local_78;
      } while (local_90 != plVar1 || (uStack_80 != plVar2 || local_78._4_4_ != iVar13));
    }
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14103ac60 FUN_14103ac60 body=57 status=ok
// SIG undefined FUN_14103ac60(void)

void FUN_14103ac60(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba8e48 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba8e48 = FUN_140002ddd(FUN_1465d1eea,uVar1,L"OakCinematicPlayerAnimDef");
  }
  return;
}



// FUNCTION 14103ac9a FUN_14103ac9a body=67 status=ok
// SIG undefined FUN_14103ac9a(void)

void FUN_14103ac9a(longlong *param_1,undefined8 param_2)

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



// FUNCTION 14103acde FUN_14103acde body=36 status=ok
// SIG undefined FUN_14103acde(void)

undefined8 FUN_14103acde(undefined8 *param_1,undefined8 param_2)

{
  FUN_14103ad02(param_2,*param_1,param_1[1],param_1[2]);
  return param_2;
}



// FUNCTION 14103ad02 FUN_14103ad02 body=869 status=ok
// SIG undefined FUN_14103ad02(void)

undefined8 FUN_14103ad02(undefined8 param_1,longlong param_2,longlong param_3,longlong param_4)

{
  ulonglong uVar1;
  longlong *plVar2;
  ulonglong uVar3;
  wchar_t *pwVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  undefined1 auStack_b8 [32];
  undefined2 *local_98;
  undefined2 *local_88;
  int local_80;
  undefined2 *local_78;
  int local_70;
  undefined2 *local_68;
  int local_60;
  undefined2 *local_58;
  int local_50;
  longlong local_48;
  longlong local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_48 = param_4;
  local_40 = param_3;
  local_38 = param_2;
  if (param_3 != 0) {
    FUN_1400021e4(&local_40);
    if ((longlong)local_50 != 0) {
      uVar1 = (longlong)local_50 * 2;
      uVar3 = 0;
      do {
        if (*(short *)((longlong)local_58 + uVar3) == 0x2e) {
          if ((int)(~uVar3 >> 1) != 0) goto LAB_14103af30;
          break;
        }
        uVar3 = uVar3 + 2;
      } while (uVar1 != uVar3);
      uVar3 = 0;
      do {
        if (*(short *)((longlong)local_58 + uVar3) == 0x3a) {
          if ((int)(~uVar3 >> 1) != 0) goto LAB_14103af30;
          break;
        }
        uVar3 = uVar3 + 2;
      } while (uVar1 != uVar3);
    }
    if (param_4 == 0) {
      FUN_1400021e4(&local_38,&local_68);
      puVar7 = &DAT_149dfb77a;
      if (local_60 != 0) {
        puVar7 = local_68;
      }
      FUN_1400021e4(&local_40,&local_78);
      puVar5 = &DAT_149dfb77a;
      if (local_70 != 0) {
        puVar5 = local_78;
      }
      pwVar4 = L"%s:%s";
      goto LAB_14103aff9;
    }
    FUN_1400021e4(&local_38,&local_68);
    puVar7 = &DAT_149dfb77a;
    if (local_60 != 0) {
      puVar7 = local_68;
    }
    FUN_1400021e4(&local_40,&local_78);
    puVar5 = &DAT_149dfb77a;
    if (local_70 != 0) {
      puVar5 = local_78;
    }
    FUN_1400021e4(&local_48,&local_88);
    puVar6 = &DAT_149dfb77a;
    if (local_80 != 0) {
      puVar6 = local_88;
    }
    pwVar4 = L"%s.%s:%s";
    local_98 = puVar7;
    goto LAB_14103aee0;
  }
  if (param_4 == 0) {
    plVar2 = &local_38;
  }
  else {
    if (param_2 != 0) {
      FUN_1400021e4(&local_38,&local_58);
      puVar7 = &DAT_149dfb77a;
      if (local_50 != 0) {
        puVar7 = local_58;
      }
      FUN_1400021e4(&local_48,&local_68);
      puVar5 = &DAT_149dfb77a;
      if (local_60 != 0) {
        puVar5 = local_68;
      }
      FUN_140002266(param_1,L"%s.%s",puVar5,puVar7);
      goto LAB_14103adb2;
    }
    plVar2 = &local_48;
  }
  FUN_1400021e4(plVar2,param_1);
  goto LAB_14103add0;
LAB_14103af30:
  if (param_4 == 0) {
    FUN_1400021e4(&local_38,&local_68);
    puVar7 = &DAT_149dfb77a;
    if (local_60 != 0) {
      puVar7 = local_68;
    }
    FUN_1400021e4(&local_40,&local_78);
    puVar5 = &DAT_149dfb77a;
    if (local_70 != 0) {
      puVar5 = local_78;
    }
    pwVar4 = L"%s.%s";
LAB_14103aff9:
    FUN_140002266(param_1,pwVar4,puVar5,puVar7);
  }
  else {
    FUN_1400021e4(&local_38,&local_68);
    puVar7 = &DAT_149dfb77a;
    if (local_60 != 0) {
      puVar7 = local_68;
    }
    FUN_1400021e4(&local_40,&local_78);
    puVar5 = &DAT_149dfb77a;
    if (local_70 != 0) {
      puVar5 = local_78;
    }
    FUN_1400021e4(&local_48,&local_88);
    puVar6 = &DAT_149dfb77a;
    if (local_80 != 0) {
      puVar6 = local_88;
    }
    pwVar4 = L"%s.%s.%s";
    local_98 = puVar7;
LAB_14103aee0:
    FUN_140002266(param_1,pwVar4,puVar6,puVar5);
    if (local_88 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if (local_78 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
LAB_14103adb2:
  if (local_68 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
LAB_14103add0:
  FUN_1447a1747(0,0);
  if ((local_30 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14103b068 FUN_14103b068 body=40 status=ok
// SIG undefined FUN_14103b068(void)

undefined8 FUN_14103b068(undefined8 param_1,int param_2)

{
  FUN_14103b090();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14103b090 FUN_14103b090 body=515 status=ok
// SIG undefined FUN_14103b090(void)

void FUN_14103b090(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b27cd40;
  param_1[5] = &PTR_FUN_14b27d000;
  if (param_1[0x2e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2a] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0x24];
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
  if (param_1[0x20] != 0) {
    FUN_1400020a8();
  }
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
  if (param_1[0x1b] != 0) {
    FUN_1400020a8();
  }
  FUN_14057bb47(param_1[0x18],*(undefined4 *)(param_1 + 0x19));
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  FUN_14057bb47(param_1[0x16],*(undefined4 *)(param_1 + 0x17));
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  FUN_14103b2dc(param_1[0x14],*(undefined4 *)(param_1 + 0x15));
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  FUN_14103b327(param_1[0xf],*(undefined4 *)(param_1 + 0x10));
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  FUN_14103b293(param_1[0xd],*(undefined4 *)(param_1 + 0xe));
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0xb];
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
  FUN_14071fe68(param_1);
  return;
}



// FUNCTION 14103b293 FUN_14103b293 body=73 status=ok
// SIG undefined FUN_14103b293(void)

void FUN_14103b293(longlong param_1,int param_2)

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



// FUNCTION 14103b2dc FUN_14103b2dc body=75 status=ok
// SIG undefined FUN_14103b2dc(void)

void FUN_14103b2dc(longlong param_1,int param_2)

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



// FUNCTION 14103b327 FUN_14103b327 body=77 status=ok
// SIG undefined FUN_14103b327(void)

void FUN_14103b327(longlong param_1,int param_2)

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



// FUNCTION 14103b374 FUN_14103b374 body=169 status=ok
// SIG undefined FUN_14103b374(void)

void FUN_14103b374(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  
  iVar3 = *(int *)(param_1 + 0x9f8);
  if ((longlong)iVar3 != 0) {
    lVar5 = *(longlong *)(param_1 + 0x9f0);
    lVar9 = 0;
    do {
      uVar6 = *(undefined8 *)(lVar5 + 8 + lVar9);
      plVar7 = *(longlong **)(lVar5 + 0x10 + lVar9);
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
        UNLOCK();
      }
      iVar4 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar4 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar4 + 1U) {
        FUN_14103b41e(param_2,iVar4);
      }
      lVar8 = *param_2;
      *(undefined8 *)(lVar8 + (longlong)iVar4 * 0x10) = uVar6;
      *(longlong **)(lVar8 + 8 + (longlong)iVar4 * 0x10) = plVar7;
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
      lVar9 = lVar9 + 0x80;
    } while ((longlong)iVar3 * 0x80 != lVar9);
  }
  return;
}



// FUNCTION 14103b41e FUN_14103b41e body=269 status=ok
// SIG undefined FUN_14103b41e(void)

void FUN_14103b41e(longlong param_1,int param_2)

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



// FUNCTION 14103b52c FUN_14103b52c body=105 status=ok
// SIG undefined FUN_14103b52c(void)

void FUN_14103b52c(longlong param_1)

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
        (**(code **)(param_1 + 0x28))(*(undefined8 *)(param_1 + 0x18),*(undefined1 *)(param_1 + 8));
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
                    /* WARNING: Could not recover jumptable at 0x00014103b591. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014103b575. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))(0,*(undefined1 *)(param_1 + 8));
  return;
}



// FUNCTION 14103b596 FUN_14103b596 body=232 status=ok
// SIG undefined FUN_14103b596(void)

void FUN_14103b596(longlong param_1,byte param_2)

{
  uint uVar1;
  longlong lVar2;
  byte bVar3;
  bool bVar4;
  undefined1 auStack_58 [60];
  undefined1 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (((((*(int *)(param_1 + 0x1c) != 0) && (uVar1 = *(uint *)(param_1 + 0x18), -1 < (int)uVar1)) &&
       ((int)uVar1 < DAT_14c9647dc)) &&
      ((lVar2 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar2 != 0 &&
       (*(int *)(lVar2 + 0x10) == *(int *)(param_1 + 0x1c))))) &&
     ((*(uint *)(lVar2 + 8) & 0x10200000) == 0)) {
    if (*(longlong *)(param_1 + 0x20) == 0) {
      bVar4 = false;
    }
    else {
      bVar4 = (*(byte *)(*(longlong *)(param_1 + 0x20) + 0x28) & 2) == 0;
    }
    if (*(longlong *)(param_1 + 0x30) == 0) {
      bVar3 = 0;
    }
    else {
      bVar3 = (*(byte *)(*(longlong *)(param_1 + 0x30) + 0x28) & 2) >> 1;
    }
    if ((!bVar4 && param_2 == 0) && (bVar3 == 0)) {
      param_2 = *(byte *)(param_1 + 0x108) & 1;
    }
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58);
    }
    local_1c = 0;
    FUN_14103b778(param_1);
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14103b690 FUN_14103b690 body=102 status=ok
// SIG undefined FUN_14103b690(void)

void FUN_14103b690(longlong param_1,char param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  
  lVar3 = *(longlong *)(param_1 + 0xe0);
  if (lVar3 != 0) {
    plVar4 = *(longlong **)(param_1 + 0xe8);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    if (param_2 == '\0') {
      FUN_1410c9a0e(lVar3,0);
    }
    else {
      FUN_14103b6f6(lVar3,1);
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
                    /* WARNING: Could not recover jumptable at 0x00014103b6e9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar4 + 0x10))(plVar4);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 14103b6f6 FUN_14103b6f6 body=129 status=ok
// SIG undefined FUN_14103b6f6(void)

void FUN_14103b6f6(longlong param_1,undefined4 param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((*(char *)(param_1 + 0xa0) == '\0') &&
     (plVar2 = *(longlong **)(param_1 + 0x38), plVar2 != (longlong *)0x0)) {
    uVar1 = FUN_1407ca880();
    plVar2 = (longlong *)(**(code **)(*plVar2 + 0x288))(plVar2,uVar1);
    if (plVar2 != (longlong *)0x0) {
      uVar1 = FUN_1407ca880();
      plVar3 = (longlong *)FUN_144718840(plVar2,uVar1);
      if ((plVar2 != plVar3) && (plVar3 != (longlong *)0x0)) {
        lVar4 = (**(code **)(*plVar3 + 0x50))(plVar3);
        if (lVar4 != 0) {
          FUN_140c4a7e8(lVar4,*(undefined1 *)(param_1 + 0x40),param_2);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 14103b778 FUN_14103b778 body=2135 status=ok
// SIG undefined FUN_14103b778(void)

undefined8 FUN_14103b778(longlong *param_1,undefined4 *param_2,char param_3)

{
  int *piVar1;
  uint uVar2;
  longlong ****pppplVar3;
  code *pcVar4;
  longlong *plVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong ****pppplVar12;
  longlong ******pppppplVar13;
  int iVar14;
  int iVar15;
  longlong lVar16;
  undefined8 uVar17;
  longlong ****pppplVar18;
  uint uVar19;
  undefined8 *puVar20;
  bool bVar21;
  undefined1 auStack_e8 [32];
  longlong *****local_c8;
  undefined1 local_c0;
  longlong local_b8;
  longlong *local_b0;
  longlong *****local_a8;
  ulonglong uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  longlong local_68;
  ulonglong uStack_60;
  undefined4 local_54;
  char local_50;
  undefined8 local_4c;
  byte local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (((param_1[0x1c] != 0) && (*(char *)(param_1[0x1c] + 0xa0) == '\0')) ||
     (*(int *)((longlong)param_1 + 0x1c) == 0)) goto LAB_14103b7b6;
  uVar2 = *(uint *)(param_1 + 3);
  uVar11 = 0;
  if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_14103b7b8;
  plVar9 = (longlong *)
           ((ulonglong)((uVar2 & 0xffff) * 0x18) +
           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
  if (((plVar9 != (longlong *)0x0) &&
      (((int)plVar9[2] == *(int *)((longlong)param_1 + 0x1c) &&
       ((*(uint *)(plVar9 + 1) & 0x10200000) == 0)))) && (lVar16 = *plVar9, lVar16 != 0)) {
    if (*(char *)(param_2 + 4) == '\x01') {
      local_50 = *(char *)(param_2 + 1);
      if (local_50 == '\x01') {
        local_54 = *param_2;
      }
      local_4c = *(undefined8 *)(param_2 + 2);
      local_44 = 1;
    }
    else {
      FUN_140ed0ac8(param_1,&local_54);
    }
    if (((local_44 & 1) != 0) && (iVar14 = local_4c._4_4_, local_4c._4_4_ != 0)) {
      uVar2 = (uint)local_4c;
      uVar11 = 0;
      if (((int)(uint)local_4c < 0) || (uVar11 = 0, DAT_14c9647dc <= (int)(uint)local_4c))
      goto LAB_14103b7b8;
      uVar19 = (uint)local_4c >> 0x10;
      uVar7 = (uint)local_4c & 0xffff;
      lVar10 = (ulonglong)(uVar7 * 0x18) + *(longlong *)(DAT_14c9647c8 + (ulonglong)uVar19 * 8);
      if (((lVar10 == 0) || (*(int *)(lVar10 + 0x10) != local_4c._4_4_)) ||
         ((*(uint *)(lVar10 + 8) & 0x10200000) != 0)) goto LAB_14103b7b6;
      if (param_3 == '\0') {
        uVar11 = (**(code **)(*(longlong *)(lVar16 + 0x10e0) + 0x50))();
        if ((((int)uVar2 < DAT_14c9647dc) &&
            (puVar20 = (undefined8 *)
                       ((ulonglong)(uVar7 * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)uVar19 * 8)),
            puVar20 != (undefined8 *)0x0)) &&
           ((*(int *)(puVar20 + 2) == iVar14 && ((*(uint *)(puVar20 + 1) & 0x10200000) == 0)))) {
          plVar9 = (longlong *)*puVar20;
        }
        else {
          plVar9 = (longlong *)0x0;
        }
        if ((char)plVar9[8] == '\x01') {
          local_a8 = (longlong *****)plVar9[7];
        }
        else {
          (**(code **)(*plVar9 + 0x2e8))(plVar9,&local_a8);
        }
        cVar6 = FUN_14103bfd0(uVar11,&local_a8);
        if (cVar6 != '\0') goto LAB_14103b7b6;
        iVar14 = local_4c._4_4_;
      }
      uVar11 = (**(code **)(*(longlong *)(lVar16 + 0x10e0) + 0x50))(lVar16 + 0x10e0);
      local_88 = 0;
      uStack_70 = 0;
      local_68 = 0;
      uStack_60 = 0;
      local_98 = 0;
      uStack_90 = 0;
      local_a8 = (longlong *****)0x0;
      uStack_a0 = 0;
      uStack_80 = 0x8000000000;
      local_78 = 0xffffffff;
      if (iVar14 == 0) {
LAB_14103bdf7:
        uVar17 = 0;
      }
      else {
        uVar17 = 0;
        if ((-1 < (int)(uint)local_4c) && ((int)(uint)local_4c < DAT_14c9647dc)) {
          puVar20 = (undefined8 *)
                    ((ulonglong)(((uint)local_4c & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)((uint)local_4c >> 0x10) * 8));
          if ((puVar20 == (undefined8 *)0x0) ||
             ((*(int *)(puVar20 + 2) != iVar14 || ((*(uint *)(puVar20 + 1) & 0x10200000) != 0))))
          goto LAB_14103bdf7;
          uVar17 = *puVar20;
        }
      }
      local_c8 = (longlong *****)&local_a8;
      local_c0 = 1;
      FUN_14096dfee(uVar11,&local_b8,uVar17,0);
      plVar5 = local_b0;
      param_1[0x1c] = local_b8;
      local_b8 = 0;
      plVar9 = (longlong *)param_1[0x1d];
      if (local_b0 == plVar9) {
LAB_14103be73:
        plVar9 = local_b0;
        if (local_b0 != (longlong *)0x0) {
          LOCK();
          plVar5 = local_b0 + 1;
          *(int *)plVar5 = (int)*plVar5 + -1;
          UNLOCK();
          if ((int)*plVar5 == 0) {
            (**(code **)*local_b0)(local_b0);
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
      else {
        local_b0 = (longlong *)0x0;
        param_1[0x1d] = (longlong)plVar5;
        if (plVar9 != (longlong *)0x0) {
          LOCK();
          plVar5 = plVar9 + 1;
          *(int *)plVar5 = (int)*plVar5 + -1;
          UNLOCK();
          if ((int)*plVar5 == 0) {
            (**(code **)*plVar9)(plVar9);
            LOCK();
            piVar1 = (int *)((longlong)plVar9 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar9 + 0x10))(plVar9);
            }
          }
          goto LAB_14103be73;
        }
      }
      uStack_60 = uStack_60 & 0xffffffff00000000;
      if (local_68 != 0) {
        FUN_1400020a8();
      }
      FUN_140333f4e(&local_a8);
      lVar16 = param_1[0x1c];
      if (lVar16 != 0) {
        if (local_50 == '\x01') {
          uStack_90 = CONCAT62(uStack_90._2_6_,4);
          local_a8 = (longlong *****)CONCAT44(local_a8._4_4_,1);
          local_88 = CONCAT71(local_88._1_7_,1);
          FUN_1446ddc76(&local_b8,"UsesMoratorium",1);
          FUN_1408834b4(lVar16,&local_b8,&local_a8);
          pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)(byte)local_88 * 0x120));
          if (pcVar4 != (code *)0x0) {
            pppppplVar13 = &local_a8;
            if (0x18 < (ushort)uStack_90) {
              pppppplVar13 = (longlong ******)local_a8;
            }
            (*pcVar4)(pppppplVar13);
          }
          if (0x18 < (ushort)uStack_90) {
            FUN_1400020a8(local_a8);
          }
          lVar16 = param_1[0x1c];
          uStack_90 = CONCAT62(uStack_90._2_6_,4);
          local_a8 = (longlong *****)CONCAT44(local_a8._4_4_,local_54);
          local_88 = CONCAT71(local_88._1_7_,3);
          FUN_1446ddc76(&local_b8,"Moratorium",1);
          FUN_1408834b4(lVar16,&local_b8,&local_a8);
          pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)(byte)local_88 * 0x120));
          if (pcVar4 != (code *)0x0) {
            pppppplVar13 = &local_a8;
            if (0x18 < (ushort)uStack_90) {
              pppppplVar13 = (longlong ******)local_a8;
            }
            (*pcVar4)(pppppplVar13);
          }
          if (0x18 < (ushort)uStack_90) {
            FUN_1400020a8(local_a8);
          }
          lVar16 = param_1[0x1c];
        }
        local_a8 = (longlong *****)0x0;
        uStack_a0 = uStack_a0 & 0xffffffff00000000;
        FUN_1446efa72(&local_a8,0,3,0x10);
        uStack_a0 = CONCAT44(uStack_a0._4_4_,3);
        pppplVar12 = (longlong ****)param_1[1];
        if (pppplVar12 == (longlong ****)0x0) {
LAB_14103be06:
          *local_a8 = (longlong ****)&PTR_LAB_14b3e9c20;
          LOCK();
          UNLOCK();
          pppplVar12 = (longlong ****)(DAT_14c758608 + 1);
          lVar10 = DAT_14c758608 + 1;
          if (pppplVar12 == (longlong ****)0x0) {
            LOCK();
            UNLOCK();
            pppplVar12 = (longlong ****)(DAT_14c758608 + 2);
            lVar10 = DAT_14c758608 + 2;
          }
          DAT_14c758608 = lVar10;
          local_a8[2] = pppplVar12;
          *local_a8 = (longlong ****)&PTR_FUN_14b99bea0;
          local_a8[3] = (longlong ****)0x0;
          local_a8[4] = (longlong ****)0x0;
          local_a8[5] = (longlong ****)FUN_14115c04a;
        }
        else {
          iVar14 = *(int *)(pppplVar12 + 1);
          do {
            if (iVar14 == 0) goto LAB_14103be06;
            LOCK();
            iVar8 = *(int *)(pppplVar12 + 1);
            bVar21 = iVar14 == iVar8;
            if (bVar21) {
              *(int *)(pppplVar12 + 1) = iVar14 + 1;
              iVar8 = iVar14;
            }
            iVar14 = iVar8;
            UNLOCK();
          } while (!bVar21);
          pppplVar3 = (longlong ****)*param_1;
          LOCK();
          *(int *)(pppplVar12 + 1) = *(int *)(pppplVar12 + 1) + 1;
          UNLOCK();
          LOCK();
          *(int *)(pppplVar12 + 1) = *(int *)(pppplVar12 + 1) + 1;
          UNLOCK();
          *local_a8 = (longlong ****)&PTR_LAB_14b3e9c20;
          LOCK();
          UNLOCK();
          pppplVar18 = (longlong ****)(DAT_14c758608 + 1);
          lVar10 = DAT_14c758608 + 1;
          if (pppplVar18 == (longlong ****)0x0) {
            LOCK();
            UNLOCK();
            pppplVar18 = (longlong ****)(DAT_14c758608 + 2);
            lVar10 = DAT_14c758608 + 2;
          }
          DAT_14c758608 = lVar10;
          local_a8[2] = pppplVar18;
          *local_a8 = (longlong ****)&PTR_FUN_14b99bea0;
          local_a8[3] = pppplVar3;
          local_a8[4] = pppplVar12;
          LOCK();
          *(int *)((longlong)pppplVar12 + 0xc) = *(int *)((longlong)pppplVar12 + 0xc) + 1;
          UNLOCK();
          local_a8[5] = (longlong ****)FUN_14115c04a;
          LOCK();
          pppplVar3 = pppplVar12 + 1;
          *(int *)pppplVar3 = *(int *)pppplVar3 + -1;
          UNLOCK();
          if (*(int *)pppplVar3 == 0) {
            (*(code *)**pppplVar12)(pppplVar12);
            LOCK();
            piVar1 = (int *)((longlong)pppplVar12 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (*(code *)(*pppplVar12)[2])(pppplVar12);
            }
          }
          LOCK();
          pppplVar3 = pppplVar12 + 1;
          *(int *)pppplVar3 = *(int *)pppplVar3 + -1;
          UNLOCK();
          if (*(int *)pppplVar3 == 0) {
            (*(code *)**pppplVar12)(pppplVar12);
            LOCK();
            piVar1 = (int *)((longlong)pppplVar12 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (*(code *)(*pppplVar12)[2])(pppplVar12);
            }
          }
          LOCK();
          pppplVar3 = pppplVar12 + 1;
          *(int *)pppplVar3 = *(int *)pppplVar3 + -1;
          UNLOCK();
          if (*(int *)pppplVar3 == 0) {
            (*(code *)**pppplVar12)(pppplVar12);
            LOCK();
            piVar1 = (int *)((longlong)pppplVar12 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (*(code *)(*pppplVar12)[2])(pppplVar12);
            }
          }
        }
        if (((int)uStack_a0 == 0) || (local_a8 == (longlong *****)0x0)) {
LAB_14103bf2d:
          if ((int)uStack_a0 == 0) goto LAB_14103bc2c;
          if (local_a8 != (longlong *****)0x0) {
            (*(code *)**local_a8)(local_a8,0);
            FUN_1446efa72(&local_a8,0,0,0x10);
            goto LAB_14103bc1f;
          }
        }
        else {
          cVar6 = (*(code *)(*local_a8)[6])();
          if (cVar6 == '\0') {
            goto LAB_14103bf2d;
          }
          plVar9 = (longlong *)(lVar16 + 0x18);
          if (*(int *)(lVar16 + 0x2c) < 1) {
            iVar14 = *(int *)(lVar16 + 0x20);
            iVar8 = *(int *)(lVar16 + 0x28) + -1;
            *(int *)(lVar16 + 0x28) = iVar8;
            if (iVar8 <= iVar14) {
              iVar8 = iVar14;
              if (0 < iVar14) {
                iVar15 = 0;
                do {
                  if (((*(int *)(*plVar9 + 8 + (longlong)iVar15 * 0x10) == 0) ||
                      (plVar5 = *(longlong **)(*plVar9 + (longlong)iVar15 * 0x10),
                      plVar5 == (longlong *)0x0)) ||
                     (cVar6 = (**(code **)(*plVar5 + 0x28))(), cVar6 != '\0')) {
                    FUN_14005b288(plVar9,iVar15);
                    FUN_14005b248(plVar9);
                  }
                  else {
                    iVar15 = iVar15 + 1;
                  }
                  iVar8 = *(int *)(lVar16 + 0x20);
                } while (iVar15 < iVar8);
              }
              iVar15 = 2;
              if (2 < iVar8 * 2) {
                iVar15 = iVar8 * 2;
              }
              *(int *)(lVar16 + 0x28) = iVar15;
              if ((iVar15 < iVar14) && (*(int *)(lVar16 + 0x24) != iVar8)) {
                FUN_14045812c();
              }
            }
          }
          if (((int)uStack_a0 != 0) && (local_a8 != (longlong *****)0x0)) {
            (*(code *)(*local_a8)[7])(local_a8,&local_b8);
          }
          iVar14 = *(int *)(lVar16 + 0x20);
          *(uint *)(lVar16 + 0x20) = iVar14 + 1U;
          if (*(uint *)(lVar16 + 0x24) < iVar14 + 1U) {
            FUN_1447a71f6(plVar9,iVar14);
          }
          lVar16 = *plVar9;
          lVar10 = (longlong)iVar14 * 0x10;
          *(undefined8 *)(lVar16 + lVar10) = 0;
          *(undefined4 *)(lVar16 + 8 + lVar10) = 0;
          *(longlong ******)(lVar16 + lVar10) = local_a8;
          local_a8 = (longlong *****)0x0;
          *(int *)(lVar16 + 8 + lVar10) = (int)uStack_a0;
LAB_14103bc1f:
          uStack_a0 = uStack_a0 & 0xffffffff00000000;
LAB_14103bc2c:
          if (local_a8 != (longlong *****)0x0) {
            FUN_1400020a8();
          }
        }
        if (param_1[0x1c] == 0) {
          bVar21 = false;
        }
        else {
          bVar21 = *(char *)(param_1[0x1c] + 0xa0) == '\0';
        }
        FUN_14115c0bc(param_1,bVar21);
        uVar11 = 1;
        goto LAB_14103b7b8;
      }
    }
  }
LAB_14103b7b6:
  uVar11 = 0;
LAB_14103b7b8:
  if ((local_40 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar11;
}



// FUNCTION 14103bfd0 FUN_14103bfd0 body=150 status=ok
// SIG undefined FUN_14103bfd0(void)

undefined8 FUN_14103bfd0(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = *(int *)(param_1 + 0x48);
  if ((longlong)iVar1 != 0) {
    lVar2 = *param_2;
    lVar3 = *(longlong *)(param_1 + 0x40);
    lVar7 = 0;
    do {
      lVar4 = *(longlong *)(lVar3 + lVar7);
      if (lVar4 != 0) {
        plVar6 = *(longlong **)(lVar4 + 0x30);
        if ((char)plVar6[8] == '\x01') {
          plVar6 = plVar6 + 7;
        }
        else {
          (**(code **)(*plVar6 + 0x2e8))(plVar6,&local_38);
          plVar6 = &local_38;
        }
        if (*plVar6 == lVar2) {
          uVar5 = 1;
          goto LAB_14103c040;
        }
      }
      lVar7 = lVar7 + 0x10;
    } while ((longlong)iVar1 * 0x10 != lVar7);
  }
  uVar5 = 0;
LAB_14103c040:
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 14103c068 FUN_14103c068 body=55 status=ok
// SIG undefined FUN_14103c068(void)

void FUN_14103c068(longlong *param_1)

{
  FUN_14103c15e(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14103c0a0 FUN_14103c0a0 body=190 status=ok
// SIG undefined FUN_14103c0a0(void)

undefined8 FUN_14103c0a0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_1 == 0) {
    return 0;
  }
  if ((*(uint *)(param_1 + 8) >> 0x1e & 1) != 0) {
    return 0;
  }
  if ((*(uint *)(param_1 + 8) >> 0x1e & 1) != 0) {
    return 0;
  }
  lVar2 = *(longlong *)(param_1 + 0x30);
  if (lVar2 != 0) {
    if ((*(uint *)(lVar2 + 8) >> 0x1e & 1) != 0) {
      return 0;
    }
    lVar1 = FUN_14019a418(lVar2 + 0x2c0);
    if (lVar1 == 0) {
      lVar2 = *(longlong *)(lVar2 + 0x20);
      if (lVar2 == 0) {
        return 0;
      }
      lVar1 = FUN_144a7757c();
      if (*(int *)(*(longlong *)(lVar2 + 0x10) + 0x38) < *(int *)(lVar1 + 0x38)) {
        return 0;
      }
      if (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
           ) != lVar1 + 0x30) {
        return 0;
      }
      lVar2 = *(longlong *)(lVar2 + 0x30);
    }
    else {
      lVar2 = (**(code **)(*(longlong *)(lVar1 + 0x28) + 0x78))(lVar1 + 0x28);
      lVar2 = *(longlong *)(lVar2 + 0x30);
    }
    if (((lVar2 != 0) && (*(longlong *)(lVar2 + 0x2b0) != 0)) &&
       (lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0x2b0) + 0x3f0), lVar2 != 0)) {
      return *(undefined8 *)(lVar2 + 0xd0);
    }
    return 0;
  }
  return 0;
}



// FUNCTION 14103c15e FUN_14103c15e body=544 status=ok
// SIG undefined FUN_14103c15e(void)

void FUN_14103c15e(longlong *param_1,int param_2)

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
      FUN_14103c380(*(undefined8 *)(lVar11 + 0x48 + lVar10),*(undefined4 *)(lVar11 + 0x50 + lVar10))
      ;
      if (*(longlong *)(lVar11 + 0x48 + lVar10) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar11 + 0x28 + lVar10) != 0) {
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
          if (iVar3 - lVar11 == lVar10) goto LAB_14103c2eb;
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
LAB_14103c2eb:
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



// FUNCTION 14103c380 FUN_14103c380 body=40 status=ok
// SIG undefined FUN_14103c380(void)

void FUN_14103c380(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1449db362(param_1);
    param_1 = param_1 + 0x10;
  }
  return;
}



// FUNCTION 14103c3a8 FUN_14103c3a8 body=137 status=ok
// SIG undefined FUN_14103c3a8(void)

void FUN_14103c3a8(longlong param_1,uint param_2,longlong param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  lVar1 = *(longlong *)(param_1 + 8);
  iVar2 = *(int *)(param_3 + 0x10);
  *(uint *)(param_3 + 0x10) = iVar2 + 1U;
  if (*(uint *)(param_3 + 0x14) < iVar2 + 1U) {
    FUN_14103c432((longlong *)(param_3 + 8),iVar2);
  }
  *(undefined1 *)(*(longlong *)(param_3 + 8) + (longlong)iVar2) =
       *(undefined1 *)(lVar1 + (int)param_2);
  iVar2 = *(int *)(param_1 + 0x10);
  iVar3 = ~param_2 + iVar2;
  if (iVar3 != 0) {
    iVar4 = 1;
    if (iVar3 < 1) {
      iVar4 = iVar3;
    }
    memmove((void *)((longlong)(int)param_2 + *(longlong *)(param_1 + 8)),
            (void *)((longlong)(iVar2 - iVar4) + *(longlong *)(param_1 + 8)),(longlong)iVar4);
    iVar2 = *(int *)(param_1 + 0x10);
  }
  *(int *)(param_1 + 0x10) = iVar2 + -1;
  return;
}



// FUNCTION 14103c432 FUN_14103c432 body=345 status=ok
// SIG undefined FUN_14103c432(void)

void FUN_14103c432(longlong param_1,int param_2)

{
  longlong lVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar3 = *(uint *)(param_1 + 8);
  if ((int)uVar3 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar4 = 4;
    if (4 < uVar3) {
      uVar4 = uVar3;
    }
    uVar5 = (ulonglong)(int)uVar4;
  }
  else {
    uVar5 = ((ulonglong)((longlong)(int)uVar3 * 3) >> 3) + (longlong)(int)uVar3 + 0x10;
  }
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar7 = uVar5 + 0xf;
      if (uVar5 < 0x7ff1) {
        uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar7 >> 4]];
      }
      else {
        if ((uVar7 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar2 = (&DAT_14c841e00)[uVar7 >> 4];
          uVar6 = 0x32;
          if (0x32 < bVar2) {
            uVar6 = (ulonglong)bVar2;
          }
          uVar8 = 0x32 - (ulonglong)bVar2;
          do {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14103c4b5;
            lVar1 = uVar6 + 1 + uVar8;
            uVar8 = uVar8 - 1;
          } while (lVar1 != 0x33);
        }
        uVar5 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar5 = (ulonglong)DAT_14c841df8;
        }
        uVar5 = -uVar5 & ((uVar7 & 0xfffffffffffffff0) + uVar5) - 1;
      }
    }
    else {
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,1);
    }
  }
LAB_14103c4b5:
  uVar7 = 0x7fffffff;
  if ((int)uVar3 <= (int)uVar5) {
    uVar7 = uVar5 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,1,1);
  return;
}



// FUNCTION 14103c58c FUN_14103c58c body=137 status=ok
// SIG undefined FUN_14103c58c(void)

void FUN_14103c58c(longlong param_1,uint param_2,longlong param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  lVar1 = *(longlong *)(param_1 + 8);
  iVar2 = *(int *)(param_3 + 0x10);
  *(uint *)(param_3 + 0x10) = iVar2 + 1U;
  if (*(uint *)(param_3 + 0x14) < iVar2 + 1U) {
    FUN_14103c616((longlong *)(param_3 + 8),iVar2);
  }
  *(undefined1 *)(*(longlong *)(param_3 + 8) + (longlong)iVar2) =
       *(undefined1 *)(lVar1 + (int)param_2);
  iVar2 = *(int *)(param_1 + 0x10);
  iVar3 = ~param_2 + iVar2;
  if (iVar3 != 0) {
    iVar4 = 1;
    if (iVar3 < 1) {
      iVar4 = iVar3;
    }
    memmove((void *)((longlong)(int)param_2 + *(longlong *)(param_1 + 8)),
            (void *)((longlong)(iVar2 - iVar4) + *(longlong *)(param_1 + 8)),(longlong)iVar4);
    iVar2 = *(int *)(param_1 + 0x10);
  }
  *(int *)(param_1 + 0x10) = iVar2 + -1;
  return;
}



// FUNCTION 14103c616 FUN_14103c616 body=345 status=ok
// SIG undefined FUN_14103c616(void)

void FUN_14103c616(longlong param_1,int param_2)

{
  longlong lVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar3 = *(uint *)(param_1 + 8);
  if ((int)uVar3 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar4 = 4;
    if (4 < uVar3) {
      uVar4 = uVar3;
    }
    uVar5 = (ulonglong)(int)uVar4;
  }
  else {
    uVar5 = ((ulonglong)((longlong)(int)uVar3 * 3) >> 3) + (longlong)(int)uVar3 + 0x10;
  }
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar7 = uVar5 + 0xf;
      if (uVar5 < 0x7ff1) {
        uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar7 >> 4]];
      }
      else {
        if ((uVar7 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar2 = (&DAT_14c841e00)[uVar7 >> 4];
          uVar6 = 0x32;
          if (0x32 < bVar2) {
            uVar6 = (ulonglong)bVar2;
          }
          uVar8 = 0x32 - (ulonglong)bVar2;
          do {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14103c699;
            lVar1 = uVar6 + 1 + uVar8;
            uVar8 = uVar8 - 1;
          } while (lVar1 != 0x33);
        }
        uVar5 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar5 = (ulonglong)DAT_14c841df8;
        }
        uVar5 = -uVar5 & ((uVar7 & 0xfffffffffffffff0) + uVar5) - 1;
      }
    }
    else {
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,1);
    }
  }
LAB_14103c699:
  uVar7 = 0x7fffffff;
  if ((int)uVar3 <= (int)uVar5) {
    uVar7 = uVar5 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,1,1);
  return;
}



// FUNCTION 14103c770 FUN_14103c770 body=111 status=ok
// SIG undefined FUN_14103c770(void)

ulonglong FUN_14103c770(longlong param_1,undefined8 param_2)

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
  
  plVar3 = *(longlong **)(param_1 + 0x28);
  if (plVar3 == (longlong *)0x0) {
LAB_14103c7c2:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_14103c7c2;
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
    lVar4 = *(longlong *)(param_1 + 0x20);
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),lVar4 != 0);
    if (lVar4 != 0) {
      (**(code **)(param_1 + 0x30))
                (lVar4 + *(int *)(param_1 + 0x38),param_2,*(undefined8 *)(param_1 + 8),
                 *(undefined8 *)(param_1 + 0x10));
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



// FUNCTION 14103c7e0 FUN_14103c7e0 body=63 status=ok
// SIG undefined FUN_14103c7e0(void)

void FUN_14103c7e0(void)

{
  FUN_14044025c();
  return;
}



// FUNCTION 14103c820 FUN_14103c820 body=150 status=ok
// SIG undefined FUN_14103c820(void)

void FUN_14103c820(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar3 = FUN_140231a4a(*(undefined8 *)(param_1 + 0x3f0));
  FUN_1402315da(uVar3,&local_28);
  if (local_28 != 0) {
    *(undefined1 *)(param_1 + 0xe39) = *(undefined1 *)(local_28 + 0x150);
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
  FUN_14103c8b8(param_1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14103c8b8 FUN_14103c8b8 body=1371 status=ok
// SIG undefined FUN_14103c8b8(void)

void FUN_14103c8b8(longlong *param_1)

{
  int *piVar1;
  code *pcVar2;
  void *_Src;
  longlong *plVar3;
  bool bVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 uVar8;
  uint uVar9;
  undefined4 *puVar10;
  uint uVar11;
  longlong *plVar12;
  longlong lVar13;
  undefined4 *puVar14;
  undefined4 uVar15;
  undefined1 auStack_128 [32];
  undefined1 local_108;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined8 local_e8;
  longlong local_e0;
  longlong *local_d8;
  ulonglong local_d0;
  longlong *local_c8;
  longlong *local_c0;
  undefined4 local_a8 [2];
  undefined4 local_a0;
  undefined4 uStack_9c;
  ushort local_88;
  byte local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  ushort local_60;
  byte local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_128;
  uVar8 = FUN_140231a4a(param_1[0x7e]);
  FUN_140b35a56(uVar8,&local_e0);
  if (local_e0 == 0) goto LAB_14103cb82;
  *(undefined8 *)((longlong)param_1 + 0xcfc) = *(undefined8 *)(local_e0 + 8);
  lVar13 = local_e0 + 0xb0;
  local_d0 = local_d0 & 0xffffffffffffff00;
  local_a8[0] = 0;
  FUN_1456bb102(&local_d0,param_1);
  puVar10 = &local_a0;
  FUN_1448729ea(lVar13,puVar10,&local_d0);
  if (local_80 == 3) {
    local_80 = 3;
    uVar15 = local_a0;
  }
  else {
    lVar13 = param_1[0x177];
    puVar14 = &local_78;
    FUN_1400b56fe(puVar14,&local_a0,3);
    uVar15 = (int)lVar13;
    if (local_58 != 0) {
      uVar15 = local_78;
    }
    pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_58 * 0x120));
    if (pcVar2 != (code *)0x0) {
      if (0x18 < local_60) {
        puVar14 = (undefined4 *)CONCAT44(uStack_74,local_78);
      }
      (*pcVar2)(puVar14);
    }
    if (0x18 < local_60) {
      FUN_1400020a8(CONCAT44(uStack_74,local_78));
    }
  }
  *(undefined4 *)(param_1 + 0x177) = uVar15;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_80 * 0x120));
  if (pcVar2 != (code *)0x0) {
    if (0x18 < local_88) {
      puVar10 = (undefined4 *)CONCAT44(uStack_9c,local_a0);
    }
    (*pcVar2)(puVar10);
  }
  if (0x18 < local_88) {
    FUN_1400020a8(CONCAT44(uStack_9c,local_a0));
  }
  FUN_1448173f8(local_a8);
  if (((char)local_d0 == '\x03') && (local_c0 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_c0 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_c0 + 0x10))();
    }
  }
  *(undefined4 *)((longlong)param_1 + 0xbbc) = *(undefined4 *)(local_e0 + 0x100);
  *(undefined4 *)((longlong)param_1 + 0xc54) = *(undefined4 *)(local_e0 + 0x104);
  *(byte *)(param_1 + 0x172) = *(byte *)(param_1 + 0x172) & 0xf7 | *(char *)(local_e0 + 0x10c) << 3;
  param_1[0x122] = *(longlong *)(local_e0 + 0x128);
  uVar15 = *(undefined4 *)(local_e0 + 0x134);
  uVar5 = *(undefined4 *)(local_e0 + 0x138);
  uVar6 = *(undefined4 *)(local_e0 + 0x13c);
  *(undefined4 *)(param_1 + 0x123) = *(undefined4 *)(local_e0 + 0x130);
  *(undefined4 *)((longlong)param_1 + 0x91c) = uVar15;
  *(undefined4 *)(param_1 + 0x124) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0x924) = uVar6;
  plVar3 = param_1 + 0x125;
  if (plVar3 != (longlong *)(local_e0 + 0x140)) {
    iVar7 = *(int *)(local_e0 + 0x148);
    _Src = *(void **)(local_e0 + 0x140);
    *(int *)(param_1 + 0x126) = iVar7;
    if (iVar7 == 0 && *(int *)((longlong)param_1 + 0x934) == 0) {
      *(undefined4 *)((longlong)param_1 + 0x934) = 0;
    }
    else {
      FUN_1446dd670(plVar3,iVar7);
      if (iVar7 != 0) {
        memcpy((void *)*plVar3,_Src,(longlong)iVar7 * 2);
      }
    }
  }
  if ((*(longlong *)(local_e0 + 0x110) == 0) || (0xfffffffd < *(int *)(local_e0 + 0x118) - 1U))
  goto LAB_14103cb82;
  uVar8 = FUN_1447210f0(param_1);
  local_f8 = *(undefined8 *)(local_e0 + 0x110);
  local_f0 = *(undefined4 *)(local_e0 + 0x118);
  local_e8 = 0;
  local_108 = 0;
  FUN_14103ce14(&local_d0,&local_f8,param_1 + 0xa4,uVar8);
  plVar3 = local_c8;
  if ((ulonglong *)(param_1 + 0x120) != &local_d0) {
    param_1[0x120] = local_d0;
    local_d0 = 0;
    plVar12 = (longlong *)param_1[0x121];
    if (local_c8 != plVar12) {
      local_c8 = (longlong *)0x0;
      param_1[0x121] = (longlong)plVar3;
      if (plVar12 != (longlong *)0x0) {
        LOCK();
        plVar3 = plVar12 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
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
  }
  plVar3 = local_c8;
  if (local_c8 != (longlong *)0x0) {
    LOCK();
    plVar12 = local_c8 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 == 0) {
      (**(code **)*local_c8)(local_c8);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  lVar13 = param_1[0x120];
  plVar3 = (longlong *)param_1[0x121];
  if (plVar3 == (longlong *)0x0) {
    param_1[0x104] = lVar13;
    plVar12 = (longlong *)param_1[0x105];
    if (plVar12 == (longlong *)0x0) goto LAB_14103cb82;
    param_1[0x105] = 0;
LAB_14103cd7a:
    LOCK();
    plVar3 = plVar12 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 != 0) goto LAB_14103cb82;
    (**(code **)*plVar12)(plVar12);
    LOCK();
    piVar1 = (int *)((longlong)plVar12 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar7 = *piVar1;
    UNLOCK();
    plVar3 = plVar12;
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    param_1[0x104] = lVar13;
    plVar12 = (longlong *)param_1[0x105];
    if (plVar3 != plVar12) {
      param_1[0x105] = (longlong)plVar3;
      if (plVar12 == (longlong *)0x0) goto LAB_14103cb82;
      goto LAB_14103cd7a;
    }
    LOCK();
    plVar12 = plVar3 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 != 0) goto LAB_14103cb82;
    (**(code **)*plVar3)(plVar3);
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar7 = *piVar1;
    UNLOCK();
  }
  if (iVar7 == 0) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
LAB_14103cb82:
  if (local_d8 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_d8 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_d8)(local_d8);
      LOCK();
      piVar1 = (int *)((longlong)local_d8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_d8 + 0x10))(local_d8);
      }
    }
  }
  FUN_1400ecd98(param_1);
  (**(code **)(*param_1 + 0x670))(param_1,1);
  (**(code **)(*param_1 + 0x678))(param_1);
  if (((*(byte *)(param_1 + 0x1aa) & 0x40) != 0) && (iVar7 = (int)param_1[0x17e], 0 < iVar7)) {
    uVar11 = 1;
    do {
      uVar9 = uVar11 - 1 & 0xff;
      plVar3 = *(longlong **)
                (param_1[0x17d] + 0x10 + (ulonglong)(uVar9 << 7) + (ulonglong)uVar9 * 8);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x380))();
        iVar7 = (int)param_1[0x17e];
      }
      bVar4 = (int)uVar11 < iVar7;
      uVar11 = (uint)(byte)((char)uVar11 + 1);
    } while (bVar4);
  }
  if ((local_50 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14103ce14 FUN_14103ce14 body=998 status=ok
// SIG undefined FUN_14103ce14(void)

longlong *
FUN_14103ce14(longlong *param_1,longlong *param_2,longlong param_3,longlong param_4,char param_5)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 auStack_b8 [32];
  longlong local_98;
  longlong local_90;
  longlong *local_88;
  longlong *local_80;
  longlong *local_78;
  longlong local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  *param_1 = 0;
  param_1[1] = 0;
  lVar3 = DAT_14cb259f8;
  if (((param_3 == 0) || (param_4 == 0)) || (DAT_14cb259f8 == 0)) goto LAB_14103cf8a;
  if ((*param_2 == 0) || (0xfffffffd < (int)param_2[1] - 1U)) {
LAB_14103cfb5:
    plVar6 = (longlong *)FUN_14001cc68(0x850);
    plVar6[1] = (longlong)&DAT_100000001;
    *plVar6 = (longlong)&PTR_FUN_14b4abcd0;
    plVar8 = plVar6 + 2;
    memset(plVar8,0,0x840);
    FUN_140fe591a(plVar8);
    local_80 = plVar8;
    local_78 = plVar6;
    FUN_148a27664(&local_80,plVar8);
    plVar8 = local_80;
    local_80[5] = param_4;
    FUN_14078c658(&local_58,param_3);
    *(undefined4 *)(plVar8 + 3) = local_58;
    *(undefined4 *)((longlong)plVar8 + 0x1c) = uStack_54;
    *(undefined4 *)(plVar8 + 4) = uStack_50;
    *(undefined4 *)((longlong)plVar8 + 0x24) = uStack_4c;
    FUN_14485c47a(local_80 + 6,param_4);
    plVar8 = local_78;
    if (local_78 == (longlong *)0x0) {
      *param_1 = (longlong)local_80;
      plVar6 = (longlong *)param_1[1];
      if (plVar6 != (longlong *)0x0) {
        param_1[1] = 0;
LAB_14103d0a6:
        LOCK();
        plVar8 = plVar6 + 1;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)*plVar8 == 0) {
          (**(code **)*plVar6)(plVar6);
          LOCK();
          piVar1 = (int *)((longlong)plVar6 + 0xc);
          *piVar1 = *piVar1 + -1;
          iVar2 = *piVar1;
          UNLOCK();
joined_r0x00014103d1b8:
          if (iVar2 == 0) {
            (**(code **)(*plVar6 + 0x10))(plVar6);
          }
        }
      }
    }
    else {
      LOCK();
      *(int *)(local_78 + 1) = (int)local_78[1] + 1;
      UNLOCK();
      *param_1 = (longlong)local_80;
      plVar6 = (longlong *)param_1[1];
      if (local_78 == plVar6) {
        LOCK();
        plVar6 = local_78 + 1;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)*plVar6 == 0) {
          (**(code **)*local_78)(local_78);
          LOCK();
          piVar1 = (int *)((longlong)plVar8 + 0xc);
          *piVar1 = *piVar1 + -1;
          iVar2 = *piVar1;
          UNLOCK();
          plVar6 = plVar8;
          goto joined_r0x00014103d1b8;
        }
      }
      else {
        param_1[1] = (longlong)local_78;
        if (plVar6 != (longlong *)0x0) goto LAB_14103d0a6;
      }
    }
    plVar8 = local_78;
    if (local_78 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_78 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*local_78)(local_78);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
      }
    }
    lVar7 = *param_1;
    if (lVar7 == 0) goto LAB_14103cf8a;
  }
  else {
    uVar5 = FUN_140b193ca();
    local_70 = *param_2;
    local_68 = (undefined4)param_2[1];
    local_60 = 0;
    local_98 = param_4;
    FUN_140e775d2(&local_58,&local_70,uVar5,param_3);
    lVar7 = CONCAT44(uStack_54,local_58);
    if (lVar7 != 0) {
      uVar5 = FUN_140b193ca();
      cVar4 = FUN_1448093f4(lVar7,uVar5);
      if (cVar4 != '\0') {
        plVar8 = (longlong *)CONCAT44(uStack_4c,uStack_50);
        if (plVar8 == (longlong *)0x0) {
          *param_1 = CONCAT44(uStack_54,local_58);
        }
        else {
          LOCK();
          *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
          UNLOCK();
          plVar6 = (longlong *)param_1[1];
          *param_1 = CONCAT44(uStack_54,local_58);
          if (plVar8 == plVar6) {
            LOCK();
            plVar6 = plVar8 + 1;
            *(int *)plVar6 = (int)*plVar6 + -1;
            UNLOCK();
            if ((int)*plVar6 == 0) {
              (**(code **)*plVar8)(plVar8);
              LOCK();
              piVar1 = (int *)((longlong)plVar8 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                lVar7 = *plVar8;
LAB_14103d11f:
                (**(code **)(lVar7 + 0x10))(plVar8);
              }
            }
          }
          else {
            param_1[1] = (longlong)plVar8;
            if (plVar6 != (longlong *)0x0) {
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
                  lVar7 = *plVar6;
                  plVar8 = plVar6;
                  goto LAB_14103d11f;
                }
              }
            }
          }
        }
        lVar7 = CONCAT44(uStack_54,local_58);
        if ((*(longlong *)(lVar7 + 0x40) != *param_2) || (*(int *)(lVar7 + 0x48) != (int)param_2[1])
           ) {
          *(longlong *)(lVar7 + 0x40) = *param_2;
          *(int *)(lVar7 + 0x48) = (int)param_2[1];
          *(undefined8 *)(lVar7 + 0x50) = 0;
        }
      }
    }
    plVar8 = (longlong *)CONCAT44(uStack_4c,uStack_50);
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      plVar6 = plVar8 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
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
    lVar7 = *param_1;
    if (lVar7 == 0) goto LAB_14103cfb5;
  }
  plVar8 = (longlong *)param_1[1];
  local_90 = lVar7;
  if (plVar8 == (longlong *)0x0) {
    local_88 = (longlong *)0x0;
    FUN_1408f6a5c(lVar3);
  }
  else {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    local_88 = plVar8;
    FUN_1408f6a5c(lVar3);
    LOCK();
    plVar6 = plVar8 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
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
  if ((param_5 != '\0') &&
     (plVar8 = (longlong *)*param_1, *(char *)((longlong)plVar8 + 0x3c) == '\0')) {
    *(undefined1 *)((longlong)plVar8 + 0x3c) = 1;
    (**(code **)(*plVar8 + 0x10))();
  }
LAB_14103cf8a:
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14103d1fc FUN_14103d1fc body=75 status=ok
// SIG undefined FUN_14103d1fc(void)

void FUN_14103d1fc(undefined8 param_1)

{
  FUN_14125757e();
  FUN_14103d248(&DAT_14caa8500,param_1);
  if ((DAT_14caa8580 != 0) &&
     (*(char *)(DAT_14caa8580 + 0x22c + (ulonglong)*(byte *)(DAT_14caa8580 + 0x22e)) == '\x01')) {
    FUN_14747b81a(DAT_14caa8580,1);
    return;
  }
  return;
}



// FUNCTION 14103d248 FUN_14103d248 body=154 status=ok
// SIG undefined FUN_14103d248(void)

undefined8 FUN_14103d248(longlong *param_1,ulonglong param_2)

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
        if (*(ulonglong *)(*param_1 + (longlong)iVar1 * 0x10) == param_2) {
          FUN_14103d2e2(param_1,iVar1);
          return 1;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x10 + *param_1 + 8);
      } while (iVar1 != -1);
    }
  }
  return 0;
}



// FUNCTION 14103d2e2 FUN_14103d2e2 body=95 status=ok
// SIG undefined FUN_14103d2e2(void)

void FUN_14103d2e2(longlong *param_1,int param_2)

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
  lVar5 = (longlong)*(int *)(lVar1 + 0xc + (longlong)param_2 * 0x10);
  iVar2 = *(int *)((longlong)plVar3 + lVar5 * 4);
  if (iVar2 == param_2) {
    piVar4 = (int *)((longlong)plVar3 + lVar5 * 4);
  }
  else {
    do {
      piVar4 = (int *)(lVar1 + (longlong)iVar2 * 0x10 + 8);
      iVar2 = *piVar4;
    } while (iVar2 != param_2);
  }
  *piVar4 = *(int *)(lVar1 + (longlong)param_2 * 0x10 + 8);
  FUN_14103d342(param_1,param_2,1);
  return;
}



// FUNCTION 14103d342 FUN_14103d342 body=136 status=ok
// SIG undefined FUN_14103d342(void)

void FUN_14103d342(longlong *param_1,int param_2,int param_3)

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



// FUNCTION 14103d3ca FUN_14103d3ca body=1441 status=ok
// SIG undefined FUN_14103d3ca(void)

void FUN_14103d3ca(longlong param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong *plVar4;
  char cVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
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
  uVar3 = *(ulonglong *)(param_1 + 0x170);
  if ((((*(uint *)(param_1 + 8) & 0x10) == 0) && (lVar7 = *(longlong *)(param_1 + 0x20), lVar7 != 0)
      ) && (-1 < (short)*(undefined4 *)(lVar7 + 8))) {
    uVar1 = *(uint *)(lVar7 + 0xc);
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar7 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar7 = 0;
    }
    if ((*(uint *)(lVar7 + 8) >> 0x1c & 1) != 0) goto LAB_14103d69c;
    if (DAT_14cae8b20 == 0) {
      local_50 = &local_38;
      local_38 = (code *)&LAB_14355090c;
      local_40 = FUN_14081d0ea;
      local_48 = FUN_14081d0ea;
      local_58 = &LAB_147b8e16d;
      local_60 = (code *)&LAB_140810a38;
      local_68 = L"Engine";
      local_70 = 0x800000000;
      local_78 = 0x10000000;
      local_80 = 8;
      local_88 = 0x3f0;
      FUN_14081cfa3(L"/Script/Engine",L"Level",&DAT_14cae8b20,&DAT_147b8e16c);
    }
    lVar7 = DAT_14cae8b20;
    if (DAT_14c951858 == 0) {
      local_50 = &local_38;
      local_38 = FUN_1449e2820;
      local_40 = FUN_14081d0ea;
      local_48 = FUN_14081d0ea;
      local_58 = &LAB_1468c5283;
      local_60 = FUN_142809da0;
      local_68 = L"Engine";
      local_70 = 0x400000000;
      local_78 = 0x10000000;
      local_80 = 8;
      local_88 = 0x50;
      FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
    }
    lVar9 = *(longlong *)(param_1 + 0x20);
    if (lVar9 == 0) goto LAB_14103d69c;
    iVar2 = *(int *)(lVar7 + 0x38);
    do {
      if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x38) < iVar2) ||
         (lVar8 = lVar9,
         *(longlong *)(*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) + (longlong)iVar2 * 8) !=
         lVar7 + 0x30)) {
        lVar8 = 0;
      }
    } while ((lVar8 == 0) && (lVar9 = *(longlong *)(lVar9 + 0x20), lVar9 != 0));
    if (lVar8 == 0) goto LAB_14103d69c;
    lVar7 = *(longlong *)(lVar8 + 0xc0);
  }
  else {
LAB_14103d69c:
    lVar7 = 0;
  }
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  if (uVar3 == DAT_14c892fa8) {
    if (lVar7 == 0) {
      plVar6 = (longlong *)0x0;
      goto LAB_14103d538;
    }
    plVar6 = *(longlong **)(lVar7 + 0x38);
  }
  else {
    plVar6 = (longlong *)FUN_1456d2c7c(DAT_14cb0d2b0,lVar7);
  }
  if ((plVar6 != (longlong *)0x0) && (*(char *)(param_1 + 0x178) == '\x03')) {
    if (*(code **)(*plVar6 + 0x3c0) == (code *)&LAB_1448ff5f6) {
      if (plVar6[0x1e] != 0) goto LAB_14103d538;
    }
    else {
      cVar5 = (**(code **)(*plVar6 + 0x3c0))(plVar6);
      if (cVar5 == '\0') goto LAB_14103d538;
    }
    (**(code **)(*plVar6 + 0x378))(plVar6,param_1);
    if (1 < *(byte *)(param_1 + 0x179)) {
      FUN_14103d96c(param_1);
    }
  }
LAB_14103d538:
  if ((((*(uint *)(param_1 + 8) & 0x10) == 0) && (lVar7 = *(longlong *)(param_1 + 0x20), lVar7 != 0)
      ) && (-1 < (short)*(undefined4 *)(lVar7 + 8))) {
    uVar1 = *(uint *)(lVar7 + 0xc);
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar7 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar7 = 0;
    }
    if ((*(uint *)(lVar7 + 8) >> 0x1c & 1) == 0) {
      if (DAT_14cae8b20 == 0) {
        local_50 = &local_38;
        local_38 = (code *)&LAB_14355090c;
        local_40 = FUN_14081d0ea;
        local_48 = FUN_14081d0ea;
        local_58 = &LAB_147b8e16d;
        local_60 = (code *)&LAB_140810a38;
        local_68 = L"Engine";
        local_70 = 0x800000000;
        local_78 = 0x10000000;
        local_80 = 8;
        local_88 = 0x3f0;
        FUN_14081cfa3(L"/Script/Engine",L"Level",&DAT_14cae8b20,&DAT_147b8e16c);
      }
      lVar7 = DAT_14cae8b20;
      if (DAT_14c951858 == 0) {
        local_50 = &local_38;
        local_38 = FUN_1449e2820;
        local_40 = FUN_14081d0ea;
        local_48 = FUN_14081d0ea;
        local_58 = &LAB_1468c5283;
        local_60 = FUN_142809da0;
        local_68 = L"Engine";
        local_70 = 0x400000000;
        local_78 = 0x10000000;
        local_80 = 8;
        local_88 = 0x50;
        FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
      }
      lVar9 = *(longlong *)(param_1 + 0x20);
      if (lVar9 != 0) {
        iVar2 = *(int *)(lVar7 + 0x38);
        do {
          if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x38) < iVar2) ||
             (lVar8 = lVar9,
             *(longlong *)(*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) + (longlong)iVar2 * 8)
             != lVar7 + 0x30)) {
            lVar8 = 0;
          }
        } while ((lVar8 == 0) && (lVar9 = *(longlong *)(lVar9 + 0x20), lVar9 != 0));
        if ((lVar8 != 0) &&
           ((*(longlong *)(lVar8 + 0xc0) != 0 && ((longlong)*(int *)(DAT_14cb0d2b0 + 0x1150) != 0)))
           ) {
          lVar7 = 0;
          do {
            lVar9 = *(longlong *)(*(longlong *)(DAT_14cb0d2b0 + 0x1148) + lVar7);
            if (*(longlong *)(lVar9 + 0x360) == *(longlong *)(lVar8 + 0xc0)) {
              if ((lVar9 != 0) && (iVar2 = *(int *)(lVar9 + 0x2b8), (longlong)iVar2 != 0)) {
                lVar7 = *(longlong *)(lVar9 + 0x2b0);
                lVar9 = 0;
                do {
                  plVar4 = *(longlong **)(lVar7 + lVar9);
                  if (((plVar4 != (longlong *)0x0) && (plVar4 != plVar6)) &&
                     (cVar5 = (**(code **)(*plVar4 + 0x440))(plVar4,param_1), cVar5 != '\0')) {
                    plVar4 = *(longlong **)(lVar7 + lVar9);
                    (**(code **)(*plVar4 + 0x378))(plVar4,param_1);
                  }
                  lVar9 = lVar9 + 0x10;
                } while ((longlong)iVar2 * 0x10 != lVar9);
              }
              break;
            }
            lVar7 = lVar7 + 8;
          } while ((longlong)*(int *)(DAT_14cb0d2b0 + 0x1150) * 8 != lVar7);
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



// FUNCTION 14103d96c FUN_14103d96c body=851 status=ok
// SIG undefined FUN_14103d96c(void)

void FUN_14103d96c(longlong param_1)

{
  byte bVar1;
  uint uVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
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
  if ((*(longlong *)(param_1 + 0x170) != 0) && (DAT_14c87ead8 == '\0')) {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  iVar5 = FUN_14487fd02(param_1);
  if ((((iVar5 != 3) && (bVar1 = *(byte *)(param_1 + 0x179), 1 < bVar1)) &&
      ((*(byte *)(param_1 + 0x65) & 2) == 0)) && ((*(uint *)(param_1 + 8) >> 0x1e & 1) == 0)) {
    if (bVar1 == 4) {
      *(undefined1 *)(param_1 + 0x179) = 2;
    }
    if ((((*(byte *)(param_1 + 99) & 8) != 0) && ((*(uint *)(param_1 + 8) & 0x10) == 0)) &&
       ((lVar6 = *(longlong *)(param_1 + 0x20), lVar6 != 0 &&
        (-1 < (short)*(undefined4 *)(lVar6 + 8))))) {
      uVar2 = *(uint *)(lVar6 + 0xc);
      if ((int)uVar2 < DAT_14c9647dc) {
        lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      }
      else {
        lVar6 = 0;
      }
      if ((*(uint *)(lVar6 + 8) >> 0x1c & 1) == 0) {
        if (DAT_14cae8b20 == 0) {
          local_50 = &local_38;
          local_38 = (code *)&LAB_14355090c;
          local_40 = FUN_14081d0ea;
          local_48 = FUN_14081d0ea;
          local_58 = &LAB_147b8e16d;
          local_60 = (code *)&LAB_140810a38;
          local_68 = L"Engine";
          local_70 = 0x800000000;
          local_78 = 0x10000000;
          local_80 = 8;
          local_88 = 0x3f0;
          FUN_14081cfa3(L"/Script/Engine",L"Level",&DAT_14cae8b20,&DAT_147b8e16c);
        }
        lVar6 = DAT_14cae8b20;
        if (DAT_14c951858 == 0) {
          local_50 = &local_38;
          local_38 = FUN_1449e2820;
          local_40 = FUN_14081d0ea;
          local_48 = FUN_14081d0ea;
          local_58 = &LAB_1468c5283;
          local_60 = FUN_142809da0;
          local_68 = L"Engine";
          local_70 = 0x400000000;
          local_78 = 0x10000000;
          local_80 = 8;
          local_88 = 0x50;
          FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
        }
        lVar8 = *(longlong *)(param_1 + 0x20);
        if (lVar8 != 0) {
          iVar5 = *(int *)(lVar6 + 0x38);
          do {
            if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x38) < iVar5) ||
               (lVar7 = lVar8,
               *(longlong *)
                (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) + (longlong)iVar5 * 8) !=
               lVar6 + 0x30)) {
              lVar7 = 0;
            }
          } while ((lVar7 == 0) && (lVar8 = *(longlong *)(lVar8 + 0x20), lVar8 != 0));
          if ((lVar7 != 0) && (lVar6 = *(longlong *)(lVar7 + 0xc0), lVar6 != 0)) {
            FUN_14081b2ca(lVar6);
            if ((longlong)*(int *)(DAT_14cb0d2b0 + 0x1150) != 0) {
              lVar8 = 0;
              do {
                lVar7 = *(longlong *)(*(longlong *)(DAT_14cb0d2b0 + 0x1148) + lVar8);
                if (*(longlong *)(lVar7 + 0x360) == lVar6) {
                  if ((lVar7 != 0) && (iVar5 = *(int *)(lVar7 + 0x2b8), (longlong)iVar5 != 0)) {
                    lVar6 = *(longlong *)(lVar7 + 0x2b0);
                    lVar8 = 0;
                    do {
                      plVar3 = *(longlong **)(lVar6 + lVar8);
                      if ((plVar3 != (longlong *)0x0) &&
                         (cVar4 = (**(code **)(*plVar3 + 0x440))(plVar3,param_1), cVar4 != '\0')) {
                        FUN_14081b236(*(undefined8 *)(lVar6 + lVar8),param_1,bVar1 == 4);
                      }
                      lVar8 = lVar8 + 0x10;
                    } while ((longlong)iVar5 * 0x10 != lVar8);
                  }
                  break;
                }
                lVar8 = lVar8 + 8;
              } while ((longlong)*(int *)(DAT_14cb0d2b0 + 0x1150) * 8 != lVar8);
            }
          }
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



// FUNCTION 14103dcc0 FUN_14103dcc0 body=40 status=ok
// SIG undefined FUN_14103dcc0(void)

undefined8 FUN_14103dcc0(undefined8 param_1,int param_2)

{
  FUN_14103dce8();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14103dce8 FUN_14103dce8 body=856 status=ok
// SIG undefined FUN_14103dce8(void)

void FUN_14103dce8(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  
  *param_1 = &PTR_FUN_14b94f280;
  lVar6 = DAT_14c9a3d60;
  if (*(int *)((longlong)param_1 + 900) != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      iVar7 = *(int *)((longlong)param_1 + 900) + -1;
      lVar5 = (longlong)iVar7 * 0x88;
      lVar3 = DAT_14c9a3d60 + lVar5;
      FUN_144760e21(*(undefined8 *)(DAT_14c9a3d60 + 0x70 + lVar5),
                    *(undefined4 *)(DAT_14c9a3d60 + 0x78 + lVar5));
      if (*(longlong *)(lVar6 + 0x70 + lVar5) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar3 + 0x60) != 0) {
        FUN_1400020a8();
      }
      FUN_14059507c(&DAT_14c9a3d60,iVar7,1);
    }
    *(undefined4 *)((longlong)param_1 + 900) = 0;
  }
  lVar6 = DAT_14c9a3d60;
  if (*(int *)(param_1 + 0x6f) != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      iVar7 = *(int *)(param_1 + 0x6f) + -1;
      lVar5 = (longlong)iVar7 * 0x88;
      lVar3 = DAT_14c9a3d60 + lVar5;
      FUN_144760e21(*(undefined8 *)(DAT_14c9a3d60 + 0x70 + lVar5),
                    *(undefined4 *)(DAT_14c9a3d60 + 0x78 + lVar5));
      if (*(longlong *)(lVar6 + 0x70 + lVar5) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar3 + 0x60) != 0) {
        FUN_1400020a8();
      }
      FUN_14059507c(&DAT_14c9a3d60,iVar7,1);
    }
    *(undefined4 *)(param_1 + 0x6f) = 0;
  }
  plVar4 = (longlong *)param_1[0x6c];
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
  *param_1 = &PTR_FUN_14b948d50;
  lVar6 = DAT_14c9a3d60;
  if (*(int *)(param_1 + 0x69) != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      iVar7 = *(int *)(param_1 + 0x69) + -1;
      lVar5 = (longlong)iVar7 * 0x88;
      lVar3 = DAT_14c9a3d60 + lVar5;
      FUN_144760e21(*(undefined8 *)(DAT_14c9a3d60 + 0x70 + lVar5),
                    *(undefined4 *)(DAT_14c9a3d60 + 0x78 + lVar5));
      if (*(longlong *)(lVar6 + 0x70 + lVar5) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar3 + 0x60) != 0) {
        FUN_1400020a8();
      }
      FUN_14059507c(&DAT_14c9a3d60,iVar7,1);
    }
    *(undefined4 *)(param_1 + 0x69) = 0;
  }
  lVar6 = DAT_14c9a3d60;
  if (*(int *)((longlong)param_1 + 0x33c) != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      iVar7 = *(int *)((longlong)param_1 + 0x33c) + -1;
      lVar5 = (longlong)iVar7 * 0x88;
      lVar3 = DAT_14c9a3d60 + lVar5;
      FUN_144760e21(*(undefined8 *)(DAT_14c9a3d60 + 0x70 + lVar5),
                    *(undefined4 *)(DAT_14c9a3d60 + 0x78 + lVar5));
      if (*(longlong *)(lVar6 + 0x70 + lVar5) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar3 + 0x60) != 0) {
        FUN_1400020a8();
      }
      FUN_14059507c(&DAT_14c9a3d60,iVar7,1);
    }
    *(undefined4 *)((longlong)param_1 + 0x33c) = 0;
  }
  lVar6 = DAT_14c9a3d60;
  if (*(int *)(param_1 + 0x66) != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      iVar7 = *(int *)(param_1 + 0x66) + -1;
      lVar5 = (longlong)iVar7 * 0x88;
      lVar3 = DAT_14c9a3d60 + lVar5;
      FUN_144760e21(*(undefined8 *)(DAT_14c9a3d60 + 0x70 + lVar5),
                    *(undefined4 *)(DAT_14c9a3d60 + 0x78 + lVar5));
      if (*(longlong *)(lVar6 + 0x70 + lVar5) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar3 + 0x60) != 0) {
        FUN_1400020a8();
      }
      FUN_14059507c(&DAT_14c9a3d60,iVar7,1);
    }
    *(undefined4 *)(param_1 + 0x66) = 0;
  }
  FUN_14103e040(param_1);
  return;
}



// FUNCTION 14103e040 FUN_14103e040 body=3078 status=ok
// SIG undefined FUN_14103e040(void)

void FUN_14103e040(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  
  *param_1 = &PTR_FUN_14b49c980;
  lVar6 = DAT_14c9a3d60;
  if (*(int *)((longlong)param_1 + 0x2c4) != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      iVar7 = *(int *)((longlong)param_1 + 0x2c4) + -1;
      lVar5 = (longlong)iVar7 * 0x88;
      lVar3 = DAT_14c9a3d60 + lVar5;
      FUN_144760e21(*(undefined8 *)(DAT_14c9a3d60 + 0x70 + lVar5),
                    *(undefined4 *)(DAT_14c9a3d60 + 0x78 + lVar5));
      if (*(longlong *)(lVar6 + 0x70 + lVar5) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar3 + 0x60) != 0) {
        FUN_1400020a8();
      }
      FUN_14059507c(&DAT_14c9a3d60,iVar7,1);
    }
    *(undefined4 *)((longlong)param_1 + 0x2c4) = 0;
  }
  param_1[0x4f] = &DAT_14a171d50;
  *(undefined4 *)(param_1 + 0x52) = 0;
  if (*(int *)((longlong)param_1 + 0x294) != 0) {
    FUN_140115c12(param_1 + 0x51,0);
  }
  param_1[0x50] = 0;
  if (param_1[0x51] != 0) {
    FUN_1400020a8();
  }
  lVar6 = DAT_14c9a3d60;
  if (*(int *)(param_1 + 0x4c) != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      iVar7 = *(int *)(param_1 + 0x4c) + -1;
      lVar5 = (longlong)iVar7 * 0x88;
      lVar3 = DAT_14c9a3d60 + lVar5;
      FUN_144760e21(*(undefined8 *)(DAT_14c9a3d60 + 0x70 + lVar5),
                    *(undefined4 *)(DAT_14c9a3d60 + 0x78 + lVar5));
      if (*(longlong *)(lVar6 + 0x70 + lVar5) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar3 + 0x60) != 0) {
        FUN_1400020a8();
      }
      FUN_14059507c(&DAT_14c9a3d60,iVar7,1);
    }
    *(undefined4 *)(param_1 + 0x4c) = 0;
  }
  lVar6 = DAT_14c9a3d60;
  if (*(int *)((longlong)param_1 + 0x254) != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      iVar7 = *(int *)((longlong)param_1 + 0x254) + -1;
      lVar5 = (longlong)iVar7 * 0x88;
      lVar3 = DAT_14c9a3d60 + lVar5;
      FUN_144760e21(*(undefined8 *)(DAT_14c9a3d60 + 0x70 + lVar5),
                    *(undefined4 *)(DAT_14c9a3d60 + 0x78 + lVar5));
      if (*(longlong *)(lVar6 + 0x70 + lVar5) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar3 + 0x60) != 0) {
        FUN_1400020a8();
      }
      FUN_14059507c(&DAT_14c9a3d60,iVar7,1);
    }
    *(undefined4 *)((longlong)param_1 + 0x254) = 0;
  }
  lVar6 = DAT_14c9a3d60;
  if (*(int *)((longlong)param_1 + 0x244) != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      iVar7 = *(int *)((longlong)param_1 + 0x244) + -1;
      lVar5 = (longlong)iVar7 * 0x88;
      lVar3 = DAT_14c9a3d60 + lVar5;
      FUN_144760e21(*(undefined8 *)(DAT_14c9a3d60 + 0x70 + lVar5),
                    *(undefined4 *)(DAT_14c9a3d60 + 0x78 + lVar5));
      if (*(longlong *)(lVar6 + 0x70 + lVar5) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar3 + 0x60) != 0) {
        FUN_1400020a8();
      }
      FUN_14059507c(&DAT_14c9a3d60,iVar7,1);
    }
    *(undefined4 *)((longlong)param_1 + 0x244) = 0;
  }
  lVar6 = DAT_14c9a3d60;
  if (*(int *)(param_1 + 0x47) != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      iVar7 = *(int *)(param_1 + 0x47) + -1;
      lVar5 = (longlong)iVar7 * 0x88;
      lVar3 = DAT_14c9a3d60 + lVar5;
      FUN_144760e21(*(undefined8 *)(DAT_14c9a3d60 + 0x70 + lVar5),
                    *(undefined4 *)(DAT_14c9a3d60 + 0x78 + lVar5));
      if (*(longlong *)(lVar6 + 0x70 + lVar5) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar3 + 0x60) != 0) {
        FUN_1400020a8();
      }
      FUN_14059507c(&DAT_14c9a3d60,iVar7,1);
    }
    *(undefined4 *)(param_1 + 0x47) = 0;
  }
  lVar6 = DAT_14c9a3d60;
  if (*(int *)((longlong)param_1 + 0x22c) != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      iVar7 = *(int *)((longlong)param_1 + 0x22c) + -1;
      lVar5 = (longlong)iVar7 * 0x88;
      lVar3 = DAT_14c9a3d60 + lVar5;
      FUN_144760e21(*(undefined8 *)(DAT_14c9a3d60 + 0x70 + lVar5),
                    *(undefined4 *)(DAT_14c9a3d60 + 0x78 + lVar5));
      if (*(longlong *)(lVar6 + 0x70 + lVar5) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar3 + 0x60) != 0) {
        FUN_1400020a8();
      }
      FUN_14059507c(&DAT_14c9a3d60,iVar7,1);
    }
    *(undefined4 *)((longlong)param_1 + 0x22c) = 0;
  }
  lVar6 = DAT_14c9a3d60;
  if (*(int *)(param_1 + 0x44) != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      iVar7 = *(int *)(param_1 + 0x44) + -1;
      lVar5 = (longlong)iVar7 * 0x88;
      lVar3 = DAT_14c9a3d60 + lVar5;
      FUN_144760e21(*(undefined8 *)(DAT_14c9a3d60 + 0x70 + lVar5),
                    *(undefined4 *)(DAT_14c9a3d60 + 0x78 + lVar5));
      if (*(longlong *)(lVar6 + 0x70 + lVar5) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar3 + 0x60) != 0) {
        FUN_1400020a8();
      }
      FUN_14059507c(&DAT_14c9a3d60,iVar7,1);
    }
    *(undefined4 *)(param_1 + 0x44) = 0;
  }
  lVar6 = DAT_14c9a3d60;
  if (*(int *)((longlong)param_1 + 0x214) != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      iVar7 = *(int *)((longlong)param_1 + 0x214) + -1;
      lVar5 = (longlong)iVar7 * 0x88;
      lVar3 = DAT_14c9a3d60 + lVar5;
      FUN_144760e21(*(undefined8 *)(DAT_14c9a3d60 + 0x70 + lVar5),
                    *(undefined4 *)(DAT_14c9a3d60 + 0x78 + lVar5));
      if (*(longlong *)(lVar6 + 0x70 + lVar5) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar3 + 0x60) != 0) {
        FUN_1400020a8();
      }
      FUN_14059507c(&DAT_14c9a3d60,iVar7,1);
    }
    *(undefined4 *)((longlong)param_1 + 0x214) = 0;
  }
  lVar6 = DAT_14c9a3d60;
  if (*(int *)(param_1 + 0x41) != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      iVar7 = *(int *)(param_1 + 0x41) + -1;
      lVar5 = (longlong)iVar7 * 0x88;
      lVar3 = DAT_14c9a3d60 + lVar5;
      FUN_144760e21(*(undefined8 *)(DAT_14c9a3d60 + 0x70 + lVar5),
                    *(undefined4 *)(DAT_14c9a3d60 + 0x78 + lVar5));
      if (*(longlong *)(lVar6 + 0x70 + lVar5) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar3 + 0x60) != 0) {
        FUN_1400020a8();
      }
      FUN_14059507c(&DAT_14c9a3d60,iVar7,1);
    }
    *(undefined4 *)(param_1 + 0x41) = 0;
  }
  lVar6 = DAT_14c9a3d60;
  if (*(int *)((longlong)param_1 + 0x1fc) != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      iVar7 = *(int *)((longlong)param_1 + 0x1fc) + -1;
      lVar5 = (longlong)iVar7 * 0x88;
      lVar3 = DAT_14c9a3d60 + lVar5;
      FUN_144760e21(*(undefined8 *)(DAT_14c9a3d60 + 0x70 + lVar5),
                    *(undefined4 *)(DAT_14c9a3d60 + 0x78 + lVar5));
      if (*(longlong *)(lVar6 + 0x70 + lVar5) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar3 + 0x60) != 0) {
        FUN_1400020a8();
      }
      FUN_14059507c(&DAT_14c9a3d60,iVar7,1);
    }
    *(undefined4 *)((longlong)param_1 + 0x1fc) = 0;
  }
  lVar6 = DAT_14c9a3d60;
  if (*(int *)(param_1 + 0x3e) != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      iVar7 = *(int *)(param_1 + 0x3e) + -1;
      lVar5 = (longlong)iVar7 * 0x88;
      lVar3 = DAT_14c9a3d60 + lVar5;
      FUN_144760e21(*(undefined8 *)(DAT_14c9a3d60 + 0x70 + lVar5),
                    *(undefined4 *)(DAT_14c9a3d60 + 0x78 + lVar5));
      if (*(longlong *)(lVar6 + 0x70 + lVar5) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar3 + 0x60) != 0) {
        FUN_1400020a8();
      }
      FUN_14059507c(&DAT_14c9a3d60,iVar7,1);
    }
    *(undefined4 *)(param_1 + 0x3e) = 0;
  }
  lVar6 = DAT_14c9a3d60;
  if (*(int *)((longlong)param_1 + 0x1e4) != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      iVar7 = *(int *)((longlong)param_1 + 0x1e4) + -1;
      lVar5 = (longlong)iVar7 * 0x88;
      lVar3 = DAT_14c9a3d60 + lVar5;
      FUN_144760e21(*(undefined8 *)(DAT_14c9a3d60 + 0x70 + lVar5),
                    *(undefined4 *)(DAT_14c9a3d60 + 0x78 + lVar5));
      if (*(longlong *)(lVar6 + 0x70 + lVar5) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar3 + 0x60) != 0) {
        FUN_1400020a8();
      }
      FUN_14059507c(&DAT_14c9a3d60,iVar7,1);
    }
    *(undefined4 *)((longlong)param_1 + 0x1e4) = 0;
  }
  lVar6 = DAT_14c9a3d60;
  if (*(int *)(param_1 + 0x3b) != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      iVar7 = *(int *)(param_1 + 0x3b) + -1;
      lVar5 = (longlong)iVar7 * 0x88;
      lVar3 = DAT_14c9a3d60 + lVar5;
      FUN_144760e21(*(undefined8 *)(DAT_14c9a3d60 + 0x70 + lVar5),
                    *(undefined4 *)(DAT_14c9a3d60 + 0x78 + lVar5));
      if (*(longlong *)(lVar6 + 0x70 + lVar5) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar3 + 0x60) != 0) {
        FUN_1400020a8();
      }
      FUN_14059507c(&DAT_14c9a3d60,iVar7,1);
    }
    *(undefined4 *)(param_1 + 0x3b) = 0;
  }
  lVar6 = DAT_14c9a3d60;
  if (*(int *)((longlong)param_1 + 0x1cc) != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      iVar7 = *(int *)((longlong)param_1 + 0x1cc) + -1;
      lVar5 = (longlong)iVar7 * 0x88;
      lVar3 = DAT_14c9a3d60 + lVar5;
      FUN_144760e21(*(undefined8 *)(DAT_14c9a3d60 + 0x70 + lVar5),
                    *(undefined4 *)(DAT_14c9a3d60 + 0x78 + lVar5));
      if (*(longlong *)(lVar6 + 0x70 + lVar5) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar3 + 0x60) != 0) {
        FUN_1400020a8();
      }
      FUN_14059507c(&DAT_14c9a3d60,iVar7,1);
    }
    *(undefined4 *)((longlong)param_1 + 0x1cc) = 0;
  }
  lVar6 = DAT_14c9a3d60;
  if (*(int *)(param_1 + 0x38) != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      iVar7 = *(int *)(param_1 + 0x38) + -1;
      lVar5 = (longlong)iVar7 * 0x88;
      lVar3 = DAT_14c9a3d60 + lVar5;
      FUN_144760e21(*(undefined8 *)(DAT_14c9a3d60 + 0x70 + lVar5),
                    *(undefined4 *)(DAT_14c9a3d60 + 0x78 + lVar5));
      if (*(longlong *)(lVar6 + 0x70 + lVar5) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar3 + 0x60) != 0) {
        FUN_1400020a8();
      }
      FUN_14059507c(&DAT_14c9a3d60,iVar7,1);
    }
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  lVar6 = DAT_14c9a3d60;
  if (*(int *)((longlong)param_1 + 0x1ac) != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      iVar7 = *(int *)((longlong)param_1 + 0x1ac) + -1;
      lVar5 = (longlong)iVar7 * 0x88;
      lVar3 = DAT_14c9a3d60 + lVar5;
      FUN_144760e21(*(undefined8 *)(DAT_14c9a3d60 + 0x70 + lVar5),
                    *(undefined4 *)(DAT_14c9a3d60 + 0x78 + lVar5));
      if (*(longlong *)(lVar6 + 0x70 + lVar5) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar3 + 0x60) != 0) {
        FUN_1400020a8();
      }
      FUN_14059507c(&DAT_14c9a3d60,iVar7,1);
    }
    *(undefined4 *)((longlong)param_1 + 0x1ac) = 0;
  }
  lVar6 = DAT_14c9a3d60;
  if (*(int *)(param_1 + 0x34) != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      iVar7 = *(int *)(param_1 + 0x34) + -1;
      lVar5 = (longlong)iVar7 * 0x88;
      lVar3 = DAT_14c9a3d60 + lVar5;
      FUN_144760e21(*(undefined8 *)(DAT_14c9a3d60 + 0x70 + lVar5),
                    *(undefined4 *)(DAT_14c9a3d60 + 0x78 + lVar5));
      if (*(longlong *)(lVar6 + 0x70 + lVar5) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar3 + 0x60) != 0) {
        FUN_1400020a8();
      }
      FUN_14059507c(&DAT_14c9a3d60,iVar7,1);
    }
    *(undefined4 *)(param_1 + 0x34) = 0;
  }
  lVar6 = DAT_14c9a3d60;
  if (*(int *)((longlong)param_1 + 0x194) != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      iVar7 = *(int *)((longlong)param_1 + 0x194) + -1;
      lVar5 = (longlong)iVar7 * 0x88;
      lVar3 = DAT_14c9a3d60 + lVar5;
      FUN_144760e21(*(undefined8 *)(DAT_14c9a3d60 + 0x70 + lVar5),
                    *(undefined4 *)(DAT_14c9a3d60 + 0x78 + lVar5));
      if (*(longlong *)(lVar6 + 0x70 + lVar5) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar3 + 0x60) != 0) {
        FUN_1400020a8();
      }
      FUN_14059507c(&DAT_14c9a3d60,iVar7,1);
    }
    *(undefined4 *)((longlong)param_1 + 0x194) = 0;
  }
  lVar6 = DAT_14c9a3d60;
  if (*(int *)(param_1 + 0x31) != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      iVar7 = *(int *)(param_1 + 0x31) + -1;
      lVar5 = (longlong)iVar7 * 0x88;
      lVar3 = DAT_14c9a3d60 + lVar5;
      FUN_144760e21(*(undefined8 *)(DAT_14c9a3d60 + 0x70 + lVar5),
                    *(undefined4 *)(DAT_14c9a3d60 + 0x78 + lVar5));
      if (*(longlong *)(lVar6 + 0x70 + lVar5) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar3 + 0x60) != 0) {
        FUN_1400020a8();
      }
      FUN_14059507c(&DAT_14c9a3d60,iVar7,1);
    }
    *(undefined4 *)(param_1 + 0x31) = 0;
  }
  plVar4 = (longlong *)param_1[0x30];
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
  FUN_14103ec46(param_1);
  return;
}



// FUNCTION 14103ec46 FUN_14103ec46 body=1794 status=ok
// SIG undefined FUN_14103ec46(void)

void FUN_14103ec46(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  
  *param_1 = &PTR_FUN_14b49e1b0;
  lVar6 = DAT_14c9a3d60;
  if (*(int *)((longlong)param_1 + 0x164) != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      iVar7 = *(int *)((longlong)param_1 + 0x164) + -1;
      lVar5 = (longlong)iVar7 * 0x88;
      lVar3 = DAT_14c9a3d60 + lVar5;
      FUN_144760e21(*(undefined8 *)(DAT_14c9a3d60 + 0x70 + lVar5),
                    *(undefined4 *)(DAT_14c9a3d60 + 0x78 + lVar5));
      if (*(longlong *)(lVar6 + 0x70 + lVar5) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar3 + 0x60) != 0) {
        FUN_1400020a8();
      }
      FUN_14059507c(&DAT_14c9a3d60,iVar7,1);
    }
    *(undefined4 *)((longlong)param_1 + 0x164) = 0;
  }
  lVar6 = DAT_14c9a3d60;
  if (*(int *)(param_1 + 0x2b) != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      iVar7 = *(int *)(param_1 + 0x2b) + -1;
      lVar5 = (longlong)iVar7 * 0x88;
      lVar3 = DAT_14c9a3d60 + lVar5;
      FUN_144760e21(*(undefined8 *)(DAT_14c9a3d60 + 0x70 + lVar5),
                    *(undefined4 *)(DAT_14c9a3d60 + 0x78 + lVar5));
      if (*(longlong *)(lVar6 + 0x70 + lVar5) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar3 + 0x60) != 0) {
        FUN_1400020a8();
      }
      FUN_14059507c(&DAT_14c9a3d60,iVar7,1);
    }
    *(undefined4 *)(param_1 + 0x2b) = 0;
  }
  lVar6 = DAT_14c9a3d60;
  if (*(int *)((longlong)param_1 + 0x14c) != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      iVar7 = *(int *)((longlong)param_1 + 0x14c) + -1;
      lVar5 = (longlong)iVar7 * 0x88;
      lVar3 = DAT_14c9a3d60 + lVar5;
      FUN_144760e21(*(undefined8 *)(DAT_14c9a3d60 + 0x70 + lVar5),
                    *(undefined4 *)(DAT_14c9a3d60 + 0x78 + lVar5));
      if (*(longlong *)(lVar6 + 0x70 + lVar5) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar3 + 0x60) != 0) {
        FUN_1400020a8();
      }
      FUN_14059507c(&DAT_14c9a3d60,iVar7,1);
    }
    *(undefined4 *)((longlong)param_1 + 0x14c) = 0;
  }
  lVar6 = DAT_14c9a3d60;
  if (*(int *)(param_1 + 0x28) != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      iVar7 = *(int *)(param_1 + 0x28) + -1;
      lVar5 = (longlong)iVar7 * 0x88;
      lVar3 = DAT_14c9a3d60 + lVar5;
      FUN_144760e21(*(undefined8 *)(DAT_14c9a3d60 + 0x70 + lVar5),
                    *(undefined4 *)(DAT_14c9a3d60 + 0x78 + lVar5));
      if (*(longlong *)(lVar6 + 0x70 + lVar5) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar3 + 0x60) != 0) {
        FUN_1400020a8();
      }
      FUN_14059507c(&DAT_14c9a3d60,iVar7,1);
    }
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  lVar6 = DAT_14c9a3d60;
  if (*(int *)((longlong)param_1 + 0x134) != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      iVar7 = *(int *)((longlong)param_1 + 0x134) + -1;
      lVar5 = (longlong)iVar7 * 0x88;
      lVar3 = DAT_14c9a3d60 + lVar5;
      FUN_144760e21(*(undefined8 *)(DAT_14c9a3d60 + 0x70 + lVar5),
                    *(undefined4 *)(DAT_14c9a3d60 + 0x78 + lVar5));
      if (*(longlong *)(lVar6 + 0x70 + lVar5) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar3 + 0x60) != 0) {
        FUN_1400020a8();
      }
      FUN_14059507c(&DAT_14c9a3d60,iVar7,1);
    }
    *(undefined4 *)((longlong)param_1 + 0x134) = 0;
  }
  lVar6 = DAT_14c9a3d60;
  if (*(int *)(param_1 + 0x24) != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      iVar7 = *(int *)(param_1 + 0x24) + -1;
      lVar5 = (longlong)iVar7 * 0x88;
      lVar3 = DAT_14c9a3d60 + lVar5;
      FUN_144760e21(*(undefined8 *)(DAT_14c9a3d60 + 0x70 + lVar5),
                    *(undefined4 *)(DAT_14c9a3d60 + 0x78 + lVar5));
      if (*(longlong *)(lVar6 + 0x70 + lVar5) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar3 + 0x60) != 0) {
        FUN_1400020a8();
      }
      FUN_14059507c(&DAT_14c9a3d60,iVar7,1);
    }
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  lVar6 = DAT_14c9a3d60;
  if (*(int *)((longlong)param_1 + 0x114) != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      iVar7 = *(int *)((longlong)param_1 + 0x114) + -1;
      lVar5 = (longlong)iVar7 * 0x88;
      lVar3 = DAT_14c9a3d60 + lVar5;
      FUN_144760e21(*(undefined8 *)(DAT_14c9a3d60 + 0x70 + lVar5),
                    *(undefined4 *)(DAT_14c9a3d60 + 0x78 + lVar5));
      if (*(longlong *)(lVar6 + 0x70 + lVar5) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar3 + 0x60) != 0) {
        FUN_1400020a8();
      }
      FUN_14059507c(&DAT_14c9a3d60,iVar7,1);
    }
    *(undefined4 *)((longlong)param_1 + 0x114) = 0;
  }
  lVar6 = DAT_14c9a3d60;
  if (*(int *)(param_1 + 0x21) != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      iVar7 = *(int *)(param_1 + 0x21) + -1;
      lVar5 = (longlong)iVar7 * 0x88;
      lVar3 = DAT_14c9a3d60 + lVar5;
      FUN_144760e21(*(undefined8 *)(DAT_14c9a3d60 + 0x70 + lVar5),
                    *(undefined4 *)(DAT_14c9a3d60 + 0x78 + lVar5));
      if (*(longlong *)(lVar6 + 0x70 + lVar5) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar3 + 0x60) != 0) {
        FUN_1400020a8();
      }
      FUN_14059507c(&DAT_14c9a3d60,iVar7,1);
    }
    *(undefined4 *)(param_1 + 0x21) = 0;
  }
  lVar6 = DAT_14c9a3d60;
  if (*(int *)((longlong)param_1 + 0xfc) != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      iVar7 = *(int *)((longlong)param_1 + 0xfc) + -1;
      lVar5 = (longlong)iVar7 * 0x88;
      lVar3 = DAT_14c9a3d60 + lVar5;
      FUN_144760e21(*(undefined8 *)(DAT_14c9a3d60 + 0x70 + lVar5),
                    *(undefined4 *)(DAT_14c9a3d60 + 0x78 + lVar5));
      if (*(longlong *)(lVar6 + 0x70 + lVar5) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar3 + 0x60) != 0) {
        FUN_1400020a8();
      }
      FUN_14059507c(&DAT_14c9a3d60,iVar7,1);
    }
    *(undefined4 *)((longlong)param_1 + 0xfc) = 0;
  }
  lVar6 = DAT_14c9a3d60;
  if (*(int *)(param_1 + 0x1e) != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      iVar7 = *(int *)(param_1 + 0x1e) + -1;
      lVar5 = (longlong)iVar7 * 0x88;
      lVar3 = DAT_14c9a3d60 + lVar5;
      FUN_144760e21(*(undefined8 *)(DAT_14c9a3d60 + 0x70 + lVar5),
                    *(undefined4 *)(DAT_14c9a3d60 + 0x78 + lVar5));
      if (*(longlong *)(lVar6 + 0x70 + lVar5) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar3 + 0x60) != 0) {
        FUN_1400020a8();
      }
      FUN_14059507c(&DAT_14c9a3d60,iVar7,1);
    }
    *(undefined4 *)(param_1 + 0x1e) = 0;
  }
  FUN_140368c45(param_1[0x1c],*(undefined4 *)(param_1 + 0x1d));
  if (param_1[0x1c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1a] != 0) {
    FUN_1400020a8();
  }
  if ((longlong *)param_1[0x18] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x18] + 0x10))();
  }
  plVar4 = (longlong *)param_1[0x15];
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
  FUN_144760e21(param_1[0x11],*(undefined4 *)(param_1 + 0x12));
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0xe],*(undefined4 *)(param_1 + 0xf));
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0xb],*(undefined4 *)(param_1 + 0xc));
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 14103f34e FUN_14103f34e body=228 status=ok
// SIG undefined FUN_14103f34e(void)

longlong FUN_14103f34e(void)

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
  if (DAT_14c9a5bc8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14585d82e;
    local_38 = &LAB_1470d1dbf;
    local_40 = &LAB_1462afa90;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x380;
    FUN_14081cfa3(L"/Script/GbxEngine",L"NexusConfigStoreBasicDefFlat",&DAT_14c9a5bc8,&DAT_1470d1dbe
                 );
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c9a5bc8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14103f44a FUN_14103f44a body=98 status=ok
// SIG undefined FUN_14103f44a(void)

void FUN_14103f44a(longlong param_1)

{
  byte bVar1;
  longlong lVar2;
  longlong *plVar3;
  float fVar4;
  
  *(undefined4 *)(param_1 + 0xd0) = 0;
  lVar2 = *(longlong *)(param_1 + 0x30);
  bVar1 = *(byte *)(lVar2 + 0xbd8);
  if ((int)(uint)bVar1 < *(int *)(lVar2 + 0xbf0)) {
    plVar3 = *(longlong **)
              (*(longlong *)(lVar2 + 0xbe8) + 8 + (ulonglong)bVar1 * 0x80 + (ulonglong)bVar1 * 8);
    if (plVar3 != (longlong *)0x0) {
      fVar4 = (float)(**(code **)(*plVar3 + 0x350))();
      *(float *)(param_1 + 0xd0) = (float)*(int *)(param_1 + 0xcc) * fVar4;
    }
  }
  return;
}



// FUNCTION 14103f4ac FUN_14103f4ac body=99 status=ok
// SIG undefined FUN_14103f4ac(void)

void FUN_14103f4ac(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x00014103f50b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014103f4ee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 14103f52e FUN_14103f52e body=96 status=ok
// SIG undefined FUN_14103f52e(void)

ulonglong FUN_14103f52e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 unaff_RDI;
  ulonglong uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_14103f571:
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_14103f571;
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
    bVar7 = *(longlong *)(param_1 + 0x18) != 0;
    uVar6 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),bVar7);
    if (bVar7) {
      (**(code **)(param_1 + 0x28))();
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
  return uVar6 & 0xffffffff;
}



// FUNCTION 14103f58e FUN_14103f58e body=96 status=ok
// SIG undefined FUN_14103f58e(void)

void FUN_14103f58e(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_68 [32];
  code *local_48 [2];
  undefined8 local_38;
  undefined **local_28;
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0;
  local_28 = &PTR_LAB_14b42a450;
  local_48[0] = FUN_143e2dcfc;
  local_20 = param_2;
  local_18 = param_1;
  FUN_14103f5f0(param_1,local_48);
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14103f5f0 FUN_14103f5f0 body=326 status=ok
// SIG undefined FUN_14103f5f0(void)

undefined4 FUN_14103f5f0(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined4 uVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  longlong local_98;
  longlong *local_88 [2];
  longlong local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58 [2];
  longlong *local_48;
  longlong local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((*(int *)(param_1 + 0x18) != 0) && (*(longlong **)(param_1 + 0x10) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x30))();
    if (cVar1 != '\0') {
      local_98 = *param_2;
      local_88[0] = (longlong *)0x0;
      if (local_98 != 0) {
        plVar3 = param_2 + 4;
        if ((longlong *)param_2[2] != (longlong *)0x0) {
          plVar3 = (longlong *)param_2[2];
        }
        (**(code **)*plVar3)(plVar3,local_88);
      }
      if (*(int *)(param_1 + 0x18) == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)(param_1 + 0x10);
      }
      local_58[0] = local_98;
      local_48 = local_88[0];
      local_88[0] = (longlong *)0x0;
      local_38 = local_78;
      uStack_30 = uStack_70;
      local_28 = local_68;
      uStack_24 = uStack_64;
      uStack_20 = uStack_60;
      uStack_1c = uStack_5c;
      if (local_98 != 0) {
        local_98 = 0;
      }
      uVar2 = (**(code **)(*plVar3 + 0x58))(local_68,*(undefined4 *)(param_1 + 0x20),local_58);
      if (local_98 != 0) {
        plVar3 = local_88[0];
        if (local_88[0] == (longlong *)0x0) {
          plVar3 = &local_78;
        }
        (**(code **)(*plVar3 + 0x10))();
      }
      goto LAB_14103f6d0;
    }
  }
  uVar2 = 0;
LAB_14103f6d0:
  if (*param_2 != 0) {
    plVar3 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_2[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_18 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14103f742 FUN_14103f742 body=318 status=ok
// SIG undefined FUN_14103f742(void)

undefined8 * FUN_14103f742(undefined8 *param_1)

{
  char cVar1;
  
  FUN_1406ed334();
  *(byte *)(param_1 + 0x21) = *(byte *)(param_1 + 0x21) & 0xfc;
  *(undefined1 *)(param_1 + 0x1b) = 0;
  *(undefined2 *)(param_1 + 0xb) = 0x201;
  *param_1 = &PTR_FUN_14b215ee0;
  param_1[0x1f] = &PTR_LAB_14b216250;
  param_1[0x20] = &PTR_LAB_14b216280;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  *(undefined4 *)(param_1 + 0x25) = 2;
  *(undefined8 *)((longlong)param_1 + 300) = 0;
  *(undefined8 *)((longlong)param_1 + 0x134) = 0;
  *(undefined8 *)((longlong)param_1 + 0x13c) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x144) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x154) = 0;
  param_1[0x2b] = 2;
  param_1[0x22] = &PTR_FUN_14b1cb830;
  param_1[0x34] = 0;
  *(undefined4 *)(param_1 + 0x35) = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1ac) = 0xffffffff00000080;
  param_1[0x3b] = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1b4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1bc) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1e4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1ec) = 0;
  param_1[0x3f] = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  if (((*(uint *)(param_1 + 1) >> 9 & 1) != 0) || (cVar1 = FUN_145c40fca(param_1,1), cVar1 != '\0'))
  {
    param_1[0x13] = 2;
    param_1[0x14] = 2;
  }
  *(byte *)(param_1 + 0x21) = *(byte *)(param_1 + 0x21) | 2;
  return param_1;
}



// FUNCTION 14103f880 FUN_14103f880 body=925 status=ok
// SIG undefined FUN_14103f880(void)

undefined8 FUN_14103f880(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
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
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  byte bVar19;
  undefined1 uVar20;
  longlong lVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  longlong lVar24;
  
  if (param_4 != 0) {
    lVar24 = 0;
    do {
      *(undefined2 *)(param_2 + 0x10 + lVar24) = *(undefined2 *)(param_3 + 0x10 + lVar24);
      *(undefined8 *)(param_2 + 8 + lVar24) = *(undefined8 *)(param_3 + 8 + lVar24);
      *(undefined8 *)(param_2 + 0x38 + lVar24) = *(undefined8 *)(param_3 + 0x38 + lVar24);
      puVar3 = (undefined4 *)(param_3 + 0x18 + lVar24);
      uVar5 = *puVar3;
      uVar6 = puVar3[1];
      uVar7 = puVar3[2];
      uVar8 = puVar3[3];
      puVar3 = (undefined4 *)(param_3 + 0x28 + lVar24);
      uVar9 = puVar3[1];
      uVar10 = puVar3[2];
      uVar11 = puVar3[3];
      puVar4 = (undefined4 *)(param_2 + 0x28 + lVar24);
      *puVar4 = *puVar3;
      puVar4[1] = uVar9;
      puVar4[2] = uVar10;
      puVar4[3] = uVar11;
      puVar3 = (undefined4 *)(param_2 + 0x18 + lVar24);
      *puVar3 = uVar5;
      puVar3[1] = uVar6;
      puVar3[2] = uVar7;
      puVar3[3] = uVar8;
      *(undefined2 *)(param_2 + 0x48 + lVar24) = *(undefined2 *)(param_3 + 0x48 + lVar24);
      *(undefined8 *)(param_2 + 0x40 + lVar24) = *(undefined8 *)(param_3 + 0x40 + lVar24);
      lVar21 = *(longlong *)(param_3 + 0x50 + lVar24);
      if (DAT_14c950c29 == 1) {
        if (lVar21 == 0) {
          lVar21 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar21 = *(longlong *)(param_3 + 0x50 + lVar24);
        }
      }
      bVar19 = DAT_14c950c29;
      *(longlong *)(param_2 + 0x50 + lVar24) = lVar21;
      lVar21 = *(longlong *)(param_3 + 0x58 + lVar24);
      if ((bVar19 & 1) != 0) {
        if (lVar21 == 0) {
          lVar21 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar21 = *(longlong *)(param_3 + 0x58 + lVar24);
        }
      }
      lVar1 = param_3 + lVar24;
      lVar2 = param_2 + lVar24;
      *(longlong *)(param_2 + 0x58 + lVar24) = lVar21;
      puVar22 = (undefined8 *)(param_3 + 0x60 + lVar24);
      uVar16 = puVar22[1];
      puVar23 = (undefined8 *)(param_3 + 0x70 + lVar24);
      uVar17 = *puVar23;
      uVar18 = puVar23[1];
      puVar23 = (undefined8 *)(param_2 + 0x60 + lVar24);
      *puVar23 = *puVar22;
      puVar23[1] = uVar16;
      puVar22 = (undefined8 *)(param_2 + 0x70 + lVar24);
      *puVar22 = uVar17;
      puVar22[1] = uVar18;
      *(undefined4 *)(param_2 + 0x80 + lVar24) = *(undefined4 *)(param_3 + 0x80 + lVar24);
      puVar3 = (undefined4 *)(param_3 + 0x88 + lVar24);
      uVar5 = puVar3[1];
      uVar6 = puVar3[2];
      uVar7 = puVar3[3];
      puVar4 = (undefined4 *)(param_3 + 0x98 + lVar24);
      uVar8 = *puVar4;
      uVar9 = puVar4[1];
      uVar10 = puVar4[2];
      uVar11 = puVar4[3];
      puVar4 = (undefined4 *)(param_3 + 0xa8 + lVar24);
      uVar12 = *puVar4;
      uVar13 = puVar4[1];
      uVar14 = puVar4[2];
      uVar15 = puVar4[3];
      puVar4 = (undefined4 *)(param_2 + 0x88 + lVar24);
      *puVar4 = *puVar3;
      puVar4[1] = uVar5;
      puVar4[2] = uVar6;
      puVar4[3] = uVar7;
      puVar3 = (undefined4 *)(param_2 + 0x98 + lVar24);
      *puVar3 = uVar8;
      puVar3[1] = uVar9;
      puVar3[2] = uVar10;
      puVar3[3] = uVar11;
      puVar3 = (undefined4 *)(param_2 + 0xa8 + lVar24);
      *puVar3 = uVar12;
      puVar3[1] = uVar13;
      puVar3[2] = uVar14;
      puVar3[3] = uVar15;
      *(undefined8 *)(param_2 + 0xb8 + lVar24) = *(undefined8 *)(param_3 + 0xb8 + lVar24);
      FUN_140d2c6ac(lVar2 + 0xc0,lVar1 + 0xc0);
      *(undefined1 *)(param_2 + 0xd0 + lVar24) = *(undefined1 *)(param_3 + 0xd0 + lVar24);
      puVar3 = (undefined4 *)(param_3 + 0xd8 + lVar24);
      uVar5 = *puVar3;
      uVar6 = puVar3[1];
      uVar7 = puVar3[2];
      uVar8 = puVar3[3];
      puVar3 = (undefined4 *)(param_3 + 0xe8 + lVar24);
      uVar9 = puVar3[1];
      uVar10 = puVar3[2];
      uVar11 = puVar3[3];
      puVar4 = (undefined4 *)(param_2 + 0xe8 + lVar24);
      *puVar4 = *puVar3;
      puVar4[1] = uVar9;
      puVar4[2] = uVar10;
      puVar4[3] = uVar11;
      puVar3 = (undefined4 *)(param_2 + 0xd8 + lVar24);
      *puVar3 = uVar5;
      puVar3[1] = uVar6;
      puVar3[2] = uVar7;
      puVar3[3] = uVar8;
      FUN_14103fc1e(lVar2 + 0xf8,lVar1 + 0xf8);
      puVar22 = (undefined8 *)(lVar1 + 0x108);
      puVar23 = (undefined8 *)(lVar2 + 0x108);
      for (lVar21 = 9; lVar21 != 0; lVar21 = lVar21 + -1) {
        *puVar23 = *puVar22;
        puVar22 = puVar22 + 1;
        puVar23 = puVar23 + 1;
      }
      *(undefined1 *)(param_2 + 0x150 + lVar24) = *(undefined1 *)(param_3 + 0x150 + lVar24);
      *(undefined4 *)(param_2 + 0x160 + lVar24) = *(undefined4 *)(param_3 + 0x160 + lVar24);
      if (lVar2 == lVar1) {
        *(undefined8 *)(param_2 + 0x1a8 + lVar24) = *(undefined8 *)(param_3 + 0x1a8 + lVar24);
        puVar22 = (undefined8 *)(param_3 + 0x198 + lVar24);
        uVar16 = puVar22[1];
        puVar23 = (undefined8 *)(param_2 + 0x198 + lVar24);
        *puVar23 = *puVar22;
        puVar23[1] = uVar16;
      }
      else {
        if (*(char *)(param_3 + 0x168 + lVar24) == '\x01') {
          *(undefined4 *)(param_2 + 0x164 + lVar24) = *(undefined4 *)(param_3 + 0x164 + lVar24);
          uVar20 = 1;
LAB_14103fa52:
          *(undefined1 *)(param_2 + 0x168 + lVar24) = uVar20;
        }
        else if (*(char *)(param_2 + 0x168 + lVar24) == '\x01') {
          uVar20 = 0;
          goto LAB_14103fa52;
        }
        if (*(char *)(param_3 + 0x170 + lVar24) == '\x01') {
          *(undefined4 *)(param_2 + 0x16c + lVar24) = *(undefined4 *)(param_3 + 0x16c + lVar24);
          *(undefined1 *)(param_2 + 0x170 + lVar24) = 1;
        }
        else if (*(char *)(param_2 + 0x170 + lVar24) == '\x01') {
          *(undefined1 *)(param_2 + 0x170 + lVar24) = 0;
        }
        if (*(char *)(param_3 + 400 + lVar24) == '\x01') {
          *(undefined8 *)(param_2 + 0x188 + lVar24) = *(undefined8 *)(param_3 + 0x188 + lVar24);
          puVar22 = (undefined8 *)(param_3 + 0x178 + lVar24);
          uVar16 = puVar22[1];
          puVar23 = (undefined8 *)(param_2 + 0x178 + lVar24);
          *puVar23 = *puVar22;
          puVar23[1] = uVar16;
          *(undefined1 *)(param_2 + 400 + lVar24) = 1;
        }
        else if (*(char *)(param_2 + 400 + lVar24) == '\x01') {
          *(undefined1 *)(param_2 + 400 + lVar24) = 0;
        }
        *(undefined8 *)(param_2 + 0x1a8 + lVar24) = *(undefined8 *)(param_3 + 0x1a8 + lVar24);
        puVar22 = (undefined8 *)(param_3 + 0x198 + lVar24);
        uVar16 = puVar22[1];
        puVar23 = (undefined8 *)(param_2 + 0x198 + lVar24);
        *puVar23 = *puVar22;
        puVar23[1] = uVar16;
        if (*(char *)(param_3 + 0x1d0 + lVar24) == '\x01') {
          puVar22 = (undefined8 *)(param_3 + 0x1b0 + lVar24);
          uVar16 = *puVar22;
          uVar17 = puVar22[1];
          puVar22 = (undefined8 *)(param_3 + 0x1c0 + lVar24);
          uVar18 = puVar22[1];
          puVar23 = (undefined8 *)(param_2 + 0x1c0 + lVar24);
          *puVar23 = *puVar22;
          puVar23[1] = uVar18;
          puVar22 = (undefined8 *)(param_2 + 0x1b0 + lVar24);
          *puVar22 = uVar16;
          puVar22[1] = uVar17;
          *(undefined1 *)(param_2 + 0x1d0 + lVar24) = 1;
        }
        else if (*(char *)(param_2 + 0x1d0 + lVar24) == '\x01') {
          *(undefined1 *)(param_2 + 0x1d0 + lVar24) = 0;
        }
      }
      lVar24 = lVar24 + 0x1e0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14103fc1e FUN_14103fc1e body=89 status=ok
// SIG undefined FUN_14103fc1e(void)

undefined8 * FUN_14103fc1e(undefined8 *param_1,undefined8 *param_2)

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
      FUN_14103fc78(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0x24);
      }
    }
  }
  return param_1;
}



// FUNCTION 14103fc78 FUN_14103fc78 body=334 status=ok
// SIG undefined FUN_14103fc78(void)

void FUN_14103fc78(longlong param_1,int param_2,int param_3)

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
    uVar4 = (longlong)param_2 * 0x24;
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
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14103fcea;
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
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,4);
      }
    }
LAB_14103fcea:
    iVar5 = (int)(uVar4 / 0x24);
    iVar7 = 0x7fffffff;
    if (param_2 <= iVar5) {
      iVar7 = iVar5;
    }
  }
  if (param_3 < iVar7) {
    FUN_1446f8d3c(param_1,0,iVar7,0x24,4);
    param_3 = iVar7;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14103fdc6 FUN_14103fdc6 body=197 status=ok
// SIG undefined FUN_14103fdc6(void)

longlong FUN_14103fdc6(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      do {
        lVar3 = *param_1 + (longlong)iVar1 * 0x60;
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0x60) == *param_3) {
          if (lVar3 != 0) goto LAB_14103fe6e;
          break;
        }
        iVar1 = *(int *)(lVar3 + 0x58);
      } while (iVar1 != -1);
    }
  }
  local_38 = 0;
  local_28 = param_3;
  FUN_14103fe8c(param_1,&local_1c,param_2);
  lVar3 = (longlong)local_1c * 0x60 + *param_1;
LAB_14103fe6e:
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + 8;
}



// FUNCTION 14103fe8c FUN_14103fe8c body=1065 status=ok
// SIG undefined FUN_14103fe8c(void)

int * FUN_14103fe8c(longlong *param_1,int *param_2,uint param_3,undefined8 *param_4,char *param_5)

{
  uint *puVar1;
  void *_Dst;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  byte bVar7;
  int iVar8;
  uint uVar9;
  longlong *plVar10;
  ulonglong uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  char cVar15;
  undefined1 auStack_c8 [40];
  ulonglong local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar13 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar13 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar13) {
      FUN_14488f93c(param_1,iVar13);
    }
    iVar12 = (int)param_1[5];
    if (iVar12 == 0) {
      iVar2 = -1;
    }
    else {
      iVar2 = iVar12 + 0x1e;
      if (-1 < iVar12 + -1) {
        iVar2 = iVar12 + -1;
      }
      iVar2 = iVar2 >> 5;
    }
    plVar10 = param_1 + 2;
    iVar8 = iVar12 + 1;
    iVar14 = iVar12 + 0x1f;
    if (-1 < iVar12) {
      iVar14 = iVar12;
    }
    if (iVar14 >> 5 == iVar2) {
      *(int *)(param_1 + 5) = iVar8;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar12) {
        if (iVar12 + 0x20U < 0xa0) {
          iVar8 = 0x80;
          iVar2 = iVar12;
        }
        else {
          uVar3 = iVar12 + 0x20U >> 5;
          local_a0 = (ulonglong)uVar3;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar9 = 4;
            if (4 < uVar3) {
              uVar9 = uVar3;
            }
          }
          else {
            uVar9 = (uVar3 * 3 >> 3) + uVar3 + 0x10;
          }
          uVar11 = FUN_144a3809e(uVar9 << 2,0);
          iVar2 = (int)(uVar11 >> 2);
          iVar8 = -0x20;
          if ((int)local_a0 <= iVar2) {
            iVar8 = iVar2 << 5;
          }
          iVar2 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar8;
        FUN_1446efbd8(plVar10,iVar2);
        iVar8 = (int)param_1[5] + 1;
      }
      iVar2 = iVar8 + 0x1f;
      if (-1 < iVar8) {
        iVar2 = iVar8;
      }
      *(int *)(param_1 + 5) = iVar8;
      if (iVar8 % 0x20 != 0) {
        plVar6 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar6 = plVar10;
        }
        bVar7 = -(char)(iVar8 % 0x20);
        *(uint *)((longlong)plVar6 + (longlong)(iVar2 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar6 + (longlong)(iVar2 >> 5) * 4) << (bVar7 & 0x1f)) >>
             (bVar7 & 0x1f);
      }
    }
    lVar4 = (longlong)iVar13;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar10 = (longlong *)param_1[4];
    }
    bVar7 = (byte)iVar12 & 0x1f;
    puVar1 = (uint *)((longlong)plVar10 + (longlong)(iVar14 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar7 | 0xfffffffeU >> 0x20 - bVar7);
  }
  else {
    iVar13 = (int)param_1[6];
    lVar4 = (longlong)iVar13;
    iVar12 = *(int *)(*param_1 + 4 + lVar4 * 0x60);
    *(int *)(param_1 + 6) = iVar12;
    iVar2 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar12 * 0x60) = 0xffffffff;
    }
  }
  plVar10 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar10 = (longlong *)param_1[4];
  }
  iVar12 = iVar13 + 0x1f;
  if (-1 < iVar13) {
    iVar12 = iVar13;
  }
  puVar1 = (uint *)((longlong)plVar10 + (longlong)(iVar12 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar13 & 0x1f);
  plVar10 = (longlong *)(*param_1 + lVar4 * 0x60);
  local_78 = 0;
  uStack_60 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  uStack_70 = 0x8000000000;
  puVar5 = (undefined8 *)(lVar4 * 0x60 + *param_1);
  *puVar5 = *(undefined8 *)*param_4;
  puVar5[5] = 0;
  cVar15 = '\0';
  *(undefined4 *)(puVar5 + 6) = 0;
  puVar5[1] = 0;
  puVar5[2] = 0;
  *(undefined8 *)((longlong)puVar5 + 0x34) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar5 + 0x3c) = 0;
  if (puVar5 + 1 != &local_98) {
    *(undefined4 *)((longlong)plVar10 + 0x14) = 0;
    *(undefined4 *)(plVar10 + 3) = 0;
    *(undefined4 *)((longlong)plVar10 + 0x1c) = 0;
    *(undefined4 *)(plVar10 + 4) = 0;
    *(undefined4 *)((longlong)plVar10 + 0x24) = 0;
    *(undefined4 *)((longlong)plVar10 + 0x34) = 0x80;
    uStack_70 = 0;
  }
  local_68 = 0xffffffff;
  *(undefined4 *)(plVar10 + 8) = 0;
  plVar10[9] = 0;
  local_58 = 0;
  *(undefined4 *)(plVar10 + 10) = 0;
  uStack_50 = 0;
  FUN_1410402b6();
  *(undefined4 *)(plVar10 + 0xb) = 0xffffffff;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
      plVar6 = param_1 + 7;
      if ((longlong *)param_1[8] != (longlong *)0x0) {
        plVar6 = (longlong *)param_1[8];
      }
      iVar12 = *(int *)((longlong)plVar6 + (ulonglong)((int)param_1[9] - 1U & param_3) * 4);
      if (iVar12 != -1) {
        do {
          _Dst = (void *)(*param_1 + (longlong)iVar12 * 0x60);
          if (*(longlong *)(*param_1 + (longlong)iVar12 * 0x60) == *plVar10) {
            *(undefined4 *)((longlong)_Dst + 0x50) = 0;
            if (*(longlong *)((longlong)_Dst + 0x48) != 0) {
              FUN_1400020a8();
            }
            FUN_1410402b6((longlong)_Dst + 8);
            memmove(_Dst,plVar10,0x58);
            FUN_1408ee1ac(param_1,iVar13);
            cVar15 = '\x01';
            goto LAB_141040084;
          }
          iVar12 = *(int *)((longlong)_Dst + 0x58);
        } while (iVar12 != -1);
      }
    }
    cVar15 = '\0';
  }
LAB_141040084:
  if (param_5 != (char *)0x0) {
    *param_5 = cVar15;
  }
  if (cVar15 == '\0') {
    uVar3 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
    if (uVar3 < 4) {
      iVar12 = 1;
    }
    else {
      uVar11 = (ulonglong)(uVar3 & 0xfffffffe) + 0xf;
      lVar4 = 0x3f;
      if (uVar11 != 0) {
        for (; uVar11 >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      iVar12 = 1 << ((byte)lVar4 & 0x1f);
    }
    if (((int)uVar3 < 1) || (iVar12 <= (int)param_1[9])) {
      param_3 = (int)param_1[9] - 1U & param_3;
      *(uint *)((longlong)plVar10 + 0x5c) = param_3;
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = param_1 + 7;
      }
      *(undefined4 *)(plVar10 + 0xb) =
           *(undefined4 *)
            ((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)param_3) * 4);
      plVar10 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar10 = param_1 + 7;
      }
      *(int *)((longlong)plVar10 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)param_3) * 4) =
           iVar13;
    }
    else {
      *(int *)(param_1 + 9) = iVar12;
      FUN_14104032a(param_1);
    }
  }
  *param_2 = iVar13;
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410402b6 FUN_1410402b6 body=116 status=ok
// SIG undefined FUN_1410402b6(void)

void FUN_1410402b6(longlong *param_1)

{
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_144727cd0(param_1,0);
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



// FUNCTION 14104032a FUN_14104032a body=598 status=ok
// SIG undefined FUN_14104032a(void)

void FUN_14104032a(longlong *param_1)

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
        lVar13 = (longlong)iVar7 * 0x60;
        uVar2 = *(undefined8 *)(lVar14 + lVar13);
        uVar4 = (uint)((ulonglong)uVar2 >> 0x10);
        uVar15 = (uint)uVar2 & 0xffff;
        uVar11 = (longlong)
                 (int)(((uint)uVar2 << 0x10 | uVar15) + (int)((ulonglong)uVar2 >> 0x20) +
                       (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar15 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar10 = (int)uVar11;
        *(int *)(lVar14 + 0x5c + lVar13) = iVar10;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar14 + 0x58 + lVar13) =
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
            if (iVar3 - lVar14 == lVar13) goto LAB_141040537;
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
LAB_141040537:
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141040582 FUN_141040582 body=347 status=ok
// SIG undefined FUN_141040582(void)

void FUN_141040582(longlong param_1)

{
  void *_Dst;
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined8 **local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x70));
  iVar2 = *(int *)(param_1 + 0xb0);
  if (0 < iVar2) {
    uVar4 = 0;
    do {
      local_48 = *(undefined8 **)(*(longlong *)(param_1 + 0xa8) + (longlong)(int)uVar4 * 8);
      if ((ulonglong)*(uint *)(param_1 + 0x1c) + local_48[0xe] <= *(ulonglong *)(param_1 + 0xb8)) {
        if (~uVar4 + iVar2 != 0) {
          _Dst = (void *)(*(longlong *)(param_1 + 0xa8) + (longlong)(int)uVar4 * 8);
          memmove(_Dst,(void *)((longlong)_Dst + 8),(longlong)(int)(~uVar4 + iVar2) << 3);
          iVar2 = *(int *)(param_1 + 0xb0);
        }
        *(int *)(param_1 + 0xb0) = iVar2 + -1;
        FUN_1410406de(param_1 + 0xa8);
        local_40 = &local_48;
        FUN_14104076e(param_1 + 0x98);
        uVar4 = uVar4 - 1;
        if (local_48 != (undefined8 *)0x0) {
          (**(code **)*local_48)();
        }
      }
      uVar4 = uVar4 + 1;
      iVar2 = *(int *)(param_1 + 0xb0);
    } while ((int)uVar4 < iVar2);
  }
  iVar2 = *(int *)(param_1 + 0xa0);
  if ((longlong)iVar2 != 0) {
    lVar1 = *(longlong *)(param_1 + 0x98);
    lVar3 = 0;
    do {
      *(undefined8 *)(*(longlong *)(lVar1 + lVar3) + 0x80) = 0;
      lVar3 = lVar3 + 8;
    } while ((longlong)iVar2 * 8 != lVar3);
  }
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_1 + 0x60);
  *(longlong *)(param_1 + 0xb8) = *(longlong *)(param_1 + 0xb8) + 1;
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x70));
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410406de FUN_1410406de body=143 status=ok
// SIG undefined FUN_1410406de(void)

void FUN_1410406de(longlong param_1)

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



// FUNCTION 14104076e FUN_14104076e body=211 status=ok
// SIG undefined FUN_14104076e(void)

int FUN_14104076e(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  
  iVar4 = (int)param_1[1];
  lVar5 = (longlong)iVar4;
  if (lVar5 == 0) {
    iVar4 = 0;
  }
  else {
    plVar1 = (longlong *)*param_1;
    iVar3 = 0;
    bVar10 = *plVar1 == *(longlong *)*param_2;
    iVar7 = 0;
    do {
      iVar2 = iVar7 + 1;
      if (iVar7 + 1 < iVar4) {
        iVar2 = iVar4;
      }
      iVar8 = iVar7;
      lVar6 = (longlong)iVar7;
      do {
        lVar6 = lVar6 + 1;
        iVar9 = iVar2;
        if (lVar5 <= lVar6) break;
        iVar8 = iVar8 + 1;
        iVar9 = iVar8;
      } while (bVar10 == (plVar1[lVar6] == *(longlong *)*param_2));
      if (bVar10 == false) {
        if (iVar3 != iVar7) {
          memmove(plVar1 + iVar3,plVar1 + iVar7,(longlong)(iVar9 - iVar7) << 3);
        }
        iVar3 = iVar3 + (iVar9 - iVar7);
      }
      bVar10 = (bool)(bVar10 ^ 1);
      iVar7 = iVar9;
    } while (lVar6 < lVar5);
    *(int *)(param_1 + 1) = iVar3;
    iVar4 = iVar4 - iVar3;
  }
  return iVar4;
}



// FUNCTION 14104084c FUN_14104084c body=138 status=ok
// SIG undefined FUN_14104084c(void)

undefined8 * FUN_14104084c(undefined8 *param_1)

{
  FUN_1400ea704();
  *param_1 = &PTR_FUN_14a3b2e70;
  param_1[5] = &PTR_FUN_14a3b3970;
  param_1[6] = &PTR_FUN_14a3b39b0;
  param_1[0x55] = &PTR_FUN_14a3b3a00;
  param_1[0x56] = &PTR_FUN_14a3b3a80;
  param_1[0x57] = &PTR_FUN_14a3b3a90;
  *(undefined4 *)(param_1 + 0xe3) = 0;
  FUN_1400ea934(param_1,DAT_14cad0ef8,1);
  *(byte *)((longlong)param_1 + 0x675) = *(byte *)((longlong)param_1 + 0x675) & 0xbf;
  *(undefined1 *)((longlong)param_1 + 0x1fb) = 0;
  return param_1;
}



// FUNCTION 1410408d6 FUN_1410408d6 body=219 status=ok
// SIG undefined FUN_1410408d6(void)

longlong * FUN_1410408d6(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_68 [40];
  longlong *local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar3 = (longlong *)FUN_14001cc68(0x40,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14aba4730;
  plVar1 = plVar3 + 2;
  FUN_141040a54(plVar1,param_2,param_3);
  local_40 = plVar1;
  local_38 = plVar3;
  FUN_1410409b2(&local_40,plVar1);
  plVar1 = local_38;
  *param_1 = (longlong)local_40;
  param_1[1] = (longlong)local_38;
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
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410409b2 FUN_1410409b2 body=162 status=ok
// SIG undefined FUN_1410409b2(void)

void FUN_1410409b2(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_1410409f1;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_1410409f1;
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
LAB_1410409f1:
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
                    /* WARNING: Could not recover jumptable at 0x000141040a50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 141040a54 FUN_141040a54 body=304 status=ok
// SIG undefined FUN_141040a54(void)

undefined8 * FUN_141040a54(undefined8 *param_1,longlong param_2,undefined8 *param_3)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  longlong lVar5;
  bool bVar6;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_14ab9f0f0;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1c) = 0;
  param_1[4] = 0;
  *param_1 = &PTR_FUN_14ab9ebf0;
  puVar3 = (uint *)FUN_14001cc68(0xb0,0x10);
  puVar3[1] = 0;
  if (param_2 == 0) {
    *puVar3 = 0;
    uVar2 = 0;
  }
  else {
    uVar2 = *(uint *)(param_2 + 0xc);
    *puVar3 = uVar2;
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar5 = 0;
    }
    uVar2 = *(uint *)(lVar5 + 0x10);
    if (*(uint *)(lVar5 + 0x10) == 0) {
      LOCK();
      iVar1 = DAT_14c964868 + 1;
      UNLOCK();
      uVar4 = DAT_14c964868 + 1;
      bVar6 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar1;
      if (bVar6) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar4);
      }
      LOCK();
      uVar2 = *(uint *)(lVar5 + 0x10);
      bVar6 = uVar2 == 0;
      if (bVar6) {
        *(uint *)(lVar5 + 0x10) = uVar4;
        uVar2 = 0;
      }
      UNLOCK();
      if (bVar6) {
        uVar2 = uVar4;
      }
    }
  }
  puVar3[1] = uVar2;
  *(undefined8 *)(puVar3 + 2) = *param_3;
  *param_3 = 0;
  puVar3[4] = *(uint *)(param_3 + 1);
  puVar3[5] = *(uint *)((longlong)param_3 + 0xc);
  param_3[1] = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[8] = 0;
  puVar3[9] = 0;
  FUN_144b468b0(puVar3 + 0xc);
  *(undefined1 *)(puVar3 + 0x28) = 0;
  param_1[5] = puVar3;
  return param_1;
}



// FUNCTION 141040b84 FUN_141040b84 body=97 status=ok
// SIG undefined FUN_141040b84(void)

undefined8 * FUN_141040b84(undefined8 *param_1)

{
  void *_Dst;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  _Dst = (void *)FUN_14001cc68(0x800);
  memset(_Dst,0,0x800);
  *(undefined4 *)(param_1 + 2) = 1;
  FUN_1411b3bbe(param_1 + 1,0);
  *(void **)param_1[1] = _Dst;
  return param_1;
}



// FUNCTION 141040be6 FUN_141040be6 body=97 status=ok
// SIG undefined FUN_141040be6(void)

undefined8 * FUN_141040be6(undefined8 *param_1)

{
  void *_Dst;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  _Dst = (void *)FUN_14001cc68(0x3000);
  memset(_Dst,0,0x3000);
  *(undefined4 *)(param_1 + 2) = 1;
  FUN_141040c48(param_1 + 1,0);
  *(void **)param_1[1] = _Dst;
  return param_1;
}



// FUNCTION 141040c48 FUN_141040c48 body=353 status=ok
// SIG undefined FUN_141040c48(void)

void FUN_141040c48(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_141040ccd;
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
LAB_141040ccd:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 141040daa FUN_141040daa body=31 status=ok
// SIG undefined FUN_141040daa(void)

undefined8 FUN_141040daa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141040dca FUN_141040dca body=61 status=ok
// SIG undefined FUN_141040dca(void)

undefined8 * FUN_141040dca(undefined8 *param_1)

{
  FUN_14151a66a();
  *param_1 = &PTR_FUN_14b71d640;
  param_1[6] = &PTR_FUN_14b71d940;
  *(uint *)(param_1 + 0x192) = *(uint *)(param_1 + 0x192) & 0xfffffff2 | 9;
  return param_1;
}



// FUNCTION 141040e08 FUN_141040e08 body=96 status=ok
// SIG undefined FUN_141040e08(void)

ulonglong FUN_141040e08(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 unaff_RDI;
  ulonglong uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_141040e4b:
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_141040e4b;
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
    bVar7 = *(longlong *)(param_1 + 0x18) != 0;
    uVar6 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),bVar7);
    if (bVar7) {
      (**(code **)(param_1 + 0x28))();
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
  return uVar6 & 0xffffffff;
}



// FUNCTION 141040e70 FUN_141040e70 body=453 status=ok
// SIG undefined FUN_141040e70(void)

undefined8
FUN_141040e70(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
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
  lVar1 = (**(code **)(*param_1 + 0x180))();
  if ((lVar1 != 0) && (lVar4 = *(longlong *)(lVar1 + 0x1f0), lVar4 != 0)) {
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
      lVar4 = *(longlong *)(lVar1 + 0x1f0);
      if (lVar4 == 0) goto LAB_14104102f;
    }
    uVar3 = 0;
    if ((DAT_14cb5e538 == 0) || (lVar1 = *(longlong *)(lVar4 + 0x10), lVar1 == 0))
    goto LAB_141040f61;
    if (((*(int *)(DAT_14cb5e538 + 0x38) <= *(int *)(lVar1 + 0x38)) &&
        (((*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(DAT_14cb5e538 + 0x38) * 8)
           == DAT_14cb5e538 + 0x30 && (*(longlong *)(lVar4 + 0x1e0) != 0)) &&
         (lVar1 = *(longlong *)(*(longlong *)(lVar4 + 0x1e0) + 0x68), lVar1 != 0)))) &&
       (((-1 < *(short *)(param_2 + 0x18) &&
         (plVar2 = (longlong *)FUN_140d1732e(lVar1,param_2 + 0x18), plVar2 != (longlong *)0x0)) &&
        (plVar2 = (longlong *)(**(code **)(*plVar2 + 0x1058))(plVar2), plVar2 != (longlong *)0x0))))
    {
      (**(code **)(*plVar2 + 0x30))(plVar2,param_5);
      uVar3 = 1;
      goto LAB_141040f61;
    }
  }
LAB_14104102f:
  uVar3 = 0;
LAB_141040f61:
  if ((local_18 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 141041038 FUN_141041038 body=290 status=ok
// SIG undefined FUN_141041038(void)

longlong * FUN_141041038(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_78 [40];
  longlong *local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar3 = (longlong *)FUN_14001cc68(0x88,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14b400950;
  plVar3[3] = 0;
  plVar3[4] = 0;
  plVar3[5] = 0;
  plVar3[6] = 0;
  plVar3[2] = (longlong)&PTR_FUN_14b3e38b0;
  plVar3[9] = 0;
  plVar3[10] = 0;
  *(undefined4 *)(plVar3 + 0xb) = 0;
  plVar3[0xc] = 0;
  plVar3[0xd] = 0;
  plVar3[7] = *(longlong *)(param_1 + 8);
  *(undefined4 *)(plVar3 + 8) = *(undefined4 *)(param_1 + 0x10);
  FUN_1447715ec(plVar3 + 9,param_1 + 0x18);
  plVar3[0xe] = 0;
  plVar3[0xf] = 0;
  plVar3[0x10] = 0;
  local_50 = plVar3 + 2;
  local_48 = plVar3;
  FUN_14104115c(&local_50,plVar3 + 2);
  plVar3 = local_48;
  *param_2 = (longlong)local_50;
  param_2[1] = (longlong)local_48;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_48 + 1) = (int)local_48[1] + 1;
    UNLOCK();
    if (local_48 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_48 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_48)(local_48);
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
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14104115c FUN_14104115c body=157 status=ok
// SIG undefined FUN_14104115c(void)

void FUN_14104115c(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_141041196;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_141041196;
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
LAB_141041196:
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
                    /* WARNING: Could not recover jumptable at 0x0001410411f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1410411fa FUN_1410411fa body=38 status=ok
// SIG undefined FUN_1410411fa(void)

undefined8 FUN_1410411fa(longlong param_1,undefined8 param_2)

{
  FUN_141041220(*(undefined8 *)(param_1 + 8));
  return param_2;
}



// FUNCTION 141041220 FUN_141041220 body=1365 status=ok
// SIG undefined FUN_141041220(void)

undefined8 *
FUN_141041220(longlong param_1,undefined8 *param_2,longlong *param_3,longlong *param_4,
             longlong *param_5)

{
  undefined4 *puVar1;
  code *pcVar2;
  int iVar3;
  undefined8 uVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong lVar13;
  uint uVar14;
  undefined1 auStack_108 [44];
  undefined1 local_dc [4];
  undefined1 local_d8 [16];
  longlong local_c8 [2];
  longlong *local_b8 [2];
  undefined4 *local_a8;
  undefined8 uStack_a0;
  longlong local_98;
  ulonglong uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  longlong *local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_98 = *param_3;
  uStack_90 = param_3[1];
  local_88 = (undefined4)*param_4;
  uStack_84 = *(undefined4 *)((longlong)param_4 + 4);
  uStack_80 = (undefined4)param_4[1];
  uStack_7c = *(undefined4 *)((longlong)param_4 + 0xc);
  uVar12 = param_4[1];
  local_78 = 0;
  uStack_70 = 0;
  uVar8 = *param_4 + 0x9ae16a3b2f90404f;
  uVar9 = ((uVar8 << 0x27 | uVar8 >> 0x19) + uVar12) * -0x651e95c4d06fbf91;
  uVar12 = ((uVar12 << 0x1b | uVar12 >> 0x25) * -0x651e95c4d06fbf91 + uVar8 ^ uVar9) *
           -0x651e95c4d06fbf91;
  lVar13 = (uVar12 >> 0x2f ^ uVar9 ^ uVar12) * -0x651e95c4d06fbf91;
  uVar10 = (uint)((ulonglong)lVar13 >> 0x2f) ^ (uint)lVar13;
  uVar12 = local_98 + 0x9ae16a3b2f90404f;
  uVar8 = ((uVar12 << 0x27 | uVar12 >> 0x19) + uStack_90) * -0x651e95c4d06fbf91;
  uVar12 = ((uStack_90 << 0x1b | uStack_90 >> 0x25) * -0x651e95c4d06fbf91 + uVar12 ^ uVar8) *
           -0x651e95c4d06fbf91;
  lVar13 = (uVar12 >> 0x2f ^ uVar8 ^ uVar12) * -0x651e95c4d06fbf91;
  uVar5 = uVar10 * 0x2f90406f >> 0xd ^
          (((uint)((ulonglong)lVar13 >> 0x2f) ^ (uint)lVar13) - uVar10) * 0x2f90406f;
  uVar11 = uVar5 << 8 ^ (uVar10 * -0x2f90406f + -0x61c88647) - uVar5;
  uVar10 = uVar11 >> 0xd ^ (uVar10 * 0x2f90406f - uVar5) - uVar11;
  uVar5 = uVar10 >> 0xc ^ (uVar5 - uVar11) - uVar10;
  uVar14 = uVar5 << 0x10 ^ (uVar11 - uVar10) - uVar5;
  uVar10 = uVar14 >> 5 ^ (uVar10 - uVar5) - uVar14;
  uVar11 = uVar10 >> 3 ^ (uVar5 - uVar14) - uVar10;
  uVar5 = uVar11 << 10 ^ (uVar14 - uVar10) - uVar11;
  uVar5 = uVar5 >> 0xf ^ uVar10 - (uVar11 + uVar5);
  uVar10 = uVar5 >> 0xd ^ 0xcfed5815 - uVar5;
  uVar11 = uVar10 << 8 ^ (-0x61c88647 - uVar5) - uVar10;
  uVar5 = uVar11 >> 0xd ^ (uVar5 - uVar10) - uVar11;
  uVar10 = uVar5 >> 0xc ^ (uVar10 - uVar11) - uVar5;
  uVar11 = uVar10 << 0x10 ^ (uVar11 - uVar5) - uVar10;
  uVar14 = uVar11 >> 5 ^ (uVar5 - uVar10) - uVar11;
  uVar5 = uVar14 >> 3 ^ (uVar10 - uVar11) - uVar14;
  uVar10 = uVar5 << 10 ^ (uVar11 - uVar14) - uVar5;
  iVar3 = FUN_141041776((longlong *)(param_1 + 0x50),uVar10 >> 0xf ^ uVar14 - (uVar5 + uVar10));
  if (iVar3 != -1) {
    lVar13 = *(longlong *)(param_1 + 0x50);
    lVar6 = lVar13 + (longlong)iVar3 * 0x80;
    if ((lVar6 != 0) && ((longlong)iVar3 * 0x80 + lVar13 != -0x30)) {
      local_60 = param_5;
      pcVar2 = *(code **)(lVar6 + 0x30);
      plVar7 = (longlong *)(lVar6 + 0x50);
      if (*(longlong **)(lVar6 + 0x40) != (longlong *)0x0) {
        plVar7 = *(longlong **)(lVar6 + 0x40);
      }
      uVar4 = (**(code **)(*plVar7 + 8))();
      (*pcVar2)(param_2,uVar4,param_4,&local_60);
      goto LAB_141041485;
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
  FUN_14006620a(local_c8,param_4[8],(ulonglong)(param_4[9] - param_4[8]) >> 1);
  FUN_140233b1a(local_b8,local_c8);
  local_60 = (longlong *)CONCAT44(local_60._4_4_,4);
  FUN_14023423e(&local_50,local_b8);
  uVar12 = uStack_a0;
  lVar13 = (longlong)(int)uStack_a0;
  uVar5 = (int)uStack_a0 + 1;
  uStack_a0 = CONCAT44(uStack_a0._4_4_,uVar5);
  if (uStack_a0._4_4_ < uVar5) {
    FUN_140188694(&local_a8,uVar12 & 0xffffffff);
  }
  puVar1 = local_a8 + lVar13 * 8;
  *puVar1 = (undefined4)local_60;
  puVar1[1] = local_60._4_4_;
  puVar1[2] = uStack_58;
  puVar1[3] = uStack_54;
  if (local_50 == (longlong *)0x0) {
    *(undefined8 *)(local_a8 + lVar13 * 8 + 4) = 0;
    local_a8[lVar13 * 8 + 6] = 0;
  }
  else {
    FUN_14023423e(local_a8 + lVar13 * 8 + 4,&local_50);
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
  FUN_1413a400a(local_c8,L"PostUnaryExecutionError");
  FUN_1413a400a(local_dc,L"ExpressionParser");
  FUN_140208bae(local_b8,local_dc,local_c8,L"Post-unary operator {0} cannot operate on {1}");
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
LAB_141041485:
  if ((local_40 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141041776 FUN_141041776 body=222 status=ok
// SIG undefined FUN_141041776(void)

int FUN_141041776(longlong *param_1,uint param_2,int *param_3)

{
  longlong lVar1;
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
        lVar5 = (longlong)iVar2 * 0x80;
        if (((((*(int *)(lVar3 + lVar5) == *param_3) && (*(int *)(lVar3 + 4 + lVar5) == param_3[1]))
             && (*(int *)(lVar3 + 8 + lVar5) == param_3[2])) &&
            ((((*(int *)(lVar3 + 0xc + lVar5) == param_3[3] &&
               (lVar1 = lVar3 + lVar5, *(int *)(lVar1 + 0x10) == param_3[4])) &&
              ((*(int *)(lVar1 + 0x14) == param_3[5] &&
               ((*(int *)(lVar1 + 0x18) == param_3[6] && (*(int *)(lVar1 + 0x1c) == param_3[7]))))))
             && (*(int *)(lVar1 + 0x20) == param_3[8])))) &&
           (((*(int *)(lVar1 + 0x24) == param_3[9] && (*(int *)(lVar1 + 0x28) == param_3[10])) &&
            (*(int *)(lVar1 + 0x2c) == param_3[0xb])))) {
          return iVar2;
        }
        iVar2 = *(int *)(lVar3 + 0x70 + lVar5);
      } while (iVar2 != -1);
    }
  }
  return -1;
}



// FUNCTION 141041862 FUN_141041862 body=302 status=ok
// SIG undefined FUN_141041862(void)

void FUN_141041862(longlong param_1,longlong param_2)

{
  undefined1 auStack_78 [32];
  undefined8 local_58 [4];
  undefined2 local_38;
  undefined1 local_30;
  undefined1 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((*(byte *)(param_2 + 0x28) & 1) != 0) {
    if ((ulonglong)*(byte *)(param_1 + 0x2b8) < 3) {
      *(undefined8 *)(param_1 + 0xb8) =
           *(undefined8 *)(&PTR_DAT_14b406038)[*(byte *)(param_1 + 0x2b8)];
      *(undefined1 *)(param_1 + 0x2b8) = 3;
    }
    if (*(longlong *)(param_1 + 0x2b0) != 0) {
      *(longlong *)(param_1 + 0xb8) = *(longlong *)(param_1 + 0x2b0);
      *(undefined8 *)(param_1 + 0x2b0) = DAT_14caa8578;
    }
    if (*(char *)(param_1 + 0x2e8) != '\0') {
      FUN_144983130(param_1 + 0xc0,param_1 + 0x2c0);
      local_58[0] = 0;
      local_38 = 0;
      local_30 = 0;
      local_28 = 0;
      FUN_1403719a4(param_1 + 0x2c0,local_58);
      FUN_144a2da94(local_58);
    }
    if (*(char *)(param_1 + 800) != '\0') {
      FUN_144983130(param_1 + 0xf8,param_1 + 0x2f8);
      local_58[0] = 0;
      local_38 = 0;
      local_30 = 0;
      local_28 = 0;
      FUN_1403719a4(param_1 + 0x2f8,local_58);
      FUN_144a2da94(local_58);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141041992 FUN_141041992 body=97 status=ok
// SIG undefined FUN_141041992(void)

void FUN_141041992(longlong param_1)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14066e964();
  local_30 = FUN_140343d7a(param_1);
  FUN_1410419f4(&local_28);
  *(undefined4 *)(param_1 + 0x108) = local_28;
  *(undefined4 *)(param_1 + 0x10c) = uStack_24;
  *(undefined4 *)(param_1 + 0x110) = uStack_20;
  *(undefined4 *)(param_1 + 0x114) = uStack_1c;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410419f4 FUN_1410419f4 body=196 status=ok
// SIG undefined FUN_1410419f4(void)

uint * FUN_1410419f4(uint *param_1,longlong *param_2)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong lVar4;
  uint uVar5;
  bool bVar6;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  lVar4 = *param_2;
  if (lVar4 != 0) {
    uVar3 = FUN_1407ca880();
    lVar4 = FUN_144718840(lVar4,uVar3);
    *(longlong *)(param_1 + 2) = lVar4;
    if (lVar4 != 0) {
      if (*param_2 == 0) {
        *param_1 = 0;
        uVar2 = 0;
      }
      else {
        uVar2 = *(uint *)(*param_2 + 0xc);
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
          uVar5 = DAT_14c964868 + 1;
          bVar6 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar1;
          if (bVar6) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,uVar5);
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
        }
      }
      param_1[1] = uVar2;
    }
  }
  return param_1;
}



// FUNCTION 141041ab8 FUN_141041ab8 body=3781 status=ok
// SIG undefined FUN_141041ab8(void)

void FUN_141041ab8(longlong *param_1,undefined8 param_2,longlong param_3)

{
  ulonglong uVar1;
  byte *pbVar2;
  char *pcVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong lVar7;
  uint *puVar8;
  size_t sVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  longlong *plVar14;
  undefined8 *puVar15;
  uint uVar16;
  longlong *plVar17;
  uint uVar18;
  longlong *plVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  longlong lVar22;
  longlong lVar23;
  char *pcVar24;
  longlong lVar25;
  int iVar26;
  ulonglong uVar27;
  undefined1 auStack_178 [32];
  undefined8 *local_158;
  undefined8 *local_150;
  ulonglong local_148;
  undefined1 local_140;
  undefined8 local_138;
  undefined1 local_130;
  undefined1 local_119;
  longlong *local_118;
  int local_110;
  int local_10c;
  longlong *local_108;
  longlong *local_100;
  uint local_f4;
  longlong *local_f0;
  ulonglong local_e8;
  longlong *local_e0;
  longlong local_d8;
  ulonglong local_d0;
  undefined8 ***local_c8;
  undefined4 local_c0;
  undefined8 local_bc;
  undefined4 local_b4;
  undefined8 ***local_b0;
  undefined4 local_a8;
  undefined8 ***local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined4 local_88;
  char *local_80;
  int local_78;
  undefined1 local_74;
  undefined8 ***local_70;
  longlong *local_68;
  undefined8 local_60;
  int local_58;
  undefined4 uStack_54;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  local_d8 = param_3;
  FUN_1447f69b6(param_1 + 1);
  *(undefined1 *)((longlong)param_1 + 0x155) = 1;
  (**(code **)(*param_1 + 0x10))(param_1,0);
  local_119 = *(undefined1 *)((longlong)param_1 + 0x153);
  *(undefined1 *)((longlong)param_1 + 0x153) = 1;
  local_90 = DAT_14cb7d080;
  local_88 = DAT_14cb7d088;
  FUN_1448075d0(&local_70);
  puVar6 = (undefined8 *)FUN_144a06846(param_2,&local_70);
  pbVar2 = (byte *)*puVar6;
  plVar19 = &DAT_14c9a1288;
  if ((pbVar2 != (byte *)0x0) && ((*pbVar2 & 2) != 0)) {
    plVar19 = (longlong *)(*(longlong *)(pbVar2 + 8) + 0x18);
  }
  if (CONCAT44(uStack_54,local_58) != 0) {
    FUN_1400020a8();
  }
  local_108 = plVar19 + 3;
  local_70 = (undefined8 ***)&DAT_100000000;
  local_60 = 0xffffffff;
  local_58 = 0;
  local_68 = local_108;
  if ((int)plVar19[6] == 0) {
    uVar21 = 1;
    local_60._0_4_ = 0xffffffff;
    iVar13 = 0;
    local_60._4_4_ = 0;
    uVar27 = 0;
  }
  else {
    FUN_1449c0562(&local_70);
    uVar27 = (ulonglong)local_70 & 0xffffffff;
    uVar21 = (ulonglong)local_70 >> 0x20;
    iVar13 = (int)plVar19[6];
  }
  if (local_60._4_4_ != iVar13 || local_68 != local_108) {
    local_e0 = param_1 + 0x6c;
    uVar18 = (uint)local_60;
    iVar5 = local_60._4_4_;
    iVar26 = local_58;
    local_118 = param_1;
    local_110 = iVar13;
    local_100 = plVar19;
    local_f0 = local_68;
    do {
      lVar23 = *local_100 + (longlong)iVar5 * 0x40;
      iVar13 = *(int *)(*local_100 + (longlong)iVar5 * 0x40);
      if (((iVar13 == 0) || (iVar5 = *(int *)(lVar23 + 4), iVar5 == 0)) || (iVar13 == DAT_14c948000)
         ) {
LAB_141042861:
        local_98 = DAT_14c948620;
        local_b0 = DAT_14c948618;
      }
      else {
        if ((iVar5 < 2) && (*(int *)(lVar23 + 0x24) < 1)) {
          puVar6 = (undefined8 *)(lVar23 + 8);
        }
        else {
          puVar6 = *(undefined8 **)(lVar23 + 0x18);
        }
        if (iVar5 < 1) goto LAB_141042861;
        local_98 = *(undefined4 *)(puVar6 + 1);
        local_b0 = (undefined8 ****)*puVar6;
      }
      local_a8 = local_98;
      local_a0 = local_b0;
      FUN_1448075d0(&local_70,&local_b0);
      bVar4 = true;
      if (((DAT_14cb86df8 != 0) && (lVar7 = FUN_144837462(DAT_14cb86df8,&local_70), lVar7 != 0)) &&
         (*(char *)(lVar7 + 0x58) != '\0')) {
        bVar4 = false;
      }
      if (CONCAT44(uStack_54,local_58) != 0) {
        FUN_1400020a8();
      }
      plVar19 = (longlong *)(lVar23 + 0x28);
      local_10c = iVar26;
      local_f4 = uVar18;
      local_e8 = uVar21;
      local_d0 = uVar27;
      if (bVar4) {
        local_70 = &local_a0;
        local_68 = plVar19;
        FUN_14884d642(local_e0,&local_80,&local_70);
      }
      else {
        local_78 = DAT_14cb88980;
        local_80 = DAT_14cb88978;
        FUN_1448075d0(&local_70,&local_80);
        pbVar2 = (byte *)*plVar19;
        puVar6 = &DAT_14c9a1308;
        if (pbVar2 != (byte *)0x0) {
          plVar14 = &DAT_14c9a1288;
          if ((*pbVar2 & 2) != 0) {
            plVar14 = (longlong *)(*(longlong *)(pbVar2 + 8) + 0x18);
          }
          puVar6 = &DAT_14c9a1308;
          if ((int)plVar14[2] != *(int *)((longlong)plVar14 + 0x3c)) {
            plVar17 = plVar14 + 8;
            if ((longlong *)plVar14[9] != (longlong *)0x0) {
              plVar17 = (longlong *)plVar14[9];
            }
            iVar13 = *(int *)((longlong)plVar17 +
                             (ulonglong)((int)plVar14[10] - 1U & (uint)local_70) * 4);
            puVar6 = &DAT_14c9a1308;
            if (iVar13 != -1) {
              do {
                lVar23 = *plVar14 + (longlong)iVar13 * 0x40;
                if (*(uint *)(*plVar14 + (longlong)iVar13 * 0x40) == (uint)local_70) {
                  puVar6 = &DAT_14c9a1308;
                  if (lVar23 == 0) goto LAB_141041e18;
                  puVar15 = (undefined8 *)(lVar23 + 0x28);
                  puVar6 = &DAT_14c9a1308;
                  if ((puVar15 == (undefined8 *)0x0) ||
                     (((byte *)*puVar15 != (byte *)0x0 &&
                      (puVar6 = puVar15, (*(byte *)*puVar15 & 0x40) == 0)))) goto LAB_141041e18;
                  break;
                }
                iVar13 = *(int *)(lVar23 + 0x38);
              } while (iVar13 != -1);
              puVar6 = &DAT_14c9a1308;
            }
          }
        }
LAB_141041e18:
        pbVar2 = (byte *)*puVar6;
        if (((pbVar2 == (byte *)0x0) || ((*pbVar2 & 3) != 1)) ||
           (pcVar3 = *(char **)(pbVar2 + 8), pcVar3 == (char *)0x0)) {
LAB_141041e29:
          uVar27 = 0;
          uVar21 = 0;
        }
        else {
          sVar9 = strlen(pcVar3);
          iVar13 = (int)sVar9;
          if (iVar13 == 0) goto LAB_141041e29;
          lVar23 = (longlong)iVar13;
          pcVar24 = pcVar3 + lVar23 + -1;
          if (pcVar24 < pcVar3) {
            lVar7 = 0;
LAB_1410425b2:
            local_74 = 0;
            local_80 = pcVar3;
            local_78 = iVar13;
            uVar18 = FUN_14001a6c0(&local_80,1);
            uVar27 = lVar7 << 0x20;
            uVar21 = (ulonglong)uVar18;
          }
          else {
            uVar18 = 0;
            do {
              if (9 < (byte)(*pcVar24 - 0x30U)) break;
              uVar18 = uVar18 + 1;
              pcVar24 = pcVar24 + -1;
            } while (pcVar3 <= pcVar24);
            if ((((uVar18 == 0) || (iVar13 <= (int)uVar18)) ||
                ((10 < uVar18 || (lVar25 = -(ulonglong)uVar18, pcVar3[lVar25 + lVar23 + -1] != '_'))
                )) || ((uVar18 != 1 && (pcVar3[lVar25 + lVar23] == '0')))) {
              lVar7 = 0;
            }
            else {
              lVar22 = 0;
              do {
                lVar7 = (longlong)pcVar3[lVar25 + lVar23] + lVar22 * 10;
                lVar22 = lVar7 + -0x30;
                lVar25 = lVar25 + 1;
              } while (lVar25 != 0);
              if (lVar22 < 0x7fffffff) {
                iVar13 = ~uVar18 + iVar13;
                lVar7 = lVar7 + -0x2f;
              }
              else {
                lVar7 = 0;
              }
            }
            if (iVar13 != 0) goto LAB_1410425b2;
            uVar21 = 0;
            uVar27 = 0;
          }
        }
        if (CONCAT44(uStack_54,local_58) != 0) {
          FUN_1400020a8();
        }
        uVar1 = DAT_14cb88718;
        local_70 = (undefined8 ****)0x0;
        local_68 = (longlong *)((ulonglong)local_68 & 0xffffffff00000000);
        local_80 = (char *)0x0;
        local_78 = 0;
        local_130 = 0;
        local_138 = 0;
        local_140 = 0;
        local_150 = (undefined8 *)((ulonglong)local_150 & 0xffffffffffffff00);
        local_158 = &DAT_14cb88978;
        local_148 = uVar27 | uVar21;
        (**(code **)(*local_118 + 0x50))(local_118,&local_a0,&local_80,&local_70);
        local_78 = DAT_14cb889d0;
        local_80 = DAT_14cb889c8;
        FUN_1448075d0(&local_70,&local_80);
        pbVar2 = (byte *)*plVar19;
        puVar6 = &DAT_14c9a1308;
        if (pbVar2 != (byte *)0x0) {
          plVar14 = &DAT_14c9a1288;
          if ((*pbVar2 & 2) != 0) {
            plVar14 = (longlong *)(*(longlong *)(pbVar2 + 8) + 0x18);
          }
          puVar6 = &DAT_14c9a1308;
          if ((int)plVar14[2] != *(int *)((longlong)plVar14 + 0x3c)) {
            plVar17 = plVar14 + 8;
            if ((longlong *)plVar14[9] != (longlong *)0x0) {
              plVar17 = (longlong *)plVar14[9];
            }
            iVar13 = *(int *)((longlong)plVar17 +
                             (ulonglong)((int)plVar14[10] - 1U & (uint)local_70) * 4);
            puVar6 = &DAT_14c9a1308;
            if (iVar13 != -1) {
              do {
                lVar23 = *plVar14 + (longlong)iVar13 * 0x40;
                if (*(uint *)(*plVar14 + (longlong)iVar13 * 0x40) == (uint)local_70) {
                  puVar6 = &DAT_14c9a1308;
                  if (lVar23 == 0) goto LAB_141041f70;
                  puVar15 = (undefined8 *)(lVar23 + 0x28);
                  puVar6 = &DAT_14c9a1308;
                  if ((puVar15 == (undefined8 *)0x0) ||
                     (((byte *)*puVar15 != (byte *)0x0 &&
                      (puVar6 = puVar15, (*(byte *)*puVar15 & 0x40) == 0)))) goto LAB_141041f70;
                  break;
                }
                iVar13 = *(int *)(lVar23 + 0x38);
              } while (iVar13 != -1);
              puVar6 = &DAT_14c9a1308;
            }
          }
        }
LAB_141041f70:
        pbVar2 = (byte *)*puVar6;
        if ((pbVar2 == (byte *)0x0) || ((*pbVar2 & 3) != 1)) {
          local_148 = 0;
          uVar20 = 0;
        }
        else {
          pcVar3 = *(char **)(pbVar2 + 8);
          if (pcVar3 != (char *)0x0) {
            sVar9 = strlen(pcVar3);
            local_78 = (int)sVar9;
            if (local_78 != 0) {
              lVar23 = (longlong)local_78;
              pcVar24 = pcVar3 + lVar23 + -1;
              if (pcVar24 < pcVar3) {
                lVar7 = 0;
              }
              else {
                uVar18 = 0;
                do {
                  if (9 < (byte)(*pcVar24 - 0x30U)) break;
                  uVar18 = uVar18 + 1;
                  pcVar24 = pcVar24 + -1;
                } while (pcVar3 <= pcVar24);
                if (((((uVar18 == 0) || (local_78 <= (int)uVar18)) || (10 < uVar18)) ||
                    (lVar25 = -(ulonglong)uVar18, pcVar3[lVar25 + lVar23 + -1] != '_')) ||
                   ((uVar18 != 1 && (pcVar3[lVar25 + lVar23] == '0')))) {
LAB_14104264f:
                  lVar7 = 0;
                }
                else {
                  lVar22 = 0;
                  do {
                    lVar7 = (longlong)pcVar3[lVar25 + lVar23] + lVar22 * 10;
                    lVar22 = lVar7 + -0x30;
                    lVar25 = lVar25 + 1;
                  } while (lVar25 != 0);
                  if (0x7ffffffe < lVar22) goto LAB_14104264f;
                  local_78 = ~uVar18 + local_78;
                  lVar7 = lVar7 + -0x2f;
                }
                if (local_78 == 0) goto LAB_1410427e0;
              }
              local_74 = 0;
              local_80 = pcVar3;
              uVar18 = FUN_14001a6c0(&local_80,1);
              uVar20 = lVar7 << 0x20;
              local_148 = (ulonglong)uVar18;
              goto LAB_141041f80;
            }
          }
LAB_1410427e0:
          local_148 = 0;
          uVar20 = 0;
        }
LAB_141041f80:
        local_148 = local_148 | uVar20;
        local_80 = (char *)0x0;
        local_78 = 0;
        local_bc = 0;
        local_b4 = 0;
        local_130 = 0;
        local_138 = 0;
        local_140 = 0;
        local_150 = (undefined8 *)((ulonglong)local_150 & 0xffffffffffffff00);
        local_158 = &DAT_14cb889c8;
        (**(code **)(*local_118 + 0x50))(local_118,&local_a0,&local_bc,&local_80);
        if (CONCAT44(uStack_54,local_58) != 0) {
          FUN_1400020a8();
        }
        local_78 = DAT_14cb7c8e0;
        local_80 = DAT_14cb7c8d8;
        FUN_1448075d0(&local_70,&local_80);
        pbVar2 = (byte *)*plVar19;
        local_150 = &DAT_14c9a1308;
        if (pbVar2 != (byte *)0x0) {
          plVar14 = &DAT_14c9a1288;
          if ((*pbVar2 & 2) != 0) {
            plVar14 = (longlong *)(*(longlong *)(pbVar2 + 8) + 0x18);
          }
          local_150 = &DAT_14c9a1308;
          if ((int)plVar14[2] != *(int *)((longlong)plVar14 + 0x3c)) {
            plVar17 = plVar14 + 8;
            if ((longlong *)plVar14[9] != (longlong *)0x0) {
              plVar17 = (longlong *)plVar14[9];
            }
            iVar13 = *(int *)((longlong)plVar17 +
                             (ulonglong)((int)plVar14[10] - 1U & (uint)local_70) * 4);
            local_150 = &DAT_14c9a1308;
            if (iVar13 != -1) {
              do {
                lVar23 = *plVar14 + (longlong)iVar13 * 0x40;
                if (*(uint *)(*plVar14 + (longlong)iVar13 * 0x40) == (uint)local_70) {
                  local_150 = &DAT_14c9a1308;
                  if (lVar23 == 0) goto LAB_1410420bf;
                  puVar6 = (undefined8 *)(lVar23 + 0x28);
                  local_150 = &DAT_14c9a1308;
                  if ((puVar6 == (undefined8 *)0x0) ||
                     (((byte *)*puVar6 != (byte *)0x0 &&
                      (local_150 = puVar6, (*(byte *)*puVar6 & 0x40) == 0)))) goto LAB_1410420bf;
                  break;
                }
                iVar13 = *(int *)(lVar23 + 0x38);
              } while (iVar13 != -1);
              local_150 = &DAT_14c9a1308;
            }
          }
        }
LAB_1410420bf:
        local_80 = (char *)0x0;
        local_78 = 0;
        local_bc = 0;
        local_b4 = 0;
        local_158 = (undefined8 *)CONCAT71(local_158._1_7_,3);
        FUN_1410451f2(local_118,&local_a0,&local_bc,&local_80);
        if (CONCAT44(uStack_54,local_58) != 0) {
          FUN_1400020a8();
        }
        if ((uVar27 | uVar21) != uVar1) {
          local_78 = DAT_14cb7c8c8;
          local_80 = DAT_14cb7c8c0;
          FUN_1448075d0(&local_70,&local_80);
          local_150 = (undefined8 *)FUN_144a06846(plVar19,&local_70);
          local_80 = (char *)0x0;
          local_78 = 0;
          local_bc = 0;
          local_b4 = 0;
          local_158 = (undefined8 *)CONCAT71(local_158._1_7_,1);
          FUN_1410451f2(local_118,&local_a0,&local_bc,&local_80);
          if (CONCAT44(uStack_54,local_58) != 0) {
            FUN_1400020a8();
          }
        }
        local_78 = DAT_14cb7d0a0;
        local_80 = DAT_14cb7d098;
        FUN_1448075d0(&local_70,&local_80);
        pbVar2 = (byte *)*plVar19;
        puVar6 = &DAT_14c9a1308;
        if (pbVar2 != (byte *)0x0) {
          plVar19 = &DAT_14c9a1288;
          if ((*pbVar2 & 2) != 0) {
            plVar19 = (longlong *)(*(longlong *)(pbVar2 + 8) + 0x18);
          }
          puVar6 = &DAT_14c9a1308;
          if ((int)plVar19[2] != *(int *)((longlong)plVar19 + 0x3c)) {
            plVar14 = plVar19 + 8;
            if ((longlong *)plVar19[9] != (longlong *)0x0) {
              plVar14 = (longlong *)plVar19[9];
            }
            iVar13 = *(int *)((longlong)plVar14 +
                             (ulonglong)((int)plVar19[10] - 1U & (uint)local_70) * 4);
            puVar6 = &DAT_14c9a1308;
            if (iVar13 != -1) {
              do {
                lVar23 = *plVar19 + (longlong)iVar13 * 0x40;
                if (*(uint *)(*plVar19 + (longlong)iVar13 * 0x40) == (uint)local_70) {
                  puVar6 = &DAT_14c9a1308;
                  if (lVar23 == 0) goto LAB_141042262;
                  puVar15 = (undefined8 *)(lVar23 + 0x28);
                  puVar6 = &DAT_14c9a1308;
                  if ((puVar15 == (undefined8 *)0x0) ||
                     (((byte *)*puVar15 != (byte *)0x0 &&
                      (puVar6 = puVar15, (*(byte *)*puVar15 & 0x40) == 0)))) goto LAB_141042262;
                  break;
                }
                iVar13 = *(int *)(lVar23 + 0x38);
              } while (iVar13 != -1);
              puVar6 = &DAT_14c9a1308;
            }
          }
        }
LAB_141042262:
        if (CONCAT44(uStack_54,local_58) != 0) {
          FUN_1400020a8();
        }
        pbVar2 = (byte *)*puVar6;
        plVar19 = &DAT_14c9a1288;
        if ((pbVar2 != (byte *)0x0) && (plVar19 = &DAT_14c9a1288, (*pbVar2 & 2) != 0)) {
          plVar19 = (longlong *)(*(longlong *)(pbVar2 + 8) + 0x18);
        }
        iVar13 = (int)plVar19[6];
        if (iVar13 == 0) {
          uVar21 = 1;
          uVar27 = 0;
          iVar5 = 0;
          iVar26 = 0;
        }
        else {
          puVar8 = (uint *)plVar19[5];
          if ((uint *)plVar19[5] == (uint *)0x0) {
            puVar8 = (uint *)(plVar19 + 3);
          }
          uVar18 = *puVar8;
          if (uVar18 == 0) {
            iVar5 = iVar13 + 0x1e;
            if (-1 < iVar13 + -1) {
              iVar5 = iVar13 + -1;
            }
            uVar27 = 0;
            uVar21 = (ulonglong)(uint)(iVar5 >> 5);
            if (iVar5 >> 5 < 1) {
              uVar21 = uVar27;
            }
            iVar26 = 0;
            do {
              if (uVar21 == uVar27) goto LAB_14104245b;
              iVar26 = iVar26 + 0x20;
              uVar18 = puVar8[uVar27 + 1];
              uVar27 = uVar27 + 1;
            } while (uVar18 == 0);
          }
          else {
            uVar27 = 0;
            iVar26 = 0;
          }
          uVar21 = (ulonglong)(-uVar18 & uVar18);
          uVar1 = uVar21 * 2 + 1;
          lVar23 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar23 == 0; lVar23 = lVar23 + -1) {
            }
          }
          iVar5 = (iVar26 - ((uint)lVar23 ^ 0x3f)) + 0x3e;
          if (iVar13 <= iVar5) {
            iVar5 = iVar13;
          }
        }
        if (iVar5 != iVar13) {
          uVar18 = 0xffffffff;
          do {
            lVar23 = *plVar19 + (longlong)iVar5 * 0x40;
            iVar5 = *(int *)(*plVar19 + (longlong)iVar5 * 0x40);
            local_c8 = DAT_14c948618;
            local_c0 = DAT_14c948620;
            if (((iVar5 != 0) && (iVar12 = *(int *)(lVar23 + 4), iVar12 != 0)) &&
               (iVar5 != DAT_14c948000)) {
              if ((iVar12 < 2) && (*(int *)(lVar23 + 0x24) < 1)) {
                puVar6 = (undefined8 *)(lVar23 + 8);
              }
              else {
                puVar6 = *(undefined8 **)(lVar23 + 0x18);
              }
              if (0 < iVar12) {
                local_c0 = *(undefined4 *)(puVar6 + 1);
                local_c8 = (undefined8 ****)*puVar6;
              }
            }
            local_68 = (longlong *)CONCAT44(local_68._4_4_,local_c0);
            local_70 = local_c8;
            FUN_14104297e(local_118,lVar23 + 0x28,&local_c8,&local_a0);
            uVar18 = uVar18 & ~(uint)uVar21;
            puVar8 = (uint *)plVar19[5];
            if ((uint *)plVar19[5] == (uint *)0x0) {
              puVar8 = (uint *)(plVar19 + 3);
            }
            iVar12 = (int)plVar19[6];
            iVar5 = (int)uVar27;
            lVar23 = (longlong)iVar5;
            uVar16 = puVar8[lVar23] & uVar18;
            if (uVar16 == 0) {
              iVar10 = iVar12 + 0x1e;
              if (-1 < iVar12 + -1) {
                iVar10 = iVar12 + -1;
              }
              iVar10 = iVar10 >> 5;
              iVar26 = iVar26 + 0x20;
              iVar11 = iVar10;
              if (iVar10 < iVar5) {
                iVar11 = iVar5;
              }
              if (iVar5 < iVar10) {
                lVar7 = 0;
                do {
                  uVar16 = puVar8[lVar23 + lVar7 + 1];
                  if (uVar16 != 0) {
                    uVar27 = (ulonglong)(iVar5 + (int)lVar7 + 1);
                    uVar18 = 0xffffffff;
                    goto LAB_14104242e;
                  }
                  iVar26 = iVar26 + 0x20;
                  lVar7 = lVar7 + 1;
                } while (iVar11 - lVar23 != lVar7);
                uVar18 = 0xffffffff;
                iVar5 = iVar11;
              }
              uVar27 = (ulonglong)(iVar5 + 1);
              iVar5 = iVar12;
            }
            else {
LAB_14104242e:
              uVar21 = (ulonglong)(-uVar16 & uVar16);
              uVar1 = uVar21 * 2 + 1;
              lVar23 = 0x3f;
              if (uVar1 != 0) {
                for (; uVar1 >> lVar23 == 0; lVar23 = lVar23 + -1) {
                }
              }
              iVar5 = (iVar26 - ((uint)lVar23 ^ 0x3f)) + 0x3e;
              if (iVar12 <= iVar5) {
                iVar5 = iVar12;
              }
            }
          } while (iVar5 != iVar13);
        }
      }
LAB_14104245b:
      uVar18 = local_f4 & ~(uint)local_e8;
      plVar19 = (longlong *)local_f0[2];
      if ((longlong *)local_f0[2] == (longlong *)0x0) {
        plVar19 = local_f0;
      }
      iVar13 = (int)local_f0[3];
      iVar5 = (int)local_d0;
      lVar23 = (longlong)iVar5;
      uVar16 = *(uint *)((longlong)plVar19 + lVar23 * 4) & uVar18;
      uVar27 = local_d0;
      iVar26 = local_10c;
      if (uVar16 == 0) {
        iVar12 = iVar13 + 0x1e;
        if (-1 < iVar13 + -1) {
          iVar12 = iVar13 + -1;
        }
        iVar12 = iVar12 >> 5;
        iVar26 = local_10c + 0x20;
        iVar10 = iVar12;
        if (iVar12 < iVar5) {
          iVar10 = iVar5;
        }
        if (iVar5 < iVar12) {
          lVar7 = 0;
          do {
            uVar16 = *(uint *)((longlong)plVar19 + lVar7 * 4 + lVar23 * 4 + 4);
            if (uVar16 != 0) {
              uVar18 = 0xffffffff;
              uVar27 = (ulonglong)(iVar5 + (int)lVar7 + 1);
              goto LAB_1410424f8;
            }
            iVar26 = iVar26 + 0x20;
            lVar7 = lVar7 + 1;
          } while (iVar10 - lVar23 != lVar7);
          uVar18 = 0xffffffff;
          iVar5 = iVar10;
        }
        uVar27 = (ulonglong)(iVar5 + 1);
        uVar21 = local_e8;
        iVar5 = iVar13;
      }
      else {
LAB_1410424f8:
        uVar21 = (ulonglong)(-uVar16 & uVar16);
        uVar1 = uVar21 * 2 + 1;
        lVar23 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar23 == 0; lVar23 = lVar23 + -1) {
          }
        }
        iVar5 = (iVar26 - ((uint)lVar23 ^ 0x3f)) + 0x3e;
        if (iVar13 <= iVar5) {
          iVar5 = iVar13;
        }
      }
    } while ((iVar5 != local_110) || (param_1 = local_118, local_f0 != local_108));
  }
  if (local_d8 != 0) {
    FUN_141045628(param_1);
  }
  FUN_1410458c4(param_1);
  *(undefined1 *)((longlong)param_1 + 0x152) = 1;
  *(undefined1 *)((longlong)param_1 + 0x153) = local_119;
  FUN_141042ee2(param_1);
  if ((local_48 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14104297e FUN_14104297e body=1378 status=ok
// SIG undefined FUN_14104297e(void)

void FUN_14104297e(longlong param_1,undefined8 *param_2,int *param_3,undefined8 *param_4)

{
  int *piVar1;
  byte *pbVar2;
  char *_Str;
  int iVar3;
  longlong lVar4;
  size_t sVar5;
  undefined8 uVar6;
  uint uVar7;
  uint uVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  char *pcVar12;
  longlong lVar13;
  longlong lVar14;
  bool bVar15;
  undefined1 auStack_168 [40];
  undefined8 local_140;
  int local_138;
  undefined8 local_130;
  undefined4 local_128;
  undefined8 local_120;
  int local_118;
  int local_114 [2];
  int local_10c;
  undefined8 local_108;
  int local_100;
  undefined **local_f8;
  undefined8 *local_f0;
  undefined8 local_e8;
  longlong *local_e0;
  char *local_d8;
  uint5 uStack_d0;
  undefined3 uStack_cb;
  longlong local_c0;
  int *local_a8;
  int local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 local_94;
  longlong local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined5 uStack_68;
  undefined3 uStack_63;
  undefined4 uStack_60;
  uint uStack_5c;
  undefined4 uStack_58;
  undefined2 local_54;
  undefined8 local_50;
  undefined8 uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_168;
  uVar8 = param_3[2];
  if (0 < (int)uVar8) {
    if (*(int *)(param_1 + 0x310) != *(int *)(param_1 + 0x33c)) {
      lVar4 = param_1 + 0x340;
      if (*(longlong *)(param_1 + 0x348) != 0) {
        lVar4 = *(longlong *)(param_1 + 0x348);
      }
      iVar3 = *(int *)(lVar4 + (ulonglong)(*(int *)(param_1 + 0x350) + 0x7fffffffU & uVar8) * 4);
      if (iVar3 != -1) {
        do {
          if (*(uint *)(*(longlong *)(param_1 + 0x308) + (longlong)iVar3 * 0xc) == uVar8)
          goto LAB_141042ae8;
          iVar3 = *(int *)(*(longlong *)(param_1 + 0x308) + (longlong)iVar3 * 0xc + 4);
        } while (iVar3 != -1);
      }
    }
    _uStack_d0 = CONCAT44(stack0xffffffffffffff34,DAT_14cb7c910);
    local_d8 = DAT_14cb7c908;
    FUN_1448075d0(&local_a8);
    puVar10 = (undefined8 *)FUN_144a06846(param_2,&local_a8);
    local_e8 = *puVar10;
    local_e0 = (longlong *)puVar10[1];
    if (local_e0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_e0 + 1) = (int)local_e0[1] + 1;
      UNLOCK();
    }
    if (local_90 != 0) {
      FUN_1400020a8();
    }
    local_f8 = &PTR_FUN_14b400330;
    local_f0 = &local_e8;
    uStack_58 = 0;
    local_90 = 0;
    uStack_88 = 0;
    local_80 = 0;
    uStack_78 = 0;
    local_70 = 0;
    uStack_68 = 0;
    uStack_63 = 0;
    uStack_60 = 0;
    uStack_5c = uStack_5c & 0xffffff00;
    local_54 = 1;
    local_50 = 0;
    uStack_48 = 0;
    uStack_9c = (undefined4)*param_4;
    uStack_98 = (undefined4)((ulonglong)*param_4 >> 0x20);
    local_94 = *(undefined4 *)(param_4 + 1);
    local_a8 = *(int **)param_3;
    local_a0 = param_3[2];
    FUN_1406249ee();
    local_108 = *(undefined8 *)param_3;
    local_100 = param_3[2];
    FUN_1448075d0(&local_d8);
    lVar4 = FUN_14060eaf6(&local_d8);
    if (local_c0 != 0) {
      FUN_1400020a8();
    }
    if ((lVar4 != 0) && (*(char *)(lVar4 + 0x751) == '\x01')) {
      uStack_5c = 1;
      uStack_58 = 0;
    }
    local_d8 = (char *)0x0;
    _uStack_d0 = 0;
    FUN_140ffe232(param_1,local_114,&local_a8);
    if (local_114[0] == *param_3) {
      bVar15 = local_10c == param_3[2];
    }
    else {
      bVar15 = false;
    }
    FUN_148844468(&local_a8);
    plVar9 = local_e0;
    if (local_e0 != (longlong *)0x0) {
      LOCK();
      plVar11 = local_e0 + 1;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)*plVar11 == 0) {
        (**(code **)*local_e0)(local_e0);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
    }
    if (!bVar15) goto LAB_141042ae8;
  }
  _uStack_d0 = CONCAT44(stack0xffffffffffffff34,DAT_14cb88980);
  local_d8 = DAT_14cb88978;
  FUN_1448075d0(&local_a8);
  pbVar2 = (byte *)*param_2;
  if (pbVar2 != (byte *)0x0) {
    if ((*pbVar2 & 2) == 0) {
      plVar9 = &DAT_14c9a1288;
    }
    else {
      plVar9 = (longlong *)(*(longlong *)(pbVar2 + 8) + 0x18);
    }
    if ((int)plVar9[2] != *(int *)((longlong)plVar9 + 0x3c)) {
      plVar11 = plVar9 + 8;
      if ((longlong *)plVar9[9] != (longlong *)0x0) {
        plVar11 = (longlong *)plVar9[9];
      }
      iVar3 = *(int *)((longlong)plVar11 + (ulonglong)((int)plVar9[10] - 1U & (uint)local_a8) * 4);
      if (iVar3 != -1) {
        do {
          lVar4 = *plVar9 + (longlong)iVar3 * 0x40;
          if (*(uint *)(*plVar9 + (longlong)iVar3 * 0x40) == (uint)local_a8) {
            if ((((lVar4 != 0) &&
                 (puVar10 = (undefined8 *)(lVar4 + 0x28), puVar10 != (undefined8 *)0x0)) &&
                ((byte *)*puVar10 != (byte *)0x0)) && ((*(byte *)*puVar10 & 0x40) == 0))
            goto LAB_141042a58;
            break;
          }
          iVar3 = *(int *)(lVar4 + 0x38);
        } while (iVar3 != -1);
      }
    }
  }
  puVar10 = &DAT_14c9a1308;
LAB_141042a58:
  pbVar2 = (byte *)*puVar10;
  if (((pbVar2 != (byte *)0x0) && ((*pbVar2 & 3) == 1)) &&
     (_Str = *(char **)(pbVar2 + 8), _Str != (char *)0x0)) {
    sVar5 = strlen(_Str);
    uVar8 = (uint)sVar5;
    if (uVar8 != 0) {
      lVar4 = (longlong)(int)uVar8;
      pcVar12 = _Str + lVar4 + -1;
      if (_Str <= pcVar12) {
        uVar7 = 0;
        do {
          if (9 < (byte)(*pcVar12 - 0x30U)) break;
          uVar7 = uVar7 + 1;
          pcVar12 = pcVar12 + -1;
        } while (_Str <= pcVar12);
        if (((uVar7 != 0) && ((int)uVar7 < (int)uVar8)) &&
           (((uVar7 < 0xb && (lVar13 = -(ulonglong)uVar7, _Str[lVar13 + lVar4 + -1] == '_')) &&
            ((uVar7 == 1 || (_Str[lVar13 + lVar4] != '0')))))) {
          lVar14 = 0;
          do {
            lVar14 = (longlong)_Str[lVar13 + lVar4] + lVar14 * 10 + -0x30;
            lVar13 = lVar13 + 1;
          } while (lVar13 != 0);
          if (lVar14 < 0x7fffffff) {
            uVar8 = ~uVar7 + uVar8;
          }
        }
        if (uVar8 == 0) goto LAB_141042a64;
      }
      uStack_d0 = (uint5)uVar8;
      local_d8 = _Str;
      FUN_14001a6c0(&local_d8,1);
    }
  }
LAB_141042a64:
  if (local_90 != 0) {
    FUN_1400020a8();
  }
  local_120 = *(undefined8 *)param_3;
  local_118 = param_3[2];
  FUN_1448075d0(&local_a8);
  lVar4 = FUN_14060eaf6(&local_a8);
  if (local_90 != 0) {
    FUN_1400020a8();
  }
  if (lVar4 == 0) {
    if (*(int *)(param_4 + 1) != 0) {
      FUN_144a78877(*(undefined4 *)param_4,*(int *)(param_4 + 1));
    }
    uVar6 = FUN_14884cf52(param_1 + 0x3b0);
    if (param_3[2] != 0) {
      FUN_144a78877(*param_3,param_3[2]);
    }
    iVar3 = FUN_14884d5e2(uVar6);
    if (iVar3 == -1) {
      local_a0 = (int)param_2;
      uStack_9c = (undefined4)((ulonglong)param_2 >> 0x20);
      local_a8 = param_3;
      FUN_14884d642(uVar6,&local_d8);
    }
  }
  else {
    local_128 = *(undefined4 *)(param_4 + 1);
    local_130 = *param_4;
    local_140 = *(undefined8 *)param_3;
    local_138 = param_3[2];
    FUN_14104336c(param_1,param_2);
  }
LAB_141042ae8:
  if ((local_40 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141042ee2 FUN_141042ee2 body=216 status=ok
// SIG undefined FUN_141042ee2(void)

void FUN_141042ee2(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  
  if ((longlong)*(int *)(param_1 + 0x1c8) != 0) {
    plVar8 = *(longlong **)(param_1 + 0x1c0);
    plVar1 = plVar8 + *(int *)(param_1 + 0x1c8);
    do {
      lVar7 = (longlong)*(int *)(*plVar8 + 0x68);
      if (lVar7 != 0) {
        plVar10 = *(longlong **)(*plVar8 + 0x60);
        plVar2 = plVar10 + lVar7;
        do {
          lVar7 = (longlong)*(int *)(*plVar10 + 0x80);
          if (lVar7 != 0) {
            lVar3 = *(longlong *)(*plVar10 + 0x78);
            lVar9 = 0;
            do {
              plVar6 = (longlong *)FUN_140a62cae(*(undefined8 *)(lVar3 + lVar9));
              lVar4 = *plVar6;
              if (lVar4 != 0) {
                cVar5 = FUN_141042fba(lVar4);
                if (cVar5 == '\x05') {
                  cVar5 = '\x04';
                }
                FUN_141043170(lVar4,cVar5);
              }
              lVar9 = lVar9 + 8;
            } while (lVar7 * 8 != lVar9);
          }
          plVar10 = plVar10 + 1;
        } while (plVar10 != plVar2);
      }
      plVar8 = plVar8 + 1;
    } while (plVar8 != plVar1);
  }
  *(undefined1 *)(param_1 + 0x155) = 0;
  FUN_1447f69b6(param_1 + 0x20);
  return;
}



// FUNCTION 141042fba FUN_141042fba body=90 status=ok
// SIG undefined FUN_141042fba(void)

void FUN_141042fba(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x20);
  if (lVar1 == 0) {
    local_18 = 0;
  }
  else {
    FUN_1403a0728(lVar1 + 0x38,&local_18);
  }
  FUN_141043016(local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141043016 FUN_141043016 body=346 status=ok
// SIG undefined FUN_141043016(void)

undefined8 FUN_141043016(longlong param_1)

{
  undefined8 uVar1;
  
  if (DAT_14cb888d8 == param_1) {
    uVar1 = 0;
  }
  else if (DAT_14cb888e0 == param_1) {
    uVar1 = 1;
  }
  else if (DAT_14cb888e8 == param_1) {
    uVar1 = 2;
  }
  else if (DAT_14cb888f0 == param_1) {
    uVar1 = 3;
  }
  else {
    uVar1 = 4;
    if (DAT_14cb88930 != param_1) {
      if (DAT_14cb888f8 == param_1) {
        uVar1 = 5;
      }
      else if (DAT_14cb88990 == param_1) {
        uVar1 = 6;
      }
      else if (DAT_14cb88998 == param_1) {
        uVar1 = 7;
      }
      else if (DAT_14cb889a0 == param_1) {
        uVar1 = 8;
      }
      else if (DAT_14cb889a8 == param_1) {
        uVar1 = 9;
      }
      else if (DAT_14cb88958 == param_1) {
        uVar1 = 10;
      }
      else if (DAT_14cb88968 == param_1) {
        uVar1 = 0xb;
      }
      else if (DAT_14cb88960 == param_1) {
        uVar1 = 0xc;
      }
      else if (DAT_14cb88970 == param_1) {
        uVar1 = 0xd;
      }
      else if (DAT_14cb88938 == param_1) {
        uVar1 = 0xe;
      }
      else if (DAT_14cb88940 == param_1) {
        uVar1 = 0xf;
      }
      else if (DAT_14cb88948 == param_1) {
        uVar1 = 0x10;
      }
      else {
        uVar1 = 0x11;
        if (DAT_14cb88950 != param_1) {
          uVar1 = 0;
        }
      }
    }
  }
  return uVar1;
}



// FUNCTION 141043170 FUN_141043170 body=357 status=ok
// SIG undefined FUN_141043170(void)

void FUN_141043170(longlong param_1,undefined1 param_2)

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
  switch(param_2) {
  case 0:
    uVar2 = DAT_14cb888d8;
    break;
  case 1:
    uVar2 = DAT_14cb888e0;
    break;
  case 2:
    uVar2 = DAT_14cb888e8;
    break;
  case 3:
    uVar2 = DAT_14cb888f0;
    break;
  case 4:
    uVar2 = DAT_14cb88930;
    break;
  case 5:
    uVar2 = DAT_14cb888f8;
    break;
  case 6:
    uVar2 = DAT_14cb88990;
    break;
  case 7:
    uVar2 = DAT_14cb88998;
    break;
  case 8:
    uVar2 = DAT_14cb889a0;
    break;
  case 9:
    uVar2 = DAT_14cb889a8;
    break;
  case 10:
    uVar2 = DAT_14cb88958;
    break;
  case 0xb:
    uVar2 = DAT_14cb88968;
    break;
  case 0xc:
    uVar2 = DAT_14cb88960;
    break;
  case 0xd:
    uVar2 = DAT_14cb88970;
    break;
  case 0xe:
    uVar2 = DAT_14cb88938;
    break;
  case 0xf:
    uVar2 = DAT_14cb88940;
    break;
  case 0x10:
    uVar2 = DAT_14cb88948;
    break;
  case 0x11:
    uVar2 = DAT_14cb88950;
    break;
  default:
    uVar3 = 0;
    uVar2 = 0;
    goto LAB_1410431b5;
  }
  uVar3 = uVar2 & 0xffffffff00000000;
LAB_1410431b5:
  uVar1 = *(undefined8 *)(param_1 + 8);
  local_28[0] = 0;
  local_24 = 0;
  local_1c = 0;
  FUN_144976b9c(local_28,uVar2 & 0xffffffff | uVar3);
  FUN_1410432d6(uVar1,local_28,1);
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1410432d6 FUN_1410432d6 body=149 status=ok
// SIG undefined FUN_1410432d6(void)

void FUN_1410432d6(longlong param_1,undefined4 *param_2,uint param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  longlong lVar5;
  
  if (*(char *)(*(longlong *)(param_1 + 8) + 0x150) != '\x03') {
    lVar5 = *(longlong *)(param_1 + 0x20);
    if (lVar5 == 0) {
      lVar5 = FUN_1403a1b12(*(longlong *)(param_1 + 8),param_1,&DAT_14cb88978,0,0);
      *(longlong *)(param_1 + 0x20) = lVar5;
      if (lVar5 == 0) {
        return;
      }
    }
    cVar4 = FUN_1403218c0((undefined4 *)(lVar5 + 0x38),param_2);
    if (cVar4 == '\0') {
      uVar1 = param_2[1];
      uVar2 = param_2[2];
      uVar3 = param_2[3];
      *(undefined4 *)(lVar5 + 0x38) = *param_2;
      *(undefined4 *)(lVar5 + 0x3c) = uVar1;
      *(undefined4 *)(lVar5 + 0x40) = uVar2;
      *(undefined4 *)(lVar5 + 0x44) = uVar3;
      *(undefined8 *)(lVar5 + 0x58) = 0;
      FUN_140bde2c8(*(undefined8 *)(lVar5 + 0x30),lVar5,param_3 ^ 1);
      return;
    }
  }
  return;
}



// FUNCTION 14104336c FUN_14104336c body=7763 status=ok
// SIG undefined FUN_14104336c(void)

void FUN_14104336c(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  byte *pbVar1;
  undefined4 uVar2;
  uint uVar3;
  longlong lVar4;
  size_t sVar5;
  uint *puVar6;
  int iVar7;
  int iVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  wchar_t *pwVar13;
  uint uVar14;
  longlong *plVar15;
  int iVar16;
  ulonglong uVar17;
  wchar_t *pwVar18;
  longlong lVar19;
  longlong lVar20;
  uint uVar21;
  int iVar22;
  ulonglong uVar23;
  undefined8 uVar24;
  uint *puVar25;
  ulonglong uVar26;
  longlong lVar27;
  longlong lVar28;
  undefined1 auStack_138 [32];
  undefined8 *local_118;
  undefined8 *local_110;
  ulonglong local_108;
  undefined1 local_100;
  undefined8 local_f8;
  undefined1 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  ulonglong local_d8;
  uint local_cc;
  ulonglong local_c8;
  ulonglong local_c0;
  uint *local_b8;
  ulonglong local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  uint local_94;
  wchar_t *local_90;
  undefined8 uStack_88;
  longlong local_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  longlong *local_70;
  undefined8 local_68;
  longlong *plStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_e0 = param_3;
  lVar4 = FUN_144976d68(param_1,param_4,1);
  if ((lVar4 == 0) || (lVar4 = FUN_1403a09ea(param_1,lVar4,local_e0,1), lVar4 == 0))
  goto LAB_141044781;
  uStack_88 = (longlong *)CONCAT44(uStack_88._4_4_,DAT_14cb88980);
  local_90 = DAT_14cb88978;
  FUN_1448075d0(&local_70);
  pbVar1 = (byte *)*param_2;
  if (pbVar1 != (byte *)0x0) {
    if ((*pbVar1 & 2) == 0) {
      plVar9 = &DAT_14c9a1288;
    }
    else {
      plVar9 = (longlong *)(*(longlong *)(pbVar1 + 8) + 0x18);
    }
    if ((int)plVar9[2] != *(int *)((longlong)plVar9 + 0x3c)) {
      plVar11 = plVar9 + 8;
      if ((longlong *)plVar9[9] != (longlong *)0x0) {
        plVar11 = (longlong *)plVar9[9];
      }
      iVar22 = *(int *)((longlong)plVar11 + (ulonglong)((int)plVar9[10] - 1U & (uint)local_70) * 4);
      if (iVar22 != -1) {
        do {
          lVar20 = *plVar9 + (longlong)iVar22 * 0x40;
          if (*(uint *)(*plVar9 + (longlong)iVar22 * 0x40) == (uint)local_70) {
            if ((((lVar20 != 0) &&
                 (puVar10 = (undefined8 *)(lVar20 + 0x28), puVar10 != (undefined8 *)0x0)) &&
                ((byte *)*puVar10 != (byte *)0x0)) && ((*(byte *)*puVar10 & 0x40) == 0))
            goto LAB_141043471;
            break;
          }
          iVar22 = *(int *)(lVar20 + 0x38);
        } while (iVar22 != -1);
      }
    }
  }
  puVar10 = &DAT_14c9a1308;
LAB_141043471:
  pbVar1 = (byte *)*puVar10;
  if (((pbVar1 == (byte *)0x0) || ((*pbVar1 & 3) != 1)) ||
     (pwVar13 = *(wchar_t **)(pbVar1 + 8), pwVar13 == (wchar_t *)0x0)) {
LAB_14104347d:
    local_d8 = 0;
    uVar23 = 0;
  }
  else {
    sVar5 = strlen((char *)pwVar13);
    uVar3 = (uint)sVar5;
    if (uVar3 == 0) goto LAB_14104347d;
    lVar20 = (longlong)(int)uVar3;
    pwVar18 = (wchar_t *)((longlong)pwVar13 + lVar20 + -1);
    uVar14 = 0;
    if (pwVar18 < pwVar13) {
      lVar28 = 0;
    }
    else {
      do {
        if (9 < (byte)((char)*pwVar18 - 0x30U)) break;
        uVar14 = uVar14 + 1;
        pwVar18 = (wchar_t *)((longlong)pwVar18 + -1);
      } while (pwVar13 <= pwVar18);
      lVar28 = 0;
      if (((uVar14 != 0) && ((int)uVar14 < (int)uVar3)) &&
         ((lVar28 = 0, uVar14 < 0xb &&
          (lVar19 = -(ulonglong)uVar14, *(char *)((longlong)pwVar13 + lVar19 + lVar20 + -1) == '_'))
         )) {
        if ((uVar14 == 1) || (*(char *)((longlong)pwVar13 + lVar19 + lVar20) != '0')) {
          lVar27 = 0;
          do {
            lVar28 = (longlong)*(char *)((longlong)pwVar13 + lVar19 + lVar20) + lVar27 * 10;
            lVar27 = lVar28 + -0x30;
            lVar19 = lVar19 + 1;
          } while (lVar19 != 0);
          if (lVar27 < 0x7fffffff) {
            uVar3 = ~uVar14 + uVar3;
            lVar28 = lVar28 + -0x2f;
            goto LAB_14104489e;
          }
        }
        lVar28 = 0;
      }
LAB_14104489e:
      if (uVar3 == 0) goto LAB_14104347d;
    }
    uStack_88._0_5_ = (uint5)uVar3;
    local_90 = pwVar13;
    uVar3 = FUN_14001a6c0(&local_90,1);
    uVar23 = lVar28 << 0x20;
    local_d8 = (ulonglong)uVar3;
  }
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  local_b0 = DAT_14cb88920;
  uStack_88 = (longlong *)CONCAT44(uStack_88._4_4_,DAT_14cb7c988);
  local_90 = DAT_14cb7c980;
  FUN_1448075d0(&local_70);
  pbVar1 = (byte *)*param_2;
  if (pbVar1 != (byte *)0x0) {
    if ((*pbVar1 & 2) == 0) {
      plVar9 = &DAT_14c9a1288;
    }
    else {
      plVar9 = (longlong *)(*(longlong *)(pbVar1 + 8) + 0x18);
    }
    if ((int)plVar9[2] != *(int *)((longlong)plVar9 + 0x3c)) {
      plVar11 = plVar9 + 8;
      if ((longlong *)plVar9[9] != (longlong *)0x0) {
        plVar11 = (longlong *)plVar9[9];
      }
      iVar22 = *(int *)((longlong)plVar11 + (ulonglong)((int)plVar9[10] - 1U & (uint)local_70) * 4);
      if (iVar22 != -1) {
        do {
          lVar20 = *plVar9 + (longlong)iVar22 * 0x40;
          if (*(uint *)(*plVar9 + (longlong)iVar22 * 0x40) == (uint)local_70) {
            if ((((lVar20 != 0) &&
                 (puVar10 = (undefined8 *)(lVar20 + 0x28), puVar10 != (undefined8 *)0x0)) &&
                ((byte *)*puVar10 != (byte *)0x0)) && ((*(byte *)*puVar10 & 0x40) == 0))
            goto LAB_141043547;
            break;
          }
          iVar22 = *(int *)(lVar20 + 0x38);
        } while (iVar22 != -1);
      }
    }
  }
  puVar10 = &DAT_14c9a1308;
LAB_141043547:
  uVar2 = FUN_1410451c0(puVar10,0);
  *(undefined4 *)(lVar4 + 0xa8) = uVar2;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  plVar9 = (longlong *)(lVar4 + 0xb0);
  iVar22 = *(int *)(lVar4 + 0xf8);
  local_e8 = param_4;
  if (iVar22 < 2) {
    lVar20 = lVar4 + 0xe8;
    if (*(longlong *)(lVar4 + 0xf0) != 0) {
      lVar20 = *(longlong *)(lVar4 + 0xf0);
    }
    iVar16 = iVar22 + 3;
    if (-1 < iVar22) {
      iVar16 = iVar22;
    }
    if (*(int *)(lVar4 + 0xb8) - *(int *)(lVar4 + 0xe4) < iVar16 >> 2) {
      plVar11 = (longlong *)(lVar4 + 0xc0);
      local_90 = (wchar_t *)&DAT_100000000;
      local_80 = 0xffffffff;
      uStack_78 = 0;
      local_c8 = uVar23;
      uStack_88 = plVar11;
      if (*(int *)(lVar4 + 0xd8) == 0) {
        iVar22 = 0;
      }
      else {
        FUN_1449c0562(&local_90);
        iVar22 = *(int *)(lVar4 + 0xd8);
      }
      uStack_50 = CONCAT44(uStack_74,uStack_78);
      local_68 = local_90;
      plStack_60 = uStack_88;
      local_58 = local_80;
      lVar4 = local_58;
      local_58._4_4_ = (int)((ulonglong)local_80 >> 0x20);
      iVar16 = local_58._4_4_;
      local_70 = plVar9;
      if ((local_58._4_4_ != iVar22) || (uVar23 = local_c8, local_58 = lVar4, uStack_88 != plVar11))
      {
        do {
          local_58 = lVar4;
          *(undefined4 *)
           (lVar20 + (longlong)*(int *)(*local_70 + 0xc + (longlong)iVar16 * 0x10) * 4) = 0xffffffff
          ;
          local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
          FUN_1449c0562(&local_68);
          uVar23 = local_c8;
          iVar16 = local_58._4_4_;
          lVar4 = local_58;
        } while (local_70 != plVar9 || (plStack_60 != plVar11 || local_58._4_4_ != iVar22));
      }
    }
    else if (iVar22 == 1) {
      lVar28 = 0;
      do {
        *(undefined4 *)(lVar20 + lVar28 * 4) = 0xffffffff;
        lVar28 = lVar28 + 1;
      } while (lVar28 < *(int *)(lVar4 + 0xf8));
    }
    FUN_140d5a396(plVar9,0);
  }
  else {
    FUN_140d5a396(plVar9,0);
    *(undefined4 *)(lVar4 + 0xf8) = 1;
    FUN_1410af8c2(plVar9);
  }
  uStack_88 = (longlong *)CONCAT44(uStack_88._4_4_,DAT_14cb7c9a0);
  local_90 = DAT_14cb7c998;
  FUN_1448075d0(&local_70);
  pbVar1 = (byte *)*param_2;
  if (pbVar1 != (byte *)0x0) {
    if ((*pbVar1 & 2) == 0) {
      plVar11 = &DAT_14c9a1288;
    }
    else {
      plVar11 = (longlong *)(*(longlong *)(pbVar1 + 8) + 0x18);
    }
    if ((int)plVar11[2] != *(int *)((longlong)plVar11 + 0x3c)) {
      plVar15 = plVar11 + 8;
      if ((longlong *)plVar11[9] != (longlong *)0x0) {
        plVar15 = (longlong *)plVar11[9];
      }
      iVar22 = *(int *)((longlong)plVar15 + (ulonglong)((int)plVar11[10] - 1U & (uint)local_70) * 4)
      ;
      if (iVar22 != -1) {
        do {
          lVar4 = *plVar11 + (longlong)iVar22 * 0x40;
          if (*(uint *)(*plVar11 + (longlong)iVar22 * 0x40) == (uint)local_70) {
            if (((lVar4 != 0) &&
                (puVar10 = (undefined8 *)(lVar4 + 0x28), puVar10 != (undefined8 *)0x0)) &&
               (((byte *)*puVar10 != (byte *)0x0 && ((*(byte *)*puVar10 & 0x40) == 0))))
            goto LAB_14104367b;
            break;
          }
          iVar22 = *(int *)(lVar4 + 0x38);
        } while (iVar22 != -1);
      }
    }
  }
  puVar10 = &DAT_14c9a1308;
LAB_14104367b:
  pbVar1 = (byte *)*puVar10;
  plVar11 = &DAT_14c9a1288;
  if ((pbVar1 != (byte *)0x0) && ((*pbVar1 & 2) != 0)) {
    plVar11 = (longlong *)(*(longlong *)(pbVar1 + 8) + 0x18);
  }
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  plVar15 = plVar11 + 3;
  local_90 = (wchar_t *)&DAT_100000000;
  local_80 = 0xffffffff;
  uStack_78 = 0;
  iVar22 = 0;
  uStack_88 = plVar15;
  if ((int)plVar11[6] != 0) {
    FUN_1449c0562(&local_90);
    iVar22 = (int)plVar11[6];
  }
  local_58 = local_80;
  lVar4 = local_58;
  uStack_50 = CONCAT44(uStack_74,uStack_78);
  local_68 = local_90;
  plStack_60 = uStack_88;
  local_58._4_4_ = (int)((ulonglong)local_80 >> 0x20);
  iVar16 = local_58._4_4_;
  local_70 = plVar11;
  if ((local_58._4_4_ != iVar22) || (local_58 = lVar4, uStack_88 != plVar15)) {
    do {
      local_58 = lVar4;
      local_c8 = (longlong)iVar16 * 0x40 + *local_70;
      FUN_141710b0e(local_c8,&local_90,1);
      pwVar13 = local_90;
      if ((int)uStack_88 == 0) {
        pwVar13 = L"";
      }
      local_cc = _wtoi(pwVar13);
      if (local_90 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
      local_94 = local_cc;
      if (-1 < (int)local_cc) {
        local_98 = FUN_1410451c0(local_c8 + 0x28,0);
        uStack_88 = (longlong *)&local_98;
        local_90 = (wchar_t *)&local_94;
        FUN_14884d980(plVar9,&local_a8);
      }
      local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
      FUN_1449c0562(&local_68);
      iVar16 = local_58._4_4_;
      lVar4 = local_58;
    } while (((local_58._4_4_ != iVar22) || (plStack_60 != plVar15)) || (local_70 != plVar11));
  }
  uStack_88 = (longlong *)CONCAT44(uStack_88._4_4_,DAT_14cb88888);
  local_90 = DAT_14cb88880;
  FUN_1448075d0(&local_70);
  uVar26 = local_d8;
  uVar24 = local_e8;
  pbVar1 = (byte *)*param_2;
  puVar10 = &DAT_14c9a1308;
  if (pbVar1 != (byte *)0x0) {
    if ((*pbVar1 & 2) == 0) {
      plVar9 = &DAT_14c9a1288;
    }
    else {
      plVar9 = (longlong *)(*(longlong *)(pbVar1 + 8) + 0x18);
    }
    if ((int)plVar9[2] != *(int *)((longlong)plVar9 + 0x3c)) {
      plVar11 = plVar9 + 8;
      if ((longlong *)plVar9[9] != (longlong *)0x0) {
        plVar11 = (longlong *)plVar9[9];
      }
      iVar22 = *(int *)((longlong)plVar11 + (ulonglong)((int)plVar9[10] - 1U & (uint)local_70) * 4);
      if (iVar22 != -1) {
        do {
          lVar4 = *plVar9 + (longlong)iVar22 * 0x40;
          if (*(uint *)(*plVar9 + (longlong)iVar22 * 0x40) == (uint)local_70) {
            if (((lVar4 != 0) &&
                (puVar10 = (undefined8 *)(lVar4 + 0x28), puVar10 != (undefined8 *)0x0)) &&
               (((byte *)*puVar10 != (byte *)0x0 && ((*(byte *)*puVar10 & 0x40) == 0))))
            goto LAB_1410438a3;
            break;
          }
          iVar22 = *(int *)(lVar4 + 0x38);
        } while (iVar22 != -1);
      }
    }
    puVar10 = &DAT_14c9a1308;
  }
LAB_1410438a3:
  pbVar1 = (byte *)*puVar10;
  if (((pbVar1 == (byte *)0x0) || ((*pbVar1 & 3) != 1)) ||
     (pwVar13 = *(wchar_t **)(pbVar1 + 8), pwVar13 == (wchar_t *)0x0)) {
LAB_1410438af:
    local_108 = 0;
    uVar17 = 0;
  }
  else {
    sVar5 = strlen((char *)pwVar13);
    uVar3 = (uint)sVar5;
    if (uVar3 == 0) goto LAB_1410438af;
    lVar4 = (longlong)(int)uVar3;
    pwVar18 = (wchar_t *)((longlong)pwVar13 + lVar4 + -1);
    uVar17 = 0;
    if (pwVar18 < pwVar13) {
      lVar20 = 0;
    }
    else {
      do {
        if (9 < (byte)((char)*pwVar18 - 0x30U)) break;
        uVar17 = (ulonglong)((int)uVar17 + 1);
        pwVar18 = (wchar_t *)((longlong)pwVar18 + -1);
      } while (pwVar13 <= pwVar18);
      lVar20 = 0;
      uVar14 = (uint)uVar17;
      if ((((uVar14 != 0) && ((int)uVar14 < (int)uVar3)) && (lVar20 = 0, uVar14 < 0xb)) &&
         (lVar28 = -uVar17, *(char *)((longlong)pwVar13 + lVar28 + lVar4 + -1) == '_')) {
        if ((uVar14 == 1) || (*(char *)((longlong)pwVar13 + lVar28 + lVar4) != '0')) {
          lVar19 = 0;
          do {
            lVar20 = (longlong)*(char *)((longlong)pwVar13 + lVar28 + lVar4) + lVar19 * 10;
            lVar19 = lVar20 + -0x30;
            lVar28 = lVar28 + 1;
          } while (lVar28 != 0);
          if (lVar19 < 0x7fffffff) {
            uVar3 = ~uVar14 + uVar3;
            lVar20 = lVar20 + -0x2f;
            goto LAB_14104493a;
          }
        }
        lVar20 = 0;
      }
LAB_14104493a:
      if (uVar3 == 0) goto LAB_1410438af;
    }
    uStack_88._0_5_ = (uint5)uVar3;
    local_90 = pwVar13;
    uVar3 = FUN_14001a6c0(&local_90,1);
    uVar17 = lVar20 << 0x20;
    local_108 = (ulonglong)uVar3;
  }
  local_108 = local_108 | uVar17;
  local_90 = (wchar_t *)0x0;
  uStack_88 = (longlong *)((ulonglong)uStack_88 & 0xffffffff00000000);
  local_f0 = 0;
  local_f8 = 0;
  local_100 = 0;
  local_110 = (undefined8 *)((ulonglong)local_110 & 0xffffffffffffff00);
  local_118 = &DAT_14cb88880;
  (**(code **)(*param_1 + 0x50))(param_1,uVar24,local_e0);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  uStack_88 = (longlong *)CONCAT44(uStack_88._4_4_,DAT_14cb88980);
  local_90 = DAT_14cb88978;
  FUN_1448075d0(&local_70);
  pbVar1 = (byte *)*param_2;
  if (pbVar1 != (byte *)0x0) {
    if ((*pbVar1 & 2) == 0) {
      plVar9 = &DAT_14c9a1288;
    }
    else {
      plVar9 = (longlong *)(*(longlong *)(pbVar1 + 8) + 0x18);
    }
    if ((int)plVar9[2] != *(int *)((longlong)plVar9 + 0x3c)) {
      plVar11 = plVar9 + 8;
      if ((longlong *)plVar9[9] != (longlong *)0x0) {
        plVar11 = (longlong *)plVar9[9];
      }
      iVar22 = *(int *)((longlong)plVar11 + (ulonglong)((int)plVar9[10] - 1U & (uint)local_70) * 4);
      if (iVar22 != -1) {
        do {
          lVar4 = *plVar9 + (longlong)iVar22 * 0x40;
          if (*(uint *)(*plVar9 + (longlong)iVar22 * 0x40) == (uint)local_70) {
            if (((lVar4 != 0) &&
                (puVar10 = (undefined8 *)(lVar4 + 0x28), puVar10 != (undefined8 *)0x0)) &&
               (((byte *)*puVar10 != (byte *)0x0 && ((*(byte *)*puVar10 & 0x40) == 0))))
            goto LAB_1410439af;
            break;
          }
          iVar22 = *(int *)(lVar4 + 0x38);
        } while (iVar22 != -1);
      }
    }
  }
  puVar10 = &DAT_14c9a1308;
LAB_1410439af:
  pbVar1 = (byte *)*puVar10;
  if (((pbVar1 == (byte *)0x0) || ((*pbVar1 & 3) != 1)) ||
     (pwVar13 = *(wchar_t **)(pbVar1 + 8), pwVar13 == (wchar_t *)0x0)) {
LAB_1410439bb:
    local_108 = 0;
    uVar17 = 0;
  }
  else {
    sVar5 = strlen((char *)pwVar13);
    uVar3 = (uint)sVar5;
    if (uVar3 == 0) goto LAB_1410439bb;
    lVar4 = (longlong)(int)uVar3;
    pwVar18 = (wchar_t *)((longlong)pwVar13 + lVar4 + -1);
    uVar17 = 0;
    if (pwVar18 < pwVar13) {
      lVar20 = 0;
    }
    else {
      do {
        if (9 < (byte)((char)*pwVar18 - 0x30U)) break;
        uVar17 = (ulonglong)((int)uVar17 + 1);
        pwVar18 = (wchar_t *)((longlong)pwVar18 + -1);
      } while (pwVar13 <= pwVar18);
      lVar20 = 0;
      uVar14 = (uint)uVar17;
      if (((uVar14 != 0) && ((int)uVar14 < (int)uVar3)) &&
         ((lVar20 = 0, uVar14 < 0xb &&
          (lVar28 = -uVar17, *(char *)((longlong)pwVar13 + lVar28 + lVar4 + -1) == '_')))) {
        if ((uVar14 == 1) || (*(char *)((longlong)pwVar13 + lVar28 + lVar4) != '0')) {
          lVar19 = 0;
          do {
            lVar20 = (longlong)*(char *)((longlong)pwVar13 + lVar28 + lVar4) + lVar19 * 10;
            lVar19 = lVar20 + -0x30;
            lVar28 = lVar28 + 1;
          } while (lVar28 != 0);
          if (lVar19 < 0x7fffffff) {
            uVar3 = ~uVar14 + uVar3;
            lVar20 = lVar20 + -0x2f;
            goto LAB_1410449d1;
          }
        }
        lVar20 = 0;
      }
LAB_1410449d1:
      if (uVar3 == 0) goto LAB_1410439bb;
    }
    uStack_88._0_5_ = (uint5)uVar3;
    local_90 = pwVar13;
    uVar3 = FUN_14001a6c0(&local_90,1);
    uVar17 = lVar20 << 0x20;
    local_108 = (ulonglong)uVar3;
  }
  local_108 = local_108 | uVar17;
  uVar23 = uVar23 | uVar26;
  local_90 = (wchar_t *)0x0;
  uStack_88 = (longlong *)((ulonglong)uStack_88 & 0xffffffff00000000);
  local_f0 = 0;
  local_f8 = 0;
  local_100 = 0;
  local_110 = (undefined8 *)((ulonglong)local_110 & 0xffffffffffffff00);
  local_118 = &DAT_14cb88978;
  (**(code **)(*param_1 + 0x50))(param_1,uVar24,local_e0);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if (uVar23 != local_b0) {
    uStack_88 = (longlong *)CONCAT44(uStack_88._4_4_,DAT_14cb889d0);
    local_90 = DAT_14cb889c8;
    FUN_1448075d0(&local_70);
    pbVar1 = (byte *)*param_2;
    if (pbVar1 != (byte *)0x0) {
      if ((*pbVar1 & 2) == 0) {
        plVar9 = &DAT_14c9a1288;
      }
      else {
        plVar9 = (longlong *)(*(longlong *)(pbVar1 + 8) + 0x18);
      }
      if ((int)plVar9[2] != *(int *)((longlong)plVar9 + 0x3c)) {
        plVar11 = plVar9 + 8;
        if ((longlong *)plVar9[9] != (longlong *)0x0) {
          plVar11 = (longlong *)plVar9[9];
        }
        iVar22 = *(int *)((longlong)plVar11 + (ulonglong)((int)plVar9[10] - 1U & (uint)local_70) * 4
                         );
        if (iVar22 != -1) {
          do {
            lVar4 = *plVar9 + (longlong)iVar22 * 0x40;
            if (*(uint *)(*plVar9 + (longlong)iVar22 * 0x40) == (uint)local_70) {
              if ((((lVar4 != 0) &&
                   (puVar10 = (undefined8 *)(lVar4 + 0x28), puVar10 != (undefined8 *)0x0)) &&
                  ((byte *)*puVar10 != (byte *)0x0)) && ((*(byte *)*puVar10 & 0x40) == 0))
              goto LAB_1410445bd;
              break;
            }
            iVar22 = *(int *)(lVar4 + 0x38);
          } while (iVar22 != -1);
        }
      }
    }
    puVar10 = &DAT_14c9a1308;
LAB_1410445bd:
    pbVar1 = (byte *)*puVar10;
    if (((pbVar1 == (byte *)0x0) || ((*pbVar1 & 3) != 1)) ||
       (pwVar13 = *(wchar_t **)(pbVar1 + 8), pwVar13 == (wchar_t *)0x0)) {
LAB_1410445c9:
      local_108 = 0;
      uVar26 = 0;
    }
    else {
      sVar5 = strlen((char *)pwVar13);
      uVar3 = (uint)sVar5;
      if (uVar3 == 0) goto LAB_1410445c9;
      lVar4 = (longlong)(int)uVar3;
      pwVar18 = (wchar_t *)((longlong)pwVar13 + lVar4 + -1);
      uVar26 = 0;
      if (pwVar18 < pwVar13) {
        lVar20 = 0;
      }
      else {
        do {
          if (9 < (byte)((char)*pwVar18 - 0x30U)) break;
          uVar26 = (ulonglong)((int)uVar26 + 1);
          pwVar18 = (wchar_t *)((longlong)pwVar18 + -1);
        } while (pwVar13 <= pwVar18);
        lVar20 = 0;
        uVar14 = (uint)uVar26;
        if (((uVar14 != 0) && ((int)uVar14 < (int)uVar3)) &&
           ((lVar20 = 0, uVar14 < 0xb &&
            (lVar28 = -uVar26, *(char *)((longlong)pwVar13 + lVar28 + lVar4 + -1) == '_')))) {
          if ((uVar14 == 1) || (*(char *)((longlong)pwVar13 + lVar28 + lVar4) != '0')) {
            lVar19 = 0;
            do {
              lVar20 = (longlong)*(char *)((longlong)pwVar13 + lVar28 + lVar4) + lVar19 * 10;
              lVar19 = lVar20 + -0x30;
              lVar28 = lVar28 + 1;
            } while (lVar28 != 0);
            if (lVar19 < 0x7fffffff) {
              uVar3 = ~uVar14 + uVar3;
              lVar20 = lVar20 + -0x2f;
              goto LAB_141044ac2;
            }
          }
          lVar20 = 0;
        }
LAB_141044ac2:
        if (uVar3 == 0) goto LAB_1410445c9;
      }
      uStack_88._0_5_ = (uint5)uVar3;
      local_90 = pwVar13;
      uVar3 = FUN_14001a6c0(&local_90,1);
      uVar26 = lVar20 << 0x20;
      local_108 = (ulonglong)uVar3;
    }
    local_108 = local_108 | uVar26;
    local_90 = (wchar_t *)0x0;
    uStack_88 = (longlong *)((ulonglong)uStack_88 & 0xffffffff00000000);
    local_f0 = 0;
    local_f8 = 0;
    local_100 = 0;
    local_110 = (undefined8 *)((ulonglong)local_110 & 0xffffffffffffff00);
    local_118 = &DAT_14cb889c8;
    (**(code **)(*param_1 + 0x50))(param_1,uVar24,local_e0);
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    uStack_88._0_4_ = DAT_14cb7c8c8;
    local_90 = DAT_14cb7c8c0;
    FUN_1448075d0(&local_70);
    pbVar1 = (byte *)*param_2;
    if (pbVar1 != (byte *)0x0) {
      if ((*pbVar1 & 2) == 0) {
        plVar9 = &DAT_14c9a1288;
      }
      else {
        plVar9 = (longlong *)(*(longlong *)(pbVar1 + 8) + 0x18);
      }
      if ((int)plVar9[2] != *(int *)((longlong)plVar9 + 0x3c)) {
        plVar11 = plVar9 + 8;
        if ((longlong *)plVar9[9] != (longlong *)0x0) {
          plVar11 = (longlong *)plVar9[9];
        }
        iVar22 = *(int *)((longlong)plVar11 + (ulonglong)((int)plVar9[10] - 1U & (uint)local_70) * 4
                         );
        if (iVar22 != -1) {
          do {
            lVar4 = *plVar9 + (longlong)iVar22 * 0x40;
            if (*(uint *)(*plVar9 + (longlong)iVar22 * 0x40) == (uint)local_70) {
              if ((((lVar4 != 0) &&
                   (local_110 = (undefined8 *)(lVar4 + 0x28), local_110 != (undefined8 *)0x0)) &&
                  ((byte *)*local_110 != (byte *)0x0)) && ((*(byte *)*local_110 & 0x40) == 0))
              goto LAB_1410446c9;
              break;
            }
            iVar22 = *(int *)(lVar4 + 0x38);
          } while (iVar22 != -1);
        }
      }
    }
    local_110 = &DAT_14c9a1308;
LAB_1410446c9:
    local_90 = (wchar_t *)0x0;
    uStack_88 = (longlong *)((ulonglong)uStack_88._4_4_ << 0x20);
    local_118 = (undefined8 *)CONCAT71(local_118._1_7_,1);
    FUN_1410451f2(param_1,uVar24,local_e0);
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  uStack_88._0_4_ = DAT_14cb7c8e0;
  local_90 = DAT_14cb7c8d8;
  FUN_1448075d0(&local_70);
  pbVar1 = (byte *)*param_2;
  if (pbVar1 != (byte *)0x0) {
    if ((*pbVar1 & 2) == 0) {
      plVar9 = &DAT_14c9a1288;
    }
    else {
      plVar9 = (longlong *)(*(longlong *)(pbVar1 + 8) + 0x18);
    }
    if ((int)plVar9[2] != *(int *)((longlong)plVar9 + 0x3c)) {
      plVar11 = plVar9 + 8;
      if ((longlong *)plVar9[9] != (longlong *)0x0) {
        plVar11 = (longlong *)plVar9[9];
      }
      iVar22 = *(int *)((longlong)plVar11 + (ulonglong)((int)plVar9[10] - 1U & (uint)local_70) * 4);
      if (iVar22 != -1) {
        do {
          lVar4 = *plVar9 + (longlong)iVar22 * 0x40;
          if (*(uint *)(*plVar9 + (longlong)iVar22 * 0x40) == (uint)local_70) {
            if (((lVar4 != 0) &&
                (local_110 = (undefined8 *)(lVar4 + 0x28), local_110 != (undefined8 *)0x0)) &&
               (((byte *)*local_110 != (byte *)0x0 && ((*(byte *)*local_110 & 0x40) == 0))))
            goto LAB_141043acc;
            break;
          }
          iVar22 = *(int *)(lVar4 + 0x38);
        } while (iVar22 != -1);
      }
    }
  }
  local_110 = &DAT_14c9a1308;
LAB_141043acc:
  local_90 = (wchar_t *)0x0;
  uStack_88 = (longlong *)((ulonglong)uStack_88._4_4_ << 0x20);
  local_118 = (undefined8 *)CONCAT71(local_118._1_7_,3);
  FUN_1410451f2(param_1,uVar24,local_e0);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  uStack_88 = (longlong *)CONCAT44(uStack_88._4_4_,DAT_14cb7c8b0);
  local_90 = DAT_14cb7c8a8;
  FUN_1448075d0(&local_70);
  pbVar1 = (byte *)*param_2;
  if (pbVar1 != (byte *)0x0) {
    if ((*pbVar1 & 2) == 0) {
      plVar9 = &DAT_14c9a1288;
    }
    else {
      plVar9 = (longlong *)(*(longlong *)(pbVar1 + 8) + 0x18);
    }
    if ((int)plVar9[2] != *(int *)((longlong)plVar9 + 0x3c)) {
      plVar11 = plVar9 + 8;
      if ((longlong *)plVar9[9] != (longlong *)0x0) {
        plVar11 = (longlong *)plVar9[9];
      }
      iVar22 = *(int *)((longlong)plVar11 + (ulonglong)((int)plVar9[10] - 1U & (uint)local_70) * 4);
      if (iVar22 != -1) {
        do {
          lVar4 = *plVar9 + (longlong)iVar22 * 0x40;
          if (*(uint *)(*plVar9 + (longlong)iVar22 * 0x40) == (uint)local_70) {
            if (((lVar4 != 0) &&
                (puVar10 = (undefined8 *)(lVar4 + 0x28), puVar10 != (undefined8 *)0x0)) &&
               (((byte *)*puVar10 != (byte *)0x0 && ((*(byte *)*puVar10 & 0x40) == 0))))
            goto LAB_141043bb2;
            break;
          }
          iVar22 = *(int *)(lVar4 + 0x38);
        } while (iVar22 != -1);
      }
    }
  }
  puVar10 = &DAT_14c9a1308;
LAB_141043bb2:
  pbVar1 = (byte *)*puVar10;
  plVar9 = &DAT_14c9a1288;
  if ((pbVar1 != (byte *)0x0) && ((*pbVar1 & 2) != 0)) {
    plVar9 = (longlong *)(*(longlong *)(pbVar1 + 8) + 0x18);
  }
  local_c8 = uVar23;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  puVar25 = (uint *)(plVar9 + 3);
  uVar3 = *(uint *)(plVar9 + 6);
  if (uVar3 == 0) {
    uVar17 = 1;
    uVar23 = 0;
    iVar22 = 0;
    uVar14 = 0;
  }
  else {
    puVar6 = (uint *)plVar9[5];
    if ((uint *)plVar9[5] == (uint *)0x0) {
      puVar6 = puVar25;
    }
    uVar14 = *puVar6;
    if (uVar14 == 0) {
      iVar22 = uVar3 + 0x1e;
      if (-1 < (int)(uVar3 - 1)) {
        iVar22 = uVar3 - 1;
      }
      uVar23 = 0;
      uVar26 = (ulonglong)(uint)(iVar22 >> 5);
      if (iVar22 >> 5 < 1) {
        uVar26 = uVar23;
      }
      iVar22 = 0;
      do {
        if (uVar26 == uVar23) goto LAB_141044781;
        iVar22 = iVar22 + 0x20;
        uVar14 = puVar6[uVar23 + 1];
        uVar23 = uVar23 + 1;
      } while (uVar14 == 0);
    }
    else {
      uVar23 = 0;
      iVar22 = 0;
    }
    uVar17 = (ulonglong)(-uVar14 & uVar14);
    uVar26 = uVar17 * 2 + 1;
    lVar4 = 0x3f;
    if (uVar26 != 0) {
      for (; uVar26 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    uVar14 = (iVar22 - ((uint)lVar4 ^ 0x3f)) + 0x3e;
    if ((int)uVar3 <= (int)uVar14) {
      uVar14 = uVar3;
    }
  }
  if (uVar14 != uVar3) {
    uVar21 = 0xffffffff;
    local_c0 = (ulonglong)uVar3;
    local_b8 = puVar25;
    do {
      lVar4 = *plVar9 + (longlong)(int)uVar14 * 0x40;
      iVar16 = *(int *)(*plVar9 + (longlong)(int)uVar14 * 0x40);
      if (((iVar16 == 0) || (iVar7 = *(int *)(lVar4 + 4), iVar7 == 0)) || (iVar16 == DAT_14c948000))
      {
LAB_141044df9:
        local_a0 = DAT_14c948620;
        local_a8 = DAT_14c948618;
      }
      else {
        if ((iVar7 < 2) && (*(int *)(lVar4 + 0x24) < 1)) {
          puVar10 = (undefined8 *)(lVar4 + 8);
        }
        else {
          puVar10 = *(undefined8 **)(lVar4 + 0x18);
        }
        if (iVar7 < 1) goto LAB_141044df9;
        local_a0 = *(undefined4 *)(puVar10 + 1);
        local_a8 = *puVar10;
      }
      local_d8 = CONCAT44(local_d8._4_4_,iVar22);
      local_cc = uVar21;
      if (local_c8 != local_b0) {
        uStack_88 = (longlong *)CONCAT44(uStack_88._4_4_,DAT_14cb88980);
        local_90 = DAT_14cb88978;
        FUN_1448075d0(&local_70,&local_90);
        pbVar1 = *(byte **)(lVar4 + 0x28);
        puVar10 = &DAT_14c9a1308;
        if (pbVar1 != (byte *)0x0) {
          plVar11 = &DAT_14c9a1288;
          if ((*pbVar1 & 2) != 0) {
            plVar11 = (longlong *)(*(longlong *)(pbVar1 + 8) + 0x18);
          }
          puVar10 = &DAT_14c9a1308;
          if ((int)plVar11[2] != *(int *)((longlong)plVar11 + 0x3c)) {
            plVar15 = plVar11 + 8;
            if ((longlong *)plVar11[9] != (longlong *)0x0) {
              plVar15 = (longlong *)plVar11[9];
            }
            iVar22 = *(int *)((longlong)plVar15 +
                             (ulonglong)((int)plVar11[10] - 1U & (uint)local_70) * 4);
            puVar10 = &DAT_14c9a1308;
            if (iVar22 != -1) {
              do {
                lVar20 = *plVar11 + (longlong)iVar22 * 0x40;
                if (*(uint *)(*plVar11 + (longlong)iVar22 * 0x40) == (uint)local_70) {
                  puVar10 = &DAT_14c9a1308;
                  if (lVar20 == 0) goto LAB_141043d77;
                  puVar12 = (undefined8 *)(lVar20 + 0x28);
                  puVar10 = &DAT_14c9a1308;
                  if ((puVar12 == (undefined8 *)0x0) ||
                     (((byte *)*puVar12 != (byte *)0x0 &&
                      (puVar10 = puVar12, (*(byte *)*puVar12 & 0x40) == 0)))) goto LAB_141043d77;
                  break;
                }
                iVar22 = *(int *)(lVar20 + 0x38);
              } while (iVar22 != -1);
              puVar10 = &DAT_14c9a1308;
            }
          }
        }
LAB_141043d77:
        pbVar1 = (byte *)*puVar10;
        if ((pbVar1 == (byte *)0x0) || ((*pbVar1 & 3) != 1)) {
          local_108 = 0;
          uVar26 = 0;
        }
        else {
          pwVar13 = *(wchar_t **)(pbVar1 + 8);
          if (pwVar13 != (wchar_t *)0x0) {
            sVar5 = strlen((char *)pwVar13);
            uVar3 = (uint)sVar5;
            if (uVar3 != 0) {
              lVar20 = (longlong)(int)uVar3;
              pwVar18 = (wchar_t *)((longlong)pwVar13 + lVar20 + -1);
              if (pwVar18 < pwVar13) {
                lVar28 = 0;
              }
              else {
                uVar26 = 0;
                do {
                  if (9 < (byte)((char)*pwVar18 - 0x30U)) break;
                  uVar26 = (ulonglong)((int)uVar26 + 1);
                  pwVar18 = (wchar_t *)((longlong)pwVar18 + -1);
                } while (pwVar13 <= pwVar18);
                uVar14 = (uint)uVar26;
                if ((((uVar14 == 0) || ((int)uVar3 <= (int)uVar14)) || (10 < uVar14)) ||
                   ((lVar19 = -uVar26, *(char *)((longlong)pwVar13 + lVar19 + lVar20 + -1) != '_' ||
                    ((uVar14 != 1 && (*(char *)((longlong)pwVar13 + lVar19 + lVar20) == '0')))))) {
LAB_141044377:
                  lVar28 = 0;
                }
                else {
                  lVar27 = 0;
                  do {
                    lVar28 = (longlong)*(char *)((longlong)pwVar13 + lVar19 + lVar20) + lVar27 * 10;
                    lVar27 = lVar28 + -0x30;
                    lVar19 = lVar19 + 1;
                  } while (lVar19 != 0);
                  if (0x7ffffffe < lVar27) goto LAB_141044377;
                  uVar3 = ~uVar14 + uVar3;
                  lVar28 = lVar28 + -0x2f;
                }
                if (uVar3 == 0) goto LAB_141044caa;
              }
              uStack_88._0_5_ = (uint5)uVar3;
              local_90 = pwVar13;
              uVar3 = FUN_14001a6c0(&local_90,1);
              uVar26 = lVar28 << 0x20;
              local_108 = (ulonglong)uVar3;
              uVar24 = local_e8;
              goto LAB_141043d88;
            }
          }
LAB_141044caa:
          local_108 = 0;
          uVar26 = 0;
          uVar24 = local_e8;
        }
LAB_141043d88:
        local_108 = local_108 | uVar26;
        local_f0 = 0;
        local_100 = 0;
        local_110 = (undefined8 *)((ulonglong)local_110 & 0xffffffffffffff00);
        local_118 = &DAT_14cb88978;
        local_f8 = 0;
        (**(code **)(*param_1 + 0x50))(param_1,uVar24,local_e0,&local_a8);
        if (local_58 != 0) {
          FUN_1400020a8();
        }
        uStack_88 = (longlong *)CONCAT44(uStack_88._4_4_,DAT_14cb889e8);
        local_90 = DAT_14cb889e0;
        FUN_1448075d0(&local_70,&local_90);
        pbVar1 = *(byte **)(lVar4 + 0x28);
        puVar10 = &DAT_14c9a1308;
        if (pbVar1 != (byte *)0x0) {
          plVar11 = &DAT_14c9a1288;
          if ((*pbVar1 & 2) != 0) {
            plVar11 = (longlong *)(*(longlong *)(pbVar1 + 8) + 0x18);
          }
          puVar10 = &DAT_14c9a1308;
          if ((int)plVar11[2] != *(int *)((longlong)plVar11 + 0x3c)) {
            plVar15 = plVar11 + 8;
            if ((longlong *)plVar11[9] != (longlong *)0x0) {
              plVar15 = (longlong *)plVar11[9];
            }
            iVar22 = *(int *)((longlong)plVar15 +
                             (ulonglong)((int)plVar11[10] - 1U & (uint)local_70) * 4);
            puVar10 = &DAT_14c9a1308;
            if (iVar22 != -1) {
              do {
                lVar20 = *plVar11 + (longlong)iVar22 * 0x40;
                if (*(uint *)(*plVar11 + (longlong)iVar22 * 0x40) == (uint)local_70) {
                  puVar10 = &DAT_14c9a1308;
                  if (lVar20 == 0) goto LAB_141043eb0;
                  puVar12 = (undefined8 *)(lVar20 + 0x28);
                  puVar10 = &DAT_14c9a1308;
                  if ((puVar12 == (undefined8 *)0x0) ||
                     (((byte *)*puVar12 != (byte *)0x0 &&
                      (puVar10 = puVar12, (*(byte *)*puVar12 & 0x40) == 0)))) goto LAB_141043eb0;
                  break;
                }
                iVar22 = *(int *)(lVar20 + 0x38);
              } while (iVar22 != -1);
              puVar10 = &DAT_14c9a1308;
            }
          }
        }
LAB_141043eb0:
        pbVar1 = (byte *)*puVar10;
        if ((pbVar1 == (byte *)0x0) || ((*pbVar1 & 3) != 1)) {
          local_108 = 0;
          uVar26 = 0;
        }
        else {
          pwVar13 = *(wchar_t **)(pbVar1 + 8);
          if (pwVar13 != (wchar_t *)0x0) {
            sVar5 = strlen((char *)pwVar13);
            uVar3 = (uint)sVar5;
            if (uVar3 != 0) {
              lVar20 = (longlong)(int)uVar3;
              pwVar18 = (wchar_t *)((longlong)pwVar13 + lVar20 + -1);
              if (pwVar18 < pwVar13) {
                lVar28 = 0;
              }
              else {
                uVar26 = 0;
                do {
                  if (9 < (byte)((char)*pwVar18 - 0x30U)) break;
                  uVar26 = (ulonglong)((int)uVar26 + 1);
                  pwVar18 = (wchar_t *)((longlong)pwVar18 + -1);
                } while (pwVar13 <= pwVar18);
                uVar14 = (uint)uVar26;
                if (((((uVar14 == 0) || ((int)uVar3 <= (int)uVar14)) || (10 < uVar14)) ||
                    (lVar19 = -uVar26, *(char *)((longlong)pwVar13 + lVar19 + lVar20 + -1) != '_'))
                   || ((uVar14 != 1 && (*(char *)((longlong)pwVar13 + lVar19 + lVar20) == '0')))) {
LAB_141044421:
                  lVar28 = 0;
                }
                else {
                  lVar27 = 0;
                  do {
                    lVar28 = (longlong)*(char *)((longlong)pwVar13 + lVar19 + lVar20) + lVar27 * 10;
                    lVar27 = lVar28 + -0x30;
                    lVar19 = lVar19 + 1;
                  } while (lVar19 != 0);
                  if (0x7ffffffe < lVar27) goto LAB_141044421;
                  uVar3 = ~uVar14 + uVar3;
                  lVar28 = lVar28 + -0x2f;
                }
                if (uVar3 == 0) goto LAB_141044cb4;
              }
              uStack_88._0_5_ = (uint5)uVar3;
              local_90 = pwVar13;
              uVar3 = FUN_14001a6c0(&local_90,1);
              uVar26 = lVar28 << 0x20;
              local_108 = (ulonglong)uVar3;
              uVar24 = local_e8;
              goto LAB_141043ec1;
            }
          }
LAB_141044cb4:
          local_108 = 0;
          uVar26 = 0;
          uVar24 = local_e8;
        }
LAB_141043ec1:
        local_108 = local_108 | uVar26;
        local_f0 = 0;
        local_100 = 0;
        local_110 = (undefined8 *)((ulonglong)local_110 & 0xffffffffffffff00);
        local_118 = &DAT_14cb889e0;
        local_f8 = 0;
        (**(code **)(*param_1 + 0x50))(param_1,uVar24,local_e0,&local_a8);
        if (local_58 != 0) {
          FUN_1400020a8();
        }
        uStack_88 = (longlong *)CONCAT44(uStack_88._4_4_,DAT_14cb88a00);
        local_90 = DAT_14cb889f8;
        FUN_1448075d0(&local_70,&local_90);
        pbVar1 = *(byte **)(lVar4 + 0x28);
        puVar10 = &DAT_14c9a1308;
        if (pbVar1 != (byte *)0x0) {
          plVar11 = &DAT_14c9a1288;
          if ((*pbVar1 & 2) != 0) {
            plVar11 = (longlong *)(*(longlong *)(pbVar1 + 8) + 0x18);
          }
          puVar10 = &DAT_14c9a1308;
          if ((int)plVar11[2] != *(int *)((longlong)plVar11 + 0x3c)) {
            plVar15 = plVar11 + 8;
            if ((longlong *)plVar11[9] != (longlong *)0x0) {
              plVar15 = (longlong *)plVar11[9];
            }
            iVar22 = *(int *)((longlong)plVar15 +
                             (ulonglong)((int)plVar11[10] - 1U & (uint)local_70) * 4);
            puVar10 = &DAT_14c9a1308;
            if (iVar22 != -1) {
              do {
                lVar20 = *plVar11 + (longlong)iVar22 * 0x40;
                if (*(uint *)(*plVar11 + (longlong)iVar22 * 0x40) == (uint)local_70) {
                  puVar10 = &DAT_14c9a1308;
                  if (lVar20 == 0) goto LAB_141043fe9;
                  puVar12 = (undefined8 *)(lVar20 + 0x28);
                  puVar10 = &DAT_14c9a1308;
                  if ((puVar12 == (undefined8 *)0x0) ||
                     (((byte *)*puVar12 != (byte *)0x0 &&
                      (puVar10 = puVar12, (*(byte *)*puVar12 & 0x40) == 0)))) goto LAB_141043fe9;
                  break;
                }
                iVar22 = *(int *)(lVar20 + 0x38);
              } while (iVar22 != -1);
              puVar10 = &DAT_14c9a1308;
            }
          }
        }
LAB_141043fe9:
        pbVar1 = (byte *)*puVar10;
        if ((pbVar1 == (byte *)0x0) || ((*pbVar1 & 3) != 1)) {
          local_108 = 0;
          uVar26 = 0;
        }
        else {
          pwVar13 = *(wchar_t **)(pbVar1 + 8);
          if (pwVar13 != (wchar_t *)0x0) {
            sVar5 = strlen((char *)pwVar13);
            uVar3 = (uint)sVar5;
            if (uVar3 != 0) {
              lVar20 = (longlong)(int)uVar3;
              pwVar18 = (wchar_t *)((longlong)pwVar13 + lVar20 + -1);
              if (pwVar18 < pwVar13) {
                lVar28 = 0;
              }
              else {
                uVar26 = 0;
                do {
                  if (9 < (byte)((char)*pwVar18 - 0x30U)) break;
                  uVar26 = (ulonglong)((int)uVar26 + 1);
                  pwVar18 = (wchar_t *)((longlong)pwVar18 + -1);
                } while (pwVar13 <= pwVar18);
                uVar14 = (uint)uVar26;
                if ((((uVar14 == 0) || ((int)uVar3 <= (int)uVar14)) || (10 < uVar14)) ||
                   ((lVar19 = -uVar26, *(char *)((longlong)pwVar13 + lVar19 + lVar20 + -1) != '_' ||
                    ((uVar14 != 1 && (*(char *)((longlong)pwVar13 + lVar19 + lVar20) == '0')))))) {
LAB_1410444cb:
                  lVar28 = 0;
                }
                else {
                  lVar27 = 0;
                  do {
                    lVar28 = (longlong)*(char *)((longlong)pwVar13 + lVar19 + lVar20) + lVar27 * 10;
                    lVar27 = lVar28 + -0x30;
                    lVar19 = lVar19 + 1;
                  } while (lVar19 != 0);
                  if (0x7ffffffe < lVar27) goto LAB_1410444cb;
                  uVar3 = ~uVar14 + uVar3;
                  lVar28 = lVar28 + -0x2f;
                }
                if (uVar3 == 0) goto LAB_141044cbe;
              }
              uStack_88._0_5_ = (uint5)uVar3;
              local_90 = pwVar13;
              uVar3 = FUN_14001a6c0(&local_90,1);
              uVar26 = lVar28 << 0x20;
              local_108 = (ulonglong)uVar3;
              uVar24 = local_e8;
              goto LAB_141043ffa;
            }
          }
LAB_141044cbe:
          local_108 = 0;
          uVar26 = 0;
          uVar24 = local_e8;
        }
LAB_141043ffa:
        local_108 = local_108 | uVar26;
        local_f0 = 0;
        local_100 = 0;
        local_110 = (undefined8 *)((ulonglong)local_110 & 0xffffffffffffff00);
        local_118 = &DAT_14cb889f8;
        local_f8 = 0;
        (**(code **)(*param_1 + 0x50))(param_1,uVar24,local_e0,&local_a8);
        if (local_58 != 0) {
          FUN_1400020a8();
        }
        uStack_88 = (longlong *)CONCAT44(uStack_88._4_4_,DAT_14cb7c8c8);
        local_90 = DAT_14cb7c8c0;
        FUN_1448075d0(&local_70,&local_90);
        puVar25 = local_b8;
        pbVar1 = *(byte **)(lVar4 + 0x28);
        local_110 = &DAT_14c9a1308;
        if (pbVar1 != (byte *)0x0) {
          plVar11 = &DAT_14c9a1288;
          if ((*pbVar1 & 2) != 0) {
            plVar11 = (longlong *)(*(longlong *)(pbVar1 + 8) + 0x18);
          }
          local_110 = &DAT_14c9a1308;
          if ((int)plVar11[2] != *(int *)((longlong)plVar11 + 0x3c)) {
            plVar15 = plVar11 + 8;
            if ((longlong *)plVar11[9] != (longlong *)0x0) {
              plVar15 = (longlong *)plVar11[9];
            }
            iVar22 = *(int *)((longlong)plVar15 +
                             (ulonglong)((int)plVar11[10] - 1U & (uint)local_70) * 4);
            local_110 = &DAT_14c9a1308;
            if (iVar22 != -1) {
              do {
                lVar20 = *plVar11 + (longlong)iVar22 * 0x40;
                if (*(uint *)(*plVar11 + (longlong)iVar22 * 0x40) == (uint)local_70) {
                  local_110 = &DAT_14c9a1308;
                  if (lVar20 == 0) goto LAB_14104412a;
                  puVar10 = (undefined8 *)(lVar20 + 0x28);
                  local_110 = &DAT_14c9a1308;
                  if ((puVar10 == (undefined8 *)0x0) ||
                     (((byte *)*puVar10 != (byte *)0x0 &&
                      (local_110 = puVar10, (*(byte *)*puVar10 & 0x40) == 0)))) goto LAB_14104412a;
                  break;
                }
                iVar22 = *(int *)(lVar20 + 0x38);
              } while (iVar22 != -1);
              local_110 = &DAT_14c9a1308;
            }
          }
        }
LAB_14104412a:
        local_118 = (undefined8 *)CONCAT71(local_118._1_7_,1);
        FUN_1410451f2(param_1,uVar24,local_e0,&local_a8);
        if (local_58 != 0) {
          FUN_1400020a8();
        }
      }
      uStack_88 = (longlong *)CONCAT44(uStack_88._4_4_,DAT_14cb7c8e0);
      local_90 = DAT_14cb7c8d8;
      FUN_1448075d0(&local_70,&local_90);
      pbVar1 = *(byte **)(lVar4 + 0x28);
      local_110 = &DAT_14c9a1308;
      if (pbVar1 != (byte *)0x0) {
        plVar11 = &DAT_14c9a1288;
        if ((*pbVar1 & 2) != 0) {
          plVar11 = (longlong *)(*(longlong *)(pbVar1 + 8) + 0x18);
        }
        local_110 = &DAT_14c9a1308;
        if ((int)plVar11[2] != *(int *)((longlong)plVar11 + 0x3c)) {
          plVar15 = plVar11 + 8;
          if ((longlong *)plVar11[9] != (longlong *)0x0) {
            plVar15 = (longlong *)plVar11[9];
          }
          iVar22 = *(int *)((longlong)plVar15 +
                           (ulonglong)((int)plVar11[10] - 1U & (uint)local_70) * 4);
          local_110 = &DAT_14c9a1308;
          if (iVar22 != -1) {
            do {
              lVar4 = *plVar11 + (longlong)iVar22 * 0x40;
              if (*(uint *)(*plVar11 + (longlong)iVar22 * 0x40) == (uint)local_70) {
                local_110 = &DAT_14c9a1308;
                if (lVar4 == 0) goto LAB_14104422f;
                puVar10 = (undefined8 *)(lVar4 + 0x28);
                local_110 = &DAT_14c9a1308;
                if ((puVar10 == (undefined8 *)0x0) ||
                   (((byte *)*puVar10 != (byte *)0x0 &&
                    (local_110 = puVar10, (*(byte *)*puVar10 & 0x40) == 0)))) goto LAB_14104422f;
                break;
              }
              iVar22 = *(int *)(lVar4 + 0x38);
            } while (iVar22 != -1);
            local_110 = &DAT_14c9a1308;
          }
        }
      }
LAB_14104422f:
      local_118 = (undefined8 *)CONCAT71(local_118._1_7_,3);
      FUN_1410451f2(param_1,uVar24,local_e0,&local_a8);
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      uVar21 = local_cc & ~(uint)uVar17;
      puVar6 = (uint *)plVar9[5];
      if ((uint *)plVar9[5] == (uint *)0x0) {
        puVar6 = puVar25;
      }
      uVar3 = *(uint *)(plVar9 + 6);
      iVar16 = (int)uVar23;
      lVar4 = (longlong)iVar16;
      uVar14 = puVar6[lVar4] & uVar21;
      iVar22 = (int)local_d8;
      if (uVar14 == 0) {
        iVar7 = uVar3 + 0x1e;
        if (-1 < (int)(uVar3 - 1)) {
          iVar7 = uVar3 - 1;
        }
        iVar7 = iVar7 >> 5;
        iVar22 = (int)local_d8 + 0x20;
        iVar8 = iVar7;
        if (iVar7 < iVar16) {
          iVar8 = iVar16;
        }
        if (iVar16 < iVar7) {
          lVar20 = 0;
          do {
            uVar14 = puVar6[lVar4 + lVar20 + 1];
            if (uVar14 != 0) {
              uVar23 = (ulonglong)(iVar16 + (int)lVar20 + 1);
              uVar21 = 0xffffffff;
              goto LAB_1410442df;
            }
            iVar22 = iVar22 + 0x20;
            lVar20 = lVar20 + 1;
          } while (iVar8 - lVar4 != lVar20);
          uVar21 = 0xffffffff;
          iVar16 = iVar8;
        }
        uVar23 = (ulonglong)(iVar16 + 1);
        uVar24 = local_e8;
        puVar25 = local_b8;
        uVar14 = uVar3;
      }
      else {
LAB_1410442df:
        uVar17 = (ulonglong)(-uVar14 & uVar14);
        uVar26 = uVar17 * 2 + 1;
        lVar4 = 0x3f;
        if (uVar26 != 0) {
          for (; uVar26 >> lVar4 == 0; lVar4 = lVar4 + -1) {
          }
        }
        uVar14 = (iVar22 - ((uint)lVar4 ^ 0x3f)) + 0x3e;
        if ((int)uVar3 <= (int)uVar14) {
          uVar14 = uVar3;
        }
      }
    } while (uVar14 != (uint)local_c0);
  }
LAB_141044781:
  if ((local_48 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410451c0 FUN_1410451c0 body=50 status=ok
// SIG undefined FUN_1410451c0(void)

ulonglong FUN_1410451c0(undefined8 *param_1,ulonglong param_2)

{
  byte *pbVar1;
  
  param_2 = param_2 & 0xffffffff;
  pbVar1 = (byte *)*param_1;
  if (((pbVar1 != (byte *)0x0) && ((*pbVar1 & 0x6b) == 1)) &&
     (*(char **)(pbVar1 + 8) != (char *)0x0)) {
    param_2 = _strtoui64(*(char **)(pbVar1 + 8),(char **)0x0,0);
  }
  return param_2;
}



// FUNCTION 1410451f2 FUN_1410451f2 body=1077 status=ok
// SIG undefined FUN_1410451f2(void)

void FUN_1410451f2(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 *param_6)

{
  int iVar1;
  byte *pbVar2;
  char *_Str;
  int iVar3;
  size_t sVar4;
  ulonglong uVar5;
  uint *puVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  char *pcVar16;
  longlong lVar17;
  longlong lVar18;
  int iVar19;
  longlong *plVar20;
  int *piVar21;
  undefined1 auStack_d8 [32];
  char **local_b8;
  undefined1 local_b0;
  ulonglong local_a8;
  undefined1 local_a0;
  undefined8 local_98;
  undefined1 local_90;
  uint local_88;
  int local_84;
  longlong *local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  uint *local_60;
  char *local_58;
  int local_50;
  undefined1 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  pbVar2 = (byte *)*param_6;
  plVar20 = &DAT_14c9a1288;
  if ((pbVar2 != (byte *)0x0) && ((*pbVar2 & 2) != 0)) {
    plVar20 = (longlong *)(*(longlong *)(pbVar2 + 8) + 0x18);
  }
  iVar1 = (int)plVar20[6];
  if (iVar1 == 0) {
    uVar11 = 1;
    uVar15 = 0;
    iVar12 = 0;
    iVar19 = 0;
  }
  else {
    puVar6 = (uint *)plVar20[5];
    if ((uint *)plVar20[5] == (uint *)0x0) {
      puVar6 = (uint *)(plVar20 + 3);
    }
    uVar7 = *puVar6;
    if (uVar7 == 0) {
      iVar12 = iVar1 + 0x1e;
      if (-1 < iVar1 + -1) {
        iVar12 = iVar1 + -1;
      }
      uVar15 = 0;
      uVar5 = (ulonglong)(uint)(iVar12 >> 5);
      if (iVar12 >> 5 < 1) {
        uVar5 = uVar15;
      }
      iVar12 = 0;
      do {
        if (uVar5 == uVar15) goto LAB_141045263;
        iVar12 = iVar12 + 0x20;
        uVar7 = puVar6[uVar15 + 1];
        uVar15 = uVar15 + 1;
      } while (uVar7 == 0);
    }
    else {
      uVar15 = 0;
      iVar12 = 0;
    }
    uVar11 = (ulonglong)(-uVar7 & uVar7);
    uVar5 = uVar11 * 2 + 1;
    lVar17 = 0x3f;
    if (uVar5 != 0) {
      for (; uVar5 >> lVar17 == 0; lVar17 = lVar17 + -1) {
      }
    }
    iVar19 = (iVar12 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
    if (iVar1 <= iVar19) {
      iVar19 = iVar1;
    }
  }
  if (iVar19 != iVar1) {
    local_88 = 0xffffffff;
    local_80 = param_1;
    local_78 = param_2;
    local_60 = (uint *)(plVar20 + 3);
    iVar3 = iVar1;
    do {
      lVar17 = *plVar20;
      pbVar2 = *(byte **)(lVar17 + 0x28 + (longlong)iVar19 * 0x40);
      local_84 = iVar12;
      if ((pbVar2 != (byte *)0x0) && ((*pbVar2 & 3) == 1)) {
        _Str = *(char **)(pbVar2 + 8);
        local_70 = param_3;
        local_68 = param_4;
        if (_Str == (char *)0x0) {
LAB_141045564:
          uVar5 = 0;
          local_a8 = 0;
        }
        else {
          sVar4 = strlen(_Str);
          local_50 = (int)sVar4;
          if (local_50 == 0) goto LAB_141045564;
          lVar10 = (longlong)local_50;
          pcVar16 = _Str + lVar10 + -1;
          if (pcVar16 < _Str) {
            lVar14 = 0;
          }
          else {
            uVar7 = 0;
            do {
              if (9 < (byte)(*pcVar16 - 0x30U)) break;
              uVar7 = uVar7 + 1;
              pcVar16 = pcVar16 + -1;
            } while (_Str <= pcVar16);
            if (((((uVar7 == 0) || (local_50 <= (int)uVar7)) || (10 < uVar7)) ||
                (lVar18 = -(ulonglong)uVar7, _Str[lVar18 + lVar10 + -1] != '_')) ||
               ((uVar7 != 1 && (_Str[lVar18 + lVar10] == '0')))) {
LAB_141045338:
              lVar14 = 0;
            }
            else {
              lVar13 = 0;
              do {
                lVar14 = (longlong)_Str[lVar18 + lVar10] + lVar13 * 10;
                lVar13 = lVar14 + -0x30;
                lVar18 = lVar18 + 1;
              } while (lVar18 != 0);
              if (0x7ffffffe < lVar13) goto LAB_141045338;
              local_50 = ~uVar7 + local_50;
              lVar14 = lVar14 + -0x2f;
            }
            if (local_50 == 0) goto LAB_141045564;
          }
          local_4c = 0;
          local_58 = _Str;
          uVar7 = FUN_14001a6c0(&local_58,1);
          local_a8 = lVar14 << 0x20;
          uVar5 = (ulonglong)uVar7;
        }
        param_4 = local_68;
        param_3 = local_70;
        piVar21 = (int *)(lVar17 + (longlong)iVar19 * 0x40);
        if (((*piVar21 == 0) || (iVar12 = piVar21[1], iVar12 == 0)) || (*piVar21 == DAT_14c948000))
        {
LAB_1410455d4:
          local_50 = DAT_14c948620;
          local_58 = DAT_14c948618;
        }
        else {
          if ((iVar12 < 2) && (piVar21[9] < 1)) {
            piVar21 = piVar21 + 2;
          }
          else {
            piVar21 = *(int **)(piVar21 + 6);
          }
          if (iVar12 < 1) goto LAB_1410455d4;
          local_50 = piVar21[2];
          local_58 = *(char **)piVar21;
        }
        local_a8 = local_a8 | uVar5;
        local_90 = 0;
        local_a0 = 0;
        local_b0 = param_5;
        local_b8 = &local_58;
        local_98 = 0;
        (**(code **)(*local_80 + 0x50))(local_80,local_78,local_70,local_68);
        iVar3 = (int)plVar20[6];
      }
      local_88 = local_88 & ~(uint)uVar11;
      puVar6 = (uint *)plVar20[5];
      if ((uint *)plVar20[5] == (uint *)0x0) {
        puVar6 = local_60;
      }
      iVar19 = (int)uVar15;
      lVar17 = (longlong)iVar19;
      uVar7 = puVar6[lVar17] & local_88;
      iVar12 = local_84;
      if (uVar7 == 0) {
        iVar8 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar8 = iVar3 + -1;
        }
        iVar8 = iVar8 >> 5;
        iVar12 = local_84 + 0x20;
        iVar9 = iVar8;
        if (iVar8 < iVar19) {
          iVar9 = iVar19;
        }
        if (iVar19 < iVar8) {
          lVar10 = 0;
          do {
            uVar7 = puVar6[lVar17 + lVar10 + 1];
            if (uVar7 != 0) {
              uVar15 = (ulonglong)(iVar19 + (int)lVar10 + 1);
              local_88 = 0xffffffff;
              goto LAB_1410454ac;
            }
            iVar12 = iVar12 + 0x20;
            lVar10 = lVar10 + 1;
          } while (iVar9 - lVar17 != lVar10);
          local_88 = 0xffffffff;
          lVar17 = (longlong)iVar9;
        }
        uVar15 = lVar17 + 1U & 0xffffffff;
        iVar19 = iVar3;
      }
      else {
LAB_1410454ac:
        uVar11 = (ulonglong)(-uVar7 & uVar7);
        uVar5 = uVar11 * 2 + 1;
        lVar17 = 0x3f;
        if (uVar5 != 0) {
          for (; uVar5 >> lVar17 == 0; lVar17 = lVar17 + -1) {
          }
        }
        iVar19 = (iVar12 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
        if (iVar3 <= iVar19) {
          iVar19 = iVar3;
        }
      }
    } while (iVar19 != iVar1);
  }
LAB_141045263:
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141045628 FUN_141045628 body=667 status=ok
// SIG undefined FUN_141045628(void)

void FUN_141045628(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  code *pcVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined1 auStack_178 [40];
  longlong *local_150;
  longlong *local_148;
  longlong *local_140;
  longlong local_138;
  undefined8 uStack_130;
  longlong local_128 [3];
  longlong local_110;
  code *local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  longlong *local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  code *local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  longlong *local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  if ((char)param_1[0x2a] == '\x01') {
    lVar3 = (**(code **)(*param_2 + 0xb0))(param_2);
    local_110 = lVar3;
    if (lVar3 != 0) {
      local_128[0] = 0;
      local_128[1] = 0;
      local_140 = &local_138;
      local_138 = 0;
      uStack_130 = 0;
      local_c8 = (code *)0x0;
      local_b8 = (longlong *)0x0;
      local_108 = (code *)0x0;
      local_148 = param_1;
      plVar4 = (longlong *)FUN_14001cc68(0x30,8);
      local_f8 = local_b8;
      pcVar2 = local_c8;
      *plVar4 = (longlong)&PTR_FUN_14b400640;
      plVar4[1] = (longlong)local_128;
      plVar4[2] = (longlong)&local_110;
      plVar4[3] = (longlong)&local_c8;
      plVar4[4] = (longlong)param_1;
      plVar4[5] = (longlong)&local_148;
      if (plVar4 + 1 != (longlong *)0x0) {
        local_108 = FUN_143d40620;
      }
      local_c8 = local_108;
      local_b8 = plVar4;
      local_108 = pcVar2;
      uStack_100 = uStack_c0;
      uStack_fc = uStack_bc;
      uStack_f0 = uStack_b0;
      uStack_ec = uStack_ac;
      local_e8 = local_a8;
      uStack_e4 = uStack_a4;
      uStack_e0 = uStack_a0;
      uStack_dc = uStack_9c;
      local_d8 = local_98;
      uStack_d4 = uStack_94;
      uStack_d0 = uStack_90;
      uStack_cc = uStack_8c;
      local_150 = param_1;
      if (pcVar2 != (code *)0x0) {
        plVar4 = local_f8;
        if (local_f8 == (longlong *)0x0) {
          plVar4 = (longlong *)&local_e8;
        }
        (**(code **)(*plVar4 + 0x10))();
        lVar3 = local_110;
      }
      if ((longlong)*(int *)(lVar3 + 0x1c8) != 0) {
        plVar7 = *(longlong **)(lVar3 + 0x1c0);
        plVar4 = plVar7 + *(int *)(lVar3 + 0x1c8);
        do {
          lVar3 = (longlong)*(int *)(*plVar7 + 0x68);
          if (lVar3 != 0) {
            lVar1 = *(longlong *)(*plVar7 + 0x60);
            lVar8 = 0;
            do {
              pcVar2 = local_c8;
              local_108 = *(code **)(lVar1 + lVar8);
              plVar6 = local_b8;
              if (local_b8 == (longlong *)0x0) {
                plVar6 = (longlong *)&local_a8;
              }
              uVar5 = (**(code **)(*plVar6 + 8))();
              (*pcVar2)(uVar5,&local_108);
              lVar8 = lVar8 + 8;
            } while (lVar3 * 8 != lVar8);
          }
          plVar7 = plVar7 + 1;
        } while (plVar7 != plVar4);
      }
      if (0 < (int)uStack_130) {
        (**(code **)(*local_150 + 0x170))(local_150,&local_138);
      }
      if (local_c8 != (code *)0x0) {
        plVar4 = local_b8;
        if (local_b8 == (longlong *)0x0) {
          plVar4 = (longlong *)&local_a8;
        }
        (**(code **)(*plVar4 + 0x10))();
      }
      if (local_138 != 0) {
        FUN_1400020a8();
      }
      if (local_128[0] != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410458c4 FUN_1410458c4 body=834 status=ok
// SIG undefined FUN_1410458c4(void)

void FUN_1410458c4(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  byte bVar3;
  char cVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  int *piVar11;
  bool bVar12;
  longlong *plVar13;
  int *piVar14;
  int *piVar15;
  longlong *plVar16;
  longlong lVar17;
  undefined1 auStack_c8 [36];
  uint local_a4;
  longlong local_a0;
  longlong *local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined1 local_70 [4];
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_a0 = param_1;
  if ((longlong)*(int *)(param_1 + 0x1c8) != 0) {
    plVar16 = *(longlong **)(param_1 + 0x1c0);
    plVar13 = plVar16 + *(int *)(param_1 + 0x1c8);
    local_98 = plVar13;
    do {
      lVar8 = *plVar16;
      local_80 = *(undefined8 *)(lVar8 + 0x10);
      local_78 = *(undefined4 *)(lVar8 + 0x18);
      FUN_1448075d0(local_70,&local_80);
      if (((DAT_14cb86df8 == 0) || (lVar5 = FUN_144837462(DAT_14cb86df8,local_70), lVar5 == 0)) ||
         (*(char *)(lVar5 + 0x58) == '\0')) {
        lVar5 = 0;
      }
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      if (lVar5 != 0) {
        if ((longlong)*(int *)(lVar5 + 0x68) == 0) {
          plVar7 = (longlong *)FUN_14112f3a2(lVar8);
          if (*plVar7 != 0) {
LAB_141045af4:
            cVar4 = FUN_140e192e0();
            if (cVar4 != '\x02') {
              lVar8 = *plVar7;
              uVar10 = DAT_14cb88718;
LAB_141045b07:
              uVar2 = *(undefined8 *)(lVar8 + 8);
              local_70[0] = 0;
              local_6c = 0;
              local_64 = 0;
              FUN_144976b9c(local_70,uVar10);
              FUN_1410432d6(uVar2,local_70,1);
            }
          }
        }
        else {
          plVar13 = *(longlong **)(lVar5 + 0x60);
          plVar7 = plVar13 + *(int *)(lVar5 + 0x68);
          bVar12 = true;
          local_a4 = 0;
          do {
            if (*plVar13 != 0) {
              if ((longlong)*(int *)(lVar8 + 0x68) != 0) {
                plVar6 = *(longlong **)(lVar8 + 0x60);
                piVar14 = *(int **)(*plVar13 + 8);
                if (piVar14 == (int *)0x0) {
                  piVar14 = &DAT_14c9485f0;
                }
                lVar5 = (longlong)*(int *)(lVar8 + 0x68) << 3;
                do {
                  piVar11 = (int *)&DAT_14c948618;
                  if (*piVar14 != 0) {
                    iVar1 = piVar14[1];
                    piVar11 = (int *)&DAT_14c948618;
                    if ((iVar1 != 0) && (piVar11 = (int *)&DAT_14c948618, *piVar14 != DAT_14c948000)
                       ) {
                      if ((1 < iVar1) || (piVar15 = piVar14 + 2, 0 < piVar14[9])) {
                        piVar15 = *(int **)(piVar14 + 6);
                      }
                      piVar11 = (int *)&DAT_14c948618;
                      if (0 < iVar1) {
                        piVar11 = piVar15;
                      }
                    }
                  }
                  lVar17 = *plVar6;
                  if ((*(int *)(lVar17 + 0x10) == *piVar11) &&
                     (*(int *)(lVar17 + 0x18) == piVar11[2])) {
                    if ((lVar17 == 0 || plVar6 == (longlong *)0x0) ||
                       (plVar6 = (longlong *)FUN_140bc52d2(), *plVar6 == 0)) break;
                    bVar3 = FUN_1405f61f4();
                    if (bVar3 - 3 < 2) {
                      bVar12 = false;
                    }
                    else if (bVar3 != 6) break;
                    local_a4 = 1;
                    goto LAB_141045a90;
                  }
                  plVar6 = plVar6 + 1;
                  lVar5 = lVar5 + -8;
                } while (lVar5 != 0);
              }
              bVar12 = false;
            }
LAB_141045a90:
            plVar13 = plVar13 + 1;
          } while (plVar13 != plVar7);
          plVar7 = (longlong *)FUN_14112f3a2(lVar8);
          plVar13 = local_98;
          if (*plVar7 != 0) {
            if (bVar12) goto LAB_141045af4;
            if (((local_a4 & 1) != 0) && (cVar4 = FUN_140e192e0(), cVar4 != '\x01')) {
              lVar8 = *plVar7;
              uVar10 = DAT_14cb88710;
              goto LAB_141045b07;
            }
          }
        }
      }
      plVar16 = plVar16 + 1;
    } while (plVar16 != plVar13);
  }
  lVar8 = local_a0;
  iVar1 = *(int *)(local_a0 + 0x2d8);
  if ((longlong)iVar1 != 0) {
    lVar5 = *(longlong *)(local_a0 + 0x2d0);
    lVar17 = 0;
    do {
      local_90 = *(undefined8 *)(lVar5 + lVar17);
      local_88 = *(undefined4 *)(lVar5 + 8 + lVar17);
      FUN_1448075d0(local_70,&local_90);
      lVar9 = FUN_14060eaf6(local_70);
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      if (lVar9 != 0) {
        FUN_140d85cb7(lVar9,lVar8);
      }
      lVar17 = lVar17 + 0xc;
    } while ((longlong)iVar1 * 0xc != lVar17);
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141045c07 FUN_141045c07 body=41 status=ok
// SIG undefined FUN_141045c07(void)

void FUN_141045c07(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_141045c30(param_1);
    param_1 = param_1 + 0x100;
  }
  return;
}



// FUNCTION 141045c30 FUN_141045c30 body=243 status=ok
// SIG undefined FUN_141045c30(void)

void FUN_141045c30(longlong *param_1)

{
  FUN_141045d4b(param_1[0x1d],(int)param_1[0x1e]);
  if (param_1[0x1d] != 0) {
    FUN_1400020a8();
  }
  FUN_141045d4b(param_1[0x1a],(int)param_1[0x1b]);
  if (param_1[0x1a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  if ((longlong *)param_1[0x14] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x14] + 0x10))();
  }
  if ((longlong *)param_1[0xe] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0xe] + 0x10))();
  }
  if ((longlong *)param_1[0xb] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0xb] + 0x10))();
  }
  FUN_141045d23(param_1[3],(int)param_1[4]);
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  FUN_141045d23(*param_1,(int)param_1[1]);
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 141045d23 FUN_141045d23 body=40 status=ok
// SIG undefined FUN_141045d23(void)

void FUN_141045d23(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_148c56a22(param_1);
    param_1 = param_1 + 0x58;
  }
  return;
}



// FUNCTION 141045d4b FUN_141045d4b body=79 status=ok
// SIG undefined FUN_141045d4b(void)

void FUN_141045d4b(longlong param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 0x130;
    do {
      FUN_140368b56(param_1);
      FUN_1407dde54(param_1 + -0xd8);
      if (*(longlong *)(param_1 + -0x118) != 0) {
        FUN_1400020a8();
      }
      param_1 = param_1 + 0x208;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 141045d9a FUN_141045d9a body=310 status=ok
// SIG undefined FUN_141045d9a(void)

void FUN_141045d9a(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  uint uVar5;
  int iVar6;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 *local_48;
  undefined8 *local_40;
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = param_3;
  if (*(int *)(param_1 + 0x30) != *(int *)(param_1 + 0x5c)) {
    uVar2 = (uint)((ulonglong)param_2 >> 0x10);
    uVar5 = (uint)param_2 & 0xffff;
    lVar3 = param_1 + 0x60;
    if (*(longlong *)(param_1 + 0x68) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x68);
    }
    iVar6 = *(int *)(lVar3 + (ulonglong)
                             (*(int *)(param_1 + 0x70) - 1U &
                             (int)((ulonglong)param_2 >> 0x20) + ((uint)param_2 << 0x10 | uVar5) +
                             (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar5 >> 4)) * 4);
    if (iVar6 != -1) {
      do {
        plVar1 = (longlong *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar6 * 0x14);
        if ((undefined8 *)*plVar1 == param_2) {
          if ((plVar1 != (longlong *)0x0) && (plVar1 + 1 != (longlong *)0x0)) {
            uVar4 = FUN_141045ed2(param_1 + 0x168,(uint)((ulonglong)param_3 >> 0x20) ^ (uint)param_3
                                  ,&local_50);
            local_40 = (undefined8 *)CONCAT44(local_40._4_4_,(int)plVar1[1]);
            local_48 = param_2;
            FUN_1410464c6(uVar4,&local_58,&local_48,0);
            local_58 = 0;
            local_48 = &local_50;
            local_40 = &local_58;
            FUN_141046088(param_1 + 0x118,local_34,&local_48,0);
          }
          break;
        }
        iVar6 = *(int *)((longlong)plVar1 + 0xc);
      } while (iVar6 != -1);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141045ed2 FUN_141045ed2 body=148 status=ok
// SIG undefined FUN_141045ed2(void)

longlong FUN_141045ed2(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = FUN_141045f68();
  if (iVar1 != -1) {
    lVar3 = *param_1;
    lVar2 = (longlong)iVar1 * 0x60;
    if (lVar3 + lVar2 != 0) goto LAB_141045f41;
  }
  local_38 = 0;
  local_30 = param_3;
  FUN_141046b80(param_1,&local_24,param_2);
  lVar3 = *param_1;
  lVar2 = (longlong)local_24 * 0x60;
LAB_141045f41:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 + lVar3 + 8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141045f68 FUN_141045f68 body=184 status=ok
// SIG undefined FUN_141045f68(void)

int FUN_141045f68(longlong *param_1,uint param_2,undefined8 *param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar4 != -1) {
      lVar3 = *param_1;
      do {
        local_48 = *param_3;
        local_40 = *(undefined8 *)(lVar3 + (longlong)iVar4 * 0x60);
        cVar1 = FUN_141046022(&local_40,&local_48);
        if (cVar1 != '\0') goto LAB_141045ffa;
        lVar3 = *param_1;
        iVar4 = *(int *)(lVar3 + 0x58 + (longlong)iVar4 * 0x60);
      } while (iVar4 != -1);
    }
  }
  iVar4 = -1;
LAB_141045ffa:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141046022 FUN_141046022 body=102 status=ok
// SIG undefined FUN_141046022(void)

ulonglong FUN_141046022(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  if ((uVar1 != *param_2) || (uVar4 = 1, uVar2 != param_2[1])) {
    if (((uVar2 != 0) &&
        (((-1 < (int)uVar1 && ((int)uVar1 < DAT_14c9647dc)) &&
         (lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar3 != 0)))) &&
       ((*(uint *)(lVar3 + 0x10) == uVar2 && ((*(uint *)(lVar3 + 8) & 0x10200000) == 0)))) {
      return 0;
    }
    uVar4 = FUN_144729dda(param_2);
    uVar4 = uVar4 ^ 1;
  }
  return uVar4;
}



// FUNCTION 141046088 FUN_141046088 body=1085 status=ok
// SIG undefined FUN_141046088(void)

int * FUN_141046088(longlong *param_1,int *param_2,undefined8 *param_3,char *param_4)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int *piVar7;
  char cVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  byte bVar12;
  int iVar13;
  undefined4 uVar14;
  int iVar15;
  ulonglong uVar16;
  uint uVar17;
  longlong *plVar18;
  int iVar19;
  uint uVar20;
  int iVar21;
  undefined8 *puVar22;
  undefined1 auStack_a8 [32];
  char *local_88;
  int *local_80;
  ulonglong local_78;
  undefined8 *local_70;
  ulonglong local_68;
  longlong local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_88 = param_4;
  local_80 = param_2;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    uVar20 = *(uint *)(param_1 + 1);
    uVar16 = (ulonglong)uVar20;
    *(uint *)(param_1 + 1) = uVar20 + 1;
    if (*(uint *)((longlong)param_1 + 0xc) == uVar20) {
      FUN_14482b872(param_1,uVar20);
    }
    iVar21 = (int)param_1[5];
    if (iVar21 == 0) {
      iVar13 = -1;
    }
    else {
      iVar13 = iVar21 + 0x1e;
      if (-1 < iVar21 + -1) {
        iVar13 = iVar21 + -1;
      }
      iVar13 = iVar13 >> 5;
    }
    plVar10 = param_1 + 2;
    iVar15 = iVar21 + 1;
    iVar19 = iVar21 + 0x1f;
    if (-1 < iVar21) {
      iVar19 = iVar21;
    }
    if (iVar19 >> 5 == iVar13) {
      *(int *)(param_1 + 5) = iVar15;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar21) {
        local_78 = uVar16;
        if (iVar21 + 0x20U < 0xa0) {
          iVar15 = 0x80;
          iVar13 = iVar21;
        }
        else {
          uVar20 = iVar21 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar17 = 4;
            if (4 < uVar20) {
              uVar17 = uVar20;
            }
          }
          else {
            uVar17 = (uVar20 * 3 >> 3) + uVar20 + 0x10;
          }
          uVar16 = FUN_144a3809e(uVar17 << 2,0);
          iVar13 = (int)(uVar16 >> 2);
          iVar15 = -0x20;
          if ((int)uVar20 <= iVar13) {
            iVar15 = iVar13 << 5;
          }
          iVar13 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar15;
        FUN_1446efbd8(plVar10,iVar13);
        iVar15 = (int)param_1[5] + 1;
        uVar16 = local_78;
      }
      iVar13 = iVar15 + 0x1f;
      if (-1 < iVar15) {
        iVar13 = iVar15;
      }
      *(int *)(param_1 + 5) = iVar15;
      if (iVar15 % 0x20 != 0) {
        plVar18 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar18 = plVar10;
        }
        bVar12 = -(char)(iVar15 % 0x20);
        *(uint *)((longlong)plVar18 + (longlong)(iVar13 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar18 + (longlong)(iVar13 >> 5) * 4) << (bVar12 & 0x1f)) >>
             (bVar12 & 0x1f);
      }
    }
    lVar9 = (longlong)(int)uVar16;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar10 = (longlong *)param_1[4];
    }
    bVar12 = (byte)iVar21 & 0x1f;
    puVar1 = (uint *)((longlong)plVar10 + (longlong)(iVar19 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar12 | 0xfffffffeU >> 0x20 - bVar12);
  }
  else {
    uVar16 = (ulonglong)*(uint *)(param_1 + 6);
    lVar9 = (longlong)(int)*(uint *)(param_1 + 6);
    iVar21 = *(int *)(*param_1 + 4 + lVar9 * 0x18);
    *(int *)(param_1 + 6) = iVar21;
    iVar13 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar13;
    if (iVar13 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar21 * 0x18) = 0xffffffff;
    }
  }
  iVar21 = (int)uVar16;
  uVar20 = 1 << ((byte)uVar16 & 0x1f);
  plVar10 = (longlong *)param_1[4];
  if ((longlong *)param_1[4] == (longlong *)0x0) {
    plVar10 = param_1 + 2;
  }
  iVar13 = iVar21 + 0x1f;
  if (-1 < iVar21) {
    iVar13 = iVar21;
  }
  puVar1 = (uint *)((longlong)plVar10 + (longlong)(iVar13 >> 5) * 4);
  *puVar1 = *puVar1 | uVar20;
  puVar22 = (undefined8 *)(*param_1 + lVar9 * 0x18);
  puVar3 = (undefined8 *)param_3[1];
  uVar4 = *(undefined8 *)*param_3;
  *puVar22 = uVar4;
  puVar22[1] = *puVar3;
  *(undefined4 *)(puVar22 + 2) = 0xffffffff;
  uVar17 = (uint)((ulonglong)uVar4 >> 0x20) ^ (uint)uVar4;
  local_68 = (ulonglong)uVar17;
  if (((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) &&
     ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1)) {
    plVar10 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar10 = (longlong *)param_1[8];
    }
    iVar15 = *(int *)((longlong)plVar10 + (ulonglong)((int)param_1[9] - 1U & uVar17) * 4);
    if (iVar15 != -1) {
      lVar9 = *param_1;
      local_78 = uVar16;
      local_70 = puVar22;
      local_60 = (longlong)(iVar13 >> 5);
      do {
        lVar11 = (longlong)iVar15;
        local_50 = *(undefined8 *)(lVar9 + lVar11 * 0x18);
        local_58 = uVar4;
        cVar8 = FUN_1447bfc5a(&local_50,&local_58);
        lVar9 = *param_1;
        iVar21 = (int)local_78;
        puVar22 = local_70;
        if (cVar8 != '\0') {
          uVar14 = *(undefined4 *)((longlong)local_70 + 4);
          uVar5 = *(undefined4 *)(local_70 + 1);
          uVar6 = *(undefined4 *)((longlong)local_70 + 0xc);
          puVar2 = (undefined4 *)(lVar9 + lVar11 * 0x18);
          *puVar2 = *(undefined4 *)local_70;
          puVar2[1] = uVar14;
          puVar2[2] = uVar5;
          puVar2[3] = uVar6;
          lVar9 = *param_1;
          if (*(int *)((longlong)param_1 + 0x34) != 0) {
            *(int *)(lVar9 + (longlong)(int)param_1[6] * 0x18) = iVar21;
          }
          puVar2 = (undefined4 *)(lVar9 + (longlong)iVar21 * 0x18);
          *puVar2 = 0xffffffff;
          uVar14 = 0xffffffff;
          if (0 < *(int *)((longlong)param_1 + 0x34)) {
            uVar14 = (undefined4)param_1[6];
          }
          puVar2[1] = uVar14;
          *(int *)(param_1 + 6) = iVar21;
          *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
          plVar10 = param_1 + 2;
          if ((longlong *)param_1[4] != (longlong *)0x0) {
            plVar10 = (longlong *)param_1[4];
          }
          puVar1 = (uint *)((longlong)plVar10 + local_60 * 4);
          *puVar1 = *puVar1 & ~uVar20;
          cVar8 = '\x01';
          iVar21 = iVar15;
          goto LAB_1410462d8;
        }
        iVar15 = *(int *)(lVar9 + 0x10 + lVar11 * 0x18);
      } while (iVar15 != -1);
      cVar8 = '\0';
      goto LAB_1410462d8;
    }
  }
  cVar8 = '\0';
LAB_1410462d8:
  piVar7 = local_80;
  if (local_88 != (char *)0x0) {
    *local_88 = cVar8;
  }
  if (cVar8 == '\0') {
    uVar20 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
    if (uVar20 < 4) {
      iVar13 = 1;
    }
    else {
      uVar16 = (ulonglong)(uVar20 & 0xfffffffe) + 0xf;
      lVar9 = 0x3f;
      if (uVar16 != 0) {
        for (; uVar16 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar13 = 1 << ((byte)lVar9 & 0x1f);
    }
    if (((int)uVar20 < 1) || (iVar13 <= (int)param_1[9])) {
      uVar20 = (int)param_1[9] - 1U & (uint)local_68;
      *(uint *)((longlong)puVar22 + 0x14) = uVar20;
      plVar10 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar10 = param_1 + 7;
      }
      *(undefined4 *)(puVar22 + 2) =
           *(undefined4 *)
            ((longlong)plVar10 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar20) * 4);
      plVar10 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar10 = param_1 + 7;
      }
      *(int *)((longlong)plVar10 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar20) * 4) =
           iVar21;
    }
    else {
      *(int *)(param_1 + 9) = iVar13;
      FUN_141047048(param_1);
    }
  }
  *piVar7 = iVar21;
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return piVar7;
}



// FUNCTION 1410464c6 FUN_1410464c6 body=1231 status=ok
// SIG undefined FUN_1410464c6(void)

int * FUN_1410464c6(longlong *param_1,int *param_2,longlong *param_3,char *param_4)

{
  longlong *plVar1;
  undefined8 uVar2;
  uint uVar3;
  ulonglong uVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  longlong *plVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  ulonglong uVar13;
  int iVar14;
  int iVar15;
  uint *puVar16;
  ulonglong uVar17;
  longlong lVar18;
  longlong lVar19;
  undefined1 auStack_88 [36];
  int local_64;
  int *local_60;
  int local_58 [2];
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_141046996(param_1,local_58);
  *(int *)(local_50 + 1) = (int)param_3[1];
  *local_50 = *param_3;
  *(undefined4 *)((longlong)local_50 + 0xc) = 0xffffffff;
  lVar19 = *local_50;
  uVar6 = (uint)((ulonglong)lVar19 >> 0x10);
  uVar10 = (uint)lVar19 & 0xffff;
  uVar6 = ((uint)lVar19 << 0x10 | uVar10) + (int)((ulonglong)lVar19 >> 0x20) +
          (uVar6 << 0x13 | uVar6 & 0xffff) + (uVar10 >> 4);
  uVar6 = (uVar6 >> 2) + uVar6 * 0x40 + (int)local_50[1] + 0x9e3779b9 ^ uVar6;
  iVar9 = local_58[0];
  if ((uint)((int)param_1[1] - *(int *)((longlong)param_1 + 0x34)) < 2) {
LAB_1410468e0:
    cVar5 = '\0';
  }
  else {
    plVar8 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar8 = (longlong *)param_1[8];
    }
    iVar12 = *(int *)((longlong)plVar8 + (ulonglong)((int)param_1[9] - 1U & uVar6) * 4);
    if (iVar12 == -1) goto LAB_1410468e0;
    do {
      plVar8 = (longlong *)(*param_1 + (longlong)iVar12 * 0x14);
      if ((*plVar8 == lVar19) &&
         (*(int *)(*param_1 + 8 + (longlong)iVar12 * 0x14) == (int)local_50[1])) {
        lVar19 = *local_50;
        *(int *)(plVar8 + 1) = (int)local_50[1];
        *plVar8 = lVar19;
        FUN_147bee5e0(param_1,local_58[0]);
        cVar5 = '\x01';
        iVar9 = iVar12;
        break;
      }
      iVar12 = *(int *)((longlong)plVar8 + 0xc);
      cVar5 = '\0';
    } while (iVar12 != -1);
  }
  if (param_4 != (char *)0x0) {
    *param_4 = cVar5;
  }
  if (cVar5 != '\0') goto LAB_1410468b3;
  uVar3 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  uVar10 = 1;
  if (3 < uVar3) {
    uVar4 = (ulonglong)(uVar3 & 0xfffffffe) + 0xf;
    lVar19 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar19 == 0; lVar19 = lVar19 + -1) {
      }
    }
    uVar10 = 1 << ((byte)lVar19 & 0x1f);
  }
  if (((int)uVar3 < 1) || ((int)uVar10 <= (int)param_1[9])) {
    uVar6 = (int)param_1[9] - 1U & uVar6;
    *(uint *)(local_50 + 2) = uVar6;
    plVar8 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar8 = param_1 + 7;
    }
    *(undefined4 *)((longlong)local_50 + 0xc) =
         *(undefined4 *)
          ((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar6) * 4);
    plVar8 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar8 = param_1 + 7;
    }
    *(int *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar6) * 4) = iVar9
    ;
    goto LAB_1410468b3;
  }
  *(uint *)(param_1 + 9) = uVar10;
  plVar8 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar8,0,0,4);
    uVar10 = *(uint *)(param_1 + 9);
  }
  plVar1 = param_1 + 7;
  if (uVar10 == 1) {
    if (*plVar8 != 0) {
      FUN_1446efa72(plVar8,0,0,4);
    }
LAB_141046646:
    uVar6 = 0;
    do {
      plVar8 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar8 = plVar1;
      }
      *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar6) * 4) =
           0xffffffff;
      uVar6 = uVar6 + 1;
    } while (uVar10 != uVar6);
  }
  else {
    if (uVar10 == 0) goto LAB_1410468b3;
    FUN_1446efa72(plVar8,0,uVar10,4);
    if (0 < (int)uVar10) goto LAB_141046646;
  }
  iVar12 = (int)param_1[5];
  if (iVar12 == 0) {
    uVar4 = 0;
    uVar17 = 1;
    iVar11 = 0;
    iVar7 = 0;
  }
  else {
    puVar16 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar16 = (uint *)(param_1 + 2);
    }
    uVar6 = *puVar16;
    if (uVar6 == 0) {
      iVar11 = iVar12 + 0x1e;
      if (-1 < iVar12 + -1) {
        iVar11 = iVar12 + -1;
      }
      uVar4 = 0;
      uVar17 = (ulonglong)(uint)(iVar11 >> 5);
      if (iVar11 >> 5 < 1) {
        uVar17 = uVar4;
      }
      iVar7 = 0;
      do {
        if (uVar17 == uVar4) goto LAB_1410468b3;
        iVar7 = iVar7 + 0x20;
        uVar6 = puVar16[uVar4 + 1];
        uVar4 = uVar4 + 1;
      } while (uVar6 == 0);
    }
    else {
      uVar4 = 0;
      iVar7 = 0;
    }
    uVar17 = (ulonglong)(-uVar6 & uVar6);
    uVar13 = uVar17 * 2 + 1;
    lVar19 = 0x3f;
    if (uVar13 != 0) {
      for (; uVar13 >> lVar19 == 0; lVar19 = lVar19 + -1) {
      }
    }
    iVar11 = (iVar7 - ((uint)lVar19 ^ 0x3f)) + 0x3e;
    if (iVar12 <= iVar11) {
      iVar11 = iVar12;
    }
  }
  if (iVar11 < iVar12) {
    uVar6 = 0xffffffff;
    do {
      lVar19 = *param_1;
      lVar18 = (longlong)iVar11;
      uVar2 = *(undefined8 *)(lVar19 + lVar18 * 0x14);
      uVar10 = (uint)((ulonglong)uVar2 >> 0x10);
      uVar3 = (uint)uVar2 & 0xffff;
      uVar10 = ((uint)uVar2 << 0x10 | uVar3) + (int)((ulonglong)uVar2 >> 0x20) +
               (uVar10 << 0x13 | uVar10 & 0xffff) + (uVar3 >> 4);
      uVar13 = (longlong)
               (int)(uVar10 * 0x40 + *(int *)(lVar19 + 8 + lVar18 * 0x14) + (uVar10 >> 2) +
                     0x9e3779b9 ^ uVar10) & (longlong)(int)param_1[9] - 1U;
      iVar12 = (int)uVar13;
      *(int *)(lVar19 + 0x10 + lVar18 * 0x14) = iVar12;
      plVar8 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar8 = plVar1;
      }
      *(undefined4 *)(lVar19 + 0xc + lVar18 * 0x14) =
           *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar13) * 4);
      plVar8 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar8 = plVar1;
      }
      *(int *)((longlong)plVar8 + ((longlong)iVar12 & (longlong)(int)param_1[9] - 1U) * 4) = iVar11;
      uVar6 = ~(uint)uVar17 & uVar6;
      puVar16 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar16 = (uint *)(param_1 + 2);
      }
      iVar12 = (int)param_1[5];
      iVar11 = (int)uVar4;
      lVar19 = (longlong)iVar11;
      uVar10 = puVar16[lVar19] & uVar6;
      local_64 = iVar9;
      local_60 = param_2;
      if (uVar10 == 0) {
        iVar14 = iVar12 + 0x1e;
        if (-1 < iVar12 + -1) {
          iVar14 = iVar12 + -1;
        }
        iVar14 = iVar14 >> 5;
        iVar15 = iVar14;
        if (iVar14 < iVar11) {
          iVar15 = iVar11;
        }
        if (iVar14 <= iVar11) break;
        lVar18 = 0;
        while( true ) {
          iVar7 = iVar7 + 0x20;
          uVar10 = puVar16[lVar19 + lVar18 + 1];
          if (uVar10 != 0) break;
          lVar18 = lVar18 + 1;
          if (iVar15 - lVar19 == lVar18) goto LAB_1410468b3;
        }
        uVar4 = (ulonglong)(iVar11 + (int)lVar18 + 1);
        uVar6 = 0xffffffff;
      }
      uVar17 = (ulonglong)(-uVar10 & uVar10);
      uVar13 = uVar17 * 2 + 1;
      lVar19 = 0x3f;
      if (uVar13 != 0) {
        for (; uVar13 >> lVar19 == 0; lVar19 = lVar19 + -1) {
        }
      }
      iVar11 = (iVar7 - ((uint)lVar19 ^ 0x3f)) + 0x3e;
    } while (iVar11 < iVar12);
  }
LAB_1410468b3:
  *param_2 = iVar9;
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141046996 FUN_141046996 body=489 status=ok
// SIG undefined FUN_141046996(void)

int * FUN_141046996(longlong *param_1,int *param_2)

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
      FUN_140171ad2(param_1,iVar11);
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
    iVar6 = *(int *)(*param_1 + 4 + lVar3 * 0x14);
    *(int *)(param_1 + 6) = iVar6;
    iVar2 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar6 * 0x14) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar3 * 0x14 + *param_1;
  return param_2;
}



// FUNCTION 141046b80 FUN_141046b80 body=1106 status=ok
// SIG undefined FUN_141046b80(void)

int * FUN_141046b80(longlong *param_1,int *param_2,uint param_3,undefined8 *param_4,char *param_5)

{
  uint *puVar1;
  undefined8 *_Src;
  undefined8 *puVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  longlong *plVar8;
  byte bVar9;
  int iVar10;
  uint uVar11;
  ulonglong uVar12;
  int iVar13;
  longlong *plVar14;
  int iVar15;
  longlong lVar16;
  int iVar17;
  undefined1 auStack_c8 [32];
  ulonglong local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar15 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar15 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar15) {
      FUN_14488f93c(param_1,iVar15);
    }
    iVar13 = (int)param_1[5];
    if (iVar13 == 0) {
      iVar5 = -1;
    }
    else {
      iVar5 = iVar13 + 0x1e;
      if (-1 < iVar13 + -1) {
        iVar5 = iVar13 + -1;
      }
      iVar5 = iVar5 >> 5;
    }
    plVar8 = param_1 + 2;
    iVar10 = iVar13 + 1;
    iVar17 = iVar13 + 0x1f;
    if (-1 < iVar13) {
      iVar17 = iVar13;
    }
    if (iVar17 >> 5 == iVar5) {
      *(int *)(param_1 + 5) = iVar10;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar13) {
        if (iVar13 + 0x20U < 0xa0) {
          iVar10 = 0x80;
          iVar5 = iVar13;
        }
        else {
          uVar6 = iVar13 + 0x20U >> 5;
          local_a8 = (ulonglong)uVar6;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar11 = 4;
            if (4 < uVar6) {
              uVar11 = uVar6;
            }
          }
          else {
            uVar11 = (uVar6 * 3 >> 3) + uVar6 + 0x10;
          }
          uVar12 = FUN_144a3809e(uVar11 << 2,0);
          iVar5 = (int)(uVar12 >> 2);
          iVar10 = -0x20;
          if ((int)(uint)local_a8 <= iVar5) {
            iVar10 = iVar5 << 5;
          }
          iVar5 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar10;
        FUN_1446efbd8(plVar8,iVar5);
        iVar10 = (int)param_1[5] + 1;
      }
      iVar5 = iVar10 + 0x1f;
      if (-1 < iVar10) {
        iVar5 = iVar10;
      }
      *(int *)(param_1 + 5) = iVar10;
      if (iVar10 % 0x20 != 0) {
        plVar14 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar14 = plVar8;
        }
        bVar9 = -(char)(iVar10 % 0x20);
        *(uint *)((longlong)plVar14 + (longlong)(iVar5 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar14 + (longlong)(iVar5 >> 5) * 4) << (bVar9 & 0x1f)) >>
             (bVar9 & 0x1f);
      }
    }
    lVar7 = (longlong)iVar15;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar8 = (longlong *)param_1[4];
    }
    bVar9 = (byte)iVar13 & 0x1f;
    puVar1 = (uint *)((longlong)plVar8 + (longlong)(iVar17 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar9 | 0xfffffffeU >> 0x20 - bVar9);
  }
  else {
    iVar15 = (int)param_1[6];
    lVar7 = (longlong)iVar15;
    iVar13 = *(int *)(*param_1 + 4 + lVar7 * 0x60);
    *(int *)(param_1 + 6) = iVar13;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar13 * 0x60) = 0xffffffff;
    }
  }
  plVar8 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar8 = (longlong *)param_1[4];
  }
  iVar13 = iVar15 + 0x1f;
  if (-1 < iVar15) {
    iVar13 = iVar15;
  }
  puVar1 = (uint *)((longlong)plVar8 + (longlong)(iVar13 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar15 & 0x1f);
  _Src = (undefined8 *)(*param_1 + lVar7 * 0x60);
  cVar4 = '\0';
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  puVar2 = (undefined8 *)(*param_1 + 8 + lVar7 * 0x60);
  puVar2[-1] = *(undefined8 *)*param_4;
  puVar2[4] = 0;
  *(undefined4 *)(puVar2 + 5) = 0;
  *puVar2 = 0;
  puVar2[1] = 0;
  *(undefined8 *)((longlong)puVar2 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar2 + 0x34) = 0;
  if (puVar2 != &local_98) {
    *(undefined4 *)((longlong)_Src + 0x14) = 0;
    local_6c = 0xffffffff00000000;
  }
  local_64 = 0;
  local_78 = 0;
  _Src[9] = 0;
  local_58 = 0;
  *(undefined4 *)(_Src + 10) = 0;
  local_50 = 0;
  FUN_141046fd4();
  *(undefined4 *)(_Src + 0xb) = 0xffffffff;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
      plVar8 = param_1 + 7;
      if ((longlong *)param_1[8] != (longlong *)0x0) {
        plVar8 = (longlong *)param_1[8];
      }
      iVar13 = *(int *)((longlong)plVar8 + (ulonglong)((int)param_1[9] - 1U & param_3) * 4);
      if (iVar13 != -1) {
        local_a8 = CONCAT44(local_a8._4_4_,param_3);
        uVar3 = *_Src;
        lVar7 = *param_1;
        do {
          lVar16 = (longlong)iVar13 * 0x60;
          local_98 = *(undefined8 *)(lVar7 + lVar16);
          local_a0 = uVar3;
          cVar4 = FUN_1447bfc5a(&local_98,&local_a0);
          lVar7 = *param_1;
          if (cVar4 != '\0') {
            *(undefined4 *)(lVar7 + 0x50 + lVar16) = 0;
            if (*(longlong *)(lVar7 + 0x48 + lVar16) != 0) {
              FUN_1400020a8();
            }
            FUN_141046fd4(lVar7 + lVar16 + 8);
            memmove((void *)(lVar7 + lVar16),_Src,0x58);
            FUN_147bee7de(param_1,iVar15);
            cVar4 = '\x01';
            goto LAB_141046d88;
          }
          iVar13 = *(int *)(lVar7 + 0x58 + lVar16);
        } while (iVar13 != -1);
        cVar4 = '\0';
LAB_141046d88:
        param_3 = (uint)local_a8;
        goto LAB_141046d97;
      }
    }
    cVar4 = '\0';
  }
LAB_141046d97:
  if (param_5 != (char *)0x0) {
    *param_5 = cVar4;
  }
  if (cVar4 == '\0') {
    uVar6 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
    if (uVar6 < 4) {
      iVar13 = 1;
    }
    else {
      uVar12 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar12 != 0) {
        for (; uVar12 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar13 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar13 <= (int)param_1[9])) {
      param_3 = (int)param_1[9] - 1U & param_3;
      *(uint *)((longlong)_Src + 0x5c) = param_3;
      plVar8 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar8 = param_1 + 7;
      }
      *(undefined4 *)(_Src + 0xb) =
           *(undefined4 *)
            ((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)param_3) * 4);
      plVar8 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar8 = param_1 + 7;
      }
      *(int *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)param_3) * 4) =
           iVar15;
    }
    else {
      *(int *)(param_1 + 9) = iVar13;
      FUN_14104726e(param_1);
    }
  }
  *param_2 = iVar15;
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141046fd4 FUN_141046fd4 body=116 status=ok
// SIG undefined FUN_141046fd4(void)

void FUN_141046fd4(longlong *param_1)

{
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1401ad22e(param_1,0);
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



// FUNCTION 141047048 FUN_141047048 body=549 status=ok
// SIG undefined FUN_141047048(void)

void FUN_141047048(longlong *param_1)

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
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  ulonglong uVar14;
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
    local_50 = param_1 + 2;
    local_58 = 0x100000000;
    local_48 = 0xffffffff;
    local_40 = 0;
    if ((int)param_1[5] == 0) {
      uVar9 = 1;
      local_48._0_4_ = 0xffffffff;
      local_48._4_4_ = 0;
      local_58._0_4_ = 0;
    }
    else {
      FUN_1449c0562(&local_58);
      uVar9 = local_58 >> 0x20;
    }
    iVar5 = (int)local_58;
    uVar6 = (uint)local_48;
    iVar7 = local_48._4_4_;
    iVar10 = local_40;
    if (local_48._4_4_ < (int)local_50[3]) {
      do {
        lVar12 = *param_1;
        lVar11 = (longlong)iVar7;
        uVar2 = *(undefined8 *)(lVar12 + lVar11 * 0x18);
        uVar14 = (longlong)(int)((uint)((ulonglong)uVar2 >> 0x20) ^ (uint)uVar2) &
                 (longlong)(int)param_1[9] - 1U;
        iVar13 = (int)uVar14;
        *(int *)(lVar12 + 0x14 + lVar11 * 0x18) = iVar13;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar12 + 0x10 + lVar11 * 0x18) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar14) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar13 & (longlong)(int)param_1[9] - 1U) * 4) = iVar7
        ;
        uVar6 = ~(uint)uVar9 & uVar6;
        plVar8 = (longlong *)local_50[2];
        if ((longlong *)local_50[2] == (longlong *)0x0) {
          plVar8 = local_50;
        }
        iVar13 = (int)local_50[3];
        lVar12 = (longlong)iVar5;
        uVar4 = *(uint *)((longlong)plVar8 + lVar12 * 4) & uVar6;
        if (uVar4 == 0) {
          iVar7 = iVar13 + 0x1e;
          if (-1 < iVar13 + -1) {
            iVar7 = iVar13 + -1;
          }
          iVar7 = iVar7 >> 5;
          iVar3 = iVar7;
          if (iVar7 < iVar5) {
            iVar3 = iVar5;
          }
          if (iVar7 <= iVar5) break;
          lVar11 = 0;
          while( true ) {
            iVar10 = iVar10 + 0x20;
            uVar4 = *(uint *)((longlong)plVar8 + lVar11 * 4 + lVar12 * 4 + 4);
            if (uVar4 != 0) break;
            lVar11 = lVar11 + 1;
            if (iVar3 - lVar12 == lVar11) goto LAB_141047228;
          }
          iVar5 = iVar5 + (int)lVar11 + 1;
          uVar6 = 0xffffffff;
        }
        uVar9 = (ulonglong)(-uVar4 & uVar4);
        uVar14 = uVar9 * 2 + 1;
        lVar12 = 0x3f;
        if (uVar14 != 0) {
          for (; uVar14 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        iVar7 = (iVar10 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
      } while (iVar7 < iVar13);
    }
  }
LAB_141047228:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14104726e FUN_14104726e body=553 status=ok
// SIG undefined FUN_14104726e(void)

void FUN_14104726e(longlong *param_1)

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
        lVar10 = (longlong)iVar6 * 0x60;
        uVar13 = (longlong)
                 (int)((uint)((ulonglong)*(undefined8 *)(lVar11 + lVar10) >> 0x20) ^
                      (uint)*(undefined8 *)(lVar11 + lVar10)) & (longlong)(int)param_1[9] - 1U;
        iVar12 = (int)uVar13;
        *(int *)(lVar11 + 0x5c + lVar10) = iVar12;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar11 + 0x58 + lVar10) =
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
            if (iVar2 - lVar11 == lVar10) goto LAB_141047452;
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
LAB_141047452:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141047498 FUN_141047498 body=1165 status=ok
// SIG undefined FUN_141047498(void)

void FUN_141047498(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined *local_48;
  code *local_40;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_20 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9520b0) {
    FUN_144b3d300(&DAT_14c9520b0);
    if (DAT_14c9520b0 == -1) {
      local_48 = (undefined *)FUN_1446ddbd2();
      local_40 = FUN_1409e12a0;
      local_50 = 0;
      local_58 = 0xa001;
      FUN_14000176a(&DAT_14c952060,L"FNameProperty",0x2000,0);
      atexit(FUN_142816ef9);
      _Init_thread_footer(&DAT_14c9520b0);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_20);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_20);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_20 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_20);
    }
  }
  uStack_28 = 0;
  uStack_24 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_48 = (undefined *)FUN_1446ddbd2();
      local_40 = FUN_1468d96f0;
      local_50 = 0;
      local_58 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&uStack_28);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&uStack_28);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&uStack_28);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      uStack_28 = (undefined4)uVar2;
      uStack_24 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&uStack_28);
    }
  }
  local_2c = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9523c8) {
    FUN_144b3d300(&DAT_14c9523c8);
    if (DAT_14c9523c8 == -1) {
      FUN_14475b26a();
      local_40 = FUN_1408a629c;
      local_48 = &DAT_14c9520b8;
      local_50 = 0;
      local_58 = 0x1008101;
      FUN_14000176a(&DAT_14c952378,L"FFloatProperty",0x100,0);
      atexit(FUN_14281708e);
      _Init_thread_footer(&DAT_14c9523c8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_2c);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_2c);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_2c);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_2c = (undefined4)uVar2;
      uStack_28 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_2c);
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar4 = FUN_141047926(local_20,CONCAT44(uStack_24,uStack_28),local_2c);
  *param_3 = uVar4;
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141047926 FUN_141047926 body=1019 status=ok
// SIG undefined FUN_141047926(void)

undefined8 FUN_141047926(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  code *pcVar2;
  byte bVar3;
  longlong lVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined *puVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined1 auStack_148 [32];
  undefined8 local_128;
  undefined1 local_120 [24];
  longlong local_108;
  char local_f8 [16];
  longlong *local_e8;
  int local_d0;
  char local_c8;
  undefined8 local_c0;
  longlong *local_b8;
  int local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  ushort local_80;
  byte local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  ushort local_58;
  byte local_50;
  undefined4 *local_40;
  int local_38;
  ulonglong local_30;
  
  uVar15 = (undefined4)((ulonglong)param_3 >> 0x20);
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_148;
  uVar6 = 0;
  local_f8[0] = '\0';
  local_d0 = 0;
  local_128 = param_1;
  FUN_1456bb102(local_f8);
  local_c8 = '\0';
  local_a0 = 0;
  FUN_1446dcdd4(local_120,&local_128);
  if (DAT_14c9a66c8 != 0) {
    uVar6 = FUN_144837462(DAT_14c9a66c8,local_120);
  }
  FUN_1400606f6(&local_70,uVar6,local_f8);
  puVar7 = local_40;
  if (local_40 == (undefined4 *)0x0) {
    puVar7 = &local_70;
  }
  puVar9 = (undefined4 *)&DAT_14c9a40e0;
  if (0 < local_38) {
    puVar9 = puVar7;
  }
  puVar7 = &local_98;
  FUN_1400603ec(puVar7,uVar6,puVar9);
  puVar9 = local_40;
  if (local_40 == (undefined4 *)0x0) {
    puVar9 = &local_70;
  }
  FUN_1446fdf58(puVar9,local_38);
  if (local_40 != (undefined4 *)0x0) {
    FUN_1400020a8();
  }
  if (local_78 == 3) {
    uVar5 = 3;
    uVar15 = 0;
    uVar14 = local_98;
  }
  else {
    puVar9 = &local_70;
    FUN_1400b56fe(puVar9,&local_98,3);
    uVar14 = (int)param_3;
    if (local_50 != 0) {
      uVar15 = 0;
      uVar14 = local_70;
    }
    pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_50 * 0x120));
    if (pcVar2 != (code *)0x0) {
      if (0x18 < local_58) {
        puVar9 = (undefined4 *)CONCAT44(uStack_6c,local_70);
      }
      (*pcVar2)(puVar9);
    }
    if (0x18 < local_58) {
      FUN_1400020a8(CONCAT44(uStack_6c,local_70));
    }
    uVar5 = (uint)local_78;
  }
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar5 * 0x120));
  if (pcVar2 != (code *)0x0) {
    if (0x18 < local_80) {
      puVar7 = (undefined4 *)CONCAT44(uStack_94,local_98);
    }
    (*pcVar2)(puVar7);
  }
  if (0x18 < local_80) {
    FUN_1400020a8(CONCAT44(uStack_94,local_98));
  }
  if (local_108 != 0) {
    FUN_1400020a8();
  }
  lVar4 = DAT_14c9a3da0;
  if ((longlong)local_a0 != 0) {
    lVar12 = (longlong)local_a0 + -1;
    lVar13 = lVar12 * 0x10;
    FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar13),
                  *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar13));
    if (*(longlong *)(lVar4 + lVar13) != 0) {
      FUN_1400020a8();
    }
    lVar4 = DAT_14c9a3da0;
    iVar11 = (int)lVar12;
    if (DAT_14c9a3dd4 != 0) {
      *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar11;
    }
    *(undefined4 *)(lVar4 + lVar13) = 0xffffffff;
    iVar8 = -1;
    if (0 < DAT_14c9a3dd4) {
      iVar8 = DAT_14c9a3dd0;
    }
    *(int *)(lVar4 + 4 + lVar13) = iVar8;
    DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
    puVar10 = &DAT_14c9a3db0;
    if (DAT_14c9a3dc0 != (undefined *)0x0) {
      puVar10 = DAT_14c9a3dc0;
    }
    iVar8 = iVar11 + 0x1f;
    if (-1 < iVar11) {
      iVar8 = iVar11;
    }
    bVar3 = (byte)lVar12 & 0x1f;
    DAT_14c9a3dd0 = iVar11;
    *(uint *)(puVar10 + (longlong)(iVar8 >> 5) * 4) =
         *(uint *)(puVar10 + (longlong)(iVar8 >> 5) * 4) &
         (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
    local_a0 = 0;
  }
  if (local_c8 != '\0') {
    if (local_c8 == '\x01') {
      local_c0 = 0;
    }
    else if ((local_c8 == '\x03') && (local_b8 != (longlong *)0x0)) {
      LOCK();
      piVar1 = (int *)((longlong)local_b8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_b8 + 0x10))();
      }
    }
    local_c8 = '\0';
  }
  lVar4 = DAT_14c9a3da0;
  if ((longlong)local_d0 != 0) {
    lVar12 = (longlong)local_d0 + -1;
    lVar13 = lVar12 * 0x10;
    FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar13),
                  *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar13));
    if (*(longlong *)(lVar4 + lVar13) != 0) {
      FUN_1400020a8();
    }
    lVar4 = DAT_14c9a3da0;
    iVar11 = (int)lVar12;
    if (DAT_14c9a3dd4 != 0) {
      *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar11;
    }
    *(undefined4 *)(lVar4 + lVar13) = 0xffffffff;
    iVar8 = -1;
    if (0 < DAT_14c9a3dd4) {
      iVar8 = DAT_14c9a3dd0;
    }
    *(int *)(lVar4 + 4 + lVar13) = iVar8;
    DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
    puVar10 = &DAT_14c9a3db0;
    if (DAT_14c9a3dc0 != (undefined *)0x0) {
      puVar10 = DAT_14c9a3dc0;
    }
    iVar8 = iVar11 + 0x1f;
    if (-1 < iVar11) {
      iVar8 = iVar11;
    }
    bVar3 = (byte)lVar12 & 0x1f;
    DAT_14c9a3dd0 = iVar11;
    *(uint *)(puVar10 + (longlong)(iVar8 >> 5) * 4) =
         *(uint *)(puVar10 + (longlong)(iVar8 >> 5) * 4) &
         (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
    local_d0 = 0;
  }
  if ((local_f8[0] == '\x03') && (local_e8 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_e8 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_e8 + 0x10))();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return CONCAT44(uVar15,uVar14);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141047d22 FUN_141047d22 body=1290 status=ok
// SIG undefined FUN_141047d22(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141047d22(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  longlong *plVar5;
  undefined1 auVar6 [16];
  ulonglong uVar7;
  double dVar8;
  double dVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  ulonglong uVar16;
  double dVar17;
  double dVar18;
  double dVar21;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  double dVar24;
  undefined4 uVar25;
  undefined1 auStack_158 [32];
  longlong local_138;
  undefined1 local_130;
  undefined1 local_128;
  undefined4 local_120;
  undefined4 local_118;
  undefined4 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined4 local_f8;
  undefined4 local_f0;
  undefined1 local_e8;
  undefined8 local_d8 [12];
  undefined8 local_78;
  undefined2 local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_158;
  lVar12 = *(longlong *)(param_1 + 0x108);
  if (lVar12 == 0) {
LAB_141047ed9:
    lVar12 = *(longlong *)(param_1 + 0x118);
    if (lVar12 == 0) {
      uVar25 = 0;
    }
    else {
      if (*(char *)(lVar12 + 0x122) != '\x01') goto LAB_14104814c;
      iVar3 = *(int *)(lVar12 + 0xe8);
      if (iVar3 < 1) {
        uVar25 = 0;
      }
      else {
        puVar15 = (undefined8 *)(lVar12 + 0x20);
        puVar14 = (undefined8 *)(param_1 + 0x20);
        for (lVar11 = 0xc; lVar11 != 0; lVar11 = lVar11 + -1) {
          *puVar14 = *puVar15;
          puVar15 = puVar15 + 1;
          puVar14 = puVar14 + 1;
        }
        uVar25 = *(undefined4 *)(lVar12 + 0x80);
      }
      *(undefined8 *)(param_1 + 0x118) = 0;
      plVar5 = *(longlong **)(param_1 + 0x120);
      if (plVar5 != (longlong *)0x0) {
        *(undefined8 *)(param_1 + 0x120) = 0;
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
      if (iVar3 < 1) goto LAB_141048148;
    }
    local_e8 = *(undefined1 *)(param_1 + 0x9a);
    local_f0 = *(undefined4 *)(param_1 + 0x104);
    local_f8 = *(undefined4 *)(param_1 + 0x100);
    if (*(int *)(param_1 + 0x1c) == 0) {
LAB_141048186:
      local_100 = 0;
    }
    else {
      uVar4 = *(uint *)(param_1 + 0x18);
      local_100 = 0;
      if ((-1 < (int)uVar4) && ((int)uVar4 < DAT_14c9647dc)) {
        puVar15 = (undefined8 *)
                  ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8));
        if ((puVar15 == (undefined8 *)0x0) ||
           ((*(int *)(puVar15 + 2) != *(int *)(param_1 + 0x1c) ||
            ((*(uint *)(puVar15 + 1) & 0x10200000) != 0)))) goto LAB_141048186;
        local_100 = *puVar15;
      }
    }
    if (*(int *)(param_1 + 0x14) == 0) {
LAB_14104818e:
      local_108 = 0;
    }
    else {
      uVar4 = *(uint *)(param_1 + 0x10);
      local_108 = 0;
      if ((-1 < (int)uVar4) && ((int)uVar4 < DAT_14c9647dc)) {
        puVar15 = (undefined8 *)
                  ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8));
        if ((puVar15 == (undefined8 *)0x0) ||
           ((*(int *)(puVar15 + 2) != *(int *)(param_1 + 0x14) ||
            ((*(uint *)(puVar15 + 1) & 0x10200000) != 0)))) goto LAB_14104818e;
        local_108 = *puVar15;
      }
    }
    local_118 = *(undefined4 *)(param_1 + 0xf8);
    local_120 = *(undefined4 *)(param_1 + 0xfc);
    local_128 = *(undefined1 *)(param_1 + 0x99);
    local_130 = *(undefined1 *)(param_1 + 0x98);
    local_138 = param_1 + 0xb8;
    local_78 = *(undefined8 *)(param_1 + 0x80);
    local_70 = *(undefined2 *)(param_1 + 0x88);
    local_68 = *(undefined8 *)(param_1 + 0x90);
    puVar15 = (undefined8 *)(param_1 + 0x20);
    puVar14 = local_d8;
    for (lVar12 = 0xc; lVar12 != 0; lVar12 = lVar12 + -1) {
      *puVar14 = *puVar15;
      puVar15 = puVar15 + 1;
      puVar14 = puVar14 + 1;
    }
    if (*(int *)(param_1 + 0xc) == 0) {
LAB_141048196:
      uVar13 = 0;
    }
    else {
      uVar4 = *(uint *)(param_1 + 8);
      uVar13 = 0;
      if ((-1 < (int)uVar4) && ((int)uVar4 < DAT_14c9647dc)) {
        puVar15 = (undefined8 *)
                  ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8));
        if ((puVar15 == (undefined8 *)0x0) ||
           ((*(int *)(puVar15 + 2) != *(int *)(param_1 + 0xc) ||
            ((*(uint *)(puVar15 + 1) & 0x10200000) != 0)))) goto LAB_141048196;
        uVar13 = *puVar15;
      }
    }
    local_110 = uVar25;
    FUN_141048a26(uVar13,param_1 + 0xa0,local_d8,&local_78);
  }
  else {
    if (*(char *)(lVar12 + 0x8c) != '\x01') goto LAB_14104814c;
    if ((*(byte *)(lVar12 + 0x13d) & 1) != 0) {
      uVar10 = *(undefined8 *)(lVar12 + 0xc0);
      uVar13 = *(undefined8 *)(lVar12 + 200);
      *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(lVar12 + 0xb8);
      *(undefined8 *)(param_1 + 0x48) = uVar10;
      *(undefined8 *)(param_1 + 0x50) = uVar13;
      *(undefined8 *)(param_1 + 0x58) = 0;
      dVar8 = DAT_14c8462d0 * *(double *)(lVar12 + 0xf8) +
              DAT_14c8462c0 * *(double *)(lVar12 + 0xe8) +
              DAT_14c8462c8 * *(double *)(lVar12 + 0xf0) + 1.0;
      dVar24 = *(double *)(lVar12 + 0xe8);
      dVar18 = *(double *)(lVar12 + 0xf8);
      dVar21 = *(double *)(lVar12 + 0xf0);
      if (dVar8 < 9.999999974752427e-07) {
        if ((ABS(DAT_14c8462c0) <= ABS(DAT_14c8462c8)) || (ABS(DAT_14c8462c0) <= ABS(DAT_14c8462d0))
           ) {
          dVar8 = 0.0;
          dVar24 = -DAT_14c8463a0;
          dVar18 = -DAT_14c8463b0;
          dVar21 = -DAT_14c8463a8;
        }
        else {
          dVar8 = 0.0;
          dVar24 = DAT_14c846388;
          dVar18 = DAT_14c846398;
          dVar21 = DAT_14c846390;
        }
      }
      dVar17 = DAT_14c8462c0 * dVar21 - dVar24 * DAT_14c8462c8;
      dVar9 = DAT_14c8462d0 * dVar24 - dVar18 * DAT_14c8462c0;
      dVar24 = DAT_14c8462c8 * dVar18 - dVar21 * DAT_14c8462d0;
      dVar18 = dVar17 * dVar17 + dVar24 * dVar24;
      dVar21 = dVar8 * dVar8 + dVar9 * dVar9;
      auVar19._0_8_ = dVar18 + dVar21;
      auVar19._8_8_ = dVar18 + dVar21;
      uVar16 = -(ulonglong)(9.99999993922529e-09 <= auVar19._8_8_);
      auVar20 = sqrtpd(auVar19,auVar19);
      auVar22 = divpd(_DAT_149934d80,auVar20);
      auVar23._0_8_ = auVar22._0_8_ * dVar17;
      auVar23._8_8_ = auVar22._8_8_ * dVar8;
      uVar7 = (ulonglong)(dVar9 * auVar22._8_8_) & uVar16;
      auVar20._8_4_ = (int)uVar16;
      auVar20._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar19._0_8_);
      auVar20._12_4_ = (int)(uVar16 >> 0x20);
      auVar20 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar23,auVar20);
      auVar6._8_4_ = (int)uVar7;
      auVar6._0_8_ = (ulonglong)(dVar24 * auVar22._0_8_) &
                     -(ulonglong)(9.99999993922529e-09 <= auVar19._0_8_);
      auVar6._12_4_ = (int)(uVar7 >> 0x20);
      *(undefined1 (*) [16])(param_1 + 0x20) = auVar6;
      *(undefined1 (*) [16])(param_1 + 0x30) = auVar20;
      *(undefined8 *)(param_1 + 0x108) = 0;
      plVar5 = *(longlong **)(param_1 + 0x110);
      if (plVar5 != (longlong *)0x0) {
        *(undefined8 *)(param_1 + 0x110) = 0;
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
      FUN_1410482d4(param_1);
      goto LAB_141047ed9;
    }
  }
LAB_141048148:
  *(undefined1 *)(param_2 + 0x60) = 1;
LAB_14104814c:
  if ((local_60 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14104822e FUN_14104822e body=166 status=ok
// SIG undefined FUN_14104822e(void)

void FUN_14104822e(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  
  lVar2 = *(longlong *)(param_1 + 0x10);
  if (lVar2 != 0) {
    if (*(longlong *)(lVar2 + 0x110) != 0) {
      FUN_1400020a8();
    }
    if (*(longlong *)(lVar2 + 0x100) != 0) {
      FUN_1400020a8();
    }
    if (*(longlong *)(lVar2 + 0xf0) != 0) {
      FUN_1400020a8();
    }
    if (*(longlong *)(lVar2 + 0xe0) != 0) {
      FUN_1400020a8();
    }
    if (*(longlong *)(lVar2 + 0xd0) != 0) {
      FUN_1400020a8();
    }
    if (*(longlong *)(lVar2 + 0xb8) != 0) {
      FUN_1400020a8();
    }
    plVar3 = *(longlong **)(lVar2 + 8);
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))();
      }
    }
    FUN_1400020a8(lVar2);
    return;
  }
  return;
}



// FUNCTION 1410482d4 FUN_1410482d4 body=742 status=ok
// SIG undefined FUN_1410482d4(void)

void FUN_1410482d4(longlong param_1)

{
  int *piVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined1 auStack_d8 [32];
  float local_b8;
  undefined1 local_b0;
  undefined1 local_a8;
  double local_98;
  double local_90;
  undefined1 local_88 [36];
  float local_64;
  float local_60;
  undefined4 local_5c;
  longlong local_58;
  undefined1 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar5 = FUN_14074d544(param_1 + 0xa0);
  if ((lVar5 == 0) || (*(char *)(lVar5 + 0x58) != '\0')) goto LAB_1410484b7;
  local_98 = (double)*(float *)(param_1 + 0xf8);
  local_90 = local_98;
  FUN_1410486a0(lVar5,local_88);
  fVar2 = *(float *)(lVar5 + 0x84);
  local_64 = -fVar2;
  local_60 = fVar2 + fVar2;
  local_5c = 0;
  local_48 = 0;
  plVar6 = (longlong *)FUN_14001cc68(0x130,0x10);
  if (*(int *)(param_1 + 0xc) == 0) {
LAB_1410484e6:
    uVar9 = 0;
  }
  else {
    uVar4 = *(uint *)(param_1 + 8);
    uVar9 = 0;
    if ((-1 < (int)uVar4) && ((int)uVar4 < DAT_14c9647dc)) {
      puVar10 = (undefined8 *)
                ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8));
      if ((puVar10 == (undefined8 *)0x0) ||
         ((*(int *)(puVar10 + 2) != *(int *)(param_1 + 0xc) ||
          ((*(uint *)(puVar10 + 1) & 0x10200000) != 0)))) goto LAB_1410484e6;
      uVar9 = *puVar10;
    }
  }
  local_a8 = 0;
  local_b0 = 1;
  local_b8 = fVar2;
  FUN_1410487b8(plVar6,uVar9,param_1 + 0x20,local_88);
  plVar7 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar7[1] = (longlong)&DAT_100000001;
  *plVar7 = (longlong)&PTR_FUN_14b40fb00;
  plVar7[2] = (longlong)plVar6;
  if ((plVar6 != (longlong *)0x0) &&
     (((*plVar6 == 0 || (plVar6[1] == 0)) || (*(int *)(plVar6[1] + 8) < 1)))) {
    if (plVar7 == (longlong *)0x0) {
      *plVar6 = (longlong)plVar6;
      plVar8 = (longlong *)plVar6[1];
      if (plVar8 != (longlong *)0x0) {
LAB_141048520:
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar8 + 0x10))();
        }
        plVar6[1] = (longlong)plVar7;
        if (plVar7 != (longlong *)0x0) goto LAB_141048469;
      }
    }
    else {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
      *plVar6 = (longlong)plVar6;
      if ((longlong *)plVar6[1] != plVar7) {
        LOCK();
        *(int *)((longlong)plVar7 + 0xc) = *(int *)((longlong)plVar7 + 0xc) + 1;
        UNLOCK();
        plVar8 = (longlong *)plVar6[1];
        if (plVar8 != (longlong *)0x0) goto LAB_141048520;
        plVar6[1] = (longlong)plVar7;
      }
LAB_141048469:
      LOCK();
      plVar8 = plVar7 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
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
  *(longlong **)(param_1 + 0x118) = plVar6;
  plVar6 = *(longlong **)(param_1 + 0x120);
  if (plVar7 == plVar6) {
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      plVar6 = plVar7 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar3 = *piVar1;
        UNLOCK();
        plVar6 = plVar7;
        goto joined_r0x00014104857f;
      }
    }
  }
  else {
    *(longlong **)(param_1 + 0x120) = plVar7;
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar7 = plVar6 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar3 = *piVar1;
        UNLOCK();
joined_r0x00014104857f:
        if (iVar3 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
    }
  }
  FUN_1410485bc(*(undefined8 *)(param_1 + 0x118));
  if (local_58 != 0) {
    FUN_1400020a8();
  }
LAB_1410484b7:
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410485bc FUN_1410485bc body=226 status=ok
// SIG undefined FUN_1410485bc(void)

void FUN_1410485bc(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  undefined8 uVar7;
  bool bVar8;
  undefined1 auStack_88 [32];
  code *local_68;
  undefined8 local_58;
  undefined **local_48;
  undefined8 local_40;
  longlong *local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar6 = (longlong *)param_1[1];
  bVar3 = true;
  if (plVar6 == (longlong *)0x0) {
LAB_141048666:
    uVar7 = 0;
    plVar6 = (longlong *)0x0;
  }
  else {
    iVar5 = (int)plVar6[1];
    do {
      if (iVar5 == 0) goto LAB_141048666;
      LOCK();
      iVar4 = (int)plVar6[1];
      bVar8 = iVar5 == iVar4;
      if (bVar8) {
        *(int *)(plVar6 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar8);
    uVar7 = *param_1;
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
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
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    bVar3 = false;
  }
  local_58 = 0;
  local_48 = &PTR_LAB_14b40e9d0;
  local_68 = FUN_143d8dd88;
  local_40 = uVar7;
  local_38 = plVar6;
  FUN_1407461b0(0x4ff);
  if (!bVar3) {
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
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1410486a0 FUN_1410486a0 body=280 status=ok
// SIG undefined FUN_1410486a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1410486a0(longlong param_1,undefined1 *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  float fVar7;
  undefined4 uVar8;
  
  *param_2 = 0;
  *(undefined2 *)(param_2 + 0x20) = 0;
  *(undefined8 *)(param_2 + 0x24) = 0x42800000c2800000;
  param_2[0x22] = 0;
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined2 *)(param_2 + 0x40) = 0;
  dVar1 = param_3[1];
  *(double *)(param_2 + 8) = *param_3;
  *(double *)(param_2 + 0x10) = dVar1;
  iVar3 = DAT_14c763978;
  *(int *)(param_2 + 0x18) = DAT_14c763978;
  iVar4 = DAT_14c763980;
  if (*(char *)(param_1 + 0x58) != '\0') {
    param_2[0x40] = 1;
    iVar4 = 1;
  }
  *(int *)(param_2 + 0x1c) = iVar4;
  if (*(char *)(param_1 + 0x8c) == '\x01') {
    *(undefined4 *)(param_2 + 0x18) = 0;
    *param_2 = 1;
    iVar3 = 0;
  }
  *(undefined4 *)(param_2 + 0x2c) = 0x40a00000;
  dVar1 = *param_3;
  uVar6 = SUB84(dVar1,0);
  uVar8 = (undefined4)((ulonglong)dVar1 >> 0x20);
  dVar2 = param_3[1];
  if (dVar2 <= dVar1) {
    uVar6 = SUB84(dVar2,0);
    uVar8 = (undefined4)((ulonglong)dVar2 >> 0x20);
  }
  fVar7 = (float)((double)CONCAT44(uVar8,uVar6) / 200.0 + -1.0);
  if (1e-08 < ABS(fVar7)) {
    iVar3 = ((int)ROUND(DAT_14c76397c * fVar7 + DAT_14c76397c * fVar7 + 0.5) >> 1) + iVar3;
    fVar7 = fVar7 * _DAT_14c763984;
    iVar5 = 6;
    if (6 < iVar3) {
      iVar5 = iVar3;
    }
    *(int *)(param_2 + 0x18) = iVar5;
    iVar4 = ((int)ROUND(fVar7 + fVar7 + 0.5) >> 1) + iVar4;
    iVar3 = 1;
    if (1 < iVar4) {
      iVar3 = iVar4;
    }
    *(int *)(param_2 + 0x1c) = iVar3;
  }
  return;
}



// FUNCTION 1410487b8 FUN_1410487b8 body=622 status=ok
// SIG undefined FUN_1410487b8(void)

undefined8 *
FUN_1410487b8(undefined8 *param_1,longlong param_2,undefined8 *param_3,undefined4 *param_4,
             undefined4 param_5,undefined1 param_6,undefined1 param_7)

{
  undefined8 *puVar1;
  uint uVar2;
  void *_Src;
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
  int iVar15;
  undefined8 *puVar16;
  longlong lVar17;
  bool bVar18;
  
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0x3ff00000;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)((longlong)param_1 + 100) = 0x3ff00000;
  *(undefined4 *)(param_1 + 0xd) = 0;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0x3ff00000;
  param_1[0xe] = 0x3ff0000000000000;
  param_1[0xf] = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  param_1[0x12] = 0x4070000000000000;
  param_1[0x13] = 0x4070000000000000;
  param_1[0x14] = 0x100000000;
  *(undefined2 *)(param_1 + 0x15) = 0;
  *(undefined1 *)((longlong)param_1 + 0xaa) = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0x42800000c2800000;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0x3dcccccd;
  puVar1 = param_1 + 0x17;
  *(undefined1 *)((longlong)param_1 + 0x122) = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(undefined2 *)(param_1 + 0x19) = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined1 *)((longlong)param_1 + 0x121) = param_6;
  *(undefined1 *)(param_1 + 0x24) = param_7;
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 2) = 0;
    iVar14 = 0;
  }
  else {
    uVar2 = *(uint *)(param_2 + 0xc);
    *(uint *)(param_1 + 2) = uVar2;
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar17 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar17 = 0;
    }
    iVar14 = *(int *)(lVar17 + 0x10);
    if (*(int *)(lVar17 + 0x10) == 0) {
      LOCK();
      iVar14 = DAT_14c964868 + 1;
      UNLOCK();
      iVar15 = DAT_14c964868 + 1;
      bVar18 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar14;
      if (bVar18) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar15);
      }
      LOCK();
      iVar14 = *(int *)(lVar17 + 0x10);
      bVar18 = iVar14 == 0;
      if (bVar18) {
        *(int *)(lVar17 + 0x10) = iVar15;
        iVar14 = 0;
      }
      UNLOCK();
      if (bVar18) {
        iVar14 = iVar15;
      }
    }
  }
  *(int *)((longlong)param_1 + 0x14) = iVar14;
  puVar16 = param_1 + 4;
  for (lVar17 = 0xc; lVar17 != 0; lVar17 = lVar17 + -1) {
    *puVar16 = *param_3;
    param_3 = param_3 + 1;
    puVar16 = puVar16 + 1;
  }
  uVar3 = *param_4;
  uVar4 = param_4[1];
  uVar5 = param_4[2];
  uVar6 = param_4[3];
  uVar7 = param_4[4];
  uVar8 = param_4[5];
  uVar9 = param_4[6];
  uVar10 = param_4[7];
  uVar11 = param_4[9];
  uVar12 = param_4[10];
  uVar13 = param_4[0xb];
  *(undefined4 *)(param_1 + 0x15) = param_4[8];
  *(undefined4 *)((longlong)param_1 + 0xac) = uVar11;
  *(undefined4 *)(param_1 + 0x16) = uVar12;
  *(undefined4 *)((longlong)param_1 + 0xb4) = uVar13;
  *(undefined4 *)(param_1 + 0x13) = uVar7;
  *(undefined4 *)((longlong)param_1 + 0x9c) = uVar8;
  *(undefined4 *)(param_1 + 0x14) = uVar9;
  *(undefined4 *)((longlong)param_1 + 0xa4) = uVar10;
  *(undefined4 *)(param_1 + 0x11) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x8c) = uVar4;
  *(undefined4 *)(param_1 + 0x12) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0x94) = uVar6;
  if (puVar1 != (undefined8 *)(param_4 + 0xc)) {
    iVar14 = param_4[0xe];
    _Src = *(void **)(param_4 + 0xc);
    *(int *)(param_1 + 0x18) = iVar14;
    if (iVar14 == 0 && *(int *)((longlong)param_1 + 0xc4) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc4) = 0;
    }
    else {
      FUN_1447bda9e(puVar1,iVar14);
      if (iVar14 != 0) {
        memcpy((void *)*puVar1,_Src,(longlong)iVar14 << 2);
      }
    }
  }
  *(undefined2 *)(param_1 + 0x19) = *(undefined2 *)(param_4 + 0x10);
  *(undefined1 *)((longlong)param_1 + 0xc9) = 0;
  *(undefined4 *)(param_1 + 0x10) = param_5;
  return param_1;
}



// FUNCTION 141048a26 FUN_141048a26 body=762 status=ok
// SIG undefined FUN_141048a26(void)

longlong *
FUN_141048a26(longlong param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,
             longlong *param_5,char param_6,char param_7,undefined4 param_8,uint param_9,
             float param_10,undefined8 param_11,undefined8 param_12,undefined4 param_13,
             undefined4 param_14,char param_15)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined4 *puVar8;
  undefined1 auStack_158 [32];
  uint local_138;
  float local_130;
  undefined4 local_128;
  undefined4 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  longlong local_d8;
  longlong *local_c8;
  longlong local_b8 [5];
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_158;
  if (param_1 != 0) {
    iVar2 = FUN_14490d72a();
    if (iVar2 != 3) {
      lVar3 = FUN_14074d544(param_2);
      if (lVar3 != 0) {
        if (*(char *)(lVar3 + 0x58) == '\0') {
          if (param_10 <= 0.0) {
            param_10 = *(float *)(lVar3 + 0x84);
          }
        }
        else {
          param_10 = 0.0;
        }
        uVar4 = FUN_141048d22();
        local_f8 = 0;
        uStack_f0 = 0;
        local_118 = 0;
        uStack_110 = 0;
        local_e8 = 0x800060100;
        local_d8 = 0;
        local_c8 = (longlong *)0x0;
        local_108 = param_11;
        uStack_100 = param_12;
        puVar8 = &DAT_14c9485f0;
        if (*(undefined4 **)(lVar3 + 8) != (undefined4 *)0x0) {
          puVar8 = *(undefined4 **)(lVar3 + 8);
        }
        if (DAT_14c947fe0 == 0) {
          lVar6 = FUN_14001cc68(0x140,0x10);
          FUN_1456b2032(lVar6);
          DAT_14c947fe0 = lVar6;
        }
        FUN_140045924(DAT_14c947fe0,&local_118,puVar8,1);
        local_e8._0_4_ = CONCAT13(3,(undefined3)local_e8);
        local_e8 = CONCAT71(local_e8._1_7_,1);
        plVar5 = (longlong *)FUN_141037e38(param_1,uVar4,param_3,&local_118);
        if (plVar5 != (longlong *)0x0) {
          *(byte *)(plVar5 + 0x131) =
               param_15 << 7 | param_7 << 6 | param_6 << 5 | *(byte *)(plVar5 + 0x131) & 0x1f;
          lVar1 = param_4[1];
          lVar6 = param_4[2];
          plVar5[0x12a] = *param_4;
          *(short *)(plVar5 + 299) = (short)lVar1;
          plVar5[300] = lVar6;
          if (plVar5 + 0x133 != param_5) {
            plVar7 = (longlong *)param_5[6];
            if ((longlong *)param_5[6] == (longlong *)0x0) {
              plVar7 = param_5;
            }
            FUN_1400709d4(plVar5 + 0x133,plVar7,(int)param_5[7],
                          *(undefined4 *)((longlong)plVar5 + 0x9d4));
          }
          local_120 = param_14;
          local_128 = param_13;
          local_138 = param_9;
          local_130 = param_10;
          (**(code **)(*plVar5 + 0x638))(plVar5,lVar3,1,param_8);
          local_138 = local_138 & 0xffffff00;
          FUN_14113775c(plVar5,&DAT_14c846480,1,0);
        }
        if (local_d8 != 0) {
          plVar7 = local_c8;
          if (local_c8 == (longlong *)0x0) {
            plVar7 = local_b8;
          }
          (**(code **)(*plVar7 + 0x10))();
        }
        goto LAB_141048c75;
      }
    }
  }
  plVar5 = (longlong *)0x0;
LAB_141048c75:
  if ((local_90 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return plVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141048d22 FUN_141048d22 body=228 status=ok
// SIG undefined FUN_141048d22(void)

longlong FUN_141048d22(void)

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
  if (DAT_14cb6ed00 == 0) {
    local_30 = &local_10;
    local_10 = FUN_141030f22;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_142b4754c;
    local_38 = &LAB_1487a0084;
    local_40 = &LAB_141055d5b;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0xb88;
    FUN_14081cfa3(L"/Script/GbxGame",L"PuddleHazard",&DAT_14cb6ed00,FUN_14653e15a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb6ed00;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141048e08 FUN_141048e08 body=37 status=ok
// SIG undefined FUN_141048e08(void)

undefined4 FUN_141048e08(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0x728);
  FUN_141048e2e(param_1,uVar1,0,param_2,param_3);
  return uVar1;
}



// FUNCTION 141048e2e FUN_141048e2e body=641 status=ok
// SIG undefined FUN_141048e2e(void)

ulonglong FUN_141048e2e(longlong *param_1,ulonglong param_2,undefined8 *param_3,undefined8 *param_4,
                       char param_5)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined1 auStack_d8 [36];
  undefined1 local_b4 [4];
  undefined4 local_b0;
  undefined4 local_ac;
  undefined8 local_a8 [13];
  undefined1 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_1410492dc(param_1 + 0x118,param_2,param_3 != (undefined8 *)0x0);
  if (param_3 == (undefined8 *)0x0) {
    param_3 = (undefined8 *)FUN_1410490b0(param_1 + 0xe4);
  }
  if (param_5 == '\0') {
    puVar6 = local_a8;
    for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar6 = *param_4;
      param_4 = param_4 + 1;
      puVar6 = puVar6 + 1;
    }
  }
  else {
    FUN_1449437a2(param_4,local_a8,param_1 + 0x48);
  }
  FUN_1410495e2(param_1,param_3,param_2 & 0xffffffff,local_a8);
  uVar1 = *(uint *)(param_1 + 0xf4);
  iVar2 = (int)param_1[0xf6];
  *(uint *)(param_1 + 0xf6) = iVar2 + uVar1;
  if ((uint)(*(int *)((longlong)param_1 + 0x7b4) - iVar2) < uVar1) {
    FUN_14475e4ac(param_1 + 0xf5);
  }
  memset((void *)((longlong)iVar2 * 4 + param_1[0xf5]),0,(longlong)(int)uVar1 << 2);
  if ((*(byte *)((longlong)param_1 + 0x7d4) & 0x20) != 0) {
    iVar2 = (int)param_1[0xe7];
    *(uint *)(param_1 + 0xe7) = iVar2 + 1U;
    if (*(uint *)((longlong)param_1 + 0x73c) < iVar2 + 1U) {
      FUN_140518214(param_1 + 0xe6,iVar2);
    }
    puVar6 = (undefined8 *)((longlong)iVar2 * 0x80 + param_1[0xe6]);
    for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
      *puVar6 = *param_3;
      param_3 = param_3 + 1;
      puVar6 = puVar6 + 1;
    }
  }
  cVar3 = (**(code **)(*param_1 + 0x460))(param_1);
  *(byte *)((longlong)param_1 + 0x9e) = *(byte *)((longlong)param_1 + 0x9e) & 0xbf | cVar3 << 6;
  if ((cVar3 != '\0') && ((*(byte *)((longlong)param_1 + 0x9c) & 1) != 0)) {
    if ((int)param_1[0xe5] == 1) {
      plVar5 = DAT_14caca2a8;
      if (DAT_14caca2b0 == 0) {
        plVar5 = (longlong *)0x0;
      }
      (**(code **)(*plVar5 + 0x58))();
    }
    cVar3 = (**(code **)(*param_1 + 0xbd0))(param_1);
    if (cVar3 == '\0') {
      (**(code **)(*param_1 + 0xbc8))(param_1);
    }
    else {
      (**(code **)(*param_1 + 3000))();
    }
  }
  if ((longlong)DAT_14cae4f40 != 0) {
    lVar4 = 0;
    do {
      if ((*(int *)(DAT_14cae4f38 + 8 + lVar4) != 0) && (*(longlong *)(DAT_14cae4f38 + lVar4) != 0))
      {
        local_40 = local_b4;
        local_b4[0] = 0;
        local_ac = 0xffffffff;
        local_38 = 1;
        local_b0 = (int)param_2;
        FUN_147b4e6d4(param_1);
        break;
      }
      lVar4 = lVar4 + 0x10;
    } while ((longlong)DAT_14cae4f40 * 0x10 != lVar4);
  }
  *(undefined1 *)(param_1 + 0x14a) = 0;
  *(undefined1 *)(param_1 + 0x152) = 0;
  *(undefined1 *)(param_1 + 0x15a) = 0;
  if ((local_30 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2 & 0xffffffff;
}



// FUNCTION 1410490b0 FUN_1410490b0 body=59 status=ok
// SIG undefined FUN_1410490b0(void)

longlong FUN_1410490b0(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1410491dc(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x80 + *param_1;
  FUN_1410490eb(lVar2);
  return lVar2;
}



// FUNCTION 1410490eb FUN_1410490eb body=23 status=ok
// SIG undefined FUN_1410490eb(void)

void FUN_1410490eb(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = &DAT_14c846400;
  for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *param_1 = *puVar2;
    puVar2 = puVar2 + 1;
    param_1 = param_1 + 1;
  }
  return;
}



// FUNCTION 141049102 FUN_141049102 body=216 status=ok
// SIG undefined FUN_141049102(void)

void FUN_141049102(longlong *param_1,undefined4 param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_118 [32];
  undefined8 *local_f8;
  undefined4 local_f0;
  undefined8 local_e8 [2];
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88 [13];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_118;
  cVar1 = (**(code **)(*param_1 + 0x460))();
  if (cVar1 != '\0') {
    local_e8[0] = 0;
    local_e8[1] = 0;
    local_d8 = 0;
    uStack_d4 = 0;
    uStack_d0 = 0;
    uStack_cc = 0x3ff00000;
    local_c8 = 0;
    uStack_c0 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_a8 = 0;
    uStack_a4 = 0x3ff00000;
    uStack_a0 = 0;
    uStack_9c = 0x3ff00000;
    local_98 = 0x3ff0000000000000;
    uStack_90 = 0;
    cVar1 = FUN_1410499a6(param_1,param_2,local_e8,1);
    if (cVar1 != '\0') {
      local_f8 = local_88;
      puVar3 = local_e8;
      puVar4 = local_f8;
      for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      local_f0 = 1;
      (**(code **)(*param_1 + 0xbc0))(param_1);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410491dc FUN_1410491dc body=255 status=ok
// SIG undefined FUN_1410491dc(void)

void FUN_1410491dc(longlong param_1,int param_2)

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
    uVar4 = uVar3 * 0x80;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)[(uVar3 & 0x1ffffffffffffff) * 8]];
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
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,0x10);
      }
    }
    uVar3 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 >> 7)) {
      uVar3 = uVar4 >> 7 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar3;
    FUN_1446f8d3c(param_1,param_2,uVar3,0x80,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1410492dc FUN_1410492dc body=774 status=ok
// SIG undefined FUN_1410492dc(void)

void FUN_1410492dc(longlong *param_1,int param_2,char param_3)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  longlong *plVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  longlong *plVar10;
  longlong lVar11;
  
  if (*(char *)((longlong)param_1 + 0x9d) == '\x02') {
    return;
  }
  if (((param_3 != '\0') && ((int)param_1[1] == 0)) && ((int)param_1[4] != param_2)) {
    FUN_141064484(param_1);
  }
  FUN_1402d2c26(param_1);
  if ((int)param_1[1] == 0) {
    iVar2 = (int)param_1[4];
    *(int *)(param_1 + 4) = iVar2 + 1;
    if (*(char *)((longlong)param_1 + 0x9d) == '\x01') {
      iVar6 = iVar2 + 0xf;
      if (-1 < iVar2 + 8) {
        iVar6 = iVar2 + 8;
      }
      if ((int)param_1[6] < iVar6 >> 3) {
        FUN_1402d2c96(param_1 + 5,iVar6 >> 3,1);
      }
      *(int *)(param_1 + 0xb) = iVar2 + 1;
      iVar6 = (int)param_1[0xc];
      if (iVar2 <= (int)param_1[0xc]) {
        iVar6 = iVar2;
      }
      *(int *)(param_1 + 0xc) = iVar6;
      iVar6 = *(int *)((longlong)param_1 + 100);
      if (*(int *)((longlong)param_1 + 100) < iVar2) {
        iVar6 = iVar2;
      }
      *(int *)((longlong)param_1 + 100) = iVar6;
      iVar6 = iVar2 + 7;
      if (-1 < iVar2) {
        iVar6 = iVar2;
      }
      uVar9 = iVar2 % 8 << 2;
      uVar3 = *(uint *)(param_1[5] + (longlong)(iVar6 >> 3) * 4);
      if ((uVar3 >> (uVar9 & 0x1f) & 1) == 0) {
        *(int *)(param_1 + 0xd) = (int)param_1[0xd] + 1;
      }
      *(uint *)(param_1[5] + (longlong)(iVar6 >> 3) * 4) = uVar3 | 1 << ((byte)uVar9 & 0x1f);
    }
    else {
      if (*(char *)((longlong)param_1 + 0x9d) == '\x02') {
        return;
      }
      *(byte *)((longlong)param_1 + 0x9e) = *(byte *)((longlong)param_1 + 0x9e) | 0x10;
    }
    FUN_1402d2c26(param_1);
    return;
  }
  plVar10 = param_1 + 0xf;
  iVar2 = FUN_144a784a6(plVar10,0,(int)param_1[0x13]);
  if (iVar2 == -1) {
    iVar2 = FUN_144a54ea4(plVar10,1);
    plVar4 = (longlong *)param_1[0x11];
    if ((longlong *)param_1[0x11] == (longlong *)0x0) {
      plVar4 = plVar10;
    }
    iVar6 = iVar2 + 0x1f;
    if (-1 < iVar2) {
      iVar6 = iVar2;
    }
    puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar6 >> 5) * 4);
    *puVar1 = *puVar1 | 1 << ((byte)iVar2 & 0x1f);
  }
  else {
    if ((longlong *)param_1[0x11] != (longlong *)0x0) {
      plVar10 = (longlong *)param_1[0x11];
    }
    iVar6 = iVar2 + 0x1f;
    if (-1 < iVar2) {
      iVar6 = iVar2;
    }
    puVar1 = (uint *)((longlong)plVar10 + (longlong)(iVar6 >> 5) * 4);
    *puVar1 = *puVar1 | 1 << ((byte)iVar2 & 0x1f);
  }
  *(int *)(param_1 + 0x13) = iVar2;
  FUN_144a127d2(param_1 + 2,(int)param_1[0x12],1);
  lVar11 = param_1[1];
  *(int *)(param_1[2] + (longlong)iVar2 * 4) = param_2;
  iVar6 = (int)param_1[1];
  uVar3 = iVar6 + 1;
  *(uint *)(param_1 + 1) = uVar3;
  if ((int)lVar11 == param_2) {
    if (*(uint *)((longlong)param_1 + 0xc) < uVar3) {
      FUN_14067df04(param_1,iVar6);
    }
    *(int *)(*param_1 + (longlong)iVar6 * 4) = iVar2;
    iVar6 = (int)param_1[1];
  }
  else {
    if (*(uint *)((longlong)param_1 + 0xc) < uVar3) {
      FUN_14067df04(param_1,iVar6);
    }
    lVar11 = (longlong)param_2;
    memmove((void *)(*param_1 + lVar11 * 4 + 4),(void *)(*param_1 + lVar11 * 4),
            (ulonglong)(uint)(iVar6 - param_2) << 2);
    *(int *)(*param_1 + lVar11 * 4) = iVar2;
    iVar6 = (int)param_1[1];
    if (param_2 + 1 < iVar6) {
      lVar11 = (longlong)(param_2 + 1);
      do {
        iVar8 = (int)lVar11;
        *(int *)(param_1[2] + (longlong)*(int *)(*param_1 + lVar11 * 4) * 4) = iVar8;
        iVar6 = (int)param_1[1];
        if (iVar6 == 0) {
          iVar6 = (int)param_1[4];
        }
        if (iVar6 <= iVar8) {
          iVar6 = iVar8;
        }
        iVar7 = iVar6 + 0xe;
        if (-1 < iVar6 + 7) {
          iVar7 = iVar6 + 7;
        }
        if ((int)param_1[6] < iVar7 >> 3) {
          FUN_1402d2c96(param_1 + 5,iVar7 >> 3,1);
        }
        *(int *)(param_1 + 0xb) = iVar6;
        iVar6 = (int)param_1[0xc];
        if (iVar8 <= (int)param_1[0xc]) {
          iVar6 = iVar8;
        }
        *(int *)(param_1 + 0xc) = iVar6;
        iVar6 = *(int *)((longlong)param_1 + 100);
        if (*(int *)((longlong)param_1 + 100) < iVar8) {
          iVar6 = iVar8;
        }
        iVar7 = iVar8 + 7;
        if (-1 < iVar8) {
          iVar7 = iVar8;
        }
        *(int *)((longlong)param_1 + 100) = iVar6;
        bVar5 = ((char)lVar11 - ((byte)iVar7 & 0xf8)) * '\x04';
        uVar3 = *(uint *)(param_1[5] + (longlong)(iVar7 >> 3) * 4);
        if ((uVar3 >> (bVar5 & 0x1f) & 9) == 0) {
          *(int *)((longlong)param_1 + 0x74) = *(int *)((longlong)param_1 + 0x74) + 1;
        }
        *(uint *)(param_1[5] + (longlong)(iVar7 >> 3) * 4) = uVar3 | 8 << (bVar5 & 0x1f);
        lVar11 = lVar11 + 1;
        iVar6 = (int)param_1[1];
      } while (lVar11 < iVar6);
    }
  }
  *(int *)(param_1 + 4) = iVar6;
  FUN_1457e3e1c(param_1,iVar2);
  return;
}



// FUNCTION 1410495e2 FUN_1410495e2 body=964 status=ok
// SIG undefined FUN_1410495e2(void)

void FUN_1410495e2(longlong param_1,undefined1 (*param_2) [16],int param_3,double *param_4)

{
  longlong *plVar1;
  double dVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined8 uVar16;
  byte bVar17;
  int iVar18;
  int iVar19;
  longlong lVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  
  dVar7 = *param_4;
  dVar8 = param_4[1];
  dVar9 = param_4[2];
  dVar10 = param_4[4];
  dVar11 = param_4[5];
  dVar12 = param_4[6];
  dVar25 = dVar8 + dVar8;
  dVar21 = dVar9 + dVar9;
  dVar5 = dVar7 * (dVar7 + dVar7);
  dVar13 = param_4[8];
  dVar14 = param_4[9];
  dVar15 = param_4[10];
  dVar2 = *param_4;
  dVar24 = param_4[3];
  dVar22 = dVar21 * dVar24;
  dVar23 = (dVar7 + dVar7) * param_4[3];
  dVar24 = dVar25 * dVar24;
  dVar6 = (dVar25 * dVar7 + dVar22) * dVar13;
  auVar4._8_4_ = SUB84(dVar6,0);
  auVar4._0_8_ = (1.0 - (dVar9 * dVar21 + dVar8 * dVar25)) * dVar13;
  auVar4._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
  *param_2 = auVar4;
  *(double *)param_2[1] = (dVar2 * dVar21 - dVar24) * dVar13;
  *(undefined8 *)(param_2[1] + 8) = 0;
  *(double *)param_2[2] = (dVar25 * dVar7 - dVar22) * dVar14;
  *(double *)(param_2[2] + 8) = (1.0 - (dVar9 * dVar21 + dVar5)) * dVar14;
  *(double *)param_2[3] = (dVar21 * dVar8 + dVar23) * dVar14;
  *(undefined8 *)(param_2[3] + 8) = 0;
  *(double *)param_2[4] = (dVar24 + dVar2 * dVar21) * dVar15;
  *(double *)(param_2[4] + 8) = (dVar21 * dVar8 - dVar23) * dVar15;
  *(double *)param_2[5] = (1.0 - (dVar5 + dVar8 * dVar25)) * dVar15;
  *(undefined8 *)(param_2[5] + 8) = 0;
  *(double *)param_2[6] = dVar10;
  *(double *)(param_2[6] + 8) = dVar11;
  *(double *)param_2[7] = dVar12;
  *(undefined8 *)(param_2[7] + 8) = 0x3ff0000000000000;
  if (*(char *)(param_1 + 0x95d) == '\x01') {
    iVar19 = *(int *)(param_1 + 0x8c8);
    if (iVar19 == 0) {
      iVar19 = *(int *)(param_1 + 0x8e0);
    }
    if (iVar19 <= param_3) {
      iVar19 = param_3;
    }
    iVar18 = iVar19 + 0xe;
    if (-1 < iVar19 + 7) {
      iVar18 = iVar19 + 7;
    }
    if (*(int *)(param_1 + 0x8f0) < iVar18 >> 3) {
      FUN_1402d2c96(param_1 + 0x8e8,iVar18 >> 3,1);
    }
    *(int *)(param_1 + 0x918) = iVar19;
    iVar19 = *(int *)(param_1 + 0x920);
    if (param_3 <= *(int *)(param_1 + 0x920)) {
      iVar19 = param_3;
    }
    *(int *)(param_1 + 0x920) = iVar19;
    iVar19 = *(int *)(param_1 + 0x924);
    if (*(int *)(param_1 + 0x924) < param_3) {
      iVar19 = param_3;
    }
    iVar18 = param_3 + 7;
    if (-1 < param_3) {
      iVar18 = param_3;
    }
    *(int *)(param_1 + 0x924) = iVar19;
    bVar17 = ((char)param_3 - ((byte)iVar18 & 0xf8)) * '\x04';
    uVar3 = *(uint *)(*(longlong *)(param_1 + 0x8e8) + (longlong)(iVar18 >> 3) * 4);
    if ((uVar3 >> (bVar17 & 0x1f) & 3) == 0) {
      *(int *)(param_1 + 0x92c) = *(int *)(param_1 + 0x92c) + 1;
    }
    *(uint *)(*(longlong *)(param_1 + 0x8e8) + (longlong)(iVar18 >> 3) * 4) =
         uVar3 | 2 << (bVar17 & 0x1f);
  }
  else {
    if (*(char *)(param_1 + 0x95d) == '\x02') goto LAB_14104980f;
    *(byte *)(param_1 + 0x95e) = *(byte *)(param_1 + 0x95e) | 0x10;
  }
  FUN_1402d2c26(param_1 + 0x8c0);
LAB_14104980f:
  if ((*(byte *)(param_1 + 0x9c) & 8) != 0) {
    if (((9.999999747378752e-05 < ABS(param_4[8])) || (9.999999747378752e-05 < ABS(param_4[9]))) ||
       (9.999999747378752e-05 < ABS(param_4[10]))) {
      uVar16 = FUN_14001cc68(0x188,0x10);
      FUN_144805afa(uVar16);
      iVar19 = *(int *)(param_1 + 0x840);
      *(uint *)(param_1 + 0x840) = iVar19 + 1U;
      if (*(uint *)(param_1 + 0x844) < iVar19 + 1U) {
        FUN_1405a36b0(param_1 + 0x838,iVar19);
      }
      lVar20 = (longlong)param_3;
      memmove((void *)(*(longlong *)(param_1 + 0x838) + lVar20 * 8 + 8),
              (void *)(*(longlong *)(param_1 + 0x838) + lVar20 * 8),
              (ulonglong)(uint)(iVar19 - param_3) << 3);
      *(undefined8 *)(*(longlong *)(param_1 + 0x838) + lVar20 * 8) = uVar16;
      FUN_14104a280(param_1,param_3,uVar16);
      return;
    }
    plVar1 = (longlong *)(param_1 + 0x838);
    iVar19 = *(int *)(param_1 + 0x840);
    *(uint *)(param_1 + 0x840) = iVar19 + 1U;
    if (*(uint *)(param_1 + 0x844) < iVar19 + 1U) {
      FUN_1405a36b0(plVar1,iVar19);
    }
    lVar20 = (longlong)param_3;
    memmove((void *)(*plVar1 + lVar20 * 8 + 8),(void *)(*plVar1 + lVar20 * 8),
            (ulonglong)(uint)(iVar19 - param_3) << 3);
    *(undefined8 *)(*plVar1 + lVar20 * 8) = 0;
  }
  return;
}



// FUNCTION 1410499a6 FUN_1410499a6 body=2265 status=ok
// SIG undefined FUN_1410499a6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1410499a6(longlong param_1,uint param_2,double *param_3,char param_4)

{
  double dVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined4 uVar16;
  int iVar17;
  uint uVar18;
  longlong lVar19;
  double *pdVar20;
  ulonglong uVar21;
  double *pdVar22;
  ulonglong uVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  double dVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  double dVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  double dVar32;
  undefined1 auVar33 [16];
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  undefined1 auStack_2b8 [40];
  double local_290;
  double local_288;
  double local_280;
  double local_278;
  double dStack_270;
  double local_268;
  double dStack_260;
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
  undefined1 local_1b8 [16];
  double local_1a8;
  undefined8 uStack_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  double local_158 [4];
  double local_138;
  double local_130;
  double local_128;
  double local_118;
  double local_110;
  double local_108;
  double local_f8;
  double dStack_f0;
  double local_e8;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_2b8;
  if (((int)param_2 < 0) || (*(int *)(param_1 + 0x728) <= (int)param_2)) {
    uVar21 = 0;
  }
  else {
    uVar16 = FUN_1448ac920(local_158,(ulonglong)param_2 * 0x80 + *(longlong *)(param_1 + 0x720));
    pdVar20 = local_158;
    pdVar22 = param_3;
    for (lVar19 = 0xc; lVar19 != 0; lVar19 = lVar19 + -1) {
      *pdVar22 = *pdVar20;
      pdVar20 = pdVar20 + 1;
      pdVar22 = pdVar22 + 1;
    }
    uVar21 = CONCAT71((int7)((ulonglong)pdVar20 >> 8),1);
    if (param_4 != '\0') {
      auVar27 = *(undefined1 (*) [16])(param_1 + 0x280);
      dVar4 = auVar27._0_8_;
      dVar8 = auVar27._8_8_;
      auVar2 = *(undefined1 (*) [16])(param_1 + 0x290);
      dVar5 = auVar2._0_8_;
      auVar28 = *(undefined1 (*) [16])(param_3 + 8);
      dVar6 = auVar28._0_8_;
      dVar9 = auVar28._8_8_;
      auVar3 = *(undefined1 (*) [16])(param_3 + 10);
      dVar7 = auVar3._0_8_;
      auVar27 = minpd(auVar28,auVar27);
      auVar30 = minpd(auVar3,auVar2);
      auVar28._8_8_ = -(ulonglong)(auVar27._8_8_ < 0.0);
      auVar28._0_8_ = -(ulonglong)(auVar27._0_8_ < 0.0);
      iVar17 = movmskpd(uVar16,auVar28);
      auVar27._8_8_ = -(ulonglong)(auVar30._8_8_ < 0.0);
      auVar27._0_8_ = -(ulonglong)(auVar30._0_8_ < 0.0);
      uVar18 = movmskpd(0,auVar27);
      if ((uVar18 & 0x3fffffff) == 0 && iVar17 == 0) {
        dVar38 = *param_3;
        dVar39 = param_3[1];
        dVar10 = param_3[2];
        dVar11 = param_3[3];
        dVar12 = *(double *)(param_1 + 0x240);
        dVar13 = *(double *)(param_1 + 0x248);
        dVar14 = *(double *)(param_1 + 0x250);
        dVar15 = *(double *)(param_1 + 600);
        dVar1 = *(double *)(param_1 + 600);
        dVar32 = *(double *)(param_1 + 600);
        dVar34 = *(double *)(param_1 + 0x240);
        dVar41 = *(double *)(param_1 + 0x240);
        dVar35 = *(double *)(param_1 + 0x248);
        dVar40 = *(double *)(param_1 + 0x248);
        dVar36 = *(double *)(param_1 + 0x250);
        dVar37 = *(double *)(param_1 + 0x250);
        dVar26 = dVar39 * dVar36 * -1.0 + dVar10 * dVar35 + dVar11 * dVar34 * 1.0 + dVar38 * dVar1;
        dVar29 = dVar38 * dVar37 * 1.0 + dVar11 * dVar40 + dVar10 * dVar41 * -1.0 + dVar39 * dVar32;
        auVar33._0_8_ =
             dVar11 * dVar36 * 1.0 + ((dVar34 * dVar39 * 1.0 + dVar10 * dVar1) - dVar38 * dVar35);
        auVar33._8_8_ =
             dVar10 * dVar37 * -1.0 + ((dVar41 * dVar38 * -1.0 + dVar11 * dVar32) - dVar39 * dVar40)
        ;
        dVar36 = param_3[4] * dVar4;
        dVar37 = param_3[5] * dVar8;
        dVar38 = param_3[6] * dVar5;
        dVar39 = param_3[7] * auVar2._8_8_;
        dVar34 = dVar37 * dVar12 - dVar13 * dVar36;
        dVar35 = dVar38 * dVar13 - dVar14 * dVar37;
        dVar40 = dVar36 * dVar14 - dVar12 * dVar38;
        dVar41 = dVar39 * dVar15 - dVar15 * dVar39;
        dVar35 = dVar35 + dVar35;
        dVar40 = dVar40 + dVar40;
        dVar34 = dVar34 + dVar34;
        dVar41 = dVar41 + dVar41;
        local_f8 = (dVar34 * dVar13 - dVar14 * dVar40) + dVar1 * dVar35 + dVar36 +
                   *(double *)(param_1 + 0x260);
        dStack_f0 = (dVar35 * dVar14 - dVar34 * dVar12) + dVar32 * dVar40 + dVar37 +
                    *(double *)(param_1 + 0x268);
        local_e8 = (dVar40 * dVar12 - dVar13 * dVar35) + dVar1 * dVar34 + dVar38 +
                   *(double *)(param_1 + 0x270);
        dVar32 = (dVar41 * dVar15 - dVar41 * dVar15) + dVar32 * dVar41 + dVar39 +
                 *(double *)(param_1 + 0x278);
      }
      else {
        dVar1 = *(double *)(param_1 + 0x240);
        dVar34 = *(double *)(param_1 + 0x248);
        dVar41 = *(double *)(param_1 + 0x250);
        dVar35 = dVar34 + dVar34;
        dVar40 = dVar41 + dVar41;
        dVar29 = dVar1 * (dVar1 + dVar1);
        local_188 = (1.0 - (dVar29 + dVar34 * dVar35)) * dVar5;
        dVar32 = *(double *)(param_1 + 0x240) * dVar40;
        dVar26 = *(double *)(param_1 + 600);
        dVar36 = dVar40 * dVar26;
        dVar37 = (dVar1 + dVar1) * *(double *)(param_1 + 600);
        dVar26 = dVar35 * dVar26;
        local_198 = (dVar26 + dVar32) * dVar5;
        local_1d8 = (1.0 - (dVar41 * dVar40 + dVar34 * dVar35)) * dVar4;
        dVar29 = (1.0 - (dVar41 * dVar40 + dVar29)) * dVar8;
        dStack_1d0 = (dVar35 * dVar1 + dVar36) * dVar4;
        local_1a8 = (dVar40 * dVar34 + dVar37) * dVar8;
        dStack_190 = (dVar40 * dVar34 - dVar37) * dVar5;
        local_1c8 = (dVar32 - dVar26) * dVar4;
        uStack_1c0 = 0;
        local_1b8._8_4_ = SUB84(dVar29,0);
        local_1b8._0_8_ = (dVar35 * dVar1 - dVar36) * dVar8;
        local_1b8._12_4_ = (int)((ulonglong)dVar29 >> 0x20);
        uStack_1a0 = 0;
        uStack_180 = 0;
        local_178 = *(undefined8 *)(param_1 + 0x260);
        uStack_170 = *(undefined8 *)(param_1 + 0x268);
        local_168 = *(undefined8 *)(param_1 + 0x270);
        uStack_160 = 0x3ff0000000000000;
        dVar32 = *param_3;
        dVar1 = param_3[1];
        dVar34 = param_3[2];
        dVar41 = dVar1 + dVar1;
        dVar35 = dVar34 + dVar34;
        dVar29 = dVar32 * (dVar32 + dVar32);
        local_208 = (1.0 - (dVar29 + dVar1 * dVar41)) * dVar7;
        dVar26 = param_3[3];
        dVar40 = dVar35 * dVar26;
        dVar36 = (dVar32 + dVar32) * param_3[3];
        dVar26 = dVar41 * dVar26;
        local_218 = (dVar26 + *param_3 * dVar35) * dVar7;
        local_238 = (dVar41 * dVar32 - dVar40) * dVar9;
        dStack_210 = (dVar35 * dVar1 - dVar36) * dVar7;
        local_258 = (1.0 - (dVar34 * dVar35 + dVar1 * dVar41)) * dVar6;
        dStack_230 = (1.0 - (dVar34 * dVar35 + dVar29)) * dVar9;
        dStack_250 = (dVar41 * dVar32 + dVar40) * dVar6;
        local_228 = (dVar35 * dVar1 + dVar36) * dVar9;
        local_248 = (*param_3 * dVar35 - dVar26) * dVar6;
        uStack_240 = 0;
        uStack_220 = 0;
        uStack_200 = 0;
        local_1f8 = param_3[4];
        dStack_1f0 = param_3[5];
        local_1e8 = param_3[6];
        uStack_1e0 = 0x3ff0000000000000;
        FUN_1447fea8d(local_158);
        local_280 = local_158[2];
        dVar29 = local_158[2] * local_158[2] +
                 local_158[0] * local_158[0] + local_158[1] * local_158[1];
        local_288 = local_138;
        local_290 = local_128;
        dVar32 = local_128 * local_128 + local_138 * local_138 + local_130 * local_130;
        dVar26 = local_108 * local_108 + local_118 * local_118 + local_110 * local_110;
        uVar23 = -(ulonglong)(0.0 <= dVar29 + -9.99999993922529e-09);
        dVar29 = (double)(~uVar23 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar29)) & uVar23);
        uVar23 = -(ulonglong)(0.0 <= dVar32 + -9.99999993922529e-09);
        dVar32 = (double)(~uVar23 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar32)) & uVar23);
        uVar23 = -(ulonglong)(0.0 <= dVar26 + -9.99999993922529e-09);
        dVar1 = (double)(~uVar23 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar26)) & uVar23);
        auVar30._8_8_ = -(ulonglong)(0.0 <= dVar8 * dVar9);
        auVar30._0_8_ = -(ulonglong)(0.0 <= dVar4 * dVar6);
        auVar27 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar30);
        uVar23 = -(ulonglong)(0.0 <= dVar5 * dVar7);
        dVar26 = (double)(~uVar23 & 0xbff0000000000000 | uVar23 & 0x3ff0000000000000);
        dVar34 = auVar27._0_8_;
        local_158[0] = local_158[0] * dVar29 * dVar34;
        local_158[1] = local_158[1] * dVar29 * dVar34;
        local_158[2] = dVar29 * local_158[2] * dVar34;
        dVar29 = auVar27._8_8_;
        local_128 = dVar32 * local_128 * dVar29;
        local_130 = local_130 * dVar32 * dVar29;
        local_138 = dVar29 * local_138 * dVar32;
        local_108 = dVar1 * local_108 * dVar26;
        local_110 = local_110 * dVar1 * dVar26;
        local_118 = dVar26 * local_118 * dVar1;
        FUN_14481fd10(&local_278,local_158);
        dVar26 = local_268 * local_268 + local_278 * local_278;
        dVar29 = dStack_260 * dStack_260 + dStack_270 * dStack_270;
        auVar25._0_8_ = dVar26 + dVar29;
        auVar25._8_8_ = dVar26 + dVar29;
        auVar24._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar25._8_8_);
        auVar24._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar25._0_8_);
        auVar27 = sqrtpd(auVar25,auVar25);
        auVar27 = divpd(_DAT_149934d80,auVar27);
        auVar31._0_8_ = auVar27._0_8_ * local_268;
        auVar31._8_8_ = auVar27._8_8_ * dStack_260;
        dVar26 = (double)((ulonglong)(local_278 * auVar27._0_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar25._0_8_));
        dVar29 = (double)((ulonglong)(dStack_270 * auVar27._8_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar25._8_8_));
        auVar33 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar31,auVar24);
        dVar32 = 0.0;
      }
      dVar1 = auVar3._8_8_ * auVar2._8_8_;
      *param_3 = dVar26;
      param_3[1] = dVar29;
      *(undefined1 (*) [16])(param_3 + 2) = auVar33;
      param_3[4] = local_f8;
      param_3[5] = dStack_f0;
      param_3[6] = local_e8;
      param_3[7] = dVar32;
      auVar3._8_4_ = SUB84(dVar9 * dVar8,0);
      auVar3._0_8_ = dVar6 * dVar4;
      auVar3._12_4_ = (int)((ulonglong)(dVar9 * dVar8) >> 0x20);
      *(undefined1 (*) [16])(param_3 + 8) = auVar3;
      auVar2._8_4_ = SUB84(dVar1,0);
      auVar2._0_8_ = dVar7 * dVar5;
      auVar2._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
      *(undefined1 (*) [16])(param_3 + 10) = auVar2;
    }
  }
  if ((local_d0 ^ (ulonglong)auStack_2b8) == DAT_14c707940) {
    return uVar21 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14104a280 FUN_14104a280 body=2528 status=ok
// SIG undefined FUN_14104a280(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14104a280(longlong *param_1,int param_2,longlong param_3)

{
  double dVar1;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined4 uVar10;
  int iVar11;
  undefined8 uVar12;
  longlong lVar13;
  uint uVar14;
  double *pdVar15;
  ulonglong uVar16;
  double dVar17;
  undefined1 auVar18 [16];
  double dVar19;
  double dVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  double dVar24;
  undefined1 auVar23 [16];
  undefined1 auVar25 [16];
  double dVar27;
  undefined1 auVar26 [16];
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  undefined1 auStack_3b8 [32];
  undefined8 local_398;
  undefined8 local_390;
  double *local_388;
  undefined8 local_380;
  double local_378;
  double local_370;
  double local_368;
  double dStack_360;
  double local_358;
  double dStack_350;
  double local_348;
  double dStack_340;
  double local_338;
  double dStack_330;
  double local_328;
  double dStack_320;
  double local_318;
  double dStack_310;
  undefined1 local_308 [16];
  undefined1 local_2f8 [16];
  double local_2e8;
  double dStack_2e0;
  undefined1 local_2d8 [16];
  undefined1 local_2c8 [16];
  double local_2b8;
  double dStack_2b0;
  double local_2a8;
  double dStack_2a0;
  undefined1 local_298 [16];
  double local_288;
  double dStack_280;
  double local_278;
  double dStack_270;
  double local_268;
  double dStack_260;
  double local_258;
  undefined8 uStack_250;
  double local_248;
  double dStack_240;
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
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  undefined8 uStack_1d0;
  double local_1c8;
  double dStack_1c0;
  double local_1b8;
  undefined8 uStack_1b0;
  double local_1a8;
  double dStack_1a0;
  double local_198;
  undefined8 uStack_190;
  longlong local_188;
  longlong lStack_180;
  longlong local_178;
  undefined8 uStack_170;
  double local_168;
  double local_160;
  double local_158;
  double local_148;
  double local_140;
  double local_138;
  double local_128;
  double local_120;
  double local_118;
  undefined8 local_108;
  undefined8 uStack_100;
  double local_f8;
  ulonglong local_e0;
  double dVar2;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_3b8;
  if ((param_1[0xcc] != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  else if (param_1[0xcc] == 0) goto LAB_14104abd4;
  uVar12 = (**(code **)(*param_1 + 0x7a0))(param_1);
  pdVar15 = &local_348;
  uVar10 = FUN_1448ac920(pdVar15,(longlong)param_2 * 0x80 + param_1[0xe4]);
  local_2b8 = 0.0;
  dStack_2b0 = 0.0;
  local_2c8 = ZEXT816(0);
  auVar21 = *(undefined1 (*) [16])(param_1 + 0x50);
  dVar17 = auVar21._0_8_;
  dVar33 = auVar21._8_8_;
  auVar22 = *(undefined1 (*) [16])(param_1 + 0x52);
  dVar32 = auVar22._0_8_;
  dVar27 = auVar22._8_8_;
  local_2a8 = local_308._0_8_;
  dStack_2a0 = local_308._8_8_;
  dVar19 = local_2f8._0_8_;
  auVar21 = minpd(local_308,auVar21);
  auVar25 = minpd(local_2f8,auVar22);
  auVar22._8_8_ = -(ulonglong)(auVar21._8_8_ < 0.0);
  auVar22._0_8_ = -(ulonglong)(auVar21._0_8_ < 0.0);
  iVar11 = movmskpd(uVar10,auVar22);
  auVar21._8_8_ = -(ulonglong)(auVar25._8_8_ < 0.0);
  auVar21._0_8_ = -(ulonglong)(auVar25._0_8_ < 0.0);
  uVar14 = movmskpd((int)pdVar15,auVar21);
  if ((uVar14 & 0x3fffffff) == 0 && iVar11 == 0) {
    dVar6 = (double)param_1[0x48];
    dVar7 = (double)param_1[0x49];
    dVar8 = (double)param_1[0x4a];
    dVar9 = (double)param_1[0x4b];
    dVar20 = (double)param_1[0x4b];
    dVar31 = (double)param_1[0x4b];
    dVar1 = (double)param_1[0x48];
    dVar2 = (double)param_1[0x48];
    dVar3 = (double)param_1[0x49];
    dVar24 = (double)param_1[0x49];
    dVar28 = (double)param_1[0x4a];
    dVar29 = (double)param_1[0x4a];
    local_2e8 = dStack_340 * dVar28 * -1.0 +
                local_338 * dVar3 + dStack_330 * dVar1 * 1.0 + local_348 * dVar20;
    dStack_2e0 = local_348 * dVar29 * 1.0 +
                 dStack_330 * dVar24 + local_338 * dVar2 * -1.0 + dStack_340 * dVar31;
    local_328 = local_328 * dVar17;
    dStack_320 = dStack_320 * dVar33;
    local_318 = local_318 * dVar32;
    dStack_310 = dStack_310 * dVar27;
    dVar30 = dStack_320 * dVar6 - dVar7 * local_328;
    dVar4 = local_318 * dVar7 - dVar8 * dStack_320;
    dVar34 = local_328 * dVar8 - dVar6 * local_318;
    dVar35 = dStack_310 * dVar9 - dVar9 * dStack_310;
    dVar4 = dVar4 + dVar4;
    dVar34 = dVar34 + dVar34;
    dVar30 = dVar30 + dVar30;
    dVar35 = dVar35 + dVar35;
    dVar5 = (dVar4 * dVar8 - dVar30 * dVar6) + dVar31 * dVar34 + dStack_320 + (double)param_1[0x4d];
    local_2b8 = (dVar34 * dVar6 - dVar7 * dVar4) + dVar20 * dVar30 + local_318 +
                (double)param_1[0x4e];
    dStack_2b0 = (dVar35 * dVar9 - dVar35 * dVar9) + dVar31 * dVar35 + dStack_310 +
                 (double)param_1[0x4f];
    local_2d8._8_8_ =
         local_338 * dVar29 * -1.0 +
         ((dVar2 * local_348 * -1.0 + dStack_330 * dVar31) - dStack_340 * dVar24);
    local_2d8._0_8_ =
         dStack_330 * dVar28 * 1.0 +
         ((dVar1 * dStack_340 * 1.0 + local_338 * dVar20) - local_348 * dVar3);
    local_2c8._8_4_ = SUB84(dVar5,0);
    local_2c8._0_8_ =
         (dVar30 * dVar7 - dVar8 * dVar34) + dVar20 * dVar4 + local_328 + (double)param_1[0x4c];
    local_2c8._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
    local_2a8 = local_2a8 * dVar17;
    dStack_2a0 = dStack_2a0 * dVar33;
    dVar19 = dVar19 * dVar32;
    dVar27 = local_2f8._8_8_ * dVar27;
  }
  else {
    dVar1 = (double)param_1[0x48];
    dVar2 = (double)param_1[0x49];
    dVar3 = (double)param_1[0x4a];
    dVar24 = dVar2 + dVar2;
    dVar28 = dVar3 + dVar3;
    dVar31 = dVar1 * (dVar1 + dVar1);
    local_198 = (1.0 - (dVar31 + dVar2 * dVar24)) * dVar32;
    dVar20 = (double)param_1[0x4b];
    dVar29 = dVar28 * dVar20;
    dVar30 = (dVar1 + dVar1) * (double)param_1[0x4b];
    dVar20 = dVar24 * dVar20;
    local_1a8 = (dVar20 + (double)param_1[0x48] * dVar28) * dVar32;
    local_358 = dVar32 * dVar19;
    dStack_350 = dVar27 * local_2f8._8_8_;
    local_1e8 = (1.0 - (dVar3 * dVar28 + dVar2 * dVar24)) * dVar17;
    dStack_1c0 = (1.0 - (dVar3 * dVar28 + dVar31)) * dVar33;
    dStack_1e0 = (dVar24 * dVar1 + dVar29) * dVar17;
    local_1b8 = (dVar28 * dVar2 + dVar30) * dVar33;
    local_1c8 = (dVar24 * dVar1 - dVar29) * dVar33;
    dStack_1a0 = (dVar28 * dVar2 - dVar30) * dVar32;
    local_1d8 = ((double)param_1[0x48] * dVar28 - dVar20) * dVar17;
    uStack_1d0 = 0;
    uStack_1b0 = 0;
    uStack_190 = 0;
    local_188 = param_1[0x4c];
    lStack_180 = param_1[0x4d];
    local_178 = param_1[0x4e];
    uStack_170 = 0x3ff0000000000000;
    dVar27 = dStack_340 + dStack_340;
    dVar20 = local_338 + local_338;
    dVar32 = local_348 * (local_348 + local_348);
    local_218 = (1.0 - (dVar32 + dStack_340 * dVar27)) * dVar19;
    dVar31 = (local_348 + local_348) * dStack_330;
    local_228 = (dVar27 * dStack_330 + local_348 * dVar20) * dVar19;
    local_248 = (dVar27 * local_348 - dVar20 * dStack_330) * dStack_2a0;
    dStack_220 = (dVar20 * dStack_340 - dVar31) * dVar19;
    local_368 = dVar17 * local_2a8;
    dStack_360 = dVar33 * dStack_2a0;
    local_268 = (1.0 - (local_338 * dVar20 + dStack_340 * dVar27)) * local_2a8;
    dStack_240 = (1.0 - (local_338 * dVar20 + dVar32)) * dStack_2a0;
    dStack_260 = (dVar27 * local_348 + dVar20 * dStack_330) * local_2a8;
    local_238 = (dVar20 * dStack_340 + dVar31) * dStack_2a0;
    local_258 = (local_348 * dVar20 - dVar27 * dStack_330) * local_2a8;
    uStack_250 = 0;
    uStack_230 = 0;
    uStack_210 = 0;
    local_208 = local_328;
    dStack_200 = dStack_320;
    local_1f8 = local_318;
    uStack_1f0 = 0x3ff0000000000000;
    FUN_1447fea8d(&local_168);
    dVar27 = dStack_350;
    dVar19 = local_358;
    local_370 = local_158;
    dVar32 = local_158 * local_158 + local_168 * local_168 + local_160 * local_160;
    local_378 = local_148;
    dVar33 = local_138 * local_138 + local_148 * local_148 + local_140 * local_140;
    dVar17 = local_118 * local_118 + local_128 * local_128 + local_120 * local_120;
    uVar16 = -(ulonglong)(0.0 <= dVar32 + -9.99999993922529e-09);
    dVar20 = (double)(~uVar16 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar32)) & uVar16);
    uVar16 = -(ulonglong)(0.0 <= dVar33 + -9.99999993922529e-09);
    dVar32 = (double)(~uVar16 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar33)) & uVar16);
    uVar16 = -(ulonglong)(0.0 <= dVar17 + -9.99999993922529e-09);
    dVar33 = (double)(~uVar16 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar17)) & uVar16);
    auVar25._8_8_ = -(ulonglong)(0.0 <= dStack_360);
    auVar25._0_8_ = -(ulonglong)(0.0 <= local_368);
    auVar21 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar25);
    dVar17 = (double)(~-(ulonglong)(0.0 <= local_358) & 0xbff0000000000000 |
                     -(ulonglong)(0.0 <= local_358) & 0x3ff0000000000000);
    dVar31 = auVar21._0_8_;
    local_168 = local_168 * dVar20 * dVar31;
    local_160 = local_160 * dVar20 * dVar31;
    local_158 = dVar20 * local_158 * dVar31;
    dVar20 = auVar21._8_8_;
    local_138 = dVar32 * local_138 * dVar20;
    local_140 = local_140 * dVar32 * dVar20;
    local_148 = dVar20 * local_148 * dVar32;
    local_118 = dVar33 * local_118 * dVar17;
    local_120 = local_120 * dVar33 * dVar17;
    local_128 = dVar17 * local_128 * dVar33;
    FUN_14481fd10(&local_288,&local_168);
    dVar17 = local_278 * local_278 + local_288 * local_288;
    dVar32 = dStack_270 * dStack_270 + dStack_280 * dStack_280;
    auVar23._0_8_ = dVar17 + dVar32;
    auVar23._8_8_ = dVar17 + dVar32;
    auVar18._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar23._8_8_);
    auVar18._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar23._0_8_);
    auVar21 = sqrtpd(auVar23,auVar23);
    auVar21 = divpd(_DAT_149934d80,auVar21);
    auVar26._0_8_ = auVar21._0_8_ * local_278;
    auVar26._8_8_ = auVar21._8_8_ * dStack_270;
    local_2e8 = (double)((ulonglong)(local_288 * auVar21._0_8_) &
                        -(ulonglong)(9.99999993922529e-09 <= auVar23._0_8_));
    dStack_2e0 = (double)((ulonglong)(dStack_280 * auVar21._8_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar23._8_8_));
    local_2d8 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar26,auVar18);
    local_2a8 = local_368;
    dStack_2a0 = dStack_360;
    local_2c8._8_8_ = uStack_100;
    local_2c8._0_8_ = local_108;
    local_2b8 = local_f8;
    dStack_2b0 = 0.0;
  }
  local_298._8_4_ = SUB84(dVar27,0);
  local_298._0_8_ = dVar19;
  local_298._12_4_ = (int)((ulonglong)dVar27 >> 0x20);
  FUN_1400f437c(param_3,param_1 + 0x82);
  *(int *)(param_3 + 0xc) = param_2;
  *(byte *)(param_3 + 8) = *(byte *)(param_3 + 8) & 0xee;
  local_168 = (double)CONCAT62(local_168._2_6_,1);
  lVar13 = param_1[0x16];
  if (lVar13 == 0) {
    lVar13 = FUN_1448abda6();
  }
  local_390 = *(undefined8 *)(lVar13 + 0x260);
  local_380 = 0;
  local_388 = &local_168;
  local_398 = 0;
  FUN_140311a3a(param_3,uVar12,&local_2e8,param_1);
LAB_14104abd4:
  if ((local_e0 ^ (ulonglong)auStack_3b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14104ac62 FUN_14104ac62 body=157 status=ok
// SIG undefined FUN_14104ac62(void)

void FUN_14104ac62(longlong *param_1)

{
  undefined1 auStack_48 [32];
  longlong *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = (undefined4)param_1[0x13];
  local_28 = param_1;
  (**(code **)(*param_1 + 0xb0))();
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  FUN_14104ad00(param_1[0x12],(int)param_1[0x13]);
  *(undefined4 *)(param_1 + 0x13) = 0;
  if (*(int *)((longlong)param_1 + 0x9c) != 0) {
    FUN_148e0e61e(param_1 + 0x12,0);
  }
  FUN_14104ad2a(&local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14104ad00 FUN_14104ad00 body=42 status=ok
// SIG undefined FUN_14104ad00(void)

void FUN_14104ad00(longlong param_1,int param_2)

{
  char *pcVar1;
  
  if (param_2 != 0) {
    pcVar1 = (char *)(param_1 + 0x14);
    do {
      if (*pcVar1 == '\x01') {
        *pcVar1 = '\0';
      }
      if (*(int *)(pcVar1 + -0x10) != -1) {
        pcVar1[-0x10] = -1;
        pcVar1[-0xf] = -1;
        pcVar1[-0xe] = -1;
        pcVar1[-0xd] = -1;
        pcVar1[-0xc] = '\0';
        pcVar1[-0xb] = '\0';
        pcVar1[-10] = '\0';
        pcVar1[-9] = '\0';
      }
      pcVar1 = pcVar1 + 0x20;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14104ad2a FUN_14104ad2a body=68 status=ok
// SIG undefined FUN_14104ad2a(void)

void FUN_14104ad2a(longlong *param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)*param_1;
  if ((int)plVar1[0x13] == (int)param_1[1]) {
    return;
  }
  (**(code **)(*plVar1 + 200))(plVar1);
  FUN_140c5f00a(plVar1);
  thunk_FUN_140ce80dc(*(undefined8 *)(*param_1 + 0x38));
  return;
}



// FUNCTION 14104ad6e FUN_14104ad6e body=50 status=ok
// SIG undefined FUN_14104ad6e(void)

void FUN_14104ad6e(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14104ae62();
  if (lVar1 != 0) {
    FUN_14104ada0(param_1,lVar1 + 0x6890,0);
    return;
  }
  return;
}



// FUNCTION 14104ada0 FUN_14104ada0 body=192 status=ok
// SIG undefined FUN_14104ada0(void)

void FUN_14104ada0(longlong param_1,longlong param_2,undefined1 param_3)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  undefined1 *local_28;
  longlong *local_20;
  undefined1 local_11;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar4 = *(longlong *)(param_1 + 0xa0);
  if (lVar4 == 0) goto LAB_14104ae20;
  local_30 = *(longlong **)(param_1 + 0xa8);
  if (local_30 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_30 + 1) = (int)local_30[1] + 1;
    UNLOCK();
  }
  cVar3 = *(char *)(*(longlong *)(param_1 + 0x70) + 0x50);
  local_28 = &local_11;
  local_20 = &local_38;
  lVar6 = 0xf8;
  local_38 = lVar4;
  local_11 = param_3;
  if (cVar3 == '\x01') {
LAB_14104ae03:
    FUN_14104af82(&local_28,param_2 + lVar6);
  }
  else if (cVar3 == '\0') {
    lVar6 = 0x108;
    goto LAB_14104ae03;
  }
  plVar5 = local_30;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
LAB_14104ae20:
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14104ae62 FUN_14104ae62 body=286 status=ok
// SIG undefined FUN_14104ae62(void)

longlong FUN_14104ae62(void)

{
  longlong lVar1;
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
  lVar1 = FUN_1409258e6();
  if (lVar1 != 0) {
    if (DAT_14cba8288 == 0) {
      local_30 = &local_18;
      local_18 = FUN_141864c34;
      local_20 = FUN_14081d0ea;
      local_28 = &LAB_1464cee30;
      local_38 = &LAB_148bfac22;
      local_40 = &LAB_140f21842;
      local_48 = &DAT_149e063b2;
      local_50 = 0;
      local_58 = 0x10000004;
      local_60 = 0x10;
      local_68 = 0x9cd0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
    }
    if ((*(int *)(DAT_14cba8288 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) == DAT_14cba8288 + 0x30)) goto LAB_14104aeb9;
  }
  lVar1 = 0;
LAB_14104aeb9:
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14104af82 FUN_14104af82 body=3674 status=ok
// SIG undefined FUN_14104af82(void)

void FUN_14104af82(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  bool bVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong *plVar14;
  int iVar15;
  longlong lVar16;
  longlong lVar17;
  longlong *plVar18;
  int iVar19;
  longlong *plVar20;
  uint uVar21;
  int iVar22;
  uint uVar23;
  longlong lVar24;
  longlong *plVar25;
  bool bVar26;
  float fVar27;
  undefined1 auStack_3a8 [32];
  longlong *local_388;
  longlong *local_380;
  longlong *local_378;
  ulonglong local_370;
  longlong *local_368;
  longlong *local_360;
  longlong local_358;
  longlong *local_350;
  undefined4 local_348 [188];
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_3a8;
  if (*(char *)*param_1 == '\x01') {
    iVar6 = (int)param_2[1];
    lVar24 = (longlong)iVar6;
    if (lVar24 == 0) {
      iVar7 = 0;
    }
    else {
      plVar11 = (longlong *)*param_2;
      bVar26 = true;
      if ((*plVar11 != 0) && (plVar11[1] != 0)) {
        bVar26 = *(int *)(plVar11[1] + 8) < 1;
      }
      iVar7 = 0;
      iVar22 = 0;
      local_388 = param_1;
      local_380 = param_2;
LAB_14104aff8:
      do {
        if (iVar22 + 1 < iVar6) {
          lVar13 = (longlong)iVar22;
          lVar17 = lVar13 + 2;
          plVar20 = plVar11 + lVar13 * 2 + 3;
          bVar2 = true;
          lVar16 = -1;
          do {
            iVar15 = (int)lVar16;
            if ((plVar20[-1] == 0) || (*plVar20 == 0)) {
              if (!bVar26) {
                iVar19 = iVar22 - iVar15;
                iVar15 = -iVar15;
                goto LAB_14104b095;
              }
            }
            else if ((bool)(*(int *)(*plVar20 + 8) < 1 ^ bVar26)) {
              iVar19 = iVar22 - iVar15;
              break;
            }
            bVar2 = lVar17 < lVar24;
            lVar16 = lVar16 + -1;
            lVar17 = lVar17 + 1;
            plVar20 = plVar20 + 2;
            iVar19 = iVar6;
          } while (lVar13 - lVar24 != lVar16);
        }
        else {
          bVar2 = false;
          iVar19 = iVar22 + 1;
        }
        iVar15 = iVar19 - iVar22;
        if (bVar26) {
          FUN_140c2c3b5(plVar11 + (longlong)iVar22 * 2);
          bVar26 = false;
          iVar22 = iVar19;
          if (!bVar2) break;
          goto LAB_14104aff8;
        }
LAB_14104b095:
        if (iVar7 != iVar22) {
          memmove(plVar11 + (longlong)iVar7 * 2,plVar11 + (longlong)iVar22 * 2,(longlong)iVar15 << 4
                 );
        }
        iVar7 = iVar7 + iVar15;
        bVar26 = true;
        iVar22 = iVar19;
      } while (bVar2);
      *(int *)(local_380 + 1) = iVar7;
      param_1 = local_388;
      param_2 = local_380;
    }
    lVar24 = *(longlong *)param_1[1];
    plVar11 = (longlong *)((longlong *)param_1[1])[1];
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar11 + 0xc) = *(int *)((longlong)plVar11 + 0xc) + 1;
      UNLOCK();
      iVar7 = (int)param_2[1];
    }
    if (iVar7 != 0) {
      plVar20 = (longlong *)*param_2;
      plVar14 = plVar20;
      local_380 = param_2;
      do {
        plVar18 = (longlong *)plVar14[1];
        if (plVar18 == (longlong *)0x0) {
LAB_14104bd05:
          plVar18 = (longlong *)0x0;
        }
        else {
          iVar6 = (int)plVar18[1];
          do {
            if (iVar6 == 0) goto LAB_14104bd05;
            LOCK();
            iVar22 = (int)plVar18[1];
            bVar26 = iVar6 == iVar22;
            if (bVar26) {
              *(int *)(plVar18 + 1) = iVar6 + 1;
              iVar22 = iVar6;
            }
            iVar6 = iVar22;
            UNLOCK();
          } while (!bVar26);
        }
        lVar17 = *plVar14;
        if (plVar11 == (longlong *)0x0) {
LAB_14104bd09:
          lVar13 = 0;
        }
        else {
          iVar6 = (int)plVar11[1];
          do {
            if (iVar6 == 0) goto LAB_14104bd09;
            LOCK();
            iVar22 = (int)plVar11[1];
            bVar26 = iVar6 == iVar22;
            if (bVar26) {
              *(int *)(plVar11 + 1) = iVar6 + 1;
              iVar22 = iVar6;
            }
            iVar6 = iVar22;
            UNLOCK();
          } while (!bVar26);
          LOCK();
          plVar10 = plVar11 + 1;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          lVar13 = lVar24;
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
        if (plVar18 == (longlong *)0x0) {
          lVar17 = 0;
        }
        else {
          LOCK();
          plVar10 = plVar18 + 1;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if ((int)*plVar10 == 0) {
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
        param_2 = local_380;
        if (lVar17 == lVar13) {
          if ((int)((ulonglong)~((longlong)plVar14 - (longlong)plVar20) >> 4) != 0) {
            if (plVar11 != (longlong *)0x0) {
              LOCK();
              piVar1 = (int *)((longlong)plVar11 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar11 + 0x10))(plVar11);
              }
            }
            goto LAB_14104b2e9;
          }
          break;
        }
        plVar14 = plVar14 + 2;
      } while (plVar14 != plVar20 + (longlong)iVar7 * 2);
    }
    lVar17 = param_2[1];
    uVar5 = (int)lVar17 + 1;
    *(uint *)(param_2 + 1) = uVar5;
    if (*(uint *)((longlong)param_2 + 0xc) < uVar5) {
      FUN_1418f291c(param_2);
    }
    lVar13 = *param_2;
    lVar17 = (longlong)(int)lVar17 * 0x10;
    *(longlong *)(lVar13 + lVar17) = lVar24;
    *(longlong **)(lVar13 + 8 + lVar17) = plVar11;
LAB_14104b2e9:
    iVar6 = (int)param_2[1];
    if (1 < (longlong)iVar6) {
      lVar24 = *param_2;
      memset(local_348,0,0x2f0);
      local_350 = (longlong *)((longlong)iVar6 * 0x10 + lVar24 + -0x10);
      local_358 = lVar24;
      fVar27 = logf((float)iVar6);
      local_348[0] = (int)(longlong)(fVar27 + fVar27);
      plVar11 = &local_358;
      do {
        plVar20 = (longlong *)*plVar11;
        plVar14 = (longlong *)plVar11[1];
        iVar6 = (int)((ulonglong)((longlong)plVar14 - (longlong)plVar20) >> 4);
        plVar18 = (longlong *)(ulonglong)(iVar6 + 1);
        local_370 = CONCAT44(local_370._4_4_,(int)plVar11[2]);
        local_378 = plVar11;
        if ((int)plVar11[2] != 0) {
LAB_14104b36e:
          if (8 < (int)(uint)plVar18) {
            uVar9 = (ulonglong)((uint)plVar18 >> 1);
            lVar24 = plVar20[uVar9 * 2];
            lVar17 = (plVar20 + uVar9 * 2)[1];
            lVar13 = plVar20[1];
            plVar20[uVar9 * 2] = *plVar20;
            (plVar20 + uVar9 * 2)[1] = lVar13;
            local_58._0_4_ = (undefined4)lVar24;
            local_58._4_4_ = (undefined4)((ulonglong)lVar24 >> 0x20);
            uStack_50._0_4_ = (undefined4)lVar17;
            uStack_50._4_4_ = (undefined4)((ulonglong)lVar17 >> 0x20);
            *(undefined4 *)plVar20 = (undefined4)local_58;
            *(undefined4 *)((longlong)plVar20 + 4) = local_58._4_4_;
            *(undefined4 *)(plVar20 + 1) = (undefined4)uStack_50;
            *(undefined4 *)((longlong)plVar20 + 0xc) = uStack_50._4_4_;
            plVar18 = plVar14 + 2;
            plVar11 = plVar20;
            local_380 = plVar14;
            local_368 = plVar14;
            local_58 = (longlong *)lVar24;
            uStack_50 = lVar17;
LAB_14104b3b6:
            plVar10 = plVar11 + 2;
            if (plVar10 <= local_380) goto code_r0x00014104b3c8;
            goto LAB_14104b47f;
          }
          plVar11 = local_378;
          if (plVar20 < plVar14) {
            local_388 = plVar20 + 2;
            do {
              plVar11 = local_388;
              plVar18 = plVar20;
              plVar10 = plVar20;
              local_380 = plVar14;
              if (local_388 <= plVar14) {
                do {
                  plVar14 = plVar11;
                  plVar11 = (longlong *)plVar18[1];
                  if (plVar11 == (longlong *)0x0) {
LAB_14104bb6d:
                    plVar11 = (longlong *)0x0;
                  }
                  else {
                    iVar6 = (int)plVar11[1];
                    do {
                      if (iVar6 == 0) goto LAB_14104bb6d;
                      LOCK();
                      iVar7 = (int)plVar11[1];
                      bVar26 = iVar6 == iVar7;
                      if (bVar26) {
                        *(int *)(plVar11 + 1) = iVar6 + 1;
                        iVar7 = iVar6;
                      }
                      iVar6 = iVar7;
                      UNLOCK();
                    } while (!bVar26);
                  }
                  plVar12 = (longlong *)0x0;
                  if (plVar11 != (longlong *)0x0) {
                    plVar12 = (longlong *)*plVar18;
                  }
                  plVar10 = (longlong *)plVar10[3];
                  if (plVar10 == (longlong *)0x0) {
LAB_14104bb97:
                    plVar10 = (longlong *)0x0;
                  }
                  else {
                    iVar6 = (int)plVar10[1];
                    do {
                      if (iVar6 == 0) goto LAB_14104bb97;
                      LOCK();
                      iVar7 = (int)plVar10[1];
                      bVar26 = iVar6 == iVar7;
                      if (bVar26) {
                        *(int *)(plVar10 + 1) = iVar6 + 1;
                        iVar7 = iVar6;
                      }
                      iVar6 = iVar7;
                      UNLOCK();
                    } while (!bVar26);
                  }
                  plVar25 = (longlong *)0x0;
                  if (plVar10 != (longlong *)0x0) {
                    plVar25 = (longlong *)*plVar14;
                  }
                  iVar6 = (**(code **)(*plVar12 + 0x10))();
                  iVar7 = (**(code **)(*plVar25 + 0x10))(plVar25);
                  if (plVar10 != (longlong *)0x0) {
                    LOCK();
                    plVar12 = plVar10 + 1;
                    *(int *)plVar12 = (int)*plVar12 + -1;
                    UNLOCK();
                    if ((int)*plVar12 == 0) {
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
                  if (plVar11 != (longlong *)0x0) {
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
                  if (iVar7 < iVar6) {
                    plVar18 = plVar14;
                  }
                  plVar11 = plVar14 + 2;
                  plVar10 = plVar14;
                } while (plVar14 + 2 <= local_380);
              }
              local_58 = (longlong *)*plVar18;
              uStack_50 = plVar18[1];
              plVar10 = local_58;
              lVar17 = uStack_50;
              lVar24 = local_380[1];
              *plVar18 = *local_380;
              plVar18[1] = lVar24;
              local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
              uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
              *(undefined4 *)local_380 = (undefined4)local_58;
              *(undefined4 *)((longlong)local_380 + 4) = local_58._4_4_;
              *(undefined4 *)(local_380 + 1) = (undefined4)uStack_50;
              *(undefined4 *)((longlong)local_380 + 0xc) = uStack_50._4_4_;
              plVar14 = local_380 + -2;
              plVar11 = local_378;
              local_58 = plVar10;
              uStack_50 = lVar17;
            } while (plVar20 < plVar14);
          }
          goto LAB_14104bc4a;
        }
LAB_14104b64c:
        plVar11 = local_378;
        if ((int)plVar18 != 0) {
          uVar5 = (iVar6 - (iVar6 + -1 >> 0x1f)) + -1 >> 1;
          local_388 = plVar20;
          local_380 = plVar18;
          do {
            uVar9 = (ulonglong)uVar5;
            uVar21 = uVar5 * 2 + 1;
            local_370 = uVar9;
            if ((int)uVar21 < (int)plVar18) {
              do {
                uVar23 = uVar5 * 2 + 2;
                uVar5 = uVar21;
                if ((int)uVar23 < (int)plVar18) {
                  plVar11 = (longlong *)local_388[(longlong)(int)uVar23 * 2 + 1];
                  if (plVar11 == (longlong *)0x0) {
LAB_14104b6ca:
                    plVar11 = (longlong *)0x0;
                  }
                  else {
                    iVar6 = (int)plVar11[1];
                    do {
                      if (iVar6 == 0) goto LAB_14104b6ca;
                      LOCK();
                      iVar7 = (int)plVar11[1];
                      bVar26 = iVar6 == iVar7;
                      if (bVar26) {
                        *(int *)(plVar11 + 1) = iVar6 + 1;
                        iVar7 = iVar6;
                      }
                      iVar6 = iVar7;
                      UNLOCK();
                    } while (!bVar26);
                  }
                  plVar20 = (longlong *)0x0;
                  if (plVar11 != (longlong *)0x0) {
                    plVar20 = (longlong *)local_388[(longlong)(int)uVar23 * 2];
                  }
                  plVar14 = (longlong *)(local_388 + (longlong)(int)uVar21 * 2)[1];
                  if (plVar14 == (longlong *)0x0) {
LAB_14104b706:
                    plVar14 = (longlong *)0x0;
                  }
                  else {
                    iVar6 = (int)plVar14[1];
                    do {
                      if (iVar6 == 0) goto LAB_14104b706;
                      LOCK();
                      iVar7 = (int)plVar14[1];
                      bVar26 = iVar6 == iVar7;
                      if (bVar26) {
                        *(int *)(plVar14 + 1) = iVar6 + 1;
                        iVar7 = iVar6;
                      }
                      iVar6 = iVar7;
                      UNLOCK();
                    } while (!bVar26);
                  }
                  plVar18 = (longlong *)0x0;
                  if (plVar14 != (longlong *)0x0) {
                    plVar18 = (longlong *)local_388[(longlong)(int)uVar21 * 2];
                  }
                  iVar6 = (**(code **)(*plVar20 + 0x10))();
                  iVar7 = (**(code **)(*plVar18 + 0x10))(plVar18);
                  if (plVar14 != (longlong *)0x0) {
                    LOCK();
                    plVar20 = plVar14 + 1;
                    *(int *)plVar20 = (int)*plVar20 + -1;
                    UNLOCK();
                    if ((int)*plVar20 == 0) {
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
                  if (plVar11 != (longlong *)0x0) {
                    LOCK();
                    plVar20 = plVar11 + 1;
                    *(int *)plVar20 = (int)*plVar20 + -1;
                    UNLOCK();
                    if ((int)*plVar20 == 0) {
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
                  uVar5 = uVar23;
                  if (iVar7 < iVar6) {
                    uVar5 = uVar21;
                  }
                }
                plVar11 = (longlong *)local_388[(longlong)(int)uVar9 * 2 + 1];
                if (plVar11 == (longlong *)0x0) {
LAB_14104b799:
                  plVar11 = (longlong *)0x0;
                }
                else {
                  iVar6 = (int)plVar11[1];
                  do {
                    if (iVar6 == 0) goto LAB_14104b799;
                    LOCK();
                    iVar7 = (int)plVar11[1];
                    bVar26 = iVar6 == iVar7;
                    if (bVar26) {
                      *(int *)(plVar11 + 1) = iVar6 + 1;
                      iVar7 = iVar6;
                    }
                    iVar6 = iVar7;
                    UNLOCK();
                  } while (!bVar26);
                }
                plVar14 = local_388 + (longlong)(int)uVar9 * 2;
                plVar20 = (longlong *)0x0;
                if (plVar11 != (longlong *)0x0) {
                  plVar20 = (longlong *)*plVar14;
                }
                plVar10 = local_388 + (longlong)(int)uVar5 * 2;
                plVar18 = (longlong *)plVar10[1];
                if (plVar18 == (longlong *)0x0) {
LAB_14104b7d4:
                  plVar18 = (longlong *)0x0;
                }
                else {
                  iVar6 = (int)plVar18[1];
                  do {
                    if (iVar6 == 0) goto LAB_14104b7d4;
                    LOCK();
                    iVar7 = (int)plVar18[1];
                    bVar26 = iVar6 == iVar7;
                    if (bVar26) {
                      *(int *)(plVar18 + 1) = iVar6 + 1;
                      iVar7 = iVar6;
                    }
                    iVar6 = iVar7;
                    UNLOCK();
                  } while (!bVar26);
                }
                plVar12 = (longlong *)0x0;
                if (plVar18 != (longlong *)0x0) {
                  plVar12 = (longlong *)*plVar10;
                }
                iVar6 = (**(code **)(*plVar20 + 0x10))();
                iVar7 = (**(code **)(*plVar12 + 0x10))(plVar12);
                if (plVar18 != (longlong *)0x0) {
                  LOCK();
                  plVar20 = plVar18 + 1;
                  *(int *)plVar20 = (int)*plVar20 + -1;
                  UNLOCK();
                  if ((int)*plVar20 == 0) {
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
                if (plVar11 != (longlong *)0x0) {
                  LOCK();
                  plVar20 = plVar11 + 1;
                  *(int *)plVar20 = (int)*plVar20 + -1;
                  UNLOCK();
                  if ((int)*plVar20 == 0) {
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
                plVar18 = local_380;
                if (iVar6 <= iVar7) break;
                local_58 = (longlong *)*plVar14;
                uStack_50 = plVar14[1];
                plVar11 = local_58;
                lVar17 = uStack_50;
                lVar24 = plVar10[1];
                *plVar14 = *plVar10;
                plVar14[1] = lVar24;
                local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
                uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
                *(undefined4 *)plVar10 = (undefined4)local_58;
                *(undefined4 *)((longlong)plVar10 + 4) = local_58._4_4_;
                *(undefined4 *)(plVar10 + 1) = (undefined4)uStack_50;
                *(undefined4 *)((longlong)plVar10 + 0xc) = uStack_50._4_4_;
                uVar21 = uVar5 * 2 + 1;
                uVar9 = (ulonglong)uVar5;
                local_58 = plVar11;
                uStack_50 = lVar17;
              } while ((int)uVar21 < (int)local_380);
            }
            uVar5 = (int)local_370 - 1;
          } while ((int)local_370 != 0);
          plVar11 = local_378;
          if (1 < (int)plVar18) {
            plVar20 = (longlong *)(((ulonglong)plVar18 & 0xffffffff) - 1);
            local_58 = (longlong *)*local_388;
            uStack_50 = local_388[1];
            plVar10 = local_58;
            lVar17 = uStack_50;
            lVar24 = (local_388 + (longlong)plVar20 * 2)[1];
            *local_388 = local_388[(longlong)plVar20 * 2];
            local_388[1] = lVar24;
            local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
            uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
            plVar14 = local_388 + (longlong)plVar20 * 2;
            *(undefined4 *)plVar14 = (undefined4)local_58;
            *(undefined4 *)((longlong)plVar14 + 4) = local_58._4_4_;
            *(undefined4 *)(plVar14 + 1) = (undefined4)uStack_50;
            *(undefined4 *)((longlong)plVar14 + 0xc) = uStack_50._4_4_;
            local_58 = plVar10;
            uStack_50 = lVar17;
            if ((int)plVar18 != 2) {
              do {
                iVar6 = 0;
                iVar22 = 1;
                iVar7 = 0;
                local_380 = plVar20;
                do {
                  lVar24 = (longlong)(iVar6 + 2);
                  iVar19 = iVar22;
                  if (lVar24 < (longlong)local_380) {
                    plVar11 = (longlong *)local_388[lVar24 * 2 + 1];
                    if (plVar11 == (longlong *)0x0) {
LAB_14104b924:
                      plVar11 = (longlong *)0x0;
                    }
                    else {
                      iVar19 = (int)plVar11[1];
                      do {
                        if (iVar19 == 0) goto LAB_14104b924;
                        LOCK();
                        iVar15 = (int)plVar11[1];
                        bVar26 = iVar19 == iVar15;
                        if (bVar26) {
                          *(int *)(plVar11 + 1) = iVar19 + 1;
                          iVar15 = iVar19;
                        }
                        iVar19 = iVar15;
                        UNLOCK();
                      } while (!bVar26);
                    }
                    plVar20 = (longlong *)0x0;
                    if (plVar11 != (longlong *)0x0) {
                      plVar20 = (longlong *)local_388[lVar24 * 2];
                    }
                    plVar14 = (longlong *)(local_388 + (longlong)iVar22 * 2)[1];
                    if (plVar14 == (longlong *)0x0) {
LAB_14104b960:
                      plVar14 = (longlong *)0x0;
                    }
                    else {
                      iVar19 = (int)plVar14[1];
                      do {
                        if (iVar19 == 0) goto LAB_14104b960;
                        LOCK();
                        iVar15 = (int)plVar14[1];
                        bVar26 = iVar19 == iVar15;
                        if (bVar26) {
                          *(int *)(plVar14 + 1) = iVar19 + 1;
                          iVar15 = iVar19;
                        }
                        iVar19 = iVar15;
                        UNLOCK();
                      } while (!bVar26);
                    }
                    plVar18 = (longlong *)0x0;
                    if (plVar14 != (longlong *)0x0) {
                      plVar18 = (longlong *)local_388[(longlong)iVar22 * 2];
                    }
                    iVar15 = (**(code **)(*plVar20 + 0x10))();
                    iVar8 = (**(code **)(*plVar18 + 0x10))(plVar18);
                    if (plVar14 != (longlong *)0x0) {
                      LOCK();
                      plVar20 = plVar14 + 1;
                      *(int *)plVar20 = (int)*plVar20 + -1;
                      UNLOCK();
                      if ((int)*plVar20 == 0) {
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
                    if (plVar11 != (longlong *)0x0) {
                      LOCK();
                      plVar20 = plVar11 + 1;
                      *(int *)plVar20 = (int)*plVar20 + -1;
                      UNLOCK();
                      if ((int)*plVar20 == 0) {
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
                    iVar19 = iVar6 + 2;
                    if (iVar8 < iVar15) {
                      iVar19 = iVar22;
                    }
                  }
                  plVar11 = (longlong *)local_388[(longlong)iVar7 * 2 + 1];
                  if (plVar11 == (longlong *)0x0) {
LAB_14104b9f3:
                    plVar11 = (longlong *)0x0;
                  }
                  else {
                    iVar6 = (int)plVar11[1];
                    do {
                      if (iVar6 == 0) goto LAB_14104b9f3;
                      LOCK();
                      iVar22 = (int)plVar11[1];
                      bVar26 = iVar6 == iVar22;
                      if (bVar26) {
                        *(int *)(plVar11 + 1) = iVar6 + 1;
                        iVar22 = iVar6;
                      }
                      iVar6 = iVar22;
                      UNLOCK();
                    } while (!bVar26);
                  }
                  plVar14 = local_388 + (longlong)iVar7 * 2;
                  plVar20 = (longlong *)0x0;
                  if (plVar11 != (longlong *)0x0) {
                    plVar20 = (longlong *)*plVar14;
                  }
                  plVar10 = local_388 + (longlong)iVar19 * 2;
                  plVar18 = (longlong *)plVar10[1];
                  if (plVar18 == (longlong *)0x0) {
LAB_14104ba2e:
                    plVar18 = (longlong *)0x0;
                  }
                  else {
                    iVar6 = (int)plVar18[1];
                    do {
                      if (iVar6 == 0) goto LAB_14104ba2e;
                      LOCK();
                      iVar7 = (int)plVar18[1];
                      bVar26 = iVar6 == iVar7;
                      if (bVar26) {
                        *(int *)(plVar18 + 1) = iVar6 + 1;
                        iVar7 = iVar6;
                      }
                      iVar6 = iVar7;
                      UNLOCK();
                    } while (!bVar26);
                  }
                  plVar12 = (longlong *)0x0;
                  if (plVar18 != (longlong *)0x0) {
                    plVar12 = (longlong *)*plVar10;
                  }
                  iVar6 = (**(code **)(*plVar20 + 0x10))();
                  iVar7 = (**(code **)(*plVar12 + 0x10))(plVar12);
                  if (plVar18 != (longlong *)0x0) {
                    LOCK();
                    plVar20 = plVar18 + 1;
                    *(int *)plVar20 = (int)*plVar20 + -1;
                    UNLOCK();
                    if ((int)*plVar20 == 0) {
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
                  if (plVar11 != (longlong *)0x0) {
                    LOCK();
                    plVar20 = plVar11 + 1;
                    *(int *)plVar20 = (int)*plVar20 + -1;
                    UNLOCK();
                    if ((int)*plVar20 == 0) {
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
                  if (iVar6 <= iVar7) break;
                  plVar11 = (longlong *)*plVar14;
                  lVar24 = plVar14[1];
                  lVar17 = plVar10[1];
                  *plVar14 = *plVar10;
                  plVar14[1] = lVar17;
                  local_58._0_4_ = SUB84(plVar11,0);
                  local_58._4_4_ = (undefined4)((ulonglong)plVar11 >> 0x20);
                  uStack_50._0_4_ = (undefined4)lVar24;
                  uStack_50._4_4_ = (undefined4)((ulonglong)lVar24 >> 0x20);
                  *(undefined4 *)plVar10 = (undefined4)local_58;
                  *(undefined4 *)((longlong)plVar10 + 4) = local_58._4_4_;
                  *(undefined4 *)(plVar10 + 1) = (undefined4)uStack_50;
                  *(undefined4 *)((longlong)plVar10 + 0xc) = uStack_50._4_4_;
                  iVar6 = iVar19 * 2;
                  iVar22 = iVar19 * 2 + 1;
                  iVar7 = iVar19;
                  local_58 = plVar11;
                  uStack_50 = lVar24;
                } while ((longlong)iVar22 < (longlong)local_380);
                plVar20 = (longlong *)((longlong)local_380 + -1);
                local_58 = (longlong *)*local_388;
                uStack_50 = local_388[1];
                plVar14 = local_58;
                lVar17 = uStack_50;
                lVar24 = (local_388 + (longlong)plVar20 * 2)[1];
                *local_388 = local_388[(longlong)plVar20 * 2];
                local_388[1] = lVar24;
                local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
                uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
                plVar11 = local_388 + (longlong)plVar20 * 2;
                *(undefined4 *)plVar11 = (undefined4)local_58;
                *(undefined4 *)((longlong)plVar11 + 4) = local_58._4_4_;
                *(undefined4 *)(plVar11 + 1) = (undefined4)uStack_50;
                *(undefined4 *)((longlong)plVar11 + 0xc) = uStack_50._4_4_;
                plVar11 = local_378;
                local_58 = plVar14;
                uStack_50 = lVar17;
              } while ((longlong *)0x2 < local_380);
            }
          }
        }
LAB_14104bc4a:
        plVar11 = plVar11 + -3;
      } while (&local_358 <= plVar11);
    }
  }
  else {
    local_358 = *(longlong *)param_1[1];
    plVar11 = (longlong *)((longlong *)param_1[1])[1];
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar11 + 0xc) = *(int *)((longlong)plVar11 + 0xc) + 1;
      UNLOCK();
    }
    local_58 = &local_358;
    iVar6 = (int)param_2[1];
    lVar24 = (longlong)iVar6;
    local_350 = plVar11;
    if (lVar24 != 0) {
      local_368 = (longlong *)*param_2;
      plVar20 = (longlong *)local_368[1];
      if (plVar20 == (longlong *)0x0) {
LAB_14104bd49:
        plVar20 = (longlong *)0x0;
      }
      else {
        iVar7 = (int)plVar20[1];
        do {
          if (iVar7 == 0) goto LAB_14104bd49;
          LOCK();
          iVar22 = (int)plVar20[1];
          bVar26 = iVar7 == iVar22;
          if (bVar26) {
            *(int *)(plVar20 + 1) = iVar7 + 1;
            iVar22 = iVar7;
          }
          iVar7 = iVar22;
          UNLOCK();
        } while (!bVar26);
      }
      lVar17 = *local_368;
      if (plVar11 == (longlong *)0x0) {
        lVar13 = 0;
        local_380 = param_2;
      }
      else {
        iVar7 = (int)plVar11[1];
        do {
          lVar13 = 0;
          local_380 = param_2;
          if (iVar7 == 0) goto LAB_14104b174;
          LOCK();
          iVar22 = (int)plVar11[1];
          bVar26 = iVar7 == iVar22;
          if (bVar26) {
            *(int *)(plVar11 + 1) = iVar7 + 1;
            iVar22 = iVar7;
          }
          iVar7 = iVar22;
          UNLOCK();
        } while (!bVar26);
        LOCK();
        plVar14 = plVar11 + 1;
        *(int *)plVar14 = (int)*plVar14 + -1;
        UNLOCK();
        lVar13 = local_358;
        if ((int)*plVar14 == 0) {
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
LAB_14104b174:
      if (plVar20 == (longlong *)0x0) {
        lVar17 = 0;
      }
      else {
        LOCK();
        plVar11 = plVar20 + 1;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)*plVar11 == 0) {
          (**(code **)*plVar20)(plVar20);
          LOCK();
          piVar1 = (int *)((longlong)plVar20 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar20 + 0x10))(plVar20);
          }
        }
      }
      plVar20 = (longlong *)0x0;
      local_378 = local_368 + 2;
      plVar11 = local_368;
      bVar3 = lVar17 == lVar13;
      iVar7 = 0;
      do {
        local_370 = CONCAT71(local_370._1_7_,bVar3) ^ 1;
        lVar17 = (longlong)iVar7;
        iVar22 = iVar7 + 1;
        if (iVar7 + 1 < iVar6) {
          iVar22 = iVar6;
        }
        plVar14 = local_378 + lVar17 * 2;
        iVar19 = iVar7;
        lVar13 = lVar17;
        local_388 = plVar20;
        do {
          lVar13 = lVar13 + 1;
          iVar15 = iVar22;
          if (lVar24 <= lVar13) break;
          local_360 = plVar14;
          bVar4 = FUN_148e0c3a2(&local_58);
          iVar19 = iVar19 + 1;
          plVar14 = local_360 + 2;
          plVar11 = local_368;
          iVar15 = iVar19;
        } while ((bVar3 & 1) == bVar4);
        iVar22 = iVar15 - iVar7;
        if ((bVar3 & 1) == 0) {
          iVar19 = (int)local_388;
          if (iVar19 != iVar7) {
            memmove(plVar11 + (longlong)iVar19 * 2,plVar11 + lVar17 * 2,(longlong)iVar22 << 4);
            plVar11 = local_368;
          }
          plVar20 = (longlong *)(ulonglong)(uint)(iVar19 + iVar22);
        }
        else {
          FUN_140c2c3b5(plVar11 + lVar17 * 2,iVar22);
          plVar11 = local_368;
          plVar20 = local_388;
        }
        bVar3 = (byte)local_370;
        iVar7 = iVar15;
      } while (lVar13 < lVar24);
      *(int *)(local_380 + 1) = (int)plVar20;
    }
    if (local_350 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)local_350 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_350 + 0x10))();
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_3a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
code_r0x00014104b3c8:
  plVar14 = (longlong *)plVar20[1];
  if (plVar14 == (longlong *)0x0) {
LAB_14104b3e4:
    plVar14 = (longlong *)0x0;
  }
  else {
    iVar6 = (int)plVar14[1];
    do {
      if (iVar6 == 0) goto LAB_14104b3e4;
      LOCK();
      iVar7 = (int)plVar14[1];
      bVar26 = iVar6 == iVar7;
      if (bVar26) {
        *(int *)(plVar14 + 1) = iVar6 + 1;
        iVar7 = iVar6;
      }
      iVar6 = iVar7;
      UNLOCK();
    } while (!bVar26);
  }
  plVar12 = (longlong *)0x0;
  if (plVar14 != (longlong *)0x0) {
    plVar12 = (longlong *)*plVar20;
  }
  plVar11 = (longlong *)plVar11[3];
  if (plVar11 == (longlong *)0x0) {
LAB_14104b40e:
    plVar11 = (longlong *)0x0;
  }
  else {
    iVar6 = (int)plVar11[1];
    do {
      if (iVar6 == 0) goto LAB_14104b40e;
      LOCK();
      iVar7 = (int)plVar11[1];
      bVar26 = iVar6 == iVar7;
      if (bVar26) {
        *(int *)(plVar11 + 1) = iVar6 + 1;
        iVar7 = iVar6;
      }
      iVar6 = iVar7;
      UNLOCK();
    } while (!bVar26);
  }
  plVar25 = (longlong *)0x0;
  if (plVar11 != (longlong *)0x0) {
    plVar25 = (longlong *)*plVar10;
  }
  iVar6 = (**(code **)(*plVar12 + 0x10))();
  iVar7 = (**(code **)(*plVar25 + 0x10))(plVar25);
  if (plVar11 != (longlong *)0x0) {
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
  if (plVar14 != (longlong *)0x0) {
    LOCK();
    plVar11 = plVar14 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 == 0) {
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
  plVar11 = plVar10;
  if (iVar6 <= iVar7) goto LAB_14104b3b6;
LAB_14104b47f:
  do {
    local_388 = plVar10;
    plVar14 = plVar18;
    plVar18 = plVar14 + -2;
    if (plVar18 <= plVar20) break;
    plVar11 = (longlong *)plVar14[-1];
    if (plVar11 == (longlong *)0x0) {
LAB_14104b4ab:
      plVar11 = (longlong *)0x0;
    }
    else {
      iVar6 = (int)plVar11[1];
      do {
        if (iVar6 == 0) goto LAB_14104b4ab;
        LOCK();
        iVar7 = (int)plVar11[1];
        bVar26 = iVar6 == iVar7;
        if (bVar26) {
          *(int *)(plVar11 + 1) = iVar6 + 1;
          iVar7 = iVar6;
        }
        iVar6 = iVar7;
        UNLOCK();
      } while (!bVar26);
    }
    plVar10 = (longlong *)0x0;
    if (plVar11 != (longlong *)0x0) {
      plVar10 = (longlong *)*plVar18;
    }
    plVar12 = (longlong *)plVar20[1];
    if (plVar12 == (longlong *)0x0) {
LAB_14104b4d5:
      plVar12 = (longlong *)0x0;
    }
    else {
      iVar6 = (int)plVar12[1];
      do {
        if (iVar6 == 0) goto LAB_14104b4d5;
        LOCK();
        iVar7 = (int)plVar12[1];
        bVar26 = iVar6 == iVar7;
        if (bVar26) {
          *(int *)(plVar12 + 1) = iVar6 + 1;
          iVar7 = iVar6;
        }
        iVar6 = iVar7;
        UNLOCK();
      } while (!bVar26);
    }
    plVar25 = (longlong *)0x0;
    if (plVar12 != (longlong *)0x0) {
      plVar25 = (longlong *)*plVar20;
    }
    iVar6 = (**(code **)(*plVar10 + 0x10))();
    iVar7 = (**(code **)(*plVar25 + 0x10))(plVar25);
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      plVar10 = plVar12 + 1;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)*plVar10 == 0) {
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
    if (plVar11 != (longlong *)0x0) {
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
    plVar10 = local_388;
  } while (iVar6 <= iVar7);
  if (local_388 <= plVar18) {
    lVar24 = *local_388;
    lVar17 = local_388[1];
    lVar13 = plVar14[-1];
    *local_388 = *plVar18;
    local_388[1] = lVar13;
    local_58._0_4_ = (undefined4)lVar24;
    local_58._4_4_ = (undefined4)((ulonglong)lVar24 >> 0x20);
    uStack_50._0_4_ = (undefined4)lVar17;
    uStack_50._4_4_ = (undefined4)((ulonglong)lVar17 >> 0x20);
    *(undefined4 *)plVar18 = (undefined4)local_58;
    *(undefined4 *)((longlong)plVar14 + -0xc) = local_58._4_4_;
    *(undefined4 *)(plVar14 + -1) = (undefined4)uStack_50;
    *(undefined4 *)((longlong)plVar14 + -4) = uStack_50._4_4_;
    plVar11 = local_388;
    local_58 = (longlong *)lVar24;
    uStack_50 = lVar17;
    goto LAB_14104b3b6;
  }
  local_58 = (longlong *)*plVar20;
  uStack_50 = plVar20[1];
  plVar11 = local_58;
  lVar17 = uStack_50;
  lVar24 = plVar14[-1];
  *plVar20 = *plVar18;
  plVar20[1] = lVar24;
  local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  *(undefined4 *)plVar18 = (undefined4)local_58;
  *(undefined4 *)((longlong)plVar14 + -0xc) = local_58._4_4_;
  *(undefined4 *)(plVar14 + -1) = (undefined4)uStack_50;
  *(undefined4 *)((longlong)plVar14 + -4) = uStack_50._4_4_;
  iVar7 = (int)local_370 + -1;
  local_370 = CONCAT44(local_370._4_4_,iVar7);
  plVar14 = plVar14 + -4;
  local_58 = plVar11;
  uStack_50 = lVar17;
  if ((longlong)plVar14 - (longlong)plVar20 < (longlong)local_368 - (longlong)local_388) {
    if (local_388 < local_380) {
      *local_378 = (longlong)local_388;
      local_378[1] = (longlong)local_380;
      *(int *)(local_378 + 2) = iVar7;
      local_378 = local_378 + 3;
    }
    plVar11 = local_378;
    if (plVar18 <= plVar20 + 2) goto LAB_14104bc4a;
  }
  else {
    plVar11 = local_378;
    if (plVar20 + 2 < plVar18) {
      *local_378 = (longlong)plVar20;
      local_378[1] = (longlong)plVar14;
      *(int *)(local_378 + 2) = iVar7;
      plVar11 = local_378 + 3;
    }
    plVar20 = local_388;
    plVar14 = local_380;
    if (local_380 <= local_388) goto LAB_14104bc4a;
  }
  local_378 = plVar11;
  iVar6 = (int)((ulonglong)((longlong)plVar14 - (longlong)plVar20) >> 4);
  plVar18 = (longlong *)(ulonglong)(iVar6 + 1);
  if (iVar7 == 0) goto LAB_14104b64c;
  goto LAB_14104b36e;
}



// FUNCTION 14104bdde FUN_14104bdde body=16 status=ok
// SIG undefined FUN_14104bdde(void)

char FUN_14104bdde(void)

{
  char cVar1;
  
  cVar1 = FUN_14104bdee();
  return cVar1 * '\x02';
}



// FUNCTION 14104bdee FUN_14104bdee body=1308 status=ok
// SIG undefined FUN_14104bdee(void)

ulonglong FUN_14104bdee(longlong param_1)

{
  int *piVar1;
  uint uVar2;
  code *pcVar3;
  byte bVar4;
  bool bVar5;
  undefined4 uVar6;
  int iVar7;
  longlong *plVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong lVar12;
  undefined *puVar13;
  undefined8 ****ppppuVar14;
  int iVar15;
  ulonglong uVar16;
  longlong lVar17;
  longlong lVar18;
  bool bVar19;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  longlong *local_a0;
  undefined8 ***local_98 [3];
  ushort local_80;
  byte local_78;
  char local_70 [8];
  longlong local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined1 local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  plVar8 = (longlong *)FUN_140343d7a();
  if (plVar8 != (longlong *)0x0) {
    uVar9 = FUN_1401b0f18();
    plVar10 = (longlong *)(**(code **)(*plVar8 + 0x288))(plVar8,uVar9);
    if (plVar10 != (longlong *)0x0) {
      uVar9 = FUN_1401b0f18();
      plVar11 = (longlong *)FUN_144718840(plVar10,uVar9);
      if ((plVar11 != (longlong *)0x0 && plVar10 != plVar11) &&
         (lVar12 = (**(code **)(*plVar11 + 0x18))(plVar11), lVar12 != 0)) {
        FUN_1448c1924(lVar12,&local_a8);
        if (local_a8 == 0) {
          uVar16 = 0;
        }
        else {
          lVar12 = *(longlong *)(param_1 + 0x48);
          lVar18 = *(longlong *)(param_1 + 0x40);
          if (lVar18 == 0) {
            lVar17 = 0;
            local_68 = 0;
LAB_14104c270:
            local_60 = (longlong *)0x0;
            bVar5 = true;
          }
          else {
            if (*(int *)(lVar18 + 0x4c) == 0) {
LAB_14104c186:
              lVar17 = 0;
            }
            else {
              uVar2 = *(uint *)(lVar18 + 0x48);
              lVar17 = 0;
              if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
                plVar10 = (longlong *)
                          ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
                if ((plVar10 == (longlong *)0x0) ||
                   (((int)plVar10[2] != *(int *)(lVar18 + 0x4c) ||
                    ((*(uint *)(plVar10 + 1) & 0x10200000) != 0)))) goto LAB_14104c186;
                lVar17 = *plVar10;
              }
            }
            plVar10 = *(longlong **)(lVar18 + 0x118);
            local_68 = param_1;
            if (plVar10 == (longlong *)0x0) goto LAB_14104c270;
            LOCK();
            *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
            UNLOCK();
            LOCK();
            *(int *)((longlong)plVar10 + 0xc) = *(int *)((longlong)plVar10 + 0xc) + 1;
            UNLOCK();
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
            LOCK();
            *(int *)((longlong)plVar10 + 0xc) = *(int *)((longlong)plVar10 + 0xc) + 1;
            UNLOCK();
            bVar5 = false;
            local_60 = plVar10;
          }
          plVar10 = local_60;
          local_48 = 0;
          local_70[0] = '\x03';
          local_58._0_4_ = 0;
          if (lVar17 == 0) {
            iVar7 = 0;
            uVar2 = (uint)local_58;
          }
          else {
            uVar2 = *(uint *)(lVar17 + 0xc);
            local_58 = (ulonglong)uVar2;
            if ((int)uVar2 < DAT_14c9647dc) {
              lVar18 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
            }
            else {
              lVar18 = 0;
            }
            iVar7 = *(int *)(lVar18 + 0x10);
            if (*(int *)(lVar18 + 0x10) == 0) {
              LOCK();
              iVar7 = DAT_14c964868 + 1;
              UNLOCK();
              iVar15 = DAT_14c964868 + 1;
              bVar19 = DAT_14c964868 < 1000;
              DAT_14c964868 = iVar7;
              if (bVar19) {
                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                              ,iVar15);
              }
              LOCK();
              iVar7 = *(int *)(lVar18 + 0x10);
              bVar19 = iVar7 == 0;
              if (bVar19) {
                *(int *)(lVar18 + 0x10) = iVar15;
                iVar7 = 0;
              }
              UNLOCK();
              uVar2 = (uint)local_58;
              if (bVar19) {
                iVar7 = iVar15;
              }
            }
          }
          local_58._0_4_ = uVar2;
          local_58 = CONCAT44(iVar7,(uint)local_58);
          local_50 = 2;
          if (local_48 != 0) {
            FUN_1417398fc(&DAT_14c9a3da0,local_48 + -1,1);
            local_48 = 0;
          }
          if (!bVar5) {
            LOCK();
            piVar1 = (int *)((longlong)plVar10 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar10 + 0x10))(plVar10);
            }
          }
          uVar6 = FUN_14180053c(local_a8,plVar8);
          *(undefined4 *)(param_1 + 0xd8) = uVar6;
          uVar6 = FUN_141800344(local_a8,plVar8);
          *(undefined4 *)(param_1 + 0xdc) = uVar6;
          FUN_1447c3578(lVar12 + 0x80,local_98,local_70);
          iVar7 = FUN_1405d5f74(local_98);
          pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_78 * 0x120));
          if (pcVar3 != (code *)0x0) {
            ppppuVar14 = local_98;
            if (0x18 < local_80) {
              ppppuVar14 = (undefined8 ****)local_98[0];
            }
            (*pcVar3)(ppppuVar14);
          }
          if (0x18 < local_80) {
            FUN_1400020a8(local_98[0]);
          }
          if ((bool)*(char *)(lVar12 + 0xf1) == *(int *)(param_1 + 0xd8) < iVar7) {
LAB_14104c05b:
            uVar16 = 0;
          }
          else {
            if (*(char *)(lVar12 + 0xf0) == '\x01') {
              FUN_1447c3578(lVar12 + 0xb8,local_98,local_70);
              iVar7 = FUN_1405d5f74(local_98);
              pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_78 * 0x120));
              if (pcVar3 != (code *)0x0) {
                ppppuVar14 = local_98;
                if (0x18 < local_80) {
                  ppppuVar14 = (undefined8 ****)local_98[0];
                }
                (*pcVar3)(ppppuVar14);
              }
              if (0x18 < local_80) {
                FUN_1400020a8(local_98[0]);
              }
              if ((bool)*(char *)(lVar12 + 0xf1) == *(int *)(param_1 + 0xdc) < iVar7)
              goto LAB_14104c05b;
            }
            uVar16 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
          }
          lVar12 = DAT_14c9a3da0;
          if ((longlong)local_48 != 0) {
            lVar17 = (longlong)local_48 + -1;
            lVar18 = lVar17 * 0x10;
            FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar18),
                          *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar18));
            if (*(longlong *)(lVar12 + lVar18) != 0) {
              FUN_1400020a8();
            }
            lVar12 = DAT_14c9a3da0;
            iVar7 = (int)lVar17;
            if (DAT_14c9a3dd4 != 0) {
              *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar7;
            }
            *(undefined4 *)(lVar12 + lVar18) = 0xffffffff;
            iVar15 = -1;
            if (0 < DAT_14c9a3dd4) {
              iVar15 = DAT_14c9a3dd0;
            }
            *(int *)(lVar12 + 4 + lVar18) = iVar15;
            DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
            puVar13 = &DAT_14c9a3db0;
            if (DAT_14c9a3dc0 != (undefined *)0x0) {
              puVar13 = DAT_14c9a3dc0;
            }
            iVar15 = iVar7 + 0x1f;
            if (-1 < iVar7) {
              iVar15 = iVar7;
            }
            bVar4 = (byte)lVar17 & 0x1f;
            DAT_14c9a3dd0 = iVar7;
            *(uint *)(puVar13 + (longlong)(iVar15 >> 5) * 4) =
                 *(uint *)(puVar13 + (longlong)(iVar15 >> 5) * 4) &
                 (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
            local_48 = 0;
          }
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
        if (local_a0 != (longlong *)0x0) {
          LOCK();
          plVar8 = local_a0 + 1;
          *(int *)plVar8 = (int)*plVar8 + -1;
          UNLOCK();
          if ((int)*plVar8 == 0) {
            (**(code **)*local_a0)(local_a0);
            LOCK();
            piVar1 = (int *)((longlong)local_a0 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*local_a0 + 0x10))(local_a0);
            }
          }
        }
        goto LAB_14104c064;
      }
    }
  }
  uVar16 = 0;
LAB_14104c064:
  if ((local_40 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar16 & 0xffffffff;
}



// FUNCTION 14104c314 FUN_14104c314 body=288 status=ok
// SIG undefined FUN_14104c314(void)

void FUN_14104c314(undefined8 *param_1)

{
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_14aff4a80;
  param_1[3] = 0;
  *(undefined2 *)(param_1 + 7) = 4;
  *(undefined4 *)(param_1 + 4) = 0x42700000;
  *(undefined1 *)(param_1 + 8) = 3;
  *(char *)(param_1 + 9) = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  *(undefined1 *)(param_1 + 10) = 0;
  param_1[0xb] = 0;
  *(undefined2 *)(param_1 + 0xf) = 4;
  *(undefined4 *)(param_1 + 0xc) = 0x42700000;
  *(undefined1 *)(param_1 + 0x10) = 3;
  *(char *)(param_1 + 0x11) = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  param_1[0x12] = 0;
  *(undefined2 *)(param_1 + 0x16) = 4;
  *(undefined4 *)(param_1 + 0x13) = 1;
  *(undefined1 *)(param_1 + 0x17) = 2;
  *(byte *)(param_1 + 0x18) = (byte)~DAT_14c9a8754 >> 4 & 2;
  param_1[0x19] = 0;
  *(undefined2 *)(param_1 + 0x1d) = 4;
  *(undefined4 *)(param_1 + 0x1a) = 1;
  *(undefined1 *)(param_1 + 0x1e) = 2;
  *(byte *)(param_1 + 0x1f) = (byte)~DAT_14c9a8754 >> 4 & 2;
  param_1[0x20] = 0;
  *(undefined2 *)(param_1 + 0x24) = 4;
  *(undefined4 *)(param_1 + 0x21) = 1;
  *(undefined1 *)(param_1 + 0x25) = 2;
  *(byte *)(param_1 + 0x26) = (byte)~DAT_14c9a8754 >> 4 & 2;
  *(undefined1 *)(param_1 + 0x27) = 0;
  return;
}



// FUNCTION 14104c442 FUN_14104c442 body=40 status=ok
// SIG undefined FUN_14104c442(void)

undefined8 FUN_14104c442(undefined8 param_1,int param_2)

{
  FUN_14104c46a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14104c46a FUN_14104c46a body=230 status=ok
// SIG undefined FUN_14104c46a(void)

void FUN_14104c46a(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  longlong *plVar4;
  
  *param_1 = &PTR_FUN_14b5c73c0;
  FUN_1447cd778(param_1[0x1a],*(undefined4 *)(param_1 + 0x1b));
  if (param_1[0x1a] != 0) {
    FUN_1400020a8();
  }
  plVar2 = (longlong *)param_1[0x15];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar2 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*plVar2)(plVar2);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  plVar2 = param_1 + 10;
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)*(byte *)(param_1 + 0xe) * 0x120)
                     );
  if (pcVar3 != (code *)0x0) {
    plVar4 = plVar2;
    if (0x18 < *(ushort *)(param_1 + 0xd)) {
      plVar4 = (longlong *)*plVar2;
    }
    (*pcVar3)(plVar4);
  }
  if (0x18 < *(ushort *)(param_1 + 0xd)) {
    FUN_1400020a8(*plVar2);
  }
  *param_1 = &PTR_FUN_14afff080;
  FUN_1403d9eef(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14104c550 FUN_14104c550 body=45 status=ok
// SIG undefined FUN_14104c550(void)

undefined8 FUN_14104c550(undefined8 param_1,int param_2)

{
  FUN_14104c57e();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x50);
  }
  return param_1;
}



// FUNCTION 14104c57e FUN_14104c57e body=65 status=ok
// SIG undefined FUN_14104c57e(void)

void FUN_14104c57e(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b3c0380;
  plVar3 = (longlong *)param_1[4];
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
                    /* WARNING: Could not recover jumptable at 0x00014104c5bb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14104c5c4 FUN_14104c5c4 body=228 status=ok
// SIG undefined FUN_14104c5c4(void)

longlong FUN_14104c5c4(void)

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
  if (DAT_14cb1ea38 == 0) {
    local_30 = &local_10;
    local_10 = FUN_141030f22;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1463c0cc2;
    local_38 = &LAB_147ea2e7e;
    local_40 = &LAB_145ac7a30;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0x4b8;
    FUN_14081cfa3(L"/Script/AIModule",L"AIController",&DAT_14cb1ea38,FUN_1464287b4);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb1ea38;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14104c6b2 FUN_14104c6b2 body=302 status=ok
// SIG undefined FUN_14104c6b2(void)

undefined8 * FUN_14104c6b2(undefined8 *param_1)

{
  void **ppvVar1;
  void *_Src;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  void *local_48;
  ulonglong uStack_40;
  wchar_t *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140eb1504();
  *param_1 = &PTR_FUN_14b976d70;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0x4000;
  param_1[0xe] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0x1010000010101;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = (void *)0x0;
  uStack_40 = 0;
  local_38 = L"/Script/OakGame.GrenadeBehavior_PayloadSpawnActor";
  local_30 = 0x31;
  FUN_14475bf92(&local_58);
  _Src = local_48;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = (undefined4)local_58;
  *(undefined4 *)((longlong)param_1 + 0x14) = local_58._4_4_;
  *(undefined4 *)(param_1 + 3) = (undefined4)uStack_50;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_50._4_4_;
  ppvVar1 = (void **)(param_1 + 4);
  if (ppvVar1 != &local_48) {
    iVar2 = (int)uStack_40;
    lVar3 = (longlong)(int)uStack_40;
    *(int *)(param_1 + 5) = (int)uStack_40;
    if ((int)uStack_40 == 0 && *(int *)((longlong)param_1 + 0x2c) == 0) {
      *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
    }
    else {
      FUN_1446dd670(ppvVar1,uStack_40 & 0xffffffff);
      if (iVar2 != 0) {
        memcpy(*ppvVar1,_Src,lVar3 * 2);
      }
    }
  }
  if (local_48 != (void *)0x0) {
    FUN_1400020a8();
  }
  *(byte *)(param_1 + 0xf) = *(byte *)(param_1 + 0xf) & 0xc0 | 0x11;
  *(undefined1 *)((longlong)param_1 + 0x9d) = 0;
  *(undefined1 *)((longlong)param_1 + 0x99) = 0;
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14104c7e2 FUN_14104c7e2 body=277 status=ok
// SIG undefined FUN_14104c7e2(void)

undefined8 FUN_14104c7e2(longlong param_1)

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
    if (iVar1 == 2) goto LAB_14104c8f1;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_14104c8f1;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_14104c8f1:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_14104c89f;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5 + (longlong)*(int *)(param_1 + 0x28));
      uVar6 = 1;
      goto LAB_14104c89f;
    }
  }
  uVar6 = 0;
LAB_14104c89f:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14104c8f8 FUN_14104c8f8 body=33 status=ok
// SIG undefined FUN_14104c8f8(void)

void FUN_14104c8f8(longlong param_1)

{
  FUN_14104c91a(param_1 + 0x30);
  FUN_14104cabe(param_1 + 0x30);
  return;
}



// FUNCTION 14104c91a FUN_14104c91a body=397 status=ok
// SIG undefined FUN_14104c91a(void)

void FUN_14104c91a(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
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
  FUN_140d9136e(param_1 + 0x18);
  lVar1 = FUN_14026506e(param_1);
  if (lVar1 != 0) {
    if (DAT_14cba8288 == 0) {
      local_40 = &local_28;
      local_28 = FUN_141864c34;
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
      FUN_1401073f6(lVar1 + 0x9ca0,param_1 + -0x30);
      uVar2 = (**(code **)(*(longlong *)(lVar1 + 0x3a20) + 0x10))(lVar1 + 0x3a20);
      if (*(longlong *)(param_1 + 0x50) != 0) {
        FUN_14480f766(uVar2);
      }
      *(undefined8 *)(param_1 + 0x50) = 0;
    }
  }
  lVar1 = FUN_140495e96(param_1);
  if (lVar1 != 0) {
    lVar1 = FUN_1403ca91c(lVar1);
    if (lVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_98);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14104cabe FUN_14104cabe body=3224 status=ok
// SIG undefined FUN_14104cabe(void)

void FUN_14104cabe(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  code *pcVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 uVar13;
  longlong *plVar14;
  undefined4 *puVar15;
  longlong lVar16;
  int iVar17;
  longlong lVar18;
  bool bVar19;
  undefined1 auStack_198 [32];
  undefined4 local_178;
  undefined4 local_170;
  undefined4 local_168;
  undefined8 local_160;
  undefined2 *local_158;
  undefined1 *local_150;
  undefined1 *local_148;
  undefined8 *local_140;
  undefined1 *local_138;
  code *local_130;
  undefined8 local_120;
  undefined8 local_118;
  int iStack_110;
  undefined2 uStack_10c;
  undefined2 uStack_10a;
  undefined6 local_108;
  wchar_t awStack_102 [5];
  undefined8 local_f8;
  undefined4 local_f0;
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_74;
  undefined4 local_6c;
  undefined8 local_60;
  undefined4 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_198;
  lVar11 = FUN_14026506e();
  if (lVar11 != 0) {
    if (DAT_14cba8288 == 0) {
      local_140 = &local_118;
      local_118 = FUN_141864c34;
      local_130 = FUN_14081d0ea;
      local_138 = &LAB_1464cee30;
      local_148 = &LAB_148bfac22;
      local_150 = &LAB_140f21842;
      local_158 = &DAT_149e063b2;
      local_160 = 0;
      local_168 = 0x10000004;
      local_170 = 0x10;
      local_178 = 0x9cd0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
    }
    if ((*(int *)(DAT_14cba8288 + 0x38) <= *(int *)(*(longlong *)(lVar11 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) == DAT_14cba8288 + 0x30)) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14cbd8c38) && (FUN_144b3d300(&DAT_14cbd8c38), DAT_14cbd8c38 == -1))
      {
        local_108 = 0x630065006a;
        builtin_wcsncpy(awStack_102,L"ted",4);
        local_118 = (code *)0x6f004d006e004f;
        iStack_110._0_2_ = L'v';
        iStack_110._2_2_ = L'e';
        uStack_10c = 0x52;
        uStack_10a = 0x65;
        FUN_1446f470e(&DAT_14cbd8c30,&local_118,1);
        _Init_thread_footer(&DAT_14cbd8c38);
      }
      lVar12 = DAT_14cbd8c30;
      local_118._0_4_ = 0;
      iStack_110 = 0;
      uStack_10c = 0;
      uStack_10a = 0;
      if (param_1 == 0x30) {
        iVar9 = 0;
        uVar1 = (uint)local_118;
      }
      else {
        uVar1 = *(uint *)(param_1 + -0x24);
        local_118 = (code *)(ulonglong)uVar1;
        if ((int)uVar1 < DAT_14c9647dc) {
          lVar18 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
        }
        else {
          lVar18 = 0;
        }
        iVar9 = *(int *)(lVar18 + 0x10);
        if (*(int *)(lVar18 + 0x10) == 0) {
          LOCK();
          iVar9 = DAT_14c964868 + 1;
          UNLOCK();
          iVar10 = DAT_14c964868 + 1;
          bVar19 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar9;
          if (bVar19) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar10);
          }
          LOCK();
          iVar9 = *(int *)(lVar18 + 0x10);
          bVar19 = iVar9 == 0;
          if (bVar19) {
            *(int *)(lVar18 + 0x10) = iVar10;
            iVar9 = 0;
          }
          UNLOCK();
          uVar1 = (uint)local_118;
          if (bVar19) {
            iVar9 = iVar10;
          }
        }
      }
      local_118._0_4_ = uVar1;
      local_118 = (code *)CONCAT44(iVar9,(uint)local_118);
      iStack_110 = (int)lVar12;
      uStack_10c = (undefined2)((ulonglong)lVar12 >> 0x20);
      uStack_10a = (undefined2)((ulonglong)lVar12 >> 0x30);
      if ((lVar12 != 0) && (lVar12 = FUN_14479d2ce(&local_118), lVar12 != 0)) {
        FUN_1400796d0(*(undefined8 *)(lVar12 + 0x10),
                      CONCAT26(uStack_10a,CONCAT24(uStack_10c,iStack_110)),1);
      }
      FUN_14053c012(lVar11 + 0x9ca0,&local_118);
      if (*(longlong *)(param_1 + 0x50) == 0) {
        uVar13 = FUN_1403c7982();
        plVar14 = (longlong *)FUN_144718840(lVar11,uVar13);
        if (plVar14 != (longlong *)0x0) {
          plVar14 = (longlong *)(**(code **)(*plVar14 + 0x10))(plVar14);
          local_118 = (code *)0x0;
          iStack_110 = 0;
          FUN_1446efa72(&local_118,0,3,0x10);
          pcVar7 = local_118;
          iStack_110 = 3;
          *(undefined ***)local_118 = &PTR_LAB_14b3f7890;
          LOCK();
          UNLOCK();
          lVar18 = DAT_14c758608 + 1;
          lVar12 = DAT_14c758608 + 1;
          if (lVar18 == 0) {
            LOCK();
            UNLOCK();
            lVar18 = DAT_14c758608 + 2;
            lVar12 = DAT_14c758608 + 2;
          }
          DAT_14c758608 = lVar12;
          *(longlong *)(local_118 + 0x10) = lVar18;
          *(undefined ***)local_118 = &PTR_FUN_14b9b79d0;
          *(longlong *)(local_118 + 0x18) = 0;
          iVar9 = 0;
          if (param_1 != 0x30) {
            uVar1 = *(uint *)(param_1 + -0x24);
            *(uint *)(local_118 + 0x18) = uVar1;
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
              iVar10 = DAT_14c964868 + 1;
              bVar19 = DAT_14c964868 < 1000;
              DAT_14c964868 = iVar9;
              if (bVar19) {
                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                              ,iVar10);
              }
              LOCK();
              iVar9 = *(int *)(lVar12 + 0x10);
              bVar19 = iVar9 == 0;
              if (bVar19) {
                *(int *)(lVar12 + 0x10) = iVar10;
                iVar9 = 0;
              }
              UNLOCK();
              if (bVar19) {
                iVar9 = iVar10;
              }
            }
          }
          *(int *)(pcVar7 + 0x1c) = iVar9;
          *(code **)(pcVar7 + 0x20) = FUN_145a9e014;
          *(undefined4 *)(pcVar7 + 0x28) = 0;
          if (((iStack_110 == 0) || (local_118 == (code *)0x0)) ||
             (cVar8 = (**(code **)(*(longlong *)local_118 + 0x30))(), cVar8 == '\0')) {
            if (iStack_110 == 0) {
              uVar13 = 0;
              goto LAB_14104cddb;
            }
            if (local_118 != (code *)0x0) {
              uVar13 = 0;
              (*(code *)**(undefined8 **)local_118)(local_118,0);
              FUN_1446efa72(&local_118,0,0,0x10);
              goto LAB_14104cdc8;
            }
            uVar13 = 0;
          }
          else {
            if (*(int *)((longlong)plVar14 + 0x14) < 1) {
              iVar9 = (int)plVar14[1];
              iVar10 = (int)plVar14[2] + -1;
              *(int *)(plVar14 + 2) = iVar10;
              if (iVar10 <= iVar9) {
                iVar10 = iVar9;
                if (0 < iVar9) {
                  iVar17 = 0;
                  do {
                    if (((*(int *)(*plVar14 + 8 + (longlong)iVar17 * 0x10) == 0) ||
                        (plVar2 = *(longlong **)(*plVar14 + (longlong)iVar17 * 0x10),
                        plVar2 == (longlong *)0x0)) ||
                       (cVar8 = (**(code **)(*plVar2 + 0x28))(), cVar8 != '\0')) {
                      FUN_14005b288(plVar14,iVar17);
                      FUN_14005b248(plVar14);
                    }
                    else {
                      iVar17 = iVar17 + 1;
                    }
                    iVar10 = (int)plVar14[1];
                  } while (iVar17 < iVar10);
                }
                iVar17 = 2;
                if (2 < iVar10 * 2) {
                  iVar17 = iVar10 * 2;
                }
                *(int *)(plVar14 + 2) = iVar17;
                if ((iVar17 < iVar9) && (*(int *)((longlong)plVar14 + 0xc) != iVar10)) {
                  FUN_14045812c();
                }
              }
            }
            uVar13 = 0;
            if ((iStack_110 != 0) && (local_118 != (code *)0x0)) {
              (**(code **)(*(longlong *)local_118 + 0x38))(local_118,&local_120);
              uVar13 = local_120;
            }
            iVar9 = (int)plVar14[1];
            *(uint *)(plVar14 + 1) = iVar9 + 1U;
            if (*(uint *)((longlong)plVar14 + 0xc) < iVar9 + 1U) {
              FUN_1447a71f6(plVar14,iVar9);
            }
            lVar12 = *plVar14;
            lVar18 = (longlong)iVar9 * 0x10;
            *(undefined8 *)(lVar12 + lVar18) = 0;
            *(undefined4 *)(lVar12 + 8 + lVar18) = 0;
            *(code **)(lVar12 + lVar18) = local_118;
            local_118 = (code *)0x0;
            *(int *)(lVar12 + 8 + lVar18) = iStack_110;
LAB_14104cdc8:
            iStack_110 = 0;
LAB_14104cddb:
            if (local_118 != (code *)0x0) {
              FUN_1400020a8();
            }
          }
          *(undefined8 *)(param_1 + 0x50) = uVar13;
        }
      }
      if (*(longlong **)(&DAT_00006850 + lVar11) != (longlong *)0x0) {
        lVar11 = (**(code **)(**(longlong **)(&DAT_00006850 + lVar11) + 0xf30))();
        local_118 = (code *)0x0;
        iStack_110 = 0;
        FUN_14009d848(&local_118,lVar11);
        FUN_1407b7224(&local_108,lVar11 + 0x10);
        local_f8 = 0;
        local_f0 = 0;
        FUN_14009d848(&local_f8,lVar11 + 0x20);
        FUN_1407b7224(local_e8,lVar11 + 0x30);
        local_d8 = *(undefined8 *)(lVar11 + 0x40);
        uStack_d0 = *(undefined8 *)(lVar11 + 0x48);
        local_c8 = *(undefined4 *)(lVar11 + 0x50);
        uStack_c4 = *(undefined4 *)(lVar11 + 0x54);
        uStack_c0 = *(undefined4 *)(lVar11 + 0x58);
        uStack_bc = *(undefined4 *)(lVar11 + 0x5c);
        local_b8 = *(undefined4 *)(lVar11 + 0x60);
        uStack_b4 = *(undefined4 *)(lVar11 + 100);
        uStack_b0 = *(undefined4 *)(lVar11 + 0x68);
        uStack_ac = *(undefined4 *)(lVar11 + 0x6c);
        local_a8 = *(undefined8 *)(lVar11 + 0x70);
        local_80 = 0;
        local_78 = 0;
        local_a0 = 0;
        uStack_98 = 0;
        local_74 = 0xffffffff00000080;
        local_6c = 0;
        local_60 = 0;
        local_58 = 0;
        FUN_140d188f2(&local_a0,lVar11 + 0x78);
        puVar15 = (undefined4 *)FUN_14075fac2(&local_118);
        if (puVar15 != (undefined4 *)0x0) {
          uVar3 = *puVar15;
          uVar4 = puVar15[1];
          uVar5 = puVar15[2];
          uVar6 = puVar15[3];
          uVar13 = *(undefined8 *)(puVar15 + 6);
          *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(puVar15 + 4);
          *(undefined8 *)(param_1 + 0x30) = uVar13;
          *(undefined4 *)(param_1 + 0x18) = uVar3;
          *(undefined4 *)(param_1 + 0x1c) = uVar4;
          *(undefined4 *)(param_1 + 0x20) = uVar5;
          *(undefined4 *)(param_1 + 0x24) = uVar6;
        }
        FUN_140da7f48(&local_118);
      }
    }
  }
  lVar11 = param_1 + 0x18;
  cVar8 = FUN_1403ae288(lVar11);
  if (cVar8 != '\0') {
    if (*(longlong *)(param_1 + 0x38) == 0) {
      lVar18 = FUN_14008e0ae(lVar11);
      local_118 = (code *)0x0;
      iStack_110 = 0;
      FUN_1446efa72(&local_118,0,3,0x10);
      pcVar7 = local_118;
      iStack_110 = 3;
      *(undefined ***)local_118 = &PTR_LAB_14b3f76f0;
      LOCK();
      UNLOCK();
      lVar16 = DAT_14c758608 + 1;
      lVar12 = DAT_14c758608 + 1;
      if (lVar16 == 0) {
        LOCK();
        UNLOCK();
        lVar16 = DAT_14c758608 + 2;
        lVar12 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar12;
      *(longlong *)(local_118 + 0x10) = lVar16;
      *(undefined ***)local_118 = &PTR_FUN_14b9b6a50;
      *(longlong *)(local_118 + 0x18) = 0;
      iVar9 = 0;
      if (param_1 != 0x30) {
        uVar1 = *(uint *)(param_1 + -0x24);
        *(uint *)(local_118 + 0x18) = uVar1;
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
          iVar10 = DAT_14c964868 + 1;
          bVar19 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar9;
          if (bVar19) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar10);
          }
          LOCK();
          iVar9 = *(int *)(lVar12 + 0x10);
          bVar19 = iVar9 == 0;
          if (bVar19) {
            *(int *)(lVar12 + 0x10) = iVar10;
            iVar9 = 0;
          }
          UNLOCK();
          if (bVar19) {
            iVar9 = iVar10;
          }
        }
      }
      *(int *)(pcVar7 + 0x1c) = iVar9;
      *(code **)(pcVar7 + 0x20) = FUN_148e5775a;
      *(undefined4 *)(pcVar7 + 0x28) = 0;
      FUN_14104d758(lVar18 + 0x150,&local_120,&local_118);
      if (iStack_110 == 0) {
LAB_14104d00c:
        if (local_118 != (code *)0x0) {
          FUN_1400020a8();
        }
      }
      else if (local_118 != (code *)0x0) {
        (*(code *)**(undefined8 **)local_118)(local_118,0);
        FUN_1446efa72(&local_118,0,0,0x10);
        iStack_110 = 0;
        goto LAB_14104d00c;
      }
      *(undefined8 *)(param_1 + 0x38) = local_120;
    }
    if (*(longlong *)(param_1 + 0x40) == 0) {
      lVar12 = FUN_14008e0ae(lVar11);
      local_118 = (code *)0x0;
      iStack_110 = 0;
      FUN_1446efa72(&local_118,0,3,0x10);
      pcVar7 = local_118;
      iStack_110 = 3;
      *(undefined ***)local_118 = &PTR_LAB_14b3f7900;
      LOCK();
      UNLOCK();
      lVar18 = DAT_14c758608 + 1;
      lVar11 = DAT_14c758608 + 1;
      if (lVar18 == 0) {
        LOCK();
        UNLOCK();
        lVar18 = DAT_14c758608 + 2;
        lVar11 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar11;
      *(longlong *)(local_118 + 0x10) = lVar18;
      *(undefined ***)local_118 = &PTR_FUN_14b9b6ac0;
      *(longlong *)(local_118 + 0x18) = 0;
      iVar9 = 0;
      if (param_1 != 0x30) {
        uVar1 = *(uint *)(param_1 + -0x24);
        *(uint *)(local_118 + 0x18) = uVar1;
        if ((int)uVar1 < DAT_14c9647dc) {
          lVar11 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
        }
        else {
          lVar11 = 0;
        }
        iVar9 = *(int *)(lVar11 + 0x10);
        if (*(int *)(lVar11 + 0x10) == 0) {
          LOCK();
          iVar9 = DAT_14c964868 + 1;
          UNLOCK();
          iVar10 = DAT_14c964868 + 1;
          bVar19 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar9;
          if (bVar19) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar10);
          }
          LOCK();
          iVar9 = *(int *)(lVar11 + 0x10);
          bVar19 = iVar9 == 0;
          if (bVar19) {
            *(int *)(lVar11 + 0x10) = iVar10;
            iVar9 = 0;
          }
          UNLOCK();
          if (bVar19) {
            iVar9 = iVar10;
          }
        }
      }
      *(int *)(pcVar7 + 0x1c) = iVar9;
      *(code **)(pcVar7 + 0x20) = FUN_140b45978;
      *(undefined4 *)(pcVar7 + 0x28) = 0;
      FUN_140e2bd22(lVar12 + 0x138,&local_120,&local_118);
      if (iStack_110 == 0) {
LAB_14104d130:
        if (local_118 != (code *)0x0) {
          FUN_1400020a8();
        }
      }
      else if (local_118 != (code *)0x0) {
        (*(code *)**(undefined8 **)local_118)(local_118,0);
        FUN_1446efa72(&local_118,0,0,0x10);
        iStack_110 = 0;
        goto LAB_14104d130;
      }
      *(undefined8 *)(param_1 + 0x40) = local_120;
    }
  }
  lVar11 = FUN_140495e96(param_1);
  if ((lVar11 != 0) && (lVar11 = FUN_1403ca91c(lVar11), lVar11 != 0)) {
    local_118 = (code *)0x0;
    iStack_110 = 0;
    FUN_1446efa72(&local_118,0,3,0x10);
    pcVar7 = local_118;
    iStack_110 = 3;
    *(undefined ***)local_118 = &PTR_LAB_149e020b0;
    LOCK();
    UNLOCK();
    lVar18 = DAT_14c758608 + 1;
    lVar12 = DAT_14c758608 + 1;
    if (lVar18 == 0) {
      LOCK();
      UNLOCK();
      lVar18 = DAT_14c758608 + 2;
      lVar12 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar12;
    *(longlong *)(local_118 + 0x10) = lVar18;
    *(undefined ***)local_118 = &PTR_FUN_14b9b7a40;
    *(longlong *)(local_118 + 0x18) = 0;
    iVar9 = 0;
    if (param_1 != 0x30) {
      uVar1 = *(uint *)(param_1 + -0x24);
      *(uint *)(local_118 + 0x18) = uVar1;
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
        iVar10 = DAT_14c964868 + 1;
        bVar19 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar9;
        if (bVar19) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar10);
        }
        LOCK();
        iVar9 = *(int *)(lVar12 + 0x10);
        bVar19 = iVar9 == 0;
        if (bVar19) {
          *(int *)(lVar12 + 0x10) = iVar10;
          iVar9 = 0;
        }
        UNLOCK();
        if (bVar19) {
          iVar9 = iVar10;
        }
      }
    }
    *(int *)(pcVar7 + 0x1c) = iVar9;
    *(code **)(pcVar7 + 0x20) = FUN_14104c8f8;
    *(undefined4 *)(pcVar7 + 0x28) = 0;
    FUN_1448b6402(lVar11 + 0x78,&local_120,&local_118);
    if (iStack_110 != 0) {
      if (local_118 == (code *)0x0) goto LAB_14104d270;
      (*(code *)**(undefined8 **)local_118)(local_118,0);
      FUN_1446efa72(&local_118,0,0,0x10);
      iStack_110 = 0;
    }
    if (local_118 != (code *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_14104d270:
  if ((local_48 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14104d758 FUN_14104d758 body=370 status=ok
// SIG undefined FUN_14104d758(void)

undefined8 * FUN_14104d758(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 14104d8d8 FUN_14104d8d8 body=170 status=ok
// SIG undefined FUN_14104d8d8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14104d8d8(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14b7bd2a0;
  FUN_14104d982(param_1[3],*(undefined4 *)(param_1 + 4));
  if (param_1[3] != 0) {
    FUN_1400020a8();
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



// FUNCTION 14104d982 FUN_14104d982 body=105 status=ok
// SIG undefined FUN_14104d982(void)

void FUN_14104d982(longlong param_1,int param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if (param_2 != 0) {
    puVar3 = (undefined8 *)(param_1 + 0x20);
    do {
      pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 +
                         (ulonglong)((uint)*(byte *)(puVar3 + 4) * 0x120));
      if (pcVar1 != (code *)0x0) {
        puVar2 = puVar3;
        if (0x18 < *(ushort *)(puVar3 + 3)) {
          puVar2 = (undefined8 *)*puVar3;
        }
        (*pcVar1)(puVar2);
      }
      if (0x18 < *(ushort *)(puVar3 + 3)) {
        FUN_1400020a8(*puVar3);
      }
      puVar3 = puVar3 + 10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14104d9eb FUN_14104d9eb body=477 status=ok
// SIG undefined FUN_14104d9eb(void)

void FUN_14104d9eb(void)

{
  ulonglong uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  undefined4 *puVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  undefined1 auStack_78 [40];
  ulonglong local_50;
  undefined4 *local_48;
  undefined8 local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  DAT_14cc26590 = DAT_14c872be0;
  local_50 = 0x100000000;
  local_48 = &DAT_14cc26550;
  local_40 = 0xffffffff;
  local_38 = 0;
  if (DAT_14cc26568 == 0) {
    uVar14 = 1;
    local_40._0_4_ = 0xffffffff;
    local_40._4_4_ = 0;
    local_50._0_4_ = 0;
  }
  else {
    FUN_1449c0562(&local_50);
    uVar14 = local_50 >> 0x20;
  }
  puVar3 = local_48;
  iVar4 = local_48[6];
  lVar7 = DAT_14cc26540;
  iVar8 = (int)local_50;
  uVar9 = (uint)local_40;
  iVar10 = local_38;
  iVar6 = local_40._4_4_;
  if (local_40._4_4_ < iVar4) {
    do {
      iVar2 = *(int *)(lVar7 + 4 + (longlong)iVar6 * 0x20);
      if ((iVar2 != 0) &&
         ((((uVar5 = *(uint *)((longlong)iVar6 * 0x20 + lVar7), (int)uVar5 < 0 ||
            (DAT_14c9647dc <= (int)uVar5)) ||
           (lVar13 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8), lVar13 == 0)) ||
          ((*(int *)(lVar13 + 0x10) != iVar2 || ((*(uint *)(lVar13 + 8) & 0x10200000) != 0)))))) {
        FUN_14104dbca();
        iVar4 = puVar3[6];
        lVar7 = DAT_14cc26540;
      }
      uVar9 = uVar9 & ~(uint)uVar14;
      puVar11 = *(undefined4 **)(puVar3 + 4);
      if (*(undefined4 **)(puVar3 + 4) == (undefined4 *)0x0) {
        puVar11 = puVar3;
      }
      lVar13 = (longlong)iVar8;
      uVar5 = puVar11[lVar13] & uVar9;
      if (uVar5 == 0) {
        iVar6 = iVar4 + 0x1e;
        if (-1 < iVar4 + -1) {
          iVar6 = iVar4 + -1;
        }
        iVar6 = iVar6 >> 5;
        iVar2 = iVar6;
        if (iVar6 < iVar8) {
          iVar2 = iVar8;
        }
        if (iVar6 <= iVar8) break;
        lVar12 = 0;
        while( true ) {
          iVar10 = iVar10 + 0x20;
          uVar5 = puVar11[lVar13 + lVar12 + 1];
          if (uVar5 != 0) break;
          lVar12 = lVar12 + 1;
          if (iVar2 - lVar13 == lVar12) goto LAB_14104dba7;
        }
        iVar8 = iVar8 + (int)lVar12 + 1;
        uVar9 = 0xffffffff;
      }
      uVar14 = (ulonglong)(-uVar5 & uVar5);
      uVar1 = uVar14 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      iVar6 = (iVar10 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
    } while (iVar6 < iVar4);
  }
LAB_14104dba7:
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14104dbca FUN_14104dbca body=139 status=ok
// SIG undefined FUN_14104dbca(void)

void FUN_14104dbca(int param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  undefined *puVar4;
  int *piVar5;
  longlong lVar6;
  
  lVar2 = (longlong)param_1 * 0x20;
  puVar4 = &DAT_14cc26578;
  if (DAT_14cc26580 != (undefined *)0x0) {
    puVar4 = DAT_14cc26580;
  }
  lVar6 = (longlong)*(int *)(DAT_14cc26540 + 0x1c + lVar2);
  iVar3 = *(int *)(puVar4 + lVar6 * 4);
  if (iVar3 == param_1) {
    piVar5 = (int *)(puVar4 + lVar6 * 4);
  }
  else {
    do {
      piVar5 = (int *)(DAT_14cc26540 + (longlong)iVar3 * 0x20 + 0x18);
      iVar3 = *piVar5;
    } while (iVar3 != param_1);
  }
  *piVar5 = *(int *)(DAT_14cc26540 + lVar2 + 0x18);
  plVar1 = *(longlong **)(DAT_14cc26540 + 0x10 + lVar2);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    piVar5 = (int *)((longlong)plVar1 + 0xc);
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (*piVar5 == 0) {
      (**(code **)(*plVar1 + 0x10))();
    }
  }
  FUN_14104dc56(param_1);
  return;
}



// FUNCTION 14104dc56 FUN_14104dc56 body=128 status=ok
// SIG undefined FUN_14104dc56(void)

void FUN_14104dc56(int param_1)

{
  byte bVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  
  lVar2 = DAT_14cc26540;
  if (DAT_14cc26574 != 0) {
    *(int *)(DAT_14cc26540 + (longlong)DAT_14cc26570 * 0x20) = param_1;
  }
  *(undefined4 *)(lVar2 + (longlong)param_1 * 0x20) = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14cc26574) {
    iVar4 = DAT_14cc26570;
  }
  *(int *)(lVar2 + 4 + (longlong)param_1 * 0x20) = iVar4;
  DAT_14cc26574 = DAT_14cc26574 + 1;
  puVar3 = &DAT_14cc26550;
  if (DAT_14cc26560 != (undefined4 *)0x0) {
    puVar3 = DAT_14cc26560;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar1 = (byte)param_1 & 0x1f;
  DAT_14cc26570 = param_1;
  puVar3[iVar4 >> 5] = puVar3[iVar4 >> 5] & (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
  return;
}



// FUNCTION 14104dcd6 FUN_14104dcd6 body=484 status=ok
// SIG undefined FUN_14104dcd6(void)

void FUN_14104dcd6(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined4 local_80;
  uint uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_14104e042();
  lVar3 = FUN_1447210f0(param_1);
  if (((lVar3 != 0) && (lVar3 = FUN_1400f6e0c(lVar3), lVar3 != 0)) &&
     (*(longlong *)(lVar3 + 200) != 0)) {
    FUN_14104df36(*(longlong *)(lVar3 + 200),param_1);
  }
  plVar1 = (longlong *)(param_1 + 0x2680);
  iVar6 = *(int *)(param_1 + 0x26c8);
  if (iVar6 < 2) {
    lVar3 = param_1 + 0x26b8;
    if (*(longlong *)(param_1 + 0x26c0) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x26c0);
    }
    iVar5 = iVar6 + 3;
    if (-1 < iVar6) {
      iVar5 = iVar6;
    }
    if (*(int *)(param_1 + 0x2688) - *(int *)(param_1 + 0x26b4) < iVar5 >> 2) {
      lVar4 = param_1 + 0x2690;
      local_60 = 0x100000000;
      local_50 = 0xffffffff;
      uStack_48 = 0;
      uStack_58 = lVar4;
      if (*(int *)(param_1 + 0x26a8) == 0) {
        iVar6 = 0;
      }
      else {
        FUN_1449c0562(&local_60);
        iVar6 = *(int *)(param_1 + 0x26a8);
      }
      local_80 = (undefined4)local_60;
      uStack_7c = local_60._4_4_;
      uStack_78 = (undefined4)uStack_58;
      uStack_74 = uStack_58._4_4_;
      uStack_68 = CONCAT44(uStack_44,uStack_48);
      local_70 = local_50;
      uVar2 = local_70;
      local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
      iVar5 = local_70._4_4_;
      local_88 = plVar1;
      if ((local_70._4_4_ != iVar6) || (local_70 = local_50, uStack_58 != lVar4)) {
        do {
          local_70 = uVar2;
          *(undefined4 *)(lVar3 + (longlong)*(int *)(*local_88 + 0x24 + (longlong)iVar5 * 0x28) * 4)
               = 0xffffffff;
          local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~uStack_7c);
          FUN_1449c0562(&local_80);
          iVar5 = local_70._4_4_;
          uVar2 = local_70;
        } while (local_88 != plVar1 ||
                 (CONCAT44(uStack_74,uStack_78) != lVar4 || local_70._4_4_ != iVar6));
      }
    }
    else if (iVar6 == 1) {
      lVar4 = 0;
      do {
        *(undefined4 *)(lVar3 + lVar4 * 4) = 0xffffffff;
        lVar4 = lVar4 + 1;
      } while (lVar4 < *(int *)(param_1 + 0x26c8));
    }
    FUN_14104debc(plVar1,0);
  }
  else {
    FUN_14104debc(plVar1,0);
    *(undefined4 *)(param_1 + 0x26c8) = 1;
    FUN_141297a5e(plVar1);
  }
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  FUN_140d6119a(param_1,param_2);
  return;
}



// FUNCTION 14104debc FUN_14104debc body=121 status=ok
// SIG undefined FUN_14104debc(void)

void FUN_14104debc(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_140549ad6(param_1,param_2);
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



// FUNCTION 14104df36 FUN_14104df36 body=267 status=ok
// SIG undefined FUN_14104df36(void)

void FUN_14104df36(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  
  iVar1 = *(int *)(param_1 + 0x40);
  lVar6 = (longlong)iVar1;
  if (lVar6 == 0) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 0x38);
  lVar4 = lVar6 * 8;
  lVar5 = 0;
  while (*(longlong *)((longlong)plVar2 + lVar5) != param_2) {
    lVar5 = lVar5 + 8;
    if (lVar4 - lVar5 == 0) {
      return;
    }
  }
  lVar5 = 0;
  do {
    if (plVar2[lVar5] == param_2) goto LAB_14104df8e;
    lVar5 = lVar5 + 1;
    lVar4 = lVar4 + -8;
  } while (lVar4 != 0);
  lVar5 = 0xffffffff;
LAB_14104df8e:
  iVar8 = *(int *)(param_1 + 0x48);
  if ((int)lVar5 <= iVar8) {
    iVar7 = 1;
    if (1 < iVar8) {
      iVar7 = iVar8;
    }
    *(int *)(param_1 + 0x48) = iVar7 + -1;
  }
  iVar7 = 0;
  bVar11 = *plVar2 == param_2;
  iVar8 = 0;
  do {
    lVar5 = (longlong)iVar8;
    iVar9 = iVar8;
    lVar4 = lVar5;
    iVar3 = iVar8 + 1;
    if (iVar8 + 1 < iVar1) {
      iVar3 = iVar1;
    }
    do {
      lVar4 = lVar4 + 1;
      iVar10 = iVar3;
      if (lVar6 <= lVar4) break;
      iVar9 = iVar9 + 1;
      iVar10 = iVar9;
    } while (bVar11 == (plVar2[lVar4] == param_2));
    if (bVar11 == false) {
      if (iVar7 != iVar8) {
        memmove(plVar2 + iVar7,plVar2 + lVar5,(longlong)(iVar10 - iVar8) << 3);
      }
      iVar7 = iVar7 + (iVar10 - iVar8);
    }
    bVar11 = (bool)(bVar11 ^ 1);
    iVar8 = iVar10;
    if (lVar6 <= lVar4) {
      *(int *)(param_1 + 0x40) = iVar7;
      return;
    }
  } while( true );
}



// FUNCTION 14104e042 FUN_14104e042 body=845 status=ok
// SIG undefined FUN_14104e042(void)

void FUN_14104e042(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined1 *puVar5;
  void *pvVar6;
  int iVar7;
  undefined1 auStack_f8 [40];
  void **local_d0;
  undefined8 local_c8;
  undefined1 *local_c0;
  uint local_b8;
  int iStack_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined1 *local_a0;
  uint local_98;
  int iStack_94;
  undefined4 local_90;
  undefined4 local_8c;
  void *local_88;
  undefined8 uStack_80;
  undefined1 local_78 [16];
  undefined1 *local_68;
  int local_60;
  undefined8 local_5c;
  undefined4 local_54;
  undefined1 local_50 [8];
  undefined1 *local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_68 = (undefined1 *)0x0;
  local_60 = 0;
  local_88 = (void *)0x0;
  uStack_80 = 0;
  local_5c = 0xffffffff00000080;
  local_54 = 0;
  local_48 = (undefined1 *)0x0;
  local_40 = 0;
  if (&local_88 == (void **)(param_1 + 0x2610)) goto LAB_14104e14e;
  iVar7 = *(int *)(param_1 + 0x2658);
  if ((ulonglong)(longlong)iVar7 < 2) {
    if (iVar7 != 0) goto LAB_14104e240;
  }
  else {
    FUN_1446efa72(&local_48,0,iVar7,4);
LAB_14104e240:
    puVar5 = local_50;
    if (local_48 != (undefined1 *)0x0) {
      puVar5 = local_48;
    }
    pvVar6 = (void *)(param_1 + 0x2648);
    if (*(void **)(param_1 + 0x2650) != (void *)0x0) {
      pvVar6 = *(void **)(param_1 + 0x2650);
    }
    memcpy(puVar5,pvVar6,(longlong)iVar7 << 2);
  }
  uVar1 = *(uint *)(param_1 + 0x2618);
  local_40 = iVar7;
  FUN_14104e3c8(&local_88,uVar1);
  iVar7 = (int)uStack_80;
  uStack_80 = CONCAT44(uStack_80._4_4_,(int)uStack_80 + uVar1);
  if ((uint)(uStack_80._4_4_ - iVar7) < uVar1) {
    FUN_1403951a8(&local_88);
  }
  local_5c = CONCAT44(*(undefined4 *)(param_1 + 0x2640),(int)local_5c);
  local_54 = *(undefined4 *)(param_1 + 0x2644);
  iVar7 = *(int *)(param_1 + 0x2638);
  uVar2 = iVar7 + 0x1fU & 0xffffffe0;
  local_60 = 0;
  if (((int)local_5c < (int)uVar2) || (0x80 < (int)local_5c)) {
    uVar4 = 0x80;
    if (0x80 < (int)uVar2) {
      uVar4 = uVar2;
    }
    local_5c = CONCAT44(*(undefined4 *)(param_1 + 0x2640),uVar4);
    FUN_1446efbd8(local_78,0);
    iVar7 = *(int *)(param_1 + 0x2638);
  }
  local_60 = iVar7;
  if (iVar7 != 0) {
    pvVar6 = (void *)(param_1 + 0x2620);
    if (*(void **)(param_1 + 0x2630) != (void *)0x0) {
      pvVar6 = *(void **)(param_1 + 0x2630);
    }
    puVar5 = local_78;
    if (local_68 != (undefined1 *)0x0) {
      puVar5 = local_68;
    }
    memcpy(puVar5,pvVar6,(ulonglong)(iVar7 + 0x1fU >> 3 & 0xfffffffc));
  }
  if (uVar1 != 0) {
    memcpy(local_88,*(void **)(param_1 + 0x2610),(longlong)(int)uVar1 * 0x18);
  }
LAB_14104e14e:
  local_a8 = 0x100000000;
  local_98 = 0xffffffff;
  iStack_94 = 0;
  local_90 = 0;
  iVar7 = 0;
  local_a0 = local_78;
  if (local_60 != 0) {
    FUN_1449c0562(&local_a8);
    iVar7 = local_60;
  }
  local_b8 = local_98;
  iStack_b4 = iStack_94;
  local_b0 = local_90;
  local_ac = local_8c;
  local_c8 = local_a8;
  local_c0 = local_a0;
  local_d0 = &local_88;
  if ((iStack_94 != iVar7) || (local_a0 != local_78)) {
    do {
      do {
        uVar3 = FUN_14479d2ce((void *)((longlong)iStack_b4 * 0x18 + (longlong)*local_d0));
        FUN_148cf1a98(param_1,uVar3);
        local_b8 = local_b8 & ~local_c8._4_4_;
        FUN_1449c0562(&local_c8);
      } while (iStack_b4 != iVar7);
    } while ((local_c0 != local_78) || (local_d0 != &local_88));
  }
  local_40 = 0;
  if (local_48 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_14104e390(&local_88);
  if ((local_38 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14104e390 FUN_14104e390 body=55 status=ok
// SIG undefined FUN_14104e390(void)

void FUN_14104e390(longlong *param_1)

{
  FUN_14104e3c8(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14104e3c8 FUN_14104e3c8 body=123 status=ok
// SIG undefined FUN_14104e3c8(void)

void FUN_14104e3c8(longlong param_1,int param_2)

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



// FUNCTION 14104e444 FUN_14104e444 body=103 status=ok
// SIG undefined FUN_14104e444(void)

ulonglong FUN_14104e444(longlong param_1)

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
LAB_14104e48e:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_14104e48e;
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



// FUNCTION 14104e4ac FUN_14104e4ac body=2954 status=ok
// SIG undefined FUN_14104e4ac(void)

void FUN_14104e4ac(longlong param_1,longlong param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  wchar_t *pwVar8;
  undefined4 uVar9;
  undefined8 unaff_RBP;
  undefined7 uVar10;
  wchar_t *pwVar11;
  wchar_t *pwVar12;
  byte *pbVar13;
  undefined1 auStack_558 [32];
  byte *local_538;
  undefined8 local_530;
  undefined8 uStack_528;
  longlong local_520;
  undefined8 uStack_518;
  longlong local_510 [2];
  undefined8 local_500;
  undefined8 uStack_4f8;
  longlong local_4f0;
  undefined8 local_4e8;
  undefined8 local_4e0;
  undefined4 local_4d8;
  undefined8 local_4d0;
  undefined4 local_4c8;
  undefined4 local_4c0;
  undefined4 uStack_4bc;
  undefined4 uStack_4b8;
  undefined4 uStack_4b4;
  undefined1 local_4a0;
  undefined8 local_498 [2];
  longlong local_488;
  undefined1 local_478 [32];
  byte local_458;
  longlong local_450;
  undefined8 uStack_448;
  undefined1 local_430;
  undefined8 local_428 [2];
  longlong local_418;
  undefined1 local_408 [32];
  byte local_3e8;
  undefined4 local_3e0;
  undefined4 uStack_3dc;
  undefined4 uStack_3d8;
  undefined4 uStack_3d4;
  undefined1 local_3c0;
  byte local_3b8 [32];
  undefined1 local_398;
  byte local_390 [32];
  undefined1 local_370;
  undefined1 local_368 [32];
  undefined1 local_348;
  byte local_340 [32];
  undefined1 local_320;
  byte local_318 [32];
  undefined1 local_2f8;
  undefined1 local_2f0 [32];
  undefined1 local_2d0;
  byte local_2c8 [32];
  undefined1 local_2a8;
  byte local_2a0 [32];
  byte local_280 [32];
  byte local_260 [120];
  undefined1 local_1e8 [32];
  undefined1 local_1c8;
  longlong local_1c0;
  char local_1b8;
  longlong local_1b0;
  undefined1 local_1a0 [32];
  byte local_180;
  undefined1 local_178 [144];
  char local_e8;
  undefined7 uStack_e7;
  undefined1 local_e0 [16];
  longlong local_d0;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_558;
  cVar4 = (**(code **)(**(longlong **)(param_1 + 0x40) + 0x28))();
  if (cVar4 == '\0') goto LAB_14104e55d;
  iVar1 = *(int *)(param_2 + 4);
  lVar6 = param_2 + 8;
  if (1 < iVar1) {
    lVar6 = *(longlong *)(param_2 + 0x18);
  }
  if (0 < *(int *)(param_2 + 0x24)) {
    lVar6 = *(longlong *)(param_2 + 0x18);
  }
  if (iVar1 == 4) {
    if ((*(int *)(lVar6 + 0x24) != (int)DAT_14cb88978) || (*(int *)(lVar6 + 0x2c) != DAT_14cb88980))
    goto LAB_14104e55d;
    lVar2 = *param_3;
    bVar3 = false;
    uVar10 = 0;
    if ((lVar2 != DAT_14cb88920) && ((lVar2 != DAT_14cb88928 && (lVar2 != DAT_14cb888d0))))
    goto LAB_14104e55d;
  }
  else {
    if ((iVar1 != 5) ||
       ((*(int *)(lVar6 + 0x30) != (int)DAT_14cb88978 || (*(int *)(lVar6 + 0x38) != DAT_14cb88980)))
       ) goto LAB_14104e55d;
    lVar2 = *param_3;
    uVar10 = (undefined7)((ulonglong)unaff_RBP >> 8);
    bVar3 = true;
    if ((lVar2 != DAT_14cb88970) && ((lVar2 != DAT_14cb88930 && (lVar2 != DAT_14cb88950))))
    goto LAB_14104e55d;
  }
  local_4d8 = *(undefined4 *)(lVar6 + 0x20);
  local_4e0 = *(undefined8 *)(lVar6 + 0x18);
  local_4d0 = local_4e0;
  local_4c8 = local_4d8;
  FUN_1448075d0(&local_e8);
  plVar5 = (longlong *)FUN_14060eaf6(&local_e8);
  if (local_d0 != 0) {
    FUN_1400020a8();
  }
  if ((plVar5 == (longlong *)0x0) || (cVar4 = (**(code **)(*plVar5 + 0x50))(plVar5), cVar4 != '\0'))
  goto LAB_14104e55d;
  local_4e8 = 0;
  FUN_14104f038(plVar5 + 0x9e,&local_4f0);
  if (bVar3) {
    if (local_4f0 != DAT_14cbcdd98) goto LAB_14104e55d;
    FUN_140e3418c(lVar6 + 0x24,&local_e8,1);
    local_4e8 = CONCAT71(uStack_e7,local_e8);
    FUN_1401533ba(&local_e8,local_178,1);
    lVar6 = FUN_1406b1d14(plVar5,&local_e8);
    if ((lVar6 != 0) && (*(char *)(lVar6 + 0x3ab) != '\0')) goto LAB_14104e55d;
    lVar6 = *param_3;
    uVar9 = (undefined4)CONCAT71(uVar10,2);
    if (lVar6 == DAT_14cb88930) goto LAB_14104e8ac;
    if (lVar6 == DAT_14cb88970) {
      pwVar12 = L"Completed";
    }
    else {
      if (lVar6 != DAT_14cb88950) goto LAB_14104e55d;
      pwVar12 = L"Failed";
    }
  }
  else {
    lVar6 = *param_3;
    if (lVar6 == DAT_14cb88928) {
      if (local_4f0 == DAT_14cbcdd98) {
        FUN_140e3418c(&local_4d0,local_428,1);
        local_1c8 = 0;
        FUN_140aec01a(local_1e8,local_428[0]);
        local_538 = local_1e8;
        FUN_140d767d6(&local_1c0,&DAT_14cb71db0,2,L"MainStoryActive");
        if ((*(longlong *)(local_1c0 + 0x3c) == 0) || (*(char *)(local_1c0 + 0x38) < local_1b8)) {
          FUN_140e3418c(&local_4d0,&local_500,1);
          local_2a8 = 0;
          FUN_140aec01a(local_2c8,local_500);
          pbVar13 = local_2a0;
          local_538 = local_2c8;
          FUN_140d767d6(pbVar13,&DAT_14cb71db0,2,L"MainStoryActive");
          bVar3 = false;
          uVar10 = 0;
        }
        else {
          bVar3 = true;
          FUN_140e3418c(&local_4d0,local_498,1);
          local_260[0x28] = 0;
          FUN_140aec01a(local_260 + 8,local_498[0]);
          pbVar13 = local_260 + 0x30;
          local_538 = local_260 + 8;
          FUN_140d767d6(pbVar13,&DAT_14cb71db0,2,L"MainStoryActive");
        }
        FUN_140d76846(local_178,pbVar13);
        FUN_14027c224(&local_e8,local_178);
        uVar7 = FUN_1457e3f8e(param_1);
        if (local_e8 == '\x01') {
          FUN_140f3f840(local_e0,uVar7);
        }
        FUN_14027c198(&local_e8);
        FUN_1404eeb8e(local_178);
        if (bVar3) {
          pbVar13 = local_260 + 0x50;
        }
        else {
          pbVar13 = local_280;
        }
        (*(code *)(&PTR_FUN_14a1842f0)[pbVar13[0x20]])(pbVar13);
        if (*(longlong *)(pbVar13 + -0x10) != 0) {
          FUN_1400020a8();
        }
        (*(code *)(&PTR_FUN_14a1842f0)[local_180])(local_1a0);
        if (local_1b0 != 0) {
          FUN_1400020a8();
        }
        uVar9 = (undefined4)CONCAT71(uVar10,2);
LAB_14104e8ac:
        pwVar12 = L"Active";
        goto LAB_14104e8b3;
      }
      pwVar11 = L"Active";
LAB_14104eb2b:
      pwVar8 = pwVar11;
      if (local_4f0 == DAT_14cbcdda8) {
        uVar9 = (undefined4)CONCAT71(uVar10,3);
        if (lVar6 == DAT_14cb88920) {
          FUN_140e3418c(&local_4d0,local_428,1);
          local_348 = 0;
          FUN_140aec01a(local_368,local_428[0]);
          local_538 = local_368;
          FUN_140d767d6(&local_1c0,&DAT_14cb71db0,3,L"SideMissionComplete");
          if ((*(longlong *)(local_1c0 + 0x3c) == 0) || (*(char *)(local_1c0 + 0x38) < local_1b8)) {
            FUN_140e3418c(&local_4d0,&local_500,1);
            local_398 = 0;
            FUN_140aec01a(local_3b8,local_500);
            pbVar13 = local_2a0;
            local_538 = local_3b8;
            FUN_140d767d6(pbVar13,&DAT_14cb71db0,3,L"SideMissionComplete");
            bVar3 = false;
            uVar10 = 0;
          }
          else {
            bVar3 = true;
            FUN_140e3418c(&local_4d0,local_498,1);
            local_370 = 0;
            FUN_140aec01a(local_390,local_498[0]);
            pbVar13 = local_260 + 0x30;
            local_538 = local_390;
            FUN_140d767d6(pbVar13,&DAT_14cb71db0,3,L"SideMissionComplete");
          }
          FUN_140d76846(local_178,pbVar13);
          FUN_14027c224(&local_e8,local_178);
          uVar7 = FUN_1457e3f8e(param_1);
          if (local_e8 == '\x01') {
            FUN_140f3f840(local_e0,uVar7);
          }
          FUN_14027c198(&local_e8);
          FUN_1404eeb8e(local_178);
          if (bVar3) {
            pbVar13 = local_260 + 0x50;
          }
          else {
            pbVar13 = local_280;
          }
          (*(code *)(&PTR_FUN_14a1842f0)[pbVar13[0x20]])(pbVar13);
          if (*(longlong *)(pbVar13 + -0x10) != 0) {
            FUN_1400020a8();
          }
          (*(code *)(&PTR_FUN_14a1842f0)[local_180])(local_1a0);
          if (local_1b0 != 0) {
            FUN_1400020a8();
          }
          uVar9 = (undefined4)CONCAT71(uVar10,3);
        }
      }
      else {
        uVar9 = (undefined4)CONCAT71(uVar10,3);
        if ((local_4f0 != DAT_14cbcddd8) && (local_4f0 != DAT_14cbcddb0)) {
          uVar9 = (undefined4)CONCAT71(uVar10,'\x04' - (lVar6 == DAT_14cb88920));
        }
      }
    }
    else {
      pwVar8 = (wchar_t *)0x0;
      if (lVar6 == DAT_14cb888d0) {
        pwVar8 = L"Failed";
      }
      pwVar12 = L"Completed";
      pwVar11 = pwVar8;
      if (lVar6 == DAT_14cb88920) {
        pwVar11 = L"Completed";
      }
      if (local_4f0 != DAT_14cbcdd98) goto LAB_14104eb2b;
      uVar9 = (undefined4)CONCAT71(uVar10,2);
      if (lVar6 == DAT_14cb88920) {
        FUN_140e3418c(&local_4d0,local_428,1);
        local_2d0 = 0;
        FUN_140aec01a(local_2f0,local_428[0]);
        local_538 = local_2f0;
        FUN_140d767d6(&local_1c0,&DAT_14cb71db0,2,L"MainStoryComplete");
        if ((*(longlong *)(local_1c0 + 0x3c) == 0) || (*(char *)(local_1c0 + 0x38) < local_1b8)) {
          FUN_140e3418c(&local_4d0,&local_500,1);
          local_320 = 0;
          FUN_140aec01a(local_340,local_500);
          pbVar13 = local_2a0;
          local_538 = local_340;
          FUN_140d767d6(pbVar13,&DAT_14cb71db0,2,L"MainStoryComplete");
          bVar3 = false;
          uVar10 = 0;
        }
        else {
          bVar3 = true;
          FUN_140e3418c(&local_4d0,local_498,1);
          local_2f8 = 0;
          FUN_140aec01a(local_318,local_498[0]);
          pbVar13 = local_260 + 0x30;
          local_538 = local_318;
          FUN_140d767d6(pbVar13,&DAT_14cb71db0,2,L"MainStoryComplete");
        }
        FUN_140d76846(local_178,pbVar13);
        FUN_14027c224(&local_e8,local_178);
        uVar7 = FUN_1457e3f8e(param_1);
        if (local_e8 == '\x01') {
          FUN_140f3f840(local_e0,uVar7);
        }
        FUN_14027c198(&local_e8);
        FUN_1404eeb8e(local_178);
        if (bVar3) {
          pbVar13 = local_260 + 0x50;
        }
        else {
          pbVar13 = local_280;
        }
        (*(code *)(&PTR_FUN_14a1842f0)[pbVar13[0x20]])(pbVar13);
        if (*(longlong *)(pbVar13 + -0x10) != 0) {
          FUN_1400020a8();
        }
        (*(code *)(&PTR_FUN_14a1842f0)[local_180])(local_1a0);
        if (local_1b0 != 0) {
          FUN_1400020a8();
        }
        uVar9 = (undefined4)CONCAT71(uVar10,2);
        goto LAB_14104e8b3;
      }
    }
    pwVar12 = pwVar8;
    if (pwVar8 == (wchar_t *)0x0) goto LAB_14104e55d;
  }
LAB_14104e8b3:
  FUN_1408226d0(&local_4d0,&local_500,1);
  local_538 = (byte *)&local_3e0;
  local_3e0 = (undefined4)local_500;
  uStack_3dc = local_500._4_4_;
  uStack_3d8 = (undefined4)uStack_4f8;
  uStack_3d4 = uStack_4f8._4_4_;
  local_500 = 0;
  uStack_4f8 = 0;
  local_3c0 = 4;
  FUN_140d767d6(&local_1c0,&DAT_14cbc30d0,uVar9,pwVar12);
  if ((*(longlong *)(local_1c0 + 0x3c) == 0) || (*(char *)(local_1c0 + 0x38) < local_1b8)) {
    FUN_1408226d0(&local_4d0,&local_530,1);
    local_538 = (byte *)&local_4c0;
    local_4c0 = (undefined4)local_530;
    uStack_4bc = local_530._4_4_;
    uStack_4b8 = (undefined4)uStack_528;
    uStack_4b4 = uStack_528._4_4_;
    local_530 = 0;
    uStack_528 = 0;
    local_4a0 = 4;
    FUN_140d767d6(local_498,&DAT_14cbc30d0,uVar9,pwVar12);
    FUN_140d76846(local_178,local_498);
    bVar3 = false;
  }
  else {
    uVar7 = FUN_14050cbd4(plVar5);
    FUN_1410a642a(local_510,uVar7);
    bVar3 = true;
    FUN_1408226d0(&local_4d0,&local_520,1);
    local_538 = (byte *)&local_450;
    local_450 = local_520;
    uStack_448 = uStack_518;
    local_520 = 0;
    uStack_518 = 0;
    local_430 = 4;
    FUN_140d767d6(local_428,&DAT_14cbc30d0,uVar9,pwVar12);
    local_538 = (byte *)&local_4f0;
    FUN_14611d41f(local_178,local_428,local_510,&local_4e8);
  }
  FUN_14027c224(&local_e8,local_178);
  uVar7 = FUN_1457e3f8e(param_1);
  if (local_e8 == '\x01') {
    FUN_140f3f840(local_e0,uVar7);
  }
  FUN_14027c198(&local_e8);
  FUN_1404eeb8e(local_178);
  if (bVar3) {
    (*(code *)(&PTR_FUN_14a1842f0)[local_3e8])(local_408);
    if (local_418 != 0) {
      FUN_1400020a8();
    }
    if (local_520 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    (*(code *)(&PTR_FUN_14a1842f0)[local_458])(local_478);
    local_510[0] = local_530;
    if (local_488 != 0) {
      FUN_1400020a8();
      local_510[0] = local_530;
    }
  }
  if (local_510[0] != 0) {
    FUN_1400020a8();
  }
  (*(code *)(&PTR_FUN_14a1842f0)[local_180])(local_1a0);
  if (local_1b0 != 0) {
    FUN_1400020a8();
  }
  if (local_500 != 0) {
    FUN_1400020a8();
  }
LAB_14104e55d:
  if ((local_50 ^ (ulonglong)auStack_558) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14104f038 FUN_14104f038 body=40 status=ok
// SIG undefined FUN_14104f038(void)

void FUN_14104f038(longlong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if ((*param_1 == 0) || ((longlong)(int)param_1[1] == -1)) {
    uVar1 = 0;
  }
  else {
    uVar1 = **(undefined8 **)(*(longlong *)(*param_1 + 0x50) + (longlong)(int)param_1[1] * 8);
  }
  *param_2 = uVar1;
  return;
}



// FUNCTION 14104f060 FUN_14104f060 body=179 status=ok
// SIG undefined FUN_14104f060(void)

undefined8 FUN_14104f060(undefined8 param_1,undefined8 param_2,int *param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined4 local_70;
  int local_68 [6];
  longlong local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_98);
  }
  local_78 = DAT_14cbe6740;
  local_70 = DAT_14cbe6748;
  FUN_1448075d0(local_68);
  iVar1 = *param_3;
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  uVar2 = 3;
  if (iVar1 == local_68[0]) {
    uVar2 = FUN_14104f134(param_1,param_2,param_3,param_4);
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14104f134 FUN_14104f134 body=135 status=ok
// SIG undefined FUN_14104f134(void)

ulonglong FUN_14104f134(undefined8 param_1,longlong param_2,undefined8 param_3,uint *param_4)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  
  uVar1 = *param_4;
  if (*(int *)(param_2 + 0xc4) < *(int *)(param_2 + 0x98)) {
    lVar3 = param_2 + 200;
    if (*(longlong *)(param_2 + 0xd0) != 0) {
      lVar3 = *(longlong *)(param_2 + 0xd0);
    }
    iVar2 = *(int *)(lVar3 + (ulonglong)(*(int *)(param_2 + 0xd8) - 1U & uVar1) * 4);
    if (iVar2 != -1) {
      do {
        lVar3 = *(longlong *)(param_2 + 0x90) + (longlong)iVar2 * 0x38;
        if (*(uint *)(*(longlong *)(param_2 + 0x90) + (longlong)iVar2 * 0x38) == uVar1) {
          if (lVar3 == 0) {
            return 0;
          }
          if ((byte *)(lVar3 + 0x28) == (byte *)0x0) {
            return 0;
          }
          return (ulonglong)*(byte *)(lVar3 + 0x28);
        }
        iVar2 = *(int *)(lVar3 + 0x30);
      } while (iVar2 != -1);
    }
  }
  else if (((uVar1 == 0) || (param_4[1] == 0)) || (uVar1 == DAT_14c948000)) {
    return CONCAT71((uint7)(uint3)(uVar1 >> 8),3);
  }
  return 0;
}



// FUNCTION 14104f1bc FUN_14104f1bc body=143 status=ok
// SIG undefined FUN_14104f1bc(void)

undefined8 *
FUN_14104f1bc(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14104f24c(param_4,&local_28,DAT_14cab58a4);
  *param_2 = local_28;
  param_2[1] = local_20;
  if (local_20 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_20 + 1) = (int)local_20[1] + 1;
    UNLOCK();
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
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14104f24c FUN_14104f24c body=359 status=ok
// SIG undefined FUN_14104f24c(void)

longlong * FUN_14104f24c(undefined8 param_1,longlong *param_2,undefined4 param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined1 auStack_78 [40];
  longlong local_50;
  longlong local_48;
  longlong *local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14104f3b4();
  if (*param_2 != 0) goto LAB_14104f27a;
  local_38 = (longlong *)FUN_1457e4003();
  local_40 = local_38 + 2;
  FUN_1457e4080(&local_40);
  plVar1 = local_38;
  if (local_38 == (longlong *)0x0) {
    *param_2 = (longlong)local_40;
    plVar4 = (longlong *)param_2[1];
    if (plVar4 != (longlong *)0x0) {
      param_2[1] = 0;
LAB_14104f34c:
      LOCK();
      plVar1 = plVar4 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar4)(plVar4);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        *piVar2 = *piVar2 + -1;
        iVar3 = *piVar2;
        UNLOCK();
joined_r0x00014104f37f:
        if (iVar3 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(local_38 + 1) = (int)local_38[1] + 1;
    UNLOCK();
    *param_2 = (longlong)local_40;
    plVar4 = (longlong *)param_2[1];
    if (local_38 == plVar4) {
      LOCK();
      plVar4 = local_38 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*local_38)(local_38);
        LOCK();
        piVar2 = (int *)((longlong)plVar1 + 0xc);
        *piVar2 = *piVar2 + -1;
        iVar3 = *piVar2;
        UNLOCK();
        plVar4 = plVar1;
        goto joined_r0x00014104f37f;
      }
    }
    else {
      param_2[1] = (longlong)local_38;
      if (plVar4 != (longlong *)0x0) goto LAB_14104f34c;
    }
  }
  plVar1 = local_38;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_38 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
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
  (**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,param_3,param_1);
  local_50 = *param_2;
  local_48 = param_2[1];
  if (local_48 != 0) {
    LOCK();
    *(int *)(local_48 + 8) = *(int *)(local_48 + 8) + 1;
    UNLOCK();
  }
  FUN_1457e4122(param_1,param_3,&local_50);
LAB_14104f27a:
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14104f3b4 FUN_14104f3b4 body=181 status=ok
// SIG undefined FUN_14104f3b4(void)

undefined8 * FUN_14104f3b4(longlong param_1,undefined8 *param_2,uint param_3)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  
  uVar3 = *(uint *)(param_1 + 0xf0);
  uVar8 = (ulonglong)uVar3;
  lVar4 = *(longlong *)(param_1 + 0xe8);
  uVar11 = 0;
  if (0 < (int)uVar3) {
    do {
      uVar10 = (int)(uVar8 >> 1) + uVar11;
      uVar9 = (uint)uVar8;
      if (*(uint *)(lVar4 + (ulonglong)uVar10 * 0x18) < param_3) {
        uVar11 = uVar10 + (uVar9 & 1);
      }
      uVar8 = uVar8 >> 1;
    } while (1 < uVar9);
  }
  if (((int)uVar11 < (int)uVar3) && (*(uint *)(lVar4 + (ulonglong)uVar11 * 0x18) <= param_3)) {
    lVar4 = lVar4 + (ulonglong)uVar11 * 0x18;
    puVar7 = (undefined8 *)(lVar4 + 8);
    if (puVar7 != (undefined8 *)0x0) {
      uVar6 = *puVar7;
      plVar5 = *(longlong **)(lVar4 + 0x10);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
        *param_2 = uVar6;
        param_2[1] = plVar5;
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
        LOCK();
        plVar1 = plVar5 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 != 0) {
          return param_2;
        }
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 != 0) {
          return param_2;
        }
        (**(code **)(*plVar5 + 0x10))(plVar5);
        return param_2;
      }
      goto LAB_14104f443;
    }
  }
  uVar6 = 0;
LAB_14104f443:
  *param_2 = uVar6;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 14104f46a FUN_14104f46a body=421 status=ok
// SIG undefined FUN_14104f46a(void)

void FUN_14104f46a(longlong param_1,char param_2,float param_3)

{
  float fVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  float fVar6;
  undefined4 uVar7;
  double dVar8;
  undefined1 auStack_d8 [32];
  undefined1 *local_b8;
  undefined8 *local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  double dStack_90;
  double local_88;
  double dStack_80;
  undefined8 local_78;
  undefined1 local_61;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  iVar2 = *(int *)(param_1 + 0xe8);
  if ((0 < (longlong)iVar2) || (0 < *(int *)(param_1 + 0xd8))) {
    fVar1 = *(float *)(param_1 + 0xf4);
    local_b8 = &local_61;
    local_61 = 1;
    local_b0 = &local_a8;
    local_88 = 0.0;
    dStack_80 = 0.0;
    local_98 = 0;
    dStack_90 = 0.0;
    local_a8 = 0;
    uStack_a0 = 0;
    local_78 = 0;
    if (*(char *)(param_1 + 0xf1) == '\x01') {
      iVar2 = *(int *)(param_1 + 0xd8);
      if ((longlong)iVar2 != 0) {
        lVar3 = *(longlong *)(param_1 + 0xd0);
        lVar4 = 0;
        do {
          FUN_14104f610(&local_b8,*(undefined8 *)(lVar3 + lVar4));
          lVar4 = lVar4 + 8;
        } while ((longlong)iVar2 * 8 != lVar4);
      }
    }
    else if ((*(char *)(param_1 + 0xf1) == '\0') && (iVar2 != 0)) {
      lVar3 = *(longlong *)(param_1 + 0xe0);
      lVar4 = 0;
      do {
        FUN_14104f610(&local_b8,*(undefined8 *)(lVar3 + lVar4));
        lVar4 = lVar4 + 8;
      } while ((longlong)iVar2 * 8 != lVar4);
    }
    if (param_2 == '\0') {
      uVar5 = (undefined4)local_78;
      uVar7 = (undefined4)((ulonglong)local_78 >> 0x20);
    }
    else {
      uVar5 = SUB84(dStack_90,0);
      uVar7 = (undefined4)((ulonglong)dStack_90 >> 0x20);
      dVar8 = local_88;
      if (local_88 <= dStack_80) {
        dVar8 = dStack_80;
      }
      if (dStack_90 <= dVar8) {
        uVar5 = SUB84(dVar8,0);
        uVar7 = (undefined4)((ulonglong)dVar8 >> 0x20);
      }
    }
    fVar6 = (float)(double)CONCAT44(uVar7,uVar5);
    *(float *)(param_1 + 0xf4) = fVar6;
    if (0.0 < fVar6) {
      fVar6 = fVar6 * param_3;
      *(float *)(param_1 + 0xf4) = fVar6;
      if ((*(byte *)(param_1 + 0xf0) & 1) != 0) {
        if ((fVar6 != fVar1) || (NAN(fVar6) || NAN(fVar1))) {
          FUN_1405ff6be(param_1);
        }
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14104f610 FUN_14104f610 body=739 status=ok
// SIG undefined FUN_14104f610(void)

void FUN_14104f610(undefined8 *param_1,longlong param_2)

{
  double dVar1;
  double dVar2;
  undefined8 *puVar3;
  double *pdVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  
  if (param_2 != 0) {
    if (*(char *)*param_1 == '\x01') {
      puVar3 = (undefined8 *)param_1[1];
      puVar3[6] = *(undefined8 *)(param_2 + 400);
      uVar12 = *(undefined8 *)(param_2 + 0x160);
      uVar13 = *(undefined8 *)(param_2 + 0x168);
      uVar14 = *(undefined8 *)(param_2 + 0x170);
      uVar15 = *(undefined8 *)(param_2 + 0x178);
      uVar16 = *(undefined8 *)(param_2 + 0x188);
      puVar3[4] = *(undefined8 *)(param_2 + 0x180);
      puVar3[5] = uVar16;
      puVar3[2] = uVar14;
      puVar3[3] = uVar15;
      *puVar3 = uVar12;
      puVar3[1] = uVar13;
      *(undefined1 *)*param_1 = 0;
    }
    else {
      pdVar4 = (double *)param_1[1];
      dVar20 = *pdVar4;
      dVar1 = pdVar4[1];
      dVar19 = dVar20 + pdVar4[3];
      dVar9 = dVar1 + pdVar4[4];
      dVar2 = pdVar4[2];
      dVar10 = dVar2 + pdVar4[5];
      dVar5 = dVar20 - pdVar4[3];
      dVar18 = dVar1 - pdVar4[4];
      dVar17 = dVar2 - pdVar4[5];
      dVar6 = dVar5;
      if (dVar19 <= dVar5) {
        dVar6 = dVar19;
      }
      dVar7 = dVar18;
      if (dVar9 <= dVar18) {
        dVar7 = dVar9;
      }
      dVar8 = dVar17;
      if (dVar10 <= dVar17) {
        dVar8 = dVar10;
      }
      if (dVar5 <= dVar19) {
        dVar5 = dVar19;
      }
      if (dVar18 <= dVar9) {
        dVar18 = dVar9;
      }
      if (dVar17 <= dVar10) {
        dVar17 = dVar10;
      }
      dVar19 = *(double *)(param_2 + 0x170);
      dVar9 = *(double *)(param_2 + 0x160);
      dVar10 = *(double *)(param_2 + 0x168);
      dVar11 = dVar9 - *(double *)(param_2 + 0x178);
      if (dVar11 <= dVar6) {
        dVar6 = dVar11;
      }
      if (dVar5 <= dVar11) {
        dVar5 = dVar11;
      }
      dVar11 = dVar10 - *(double *)(param_2 + 0x180);
      if (dVar11 <= dVar7) {
        dVar7 = dVar11;
      }
      if (dVar18 <= dVar11) {
        dVar18 = dVar11;
      }
      dVar11 = dVar19 - *(double *)(param_2 + 0x188);
      if (dVar11 <= dVar8) {
        dVar8 = dVar11;
      }
      if (dVar17 <= dVar11) {
        dVar17 = dVar11;
      }
      dVar11 = *(double *)(param_2 + 0x178) + dVar9;
      if (dVar11 <= dVar6) {
        dVar6 = dVar11;
      }
      if (dVar5 <= dVar11) {
        dVar5 = dVar11;
      }
      dVar11 = *(double *)(param_2 + 0x180) + dVar10;
      if (dVar11 <= dVar7) {
        dVar7 = dVar11;
      }
      if (dVar18 <= dVar11) {
        dVar18 = dVar11;
      }
      dVar11 = *(double *)(param_2 + 0x188) + dVar19;
      if (dVar11 <= dVar8) {
        dVar8 = dVar11;
      }
      if (dVar17 <= dVar11) {
        dVar17 = dVar11;
      }
      dVar17 = (dVar17 - dVar8) * 0.5;
      dVar18 = (dVar18 - dVar7) * 0.5;
      dVar5 = (dVar5 - dVar6) * 0.5;
      dVar7 = dVar7 + dVar18;
      dVar6 = dVar6 + dVar5;
      dVar8 = dVar8 + dVar17;
      dVar19 = SQRT((dVar19 - dVar8) * (dVar19 - dVar8) +
                    (dVar9 - dVar6) * (dVar9 - dVar6) + (dVar10 - dVar7) * (dVar10 - dVar7)) +
               *(double *)(param_2 + 400);
      dVar20 = SQRT((dVar2 - dVar8) * (dVar2 - dVar8) +
                    (dVar20 - dVar6) * (dVar20 - dVar6) + (dVar1 - dVar7) * (dVar1 - dVar7)) +
               pdVar4[6];
      *pdVar4 = dVar6;
      pdVar4[1] = dVar7;
      pdVar4[2] = dVar8;
      pdVar4[3] = dVar5;
      pdVar4[4] = dVar18;
      pdVar4[5] = dVar17;
      if (dVar20 <= dVar19) {
        dVar20 = dVar19;
      }
      dVar1 = SQRT(dVar17 * dVar17 + dVar5 * dVar5 + dVar18 * dVar18);
      if (dVar20 <= dVar1) {
        dVar1 = dVar20;
      }
      pdVar4[6] = dVar1;
    }
  }
  return;
}



// FUNCTION 14104f8f4 FUN_14104f8f4 body=280 status=ok
// SIG undefined FUN_14104f8f4(void)

int FUN_14104f8f4(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  bool bVar13;
  
  iVar4 = *(int *)(param_1 + 0x38);
  lVar5 = (longlong)iVar4;
  if (lVar5 == 0) {
    iVar4 = 0;
  }
  else {
    lVar12 = *(longlong *)(param_1 + 0x30);
    if (*(longlong *)(param_1 + 0x30) == 0) {
      lVar12 = param_1;
    }
    iVar3 = 0;
    bVar13 = *(longlong *)(lVar12 + 4) == *(longlong *)*param_2;
    iVar9 = 0;
    do {
      lVar7 = (longlong)iVar9;
      iVar2 = iVar9 + 1;
      if (iVar9 + 1 < iVar4) {
        iVar2 = iVar4;
      }
      plVar6 = (longlong *)(lVar12 + 0x10 + lVar7 * 0xc);
      iVar11 = iVar9;
      lVar8 = lVar7;
      do {
        lVar8 = lVar8 + 1;
        iVar10 = iVar2;
        if (lVar5 <= lVar8) break;
        lVar1 = *plVar6;
        iVar11 = iVar11 + 1;
        plVar6 = (longlong *)((longlong)plVar6 + 0xc);
        iVar10 = iVar11;
      } while (bVar13 == (lVar1 == *(longlong *)*param_2));
      if (bVar13 == false) {
        if (iVar3 != iVar9) {
          memmove((void *)(lVar12 + (longlong)iVar3 * 0xc),(void *)(lVar12 + lVar7 * 0xc),
                  (longlong)(iVar10 - iVar9) * 0xc);
        }
        iVar3 = iVar3 + (iVar10 - iVar9);
      }
      bVar13 = (bool)(bVar13 ^ 1);
      iVar9 = iVar10;
    } while (lVar8 < lVar5);
    *(int *)(param_1 + 0x38) = iVar3;
    iVar4 = iVar4 - iVar3;
  }
  return iVar4;
}



// FUNCTION 14104fa0c FUN_14104fa0c body=290 status=ok
// SIG undefined FUN_14104fa0c(void)

undefined8 FUN_14104fa0c(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_14104fb27;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_14104fb27;
    }
    FUN_140192332(param_1 + 0x18,&local_38,0);
  }
  else {
LAB_14104fb27:
    local_38 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_14104fad2;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5,param_2,param_3);
      uVar6 = 1;
      goto LAB_14104fad2;
    }
  }
  uVar6 = 0;
LAB_14104fad2:
  if ((local_38 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_38);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14104fb30 FUN_14104fb30 body=4693 status=ok
// SIG undefined FUN_14104fb30(void)

void FUN_14104fb30(longlong param_1,undefined8 param_2,byte param_3)

{
  PSRWLOCK SRWLock;
  ulonglong *puVar1;
  byte bVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint *puVar12;
  ulonglong uVar13;
  undefined1 *puVar14;
  undefined8 uVar15;
  longlong lVar16;
  int iVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  int iVar20;
  byte bVar21;
  ulonglong uVar22;
  int iVar23;
  longlong lVar24;
  ulonglong uVar25;
  longlong lVar26;
  uint uVar27;
  uint uVar28;
  int iVar29;
  int iVar30;
  ulonglong uVar31;
  longlong lVar32;
  ulonglong uVar33;
  undefined1 auStack_1e8 [39];
  byte local_1c1;
  ulonglong local_1c0;
  longlong local_1b8;
  ulonglong local_1b0;
  longlong local_1a8;
  undefined8 uStack_1a0;
  undefined1 local_198 [128];
  undefined1 *local_118;
  uint local_110;
  longlong local_108;
  undefined8 uStack_100;
  uint local_f8 [4];
  uint *local_e8;
  int local_e0;
  uint local_dc;
  int iStack_d8;
  int local_d4;
  undefined1 local_d0 [8];
  undefined1 *local_c8;
  uint local_c0;
  longlong local_b8;
  ulonglong uStack_b0;
  uint local_a8 [4];
  uint *local_98;
  uint local_90;
  uint local_8c;
  undefined4 uStack_88;
  undefined4 local_84;
  longlong local_78;
  undefined4 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  if ((DAT_14cb92ed0 != 0) && (DAT_14cb92fb8 != 0)) {
    iVar20 = 0;
    local_98 = (uint *)0x0;
    local_90 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_8c = 0x80;
    uStack_88 = 0xffffffff;
    local_84 = 0;
    local_78 = 0;
    local_70 = 0;
    local_1c1 = param_3;
    local_1b8 = param_1;
    FUN_144a7217e();
    local_e8 = (uint *)0x0;
    local_e0 = 0;
    local_108 = 0;
    uStack_100 = 0;
    local_dc = 0x80;
    iStack_d8 = -1;
    local_d4 = 0;
    local_c8 = (undefined1 *)0x0;
    local_c0 = 0;
    if (local_90 == 0) {
      uVar31 = 1;
      uVar22 = 0;
      uVar9 = 0;
    }
    else {
      puVar12 = local_98;
      if (local_98 == (uint *)0x0) {
        puVar12 = local_a8;
      }
      uVar9 = *puVar12;
      if (uVar9 == 0) {
        iVar20 = local_90 + 0x1e;
        if (-1 < (int)(local_90 - 1)) {
          iVar20 = local_90 - 1;
        }
        uVar22 = 0;
        uVar31 = (ulonglong)(uint)(iVar20 >> 5);
        if (iVar20 >> 5 < 1) {
          uVar31 = uVar22;
        }
        iVar20 = 0;
        do {
          if (uVar31 == uVar22) goto LAB_14104fc86;
          iVar20 = iVar20 + 0x20;
          uVar9 = puVar12[uVar22 + 1];
          uVar22 = uVar22 + 1;
        } while (uVar9 == 0);
      }
      else {
        iVar20 = 0;
        uVar22 = 0;
      }
      uVar31 = (ulonglong)(-uVar9 & uVar9);
      uVar13 = uVar31 * 2 + 1;
      lVar26 = 0x3f;
      if (uVar13 != 0) {
        for (; uVar13 >> lVar26 == 0; lVar26 = lVar26 + -1) {
        }
      }
      uVar9 = (iVar20 - ((uint)lVar26 ^ 0x3f)) + 0x3e;
      if ((int)local_90 <= (int)uVar9) {
        uVar9 = local_90;
      }
    }
    if (uVar9 != local_90) {
      uVar11 = 0xffffffff;
      local_1b0 = (ulonglong)local_90;
      do {
        lVar26 = *(longlong *)(local_b8 + (longlong)(int)uVar9 * 0x10);
        lVar24 = *(longlong *)(lVar26 + 0x78);
        if (lVar24 == 0) {
          uVar15 = FUN_14106339a();
          lVar24 = FUN_14477b664(uVar15);
          *(longlong *)(lVar26 + 0x78) = lVar24;
        }
        plVar5 = (longlong *)(lVar26 + 0x70);
        uVar13 = *(ulonglong *)(lVar26 + 0x80);
        if (uVar13 == 0) {
          if ((lVar24 != 0) && (*plVar5 != 0)) {
            plVar3 = *(longlong **)(lVar24 + 0xb8);
            if ((plVar3 == (longlong *)0x0) ||
               (cVar8 = (**(code **)(*plVar3 + 0x108))(plVar3), cVar8 == '\0')) {
LAB_1410506da:
              *(undefined8 *)(lVar26 + 0x80) = 0;
            }
            else {
              uVar15 = (**(code **)(*plVar3 + 0x110))(plVar3);
              uVar13 = FUN_144aff482(uVar15,plVar5);
              *(ulonglong *)(lVar26 + 0x80) = uVar13;
              if (uVar13 != 0) {
                lVar24 = *(longlong *)(lVar26 + 0x78);
                goto LAB_14104fdb5;
              }
            }
          }
        }
        else {
LAB_14104fdb5:
          if (lVar24 == 0) {
            uVar15 = FUN_14106339a();
            lVar24 = FUN_14477b664(uVar15);
            *(longlong *)(lVar26 + 0x78) = lVar24;
            uVar13 = *(ulonglong *)(lVar26 + 0x80);
            if (uVar13 == 0) {
              if ((lVar24 != 0) && (*plVar5 != 0)) {
                plVar3 = *(longlong **)(lVar24 + 0xb8);
                if ((plVar3 == (longlong *)0x0) ||
                   (cVar8 = (**(code **)(*plVar3 + 0x108))(plVar3), cVar8 == '\0'))
                goto LAB_1410506da;
                uVar15 = (**(code **)(*plVar3 + 0x110))(plVar3);
                uVar13 = FUN_144aff482(uVar15,plVar5);
                *(ulonglong *)(lVar26 + 0x80) = uVar13;
                if (uVar13 != 0) goto LAB_14104fddd;
              }
              goto LAB_141050082;
            }
          }
LAB_14104fddd:
          iVar10 = iStack_d8;
          uVar18 = uStack_100;
          if (*(char *)(uVar13 + 0x6c) == '\0') {
            if (local_d4 == 0) {
              iVar10 = (int)uStack_100;
              uStack_100 = CONCAT44(uStack_100._4_4_,(int)uStack_100 + 1);
              if (uStack_100._4_4_ == iVar10) {
                FUN_1446efaca(&local_108,uVar18 & 0xffffffff);
              }
              iVar23 = local_e0;
              if (local_e0 == 0) {
                iVar29 = -1;
              }
              else {
                iVar29 = local_e0 + 0x1e;
                if (-1 < local_e0 + -1) {
                  iVar29 = local_e0 + -1;
                }
                iVar29 = iVar29 >> 5;
              }
              iVar17 = local_e0 + 1;
              iVar30 = local_e0 + 0x1f;
              if (-1 < local_e0) {
                iVar30 = local_e0;
              }
              if (iVar30 >> 5 == iVar29) {
                local_e0 = iVar17;
              }
              else {
                if ((int)local_dc <= local_e0) {
                  if (local_e0 + 0x20U < 0xa0) {
                    local_dc = 0x80;
                  }
                  else {
                    uVar9 = local_e0 + 0x20U >> 5;
                    if (local_dc + 0x1f < 0xa0) {
                      uVar27 = 4;
                      if (4 < uVar9) {
                        uVar27 = uVar9;
                      }
                    }
                    else {
                      uVar27 = uVar9 + (uVar9 * 3 >> 3) + 0x10;
                    }
                    uVar18 = (ulonglong)(uVar27 * 4);
                    if (DAT_14c872d28 != (longlong *)0x0) {
                      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
                        uVar28 = (uint)(uVar18 + 0xf);
                        if (uVar27 < 0x1ffd) {
                          uVar18 = (ulonglong)
                                   (ushort)(&DAT_14c841d90)
                                           [0x32 - (byte)(&DAT_14c841e00)[uVar18 + 0xf >> 4]];
                        }
                        else {
                          uVar33 = (ulonglong)(uVar28 & 0xfffffff0);
                          if (uVar33 < 0x7ff1) {
                            bVar21 = (&DAT_14c841e00)[uVar28 >> 4];
                            uVar19 = 0x32;
                            if (0x32 < bVar21) {
                              uVar19 = (ulonglong)bVar21;
                            }
                            uVar25 = 0x32 - (ulonglong)bVar21;
                            do {
                              uVar18 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar25 & 0xffffffff];
                              if (((&DAT_14c841d90)[uVar25 & 0xffffffff] & 0xf) == 0)
                              goto LAB_141050635;
                              lVar26 = uVar19 + 1 + uVar25;
                              uVar25 = uVar25 - 1;
                            } while (lVar26 != 0x33);
                          }
                          uVar18 = (ulonglong)DAT_14c841df8;
                          if (DAT_14c841df8 < 0x11) {
                            uVar18 = 0x10;
                          }
                          uVar18 = -uVar18 & (uVar33 + uVar18) - 1;
                        }
                      }
                      else {
                        local_1c0 = (ulonglong)uVar9;
                        uVar18 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar18,0);
                        uVar9 = (uint)local_1c0;
                      }
                    }
LAB_141050635:
                    iVar29 = (int)(uVar18 >> 2);
                    local_dc = iVar29 << 5;
                    if (iVar29 < (int)uVar9) {
                      local_dc = 0xffffffe0;
                    }
                  }
                  FUN_1446efbd8(local_f8,local_e0);
                  iVar17 = local_e0 + 1;
                }
                iVar29 = iVar17 + 0x1f;
                if (-1 < iVar17) {
                  iVar29 = iVar17;
                }
                local_e0 = iVar17;
                if (iVar17 % 0x20 != 0) {
                  puVar12 = local_e8;
                  if (local_e8 == (uint *)0x0) {
                    puVar12 = local_f8;
                  }
                  bVar21 = -(char)(iVar17 % 0x20);
                  puVar12[iVar29 >> 5] =
                       (puVar12[iVar29 >> 5] << (bVar21 & 0x1f)) >> (bVar21 & 0x1f);
                }
              }
              lVar26 = (longlong)iVar10;
              puVar12 = local_e8;
              if (local_e8 == (uint *)0x0) {
                puVar12 = local_f8;
              }
              bVar21 = (byte)iVar23 & 0x1f;
              puVar12[iVar30 >> 5] =
                   puVar12[iVar30 >> 5] & (-2 << bVar21 | 0xfffffffeU >> 0x20 - bVar21);
            }
            else {
              lVar26 = (longlong)iStack_d8;
              iStack_d8 = *(int *)(local_108 + 4 + lVar26 * 0x10);
              local_d4 = local_d4 + -1;
              if (local_d4 != 0) {
                *(undefined4 *)(local_108 + (longlong)iStack_d8 * 0x10) = 0xffffffff;
              }
            }
            uVar9 = 1 << ((byte)iVar10 & 0x1f);
            puVar12 = local_e8;
            if (local_e8 == (uint *)0x0) {
              puVar12 = local_f8;
            }
            iVar23 = iVar10 + 0x1f;
            if (-1 < iVar10) {
              iVar23 = iVar10;
            }
            puVar12[iVar23 >> 5] = puVar12[iVar23 >> 5] | uVar9;
            lVar26 = lVar26 * 0x10;
            *(ulonglong *)(local_108 + lVar26) = uVar13;
            *(undefined4 *)(local_108 + 8 + lVar26) = 0xffffffff;
            uVar27 = ((uint)(uVar13 >> 0x14) & 0xffff ^ (uint)(uVar13 >> 4)) * -0x7a143595;
            uVar27 = (uVar27 >> 0xd ^ uVar27) * -0x3d4d51cb;
            uVar27 = uVar27 >> 0x10 ^ uVar27;
            uVar28 = (int)uStack_100 - local_d4;
            if ((uVar28 != 0) && (uVar28 != 1)) {
              puVar14 = local_c8;
              if (local_c8 == (undefined1 *)0x0) {
                puVar14 = local_d0;
              }
              iVar29 = *(int *)(puVar14 + (ulonglong)(local_c0 - 1 & uVar27) * 4);
              while (iVar29 != -1) {
                puVar1 = (ulonglong *)(local_108 + (longlong)iVar29 * 0x10);
                if (*(ulonglong *)(local_108 + (longlong)iVar29 * 0x10) == uVar13) {
                  *puVar1 = uVar13;
                  if (local_d4 != 0) {
                    *(int *)(local_108 + (longlong)iStack_d8 * 0x10) = iVar10;
                  }
                  *(undefined4 *)(local_108 + (longlong)iVar10 * 0x10) = 0xffffffff;
                  iVar29 = -1;
                  if (0 < local_d4) {
                    iVar29 = iStack_d8;
                  }
                  *(int *)(local_108 + (longlong)iVar10 * 0x10 + 4) = iVar29;
                  iStack_d8 = iVar10;
                  local_d4 = local_d4 + 1;
                  puVar12 = local_e8;
                  if (local_e8 == (uint *)0x0) {
                    puVar12 = local_f8;
                  }
                  puVar12[iVar23 >> 5] = puVar12[iVar23 >> 5] & ~uVar9;
                  goto LAB_141050082;
                }
                iVar29 = (int)puVar1[1];
              }
            }
            uVar9 = 1;
            if (3 < uVar28) {
              uVar13 = (ulonglong)(uVar28 & 0xfffffffe) + 0xf;
              lVar24 = 0x3f;
              if (uVar13 != 0) {
                for (; uVar13 >> lVar24 == 0; lVar24 = lVar24 + -1) {
                }
              }
              uVar9 = 1 << ((byte)lVar24 & 0x1f);
            }
            if (((int)uVar28 < 1) || ((int)uVar9 <= (int)local_c0)) {
              uVar27 = local_c0 - 1 & uVar27;
              *(uint *)(local_108 + lVar26 + 0xc) = uVar27;
              puVar14 = local_c8;
              if (local_c8 == (undefined1 *)0x0) {
                puVar14 = local_d0;
              }
              *(undefined4 *)(local_108 + lVar26 + 8) =
                   *(undefined4 *)
                    (puVar14 + ((longlong)(int)local_c0 - 1U & (longlong)(int)uVar27) * 4);
              puVar14 = local_c8;
              if (local_c8 == (undefined1 *)0x0) {
                puVar14 = local_d0;
              }
              *(int *)(puVar14 + ((longlong)(int)local_c0 - 1U & (longlong)(int)uVar27) * 4) =
                   iVar10;
            }
            else {
              local_c0 = uVar9;
              if (local_c8 != (undefined1 *)0x0) {
                FUN_1446efa72(&local_c8,0,0,4);
              }
              uVar9 = local_c0;
              if (local_c0 == 1) {
                if (local_c8 != (undefined1 *)0x0) {
                  FUN_1446efa72(&local_c8,0,0,4);
                }
LAB_1410502df:
                uVar27 = 0;
                do {
                  puVar14 = local_c8;
                  if (local_c8 == (undefined1 *)0x0) {
                    puVar14 = local_d0;
                  }
                  *(undefined4 *)(puVar14 + (ulonglong)(local_c0 + 0x7fffffff & uVar27) * 4) =
                       0xffffffff;
                  uVar27 = uVar27 + 1;
                } while (uVar9 != uVar27);
              }
              else {
                if (local_c0 == 0) goto LAB_141050082;
                FUN_1446efa72(&local_c8,0,local_c0,4);
                if (0 < (int)uVar9) goto LAB_1410502df;
              }
              if (local_e0 == 0) {
                uVar13 = 0;
                uVar18 = 1;
                iVar23 = 0;
                iVar10 = 0;
              }
              else {
                puVar12 = local_e8;
                if (local_e8 == (uint *)0x0) {
                  puVar12 = local_f8;
                }
                uVar9 = *puVar12;
                if (uVar9 == 0) {
                  iVar10 = local_e0 + 0x1e;
                  if (-1 < local_e0 + -1) {
                    iVar10 = local_e0 + -1;
                  }
                  uVar13 = 0;
                  uVar18 = (ulonglong)(uint)(iVar10 >> 5);
                  if (iVar10 >> 5 < 1) {
                    uVar18 = uVar13;
                  }
                  iVar10 = 0;
                  do {
                    if (uVar18 == uVar13) goto LAB_141050082;
                    iVar10 = iVar10 + 0x20;
                    uVar9 = puVar12[uVar13 + 1];
                    uVar13 = uVar13 + 1;
                  } while (uVar9 == 0);
                }
                else {
                  uVar13 = 0;
                  iVar10 = 0;
                }
                uVar18 = (ulonglong)(-uVar9 & uVar9);
                uVar33 = uVar18 * 2 + 1;
                lVar26 = 0x3f;
                if (uVar33 != 0) {
                  for (; uVar33 >> lVar26 == 0; lVar26 = lVar26 + -1) {
                  }
                }
                iVar23 = (iVar10 - ((uint)lVar26 ^ 0x3f)) + 0x3e;
                if (local_e0 <= iVar23) {
                  iVar23 = local_e0;
                }
              }
              if (iVar23 < local_e0) {
                uVar9 = 0xffffffff;
                do {
                  local_1c0 = CONCAT44(local_1c0._4_4_,iVar10);
                  lVar26 = (longlong)iVar23 * 0x10;
                  uVar27 = ((uint)(*(ulonglong *)(local_108 + lVar26) >> 0x14) & 0xffff ^
                           (uint)(*(ulonglong *)(local_108 + lVar26) >> 4)) * -0x7a143595;
                  uVar27 = (uVar27 >> 0xd ^ uVar27) * -0x3d4d51cb;
                  uVar33 = (longlong)(int)(uVar27 >> 0x10 ^ uVar27) & (longlong)(int)local_c0 - 1U;
                  iVar29 = (int)uVar33;
                  *(int *)(local_108 + 0xc + lVar26) = iVar29;
                  puVar14 = local_c8;
                  if (local_c8 == (undefined1 *)0x0) {
                    puVar14 = local_d0;
                  }
                  *(undefined4 *)(local_108 + 8 + lVar26) =
                       *(undefined4 *)(puVar14 + ((longlong)(int)local_c0 - 1U & uVar33) * 4);
                  puVar14 = local_c8;
                  if (local_c8 == (undefined1 *)0x0) {
                    puVar14 = local_d0;
                  }
                  *(int *)(puVar14 + ((longlong)iVar29 & (longlong)(int)local_c0 - 1U) * 4) = iVar23
                  ;
                  uVar9 = ~(uint)uVar18 & uVar9;
                  puVar12 = local_e8;
                  if (local_e8 == (uint *)0x0) {
                    puVar12 = local_f8;
                  }
                  iVar23 = (int)uVar13;
                  lVar26 = (longlong)iVar23;
                  uVar27 = puVar12[lVar26] & uVar9;
                  if (uVar27 == 0) {
                    iVar29 = local_e0 + 0x1e;
                    if (-1 < local_e0 + -1) {
                      iVar29 = local_e0 + -1;
                    }
                    iVar29 = iVar29 >> 5;
                    iVar17 = iVar29;
                    if (iVar29 < iVar23) {
                      iVar17 = iVar23;
                    }
                    if (iVar29 <= iVar23) break;
                    lVar24 = 0;
                    while( true ) {
                      iVar10 = iVar10 + 0x20;
                      uVar27 = puVar12[lVar26 + lVar24 + 1];
                      if (uVar27 != 0) break;
                      lVar24 = lVar24 + 1;
                      if (iVar17 - lVar26 == lVar24) goto LAB_141050082;
                    }
                    uVar13 = (ulonglong)(iVar23 + (int)lVar24 + 1);
                    uVar9 = 0xffffffff;
                  }
                  uVar18 = (ulonglong)(-uVar27 & uVar27);
                  uVar33 = uVar18 * 2 + 1;
                  lVar26 = 0x3f;
                  if (uVar33 != 0) {
                    for (; uVar33 >> lVar26 == 0; lVar26 = lVar26 + -1) {
                    }
                  }
                  iVar23 = (iVar10 - ((uint)lVar26 ^ 0x3f)) + 0x3e;
                } while (iVar23 < local_e0);
              }
            }
          }
        }
LAB_141050082:
        uVar11 = uVar11 & ~(uint)uVar31;
        puVar12 = local_98;
        if (local_98 == (uint *)0x0) {
          puVar12 = local_a8;
        }
        iVar10 = (int)uVar22;
        lVar26 = (longlong)iVar10;
        uVar9 = puVar12[lVar26] & uVar11;
        if (uVar9 == 0) {
          iVar23 = local_90 + 0x1e;
          if (-1 < (int)(local_90 - 1)) {
            iVar23 = local_90 - 1;
          }
          iVar23 = iVar23 >> 5;
          iVar20 = iVar20 + 0x20;
          iVar29 = iVar23;
          if (iVar23 < iVar10) {
            iVar29 = iVar10;
          }
          if (iVar10 < iVar23) {
            lVar24 = 0;
            do {
              uVar9 = puVar12[lVar26 + lVar24 + 1];
              if (uVar9 != 0) {
                uVar22 = (ulonglong)(iVar10 + (int)lVar24 + 1);
                uVar11 = 0xffffffff;
                goto LAB_14105010b;
              }
              iVar20 = iVar20 + 0x20;
              lVar24 = lVar24 + 1;
            } while (iVar29 - lVar26 != lVar24);
            uVar11 = 0xffffffff;
            iVar10 = iVar29;
          }
          uVar22 = (ulonglong)(iVar10 + 1);
          uVar9 = local_90;
        }
        else {
LAB_14105010b:
          uVar31 = (ulonglong)(-uVar9 & uVar9);
          uVar13 = uVar31 * 2 + 1;
          lVar26 = 0x3f;
          if (uVar13 != 0) {
            for (; uVar13 >> lVar26 == 0; lVar26 = lVar26 + -1) {
            }
          }
          uVar9 = (iVar20 - ((uint)lVar26 ^ 0x3f)) + 0x3e;
          if ((int)local_90 <= (int)uVar9) {
            uVar9 = local_90;
          }
        }
      } while (uVar9 != (uint)local_1b0);
    }
LAB_14104fc86:
    lVar26 = local_1b8;
    if (*(int *)(local_1b8 + 0x88) < (int)(local_1c1 + 1)) {
      *(uint *)(local_1b8 + 0x88) = local_1c1 + 1;
    }
    SRWLock = (PSRWLOCK)(local_1b8 + 0x50);
    AcquireSRWLockShared(SRWLock);
    local_118 = (undefined1 *)0x0;
    FUN_1401151e2(local_198,*(undefined8 *)(lVar26 + 0x40),*(undefined4 *)(lVar26 + 0x48));
    ReleaseSRWLockShared(SRWLock);
    iVar20 = local_e0;
    local_1a8 = 0;
    uStack_1a0 = 0;
    if (local_e0 == 0) {
      uVar22 = 1;
      uVar31 = 0;
      iVar23 = 0;
      iVar10 = 0;
    }
    else {
      puVar12 = local_e8;
      if (local_e8 == (uint *)0x0) {
        puVar12 = local_f8;
      }
      uVar9 = *puVar12;
      if (uVar9 == 0) {
        iVar10 = local_e0 + 0x1e;
        if (-1 < local_e0 + -1) {
          iVar10 = local_e0 + -1;
        }
        uVar31 = 0;
        uVar22 = (ulonglong)(uint)(iVar10 >> 5);
        if (iVar10 >> 5 < 1) {
          uVar22 = uVar31;
        }
        iVar23 = 0;
        do {
          if (uVar22 == uVar31) goto LAB_1410507f0;
          iVar23 = iVar23 + 0x20;
          uVar9 = puVar12[uVar31 + 1];
          uVar31 = uVar31 + 1;
        } while (uVar9 == 0);
      }
      else {
        uVar31 = 0;
        iVar23 = 0;
      }
      uVar22 = (ulonglong)(-uVar9 & uVar9);
      uVar13 = uVar22 * 2 + 1;
      lVar26 = 0x3f;
      if (uVar13 != 0) {
        for (; uVar13 >> lVar26 == 0; lVar26 = lVar26 + -1) {
        }
      }
      iVar10 = (iVar23 - ((uint)lVar26 ^ 0x3f)) + 0x3e;
      if (local_e0 <= iVar10) {
        iVar10 = local_e0;
      }
    }
    if (iVar10 != local_e0) {
      uVar9 = 0xffffffff;
      do {
        lVar26 = *(longlong *)(local_108 + (longlong)iVar10 * 0x10);
        if (0 < (longlong)(int)local_110) {
          bVar7 = false;
          uVar13 = (longlong)(int)local_110;
LAB_1410508e8:
          puVar14 = local_118;
          if (local_118 == (undefined1 *)0x0) {
            puVar14 = local_198;
          }
          do {
            lVar24 = *(longlong *)(puVar14 + uVar13 * 8 + -8);
            if ((lVar24 != 0) && (*(longlong *)(lVar24 + 0x378) == lVar26)) {
              if ((lVar26 != 0) &&
                 ((*(char *)(*(longlong *)(lVar24 + 0x378) + 0x73) == '\x01' &&
                  (*(char *)(lVar24 + 0xce) == '\x01')))) {
                *(undefined1 *)(lVar24 + 0xce) = 0;
              }
              if (*(char *)(lVar24 + 0xcc) == '\0') {
                if (*(char *)(lVar24 + 0x3e0) == '\x01') {
                  *(undefined1 *)(lVar24 + 0x3e0) = 0;
                }
                if (*(char *)(lVar24 + 0x3e1) == '\0') goto LAB_14105095e;
              }
            }
            bVar6 = uVar13 < 2;
            uVar13 = uVar13 - 1;
            if (bVar6) {
              if (bVar7) goto LAB_1410509dc;
              break;
            }
          } while( true );
        }
        uVar13 = uStack_1a0;
        lVar24 = (longlong)(int)uStack_1a0;
        uVar11 = (int)uStack_1a0 + 1;
        uStack_1a0 = CONCAT44(uStack_1a0._4_4_,uVar11);
        if (uStack_1a0._4_4_ < uVar11) {
          FUN_14656f45a(&local_1a8,uVar13 & 0xffffffff);
        }
        *(longlong *)(local_1a8 + lVar24 * 8) = lVar26;
LAB_1410509dc:
        uVar9 = uVar9 & ~(uint)uVar22;
        puVar12 = local_e8;
        if (local_e8 == (uint *)0x0) {
          puVar12 = local_f8;
        }
        iVar10 = (int)uVar31;
        lVar26 = (longlong)iVar10;
        uVar11 = puVar12[lVar26] & uVar9;
        if (uVar11 == 0) {
          iVar29 = local_e0 + 0x1e;
          if (-1 < local_e0 + -1) {
            iVar29 = local_e0 + -1;
          }
          iVar29 = iVar29 >> 5;
          iVar23 = iVar23 + 0x20;
          iVar17 = iVar29;
          if (iVar29 < iVar10) {
            iVar17 = iVar10;
          }
          if (iVar10 < iVar29) {
            lVar24 = 0;
            do {
              uVar11 = puVar12[lVar26 + lVar24 + 1];
              if (uVar11 != 0) {
                uVar31 = (ulonglong)(iVar10 + (int)lVar24 + 1);
                uVar9 = 0xffffffff;
                goto LAB_141050a6a;
              }
              iVar23 = iVar23 + 0x20;
              lVar24 = lVar24 + 1;
            } while (iVar17 - lVar26 != lVar24);
            uVar9 = 0xffffffff;
            iVar10 = iVar17;
          }
          uVar31 = (ulonglong)(iVar10 + 1);
          iVar10 = local_e0;
        }
        else {
LAB_141050a6a:
          uVar22 = (ulonglong)(-uVar11 & uVar11);
          uVar13 = uVar22 * 2 + 1;
          lVar26 = 0x3f;
          if (uVar13 != 0) {
            for (; uVar13 >> lVar26 == 0; lVar26 = lVar26 + -1) {
            }
          }
          iVar10 = (iVar23 - ((uint)lVar26 ^ 0x3f)) + 0x3e;
          if (local_e0 <= iVar10) {
            iVar10 = local_e0;
          }
        }
      } while (iVar10 != iVar20);
    }
LAB_1410507f0:
    if ((longlong)(int)local_110 < 1) {
      bVar21 = 0;
    }
    else {
      iVar20 = -local_110;
      bVar21 = 0;
      uVar22 = (longlong)(int)local_110;
      do {
        puVar14 = local_118;
        if (local_118 == (undefined1 *)0x0) {
          puVar14 = local_198;
        }
        lVar26 = *(longlong *)(puVar14 + uVar22 * 8 + -8);
        if ((lVar26 != 0) && (*(longlong *)(lVar26 + 0x378) != 0)) {
          if (*(char *)(*(longlong *)(lVar26 + 0x378) + 0x73) == '\x01') {
            if (*(char *)(lVar26 + 0xce) == '\0') {
              *(undefined1 *)(lVar26 + 0xce) = 1;
            }
            if (uVar22 != local_110) {
              memmove(puVar14 + uVar22 * 8 + -8,puVar14 + uVar22 * 8,
                      (longlong)(int)(iVar20 + local_110) << 3);
            }
            local_110 = local_110 - 1;
            FUN_143eb936e(local_198);
          }
          else {
            bVar2 = *(byte *)(lVar26 + 0x3e0);
            *(undefined1 *)(lVar26 + 0x3e0) = 1;
            bVar21 = bVar21 | bVar2 ^ 1;
          }
        }
        iVar20 = iVar20 + 1;
        bVar7 = 1 < uVar22;
        uVar22 = uVar22 - 1;
      } while (bVar7);
    }
    lVar26 = local_1a8;
    lVar24 = (longlong)(int)uStack_1a0;
    if (lVar24 != 0) {
      lVar32 = 0;
      do {
        lVar4 = *(longlong *)(lVar26 + lVar32);
        if (lVar4 != 0) {
          lVar16 = *(longlong *)(lVar4 + 0x50);
          if (lVar16 == 0) {
            uVar15 = FUN_145d84ce4();
            lVar16 = FUN_14477b664(uVar15);
            *(longlong *)(lVar4 + 0x50) = lVar16;
          }
          if (*(longlong *)(lVar4 + 0x58) == 0) {
            if ((lVar16 != 0) && (*(longlong *)(lVar4 + 0x48) != 0)) {
              plVar5 = *(longlong **)(lVar16 + 0xb8);
              if ((plVar5 == (longlong *)0x0) ||
                 (cVar8 = (**(code **)(*plVar5 + 0x108))(plVar5), cVar8 == '\0')) {
                *(undefined8 *)(lVar4 + 0x58) = 0;
              }
              else {
                uVar15 = (**(code **)(*plVar5 + 0x110))(plVar5);
                lVar16 = FUN_144aff482(uVar15,(longlong *)(lVar4 + 0x48));
                *(longlong *)(lVar4 + 0x58) = lVar16;
                if (lVar16 != 0) goto LAB_141050af8;
              }
            }
            if (*(int *)(lVar4 + 0x40) < 2) goto LAB_141050b08;
          }
LAB_141050af8:
          FUN_1416334c4(local_1b8,lVar4);
          bVar21 = 1;
        }
LAB_141050b08:
        lVar32 = lVar32 + 8;
      } while (lVar24 * 8 != lVar32);
    }
    if ((bVar21 & 1) != 0) {
      FUN_143eb1c12(local_1b8);
    }
    if (local_1a8 != 0) {
      FUN_1400020a8();
    }
    if (local_118 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
    local_c0 = 0;
    if (local_c8 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
    uVar22 = uStack_100 >> 0x20;
    uStack_100 = uStack_100 & 0xffffffff00000000;
    if ((int)uVar22 != 0) {
      FUN_14474875a(&local_108,0);
    }
    iStack_d8 = 0xffffffff;
    local_d4 = 0;
    local_e0 = 0;
    if (0x80 < local_dc) {
      local_dc = 0x80;
      FUN_1446efbd8(local_f8,0);
    }
    if (local_e8 != (uint *)0x0) {
      FUN_1400020a8();
    }
    if (local_108 != 0) {
      FUN_1400020a8();
    }
    local_70 = 0;
    if (local_78 != 0) {
      FUN_1400020a8();
    }
    uVar22 = uStack_b0 >> 0x20;
    uStack_b0 = uStack_b0 & 0xffffffff00000000;
    if ((int)uVar22 != 0) {
      FUN_14474875a(&local_b8,0);
    }
    uStack_88 = 0xffffffff;
    local_84 = 0;
    local_90 = 0;
    if (0x80 < local_8c) {
      local_8c = 0x80;
      FUN_1446efbd8(local_a8,0);
    }
    if (local_98 != (uint *)0x0) {
      FUN_1400020a8();
    }
    if (local_b8 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_60 ^ (ulonglong)auStack_1e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_14105095e:
  if (local_110 != uVar13) {
    memmove(puVar14 + uVar13 * 8 + -8,puVar14 + uVar13 * 8,
            (longlong)(int)(local_110 - (int)uVar13) << 3);
  }
  local_110 = local_110 - 1;
  FUN_143eb936e(local_198);
  bVar7 = true;
  bVar6 = uVar13 < 2;
  uVar13 = uVar13 - 1;
  if (bVar6) goto LAB_1410509dc;
  goto LAB_1410508e8;
}



// FUNCTION 141050d86 FUN_141050d86 body=117 status=ok
// SIG undefined FUN_141050d86(void)

void FUN_141050d86(longlong param_1)

{
  byte bVar1;
  longlong *plVar2;
  longlong lVar3;
  
  bVar1 = *(byte *)(param_1 + 0xbd8);
  if ((int)(uint)bVar1 < *(int *)(param_1 + 0xbf0)) {
    plVar2 = *(longlong **)
              (*(longlong *)(param_1 + 0xbe8) + 8 + (ulonglong)bVar1 * 0x80 + (ulonglong)bVar1 * 8);
    if (plVar2 != (longlong *)0x0) {
      lVar3 = (**(code **)(*plVar2 + 0x358))();
      if (lVar3 != 0) {
        return;
      }
    }
  }
  param_1 = param_1 + 0x910;
  lVar3 = FUN_141050dfc(param_1);
  if (lVar3 == 0) {
    param_1 = FUN_140ad802e();
    param_1 = param_1 + 0x60;
  }
  FUN_141050dfc(param_1);
  return;
}



// FUNCTION 141050dfc FUN_141050dfc body=246 status=ok
// SIG undefined FUN_141050dfc(void)

longlong FUN_141050dfc(uint *param_1)

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
     (((*(uint *)(plVar5 + 1) & 0x10200000) != 0 || (lVar4 = *plVar5, lVar4 == 0)))) {
    if (*(longlong *)(param_1 + 2) == 0) {
      return 0;
    }
    lVar4 = FUN_140007850();
    cVar2 = (*(code *)PTR_FUN_14c758760)();
    if ((lVar4 == 0) || (cVar2 == '\0')) {
      FUN_14485c47a(param_1,lVar4);
      if (lVar4 == 0) {
        return 0;
      }
    }
    else {
      uVar1 = *(uint *)(lVar4 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar3 = 0;
      }
      if ((*(uint *)(lVar3 + 8) & 0x8400000) == 0) {
        FUN_14485c47a(param_1,lVar4);
      }
    }
    if ((*(uint *)(lVar4 + 8) >> 0x1e & 1) != 0) {
      return 0;
    }
  }
  lVar3 = FUN_141050ef2();
  if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
      lVar3 + 0x30)) {
    return lVar4;
  }
  return 0;
}



// FUNCTION 141050ef2 FUN_141050ef2 body=228 status=ok
// SIG undefined FUN_141050ef2(void)

longlong FUN_141050ef2(void)

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
  if (DAT_14cb94490 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e9e4fe;
    local_38 = &LAB_148a161b7;
    local_40 = FUN_1418bab1d;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x68;
    FUN_14081cfa3(L"/Script/GbxWeapon",L"WeaponTriggerFeedback",&DAT_14cb94490,&DAT_148a161b6);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb94490;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141050fd7 FUN_141050fd7 body=49 status=ok
// SIG undefined FUN_141050fd7(void)

longlong FUN_141050fd7(void)

{
  if (DAT_14c927748 == 0) {
    FUN_14073dd9a(&DAT_14c927748,&PTR_FUN_149e567d0);
  }
  return DAT_14c927748;
}



// FUNCTION 141051008 FUN_141051008 body=49 status=ok
// SIG undefined FUN_141051008(void)

longlong FUN_141051008(void)

{
  if (DAT_14cabc9b0 == 0) {
    FUN_140f50038(&DAT_14cabc9b0,&PTR_s__Script_LevelSequence_14a599790);
  }
  return DAT_14cabc9b0;
}



// FUNCTION 141051039 FUN_141051039 body=49 status=ok
// SIG undefined FUN_141051039(void)

longlong FUN_141051039(void)

{
  if (DAT_14cb26590 == 0) {
    FUN_140f50038(&DAT_14cb26590,&PTR_s__Script_FaceFX_14acb92b7_1_14acb9298);
  }
  return DAT_14cb26590;
}



// FUNCTION 14105106a FUN_14105106a body=46 status=ok
// SIG undefined FUN_14105106a(void)

void FUN_14105106a(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_141051098(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b4823d0;
  *(undefined4 *)(puVar1 + 7) = 0x20000;
  *(undefined1 *)((longlong)puVar1 + 0x3c) = 0;
  return;
}



// FUNCTION 141051098 FUN_141051098 body=101 status=ok
// SIG undefined FUN_141051098(void)

undefined8 * FUN_141051098(undefined8 *param_1,longlong *param_2)

{
  *param_1 = &PTR_FUN_149e8f7e0;
  if ((undefined8 *)*param_2 != param_1 && (undefined8 *)*param_2 != (undefined8 *)0x0) {
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectGlobals.cpp",0xe8e,
                  L"UObject(const FObjectInitializer&) constructor called but it\'s not the object that\'s currently being constructed with NewObject. Maybe you are trying to construct it on the stack, which is not supported."
                 );
  }
  *param_2 = (longlong)param_1;
  *(undefined1 *)((longlong)param_2 + 0x12) = 0;
  *param_1 = &PTR_FUN_14b2ad8d0;
  param_1[5] = 0;
  param_1[6] = 0;
  return param_1;
}



// FUNCTION 1410510fd FUN_1410510fd body=49 status=ok
// SIG undefined FUN_1410510fd(void)

longlong FUN_1410510fd(void)

{
  if (DAT_14cbf52b0 == 0) {
    FUN_140f50038(&DAT_14cbf52b0,&PTR_s__Script_Party_14ba51070);
  }
  return DAT_14cbf52b0;
}



// FUNCTION 14105112e FUN_14105112e body=49 status=ok
// SIG undefined FUN_14105112e(void)

longlong FUN_14105112e(void)

{
  if (DAT_14cc24278 == 0) {
    FUN_140f50038(&DAT_14cc24278,&PTR_s__Script_DataflowNodes_14be12067_1_14be12048);
  }
  return DAT_14cc24278;
}



// FUNCTION 14105116e FUN_14105116e body=174 status=ok
// SIG undefined FUN_14105116e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14105116e(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14b8890e0;
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
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



// FUNCTION 14105122a FUN_14105122a body=125 status=ok
// SIG undefined FUN_14105122a(void)

undefined8 * FUN_14105122a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b0a1920;
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a428b40;
  FUN_1448d844e(param_1[7],*(undefined4 *)(param_1 + 8));
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1410512a8 FUN_1410512a8 body=31 status=ok
// SIG undefined FUN_1410512a8(void)

undefined8 FUN_1410512a8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1410512c8 FUN_1410512c8 body=31 status=ok
// SIG undefined FUN_1410512c8(void)

undefined8 FUN_1410512c8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1410512e8 FUN_1410512e8 body=31 status=ok
// SIG undefined FUN_1410512e8(void)

undefined8 FUN_1410512e8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141051308 FUN_141051308 body=31 status=ok
// SIG undefined FUN_141051308(void)

undefined8 FUN_141051308(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141051328 FUN_141051328 body=272 status=ok
// SIG undefined FUN_141051328(void)

void FUN_141051328(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  
  if ((*(longlong *)(param_1 + 0x30) != 0) && (*(longlong *)(param_1 + 0x68) != 0)) {
    FUN_141051438(param_1 + 0x70,1,0);
    *(undefined1 *)(*(longlong *)(param_1 + 0x98) + 8) = 1;
    lVar3 = *(longlong *)(param_1 + 0x30);
    plVar4 = *(longlong **)(param_1 + 0x98);
    if ((plVar4 != (longlong *)0x0) && (0 < (int)plVar4[3])) {
      lVar6 = 0;
      do {
        *(undefined4 *)(plVar4[2] + lVar6 * 4) = 0xffffffff;
        lVar6 = lVar6 + 1;
      } while (lVar6 < (int)plVar4[3]);
    }
    iVar5 = (**(code **)(*plVar4 + 0x60))(plVar4);
    if (0 < iVar5) {
      lVar6 = 0;
      do {
        if (*(int *)(plVar4[2] + lVar6 * 4) == -1) {
          *(undefined4 *)(plVar4[2] + lVar6 * 4) = 0;
          lVar7 = plVar4[2];
          for (iVar5 = *(int *)(*(longlong *)(lVar3 + 0x10) + lVar6 * 4); iVar5 != -1;
              iVar5 = *(int *)(*(longlong *)(lVar3 + 0x10) + (longlong)iVar5 * 4)) {
            piVar1 = (int *)(lVar7 + lVar6 * 4);
            *piVar1 = *piVar1 + 1;
            lVar7 = plVar4[2];
            iVar2 = *(int *)(lVar7 + (longlong)iVar5 * 4);
            if (iVar2 != -1) {
              piVar1 = (int *)(lVar7 + lVar6 * 4);
              *piVar1 = *piVar1 + iVar2;
              lVar7 = plVar4[2];
              break;
            }
          }
          iVar5 = *(int *)(lVar7 + lVar6 * 4);
          if (0 < iVar5) {
            iVar2 = *(int *)(*(longlong *)(lVar3 + 0x10) + lVar6 * 4);
            while (iVar2 != -1) {
              iVar5 = iVar5 + -1;
              lVar7 = (longlong)iVar2;
              if (*(int *)(plVar4[2] + lVar7 * 4) != -1) break;
              *(int *)(plVar4[2] + lVar7 * 4) = iVar5;
              iVar2 = *(int *)(*(longlong *)(lVar3 + 0x10) + lVar7 * 4);
            }
          }
        }
        lVar6 = lVar6 + 1;
        iVar5 = (**(code **)(*plVar4 + 0x60))(plVar4);
      } while (lVar6 < iVar5);
    }
  }
  return;
}



// FUNCTION 141051438 FUN_141051438 body=307 status=ok
// SIG undefined FUN_141051438(void)

void FUN_141051438(undefined8 *param_1,char param_2,longlong param_3)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined1 local_28;
  undefined1 local_27;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 == '\x01') {
    cVar2 = FUN_140498db8(*param_1,param_1[2],param_1[3]);
    if (cVar2 == '\0') {
      FUN_140498ea8(param_1[1],param_1[2],param_1[3]);
      param_1[5] = 0;
      param_1[6] = 0;
    }
  }
  lVar5 = param_1[1];
  lVar8 = param_1[3];
  if (*(int *)(lVar5 + 0x60) != *(int *)(lVar5 + 0x8c)) {
    uVar1 = (uint)((ulonglong)lVar8 >> 0x10);
    uVar6 = (uint)lVar8 & 0xffff;
    lVar3 = lVar5 + 0x90;
    if (*(longlong *)(lVar5 + 0x98) != 0) {
      lVar3 = *(longlong *)(lVar5 + 0x98);
    }
    iVar7 = *(int *)(lVar3 + (ulonglong)
                             (*(int *)(lVar5 + 0xa0) - 1U &
                             (int)((ulonglong)lVar8 >> 0x20) + ((uint)lVar8 << 0x10 | uVar6) +
                             (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar6 >> 4)) * 4);
    if (iVar7 != -1) {
      do {
        if (*(longlong *)(*(longlong *)(lVar5 + 0x58) + (longlong)iVar7 * 0x14) == lVar8)
        goto LAB_14105151e;
        iVar7 = *(int *)(*(longlong *)(lVar5 + 0x58) + (longlong)iVar7 * 0x14 + 0xc);
      } while (iVar7 != -1);
    }
  }
  FUN_140b203e2(lVar5,lVar8);
  lVar5 = param_1[1];
  lVar8 = param_1[3];
LAB_14105151e:
  if (param_3 == 0) {
    param_3 = param_1[4];
  }
  local_28 = param_2 == '\x01';
  local_27 = 0;
  local_30 = param_3;
  uVar4 = FUN_140b1fb8c(lVar5,param_1[2],lVar8);
  param_1[5] = uVar4;
  param_1[6] = uVar4;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141051574 FUN_141051574 body=253 status=ok
// SIG undefined FUN_141051574(void)

undefined8 * FUN_141051574(undefined8 *param_1)

{
  void **ppvVar1;
  void *_Src;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  void *local_48;
  ulonglong uStack_40;
  wchar_t *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = &PTR_FUN_14b687a88;
  ppvVar1 = (void **)(param_1 + 4);
  param_1[1] = 0;
  param_1[2] = 0;
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
  local_58 = 0;
  uStack_50 = 0;
  local_48 = (void *)0x0;
  uStack_40 = 0;
  local_38 = L"/Script/OakGame.InventoryAugmentBehavior";
  local_30 = 0x28;
  FUN_14475bf92(&local_58);
  _Src = local_48;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = (undefined4)local_58;
  *(undefined4 *)((longlong)param_1 + 0x14) = local_58._4_4_;
  *(undefined4 *)(param_1 + 3) = (undefined4)uStack_50;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_50._4_4_;
  if (ppvVar1 != &local_48) {
    iVar2 = (int)uStack_40;
    lVar3 = (longlong)(int)uStack_40;
    *(int *)(param_1 + 5) = (int)uStack_40;
    if ((int)uStack_40 == 0 && *(int *)((longlong)param_1 + 0x2c) == 0) {
      *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
    }
    else {
      FUN_1446dd670(ppvVar1,uStack_40 & 0xffffffff);
      if (iVar2 != 0) {
        memcpy(*ppvVar1,_Src,lVar3 * 2);
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



// FUNCTION 141051680 FUN_141051680 body=158 status=ok
// SIG undefined FUN_141051680(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_141051680(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14acb7a60;
  if (param_1[8] != 0) {
    FUN_1400020a8();
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



// FUNCTION 14105171e FUN_14105171e body=103 status=ok
// SIG undefined FUN_14105171e(void)

ulonglong FUN_14105171e(longlong param_1)

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
LAB_141051768:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_141051768;
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



// FUNCTION 14105178c FUN_14105178c body=200 status=ok
// SIG undefined FUN_14105178c(void)

void FUN_14105178c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong *plStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  plVar4 = *(longlong **)(param_1 + 0x10);
  if (plVar4 == (longlong *)0x0) {
LAB_141051814:
    local_28 = 0;
    plStack_20 = (longlong *)0x0;
  }
  else {
    iVar6 = (int)plVar4[1];
    do {
      if (iVar6 == 0) goto LAB_141051814;
      LOCK();
      iVar5 = (int)plVar4[1];
      bVar7 = iVar6 == iVar5;
      if (bVar7) {
        *(int *)(plVar4 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar7);
    local_28 = *(undefined8 *)(param_1 + 8);
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    plVar1 = plVar4 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    plStack_20 = plVar4;
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
  FUN_141051866(uVar3,&local_28);
  plVar4 = plStack_20;
  if (plStack_20 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_20 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_20)(plStack_20);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141051866 FUN_141051866 body=587 status=ok
// SIG undefined FUN_141051866(void)

void FUN_141051866(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  char cVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong *plVar12;
  bool bVar13;
  undefined1 auStack_d8 [32];
  undefined2 *local_b8;
  undefined8 *local_b0;
  undefined4 local_a8;
  undefined2 local_a0 [2];
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_90;
  byte local_58;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  cVar7 = (**(code **)(*(longlong *)*param_2 + 0x18))();
  if (cVar7 == '\0') {
    if ((longlong)*(int *)(param_1 + 0x28) != 0) {
      plVar12 = *(longlong **)(param_1 + 0x20);
      plVar11 = plVar12 + (longlong)*(int *)(param_1 + 0x28) * 2;
      do {
        plVar3 = (longlong *)plVar12[1];
        if (plVar3 == (longlong *)0x0) {
LAB_141051967:
          lVar10 = *param_2;
          lVar9 = 0;
        }
        else {
          iVar8 = (int)plVar3[1];
          do {
            if (iVar8 == 0) goto LAB_141051967;
            LOCK();
            iVar6 = (int)plVar3[1];
            bVar13 = iVar8 == iVar6;
            if (bVar13) {
              *(int *)(plVar3 + 1) = iVar8 + 1;
              iVar6 = iVar8;
            }
            iVar8 = iVar6;
            UNLOCK();
          } while (!bVar13);
          lVar9 = *plVar12;
          lVar10 = *param_2;
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
        if (lVar9 == lVar10) goto LAB_14105192d;
        plVar12 = plVar12 + 2;
      } while (plVar12 != plVar11);
    }
    lVar9 = *param_2;
    lVar10 = param_2[1];
    if (lVar10 != 0) {
      LOCK();
      *(int *)(lVar10 + 0xc) = *(int *)(lVar10 + 0xc) + 1;
      UNLOCK();
    }
    iVar8 = *(int *)(param_1 + 0x28);
    *(uint *)(param_1 + 0x28) = iVar8 + 1U;
    if (*(uint *)(param_1 + 0x2c) < iVar8 + 1U) {
      FUN_1457e430e(param_1 + 0x20,iVar8);
    }
    lVar4 = *(longlong *)(param_1 + 0x20);
    *(longlong *)(lVar4 + (longlong)iVar8 * 0x10) = lVar9;
    *(longlong *)(lVar4 + 8 + (longlong)iVar8 * 0x10) = lVar10;
    if (*(longlong *)(param_1 + 8) == 0) {
      cVar7 = FUN_144729dda(param_1 + 0x10);
      if (cVar7 != '\0') {
        lVar9 = FUN_14479d2ce(param_1 + 0x10);
        uVar5 = *(undefined8 *)(lVar9 + 0xf0);
        local_b0 = (undefined8 *)0x0;
        local_a8 = 0;
        FUN_1446efa72(&local_b0,0,3,0x10);
        local_a8 = 3;
        *local_b0 = &PTR_LAB_14a1c8830;
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
        local_b0[2] = lVar10;
        *local_b0 = &PTR_FUN_14b3fbdb0;
        local_b0[3] = param_1;
        local_b0[4] = FUN_14122dbd2;
        local_98 = 0;
        local_90 = 0;
        FUN_14487d8d8(&local_98,&local_b0);
        local_58 = 1;
        local_b8 = local_a0;
        local_a0[0] = 0;
        local_9c = 0xbf800000;
        FUN_1406f4044(uVar5,param_1 + 8,&local_98,0x800000);
        (*(code *)(&PTR_LAB_14a1c87a0)[local_58])(&local_98);
        FUN_1449db362(&local_b0);
      }
    }
  }
LAB_14105192d:
  if ((local_40 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141051ab2 FUN_141051ab2 body=42 status=ok
// SIG undefined FUN_141051ab2(void)

undefined8 FUN_141051ab2(ushort param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = (ulonglong)param_1 * 0x3c;
  if ((*(longlong *)(&DAT_14ca814b0 + lVar1) == DAT_14ca80038) &&
     ((*(byte *)((longlong)&DAT_14ca814d0 + lVar1 + 3) & 1) == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
  }
  return uVar2;
}



// FUNCTION 141051adc FUN_141051adc body=427 status=ok
// SIG undefined FUN_141051adc(void)

void FUN_141051adc(longlong param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_58 [32];
  undefined1 *local_38;
  undefined1 *local_30;
  undefined1 **local_28;
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    FUN_140dde44c(*(longlong *)(param_1 + 0xd8),0);
    lVar4 = *(longlong *)(param_1 + 0xd8);
    plVar7 = *(longlong **)(lVar4 + 0x38);
    if ((((plVar7 != (longlong *)0x0) && (*(int *)(lVar4 + 0x34) != 0)) &&
        (uVar3 = *(uint *)(lVar4 + 0x30), -1 < (int)uVar3)) &&
       ((((int)uVar3 < DAT_14c9647dc &&
         (lVar8 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8), lVar8 != 0)) &&
        ((*(int *)(lVar8 + 0x10) == *(int *)(lVar4 + 0x34) &&
         ((*(uint *)(lVar8 + 8) & 0x10200000) == 0)))))) {
      if (*(code **)(*plVar7 + 0x10) == (code *)&LAB_144944cea) {
        plVar7 = plVar7 + 0xe1;
      }
      else {
        plVar7 = (longlong *)(**(code **)(*plVar7 + 0x10))();
      }
      local_38 = &local_19;
      local_19 = 3;
      local_28 = &local_38;
      local_30 = &LAB_143cbcb7a;
      FUN_1400b7536(plVar7);
      puVar5 = *(undefined8 **)(lVar4 + 0x98);
      if (puVar5 != (undefined8 *)0x0) {
        iVar6 = *(int *)(puVar5 + 1);
        do {
          if (iVar6 == 0) goto LAB_141051c42;
          LOCK();
          iVar2 = *(int *)(puVar5 + 1);
          bVar9 = iVar6 == iVar2;
          if (bVar9) {
            *(int *)(puVar5 + 1) = iVar6 + 1;
            iVar2 = iVar6;
          }
          iVar6 = iVar2;
          UNLOCK();
        } while (!bVar9);
        lVar4 = *(longlong *)(lVar4 + 0x90);
        if (((lVar4 != 0) && (*(int *)(lVar4 + 0x14) != 0)) &&
           ((uVar3 = *(uint *)(lVar4 + 0x10), -1 < (int)uVar3 &&
            (((((int)uVar3 < DAT_14c9647dc &&
               (plVar7 = (longlong *)
                         ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
               plVar7 != (longlong *)0x0)) && ((int)plVar7[2] == *(int *)(lVar4 + 0x14))) &&
             (((*(uint *)(plVar7 + 1) & 0x10200000) == 0 && (*plVar7 != 0)))))))) {
          FUN_141051c98(*plVar7,&DAT_14cb7e1a0);
        }
        LOCK();
        piVar1 = (int *)(puVar5 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puVar5)(puVar5);
          LOCK();
          piVar1 = (int *)((longlong)puVar5 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58);
          }
        }
      }
    }
  }
LAB_141051c42:
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141051c98 FUN_141051c98 body=348 status=ok
// SIG undefined FUN_141051c98(void)

void FUN_141051c98(longlong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined *puVar3;
  uint *puVar4;
  longlong *plVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(int *)(param_1 + 7000) < 1) {
    fVar7 = *(float *)(param_1 + 0x1b18);
    fVar8 = *(float *)(param_1 + 0x1b60);
  }
  else {
    local_20 = param_2;
    FUN_141051df6(param_1 + 0x1b20,&local_20);
    fVar8 = *(float *)(param_1 + 0x1b60);
    if ((longlong)*(int *)(param_1 + 7000) < 1) {
      fVar7 = *(float *)(param_1 + 0x1b18);
    }
    else {
      lVar2 = param_1 + 0x1b20;
      if (*(longlong *)(param_1 + 0x1b50) != 0) {
        lVar2 = *(longlong *)(param_1 + 0x1b50);
      }
      fVar7 = *(float *)(lVar2 + -0xc + (longlong)*(int *)(param_1 + 7000) * 0xc);
    }
  }
  if ((fVar8 != fVar7) || (NAN(fVar8) || NAN(fVar7))) {
    *(float *)(param_1 + 0x1b60) = fVar7;
    uVar1 = *(ulonglong *)(param_1 + 0x38);
    if (uVar1 < 0xffffffff00000000) {
      plVar5 = DAT_14c9980d0;
      if (DAT_14c9980d8 == 0) {
        plVar5 = (longlong *)0x0;
      }
      (**(code **)(*plVar5 + 0x58))(plVar5,param_1,uVar1,3);
    }
    else {
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
          *puVar4 = *puVar4 | 8;
          *(byte *)(lVar2 + 0x60) = *(byte *)(lVar2 + 0x60) | 1;
        }
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141051df6 FUN_141051df6 body=280 status=ok
// SIG undefined FUN_141051df6(void)

int FUN_141051df6(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  bool bVar13;
  
  iVar4 = *(int *)(param_1 + 0x38);
  lVar5 = (longlong)iVar4;
  if (lVar5 == 0) {
    iVar4 = 0;
  }
  else {
    lVar12 = *(longlong *)(param_1 + 0x30);
    if (*(longlong *)(param_1 + 0x30) == 0) {
      lVar12 = param_1;
    }
    iVar3 = 0;
    bVar13 = *(longlong *)(lVar12 + 4) == *(longlong *)*param_2;
    iVar9 = 0;
    do {
      lVar7 = (longlong)iVar9;
      iVar2 = iVar9 + 1;
      if (iVar9 + 1 < iVar4) {
        iVar2 = iVar4;
      }
      plVar6 = (longlong *)(lVar12 + 0x10 + lVar7 * 0xc);
      iVar11 = iVar9;
      lVar8 = lVar7;
      do {
        lVar8 = lVar8 + 1;
        iVar10 = iVar2;
        if (lVar5 <= lVar8) break;
        lVar1 = *plVar6;
        iVar11 = iVar11 + 1;
        plVar6 = (longlong *)((longlong)plVar6 + 0xc);
        iVar10 = iVar11;
      } while (bVar13 == (lVar1 == *(longlong *)*param_2));
      if (bVar13 == false) {
        if (iVar3 != iVar9) {
          memmove((void *)(lVar12 + (longlong)iVar3 * 0xc),(void *)(lVar12 + lVar7 * 0xc),
                  (longlong)(iVar10 - iVar9) * 0xc);
        }
        iVar3 = iVar3 + (iVar10 - iVar9);
      }
      bVar13 = (bool)(bVar13 ^ 1);
      iVar9 = iVar10;
    } while (lVar8 < lVar5);
    *(int *)(param_1 + 0x38) = iVar3;
    iVar4 = iVar4 - iVar3;
  }
  return iVar4;
}



// FUNCTION 141051f1a FUN_141051f1a body=391 status=ok
// SIG undefined FUN_141051f1a(void)

undefined8 * FUN_141051f1a(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined2 local_40;
  undefined1 local_3e;
  undefined4 local_3c;
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1410520a2();
  *param_1 = &PTR_FUN_14adc8440;
  param_1[0xc] = 0;
  uVar2 = FUN_144830b78(param_1 + 0xd,&DAT_14cb41380);
  *(undefined4 *)(param_1 + 0xd) = uVar2;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  *(byte *)((longlong)param_1 + 0x81) = *(byte *)((longlong)param_1 + 0x81) & 0xfe;
  *(undefined1 *)((longlong)param_1 + 0x82) = 0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xbc) = 0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *(undefined8 *)((longlong)param_1 + 0x104) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x10c) = 0;
  param_1[0x23] = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  puVar3 = (undefined8 *)FUN_14001cc68(0x60,0x10);
  puVar3[1] = 0;
  *puVar3 = &PTR_FUN_14adcb940;
  puVar3[6] = 0;
  *(undefined4 *)(puVar3 + 7) = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  *(undefined8 *)((longlong)puVar3 + 0x3c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar3 + 0x44) = 0;
  puVar3[10] = 0;
  *(undefined4 *)(puVar3 + 0xb) = 0;
  puVar1 = (undefined8 *)param_1[5];
  if ((puVar1 != puVar3) && (param_1[5] = puVar3, puVar1 != (undefined8 *)0x0)) {
    (**(code **)*puVar1)(puVar1,1);
  }
  local_48 = FUN_140f1f190();
  if ((local_48 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(local_48);
  }
  local_40 = 1;
  local_3e = 0;
  local_3c = 0xffffffff;
  uVar2 = FUN_144830b78(local_34);
  *(undefined4 *)(param_1 + 0xd) = uVar2;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410520a2 FUN_1410520a2 body=89 status=ok
// SIG undefined FUN_1410520a2(void)

undefined8 * FUN_1410520a2(undefined8 *param_1)

{
  FUN_14007ca06();
  FUN_1400841f8(param_1);
  param_1[5] = 0;
  *(byte *)(param_1 + 6) = *(byte *)(param_1 + 6) & 0xf8;
  *param_1 = &PTR_FUN_14add9370;
  *(undefined1 *)(param_1 + 7) = 1;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0x300000003;
  *(undefined8 *)((longlong)param_1 + 0x44) = 3;
  *(undefined1 *)((longlong)param_1 + 0x4c) = 0;
  param_1[10] = 0x4059000000000000;
  param_1[0xb] = 0x4059000000000000;
  return param_1;
}



// FUNCTION 14105210a FUN_14105210a body=66 status=ok
// SIG undefined FUN_14105210a(void)

undefined8 * FUN_14105210a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b0163b0;
  FUN_14051f4c4(param_1 + 0x19);
  FUN_14051f4c4(param_1 + 3);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14105214c FUN_14105214c body=40 status=ok
// SIG undefined FUN_14105214c(void)

undefined8 FUN_14105214c(undefined8 param_1,int param_2)

{
  FUN_141052174();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141052174 FUN_141052174 body=619 status=ok
// SIG undefined FUN_141052174(void)

void FUN_141052174(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b669e30;
  param_1[0x72] = &PTR_FUN_14b66a4a0;
  param_1[0x73] = &PTR_FUN_14b66a4c0;
  param_1[0x74] = &PTR_FUN_14b66a4f0;
  param_1[0x75] = &PTR_FUN_14b66a500;
  param_1[0x76] = &PTR_FUN_14b66a570;
  param_1[0x77] = &PTR_FUN_14b66a5a0;
  param_1[0x78] = &PTR_FUN_14b66a5d0;
  param_1[0x7f] = &PTR_FUN_14b66a680;
  param_1[0x80] = &PTR_FUN_14b66a6f0;
  param_1[0x81] = &PTR_FUN_14b66a760;
  param_1[0x82] = &PTR_FUN_14b66a790;
  param_1[0x83] = &PTR_FUN_14b66a7d0;
  param_1[0x84] = &PTR_FUN_14b66a870;
  param_1[0x85] = &PTR_FUN_14b66a890;
  param_1[0x89] = &PTR_FUN_14b66a8b0;
  param_1[0x8a] = &PTR_FUN_14b66a970;
  param_1[0x8b] = &PTR_FUN_14b66a9f0;
  param_1[0x8c] = &PTR_FUN_14b66aa40;
  param_1[0x8d] = &PTR_FUN_14b66aa80;
  param_1[0x8e] = &PTR_FUN_14b66aaa0;
  param_1[0x8f] = &PTR_FUN_14b66aac0;
  param_1[0x90] = &PTR_FUN_14b66aae0;
  param_1[0x91] = &PTR_FUN_14b66ab00;
  param_1[0x92] = &PTR_FUN_14b66ab20;
  param_1[0x93] = &PTR_FUN_14b66ab40;
  param_1[0x94] = &PTR_FUN_14b66ab60;
  param_1[0x95] = &PTR_FUN_14b66ab80;
  param_1[0x96] = &PTR_FUN_14b66aba0;
  param_1[0x34b] = &PTR_FUN_14b66abc0;
  param_1[0x352] = &PTR_FUN_14b66abd0;
  param_1[0x353] = &PTR_FUN_14b66ac10;
  param_1[0x354] = &PTR_FUN_14b66ac50;
  param_1[0x355] = &PTR_FUN_14b66aca0;
  param_1[0x356] = &PTR_FUN_14b66acd0;
  param_1[0x359] = &PTR_FUN_14b66ad10;
  param_1[0x35a] = &PTR_FUN_14b66ad20;
  param_1[0x35b] = &PTR_FUN_14b66ad50;
  param_1[0x35c] = &PTR_FUN_14b66adf0;
  FUN_144760e21(param_1[0x4c1],*(undefined4 *)(param_1 + 0x4c2));
  if (param_1[0x4c1] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x4bf] != 0) {
    FUN_1400020a8();
  }
  FUN_140639172(param_1);
  return;
}



// FUNCTION 1410523e0 FUN_1410523e0 body=2428 status=ok
// SIG undefined FUN_1410523e0(void)

ulonglong FUN_1410523e0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  undefined8 uVar9;
  longlong *plVar10;
  undefined8 ****ppppuVar11;
  int iVar12;
  undefined8 unaff_RSI;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  bool bVar17;
  undefined1 auStack_118 [36];
  int local_f4;
  undefined8 ***local_f0 [3];
  ushort local_d8;
  byte local_d0;
  undefined8 ***local_c8 [3];
  ushort local_b0;
  byte local_a8;
  char local_a0 [8];
  longlong local_98;
  longlong *local_90;
  undefined8 local_88;
  undefined1 local_80;
  int local_78 [2];
  undefined8 ***local_70 [3];
  ushort local_58;
  byte local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if ((*(char *)(*(longlong *)(param_1 + 0x48) + 0x78) == '\x01') &&
     (cVar7 = FUN_14097f994(param_1), cVar7 != '\0')) {
    uVar13 = 0;
    goto LAB_14105299a;
  }
  plVar4 = *(longlong **)(param_1 + 0xf0);
  uVar13 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if (((((plVar4 == (longlong *)0x0) || (*(int *)(param_1 + 0xec) == 0)) ||
       (uVar3 = *(uint *)(param_1 + 0xe8), (int)uVar3 < 0)) ||
      ((DAT_14c9647dc <= (int)uVar3 ||
       (lVar14 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8), lVar14 == 0)))) ||
     ((*(int *)(lVar14 + 0x10) != *(int *)(param_1 + 0xec) ||
      ((*(uint *)(lVar14 + 8) & 0x10200000) != 0)))) goto LAB_14105299a;
  lVar14 = *(longlong *)(param_1 + 0x48);
  lVar16 = *(longlong *)(param_1 + 0x40);
  local_98 = param_1;
  if (lVar16 == 0) {
    lVar15 = 0;
    local_98 = 0;
LAB_141052af1:
    local_90 = (longlong *)0x0;
    bVar6 = true;
  }
  else {
    if (*(int *)(lVar16 + 0x4c) == 0) {
LAB_141052a51:
      lVar15 = 0;
    }
    else {
      uVar3 = *(uint *)(lVar16 + 0x48);
      lVar15 = 0;
      if ((-1 < (int)uVar3) && ((int)uVar3 < DAT_14c9647dc)) {
        plVar10 = (longlong *)
                  ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
        if ((plVar10 == (longlong *)0x0) ||
           (((int)plVar10[2] != *(int *)(lVar16 + 0x4c) ||
            ((*(uint *)(plVar10 + 1) & 0x10200000) != 0)))) goto LAB_141052a51;
        lVar15 = *plVar10;
      }
    }
    plVar10 = *(longlong **)(lVar16 + 0x118);
    if (plVar10 == (longlong *)0x0) goto LAB_141052af1;
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)((longlong)plVar10 + 0xc) = *(int *)((longlong)plVar10 + 0xc) + 1;
    UNLOCK();
    LOCK();
    plVar1 = plVar10 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar2 = (int *)((longlong)plVar10 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
    }
    LOCK();
    *(int *)((longlong)plVar10 + 0xc) = *(int *)((longlong)plVar10 + 0xc) + 1;
    UNLOCK();
    bVar6 = false;
    local_90 = plVar10;
  }
  plVar10 = local_90;
  local_78[0] = 0;
  local_a0[0] = '\x03';
  local_88._0_4_ = 0;
  if (lVar15 == 0) {
    iVar8 = 0;
    uVar3 = (uint)local_88;
  }
  else {
    uVar3 = *(uint *)(lVar15 + 0xc);
    local_88 = (ulonglong)uVar3;
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar16 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar16 = 0;
    }
    iVar8 = *(int *)(lVar16 + 0x10);
    if (*(int *)(lVar16 + 0x10) == 0) {
      LOCK();
      iVar8 = DAT_14c964868 + 1;
      UNLOCK();
      iVar12 = DAT_14c964868 + 1;
      bVar17 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar8;
      if (bVar17) {
        local_f4 = iVar12;
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar12);
        iVar12 = local_f4;
      }
      LOCK();
      iVar8 = *(int *)(lVar16 + 0x10);
      bVar17 = iVar8 == 0;
      if (bVar17) {
        *(int *)(lVar16 + 0x10) = iVar12;
        iVar8 = 0;
      }
      UNLOCK();
      uVar3 = (uint)local_88;
      if (bVar17) {
        iVar8 = iVar12;
      }
    }
  }
  local_88._0_4_ = uVar3;
  local_88 = CONCAT44(iVar8,(uint)local_88);
  local_80 = 2;
  if (local_78[0] != 0) {
    FUN_1417398fc(&DAT_14c9a3da0,local_78[0] + -1,1);
    local_78[0] = 0;
  }
  if (!bVar6) {
    LOCK();
    piVar2 = (int *)((longlong)plVar10 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
    }
  }
  FUN_1447c3578(lVar14 + 0x80,local_70,local_a0);
  FUN_1448173f8(local_78);
  if ((local_a0[0] == '\x03') && (local_90 != (longlong *)0x0)) {
    LOCK();
    piVar2 = (int *)((longlong)local_90 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*local_90 + 0x10))();
    }
  }
  lVar16 = *(longlong *)(param_1 + 0x40);
  if (lVar16 == 0) {
    lVar15 = 0;
    lVar16 = 0;
LAB_141052b23:
    local_90 = (longlong *)0x0;
    bVar6 = true;
    local_98 = lVar16;
  }
  else {
    if (*(int *)(lVar16 + 0x4c) == 0) {
LAB_141052a59:
      lVar15 = 0;
    }
    else {
      uVar3 = *(uint *)(lVar16 + 0x48);
      lVar15 = 0;
      if ((-1 < (int)uVar3) && ((int)uVar3 < DAT_14c9647dc)) {
        plVar10 = (longlong *)
                  ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
        if ((plVar10 == (longlong *)0x0) ||
           (((int)plVar10[2] != *(int *)(lVar16 + 0x4c) ||
            ((*(uint *)(plVar10 + 1) & 0x10200000) != 0)))) goto LAB_141052a59;
        lVar15 = *plVar10;
      }
    }
    plVar10 = *(longlong **)(lVar16 + 0x118);
    lVar16 = param_1;
    if (plVar10 == (longlong *)0x0) goto LAB_141052b23;
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)((longlong)plVar10 + 0xc) = *(int *)((longlong)plVar10 + 0xc) + 1;
    UNLOCK();
    LOCK();
    plVar1 = plVar10 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar2 = (int *)((longlong)plVar10 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
    }
    LOCK();
    *(int *)((longlong)plVar10 + 0xc) = *(int *)((longlong)plVar10 + 0xc) + 1;
    UNLOCK();
    bVar6 = false;
    local_98 = param_1;
    local_90 = plVar10;
  }
  plVar10 = local_90;
  local_78[0] = 0;
  local_a0[0] = '\x03';
  local_88._0_4_ = 0;
  if (lVar15 == 0) {
    iVar8 = 0;
    uVar3 = (uint)local_88;
  }
  else {
    uVar3 = *(uint *)(lVar15 + 0xc);
    local_88 = (ulonglong)uVar3;
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar16 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar16 = 0;
    }
    iVar8 = *(int *)(lVar16 + 0x10);
    if (*(int *)(lVar16 + 0x10) == 0) {
      LOCK();
      iVar8 = DAT_14c964868 + 1;
      UNLOCK();
      iVar12 = DAT_14c964868 + 1;
      bVar17 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar8;
      if (bVar17) {
        local_f4 = iVar12;
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar12);
        iVar12 = local_f4;
      }
      LOCK();
      iVar8 = *(int *)(lVar16 + 0x10);
      bVar17 = iVar8 == 0;
      if (bVar17) {
        *(int *)(lVar16 + 0x10) = iVar12;
        iVar8 = 0;
      }
      UNLOCK();
      uVar3 = (uint)local_88;
      if (bVar17) {
        iVar8 = iVar12;
      }
    }
  }
  local_88._0_4_ = uVar3;
  local_88 = CONCAT44(iVar8,(uint)local_88);
  local_80 = 2;
  if (local_78[0] != 0) {
    FUN_1417398fc(&DAT_14c9a3da0,local_78[0] + -1,1);
    local_78[0] = 0;
  }
  if (!bVar6) {
    LOCK();
    piVar2 = (int *)((longlong)plVar10 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
    }
  }
  FUN_1447c3578(lVar14 + 0xb8,local_c8,local_a0);
  FUN_1448173f8(local_78);
  if ((local_a0[0] == '\x03') && (local_90 != (longlong *)0x0)) {
    LOCK();
    piVar2 = (int *)((longlong)local_90 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*local_90 + 0x10))();
    }
  }
  lVar16 = *(longlong *)(param_1 + 0x40);
  if (lVar16 == 0) {
    lVar15 = 0;
    param_1 = 0;
LAB_141052bca:
    local_90 = (longlong *)0x0;
    bVar6 = true;
    local_98 = param_1;
  }
  else {
    if (*(int *)(lVar16 + 0x4c) == 0) {
LAB_141052a61:
      lVar15 = 0;
    }
    else {
      uVar3 = *(uint *)(lVar16 + 0x48);
      lVar15 = 0;
      if ((-1 < (int)uVar3) && ((int)uVar3 < DAT_14c9647dc)) {
        plVar10 = (longlong *)
                  ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
        if ((plVar10 == (longlong *)0x0) ||
           (((int)plVar10[2] != *(int *)(lVar16 + 0x4c) ||
            ((*(uint *)(plVar10 + 1) & 0x10200000) != 0)))) goto LAB_141052a61;
        lVar15 = *plVar10;
      }
    }
    plVar10 = *(longlong **)(lVar16 + 0x118);
    if (plVar10 == (longlong *)0x0) goto LAB_141052bca;
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)((longlong)plVar10 + 0xc) = *(int *)((longlong)plVar10 + 0xc) + 1;
    UNLOCK();
    LOCK();
    plVar1 = plVar10 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar2 = (int *)((longlong)plVar10 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
    }
    LOCK();
    *(int *)((longlong)plVar10 + 0xc) = *(int *)((longlong)plVar10 + 0xc) + 1;
    UNLOCK();
    bVar6 = false;
    local_98 = param_1;
    local_90 = plVar10;
  }
  plVar10 = local_90;
  local_78[0] = 0;
  local_a0[0] = '\x03';
  local_88._0_4_ = 0;
  if (lVar15 == 0) {
    iVar8 = 0;
    uVar3 = (uint)local_88;
  }
  else {
    uVar3 = *(uint *)(lVar15 + 0xc);
    local_88 = (ulonglong)uVar3;
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar16 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar16 = 0;
    }
    iVar8 = *(int *)(lVar16 + 0x10);
    if (*(int *)(lVar16 + 0x10) == 0) {
      LOCK();
      iVar8 = DAT_14c964868 + 1;
      UNLOCK();
      iVar12 = DAT_14c964868 + 1;
      bVar17 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar8;
      if (bVar17) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar12);
      }
      LOCK();
      iVar8 = *(int *)(lVar16 + 0x10);
      bVar17 = iVar8 == 0;
      if (bVar17) {
        *(int *)(lVar16 + 0x10) = iVar12;
        iVar8 = 0;
      }
      UNLOCK();
      uVar3 = (uint)local_88;
      if (bVar17) {
        iVar8 = iVar12;
      }
    }
  }
  local_88._0_4_ = uVar3;
  local_88 = CONCAT44(iVar8,(uint)local_88);
  local_80 = 2;
  if (local_78[0] != 0) {
    FUN_1417398fc(&DAT_14c9a3da0,local_78[0] + -1,1);
    local_78[0] = 0;
  }
  if (!bVar6) {
    LOCK();
    piVar2 = (int *)((longlong)plVar10 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
    }
  }
  FUN_1447c3578(lVar14 + 0xf0,local_f0,local_a0);
  FUN_1448173f8(local_78);
  if ((local_a0[0] == '\x03') && (local_90 != (longlong *)0x0)) {
    LOCK();
    piVar2 = (int *)((longlong)local_90 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*local_90 + 0x10))();
    }
  }
  uVar9 = (**(code **)(*plVar4 + 0x30))(plVar4);
  FUN_141052d5e(uVar9,local_70,local_c8,local_f0);
  pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_d0 * 0x120));
  if (pcVar5 != (code *)0x0) {
    ppppuVar11 = local_f0;
    if (0x18 < local_d8) {
      ppppuVar11 = (undefined8 ****)local_f0[0];
    }
    (*pcVar5)(ppppuVar11);
  }
  if (0x18 < local_d8) {
    FUN_1400020a8(local_f0[0]);
  }
  pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_a8 * 0x120));
  if (pcVar5 != (code *)0x0) {
    ppppuVar11 = local_c8;
    if (0x18 < local_b0) {
      ppppuVar11 = (undefined8 ****)local_c8[0];
    }
    (*pcVar5)(ppppuVar11);
  }
  if (0x18 < local_b0) {
    FUN_1400020a8(local_c8[0]);
  }
  pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_50 * 0x120));
  if (pcVar5 != (code *)0x0) {
    ppppuVar11 = local_70;
    if (0x18 < local_58) {
      ppppuVar11 = (undefined8 ****)local_70[0];
    }
    (*pcVar5)(ppppuVar11);
  }
  if (0x18 < local_58) {
    FUN_1400020a8(local_70[0]);
  }
LAB_14105299a:
  if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar13 & 0xffffffff;
}



// FUNCTION 141052d5e FUN_141052d5e body=696 status=ok
// SIG undefined FUN_141052d5e(void)

void FUN_141052d5e(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  byte bVar1;
  code *pcVar2;
  longlong *plVar3;
  ulonglong uVar4;
  undefined4 *puVar5;
  longlong *_Dst;
  uint uVar6;
  undefined4 uVar7;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined1 local_a0 [24];
  undefined4 local_88;
  undefined4 uStack_84;
  ushort local_70;
  byte local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (*(char *)(param_4 + 8) == '\x03') {
    uVar7 = *param_4;
  }
  else {
    puVar5 = &local_88;
    FUN_1400b56fe(puVar5,param_4,3);
    uVar7 = 0;
    if (local_68 != 0) {
      uVar7 = local_88;
    }
    pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
    if (pcVar2 != (code *)0x0) {
      if (0x18 < local_70) {
        puVar5 = (undefined4 *)CONCAT44(uStack_84,local_88);
      }
      (*pcVar2)(puVar5);
    }
    if (0x18 < local_70) {
      FUN_1400020a8(CONCAT44(uStack_84,local_88));
    }
  }
  local_b8 = 0x47efffffe0000000;
  local_b0 = 0x47efffffe0000000;
  local_a8 = 0x47efffffe0000000;
  FUN_1405b801a(param_3,local_a0);
  puVar5 = &local_88;
  FUN_141053028(puVar5,param_2,local_a0,uVar7);
  _Dst = (longlong *)(param_1 + 0x18);
  bVar1 = *(byte *)(param_1 + 0x38);
  if (bVar1 == local_68) {
    if (local_70 < 0x19) {
      puVar5 = &local_88;
    }
    else {
      puVar5 = (undefined4 *)CONCAT44(uStack_84,local_88);
    }
    if (0x18 < *(ushort *)(param_1 + 0x30)) {
      _Dst = (longlong *)*_Dst;
    }
    uVar4 = (ulonglong)((uint)bVar1 * 0x120);
    pcVar2 = *(code **)((longlong)&DAT_14c9a85c0 + uVar4);
    if (pcVar2 == (code *)0x0) {
      memcpy(_Dst,puVar5,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar4));
    }
    else {
      (*pcVar2)(_Dst);
    }
  }
  else {
    pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar1 * 0x120));
    if (pcVar2 != (code *)0x0) {
      plVar3 = _Dst;
      if (0x18 < *(ushort *)(param_1 + 0x30)) {
        plVar3 = (longlong *)*_Dst;
      }
      (*pcVar2)(plVar3);
    }
    if (0x18 < *(ushort *)(param_1 + 0x30)) {
      FUN_1400020a8(*_Dst);
    }
    uVar6 = (uint)local_68;
    *(ushort *)(param_1 + 0x30) = local_70;
    plVar3 = _Dst;
    if (0x18 < local_70) {
      plVar3 = (longlong *)FUN_14001cc68(local_70,0);
      *_Dst = (longlong)plVar3;
      puVar5 = (undefined4 *)CONCAT44(uStack_84,local_88);
    }
    pcVar2 = *(code **)((longlong)&DAT_14c9a85b0 + (ulonglong)(uVar6 * 0x120));
    if (pcVar2 == (code *)0x0) {
      memcpy(plVar3,puVar5,(longlong)*(int *)((longlong)&DAT_14c9a8510 + (ulonglong)(uVar6 * 0x120))
            );
    }
    else {
      (*pcVar2)(plVar3,puVar5);
    }
    *(byte *)(param_1 + 0x38) = local_68;
  }
  *(undefined4 *)(param_1 + 0x4c) = uStack_54;
  *(undefined4 *)(param_1 + 0x50) = uStack_50;
  *(undefined4 *)(param_1 + 0x54) = uStack_4c;
  *(undefined4 *)(param_1 + 0x58) = uStack_48;
  *(undefined4 *)(param_1 + 0x40) = local_60;
  *(undefined4 *)(param_1 + 0x44) = uStack_5c;
  *(undefined4 *)(param_1 + 0x48) = uStack_58;
  *(undefined4 *)(param_1 + 0x4c) = uStack_54;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
  if (pcVar2 != (code *)0x0) {
    if (local_70 < 0x19) {
      puVar5 = &local_88;
    }
    else {
      puVar5 = (undefined4 *)CONCAT44(uStack_84,local_88);
    }
    (*pcVar2)(puVar5);
  }
  if (0x18 < local_70) {
    FUN_1400020a8(CONCAT44(uStack_84,local_88));
  }
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141053028 FUN_141053028 body=154 status=ok
// SIG undefined FUN_141053028(void)

undefined8 *
FUN_141053028(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined4 param_4)

{
  byte bVar1;
  ushort uVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 *_Dst;
  undefined8 *_Src;
  
  bVar1 = *(byte *)(param_2 + 4);
  uVar2 = *(ushort *)(param_2 + 3);
  *(ushort *)(param_1 + 3) = uVar2;
  _Dst = param_1;
  _Src = param_2;
  if (0x18 < uVar2) {
    _Dst = (undefined8 *)FUN_14001cc68(uVar2,0);
    *param_1 = _Dst;
    _Src = (undefined8 *)*param_2;
  }
  pcVar3 = *(code **)((longlong)&DAT_14c9a85b0 + (ulonglong)((uint)bVar1 * 0x120));
  if (pcVar3 == (code *)0x0) {
    memcpy(_Dst,_Src,(longlong)*(int *)((longlong)&DAT_14c9a8510 + (ulonglong)((uint)bVar1 * 0x120))
          );
  }
  else {
    (*pcVar3)();
  }
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  uVar4 = param_3[1];
  param_1[5] = *param_3;
  param_1[6] = uVar4;
  param_1[7] = param_3[2];
  *(undefined4 *)(param_1 + 8) = param_4;
  return param_1;
}



// FUNCTION 1410530c2 FUN_1410530c2 body=1053 status=ok
// SIG undefined FUN_1410530c2(void)

void FUN_1410530c2(longlong param_1,longlong param_2,undefined1 param_3,longlong param_4,
                  undefined8 param_5)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  longlong lVar8;
  int iVar9;
  longlong *plVar10;
  longlong lVar11;
  bool bVar12;
  undefined1 auStack_78 [40];
  undefined8 *local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  puVar6 = (undefined8 *)FUN_14001cc68(0x38,0x10);
  iVar5 = DAT_14c762760 + 1;
  *(int *)(puVar6 + 1) = DAT_14c762760;
  DAT_14c762760 = iVar5;
  *puVar6 = &PTR_LAB_14acd0ae0;
  *(undefined4 *)((longlong)puVar6 + 0x14) = 0;
  if (param_2 == 0) {
    *(undefined4 *)(puVar6 + 2) = 0;
    iVar5 = 0;
  }
  else {
    uVar3 = *(uint *)(param_2 + 0xc);
    *(uint *)(puVar6 + 2) = uVar3;
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar11 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar11 = 0;
    }
    iVar5 = *(int *)(lVar11 + 0x10);
    if (*(int *)(lVar11 + 0x10) == 0) {
      LOCK();
      iVar5 = DAT_14c964868 + 1;
      UNLOCK();
      iVar9 = DAT_14c964868 + 1;
      bVar12 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar5;
      if (bVar12) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar9);
      }
      LOCK();
      iVar5 = *(int *)(lVar11 + 0x10);
      bVar12 = iVar5 == 0;
      if (bVar12) {
        *(int *)(lVar11 + 0x10) = iVar9;
        iVar5 = 0;
      }
      UNLOCK();
      if (bVar12) {
        iVar5 = iVar9;
      }
    }
  }
  *(int *)((longlong)puVar6 + 0x14) = iVar5;
  *(undefined1 *)(puVar6 + 3) = param_3;
  *puVar6 = &PTR_FUN_14b5afc70;
  puVar6[4] = 0;
  puVar6[5] = 0;
  *(undefined1 *)(puVar6 + 6) = 0;
  FUN_1410534e0(puVar6 + 4);
  local_50 = (undefined8 *)0x0;
  local_48 = 0;
  FUN_1446efa72(&local_50,0,3,0x10);
  puVar4 = local_50;
  local_48 = 3;
  *local_50 = &PTR_LAB_14b5afcc0;
  LOCK();
  UNLOCK();
  lVar8 = DAT_14c758608 + 1;
  lVar11 = DAT_14c758608 + 1;
  if (lVar8 == 0) {
    LOCK();
    UNLOCK();
    lVar8 = DAT_14c758608 + 2;
    lVar11 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar11;
  local_50[2] = lVar8;
  *local_50 = &PTR_FUN_14b96c170;
  local_50[3] = 0;
  iVar5 = 0;
  if (param_4 != 0) {
    uVar3 = *(uint *)(param_4 + 0xc);
    *(uint *)(local_50 + 3) = uVar3;
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar11 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar11 = 0;
    }
    iVar5 = *(int *)(lVar11 + 0x10);
    if (*(int *)(lVar11 + 0x10) == 0) {
      LOCK();
      iVar5 = DAT_14c964868 + 1;
      UNLOCK();
      iVar9 = DAT_14c964868 + 1;
      bVar12 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar5;
      if (bVar12) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar9);
      }
      LOCK();
      iVar5 = *(int *)(lVar11 + 0x10);
      bVar12 = iVar5 == 0;
      if (bVar12) {
        *(int *)(lVar11 + 0x10) = iVar9;
        iVar5 = 0;
      }
      UNLOCK();
      if (bVar12) {
        iVar5 = iVar9;
      }
    }
  }
  *(int *)((longlong)puVar4 + 0x1c) = iVar5;
  puVar4[4] = param_5;
  plVar7 = (longlong *)FUN_14001cc68(0x20,0x10);
  plVar7[1] = (longlong)&DAT_100000001;
  *plVar7 = (longlong)&PTR_FUN_14b5afca0;
  plVar7[2] = (longlong)local_50;
  local_50 = (undefined8 *)0x0;
  *(int *)(plVar7 + 3) = local_48;
  local_48 = 0;
  if (plVar7 == (longlong *)0x0) {
    puVar6[4] = 0x10;
    plVar10 = (longlong *)puVar6[5];
    if (plVar10 != (longlong *)0x0) {
      puVar6[5] = 0;
LAB_14105340f:
      LOCK();
      plVar1 = plVar10 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar10)(plVar10);
        LOCK();
        piVar2 = (int *)((longlong)plVar10 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
        }
      }
      if (plVar7 != (longlong *)0x0) goto LAB_1410532c4;
    }
  }
  else {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    puVar6[4] = plVar7 + 2;
    plVar10 = (longlong *)puVar6[5];
    if (plVar7 == plVar10) {
      LOCK();
      plVar10 = plVar7 + 1;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)*plVar10 == 0) {
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
      puVar6[5] = plVar7;
      if (plVar10 != (longlong *)0x0) goto LAB_14105340f;
    }
LAB_1410532c4:
    LOCK();
    plVar10 = plVar7 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
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
  if (local_48 != 0) {
    if (local_50 == (undefined8 *)0x0) goto LAB_1410532e3;
    (**(code **)*local_50)(local_50,0);
    FUN_1446efa72(&local_50,0,0,0x10);
    local_48 = 0;
  }
  if (local_50 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_1410532e3:
  *(undefined1 *)(puVar6 + 6) = *(undefined1 *)(param_1 + 0x1c8);
  iVar5 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar5 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar5 + 1U) {
    FUN_141053524((longlong *)(param_1 + 0x198),iVar5);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar5 * 8) = puVar6;
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1410534e0 FUN_1410534e0 body=68 status=ok
// SIG undefined FUN_1410534e0(void)

void FUN_1410534e0(longlong *param_1)

{
  undefined8 *puVar1;
  
  param_1 = (longlong *)*param_1;
  if (((param_1 != (longlong *)0x0) && ((int)param_1[1] != 0)) &&
     (puVar1 = (undefined8 *)*param_1, puVar1 != (undefined8 *)0x0)) {
    (**(code **)*puVar1)(puVar1,0);
    FUN_1446efa72(param_1,0,0,0x10);
    *(undefined4 *)(param_1 + 1) = 0;
  }
  return;
}



// FUNCTION 141053524 FUN_141053524 body=353 status=ok
// SIG undefined FUN_141053524(void)

void FUN_141053524(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1410535ab;
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
LAB_1410535ab:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 141053686 FUN_141053686 body=279 status=ok
// SIG undefined FUN_141053686(void)

undefined8 FUN_141053686(longlong param_1,undefined8 param_2)

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
    if (iVar1 == 2) goto LAB_141053797;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_141053797;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_141053797:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_141053744;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5,param_2);
      uVar6 = 1;
      goto LAB_141053744;
    }
  }
  uVar6 = 0;
LAB_141053744:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14105379e FUN_14105379e body=49 status=ok
// SIG undefined FUN_14105379e(void)

void FUN_14105379e(longlong param_1,longlong *param_2)

{
  byte bVar1;
  ulonglong uVar2;
  
  bVar1 = (**(code **)(*param_2 + 8))(param_2);
  uVar2 = 1L << (bVar1 & 0x3f);
  *(ulonglong *)(param_1 + 0xe0) = *(ulonglong *)(param_1 + 0xe0) | uVar2;
  FUN_14097d6da(param_1,CONCAT71((int7)(uVar2 >> 8),4));
  return;
}



// FUNCTION 1410537d0 FUN_1410537d0 body=151 status=ok
// SIG undefined FUN_1410537d0(void)

void FUN_1410537d0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0x148);
  if ((longlong)iVar1 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x140);
    lVar4 = 0;
    do {
      lVar2 = *(longlong *)(lVar3 + 0x38 + lVar4);
      if (lVar2 != 0) {
        FUN_141053868(lVar2,0);
      }
      lVar4 = lVar4 + 0x48;
    } while ((longlong)iVar1 * 0x48 != lVar4);
  }
  *(byte *)(param_1 + 0x9c) = *(byte *)(param_1 + 0x9c) & 0xfe;
  *(undefined4 *)(param_1 + 0x98) = 0;
  if (((*(byte *)(param_1 + 0xb8) & 6) != 0) &&
     ((lVar3 = *(longlong *)(param_1 + 0xb0), lVar3 != 0 ||
      (lVar3 = FUN_1448abda6(param_1), lVar3 != 0)))) {
    FUN_1401b4182(lVar3,param_1);
    return;
  }
  return;
}



// FUNCTION 141053868 FUN_141053868 body=353 status=ok
// SIG undefined FUN_141053868(void)

undefined8 FUN_141053868(longlong param_1,byte param_2)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  undefined8 uVar5;
  bool bVar6;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(longlong *)(param_1 + 0xc0) == 0) {
    bVar6 = false;
  }
  else {
    bVar6 = *(longlong *)(param_1 + 0xa8) != 0;
  }
  if ((bVar6 | param_2) == 1) {
    cVar1 = *(char *)(param_1 + 0x188);
    if (cVar1 != '\x02') {
      iVar4 = FUN_144d5fd40(*(longlong *)(param_1 + 0xc0),0xffffffff);
      if (iVar4 < 0) goto LAB_1410538cd;
    }
    lVar2 = *(longlong *)(param_1 + 0x180);
    if (lVar2 == 0) {
      if (*(longlong *)(param_1 + 0x194) == 0) {
        local_38 = 0;
        uStack_34 = 0;
        uStack_30 = 0;
        uStack_2c = 0;
      }
      else {
        local_38 = *(undefined4 *)(param_1 + 0x18c);
        uStack_34 = *(undefined4 *)(param_1 + 400);
        uStack_30 = *(undefined4 *)(param_1 + 0x194);
        uStack_2c = *(undefined4 *)(param_1 + 0x198);
      }
    }
    else {
      local_38 = *(undefined4 *)(lVar2 + 0x48);
      uStack_34 = *(undefined4 *)(lVar2 + 0x4c);
      uStack_30 = *(undefined4 *)(lVar2 + 0x50);
      uStack_2c = *(undefined4 *)(lVar2 + 0x54);
    }
    *(undefined8 *)(param_1 + 0x1a0) = 0;
    *(undefined4 *)(param_1 + 0x174) = 0;
    *(undefined8 *)(param_1 + 0x180) = 0;
    *(undefined8 *)(param_1 + 0x18c) = 0;
    *(undefined8 *)(param_1 + 0x194) = 0;
    *(undefined1 *)(param_1 + 0x188) = 2;
    plVar3 = *(longlong **)(param_1 + 0xb0);
    if ((plVar3 != (longlong *)0x0) && (*(char *)((longlong)plVar3 + 0x14) == '\x01')) {
      (**(code **)(*plVar3 + 0x30))();
    }
    if (*(longlong *)(param_1 + 0xd8) != 0) {
      FUN_144d5fa90(param_1 + 0xd8,0,0);
    }
    *(undefined8 *)(param_1 + 0x180) = 0;
    *(undefined8 *)(param_1 + 0x1a0) = 0;
    *(undefined4 *)(param_1 + 0x1b0) = 0;
    *(undefined8 *)(param_1 + 0x18c) = 0;
    *(undefined8 *)(param_1 + 0x194) = 0;
    if (*(int *)(param_1 + 0x1b4) != 0) {
      FUN_144893a1c(param_1 + 0x1a8,0);
    }
    FUN_140b0ad52(param_1);
    if (cVar1 != '\x02') {
      FUN_1438b5aaa(param_1 + 0x48,param_1,&local_38);
    }
    uVar5 = 1;
  }
  else {
LAB_1410538cd:
    uVar5 = 0;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410539ca FUN_1410539ca body=50 status=ok
// SIG undefined FUN_1410539ca(void)

void FUN_1410539ca(longlong param_1)

{
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14b99e760;
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FUN_1400020a8();
  }
  FUN_1410539fc(param_1 + 0x10);
  return;
}



// FUNCTION 1410539fc FUN_1410539fc body=94 status=ok
// SIG undefined FUN_1410539fc(void)

void FUN_1410539fc(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_14b242fd0;
  plVar3 = (longlong *)param_1[2];
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
  plVar3 = (longlong *)param_1[5];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000141053a56. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 141053a5a FUN_141053a5a body=2342 status=ok
// SIG undefined FUN_141053a5a(void)

undefined8 * FUN_141053a5a(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  wchar_t *pwVar2;
  int iVar3;
  DWORD DVar4;
  DWORD DVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 uVar10;
  size_t sVar11;
  longlong *plVar12;
  ulonglong uVar13;
  undefined1 auStack_128 [32];
  undefined8 local_108;
  longlong local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  LARGE_INTEGER local_e8;
  undefined8 local_e0;
  longlong local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  longlong local_68;
  undefined8 local_60;
  undefined4 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if (*(char *)(param_1 + 0x51) == '\x01') {
    uVar10 = FUN_14001cc68(0x228,0x10);
    FUN_146b1d66a(uVar10);
    *param_2 = uVar10;
    puVar7 = (undefined8 *)FUN_14001cc68(0x18,0x10);
    puVar7[1] = &DAT_100000001;
    *puVar7 = &PTR_LAB_149f2ac40;
    puVar7[2] = uVar10;
    param_2[1] = puVar7;
    FUN_146b22a6a(param_2,uVar10);
    goto LAB_141054136;
  }
  plVar6 = (longlong *)FUN_14001cc68(0x6b0,0x10);
  plVar6[1] = 0;
  plVar6[2] = 0;
  *plVar6 = (longlong)&PTR__purecall_149f2a170;
  InitializeCriticalSection((LPCRITICAL_SECTION)(plVar6 + 3));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(plVar6 + 3),4000);
  uVar13 = 0;
  plVar6[8] = 0;
  *(undefined4 *)(plVar6 + 9) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(plVar6 + 10));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(plVar6 + 10),4000);
  plVar6[0xf] = 0;
  *(undefined4 *)(plVar6 + 0x10) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(plVar6 + 0x11));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(plVar6 + 0x11),4000);
  plVar6[0x16] = 0;
  *(undefined4 *)(plVar6 + 0x17) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(plVar6 + 0x18));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(plVar6 + 0x18),4000);
  plVar6[0x1d] = 0;
  *(undefined4 *)(plVar6 + 0x1e) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(plVar6 + 0x1f));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(plVar6 + 0x1f),4000);
  plVar6[0x24] = 0;
  *(undefined4 *)(plVar6 + 0x25) = 0;
  *plVar6 = (longlong)&PTR__purecall_149f28bb0;
  *(undefined4 *)(plVar6 + 0x26) = 0;
  *(undefined2 *)((longlong)plVar6 + 0x134) = 0;
  *(undefined1 *)((longlong)plVar6 + 0x13c) = 0;
  *(undefined1 *)((longlong)plVar6 + 0x144) = 0;
  *(undefined4 *)(plVar6 + 0x29) = 0x1000000;
  QueryPerformanceCounter(&local_e8);
  plVar6[0x2a] = (longlong)((double)local_e8.QuadPart * DAT_14c83f420 + 16777216.0);
  plVar6[0x2b] = 0;
  plVar6[0x2c] = 0;
  plVar6[0x2d] = 0;
  plVar6[0x2e] = 0;
  plVar6[0x2f] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(plVar6 + 0x30));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(plVar6 + 0x30),4000);
  plVar6[0x35] = 0;
  plVar6[0x36] = -0x4010000000000000;
  plVar6[0x37] = 0;
  plVar6[0x38] = 0;
  plVar6[0x39] = 0;
  plVar6[0x3a] = 0;
  plVar6[0x3b] = 0;
  plVar6[0x3c] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(plVar6 + 0x3d));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(plVar6 + 0x3d),4000);
  *(undefined1 *)(plVar6 + 0x42) = 0;
  plVar6[0x48] = 0;
  *(undefined4 *)(plVar6 + 0x49) = 0;
  plVar6[0x43] = 0;
  plVar6[0x44] = 0;
  plVar6[0x45] = 0;
  *(undefined8 *)((longlong)plVar6 + 0x24c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)plVar6 + 0x254) = 0;
  plVar6[0x4c] = 0;
  *(undefined4 *)(plVar6 + 0x4d) = 0;
  plVar6[0x4e] = 0;
  *plVar6 = (longlong)&PTR_FUN_149f27ef0;
  plVar9 = plVar6 + 0x4f;
  plVar6[0x4f] = 0;
  plVar6[0x50] = 0;
  plVar6[0x51] = 0;
  plVar6[0x52] = 0;
  FUN_140056680(plVar6 + 0x53,&DAT_149e8e77a);
  *(undefined2 *)(plVar6 + 0x55) = 0;
  plVar6[0x5b] = 0;
  *(undefined4 *)(plVar6 + 0x5c) = 0;
  *(undefined8 *)((longlong)plVar6 + 0x2ac) = 0;
  *(undefined1 *)((longlong)plVar6 + 0x2b4) = 0;
  plVar6[0x57] = 0;
  plVar6[0x58] = 0;
  *(undefined8 *)((longlong)plVar6 + 0x2e4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)plVar6 + 0x2ec) = 0;
  plVar6[0x5f] = 0;
  *(undefined4 *)(plVar6 + 0x60) = 0;
  *(undefined1 *)(plVar6 + 0x61) = 0;
  plVar6[0x62] = 0;
  puVar7 = (undefined8 *)FUN_14001cc68(0x28,8);
  *puVar7 = 0;
  plVar6[0x62] = (longlong)puVar7;
  plVar6[0x65] = (longlong)puVar7;
  plVar6[100] = (longlong)puVar7;
  plVar6[99] = (longlong)puVar7;
  *(undefined8 *)((longlong)plVar6 + 0x34c) = 0;
  *(undefined8 *)((longlong)plVar6 + 0x354) = 0;
  plVar6[0x68] = 0;
  plVar6[0x69] = 0;
  plVar6[0x66] = 0;
  plVar6[0x67] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(plVar6 + 0x6c));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(plVar6 + 0x6c),4000);
  plVar6[0xd5] = 0x3200000000;
  lVar8 = FUN_144b46ff0();
  plVar6[0x4f] = lVar8;
  FUN_144b46fc0(lVar8,0x276f,plVar6);
  FUN_144b46fc0(plVar6[0x4f],0x4e7e,FUN_142915ab0);
  FUN_144b46fc0(plVar6[0x4f],0x29,1);
  FUN_144b46fc0(plVar6[0x4f],0x62,DAT_14c990ba8);
  FUN_144b46fc0(plVar6[0x4f],0x77,3);
  lVar8 = DAT_14c990b88;
  iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  if (iVar3 != 0x40000002) {
    if ((DAT_14c86a9f8 == '\x01') && (iVar3 != 2)) {
      if (iVar3 == 1) {
        DVar4 = FUN_140ad26c0();
        DVar5 = GetCurrentThreadId();
        uVar13 = (ulonglong)(DVar4 != DVar5);
      }
      else {
        uVar13 = 1;
      }
    }
    else {
      uVar13 = 0;
    }
  }
  FUN_144b46fc0(*plVar9,0x54,(uint)*(byte *)(lVar8 + uVar13) * 2 + 2);
  if (DAT_14c990b90 == '\x01') {
    FUN_144b46fc0(*plVar9,0x40,1);
  }
  else {
    FUN_144b46fc0(*plVar9,0x40,0);
  }
  FUN_144b46fc0(plVar6[0x4f],0x34,1);
  FUN_144b46fc0(plVar6[0x4f],99,1);
  FUN_144b46fc0(plVar6[0x4f],0x2777,plVar6);
  lVar8 = FUN_141054386();
  if (1 < *(int *)(lVar8 + 0xb0)) {
    pwVar2 = *(wchar_t **)(lVar8 + 0xa8);
    local_68 = 0;
    if (pwVar2 == (wchar_t *)0x0) {
      local_60 = 0;
      local_58 = 0;
    }
    else {
      sVar11 = wcslen(pwVar2);
      FUN_1449b853c(&local_e8,pwVar2,sVar11 & 0xffffffff,1);
    }
    FUN_144b46fc0(*plVar9,0x2714,local_60);
    if (local_68 != 0) {
      FUN_1400020a8();
    }
  }
  lVar8 = FUN_141054386();
  if (1 < *(int *)(lVar8 + 0xc0)) {
    pwVar2 = *(wchar_t **)(lVar8 + 0xb8);
    local_68 = 0;
    if (pwVar2 == (wchar_t *)0x0) {
      local_60 = 0;
      local_58 = 0;
    }
    else {
      sVar11 = wcslen(pwVar2);
      FUN_1449b853c(&local_e8,pwVar2,sVar11 & 0xffffffff,1);
    }
    FUN_144b46fc0(*plVar9,0x27c1,local_60);
    if (local_68 != 0) {
      FUN_1400020a8();
    }
  }
  if (DAT_14c990b91 == '\x01') {
    FUN_144b46fc0(*plVar9,0x4b,1);
  }
  FUN_144b46fc0(plVar6[0x4f],0x2766,&DAT_149f28098);
  FUN_144b46fc0(plVar6[0x4f],0x2751,0);
  FUN_144b46fc0(plVar6[0x4f],0x4e8c,FUN_142915c1f);
  FUN_144b46fc0(plVar6[0x4f],0x277d,plVar6);
  iVar3 = (int)plVar6[0xd5];
  *(int *)(plVar6 + 0xd5) = iVar3 + 0x32;
  if ((uint)(*(int *)((longlong)plVar6 + 0x6ac) - iVar3) < 0x32) {
    FUN_146b215d4(plVar6 + 0x71);
  }
  memset(plVar6 + 0x71 + (longlong)iVar3 * 2,0,800);
  lVar8 = FUN_141054386();
  local_e8.QuadPart = lVar8 + 0x58;
  local_100 = lVar8 + 0x68;
  local_108 = 0x100000000;
  local_f8 = 0xffffffff;
  local_f0 = 0;
  if (*(int *)(lVar8 + 0x80) != 0) {
    FUN_1449c0562(&local_108);
  }
  local_d0 = local_f8;
  uVar10 = local_d0;
  local_c8 = local_f0;
  local_c4 = local_ec;
  local_e0 = local_108;
  local_d8 = local_100;
  local_d0._4_4_ = (int)((ulonglong)local_f8 >> 0x20);
  if (local_d0._4_4_ < *(int *)(local_100 + 0x18)) {
    iVar3 = local_d0._4_4_;
    local_d0 = uVar10;
    do {
      (**(code **)(*plVar6 + 0xb0))
                (plVar6,*(longlong *)local_e8 + (longlong)iVar3 * 0x28,
                 *(longlong *)local_e8 + (longlong)iVar3 * 0x28 + 0x10);
      local_d0 = CONCAT44(local_d0._4_4_,(uint)local_d0 & ~local_e0._4_4_);
      FUN_1449c0562(&local_e0);
      iVar3 = local_d0._4_4_;
      uVar10 = local_d0;
    } while (local_d0._4_4_ < *(int *)(local_d8 + 0x18));
  }
  local_d0 = uVar10;
  *(undefined1 *)((longlong)plVar6 + 0x14b) = 0;
  *param_2 = plVar6;
  plVar9 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar9[1] = (longlong)&DAT_100000001;
  *plVar9 = (longlong)&PTR_FUN_149f2ac60;
  plVar9[2] = (longlong)plVar6;
  param_2[1] = plVar9;
  if ((plVar6 == (longlong *)0x0) ||
     (((plVar6[1] != 0 && (plVar6[2] != 0)) && (0 < *(int *)(plVar6[2] + 8))))) goto LAB_14105409f;
  if (plVar9 == (longlong *)0x0) {
    plVar6[1] = (longlong)plVar6;
    plVar12 = (longlong *)plVar6[2];
    if (plVar12 == (longlong *)0x0) goto LAB_14105409f;
LAB_1410542f0:
    LOCK();
    piVar1 = (int *)((longlong)plVar12 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar12 + 0x10))();
    }
    plVar6[2] = (longlong)plVar9;
    if (plVar9 == (longlong *)0x0) goto LAB_14105409f;
  }
  else {
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
    plVar6[1] = (longlong)plVar6;
    if ((longlong *)plVar6[2] != plVar9) {
      LOCK();
      *(int *)((longlong)plVar9 + 0xc) = *(int *)((longlong)plVar9 + 0xc) + 1;
      UNLOCK();
      plVar12 = (longlong *)plVar6[2];
      if (plVar12 != (longlong *)0x0) goto LAB_1410542f0;
      plVar6[2] = (longlong)plVar9;
    }
  }
  LOCK();
  plVar6 = plVar9 + 1;
  *(int *)plVar6 = (int)*plVar6 + -1;
  UNLOCK();
  if ((int)*plVar6 == 0) {
    (**(code **)*plVar9)(plVar9);
    LOCK();
    piVar1 = (int *)((longlong)plVar9 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
LAB_141054136:
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_50 ^ (ulonglong)auStack_128);
    }
  }
LAB_14105409f:
  if ((local_50 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 141054386 FUN_141054386 body=125 status=ok
// SIG undefined FUN_141054386(void)

longlong FUN_141054386(void)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined1 local_14 [4];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c990d98 == 0) {
    FUN_1446ddc76(&local_20,&DAT_149f297c8,1);
    uVar1 = FUN_144a52528();
    FUN_1402c9134(uVar1,local_20,local_14,1);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return DAT_14c990d98;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141054404 FUN_141054404 body=904 status=ok
// SIG undefined FUN_141054404(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_141054404(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  int *piVar1;
  byte bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong *plVar7;
  byte bVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined1 auStack_78 [40];
  undefined8 *local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar3 = (**(code **)(*(longlong *)*param_3 + 0x18))();
  lVar4 = FUN_14105478e(param_1 + 0x10);
  if ((lVar4 != 0) && ((longlong)*(int *)(lVar3 + 0x50) != 0)) {
    plVar5 = *(longlong **)(lVar3 + 0x48);
    lVar3 = (longlong)*(int *)(lVar3 + 0x50) * 0x90;
    do {
      if (*plVar5 == lVar4) {
        if (plVar5 != (longlong *)0x0) {
          bVar8 = *(byte *)(plVar5 + 0x11) & 1;
          goto LAB_141054485;
        }
        break;
      }
      plVar5 = plVar5 + 0x12;
      lVar3 = lVar3 + -0x90;
    } while (lVar3 != 0);
  }
  bVar8 = 0;
LAB_141054485:
  bVar2 = *(byte *)(param_1 + 0x28);
  plVar5 = (longlong *)FUN_14001cc68(0x48,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_14b429b00;
  plVar5[3] = 0;
  plVar5[4] = 0;
  *(undefined8 *)((longlong)plVar5 + 0x24) = 0;
  *(undefined8 *)((longlong)plVar5 + 0x2c) = 0;
  *(byte *)(plVar5 + 7) = (bVar8 ^ bVar2 ^ 1) * '\x02';
  plVar9 = plVar5 + 2;
  *plVar9 = (longlong)&PTR_FUN_14b429b20;
  *(byte *)(plVar5 + 8) = bVar2;
  if (plVar9 != (longlong *)0x0) {
    if (plVar5 == (longlong *)0x0) {
      _DAT_00000018 = 0x10;
      plVar10 = (longlong *)&DAT_00000020;
      plVar7 = _DAT_00000020;
      if (_DAT_00000020 != (longlong *)0x0) {
LAB_141054687:
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar7 + 0x10))();
        }
        *plVar10 = (longlong)plVar5;
        if (plVar5 != (longlong *)0x0) goto LAB_141054510;
      }
    }
    else {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
      plVar5[3] = (longlong)plVar9;
      if ((longlong *)plVar5[4] != plVar5) {
        LOCK();
        *(int *)((longlong)plVar5 + 0xc) = *(int *)((longlong)plVar5 + 0xc) + 1;
        UNLOCK();
        if ((longlong *)plVar5[4] != (longlong *)0x0) {
          plVar10 = plVar5 + 4;
          plVar7 = (longlong *)plVar5[4];
          goto LAB_141054687;
        }
        plVar5[4] = (longlong)plVar5;
      }
LAB_141054510:
      LOCK();
      plVar10 = plVar5 + 1;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)*plVar10 == 0) {
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
  plVar10 = (longlong *)*param_3;
  local_50 = (undefined8 *)0x0;
  local_48 = 0;
  FUN_1446efa72(&local_50,0,4,0x10);
  local_48 = 4;
  if (plVar5 == (longlong *)0x0) {
    *local_50 = &PTR_LAB_149e06450;
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 1;
    lVar3 = DAT_14c758608 + 1;
    if (lVar4 == 0) {
      LOCK();
      UNLOCK();
      lVar4 = DAT_14c758608 + 2;
      lVar3 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar3;
    local_50[2] = lVar4;
    *local_50 = &PTR_FUN_14b429b40;
    local_50[3] = 0x10;
    local_50[4] = 0;
    local_50[5] = &LAB_1409da3a0;
    *(undefined4 *)(local_50 + 6) = 0;
  }
  else {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    *local_50 = &PTR_LAB_149e06450;
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 1;
    lVar3 = DAT_14c758608 + 1;
    if (lVar4 == 0) {
      LOCK();
      UNLOCK();
      lVar4 = DAT_14c758608 + 2;
      lVar3 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar3;
    local_50[2] = lVar4;
    *local_50 = &PTR_FUN_14b429b40;
    local_50[3] = plVar9;
    local_50[4] = plVar5;
    LOCK();
    *(int *)((longlong)plVar5 + 0xc) = *(int *)((longlong)plVar5 + 0xc) + 1;
    UNLOCK();
    local_50[5] = &LAB_1409da3a0;
    *(undefined4 *)(local_50 + 6) = 0;
    LOCK();
    plVar7 = plVar5 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
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
  uVar6 = FUN_14105478e(param_1 + 0x10);
  (**(code **)(*plVar10 + 0x28))(plVar10,uVar6,&local_50);
  if (local_48 != 0) {
    if (local_50 == (undefined8 *)0x0) goto LAB_1410545ec;
    (**(code **)*local_50)(local_50,0);
    FUN_1446efa72(&local_50,0,0,0x10);
    local_48 = 0;
  }
  if (local_50 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_1410545ec:
  *param_2 = plVar9;
  param_2[1] = plVar5;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    LOCK();
    plVar9 = plVar5 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
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
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14105478e FUN_14105478e body=136 status=ok
// SIG undefined FUN_14105478e(void)

longlong FUN_14105478e(undefined8 *param_1)

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
    if (DAT_14cb8b9b8 == 0) {
      lVar1 = 0;
    }
    else {
      lVar1 = FUN_144837462(DAT_14cb8b9b8,local_40);
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



// FUNCTION 141054818 FUN_141054818 body=40 status=ok
// SIG undefined FUN_141054818(void)

undefined8 FUN_141054818(undefined8 param_1,int param_2)

{
  FUN_141054840();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141054840 FUN_141054840 body=235 status=ok
// SIG undefined FUN_141054840(void)

void FUN_141054840(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a16f790;
  if (param_1[0x2d] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x28] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x23] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (param_1[0x1f] != 0) {
    FUN_1400020a8();
  }
  FUN_1408910a4(param_1 + 0x17);
  *(undefined4 *)(param_1 + 0x16) = 0;
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  FUN_1407a3a68(param_1 + 0xd);
  FUN_1447a1747(param_1[0xb],*(undefined4 *)(param_1 + 0xc));
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  if (param_1[9] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14105493a FUN_14105493a body=143 status=ok
// SIG undefined FUN_14105493a(void)

undefined8 * FUN_14105493a(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b39baf0;
  FUN_1401beee6(param_1[8],*(undefined4 *)(param_1 + 9));
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  FUN_1401bef31(param_1[5],*(undefined4 *)(param_1 + 6));
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[3];
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
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1410549ca FUN_1410549ca body=1256 status=ok
// SIG undefined FUN_1410549ca(void)

undefined8
FUN_1410549ca(longlong *param_1,longlong param_2,double *param_3,undefined8 param_4,float *param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  bool bVar4;
  bool bVar5;
  undefined1 auVar6 [16];
  char cVar7;
  undefined8 uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 auStack_118 [32];
  double *local_f8;
  longlong local_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  longlong local_d8;
  longlong local_d0;
  longlong lStack_c8;
  longlong local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  double local_98;
  double local_90;
  double local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_b8 = *(undefined4 *)(param_2 + 0x40);
  uStack_b4 = *(undefined4 *)(param_2 + 0x44);
  uStack_b0 = *(undefined4 *)(param_2 + 0x48);
  uStack_ac = *(undefined4 *)(param_2 + 0x4c);
  local_a8 = *(undefined8 *)(param_2 + 0x50);
  (**(code **)(*param_1 + 0x560))(local_b8,&local_98);
  bVar4 = *(float *)((longlong)param_1 + 0x18c) < 1.0;
  bVar5 = *(float *)(param_2 + 4) <= 0.0001;
  if ((bVar4 && bVar5) &&
     (0.999845027923584 <=
      (double)param_1[0x34] * local_88 +
      (double)param_1[0x32] * local_98 + (double)param_1[0x33] * local_90)) {
    *(byte *)((longlong)param_1 + 0x181) = *(byte *)((longlong)param_1 + 0x181) | 2;
    goto LAB_141054bf8;
  }
  dVar1 = (double)param_1[0x25];
  dVar2 = (double)param_1[0x26];
  dVar3 = (double)param_1[0x27];
  dVar9 = dVar3 * dVar3 + dVar1 * dVar1 + dVar2 * dVar2;
  if (((dVar9 != 1.0) || (dVar10 = dVar1, dVar12 = dVar3, dVar11 = dVar2, NAN(dVar9))) &&
     (dVar10 = DAT_14c8464e0, dVar12 = DAT_14c8464f0, dVar11 = DAT_14c8464e8,
     9.99999993922529e-09 <= dVar9)) {
    dVar9 = 1.0 / SQRT(dVar9);
    dVar10 = dVar9 * dVar1;
    dVar12 = dVar3 * dVar9;
    dVar11 = dVar2 * dVar9;
  }
  if (dVar12 * local_88 + dVar10 * local_98 + dVar11 * local_90 <= 0.009999999776482582) {
    *(byte *)((longlong)param_1 + 0x181) = *(byte *)((longlong)param_1 + 0x181) | 2;
    if (bVar4 && bVar5) {
      dVar9 = (double)param_1[0x32];
      dVar12 = (double)param_1[0x33];
      dVar11 = (double)param_1[0x34];
      if (0.0 < dVar11 * local_88 + dVar9 * local_98 + local_90 * dVar12) goto LAB_141054bf8;
      dVar10 = local_98 * dVar12 - dVar9 * local_90;
      dVar14 = local_88 * dVar9 - dVar11 * local_98;
      dVar12 = local_90 * dVar11 - dVar12 * local_88;
      dVar9 = dVar10 * dVar10 + dVar12 * dVar12 + dVar14 * dVar14;
      if (((dVar9 != 1.0) || (dVar11 = dVar10, dVar13 = dVar12, dVar15 = dVar14, NAN(dVar9))) &&
         (dVar11 = DAT_14c8464f0, dVar13 = DAT_14c8464e0, dVar15 = DAT_14c8464e8,
         9.99999993922529e-09 <= dVar9)) {
        dVar9 = 1.0 / SQRT(dVar9);
        dVar11 = dVar10 * dVar9;
        dVar13 = dVar12 * dVar9;
        dVar15 = dVar14 * dVar9;
      }
      dVar1 = dVar3 * dVar11 + dVar1 * dVar13 + dVar2 * dVar15;
      dVar11 = dVar11 * dVar1;
      dVar15 = dVar15 * dVar1;
      dVar1 = dVar1 * dVar13;
      param_1[0x25] = (longlong)dVar1;
      param_1[0x26] = (longlong)dVar15;
      param_1[0x27] = (longlong)dVar11;
      if (param_3[2] * dVar11 + *param_3 * dVar1 + param_3[1] * dVar15 < 0.0) {
        auVar6._8_4_ = SUB84(dVar15,0);
        auVar6._0_8_ = -dVar1;
        auVar6._12_4_ = (uint)((ulonglong)dVar15 >> 0x20) ^ 0x80000000;
        *(undefined1 (*) [16])(param_1 + 0x25) = auVar6;
        param_1[0x27] = (longlong)-dVar11;
      }
      local_e8 = (undefined4)param_1[0x25];
      uStack_e4 = *(undefined4 *)((longlong)param_1 + 300);
      uStack_e0 = (undefined4)param_1[0x26];
      uStack_dc = *(undefined4 *)((longlong)param_1 + 0x134);
      local_d8 = param_1[0x27];
      (**(code **)(*param_1 + 0x550))(param_1,&local_d0);
      param_1[0x27] = local_c0;
      param_1[0x25] = local_d0;
      param_1[0x26] = lStack_c8;
    }
    else {
LAB_141054bf8:
      local_f8 = &local_98;
      local_f0 = param_2;
      (**(code **)(*param_1 + 0x500))(param_1,&local_d0,param_1 + 0x25,0x3f800000);
      param_1[0x27] = local_c0;
      param_1[0x25] = local_d0;
      param_1[0x26] = lStack_c8;
    }
    if ((double)param_1[0x27] * (double)param_1[0x27] +
        (double)param_1[0x25] * (double)param_1[0x25] +
        (double)param_1[0x26] * (double)param_1[0x26] <
        (double)(*(float *)(param_1 + 0x37) * *(float *)(param_1 + 0x37))) {
      (**(code **)(*param_1 + 0x590))(param_1,param_2);
    }
    else if ((*param_5 <= 0.0001) ||
            (cVar7 = (**(code **)(*param_1 + 0x5d8))(param_1,param_2), cVar7 != '\0'))
    goto LAB_141054b54;
    uVar8 = 0;
  }
  else {
    *(byte *)((longlong)param_1 + 0x181) = *(byte *)((longlong)param_1 + 0x181) & 0xfd;
LAB_141054b54:
    uVar8 = 1;
  }
  if ((local_80 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8;
}



// FUNCTION 141054eb4 FUN_141054eb4 body=289 status=ok
// SIG undefined FUN_141054eb4(void)

void FUN_141054eb4(longlong param_1,double *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  if ((*(byte *)(param_1 + 0x170) & 0x10) != 0) {
    dVar1 = param_3[2] * *(double *)(param_1 + 0x150) +
            *param_3 * *(double *)(param_1 + 0x140) + param_3[1] * *(double *)(param_1 + 0x148);
    dVar5 = param_3[2] - *(double *)(param_1 + 0x150) * dVar1;
    dVar3 = param_3[1] - *(double *)(param_1 + 0x148) * dVar1;
    dVar1 = *param_3 - dVar1 * *(double *)(param_1 + 0x140);
    dVar7 = dVar5 * dVar5 + dVar1 * dVar1 + dVar3 * dVar3;
    if (((dVar7 != 1.0) || (dVar4 = dVar3, dVar6 = dVar5, dVar2 = dVar1, NAN(dVar7))) &&
       (dVar4 = DAT_14c8464e8, dVar6 = DAT_14c8464f0, dVar2 = DAT_14c8464e0,
       9.99999993922529e-09 <= dVar7)) {
      dVar7 = 1.0 / SQRT(dVar7);
      dVar4 = dVar3 * dVar7;
      dVar6 = dVar5 * dVar7;
      dVar2 = dVar1 * dVar7;
    }
    *param_3 = dVar2;
    param_3[1] = dVar4;
    param_3[2] = dVar6;
  }
  param_2[2] = param_3[2];
  dVar1 = param_3[1];
  *param_2 = *param_3;
  param_2[1] = dVar1;
  return;
}



// FUNCTION 141054fd6 FUN_141054fd6 body=1275 status=ok
// SIG undefined FUN_141054fd6(void)

undefined8 FUN_141054fd6(longlong *param_1,float *param_2,float *param_3,undefined8 param_4)

{
  float fVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 auStack_268 [32];
  float *local_248;
  undefined1 local_240;
  double local_230;
  double local_228;
  double local_220;
  undefined4 local_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  longlong local_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  double local_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  double local_1d8;
  undefined8 uStack_1d0;
  float local_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  undefined8 local_1b8;
  double local_1a8;
  double local_1a0;
  double local_198;
  undefined1 local_190 [184];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  float local_c0;
  undefined1 local_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  undefined8 local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_268;
  memcpy(local_190,param_2,0xb8);
  local_d8 = *(undefined8 *)(param_2 + 0x2e);
  local_d0 = *(undefined8 *)(param_2 + 0x30);
  uStack_c8 = *(undefined8 *)(param_2 + 0x32);
  local_c0 = param_2[0x34];
  local_bc = *(undefined1 *)(param_2 + 0x35);
  local_98 = *(undefined8 *)(param_2 + 0x3e);
  local_b8 = *(undefined8 *)(param_2 + 0x36);
  uStack_b0 = *(undefined8 *)(param_2 + 0x38);
  local_a8 = param_2[0x3a];
  fStack_a4 = param_2[0x3b];
  fStack_a0 = param_2[0x3c];
  fStack_9c = param_2[0x3d];
  local_1b8 = *(undefined8 *)(param_2 + 0x14);
  local_1c8 = param_2[0x10];
  fStack_1c4 = param_2[0x11];
  fStack_1c0 = param_2[0x12];
  fStack_1bc = param_2[0x13];
  (**(code **)(*param_1 + 0x550))(param_1,&local_1a8);
  uVar5 = CONCAT71((int7)((ulonglong)param_4 >> 8),(char)param_1[0x30]) & 0xffffffffffffff40;
  lVar2 = param_1[0x22];
  local_1e8 = *(double *)(lVar2 + 0x240);
  uStack_1e0 = *(double *)(lVar2 + 0x248);
  local_1d8 = *(double *)(lVar2 + 0x250);
  uStack_1d0 = *(undefined8 *)(lVar2 + 600);
  local_200 = (double)*param_3;
  local_1f0 = (double)param_1[0x27] * local_200;
  uStack_1f8 = (double)param_1[0x26] * local_200;
  local_200 = local_200 * (double)param_1[0x25];
  local_240 = 0;
  local_248 = param_2;
  FUN_1402eda10(param_1,&local_200,&local_1e8,CONCAT71((int7)(uVar5 >> 8),(byte)uVar5 >> 6));
  if ((param_1[0x22] != 0) && ((*(byte *)((longlong)param_1 + 0x9e) & 0x10) != 0)) {
    if ((*(byte *)((longlong)param_2 + 0xad) & 1) == 0) {
      local_208 = param_1[0x27];
      local_218 = (undefined4)param_1[0x25];
      uStack_214 = *(undefined4 *)((longlong)param_1 + 300);
      uStack_210 = (undefined4)param_1[0x26];
      uStack_20c = *(undefined4 *)((longlong)param_1 + 0x134);
      (**(code **)(*param_1 + 0x588))(param_1,&local_1e8,&local_218,*param_3);
      dVar11 = local_1d8 - (double)param_1[0x27];
      dVar14 = uStack_1e0 - (double)param_1[0x26];
      dVar13 = local_1e8 - (double)param_1[0x25];
      dVar10 = dVar11 * local_198 + dVar13 * local_1a8 + dVar14 * local_1a0;
      if ((float)dVar10 < 0.0) {
        local_220 = (double)param_1[0x27] + (dVar11 - local_198 * dVar10);
        local_228 = (double)param_1[0x26] + (dVar14 - local_1a0 * dVar10);
        local_230 = (double)param_1[0x25] + (dVar13 - local_1a8 * dVar10);
        dVar14 = local_220 * local_220 + local_230 * local_230 + local_228 * local_228;
        if (((dVar14 != 1.0) ||
            (dVar12 = local_230, dVar11 = local_220, dVar13 = local_228, NAN(dVar14))) &&
           (dVar12 = DAT_14c8464e0, dVar11 = DAT_14c8464f0, dVar13 = DAT_14c8464e8,
           9.99999993922529e-09 <= dVar14)) {
          dVar13 = 1.0 / SQRT(dVar14);
          dVar12 = dVar13 * local_230;
          dVar11 = local_220 * dVar13;
          dVar13 = local_228 * dVar13;
        }
        dVar10 = (double)(-(float)dVar10 * *(float *)((longlong)param_1 + 0x1b4));
        if (SQRT(dVar14) <= dVar10) {
          dVar10 = SQRT(dVar14);
        }
        local_220 = local_220 - dVar11 * dVar10;
        local_228 = local_228 - dVar13 * dVar10;
        local_230 = local_230 - dVar10 * dVar12;
        (**(code **)(*param_1 + 0x550))(param_1,&local_200);
        param_1[0x27] = (longlong)local_1f0;
        uVar6 = (undefined4)local_200;
        uVar7 = local_200._4_4_;
        uVar8 = (undefined4)uStack_1f8;
        uVar9 = uStack_1f8._4_4_;
      }
      else {
        param_1[0x27] = (longlong)local_1d8;
        uVar6 = (undefined4)local_1e8;
        uVar7 = local_1e8._4_4_;
        uVar8 = (undefined4)uStack_1e0;
        uVar9 = uStack_1e0._4_4_;
      }
      *(undefined4 *)(param_1 + 0x25) = uVar6;
      *(undefined4 *)((longlong)param_1 + 300) = uVar7;
      *(undefined4 *)(param_1 + 0x26) = uVar8;
      *(undefined4 *)((longlong)param_1 + 0x134) = uVar9;
      if ((double)(*(float *)(param_1 + 0x37) * *(float *)(param_1 + 0x37)) <=
          (double)param_1[0x27] * (double)param_1[0x27] +
          (double)param_1[0x25] * (double)param_1[0x25] +
          (double)param_1[0x26] * (double)param_1[0x26]) {
        *param_3 = 0.0;
LAB_1410552ab:
        uVar4 = 1;
        goto LAB_1410552ad;
      }
      (**(code **)(*param_1 + 0x590))(param_1,local_190);
    }
    else {
      fVar1 = *param_3;
      *param_3 = (1.0 - param_2[1]) * fVar1;
      local_1e8 = (double)fVar1;
      local_1d8 = (double)param_1[0x27] * local_1e8;
      uStack_1e0 = (double)param_1[0x26] * local_1e8;
      local_1e8 = local_1e8 * (double)param_1[0x25];
      local_248 = param_3;
      iVar3 = (**(code **)(*param_1 + 0x5c8))(param_1,param_2);
      if (((iVar3 != 2) && (param_1[0x22] != 0)) &&
         ((*(byte *)((longlong)param_1 + 0x9e) & 0x10) != 0)) goto LAB_1410552ab;
    }
  }
  uVar4 = 0;
LAB_1410552ad:
  if ((local_90 ^ (ulonglong)auStack_268) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 1410554d2 FUN_1410554d2 body=206 status=ok
// SIG undefined FUN_1410554d2(void)

void FUN_1410554d2(longlong param_1,uint *param_2,undefined4 param_3)

{
  uint uVar1;
  undefined1 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  if (*(char *)(param_1 + 0x1ed) != '\x01') {
    FUN_140ee4c0a(param_1,param_2,param_3);
    return;
  }
  uVar1 = *param_2;
  uVar4 = param_2[2];
  if (uVar4 != 0) {
    uVar1 = uVar4 >> 0xd ^ uVar1 - uVar4;
    uVar3 = uVar1 << 8 ^ (-0x61c88647 - uVar4) - uVar1;
    uVar5 = uVar3 >> 0xd ^ (uVar4 - uVar1) - uVar3;
    uVar4 = uVar5 >> 0xc ^ (uVar1 - uVar3) - uVar5;
    uVar1 = uVar4 << 0x10 ^ (uVar3 - uVar5) - uVar4;
    uVar3 = uVar1 >> 5 ^ (uVar5 - uVar4) - uVar1;
    uVar4 = uVar3 >> 3 ^ (uVar4 - uVar1) - uVar3;
    uVar1 = uVar4 << 10 ^ (uVar1 - uVar3) - uVar4;
    uVar1 = uVar1 >> 0xf ^ uVar3 - (uVar4 + uVar1);
  }
  puVar2 = (undefined1 *)FUN_1410555a0(param_1 + 0xe0,uVar1);
  *puVar2 = (char)param_3;
  return;
}



// FUNCTION 1410555a0 FUN_1410555a0 body=144 status=ok
// SIG undefined FUN_1410555a0(void)

longlong FUN_1410555a0(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = FUN_141055632();
  if (iVar1 != -1) {
    lVar3 = *param_1;
    lVar2 = (longlong)iVar1;
    if (lVar3 + lVar2 * 0x18 != 0) goto LAB_1410555f6;
  }
  local_38 = 0;
  local_30 = param_3;
  FUN_141055692(param_1,&local_24,param_2);
  lVar2 = (longlong)local_24;
  lVar3 = *param_1;
LAB_1410555f6:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + lVar2 * 0x18 + 0xc;
}



// FUNCTION 141055632 FUN_141055632 body=95 status=ok
// SIG undefined FUN_141055632(void)

int FUN_141055632(longlong *param_1,uint param_2,int *param_3)

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



// FUNCTION 141055692 FUN_141055692 body=742 status=ok
// SIG undefined FUN_141055692(void)

int * FUN_141055692(longlong *param_1,int *param_2,uint param_3,longlong *param_4,char *param_5)

{
  uint *puVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  byte bVar13;
  int iVar14;
  uint uVar15;
  ulonglong uVar16;
  longlong *plVar17;
  longlong *plVar18;
  int iVar19;
  int iVar20;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar19 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar19 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar19) {
      FUN_1403951a8(param_1,iVar19);
    }
    iVar10 = (int)param_1[5];
    if (iVar10 == 0) {
      iVar9 = -1;
    }
    else {
      iVar9 = iVar10 + 0x1e;
      if (-1 < iVar10 + -1) {
        iVar9 = iVar10 + -1;
      }
      iVar9 = iVar9 >> 5;
    }
    plVar17 = param_1 + 2;
    iVar14 = iVar10 + 1;
    iVar20 = iVar10 + 0x1f;
    if (-1 < iVar10) {
      iVar20 = iVar10;
    }
    if (iVar20 >> 5 == iVar9) {
      *(int *)(param_1 + 5) = iVar14;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar10) {
        if (iVar10 + 0x20U < 0xa0) {
          iVar14 = 0x80;
          iVar9 = iVar10;
        }
        else {
          uVar11 = iVar10 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar15 = 4;
            if (4 < uVar11) {
              uVar15 = uVar11;
            }
          }
          else {
            uVar15 = (uVar11 * 3 >> 3) + uVar11 + 0x10;
          }
          uVar16 = FUN_144a3809e(uVar15 << 2,0);
          iVar9 = (int)(uVar16 >> 2);
          iVar14 = -0x20;
          if ((int)uVar11 <= iVar9) {
            iVar14 = iVar9 << 5;
          }
          iVar9 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar14;
        FUN_1446efbd8(plVar17,iVar9);
        iVar14 = (int)param_1[5] + 1;
      }
      iVar9 = iVar14 + 0x1f;
      if (-1 < iVar14) {
        iVar9 = iVar14;
      }
      *(int *)(param_1 + 5) = iVar14;
      if (iVar14 % 0x20 != 0) {
        plVar18 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar18 = plVar17;
        }
        bVar13 = -(char)(iVar14 % 0x20);
        *(uint *)((longlong)plVar18 + (longlong)(iVar9 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar18 + (longlong)(iVar9 >> 5) * 4) << (bVar13 & 0x1f)) >>
             (bVar13 & 0x1f);
      }
    }
    lVar12 = (longlong)iVar19;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar17 = (longlong *)param_1[4];
    }
    bVar13 = (byte)iVar10 & 0x1f;
    puVar1 = (uint *)((longlong)plVar17 + (longlong)(iVar20 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar13 | 0xfffffffeU >> 0x20 - bVar13);
  }
  else {
    iVar19 = (int)param_1[6];
    lVar12 = (longlong)iVar19;
    iVar10 = *(int *)(*param_1 + 4 + lVar12 * 0x18);
    *(int *)(param_1 + 6) = iVar10;
    iVar9 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar9;
    if (iVar9 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar10 * 0x18) = 0xffffffff;
    }
  }
  plVar17 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar17 = (longlong *)param_1[4];
  }
  iVar10 = iVar19 + 0x1f;
  if (-1 < iVar19) {
    iVar10 = iVar19;
  }
  puVar1 = (uint *)((longlong)plVar17 + (longlong)(iVar10 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar19 & 0x1f);
  puVar2 = (undefined8 *)(*param_1 + lVar12 * 0x18);
  puVar4 = (undefined8 *)*param_4;
  *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar4 + 1);
  *puVar2 = *puVar4;
  *(undefined1 *)((longlong)puVar2 + 0xc) = 0;
  *(undefined4 *)(puVar2 + 2) = 0xffffffff;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    iVar10 = FUN_141055632(param_1,param_3,puVar2);
    if (iVar10 != -1) {
      uVar5 = *(undefined4 *)((longlong)puVar2 + 4);
      uVar6 = *(undefined4 *)(puVar2 + 1);
      uVar7 = *(undefined4 *)((longlong)puVar2 + 0xc);
      puVar3 = (undefined4 *)(*param_1 + (longlong)iVar10 * 0x18);
      *puVar3 = *(undefined4 *)puVar2;
      puVar3[1] = uVar5;
      puVar3[2] = uVar6;
      puVar3[3] = uVar7;
      FUN_148917604(param_1,iVar19);
      cVar8 = '\x01';
      goto LAB_1410557b1;
    }
  }
  cVar8 = '\0';
LAB_1410557b1:
  if (param_5 != (char *)0x0) {
    *param_5 = cVar8;
  }
  if (cVar8 == '\0') {
    uVar11 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
    iVar10 = 1;
    if (3 < uVar11) {
      uVar16 = (ulonglong)(uVar11 & 0xfffffffe) + 0xf;
      lVar12 = 0x3f;
      if (uVar16 != 0) {
        for (; uVar16 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iVar10 = 1 << ((byte)lVar12 & 0x1f);
    }
    if (((int)uVar11 < 1) || (iVar10 <= (int)param_1[9])) {
      param_3 = (int)param_1[9] - 1U & param_3;
      *(uint *)((longlong)puVar2 + 0x14) = param_3;
      plVar17 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar17 = param_1 + 7;
      }
      *(undefined4 *)(puVar2 + 2) =
           *(undefined4 *)
            ((longlong)plVar17 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)param_3) * 4);
      plVar17 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar17 = param_1 + 7;
      }
      *(int *)((longlong)plVar17 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)param_3) * 4) =
           iVar19;
    }
    else {
      *(int *)(param_1 + 9) = iVar10;
      FUN_14105597a(param_1);
    }
  }
  *param_2 = iVar19;
  return param_2;
}



// FUNCTION 14105583e FUN_14105583e body=2 status=ok
// SIG undefined FUN_14105583e(void)

void FUN_14105583e(void)

{
  undefined4 *unaff_RSI;
  undefined4 unaff_EDI;
  
  *unaff_RSI = unaff_EDI;
  return;
}



// FUNCTION 14105597a FUN_14105597a body=796 status=ok
// SIG undefined FUN_14105597a(void)

void FUN_14105597a(longlong *param_1)

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
    if ((int)uVar12 < 1) goto LAB_1410559e0;
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
LAB_1410559e0:
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
      lVar8 = (longlong)iVar15;
      uVar2 = *(uint *)(lVar9 + lVar8 * 0x18);
      uVar17 = *(uint *)(lVar9 + 8 + lVar8 * 0x18);
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
      lVar9 = lVar9 + lVar8 * 0x18;
      uVar7 = (longlong)(int)uVar2 & (longlong)(int)param_1[9] - 1U;
      iVar6 = (int)uVar7;
      *(int *)(lVar9 + 0x14) = iVar6;
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(undefined4 *)(lVar9 + 0x10) =
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



// FUNCTION 141055c96 FUN_141055c96 body=40 status=ok
// SIG undefined FUN_141055c96(void)

undefined8 FUN_141055c96(undefined8 param_1,int param_2)

{
  FUN_141055cbe();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141055cbe FUN_141055cbe body=117 status=ok
// SIG undefined FUN_141055cbe(void)

void FUN_141055cbe(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14acc0550;
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  FUN_141055d33(param_1[5],*(undefined4 *)(param_1 + 6));
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 141055d33 FUN_141055d33 body=40 status=ok
// SIG undefined FUN_141055d33(void)

void FUN_141055d33(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_147f85520(param_1);
    param_1 = param_1 + 0x30;
  }
  return;
}



// FUNCTION 141055d66 FUN_141055d66 body=852 status=ok
// SIG undefined FUN_141055d66(void)

undefined8 * FUN_141055d66(undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  uint local_80;
  undefined4 local_78;
  undefined8 local_70;
  wchar_t *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  code **local_50;
  code *local_48;
  code *local_40;
  undefined8 local_30;
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_140312256();
  *param_1 = &PTR_FUN_14b3c1030;
  param_1[0x72] = &PTR_FUN_14b3c1670;
  param_1[0x73] = &PTR_FUN_14b3c1730;
  FUN_140e38240(param_1 + 0x74);
  param_1[0x13f] = 0;
  param_1[0x140] = 0;
  param_1[0x141] = 0;
  param_1[0x142] = 0;
  param_1[0x143] = 0;
  param_1[0x144] = 0;
  param_1[0x145] = 0;
  param_1[0x146] = 0;
  param_1[0x147] = 0;
  param_1[0x148] = 0;
  param_1[0x149] = 0xffffffffffffffff;
  *(undefined1 *)(param_1 + 0x14e) = 0;
  *(undefined4 *)(param_1 + 0x14f) = 0;
  param_1[0x14a] = 0;
  param_1[0x14b] = 0;
  *(undefined1 *)((longlong)param_1 + 0xa7c) = 1;
  param_1[0x150] = &DAT_3f8000003f800000;
  param_1[0x151] = 0;
  param_1[0x152] = 0xbf80000043480000;
  *(undefined4 *)(param_1 + 0x153) = 0;
  param_1[0x154] = 0;
  *(undefined4 *)(param_1 + 0x155) = 0x9bf48485;
  param_1[0x15f] = 0;
  param_1[0x160] = 0;
  *(undefined4 *)(param_1 + 0x164) = 0;
  *(undefined2 *)(param_1 + 0x165) = 0;
  *(undefined4 *)(param_1 + 0x168) = 0;
  param_1[0x166] = 0;
  param_1[0x167] = 0;
  param_1[0x169] = 0;
  param_1[0x16a] = 0;
  param_1[0x16b] = 0;
  param_1[0x16c] = 0;
  param_1[0x16d] = 0;
  param_1[0x16e] = 0;
  param_1[0x16f] = 0;
  param_1[0x170] = 0;
  param_1[0x156] = 0;
  param_1[0x157] = 0;
  *(undefined8 *)((longlong)param_1 + 0xabc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xac4) = 0;
  param_1[0x15a] = 0;
  param_1[0x15b] = 0;
  param_1[0x15c] = 0;
  param_1[0x15d] = 0;
  *(undefined4 *)(param_1 + 0x15e) = 0;
  if ((*(uint *)(param_1 + 1) & 0x10) == 0) {
    plVar1 = param_1 + 0x16d;
    param_1[0x170] = &DAT_14cb81908;
    param_1[0x16f] = param_1;
    lVar3 = DAT_14cb81908;
    while( true ) {
      param_1[0x16d] = lVar3;
      LOCK();
      lVar2 = *(longlong *)param_1[0x170];
      bVar4 = lVar3 == lVar2;
      if (bVar4) {
        *(longlong *)param_1[0x170] = (longlong)plVar1;
        lVar2 = lVar3;
      }
      UNLOCK();
      if (bVar4) break;
      param_1[0x16d] = lVar2;
      lVar3 = *(longlong *)param_1[0x170];
    }
    if (*plVar1 != 0) {
      *(longlong **)(*plVar1 + 8) = plVar1;
    }
  }
  *(byte *)((longlong)param_1 + 0x3a) = *(byte *)((longlong)param_1 + 0x3a) & 0xfd;
  *(byte *)((longlong)param_1 + 99) = *(byte *)((longlong)param_1 + 99) | 8;
  *(byte *)(param_1 + 0x69) = *(byte *)(param_1 + 0x69) | 1;
  FUN_1403121a6(param_1,1);
  *(undefined1 *)((longlong)param_1 + 0xb2a) = 0;
  FUN_1446f470e(&local_30,L"Root",1);
  if (DAT_14cac7648 == 0) {
    local_50 = &local_28;
    local_28 = FUN_144a7958c;
    local_40 = FUN_14081d0ea;
    local_48 = FUN_143242436;
    local_58 = &LAB_14789ef1f;
    local_60 = &LAB_1417b008f;
    local_68 = L"Engine";
    local_70 = 0x8000000000;
    local_78 = 0x10000004;
    local_80 = 0x10;
    local_88 = 0x2b0;
    FUN_14081cfa3(L"/Script/Engine",L"SceneComponent",&DAT_14cac7648,FUN_146393848);
  }
  local_80 = local_80 & 0xffffff00;
  local_88 = CONCAT31(local_88._1_3_,1);
  lVar3 = FUN_14048696c(param_1,local_30,DAT_14cac7648,DAT_14cac7648);
  if ((lVar3 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar3);
  }
  param_1[0x39] = lVar3;
  *(undefined1 *)(lVar3 + 0x1fb) = 2;
  if ((((*(uint *)(param_1 + 1) & 0x10) == 0) &&
      (*(byte *)(param_1 + 0x92) = *(byte *)(param_1 + 0x92) | 1,
      *(char *)((longlong)param_1 + 0x491) != '\x01')) &&
     (*(undefined1 *)((longlong)param_1 + 0x491) = 1, (*(byte *)(param_1 + 0x131) & 2) != 0)) {
    FUN_14104f46a(param_1 + 0x74,0,0x3f800000);
  }
  *(undefined1 *)((longlong)param_1 + 0x179) = 4;
  if ((local_20 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1410560bc FUN_1410560bc body=136 status=ok
// SIG undefined FUN_1410560bc(void)

void FUN_1410560bc(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((*(char *)(*(longlong *)(param_1 + 8) + 0x1c3) == '\0') &&
     (*(char *)(*(longlong *)(param_1 + 8) + 0x1c0) == '\0')) {
    if ((char)param_2 == '\n') {
      lVar1 = (longlong)*(int *)(*(longlong *)(param_1 + 0x40) + 0x3f8);
      if (lVar1 != 0) {
        lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x40) + 0x3f0);
        lVar1 = lVar1 * 0x60;
        do {
          if (*(char *)(lVar2 + 0x58) == '\x01') {
            FUN_14890e87c(*(undefined8 *)(param_1 + 0x28),lVar2,0);
          }
          lVar2 = lVar2 + 0x60;
          lVar1 = lVar1 + -0x60;
        } while (lVar1 != 0);
      }
    }
    FUN_141056144(param_1,param_2);
    return;
  }
  return;
}



// FUNCTION 141056144 FUN_141056144 body=1040 status=ok
// SIG undefined FUN_141056144(void)

void FUN_141056144(longlong param_1,byte param_2)

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  byte bVar4;
  char cVar5;
  longlong lVar6;
  longlong *plVar7;
  ulonglong uVar8;
  byte bVar9;
  longlong lVar10;
  longlong lVar11;
  bool bVar12;
  undefined1 auStack_118 [40];
  undefined1 local_f0;
  undefined1 local_ef;
  undefined8 local_ec;
  undefined4 local_e4;
  undefined1 local_e0 [24];
  longlong local_c8;
  undefined1 local_b8;
  undefined1 local_b7;
  undefined8 local_b4;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  longlong local_90;
  undefined8 uStack_88;
  undefined1 local_80;
  undefined1 local_78 [4];
  undefined8 local_74;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  longlong lStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  FUN_140d82cdc(param_1,param_2 == 1,*(longlong *)(param_1 + 0x40) + 0x3c0,param_1 + 0x70);
  bVar9 = param_2 & 0xfe;
  bVar12 = bVar9 == 4;
  if ((bool)*(char *)(param_1 + 0x59) == bVar12) {
LAB_1410561b7:
    if (param_2 != 2) goto LAB_1410562de;
    if ((*(char *)(*(longlong *)(param_1 + 0x40) + 0x310) == '\x01') &&
       (lVar10 = FUN_1406b1df4(), lVar10 == 0)) {
      FUN_14113d524(param_1);
      cVar5 = FUN_140f3da40(param_1);
      if (cVar5 != '\0') {
        local_b7 = 0;
        local_a8 = 0;
        uStack_a0 = 0;
        local_98 = 0;
        local_78[0] = 0;
        local_74 = 0;
        local_68 = 0;
        local_60 = 0;
        local_58 = 0;
        lStack_50 = 0;
        local_90 = 0;
        uStack_88 = 0;
        local_80 = 0;
        FUN_143df1f20(param_1,&local_f0);
        local_b8 = local_f0;
        local_f0 = 0;
        local_b4 = local_ec;
        local_ec = 0;
        FUN_1404e49fa(&local_a8,local_e0);
        local_b7 = local_ef;
        local_ef = 0;
        if (local_c8 != 0) {
          FUN_1400020a8();
        }
        local_f0 = 1;
        local_e4 = 1;
        local_ec = DAT_14cb7c588;
        FUN_140641b42(local_78);
        FUN_140bc46c6(param_1,&local_b8,0,0);
        lVar10 = lStack_50;
        if (lStack_50 != 0) {
          plVar2 = (longlong *)(lStack_50 + 8);
          pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 +
                             (ulonglong)((uint)*(byte *)(lStack_50 + 0x28) * 0x120));
          if (pcVar3 != (code *)0x0) {
            plVar7 = plVar2;
            if (0x18 < *(ushort *)(lStack_50 + 0x20)) {
              plVar7 = (longlong *)*plVar2;
            }
            (*pcVar3)(plVar7);
          }
          if (0x18 < *(ushort *)(lVar10 + 0x20)) {
            FUN_1400020a8(*plVar2);
          }
          FUN_1400020a8(lVar10);
        }
        if (local_90 != 0) {
          FUN_1400020a8();
        }
      }
      FUN_140e7c2fa(param_1);
    }
  }
  else {
    *(bool *)(param_1 + 0x59) = bVar12;
    if (bVar9 != 4) {
      FUN_140e7c2fa(param_1);
      goto LAB_1410561b7;
    }
    FUN_14113d524();
LAB_1410562de:
    if (param_2 == 4) {
      lVar10 = *(longlong *)(*(longlong *)(param_1 + 0x40) + 0x338);
      if (((lVar10 != 0) && (*(char *)(lVar10 + 8) == '\x01')) &&
         (*(char *)(lVar10 + 0x10) == '\x02')) {
LAB_141056322:
        FUN_143df13ba(param_1);
      }
    }
    else if (param_2 == 1) {
      lVar10 = *(longlong *)(*(longlong *)(param_1 + 0x40) + 0x338);
      if (((lVar10 != 0) && (*(char *)(lVar10 + 8) == '\x01')) &&
         (*(char *)(lVar10 + 0x10) == '\x03')) goto LAB_141056322;
    }
    else if (param_2 == 0xd) {
      (**(code **)(**(longlong **)(param_1 + 0x28) + 0xe8))(*(longlong **)(param_1 + 0x28),param_1);
    }
  }
  FUN_140d82b92(*(undefined8 *)(param_1 + 8),param_1);
  lVar10 = *(longlong *)(param_1 + 0x28);
  FUN_140d82b92(*(undefined8 *)(lVar10 + 8));
  FUN_1447f69b6(param_1 + 0x168);
  if (param_2 < 2) {
    FUN_143df1a06(param_1,0);
LAB_1410563c4:
    lVar10 = *(longlong *)(param_1 + 0x28);
  }
  else {
    lVar6 = FUN_140dcc81c();
    if (lVar6 == 0) {
      uVar8 = CONCAT71((int7)((ulonglong)lVar10 >> 8),1);
    }
    else {
      bVar4 = FUN_141042fba(lVar6);
      uVar8 = (ulonglong)(0x1ddff >> (bVar4 & 0x1f));
    }
    FUN_143df1a06(param_1,uVar8 & 0xffffffffffffff01);
    if (param_2 != 4) goto LAB_1410563c4;
    lVar10 = *(longlong *)(param_1 + 0x28);
    if (0 < *(int *)(*(longlong *)(param_1 + 0x40) + 0x3a0)) {
      iVar1 = *(int *)(lVar10 + 0x1d8);
      if ((longlong)iVar1 != 0) {
        lVar10 = *(longlong *)(lVar10 + 0x1d0);
        lVar6 = 0;
        do {
          if (((*(int *)(lVar10 + 8 + lVar6) != 0) &&
              (plVar2 = *(longlong **)(lVar10 + lVar6), plVar2 != (longlong *)0x0)) &&
             (cVar5 = (**(code **)(*plVar2 + 0x20))(plVar2,param_1), cVar5 != '\0'))
          goto LAB_1410563d5;
          lVar6 = lVar6 + 0x10;
        } while ((longlong)iVar1 * 0x10 != lVar6);
        lVar10 = *(longlong *)(param_1 + 0x28);
      }
      FUN_148910ab0(lVar10 + 0x1d0,&local_b8,param_1);
      goto LAB_1410563d5;
    }
  }
  FUN_140457ffc(lVar10 + 0x1d0,param_1);
LAB_1410563d5:
  if ((bool)*(char *)(param_1 + 0x5a) != bVar12) {
    *(bool *)(param_1 + 0x5a) = bVar12;
    lVar10 = (longlong)*(int *)(*(longlong *)(param_1 + 0x40) + 0x2c8);
    if (lVar10 != 0) {
      lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x40) + 0x2c0);
      lVar11 = 0;
      do {
        FUN_143df1972(param_1,*(longlong *)(lVar6 + lVar11) + 0x18,bVar9 == 4);
        lVar11 = lVar11 + 0x10;
      } while (lVar10 * 0x10 != lVar11);
    }
  }
  if ((((*(char *)(param_1 + 0x5b) == '\0') &&
       (*(char *)(*(longlong *)(param_1 + 0x28) + 0x1e8) == '\0')) &&
      (lVar10 = *(longlong *)(param_1 + 0x30), *(char *)(lVar10 + 0x49) == '\0')) &&
     (*(byte *)(lVar10 + 0x48) != param_2)) {
    if (*(int *)(lVar10 + 0x20) != -1) {
      FUN_143df53bc(lVar10);
    }
    *(byte *)(lVar10 + 0x48) = param_2;
    do {
      cVar5 = FUN_140d8564a(lVar10,0);
    } while (cVar5 != '\0');
  }
  if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141056556 FUN_141056556 body=3452 status=ok
// SIG undefined FUN_141056556(void)

void FUN_141056556(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 *puVar5;
  longlong *plVar6;
  longlong lVar7;
  void *_Dst;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  char cVar16;
  longlong lVar17;
  undefined8 *puVar18;
  longlong *plVar19;
  undefined8 uVar20;
  ulonglong uVar21;
  int iVar22;
  longlong lVar23;
  undefined1 *puVar24;
  longlong lVar25;
  ulonglong uVar26;
  longlong lVar27;
  undefined1 *puVar28;
  int iVar29;
  undefined1 auStack_388 [32];
  undefined4 local_368;
  undefined4 local_360;
  undefined4 local_358;
  undefined8 local_350;
  undefined2 *local_348;
  undefined1 *local_340;
  undefined1 *local_338;
  undefined1 *local_330;
  undefined1 *local_328;
  code *local_320;
  longlong *local_318;
  undefined1 *local_310;
  undefined8 *local_308;
  longlong *local_300;
  longlong *local_2f8;
  undefined8 local_2f0;
  undefined4 local_2e8;
  undefined8 local_2e0;
  undefined4 local_2d8;
  longlong *local_2d0;
  longlong *local_2c8;
  undefined1 local_198;
  undefined1 uStack_197;
  undefined2 uStack_196;
  undefined4 uStack_194;
  undefined4 local_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 local_178;
  longlong *local_170;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  int local_138;
  longlong local_f8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_b4;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_388;
  if (((*(byte *)(param_1 + 6) & 0x80) != 0) &&
     (cVar16 = (**(code **)(*param_1 + 0x310))(param_1,0), cVar16 != '\0')) {
    (**(code **)(*param_1 + 0x330))(param_1);
  }
  lVar25 = param_1[5];
  lVar17 = *(longlong *)(lVar25 + 0x98);
  if (lVar17 != 0) {
    if (DAT_14caf9cd0 == 0) {
      local_330 = &local_198;
      local_198 = 0x22;
      uStack_197 = 0xf;
      uStack_196 = 0x4103;
      uStack_194 = 1;
      local_320 = FUN_14081d0ea;
      local_328 = &LAB_1463c0cc2;
      local_338 = &LAB_147c9db5b;
      local_340 = &LAB_1463f9c44;
      local_348 = &DAT_149e063b2;
      local_350 = 0x2000000000;
      local_358 = 0x10000004;
      local_360 = 8;
      local_368 = 0x958;
      FUN_14081cfa3(L"/Script/Engine",L"PlayerController",&DAT_14caf9cd0,FUN_1463f9c22);
      lVar17 = *(longlong *)(lVar25 + 0x98);
      if (lVar17 == 0) goto LAB_1410565ef;
    }
    if ((((DAT_14caf9cd0 != 0) && (lVar25 = *(longlong *)(lVar17 + 0x10), lVar25 != 0)) &&
        (*(int *)(DAT_14caf9cd0 + 0x38) <= *(int *)(lVar25 + 0x38))) &&
       (((*(longlong *)(*(longlong *)(lVar25 + 0x30) + (longlong)*(int *)(DAT_14caf9cd0 + 0x38) * 8)
          == DAT_14caf9cd0 + 0x30 && (*(longlong *)(lVar17 + 0x438) != 0)) &&
        (((int)param_1[0xe] != 0 || ((int)param_1[0x10] != 0)))))) {
      local_318 = param_1 + 0xd;
      if ((int)param_1[0x11] == 3) {
        puVar18 = (undefined8 *)FUN_1410573c2(param_1);
        if (puVar18 == (undefined8 *)0x0) goto LAB_1410565ef;
        if ((longlong)(int)param_1[0xe] != 0) {
          puVar24 = (undefined1 *)param_1[0xd];
          puVar28 = puVar24 + (longlong)(int)param_1[0xe] * 0xa0;
          local_310 = puVar28;
          do {
            switch(*puVar24) {
            case 0:
              FUN_1457e4584(puVar18);
              break;
            case 1:
              local_2e0 = *(undefined8 *)(puVar24 + 0x10);
              local_2d8 = *(undefined4 *)(puVar24 + 0x18);
              FUN_141057c4c(puVar18,&local_2d0,&local_2e0,1);
              plVar19 = local_2c8;
              if (local_2d0 != (longlong *)0x0) {
                local_2f0 = *(undefined8 *)(puVar24 + 4);
                local_2e8 = *(undefined4 *)(puVar24 + 0xc);
                FUN_1448075d0(&local_198,&local_2f0);
                lVar25 = FUN_1410002c4(&local_198);
                if (CONCAT44(uStack_17c,uStack_180) != 0) {
                  FUN_1400020a8();
                }
                plVar19 = local_2c8;
                if (lVar25 != 0) {
                  local_178 = *(undefined8 *)(puVar24 + 0x58);
                  plVar6 = *(longlong **)(puVar24 + 0x60);
                  local_198 = (undefined1)lVar25;
                  uStack_197 = (undefined1)((ulonglong)lVar25 >> 8);
                  uStack_196 = (undefined2)((ulonglong)lVar25 >> 0x10);
                  uStack_194 = (undefined4)((ulonglong)lVar25 >> 0x20);
                  if (plVar6 == (longlong *)0x0) {
                    local_170 = (longlong *)0x0;
                    local_138._0_1_ = '\0';
                  }
                  else {
                    LOCK();
                    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
                    UNLOCK();
                    local_190 = 0;
                    uStack_18c = 0;
                    uStack_188 = 0;
                    uStack_184 = 0;
                    uStack_180 = 0;
                    uStack_17c = 0;
                    LOCK();
                    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
                    UNLOCK();
                    local_138._0_1_ = '\0';
                    LOCK();
                    plVar19 = plVar6 + 1;
                    *(int *)plVar19 = (int)*plVar19 + -1;
                    UNLOCK();
                    local_170 = plVar6;
                    if ((int)*plVar19 == 0) {
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
                  plVar6 = local_2c8;
                  uStack_188 = *(undefined4 *)(puVar24 + 0xc);
                  local_190 = (undefined4)*(undefined8 *)(puVar24 + 4);
                  uStack_18c = (undefined4)((ulonglong)*(undefined8 *)(puVar24 + 4) >> 0x20);
                  uStack_17c = *(undefined4 *)(puVar24 + 0x18);
                  uStack_184 = (undefined4)*(undefined8 *)(puVar24 + 0x10);
                  uStack_180 = (undefined4)((ulonglong)*(undefined8 *)(puVar24 + 0x10) >> 0x20);
                  if (puVar24[0x50] == '\x01') {
                    local_168 = *(undefined4 *)(puVar24 + 0x20);
                    uStack_164 = *(undefined4 *)(puVar24 + 0x24);
                    uStack_160 = *(undefined4 *)(puVar24 + 0x28);
                    uStack_15c = *(undefined4 *)(puVar24 + 0x2c);
                    local_158 = *(undefined8 *)(puVar24 + 0x30);
                    uStack_150 = *(undefined8 *)(puVar24 + 0x38);
                    local_148 = *(undefined8 *)(puVar24 + 0x40);
                    uStack_140 = *(undefined8 *)(puVar24 + 0x48);
                    local_138._0_1_ = '\x01';
                  }
                  else if ((char)local_138 == '\x01') {
                    local_138._0_1_ = '\0';
                  }
                  local_300 = local_2d0;
                  local_2f8 = local_2c8;
                  if (local_2c8 == (longlong *)0x0) {
                    FUN_141058754(puVar18,&local_300,&local_198);
                  }
                  else {
                    LOCK();
                    *(int *)(local_2c8 + 1) = (int)local_2c8[1] + 1;
                    UNLOCK();
                    FUN_141058754(puVar18,&local_300,&local_198);
                    if (plVar6 != (longlong *)0x0) {
                      LOCK();
                      plVar19 = plVar6 + 1;
                      *(int *)plVar19 = (int)*plVar19 + -1;
                      UNLOCK();
                      if ((int)*plVar19 == 0) {
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
                  }
                  plVar6 = local_170;
                  local_138 = (uint)local_138._1_3_ << 8;
                  plVar19 = local_2c8;
                  if (local_170 != (longlong *)0x0) {
                    LOCK();
                    plVar1 = local_170 + 1;
                    *(int *)plVar1 = (int)*plVar1 + -1;
                    UNLOCK();
                    if ((int)*plVar1 == 0) {
                      (**(code **)*local_170)(local_170);
                      LOCK();
                      piVar2 = (int *)((longlong)plVar6 + 0xc);
                      *piVar2 = *piVar2 + -1;
                      UNLOCK();
                      plVar19 = local_2c8;
                      if (*piVar2 == 0) {
                        (**(code **)(*plVar6 + 0x10))(plVar6);
                        plVar19 = local_2c8;
                      }
                    }
                  }
                }
              }
              goto LAB_141056a82;
            case 2:
              local_300 = *(longlong **)(puVar24 + 0x10);
              local_2f8 = (longlong *)CONCAT44(local_2f8._4_4_,*(undefined4 *)(puVar24 + 0x18));
              FUN_141057c4c(puVar18,&local_198,&local_300,0);
              plVar6 = (longlong *)
                       CONCAT44(uStack_194,CONCAT22(uStack_196,CONCAT11(uStack_197,local_198)));
              plVar19 = (longlong *)CONCAT44(uStack_18c,local_190);
              if (plVar6 != (longlong *)0x0) {
                local_2d8 = *(undefined4 *)(puVar24 + 0xc);
                local_2e0 = *(undefined8 *)(puVar24 + 4);
                local_2d0 = plVar6;
                local_2c8 = plVar19;
                if (plVar19 == (longlong *)0x0) {
                  FUN_1410c4142(puVar18,&local_2d0,&local_2e0);
                }
                else {
                  LOCK();
                  *(int *)(plVar19 + 1) = (int)plVar19[1] + 1;
                  UNLOCK();
                  FUN_1410c4142(puVar18,&local_2d0,&local_2e0);
                  if (plVar19 != (longlong *)0x0) {
                    LOCK();
                    plVar6 = plVar19 + 1;
                    *(int *)plVar6 = (int)*plVar6 + -1;
                    UNLOCK();
                    if ((int)*plVar6 == 0) {
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
                }
                plVar19 = (longlong *)CONCAT44(uStack_18c,local_190);
              }
LAB_141056a82:
              if (plVar19 != (longlong *)0x0) {
                LOCK();
                plVar6 = plVar19 + 1;
                *(int *)plVar6 = (int)*plVar6 + -1;
                UNLOCK();
                if ((int)*plVar6 == 0) {
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
              break;
            case 3:
              local_2e0 = *(undefined8 *)(puVar24 + 4);
              local_2d8 = *(undefined4 *)(puVar24 + 0xc);
              local_2f0 = *(undefined8 *)(puVar24 + 0x10);
              local_2e8 = *(undefined4 *)(puVar24 + 0x18);
              FUN_1410574f8(puVar18,&local_2d0,&local_2f0,&local_2e0);
              plVar6 = local_2d0;
              if (local_2d0 != (longlong *)0x0) {
                plVar19 = (longlong *)FUN_14001cc68(0x50,0x10);
                plVar19[1] = (longlong)&DAT_100000001;
                *plVar19 = (longlong)&PTR_FUN_14b4024d0;
                plVar19[7] = 0;
                plVar19[3] = 0;
                plVar19[4] = 0;
                plVar19[2] = (longlong)&PTR_FUN_14b3e4b50;
                plVar19[5] = 0;
                plVar19[6] = 0;
                *(undefined4 *)(plVar19 + 7) = 0;
                plVar19[8] = 0;
                plVar19[9] = 0;
                FUN_14105743e(&local_198,puVar24 + 0x78);
                *(undefined1 *)(plVar19 + 3) = local_198;
                local_198 = 0;
                *(ulonglong *)((longlong)plVar19 + 0x1c) = CONCAT44(local_190,uStack_194);
                uStack_194 = 0;
                local_190 = 0;
                FUN_1404e49fa(plVar19 + 5,&uStack_188);
                *(undefined1 *)((longlong)plVar19 + 0x19) = uStack_197;
                uStack_197 = 0;
                if (local_170 != (longlong *)0x0) {
                  FUN_1400020a8();
                }
                local_198 = (undefined1)(undefined4)DAT_14cb7bb98;
                uStack_197 = (undefined1)((uint)(undefined4)DAT_14cb7bb98 >> 8);
                uStack_196 = (undefined2)((uint)(undefined4)DAT_14cb7bb98 >> 0x10);
                local_190 = DAT_14cb7bba0;
                uStack_194 = DAT_14cb7bb98._4_4_;
                FUN_144928d62(plVar19 + 5,1,&local_198);
                if (plVar19 != (longlong *)0x0) {
                  LOCK();
                  *(int *)(plVar19 + 1) = (int)plVar19[1] + 1;
                  UNLOCK();
                }
                local_300 = plVar19 + 2;
                local_2f8 = plVar19;
                FUN_1410581ea(plVar6,&local_198,&local_300);
                plVar6 = (longlong *)CONCAT44(uStack_18c,local_190);
                if (plVar6 != (longlong *)0x0) {
                  LOCK();
                  piVar2 = (int *)((longlong)plVar6 + 0xc);
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (*piVar2 == 0) {
                    (**(code **)(*plVar6 + 0x10))();
                  }
                }
                plVar6 = local_2f8;
                if (local_2f8 != (longlong *)0x0) {
                  LOCK();
                  plVar1 = local_2f8 + 1;
                  *(int *)plVar1 = (int)*plVar1 + -1;
                  UNLOCK();
                  if ((int)*plVar1 == 0) {
                    (**(code **)*local_2f8)(local_2f8);
                    LOCK();
                    piVar2 = (int *)((longlong)plVar6 + 0xc);
                    *piVar2 = *piVar2 + -1;
                    UNLOCK();
                    if (*piVar2 == 0) {
                      (**(code **)(*plVar6 + 0x10))(plVar6);
                    }
                  }
                }
                if (plVar19 != (longlong *)0x0) {
                  LOCK();
                  plVar6 = plVar19 + 1;
                  *(int *)plVar6 = (int)*plVar6 + -1;
                  UNLOCK();
                  if ((int)*plVar6 == 0) {
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
              }
              plVar6 = local_2c8;
              puVar28 = local_310;
              if (local_2c8 != (longlong *)0x0) {
                LOCK();
                plVar19 = local_2c8 + 1;
                *(int *)plVar19 = (int)*plVar19 + -1;
                UNLOCK();
                if ((int)*plVar19 == 0) {
                  (**(code **)*local_2c8)(local_2c8);
                  LOCK();
                  piVar2 = (int *)((longlong)plVar6 + 0xc);
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  puVar28 = local_310;
                  if (*piVar2 == 0) {
                    (**(code **)(*plVar6 + 0x10))(plVar6);
                    puVar28 = local_310;
                  }
                }
              }
              break;
            case 4:
              local_300 = *(longlong **)(puVar24 + 4);
              local_2f8 = (longlong *)CONCAT44(local_2f8._4_4_,*(undefined4 *)(puVar24 + 0xc));
              local_2e0 = *(undefined8 *)(puVar24 + 0x10);
              local_2d8 = *(undefined4 *)(puVar24 + 0x18);
              local_308 = puVar18;
              FUN_1410574f8(puVar18,&local_2d0,&local_2e0,&local_300);
              plVar6 = local_2d0;
              if ((local_2d0 != (longlong *)0x0) &&
                 (lVar25 = local_2d0[0x11], (longlong)(int)lVar25 != 0)) {
                lVar17 = local_2d0[0x10];
                lVar27 = 0;
                do {
                  lVar3 = *(longlong *)(lVar17 + lVar27);
                  uVar20 = FUN_141057404();
                  cVar16 = FUN_1448093f4(lVar3,uVar20);
                  if (((cVar16 != '\0') && (lVar3 != 0)) &&
                     (cVar16 = FUN_14105865e(lVar3 + 0x28,puVar24 + 0x78), cVar16 != '\0')) {
                    uVar20 = *(undefined8 *)(lVar17 + lVar27);
                    plVar19 = *(longlong **)(lVar17 + 8 + lVar27);
                    local_198 = (undefined1)uVar20;
                    uStack_197 = (undefined1)((ulonglong)uVar20 >> 8);
                    uStack_196 = (undefined2)((ulonglong)uVar20 >> 0x10);
                    uStack_194 = (undefined4)((ulonglong)uVar20 >> 0x20);
                    if (plVar19 == (longlong *)0x0) {
                      local_190 = 0;
                      uStack_18c = 0;
                      FUN_14107fff4(plVar6);
                    }
                    else {
                      LOCK();
                      *(int *)(plVar19 + 1) = (int)plVar19[1] + 1;
                      UNLOCK();
                      local_190 = SUB84(plVar19,0);
                      uStack_18c = (undefined4)((ulonglong)plVar19 >> 0x20);
                      LOCK();
                      *(int *)(plVar19 + 1) = (int)plVar19[1] + 1;
                      UNLOCK();
                      FUN_14107fff4(plVar6,&local_198);
                      if (plVar19 != (longlong *)0x0) {
                        LOCK();
                        plVar6 = plVar19 + 1;
                        *(int *)plVar6 = (int)*plVar6 + -1;
                        UNLOCK();
                        if ((int)*plVar6 == 0) {
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
                      LOCK();
                      plVar6 = plVar19 + 1;
                      *(int *)plVar6 = (int)*plVar6 + -1;
                      UNLOCK();
                      if ((int)*plVar6 == 0) {
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
                    break;
                  }
                  lVar27 = lVar27 + 0x10;
                } while ((longlong)(int)lVar25 * 0x10 != lVar27);
              }
              plVar6 = local_2c8;
              puVar18 = local_308;
              puVar28 = local_310;
              if (local_2c8 != (longlong *)0x0) {
                LOCK();
                plVar19 = local_2c8 + 1;
                *(int *)plVar19 = (int)*plVar19 + -1;
                UNLOCK();
                if ((int)*plVar19 == 0) {
                  (**(code **)*local_2c8)(local_2c8);
                  LOCK();
                  piVar2 = (int *)((longlong)plVar6 + 0xc);
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  puVar18 = local_308;
                  puVar28 = local_310;
                  if (*piVar2 == 0) {
                    (**(code **)(*plVar6 + 0x10))(plVar6);
                    puVar18 = local_308;
                    puVar28 = local_310;
                  }
                }
              }
              break;
            case 5:
              FUN_1457e444c(puVar18,puVar24 + 0x68);
            }
            puVar24 = puVar24 + 0xa0;
          } while (puVar24 != puVar28);
        }
      }
      else {
        FUN_1449daf8c(&local_2d0,param_1,0);
        if (param_1[5] != 0) {
          FUN_1447400e4(&local_198,0,1);
          local_e0 = 0;
          uStack_d8 = 0;
          local_198 = 0x30;
          uStack_197 = 0x37;
          uStack_196 = 0x4a8a;
          uStack_194 = 1;
          local_b4 = 0;
          local_70 = 0;
          local_68 = 0x400000000;
          local_a0 = 0;
          uStack_98 = 0;
          local_90 = 0;
          uStack_88 = 0;
          FUN_1410576d6(&local_198,local_318);
          uVar26 = 0;
          lVar25 = 0;
          do {
            lVar17 = lVar25;
            uVar21 = uVar26;
            if ((longlong)(int)param_1[0x10] <= (longlong)uVar21) break;
            FUN_1410578fc(&local_198,param_1[0xf] + lVar17);
            uVar26 = uVar21 + 1;
            lVar25 = lVar17 + 0xa0;
          } while (local_f8 < 0x80001);
          iVar29 = (int)uVar21;
          if (iVar29 != 0) {
            iVar22 = (int)(*(uint *)(param_1 + 0xe) + uVar21);
            if (iVar22 < 0) {
                    /* WARNING: Subroutine does not return */
              FUN_1456afac4(*(uint *)(param_1 + 0xe) + uVar21 & 0xffffffff);
            }
            if (*(int *)((longlong)param_1 + 0x74) < iVar22) {
              FUN_141058578(local_318);
            }
            lVar25 = 0x90;
            uVar26 = uVar21;
            do {
              lVar27 = param_1[0xf];
              iVar22 = (int)param_1[0xe];
              *(uint *)(param_1 + 0xe) = iVar22 + 1U;
              if (*(uint *)((longlong)param_1 + 0x74) < iVar22 + 1U) {
                FUN_1457ecdd8(local_318,iVar22);
              }
              lVar3 = lVar27 + lVar25;
              lVar7 = *local_318;
              lVar23 = (longlong)iVar22 * 0xa0;
              lVar4 = lVar7 + lVar23;
              uVar8 = *(undefined4 *)(lVar3 + -0x90);
              uVar9 = *(undefined4 *)(lVar3 + -0x8c);
              uVar10 = *(undefined4 *)(lVar3 + -0x88);
              uVar11 = *(undefined4 *)(lVar3 + -0x84);
              uVar12 = *(undefined4 *)(lVar3 + -0x80);
              uVar13 = *(undefined4 *)(lVar3 + -0x7c);
              uVar14 = *(undefined4 *)(lVar3 + -0x78);
              puVar5 = (undefined4 *)(lVar7 + 0xc + lVar23);
              *puVar5 = *(undefined4 *)(lVar3 + -0x84);
              puVar5[1] = uVar12;
              puVar5[2] = uVar13;
              puVar5[3] = uVar14;
              puVar5 = (undefined4 *)(lVar7 + lVar23);
              *puVar5 = uVar8;
              puVar5[1] = uVar9;
              puVar5[2] = uVar10;
              puVar5[3] = uVar11;
              cVar16 = *(char *)(lVar3 + -0x40);
              *(char *)(lVar7 + 0x50 + lVar23) = cVar16;
              if (cVar16 == '\x01') {
                puVar5 = (undefined4 *)(lVar27 + -0x70 + lVar25);
                uVar8 = *puVar5;
                uVar9 = puVar5[1];
                uVar10 = puVar5[2];
                uVar11 = puVar5[3];
                puVar5 = (undefined4 *)(lVar27 + -0x60 + lVar25);
                uVar12 = *puVar5;
                uVar13 = puVar5[1];
                uVar14 = puVar5[2];
                uVar15 = puVar5[3];
                puVar18 = (undefined8 *)(lVar27 + -0x50 + lVar25);
                uVar20 = puVar18[1];
                *(undefined8 *)(lVar4 + 0x40) = *puVar18;
                *(undefined8 *)(lVar4 + 0x48) = uVar20;
                *(undefined4 *)(lVar4 + 0x30) = uVar12;
                *(undefined4 *)(lVar4 + 0x34) = uVar13;
                *(undefined4 *)(lVar4 + 0x38) = uVar14;
                *(undefined4 *)(lVar4 + 0x3c) = uVar15;
                *(undefined4 *)(lVar4 + 0x20) = uVar8;
                *(undefined4 *)(lVar4 + 0x24) = uVar9;
                *(undefined4 *)(lVar4 + 0x28) = uVar10;
                *(undefined4 *)(lVar4 + 0x2c) = uVar11;
              }
              *(undefined8 *)(lVar4 + 0x58) = *(undefined8 *)(lVar27 + -0x38 + lVar25);
              lVar3 = *(longlong *)(lVar27 + -0x30 + lVar25);
              *(longlong *)(lVar4 + 0x60) = lVar3;
              if (lVar3 != 0) {
                LOCK();
                *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
                UNLOCK();
              }
              *(undefined8 *)(lVar4 + 0x68) = 0;
              iVar22 = *(int *)(lVar27 + -0x20 + lVar25);
              puVar24 = *(undefined1 **)(lVar27 + -0x28 + lVar25);
              *(int *)(lVar4 + 0x70) = iVar22;
              if ((longlong)iVar22 == 0) {
                *(undefined4 *)(lVar4 + 0x74) = 0;
              }
              else {
                local_308 = (undefined8 *)(lVar4 + 0x68);
                local_310 = puVar24;
                FUN_1446dd7be(local_308,iVar22,0);
                memcpy((void *)*local_308,local_310,(longlong)iVar22 * 0xc);
              }
              *(undefined4 *)(lVar4 + 0x80) = *(undefined4 *)(lVar27 + -0x10 + lVar25);
              *(undefined8 *)(lVar4 + 0x78) = *(undefined8 *)(lVar27 + -0x18 + lVar25);
              *(undefined8 *)(lVar4 + 0x84) = *(undefined8 *)(lVar27 + -0xc + lVar25);
              *(undefined4 *)(lVar4 + 0x8c) = *(undefined4 *)(lVar27 + -4 + lVar25);
              *(undefined8 *)(lVar4 + 0x90) = *(undefined8 *)(lVar27 + lVar25);
              *(undefined4 *)(lVar4 + 0x98) = *(undefined4 *)(lVar27 + 8 + lVar25);
              lVar25 = lVar25 + 0xa0;
              uVar26 = uVar26 - 1;
            } while (uVar26 != 0);
            _Dst = (void *)param_1[0xf];
            FUN_14105732d(_Dst,uVar21 & 0xffffffff);
            iVar22 = iVar29;
            if ((int)param_1[0x10] != iVar29) {
              memmove(_Dst,(void *)(lVar17 + (longlong)_Dst),
                      (longlong)((int)param_1[0x10] - iVar29) * 0xa0);
              iVar22 = (int)param_1[0x10];
            }
            *(int *)(param_1 + 0x10) = iVar22 - iVar29;
          }
          FUN_1449daebe(&local_198);
        }
        FUN_1410576d6(&local_2d0,local_318);
        (**(code **)(*param_1 + 0x308))(param_1,&local_198,&local_2d0,1);
        FUN_1449daebe(&local_2d0);
      }
      FUN_1410572ee(local_318);
    }
  }
LAB_1410565ef:
  if ((local_60 ^ (ulonglong)auStack_388) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410572d4 FUN_1410572d4 body=25 status=ok
// SIG undefined FUN_1410572d4(void)

void FUN_1410572d4(longlong param_1)

{
  longlong lVar1;
  
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14b3e4b50;
  lVar1 = *(longlong *)(param_1 + 0x40);
  if (lVar1 == 0) {
    return;
  }
  if (lVar1 != 0) {
    if (DAT_14c872d28 == (longlong *)0x0) {
      FUN_1460d69fa();
    }
                    /* WARNING: Could not recover jumptable at 0x0001400020d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_14c872d28 + 0x48))(DAT_14c872d28,lVar1);
    return;
  }
  return;
}



// FUNCTION 1410572ee FUN_1410572ee body=63 status=ok
// SIG undefined FUN_1410572ee(void)

void FUN_1410572ee(undefined8 *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)((longlong)param_1 + 0xc);
  FUN_14105732d(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if ((iVar1 < 0) && (*(int *)((longlong)param_1 + 0xc) != 0)) {
    FUN_141058578(param_1,0);
    return;
  }
  return;
}



// FUNCTION 14105732d FUN_14105732d body=109 status=ok
// SIG undefined FUN_14105732d(void)

void FUN_14105732d(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char *pcVar4;
  
  if (param_2 != 0) {
    pcVar4 = (char *)(param_1 + 0x50);
    do {
      if (*(longlong *)(pcVar4 + 0x18) != 0) {
        FUN_1400020a8();
      }
      plVar3 = *(longlong **)(pcVar4 + 0x10);
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
      if (*pcVar4 == '\x01') {
        *pcVar4 = '\0';
      }
      pcVar4 = pcVar4 + 0xa0;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14105739a FUN_14105739a body=40 status=ok
// SIG undefined FUN_14105739a(void)

undefined8 FUN_14105739a(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  *(byte *)(param_3 + 0xf4) = *(byte *)(param_3 + 0xf4) & 0xed | 0x10;
  FUN_1408f10c6();
  return param_2;
}



// FUNCTION 1410573c2 FUN_1410573c2 body=61 status=ok
// SIG undefined FUN_1410573c2(void)

undefined8 FUN_1410573c2(longlong *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = (**(code **)(*param_1 + 0x180))();
  lVar2 = FUN_140149a73(uVar1,0);
  if ((lVar2 != 0) && (*(longlong **)(lVar2 + 0x140) != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0001410573f1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(**(longlong **)(lVar2 + 0x140) + 0xa8))();
    return uVar1;
  }
  return 0;
}



// FUNCTION 141057404 FUN_141057404 body=57 status=ok
// SIG undefined FUN_141057404(void)

void FUN_141057404(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6fc10 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6fc10 =
         FUN_140002ddd(FUN_146542e3e,uVar1,L"WaypointAttachmentStrategyState_RegistryActor");
  }
  return;
}



// FUNCTION 14105743e FUN_14105743e body=184 status=ok
// SIG undefined FUN_14105743e(void)

undefined2 * FUN_14105743e(undefined2 *param_1,undefined8 *param_2)

{
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *param_1 = 1;
  FUN_140c25b54();
  local_28 = *(undefined4 *)(param_2 + 1);
  local_30 = *param_2;
  FUN_14013eb2c(param_1);
  local_38 = *(undefined4 *)((longlong)param_2 + 0x14);
  local_40 = *(undefined8 *)((longlong)param_2 + 0xc);
  FUN_14013eb54(param_1);
  local_48 = *(undefined4 *)(param_2 + 4);
  local_50 = param_2[3];
  FUN_144928d62(param_1 + 8,4);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410574f8 FUN_1410574f8 body=379 status=ok
// SIG undefined FUN_1410574f8(void)

undefined8 * FUN_1410574f8(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,uint *param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined4 local_38;
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = *param_3;
  local_38 = *(undefined4 *)(param_3 + 1);
  FUN_141057c4c(param_1,&local_30,&local_40,0);
  if (local_30 != 0) {
    uVar5 = *param_4;
    uVar7 = param_4[2];
    if (uVar7 != 0) {
      uVar5 = uVar7 >> 0xd ^ uVar5 - uVar7;
      uVar8 = uVar5 << 8 ^ (-0x61c88647 - uVar7) - uVar5;
      uVar9 = uVar8 >> 0xd ^ (uVar7 - uVar5) - uVar8;
      uVar7 = uVar9 >> 0xc ^ (uVar5 - uVar8) - uVar9;
      uVar5 = uVar7 << 0x10 ^ (uVar8 - uVar9) - uVar7;
      uVar8 = uVar5 >> 5 ^ (uVar9 - uVar7) - uVar5;
      uVar7 = uVar8 >> 3 ^ (uVar7 - uVar5) - uVar8;
      uVar5 = uVar7 << 10 ^ (uVar5 - uVar8) - uVar7;
      uVar5 = uVar5 >> 0xf ^ uVar8 - (uVar7 + uVar5);
    }
    iVar6 = FUN_141057676((longlong *)(local_30 + 0x10),uVar5,param_4);
    if (iVar6 != -1) {
      lVar4 = *(longlong *)(local_30 + 0x10);
      lVar3 = lVar4 + (longlong)iVar6 * 0x28;
      if ((lVar3 != 0) && (lVar4 + (longlong)iVar6 * 0x28 != -0x10)) {
        *param_2 = *(undefined8 *)(lVar3 + 0x10);
        lVar3 = *(longlong *)(lVar3 + 0x18);
        param_2[1] = lVar3;
        if (lVar3 != 0) {
          LOCK();
          *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
          UNLOCK();
        }
        goto LAB_141057616;
      }
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
LAB_141057616:
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_28 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar2 = (int *)((longlong)local_28 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_28 + 0x10))(local_28);
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_68);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141057676 FUN_141057676 body=95 status=ok
// SIG undefined FUN_141057676(void)

int FUN_141057676(longlong *param_1,uint param_2,int *param_3)

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
        if ((*(int *)(lVar2 + lVar4 * 0x28) == *param_3) &&
           (*(int *)(lVar2 + lVar4 * 0x28 + 8) == param_3[2])) {
          return iVar1;
        }
        iVar1 = *(int *)(lVar2 + 0x20 + lVar4 * 0x28);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 1410576d6 FUN_1410576d6 body=456 status=ok
// SIG undefined FUN_1410576d6(void)

longlong * FUN_1410576d6(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  int iVar2;
  ulonglong *puVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_58 [36];
  uint local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] * 0xa0,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0xa0);
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
      thunk_FUN_14572512c(param_1,&local_34);
    }
  }
  else {
    local_34 = *(uint *)*puVar3;
    *puVar3 = (ulonglong)puVar1;
  }
  uVar4 = local_34;
  if (local_34 == 0) {
    if ((*(byte *)(param_1 + 5) & 1) != 0) {
      FUN_14105732d(*param_2,(int)param_2[1]);
      *(undefined4 *)(param_2 + 1) = 0;
      if (*(int *)((longlong)param_2 + 0xc) != 0) {
        FUN_141058578(param_2,0);
      }
    }
  }
  else if ((((int)local_34 < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x19999 < local_34 && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 1) = local_34;
    lVar5 = 0;
    lVar7 = 0;
    do {
      FUN_1410578fc(param_1,*param_2 + lVar5);
      lVar7 = lVar7 + 1;
      lVar5 = lVar5 + 0xa0;
    } while (lVar7 < (int)param_2[1]);
  }
  else {
    FUN_14105732d(*param_2,(int)param_2[1]);
    *(undefined4 *)(param_2 + 1) = 0;
    if (*(uint *)((longlong)param_2 + 0xc) != uVar4) {
      FUN_141058578(param_2,uVar4);
    }
    if (0 < (int)local_34) {
      iVar6 = 0;
      do {
        iVar2 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
          FUN_1457ecdd8(param_2,iVar2);
        }
        lVar5 = (longlong)iVar2 * 0xa0 + *param_2;
        FUN_14105789f(lVar5);
        FUN_1410578fc(param_1,lVar5);
        iVar6 = iVar6 + 1;
      } while (iVar6 < (int)local_34);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}


