// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1409e95fe FUN_1409e95fe body=647 status=ok
// SIG undefined FUN_1409e95fe(void)

void FUN_1409e95fe(longlong *param_1)

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
    if ((int)uVar8 < 1) goto LAB_1409e9661;
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
LAB_1409e9661:
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
      uVar2 = *(undefined8 *)(lVar7 + lVar13 * 0x48);
      uVar16 = (longlong)(int)((uint)((ulonglong)uVar2 >> 0x20) ^ (uint)uVar2) &
               (longlong)(int)param_1[9] - 1U;
      iVar15 = (int)uVar16;
      *(int *)(lVar7 + 0x44 + lVar13 * 0x48) = iVar15;
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = plVar1;
      }
      *(undefined4 *)(lVar7 + 0x40 + lVar13 * 0x48) =
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



// FUNCTION 1409e988c FUN_1409e988c body=57 status=ok
// SIG undefined FUN_1409e988c(void)

void FUN_1409e988c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb22b38 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb22b38 = FUN_140002ddd(FUN_14643adb7,uVar1,L"GpsGenerator_Range");
  }
  return;
}



// FUNCTION 1409e98c6 FUN_1409e98c6 body=74 status=ok
// SIG undefined FUN_1409e98c6(void)

void FUN_1409e98c6(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [36];
  undefined1 local_14 [4];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  FUN_1409e9912(param_1 + 0xc0,local_14,&local_10,0);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1409e9912 FUN_1409e9912 body=335 status=ok
// SIG undefined FUN_1409e9912(void)

undefined4 *
FUN_1409e9912(longlong param_1,undefined4 *param_2,ulonglong *param_3,undefined8 param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  ulonglong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1409e9af8(param_1,local_50);
  uVar3 = *param_3;
  *local_48 = uVar3;
  *(undefined4 *)(local_48 + 1) = 0xffffffff;
  local_54 = local_50[0];
  uVar2 = ((uint)(uVar3 >> 0x14) & 0xffff ^ (uint)(uVar3 >> 4)) * -0x7a143595;
  uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
  uVar2 = uVar2 >> 0x10 ^ uVar2;
  local_68 = param_4;
  cVar1 = FUN_1409e9a62(param_1,uVar2,local_48);
  if (cVar1 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    if (uVar4 < 4) {
      iVar5 = 1;
    }
    else {
      uVar3 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar6 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar5 = 1 << ((byte)lVar6 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar5 <= *(int *)(param_1 + 0x48))) {
      uVar2 = *(int *)(param_1 + 0x48) - 1U & uVar2;
      *(uint *)((longlong)local_48 + 0xc) = uVar2;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(local_48 + 1) =
           *(undefined4 *)
            (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar2) * 4);
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar2) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_1409e9cce(param_1);
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1409e9a62 FUN_1409e9a62 body=149 status=ok
// SIG undefined FUN_1409e9a62(void)

void FUN_1409e9a62(longlong *param_1,uint param_2,longlong *param_3,int *param_4,undefined1 *param_5
                  )

{
  undefined1 uVar1;
  longlong *plVar2;
  int iVar3;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar3 != -1) {
      do {
        plVar2 = (longlong *)(*param_1 + (longlong)iVar3 * 0x10);
        if (*(longlong *)(*param_1 + (longlong)iVar3 * 0x10) == *param_3) {
          *plVar2 = *param_3;
          FUN_1406f7cee(param_1,*param_4,1);
          *param_4 = iVar3;
          uVar1 = 1;
          break;
        }
        iVar3 = (int)plVar2[1];
        uVar1 = 0;
      } while (iVar3 != -1);
      goto LAB_1409e9acc;
    }
  }
  uVar1 = 0;
LAB_1409e9acc:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar1;
  }
  return;
}



// FUNCTION 1409e9af8 FUN_1409e9af8 body=470 status=ok
// SIG undefined FUN_1409e9af8(void)

int * FUN_1409e9af8(longlong *param_1,int *param_2)

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
      FUN_1446efaca(param_1,iVar11);
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
    iVar5 = *(int *)(*param_1 + 4 + lVar2 * 0x10);
    *(int *)(param_1 + 6) = iVar5;
    iVar8 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar8;
    if (iVar8 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar5 * 0x10) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar2 * 0x10 + *param_1;
  return param_2;
}



// FUNCTION 1409e9cce FUN_1409e9cce body=590 status=ok
// SIG undefined FUN_1409e9cce(void)

void FUN_1409e9cce(longlong *param_1)

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
            if (iVar2 - lVar11 == lVar10) goto LAB_1409e9ed7;
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
LAB_1409e9ed7:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1409e9f1e FUN_1409e9f1e body=603 status=ok
// SIG undefined FUN_1409e9f1e(void)

void FUN_1409e9f1e(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_1e8 [32];
  undefined **local_1c8;
  longlong *plStack_1c0;
  undefined ***local_1b8;
  undefined8 local_1b0;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined8 local_1a0;
  undefined4 local_198;
  undefined1 local_194;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  local_1b0 = &local_1b8;
  local_1c8 = &PTR_FUN_149e37810;
  local_1b8 = &local_1c8;
  plStack_1c0 = param_2;
  switchD_143c3d4dc::caseD_20();
  (**(code **)(*param_2 + 0x138))(param_2,param_1 + 0x30);
  if ((int)param_2[8] < 0x1c0) {
    iVar2 = 4;
    do {
      local_1b8 = DAT_14c8464f0;
      local_1c8 = DAT_14c8464e0;
      plStack_1c0 = DAT_14c8464e8;
      local_1a0 = DAT_14c846508;
      local_1b0 = (undefined ****)CONCAT44(DAT_14c8464f8._4_4_,(undefined4)DAT_14c8464f8);
      uStack_1a8 = (undefined4)DAT_14c846500;
      uStack_1a4 = DAT_14c846500._4_4_;
      local_198 = 0x461c4000;
      local_194 = 0;
      FUN_147da9a8e(param_2,&local_1c8);
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    if ((int)param_2[8] < 0x199) {
      (**(code **)(*param_2 + 0x150))(param_2,&local_1c8);
    }
  }
  if ((*(byte *)(param_2 + 5) & 5) == 0) {
    FUN_147dafd8e(param_2,param_1 + 400);
    FUN_1417f6fc7(param_2,param_1 + 0x5b8);
    (**(code **)(*param_2 + 0x138))(param_2,param_1 + 0x38);
    (**(code **)(*param_2 + 0x138))(param_2,param_1 + 0x40);
    (**(code **)(*param_2 + 0x138))(param_2,param_1 + 0x48);
    (**(code **)(*param_2 + 0x138))(param_2,param_1 + 0x50);
    (**(code **)(*param_2 + 0x138))(param_2,param_1 + 0x288);
    (**(code **)(*param_2 + 0x138))(param_2,param_1 + 0x110);
    (**(code **)(*param_2 + 0x138))(param_2,param_1 + 0x178);
    (**(code **)(*param_2 + 0x138))(param_2,param_1 + 0x170);
    (**(code **)(*param_2 + 0x138))(param_2,param_1 + 0x58);
    (**(code **)(*param_2 + 0x138))(param_2,param_1 + 0x168);
    (**(code **)(*param_2 + 0x138))(param_2,param_1 + 0x188);
  }
  FUN_1409ea17a(param_2,param_1 + 0x68);
  FUN_1409ea326(param_2,param_1 + 0x88);
  if (((*(uint *)(param_1 + 8) & 0x10) == 0) && ((*(byte *)((longlong)param_2 + 0x29) & 1) != 0)) {
    *(byte *)((longlong)param_2 + 0x29) = *(byte *)((longlong)param_2 + 0x29) | 0x80;
LAB_1409e9fbe:
    lVar3 = param_1;
    lVar1 = lVar3;
    if (*(longlong *)(lVar3 + 0x20) != 0) goto code_r0x0001409e9fcd;
    goto LAB_1409e9fd8;
  }
LAB_1409e9fe1:
  if ((local_30 ^ (ulonglong)auStack_1e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
code_r0x0001409e9fcd:
  param_1 = *(longlong *)(lVar3 + 0x20);
  if ((*(uint *)(lVar3 + 8) >> 0x1c & 1) == 0) goto LAB_1409e9fbe;
  lVar1 = FUN_142840154(lVar3);
LAB_1409e9fd8:
  if (lVar1 == 0) {
    param_1 = *(longlong *)(lVar3 + 0x20);
    goto LAB_1409e9fbe;
  }
  *(byte *)(lVar1 + 0x2e) = *(byte *)(lVar1 + 0x2e) | 2;
  goto LAB_1409e9fe1;
}



// FUNCTION 1409ea17a FUN_1409ea17a body=427 status=ok
// SIG undefined FUN_1409ea17a(void)

longlong * FUN_1409ea17a(longlong *param_1,longlong *param_2)

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
      FUN_140c6998c(param_2,0);
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
      (**(code **)(*param_1 + 0x138))(param_1,*param_2 + lVar4);
      lVar6 = lVar6 + 1;
      lVar4 = lVar4 + 8;
    } while (lVar6 < (int)param_2[1]);
  }
  else {
    *(undefined4 *)(param_2 + 1) = 0;
    if ((*(uint *)((longlong)param_2 + 0xc) == local_34) ||
       (FUN_140c6998c(param_2), 0 < (int)local_34)) {
      iVar5 = 0;
      do {
        iVar2 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
          FUN_140845902(param_2,iVar2);
        }
        *(undefined8 *)(*param_2 + (longlong)iVar2 * 8) = 0;
        (**(code **)(*param_1 + 0x138))(param_1);
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



// FUNCTION 1409ea326 FUN_1409ea326 body=428 status=ok
// SIG undefined FUN_1409ea326(void)

longlong * FUN_1409ea326(longlong *param_1,longlong *param_2)

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
      FUN_147daff34(param_2,0);
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
      (**(code **)(*param_1 + 0x138))(param_1,*param_2 + lVar4);
      lVar6 = lVar6 + 1;
      lVar4 = lVar4 + 8;
    } while (lVar6 < (int)param_2[1]);
  }
  else {
    *(undefined4 *)(param_2 + 1) = 0;
    if ((*(uint *)((longlong)param_2 + 0xc) == local_34) ||
       (FUN_147daff34(param_2), 0 < (int)local_34)) {
      iVar5 = 0;
      do {
        iVar2 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
          FUN_140831cc2(param_2,iVar2);
        }
        *(undefined8 *)(*param_2 + (longlong)iVar2 * 8) = 0;
        (**(code **)(*param_1 + 0x138))(param_1);
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



// FUNCTION 1409ea4d4 FUN_1409ea4d4 body=297 status=ok
// SIG undefined FUN_1409ea4d4(void)

undefined8 FUN_1409ea4d4(longlong param_1,undefined8 param_2,undefined8 param_3)

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
    if (iVar1 == 2) goto LAB_1409ea5f6;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1409ea5f6;
    }
    FUN_140192332(param_1 + 0x18,&local_38,0);
  }
  else {
LAB_1409ea5f6:
    local_38 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1409ea5a1;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5 + (longlong)*(int *)(param_1 + 0x28),param_2,param_3);
      uVar6 = 1;
      goto LAB_1409ea5a1;
    }
  }
  uVar6 = 0;
LAB_1409ea5a1:
  if ((local_38 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_38);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1409ea5fe FUN_1409ea5fe body=44 status=ok
// SIG undefined FUN_1409ea5fe(void)

void FUN_1409ea5fe(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_1447210f0();
  if (lVar1 == param_3) {
    FUN_1409ea62a(param_1);
    return;
  }
  return;
}



// FUNCTION 1409ea62a FUN_1409ea62a body=344 status=ok
// SIG undefined FUN_1409ea62a(void)

void FUN_1409ea62a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  longlong lVar7;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined5 uStack_50;
  undefined3 uStack_4b;
  undefined5 uStack_48;
  undefined1 local_40;
  undefined2 local_3f;
  undefined1 local_3d;
  undefined8 local_38;
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar3 = *(longlong *)(param_1 + 0x3d0);
  if (lVar3 == 0) goto LAB_1409ea6a9;
  lVar7 = (**(code **)(*(longlong *)(lVar3 + 0x28) + 0x10))(lVar3 + 0x28);
  lVar4 = *(longlong *)(lVar7 + 8);
  plVar5 = *(longlong **)(lVar7 + 0x10);
  if (plVar5 == (longlong *)0x0) {
    if (lVar4 == 0) goto LAB_1409ea6a9;
    local_28 = (longlong *)0x0;
LAB_1409ea688:
    local_30 = lVar4;
    cVar6 = FUN_1409ea784(lVar3 + 0x38,&local_30);
    if ((cVar6 != '\0') && (*(char *)(lVar3 + 0x290) == '\x05')) {
      FUN_144a808d5(&local_38,*(undefined8 *)(lVar3 + 0x31c),*(undefined8 *)(lVar3 + 0x308),
                    *(undefined8 *)(lVar3 + 0x308));
      local_78 = local_38;
      local_70 = 0;
      local_40 = 0;
      local_68 = 0;
      uStack_60 = 0;
      local_58 = 0;
      uStack_50 = 0;
      uStack_4b = 0;
      uStack_48 = 0;
      local_3f = 1;
      local_3d = 1;
      FUN_1405244c0(lVar3);
    }
    if (plVar5 == (longlong *)0x0) goto LAB_1409ea6a9;
  }
  else {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
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
    if (lVar4 != 0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
      local_28 = plVar5;
      goto LAB_1409ea688;
    }
  }
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
LAB_1409ea6a9:
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1409ea784 FUN_1409ea784 body=1401 status=ok
// SIG undefined FUN_1409ea784(void)

ulonglong FUN_1409ea784(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong lVar4;
  uint *puVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  uint uVar14;
  longlong lVar15;
  longlong lVar16;
  int iVar17;
  longlong *plVar18;
  int iVar19;
  ulonglong uVar20;
  undefined1 auStack_d8 [44];
  undefined4 local_ac;
  uint local_a8;
  int local_a4;
  ulonglong local_a0;
  longlong local_98;
  ulonglong local_90;
  ulonglong local_88;
  longlong *local_80;
  undefined8 local_78;
  uint *local_70;
  undefined8 *local_68;
  ulonglong local_60;
  undefined8 local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar14 = *(uint *)(param_1 + 0xd0);
  if (uVar14 == 0) {
    uVar11 = 1;
    uVar20 = 0;
    uVar3 = 0;
    iVar10 = 0;
  }
  else {
    puVar5 = *(uint **)(param_1 + 200);
    if (*(uint **)(param_1 + 200) == (uint *)0x0) {
      puVar5 = (uint *)(param_1 + 0xb8);
    }
    uVar3 = *puVar5;
    if (uVar3 == 0) {
      iVar10 = uVar14 + 0x1e;
      if (-1 < (int)(uVar14 - 1)) {
        iVar10 = uVar14 - 1;
      }
      uVar20 = 0;
      uVar11 = (ulonglong)(uint)(iVar10 >> 5);
      if (iVar10 >> 5 < 1) {
        uVar11 = uVar20;
      }
      iVar10 = 0;
      do {
        if (uVar11 == uVar20) goto LAB_1409eab97;
        iVar10 = iVar10 + 0x20;
        uVar3 = puVar5[uVar20 + 1];
        uVar20 = uVar20 + 1;
      } while (uVar3 == 0);
    }
    else {
      uVar20 = 0;
      iVar10 = 0;
    }
    uVar11 = (ulonglong)(-uVar3 & uVar3);
    uVar13 = uVar11 * 2 + 1;
    lVar15 = 0x3f;
    if (uVar13 != 0) {
      for (; uVar13 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    uVar3 = (iVar10 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
    if ((int)uVar14 <= (int)uVar3) {
      uVar3 = uVar14;
    }
  }
  if (uVar3 == uVar14) {
LAB_1409eab97:
    uVar13 = 0;
  }
  else {
    uVar12 = 0xffffffff;
    uVar13 = 0;
    local_a0 = (ulonglong)uVar14;
    local_98 = param_1;
    local_70 = (uint *)(param_1 + 0xb8);
    local_68 = param_2;
    do {
      lVar15 = *(longlong *)(local_98 + 0xa8);
      local_78 = *local_68;
      local_80 = (longlong *)local_68[1];
      if (local_80 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_80 + 1) = (int)local_80[1] + 1;
        UNLOCK();
      }
      lVar15 = lVar15 + (longlong)(int)uVar3 * 400;
      iVar19 = *(int *)(lVar15 + 0x58);
      local_a8 = uVar12;
      local_a4 = iVar10;
      local_90 = uVar11;
      local_88 = uVar13;
      local_60 = uVar20;
      if (iVar19 == 0) {
        uVar13 = 1;
        uVar11 = 0;
        iVar10 = 0;
        iVar9 = 0;
      }
      else {
        puVar5 = *(uint **)(lVar15 + 0x50);
        if (*(uint **)(lVar15 + 0x50) == (uint *)0x0) {
          puVar5 = (uint *)(lVar15 + 0x40);
        }
        uVar14 = *puVar5;
        if (uVar14 == 0) {
          iVar10 = iVar19 + 0x1e;
          if (-1 < iVar19 + -1) {
            iVar10 = iVar19 + -1;
          }
          uVar11 = 0;
          uVar20 = (ulonglong)(uint)(iVar10 >> 5);
          if (iVar10 >> 5 < 1) {
            uVar20 = uVar11;
          }
          iVar10 = 0;
          do {
            if (uVar20 == uVar11) goto LAB_1409eac42;
            iVar10 = iVar10 + 0x20;
            uVar14 = puVar5[uVar11 + 1];
            uVar11 = uVar11 + 1;
          } while (uVar14 == 0);
        }
        else {
          uVar11 = 0;
          iVar10 = 0;
        }
        uVar13 = (ulonglong)(-uVar14 & uVar14);
        uVar20 = uVar13 * 2 + 1;
        lVar16 = 0x3f;
        if (uVar20 != 0) {
          for (; uVar20 >> lVar16 == 0; lVar16 = lVar16 + -1) {
          }
        }
        iVar9 = (iVar10 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
        if (iVar19 <= iVar9) {
          iVar9 = iVar19;
        }
      }
      if (iVar9 == iVar19) {
LAB_1409eac42:
        local_ac = 0;
      }
      else {
        uVar14 = 0xffffffff;
        local_ac = 0;
        do {
          lVar16 = *(longlong *)(lVar15 + 0x30) + (longlong)iVar9 * 0x38;
          lVar4 = (longlong)*(int *)(*(longlong *)(lVar15 + 0x30) + 0x28 + (longlong)iVar9 * 0x38);
          if (lVar4 == 0) {
LAB_1409eabeb:
            local_58 = local_78;
            local_50 = local_80;
            if (local_80 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_80 + 1) = (int)local_80[1] + 1;
              UNLOCK();
            }
            FUN_1409eacfe(lVar15 + 8,lVar16,&local_58);
            if (0 < *(int *)(lVar16 + 0x28)) {
              uVar6 = FUN_140874968(lVar15 + 8,lVar16);
              local_ac = (undefined4)CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
            }
          }
          else {
            puVar5 = (uint *)(lVar16 + 0x18);
            if (*(uint **)(lVar16 + 0x20) != (uint *)0x0) {
              puVar5 = *(uint **)(lVar16 + 0x20);
            }
            lVar4 = lVar4 << 3;
            do {
              if ((((puVar5[1] == 0) || (uVar3 = *puVar5, (int)uVar3 < 0)) ||
                  (DAT_14c9647dc <= (int)uVar3)) ||
                 (((plVar18 = (longlong *)
                              ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
                   plVar18 == (longlong *)0x0 || (*(uint *)(plVar18 + 2) != puVar5[1])) ||
                  (((*(uint *)(plVar18 + 1) & 0x10200000) != 0 || (*plVar18 == 0)))))) {
                if (puVar5 != (uint *)0x0) goto LAB_1409eabeb;
                break;
              }
              puVar5 = puVar5 + 2;
              lVar4 = lVar4 + -8;
            } while (lVar4 != 0);
          }
          uVar14 = uVar14 & ~(uint)uVar13;
          puVar5 = *(uint **)(lVar15 + 0x50);
          if (*(uint **)(lVar15 + 0x50) == (uint *)0x0) {
            puVar5 = (uint *)(lVar15 + 0x40);
          }
          iVar17 = *(int *)(lVar15 + 0x58);
          iVar9 = (int)uVar11;
          lVar16 = (longlong)iVar9;
          uVar3 = puVar5[lVar16] & uVar14;
          if (uVar3 == 0) {
            iVar7 = iVar17 + 0x1e;
            if (-1 < iVar17 + -1) {
              iVar7 = iVar17 + -1;
            }
            iVar7 = iVar7 >> 5;
            iVar10 = iVar10 + 0x20;
            iVar8 = iVar7;
            if (iVar7 < iVar9) {
              iVar8 = iVar9;
            }
            if (iVar9 < iVar7) {
              lVar4 = 0;
              do {
                uVar3 = puVar5[lVar16 + lVar4 + 1];
                if (uVar3 != 0) {
                  uVar11 = (ulonglong)(iVar9 + (int)lVar4 + 1);
                  uVar14 = 0xffffffff;
                  goto LAB_1409ea9ed;
                }
                iVar10 = iVar10 + 0x20;
                lVar4 = lVar4 + 1;
              } while (iVar8 - lVar16 != lVar4);
              uVar14 = 0xffffffff;
              iVar9 = iVar8;
            }
            uVar11 = (ulonglong)(iVar9 + 1);
            iVar9 = iVar17;
          }
          else {
LAB_1409ea9ed:
            uVar13 = (ulonglong)(-uVar3 & uVar3);
            uVar20 = uVar13 * 2 + 1;
            lVar16 = 0x3f;
            if (uVar20 != 0) {
              for (; uVar20 >> lVar16 == 0; lVar16 = lVar16 + -1) {
              }
            }
            iVar9 = (iVar10 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
            if (iVar17 <= iVar9) {
              iVar9 = iVar17;
            }
          }
        } while (iVar9 != iVar19);
      }
      plVar18 = local_80;
      if (local_80 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_80 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_80)(local_80);
          LOCK();
          piVar2 = (int *)((longlong)plVar18 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar18 + 0x10))(plVar18);
          }
        }
      }
      uVar12 = local_a8 & ~(uint)local_90;
      puVar5 = *(uint **)(local_98 + 200);
      if (*(uint **)(local_98 + 200) == (uint *)0x0) {
        puVar5 = local_70;
      }
      uVar14 = *(uint *)(local_98 + 0xd0);
      iVar19 = (int)local_60;
      lVar15 = (longlong)iVar19;
      uVar3 = puVar5[lVar15] & uVar12;
      uVar20 = local_60;
      iVar10 = local_a4;
      if (uVar3 == 0) {
        iVar9 = uVar14 + 0x1e;
        if (-1 < (int)(uVar14 - 1)) {
          iVar9 = uVar14 - 1;
        }
        iVar9 = iVar9 >> 5;
        iVar10 = local_a4 + 0x20;
        iVar17 = iVar9;
        if (iVar9 < iVar19) {
          iVar17 = iVar19;
        }
        if (iVar19 < iVar9) {
          lVar16 = 0;
          do {
            uVar3 = puVar5[lVar15 + lVar16 + 1];
            if (uVar3 != 0) {
              uVar20 = (ulonglong)(iVar19 + (int)lVar16 + 1);
              uVar12 = 0xffffffff;
              goto LAB_1409eaad9;
            }
            iVar10 = iVar10 + 0x20;
            lVar16 = lVar16 + 1;
          } while (iVar17 - lVar15 != lVar16);
          uVar12 = 0xffffffff;
          iVar19 = iVar17;
        }
        uVar20 = (ulonglong)(iVar19 + 1);
        uVar11 = local_90;
        uVar3 = uVar14;
      }
      else {
LAB_1409eaad9:
        uVar11 = (ulonglong)(-uVar3 & uVar3);
        uVar13 = uVar11 * 2 + 1;
        lVar15 = 0x3f;
        if (uVar13 != 0) {
          for (; uVar13 >> lVar15 == 0; lVar15 = lVar15 + -1) {
          }
        }
        uVar3 = (iVar10 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
        if ((int)uVar14 <= (int)uVar3) {
          uVar3 = uVar14;
        }
      }
      uVar13 = CONCAT71((int7)(local_88 >> 8),(byte)local_88 | (byte)local_ac);
      param_2 = local_68;
    } while (uVar3 != (uint)local_a0);
  }
  plVar18 = (longlong *)param_2[1];
  if (plVar18 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar18 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar18)(plVar18);
      LOCK();
      piVar2 = (int *)((longlong)plVar18 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar18 + 0x10))(plVar18);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar13 & 0xffffff01;
}



// FUNCTION 1409eacfe FUN_1409eacfe body=10835 status=ok
// SIG undefined FUN_1409eacfe(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_1409eacfe(longlong param_1,uint *param_2,longlong *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined1 uVar3;
  ulonglong *****pppppuVar4;
  void *pvVar5;
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
  ulonglong ******ppppppuVar16;
  char cVar17;
  int iVar18;
  undefined4 uVar19;
  uint uVar20;
  uint uVar21;
  int iVar22;
  longlong lVar23;
  longlong lVar24;
  undefined8 uVar25;
  undefined1 *puVar26;
  undefined1 *puVar27;
  ulonglong *******pppppppuVar28;
  longlong *plVar29;
  byte bVar30;
  uint *puVar31;
  longlong lVar32;
  uint *puVar33;
  ulonglong *******pppppppuVar34;
  ulonglong uVar35;
  ulonglong uVar36;
  int *piVar37;
  int iVar38;
  longlong *plVar39;
  ulonglong *puVar40;
  ulonglong ******ppppppuVar41;
  uint *puVar42;
  ulonglong uVar43;
  ulonglong ******ppppppuVar44;
  uint uVar45;
  ulonglong ******ppppppuVar46;
  longlong lVar47;
  ulonglong uVar48;
  uint uVar49;
  ulonglong *******pppppppuVar50;
  int iVar51;
  undefined8 *puVar52;
  undefined1 *puVar53;
  ulonglong ******ppppppuVar54;
  ulonglong ******ppppppuVar55;
  ulonglong ******ppppppuVar56;
  int iVar57;
  int iVar58;
  longlong lVar59;
  ulonglong ******ppppppuVar60;
  ulonglong ******ppppppuVar61;
  ulonglong ******ppppppuVar62;
  bool bVar63;
  float fVar64;
  undefined1 auStack_4e8 [32];
  longlong *local_4c8;
  longlong *local_4c0;
  longlong local_4b0;
  char local_4a1;
  uint *local_4a0;
  ulonglong *******local_498;
  ulonglong *******local_490;
  undefined1 *local_488;
  undefined1 local_479;
  longlong *local_478;
  longlong *local_470;
  undefined4 *local_468;
  longlong *local_460;
  ulonglong *******local_458;
  longlong local_450;
  longlong *local_448;
  longlong local_440;
  longlong *local_438;
  ulonglong *******local_430;
  undefined4 local_428;
  longlong local_420;
  longlong local_418;
  longlong local_410;
  longlong local_408;
  longlong local_400;
  longlong local_3f8;
  ulonglong *******local_3f0;
  int iStack_3e8;
  undefined4 uStack_3e4;
  uint local_3e0;
  longlong local_3d8;
  longlong local_3d0;
  ulonglong *******local_3c8;
  undefined8 uStack_3c0;
  uint local_3b8;
  undefined4 local_3b4;
  longlong local_3a8;
  longlong local_3a0;
  longlong local_398;
  longlong local_390;
  longlong local_388;
  longlong local_380;
  longlong local_378;
  longlong local_370;
  uint local_368;
  uint uStack_364;
  uint uStack_360;
  uint uStack_35c;
  undefined4 local_358;
  int local_34c;
  undefined8 local_348;
  ulonglong *******local_340;
  undefined8 local_338;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_4e8;
  uVar3 = *(undefined1 *)(param_1 + 0x16c);
  *(undefined1 *)(param_1 + 0x16c) = 1;
  plVar29 = (longlong *)(param_1 + 0x28);
  uVar45 = param_2[1] ^ *param_2 ^ param_2[2] ^ param_2[3];
  local_4b0 = param_1;
  local_478 = param_3;
  iVar18 = FUN_1447bdbdc(plVar29,uVar45,param_2);
  local_4a0 = param_2;
  local_479 = uVar3;
  if (iVar18 == -1) {
LAB_1409ead85:
    if (*(int *)(local_4b0 + 0x5c) == 0) {
      iVar18 = *(int *)(local_4b0 + 0x30);
      *(int *)(local_4b0 + 0x30) = iVar18 + 1;
      if (*(int *)(local_4b0 + 0x34) == iVar18) {
        FUN_1447030e2(plVar29,iVar18);
      }
      iVar51 = *(int *)(local_4b0 + 0x50);
      if (iVar51 == 0) {
        iVar58 = -1;
      }
      else {
        iVar58 = iVar51 + 0x1e;
        if (-1 < iVar51 + -1) {
          iVar58 = iVar51 + -1;
        }
        iVar58 = iVar58 >> 5;
      }
      lVar32 = local_4b0 + 0x38;
      iVar38 = iVar51 + 1;
      iVar57 = iVar51 + 0x1f;
      if (-1 < iVar51) {
        iVar57 = iVar51;
      }
      if (iVar57 >> 5 == iVar58) {
        *(int *)(local_4b0 + 0x50) = iVar38;
      }
      else {
        if (*(int *)(local_4b0 + 0x54) <= iVar51) {
          iVar58 = iVar51;
          if (iVar51 + 0x20U < 0xa0) {
            iVar38 = 0x80;
          }
          else {
            uVar20 = iVar51 + 0x20U >> 5;
            if (*(int *)(local_4b0 + 0x54) + 0x1fU < 0xa0) {
              uVar49 = 4;
              if (4 < uVar20) {
                uVar49 = uVar20;
              }
            }
            else {
              uVar49 = uVar20 + (uVar20 * 3 >> 3) + 0x10;
            }
            uVar48 = (ulonglong)(uVar49 * 4);
            if (DAT_14c872d28 != (longlong *)0x0) {
              if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
                uVar21 = (uint)(uVar48 + 0xf);
                if (uVar49 < 0x1ffd) {
                  uVar48 = (ulonglong)
                           (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar21 >> 4]];
                }
                else {
                  uVar43 = uVar48 + 0xf & 0xfffffffffffffff0;
                  param_2 = local_4a0;
                  if (uVar43 < 0x7ff1) {
                    bVar30 = (&DAT_14c841e00)[uVar21 >> 4];
                    uVar35 = 0x32;
                    if (0x32 < bVar30) {
                      uVar35 = (ulonglong)bVar30;
                    }
                    uVar36 = 0x32 - (ulonglong)bVar30;
                    do {
                      uVar48 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar36 & 0xffffffff];
                      if (((&DAT_14c841d90)[uVar36 & 0xffffffff] & 0xf) == 0) goto LAB_1409ed263;
                      lVar23 = uVar35 + 1 + uVar36;
                      uVar36 = uVar36 - 1;
                    } while (lVar23 != 0x33);
                  }
                  uVar48 = 0x10;
                  if (0x10 < DAT_14c841df8) {
                    uVar48 = (ulonglong)DAT_14c841df8;
                  }
                  uVar48 = -uVar48 & (uVar43 + uVar48) - 1;
                }
              }
              else {
                uVar48 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar48,0);
                iVar58 = *(int *)(local_4b0 + 0x50);
              }
            }
LAB_1409ed263:
            iVar22 = (int)(uVar48 >> 2);
            iVar38 = -0x20;
            if ((int)uVar20 <= iVar22) {
              iVar38 = iVar22 << 5;
            }
          }
          *(int *)(local_4b0 + 0x54) = iVar38;
          FUN_1446efbd8(lVar32,iVar58);
          iVar38 = *(int *)(local_4b0 + 0x50) + 1;
        }
        iVar58 = iVar38 + 0x1f;
        if (-1 < iVar38) {
          iVar58 = iVar38;
        }
        *(int *)(local_4b0 + 0x50) = iVar38;
        if (iVar38 % 0x20 != 0) {
          lVar23 = *(longlong *)(local_4b0 + 0x48);
          if (*(longlong *)(local_4b0 + 0x48) == 0) {
            lVar23 = lVar32;
          }
          bVar30 = -(char)(iVar38 % 0x20);
          *(uint *)(lVar23 + (longlong)(iVar58 >> 5) * 4) =
               (uint)(*(int *)(lVar23 + (longlong)(iVar58 >> 5) * 4) << (bVar30 & 0x1f)) >>
               (bVar30 & 0x1f);
        }
      }
      lVar23 = (longlong)iVar18;
      if (*(longlong *)(local_4b0 + 0x48) != 0) {
        lVar32 = *(longlong *)(local_4b0 + 0x48);
      }
      bVar30 = (byte)iVar51 & 0x1f;
      puVar33 = (uint *)(lVar32 + (longlong)(iVar57 >> 5) * 4);
      *puVar33 = *puVar33 & (-2 << bVar30 | 0xfffffffeU >> 0x20 - bVar30);
    }
    else {
      iVar18 = *(int *)(local_4b0 + 0x58);
      lVar23 = (longlong)iVar18;
      iVar51 = *(int *)(*(longlong *)(local_4b0 + 0x28) + 4 + lVar23 * 0x38);
      *(int *)(local_4b0 + 0x58) = iVar51;
      iVar58 = *(int *)(local_4b0 + 0x5c) + -1;
      *(int *)(local_4b0 + 0x5c) = iVar58;
      if (iVar58 != 0) {
        *(undefined4 *)(*(longlong *)(local_4b0 + 0x28) + (longlong)iVar51 * 0x38) = 0xffffffff;
      }
    }
    puVar33 = (uint *)(local_4b0 + 0x38);
    puVar31 = *(uint **)(local_4b0 + 0x48);
    if (*(uint **)(local_4b0 + 0x48) == (uint *)0x0) {
      puVar31 = puVar33;
    }
    iVar51 = iVar18 + 0x1f;
    if (-1 < iVar18) {
      iVar51 = iVar18;
    }
    puVar31[iVar51 >> 5] = puVar31[iVar51 >> 5] | 1 << ((byte)iVar18 & 0x1f);
    uVar20 = 1;
    lVar32 = *(longlong *)(local_4b0 + 0x28);
    lVar23 = lVar23 * 0x38;
    puVar1 = (undefined4 *)(lVar32 + lVar23);
    uVar25 = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)(lVar32 + lVar23) = *(undefined8 *)param_2;
    ((undefined8 *)(lVar32 + lVar23))[1] = uVar25;
    *(undefined1 *)(lVar32 + 0x10 + lVar23) = 0;
    puVar52 = (undefined8 *)(lVar32 + 0x18 + lVar23);
    *puVar52 = 0;
    puVar52[1] = 0;
    *(undefined4 *)(lVar32 + 0x28 + lVar23) = 0;
    *(undefined8 *)(lVar32 + 0x2c + lVar23) = 0xffffffff00000001;
    if (*(int *)(local_4b0 + 0x30) - *(int *)(local_4b0 + 0x5c) == 1) {
      uVar49 = 1;
LAB_1409eaed7:
      if (((int)uVar49 < 1) || ((int)uVar20 <= *(int *)(local_4b0 + 0x70))) {
        uVar45 = *(int *)(local_4b0 + 0x70) - 1U & uVar45;
        puVar1[0xd] = uVar45;
        lVar23 = *(longlong *)(local_4b0 + 0x68);
        if (*(longlong *)(local_4b0 + 0x68) == 0) {
          lVar23 = local_4b0 + 0x60;
        }
        puVar1[0xc] = *(undefined4 *)
                       (lVar23 + ((longlong)*(int *)(local_4b0 + 0x70) - 1U & (longlong)(int)uVar45)
                                 * 4);
        lVar23 = *(longlong *)(local_4b0 + 0x68);
        if (*(longlong *)(local_4b0 + 0x68) == 0) {
          lVar23 = local_4b0 + 0x60;
        }
        *(int *)(lVar23 + ((longlong)*(int *)(local_4b0 + 0x70) - 1U & (longlong)(int)uVar45) * 4) =
             iVar18;
      }
      else {
        *(uint *)(local_4b0 + 0x70) = uVar20;
        plVar39 = (longlong *)(local_4b0 + 0x68);
        if (*(longlong *)(local_4b0 + 0x68) != 0) {
          FUN_1446efa72(plVar39,0,0,4);
          uVar20 = *(uint *)(local_4b0 + 0x70);
        }
        lVar23 = local_4b0 + 0x60;
        if (uVar20 == 1) {
          if (*plVar39 != 0) {
            FUN_1446efa72(plVar39,0,0,4);
          }
LAB_1409ebd02:
          uVar45 = 0;
          do {
            lVar32 = *(longlong *)(local_4b0 + 0x68);
            if (*(longlong *)(local_4b0 + 0x68) == 0) {
              lVar32 = lVar23;
            }
            *(undefined4 *)
             (lVar32 + (ulonglong)(*(int *)(local_4b0 + 0x70) + 0x7fffffffU & uVar45) * 4) =
                 0xffffffff;
            uVar45 = uVar45 + 1;
          } while (uVar20 != uVar45);
        }
        else {
          if (uVar20 == 0) goto LAB_1409eaf2b;
          FUN_1446efa72(plVar39,0,uVar20,4);
          if (0 < (int)uVar20) goto LAB_1409ebd02;
        }
        iVar51 = *(int *)(local_4b0 + 0x50);
        if (iVar51 == 0) {
          uVar48 = 0;
          uVar43 = 1;
          iVar58 = 0;
          iVar38 = 0;
        }
        else {
          puVar31 = *(uint **)(local_4b0 + 0x48);
          if (*(uint **)(local_4b0 + 0x48) == (uint *)0x0) {
            puVar31 = puVar33;
          }
          uVar45 = *puVar31;
          if (uVar45 == 0) {
            iVar58 = iVar51 + 0x1e;
            if (-1 < iVar51 + -1) {
              iVar58 = iVar51 + -1;
            }
            uVar48 = 0;
            uVar43 = (ulonglong)(uint)(iVar58 >> 5);
            if (iVar58 >> 5 < 1) {
              uVar43 = uVar48;
            }
            iVar38 = 0;
            do {
              if (uVar43 == uVar48) goto LAB_1409eaf2b;
              iVar38 = iVar38 + 0x20;
              uVar45 = puVar31[uVar48 + 1];
              uVar48 = uVar48 + 1;
            } while (uVar45 == 0);
          }
          else {
            uVar48 = 0;
            iVar38 = 0;
          }
          uVar43 = (ulonglong)(-uVar45 & uVar45);
          uVar35 = uVar43 * 2 + 1;
          lVar32 = 0x3f;
          if (uVar35 != 0) {
            for (; uVar35 >> lVar32 == 0; lVar32 = lVar32 + -1) {
            }
          }
          iVar58 = (iVar38 - ((uint)lVar32 ^ 0x3f)) + 0x3e;
          if (iVar51 <= iVar58) {
            iVar58 = iVar51;
          }
        }
        if (iVar58 < iVar51) {
          uVar45 = 0xffffffff;
          do {
            lVar32 = *(longlong *)(local_4b0 + 0x28);
            lVar47 = (longlong)iVar58 * 0x38;
            uVar35 = (longlong)
                     (int)(*(uint *)(lVar32 + 4 + lVar47) ^ *(uint *)(lVar32 + lVar47) ^
                           *(uint *)(lVar32 + 8 + lVar47) ^ *(uint *)(lVar32 + 0xc + lVar47)) &
                     (longlong)*(int *)(local_4b0 + 0x70) - 1U;
            iVar51 = (int)uVar35;
            *(int *)(lVar32 + 0x34 + lVar47) = iVar51;
            lVar24 = *(longlong *)(local_4b0 + 0x68);
            if (*(longlong *)(local_4b0 + 0x68) == 0) {
              lVar24 = lVar23;
            }
            *(undefined4 *)(lVar32 + 0x30 + lVar47) =
                 *(undefined4 *)(lVar24 + ((longlong)*(int *)(local_4b0 + 0x70) - 1U & uVar35) * 4);
            lVar32 = *(longlong *)(local_4b0 + 0x68);
            if (*(longlong *)(local_4b0 + 0x68) == 0) {
              lVar32 = lVar23;
            }
            *(int *)(lVar32 + ((longlong)iVar51 & (longlong)*(int *)(local_4b0 + 0x70) - 1U) * 4) =
                 iVar58;
            uVar45 = ~(uint)uVar43 & uVar45;
            puVar31 = *(uint **)(local_4b0 + 0x48);
            if (*(uint **)(local_4b0 + 0x48) == (uint *)0x0) {
              puVar31 = puVar33;
            }
            iVar51 = *(int *)(local_4b0 + 0x50);
            iVar58 = (int)uVar48;
            lVar32 = (longlong)iVar58;
            uVar20 = puVar31[lVar32] & uVar45;
            param_2 = local_4a0;
            if (uVar20 == 0) {
              iVar57 = iVar51 + 0x1e;
              if (-1 < iVar51 + -1) {
                iVar57 = iVar51 + -1;
              }
              iVar57 = iVar57 >> 5;
              iVar22 = iVar57;
              if (iVar57 < iVar58) {
                iVar22 = iVar58;
              }
              if (iVar57 <= iVar58) break;
              lVar24 = 0;
              while( true ) {
                iVar38 = iVar38 + 0x20;
                uVar20 = puVar31[lVar32 + lVar24 + 1];
                if (uVar20 != 0) break;
                lVar24 = lVar24 + 1;
                if (iVar22 - lVar32 == lVar24) goto LAB_1409eaf2b;
              }
              uVar48 = (ulonglong)(iVar58 + (int)lVar24 + 1);
              uVar45 = 0xffffffff;
            }
            uVar43 = (ulonglong)(-uVar20 & uVar20);
            uVar35 = uVar43 * 2 + 1;
            lVar32 = 0x3f;
            if (uVar35 != 0) {
              for (; uVar35 >> lVar32 == 0; lVar32 = lVar32 + -1) {
              }
            }
            iVar58 = (iVar38 - ((uint)lVar32 ^ 0x3f)) + 0x3e;
          } while (iVar58 < iVar51);
        }
      }
    }
    else {
      iVar51 = FUN_1447bdbdc(plVar29,uVar45,puVar1);
      if (iVar51 == -1) {
        uVar49 = *(int *)(local_4b0 + 0x30) - *(int *)(local_4b0 + 0x5c);
        if (3 < uVar49) {
          uVar48 = (ulonglong)(uVar49 & 0xfffffffe) + 0xf;
          lVar23 = 0x3f;
          if (uVar48 != 0) {
            for (; uVar48 >> lVar23 == 0; lVar23 = lVar23 + -1) {
            }
          }
          uVar20 = 1 << ((byte)lVar23 & 0x1f);
        }
        goto LAB_1409eaed7;
      }
      puVar2 = (undefined4 *)(*plVar29 + (longlong)iVar51 * 0x38);
      if (*(longlong *)(*plVar29 + 0x20 + (longlong)iVar51 * 0x38) != 0) {
        FUN_1400020a8();
      }
      uVar19 = *puVar1;
      uVar6 = puVar1[1];
      uVar7 = puVar1[2];
      uVar8 = puVar1[3];
      uVar9 = puVar1[4];
      uVar10 = puVar1[5];
      uVar11 = puVar1[6];
      uVar12 = puVar1[7];
      uVar13 = puVar1[9];
      uVar14 = puVar1[10];
      uVar15 = puVar1[0xb];
      puVar2[8] = puVar1[8];
      puVar2[9] = uVar13;
      puVar2[10] = uVar14;
      puVar2[0xb] = uVar15;
      puVar2[4] = uVar9;
      puVar2[5] = uVar10;
      puVar2[6] = uVar11;
      puVar2[7] = uVar12;
      *puVar2 = uVar19;
      puVar2[1] = uVar6;
      puVar2[2] = uVar7;
      puVar2[3] = uVar8;
      FUN_147566cda(plVar29,iVar18);
      param_2 = local_4a0;
    }
LAB_1409eaf2b:
    lVar23 = *plVar29 + (longlong)iVar18 * 0x38;
  }
  else {
    if (*plVar29 + (longlong)iVar18 * 0x38 == 0) goto LAB_1409ead85;
    lVar23 = (longlong)iVar18 * 0x38 + *plVar29;
  }
  local_488 = (undefined1 *)(lVar23 + 0x10);
  lVar32 = lVar23 + 0x18;
  *(undefined4 *)(lVar23 + 0x28) = 0;
  if (*(int *)(lVar23 + 0x2c) < 0) {
    FUN_147566d4e(lVar32);
  }
  lVar23 = local_4b0;
  *(int *)(local_4b0 + 0x168) = *(int *)(local_4b0 + 0x168) + 1;
  local_470 = (longlong *)(local_4b0 + 0x78);
  iVar18 = FUN_1400a4ce0(local_470,param_2[1] ^ *param_2 ^ param_2[2] ^ param_2[3],param_2);
  if (iVar18 != -1) {
    lVar24 = (longlong)iVar18 * 0x68 + *local_470;
    if (lVar24 + 0x10 != 0 && lVar24 != 0) {
      lVar47 = lVar24 + 0x10;
      if (*(longlong *)(lVar24 + 0x50) != 0) {
        lVar47 = *(longlong *)(lVar24 + 0x50);
      }
      if ((longlong)*(int *)(lVar24 + 0x58) != 0) {
        lVar24 = (longlong)*(int *)(lVar24 + 0x58) << 4;
        do {
          FUN_14179e6c4(lVar23,lVar47);
          lVar47 = lVar47 + 0x10;
          lVar24 = lVar24 + -0x10;
        } while (lVar24 != 0);
      }
    }
  }
  puVar33 = local_4a0;
  if ((((*(int *)(lVar23 + 0x1c) == 0) || (uVar45 = *(uint *)(lVar23 + 0x18), (int)uVar45 < 0)) ||
      (DAT_14c9647dc <= (int)uVar45)) ||
     (((plVar39 = (longlong *)
                  ((ulonglong)((uVar45 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar45 >> 0x10) * 8)),
       plVar39 == (longlong *)0x0 || ((int)plVar39[2] != *(int *)(lVar23 + 0x1c))) ||
      (((*(uint *)(plVar39 + 1) & 0x10200000) != 0 ||
       (local_460 = (longlong *)*plVar39, local_460 == (longlong *)0x0)))))) goto LAB_1409ec486;
  uVar19 = FUN_1447addd0(local_4a0,0x10);
  iVar18 = FUN_140f5cb3a(lVar23 + 0x118,uVar19,puVar33);
  plVar39 = local_478;
  lVar23 = local_4b0;
  if (iVar18 != -1) goto LAB_1409ec486;
  local_468 = (undefined4 *)(local_4b0 + 0x20);
  local_368 = *puVar33;
  uStack_364 = puVar33[1];
  uStack_360 = puVar33[2];
  uStack_35c = puVar33[3];
  local_358 = *(undefined4 *)(local_4b0 + 0x20);
  uVar25 = FUN_1405e0c42(*local_478 + 0x38);
  plVar39 = (longlong *)FUN_1432dbf3e(*plVar39 + 0x38);
  if ((plVar39 == (longlong *)0x0) ||
     (lVar23 = (**(code **)(*plVar39 + 8))(plVar39,&local_368), lVar23 == 0)) {
    puVar33 = local_4a0;
    cVar17 = *(char *)((longlong)local_460 + 0x61);
    local_388 = *local_478;
    if (*(int *)(local_388 + 0x1c) == 0) {
      local_490 = (ulonglong *******)0x0;
    }
    else {
      uVar45 = *(uint *)(local_388 + 0x18);
      local_490 = (ulonglong *******)0x0;
      if ((-1 < (int)uVar45) && ((int)uVar45 < DAT_14c9647dc)) {
        puVar52 = (undefined8 *)
                  ((ulonglong)((uVar45 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar45 >> 0x10) * 8));
        if ((puVar52 == (undefined8 *)0x0) ||
           ((*(int *)(puVar52 + 2) != *(int *)(local_388 + 0x1c) ||
            ((*(uint *)(puVar52 + 1) & 0x10200000) != 0)))) {
          local_490 = (ulonglong *******)0x0;
        }
        else {
          local_490 = (ulonglong *******)*puVar52;
        }
      }
    }
    local_380 = local_478[1];
    if (local_380 != 0) {
      LOCK();
      *(int *)(local_380 + 8) = *(int *)(local_380 + 8) + 1;
      UNLOCK();
    }
    local_448 = (longlong *)FUN_140165676(&local_388);
    lVar24 = (**(code **)(*local_460 + 0x2e8))();
    iVar18 = FUN_14031352e(lVar24);
    lVar23 = local_4b0;
    if ((iVar18 == -1) ||
       (lVar24 = (longlong)iVar18 * 0x80 + *(longlong *)(lVar24 + 0x70), lVar24 == 0)) {
      plVar29 = (longlong *)FUN_140127e98(*local_478 + 0x38);
      if (plVar29 != (longlong *)0x0) {
        local_340 = (ulonglong *******)0x0;
        local_338 = 0x100000000;
        cVar17 = (**(code **)(*plVar29 + 0x10))(plVar29,puVar33,*local_468,&local_348);
        pppppppuVar34 = local_340;
        if (local_340 == (ulonglong *******)0x0) {
          pppppppuVar34 = (ulonglong *******)&local_348;
        }
        lVar23 = (longlong)(int)local_338;
        if (lVar23 != 0) {
          lVar24 = 0;
          puVar53 = local_488;
          do {
            uVar45 = 0;
            iVar18 = 0;
            if (*(longlong *)((longlong)pppppppuVar34 + lVar24) != 0) {
              uVar45 = *(uint *)(*(longlong *)((longlong)pppppppuVar34 + lVar24) + 0xc);
              if ((int)uVar45 < DAT_14c9647dc) {
                lVar47 = (ulonglong)((uVar45 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar45 >> 0x10) * 8);
              }
              else {
                lVar47 = 0;
              }
              iVar18 = *(int *)(lVar47 + 0x10);
              if (*(int *)(lVar47 + 0x10) == 0) {
                LOCK();
                iVar51 = DAT_14c964868 + 1;
                UNLOCK();
                iVar18 = DAT_14c964868 + 1;
                bVar63 = DAT_14c964868 < 1000;
                DAT_14c964868 = iVar51;
                if (bVar63) {
                  FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                ,iVar18);
                  puVar53 = local_488;
                }
                LOCK();
                iVar51 = *(int *)(lVar47 + 0x10);
                bVar63 = iVar51 == 0;
                if (bVar63) {
                  *(int *)(lVar47 + 0x10) = iVar18;
                  iVar51 = 0;
                }
                UNLOCK();
                if (!bVar63) {
                  iVar18 = iVar51;
                }
              }
            }
            iVar51 = *(int *)(puVar53 + 0x18);
            uVar20 = iVar51 + 1;
            *(uint *)(puVar53 + 0x18) = uVar20;
            if (*(uint *)(puVar53 + 0x1c) < uVar20) {
              FUN_1458c464e(lVar32);
              puVar53 = local_488;
            }
            lVar47 = *(longlong *)(puVar53 + 0x10);
            if (*(longlong *)(puVar53 + 0x10) == 0) {
              lVar47 = lVar32;
            }
            *(ulonglong *)(lVar47 + (longlong)iVar51 * 8) = CONCAT44(iVar18,uVar45);
            lVar24 = lVar24 + 8;
            puVar33 = local_4a0;
          } while (lVar23 * 8 != lVar24);
        }
        if (local_340 != (ulonglong *******)0x0) {
          FUN_1400020a8();
        }
        puVar53 = local_488;
        if (cVar17 == '\0') goto LAB_1409ec307;
      }
      lVar23 = FUN_1400a16d0(*local_478 + 0x38);
      puVar53 = local_488;
      if (lVar23 != 0) {
        local_4c8 = (longlong *)((ulonglong)local_4c8 & 0xffffffff00000000);
        FUN_140f96e2c(lVar23,&local_348,puVar33,local_468);
        puVar53 = local_488;
        if ((((local_348._4_4_ != 0) && (-1 < (int)(uint)local_348)) &&
            ((int)(uint)local_348 < DAT_14c9647dc)) &&
           (((plVar29 = (longlong *)
                        ((ulonglong)(((uint)local_348 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)((uint)local_348 >> 0x10) * 8)),
             plVar29 != (longlong *)0x0 && ((int)plVar29[2] == local_348._4_4_)) &&
            (((*(uint *)(plVar29 + 1) & 0x10200000) == 0 && (*plVar29 != 0)))))) {
          uVar45 = *(uint *)(*plVar29 + 0xc);
          if ((int)uVar45 < DAT_14c9647dc) {
            lVar23 = (ulonglong)((uVar45 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar45 >> 0x10) * 8);
          }
          else {
            lVar23 = 0;
          }
          iVar18 = *(int *)(lVar23 + 0x10);
          if (*(int *)(lVar23 + 0x10) == 0) {
            LOCK();
            iVar18 = DAT_14c964868 + 1;
            UNLOCK();
            iVar51 = DAT_14c964868 + 1;
            bVar63 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar18;
            if (bVar63) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,iVar51);
            }
            LOCK();
            iVar18 = *(int *)(lVar23 + 0x10);
            bVar63 = iVar18 == 0;
            if (bVar63) {
              *(int *)(lVar23 + 0x10) = iVar51;
              iVar18 = 0;
            }
            UNLOCK();
            if (bVar63) {
              iVar18 = iVar51;
            }
          }
          iVar51 = *(int *)(local_488 + 0x18);
          uVar20 = iVar51 + 1;
          *(uint *)(local_488 + 0x18) = uVar20;
          if (*(uint *)(local_488 + 0x1c) < uVar20) {
            FUN_1458c464e(lVar32);
          }
          if (*(longlong *)(local_488 + 0x10) != 0) {
            lVar32 = *(longlong *)(local_488 + 0x10);
          }
          *(ulonglong *)(lVar32 + (longlong)iVar51 * 8) = CONCAT44(iVar18,uVar45);
          puVar33 = local_4a0;
          puVar53 = local_488;
        }
      }
    }
    else if (((*(int *)(lVar24 + 0x5c) == 0 && *(int *)(lVar24 + 0x58) == 0) &&
             *(int *)(lVar24 + 0x60) == 0) && *(int *)(lVar24 + 100) == 0) {
      local_340 = (ulonglong *******)0x0;
      local_338 = 0x100000000;
      if (((*(int *)(lVar24 + 0x6c) == 0 && *(int *)(lVar24 + 0x68) == 0) &&
          *(int *)(lVar24 + 0x70) == 0) && *(int *)(lVar24 + 0x74) == 0) {
        local_3c8 = local_490;
        uStack_3c0 = 0;
        local_3b8 = local_3b8 & 0xffffff00;
        if (local_448 == (longlong *)0x0) {
          local_420 = *local_478;
          local_418 = local_478[1];
          if (local_418 != 0) {
            LOCK();
            *(int *)(local_418 + 8) = *(int *)(local_418 + 8) + 1;
            UNLOCK();
          }
          local_4c8 = &local_348;
          (**(code **)(*local_460 + 0x2c0))(local_460,puVar33,&local_3c8,&local_420);
        }
        else {
          local_4c0 = &local_348;
          local_4c8 = local_460;
          (**(code **)(*local_448 + 0x48))(local_448,&local_3c8,puVar33,*local_468);
        }
      }
      else {
        local_400 = *local_478;
        local_3f8 = local_478[1];
        if (local_3f8 != 0) {
          LOCK();
          *(int *)(local_3f8 + 8) = *(int *)(local_3f8 + 8) + 1;
          UNLOCK();
        }
        FUN_14179f016(lVar24 + 0x68,&local_3f0,*(undefined4 *)(local_4b0 + 0x20),&local_400);
        local_3c8 = local_3f0;
        uStack_3c0 = CONCAT44(uStack_3e4,iStack_3e8);
        local_3b8 = local_3e0;
        local_3b4 = 0xffffffff;
        plVar39 = (longlong *)(lVar23 + 200);
        uVar45 = FUN_1447addd0(&local_3c8,0x10);
        uVar45 = uVar45 ^ local_3b8;
        iVar18 = FUN_140e0695e(plVar39,uVar45,&local_3c8);
        if (iVar18 == -1) {
LAB_1409ecebb:
          local_3f0 = (ulonglong *******)&local_3c8;
          FUN_145ad7ce2(plVar39,&local_34c,uVar45);
          lVar23 = *plVar39;
          lVar32 = (longlong)local_34c * 0x70;
        }
        else {
          lVar23 = *plVar39;
          lVar32 = (longlong)iVar18 * 0x70;
          if (lVar23 + lVar32 == 0) goto LAB_1409ecebb;
        }
        FUN_140f6d5fe(lVar23 + lVar32 + 0x18,local_4a0);
        local_410 = *local_478;
        local_408 = local_478[1];
        if (local_408 != 0) {
          LOCK();
          *(int *)(local_408 + 8) = *(int *)(local_408 + 8) + 1;
          UNLOCK();
        }
        FUN_1410cbcd8(lVar24 + 0x68,&local_3f0,*local_468,&local_410);
        pppppppuVar34 = local_3f0;
        puVar33 = local_4a0;
        if ((longlong)iStack_3e8 != 0) {
          lVar23 = 0;
          do {
            uVar43 = local_338;
            uVar48 = *(ulonglong *)((longlong)pppppppuVar34 + lVar23);
            if (((uVar48 >> 0x20 != 0) && (uVar45 = (uint)uVar48, -1 < (int)uVar45)) &&
               (((int)uVar45 < DAT_14c9647dc &&
                (((puVar40 = (ulonglong *)
                             ((ulonglong)((uVar45 & 0xffff) * 0x18) +
                             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar45 >> 0xd & 0x3fff8))),
                  puVar40 != (ulonglong *)0x0 && ((int)puVar40[2] == (int)(uVar48 >> 0x20))) &&
                 ((puVar40[1] & 0x10200000) == 0)))))) {
              if ((puVar40[1] & 0x10200000) == 0) {
                ppppppuVar55 = (ulonglong ******)*puVar40;
              }
              else {
                ppppppuVar55 = (ulonglong ******)0x0;
              }
              lVar32 = (longlong)(int)local_338;
              uVar45 = (int)local_338 + 1;
              local_338 = CONCAT44(local_338._4_4_,uVar45);
              if (local_338._4_4_ < uVar45) {
                FUN_14571f162(&local_348,uVar43 & 0xffffffff);
              }
              pppppppuVar28 = local_340;
              if (local_340 == (ulonglong *******)0x0) {
                pppppppuVar28 = (ulonglong *******)&local_348;
              }
              pppppppuVar28[lVar32] = ppppppuVar55;
            }
            lVar23 = lVar23 + 8;
            puVar33 = local_4a0;
          } while ((longlong)iStack_3e8 * 8 != lVar23);
        }
      }
      iVar18 = FUN_1447bdbdc(plVar29,puVar33[1] ^ *puVar33 ^ puVar33[2] ^ puVar33[3],puVar33);
      if (iVar18 == -1) {
        lVar23 = 0;
      }
      else {
        lVar23 = (longlong)iVar18 * 0x38 + *plVar29;
      }
      puVar53 = (undefined1 *)(lVar23 + 0x10);
      if (lVar23 == 0) {
        puVar53 = (undefined1 *)0x0;
      }
      pppppppuVar34 = local_340;
      if (local_340 == (ulonglong *******)0x0) {
        pppppppuVar34 = (ulonglong *******)&local_348;
      }
      lVar23 = (longlong)(int)local_338;
      if (lVar23 != 0) {
        lVar32 = 0;
        do {
          uVar45 = 0;
          iVar18 = 0;
          if (*(longlong *)((longlong)pppppppuVar34 + lVar32) != 0) {
            uVar45 = *(uint *)(*(longlong *)((longlong)pppppppuVar34 + lVar32) + 0xc);
            if ((int)uVar45 < DAT_14c9647dc) {
              lVar24 = (ulonglong)((uVar45 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar45 >> 0x10) * 8);
            }
            else {
              lVar24 = 0;
            }
            iVar18 = *(int *)(lVar24 + 0x10);
            if (*(int *)(lVar24 + 0x10) == 0) {
              LOCK();
              iVar51 = DAT_14c964868 + 1;
              UNLOCK();
              iVar18 = DAT_14c964868 + 1;
              bVar63 = DAT_14c964868 < 1000;
              DAT_14c964868 = iVar51;
              if (bVar63) {
                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                              ,iVar18);
              }
              LOCK();
              iVar51 = *(int *)(lVar24 + 0x10);
              bVar63 = iVar51 == 0;
              if (bVar63) {
                *(int *)(lVar24 + 0x10) = iVar18;
                iVar51 = 0;
              }
              UNLOCK();
              if (!bVar63) {
                iVar18 = iVar51;
              }
            }
          }
          iVar51 = *(int *)(puVar53 + 0x18);
          uVar20 = iVar51 + 1;
          *(uint *)(puVar53 + 0x18) = uVar20;
          if (*(uint *)(puVar53 + 0x1c) < uVar20) {
            FUN_1458c464e(puVar53 + 8);
          }
          puVar27 = *(undefined1 **)(puVar53 + 0x10);
          if (*(undefined1 **)(puVar53 + 0x10) == (undefined1 *)0x0) {
            puVar27 = puVar53 + 8;
          }
          *(ulonglong *)(puVar27 + (longlong)iVar51 * 8) = CONCAT44(iVar18,uVar45);
          lVar32 = lVar32 + 8;
          puVar33 = local_4a0;
        } while (lVar23 * 8 != lVar32);
      }
      if (local_340 != (ulonglong *******)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      puVar1 = (undefined4 *)(lVar24 + 0x58);
      local_398 = *local_478;
      local_390 = local_478[1];
      if (local_390 != 0) {
        LOCK();
        *(int *)(local_390 + 8) = *(int *)(local_390 + 8) + 1;
        UNLOCK();
      }
      FUN_1401ac0fe(local_4b0,&local_3f0,puVar1,&local_398);
      plVar39 = local_470;
      uVar45 = *(uint *)(lVar24 + 0x5c) ^ *(uint *)(lVar24 + 0x58) ^ *(uint *)(lVar24 + 0x60) ^
               *(uint *)(lVar24 + 100);
      iVar18 = FUN_1400a4ce0(local_470,uVar45,puVar1);
      lVar23 = lVar24;
      local_450 = lVar24;
      if (iVar18 == -1) {
LAB_1409ebf9a:
        local_4a1 = cVar17;
        if (*(int *)(local_4b0 + 0xac) == 0) {
          uVar20 = *(uint *)(local_4b0 + 0x80);
          pppppppuVar34 = (ulonglong *******)(ulonglong)uVar20;
          *(uint *)(local_4b0 + 0x80) = uVar20 + 1;
          if (*(uint *)(local_4b0 + 0x84) == uVar20) {
            FUN_1406a7630(local_470,uVar20);
          }
          iVar18 = *(int *)(local_4b0 + 0xa0);
          if (iVar18 == 0) {
            iVar51 = -1;
          }
          else {
            iVar51 = iVar18 + 0x1e;
            if (-1 < iVar18 + -1) {
              iVar51 = iVar18 + -1;
            }
            iVar51 = iVar51 >> 5;
          }
          lVar59 = local_4b0 + 0x88;
          iVar58 = iVar18 + 1;
          iVar38 = iVar18 + 0x1f;
          if (-1 < iVar18) {
            iVar38 = iVar18;
          }
          lVar32 = local_4b0;
          local_498 = pppppppuVar34;
          if (iVar38 >> 5 == iVar51) {
            *(int *)(local_4b0 + 0xa0) = iVar58;
          }
          else {
            if (*(int *)(local_4b0 + 0xa4) <= iVar18) {
              iVar51 = iVar18;
              if (iVar18 + 0x20U < 0xa0) {
                iVar58 = 0x80;
              }
              else {
                uVar20 = iVar18 + 0x20U >> 5;
                if (*(int *)(local_4b0 + 0xa4) + 0x1fU < 0xa0) {
                  uVar49 = 4;
                  if (4 < uVar20) {
                    uVar49 = uVar20;
                  }
                }
                else {
                  uVar49 = uVar20 + (uVar20 * 3 >> 3) + 0x10;
                }
                uVar48 = (ulonglong)(uVar49 * 4);
                if (DAT_14c872d28 != (longlong *)0x0) {
                  if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
                    uVar21 = (uint)(uVar48 + 0xf);
                    if (uVar49 < 0x1ffd) {
                      uVar48 = (ulonglong)
                               (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar21 >> 4]];
                    }
                    else {
                      uVar43 = uVar48 + 0xf & 0xfffffffffffffff0;
                      if (uVar43 < 0x7ff1) {
                        bVar30 = (&DAT_14c841e00)[uVar21 >> 4];
                        uVar35 = 0x32;
                        if (0x32 < bVar30) {
                          uVar35 = (ulonglong)bVar30;
                        }
                        uVar36 = 0x32 - (ulonglong)bVar30;
                        do {
                          uVar48 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar36 & 0xffffffff];
                          if (((&DAT_14c841d90)[uVar36 & 0xffffffff] & 0xf) == 0)
                          goto LAB_1409ed43c;
                          lVar23 = uVar35 + 1 + uVar36;
                          uVar36 = uVar36 - 1;
                        } while (lVar23 != 0x33);
                      }
                      uVar48 = 0x10;
                      if (0x10 < DAT_14c841df8) {
                        uVar48 = (ulonglong)DAT_14c841df8;
                      }
                      uVar48 = -uVar48 & (uVar43 + uVar48) - 1;
                    }
                  }
                  else {
                    uVar48 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar48,0);
                    iVar51 = *(int *)(local_4b0 + 0xa0);
                  }
                }
LAB_1409ed43c:
                iVar57 = (int)(uVar48 >> 2);
                iVar58 = -0x20;
                if ((int)uVar20 <= iVar57) {
                  iVar58 = iVar57 << 5;
                }
              }
              lVar32 = local_4b0;
              *(int *)(local_4b0 + 0xa4) = iVar58;
              FUN_1446efbd8(lVar59,iVar51);
              iVar58 = *(int *)(lVar32 + 0xa0) + 1;
              lVar23 = local_450;
            }
            iVar51 = iVar58 + 0x1f;
            if (-1 < iVar58) {
              iVar51 = iVar58;
            }
            *(int *)(lVar32 + 0xa0) = iVar58;
            if (iVar58 % 0x20 != 0) {
              lVar47 = *(longlong *)(lVar32 + 0x98);
              if (*(longlong *)(lVar32 + 0x98) == 0) {
                lVar47 = lVar59;
              }
              bVar30 = -(char)(iVar58 % 0x20);
              *(uint *)(lVar47 + (longlong)(iVar51 >> 5) * 4) =
                   (uint)(*(int *)(lVar47 + (longlong)(iVar51 >> 5) * 4) << (bVar30 & 0x1f)) >>
                   (bVar30 & 0x1f);
            }
          }
          lVar47 = (longlong)(int)local_498;
          if (*(longlong *)(lVar32 + 0x98) != 0) {
            lVar59 = *(longlong *)(lVar32 + 0x98);
          }
          bVar30 = (byte)iVar18 & 0x1f;
          puVar33 = (uint *)(lVar59 + (longlong)(iVar38 >> 5) * 4);
          *puVar33 = *puVar33 & (-2 << bVar30 | 0xfffffffeU >> 0x20 - bVar30);
        }
        else {
          local_498 = (ulonglong *******)(ulonglong)*(uint *)(local_4b0 + 0xa8);
          lVar47 = (longlong)(int)*(uint *)(local_4b0 + 0xa8);
          iVar18 = *(int *)(*(longlong *)(local_4b0 + 0x78) + 4 + lVar47 * 0x68);
          *(int *)(local_4b0 + 0xa8) = iVar18;
          iVar51 = *(int *)(local_4b0 + 0xac) + -1;
          *(int *)(local_4b0 + 0xac) = iVar51;
          lVar32 = local_4b0;
          if (iVar51 != 0) {
            *(undefined4 *)(*(longlong *)(local_4b0 + 0x78) + (longlong)iVar18 * 0x68) = 0xffffffff;
          }
        }
        iVar18 = (int)local_498;
        puVar31 = (uint *)(lVar32 + 0x88);
        uVar20 = 1;
        puVar33 = *(uint **)(lVar32 + 0x98);
        if (*(uint **)(lVar32 + 0x98) == (uint *)0x0) {
          puVar33 = puVar31;
        }
        iVar51 = iVar18 + 0x1f;
        if (-1 < iVar18) {
          iVar51 = iVar18;
        }
        puVar33[iVar51 >> 5] = puVar33[iVar51 >> 5] | 1 << ((byte)local_498 & 0x1f);
        lVar59 = *(longlong *)(lVar32 + 0x78);
        lVar47 = lVar47 * 0x68;
        pvVar5 = (void *)(lVar59 + lVar47);
        uVar19 = *(undefined4 *)(lVar24 + 0x5c);
        uVar6 = *(undefined4 *)(lVar24 + 0x60);
        uVar7 = *(undefined4 *)(lVar24 + 100);
        puVar2 = (undefined4 *)(lVar59 + lVar47);
        *puVar2 = *puVar1;
        puVar2[1] = uVar19;
        puVar2[2] = uVar6;
        puVar2[3] = uVar7;
        *(undefined8 *)(lVar59 + 0x50 + lVar47) = 0;
        *(undefined8 *)(lVar59 + 0x58 + lVar47) = 0x400000000;
        *(undefined4 *)(lVar59 + 0x60 + lVar47) = 0xffffffff;
        uVar49 = *(int *)(lVar32 + 0x80) - *(int *)(lVar32 + 0xac);
        if (uVar49 == 1) {
LAB_1409ec0d6:
          if (((int)uVar49 < 1) || ((int)uVar20 <= *(int *)(lVar32 + 0xc0))) {
            uVar45 = *(int *)(lVar32 + 0xc0) - 1U & uVar45;
            *(uint *)((longlong)pvVar5 + 100) = uVar45;
            lVar24 = *(longlong *)(lVar32 + 0xb8);
            if (*(longlong *)(lVar32 + 0xb8) == 0) {
              lVar24 = lVar32 + 0xb0;
            }
            *(undefined4 *)((longlong)pvVar5 + 0x60) =
                 *(undefined4 *)
                  (lVar24 + ((longlong)*(int *)(lVar32 + 0xc0) - 1U & (longlong)(int)uVar45) * 4);
            lVar24 = *(longlong *)(lVar32 + 0xb8);
            if (*(longlong *)(lVar32 + 0xb8) == 0) {
              lVar24 = lVar32 + 0xb0;
            }
            *(int *)(lVar24 + ((longlong)*(int *)(lVar32 + 0xc0) - 1U & (longlong)(int)uVar45) * 4)
                 = (int)local_498;
            puVar33 = local_4a0;
          }
          else {
            *(uint *)(lVar32 + 0xc0) = uVar20;
            plVar39 = (longlong *)(lVar32 + 0xb8);
            if (*(longlong *)(lVar32 + 0xb8) != 0) {
              FUN_1446efa72(plVar39,0,0,4);
              uVar20 = *(uint *)(local_4b0 + 0xc0);
              lVar32 = local_4b0;
            }
            puVar33 = local_4a0;
            lVar24 = lVar32 + 0xb0;
            if (uVar20 == 1) {
              if (*plVar39 != 0) {
                FUN_1446efa72(plVar39,0,0,4);
                lVar32 = local_4b0;
              }
LAB_1409ecf30:
              uVar45 = 0;
              do {
                lVar47 = *(longlong *)(lVar32 + 0xb8);
                if (*(longlong *)(lVar32 + 0xb8) == 0) {
                  lVar47 = lVar24;
                }
                *(undefined4 *)
                 (lVar47 + (ulonglong)(*(int *)(lVar32 + 0xc0) + 0x7fffffffU & uVar45) * 4) =
                     0xffffffff;
                uVar45 = uVar45 + 1;
              } while (uVar20 != uVar45);
            }
            else {
              if (uVar20 == 0) goto LAB_1409ece02;
              FUN_1446efa72(plVar39,0,uVar20,4);
              lVar32 = local_4b0;
              if (0 < (int)uVar20) goto LAB_1409ecf30;
            }
            iVar18 = *(int *)(lVar32 + 0xa0);
            if (iVar18 == 0) {
              uVar48 = 0;
              uVar43 = 1;
              iVar51 = 0;
              iVar58 = 0;
            }
            else {
              puVar42 = *(uint **)(lVar32 + 0x98);
              if (*(uint **)(lVar32 + 0x98) == (uint *)0x0) {
                puVar42 = puVar31;
              }
              uVar45 = *puVar42;
              if (uVar45 == 0) {
                iVar51 = iVar18 + 0x1e;
                if (-1 < iVar18 + -1) {
                  iVar51 = iVar18 + -1;
                }
                uVar48 = 0;
                uVar43 = (ulonglong)(uint)(iVar51 >> 5);
                if (iVar51 >> 5 < 1) {
                  uVar43 = uVar48;
                }
                iVar58 = 0;
                do {
                  if (uVar43 == uVar48) goto LAB_1409ece02;
                  iVar58 = iVar58 + 0x20;
                  uVar45 = puVar42[uVar48 + 1];
                  uVar48 = uVar48 + 1;
                } while (uVar45 == 0);
              }
              else {
                uVar48 = 0;
                iVar58 = 0;
              }
              uVar43 = (ulonglong)(-uVar45 & uVar45);
              uVar35 = uVar43 * 2 + 1;
              lVar32 = 0x3f;
              if (uVar35 != 0) {
                for (; uVar35 >> lVar32 == 0; lVar32 = lVar32 + -1) {
                }
              }
              iVar51 = (iVar58 - ((uint)lVar32 ^ 0x3f)) + 0x3e;
              if (iVar18 <= iVar51) {
                iVar51 = iVar18;
              }
            }
            if (iVar51 < iVar18) {
              uVar45 = 0xffffffff;
              do {
                lVar32 = *(longlong *)(local_4b0 + 0x78);
                lVar59 = (longlong)iVar51 * 0x68;
                uVar35 = (longlong)
                         (int)(*(uint *)(lVar32 + 4 + lVar59) ^ *(uint *)(lVar32 + lVar59) ^
                               *(uint *)(lVar32 + 8 + lVar59) ^ *(uint *)(lVar32 + 0xc + lVar59)) &
                         (longlong)*(int *)(local_4b0 + 0xc0) - 1U;
                iVar18 = (int)uVar35;
                *(int *)(lVar32 + 100 + lVar59) = iVar18;
                lVar47 = *(longlong *)(local_4b0 + 0xb8);
                if (*(longlong *)(local_4b0 + 0xb8) == 0) {
                  lVar47 = lVar24;
                }
                *(undefined4 *)(lVar32 + 0x60 + lVar59) =
                     *(undefined4 *)
                      (lVar47 + ((longlong)*(int *)(local_4b0 + 0xc0) - 1U & uVar35) * 4);
                lVar32 = *(longlong *)(local_4b0 + 0xb8);
                if (*(longlong *)(local_4b0 + 0xb8) == 0) {
                  lVar32 = lVar24;
                }
                *(int *)(lVar32 + ((longlong)iVar18 & (longlong)*(int *)(local_4b0 + 0xc0) - 1U) * 4
                        ) = iVar51;
                uVar45 = ~(uint)uVar43 & uVar45;
                puVar42 = *(uint **)(local_4b0 + 0x98);
                if (*(uint **)(local_4b0 + 0x98) == (uint *)0x0) {
                  puVar42 = puVar31;
                }
                iVar18 = *(int *)(local_4b0 + 0xa0);
                iVar51 = (int)uVar48;
                lVar32 = (longlong)iVar51;
                uVar20 = puVar42[lVar32] & uVar45;
                puVar33 = local_4a0;
                if (uVar20 == 0) {
                  iVar38 = iVar18 + 0x1e;
                  if (-1 < iVar18 + -1) {
                    iVar38 = iVar18 + -1;
                  }
                  iVar38 = iVar38 >> 5;
                  iVar57 = iVar38;
                  if (iVar38 < iVar51) {
                    iVar57 = iVar51;
                  }
                  if (iVar38 <= iVar51) break;
                  lVar47 = 0;
                  while( true ) {
                    iVar58 = iVar58 + 0x20;
                    uVar20 = puVar42[lVar32 + lVar47 + 1];
                    if (uVar20 != 0) break;
                    lVar47 = lVar47 + 1;
                    if (iVar57 - lVar32 == lVar47) goto LAB_1409ece02;
                  }
                  uVar48 = (ulonglong)(iVar51 + (int)lVar47 + 1);
                  uVar45 = 0xffffffff;
                }
                uVar43 = (ulonglong)(-uVar20 & uVar20);
                uVar35 = uVar43 * 2 + 1;
                lVar32 = 0x3f;
                if (uVar35 != 0) {
                  for (; uVar35 >> lVar32 == 0; lVar32 = lVar32 + -1) {
                  }
                }
                iVar51 = (iVar58 - ((uint)lVar32 ^ 0x3f)) + 0x3e;
              } while (iVar51 < iVar18);
            }
          }
        }
        else {
          iVar18 = FUN_1400a4ce0(local_470,uVar45,pvVar5);
          if (iVar18 == -1) {
            lVar32 = local_4b0;
            if (3 < uVar49) {
              uVar48 = (ulonglong)(uVar49 & 0xfffffffe) + 0xf;
              lVar24 = 0x3f;
              if (uVar48 != 0) {
                for (; uVar48 >> lVar24 == 0; lVar24 = lVar24 + -1) {
                }
              }
              uVar20 = 1 << ((byte)lVar24 & 0x1f);
            }
            goto LAB_1409ec0d6;
          }
          lVar23 = *local_470;
          if (*(longlong *)(lVar23 + 0x50 + (longlong)iVar18 * 0x68) != 0) {
            FUN_1400020a8();
          }
          memmove((void *)(lVar23 + (longlong)iVar18 * 0x68),pvVar5,0x60);
          FUN_1432dc8ea(local_470,local_498);
          lVar23 = local_450;
          puVar33 = local_4a0;
        }
LAB_1409ece02:
        lVar32 = (longlong)(int)local_498 * 0x68 + *local_470;
        cVar17 = local_4a1;
      }
      else {
        if (*plVar39 + (longlong)iVar18 * 0x68 == 0) goto LAB_1409ebf9a;
        lVar32 = *plVar39 + (longlong)iVar18 * 0x68;
      }
      FUN_140f6d5fe(lVar32 + 0x10,puVar33);
      iVar18 = FUN_1447bdbdc(plVar29,puVar33[1] ^ *puVar33 ^ puVar33[2] ^ puVar33[3],puVar33);
      if (iVar18 == -1) {
        lVar32 = 0;
      }
      else {
        lVar32 = (longlong)iVar18 * 0x38 + *plVar29;
      }
      puVar53 = (undefined1 *)(lVar32 + 0x10);
      if (lVar32 == 0) {
        puVar53 = (undefined1 *)0x0;
      }
      if ((longlong)iStack_3e8 != 0) {
        local_498 = local_3f0;
        local_458 = local_3f0 + iStack_3e8;
        local_440 = lVar23 + 0x68;
        local_4a1 = cVar17;
        local_438 = plVar29;
        do {
          if ((cVar17 == '\0') ||
             (((ppppppuVar55 = *local_498, (ulonglong)ppppppuVar55 >> 0x20 != 0 &&
               (uVar45 = (uint)ppppppuVar55, -1 < (int)uVar45)) &&
              (((int)uVar45 < DAT_14c9647dc &&
               ((((puVar52 = (undefined8 *)
                             ((ulonglong)((uVar45 & 0xffff) * 0x18) +
                             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar45 >> 0xd & 0x3fff8))),
                  puVar52 != (undefined8 *)0x0 &&
                  (*(int *)(puVar52 + 2) == (int)((ulonglong)ppppppuVar55 >> 0x20))) &&
                 ((*(uint *)(puVar52 + 1) & 0x10200000) == 0)) &&
                (local_490 = (ulonglong *******)*puVar52, local_490 != (ulonglong *******)0x0)))))))
             ) {
            local_340 = (ulonglong *******)0x0;
            local_338 = 0x100000000;
            if (((*(int *)(lVar23 + 0x6c) == 0 && *(int *)(lVar23 + 0x68) == 0) &&
                *(int *)(lVar23 + 0x70) == 0) && *(int *)(lVar23 + 0x74) == 0) {
              local_3c8 = local_490;
              uStack_3c0 = 0;
              local_3b8 = local_3b8 & 0xffffff00;
              if (local_448 == (longlong *)0x0) {
                local_3d8 = *local_478;
                local_3d0 = local_478[1];
                if (local_3d0 != 0) {
                  LOCK();
                  *(int *)(local_3d0 + 8) = *(int *)(local_3d0 + 8) + 1;
                  UNLOCK();
                }
                local_4c8 = &local_348;
                (**(code **)(*local_460 + 0x2c0))(local_460,puVar33,&local_3c8,&local_3d8);
              }
              else {
                local_4c8 = local_460;
                local_4c0 = &local_348;
                (**(code **)(*local_448 + 0x48))(local_448,&local_3c8,puVar33,*local_468);
              }
            }
            else {
              local_3a8 = *local_478;
              local_3a0 = local_478[1];
              if (local_3a0 != 0) {
                LOCK();
                *(int *)(local_3a0 + 8) = *(int *)(local_3a0 + 8) + 1;
                UNLOCK();
              }
              FUN_1410cbcd8(local_440,&local_3c8,*local_468,&local_3a8);
              pppppppuVar34 = local_3c8;
              lVar23 = (longlong)(int)uStack_3c0;
              puVar33 = local_4a0;
              if (lVar23 != 0) {
                lVar32 = 0;
                do {
                  uVar43 = local_338;
                  uVar48 = *(ulonglong *)((longlong)pppppppuVar34 + lVar32);
                  if (((uVar48 >> 0x20 != 0) && (uVar45 = (uint)uVar48, -1 < (int)uVar45)) &&
                     ((((int)uVar45 < DAT_14c9647dc &&
                       ((puVar40 = (ulonglong *)
                                   ((ulonglong)((uVar45 & 0xffff) * 0x18) +
                                   *(longlong *)
                                    (DAT_14c9647c8 + (ulonglong)(uVar45 >> 0xd & 0x3fff8))),
                        puVar40 != (ulonglong *)0x0 && ((int)puVar40[2] == (int)(uVar48 >> 0x20)))))
                      && ((puVar40[1] & 0x10200000) == 0)))) {
                    if ((puVar40[1] & 0x10200000) == 0) {
                      ppppppuVar55 = (ulonglong ******)*puVar40;
                    }
                    else {
                      ppppppuVar55 = (ulonglong ******)0x0;
                    }
                    lVar24 = (longlong)(int)local_338;
                    uVar45 = (int)local_338 + 1;
                    local_338 = CONCAT44(local_338._4_4_,uVar45);
                    if (local_338._4_4_ < uVar45) {
                      FUN_14571f162(&local_348,uVar43 & 0xffffffff);
                    }
                    pppppppuVar28 = local_340;
                    if (local_340 == (ulonglong *******)0x0) {
                      pppppppuVar28 = (ulonglong *******)&local_348;
                    }
                    pppppppuVar28[lVar24] = ppppppuVar55;
                  }
                  lVar32 = lVar32 + 8;
                  puVar33 = local_4a0;
                } while (lVar23 * 8 != lVar32);
              }
            }
            iVar18 = FUN_1447bdbdc(plVar29,puVar33[1] ^ *puVar33 ^ puVar33[2] ^ puVar33[3],puVar33);
            if (iVar18 == -1) {
              lVar23 = 0;
            }
            else {
              lVar23 = (longlong)iVar18 * 0x38 + *plVar29;
            }
            puVar53 = (undefined1 *)(lVar23 + 0x10);
            if (lVar23 == 0) {
              puVar53 = (undefined1 *)0x0;
            }
            pppppppuVar34 = local_340;
            if (local_340 == (ulonglong *******)0x0) {
              pppppppuVar34 = (ulonglong *******)&local_348;
            }
            lVar23 = (longlong)(int)local_338;
            if (lVar23 != 0) {
              puVar27 = puVar53 + 8;
              lVar32 = 0;
              do {
                if (*(longlong *)((longlong)pppppppuVar34 + lVar32) == 0) {
                  uVar48 = 0;
                  uVar45 = 0;
                }
                else {
                  uVar45 = *(uint *)(*(longlong *)((longlong)pppppppuVar34 + lVar32) + 0xc);
                  uVar48 = (ulonglong)uVar45;
                  if ((int)uVar45 < DAT_14c9647dc) {
                    lVar24 = (ulonglong)((uVar45 & 0xffff) * 0x18) +
                             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar45 >> 0x10) * 8);
                  }
                  else {
                    lVar24 = 0;
                  }
                  uVar45 = *(uint *)(lVar24 + 0x10);
                  if (*(uint *)(lVar24 + 0x10) == 0) {
                    LOCK();
                    iVar18 = DAT_14c964868 + 1;
                    UNLOCK();
                    uVar45 = DAT_14c964868 + 1;
                    bVar63 = DAT_14c964868 < 1000;
                    DAT_14c964868 = iVar18;
                    if (bVar63) {
                      local_488 = puVar53;
                      FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                    L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                    ,uVar45);
                      puVar53 = local_488;
                    }
                    LOCK();
                    uVar20 = *(uint *)(lVar24 + 0x10);
                    bVar63 = uVar20 == 0;
                    if (bVar63) {
                      *(uint *)(lVar24 + 0x10) = uVar45;
                      uVar20 = 0;
                    }
                    UNLOCK();
                    if (!bVar63) {
                      uVar45 = uVar20;
                    }
                  }
                }
                iVar18 = *(int *)(puVar53 + 0x18);
                uVar20 = iVar18 + 1;
                *(uint *)(puVar53 + 0x18) = uVar20;
                if (*(uint *)(puVar53 + 0x1c) < uVar20) {
                  FUN_1458c464e(puVar27);
                }
                puVar26 = *(undefined1 **)(puVar53 + 0x10);
                if (*(undefined1 **)(puVar53 + 0x10) == (undefined1 *)0x0) {
                  puVar26 = puVar27;
                }
                *(ulonglong *)(puVar26 + (longlong)iVar18 * 8) = uVar48 | (ulonglong)uVar45 << 0x20;
                lVar32 = lVar32 + 8;
                plVar29 = local_438;
                cVar17 = local_4a1;
              } while (lVar23 * 8 != lVar32);
            }
            lVar23 = local_450;
            puVar33 = local_4a0;
            if (local_340 != (ulonglong *******)0x0) {
              FUN_1400020a8();
              lVar23 = local_450;
              puVar33 = local_4a0;
            }
          }
          else {
            local_490 = (ulonglong *******)0x0;
          }
          local_498 = local_498 + 1;
        } while (local_498 != local_458);
      }
    }
  }
  else {
    local_378 = *local_478;
    local_370 = local_478[1];
    if (local_370 != 0) {
      LOCK();
      *(int *)(local_370 + 8) = *(int *)(local_370 + 8) + 1;
      UNLOCK();
    }
    FUN_1475555f8(uVar25,&local_348,lVar23,&local_378);
    pppppppuVar34 = local_348;
    puVar33 = local_4a0;
    lVar23 = (longlong)(int)(uint)local_340;
    iVar18 = *(int *)(local_488 + 0x18);
    *(uint *)(local_488 + 0x18) = iVar18 + (uint)local_340;
    if ((uint)(*(int *)(local_488 + 0x1c) - iVar18) < (uint)local_340) {
      FUN_1458c464e(lVar32,iVar18);
    }
    else {
      puVar53 = local_488;
      if ((uint)local_340 == 0) goto LAB_1409ec307;
    }
    if (*(longlong *)(local_488 + 0x10) != 0) {
      lVar32 = *(longlong *)(local_488 + 0x10);
    }
    memcpy((void *)(lVar32 + (longlong)iVar18 * 8),pppppppuVar34,lVar23 << 3);
    puVar53 = local_488;
  }
LAB_1409ec307:
  pppppppuVar34 = (ulonglong *******)(puVar53 + 8);
  iVar18 = *(int *)(puVar53 + 0x18);
  pppppppuVar28 = (ulonglong *******)(longlong)iVar18;
  if (1 < (longlong)pppppppuVar28) {
    pppppppuVar50 = *(ulonglong ********)(puVar53 + 0x10);
    if (*(ulonglong ********)(puVar53 + 0x10) == (ulonglong *******)0x0) {
      pppppppuVar50 = pppppppuVar34;
    }
    local_490 = pppppppuVar34;
    local_488 = puVar53;
    memset(&local_338,0,0x2f0);
    local_340 = pppppppuVar50 + (longlong)((longlong)pppppppuVar28 + -1);
    local_458 = pppppppuVar28;
    local_348 = pppppppuVar50;
    fVar64 = logf((float)iVar18);
    pppppppuVar34 = local_490;
    local_338 = CONCAT44(local_338._4_4_,(int)(longlong)(fVar64 + fVar64));
    pppppppuVar28 = (ulonglong *******)&local_348;
    do {
      ppppppuVar54 = *pppppppuVar28;
      ppppppuVar46 = pppppppuVar28[1];
      iVar18 = *(int *)(pppppppuVar28 + 2);
      iVar51 = (int)((ulonglong)((longlong)ppppppuVar46 - (longlong)ppppppuVar54) >> 3);
      uVar48 = (ulonglong)(iVar51 + 1);
      ppppppuVar55 = ppppppuVar46;
      ppppppuVar61 = ppppppuVar54;
      local_498 = pppppppuVar28;
      if (iVar18 != 0) {
LAB_1409ec57b:
        if (8 < (int)(uint)uVar48) {
          uVar45 = (uint)uVar48 >> 1;
          pppppuVar4 = ppppppuVar54[uVar45];
          ppppppuVar54[uVar45] = *ppppppuVar54;
          *ppppppuVar54 = pppppuVar4;
          ppppppuVar60 = ppppppuVar55 + 1;
          ppppppuVar41 = ppppppuVar54;
          do {
            ppppppuVar16 = ppppppuVar41 + 1;
            ppppppuVar56 = ppppppuVar41 + 1;
            do {
              ppppppuVar41 = ppppppuVar56;
              ppppppuVar62 = ppppppuVar16;
              if (ppppppuVar55 < ppppppuVar41) break;
              if ((*(uint *)((longlong)ppppppuVar54 + 4) == 0) ||
                 (uVar45 = *(uint *)ppppppuVar54, (int)uVar45 < 0)) {
LAB_1409ec65b:
                uVar48 = 0;
              }
              else {
                uVar48 = 0;
                if ((int)uVar45 < DAT_14c9647dc) {
                  puVar40 = (ulonglong *)
                            ((ulonglong)((uVar45 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar45 >> 0x10) * 8));
                  if (((puVar40 == (ulonglong *)0x0) ||
                      ((uint)puVar40[2] != *(uint *)((longlong)ppppppuVar54 + 4))) ||
                     ((puVar40[1] & 0x10200000) != 0)) goto LAB_1409ec65b;
                  uVar48 = *puVar40;
                }
              }
              if ((*(uint *)((longlong)ppppppuVar41 + 4) == 0) ||
                 (uVar45 = *(uint *)ppppppuVar41, (int)uVar45 < 0)) {
LAB_1409ec65f:
                uVar43 = 0;
              }
              else {
                uVar43 = 0;
                if ((int)uVar45 < DAT_14c9647dc) {
                  puVar40 = (ulonglong *)
                            ((ulonglong)((uVar45 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar45 >> 0x10) * 8));
                  if (((puVar40 == (ulonglong *)0x0) ||
                      ((uint)puVar40[2] != *(uint *)((longlong)ppppppuVar41 + 4))) ||
                     ((puVar40[1] & 0x10200000) != 0)) goto LAB_1409ec65f;
                  uVar43 = *puVar40;
                }
              }
              ppppppuVar16 = ppppppuVar62 + 1;
              ppppppuVar56 = ppppppuVar41 + 1;
            } while (uVar43 <= uVar48);
            ppppppuVar16 = ppppppuVar60 + -2;
            do {
              ppppppuVar56 = ppppppuVar60;
              ppppppuVar44 = ppppppuVar16;
              ppppppuVar60 = ppppppuVar56 + -1;
              if (ppppppuVar60 <= ppppppuVar54) break;
              if ((*(uint *)((longlong)ppppppuVar56 + -4) == 0) ||
                 (uVar45 = *(uint *)ppppppuVar60, (int)uVar45 < 0)) {
LAB_1409ec716:
                uVar48 = 0;
              }
              else {
                uVar48 = 0;
                if ((int)uVar45 < DAT_14c9647dc) {
                  puVar40 = (ulonglong *)
                            ((ulonglong)((uVar45 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar45 >> 0x10) * 8));
                  if (((puVar40 == (ulonglong *)0x0) ||
                      ((uint)puVar40[2] != *(uint *)((longlong)ppppppuVar56 + -4))) ||
                     ((puVar40[1] & 0x10200000) != 0)) goto LAB_1409ec716;
                  uVar48 = *puVar40;
                }
              }
              if ((*(uint *)((longlong)ppppppuVar54 + 4) == 0) ||
                 (uVar45 = *(uint *)ppppppuVar54, (int)uVar45 < 0)) {
LAB_1409ec71a:
                uVar43 = 0;
              }
              else {
                uVar43 = 0;
                if ((int)uVar45 < DAT_14c9647dc) {
                  puVar40 = (ulonglong *)
                            ((ulonglong)((uVar45 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar45 >> 0x10) * 8));
                  if (((puVar40 == (ulonglong *)0x0) ||
                      ((uint)puVar40[2] != *(uint *)((longlong)ppppppuVar54 + 4))) ||
                     ((puVar40[1] & 0x10200000) != 0)) goto LAB_1409ec71a;
                  uVar43 = *puVar40;
                }
              }
              ppppppuVar16 = ppppppuVar44 + -1;
            } while (uVar43 <= uVar48);
            if (ppppppuVar60 < ppppppuVar41) goto LAB_1409ec734;
            pppppuVar4 = *ppppppuVar41;
            *ppppppuVar41 = *ppppppuVar60;
            *ppppppuVar60 = pppppuVar4;
          } while( true );
        }
        for (; ppppppuVar46 = ppppppuVar54, ppppppuVar61 = ppppppuVar54, ppppppuVar54 < ppppppuVar55
            ; ppppppuVar55 = ppppppuVar55 + -1) {
          while (ppppppuVar60 = ppppppuVar46, ppppppuVar46 = ppppppuVar61 + 1,
                ppppppuVar46 <= ppppppuVar55) {
            if ((*(uint *)((longlong)ppppppuVar60 + 4) == 0) ||
               (uVar45 = *(uint *)ppppppuVar60, (int)uVar45 < 0)) {
LAB_1409eccf2:
              uVar48 = 0;
            }
            else {
              uVar48 = 0;
              if ((int)uVar45 < DAT_14c9647dc) {
                puVar40 = (ulonglong *)
                          ((ulonglong)((uVar45 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar45 >> 0x10) * 8));
                if (((puVar40 == (ulonglong *)0x0) ||
                    ((uint)puVar40[2] != *(uint *)((longlong)ppppppuVar60 + 4))) ||
                   ((puVar40[1] & 0x10200000) != 0)) goto LAB_1409eccf2;
                uVar48 = *puVar40;
              }
            }
            if ((*(uint *)((longlong)ppppppuVar61 + 0xc) == 0) ||
               (uVar45 = *(uint *)ppppppuVar46, (int)uVar45 < 0)) {
LAB_1409eccf6:
              uVar43 = 0;
            }
            else {
              uVar43 = 0;
              if ((int)uVar45 < DAT_14c9647dc) {
                puVar40 = (ulonglong *)
                          ((ulonglong)((uVar45 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar45 >> 0x10) * 8));
                if (((puVar40 == (ulonglong *)0x0) ||
                    ((uint)puVar40[2] != *(uint *)((longlong)ppppppuVar61 + 0xc))) ||
                   ((puVar40[1] & 0x10200000) != 0)) goto LAB_1409eccf6;
                uVar43 = *puVar40;
              }
            }
            ppppppuVar61 = ppppppuVar46;
            if (uVar43 <= uVar48) {
              ppppppuVar46 = ppppppuVar60;
            }
          }
          pppppuVar4 = *ppppppuVar60;
          *ppppppuVar60 = *ppppppuVar55;
          *ppppppuVar55 = pppppuVar4;
        }
        goto LAB_1409eccfa;
      }
LAB_1409ec7db:
      iVar18 = (int)uVar48;
      if (iVar18 != 0) {
        iVar51 = (iVar51 - (iVar51 + -1 >> 0x1f)) + -1 >> 1;
        iVar58 = iVar51;
joined_r0x0001409ec800:
        do {
          iVar38 = iVar51 * 2 + 1;
          if (iVar38 < iVar18) {
            iVar57 = iVar51 * 2 + 2;
            if (iVar57 < iVar18) {
              uVar45 = *(uint *)((longlong)ppppppuVar54 + ((longlong)iVar57 * 2 + 1) * 4);
              if ((uVar45 == 0) || (uVar20 = *(uint *)(ppppppuVar54 + iVar57), (int)uVar20 < 0)) {
LAB_1409ec9c5:
                uVar43 = 0;
              }
              else {
                uVar43 = 0;
                if ((int)uVar20 < DAT_14c9647dc) {
                  puVar40 = (ulonglong *)
                            ((ulonglong)((uVar20 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar20 >> 0x10) * 8));
                  if (((puVar40 == (ulonglong *)0x0) || ((uint)puVar40[2] != uVar45)) ||
                     ((puVar40[1] & 0x10200000) != 0)) goto LAB_1409ec9c5;
                  uVar43 = *puVar40;
                }
              }
              uVar45 = *(uint *)((longlong)ppppppuVar54 + ((longlong)iVar38 * 2 + 1) * 4);
              if ((uVar45 == 0) || (uVar20 = *(uint *)(ppppppuVar54 + iVar38), (int)uVar20 < 0)) {
LAB_1409ec9cc:
                uVar35 = 0;
              }
              else {
                uVar35 = 0;
                if ((int)uVar20 < DAT_14c9647dc) {
                  puVar40 = (ulonglong *)
                            ((ulonglong)((uVar20 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar20 >> 0x10) * 8));
                  if (((puVar40 == (ulonglong *)0x0) || ((uint)puVar40[2] != uVar45)) ||
                     ((puVar40[1] & 0x10200000) != 0)) goto LAB_1409ec9cc;
                  uVar35 = *puVar40;
                }
              }
              if (uVar35 <= uVar43) {
                iVar38 = iVar57;
              }
            }
            lVar23 = (longlong)iVar51;
            uVar45 = *(uint *)((longlong)ppppppuVar54 + (lVar23 * 2 + 1) * 4);
            if ((uVar45 == 0) || (uVar20 = *(uint *)(ppppppuVar54 + lVar23), (int)uVar20 < 0)) {
LAB_1409ec9bc:
              uVar43 = 0;
            }
            else {
              uVar43 = 0;
              if ((int)uVar20 < DAT_14c9647dc) {
                puVar40 = (ulonglong *)
                          ((ulonglong)((uVar20 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar20 >> 0x10) * 8));
                if (((puVar40 == (ulonglong *)0x0) || ((uint)puVar40[2] != uVar45)) ||
                   ((puVar40[1] & 0x10200000) != 0)) goto LAB_1409ec9bc;
                uVar43 = *puVar40;
              }
            }
            lVar32 = (longlong)iVar38;
            uVar45 = *(uint *)((longlong)ppppppuVar54 + (lVar32 * 2 + 1) * 4);
            if ((uVar45 == 0) || (uVar20 = *(uint *)(ppppppuVar54 + lVar32), (int)uVar20 < 0)) {
LAB_1409ec9c1:
              uVar35 = 0;
            }
            else {
              uVar35 = 0;
              if ((int)uVar20 < DAT_14c9647dc) {
                puVar40 = (ulonglong *)
                          ((ulonglong)((uVar20 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar20 >> 0x10) * 8));
                if (((puVar40 == (ulonglong *)0x0) || ((uint)puVar40[2] != uVar45)) ||
                   ((puVar40[1] & 0x10200000) != 0)) goto LAB_1409ec9c1;
                uVar35 = *puVar40;
              }
            }
            if (uVar43 < uVar35) {
              pppppuVar4 = ppppppuVar54[lVar23];
              ppppppuVar54[lVar23] = ppppppuVar54[lVar32];
              ppppppuVar54[lVar32] = pppppuVar4;
              iVar51 = iVar38;
              goto joined_r0x0001409ec800;
            }
          }
          bVar63 = iVar58 != 0;
          iVar51 = iVar58 + -1;
          iVar58 = iVar51;
        } while (bVar63);
        if (1 < iVar18) {
          pppppuVar4 = *ppppppuVar54;
          *ppppppuVar54 = ppppppuVar54[uVar48 - 1];
          ppppppuVar54[uVar48 - 1] = pppppuVar4;
          if (iVar18 != 2) {
            do {
              uVar43 = uVar48 - 1;
              iVar18 = 0;
              iVar58 = 1;
              iVar51 = 0;
              do {
                lVar23 = (longlong)(iVar18 + 2);
                iVar38 = iVar58;
                if (lVar23 < (longlong)uVar43) {
                  uVar45 = *(uint *)((longlong)ppppppuVar54 + (lVar23 * 2 + 1) * 4);
                  if ((uVar45 == 0) || (uVar20 = *(uint *)(ppppppuVar54 + lVar23), (int)uVar20 < 0))
                  {
LAB_1409ecbd6:
                    uVar35 = 0;
                  }
                  else {
                    uVar35 = 0;
                    if ((int)uVar20 < DAT_14c9647dc) {
                      puVar40 = (ulonglong *)
                                ((ulonglong)((uVar20 & 0xffff) * 0x18) +
                                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar20 >> 0x10) * 8));
                      if (((puVar40 == (ulonglong *)0x0) || ((uint)puVar40[2] != uVar45)) ||
                         ((puVar40[1] & 0x10200000) != 0)) goto LAB_1409ecbd6;
                      uVar35 = *puVar40;
                    }
                  }
                  uVar45 = *(uint *)((longlong)ppppppuVar54 + ((longlong)iVar58 * 2 + 1) * 4);
                  if ((uVar45 == 0) || (uVar20 = *(uint *)(ppppppuVar54 + iVar58), (int)uVar20 < 0))
                  {
LAB_1409ecbdd:
                    uVar36 = 0;
                  }
                  else {
                    uVar36 = 0;
                    if ((int)uVar20 < DAT_14c9647dc) {
                      puVar40 = (ulonglong *)
                                ((ulonglong)((uVar20 & 0xffff) * 0x18) +
                                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar20 >> 0x10) * 8));
                      if (((puVar40 == (ulonglong *)0x0) || ((uint)puVar40[2] != uVar45)) ||
                         ((puVar40[1] & 0x10200000) != 0)) goto LAB_1409ecbdd;
                      uVar36 = *puVar40;
                    }
                  }
                  if (uVar36 <= uVar35) {
                    iVar38 = iVar18 + 2;
                  }
                }
                lVar23 = (longlong)iVar51;
                uVar45 = *(uint *)((longlong)ppppppuVar54 + (lVar23 * 2 + 1) * 4);
                if ((uVar45 == 0) || (uVar20 = *(uint *)(ppppppuVar54 + lVar23), (int)uVar20 < 0)) {
LAB_1409ecbca:
                  uVar35 = 0;
                }
                else {
                  uVar35 = 0;
                  if ((int)uVar20 < DAT_14c9647dc) {
                    puVar40 = (ulonglong *)
                              ((ulonglong)((uVar20 & 0xffff) * 0x18) +
                              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar20 >> 0x10) * 8));
                    if (((puVar40 == (ulonglong *)0x0) || ((uint)puVar40[2] != uVar45)) ||
                       ((puVar40[1] & 0x10200000) != 0)) goto LAB_1409ecbca;
                    uVar35 = *puVar40;
                  }
                }
                lVar32 = (longlong)iVar38;
                uVar45 = *(uint *)((longlong)ppppppuVar54 + (lVar32 * 2 + 1) * 4);
                if ((uVar45 == 0) || (uVar20 = *(uint *)(ppppppuVar54 + lVar32), (int)uVar20 < 0)) {
LAB_1409ecbd2:
                  uVar36 = 0;
                }
                else {
                  uVar36 = 0;
                  if ((int)uVar20 < DAT_14c9647dc) {
                    puVar40 = (ulonglong *)
                              ((ulonglong)((uVar20 & 0xffff) * 0x18) +
                              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar20 >> 0x10) * 8));
                    if (((puVar40 == (ulonglong *)0x0) || ((uint)puVar40[2] != uVar45)) ||
                       ((puVar40[1] & 0x10200000) != 0)) goto LAB_1409ecbd2;
                    uVar36 = *puVar40;
                  }
                }
                if (uVar36 <= uVar35) break;
                pppppuVar4 = ppppppuVar54[lVar23];
                ppppppuVar54[lVar23] = ppppppuVar54[lVar32];
                ppppppuVar54[lVar32] = pppppuVar4;
                iVar18 = iVar38 * 2;
                iVar58 = iVar38 * 2 + 1;
                iVar51 = iVar38;
              } while ((longlong)iVar58 < (longlong)uVar43);
              pppppuVar4 = *ppppppuVar54;
              *ppppppuVar54 = ppppppuVar54[uVar48 - 2];
              ppppppuVar54[uVar48 - 2] = pppppuVar4;
              uVar48 = uVar43;
            } while (2 < uVar43);
          }
        }
      }
LAB_1409eccfa:
      pppppppuVar28 = local_498 + -3;
    } while (&local_348 <= pppppppuVar28);
    iVar51 = FUN_14633df74(local_490);
    puVar33 = local_4a0;
    iVar18 = (int)local_458;
    puVar53 = local_488;
    if (iVar51 < iVar18) {
      lVar23 = (**(code **)(*local_460 + 0x2e8))();
      iVar18 = FUN_140b2f12c(lVar23,puVar33);
      if ((iVar18 == -1) ||
         (lVar23 = (longlong)iVar18 * 0x30 + *(longlong *)(lVar23 + 0x80), lVar23 == 0)) {
        FUN_140056680(&local_348,L"<invalid binding>");
      }
      else {
        local_348 = (ulonglong *******)0x0;
        uVar45 = *(uint *)(lVar23 + 0x18);
        pvVar5 = *(void **)(lVar23 + 0x10);
        local_340 = (ulonglong *******)CONCAT44(local_340._4_4_,uVar45);
        if ((longlong)(int)uVar45 == 0) {
          local_340 = (ulonglong *******)(ulonglong)uVar45;
        }
        else {
          FUN_1446dd670(&local_348,uVar45,0);
          memcpy(local_348,pvVar5,(longlong)(int)uVar45 * 2);
        }
      }
      FUN_145942aee(local_490,iVar51);
      if (local_348 != (ulonglong *******)0x0) {
        FUN_1400020a8();
      }
      iVar18 = (int)local_458;
      pppppppuVar34 = local_490;
      puVar53 = local_488;
    }
  }
  lVar23 = local_4b0;
  if (0 < iVar18) {
    *puVar53 = 1;
    plVar29 = (longlong *)FUN_140874c26(*local_478 + 0x38);
    if (plVar29 != (longlong *)0x0) {
      local_430 = pppppppuVar34;
      if (*(ulonglong ********)(puVar53 + 0x10) != (ulonglong *******)0x0) {
        local_430 = *(ulonglong ********)(puVar53 + 0x10);
      }
      local_428 = *(undefined4 *)(puVar53 + 0x18);
      (**(code **)(*plVar29 + 8))(plVar29,puVar33,local_468);
    }
    iVar18 = FUN_1400a4ce0(local_470,puVar33[1] ^ *puVar33 ^ puVar33[2] ^ puVar33[3],puVar33);
    lVar32 = local_4b0;
    if (iVar18 != -1) {
      lVar23 = (longlong)iVar18 * 0x68 + *local_470;
      if (lVar23 + 0x10 != 0 && lVar23 != 0) {
        lVar24 = lVar23 + 0x10;
        if (*(longlong *)(lVar23 + 0x50) != 0) {
          lVar24 = *(longlong *)(lVar23 + 0x50);
        }
        if ((longlong)*(int *)(lVar23 + 0x58) != 0) {
          lVar23 = (longlong)*(int *)(lVar23 + 0x58) << 4;
          do {
            FUN_14179e6c4(lVar32,lVar24);
            lVar24 = lVar24 + 0x10;
            lVar23 = lVar23 + -0x10;
          } while (lVar23 != 0);
        }
      }
    }
    lVar23 = local_4b0;
    if (*(int *)(lVar32 + 0x80) != *(int *)(lVar32 + 0xac)) {
      lVar32 = local_4b0 + 0xb0;
      if (*(longlong *)(local_4b0 + 0xb8) != 0) {
        lVar32 = *(longlong *)(local_4b0 + 0xb8);
      }
      iVar18 = *(int *)(lVar32 + ((longlong)
                                  (int)(local_4a0[2] ^ local_4a0[3] ^ local_4a0[1] ^ *local_4a0) &
                                 (longlong)*(int *)(local_4b0 + 0xc0) - 1U) * 4);
      if (iVar18 != -1) {
        lVar24 = *local_470;
        do {
          lVar59 = (longlong)iVar18 * 0x68;
          lVar47 = lVar24 + lVar59;
          if ((((*(uint *)(lVar24 + lVar59) == *local_4a0) &&
               (*(uint *)(lVar24 + 4 + lVar59) == local_4a0[1])) &&
              (*(uint *)(lVar24 + 8 + lVar59) == local_4a0[2])) &&
             (*(uint *)(lVar24 + 0xc + lVar59) == local_4a0[3])) {
            iVar51 = *(int *)(lVar32 + (longlong)*(int *)(lVar47 + 100) * 4);
            if (iVar51 == iVar18) {
              piVar37 = (int *)(lVar32 + (longlong)*(int *)(lVar47 + 100) * 4);
            }
            else {
              do {
                piVar37 = (int *)(lVar24 + (longlong)iVar51 * 0x68 + 0x60);
                iVar51 = *piVar37;
              } while (iVar51 != iVar18);
            }
            *piVar37 = *(int *)(lVar47 + 0x60);
            if (*(longlong *)(*local_470 + 0x50 + lVar59) != 0) {
              FUN_1400020a8();
            }
            FUN_1432dc8ea(local_470,iVar18);
            lVar23 = local_4b0;
            break;
          }
          iVar18 = *(int *)(lVar47 + 0x60);
        } while (iVar18 != -1);
      }
    }
  }
LAB_1409ec486:
  *(undefined1 *)(lVar23 + 0x16c) = local_479;
  plVar29 = (longlong *)local_478[1];
  if (plVar29 != (longlong *)0x0) {
    LOCK();
    plVar39 = plVar29 + 1;
    *(int *)plVar39 = (int)*plVar39 + -1;
    UNLOCK();
    if ((int)*plVar39 == 0) {
      (**(code **)*plVar29)(plVar29);
      LOCK();
      piVar37 = (int *)((longlong)plVar29 + 0xc);
      *piVar37 = *piVar37 + -1;
      UNLOCK();
      if (*piVar37 == 0) {
        (**(code **)(*plVar29 + 0x10))(plVar29);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_4e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_1409ec734:
  pppppuVar4 = *ppppppuVar54;
  *ppppppuVar54 = *ppppppuVar60;
  *ppppppuVar60 = pppppuVar4;
  iVar18 = iVar18 + -1;
  ppppppuVar56 = ppppppuVar56 + -2;
  if ((longlong)ppppppuVar44 - (longlong)ppppppuVar61 <
      (longlong)ppppppuVar46 - (longlong)ppppppuVar62) {
    if (ppppppuVar41 < ppppppuVar55) {
      *local_498 = ppppppuVar41;
      local_498[1] = ppppppuVar55;
      *(int *)(local_498 + 2) = iVar18;
      local_498 = local_498 + 3;
    }
    ppppppuVar46 = ppppppuVar44;
    ppppppuVar62 = ppppppuVar54;
    if (ppppppuVar60 <= ppppppuVar54 + 1) goto LAB_1409eccfa;
  }
  else {
    if (ppppppuVar54 + 1 < ppppppuVar60) {
      *local_498 = ppppppuVar54;
      local_498[1] = ppppppuVar56;
      *(int *)(local_498 + 2) = iVar18;
      local_498 = local_498 + 3;
    }
    ppppppuVar46 = ppppppuVar55;
    ppppppuVar54 = ppppppuVar41;
    ppppppuVar56 = ppppppuVar55;
    if (ppppppuVar55 <= ppppppuVar41) goto LAB_1409eccfa;
  }
  iVar51 = (int)((ulonglong)((longlong)ppppppuVar46 - (longlong)ppppppuVar62) >> 3);
  uVar48 = (ulonglong)(iVar51 + 1);
  ppppppuVar55 = ppppppuVar56;
  ppppppuVar61 = ppppppuVar62;
  if (iVar18 == 0) goto LAB_1409ec7db;
  goto LAB_1409ec57b;
}



// FUNCTION 1409ed752 FUN_1409ed752 body=169 status=ok
// SIG undefined FUN_1409ed752(void)

undefined8 FUN_1409ed752(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  byte bVar1;
  longlong lVar2;
  
  if (param_4 != 0) {
    param_3 = param_3 + 0x30;
    param_2 = param_2 + 0x10;
    do {
      lVar2 = *(longlong *)(param_3 + -0x30);
      if (DAT_14c950c29 == 1) {
        if (lVar2 == 0) {
          lVar2 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar2 = *(longlong *)(param_3 + -0x30);
        }
      }
      bVar1 = DAT_14c950c29;
      *(longlong *)(param_2 + -0x10) = lVar2;
      lVar2 = *(longlong *)(param_3 + -0x28);
      if ((bVar1 & 1) != 0) {
        if (lVar2 == 0) {
          lVar2 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar2 = *(longlong *)(param_3 + -0x28);
        }
      }
      *(longlong *)(param_2 + -8) = lVar2;
      FUN_1403de7ba(param_2,param_3 + -0x20);
      FUN_1409ed7fc(param_2 + 0x20,param_3);
      *(undefined8 *)(param_2 + 0x30) = *(undefined8 *)(param_3 + 0x10);
      param_3 = param_3 + 0x48;
      param_2 = param_2 + 0x48;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1409ed7fc FUN_1409ed7fc body=93 status=ok
// SIG undefined FUN_1409ed7fc(void)

undefined8 * FUN_1409ed7fc(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1409ed859(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1409ed966(param_1,iVar1);
      FUN_1409ed8c2(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1409ed859 FUN_1409ed859 body=105 status=ok
// SIG undefined FUN_1409ed859(void)

void FUN_1409ed859(longlong param_1,int param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if (param_2 != 0) {
    puVar3 = (undefined8 *)(param_1 + 8);
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
      puVar3 = puVar3 + 6;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1409ed8c2 FUN_1409ed8c2 body=163 status=ok
// SIG undefined FUN_1409ed8c2(void)

void FUN_1409ed8c2(longlong param_1,longlong param_2,int param_3)

{
  byte bVar1;
  ushort uVar2;
  code *pcVar3;
  undefined8 *_Dst;
  undefined8 *_Src;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if (param_3 != 0) {
    puVar4 = (undefined8 *)(param_1 + 8);
    puVar5 = (undefined8 *)(param_2 + 8);
    do {
      puVar4[-1] = puVar5[-1];
      bVar1 = *(byte *)(puVar5 + 4);
      uVar2 = *(ushort *)(puVar5 + 3);
      *(ushort *)(puVar4 + 3) = uVar2;
      _Dst = puVar4;
      _Src = puVar5;
      if (0x18 < uVar2) {
        _Dst = (undefined8 *)FUN_14001cc68(uVar2,0);
        *puVar4 = _Dst;
        _Src = (undefined8 *)*puVar5;
      }
      pcVar3 = *(code **)((longlong)&DAT_14c9a85b0 + (ulonglong)((uint)bVar1 * 0x120));
      if (pcVar3 == (code *)0x0) {
        memcpy(_Dst,_Src,
               (longlong)*(int *)((longlong)&DAT_14c9a8510 + (ulonglong)((uint)bVar1 * 0x120)));
      }
      else {
        (*pcVar3)();
      }
      *(undefined1 *)(puVar4 + 4) = *(undefined1 *)(puVar5 + 4);
      puVar4 = puVar4 + 6;
      puVar5 = puVar5 + 6;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1409ed966 FUN_1409ed966 body=233 status=ok
// SIG undefined FUN_1409ed966(void)

void FUN_1409ed966(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar3 = (longlong)param_2 * 0x30;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar3 < 0x7ff1) {
          uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar3 >> 4]];
        }
        else {
          uVar2 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar2 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar2 & (uVar3 + uVar2) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
    iVar1 = (int)(uVar3 / 0x30);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar4 = iVar1;
    }
  }
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0x30,8);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1409eda50 FUN_1409eda50 body=418 status=ok
// SIG undefined FUN_1409eda50(void)

longlong * FUN_1409eda50(longlong *param_1,longlong *param_2)

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
      thunk_FUN_14572512c(param_1,&local_34);
    }
  }
  else {
    local_34 = *(uint *)*puVar3;
    *puVar3 = (ulonglong)puVar1;
  }
  if (local_34 == 0) {
    if (((*(byte *)(param_1 + 5) & 1) != 0) &&
       (*(undefined4 *)(param_2 + 1) = 0, *(int *)((longlong)param_2 + 0xc) != 0)) {
      FUN_1409edbf4(param_2,0);
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
      (**(code **)(*param_1 + 0x138))(param_1,*param_2 + lVar4);
      lVar6 = lVar6 + 1;
      lVar4 = lVar4 + 8;
    } while (lVar6 < (int)param_2[1]);
  }
  else {
    *(undefined4 *)(param_2 + 1) = 0;
    if ((*(uint *)((longlong)param_2 + 0xc) == local_34) ||
       (FUN_1409edbf4(param_2), 0 < (int)local_34)) {
      iVar5 = 0;
      do {
        iVar2 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
          FUN_140b51998(param_2,iVar2);
        }
        *(undefined8 *)(*param_2 + (longlong)iVar2 * 8) = 0;
        (**(code **)(*param_1 + 0x138))(param_1);
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



// FUNCTION 1409edbf4 FUN_1409edbf4 body=315 status=ok
// SIG undefined FUN_1409edbf4(void)

void FUN_1409edbf4(longlong param_1,int param_2)

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
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_1409edc5e;
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
LAB_1409edc5e:
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



// FUNCTION 1409edd30 FUN_1409edd30 body=885 status=ok
// SIG undefined FUN_1409edd30(void)

void FUN_1409edd30(longlong param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  byte *pbVar3;
  undefined2 uVar4;
  void *_Dst;
  longlong lVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  ushort uVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 auStack_a8 [40];
  longlong local_80;
  ushort auStack_74 [2];
  uint local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar5 = param_1 + 0x130;
  *(undefined4 *)(param_1 + 0x150) = 0;
  local_70 = *(uint *)(*(longlong *)(param_1 + 0x1b8) + 0x106);
  uStack_6c = CONCAT22(uStack_6c._2_2_,*(undefined2 *)(*(longlong *)(param_1 + 0x1b8) + 0x104));
  lVar13 = 0;
  do {
    uVar9 = *(ushort *)((longlong)&local_70 + lVar13);
    iVar7 = uVar9 + 1;
    iVar11 = *(int *)(param_1 + 0x150);
    iVar10 = iVar7 - iVar11;
    if (iVar10 != 0 && iVar11 <= iVar7) {
      if (iVar11 == 0) {
LAB_1409eddc6:
        if (*(int *)(param_1 + 0x154) <= (int)(uint)uVar9) {
          *(undefined4 *)(param_1 + 0x154) = 0x100;
          FUN_14497ddce(lVar5,iVar11);
          iVar7 = *(int *)(param_1 + 0x150) + iVar10;
        }
        iVar8 = iVar7 + 0x1f;
        if (-1 < iVar7) {
          iVar8 = iVar7;
        }
        *(int *)(param_1 + 0x150) = iVar7;
        if (iVar7 % 0x20 != 0) {
          bVar6 = -(char)(iVar7 % 0x20);
          *(uint *)(lVar5 + (longlong)(iVar8 >> 5) * 4) =
               (uint)(*(int *)(lVar5 + (longlong)(iVar8 >> 5) * 4) << (bVar6 & 0x1f)) >>
               (bVar6 & 0x1f);
        }
      }
      else {
        iVar8 = iVar11 + 0x1e;
        if (-1 < iVar11 + -1) {
          iVar8 = iVar11 + -1;
        }
        if (iVar8 >> 5 != (uint)(uVar9 >> 5)) goto LAB_1409eddc6;
        *(int *)(param_1 + 0x150) = iVar7;
      }
      FUN_1447c45ca(lVar5,iVar11,iVar10,0);
    }
    puVar1 = (uint *)(lVar5 + (ulonglong)(uVar9 >> 5) * 4);
    *puVar1 = *puVar1 | 1 << ((byte)uVar9 & 0x1f);
    lVar13 = lVar13 + 2;
  } while (lVar13 != 6);
  FUN_14010b303(*(longlong *)(*(longlong *)(param_1 + 0x28) + 600) + 0x1d8,lVar5,1,&local_70);
  lVar5 = FUN_1409ee0ec(*(undefined8 *)(param_1 + 0x28));
  uVar9 = *(ushort *)(*(longlong *)(param_1 + 0x1b8) + 0x4a);
  uVar4 = *(undefined2 *)(*(longlong *)(param_1 + 0x1b8) + 0x62);
  FUN_1409ee236(lVar5 + 0xb0);
  _Dst = (void *)CONCAT44(uStack_64,uStack_68);
  memset(_Dst,0,0x128);
  *(undefined1 *)((longlong)_Dst + 0x100) = 2;
  *(undefined8 *)((longlong)_Dst + 0x128) = 0x10000000000;
  local_80 = (longlong)(int)local_70;
  lVar13 = *(longlong *)(lVar5 + 0xb0);
  lVar12 = local_80 * 0x130;
  lVar5 = lVar13 + lVar12;
  FUN_1409ee0a6(lVar5);
  pbVar3 = (byte *)(lVar13 + 0x100 + lVar12);
  *pbVar3 = *pbVar3 | 3;
  *(undefined8 *)(lVar13 + 0x28 + lVar12) = 0;
  *(undefined4 *)(lVar13 + 0x30 + lVar12) = 0;
  puVar2 = (undefined8 *)(lVar13 + 8 + lVar12);
  *puVar2 = 0;
  puVar2[1] = 0;
  *(undefined8 *)(lVar13 + 0x34 + lVar12) = 0xffffffff00000080;
  *(undefined4 *)(lVar13 + 0x3c + lVar12) = 0;
  *(undefined8 *)(lVar13 + 0x48 + lVar12) = 0;
  *(undefined4 *)(lVar13 + 0x50 + lVar12) = 0;
  *(undefined8 *)(lVar13 + 0x68 + lVar12) = 0;
  *(undefined8 *)(lVar13 + 0x70 + lVar12) = 0x8000000000;
  *(ushort *)(lVar13 + 0x7a + lVar12) = uVar9;
  *(undefined2 *)(lVar13 + 0x7c + lVar12) = uVar4;
  *(undefined ***)(lVar13 + lVar12) = &PTR_FUN_14a4e04f0;
  auStack_74[1] = uVar4;
  local_50 = 0x10000000000;
  lVar13 = 2;
  iVar11 = 0;
  do {
    iVar7 = uVar9 + 1;
    iVar10 = iVar7 - iVar11;
    if (iVar10 != 0 && iVar11 <= iVar7) {
      if (iVar11 == 0) {
LAB_1409edf8d:
        if (local_50._4_4_ <= (int)(uint)uVar9) {
          local_50 = CONCAT44(0x100,(int)local_50);
          FUN_14497ddce(&local_70,iVar11);
          iVar7 = (int)local_50 + iVar10;
        }
        iVar8 = iVar7 + 0x1f;
        if (-1 < iVar7) {
          iVar8 = iVar7;
        }
        local_50 = CONCAT44(local_50._4_4_,iVar7);
        if (iVar7 % 0x20 != 0) {
          bVar6 = -(char)(iVar7 % 0x20);
          (&local_70)[iVar8 >> 5] = ((&local_70)[iVar8 >> 5] << (bVar6 & 0x1f)) >> (bVar6 & 0x1f);
        }
      }
      else {
        iVar8 = iVar11 + 0x1e;
        if (-1 < iVar11 + -1) {
          iVar8 = iVar11 + -1;
        }
        if (iVar8 >> 5 != (uint)(uVar9 >> 5)) goto LAB_1409edf8d;
        local_50 = CONCAT44(local_50._4_4_,iVar7);
      }
      FUN_1447c45ca(&local_70,iVar11,iVar10,0);
    }
    (&local_70)[uVar9 >> 5] = (&local_70)[uVar9 >> 5] | 1 << ((byte)uVar9 & 0x1f);
    if (lVar13 == 4) {
      if ((uint *)(lVar5 + 0x108) != &local_70) {
        *(undefined8 *)(lVar5 + 0x118) = local_60;
        *(undefined8 *)(lVar5 + 0x120) = uStack_58;
        *(uint *)(lVar5 + 0x108) = local_70;
        *(undefined4 *)(lVar5 + 0x10c) = uStack_6c;
        *(undefined4 *)(lVar5 + 0x110) = uStack_68;
        *(undefined4 *)(lVar5 + 0x114) = uStack_64;
        *(int *)(lVar5 + 0x128) = (int)local_50;
        *(int *)(lVar5 + 300) = local_50._4_4_;
      }
      *(int *)(param_1 + 0x40) = (int)local_80;
      if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return;
    }
    uVar9 = *(ushort *)((longlong)auStack_74 + lVar13);
    lVar13 = lVar13 + 2;
    iVar11 = (int)local_50;
  } while( true );
}



// FUNCTION 1409ee0a6 FUN_1409ee0a6 body=70 status=ok
// SIG undefined FUN_1409ee0a6(void)

void FUN_1409ee0a6(undefined8 *param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  
  bVar1 = *(byte *)(param_1 + 0x20);
  if ((bVar1 & 1) != 0) {
    puVar2 = param_1;
    if ((bVar1 & 2) == 0) {
      puVar2 = (undefined8 *)*param_1;
    }
    *(byte *)(param_1 + 0x20) = bVar1 & 0xfe;
    (**(code **)*puVar2)(puVar2,0);
    if ((*(byte *)(param_1 + 0x20) & 2) == 0) {
      FUN_1400020a8(*param_1);
      return;
    }
  }
  return;
}



// FUNCTION 1409ee0ec FUN_1409ee0ec body=98 status=ok
// SIG undefined FUN_1409ee0ec(void)

void FUN_1409ee0ec(undefined8 param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_1409ee150();
  if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_18);
  }
  FUN_14009ee5c(param_1,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1409ee150 FUN_1409ee150 body=228 status=ok
// SIG undefined FUN_1409ee150(void)

longlong FUN_1409ee150(void)

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
  if (DAT_14cab1d40 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1432d0f4c;
    local_38 = &LAB_1475202f9;
    local_40 = &LAB_140b99c8e;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0xe8;
    FUN_14081cfa3(L"/Script/MovieScene",L"MovieSceneEntityGroupingSystem",&DAT_14cab1d40,
                  &DAT_1475202f8);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cab1d40;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1409ee236 FUN_1409ee236 body=237 status=ok
// SIG undefined FUN_1409ee236(void)

int * FUN_1409ee236(longlong *param_1,int *param_2)

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
      FUN_14754f458(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x130);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x130) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x130 + *param_1;
  return param_2;
}



// FUNCTION 1409ee323 FUN_1409ee323 body=366 status=ok
// SIG undefined FUN_1409ee323(void)

void FUN_1409ee323(ulonglong *param_1,uint param_2,longlong *param_3)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined1 auStack_78 [32];
  ulonglong *local_58;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar6 = 0;
  local_58 = param_1;
  local_4c = param_2;
  if (0 < (int)param_2) {
    uVar5 = 0x7fffffff;
    uVar4 = param_2;
    do {
      if (uVar5 == 0) {
        iVar6 = -1;
        break;
      }
      iVar2 = iVar6;
      if (((((ulonglong)local_58 & 7) == 0) && (local_4c = uVar4, 7 < uVar4)) &&
         (uVar3 = uVar5, 7 < (int)uVar5)) {
        while (uVar5 = uVar3, iVar2 = iVar6, uVar4 = local_4c, (*local_58 & 0x8080808080808080) == 0
              ) {
          local_58 = local_58 + 1;
          iVar6 = iVar6 + 8;
          uVar4 = local_4c - 8;
          uVar5 = uVar3 - 8;
          bVar1 = (int)local_4c < 0x10;
          iVar2 = iVar6;
          local_4c = uVar4;
          if ((bVar1) || (bVar1 = uVar3 < 0x10, uVar3 = uVar5, bVar1)) break;
        }
      }
LAB_1409ee3d3:
      do {
        iVar6 = iVar2;
        if (((int)uVar4 < 1) || ((int)uVar5 < 1)) break;
        uVar3 = FUN_14003e942(&local_58,&local_4c);
        uVar4 = local_4c;
        if (uVar3 < 0x10000) {
          uVar5 = uVar5 - 1;
          iVar2 = iVar6 + 1;
          if (0x7f < uVar3) goto LAB_1409ee3d3;
        }
        else {
          if (1 < uVar5) {
            uVar5 = uVar5 - 2;
            iVar2 = iVar6 + 2;
            goto LAB_1409ee3d3;
          }
          uVar5 = 0;
        }
        iVar6 = iVar6 + 1;
        iVar2 = iVar6;
      } while (((ulonglong)local_58 & 7) != 0);
    } while (0 < (int)uVar4);
  }
  FUN_1409ee492(param_3,iVar6 + 1,1);
  *(undefined2 *)(*param_3 + (longlong)iVar6 * 2) = 0;
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_78);
  }
  FUN_1446e71a3(*param_3,(longlong)iVar6,param_1,param_2);
  return;
}



// FUNCTION 1409ee492 FUN_1409ee492 body=78 status=ok
// SIG undefined FUN_1409ee492(void)

void FUN_1409ee492(longlong param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 8) = param_2;
    if ((uint)(*(int *)(param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_144a2dbb8();
      return;
    }
  }
  else {
    if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(param_2);
    }
    if ((param_2 < iVar1) && (*(int *)(param_1 + 8) = param_2, param_3 == '\x01')) {
      FUN_1449649ae();
      return;
    }
  }
  return;
}



// FUNCTION 1409ee4e2 FUN_1409ee4e2 body=343 status=ok
// SIG undefined FUN_1409ee4e2(void)

void FUN_1409ee4e2(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  int iVar7;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_68 [2];
  undefined4 local_58;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(param_1 + 0xd0) != *(int *)(param_1 + 0xfc)) {
    uVar1 = ((uint)((ulonglong)param_2 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_2 >> 4)) *
            -0x7a143595;
    uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
    lVar3 = param_1 + 0x100;
    if (*(longlong *)(param_1 + 0x108) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x108);
    }
    iVar7 = *(int *)(lVar3 + (ulonglong)(*(int *)(param_1 + 0x110) - 1U & (uVar1 >> 0x10 ^ uVar1)) *
                             4);
    if (iVar7 != -1) {
      lVar3 = *(longlong *)(param_1 + 200);
      iVar2 = iVar7;
      while (*(longlong **)(lVar3 + (longlong)iVar2 * 0x20) != param_2) {
        iVar2 = *(int *)((longlong)iVar2 * 0x20 + lVar3 + 0x18);
        if (iVar2 == -1) goto LAB_1409ee5d0;
      }
      puVar5 = param_3;
      puVar6 = local_68;
      for (lVar4 = 10; lVar4 != 0; lVar4 = lVar4 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      if ((*(int *)(param_3 + 2) == 0) &&
         (*(longlong *)(*(longlong *)(*param_2 + 0x4a0) + (longlong)(int)param_2[1] * 8) == 0)) {
        local_58 = 2;
      }
      do {
        lVar4 = lVar3 + (longlong)iVar7 * 0x20;
        if (*(longlong **)(lVar3 + (longlong)iVar7 * 0x20) == param_2) goto LAB_1409ee5b0;
        iVar7 = *(int *)(lVar4 + 0x18);
      } while (iVar7 != -1);
      lVar4 = 0;
LAB_1409ee5b0:
      local_78 = 0;
      FUN_1409ee63a(param_1,lVar4 + 8,local_68,0);
    }
  }
LAB_1409ee5d0:
  if ((local_18 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1409ee63a FUN_1409ee63a body=169 status=ok
// SIG undefined FUN_1409ee63a(void)

void FUN_1409ee63a(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  uint uVar1;
  
  if (*(char *)((longlong)param_3 + 0xe) != '\x01') {
    return;
  }
  uVar1 = *(uint *)(param_3 + 2);
  if (5 < (ulonglong)uVar1) {
    return;
  }
  switch(uVar1) {
  default:
    FUN_1429c69ae((longlong)&switchD_1409ee675::switchdataD_149f5b1b0 +
                  (longlong)(int)(&switchD_1409ee675::switchdataD_149f5b1b0)[uVar1],param_2,*param_3
                  ,param_4,param_5);
    if (1 < uVar1 - 2) {
      if (uVar1 != 1) {
        return;
      }
      goto switchD_1409ee675_caseD_1;
    }
  case 2:
  case 5:
    FUN_1429c75ee(param_1,param_2);
    break;
  case 1:
switchD_1409ee675_caseD_1:
    FUN_1429c6cb2();
    break;
  case 4:
    FUN_1429c7298((longlong)&switchD_1409ee675::switchdataD_149f5b1b0 +
                  (longlong)(int)(&switchD_1409ee675::switchdataD_149f5b1b0)[uVar1],param_2,param_3,
                  param_4);
    return;
  }
  return;
}



// FUNCTION 1409ee6e4 FUN_1409ee6e4 body=192 status=ok
// SIG undefined FUN_1409ee6e4(void)

void FUN_1409ee6e4(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x20,0x10);
  *(undefined1 *)(puVar2 + 1) = 0;
  *(undefined4 *)((longlong)puVar2 + 0xc) = 0x40;
  *puVar2 = &PTR_FUN_14b9da560;
  puVar2[2] = *param_2;
  *(undefined4 *)(puVar2 + 3) = param_3;
  if (((*(int *)(param_1 + 0x84) != 0) && (uVar1 = *(uint *)(param_1 + 0x80), -1 < (int)uVar1)) &&
     ((int)uVar1 < DAT_14c9647dc)) {
    puVar4 = (undefined8 *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((puVar4 != (undefined8 *)0x0) && (*(int *)(puVar4 + 2) == *(int *)(param_1 + 0x84))) &&
       ((*(uint *)(puVar4 + 1) & 0x10200000) == 0)) {
      if ((*(uint *)(puVar4 + 1) & 0x10200000) == 0) {
        uVar3 = *puVar4;
      }
      else {
        uVar3 = 0;
      }
      FUN_1409ee7a4(uVar3,puVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1409ee7a4 FUN_1409ee7a4 body=91 status=ok
// SIG undefined FUN_1409ee7a4(void)

void FUN_1409ee7a4(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x38));
  iVar1 = *(int *)(param_1 + 0x30);
  *(uint *)(param_1 + 0x30) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x34) < iVar1 + 1U) {
    FUN_1409ee800((longlong *)(param_1 + 0x28),iVar1);
  }
  *(undefined8 *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar1 * 8) = param_2;
                    /* WARNING: Could not recover jumptable at 0x0001409ee7f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x38));
  return;
}



// FUNCTION 1409ee800 FUN_1409ee800 body=353 status=ok
// SIG undefined FUN_1409ee800(void)

void FUN_1409ee800(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1409ee885;
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
LAB_1409ee885:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 1409ee962 FUN_1409ee962 body=3871 status=ok
// SIG undefined FUN_1409ee962(void)

ulonglong FUN_1409ee962(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong *plVar3;
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
  byte bVar16;
  char cVar17;
  char cVar18;
  ushort uVar19;
  int iVar20;
  int iVar21;
  uint uVar22;
  int iVar23;
  DWORD DVar24;
  DWORD DVar25;
  longlong lVar26;
  longlong lVar27;
  longlong lVar28;
  undefined4 *puVar29;
  uint *puVar30;
  undefined8 uVar31;
  uint uVar32;
  int iVar33;
  undefined ***pppuVar34;
  ulonglong uVar35;
  ulonglong uVar36;
  uint *puVar37;
  ulonglong uVar38;
  code *****pppppcVar39;
  ulonglong uVar40;
  int iVar41;
  undefined4 *unaff_RDI;
  undefined7 uVar43;
  code *****pppppcVar42;
  undefined *puVar44;
  ulonglong uVar45;
  wchar_t *pwVar46;
  wchar_t *pwVar47;
  int iVar48;
  undefined8 *puVar49;
  code *****pppppcVar50;
  undefined1 auStack_108 [32];
  code ****local_e8;
  wchar_t *local_e0;
  wchar_t *local_d8;
  undefined8 local_d0;
  wchar_t *local_c8;
  undefined1 *local_c0;
  undefined1 *local_b8;
  code ****local_b0;
  undefined1 *local_a8;
  code *local_a0;
  ulonglong local_90;
  code ****local_88;
  undefined8 uStack_80;
  undefined ***local_78;
  undefined **local_68;
  longlong *local_60;
  byte local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (((*(byte *)(param_1 + 5) & 2) != 0) && (lVar26 = param_1[2], lVar26 != 0)) {
    unaff_RDI = (undefined4 *)(param_3 & 0xffffffff);
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14caec620);
    iVar20 = FUN_1401f87ca(&DAT_14caec650 + ((uint)param_3 & 0xffff) * 0x50,
                           *(undefined4 *)(lVar26 + 0x50),lVar26 + 0x50);
    if ((iVar20 == -1) ||
       ((lVar26 = (longlong)iVar20 * 0x38 +
                  *(longlong *)(&DAT_14caec650 + ((uint)param_3 & 0xffff) * 0x50), lVar26 == 0 ||
        (lVar26 = *(longlong *)(lVar26 + 0x28), lVar26 == 0)))) {
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14caec620);
      if (param_1[2] != 0) {
        bVar16 = FUN_14357a7ee(param_1[2],param_1);
        *(uint *)(param_1 + 5) = (*(uint *)(param_1 + 5) & 0xfffffff7) + (uint)bVar16 * 8;
        if (param_1 != (longlong *)0x0) {
          LOCK();
          plVar3 = param_1 + 1;
          lVar26 = *plVar3;
          *(int *)plVar3 = (int)*plVar3 + 1;
          UNLOCK();
          if ((int)lVar26 < 0) {
            FUN_140033559(".\\Runtime/Engine/Private/Materials/MaterialShared.cpp",0x9ae,
                          L"FMaterial::AddRef, Invalid NumDebugRefs %d",(int)lVar26 + 1);
          }
        }
        lVar26 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        iVar20 = *(int *)(lVar26 + 0xc60);
        if (DAT_14c86a9fc == 0) {
          if (iVar20 != 2) {
            if (iVar20 != 1) goto LAB_1409eeab8;
            DVar24 = FUN_140ad26c0();
            DVar25 = GetCurrentThreadId();
            if (DVar24 == DVar25) goto LAB_1409eeabd;
            goto LAB_1409eeb26;
          }
LAB_1409eeabd:
          *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) & 0xffffffef | (uint)bVar16 << 4;
          if (param_1 != (longlong *)0x0) {
            LOCK();
            plVar3 = param_1 + 1;
            lVar26 = *plVar3;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)lVar26 < 1) {
              FUN_140033559(".\\Runtime/Engine/Private/Materials/MaterialShared.cpp",0x9b6,
                            L"FMaterial::Release, Invalid NumDebugRefs %d",(int)lVar26 + -1);
            }
          }
        }
        else {
LAB_1409eeab8:
          if (iVar20 == 0x10) goto LAB_1409eeabd;
LAB_1409eeb26:
          if (DAT_14ca9a438 == '\0') {
            if ((DAT_14c86a9f8 != '\x01') || (iVar20 = *(int *)(lVar26 + 0xc60), iVar20 == 2))
            goto LAB_1409eeabd;
            if (iVar20 == 1) {
              DVar24 = FUN_140ad26c0();
              DVar25 = GetCurrentThreadId();
              if (DVar24 == DVar25) goto LAB_1409eeabd;
            }
          }
          if (DAT_14ca9a43c == 0) {
            puVar2 = (undefined8 *)
                     (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x308);
            puVar30 = (uint *)*puVar2;
            if (puVar30 != (uint *)0x0) goto LAB_1409ef261;
            while( true ) {
              uVar32 = *(uint *)(*(longlong *)
                                  ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                                + 0x318);
              if ((uVar32 & 1) == 0) {
                *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         ) = uVar32 | 1;
                __tlregdtor(&LAB_14357e25f);
              }
              lVar26 = *(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
              puVar29 = *(undefined4 **)(lVar26 + 0x310);
              *(undefined8 *)(lVar26 + 0x310) = 0;
              if (puVar29 == (undefined4 *)0x0) {
                puVar29 = _aligned_malloc(0x10000,0x10000);
              }
              *puVar29 = 0xffffffff;
              *(undefined4 **)(puVar29 + 0x10) = puVar29 + 0x16;
              puVar29[0x12] = 0;
              *puVar2 = puVar29;
              FUN_140217a48(puVar2);
              puVar30 = (uint *)*puVar2;
LAB_1409ef261:
              puVar49 = (undefined8 *)(*(longlong *)(puVar30 + 0x10) + 7U & 0xfffffffffffffff8);
              puVar37 = (uint *)(puVar49 + 0x17);
              uVar32 = puVar30[0x12];
              if (puVar37 <= puVar30 + 0x4000) break;
              while( true ) {
                *(uint **)(puVar30 + 0x10) = puVar30 + 0x4000;
                LOCK();
                uVar22 = *puVar30;
                *puVar30 = *puVar30 + uVar32 + 1;
                UNLOCK();
                if ((uVar22 ^ uVar32) != 0xffffffff) break;
                puVar30 = (uint *)*puVar2;
                *puVar30 = 0xffffffff;
                *(uint **)(puVar30 + 0x10) = puVar30 + 0x16;
                puVar30[0x12] = 0;
                *puVar2 = puVar30;
                puVar49 = (undefined8 *)((longlong)puVar30 + 0x5fU & 0xfffffffffffffff8);
                puVar37 = (uint *)(puVar49 + 0x17);
                uVar32 = 0;
                if (puVar37 <= puVar30 + 0x4000) {
                  uVar32 = 1;
                  goto LAB_1409ef2e1;
                }
              }
            }
            uVar32 = uVar32 + 1;
LAB_1409ef2e1:
            *(uint **)(puVar30 + 0x10) = puVar37;
            puVar30[0x12] = uVar32;
            iVar20 = 0;
            FUN_1447247dc(puVar49,0);
            *puVar49 = &PTR_FUN_14a9dc328;
            puVar49[0x15] = param_1;
            *(byte *)(puVar49 + 0x16) = bVar16;
            if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
              uVar32 = DAT_14c7585c8 >> 10 & 3;
              if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar32 < 2) {
                uVar40 = (ulonglong)(byte)(&DAT_149e38edc)[uVar32];
                iVar20 = 0;
              }
              else {
                uVar40 = 2;
              }
            }
            else {
              iVar20 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                       *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
              uVar40 = 5;
            }
            if (*(code **)(puVar49[0xe] + 0x18) != FUN_144713626) {
              (**(code **)(puVar49[0xe] + 0x18))(puVar49 + 0xe,puVar49 + 9);
            }
            puVar49[0xe] = LowLevelTasks::
                           TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                           TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                           ::vftable;
            puVar49[9] = puVar49;
            puVar49[10] = puVar49;
            lVar26 = *(longlong *)
                      (*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x2b8);
            if (lVar26 == 0) {
              uVar35 = 1;
              if ((char)uVar40 != '\x06') {
                uVar35 = uVar40;
              }
              uVar40 = uVar35;
              uVar31 = 0;
            }
            else {
              if ((char)uVar40 == '\x06') {
                uVar40 = *(ulonglong *)(lVar26 + 0x38) >> 0x3b;
              }
              uVar31 = *(undefined8 *)(lVar26 + 0x30);
            }
            puVar49[0xf] = uVar31;
            puVar49[0x10] = uVar40 << 0x3b | 0xc00000527800b400;
            *(int *)((longlong)puVar49 + 0x1c) = iVar20;
            if (puVar49 == (undefined8 *)0x0) {
              local_88 = (code ****)CONCAT71(local_88._1_7_,1);
              FUN_1447439e4(0);
            }
            else {
              LOCK();
              *(int *)(puVar49 + 1) = *(int *)(puVar49 + 1) + 1;
              UNLOCK();
              local_88 = (code ****)CONCAT71(local_88._1_7_,1);
              FUN_1447439e4(puVar49);
              LOCK();
              piVar1 = (int *)(puVar49 + 1);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)*puVar49)(puVar49,1);
              }
            }
          }
          else {
            local_e8 = (code ****)&local_88;
            local_78 = (undefined ***)0x0;
            local_68 = &PTR_LAB_14a9dc2c0;
            local_88 = (code ****)&LAB_1435807d0;
            local_60 = param_1;
            local_58 = bVar16;
            FUN_14005a792(&DAT_14ca9a440,L"UpdateGameThreadShaderMapIsComplete",&DAT_14caf1294);
            if ((code *****)local_88 != (code *****)0x0) {
              pppuVar34 = local_78;
              if (local_78 == (undefined ***)0x0) {
                pppuVar34 = &local_68;
              }
              (*(code *)(*pppuVar34)[2])();
            }
          }
        }
        lVar26 = param_1[2];
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14caef6c0) &&
           (FUN_144b3d300(&DAT_14caef6c0), DAT_14caef6c0 == -1)) {
          if (DAT_14ca9ee40 != 2) {
            FUN_1446efa72(&DAT_14ca9ee38,0,2,0x10);
            DAT_14ca9ee40 = 2;
          }
          puVar2 = DAT_14ca9ee38;
          *DAT_14ca9ee38 = &PTR_LAB_14a9da930;
          LOCK();
          UNLOCK();
          lVar28 = DAT_14c758608 + 1;
          lVar27 = DAT_14c758608 + 1;
          if (lVar28 == 0) {
            LOCK();
            UNLOCK();
            lVar28 = DAT_14c758608 + 2;
            lVar27 = DAT_14c758608 + 2;
          }
          DAT_14c758608 = lVar27;
          puVar2[2] = lVar28;
          *puVar2 = &PTR_FUN_14a9da8c0;
          puVar2[3] = FUN_147bbfdd6;
          _Init_thread_footer(&DAT_14caef6c0);
        }
        if (((DAT_14cb05364 != 0) && (DAT_14ca85550 == (short)unaff_RDI)) &&
           (*(longlong *)(lVar26 + 8) != 0)) {
          FUN_14323b300();
        }
        EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14caec620);
        if (*(longlong *)(lVar26 + 0x28) == 0) {
          uVar32 = 0x9b;
        }
        else {
          uVar19 = 0x9b;
          if (DAT_14ca80058 != DAT_14ca80084) {
            lVar27 = *(longlong *)(*(longlong *)(lVar26 + 0x28) + 0x58);
            uVar32 = (uint)((ulonglong)lVar27 >> 0x10);
            uVar22 = (uint)lVar27 & 0xffff;
            puVar44 = &DAT_14ca80088;
            if (DAT_14ca80090 != (undefined *)0x0) {
              puVar44 = DAT_14ca80090;
            }
            iVar20 = *(int *)(puVar44 +
                             (ulonglong)
                             (DAT_14ca80098 - 1U &
                             (int)((ulonglong)lVar27 >> 0x20) + ((uint)lVar27 << 0x10 | uVar22) +
                             (uVar32 << 0x13 | uVar32 & 0xffff) + (uVar22 >> 4)) * 4);
            while (iVar20 != -1) {
              plVar3 = (longlong *)(DAT_14ca80050 + (longlong)iVar20 * 0x14);
              if (*plVar3 == lVar27) {
                if ((plVar3 != (longlong *)0x0) && ((ushort *)(plVar3 + 1) != (ushort *)0x0)) {
                  uVar19 = *(ushort *)(plVar3 + 1);
                }
                break;
              }
              iVar20 = *(int *)((longlong)plVar3 + 0xc);
            }
          }
          uVar32 = (uint)uVar19;
        }
        unaff_RDI = (undefined4 *)(lVar26 + 0x50);
        iVar20 = FUN_1401f87ca(&DAT_14caec650 + uVar32 * 0x50,*(undefined4 *)(lVar26 + 0x50),
                               unaff_RDI);
        if (((iVar20 == -1) ||
            (lVar27 = (longlong)iVar20 * 0x38 + *(longlong *)(&DAT_14caec650 + uVar32 * 0x50),
            lVar27 == 0)) || (*(longlong *)(lVar27 + 0x28) == 0)) {
          if (*(longlong *)(lVar26 + 0x28) == 0) {
            uVar32 = 0x9b;
          }
          else {
            uVar19 = 0x9b;
            if (DAT_14ca80058 != DAT_14ca80084) {
              lVar27 = *(longlong *)(*(longlong *)(lVar26 + 0x28) + 0x58);
              uVar32 = (uint)((ulonglong)lVar27 >> 0x10);
              uVar22 = (uint)lVar27 & 0xffff;
              puVar44 = &DAT_14ca80088;
              if (DAT_14ca80090 != (undefined *)0x0) {
                puVar44 = DAT_14ca80090;
              }
              iVar20 = *(int *)(puVar44 +
                               (ulonglong)
                               (DAT_14ca80098 - 1U &
                               (int)((ulonglong)lVar27 >> 0x20) + ((uint)lVar27 << 0x10 | uVar22) +
                               (uVar32 << 0x13 | uVar32 & 0xffff) + (uVar22 >> 4)) * 4);
              while (iVar20 != -1) {
                plVar3 = (longlong *)(DAT_14ca80050 + (longlong)iVar20 * 0x14);
                if (*plVar3 == lVar27) {
                  if ((plVar3 != (longlong *)0x0) && ((ushort *)(plVar3 + 1) != (ushort *)0x0)) {
                    uVar19 = *(ushort *)(plVar3 + 1);
                  }
                  break;
                }
                iVar20 = *(int *)((longlong)plVar3 + 0xc);
              }
            }
            uVar32 = (uint)uVar19;
          }
          uVar40 = (ulonglong)(uVar32 * 0x50);
          plVar3 = (longlong *)(&DAT_14caec650 + uVar40);
          iVar20 = *(int *)((longlong)&DAT_14caec684 + uVar40);
          if (iVar20 == 0) {
            iVar48 = *(int *)(&DAT_14caec658 + uVar40);
            iVar20 = *(int *)(uVar40 + 0x14caec65c);
            *(int *)(&DAT_14caec658 + uVar40) = iVar48 + 1;
            if (iVar20 == iVar48) {
              FUN_1447030e2(plVar3,iVar48);
            }
            iVar20 = *(int *)((longlong)&DAT_14caec678 + uVar40);
            if (iVar20 == 0) {
              iVar21 = -1;
            }
            else {
              iVar21 = iVar20 + 0x1e;
              if (-1 < iVar20 + -1) {
                iVar21 = iVar20 + -1;
              }
              iVar21 = iVar21 >> 5;
            }
            lVar27 = uVar40 + 0x14caec660;
            iVar33 = iVar20 + 1;
            iVar41 = iVar20 + 0x1f;
            if (-1 < iVar20) {
              iVar41 = iVar20;
            }
            if (iVar41 >> 5 == iVar21) {
              *(int *)((longlong)&DAT_14caec678 + uVar40) = iVar33;
            }
            else {
              if (*(int *)((longlong)&DAT_14caec67c + uVar40) <= iVar20) {
                uVar32 = iVar20 + 0x20;
                local_90 = (ulonglong)uVar32;
                iVar21 = iVar20;
                if (uVar32 < 0xa0) {
                  iVar33 = 0x80;
                }
                else {
                  uVar32 = uVar32 >> 5;
                  local_90 = (ulonglong)uVar32;
                  if (*(int *)((longlong)&DAT_14caec67c + uVar40) + 0x1fU < 0xa0) {
                    uVar22 = 4;
                    if (4 < uVar32) {
                      uVar22 = uVar32;
                    }
                  }
                  else {
                    uVar22 = uVar32 + (uVar32 * 3 >> 3) + 0x10;
                  }
                  uVar35 = (ulonglong)(uVar22 * 4);
                  if (DAT_14c872d28 != (longlong *)0x0) {
                    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
                      uVar32 = (uint)(uVar35 + 0xf);
                      if (uVar22 < 0x1ffd) {
                        uVar35 = (ulonglong)
                                 (ushort)(&DAT_14c841d90)
                                         [0x32 - (byte)(&DAT_14c841e00)[uVar35 + 0xf >> 4]];
                      }
                      else {
                        uVar36 = (ulonglong)(uVar32 & 0xfffffff0);
                        if (uVar36 < 0x7ff1) {
                          bVar16 = (&DAT_14c841e00)[uVar32 >> 4];
                          uVar38 = 0x32;
                          if (0x32 < bVar16) {
                            uVar38 = (ulonglong)bVar16;
                          }
                          uVar45 = 0x32 - (ulonglong)bVar16;
                          do {
                            uVar35 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar45 & 0xffffffff];
                            if (((&DAT_14c841d90)[uVar45 & 0xffffffff] & 0xf) == 0)
                            goto LAB_1409ef597;
                            lVar28 = uVar38 + 1 + uVar45;
                            uVar45 = uVar45 - 1;
                          } while (lVar28 != 0x33);
                        }
                        uVar35 = 0x10;
                        if (0x10 < DAT_14c841df8) {
                          uVar35 = (ulonglong)DAT_14c841df8;
                        }
                        uVar35 = -uVar35 & (uVar36 + uVar35) - 1;
                      }
                    }
                    else {
                      uVar35 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar35,0);
                      iVar21 = *(int *)((longlong)&DAT_14caec678 + uVar40);
                    }
                  }
LAB_1409ef597:
                  iVar23 = (int)(uVar35 >> 2);
                  iVar33 = -0x20;
                  if ((int)local_90 <= iVar23) {
                    iVar33 = iVar23 << 5;
                  }
                }
                *(int *)((longlong)&DAT_14caec67c + uVar40) = iVar33;
                FUN_1446efbd8(lVar27,iVar21);
                iVar33 = *(int *)((longlong)&DAT_14caec678 + uVar40) + 1;
              }
              iVar21 = iVar33 + 0x1f;
              if (-1 < iVar33) {
                iVar21 = iVar33;
              }
              *(int *)((longlong)&DAT_14caec678 + uVar40) = iVar33;
              if (iVar33 % 0x20 != 0) {
                lVar28 = *(longlong *)((longlong)&DAT_14caec670 + uVar40);
                if (*(longlong *)((longlong)&DAT_14caec670 + uVar40) == 0) {
                  lVar28 = lVar27;
                }
                bVar16 = -(char)(iVar33 % 0x20);
                *(uint *)(lVar28 + (longlong)(iVar21 >> 5) * 4) =
                     (uint)(*(int *)(lVar28 + (longlong)(iVar21 >> 5) * 4) << (bVar16 & 0x1f)) >>
                     (bVar16 & 0x1f);
              }
            }
            lVar28 = (longlong)iVar48;
            if (*(longlong *)((longlong)&DAT_14caec670 + uVar40) != 0) {
              lVar27 = *(longlong *)((longlong)&DAT_14caec670 + uVar40);
            }
            bVar16 = (byte)iVar20 & 0x1f;
            puVar30 = (uint *)(lVar27 + (longlong)(iVar41 >> 5) * 4);
            *puVar30 = *puVar30 & (-2 << bVar16 | 0xfffffffeU >> 0x20 - bVar16);
          }
          else {
            lVar27 = *plVar3;
            iVar48 = *(int *)((longlong)&DAT_14caec67c + uVar40 + 4);
            lVar28 = (longlong)iVar48;
            iVar21 = *(int *)(lVar27 + 4 + lVar28 * 0x38);
            *(int *)((longlong)&DAT_14caec67c + uVar40 + 4) = iVar21;
            iVar20 = iVar20 + -1;
            *(int *)((longlong)&DAT_14caec684 + uVar40) = iVar20;
            if (iVar20 != 0) {
              *(undefined4 *)(lVar27 + (longlong)iVar21 * 0x38) = 0xffffffff;
            }
          }
          iVar20 = 1;
          lVar27 = uVar40 + 0x14caec660;
          if (*(longlong *)((longlong)&DAT_14caec670 + uVar40) != 0) {
            lVar27 = *(longlong *)((longlong)&DAT_14caec670 + uVar40);
          }
          iVar21 = iVar48 + 0x1f;
          if (-1 < iVar48) {
            iVar21 = iVar48;
          }
          puVar30 = (uint *)(lVar27 + (longlong)(iVar21 >> 5) * 4);
          *puVar30 = *puVar30 | 1 << ((byte)iVar48 & 0x1f);
          lVar27 = *plVar3;
          lVar28 = lVar28 * 0x38;
          puVar29 = (undefined4 *)(lVar27 + lVar28);
          uVar5 = *(undefined4 *)(lVar26 + 0x54);
          uVar6 = *(undefined4 *)(lVar26 + 0x58);
          uVar7 = *(undefined4 *)(lVar26 + 0x5c);
          uVar8 = *(undefined4 *)(lVar26 + 0x60);
          uVar9 = *(undefined4 *)(lVar26 + 100);
          uVar10 = *(undefined4 *)(lVar26 + 0x68);
          uVar11 = *(undefined4 *)(lVar26 + 0x6c);
          puVar4 = (undefined4 *)(lVar27 + lVar28);
          *puVar4 = *unaff_RDI;
          puVar4[1] = uVar5;
          puVar4[2] = uVar6;
          puVar4[3] = uVar7;
          *(undefined4 *)(lVar27 + 0x20 + lVar28) = *(undefined4 *)(lVar26 + 0x70);
          puVar4 = (undefined4 *)(lVar27 + 0x10 + lVar28);
          *puVar4 = uVar8;
          puVar4[1] = uVar9;
          puVar4[2] = uVar10;
          puVar4[3] = uVar11;
          *(longlong *)(lVar27 + 0x28 + lVar28) = lVar26;
          *(undefined4 *)(lVar27 + 0x30 + lVar28) = 0xffffffff;
          uVar32 = *(uint *)(lVar27 + lVar28);
          unaff_RDI = (undefined4 *)(ulonglong)uVar32;
          if (*(int *)(&DAT_14caec658 + uVar40) - *(int *)((longlong)&DAT_14caec684 + uVar40) == 1)
          {
            uVar22 = 1;
LAB_1409eef33:
            if (((int)uVar22 < 1) || (iVar20 <= *(int *)((longlong)&DAT_14caec698 + uVar40))) {
              uVar32 = *(int *)((longlong)&DAT_14caec698 + uVar40) - 1U & uVar32;
              puVar29[0xd] = uVar32;
              lVar27 = *(longlong *)((longlong)&DAT_14caec690 + uVar40);
              if (*(longlong *)((longlong)&DAT_14caec690 + uVar40) == 0) {
                lVar27 = uVar40 + 0x14caec688;
              }
              puVar29[0xc] = *(undefined4 *)
                              (lVar27 + ((longlong)*(int *)((longlong)&DAT_14caec698 + uVar40) - 1U
                                        & (longlong)(int)uVar32) * 4);
              lVar27 = *(longlong *)((longlong)&DAT_14caec690 + uVar40);
              if (*(longlong *)((longlong)&DAT_14caec690 + uVar40) == 0) {
                lVar27 = uVar40 + 0x14caec688;
              }
              *(int *)(lVar27 + ((longlong)*(int *)((longlong)&DAT_14caec698 + uVar40) - 1U &
                                (longlong)(int)uVar32) * 4) = iVar48;
            }
            else {
              *(int *)((longlong)&DAT_14caec698 + uVar40) = iVar20;
              FUN_1417e1e74(plVar3);
            }
          }
          else {
            iVar21 = FUN_1401f87ca(plVar3,unaff_RDI,puVar29);
            if (iVar21 == -1) {
              uVar22 = *(int *)(&DAT_14caec658 + uVar40) -
                       *(int *)((longlong)&DAT_14caec684 + uVar40);
              if (3 < uVar22) {
                uVar35 = (ulonglong)(uVar22 & 0xfffffffe) + 0xf;
                lVar27 = 0x3f;
                if (uVar35 != 0) {
                  for (; uVar35 >> lVar27 == 0; lVar27 = lVar27 + -1) {
                  }
                }
                iVar20 = 1 << ((byte)lVar27 & 0x1f);
              }
              goto LAB_1409eef33;
            }
            lVar27 = *plVar3;
            lVar28 = (longlong)iVar21 * 0x38;
            uVar5 = *puVar29;
            uVar6 = puVar29[1];
            uVar7 = puVar29[2];
            uVar8 = puVar29[3];
            uVar9 = puVar29[4];
            uVar10 = puVar29[5];
            uVar11 = puVar29[6];
            uVar12 = puVar29[7];
            uVar13 = puVar29[9];
            uVar14 = puVar29[10];
            uVar15 = puVar29[0xb];
            puVar4 = (undefined4 *)(lVar27 + 0x20 + lVar28);
            *puVar4 = puVar29[8];
            puVar4[1] = uVar13;
            puVar4[2] = uVar14;
            puVar4[3] = uVar15;
            puVar29 = (undefined4 *)(lVar27 + 0x10 + lVar28);
            *puVar29 = uVar9;
            puVar29[1] = uVar10;
            puVar29[2] = uVar11;
            puVar29[3] = uVar12;
            puVar29 = (undefined4 *)(lVar27 + lVar28);
            *puVar29 = uVar5;
            puVar29[1] = uVar6;
            puVar29[2] = uVar7;
            puVar29[3] = uVar8;
            FUN_1406d1af8(plVar3,iVar48,1);
          }
          *(byte *)(lVar26 + 0x7c) = *(byte *)(lVar26 + 0x7c) | 1;
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14caec620);
      }
    }
    else {
      unaff_RDI = (undefined4 *)&DAT_14caec620;
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14caec620);
      *(int *)(lVar26 + 0x74) = *(int *)(lVar26 + 0x74) + 1;
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14caec620);
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14caec620);
      FUN_14357a1ec(param_1,lVar26);
      FUN_1401fc67c(lVar26);
    }
  }
  puVar29 = (undefined4 *)(**(code **)(*param_1 + 0x4c0))(param_1);
  if (puVar29 == (undefined4 *)0x0) {
LAB_1409eefdc:
    cVar17 = (**(code **)(*param_1 + 0x400))(param_1);
    cVar18 = '\x01';
    if (cVar17 == '\0') {
      cVar18 = (**(code **)(*param_1 + 0x110))(param_1);
    }
    lVar26 = param_1[2];
    uVar43 = (undefined7)((ulonglong)unaff_RDI >> 8);
    if (cVar18 == '\x01' && lVar26 != 0) {
      cVar17 = FUN_14357a7ee(lVar26,param_1);
      uVar40 = CONCAT71(uVar43,1);
      if (cVar17 != '\0') goto LAB_1409ef13e;
    }
    else {
      uVar40 = CONCAT71(uVar43,1);
      if (lVar26 != 0) goto LAB_1409ef13e;
    }
    if (cVar18 != '\0') {
      lVar26 = (**(code **)(*param_1 + 0x4c0))(param_1);
      if (lVar26 == 0) {
        pppppcVar42 = (code *****)0x0;
        pppppcVar50 = (code *****)&DAT_149dfb77a;
      }
      else {
        local_88 = (code ****)0x0;
        uStack_80 = 0;
        FUN_1401031ac(lVar26,0,&local_88);
        pppppcVar42 = (code *****)local_88;
        pppppcVar50 = (code *****)&DAT_149dfb77a;
        if ((int)uStack_80 != 0) {
          pppppcVar50 = (code *****)local_88;
        }
      }
      pwVar46 = L"has";
      if (param_1[2] == 0) {
        pwVar46 = L"null";
      }
      pwVar47 = L"Contains";
      if ((*(byte *)(param_1 + 5) & 2) == 0) {
        pwVar47 = L"No";
      }
      (**(code **)(*param_1 + 0x370))(param_1,&local_88);
      pppppcVar39 = (code *****)&DAT_149dfb77a;
      if ((int)uStack_80 != 0) {
        pppppcVar39 = (code *****)local_88;
      }
      local_e8 = (code ****)pppppcVar50;
      local_e0 = pwVar47;
      local_d8 = pwVar46;
      FUN_140033559(".\\Runtime/Engine/Private/Materials/MaterialShared.cpp",0xbeb,
                    L"Failed to find shader map for default material %s(%s)! Please make sure cooking was successful (%s inline shaders, %s GTSM)"
                    ,pppppcVar39);
      if ((code *****)local_88 != (code *****)0x0) {
        FUN_1400020a8();
      }
      if (pppppcVar42 != (code *****)0x0) {
        FUN_1400020a8(pppppcVar42);
      }
    }
  }
  else {
    if (DAT_14caec308 == 0) {
      local_b0 = (code ****)&local_88;
      local_88 = (code ****)FUN_1417df956;
      local_a0 = FUN_14081d0ea;
      local_a8 = &LAB_146386466;
      local_b8 = &LAB_147bb408b;
      local_c0 = &LAB_1463eaa15;
      local_c8 = L"Engine";
      local_d0 = 0;
      local_d8 = (wchar_t *)CONCAT44(local_d8._4_4_,0x10000001);
      local_e0 = (wchar_t *)CONCAT44(local_e0._4_4_,8);
      local_e8 = (code ****)CONCAT44(local_e8._4_4_,0x2e0);
      FUN_14081cfa3(L"/Script/Engine",L"MaterialInstance",&DAT_14caec308,&DAT_147bb408a);
    }
    unaff_RDI = puVar29;
    if ((*(int *)(*(longlong *)(puVar29 + 4) + 0x38) < *(int *)(DAT_14caec308 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(puVar29 + 4) + 0x30) +
         (longlong)*(int *)(DAT_14caec308 + 0x38) * 8) != DAT_14caec308 + 0x30)) goto LAB_1409eefdc;
    uVar40 = CONCAT71((int7)((ulonglong)puVar29 >> 8),1);
    if (param_1[2] != 0) goto LAB_1409ef13e;
  }
  uVar40 = 0;
  FUN_14357a1ec(param_1,0);
LAB_1409ef13e:
  if ((local_48 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return uVar40 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1409ef882 FUN_1409ef882 body=110 status=ok
// SIG undefined FUN_1409ef882(void)

void FUN_1409ef882(longlong param_1,uint param_2)

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
  if (*(int *)(param_1 + 0x48) < iVar3 && 0 < (int)param_2 || iVar3 < *(int *)(param_1 + 0x48)) {
    FUN_140ce55f0(param_1,param_2);
    *(int *)(param_1 + 0x48) = iVar3;
    FUN_1409e95fe(param_1);
    return;
  }
  FUN_142b44b5c(param_1);
  FUN_140ce55f0(param_1,param_2);
  return;
}



// FUNCTION 1409ef8f6 FUN_1409ef8f6 body=57 status=ok
// SIG undefined FUN_1409ef8f6(void)

void FUN_1409ef8f6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5b200 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5b200 = FUN_140002ddd(FUN_1464ce7bf,uVar1,L"GbxCameraShake");
  }
  return;
}



// FUNCTION 1409ef930 FUN_1409ef930 body=406 status=ok
// SIG undefined FUN_1409ef930(void)

undefined4 FUN_1409ef930(longlong param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined1 auStack_b8 [38];
  undefined2 local_92;
  undefined **local_90;
  undefined2 local_88;
  undefined1 local_86;
  undefined4 local_84;
  undefined4 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  longlong *local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  undefined8 local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar5 = FUN_1409efacc();
  FUN_1409efbf2(uVar5,&local_50,param_2,param_3);
  uVar4 = (**(code **)(**(longlong **)(param_1 + 0x5d8) + 8))();
  (**(code **)(*DAT_14c968088 + 0x58))(DAT_14c968088,&local_92);
  plVar2 = local_40;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_40 + 1) = (int)local_40[1] + 1;
    UNLOCK();
  }
  local_88 = local_92;
  local_78 = 0;
  local_90 = &PTR_FUN_149eda6d0;
  local_70 = local_50;
  local_68 = local_48;
  local_60 = local_40;
  local_86 = param_4;
  local_84 = uVar4;
  local_80 = uVar4;
  local_58 = param_3;
  local_54 = param_2;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_40 + 1) = (int)local_40[1] + 1;
    UNLOCK();
    LOCK();
    plVar1 = local_40 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar3 = (int *)((longlong)plVar2 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  uVar4 = FUN_1409eff00(param_1 + -0x148,&local_90);
  plVar2 = local_60;
  local_90 = &PTR_FUN_149eda6d0;
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_60 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar3 = (int *)((longlong)plVar2 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_40 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar3 = (int *)((longlong)local_40 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*local_40 + 0x10))(local_40);
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 1409efacc FUN_1409efacc body=294 status=ok
// SIG undefined FUN_1409efacc(void)

undefined8 * FUN_1409efacc(void)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  
  if (DAT_14c966e40 != (undefined8 *)0x0) {
    return DAT_14c966e40;
  }
  puVar5 = (undefined8 *)FUN_14001cc68(0xa0,0x10);
  puVar5[4] = 0;
  *(undefined4 *)(puVar5 + 5) = 0;
  *puVar5 = 0;
  puVar5[1] = 0;
  *(undefined8 *)((longlong)puVar5 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar5 + 0x34) = 0;
  puVar5[8] = 0;
  *(undefined4 *)(puVar5 + 9) = 0;
  puVar5[0xe] = 0;
  *(undefined4 *)(puVar5 + 0xf) = 0;
  puVar5[10] = 0;
  puVar5[0xb] = 0;
  *(undefined8 *)((longlong)puVar5 + 0x7c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar5 + 0x84) = 0;
  puVar5[0x12] = 0;
  *(undefined4 *)(puVar5 + 0x13) = 0;
  FUN_142848054(puVar5);
  plVar6 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar6[1] = (longlong)&DAT_100000001;
  *plVar6 = (longlong)&PTR_FUN_149ec5360;
  plVar6[2] = (longlong)puVar5;
  plVar3 = DAT_14c966e48;
  DAT_14c966e40 = puVar5;
  if (plVar6 == DAT_14c966e48) {
    if (plVar6 == (longlong *)0x0) {
      return puVar5;
    }
    LOCK();
    plVar3 = plVar6 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 != 0) {
      return DAT_14c966e40;
    }
    (**(code **)*plVar6)(plVar6);
    LOCK();
    piVar2 = (int *)((longlong)plVar6 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar4 = *piVar2;
    UNLOCK();
    plVar3 = plVar6;
  }
  else {
    if (DAT_14c966e48 == (longlong *)0x0) {
      DAT_14c966e48 = plVar6;
      return puVar5;
    }
    LOCK();
    plVar1 = DAT_14c966e48 + 1;
    DAT_14c966e48 = plVar6;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 != 0) {
      return DAT_14c966e40;
    }
    (**(code **)*plVar3)(plVar3);
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar4 = *piVar2;
    UNLOCK();
  }
  if (iVar4 == 0) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  return DAT_14c966e40;
}



// FUNCTION 1409efbf2 FUN_1409efbf2 body=780 status=ok
// SIG undefined FUN_1409efbf2(void)

undefined8 * FUN_1409efbf2(longlong *param_1,undefined8 *param_2,uint param_3,uint param_4)

{
  longlong lVar1;
  uint uVar2;
  longlong *plVar3;
  uint *puVar4;
  uint *puVar5;
  undefined1 auStack_1b8 [32];
  undefined8 local_198;
  longlong **local_190;
  undefined8 local_180;
  undefined8 local_178;
  longlong local_170;
  longlong local_168 [2];
  longlong *local_158 [2];
  longlong *local_148 [2];
  undefined1 local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  longlong *local_120 [2];
  undefined1 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  uint *local_f8;
  undefined8 *local_f0;
  uint local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  local_44 = param_4;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    uVar2 = *(uint *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_3) * 4);
    if (uVar2 != 0xffffffff) {
      do {
        puVar5 = (uint *)(*param_1 + (longlong)(int)uVar2 * 0x28);
        if (*puVar5 == param_3) {
          if (puVar5 != (uint *)0x0) {
            puVar5 = puVar5 + 2;
            goto LAB_1409efce0;
          }
          break;
        }
        uVar2 = puVar5[8];
      } while (uVar2 != 0xffffffff);
    }
  }
  if ((int)param_1[0xb] != *(int *)((longlong)param_1 + 0x84)) {
    plVar3 = param_1 + 0x11;
    if ((longlong *)param_1[0x12] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[0x12];
    }
    uVar2 = *(uint *)((longlong)plVar3 + (ulonglong)((int)param_1[0x13] - 1U & param_4) * 4);
    if (uVar2 != 0xffffffff) {
      do {
        puVar4 = (uint *)(param_1[10] + (longlong)(int)uVar2 * 0x28);
        if (*puVar4 == param_4) goto LAB_1409efcc0;
        uVar2 = puVar4[8];
      } while (uVar2 != 0xffffffff);
    }
  }
  puVar4 = (uint *)0x0;
LAB_1409efcc0:
  puVar5 = puVar4 + 2;
  if ((param_4 < 0x21) || (puVar5 != (uint *)0x0 && puVar4 != (uint *)0x0)) {
    if (puVar5 == (uint *)0x0 || puVar4 == (uint *)0x0) {
      puVar5 = (uint *)&DAT_14c966e80;
    }
LAB_1409efce0:
    *param_2 = *(undefined8 *)puVar5;
    param_2[1] = *(undefined8 *)(puVar5 + 2);
    lVar1 = *(longlong *)(puVar5 + 4);
    param_2[2] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
  }
  else {
    FUN_140002266(&local_f8,L"%s%d",L"UnknownCharCode_",param_4);
    puVar5 = local_f8;
    if ((int)local_f0 == 0) {
      puVar5 = (uint *)&DAT_149dfb77a;
    }
    FUN_1446f470e(param_2,puVar5,1);
    param_2[1] = 0;
    param_2[2] = 0;
    if (local_f8 != (uint *)0x0) {
      FUN_1400020a8();
    }
    FUN_144a5dc74(local_120);
    local_110 = 0;
    local_108 = 0;
    uStack_100 = 0;
    FUN_14593dce2(local_168,param_4);
    FUN_145aa9352(local_158,local_168);
    FUN_14023423e(local_148,local_158);
    local_138 = 1;
    local_130 = 0;
    uStack_128 = 0;
    local_180 = *param_2;
    local_178 = param_2[1];
    local_170 = param_2[2];
    if (local_170 != 0) {
      LOCK();
      *(int *)(local_170 + 8) = *(int *)(local_170 + 8) + 1;
      UNLOCK();
    }
    local_198 = 0;
    local_190 = local_120;
    FUN_1413a41ee(&local_f8,&local_180,local_148,0x110);
    FUN_1413a47ae(&local_f8);
    FUN_140cac0f2(&local_f8);
    FUN_1449db362(&local_130);
    if (local_148[0] != (longlong *)0x0) {
      (**(code **)(*local_148[0] + 0x10))();
    }
    if (local_158[0] != (longlong *)0x0) {
      (**(code **)(*local_158[0] + 0x10))();
    }
    if (local_168[0] != 0) {
      FUN_1400020a8();
    }
    FUN_1449db362(&local_108);
    if (local_120[0] != (longlong *)0x0) {
      (**(code **)(*local_120[0] + 0x10))();
    }
    local_f8 = &local_44;
    local_f0 = param_2;
    FUN_141556022(param_1 + 10,local_120);
  }
  if ((local_40 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1409eff00 FUN_1409eff00 body=2922 status=ok
// SIG undefined FUN_1409eff00(void)

ulonglong FUN_1409eff00(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong **pplVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  int iVar6;
  uint uVar7;
  char *pcVar8;
  char *pcVar9;
  undefined *puVar10;
  char cVar11;
  longlong lVar12;
  longlong lVar13;
  longlong *plVar14;
  longlong *unaff_RBX;
  char *pcVar15;
  longlong **pplVar16;
  longlong lVar17;
  ulonglong uVar18;
  longlong lVar19;
  longlong lVar20;
  double dVar21;
  undefined1 auStack_3e8 [32];
  undefined8 local_3c8;
  undefined4 local_3c0;
  longlong *local_3b0;
  longlong *local_3a8;
  longlong local_3a0;
  longlong local_398;
  longlong *local_390;
  longlong local_388;
  longlong lStack_380;
  longlong local_378;
  longlong local_368;
  longlong lStack_360;
  undefined8 local_358;
  longlong local_348;
  longlong *local_340;
  undefined **local_338;
  undefined8 local_330;
  longlong lStack_328;
  longlong local_320;
  undefined8 local_318;
  undefined8 local_310;
  longlong *local_308;
  undefined8 local_300;
  char local_2f8 [8];
  undefined8 local_2f0;
  undefined8 uStack_2e8;
  undefined1 local_2d8;
  undefined1 local_2d0 [136];
  undefined4 local_248;
  undefined1 local_244;
  longlong *local_240;
  longlong local_238;
  undefined8 uStack_230;
  undefined1 local_220;
  undefined1 local_218 [136];
  undefined4 local_190;
  undefined1 local_18c;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 local_168;
  undefined1 local_160 [136];
  undefined4 local_d8;
  undefined1 local_d4;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  longlong *local_90;
  longlong *local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  char local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_3e8;
  *(int *)(param_1 + 199) = (int)param_1[199] + 1;
  iVar6 = *(int *)(param_2 + 0xc);
  if (((longlong)iVar6 < 0) || ((int)param_1[99] <= iVar6)) {
LAB_1409f0a30:
    FUN_141370954(param_1,&local_348,iVar6,0);
  }
  else {
    lVar12 = (longlong)iVar6 * 0x10;
    lVar19 = *(longlong *)(param_1[0x62] + lVar12);
    unaff_RBX = *(longlong **)(param_1[0x62] + 8 + lVar12);
    if (unaff_RBX == (longlong *)0x0) {
      if (lVar19 == 0) goto LAB_1409f0a30;
      local_340 = (longlong *)0x0;
      local_348 = lVar19;
    }
    else {
      LOCK();
      *(int *)(unaff_RBX + 1) = (int)unaff_RBX[1] + 1;
      UNLOCK();
      if (lVar19 != 0) {
        LOCK();
        *(int *)(unaff_RBX + 1) = (int)unaff_RBX[1] + 1;
        UNLOCK();
        local_348 = lVar19;
        local_340 = unaff_RBX;
      }
      LOCK();
      plVar14 = unaff_RBX + 1;
      *(int *)plVar14 = (int)*plVar14 + -1;
      UNLOCK();
      if ((int)*plVar14 == 0) {
        (**(code **)*unaff_RBX)(unaff_RBX);
        LOCK();
        piVar2 = (int *)((longlong)unaff_RBX + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*unaff_RBX + 0x10))(unaff_RBX);
        }
      }
      if (lVar19 == 0) goto LAB_1409f0a30;
    }
  }
  uStack_180 = &local_240;
  local_188 = &DAT_1428f5d5c;
  local_240 = param_1;
  local_238 = param_2;
  cVar11 = FUN_1402c4aee(param_1 + 0xc9);
  pcVar15 = (char *)CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
  if (cVar11 != '\0') goto LAB_1409f09aa;
  local_240 = (longlong *)((ulonglong)local_240 & 0xffffffffffffff00);
  local_220 = 0;
  local_238 = 0;
  uStack_230 = 0;
  memset(local_218,0,0x88);
  local_190 = 0x20702;
  local_18c = 0;
  dVar21 = (double)(**(code **)(*param_1 + 0x60))(param_1);
  if (((double)param_1[0x6e] != dVar21) || (NAN((double)param_1[0x6e]) || NAN(dVar21))) {
    param_1[0x6e] = (longlong)dVar21;
    FUN_1402c1cc6(param_1 + 0x70,dVar21);
  }
  if (*(longlong *)(local_348 + 0x1e8) == 0) {
LAB_1409f0116:
    lVar12 = local_348;
    param_1[0x6f] = param_1[0x6e];
    lVar19 = *(longlong *)(local_348 + 0x90);
    if (lVar19 == 0) {
      local_3c8 = CONCAT71(local_3c8._1_7_,DAT_14c96b238);
      FUN_1402c4e4c(local_348 + 0x70,&local_188,0,0);
      pplVar3 = uStack_180;
      puVar10 = local_188;
      if (uStack_180 == (longlong **)0x0) {
        *(undefined **)(lVar12 + 0x90) = local_188;
        pplVar16 = *(longlong ***)(lVar12 + 0x98);
        if (pplVar16 != (longlong **)0x0) {
          *(undefined8 *)(lVar12 + 0x98) = 0;
LAB_1409f01b1:
          LOCK();
          pplVar3 = pplVar16 + 1;
          *(int *)pplVar3 = *(int *)pplVar3 + -1;
          UNLOCK();
          if (*(int *)pplVar3 == 0) {
            (*(code *)**pplVar16)(pplVar16);
            LOCK();
            piVar2 = (int *)((longlong)pplVar16 + 0xc);
            *piVar2 = *piVar2 + -1;
            iVar6 = *piVar2;
            UNLOCK();
joined_r0x0001409f01dc:
            if (iVar6 == 0) {
              (*(code *)(*pplVar16)[2])(pplVar16);
            }
          }
        }
      }
      else {
        LOCK();
        *(int *)(uStack_180 + 1) = *(int *)(uStack_180 + 1) + 1;
        UNLOCK();
        *(undefined **)(lVar12 + 0x90) = puVar10;
        pplVar16 = *(longlong ***)(lVar12 + 0x98);
        if (pplVar3 == pplVar16) {
          LOCK();
          pplVar16 = pplVar3 + 1;
          *(int *)pplVar16 = *(int *)pplVar16 + -1;
          UNLOCK();
          if (*(int *)pplVar16 == 0) {
            (*(code *)**pplVar3)(pplVar3);
            LOCK();
            piVar2 = (int *)((longlong)pplVar3 + 0xc);
            *piVar2 = *piVar2 + -1;
            iVar6 = *piVar2;
            UNLOCK();
            pplVar16 = pplVar3;
            goto joined_r0x0001409f01dc;
          }
        }
        else {
          *(longlong ***)(lVar12 + 0x98) = pplVar3;
          if (pplVar16 != (longlong **)0x0) goto LAB_1409f01b1;
        }
      }
      pplVar3 = uStack_180;
      if (uStack_180 != (longlong **)0x0) {
        LOCK();
        pplVar16 = uStack_180 + 1;
        *(int *)pplVar16 = *(int *)pplVar16 + -1;
        UNLOCK();
        if (*(int *)pplVar16 == 0) {
          (*(code *)**pplVar3)(pplVar3);
          LOCK();
          piVar2 = (int *)((longlong)pplVar3 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (*(code *)(*pplVar3)[2])(pplVar3);
          }
        }
      }
      lVar19 = *(longlong *)(lVar12 + 0x90);
    }
    local_390 = *(longlong **)(lVar12 + 0x98);
    if (local_390 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_390 + 1) = (int)local_390[1] + 1;
      UNLOCK();
    }
    local_358 = *(undefined8 *)(param_2 + 0x18);
    local_368 = *(longlong *)(param_2 + 8);
    lStack_360 = *(longlong *)(param_2 + 0x10);
    local_318 = *(undefined8 *)(param_2 + 0x20);
    local_310 = *(undefined8 *)(param_2 + 0x28);
    local_3b0 = *(longlong **)(param_2 + 0x30);
    if (local_3b0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_3b0 + 1) = (int)local_3b0[1] + 1;
      UNLOCK();
    }
    local_300 = *(undefined8 *)(param_2 + 0x38);
    local_338 = &PTR_FUN_149eda6d0;
    if (local_3b0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_3b0 + 1) = (int)local_3b0[1] + 1;
      UNLOCK();
    }
    local_3a8 = (longlong *)(param_2 + 8);
    local_2f8[0] = '\0';
    local_2d8 = 0;
    local_2f0 = 0;
    uStack_2e8 = 0;
    local_3a0 = param_2;
    local_330 = local_368;
    lStack_328 = lStack_360;
    local_320 = local_358;
    local_308 = local_3b0;
    memset(local_2d0,0,0x88);
    local_248 = 0x20702;
    local_244 = 0;
    local_398 = lVar19 + 8;
    lVar12 = 0x10;
    lVar17 = 0x40;
    lVar20 = -1;
    local_320 = lVar19;
    do {
      lVar20 = lVar20 + 1;
      if (*(int *)(lVar19 + 0x130) <= lVar20) break;
      local_70 = *(char *)(*(longlong *)(lVar19 + 0x150) + lVar12);
      if (local_70 == '\x01') {
        lVar13 = *(longlong *)(lVar19 + 0x150) + lVar12;
        local_188 = *(undefined **)(lVar13 + -0x10);
        uStack_180 = *(longlong ***)(lVar13 + -8);
      }
      lVar13 = *(longlong *)(lVar19 + 0x128);
      if (*(longlong *)(lVar19 + 0x128) == 0) {
        lVar13 = local_398;
      }
      local_98 = *(undefined8 *)(lVar13 + -0x10 + lVar17);
      puVar4 = (undefined4 *)(lVar13 + -0x40 + lVar17);
      local_c8 = *puVar4;
      uStack_c4 = puVar4[1];
      uStack_c0 = puVar4[2];
      uStack_bc = puVar4[3];
      puVar5 = (undefined8 *)(lVar13 + -0x30 + lVar17);
      local_b8 = *puVar5;
      uStack_b0 = puVar5[1];
      puVar4 = (undefined4 *)(lVar13 + -0x20 + lVar17);
      local_a8 = *puVar4;
      uStack_a4 = puVar4[1];
      uStack_a0 = puVar4[2];
      uStack_9c = puVar4[3];
      local_90 = *(longlong **)(lVar13 + -8 + lVar17);
      local_88 = *(longlong **)(lVar13 + lVar17);
      if (local_88 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_88 + 1) = (int)local_88[1] + 1;
        UNLOCK();
      }
      if (local_70 != '\0') {
        local_80 = (undefined4)local_188;
        uStack_7c = local_188._4_4_;
        uStack_78 = (undefined4)uStack_180;
        uStack_74 = uStack_180._4_4_;
      }
      if (*(char *)((longlong)local_90 + 0x3a) == '\x01') {
        (**(code **)(*local_90 + 0x38))(local_90,&local_188,&local_c8,&local_338);
      }
      else {
        local_188 = (undefined *)((ulonglong)local_188 & 0xffffffffffffff00);
        local_168 = 0;
        uStack_180 = (longlong **)0x0;
        uStack_178 = 0;
        memset(local_160,0,0x88);
        local_d8 = 0x20702;
        local_d4 = 0;
      }
      FUN_1402c173a(&local_188,&local_90);
      FUN_1402c17c2(local_2f8,&local_188);
      FUN_14493db24(&local_188);
      local_3c0 = local_330._4_4_;
      local_3c8 = 0;
      FUN_1402c1d72(param_1,lVar19,local_2f8,lVar19);
      plVar14 = local_88;
      if (local_70 == '\x01') {
        local_70 = '\0';
      }
      if (local_88 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_88 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_88)(local_88);
          LOCK();
          piVar2 = (int *)((longlong)plVar14 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar14 + 0x10))(plVar14);
          }
        }
      }
      lVar12 = lVar12 + 0x14;
      lVar17 = lVar17 + 0x48;
    } while (local_2f8[0] != '\x01');
    plVar14 = local_308;
    local_338 = &PTR_FUN_149eda6d0;
    if (local_308 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_308 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_308)(local_308);
        LOCK();
        piVar2 = (int *)((longlong)plVar14 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar14 + 0x10))(plVar14);
        }
      }
    }
    lVar12 = local_3a0;
    plVar14 = local_3b0;
    if (local_3b0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_3b0 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_3b0)(local_3b0);
        LOCK();
        piVar2 = (int *)((longlong)plVar14 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar14 + 0x10))(plVar14);
        }
      }
    }
    FUN_1403d4924(&local_240,local_2f8);
    FUN_14493db24(local_2f8);
    if ((byte)local_240 == 0) {
      local_378 = local_3a8[2];
      local_388 = *local_3a8;
      lStack_380 = local_3a8[1];
      local_318 = *(undefined8 *)(lVar12 + 0x20);
      local_310 = *(undefined8 *)(lVar12 + 0x28);
      local_3a8 = *(longlong **)(lVar12 + 0x30);
      if (local_3a8 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_3a8 + 1) = (int)local_3a8[1] + 1;
        UNLOCK();
      }
      local_300 = *(undefined8 *)(lVar12 + 0x38);
      uVar7 = *(uint *)(lVar19 + 0x130);
      uVar18 = (ulonglong)uVar7;
      local_338 = &PTR_FUN_149eda6d0;
      if (local_3a8 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_3a8 + 1) = (int)local_3a8[1] + 1;
        UNLOCK();
      }
      local_2f8[0] = '\0';
      local_2d8 = 0;
      local_2f0 = 0;
      uStack_2e8 = 0;
      local_3b0 = param_1;
      local_330 = local_388;
      lStack_328 = lStack_380;
      local_320 = local_378;
      local_308 = local_3a8;
      memset(local_2d0,0,0x88);
      local_248 = 0x20702;
      local_244 = 0;
      local_320 = lVar19;
      if (0 < (int)uVar7) {
        lVar12 = uVar18 * 0x48 + -8;
        lVar17 = uVar18 * 0x14 + -4;
        do {
          local_70 = *(char *)(*(longlong *)(lVar19 + 0x150) + lVar17);
          if (local_70 == '\x01') {
            lVar20 = *(longlong *)(lVar19 + 0x150) + lVar17;
            local_188 = *(undefined **)(lVar20 + -0x10);
            uStack_180 = *(longlong ***)(lVar20 + -8);
          }
          lVar20 = *(longlong *)(lVar19 + 0x128);
          if (*(longlong *)(lVar19 + 0x128) == 0) {
            lVar20 = local_398;
          }
          local_98 = *(undefined8 *)(lVar20 + -0x10 + lVar12);
          puVar4 = (undefined4 *)(lVar20 + -0x40 + lVar12);
          local_c8 = *puVar4;
          uStack_c4 = puVar4[1];
          uStack_c0 = puVar4[2];
          uStack_bc = puVar4[3];
          puVar5 = (undefined8 *)(lVar20 + -0x30 + lVar12);
          local_b8 = *puVar5;
          uStack_b0 = puVar5[1];
          puVar4 = (undefined4 *)(lVar20 + -0x20 + lVar12);
          local_a8 = *puVar4;
          uStack_a4 = puVar4[1];
          uStack_a0 = puVar4[2];
          uStack_9c = puVar4[3];
          local_90 = *(longlong **)(lVar20 + -8 + lVar12);
          local_88 = *(longlong **)(lVar20 + lVar12);
          if (local_88 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_88 + 1) = (int)local_88[1] + 1;
            UNLOCK();
          }
          if (local_70 != '\0') {
            local_80 = (undefined4)local_188;
            uStack_7c = local_188._4_4_;
            uStack_78 = (undefined4)uStack_180;
            uStack_74 = uStack_180._4_4_;
          }
          if (*(char *)((longlong)local_90 + 0x3a) == '\x01') {
            (**(code **)(*local_90 + 0x40))(local_90,&local_188,&local_c8,&local_338);
          }
          else {
            local_188 = (undefined *)((ulonglong)local_188 & 0xffffffffffffff00);
            local_168 = 0;
            uStack_180 = (longlong **)0x0;
            uStack_178 = 0;
            memset(local_160,0,0x88);
            local_d8 = 0x20702;
            local_d4 = 0;
          }
          FUN_1402c173a(&local_188,&local_90);
          FUN_1402c17c2(local_2f8,&local_188);
          FUN_14493db24(&local_188);
          local_3c0 = local_330._4_4_;
          local_3c8 = 0;
          FUN_1402c1d72(local_3b0,lVar19,local_2f8,lVar19);
          plVar14 = local_88;
          if (local_70 == '\x01') {
            local_70 = '\0';
          }
          if (local_88 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_88 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*local_88)(local_88);
              LOCK();
              piVar2 = (int *)((longlong)plVar14 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar14 + 0x10))(plVar14);
              }
            }
          }
          if (uVar18 < 2) break;
          lVar12 = lVar12 + -0x48;
          lVar17 = lVar17 + -0x14;
          uVar18 = uVar18 - 1;
        } while (local_2f8[0] == '\0');
      }
      plVar14 = local_308;
      local_338 = &PTR_FUN_149eda6d0;
      if (local_308 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_308 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_308)(local_308);
          LOCK();
          piVar2 = (int *)((longlong)plVar14 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar14 + 0x10))(plVar14);
          }
        }
      }
      lVar12 = local_3a0;
      plVar14 = local_3a8;
      param_1 = local_3b0;
      if (local_3a8 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_3a8 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_3a8)(local_3a8);
          LOCK();
          piVar2 = (int *)((longlong)plVar14 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar14 + 0x10))(plVar14);
          }
        }
      }
      FUN_1403d4924(&local_240,local_2f8);
      FUN_14493db24(local_2f8);
    }
    pcVar15 = local_2f8;
    if ((((((byte)local_240 & 1) == 0) && ((int)param_1[0x9a] != 0)) &&
        ((longlong *)param_1[0x99] != (longlong *)0x0)) &&
       (cVar11 = (**(code **)(*(longlong *)param_1[0x99] + 0x30))(), cVar11 != '\0')) {
      if ((int)param_1[0x9a] == 0) {
        plVar14 = (longlong *)0x0;
      }
      else {
        plVar14 = (longlong *)param_1[0x99];
      }
      (**(code **)(*plVar14 + 0x58))(plVar14,&local_188,lVar12);
      FUN_1403d4924(&local_240,&local_188);
      FUN_14493db24(&local_188);
    }
    plVar14 = local_390;
    if (local_390 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_390 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_390)(local_390);
        LOCK();
        piVar2 = (int *)((longlong)plVar14 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar14 + 0x10))(plVar14);
        }
      }
    }
  }
  else {
    pcVar8 = *(char **)(param_2 + 0x20);
    plVar14 = *(longlong **)(param_2 + 0x30);
    pcVar9 = DAT_14c964dd0;
    if (plVar14 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
      pcVar15 = DAT_14c964dd0;
      UNLOCK();
      LOCK();
      plVar1 = plVar14 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      pcVar9 = pcVar15;
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar14)(plVar14);
        LOCK();
        piVar2 = (int *)((longlong)plVar14 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar14 + 0x10))(plVar14);
        }
      }
    }
    if (pcVar8 != pcVar9) goto LAB_1409f0116;
    FUN_1469b781a(local_348);
    local_188 = (undefined *)CONCAT71(local_188._1_7_,1);
    local_168 = 0;
    uStack_180 = (longlong **)0x0;
    uStack_178 = 0;
    memset(local_160,0,0x88);
    local_d8 = 0x20702;
    local_d4 = 0;
    FUN_1403d4924(&local_240,&local_188);
    FUN_14493db24(&local_188);
  }
  pcVar15 = (char *)CONCAT71((int7)((ulonglong)pcVar15 >> 8),(byte)local_240);
  FUN_14493db24();
LAB_1409f09aa:
  plVar14 = local_340;
  if (local_340 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_340 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_340)(local_340);
      LOCK();
      piVar2 = (int *)((longlong)plVar14 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar14 + 0x10))(plVar14);
      }
    }
  }
  *(int *)(param_1 + 199) = (int)param_1[199] + -1;
  if ((local_60 ^ (ulonglong)auStack_3e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return (ulonglong)pcVar15 & 0xffffffff;
}



// FUNCTION 1409f0a6c FUN_1409f0a6c body=358 status=ok
// SIG undefined FUN_1409f0a6c(void)

void FUN_1409f0a6c(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [47];
  undefined1 local_39;
  uint local_38;
  int local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1409f0fb8(param_1,&local_38);
  if (((local_34 != 0) && (-1 < (int)local_38)) && ((int)local_38 < DAT_14c9647dc)) {
    lVar3 = (ulonglong)((local_38 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_38 >> 0x10) * 8);
    if (((lVar3 != 0) && (*(int *)(lVar3 + 0x10) == local_34)) &&
       ((*(uint *)(lVar3 + 8) & 0x10200000) == 0)) {
      plVar1 = (longlong *)FUN_1409f0ca6();
      plVar1 = (longlong *)(**(code **)(*plVar1 + 0x40))(plVar1,param_2);
      if ((plVar1 != (longlong *)0x0) && ((longlong)(int)plVar1[1] != 0)) {
        lVar3 = *plVar1;
        lVar4 = (longlong)(int)plVar1[1] * 0x28;
        do {
          if ((local_34 == 0) || ((int)local_38 < 0)) {
LAB_1409f0bce:
            lVar5 = 0;
          }
          else {
            lVar5 = 0;
            if ((int)local_38 < DAT_14c9647dc) {
              plVar1 = (longlong *)
                       ((ulonglong)((local_38 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_38 >> 0x10) * 8));
              if (((plVar1 == (longlong *)0x0) || ((int)plVar1[2] != local_34)) ||
                 ((*(uint *)(plVar1 + 1) & 0x10200000) != 0)) goto LAB_1409f0bce;
              lVar5 = *plVar1;
            }
          }
          local_39 = 1;
          uVar2 = FUN_1409f0d56(lVar3);
          (**(code **)(*(longlong *)(lVar5 + 0x30) + 0xa0))(lVar5 + 0x30,uVar2,&local_39);
          lVar3 = lVar3 + 0x28;
          lVar4 = lVar4 + -0x28;
        } while (lVar4 != 0);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1409f0bd4 FUN_1409f0bd4 body=210 status=ok
// SIG undefined FUN_1409f0bd4(void)

longlong * FUN_1409f0bd4(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
  int iVar8;
  
  plVar3 = (longlong *)FUN_14142a730();
  lVar4 = plVar3[0x22];
  if (lVar4 == 0) {
    (**(code **)(*plVar3 + 1000))(plVar3);
    lVar4 = plVar3[0x22];
  }
  if (*(int *)(lVar4 + 0x50) != *(int *)(lVar4 + 0x7c)) {
    lVar1 = *param_2;
    uVar2 = (uint)((ulonglong)lVar1 >> 0x10);
    uVar7 = (uint)lVar1 & 0xffff;
    lVar5 = lVar4 + 0x80;
    if (*(longlong *)(lVar4 + 0x88) != 0) {
      lVar5 = *(longlong *)(lVar4 + 0x88);
    }
    iVar8 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)(lVar4 + 0x90) - 1U &
                             (int)((ulonglong)lVar1 >> 0x20) + ((uint)lVar1 << 0x10 | uVar7) +
                             (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar7 >> 4)) * 4);
    if (iVar8 != -1) {
      do {
        plVar3 = (longlong *)(*(longlong *)(lVar4 + 0x48) + (longlong)iVar8 * 0x28);
        if (*plVar3 == lVar1) goto LAB_1409f0c8a;
        iVar8 = (int)plVar3[4];
      } while (iVar8 != -1);
    }
  }
  plVar3 = (longlong *)0x0;
LAB_1409f0c8a:
  plVar6 = plVar3 + 1;
  if (plVar3 == (longlong *)0x0) {
    plVar6 = (longlong *)0x0;
  }
  plVar3 = (longlong *)0x0;
  if (*(char *)((longlong)plVar6 + 0x14) == '\0') {
    plVar3 = plVar6;
  }
  return plVar3;
}



// FUNCTION 1409f0ca6 FUN_1409f0ca6 body=175 status=ok
// SIG undefined FUN_1409f0ca6(void)

undefined8 FUN_1409f0ca6(void)

{
  undefined8 uVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb91628) {
    FUN_144b3d300(&DAT_14cb91628);
    if (DAT_14cb91628 == -1) {
      FUN_1446ddc76(&local_18,"GbxEnhancedInput",1);
      uVar1 = FUN_144a52528();
      DAT_14cb91620 = FUN_14493e38c(uVar1,local_18);
      _Init_thread_footer(&DAT_14cb91628);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return DAT_14cb91620;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1409f0d56 FUN_1409f0d56 body=380 status=ok
// SIG undefined FUN_1409f0d56(void)

longlong FUN_1409f0d56(uint *param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
  bool bVar8;
  
  if (((((param_1[1] == 0) || (uVar3 = *param_1, (int)uVar3 < 0)) || (DAT_14c9647dc <= (int)uVar3))
      || ((plVar6 = (longlong *)
                    ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
          plVar6 == (longlong *)0x0 || (*(uint *)(plVar6 + 2) != param_1[1])))) ||
     (((*(uint *)(plVar6 + 1) & 0x10200000) != 0 || (lVar5 = *plVar6, lVar5 == 0)))) {
    if (*(longlong *)(param_1 + 2) == 0) {
      return 0;
    }
    lVar5 = FUN_140007850();
    cVar2 = (*(code *)PTR_FUN_14c758760)();
    if ((lVar5 == 0) || (cVar2 == '\0')) {
      if (lVar5 == 0) {
        param_1[0] = 0;
        param_1[1] = 0;
        return 0;
      }
      uVar3 = *(uint *)(lVar5 + 0xc);
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
        uVar7 = DAT_14c964868 + 1;
        bVar8 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar1;
        if (bVar8) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        uVar7);
        }
        LOCK();
        uVar3 = *(uint *)(lVar4 + 0x10);
        bVar8 = uVar3 == 0;
        if (bVar8) {
          *(uint *)(lVar4 + 0x10) = uVar7;
          uVar3 = 0;
        }
        UNLOCK();
        if (bVar8) {
          uVar3 = uVar7;
        }
      }
      param_1[1] = uVar3;
    }
    else {
      uVar3 = *(uint *)(lVar5 + 0xc);
      if ((int)uVar3 < DAT_14c9647dc) {
        lVar4 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
      }
      else {
        lVar4 = 0;
      }
      if ((*(uint *)(lVar4 + 8) & 0x8400000) == 0) {
        FUN_14485c47a(param_1,lVar5);
      }
    }
    if ((*(uint *)(lVar5 + 8) >> 0x1e & 1) != 0) {
      return 0;
    }
  }
  lVar4 = FUN_1409f0ed2();
  if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
      lVar4 + 0x30)) {
    return lVar5;
  }
  return 0;
}



// FUNCTION 1409f0ed2 FUN_1409f0ed2 body=228 status=ok
// SIG undefined FUN_1409f0ed2(void)

longlong FUN_1409f0ed2(void)

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
  if (DAT_14cb27260 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e9e4fe;
    local_38 = &LAB_147f9e524;
    local_40 = FUN_14181c66a;
    local_48 = L"Input";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0x50;
    FUN_14081cfa3(L"/Script/EnhancedInput",L"InputMappingContext",&DAT_14cb27260,FUN_14644d130);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb27260;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1409f0fb8 FUN_1409f0fb8 body=1021 status=ok
// SIG undefined FUN_1409f0fb8(void)

uint * FUN_1409f0fb8(longlong param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  bool bVar10;
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
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (((*(uint *)(param_1 + 8) & 0x10) == 0) && (*(longlong *)(param_1 + 0x20) != 0)) {
    uVar2 = *(uint *)(*(longlong *)(param_1 + 0x20) + 0xc);
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar9 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar9 = 0;
    }
    iVar1 = *(int *)(lVar9 + 0x10);
    if (iVar1 == 0) {
      LOCK();
      iVar1 = DAT_14c964868 + 1;
      UNLOCK();
      iVar8 = DAT_14c964868 + 1;
      bVar10 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar1;
      if (bVar10) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar8);
      }
      LOCK();
      iVar1 = *(int *)(lVar9 + 0x10);
      bVar10 = iVar1 == 0;
      if (bVar10) {
        *(int *)(lVar9 + 0x10) = iVar8;
        iVar1 = 0;
      }
      UNLOCK();
      if (bVar10) {
        iVar1 = iVar8;
      }
      if (iVar1 == 0) goto LAB_1409f120c;
    }
    if ((((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) &&
        (plVar4 = (longlong *)
                  ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
        plVar4 != (longlong *)0x0)) &&
       (((int)plVar4[2] == iVar1 && ((*(uint *)(plVar4 + 1) & 0x10200000) == 0)))) {
      if ((*(uint *)(plVar4 + 1) & 0x10200000) == 0) {
        lVar9 = *plVar4;
      }
      else {
        lVar9 = 0;
      }
      lVar3 = *(longlong *)(lVar9 + 0x430);
      if (lVar3 == 0) {
LAB_1409f1243:
        param_2[1] = 0;
LAB_1409f124e:
        *param_2 = 0;
        uVar2 = 0;
      }
      else {
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
          lVar3 = *(longlong *)(lVar9 + 0x430);
          if (lVar3 == 0) goto LAB_1409f1243;
        }
        if (((DAT_14cae9568 == 0) || (lVar9 = *(longlong *)(lVar3 + 0x10), lVar9 == 0)) ||
           ((*(int *)(lVar9 + 0x38) < *(int *)(DAT_14cae9568 + 0x38) ||
            (*(longlong *)
              (*(longlong *)(lVar9 + 0x30) + (longlong)*(int *)(DAT_14cae9568 + 0x38) * 8) !=
             DAT_14cae9568 + 0x30)))) goto LAB_1409f1243;
        uVar2 = *(uint *)(lVar3 + 0xc);
        if ((int)uVar2 < DAT_14c9647dc) {
          lVar9 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
        }
        else {
          lVar9 = 0;
        }
        iVar1 = *(int *)(lVar9 + 0x10);
        if (iVar1 == 0) {
          LOCK();
          iVar1 = DAT_14c964868 + 1;
          UNLOCK();
          iVar8 = DAT_14c964868 + 1;
          bVar10 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar1;
          if (bVar10) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar8);
          }
          LOCK();
          iVar1 = *(int *)(lVar9 + 0x10);
          bVar10 = iVar1 == 0;
          if (bVar10) {
            *(int *)(lVar9 + 0x10) = iVar8;
            iVar1 = 0;
          }
          UNLOCK();
          if (bVar10) {
            iVar1 = iVar8;
          }
          if (iVar1 == 0) goto LAB_1409f1243;
        }
        if (((((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) ||
            (puVar5 = (undefined8 *)
                      ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
            puVar5 == (undefined8 *)0x0)) ||
           ((*(int *)(puVar5 + 2) != iVar1 || ((*(uint *)(puVar5 + 1) & 0x10200000) != 0))))
        goto LAB_1409f1243;
        if ((*(uint *)(puVar5 + 1) & 0x10200000) == 0) {
          uVar6 = *puVar5;
        }
        else {
          uVar6 = 0;
        }
        lVar9 = FUN_1400b6e86(uVar6);
        param_2[1] = 0;
        if (lVar9 == 0) goto LAB_1409f124e;
        uVar2 = *(uint *)(lVar9 + 0xc);
        *param_2 = uVar2;
        if ((int)uVar2 < DAT_14c9647dc) {
          lVar9 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
        }
        else {
          lVar9 = 0;
        }
        uVar2 = *(uint *)(lVar9 + 0x10);
        if (*(uint *)(lVar9 + 0x10) == 0) {
          LOCK();
          iVar1 = DAT_14c964868 + 1;
          UNLOCK();
          uVar7 = DAT_14c964868 + 1;
          bVar10 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar1;
          if (bVar10) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,uVar7);
          }
          LOCK();
          uVar2 = *(uint *)(lVar9 + 0x10);
          bVar10 = uVar2 == 0;
          if (bVar10) {
            *(uint *)(lVar9 + 0x10) = uVar7;
            uVar2 = 0;
          }
          UNLOCK();
          if (bVar10) {
            uVar2 = uVar7;
          }
        }
      }
      param_2[1] = uVar2;
      goto LAB_1409f1258;
    }
  }
LAB_1409f120c:
  param_2[0] = 0;
  param_2[1] = 0;
LAB_1409f1258:
  if ((local_28 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1409f13bc FUN_1409f13bc body=1034 status=ok
// SIG undefined FUN_1409f13bc(void)

/* WARNING: Removing unreachable block (ram,0x0001409f14f8) */

void FUN_1409f13bc(longlong param_1)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  float local_98;
  float fStack_94;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (*(char *)(param_1 + 0x358) == '\x01') {
    *(float *)(param_1 + 0x354) =
         ((*(float *)(param_1 + 0x338) + 1.0) / (1.0 - *(float *)(param_1 + 0x33c))) *
         *(float *)(param_1 + 0x348) * (*(float *)(param_1 + 0x34c) + *(float *)(param_1 + 0x340)) +
         *(float *)(param_1 + 0x344);
    *(undefined1 *)(param_1 + 0x358) = 0;
LAB_1409f14b6:
    fVar7 = *(float *)(param_1 + 0x354);
  }
  else {
    if (*(char *)(param_1 + 0x358) == '\0') goto LAB_1409f14b6;
    fVar7 = ((*(float *)(param_1 + 0x338) + 1.0) / (1.0 - *(float *)(param_1 + 0x33c))) *
            *(float *)(param_1 + 0x348) *
            (*(float *)(param_1 + 0x34c) + *(float *)(param_1 + 0x340)) +
            *(float *)(param_1 + 0x344);
    *(float *)(param_1 + 0x354) = fVar7;
    *(undefined1 *)(param_1 + 0x358) = 0;
  }
  if (*(longlong *)(param_1 + 0x488) == 0) goto LAB_1409f1774;
  if (*(char *)(param_1 + 0x4d8) == '\0') {
LAB_1409f167a:
    lVar6 = FUN_1402179b4(param_1 + 0x4a8);
    if (lVar6 == 0) goto LAB_1409f1774;
    local_b8 = *(undefined8 *)(param_1 + 0x4a8);
    local_b0 = *(undefined4 *)(param_1 + 0x4b0);
    local_a8 = 0;
    local_a0 = *(undefined8 *)(param_1 + 0x4c0);
    local_98 = fVar7;
    fStack_94 = fVar7;
    FUN_143d059b0(*(longlong *)(param_1 + 0x488) + 0x270,param_1,&local_b8);
    fVar8 = fStack_94;
    iVar2 = *(int *)(param_1 + 1000);
    lVar6 = (longlong)iVar2;
    *(uint *)(param_1 + 1000) = iVar2 + 1U;
    if (*(uint *)(param_1 + 0x3ec) < iVar2 + 1U) {
      FUN_1457c4dd2((longlong *)(param_1 + 0x3e0),iVar2);
    }
    lVar4 = *(longlong *)(param_1 + 0x3e0);
    *(undefined8 *)(lVar4 + lVar6 * 0x28) = local_b8;
    *(undefined4 *)(lVar4 + 8 + lVar6 * 0x28) = local_b0;
    *(undefined8 *)(lVar4 + 0x10 + lVar6 * 0x28) = 0;
    *(undefined8 *)(lVar4 + 0x18 + lVar6 * 0x28) = local_a0;
    *(ulonglong *)(lVar4 + 0x20 + lVar6 * 0x28) = CONCAT44(fStack_94,local_98);
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x4d0);
    if ((int)uVar1 < 1) goto LAB_1409f167a;
    fVar9 = fVar7 / (float)(int)uVar1;
    puVar5 = *(undefined8 **)(param_1 + 0x4c8);
    lVar6 = (ulonglong)uVar1 << 5;
    fVar8 = 0.0;
    do {
      lVar4 = FUN_1402179b4(puVar5);
      if (lVar4 != 0) {
        *(undefined8 *)(param_1 + 0x338) = 0;
        *(undefined8 *)(param_1 + 0x340) = 0;
        *(undefined4 *)(param_1 + 0x348) = 0x3f800000;
        *(float *)(param_1 + 0x34c) = fVar9;
        *(float *)(param_1 + 0x354) = fVar9;
        *(undefined1 *)(param_1 + 0x350) = 1;
        *(undefined1 *)(param_1 + 0x358) = 0;
        local_b8 = *puVar5;
        local_b0 = *(undefined4 *)(puVar5 + 1);
        local_a8 = 0;
        local_a0 = puVar5[3];
        local_98 = fVar9;
        fStack_94 = fVar9;
        FUN_143d059b0(*(longlong *)(param_1 + 0x488) + 0x270,param_1,&local_b8);
        fVar8 = fVar8 + fStack_94;
        iVar2 = *(int *)(param_1 + 1000);
        lVar4 = (longlong)iVar2;
        *(uint *)(param_1 + 1000) = iVar2 + 1U;
        if (*(uint *)(param_1 + 0x3ec) < iVar2 + 1U) {
          FUN_1457c4dd2((longlong *)(param_1 + 0x3e0),iVar2);
        }
        lVar3 = *(longlong *)(param_1 + 0x3e0);
        *(undefined8 *)(lVar3 + lVar4 * 0x28) = local_b8;
        *(undefined4 *)(lVar3 + 8 + lVar4 * 0x28) = local_b0;
        *(undefined8 *)(lVar3 + 0x10 + lVar4 * 0x28) = 0;
        *(undefined8 *)(lVar3 + 0x18 + lVar4 * 0x28) = local_a0;
        *(ulonglong *)(lVar3 + 0x20 + lVar4 * 0x28) = CONCAT44(fStack_94,local_98);
      }
      puVar5 = puVar5 + 4;
      lVar6 = lVar6 + -0x20;
    } while (lVar6 != 0);
  }
  *(float *)(param_1 + 0x38c) = fVar7 - fVar8;
  *(undefined8 *)(param_1 + 0x338) = 0;
  *(undefined8 *)(param_1 + 0x340) = 0;
  *(undefined4 *)(param_1 + 0x348) = 0x3f800000;
  *(float *)(param_1 + 0x34c) = fVar8;
  *(float *)(param_1 + 0x354) = fVar8;
  *(undefined1 *)(param_1 + 0x350) = 1;
  *(undefined1 *)(param_1 + 0x358) = 0;
LAB_1409f1774:
  if ((local_90 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1409f17c8 FUN_1409f17c8 body=291 status=ok
// SIG undefined FUN_1409f17c8(void)

void FUN_1409f17c8(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  if ((longlong)*(int *)(param_2 + 0xd0) != 0) {
    plVar2 = *(longlong **)(param_2 + 200);
    lVar3 = (longlong)*(int *)(param_2 + 0xd0) << 6;
    do {
      if ((*(longlong *)(*plVar2 + 8) == param_1) && ((int)plVar2[6] < *(int *)(plVar2[1] + 0xdc)))
      {
        if (*(char *)((longlong)plVar2 + 0x3c) == '\x01') {
          lVar1 = 0x18;
        }
        else {
          if (*(char *)((longlong)plVar2 + 0x3c) != '\x02') goto LAB_1409f1806;
          lVar1 = 0x58;
        }
        FUN_1409f18ec(lVar1 + param_1,plVar2);
      }
LAB_1409f1806:
      plVar2 = plVar2 + 8;
      lVar3 = lVar3 + -0x40;
    } while (lVar3 != 0);
  }
  if ((longlong)*(int *)(param_2 + 0x158) != 0) {
    plVar2 = *(longlong **)(param_2 + 0x150);
    lVar3 = (longlong)*(int *)(param_2 + 0x158) << 6;
    do {
      if ((*(longlong *)(*plVar2 + 8) == param_1) && ((int)plVar2[6] < *(int *)(plVar2[1] + 0xdc)))
      {
        if (*(char *)((longlong)plVar2 + 0x3c) == '\x01') {
          lVar1 = 0x18;
        }
        else {
          if (*(char *)((longlong)plVar2 + 0x3c) != '\x02') goto LAB_1409f186b;
          lVar1 = 0x58;
        }
        FUN_1409f18ec(lVar1 + param_1,plVar2);
      }
LAB_1409f186b:
      plVar2 = plVar2 + 8;
      lVar3 = lVar3 + -0x40;
    } while (lVar3 != 0);
  }
  if (*(int *)(param_1 + 0x60) == 0) {
    lVar3 = -0x8000000000000000;
  }
  else {
    lVar3 = (longlong)
            *(int *)(*(longlong *)
                      (*(longlong *)(param_1 + 0x58) + (longlong)(*(int *)(param_1 + 0x60) + -1) * 8
                      ) + 0x18);
  }
  LOCK();
  *(longlong *)(param_1 + 0x70) = lVar3;
  UNLOCK();
                    /* WARNING: Could not recover jumptable at 0x0001409f18d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  return;
}



// FUNCTION 1409f18ec FUN_1409f18ec body=367 status=ok
// SIG undefined FUN_1409f18ec(void)

void FUN_1409f18ec(longlong *param_1,longlong param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong *plVar8;
  int iVar9;
  longlong *plVar10;
  uint uVar11;
  longlong lVar12;
  longlong *plVar13;
  uint uVar14;
  
  plVar8 = (longlong *)(param_2 + 0x18);
  lVar6 = *(longlong *)(param_2 + 0x18);
  lVar3 = *(longlong *)(param_2 + 0x20);
  if ((lVar6 != 0) && (lVar3 != 0)) {
    *plVar8 = 0;
    *(undefined8 *)(param_2 + 0x20) = 0;
    *(longlong *)(lVar6 + 0x20) = lVar3;
    *(longlong *)(lVar3 + 0x18) = lVar6;
    goto LAB_1409f1928;
  }
  uVar2 = *(uint *)(param_1 + 1);
  if ((int)uVar2 < 1) {
    uVar11 = 0;
LAB_1409f1a53:
    lVar12 = 0;
  }
  else {
    uVar11 = 0;
    uVar14 = uVar2;
    do {
      uVar1 = (uVar14 >> 1) + uVar11;
      if (*(int *)(*(longlong *)(*param_1 + (ulonglong)uVar1 * 8) + 0x18) < *(int *)(param_2 + 0x30)
         ) {
        uVar11 = uVar1 + (uVar14 & 1);
      }
      bVar5 = 1 < uVar14;
      uVar14 = uVar14 >> 1;
    } while (bVar5);
    if ((int)uVar2 <= (int)uVar11) goto LAB_1409f1a53;
    lVar4 = *(longlong *)(*param_1 + (ulonglong)uVar11 * 8);
    lVar12 = 0;
    if (*(int *)(lVar4 + 0x18) == *(int *)(param_2 + 0x30)) {
      lVar12 = lVar4;
    }
  }
  plVar10 = (longlong *)(lVar12 + 8);
  if (lVar6 != 0) {
    plVar10 = (longlong *)(lVar6 + 0x20);
  }
  *plVar8 = 0;
  *(undefined8 *)(param_2 + 0x20) = 0;
  plVar13 = (longlong *)(lVar12 + 0x10);
  if (lVar3 != 0) {
    plVar13 = (longlong *)(lVar3 + 0x18);
  }
  *plVar10 = lVar3;
  *plVar13 = lVar6;
  if (*(longlong *)(lVar12 + 8) == 0) {
    uVar7 = (ulonglong)uVar11;
    plVar10 = *(longlong **)(*param_1 + uVar7 * 8);
    *plVar10 = param_1[2];
    param_1[2] = (longlong)plVar10;
    iVar9 = (int)param_1[1];
    if (~uVar11 + iVar9 != 0) {
      memmove((void *)(*param_1 + uVar7 * 8),(void *)(*param_1 + uVar7 * 8 + 8),
              (longlong)(int)(~uVar11 + iVar9) << 3);
      iVar9 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar9 + -1;
  }
LAB_1409f1928:
  *(undefined4 *)(param_2 + 0x30) = param_3;
  lVar6 = FUN_1400eea42(param_1,param_3);
  plVar10 = (longlong *)(lVar6 + 0x10);
  if (*(longlong *)(lVar6 + 8) == 0) {
    plVar8 = (longlong *)(lVar6 + 8);
  }
  else {
    lVar6 = *plVar10;
    *plVar8 = lVar6;
    plVar8 = plVar10;
    plVar10 = (longlong *)(lVar6 + 0x20);
  }
  *plVar10 = param_2;
  *plVar8 = param_2;
  return;
}



// FUNCTION 1409f1a5c FUN_1409f1a5c body=335 status=ok
// SIG undefined FUN_1409f1a5c(void)

undefined8 * FUN_1409f1a5c(ulonglong *param_1,undefined8 param_2,undefined4 param_3)

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
              0x110) < DAT_14c951d78) {
    FUN_144b3d300(&DAT_14c951d78);
    if (DAT_14c951d78 == -1) {
      FUN_14475b26a();
      local_40 = FUN_1409f1a5c;
      local_48 = &DAT_14c9520b8;
      local_50 = 0;
      local_58 = 0x1008041;
      FUN_14000176a(&DAT_14c951d28,L"FByteProperty",0x40,0);
      atexit(FUN_14281201f);
      _Init_thread_footer(&DAT_14c951d78);
    }
  }
  puVar1[1] = &DAT_14c951d28;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x1c) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x24) = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  *puVar1 = &PTR_LAB_149e6f1c0;
  local_30 = *param_1;
  if ((((local_30 & 1) != 0) && ((local_30 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')
     ) {
    FUN_1456cec3c();
  }
  FUN_1409f1bac(puVar1,&local_30,param_2,param_3);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1409f1bac FUN_1409f1bac body=226 status=ok
// SIG undefined FUN_1409f1bac(void)

undefined8 *
FUN_1409f1bac(undefined8 *param_1,ulonglong *param_2,undefined8 param_3,undefined4 param_4)

{
  ulonglong uVar1;
  undefined1 auStack_58 [32];
  ulonglong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = *param_2;
  local_38 = uVar1;
  if (((uVar1 & 1) != 0) && (uVar1 = uVar1 & 0xfffffffffffffffe, uVar1 != 0)) {
    if (DAT_14c950c29 == 1) {
      FUN_1456cec3c(uVar1);
    }
    if (DAT_14c950c29 == 1) {
      FUN_1456cec3c(uVar1);
    }
    if ((DAT_14c950c29 & 1) != 0) {
      FUN_1456cec3c(uVar1);
    }
    if ((DAT_14c950c29 & 1) != 0) {
      FUN_1456cec3c(uVar1);
    }
  }
  FUN_1405ebf1c(param_1,&local_38,param_3,param_4);
  *(undefined4 *)((longlong)param_1 + 0x34) = 1;
  *param_1 = &PTR_LAB_149e6f1c0;
  param_1[0xe] = 0;
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1409f1c90 FUN_1409f1c90 body=1974 status=ok
// SIG undefined FUN_1409f1c90(void)

void FUN_1409f1c90(longlong param_1,float param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  bool bVar12;
  byte bVar13;
  int iVar14;
  longlong *plVar15;
  double *pdVar16;
  longlong lVar17;
  longlong lVar18;
  undefined8 uVar19;
  longlong lVar20;
  uint uVar21;
  int iVar22;
  undefined8 *puVar23;
  longlong lVar24;
  undefined8 *puVar25;
  float fVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  float fVar29;
  undefined1 auStack_208 [32];
  undefined4 local_1e8;
  undefined4 local_1e0;
  undefined4 local_1d8;
  undefined8 local_1d0;
  wchar_t *local_1c8;
  undefined1 *local_1c0;
  undefined1 *local_1b8;
  undefined8 *local_1b0;
  code *local_1a8;
  code *local_1a0;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  double local_188;
  undefined4 local_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined8 local_170;
  undefined8 local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  double local_158;
  undefined4 local_108;
  undefined8 local_100;
  longlong *local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_208;
  if (((((*(int *)(param_1 + 0x24) == 0) || (uVar7 = *(uint *)(param_1 + 0x20), (int)uVar7 < 0)) ||
       (DAT_14c9647dc <= (int)uVar7)) ||
      ((plVar15 = (longlong *)
                  ((ulonglong)((uVar7 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8)),
       plVar15 == (longlong *)0x0 || ((int)plVar15[2] != *(int *)(param_1 + 0x24))))) ||
     ((*(uint *)(plVar15 + 1) & 0x10200000) != 0)) goto LAB_1409f21dc;
  if ((*(uint *)(plVar15 + 1) & 0x10200000) == 0) {
    lVar20 = *plVar15;
  }
  else {
    lVar20 = 0;
  }
  if (*(longlong *)(lVar20 + 0x3d0) == 0) {
LAB_1409f2422:
    pdVar16 = (double *)&DAT_14c8464e0;
    uVar27 = (undefined4)DAT_14c8464f0;
    uVar28 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
  }
  else {
    if ((*(uint *)(plVar15 + 1) & 0x10200000) == 0) {
      lVar20 = *plVar15;
    }
    else {
      lVar20 = 0;
    }
    lVar20 = *(longlong *)(*(longlong *)(lVar20 + 0x3d0) + 0x1c8);
    if (lVar20 == 0) goto LAB_1409f2422;
    uVar27 = (undefined4)*(undefined8 *)(lVar20 + 0x270);
    uVar28 = (undefined4)((ulonglong)*(undefined8 *)(lVar20 + 0x270) >> 0x20);
    pdVar16 = (double *)(lVar20 + 0x260);
  }
  uVar7 = *(uint *)(param_1 + 0x408);
  if (0 < (int)uVar7) {
    lVar20 = param_1 + 0x40;
    uVar21 = 4;
    if (uVar7 < 4) {
      uVar21 = uVar7;
    }
    dVar10 = *pdVar16;
    dVar11 = pdVar16[1];
    iVar14 = *(int *)(param_1 + 0x410);
    iVar22 = uVar21 + 1;
    do {
      if (*(int *)(param_1 + 0x408) <= iVar14) {
        *(undefined4 *)(param_1 + 0x410) = 0;
        iVar14 = 0;
      }
      lVar18 = *(longlong *)(param_1 + 0x400);
      if (*(longlong *)(param_1 + 0x400) == 0) {
        lVar18 = lVar20;
      }
      lVar24 = (longlong)iVar14 * 0x78;
      puVar3 = (undefined8 *)(lVar18 + lVar24);
      fVar4 = *(float *)(lVar18 + 0x54 + lVar24);
      lVar17 = FUN_1409f2447();
      fVar5 = *(float *)(lVar17 + 0x38);
      fVar26 = *(float *)(lVar18 + 0x54 + lVar24) - param_2;
      *(float *)(lVar18 + 0x54 + lVar24) = fVar26;
      plVar15 = *(longlong **)(lVar18 + 0x10 + lVar24);
      if ((plVar15 == (longlong *)0x0) || (*(int *)((longlong)puVar3 + 0xc) == 0)) {
LAB_1409f1ebe:
        bVar13 = 0;
      }
      else {
        uVar7 = *(uint *)(puVar3 + 1);
        bVar13 = 0;
        if ((-1 < (int)uVar7) && ((int)uVar7 < DAT_14c9647dc)) {
          lVar18 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8);
          if (((lVar18 == 0) || (*(int *)(lVar18 + 0x10) != *(int *)((longlong)puVar3 + 0xc))) ||
             ((*(uint *)(lVar18 + 8) & 0x10200000) != 0)) goto LAB_1409f1ebe;
          bVar13 = (**(code **)(*plVar15 + 0x38))();
          bVar13 = bVar13 ^ 1;
          fVar26 = *(float *)((longlong)puVar3 + 0x54);
        }
      }
      if ((bVar13 != 0) || (fVar26 < 0.0)) {
        puVar23 = puVar3;
        puVar25 = &local_168;
        for (lVar18 = 0xc; lVar18 != 0; lVar18 = lVar18 + -1) {
          *puVar25 = *puVar23;
          puVar23 = puVar23 + 1;
          puVar25 = puVar25 + 1;
        }
        local_108 = *(undefined4 *)(puVar3 + 0xc);
        local_100 = puVar3[0xd];
        local_f8 = (longlong *)puVar3[0xe];
        if (local_f8 == (longlong *)0x0) {
          plVar15 = (longlong *)0x0;
        }
        else {
          LOCK();
          *(int *)(local_f8 + 1) = (int)local_f8[1] + 1;
          UNLOCK();
          plVar15 = local_f8;
        }
        FUN_145806dca(lVar20,*(undefined4 *)(param_1 + 0x410));
        FUN_145806d0c(lVar20);
        *(int *)(param_1 + 0x410) = *(int *)(param_1 + 0x410) + -1;
        FUN_145806e58(param_1,&local_168);
        if (plVar15 != (longlong *)0x0) {
          LOCK();
          plVar1 = plVar15 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*plVar15)(plVar15);
            LOCK();
            piVar2 = (int *)((longlong)plVar15 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar15 + 0x10))(plVar15);
            }
          }
        }
      }
      else {
        plVar15 = (longlong *)puVar3[2];
        bVar12 = true;
        if (((((plVar15 != (longlong *)0x0) && (*(int *)((longlong)puVar3 + 0xc) != 0)) &&
             ((uVar7 = *(uint *)(puVar3 + 1), -1 < (int)uVar7 &&
              ((((int)uVar7 < DAT_14c9647dc &&
                (lVar18 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8), lVar18 != 0
                )) && (*(int *)(lVar18 + 0x10) == *(int *)((longlong)puVar3 + 0xc))))))) &&
            ((*(uint *)(lVar18 + 8) & 0x10200000) == 0)) &&
           ((((**(code **)(*plVar15 + 0x20))(plVar15,&local_168),
             9.999999747378752e-05 < ABS((double)puVar3[3] - (double)local_168) ||
             (9.999999747378752e-05 <
              ABS((double)puVar3[4] - (double)CONCAT44(uStack_15c,uStack_160)))) ||
            (bVar12 = true, 9.999999747378752e-05 < ABS((double)puVar3[5] - local_158))))) {
          (**(code **)(*(longlong *)puVar3[2] + 0x20))((longlong *)puVar3[2],&local_180);
          puVar3[5] = local_170;
          *(undefined4 *)(puVar3 + 3) = local_180;
          *(undefined4 *)((longlong)puVar3 + 0x1c) = uStack_17c;
          *(undefined4 *)(puVar3 + 4) = uStack_178;
          *(undefined4 *)((longlong)puVar3 + 0x24) = uStack_174;
          bVar12 = false;
        }
        lVar18 = FUN_1409f2447();
        fVar26 = *(float *)(lVar18 + 0x2c);
        dVar9 = (double)puVar3[5] - (double)CONCAT44(uVar28,uVar27);
        fVar29 = (float)(dVar9 * dVar9 +
                        ((double)puVar3[3] - dVar10) * ((double)puVar3[3] - dVar10) +
                        ((double)puVar3[4] - dVar11) * ((double)puVar3[4] - dVar11));
        lVar18 = FUN_1409f2447();
        if (*(float *)(lVar18 + 0x20) * *(float *)(lVar18 + 0x20) < fVar29) {
          lVar18 = FUN_1409f2447();
          fVar26 = *(float *)(lVar18 + 0x24);
          lVar18 = FUN_1409f2447();
          if (fVar26 * fVar26 < fVar29) {
            fVar26 = *(float *)(lVar18 + 0x34);
          }
          else {
            fVar26 = *(float *)(lVar18 + 0x30);
          }
        }
        if ((fVar26 != *(float *)(puVar3 + 6)) || (NAN(fVar26) || NAN(*(float *)(puVar3 + 6)))) {
          *(float *)(puVar3 + 6) = fVar26;
          if ((fVar4 != fVar5) || (NAN(fVar4) || NAN(fVar5))) goto LAB_1409f2034;
        }
        else if (!bVar12 && fVar4 != fVar5) {
LAB_1409f2034:
          uVar19 = FUN_1409f270e(param_1,*(undefined4 *)puVar3);
          if ((*(int *)(param_1 + 0x24) == 0) || (uVar7 = *(uint *)(param_1 + 0x20), (int)uVar7 < 0)
             ) {
LAB_1409f226a:
            lVar18 = 0;
          }
          else {
            lVar18 = 0;
            if ((int)uVar7 < DAT_14c9647dc) {
              plVar15 = (longlong *)
                        ((ulonglong)((uVar7 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8));
              if (((plVar15 == (longlong *)0x0) || ((int)plVar15[2] != *(int *)(param_1 + 0x24))) ||
                 ((*(uint *)(plVar15 + 1) & 0x10200000) != 0)) goto LAB_1409f226a;
              lVar18 = *plVar15;
            }
          }
          uVar8 = *(undefined4 *)(puVar3 + 8);
          uVar6 = *(undefined4 *)(puVar3 + 6);
          local_188 = (double)puVar3[5];
          local_198 = *(undefined4 *)(puVar3 + 3);
          uStack_194 = *(undefined4 *)((longlong)puVar3 + 0x1c);
          uStack_190 = *(undefined4 *)(puVar3 + 4);
          uStack_18c = *(undefined4 *)((longlong)puVar3 + 0x24);
          if ((((longlong *)puVar3[2] == (longlong *)0x0) || (*(int *)((longlong)puVar3 + 0xc) == 0)
              ) || (uVar7 = *(uint *)(puVar3 + 1), (int)uVar7 < 0)) {
LAB_1409f2262:
            lVar17 = 0;
          }
          else {
            lVar17 = 0;
            if ((int)uVar7 < DAT_14c9647dc) {
              lVar17 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8);
              if (((lVar17 != 0) && (*(int *)(lVar17 + 0x10) == *(int *)((longlong)puVar3 + 0xc)))
                 && (((*(uint *)(lVar17 + 8) & 0x10200000) == 0 &&
                     (lVar17 = (**(code **)(*(longlong *)puVar3[2] + 8))(), lVar17 != 0)))) {
                if (DAT_14cac9ca8 == 0) {
                  local_168 = FUN_141030f22;
                  local_1a0 = FUN_14081d0ea;
                  local_1a8 = FUN_14081d0ea;
                  local_1b0 = &local_168;
                  local_1b8 = &LAB_1478c0a72;
                  local_1c0 = &LAB_1417b2375;
                  local_1c8 = L"Engine";
                  local_1d0 = 0x1000000000;
                  local_1d8 = 0x10000004;
                  local_1e0 = 8;
                  local_1e8 = 0x390;
                  FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
                }
                if ((*(int *)(DAT_14cac9ca8 + 0x38) <= *(int *)(*(longlong *)(lVar17 + 0x10) + 0x38)
                    ) && (*(longlong *)
                           (*(longlong *)(*(longlong *)(lVar17 + 0x10) + 0x30) +
                           (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) == DAT_14cac9ca8 + 0x30))
                goto LAB_1409f2171;
              }
              goto LAB_1409f2262;
            }
          }
LAB_1409f2171:
          local_158 = local_188;
          local_168 = (code *)CONCAT44(uStack_194,local_198);
          uStack_160 = uStack_190;
          uStack_15c = uStack_18c;
          local_1e8 = uVar6;
          local_1e0 = uVar8;
          FUN_1409f25ec(lVar18 + 0x34c0,uVar19,lVar17,&local_168);
        }
      }
      iVar14 = *(int *)(param_1 + 0x410) + 1;
      *(int *)(param_1 + 0x410) = iVar14;
      iVar22 = iVar22 + -1;
    } while (1 < iVar22);
  }
LAB_1409f21dc:
  if ((local_f0 ^ (ulonglong)auStack_208) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1409f2447 FUN_1409f2447 body=419 status=ok
// SIG undefined FUN_1409f2447(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_1409f2447(void)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  longlong local_20;
  undefined8 uStack_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14cbced98 == (longlong *)0x0) {
    _DAT_14cbcedb0 = 0;
    DAT_14cbceda8 = 0;
    plVar2 = &DAT_14cbceda8;
    _DAT_14cbcedb8 = 0xffffffff;
    _DAT_14cbceda0 = &PTR_FUN_14b7752d0;
    _DAT_14cbcedc0 = 0x459c4000447a0000;
    uRam000000014cbcedc8 = 0x40100000461c4000;
    _DAT_14cbcedd0 = 0x3fc00000;
    uRam000000014cbcedd4 = 0x3f400000;
    uRam000000014cbcedd8 = 0x41700000;
    uRam000000014cbceddc = 0x42480000;
    _DAT_14cbcede0 = 0x3f00000000000003;
    _DAT_14cbcede8 = 1;
    _DAT_14cbcedf0 = 0x3fe0000000000000;
    _DAT_14cbcedf8 = 0x3fe23d70a0000000;
    _DAT_14cbcee00 = 0x40400000;
    DAT_14cbced98 = (longlong *)&DAT_14cbceda0;
LAB_1409f2477:
    plVar3 = DAT_14cbced98;
    if (*plVar2 == 0) goto LAB_1409f257c;
    cVar1 = FUN_1449e3c20(DAT_14cbced98);
    if (cVar1 == '\0') goto LAB_1409f2491;
  }
  else {
    plVar2 = DAT_14cbced98 + 1;
    if ((char)DAT_14cbced98[2] == '\0') goto LAB_1409f2477;
    if ((char)DAT_14cbced98[2] == '\x02') {
      plVar2 = (longlong *)(*plVar2 + 0x30);
      goto LAB_1409f2477;
    }
LAB_1409f257c:
    plVar3 = DAT_14cbced98;
    if (DAT_14c9a17d8 == (longlong *)0x0) goto LAB_1409f2491;
    local_38 = 0;
    uStack_30 = 0;
    local_28 = 0;
    local_20 = 0;
    uStack_18 = 0;
    FUN_1446ddda2(&local_38,"def_globals_ping",0);
    if (DAT_14c9a17d8 != (longlong *)0x0) {
      (**(code **)(*DAT_14c9a17d8 + 0x2a0))(DAT_14c9a17d8,plVar3,&local_38);
    }
    if (local_20 != 0) {
      FUN_1400020a8();
    }
  }
  (**(code **)(*plVar3 + 0x20))(plVar3);
LAB_1409f2491:
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return plVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1409f25ec FUN_1409f25ec body=289 status=ok
// SIG undefined FUN_1409f25ec(void)

void FUN_1409f25ec(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4,
                  undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  bool bVar7;
  longlong lVar8;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  iVar1 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar1 + 1;
  uVar5 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar5 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar1;
  }
  else {
    bVar7 = false;
    do {
      lVar8 = uVar5 * 0x10 + -8;
      uVar6 = uVar5;
      while ((*(int *)(*param_1 + lVar8) != 0 &&
             (plVar2 = *(longlong **)(*param_1 + -8 + lVar8), plVar2 != (longlong *)0x0))) {
        local_68 = *(undefined8 *)(param_4 + 4);
        local_78 = *param_4;
        uStack_74 = param_4[1];
        uStack_70 = param_4[2];
        uStack_6c = param_4[3];
        local_80 = param_6;
        local_88 = param_5;
        cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2,param_3,&local_78);
        if (cVar4 == '\0') break;
        lVar8 = lVar8 + -0x10;
        bVar3 = uVar6 < 2;
        uVar6 = uVar6 - 1;
        if (bVar3) {
          *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
          if (!bVar7) goto LAB_1409f26bc;
          goto LAB_1409f2702;
        }
      }
      uVar5 = uVar6 - 1;
      bVar7 = true;
    } while (1 < uVar6);
    *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_1409f2702:
    FUN_14474d06a(param_1,0);
  }
LAB_1409f26bc:
  if ((local_60 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1409f270e FUN_1409f270e body=448 status=ok
// SIG undefined FUN_1409f270e(void)

longlong FUN_1409f270e(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined2 *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  code **local_50;
  undefined1 *local_48;
  code *local_40;
  code *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(int *)(param_1 + 0x24) != 0) {
    uVar1 = *(uint *)(param_1 + 0x20);
    lVar4 = 0;
    if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_1409f2808;
    plVar5 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x24) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      lVar4 = FUN_1447210f0();
      lVar4 = *(longlong *)(lVar4 + 0x178);
      if ((lVar4 != 0) && (iVar2 = *(int *)(lVar4 + 0x3b0), (longlong)iVar2 != 0)) {
        lVar3 = *(longlong *)(lVar4 + 0x3a8);
        lVar6 = 0;
        do {
          if ((*(int *)(*(longlong *)(lVar3 + lVar6) + 0x394) == param_2) &&
             (lVar4 = FUN_1409f28d0(), lVar4 != 0)) {
            if (DAT_14cbadd90 == 0) {
              local_50 = &local_38;
              local_38 = FUN_141030f22;
              local_40 = FUN_14081d0ea;
              local_48 = &LAB_1459f2e4c;
              local_58 = &LAB_148c39de3;
              local_60 = &LAB_1457a9eb2;
              local_68 = &DAT_149e063b2;
              local_70 = 0;
              local_78 = 0x10000004;
              local_80 = 0x10;
              local_88 = 0x3de0;
              FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
            }
            if ((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
                 (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30))
            goto LAB_1409f2808;
          }
          lVar6 = lVar6 + 8;
        } while ((longlong)iVar2 * 8 != lVar6);
      }
    }
  }
  lVar4 = 0;
LAB_1409f2808:
  if ((local_30 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar4;
}



// FUNCTION 1409f28d0 FUN_1409f28d0 body=270 status=ok
// SIG undefined FUN_1409f28d0(void)

longlong FUN_1409f28d0(longlong param_1)

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
  code *local_28;
  code *local_20;
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = *(longlong *)(param_1 + 0x168);
  if (lVar1 != 0) {
    if (DAT_14cad3ae0 == 0) {
      local_30 = &local_18;
      local_18 = FUN_141030f22;
      local_20 = FUN_14081d0ea;
      local_28 = FUN_142b4754c;
      local_38 = &LAB_147a36475;
      local_40 = &LAB_1463c0cc7;
      local_48 = L"Engine";
      local_50 = 0;
      local_58 = 0x10000005;
      local_60 = 8;
      local_68 = 0x428;
      FUN_14081cfa3(L"/Script/Engine",L"Controller",&DAT_14cad3ae0,FUN_1463c0ca0);
    }
    if ((*(int *)(DAT_14cad3ae0 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cad3ae0 + 0x38) * 8) == DAT_14cad3ae0 + 0x30)) goto LAB_1409f28f5;
  }
  lVar1 = 0;
LAB_1409f28f5:
  if ((local_10 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar1;
}



// FUNCTION 1409f29ec FUN_1409f29ec body=31 status=ok
// SIG undefined FUN_1409f29ec(void)

undefined8 FUN_1409f29ec(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1409f2a0c FUN_1409f2a0c body=290 status=ok
// SIG undefined FUN_1409f2a0c(void)

undefined8 FUN_1409f2a0c(longlong param_1,undefined8 param_2,undefined4 param_3)

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
    if (iVar1 == 2) goto LAB_1409f2b27;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1409f2b27;
    }
    FUN_140192332(param_1 + 0x18,&local_38,0);
  }
  else {
LAB_1409f2b27:
    local_38 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1409f2ad2;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5,param_2,param_3);
      uVar6 = 1;
      goto LAB_1409f2ad2;
    }
  }
  uVar6 = 0;
LAB_1409f2ad2:
  if ((local_38 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_38);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1409f2b8e FUN_1409f2b8e body=40 status=ok
// SIG undefined FUN_1409f2b8e(void)

undefined8 FUN_1409f2b8e(undefined8 param_1,int param_2)

{
  FUN_1409f2bb6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1409f2bb6 FUN_1409f2bb6 body=243 status=ok
// SIG undefined FUN_1409f2bb6(void)

void FUN_1409f2bb6(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b0988b0;
  param_1[0x72] = &PTR_FUN_14b098ef0;
  param_1[0x73] = &PTR_FUN_14b098f10;
  param_1[0x75] = &PTR_FUN_14b098f30;
  param_1[0x76] = &PTR_FUN_14b098f50;
  param_1[0x77] = &PTR_FUN_14b098f70;
  FUN_1404d595a(param_1 + 0x83,1);
  param_1[0x7d] = &DAT_14a171d50;
  *(undefined4 *)(param_1 + 0x80) = 0;
  if (*(int *)((longlong)param_1 + 0x404) != 0) {
    FUN_140115c12(param_1 + 0x7f,0);
  }
  param_1[0x7e] = 0;
  if (param_1[0x7f] != 0) {
    FUN_1400020a8();
  }
  param_1[0x7c] = 0;
  if (param_1[0x7a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x78] != 0) {
    FUN_1400020a8();
  }
  FUN_1402ef4ac(param_1);
  return;
}



// FUNCTION 1409f2caa FUN_1409f2caa body=368 status=ok
// SIG undefined FUN_1409f2caa(void)

void FUN_1409f2caa(longlong *param_1)

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
  iVar6 = (int)param_1[9];
  if (iVar6 < 2) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
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
    else if (iVar6 == 1) {
      lVar3 = 0;
      do {
        *(undefined4 *)((longlong)plVar5 + lVar3 * 4) = 0xffffffff;
        lVar3 = lVar3 + 1;
      } while (lVar3 < (int)param_1[9]);
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_98);
  }
  FUN_1409f2e2e(param_1);
  *(undefined4 *)(param_1 + 9) = 1;
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  FUN_1409f2e88(param_1);
  return;
}



// FUNCTION 1409f2e2e FUN_1409f2e2e body=90 status=ok
// SIG undefined FUN_1409f2e2e(void)

void FUN_1409f2e2e(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_144727cd0(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(uint *)(param_1 + 0x2c) < 0x81) {
    return;
  }
  *(undefined4 *)(param_1 + 0x2c) = 0x80;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 1409f2e88 FUN_1409f2e88 body=636 status=ok
// SIG undefined FUN_1409f2e88(void)

void FUN_1409f2e88(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong uVar6;
  uint uVar7;
  int iVar8;
  uint *puVar9;
  ulonglong uVar10;
  int iVar11;
  undefined1 auStack_78 [32];
  longlong *local_58;
  int local_50;
  uint local_4c;
  uint *local_48;
  uint local_40;
  int local_3c;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar5 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar5,0,0);
  }
  plVar1 = param_1 + 7;
  uVar7 = *(uint *)(param_1 + 9);
  if (uVar7 == 1) {
    if (*plVar5 != 0) {
      FUN_1446efa72(plVar5,0,0);
    }
LAB_1409f2edc:
    uVar3 = 0;
    do {
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(undefined4 *)((longlong)plVar5 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar3) * 4) =
           0xffffffff;
      uVar3 = uVar3 + 1;
    } while (uVar7 != uVar3);
  }
  else {
    if (uVar7 == 0) goto LAB_1409f2fcd;
    FUN_1446efa72(plVar5,0);
    if (0 < (int)uVar7) goto LAB_1409f2edc;
  }
  local_48 = (uint *)(param_1 + 2);
  iVar8 = (int)param_1[5];
  local_4c = 1;
  if (iVar8 == 0) {
    local_38 = 0;
    local_50 = 0;
    local_3c = 0;
  }
  else {
    puVar9 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar9 = local_48;
    }
    uVar7 = *puVar9;
    if (uVar7 == 0) {
      iVar11 = iVar8 + 0x1e;
      if (-1 < iVar8 + -1) {
        iVar11 = iVar8 + -1;
      }
      uVar6 = 0;
      uVar10 = (ulonglong)(uint)(iVar11 >> 5);
      if (iVar11 >> 5 < 1) {
        uVar10 = uVar6;
      }
      local_50 = (int)uVar10 + 1;
      local_38 = (int)uVar10 * 0x20 + 0x20;
      iVar11 = 0;
      do {
        local_3c = iVar8;
        if (uVar10 == uVar6) goto LAB_1409f2fa3;
        iVar11 = iVar11 + 0x20;
        uVar7 = puVar9[uVar6 + 1];
        uVar6 = uVar6 + 1;
      } while (uVar7 == 0);
      local_50 = (int)uVar6;
      local_38 = iVar11;
    }
    else {
      local_38 = 0;
      local_50 = 0;
    }
    local_4c = -uVar7 & uVar7;
    uVar10 = (ulonglong)local_4c * 2 + 1;
    lVar2 = 0x3f;
    if (uVar10 != 0) {
      for (; uVar10 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    local_3c = (local_38 - ((uint)lVar2 ^ 0x3f)) + 0x3e;
    if (iVar8 <= local_3c) {
      local_3c = iVar8;
    }
  }
LAB_1409f2fa3:
  local_40 = 0xffffffff;
  local_58 = param_1;
  if (local_3c < iVar8) {
    do {
      lVar2 = *local_58;
      lVar4 = (longlong)local_3c;
      uVar10 = *(ulonglong *)(lVar2 + lVar4 * 0x18);
      uVar7 = ((uint)(uVar10 >> 0x14) & 0xffff ^ (uint)(uVar10 >> 4)) * -0x7a143595;
      uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
      uVar10 = (longlong)(int)(uVar7 >> 0x10 ^ uVar7) & (longlong)(int)param_1[9] - 1U;
      iVar8 = (int)uVar10;
      *(int *)(lVar2 + 0x14 + lVar4 * 0x18) = iVar8;
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(undefined4 *)(lVar2 + 0x10 + lVar4 * 0x18) =
           *(undefined4 *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(int *)((longlong)plVar5 + ((longlong)iVar8 & (longlong)(int)param_1[9] - 1U) * 4) = local_3c
      ;
      local_40 = local_40 & ~local_4c;
      FUN_1449c0562(&local_50);
    } while (local_3c < (int)local_48[6]);
  }
LAB_1409f2fcd:
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1409f3105 FUN_1409f3105 body=1618 status=ok
// SIG undefined FUN_1409f3105(void)

void FUN_1409f3105(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar2 = (undefined8 *)*param_1;
  *puVar2 = &PTR_FUN_149e8f7e0;
  if ((undefined8 *)*param_1 != puVar2 && (undefined8 *)*param_1 != (undefined8 *)0x0) {
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectGlobals.cpp",0xe8e,
                  L"UObject(const FObjectInitializer&) constructor called but it\'s not the object that\'s currently being constructed with NewObject. Maybe you are trying to construct it on the stack, which is not supported."
                 );
  }
  *param_1 = (longlong)puVar2;
  *(undefined1 *)((longlong)param_1 + 0x12) = 0;
  *puVar2 = &PTR_FUN_14ab05ca0;
  puVar2[5] = &PTR_LAB_14ab05f40;
  *(undefined1 *)((longlong)puVar2 + 0xd9) = 0;
  *(undefined1 *)((longlong)puVar2 + 0xdb) = 0;
  memset(puVar2 + 6,0,0x8c);
  puVar2[0x18] = 0;
  puVar2[0x19] = 0;
  puVar2[0x1a] = 0;
  InitializeSRWLock((PSRWLOCK)(puVar2 + 0x1c));
  *(undefined8 *)((longlong)puVar2 + 0x111) = 0;
  *(undefined8 *)((longlong)puVar2 + 0x119) = 0;
  puVar2[0x21] = 0;
  puVar2[0x22] = 0;
  puVar2[0x1f] = 0;
  puVar2[0x20] = 0;
  puVar2[0x1d] = 0;
  puVar2[0x1e] = 0;
  puVar2[0x25] = 0;
  puVar2[0x26] = 0;
  puVar2[0x27] = 0;
  puVar2[0x28] = 0;
  puVar2[0x29] = 0;
  *(undefined1 *)(puVar2 + 0x2a) = (undefined1)DAT_14c760db4;
  *(byte *)((longlong)puVar2 + 0x153) = *(byte *)((longlong)puVar2 + 0x153) & 0xb7;
  *(byte *)((longlong)puVar2 + 0x156) = *(byte *)((longlong)puVar2 + 0x156) | 0x10;
  *(byte *)((longlong)puVar2 + 0x157) = *(byte *)((longlong)puVar2 + 0x157) & 0xfd;
  *(undefined1 *)(puVar2 + 0x2b) = 0;
  puVar2[0x2d] = 0;
  puVar2[0x2e] = 0;
  puVar2[0x2f] = 0;
  puVar2[0x30] = 0;
  puVar2[0x31] = 0;
  puVar2[0x32] = 0;
  puVar2[0x33] = 0;
  puVar2[0x34] = 0;
  puVar2[0x35] = 0;
  *(undefined4 *)(puVar2 + 0x36) = 0xffffffff;
  puVar2[0x37] = 0;
  puVar2[0x38] = 0;
  *(undefined4 *)(puVar2 + 0x39) = 2;
  *(undefined8 *)((longlong)puVar2 + 0x1cc) = 0;
  *(undefined8 *)((longlong)puVar2 + 0x1d4) = 0;
  *(undefined8 *)((longlong)puVar2 + 0x1dc) = 0xffffffff00000000;
  puVar2[0x56] = 0;
  *(undefined4 *)(puVar2 + 0x57) = 0;
  puVar2[0x41] = 0;
  puVar2[0x42] = 0;
  puVar2[0x3f] = 0;
  puVar2[0x40] = 0;
  puVar2[0x3d] = 0;
  puVar2[0x3e] = 0;
  puVar2[0x4a] = 0;
  puVar2[0x4b] = 0;
  puVar2[0x48] = 0;
  puVar2[0x49] = 0;
  puVar2[0x46] = 0;
  puVar2[0x47] = 0;
  puVar2[0x44] = 0;
  puVar2[0x45] = 0;
  puVar2[0x53] = 0;
  puVar2[0x51] = 0;
  puVar2[0x52] = 0;
  puVar2[0x4f] = 0;
  puVar2[0x50] = 0;
  puVar2[0x4d] = 0;
  puVar2[0x4e] = 0;
  *(undefined8 *)((longlong)puVar2 + 700) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar2 + 0x2c4) = 0;
  puVar2[0x5a] = 0;
  *(undefined4 *)(puVar2 + 0x5b) = 0;
  puVar2[0x5e] = 0;
  puVar2[0x5f] = 0;
  puVar2[0x5c] = 0;
  puVar2[0x5d] = 0;
  lVar3 = 0x35c;
  do {
    *(undefined8 *)((longlong)puVar2 + lVar3 + -0xc) = 0;
    *(undefined8 *)((longlong)puVar2 + lVar3 + -4) = 0x400000000;
    puVar1 = (undefined8 *)((longlong)puVar2 + lVar3 + -0x5c);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)((longlong)puVar2 + lVar3 + -0x4c);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)((longlong)puVar2 + lVar3 + -0x42);
    *puVar1 = 0;
    puVar1[1] = 0;
    lVar3 = lVar3 + 0x60;
  } while (lVar3 != 0x41c);
  uVar5 = 0;
  *(undefined4 *)(puVar2 + 0x78) = 0;
  *(undefined1 *)(puVar2 + 0x65) = 1;
  puVar2[0x79] = 0;
  puVar2[0x7a] = 0;
  *(undefined4 *)(puVar2 + 0x7b) = 2;
  *(undefined8 *)((longlong)puVar2 + 0x3dc) = 0;
  *(undefined8 *)((longlong)puVar2 + 0x3e4) = 0;
  *(undefined8 *)((longlong)puVar2 + 0x3ec) = 0x200000000;
  *(undefined8 *)((longlong)puVar2 + 0x3f4) = 0;
  *(undefined8 *)((longlong)puVar2 + 0x3fc) = 0;
  *(undefined8 *)((longlong)puVar2 + 0x404) = 0x200000000;
  *(undefined8 *)((longlong)puVar2 + 0x40c) = 0;
  *(undefined8 *)((longlong)puVar2 + 0x414) = 0;
  *(undefined8 *)((longlong)puVar2 + 0x41c) = 0x200000000;
  *(undefined8 *)((longlong)puVar2 + 0x424) = 0;
  *(undefined8 *)((longlong)puVar2 + 0x42c) = 0;
  *(undefined8 *)((longlong)puVar2 + 0x434) = 0x200000000;
  *(undefined4 *)((longlong)puVar2 + 0x44c) = 0;
  *(undefined8 *)((longlong)puVar2 + 0x43c) = 0;
  *(undefined8 *)((longlong)puVar2 + 0x444) = 0;
  puVar2[0x8a] = 2;
  puVar2[0x90] = 0;
  *(undefined4 *)(puVar2 + 0x91) = 0;
  puVar2[0x8c] = 0;
  puVar2[0x8d] = 0;
  *(undefined8 *)((longlong)puVar2 + 0x48c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar2 + 0x494) = 0;
  puVar2[0x94] = 0;
  *(undefined4 *)(puVar2 + 0x95) = 0;
  puVar2[0x96] = 0;
  puVar2[0x97] = 0;
  puVar2[0x99] = 0;
  puVar2[0x9a] = 0;
  *(undefined4 *)(puVar2 + 0x9b) = 2;
  *(undefined8 *)((longlong)puVar2 + 0x4dc) = 0;
  *(undefined8 *)((longlong)puVar2 + 0x4e4) = 0;
  *(undefined8 *)((longlong)puVar2 + 0x4ec) = 0x200000000;
  *(undefined8 *)((longlong)puVar2 + 0x4f4) = 0;
  *(undefined8 *)((longlong)puVar2 + 0x4fc) = 0;
  *(undefined8 *)((longlong)puVar2 + 0x504) = 0x200000000;
  *(undefined8 *)((longlong)puVar2 + 0x50c) = 0;
  *(undefined8 *)((longlong)puVar2 + 0x514) = 0;
  *(undefined8 *)((longlong)puVar2 + 0x51c) = 0x200000000;
  *(undefined8 *)((longlong)puVar2 + 0x524) = 0;
  *(undefined8 *)((longlong)puVar2 + 0x52c) = 0;
  *(undefined8 *)((longlong)puVar2 + 0x534) = 0x200000000;
  *(undefined8 *)((longlong)puVar2 + 0x53c) = 0;
  *(undefined8 *)((longlong)puVar2 + 0x544) = 0;
  *(undefined8 *)((longlong)puVar2 + 0x54c) = 0x200000000;
  *(undefined8 *)((longlong)puVar2 + 0x554) = 0;
  *(undefined8 *)((longlong)puVar2 + 0x55c) = 0;
  *(undefined8 *)((longlong)puVar2 + 0x564) = 0x200000000;
  *(undefined8 *)((longlong)puVar2 + 0x56c) = 0;
  *(undefined8 *)((longlong)puVar2 + 0x574) = 0;
  *(undefined8 *)((longlong)puVar2 + 0x57c) = 0x200000000;
  *(undefined8 *)((longlong)puVar2 + 0x584) = 0;
  *(undefined8 *)((longlong)puVar2 + 0x58c) = 0;
  *(undefined8 *)((longlong)puVar2 + 0x594) = 0x200000000;
  *(undefined4 *)((longlong)puVar2 + 0x5ac) = 0;
  *(undefined8 *)((longlong)puVar2 + 0x59c) = 0;
  *(undefined8 *)((longlong)puVar2 + 0x5a4) = 0;
  puVar2[0xb6] = 2;
  FUN_140810d00(puVar2 + 0xb7,0);
  puVar2[0xc4] = 0;
  *(undefined2 *)(puVar2 + 0xc6) = 0;
  *(byte *)((longlong)puVar2 + 0x632) = *(byte *)((longlong)puVar2 + 0x632) & 0x80 | 8;
  *(undefined1 *)((longlong)puVar2 + 0x633) = 1;
  *(undefined8 *)((longlong)puVar2 + 0x634) = 0;
  *(undefined8 *)((longlong)puVar2 + 0x63c) = 0;
  puVar2[200] = 0;
  puVar2[0xc9] = 0;
  puVar2[0xc5] = &PTR_FUN_14ab09240;
  *(undefined2 *)(puVar2 + 0xcc) = 0;
  *(byte *)((longlong)puVar2 + 0x662) = *(byte *)((longlong)puVar2 + 0x662) & 0x80 | 8;
  *(undefined1 *)((longlong)puVar2 + 0x663) = 1;
  *(undefined8 *)((longlong)puVar2 + 0x664) = 0;
  *(undefined8 *)((longlong)puVar2 + 0x66c) = 0;
  puVar2[0xce] = 0;
  puVar2[0xcf] = 0;
  puVar2[0xcb] = &PTR_FUN_14ab09270;
  puVar2[0xd2] = 0;
  puVar2[0xd3] = 0;
  *(undefined4 *)(puVar2 + 0xd4) = 2;
  *(undefined4 *)((longlong)puVar2 + 0x6c4) = 0;
  *(undefined8 *)((longlong)puVar2 + 0x6b4) = 0;
  *(undefined8 *)((longlong)puVar2 + 0x6bc) = 0;
  *(undefined8 *)((longlong)puVar2 + 0x6a4) = 0;
  *(undefined8 *)((longlong)puVar2 + 0x6ac) = 0;
  puVar2[0xe9] = 0;
  puVar2[0xea] = 0;
  *(undefined2 *)(puVar2 + 0xeb) = 0x200;
  *(undefined4 *)((longlong)puVar2 + 0x78c) = 0;
  puVar2[0xec] = 0;
  puVar2[0xed] = 0;
  puVar2[0xee] = 0;
  puVar2[0xef] = 0;
  puVar2[0xf0] = 0;
  puVar2[0xf3] = 0;
  puVar2[0xf4] = 0;
  puVar2[0xf5] = 0;
  *(undefined4 *)(puVar2 + 0xf6) = 2;
  *(undefined8 *)((longlong)puVar2 + 0x7b4) = 0;
  *(undefined8 *)((longlong)puVar2 + 0x7bc) = 0;
  *(undefined8 *)((longlong)puVar2 + 0x7c4) = 0x200000000;
  *(undefined8 *)((longlong)puVar2 + 0x7cc) = 0;
  *(undefined8 *)((longlong)puVar2 + 0x7d4) = 0;
  *(undefined8 *)((longlong)puVar2 + 0x7dc) = 0x200000000;
  *(undefined8 *)((longlong)puVar2 + 0x7e4) = 0;
  *(undefined8 *)((longlong)puVar2 + 0x7ec) = 0;
  *(undefined8 *)((longlong)puVar2 + 0x7f4) = 0x200000000;
  *(undefined4 *)((longlong)puVar2 + 0x80c) = 0;
  *(undefined8 *)((longlong)puVar2 + 0x7fc) = 0;
  *(undefined8 *)((longlong)puVar2 + 0x804) = 0;
  *(undefined4 *)(puVar2 + 0x102) = 2;
  puVar2[0x107] = 0;
  *(undefined4 *)(puVar2 + 0x108) = 0;
  *(undefined8 *)((longlong)puVar2 + 0x814) = 0;
  *(undefined8 *)((longlong)puVar2 + 0x81c) = 0;
  *(undefined4 *)((longlong)puVar2 + 0x824) = 0;
  *(undefined8 *)((longlong)puVar2 + 0x844) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar2 + 0x84c) = 0;
  puVar2[0x10b] = 0;
  *(undefined4 *)(puVar2 + 0x10c) = 0;
  puVar2[0x10d] = 0;
  uVar4 = FUN_1409f38dc();
  puVar2[0x113] = 0;
  *(undefined4 *)(puVar2 + 0x114) = 0;
  puVar2[0x10f] = 0;
  puVar2[0x110] = 0;
  *(undefined8 *)((longlong)puVar2 + 0x8a4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar2 + 0x8ac) = 0;
  puVar2[0x117] = 0;
  *(undefined4 *)(puVar2 + 0x118) = 0;
  puVar2[0x11d] = 0;
  *(undefined4 *)(puVar2 + 0x11e) = 0;
  puVar2[0x119] = 0;
  puVar2[0x11a] = 0;
  *(undefined8 *)((longlong)puVar2 + 0x8f4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar2 + 0x8fc) = 0;
  puVar2[0x121] = 0;
  *(undefined4 *)(puVar2 + 0x122) = 0;
  puVar2[0x123] = uVar4;
  puVar2[0x124] = 0;
  *(undefined2 *)(puVar2 + 0x125) = 0;
  puVar2[0x10e] = &PTR_FUN_14ab09640;
  *(undefined4 *)(puVar2 + 0x126) = 0;
  *(undefined1 *)((longlong)puVar2 + 0x934) = 0;
  puVar2[0x127] = 0;
  *(undefined4 *)(puVar2 + 0x128) = 0;
  puVar2[0x129] = 0;
  *(undefined1 *)((longlong)puVar2 + 0x95b) = 1;
  *(undefined8 *)((longlong)puVar2 + 0x95c) = 0;
  *(undefined8 *)((longlong)puVar2 + 0x964) = 0;
  puVar2[0x12d] = 0;
  puVar2[0x12e] = 0;
  puVar2[0x12a] = &PTR_FUN_14a908280;
  *(undefined2 *)(puVar2 + 0x12f) = 0;
  *(undefined8 *)((longlong)puVar2 + 0x97c) = 0;
  *(undefined4 *)((longlong)puVar2 + 0x984) = 0;
  *(byte *)((longlong)puVar2 + 0x95a) = *(byte *)((longlong)puVar2 + 0x95a) & 0x80 | 0xb;
  *(undefined2 *)(puVar2 + 299) = 0x605;
  *(undefined1 *)(puVar2 + 0x131) = 0;
  uVar4 = FUN_14001cc68(0x160,0x10);
  FUN_1409f3812(uVar4,0);
  puVar2[0x8b] = uVar4;
  FUN_1409f3758(&DAT_14cb10998,puVar2);
  if (DAT_14c761ea0 == '\0') {
    uVar5 = FUN_14001cc68(0xa8,0x10);
    FUN_14572b5aa(uVar5);
  }
  puVar2[0xf2] = uVar5;
  *(undefined8 *)((longlong)puVar2 + 0x15c) = 0;
  return;
}



// FUNCTION 1409f3758 FUN_1409f3758 body=186 status=ok
// SIG undefined FUN_1409f3758(void)

void FUN_1409f3758(LPCRITICAL_SECTION param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  bool bVar4;
  char cVar5;
  ulonglong uVar6;
  bool bVar7;
  longlong lVar8;
  ulonglong uVar9;
  
  EnterCriticalSection(param_1);
  iVar2 = *(int *)((longlong)&param_1[1].OwningThread + 4);
  *(int *)((longlong)&param_1[1].OwningThread + 4) = iVar2 + 1;
  uVar6 = (ulonglong)param_1[1].LockCount;
  if ((longlong)uVar6 < 1) {
    *(int *)((longlong)&param_1[1].OwningThread + 4) = iVar2;
  }
  else {
    bVar7 = false;
    do {
      lVar8 = uVar6 * 0x10 + -8;
      uVar9 = uVar6;
      while ((*(int *)((longlong)&(param_1[1].DebugInfo)->Type + lVar8) != 0 &&
             (plVar3 = *(longlong **)((longlong)param_1[1].DebugInfo + lVar8 + -8),
             plVar3 != (longlong *)0x0))) {
        cVar5 = (**(code **)(*plVar3 + 0x60))(plVar3,param_2);
        if (cVar5 == '\0') break;
        lVar8 = lVar8 + -0x10;
        bVar4 = uVar9 < 2;
        uVar9 = uVar9 - 1;
        if (bVar4) {
          piVar1 = (int *)((longlong)&param_1[1].OwningThread + 4);
          *piVar1 = *piVar1 + -1;
          if (!bVar7) goto LAB_1409f37cc;
          goto LAB_1409f37fa;
        }
      }
      uVar6 = uVar9 - 1;
      bVar7 = true;
    } while (1 < uVar9);
    piVar1 = (int *)((longlong)&param_1[1].OwningThread + 4);
    *piVar1 = *piVar1 + -1;
LAB_1409f37fa:
    FUN_14109be94(param_1,0);
  }
LAB_1409f37cc:
  if (param_1 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001409f37df. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_1);
    return;
  }
  return;
}



// FUNCTION 1409f3812 FUN_1409f3812 body=202 status=ok
// SIG undefined FUN_1409f3812(void)

void FUN_1409f3812(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_FUN_14aadc598;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0xffffffff00000080;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
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
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *(undefined8 *)((longlong)param_1 + 0x11c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x124) = 0;
  param_1[0x26] = 0;
  *(undefined4 *)(param_1 + 0x27) = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0xffffffffffffffff;
  param_1[0x2b] = param_2;
  return;
}



// FUNCTION 1409f38dc FUN_1409f38dc body=228 status=ok
// SIG undefined FUN_1409f38dc(void)

longlong FUN_1409f38dc(void)

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
  if (DAT_14cb0adf8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_146406b72;
    local_38 = &LAB_147d6879b;
    local_40 = FUN_146406df9;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x30;
    FUN_14081cfa3(L"/Script/Engine",L"WorldSubsystem",&DAT_14cb0adf8,&DAT_147d6879a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb0adf8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1409f39c2 FUN_1409f39c2 body=487 status=ok
// SIG undefined FUN_1409f39c2(void)

undefined4 * FUN_1409f39c2(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  char cVar1;
  undefined2 *puVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1409f3d22(param_1,local_48);
  param_3 = (undefined8 *)*param_3;
  *local_40 = *param_3;
  uVar9 = 0;
  *param_3 = 0;
  *(undefined4 *)(local_40 + 1) = *(undefined4 *)(param_3 + 1);
  *(undefined4 *)((longlong)local_40 + 0xc) = *(undefined4 *)((longlong)param_3 + 0xc);
  param_3[1] = 0;
  *(undefined4 *)(local_40 + 4) = 0;
  local_40[2] = 0;
  local_40[3] = 0;
  local_40[5] = 0;
  local_40[6] = 0;
  FUN_1404e49fa(local_40 + 2);
  *(undefined4 *)(local_40 + 7) = 0xffffffff;
  local_4c = local_48[0];
  iVar7 = *(int *)(local_40 + 1);
  iVar4 = iVar7 + -1;
  if (iVar7 == 0) {
    iVar4 = 0;
  }
  if (0 < iVar4) {
    if (iVar7 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    else {
      puVar2 = (undefined2 *)*local_40;
    }
    lVar5 = 0;
    uVar9 = 0;
    do {
      uVar6 = ((uint)(0x19 < (ushort)puVar2[lVar5] - 0x61) * 0x20 + (uint)(ushort)puVar2[lVar5]) -
              0x20;
      uVar8 = (uint)(uVar9 >> 8) ^
              *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar9 ^ uVar6) & 0xff) * 4);
      uVar9 = (ulonglong)
              (uVar8 >> 8 ^
              *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar8 & 0xff ^ uVar6 >> 8 & 0xff) * 4));
      lVar5 = lVar5 + 1;
    } while (iVar4 != (int)lVar5);
  }
  local_58 = 0;
  cVar1 = FUN_1409f3baa(param_1,uVar9,local_40,&local_4c);
  if (cVar1 == '\0') {
    uVar6 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar6) {
      uVar3 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
      lVar5 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar5 & 0x1f);
    }
    if (((int)uVar6 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar6 = *(int *)(param_1 + 0x48) - 1U & (uint)uVar9;
      *(uint *)((longlong)local_40 + 0x3c) = uVar6;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 7) =
           *(undefined4 *)
            (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar6) * 4);
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar6) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_1409f3efe(param_1);
    }
  }
  *param_2 = local_4c;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1409f3baa FUN_1409f3baa body=176 status=ok
// SIG undefined FUN_1409f3baa(void)

void FUN_1409f3baa(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4,
                  undefined1 *param_5)

{
  longlong *plVar1;
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
  undefined4 uVar13;
  undefined1 uVar14;
  int iVar15;
  
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    iVar15 = FUN_1409f3c5a();
    if (iVar15 != -1) {
      plVar1 = (longlong *)(*param_1 + (longlong)iVar15 * 0x40);
      if (*(longlong *)(*param_1 + 0x28 + (longlong)iVar15 * 0x40) != 0) {
        FUN_1400020a8();
      }
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      uVar2 = *param_3;
      uVar3 = param_3[1];
      uVar4 = param_3[2];
      uVar5 = param_3[3];
      uVar6 = param_3[4];
      uVar7 = param_3[5];
      uVar8 = param_3[6];
      uVar9 = param_3[7];
      uVar10 = param_3[8];
      uVar11 = param_3[9];
      uVar12 = param_3[10];
      uVar13 = param_3[0xb];
      plVar1[6] = *(longlong *)(param_3 + 0xc);
      *(undefined4 *)(plVar1 + 4) = uVar10;
      *(undefined4 *)((longlong)plVar1 + 0x24) = uVar11;
      *(undefined4 *)(plVar1 + 5) = uVar12;
      *(undefined4 *)((longlong)plVar1 + 0x2c) = uVar13;
      *(undefined4 *)(plVar1 + 2) = uVar6;
      *(undefined4 *)((longlong)plVar1 + 0x14) = uVar7;
      *(undefined4 *)(plVar1 + 3) = uVar8;
      *(undefined4 *)((longlong)plVar1 + 0x1c) = uVar9;
      *(undefined4 *)plVar1 = uVar2;
      *(undefined4 *)((longlong)plVar1 + 4) = uVar3;
      *(undefined4 *)(plVar1 + 1) = uVar4;
      *(undefined4 *)((longlong)plVar1 + 0xc) = uVar5;
      FUN_1470e3f34(param_1,*param_4,1);
      *param_4 = iVar15;
      uVar14 = 1;
      goto LAB_1409f3bde;
    }
  }
  uVar14 = 0;
LAB_1409f3bde:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar14;
  }
  return;
}



// FUNCTION 1409f3c5a FUN_1409f3c5a body=199 status=ok
// SIG undefined FUN_1409f3c5a(void)

int FUN_1409f3c5a(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  ushort uVar7;
  ushort uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar4 = *param_1;
      iVar2 = (int)param_3[1];
LAB_1409f3ca0:
      lVar10 = (longlong)iVar1 * 0x40;
      iVar3 = *(int *)(lVar4 + 8 + lVar10);
      if (iVar3 == iVar2) {
        if (iVar2 < 2) {
          return iVar1;
        }
        lVar6 = 0;
        do {
          uVar8 = *(ushort *)(*(longlong *)(lVar4 + lVar10) + lVar6);
          uVar9 = (ulonglong)uVar8;
          uVar7 = *(ushort *)(*param_3 + lVar6);
          if (uVar8 == uVar7) {
            if (uVar8 == 0) {
              return iVar1;
            }
          }
          else {
            if (0x7f < (uVar7 | uVar8)) goto LAB_1409f3d0d;
            uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
            uVar11 = (ulonglong)uVar7;
            uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
            if ((&DAT_149e05da0)[uVar9] != (&DAT_149e05da0)[uVar11]) goto LAB_1409f3d0d;
          }
          lVar6 = lVar6 + 2;
        } while( true );
      }
      if (iVar3 + iVar2 == 1) {
        return iVar1;
      }
      goto LAB_1409f3cba;
    }
  }
  return -1;
LAB_1409f3d0d:
  if (uVar8 == uVar7) {
    return iVar1;
  }
LAB_1409f3cba:
  iVar1 = *(int *)(lVar4 + 0x38 + lVar10);
  if (iVar1 == -1) {
    return -1;
  }
  goto LAB_1409f3ca0;
}



// FUNCTION 1409f3d22 FUN_1409f3d22 body=476 status=ok
// SIG undefined FUN_1409f3d22(void)

int * FUN_1409f3d22(longlong *param_1,int *param_2)

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
      FUN_1406cd6a8(param_1,iVar11);
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
    iVar6 = *(int *)(*param_1 + 4 + lVar3 * 0x40);
    *(int *)(param_1 + 6) = iVar6;
    iVar2 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar6 * 0x40) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar3 * 0x40 + *param_1;
  return param_2;
}



// FUNCTION 1409f3efe FUN_1409f3efe body=807 status=ok
// SIG undefined FUN_1409f3efe(void)

void FUN_1409f3efe(longlong *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  int iVar7;
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
  plVar1 = param_1 + 7;
  uVar9 = *(uint *)(param_1 + 9);
  if (uVar9 == 1) {
    if (*plVar5 != 0) {
      FUN_1446efa72(plVar5,0,0,4);
    }
  }
  else {
    if (uVar9 == 0) {
      return;
    }
    FUN_1446efa72(plVar5,0,uVar9,4);
    if ((int)uVar9 < 1) goto LAB_1409f3f64;
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
LAB_1409f3f64:
  iVar7 = (int)param_1[5];
  if (iVar7 == 0) {
    uVar6 = 0;
    uVar11 = 1;
    iVar10 = 0;
    iVar18 = 0;
  }
  else {
    puVar14 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar14 = (uint *)(param_1 + 2);
    }
    uVar9 = *puVar14;
    if (uVar9 == 0) {
      iVar18 = iVar7 + 0x1e;
      if (-1 < iVar7 + -1) {
        iVar18 = iVar7 + -1;
      }
      uVar6 = 0;
      uVar11 = (ulonglong)(uint)(iVar18 >> 5);
      if (iVar18 >> 5 < 1) {
        uVar11 = uVar6;
      }
      iVar18 = 0;
      do {
        if (uVar11 == uVar6) {
          return;
        }
        iVar18 = iVar18 + 0x20;
        uVar9 = puVar14[uVar6 + 1];
        uVar6 = uVar6 + 1;
      } while (uVar9 == 0);
    }
    else {
      uVar6 = 0;
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
    if (iVar7 <= iVar10) {
      iVar10 = iVar7;
    }
  }
  if (iVar10 < iVar7) {
    uVar9 = 0xffffffff;
    do {
      puVar2 = (undefined8 *)(*param_1 + (longlong)iVar10 * 0x40);
      iVar7 = *(int *)(*param_1 + 8 + (longlong)iVar10 * 0x40);
      iVar12 = iVar7 + -1;
      if (iVar7 == 0) {
        iVar12 = 0;
      }
      uVar3 = 0;
      if (0 < iVar12) {
        puVar17 = &DAT_149dfb77a;
        if (iVar7 != 0) {
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
      iVar7 = (int)uVar8;
      *(int *)((longlong)puVar2 + 0x3c) = iVar7;
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(undefined4 *)(puVar2 + 7) =
           *(undefined4 *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & uVar8) * 4);
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(int *)((longlong)plVar5 + ((longlong)iVar7 & (longlong)(int)param_1[9] - 1U) * 4) = iVar10;
      uVar9 = uVar9 & ~(uint)uVar11;
      puVar14 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar14 = (uint *)(param_1 + 2);
      }
      iVar7 = (int)param_1[5];
      iVar10 = (int)uVar6;
      lVar15 = (longlong)iVar10;
      uVar3 = puVar14[lVar15] & uVar9;
      if (uVar3 == 0) {
        iVar12 = iVar7 + 0x1e;
        if (-1 < iVar7 + -1) {
          iVar12 = iVar7 + -1;
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
        uVar6 = (ulonglong)(iVar10 + (int)lVar16 + 1);
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
    } while (iVar10 < iVar7);
  }
  return;
}



// FUNCTION 1409f422c FUN_1409f422c body=57 status=ok
// SIG undefined FUN_1409f422c(void)

void FUN_1409f422c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb23320 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb23320 = FUN_140002ddd(FUN_14643d62d,uVar1,L"GpsTest_Friendlies");
  }
  return;
}



// FUNCTION 1409f4266 FUN_1409f4266 body=3878 status=ok
// SIG undefined FUN_1409f4266(void)

void FUN_1409f4266(longlong param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  longlong *plVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  DWORD DVar8;
  DWORD DVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong *plVar13;
  int iVar14;
  ulonglong uVar15;
  int iVar16;
  undefined8 *puVar17;
  longlong *plVar18;
  undefined8 *puVar19;
  longlong lVar20;
  ushort uVar21;
  ushort uVar22;
  ulonglong uVar23;
  int iVar24;
  longlong *plVar25;
  longlong lVar26;
  bool bVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined1 in_XMM3 [16];
  undefined1 auVar31 [16];
  undefined1 auStack_2e8 [32];
  longlong local_2c8;
  longlong *local_2c0;
  longlong *local_2b8;
  longlong *local_2b0;
  longlong *local_2a8;
  longlong local_2a0;
  ulonglong local_298;
  longlong *local_290;
  longlong *local_288;
  ulonglong local_280;
  undefined8 local_278;
  longlong lStack_270;
  undefined8 local_268;
  longlong lStack_260;
  longlong local_258;
  undefined8 uStack_250;
  longlong local_248;
  undefined4 local_240;
  undefined4 uStack_23c;
  char local_231;
  longlong local_230;
  undefined1 local_228 [16];
  undefined8 local_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 local_200;
  longlong local_1f8;
  int local_1f0;
  int local_1ec;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined1 local_1b8 [16];
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  float local_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  undefined **local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined4 local_150;
  longlong local_14c;
  longlong lStack_144;
  longlong local_13c;
  longlong lStack_134;
  longlong local_12c;
  longlong lStack_124;
  longlong local_11c;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  float local_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  undefined8 local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_2e8;
  if (*(int *)(param_1 + 0x18) != 0) goto LAB_1409f4f43;
  plVar11 = (longlong *)(longlong)*(int *)(param_1 + 0x40);
  local_2c8 = param_1;
  if (1 < (longlong)plVar11) {
    local_298 = (ulonglong)(*(int *)(param_1 + 0x40) - 1);
    local_2b0 = (longlong *)(param_1 + 0x48);
    local_2a8 = (longlong *)(param_1 + 0x84);
    plVar18 = (longlong *)&DAT_00000001;
    plVar25 = (longlong *)0x13d;
    uVar15 = 0;
    local_2c0 = plVar11;
    do {
      local_290 = plVar25;
      local_288 = plVar18;
      do {
        lVar10 = *(longlong *)(param_1 + 0x38);
        if (((((*(int *)(lVar10 + 0x8c + uVar15 * 0xa0) ==
                *(int *)(lVar10 + -0x11 + (longlong)plVar25)) &&
              (lVar26 = uVar15 * 0xa0 + lVar10, *(char *)(lVar26 + 0x9c) == '\0')) &&
             (*(char *)(lVar10 + -1 + (longlong)plVar25) == '\0')) &&
            ((*(char *)(lVar26 + 0x9d) != '\0' || (*(char *)(lVar10 + (longlong)plVar25) == '\x01'))
            )) && (*(int *)(lVar26 + 0x98) == *(int *)(lVar10 + -5 + (longlong)plVar25))) {
          local_258 = 0;
          uStack_250 = 0;
          local_268 = 0;
          lStack_260 = 0;
          local_278 = 0;
          lStack_270 = 0;
          bVar27 = false;
          local_248 = 0;
          FUN_144b456d0(&local_168);
          local_14c = *local_2a8;
          lStack_144 = local_2a8[1];
          local_13c = local_2a8[2];
          lStack_134 = local_2a8[3];
          local_12c = local_2a8[4];
          lStack_124 = local_2a8[5];
          local_11c = local_2a8[6];
          local_150 = *(undefined4 *)(param_1 + 0x80);
          local_158 = CONCAT44(local_158._4_4_,*(undefined4 *)(lVar26 + 0x94));
          local_168 = (undefined **)**(undefined8 **)(lVar26 + 0x70);
          auVar31._4_12_ = in_XMM3._4_12_;
          auVar31._0_4_ = (float)*(double *)(lVar26 + 0x10);
          auVar31 = insertps(auVar31,ZEXT416((uint)(float)*(double *)(lVar26 + 0x18)),0x10);
          auVar31 = insertps(auVar31,ZEXT416((uint)(float)*(double *)(lVar26 + 0x20)),0x20);
          local_228 = insertps(auVar31,ZEXT416((uint)(float)*(double *)(lVar26 + 0x28)),0x30);
          dVar2 = *(double *)(lVar26 + 0x40);
          dVar3 = *(double *)(lVar26 + 0x38);
          dVar4 = *(double *)(lVar26 + 0x30);
          local_88 = CONCAT44((float)dVar3,(float)dVar4);
          FUN_144b45650(&local_108,local_228);
          local_158 = CONCAT44(*(undefined4 *)(lVar10 + -9 + (longlong)plVar25),
                               (undefined4)local_158);
          local_160 = **(undefined8 **)(lVar10 + -0x2d + (longlong)plVar25);
          auVar31 = insertps(ZEXT416((uint)(float)*(double *)(lVar10 + -0x8d + (longlong)plVar25)),
                             ZEXT416((uint)(float)*(double *)(lVar10 + -0x85 + (longlong)plVar25)),
                             0x10);
          auVar31 = insertps(auVar31,ZEXT416((uint)(float)*(double *)
                                                           (lVar10 + -0x7d + (longlong)plVar25)),
                             0x20);
          in_XMM3 = insertps(auVar31,ZEXT416((uint)(float)*(double *)
                                                           (lVar10 + -0x75 + (longlong)plVar25)),
                             0x30);
          fVar28 = (float)*(double *)(lVar10 + -0x5d + (longlong)plVar25);
          fVar29 = (float)*(double *)(lVar10 + -0x65 + (longlong)plVar25);
          fVar30 = (float)*(double *)(lVar10 + -0x6d + (longlong)plVar25);
          local_88 = CONCAT44(fVar29,fVar30);
          local_228 = in_XMM3;
          local_d8 = (float)dVar4 * 0.01;
          fStack_d4 = (float)dVar3 * 0.01;
          fStack_d0 = (float)dVar2 * 0.01;
          fStack_cc = (float)dVar2 * 0.01;
          FUN_144b45650(&local_c8,local_228);
          local_88 = 0;
          local_98 = fVar30 * 0.01;
          fStack_94 = fVar29 * 0.01;
          fStack_90 = fVar28 * 0.01;
          fStack_8c = fVar28 * 0.01;
          FUN_144b45780(local_228,&local_168,&local_88);
          lVar12 = local_88;
          if (local_228[0] != '\0') {
            local_1f0 = 0;
            local_1f8 = 0;
            local_1ec = -0x80000000;
            local_228._8_4_ = 0;
            local_208 = **(undefined8 **)(lVar26 + 0x70);
            local_218 = (*(undefined8 **)(lVar26 + 0x70))[3];
            in_XMM3._4_4_ = fStack_d4;
            in_XMM3._0_4_ = local_d8;
            in_XMM3._8_4_ = fStack_d0;
            in_XMM3._12_4_ = fStack_cc;
            local_1e8 = local_108;
            uStack_1e0 = uStack_100;
            local_1d8 = local_f8;
            uStack_1d4 = uStack_f4;
            uStack_1d0 = uStack_f0;
            uStack_1cc = uStack_ec;
            local_1c8 = local_e8;
            uStack_1c4 = uStack_e4;
            uStack_1c0 = uStack_e0;
            uStack_1bc = uStack_dc;
            local_228._4_4_ = *(undefined4 *)(lVar10 + -9 + (longlong)plVar25);
            local_228._0_4_ = *(undefined4 *)(lVar26 + 0x94);
            puVar17 = *(undefined8 **)(lVar10 + -0x2d + (longlong)plVar25);
            local_200 = *puVar17;
            local_210 = puVar17[3];
            local_1a8 = local_c8;
            uStack_1a0 = uStack_c0;
            local_198 = local_b8;
            uStack_190 = uStack_b0;
            local_188 = local_a8;
            uStack_180 = uStack_a0;
            local_178 = local_98;
            fStack_174 = fStack_94;
            fStack_170 = fStack_90;
            fStack_16c = fStack_8c;
            local_1b8 = in_XMM3;
            FUN_1409f5230(&local_1f8,&PTR_vftable_14c6e47a0,1);
            *(longlong *)(local_1f8 + (longlong)local_1f0 * 8) = lVar12;
            local_1f0 = 1;
            local_230 = 0;
            FUN_144b459c0(&local_231,local_228,&local_230);
            lVar10 = local_88;
            bVar27 = local_231 != '\0';
            if (bVar27) {
              local_278 = local_158;
              local_88 = 0;
              FUN_1409f51ce(&lStack_270);
              lVar26 = local_230;
              lStack_270 = lVar10;
              local_230 = 0;
              FUN_1409f51ce(&local_258);
              local_258 = lVar26;
            }
            if (local_230 != 0) {
              FUN_144b3f230();
            }
            local_1f0 = 0;
            if ((-1 < (longlong)local_1ec) && (local_1f8 != 0)) {
              (**(code **)(PTR_vftable_14c6e47a0 + 0x18))
                        (&PTR_vftable_14c6e47a0,local_1f8,(longlong)local_1ec << 3);
            }
          }
          if (local_88 != 0) {
            FUN_144b3f230();
          }
          if (bVar27) {
            local_240 = (undefined4)uVar15;
            uStack_23c = SUB84(plVar18,0);
            iVar24 = *(int *)(local_2c8 + 0x50);
            *(uint *)(local_2c8 + 0x50) = iVar24 + 1U;
            if (*(uint *)(local_2c8 + 0x54) < iVar24 + 1U) {
              FUN_1409f534c(local_2b0,iVar24);
            }
            lVar26 = *local_2b0;
            lVar12 = (longlong)iVar24 * 0x40;
            lVar10 = lVar26 + lVar12;
            *(undefined8 *)(lVar26 + lVar12) = local_278;
            *(longlong *)(lVar26 + 8 + lVar12) = lStack_270;
            *(undefined8 *)(lVar26 + 0x10 + lVar12) = local_268;
            *(longlong *)(lVar26 + 0x18 + lVar12) = lStack_260;
            lVar26 = lStack_270;
            if (lStack_260 != 0) {
              LOCK();
              *(int *)(lStack_260 + 8) = *(int *)(lStack_260 + 8) + 1;
              UNLOCK();
              lVar26 = *(longlong *)(lVar10 + 8);
            }
            if (lVar26 != 0) {
              FUN_144b3d910();
            }
            *(longlong *)(lVar10 + 0x20) = local_258;
            *(undefined8 *)(lVar10 + 0x28) = uStack_250;
            *(longlong *)(lVar10 + 0x30) = local_248;
            lVar26 = local_258;
            if (local_248 != 0) {
              LOCK();
              *(int *)(local_248 + 8) = *(int *)(local_248 + 8) + 1;
              UNLOCK();
              lVar26 = *(longlong *)(lVar10 + 0x20);
            }
            if (lVar26 != 0) {
              FUN_144b3d910();
            }
            *(ulonglong *)(lVar10 + 0x38) = CONCAT44(uStack_23c,local_240);
          }
          FUN_1409f518e(&local_258);
          FUN_1409f518e(&lStack_270);
          plVar11 = local_2c0;
          param_1 = local_2c8;
        }
        plVar18 = (longlong *)((longlong)plVar18 + 1);
        plVar25 = plVar25 + 0x14;
      } while (plVar11 != plVar18);
      uVar15 = uVar15 + 1;
      plVar18 = (longlong *)((longlong)local_288 + 1);
      plVar25 = local_290 + 0x14;
    } while (uVar15 != local_298);
  }
  piVar5 = DAT_14c950c20;
  if ((DAT_14c86a9f8 == '\x01') &&
     (iVar24 = *(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
     iVar24 != 2)) {
    if (iVar24 == 1) {
      DVar8 = FUN_140ad26c0();
      DVar9 = GetCurrentThreadId();
      param_1 = local_2c8;
      if (DVar8 == DVar9) goto LAB_1409f4935;
    }
    lpCriticalSection = (LPCRITICAL_SECTION)(piVar5 + 4);
    while( true ) {
      if (0 < piVar5[1]) {
        (**(code **)(**(longlong **)(piVar5 + 0xe) + 0x20))
                  (*(longlong **)(piVar5 + 0xe),0xffffffff,0);
      }
      EnterCriticalSection(lpCriticalSection);
      if (piVar5[1] == 0) break;
      LeaveCriticalSection(lpCriticalSection);
    }
    LOCK();
    *piVar5 = *piVar5 + 1;
    UNLOCK();
    LeaveCriticalSection(lpCriticalSection);
    param_1 = local_2c8;
  }
LAB_1409f4935:
  local_2a8 = (longlong *)(longlong)*(int *)(param_1 + 0x40);
  if (1 < (longlong)local_2a8) {
    local_280 = (ulonglong)(*(int *)(param_1 + 0x40) - 1);
    local_2b0 = (longlong *)&DAT_00000001;
    uVar15 = 0;
    do {
      local_298 = uVar15;
      if ((*(int *)(*(longlong *)(param_1 + 0x38) + 0x80 + uVar15 * 0xa0) != 0) &&
         (local_2c0 = (longlong *)(*(longlong *)(param_1 + 0x38) + uVar15 * 0xa0),
         plVar11 = local_2b0, *(char *)((longlong)local_2c0 + 0x9c) == '\0')) {
        do {
          local_290 = plVar11;
          if ((((*(int *)(*(longlong *)(param_1 + 0x38) + 0x80 + (longlong)plVar11 * 0xa0) != 0) &&
               (((plVar11 = (longlong *)(*(longlong *)(param_1 + 0x38) + (longlong)plVar11 * 0xa0),
                 *(char *)((longlong)plVar11 + 0x9c) == '\0' &&
                 (*(int *)((longlong)local_2c0 + 0x8c) == *(int *)((longlong)plVar11 + 0x8c))) &&
                (*(char *)((longlong)local_2c0 + 0x9c) == '\0')))) &&
              (((*(char *)((longlong)local_2c0 + 0x9d) != '\0' ||
                (*(char *)((longlong)plVar11 + 0x9d) == '\x01')) &&
               ((int)local_2c0[0x13] == (int)plVar11[0x13])))) &&
             ((longlong)(int)local_2c0[0x10] != 0)) {
            plVar18 = (longlong *)local_2c0[0xf];
            local_288 = plVar18 + (longlong)(int)local_2c0[0x10] * 10;
            iVar24 = 0;
            do {
              if ((longlong)(int)plVar11[0x10] != 0) {
                plVar25 = (longlong *)plVar11[0xf];
                plVar13 = plVar25 + (longlong)(int)plVar11[0x10] * 10;
                iVar14 = 0;
                do {
                  if (((int)plVar18[9] != 0) && ((int)plVar18[9] == (int)plVar25[9])) {
                    local_2a0 = (longlong)(int)local_2c0[0x12];
                    local_2b8 = (longlong *)(longlong)(int)plVar11[0x12];
                    plVar1 = plVar18 + 4;
                    lVar10 = FUN_140612f46(plVar1);
                    if ((lVar10 == 0) || ((plVar18[5] != plVar25[5] || (plVar18[6] != plVar25[6]))))
                    {
LAB_1409f4aec:
                      lVar10 = FUN_140612f46(plVar1);
                      if (((lVar10 == 0) || (lVar10 = FUN_140612f46(plVar25 + 4), lVar10 != 0)) &&
                         ((lVar10 = FUN_140612f46(plVar1), param_1 = local_2c8, lVar10 != 0 ||
                          (lVar10 = FUN_140612f46(plVar25 + 4), param_1 = local_2c8, lVar10 == 0))))
                      goto LAB_1409f4a8b;
                    }
                    else {
                      iVar6 = (int)plVar18[8];
                      if (iVar6 == (int)plVar25[8]) {
                        if (1 < iVar6) {
                          lVar10 = 0;
                          while( true ) {
                            uVar21 = *(ushort *)(plVar18[7] + lVar10);
                            uVar15 = (ulonglong)uVar21;
                            uVar22 = *(ushort *)(plVar25[7] + lVar10);
                            if (uVar21 != uVar22) break;
                            if (uVar21 == 0) goto LAB_1409f4b2d;
LAB_1409f4fed:
                            lVar10 = lVar10 + 2;
                          }
                          if ((uVar22 | uVar21) < 0x80) {
                            uVar21 = (ushort)(byte)(&DAT_149e05da0)[uVar15];
                            uVar23 = (ulonglong)uVar22;
                            uVar22 = (ushort)(byte)(&DAT_149e05da0)[uVar23];
                            if ((&DAT_149e05da0)[uVar15] == (&DAT_149e05da0)[uVar23])
                            goto LAB_1409f4fed;
                          }
                          if (uVar21 != uVar22) goto LAB_1409f4aec;
                        }
                      }
                      else if ((int)plVar25[8] + iVar6 != 1) goto LAB_1409f4aec;
                    }
LAB_1409f4b2d:
                    param_1 = local_2c8;
                    if ((((-1 < (int)((uint)local_2a0 | (uint)local_2b8)) &&
                         ((int)(uint)local_2b8 < (int)plVar25[1])) &&
                        ((int)(uint)local_2a0 < (int)plVar18[1])) &&
                       ((((int)plVar25[2] == (int)plVar18[2] &&
                         (*(int *)((longlong)plVar25 + 0x14) == *(int *)((longlong)plVar18 + 0x14)))
                        && ((char)plVar25[3] == (char)plVar18[3])))) {
                      lVar10 = *plVar18;
                      lVar12 = local_2a0 * 0x60;
                      lVar26 = *plVar25;
                      lVar20 = (longlong)local_2b8 * 0x60;
                      dVar2 = *(double *)(lVar26 + lVar20) - *(double *)(lVar10 + lVar12);
                      dVar4 = *(double *)(lVar26 + 8 + lVar20) - *(double *)(lVar10 + 8 + lVar12);
                      dVar3 = *(double *)(lVar26 + 0x10 + lVar20) -
                              *(double *)(lVar10 + 0x10 + lVar12);
                      if (dVar3 * dVar3 + dVar4 * dVar4 + dVar2 * dVar2 < 16.0) {
                        lVar10 = lVar10 + lVar12;
                        lVar26 = lVar26 + lVar20;
                        dVar2 = *(double *)(lVar26 + 0x18) - *(double *)(lVar10 + 0x18);
                        dVar4 = *(double *)(lVar26 + 0x20) - *(double *)(lVar10 + 0x20);
                        dVar3 = *(double *)(lVar26 + 0x28) - *(double *)(lVar10 + 0x28);
                        if (((dVar3 * dVar3 + dVar4 * dVar4 + dVar2 * dVar2 < 16.0) &&
                            (dVar2 = *(double *)(lVar26 + 0x30) - *(double *)(lVar10 + 0x30),
                            dVar4 = *(double *)(lVar26 + 0x38) - *(double *)(lVar10 + 0x38),
                            dVar3 = *(double *)(lVar26 + 0x40) - *(double *)(lVar10 + 0x40),
                            dVar3 * dVar3 + dVar4 * dVar4 + dVar2 * dVar2 < 16.0)) &&
                           (dVar2 = *(double *)(lVar26 + 0x48) - *(double *)(lVar10 + 0x48),
                           dVar4 = *(double *)(lVar26 + 0x50) - *(double *)(lVar10 + 0x50),
                           dVar3 = *(double *)(lVar26 + 0x58) - *(double *)(lVar10 + 0x58),
                           dVar3 * dVar3 + dVar4 * dVar4 + dVar2 * dVar2 < 16.0)) {
                          plVar1 = (longlong *)(local_2c8 + 0x58);
                          iVar6 = *(int *)(local_2c8 + 0x60);
                          *(uint *)(local_2c8 + 0x60) = iVar6 + 1U;
                          if (*(uint *)(local_2c8 + 100) < iVar6 + 1U) {
                            FUN_1409f555c(plVar1,iVar6);
                          }
                          lVar10 = *plVar1;
                          lVar26 = (longlong)iVar6 * 0x70;
                          local_2b8 = (longlong *)(lVar10 + lVar26);
                          puVar17 = (undefined8 *)(lVar10 + 0x10 + lVar26);
                          *puVar17 = 0;
                          puVar17[1] = 0;
                          puVar17 = (undefined8 *)(lVar10 + 0x40 + lVar26);
                          *puVar17 = 0;
                          puVar17[1] = 0;
                          puVar17 = (undefined8 *)(lVar10 + 0x30 + lVar26);
                          *puVar17 = 0;
                          puVar17[1] = 0;
                          puVar17 = (undefined8 *)(lVar10 + 0x50 + lVar26);
                          *puVar17 = 0;
                          puVar17[1] = 0;
                          puVar17 = (undefined8 *)(lVar10 + 0x60 + lVar26);
                          *puVar17 = 0;
                          puVar17[1] = 0;
                          *(undefined8 *)(lVar10 + lVar26) = 0;
                          ((undefined8 *)(lVar10 + lVar26))[1] = 0;
                          puVar17 = (undefined8 *)(lVar10 + 0x20 + lVar26);
                          *puVar17 = 0;
                          puVar17[1] = 0;
                          *(undefined8 *)(lVar10 + 0x10 + lVar26) = 0xffffffffffffffff;
                          *(undefined1 *)(lVar10 + 0x18 + lVar26) = 3;
                          puVar17 = (undefined8 *)(lVar10 + 0x3c + lVar26);
                          *puVar17 = 0;
                          puVar17[1] = 0;
                          *(undefined4 *)(lVar10 + 0x58 + lVar26) = 0xffffffff;
                          *(undefined8 *)(lVar10 + 100 + lVar26) = 0xffffffffffffffff;
                          *(undefined4 *)(lVar10 + 0x68 + lVar26) =
                               *(undefined4 *)((longlong)local_2c0 + 0x8c);
                          if (*local_2c0 == 0) {
                            *(undefined4 *)(local_2b8 + 10) = 0;
                            iVar6 = 0;
                          }
                          else {
                            uVar7 = *(uint *)(*local_2c0 + 0xc);
                            *(uint *)(local_2b8 + 10) = uVar7;
                            if ((int)uVar7 < DAT_14c9647dc) {
                              lVar10 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
                                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8)
                              ;
                            }
                            else {
                              lVar10 = 0;
                            }
                            iVar6 = *(int *)(lVar10 + 0x10);
                            if (*(int *)(lVar10 + 0x10) == 0) {
                              LOCK();
                              iVar6 = DAT_14c964868 + 1;
                              UNLOCK();
                              iVar16 = DAT_14c964868 + 1;
                              bVar27 = DAT_14c964868 < 1000;
                              DAT_14c964868 = iVar6;
                              if (bVar27) {
                                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp"
                                              ,0x23d,
                                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                              ,iVar16);
                              }
                              LOCK();
                              iVar6 = *(int *)(lVar10 + 0x10);
                              bVar27 = iVar6 == 0;
                              if (bVar27) {
                                *(int *)(lVar10 + 0x10) = iVar16;
                                iVar6 = 0;
                              }
                              UNLOCK();
                              if (bVar27) {
                                iVar6 = iVar16;
                              }
                            }
                          }
                          *(int *)((longlong)local_2b8 + 0x54) = iVar6;
                          *(int *)(local_2b8 + 0xb) = iVar24;
                          if (*plVar11 == 0) {
                            *(undefined4 *)((longlong)local_2b8 + 0x5c) = 0;
                            iVar6 = 0;
                          }
                          else {
                            uVar7 = *(uint *)(*plVar11 + 0xc);
                            *(uint *)((longlong)local_2b8 + 0x5c) = uVar7;
                            if ((int)uVar7 < DAT_14c9647dc) {
                              lVar10 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
                                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8)
                              ;
                            }
                            else {
                              lVar10 = 0;
                            }
                            iVar6 = *(int *)(lVar10 + 0x10);
                            if (*(int *)(lVar10 + 0x10) == 0) {
                              LOCK();
                              iVar6 = DAT_14c964868 + 1;
                              UNLOCK();
                              iVar16 = DAT_14c964868 + 1;
                              bVar27 = DAT_14c964868 < 1000;
                              DAT_14c964868 = iVar6;
                              if (bVar27) {
                                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp"
                                              ,0x23d,
                                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                              ,iVar16);
                              }
                              LOCK();
                              iVar6 = *(int *)(lVar10 + 0x10);
                              bVar27 = iVar6 == 0;
                              if (bVar27) {
                                *(int *)(lVar10 + 0x10) = iVar16;
                                iVar6 = 0;
                              }
                              UNLOCK();
                              if (bVar27) {
                                iVar6 = iVar16;
                              }
                            }
                          }
                          *(int *)(local_2b8 + 0xc) = iVar6;
                          *(int *)((longlong)local_2b8 + 100) = iVar14;
                          *(int *)(local_2b8 + 2) = (int)plVar18[2];
                          *(undefined4 *)((longlong)local_2b8 + 0x14) =
                               *(undefined4 *)((longlong)plVar18 + 0x14);
                          *(char *)(local_2b8 + 3) = (char)plVar18[3];
                          lVar26 = local_2c0[0x12];
                          lVar10 = *plVar18;
                          lVar12 = local_2b8[1];
                          uVar7 = (int)lVar12 + 1;
                          *(uint *)(local_2b8 + 1) = uVar7;
                          if (*(uint *)((longlong)local_2b8 + 0xc) < uVar7) {
                            FUN_1409f544c(local_2b8);
                          }
                          puVar17 = (undefined8 *)((longlong)(int)lVar26 * 0x60 + lVar10);
                          puVar19 = (undefined8 *)((longlong)(int)lVar12 * 0x60 + *local_2b8);
                          for (lVar20 = 0xc; param_1 = local_2c8, lVar20 != 0; lVar20 = lVar20 + -1)
                          {
                            *puVar19 = *puVar17;
                            puVar17 = puVar17 + 1;
                            puVar19 = puVar19 + 1;
                          }
                        }
                      }
                    }
                  }
LAB_1409f4a8b:
                  iVar14 = iVar14 + 1;
                  plVar25 = plVar25 + 10;
                } while (plVar25 != plVar13);
              }
              iVar24 = iVar24 + 1;
              plVar18 = plVar18 + 10;
            } while (plVar18 != local_288);
          }
          plVar11 = (longlong *)((longlong)local_290 + 1);
        } while ((longlong *)((longlong)local_290 + 1) != local_2a8);
      }
      uVar15 = local_298 + 1;
      local_2b0 = (longlong *)((longlong)local_2b0 + 1);
    } while (uVar15 != local_280);
  }
  piVar5 = DAT_14c950c20;
  if ((DAT_14c86a9f8 == '\x01') &&
     (iVar24 = *(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
     iVar24 != 2)) {
    if (iVar24 == 1) {
      DVar8 = FUN_140ad26c0();
      DVar9 = GetCurrentThreadId();
      param_1 = local_2c8;
      if (DVar8 == DVar9) goto LAB_1409f4eb8;
    }
    LOCK();
    *piVar5 = *piVar5 + -1;
    UNLOCK();
  }
LAB_1409f4eb8:
  local_160 = 0xffffffff;
  local_158 = 1;
  local_168 = &PTR_LAB_14aba2b90;
  iVar24 = *(int *)(param_1 + 0x40);
  if ((longlong)iVar24 != 0) {
    lVar10 = *(longlong *)(param_1 + 0x38);
    lVar26 = 0;
    do {
      if (*(char *)(lVar10 + 0x9d + lVar26) == '\x01') {
        FUN_144b45880(**(undefined8 **)(lVar10 + 0x70 + lVar26),&local_168,
                      *(float *)(lVar10 + 0x88 + lVar26) * 0.01,1);
      }
      lVar26 = lVar26 + 0xa0;
    } while ((longlong)iVar24 * 0xa0 != lVar26);
  }
LAB_1409f4f43:
  if ((local_80 ^ (ulonglong)auStack_2e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1409f518e FUN_1409f518e body=63 status=ok
// SIG undefined FUN_1409f518e(void)

void FUN_1409f518e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_1409f51ce();
  plVar3 = *(longlong **)(param_1 + 0x10);
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
                    /* WARNING: Could not recover jumptable at 0x0001409f51c9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1409f51ce FUN_1409f51ce body=97 status=ok
// SIG undefined FUN_1409f51ce(void)

void FUN_1409f51ce(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*param_1 != 0) {
    FUN_144b3f230();
    *param_1 = 0;
  }
  param_1[1] = 0;
  plVar3 = (longlong *)param_1[2];
  if (plVar3 != (longlong *)0x0) {
    param_1[2] = 0;
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
                    /* WARNING: Could not recover jumptable at 0x0001409f522b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1409f5230 FUN_1409f5230 body=283 status=ok
// SIG undefined FUN_1409f5230(void)

void FUN_1409f5230(undefined8 *param_1,longlong param_2,ulonglong param_3)

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
  local_40 = uVar4 * 8;
  uVar2 = (*DAT_14c787670)(*(undefined1 *)(param_2 + 8),&local_40,*(undefined4 *)(param_2 + 0xc));
  FUN_144b3d470(uVar2,*param_1,(longlong)*(int *)(param_1 + 1) << 3);
  uVar1 = uVar4 * 8 + 8;
  uVar3 = uVar4;
  if (uVar1 <= local_40) {
    uVar3 = uVar4 + 1;
    local_40 = local_40 - 8;
    if (uVar1 <= local_40) {
      uVar3 = uVar3 + (local_40 + uVar4 * -8 >> 3);
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



// FUNCTION 1409f534c FUN_1409f534c body=255 status=ok
// SIG undefined FUN_1409f534c(void)

void FUN_1409f534c(longlong param_1,int param_2)

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



// FUNCTION 1409f544c FUN_1409f544c body=272 status=ok
// SIG undefined FUN_1409f544c(void)

void FUN_1409f544c(longlong param_1,int param_2)

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



// FUNCTION 1409f555c FUN_1409f555c body=271 status=ok
// SIG undefined FUN_1409f555c(void)

void FUN_1409f555c(longlong param_1,int param_2)

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
    uVar5 = lVar4 * 0x70;
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
    auVar2._0_8_ = uVar5 >> 4;
    iVar6 = SUB164(auVar2 * ZEXT816(0x2492492492492493),8);
    iVar8 = 0x7fffffff;
    if ((int)uVar1 <= iVar6) {
      iVar8 = iVar6;
    }
    *(int *)(param_1 + 0xc) = iVar8;
    FUN_1446f8d3c(param_1,param_2,iVar8,0x70,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1409f566c FUN_1409f566c body=176 status=ok
// SIG undefined FUN_1409f566c(void)

void FUN_1409f566c(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_2;
  local_20 = param_2[1];
  if (local_20 != 0) {
    LOCK();
    *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
    UNLOCK();
  }
  FUN_1409f5806(param_1,&local_28);
  FUN_1409f571e(*param_2 + 0x38,param_1 + 0x858);
  FUN_1409f5792(*param_2 + 0x38,param_1 + 0x860);
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
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1409f571e FUN_1409f571e body=114 status=ok
// SIG undefined FUN_1409f571e(void)

undefined8 *** FUN_1409f571e(undefined8 param_1,undefined8 param_2)

{
  undefined8 ****ppppuVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 ***local_20;
  char local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  ppppuVar1 = &local_20;
  local_28 = param_2;
  FUN_1409f6850(param_1,ppppuVar1,1 << (DAT_14cb8a5c8 & 0x1f));
  if ((local_18 == '\x01') || (local_18 == '\x02')) {
    ppppuVar1 = (undefined8 ****)local_20;
  }
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return *ppppuVar1;
}



// FUNCTION 1409f5792 FUN_1409f5792 body=114 status=ok
// SIG undefined FUN_1409f5792(void)

undefined8 *** FUN_1409f5792(undefined8 param_1,undefined8 param_2)

{
  undefined8 ****ppppuVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 ***local_20;
  char local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  ppppuVar1 = &local_20;
  local_28 = param_2;
  FUN_1409f6d50(param_1,ppppuVar1,1 << ((byte)DAT_14cab3280 & 0x1f));
  if ((local_18 == '\x01') || (local_18 == '\x02')) {
    ppppuVar1 = (undefined8 ****)local_20;
  }
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return *ppppuVar1;
}



// FUNCTION 1409f5806 FUN_1409f5806 body=569 status=ok
// SIG undefined FUN_1409f5806(void)

void FUN_1409f5806(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar4 = FUN_14001cc68(0x80,0x10);
  FUN_1409f5c24(lVar4);
  plVar5 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_14a5a4930;
  plVar5[2] = lVar4;
  if ((lVar4 != 0) &&
     (((*(longlong *)(lVar4 + 8) == 0 || (*(longlong *)(lVar4 + 0x10) == 0)) ||
      (*(int *)(*(longlong *)(lVar4 + 0x10) + 8) < 1)))) {
    if (plVar5 == (longlong *)0x0) {
      *(longlong *)(lVar4 + 8) = lVar4;
      plVar6 = *(longlong **)(lVar4 + 0x10);
      if (plVar6 != (longlong *)0x0) {
LAB_1409f59e1:
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar6 + 0x10))();
        }
        *(longlong **)(lVar4 + 0x10) = plVar5;
        if (plVar5 != (longlong *)0x0) goto LAB_1409f58af;
      }
    }
    else {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
      *(longlong *)(lVar4 + 8) = lVar4;
      if (*(longlong **)(lVar4 + 0x10) != plVar5) {
        LOCK();
        *(int *)((longlong)plVar5 + 0xc) = *(int *)((longlong)plVar5 + 0xc) + 1;
        UNLOCK();
        plVar6 = *(longlong **)(lVar4 + 0x10);
        if (plVar6 != (longlong *)0x0) goto LAB_1409f59e1;
        *(longlong **)(lVar4 + 0x10) = plVar5;
      }
LAB_1409f58af:
      LOCK();
      plVar6 = plVar5 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
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
  *(longlong *)(param_1 + 0x338) = lVar4;
  plVar6 = *(longlong **)(param_1 + 0x340);
  if (plVar5 == plVar6) {
    if (plVar5 == (longlong *)0x0) goto LAB_1409f58fb;
    LOCK();
    plVar6 = plVar5 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 != 0) goto LAB_1409f58fb;
    (**(code **)*plVar5)(plVar5);
    LOCK();
    piVar1 = (int *)((longlong)plVar5 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar6 = plVar5;
  }
  else {
    *(longlong **)(param_1 + 0x340) = plVar5;
    if (plVar6 == (longlong *)0x0) goto LAB_1409f58fb;
    LOCK();
    plVar5 = plVar6 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 != 0) goto LAB_1409f58fb;
    (**(code **)*plVar6)(plVar6);
    LOCK();
    piVar1 = (int *)((longlong)plVar6 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  if (iVar2 == 0) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
  }
LAB_1409f58fb:
  local_40 = *param_2;
  local_38 = param_2[1];
  if (local_38 != 0) {
    LOCK();
    *(int *)(local_38 + 8) = *(int *)(local_38 + 8) + 1;
    UNLOCK();
  }
  FUN_1409f5d44(param_1,&local_40);
  local_50 = *param_2;
  local_48 = param_2[1];
  if (local_48 != 0) {
    LOCK();
    *(int *)(local_48 + 8) = *(int *)(local_48 + 8) + 1;
    UNLOCK();
  }
  FUN_140a22a90(param_1 + -0x28,&local_50);
  puVar3 = (undefined8 *)param_2[1];
  if (puVar3 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar3 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar3)(puVar3);
      LOCK();
      piVar1 = (int *)((longlong)puVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_78);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1409f5a56 FUN_1409f5a56 body=24 status=ok
// SIG undefined FUN_1409f5a56(void)

void FUN_1409f5a56(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001409f5a6a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 1409f5a6e FUN_1409f5a6e body=38 status=ok
// SIG undefined FUN_1409f5a6e(void)

undefined8 FUN_1409f5a6e(undefined8 param_1,int param_2)

{
  FUN_1409f5a94();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1409f5a94 FUN_1409f5a94 body=57 status=ok
// SIG undefined FUN_1409f5a94(void)

void FUN_1409f5a94(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a5a2630;
  FUN_1409f5b5f(param_1[0xe],*(undefined4 *)(param_1 + 0xf));
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  FUN_1409f5ace(param_1);
  return;
}



// FUNCTION 1409f5ace FUN_1409f5ace body=89 status=ok
// SIG undefined FUN_1409f5ace(void)

void FUN_1409f5ace(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_LAB_14a492a60;
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_1409f5b28(param_1 + 3);
  plVar2 = (longlong *)param_1[2];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001409f5b23. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 1409f5b28 FUN_1409f5b28 body=55 status=ok
// SIG undefined FUN_1409f5b28(void)

void FUN_1409f5b28(longlong *param_1)

{
  FUN_1409f5ba8(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1409f5b5f FUN_1409f5b5f body=73 status=ok
// SIG undefined FUN_1409f5b5f(void)

void FUN_1409f5b5f(longlong param_1,int param_2)

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



// FUNCTION 1409f5ba8 FUN_1409f5ba8 body=123 status=ok
// SIG undefined FUN_1409f5ba8(void)

void FUN_1409f5ba8(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_1404782a4(param_1,param_2);
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



// FUNCTION 1409f5c24 FUN_1409f5c24 body=287 status=ok
// SIG undefined FUN_1409f5c24(void)

undefined8 * FUN_1409f5c24(undefined8 *param_1)

{
  undefined4 uVar1;
  longlong *plVar2;
  undefined1 auStack_58 [40];
  char *local_30;
  undefined4 local_28;
  undefined1 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  *param_1 = &PTR_FUN_14a5a2630;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  local_30 = "LevelSequence";
  local_28 = 0xd;
  local_24 = 0;
  uVar1 = FUN_14001a6c0(&local_30,1);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c874a20) {
    FUN_144b3d300(&DAT_14c874a20);
    if (DAT_14c874a20 == -1) {
      FUN_145762954(&DAT_14c874628);
      DAT_14c874a18 = 1;
      atexit(FUN_14278de47);
      _Init_thread_footer(&DAT_14c874a20);
    }
  }
  plVar2 = (longlong *)FUN_1401e3324(&DAT_14c874628,uVar1);
  (**(code **)(*plVar2 + 0x48))(plVar2,param_1 + 0xe);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1409f5d44 FUN_1409f5d44 body=386 status=ok
// SIG undefined FUN_1409f5d44(void)

void FUN_1409f5d44(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  byte *pbVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined1 auStack_58 [40];
  undefined1 local_30 [16];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14086f918(*param_2 + 0x38,local_30,1 << ((byte)DAT_14cab36b8 & 0x1f),param_1 + 0x3c);
  lVar8 = *param_2;
  uVar6 = FUN_140cb5476(lVar8 + 0x38,param_1 + 2);
  FUN_1409e50e6(lVar8,uVar6);
  plVar7 = (longlong *)(**(code **)(*param_1 + 0x60))(param_1);
  if (plVar7 != param_1 + 0x2e) {
    FUN_140cad4ca(*param_2 + 0x38,plVar7);
  }
  FUN_140cb8b20(*param_2 + 0x38,param_1);
  FUN_140cab628(*param_2 + 0x38,param_1 + 1);
  lVar8 = (**(code **)(*param_1 + 0x58))(param_1);
  if (lVar8 != 0) {
    FUN_140ca19ea(*param_2 + 0x38,lVar8);
  }
  lVar8 = *param_2;
  if (((*(int *)(lVar8 + 0x24) != 0) && (uVar4 = *(uint *)(lVar8 + 0x20), -1 < (int)uVar4)) &&
     ((int)uVar4 < DAT_14c9647dc)) {
    plVar7 = (longlong *)
             ((ulonglong)((uVar4 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8));
    if (((plVar7 != (longlong *)0x0) && ((int)plVar7[2] == *(int *)(lVar8 + 0x24))) &&
       (((*(uint *)(plVar7 + 1) & 0x10200000) == 0 &&
        ((*plVar7 != 0 && (lVar5 = *(longlong *)(*plVar7 + 0x548), lVar5 != 0)))))) {
      lVar5 = *(longlong *)(lVar5 + 8);
      lVar8 = (ulonglong)*(ushort *)(lVar8 + 0x30) * 0x128;
      pbVar3 = (byte *)(lVar5 + 0x126 + lVar8);
      *pbVar3 = *pbVar3 | 1;
      FUN_140a462a4(lVar5 + lVar8,CONCAT71((int7)((ulonglong)lVar5 >> 8),1));
    }
  }
  plVar7 = (longlong *)param_2[1];
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
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1409f5ec8 FUN_1409f5ec8 body=2045 status=ok
// SIG undefined FUN_1409f5ec8(void)

void FUN_1409f5ec8(longlong param_1,longlong *param_2)

{
  int *piVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  char cVar11;
  char cVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  undefined8 *puVar16;
  longlong *plVar17;
  longlong lVar18;
  undefined8 *puVar19;
  int iVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  int iVar23;
  longlong lVar24;
  undefined8 *puVar25;
  longlong lVar26;
  undefined8 *puVar27;
  int iVar28;
  int iVar29;
  undefined8 *puVar30;
  undefined8 *puVar31;
  ulonglong uVar32;
  bool bVar33;
  float fVar34;
  undefined1 auStack_3a8 [40];
  longlong *local_380;
  undefined8 *local_378;
  undefined8 *local_370;
  undefined8 local_368;
  longlong local_360;
  longlong local_358;
  longlong *local_350;
  undefined4 local_348 [188];
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_3a8;
  iVar14 = *(int *)(param_1 + 0x18);
  if ((longlong)iVar14 != 0) {
    lVar26 = *(longlong *)(param_1 + 0x10);
    lVar24 = 0;
    do {
      if (*(int *)(lVar26 + 8 + lVar24) == 0) {
        plVar17 = (longlong *)0x0;
      }
      else {
        plVar17 = *(longlong **)(lVar26 + lVar24);
      }
      (**(code **)(*plVar17 + 0x58))();
      lVar18 = param_2[1];
      uVar13 = (int)lVar18 + 1;
      *(uint *)(param_2 + 1) = uVar13;
      if (*(uint *)((longlong)param_2 + 0xc) < uVar13) {
        FUN_1409f6742(param_2);
      }
      plVar17 = local_350;
      lVar3 = *param_2;
      lVar18 = (longlong)(int)lVar18 * 0x10;
      *(longlong *)(lVar3 + lVar18) = local_358;
      *(longlong **)(lVar3 + 8 + lVar18) = local_350;
      if (local_350 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_350 + 1) = (int)local_350[1] + 1;
        UNLOCK();
        if (local_350 != (longlong *)0x0) {
          LOCK();
          plVar4 = local_350 + 1;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)*plVar4 == 0) {
            (**(code **)*local_350)();
            LOCK();
            piVar1 = (int *)((longlong)plVar17 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar17 + 0x10))();
            }
          }
        }
      }
      lVar24 = lVar24 + 0x10;
    } while ((longlong)iVar14 * 0x10 != lVar24);
  }
  iVar14 = (int)param_2[1];
  if (1 < (longlong)iVar14) {
    lVar26 = *param_2;
    memset(local_348,0,0x2f0);
    local_350 = (longlong *)((longlong)iVar14 * 0x10 + lVar26 + -0x10);
    local_358 = lVar26;
    fVar34 = logf((float)iVar14);
    local_348[0] = (int)(longlong)(fVar34 + fVar34);
    plVar17 = &local_358;
    do {
      local_380 = plVar17;
      puVar19 = (undefined8 *)*local_380;
      puVar25 = (undefined8 *)local_380[1];
      iVar14 = (int)local_380[2];
      iVar15 = (int)((ulonglong)((longlong)puVar25 - (longlong)puVar19) >> 4);
      uVar32 = (ulonglong)(iVar15 + 1);
      puVar21 = puVar19;
      puVar16 = puVar25;
      if (iVar14 != 0) {
LAB_1409f6004:
        local_378 = puVar19;
        if (8 < (int)(uint)uVar32) {
          uVar32 = (ulonglong)((uint)uVar32 >> 1);
          uVar7 = puVar19[uVar32 * 2];
          uVar8 = (puVar19 + uVar32 * 2)[1];
          uVar9 = puVar19[1];
          puVar19[uVar32 * 2] = *puVar19;
          (puVar19 + uVar32 * 2)[1] = uVar9;
          local_58._0_4_ = (undefined4)uVar7;
          local_58._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
          uStack_50._0_4_ = (undefined4)uVar8;
          uStack_50._4_4_ = (undefined4)((ulonglong)uVar8 >> 0x20);
          *(undefined4 *)puVar19 = (undefined4)local_58;
          *(undefined4 *)((longlong)puVar19 + 4) = local_58._4_4_;
          *(undefined4 *)(puVar19 + 1) = (undefined4)uStack_50;
          *(undefined4 *)((longlong)puVar19 + 0xc) = uStack_50._4_4_;
          puVar31 = puVar25 + 2;
          do {
            puVar10 = puVar19 + 2;
            puVar27 = puVar19 + 2;
            do {
              puVar19 = puVar27;
              puVar22 = puVar10;
              if (puVar25 < puVar19) break;
              local_58 = *puVar19;
              uStack_50 = puVar19[1];
              if (uStack_50 != 0) {
                LOCK();
                *(int *)(uStack_50 + 8) = *(int *)(uStack_50 + 8) + 1;
                UNLOCK();
              }
              local_368 = *local_378;
              local_360 = local_378[1];
              if (local_360 != 0) {
                LOCK();
                *(int *)(local_360 + 8) = *(int *)(local_360 + 8) + 1;
                UNLOCK();
              }
              cVar11 = FUN_14337939a(&local_368,&local_58);
              puVar10 = puVar22 + 2;
              puVar27 = puVar19 + 2;
            } while (cVar11 == '\0');
            puVar10 = puVar31 + -4;
            do {
              puVar27 = puVar31;
              puVar30 = puVar10;
              puVar31 = puVar27 + -2;
              if (puVar31 <= local_378) break;
              local_58 = *local_378;
              uStack_50 = local_378[1];
              if (uStack_50 != 0) {
                LOCK();
                *(int *)(uStack_50 + 8) = *(int *)(uStack_50 + 8) + 1;
                UNLOCK();
              }
              local_368 = *puVar31;
              local_360 = puVar27[-1];
              if (local_360 != 0) {
                LOCK();
                *(int *)(local_360 + 8) = *(int *)(local_360 + 8) + 1;
                UNLOCK();
              }
              cVar11 = FUN_14337939a(&local_368,&local_58);
              puVar10 = puVar30 + -2;
            } while (cVar11 == '\0');
            if (puVar31 < puVar19) goto LAB_1409f65e7;
            uVar7 = *puVar19;
            uVar8 = puVar19[1];
            uVar9 = puVar27[-1];
            *puVar19 = *puVar31;
            puVar19[1] = uVar9;
            local_58._0_4_ = (undefined4)uVar7;
            local_58._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
            uStack_50._0_4_ = (undefined4)uVar8;
            uStack_50._4_4_ = (undefined4)((ulonglong)uVar8 >> 0x20);
            *(undefined4 *)puVar31 = (undefined4)local_58;
            *(undefined4 *)((longlong)puVar27 + -0xc) = local_58._4_4_;
            *(undefined4 *)(puVar27 + -1) = (undefined4)uStack_50;
            *(undefined4 *)((longlong)puVar27 + -4) = uStack_50._4_4_;
          } while( true );
        }
        if (puVar19 < puVar25) {
          local_370 = puVar19 + 2;
          puVar21 = local_370;
          do {
            for (; puVar21 <= puVar25; puVar21 = puVar21 + 2) {
              plVar17 = (longlong *)*puVar21;
              plVar4 = (longlong *)puVar21[1];
              if (plVar4 != (longlong *)0x0) {
                LOCK();
                *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
                UNLOCK();
              }
              plVar5 = (longlong *)*puVar19;
              plVar6 = (longlong *)puVar19[1];
              if (plVar6 != (longlong *)0x0) {
                LOCK();
                *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
                UNLOCK();
              }
              cVar11 = (**(code **)(*plVar5 + 0x20))(plVar5);
              cVar12 = (**(code **)(*plVar17 + 0x20))(plVar17);
              if ((cVar11 == '\0') || (bVar33 = true, cVar12 != '\0')) {
                cVar11 = (**(code **)(*plVar5 + 0x20))(plVar5);
                cVar12 = (**(code **)(*plVar17 + 0x20))(plVar17);
                if (cVar11 == cVar12) {
                  iVar14 = (**(code **)(*plVar5 + 0x28))(plVar5);
                  iVar15 = (**(code **)(*plVar17 + 0x28))(plVar17);
                  bVar33 = iVar15 < iVar14;
                }
                else {
                  bVar33 = false;
                }
              }
              if (plVar6 != (longlong *)0x0) {
                LOCK();
                plVar17 = plVar6 + 1;
                *(int *)plVar17 = (int)*plVar17 + -1;
                UNLOCK();
                if ((int)*plVar17 == 0) {
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
              if (plVar4 != (longlong *)0x0) {
                LOCK();
                plVar17 = plVar4 + 1;
                *(int *)plVar17 = (int)*plVar17 + -1;
                UNLOCK();
                if ((int)*plVar17 == 0) {
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
              puVar16 = puVar21;
              if (!bVar33) {
                puVar16 = puVar19;
              }
              puVar19 = puVar16;
            }
            local_58 = *puVar19;
            uStack_50 = puVar19[1];
            uVar8 = local_58;
            lVar26 = uStack_50;
            uVar7 = puVar25[1];
            *puVar19 = *puVar25;
            puVar19[1] = uVar7;
            local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
            uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
            *(undefined4 *)puVar25 = (undefined4)local_58;
            *(undefined4 *)((longlong)puVar25 + 4) = local_58._4_4_;
            *(undefined4 *)(puVar25 + 1) = (undefined4)uStack_50;
            *(undefined4 *)((longlong)puVar25 + 0xc) = uStack_50._4_4_;
            puVar25 = puVar25 + -2;
            local_58 = uVar8;
            uStack_50 = lVar26;
            puVar19 = local_378;
            puVar21 = local_370;
          } while (local_378 < puVar25);
        }
        goto LAB_1409f6160;
      }
LAB_1409f61c5:
      iVar14 = (int)uVar32;
      if (iVar14 != 0) {
        iVar15 = (iVar15 - (iVar15 + -1 >> 0x1f)) + -1 >> 1;
        iVar23 = iVar15;
joined_r0x0001409f61f3:
        do {
          iVar29 = iVar15 * 2 + 1;
          if (iVar29 < iVar14) {
            iVar28 = iVar15 * 2 + 2;
            iVar20 = iVar29;
            if (iVar28 < iVar14) {
              local_58 = puVar19[(longlong)iVar29 * 2];
              uStack_50 = puVar19[(longlong)iVar29 * 2 + 1];
              if (uStack_50 != 0) {
                LOCK();
                *(int *)(uStack_50 + 8) = *(int *)(uStack_50 + 8) + 1;
                UNLOCK();
              }
              local_368 = puVar19[(longlong)iVar28 * 2];
              local_360 = (puVar19 + (longlong)iVar28 * 2)[1];
              if (local_360 != 0) {
                LOCK();
                *(int *)(local_360 + 8) = *(int *)(local_360 + 8) + 1;
                UNLOCK();
              }
              cVar11 = FUN_14337939a(&local_368,&local_58);
              iVar20 = iVar28;
              if (cVar11 != '\0') {
                iVar20 = iVar29;
              }
            }
            lVar26 = (longlong)iVar20;
            local_58 = puVar19[lVar26 * 2];
            uStack_50 = puVar19[lVar26 * 2 + 1];
            if (uStack_50 != 0) {
              LOCK();
              *(int *)(uStack_50 + 8) = *(int *)(uStack_50 + 8) + 1;
              UNLOCK();
            }
            puVar25 = puVar19 + (longlong)iVar15 * 2;
            local_368 = *puVar25;
            local_360 = puVar25[1];
            if (local_360 != 0) {
              LOCK();
              *(int *)(local_360 + 8) = *(int *)(local_360 + 8) + 1;
              UNLOCK();
            }
            cVar11 = FUN_14337939a(&local_368,&local_58);
            if (cVar11 != '\0') {
              puVar21 = puVar19 + lVar26 * 2;
              local_58 = *puVar25;
              uStack_50 = puVar25[1];
              uVar8 = local_58;
              lVar26 = uStack_50;
              uVar7 = puVar21[1];
              *puVar25 = *puVar21;
              puVar25[1] = uVar7;
              local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
              uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
              *(undefined4 *)puVar21 = (undefined4)local_58;
              *(undefined4 *)((longlong)puVar21 + 4) = local_58._4_4_;
              *(undefined4 *)(puVar21 + 1) = (undefined4)uStack_50;
              *(undefined4 *)((longlong)puVar21 + 0xc) = uStack_50._4_4_;
              iVar15 = iVar20;
              local_58 = uVar8;
              uStack_50 = lVar26;
              goto joined_r0x0001409f61f3;
            }
          }
          bVar33 = iVar23 != 0;
          iVar15 = iVar23 + -1;
          iVar23 = iVar15;
        } while (bVar33);
        if (1 < iVar14) {
          uVar32 = uVar32 - 1;
          local_58 = *puVar19;
          uStack_50 = puVar19[1];
          uVar8 = local_58;
          lVar26 = uStack_50;
          uVar7 = (puVar19 + uVar32 * 2)[1];
          *puVar19 = puVar19[uVar32 * 2];
          puVar19[1] = uVar7;
          local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
          uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
          puVar25 = puVar19 + uVar32 * 2;
          *(undefined4 *)puVar25 = (undefined4)local_58;
          *(undefined4 *)((longlong)puVar25 + 4) = local_58._4_4_;
          *(undefined4 *)(puVar25 + 1) = (undefined4)uStack_50;
          *(undefined4 *)((longlong)puVar25 + 0xc) = uStack_50._4_4_;
          local_58 = uVar8;
          uStack_50 = lVar26;
          if (iVar14 != 2) {
            do {
              iVar14 = 0;
              iVar23 = 1;
              iVar15 = 0;
              do {
                iVar14 = iVar14 + 2;
                iVar29 = iVar23;
                if ((longlong)iVar14 < (longlong)uVar32) {
                  local_58 = puVar19[(longlong)iVar23 * 2];
                  uStack_50 = puVar19[(longlong)iVar23 * 2 + 1];
                  if (uStack_50 != 0) {
                    LOCK();
                    *(int *)(uStack_50 + 8) = *(int *)(uStack_50 + 8) + 1;
                    UNLOCK();
                  }
                  local_368 = puVar19[(longlong)iVar14 * 2];
                  local_360 = (puVar19 + (longlong)iVar14 * 2)[1];
                  if (local_360 != 0) {
                    LOCK();
                    *(int *)(local_360 + 8) = *(int *)(local_360 + 8) + 1;
                    UNLOCK();
                  }
                  cVar11 = FUN_14337939a(&local_368,&local_58);
                  iVar29 = iVar14;
                  if (cVar11 != '\0') {
                    iVar29 = iVar23;
                  }
                }
                lVar26 = (longlong)iVar29;
                local_58 = puVar19[lVar26 * 2];
                uStack_50 = puVar19[lVar26 * 2 + 1];
                if (uStack_50 != 0) {
                  LOCK();
                  *(int *)(uStack_50 + 8) = *(int *)(uStack_50 + 8) + 1;
                  UNLOCK();
                }
                puVar25 = puVar19 + (longlong)iVar15 * 2;
                local_368 = *puVar25;
                local_360 = puVar25[1];
                if (local_360 != 0) {
                  LOCK();
                  *(int *)(local_360 + 8) = *(int *)(local_360 + 8) + 1;
                  UNLOCK();
                }
                cVar11 = FUN_14337939a(&local_368,&local_58);
                if (cVar11 == '\0') break;
                puVar21 = puVar19 + lVar26 * 2;
                uVar7 = *puVar25;
                uVar8 = puVar25[1];
                uVar9 = puVar21[1];
                *puVar25 = *puVar21;
                puVar25[1] = uVar9;
                local_58._0_4_ = (undefined4)uVar7;
                local_58._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
                uStack_50._0_4_ = (undefined4)uVar8;
                uStack_50._4_4_ = (undefined4)((ulonglong)uVar8 >> 0x20);
                *(undefined4 *)puVar21 = (undefined4)local_58;
                *(undefined4 *)((longlong)puVar21 + 4) = local_58._4_4_;
                *(undefined4 *)(puVar21 + 1) = (undefined4)uStack_50;
                *(undefined4 *)((longlong)puVar21 + 0xc) = uStack_50._4_4_;
                iVar14 = iVar29 * 2;
                iVar23 = iVar29 * 2 + 1;
                iVar15 = iVar29;
              } while ((longlong)iVar23 < (longlong)uVar32);
              uVar2 = uVar32 - 1;
              local_58 = *puVar19;
              uStack_50 = puVar19[1];
              uVar8 = local_58;
              lVar26 = uStack_50;
              uVar7 = (puVar19 + uVar2 * 2)[1];
              *puVar19 = puVar19[uVar2 * 2];
              puVar19[1] = uVar7;
              local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
              uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
              puVar25 = puVar19 + uVar2 * 2;
              *(undefined4 *)puVar25 = (undefined4)local_58;
              *(undefined4 *)((longlong)puVar25 + 4) = local_58._4_4_;
              *(undefined4 *)(puVar25 + 1) = (undefined4)uStack_50;
              *(undefined4 *)((longlong)puVar25 + 0xc) = uStack_50._4_4_;
              bVar33 = 2 < uVar32;
              uVar32 = uVar2;
              local_58 = uVar8;
              uStack_50 = lVar26;
            } while (bVar33);
          }
        }
      }
LAB_1409f6160:
      plVar17 = local_380 + -3;
    } while (&local_358 <= local_380 + -3);
  }
  if ((local_48 ^ (ulonglong)auStack_3a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_1409f65e7:
  local_58 = *local_378;
  uStack_50 = local_378[1];
  uVar8 = local_58;
  lVar26 = uStack_50;
  uVar7 = puVar27[-1];
  *local_378 = *puVar31;
  local_378[1] = uVar7;
  local_58._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  *(undefined4 *)puVar31 = (undefined4)local_58;
  *(undefined4 *)((longlong)puVar27 + -0xc) = local_58._4_4_;
  *(undefined4 *)(puVar27 + -1) = (undefined4)uStack_50;
  *(undefined4 *)((longlong)puVar27 + -4) = uStack_50._4_4_;
  iVar14 = iVar14 + -1;
  puVar27 = puVar27 + -4;
  local_58 = uVar8;
  uStack_50 = lVar26;
  if ((longlong)puVar30 - (longlong)puVar21 < (longlong)puVar16 - (longlong)puVar22) {
    if (puVar19 < puVar25) {
      *local_380 = (longlong)puVar19;
      local_380[1] = (longlong)puVar25;
      *(int *)(local_380 + 2) = iVar14;
      local_380 = local_380 + 3;
    }
    puVar22 = local_378;
    puVar19 = local_378;
    if (puVar31 <= local_378 + 2) goto LAB_1409f6160;
  }
  else {
    if (local_378 + 2 < puVar31) {
      *local_380 = (longlong)local_378;
      local_380[1] = (longlong)puVar27;
      *(int *)(local_380 + 2) = iVar14;
      local_380 = local_380 + 3;
    }
    puVar27 = puVar25;
    puVar30 = puVar25;
    if (puVar25 <= puVar19) goto LAB_1409f6160;
  }
  local_378 = puVar19;
  iVar15 = (int)((ulonglong)((longlong)puVar30 - (longlong)puVar22) >> 4);
  uVar32 = (ulonglong)(iVar15 + 1);
  puVar19 = local_378;
  puVar21 = puVar22;
  puVar25 = puVar27;
  puVar16 = puVar30;
  if (iVar14 == 0) goto LAB_1409f61c5;
  goto LAB_1409f6004;
}



// FUNCTION 1409f66c6 FUN_1409f66c6 body=26 status=ok
// SIG undefined FUN_1409f66c6(void)

undefined8 FUN_1409f66c6(longlong param_1,undefined8 param_2)

{
  (**(code **)(param_1 + 0x18))(param_2);
  return param_2;
}



// FUNCTION 1409f66e0 FUN_1409f66e0 body=97 status=ok
// SIG undefined FUN_1409f66e0(void)

undefined8 * FUN_1409f66e0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar1 = &PTR_LAB_14a5a3a20;
  *param_1 = puVar1;
  puVar2 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar2[1] = &DAT_100000001;
  *puVar2 = &PTR_LAB_14a5a46d0;
  puVar2[2] = puVar1;
  param_1[1] = puVar2;
  return param_1;
}



// FUNCTION 1409f6742 FUN_1409f6742 body=269 status=ok
// SIG undefined FUN_1409f6742(void)

void FUN_1409f6742(longlong param_1,int param_2)

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



// FUNCTION 1409f6850 FUN_1409f6850 body=1279 status=ok
// SIG undefined FUN_1409f6850(void)

longlong * FUN_1409f6850(ulonglong *param_1,longlong *param_2,uint param_3,undefined8 *param_4)

{
  ulonglong uVar1;
  ushort *puVar2;
  byte bVar3;
  longlong *plVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined1 *puVar7;
  byte bVar8;
  int iVar9;
  longlong lVar10;
  ushort uVar11;
  byte *pbVar12;
  void *pvVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  longlong lVar17;
  ushort uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  bool bVar21;
  undefined1 auStack_b8 [44];
  undefined4 local_8c;
  undefined8 *local_88;
  longlong *local_80;
  undefined1 local_78 [32];
  undefined1 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar5 = (uint)param_1[2] | param_3;
  *(uint *)(param_1 + 2) = uVar5;
  uVar5 = param_3 - 1 & uVar5;
  uVar14 = (ulonglong)uVar5 - (ulonglong)(uVar5 >> 1 & 0x55555555);
  uVar14 = (uVar14 >> 2 & 0x3333333333333333) + (uVar14 & 0x3333333333333333);
  uVar19 = ((uVar14 >> 4) + uVar14 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
  uVar20 = uVar19 >> 0x38;
  uVar14 = *param_1;
  bVar8 = *(byte *)((longlong)param_1 + 0xc);
  if (bVar8 == 0) {
    uVar18 = 8;
  }
  else {
    uVar18 = 8;
    lVar10 = 0;
    do {
      uVar11 = (ushort)*(byte *)(uVar14 + 3 + lVar10);
      if (uVar18 < uVar11) {
        uVar18 = uVar11;
      }
      lVar10 = lVar10 + 6;
    } while ((ulonglong)((uint)bVar8 + (uint)bVar8) * 3 != lVar10);
  }
  local_58 = (undefined1 *)0x0;
  local_50 = 0x1000000000;
  local_88 = param_4;
  FUN_14086fe48(local_78,bVar8 + 1);
  lVar10 = (ulonglong)((uint)bVar8 * 2 + 2) * 3;
  bVar3 = (byte)(uVar19 >> 0x38);
  if (uVar20 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = (uint)bVar3 + (uint)(bVar3 == 0);
    pbVar12 = (byte *)(uVar14 + 3);
    uVar15 = 0;
    do {
      uVar16 = -(ulonglong)*pbVar12 & (lVar10 + (ulonglong)*pbVar12) - 1;
      puVar7 = local_58;
      if (local_58 == (undefined1 *)0x0) {
        puVar7 = local_78;
      }
      *(short *)(puVar7 + uVar15 * 2) = (short)uVar16;
      lVar10 = pbVar12[-1] + uVar16;
      uVar15 = uVar15 + 1;
      pbVar12 = pbVar12 + 6;
    } while (uVar5 != uVar15);
  }
  uVar15 = lVar10 + 7U & 0xfffffffffffffff8;
  puVar7 = local_58;
  if (local_58 == (undefined1 *)0x0) {
    puVar7 = local_78;
  }
  uVar16 = (ulonglong)uVar5;
  *(short *)(puVar7 + uVar16 * 2) = (short)uVar15;
  uVar15 = uVar15 + 8;
  if (uVar5 < bVar8) {
    pbVar12 = (byte *)(uVar16 * 6 + 3 + uVar14);
    do {
      uVar15 = -(ulonglong)*pbVar12 & (uVar15 + *pbVar12) - 1;
      puVar7 = local_58;
      if (local_58 == (undefined1 *)0x0) {
        puVar7 = local_78;
      }
      *(short *)(puVar7 + uVar16 * 2 + 2) = (short)uVar15;
      uVar16 = uVar16 + 1;
      uVar15 = pbVar12[-1] + uVar15;
      pbVar12 = pbVar12 + 6;
    } while ((uint)bVar8 != uVar16);
  }
  uVar16 = *param_1;
  if (((ushort)param_1[1] < uVar18) || (*(ushort *)((longlong)param_1 + 10) < uVar15)) {
    uVar6 = (ulonglong)((uint)*(ushort *)((longlong)param_1 + 10) * 2);
    if (uVar15 < uVar6) {
      uVar15 = uVar6;
    }
    *(short *)((longlong)param_1 + 10) = (short)uVar15;
    uVar15 = uVar15 & 0xffff;
    uVar6 = FUN_14001cc68(uVar15,uVar18);
    *param_1 = uVar6;
    local_8c = (undefined4)CONCAT71((int7)(uVar15 >> 8),1);
  }
  else {
    local_8c = 0;
    uVar6 = uVar16;
  }
  bVar8 = *(char *)((longlong)param_1 + 0xc) + 1;
  *(byte *)((longlong)param_1 + 0xc) = bVar8;
  uVar15 = (ulonglong)bVar8;
  iVar9 = bVar8 - 1;
  local_80 = param_2;
  if ((int)(uint)bVar3 < iVar9) {
    pbVar12 = (byte *)((ulonglong)bVar8 * 6 + -10 + uVar14);
    uVar6 = (ulonglong)bVar8;
    do {
      puVar7 = local_58;
      if (local_58 == (undefined1 *)0x0) {
        puVar7 = local_78;
      }
      pvVar13 = (void *)(uVar16 + *(ushort *)(pbVar12 + -2));
      if ((ulonglong)*(ushort *)(pbVar12 + -2) == 0xffff) {
        pvVar13 = (void *)0x0;
      }
      memmove((void *)((ulonglong)*(ushort *)(puVar7 + uVar6 * 2 + -2) + *param_1),pvVar13,
              (ulonglong)*pbVar12);
      uVar15 = uVar6 - 1;
      pbVar12 = pbVar12 + -6;
      lVar10 = uVar6 - 2;
      uVar6 = uVar15;
    } while ((longlong)uVar20 < lVar10);
    iVar9 = (int)uVar15 + -1;
    uVar6 = *param_1;
  }
  puVar7 = local_58;
  if (local_58 == (undefined1 *)0x0) {
    puVar7 = local_78;
  }
  *(undefined8 *)(uVar6 + *(ushort *)(puVar7 + (longlong)iVar9 * 2)) = *local_88;
  if (1 < (int)uVar15) {
    uVar15 = (ulonglong)((int)uVar15 - 2);
    pbVar12 = (byte *)(uVar15 * 6 + 2 + uVar14);
    do {
      puVar7 = local_58;
      if (local_58 == (undefined1 *)0x0) {
        puVar7 = local_78;
      }
      pvVar13 = (void *)(uVar16 + *(ushort *)(pbVar12 + -2));
      if ((ulonglong)*(ushort *)(pbVar12 + -2) == 0xffff) {
        pvVar13 = (void *)0x0;
      }
      memmove((void *)((ulonglong)*(ushort *)(puVar7 + uVar15 * 2) + *param_1),pvVar13,
              (ulonglong)*pbVar12);
      pbVar12 = pbVar12 + -6;
      bVar21 = uVar15 != 0;
      uVar15 = uVar15 - 1;
    } while (bVar21);
  }
  uVar15 = *param_1;
  bVar8 = *(byte *)((longlong)param_1 + 0xc);
  uVar5 = (uint)bVar8;
  iVar9 = bVar8 - 1;
  uVar6 = uVar15;
  if ((int)(uint)bVar3 < iVar9) {
    lVar10 = (ulonglong)((uint)bVar8 + (uint)bVar8) * 3;
    uVar6 = (ulonglong)(uint)bVar8;
    do {
      *(undefined2 *)((uVar15 - 2) + lVar10) = *(undefined2 *)((uVar14 - 8) + lVar10);
      *(undefined4 *)((uVar15 - 6) + lVar10) = *(undefined4 *)((uVar14 - 0xc) + lVar10);
      puVar7 = local_58;
      if (local_58 == (undefined1 *)0x0) {
        puVar7 = local_78;
      }
      *(undefined2 *)((uVar15 - 6) + lVar10) = *(undefined2 *)(puVar7 + uVar6 * 2 + -2);
      uVar1 = uVar6 - 1;
      lVar10 = lVar10 + -6;
      lVar17 = uVar6 - 2;
      uVar6 = uVar1;
    } while ((longlong)uVar20 < lVar17);
    uVar5 = (uint)uVar1;
    iVar9 = uVar5 - 1;
    uVar6 = *param_1;
  }
  puVar2 = (ushort *)(uVar15 + (longlong)iVar9 * 6);
  puVar7 = local_58;
  if (local_58 == (undefined1 *)0x0) {
    puVar7 = local_78;
  }
  uVar18 = *(ushort *)(puVar7 + (longlong)iVar9 * 2);
  *puVar2 = 0xffff;
  puVar2[1] = 0;
  puVar2[2] = 0;
  if (*param_1 <= uVar18 + uVar6) {
    *puVar2 = (short)(uVar18 + uVar6) - (short)*param_1;
  }
  puVar2[1] = 0x808;
  puVar2[2] = 0x100;
  if (1 < (int)uVar5) {
    uVar20 = (ulonglong)(uVar5 - 2);
    lVar10 = uVar20 * 6;
    do {
      *(undefined2 *)(uVar15 + 4 + lVar10) = *(undefined2 *)(uVar14 + 4 + lVar10);
      *(undefined4 *)(uVar15 + lVar10) = *(undefined4 *)(uVar14 + lVar10);
      puVar7 = local_58;
      if (local_58 == (undefined1 *)0x0) {
        puVar7 = local_78;
      }
      *(undefined2 *)(uVar15 + lVar10) = *(undefined2 *)(puVar7 + uVar20 * 2);
      lVar10 = lVar10 + -6;
      bVar21 = uVar20 != 0;
      uVar20 = uVar20 - 1;
    } while (bVar21);
  }
  if (((byte)local_8c & uVar16 != 0) == 1) {
    FUN_1400020a8(uVar16);
  }
  iVar9 = (int)param_1[4];
  *(uint *)(param_1 + 4) = iVar9 + 1U;
  if (*(uint *)((longlong)param_1 + 0x24) < iVar9 + 1U) {
    FUN_14086feca(param_1 + 3,iVar9);
  }
  lVar10 = (uVar19 >> 0x38) * 0x10;
  memmove((void *)(param_1[3] + lVar10 + 0x10),(void *)(param_1[3] + lVar10),
          (ulonglong)(iVar9 - (uint)bVar3) << 4);
  plVar4 = local_80;
  uVar14 = param_1[3];
  *(undefined1 **)(uVar14 + lVar10) = &LAB_148957fd2;
  *(undefined **)(uVar14 + 8 + lVar10) = &DAT_143e1a9b0;
  lVar10 = 0;
  if ((ulonglong)*puVar2 != 0xffff) {
    lVar10 = *param_1 + (ulonglong)*puVar2;
  }
  *local_80 = (ulonglong)(byte)puVar2[2] + lVar10;
  *(undefined1 *)(local_80 + 1) = *(undefined1 *)((longlong)puVar2 + 5);
  if (local_58 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar4;
}



// FUNCTION 1409f6d50 FUN_1409f6d50 body=1301 status=ok
// SIG undefined FUN_1409f6d50(void)

longlong * FUN_1409f6d50(ulonglong *param_1,longlong *param_2,uint param_3,undefined8 *param_4)

{
  ushort *puVar1;
  byte bVar2;
  longlong *plVar3;
  uint uVar4;
  undefined1 *puVar5;
  byte bVar6;
  int iVar7;
  longlong lVar8;
  ushort uVar9;
  byte *pbVar10;
  void *pvVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong lVar15;
  ushort uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  bool bVar20;
  undefined1 auStack_c8 [44];
  undefined4 local_9c;
  ulonglong local_98;
  ulonglong local_90;
  undefined8 *local_88;
  longlong *local_80;
  undefined1 local_78 [32];
  undefined1 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uVar4 = (uint)param_1[2] | param_3;
  *(uint *)(param_1 + 2) = uVar4;
  uVar4 = param_3 - 1 & uVar4;
  uVar12 = (ulonglong)uVar4 - (ulonglong)(uVar4 >> 1 & 0x55555555);
  uVar12 = (uVar12 >> 2 & 0x3333333333333333) + (uVar12 & 0x3333333333333333);
  uVar17 = ((uVar12 >> 4) + uVar12 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
  uVar18 = uVar17 >> 0x38;
  uVar12 = *param_1;
  bVar6 = *(byte *)((longlong)param_1 + 0xc);
  if (bVar6 == 0) {
    uVar16 = 8;
  }
  else {
    uVar16 = 8;
    lVar8 = 0;
    do {
      uVar9 = (ushort)*(byte *)(uVar12 + 3 + lVar8);
      if (uVar16 < uVar9) {
        uVar16 = uVar9;
      }
      lVar8 = lVar8 + 6;
    } while ((ulonglong)((uint)bVar6 + (uint)bVar6) * 3 != lVar8);
  }
  local_58 = (undefined1 *)0x0;
  local_50 = 0x1000000000;
  FUN_14086fe48(local_78,bVar6 + 1);
  lVar8 = (ulonglong)((uint)bVar6 * 2 + 2) * 3;
  bVar2 = (byte)(uVar17 >> 0x38);
  if (uVar18 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = (uint)bVar2 + (uint)(bVar2 == 0);
    pbVar10 = (byte *)(uVar12 + 3);
    uVar13 = 0;
    do {
      uVar14 = -(ulonglong)*pbVar10 & (lVar8 + (ulonglong)*pbVar10) - 1;
      puVar5 = local_58;
      if (local_58 == (undefined1 *)0x0) {
        puVar5 = local_78;
      }
      *(short *)(puVar5 + uVar13 * 2) = (short)uVar14;
      lVar8 = pbVar10[-1] + uVar14;
      uVar13 = uVar13 + 1;
      pbVar10 = pbVar10 + 6;
    } while (uVar4 != uVar13);
  }
  uVar13 = lVar8 + 7U & 0xfffffffffffffff8;
  puVar5 = local_58;
  if (local_58 == (undefined1 *)0x0) {
    puVar5 = local_78;
  }
  uVar14 = (ulonglong)uVar4;
  *(short *)(puVar5 + uVar14 * 2) = (short)uVar13;
  uVar13 = uVar13 + 8;
  if (uVar4 < bVar6) {
    pbVar10 = (byte *)(uVar14 * 6 + 3 + uVar12);
    do {
      uVar13 = -(ulonglong)*pbVar10 & (uVar13 + *pbVar10) - 1;
      puVar5 = local_58;
      if (local_58 == (undefined1 *)0x0) {
        puVar5 = local_78;
      }
      *(short *)(puVar5 + uVar14 * 2 + 2) = (short)uVar13;
      uVar14 = uVar14 + 1;
      uVar13 = pbVar10[-1] + uVar13;
      pbVar10 = pbVar10 + 6;
    } while (bVar6 != uVar14);
  }
  uVar14 = *param_1;
  local_98 = uVar14;
  if (((ushort)param_1[1] < uVar16) || (*(ushort *)((longlong)param_1 + 10) < uVar13)) {
    uVar14 = (ulonglong)((uint)*(ushort *)((longlong)param_1 + 10) * 2);
    if (uVar13 < uVar14) {
      uVar13 = uVar14;
    }
    *(short *)((longlong)param_1 + 10) = (short)uVar13;
    uVar13 = uVar13 & 0xffff;
    uVar14 = FUN_14001cc68(uVar13,uVar16);
    *param_1 = uVar14;
    local_9c = (undefined4)CONCAT71((int7)(uVar13 >> 8),1);
  }
  else {
    local_9c = 0;
  }
  uVar13 = local_98;
  bVar6 = *(char *)((longlong)param_1 + 0xc) + 1;
  *(byte *)((longlong)param_1 + 0xc) = bVar6;
  uVar19 = (ulonglong)bVar6;
  iVar7 = bVar6 - 1;
  local_80 = param_2;
  if ((int)(uint)bVar2 < iVar7) {
    pbVar10 = (byte *)((ulonglong)bVar6 * 6 + -10 + uVar12);
    uVar14 = (ulonglong)bVar6;
    local_90 = uVar12;
    local_88 = param_4;
    do {
      puVar5 = local_58;
      if (local_58 == (undefined1 *)0x0) {
        puVar5 = local_78;
      }
      pvVar11 = (void *)(uVar13 + *(ushort *)(pbVar10 + -2));
      if ((ulonglong)*(ushort *)(pbVar10 + -2) == 0xffff) {
        pvVar11 = (void *)0x0;
      }
      memmove((void *)((ulonglong)*(ushort *)(puVar5 + uVar14 * 2 + -2) + *param_1),pvVar11,
              (ulonglong)*pbVar10);
      uVar19 = uVar14 - 1;
      pbVar10 = pbVar10 + -6;
      lVar8 = uVar14 - 2;
      uVar14 = uVar19;
    } while ((longlong)uVar18 < lVar8);
    iVar7 = (int)uVar19 + -1;
    uVar14 = *param_1;
    uVar12 = local_90;
    param_4 = local_88;
  }
  puVar5 = local_58;
  if (local_58 == (undefined1 *)0x0) {
    puVar5 = local_78;
  }
  *(undefined8 *)(uVar14 + *(ushort *)(puVar5 + (longlong)iVar7 * 2)) = *param_4;
  if (1 < (int)uVar19) {
    uVar13 = (ulonglong)((int)uVar19 - 2);
    pbVar10 = (byte *)(uVar13 * 6 + 2 + uVar12);
    do {
      puVar5 = local_58;
      if (local_58 == (undefined1 *)0x0) {
        puVar5 = local_78;
      }
      pvVar11 = (void *)(local_98 + *(ushort *)(pbVar10 + -2));
      if ((ulonglong)*(ushort *)(pbVar10 + -2) == 0xffff) {
        pvVar11 = (void *)0x0;
      }
      memmove((void *)((ulonglong)*(ushort *)(puVar5 + uVar13 * 2) + *param_1),pvVar11,
              (ulonglong)*pbVar10);
      pbVar10 = pbVar10 + -6;
      bVar20 = uVar13 != 0;
      uVar13 = uVar13 - 1;
    } while (bVar20);
  }
  uVar13 = *param_1;
  bVar6 = *(byte *)((longlong)param_1 + 0xc);
  uVar4 = (uint)bVar6;
  iVar7 = bVar6 - 1;
  uVar14 = uVar13;
  if ((int)(uint)bVar2 < iVar7) {
    lVar8 = (ulonglong)((uint)bVar6 + (uint)bVar6) * 3;
    uVar14 = (ulonglong)bVar6;
    do {
      *(undefined2 *)((uVar13 - 2) + lVar8) = *(undefined2 *)((uVar12 - 8) + lVar8);
      *(undefined4 *)((uVar13 - 6) + lVar8) = *(undefined4 *)((uVar12 - 0xc) + lVar8);
      puVar5 = local_58;
      if (local_58 == (undefined1 *)0x0) {
        puVar5 = local_78;
      }
      *(undefined2 *)((uVar13 - 6) + lVar8) = *(undefined2 *)(puVar5 + uVar14 * 2 + -2);
      uVar19 = uVar14 - 1;
      lVar8 = lVar8 + -6;
      lVar15 = uVar14 - 2;
      uVar14 = uVar19;
    } while ((longlong)uVar18 < lVar15);
    uVar4 = (uint)uVar19;
    iVar7 = uVar4 - 1;
    uVar14 = *param_1;
  }
  puVar1 = (ushort *)(uVar13 + (longlong)iVar7 * 6);
  puVar5 = local_58;
  if (local_58 == (undefined1 *)0x0) {
    puVar5 = local_78;
  }
  uVar16 = *(ushort *)(puVar5 + (longlong)iVar7 * 2);
  *puVar1 = 0xffff;
  puVar1[1] = 0;
  puVar1[2] = 0;
  if (*param_1 <= uVar16 + uVar14) {
    *puVar1 = (short)(uVar16 + uVar14) - (short)*param_1;
  }
  puVar1[1] = 0x808;
  puVar1[2] = 0x100;
  if (1 < (int)uVar4) {
    uVar18 = (ulonglong)(uVar4 - 2);
    lVar8 = uVar18 * 6;
    do {
      *(undefined2 *)(uVar13 + 4 + lVar8) = *(undefined2 *)(uVar12 + 4 + lVar8);
      *(undefined4 *)(uVar13 + lVar8) = *(undefined4 *)(uVar12 + lVar8);
      puVar5 = local_58;
      if (local_58 == (undefined1 *)0x0) {
        puVar5 = local_78;
      }
      *(undefined2 *)(uVar13 + lVar8) = *(undefined2 *)(puVar5 + uVar18 * 2);
      lVar8 = lVar8 + -6;
      bVar20 = uVar18 != 0;
      uVar18 = uVar18 - 1;
    } while (bVar20);
  }
  if (((byte)local_9c & local_98 != 0) == 1) {
    FUN_1400020a8();
  }
  iVar7 = (int)param_1[4];
  *(uint *)(param_1 + 4) = iVar7 + 1U;
  if (*(uint *)((longlong)param_1 + 0x24) < iVar7 + 1U) {
    FUN_14086feca(param_1 + 3,iVar7);
  }
  lVar8 = (uVar17 >> 0x38) * 0x10;
  memmove((void *)(param_1[3] + lVar8 + 0x10),(void *)(param_1[3] + lVar8),
          (ulonglong)(iVar7 - (uint)bVar2) << 4);
  plVar3 = local_80;
  uVar12 = param_1[3];
  *(undefined1 **)(uVar12 + lVar8) = &LAB_148957fd6;
  *(undefined **)(uVar12 + 8 + lVar8) = &DAT_143e1a9b2;
  lVar8 = 0;
  if ((ulonglong)*puVar1 != 0xffff) {
    lVar8 = *param_1 + (ulonglong)*puVar1;
  }
  *local_80 = (ulonglong)(byte)puVar1[2] + lVar8;
  *(undefined1 *)(local_80 + 1) = *(undefined1 *)((longlong)puVar1 + 5);
  if (local_58 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar3;
}



// FUNCTION 1409f7266 FUN_1409f7266 body=103 status=ok
// SIG undefined FUN_1409f7266(void)

ulonglong FUN_1409f7266(longlong param_1)

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
LAB_1409f72b0:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_1409f72b0;
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



// FUNCTION 1409f72ce FUN_1409f72ce body=109 status=ok
// SIG undefined FUN_1409f72ce(void)

void FUN_1409f72ce(longlong param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  if (*(int *)(param_1 + 0x44) != 0) {
    uVar1 = *(uint *)(param_1 + 0x40);
    uVar3 = 0;
    if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_1409f7323;
    puVar4 = (undefined8 *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if ((puVar4 != (undefined8 *)0x0) &&
       ((*(int *)(puVar4 + 2) == *(int *)(param_1 + 0x44) &&
        ((*(uint *)(puVar4 + 1) & 0x10200000) == 0)))) {
      uVar3 = *puVar4;
      goto LAB_1409f7323;
    }
  }
  uVar3 = 0;
LAB_1409f7323:
  uVar2 = FUN_1409f733c(*(undefined8 *)(param_1 + 0x30),uVar3);
  FUN_1402a7054(param_1,uVar2);
  return;
}



// FUNCTION 1409f733c FUN_1409f733c body=91 status=ok
// SIG undefined FUN_1409f733c(void)

undefined8 FUN_1409f733c(longlong param_1,longlong param_2)

{
  char cVar1;
  char *pcVar2;
  undefined8 uVar3;
  
  if (param_2 == 0) {
LAB_1409f736c:
    uVar3 = 0;
  }
  else {
    if ((*(char *)(param_1 + 0x10) != '\x01') || (cVar1 = FUN_14022747e(param_2), cVar1 == '\0')) {
      if ((*(char *)(param_1 + 0x12) == '\x01') && (cVar1 = FUN_1402273fc(param_2), cVar1 != '\0'))
      {
        return 1;
      }
      if ((*(char *)(param_1 + 0x11) != '\x01') ||
         (pcVar2 = (char *)FUN_1409f7398(param_2), *pcVar2 == '\0')) goto LAB_1409f736c;
    }
    uVar3 = 1;
  }
  return uVar3;
}



// FUNCTION 1409f7398 FUN_1409f7398 body=198 status=ok
// SIG undefined FUN_1409f7398(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1409f7398(void)

{
  longlong *plVar1;
  undefined *puVar2;
  
  plVar1 = (longlong *)FUN_1401654a2();
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001409f73b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar2 = (undefined *)(**(code **)(*plVar1 + 0x20))(plVar1);
    return puVar2;
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb94f48) {
    FUN_144b3d300(&DAT_14cb94f48);
    if (DAT_14cb94f48 == -1) {
      _DAT_14cb94f00 = 0;
      DAT_14cb94f04 = 0;
      DAT_14cb94f10 = 0;
      _DAT_14cb94f08 = 0;
      DAT_14cb94f18 = 0;
      _DAT_14cb94f20 = 0;
      _DAT_14cb94f28 = 2;
      _DAT_14cb94f2c = 0;
      ram0x00014cb94f34 = 0;
      _DAT_14cb94f3c = 0;
      _DAT_14cb94f40 = 2;
      atexit(FUN_143eca5c8);
      _Init_thread_footer(&DAT_14cb94f48);
    }
  }
  return &DAT_14cb94f00;
}



// FUNCTION 1409f745e FUN_1409f745e body=226 status=ok
// SIG undefined FUN_1409f745e(void)

undefined8 * FUN_1409f745e(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b3fa610;
  plVar3 = (longlong *)param_1[0x2c];
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
  if (param_1[0x16] != 0) {
    plVar3 = param_1 + 0x1a;
    if ((longlong *)param_1[0x18] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[0x18];
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if (param_1[0xe] != 0) {
    plVar3 = param_1 + 0x12;
    if ((longlong *)param_1[0x10] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[0x10];
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1409f7540 FUN_1409f7540 body=57 status=ok
// SIG undefined FUN_1409f7540(void)

void FUN_1409f7540(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  
  lVar2 = *(longlong *)(param_1 + 0x10);
  if (lVar2 != 0) {
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



// FUNCTION 1409f759a FUN_1409f759a body=57 status=ok
// SIG undefined FUN_1409f759a(void)

void FUN_1409f759a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba9780 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba9780 = FUN_14171c317(FUN_1418c9c39,uVar1,L"EOakElementalType");
  }
  return;
}



// FUNCTION 1409f75d4 FUN_1409f75d4 body=939 status=ok
// SIG undefined FUN_1409f75d4(void)

undefined8 FUN_1409f75d4(undefined8 param_1,undefined8 *param_2,longlong param_3,uint param_4)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  undefined1 auStack_118 [32];
  longlong *local_f8;
  undefined8 local_f0;
  undefined8 *local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  int local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  longlong lStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  longlong *local_80;
  undefined1 uStack_78;
  undefined7 uStack_77;
  undefined4 local_70;
  undefined4 uStack_6c;
  char local_68;
  longlong local_60;
  int local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_d8 = 0;
  local_e8 = (undefined8 *)0x0;
  uStack_e0 = 0;
  local_d0 = 0xffffffff;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8 = 0;
  lStack_b0 = 0;
  local_a8 = 0;
  local_f0 = *param_2;
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = (longlong *)0x0;
  uStack_78 = 0;
  uStack_77 = 0;
  local_70 = 0;
  uStack_6c = 0;
  local_68 = '\0';
  if ((longlong)(int)DAT_14c9a5fa0 != 0) {
    lVar10 = (longlong)(int)DAT_14c9a5fa0 * 0x18;
    lVar9 = DAT_14c9a5f98;
    do {
      cVar3 = FUN_1409f7980(lVar9,param_3);
      if (cVar3 != '\0') {
        if (lVar9 != 0) goto LAB_1409f7688;
        break;
      }
      lVar9 = lVar9 + 0x18;
      lVar10 = lVar10 + -0x18;
    } while (lVar10 != 0);
  }
  uVar4 = DAT_14c9a5fa0;
  lVar10 = (longlong)(int)DAT_14c9a5fa0;
  DAT_14c9a5fa0 = DAT_14c9a5fa0 + 1;
  if (DAT_14c9a5fa4 < DAT_14c9a5fa0) {
    FUN_145762d1c(uVar4);
  }
  lVar9 = DAT_14c9a5f98;
  puVar8 = (undefined8 *)(DAT_14c9a5f98 + lVar10 * 0x18);
  *puVar8 = 0;
  FUN_14485c47a(puVar8,param_3);
  lVar9 = lVar9 + lVar10 * 0x18;
  local_f8 = (longlong *)(lVar9 + 8);
  *local_f8 = 0;
  *(undefined8 *)(lVar9 + 0x10) = 0;
  if (param_3 == 0) {
    uVar4 = 0;
    iVar12 = 0;
LAB_1409f7950:
    *(uint *)(puVar8 + 2) = iVar12 + 1U;
    if (uVar4 < iVar12 + 1U) {
      FUN_1446f84a2(local_f8,iVar12);
    }
    *(undefined8 *)(*local_f8 + (longlong)iVar12 * 8) = 0;
  }
  else {
    iVar11 = *(int *)(param_3 + 0x48);
    iVar12 = iVar11 + -1;
    if (iVar11 < 1) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar12);
    }
    if (iVar11 == 1) {
      iVar12 = 0;
LAB_1409f794d:
      uVar4 = *(uint *)((longlong)puVar8 + 0x14);
      goto LAB_1409f7950;
    }
    FUN_1402191ca(local_f8,iVar12);
    iVar11 = 0;
    do {
      FUN_1401cfb1c(param_3,&local_60,iVar11);
      iVar2 = local_58 + -1;
      if (local_58 == 0) {
        iVar2 = 0;
      }
      FUN_1446f82e2(&local_50,iVar2,local_60,1);
      lVar10 = local_50;
      if (local_60 != 0) {
        FUN_1400020a8();
      }
      if ((longlong)DAT_14c9a5fb0 != 0) {
        lVar9 = 0;
        do {
          if (*(longlong *)(DAT_14c9a5fa8 + lVar9) == lVar10) goto LAB_1409f788d;
          lVar9 = lVar9 + 8;
        } while ((longlong)DAT_14c9a5fb0 * 8 != lVar9);
      }
      iVar2 = *(int *)(puVar8 + 2);
      *(uint *)(puVar8 + 2) = iVar2 + 1U;
      if (*(uint *)((longlong)puVar8 + 0x14) < iVar2 + 1U) {
        FUN_1446f84a2(local_f8,iVar2);
      }
      *(longlong *)(*local_f8 + (longlong)iVar2 * 8) = lVar10;
LAB_1409f788d:
      iVar11 = iVar11 + 1;
    } while (iVar11 != iVar12);
    iVar12 = *(int *)(puVar8 + 2);
    if (iVar12 < 1) goto LAB_1409f794d;
  }
LAB_1409f7688:
  FUN_1406fa324(&local_e8);
  uVar5 = 0;
  if ((int)param_4 < (int)uStack_e0) {
    uVar5 = (ulonglong)param_4;
  }
  if ((int)param_4 < 0) {
    uVar5 = 0;
  }
  local_d0 = (int)uVar5;
  puVar8 = local_e8;
  if (local_d0 < (int)uStack_e0) {
LAB_1409f76be:
    local_d8 = puVar8[uVar5];
  }
  else {
    puVar7 = local_e8;
    if (local_68 == '\x01') {
      puVar8 = DAT_14c9a6308;
      if (local_d0 < DAT_14c9a6310) goto LAB_1409f76be;
      if ((int)uStack_e0 < 1) {
        puVar7 = DAT_14c9a6308;
      }
    }
    else if ((int)uStack_e0 < 1) {
      local_d8 = 0;
      local_d0 = -1;
      goto LAB_1409f76c9;
    }
    local_d8 = *puVar7;
    local_d0 = 0;
  }
LAB_1409f76c9:
  uVar6 = FUN_140ab6af6(param_1,&local_f0);
  FUN_14072ffb2(CONCAT71(uStack_77,uStack_78),local_70);
  if (CONCAT71(uStack_77,uStack_78) != 0) {
    FUN_1400020a8();
  }
  if (local_80 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_80 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_80 + 0x10))();
    }
  }
  if (lStack_b0 != 0) {
    FUN_1400020a8();
  }
  if (local_e8 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6;
}



// FUNCTION 1409f7980 FUN_1409f7980 body=315 status=ok
// SIG undefined FUN_1409f7980(void)

ulonglong FUN_1409f7980(uint *param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
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
    uVar3 = 0;
  }
  else {
    local_28 = *(uint *)(param_2 + 0xc);
    if ((int)local_28 < DAT_14c9647dc) {
      lVar5 = (ulonglong)((local_28 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_28 >> 0x10) * 8);
      param_2 = DAT_14c9647c8;
    }
    else {
      lVar5 = 0;
    }
    uVar3 = *(uint *)(lVar5 + 0x10);
    if (*(uint *)(lVar5 + 0x10) == 0) {
      LOCK();
      iVar2 = DAT_14c964868 + 1;
      UNLOCK();
      uVar6 = DAT_14c964868 + 1;
      bVar7 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar2;
      if (bVar7) {
        param_2 = 0x23d;
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar6);
      }
      LOCK();
      uVar3 = *(uint *)(lVar5 + 0x10);
      bVar7 = uVar3 == 0;
      if (bVar7) {
        *(uint *)(lVar5 + 0x10) = uVar6;
        uVar3 = 0;
      }
      UNLOCK();
      if (bVar7) {
        uVar3 = uVar6;
      }
    }
  }
  uVar6 = *param_1;
  uVar1 = param_1[1];
  local_24 = uVar3;
  if ((uVar6 != local_28) || (uVar4 = CONCAT71((int7)((ulonglong)param_2 >> 8),1), uVar1 != uVar3))
  {
    if (((uVar1 == 0) ||
        ((((int)uVar6 < 0 || (DAT_14c9647dc <= (int)uVar6)) ||
         (lVar5 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8), lVar5 == 0)))) ||
       ((*(uint *)(lVar5 + 0x10) != uVar1 || ((*(uint *)(lVar5 + 8) & 0x10200000) != 0)))) {
      uVar3 = FUN_144729dda(&local_28);
      uVar4 = (ulonglong)uVar3 ^ 1;
    }
    else {
      uVar4 = 0;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4 & 0xffffffff;
}



// FUNCTION 1409f7abc FUN_1409f7abc body=139 status=ok
// SIG undefined FUN_1409f7abc(void)

void FUN_1409f7abc(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  param_2 = (longlong *)*param_2;
  if (param_2 != (longlong *)0x0) {
    lVar1 = (**(code **)(*param_2 + 8))();
    lVar2 = FUN_1409f7b4e();
    if ((lVar2 != 0) && (*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38))) {
      local_28 = (longlong *)0x0;
      if (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
          lVar2 + 0x30) {
        local_28 = param_2;
      }
      goto LAB_1409f7b12;
    }
  }
  local_28 = (longlong *)0x0;
LAB_1409f7b12:
  *(longlong **)(param_1 + 0x21f8) = local_28;
  FUN_140655f5e(param_1);
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1409f7b4e FUN_1409f7b4e body=57 status=ok
// SIG undefined FUN_1409f7b4e(void)

void FUN_1409f7b4e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba4b60 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba4b60 = FUN_140002ddd(FUN_1465bfcd4,uVar1,L"InteractiveSwitchDef");
  }
  return;
}



// FUNCTION 1409f7b88 FUN_1409f7b88 body=96 status=ok
// SIG undefined FUN_1409f7b88(void)

void FUN_1409f7b88(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = (undefined4)DAT_14c966e80;
  uStack_1c = DAT_14c966e80._4_4_;
  uStack_18 = (undefined4)DAT_14c966e88;
  uStack_14 = DAT_14c966e88._4_4_;
  local_10 = DAT_14c966e90;
  if (DAT_14c966e90 != 0) {
    LOCK();
    *(int *)(DAT_14c966e90 + 8) = *(int *)(DAT_14c966e90 + 8) + 1;
    UNLOCK();
  }
  FUN_1409f7bea(param_2,0,&local_20);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1409f7bea FUN_1409f7bea body=150 status=ok
// SIG undefined FUN_1409f7bea(void)

undefined8 * FUN_1409f7bea(undefined8 *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = param_2;
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  param_1[5] = *param_3;
  param_1[6] = param_3[1];
  lVar3 = param_3[2];
  param_1[7] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) & 0xfc;
  *(undefined1 *)((longlong)param_1 + 0x41) = 0;
  param_1[9] = 0;
  plVar4 = (longlong *)param_3[2];
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
  return param_1;
}



// FUNCTION 1409f7c80 FUN_1409f7c80 body=400 status=ok
// SIG undefined FUN_1409f7c80(void)

void FUN_1409f7c80(longlong param_1,undefined8 param_2,undefined4 param_3,longlong *param_4)

{
  double dVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_f8 [32];
  undefined1 local_d8;
  longlong *local_d0;
  undefined4 local_c8;
  longlong local_b8 [2];
  undefined8 local_a8 [7];
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar4 = (**(code **)(*(longlong *)(param_1 + 0x30) + 0x48))(param_1 + 0x30);
  if (lVar4 != 0) {
    plVar7 = (longlong *)(param_1 + 0x80);
    dVar1 = *(double *)(lVar4 + 0x6d0);
    iVar2 = *(int *)(param_1 + 0x88);
    *(uint *)(param_1 + 0x88) = iVar2 + 1U;
    if (*(uint *)(param_1 + 0x8c) < iVar2 + 1U) {
      FUN_140746806(plVar7,iVar2);
    }
    lVar3 = *plVar7;
    local_b8[0] = *param_4;
    local_a8[0] = 0;
    if (local_b8[0] != 0) {
      plVar5 = param_4 + 4;
      if ((longlong *)param_4[2] != (longlong *)0x0) {
        plVar5 = (longlong *)param_4[2];
      }
      (**(code **)*plVar5)(plVar5,local_a8);
    }
    lVar6 = (longlong)iVar2 * 0x3a0;
    local_d0 = local_b8;
    local_c8 = 0x3e4ccccd;
    local_d8 = 0;
    FUN_1409f7e12(lVar3 + lVar6,param_2,param_3,(float)dVar1);
    if (*(float *)(lVar3 + 0x390 + lVar6) + *(float *)(lVar3 + 0x394 + lVar6) <=
        (float)*(double *)(lVar4 + 0x6d0)) {
      FUN_140745f74(lVar3 + lVar6);
      FUN_140745ec4(plVar7,*(int *)(param_1 + 0x88) + -1,1);
    }
  }
  if (*param_4 != 0) {
    plVar7 = param_4 + 4;
    if ((longlong *)param_4[2] != (longlong *)0x0) {
      plVar7 = (longlong *)param_4[2];
    }
    (**(code **)(*plVar7 + 0x10))(plVar7);
  }
  if ((local_70 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1409f7e12 FUN_1409f7e12 body=443 status=ok
// SIG undefined FUN_1409f7e12(void)

longlong FUN_1409f7e12(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                      undefined1 param_5,longlong *param_6,undefined4 param_7)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 uStack_a0;
  longlong local_98;
  longlong lStack_90;
  longlong local_88;
  longlong lStack_80;
  longlong local_78;
  longlong lStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_1403dfaf8();
  uVar2 = DAT_14c8464e8;
  *(undefined8 *)(param_1 + 0x310) = DAT_14c8464e0;
  *(undefined8 *)(param_1 + 0x318) = uVar2;
  *(undefined8 *)(param_1 + 800) = DAT_14c8464f0;
  *(undefined4 *)(param_1 + 0x328) = 0;
  *(undefined2 *)(param_1 + 0x32c) = 0;
  *(undefined4 *)(param_1 + 0x344) = 0;
  *(undefined1 *)(param_1 + 0x348) = 0;
  *(undefined8 *)(param_1 + 0x350) = 0;
  *(undefined8 *)(param_1 + 0x360) = 0;
  *(undefined8 *)(param_1 + 0x390) = 0x3e4ccccd00000000;
  *(undefined8 *)(param_1 + 0x330) = 0;
  *(undefined8 *)(param_1 + 0x338) = 0;
  FUN_1403e0b1c(param_1,param_2);
  *(undefined4 *)(param_1 + 0x344) = param_3;
  *(undefined1 *)(param_1 + 0x348) = param_5;
  if (*param_6 != 0) {
    lVar1 = *(longlong *)(param_1 + 0x350);
    uVar2 = *(undefined8 *)(param_1 + 0x358);
    local_98 = *(longlong *)(param_1 + 0x360);
    lStack_90 = *(longlong *)(param_1 + 0x368);
    local_88 = *(longlong *)(param_1 + 0x370);
    lStack_80 = *(longlong *)(param_1 + 0x378);
    local_78 = *(longlong *)(param_1 + 0x380);
    lStack_70 = *(longlong *)(param_1 + 0x388);
    lVar3 = *param_6;
    lVar4 = param_6[1];
    lVar5 = param_6[2];
    lVar6 = param_6[3];
    lVar7 = param_6[4];
    lVar8 = param_6[5];
    lVar9 = param_6[7];
    *(longlong *)(param_1 + 0x380) = param_6[6];
    *(longlong *)(param_1 + 0x388) = lVar9;
    *(longlong *)(param_1 + 0x370) = lVar7;
    *(longlong *)(param_1 + 0x378) = lVar8;
    *(longlong *)(param_1 + 0x360) = lVar5;
    *(longlong *)(param_1 + 0x368) = lVar6;
    *(longlong *)(param_1 + 0x350) = lVar3;
    *(longlong *)(param_1 + 0x358) = lVar4;
    local_a8._0_4_ = (undefined4)lVar1;
    local_a8._4_4_ = (undefined4)((ulonglong)lVar1 >> 0x20);
    uStack_a0._0_4_ = (undefined4)uVar2;
    uStack_a0._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
    param_6[6] = local_78;
    param_6[7] = lStack_70;
    param_6[4] = local_88;
    param_6[5] = lStack_80;
    param_6[2] = local_98;
    param_6[3] = lStack_90;
    *(undefined4 *)param_6 = (undefined4)local_a8;
    *(undefined4 *)((longlong)param_6 + 4) = local_a8._4_4_;
    *(undefined4 *)(param_6 + 1) = (undefined4)uStack_a0;
    *(undefined4 *)((longlong)param_6 + 0xc) = uStack_a0._4_4_;
    local_a8 = lVar1;
    uStack_a0 = uVar2;
  }
  *(undefined4 *)(param_1 + 0x390) = param_4;
  *(undefined4 *)(param_1 + 0x394) = param_7;
  if (*param_6 != 0) {
    plVar10 = param_6 + 4;
    if ((longlong *)param_6[2] != (longlong *)0x0) {
      plVar10 = (longlong *)param_6[2];
    }
    (**(code **)(*plVar10 + 0x10))(plVar10);
  }
  if ((local_60 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1409f7fce FUN_1409f7fce body=1532 status=ok
// SIG undefined FUN_1409f7fce(void)

void FUN_1409f7fce(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  undefined8 **ppuVar9;
  byte bVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  undefined4 uVar15;
  undefined1 auStack_3c8 [32];
  undefined1 *local_3a8;
  undefined4 local_3a0;
  undefined4 local_398;
  undefined4 local_38c;
  longlong local_388;
  longlong local_380;
  longlong local_378;
  undefined8 **local_370;
  undefined4 local_368;
  undefined8 *local_360;
  undefined4 local_358;
  undefined8 *local_350;
  undefined4 local_348;
  undefined8 local_340;
  undefined4 local_338;
  longlong local_330;
  undefined1 local_328;
  undefined8 local_324;
  undefined4 local_31c;
  undefined1 local_310;
  undefined8 *local_308;
  undefined4 local_300;
  undefined8 **local_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined4 local_210;
  longlong local_208;
  undefined1 local_200;
  undefined8 local_1fc;
  undefined4 local_1f4;
  undefined1 local_1e8;
  undefined8 *local_138;
  undefined8 local_130;
  undefined1 local_128 [16];
  undefined1 *local_118;
  undefined8 local_110;
  undefined1 local_108 [32];
  undefined1 *local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
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
  undefined8 local_98;
  longlong local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_3c8;
  lVar6 = *(longlong *)(param_1 + 0x10);
  local_38c = param_3;
  if (*(int *)(lVar6 + 0x28) != 0) {
    lVar11 = *(longlong *)(param_1 + 0x18);
    local_88 = *(undefined8 *)(lVar11 + 0x20);
    uStack_80 = *(undefined8 *)(lVar11 + 0x28);
    local_78 = *(undefined8 *)(lVar11 + 0x30);
    uStack_70 = *(undefined8 *)(lVar11 + 0x38);
    local_68 = *(undefined8 *)(lVar11 + 0x50);
    uStack_60 = *(undefined8 *)(lVar11 + 0x58);
    local_58 = *(undefined4 *)(lVar11 + 0x60);
    uStack_54 = *(undefined4 *)(lVar11 + 100);
    uStack_50 = *(undefined4 *)(lVar11 + 0x68);
    uStack_4c = *(undefined4 *)(lVar11 + 0x6c);
    lVar11 = *(longlong *)(lVar6 + 0x20);
    if (*(longlong *)(lVar6 + 0x20) == 0) {
      lVar11 = lVar6;
    }
    lVar11 = *(longlong *)(lVar11 + (longlong)(*(int *)(lVar6 + 0x28) + -1) * 8);
    uVar2 = *(undefined8 *)(lVar11 + 0x18);
    lVar11 = *(longlong *)(lVar11 + 0x20);
    local_218 = 0xffffffffffffffff;
    local_210 = 0xffffffff;
    local_200 = 3;
    local_1fc = 0x1000000000;
    local_1f4 = 0;
    local_1e8 = 0;
    local_300 = 1;
    uVar15 = 0;
    local_308 = &local_218;
    local_208 = lVar11;
    FUN_144760590(param_2,&local_308,0);
    uVar1 = (ulonglong)(*(int *)(param_1 + 4) + -1 + (uint)(*(int *)(param_1 + 4) == 0)) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    uVar14 = ~(-1 << ((byte)lVar12 & 0x1f));
    if ((*(byte *)(param_1 + 8) & 2) == 0) {
      uVar5 = 0xffff;
      bVar10 = 0x10;
    }
    else {
      uVar14 = uVar14 + (uVar14 == 0);
      uVar1 = (ulonglong)(uVar14 * 0x10000) * 2 + 1;
      lVar12 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      bVar10 = ((byte)lVar12 ^ 0x3f) - 0xf;
      uVar5 = ~(uVar14 << (bVar10 & 0x1f));
    }
    lVar12 = *(longlong *)(param_1 + 0x10);
    if (*(int *)(lVar12 + 0x28) != 0) {
      lVar13 = *(longlong *)(lVar12 + 0x20);
      if (*(longlong *)(lVar12 + 0x20) == 0) {
        lVar13 = lVar12;
      }
      uVar15 = *(undefined4 *)
                (*(longlong *)(lVar13 + (longlong)(*(int *)(lVar12 + 0x28) + -1) * 8) + 0x4c);
    }
    local_a8 = local_58;
    uStack_a4 = uStack_54;
    uStack_a0 = uStack_50;
    uStack_9c = uStack_4c;
    local_b8 = (undefined4)local_68;
    uStack_b4 = local_68._4_4_;
    uStack_b0 = (undefined4)uStack_60;
    uStack_ac = uStack_60._4_4_;
    local_c8 = (undefined4)local_78;
    uStack_c4 = local_78._4_4_;
    uStack_c0 = (undefined4)uStack_70;
    uStack_bc = uStack_70._4_4_;
    local_d8 = (undefined4)local_88;
    uStack_d4 = local_88._4_4_;
    uStack_d0 = (undefined4)uStack_80;
    uStack_cc = uStack_80._4_4_;
    local_3a0 = local_38c;
    local_3a8 = (undefined1 *)CONCAT44(local_3a8._4_4_,uVar15);
    local_98 = uVar2;
    local_90 = lVar11;
    FUN_1409f85cb(param_2,&local_d8,0,uVar14 << (bVar10 & 0x1f) | uVar5);
    if (1 < *(int *)(lVar6 + 0x28)) {
      local_e8 = (undefined1 *)0x0;
      local_e0 = 0x400000000;
      local_118 = (undefined1 *)0x0;
      local_110 = 0x300000000;
      local_138 = (undefined8 *)0x0;
      local_130 = 0x400000000;
      local_228 = (undefined8 **)0x0;
      local_220 = 0x400000000;
      lVar6 = *(longlong *)(param_1 + 0x10);
      lVar12 = *(longlong *)(lVar6 + 0x20);
      if (*(longlong *)(lVar6 + 0x20) == 0) {
        lVar12 = lVar6;
      }
      if ((longlong)*(int *)(lVar6 + 0x28) != 0) {
        lVar6 = (longlong)*(int *)(lVar6 + 0x28) << 3;
        lVar13 = 0;
        local_380 = lVar6;
        local_378 = lVar12;
        do {
          lVar3 = *(longlong *)(lVar12 + lVar13);
          lVar4 = *(longlong *)(lVar3 + 0x20);
          if (lVar4 != lVar11) {
            local_388 = (longlong)(int)local_e0;
            uVar14 = (int)local_e0 + 1;
            local_e0 = CONCAT44(local_e0._4_4_,uVar14);
            if (local_e0._4_4_ < uVar14) {
              FUN_147af2846(local_108,local_388);
            }
            uVar1 = local_110;
            puVar7 = local_e8;
            if (local_e8 == (undefined1 *)0x0) {
              puVar7 = local_108;
            }
            *(longlong *)(puVar7 + local_388 * 8) = lVar4;
            lVar6 = (longlong)(int)local_110;
            uVar14 = (int)local_110 + 1;
            local_110 = CONCAT44(local_110._4_4_,uVar14);
            if (local_110._4_4_ < uVar14) {
              FUN_1479206c2(local_128,uVar1 & 0xffffffff);
            }
            uVar1 = local_130;
            puVar7 = local_118;
            if (local_118 == (undefined1 *)0x0) {
              puVar7 = local_128;
            }
            *(undefined4 *)(puVar7 + lVar6 * 4) = *(undefined4 *)(lVar3 + 0x4c);
            local_388 = *(undefined8 *)(lVar3 + 0x20);
            lVar6 = (longlong)(int)local_130;
            uVar14 = (int)local_130 + 1;
            local_130 = CONCAT44(local_130._4_4_,uVar14);
            if (local_130._4_4_ < uVar14) {
              FUN_147af293a(&local_218,uVar1 & 0xffffffff);
            }
            uVar1 = local_220;
            puVar8 = local_138;
            if (local_138 == (undefined8 *)0x0) {
              puVar8 = &local_218;
            }
            puVar8[lVar6 * 7] = 0xffffffffffffffff;
            *(undefined4 *)(puVar8 + lVar6 * 7 + 1) = 0xffffffff;
            puVar8[lVar6 * 7 + 2] = local_388;
            *(undefined1 *)(puVar8 + lVar6 * 7 + 3) = 3;
            *(undefined8 *)((longlong)puVar8 + lVar6 * 0x38 + 0x1c) = 0x40000000000;
            *(undefined4 *)((longlong)puVar8 + lVar6 * 0x38 + 0x24) = 0;
            *(undefined1 *)(puVar8 + lVar6 * 7 + 6) = 0;
            puVar8 = *(undefined8 **)(lVar3 + 0x20);
            lVar6 = (longlong)(int)local_220;
            uVar14 = (int)local_220 + 1;
            local_220 = CONCAT44(local_220._4_4_,uVar14);
            if (local_220._4_4_ < uVar14) {
              FUN_147af293a(&local_308,uVar1 & 0xffffffff);
            }
            ppuVar9 = local_228;
            if (local_228 == (undefined8 **)0x0) {
              ppuVar9 = &local_308;
            }
            ppuVar9[lVar6 * 7] = (undefined8 *)0xffffffffffffffff;
            *(undefined4 *)(ppuVar9 + lVar6 * 7 + 1) = 0xffffffff;
            ppuVar9[lVar6 * 7 + 2] = puVar8;
            *(undefined1 *)(ppuVar9 + lVar6 * 7 + 3) = 3;
            *(undefined8 *)((longlong)ppuVar9 + lVar6 * 0x38 + 0x1c) = 0x7000000000;
            *(undefined4 *)((longlong)ppuVar9 + lVar6 * 0x38 + 0x24) = 0;
            *(undefined1 *)(ppuVar9 + lVar6 * 7 + 6) = 0;
            lVar6 = local_380;
            lVar12 = local_378;
          }
          lVar13 = lVar13 + 8;
        } while (lVar6 != lVar13);
      }
      local_350 = &local_340;
      local_340 = 0xffffffffffffffff;
      local_338 = 0xffffffff;
      local_328 = 3;
      local_324 = 0x1000000000;
      local_31c = 0;
      local_310 = 0;
      local_348 = 1;
      local_330 = lVar11;
      FUN_144760590(param_2,&local_350,0);
      local_360 = local_138;
      if (local_138 == (undefined8 *)0x0) {
        local_360 = &local_218;
      }
      local_358 = (int)local_130;
      FUN_144760590(param_2,&local_360,0);
      local_3a8 = local_118;
      if (local_118 == (undefined1 *)0x0) {
        local_3a8 = local_128;
      }
      puVar7 = local_e8;
      if (local_e8 == (undefined1 *)0x0) {
        puVar7 = local_108;
      }
      local_398 = (int)local_e0;
      local_3a0 = 0;
      FUN_1409fc52c(param_2,local_38c,uVar2,puVar7);
      local_370 = local_228;
      if (local_228 == (undefined8 **)0x0) {
        local_370 = &local_308;
      }
      local_368 = (int)local_220;
      FUN_144760590(param_2,&local_370,0);
      FUN_145762dbc(&local_308);
      FUN_145762dbc(&local_218);
      if (local_118 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
      if (local_e8 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
    }
    local_218 = 0xffffffffffffffff;
    local_210 = 0xffffffff;
    local_200 = 3;
    local_1fc = 0x7000000000;
    local_1f4 = 0;
    local_1e8 = 0;
    local_300 = 1;
    local_308 = &local_218;
    local_208 = lVar11;
    FUN_144760590(param_2,&local_308,0);
  }
  if ((local_48 ^ (ulonglong)auStack_3c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1409f85cb FUN_1409f85cb body=16224 status=ok
// SIG undefined FUN_1409f85cb(void)

uint FUN_1409f85cb(ulonglong *param_1,longlong param_2,uint param_3,uint param_4,uint param_5,
                  int param_6)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  size_t sVar3;
  uint *puVar4;
  uint uVar5;
  char cVar6;
  byte bVar7;
  short sVar8;
  void *pvVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  int iVar16;
  int iVar17;
  int *piVar18;
  ulonglong uVar19;
  undefined8 uVar20;
  undefined8 *puVar21;
  longlong lVar22;
  longlong *plVar23;
  longlong lVar24;
  longlong lVar25;
  void *pvVar26;
  longlong *plVar27;
  undefined8 *puVar28;
  longlong *plVar29;
  longlong *plVar30;
  undefined8 *puVar31;
  longlong *plVar32;
  short *psVar33;
  ulonglong uVar34;
  longlong lVar35;
  longlong lVar36;
  longlong lVar37;
  undefined2 uVar38;
  ulonglong *puVar39;
  longlong lVar40;
  undefined4 uVar41;
  void *pvVar42;
  uint uVar43;
  bool bVar44;
  undefined1 auStack_2a8 [32];
  wchar_t *local_288;
  wchar_t *local_280;
  undefined8 local_278;
  char *local_270;
  undefined4 local_268;
  undefined4 local_260;
  undefined8 *local_258;
  undefined1 local_250;
  undefined8 local_248;
  undefined1 local_240;
  longlong local_230;
  longlong local_228;
  ulonglong *local_220;
  longlong local_218;
  undefined8 local_210;
  longlong local_208;
  char local_1f9;
  longlong local_1f8;
  longlong local_1f0;
  uint local_1e4;
  longlong local_1e0;
  longlong local_1d8;
  uint local_1d0;
  int local_1cc;
  uint local_1c8;
  int local_1c4;
  longlong local_1c0;
  longlong local_1b8;
  longlong local_1b0;
  longlong local_1a8;
  longlong local_1a0;
  uint local_198;
  uint local_194;
  ulonglong *local_190;
  ulonglong *local_188;
  longlong local_180;
  longlong local_178;
  undefined8 *local_170;
  undefined4 local_168;
  undefined8 *local_160;
  undefined4 local_158;
  undefined8 *local_150;
  undefined4 local_148;
  undefined8 *local_140;
  undefined4 local_138;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined8 *local_120;
  undefined4 local_118;
  undefined8 local_110;
  undefined4 uStack_108;
  undefined4 uStack_104;
  longlong local_100;
  undefined1 local_f8;
  undefined8 local_f4;
  undefined4 local_ec;
  undefined1 local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  longlong local_c8;
  undefined1 local_c0;
  undefined8 local_bc;
  undefined4 local_b4;
  undefined1 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined1 local_88;
  undefined8 local_84;
  undefined4 local_7c;
  undefined1 local_70;
  int local_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  int local_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_2a8;
  uVar43 = param_5;
  if ((int)param_5 < 0) {
    uVar43 = param_5 + 0x3ff;
  }
  local_194 = *(uint *)(DAT_14cae1b00 + 4);
  iVar16 = (int)uVar43 >> 10;
  if (param_5 + 0x3ff < 0x7ff) {
    iVar16 = 1;
  }
  local_1cc = 0x40;
  if ((int)param_5 < 0x10400) {
    local_1cc = iVar16;
  }
  lVar40 = CONCAT44((int)uVar43 >> 0x1f,(int)uVar43 >> 10);
  iStack_5c = (int)param_5 % 0x400;
  local_198 = *(uint *)(DAT_14cae1b18 + 4) | local_194;
  local_68 = 0;
  iStack_64 = (int)(lVar40 / (longlong)local_1cc);
  iStack_60 = (int)(lVar40 % (longlong)local_1cc);
  uVar20 = *(undefined8 *)
            (&DAT_14ca8c1f0 + (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)param_6 * 2) * 8);
  local_1e4 = param_3;
  local_1c8 = param_4;
  local_58 = local_1cc;
  FUN_1415df36c();
  FUN_1448e935e(uVar20,&local_110,&DAT_14cae1c80,0);
  FUN_1415df36c();
  lVar40 = local_110;
  local_1b0 = CONCAT44(uStack_104,uStack_108);
  FUN_1415b1ee6();
  FUN_1448e935e(uVar20,&local_110,&DAT_14cae1da8,0);
  FUN_1415b1ee6();
  lVar22 = local_110;
  local_1b8 = CONCAT44(uStack_104,uStack_108);
  FUN_1415c54ba();
  FUN_1448e935e(uVar20,&local_110,&DAT_14cae1ed0,0);
  FUN_1415c54ba();
  local_130 = (undefined4)local_110;
  uStack_12c = local_110._4_4_;
  uStack_128 = uStack_108;
  uStack_124 = uStack_104;
  FUN_1415696a2();
  FUN_1448e935e(uVar20,&local_110,&DAT_14cae1ff8,0);
  FUN_1415696a2();
  local_1c0 = CONCAT44(uStack_104,uStack_108);
  local_1f9 = *(char *)(lVar22 + 0xe2);
  local_220 = param_1 + 0x12;
  local_180 = lVar22 + 0xa0;
  local_1f0 = lVar22;
  local_188 = (ulonglong *)(lVar22 + 0xb0);
  local_178 = local_110 + 0xa0;
  local_190 = (ulonglong *)(local_110 + 0xb0);
  uVar43 = 0xf;
  lVar22 = 0;
  iVar16 = 0;
  local_1d8 = lVar40;
  local_230 = local_110;
  local_1a8 = param_2;
  do {
    uVar20 = DAT_14cae1c08;
    if ((local_1c8 & uVar43) == 0) {
      uVar43 = uVar43 << 4;
    }
    else {
      local_1c4 = iVar16;
      if (local_1f9 == '\0') {
        FUN_144a92d28();
        local_280 = (wchar_t *)CONCAT44(local_280._4_4_,1);
        local_288 = (wchar_t *)((ulonglong)local_288 & 0xffffffff00000000);
        (**(code **)(*DAT_14ca83900 + 0x138))(DAT_14ca83900,&local_110,&local_68,DAT_14cae1b68);
        lVar24 = local_110;
        if (local_110 != 0) {
          LOCK();
          *(int *)(local_110 + 8) = *(int *)(local_110 + 8) + 1;
          UNLOCK();
          if (local_110 != 0) {
            LOCK();
            puVar4 = (uint *)(local_110 + 8);
            uVar5 = *puVar4;
            *puVar4 = *puVar4 - 1;
            UNLOCK();
            if ((uVar5 & 0x3fffffff) == 1) {
              puVar4 = (uint *)(local_110 + 8);
              LOCK();
              uVar5 = *puVar4;
              *puVar4 = *puVar4 | 0x40000000;
              UNLOCK();
              if ((uVar5 >> 0x1e & 1) == 0) {
                bVar7 = *(byte *)(local_110 + 0xd);
                plVar32 = (longlong *)FUN_14001cc68(0x10,8);
                plVar32[1] = lVar24;
                plVar23 = DAT_14ca843c0;
                plVar27 = DAT_14ca843c8;
                lVar40 = local_1d8;
                if ((bVar7 & 2) == 0) {
                  do {
                    *plVar32 = (longlong)plVar23;
                    LOCK();
                    bVar44 = plVar23 != DAT_14ca843c0;
                    plVar27 = plVar32;
                    if (bVar44) {
                      plVar23 = DAT_14ca843c0;
                      plVar27 = DAT_14ca843c0;
                    }
                    DAT_14ca843c0 = plVar27;
                    UNLOCK();
                  } while (bVar44);
                }
                else {
                  do {
                    *plVar32 = (longlong)plVar27;
                    LOCK();
                    bVar44 = plVar27 != DAT_14ca843c8;
                    plVar23 = plVar32;
                    if (bVar44) {
                      plVar27 = DAT_14ca843c8;
                      plVar23 = DAT_14ca843c8;
                    }
                    DAT_14ca843c8 = plVar23;
                    UNLOCK();
                  } while (bVar44);
                }
              }
            }
          }
        }
        if (lVar22 != 0) {
          LOCK();
          puVar4 = (uint *)(lVar22 + 8);
          uVar5 = *puVar4;
          *puVar4 = *puVar4 - 1;
          UNLOCK();
          if ((uVar5 & 0x3fffffff) == 1) {
            puVar4 = (uint *)(lVar22 + 8);
            LOCK();
            uVar5 = *puVar4;
            *puVar4 = *puVar4 | 0x40000000;
            UNLOCK();
            if ((uVar5 >> 0x1e & 1) == 0) {
              bVar7 = *(byte *)(lVar22 + 0xd);
              plVar32 = (longlong *)FUN_14001cc68(0x10,8);
              plVar32[1] = lVar22;
              plVar23 = DAT_14ca843c0;
              plVar27 = DAT_14ca843c8;
              if ((bVar7 & 2) == 0) {
                do {
                  *plVar32 = (longlong)plVar23;
                  LOCK();
                  bVar44 = plVar23 != DAT_14ca843c0;
                  plVar27 = plVar32;
                  if (bVar44) {
                    plVar23 = DAT_14ca843c0;
                    plVar27 = DAT_14ca843c0;
                  }
                  DAT_14ca843c0 = plVar27;
                  UNLOCK();
                  lVar40 = local_1d8;
                } while (bVar44);
              }
              else {
                do {
                  *plVar32 = (longlong)plVar27;
                  LOCK();
                  bVar44 = plVar27 != DAT_14ca843c8;
                  plVar23 = plVar32;
                  if (bVar44) {
                    plVar27 = DAT_14ca843c8;
                    plVar23 = DAT_14ca843c8;
                  }
                  DAT_14ca843c8 = plVar23;
                  UNLOCK();
                } while (bVar44);
              }
            }
          }
        }
      }
      else {
        cVar6 = *(char *)((longlong)param_1 + 0x69);
        if (cVar6 == '\0') {
          FUN_14002049c(param_1,1);
        }
        local_280 = (wchar_t *)CONCAT44(local_280._4_4_,1);
        local_288 = (wchar_t *)CONCAT44(local_288._4_4_,0x20);
        piVar18 = (int *)(**(code **)(*DAT_14ca83900 + 0x158))(DAT_14ca83900,param_1,uVar20,0);
        if (cVar6 == '\0') {
          FUN_14002049c(param_1,0);
        }
        piVar18[4] = local_58;
        piVar18[5] = iStack_54;
        piVar18[6] = iStack_50;
        piVar18[7] = iStack_4c;
        *piVar18 = local_68;
        piVar18[1] = iStack_64;
        piVar18[2] = iStack_60;
        piVar18[3] = iStack_5c;
        uVar20 = DAT_14cae1c08;
        lVar24 = lVar22;
        if (*(char *)((longlong)param_1 + 0x69) == '\0') {
          FUN_14002049c(param_1,1);
          (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_1,uVar20);
          FUN_14002049c(param_1,0);
        }
        else {
          (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_1,DAT_14cae1c08);
        }
      }
      local_110 = 0xffffffffffffffff;
      uStack_108 = 0xffffffff;
      local_100 = DAT_14cae1be8;
      local_f8 = 3;
      local_f4 = 0x40000000000;
      local_ec = 0;
      local_e0 = 0;
      local_120 = &local_110;
      local_118 = 1;
      local_1d0 = uVar43;
      FUN_144760590(param_1,&local_120,0);
      if (lVar40 == 0) {
        uVar19 = 0;
      }
      else {
        uVar19 = *(ulonglong *)
                  (*(longlong *)(*(longlong *)(local_1b0 + 8) + 0x50) +
                  (longlong)*(int *)(lVar40 + 0xd4) * 8);
        if (uVar19 == 0) {
          uVar19 = FUN_1400bafc2(*(longlong *)(local_1b0 + 8),(longlong)*(int *)(lVar40 + 0xd4),1);
        }
      }
      uVar20 = FUN_140029432(param_1,uVar19,0);
      param_1[0x37] = uVar19;
      puVar21 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
      puVar28 = puVar21 + 3;
      if ((undefined8 *)param_1[1] < puVar28) {
        FUN_140023dd8(param_1,0x20);
        puVar21 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
        puVar28 = puVar21 + 3;
      }
      *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
      *param_1 = (ulonglong)puVar28;
      *(undefined8 **)param_1[6] = puVar21;
      param_1[6] = (ulonglong)(puVar21 + 1);
      puVar21[1] = 0;
      *puVar21 = &PTR_LAB_14a37d340;
      puVar21[2] = uVar20;
      local_1a0 = lVar24;
      if (lVar40 == 0) {
        lVar22 = 0;
      }
      else {
        lVar22 = *(longlong *)
                  (*(longlong *)(*(longlong *)(local_1b0 + 8) + 0x50) +
                  (longlong)*(int *)(lVar40 + 0xd4) * 8);
        if (lVar22 == 0) {
          lVar22 = FUN_1400bafc2(*(longlong *)(local_1b0 + 8),(longlong)*(int *)(lVar40 + 0xd4),1);
        }
      }
      plVar23 = (longlong *)FUN_144821ef4(param_1);
      uVar20 = DAT_14cae1be8;
      if (*(char *)(lVar40 + 0xe2) != '\0') {
        uVar38 = *(undefined2 *)(lVar40 + 0xe0);
        lVar24 = *plVar23;
        if (*(char *)(lVar40 + 0xe3) == '\a') {
          puVar39 = (ulonglong *)(lVar24 + 0x88);
          lVar40 = (longlong)(int)plVar23[8] + 1;
          puVar28 = *(undefined8 **)(lVar24 + 0x88);
          if ((longlong)(int)plVar23[8] == 0) {
            puVar28 = (undefined8 *)((longlong)puVar28 + 7U & 0xfffffffffffffff8);
            puVar21 = puVar28 + 2;
            puVar31 = puVar28;
            if (*(undefined8 **)(lVar24 + 0x90) < puVar21) {
              FUN_140023dd8(puVar39,0x18);
              puVar28 = (undefined8 *)(*puVar39 + 7 & 0xfffffffffffffff8);
              puVar21 = puVar28 + 2;
              puVar31 = puVar28;
            }
LAB_1409fbbfd:
            *puVar39 = (ulonglong)puVar21;
          }
          else {
            puVar21 = puVar28 + 2;
            if (puVar21 <= *(undefined8 **)(lVar24 + 0x90)) {
              puVar31 = (undefined8 *)plVar23[7];
              goto LAB_1409fbbfd;
            }
            puVar31 = (undefined8 *)((longlong)puVar28 + 7U & 0xfffffffffffffff8);
            puVar28 = puVar31 + lVar40 * 2;
            if (*(undefined8 **)(lVar24 + 0x90) < puVar28) {
              FUN_140023dd8(puVar39);
              puVar31 = (undefined8 *)(*puVar39 + 7 & 0xfffffffffffffff8);
              puVar28 = puVar31 + lVar40 * 2;
            }
            *puVar39 = (ulonglong)puVar28;
            puVar28 = puVar31;
            if (0 < (int)plVar23[8]) {
              lVar24 = 0;
              lVar35 = 0;
              do {
                puVar1 = (undefined4 *)(plVar23[7] + lVar24);
                uVar41 = puVar1[1];
                uVar10 = puVar1[2];
                uVar11 = puVar1[3];
                puVar2 = (undefined4 *)((longlong)puVar31 + lVar24);
                *puVar2 = *puVar1;
                puVar2[1] = uVar41;
                puVar2[2] = uVar10;
                puVar2[3] = uVar11;
                lVar35 = lVar35 + 1;
                lVar24 = lVar24 + 0x10;
              } while (lVar35 < (int)plVar23[8]);
              puVar28 = (undefined8 *)(lVar24 + (longlong)puVar31);
            }
          }
          *puVar28 = uVar20;
          *(undefined2 *)(puVar28 + 1) = uVar38;
          *(undefined1 *)((longlong)puVar28 + 10) = 2;
          plVar23[7] = (longlong)puVar31;
          *(int *)(plVar23 + 8) = (int)lVar40;
          lVar40 = local_1d8;
        }
        else {
          puVar39 = (ulonglong *)(lVar24 + 0x60);
          lVar40 = (longlong)(int)plVar23[6] + 1;
          puVar28 = *(undefined8 **)(lVar24 + 0x60);
          if ((longlong)(int)plVar23[6] == 0) {
            puVar28 = (undefined8 *)((longlong)puVar28 + 7U & 0xfffffffffffffff8);
            puVar21 = puVar28 + 2;
            puVar31 = puVar28;
            if (*(undefined8 **)(lVar24 + 0x68) < puVar21) {
              FUN_140023dd8(puVar39,0x18);
              puVar28 = (undefined8 *)(*puVar39 + 7 & 0xfffffffffffffff8);
              puVar21 = puVar28 + 2;
              puVar31 = puVar28;
            }
LAB_1409f8c19:
            *puVar39 = (ulonglong)puVar21;
          }
          else {
            puVar21 = puVar28 + 2;
            if (puVar21 <= *(undefined8 **)(lVar24 + 0x68)) {
              puVar31 = (undefined8 *)plVar23[5];
              goto LAB_1409f8c19;
            }
            puVar31 = (undefined8 *)((longlong)puVar28 + 7U & 0xfffffffffffffff8);
            puVar28 = puVar31 + lVar40 * 2;
            if (*(undefined8 **)(lVar24 + 0x68) < puVar28) {
              FUN_140023dd8(puVar39);
              puVar31 = (undefined8 *)(*puVar39 + 7 & 0xfffffffffffffff8);
              puVar28 = puVar31 + lVar40 * 2;
            }
            *puVar39 = (ulonglong)puVar28;
            puVar28 = puVar31;
            if (0 < (int)plVar23[6]) {
              lVar24 = 0;
              lVar35 = 0;
              do {
                puVar1 = (undefined4 *)(plVar23[5] + lVar24);
                uVar41 = puVar1[1];
                uVar10 = puVar1[2];
                uVar11 = puVar1[3];
                puVar2 = (undefined4 *)((longlong)puVar31 + lVar24);
                *puVar2 = *puVar1;
                puVar2[1] = uVar41;
                puVar2[2] = uVar10;
                puVar2[3] = uVar11;
                lVar35 = lVar35 + 1;
                lVar24 = lVar24 + 0x10;
              } while (lVar35 < (int)plVar23[6]);
              puVar28 = (undefined8 *)(lVar24 + (longlong)puVar31);
            }
          }
          *puVar28 = uVar20;
          *(undefined2 *)(puVar28 + 1) = uVar38;
          *(undefined1 *)((longlong)puVar28 + 10) = 2;
          plVar23[5] = (longlong)puVar31;
          *(int *)(plVar23 + 6) = (int)lVar40;
          lVar40 = local_1d8;
        }
      }
      iVar16 = (int)plVar23[6] + (int)plVar23[4];
      iVar17 = iVar16 + (int)plVar23[8];
      if (iVar17 != 0 && SCARRY4(iVar16,(int)plVar23[8]) == iVar17 < 0) {
        puVar21 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
        puVar28 = puVar21 + 0xb;
        if ((undefined8 *)param_1[1] < puVar28) {
          FUN_140023dd8(param_1,0x60);
          puVar21 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
          puVar28 = puVar21 + 0xb;
        }
        *param_1 = (ulonglong)puVar28;
        *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
        *(undefined8 **)param_1[6] = puVar21;
        param_1[6] = (ulonglong)(puVar21 + 1);
        lVar24 = plVar23[7];
        lVar37 = plVar23[8];
        lVar35 = plVar23[5];
        lVar13 = plVar23[6];
        lVar25 = plVar23[3];
        lVar14 = plVar23[4];
        lVar36 = plVar23[1];
        lVar15 = plVar23[2];
        puVar21[1] = 0;
        *puVar21 = &PTR_FUN_14a1e7fa8;
        puVar21[2] = lVar22;
        puVar21[3] = lVar36;
        *(int *)(puVar21 + 4) = (int)lVar15;
        puVar21[5] = lVar25;
        *(int *)(puVar21 + 6) = (int)lVar14;
        puVar21[7] = lVar35;
        *(int *)(puVar21 + 8) = (int)lVar13;
        puVar21[9] = lVar24;
        *(int *)(puVar21 + 10) = (int)lVar37;
        plVar23[1] = 0;
        *(undefined4 *)(plVar23 + 2) = 0;
        plVar23[3] = 0;
        *(undefined4 *)(plVar23 + 4) = 0;
        plVar23[5] = 0;
        *(undefined4 *)(plVar23 + 6) = 0;
        plVar23[7] = 0;
        *(undefined4 *)(plVar23 + 8) = 0;
      }
      puVar21 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
      puVar28 = puVar21 + 4;
      if ((undefined8 *)param_1[1] < puVar28) {
        FUN_140023dd8(param_1,0x28);
        puVar21 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
        puVar28 = puVar21 + 4;
      }
      *param_1 = (ulonglong)puVar28;
      *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
      *(undefined8 **)param_1[6] = puVar21;
      param_1[6] = (ulonglong)(puVar21 + 1);
      puVar21[1] = 0;
      *puVar21 = &PTR_LAB_14a1fbc30;
      puVar21[2] = &DAT_100000001;
      *(undefined4 *)(puVar21 + 3) = 1;
      if (DAT_14ca8507b == '\x01') {
        if ((0 < (int)param_1[0x13]) &&
           (*(undefined4 *)(param_1 + 0x13) = 0, *(int *)((longlong)param_1 + 0x9c) < 0)) {
          FUN_147139e90(local_220,0);
        }
        if ((*(char *)(lVar40 + 0xe2) != '\0') && (*(char *)(lVar40 + 0xe3) != '\x06')) {
          uVar38 = *(undefined2 *)(lVar40 + 0xe0);
          iVar16 = (int)param_1[0x13];
          *(uint *)(param_1 + 0x13) = iVar16 + 1U;
          if (*(uint *)((longlong)param_1 + 0x9c) < iVar16 + 1U) {
            FUN_1447477d8(local_220,iVar16);
          }
          uVar19 = *local_220;
          *(undefined2 *)(uVar19 + (longlong)iVar16 * 4) = uVar38;
          *(undefined1 *)(uVar19 + 2 + (longlong)iVar16 * 4) = 1;
        }
        if (lVar40 == 0) {
          lVar22 = 0;
        }
        else {
          lVar22 = *(longlong *)
                    (*(longlong *)(*(longlong *)(local_1b0 + 8) + 0x50) +
                    (longlong)*(int *)(lVar40 + 0xd4) * 8);
          if (lVar22 == 0) {
            lVar22 = FUN_1400bafc2(*(longlong *)(local_1b0 + 8),(longlong)*(int *)(lVar40 + 0xd4),1)
            ;
          }
        }
        uVar19 = param_1[0x13];
        lVar40 = (longlong)(int)uVar19;
        if (0 < lVar40) {
          if (DAT_14ca8507b == '\x01') {
            pvVar9 = (void *)*local_220;
            puVar21 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
            puVar28 = puVar21 + 5;
            if ((undefined8 *)param_1[1] < puVar28) {
              FUN_140023dd8(param_1,0x30);
              puVar21 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
              puVar28 = puVar21 + 5;
            }
            *param_1 = (ulonglong)puVar28;
            *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
            *(undefined8 **)param_1[6] = puVar21;
            param_1[6] = (ulonglong)(puVar21 + 1);
            sVar3 = lVar40 * 4;
            pvVar42 = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
            pvVar26 = (void *)((longlong)pvVar42 + lVar40 * 4);
            if ((void *)param_1[1] < pvVar26) {
              FUN_140023dd8(param_1,(uint)sVar3 | 2);
              pvVar42 = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
              pvVar26 = (void *)((longlong)pvVar42 + sVar3);
            }
            *param_1 = (ulonglong)pvVar26;
            memcpy(pvVar42,pvVar9,sVar3);
            puVar21[1] = 0;
            *puVar21 = &PTR_FUN_14a1fbc38;
            puVar21[2] = lVar22;
            puVar21[3] = pvVar42;
            *(int *)(puVar21 + 4) = (int)uVar19;
          }
          *(undefined4 *)(param_1 + 0x13) = 0;
          if (*(int *)((longlong)param_1 + 0x9c) < 0) {
            FUN_147139e90(local_220,0);
          }
        }
      }
      lVar22 = local_1a8;
      local_228 = (longlong)(int)local_1e4;
      local_100 = *(undefined8 *)(local_1a8 + 0x10 + local_228 * 8);
      local_110 = -1;
      uStack_108 = 0xffffffff;
      local_f8 = 3;
      local_f4 = 0x1000000000;
      local_ec = 0;
      local_e0 = 0;
      local_d8 = 0xffffffffffffffff;
      local_d0 = 0xffffffff;
      local_c8 = DAT_14cae1be8;
      local_c0 = 3;
      local_bc = 0x40000000000;
      local_b4 = 0;
      local_a8 = 0;
      local_140 = &local_110;
      local_138 = 2;
      FUN_144760590(param_1,&local_140,0);
      lVar40 = local_1f0;
      lVar24 = 0x68;
      do {
        if (*(char *)((longlong)&local_110 + lVar24) == '\x01') {
          *(undefined1 *)((longlong)&local_110 + lVar24) = 0;
        }
        lVar24 = lVar24 + -0x38;
      } while (lVar24 != -8);
      if (local_1f0 == 0) {
        uVar19 = 0;
      }
      else {
        uVar19 = *(ulonglong *)
                  (*(longlong *)(*(longlong *)(local_1b8 + 8) + 0x50) +
                  (longlong)*(int *)(local_1f0 + 0xd4) * 8);
        if (uVar19 == 0) {
          uVar19 = FUN_1400bafc2(*(longlong *)(local_1b8 + 8),(longlong)*(int *)(local_1f0 + 0xd4),1
                                );
        }
      }
      uVar20 = FUN_140029432(param_1,uVar19,0);
      param_1[0x37] = uVar19;
      puVar21 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
      puVar28 = puVar21 + 3;
      if ((undefined8 *)param_1[1] < puVar28) {
        FUN_140023dd8(param_1,0x20);
        puVar21 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
        puVar28 = puVar21 + 3;
      }
      *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
      *param_1 = (ulonglong)puVar28;
      *(undefined8 **)param_1[6] = puVar21;
      param_1[6] = (ulonglong)(puVar21 + 1);
      puVar21[1] = 0;
      *puVar21 = &PTR_LAB_14a37d340;
      puVar21[2] = uVar20;
      if (lVar40 == 0) {
        lVar24 = 0;
      }
      else {
        lVar24 = *(longlong *)
                  (*(longlong *)(*(longlong *)(local_1b8 + 8) + 0x50) +
                  (longlong)*(int *)(lVar40 + 0xd4) * 8);
        if (lVar24 == 0) {
          lVar24 = FUN_1400bafc2(*(longlong *)(local_1b8 + 8),(longlong)*(int *)(lVar40 + 0xd4),1);
        }
      }
      plVar23 = (longlong *)FUN_144821ef4(param_1);
      lVar35 = DAT_14cae1c10;
      uVar20 = DAT_14cae1be8;
      lVar22 = *(longlong *)(lVar22 + local_228 * 8);
      if (DAT_14c846b14 == '\x01') {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c926f30) &&
           (FUN_144b3d300(&DAT_14c926f30), DAT_14c926f30 == -1)) {
          FUN_1413288e0(&DAT_14c926ca8);
          atexit(FUN_1427ac032);
          _Init_thread_footer(&DAT_14c926f30);
        }
        if (*(code **)(DAT_14c926ca8 + 0x28) != (code *)&LAB_144aff468) {
          (**(code **)(DAT_14c926ca8 + 0x28))(&DAT_14c926ca8);
        }
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14cae1ba0) && (FUN_144b3d300(&DAT_14cae1ba0), DAT_14cae1ba0 == -1))
      {
        FUN_14606104a(&local_110);
        local_240 = 0;
        local_248 = 0;
        local_250 = 0;
        local_270 = "Unknown";
        local_278 = 0;
        local_280 = L"RadixSortUB";
        local_288 = L"FRadixSortParameters";
        local_260 = 0x20;
        local_268 = 0x36;
        local_258 = &local_110;
        FUN_140b49562(&DAT_14cae1b20,1,1);
        if (local_110 != 0) {
          FUN_1400020a8();
        }
        atexit((_func_5014 *)&LAB_143519d23);
        _Init_thread_footer(&DAT_14cae1ba0);
        lVar40 = local_1f0;
      }
      uVar19 = *(ulonglong *)(lVar40 + 0xa0);
      uVar34 = ((longlong)uVar19 >> 0x18) + local_180;
      if ((uVar19 & 1) == 0) {
        uVar34 = uVar19;
      }
      if (0 < (longlong)*(int *)(lVar40 + 0xa8)) {
        lVar25 = 0;
        do {
          if (*(longlong *)(uVar34 + lVar25 * 4) == DAT_14cae1b48) {
            uVar19 = *local_188;
            if ((uVar19 & 1) != 0) {
              uVar19 = ((longlong)uVar19 >> 0x18) + (longlong)local_188;
            }
            psVar33 = (short *)(uVar19 + lVar25);
            goto LAB_1409f921c;
          }
          lVar25 = lVar25 + 2;
        } while ((longlong)*(int *)(lVar40 + 0xa8) * 2 != lVar25);
      }
      psVar33 = &DAT_14c9c45cc;
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x110) < DAT_14c9c45d0) {
        FUN_144b3d300(&DAT_14c9c45d0);
        psVar33 = &DAT_14c9c45cc;
        if (DAT_14c9c45d0 == -1) {
          DAT_14c9c45cc = 0xffff;
          _Init_thread_footer(&DAT_14c9c45d0);
          psVar33 = &DAT_14c9c45cc;
        }
      }
LAB_1409f921c:
      sVar8 = *psVar33;
      if (sVar8 != -1) {
        lVar25 = *plVar23;
        puVar39 = (ulonglong *)(lVar25 + 0x60);
        lVar40 = (longlong)(int)plVar23[6] + 1;
        plVar27 = *(longlong **)(lVar25 + 0x60);
        if ((longlong)(int)plVar23[6] == 0) {
          plVar27 = (longlong *)((longlong)plVar27 + 7U & 0xfffffffffffffff8);
          plVar32 = plVar27 + 2;
          plVar29 = plVar27;
          if (*(longlong **)(lVar25 + 0x68) < plVar32) {
            local_208 = lVar22;
            FUN_140023dd8(puVar39,0x18);
            plVar27 = (longlong *)(*puVar39 + 7 & 0xfffffffffffffff8);
            plVar32 = plVar27 + 2;
            plVar29 = plVar27;
            lVar22 = local_208;
          }
LAB_1409f926e:
          *puVar39 = (ulonglong)plVar32;
        }
        else {
          plVar32 = plVar27 + 2;
          if (plVar32 <= *(longlong **)(lVar25 + 0x68)) {
            plVar29 = (longlong *)plVar23[5];
            goto LAB_1409f926e;
          }
          plVar29 = (longlong *)((longlong)plVar27 + 7U & 0xfffffffffffffff8);
          plVar27 = plVar29 + lVar40 * 2;
          local_208 = lVar22;
          if (*(longlong **)(lVar25 + 0x68) < plVar27) {
            local_1e0 = lVar40 * 0x10;
            FUN_140023dd8(puVar39,(uint)(lVar40 * 0x10) | 8);
            plVar29 = (longlong *)(*puVar39 + 7 & 0xfffffffffffffff8);
            plVar27 = (longlong *)(local_1e0 + (longlong)plVar29);
          }
          *puVar39 = (ulonglong)plVar27;
          plVar27 = plVar29;
          lVar22 = local_208;
          if (0 < (int)plVar23[6]) {
            lVar25 = 0;
            lVar36 = 0;
            do {
              puVar1 = (undefined4 *)(plVar23[5] + lVar25);
              uVar41 = puVar1[1];
              uVar10 = puVar1[2];
              uVar11 = puVar1[3];
              puVar2 = (undefined4 *)((longlong)plVar29 + lVar25);
              *puVar2 = *puVar1;
              puVar2[1] = uVar41;
              puVar2[2] = uVar10;
              puVar2[3] = uVar11;
              lVar36 = lVar36 + 1;
              lVar25 = lVar25 + 0x10;
            } while (lVar36 < (int)plVar23[6]);
            plVar27 = (longlong *)(lVar25 + (longlong)plVar29);
          }
        }
        *plVar27 = local_1a0;
        *(short *)(plVar27 + 1) = sVar8;
        *(undefined1 *)((longlong)plVar27 + 10) = 4;
        plVar23[5] = (longlong)plVar29;
        *(int *)(plVar23 + 6) = (int)lVar40;
      }
      if (*(char *)(local_1f0 + 0xea) != '\0') {
        uVar38 = *(undefined2 *)(local_1f0 + 0xe8);
        lVar40 = *plVar23;
        if (*(char *)(local_1f0 + 0xeb) == '\a') {
          puVar39 = (ulonglong *)(lVar40 + 0x88);
          lVar25 = (longlong)(int)plVar23[8] + 1;
          puVar28 = *(undefined8 **)(lVar40 + 0x88);
          if ((longlong)(int)plVar23[8] == 0) {
            puVar28 = (undefined8 *)((longlong)puVar28 + 7U & 0xfffffffffffffff8);
            puVar21 = puVar28 + 2;
            puVar31 = puVar28;
            local_208 = lVar22;
            if (*(undefined8 **)(lVar40 + 0x90) < puVar21) {
              FUN_140023dd8(puVar39,0x18);
              puVar28 = (undefined8 *)(*puVar39 + 7 & 0xfffffffffffffff8);
              puVar21 = puVar28 + 2;
              puVar31 = puVar28;
            }
LAB_1409fbc4f:
            *puVar39 = (ulonglong)puVar21;
          }
          else {
            puVar21 = puVar28 + 2;
            if (puVar21 <= *(undefined8 **)(lVar40 + 0x90)) {
              puVar31 = (undefined8 *)plVar23[7];
              local_208 = lVar22;
              goto LAB_1409fbc4f;
            }
            puVar31 = (undefined8 *)((longlong)puVar28 + 7U & 0xfffffffffffffff8);
            puVar28 = puVar31 + lVar25 * 2;
            local_208 = lVar22;
            if (*(undefined8 **)(lVar40 + 0x90) < puVar28) {
              local_1e0 = lVar25 * 0x10;
              FUN_140023dd8(puVar39);
              puVar31 = (undefined8 *)(*puVar39 + 7 & 0xfffffffffffffff8);
              puVar28 = (undefined8 *)(local_1e0 + (longlong)puVar31);
            }
            *puVar39 = (ulonglong)puVar28;
            puVar28 = puVar31;
            if (0 < (int)plVar23[8]) {
              lVar40 = 0;
              lVar22 = 0;
              do {
                puVar1 = (undefined4 *)(plVar23[7] + lVar40);
                uVar41 = puVar1[1];
                uVar10 = puVar1[2];
                uVar11 = puVar1[3];
                puVar2 = (undefined4 *)((longlong)puVar31 + lVar40);
                *puVar2 = *puVar1;
                puVar2[1] = uVar41;
                puVar2[2] = uVar10;
                puVar2[3] = uVar11;
                lVar22 = lVar22 + 1;
                lVar40 = lVar40 + 0x10;
              } while (lVar22 < (int)plVar23[8]);
              puVar28 = (undefined8 *)(lVar40 + (longlong)puVar31);
            }
          }
          *puVar28 = uVar20;
          *(undefined2 *)(puVar28 + 1) = uVar38;
          *(undefined1 *)((longlong)puVar28 + 10) = 2;
          plVar23[7] = (longlong)puVar31;
          *(int *)(plVar23 + 8) = (int)lVar25;
          lVar22 = local_208;
        }
        else {
          puVar39 = (ulonglong *)(lVar40 + 0x60);
          lVar25 = (longlong)(int)plVar23[6] + 1;
          puVar28 = *(undefined8 **)(lVar40 + 0x60);
          if ((longlong)(int)plVar23[6] == 0) {
            puVar28 = (undefined8 *)((longlong)puVar28 + 7U & 0xfffffffffffffff8);
            puVar21 = puVar28 + 2;
            puVar31 = puVar28;
            if (*(undefined8 **)(lVar40 + 0x68) < puVar21) {
              local_208 = CONCAT62(local_208._2_6_,uVar38);
              FUN_140023dd8(puVar39,0x18);
              puVar28 = (undefined8 *)(*puVar39 + 7 & 0xfffffffffffffff8);
              puVar21 = puVar28 + 2;
              puVar31 = puVar28;
              uVar38 = (undefined2)local_208;
            }
LAB_1409f9341:
            *puVar39 = (ulonglong)puVar21;
          }
          else {
            puVar21 = puVar28 + 2;
            if (puVar21 <= *(undefined8 **)(lVar40 + 0x68)) {
              puVar31 = (undefined8 *)plVar23[5];
              goto LAB_1409f9341;
            }
            puVar31 = (undefined8 *)((longlong)puVar28 + 7U & 0xfffffffffffffff8);
            puVar28 = puVar31 + lVar25 * 2;
            local_208 = lVar22;
            if (*(undefined8 **)(lVar40 + 0x68) < puVar28) {
              local_1e0 = lVar25 * 0x10;
              FUN_140023dd8(puVar39);
              puVar31 = (undefined8 *)(*puVar39 + 7 & 0xfffffffffffffff8);
              puVar28 = (undefined8 *)(local_1e0 + (longlong)puVar31);
            }
            *puVar39 = (ulonglong)puVar28;
            puVar28 = puVar31;
            lVar22 = local_208;
            if (0 < (int)plVar23[6]) {
              lVar40 = 0;
              lVar36 = 0;
              do {
                puVar1 = (undefined4 *)(plVar23[5] + lVar40);
                uVar41 = puVar1[1];
                uVar10 = puVar1[2];
                uVar11 = puVar1[3];
                puVar2 = (undefined4 *)((longlong)puVar31 + lVar40);
                *puVar2 = *puVar1;
                puVar2[1] = uVar41;
                puVar2[2] = uVar10;
                puVar2[3] = uVar11;
                lVar36 = lVar36 + 1;
                lVar40 = lVar40 + 0x10;
              } while (lVar36 < (int)plVar23[6]);
              puVar28 = (undefined8 *)(lVar40 + (longlong)puVar31);
            }
          }
          *puVar28 = uVar20;
          *(undefined2 *)(puVar28 + 1) = uVar38;
          *(undefined1 *)((longlong)puVar28 + 10) = 2;
          plVar23[5] = (longlong)puVar31;
          *(int *)(plVar23 + 6) = (int)lVar25;
        }
      }
      if (*(char *)(local_1f0 + 0xe6) != '\0') {
        uVar38 = *(undefined2 *)(local_1f0 + 0xe4);
        lVar40 = *plVar23;
        if (*(char *)(local_1f0 + 0xe7) == '\x06') {
          puVar39 = (ulonglong *)(lVar40 + 0x88);
          lVar25 = (longlong)(int)plVar23[8] + 1;
          plVar27 = *(longlong **)(lVar40 + 0x88);
          if ((longlong)(int)plVar23[8] == 0) {
            plVar27 = (longlong *)((longlong)plVar27 + 7U & 0xfffffffffffffff8);
            plVar32 = plVar27 + 2;
            plVar29 = plVar27;
            if (*(longlong **)(lVar40 + 0x90) < plVar32) {
              FUN_140023dd8(puVar39,0x18);
              plVar27 = (longlong *)(*puVar39 + 7 & 0xfffffffffffffff8);
              plVar32 = plVar27 + 2;
              plVar29 = plVar27;
            }
LAB_1409fb9a1:
            *puVar39 = (ulonglong)plVar32;
          }
          else {
            plVar32 = plVar27 + 2;
            if (plVar32 <= *(longlong **)(lVar40 + 0x90)) {
              plVar29 = (longlong *)plVar23[7];
              goto LAB_1409fb9a1;
            }
            plVar29 = (longlong *)((longlong)plVar27 + 7U & 0xfffffffffffffff8);
            plVar27 = plVar29 + lVar25 * 2;
            if (*(longlong **)(lVar40 + 0x90) < plVar27) {
              local_208 = lVar25 * 0x10;
              FUN_140023dd8(puVar39);
              plVar29 = (longlong *)(*puVar39 + 7 & 0xfffffffffffffff8);
              plVar27 = (longlong *)(local_208 + (longlong)plVar29);
            }
            *puVar39 = (ulonglong)plVar27;
            plVar27 = plVar29;
            if (0 < (int)plVar23[8]) {
              lVar40 = 0;
              lVar36 = 0;
              do {
                puVar1 = (undefined4 *)(plVar23[7] + lVar40);
                uVar41 = puVar1[1];
                uVar10 = puVar1[2];
                uVar11 = puVar1[3];
                puVar2 = (undefined4 *)((longlong)plVar29 + lVar40);
                *puVar2 = *puVar1;
                puVar2[1] = uVar41;
                puVar2[2] = uVar10;
                puVar2[3] = uVar11;
                lVar36 = lVar36 + 1;
                lVar40 = lVar40 + 0x10;
              } while (lVar36 < (int)plVar23[8]);
              plVar27 = (longlong *)(lVar40 + (longlong)plVar29);
            }
          }
          *plVar27 = lVar22;
          *(undefined2 *)(plVar27 + 1) = uVar38;
          *(undefined1 *)((longlong)plVar27 + 10) = 1;
          plVar23[7] = (longlong)plVar29;
          *(int *)(plVar23 + 8) = (int)lVar25;
        }
        else {
          puVar39 = (ulonglong *)(lVar40 + 0x60);
          lVar25 = (longlong)(int)plVar23[6] + 1;
          plVar27 = *(longlong **)(lVar40 + 0x60);
          if ((longlong)(int)plVar23[6] == 0) {
            plVar27 = (longlong *)((longlong)plVar27 + 7U & 0xfffffffffffffff8);
            plVar32 = plVar27 + 2;
            plVar29 = plVar27;
            if (*(longlong **)(lVar40 + 0x68) < plVar32) {
              local_208 = lVar24;
              FUN_140023dd8(puVar39,0x18);
              plVar27 = (longlong *)(*puVar39 + 7 & 0xfffffffffffffff8);
              plVar32 = plVar27 + 2;
              plVar29 = plVar27;
              lVar24 = local_208;
            }
LAB_1409f93b4:
            *puVar39 = (ulonglong)plVar32;
          }
          else {
            plVar32 = plVar27 + 2;
            if (plVar32 <= *(longlong **)(lVar40 + 0x68)) {
              plVar29 = (longlong *)plVar23[5];
              goto LAB_1409f93b4;
            }
            plVar29 = (longlong *)((longlong)plVar27 + 7U & 0xfffffffffffffff8);
            plVar27 = plVar29 + lVar25 * 2;
            local_208 = lVar22;
            if (*(longlong **)(lVar40 + 0x68) < plVar27) {
              FUN_140023dd8(puVar39);
              plVar29 = (longlong *)(*puVar39 + 7 & 0xfffffffffffffff8);
              plVar27 = plVar29 + lVar25 * 2;
            }
            *puVar39 = (ulonglong)plVar27;
            plVar27 = plVar29;
            lVar22 = local_208;
            if (0 < (int)plVar23[6]) {
              lVar40 = 0;
              lVar36 = 0;
              do {
                puVar1 = (undefined4 *)(plVar23[5] + lVar40);
                uVar41 = puVar1[1];
                uVar10 = puVar1[2];
                uVar11 = puVar1[3];
                puVar2 = (undefined4 *)((longlong)plVar29 + lVar40);
                *puVar2 = *puVar1;
                puVar2[1] = uVar41;
                puVar2[2] = uVar10;
                puVar2[3] = uVar11;
                lVar36 = lVar36 + 1;
                lVar40 = lVar40 + 0x10;
              } while (lVar36 < (int)plVar23[6]);
              plVar27 = (longlong *)(lVar40 + (longlong)plVar29);
            }
          }
          *plVar27 = lVar22;
          *(undefined2 *)(plVar27 + 1) = uVar38;
          *(undefined1 *)((longlong)plVar27 + 10) = 1;
          plVar23[5] = (longlong)plVar29;
          *(int *)(plVar23 + 6) = (int)lVar25;
        }
      }
      if (*(char *)(local_1f0 + 0xe2) != '\0') {
        uVar38 = *(undefined2 *)(local_1f0 + 0xe0);
        lVar40 = *plVar23;
        if (*(char *)(local_1f0 + 0xe3) == '\x06') {
          plVar27 = (longlong *)(lVar40 + 0x88);
          lVar22 = (longlong)(int)plVar23[8] + 1;
          plVar32 = *(longlong **)(lVar40 + 0x88);
          if ((longlong)(int)plVar23[8] == 0) {
            plVar32 = (longlong *)((longlong)plVar32 + 7U & 0xfffffffffffffff8);
            plVar29 = plVar32 + 2;
            plVar30 = plVar32;
            if (*(longlong **)(lVar40 + 0x90) < plVar29) {
              FUN_140023dd8(plVar27,0x18);
              plVar32 = (longlong *)(*plVar27 + 7U & 0xfffffffffffffff8);
              plVar29 = plVar32 + 2;
              plVar30 = plVar32;
            }
LAB_1409fb9f6:
            *plVar27 = (longlong)plVar29;
          }
          else {
            plVar29 = plVar32 + 2;
            if (plVar29 <= *(longlong **)(lVar40 + 0x90)) {
              plVar30 = (longlong *)plVar23[7];
              goto LAB_1409fb9f6;
            }
            plVar30 = (longlong *)((longlong)plVar32 + 7U & 0xfffffffffffffff8);
            plVar32 = plVar30 + lVar22 * 2;
            if (*(longlong **)(lVar40 + 0x90) < plVar32) {
              FUN_140023dd8(plVar27);
              plVar30 = (longlong *)(*plVar27 + 7U & 0xfffffffffffffff8);
              plVar32 = plVar30 + lVar22 * 2;
            }
            *plVar27 = (longlong)plVar32;
            plVar32 = plVar30;
            if (0 < (int)plVar23[8]) {
              lVar40 = 0;
              lVar25 = 0;
              do {
                puVar1 = (undefined4 *)(plVar23[7] + lVar40);
                uVar41 = puVar1[1];
                uVar10 = puVar1[2];
                uVar11 = puVar1[3];
                puVar2 = (undefined4 *)((longlong)plVar30 + lVar40);
                *puVar2 = *puVar1;
                puVar2[1] = uVar41;
                puVar2[2] = uVar10;
                puVar2[3] = uVar11;
                lVar25 = lVar25 + 1;
                lVar40 = lVar40 + 0x10;
              } while (lVar25 < (int)plVar23[8]);
              plVar32 = (longlong *)(lVar40 + (longlong)plVar30);
            }
          }
          *plVar32 = lVar35;
          *(undefined2 *)(plVar32 + 1) = uVar38;
          *(undefined1 *)((longlong)plVar32 + 10) = 1;
          plVar23[7] = (longlong)plVar30;
          *(int *)(plVar23 + 8) = (int)lVar22;
        }
        else {
          puVar39 = (ulonglong *)(lVar40 + 0x60);
          lVar22 = (longlong)(int)plVar23[6] + 1;
          plVar27 = *(longlong **)(lVar40 + 0x60);
          if ((longlong)(int)plVar23[6] == 0) {
            plVar27 = (longlong *)((longlong)plVar27 + 7U & 0xfffffffffffffff8);
            plVar32 = plVar27 + 2;
            plVar29 = plVar27;
            if (*(longlong **)(lVar40 + 0x68) < plVar32) {
              FUN_140023dd8(puVar39,0x18);
              plVar27 = (longlong *)(*puVar39 + 7 & 0xfffffffffffffff8);
              plVar32 = plVar27 + 2;
              plVar29 = plVar27;
            }
LAB_1409f9421:
            *puVar39 = (ulonglong)plVar32;
          }
          else {
            plVar32 = plVar27 + 2;
            if (plVar32 <= *(longlong **)(lVar40 + 0x68)) {
              plVar29 = (longlong *)plVar23[5];
              goto LAB_1409f9421;
            }
            plVar29 = (longlong *)((longlong)plVar27 + 7U & 0xfffffffffffffff8);
            plVar27 = plVar29 + lVar22 * 2;
            if (*(longlong **)(lVar40 + 0x68) < plVar27) {
              FUN_140023dd8(puVar39);
              plVar29 = (longlong *)(*puVar39 + 7 & 0xfffffffffffffff8);
              plVar27 = plVar29 + lVar22 * 2;
            }
            *puVar39 = (ulonglong)plVar27;
            plVar27 = plVar29;
            if (0 < (int)plVar23[6]) {
              lVar40 = 0;
              lVar25 = 0;
              do {
                puVar1 = (undefined4 *)(plVar23[5] + lVar40);
                uVar41 = puVar1[1];
                uVar10 = puVar1[2];
                uVar11 = puVar1[3];
                puVar2 = (undefined4 *)((longlong)plVar29 + lVar40);
                *puVar2 = *puVar1;
                puVar2[1] = uVar41;
                puVar2[2] = uVar10;
                puVar2[3] = uVar11;
                lVar25 = lVar25 + 1;
                lVar40 = lVar40 + 0x10;
              } while (lVar25 < (int)plVar23[6]);
              plVar27 = (longlong *)(lVar40 + (longlong)plVar29);
            }
          }
          *plVar27 = lVar35;
          *(undefined2 *)(plVar27 + 1) = uVar38;
          *(undefined1 *)((longlong)plVar27 + 10) = 1;
          plVar23[5] = (longlong)plVar29;
          *(int *)(plVar23 + 6) = (int)lVar22;
        }
      }
      lVar40 = local_1f0;
      iVar16 = (int)plVar23[6] + (int)plVar23[4];
      iVar17 = iVar16 + (int)plVar23[8];
      if (iVar17 != 0 && SCARRY4(iVar16,(int)plVar23[8]) == iVar17 < 0) {
        puVar21 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
        puVar28 = puVar21 + 0xb;
        if ((undefined8 *)param_1[1] < puVar28) {
          FUN_140023dd8(param_1,0x60);
          puVar21 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
          puVar28 = puVar21 + 0xb;
        }
        *param_1 = (ulonglong)puVar28;
        *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
        *(undefined8 **)param_1[6] = puVar21;
        param_1[6] = (ulonglong)(puVar21 + 1);
        lVar22 = plVar23[7];
        lVar37 = plVar23[8];
        lVar35 = plVar23[5];
        lVar13 = plVar23[6];
        lVar25 = plVar23[3];
        lVar14 = plVar23[4];
        lVar36 = plVar23[1];
        lVar15 = plVar23[2];
        puVar21[1] = 0;
        *puVar21 = &PTR_FUN_14a1e7fa8;
        puVar21[2] = lVar24;
        puVar21[3] = lVar36;
        *(int *)(puVar21 + 4) = (int)lVar15;
        puVar21[5] = lVar25;
        *(int *)(puVar21 + 6) = (int)lVar14;
        puVar21[7] = lVar35;
        *(int *)(puVar21 + 8) = (int)lVar13;
        puVar21[9] = lVar22;
        *(int *)(puVar21 + 10) = (int)lVar37;
        plVar23[1] = 0;
        *(undefined4 *)(plVar23 + 2) = 0;
        plVar23[3] = 0;
        *(undefined4 *)(plVar23 + 4) = 0;
        plVar23[5] = 0;
        *(undefined4 *)(plVar23 + 6) = 0;
        plVar23[7] = 0;
        *(undefined4 *)(plVar23 + 8) = 0;
      }
      puVar21 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
      puVar28 = puVar21 + 4;
      if ((undefined8 *)param_1[1] < puVar28) {
        FUN_140023dd8(param_1,0x28);
        puVar21 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
        puVar28 = puVar21 + 4;
      }
      *param_1 = (ulonglong)puVar28;
      *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
      *(undefined8 **)param_1[6] = puVar21;
      param_1[6] = (ulonglong)(puVar21 + 1);
      puVar21[1] = 0;
      *puVar21 = &PTR_LAB_14a1fbc30;
      *(int *)(puVar21 + 2) = local_1cc;
      *(undefined1 **)((longlong)puVar21 + 0x14) = &DAT_100000001;
      if (DAT_14ca8507b == '\x01') {
        if ((0 < (int)param_1[0x13]) &&
           (*(undefined4 *)(param_1 + 0x13) = 0, *(int *)((longlong)param_1 + 0x9c) < 0)) {
          FUN_147139e90(local_220,0);
        }
        if ((*(char *)(lVar40 + 0xe2) != '\0') && (*(char *)(lVar40 + 0xe3) != '\x06')) {
          uVar38 = *(undefined2 *)(lVar40 + 0xe0);
          iVar16 = (int)param_1[0x13];
          *(uint *)(param_1 + 0x13) = iVar16 + 1U;
          if (*(uint *)((longlong)param_1 + 0x9c) < iVar16 + 1U) {
            FUN_1447477d8(local_220,iVar16);
          }
          uVar19 = *local_220;
          *(undefined2 *)(uVar19 + (longlong)iVar16 * 4) = uVar38;
          *(undefined1 *)(uVar19 + 2 + (longlong)iVar16 * 4) = 0;
        }
        if ((*(char *)(lVar40 + 0xe6) != '\0') && (*(char *)(lVar40 + 0xe7) != '\x06')) {
          uVar38 = *(undefined2 *)(lVar40 + 0xe4);
          iVar16 = (int)param_1[0x13];
          *(uint *)(param_1 + 0x13) = iVar16 + 1U;
          if (*(uint *)((longlong)param_1 + 0x9c) < iVar16 + 1U) {
            FUN_1447477d8(local_220,iVar16);
          }
          uVar19 = *local_220;
          *(undefined2 *)(uVar19 + (longlong)iVar16 * 4) = uVar38;
          *(undefined1 *)(uVar19 + 2 + (longlong)iVar16 * 4) = 0;
        }
        if ((*(char *)(lVar40 + 0xea) != '\0') && (*(char *)(lVar40 + 0xeb) != '\x06')) {
          uVar38 = *(undefined2 *)(lVar40 + 0xe8);
          iVar16 = (int)param_1[0x13];
          *(uint *)(param_1 + 0x13) = iVar16 + 1U;
          if (*(uint *)((longlong)param_1 + 0x9c) < iVar16 + 1U) {
            FUN_1447477d8(local_220,iVar16);
          }
          uVar19 = *local_220;
          *(undefined2 *)(uVar19 + (longlong)iVar16 * 4) = uVar38;
          *(undefined1 *)(uVar19 + 2 + (longlong)iVar16 * 4) = 1;
        }
        if (lVar40 == 0) {
          lVar22 = 0;
        }
        else {
          lVar22 = *(longlong *)
                    (*(longlong *)(*(longlong *)(local_1b8 + 8) + 0x50) +
                    (longlong)*(int *)(lVar40 + 0xd4) * 8);
          if (lVar22 == 0) {
            lVar22 = FUN_1400bafc2(*(longlong *)(local_1b8 + 8),(longlong)*(int *)(lVar40 + 0xd4),1)
            ;
          }
        }
        uVar19 = param_1[0x13];
        lVar40 = (longlong)(int)uVar19;
        if (0 < lVar40) {
          if (DAT_14ca8507b == '\x01') {
            pvVar9 = (void *)*local_220;
            puVar21 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
            puVar28 = puVar21 + 5;
            if ((undefined8 *)param_1[1] < puVar28) {
              FUN_140023dd8(param_1,0x30);
              puVar21 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
              puVar28 = puVar21 + 5;
            }
            *param_1 = (ulonglong)puVar28;
            *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
            *(undefined8 **)param_1[6] = puVar21;
            param_1[6] = (ulonglong)(puVar21 + 1);
            sVar3 = lVar40 * 4;
            pvVar42 = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
            pvVar26 = (void *)((longlong)pvVar42 + lVar40 * 4);
            if ((void *)param_1[1] < pvVar26) {
              FUN_140023dd8(param_1,(uint)sVar3 | 2);
              pvVar42 = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
              pvVar26 = (void *)((longlong)pvVar42 + sVar3);
            }
            *param_1 = (ulonglong)pvVar26;
            memcpy(pvVar42,pvVar9,sVar3);
            puVar21[1] = 0;
            *puVar21 = &PTR_FUN_14a1fbc38;
            puVar21[2] = lVar22;
            puVar21[3] = pvVar42;
            *(int *)(puVar21 + 4) = (int)uVar19;
          }
          *(undefined4 *)(param_1 + 0x13) = 0;
          if (*(int *)((longlong)param_1 + 0x9c) < 0) {
            FUN_147139e90(local_220,0);
          }
        }
      }
      local_110 = 0xffffffffffffffff;
      uStack_108 = 0xffffffff;
      local_100 = DAT_14cae1be8;
      local_f8 = 3;
      local_f4 = 0x1000000400;
      local_ec = 0;
      local_e0 = 0;
      local_d8 = 0xffffffffffffffff;
      local_d0 = 0xffffffff;
      local_c8 = DAT_14cae1bf0;
      local_c0 = 3;
      local_bc = 0x40000000000;
      local_b4 = 0;
      local_a8 = 0;
      local_150 = &local_110;
      local_148 = 2;
      FUN_144760590(param_1,&local_150,0);
      puVar39 = local_190;
      lVar40 = local_1a8;
      lVar22 = 0x68;
      do {
        if (*(char *)((longlong)&local_110 + lVar22) == '\x01') {
          *(undefined1 *)((longlong)&local_110 + lVar22) = 0;
        }
        lVar22 = lVar22 + -0x38;
      } while (lVar22 != -8);
      if (local_194 == 0) {
        if (CONCAT44(uStack_12c,local_130) == 0) {
          uVar19 = 0;
        }
        else {
          lVar22 = *(longlong *)(CONCAT44(uStack_124,uStack_128) + 8);
          lVar24 = (longlong)*(int *)(CONCAT44(uStack_12c,local_130) + 0xd4);
          uVar19 = *(ulonglong *)(*(longlong *)(lVar22 + 0x50) + lVar24 * 8);
          if (uVar19 == 0) {
            uVar19 = FUN_1400bafc2(lVar22,lVar24,1);
          }
        }
        uVar20 = FUN_140029432(param_1,uVar19,0);
        param_1[0x37] = uVar19;
        puVar21 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
        puVar28 = puVar21 + 3;
        if ((undefined8 *)param_1[1] < puVar28) {
          FUN_140023dd8(param_1,0x20);
          puVar21 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
          puVar28 = puVar21 + 3;
        }
        *param_1 = (ulonglong)puVar28;
        *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
        *(undefined8 **)param_1[6] = puVar21;
        param_1[6] = (ulonglong)(puVar21 + 1);
        puVar21[1] = 0;
        *puVar21 = &PTR_LAB_14a37d340;
        puVar21[2] = uVar20;
        if (CONCAT44(uStack_12c,local_130) == 0) {
          lVar22 = 0;
        }
        else {
          lVar24 = *(longlong *)(CONCAT44(uStack_124,uStack_128) + 8);
          lVar35 = (longlong)*(int *)(CONCAT44(uStack_12c,local_130) + 0xd4);
          lVar22 = *(longlong *)(*(longlong *)(lVar24 + 0x50) + lVar35 * 8);
          if (lVar22 == 0) {
            lVar22 = FUN_1400bafc2(lVar24,lVar35,1);
          }
        }
        FUN_144821b19(param_1,&local_130,lVar22);
        puVar21 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
        puVar28 = puVar21 + 4;
        if ((undefined8 *)param_1[1] < puVar28) {
          FUN_140023dd8(param_1,0x28);
          puVar21 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
          puVar28 = puVar21 + 4;
        }
        *param_1 = (ulonglong)puVar28;
        *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
        *(undefined8 **)param_1[6] = puVar21;
        param_1[6] = (ulonglong)(puVar21 + 1);
        puVar21[1] = 0;
        *puVar21 = &PTR_LAB_14a1fbc30;
        puVar21[2] = &DAT_100000001;
        *(undefined4 *)(puVar21 + 3) = 1;
        FUN_143519eb6(param_1,&local_130);
      }
      else {
        FUN_143519dbe(param_1,0);
        if (CONCAT44(uStack_12c,local_130) == 0) {
          uVar19 = 0;
        }
        else {
          lVar22 = *(longlong *)(CONCAT44(uStack_124,uStack_128) + 8);
          lVar24 = (longlong)*(int *)(CONCAT44(uStack_12c,local_130) + 0xd4);
          uVar19 = *(ulonglong *)(*(longlong *)(lVar22 + 0x50) + lVar24 * 8);
          if (uVar19 == 0) {
            uVar19 = FUN_1400bafc2(lVar22,lVar24,1);
          }
        }
        uVar20 = FUN_140029432(param_1,uVar19,0);
        param_1[0x37] = uVar19;
        puVar21 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
        puVar28 = puVar21 + 3;
        if ((undefined8 *)param_1[1] < puVar28) {
          FUN_140023dd8(param_1,0x20);
          puVar21 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
          puVar28 = puVar21 + 3;
        }
        *param_1 = (ulonglong)puVar28;
        *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
        *(undefined8 **)param_1[6] = puVar21;
        param_1[6] = (ulonglong)(puVar21 + 1);
        puVar21[1] = 0;
        *puVar21 = &PTR_LAB_14a37d340;
        puVar21[2] = uVar20;
        if (CONCAT44(uStack_12c,local_130) == 0) {
          lVar22 = 0;
        }
        else {
          lVar24 = *(longlong *)(CONCAT44(uStack_124,uStack_128) + 8);
          lVar35 = (longlong)*(int *)(CONCAT44(uStack_12c,local_130) + 0xd4);
          lVar22 = *(longlong *)(*(longlong *)(lVar24 + 0x50) + lVar35 * 8);
          if (lVar22 == 0) {
            lVar22 = FUN_1400bafc2(lVar24,lVar35,1);
          }
        }
        FUN_144821b19(param_1,&local_130,lVar22);
        puVar21 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
        puVar28 = puVar21 + 4;
        if ((undefined8 *)param_1[1] < puVar28) {
          FUN_140023dd8(param_1,0x28);
          puVar21 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
          puVar28 = puVar21 + 4;
        }
        *param_1 = (ulonglong)puVar28;
        *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
        *(undefined8 **)param_1[6] = puVar21;
        param_1[6] = (ulonglong)(puVar21 + 1);
        puVar21[1] = 0;
        *puVar21 = &PTR_LAB_14a1fbc30;
        puVar21[2] = &DAT_100000001;
        *(undefined4 *)(puVar21 + 3) = 1;
        FUN_143519eb6(param_1,&local_130);
        FUN_143519dbe(param_1,1);
      }
      local_110 = -1;
      uStack_108 = 0xffffffff;
      local_100 = DAT_14cae1bf0;
      local_f8 = 3;
      local_f4 = 0x1000000400;
      local_ec = 0;
      local_e0 = 0;
      local_1e4 = local_1e4 ^ 1;
      local_208 = (longlong)(int)local_1e4;
      local_c8 = *(undefined8 *)(lVar40 + 0x10 + local_208 * 8);
      local_d8 = 0xffffffffffffffff;
      local_d0 = 0xffffffff;
      local_c0 = 3;
      local_bc = 0x40000000000;
      local_b4 = 0;
      local_a8 = 0;
      local_90 = *(undefined8 *)(lVar40 + 0x30 + local_208 * 8);
      local_a0 = 0xffffffffffffffff;
      local_98 = 0xffffffff;
      local_88 = 3;
      local_84 = 0x40000000000;
      local_7c = 0;
      local_70 = 0;
      local_160 = &local_110;
      local_158 = 3;
      FUN_144760590(param_1,&local_160,0);
      lVar22 = 0xa0;
      do {
        if (*(char *)((longlong)&local_110 + lVar22) == '\x01') {
          *(undefined1 *)((longlong)&local_110 + lVar22) = 0;
        }
        lVar22 = lVar22 + -0x38;
      } while (lVar22 != -8);
      if (local_230 == 0) {
        uVar19 = 0;
      }
      else {
        uVar19 = *(ulonglong *)
                  (*(longlong *)(*(longlong *)(local_1c0 + 8) + 0x50) +
                  (longlong)*(int *)(local_230 + 0xd4) * 8);
        if (uVar19 == 0) {
          uVar19 = FUN_1400bafc2(*(longlong *)(local_1c0 + 8),(longlong)*(int *)(local_230 + 0xd4),1
                                );
        }
      }
      uVar20 = FUN_140029432(param_1,uVar19,0);
      param_1[0x37] = uVar19;
      puVar21 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
      puVar28 = puVar21 + 3;
      if ((undefined8 *)param_1[1] < puVar28) {
        FUN_140023dd8(param_1,0x20);
        puVar21 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
        puVar28 = puVar21 + 3;
      }
      local_1d0 = local_1d0 << 4;
      *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
      *param_1 = (ulonglong)puVar28;
      *(undefined8 **)param_1[6] = puVar21;
      param_1[6] = (ulonglong)(puVar21 + 1);
      puVar21[1] = 0;
      *puVar21 = &PTR_LAB_14a37d340;
      puVar21[2] = uVar20;
      if (((local_1c8 & local_1d0) == 0) && (lVar22 = *(longlong *)(lVar40 + 0x48), lVar22 != 0)) {
        local_110 = -1;
        uStack_108 = 0xffffffff;
        local_f8 = 3;
        local_f4 = 0x40000000000;
        local_ec = 0;
        local_e0 = 0;
        local_120 = &local_110;
        local_118 = 1;
        local_100 = lVar22;
        FUN_144760590(param_1,&local_120,0);
      }
      else {
        lVar22 = *(longlong *)(lVar40 + 0x30 + local_208 * 8);
      }
      if ((local_1c4 != 0) || (lVar24 = *(longlong *)(lVar40 + 0x40), lVar24 == 0)) {
        lVar24 = *(longlong *)(lVar40 + 0x20 + local_228 * 8);
      }
      if (local_230 == 0) {
        lVar35 = 0;
      }
      else {
        lVar35 = *(longlong *)
                  (*(longlong *)(*(longlong *)(local_1c0 + 8) + 0x50) +
                  (longlong)*(int *)(local_230 + 0xd4) * 8);
        if (lVar35 == 0) {
          lVar35 = FUN_1400bafc2(*(longlong *)(local_1c0 + 8),(longlong)*(int *)(local_230 + 0xd4),1
                                );
        }
      }
      local_1e0 = lVar35;
      plVar23 = (longlong *)FUN_144821ef4(param_1);
      lVar25 = DAT_14cae1c10;
      uVar20 = DAT_14cae1be0;
      lVar35 = *(longlong *)(lVar40 + local_228 * 8);
      local_228 = *(longlong *)(lVar40 + 0x10 + local_208 * 8);
      if (DAT_14c846b14 == '\x01') {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c926f30) &&
           (FUN_144b3d300(&DAT_14c926f30), DAT_14c926f30 == -1)) {
          FUN_1413288e0(&DAT_14c926ca8);
          atexit(FUN_1427ac032);
          _Init_thread_footer(&DAT_14c926f30);
        }
        if (*(code **)(DAT_14c926ca8 + 0x28) != (code *)&LAB_144aff468) {
          (**(code **)(DAT_14c926ca8 + 0x28))(&DAT_14c926ca8);
        }
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14cae1ba0) &&
         (local_218 = lVar35, FUN_144b3d300(&DAT_14cae1ba0), lVar35 = local_218, DAT_14cae1ba0 == -1
         )) {
        FUN_14606104a(&local_110);
        local_240 = 0;
        local_248 = 0;
        local_250 = 0;
        local_270 = "Unknown";
        local_278 = 0;
        local_280 = L"RadixSortUB";
        local_288 = L"FRadixSortParameters";
        local_260 = 0x20;
        local_268 = 0x36;
        local_258 = &local_110;
        FUN_140b49562(&DAT_14cae1b20,1,1);
        if (local_110 != 0) {
          FUN_1400020a8();
        }
        atexit((_func_5014 *)&LAB_143519d23);
        _Init_thread_footer(&DAT_14cae1ba0);
        puVar39 = local_190;
        lVar35 = local_218;
      }
      uVar19 = *(ulonglong *)(local_230 + 0xa0);
      uVar34 = ((longlong)uVar19 >> 0x18) + local_178;
      if ((uVar19 & 1) == 0) {
        uVar34 = uVar19;
      }
      if (0 < (longlong)*(int *)(local_230 + 0xa8)) {
        lVar40 = 0;
        do {
          if (*(longlong *)(uVar34 + lVar40 * 4) == DAT_14cae1b48) {
            uVar19 = *puVar39;
            if ((uVar19 & 1) != 0) {
              uVar19 = ((longlong)uVar19 >> 0x18) + (longlong)puVar39;
            }
            psVar33 = (short *)(uVar19 + lVar40);
            goto LAB_1409f9fd6;
          }
          lVar40 = lVar40 + 2;
        } while ((longlong)*(int *)(local_230 + 0xa8) * 2 != lVar40);
      }
      psVar33 = &DAT_14c9c45cc;
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x110) < DAT_14c9c45d0) {
        FUN_144b3d300(&DAT_14c9c45d0);
        psVar33 = &DAT_14c9c45cc;
        if (DAT_14c9c45d0 == -1) {
          DAT_14c9c45cc = 0xffff;
          _Init_thread_footer(&DAT_14c9c45d0);
          psVar33 = &DAT_14c9c45cc;
        }
      }
LAB_1409f9fd6:
      sVar8 = *psVar33;
      if (sVar8 != -1) {
        lVar36 = *plVar23;
        puVar39 = (ulonglong *)(lVar36 + 0x60);
        lVar40 = (longlong)(int)plVar23[6] + 1;
        plVar27 = *(longlong **)(lVar36 + 0x60);
        if ((longlong)(int)plVar23[6] == 0) {
          plVar27 = (longlong *)((longlong)plVar27 + 7U & 0xfffffffffffffff8);
          plVar32 = plVar27 + 2;
          plVar29 = plVar27;
          if (*(longlong **)(lVar36 + 0x68) < plVar32) {
            local_210 = uVar20;
            local_1f8 = lVar25;
            FUN_140023dd8(puVar39,0x18);
            plVar27 = (longlong *)(*puVar39 + 7 & 0xfffffffffffffff8);
            plVar32 = plVar27 + 2;
            plVar29 = plVar27;
            uVar20 = local_210;
            lVar25 = local_1f8;
          }
LAB_1409fa028:
          *puVar39 = (ulonglong)plVar32;
        }
        else {
          plVar32 = plVar27 + 2;
          if (plVar32 <= *(longlong **)(lVar36 + 0x68)) {
            plVar29 = (longlong *)plVar23[5];
            goto LAB_1409fa028;
          }
          local_1f8 = lVar25;
          local_210 = uVar20;
          plVar29 = (longlong *)((longlong)plVar27 + 7U & 0xfffffffffffffff8);
          plVar27 = plVar29 + lVar40 * 2;
          local_218 = lVar35;
          if (*(longlong **)(lVar36 + 0x68) < plVar27) {
            FUN_140023dd8(puVar39);
            plVar29 = (longlong *)(*puVar39 + 7 & 0xfffffffffffffff8);
            plVar27 = plVar29 + lVar40 * 2;
          }
          *puVar39 = (ulonglong)plVar27;
          plVar27 = plVar29;
          uVar20 = local_210;
          lVar35 = local_218;
          lVar25 = local_1f8;
          if (0 < (int)plVar23[6]) {
            lVar36 = 0;
            lVar37 = 0;
            do {
              puVar1 = (undefined4 *)(plVar23[5] + lVar36);
              uVar41 = puVar1[1];
              uVar10 = puVar1[2];
              uVar11 = puVar1[3];
              puVar2 = (undefined4 *)((longlong)plVar29 + lVar36);
              *puVar2 = *puVar1;
              puVar2[1] = uVar41;
              puVar2[2] = uVar10;
              puVar2[3] = uVar11;
              lVar37 = lVar37 + 1;
              lVar36 = lVar36 + 0x10;
            } while (lVar37 < (int)plVar23[6]);
            plVar27 = (longlong *)(lVar36 + (longlong)plVar29);
          }
        }
        *plVar27 = local_1a0;
        *(short *)(plVar27 + 1) = sVar8;
        *(undefined1 *)((longlong)plVar27 + 10) = 4;
        plVar23[5] = (longlong)plVar29;
        *(int *)(plVar23 + 6) = (int)lVar40;
      }
      if (*(char *)(local_230 + 0xf2) != '\0') {
        uVar38 = *(undefined2 *)(local_230 + 0xf0);
        lVar40 = *plVar23;
        if (*(char *)(local_230 + 0xf3) == '\a') {
          plVar27 = (longlong *)(lVar40 + 0x88);
          lVar36 = (longlong)(int)plVar23[8] + 1;
          plVar32 = *(longlong **)(lVar40 + 0x88);
          local_218 = lVar22;
          if ((longlong)(int)plVar23[8] == 0) {
            plVar32 = (longlong *)((longlong)plVar32 + 7U & 0xfffffffffffffff8);
            plVar29 = plVar32 + 2;
            plVar30 = plVar32;
            local_210 = uVar20;
            if (*(longlong **)(lVar40 + 0x90) < plVar29) {
              FUN_140023dd8(plVar27,0x18);
              plVar32 = (longlong *)(*plVar27 + 7U & 0xfffffffffffffff8);
              plVar29 = plVar32 + 2;
              plVar30 = plVar32;
            }
LAB_1409fbcb1:
            *plVar27 = (longlong)plVar29;
          }
          else {
            plVar29 = plVar32 + 2;
            if (plVar29 <= *(longlong **)(lVar40 + 0x90)) {
              plVar30 = (longlong *)plVar23[7];
              local_210 = uVar20;
              goto LAB_1409fbcb1;
            }
            plVar30 = (longlong *)((longlong)plVar32 + 7U & 0xfffffffffffffff8);
            plVar32 = plVar30 + lVar36 * 2;
            local_210 = uVar20;
            if (*(longlong **)(lVar40 + 0x90) < plVar32) {
              local_1f8 = lVar36 * 0x10;
              FUN_140023dd8(plVar27);
              plVar30 = (longlong *)(*plVar27 + 7U & 0xfffffffffffffff8);
              plVar32 = (longlong *)(local_1f8 + (longlong)plVar30);
            }
            *plVar27 = (longlong)plVar32;
            plVar32 = plVar30;
            if (0 < (int)plVar23[8]) {
              lVar40 = 0;
              lVar22 = 0;
              do {
                puVar1 = (undefined4 *)(plVar23[7] + lVar40);
                uVar41 = puVar1[1];
                uVar10 = puVar1[2];
                uVar11 = puVar1[3];
                puVar2 = (undefined4 *)((longlong)plVar30 + lVar40);
                *puVar2 = *puVar1;
                puVar2[1] = uVar41;
                puVar2[2] = uVar10;
                puVar2[3] = uVar11;
                lVar22 = lVar22 + 1;
                lVar40 = lVar40 + 0x10;
              } while (lVar22 < (int)plVar23[8]);
              plVar32 = (longlong *)(lVar40 + (longlong)plVar30);
            }
          }
          *plVar32 = local_228;
          *(undefined2 *)(plVar32 + 1) = uVar38;
          *(undefined1 *)((longlong)plVar32 + 10) = 2;
          plVar23[7] = (longlong)plVar30;
          *(int *)(plVar23 + 8) = (int)lVar36;
          lVar22 = local_218;
          uVar20 = local_210;
        }
        else {
          puVar39 = (ulonglong *)(lVar40 + 0x60);
          lVar36 = (longlong)(int)plVar23[6] + 1;
          plVar27 = *(longlong **)(lVar40 + 0x60);
          if ((longlong)(int)plVar23[6] == 0) {
            plVar27 = (longlong *)((longlong)plVar27 + 7U & 0xfffffffffffffff8);
            plVar32 = plVar27 + 2;
            plVar29 = plVar27;
            if (*(longlong **)(lVar40 + 0x68) < plVar32) {
              local_218 = CONCAT62(local_218._2_6_,uVar38);
              local_1f8 = lVar36;
              FUN_140023dd8(puVar39,0x18);
              plVar27 = (longlong *)(*puVar39 + 7 & 0xfffffffffffffff8);
              plVar32 = plVar27 + 2;
              plVar29 = plVar27;
              lVar36 = local_1f8;
              uVar38 = (undefined2)local_218;
            }
LAB_1409fa113:
            uVar41 = (undefined4)lVar36;
            *puVar39 = (ulonglong)plVar32;
          }
          else {
            plVar32 = plVar27 + 2;
            if (plVar32 <= *(longlong **)(lVar40 + 0x68)) {
              plVar29 = (longlong *)plVar23[5];
              goto LAB_1409fa113;
            }
            local_218 = CONCAT62(local_218._2_6_,uVar38);
            plVar29 = (longlong *)((longlong)plVar27 + 7U & 0xfffffffffffffff8);
            plVar27 = plVar29 + lVar36 * 2;
            local_210 = uVar20;
            local_1f8 = lVar36;
            if (*(longlong **)(lVar40 + 0x68) < plVar27) {
              FUN_140023dd8(puVar39);
              plVar29 = (longlong *)(*puVar39 + 7 & 0xfffffffffffffff8);
              plVar27 = plVar29 + lVar36 * 2;
            }
            *puVar39 = (ulonglong)plVar27;
            uVar41 = (undefined4)local_1f8;
            plVar27 = plVar29;
            uVar20 = local_210;
            uVar38 = (undefined2)local_218;
            if (0 < (int)plVar23[6]) {
              lVar40 = 0;
              lVar36 = 0;
              do {
                puVar1 = (undefined4 *)(plVar23[5] + lVar40);
                uVar10 = puVar1[1];
                uVar11 = puVar1[2];
                uVar12 = puVar1[3];
                puVar2 = (undefined4 *)((longlong)plVar29 + lVar40);
                *puVar2 = *puVar1;
                puVar2[1] = uVar10;
                puVar2[2] = uVar11;
                puVar2[3] = uVar12;
                lVar36 = lVar36 + 1;
                lVar40 = lVar40 + 0x10;
              } while (lVar36 < (int)plVar23[6]);
              plVar27 = (longlong *)(lVar40 + (longlong)plVar29);
            }
          }
          *plVar27 = local_228;
          *(undefined2 *)(plVar27 + 1) = uVar38;
          *(undefined1 *)((longlong)plVar27 + 10) = 2;
          plVar23[5] = (longlong)plVar29;
          *(undefined4 *)(plVar23 + 6) = uVar41;
        }
      }
      if (*(char *)(local_230 + 0xf6) != '\0') {
        uVar38 = *(undefined2 *)(local_230 + 0xf4);
        lVar40 = *plVar23;
        if (*(char *)(local_230 + 0xf7) == '\a') {
          puVar39 = (ulonglong *)(lVar40 + 0x88);
          lVar36 = (longlong)(int)plVar23[8] + 1;
          plVar27 = *(longlong **)(lVar40 + 0x88);
          local_1f8 = lVar25;
          if ((longlong)(int)plVar23[8] == 0) {
            plVar27 = (longlong *)((longlong)plVar27 + 7U & 0xfffffffffffffff8);
            plVar32 = plVar27 + 2;
            plVar29 = plVar27;
            local_210 = uVar20;
            if (*(longlong **)(lVar40 + 0x90) < plVar32) {
              FUN_140023dd8(puVar39,0x18);
              plVar27 = (longlong *)(*puVar39 + 7 & 0xfffffffffffffff8);
              plVar32 = plVar27 + 2;
              plVar29 = plVar27;
            }
LAB_1409fbd21:
            *puVar39 = (ulonglong)plVar32;
          }
          else {
            plVar32 = plVar27 + 2;
            if (plVar32 <= *(longlong **)(lVar40 + 0x90)) {
              plVar29 = (longlong *)plVar23[7];
              local_210 = uVar20;
              goto LAB_1409fbd21;
            }
            plVar29 = (longlong *)((longlong)plVar27 + 7U & 0xfffffffffffffff8);
            plVar27 = plVar29 + lVar36 * 2;
            local_210 = uVar20;
            if (*(longlong **)(lVar40 + 0x90) < plVar27) {
              local_228 = lVar36 * 0x10;
              FUN_140023dd8(puVar39);
              plVar29 = (longlong *)(*puVar39 + 7 & 0xfffffffffffffff8);
              plVar27 = (longlong *)(local_228 + (longlong)plVar29);
            }
            *puVar39 = (ulonglong)plVar27;
            plVar27 = plVar29;
            if (0 < (int)plVar23[8]) {
              lVar40 = 0;
              lVar25 = 0;
              do {
                puVar1 = (undefined4 *)(plVar23[7] + lVar40);
                uVar41 = puVar1[1];
                uVar10 = puVar1[2];
                uVar11 = puVar1[3];
                puVar2 = (undefined4 *)((longlong)plVar29 + lVar40);
                *puVar2 = *puVar1;
                puVar2[1] = uVar41;
                puVar2[2] = uVar10;
                puVar2[3] = uVar11;
                lVar25 = lVar25 + 1;
                lVar40 = lVar40 + 0x10;
              } while (lVar25 < (int)plVar23[8]);
              plVar27 = (longlong *)(lVar40 + (longlong)plVar29);
            }
          }
          *plVar27 = lVar22;
          *(undefined2 *)(plVar27 + 1) = uVar38;
          *(undefined1 *)((longlong)plVar27 + 10) = 2;
          plVar23[7] = (longlong)plVar29;
          *(int *)(plVar23 + 8) = (int)lVar36;
          uVar20 = local_210;
          lVar25 = local_1f8;
        }
        else {
          puVar39 = (ulonglong *)(lVar40 + 0x60);
          lVar36 = (longlong)(int)plVar23[6] + 1;
          plVar27 = *(longlong **)(lVar40 + 0x60);
          if ((longlong)(int)plVar23[6] == 0) {
            plVar27 = (longlong *)((longlong)plVar27 + 7U & 0xfffffffffffffff8);
            plVar32 = plVar27 + 2;
            plVar29 = plVar27;
            if (*(longlong **)(lVar40 + 0x68) < plVar32) {
              local_228 = lVar36;
              local_218 = lVar22;
              FUN_140023dd8(puVar39,0x18);
              plVar27 = (longlong *)(*puVar39 + 7 & 0xfffffffffffffff8);
              plVar32 = plVar27 + 2;
              plVar29 = plVar27;
              lVar22 = local_218;
              lVar36 = local_228;
            }
LAB_1409fa207:
            uVar41 = (undefined4)lVar36;
            *puVar39 = (ulonglong)plVar32;
          }
          else {
            plVar32 = plVar27 + 2;
            if (plVar32 <= *(longlong **)(lVar40 + 0x68)) {
              plVar29 = (longlong *)plVar23[5];
              goto LAB_1409fa207;
            }
            local_218 = CONCAT62(local_218._2_6_,uVar38);
            plVar29 = (longlong *)((longlong)plVar27 + 7U & 0xfffffffffffffff8);
            plVar27 = plVar29 + lVar36 * 2;
            local_228 = lVar36;
            local_210 = uVar20;
            if (*(longlong **)(lVar40 + 0x68) < plVar27) {
              FUN_140023dd8(puVar39);
              plVar29 = (longlong *)(*puVar39 + 7 & 0xfffffffffffffff8);
              plVar27 = plVar29 + lVar36 * 2;
            }
            *puVar39 = (ulonglong)plVar27;
            uVar41 = (undefined4)local_228;
            plVar27 = plVar29;
            uVar20 = local_210;
            uVar38 = (undefined2)local_218;
            if (0 < (int)plVar23[6]) {
              lVar40 = 0;
              lVar36 = 0;
              do {
                puVar1 = (undefined4 *)(plVar23[5] + lVar40);
                uVar10 = puVar1[1];
                uVar11 = puVar1[2];
                uVar12 = puVar1[3];
                puVar2 = (undefined4 *)((longlong)plVar29 + lVar40);
                *puVar2 = *puVar1;
                puVar2[1] = uVar10;
                puVar2[2] = uVar11;
                puVar2[3] = uVar12;
                lVar36 = lVar36 + 1;
                lVar40 = lVar40 + 0x10;
              } while (lVar36 < (int)plVar23[6]);
              plVar27 = (longlong *)(lVar40 + (longlong)plVar29);
            }
          }
          *plVar27 = lVar22;
          *(undefined2 *)(plVar27 + 1) = uVar38;
          *(undefined1 *)((longlong)plVar27 + 10) = 2;
          plVar23[5] = (longlong)plVar29;
          *(undefined4 *)(plVar23 + 6) = uVar41;
        }
      }
      if (*(char *)(local_230 + 0xe2) != '\0') {
        uVar38 = *(undefined2 *)(local_230 + 0xe0);
        lVar40 = *plVar23;
        if (*(char *)(local_230 + 0xe3) == '\x06') {
          plVar27 = (longlong *)(lVar40 + 0x88);
          lVar22 = (longlong)(int)plVar23[8] + 1;
          plVar32 = *(longlong **)(lVar40 + 0x88);
          if ((longlong)(int)plVar23[8] == 0) {
            plVar32 = (longlong *)((longlong)plVar32 + 7U & 0xfffffffffffffff8);
            plVar29 = plVar32 + 2;
            plVar30 = plVar32;
            local_228 = lVar24;
            local_218 = lVar35;
            if (*(longlong **)(lVar40 + 0x90) < plVar29) {
              FUN_140023dd8(plVar27,0x18);
              plVar32 = (longlong *)(*plVar27 + 7U & 0xfffffffffffffff8);
              plVar29 = plVar32 + 2;
              plVar30 = plVar32;
            }
LAB_1409fba61:
            *plVar27 = (longlong)plVar29;
          }
          else {
            plVar29 = plVar32 + 2;
            if (plVar29 <= *(longlong **)(lVar40 + 0x90)) {
              plVar30 = (longlong *)plVar23[7];
              local_228 = lVar24;
              local_218 = lVar35;
              goto LAB_1409fba61;
            }
            plVar30 = (longlong *)((longlong)plVar32 + 7U & 0xfffffffffffffff8);
            plVar32 = plVar30 + lVar22 * 2;
            local_228 = lVar24;
            local_218 = lVar35;
            if (*(longlong **)(lVar40 + 0x90) < plVar32) {
              FUN_140023dd8(plVar27);
              plVar30 = (longlong *)(*plVar27 + 7U & 0xfffffffffffffff8);
              plVar32 = plVar30 + lVar22 * 2;
            }
            *plVar27 = (longlong)plVar32;
            plVar32 = plVar30;
            if (0 < (int)plVar23[8]) {
              lVar40 = 0;
              lVar24 = 0;
              do {
                puVar1 = (undefined4 *)(plVar23[7] + lVar40);
                uVar41 = puVar1[1];
                uVar10 = puVar1[2];
                uVar11 = puVar1[3];
                puVar2 = (undefined4 *)((longlong)plVar30 + lVar40);
                *puVar2 = *puVar1;
                puVar2[1] = uVar41;
                puVar2[2] = uVar10;
                puVar2[3] = uVar11;
                lVar24 = lVar24 + 1;
                lVar40 = lVar40 + 0x10;
              } while (lVar24 < (int)plVar23[8]);
              plVar32 = (longlong *)(lVar40 + (longlong)plVar30);
            }
          }
          *plVar32 = lVar25;
          *(undefined2 *)(plVar32 + 1) = uVar38;
          *(undefined1 *)((longlong)plVar32 + 10) = 1;
          plVar23[7] = (longlong)plVar30;
          *(int *)(plVar23 + 8) = (int)lVar22;
          lVar35 = local_218;
          lVar24 = local_228;
        }
        else {
          plVar27 = (longlong *)(lVar40 + 0x60);
          lVar22 = (longlong)(int)plVar23[6] + 1;
          plVar32 = *(longlong **)(lVar40 + 0x60);
          if ((longlong)(int)plVar23[6] == 0) {
            plVar32 = (longlong *)((longlong)plVar32 + 7U & 0xfffffffffffffff8);
            plVar29 = plVar32 + 2;
            plVar30 = plVar32;
            if (*(longlong **)(lVar40 + 0x68) < plVar29) {
              local_228 = lVar24;
              local_210 = uVar20;
              FUN_140023dd8(plVar27,0x18);
              plVar32 = (longlong *)(*plVar27 + 7U & 0xfffffffffffffff8);
              plVar29 = plVar32 + 2;
              plVar30 = plVar32;
              uVar20 = local_210;
              lVar24 = local_228;
            }
LAB_1409fa276:
            *plVar27 = (longlong)plVar29;
          }
          else {
            plVar29 = plVar32 + 2;
            if (plVar29 <= *(longlong **)(lVar40 + 0x68)) {
              plVar30 = (longlong *)plVar23[5];
              goto LAB_1409fa276;
            }
            plVar30 = (longlong *)((longlong)plVar32 + 7U & 0xfffffffffffffff8);
            plVar32 = plVar30 + lVar22 * 2;
            local_228 = lVar24;
            local_218 = lVar35;
            local_210 = uVar20;
            local_1f8 = lVar25;
            if (*(longlong **)(lVar40 + 0x68) < plVar32) {
              FUN_140023dd8(plVar27);
              plVar30 = (longlong *)(*plVar27 + 7U & 0xfffffffffffffff8);
              plVar32 = plVar30 + lVar22 * 2;
            }
            *plVar27 = (longlong)plVar32;
            plVar32 = plVar30;
            uVar20 = local_210;
            lVar35 = local_218;
            lVar25 = local_1f8;
            lVar24 = local_228;
            if (0 < (int)plVar23[6]) {
              lVar40 = 0;
              lVar36 = 0;
              do {
                puVar1 = (undefined4 *)(plVar23[5] + lVar40);
                uVar41 = puVar1[1];
                uVar10 = puVar1[2];
                uVar11 = puVar1[3];
                puVar2 = (undefined4 *)((longlong)plVar30 + lVar40);
                *puVar2 = *puVar1;
                puVar2[1] = uVar41;
                puVar2[2] = uVar10;
                puVar2[3] = uVar11;
                lVar36 = lVar36 + 1;
                lVar40 = lVar40 + 0x10;
              } while (lVar36 < (int)plVar23[6]);
              plVar32 = (longlong *)(lVar40 + (longlong)plVar30);
            }
          }
          *plVar32 = lVar25;
          *(undefined2 *)(plVar32 + 1) = uVar38;
          *(undefined1 *)((longlong)plVar32 + 10) = 1;
          plVar23[5] = (longlong)plVar30;
          *(int *)(plVar23 + 6) = (int)lVar22;
        }
      }
      if (*(char *)(local_230 + 0xe6) != '\0') {
        uVar38 = *(undefined2 *)(local_230 + 0xe4);
        lVar40 = *plVar23;
        if (*(char *)(local_230 + 0xe7) == '\x06') {
          puVar39 = (ulonglong *)(lVar40 + 0x88);
          lVar22 = (longlong)(int)plVar23[8] + 1;
          plVar27 = *(longlong **)(lVar40 + 0x88);
          if ((longlong)(int)plVar23[8] == 0) {
            plVar27 = (longlong *)((longlong)plVar27 + 7U & 0xfffffffffffffff8);
            plVar32 = plVar27 + 2;
            plVar29 = plVar27;
            local_228 = lVar24;
            if (*(longlong **)(lVar40 + 0x90) < plVar32) {
              FUN_140023dd8(puVar39,0x18);
              plVar27 = (longlong *)(*puVar39 + 7 & 0xfffffffffffffff8);
              plVar32 = plVar27 + 2;
              plVar29 = plVar27;
            }
LAB_1409fbad7:
            *puVar39 = (ulonglong)plVar32;
          }
          else {
            plVar32 = plVar27 + 2;
            if (plVar32 <= *(longlong **)(lVar40 + 0x90)) {
              plVar29 = (longlong *)plVar23[7];
              local_228 = lVar24;
              goto LAB_1409fbad7;
            }
            plVar29 = (longlong *)((longlong)plVar27 + 7U & 0xfffffffffffffff8);
            plVar27 = plVar29 + lVar22 * 2;
            local_228 = lVar24;
            if (*(longlong **)(lVar40 + 0x90) < plVar27) {
              FUN_140023dd8(puVar39);
              plVar29 = (longlong *)(*puVar39 + 7 & 0xfffffffffffffff8);
              plVar27 = plVar29 + lVar22 * 2;
            }
            *puVar39 = (ulonglong)plVar27;
            plVar27 = plVar29;
            if (0 < (int)plVar23[8]) {
              lVar40 = 0;
              lVar24 = 0;
              do {
                puVar1 = (undefined4 *)(plVar23[7] + lVar40);
                uVar41 = puVar1[1];
                uVar10 = puVar1[2];
                uVar11 = puVar1[3];
                puVar2 = (undefined4 *)((longlong)plVar29 + lVar40);
                *puVar2 = *puVar1;
                puVar2[1] = uVar41;
                puVar2[2] = uVar10;
                puVar2[3] = uVar11;
                lVar24 = lVar24 + 1;
                lVar40 = lVar40 + 0x10;
              } while (lVar24 < (int)plVar23[8]);
              plVar27 = (longlong *)(lVar40 + (longlong)plVar29);
            }
          }
          *plVar27 = lVar35;
          *(undefined2 *)(plVar27 + 1) = uVar38;
          *(undefined1 *)((longlong)plVar27 + 10) = 1;
          plVar23[7] = (longlong)plVar29;
          *(int *)(plVar23 + 8) = (int)lVar22;
          lVar24 = local_228;
        }
        else {
          puVar39 = (ulonglong *)(lVar40 + 0x60);
          lVar22 = (longlong)(int)plVar23[6] + 1;
          plVar27 = *(longlong **)(lVar40 + 0x60);
          if ((longlong)(int)plVar23[6] == 0) {
            plVar27 = (longlong *)((longlong)plVar27 + 7U & 0xfffffffffffffff8);
            plVar32 = plVar27 + 2;
            plVar29 = plVar27;
            if (*(longlong **)(lVar40 + 0x68) < plVar32) {
              local_228 = lVar24;
              FUN_140023dd8(puVar39,0x18);
              plVar27 = (longlong *)(*puVar39 + 7 & 0xfffffffffffffff8);
              plVar32 = plVar27 + 2;
              plVar29 = plVar27;
              lVar24 = local_228;
            }
LAB_1409fa2e5:
            *puVar39 = (ulonglong)plVar32;
          }
          else {
            plVar32 = plVar27 + 2;
            if (plVar32 <= *(longlong **)(lVar40 + 0x68)) {
              plVar29 = (longlong *)plVar23[5];
              goto LAB_1409fa2e5;
            }
            plVar29 = (longlong *)((longlong)plVar27 + 7U & 0xfffffffffffffff8);
            plVar27 = plVar29 + lVar22 * 2;
            local_228 = lVar24;
            local_218 = lVar35;
            local_210 = uVar20;
            if (*(longlong **)(lVar40 + 0x68) < plVar27) {
              FUN_140023dd8(puVar39);
              plVar29 = (longlong *)(*puVar39 + 7 & 0xfffffffffffffff8);
              plVar27 = plVar29 + lVar22 * 2;
            }
            *puVar39 = (ulonglong)plVar27;
            plVar27 = plVar29;
            uVar20 = local_210;
            lVar35 = local_218;
            lVar24 = local_228;
            if (0 < (int)plVar23[6]) {
              lVar40 = 0;
              lVar25 = 0;
              do {
                puVar1 = (undefined4 *)(plVar23[5] + lVar40);
                uVar41 = puVar1[1];
                uVar10 = puVar1[2];
                uVar11 = puVar1[3];
                puVar2 = (undefined4 *)((longlong)plVar29 + lVar40);
                *puVar2 = *puVar1;
                puVar2[1] = uVar41;
                puVar2[2] = uVar10;
                puVar2[3] = uVar11;
                lVar25 = lVar25 + 1;
                lVar40 = lVar40 + 0x10;
              } while (lVar25 < (int)plVar23[6]);
              plVar27 = (longlong *)(lVar40 + (longlong)plVar29);
            }
          }
          *plVar27 = lVar35;
          *(undefined2 *)(plVar27 + 1) = uVar38;
          *(undefined1 *)((longlong)plVar27 + 10) = 1;
          plVar23[5] = (longlong)plVar29;
          *(int *)(plVar23 + 6) = (int)lVar22;
        }
      }
      if (*(char *)(local_230 + 0xea) != '\0') {
        uVar38 = *(undefined2 *)(local_230 + 0xe8);
        lVar40 = *plVar23;
        if (*(char *)(local_230 + 0xeb) == '\x06') {
          plVar27 = (longlong *)(lVar40 + 0x88);
          lVar22 = (longlong)(int)plVar23[8] + 1;
          plVar32 = *(longlong **)(lVar40 + 0x88);
          if ((longlong)(int)plVar23[8] == 0) {
            plVar32 = (longlong *)((longlong)plVar32 + 7U & 0xfffffffffffffff8);
            plVar29 = plVar32 + 2;
            plVar30 = plVar32;
            if (*(longlong **)(lVar40 + 0x90) < plVar29) {
              FUN_140023dd8(plVar27,0x18);
              plVar32 = (longlong *)(*plVar27 + 7U & 0xfffffffffffffff8);
              plVar29 = plVar32 + 2;
              plVar30 = plVar32;
            }
LAB_1409fbb3d:
            *plVar27 = (longlong)plVar29;
          }
          else {
            plVar29 = plVar32 + 2;
            if (plVar29 <= *(longlong **)(lVar40 + 0x90)) {
              plVar30 = (longlong *)plVar23[7];
              goto LAB_1409fbb3d;
            }
            plVar30 = (longlong *)((longlong)plVar32 + 7U & 0xfffffffffffffff8);
            plVar32 = plVar30 + lVar22 * 2;
            if (*(longlong **)(lVar40 + 0x90) < plVar32) {
              FUN_140023dd8(plVar27);
              plVar30 = (longlong *)(*plVar27 + 7U & 0xfffffffffffffff8);
              plVar32 = plVar30 + lVar22 * 2;
            }
            *plVar27 = (longlong)plVar32;
            plVar32 = plVar30;
            if (0 < (int)plVar23[8]) {
              lVar40 = 0;
              lVar35 = 0;
              do {
                puVar1 = (undefined4 *)(plVar23[7] + lVar40);
                uVar41 = puVar1[1];
                uVar10 = puVar1[2];
                uVar11 = puVar1[3];
                puVar2 = (undefined4 *)((longlong)plVar30 + lVar40);
                *puVar2 = *puVar1;
                puVar2[1] = uVar41;
                puVar2[2] = uVar10;
                puVar2[3] = uVar11;
                lVar35 = lVar35 + 1;
                lVar40 = lVar40 + 0x10;
              } while (lVar35 < (int)plVar23[8]);
              plVar32 = (longlong *)(lVar40 + (longlong)plVar30);
            }
          }
          *plVar32 = lVar24;
          *(undefined2 *)(plVar32 + 1) = uVar38;
          *(undefined1 *)((longlong)plVar32 + 10) = 1;
          plVar23[7] = (longlong)plVar30;
          *(int *)(plVar23 + 8) = (int)lVar22;
        }
        else {
          plVar27 = (longlong *)(lVar40 + 0x60);
          lVar22 = (longlong)(int)plVar23[6] + 1;
          plVar32 = *(longlong **)(lVar40 + 0x60);
          if ((longlong)(int)plVar23[6] == 0) {
            plVar32 = (longlong *)((longlong)plVar32 + 7U & 0xfffffffffffffff8);
            plVar29 = plVar32 + 2;
            plVar30 = plVar32;
            if (*(longlong **)(lVar40 + 0x68) < plVar29) {
              local_228 = lVar24;
              FUN_140023dd8(plVar27,0x18);
              plVar32 = (longlong *)(*plVar27 + 7U & 0xfffffffffffffff8);
              plVar29 = plVar32 + 2;
              plVar30 = plVar32;
              lVar24 = local_228;
            }
LAB_1409fa354:
            *plVar27 = (longlong)plVar29;
          }
          else {
            plVar29 = plVar32 + 2;
            if (plVar29 <= *(longlong **)(lVar40 + 0x68)) {
              plVar30 = (longlong *)plVar23[5];
              goto LAB_1409fa354;
            }
            plVar30 = (longlong *)((longlong)plVar32 + 7U & 0xfffffffffffffff8);
            plVar32 = plVar30 + lVar22 * 2;
            local_228 = lVar24;
            local_210 = uVar20;
            if (*(longlong **)(lVar40 + 0x68) < plVar32) {
              FUN_140023dd8(plVar27);
              plVar30 = (longlong *)(*plVar27 + 7U & 0xfffffffffffffff8);
              plVar32 = plVar30 + lVar22 * 2;
            }
            *plVar27 = (longlong)plVar32;
            plVar32 = plVar30;
            uVar20 = local_210;
            lVar24 = local_228;
            if (0 < (int)plVar23[6]) {
              lVar40 = 0;
              lVar35 = 0;
              do {
                puVar1 = (undefined4 *)(plVar23[5] + lVar40);
                uVar41 = puVar1[1];
                uVar10 = puVar1[2];
                uVar11 = puVar1[3];
                puVar2 = (undefined4 *)((longlong)plVar30 + lVar40);
                *puVar2 = *puVar1;
                puVar2[1] = uVar41;
                puVar2[2] = uVar10;
                puVar2[3] = uVar11;
                lVar35 = lVar35 + 1;
                lVar40 = lVar40 + 0x10;
              } while (lVar35 < (int)plVar23[6]);
              plVar32 = (longlong *)(lVar40 + (longlong)plVar30);
            }
          }
          *plVar32 = lVar24;
          *(undefined2 *)(plVar32 + 1) = uVar38;
          *(undefined1 *)((longlong)plVar32 + 10) = 1;
          plVar23[5] = (longlong)plVar30;
          *(int *)(plVar23 + 6) = (int)lVar22;
        }
      }
      if (*(char *)(local_230 + 0xee) != '\0') {
        uVar38 = *(undefined2 *)(local_230 + 0xec);
        lVar40 = *plVar23;
        if (*(char *)(local_230 + 0xef) == '\x06') {
          puVar39 = (ulonglong *)(lVar40 + 0x88);
          lVar22 = (longlong)(int)plVar23[8] + 1;
          puVar28 = *(undefined8 **)(lVar40 + 0x88);
          if ((longlong)(int)plVar23[8] == 0) {
            puVar28 = (undefined8 *)((longlong)puVar28 + 7U & 0xfffffffffffffff8);
            puVar21 = puVar28 + 2;
            puVar31 = puVar28;
            if (*(undefined8 **)(lVar40 + 0x90) < puVar21) {
              FUN_140023dd8(puVar39,0x18);
              puVar28 = (undefined8 *)(*puVar39 + 7 & 0xfffffffffffffff8);
              puVar21 = puVar28 + 2;
              puVar31 = puVar28;
            }
LAB_1409fbb98:
            *puVar39 = (ulonglong)puVar21;
          }
          else {
            puVar21 = puVar28 + 2;
            if (puVar21 <= *(undefined8 **)(lVar40 + 0x90)) {
              puVar31 = (undefined8 *)plVar23[7];
              goto LAB_1409fbb98;
            }
            puVar31 = (undefined8 *)((longlong)puVar28 + 7U & 0xfffffffffffffff8);
            puVar28 = puVar31 + lVar22 * 2;
            if (*(undefined8 **)(lVar40 + 0x90) < puVar28) {
              FUN_140023dd8(puVar39);
              puVar31 = (undefined8 *)(*puVar39 + 7 & 0xfffffffffffffff8);
              puVar28 = puVar31 + lVar22 * 2;
            }
            *puVar39 = (ulonglong)puVar28;
            puVar28 = puVar31;
            if (0 < (int)plVar23[8]) {
              lVar40 = 0;
              lVar24 = 0;
              do {
                puVar1 = (undefined4 *)(plVar23[7] + lVar40);
                uVar41 = puVar1[1];
                uVar10 = puVar1[2];
                uVar11 = puVar1[3];
                puVar2 = (undefined4 *)((longlong)puVar31 + lVar40);
                *puVar2 = *puVar1;
                puVar2[1] = uVar41;
                puVar2[2] = uVar10;
                puVar2[3] = uVar11;
                lVar24 = lVar24 + 1;
                lVar40 = lVar40 + 0x10;
              } while (lVar24 < (int)plVar23[8]);
              puVar28 = (undefined8 *)(lVar40 + (longlong)puVar31);
            }
          }
          *puVar28 = uVar20;
          *(undefined2 *)(puVar28 + 1) = uVar38;
          *(undefined1 *)((longlong)puVar28 + 10) = 1;
          plVar23[7] = (longlong)puVar31;
          *(int *)(plVar23 + 8) = (int)lVar22;
        }
        else {
          puVar39 = (ulonglong *)(lVar40 + 0x60);
          lVar22 = (longlong)(int)plVar23[6] + 1;
          puVar28 = *(undefined8 **)(lVar40 + 0x60);
          if ((longlong)(int)plVar23[6] == 0) {
            puVar28 = (undefined8 *)((longlong)puVar28 + 7U & 0xfffffffffffffff8);
            puVar21 = puVar28 + 2;
            puVar31 = puVar28;
            if (*(undefined8 **)(lVar40 + 0x68) < puVar21) {
              FUN_140023dd8(puVar39,0x18);
              puVar28 = (undefined8 *)(*puVar39 + 7 & 0xfffffffffffffff8);
              puVar21 = puVar28 + 2;
              puVar31 = puVar28;
            }
LAB_1409fa3c3:
            *puVar39 = (ulonglong)puVar21;
          }
          else {
            puVar21 = puVar28 + 2;
            if (puVar21 <= *(undefined8 **)(lVar40 + 0x68)) {
              puVar31 = (undefined8 *)plVar23[5];
              goto LAB_1409fa3c3;
            }
            puVar31 = (undefined8 *)((longlong)puVar28 + 7U & 0xfffffffffffffff8);
            puVar28 = puVar31 + lVar22 * 2;
            local_210 = uVar20;
            if (*(undefined8 **)(lVar40 + 0x68) < puVar28) {
              FUN_140023dd8(puVar39);
              puVar31 = (undefined8 *)(*puVar39 + 7 & 0xfffffffffffffff8);
              puVar28 = puVar31 + lVar22 * 2;
            }
            *puVar39 = (ulonglong)puVar28;
            puVar28 = puVar31;
            uVar20 = local_210;
            if (0 < (int)plVar23[6]) {
              lVar40 = 0;
              lVar24 = 0;
              do {
                puVar1 = (undefined4 *)(plVar23[5] + lVar40);
                uVar41 = puVar1[1];
                uVar10 = puVar1[2];
                uVar11 = puVar1[3];
                puVar2 = (undefined4 *)((longlong)puVar31 + lVar40);
                *puVar2 = *puVar1;
                puVar2[1] = uVar41;
                puVar2[2] = uVar10;
                puVar2[3] = uVar11;
                lVar24 = lVar24 + 1;
                lVar40 = lVar40 + 0x10;
              } while (lVar24 < (int)plVar23[6]);
              puVar28 = (undefined8 *)(lVar40 + (longlong)puVar31);
            }
          }
          *puVar28 = uVar20;
          *(undefined2 *)(puVar28 + 1) = uVar38;
          *(undefined1 *)((longlong)puVar28 + 10) = 1;
          plVar23[5] = (longlong)puVar31;
          *(int *)(plVar23 + 6) = (int)lVar22;
        }
      }
      lVar40 = local_1d8;
      iVar16 = (int)plVar23[6] + (int)plVar23[4];
      iVar17 = iVar16 + (int)plVar23[8];
      if (iVar17 != 0 && SCARRY4(iVar16,(int)plVar23[8]) == iVar17 < 0) {
        puVar21 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
        puVar28 = puVar21 + 0xb;
        if ((undefined8 *)param_1[1] < puVar28) {
          FUN_140023dd8(param_1,0x60);
          puVar21 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
          puVar28 = puVar21 + 0xb;
        }
        *param_1 = (ulonglong)puVar28;
        *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
        *(undefined8 **)param_1[6] = puVar21;
        param_1[6] = (ulonglong)(puVar21 + 1);
        lVar22 = plVar23[7];
        lVar36 = plVar23[8];
        lVar24 = plVar23[5];
        lVar37 = plVar23[6];
        lVar35 = plVar23[3];
        lVar13 = plVar23[4];
        lVar25 = plVar23[1];
        lVar14 = plVar23[2];
        puVar21[1] = 0;
        *puVar21 = &PTR_FUN_14a1e7fa8;
        puVar21[2] = local_1e0;
        puVar21[3] = lVar25;
        *(int *)(puVar21 + 4) = (int)lVar14;
        puVar21[5] = lVar35;
        *(int *)(puVar21 + 6) = (int)lVar13;
        puVar21[7] = lVar24;
        *(int *)(puVar21 + 8) = (int)lVar37;
        puVar21[9] = lVar22;
        *(int *)(puVar21 + 10) = (int)lVar36;
        plVar23[1] = 0;
        *(undefined4 *)(plVar23 + 2) = 0;
        plVar23[3] = 0;
        *(undefined4 *)(plVar23 + 4) = 0;
        plVar23[5] = 0;
        *(undefined4 *)(plVar23 + 6) = 0;
        plVar23[7] = 0;
        *(undefined4 *)(plVar23 + 8) = 0;
      }
      puVar21 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
      puVar28 = puVar21 + 4;
      if ((undefined8 *)param_1[1] < puVar28) {
        FUN_140023dd8(param_1,0x28);
        puVar21 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
        puVar28 = puVar21 + 4;
      }
      *param_1 = (ulonglong)puVar28;
      *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
      *(undefined8 **)param_1[6] = puVar21;
      param_1[6] = (ulonglong)(puVar21 + 1);
      puVar21[1] = 0;
      *puVar21 = &PTR_LAB_14a1fbc30;
      *(int *)(puVar21 + 2) = local_1cc;
      *(undefined1 **)((longlong)puVar21 + 0x14) = &DAT_100000001;
      if (DAT_14ca8507b == '\x01') {
        if ((0 < (int)param_1[0x13]) &&
           (*(undefined4 *)(param_1 + 0x13) = 0, *(int *)((longlong)param_1 + 0x9c) < 0)) {
          FUN_147139e90(local_220,0);
        }
        if ((*(char *)(local_230 + 0xe2) != '\0') && (*(char *)(local_230 + 0xe3) != '\x06')) {
          uVar38 = *(undefined2 *)(local_230 + 0xe0);
          iVar16 = (int)param_1[0x13];
          *(uint *)(param_1 + 0x13) = iVar16 + 1U;
          if (*(uint *)((longlong)param_1 + 0x9c) < iVar16 + 1U) {
            FUN_1447477d8(local_220,iVar16);
          }
          uVar19 = *local_220;
          *(undefined2 *)(uVar19 + (longlong)iVar16 * 4) = uVar38;
          *(undefined1 *)(uVar19 + 2 + (longlong)iVar16 * 4) = 0;
        }
        if ((*(char *)(local_230 + 0xe6) != '\0') && (*(char *)(local_230 + 0xe7) != '\x06')) {
          uVar38 = *(undefined2 *)(local_230 + 0xe4);
          iVar16 = (int)param_1[0x13];
          *(uint *)(param_1 + 0x13) = iVar16 + 1U;
          if (*(uint *)((longlong)param_1 + 0x9c) < iVar16 + 1U) {
            FUN_1447477d8(local_220,iVar16);
          }
          uVar19 = *local_220;
          *(undefined2 *)(uVar19 + (longlong)iVar16 * 4) = uVar38;
          *(undefined1 *)(uVar19 + 2 + (longlong)iVar16 * 4) = 0;
        }
        if ((*(char *)(local_230 + 0xea) != '\0') && (*(char *)(local_230 + 0xeb) != '\x06')) {
          uVar38 = *(undefined2 *)(local_230 + 0xe8);
          iVar16 = (int)param_1[0x13];
          *(uint *)(param_1 + 0x13) = iVar16 + 1U;
          if (*(uint *)((longlong)param_1 + 0x9c) < iVar16 + 1U) {
            FUN_1447477d8(local_220,iVar16);
          }
          uVar19 = *local_220;
          *(undefined2 *)(uVar19 + (longlong)iVar16 * 4) = uVar38;
          *(undefined1 *)(uVar19 + 2 + (longlong)iVar16 * 4) = 0;
        }
        if ((*(char *)(local_230 + 0xee) != '\0') && (*(char *)(local_230 + 0xef) != '\x06')) {
          uVar38 = *(undefined2 *)(local_230 + 0xec);
          iVar16 = (int)param_1[0x13];
          *(uint *)(param_1 + 0x13) = iVar16 + 1U;
          if (*(uint *)((longlong)param_1 + 0x9c) < iVar16 + 1U) {
            FUN_1447477d8(local_220,iVar16);
          }
          uVar19 = *local_220;
          *(undefined2 *)(uVar19 + (longlong)iVar16 * 4) = uVar38;
          *(undefined1 *)(uVar19 + 2 + (longlong)iVar16 * 4) = 0;
        }
        if ((*(char *)(local_230 + 0xf2) != '\0') && (*(char *)(local_230 + 0xf3) != '\x06')) {
          uVar38 = *(undefined2 *)(local_230 + 0xf0);
          iVar16 = (int)param_1[0x13];
          *(uint *)(param_1 + 0x13) = iVar16 + 1U;
          if (*(uint *)((longlong)param_1 + 0x9c) < iVar16 + 1U) {
            FUN_1447477d8(local_220,iVar16);
          }
          uVar19 = *local_220;
          *(undefined2 *)(uVar19 + (longlong)iVar16 * 4) = uVar38;
          *(undefined1 *)(uVar19 + 2 + (longlong)iVar16 * 4) = 1;
        }
        if ((*(char *)(local_230 + 0xf6) != '\0') && (*(char *)(local_230 + 0xf7) != '\x06')) {
          uVar38 = *(undefined2 *)(local_230 + 0xf4);
          iVar16 = (int)param_1[0x13];
          *(uint *)(param_1 + 0x13) = iVar16 + 1U;
          if (*(uint *)((longlong)param_1 + 0x9c) < iVar16 + 1U) {
            FUN_1447477d8(local_220,iVar16);
          }
          uVar19 = *local_220;
          *(undefined2 *)(uVar19 + (longlong)iVar16 * 4) = uVar38;
          *(undefined1 *)(uVar19 + 2 + (longlong)iVar16 * 4) = 1;
        }
        if (local_230 == 0) {
          lVar22 = 0;
        }
        else {
          lVar22 = *(longlong *)
                    (*(longlong *)(*(longlong *)(local_1c0 + 8) + 0x50) +
                    (longlong)*(int *)(local_230 + 0xd4) * 8);
          if (lVar22 == 0) {
            lVar22 = FUN_1400bafc2(*(longlong *)(local_1c0 + 8),(longlong)*(int *)(local_230 + 0xd4)
                                   ,1);
          }
        }
        uVar19 = param_1[0x13];
        lVar24 = (longlong)(int)uVar19;
        if (0 < lVar24) {
          if (DAT_14ca8507b == '\x01') {
            pvVar9 = (void *)*local_220;
            puVar21 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
            puVar28 = puVar21 + 5;
            if ((undefined8 *)param_1[1] < puVar28) {
              FUN_140023dd8(param_1,0x30);
              puVar21 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
              puVar28 = puVar21 + 5;
            }
            *param_1 = (ulonglong)puVar28;
            *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
            *(undefined8 **)param_1[6] = puVar21;
            param_1[6] = (ulonglong)(puVar21 + 1);
            sVar3 = lVar24 * 4;
            pvVar42 = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
            pvVar26 = (void *)((longlong)pvVar42 + lVar24 * 4);
            if ((void *)param_1[1] < pvVar26) {
              FUN_140023dd8(param_1,(uint)sVar3 | 2);
              pvVar42 = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
              pvVar26 = (void *)((longlong)pvVar42 + sVar3);
            }
            *param_1 = (ulonglong)pvVar26;
            memcpy(pvVar42,pvVar9,sVar3);
            puVar21[1] = 0;
            *puVar21 = &PTR_FUN_14a1fbc38;
            puVar21[2] = lVar22;
            puVar21[3] = pvVar42;
            *(int *)(puVar21 + 4) = (int)uVar19;
            lVar40 = local_1d8;
          }
          *(undefined4 *)(param_1 + 0x13) = 0;
          if (*(int *)((longlong)param_1 + 0x9c) < 0) {
            FUN_147139e90(local_220,0);
          }
        }
      }
      local_100 = *(undefined8 *)(local_1a8 + 0x10 + local_208 * 8);
      local_110 = -1;
      uStack_108 = 0xffffffff;
      local_f8 = 3;
      local_f4 = 0x1000000400;
      local_ec = 0;
      local_e0 = 0;
      local_c8 = *(undefined8 *)(local_1a8 + 0x30 + local_208 * 8);
      local_d8 = 0xffffffffffffffff;
      local_d0 = 0xffffffff;
      local_c0 = 3;
      local_bc = 0x1000000400;
      local_b4 = 0;
      local_a8 = 0;
      local_170 = &local_110;
      local_168 = 2;
      FUN_144760590(param_1,&local_170,0);
      lVar22 = 0x68;
      do {
        if (*(char *)((longlong)&local_110 + lVar22) == '\x01') {
          *(undefined1 *)((longlong)&local_110 + lVar22) = 0;
        }
        lVar22 = lVar22 + -0x38;
      } while (lVar22 != -8);
      lVar22 = local_1a0;
      uVar43 = local_1d0;
      iVar16 = local_1c4;
      if (local_198 != 0) break;
    }
    local_68 = local_68 + 4;
    iVar16 = iVar16 + 1;
  } while (iVar16 != 8);
  if (lVar22 != 0) {
    LOCK();
    puVar4 = (uint *)(lVar22 + 8);
    uVar43 = *puVar4;
    *puVar4 = *puVar4 - 1;
    UNLOCK();
    if ((uVar43 & 0x3fffffff) == 1) {
      puVar4 = (uint *)(lVar22 + 8);
      LOCK();
      uVar43 = *puVar4;
      *puVar4 = *puVar4 | 0x40000000;
      UNLOCK();
      if ((uVar43 >> 0x1e & 1) == 0) {
        bVar7 = *(byte *)(lVar22 + 0xd);
        plVar32 = (longlong *)FUN_14001cc68(0x10,8);
        plVar32[1] = lVar22;
        plVar23 = DAT_14ca843c0;
        plVar27 = DAT_14ca843c8;
        if ((bVar7 & 2) == 0) {
          do {
            *plVar32 = (longlong)plVar23;
            LOCK();
            bVar44 = plVar23 != DAT_14ca843c0;
            plVar27 = plVar32;
            if (bVar44) {
              plVar23 = DAT_14ca843c0;
              plVar27 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar27;
            UNLOCK();
          } while (bVar44);
        }
        else {
          do {
            *plVar32 = (longlong)plVar27;
            LOCK();
            bVar44 = plVar27 != DAT_14ca843c8;
            plVar23 = plVar32;
            if (bVar44) {
              plVar27 = DAT_14ca843c8;
              plVar23 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar23;
            UNLOCK();
          } while (bVar44);
        }
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_2a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return local_1e4;
}



// FUNCTION 1409fc52c FUN_1409fc52c body=1261 status=ok
// SIG undefined FUN_1409fc52c(void)

void FUN_1409fc52c(ulonglong *param_1,int param_2,undefined8 param_3,longlong param_4,
                  longlong param_5,int param_6,int param_7)

{
  ulonglong *puVar1;
  undefined2 uVar2;
  int iVar3;
  void *_Src;
  ulonglong uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  void *pvVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  size_t _Size;
  longlong lVar12;
  int iVar13;
  int iVar14;
  void *_Dst;
  undefined1 auStack_c8 [32];
  longlong *local_a8;
  longlong *local_a0;
  undefined4 *local_98;
  int *local_90;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  int local_64;
  undefined8 local_60;
  longlong local_58;
  longlong local_50;
  ulonglong local_48;
  
  iVar3 = param_7;
  local_80 = param_5;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uVar5 = *(undefined8 *)
           (&DAT_14ca8c1f0 + (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)param_2 * 2) * 8);
  local_60 = param_3;
  FUN_145fe4332();
  uVar4 = 0;
  FUN_1448e935e(uVar5,&local_58,&DAT_14cae3ee8,0);
  FUN_145fe4332();
  if (local_58 != 0) {
    uVar4 = *(ulonglong *)
             (*(longlong *)(*(longlong *)(local_50 + 8) + 0x50) +
             (longlong)*(int *)(local_58 + 0xd4) * 8);
    if (uVar4 == 0) {
      uVar4 = FUN_1400bafc2(*(longlong *)(local_50 + 8),(longlong)*(int *)(local_58 + 0xd4),1);
    }
  }
  uVar5 = FUN_140029432(param_1,uVar4,0);
  param_1[0x37] = uVar4;
  puVar6 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar7 = puVar6 + 3;
  if ((undefined8 *)param_1[1] < puVar7) {
    FUN_140023dd8(param_1,0x20);
    puVar6 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar7 = puVar6 + 3;
  }
  *param_1 = (ulonglong)puVar7;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar6;
  param_1[6] = (ulonglong)(puVar6 + 1);
  puVar6[1] = 0;
  *puVar6 = &PTR_LAB_14a37d340;
  puVar6[2] = uVar5;
  FUN_143520efc(param_1);
  if (0 < iVar3) {
    iVar14 = 0;
    lVar11 = local_80;
    iVar10 = iVar3;
    do {
      iVar9 = param_6;
      local_64 = 3;
      if (iVar10 < 3) {
        local_64 = iVar10;
      }
      iVar13 = *(int *)(local_80 + -4 + (longlong)(local_64 + iVar14) * 4);
      local_78 = param_4;
      local_70 = lVar11;
      if (local_58 == 0) {
        lVar12 = 0;
      }
      else {
        lVar12 = *(longlong *)
                  (*(longlong *)(*(longlong *)(local_50 + 8) + 0x50) +
                  (longlong)*(int *)(local_58 + 0xd4) * 8);
        if (lVar12 == 0) {
          lVar12 = FUN_1400bafc2(*(longlong *)(local_50 + 8),(longlong)*(int *)(local_58 + 0xd4),1);
        }
      }
      iVar13 = iVar13 - iVar9;
      local_90 = &local_64;
      local_98 = &param_6;
      local_a0 = &local_70;
      local_a8 = &local_78;
      FUN_145a1a8da(param_1,&local_58,lVar12,&local_60);
      iVar9 = iVar13 + 0x7e;
      if (-1 < iVar13 + 0x3f) {
        iVar9 = iVar13 + 0x3f;
      }
      puVar6 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
      puVar7 = puVar6 + 4;
      if ((undefined8 *)param_1[1] < puVar7) {
        FUN_140023dd8(param_1,0x28);
        puVar6 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
        puVar7 = puVar6 + 4;
      }
      *param_1 = (ulonglong)puVar7;
      *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
      *(undefined8 **)param_1[6] = puVar6;
      param_1[6] = (ulonglong)(puVar6 + 1);
      puVar6[1] = 0;
      *puVar6 = &PTR_LAB_14a1fbc30;
      *(int *)(puVar6 + 2) = iVar9 >> 6;
      *(undefined1 **)((longlong)puVar6 + 0x14) = &DAT_100000001;
      param_6 = iVar13 + param_6;
      iVar14 = iVar14 + 3;
      param_4 = param_4 + 0x18;
      lVar11 = lVar11 + 0xc;
      iVar10 = iVar10 + -3;
    } while (iVar14 < iVar3);
  }
  if (DAT_14ca8507b == '\x01') {
    puVar1 = param_1 + 0x12;
    if ((0 < (int)param_1[0x13]) &&
       (*(undefined4 *)(param_1 + 0x13) = 0, *(int *)((longlong)param_1 + 0x9c) < 0)) {
      FUN_147139e90(puVar1,0);
    }
    if ((*(char *)(local_58 + 0xe8) != '\0') && (*(char *)(local_58 + 0xe9) != '\x06')) {
      uVar2 = *(undefined2 *)(local_58 + 0xe6);
      iVar3 = (int)param_1[0x13];
      *(uint *)(param_1 + 0x13) = iVar3 + 1U;
      if (*(uint *)((longlong)param_1 + 0x9c) < iVar3 + 1U) {
        FUN_1447477d8(puVar1,iVar3);
      }
      uVar4 = *puVar1;
      *(undefined2 *)(uVar4 + (longlong)iVar3 * 4) = uVar2;
      *(undefined1 *)(uVar4 + 2 + (longlong)iVar3 * 4) = 0;
    }
    lVar11 = 0xed;
    do {
      if ((*(char *)(local_58 + -1 + lVar11) != '\0') && (*(char *)(local_58 + lVar11) != '\x06')) {
        uVar2 = *(undefined2 *)(local_58 + -3 + lVar11);
        iVar3 = (int)param_1[0x13];
        *(uint *)(param_1 + 0x13) = iVar3 + 1U;
        if (*(uint *)((longlong)param_1 + 0x9c) < iVar3 + 1U) {
          FUN_1447477d8(puVar1,iVar3);
        }
        uVar4 = *puVar1;
        *(undefined2 *)(uVar4 + (longlong)iVar3 * 4) = uVar2;
        *(undefined1 *)(uVar4 + 2 + (longlong)iVar3 * 4) = 1;
      }
      lVar11 = lVar11 + 4;
    } while (lVar11 != 0xf9);
    if (local_58 == 0) {
      lVar11 = 0;
    }
    else {
      lVar11 = *(longlong *)
                (*(longlong *)(*(longlong *)(local_50 + 8) + 0x50) +
                (longlong)*(int *)(local_58 + 0xd4) * 8);
      if (lVar11 == 0) {
        lVar11 = FUN_1400bafc2(*(longlong *)(local_50 + 8),(longlong)*(int *)(local_58 + 0xd4),1);
      }
    }
    uVar4 = param_1[0x13];
    lVar12 = (longlong)(int)uVar4;
    if (0 < lVar12) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar1;
        puVar6 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
        puVar7 = puVar6 + 5;
        if ((undefined8 *)param_1[1] < puVar7) {
          FUN_140023dd8(param_1,0x30);
          puVar6 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
          puVar7 = puVar6 + 5;
        }
        *param_1 = (ulonglong)puVar7;
        *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
        *(undefined8 **)param_1[6] = puVar6;
        param_1[6] = (ulonglong)(puVar6 + 1);
        _Dst = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
        pvVar8 = (void *)((longlong)_Dst + lVar12 * 4);
        _Size = lVar12 * 4;
        if ((void *)param_1[1] < pvVar8) {
          FUN_140023dd8(param_1,(uint)_Size | 2);
          _Dst = (void *)(*param_1 + 1 & 0xfffffffffffffffe);
          pvVar8 = (void *)((longlong)_Dst + _Size);
        }
        *param_1 = (ulonglong)pvVar8;
        memcpy(_Dst,_Src,_Size);
        puVar6[1] = 0;
        *puVar6 = &PTR_FUN_14a1fbc38;
        puVar6[2] = lVar11;
        puVar6[3] = _Dst;
        *(int *)(puVar6 + 4) = (int)uVar4;
      }
      *(undefined4 *)(param_1 + 0x13) = 0;
      if (*(int *)((longlong)param_1 + 0x9c) < 0) {
        FUN_147139e90(puVar1,0);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  FUN_143521002(param_1);
  return;
}



// FUNCTION 1409fca1a FUN_1409fca1a body=713 status=ok
// SIG undefined FUN_1409fca1a(void)

void FUN_1409fca1a(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 *puVar5;
  undefined1 auStack_128 [32];
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  longlong local_e8;
  undefined1 *local_e0;
  undefined1 local_d8 [128];
  undefined1 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_58 = (undefined1 *)0x0;
  local_50 = 0x1000000000;
  lVar4 = *(longlong *)(param_1 + 0x28);
  local_108 = param_2;
  local_100 = param_3;
  local_e0 = local_d8;
  FUN_14009d97a(lVar4 + 0x2a0);
  lVar3 = *(longlong *)(lVar4 + 0x2a8);
  if (*(longlong *)(lVar4 + 0x2a8) == 0) {
    lVar3 = lVar4 + 0x2a0;
  }
  iVar1 = *(int *)(lVar4 + 0x2b0);
  if ((longlong)iVar1 != 0) {
    lVar2 = 0;
    do {
      local_f8 = *(undefined8 *)
                  (*(longlong *)(lVar4 + 0x358) + 0x20 +
                  (ulonglong)*(ushort *)(lVar3 + lVar2) * 0x28);
      FUN_1409fcce4(&local_e0,&local_f8);
      lVar2 = lVar2 + 2;
    } while ((longlong)iVar1 * 2 != lVar2);
  }
  lVar4 = *(longlong *)(param_1 + 0x28);
  FUN_14009d97a(lVar4 + 0x2a0);
  lVar3 = lVar4 + 0x2b8;
  if (*(longlong *)(lVar4 + 0x2c8) != 0) {
    lVar3 = *(longlong *)(lVar4 + 0x2c8);
  }
  iVar1 = *(int *)(lVar4 + 0x2d0);
  if ((longlong)iVar1 != 0) {
    lVar2 = 0;
    do {
      local_f8 = *(undefined8 *)
                  (*(longlong *)(lVar4 + 0x358) + 0x20 +
                  (ulonglong)*(ushort *)(lVar3 + lVar2) * 0x28);
      FUN_1409fcce4(&local_e0,&local_f8);
      lVar2 = lVar2 + 2;
    } while ((longlong)iVar1 * 2 != lVar2);
  }
  lVar4 = *(longlong *)(param_1 + 0x28);
  FUN_14009d97a(lVar4 + 0x2a0);
  lVar3 = lVar4 + 0x2d8;
  if (*(longlong *)(lVar4 + 0x2f8) != 0) {
    lVar3 = *(longlong *)(lVar4 + 0x2f8);
  }
  iVar1 = *(int *)(lVar4 + 0x300);
  if ((longlong)iVar1 != 0) {
    lVar2 = 0;
    do {
      local_f8 = *(undefined8 *)
                  (*(longlong *)(lVar4 + 0x358) + 0x20 +
                  (ulonglong)*(ushort *)(lVar3 + lVar2) * 0x28);
      FUN_1409fcce4(&local_e0,&local_f8);
      lVar2 = lVar2 + 2;
    } while ((longlong)iVar1 * 2 != lVar2);
  }
  lVar4 = *(longlong *)(param_1 + 0x28);
  FUN_14009d97a(lVar4 + 0x2a0);
  lVar3 = lVar4 + 0x308;
  if (*(longlong *)(lVar4 + 0x328) != 0) {
    lVar3 = *(longlong *)(lVar4 + 0x328);
  }
  iVar1 = *(int *)(lVar4 + 0x330);
  if ((longlong)iVar1 != 0) {
    lVar2 = 0;
    do {
      local_f8 = *(undefined8 *)
                  (*(longlong *)(lVar4 + 0x358) + 0x20 +
                  (ulonglong)*(ushort *)(lVar3 + lVar2) * 0x28);
      FUN_1409fcce4(&local_e0,&local_f8);
      lVar2 = lVar2 + 2;
    } while ((longlong)iVar1 * 2 != lVar2);
  }
  local_f8 = local_108;
  local_f0 = local_100;
  local_e8 = *(longlong *)(param_1 + 0x28) + 0x430;
  puVar5 = local_d8;
  if (local_58 != (undefined1 *)0x0) {
    puVar5 = local_58;
  }
  lVar4 = (longlong)(int)local_50;
  if (lVar4 != 0) {
    lVar3 = 0;
    do {
      (**(code **)(**(longlong **)(puVar5 + lVar3) + 0x10))
                (*(longlong **)(puVar5 + lVar3),&local_f8);
      lVar3 = lVar3 + 8;
    } while (lVar4 * 8 != lVar3);
  }
  if (local_58 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1409fcce4 FUN_1409fcce4 body=107 status=ok
// SIG undefined FUN_1409fcce4(void)

void FUN_1409fcce4(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar4 = *param_2;
  if (lVar4 != 0) {
    uVar3 = FUN_141302efc();
    lVar4 = FUN_144718840(lVar4,uVar3);
    if (lVar4 != 0) {
      lVar2 = *param_1;
      iVar1 = *(int *)(lVar2 + 0x88);
      *(uint *)(lVar2 + 0x88) = iVar1 + 1U;
      if (*(uint *)(lVar2 + 0x8c) < iVar1 + 1U) {
        FUN_1475522b4(lVar2,iVar1);
      }
      lVar5 = *(longlong *)(lVar2 + 0x80);
      if (*(longlong *)(lVar2 + 0x80) == 0) {
        lVar5 = lVar2;
      }
      *(longlong *)(lVar5 + (longlong)iVar1 * 8) = lVar4;
    }
  }
  return;
}



// FUNCTION 1409fcd58 FUN_1409fcd58 body=169 status=ok
// SIG undefined FUN_1409fcd58(void)

undefined1 FUN_1409fcd58(longlong param_1,undefined8 param_2)

{
  undefined1 extraout_AL;
  undefined1 uVar1;
  undefined1 extraout_AH;
  undefined1 extraout_AH_00;
  undefined1 extraout_AH_01;
  undefined1 extraout_AH_02;
  undefined1 extraout_AH_03;
  undefined6 extraout_var;
  
  FUN_1409fce02();
  FUN_1402057ac(param_2,param_1,CONCAT62(extraout_var,CONCAT11(extraout_AH,extraout_AL)),0);
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1408c99be();
    FUN_1405593a8(&DAT_14cb83290,param_1 + 0x38,param_1 + 8);
  }
  uVar1 = FUN_14026189c(param_2,&DAT_14cb83270,&DAT_14c9a77f0);
  *(ushort *)(param_1 + 0x28) = CONCAT11(extraout_AH_00,uVar1);
  uVar1 = FUN_14026189c(param_2,&DAT_14cb83278,&DAT_14c9a77f0);
  *(ushort *)(param_1 + 0x2a) = CONCAT11(extraout_AH_01,uVar1);
  uVar1 = FUN_1408da90e(param_2,&DAT_14cb83280);
  *(ushort *)(param_1 + 0x32) = CONCAT11(extraout_AH_02,uVar1);
  uVar1 = FUN_1408da90e(param_2,&DAT_14cb83288);
  *(ushort *)(param_1 + 0x34) = CONCAT11(extraout_AH_03,uVar1);
  return 1;
}



// FUNCTION 1409fce02 FUN_1409fce02 body=57 status=ok
// SIG undefined FUN_1409fce02(void)

void FUN_1409fce02(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6a620 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6a620 = FUN_140002ddd(FUN_1465269b2,uVar1,L"InventoryStatAttributeData");
  }
  return;
}



// FUNCTION 1409fce3c FUN_1409fce3c body=1408 status=ok
// SIG undefined FUN_1409fce3c(void)

void FUN_1409fce3c(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  FUN_14010ed74();
  FUN_1402d7906(param_1 + 0x808,param_1 + 0x690);
  for (lVar5 = param_1; lVar5 != 0; lVar5 = *(longlong *)(lVar5 + 0x20)) {
    if ((*(uint *)(lVar5 + 8) & 0x30) != 0) {
      return;
    }
  }
  lVar5 = *(longlong *)(param_1 + 0xd40);
  if (lVar5 == 0) {
    uVar4 = FUN_1409fd3f6();
    lVar5 = FUN_14477b664(uVar4);
    *(longlong *)(param_1 + 0xd40) = lVar5;
  }
  if (*(longlong *)(param_1 + 0xd48) == 0) {
    plVar1 = (longlong *)(param_1 + 0xd38);
    if ((*plVar1 != 0) && (lVar5 != 0)) {
      plVar2 = *(longlong **)(lVar5 + 0xb8);
      if ((plVar2 == (longlong *)0x0) ||
         (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
        *(undefined8 *)(param_1 + 0xd48) = 0;
      }
      else {
        uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
        lVar5 = FUN_144aff482(uVar4,plVar1);
        *(longlong *)(param_1 + 0xd48) = lVar5;
        if (lVar5 != 0) goto LAB_1409fcf91;
      }
    }
    lVar6 = FUN_1409fd42f();
    lVar5 = *(longlong *)(lVar6 + 0x90);
    if (*plVar1 != lVar5) {
      *(undefined8 *)(param_1 + 0xd48) = 0;
    }
    *(longlong *)(param_1 + 0xd38) = lVar5;
    if (*(longlong *)(param_1 + 0xd40) != *(longlong *)(lVar6 + 0x98)) {
      *(undefined8 *)(param_1 + 0xd48) = 0;
    }
    uVar4 = FUN_14477b664();
    lVar7 = FUN_14477b664(uVar4);
    *(longlong *)(param_1 + 0xd40) = lVar7;
    lVar5 = *(longlong *)(lVar6 + 0xa0);
    *(longlong *)(param_1 + 0xd48) = lVar5;
    if (lVar7 == 0) {
      uVar4 = FUN_1409fd3f6();
      lVar7 = FUN_14477b664(uVar4);
      *(longlong *)(param_1 + 0xd40) = lVar7;
      lVar5 = *(longlong *)(param_1 + 0xd48);
    }
    if (lVar5 == 0) {
      *(undefined8 *)(param_1 + 0xd48) = 0;
      if ((lVar7 != 0) && (*(longlong *)(param_1 + 0xd38) != 0)) {
        plVar2 = *(longlong **)(lVar7 + 0xb8);
        if ((plVar2 == (longlong *)0x0) ||
           (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
          *(undefined8 *)(param_1 + 0xd48) = 0;
        }
        else {
          uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
          lVar5 = FUN_144aff482(uVar4,plVar1);
          *(longlong *)(param_1 + 0xd48) = lVar5;
          if (lVar5 != 0) goto LAB_1409fcf91;
        }
      }
      *(undefined1 *)(param_1 + 0xd30) = 0;
    }
  }
LAB_1409fcf91:
  lVar5 = *(longlong *)(param_1 + 0xe18);
  if (lVar5 == 0) {
    uVar4 = FUN_1409fd3bc();
    lVar5 = FUN_14477b664(uVar4);
    *(longlong *)(param_1 + 0xe18) = lVar5;
  }
  if (*(longlong *)(param_1 + 0xe20) == 0) {
    plVar1 = (longlong *)(param_1 + 0xe10);
    if ((*plVar1 != 0) && (lVar5 != 0)) {
      plVar2 = *(longlong **)(lVar5 + 0xb8);
      if ((plVar2 == (longlong *)0x0) ||
         (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
        *(undefined8 *)(param_1 + 0xe20) = 0;
      }
      else {
        uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
        lVar5 = FUN_144aff482(uVar4,plVar1);
        *(longlong *)(param_1 + 0xe20) = lVar5;
        if (lVar5 != 0) goto LAB_1409fd0a4;
      }
    }
    lVar6 = FUN_1409fd42f();
    lVar5 = *(longlong *)(lVar6 + 0x78);
    if (*plVar1 != lVar5) {
      *(undefined8 *)(param_1 + 0xe20) = 0;
    }
    *(longlong *)(param_1 + 0xe10) = lVar5;
    if (*(longlong *)(param_1 + 0xe18) != *(longlong *)(lVar6 + 0x80)) {
      *(undefined8 *)(param_1 + 0xe20) = 0;
    }
    uVar4 = FUN_14477b664();
    lVar7 = FUN_14477b664(uVar4);
    *(longlong *)(param_1 + 0xe18) = lVar7;
    lVar5 = *(longlong *)(lVar6 + 0x88);
    *(longlong *)(param_1 + 0xe20) = lVar5;
    if (lVar7 == 0) {
      uVar4 = FUN_1409fd3bc();
      lVar7 = FUN_14477b664(uVar4);
      *(longlong *)(param_1 + 0xe18) = lVar7;
      lVar5 = *(longlong *)(param_1 + 0xe20);
    }
    if (lVar5 == 0) {
      *(undefined8 *)(param_1 + 0xe20) = 0;
      if ((lVar7 != 0) && (*(longlong *)(param_1 + 0xe10) != 0)) {
        plVar2 = *(longlong **)(lVar7 + 0xb8);
        if ((plVar2 == (longlong *)0x0) ||
           (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
          *(undefined8 *)(param_1 + 0xe20) = 0;
        }
        else {
          uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
          lVar5 = FUN_144aff482(uVar4,plVar1);
          *(longlong *)(param_1 + 0xe20) = lVar5;
          if (lVar5 != 0) goto LAB_1409fd0a4;
        }
      }
      *(undefined1 *)(param_1 + 0xe08) = 0;
    }
  }
LAB_1409fd0a4:
  lVar5 = *(longlong *)(param_1 + 0xc00);
  if (lVar5 == 0) {
    uVar4 = FUN_1409fd3bc();
    lVar5 = FUN_14477b664(uVar4);
    *(longlong *)(param_1 + 0xc00) = lVar5;
  }
  if (*(longlong *)(param_1 + 0xc08) == 0) {
    plVar1 = (longlong *)(param_1 + 0xbf8);
    if ((*plVar1 != 0) && (lVar5 != 0)) {
      plVar2 = *(longlong **)(lVar5 + 0xb8);
      if ((plVar2 == (longlong *)0x0) ||
         (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
        *(undefined8 *)(param_1 + 0xc08) = 0;
      }
      else {
        uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
        lVar5 = FUN_144aff482(uVar4,plVar1);
        *(longlong *)(param_1 + 0xc08) = lVar5;
        if (lVar5 != 0) {
          return;
        }
      }
    }
    lVar6 = FUN_1409fd42f();
    lVar5 = *(longlong *)(lVar6 + 0x78);
    if (*plVar1 != lVar5) {
      *(undefined8 *)(param_1 + 0xc08) = 0;
    }
    *(longlong *)(param_1 + 0xbf8) = lVar5;
    if (*(longlong *)(param_1 + 0xc00) != *(longlong *)(lVar6 + 0x80)) {
      *(undefined8 *)(param_1 + 0xc08) = 0;
    }
    uVar4 = FUN_14477b664();
    lVar7 = FUN_14477b664(uVar4);
    *(longlong *)(param_1 + 0xc00) = lVar7;
    lVar5 = *(longlong *)(lVar6 + 0x88);
    *(longlong *)(param_1 + 0xc08) = lVar5;
    if (lVar7 == 0) {
      uVar4 = FUN_1409fd3bc();
      lVar7 = FUN_14477b664(uVar4);
      *(longlong *)(param_1 + 0xc00) = lVar7;
      lVar5 = *(longlong *)(param_1 + 0xc08);
    }
    if (lVar5 == 0) {
      *(undefined8 *)(param_1 + 0xc08) = 0;
      if ((lVar7 != 0) && (*(longlong *)(param_1 + 0xbf8) != 0)) {
        plVar2 = *(longlong **)(lVar7 + 0xb8);
        if ((plVar2 == (longlong *)0x0) ||
           (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
          *(undefined8 *)(param_1 + 0xc08) = 0;
        }
        else {
          uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
          lVar5 = FUN_144aff482(uVar4,plVar1);
          *(longlong *)(param_1 + 0xc08) = lVar5;
          if (lVar5 != 0) {
            return;
          }
        }
      }
      *(undefined1 *)(param_1 + 0xbf0) = 0;
    }
  }
  return;
}



// FUNCTION 1409fd3bc FUN_1409fd3bc body=57 status=ok
// SIG undefined FUN_1409fd3bc(void)

void FUN_1409fd3bc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb590c8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb590c8 = FUN_140002ddd(FUN_1464c55d7,uVar1,L"GbxAINodeFollowSettingsDef");
  }
  return;
}



// FUNCTION 1409fd3f6 FUN_1409fd3f6 body=57 status=ok
// SIG undefined FUN_1409fd3f6(void)

void FUN_1409fd3f6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb59110 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb59110 = FUN_140002ddd(FUN_1464c56ce,uVar1,L"GbxAINodeLeadSettingsDef");
  }
  return;
}



// FUNCTION 1409fd42f FUN_1409fd42f body=227 status=ok
// SIG undefined FUN_1409fd42f(void)

longlong * FUN_1409fd42f(void)

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_68 [40];
  undefined1 local_40 [24];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14cb71858 == (longlong *)0x0) {
    memset(&DAT_14cb71860,0,0xb0);
    FUN_145ceb3c0(&DAT_14cb71860);
    DAT_14cb71858 = (longlong *)&DAT_14cb71860;
  }
  plVar1 = DAT_14cb71858;
  plVar3 = DAT_14cb71858 + 1;
  if ((char)DAT_14cb71858[2] == '\0') {
LAB_1409fd45c:
    if (*plVar3 == 0) goto LAB_1409fd4c9;
    cVar2 = FUN_1449e3c20(DAT_14cb71858);
    if (cVar2 == '\0') goto LAB_1409fd472;
  }
  else {
    if ((char)DAT_14cb71858[2] == '\x02') {
      plVar3 = (longlong *)(*plVar3 + 0x30);
      goto LAB_1409fd45c;
    }
LAB_1409fd4c9:
    lVar4 = FUN_140162146();
    if (lVar4 == 0) goto LAB_1409fd472;
    FUN_144a884d2(local_40,"def_globals_ai_node",0);
    FUN_140024ada(local_40,plVar1);
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  (**(code **)(*plVar1 + 0x20))(plVar1);
LAB_1409fd472:
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return plVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1409fd514 FUN_1409fd514 body=710 status=ok
// SIG undefined FUN_1409fd514(void)

longlong *
FUN_1409fd514(undefined8 param_1,longlong *param_2,longlong param_3,int param_4,int param_5)

{
  uint *puVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  longlong *plVar10;
  longlong lVar11;
  int iVar12;
  ulonglong uVar13;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined8 *local_a0;
  undefined4 local_94;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined8 local_74;
  undefined8 uStack_6c;
  uint local_64;
  undefined1 local_60;
  undefined4 local_5c;
  wchar_t *local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uVar9 = param_5 * param_4;
  if (0x200000 < uVar9) {
    FUN_147a7d490(param_2,param_3,param_4,param_5);
LAB_1409fd61b:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_c8);
  }
  if (DAT_14cad7828 == -1) {
    *param_2 = 0;
  }
  else {
    uVar4 = 0;
    uVar6 = 0x10;
    do {
      uVar7 = uVar4 + uVar6 >> 1;
      if (uVar9 <= (uint)(&DAT_14a8bdfa0)[uVar7 - 1]) {
        uVar6 = uVar7;
        uVar7 = uVar4;
      }
      uVar4 = uVar7;
    } while (1 < uVar6 - uVar4);
    uVar13 = (ulonglong)uVar4;
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14cad73e8);
    if (0 < (longlong)(int)(&DAT_14cad7418)[uVar13 * 4]) {
      plVar10 = &DAT_14cad7410 + uVar13 * 2;
      lVar5 = (longlong)(int)(&DAT_14cad7418)[uVar13 * 4] * 0x10;
      lVar2 = *(longlong *)(*plVar10 + -0x10 + lVar5);
      *(undefined8 *)(*plVar10 + -0x10 + lVar5) = 0;
      iVar12 = (&DAT_14cad7418)[uVar13 * 4];
      lVar5 = *plVar10;
      lVar11 = (longlong)iVar12 * 0x10;
      lVar3 = *(longlong *)(lVar5 + -0x10 + lVar11);
      if (lVar3 != 0) {
        LOCK();
        puVar1 = (uint *)(lVar3 + 8);
        uVar9 = *puVar1;
        *puVar1 = *puVar1 - 1;
        UNLOCK();
        if ((uVar9 & 0x3fffffff) == 1) {
          FUN_144a54812();
        }
      }
      if ((&DAT_14cad7418)[uVar13 * 4] - iVar12 != 0) {
        memmove((void *)(lVar5 + lVar11 + -0x10),(void *)(lVar5 + lVar11),
                (longlong)((&DAT_14cad7418)[uVar13 * 4] - iVar12) << 4);
        iVar12 = (&DAT_14cad7418)[uVar13 * 4];
      }
      (&DAT_14cad7418)[uVar13 * 4] = iVar12 + -1;
      FUN_1409fd7dc(plVar10);
      *param_2 = lVar2;
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cad73e8);
      goto LAB_1409fd61b;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cad73e8);
    uVar4 = 0;
    uVar6 = 0x10;
    do {
      uVar8 = uVar4 + uVar6 >> 1;
      uVar7 = uVar8;
      if (uVar9 <= (uint)(&DAT_14a8bdfa0)[uVar8 - 1]) {
        uVar7 = uVar4;
        uVar6 = uVar8;
      }
      uVar4 = uVar7;
    } while (1 < uVar6 - uVar4);
    local_94 = (&DAT_14a8bdfa0)[uVar4];
    local_88 = 0;
    uStack_80 = 0;
    local_78 = 1;
    local_74 = 0;
    uStack_6c = 0;
    local_64 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
    local_60 = 0;
    local_5c = 0;
    local_58 = L"FGlobalDynamicMeshVertexPolicy";
    local_50 = 0;
    uStack_48 = 0;
    local_90 = 0x410400000000;
    if (*(char *)(param_3 + 0x69) == '\0') {
      FUN_14002049c(param_3,CONCAT71((uint7)(uint3)(local_64 >> 8),1));
      local_a0 = &local_88;
      local_a8 = 0x78;
      (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,param_2,param_3,&local_94);
      *(undefined4 *)(*param_2 + 0x18) = 0x78;
      FUN_14002049c(param_3,0);
    }
    else {
      local_a0 = &local_88;
      local_a8 = 0x78;
      (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,param_2,param_3,&local_94);
      *(undefined4 *)(*param_2 + 0x18) = 0x78;
    }
  }
  if ((local_38 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1409fd7dc FUN_1409fd7dc body=137 status=ok
// SIG undefined FUN_1409fd7dc(void)

void FUN_1409fd7dc(longlong param_1)

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



// FUNCTION 1409fd866 FUN_1409fd866 body=120 status=ok
// SIG undefined FUN_1409fd866(void)

void FUN_1409fd866(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  
  FUN_1409fd8de();
  plVar2 = *(longlong **)(param_1 + 0x20);
  if ((((plVar2 != (longlong *)0x0) && (*(int *)(param_1 + 0x1c) != 0)) &&
      (uVar1 = *(uint *)(param_1 + 0x18), -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    if (((lVar3 != 0) && (*(int *)(lVar3 + 0x10) == *(int *)(param_1 + 0x1c))) &&
       ((*(uint *)(lVar3 + 8) & 0x10200000) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x0001409fd8d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x18))(plVar2,param_2);
      return;
    }
  }
  return;
}



// FUNCTION 1409fd8de FUN_1409fd8de body=691 status=ok
// SIG undefined FUN_1409fd8de(void)

void FUN_1409fd8de(longlong param_1,longlong *param_2)

{
  uint uVar1;
  char cVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
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
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_1407d545c();
  FUN_1409fdb92(param_1,param_2);
  if ((((*(longlong **)(param_1 + 0x20) == (longlong *)0x0) || (*(int *)(param_1 + 0x1c) == 0)) ||
      (uVar1 = *(uint *)(param_1 + 0x18), (int)uVar1 < 0)) || (DAT_14c9647dc <= (int)uVar1))
  goto LAB_1409fda5b;
  lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
  if (((lVar5 == 0) || (*(int *)(lVar5 + 0x10) != *(int *)(param_1 + 0x1c))) ||
     ((*(uint *)(lVar5 + 8) & 0x10200000) != 0)) goto LAB_1409fda5b;
  plVar3 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x20) + 0x30))();
  if (plVar3 == (longlong *)0x0) goto LAB_1409fda5b;
  if (DAT_14caf64b8 == 0) {
    local_40 = &local_20;
    local_20 = FUN_141030f22;
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
  }
  if ((*(int *)(plVar3[2] + 0x38) < *(int *)(DAT_14caf64b8 + 0x38)) ||
     (*(longlong *)(*(longlong *)(plVar3[2] + 0x30) + (longlong)*(int *)(DAT_14caf64b8 + 0x38) * 8)
      != DAT_14caf64b8 + 0x30)) goto LAB_1409fda5b;
  lVar5 = *plVar3;
  if (*(code **)(lVar5 + 0x5e8) == FUN_140972dde) {
    if (plVar3[0x76] == 0) {
      if (*(code **)(lVar5 + 0x5f8) == FUN_144784df4) {
        if (*(code **)(plVar3[0x784] + 0x18) == (code *)&LAB_144904684) {
          if (((((*(int *)((longlong)plVar3 + 0x75b4) == 0) ||
                (uVar1 = *(uint *)(plVar3 + 0xeb6), (int)uVar1 < 0)) ||
               (DAT_14c9647dc <= (int)uVar1)) ||
              ((plVar4 = (longlong *)
                         ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
               plVar4 == (longlong *)0x0 || ((int)plVar4[2] != *(int *)((longlong)plVar3 + 0x75b4)))
              )) || ((*(uint *)(plVar4 + 1) & 0x10200000) != 0)) goto LAB_1409fda5b;
          if ((*(uint *)(plVar4 + 1) & 0x10200000) == 0) {
            lVar5 = *plVar4;
          }
          else {
            lVar5 = 0;
          }
          lVar5 = lVar5 + 0x110;
        }
        else {
          lVar5 = (**(code **)(plVar3[0x784] + 0x18))(plVar3 + 0x784);
        }
        if (lVar5 == 0) goto LAB_1409fda5b;
        lVar5 = *(longlong *)(lVar5 + 0x20);
      }
      else {
        lVar5 = (**(code **)(lVar5 + 0x5f8))(plVar3);
      }
      if (lVar5 == 0) goto LAB_1409fda5b;
      lVar5 = *(longlong *)(lVar5 + 0x3b0);
      goto LAB_1409fdaa7;
    }
  }
  else {
    lVar5 = (**(code **)(lVar5 + 0x5e8))(plVar3);
LAB_1409fdaa7:
    if (lVar5 == 0) goto LAB_1409fda5b;
    lVar5 = *plVar3;
  }
  cVar2 = (**(code **)(lVar5 + 0x700))(plVar3);
  if (cVar2 != '\0') {
    *(undefined1 *)(*param_2 + 0xb0) = 7;
  }
LAB_1409fda5b:
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1409fdb92 FUN_1409fdb92 body=378 status=ok
// SIG undefined FUN_1409fdb92(void)

void FUN_1409fdb92(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  
  if ((*param_2 != 0) && ((longlong)*(int *)(param_1 + 0x3d8) != 0)) {
    plVar8 = *(longlong **)(param_1 + 0x3d0);
    lVar9 = (longlong)*(int *)(param_1 + 0x3d8) * 0x28;
    do {
      lVar6 = plVar8[1];
      if (lVar6 == 0) {
        uVar5 = FUN_1407f787c();
        lVar6 = FUN_14477b664(uVar5);
        plVar8[1] = lVar6;
      }
      lVar7 = plVar8[2];
      if (lVar7 == 0) {
        if ((lVar6 != 0) && (*plVar8 != 0)) {
          plVar3 = *(longlong **)(lVar6 + 0xb8);
          if ((plVar3 == (longlong *)0x0) ||
             (cVar4 = (**(code **)(*plVar3 + 0x108))(plVar3), cVar4 == '\0')) {
            plVar8[2] = 0;
          }
          else {
            uVar5 = (**(code **)(*plVar3 + 0x110))(plVar3);
            lVar7 = FUN_144aff482(uVar5,plVar8);
            plVar8[2] = lVar7;
            if (lVar7 != 0) {
              lVar6 = plVar8[1];
              goto LAB_1409fdbfa;
            }
          }
        }
      }
      else {
LAB_1409fdbfa:
        lVar2 = *param_2;
        uVar1 = *(undefined4 *)((longlong)plVar8 + 0x24);
        if (lVar6 == 0) {
          uVar5 = FUN_1407f787c();
          lVar6 = FUN_14477b664(uVar5);
          plVar8[1] = lVar6;
          lVar7 = plVar8[2];
          if (lVar7 == 0) {
            if (lVar6 == 0) {
              lVar7 = 0;
            }
            else {
              lVar7 = 0;
              if (*plVar8 != 0) {
                plVar3 = *(longlong **)(lVar6 + 0xb8);
                if ((plVar3 == (longlong *)0x0) ||
                   (cVar4 = (**(code **)(*plVar3 + 0x108))(plVar3), cVar4 == '\0')) {
                  lVar7 = 0;
                }
                else {
                  uVar5 = (**(code **)(*plVar3 + 0x110))(plVar3);
                  lVar7 = FUN_144aff482(uVar5,plVar8);
                }
                plVar8[2] = lVar7;
              }
            }
          }
        }
        FUN_1447997cc(lVar2,lVar7,uVar1,0,0);
      }
      plVar8 = plVar8 + 5;
      lVar9 = lVar9 + -0x28;
    } while (lVar9 != 0);
  }
  return;
}



// FUNCTION 1409fdd1a FUN_1409fdd1a body=38 status=ok
// SIG undefined FUN_1409fdd1a(void)

undefined8 FUN_1409fdd1a(undefined8 param_1,int param_2)

{
  FUN_1409fdd40();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1409fdd40 FUN_1409fdd40 body=309 status=ok
// SIG undefined FUN_1409fdd40(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1409fdd40(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14b30c7c0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  if (param_1[0x24] != 0) {
    FUN_1400020a8();
  }
  FUN_14040be3e(param_1[0x21],*(undefined4 *)(param_1 + 0x22));
  if (param_1[0x21] != 0) {
    FUN_1400020a8();
  }
  FUN_140c1db57(param_1[0x1f],*(undefined4 *)(param_1 + 0x20));
  if (param_1[0x1f] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x1e) = 0;
  if (param_1[0x1d] != 0) {
    FUN_1400020a8();
  }
  FUN_140bf9710(param_1 + 0x15);
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[7] != 0) {
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
                    /* WARNING: Could not recover jumptable at 0x0001409fde67. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    return;
  }
  return;
}



// FUNCTION 1409fde75 FUN_1409fde75 body=49 status=ok
// SIG undefined FUN_1409fde75(void)

longlong FUN_1409fde75(void)

{
  if (DAT_14cb20ef0 == 0) {
    FUN_140f50038(&DAT_14cb20ef0,&PTR_s__Script_GbxAI_14ac2d1f0);
  }
  return DAT_14cb20ef0;
}



// FUNCTION 1409fdea6 FUN_1409fdea6 body=500 status=ok
// SIG undefined FUN_1409fdea6(void)

undefined8 FUN_1409fdea6(longlong param_1,undefined8 param_2)

{
  float fVar1;
  byte bVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  byte bVar6;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined2 *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  undefined8 *local_70;
  undefined1 *local_68;
  code *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined1 local_40;
  undefined4 local_3c;
  undefined1 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  plVar3 = (longlong *)FUN_1408a1fe2(param_1 + -0x3090);
  if (plVar3 != (longlong *)0x0) {
    lVar4 = (**(code **)(*plVar3 + 0x5d8))(plVar3);
    if (lVar4 != 0) {
      if (DAT_14cbadd90 == 0) {
        local_70 = &local_58;
        local_58 = FUN_141030f22;
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
      if ((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) {
        lVar5 = FUN_1405c673d();
        if (0 < *(int *)(lVar5 + 0x30)) {
          local_58 = (code *)0x0;
          uStack_50 = 0;
          local_48 = 0x3f800000;
          local_40 = 1;
          bVar6 = (char)*(int *)(lVar5 + 0x30) - 1;
          local_44 = (int)param_2;
          local_3c = (int)param_2;
          bVar2 = FUN_1409fe09c(lVar4);
          if (bVar2 < bVar6) {
            bVar6 = bVar2;
          }
          fVar1 = *(float *)(*(longlong *)(lVar5 + 0x28) + 0x164 + (ulonglong)bVar6 * 0x170);
          if ((fVar1 != 0.0) || (NAN(fVar1))) {
            local_38 = 1;
            if (0.0 < fVar1) {
              local_58 = (code *)CONCAT44(local_58._4_4_,fVar1);
            }
            else {
              local_58 = (code *)CONCAT44(fVar1,(undefined4)local_58);
            }
            param_2 = FUN_142b2fc60(&local_58);
          }
        }
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1409fe09c FUN_1409fe09c body=311 status=ok
// SIG undefined FUN_1409fe09c(void)

ulonglong FUN_1409fe09c(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 unaff_RBX;
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
  code *local_30;
  code *local_20;
  ulonglong local_18;
  undefined7 uVar4;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar2 = *(longlong *)(param_1 + 0x398);
  uVar4 = (undefined7)((ulonglong)unaff_RBX >> 8);
  uVar3 = CONCAT71(uVar4,0xff);
  if (lVar2 != 0) {
    if (DAT_14cbae3d8 == 0) {
      local_40 = &local_20;
      local_20 = FUN_141030f22;
      local_30 = FUN_14081d0ea;
      local_38 = &LAB_1464f5fc4;
      local_48 = &LAB_148c3dd26;
      local_50 = &LAB_1459673ba;
      local_58 = L"Engine";
      local_60 = 0;
      local_68 = 0x10000004;
      local_70 = 0x10;
      local_78 = 0x1360;
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerState",&DAT_14cbae3d8,FUN_1465eb604);
      lVar2 = *(longlong *)(param_1 + 0x398);
      if (lVar2 == 0) goto LAB_1409fe100;
    }
    if ((((DAT_14cbae3d8 != 0) && (lVar1 = *(longlong *)(lVar2 + 0x10), lVar1 != 0)) &&
        (*(int *)(DAT_14cbae3d8 + 0x38) <= *(int *)(lVar1 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(DAT_14cbae3d8 + 0x38) * 8) ==
        DAT_14cbae3d8 + 0x30)) {
      uVar3 = CONCAT71(uVar4,*(undefined1 *)(lVar2 + 0x711));
    }
  }
LAB_1409fe100:
  if ((local_18 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 1409fe1da FUN_1409fe1da body=57 status=ok
// SIG undefined FUN_1409fe1da(void)

void FUN_1409fe1da(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb23838 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb23838 = FUN_140002ddd(FUN_14643f7e2,uVar1,L"GpsTest_Trace");
  }
  return;
}



// FUNCTION 1409fe214 caseD_5c body=138 status=ok
// SIG undefined caseD_5c(void)

void switchD_143c3d4dc::caseD_5c
               (longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  if (param_2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(param_2 + 0xa8);
  }
  plVar2 = (longlong *)FUN_1409fe326(uVar3);
  if (plVar2 != (longlong *)0x0) {
    uVar3 = FUN_1409fe29e(param_1);
    (**(code **)(*plVar2 + 0x10))(plVar2,uVar3,0,0);
  }
  lVar1 = param_1[6];
  param_1[6] = param_2;
  (**(code **)(*param_1 + 0x2b8))(param_1,param_2,param_3);
  FUN_1407a53c4(param_1,param_2,param_3,param_4);
  param_1[6] = lVar1;
  return;
}



// FUNCTION 1409fe29e FUN_1409fe29e body=136 status=ok
// SIG undefined FUN_1409fe29e(void)

void FUN_1409fe29e(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  lVar4 = *(longlong *)(param_1 + 0x40);
  if (lVar4 == 0) {
    uVar3 = FUN_1409ff8bc();
    lVar4 = FUN_14477b664(uVar3);
    *(longlong *)(param_1 + 0x40) = lVar4;
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    return;
  }
  if (lVar4 == 0) {
    return;
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    plVar1 = *(longlong **)(lVar4 + 0xb8);
    if ((plVar1 == (longlong *)0x0) ||
       (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
      uVar3 = 0;
    }
    else {
      uVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
      uVar3 = FUN_144aff482(uVar3,(longlong *)(param_1 + 0x38));
    }
    *(undefined8 *)(param_1 + 0x48) = uVar3;
    return;
  }
  return;
}



// FUNCTION 1409fe326 FUN_1409fe326 body=807 status=ok
// SIG undefined FUN_1409fe326(void)

longlong FUN_1409fe326(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
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
  if (param_1 == (longlong *)0x0) {
LAB_1409fe437:
    lVar2 = 0;
  }
  else {
    do {
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
      lVar2 = param_1[2];
      iVar1 = *(int *)(lVar2 + 0x38);
      if ((*(int *)(DAT_14c951858 + 0x38) <= iVar1) &&
         (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(DAT_14c951858 + 0x38) * 8)
          == DAT_14c951858 + 0x30)) goto LAB_1409fe437;
      if (DAT_14cb61cd0 == 0) {
        local_40 = &local_20;
        local_20 = FUN_141030f22;
        local_30 = FUN_14081d0ea;
        local_38 = (code *)&LAB_1463b31ae;
        local_48 = &LAB_1486dca4f;
        local_50 = (code *)&LAB_1464f50a6;
        local_58 = L"Game";
        local_60 = 0;
        local_68 = 0x10000004;
        local_70 = 8;
        local_78 = 0xd70;
        FUN_14081cfa3(L"/Script/GbxGame",L"GbxPlayerController",&DAT_14cb61cd0,FUN_1464f5084);
        lVar2 = param_1[2];
        iVar1 = *(int *)(lVar2 + 0x38);
      }
      if ((iVar1 < *(int *)(DAT_14cb61cd0 + 0x38)) ||
         (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(DAT_14cb61cd0 + 0x38) * 8)
          != DAT_14cb61cd0 + 0x30)) {
        if (DAT_14cac9ca8 == 0) {
          local_40 = &local_20;
          local_20 = FUN_141030f22;
          local_30 = FUN_14081d0ea;
          local_38 = FUN_14081d0ea;
          local_48 = &LAB_1478c0a72;
          local_50 = (code *)&LAB_1417b2375;
          local_58 = L"Engine";
          local_60 = 0x1000000000;
          local_68 = 0x10000004;
          local_70 = 8;
          local_78 = 0x390;
          FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
          lVar2 = param_1[2];
          iVar1 = *(int *)(lVar2 + 0x38);
        }
        if ((*(int *)(DAT_14cac9ca8 + 0x38) <= iVar1) &&
           (plVar5 = param_1,
           *(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8)
           == DAT_14cac9ca8 + 0x30)) goto LAB_1409fe3d4;
        uVar3 = FUN_1409fe6da();
        lVar4 = (**(code **)(*param_1 + 0x288))(param_1,uVar3);
        if (lVar4 == 0) {
LAB_1409fe433:
          lVar2 = 0;
        }
        else {
          uVar3 = FUN_1409fe6da();
          lVar2 = FUN_144718840(lVar4,uVar3);
          if (lVar4 == lVar2) goto LAB_1409fe433;
        }
      }
      else {
        plVar5 = (longlong *)param_1[0x141];
LAB_1409fe3d4:
        lVar2 = FUN_1409fe64e(plVar5);
      }
      param_1 = (longlong *)param_1[4];
    } while (lVar2 == 0 && param_1 != (longlong *)0x0);
  }
  if ((local_18 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar2;
}



// FUNCTION 1409fe64e FUN_1409fe64e body=139 status=ok
// SIG undefined FUN_1409fe64e(void)

longlong FUN_1409fe64e(longlong *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if (param_1 != (longlong *)0x0) {
    uVar1 = FUN_1409fe6da();
    lVar2 = (**(code **)(*param_1 + 0x288))(param_1,uVar1);
    if (lVar2 != 0) {
      uVar1 = FUN_1409fe6da();
      lVar4 = FUN_144718840(lVar2,uVar1);
      if (lVar2 != lVar4) goto LAB_1409fe678;
    }
  }
  lVar4 = 0;
LAB_1409fe678:
  if ((param_1 != (longlong *)0x0) && (lVar4 == 0)) {
    plVar3 = (longlong *)FUN_1409fe7c0(param_1);
    if ((plVar3 != (longlong *)0x0) && (lVar2 = (**(code **)(*plVar3 + 8))(plVar3), lVar2 != 0)) {
      uVar1 = FUN_1409fe6da();
      lVar2 = FUN_144718840(lVar2,uVar1);
      return lVar2;
    }
    lVar4 = 0;
  }
  return lVar4;
}



// FUNCTION 1409fe6da FUN_1409fe6da body=228 status=ok
// SIG undefined FUN_1409fe6da(void)

longlong FUN_1409fe6da(void)

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
  if (DAT_14cb55bd0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_148629d3f;
    local_40 = FUN_1464b4b87;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/GbxGame",L"CharacterSoundInterface",&DAT_14cb55bd0,&DAT_148629d3e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb55bd0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1409fe7c0 FUN_1409fe7c0 body=126 status=ok
// SIG undefined FUN_1409fe7c0(void)

undefined8 FUN_1409fe7c0(undefined8 param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_1409fe6da();
  if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_18);
  }
  lVar1 = FUN_144881120(param_1,&local_18);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_1409fe6da();
    uVar2 = FUN_144718840(lVar1,uVar2);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1409fe840 FUN_1409fe840 body=4218 status=ok
// SIG undefined FUN_1409fe840(void)

undefined8 FUN_1409fe840(longlong param_1,ulonglong param_2,undefined8 *param_3,float *param_4)

{
  int *piVar1;
  code *pcVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  ulonglong *puVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  longlong *plVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  uint uVar16;
  longlong *plVar17;
  undefined **ppuVar18;
  uint uVar19;
  int iVar20;
  ulonglong *puVar21;
  ulonglong uVar22;
  uint uVar23;
  longlong lVar24;
  bool bVar25;
  float fVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined1 auStack_158 [32];
  undefined8 local_138;
  undefined8 *local_130;
  undefined8 local_128;
  ulonglong local_120;
  longlong local_118;
  longlong *local_110;
  longlong *local_108;
  longlong local_100;
  undefined8 *local_f8;
  longlong *local_f0;
  ulonglong *local_e8;
  longlong *local_e0;
  undefined1 local_d8 [16];
  undefined8 local_c8;
  undefined8 uStack_c0;
  longlong *local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  ulonglong auStack_a0 [3];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined2 local_60;
  undefined8 local_5c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  if (param_2 != 0) {
    if (param_4 != (float *)0x0) {
      *param_4 = 0.0;
    }
    lVar14 = param_1 + -0x110;
    if ((((0.0 <= *(float *)(param_2 + 0x24)) && (0.0 < *(float *)(param_2 + 0x28))) &&
        (*(float *)(param_2 + 0x24) <= *(float *)(param_2 + 0x28))) &&
       (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c))) {
      uVar7 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
      uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
      lVar12 = param_1 + 0x40;
      if (*(longlong *)(param_1 + 0x48) != 0) {
        lVar12 = *(longlong *)(param_1 + 0x48);
      }
      iVar8 = *(int *)(lVar12 + (ulonglong)(*(int *)(param_1 + 0x50) - 1U & (uVar7 >> 0x10 ^ uVar7))
                                * 4);
      if (iVar8 != -1) {
        do {
          lVar12 = *(longlong *)(param_1 + 8) + (longlong)iVar8 * 0x38;
          if (*(ulonglong *)(*(longlong *)(param_1 + 8) + (longlong)iVar8 * 0x38) == param_2) {
            if ((lVar12 != 0) && (lVar12 != -8)) {
              if (*(float *)(lVar12 + 0xc) <= *(float *)(lVar12 + 8) &&
                  *(float *)(lVar12 + 8) != *(float *)(lVar12 + 0xc)) goto LAB_1409fee89;
              lVar11 = *(longlong *)(param_1 + -0x60);
              if (lVar11 == 0) {
                lVar11 = FUN_1448abda6(lVar14);
                uVar27 = 0;
                uVar28 = 0;
                if (lVar11 != 0) goto LAB_1409fe94d;
              }
              else {
LAB_1409fe94d:
                uVar27 = (undefined4)*(undefined8 *)(lVar11 + 0x6e8);
                uVar28 = (undefined4)((ulonglong)*(undefined8 *)(lVar11 + 0x6e8) >> 0x20);
              }
              fVar26 = (float)((double)CONCAT44(uVar28,uVar27) - (double)*(float *)(lVar12 + 0xc));
              if (param_4 != (float *)0x0) {
                *param_4 = *(float *)(lVar12 + 0x10) - fVar26;
              }
              if (fVar26 <= *(float *)(lVar12 + 0x10)) goto LAB_1409fee89;
            }
            break;
          }
          iVar8 = *(int *)(lVar12 + 0x30);
        } while (iVar8 != -1);
      }
    }
    if (*(char *)(param_2 + 0x18) == '\x01') {
      if ((((*(char *)(param_2 + 0x19) != '\x01') ||
           (((*(int *)(param_1 + 0x84) == 0 && *(int *)(param_1 + 0x80) == 0) &&
            *(int *)(param_1 + 0x88) == 0) && *(int *)(param_1 + 0x8c) == 0)) ||
          ((cVar6 = FUN_144904448(param_1 + 0x90), cVar6 == '\0' ||
           (*(char *)(param_1 + 0x108) == '\0')))) &&
         (cVar6 = FUN_14072d710(*(undefined8 *)(param_1 + 0x58),*(char *)(param_2 + 0x19) == '\x02')
         , cVar6 != '\0')) {
        local_c8 = (longlong *)((ulonglong)local_c8 & 0xffffffffffffff00);
        cVar6 = FUN_14072d3a6(*(undefined8 *)(param_1 + 0x58));
        if (((cVar6 == '\0') ||
            (((char)local_c8 == '\x01' && (*(char *)(param_2 + 0x20) == '\x01')))) &&
           ((cVar6 = FUN_144904448(param_1 + 0x68), cVar6 == '\0' ||
            ((*(char *)(param_2 + 0x20) == '\x01' &&
             ((*(longlong *)(param_1 + 0x60) == 0 ||
              (*(char *)(*(longlong *)(param_1 + 0x60) + 0x21) == '\0')))))))) goto LAB_1409fe9d1;
      }
    }
    else {
LAB_1409fe9d1:
      if (((1.0 < *(float *)(param_2 + 0x1c) || *(float *)(param_2 + 0x1c) == 1.0) ||
          (uVar7 = rand(), fVar26 = (float)(uVar7 & 0x7fff) / 32767.0,
          fVar26 < *(float *)(param_2 + 0x1c) || fVar26 == *(float *)(param_2 + 0x1c))) &&
         (local_120 = param_2, local_f8 = param_3, plVar9 = (longlong *)FUN_14072d4de(lVar14),
         plVar9 != (longlong *)0x0)) {
        uVar10 = FUN_1409ff8bc();
        FUN_14477b664(uVar10);
        lVar11 = FUN_1409ff8bc();
        uVar10 = FUN_1409ff8bc();
        FUN_1402d1bfa(&local_c8,uVar10,local_120);
        local_110 = local_c8;
        lVar12 = FUN_1409ff8bc();
        if (lVar11 == 0) {
LAB_1409fea88:
          lVar12 = lVar11;
        }
        else if (lVar12 == 0) {
          lVar12 = 0;
        }
        else if ((*(int *)(lVar12 + 0x38) <= *(int *)(lVar11 + 0x38)) &&
                (*(longlong *)(*(longlong *)(lVar11 + 0x30) + (longlong)*(int *)(lVar12 + 0x38) * 8)
                 == lVar12 + 0x30)) goto LAB_1409fea88;
        local_100 = lVar14;
        uVar10 = FUN_14477b664(lVar12);
        lVar12 = FUN_14477b664(uVar10);
        lVar14 = lVar12;
        if (((local_110 == (longlong *)0x0) || (lVar12 == 0)) && (lVar12 == 0)) {
          lVar14 = FUN_1409ff8bc(0);
        }
        uVar13 = FUN_14477b664(lVar14);
        if ((int)plVar9[4] != *(int *)((longlong)plVar9 + 0x4c)) {
          uVar7 = ((uint)(uVar13 >> 0x14) & 0xffff ^ (uint)(uVar13 >> 4)) * -0x7a143595;
          uVar16 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
          uVar16 = uVar16 >> 0x10 ^ uVar16;
          uVar19 = (uint)local_110 & 0xffff;
          uVar7 = (uint)((ulonglong)local_110 >> 0x10);
          uVar7 = uVar16 >> 0xd ^
                  ((int)((ulonglong)local_110 >> 0x20) + ((uint)local_110 << 0x10 | uVar19) +
                   (uVar7 << 0x13 | uVar7 & 0xffff) + (uVar19 >> 4)) - uVar16;
          uVar19 = uVar7 << 8 ^ (-0x61c88647 - uVar16) - uVar7;
          uVar23 = uVar19 >> 0xd ^ (uVar16 - uVar7) - uVar19;
          uVar7 = uVar23 >> 0xc ^ (uVar7 - uVar19) - uVar23;
          uVar16 = uVar7 << 0x10 ^ (uVar19 - uVar23) - uVar7;
          uVar19 = uVar16 >> 5 ^ (uVar23 - uVar7) - uVar16;
          uVar23 = uVar19 >> 3 ^ (uVar7 - uVar16) - uVar19;
          uVar7 = uVar23 << 10 ^ (uVar16 - uVar19) - uVar23;
          plVar17 = plVar9 + 10;
          if ((longlong *)plVar9[0xb] != (longlong *)0x0) {
            plVar17 = (longlong *)plVar9[0xb];
          }
          iVar8 = *(int *)((longlong)plVar17 +
                          (ulonglong)
                          ((int)plVar9[0xc] - 1U & (uVar7 >> 0xf ^ uVar19 - (uVar23 + uVar7))) * 4);
          if (iVar8 != -1) {
            lVar14 = plVar9[3];
            local_118 = param_1;
            local_108 = plVar9;
            do {
              lVar11 = (longlong)iVar8 * 0x60;
              plVar9 = (longlong *)(lVar14 + lVar11);
              if (*(longlong *)(lVar14 + 8 + lVar11) == 0) {
                uVar10 = FUN_1409ff8bc();
                lVar14 = FUN_14477b664(uVar10);
                plVar9[1] = lVar14;
              }
              lVar14 = lVar12;
              if (lVar12 == 0) {
                lVar14 = FUN_1409ff8bc(0);
              }
              lVar14 = FUN_14477b664(lVar14);
              iVar8 = 0;
              if ((lVar14 != 0) &&
                 (plVar17 = *(longlong **)(lVar14 + 0xb8), plVar17 != (longlong *)0x0)) {
                lVar24 = *plVar17;
                pcVar2 = *(code **)(lVar24 + 0x108);
                if (pcVar2 != (code *)&LAB_14478342e && pcVar2 != (code *)&LAB_144783422) {
                  cVar6 = (*pcVar2)(plVar17);
                  iVar8 = 0;
                  if (cVar6 == '\0') goto LAB_1409fec72;
                  lVar24 = *plVar17;
                }
                pcVar2 = *(code **)(lVar24 + 0x110);
                ppuVar18 = &PTR_PTR_14c763408;
                if ((pcVar2 != (code *)&LAB_144783426) &&
                   (ppuVar18 = &PTR_PTR_14c75f798, pcVar2 != (code *)&LAB_144783432)) {
                  ppuVar18 = (undefined **)(*pcVar2)(plVar17);
                }
                iVar8 = FUN_144aff48c(ppuVar18);
              }
LAB_1409fec72:
              plVar17 = (longlong *)*plVar9;
              lVar24 = plVar9[1];
              uVar13 = 0;
              if ((lVar24 != 0) &&
                 (plVar9 = *(longlong **)(lVar24 + 0xb8), plVar9 != (longlong *)0x0)) {
                lVar15 = *plVar9;
                pcVar2 = *(code **)(lVar15 + 0x108);
                if (pcVar2 != (code *)&LAB_14478342e && pcVar2 != (code *)&LAB_144783422) {
                  cVar6 = (*pcVar2)(plVar9);
                  uVar13 = 0;
                  if (cVar6 == '\0') goto LAB_1409fecd9;
                  lVar15 = *plVar9;
                }
                pcVar2 = *(code **)(lVar15 + 0x110);
                ppuVar18 = &PTR_PTR_14c763408;
                if ((pcVar2 != (code *)&LAB_144783426) &&
                   (ppuVar18 = &PTR_PTR_14c75f798, pcVar2 != (code *)&LAB_144783432)) {
                  ppuVar18 = (undefined **)(*pcVar2)(plVar9);
                }
                uVar7 = FUN_144aff48c(ppuVar18);
                uVar13 = (ulonglong)uVar7;
              }
LAB_1409fecd9:
              lVar15 = local_118;
              if (((int)uVar13 == iVar8) && (plVar17 == local_110)) {
                if (lVar24 == lVar14) {
LAB_1409fed81:
                  lVar14 = local_108[3];
                  lVar12 = lVar14 + lVar11;
                  if (lVar12 != 0) {
                    local_c8 = (longlong *)((ulonglong)local_c8 & 0xffffffffffffff00);
                    auStack_a0[0] = auStack_a0[0] & 0xffffffff00000000;
                    FUN_1456bb102(&local_c8,*(undefined8 *)(local_118 + -0xf0));
                    if ((char)local_c8 == '\x01') {
                      if (uStack_c0 == (ulonglong *)0x0) goto LAB_1409fef1c;
                    }
                    else if ((char)local_c8 == '\x02') {
                      if ((((uStack_c0._4_4_ == 0) || ((int)(uint)uStack_c0 < 0)) ||
                          (DAT_14c9647dc <= (int)(uint)uStack_c0)) ||
                         (((lVar24 = (ulonglong)(((uint)uStack_c0 & 0xffff) * 0x18) +
                                     *(longlong *)
                                      (DAT_14c9647c8 + (ulonglong)((uint)uStack_c0 >> 0x10) * 8),
                           lVar24 == 0 || (*(int *)(lVar24 + 0x10) != uStack_c0._4_4_)) ||
                          ((*(uint *)(lVar24 + 8) & 0x10200000) != 0)))) goto LAB_1409fef1c;
                    }
                    else if ((((char)local_c8 != '\x03') || (uStack_c0 == (ulonglong *)0x0)) ||
                            ((local_b8 == (longlong *)0x0 || ((int)local_b8[1] < 1))))
                    goto LAB_1409fef1c;
                    if ((longlong)*(int *)(lVar12 + 0x50) == 0) goto LAB_1409fef1c;
                    lVar24 = *(longlong *)(lVar12 + 0x48) + 0x18;
                    lVar12 = (longlong)*(int *)(lVar12 + 0x50) * 0x48;
                    goto LAB_1409ff4f6;
                  }
                  break;
                }
                if ((lVar14 != 0) && (lVar24 != 0)) {
                  iVar8 = *(int *)(lVar14 + 0x38);
                  iVar20 = *(int *)(lVar24 + 0x38);
                  if (((iVar8 <= iVar20) &&
                      (*(longlong *)(*(longlong *)(lVar24 + 0x30) + (longlong)iVar8 * 8) ==
                       lVar14 + 0x30)) ||
                     ((iVar20 <= iVar8 &&
                      (*(longlong *)(*(longlong *)(lVar14 + 0x30) + (longlong)iVar20 * 8) ==
                       lVar24 + 0x30)))) goto LAB_1409fed81;
                }
              }
              lVar14 = local_108[3];
              iVar8 = *(int *)(lVar14 + 0x58 + lVar11);
            } while (iVar8 != -1);
          }
        }
      }
    }
  }
  goto LAB_1409fee89;
  while( true ) {
    lVar24 = lVar24 + 0x48;
    lVar12 = lVar12 + -0x48;
    if (lVar12 == 0) break;
LAB_1409ff4f6:
    plVar9 = *(longlong **)(lVar24 + -0x18);
    if ((plVar9 != (longlong *)0x0) &&
       (cVar6 = (**(code **)(*plVar9 + 0x90))(plVar9,0,&local_c8), cVar6 != '\0')) {
      if (lVar24 != 0) goto LAB_1409fef24;
      break;
    }
  }
LAB_1409fef1c:
  lVar24 = lVar14 + lVar11 + 0x18;
LAB_1409fef24:
  FUN_1448173f8(auStack_a0);
  if (((char)local_c8 == '\x03') && (local_b8 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_b8 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_b8 + 0x10))();
    }
  }
  lVar14 = *(longlong *)(lVar15 + -0x68);
  if (lVar14 != 0) {
    lVar12 = *(longlong *)(lVar14 + 0x1c8);
    if (lVar12 == 0) {
      local_b8 = DAT_14c8464f0;
      local_c8 = (longlong *)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
      uStack_c0 = (ulonglong *)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
    }
    else {
      local_c8 = *(longlong **)(lVar12 + 0x260);
      uStack_c0 = *(ulonglong **)(lVar12 + 0x268);
      local_b8 = *(longlong **)(lVar12 + 0x270);
    }
    lVar12 = *(longlong *)(lVar15 + -0x60);
    if (lVar12 == 0) {
      lVar12 = FUN_1448abda6(local_100);
    }
    FUN_14026e798(local_d8,lVar14);
    uVar10 = FUN_140206ee8(lVar24,local_d8);
    cVar6 = FUN_140849a6e(uVar10,lVar12,&local_c8);
    uVar22 = local_120;
    if (cVar6 != '\0') {
      if (*(char *)(local_120 + 0x18) == '\0') {
        if ((*(longlong *)(local_120 + 0x2c) == 0) && (*(longlong *)(local_120 + 0x34) != 0)) {
          local_c8 = (longlong *)0x0;
          uStack_c0 = (ulonglong *)0x0;
          local_b8 = (longlong *)0x0;
          uStack_b0 = 0;
          uStack_ac = 0x3ff00000;
          local_a8 = 0;
          auStack_a0[0] = 0;
          auStack_a0[1] = 0;
          auStack_a0[2] = 0;
          local_88 = 0;
          uStack_84 = 0x3ff00000;
          uStack_80 = 0;
          uStack_7c = 0x3ff00000;
          local_78 = 0x3ff0000000000000;
          uStack_70 = 0;
          local_68 = 0x3f800000;
          local_60 = 0;
          local_5c = 0;
          local_128 = 0;
          local_138 = CONCAT71(local_138._1_7_,1);
          local_130 = &local_c8;
          FUN_140b3303c(&local_f0,lVar14,lVar24,local_120 + 0x34);
          plVar9 = local_e0;
          puVar21 = local_e8;
          lVar15 = local_118;
          plVar17 = local_f0;
        }
        else {
          local_138 = 0;
          FUN_140b32deb(&local_c8,lVar14,lVar24);
          plVar9 = local_b8;
          puVar21 = uStack_c0;
          uVar22 = local_120;
          lVar15 = local_118;
          plVar17 = local_c8;
        }
      }
      else {
        local_138 = 0;
        FUN_140b32deb(&local_c8,lVar14,lVar24,0);
        plVar17 = local_c8;
        uVar22 = local_120;
        plVar9 = local_b8;
        puVar21 = uStack_c0;
        if ((((local_b8 != (longlong *)0x0) && (local_c8 != (longlong *)0x0)) &&
            (uStack_c0 != (ulonglong *)0xffffffffffffffff)) && ((ulonglong *)*local_c8 == uStack_c0)
           ) {
          lVar14 = local_c8[0x21];
          *(int *)(local_c8 + 0x21) = (int)lVar14 + 1;
          plVar9 = local_c8 + 0x24;
          do {
            plVar3 = (longlong *)*plVar9;
            plVar9 = plVar3 + 6;
          } while (plVar3 != (longlong *)0x0 && local_b8 != plVar3);
          *(int *)(local_c8 + 0x21) = (int)lVar14;
          if (((int)local_c8[0x26] < 1) &&
             (FUN_1400847bc(local_c8 + 0x17,0), (int)plVar17[0x21] == 0)) {
            FUN_140087e46(plVar17);
            if (*plVar17 != -1) {
              uVar22 = local_120;
              lVar15 = local_118;
              if (DAT_14cb259f8 == 0) goto LAB_1409ff08f;
              FUN_14033a6c8(*(undefined8 *)(DAT_14cb259f8 + 0x40),plVar17);
            }
            lVar15 = local_118;
            uVar22 = local_120;
            if (DAT_14cb259f8 != 0) {
              FUN_14008869e(*(undefined8 *)(DAT_14cb259f8 + 0x30),plVar17);
            }
          }
LAB_1409ff08f:
          plVar9 = local_b8;
          puVar21 = uStack_c0;
          plVar17 = local_c8;
          if (plVar3 != (longlong *)0x0) {
            FUN_14072db1c(*(undefined8 *)(lVar15 + 0x58),&local_c8);
            plVar9 = (longlong *)FUN_14017698e(*(undefined8 *)(*(longlong *)(lVar15 + 0x58) + 0xa8))
            ;
            if ((plVar9 != (longlong *)0x0) &&
               (lVar14 = (**(code **)(*plVar9 + 0x10))(plVar9), lVar14 != 0)) {
              FUN_140056680(&local_f0,L"Character Sound");
              FUN_1403171d0(lVar14,0,&local_f0,0);
              if (local_f0 != (longlong *)0x0) {
                FUN_1400020a8();
              }
            }
            cVar6 = FUN_144904448(lVar15 + 0x68);
            if (cVar6 != '\0') {
              FUN_14072d42a(lVar15 + 0x68);
            }
            uVar22 = local_120;
            *(ulonglong *)(lVar15 + 0x60) = local_120;
            *(longlong **)(lVar15 + 0x68) = local_c8;
            *(ulonglong **)(lVar15 + 0x70) = uStack_c0;
            *(longlong **)(lVar15 + 0x78) = local_b8;
            FUN_14072d42a(lVar15 + 0x90);
            *(undefined8 *)(lVar15 + 0x80) = 0;
            *(undefined8 *)(lVar15 + 0x88) = 0;
            plVar9 = local_b8;
            puVar21 = uStack_c0;
            plVar17 = local_c8;
          }
        }
      }
      if (local_f8 != (undefined8 *)0x0) {
        *local_f8 = plVar17;
        local_f8[1] = puVar21;
        local_f8[2] = plVar9;
      }
      uVar10 = CONCAT71((int7)(uVar13 >> 8),1);
      if (((*(float *)(uVar22 + 0x24) < 0.0) || (*(float *)(uVar22 + 0x28) <= 0.0)) ||
         (*(float *)(uVar22 + 0x28) < *(float *)(uVar22 + 0x24))) goto LAB_1409fee8b;
      if ((puVar21 != (ulonglong *)0xffffffffffffffff && plVar17 != (longlong *)0x0) &&
         ((ulonglong *)*plVar17 == puVar21)) {
        *(int *)(plVar17 + 0x21) = (int)plVar17[0x21] + 1;
        if ((int)plVar17[5] != 3) {
          FUN_1446efa72(plVar17 + 4,0,3,0x10);
          *(undefined4 *)(plVar17 + 5) = 3;
        }
        puVar4 = (undefined8 *)plVar17[4];
        *puVar4 = &PTR_LAB_14b3ef040;
        puVar4[1] = local_120;
        LOCK();
        UNLOCK();
        lVar12 = DAT_14c758608 + 1;
        lVar14 = DAT_14c758608 + 1;
        if (lVar12 == 0) {
          LOCK();
          UNLOCK();
          lVar12 = DAT_14c758608 + 2;
          lVar14 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar14;
        puVar4[2] = lVar12;
        *puVar4 = &PTR_FUN_14b3eefd0;
        puVar4[3] = 0;
        if (local_100 == 0) {
          iVar8 = 0;
        }
        else {
          uVar7 = *(uint *)(lVar15 + -0x104);
          *(uint *)(puVar4 + 3) = uVar7;
          if ((int)uVar7 < DAT_14c9647dc) {
            lVar14 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8);
          }
          else {
            lVar14 = 0;
          }
          iVar8 = *(int *)(lVar14 + 0x10);
          if (*(int *)(lVar14 + 0x10) == 0) {
            LOCK();
            iVar8 = DAT_14c964868 + 1;
            UNLOCK();
            iVar20 = DAT_14c964868 + 1;
            bVar25 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar8;
            if (bVar25) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,iVar20);
            }
            LOCK();
            iVar8 = *(int *)(lVar14 + 0x10);
            bVar25 = iVar8 == 0;
            if (bVar25) {
              *(int *)(lVar14 + 0x10) = iVar20;
              iVar8 = 0;
            }
            UNLOCK();
            if (bVar25) {
              iVar8 = iVar20;
            }
          }
        }
        uVar22 = local_120;
        *(int *)((longlong)puVar4 + 0x1c) = iVar8;
        puVar4[4] = FUN_1408dd55c;
        *(undefined4 *)(puVar4 + 5) = 0;
        *(int *)(plVar17 + 0x21) = (int)plVar17[0x21] + -1;
        if (((int)plVar17[0x26] < 1) && (FUN_1400847bc(plVar17 + 0x17,0), (int)plVar17[0x21] == 0))
        {
          FUN_140087e46(plVar17);
          if (*plVar17 != -1) {
            uVar22 = local_120;
            lVar15 = local_118;
            if (DAT_14cb259f8 == 0) goto LAB_1409ff2da;
            FUN_14033a6c8(*(undefined8 *)(DAT_14cb259f8 + 0x40),plVar17);
          }
          lVar15 = local_118;
          uVar22 = local_120;
          if (DAT_14cb259f8 != 0) {
            FUN_14008869e(*(undefined8 *)(DAT_14cb259f8 + 0x30),plVar17);
          }
        }
      }
LAB_1409ff2da:
      plVar3 = (longlong *)(lVar15 + 8);
      uVar7 = ((uint)(uVar22 >> 0x14) & 0xffff ^ (uint)(uVar22 >> 4)) * -0x7a143595;
      uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
      uVar7 = uVar7 >> 0x10 ^ uVar7;
      if (*(int *)(lVar15 + 0x10) != *(int *)(lVar15 + 0x3c)) {
        lVar14 = lVar15 + 0x40;
        if (*(longlong *)(lVar15 + 0x48) != 0) {
          lVar14 = *(longlong *)(lVar15 + 0x48);
        }
        iVar8 = *(int *)(lVar14 + (ulonglong)(*(int *)(lVar15 + 0x50) - 1U & uVar7) * 4);
        if (iVar8 != -1) {
          do {
            lVar14 = *plVar3 + (longlong)iVar8 * 0x38;
            if (*(ulonglong *)(*plVar3 + (longlong)iVar8 * 0x38) == local_120) {
              if (lVar14 != 0) goto LAB_1409ff435;
              break;
            }
            iVar8 = *(int *)(lVar14 + 0x30);
          } while (iVar8 != -1);
        }
      }
      local_108 = plVar9;
      FUN_1409ff99e(plVar3,&local_c8);
      puVar5 = uStack_c0;
      *uStack_c0 = local_120;
      uStack_c0[1] = 0xbf800000bf800000;
      *(undefined4 *)(uStack_c0 + 2) = 0;
      uStack_c0[3] = 0;
      uStack_c0[4] = 0xffffffffffffffff;
      uStack_c0[5] = 0;
      *(undefined4 *)(uStack_c0 + 6) = 0xffffffff;
      iVar8 = (int)local_c8;
      local_110 = (longlong *)(longlong)(int)local_c8;
      cVar6 = FUN_1409ff8f6(plVar3,uVar7,uStack_c0,&local_c8);
      if (cVar6 == '\0') {
        uVar16 = *(int *)(local_118 + 0x10) - *(int *)(local_118 + 0x3c);
        iVar20 = 1;
        if (3 < uVar16) {
          uVar13 = (ulonglong)(uVar16 & 0xfffffffe) + 0xf;
          lVar14 = 0x3f;
          if (uVar13 != 0) {
            for (; uVar13 >> lVar14 == 0; lVar14 = lVar14 + -1) {
            }
          }
          iVar20 = 1 << ((byte)lVar14 & 0x1f);
        }
        if (((int)uVar16 < 1) || (iVar20 <= *(int *)(local_118 + 0x50))) {
          uVar7 = *(int *)(local_118 + 0x50) - 1U & uVar7;
          *(uint *)((longlong)puVar5 + 0x34) = uVar7;
          lVar14 = *(longlong *)(local_118 + 0x48);
          if (*(longlong *)(local_118 + 0x48) == 0) {
            lVar14 = local_118 + 0x40;
          }
          *(undefined4 *)(puVar5 + 6) =
               *(undefined4 *)
                (lVar14 + ((longlong)*(int *)(local_118 + 0x50) - 1U & (longlong)(int)uVar7) * 4);
          lVar14 = *(longlong *)(local_118 + 0x48);
          if (*(longlong *)(local_118 + 0x48) == 0) {
            lVar14 = local_118 + 0x40;
          }
          *(int *)(lVar14 + ((longlong)*(int *)(local_118 + 0x50) - 1U & (longlong)(int)uVar7) * 4)
               = iVar8;
        }
        else {
          *(int *)(local_118 + 0x50) = iVar20;
          FUN_1409ffb76(plVar3);
        }
      }
      lVar14 = *plVar3 + (longlong)local_110 * 0x38;
      plVar9 = local_108;
      lVar15 = local_118;
LAB_1409ff435:
      lVar12 = *(longlong *)(lVar15 + -0x60);
      if (lVar12 == 0) {
        lVar12 = FUN_1448abda6(local_100);
        fVar26 = 0.0;
        if (lVar12 != 0) goto LAB_1409ff442;
      }
      else {
LAB_1409ff442:
        fVar26 = (float)*(double *)(lVar12 + 0x6e8);
      }
      *(float *)(lVar14 + 8) = fVar26;
      *(longlong **)(lVar14 + 0x18) = plVar17;
      *(ulonglong **)(lVar14 + 0x20) = puVar21;
      *(longlong **)(lVar14 + 0x28) = plVar9;
      goto LAB_1409fee8b;
    }
  }
LAB_1409fee89:
  uVar10 = 0;
LAB_1409fee8b:
  if ((local_48 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar10;
}



// FUNCTION 1409ff8bc FUN_1409ff8bc body=57 status=ok
// SIG undefined FUN_1409ff8bc(void)

void FUN_1409ff8bc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb55c38 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb55c38 = FUN_140002ddd(FUN_1464b4ac7,uVar1,L"CharacterSoundTagDef");
  }
  return;
}



// FUNCTION 1409ff8f6 FUN_1409ff8f6 body=168 status=ok
// SIG undefined FUN_1409ff8f6(void)

undefined8 FUN_1409ff8f6(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong *plVar13;
  int iVar14;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar13 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar13 = (longlong *)param_1[8];
    }
    iVar14 = *(int *)((longlong)plVar13 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar14 != -1) {
      do {
        puVar1 = (undefined4 *)(*param_1 + (longlong)iVar14 * 0x38);
        if (*(longlong *)(*param_1 + (longlong)iVar14 * 0x38) == *param_3) {
          *(undefined8 *)(puVar1 + 6) = 0;
          *(undefined8 *)(puVar1 + 8) = 0xffffffffffffffff;
          lVar8 = *param_3;
          uVar2 = *(undefined4 *)((longlong)param_3 + 4);
          lVar9 = param_3[1];
          uVar3 = *(undefined4 *)((longlong)param_3 + 0xc);
          lVar10 = param_3[2];
          uVar4 = *(undefined4 *)((longlong)param_3 + 0x14);
          lVar11 = param_3[3];
          uVar5 = *(undefined4 *)((longlong)param_3 + 0x1c);
          uVar6 = *(undefined4 *)((longlong)param_3 + 0x24);
          lVar12 = param_3[5];
          uVar7 = *(undefined4 *)((longlong)param_3 + 0x2c);
          puVar1[8] = (int)param_3[4];
          puVar1[9] = uVar6;
          puVar1[10] = (int)lVar12;
          puVar1[0xb] = uVar7;
          puVar1[4] = (int)lVar10;
          puVar1[5] = uVar4;
          puVar1[6] = (int)lVar11;
          puVar1[7] = uVar5;
          *puVar1 = (int)lVar8;
          puVar1[1] = uVar2;
          puVar1[2] = (int)lVar9;
          puVar1[3] = uVar3;
          FUN_1487dff52((int)lVar8,*param_4);
          *param_4 = iVar14;
          return 1;
        }
        iVar14 = puVar1[0xc];
      } while (iVar14 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 1409ff99e FUN_1409ff99e body=472 status=ok
// SIG undefined FUN_1409ff99e(void)

int * FUN_1409ff99e(longlong *param_1,int *param_2)

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



// FUNCTION 1409ffb76 FUN_1409ffb76 body=679 status=ok
// SIG undefined FUN_1409ffb76(void)

void FUN_1409ffb76(longlong *param_1)

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
    if ((int)uVar7 < 1) goto LAB_1409ffbda;
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
LAB_1409ffbda:
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
      uVar2 = ((uint)(*(ulonglong *)(lVar6 + lVar13) >> 0x14) & 0xffff ^
              (uint)(*(ulonglong *)(lVar6 + lVar13) >> 4)) * -0x7a143595;
      uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
      uVar15 = (longlong)(int)(uVar2 >> 0x10 ^ uVar2) & (longlong)(int)param_1[9] - 1U;
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



// FUNCTION 1409ffe1d FUN_1409ffe1d body=8 status=ok
// SIG undefined FUN_1409ffe1d(void)

undefined8 FUN_1409ffe1d(void)

{
  return DAT_14c951640;
}



// FUNCTION 1409ffec6 FUN_1409ffec6 body=1338 status=ok
// SIG undefined FUN_1409ffec6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1409ffec6(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong *plVar10;
  byte bVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  longlong lVar15;
  byte bVar16;
  bool bVar17;
  undefined1 auStack_d8 [32];
  wchar_t *local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  wchar_t *local_a0;
  wchar_t *local_98;
  code *local_90;
  undefined1 *local_88;
  code **local_80;
  code *local_78;
  code *local_70;
  longlong local_60;
  longlong *local_58;
  code *local_50;
  code *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if ((*(longlong *)(param_1 + 0x38) == 0) || (*(longlong *)(param_1 + 0x58) == 0))
  goto LAB_140a000fe;
  lVar8 = *param_2;
  uVar6 = FUN_140082ff6();
  cVar4 = FUN_1448093f4(lVar8,uVar6);
  if ((cVar4 == '\0') || (*(longlong *)(param_1 + 0x38) == 0)) goto LAB_140a000fe;
  local_60 = *param_2;
  local_58 = (longlong *)param_2[1];
  if (local_58 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_58 + 1) = (int)local_58[1] + 1;
    UNLOCK();
  }
  if ((((*(int *)(param_1 + 0x54) == 0) || (uVar12 = *(uint *)(param_1 + 0x50), (int)uVar12 < 0)) ||
      (DAT_14c9647dc <= (int)uVar12)) ||
     (((plVar10 = (longlong *)
                  ((ulonglong)((uVar12 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8)),
       plVar10 == (longlong *)0x0 || ((int)plVar10[2] != *(int *)(param_1 + 0x54))) ||
      (((*(uint *)(plVar10 + 1) & 0x10200000) != 0 || (lVar8 = *plVar10, lVar8 == 0)))))) {
    if (*(longlong *)(param_1 + 0x58) != 0) {
      lVar8 = FUN_140007850();
      cVar4 = (*(code *)PTR_FUN_14c758760)();
      lVar15 = DAT_14c9647c8;
      if ((lVar8 == 0) || (cVar4 == '\0')) {
        if (lVar8 != 0) {
          uVar12 = *(uint *)(lVar8 + 0xc);
          *(uint *)(param_1 + 0x50) = uVar12;
          if (DAT_14c9647dc <= (int)uVar12) goto LAB_140a001f8;
          lVar15 = (ulonglong)((uVar12 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8);
          goto LAB_140a001c9;
        }
        *(undefined8 *)(param_1 + 0x50) = 0;
      }
      else {
        uVar12 = *(uint *)(lVar8 + 0xc);
        if ((int)uVar12 < DAT_14c9647dc) {
          if ((*(uint *)(*(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8) + 8 +
                        (ulonglong)(uVar12 & 0xffff) * 0x18) & 0x8400000) == 0) {
            *(uint *)(param_1 + 0x50) = uVar12;
            lVar15 = (ulonglong)((uVar12 & 0xffff) * 0x18) +
                     *(longlong *)(lVar15 + (ulonglong)(uVar12 >> 0x10) * 8);
LAB_140a001c9:
            iVar5 = *(int *)(lVar15 + 0x10);
            if (*(int *)(lVar15 + 0x10) == 0) {
              LOCK();
              iVar5 = DAT_14c964868 + 1;
              UNLOCK();
              iVar13 = DAT_14c964868 + 1;
              bVar17 = DAT_14c964868 < 1000;
              DAT_14c964868 = iVar5;
              if (bVar17) {
                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                              ,iVar13);
              }
              LOCK();
              iVar5 = *(int *)(lVar15 + 0x10);
              bVar17 = iVar5 == 0;
              if (bVar17) {
                *(int *)(lVar15 + 0x10) = iVar13;
                iVar5 = 0;
              }
              UNLOCK();
              if (bVar17) {
                iVar5 = iVar13;
              }
            }
            *(int *)(param_1 + 0x54) = iVar5;
          }
        }
        else if ((_DAT_00000008 & 0x8400000) == 0) {
          *(uint *)(param_1 + 0x50) = uVar12;
LAB_140a001f8:
          lVar15 = 0;
          goto LAB_140a001c9;
        }
        if ((*(uint *)(lVar8 + 8) >> 0x1e & 1) == 0) goto LAB_1409fffab;
      }
    }
  }
  else {
LAB_1409fffab:
    if (DAT_14c949118 == 0) {
      local_50 = FUN_140631fbe;
      lVar15 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
      DAT_14c949118 = lVar15;
      FUN_1446f470e(&local_48,L"Class",1);
      local_88 = &LAB_146891e90;
      local_90 = (code *)&LAB_146273097;
      local_a0 = L"Engine";
      local_98 = (wchar_t *)CONCAT44(local_98._4_4_,199);
      local_a8 = 0x20;
      local_b0 = 0x10000000;
      local_b8 = (wchar_t *)CONCAT44(local_b8._4_4_,8);
      local_80 = &local_50;
      FUN_14574b4b2(lVar15);
      DAT_14c949118 = lVar15;
      uVar6 = FUN_144a7a812();
      lVar15 = DAT_14c949118;
      uVar9 = FUN_1449e2fb2();
      local_b8 = L"Class";
      FUN_14574b446(uVar9,lVar15,uVar6,L"/Script/CoreUObject");
    }
    if ((*(int *)(DAT_14c949118 + 0x38) <= *(int *)(*(longlong *)(lVar8 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14c949118 + 0x38) * 8) == DAT_14c949118 + 0x30)) {
      if (DAT_14cb93bd8 == 0) {
        local_80 = &local_48;
        local_48 = FUN_1449e2820;
        local_70 = FUN_14081d0ea;
        local_78 = FUN_14081d0ea;
        local_88 = &LAB_148a11b2b;
        local_90 = FUN_146573d7d;
        local_98 = L"Engine";
        local_a0 = (wchar_t *)0x0;
        local_a8 = CONCAT44(local_a8._4_4_,0x10000001);
        local_b0 = 8;
        local_b8 = (wchar_t *)CONCAT44(local_b8._4_4_,0x38);
        FUN_14081cfa3(L"/Script/GbxWeapon",L"WeaponBehavior",&DAT_14cb93bd8,&DAT_148a11b2a);
        if (DAT_14cb93bd8 == 0) goto LAB_140a000e7;
      }
      if (((*(int *)(DAT_14cb93bd8 + 0x38) <= *(int *)(lVar8 + 0x38)) &&
          (*(longlong *)(*(longlong *)(lVar8 + 0x30) + (longlong)*(int *)(DAT_14cb93bd8 + 0x38) * 8)
           == DAT_14cb93bd8 + 0x30)) && (*(byte *)(param_1 + 0x30) != 0)) {
        lVar15 = 0;
        uVar14 = 0;
        uVar12 = 0;
        bVar16 = *(byte *)(param_1 + 0x30);
        do {
          lVar3 = local_60;
          if (((bVar16 & 1) != 0) && ((int)uVar14 < *(int *)(local_60 + 0x280))) {
            lVar7 = local_60 + 0x208;
            if (*(longlong *)(local_60 + 0x278) != 0) {
              lVar7 = *(longlong *)(local_60 + 0x278);
            }
            if (*(char *)(lVar7 + lVar15) == '\x01') {
              if (*(char *)(param_1 + 0x36) == '\x01') {
                FUN_140a00402(local_60,lVar8,uVar14);
              }
              else {
                cVar4 = FUN_140a0054c(local_60,lVar8,uVar14,*(undefined1 *)(param_1 + 0x34));
                if (cVar4 != '\0') {
                  uVar12 = uVar12 | 1 << (uVar14 & 0x1f);
                  FUN_140a00472(lVar3,lVar8,uVar14);
                }
              }
            }
          }
          uVar14 = uVar14 + 1;
          lVar15 = lVar15 + 0x38;
          bVar17 = 1 < bVar16;
          bVar16 = bVar16 >> 1;
        } while (bVar17);
        if (uVar12 != 0) {
          if (*(char *)(param_1 + 0x35) == '\x01') {
            (**(code **)(**(longlong **)(param_1 + 0x38) + 0x10))
                      (*(longlong **)(param_1 + 0x38),&local_60,uVar12);
          }
          else if ((char)uVar12 != '\0') {
            bVar16 = 0;
            do {
              bVar11 = (byte)uVar12;
              if ((uVar12 & 1) != 0) {
                (**(code **)(**(longlong **)(param_1 + 0x38) + 0x10))
                          (*(longlong **)(param_1 + 0x38),&local_60,1 << (bVar16 & 0x1f));
              }
              bVar16 = bVar16 + 1;
              uVar12 = (uint)(bVar11 >> 1);
            } while (1 < bVar11);
          }
        }
      }
    }
  }
LAB_140a000e7:
  plVar10 = local_58;
  if (local_58 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_58 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_58)(local_58);
      LOCK();
      piVar2 = (int *)((longlong)plVar10 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
    }
  }
LAB_140a000fe:
  if ((local_40 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140a00402 FUN_140a00402 body=111 status=ok
// SIG undefined FUN_140a00402(void)

void FUN_140a00402(longlong param_1,undefined8 param_2,byte param_3)

{
  longlong lVar1;
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  if ((int)(uint)param_3 < *(int *)(param_1 + 0x280)) {
    lVar1 = param_1 + 0x208;
    if (*(longlong *)(param_1 + 0x278) != 0) {
      lVar1 = *(longlong *)(param_1 + 0x278);
    }
    if (*(char *)(lVar1 + (ulonglong)param_3 * 0x38) == '\x01') {
      FUN_140a004e2(lVar1 + (ulonglong)param_3 * 0x38 + 0x18,&local_10);
    }
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a00472 FUN_140a00472 body=111 status=ok
// SIG undefined FUN_140a00472(void)

void FUN_140a00472(longlong param_1,undefined8 param_2,byte param_3)

{
  longlong lVar1;
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  if ((int)(uint)param_3 < *(int *)(param_1 + 0x280)) {
    lVar1 = param_1 + 0x208;
    if (*(longlong *)(param_1 + 0x278) != 0) {
      lVar1 = *(longlong *)(param_1 + 0x278);
    }
    if (*(char *)(lVar1 + (ulonglong)param_3 * 0x38) == '\x01') {
      FUN_140a004e2(lVar1 + (ulonglong)param_3 * 0x38 + 8,&local_10);
    }
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a004e2 FUN_140a004e2 body=105 status=ok
// SIG undefined FUN_140a004e2(void)

ulonglong FUN_140a004e2(longlong *param_1,longlong *param_2)

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
          goto LAB_140a00529;
        }
        break;
      }
      uVar3 = uVar3 + 1;
      lVar5 = lVar5 + -8;
    } while (lVar5 != 0);
  }
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_140a0062e(param_1,iVar1);
    lVar2 = *param_1;
  }
  *(longlong *)(lVar2 + uVar4 * 8) = *param_2;
LAB_140a00529:
  return uVar4 & 0xffffffff;
}



// FUNCTION 140a0054c FUN_140a0054c body=226 status=ok
// SIG undefined FUN_140a0054c(void)

ulonglong FUN_140a0054c(longlong param_1,longlong param_2,byte param_3,char param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  if ((param_2 != 0) && ((int)(uint)param_3 < *(int *)(param_1 + 0x280))) {
    lVar5 = param_1 + 0x208;
    if (*(longlong *)(param_1 + 0x278) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x278);
    }
    lVar6 = (ulonglong)param_3 * 0x38;
    if (*(char *)(lVar5 + lVar6) == '\x01') {
      lVar7 = (longlong)*(int *)(lVar5 + 0x20 + lVar6);
      if (lVar7 == 0) {
        uVar3 = 0;
      }
      else {
        plVar4 = *(longlong **)(lVar5 + 0x18 + lVar6);
        lVar7 = lVar7 << 3;
        do {
          lVar1 = *plVar4;
          if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(param_2 + 0x38))) &&
             (*(longlong *)(*(longlong *)(param_2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
              lVar1 + 0x30)) goto LAB_140a00619;
          plVar4 = plVar4 + 1;
          lVar7 = lVar7 + -8;
        } while (lVar7 != 0);
        plVar4 = (longlong *)0x0;
LAB_140a00619:
        uVar3 = CONCAT71((int7)((ulonglong)lVar7 >> 8),plVar4 != (longlong *)0x0);
      }
      uVar2 = uVar3 & 0xffffffff ^ 1;
      if ((char)uVar3 != '\0') {
        return uVar2;
      }
      if (param_4 != '\0') {
        return uVar2;
      }
      lVar7 = (longlong)*(int *)(lVar5 + 0x10 + lVar6);
      uVar3 = CONCAT71((int7)((uVar3 & 0xffffffff) >> 8),1);
      if (lVar7 == 0) {
        return uVar3;
      }
      plVar4 = *(longlong **)(lVar5 + 8 + lVar6);
      lVar7 = lVar7 << 3;
      while ((*(int *)(*plVar4 + 0x38) < *(int *)(param_2 + 0x38) ||
             (*(longlong **)(*(longlong *)(*plVar4 + 0x30) + (longlong)*(int *)(param_2 + 0x38) * 8)
              != (longlong *)(param_2 + 0x30)))) {
        plVar4 = plVar4 + 1;
        lVar7 = lVar7 + -8;
        if (lVar7 == 0) {
          return uVar3;
        }
      }
      if (plVar4 == (longlong *)0x0) {
        return uVar3;
      }
    }
  }
  return 0;
}



// FUNCTION 140a0062e FUN_140a0062e body=353 status=ok
// SIG undefined FUN_140a0062e(void)

void FUN_140a0062e(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140a006b3;
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
LAB_140a006b3:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 140a00790 FUN_140a00790 body=309 status=ok
// SIG undefined FUN_140a00790(void)

void FUN_140a00790(longlong param_1,longlong *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  lVar2 = *param_2;
  uVar1 = *(undefined4 *)(param_1 + 0x30);
  uVar4 = FUN_140a008c5();
  lVar3 = *(longlong *)(lVar2 + 0x200);
  if (lVar3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_1403f69f4(lVar3,uVar4,0);
  }
  FUN_14083c276(lVar2,uVar4,uVar1,param_3,0);
  lVar2 = *param_2;
  uVar1 = *(undefined4 *)(param_1 + 0x34);
  uVar4 = FUN_140a008c5();
  lVar3 = *(longlong *)(lVar2 + 0x200);
  if (lVar3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_1403f69f4(lVar3,uVar4,1);
  }
  FUN_14083c276(lVar2,uVar4,uVar1,param_3,0);
  lVar2 = *param_2;
  uVar1 = *(undefined4 *)(param_1 + 0x38);
  uVar4 = FUN_140a008c5();
  lVar3 = *(longlong *)(lVar2 + 0x200);
  if (lVar3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_1403f69f4(lVar3,uVar4,2);
  }
  FUN_14083c276(lVar2,uVar4,uVar1,param_3,0);
  lVar2 = *param_2;
  uVar1 = *(undefined4 *)(param_1 + 0x3c);
  uVar4 = FUN_140a008c5();
  lVar3 = *(longlong *)(lVar2 + 0x200);
  if (lVar3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_1403f69f4(lVar3,uVar4,3);
  }
  FUN_14083c276(lVar2,uVar4,uVar1,param_3,0);
  return;
}



// FUNCTION 140a008c5 FUN_140a008c5 body=57 status=ok
// SIG undefined FUN_140a008c5(void)

void FUN_140a008c5(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb93d38 == 0) {
    uVar1 = FUN_140cbe2a3();
    DAT_14cb93d38 = FUN_14171c317(FUN_1465742d4,uVar1,L"EAtt_WeaponBehaviorSway");
  }
  return;
}



// FUNCTION 140a008fe FUN_140a008fe body=1748 status=ok
// SIG undefined FUN_140a008fe(void)

void FUN_140a008fe(longlong param_1,longlong *param_2,undefined4 param_3)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined1 auStack_108 [32];
  undefined1 local_e8;
  char local_e0 [16];
  longlong *local_d0;
  undefined4 local_b8 [2];
  undefined4 local_b0;
  undefined4 uStack_ac;
  ushort local_98;
  byte local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  ushort local_70;
  byte local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  lVar2 = *param_2;
  local_e0[0] = '\0';
  local_b8[0] = 0;
  FUN_14083c332(local_e0);
  puVar6 = &local_b0;
  FUN_1448729ea(param_1 + 0x30,puVar6,local_e0);
  uVar8 = local_b0;
  if (local_90 != 3) {
    puVar7 = &local_88;
    FUN_1400b56fe(puVar7,&local_b0,3);
    uVar8 = 0;
    if (local_68 != 0) {
      uVar8 = local_88;
    }
    pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
    if (pcVar4 != (code *)0x0) {
      if (0x18 < local_70) {
        puVar7 = (undefined4 *)CONCAT44(uStack_84,local_88);
      }
      (*pcVar4)(puVar7);
    }
    if (0x18 < local_70) {
      FUN_1400020a8(CONCAT44(uStack_84,local_88));
    }
  }
  uVar5 = FUN_140a00fd3();
  lVar3 = *(longlong *)(lVar2 + 0x200);
  if (lVar3 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_1403f69f4(lVar3,uVar5,0);
  }
  local_e8 = 0;
  FUN_14083c276(lVar2,uVar5,uVar8,param_3);
  pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_90 * 0x120));
  if (pcVar4 != (code *)0x0) {
    if (0x18 < local_98) {
      puVar6 = (undefined4 *)CONCAT44(uStack_ac,local_b0);
    }
    (*pcVar4)(puVar6);
  }
  if (0x18 < local_98) {
    FUN_1400020a8(CONCAT44(uStack_ac,local_b0));
  }
  FUN_1448173f8(local_b8);
  if ((local_e0[0] == '\x03') && (local_d0 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_d0 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_d0 + 0x10))();
    }
  }
  lVar2 = *param_2;
  local_e0[0] = '\0';
  local_b8[0] = 0;
  FUN_14083c332(local_e0,param_2);
  puVar6 = &local_b0;
  FUN_1448729ea(param_1 + 0x80,puVar6,local_e0);
  uVar8 = local_b0;
  if (local_90 != 3) {
    puVar7 = &local_88;
    FUN_1400b56fe(puVar7,&local_b0,3);
    uVar8 = 0;
    if (local_68 != 0) {
      uVar8 = local_88;
    }
    pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
    if (pcVar4 != (code *)0x0) {
      if (0x18 < local_70) {
        puVar7 = (undefined4 *)CONCAT44(uStack_84,local_88);
      }
      (*pcVar4)(puVar7);
    }
    if (0x18 < local_70) {
      FUN_1400020a8(CONCAT44(uStack_84,local_88));
    }
  }
  uVar5 = FUN_140a00fd3();
  lVar3 = *(longlong *)(lVar2 + 0x200);
  if (lVar3 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_1403f69f4(lVar3,uVar5,1);
  }
  local_e8 = 0;
  FUN_14083c276(lVar2,uVar5,uVar8,param_3);
  pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_90 * 0x120));
  if (pcVar4 != (code *)0x0) {
    if (0x18 < local_98) {
      puVar6 = (undefined4 *)CONCAT44(uStack_ac,local_b0);
    }
    (*pcVar4)(puVar6);
  }
  if (0x18 < local_98) {
    FUN_1400020a8(CONCAT44(uStack_ac,local_b0));
  }
  FUN_1448173f8(local_b8);
  if ((local_e0[0] == '\x03') && (local_d0 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_d0 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_d0 + 0x10))();
    }
  }
  lVar2 = *param_2;
  local_e0[0] = '\0';
  local_b8[0] = 0;
  FUN_14083c332(local_e0,param_2);
  puVar6 = &local_b0;
  FUN_1448729ea(param_1 + 0xd8,puVar6,local_e0);
  uVar8 = local_b0;
  if (local_90 != 3) {
    puVar7 = &local_88;
    FUN_1400b56fe(puVar7,&local_b0,3);
    uVar8 = 0;
    if (local_68 != 0) {
      uVar8 = local_88;
    }
    pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
    if (pcVar4 != (code *)0x0) {
      if (0x18 < local_70) {
        puVar7 = (undefined4 *)CONCAT44(uStack_84,local_88);
      }
      (*pcVar4)(puVar7);
    }
    if (0x18 < local_70) {
      FUN_1400020a8(CONCAT44(uStack_84,local_88));
    }
  }
  uVar5 = FUN_140a00fd3();
  lVar3 = *(longlong *)(lVar2 + 0x200);
  if (lVar3 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_1403f69f4(lVar3,uVar5,2);
  }
  local_e8 = 0;
  FUN_14083c276(lVar2,uVar5,uVar8,param_3);
  pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_90 * 0x120));
  if (pcVar4 != (code *)0x0) {
    if (0x18 < local_98) {
      puVar6 = (undefined4 *)CONCAT44(uStack_ac,local_b0);
    }
    (*pcVar4)(puVar6);
  }
  if (0x18 < local_98) {
    FUN_1400020a8(CONCAT44(uStack_ac,local_b0));
  }
  FUN_1448173f8(local_b8);
  if ((local_e0[0] == '\x03') && (local_d0 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_d0 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_d0 + 0x10))();
    }
  }
  lVar2 = *param_2;
  local_e0[0] = '\0';
  local_b8[0] = 0;
  FUN_14083c332(local_e0,param_2);
  puVar6 = &local_b0;
  FUN_1448729ea(param_1 + 0x128,puVar6,local_e0);
  uVar8 = local_b0;
  if (local_90 != 3) {
    puVar7 = &local_88;
    FUN_1400b56fe(puVar7,&local_b0,3);
    uVar8 = 0;
    if (local_68 != 0) {
      uVar8 = local_88;
    }
    pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
    if (pcVar4 != (code *)0x0) {
      if (0x18 < local_70) {
        puVar7 = (undefined4 *)CONCAT44(uStack_84,local_88);
      }
      (*pcVar4)(puVar7);
    }
    if (0x18 < local_70) {
      FUN_1400020a8(CONCAT44(uStack_84,local_88));
    }
  }
  uVar5 = FUN_140a00fd3();
  lVar3 = *(longlong *)(lVar2 + 0x200);
  if (lVar3 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_1403f69f4(lVar3,uVar5,3);
  }
  local_e8 = 0;
  FUN_14083c276(lVar2,uVar5,uVar8,param_3);
  pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_90 * 0x120));
  if (pcVar4 != (code *)0x0) {
    if (0x18 < local_98) {
      puVar6 = (undefined4 *)CONCAT44(uStack_ac,local_b0);
    }
    (*pcVar4)(puVar6);
  }
  if (0x18 < local_98) {
    FUN_1400020a8(CONCAT44(uStack_ac,local_b0));
  }
  FUN_1448173f8(local_b8);
  if ((local_e0[0] == '\x03') && (local_d0 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_d0 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_d0 + 0x10))();
    }
  }
  if ((local_60 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140a00fd3 FUN_140a00fd3 body=57 status=ok
// SIG undefined FUN_140a00fd3(void)

void FUN_140a00fd3(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb93cd8 == 0) {
    uVar1 = FUN_140cbe2a3();
    DAT_14cb93cd8 = FUN_14171c317(FUN_146574118,uVar1,L"EAtt_WeaponBehaviorHeat");
  }
  return;
}



// FUNCTION 140a0100c FUN_140a0100c body=38 status=ok
// SIG undefined FUN_140a0100c(void)

void FUN_140a0100c(longlong *param_1)

{
  (**(code **)(*param_1 + 0x38))();
  (**(code **)(*param_1 + 0x40))(param_1);
                    /* WARNING: Could not recover jumptable at 0x000140a0102e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x48))(param_1);
  return;
}



// FUNCTION 140a01084 FUN_140a01084 body=103 status=ok
// SIG undefined FUN_140a01084(void)

void FUN_140a01084(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x20c4) = 0;
  *(undefined8 *)(param_1 + 0x20d4) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  memset((void *)(param_1 + 0x44),0,0x1004);
  *(undefined8 *)(param_1 + 0x104c) = 0;
  *(undefined8 *)(param_1 + 0x1054) = 0;
  memset((void *)(param_1 + 0x1060),0,0x1030);
  *(undefined8 *)(param_1 + 0x209c) = 0;
  *(undefined8 *)(param_1 + 0x20a4) = 0;
  return;
}



// FUNCTION 140a010ec FUN_140a010ec body=256 status=ok
// SIG undefined FUN_140a010ec(void)

void FUN_140a010ec(longlong param_1,int param_2)

{
  float fVar1;
  
  *(int *)(param_1 + 0x1c) = param_2;
  fVar1 = (float)param_2;
  if (fVar1 <= 1.0) {
    fVar1 = 1.0;
  }
  if (192000.0 <= fVar1) {
    fVar1 = 192000.0;
  }
  *(float *)(param_1 + 0x20) = fVar1;
  *(float *)(param_1 + 0x24) = 3.1415927 / fVar1;
  *(float *)(param_1 + 0x30) = 6.2831855 / fVar1;
  *(float *)(param_1 + 0x34) = 942.4778 / fVar1;
  *(float *)(param_1 + 0x2090) = fVar1 * 0.0033333334;
  *(float *)(param_1 + 0x2094) = fVar1 * 0.0033333334 + 1.0;
  *(float *)(param_1 + 0x2098) = 0.1 / fVar1;
  fVar1 = expf(-20.0 / fVar1);
  *(float *)(param_1 + 0x20bc) = fVar1;
  fVar1 = expf(-200.0 / *(float *)(param_1 + 0x20));
  *(float *)(param_1 + 0x20c0) = fVar1;
  fVar1 = expf(-400.0 / *(float *)(param_1 + 0x20));
  *(float *)(param_1 + 0x20cc) = fVar1;
  *(float *)(param_1 + 0x20d0) = (1.0 - fVar1) * 0.6666667;
  return;
}



// FUNCTION 140a011ec FUN_140a011ec body=345 status=ok
// SIG undefined FUN_140a011ec(void)

void FUN_140a011ec(longlong param_1,ulonglong param_2)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  undefined1 auStack_48 [32];
  ulonglong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != 0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c(param_2);
  }
  local_28 = param_2;
  if ((~DAT_14c950c29 & 1) == 0 && param_2 != 0) {
    FUN_1456cec3c(param_2);
  }
  plVar3 = (longlong *)(param_1 + 0x28);
  if ((param_2 != 0) && ((DAT_14c950c29 & 1) != 0)) {
    FUN_1456cec3c(param_2);
  }
  uVar1 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
  uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
  iVar2 = FUN_140a01346(plVar3,uVar1 >> 0x10 ^ uVar1,&local_28);
  if (iVar2 != -1) {
    if ((*plVar3 + (longlong)iVar2 * 0x20 != 0) && (*plVar3 + (longlong)iVar2 * 0x20 != -8)) {
      FUN_14032cdc0();
      if (DAT_14c950c29 == 1 && param_2 != 0) {
        FUN_1456cec3c(param_2);
      }
      local_28 = param_2;
      if ((param_2 != 0) && ((DAT_14c950c29 & 1) != 0)) {
        FUN_1456cec3c(param_2);
      }
      FUN_145762dfe(plVar3,&local_28);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a01346 FUN_140a01346 body=202 status=ok
// SIG undefined FUN_140a01346(void)

int FUN_140a01346(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  longlong *plVar5;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    bVar4 = DAT_14c950c29;
    for (iVar1 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
        iVar1 != -1; iVar1 = *(int *)(*param_1 + 0x18 + (longlong)iVar1 * 0x20)) {
      lVar2 = *param_3;
      if ((lVar2 != 0 & bVar4) == 1) {
        FUN_1456cec3c(lVar2);
        bVar4 = DAT_14c950c29;
      }
      lVar3 = *(longlong *)(*param_1 + (longlong)iVar1 * 0x20);
      if (((bVar4 & 1) != 0) && (lVar3 != 0)) {
        FUN_1456cec3c(lVar3);
        bVar4 = DAT_14c950c29;
      }
      if ((lVar2 != 0 & bVar4) == 1) {
        FUN_1456cec3c(lVar2);
        bVar4 = DAT_14c950c29;
      }
      if (lVar3 == lVar2) {
        return iVar1;
      }
    }
  }
  return -1;
}



// FUNCTION 140a0141e FUN_140a0141e body=45 status=ok
// SIG undefined FUN_140a0141e(void)

undefined8 FUN_140a0141e(undefined8 param_1,int param_2)

{
  FUN_140a0144c();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x128);
  }
  return param_1;
}



// FUNCTION 140a0144c FUN_140a0144c body=380 status=ok
// SIG undefined FUN_140a0144c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140a0144c(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14b24d5d0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  if (param_1[0x23] != 0) {
    FUN_1400020a8();
  }
  FUN_140a01666(param_1 + 0x1b);
  FUN_140a0169d(param_1[0x18],*(undefined4 *)(param_1 + 0x19));
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x12) = 0;
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  FUN_140a0162e(param_1 + 9);
  FUN_140a015fb(param_1[7],*(undefined4 *)(param_1 + 8));
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  FUN_140a015c8(param_1[5],*(undefined4 *)(param_1 + 6));
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_140a016e8(param_1[3],*(undefined4 *)(param_1 + 4));
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
                    /* WARNING: Could not recover jumptable at 0x000140a01581. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    return;
  }
  return;
}



// FUNCTION 140a015c8 FUN_140a015c8 body=51 status=ok
// SIG undefined FUN_140a015c8(void)

void FUN_140a015c8(longlong param_1,int param_2)

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



// FUNCTION 140a015fb FUN_140a015fb body=51 status=ok
// SIG undefined FUN_140a015fb(void)

void FUN_140a015fb(longlong param_1,int param_2)

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



// FUNCTION 140a0162e FUN_140a0162e body=55 status=ok
// SIG undefined FUN_140a0162e(void)

void FUN_140a0162e(longlong *param_1)

{
  FUN_140a01734(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140a01666 FUN_140a01666 body=55 status=ok
// SIG undefined FUN_140a01666(void)

void FUN_140a01666(longlong *param_1)

{
  FUN_140a0194e(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140a0169d FUN_140a0169d body=75 status=ok
// SIG undefined FUN_140a0169d(void)

void FUN_140a0169d(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 0x20);
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
      plVar4 = plVar4 + 6;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140a016e8 FUN_140a016e8 body=75 status=ok
// SIG undefined FUN_140a016e8(void)

void FUN_140a016e8(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 0x10);
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
      plVar4 = plVar4 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140a01734 FUN_140a01734 body=538 status=ok
// SIG undefined FUN_140a01734(void)

void FUN_140a01734(longlong *param_1,int param_2)

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
        if (uVar11 == uVar17) goto LAB_140a01835;
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
      plVar5 = *(longlong **)(*param_1 + 0x28 + (longlong)iVar9 * 0x40);
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
          if (iVar8 - lVar14 == lVar12) goto LAB_140a01835;
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
LAB_140a01835:
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_140b7ce44(param_1,param_2);
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



// FUNCTION 140a0194e FUN_140a0194e body=552 status=ok
// SIG undefined FUN_140a0194e(void)

void FUN_140a0194e(longlong *param_1,int param_2)

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
  uint uVar14;
  longlong lVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  
  puVar1 = (uint *)(param_1 + 2);
  iVar4 = (int)param_1[5];
  if (iVar4 == 0) {
    uVar17 = 0;
    uVar16 = 1;
    iVar13 = 0;
    iVar9 = 0;
  }
  else {
    puVar10 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar10 = puVar1;
    }
    uVar14 = *puVar10;
    if (uVar14 == 0) {
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
        if (uVar11 == uVar17) goto LAB_140a01983;
        iVar13 = iVar13 + 0x20;
        uVar14 = puVar10[uVar17 + 1];
        uVar17 = uVar17 + 1;
      } while (uVar14 == 0);
    }
    else {
      uVar17 = 0;
      iVar13 = 0;
    }
    uVar16 = (ulonglong)(-uVar14 & uVar14);
    uVar11 = uVar16 * 2 + 1;
    lVar15 = 0x3f;
    if (uVar11 != 0) {
      for (; uVar11 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    iVar9 = (iVar13 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
    if (iVar4 <= iVar9) {
      iVar9 = iVar4;
    }
  }
  if (iVar9 < iVar4) {
    uVar14 = 0xffffffff;
    do {
      plVar5 = *(longlong **)(*param_1 + 0x20 + (longlong)iVar9 * 0x38);
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
      uVar14 = uVar14 & ~(uint)uVar16;
      puVar10 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar10 = puVar1;
      }
      iVar4 = (int)param_1[5];
      iVar9 = (int)uVar17;
      lVar15 = (longlong)iVar9;
      uVar6 = puVar10[lVar15] & uVar14;
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
          uVar6 = puVar10[lVar15 + lVar12 + 1];
          if (uVar6 != 0) break;
          lVar12 = lVar12 + 1;
          if (iVar8 - lVar15 == lVar12) goto LAB_140a01983;
        }
        uVar17 = (ulonglong)(iVar9 + (int)lVar12 + 1);
        uVar14 = 0xffffffff;
      }
      uVar16 = (ulonglong)(-uVar6 & uVar6);
      uVar11 = uVar16 * 2 + 1;
      lVar15 = 0x3f;
      if (uVar11 != 0) {
        for (; uVar11 >> lVar15 == 0; lVar15 = lVar15 + -1) {
        }
      }
      iVar9 = (iVar13 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
    } while (iVar9 < iVar4);
  }
LAB_140a01983:
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_144748838(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar14 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (((int)uVar14 <= *(int *)((longlong)param_1 + 0x2c)) &&
     (*(int *)((longlong)param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar6 = 0x80;
  if (0x80 < (int)uVar14) {
    uVar6 = uVar14;
  }
  *(uint *)((longlong)param_1 + 0x2c) = uVar6;
  FUN_1446efbd8(puVar1,0);
  return;
}



// FUNCTION 140a01b76 FUN_140a01b76 body=489 status=ok
// SIG undefined FUN_140a01b76(void)

void FUN_140a01b76(undefined8 param_1)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_e8 [32];
  undefined1 *local_c8;
  undefined8 local_c0;
  undefined1 local_b8;
  undefined8 local_b0;
  undefined1 local_a8 [16];
  undefined8 local_98;
  undefined8 local_90;
  byte local_74;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_140a01d60();
  iVar3 = FUN_14487fd02(param_1);
  if (iVar3 != 1) {
    cVar2 = FUN_140a01dc0(param_1,0);
    if (cVar2 != '\0') {
      lVar4 = FUN_1447210f0();
      if ((*(longlong *)(lVar4 + 0x110) == 0) && (1 < *(int *)(DAT_14cb0d2b0 + 0xe28))) {
        uVar1 = *(undefined8 *)(DAT_14cb0d2b0 + 0xe20);
        uVar5 = FUN_144a797b2();
        local_b0 = 0;
        local_c0 = 0;
        local_b8 = 1;
        local_c8 = (undefined1 *)CONCAT44(local_c8._4_4_,2);
        lVar6 = FUN_1412ecd05(uVar5,0,uVar1,0);
        if (lVar6 != 0) {
          lVar7 = FUN_144a797b2();
          if ((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar7 + 0x38) * 8) == lVar7 + 0x30)) {
            if (DAT_14c950c29 == '\x01') {
              FUN_1456cec3c(lVar6);
            }
            lVar7 = FUN_140a02200();
            if (((lVar7 != 0) && (*(int *)(lVar7 + 0x38) <= *(int *)(lVar6 + 0x38))) &&
               (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
                lVar7 + 0x30)) {
              FUN_1411371f6(local_a8);
              local_98 = param_1;
              local_90 = FUN_144a5270a(param_1);
              local_74 = local_74 | 0x40;
              lVar7 = FUN_140a02200();
              if ((lVar7 == 0) || (*(int *)(lVar6 + 0x38) < *(int *)(lVar7 + 0x38))) {
                lVar8 = 0;
              }
              else {
                lVar8 = 0;
                if (*(longlong *)
                     (*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
                    lVar7 + 0x30) {
                  lVar8 = lVar6;
                }
              }
              local_c8 = local_a8;
              lVar6 = FUN_141137228(lVar4,lVar8,0,0);
              if ((lVar6 != 0) && (DAT_14c950c29 != '\0')) {
                FUN_1456cec3c(lVar6);
              }
              *(longlong *)(lVar4 + 0x110) = lVar6;
              if (local_68 != 0) {
                if (local_58 == (longlong *)0x0) {
                  local_58 = local_48;
                }
                (**(code **)(*local_58 + 0x10))();
              }
            }
          }
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a01d60 FUN_140a01d60 body=95 status=ok
// SIG undefined FUN_140a01d60(void)

void FUN_140a01d60(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  
  if (*(byte *)((longlong)param_1 + 0x17b) == 0) {
    return;
  }
  iVar2 = *(byte *)((longlong)param_1 + 0x17b) - 1;
  lVar1 = FUN_1414fb874(param_1,iVar2);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000140a01d9f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x308))(param_1,lVar1,*(code **)(*param_1 + 0x308));
    return;
  }
  lVar1 = FUN_1447210f0(param_1);
  FUN_147b8e9b0(*(undefined8 *)(lVar1 + 0x30),param_1,iVar2);
  return;
}



// FUNCTION 140a01dc0 FUN_140a01dc0 body=1086 status=ok
// SIG undefined FUN_140a01dc0(void)

undefined8 FUN_140a01dc0(longlong param_1,char param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  bool bVar10;
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
  if (DAT_14cae8b20 == 0) {
    local_50 = &local_30;
    local_30 = (code *)&LAB_14355090c;
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
    local_50 = &local_30;
    local_30 = FUN_1449e2820;
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
  uVar4 = *(ulonglong *)(param_1 + 0x20);
  if (uVar4 == 0) {
    uVar4 = (ulonglong)*(uint *)(param_1 + 8);
    uVar9 = 0;
LAB_140a021a0:
    lVar7 = 0;
  }
  else {
    iVar1 = *(int *)(lVar7 + 0x38);
    uVar8 = uVar4;
    do {
      if ((*(int *)(*(longlong *)(uVar8 + 0x10) + 0x38) < iVar1) ||
         (uVar9 = uVar8,
         *(longlong *)(*(longlong *)(*(longlong *)(uVar8 + 0x10) + 0x30) + (longlong)iVar1 * 8) !=
         lVar7 + 0x30)) {
        uVar9 = 0;
      }
    } while ((uVar9 == 0) && (uVar8 = *(ulonglong *)(uVar8 + 0x20), uVar8 != 0));
    if (((*(uint *)(param_1 + 8) & 0x10) != 0) || ((short)*(undefined4 *)(uVar4 + 8) < 0))
    goto LAB_140a021a0;
    uVar2 = *(uint *)(uVar4 + 0xc);
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar7 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar7 = 0;
    }
    uVar4 = (ulonglong)*(uint *)(lVar7 + 8);
    if ((*(uint *)(lVar7 + 8) >> 0x1c & 1) != 0) goto LAB_140a021a0;
    if (DAT_14cae8b20 == 0) {
      local_50 = &local_30;
      local_30 = (code *)&LAB_14355090c;
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
      local_50 = &local_30;
      local_30 = FUN_1449e2820;
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
    uVar4 = *(ulonglong *)(param_1 + 0x20);
    if (uVar4 == 0) goto LAB_140a021a0;
    iVar1 = *(int *)(lVar7 + 0x38);
    do {
      if ((*(int *)(*(longlong *)(uVar4 + 0x10) + 0x38) < iVar1) ||
         (uVar8 = uVar4,
         *(longlong *)(*(longlong *)(*(longlong *)(uVar4 + 0x10) + 0x30) + (longlong)iVar1 * 8) !=
         lVar7 + 0x30)) {
        uVar8 = 0;
      }
    } while ((uVar8 == 0) && (uVar4 = *(ulonglong *)(uVar4 + 0x20), uVar4 != 0));
    if (uVar8 == 0) goto LAB_140a021a0;
    lVar7 = *(longlong *)(uVar8 + 0xc0);
  }
  bVar10 = *(ulonglong *)(lVar7 + 0x30) == uVar9;
  uVar5 = CONCAT71((int7)(uVar4 >> 8),bVar10);
  if (param_2 == '\x01' && !bVar10) {
    if ((0 < *(int *)(lVar7 + 0x90)) && (lVar3 = **(longlong **)(lVar7 + 0x88), lVar3 != 0)) {
      lVar6 = FUN_1402cf98a();
      lVar3 = *(longlong *)(lVar3 + 0x10);
      if ((*(int *)(lVar6 + 0x38) <= *(int *)(lVar3 + 0x38)) &&
         (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
          lVar6 + 0x30)) {
        uVar5 = CONCAT71((int7)((ulonglong)**(longlong **)(lVar7 + 0x88) >> 8),
                         *(ulonglong *)(**(longlong **)(lVar7 + 0x88) + 0x178) == uVar9);
        goto LAB_140a01f07;
      }
    }
    uVar5 = 0;
  }
LAB_140a01f07:
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a02200 FUN_140a02200 body=228 status=ok
// SIG undefined FUN_140a02200(void)

longlong FUN_140a02200(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined2 *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14caf3d20 == 0) {
    local_30 = &local_10;
    local_10 = FUN_141030f22;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_142b4754c;
    local_38 = &LAB_147c0eb3d;
    local_40 = FUN_1463ef3b7;
    local_48 = &DAT_149e063b2;
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0x390;
    FUN_14081cfa3(L"/Script/Engine",L"ParticleEventManager",&DAT_14caf3d20,&DAT_147c0eb3c);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14caf3d20;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a022e6 FUN_140a022e6 body=240 status=ok
// SIG undefined FUN_140a022e6(void)

ulonglong FUN_140a022e6(longlong *param_1,longlong param_2)

{
  uint uVar1;
  char cVar2;
  ulonglong uVar3;
  longlong *plVar4;
  undefined8 unaff_RSI;
  
  if ((*(byte *)(param_2 + 0xad) & 3) == 1) {
    cVar2 = (**(code **)(*param_1 + 0x600))();
    if ((cVar2 != '\0') && (*(char *)((longlong)param_1 + 0x291) != '\x03')) {
      uVar3 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
      if ((*(int *)(param_2 + 0xdc) == 0) ||
         ((uVar1 = *(uint *)(param_2 + 0xd8), (int)uVar1 < 0 || (DAT_14c9647dc <= (int)uVar1))))
      goto LAB_140a023cc;
      plVar4 = (longlong *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((plVar4 == (longlong *)0x0) ||
         ((((int)plVar4[2] != *(int *)(param_2 + 0xdc) ||
           ((*(uint *)(plVar4 + 1) & 0x10200000) != 0)) ||
          (plVar4 = (longlong *)*plVar4, plVar4 == (longlong *)0x0)))) goto LAB_140a023cc;
      cVar2 = (**(code **)(*plVar4 + 0x9b0))(plVar4,param_1[0x3e]);
      if (cVar2 != '\0') {
        cVar2 = FUN_144a41512(param_2 + 0xb8);
        if (cVar2 != '\0') {
          plVar4 = (longlong *)FUN_140a023d6(param_2 + 0xb8);
                    /* WARNING: Could not recover jumptable at 0x000140a023c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar3 = (**(code **)(*plVar4 + 0x538))(plVar4,param_1[0x3e],*(code **)(*plVar4 + 0x538));
          return uVar3;
        }
        goto LAB_140a023cc;
      }
    }
  }
  uVar3 = 0;
LAB_140a023cc:
  return uVar3 & 0xffffffff;
}



// FUNCTION 140a023d6 FUN_140a023d6 body=88 status=ok
// SIG undefined FUN_140a023d6(void)

longlong FUN_140a023d6(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_144a3ff20();
  if (lVar1 == 0) {
    lVar1 = FUN_14479d2ce(param_1 + 8);
    if (lVar1 != 0) {
      lVar2 = FUN_144a6c4d8();
      if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
           ) == lVar2 + 0x30)) {
        return lVar1;
      }
    }
    lVar1 = 0;
  }
  return lVar1;
}



// FUNCTION 140a02434 FUN_140a02434 body=220 status=ok
// SIG undefined FUN_140a02434(void)

undefined1 FUN_140a02434(longlong param_1)

{
  longlong lVar1;
  undefined1 uVar2;
  byte bVar3;
  ulonglong uVar4;
  longlong *plVar5;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca27f78) {
    FUN_144b3d300(&DAT_14ca27f78);
    if (DAT_14ca27f78 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      plVar5 = (longlong *)
               (**(code **)(*DAT_14c8407a8 + 200))
                         (DAT_14c8407a8,L"r.Gbx.ScreenSpaceDecals.Enabled",1);
      if (plVar5 == (longlong *)0x0) {
        DAT_14ca27f70 = 0;
      }
      else {
        DAT_14ca27f70 = (**(code **)(*plVar5 + 0x60))(plVar5);
      }
      _Init_thread_footer(&DAT_14ca27f78);
    }
  }
  lVar1 = DAT_14ca27f70;
  if ((*(byte *)(param_1 + 0x40) & 2) == 0) {
    uVar2 = 0;
  }
  else {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0xc60) == 0x40000002) {
      uVar4 = 0;
    }
    else {
      bVar3 = FUN_144a61b4f();
      uVar4 = (ulonglong)(bVar3 ^ 1);
    }
    uVar2 = *(undefined1 *)(lVar1 + uVar4);
  }
  return uVar2;
}



// FUNCTION 140a02510 FUN_140a02510 body=117 status=ok
// SIG undefined FUN_140a02510(void)

void FUN_140a02510(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  undefined8 **local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = param_3;
  if (param_3 != (undefined8 *)0x0) {
    local_20 = &local_28;
    FUN_140a026d8(param_1 + 0x4f0);
    FUN_140a02586(param_2,local_28);
    if (local_28 != (undefined8 *)0x0) {
      (**(code **)*local_28)(local_28,1);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a02586 FUN_140a02586 body=336 status=ok
// SIG undefined FUN_140a02586(void)

void FUN_140a02586(longlong param_1,longlong *param_2)

{
  char cVar1;
  undefined1 auStack_58 [40];
  longlong *local_30;
  longlong **local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = param_2;
  if (param_2 != (longlong *)0x0) {
    cVar1 = (**(code **)(*param_2 + 0x48))(param_2);
    if (cVar1 != '\0') {
      local_28 = &local_30;
      FUN_140a026d8(param_1 + 0x770,&local_28);
      local_28 = &local_30;
      FUN_140a026d8(param_1 + 0x780,&local_28);
      param_2 = local_30;
    }
    cVar1 = (**(code **)(*param_2 + 200))(param_2);
    if (cVar1 != '\0') {
      local_28 = &local_30;
      FUN_140a026d8(param_1 + 0x878,&local_28);
      local_28 = &local_30;
      FUN_140a026d8(param_1 + 0x888,&local_28);
    }
    cVar1 = (**(code **)(*local_30 + 0x58))();
    if (cVar1 != '\0') {
      local_28 = &local_30;
      FUN_140a026d8(param_1 + 0x790);
    }
    cVar1 = (**(code **)(*local_30 + 0xe0))();
    if (cVar1 != '\0') {
      (**(code **)(*local_30 + 0xe8))(local_30,param_1,*(undefined8 *)(param_1 + 0x130));
      local_28 = &local_30;
      FUN_140a026d8(param_1 + 0x898);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a026d8 FUN_140a026d8 body=218 status=ok
// SIG undefined FUN_140a026d8(void)

int FUN_140a026d8(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  bool bVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  iVar4 = (int)param_1[1];
  lVar5 = (longlong)iVar4;
  if (lVar5 == 0) {
    iVar4 = 0;
  }
  else {
    plVar1 = (longlong *)*param_1;
    iVar3 = 0;
    bVar6 = *plVar1 == *(longlong *)*param_2;
    iVar8 = 0;
    do {
      iVar2 = iVar8 + 1;
      if (iVar8 + 1 < iVar4) {
        iVar2 = iVar4;
      }
      iVar9 = iVar8;
      lVar7 = (longlong)iVar8;
      do {
        lVar7 = lVar7 + 1;
        iVar10 = iVar2;
        if (lVar5 <= lVar7) break;
        iVar9 = iVar9 + 1;
        iVar10 = iVar9;
      } while (bVar6 == (plVar1[lVar7] == *(longlong *)*param_2));
      if (bVar6 == false) {
        if (iVar3 != iVar8) {
          memmove(plVar1 + iVar3,plVar1 + iVar8,(longlong)(iVar10 - iVar8) << 3);
        }
        iVar3 = iVar3 + (iVar10 - iVar8);
      }
      bVar6 = (bool)(bVar6 ^ 1);
      iVar8 = iVar10;
    } while (lVar7 < lVar5);
    *(int *)(param_1 + 1) = iVar3;
    iVar4 = iVar4 - iVar3;
  }
  return iVar4;
}



// FUNCTION 140a027b2 FUN_140a027b2 body=136 status=ok
// SIG undefined FUN_140a027b2(void)

void FUN_140a027b2(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  lVar4 = *(longlong *)(param_1 + 0x50);
  if (lVar4 == 0) {
    uVar3 = FUN_1405bc036();
    lVar4 = FUN_14477b664(uVar3);
    *(longlong *)(param_1 + 0x50) = lVar4;
  }
  if (*(longlong *)(param_1 + 0x58) != 0) {
    return;
  }
  if (lVar4 == 0) {
    return;
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    plVar1 = *(longlong **)(lVar4 + 0xb8);
    if ((plVar1 == (longlong *)0x0) ||
       (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
      uVar3 = 0;
    }
    else {
      uVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
      uVar3 = FUN_144aff482(uVar3,(longlong *)(param_1 + 0x48));
    }
    *(undefined8 *)(param_1 + 0x58) = uVar3;
    return;
  }
  return;
}



// FUNCTION 140a0283a FUN_140a0283a body=1129 status=ok
// SIG undefined FUN_140a0283a(void)

longlong *
FUN_140a0283a(longlong param_1,longlong *param_2,undefined8 param_3,longlong *param_4,uint param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined2 *puVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  int iVar8;
  int iVar9;
  undefined8 *puVar10;
  undefined2 *puVar11;
  longlong lVar12;
  byte bVar13;
  void *_Dst;
  uint uVar14;
  undefined2 *puVar15;
  void *pvVar16;
  uint uVar17;
  bool bVar18;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  longlong *plStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  puVar10 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar10 = 0;
  puVar10[1] = 0;
  *param_2 = (longlong)puVar10;
  lVar3 = *param_4;
  if (lVar3 != 0) {
    puVar11 = (undefined2 *)FUN_14001cc68(0x4c0,0x10);
    *puVar11 = 0x400;
    *(undefined1 *)(puVar11 + 1) = 4;
    *(undefined8 *)(puVar11 + 2) = 0;
    *(undefined8 *)(puVar11 + 6) = 0;
    *(undefined8 *)(puVar11 + 10) = 0;
    *(undefined8 *)(puVar11 + 0xe) = 0;
    *(undefined8 *)(puVar11 + 0x10) = 0;
    *(undefined8 *)(puVar11 + 0x14) = 0;
    lVar12 = 0x38;
    do {
      *(undefined8 *)((longlong)puVar11 + lVar12 + -8) = 0xffffffffffffffff;
      *(undefined8 *)((longlong)puVar11 + lVar12) = 0;
      ((undefined8 *)((longlong)puVar11 + lVar12))[1] = 0;
      *(undefined1 *)((longlong)puVar11 + lVar12 + 0x10) = 0;
      lVar12 = lVar12 + 0x20;
    } while (lVar12 != 0x438);
    *(undefined8 *)(puVar11 + 0x228) = 0;
    *(undefined8 *)(puVar11 + 0x22c) = 0;
    *(undefined8 *)(puVar11 + 0x220) = 0;
    *(undefined8 *)(puVar11 + 0x224) = 0;
    *(undefined8 *)(puVar11 + 0x218) = 0;
    *(undefined8 *)(puVar11 + 0x21c) = 0;
    *(undefined8 *)(puVar11 + 0x230) = 0;
    *(undefined4 *)(puVar11 + 0x234) = 1;
    FUN_140817052(puVar11 + 0x230,1,0);
    **(undefined2 **)(puVar11 + 0x230) = 0;
    *(undefined8 *)(puVar11 + 0x240) = 0;
    *(undefined8 *)(puVar11 + 0x244) = 0x8000000000;
    *(undefined8 *)(puVar11 + 0x248) = 0;
    *(undefined8 *)(puVar11 + 0x24c) = 0;
    *(undefined8 *)(puVar11 + 0x250) = 0;
    *(undefined8 *)(puVar11 + 0x254) = 0;
    *(undefined8 *)(puVar11 + 600) = 0;
    *(undefined8 *)(puVar11 + 0x25c) = 0;
    puVar4 = (undefined2 *)puVar10[1];
    puVar15 = puVar4;
    if ((puVar4 != puVar11) &&
       (puVar10[1] = puVar11, puVar15 = puVar11, puVar4 != (undefined2 *)0x0)) {
      FUN_1404424c6(puVar4);
      FUN_1400020a8(puVar4);
      puVar15 = (undefined2 *)puVar10[1];
    }
    lVar12 = *param_4;
    lVar5 = param_4[1];
    if (lVar5 != 0) {
      LOCK();
      *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
      UNLOCK();
    }
    plVar6 = *(longlong **)(puVar15 + 0x14);
    *(longlong *)(puVar15 + 0x10) = lVar12;
    *(longlong *)(puVar15 + 0x14) = lVar5;
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
    lVar12 = *param_2;
    FUN_140a02e1c(param_1,*(undefined8 *)(lVar12 + 8),0);
    lVar12 = *(longlong *)(lVar12 + 8);
    iVar9 = *(int *)(param_1 + 0x30);
    *(int *)(lVar12 + 0x488) = iVar9;
    uVar17 = iVar9 + 0x1f;
    if (0x1f < uVar17) {
      pvVar16 = (void *)(lVar12 + 0x470);
      uVar14 = uVar17 >> 5;
      if (*(int *)(lVar12 + 0x48c) + 0x1fU >> 5 < uVar14) {
        FUN_14499171c(pvVar16,0,uVar14,4);
        *(uint *)(lVar12 + 0x48c) = uVar17 & 0xffffffe0;
      }
      _Dst = *(void **)(lVar12 + 0x480);
      if (*(void **)(lVar12 + 0x480) == (void *)0x0) {
        _Dst = pvVar16;
      }
      if (uVar17 < 0x120) {
        uVar14 = uVar17 >> 3 & 0x3c;
      }
      else {
        uVar14 = uVar14 << 2;
      }
      memset(_Dst,0,(ulonglong)uVar14);
      iVar9 = *(int *)(lVar12 + 0x488);
      iVar8 = iVar9 + 0x1f;
      if (-1 < iVar9) {
        iVar8 = iVar9;
      }
      if (iVar9 % 0x20 != 0) {
        if (*(void **)(lVar12 + 0x480) != (void *)0x0) {
          pvVar16 = *(void **)(lVar12 + 0x480);
        }
        bVar13 = -(char)(iVar9 % 0x20);
        *(uint *)((longlong)pvVar16 + (longlong)(iVar8 >> 5) * 4) =
             (uint)(*(int *)((longlong)pvVar16 + (longlong)(iVar8 >> 5) * 4) << (bVar13 & 0x1f)) >>
             (bVar13 & 0x1f);
      }
    }
  }
  if ((param_5 & 1) == 0) {
    plVar6 = *(longlong **)(param_1 + 0x18);
    if (plVar6 == (longlong *)0x0) {
LAB_140a02bdf:
      local_78 = 0;
      plStack_70 = (longlong *)0x0;
      local_88 = 0;
      uStack_80 = 0;
    }
    else {
      iVar9 = (int)plVar6[1];
      do {
        if (iVar9 == 0) goto LAB_140a02bdf;
        LOCK();
        iVar8 = (int)plVar6[1];
        bVar18 = iVar9 == iVar8;
        if (bVar18) {
          *(int *)(plVar6 + 1) = iVar9 + 1;
          iVar8 = iVar9;
        }
        iVar9 = iVar8;
        UNLOCK();
      } while (!bVar18);
      local_78 = *(undefined8 *)(param_1 + 0x10);
      local_88 = 0;
      uStack_80 = 0;
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
      LOCK();
      plVar1 = plVar6 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      plStack_70 = plVar6;
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
    if (lVar3 == 0) {
      FUN_140a02ca4(&local_88,*(undefined4 *)(param_1 + 0x24),1);
      FUN_140a02d18(param_1,&local_88);
      FUN_140a02d8c(param_1,&local_88,param_3);
    }
    plVar6 = (longlong *)*param_2;
    puVar10 = (undefined8 *)FUN_14001cc68(0xd0,0x10);
    *puVar10 = local_88;
    local_88 = 0;
    *(undefined4 *)(puVar10 + 1) = (undefined4)uStack_80;
    *(undefined4 *)((longlong)puVar10 + 0xc) = uStack_80._4_4_;
    uStack_80 = 0;
    puVar10[2] = local_78;
    puVar10[3] = plStack_70;
    if (plStack_70 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_70 + 1) = (int)plStack_70[1] + 1;
      UNLOCK();
    }
    puVar10[8] = 0;
    *(undefined4 *)(puVar10 + 9) = 0;
    puVar10[4] = 0;
    puVar10[5] = 0;
    *(undefined8 *)((longlong)puVar10 + 0x4c) = 0xffffffff00000080;
    *(undefined4 *)((longlong)puVar10 + 0x54) = 0;
    puVar10[0xc] = 0;
    *(undefined4 *)(puVar10 + 0xd) = 0;
    puVar10[0x14] = 0;
    *(undefined4 *)(puVar10 + 0x15) = 0;
    puVar10[0xe] = 0;
    puVar10[0xf] = 0;
    puVar10[0x10] = 0;
    puVar10[0x11] = 0;
    *(undefined8 *)((longlong)puVar10 + 0xac) = 0xffffffff00000080;
    *(undefined4 *)((longlong)puVar10 + 0xb4) = 0;
    puVar10[0x18] = 0;
    *(undefined4 *)(puVar10 + 0x19) = 0;
    puVar7 = (undefined8 *)*plVar6;
    if ((puVar7 != puVar10) && (*plVar6 = (longlong)puVar10, puVar7 != (undefined8 *)0x0)) {
      FUN_1417ed274(puVar7);
      FUN_1400020a8(puVar7);
    }
    FUN_140441f4a(&local_88);
  }
  if ((local_60 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 140a02ca4 FUN_140a02ca4 body=114 status=ok
// SIG undefined FUN_140a02ca4(void)

void FUN_140a02ca4(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1400ef140(param_1);
    }
    memset((void *)((longlong)iVar1 + *param_1),0,(longlong)(param_2 - iVar1));
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (*(int *)(param_1 + 1) = param_2, param_3 == '\x01')) {
      FUN_14704216a(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 140a02d18 FUN_140a02d18 body=116 status=ok
// SIG undefined FUN_140a02d18(void)

void FUN_140a02d18(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  
  iVar1 = *(int *)(param_1 + 0x30);
  if ((longlong)iVar1 != 0) {
    lVar2 = *param_2;
    lVar3 = *(longlong *)(param_1 + 0x28);
    lVar5 = 0;
    do {
      if (*(int *)(lVar3 + 0x10 + lVar5) == 0) {
        plVar4 = *(longlong **)(lVar3 + lVar5);
        if ((*(byte *)((longlong)plVar4 + 0x39) & 2) == 0) {
          (**(code **)(*plVar4 + 0x160))();
        }
        else {
          memset((void *)(*(int *)(lVar3 + 0x18 + lVar5) + lVar2),0,
                 (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
        }
      }
      lVar5 = lVar5 + 0x30;
    } while ((longlong)iVar1 * 0x30 != lVar5);
  }
  return;
}



// FUNCTION 140a02d8c FUN_140a02d8c body=144 status=ok
// SIG undefined FUN_140a02d8c(void)

void FUN_140a02d8c(longlong param_1,longlong *param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  void *_Dst;
  void *_Src;
  longlong lVar5;
  
  iVar1 = *(int *)(param_1 + 0x30);
  if ((longlong)iVar1 != 0) {
    lVar2 = *param_2;
    lVar3 = *(longlong *)(param_1 + 0x28);
    lVar5 = 0;
    do {
      if (*(int *)(lVar3 + 0x10 + lVar5) == 0) {
        _Src = (void *)(*(int *)(lVar3 + 0x14 + lVar5) + param_3);
        _Dst = (void *)(*(int *)(lVar3 + 0x18 + lVar5) + lVar2);
        if (_Dst != _Src) {
          plVar4 = *(longlong **)(lVar3 + lVar5);
          if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar4 + 0x100))();
          }
          else {
            memcpy(_Dst,_Src,(longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34))
            ;
          }
        }
      }
      lVar5 = lVar5 + 0x30;
    } while ((longlong)iVar1 * 0x30 != lVar5);
  }
  return;
}



// FUNCTION 140a02e1c FUN_140a02e1c body=509 status=ok
// SIG undefined FUN_140a02e1c(void)

void FUN_140a02e1c(longlong param_1,longlong param_2,uint param_3)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  ulonglong uVar11;
  
  *(uint *)(param_2 + 0x1c) = param_3;
  uVar2 = (ulonglong)
          ((param_3 & 4) << 3 ^ 0x20 |
          (uint)((param_3 & 0x14) == 4) << 0xb |
          (param_3 & 2) + ((uint)((param_3 & 1) == 0) | param_3 & 4) * 4) + 5;
  if ((param_3 & 0xc) == 0) {
    uVar2 = (ulonglong)((uint)uVar2 & 0x7fffffbf);
  }
  else {
    if ((param_3 & 0x10) == 0) {
      uVar2 = uVar2 | 0x1040;
      goto LAB_140a02e8e;
    }
    uVar2 = uVar2 | 0x40;
  }
  uVar2 = uVar2 & 0xffffffffffffefff;
LAB_140a02e8e:
  uVar7 = 0x400;
  if ((param_3 & 0x10) == 0) {
    uVar7 = 0x2000;
  }
  uVar2 = ((uint)((param_3 & 3) != 0) << 7 | (uint)((param_3 & 0x11) != 0) << 9) | uVar7 | uVar2 |
          0x4100;
  if ((*(char *)(param_1 + 0x20) < '\0') && (lVar4 = *(longlong *)(param_2 + 0x20), lVar4 != 0)) {
    if (0 < *(int *)(param_2 + 0x488)) {
      uVar11 = 0;
      uVar5 = 1;
      lVar8 = 0x20;
      uVar7 = 0;
      do {
        uVar10 = *(uint *)(*(longlong *)(param_1 + 0x28) + lVar8);
        uVar3 = (ulonglong)uVar10;
        if (uVar10 == 0xe) {
          uVar3 = FUN_146efd72c(lVar4,uVar11 & 0xffffffff);
        }
        lVar9 = *(longlong *)(param_2 + 0x480);
        if (*(longlong *)(param_2 + 0x480) == 0) {
          lVar9 = param_2 + 0x470;
        }
        if ((uVar2 >> (uVar3 & 0x3f) & 1) == 0) {
          uVar10 = *(uint *)(lVar9 + uVar7 * 4) | uVar5;
        }
        else {
          uVar10 = ~uVar5 & *(uint *)(lVar9 + uVar7 * 4);
        }
        iVar1 = uVar5 * 2;
        *(uint *)(lVar9 + uVar7 * 4) = uVar10;
        uVar5 = iVar1 + (uint)(iVar1 == 0);
        uVar11 = uVar11 + 1;
        lVar8 = lVar8 + 0x30;
        uVar7 = (ulonglong)((int)uVar7 + (uint)(iVar1 == 0));
      } while ((longlong)uVar11 < (longlong)*(int *)(param_2 + 0x488));
    }
  }
  else if (0 < *(int *)(param_2 + 0x488)) {
    lVar4 = 0;
    uVar5 = 1;
    lVar8 = 0x20;
    uVar10 = 0;
    do {
      lVar9 = *(longlong *)(param_2 + 0x480);
      if (*(longlong *)(param_2 + 0x480) == 0) {
        lVar9 = param_2 + 0x470;
      }
      uVar7 = (ulonglong)uVar10;
      if ((uVar2 >> ((ulonglong)*(uint *)(*(longlong *)(param_1 + 0x28) + lVar8) & 0x3f) & 1) == 0)
      {
        uVar6 = *(uint *)(lVar9 + uVar7 * 4) | uVar5;
      }
      else {
        uVar6 = ~uVar5 & *(uint *)(lVar9 + uVar7 * 4);
      }
      iVar1 = uVar5 * 2;
      uVar10 = uVar10 + (iVar1 == 0);
      *(uint *)(lVar9 + uVar7 * 4) = uVar6;
      uVar5 = iVar1 + (uint)(iVar1 == 0);
      lVar4 = lVar4 + 1;
      lVar8 = lVar8 + 0x30;
    } while (lVar4 < *(int *)(param_2 + 0x488));
  }
  return;
}



// FUNCTION 140a03020 FUN_140a03020 body=57 status=ok
// SIG undefined FUN_140a03020(void)

void FUN_140a03020(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5a450 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5a450 = FUN_140002ddd(FUN_1464c939e,uVar1,L"GbxBodyNodeState_Dialog");
  }
  return;
}



// FUNCTION 140a03062 FUN_140a03062 body=434 status=ok
// SIG undefined FUN_140a03062(void)

void FUN_140a03062(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b3f9c70;
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0x3ff00000;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0x3ff0000000000000;
  param_1[0x13] = 0x3ff0000000000000;
  param_1[0x14] = 0x3ff0000000000000;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  *(byte *)((longlong)param_1 + 0xbc) = *(byte *)((longlong)param_1 + 0xbc) & 0xc0 | 0x24;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = &DAT_4030000000000000;
  param_1[0x1b] = &DAT_4030000000000000;
  param_1[0x1c] = 0x3c23d70a41200000;
  param_1[0x1d] = &DAT_3f8000003f800000;
  param_1[0x1e] = 0x43340000;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  *(byte *)((longlong)param_1 + 0xfc) = *(byte *)((longlong)param_1 + 0xfc) & 0xf8 | 2;
  param_1[0x20] = 0;
  *(byte *)(param_1 + 0x21) = *(byte *)(param_1 + 0x21) & 0xfe;
  *(byte *)(param_1 + 0x38) = *(byte *)(param_1 + 0x38) & 0xfe;
  *(undefined4 *)(param_1 + 0x2e) = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x31] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  *(byte *)(param_1 + 0x32) = *(byte *)(param_1 + 0x32) & 0xfc;
  param_1[0x35] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x36] = 0x40c3880000000000;
  param_1[0x37] = 0;
  param_1[0x39] = 0;
  *(undefined4 *)(param_1 + 0x3a) = 0x7012;
  param_1[0x3b] = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0xff;
  param_1[0x3d] = 0;
  *(undefined4 *)(param_1 + 0x3e) = 0x7012;
  param_1[0x3f] = 0;
  *(undefined4 *)(param_1 + 0x40) = 0xff;
  *(undefined8 *)((longlong)param_1 + 0x204) = 0x3f00000000000000;
  return;
}



// FUNCTION 140a03214 FUN_140a03214 body=11182 status=ok
// SIG undefined FUN_140a03214(void)

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140a03214(double ***param_1,double *param_2,code **param_3,double *param_4,
                  undefined8 param_5,longlong param_6)

{
  double ****ppppdVar1;
  ushort uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  code ***pppcVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  double ***pppdVar15;
  int iVar16;
  ulonglong uVar17;
  double *pdVar18;
  byte bVar19;
  bool bVar20;
  float fVar21;
  float fVar22;
  undefined4 uVar23;
  float fVar24;
  float fVar25;
  double dVar26;
  double dVar27;
  float fVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  float fVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double ***pppdVar36;
  double dVar37;
  double *pdVar38;
  double dVar39;
  double dVar40;
  undefined8 *puVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  double dVar47;
  code ****ppppcVar48;
  double dVar49;
  double dVar50;
  double dVar51;
  double ***pppdVar52;
  double dVar53;
  double **ppdVar54;
  double dVar55;
  undefined1 auStack_b88 [32];
  double ***local_b68;
  double ****ppppdStack_b60;
  code ****local_b58;
  code ****local_b50;
  code ***local_b48;
  int *local_b40;
  double ***local_b38;
  double *local_b30;
  code ****local_b28;
  double local_b20;
  float local_b0c;
  code ***local_b08;
  float local_afc;
  double local_af8;
  double dStack_af0;
  undefined1 local_ae8 [16];
  undefined1 local_ad8 [16];
  double ***local_ac8;
  double ***pppdStack_ac0;
  double local_ab8;
  double ***pppdStack_ab0;
  double local_aa8;
  double *local_aa0;
  double *local_a98;
  double local_a90;
  double local_a88;
  undefined8 uStack_a80;
  double local_a78;
  undefined8 uStack_a70;
  double local_a68;
  double dStack_a60;
  undefined1 local_a58 [16];
  double ***local_a48;
  undefined8 uStack_a40;
  undefined1 local_a38 [16];
  undefined1 local_a28 [24];
  double local_a10;
  double ***local_a08;
  double local_a00;
  double local_9f8;
  double dStack_9f0;
  double local_9e8;
  double dStack_9e0;
  undefined4 local_9d8;
  uint uStack_9d4;
  double dStack_9d0;
  double local_9c8;
  undefined8 uStack_9c0;
  undefined8 local_9b8;
  double dStack_9b0;
  undefined1 local_9a8 [16];
  double local_998;
  double dStack_990;
  double local_988;
  undefined8 uStack_980;
  undefined8 local_978;
  undefined8 uStack_970;
  undefined8 local_968;
  undefined8 uStack_960;
  code ****local_958;
  double *pdStack_950;
  undefined1 *local_948;
  undefined8 local_940;
  ulonglong uStack_938;
  ulonglong local_930;
  double **local_928;
  double dStack_920;
  double local_918;
  double local_910;
  double ***pppdStack_908;
  double local_900;
  int local_8f8;
  undefined1 local_8f4 [4];
  double local_8f0;
  double local_8e8 [2];
  undefined1 local_8d8 [16];
  double local_8c8;
  double dStack_8c0;
  double local_8b8;
  undefined8 uStack_8b0;
  undefined8 local_8a8;
  undefined8 uStack_8a0;
  undefined8 local_898;
  undefined8 uStack_890;
  double **local_888;
  double local_880;
  double ***local_878;
  double local_870;
  code ****local_868;
  code ****ppppcStack_860;
  undefined1 *local_858;
  double **local_850;
  double ****ppppdStack_848;
  double local_840;
  code ***local_838;
  double dStack_830;
  double local_828;
  double **local_820;
  longlong local_818;
  undefined8 uStack_810;
  longlong local_808;
  undefined8 uStack_800;
  double ***local_7f8;
  double ***pppdStack_7f0;
  code ***local_7e8;
  double ***local_7d8;
  double **ppdStack_7d0;
  double local_7c8;
  double local_7b8;
  code ***local_7b0;
  double dStack_7a8;
  double dStack_7a0;
  double local_798;
  double local_790;
  code ****local_788;
  double *pdStack_780;
  undefined1 *puStack_778;
  double dStack_770;
  double ***local_768;
  double *pdStack_760;
  undefined8 *local_758;
  double *local_750;
  int *local_748;
  code ***local_468;
  double adStack_460 [95];
  double **local_168;
  double dStack_160;
  double local_158;
  code ****local_150;
  double *pdStack_148;
  undefined1 *local_140;
  double local_138;
  double ***pppdStack_130;
  double local_128;
  double dStack_120;
  undefined4 local_118;
  undefined1 local_114;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_b88;
  dVar27 = -*param_2;
  dVar30 = -param_2[1];
  dVar29 = param_2[2] * -1.0;
  dVar31 = param_2[3] * 1.0;
  dVar33 = *param_4;
  dVar34 = param_4[1];
  dVar35 = param_4[2];
  dVar39 = param_4[3];
  dVar55 = param_2[1];
  dVar26 = param_2[1];
  local_8e8[0] = dVar34 * dVar29 * -1.0 +
                 ((dVar33 * dVar31 - *param_2 * dVar39 * 1.0) - dVar35 * dVar55);
  local_8e8[1] = dVar33 * dVar29 * 1.0 +
                 ((dVar34 * dVar31 - *param_2 * dVar35 * -1.0) - dVar39 * dVar26);
  dVar55 = dVar39 * dVar29 * 1.0 + dVar55 * dVar33 + (dVar31 * dVar35 - *param_2 * dVar34 * 1.0);
  dVar26 = dVar35 * dVar29 * -1.0 + dVar26 * dVar34 + (dVar31 * dVar39 - *param_2 * dVar33 * -1.0);
  dVar39 = param_4[6] - param_2[6];
  dVar33 = param_4[4] - param_2[4];
  dVar34 = param_4[5] - param_2[5];
  dVar47 = dVar30 * dVar39 - dVar34 * dVar29;
  dVar47 = dVar47 + dVar47;
  dVar51 = dVar27 * dVar34 - dVar33 * dVar30;
  dVar51 = dVar51 + dVar51;
  dVar35 = dVar29 * dVar33 - dVar39 * dVar27;
  dVar35 = dVar35 + dVar35;
  local_b08 = (code ***)CONCAT71(local_b08._1_7_,*(undefined1 *)((longlong)param_1 + 0x1c));
  local_8b8 = (dVar27 * dVar35 - dVar47 * dVar30) + dVar31 * dVar51 + dVar39;
  local_afc = *(float *)(param_6 + 0x18);
  dStack_8c0 = (dVar29 * dVar47 - dVar51 * dVar27) + dVar31 * dVar35 + dVar34;
  local_b0c = *(float *)(param_6 + 0x1c);
  local_8c8 = (dVar30 * dVar51 - dVar35 * dVar29) + dVar31 * dVar47 + dVar33;
  local_aa8 = (double)local_afc;
  local_a90 = (double)local_b0c;
  local_8d8._8_4_ = SUB84(dVar26,0);
  local_8d8._0_8_ = dVar55;
  local_8d8._12_4_ = (int)((ulonglong)dVar26 >> 0x20);
  uStack_8b0 = 0;
  local_8a8 = 0x3ff0000000000000;
  uStack_8a0 = 0x3ff0000000000000;
  local_898 = 0x3ff0000000000000;
  uStack_890 = 0;
  if (DAT_14c75f015 == '\0') {
    *(undefined4 *)(param_6 + 0x330) = 0;
  }
  local_8f0 = 0.0;
  local_8f4 = (undefined1  [4])0xffffffff;
  local_8f8 = -1;
  pppdVar15 = (double ***)(param_6 + 0x250);
  dStack_120 = 1.79769313486232e+308;
  local_118 = 0xffffffff;
  local_114 = 0;
  ppppcVar48 = (code ****)(double)_DAT_14c75f068;
  local_ad8._0_8_ = (double)DAT_14c75f06c;
  local_ae8._0_8_ = param_3;
  local_ac8 = param_1;
  local_aa0 = param_2;
  local_a98 = param_4;
  local_888 = (double **)param_3;
  local_880 = local_a90;
  local_878 = param_1;
  local_870 = local_aa8;
  if (DAT_14c992dd0 != '\x01') {
    pdStack_780 = &local_790;
    local_790 = 0.0;
    local_798 = 0.0;
    local_788 = (code ****)&local_878;
    puStack_778 = local_8f4;
    local_9b8 = -local_8e8[0];
    dStack_9b0 = -local_8e8[1];
    local_9a8._8_4_ = SUB84(dVar26 * 1.0,0);
    local_9a8._0_8_ = dVar55 * -1.0;
    local_9a8._12_4_ = (int)((ulonglong)(dVar26 * 1.0) >> 0x20);
    local_7b0 = (code ***)0xbff0000000000000;
    dStack_7a8 = 0.0;
    dStack_7a0 = 0.0;
    local_108 = 0;
    uStack_100 = 0;
    local_f8 = 0;
    ppppdStack_b60 = (double ****)&local_7b8;
    local_7b8 = 3.4028234663852886e+38;
    local_b68 = (double ***)&local_7b0;
    local_b58 = ppppcVar48;
    FUN_144917018(pppdVar15,local_8e8,&local_108,&local_468);
    dVar55 = -dStack_7a0;
    pppdVar52 = (double ***)((ulonglong)local_7b0 ^ 0x8000000000000000);
    ppdVar54 = (double **)((ulonglong)dStack_7a8 ^ 0x8000000000000000);
    local_a78 = local_870;
    local_ab8 = local_880;
    pppdStack_ab0 = (double ***)0x0;
    local_a68 = local_870 + local_880;
    iVar16 = 0x1e;
    dVar26 = local_7b8;
LAB_140a036db:
    dVar34 = dStack_7a0;
    dVar33 = dStack_7a8;
    pppcVar5 = local_7b0;
    local_758 = (undefined8 *)-dStack_7a0;
    local_768 = (double ***)((ulonglong)local_7b0 ^ 0x8000000000000000);
    pdStack_760 = (double *)-dStack_7a8;
    local_b68 = (double ***)pdStack_780;
    ppppdStack_b60 = (double ****)puStack_778;
    local_af8 = dVar26;
    FUN_144916780(*local_788,&local_7d8,&local_768,local_788[1]);
    dVar26 = local_9b8 * dVar33 - (double)pppcVar5 * dStack_9b0;
    dVar35 = (double)local_9a8._0_8_ * (double)pppcVar5 - dVar34 * local_9b8;
    dVar39 = dStack_9b0 * dVar34 - dVar33 * (double)local_9a8._0_8_;
    dVar26 = dVar26 + dVar26;
    dVar35 = dVar35 + dVar35;
    dVar39 = dVar39 + dVar39;
    local_758 = (undefined8 *)
                ((local_9b8 * dVar35 - dVar39 * dStack_9b0) +
                (double)local_9a8._8_8_ * dVar26 + dVar34);
    pdStack_760 = (double *)
                  (((double)local_9a8._0_8_ * dVar39 - dVar26 * local_9b8) +
                  (double)local_9a8._8_8_ * dVar35 + dVar33);
    local_768 = (double ***)
                ((dStack_9b0 * dVar26 - dVar35 * (double)local_9a8._0_8_) +
                dVar39 * (double)local_9a8._8_8_ + (double)pppcVar5);
    ppppdStack_b60 = (double ****)&local_8f8;
    local_b68 = (double ***)&local_798;
    FUN_144916780(local_888[5],&local_7f8,&local_768,local_880);
    dVar33 = local_790;
    dVar34 = local_798;
    dVar26 = (double)pppdStack_7f0 * local_8e8[0] - (double)local_7f8 * local_8e8[1];
    dVar35 = (double)local_7e8 * local_8e8[1] - (double)pppdStack_7f0 * (double)local_8d8._0_8_;
    dVar39 = (double)local_7f8 * (double)local_8d8._0_8_ - local_8e8[0] * (double)local_7e8;
    dVar35 = dVar35 + dVar35;
    dVar39 = dVar39 + dVar39;
    dVar26 = dVar26 + dVar26;
    lVar9 = (longlong)(int)(uint)local_108;
    *(double *)(param_6 + 0x260 + lVar9 * 0x18) = local_7c8;
    pppdVar15[lVar9 * 3] = (double **)local_7d8;
    (pppdVar15 + lVar9 * 3)[1] = ppdStack_7d0;
    *(code ****)(param_6 + 0x2c0 + lVar9 * 0x18) = local_7e8;
    ppppdVar1 = (double ****)(param_6 + 0x2b0) + lVar9 * 3;
    *ppppdVar1 = local_7f8;
    ppppdVar1[1] = pppdStack_7f0;
    *(uint *)((longlong)&local_108 + lVar9 * 4 + 4) = (uint)local_108;
    local_108 = CONCAT44(local_108._4_4_,(uint)local_108 + 1);
    (&local_468)[lVar9 * 3] =
         (code ***)
         ((double)local_7d8 -
         ((dVar26 * local_8e8[1] - dVar39 * (double)local_8d8._0_8_) +
          (double)local_8d8._8_8_ * dVar35 + (double)local_7f8 + local_8c8));
    adStack_460[lVar9 * 3] =
         (double)ppdStack_7d0 -
         (((double)local_8d8._0_8_ * dVar35 - local_8e8[0] * dVar26) +
          (double)local_8d8._8_8_ * dVar39 + (double)pppdStack_7f0 + dStack_8c0);
    adStack_460[lVar9 * 3 + 1] =
         local_7c8 -
         (dVar26 * (double)local_8d8._8_8_ + (double)local_7e8 +
          (dVar39 * local_8e8[0] - dVar35 * local_8e8[1]) + local_8b8);
    local_b68 = pppdVar15;
    ppppdStack_b60 = (double ****)(param_6 + 0x2b0);
    FUN_1449162b1(&local_7b0,&local_468,&local_108,param_6 + 0x310);
    uVar23 = 0;
    dVar26 = SQRT(dStack_7a0 * dStack_7a0 +
                  (double)local_7b0 * (double)local_7b0 + dStack_7a8 * dStack_7a8);
    if ((double)ppppcVar48 <= dVar26) goto code_r0x000140a03a7a;
    uVar23 = 0;
    *(uint *)(param_6 + 0x330) = (uint)local_108;
    local_808 = 0;
    uStack_800 = 0;
    local_818 = 0;
    uStack_810 = 0;
    FUN_140268ec4(&local_808,8);
    FUN_140268ec4(&local_818,8);
    dVar35 = local_ab8;
    if (0 < (int)(uint)local_108) {
      pdVar38 = (double *)(param_6 + 0x2c0);
      lVar9 = 0;
      do {
        uVar14 = uStack_800;
        lVar11 = (longlong)(int)uStack_800;
        uVar8 = (int)uStack_800 + 1;
        uStack_800 = CONCAT44(uStack_800._4_4_,uVar8);
        if (uStack_800._4_4_ < uVar8) {
          FUN_14026a4e8(&local_808,uVar14 & 0xffffffff);
        }
        uVar14 = uStack_810;
        *(double *)(local_808 + 0x10 + lVar11 * 0x18) = pdVar38[-0xc];
        dVar39 = pdVar38[-0xd];
        pdVar18 = (double *)(local_808 + lVar11 * 0x18);
        *pdVar18 = pdVar38[-0xe];
        pdVar18[1] = dVar39;
        dVar39 = pdVar38[-2];
        dVar27 = pdVar38[-1];
        dVar30 = dVar27 * local_8e8[0] - dVar39 * local_8e8[1];
        dVar29 = *pdVar38 * local_8e8[1] - dVar27 * (double)local_8d8._0_8_;
        dVar31 = dVar39 * (double)local_8d8._0_8_ - local_8e8[0] * *pdVar38;
        dVar29 = dVar29 + dVar29;
        dVar31 = dVar31 + dVar31;
        dVar30 = dVar30 + dVar30;
        dVar47 = (dVar30 * local_8e8[1] - dVar31 * (double)local_8d8._0_8_) +
                 (double)local_8d8._8_8_ * dVar29 + dVar39 + local_8c8;
        dVar27 = ((double)local_8d8._0_8_ * dVar29 - local_8e8[0] * dVar30) +
                 (double)local_8d8._8_8_ * dVar31 + dVar27 + dStack_8c0;
        dVar39 = dVar30 * (double)local_8d8._8_8_ + *pdVar38 +
                 (dVar31 * local_8e8[0] - dVar29 * local_8e8[1]) + local_8b8;
        lVar11 = (longlong)(int)uStack_810;
        uVar8 = (int)uStack_810 + 1;
        uStack_810 = CONCAT44(uStack_810._4_4_,uVar8);
        if (uStack_810._4_4_ < uVar8) {
          FUN_14026a4e8(&local_818,uVar14 & 0xffffffff);
        }
        pdVar18 = (double *)(local_818 + lVar11 * 0x18);
        *pdVar18 = dVar47;
        pdVar18[1] = dVar27;
        *(double *)(local_818 + 0x10 + lVar11 * 0x18) = dVar39;
        lVar9 = lVar9 + 1;
        pdVar38 = pdVar38 + 3;
      } while (lVar9 < (int)(uint)local_108);
    }
    local_af8 = dVar33;
    if (dVar33 <= dVar34) {
      local_af8 = dVar34;
    }
    local_768 = &local_888;
    pdStack_760 = local_8e8;
    local_758 = &local_9b8;
    local_750 = &local_798;
    local_748 = &local_8f8;
    ppppdStack_848 = (double ****)&local_788;
    local_850 = (double **)FUN_141726bfc;
    local_868 = (code ****)FUN_141726c66;
    local_b48 = (code ***)local_ad8._0_8_;
    local_b50 = &local_838;
    local_b58 = (code ****)&local_7f8;
    ppppdStack_b60 = &local_7d8;
    local_b68 = &local_820;
    ppppcStack_860 = (code ****)&local_768;
    uVar8 = FUN_144918d86(&local_808);
    dVar34 = local_7c8;
    pppdVar15 = local_ac8;
    dVar33 = local_af8;
    if (1 < uVar8) {
      if (uVar8 == 3) {
        uVar23 = 0x80000000;
        dVar26 = -(double)local_820;
        dVar55 = local_7c8;
        pppdVar52 = local_7d8;
        ppdVar54 = ppdStack_7d0;
      }
      if (local_818 != 0) {
        FUN_1400020a8();
      }
      if (local_808 != 0) {
        FUN_1400020a8();
      }
      goto LAB_140a03b0b;
    }
    dVar33 = -local_8e8[0];
    dVar39 = -local_8e8[1];
    dVar26 = (double)local_8d8._0_8_ * -1.0;
    dVar55 = (double)local_8d8._8_8_ * 1.0;
    dVar31 = (double)ppdStack_7d0 * dVar33 - (double)local_7d8 * dVar39;
    dVar47 = local_7c8 * dVar39 - (double)ppdStack_7d0 * dVar26;
    dVar51 = (double)local_7d8 * dVar26 - local_7c8 * dVar33;
    dVar47 = dVar47 + dVar47;
    dVar51 = dVar51 + dVar51;
    dVar31 = dVar31 + dVar31;
    dVar44 = dVar55 * dVar47 + (double)local_7d8;
    dVar49 = dVar55 * dVar51 + (double)ppdStack_7d0;
    dVar37 = local_8e8[0] * dVar31;
    local_a68 = (double)local_820 + local_a78;
    local_850 = (double **)(local_a78 * (double)local_7d8 + (double)local_7f8);
    local_840 = local_a78 * local_7c8 + (double)local_7e8;
    ppppdStack_848 = (double ****)(local_a78 * (double)ppdStack_7d0 + (double)pppdStack_7f0);
    dVar40 = ((double)local_838 - (double)local_7d8 * dVar35) - local_8c8;
    dVar42 = (dStack_830 - (double)ppdStack_7d0 * dVar35) - dStack_8c0;
    dVar50 = (local_828 - dVar35 * local_7c8) - local_8b8;
    dVar27 = dVar42 * dVar33 - dVar39 * dVar40;
    dVar30 = dVar50 * dVar39 - dVar26 * dVar42;
    dVar29 = dVar40 * dVar26 - dVar50 * dVar33;
    dVar30 = dVar30 + dVar30;
    dVar29 = dVar29 + dVar29;
    dVar27 = dVar27 + dVar27;
    local_858 = (undefined1 *)(dVar27 * dVar55 + dVar50 + (dVar29 * dVar33 - dVar30 * dVar39));
    local_868 = (code ****)((dVar27 * dVar39 - dVar29 * dVar26) + dVar55 * dVar30 + dVar40);
    ppppcStack_860 = (code ****)(local_8e8[0] * dVar27 + dVar26 * dVar30 + dVar55 * dVar29 + dVar42)
    ;
    local_8f0 = local_af8;
    lVar9 = local_ae8._0_8_;
    if (local_818 != 0) {
      FUN_1400020a8();
    }
    bVar19 = (byte)local_b08;
    if (local_808 != 0) {
      FUN_1400020a8();
    }
    puVar41 = (undefined8 *)(dVar34 + dVar31 * dVar55 + (dVar51 * dVar33 - dVar47 * dVar39));
    pppdVar36 = (double ***)((dVar31 * dVar39 - dVar51 * dVar26) + dVar44);
    pdVar38 = (double *)(dVar37 + dVar26 * dVar47 + dVar49);
    dStack_120 = dVar35 + local_a68;
    goto LAB_140a03d65;
  }
  local_b30 = &local_8f0;
  local_b40 = &local_8f8;
  local_b48 = (code ***)local_8f4;
  local_b50 = (code ****)&local_768;
  local_b58 = &local_468;
  ppppdStack_b60 = (double ****)&local_868;
  local_b68 = &local_850;
  local_b38 = pppdVar15;
  local_b28 = ppppcVar48;
  local_b20 = (double)DAT_14c75f06c;
  FUN_146cf8cf5(&local_878,&local_888,local_8e8,&local_9b8);
  pppdVar15 = local_ac8;
  lVar9 = local_ae8._0_8_;
  bVar19 = (byte)local_b08;
  puVar41 = local_758;
  pppdVar36 = local_768;
  pdVar38 = pdStack_760;
  dStack_120 = local_9b8;
LAB_140a03d65:
  auVar4 = _DAT_149931e80;
  local_158 = local_840;
  local_168 = local_850;
  dStack_160 = (double)ppppdStack_848;
  local_150 = local_868;
  pdStack_148 = (double *)ppppcStack_860;
  local_140 = local_858;
  uVar14 = DAT_149931e80;
  uVar17 = DAT_149931e80._8_8_;
  local_138 = (double)((ulonglong)pppdVar36 ^ uVar14);
  pppdStack_130 = (double ***)((ulonglong)pdVar38 ^ uVar17);
  local_128 = (double)((ulonglong)puVar41 ^ uVar14);
  dStack_120 = (double)((ulonglong)dStack_120 ^ uVar17);
  if (((local_8f4 != (undefined1  [4])0xffffffff) && (local_8f8 != -1)) &&
     ((DAT_14c992bf8 != '\x01' || (cVar6 = FUN_146d68bdc(param_6,&local_168), cVar6 == '\0')))) {
    *(undefined4 *)(param_6 + 0x16c) = 0xffffffff;
    if (*(int *)(param_6 + 0x5b4) < 0) {
      *(undefined4 *)(param_6 + 0x5b0) = 0;
      FUN_1404b2356(param_6 + 0x3f8,0);
    }
    else {
      *(undefined4 *)(param_6 + 0x5b0) = 0;
    }
    if (*(int *)(param_6 + 0x634) < 0) {
      *(undefined4 *)(param_6 + 0x630) = 0;
      FUN_146d72a40(param_6 + 0x5b8,0);
    }
    else {
      *(undefined4 *)(param_6 + 0x630) = 0;
    }
    dVar33 = dStack_120;
    dVar55 = local_128;
    pppdVar52 = pppdStack_130;
    dVar26 = local_138;
    *(undefined4 *)(param_6 + 0x230) = 0;
    uVar2 = *(ushort *)(param_6 + 0x374);
    *(ushort *)(param_6 + 0x374) = uVar2 & 0xffcf;
    if (dStack_120 <= (double)*(float *)(param_6 + 300) + local_8f0) {
      auVar3._8_8_ = pppdStack_130;
      auVar3._0_8_ = local_138;
      dVar35 = (double)pppdStack_130 * local_8e8[0] - local_138 * local_8e8[1];
      dVar39 = local_128 * local_8e8[1] - (double)pppdStack_130 * (double)local_8d8._0_8_;
      dVar27 = local_138 * (double)local_8d8._0_8_ - local_8e8[0] * local_128;
      dVar30 = (double)local_8d8._8_8_ * 0.0 - (double)local_8d8._8_8_ * 0.0;
      dVar39 = dVar39 + dVar39;
      dVar27 = dVar27 + dVar27;
      dVar35 = dVar35 + dVar35;
      dVar29 = dVar35 * (double)local_8d8._8_8_ + local_128 +
               (dVar27 * local_8e8[0] - dVar39 * local_8e8[1]);
      dVar34 = (dVar35 * local_8e8[1] - dVar27 * (double)local_8d8._0_8_) +
               (double)local_8d8._8_8_ * dVar39 + local_138;
      pppdVar36 = (double ***)
                  (((double)local_8d8._0_8_ * dVar39 - local_8e8[0] * dVar35) +
                  (double)local_8d8._8_8_ * dVar27 + (double)pppdStack_130);
      local_928 = local_168;
      dStack_920 = dStack_160;
      local_918 = local_158;
      local_b68 = (double ***)CONCAT44(local_b68._4_4_,local_8f4);
      local_910 = dVar34;
      pppdStack_908 = pppdVar36;
      local_900 = dVar29;
      iVar16 = FUN_144918249(pppdVar15,&local_928,&local_910,local_aa8);
      if (iVar16 != -1) {
        bVar19 = bVar19 & 0x3f;
        ppdVar54 = pppdVar15[4];
        lVar11 = (longlong)iVar16;
        dStack_7a0 = (double)*(float *)((longlong)ppdVar54 + lVar11 * 0x18 + 0x14);
        dStack_7a8 = (double)*(float *)(ppdVar54 + lVar11 * 3 + 2);
        local_7b0 = (code ***)(double)*(float *)((longlong)ppdVar54 + lVar11 * 0x18 + 0xc);
        if (bVar19 == 3) {
          local_af8 = -3.4028234663852886e+38;
          dStack_af0 = 0.0;
        }
        else {
          local_af8 = ABS((-dVar34 * (double)local_7b0 - dStack_7a8 * (double)pppdVar36) -
                          dStack_7a0 * dVar29);
          dStack_af0 = ABS(-(double)pppdVar36);
        }
        fVar21 = *(float *)(ppdVar54 + lVar11 * 3 + 1);
        uVar23 = *(undefined4 *)(ppdVar54 + lVar11 * 3);
        local_b08 = (code ***)
                    CONCAT44(local_b08._4_4_,*(undefined4 *)((longlong)ppdVar54 + lVar11 * 0x18 + 4)
                            );
        local_930 = (ulonglong)dVar55 ^ uVar14;
        uStack_938 = (ulonglong)pppdVar52 ^ uVar14;
        local_a38 = auVar3 ^ auVar4;
        local_a28._8_4_ = auVar4._8_4_;
        local_a28._0_8_ = uStack_938;
        local_a28._12_4_ = auVar4._12_4_;
        local_940 = local_a38._0_8_;
        local_ad8._8_8_ = uVar17;
        local_ad8._0_8_ = local_930;
        local_958 = local_150;
        pdStack_950 = pdStack_148;
        local_948 = local_140;
        local_b68 = (double ***)CONCAT44(local_b68._4_4_,local_8f8);
        iVar7 = FUN_140a05dc3(lVar9,&local_958,&local_940,local_a90);
        if (iVar7 != -1) {
          local_ae8._0_4_ = uVar23;
          lVar11 = *(longlong *)(*(longlong *)(lVar9 + 0x28) + 0x20);
          lVar12 = (longlong)iVar7;
          local_7c8 = (double)*(float *)(lVar11 + 0x14 + lVar12 * 0x18);
          ppdStack_7d0 = (double **)(double)*(float *)(lVar11 + 0x10 + lVar12 * 0x18);
          local_7d8 = (double ***)(double)*(float *)(lVar11 + 0xc + lVar12 * 0x18);
          dVar35 = ABS(local_7c8 * dVar55 +
                       (double)local_7d8 * dVar26 + (double)ppdStack_7d0 * (double)pppdVar52);
          if ((ABS(local_af8 + -1.0) <= (double)_DAT_14c75f018) ||
             (ABS(dVar35 + -1.0) <= (double)_DAT_14c75f018)) {
            dVar35 = dVar35 + 0.0020000000949949026;
            ppppcVar48 = (code ****)&local_7d8;
            local_a00 = dVar26;
            local_a10 = dVar55;
            local_a08 = pppdVar52;
            if (dVar35 <= local_af8) {
              ppppcVar48 = &local_7b0;
              local_a00 = dVar34;
              local_a10 = dVar29;
              local_a08 = pppdVar36;
            }
            local_7e8 = ppppcVar48[2];
            local_7f8 = (double ***)*ppppcVar48;
            pppdStack_7f0 = (double ***)ppppcVar48[1];
            local_b0c = fVar21;
            if (local_af8 < dVar35) {
              local_ae8._0_4_ = *(undefined4 *)(lVar11 + lVar12 * 0x18);
              local_b08 = (code ***)
                          CONCAT44(local_b08._4_4_,*(undefined4 *)(lVar11 + 4 + lVar12 * 0x18));
              local_b0c = *(float *)(lVar11 + 8 + lVar12 * 0x18);
            }
            local_850 = (double **)((ulonglong)local_850 & 0xffffffff00000000);
            uStack_a70 = 0;
            local_a88 = dVar55;
            uStack_a80 = 0;
            local_a48 = pppdVar52;
            uStack_a40 = 0;
            local_ac8 = pppdVar36;
            pppdStack_ac0 = pppdVar36;
            local_ab8 = dVar34;
            pppdStack_ab0 = pppdVar36;
            local_a78 = dVar35;
            local_a58 = auVar3;
            if (dVar35 <= local_af8) {
              pdVar38 = local_8e8;
              pdVar18 = (double *)&local_9b8;
              for (lVar11 = 0xc; lVar11 != 0; lVar11 = lVar11 + -1) {
                *pdVar18 = *pdVar38;
                pdVar38 = pdVar38 + 1;
                pdVar18 = pdVar18 + 1;
              }
              local_b48 = (code ***)&local_850;
              local_b50 = (code ****)&local_768;
              local_b58 = &local_468;
              ppppdStack_b60 = &local_7f8;
              local_b68 = (double ***)CONCAT44(local_b68._4_4_,iVar7);
              lVar9 = FUN_140a0686f(pppdVar15,lVar9,&local_9b8,iVar16);
            }
            else {
              dVar45 = -*local_a98;
              dVar46 = -local_a98[1];
              dVar42 = local_a98[2] * -1.0;
              dVar43 = local_a98[3] * 1.0;
              dVar27 = *local_aa0;
              dVar31 = local_aa0[1];
              dVar47 = local_aa0[2];
              dVar51 = local_aa0[3];
              dVar33 = local_a98[1];
              dVar39 = local_a98[1];
              local_9b8 = dVar31 * dVar42 * -1.0 +
                          ((dVar27 * dVar43 - *local_a98 * dVar51 * 1.0) - dVar47 * dVar33);
              dStack_9b0 = dVar27 * dVar42 * 1.0 +
                           ((dVar31 * dVar43 - *local_a98 * dVar47 * -1.0) - dVar51 * dVar39);
              dVar40 = local_aa0[6] - local_a98[6];
              dVar49 = local_aa0[4] - local_a98[4];
              dVar50 = local_aa0[5] - local_a98[5];
              dVar53 = dVar46 * dVar40 - dVar50 * dVar42;
              dVar53 = dVar53 + dVar53;
              dVar44 = dVar45 * dVar50 - dVar49 * dVar46;
              dVar44 = dVar44 + dVar44;
              dVar37 = dVar42 * dVar49 - dVar40 * dVar45;
              dVar37 = dVar37 + dVar37;
              local_988 = (dVar45 * dVar37 - dVar53 * dVar46) + dVar43 * dVar44 + dVar40;
              dStack_990 = (dVar42 * dVar53 - dVar44 * dVar45) + dVar43 * dVar37 + dVar50;
              local_998 = (dVar46 * dVar44 - dVar37 * dVar42) + dVar43 * dVar53 + dVar49;
              local_9a8._8_8_ =
                   dVar47 * dVar42 * -1.0 +
                   dVar39 * dVar31 + (dVar43 * dVar51 - *local_a98 * dVar27 * -1.0);
              local_9a8._0_8_ =
                   dVar51 * dVar42 * 1.0 +
                   dVar33 * dVar27 + (dVar43 * dVar47 - *local_a98 * dVar31 * 1.0);
              uStack_980 = 0;
              local_978 = 0x3ff0000000000000;
              uStack_970 = 0x3ff0000000000000;
              local_968 = 0x3ff0000000000000;
              uStack_960 = 0;
              local_b48 = (code ***)&local_850;
              local_b50 = (code ****)&local_768;
              local_b58 = &local_468;
              ppppdStack_b60 = &local_7f8;
              local_b68 = (double ***)CONCAT44(local_b68._4_4_,iVar16);
              lVar9 = FUN_140a06095(lVar9,pppdVar15,&local_9b8,iVar7);
            }
            ppdVar54 = local_850;
            uVar17 = (ulonglong)local_850 & 0xffffffff;
            if (uVar17 == 4) {
              bVar20 = dVar35 <= local_af8;
              puStack_778 = *(undefined1 **)(lVar9 + 0x28);
              local_788 = *(code *****)(lVar9 + 0x18);
              pdStack_780 = *(double **)(lVar9 + 0x20);
              *(undefined8 *)(lVar9 + 0x18) = *(undefined8 *)(lVar9 + 0x30);
              *(undefined8 *)(lVar9 + 0x20) = *(undefined8 *)(lVar9 + 0x38);
              *(undefined8 *)(lVar9 + 0x28) = *(undefined8 *)(lVar9 + 0x40);
              *(code *****)(lVar9 + 0x30) = local_788;
              *(double **)(lVar9 + 0x38) = pdStack_780;
              *(undefined1 **)(lVar9 + 0x40) = puStack_778;
              uVar17 = 4;
              local_ac8 = pppdVar36;
              pppdStack_ac0 = pppdVar36;
            }
            else {
              if (4 < (uint)local_850) {
                local_838 = (code ***)0x0;
                dStack_830 = 0.0;
                local_828 = 1.0;
                FUN_140269010(&local_788,&local_7f8);
                lVar11 = 0;
                do {
                  dVar26 = *(double *)(lVar9 + lVar11);
                  dVar55 = *(double *)(lVar9 + 8 + lVar11);
                  dVar33 = *(double *)(lVar9 + 0x10 + lVar11);
                  dVar35 = (double)pdStack_780 * dVar33 +
                           dVar55 * (double)(uVar14 ^ (ulonglong)puStack_778);
                  dVar35 = dVar35 + dVar35;
                  dVar39 = (double)local_788 * dVar55 +
                           dVar26 * (double)((ulonglong)pdStack_780 ^ uVar14);
                  dVar39 = dVar39 + dVar39;
                  dVar34 = (double)puStack_778 * dVar26 +
                           dVar33 * (double)((ulonglong)local_788 ^ uVar14);
                  dVar34 = dVar34 + dVar34;
                  *(double *)(lVar9 + lVar11) =
                       dVar34 * (double)(uVar14 ^ (ulonglong)puStack_778) +
                       (double)pdStack_780 * dVar39 + dStack_770 * dVar35 + dVar26;
                  *(double *)(lVar9 + 8 + lVar11) =
                       dVar39 * (double)((ulonglong)local_788 ^ uVar14) +
                       (double)puStack_778 * dVar35 + dStack_770 * dVar34 + dVar55;
                  *(double *)(lVar9 + 0x10 + lVar11) =
                       (double)local_788 * dVar34 +
                       dVar35 * (double)((ulonglong)pdStack_780 ^ uVar14) +
                       dStack_770 * dVar39 + dVar33;
                  lVar11 = lVar11 + 0x18;
                } while (uVar17 * 0x18 != lVar11);
                uVar8 = FUN_1402695a1(lVar9,(ulonglong)ppdVar54 & 0xffffffff);
                uVar17 = (ulonglong)uVar8;
                if (uVar8 != 0) {
                  dVar55 = -(double)pdStack_780;
                  dVar26 = (double)puStack_778 * -1.0;
                  dStack_770 = dStack_770 * 1.0;
                  lVar11 = 0;
                  do {
                    dVar33 = *(double *)(lVar9 + lVar11);
                    dVar34 = *(double *)(lVar9 + 8 + lVar11);
                    dVar35 = *(double *)(lVar9 + 0x10 + lVar11);
                    dVar27 = dVar55 * dVar35 + dVar34 * -dVar26;
                    dVar27 = dVar27 + dVar27;
                    dVar31 = -(double)local_788 * dVar34 + dVar33 * -dVar55;
                    dVar31 = dVar31 + dVar31;
                    dVar39 = dVar26 * dVar33 + dVar35 * (double)local_788;
                    dVar39 = dVar39 + dVar39;
                    *(double *)(lVar9 + lVar11) =
                         dVar39 * -dVar26 + dVar55 * dVar31 + dStack_770 * dVar27 + dVar33;
                    *(double *)(lVar9 + 8 + lVar11) =
                         dVar31 * (double)local_788 + dVar26 * dVar27 + dStack_770 * dVar39 + dVar34
                    ;
                    *(double *)(lVar9 + 0x10 + lVar11) =
                         -(double)local_788 * dVar39 + dVar27 * -dVar55 +
                         dStack_770 * dVar31 + dVar35;
                    lVar11 = lVar11 + 0x18;
                  } while ((ulonglong)(uVar8 * 8) * 3 != lVar11);
                }
                dVar55 = local_a88;
                dVar35 = local_a78;
                pppdVar52 = local_a48;
                dVar26 = (double)local_a58._0_8_;
                dVar34 = local_ab8;
                pppdVar36 = pppdStack_ab0;
              }
              bVar20 = dVar35 <= local_af8;
              if ((int)uVar17 == 0) goto LAB_140a04abb;
            }
            local_a68 = (double)-(ulonglong)(dVar35 <= local_af8);
            dStack_a60 = dStack_af0;
            local_ad8._8_8_ =
                 ~(ulonglong)dStack_af0 & local_ad8._8_8_ |
                 (ulonglong)(dVar30 + dVar30) & (ulonglong)dStack_af0;
            local_ad8._0_8_ =
                 ~(ulonglong)local_a68 & local_ad8._0_8_ | (ulonglong)dVar29 & (ulonglong)local_a68;
            local_ab8 = dVar34;
            pppdStack_ab0 = pppdVar36;
            if (local_af8 < dVar35) {
              local_ac8 = (double ***)local_a28._0_8_;
              pppdStack_ac0 = (double ***)local_a28._8_8_;
              local_ab8 = (double)local_a38._0_8_;
              pppdStack_ab0 = (double ***)local_a38._8_8_;
            }
            local_a90 = (double)(float)local_ae8._0_4_;
            local_a98 = (double *)(double)local_b08._0_4_;
            local_aa0 = (double *)(double)local_b0c;
            lVar11 = param_6 + 0x3f8;
            local_b0c = (float)dVar55;
            local_afc = (float)(double)pppdVar52;
            local_a88 = (double)CONCAT44(local_a88._4_4_,(float)dVar26);
            local_a48 = local_7f8;
            local_b08 = local_7e8;
            uStack_9d4 = local_9b8._4_4_ ^ 0x80000000;
            local_9e8 = -dStack_9b0;
            local_a38._8_8_ = dStack_990;
            local_a38._0_8_ = local_998;
            local_9f8 = (double)local_9a8._0_8_ * -1.0;
            dStack_9f0 = (double)local_9a8._8_8_ * 1.0;
            local_9c8 = local_988;
            uStack_9c0 = uStack_980;
            local_ae8._8_4_ = SUB84(dStack_9f0,0);
            local_ae8._0_8_ = dStack_9f0;
            local_ae8._12_4_ = (int)((ulonglong)dStack_9f0 >> 0x20);
            local_9d8 = (undefined4)local_9b8;
            local_a28._0_8_ = (ulonglong)local_9b8 ^ 0x8000000000000000;
            local_a28._8_8_ = local_9e8;
            lVar12 = 0;
            local_a58._0_8_ = pppdStack_7f0;
            pppdVar15 = pppdStack_7f0;
            dStack_9e0 = local_9f8;
            dStack_9d0 = dStack_9f0;
            do {
              dVar55 = *(double *)(lVar9 + lVar12);
              dVar33 = ((double *)(lVar9 + lVar12))[1];
              dVar26 = *(double *)(lVar9 + 0x10 + lVar12);
              if (bVar19 == 3) {
                dVar55 = dVar55 - local_a00 * local_aa8;
                dVar33 = dVar33 - (double)local_a08 * local_aa8;
                dVar26 = dVar26 - local_a10 * local_aa8;
              }
              dVar47 = (dVar26 - (double)local_aa0) * (double)local_b08 +
                       (dVar55 - local_a90) * (double)local_a48 +
                       (dVar33 - (double)local_a98) * (double)pppdVar15;
              dVar31 = dVar55 - (double)local_a48 * dVar47;
              dVar34 = dVar55 - (double)local_a38._0_8_;
              dVar35 = dVar33 - (double)local_a38._8_8_;
              dVar51 = dVar26 - local_9c8;
              dVar27 = dVar35 * (double)local_a28._0_8_ - dVar34 * local_9e8;
              dVar30 = dVar51 * (double)local_a28._8_8_ - dVar35 * dStack_9e0;
              dVar29 = dVar34 * local_9f8 - dVar51 * (double)CONCAT44(uStack_9d4,local_9d8);
              dVar30 = dVar30 + dVar30;
              dVar29 = dVar29 + dVar29;
              dVar27 = dVar27 + dVar27;
              dVar39 = (dVar27 * (double)local_a28._8_8_ - dVar29 * dStack_9e0) +
                       (double)local_ae8._0_8_ * dVar30 + dVar34;
              dVar35 = (local_9f8 * dVar30 - (double)CONCAT44(uStack_9d4,local_9d8) * dVar27) +
                       (double)local_ae8._8_8_ * dVar29 + dVar35;
              dVar34 = dVar31;
              if (local_af8 < local_a78) {
                dVar34 = dVar39;
              }
              dVar49 = dVar33 - (double)pppdVar15 * dVar47;
              dVar44 = dVar49;
              if (local_af8 < local_a78) {
                dVar44 = dVar35;
              }
              dVar47 = dVar26 - dVar47 * (double)local_b08;
              dVar30 = dVar51 + dVar27 * (double)local_ae8._0_8_ +
                       (dVar29 * (double)local_a28._0_8_ - dVar30 * local_9e8);
              dVar27 = dVar30;
              if (local_af8 < local_a78) {
                dVar35 = dVar49;
                dVar39 = dVar31;
                dVar27 = dVar47;
              }
              dVar26 = (dVar47 - dVar26) * (double)local_ad8._0_8_ +
                       (dVar31 - dVar55) * local_ab8 + (dVar49 - dVar33) * (double)local_ac8;
              if ((dVar26 != 1.79769313486232e+308) || (NAN(dVar26))) {
                iVar16 = *(int *)(param_6 + 0x5b0);
                *(uint *)(param_6 + 0x5b0) = iVar16 + 1U;
                if (*(uint *)(param_6 + 0x5b4) < iVar16 + 1U) {
                  FUN_146ce5792(lVar11,iVar16);
                }
                lVar10 = *(longlong *)(param_6 + 0x5a8);
                if (*(longlong *)(param_6 + 0x5a8) == 0) {
                  lVar10 = lVar11;
                }
                lVar13 = (longlong)iVar16 * 0x6c;
                fVar21 = (float)(double)((ulonglong)dVar47 & (ulonglong)local_a68 |
                                        ~(ulonglong)local_a68 & (ulonglong)dVar30);
                fVar22 = (float)dVar44;
                fVar24 = (float)dVar34;
                fVar25 = (float)dVar27;
                fVar28 = (float)dVar35;
                fVar32 = (float)dVar39;
                *(float *)(lVar10 + lVar13) = fVar24;
                *(float *)(lVar10 + 4 + lVar13) = fVar22;
                *(float *)(lVar10 + 8 + lVar13) = fVar21;
                *(float *)(lVar10 + 0xc + lVar13) = fVar32;
                *(float *)(lVar10 + 0x10 + lVar13) = fVar28;
                *(float *)(lVar10 + 0x14 + lVar13) = fVar25;
                *(undefined4 *)(lVar10 + 0x18 + lVar13) = local_a88._0_4_;
                *(float *)(lVar10 + 0x1c + lVar13) = local_afc;
                *(float *)(lVar10 + 0x20 + lVar13) = local_b0c;
                *(float *)(lVar10 + 0x24 + lVar13) = (float)dVar26;
                *(undefined4 *)(lVar10 + 0x28 + lVar13) = 0xffffffff;
                *(char *)(lVar10 + 0x2c + lVar13) = bVar20 * '\x02' + '\x01';
                *(float *)(lVar10 + 0x3c + lVar13) = fVar24;
                *(float *)(lVar10 + 0x40 + lVar13) = fVar22;
                *(float *)(lVar10 + 0x44 + lVar13) = fVar21;
                *(float *)(lVar10 + 0x48 + lVar13) = fVar32;
                *(float *)(lVar10 + 0x4c + lVar13) = fVar28;
                *(float *)(lVar10 + 0x50 + lVar13) = fVar25;
                *(float *)(lVar10 + 0x54 + lVar13) = fVar24;
                *(float *)(lVar10 + 0x58 + lVar13) = fVar22;
                *(float *)(lVar10 + 0x5c + lVar13) = fVar21;
                *(float *)(lVar10 + 0x60 + lVar13) = fVar32;
                *(float *)(lVar10 + 100 + lVar13) = fVar28;
                *(float *)(lVar10 + 0x68 + lVar13) = fVar25;
                *(undefined8 *)(lVar10 + 0x34 + lVar13) = 0;
                *(undefined1 *)(lVar10 + 0x30 + lVar13) = 0;
                lVar10 = *(longlong *)(param_6 + 0x5a8);
                if (*(longlong *)(param_6 + 0x5a8) == 0) {
                  lVar10 = lVar11;
                }
                fVar21 = INFINITY;
                if ((longlong)*(int *)(param_6 + 0x16c) != -1) {
                  fVar21 = *(float *)(lVar10 + 0x24 + (longlong)*(int *)(param_6 + 0x16c) * 0x6c);
                }
                if (*(float *)(lVar10 + 0x24 + lVar13) < fVar21) {
                  *(int *)(param_6 + 0x16c) = iVar16;
                }
              }
              lVar12 = lVar12 + 0x18;
              pppdVar15 = (double ***)local_a58._0_8_;
            } while (uVar17 * 0x18 != lVar12);
          }
          else if ((dVar33 <= 0.0) || (DAT_14c992bf9 == '\0')) {
            local_114 = 2;
            if ((0.0 < local_afc && (uVar2 & 0x40) == 0) || (0.0 < local_b0c && -1 < (char)uVar2)) {
              local_b68 = (double ***)&local_468;
              ppppdStack_b60 = &local_768;
              FUN_1402691ae(pppdVar15,&local_9b8,iVar16,&local_168);
              local_b68 = (double ***)&local_468;
              ppppdStack_b60 = &local_768;
              FUN_1402691ae(*(undefined8 *)(lVar9 + 0x28),&local_788,iVar7,&local_150);
              dVar26 = (double)local_9a8._0_8_;
              if (bVar19 == 3) {
                local_9b8 = local_9b8 - dVar34 * local_aa8;
                dStack_9b0 = dStack_9b0 - (double)pppdVar36 * local_aa8;
                dVar26 = (double)local_9a8._0_8_ - dVar29 * local_aa8;
              }
              dVar34 = local_9b8 - local_8c8;
              dVar35 = dStack_9b0 - dStack_8c0;
              dVar26 = dVar26 - local_8b8;
              dVar39 = -local_8e8[0];
              dVar27 = -local_8e8[1];
              dVar55 = (double)local_8d8._0_8_ * -1.0;
              dVar33 = (double)local_8d8._8_8_ * 1.0;
              dVar31 = dVar34 * dVar55 - dVar39 * dVar26;
              dVar30 = dVar35 * dVar39 - dVar34 * dVar27;
              dVar29 = dVar26 * dVar27 - dVar35 * dVar55;
              dVar29 = dVar29 + dVar29;
              dVar31 = dVar31 + dVar31;
              dVar30 = dVar30 + dVar30;
              dVar33 = ((dVar33 * dVar30 + dVar26 + (dVar31 * dVar39 - dVar29 * dVar27)) -
                       (double)puStack_778) * local_128 +
                       (((dVar30 * dVar27 - dVar31 * dVar55) + dVar33 * dVar29 + dVar34) -
                       (double)local_788) * local_138 +
                       ((local_8e8[0] * dVar30 + dVar55 * dVar29 + dVar33 * dVar31 + dVar35) -
                       (double)pdStack_780) * (double)pppdStack_130;
              if ((double)*(float *)(param_6 + 300) < dVar33) goto LAB_140a04abb;
              dVar26 = local_128 * dVar33 + (double)puStack_778;
              dVar34 = (double)pppdStack_130 * dVar33 + (double)pdStack_780;
              dVar55 = local_138 * dVar33 + (double)local_788;
              uStack_a80 = 0;
              dVar27 = dVar55 * (double)local_8d8._0_8_ - local_8e8[0] * dVar26;
              dVar35 = dVar34 * local_8e8[0] - local_8e8[1] * dVar55;
              dVar39 = dVar26 * local_8e8[1] - (double)local_8d8._0_8_ * dVar34;
              dVar39 = dVar39 + dVar39;
              dVar27 = dVar27 + dVar27;
              dVar35 = dVar35 + dVar35;
              local_168 = (double **)
                          (local_8c8 +
                          (dVar35 * local_8e8[1] - dVar27 * (double)local_8d8._0_8_) +
                          (double)local_8d8._8_8_ * dVar39 + dVar55);
              dStack_160 = dStack_8c0 +
                           ((double)local_8d8._0_8_ * dVar39 - local_8e8[0] * dVar35) +
                           (double)local_8d8._8_8_ * dVar27 + dVar34;
              local_158 = local_8b8 +
                          (double)local_8d8._8_8_ * dVar35 + dVar26 +
                          (dVar27 * local_8e8[0] - dVar39 * local_8e8[1]);
              dVar55 = local_128;
              pppdVar52 = pppdStack_130;
              local_a88 = local_128;
              local_150 = local_788;
              pdStack_148 = pdStack_780;
              local_140 = puStack_778;
              dStack_120 = dVar33;
            }
            if ((dVar33 != 1.79769313486232e+308) || (NAN(dVar33))) {
              iVar16 = *(int *)(param_6 + 0x5b0);
              *(uint *)(param_6 + 0x5b0) = iVar16 + 1U;
              if (*(uint *)(param_6 + 0x5b4) < iVar16 + 1U) {
                FUN_146ce5792(param_6 + 0x3f8,iVar16);
                dVar55 = local_128;
                pppdVar52 = pppdStack_130;
                dVar33 = dStack_120;
              }
              lVar9 = *(longlong *)(param_6 + 0x5a8);
              if (*(longlong *)(param_6 + 0x5a8) == 0) {
                lVar9 = param_6 + 0x3f8;
              }
              lVar11 = (longlong)iVar16 * 0x6c;
              *(float *)(lVar9 + lVar11) = (float)(double)local_168;
              *(float *)(lVar9 + 4 + lVar11) = (float)dStack_160;
              *(float *)(lVar9 + 8 + lVar11) = (float)local_158;
              *(float *)(lVar9 + 0xc + lVar11) = (float)(double)local_150;
              *(float *)(lVar9 + 0x10 + lVar11) = (float)(double)pdStack_148;
              *(float *)(lVar9 + 0x14 + lVar11) = (float)(double)local_140;
              *(float *)(lVar9 + 0x18 + lVar11) = (float)local_138;
              *(float *)(lVar9 + 0x1c + lVar11) = (float)(double)pppdVar52;
              *(float *)(lVar9 + 0x20 + lVar11) = (float)dVar55;
              *(float *)(lVar9 + 0x24 + lVar11) = (float)dVar33;
              *(undefined4 *)(lVar9 + 0x28 + lVar11) = local_118;
              *(undefined1 *)(lVar9 + 0x2c + lVar11) = local_114;
              *(float *)(lVar9 + 0x3c + lVar11) = (float)(double)local_168;
              *(float *)(lVar9 + 0x40 + lVar11) = (float)dStack_160;
              *(float *)(lVar9 + 0x44 + lVar11) = (float)local_158;
              *(float *)(lVar9 + 0x48 + lVar11) = (float)(double)local_150;
              *(float *)(lVar9 + 0x4c + lVar11) = (float)(double)pdStack_148;
              *(float *)(lVar9 + 0x50 + lVar11) = (float)(double)local_140;
              *(float *)(lVar9 + 0x54 + lVar11) = (float)(double)local_168;
              *(float *)(lVar9 + 0x58 + lVar11) = (float)dStack_160;
              *(float *)(lVar9 + 0x5c + lVar11) = (float)local_158;
              *(float *)(lVar9 + 0x60 + lVar11) = (float)(double)local_150;
              *(float *)(lVar9 + 100 + lVar11) = (float)(double)pdStack_148;
              *(float *)(lVar9 + 0x68 + lVar11) = (float)(double)local_140;
              *(undefined8 *)(lVar9 + 0x34 + lVar11) = 0;
              *(undefined1 *)(lVar9 + 0x30 + lVar11) = 0;
              lVar9 = *(longlong *)(param_6 + 0x5a8);
              if (*(longlong *)(param_6 + 0x5a8) == 0) {
                lVar9 = param_6 + 0x3f8;
              }
              if ((longlong)*(int *)(param_6 + 0x16c) == -1) {
                fVar21 = INFINITY;
              }
              else {
                fVar21 = *(float *)(lVar9 + 0x24 + (longlong)*(int *)(param_6 + 0x16c) * 0x6c);
              }
              if (*(float *)(lVar9 + 0x24 + lVar11) < fVar21) {
                *(int *)(param_6 + 0x16c) = iVar16;
              }
            }
          }
        }
      }
    }
  }
LAB_140a04abb:
  if ((local_f0 ^ (ulonglong)auStack_b88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
code_r0x000140a03a7a:
  dVar55 = 1.0 / dVar26;
  local_7b0 = (code ***)((double)local_7b0 * dVar55);
  dStack_7a8 = dStack_7a8 * dVar55;
  dStack_7a0 = dStack_7a0 * dVar55;
  dVar55 = -dStack_7a0;
  pppdVar52 = (double ***)-(double)local_7b0;
  ppdVar54 = (double **)-dStack_7a8;
  bVar20 = iVar16 == 0;
  iVar16 = iVar16 + -1;
  if (bVar20 || local_af8 <= dVar26) goto code_r0x000140a03af0;
  goto LAB_140a036db;
code_r0x000140a03af0:
  if (dVar33 <= dVar34) {
    dVar33 = dVar34;
  }
  *(uint *)(param_6 + 0x330) = (uint)local_108;
LAB_140a03b0b:
  local_ad8._8_4_ = 0;
  local_ad8._0_8_ = dVar26;
  local_ad8._12_4_ = uVar23;
  if ((int)(uint)local_108 < 1) {
    dVar34 = 0.0;
    dVar39 = 0.0;
    dVar35 = 0.0;
    dVar27 = 0.0;
    dVar30 = 0.0;
    local_840 = 0.0;
  }
  else {
    pdVar38 = (double *)(param_6 + 0x2c0);
    local_840 = 0.0;
    uVar14 = 0;
    dVar30 = 0.0;
    dVar27 = 0.0;
    dVar35 = 0.0;
    dVar39 = 0.0;
    dVar34 = 0.0;
    do {
      dVar29 = *(double *)(param_6 + 0x310 + uVar14 * 8);
      local_840 = local_840 + pdVar38[-0xc] * dVar29;
      dVar30 = dVar30 + pdVar38[-0xd] * dVar29;
      dVar27 = dVar27 + pdVar38[-0xe] * dVar29;
      dVar35 = dVar35 + *pdVar38 * dVar29;
      dVar39 = dVar39 + pdVar38[-1] * dVar29;
      dVar34 = dVar34 + dVar29 * pdVar38[-2];
      uVar14 = uVar14 + 1;
      pdVar38 = pdVar38 + 3;
    } while ((uint)local_108 != uVar14);
  }
  dVar29 = (double)local_8d8._0_8_ * -1.0;
  dVar31 = (double)local_8d8._8_8_ * 1.0;
  dVar47 = -local_8e8[0];
  dVar51 = -local_8e8[1];
  dVar44 = (double)pppdVar52 * dVar29 - dVar47 * dVar55;
  dVar49 = (double)ppdVar54 * dVar47 - (double)pppdVar52 * dVar51;
  dVar50 = dVar55 * dVar51 - (double)ppdVar54 * dVar29;
  dVar50 = dVar50 + dVar50;
  dVar44 = dVar44 + dVar44;
  dVar49 = dVar49 + dVar49;
  puVar41 = (undefined8 *)(dVar31 * dVar49 + dVar55 + (dVar44 * dVar47 - dVar50 * dVar51));
  pppdVar36 = (double ***)
              ((dVar49 * dVar51 - dVar44 * dVar29) + dVar31 * dVar50 + (double)pppdVar52);
  pdVar38 = (double *)(local_8e8[0] * dVar49 + dVar29 * dVar50 + dVar31 * dVar44 + (double)ppdVar54)
  ;
  local_840 = dVar55 * local_a78 + local_840;
  ppppdStack_848 = (double ****)((double)ppdVar54 * local_a78 + dVar30);
  local_850 = (double **)(local_a78 * (double)pppdVar52 + dVar27);
  local_858 = (undefined1 *)(dVar35 - local_ab8 * (double)puVar41);
  ppppcStack_860 = (code ****)(dVar39 - (double)pdVar38 * local_ab8);
  local_868 = (code ****)(dVar34 - (double)pppdVar36 * local_ab8);
  pppdVar15 = local_ac8;
  lVar9 = local_ae8._0_8_;
  bVar19 = (byte)local_b08;
  dStack_120 = local_a68 - dVar26;
  local_af8 = dVar33;
  local_8f0 = dVar33;
  goto LAB_140a03d65;
}



// FUNCTION 140a05dc3 FUN_140a05dc3 body=474 status=ok
// SIG undefined FUN_140a05dc3(void)

void FUN_140a05dc3(longlong param_1,undefined8 param_2,undefined8 param_3,double param_4,int param_5
                  )

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  int iVar8;
  undefined1 auStack_b8 [32];
  int local_98;
  int *local_90;
  undefined8 *local_88;
  undefined8 local_80;
  int local_74;
  undefined8 local_70;
  uint local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_74 = -1;
  local_80 = 0x3ff0000000000000;
  local_68 = 0xffffffff;
  local_70 = 0xffffffffffffffff;
  lVar3 = *(longlong *)(param_1 + 0x28);
  lVar4 = *(longlong *)(lVar3 + 0x58);
  if (lVar4 != 0) {
    cVar1 = *(char *)(lVar3 + 0x60);
    if (cVar1 == '\x01') {
      lVar4 = *(longlong *)(lVar4 + 0x40);
      lVar6 = (longlong)param_5;
      local_70 = (ulonglong)
                 CONCAT14(*(undefined1 *)(lVar4 + 1 + lVar6 * 4),(uint)*(byte *)(lVar4 + lVar6 * 4))
      ;
      local_68 = (uint)*(byte *)(lVar4 + 2 + lVar6 * 4);
      uVar5 = (uint)*(byte *)(lVar4 + 3 + lVar6 * 4);
    }
    else if (cVar1 == '\x02') {
      lVar4 = *(longlong *)(lVar4 + 0x40);
      lVar6 = (longlong)param_5;
      local_70 = CONCAT44((int)*(short *)(lVar4 + 2 + lVar6 * 8),(int)*(short *)(lVar4 + lVar6 * 8))
      ;
      local_68 = (int)*(short *)(lVar4 + 4 + lVar6 * 8);
      uVar5 = (uint)*(short *)(lVar4 + 6 + lVar6 * 8);
    }
    else {
      if (cVar1 != '\x03') goto LAB_140a05eb6;
      lVar4 = *(longlong *)(lVar4 + 0x40);
      lVar6 = (longlong)param_5 * 0x10;
      local_70 = CONCAT44(*(undefined4 *)(lVar4 + 4 + lVar6),*(undefined4 *)(lVar4 + lVar6));
      local_68 = *(uint *)(lVar4 + 8 + lVar6);
      uVar5 = *(uint *)(lVar4 + 0xc + lVar6);
    }
    if (param_4 <= (double)DAT_14c75f040) {
      param_4 = (double)DAT_14c75f040;
    }
    if ((int)uVar5 < 4) {
      if (0 < (int)uVar5) {
        uVar7 = 0;
        do {
          local_98 = *(int *)((longlong)&local_70 + uVar7 * 4);
          local_90 = &local_74;
          local_88 = &local_80;
          FUN_140a05fbe(param_1,param_2,param_3,param_4);
          uVar7 = uVar7 + 1;
        } while (uVar5 != uVar7);
      }
    }
    else {
      iVar2 = *(int *)(lVar3 + 0x28);
      if (0 < iVar2) {
        iVar8 = 0;
        do {
          local_98 = iVar8;
          local_90 = &local_74;
          local_88 = &local_80;
          FUN_140a05fbe(param_1,param_2,param_3,param_4);
          iVar8 = iVar8 + 1;
        } while (iVar2 != iVar8);
      }
    }
  }
LAB_140a05eb6:
  if (local_74 == -1) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_b8);
  }
  if ((local_60 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140a05fbe FUN_140a05fbe body=215 status=ok
// SIG undefined FUN_140a05fbe(void)

void FUN_140a05fbe(longlong param_1,double *param_2,double *param_3,double param_4,int param_5,
                  int *param_6,double *param_7)

{
  longlong lVar1;
  longlong lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  lVar2 = (longlong)param_5;
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x20);
  dVar3 = (double)*(float *)(lVar1 + 0x14 + lVar2 * 0x18);
  dVar5 = (double)*(float *)(lVar1 + 0x10 + lVar2 * 0x18);
  dVar4 = (double)*(float *)(lVar1 + 0xc + lVar2 * 0x18);
  if (((ABS((param_2[2] - (double)*(float *)(lVar1 + 8 + lVar2 * 0x18)) * dVar3 +
            (*param_2 - (double)*(float *)(lVar1 + lVar2 * 0x18)) * dVar4 +
            (param_2[1] - (double)*(float *)(lVar1 + 4 + lVar2 * 0x18)) * dVar5) <= param_4) &&
      (dVar3 = dVar3 * param_3[2] + dVar4 * *param_3 + dVar5 * param_3[1],
      dVar3 <= -9.99999993922529e-09)) && (dVar3 < *param_7)) {
    *param_7 = dVar3;
    *param_6 = param_5;
  }
  return;
}



// FUNCTION 140a06095 FUN_140a06095 body=2010 status=ok
// SIG undefined FUN_140a06095(void)

longlong FUN_140a06095(longlong param_1,longlong param_2,double *param_3,int param_4,int param_5,
                      double *param_6,longlong param_7,longlong param_8,uint *param_9)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  char cVar5;
  longlong *plVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong lVar15;
  ulonglong uVar16;
  uint uVar17;
  ulonglong uVar18;
  longlong lVar19;
  int iVar20;
  double *pdVar21;
  longlong lVar22;
  longlong lVar23;
  ulonglong uVar24;
  bool bVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  
  plVar6 = *(longlong **)(param_2 + 0x58);
  if (plVar6 == (longlong *)0x0) {
LAB_140a06783:
    *param_9 = 0;
    uVar18 = 0;
  }
  else {
    cVar5 = *(char *)(param_2 + 0x60);
    if (cVar5 == '\x01') {
      uVar17 = (uint)*(byte *)(*plVar6 + 1 + (longlong)param_5 * 2);
    }
    else if (cVar5 == '\x02') {
      uVar17 = (uint)*(short *)(*plVar6 + 2 + (longlong)param_5 * 4);
    }
    else {
      if (cVar5 != '\x03') goto LAB_140a06783;
      uVar17 = *(uint *)(*plVar6 + 4 + (longlong)param_5 * 8);
    }
    uVar18 = 0x20;
    if ((int)uVar17 < 0x20) {
      uVar18 = (ulonglong)uVar17;
    }
    *param_9 = (uint)uVar18;
    if (0 < (int)uVar17) {
      lVar13 = (longlong)param_5;
      pdVar21 = (double *)(param_7 + 0x10);
      lVar15 = 0;
      do {
        plVar6 = *(longlong **)(param_2 + 0x58);
        uVar17 = 0xffffffff;
        if (plVar6 != (longlong *)0x0) {
          cVar5 = *(char *)(param_2 + 0x60);
          if (cVar5 == '\x01') {
            uVar17 = (uint)*(byte *)(plVar6[2] + 1 +
                                    ((ulonglong)*(byte *)(*plVar6 + lVar13 * 2) + lVar15) * 3);
          }
          else if (cVar5 == '\x02') {
            uVar17 = (uint)*(short *)(plVar6[2] + 2 +
                                     (longlong)((int)*(short *)(*plVar6 + lVar13 * 4) + (int)lVar15)
                                     * 6);
          }
          else if (cVar5 == '\x03') {
            uVar17 = *(uint *)(plVar6[2] + 4 + (*(int *)(*plVar6 + lVar13 * 8) + lVar15) * 0xc);
          }
        }
        lVar23 = *(longlong *)(param_2 + 0x30);
        lVar19 = (longlong)(int)uVar17;
        dVar26 = (double)*(float *)(lVar23 + 8 + lVar19 * 0xc);
        dVar27 = (double)*(float *)(lVar23 + 4 + lVar19 * 0xc);
        dVar33 = (double)*(float *)(lVar23 + lVar19 * 0xc);
        dVar7 = *param_3;
        dVar8 = param_3[1];
        dVar9 = param_3[2];
        dVar29 = param_3[3];
        dVar1 = param_3[3];
        dVar34 = dVar33 * dVar9 - dVar7 * dVar26;
        dVar28 = dVar27 * dVar7 - dVar8 * dVar33;
        dVar31 = dVar26 * dVar8 - dVar9 * dVar27;
        dVar31 = dVar31 + dVar31;
        dVar34 = dVar34 + dVar34;
        dVar28 = dVar28 + dVar28;
        dVar4 = param_3[5];
        dVar32 = param_3[6];
        pdVar21[-2] = (dVar28 * dVar8 - dVar34 * dVar9) + dVar29 * dVar31 + dVar33 + param_3[4];
        pdVar21[-1] = (dVar9 * dVar31 - dVar7 * dVar28) + dVar1 * dVar34 + dVar27 + dVar4;
        *pdVar21 = dVar28 * dVar29 + dVar26 + (dVar34 * dVar7 - dVar31 * dVar8) + dVar32;
        lVar15 = lVar15 + 1;
        uVar18 = (ulonglong)(int)*param_9;
        pdVar21 = pdVar21 + 3;
      } while (lVar15 < (longlong)uVar18);
    }
  }
  lVar13 = *(longlong *)(param_1 + 0x28);
  plVar6 = *(longlong **)(lVar13 + 0x58);
  if (plVar6 != (longlong *)0x0) {
    cVar5 = *(char *)(lVar13 + 0x60);
    if (cVar5 == '\x01') {
      uVar14 = (ulonglong)*(byte *)(*plVar6 + 1 + (longlong)param_4 * 2);
      uVar17 = (uint)*(byte *)(plVar6[2] + -2 +
                              (*(byte *)(*plVar6 + (longlong)param_4 * 2) + uVar14) * 3);
    }
    else if (cVar5 == '\x02') {
      uVar14 = (ulonglong)*(short *)(*plVar6 + 2 + (longlong)param_4 * 4);
      uVar17 = (uint)*(short *)(plVar6[2] + -4 +
                               ((longlong)*(short *)(*plVar6 + (longlong)param_4 * 4) + uVar14) * 6)
      ;
    }
    else {
      if (cVar5 != '\x03') {
        return param_7;
      }
      uVar14 = (ulonglong)*(int *)(*plVar6 + 4 + (longlong)param_4 * 8);
      uVar17 = *(uint *)(plVar6[2] + -8 +
                        ((longlong)*(int *)(*plVar6 + (longlong)param_4 * 8) + uVar14) * 0xc);
    }
    if ((1 < (uint)uVar18) && (0 < (int)uVar14)) {
      lVar19 = (longlong)(int)uVar17;
      lVar13 = *(longlong *)(lVar13 + 0x30);
      lVar22 = (longlong)param_4;
      iVar20 = 0;
      lVar15 = param_8;
      lVar23 = param_7;
      dVar29 = (double)*(float *)(lVar13 + 4 + lVar19 * 0xc);
      dVar32 = (double)*(float *)(lVar13 + 8 + lVar19 * 0xc);
      dVar1 = (double)*(float *)(lVar13 + lVar19 * 0xc);
      do {
        param_7 = lVar15;
        lVar13 = *(longlong *)(param_1 + 0x28);
        plVar6 = *(longlong **)(lVar13 + 0x58);
        uVar17 = 0xffffffff;
        if (plVar6 != (longlong *)0x0) {
          cVar5 = *(char *)(lVar13 + 0x60);
          if (cVar5 == '\x01') {
            uVar17 = (uint)*(byte *)(plVar6[2] + 1 +
                                    (ulonglong)((uint)*(byte *)(*plVar6 + lVar22 * 2) + iVar20) * 3)
            ;
          }
          else if (cVar5 == '\x02') {
            uVar17 = (uint)*(short *)(plVar6[2] + 2 +
                                     ((longlong)iVar20 + (longlong)*(short *)(*plVar6 + lVar22 * 4))
                                     * 6);
          }
          else if (cVar5 == '\x03') {
            uVar17 = *(uint *)(plVar6[2] + 4 +
                              ((longlong)iVar20 + (longlong)*(int *)(*plVar6 + lVar22 * 8)) * 0xc);
          }
        }
        lVar13 = *(longlong *)(lVar13 + 0x30);
        lVar15 = (longlong)(int)uVar17;
        dVar7 = (double)*(float *)(lVar13 + 8 + lVar15 * 0xc);
        dVar8 = (double)*(float *)(lVar13 + 4 + lVar15 * 0xc);
        dVar9 = (double)*(float *)(lVar13 + lVar15 * 0xc);
        dVar4 = *param_6 * (dVar29 - dVar8) - (dVar1 - dVar9) * param_6[1];
        dVar1 = (dVar1 - dVar9) * param_6[2] - (dVar32 - dVar7) * *param_6;
        dVar26 = param_6[1] * (dVar32 - dVar7) - (dVar29 - dVar8) * param_6[2];
        dVar28 = dVar4 * dVar4 + dVar26 * dVar26 + dVar1 * dVar1;
        dVar27 = SQRT(dVar28);
        dVar29 = 0.0;
        dVar32 = 0.0;
        if (9.999999747378752e-05 <= dVar28) {
          dVar32 = dVar4 / dVar27;
          dVar29 = dVar1 / dVar27;
        }
        dVar34 = (double)(-(ulonglong)(dVar28 < 9.999999747378752e-05) & 0x3ff0000000000000 |
                         ~-(ulonglong)(dVar28 < 9.999999747378752e-05) &
                         (ulonglong)(dVar26 / dVar27));
        dVar27 = dVar7 * dVar32 + dVar9 * dVar34 + dVar29 * dVar8;
        dVar28 = dVar27 * 9.99999993922529e-09 + dVar27;
        uVar16 = (ulonglong)((int)uVar18 - 1);
        dVar1 = *(double *)(lVar23 + 0x10 + uVar16 * 0x18);
        dVar4 = *(double *)(lVar23 + uVar16 * 0x18);
        dVar26 = *(double *)(lVar23 + 8 + uVar16 * 0x18);
        uVar16 = uVar18 & 0xffffffff;
        uVar18 = 0;
        lVar13 = 0;
        dVar31 = dVar1 * dVar32 + dVar34 * dVar4 + dVar26 * dVar29;
LAB_140a064dc:
        uVar17 = (uint)uVar18;
        dVar33 = *(double *)(lVar23 + lVar13);
        dVar2 = *(double *)(lVar23 + 8 + lVar13);
        dVar3 = *(double *)(lVar23 + 0x10 + lVar13);
        dVar30 = dVar3 * dVar32 + dVar33 * dVar34 + dVar29 * dVar2;
        if (dVar28 < dVar30) {
          if (dVar31 < dVar28) {
            dVar10 = dVar1;
            dVar11 = dVar4;
            dVar12 = dVar26;
            if (9.99999993922529e-09 <= ABS(dVar30 - dVar31)) {
              dVar31 = (dVar27 - dVar31) / (dVar30 - dVar31);
              dVar10 = dVar1 + (dVar3 - dVar1) * dVar31;
              dVar11 = dVar4 + (dVar33 - dVar4) * dVar31;
              dVar12 = dVar26 + (dVar2 - dVar26) * dVar31;
            }
            goto LAB_140a06534;
          }
          goto LAB_140a06551;
        }
        dVar10 = dVar3;
        dVar11 = dVar33;
        dVar12 = dVar2;
        if (dVar31 <= dVar28) {
LAB_140a06534:
          uVar24 = (ulonglong)uVar17;
          uVar18 = (ulonglong)(uVar17 + 1);
          *(double *)(param_7 + uVar24 * 0x18) = dVar11;
          *(double *)(param_7 + 8 + uVar24 * 0x18) = dVar12;
          *(double *)(param_7 + 0x10 + uVar24 * 0x18) = dVar10;
LAB_140a06551:
          if ((0x1f < (uint)uVar18) ||
             (bVar25 = uVar16 * 0x18 + -0x18 == lVar13, lVar13 = lVar13 + 0x18, dVar31 = dVar30,
             dVar4 = dVar33, dVar26 = dVar2, dVar1 = dVar3, bVar25)) goto LAB_140a0669c;
          goto LAB_140a064dc;
        }
        if (9.99999993922529e-09 <= ABS(dVar30 - dVar31)) {
          dVar31 = (dVar27 - dVar31) / (dVar30 - dVar31);
          dVar1 = dVar1 + (dVar3 - dVar1) * dVar31;
          dVar26 = dVar26 + (dVar2 - dVar26) * dVar31;
          dVar4 = dVar4 + (dVar33 - dVar4) * dVar31;
        }
        *(double *)(param_7 + uVar18 * 0x18) = dVar4;
        *(double *)(param_7 + 8 + uVar18 * 0x18) = dVar26;
        *(double *)(param_7 + 0x10 + uVar18 * 0x18) = dVar1;
        if (uVar17 < 0x1f) {
          uVar17 = uVar17 + 1;
          goto LAB_140a06534;
        }
        uVar18 = 0x20;
LAB_140a0669c:
        *param_9 = (uint)uVar18;
        iVar20 = iVar20 + 1;
      } while ((iVar20 < (int)uVar14) &&
              (lVar15 = lVar23, lVar23 = param_7, dVar29 = dVar8, dVar32 = dVar7, dVar1 = dVar9,
              1 < (uint)uVar18));
    }
  }
  return param_7;
}



// FUNCTION 140a0686f FUN_140a0686f body=1994 status=ok
// SIG undefined FUN_140a0686f(void)

longlong FUN_140a0686f(longlong param_1,longlong param_2,double *param_3,int param_4,int param_5,
                      double *param_6,longlong param_7,longlong param_8,uint *param_9)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  char cVar5;
  longlong *plVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong lVar15;
  ulonglong uVar16;
  uint uVar17;
  ulonglong uVar18;
  int iVar19;
  double *pdVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  ulonglong uVar24;
  bool bVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  
  plVar6 = *(longlong **)(*(longlong *)(param_2 + 0x28) + 0x58);
  if (plVar6 == (longlong *)0x0) {
LAB_140a06fac:
    *param_9 = 0;
    uVar18 = 0;
  }
  else {
    cVar5 = *(char *)(*(longlong *)(param_2 + 0x28) + 0x60);
    if (cVar5 == '\x01') {
      uVar17 = (uint)*(byte *)(*plVar6 + 1 + (longlong)param_5 * 2);
    }
    else if (cVar5 == '\x02') {
      uVar17 = (uint)*(short *)(*plVar6 + 2 + (longlong)param_5 * 4);
    }
    else {
      if (cVar5 != '\x03') goto LAB_140a06fac;
      uVar17 = *(uint *)(*plVar6 + 4 + (longlong)param_5 * 8);
    }
    uVar18 = 0x20;
    if ((int)uVar17 < 0x20) {
      uVar18 = (ulonglong)uVar17;
    }
    *param_9 = (uint)uVar18;
    if (0 < (int)uVar17) {
      lVar13 = (longlong)param_5;
      pdVar20 = (double *)(param_7 + 0x10);
      lVar15 = 0;
      do {
        lVar22 = *(longlong *)(param_2 + 0x28);
        plVar6 = *(longlong **)(lVar22 + 0x58);
        uVar17 = 0xffffffff;
        if (plVar6 != (longlong *)0x0) {
          cVar5 = *(char *)(lVar22 + 0x60);
          if (cVar5 == '\x01') {
            uVar17 = (uint)*(byte *)(plVar6[2] + 1 +
                                    ((ulonglong)*(byte *)(*plVar6 + lVar13 * 2) + lVar15) * 3);
          }
          else if (cVar5 == '\x02') {
            uVar17 = (uint)*(short *)(plVar6[2] + 2 +
                                     (longlong)((int)*(short *)(*plVar6 + lVar13 * 4) + (int)lVar15)
                                     * 6);
          }
          else if (cVar5 == '\x03') {
            uVar17 = *(uint *)(plVar6[2] + 4 + (*(int *)(*plVar6 + lVar13 * 8) + lVar15) * 0xc);
          }
        }
        lVar22 = *(longlong *)(lVar22 + 0x30);
        lVar23 = (longlong)(int)uVar17;
        dVar26 = (double)*(float *)(lVar22 + 8 + lVar23 * 0xc);
        dVar27 = (double)*(float *)(lVar22 + 4 + lVar23 * 0xc);
        dVar33 = (double)*(float *)(lVar22 + lVar23 * 0xc);
        dVar7 = *param_3;
        dVar8 = param_3[1];
        dVar9 = param_3[2];
        dVar29 = param_3[3];
        dVar1 = param_3[3];
        dVar34 = dVar33 * dVar9 - dVar7 * dVar26;
        dVar28 = dVar27 * dVar7 - dVar8 * dVar33;
        dVar31 = dVar26 * dVar8 - dVar9 * dVar27;
        dVar31 = dVar31 + dVar31;
        dVar34 = dVar34 + dVar34;
        dVar28 = dVar28 + dVar28;
        dVar4 = param_3[5];
        dVar32 = param_3[6];
        pdVar20[-2] = (dVar28 * dVar8 - dVar34 * dVar9) + dVar29 * dVar31 + dVar33 + param_3[4];
        pdVar20[-1] = (dVar9 * dVar31 - dVar7 * dVar28) + dVar1 * dVar34 + dVar27 + dVar4;
        *pdVar20 = dVar28 * dVar29 + dVar26 + (dVar34 * dVar7 - dVar31 * dVar8) + dVar32;
        lVar15 = lVar15 + 1;
        uVar18 = (ulonglong)(int)*param_9;
        pdVar20 = pdVar20 + 3;
      } while (lVar15 < (longlong)uVar18);
    }
  }
  plVar6 = *(longlong **)(param_1 + 0x58);
  if (plVar6 != (longlong *)0x0) {
    cVar5 = *(char *)(param_1 + 0x60);
    if (cVar5 == '\x01') {
      uVar14 = (ulonglong)*(byte *)(*plVar6 + 1 + (longlong)param_4 * 2);
      uVar17 = (uint)*(byte *)(plVar6[2] + -2 +
                              (*(byte *)(*plVar6 + (longlong)param_4 * 2) + uVar14) * 3);
    }
    else if (cVar5 == '\x02') {
      uVar14 = (ulonglong)*(short *)(*plVar6 + 2 + (longlong)param_4 * 4);
      uVar17 = (uint)*(short *)(plVar6[2] + -4 +
                               ((longlong)*(short *)(*plVar6 + (longlong)param_4 * 4) + uVar14) * 6)
      ;
    }
    else {
      if (cVar5 != '\x03') {
        return param_7;
      }
      uVar14 = (ulonglong)*(int *)(*plVar6 + 4 + (longlong)param_4 * 8);
      uVar17 = *(uint *)(plVar6[2] + -8 +
                        ((longlong)*(int *)(*plVar6 + (longlong)param_4 * 8) + uVar14) * 0xc);
    }
    if ((1 < (uint)uVar18) && (0 < (int)uVar14)) {
      lVar23 = (longlong)(int)uVar17;
      lVar13 = *(longlong *)(param_1 + 0x30);
      lVar21 = (longlong)param_4;
      iVar19 = 0;
      lVar15 = param_8;
      lVar22 = param_7;
      dVar29 = (double)*(float *)(lVar13 + 4 + lVar23 * 0xc);
      dVar32 = (double)*(float *)(lVar13 + 8 + lVar23 * 0xc);
      dVar1 = (double)*(float *)(lVar13 + lVar23 * 0xc);
      do {
        param_7 = lVar15;
        plVar6 = *(longlong **)(param_1 + 0x58);
        uVar17 = 0xffffffff;
        if (plVar6 != (longlong *)0x0) {
          cVar5 = *(char *)(param_1 + 0x60);
          if (cVar5 == '\x01') {
            uVar17 = (uint)*(byte *)(plVar6[2] + 1 +
                                    (ulonglong)((uint)*(byte *)(*plVar6 + lVar21 * 2) + iVar19) * 3)
            ;
          }
          else if (cVar5 == '\x02') {
            uVar17 = (uint)*(short *)(plVar6[2] + 2 +
                                     ((longlong)iVar19 + (longlong)*(short *)(*plVar6 + lVar21 * 4))
                                     * 6);
          }
          else if (cVar5 == '\x03') {
            uVar17 = *(uint *)(plVar6[2] + 4 +
                              ((longlong)iVar19 + (longlong)*(int *)(*plVar6 + lVar21 * 8)) * 0xc);
          }
        }
        lVar13 = *(longlong *)(param_1 + 0x30);
        lVar15 = (longlong)(int)uVar17;
        dVar7 = (double)*(float *)(lVar13 + 8 + lVar15 * 0xc);
        dVar8 = (double)*(float *)(lVar13 + 4 + lVar15 * 0xc);
        dVar9 = (double)*(float *)(lVar13 + lVar15 * 0xc);
        dVar4 = *param_6 * (dVar29 - dVar8) - (dVar1 - dVar9) * param_6[1];
        dVar1 = (dVar1 - dVar9) * param_6[2] - (dVar32 - dVar7) * *param_6;
        dVar26 = param_6[1] * (dVar32 - dVar7) - (dVar29 - dVar8) * param_6[2];
        dVar28 = dVar4 * dVar4 + dVar26 * dVar26 + dVar1 * dVar1;
        dVar27 = SQRT(dVar28);
        dVar29 = 0.0;
        dVar32 = 0.0;
        if (9.999999747378752e-05 <= dVar28) {
          dVar32 = dVar4 / dVar27;
          dVar29 = dVar1 / dVar27;
        }
        dVar34 = (double)(-(ulonglong)(dVar28 < 9.999999747378752e-05) & 0x3ff0000000000000 |
                         ~-(ulonglong)(dVar28 < 9.999999747378752e-05) &
                         (ulonglong)(dVar26 / dVar27));
        dVar27 = dVar7 * dVar32 + dVar9 * dVar34 + dVar29 * dVar8;
        dVar28 = dVar27 * 9.99999993922529e-09 + dVar27;
        uVar16 = (ulonglong)((int)uVar18 - 1);
        dVar1 = *(double *)(lVar22 + 0x10 + uVar16 * 0x18);
        dVar4 = *(double *)(lVar22 + uVar16 * 0x18);
        dVar26 = *(double *)(lVar22 + 8 + uVar16 * 0x18);
        uVar16 = uVar18 & 0xffffffff;
        uVar18 = 0;
        lVar13 = 0;
        dVar31 = dVar1 * dVar32 + dVar34 * dVar4 + dVar26 * dVar29;
LAB_140a06cb1:
        uVar17 = (uint)uVar18;
        dVar33 = *(double *)(lVar22 + lVar13);
        dVar2 = *(double *)(lVar22 + 8 + lVar13);
        dVar3 = *(double *)(lVar22 + 0x10 + lVar13);
        dVar30 = dVar3 * dVar32 + dVar33 * dVar34 + dVar29 * dVar2;
        if (dVar28 < dVar30) {
          if (dVar31 < dVar28) {
            dVar10 = dVar1;
            dVar11 = dVar4;
            dVar12 = dVar26;
            if (9.99999993922529e-09 <= ABS(dVar30 - dVar31)) {
              dVar31 = (dVar27 - dVar31) / (dVar30 - dVar31);
              dVar10 = dVar1 + (dVar3 - dVar1) * dVar31;
              dVar11 = dVar4 + (dVar33 - dVar4) * dVar31;
              dVar12 = dVar26 + (dVar2 - dVar26) * dVar31;
            }
            goto LAB_140a06d09;
          }
          goto LAB_140a06d26;
        }
        dVar10 = dVar3;
        dVar11 = dVar33;
        dVar12 = dVar2;
        if (dVar31 <= dVar28) {
LAB_140a06d09:
          uVar24 = (ulonglong)uVar17;
          uVar18 = (ulonglong)(uVar17 + 1);
          *(double *)(param_7 + uVar24 * 0x18) = dVar11;
          *(double *)(param_7 + 8 + uVar24 * 0x18) = dVar12;
          *(double *)(param_7 + 0x10 + uVar24 * 0x18) = dVar10;
LAB_140a06d26:
          if ((0x1f < (uint)uVar18) ||
             (bVar25 = uVar16 * 0x18 + -0x18 == lVar13, lVar13 = lVar13 + 0x18, dVar31 = dVar30,
             dVar4 = dVar33, dVar26 = dVar2, dVar1 = dVar3, bVar25)) goto LAB_140a06e71;
          goto LAB_140a06cb1;
        }
        if (9.99999993922529e-09 <= ABS(dVar30 - dVar31)) {
          dVar31 = (dVar27 - dVar31) / (dVar30 - dVar31);
          dVar1 = dVar1 + (dVar3 - dVar1) * dVar31;
          dVar26 = dVar26 + (dVar2 - dVar26) * dVar31;
          dVar4 = dVar4 + (dVar33 - dVar4) * dVar31;
        }
        *(double *)(param_7 + uVar18 * 0x18) = dVar4;
        *(double *)(param_7 + 8 + uVar18 * 0x18) = dVar26;
        *(double *)(param_7 + 0x10 + uVar18 * 0x18) = dVar1;
        if (uVar17 < 0x1f) {
          uVar17 = uVar17 + 1;
          goto LAB_140a06d09;
        }
        uVar18 = 0x20;
LAB_140a06e71:
        *param_9 = (uint)uVar18;
        iVar19 = iVar19 + 1;
      } while ((iVar19 < (int)uVar14) &&
              (lVar15 = lVar22, lVar22 = param_7, dVar29 = dVar8, dVar32 = dVar7, dVar1 = dVar9,
              1 < (uint)uVar18));
    }
  }
  return param_7;
}



// FUNCTION 140a0703a FUN_140a0703a body=40 status=ok
// SIG undefined FUN_140a0703a(void)

undefined8 FUN_140a0703a(undefined8 param_1,int param_2)

{
  FUN_140a07062();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140a07062 FUN_140a07062 body=145 status=ok
// SIG undefined FUN_140a07062(void)

void FUN_140a07062(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b19c8e0;
  param_1[5] = &PTR_LAB_14b19cbf0;
  param_1[6] = &PTR_FUN_14b19cd00;
  param_1[0x42] = &PTR_FUN_14b19cd20;
  param_1[0x94] = &PTR_LAB_14b19cd50;
  param_1[0xb7] = &PTR_FUN_14b19cd70;
  if (param_1[0x10d] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xcb] != 0) {
    FUN_1400020a8();
  }
  FUN_140a070f4(param_1 + 0xb8);
  FUN_140a07136(param_1);
  return;
}



// FUNCTION 140a070f4 FUN_140a070f4 body=65 status=ok
// SIG undefined FUN_140a070f4(void)

void FUN_140a070f4(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  while (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 8) = *puVar1;
    if (puVar1[3] != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(puVar1);
    puVar1 = *(undefined8 **)(param_1 + 8);
  }
  return;
}



// FUNCTION 140a07136 FUN_140a07136 body=206 status=ok
// SIG undefined FUN_140a07136(void)

void FUN_140a07136(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a5a1be0;
  param_1[5] = &PTR_LAB_14a5a1ef0;
  param_1[6] = &PTR_FUN_14a5a2000;
  param_1[0x42] = &PTR_FUN_14a5a2020;
  param_1[0x94] = &PTR_LAB_14a5a2050;
  if (*(char *)(param_1 + 0xb1) == '\x01') {
    if (param_1[0xad] != 0) {
      FUN_1400020a8();
    }
    if (param_1[0xa8] != 0) {
      FUN_1400020a8();
    }
    if (param_1[0xa2] != 0) {
      FUN_1400020a8();
    }
    if (param_1[0x9c] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0xb1) = 0;
  }
  if (*(char *)(param_1 + 0x9a) == '\x01') {
    *(undefined1 *)(param_1 + 0x9a) = 0;
  }
  if (param_1[0x95] != 0) {
    FUN_1400020a8();
  }
  FUN_140a07204(param_1);
  return;
}



// FUNCTION 140a07204 FUN_140a07204 body=1139 status=ok
// SIG undefined FUN_140a07204(void)

void FUN_140a07204(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  
  *param_1 = &PTR_FUN_14a48cf60;
  param_1[5] = &PTR_LAB_14a48d260;
  param_1[6] = &PTR_FUN_14a48d370;
  param_1[0x42] = &PTR_FUN_14a48d390;
  if ((DAT_14cb0d2b0 != (longlong *)0x0) && (*(char *)(param_1 + 0x85) == '\x01')) {
    (**(code **)(*DAT_14cb0d2b0 + 0x308))(DAT_14cb0d2b0,(float)(double)param_1[0x84]);
  }
  if (*(char *)(param_1 + 0x86) == '\x01') {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cab3b00) {
      FUN_144b3d300(&DAT_14cab3b00);
      if (DAT_14cab3b00 == -1) {
        if (DAT_14c8407a8 == (longlong *)0x0) {
          FUN_1414b00ea();
        }
        DAT_14cab3af8 =
             (longlong *)
             (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.DynamicRes.FrameTimeBudget",1);
        _Init_thread_footer(&DAT_14cab3b00);
      }
    }
    (**(code **)(*DAT_14cab3af8 + 0xa0))(DAT_14cab3af8,0xd000000,0);
    *(undefined1 *)(param_1 + 0x86) = 0;
  }
  FUN_144760e21(param_1[0x91],*(undefined4 *)(param_1 + 0x92));
  if (param_1[0x91] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x8e],*(undefined4 *)(param_1 + 0x8f));
  if (param_1[0x8e] != 0) {
    FUN_1400020a8();
  }
  FUN_144959b6a(param_1[0x8c],*(undefined4 *)(param_1 + 0x8d));
  if (param_1[0x8c] != 0) {
    FUN_1400020a8();
  }
  FUN_144959b6a(param_1[0x8a],*(undefined4 *)(param_1 + 0x8b));
  if (param_1[0x8a] != 0) {
    FUN_1400020a8();
  }
  if (*(char *)(param_1 + 0x89) == '\x01') {
    *(undefined1 *)(param_1 + 0x89) = 0;
  }
  if (*(char *)(param_1 + 0x87) == '\x01') {
    *(undefined1 *)(param_1 + 0x87) = 0;
  }
  if (*(char *)(param_1 + 0x85) == '\x01') {
    *(undefined1 *)(param_1 + 0x85) = 0;
  }
  if (*(char *)((longlong)param_1 + 0x41c) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x41c) = 0;
  }
  FUN_144760e21(param_1[0x7f],*(undefined4 *)(param_1 + 0x80));
  if (param_1[0x7f] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0x7d];
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
  plVar3 = (longlong *)param_1[0x7b];
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
  FUN_140a07690(param_1[0x77],*(undefined4 *)(param_1 + 0x78));
  if (param_1[0x77] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x6f] != 0) {
    FUN_1400020a8();
  }
  lVar4 = param_1[0x6e];
  if (lVar4 != 0) {
    FUN_14755b0b8(lVar4);
    FUN_1400020a8(lVar4);
  }
  plVar3 = (longlong *)param_1[0x6d];
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
  if (*(char *)(param_1 + 0x6b) == '\x01') {
    *(undefined1 *)(param_1 + 0x6b) = 0;
  }
  if (*(char *)((longlong)param_1 + 0x32c) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x32c) = 0;
  }
  FUN_140a076b8(param_1 + 0x5c);
  plVar3 = param_1 + 0x50;
  if (*(int *)(param_1 + 0x51) != 0) {
    puVar5 = (undefined8 *)*plVar3;
    if (puVar5 == (undefined8 *)0x0) goto LAB_140a07425;
    (**(code **)*puVar5)(puVar5,0);
    FUN_1446efa72(plVar3,0,0,0x10);
    *(undefined4 *)(param_1 + 0x51) = 0;
  }
  if (*plVar3 != 0) {
    FUN_1400020a8();
  }
LAB_140a07425:
  if (param_1[0x4e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x4c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x4a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x48] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x46] != 0) {
    FUN_1400020a8();
  }
  FUN_140a076f8(param_1 + 5);
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 140a07678 FUN_140a07678 body=24 status=ok
// SIG undefined FUN_140a07678(void)

void FUN_140a07678(longlong param_1)

{
  *(undefined ***)(param_1 + 0x10) = &PTR_LAB_14a481200;
  if (*(char *)(param_1 + 0x28) == '\x01') {
    *(undefined1 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 140a07690 FUN_140a07690 body=40 status=ok
// SIG undefined FUN_140a07690(void)

void FUN_140a07690(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1449db362(param_1);
    param_1 = param_1 + 0x10;
  }
  return;
}



// FUNCTION 140a076b8 FUN_140a076b8 body=63 status=ok
// SIG undefined FUN_140a076b8(void)

void FUN_140a076b8(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_14087332c();
  plVar3 = *(longlong **)(param_1 + 0x10);
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
                    /* WARNING: Could not recover jumptable at 0x000140a076f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 140a076f8 FUN_140a076f8 body=571 status=ok
// SIG undefined FUN_140a076f8(void)

void FUN_140a076f8(undefined8 *param_1)

{
  ushort uVar1;
  byte bVar2;
  longlong lVar3;
  undefined *puVar4;
  int iVar5;
  
  *param_1 = &PTR_LAB_14a487070;
  param_1[1] = &PTR_LAB_14a487180;
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_14cab3658);
  puVar4 = &DAT_14cab3698;
  if (DAT_14cab36a8 != (undefined *)0x0) {
    puVar4 = DAT_14cab36a8;
  }
  bVar2 = (byte)*(ushort *)(param_1 + 0x3c) & 0x1f;
  *(uint *)(puVar4 + (ulonglong)(*(ushort *)(param_1 + 0x3c) >> 5) * 4) =
       *(uint *)(puVar4 + (ulonglong)(*(ushort *)(param_1 + 0x3c) >> 5) * 4) &
       (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  lVar3 = DAT_14cab3660;
  uVar1 = *(ushort *)(param_1 + 0x3c);
  if (DAT_14cab3694 != 0) {
    *(uint *)(DAT_14cab3660 + (longlong)(int)DAT_14cab3690 * 8) = (uint)uVar1;
  }
  *(undefined4 *)(lVar3 + (ulonglong)uVar1 * 8) = 0xffffffff;
  iVar5 = -1;
  if (0 < DAT_14cab3694) {
    iVar5 = DAT_14cab3690;
  }
  *(int *)(lVar3 + 4 + (ulonglong)uVar1 * 8) = iVar5;
  DAT_14cab3694 = DAT_14cab3694 + 1;
  puVar4 = &DAT_14cab3670;
  if (DAT_14cab3680 != (undefined *)0x0) {
    puVar4 = DAT_14cab3680;
  }
  bVar2 = (byte)uVar1 & 0x1f;
  DAT_14cab3690 = (uint)uVar1;
  *(uint *)(puVar4 + (ulonglong)(uVar1 >> 5) * 4) =
       *(uint *)(puVar4 + (ulonglong)(uVar1 >> 5) * 4) & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2)
  ;
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14cab3658);
  FUN_1409f5ace(param_1 + 0x2e);
  *(undefined4 *)(param_1 + 0x2d) = 0;
  if (param_1[0x2c] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x25) = 0;
  if (*(int *)((longlong)param_1 + 300) != 0) {
    FUN_145fcac6c(param_1 + 0x24,0);
  }
  param_1[0x2a] = 0xffffffff;
  *(undefined4 *)(param_1 + 0x29) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x14c)) {
    *(undefined4 *)((longlong)param_1 + 0x14c) = 0x80;
    FUN_1446efbd8(param_1 + 0x26,0);
  }
  if (param_1[0x28] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x24] != 0) {
    FUN_1400020a8();
  }
  param_1[2] = &PTR_FUN_14a490480;
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (param_1[0x1f] != 0) {
    FUN_1400020a8();
  }
  FUN_140a07934(param_1 + 0x17);
  *(undefined4 *)(param_1 + 0x16) = 0;
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  FUN_140a0796c(param_1 + 0xd);
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_140a079a4(param_1 + 3);
  return;
}



// FUNCTION 140a07934 FUN_140a07934 body=55 status=ok
// SIG undefined FUN_140a07934(void)

void FUN_140a07934(longlong *param_1)

{
  FUN_140a079dc(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140a0796c FUN_140a0796c body=55 status=ok
// SIG undefined FUN_140a0796c(void)

void FUN_140a0796c(longlong *param_1)

{
  FUN_140a07e48(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140a079a4 FUN_140a079a4 body=55 status=ok
// SIG undefined FUN_140a079a4(void)

void FUN_140a079a4(longlong *param_1)

{
  FUN_140a07c48(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140a079dc FUN_140a079dc body=508 status=ok
// SIG undefined FUN_140a079dc(void)

void FUN_140a079dc(longlong *param_1,int param_2)

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
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  
  puVar1 = (uint *)(param_1 + 2);
  iVar3 = (int)param_1[5];
  if (iVar3 == 0) {
    uVar12 = 0;
    uVar14 = 1;
    iVar4 = 0;
    iVar10 = 0;
  }
  else {
    puVar8 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar8 = puVar1;
    }
    uVar13 = *puVar8;
    if (uVar13 == 0) {
      iVar4 = iVar3 + 0x1e;
      if (-1 < iVar3 + -1) {
        iVar4 = iVar3 + -1;
      }
      uVar12 = 0;
      uVar14 = (ulonglong)(uint)(iVar4 >> 5);
      if (iVar4 >> 5 < 1) {
        uVar14 = uVar12;
      }
      iVar10 = 0;
      do {
        if (uVar14 == uVar12) goto LAB_140a07b27;
        iVar10 = iVar10 + 0x20;
        uVar13 = puVar8[uVar12 + 1];
        uVar12 = uVar12 + 1;
      } while (uVar13 == 0);
    }
    else {
      uVar12 = 0;
      iVar10 = 0;
    }
    uVar14 = (ulonglong)(-uVar13 & uVar13);
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
    uVar13 = 0xffffffff;
    do {
      FUN_1409e579e((longlong)iVar4 * 400 + *param_1 + 8);
      uVar13 = ~(uint)uVar14 & uVar13;
      puVar8 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar8 = puVar1;
      }
      iVar3 = (int)param_1[5];
      iVar4 = (int)uVar12;
      lVar11 = (longlong)iVar4;
      uVar5 = puVar8[lVar11] & uVar13;
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
          if (iVar7 - lVar11 == lVar9) goto LAB_140a07b27;
        }
        uVar12 = (ulonglong)(iVar4 + (int)lVar9 + 1);
        uVar13 = 0xffffffff;
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
LAB_140a07b27:
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_140a07bd8(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar13 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (((int)uVar13 <= *(int *)((longlong)param_1 + 0x2c)) &&
     (*(int *)((longlong)param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar5 = 0x80;
  if (0x80 < (int)uVar13) {
    uVar5 = uVar13;
  }
  *(uint *)((longlong)param_1 + 0x2c) = uVar5;
  FUN_1446efbd8(puVar1,0);
  return;
}



// FUNCTION 140a07bd8 FUN_140a07bd8 body=112 status=ok
// SIG undefined FUN_140a07bd8(void)

void FUN_140a07bd8(longlong param_1,int param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  if (param_2 != 0) {
    uVar2 = FUN_144a3809e((longlong)param_2 * 400,8);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2 >> 4;
    iVar3 = SUB164(auVar1 * ZEXT816(0xa3d70a3d70a3d71),8);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar3) {
      iVar4 = iVar3;
    }
  }
  if (iVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar4;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar4,400,8);
  }
  return;
}



// FUNCTION 140a07c48 FUN_140a07c48 body=510 status=ok
// SIG undefined FUN_140a07c48(void)

void FUN_140a07c48(longlong *param_1,int param_2)

{
  uint *puVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint *puVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  
  puVar1 = (uint *)(param_1 + 2);
  iVar4 = (int)param_1[5];
  if (iVar4 == 0) {
    uVar14 = 0;
    uVar15 = 1;
    iVar5 = 0;
    iVar11 = 0;
  }
  else {
    puVar9 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar9 = puVar1;
    }
    uVar13 = *puVar9;
    if (uVar13 == 0) {
      iVar5 = iVar4 + 0x1e;
      if (-1 < iVar4 + -1) {
        iVar5 = iVar4 + -1;
      }
      uVar14 = 0;
      uVar15 = (ulonglong)(uint)(iVar5 >> 5);
      if (iVar5 >> 5 < 1) {
        uVar15 = uVar14;
      }
      iVar11 = 0;
      do {
        if (uVar15 == uVar14) goto LAB_140a07d95;
        iVar11 = iVar11 + 0x20;
        uVar13 = puVar9[uVar14 + 1];
        uVar14 = uVar14 + 1;
      } while (uVar13 == 0);
    }
    else {
      uVar14 = 0;
      iVar11 = 0;
    }
    uVar15 = (ulonglong)(-uVar13 & uVar13);
    uVar2 = uVar15 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iVar5 = (iVar11 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    if (iVar4 <= iVar5) {
      iVar5 = iVar4;
    }
  }
  if (iVar5 < iVar4) {
    uVar13 = 0xffffffff;
    do {
      puVar3 = *(undefined8 **)(*param_1 + 0x10 + (longlong)iVar5 * 0x20);
      if (puVar3 != (undefined8 *)0x0) {
        (**(code **)*puVar3)(puVar3,1);
        iVar4 = (int)param_1[5];
      }
      uVar13 = uVar13 & ~(uint)uVar15;
      puVar9 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar9 = puVar1;
      }
      iVar5 = (int)uVar14;
      lVar12 = (longlong)iVar5;
      uVar6 = puVar9[lVar12] & uVar13;
      if (uVar6 == 0) {
        iVar7 = iVar4 + 0x1e;
        if (-1 < iVar4 + -1) {
          iVar7 = iVar4 + -1;
        }
        iVar7 = iVar7 >> 5;
        iVar8 = iVar7;
        if (iVar7 < iVar5) {
          iVar8 = iVar5;
        }
        if (iVar7 <= iVar5) break;
        lVar10 = 0;
        while( true ) {
          iVar11 = iVar11 + 0x20;
          uVar6 = puVar9[lVar12 + lVar10 + 1];
          if (uVar6 != 0) break;
          lVar10 = lVar10 + 1;
          if (iVar8 - lVar12 == lVar10) goto LAB_140a07d95;
        }
        uVar14 = (ulonglong)(iVar5 + (int)lVar10 + 1);
        uVar13 = 0xffffffff;
      }
      uVar15 = (ulonglong)(-uVar6 & uVar6);
      uVar2 = uVar15 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iVar5 = (iVar11 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    } while (iVar5 < iVar4);
  }
LAB_140a07d95:
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_1446f4a44(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar13 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (((int)uVar13 <= *(int *)((longlong)param_1 + 0x2c)) &&
     (*(int *)((longlong)param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar6 = 0x80;
  if (0x80 < (int)uVar13) {
    uVar6 = uVar13;
  }
  *(uint *)((longlong)param_1 + 0x2c) = uVar6;
  FUN_1446efbd8(puVar1,0);
  return;
}



// FUNCTION 140a07e48 FUN_140a07e48 body=528 status=ok
// SIG undefined FUN_140a07e48(void)

void FUN_140a07e48(longlong *param_1,int param_2)

{
  uint *puVar1;
  undefined8 *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  ulonglong uVar9;
  longlong lVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  
  puVar1 = (uint *)(param_1 + 2);
  iVar3 = (int)param_1[5];
  if (iVar3 == 0) {
    uVar14 = 0;
    uVar15 = 1;
    iVar11 = 0;
    iVar7 = 0;
  }
  else {
    puVar8 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar8 = puVar1;
    }
    uVar12 = *puVar8;
    if (uVar12 == 0) {
      iVar11 = iVar3 + 0x1e;
      if (-1 < iVar3 + -1) {
        iVar11 = iVar3 + -1;
      }
      uVar14 = 0;
      uVar9 = (ulonglong)(uint)(iVar11 >> 5);
      if (iVar11 >> 5 < 1) {
        uVar9 = uVar14;
      }
      iVar11 = 0;
      do {
        if (uVar9 == uVar14) goto LAB_140a07e7b;
        iVar11 = iVar11 + 0x20;
        uVar12 = puVar8[uVar14 + 1];
        uVar14 = uVar14 + 1;
      } while (uVar12 == 0);
    }
    else {
      uVar14 = 0;
      iVar11 = 0;
    }
    uVar15 = (ulonglong)(-uVar12 & uVar12);
    uVar9 = uVar15 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar9 != 0) {
      for (; uVar9 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    iVar7 = (iVar11 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
    if (iVar3 <= iVar7) {
      iVar7 = iVar3;
    }
  }
  if (iVar7 < iVar3) {
    uVar12 = 0xffffffff;
    do {
      puVar2 = *(undefined8 **)(*param_1 + 0x18 + (longlong)iVar7 * 0x28);
      if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)(puVar2,1);
        iVar3 = (int)param_1[5];
      }
      uVar12 = uVar12 & ~(uint)uVar15;
      puVar8 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar8 = puVar1;
      }
      iVar7 = (int)uVar14;
      lVar13 = (longlong)iVar7;
      uVar4 = puVar8[lVar13] & uVar12;
      if (uVar4 == 0) {
        iVar5 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar5 = iVar3 + -1;
        }
        iVar5 = iVar5 >> 5;
        iVar6 = iVar5;
        if (iVar5 < iVar7) {
          iVar6 = iVar7;
        }
        if (iVar5 <= iVar7) break;
        lVar10 = 0;
        while( true ) {
          iVar11 = iVar11 + 0x20;
          uVar4 = puVar8[lVar13 + lVar10 + 1];
          if (uVar4 != 0) break;
          lVar10 = lVar10 + 1;
          if (iVar6 - lVar13 == lVar10) goto LAB_140a07e7b;
        }
        uVar14 = (ulonglong)(iVar7 + (int)lVar10 + 1);
        uVar12 = 0xffffffff;
      }
      uVar15 = (ulonglong)(-uVar4 & uVar4);
      uVar9 = uVar15 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      iVar7 = (iVar11 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
    } while (iVar7 < iVar3);
  }
LAB_140a07e7b:
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_140549ad6(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar12 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (((int)uVar12 <= *(int *)((longlong)param_1 + 0x2c)) &&
     (*(int *)((longlong)param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar4 = 0x80;
  if (0x80 < (int)uVar12) {
    uVar4 = uVar12;
  }
  *(uint *)((longlong)param_1 + 0x2c) = uVar4;
  FUN_1446efbd8(puVar1,0);
  return;
}



// FUNCTION 140a08058 FUN_140a08058 body=2242 status=ok
// SIG undefined FUN_140a08058(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char FUN_140a08058(longlong param_1,double *param_2,double *param_3,double *param_4,double *param_5,
                  double *param_6)

{
  byte bVar1;
  double dVar2;
  double dVar3;
  double *pdVar4;
  double *pdVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 auVar16 [16];
  double dVar17;
  double dVar18;
  double dVar21;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  undefined1 auVar30 [16];
  double dVar31;
  double dVar32;
  undefined1 auVar33 [16];
  double dVar34;
  double dVar35;
  undefined1 auStack_218 [32];
  double *local_1f8;
  double *local_1f0;
  undefined1 *local_1e0;
  undefined1 *local_1d8;
  double local_1d0;
  double dStack_1c8;
  double local_1c0;
  undefined8 local_1b8 [12];
  undefined1 local_158 [16];
  double *local_148;
  double *pdStack_140;
  double *local_138;
  undefined8 *puStack_130;
  double local_128;
  double dStack_120;
  undefined1 local_118 [16];
  undefined1 local_108 [24];
  ulonglong local_f0;
  
  pdVar5 = param_6;
  pdVar4 = param_5;
  auVar30 = _DAT_149934d80;
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_218;
  bVar1 = *(byte *)(param_1 + 0x1c);
  if (bVar1 == 4) {
    FUN_1447dc19e(param_1 + 0x30,local_158,param_2);
    local_1f0 = pdVar5;
    local_1f8 = pdVar4;
    cVar6 = FUN_140a08058(*(undefined8 *)(param_1 + 0x20),local_158,param_3,param_4);
    goto LAB_140a084be;
  }
  local_158 = ZEXT816(0);
  local_148 = (double *)0x0;
  pdStack_140 = (double *)&DAT_3ff0000000000000;
  local_138 = (double *)0x0;
  puStack_130 = (undefined8 *)0x0;
  local_128 = 0.0;
  dStack_120 = 0.0;
  local_118 = _DAT_149934d80;
  local_108._0_16_ = ZEXT816(0x3ff0000000000000);
  dVar17 = param_2[2] * param_2[2] + *param_2 * *param_2;
  dVar21 = param_2[3] * param_2[3] + param_2[1] * param_2[1];
  auVar16._8_8_ = -(ulonglong)(0.009999999776482582 < ABS(DAT_149934d80._8_8_ - (dVar17 + dVar21)));
  auVar16._0_8_ =
       -(ulonglong)(0.009999999776482582 < ABS((double)DAT_149934d80 - (dVar17 + dVar21)));
  iVar7 = movmskpd((int)(DAT_14c707940 ^ (ulonglong)auStack_218),auVar16);
  if (iVar7 == 0) {
    auVar16 = minpd(*(undefined1 (*) [16])(param_4 + 8),*(undefined1 (*) [16])(param_2 + 8));
    auVar19 = minpd(*(undefined1 (*) [16])(param_4 + 10),*(undefined1 (*) [16])(param_2 + 10));
    auVar33._8_8_ = -(ulonglong)(auVar16._8_8_ < 0.0);
    auVar33._0_8_ = -(ulonglong)(auVar16._0_8_ < 0.0);
    iVar7 = movmskpd(0,auVar33);
    auVar20._8_8_ = -(ulonglong)(auVar19._8_8_ < 0.0);
    auVar20._0_8_ = -(ulonglong)(auVar19._0_8_ < 0.0);
    uVar8 = movmskpd((int)param_1,auVar20);
    if ((uVar8 & 0x3fffffff) == 0 && iVar7 == 0) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c8460b0) && (FUN_144b3d300(&DAT_14c8460b0), DAT_14c8460b0 == -1))
      {
        DAT_14c8460a0 = 0x322bcc77322bcc77;
        DAT_14c8460a8 = 0x322bcc77322bcc77;
        _Init_thread_footer(&DAT_14c8460b0);
      }
      auVar16 = *(undefined1 (*) [16])(param_2 + 8);
      auVar33 = divpd(auVar30,auVar16);
      auVar30 = divpd(ZEXT816(0x3ff0000000000000),*(undefined1 (*) [16])(param_2 + 10));
      dVar18 = (double)(-(ulonglong)((double)(float)DAT_14c8460a0 < ABS(auVar16._0_8_)) &
                       auVar33._0_8_);
      dVar22 = (double)(-(ulonglong)
                         ((double)(float)((ulonglong)DAT_14c8460a0 >> 0x20) < ABS(auVar16._8_8_)) &
                       auVar33._8_8_);
      dVar12 = (double)(-(ulonglong)
                         ((double)(float)DAT_14c8460a8 <
                         ABS(SUB168(*(undefined1 (*) [16])(param_2 + 10),0))) & auVar30._0_8_);
      dVar27 = param_4[4] - param_2[4];
      dVar28 = param_4[5] - param_2[5];
      dVar32 = param_4[6] - param_2[6];
      dVar29 = -*param_2;
      dVar31 = -param_2[1];
      dVar23 = param_2[2] * -1.0;
      dVar25 = param_2[3] * 1.0;
      dVar13 = dVar28 * dVar29 - dVar27 * dVar31;
      dVar15 = dVar32 * dVar31 - dVar28 * dVar23;
      dVar34 = dVar27 * dVar23 - dVar32 * dVar29;
      dVar35 = dVar25 * 0.0 - dVar25 * 0.0;
      dVar15 = dVar15 + dVar15;
      dVar34 = dVar34 + dVar34;
      dVar13 = dVar13 + dVar13;
      dVar35 = dVar35 + dVar35;
      dVar2 = *param_4;
      dVar3 = param_4[1];
      dVar14 = param_4[2];
      dVar26 = param_4[3];
      dVar21 = param_2[1];
      dVar17 = param_2[1];
      dVar24 = dVar2 * dVar23 * 1.0 +
               ((dVar3 * dVar25 - *param_2 * dVar14 * -1.0) - dVar26 * dVar17);
      local_118._8_8_ = param_4[9] * dVar22;
      local_118._0_8_ = param_4[8] * dVar18;
      local_108._8_8_ = param_4[0xb] * 0.0;
      local_108._0_8_ = param_4[10] * dVar12;
      local_138 = (double *)
                  (((dVar13 * dVar31 - dVar23 * dVar34) + dVar25 * dVar15 + dVar27) * dVar18);
      puStack_130 = (undefined8 *)
                    (((dVar15 * dVar23 - dVar13 * dVar29) + dVar25 * dVar34 + dVar28) * dVar22);
      local_128 = ((dVar34 * dVar29 - dVar31 * dVar15) + dVar25 * dVar13 + dVar32) * dVar12;
      dStack_120 = ((dVar35 * dVar25 - dVar35 * dVar25) + dVar25 * dVar35 + 0.0) * 0.0;
      local_158._8_4_ = SUB84(dVar24,0);
      local_158._0_8_ =
           dVar3 * dVar23 * -1.0 + ((dVar2 * dVar25 - *param_2 * dVar26 * 1.0) - dVar14 * dVar21);
      local_158._12_4_ = (int)((ulonglong)dVar24 >> 0x20);
      local_148 = (double *)
                  (dVar26 * dVar23 * 1.0 +
                  dVar21 * dVar2 + (dVar25 * dVar14 - *param_2 * dVar3 * 1.0));
      pdStack_140 = (double *)
                    (dVar14 * dVar23 * -1.0 +
                    dVar17 * dVar3 + (dVar25 * dVar26 - *param_2 * dVar2 * -1.0));
    }
    else {
      FUN_1402db8fa(local_158,param_4,param_2);
    }
    puVar10 = (undefined8 *)local_158;
  }
  else {
    puVar10 = &DAT_14c846480;
  }
  puVar11 = local_1b8;
  for (lVar9 = 0xc; lVar9 != 0; lVar9 = lVar9 + -1) {
    *puVar11 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar11 = puVar11 + 1;
  }
  if (*(char *)(param_1 + 0x18) == '\x01') {
    local_1c0 = param_2[6] - param_4[6];
    local_1d0 = param_2[4] - param_4[4];
    dStack_1c8 = param_2[5] - param_4[5];
    if (pdVar5 == (double *)0x0) {
      local_158._8_8_ = &param_5;
      local_158._0_8_ = param_3;
      local_148 = &local_1d0;
      cVar6 = FUN_140a0891b(param_1,local_1b8);
    }
    else {
      local_158._8_8_ = &param_6;
      local_158._0_8_ = param_3;
      local_148 = (double *)&param_5;
      pdStack_140 = &local_1d0;
      local_138 = param_2;
      cVar6 = FUN_146ce0ed1(param_1,local_1b8);
    }
    goto LAB_140a084be;
  }
  switch(bVar1) {
  case 5:
  case 0xf:
    local_1d0 = (double)((ulonglong)local_1d0 & 0xffffffffffffff00);
    local_1d8 = local_158;
    local_158._8_8_ = param_2;
    local_158._0_8_ = &local_1d0;
    local_138 = pdVar4;
    puStack_130 = &param_6;
    local_1e0 = &LAB_146ce37aa;
    local_148 = param_3;
    pdStack_140 = param_4;
    FUN_146db006e(param_1);
    cVar6 = local_1d0._0_1_;
    goto LAB_140a084be;
  case 6:
    local_1f8 = pdVar5;
    cVar6 = FUN_146dd8a00(param_1,param_3,local_1b8,pdVar4);
    break;
  default:
    if (-1 < (char)bVar1) {
      if (bVar1 < 0x40) {
        cVar6 = '\0';
        goto LAB_140a084be;
      }
      param_1 = *(longlong *)(param_1 + 0x28);
      goto LAB_140a087a4;
    }
    local_1f8 = pdVar5;
    cVar6 = FUN_140a091ac(param_1,param_3,local_1b8,pdVar4);
    break;
  case 0xb:
LAB_140a087a4:
    local_158._8_8_ = 0x3ff0000000000000;
    local_158._0_8_ = 0x3ff0000000000000;
    local_1f0 = (double *)local_158;
    local_1f8 = pdVar5;
    local_148 = (double *)&DAT_3ff0000000000000;
    cVar6 = FUN_1405438ec(param_1,param_3,local_1b8,pdVar4);
    break;
  case 0xc:
    local_1f8 = pdVar5;
    cVar6 = FUN_140a09a7c(param_1,param_3,local_1b8,pdVar4);
  }
  if (cVar6 == '\x01' && param_6 != (double *)0x0) {
    dVar13 = *param_6;
    dVar35 = param_6[1];
    dVar2 = *param_2;
    dVar3 = param_2[1];
    dVar14 = param_2[2];
    dVar21 = param_2[3];
    dVar17 = param_2[3];
    dVar24 = dVar35 * dVar2 - dVar13 * dVar3;
    dVar26 = param_6[2] * dVar3 - dVar35 * dVar14;
    dVar12 = dVar13 * dVar14 - dVar2 * param_6[2];
    dVar26 = dVar26 + dVar26;
    dVar12 = dVar12 + dVar12;
    dVar24 = dVar24 + dVar24;
    *param_6 = (dVar24 * dVar3 - dVar12 * dVar14) + dVar21 * dVar26 + dVar13;
    param_6[1] = (dVar14 * dVar26 - dVar2 * dVar24) + dVar17 * dVar12 + dVar35;
    param_6[2] = dVar24 * dVar21 + param_6[2] + (dVar12 * dVar2 - dVar26 * dVar3);
    dVar26 = param_6[3] * param_2[8];
    dVar12 = param_6[4] * param_2[9];
    dVar14 = param_6[5] * param_2[10];
    dVar35 = *param_2;
    dVar2 = param_2[1];
    dVar3 = param_2[2];
    dVar21 = param_2[3];
    dVar17 = param_2[3];
    dVar15 = dVar12 * dVar35 - dVar26 * dVar2;
    dVar34 = dVar14 * dVar2 - dVar12 * dVar3;
    dVar18 = dVar26 * dVar3 - dVar35 * dVar14;
    dVar34 = dVar34 + dVar34;
    dVar18 = dVar18 + dVar18;
    dVar15 = dVar15 + dVar15;
    dVar13 = param_2[5];
    dVar24 = param_2[6];
    param_6[3] = (dVar15 * dVar2 - dVar18 * dVar3) + dVar21 * dVar34 + dVar26 + param_2[4];
    param_6[4] = (dVar3 * dVar34 - dVar35 * dVar15) + dVar17 * dVar18 + dVar12 + dVar13;
    param_6[5] = dVar15 * dVar21 + dVar14 + (dVar18 * dVar35 - dVar34 * dVar2) + dVar24;
    cVar6 = '\x01';
  }
LAB_140a084be:
  if ((local_f0 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return cVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a0891b FUN_140a0891b body=1031 status=ok
// SIG undefined FUN_140a0891b(void)

void FUN_140a0891b(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 uVar1;
  double *pdVar2;
  undefined1 auStack_b8 [32];
  double *local_98;
  double local_88;
  double dStack_80;
  double local_78;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar1 = *(undefined1 *)(param_1 + 0x1c);
  switch(uVar1) {
  case 0x80:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_b8);
  case 0x81:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_b8);
  case 0x82:
  case 0x84:
  case 0x85:
  case 0x86:
  case 0x87:
    goto switchD_140a0896b_caseD_2;
  case 0x83:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_b8);
  case 0x88:
    pdVar2 = (double *)param_3[2];
    if (pdVar2[2] * pdVar2[2] + *pdVar2 * *pdVar2 + pdVar2[1] * pdVar2[1] < 0.0001) {
      local_88 = 1.0;
      dStack_80 = 0.0;
      local_78 = 0.0;
    }
    else {
      local_78 = pdVar2[2];
      local_88 = *pdVar2;
      dStack_80 = pdVar2[1];
    }
    local_98 = &local_88;
    FUN_140a08dd9(param_1,*param_3,param_2,*(undefined8 *)param_3[1]);
    goto LAB_140a08a55;
  }
  switch(uVar1) {
  case 0:
    pdVar2 = (double *)param_3[2];
    if (pdVar2[2] * pdVar2[2] + *pdVar2 * *pdVar2 + pdVar2[1] * pdVar2[1] < 0.0001) {
      local_88 = 1.0;
      dStack_80 = 0.0;
      local_78 = 0.0;
    }
    else {
      local_78 = pdVar2[2];
      local_88 = *pdVar2;
      dStack_80 = pdVar2[1];
    }
    local_98 = &local_88;
    FUN_140a09596(param_1,*param_3,param_2,*(undefined8 *)param_3[1]);
    break;
  case 1:
    pdVar2 = (double *)param_3[2];
    if (pdVar2[2] * pdVar2[2] + *pdVar2 * *pdVar2 + pdVar2[1] * pdVar2[1] < 0.0001) {
      local_88 = 1.0;
      dStack_80 = 0.0;
      local_78 = 0.0;
    }
    else {
      local_78 = pdVar2[2];
      local_88 = *pdVar2;
      dStack_80 = pdVar2[1];
    }
    local_98 = &local_88;
    FUN_140a08fc0(param_1,*param_3,param_2,*(undefined8 *)param_3[1]);
    break;
  case 3:
    pdVar2 = (double *)param_3[2];
    if (pdVar2[2] * pdVar2[2] + *pdVar2 * *pdVar2 + pdVar2[1] * pdVar2[1] < 0.0001) {
      local_88 = 1.0;
      dStack_80 = 0.0;
      local_78 = 0.0;
    }
    else {
      local_78 = pdVar2[2];
      local_88 = *pdVar2;
      dStack_80 = pdVar2[1];
    }
    local_98 = &local_88;
    FUN_140a097c8(param_1,*param_3,param_2,*(undefined8 *)param_3[1]);
    break;
  case 4:
    FUN_1447dc19e(param_1 + 0x30,&local_88,param_2);
    FUN_140a0891b(*(undefined8 *)(param_1 + 0x20),&local_88,param_3);
    break;
  case 8:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_b8);
  default:
    switch(uVar1) {
    case 0x40:
      break;
    case 0x41:
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_b8);
    case 0x43:
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_b8);
    case 0x48:
      pdVar2 = (double *)param_3[2];
      if (pdVar2[2] * pdVar2[2] + *pdVar2 * *pdVar2 + pdVar2[1] * pdVar2[1] < 0.0001) {
        local_88 = 1.0;
        dStack_80 = 0.0;
        local_78 = 0.0;
      }
      else {
        local_78 = pdVar2[2];
        local_88 = *pdVar2;
        dStack_80 = pdVar2[1];
      }
      local_98 = &local_88;
      FUN_140a0937f(*(undefined8 *)(param_1 + 0x28),*param_3,param_2,*(undefined8 *)param_3[1]);
      goto LAB_140a08a55;
    }
  case 2:
  case 5:
  case 6:
  case 7:
switchD_140a0896b_caseD_2:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_b8);
  }
LAB_140a08a55:
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a08dd9 FUN_140a08dd9 body=486 status=ok
// SIG undefined FUN_140a08dd9(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140a08dd9(longlong param_1,longlong param_2,double *param_3,undefined8 param_4,
                  double *param_5)

{
  double dVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  float fVar8;
  double dVar9;
  float fVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auStack_c8 [32];
  undefined1 *local_a8;
  undefined8 local_a0;
  undefined1 *local_98;
  longlong local_88;
  float local_80;
  undefined4 local_7c;
  code *local_78;
  longlong local_70;
  float local_68;
  undefined4 local_64;
  code *local_60;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  dVar7 = *(double *)(param_2 + 0x80) - *(double *)(param_2 + 0x68);
  dVar1 = *(double *)(param_2 + 0x78) - *(double *)(param_2 + 0x60);
  dVar6 = *(double *)(param_2 + 0x70) - *(double *)(param_2 + 0x58);
  if ((dVar6 <= dVar7 || dVar6 <= dVar1) && (dVar6 = dVar1, dVar1 <= dVar7)) {
    dVar6 = dVar7;
  }
  dVar9 = *(double *)(param_1 + 0x80) - *(double *)(param_1 + 0x68);
  dVar1 = *(double *)(param_1 + 0x78) - *(double *)(param_1 + 0x60);
  dVar7 = *(double *)(param_1 + 0x70) - *(double *)(param_1 + 0x58);
  if ((dVar7 <= dVar1 || dVar7 <= dVar9) && (dVar7 = dVar1, dVar1 <= dVar9)) {
    dVar7 = dVar9;
  }
  local_68 = (float)*(double *)(param_2 + 0x10);
  local_64 = 0;
  local_60 = FUN_144a12d46;
  local_80 = (float)*(double *)(param_1 + 0x10);
  local_7c = 0;
  local_78 = FUN_144a12d46;
  fVar2 = (float)param_3[2];
  fVar4 = (float)param_3[3];
  fVar8 = (float)*param_3;
  fVar10 = (float)param_3[1];
  local_48._0_4_ = (float)param_3[4];
  local_48._4_4_ = (float)param_3[5];
  local_48._8_4_ = (float)param_3[6];
  local_48._12_4_ = 0;
  fVar3 = fVar8 * fVar8 + fVar10 * fVar10;
  fVar5 = fVar2 * fVar2 + fVar4 * fVar4;
  auVar11._0_4_ = fVar5 + fVar3;
  auVar11._4_4_ = fVar5 + fVar3;
  auVar11._8_4_ = fVar3 + fVar5;
  auVar11._12_4_ = fVar3 + fVar5;
  auVar12 = sqrtps(auVar11,auVar11);
  auVar12 = divps(_DAT_1499314a0,auVar12);
  auVar13._0_4_ = auVar12._0_4_ * fVar8;
  auVar13._4_4_ = auVar12._4_4_ * fVar10;
  auVar13._8_4_ = auVar12._8_4_ * fVar2;
  auVar13._12_4_ = auVar12._12_4_ * fVar4;
  auVar12._4_4_ = -(uint)(1e-08 <= auVar11._4_4_);
  auVar12._0_4_ = -(uint)(1e-08 <= auVar11._0_4_);
  auVar12._8_4_ = -(uint)(1e-08 <= auVar11._8_4_);
  auVar12._12_4_ = -(uint)(1e-08 <= auVar11._12_4_);
  local_38 = blendvps(_DAT_149932320,auVar13,auVar12);
  local_a8 = local_38;
  if (dVar7 <= dVar6) {
    dVar7 = dVar6;
  }
  local_98 = local_58;
  local_58._4_4_ = (float)param_5[1];
  local_58._0_4_ = (float)*param_5;
  local_58._8_4_ = (float)param_5[2];
  local_58._12_4_ = 0;
  local_a0 = param_4;
  local_88 = param_1;
  local_70 = param_2;
  FUN_144946907(&local_88,&local_70,dVar7);
  if ((local_20 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140a08fc0 FUN_140a08fc0 body=490 status=ok
// SIG undefined FUN_140a08fc0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140a08fc0(longlong param_1,longlong param_2,double *param_3,undefined8 param_4,
                  double *param_5)

{
  double dVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  float fVar8;
  double dVar9;
  float fVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auStack_c8 [32];
  undefined1 *local_a8;
  undefined8 local_a0;
  undefined1 *local_98;
  longlong local_88;
  float local_80;
  undefined4 local_7c;
  code *local_78;
  longlong local_70;
  float local_68;
  undefined4 local_64;
  code *local_60;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  dVar7 = *(double *)(param_2 + 0x80) - *(double *)(param_2 + 0x68);
  dVar1 = *(double *)(param_2 + 0x78) - *(double *)(param_2 + 0x60);
  dVar6 = *(double *)(param_2 + 0x70) - *(double *)(param_2 + 0x58);
  if ((dVar6 <= dVar7 || dVar6 <= dVar1) && (dVar6 = dVar1, dVar1 <= dVar7)) {
    dVar6 = dVar7;
  }
  dVar9 = *(double *)(param_1 + 0x48) - *(double *)(param_1 + 0x30);
  dVar1 = *(double *)(param_1 + 0x40) - *(double *)(param_1 + 0x28);
  dVar7 = *(double *)(param_1 + 0x38) - *(double *)(param_1 + 0x20);
  if ((dVar7 <= dVar1 || dVar7 <= dVar9) && (dVar7 = dVar1, dVar1 <= dVar9)) {
    dVar7 = dVar9;
  }
  local_68 = (float)*(double *)(param_2 + 0x10);
  local_64 = 0;
  local_60 = FUN_144a12d46;
  local_80 = (float)*(double *)(param_1 + 0x10);
  local_7c = 0;
  local_78 = FUN_144857b9e;
  fVar2 = (float)param_3[2];
  fVar4 = (float)param_3[3];
  fVar8 = (float)*param_3;
  fVar10 = (float)param_3[1];
  local_48._0_4_ = (float)param_3[4];
  local_48._4_4_ = (float)param_3[5];
  local_48._8_4_ = (float)param_3[6];
  local_48._12_4_ = 0;
  fVar3 = fVar8 * fVar8 + fVar10 * fVar10;
  fVar5 = fVar2 * fVar2 + fVar4 * fVar4;
  auVar11._0_4_ = fVar5 + fVar3;
  auVar11._4_4_ = fVar5 + fVar3;
  auVar11._8_4_ = fVar3 + fVar5;
  auVar11._12_4_ = fVar3 + fVar5;
  auVar12 = sqrtps(auVar11,auVar11);
  auVar12 = divps(_DAT_1499314a0,auVar12);
  auVar13._0_4_ = auVar12._0_4_ * fVar8;
  auVar13._4_4_ = auVar12._4_4_ * fVar10;
  auVar13._8_4_ = auVar12._8_4_ * fVar2;
  auVar13._12_4_ = auVar12._12_4_ * fVar4;
  auVar12._4_4_ = -(uint)(1e-08 <= auVar11._4_4_);
  auVar12._0_4_ = -(uint)(1e-08 <= auVar11._0_4_);
  auVar12._8_4_ = -(uint)(1e-08 <= auVar11._8_4_);
  auVar12._12_4_ = -(uint)(1e-08 <= auVar11._12_4_);
  local_38 = blendvps(_DAT_149932320,auVar13,auVar12);
  local_a8 = local_38;
  if (dVar7 <= dVar6) {
    dVar7 = dVar6;
  }
  local_98 = local_58;
  local_58._4_4_ = (float)param_5[1];
  local_58._0_4_ = (float)*param_5;
  local_58._8_4_ = (float)param_5[2];
  local_58._12_4_ = 0;
  local_a0 = param_4;
  local_88 = param_1;
  local_70 = param_2;
  FUN_144946907(&local_88,&local_70,dVar7);
  if ((local_20 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140a091ac FUN_140a091ac body=280 status=ok
// SIG undefined FUN_140a091ac(void)

undefined4
FUN_140a091ac(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined4 uVar1;
  undefined1 auStack_178 [32];
  undefined8 local_158;
  undefined8 *local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  double local_128;
  double dStack_120;
  double local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined1 local_d0 [144];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_178;
  FUN_140a092c6(local_d0,param_2,param_1 + 0x38);
  local_148 = *param_3;
  uStack_140 = param_3[1];
  local_118 = (double)param_3[6] * *(double *)(param_1 + 0x48);
  local_138 = *(undefined4 *)(param_3 + 2);
  uStack_134 = *(undefined4 *)((longlong)param_3 + 0x14);
  uStack_130 = *(undefined4 *)(param_3 + 3);
  uStack_12c = *(undefined4 *)((longlong)param_3 + 0x1c);
  dStack_120 = (double)param_3[5] * *(double *)(param_1 + 0x40);
  local_128 = (double)param_3[4] * *(double *)(param_1 + 0x38);
  uStack_110 = 0;
  local_108 = 0x3ff0000000000000;
  uStack_100 = 0x3ff0000000000000;
  local_f8 = 0x3ff0000000000000;
  uStack_f0 = 0;
  local_d8 = *(undefined8 *)(param_1 + 0x30);
  local_150 = &local_e8;
  local_e8 = *(undefined8 *)(param_1 + 0x20);
  uStack_e0 = *(undefined8 *)(param_1 + 0x28);
  local_158 = param_5;
  uVar1 = FUN_1405438ec(*(undefined8 *)(param_1 + 0x88),local_d0,&local_148,param_4);
  FUN_140062896(local_d0);
  if ((local_40 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a092c6 FUN_140a092c6 body=184 status=ok
// SIG undefined FUN_140a092c6(void)

undefined8 FUN_140a092c6(undefined8 param_1,longlong param_2,double *param_3)

{
  undefined1 auStack_e8 [32];
  longlong local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  undefined1 local_a8 [144];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_b0 = param_3[2] * *(double *)(param_2 + 0x30);
  local_b8 = param_3[1] * *(double *)(param_2 + 0x28);
  local_c0 = *param_3 * *(double *)(param_2 + 0x20);
  local_c8 = *(longlong *)(param_2 + 0x88);
  if (local_c8 != 0) {
    LOCK();
    *(int *)(local_c8 + 8) = *(int *)(local_c8 + 8) + 1;
    UNLOCK();
  }
  FUN_1405445a8(local_a8,&local_c8,&local_c0,0);
  FUN_1405447d8(param_1,local_a8);
  FUN_140062896(local_a8);
  if ((local_18 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a0937f FUN_140a0937f body=534 status=ok
// SIG undefined FUN_140a0937f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140a0937f(longlong param_1,longlong param_2,double *param_3,undefined8 param_4,
                  double *param_5)

{
  double dVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  float fVar8;
  double dVar9;
  float fVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auStack_d8 [32];
  undefined1 *local_b8;
  undefined8 local_b0;
  undefined1 *local_a8;
  longlong local_98;
  float local_90;
  undefined4 local_8c;
  code *local_88;
  longlong local_80;
  float local_78;
  undefined4 local_74;
  code *local_70;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  dVar7 = *(double *)(param_2 + 0x80) - *(double *)(param_2 + 0x68);
  dVar1 = *(double *)(param_2 + 0x78) - *(double *)(param_2 + 0x60);
  dVar6 = *(double *)(param_2 + 0x70) - *(double *)(param_2 + 0x58);
  if ((dVar6 <= dVar1 || dVar6 <= dVar7) && (dVar6 = dVar1, dVar1 <= dVar7)) {
    dVar6 = dVar7;
  }
  dVar7 = (double)*(float *)(param_1 + 0x4c) - (double)*(float *)(param_1 + 0x40);
  dVar1 = (double)*(float *)(param_1 + 0x54) - (double)*(float *)(param_1 + 0x48);
  dVar9 = (double)*(float *)(param_1 + 0x50) - (double)*(float *)(param_1 + 0x44);
  if ((dVar7 <= dVar9 || dVar7 <= dVar1) && (dVar7 = dVar9, dVar9 <= dVar1)) {
    dVar7 = dVar1;
  }
  local_78 = (float)*(double *)(param_2 + 0x10);
  local_74 = 0;
  local_70 = FUN_144a12d46;
  local_90 = (float)*(double *)(param_1 + 0x10);
  local_8c = 0;
  local_88 = FUN_14172546a;
  fVar2 = (float)param_3[2];
  fVar4 = (float)param_3[3];
  fVar8 = (float)*param_3;
  fVar10 = (float)param_3[1];
  local_58._0_4_ = (float)param_3[4];
  local_58._4_4_ = (float)param_3[5];
  local_58._8_4_ = (float)param_3[6];
  local_58._12_4_ = 0;
  fVar3 = fVar8 * fVar8 + fVar10 * fVar10;
  fVar5 = fVar2 * fVar2 + fVar4 * fVar4;
  auVar11._0_4_ = fVar5 + fVar3;
  auVar11._4_4_ = fVar5 + fVar3;
  auVar11._8_4_ = fVar3 + fVar5;
  auVar11._12_4_ = fVar3 + fVar5;
  auVar12 = sqrtps(auVar11,auVar11);
  auVar12 = divps(_DAT_1499314a0,auVar12);
  auVar13._0_4_ = auVar12._0_4_ * fVar8;
  auVar13._4_4_ = auVar12._4_4_ * fVar10;
  auVar13._8_4_ = auVar12._8_4_ * fVar2;
  auVar13._12_4_ = auVar12._12_4_ * fVar4;
  auVar12._4_4_ = -(uint)(1e-08 <= auVar11._4_4_);
  auVar12._0_4_ = -(uint)(1e-08 <= auVar11._0_4_);
  auVar12._8_4_ = -(uint)(1e-08 <= auVar11._8_4_);
  auVar12._12_4_ = -(uint)(1e-08 <= auVar11._12_4_);
  local_48 = blendvps(_DAT_149932320,auVar13,auVar12);
  local_b8 = local_48;
  if (dVar7 <= dVar6) {
    dVar7 = dVar6;
  }
  local_a8 = local_68;
  local_68._4_4_ = (float)param_5[1];
  local_68._0_4_ = (float)*param_5;
  local_68._8_4_ = (float)param_5[2];
  local_68._12_4_ = 0;
  local_b0 = param_4;
  local_98 = param_1;
  local_80 = param_2;
  FUN_144946907(&local_98,&local_80,dVar7);
  if ((local_30 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140a09596 FUN_140a09596 body=561 status=ok
// SIG undefined FUN_140a09596(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140a09596(longlong param_1,longlong param_2,double *param_3,undefined8 param_4,
                  double *param_5)

{
  double dVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  float fVar8;
  double dVar9;
  float fVar10;
  double dVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auStack_e8 [32];
  undefined1 *local_c8;
  undefined8 local_c0;
  undefined1 *local_b8;
  longlong local_a8;
  float local_a0;
  float local_9c;
  undefined1 *local_98;
  longlong local_90;
  float local_88;
  undefined4 local_84;
  code *local_80;
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  dVar7 = *(double *)(param_2 + 0x80) - *(double *)(param_2 + 0x68);
  dVar1 = *(double *)(param_2 + 0x78) - *(double *)(param_2 + 0x60);
  dVar6 = *(double *)(param_2 + 0x70) - *(double *)(param_2 + 0x58);
  if ((dVar6 <= dVar7 || dVar6 <= dVar1) && (dVar6 = dVar1, dVar1 <= dVar7)) {
    dVar6 = dVar7;
  }
  dVar1 = *(double *)(param_1 + 0x10);
  dVar7 = (dVar1 + *(double *)(param_1 + 0x20)) - (*(double *)(param_1 + 0x20) - dVar1);
  dVar9 = (dVar1 + *(double *)(param_1 + 0x30)) - (*(double *)(param_1 + 0x30) - dVar1);
  dVar11 = (dVar1 + *(double *)(param_1 + 0x28)) - (*(double *)(param_1 + 0x28) - dVar1);
  if ((dVar7 <= dVar11 || dVar7 <= dVar9) && (dVar7 = dVar11, dVar11 <= dVar9)) {
    dVar7 = dVar9;
  }
  local_88 = (float)*(double *)(param_2 + 0x10);
  local_84 = 0;
  local_80 = FUN_144a12d46;
  local_a0 = (float)dVar1;
  local_98 = &LAB_144a386ca;
  fVar2 = (float)param_3[2];
  fVar4 = (float)param_3[3];
  fVar8 = (float)*param_3;
  fVar10 = (float)param_3[1];
  local_68._0_4_ = (float)param_3[4];
  local_68._4_4_ = (float)param_3[5];
  local_68._8_4_ = (float)param_3[6];
  local_68._12_4_ = 0;
  fVar3 = fVar8 * fVar8 + fVar10 * fVar10;
  fVar5 = fVar2 * fVar2 + fVar4 * fVar4;
  auVar12._0_4_ = fVar5 + fVar3;
  auVar12._4_4_ = fVar5 + fVar3;
  auVar12._8_4_ = fVar3 + fVar5;
  auVar12._12_4_ = fVar3 + fVar5;
  auVar13 = sqrtps(auVar12,auVar12);
  auVar13 = divps(_DAT_1499314a0,auVar13);
  auVar14._0_4_ = auVar13._0_4_ * fVar8;
  auVar14._4_4_ = auVar13._4_4_ * fVar10;
  auVar14._8_4_ = auVar13._8_4_ * fVar2;
  auVar14._12_4_ = auVar13._12_4_ * fVar4;
  auVar13._4_4_ = -(uint)(1e-08 <= auVar12._4_4_);
  auVar13._0_4_ = -(uint)(1e-08 <= auVar12._0_4_);
  auVar13._8_4_ = -(uint)(1e-08 <= auVar12._8_4_);
  auVar13._12_4_ = -(uint)(1e-08 <= auVar12._12_4_);
  local_58 = blendvps(_DAT_149932320,auVar14,auVar13);
  local_c8 = local_58;
  if (dVar7 <= dVar6) {
    dVar7 = dVar6;
  }
  local_b8 = local_78;
  local_78._4_4_ = (float)param_5[1];
  local_78._0_4_ = (float)*param_5;
  local_78._8_4_ = (float)param_5[2];
  local_78._12_4_ = 0;
  local_c0 = param_4;
  local_a8 = param_1;
  local_9c = local_a0;
  local_90 = param_2;
  FUN_144946907(&local_a8,&local_90,dVar7);
  if ((local_40 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140a097c8 FUN_140a097c8 body=691 status=ok
// SIG undefined FUN_140a097c8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140a097c8(longlong param_1,longlong param_2,double *param_3,undefined8 param_4,
                  double *param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  double dVar11;
  double dVar12;
  float fVar13;
  double dVar14;
  float fVar15;
  double dVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  double dVar19;
  undefined1 auVar20 [16];
  undefined1 auStack_118 [32];
  undefined1 *local_f8;
  undefined8 local_f0;
  undefined1 *local_e8;
  longlong local_d8;
  float local_d0;
  float local_cc;
  undefined1 *local_c8;
  longlong local_c0;
  float local_b8;
  undefined4 local_b4;
  code *local_b0;
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_118;
  dVar12 = *(double *)(param_2 + 0x80) - *(double *)(param_2 + 0x68);
  dVar2 = *(double *)(param_2 + 0x78) - *(double *)(param_2 + 0x60);
  dVar11 = *(double *)(param_2 + 0x70) - *(double *)(param_2 + 0x58);
  if ((dVar11 <= dVar12 || dVar11 <= dVar2) && (dVar11 = dVar2, dVar2 <= dVar12)) {
    dVar11 = dVar12;
  }
  dVar2 = *(double *)(param_1 + 0x10);
  dVar12 = *(double *)(param_1 + 0x20);
  dVar14 = *(double *)(param_1 + 0x28);
  dVar16 = *(double *)(param_1 + 0x30);
  dVar1 = *(double *)(param_1 + 0x50);
  dVar3 = *(double *)(param_1 + 0x48) * dVar1 + dVar16;
  dVar4 = *(double *)(param_1 + 0x40) * dVar1 + dVar14;
  dVar19 = dVar1 * *(double *)(param_1 + 0x38) + dVar12;
  dVar1 = dVar16;
  if (dVar3 <= dVar16) {
    dVar1 = dVar3;
  }
  dVar5 = dVar14;
  if (dVar4 <= dVar14) {
    dVar5 = dVar4;
  }
  dVar6 = dVar12;
  if (dVar19 <= dVar12) {
    dVar6 = dVar19;
  }
  if (dVar16 <= dVar3) {
    dVar16 = dVar3;
  }
  if (dVar14 <= dVar4) {
    dVar14 = dVar4;
  }
  if (dVar12 <= dVar19) {
    dVar12 = dVar19;
  }
  dVar12 = (dVar12 + dVar2) - (dVar6 - dVar2);
  dVar16 = (dVar16 + dVar2) - (dVar1 - dVar2);
  dVar14 = (dVar14 + dVar2) - (dVar5 - dVar2);
  if ((dVar12 <= dVar14 || dVar12 <= dVar16) && (dVar12 = dVar14, dVar14 <= dVar16)) {
    dVar12 = dVar16;
  }
  local_b8 = (float)*(double *)(param_2 + 0x10);
  local_b4 = 0;
  local_b0 = FUN_144a12d46;
  local_d0 = (float)dVar2;
  local_c8 = &LAB_144a386e2;
  fVar7 = (float)param_3[2];
  fVar9 = (float)param_3[3];
  fVar13 = (float)*param_3;
  fVar15 = (float)param_3[1];
  local_98._0_4_ = (float)param_3[4];
  local_98._4_4_ = (float)param_3[5];
  local_98._8_4_ = (float)param_3[6];
  local_98._12_4_ = 0;
  fVar8 = fVar13 * fVar13 + fVar15 * fVar15;
  fVar10 = fVar7 * fVar7 + fVar9 * fVar9;
  auVar17._0_4_ = fVar10 + fVar8;
  auVar17._4_4_ = fVar10 + fVar8;
  auVar17._8_4_ = fVar8 + fVar10;
  auVar17._12_4_ = fVar8 + fVar10;
  auVar18 = sqrtps(auVar17,auVar17);
  auVar18 = divps(_DAT_1499314a0,auVar18);
  auVar20._0_4_ = auVar18._0_4_ * fVar13;
  auVar20._4_4_ = auVar18._4_4_ * fVar15;
  auVar20._8_4_ = auVar18._8_4_ * fVar7;
  auVar20._12_4_ = auVar18._12_4_ * fVar9;
  auVar18._4_4_ = -(uint)(1e-08 <= auVar17._4_4_);
  auVar18._0_4_ = -(uint)(1e-08 <= auVar17._0_4_);
  auVar18._8_4_ = -(uint)(1e-08 <= auVar17._8_4_);
  auVar18._12_4_ = -(uint)(1e-08 <= auVar17._12_4_);
  local_88 = blendvps(_DAT_149932320,auVar20,auVar18);
  local_f8 = local_88;
  if (dVar12 <= dVar11) {
    dVar12 = dVar11;
  }
  local_e8 = local_a8;
  local_a8._4_4_ = (float)param_5[1];
  local_a8._0_4_ = (float)*param_5;
  local_a8._8_4_ = (float)param_5[2];
  local_a8._12_4_ = 0;
  local_f0 = param_4;
  local_d8 = param_1;
  local_cc = local_d0;
  local_c0 = param_2;
  FUN_144946907(&local_d8,&local_c0,dVar12);
  if ((local_70 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140a09a7c FUN_140a09a7c body=2534 status=ok
// SIG undefined FUN_140a09a7c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_140a09a7c(longlong param_1,longlong param_2,double *param_3,double param_4,
                       undefined8 *param_5)

{
  int *piVar1;
  double dVar2;
  ushort uVar3;
  undefined1 auVar4 [16];
  double dVar5;
  char cVar6;
  byte bVar7;
  byte bVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  int *piVar13;
  ulonglong uVar14;
  float fVar15;
  float fVar16;
  double dVar17;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  float fVar26;
  double dVar27;
  float fVar32;
  float fVar34;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  float fVar33;
  float fVar35;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  double dVar36;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  float fVar46;
  float fVar48;
  float fVar49;
  undefined1 auVar47 [16];
  float fVar50;
  float fVar51;
  double dVar52;
  undefined1 auVar53 [16];
  float fVar54;
  float unaff_XMM9_Db;
  float unaff_XMM9_Dc;
  float unaff_XMM9_Dd;
  double dVar55;
  undefined1 auVar56 [16];
  float fVar57;
  undefined1 auStack_288 [32];
  undefined8 *local_268;
  undefined1 local_258 [8];
  float fStack_250;
  float fStack_24c;
  undefined1 local_248 [8];
  float fStack_240;
  float fStack_23c;
  double local_238;
  double dStack_230;
  double local_228;
  double dStack_220;
  undefined1 local_218 [16];
  undefined1 local_208 [16];
  int *local_1f8;
  undefined8 uStack_1f0;
  double local_1e8 [3];
  double local_1d0 [4];
  double *local_1b0;
  double *local_1a8;
  double local_1a0;
  undefined1 local_198 [16];
  double local_188 [3];
  double adStack_170 [3];
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_288;
  local_1a8 = &local_1a0;
  local_1e8[0] = *(double *)(param_2 + 0x58) - param_4;
  local_1e8[1] = *(double *)(param_2 + 0x60) - param_4;
  local_1e8[2] = *(double *)(param_2 + 0x68) - param_4;
  local_1d0[0] = *(double *)(param_2 + 0x70) + param_4;
  local_1d0[1] = *(double *)(param_2 + 0x78) + param_4;
  local_1d0[2] = param_4 + *(double *)(param_2 + 0x80);
  local_1d0[3] = (double)param_2;
  local_1b0 = param_3;
  local_1a0 = param_4;
  FUN_1400c6592(local_1e8,&local_158);
  local_1e8[2] = local_148;
  local_1e8[0] = local_158;
  local_1e8[1] = uStack_150;
  local_1d0[2] = uStack_130;
  local_1d0[0] = uStack_140;
  local_1d0[1] = uStack_138;
  local_1f8 = (int *)0x0;
  uStack_1f0 = 0;
  local_248._4_4_ = (float)uStack_150;
  local_248._0_4_ = (float)local_158;
  fStack_240 = (float)local_148;
  fStack_23c = 0.0;
  local_218._4_4_ = (float)uStack_150;
  local_218._0_4_ = (float)local_158;
  local_218._8_4_ = (float)local_148;
  local_218._12_4_ = 0;
  local_258._4_4_ = (float)uStack_138;
  local_258._0_4_ = (float)uStack_140;
  fStack_250 = (float)uStack_130;
  fStack_24c = 0.0;
  local_208._4_4_ = (float)uStack_138;
  local_208._0_4_ = (float)uStack_140;
  local_208._8_4_ = (float)uStack_130;
  local_208._12_4_ = 0;
  local_238 = local_158;
  dStack_230 = uStack_150;
  local_228 = uStack_140;
  dStack_220 = uStack_138;
  cVar6 = FUN_144947e24(param_1);
  if (cVar6 != '\0') {
    if (param_5 != (undefined8 *)0x0) {
      *param_5 = 0;
      param_5[1] = 0;
      uVar14 = 0;
      param_5[2] = 0;
      param_5[6] = 0xffefffffffffffff;
      param_5[3] = 0;
      param_5[4] = 0;
      param_5[5] = 0;
      if ((longlong)(int)uStack_1f0 != 0) {
        piVar1 = local_1f8 + (longlong)(int)uStack_1f0 * 2;
        uVar14 = 0;
        piVar13 = local_1f8;
        do {
          uVar3 = *(ushort *)(param_1 + 0x92);
          uVar12 = (uint)uVar3;
          iVar9 = piVar13[1] * uVar12 + *piVar13;
          local_100 = *(double *)(param_1 + 0x80);
          lVar11 = *(longlong *)(param_1 + 0x20);
          lVar10 = (longlong)iVar9;
          dVar55 = *(double *)(param_1 + 0xa0);
          dVar17 = (double)*(ushort *)(lVar11 + lVar10 * 2) * dVar55 + local_100;
          dVar27 = (double)*(ushort *)(lVar11 + 2 + lVar10 * 2) * dVar55 + local_100;
          dVar52 = (double)*(ushort *)(lVar11 + ((ulonglong)uVar3 + lVar10) * 2) * dVar55 +
                   local_100;
          local_100 = (double)*(ushort *)(lVar11 + 2 + ((ulonglong)uVar3 + lVar10) * 2) * dVar55 +
                      local_100;
          dVar55 = dVar52;
          if (local_100 <= dVar52) {
            dVar55 = local_100;
          }
          dVar2 = dVar27;
          if (dVar55 <= dVar27) {
            dVar2 = dVar55;
          }
          adStack_170[2] = dVar17;
          if (dVar2 <= dVar17) {
            adStack_170[2] = dVar2;
          }
          dVar55 = dVar52;
          if (dVar52 <= local_100) {
            dVar55 = local_100;
          }
          dVar2 = dVar27;
          if (dVar27 <= dVar55) {
            dVar2 = dVar55;
          }
          dVar55 = dVar17;
          if (dVar17 <= dVar2) {
            dVar55 = dVar2;
          }
          local_158 = *(double *)(param_1 + 0x50) * (double)(iVar9 % (int)uVar12);
          uStack_150 = (double)(iVar9 / (int)uVar12) * *(double *)(param_1 + 0x58);
          dVar2 = *(double *)(param_1 + 0x60);
          local_148 = dVar17 * dVar2;
          uStack_140 = ((double)(iVar9 % (int)uVar12) + 1.0) * *(double *)(param_1 + 0x50);
          uStack_138 = uStack_150;
          uStack_130 = dVar27 * dVar2;
          local_128 = local_158;
          local_108 = ((double)(iVar9 / (int)uVar12) + 1.0) * *(double *)(param_1 + 0x58);
          uStack_120 = local_108;
          local_118 = dVar52 * dVar2;
          local_110 = uStack_140;
          local_100 = local_100 * dVar2;
          dVar55 = dVar55 * dVar2;
          adStack_170[2] = adStack_170[2] * dVar2;
          local_188[2] = adStack_170[2];
          if (dVar55 <= adStack_170[2]) {
            local_188[2] = dVar55;
          }
          local_188[1] = uStack_150;
          if (local_108 <= uStack_150) {
            local_188[1] = local_108;
          }
          local_188[0] = local_158;
          if (uStack_140 <= local_158) {
            local_188[0] = uStack_140;
          }
          if (adStack_170[2] <= dVar55) {
            adStack_170[2] = dVar55;
          }
          adStack_170[1] = uStack_150;
          if (uStack_150 <= local_108) {
            adStack_170[1] = local_108;
          }
          adStack_170[0] = local_158;
          if (local_158 <= uStack_140) {
            adStack_170[0] = uStack_140;
          }
          lVar11 = -3;
          do {
            if ((local_1d0[lVar11 + 3] <= adStack_170[lVar11] &&
                 adStack_170[lVar11] != local_1d0[lVar11 + 3]) ||
               ((double)(&local_158)[lVar11] <= local_1d0[lVar11] &&
                local_1d0[lVar11] != (double)(&local_158)[lVar11])) goto LAB_140a0a3f7;
            lVar11 = lVar11 + 1;
          } while (lVar11 != 0);
          if (((int)*(uint *)(param_1 + 0x48) < 1) ||
             ((uVar12 = (uVar3 - 1) * piVar13[1] + *piVar13, uVar12 < *(uint *)(param_1 + 0x48) &&
              (*(char *)(*(longlong *)(param_1 + 0x40) + (ulonglong)uVar12) != -1)))) {
            local_268 = param_5;
            bVar7 = FUN_146da1766(local_1d0 + 3,&local_158,&uStack_140,&local_110);
            local_268 = param_5;
            bVar8 = FUN_146da1766(local_1d0 + 3,&local_158,&local_110,&local_128);
            uVar14 = (ulonglong)(byte)((byte)uVar14 | bVar8 | bVar7);
          }
LAB_140a0a3f7:
          piVar13 = piVar13 + 2;
        } while (piVar13 != piVar1);
      }
      goto LAB_140a0a0b7;
    }
    fVar15 = (float)param_3[2];
    fVar20 = (float)param_3[3];
    fVar26 = (float)*param_3;
    fVar32 = (float)param_3[1];
    fVar16 = fVar26 * fVar26 + fVar32 * fVar32;
    fVar21 = fVar15 * fVar15 + fVar20 * fVar20;
    auVar37._0_4_ = fVar21 + fVar16;
    auVar37._4_4_ = fVar21 + fVar16;
    auVar37._8_4_ = fVar16 + fVar21;
    auVar37._12_4_ = fVar16 + fVar21;
    auVar56._4_4_ = -(uint)(1e-08 <= auVar37._4_4_);
    auVar56._0_4_ = -(uint)(1e-08 <= auVar37._0_4_);
    auVar56._8_4_ = -(uint)(1e-08 <= auVar37._8_4_);
    auVar56._12_4_ = -(uint)(1e-08 <= auVar37._12_4_);
    auVar37 = sqrtps(auVar37,auVar37);
    auVar37 = divps(_DAT_1499314a0,auVar37);
    auVar42._0_4_ = auVar37._0_4_ * fVar26 * -1.0;
    auVar42._4_4_ = auVar37._4_4_ * fVar32 * -1.0;
    auVar42._8_4_ = auVar37._8_4_ * fVar15 * -1.0;
    auVar42._12_4_ = auVar37._12_4_ * fVar20 * 1.0;
    auVar56 = blendvps(_DAT_149f51f60,auVar42,auVar56);
    if ((longlong)(int)uStack_1f0 != 0) {
      dVar55 = param_3[6];
      dVar17 = param_3[4];
      dVar27 = param_3[5];
      piVar1 = local_1f8 + (longlong)(int)uStack_1f0 * 2;
      fVar15 = auVar56._0_4_;
      fVar16 = auVar56._4_4_;
      fVar20 = auVar56._8_4_;
      fVar21 = auVar56._12_4_;
      piVar13 = local_1f8;
      do {
        uVar3 = *(ushort *)(param_1 + 0x92);
        uVar12 = (uint)uVar3;
        iVar9 = piVar13[1] * uVar12 + *piVar13;
        dVar52 = *(double *)(param_1 + 0x80);
        lVar11 = *(longlong *)(param_1 + 0x20);
        lVar10 = (longlong)iVar9;
        dVar2 = *(double *)(param_1 + 0xa0);
        dVar36 = (double)*(ushort *)(lVar11 + lVar10 * 2) * dVar2 + dVar52;
        auVar38._0_4_ = (float)dVar36;
        auVar38._4_8_ = (ulonglong)dVar36 >> 0x20;
        auVar38._12_4_ = 0;
        fVar32 = (float)((double)*(ushort *)(lVar11 + 2 + lVar10 * 2) * dVar2 + dVar52);
        fVar57 = (float)((double)*(ushort *)(lVar11 + ((ulonglong)uVar3 + lVar10) * 2) * dVar2 +
                        dVar52);
        fVar51 = (float)(iVar9 / (int)uVar12);
        fVar26 = (float)(iVar9 % (int)uVar12);
        fVar54 = (float)((double)*(ushort *)(lVar11 + 2 + ((ulonglong)uVar3 + lVar10) * 2) * dVar2 +
                        dVar52);
        auVar56 = insertps(ZEXT416((uint)fVar26),ZEXT416((uint)fVar51),0x1c);
        auVar45 = insertps(auVar56,auVar38,0x20);
        auVar37 = insertps(ZEXT416((uint)(fVar26 + 1.0)),ZEXT416((uint)fVar51),0x1c);
        auVar47 = insertps(auVar37,ZEXT416((uint)fVar32),0x20);
        auVar37 = insertps(ZEXT416((uint)fVar26),ZEXT416((uint)(fVar51 + 1.0)),0x1c);
        auVar42 = insertps(auVar37,ZEXT416((uint)fVar57),0x20);
        auVar37 = insertps(ZEXT416((uint)(fVar26 + 1.0)),ZEXT416((uint)(fVar51 + 1.0)),0x1c);
        auVar53._4_4_ = unaff_XMM9_Db;
        auVar53._0_4_ = fVar54;
        auVar53._8_4_ = unaff_XMM9_Dc;
        auVar53._12_4_ = unaff_XMM9_Dd;
        auVar53 = insertps(auVar37,auVar53,0x20);
        fVar26 = fVar57;
        if (fVar54 <= fVar57) {
          fVar26 = fVar54;
        }
        fVar51 = fVar32;
        if (fVar26 <= fVar32) {
          fVar51 = fVar26;
        }
        fVar26 = auVar38._0_4_;
        if (fVar51 <= auVar38._0_4_) {
          fVar26 = fVar51;
        }
        if (fVar57 <= fVar54) {
          fVar57 = fVar54;
        }
        if (fVar32 <= fVar57) {
          fVar32 = fVar57;
        }
        if (auVar38._0_4_ <= fVar32) {
          auVar38._0_4_ = fVar32;
          auVar38._12_4_ = 0;
        }
        auVar37 = insertps(auVar37,auVar38,0x20);
        auVar4._4_4_ = (int)((ulonglong)dVar36 >> 0x20);
        auVar4._0_4_ = fVar26;
        auVar4._8_8_ = 0;
        auVar56 = insertps(auVar56,auVar4,0x20);
        fVar26 = *(float *)(param_1 + 0x70);
        fVar32 = *(float *)(param_1 + 0x74);
        fVar57 = *(float *)(param_1 + 0x78);
        fVar51 = *(float *)(param_1 + 0x7c);
        local_158 = (double)CONCAT44(auVar45._4_4_ * fVar32,auVar45._0_4_ * fVar26);
        uStack_150 = (double)CONCAT44(auVar45._12_4_ * fVar51,auVar45._8_4_ * fVar57);
        local_148 = (double)CONCAT44(auVar47._4_4_ * fVar32,auVar47._0_4_ * fVar26);
        uStack_140 = (double)CONCAT44(auVar47._12_4_ * fVar51,auVar47._8_4_ * fVar57);
        uStack_138 = (double)CONCAT44(auVar42._4_4_ * fVar32,auVar42._0_4_ * fVar26);
        uStack_130 = (double)CONCAT44(auVar42._12_4_ * fVar51,auVar42._8_4_ * fVar57);
        local_128 = (double)CONCAT44(auVar53._4_4_ * fVar32,auVar53._0_4_ * fVar26);
        uStack_120 = (double)CONCAT44(auVar53._12_4_ * fVar51,auVar53._8_4_ * fVar57);
        auVar45._0_8_ = CONCAT44(auVar56._4_4_ * fVar32,auVar56._0_4_ * fVar26);
        auVar45._8_4_ = auVar56._8_4_ * fVar57;
        auVar45._12_4_ = auVar56._12_4_ * fVar51;
        auVar28._0_4_ = auVar37._0_4_ * fVar26;
        auVar28._4_4_ = auVar37._4_4_ * fVar32;
        auVar28._8_4_ = auVar37._8_4_ * fVar57;
        auVar28._12_4_ = auVar37._12_4_ * fVar51;
        auVar39._8_4_ = auVar45._8_4_;
        auVar39._0_8_ = auVar45._0_8_;
        auVar39._12_4_ = auVar45._12_4_;
        auVar37 = minps(auVar39,auVar28);
        auVar56 = maxps(auVar45,auVar28);
        auVar47._4_4_ = -(uint)(auVar56._4_4_ < (float)local_248._4_4_);
        auVar47._0_4_ = -(uint)(auVar56._0_4_ < (float)local_248._0_4_);
        auVar47._8_4_ = -(uint)(auVar56._8_4_ < fStack_240);
        auVar47._12_4_ = -(uint)(auVar56._12_4_ < fStack_23c);
        auVar29._4_4_ = -(uint)((float)local_258._4_4_ < auVar37._4_4_);
        auVar29._0_4_ = -(uint)((float)local_258._0_4_ < auVar37._0_4_);
        auVar29._8_4_ = -(uint)(fStack_250 < auVar37._8_4_);
        auVar29._12_4_ = -(uint)(fStack_24c < auVar37._12_4_);
        iVar9 = movmskps(iVar9 / (int)uVar12,auVar29 | auVar47);
        if ((iVar9 == 0) &&
           (((int)*(uint *)(param_1 + 0x48) < 1 ||
            ((uVar12 = (uVar3 - 1) * piVar13[1] + *piVar13, uVar12 < *(uint *)(param_1 + 0x48) &&
             (*(char *)(*(longlong *)(param_1 + 0x40) + (ulonglong)uVar12) != -1)))))) {
          lVar11 = 0;
          do {
            fVar26 = *(float *)((longlong)&local_158 + lVar11) - (float)dVar17;
            fVar32 = *(float *)((longlong)&local_158 + lVar11 + 4) - (float)dVar27;
            fVar57 = *(float *)((longlong)&uStack_150 + lVar11) - (float)dVar55;
            fVar51 = *(float *)((longlong)&uStack_150 + lVar11 + 4) - 0.0;
            fVar54 = fVar32 * fVar15 - fVar16 * fVar26;
            fVar33 = fVar57 * fVar16 - fVar20 * fVar32;
            fVar34 = fVar26 * fVar20 - fVar15 * fVar57;
            fVar35 = fVar51 * fVar21 - fVar21 * fVar51;
            fVar54 = fVar54 + fVar54;
            fVar33 = fVar33 + fVar33;
            fVar34 = fVar34 + fVar34;
            fVar35 = fVar35 + fVar35;
            *(float *)((longlong)&local_158 + lVar11) =
                 (fVar54 * fVar16 - fVar34 * fVar20) + fVar21 * fVar33 + fVar26;
            dVar52 = local_158;
            *(float *)((longlong)&local_158 + lVar11 + 4) =
                 (fVar33 * fVar20 - fVar54 * fVar15) + fVar21 * fVar34 + fVar32;
            *(float *)((longlong)&uStack_150 + lVar11) =
                 (fVar34 * fVar15 - fVar33 * fVar16) + fVar21 * fVar54 + fVar57;
            dVar2 = uStack_150;
            *(float *)((longlong)&uStack_150 + lVar11 + 4) =
                 (fVar35 * fVar21 - fVar35 * fVar21) + fVar21 * fVar35 + fVar51;
            dVar5 = uStack_120;
            dVar36 = local_128;
            lVar11 = lVar11 + 0x10;
          } while (lVar11 != 0x40);
          fVar26 = (float)local_158;
          fVar32 = local_158._4_4_;
          fVar57 = (float)uStack_150;
          fVar51 = uStack_150._4_4_;
          local_188[0] = local_158;
          local_188[1] = uStack_150;
          local_188[2] = local_148;
          adStack_170[0] = uStack_140;
          fVar46 = (float)local_128 - (float)local_158;
          fVar48 = local_128._4_4_ - local_158._4_4_;
          fVar49 = (float)uStack_120 - (float)uStack_150;
          fVar50 = uStack_120._4_4_ - uStack_150._4_4_;
          fVar54 = ((float)local_148 - (float)local_158) * fVar48 -
                   (local_148._4_4_ - local_158._4_4_) * fVar46;
          fVar34 = (local_148._4_4_ - local_158._4_4_) * fVar49 -
                   ((float)uStack_140 - (float)uStack_150) * fVar48;
          fVar22 = ((float)uStack_140 - (float)uStack_150) * fVar46 -
                   ((float)local_148 - (float)local_158) * fVar49;
          fVar24 = (uStack_140._4_4_ - uStack_150._4_4_) * fVar50 -
                   (uStack_140._4_4_ - uStack_150._4_4_) * fVar50;
          adStack_170[1] = local_128;
          adStack_170[2] = uStack_120;
          fVar33 = fVar22 * fVar22 + fVar34 * fVar34;
          fVar35 = fVar34 * fVar34 + fVar22 * fVar22;
          fVar23 = fVar24 * fVar24 + fVar54 * fVar54;
          fVar25 = fVar54 * fVar54 + fVar24 * fVar24;
          auVar40._0_4_ = fVar23 + fVar33;
          auVar40._4_4_ = fVar25 + fVar35;
          auVar40._8_4_ = fVar33 + fVar23;
          auVar40._12_4_ = fVar35 + fVar25;
          auVar18._4_4_ = -(uint)(1e-08 <= auVar40._4_4_);
          auVar18._0_4_ = -(uint)(1e-08 <= auVar40._0_4_);
          auVar18._8_4_ = -(uint)(1e-08 <= auVar40._8_4_);
          auVar18._12_4_ = -(uint)(1e-08 <= auVar40._12_4_);
          auVar56 = sqrtps(auVar40,auVar40);
          auVar56 = divps(_DAT_1499314a0,auVar56);
          auVar43._0_4_ = auVar56._0_4_ * fVar34;
          auVar43._4_4_ = auVar56._4_4_ * fVar22;
          auVar43._8_4_ = auVar56._8_4_ * fVar54;
          auVar43._12_4_ = auVar56._12_4_ * fVar24;
          auVar30._0_12_ = ZEXT812(0x3f800000);
          auVar30._12_4_ = 0;
          local_198 = blendvps(auVar30,auVar43,auVar18);
          cVar6 = FUN_144a52712(local_188,param_2,local_1a0,local_198);
          if (cVar6 == '\0') {
            local_188[0] = dVar52;
            local_188[1] = dVar2;
            local_188[2] = dVar36;
            adStack_170[0] = dVar5;
            adStack_170[1] = uStack_138;
            adStack_170[2] = uStack_130;
            unaff_XMM9_Db = fVar49 * (uStack_138._4_4_ - fVar32);
            unaff_XMM9_Dc = fVar46 * ((float)uStack_130 - fVar57);
            unaff_XMM9_Dd = fVar50 * (uStack_130._4_4_ - fVar51);
            fVar32 = fVar46 * (uStack_138._4_4_ - fVar32) - fVar48 * ((float)uStack_138 - fVar26);
            fVar57 = fVar48 * ((float)uStack_130 - fVar57) - unaff_XMM9_Db;
            fVar54 = fVar49 * ((float)uStack_138 - fVar26) - unaff_XMM9_Dc;
            fVar34 = fVar50 * (uStack_130._4_4_ - fVar51) - unaff_XMM9_Dd;
            fVar26 = fVar54 * fVar54 + fVar57 * fVar57;
            fVar51 = fVar57 * fVar57 + fVar54 * fVar54;
            fVar33 = fVar34 * fVar34 + fVar32 * fVar32;
            fVar35 = fVar32 * fVar32 + fVar34 * fVar34;
            auVar41._0_4_ = fVar33 + fVar26;
            auVar41._4_4_ = fVar35 + fVar51;
            auVar41._8_4_ = fVar26 + fVar33;
            auVar41._12_4_ = fVar51 + fVar35;
            auVar19._4_4_ = -(uint)(1e-08 <= auVar41._4_4_);
            auVar19._0_4_ = -(uint)(1e-08 <= auVar41._0_4_);
            auVar19._8_4_ = -(uint)(1e-08 <= auVar41._8_4_);
            auVar19._12_4_ = -(uint)(1e-08 <= auVar41._12_4_);
            auVar56 = sqrtps(auVar41,auVar41);
            auVar56 = divps(_DAT_1499314a0,auVar56);
            auVar44._0_4_ = auVar56._0_4_ * fVar57;
            auVar44._4_4_ = auVar56._4_4_ * fVar54;
            auVar44._8_4_ = auVar56._8_4_ * fVar32;
            auVar44._12_4_ = auVar56._12_4_ * fVar34;
            auVar31._0_12_ = ZEXT812(0x3f800000);
            auVar31._12_4_ = 0;
            local_198 = blendvps(auVar31,auVar44,auVar19);
            cVar6 = FUN_144a52712(local_188,param_2,local_1a0,local_198);
            if (cVar6 == '\0') goto LAB_140a0a0a8;
          }
          uVar14 = CONCAT71((int7)((ulonglong)param_2 >> 8),1);
          goto LAB_140a0a0b7;
        }
LAB_140a0a0a8:
        piVar13 = piVar13 + 2;
      } while (piVar13 != piVar1);
    }
  }
  uVar14 = 0;
LAB_140a0a0b7:
  if (local_1f8 != (int *)0x0) {
    FUN_1400020a8();
  }
  if ((local_f0 ^ (ulonglong)auStack_288) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar14 & 0xffffff01;
}



// FUNCTION 140a0a464 FUN_140a0a464 body=208 status=ok
// SIG undefined FUN_140a0a464(void)

void FUN_140a0a464(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar7 = *(int *)((longlong)plVar3 +
                    ((longlong)((int)((ulonglong)param_2 >> 0x20) * 0x17 + (int)param_2) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar7 != -1) {
      lVar2 = *param_1;
      do {
        lVar8 = (longlong)iVar7 * 0x130;
        lVar1 = lVar2 + lVar8;
        if (*(longlong *)(lVar2 + lVar8) == param_2) {
          iVar6 = *(int *)((longlong)plVar3 + (longlong)*(int *)(lVar1 + 0x124) * 4);
          if (iVar6 == iVar7) {
            puVar5 = (undefined4 *)((longlong)plVar3 + (longlong)*(int *)(lVar1 + 0x124) * 4);
          }
          else {
            do {
              lVar4 = (longlong)iVar6;
              iVar6 = *(int *)(lVar2 + 0x120 + lVar4 * 0x130);
            } while (iVar6 != iVar7);
            puVar5 = (undefined4 *)(lVar4 * 0x130 + lVar2 + 0x120);
          }
          *puVar5 = *(undefined4 *)(lVar1 + 0x120);
          FUN_14058aa5c(*param_1 + lVar8 + 0x10);
          FUN_140a0a534(param_1,iVar7);
          return;
        }
        iVar7 = *(int *)(lVar1 + 0x120);
      } while (iVar7 != -1);
    }
  }
  return;
}



// FUNCTION 140a0a534 FUN_140a0a534 body=124 status=ok
// SIG undefined FUN_140a0a534(void)

void FUN_140a0a534(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x130) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x130) = 0xffffffff;
  uVar5 = 0xffffffff;
  if (0 < *(int *)((longlong)param_1 + 0x34)) {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x130 + 4) = uVar5;
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



// FUNCTION 140a0a5b0 FUN_140a0a5b0 body=100 status=ok
// SIG undefined FUN_140a0a5b0(void)

undefined8 FUN_140a0a5b0(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_18 = *(undefined8 *)(param_3 + 8);
  local_38 = *param_3;
  uStack_34 = param_3[1];
  uStack_30 = param_3[2];
  uStack_2c = param_3[3];
  local_28 = param_3[4];
  uStack_24 = param_3[5];
  uStack_20 = param_3[6];
  uStack_1c = param_3[7];
  (**(code **)(param_1 + 0x20))
            ((longlong)*(int *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x18),local_28,&local_38);
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a0a642 FUN_140a0a642 body=9 status=ok
// SIG undefined FUN_140a0a642(void)

void FUN_140a0a642(longlong param_1)

{
  FUN_140a0a64c(param_1 + 0x28);
  return;
}



// FUNCTION 140a0a64c FUN_140a0a64c body=978 status=ok
// SIG undefined FUN_140a0a64c(void)

void FUN_140a0a64c(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  
  lVar7 = param_1[5];
  if ((longlong)(int)lVar7 != 0) {
    lVar4 = param_1[4];
    puVar9 = (undefined8 *)(lVar4 + 0x18);
    do {
      iVar3 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar3 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
        FUN_1408da40e(param_2,iVar3);
      }
      puVar8 = (undefined8 *)((longlong)iVar3 * 0x20 + *param_2);
      uVar5 = puVar9[-3];
      plVar6 = (longlong *)puVar9[-2];
      if (plVar6 == (longlong *)0x0) {
        *puVar8 = uVar5;
        puVar8[1] = 0;
        puVar8[2] = puVar9[-1];
        puVar8[3] = *puVar9;
      }
      else {
        LOCK();
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        UNLOCK();
        *puVar8 = uVar5;
        puVar8[1] = plVar6;
        LOCK();
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        UNLOCK();
        puVar8[2] = puVar9[-1];
        puVar8[3] = *puVar9;
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
      puVar8 = puVar9 + 1;
      puVar9 = puVar9 + 4;
    } while (puVar8 != (undefined8 *)((longlong)(int)lVar7 * 0x20 + lVar4));
  }
  lVar7 = param_1[1];
  if ((longlong)(int)lVar7 != 0) {
    lVar4 = *param_1;
    puVar9 = (undefined8 *)(lVar4 + 0x18);
    do {
      iVar3 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar3 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
        FUN_1408da40e(param_2,iVar3);
      }
      puVar8 = (undefined8 *)((longlong)iVar3 * 0x20 + *param_2);
      uVar5 = puVar9[-3];
      plVar6 = (longlong *)puVar9[-2];
      if (plVar6 == (longlong *)0x0) {
        *puVar8 = uVar5;
        puVar8[1] = 0;
        puVar8[2] = puVar9[-1];
        puVar8[3] = *puVar9;
      }
      else {
        LOCK();
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        UNLOCK();
        *puVar8 = uVar5;
        puVar8[1] = plVar6;
        LOCK();
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        UNLOCK();
        puVar8[2] = puVar9[-1];
        puVar8[3] = *puVar9;
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
      puVar8 = puVar9 + 1;
      puVar9 = puVar9 + 4;
    } while (puVar8 != (undefined8 *)((longlong)(int)lVar7 * 0x20 + lVar4));
  }
  lVar7 = param_1[3];
  if ((longlong)(int)lVar7 != 0) {
    lVar4 = param_1[2];
    puVar9 = (undefined8 *)(lVar4 + 0x18);
    do {
      iVar3 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar3 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
        FUN_1408da40e(param_2,iVar3);
      }
      puVar8 = (undefined8 *)((longlong)iVar3 * 0x20 + *param_2);
      uVar5 = puVar9[-3];
      plVar6 = (longlong *)puVar9[-2];
      if (plVar6 == (longlong *)0x0) {
        *puVar8 = uVar5;
        puVar8[1] = 0;
        puVar8[2] = puVar9[-1];
        puVar8[3] = *puVar9;
      }
      else {
        LOCK();
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        UNLOCK();
        *puVar8 = uVar5;
        puVar8[1] = plVar6;
        LOCK();
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        UNLOCK();
        puVar8[2] = puVar9[-1];
        puVar8[3] = *puVar9;
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
      puVar8 = puVar9 + 1;
      puVar9 = puVar9 + 4;
    } while (puVar8 != (undefined8 *)((longlong)(int)lVar7 * 0x20 + lVar4));
  }
  lVar7 = param_1[7];
  if ((longlong)(int)lVar7 != 0) {
    lVar4 = param_1[6];
    puVar9 = (undefined8 *)(lVar4 + 0x18);
    do {
      iVar3 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar3 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
        FUN_1408da40e(param_2,iVar3);
      }
      puVar8 = (undefined8 *)((longlong)iVar3 * 0x20 + *param_2);
      uVar5 = puVar9[-3];
      plVar6 = (longlong *)puVar9[-2];
      if (plVar6 == (longlong *)0x0) {
        *puVar8 = uVar5;
        puVar8[1] = 0;
        puVar8[2] = puVar9[-1];
        puVar8[3] = *puVar9;
      }
      else {
        LOCK();
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        UNLOCK();
        *puVar8 = uVar5;
        puVar8[1] = plVar6;
        LOCK();
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        UNLOCK();
        puVar8[2] = puVar9[-1];
        puVar8[3] = *puVar9;
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
      puVar8 = puVar9 + 1;
      puVar9 = puVar9 + 4;
    } while (puVar8 != (undefined8 *)((longlong)(int)lVar7 * 0x20 + lVar4));
  }
  lVar7 = param_1[9];
  if ((longlong)(int)lVar7 != 0) {
    lVar4 = param_1[8];
    puVar9 = (undefined8 *)(lVar4 + 0x18);
    do {
      iVar3 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar3 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar3 + 1U) {
        FUN_1408da40e(param_2,iVar3);
      }
      puVar8 = (undefined8 *)((longlong)iVar3 * 0x20 + *param_2);
      uVar5 = puVar9[-3];
      plVar6 = (longlong *)puVar9[-2];
      if (plVar6 == (longlong *)0x0) {
        *puVar8 = uVar5;
        puVar8[1] = 0;
        puVar8[2] = puVar9[-1];
        puVar8[3] = *puVar9;
      }
      else {
        LOCK();
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        UNLOCK();
        *puVar8 = uVar5;
        puVar8[1] = plVar6;
        LOCK();
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        UNLOCK();
        puVar8[2] = puVar9[-1];
        puVar8[3] = *puVar9;
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
      puVar8 = puVar9 + 1;
      puVar9 = puVar9 + 4;
    } while (puVar8 != (undefined8 *)((longlong)(int)lVar7 * 0x20 + lVar4));
  }
  return;
}



// FUNCTION 140a0aa1e FUN_140a0aa1e body=168 status=ok
// SIG undefined FUN_140a0aa1e(void)

void FUN_140a0aa1e(longlong *param_1)

{
  undefined1 auStack_88 [32];
  ushort local_68;
  undefined4 *local_60;
  undefined4 *local_58;
  longlong local_50;
  longlong local_48;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  short local_24;
  undefined1 local_22;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = param_1[9];
  local_50 = param_1[1];
  local_60 = (undefined4 *)param_1[8];
  local_68 = *(ushort *)param_1[7];
  local_24 = (local_68 & 0x1c) + (local_68 & 0x20) * 2;
  local_34 = *local_60;
  uStack_30 = local_60[1];
  uStack_2c = local_60[2];
  uStack_28 = local_60[3];
  local_58 = &local_34;
  local_22 = 0;
  FUN_140a0aac7(param_1[5],param_1[6],param_1[2],*param_1);
  if (*(char *)(*param_1 + 0x44) == '\x01') {
    *(undefined1 *)param_1[10] = 1;
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a0aac7 FUN_140a0aac7 body=205 status=ok
// SIG undefined FUN_140a0aac7(void)

void FUN_140a0aac7(longlong param_1,undefined8 param_2,LARGE_INTEGER *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  longlong lVar1;
  LARGE_INTEGER *pLVar2;
  undefined1 auStack_108 [40];
  longlong local_e0;
  LARGE_INTEGER local_d8 [13];
  longlong *local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (*(longlong *)(param_1 + 0x28) != 0) {
    local_e0 = *(longlong *)(param_1 + 0x28);
    QueryPerformanceCounter(local_d8);
    local_60 = param_7;
    local_58 = param_8;
    local_50 = param_9;
    pLVar2 = local_d8;
    local_70 = &local_e0;
    local_68 = param_4;
    for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
      *pLVar2 = *param_3;
      param_3 = param_3 + 1;
      pLVar2 = pLVar2 + 1;
    }
    FUN_143465286(param_2);
    QueryPerformanceCounter(local_d8);
  }
  if ((local_48 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a0ab96 FUN_140a0ab96 body=18682 status=ok
// SIG undefined FUN_140a0ab96(void)

void FUN_140a0ab96(longlong param_1,ulonglong *param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  size_t sVar3;
  byte bVar4;
  int iVar5;
  void *pvVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  longlong lVar11;
  void *pvVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  uint uVar17;
  longlong *plVar18;
  longlong *plVar19;
  ulonglong *puVar20;
  int iVar21;
  undefined4 uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  int iVar26;
  ulonglong *puVar27;
  uint uVar28;
  void *pvVar29;
  ulonglong uVar30;
  uint uVar31;
  uint uVar32;
  ulonglong *puVar33;
  uint uVar34;
  longlong lVar35;
  uint uVar36;
  uint uVar37;
  longlong *plVar38;
  longlong lVar39;
  bool bVar40;
  float fVar41;
  undefined1 auStack_4b8 [32];
  ulonglong *local_498;
  undefined1 local_490;
  undefined4 local_488;
  undefined4 local_480;
  undefined8 local_478;
  ulonglong *local_470;
  ulonglong *local_468;
  undefined8 local_460;
  longlong local_458;
  ulonglong local_450;
  uint local_448;
  uint local_444;
  uint local_440;
  uint local_43c;
  uint local_438;
  uint local_434;
  uint local_430;
  uint local_42c;
  uint local_428;
  uint local_424;
  ulonglong local_420;
  uint local_414;
  uint local_410;
  uint local_40c;
  uint local_408;
  uint local_404;
  uint local_400;
  uint local_3fc;
  uint local_3f8;
  uint local_3f4;
  uint local_3f0;
  uint local_3ec;
  longlong *local_3e8;
  ulonglong *local_3e0;
  undefined4 local_3d8;
  uint local_3d4;
  undefined4 local_3d0;
  uint local_3cc;
  undefined4 local_3c8;
  undefined4 local_3c4;
  undefined4 local_3c0;
  uint local_3bc;
  ulonglong *local_3b8;
  longlong local_3b0;
  longlong local_3a8;
  longlong local_3a0;
  ulonglong *local_398;
  ulonglong *local_390;
  longlong *local_388;
  undefined8 *local_380;
  longlong local_378;
  longlong local_370;
  longlong *local_368;
  longlong local_360;
  undefined8 *local_358;
  ulonglong *local_350;
  longlong *local_348;
  undefined8 *local_340;
  ulonglong *local_338;
  longlong *local_330;
  undefined8 *local_328;
  longlong *local_320;
  longlong local_318;
  longlong local_310;
  longlong local_308;
  longlong local_300;
  longlong local_2f8;
  ulonglong *local_2f0;
  longlong *local_2e8;
  longlong *local_2e0;
  longlong *local_2d8;
  undefined8 *local_2d0;
  ulonglong **local_2c8;
  undefined4 local_2c0;
  ulonglong **local_2b8;
  undefined4 local_2b0;
  ulonglong **local_2a8;
  undefined4 local_2a0;
  ulonglong **local_298;
  undefined4 local_290;
  ulonglong local_288;
  ulonglong *local_280;
  ulonglong local_278;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined4 uStack_268;
  undefined4 uStack_264;
  longlong local_260;
  undefined8 local_258;
  undefined8 uStack_250;
  uint local_248;
  uint uStack_244;
  uint uStack_240;
  uint uStack_23c;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined4 local_218;
  uint local_214;
  uint local_210;
  uint local_20c;
  uint local_208;
  uint local_204;
  uint local_200;
  uint local_1fc;
  uint local_1f8;
  uint local_1f4;
  uint local_1f0;
  uint local_1ec;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  ulonglong uStack_1d0;
  ulonglong local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  ulonglong local_1a8;
  undefined8 uStack_1a0;
  uint local_198;
  uint uStack_194;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  ulonglong *local_158;
  undefined4 local_150;
  undefined4 uStack_14c;
  ulonglong local_148;
  undefined1 local_140;
  undefined8 local_13c;
  undefined4 local_134;
  undefined1 local_128;
  undefined8 local_120;
  undefined4 local_118;
  ulonglong local_110;
  undefined1 local_108;
  undefined8 local_104;
  undefined4 local_fc;
  undefined1 local_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_d8;
  undefined1 local_d0;
  undefined8 local_cc;
  undefined4 local_c4;
  undefined1 local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined1 local_98;
  undefined8 local_94;
  undefined4 local_8c;
  undefined1 local_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_4b8;
  if ((longlong)(int)param_3[1] != 0) {
    local_378 = *(longlong *)(param_1 + 8);
    plVar18 = (longlong *)*param_3;
    plVar19 = plVar18 + (longlong)(int)param_3[1] * 4;
    local_370 = param_1 + 0x30;
    local_300 = param_1 + 0x60;
    local_308 = param_1 + 0x90;
    local_2f8 = param_1 + 0xc0;
    local_310 = param_1 + 0xf0;
    local_318 = param_1 + 0x120;
    local_320 = (longlong *)(param_1 + 0x40);
    local_328 = (undefined8 *)(param_1 + 0x38);
    local_470 = param_2 + 0x12;
    local_2f0 = &local_1c8;
    local_330 = (longlong *)(param_1 + 0xa0);
    local_338 = (ulonglong *)(param_1 + 0xd0);
    local_340 = (undefined8 *)(param_1 + 0x70);
    local_348 = (longlong *)(param_1 + 0x98);
    local_350 = (ulonglong *)(param_1 + 200);
    local_358 = (undefined8 *)(param_1 + 0x68);
    local_368 = param_3;
    local_360 = param_1;
    local_2e8 = plVar19;
    do {
      plVar38 = (longlong *)plVar18[3];
      if (plVar38 != (longlong *)0x0) {
        iVar21 = (int)plVar38[1];
        do {
          if (iVar21 == 0) goto LAB_140a0e136;
          LOCK();
          iVar26 = (int)plVar38[1];
          bVar40 = iVar21 == iVar26;
          if (bVar40) {
            *(int *)(plVar38 + 1) = iVar21 + 1;
            iVar26 = iVar21;
          }
          iVar21 = iVar26;
          UNLOCK();
        } while (!bVar40);
        lVar11 = plVar18[2];
        if (lVar11 != 0) {
          uVar17 = *(uint *)(*plVar18 + 300);
          uVar23 = *(uint *)(plVar18 + 1);
          uVar14 = (longlong)(int)uVar23 * 4;
          local_2e0 = plVar38;
          if (*(uint *)(param_1 + 0x48) <= uVar14 && uVar14 - *(uint *)(param_1 + 0x48) != 0) {
            local_498 = (ulonglong *)CONCAT44(local_498._4_4_,uVar23);
            local_478 = 0;
            local_480 = 0;
            local_488 = 0x78;
            local_490 = 0x1c;
            FUN_1407fe5c2(local_370,param_2,L"NiagarGPUInit-SortedIndices",4);
          }
          if (*(uint *)(param_1 + 0x78) <= uVar14 && uVar14 - *(uint *)(param_1 + 0x78) != 0) {
            local_498 = (ulonglong *)CONCAT44(local_498._4_4_,uVar23);
            local_478 = 0;
            local_480 = 1;
            local_488 = 0x78;
            local_490 = 0x1c;
            FUN_1407fe5c2(local_300,param_2,L"NiagaraGPUInit-Segments",4);
          }
          if ((ulonglong)*(uint *)(param_1 + 0xa8) < (ulonglong)((longlong)(int)uVar23 << 4)) {
            local_498 = (ulonglong *)CONCAT44(local_498._4_4_,uVar23 * 4);
            local_478 = 0;
            local_480 = 1;
            local_488 = 0x78;
            local_490 = 0xd;
            FUN_1407fe5c2(local_308,param_2,L"NiagaraGPUInit-Distances",4);
          }
          uVar24 = 0;
          if ((uVar17 & 3) != 0) {
            uVar24 = uVar23;
          }
          if ((ulonglong)*(uint *)(param_1 + 0xd8) <= (ulonglong)uVar24 * 4 &&
              (ulonglong)uVar24 * 4 - (ulonglong)*(uint *)(param_1 + 0xd8) != 0) {
            local_498 = (ulonglong *)CONCAT44(local_498._4_4_,uVar24);
            local_478 = 0;
            local_480 = 1;
            local_488 = 0x78;
            local_490 = 0x1c;
            FUN_1407fe5c2(local_2f8,param_2,L"NiagaraGPUInit-MultiRibbon",4);
          }
          uVar23 = (((uVar17 & 4) >> 1) + 3 & (int)(uVar17 << 0x19) >> 0x1f) * uVar23;
          if ((ulonglong)*(uint *)(param_1 + 0x108) <= (ulonglong)uVar23 * 4 &&
              (ulonglong)uVar23 * 4 - (ulonglong)*(uint *)(param_1 + 0x108) != 0) {
            local_478 = 0;
            local_480 = 1;
            local_488 = 0x78;
            local_490 = 0xd;
            local_498._0_4_ = uVar23;
            FUN_1407fe5c2(local_310,param_2,L"NiagaraGPUInit-Tessellation-0",4);
            local_478 = 0;
            local_480 = 1;
            local_488 = 0x78;
            local_490 = 0xd;
            local_498 = (ulonglong *)CONCAT44(local_498._4_4_,uVar23);
            FUN_1407fe5c2(local_318,param_2,L"NiagaraGPUInit-Tessellation-1",4);
          }
          lVar39 = *plVar18;
          local_420 = (ulonglong)*(uint *)(plVar18 + 1);
          local_3bc = *(uint *)((longlong)plVar18 + 0xc);
          local_398 = *(ulonglong **)(local_378 + 0x68);
          if (local_398 == (ulonglong *)0x0) {
            local_398 = DAT_14cb428f0;
          }
          local_3a0 = *(longlong *)(lVar11 + 0x68);
          local_3b0 = *(longlong *)(lVar11 + 0x70);
          if (local_3a0 == 0) {
            local_3a0 = DAT_14cb427b0;
          }
          if (local_3b0 == 0) {
            local_3b0 = DAT_14cb429b0;
          }
          local_3a8 = *(longlong *)(lVar11 + 0x78);
          if (local_3a8 == 0) {
            local_3a8 = DAT_14cb428b0;
          }
          local_3c0 = *(undefined4 *)(lVar11 + 0x80);
          local_3c4 = *(undefined4 *)(lVar11 + 0x88);
          local_3c8 = *(undefined4 *)(lVar11 + 0x8c);
          lVar11 = *(longlong *)(*(longlong *)(lVar39 + 0x280) + 0x10);
          uVar17 = (uint)*(ushort *)(lVar11 + 2);
          if (*(ushort *)(lVar11 + 2) == 0xffff) {
            uVar17 = 0xffffffff;
          }
          uVar23 = (uint)*(ushort *)(lVar11 + 0x8a);
          if (*(ushort *)(lVar11 + 0x8a) == 0xffff) {
            uVar23 = 0xffffffff;
          }
          uVar24 = (uint)*(ushort *)(lVar11 + 10);
          if (*(ushort *)(lVar11 + 10) == 0xffff) {
            uVar24 = 0xffffffff;
          }
          uVar34 = (uint)*(ushort *)(lVar11 + 0x12);
          if (*(ushort *)(lVar11 + 0x12) == 0xffff) {
            uVar34 = 0xffffffff;
          }
          uVar31 = (uint)*(ushort *)(lVar11 + 0x1a);
          if (uVar31 == 0xffff) {
            uVar31 = 0xffffffff;
          }
          local_460 = CONCAT44(local_460._4_4_,uVar31);
          uVar31 = (uint)*(ushort *)(lVar11 + 0x92);
          if (uVar31 == 0xffff) {
            uVar31 = 0xffffffff;
          }
          local_468 = (ulonglong *)CONCAT44(local_468._4_4_,uVar31);
          uVar31 = (uint)*(ushort *)(lVar11 + 0x22);
          if (uVar31 == 0xffff) {
            uVar31 = 0xffffffff;
          }
          local_450 = CONCAT44(local_450._4_4_,uVar31);
          uVar31 = (uint)*(ushort *)(lVar11 + 0xa2);
          if (uVar31 == 0xffff) {
            uVar31 = 0xffffffff;
          }
          local_3e0 = (ulonglong *)CONCAT44(local_3e0._4_4_,uVar31);
          uVar31 = (uint)*(ushort *)(lVar11 + 0x32);
          if (uVar31 == 0xffff) {
            uVar31 = 0xffffffff;
          }
          local_3e8 = (longlong *)CONCAT44(local_3e8._4_4_,uVar31);
          uVar31 = (uint)*(ushort *)(lVar11 + 0x3a);
          if (uVar31 == 0xffff) {
            uVar31 = 0xffffffff;
          }
          uVar36 = (uint)*(ushort *)(lVar11 + 0x42);
          if (uVar36 == 0xffff) {
            uVar36 = 0xffffffff;
          }
          uVar37 = (uint)*(ushort *)(lVar11 + 0x4a);
          if (uVar37 == 0xffff) {
            uVar37 = 0xffffffff;
          }
          uVar25 = (uint)*(ushort *)(lVar11 + 0x52);
          if (uVar25 == 0xffff) {
            uVar25 = 0xffffffff;
          }
          uVar28 = (uint)*(ushort *)(lVar11 + 0x5a);
          if (uVar28 == 0xffff) {
            uVar28 = 0xffffffff;
          }
          local_430 = (uint)*(byte *)(lVar11 + 7);
          local_434 = (uint)*(byte *)(lVar11 + 0x8f);
          local_438 = (uint)*(byte *)(lVar11 + 0xf);
          local_424 = (uint)*(byte *)(lVar11 + 0x17);
          local_43c = (uint)*(byte *)(lVar11 + 0x1f);
          local_440 = (uint)*(byte *)(lVar11 + 0x97);
          local_444 = (uint)*(byte *)(lVar11 + 0x27);
          local_448 = (uint)*(byte *)(lVar11 + 0xa7);
          local_428 = (uint)*(byte *)(lVar11 + 0x37);
          local_42c = (uint)*(byte *)(lVar11 + 0x3f);
          local_3ec = (uint)*(byte *)(lVar11 + 0x47);
          local_3f0 = (uint)*(byte *)(lVar11 + 0x4f);
          local_3f4 = (uint)*(byte *)(lVar11 + 0x57);
          local_3f8 = (uint)*(byte *)(lVar11 + 0x5f);
          local_3cc = (uint)*(byte *)(lVar39 + 0x130);
          uVar32 = 0xffffffff;
          if ((local_3cc == 3) || (local_404 = 0xffffffff, *(char *)(lVar39 + 0x158) == '\x03')) {
            local_404 = (uint)*(ushort *)(lVar11 + 0x62);
            if (*(ushort *)(lVar11 + 0x62) == 0xffff) {
              local_404 = uVar32;
            }
            local_404 = (uint)*(byte *)(lVar11 + 0x67) << 0x1f | local_404;
          }
          local_408 = 0xffffffff;
          local_40c = 0xffffffff;
          if ((*(byte *)(lVar39 + 0x133) & 1) != 0) {
            local_40c = (uint)*(ushort *)(lVar11 + 0x6a);
            if (local_40c == 0xffff) {
              local_40c = 0xffffffff;
            }
            local_40c = (uint)*(byte *)(lVar11 + 0x6f) << 0x1f | local_40c;
          }
          if ((*(byte *)(lVar39 + 0x133) & 2) != 0) {
            local_408 = (uint)*(ushort *)(lVar11 + 0x72);
            if (*(ushort *)(lVar11 + 0x72) == 0xffff) {
              local_408 = uVar32;
            }
            local_408 = (uint)*(byte *)(lVar11 + 0x77) << 0x1f | local_408;
          }
          local_410 = 0xffffffff;
          local_414 = 0xffffffff;
          if ((*(byte *)(lVar39 + 0x15b) & 1) != 0) {
            local_414 = (uint)*(ushort *)(lVar11 + 0x7a);
            if (local_414 == 0xffff) {
              local_414 = 0xffffffff;
            }
            local_414 = (uint)*(byte *)(lVar11 + 0x7f) << 0x1f | local_414;
          }
          if ((*(byte *)(lVar39 + 0x15b) & 2) != 0) {
            local_410 = (uint)*(ushort *)(lVar11 + 0x82);
            if (*(ushort *)(lVar11 + 0x82) == 0xffff) {
              local_410 = uVar32;
            }
            local_410 = (uint)*(byte *)(lVar11 + 0x87) << 0x1f | local_410;
          }
          local_3d0 = *(undefined4 *)(lVar39 + 0x120);
          local_3fc = 0xffffffff;
          local_400 = 0xffffffff;
          if ((byte)(*(char *)(lVar39 + 0x27c) - 1U) < 2) {
            local_3fc = (uint)*(ushort *)(lVar11 + 0x2a);
            if (*(ushort *)(lVar11 + 0x2a) == 0xffff) {
              local_3fc = uVar32;
            }
            local_3fc = (uint)*(byte *)(lVar11 + 0x2f) << 0x1f | local_3fc;
            local_400 = (uint)*(ushort *)(lVar11 + 0x9a);
            if (*(ushort *)(lVar11 + 0x9a) == 0xffff) {
              local_400 = uVar32;
            }
            local_400 = (uint)*(byte *)(lVar11 + 0x9f) << 0x1f | local_400;
          }
          local_3d8 = *(undefined4 *)(lVar39 + 0x28c);
          local_3d4 = (uint)*(byte *)(lVar39 + 0x158);
          local_458 = lVar39;
          local_2d8 = plVar18;
          if (((int)*(uint *)(plVar18 + 1) < 2) || (*(char *)(lVar39 + 0x3b8) == '\x01')) {
            if (*(int *)(lVar39 + 0x398) != 0) {
              local_390 = (ulonglong *)CONCAT44(local_390._4_4_,uVar34);
              local_388 = (longlong *)CONCAT44(local_388._4_4_,uVar24);
              local_380 = (undefined8 *)CONCAT44(local_380._4_4_,uVar23);
              local_3b8 = (ulonglong *)CONCAT44(local_3b8._4_4_,uVar17);
              local_278 = *(undefined8 *)(lVar39 + 0x3a0);
              local_288 = 0xffffffffffffffff;
              local_280 = (ulonglong *)CONCAT44(local_280._4_4_,0xffffffff);
              uStack_270 = CONCAT31(uStack_270._1_3_,2);
              uStack_26c = 0x7c;
              uStack_268 = 0x400;
              uStack_264 = 0;
              local_258 = local_258 & 0xffffffffffffff00;
              local_158 = &local_288;
              local_150 = 1;
              FUN_144760590(param_2,&local_158,0);
              uVar9 = *(undefined8 *)(lVar39 + 0x3a8);
              puVar7 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
              puVar16 = puVar7 + 5;
              if ((undefined8 *)param_2[1] < puVar16) {
                FUN_140023dd8(param_2,0x30);
                puVar7 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
                puVar16 = puVar7 + 5;
              }
              lVar39 = local_458;
              *param_2 = (ulonglong)puVar16;
              *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
              *(undefined8 **)param_2[6] = puVar7;
              param_2[6] = (ulonglong)(puVar7 + 1);
              puVar7[1] = 0;
              *puVar7 = &PTR_LAB_14a29b380;
              puVar7[2] = uVar9;
              puVar7[3] = 0;
              puVar7[4] = 0;
              local_278 = *(ulonglong *)(local_458 + 0x3a0);
              local_288 = 0xffffffffffffffff;
              local_280 = (ulonglong *)CONCAT44(local_280._4_4_,0xffffffff);
              uStack_270 = CONCAT31(uStack_270._1_3_,2);
              uStack_26c = 0x400;
              uStack_268 = 0x7c;
              uStack_264 = 0;
              local_258 = local_258 & 0xffffffffffffff00;
              local_158 = &local_288;
              local_150 = 1;
              FUN_144760590(param_2,&local_158,0);
              *(undefined1 *)(lVar39 + 0x3b8) = 0;
              uVar17 = (uint)local_3b8;
              uVar23 = (uint)local_380;
              uVar24 = (uint)local_388;
              uVar34 = (uint)local_390;
            }
            plVar19 = local_2e8;
            param_1 = local_360;
            plVar18 = local_2d8;
            plVar38 = local_2e0;
            if ((int)local_420 < 2) goto LAB_140a0e117;
          }
          local_430 = local_430 << 0x1f | uVar17;
          local_434 = local_434 << 0x1f | uVar23;
          local_438 = local_438 << 0x1f | uVar24;
          local_424 = local_424 << 0x1f | uVar34;
          local_43c = local_43c << 0x1f | (uint)local_460;
          local_440 = local_440 << 0x1f | (uint)local_468;
          local_444 = local_444 << 0x1f | (uint)local_450;
          local_448 = local_448 << 0x1f | (uint)local_3e0;
          local_428 = local_428 << 0x1f | (uint)local_3e8;
          local_42c = local_42c << 0x1f | uVar31;
          uVar36 = local_3ec << 0x1f | uVar36;
          uVar37 = local_3f0 << 0x1f | uVar37;
          uVar25 = local_3f4 << 0x1f | uVar25;
          uVar28 = local_3f8 << 0x1f | uVar28;
          iVar21 = (*(uint *)(lVar39 + 300) & 3) + (uint)*(byte *)(lVar39 + 0x28a) * 4;
          uVar9 = *(undefined8 *)
                   (&DAT_14ca8c1f0 +
                   (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) * 8);
          uVar8 = FUN_14153dade();
          FUN_1448e935e(uVar9,&local_288,uVar8,iVar21);
          FUN_14153dade();
          local_450 = local_288;
          local_468 = local_280;
          uVar9 = *(undefined8 *)
                   (&DAT_14ca8c1f0 +
                   (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) * 8);
          uVar8 = FUN_1415d2600();
          FUN_1448e935e(uVar9,&local_288,uVar8,iVar21);
          FUN_1415d2600();
          local_460 = local_288;
          local_3e0 = local_280;
          local_1d8 = 0;
          uStack_1d0 = 0;
          local_288 = local_420 & 0xffffffff;
          local_280 = local_398;
          local_278 = (ulonglong)local_3bc;
          uStack_270 = (undefined4)local_3a0;
          uStack_26c = (undefined4)((ulonglong)local_3a0 >> 0x20);
          uStack_268 = (undefined4)local_3b0;
          uStack_264 = (undefined4)((ulonglong)local_3b0 >> 0x20);
          local_260 = local_3a8;
          local_258 = CONCAT44(local_3c4,local_3c0);
          uStack_250 = (ulonglong *)CONCAT44(local_3d8,local_3c8);
          local_248 = local_430;
          uStack_244 = local_434;
          uStack_240 = local_438;
          uStack_23c = local_43c;
          local_238 = CONCAT44(local_444,local_440);
          uStack_230 = CONCAT44(local_424,local_448);
          local_228 = CONCAT44(local_400,local_3fc);
          uStack_220 = CONCAT44(local_42c,local_428);
          local_218 = local_3d0;
          local_204 = local_404;
          local_200 = local_40c;
          local_1fc = local_408;
          local_1f8 = local_414;
          local_1f4 = local_410;
          local_1f0 = local_3cc;
          local_1ec = local_3d4;
          local_1e0 = *(undefined8 *)(local_458 + 0x2b8);
          local_1e8 = (ulonglong *)*local_320;
          if ((ulonglong *)*local_320 == (ulonglong *)0x0) {
            local_1e8 = DAT_14cb428f0;
          }
          uVar17 = (int)local_420 + 0x1fU >> 5;
          local_3b8 = (ulonglong *)(ulonglong)uVar17;
          uVar14 = (ulonglong)(uVar17 - 1) * 2 + 1;
          local_3e8 = (longlong *)&DAT_0000003f;
          if (uVar14 != 0) {
            for (; uVar14 >> (longlong)local_3e8 == 0;
                local_3e8 = (longlong *)((longlong)local_3e8 + -1)) {
            }
          }
          bVar40 = ((ulonglong)local_3e8 & 1) != 0;
          if (bVar40) {
            local_1e0 = *local_328;
            local_1e8 = *(ulonglong **)(local_458 + 0x2c0);
          }
          local_158 = (ulonglong *)0xffffffffffffffff;
          local_150 = 0xffffffff;
          local_140 = 3;
          local_13c = 0x40000000078;
          local_134 = 0;
          local_128 = 0;
          local_298 = &local_158;
          local_290 = 1;
          local_3f8 = uVar28;
          local_3f4 = uVar25;
          local_3f0 = uVar37;
          local_3ec = uVar36;
          local_214 = uVar36;
          local_210 = uVar37;
          local_20c = uVar25;
          local_208 = uVar28;
          local_148 = local_1e0;
          FUN_144760590(param_2,&local_298,0);
          uVar9 = FUN_14153dbfe();
          uVar13 = local_450;
          uVar14 = local_460;
          puVar33 = local_468;
          if (local_450 == 0) {
            uVar10 = 0;
          }
          else {
            uVar10 = *(ulonglong *)
                      (*(longlong *)(local_468[1] + 0x50) + (longlong)*(int *)(local_450 + 0xd4) * 8
                      );
            if (uVar10 == 0) {
              uVar10 = FUN_1400bafc2(local_468[1],(longlong)*(int *)(local_450 + 0xd4),1);
            }
          }
          uVar8 = FUN_140029432(param_2,uVar10,0);
          param_2[0x37] = uVar10;
          puVar7 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
          puVar16 = puVar7 + 3;
          if ((undefined8 *)param_2[1] < puVar16) {
            FUN_140023dd8(param_2,0x20);
            puVar7 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
            puVar16 = puVar7 + 3;
          }
          *param_2 = (ulonglong)puVar16;
          *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
          *(undefined8 **)param_2[6] = puVar7;
          param_2[6] = (ulonglong)(puVar7 + 1);
          puVar7[1] = 0;
          *puVar7 = &PTR_LAB_14a37d340;
          puVar7[2] = uVar8;
          local_498 = &local_288;
          FUN_14480864a(param_2,uVar10,uVar13,uVar9);
          puVar7 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
          puVar16 = puVar7 + 4;
          if ((undefined8 *)param_2[1] < puVar16) {
            FUN_140023dd8(param_2,0x28);
            puVar7 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
            puVar16 = puVar7 + 4;
          }
          *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
          *param_2 = (ulonglong)puVar16;
          *(undefined8 **)param_2[6] = puVar7;
          param_2[6] = (ulonglong)(puVar7 + 1);
          puVar7[1] = 0;
          *puVar7 = &PTR_LAB_14a1fbc30;
          *(int *)(puVar7 + 2) = (int)local_3b8;
          *(undefined1 **)((longlong)puVar7 + 0x14) = &DAT_100000001;
          if (uVar13 == 0) {
            lVar11 = 0;
          }
          else {
            lVar11 = *(longlong *)
                      (*(longlong *)(puVar33[1] + 0x50) + (longlong)*(int *)(uVar13 + 0xd4) * 8);
            if (lVar11 == 0) {
              lVar11 = FUN_1400bafc2(puVar33[1],(longlong)*(int *)(uVar13 + 0xd4),1);
            }
          }
          local_468 = (ulonglong *)CONCAT44(local_468._4_4_,(uint)bVar40);
          if (DAT_14ca8507b == '\x01') {
            if ((0 < (int)param_2[0x13]) &&
               (*(undefined4 *)(param_2 + 0x13) = 0, *(int *)((longlong)param_2 + 0x9c) < 0)) {
              FUN_147139e90(local_470,0);
            }
            uVar10 = *(ulonglong *)(uVar13 + 0x10);
            uVar30 = uVar13 + 0x10 + ((longlong)uVar10 >> 0x18);
            if ((uVar10 & 1) == 0) {
              uVar30 = uVar10;
            }
            iVar21 = *(int *)(uVar13 + 0x18);
            if ((longlong)iVar21 != 0) {
              lVar39 = 0;
              do {
                uVar17 = (uint)*(byte *)(uVar30 + 3 + lVar39);
                if ((uVar17 < 0x13) && ((0x44080U >> (uVar17 & 0x1f) & 1) != 0)) {
                  bVar4 = *(byte *)(uVar30 + 2 + lVar39);
                  iVar26 = (int)param_2[0x13];
                  *(uint *)(param_2 + 0x13) = iVar26 + 1U;
                  if (*(uint *)((longlong)param_2 + 0x9c) < iVar26 + 1U) {
                    FUN_1447477d8(local_470,iVar26);
                  }
                  uVar13 = *local_470;
                  *(ushort *)(uVar13 + (longlong)iVar26 * 4) = (ushort)bVar4;
                  *(undefined1 *)(uVar13 + 2 + (longlong)iVar26 * 4) = 1;
                }
                lVar39 = lVar39 + 4;
              } while ((longlong)iVar21 * 4 != lVar39);
            }
            uVar13 = param_2[0x13];
            lVar39 = (longlong)(int)uVar13;
            if (0 < lVar39) {
              if (DAT_14ca8507b == '\x01') {
                pvVar6 = (void *)*local_470;
                puVar7 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
                puVar16 = puVar7 + 5;
                if ((undefined8 *)param_2[1] < puVar16) {
                  FUN_140023dd8(param_2,0x30);
                  puVar7 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
                  puVar16 = puVar7 + 5;
                }
                *param_2 = (ulonglong)puVar16;
                *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
                *(undefined8 **)param_2[6] = puVar7;
                param_2[6] = (ulonglong)(puVar7 + 1);
                sVar3 = lVar39 * 4;
                pvVar29 = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
                pvVar12 = (void *)(lVar39 * 4 + (longlong)pvVar29);
                if ((void *)param_2[1] < pvVar12) {
                  FUN_140023dd8(param_2,(uint)sVar3 | 2);
                  pvVar29 = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
                  pvVar12 = (void *)(sVar3 + (longlong)pvVar29);
                }
                *param_2 = (ulonglong)pvVar12;
                memcpy(pvVar29,pvVar6,sVar3);
                puVar7[1] = 0;
                *puVar7 = &PTR_FUN_14a1fbc38;
                puVar7[2] = lVar11;
                puVar7[3] = pvVar29;
                *(int *)(puVar7 + 4) = (int)uVar13;
              }
              *(undefined4 *)(param_2 + 0x13) = 0;
              if (*(int *)((longlong)param_2 + 0x9c) < 0) {
                FUN_147139e90(local_470,0);
              }
            }
          }
          plVar18 = local_3e8;
          local_158 = (ulonglong *)0xffffffffffffffff;
          local_150 = 0xffffffff;
          local_148 = local_1e0;
          local_140 = 3;
          local_13c = 0x7800000400;
          local_134 = 0;
          local_128 = 0;
          local_298 = &local_158;
          local_290 = 1;
          FUN_144760590(param_2,&local_298,0);
          if (plVar18 != (longlong *)0x0) {
            local_380 = (undefined8 *)(local_458 + 0x2b8);
            local_3e8 = (longlong *)(ulonglong)((int)local_3e8 + (uint)((int)local_3e8 == 0));
            local_388 = (longlong *)(local_458 + 0x2c0);
            local_390 = (ulonglong *)(uVar14 + 0x10);
            iVar26 = 0;
            uVar17 = (uint)local_468;
            iVar21 = 0x20;
            do {
              local_298 = &local_158;
              local_450 = CONCAT44(local_450._4_4_,iVar21 * 2);
              local_1d8 = CONCAT44(iVar21 * 2,iVar21);
              puVar16 = local_328;
              if (uVar17 == 1) {
                puVar16 = local_380;
              }
              local_1e0 = *puVar16;
              plVar18 = local_388;
              if (uVar17 == 1) {
                plVar18 = local_320;
              }
              local_1e8 = (ulonglong *)*plVar18;
              local_158 = (ulonglong *)0xffffffffffffffff;
              local_150 = 0xffffffff;
              local_140 = 3;
              local_13c = 0x40000000078;
              local_134 = 0;
              local_128 = 0;
              local_290 = 1;
              local_148 = local_1e0;
              FUN_144760590(param_2,&local_298,0);
              uVar9 = FUN_14153dbfe();
              if (uVar14 == 0) {
                uVar13 = 0;
              }
              else {
                uVar13 = *(ulonglong *)
                          (*(longlong *)(local_3e0[1] + 0x50) +
                          (longlong)*(int *)(uVar14 + 0xd4) * 8);
                if (uVar13 == 0) {
                  uVar13 = FUN_1400bafc2(local_3e0[1],(longlong)*(int *)(uVar14 + 0xd4),1);
                }
              }
              uVar8 = FUN_140029432(param_2,uVar13,0);
              param_2[0x37] = uVar13;
              puVar7 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
              puVar16 = puVar7 + 3;
              if ((undefined8 *)param_2[1] < puVar16) {
                FUN_140023dd8(param_2,0x20);
                puVar7 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
                puVar16 = puVar7 + 3;
              }
              *param_2 = (ulonglong)puVar16;
              *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
              *(undefined8 **)param_2[6] = puVar7;
              param_2[6] = (ulonglong)(puVar7 + 1);
              puVar7[1] = 0;
              *puVar7 = &PTR_LAB_14a37d340;
              puVar7[2] = uVar8;
              local_498 = &local_288;
              FUN_14480864a(param_2,uVar13,uVar14,uVar9);
              puVar7 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
              puVar16 = puVar7 + 4;
              if ((undefined8 *)param_2[1] < puVar16) {
                FUN_140023dd8(param_2,0x28);
                puVar7 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
                puVar16 = puVar7 + 4;
              }
              local_468 = (ulonglong *)CONCAT44(local_468._4_4_,uVar17);
              *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
              *param_2 = (ulonglong)puVar16;
              *(undefined8 **)param_2[6] = puVar7;
              param_2[6] = (ulonglong)(puVar7 + 1);
              puVar7[1] = 0;
              *puVar7 = &PTR_LAB_14a1fbc30;
              *(int *)(puVar7 + 2) = (int)local_3b8;
              *(undefined1 **)((longlong)puVar7 + 0x14) = &DAT_100000001;
              if (uVar14 == 0) {
                lVar11 = 0;
              }
              else {
                lVar11 = *(longlong *)
                          (*(longlong *)(local_3e0[1] + 0x50) +
                          (longlong)*(int *)(uVar14 + 0xd4) * 8);
                if (lVar11 == 0) {
                  lVar11 = FUN_1400bafc2();
                }
              }
              if (DAT_14ca8507b == '\x01') {
                if ((0 < (int)param_2[0x13]) &&
                   (*(undefined4 *)(param_2 + 0x13) = 0, *(int *)((longlong)param_2 + 0x9c) < 0)) {
                  FUN_147139e90(local_470,0);
                }
                uVar13 = *(ulonglong *)(uVar14 + 0x10);
                uVar10 = ((longlong)uVar13 >> 0x18) + (longlong)local_390;
                if ((uVar13 & 1) == 0) {
                  uVar10 = uVar13;
                }
                iVar21 = *(int *)(uVar14 + 0x18);
                if ((longlong)iVar21 != 0) {
                  lVar39 = 0;
                  do {
                    uVar17 = (uint)*(byte *)(uVar10 + 3 + lVar39);
                    if ((uVar17 < 0x13) && ((0x44080U >> (uVar17 & 0x1f) & 1) != 0)) {
                      bVar4 = *(byte *)(uVar10 + 2 + lVar39);
                      iVar5 = (int)param_2[0x13];
                      *(uint *)(param_2 + 0x13) = iVar5 + 1U;
                      if (*(uint *)((longlong)param_2 + 0x9c) < iVar5 + 1U) {
                        FUN_1447477d8(local_470,iVar5);
                      }
                      uVar14 = *local_470;
                      *(ushort *)(uVar14 + (longlong)iVar5 * 4) = (ushort)bVar4;
                      *(undefined1 *)(uVar14 + 2 + (longlong)iVar5 * 4) = 1;
                    }
                    lVar39 = lVar39 + 4;
                  } while ((longlong)iVar21 * 4 != lVar39);
                }
                uVar13 = param_2[0x13];
                lVar39 = (longlong)(int)uVar13;
                uVar14 = local_460;
                if (0 < lVar39) {
                  if (DAT_14ca8507b == '\x01') {
                    pvVar6 = (void *)*local_470;
                    puVar7 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
                    puVar16 = puVar7 + 5;
                    if ((undefined8 *)param_2[1] < puVar16) {
                      FUN_140023dd8(param_2,0x30);
                      puVar7 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
                      puVar16 = puVar7 + 5;
                    }
                    *param_2 = (ulonglong)puVar16;
                    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
                    *(undefined8 **)param_2[6] = puVar7;
                    param_2[6] = (ulonglong)(puVar7 + 1);
                    sVar3 = lVar39 * 4;
                    pvVar29 = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
                    pvVar12 = (void *)(lVar39 * 4 + (longlong)pvVar29);
                    if ((void *)param_2[1] < pvVar12) {
                      FUN_140023dd8(param_2,(uint)sVar3 | 2);
                      pvVar29 = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
                      pvVar12 = (void *)(sVar3 + (longlong)pvVar29);
                    }
                    *param_2 = (ulonglong)pvVar12;
                    memcpy(pvVar29,pvVar6,sVar3);
                    puVar7[1] = 0;
                    *puVar7 = &PTR_FUN_14a1fbc38;
                    puVar7[2] = lVar11;
                    puVar7[3] = pvVar29;
                    *(int *)(puVar7 + 4) = (int)uVar13;
                  }
                  uVar14 = local_460;
                  *(undefined4 *)(param_2 + 0x13) = 0;
                  if (*(int *)((longlong)param_2 + 0x9c) < 0) {
                    FUN_147139e90(local_470,0);
                  }
                }
              }
              uVar17 = (uint)local_468 ^ 1;
              local_158 = (ulonglong *)0xffffffffffffffff;
              local_150 = 0xffffffff;
              local_148 = local_1e0;
              local_140 = 3;
              local_13c = 0x7800000400;
              local_134 = 0;
              local_128 = 0;
              local_298 = &local_158;
              local_290 = 1;
              FUN_144760590(param_2,&local_298);
              iVar26 = iVar26 + 1;
              iVar21 = (uint)local_450;
            } while (iVar26 != (uint)local_3e8);
          }
          lVar39 = local_458;
          uVar17 = *(uint *)(local_458 + 300);
          uVar9 = *(undefined8 *)
                   (&DAT_14ca8c1f0 +
                   (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) * 8);
          uVar8 = FUN_14156b00c();
          FUN_1448e935e(uVar9,&local_288,uVar8,(uVar17 >> 3 & 0xc | uVar17 & 3) + (uVar17 & 4) * 4);
          FUN_14156b00c();
          puVar33 = local_280;
          uVar13 = local_288;
          uVar17 = *(uint *)(lVar39 + 300);
          uVar9 = *(undefined8 *)
                   (&DAT_14ca8c1f0 +
                   (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) * 8);
          uVar8 = FUN_1415d2720();
          FUN_1448e935e(uVar9,&local_288,uVar8,(uVar17 >> 3 & 0xc | uVar17 & 3) + (uVar17 & 4) * 4);
          FUN_1415d2720();
          uVar10 = local_288;
          local_468 = local_280;
          iVar21 = (int)local_420;
          local_288 = local_420 & 0xffffffff;
          local_280 = local_398;
          local_278 = (ulonglong)local_3bc;
          uStack_270 = (undefined4)local_3a0;
          uStack_26c = (undefined4)((ulonglong)local_3a0 >> 0x20);
          uStack_268 = (undefined4)local_3b0;
          uStack_264 = (undefined4)((ulonglong)local_3b0 >> 0x20);
          local_260 = local_3a8;
          local_258 = CONCAT44(local_3c4,local_3c0);
          uStack_250 = (ulonglong *)CONCAT44(local_3d8,local_3c8);
          local_248 = local_430;
          uStack_244 = local_434;
          uStack_240 = local_438;
          uStack_23c = local_43c;
          local_238 = CONCAT44(local_444,local_440);
          uStack_230 = CONCAT44(local_424,local_448);
          local_228 = CONCAT44(local_400,local_3fc);
          uStack_220 = CONCAT44(local_42c,local_428);
          local_218 = local_3d0;
          local_214 = local_3ec;
          local_210 = local_3f0;
          local_20c = local_3f4;
          local_208 = local_3f8;
          local_204 = local_404;
          local_200 = local_40c;
          local_1fc = local_408;
          local_1f8 = local_414;
          local_1f4 = local_410;
          local_1f0 = local_3cc;
          local_1ec = local_3d4;
          local_1e8 = *(ulonglong **)(lVar39 + 0x2c0);
          uVar14 = (ulonglong)(iVar21 + -1 + (uint)(iVar21 == 0)) * 2 + 1;
          lVar11 = 0x3f;
          if (uVar14 != 0) {
            for (; uVar14 >> lVar11 == 0; lVar11 = lVar11 + -1) {
            }
          }
          fVar41 = *(float *)(lVar39 + 0x124);
          if (0.99 <= fVar41) {
            fVar41 = 0.99;
          }
          uStack_1a0 = (ulonglong)(uint)fVar41;
          if ((~(uint)lVar11 & 1) == 0) {
            local_460 = CONCAT44(local_460._4_4_,1);
            lVar11 = 0xf8;
            lVar35 = 0xd0;
            plVar19 = (longlong *)(lVar39 + 0x2f0);
            plVar18 = local_348;
            puVar16 = local_358;
            puVar20 = (ulonglong *)(lVar39 + 800);
            puVar27 = local_350;
            puVar7 = (undefined8 *)(lVar39 + 0x380);
          }
          else {
            plVar18 = (longlong *)(lVar39 + 0x2e8);
            puVar27 = (ulonglong *)(lVar39 + 0x318);
            puVar16 = (undefined8 *)(lVar39 + 0x378);
            local_460 = (ulonglong)local_460._4_4_ << 0x20;
            lVar11 = 200;
            lVar35 = 0x100;
            plVar19 = local_330;
            puVar20 = local_338;
            puVar7 = local_340;
          }
          uStack_1b0 = *(undefined8 *)(local_370 + lVar35);
          local_1b8 = *puVar16;
          uStack_1c0 = *puVar7;
          local_1c8 = *puVar27;
          uStack_1d0 = *puVar20;
          local_1d8 = *plVar18;
          local_1e0 = *plVar19;
          local_1a8 = *(undefined8 *)(local_370 + lVar11);
          local_158 = (ulonglong *)0xffffffffffffffff;
          local_150 = 0xffffffff;
          local_140 = 3;
          local_13c = 0x40000000078;
          local_134 = 0;
          local_128 = 0;
          local_120 = 0xffffffffffffffff;
          local_118 = 0xffffffff;
          local_108 = 3;
          local_104 = 0x40000000078;
          local_fc = 0;
          local_f0 = 0;
          local_e8 = 0xffffffffffffffff;
          local_e0 = 0xffffffff;
          local_d0 = 3;
          local_cc = 0x40000000078;
          local_c4 = 0;
          local_b8 = 0;
          local_b0 = 0xffffffffffffffff;
          local_a8 = 0xffffffff;
          local_98 = 3;
          local_94 = 0x40000000078;
          local_8c = 0;
          local_80 = 0;
          local_298 = &local_158;
          local_290 = 4;
          local_148 = local_1d8;
          local_110 = local_1c8;
          local_d8 = local_1b8;
          local_a0 = local_1a8;
          FUN_144760590(param_2,&local_298,0);
          lVar11 = 0xd8;
          do {
            if (*(char *)((longlong)&local_158 + lVar11) == '\x01') {
              *(undefined1 *)((longlong)&local_158 + lVar11) = 0;
            }
            lVar11 = lVar11 + -0x38;
          } while (lVar11 != -8);
          uVar9 = FUN_14156b12c();
          if (uVar13 == 0) {
            uVar14 = 0;
          }
          else {
            uVar30 = puVar33[1];
            uVar14 = *(ulonglong *)
                      (*(longlong *)(uVar30 + 0x50) + (longlong)*(int *)(uVar13 + 0xd4) * 8);
            if (uVar14 == 0) {
              uVar14 = FUN_1400bafc2(uVar30,(longlong)*(int *)(uVar13 + 0xd4),1);
            }
          }
          uVar8 = FUN_140029432(param_2,uVar14,0);
          param_2[0x37] = uVar14;
          puVar7 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
          puVar16 = puVar7 + 3;
          if ((undefined8 *)param_2[1] < puVar16) {
            FUN_140023dd8(param_2,0x20);
            puVar7 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
            puVar16 = puVar7 + 3;
          }
          *param_2 = (ulonglong)puVar16;
          *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
          *(undefined8 **)param_2[6] = puVar7;
          param_2[6] = (ulonglong)(puVar7 + 1);
          puVar7[1] = 0;
          *puVar7 = &PTR_LAB_14a37d340;
          puVar7[2] = uVar8;
          local_498 = &local_288;
          FUN_14480864a(param_2,uVar14,uVar13,uVar9);
          puVar7 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
          puVar16 = puVar7 + 4;
          if ((undefined8 *)param_2[1] < puVar16) {
            FUN_140023dd8(param_2,0x28);
            puVar7 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
            puVar16 = puVar7 + 4;
          }
          *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
          uVar17 = iVar21 + 0x3fU >> 6;
          *param_2 = (ulonglong)puVar16;
          *(undefined8 **)param_2[6] = puVar7;
          param_2[6] = (ulonglong)(puVar7 + 1);
          puVar7[1] = 0;
          *puVar7 = &PTR_LAB_14a1fbc30;
          local_450 = CONCAT44(local_450._4_4_,uVar17);
          *(uint *)(puVar7 + 2) = uVar17;
          *(undefined1 **)((longlong)puVar7 + 0x14) = &DAT_100000001;
          if (uVar13 == 0) {
            lVar11 = 0;
          }
          else {
            lVar11 = *(longlong *)
                      (*(longlong *)(puVar33[1] + 0x50) + (longlong)*(int *)(uVar13 + 0xd4) * 8);
            if (lVar11 == 0) {
              lVar11 = FUN_1400bafc2();
            }
          }
          if (DAT_14ca8507b == '\x01') {
            if ((0 < (int)param_2[0x13]) &&
               (*(undefined4 *)(param_2 + 0x13) = 0, *(int *)((longlong)param_2 + 0x9c) < 0)) {
              FUN_147139e90(local_470,0);
            }
            uVar14 = *(ulonglong *)(uVar13 + 0x10);
            uVar30 = uVar13 + 0x10 + ((longlong)uVar14 >> 0x18);
            if ((uVar14 & 1) == 0) {
              uVar30 = uVar14;
            }
            iVar21 = *(int *)(uVar13 + 0x18);
            if ((longlong)iVar21 != 0) {
              lVar39 = 0;
              do {
                uVar17 = (uint)*(byte *)(uVar30 + 3 + lVar39);
                if ((uVar17 < 0x13) && ((0x44080U >> (uVar17 & 0x1f) & 1) != 0)) {
                  bVar4 = *(byte *)(uVar30 + 2 + lVar39);
                  iVar26 = (int)param_2[0x13];
                  *(uint *)(param_2 + 0x13) = iVar26 + 1U;
                  if (*(uint *)((longlong)param_2 + 0x9c) < iVar26 + 1U) {
                    FUN_1447477d8(local_470,iVar26);
                  }
                  uVar14 = *local_470;
                  *(ushort *)(uVar14 + (longlong)iVar26 * 4) = (ushort)bVar4;
                  *(undefined1 *)(uVar14 + 2 + (longlong)iVar26 * 4) = 1;
                }
                lVar39 = lVar39 + 4;
              } while ((longlong)iVar21 * 4 != lVar39);
            }
            uVar14 = param_2[0x13];
            lVar39 = (longlong)(int)uVar14;
            if (0 < lVar39) {
              if (DAT_14ca8507b == '\x01') {
                pvVar6 = (void *)*local_470;
                puVar7 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
                puVar16 = puVar7 + 5;
                if ((undefined8 *)param_2[1] < puVar16) {
                  FUN_140023dd8(param_2,0x30);
                  puVar7 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
                  puVar16 = puVar7 + 5;
                }
                *param_2 = (ulonglong)puVar16;
                *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
                *(undefined8 **)param_2[6] = puVar7;
                param_2[6] = (ulonglong)(puVar7 + 1);
                sVar3 = lVar39 * 4;
                pvVar29 = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
                pvVar12 = (void *)(lVar39 * 4 + (longlong)pvVar29);
                if ((void *)param_2[1] < pvVar12) {
                  FUN_140023dd8(param_2,(uint)sVar3 | 2);
                  pvVar29 = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
                  pvVar12 = (void *)(sVar3 + (longlong)pvVar29);
                }
                *param_2 = (ulonglong)pvVar12;
                memcpy(pvVar29,pvVar6,sVar3);
                puVar7[1] = 0;
                *puVar7 = &PTR_FUN_14a1fbc38;
                puVar7[2] = lVar11;
                puVar7[3] = pvVar29;
                *(int *)(puVar7 + 4) = (int)uVar14;
              }
              *(undefined4 *)(param_2 + 0x13) = 0;
              if (*(int *)((longlong)param_2 + 0x9c) < 0) {
                FUN_147139e90(local_470,0);
              }
            }
          }
          local_158 = (ulonglong *)0xffffffffffffffff;
          local_150 = 0xffffffff;
          local_148 = local_1d8;
          local_140 = 3;
          local_13c = 0x7800000400;
          local_134 = 0;
          local_128 = 0;
          local_120 = 0xffffffffffffffff;
          local_118 = 0xffffffff;
          local_110 = local_1c8;
          local_108 = 3;
          local_104 = 0x7800000400;
          local_fc = 0;
          local_f0 = 0;
          local_e8 = 0xffffffffffffffff;
          local_e0 = 0xffffffff;
          local_d8 = local_1b8;
          local_d0 = 3;
          local_cc = 0x7800000400;
          local_c4 = 0;
          local_b8 = 0;
          local_b0 = 0xffffffffffffffff;
          local_a8 = 0xffffffff;
          local_a0 = local_1a8;
          local_98 = 3;
          local_94 = 0x7800000400;
          local_8c = 0;
          local_80 = 0;
          local_298 = &local_158;
          local_290 = 4;
          FUN_144760590(param_2,&local_298,0);
          lVar11 = 0xd8;
          do {
            if (*(char *)((longlong)&local_158 + lVar11) == '\x01') {
              *(undefined1 *)((longlong)&local_158 + lVar11) = 0;
            }
            lVar11 = lVar11 + -0x38;
          } while (lVar11 != -8);
          uStack_1a0 = CONCAT44(1,(undefined4)uStack_1a0);
          if (1 < (int)local_420) {
            local_3e8 = (longlong *)(local_458 + 0x2f0);
            local_3b8 = (ulonglong *)(local_458 + 800);
            local_380 = (undefined8 *)(local_458 + 0x380);
            local_388 = (longlong *)(local_458 + 0x2e8);
            local_390 = (ulonglong *)(local_458 + 0x318);
            local_2d0 = (undefined8 *)(local_458 + 0x378);
            local_3e0 = (ulonglong *)(uVar10 + 0x10);
            iVar21 = (uint)local_460;
            do {
              local_298 = &local_158;
              if (iVar21 == 1) {
                lVar11 = 200;
                lVar39 = 0x100;
                plVar18 = local_330;
                puVar16 = local_2d0;
                plVar19 = local_388;
                puVar33 = local_338;
                puVar27 = local_390;
                puVar7 = local_340;
              }
              else {
                lVar11 = 0xf8;
                lVar39 = 0xd0;
                plVar18 = local_3e8;
                puVar16 = local_358;
                plVar19 = local_348;
                puVar33 = local_3b8;
                puVar27 = local_350;
                puVar7 = local_380;
              }
              local_1e0 = *plVar18;
              local_1d8 = *plVar19;
              uStack_1d0 = *puVar33;
              local_1c8 = *puVar27;
              uStack_1c0 = *puVar7;
              local_1b8 = *puVar16;
              uStack_1b0 = *(undefined8 *)(local_370 + lVar39);
              local_1a8 = *(undefined8 *)(local_370 + lVar11);
              local_158 = (ulonglong *)0xffffffffffffffff;
              local_150 = 0xffffffff;
              local_140 = 3;
              local_13c = 0x40000000078;
              local_134 = 0;
              local_128 = 0;
              local_120 = 0xffffffffffffffff;
              local_118 = 0xffffffff;
              local_108 = 3;
              local_104 = 0x40000000078;
              local_fc = 0;
              local_f0 = 0;
              local_e8 = 0xffffffffffffffff;
              local_e0 = 0xffffffff;
              local_d0 = 3;
              local_cc = 0x40000000078;
              local_c4 = 0;
              local_b8 = 0;
              local_b0 = 0xffffffffffffffff;
              local_a8 = 0xffffffff;
              local_98 = 3;
              local_94 = 0x40000000078;
              local_8c = 0;
              local_80 = 0;
              local_290 = 4;
              local_148 = local_1d8;
              local_110 = local_1c8;
              local_d8 = local_1b8;
              local_a0 = local_1a8;
              FUN_144760590(param_2,&local_298,0);
              lVar11 = 0xd8;
              do {
                if (*(char *)((longlong)&local_158 + lVar11) == '\x01') {
                  *(undefined1 *)((longlong)&local_158 + lVar11) = 0;
                }
                lVar11 = lVar11 + -0x38;
              } while (lVar11 != -8);
              local_460 = CONCAT44(local_460._4_4_,iVar21) ^ 1;
              uVar9 = FUN_14156b12c();
              if (uVar10 == 0) {
                uVar14 = 0;
              }
              else {
                uVar14 = *(ulonglong *)
                          (*(longlong *)(local_468[1] + 0x50) +
                          (longlong)*(int *)(uVar10 + 0xd4) * 8);
                if (uVar14 == 0) {
                  uVar14 = FUN_1400bafc2(local_468[1],(longlong)*(int *)(uVar10 + 0xd4),1);
                }
              }
              uVar8 = FUN_140029432(param_2,uVar14,0);
              param_2[0x37] = uVar14;
              puVar7 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
              puVar16 = puVar7 + 3;
              if ((undefined8 *)param_2[1] < puVar16) {
                FUN_140023dd8(param_2,0x20);
                puVar7 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
                puVar16 = puVar7 + 3;
              }
              *param_2 = (ulonglong)puVar16;
              *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
              *(undefined8 **)param_2[6] = puVar7;
              param_2[6] = (ulonglong)(puVar7 + 1);
              puVar7[1] = 0;
              *puVar7 = &PTR_LAB_14a37d340;
              puVar7[2] = uVar8;
              local_498 = &local_288;
              FUN_14480864a(param_2,uVar14,uVar10,uVar9);
              puVar7 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
              puVar16 = puVar7 + 4;
              if ((undefined8 *)param_2[1] < puVar16) {
                FUN_140023dd8(param_2,0x28);
                puVar7 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
                puVar16 = puVar7 + 4;
              }
              *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
              *param_2 = (ulonglong)puVar16;
              *(undefined8 **)param_2[6] = puVar7;
              param_2[6] = (ulonglong)(puVar7 + 1);
              puVar7[1] = 0;
              *puVar7 = &PTR_LAB_14a1fbc30;
              *(uint *)(puVar7 + 2) = (uint)local_450;
              *(undefined1 **)((longlong)puVar7 + 0x14) = &DAT_100000001;
              if (uVar10 == 0) {
                lVar11 = 0;
              }
              else {
                lVar11 = *(longlong *)
                          (*(longlong *)(local_468[1] + 0x50) +
                          (longlong)*(int *)(uVar10 + 0xd4) * 8);
                if (lVar11 == 0) {
                  lVar11 = FUN_1400bafc2();
                }
              }
              if (DAT_14ca8507b == '\x01') {
                if ((0 < (int)param_2[0x13]) &&
                   (*(undefined4 *)(param_2 + 0x13) = 0, *(int *)((longlong)param_2 + 0x9c) < 0)) {
                  FUN_147139e90(local_470,0);
                }
                uVar14 = *(ulonglong *)(uVar10 + 0x10);
                uVar13 = ((longlong)uVar14 >> 0x18) + (longlong)local_3e0;
                if ((uVar14 & 1) == 0) {
                  uVar13 = uVar14;
                }
                iVar21 = *(int *)(uVar10 + 0x18);
                if ((longlong)iVar21 != 0) {
                  lVar39 = 0;
                  do {
                    uVar17 = (uint)*(byte *)(uVar13 + 3 + lVar39);
                    if ((uVar17 < 0x13) && ((0x44080U >> (uVar17 & 0x1f) & 1) != 0)) {
                      bVar4 = *(byte *)(uVar13 + 2 + lVar39);
                      iVar26 = (int)param_2[0x13];
                      *(uint *)(param_2 + 0x13) = iVar26 + 1U;
                      if (*(uint *)((longlong)param_2 + 0x9c) < iVar26 + 1U) {
                        FUN_1447477d8(local_470,iVar26);
                      }
                      uVar14 = *local_470;
                      *(ushort *)(uVar14 + (longlong)iVar26 * 4) = (ushort)bVar4;
                      *(undefined1 *)(uVar14 + 2 + (longlong)iVar26 * 4) = 1;
                    }
                    lVar39 = lVar39 + 4;
                  } while ((longlong)iVar21 * 4 != lVar39);
                }
                uVar14 = param_2[0x13];
                lVar39 = (longlong)(int)uVar14;
                if (0 < lVar39) {
                  if (DAT_14ca8507b == '\x01') {
                    pvVar6 = (void *)*local_470;
                    puVar7 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
                    puVar16 = puVar7 + 5;
                    if ((undefined8 *)param_2[1] < puVar16) {
                      FUN_140023dd8(param_2,0x30);
                      puVar7 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
                      puVar16 = puVar7 + 5;
                    }
                    *param_2 = (ulonglong)puVar16;
                    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
                    *(undefined8 **)param_2[6] = puVar7;
                    param_2[6] = (ulonglong)(puVar7 + 1);
                    sVar3 = lVar39 * 4;
                    pvVar29 = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
                    pvVar12 = (void *)(lVar39 * 4 + (longlong)pvVar29);
                    if ((void *)param_2[1] < pvVar12) {
                      FUN_140023dd8(param_2,(uint)sVar3 | 2);
                      pvVar29 = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
                      pvVar12 = (void *)(sVar3 + (longlong)pvVar29);
                    }
                    *param_2 = (ulonglong)pvVar12;
                    memcpy(pvVar29,pvVar6,sVar3);
                    puVar7[1] = 0;
                    *puVar7 = &PTR_FUN_14a1fbc38;
                    puVar7[2] = lVar11;
                    puVar7[3] = pvVar29;
                    *(int *)(puVar7 + 4) = (int)uVar14;
                  }
                  *(undefined4 *)(param_2 + 0x13) = 0;
                  if (*(int *)((longlong)param_2 + 0x9c) < 0) {
                    FUN_147139e90(local_470,0);
                  }
                }
              }
              local_158 = (ulonglong *)0xffffffffffffffff;
              local_150 = 0xffffffff;
              local_148 = local_1d8;
              local_140 = 3;
              local_13c = 0x7800000400;
              local_134 = 0;
              local_128 = 0;
              local_120 = 0xffffffffffffffff;
              local_118 = 0xffffffff;
              local_110 = local_1c8;
              local_108 = 3;
              local_104 = 0x7800000400;
              local_fc = 0;
              local_f0 = 0;
              local_e8 = 0xffffffffffffffff;
              local_e0 = 0xffffffff;
              local_d8 = local_1b8;
              local_d0 = 3;
              local_cc = 0x7800000400;
              local_c4 = 0;
              local_b8 = 0;
              local_b0 = 0xffffffffffffffff;
              local_a8 = 0xffffffff;
              local_a0 = local_1a8;
              local_98 = 3;
              local_94 = 0x7800000400;
              local_8c = 0;
              local_80 = 0;
              local_298 = &local_158;
              local_290 = 4;
              FUN_144760590(param_2,&local_298,0);
              lVar11 = 0xd8;
              do {
                if (*(char *)((longlong)&local_158 + lVar11) == '\x01') {
                  *(undefined1 *)((longlong)&local_158 + lVar11) = 0;
                }
                lVar11 = lVar11 + -0x38;
              } while (lVar11 != -8);
              iVar26 = uStack_1a0._4_4_ * 2;
              uStack_1a0 = CONCAT44(iVar26,(undefined4)uStack_1a0);
              iVar21 = (uint)local_460;
            } while (iVar26 < (int)local_420);
          }
          lVar39 = local_458;
          local_288 = local_420 & 0xffffffff;
          local_280 = local_398;
          local_278 = (ulonglong)local_3bc;
          uStack_270 = (undefined4)local_3a0;
          uStack_26c = (undefined4)((ulonglong)local_3a0 >> 0x20);
          uStack_268 = (undefined4)local_3b0;
          uStack_264 = (undefined4)((ulonglong)local_3b0 >> 0x20);
          local_260 = local_3a8;
          local_258 = CONCAT44(local_3c4,local_3c0);
          uStack_250 = (ulonglong *)CONCAT44(local_3d8,local_3c8);
          local_248 = local_430;
          uStack_244 = local_434;
          uStack_240 = local_438;
          uStack_23c = local_43c;
          local_238 = CONCAT44(local_444,local_440);
          uStack_230 = CONCAT44(local_424,local_448);
          local_228 = CONCAT44(local_400,local_3fc);
          uStack_220 = CONCAT44(local_42c,local_428);
          local_218 = local_3d0;
          local_214 = local_3ec;
          local_210 = local_3f0;
          local_20c = local_3f4;
          local_208 = local_3f8;
          local_204 = local_404;
          local_200 = local_40c;
          local_1fc = local_408;
          local_1f8 = local_414;
          local_1f4 = local_410;
          local_1f0 = local_3cc;
          local_1ec = local_3d4;
          local_1e8 = *(ulonglong **)(local_458 + 0x2c0);
          local_1e0 = *(undefined8 *)(local_458 + 0x2f0);
          local_1d8 = *(undefined8 *)(local_458 + 800);
          uStack_1d0 = *(undefined8 *)(local_458 + 0x380);
          local_1c8 = *(ulonglong *)(local_360 + 0x100);
          uStack_1c0 = *(undefined8 *)(local_458 + 0x348);
          local_1b8 = *(undefined8 *)(local_458 + 0x3a8);
          uStack_1b0 = 0x4000000000;
          uVar17 = *(uint *)(local_458 + 300);
          uVar9 = *(undefined8 *)
                   (&DAT_14ca8c1f0 +
                   (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) * 8);
          uVar8 = FUN_14159ac30();
          FUN_1448e935e(uVar9,&local_158,uVar8,(uVar17 >> 3 & 0xc | uVar17 & 3) + (uVar17 & 4) * 4);
          FUN_14159ac30();
          puVar33 = local_158;
          lVar11 = CONCAT44(uStack_14c,local_150);
          uVar17 = *(uint *)(lVar39 + 300);
          local_148 = *(undefined8 *)(lVar39 + 0x340);
          local_158 = (ulonglong *)0xffffffffffffffff;
          local_150 = 0xffffffff;
          local_140 = 2;
          local_13c = 0x40000000078;
          local_134 = 0;
          local_128 = 0;
          local_110 = *(undefined8 *)(lVar39 + 0x3a0);
          local_120 = 0xffffffffffffffff;
          local_118 = 0xffffffff;
          local_108 = 2;
          local_104 = 0x4000000007c;
          local_fc = 0;
          local_f0 = 0;
          local_290 = 2;
          local_298 = &local_158;
          FUN_144760590(param_2,&local_298,0);
          lVar39 = 0x68;
          do {
            if (*(char *)((longlong)&local_158 + lVar39) == '\x01') {
              *(undefined1 *)((longlong)&local_158 + lVar39) = 0;
            }
            lVar39 = lVar39 + -0x38;
          } while (lVar39 != -8);
          uVar22 = (uint)local_450;
          if ((uVar17 & 3) == 0) {
            uVar22 = 1;
          }
          local_450 = CONCAT44(local_450._4_4_,uVar22);
          uVar9 = FUN_14159ad50();
          if (puVar33 == (ulonglong *)0x0) {
            uVar14 = 0;
          }
          else {
            lVar39 = *(longlong *)(lVar11 + 8);
            uVar14 = *(ulonglong *)
                      (*(longlong *)(lVar39 + 0x50) +
                      (longlong)*(int *)((longlong)puVar33 + 0xd4) * 8);
            if (uVar14 == 0) {
              uVar14 = FUN_1400bafc2(lVar39,(longlong)*(int *)((longlong)puVar33 + 0xd4),1);
            }
          }
          uVar8 = FUN_140029432(param_2,uVar14,0);
          param_2[0x37] = uVar14;
          puVar7 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
          puVar16 = puVar7 + 3;
          if ((undefined8 *)param_2[1] < puVar16) {
            FUN_140023dd8(param_2,0x20);
            puVar7 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
            puVar16 = puVar7 + 3;
          }
          *param_2 = (ulonglong)puVar16;
          *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
          *(undefined8 **)param_2[6] = puVar7;
          param_2[6] = (ulonglong)(puVar7 + 1);
          puVar7[1] = 0;
          *puVar7 = &PTR_LAB_14a37d340;
          puVar7[2] = uVar8;
          local_498 = &local_288;
          FUN_14480864a(param_2,uVar14,puVar33,uVar9);
          puVar7 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
          puVar16 = puVar7 + 4;
          if ((undefined8 *)param_2[1] < puVar16) {
            FUN_140023dd8(param_2,0x28);
            puVar7 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
            puVar16 = puVar7 + 4;
          }
          *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
          *param_2 = (ulonglong)puVar16;
          *(undefined8 **)param_2[6] = puVar7;
          param_2[6] = (ulonglong)(puVar7 + 1);
          puVar7[1] = 0;
          *puVar7 = &PTR_LAB_14a1fbc30;
          *(uint *)(puVar7 + 2) = (uint)local_450;
          *(undefined1 **)((longlong)puVar7 + 0x14) = &DAT_100000001;
          if (puVar33 == (ulonglong *)0x0) {
            lVar11 = 0;
          }
          else {
            lVar39 = *(longlong *)(lVar11 + 8);
            lVar11 = *(longlong *)
                      (*(longlong *)(lVar39 + 0x50) +
                      (longlong)*(int *)((longlong)puVar33 + 0xd4) * 8);
            if (lVar11 == 0) {
              lVar11 = FUN_1400bafc2(lVar39,(longlong)*(int *)((longlong)puVar33 + 0xd4),1);
            }
          }
          if (DAT_14ca8507b == '\x01') {
            if ((0 < (int)param_2[0x13]) &&
               (*(undefined4 *)(param_2 + 0x13) = 0, *(int *)((longlong)param_2 + 0x9c) < 0)) {
              FUN_147139e90(local_470);
            }
            uVar14 = puVar33[2];
            uVar13 = (longlong)puVar33 + ((longlong)uVar14 >> 0x18) + 0x10;
            if ((uVar14 & 1) == 0) {
              uVar13 = uVar14;
            }
            uVar14 = puVar33[3];
            if ((longlong)(int)uVar14 != 0) {
              lVar39 = 0;
              do {
                uVar17 = (uint)*(byte *)(uVar13 + 3 + lVar39);
                if ((uVar17 < 0x13) && ((0x44080U >> (uVar17 & 0x1f) & 1) != 0)) {
                  bVar4 = *(byte *)(uVar13 + 2 + lVar39);
                  iVar21 = (int)param_2[0x13];
                  *(uint *)(param_2 + 0x13) = iVar21 + 1U;
                  if (*(uint *)((longlong)param_2 + 0x9c) < iVar21 + 1U) {
                    FUN_1447477d8(local_470);
                  }
                  uVar10 = *local_470;
                  *(ushort *)(uVar10 + (longlong)iVar21 * 4) = (ushort)bVar4;
                  *(undefined1 *)(uVar10 + 2 + (longlong)iVar21 * 4) = 1;
                }
                lVar39 = lVar39 + 4;
              } while ((longlong)(int)uVar14 * 4 != lVar39);
            }
            uVar14 = param_2[0x13];
            lVar39 = (longlong)(int)uVar14;
            if (0 < lVar39) {
              if (DAT_14ca8507b == '\x01') {
                pvVar6 = (void *)*local_470;
                puVar7 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
                puVar16 = puVar7 + 5;
                if ((undefined8 *)param_2[1] < puVar16) {
                  FUN_140023dd8(param_2,0x30);
                  puVar7 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
                  puVar16 = puVar7 + 5;
                }
                *param_2 = (ulonglong)puVar16;
                *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
                *(undefined8 **)param_2[6] = puVar7;
                param_2[6] = (ulonglong)(puVar7 + 1);
                sVar3 = lVar39 * 4;
                pvVar29 = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
                pvVar12 = (void *)(lVar39 * 4 + (longlong)pvVar29);
                if ((void *)param_2[1] < pvVar12) {
                  FUN_140023dd8(param_2,(uint)sVar3 | 2);
                  pvVar29 = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
                  pvVar12 = (void *)(sVar3 + (longlong)pvVar29);
                }
                *param_2 = (ulonglong)pvVar12;
                memcpy(pvVar29,pvVar6,sVar3);
                puVar7[1] = 0;
                *puVar7 = &PTR_FUN_14a1fbc38;
                puVar7[2] = lVar11;
                puVar7[3] = pvVar29;
                *(int *)(puVar7 + 4) = (int)uVar14;
              }
              *(undefined4 *)(param_2 + 0x13) = 0;
              if (*(int *)((longlong)param_2 + 0x9c) < 0) {
                FUN_147139e90(local_470);
              }
            }
          }
          local_148 = *(undefined8 *)(local_458 + 0x340);
          local_158 = (ulonglong *)0xffffffffffffffff;
          local_150 = 0xffffffff;
          local_140 = 2;
          local_13c = 0x40000000400;
          local_134 = 0;
          local_128 = 0;
          local_110 = *(undefined8 *)(local_458 + 0x3a0);
          local_120 = 0xffffffffffffffff;
          local_118 = 0xffffffff;
          local_108 = 2;
          local_104 = 0x7c00000400;
          local_fc = 0;
          local_f0 = 0;
          local_2a8 = &local_158;
          local_2a0 = 2;
          FUN_144760590(param_2,&local_2a8,0);
          lVar11 = local_458;
          lVar39 = 0x68;
          do {
            if (*(char *)((longlong)&local_158 + lVar39) == '\x01') {
              *(undefined1 *)((longlong)&local_158 + lVar39) = 0;
            }
            lVar39 = lVar39 + -0x38;
          } while (lVar39 != -8);
          local_2f0[0xc] = 0;
          local_2f0[0xd] = 0;
          local_2f0[10] = 0;
          local_2f0[0xb] = 0;
          local_2f0[8] = 0;
          local_2f0[9] = 0;
          local_2f0[6] = 0;
          local_2f0[7] = 0;
          local_2f0[4] = 0;
          local_2f0[5] = 0;
          local_2f0[2] = 0;
          local_2f0[3] = 0;
          *local_2f0 = 0;
          local_2f0[1] = 0;
          local_288 = local_420 & 0xffffffff;
          local_280 = local_398;
          local_278 = (ulonglong)local_3bc;
          uStack_270 = (undefined4)local_3a0;
          uStack_26c = (undefined4)((ulonglong)local_3a0 >> 0x20);
          uStack_268 = (undefined4)local_3b0;
          uStack_264 = (undefined4)((ulonglong)local_3b0 >> 0x20);
          local_260 = local_3a8;
          local_258 = CONCAT44(local_3c4,local_3c0);
          uStack_250 = (ulonglong *)CONCAT44(local_3d8,local_3c8);
          local_248 = local_430;
          uStack_244 = local_434;
          uStack_240 = local_438;
          uStack_23c = local_43c;
          local_238 = CONCAT44(local_444,local_440);
          uStack_230 = CONCAT44(local_424,local_448);
          local_228 = CONCAT44(local_400,local_3fc);
          uStack_220 = CONCAT44(local_42c,local_428);
          local_218 = local_3d0;
          local_214 = local_3ec;
          local_210 = local_3f0;
          local_20c = local_3f4;
          local_208 = local_3f8;
          local_204 = local_404;
          local_200 = local_40c;
          local_1fc = local_408;
          local_1f8 = local_414;
          local_1f4 = local_410;
          local_1f0 = local_3cc;
          local_1ec = local_3d4;
          local_188 = *(undefined8 *)(local_458 + 0x2c0);
          uStack_180 = *(undefined8 *)(local_458 + 0x2e8);
          local_178 = *(undefined8 *)(local_458 + 0x348);
          uStack_170 = *(undefined8 *)(local_458 + 0x3b0);
          local_1e8 = (ulonglong *)
                      CONCAT44((float)*(double *)(local_458 + 0x140),
                               (float)*(double *)(local_458 + 0x138));
          local_1e0 = CONCAT44((float)*(double *)(local_458 + 0x150),
                               (float)*(double *)(local_458 + 0x148));
          local_1d8 = (ulonglong)
                      CONCAT14(*(undefined1 *)(local_458 + 0x130),*(undefined4 *)(local_458 + 0x134)
                              );
          uStack_1d0 = (ulonglong)
                       CONCAT14(*(undefined1 *)(local_458 + 0x132),
                                (uint)*(byte *)(local_458 + 0x131));
          local_1c8 = (ulonglong)
                      CONCAT14(*(byte *)(local_458 + 0x133) >> 1,(uint)*(byte *)(local_458 + 0x133))
                      & 0x100000001;
          local_1b8 = CONCAT44((float)*(double *)(local_458 + 0x168),
                               (float)*(double *)(local_458 + 0x160));
          uStack_1b0 = CONCAT44((float)*(double *)(local_458 + 0x178),
                                (float)*(double *)(local_458 + 0x170));
          local_1a8 = (ulonglong)
                      CONCAT14(*(undefined1 *)(local_458 + 0x158),*(undefined4 *)(local_458 + 0x15c)
                              );
          uStack_1a0 = (ulonglong)
                       CONCAT14(*(undefined1 *)(local_458 + 0x15a),
                                (uint)*(byte *)(local_458 + 0x159));
          local_198 = *(byte *)(local_458 + 0x15b) & 1;
          uStack_194 = *(byte *)(local_458 + 0x15b) >> 1 & 1;
          uVar17 = *(uint *)(local_458 + 300);
          uVar9 = *(undefined8 *)
                   (&DAT_14ca8c1f0 +
                   (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) * 8);
          uVar8 = FUN_1415a0c24();
          FUN_1448e935e(uVar9,&local_158,uVar8,uVar17 >> 3 & 0xc | uVar17 & 3);
          FUN_1415a0c24();
          puVar33 = local_158;
          lVar39 = CONCAT44(uStack_14c,local_150);
          local_148 = *(undefined8 *)(lVar11 + 0x340);
          local_158 = (ulonglong *)0xffffffffffffffff;
          local_150 = 0xffffffff;
          local_140 = 2;
          local_13c = 0x40000000400;
          local_134 = 0;
          local_128 = 0;
          local_110 = *(undefined8 *)(lVar11 + 0x2e0);
          local_120 = 0xffffffffffffffff;
          local_118 = 0xffffffff;
          local_108 = 2;
          local_104 = 0x40000000078;
          local_fc = 0;
          local_f0 = 0;
          local_2b0 = 2;
          local_2b8 = &local_158;
          FUN_144760590(param_2,&local_2b8,0);
          lVar11 = 0x68;
          do {
            if (*(char *)((longlong)&local_158 + lVar11) == '\x01') {
              *(undefined1 *)((longlong)&local_158 + lVar11) = 0;
            }
            lVar11 = lVar11 + -0x38;
          } while (lVar11 != -8);
          uVar9 = *(undefined8 *)(local_458 + 0x3a0);
          uVar8 = FUN_1415a0d44();
          if (puVar33 == (ulonglong *)0x0) {
            uVar14 = 0;
          }
          else {
            lVar11 = *(longlong *)(lVar39 + 8);
            uVar14 = *(ulonglong *)
                      (*(longlong *)(lVar11 + 0x50) +
                      (longlong)*(int *)((longlong)puVar33 + 0xd4) * 8);
            if (uVar14 == 0) {
              uVar14 = FUN_1400bafc2(lVar11,(longlong)*(int *)((longlong)puVar33 + 0xd4),1);
            }
          }
          uVar15 = FUN_140029432(param_2,uVar14,0);
          param_2[0x37] = uVar14;
          puVar7 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
          puVar16 = puVar7 + 3;
          if ((undefined8 *)param_2[1] < puVar16) {
            FUN_140023dd8(param_2,0x20);
            puVar7 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
            puVar16 = puVar7 + 3;
          }
          *param_2 = (ulonglong)puVar16;
          *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
          *(undefined8 **)param_2[6] = puVar7;
          param_2[6] = (ulonglong)(puVar7 + 1);
          puVar7[1] = 0;
          *puVar7 = &PTR_LAB_14a37d340;
          puVar7[2] = uVar15;
          local_498 = &local_288;
          FUN_14480864a(param_2,uVar14,puVar33,uVar8);
          puVar7 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
          puVar16 = puVar7 + 4;
          if ((undefined8 *)param_2[1] < puVar16) {
            FUN_140023dd8(param_2,0x28);
            puVar7 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
            puVar16 = puVar7 + 4;
          }
          *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
          *param_2 = (ulonglong)puVar16;
          *(undefined8 **)param_2[6] = puVar7;
          param_2[6] = (ulonglong)(puVar7 + 1);
          puVar7[1] = 0;
          *puVar7 = &PTR_LAB_14a1e7fd0;
          puVar7[2] = uVar9;
          *(undefined4 *)(puVar7 + 3) = 0;
          if (puVar33 == (ulonglong *)0x0) {
            lVar11 = 0;
          }
          else {
            lVar39 = *(longlong *)(lVar39 + 8);
            lVar11 = *(longlong *)
                      (*(longlong *)(lVar39 + 0x50) +
                      (longlong)*(int *)((longlong)puVar33 + 0xd4) * 8);
            if (lVar11 == 0) {
              lVar11 = FUN_1400bafc2(lVar39,(longlong)*(int *)((longlong)puVar33 + 0xd4),1);
            }
          }
          if (DAT_14ca8507b == '\x01') {
            if ((0 < (int)param_2[0x13]) &&
               (*(undefined4 *)(param_2 + 0x13) = 0, *(int *)((longlong)param_2 + 0x9c) < 0)) {
              FUN_147139e90(local_470);
            }
            uVar14 = puVar33[2];
            uVar13 = (longlong)puVar33 + ((longlong)uVar14 >> 0x18) + 0x10;
            if ((uVar14 & 1) == 0) {
              uVar13 = uVar14;
            }
            uVar14 = puVar33[3];
            if ((longlong)(int)uVar14 != 0) {
              lVar39 = 0;
              do {
                uVar17 = (uint)*(byte *)(uVar13 + 3 + lVar39);
                if ((uVar17 < 0x13) && ((0x44080U >> (uVar17 & 0x1f) & 1) != 0)) {
                  bVar4 = *(byte *)(uVar13 + 2 + lVar39);
                  iVar21 = (int)param_2[0x13];
                  *(uint *)(param_2 + 0x13) = iVar21 + 1U;
                  if (*(uint *)((longlong)param_2 + 0x9c) < iVar21 + 1U) {
                    FUN_1447477d8(local_470);
                  }
                  uVar10 = *local_470;
                  *(ushort *)(uVar10 + (longlong)iVar21 * 4) = (ushort)bVar4;
                  *(undefined1 *)(uVar10 + 2 + (longlong)iVar21 * 4) = 1;
                }
                lVar39 = lVar39 + 4;
              } while ((longlong)(int)uVar14 * 4 != lVar39);
            }
            uVar14 = param_2[0x13];
            lVar39 = (longlong)(int)uVar14;
            if (0 < lVar39) {
              if (DAT_14ca8507b == '\x01') {
                pvVar6 = (void *)*local_470;
                puVar7 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
                puVar16 = puVar7 + 5;
                if ((undefined8 *)param_2[1] < puVar16) {
                  FUN_140023dd8(param_2,0x30);
                  puVar7 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
                  puVar16 = puVar7 + 5;
                }
                *param_2 = (ulonglong)puVar16;
                *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
                *(undefined8 **)param_2[6] = puVar7;
                param_2[6] = (ulonglong)(puVar7 + 1);
                sVar3 = lVar39 * 4;
                pvVar29 = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
                pvVar12 = (void *)(lVar39 * 4 + (longlong)pvVar29);
                if ((void *)param_2[1] < pvVar12) {
                  FUN_140023dd8(param_2,(uint)sVar3 | 2);
                  pvVar29 = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
                  pvVar12 = (void *)(sVar3 + (longlong)pvVar29);
                }
                *param_2 = (ulonglong)pvVar12;
                memcpy(pvVar29,pvVar6,sVar3);
                puVar7[1] = 0;
                *puVar7 = &PTR_FUN_14a1fbc38;
                puVar7[2] = lVar11;
                puVar7[3] = pvVar29;
                *(int *)(puVar7 + 4) = (int)uVar14;
              }
              *(undefined4 *)(param_2 + 0x13) = 0;
              if (*(int *)((longlong)param_2 + 0x9c) < 0) {
                FUN_147139e90(local_470);
              }
            }
          }
          local_148 = *(undefined8 *)(local_458 + 0x2e0);
          local_158 = (ulonglong *)0xffffffffffffffff;
          local_150 = 0xffffffff;
          local_140 = 2;
          local_13c = 0x7800000400;
          local_134 = 0;
          local_128 = 0;
          local_110 = *(undefined8 *)(local_458 + 0x340);
          local_120 = 0xffffffffffffffff;
          local_118 = 0xffffffff;
          local_108 = 2;
          local_104 = 0x7800000400;
          local_fc = 0;
          local_f0 = 0;
          local_2c8 = &local_158;
          local_2c0 = 2;
          FUN_144760590(param_2,&local_2c8,0);
          lVar11 = 0x68;
          do {
            if (*(char *)((longlong)&local_158 + lVar11) == '\x01') {
              *(undefined1 *)((longlong)&local_158 + lVar11) = 0;
            }
            lVar11 = lVar11 + -0x38;
            plVar19 = local_2e8;
            param_1 = local_360;
            plVar18 = local_2d8;
            plVar38 = local_2e0;
          } while (lVar11 != -8);
        }
LAB_140a0e117:
        LOCK();
        plVar1 = plVar38 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar38)(plVar38);
          LOCK();
          piVar2 = (int *)((longlong)plVar38 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar38 + 0x10))(plVar38);
          }
        }
      }
LAB_140a0e136:
      plVar18 = plVar18 + 4;
    } while (plVar18 != plVar19);
    puVar33 = (ulonglong *)*local_368;
    if ((longlong)(int)local_368[1] == 0) {
      uVar22 = 0;
    }
    else {
      puVar27 = puVar33 + (longlong)(int)local_368[1] * 4;
      local_3b8 = puVar27;
      do {
        plVar18 = (longlong *)puVar33[3];
        if (plVar18 != (longlong *)0x0) {
          iVar21 = (int)plVar18[1];
          do {
            if (iVar21 == 0) goto LAB_140a0f40f;
            LOCK();
            iVar26 = (int)plVar18[1];
            bVar40 = iVar21 == iVar26;
            if (bVar40) {
              *(int *)(plVar18 + 1) = iVar21 + 1;
              iVar26 = iVar21;
            }
            iVar21 = iVar26;
            UNLOCK();
          } while (!bVar40);
          puVar16 = (undefined8 *)puVar33[2];
          local_3e8 = plVar18;
          if ((puVar16 != (undefined8 *)0x0) && ((longlong)*(int *)(puVar16 + 1) != 0)) {
            puVar27 = (ulonglong *)*puVar16;
            puVar20 = puVar27 + (longlong)*(int *)(puVar16 + 1) * 2;
            local_468 = puVar33;
            local_3e0 = puVar20;
            do {
              uVar14 = *puVar27;
              if ((*(char *)(uVar14 + 0x1a0) == '\x01') && (**(longlong **)(uVar14 + 0x160) != 0)) {
                uVar13 = *puVar33;
                uVar10 = puVar33[1];
                uVar17 = *(uint *)(uVar13 + 300);
                uVar9 = *(undefined8 *)
                         (&DAT_14ca8c1f0 +
                         (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) * 8);
                local_460 = uVar14;
                uVar8 = FUN_14159e54c();
                uVar14 = local_460;
                FUN_1448e935e(uVar9,&local_288,uVar8,uVar17 >> 5 & 3);
                FUN_14159e54c();
                puVar33 = local_280;
                uVar30 = local_288;
                uStack_220 = 0;
                uStack_264 = 0;
                local_288 = *(ulonglong *)(*(longlong *)(uVar14 + 0x160) + 8);
                local_280 = *(ulonglong **)(uVar13 + 0x3b0);
                local_450 = CONCAT44(local_450._4_4_,(uint)uVar10);
                local_278 = (ulonglong)(uint)uVar10;
                puVar20 = *(ulonglong **)(local_378 + 0x68);
                if (*(ulonglong **)(local_378 + 0x68) == (ulonglong *)0x0) {
                  puVar20 = DAT_14cb428f0;
                }
                uStack_270 = SUB84(puVar20,0);
                uStack_26c = (undefined4)((ulonglong)puVar20 >> 0x20);
                uStack_268 = *(undefined4 *)((longlong)local_468 + 0xc);
                local_260 = 0x4000000000;
                local_258 = CONCAT44(*(undefined4 *)(uVar14 + 0x170),*(undefined4 *)(uVar13 + 0x254)
                                    );
                uStack_250 = (ulonglong *)
                             (ulonglong)
                             CONCAT14(*(undefined1 *)(uVar13 + 0x268),
                                      *(undefined4 *)(uVar14 + 0x174));
                local_248 = (uint)*(byte *)(uVar13 + 0x270);
                uStack_244 = *(uint *)(uVar13 + 0x26c);
                uStack_240 = *(uint *)(uVar13 + 0x274);
                uStack_23c = (uint)*(byte *)(uVar13 + 0x278);
                local_238 = CONCAT44(DAT_14c76297c,DAT_14c762980);
                uStack_230 = (ulonglong)CONCAT14(DAT_14c762978 != 0,DAT_14c762984);
                local_228 = (ulonglong)DAT_14c762988;
                local_158 = (ulonglong *)0xffffffffffffffff;
                local_150 = 0xffffffff;
                local_140 = 3;
                local_13c = 0x40000000074;
                local_134 = 0;
                local_128 = 0;
                local_298 = &local_158;
                local_290 = 1;
                local_148 = local_288;
                FUN_144760590(param_2,&local_298,0);
                uVar9 = FUN_14159e66c();
                if (uVar30 == 0) {
                  uVar14 = 0;
                }
                else {
                  uVar10 = puVar33[1];
                  uVar14 = *(ulonglong *)
                            (*(longlong *)(uVar10 + 0x50) + (longlong)*(int *)(uVar30 + 0xd4) * 8);
                  if (uVar14 == 0) {
                    uVar14 = FUN_1400bafc2(uVar10,(longlong)*(int *)(uVar30 + 0xd4),1);
                  }
                }
                uVar8 = FUN_140029432(param_2,uVar14,0);
                param_2[0x37] = uVar14;
                puVar7 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
                puVar16 = puVar7 + 3;
                if ((undefined8 *)param_2[1] < puVar16) {
                  FUN_140023dd8(param_2,0x20);
                  puVar7 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
                  puVar16 = puVar7 + 3;
                }
                *param_2 = (ulonglong)puVar16;
                *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
                *(undefined8 **)param_2[6] = puVar7;
                param_2[6] = (ulonglong)(puVar7 + 1);
                puVar7[1] = 0;
                *puVar7 = &PTR_LAB_14a37d340;
                puVar7[2] = uVar8;
                local_498 = &local_288;
                FUN_14480864a(param_2,uVar14,uVar30,uVar9);
                puVar7 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
                puVar16 = puVar7 + 4;
                if ((undefined8 *)param_2[1] < puVar16) {
                  FUN_140023dd8(param_2,0x28);
                  puVar7 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
                  puVar16 = puVar7 + 4;
                }
                *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
                *param_2 = (ulonglong)puVar16;
                *(undefined8 **)param_2[6] = puVar7;
                param_2[6] = (ulonglong)(puVar7 + 1);
                puVar7[1] = 0;
                *puVar7 = &PTR_LAB_14a1fbc30;
                puVar7[2] = &DAT_100000001;
                *(undefined4 *)(puVar7 + 3) = 1;
                if (uVar30 == 0) {
                  uVar14 = 0;
                }
                else {
                  uVar10 = puVar33[1];
                  uVar14 = *(ulonglong *)
                            (*(longlong *)(uVar10 + 0x50) + (longlong)*(int *)(uVar30 + 0xd4) * 8);
                  if (uVar14 == 0) {
                    uVar14 = FUN_1400bafc2(uVar10,(longlong)*(int *)(uVar30 + 0xd4),1);
                  }
                }
                local_420 = uVar14;
                if (DAT_14ca8507b == '\x01') {
                  if ((0 < (int)param_2[0x13]) &&
                     (*(undefined4 *)(param_2 + 0x13) = 0, *(int *)((longlong)param_2 + 0x9c) < 0))
                  {
                    FUN_147139e90(local_470,0);
                  }
                  uVar14 = *(ulonglong *)(uVar30 + 0x10);
                  uVar10 = uVar30 + 0x10 + ((longlong)uVar14 >> 0x18);
                  if ((uVar14 & 1) == 0) {
                    uVar10 = uVar14;
                  }
                  iVar21 = *(int *)(uVar30 + 0x18);
                  if ((longlong)iVar21 != 0) {
                    lVar11 = 0;
                    do {
                      uVar17 = (uint)*(byte *)(uVar10 + 3 + lVar11);
                      if ((uVar17 < 0x13) && ((0x44080U >> (uVar17 & 0x1f) & 1) != 0)) {
                        bVar4 = *(byte *)(uVar10 + 2 + lVar11);
                        iVar26 = (int)param_2[0x13];
                        *(uint *)(param_2 + 0x13) = iVar26 + 1U;
                        if (*(uint *)((longlong)param_2 + 0x9c) < iVar26 + 1U) {
                          FUN_1447477d8(local_470,iVar26);
                        }
                        uVar14 = *local_470;
                        *(ushort *)(uVar14 + (longlong)iVar26 * 4) = (ushort)bVar4;
                        *(undefined1 *)(uVar14 + 2 + (longlong)iVar26 * 4) = 1;
                      }
                      lVar11 = lVar11 + 4;
                    } while ((longlong)iVar21 * 4 != lVar11);
                  }
                  uVar14 = param_2[0x13];
                  lVar11 = (longlong)(int)uVar14;
                  if (0 < lVar11) {
                    if (DAT_14ca8507b == '\x01') {
                      pvVar6 = (void *)*local_470;
                      puVar7 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
                      puVar16 = puVar7 + 5;
                      if ((undefined8 *)param_2[1] < puVar16) {
                        FUN_140023dd8(param_2,0x30);
                        puVar7 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
                        puVar16 = puVar7 + 5;
                      }
                      *param_2 = (ulonglong)puVar16;
                      *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
                      *(undefined8 **)param_2[6] = puVar7;
                      param_2[6] = (ulonglong)(puVar7 + 1);
                      sVar3 = lVar11 * 4;
                      pvVar29 = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
                      pvVar12 = (void *)((longlong)pvVar29 + lVar11 * 4);
                      if ((void *)param_2[1] < pvVar12) {
                        FUN_140023dd8(param_2,(uint)sVar3 | 2);
                        pvVar29 = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
                        pvVar12 = (void *)((longlong)pvVar29 + sVar3);
                      }
                      *param_2 = (ulonglong)pvVar12;
                      memcpy(pvVar29,pvVar6,sVar3);
                      puVar7[1] = 0;
                      *puVar7 = &PTR_FUN_14a1fbc38;
                      puVar7[2] = local_420;
                      puVar7[3] = pvVar29;
                      *(int *)(puVar7 + 4) = (int)uVar14;
                    }
                    *(undefined4 *)(param_2 + 0x13) = 0;
                    if (*(int *)((longlong)param_2 + 0x9c) < 0) {
                      FUN_147139e90(local_470,0);
                    }
                  }
                }
                local_148 = *(undefined8 *)(*(longlong *)(local_460 + 0x160) + 8);
                local_158 = (ulonglong *)0xffffffffffffffff;
                local_150 = 0xffffffff;
                local_140 = 3;
                local_13c = 0x7400000400;
                local_134 = 0;
                local_128 = 0;
                local_298 = &local_158;
                local_290 = 1;
                FUN_144760590(param_2,&local_298,0);
                puVar20 = local_3e0;
                puVar33 = local_468;
                if (1 < (uint)local_450) {
                  uVar17 = *(uint *)(uVar13 + 300);
                  iVar21 = *(int *)(uVar13 + 0x254);
                  uVar9 = *(undefined8 *)
                           (&DAT_14ca8c1f0 +
                           (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) * 8)
                  ;
                  uVar8 = FUN_14157dd56();
                  uVar14 = local_460;
                  puVar33 = local_468;
                  FUN_1448e935e(uVar9,&local_288,uVar8,(uVar17 & 3) + (uint)(0x20 < iVar21) * 4);
                  FUN_14157dd56();
                  puVar20 = local_280;
                  uVar10 = local_288;
                  local_288 = *(ulonglong *)(*(longlong *)(uVar14 + 0x150) + 0x20);
                  local_280 = *(ulonglong **)(uVar13 + 0x2c0);
                  local_278 = *(ulonglong *)(uVar13 + 800);
                  uStack_270 = (undefined4)*(undefined8 *)(uVar13 + 0x380);
                  uStack_26c = (undefined4)((ulonglong)*(undefined8 *)(uVar13 + 0x380) >> 0x20);
                  uVar9 = *(undefined8 *)(*(longlong *)(uVar14 + 0x160) + 0x10);
                  uStack_268 = (undefined4)uVar9;
                  uStack_264 = (undefined4)((ulonglong)uVar9 >> 0x20);
                  local_260 = *(longlong *)(uVar13 + 0x218);
                  local_258 = (ulonglong)(uint)puVar33[1];
                  uStack_250 = *(ulonglong **)(local_378 + 0x68);
                  if (*(ulonglong **)(local_378 + 0x68) == (ulonglong *)0x0) {
                    uStack_250 = DAT_14cb428f0;
                  }
                  local_248 = *(uint *)((longlong)puVar33 + 0xc);
                  uStack_244 = 0;
                  uStack_240 = 0;
                  uStack_23c = *(uint *)(uVar13 + 0x208);
                  local_238 = *(undefined8 *)(uVar13 + 0x254);
                  uStack_230 = *(ulonglong *)(uVar13 + 0x25c);
                  local_228 = *(ulonglong *)(uVar14 + 0x180);
                  uStack_220 = *(undefined8 *)(uVar14 + 0x188);
                  local_158 = (ulonglong *)0xffffffffffffffff;
                  local_150 = 0xffffffff;
                  local_140 = 3;
                  local_13c = 0x40000000008;
                  local_134 = 0;
                  local_128 = 0;
                  local_298 = &local_158;
                  local_290 = 1;
                  local_148 = local_288;
                  FUN_144760590(param_2,&local_298,0);
                  local_450 = **(undefined8 **)(uVar14 + 0x160);
                  uVar9 = FUN_14157de76();
                  if (uVar10 == 0) {
                    uVar14 = 0;
                  }
                  else {
                    uVar13 = puVar20[1];
                    uVar14 = *(ulonglong *)
                              (*(longlong *)(uVar13 + 0x50) + (longlong)*(int *)(uVar10 + 0xd4) * 8)
                    ;
                    if (uVar14 == 0) {
                      uVar14 = FUN_1400bafc2(uVar13,(longlong)*(int *)(uVar10 + 0xd4),1);
                    }
                  }
                  uVar8 = FUN_140029432(param_2,uVar14,0);
                  param_2[0x37] = uVar14;
                  puVar7 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
                  puVar16 = puVar7 + 3;
                  if ((undefined8 *)param_2[1] < puVar16) {
                    FUN_140023dd8(param_2,0x20);
                    puVar7 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
                    puVar16 = puVar7 + 3;
                  }
                  *param_2 = (ulonglong)puVar16;
                  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
                  *(undefined8 **)param_2[6] = puVar7;
                  param_2[6] = (ulonglong)(puVar7 + 1);
                  puVar7[1] = 0;
                  *puVar7 = &PTR_LAB_14a37d340;
                  puVar7[2] = uVar8;
                  local_498 = &local_288;
                  FUN_14480864a(param_2,uVar14,uVar10,uVar9);
                  puVar7 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
                  puVar16 = puVar7 + 4;
                  if ((undefined8 *)param_2[1] < puVar16) {
                    FUN_140023dd8(param_2,0x28);
                    puVar7 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
                    puVar16 = puVar7 + 4;
                  }
                  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
                  *param_2 = (ulonglong)puVar16;
                  *(undefined8 **)param_2[6] = puVar7;
                  param_2[6] = (ulonglong)(puVar7 + 1);
                  puVar7[1] = 0;
                  *puVar7 = &PTR_LAB_14a1e7fd0;
                  puVar7[2] = local_450;
                  *(undefined4 *)(puVar7 + 3) = 0;
                  if (uVar10 == 0) {
                    lVar11 = 0;
                  }
                  else {
                    uVar14 = puVar20[1];
                    lVar11 = *(longlong *)
                              (*(longlong *)(uVar14 + 0x50) + (longlong)*(int *)(uVar10 + 0xd4) * 8)
                    ;
                    if (lVar11 == 0) {
                      lVar11 = FUN_1400bafc2(uVar14,(longlong)*(int *)(uVar10 + 0xd4),1);
                    }
                  }
                  if (DAT_14ca8507b == '\x01') {
                    if ((0 < (int)param_2[0x13]) &&
                       (*(undefined4 *)(param_2 + 0x13) = 0, *(int *)((longlong)param_2 + 0x9c) < 0)
                       ) {
                      FUN_147139e90(local_470,0);
                    }
                    uVar14 = *(ulonglong *)(uVar10 + 0x10);
                    uVar13 = uVar10 + 0x10 + ((longlong)uVar14 >> 0x18);
                    if ((uVar14 & 1) == 0) {
                      uVar13 = uVar14;
                    }
                    iVar21 = *(int *)(uVar10 + 0x18);
                    if ((longlong)iVar21 != 0) {
                      lVar39 = 0;
                      do {
                        uVar17 = (uint)*(byte *)(uVar13 + 3 + lVar39);
                        if ((uVar17 < 0x13) && ((0x44080U >> (uVar17 & 0x1f) & 1) != 0)) {
                          bVar4 = *(byte *)(uVar13 + 2 + lVar39);
                          iVar26 = (int)param_2[0x13];
                          *(uint *)(param_2 + 0x13) = iVar26 + 1U;
                          if (*(uint *)((longlong)param_2 + 0x9c) < iVar26 + 1U) {
                            FUN_1447477d8(local_470,iVar26);
                          }
                          uVar14 = *local_470;
                          *(ushort *)(uVar14 + (longlong)iVar26 * 4) = (ushort)bVar4;
                          *(undefined1 *)(uVar14 + 2 + (longlong)iVar26 * 4) = 1;
                        }
                        lVar39 = lVar39 + 4;
                      } while ((longlong)iVar21 * 4 != lVar39);
                    }
                    uVar14 = param_2[0x13];
                    lVar39 = (longlong)(int)uVar14;
                    if (0 < lVar39) {
                      if (DAT_14ca8507b == '\x01') {
                        pvVar6 = (void *)*local_470;
                        puVar7 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
                        puVar16 = puVar7 + 5;
                        if ((undefined8 *)param_2[1] < puVar16) {
                          FUN_140023dd8(param_2,0x30);
                          puVar7 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
                          puVar16 = puVar7 + 5;
                        }
                        *param_2 = (ulonglong)puVar16;
                        *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
                        *(undefined8 **)param_2[6] = puVar7;
                        param_2[6] = (ulonglong)(puVar7 + 1);
                        sVar3 = lVar39 * 4;
                        pvVar29 = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
                        pvVar12 = (void *)((longlong)pvVar29 + lVar39 * 4);
                        if ((void *)param_2[1] < pvVar12) {
                          FUN_140023dd8(param_2,(uint)sVar3 | 2);
                          pvVar29 = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
                          pvVar12 = (void *)((longlong)pvVar29 + sVar3);
                        }
                        *param_2 = (ulonglong)pvVar12;
                        memcpy(pvVar29,pvVar6,sVar3);
                        puVar7[1] = 0;
                        *puVar7 = &PTR_FUN_14a1fbc38;
                        puVar7[2] = lVar11;
                        puVar7[3] = pvVar29;
                        *(int *)(puVar7 + 4) = (int)uVar14;
                      }
                      *(undefined4 *)(param_2 + 0x13) = 0;
                      if (*(int *)((longlong)param_2 + 0x9c) < 0) {
                        FUN_147139e90(local_470,0);
                      }
                    }
                  }
                  local_148 = *(undefined8 *)(*(longlong *)(local_460 + 0x150) + 0x20);
                  local_158 = (ulonglong *)0xffffffffffffffff;
                  local_150 = 0xffffffff;
                  local_140 = 3;
                  local_13c = 0x800000400;
                  local_134 = 0;
                  local_128 = 0;
                  local_298 = &local_158;
                  local_290 = 1;
                  FUN_144760590(param_2,&local_298,0);
                  puVar20 = local_3e0;
                  puVar33 = local_468;
                }
              }
              puVar27 = puVar27 + 2;
            } while (puVar27 != puVar20);
          }
          puVar27 = local_3b8;
          plVar19 = local_3e8;
          LOCK();
          plVar18 = local_3e8 + 1;
          *(int *)plVar18 = (int)*plVar18 + -1;
          UNLOCK();
          if ((int)*plVar18 == 0) {
            (**(code **)*local_3e8)(local_3e8);
            LOCK();
            piVar2 = (int *)((longlong)plVar19 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar19 + 0x10))(plVar19);
            }
          }
        }
LAB_140a0f40f:
        puVar33 = puVar33 + 4;
      } while (puVar33 != puVar27);
      uVar22 = (undefined4)local_368[1];
      puVar33 = (ulonglong *)*local_368;
    }
    plVar18 = local_368;
    FUN_141493904(puVar33,uVar22);
    *(undefined4 *)(plVar18 + 1) = 0;
    if (*(int *)((longlong)plVar18 + 0xc) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_70 ^ (ulonglong)auStack_4b8);
    }
  }
  if ((local_70 ^ (ulonglong)auStack_4b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140a0f4bc FUN_140a0f4bc body=101 status=ok
// SIG undefined FUN_140a0f4bc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140a0f4bc(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caa0f98) {
    FUN_144b3d300(&DAT_14caa0f98);
    if (DAT_14caa0f98 == -1) {
      DAT_14caa0f88 = 0;
      _DAT_14caa0f90 = 0;
      atexit((_func_5014 *)&LAB_14323e133);
      _Init_thread_footer(&DAT_14caa0f98);
      return;
    }
  }
  return;
}



// FUNCTION 140a0f522 FUN_140a0f522 body=20 status=ok
// SIG undefined FUN_140a0f522(void)

bool FUN_140a0f522(void)

{
  longlong lVar1;
  
  lVar1 = FUN_140a0f536();
  return lVar1 != 0;
}



// FUNCTION 140a0f536 FUN_140a0f536 body=552 status=ok
// SIG undefined FUN_140a0f536(void)

undefined8 FUN_140a0f536(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
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
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar3 = *(longlong *)(param_1 + 0xa8);
  if (lVar3 != 0) {
    if (DAT_14cae8b20 == 0) {
      local_50 = &local_28;
      local_28 = (code *)&LAB_14355090c;
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
    lVar2 = DAT_14cae8b20;
    if (DAT_14c951858 == 0) {
      local_50 = &local_28;
      local_28 = FUN_1449e2820;
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
    lVar3 = *(longlong *)(lVar3 + 0x20);
    if (lVar3 != 0) {
      iVar1 = *(int *)(lVar2 + 0x38);
      do {
        if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x38) < iVar1) ||
           (lVar5 = lVar3,
           *(longlong *)(*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)iVar1 * 8) !=
           lVar2 + 0x30)) {
          lVar5 = 0;
        }
      } while ((lVar5 == 0) && (lVar3 = *(longlong *)(lVar3 + 0x20), lVar3 != 0));
      if ((lVar5 != 0) &&
         ((*(longlong *)(lVar5 + 0xc0) != 0 && (*(longlong *)(param_1 + 0xa8) != 0)))) {
        lVar3 = FUN_14066ef58();
        if (lVar3 != 0) {
          local_38 = *(undefined4 *)(param_1 + 0x780);
          uStack_34 = *(undefined4 *)(param_1 + 0x784);
          uStack_30 = *(undefined4 *)(param_1 + 0x788);
          uStack_2c = *(undefined4 *)(param_1 + 0x78c);
          uVar4 = FUN_147ba5d64(lVar3);
          goto LAB_140a0f5e5;
        }
      }
    }
  }
  uVar4 = 0;
LAB_140a0f5e5:
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a0f760 FUN_140a0f760 body=79 status=ok
// SIG undefined FUN_140a0f760(void)

void FUN_140a0f760(undefined8 param_1)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140a0f7b0();
  local_28 = 0x4897a06a;
  uStack_24 = 0xa30b4775;
  uStack_20 = 0xb8d91478;
  uStack_1c = 0x70e6004a;
  FUN_1448a256a(param_1);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a0f7b0 FUN_140a0f7b0 body=160 status=ok
// SIG undefined FUN_140a0f7b0(void)

void FUN_140a0f7b0(longlong *param_1)

{
  char cVar1;
  int iVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined1 local_11;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(byte *)(param_1[2] + 0xd5) & 4) != 0) {
    local_38 = 0;
    uStack_30 = 0;
    FUN_1400033ba(param_1,0,0,0);
  }
  cVar1 = FUN_1400439fc(param_1,0,&local_11);
  if (cVar1 != '\0') {
    (**(code **)(*param_1 + 0x268))(param_1);
  }
  local_28 = 0x7089a7bb;
  uStack_24 = 0xb67a4b08;
  uStack_20 = 0x86de0580;
  uStack_1c = 0x105cd824;
  iVar2 = FUN_1448a256a(param_1);
  if (iVar2 < 0) {
    FUN_1470e40f0(param_1);
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a0f852 FUN_140a0f852 body=247 status=ok
// SIG undefined FUN_140a0f852(void)

void FUN_140a0f852(longlong param_1)

{
  byte bVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar3 = DAT_14caca268;
  if (DAT_14caca270 == 0) {
    plVar3 = (longlong *)0x0;
  }
  (**(code **)(*plVar3 + 0x58))(plVar3,param_1);
  FUN_14020684a(param_1);
  if (*(char *)(param_1 + 0x178) == '\x03') {
    lVar2 = FUN_1447210f0(param_1);
    bVar1 = *(byte *)(lVar2 + 0x152);
    if ((bVar1 == 1) || ((bVar1 < 7 && ((0x68U >> (bVar1 & 0x1f) & 1) != 0)))) {
      if (((*(int *)(param_1 + 0x3e4) == 0 && *(int *)(param_1 + 0x3e0) == 0) &&
          *(int *)(param_1 + 1000) == 0) && *(int *)(param_1 + 0x3ec) == 0) {
        FUN_1412e3d1e(&local_30);
        *(undefined8 *)(param_1 + 0x3e0) = local_30;
        *(undefined8 *)(param_1 + 1000) = uStack_28;
      }
      *(undefined4 *)(param_1 + 0x3c8) = *(undefined4 *)(param_1 + 0x3e0);
      *(undefined4 *)(param_1 + 0x3cc) = *(undefined4 *)(param_1 + 0x3e4);
      *(undefined4 *)(param_1 + 0x3d0) = *(undefined4 *)(param_1 + 1000);
      *(undefined4 *)(param_1 + 0x3d4) = *(undefined4 *)(param_1 + 0x3ec);
    }
  }
  if (((*(int *)(param_1 + 0x3e4) != 0 || *(int *)(param_1 + 0x3e0) != 0) ||
      *(int *)(param_1 + 1000) != 0) || *(int *)(param_1 + 0x3ec) != 0) {
    FUN_140a0f94a(param_1 + 0x3f0);
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140a0f94a FUN_140a0f94a body=3174 status=ok
// SIG undefined FUN_140a0f94a(void)

void FUN_140a0f94a(longlong param_1)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
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
  undefined4 uVar14;
  undefined4 uVar15;
  char cVar16;
  uint uVar17;
  longlong lVar18;
  longlong *plVar19;
  undefined8 uVar20;
  code *pcVar21;
  longlong lVar22;
  longlong lVar23;
  longlong *plVar24;
  byte bVar25;
  uint uVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  uint uVar31;
  undefined8 *puVar32;
  int iVar33;
  ulonglong uVar34;
  longlong lVar35;
  longlong *plVar36;
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
  longlong *local_c8;
  longlong *local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  longlong lStack_a0;
  code *local_98;
  undefined8 uStack_90;
  longlong local_88 [2];
  code *local_78;
  ulonglong local_70;
  code *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  lVar18 = (**(code **)(**(longlong **)(param_1 + 8) + 0x40))();
  if (lVar18 == 0) goto LAB_140a0ff79;
  plVar36 = *(longlong **)(param_1 + 8);
  local_98 = (code *)0x0;
  uStack_90 = 0;
  local_a8 = 0;
  lStack_a0 = 0;
  local_b8 = 0;
  uStack_b0 = (code *)0x0;
  local_58 = 0;
  uStack_50 = 0;
  plVar19 = (longlong *)(**(code **)(*plVar36 + 8))(plVar36);
  plVar24 = plVar19;
  local_78 = (code *)&local_58;
  if (plVar19 == (longlong *)0x0) goto LAB_140a0fa00;
  uVar20 = FUN_140a106f6();
  pcVar21 = (code *)FUN_144718840(plVar19,uVar20);
  if (pcVar21 == (code *)0x0) goto LAB_140a0fa00;
  local_68 = pcVar21;
  cVar16 = FUN_140a105ec(&local_78);
  while (cVar16 != '\0') {
LAB_140a0fa00:
    if (DAT_14cae8b20 == 0) {
      local_e0 = &local_68;
      local_68 = (code *)&LAB_14355090c;
      local_d0 = FUN_14081d0ea;
      local_d8 = FUN_14081d0ea;
      local_e8 = &LAB_147b8e16d;
      local_f0 = (code *)&LAB_140810a38;
      local_f8 = L"Engine";
      local_100 = 0x800000000;
      local_108 = 0x10000000;
      local_110 = 8;
      local_118 = 0x3f0;
      FUN_14081cfa3(L"/Script/Engine",L"Level",&DAT_14cae8b20,&DAT_147b8e16c);
    }
    lVar22 = DAT_14cae8b20;
    if (DAT_14c951858 == 0) {
      local_e0 = &local_68;
      local_68 = FUN_1449e2820;
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
    lVar23 = plVar24[4];
    if (lVar23 == 0) {
      lVar35 = 0;
    }
    else {
      iVar28 = *(int *)(lVar22 + 0x38);
      do {
        if ((*(int *)(*(longlong *)(lVar23 + 0x10) + 0x38) < iVar28) ||
           (lVar35 = lVar23,
           *(longlong *)(*(longlong *)(*(longlong *)(lVar23 + 0x10) + 0x30) + (longlong)iVar28 * 8)
           != lVar22 + 0x30)) {
          lVar35 = 0;
        }
      } while ((lVar35 == 0) && (lVar23 = *(longlong *)(lVar23 + 0x20), lVar23 != 0));
    }
    pcVar21 = (code *)FUN_14477ba68(lVar18,lVar35);
    if (pcVar21 == (code *)0x0) break;
    plVar24 = (longlong *)(**(code **)(*(longlong *)pcVar21 + 8))(pcVar21);
    if (plVar24 == (longlong *)0x0) {
LAB_140a105a9:
      plVar24 = (longlong *)0x0;
    }
    else {
      if (DAT_14cac9ca8 == 0) {
        local_e0 = &local_68;
        local_68 = FUN_141030f22;
        local_d0 = FUN_14081d0ea;
        local_d8 = FUN_14081d0ea;
        local_e8 = &LAB_1478c0a72;
        local_f0 = (code *)&LAB_1417b2375;
        local_f8 = L"Engine";
        local_100 = 0x1000000000;
        local_108 = 0x10000004;
        local_110 = 8;
        local_118 = 0x390;
        FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
      }
      if ((*(int *)(plVar24[2] + 0x38) < *(int *)(DAT_14cac9ca8 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(plVar24[2] + 0x30) + (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) !=
          DAT_14cac9ca8 + 0x30)) goto LAB_140a105a9;
    }
    local_68 = pcVar21;
    cVar16 = FUN_140a105ec(&local_78);
  }
  cVar16 = (**(code **)(*plVar19 + 0x1f8))(plVar19);
  uVar20 = 0;
  if (cVar16 != '\0') {
    lStack_a0 = plVar19[3];
    FUN_1400021e4(&lStack_a0,&local_68);
    iVar28 = iStack_60 + -1;
    if (iStack_60 == 0) {
      iVar28 = 0;
    }
    pcVar21 = local_68;
    if (iStack_60 == 0) {
      pcVar21 = (code *)&DAT_149dfb77a;
    }
    uVar20 = FUN_1447addd0(pcVar21,iVar28 * 2);
    if (DAT_14cb10130 == 0) {
      local_e0 = &local_78;
      local_78 = FUN_140754f84;
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
    lVar22 = DAT_14cb10130;
    if (DAT_14c951858 == 0) {
      local_e0 = &local_78;
      local_78 = FUN_1449e2820;
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
    lVar23 = plVar19[4];
    if (lVar23 != 0) {
      iVar28 = *(int *)(lVar22 + 0x38);
      do {
        if ((*(int *)(*(longlong *)(lVar23 + 0x10) + 0x38) < iVar28) ||
           (lVar35 = lVar23,
           *(longlong *)(*(longlong *)(*(longlong *)(lVar23 + 0x10) + 0x30) + (longlong)iVar28 * 8)
           != lVar22 + 0x30)) {
          lVar35 = 0;
        }
      } while ((lVar35 == 0) && (lVar23 = *(longlong *)(lVar23 + 0x20), lVar23 != 0));
      if (lVar35 != 0) {
        lVar22 = FUN_1447210f0(plVar19);
        bVar25 = *(byte *)(lVar22 + 0x152);
        if ((bVar25 == 1) || ((bVar25 < 7 && ((0x68U >> (bVar25 & 0x1f) & 1) != 0)))) {
LAB_140a0fb4e:
          lVar23 = lVar35;
          lVar22 = lVar23;
          if (*(longlong *)(lVar23 + 0x20) != 0) goto code_r0x000140a0fb5d;
          goto LAB_140a0fb6b;
        }
      }
    }
    goto LAB_140a0fc2e;
  }
  goto LAB_140a0fc40;
code_r0x000140a0fb5d:
  lVar35 = *(longlong *)(lVar23 + 0x20);
  if ((*(uint *)(lVar23 + 8) >> 0x1c & 1) == 0) goto LAB_140a0fb4e;
  lVar22 = FUN_142840154(lVar23);
LAB_140a0fb6b:
  if (lVar22 == 0) {
    lVar35 = *(longlong *)(lVar23 + 0x20);
    goto LAB_140a0fb4e;
  }
  FUN_140a10636(local_88);
  FUN_14094a6a4(&local_78,local_88,0);
  if (local_98 != (code *)0x0) {
    FUN_1400020a8();
  }
  local_98 = local_78;
  local_78 = (code *)0x0;
  iVar28 = (int)local_70;
  uStack_90 = local_70;
  local_70 = 0;
  if (local_88[0] != 0) {
    FUN_1400020a8();
    iVar28 = (int)uStack_90;
  }
  iVar29 = iVar28 + -1;
  if (iVar28 == 0) {
    iVar29 = 0;
  }
  pcVar21 = (code *)&DAT_149dfb77a;
  if (iVar28 != 0) {
    pcVar21 = local_98;
  }
  uVar20 = FUN_144859ac6(pcVar21,iVar29 * 2,uVar20);
LAB_140a0fc2e:
  if (local_68 != (code *)0x0) {
    FUN_1400020a8();
  }
LAB_140a0fc40:
  uStack_b0 = (code *)0x0;
  local_a8 = 0;
  lVar22 = (longlong)(int)uStack_50;
  if (0 < lVar22) {
    uVar34 = lVar22 + 1;
    lVar22 = lVar22 << 4;
    do {
      lVar22 = lVar22 + -0x10;
      FUN_140a107dc(&local_68,&uStack_b0,local_58 + lVar22);
      uStack_b0 = local_68;
      local_a8 = CONCAT44(uStack_5c,iStack_60);
      uVar34 = uVar34 - 1;
    } while (1 < uVar34);
  }
  local_b8 = FUN_144859ac6(&uStack_b0,0x10,uVar20);
  local_c0 = plVar36;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  plVar36 = (longlong *)(lVar18 + 0x178);
  uVar31 = (int)((ulonglong)local_b8 >> 0x20) * 0x17 + (int)local_b8;
  iVar28 = FUN_1448a542e(plVar36,uVar31,&local_b8);
  if (iVar28 == -1) {
LAB_140a0fd04:
    local_c8 = plVar36;
    if (*(int *)(lVar18 + 0x1ac) == 0) {
      iVar28 = *(int *)(lVar18 + 0x180);
      *(int *)(lVar18 + 0x180) = iVar28 + 1;
      if (*(int *)(lVar18 + 0x184) == iVar28) {
        FUN_1406cd6a8(plVar36,iVar28);
      }
      iVar29 = *(int *)(lVar18 + 0x1a0);
      if (iVar29 == 0) {
        iVar30 = -1;
      }
      else {
        iVar30 = iVar29 + 0x1e;
        if (-1 < iVar29 + -1) {
          iVar30 = iVar29 + -1;
        }
        iVar30 = iVar30 >> 5;
      }
      lVar22 = lVar18 + 0x188;
      iVar27 = iVar29 + 1;
      iVar33 = iVar29 + 0x1f;
      if (-1 < iVar29) {
        iVar33 = iVar29;
      }
      if (iVar33 >> 5 == iVar30) {
        *(int *)(lVar18 + 0x1a0) = iVar27;
      }
      else {
        if (*(int *)(lVar18 + 0x1a4) <= iVar29) {
          if (iVar29 + 0x20U < 0xa0) {
            iVar27 = 0x80;
            iVar30 = iVar29;
          }
          else {
            uVar17 = iVar29 + 0x20U >> 5;
            if (*(int *)(lVar18 + 0x1a4) + 0x1fU < 0xa0) {
              uVar26 = 4;
              if (4 < uVar17) {
                uVar26 = uVar17;
              }
            }
            else {
              uVar26 = (uVar17 * 3 >> 3) + uVar17 + 0x10;
            }
            uVar34 = FUN_144a3809e(uVar26 << 2,0);
            iVar30 = (int)(uVar34 >> 2);
            iVar27 = -0x20;
            if ((int)uVar17 <= iVar30) {
              iVar27 = iVar30 << 5;
            }
            iVar30 = *(int *)(lVar18 + 0x1a0);
          }
          *(int *)(lVar18 + 0x1a4) = iVar27;
          FUN_1446efbd8(lVar22,iVar30);
          iVar27 = *(int *)(lVar18 + 0x1a0) + 1;
        }
        iVar30 = iVar27 + 0x1f;
        if (-1 < iVar27) {
          iVar30 = iVar27;
        }
        *(int *)(lVar18 + 0x1a0) = iVar27;
        if (iVar27 % 0x20 != 0) {
          lVar23 = *(longlong *)(lVar18 + 0x198);
          if (*(longlong *)(lVar18 + 0x198) == 0) {
            lVar23 = lVar22;
          }
          bVar25 = -(char)(iVar27 % 0x20);
          *(uint *)(lVar23 + (longlong)(iVar30 >> 5) * 4) =
               (uint)(*(int *)(lVar23 + (longlong)(iVar30 >> 5) * 4) << (bVar25 & 0x1f)) >>
               (bVar25 & 0x1f);
        }
      }
      lVar23 = (longlong)iVar28;
      if (*(longlong *)(lVar18 + 0x198) != 0) {
        lVar22 = *(longlong *)(lVar18 + 0x198);
      }
      bVar25 = (byte)iVar29 & 0x1f;
      puVar1 = (uint *)(lVar22 + (longlong)(iVar33 >> 5) * 4);
      *puVar1 = *puVar1 & (-2 << bVar25 | 0xfffffffeU >> 0x20 - bVar25);
    }
    else {
      iVar28 = *(int *)(lVar18 + 0x1a8);
      lVar23 = (longlong)iVar28;
      iVar29 = *(int *)(*(longlong *)(lVar18 + 0x178) + 4 + lVar23 * 0x40);
      *(int *)(lVar18 + 0x1a8) = iVar29;
      iVar30 = *(int *)(lVar18 + 0x1ac) + -1;
      *(int *)(lVar18 + 0x1ac) = iVar30;
      if (iVar30 != 0) {
        *(undefined4 *)(*(longlong *)(lVar18 + 0x178) + (longlong)iVar29 * 0x40) = 0xffffffff;
      }
    }
    pcVar21 = local_98;
    lVar22 = lVar18 + 0x188;
    if (*(longlong *)(lVar18 + 0x198) != 0) {
      lVar22 = *(longlong *)(lVar18 + 0x198);
    }
    iVar29 = iVar28 + 0x1f;
    if (-1 < iVar28) {
      iVar29 = iVar28;
    }
    puVar1 = (uint *)(lVar22 + (longlong)(iVar29 >> 5) * 4);
    *puVar1 = *puVar1 | 1 << ((byte)iVar28 & 0x1f);
    lVar22 = *(longlong *)(lVar18 + 0x178);
    lVar23 = lVar23 * 0x40;
    puVar2 = (undefined4 *)(lVar22 + lVar23);
    *(undefined8 *)(lVar22 + lVar23) = local_b8;
    puVar3 = (undefined4 *)(lVar22 + 8 + lVar23);
    *puVar3 = (undefined4)uStack_b0;
    puVar3[1] = uStack_b0._4_4_;
    puVar3[2] = (undefined4)local_a8;
    puVar3[3] = local_a8._4_4_;
    *(longlong *)(lVar22 + 0x18 + lVar23) = lStack_a0;
    *(undefined8 *)(lVar22 + 0x20 + lVar23) = 0;
    lVar35 = (longlong)(int)uStack_90;
    *(int *)(lVar22 + 0x28 + lVar23) = (int)uStack_90;
    if (lVar35 == 0) {
      puVar2[0xb] = 0;
    }
    else {
      puVar32 = (undefined8 *)(lVar22 + lVar23 + 0x20);
      FUN_1446dd670(puVar32,uStack_90 & 0xffffffff,0);
      memcpy((void *)*puVar32,pcVar21,lVar35 * 2);
    }
    plVar36 = local_c8;
    *(undefined8 *)(puVar2 + 0xc) = 0;
    puVar2[0xe] = 0xffffffff;
    iVar29 = 1;
    if (*(int *)(lVar18 + 0x180) - *(int *)(lVar18 + 0x1ac) == 1) {
      uVar17 = 1;
LAB_140a0fe7a:
      if (((int)uVar17 < 1) || (iVar29 <= *(int *)(lVar18 + 0x1c0))) {
        uVar31 = *(int *)(lVar18 + 0x1c0) - 1U & uVar31;
        puVar2[0xf] = uVar31;
        lVar22 = *(longlong *)(lVar18 + 0x1b8);
        if (*(longlong *)(lVar18 + 0x1b8) == 0) {
          lVar22 = lVar18 + 0x1b0;
        }
        puVar2[0xe] = *(undefined4 *)
                       (lVar22 + ((longlong)*(int *)(lVar18 + 0x1c0) - 1U & (longlong)(int)uVar31) *
                                 4);
        lVar22 = lVar18 + 0x1b0;
        if (*(longlong *)(lVar18 + 0x1b8) != 0) {
          lVar22 = *(longlong *)(lVar18 + 0x1b8);
        }
        *(int *)(lVar22 + ((longlong)*(int *)(lVar18 + 0x1c0) - 1U & (longlong)(int)uVar31) * 4) =
             iVar28;
      }
      else {
        *(int *)(lVar18 + 0x1c0) = iVar29;
        FUN_140a1152e(plVar36);
      }
    }
    else {
      iVar30 = FUN_1448a542e(local_c8,uVar31,puVar2);
      if (iVar30 == -1) {
        uVar17 = *(int *)(lVar18 + 0x180) - *(int *)(lVar18 + 0x1ac);
        if (3 < uVar17) {
          uVar34 = (ulonglong)(uVar17 & 0xfffffffe) + 0xf;
          lVar22 = 0x3f;
          if (uVar34 != 0) {
            for (; uVar34 >> lVar22 == 0; lVar22 = lVar22 + -1) {
            }
          }
          iVar29 = 1 << ((byte)lVar22 & 0x1f);
        }
        goto LAB_140a0fe7a;
      }
      puVar3 = (undefined4 *)(*plVar36 + (longlong)iVar30 * 0x40);
      if (*(longlong *)(*plVar36 + 0x20 + (longlong)iVar30 * 0x40) != 0) {
        FUN_1400020a8();
      }
      plVar36 = local_c8;
      uVar4 = *puVar2;
      uVar5 = puVar2[1];
      uVar6 = puVar2[2];
      uVar7 = puVar2[3];
      uVar8 = puVar2[4];
      uVar9 = puVar2[5];
      uVar10 = puVar2[6];
      uVar11 = puVar2[7];
      uVar12 = puVar2[8];
      uVar13 = puVar2[9];
      uVar14 = puVar2[10];
      uVar15 = puVar2[0xb];
      *(undefined8 *)(puVar3 + 0xc) = *(undefined8 *)(puVar2 + 0xc);
      puVar3[8] = uVar12;
      puVar3[9] = uVar13;
      puVar3[10] = uVar14;
      puVar3[0xb] = uVar15;
      puVar3[4] = uVar8;
      puVar3[5] = uVar9;
      puVar3[6] = uVar10;
      puVar3[7] = uVar11;
      *puVar3 = uVar4;
      puVar3[1] = uVar5;
      puVar3[2] = uVar6;
      puVar3[3] = uVar7;
      FUN_140681644(local_c8,iVar28);
    }
    lVar18 = *plVar36 + (longlong)iVar28 * 0x40;
  }
  else {
    if (*plVar36 + (longlong)iVar28 * 0x40 == 0) goto LAB_140a0fd04;
    lVar18 = (longlong)iVar28 * 0x40 + *plVar36;
  }
  *(longlong **)(lVar18 + 0x30) = local_c0;
  *(undefined8 *)(param_1 + 0x10) = local_b8;
  *(undefined4 *)(param_1 + 0x18) = (undefined4)uStack_b0;
  *(undefined4 *)(param_1 + 0x1c) = uStack_b0._4_4_;
  *(undefined4 *)(param_1 + 0x20) = (undefined4)local_a8;
  *(undefined4 *)(param_1 + 0x24) = local_a8._4_4_;
  *(longlong *)(param_1 + 0x28) = lStack_a0;
  if ((undefined8 *)(param_1 + 0x10) == &local_b8) {
    if (local_98 != (code *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(param_1 + 0x30) != 0) {
      FUN_1400020a8();
    }
    *(code **)(param_1 + 0x30) = local_98;
    local_98 = (code *)0x0;
    *(int *)(param_1 + 0x38) = (int)uStack_90;
    *(undefined4 *)(param_1 + 0x3c) = uStack_90._4_4_;
  }
  (**(code **)(**(longlong **)(param_1 + 8) + 0x50))();
LAB_140a0ff79:
  if ((local_48 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a105b2 FUN_140a105b2 body=57 status=ok
// SIG undefined FUN_140a105b2(void)

void FUN_140a105b2(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  
  cVar1 = (**(code **)(*param_1 + 0x30))();
  if (cVar1 != '\0') {
    lVar2 = (**(code **)(*param_1 + 0x40))(param_1);
    if (lVar2 != 0) {
      FUN_140a10a18(lVar2,param_1,0);
      return;
    }
  }
  return;
}



// FUNCTION 140a105ec FUN_140a105ec body=74 status=ok
// SIG undefined FUN_140a105ec(void)

undefined8 FUN_140a105ec(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  param_1 = (longlong *)*param_1;
  puVar5 = (undefined8 *)(**(code **)(*(longlong *)*param_2 + 0x20))((longlong *)*param_2);
  iVar2 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
    FUN_140c60952(param_1,iVar2);
  }
  lVar3 = *param_1;
  uVar4 = puVar5[1];
  puVar1 = (undefined8 *)(lVar3 + (longlong)iVar2 * 0x10);
  *puVar1 = *puVar5;
  puVar1[1] = uVar4;
  return CONCAT71((int7)((ulonglong)lVar3 >> 8),1);
}



// FUNCTION 140a10636 FUN_140a10636 body=190 status=ok
// SIG undefined FUN_140a10636(void)

undefined8 FUN_140a10636(undefined8 param_1,longlong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined2 *puVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  undefined1 auStack_58 [40];
  undefined2 *local_30;
  int local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = *(undefined8 *)(param_2 + 0x18);
  FUN_1400021e4();
  uVar5 = (longlong)local_28 * 2;
  do {
    if (uVar5 == 0) {
      uVar4 = 0;
      goto LAB_140a10690;
    }
    uVar1 = uVar5 - 2;
    lVar2 = uVar5 - 2;
    uVar5 = uVar1;
  } while (*(short *)((longlong)local_30 + lVar2) != 0x2f);
  uVar4 = (int)(uVar1 >> 1) + 1;
LAB_140a10690:
  uVar6 = local_28 - 1;
  puVar3 = local_30;
  if (local_28 == 0) {
    puVar3 = &DAT_149dfb77a;
    uVar6 = 0;
  }
  if ((int)uVar6 <= (int)uVar4) {
    uVar4 = uVar6;
  }
  uVar5 = (ulonglong)uVar4;
  if ((int)uVar4 < 1) {
    uVar5 = 0;
  }
  FUN_14006620a(param_1,puVar3 + uVar5,uVar6 - (int)uVar5);
  if (local_30 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 140a106f6 FUN_140a106f6 body=228 status=ok
// SIG undefined FUN_140a106f6(void)

longlong FUN_140a106f6(void)

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
  if (DAT_14cae8e60 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_147b97977;
    local_40 = FUN_1463e8287;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/Engine",L"LevelInstanceInterface",&DAT_14cae8e60,FUN_1463e8260);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cae8e60;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a107dc FUN_140a107dc body=571 status=ok
// SIG undefined FUN_140a107dc(void)

void FUN_140a107dc(uint *param_1,int *param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  
  uVar2 = param_3[3];
  uVar1 = uVar2 >> 0xd ^ param_2[3] - uVar2;
  uVar9 = uVar1 << 8 ^ (-0x61c88647 - uVar2) - uVar1;
  uVar2 = uVar9 >> 0xd ^ (uVar2 - uVar1) - uVar9;
  uVar7 = uVar2 >> 0xc ^ (uVar1 - uVar9) - uVar2;
  uVar1 = uVar7 << 0x10 ^ (uVar9 - uVar2) - uVar7;
  uVar10 = uVar1 >> 5 ^ (uVar2 - uVar7) - uVar1;
  uVar3 = uVar10 >> 3 ^ (uVar7 - uVar1) - uVar10;
  uVar7 = uVar3 << 10 ^ (uVar1 - uVar10) - uVar3;
  uVar2 = param_3[2];
  uVar1 = uVar2 >> 0xd ^ param_2[2] - uVar2;
  uVar11 = uVar1 << 8 ^ (-0x61c88647 - uVar2) - uVar1;
  uVar9 = uVar11 >> 0xd ^ (uVar2 - uVar1) - uVar11;
  uVar1 = uVar9 >> 0xc ^ (uVar1 - uVar11) - uVar9;
  uVar2 = uVar1 << 0x10 ^ (uVar11 - uVar9) - uVar1;
  uVar12 = uVar2 >> 5 ^ (uVar9 - uVar1) - uVar2;
  uVar4 = uVar12 >> 3 ^ (uVar1 - uVar2) - uVar12;
  uVar8 = uVar4 << 10 ^ (uVar2 - uVar12) - uVar4;
  uVar2 = *param_3;
  uVar1 = param_3[1];
  uVar11 = uVar1 >> 0xd ^ param_2[1] - uVar1;
  uVar9 = uVar11 << 8 ^ (-0x61c88647 - uVar1) - uVar11;
  uVar1 = uVar9 >> 0xd ^ (uVar1 - uVar11) - uVar9;
  uVar11 = uVar1 >> 0xc ^ (uVar11 - uVar9) - uVar1;
  uVar5 = uVar11 << 0x10 ^ (uVar9 - uVar1) - uVar11;
  uVar14 = uVar5 >> 5 ^ (uVar1 - uVar11) - uVar5;
  uVar9 = uVar14 >> 3 ^ (uVar11 - uVar5) - uVar14;
  uVar1 = uVar9 << 10 ^ (uVar5 - uVar14) - uVar9;
  uVar11 = uVar2 >> 0xd ^ *param_2 - uVar2;
  uVar5 = uVar11 << 8 ^ (-0x61c88647 - uVar2) - uVar11;
  uVar6 = uVar5 >> 0xd ^ (uVar2 - uVar11) - uVar5;
  uVar13 = uVar6 >> 0xc ^ (uVar11 - uVar5) - uVar6;
  uVar2 = uVar13 << 0x10 ^ (uVar5 - uVar6) - uVar13;
  uVar11 = uVar2 >> 5 ^ (uVar6 - uVar13) - uVar2;
  uVar5 = uVar11 >> 3 ^ (uVar13 - uVar2) - uVar11;
  uVar2 = uVar5 << 10 ^ (uVar2 - uVar11) - uVar5;
  *param_1 = uVar2 >> 0xf ^ uVar11 - (uVar5 + uVar2);
  param_1[1] = uVar1 >> 0xf ^ uVar14 - (uVar9 + uVar1);
  param_1[2] = uVar8 >> 0xf ^ uVar12 - (uVar4 + uVar8);
  param_1[3] = uVar7 >> 0xf ^ uVar10 - (uVar3 + uVar7);
  return;
}



// FUNCTION 140a10a18 FUN_140a10a18 body=392 status=ok
// SIG undefined FUN_140a10a18(void)

void FUN_140a10a18(longlong param_1,longlong *param_2,byte param_3)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  int iVar7;
  byte *pbVar8;
  undefined1 auStack_78 [32];
  longlong *local_58;
  byte local_49;
  longlong **local_48;
  byte *local_40;
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = param_2;
  local_49 = param_3;
  lVar4 = (**(code **)(*param_2 + 0x28))(param_2);
  if (*(longlong *)(lVar4 + 8) == 0) goto LAB_140a10adb;
  uVar5 = (**(code **)(*param_2 + 0x10))(param_2);
  FUN_140a10d6e(param_1 + 0x88,uVar5);
  cVar1 = FUN_140a10bfe(param_1,param_2);
  if (cVar1 != '\0') goto LAB_140a10adb;
  if (*(int *)(param_1 + 0x40) == *(int *)(param_1 + 0x6c)) {
LAB_140a10a8f:
    puVar6 = (undefined8 *)0x0;
  }
  else {
    uVar3 = ((uint)((ulonglong)param_2 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_2 >> 4)) *
            -0x7a143595;
    uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    lVar4 = param_1 + 0x70;
    if (*(longlong *)(param_1 + 0x78) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x78);
    }
    iVar7 = *(int *)(lVar4 + (ulonglong)(*(int *)(param_1 + 0x80) - 1U & (uVar3 >> 0x10 ^ uVar3)) *
                             4);
    if (iVar7 == -1) goto LAB_140a10a8f;
    do {
      puVar6 = (undefined8 *)(*(longlong *)(param_1 + 0x38) + (longlong)iVar7 * 0x18);
      if ((longlong *)*puVar6 == param_2) break;
      iVar7 = *(int *)(puVar6 + 2);
      puVar6 = (undefined8 *)0x0;
    } while (iVar7 != -1);
  }
  pbVar8 = (byte *)(puVar6 + 1);
  if (puVar6 == (undefined8 *)0x0) {
    pbVar8 = (byte *)0x0;
  }
  cVar1 = FUN_140a10ba2(param_1,param_2);
  if ((cVar1 == '\0') || (param_3 != 0)) {
    if (pbVar8 == (byte *)0x0) {
      local_48 = &local_58;
      local_40 = &local_49;
      FUN_140a10f74((longlong *)(param_1 + 0x38),local_34);
      goto LAB_140a10adb;
    }
    bVar2 = *pbVar8;
  }
  else if ((pbVar8 == (byte *)0x0) || (bVar2 = *pbVar8, bVar2 == 0)) goto LAB_140a10adb;
  *pbVar8 = bVar2 | param_3;
LAB_140a10adb:
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140a10ba2 FUN_140a10ba2 body=91 status=ok
// SIG undefined FUN_140a10ba2(void)

bool FUN_140a10ba2(longlong param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  bool bVar4;
  
  cVar1 = (**(code **)(*param_2 + 0x18))(param_2);
  if (cVar1 == '\0') {
    bVar4 = false;
  }
  else {
    puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2);
    iVar2 = FUN_140681374(param_1 + 0x128,(int)((ulonglong)*puVar3 >> 0x20) * 0x17 + (int)*puVar3,
                          puVar3);
    bVar4 = iVar2 != -1;
  }
  return bVar4;
}



// FUNCTION 140a10bfe FUN_140a10bfe body=91 status=ok
// SIG undefined FUN_140a10bfe(void)

bool FUN_140a10bfe(longlong param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  bool bVar4;
  
  cVar1 = (**(code **)(*param_2 + 0x18))(param_2);
  if (cVar1 == '\0') {
    bVar4 = false;
  }
  else {
    puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2);
    iVar2 = FUN_140a10c5a(param_1 + 0xd8,(int)((ulonglong)*puVar3 >> 0x20) * 0x17 + (int)*puVar3,
                          puVar3);
    bVar4 = iVar2 != -1;
  }
  return bVar4;
}



// FUNCTION 140a10c5a FUN_140a10c5a body=275 status=ok
// SIG undefined FUN_140a10c5a(void)

int FUN_140a10c5a(longlong *param_1,uint param_2,longlong *param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  ushort uVar7;
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
LAB_140a10ca3:
      lVar10 = (longlong)iVar2 * 0x38;
      if ((((*(longlong *)(lVar4 + lVar10) == *param_3) &&
           (lVar1 = lVar4 + lVar10, *(int *)(lVar1 + 8) == (int)param_3[1])) &&
          (*(int *)(lVar1 + 0xc) == *(int *)((longlong)param_3 + 0xc))) &&
         (((*(int *)(lVar1 + 0x10) == (int)param_3[2] &&
           (*(int *)(lVar1 + 0x14) == *(int *)((longlong)param_3 + 0x14))) &&
          (*(longlong *)(lVar1 + 0x18) == param_3[3])))) {
        iVar3 = (int)param_3[5];
        if (*(int *)(lVar1 + 0x28) == iVar3) {
          if (iVar3 < 2) {
            return iVar2;
          }
          lVar6 = 0;
          do {
            uVar8 = *(ushort *)(*(longlong *)(lVar1 + 0x20) + lVar6);
            uVar9 = (ulonglong)uVar8;
            uVar7 = *(ushort *)(param_3[4] + lVar6);
            if (uVar8 == uVar7) {
              if (uVar8 == 0) {
                return iVar2;
              }
            }
            else {
              if (0x7f < (uVar7 | uVar8)) goto LAB_140a10d4c;
              uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
              uVar11 = (ulonglong)uVar7;
              uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
              if ((&DAT_149e05da0)[uVar9] != (&DAT_149e05da0)[uVar11]) goto LAB_140a10d4c;
            }
            lVar6 = lVar6 + 2;
          } while( true );
        }
        if (iVar3 + *(int *)(lVar1 + 0x28) == 1) {
          return iVar2;
        }
      }
      goto LAB_140a10cb0;
    }
  }
  return -1;
LAB_140a10d4c:
  if (uVar8 == uVar7) {
    return iVar2;
  }
LAB_140a10cb0:
  iVar2 = *(int *)(lVar4 + 0x30 + lVar10);
  if (iVar2 == -1) {
    return -1;
  }
  goto LAB_140a10ca3;
}



// FUNCTION 140a10d6e FUN_140a10d6e body=401 status=ok
// SIG undefined FUN_140a10d6e(void)

void FUN_140a10d6e(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  int *piVar6;
  ushort uVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  ushort uVar12;
  ulonglong uVar13;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    lVar2 = *param_2;
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar8 = *(int *)((longlong)plVar5 +
                    ((longlong)((int)((ulonglong)lVar2 >> 0x20) * 0x17 + (int)lVar2) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar8 != -1) {
      lVar3 = *param_1;
LAB_140a10dd8:
      lVar9 = (longlong)iVar8 * 0x38;
      lVar1 = lVar3 + lVar9;
      if ((((*(longlong *)(lVar3 + lVar9) == lVar2) && (*(int *)(lVar1 + 8) == (int)param_2[1])) &&
          (*(int *)(lVar1 + 0xc) == *(int *)((longlong)param_2 + 0xc))) &&
         (((*(int *)(lVar1 + 0x10) == (int)param_2[2] &&
           (*(int *)(lVar1 + 0x14) == *(int *)((longlong)param_2 + 0x14))) &&
          (*(longlong *)(lVar1 + 0x18) == param_2[3])))) {
        iVar4 = (int)param_2[5];
        if (*(int *)(lVar1 + 0x28) == iVar4) {
          if (1 < iVar4) {
            lVar10 = 0;
            do {
              uVar12 = *(ushort *)(*(longlong *)(lVar1 + 0x20) + lVar10);
              uVar13 = (ulonglong)uVar12;
              uVar7 = *(ushort *)(param_2[4] + lVar10);
              if (uVar12 == uVar7) {
                if (uVar12 == 0) break;
              }
              else {
                if (0x7f < (uVar7 | uVar12)) goto LAB_140a10e7e;
                uVar12 = (ushort)(byte)(&DAT_149e05da0)[uVar13];
                uVar11 = (ulonglong)uVar7;
                uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
                if ((&DAT_149e05da0)[uVar13] != (&DAT_149e05da0)[uVar11]) goto LAB_140a10e7e;
              }
              lVar10 = lVar10 + 2;
            } while( true );
          }
          goto LAB_140a10e8a;
        }
        if (iVar4 + *(int *)(lVar1 + 0x28) == 1) goto LAB_140a10e8a;
      }
      goto LAB_140a10de9;
    }
  }
  return;
LAB_140a10e7e:
  if (uVar12 == uVar7) {
LAB_140a10e8a:
    iVar4 = *(int *)((longlong)plVar5 + (longlong)*(int *)(lVar1 + 0x34) * 4);
    if (iVar4 == iVar8) {
      piVar6 = (int *)((longlong)plVar5 + (longlong)*(int *)(lVar1 + 0x34) * 4);
    }
    else {
      do {
        piVar6 = (int *)(lVar3 + (longlong)iVar4 * 0x38 + 0x30);
        iVar4 = *piVar6;
      } while (iVar4 != iVar8);
    }
    *piVar6 = *(int *)(lVar1 + 0x30);
    if (*(longlong *)(*param_1 + 0x20 + lVar9) != 0) {
      FUN_1400020a8();
    }
    FUN_140a10f00(param_1,iVar8);
    return;
  }
LAB_140a10de9:
  iVar8 = *(int *)(lVar1 + 0x30);
  if (iVar8 == -1) {
    return;
  }
  goto LAB_140a10dd8;
}



// FUNCTION 140a10f00 FUN_140a10f00 body=116 status=ok
// SIG undefined FUN_140a10f00(void)

void FUN_140a10f00(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x38) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x38) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x38 + 4) = uVar5;
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



// FUNCTION 140a10f74 FUN_140a10f74 body=1465 status=ok
// SIG undefined FUN_140a10f74(void)

int * FUN_140a10f74(longlong *param_1,int *param_2,undefined8 *param_3)

{
  uint *puVar1;
  ulonglong *puVar2;
  ulonglong *puVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong *plVar10;
  byte bVar11;
  int iVar12;
  uint *puVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  longlong *plVar18;
  ulonglong uVar19;
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
    plVar10 = param_1 + 2;
    iVar12 = iVar23 + 1;
    iVar16 = iVar23 + 0x1f;
    if (-1 < iVar23) {
      iVar16 = iVar23;
    }
    if (iVar16 >> 5 == iVar7) {
      *(int *)(param_1 + 5) = iVar12;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar23) {
        if (iVar23 + 0x20U < 0xa0) {
          iVar12 = 0x80;
          iVar7 = iVar23;
        }
        else {
          uVar15 = iVar23 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar14 = 4;
            if (4 < uVar15) {
              uVar14 = uVar15;
            }
          }
          else {
            uVar14 = (uVar15 * 3 >> 3) + uVar15 + 0x10;
          }
          uVar9 = FUN_144a3809e(uVar14 << 2,0);
          iVar7 = (int)(uVar9 >> 2);
          iVar12 = -0x20;
          if ((int)uVar15 <= iVar7) {
            iVar12 = iVar7 << 5;
          }
          iVar7 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar12;
        FUN_1446efbd8(plVar10,iVar7);
        iVar12 = (int)param_1[5] + 1;
      }
      iVar7 = iVar12 + 0x1f;
      if (-1 < iVar12) {
        iVar7 = iVar12;
      }
      *(int *)(param_1 + 5) = iVar12;
      if (iVar12 % 0x20 != 0) {
        plVar18 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar18 = plVar10;
        }
        bVar11 = -(char)(iVar12 % 0x20);
        *(uint *)((longlong)plVar18 + (longlong)(iVar7 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar18 + (longlong)(iVar7 >> 5) * 4) << (bVar11 & 0x1f)) >>
             (bVar11 & 0x1f);
      }
    }
    lVar8 = (longlong)iVar20;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar10 = (longlong *)param_1[4];
    }
    bVar11 = (byte)iVar23 & 0x1f;
    puVar1 = (uint *)((longlong)plVar10 + (longlong)(iVar16 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar11 | 0xfffffffeU >> 0x20 - bVar11);
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
  puVar13 = (uint *)param_1[4];
  if ((uint *)param_1[4] == (uint *)0x0) {
    puVar13 = puVar1;
  }
  iVar23 = iVar20 + 0x1f;
  if (-1 < iVar20) {
    iVar23 = iVar20;
  }
  puVar13[iVar23 >> 5] = puVar13[iVar23 >> 5] | 1 << ((byte)iVar20 & 0x1f);
  uVar15 = 1;
  puVar2 = (ulonglong *)(*param_1 + lVar8 * 0x18);
  puVar4 = (undefined1 *)param_3[1];
  uVar9 = *(ulonglong *)*param_3;
  *puVar2 = uVar9;
  *(undefined1 *)(puVar2 + 1) = *puVar4;
  *(undefined4 *)(puVar2 + 2) = 0xffffffff;
  uVar14 = ((uint)(uVar9 >> 0x14) & 0xffff ^ (uint)(uVar9 >> 4)) * -0x7a143595;
  uVar14 = (uVar14 >> 0xd ^ uVar14) * -0x3d4d51cb;
  uVar14 = uVar14 >> 0x10 ^ uVar14;
  uVar21 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (1 < uVar21) {
    plVar10 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar10 = (longlong *)param_1[8];
    }
    iVar23 = *(int *)((longlong)plVar10 + (ulonglong)((int)param_1[9] - 1U & uVar14) * 4);
    if (iVar23 != -1) {
      do {
        puVar3 = (ulonglong *)(*param_1 + (longlong)iVar23 * 0x18);
        if (*puVar3 == uVar9) {
          uVar5 = *(undefined4 *)((longlong)puVar2 + 4);
          uVar9 = puVar2[1];
          uVar6 = *(undefined4 *)((longlong)puVar2 + 0xc);
          *(int *)puVar3 = (int)*puVar2;
          *(undefined4 *)((longlong)puVar3 + 4) = uVar5;
          *(int *)(puVar3 + 1) = (int)uVar9;
          *(undefined4 *)((longlong)puVar3 + 0xc) = uVar6;
          FUN_147b9baa4(param_1,iVar20);
          iVar20 = iVar23;
          goto LAB_140a11316;
        }
        iVar23 = (int)puVar3[2];
      } while (iVar23 != -1);
    }
  }
  if (3 < uVar21) {
    uVar9 = (ulonglong)(uVar21 & 0xfffffffe) + 0xf;
    lVar8 = 0x3f;
    if (uVar9 != 0) {
      for (; uVar9 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar15 = 1 << ((byte)lVar8 & 0x1f);
  }
  if (((int)uVar21 < 1) || ((int)uVar15 <= (int)param_1[9])) {
    uVar14 = (int)param_1[9] - 1U & uVar14;
    *(uint *)((longlong)puVar2 + 0x14) = uVar14;
    plVar10 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar10 = param_1 + 7;
    }
    *(undefined4 *)(puVar2 + 2) =
         *(undefined4 *)
          ((longlong)plVar10 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar14) * 4);
    plVar10 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar10 = param_1 + 7;
    }
    *(int *)((longlong)plVar10 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar14) * 4) =
         iVar20;
    goto LAB_140a11316;
  }
  *(uint *)(param_1 + 9) = uVar15;
  plVar10 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar10,0,0,4);
    uVar15 = *(uint *)(param_1 + 9);
  }
  plVar18 = param_1 + 7;
  if (uVar15 == 1) {
    if (*plVar10 != 0) {
      FUN_1446efa72(plVar10,0,0,4);
    }
LAB_140a1113b:
    uVar14 = 0;
    do {
      plVar10 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar10 = plVar18;
      }
      *(undefined4 *)((longlong)plVar10 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar14) * 4) =
           0xffffffff;
      uVar14 = uVar14 + 1;
    } while (uVar15 != uVar14);
  }
  else {
    if (uVar15 == 0) goto LAB_140a11316;
    FUN_1446efa72(plVar10,0,uVar15,4);
    if (0 < (int)uVar15) goto LAB_140a1113b;
  }
  iVar23 = (int)param_1[5];
  if (iVar23 == 0) {
    uVar9 = 0;
    uVar19 = 1;
    iVar7 = 0;
    iVar12 = 0;
  }
  else {
    puVar13 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar13 = puVar1;
    }
    uVar15 = *puVar13;
    if (uVar15 == 0) {
      iVar7 = iVar23 + 0x1e;
      if (-1 < iVar23 + -1) {
        iVar7 = iVar23 + -1;
      }
      uVar9 = 0;
      uVar19 = (ulonglong)(uint)(iVar7 >> 5);
      if (iVar7 >> 5 < 1) {
        uVar19 = uVar9;
      }
      iVar12 = 0;
      do {
        if (uVar19 == uVar9) goto LAB_140a11316;
        iVar12 = iVar12 + 0x20;
        uVar15 = puVar13[uVar9 + 1];
        uVar9 = uVar9 + 1;
      } while (uVar15 == 0);
    }
    else {
      uVar9 = 0;
      iVar12 = 0;
    }
    uVar19 = (ulonglong)(-uVar15 & uVar15);
    uVar24 = uVar19 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar24 != 0) {
      for (; uVar24 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iVar7 = (iVar12 - ((uint)lVar8 ^ 0x3f)) + 0x3e;
    if (iVar23 <= iVar7) {
      iVar7 = iVar23;
    }
  }
  if (iVar7 < iVar23) {
    uVar15 = 0xffffffff;
    do {
      lVar8 = *param_1;
      lVar22 = (longlong)iVar7;
      uVar24 = *(ulonglong *)(lVar8 + lVar22 * 0x18);
      uVar14 = ((uint)(uVar24 >> 0x14) & 0xffff ^ (uint)(uVar24 >> 4)) * -0x7a143595;
      uVar14 = (uVar14 >> 0xd ^ uVar14) * -0x3d4d51cb;
      uVar24 = (longlong)(int)(uVar14 >> 0x10 ^ uVar14) & (longlong)(int)param_1[9] - 1U;
      iVar23 = (int)uVar24;
      *(int *)(lVar8 + 0x14 + lVar22 * 0x18) = iVar23;
      plVar10 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar10 = plVar18;
      }
      *(undefined4 *)(lVar8 + 0x10 + lVar22 * 0x18) =
           *(undefined4 *)((longlong)plVar10 + ((longlong)(int)param_1[9] - 1U & uVar24) * 4);
      plVar10 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar10 = plVar18;
      }
      *(int *)((longlong)plVar10 + ((longlong)iVar23 & (longlong)(int)param_1[9] - 1U) * 4) = iVar7;
      uVar15 = ~(uint)uVar19 & uVar15;
      puVar13 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar13 = puVar1;
      }
      iVar23 = (int)param_1[5];
      iVar7 = (int)uVar9;
      lVar8 = (longlong)iVar7;
      uVar14 = puVar13[lVar8] & uVar15;
      if (uVar14 == 0) {
        iVar16 = iVar23 + 0x1e;
        if (-1 < iVar23 + -1) {
          iVar16 = iVar23 + -1;
        }
        iVar16 = iVar16 >> 5;
        iVar17 = iVar16;
        if (iVar16 < iVar7) {
          iVar17 = iVar7;
        }
        if (iVar16 <= iVar7) break;
        lVar22 = 0;
        while( true ) {
          iVar12 = iVar12 + 0x20;
          uVar14 = puVar13[lVar8 + lVar22 + 1];
          if (uVar14 != 0) break;
          lVar22 = lVar22 + 1;
          if (iVar17 - lVar8 == lVar22) goto LAB_140a11316;
        }
        uVar9 = (ulonglong)(iVar7 + (int)lVar22 + 1);
        uVar15 = 0xffffffff;
      }
      uVar19 = (ulonglong)(-uVar14 & uVar14);
      uVar24 = uVar19 * 2 + 1;
      lVar8 = 0x3f;
      if (uVar24 != 0) {
        for (; uVar24 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = (iVar12 - ((uint)lVar8 ^ 0x3f)) + 0x3e;
    } while (iVar7 < iVar23);
  }
LAB_140a11316:
  *param_2 = iVar20;
  return param_2;
}


