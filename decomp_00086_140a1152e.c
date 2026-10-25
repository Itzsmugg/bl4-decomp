// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 140a1152e FUN_140a1152e body=563 status=ok
// SIG undefined FUN_140a1152e(void)

void FUN_140a1152e(longlong *param_1)

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
        lVar10 = (longlong)iVar6 * 0x40;
        uVar13 = (longlong)
                 ((int)((ulonglong)*(undefined8 *)(lVar11 + lVar10) >> 0x20) * 0x17 +
                 (int)*(undefined8 *)(lVar11 + lVar10)) & (longlong)(int)param_1[9] - 1U;
        iVar12 = (int)uVar13;
        *(int *)(lVar11 + 0x3c + lVar10) = iVar12;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar11 + 0x38 + lVar10) =
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
            if (iVar2 - lVar11 == lVar10) goto LAB_140a1171c;
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
LAB_140a1171c:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a11762 FUN_140a11762 body=197 status=ok
// SIG undefined FUN_140a11762(void)

longlong FUN_140a11762(longlong *param_1,uint param_2,longlong *param_3)

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
          if (lVar3 != 0) goto LAB_140a1180a;
          break;
        }
        iVar1 = *(int *)(lVar3 + 0x58);
      } while (iVar1 != -1);
    }
  }
  local_38 = 0;
  local_28 = param_3;
  FUN_140a11828(param_1,&local_1c,param_2);
  lVar3 = (longlong)local_1c * 0x60 + *param_1;
LAB_140a1180a:
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + 8;
}



// FUNCTION 140a11828 FUN_140a11828 body=298 status=ok
// SIG undefined FUN_140a11828(void)

undefined4 *
FUN_140a11828(longlong param_1,undefined4 *param_2,uint param_3,undefined8 param_4,
             undefined8 param_5)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_58 [2];
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140a11c5c(param_1,local_58);
  FUN_140a11954(param_4,local_50);
  *(undefined4 *)(local_50 + 0x58) = 0xffffffff;
  local_68 = param_5;
  cVar1 = FUN_140a11aa6(param_1,param_3,local_50,local_58);
  if (cVar1 == '\0') {
    uVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    if (uVar2 < 4) {
      iVar4 = 1;
    }
    else {
      uVar3 = (ulonglong)(uVar2 & 0xfffffffe) + 0xf;
      lVar5 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iVar4 = 1 << ((byte)lVar5 & 0x1f);
    }
    if (((int)uVar2 < 1) || (iVar4 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      *(uint *)(local_50 + 0x5c) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_50 + 0x58) =
           *(undefined4 *)
            (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_58[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar4;
      FUN_140a11e4e(param_1);
    }
  }
  *param_2 = local_58[0];
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a11954 FUN_140a11954 body=158 status=ok
// SIG undefined FUN_140a11954(void)

undefined8 * FUN_140a11954(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_4c;
  undefined4 local_44;
  longlong local_38;
  undefined4 local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_58 = 0;
  local_50 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_4c = 0xffffffff00000080;
  local_44 = 0;
  local_38 = 0;
  local_30 = 0;
  *param_2 = *(undefined8 *)*param_1;
  FUN_140a11b74(param_2 + 1,&local_78);
  local_30 = 0;
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  FUN_140a119f4(&local_78);
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a119f4 FUN_140a119f4 body=55 status=ok
// SIG undefined FUN_140a119f4(void)

void FUN_140a119f4(longlong *param_1)

{
  FUN_140a11a2c(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140a11a2c FUN_140a11a2c body=121 status=ok
// SIG undefined FUN_140a11a2c(void)

void FUN_140a11a2c(longlong param_1,int param_2)

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



// FUNCTION 140a11aa6 FUN_140a11aa6 body=206 status=ok
// SIG undefined FUN_140a11aa6(void)

void FUN_140a11aa6(longlong *param_1,uint param_2,longlong *param_3,int *param_4,undefined1 *param_5
                  )

{
  void *_Dst;
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
        _Dst = (void *)(*param_1 + (longlong)iVar3 * 0x60);
        if (*(longlong *)(*param_1 + (longlong)iVar3 * 0x60) == *param_3) {
          *(undefined4 *)((longlong)_Dst + 0x50) = 0;
          if (*(longlong *)((longlong)_Dst + 0x48) != 0) {
            FUN_1400020a8();
          }
          FUN_140a119f4((longlong)_Dst + 8);
          memmove(_Dst,param_3,0x58);
          FUN_14284042e(param_1,*param_4);
          *param_4 = iVar3;
          uVar1 = 1;
          goto LAB_140a11b1d;
        }
        iVar3 = *(int *)((longlong)_Dst + 0x58);
      } while (iVar3 != -1);
    }
  }
  uVar1 = 0;
LAB_140a11b1d:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar1;
  }
  return;
}



// FUNCTION 140a11b74 FUN_140a11b74 body=232 status=ok
// SIG undefined FUN_140a11b74(void)

undefined8 * FUN_140a11b74(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  if (param_1 != param_2) {
    *param_1 = *param_2;
    *param_2 = 0;
    *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    if (param_2[4] == 0) {
      uVar1 = *(undefined4 *)((longlong)param_2 + 0x14);
      uVar2 = *(undefined4 *)(param_2 + 3);
      uVar3 = *(undefined4 *)((longlong)param_2 + 0x1c);
      *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
      *(undefined4 *)((longlong)param_1 + 0x14) = uVar1;
      *(undefined4 *)(param_1 + 3) = uVar2;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uVar3;
    }
    if (param_1[4] != 0) {
      FUN_1400020a8();
    }
    param_1[4] = param_2[4];
    param_2[4] = 0;
    *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
    *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
    param_2[5] = 0;
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    param_2[6] = 0xffffffff;
  }
  if (param_2[8] == 0) {
    *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 7);
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  param_1[8] = param_2[8];
  param_2[8] = 0;
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 9);
  *(undefined4 *)(param_2 + 9) = 0;
  return param_1;
}



// FUNCTION 140a11c5c FUN_140a11c5c body=497 status=ok
// SIG undefined FUN_140a11c5c(void)

int * FUN_140a11c5c(longlong *param_1,int *param_2)

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
      FUN_14488f93c(param_1,iVar11);
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
    iVar6 = *(int *)(*param_1 + 4 + lVar3 * 0x60);
    *(int *)(param_1 + 6) = iVar6;
    iVar2 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar6 * 0x60) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar3 * 0x60 + *param_1;
  return param_2;
}



// FUNCTION 140a11e4e FUN_140a11e4e body=591 status=ok
// SIG undefined FUN_140a11e4e(void)

void FUN_140a11e4e(longlong *param_1)

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
        uVar3 = ((uint)(*(ulonglong *)(lVar11 + lVar10) >> 0x14) & 0xffff ^
                (uint)(*(ulonglong *)(lVar11 + lVar10) >> 4)) * -0x7a143595;
        uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
        uVar13 = (longlong)(int)(uVar3 >> 0x10 ^ uVar3) & (longlong)(int)param_1[9] - 1U;
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
            if (iVar2 - lVar11 == lVar10) goto LAB_140a12058;
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
LAB_140a12058:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a120ac FUN_140a120ac body=101 status=ok
// SIG undefined FUN_140a120ac(void)

undefined8 * FUN_140a120ac(undefined8 *param_1,int param_2)

{
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



// FUNCTION 140a12112 FUN_140a12112 body=6495 status=ok
// SIG undefined FUN_140a12112(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_140a12112(longlong param_1,longlong *param_2)

{
  uint uVar1;
  bool bVar2;
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined4 uVar8;
  int extraout_EAX;
  int extraout_EAX_00;
  longlong lVar9;
  undefined8 uVar10;
  uint uVar11;
  longlong lVar12;
  int *piVar13;
  double *pdVar14;
  char cVar15;
  int iVar16;
  int iVar17;
  double *pdVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  longlong *plVar22;
  ulonglong uVar23;
  double dVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  double dVar33;
  double dVar34;
  double dVar35;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  float fVar36;
  double dVar37;
  double dVar38;
  undefined1 auVar39 [16];
  double dVar41;
  undefined1 auVar40 [16];
  double dVar42;
  double dVar43;
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  double dVar49;
  undefined1 auVar48 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  double dVar52;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  double dVar56;
  double dVar57;
  double dVar58;
  double dVar59;
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  double dVar62;
  double dVar63;
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  float fVar66;
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  double dVar72;
  undefined1 auVar71 [16];
  double dVar73;
  undefined1 auStack_398 [32];
  undefined1 local_378 [16];
  undefined1 local_368 [16];
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
  double local_308;
  undefined1 local_2f8 [16];
  undefined1 local_2e8 [16];
  char local_2d8;
  double local_2c8;
  double dStack_2c0;
  double local_2b8;
  double dStack_2b0;
  double local_2a8;
  double dStack_2a0;
  double local_298;
  undefined1 local_288 [16];
  undefined1 local_278 [16];
  char local_268;
  double local_258;
  double dStack_250;
  double local_248;
  undefined8 uStack_240;
  undefined1 local_238 [16];
  double local_228;
  undefined8 uStack_220;
  undefined1 local_218 [16];
  double local_208;
  undefined8 uStack_200;
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  undefined8 uStack_1e0;
  undefined1 local_1d8 [16];
  double local_1c8;
  undefined8 uStack_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  undefined8 uStack_1a0;
  undefined1 local_198 [16];
  double local_188;
  undefined8 uStack_180;
  double local_178;
  double dStack_170;
  double local_168;
  undefined8 uStack_160;
  double local_158 [4];
  double local_138;
  double dStack_130;
  double local_128;
  double local_118;
  double local_110;
  double local_108;
  char local_f8;
  undefined7 uStack_f7;
  double dStack_f0;
  double local_e8;
  ulonglong local_d0;
  
  dVar62 = DAT_14c8464f0;
  dVar58 = DAT_14c8464e8;
  dVar57 = DAT_14c8464e0;
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_398;
  if (*(char *)(param_1 + 0x489) == '\x01') {
    lVar12 = *param_2;
    if (*(int *)(lVar12 + 0xdc4) == 0) goto LAB_140a12201;
    uVar11 = *(uint *)(lVar12 + 0xdc0);
    uVar10 = 0;
    if (((int)uVar11 < 0) || (uVar10 = 0, DAT_14c9647dc <= (int)uVar11)) goto LAB_140a12203;
    lVar9 = (ulonglong)((uVar11 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8);
    if ((lVar9 != 0) &&
       (((*(int *)(lVar9 + 0x10) == *(int *)(lVar12 + 0xdc4) &&
         ((*(uint *)(lVar9 + 8) & 0x10200000) == 0)) && (*(longlong *)(lVar12 + 0xdc8) != 0)))) {
      local_158[0] = *(double *)(lVar12 + 0xdc0);
      FUN_140a13ae4(*(longlong *)(lVar12 + 0xdc8),&local_2c8,local_158,
                    *(undefined4 *)
                     (lVar12 + 0xcf0 + (ulonglong)(*(byte *)(param_1 + 0x488) ^ 1) * 4));
      uVar10 = *(undefined8 *)(lVar12 + 0xdc8);
      local_158[0] = *(double *)(lVar12 + 0xdc0);
      uVar8 = FUN_140a13ae4(uVar10,&local_338,local_158,*(undefined4 *)(lVar12 + 0xcf8));
      auVar46 = _DAT_149934d80;
      if ((local_268 == '\x01') && (local_2d8 == '\x01')) {
        auVar25 = *(undefined1 (*) [16])(lVar12 + 0xd40);
        dVar57 = auVar25._0_8_;
        dVar38 = auVar25._8_8_;
        auVar68 = *(undefined1 (*) [16])(lVar12 + 0xd50);
        dVar58 = auVar68._0_8_;
        auVar26 = *(undefined1 (*) [16])(lVar12 + 0xda0);
        dVar62 = auVar26._0_8_;
        dVar72 = auVar26._8_8_;
        auVar28 = *(undefined1 (*) [16])(lVar12 + 0xdb0);
        dVar35 = auVar28._0_8_;
        auVar25 = minpd(auVar26,auVar25);
        auVar39 = minpd(auVar28,auVar68);
        auVar26._8_8_ = -(ulonglong)(auVar25._8_8_ < 0.0);
        auVar26._0_8_ = -(ulonglong)(auVar25._0_8_ < 0.0);
        iVar16 = movmskpd(uVar8,auVar26);
        auVar25._8_8_ = -(ulonglong)(auVar39._8_8_ < 0.0);
        auVar25._0_8_ = -(ulonglong)(auVar39._0_8_ < 0.0);
        uVar11 = movmskpd((int)uVar10,auVar25);
        if ((uVar11 & 0x3fffffff) == 0 && iVar16 == 0) {
          dVar52 = *(double *)(lVar12 + 0xd00);
          dVar56 = *(double *)(lVar12 + 0xd08);
          dVar59 = *(double *)(lVar12 + 0xd10);
          dVar4 = *(double *)(lVar12 + 0xd60);
          dVar5 = *(double *)(lVar12 + 0xd68);
          dVar6 = *(double *)(lVar12 + 0xd70);
          dVar7 = *(double *)(lVar12 + 0xd78);
          dVar49 = *(double *)(lVar12 + 0xd18);
          dVar43 = *(double *)(lVar12 + 0xd18);
          dVar42 = *(double *)(lVar12 + 0xd00);
          dVar63 = *(double *)(lVar12 + 0xd00);
          dVar34 = *(double *)(lVar12 + 0xd08);
          dVar24 = *(double *)(lVar12 + 0xd08);
          dVar73 = *(double *)(lVar12 + 0xd10);
          dVar33 = *(double *)(lVar12 + 0xd10);
          dVar37 = dVar5 * dVar73 * -1.0 + dVar6 * dVar34 + dVar7 * dVar42 * 1.0 + dVar4 * dVar49;
          dVar41 = dVar4 * dVar33 * 1.0 + dVar7 * dVar24 + dVar6 * dVar63 * -1.0 + dVar5 * dVar43;
          auVar46._0_8_ =
               dVar7 * dVar73 * 1.0 + ((dVar42 * dVar5 * 1.0 + dVar6 * dVar49) - dVar4 * dVar34);
          auVar46._8_8_ =
               dVar6 * dVar33 * -1.0 + ((dVar63 * dVar4 * -1.0 + dVar7 * dVar43) - dVar5 * dVar24);
          dVar42 = *(double *)(lVar12 + 0xd80) * dVar57;
          dVar73 = *(double *)(lVar12 + 0xd88) * dVar38;
          dVar63 = *(double *)(lVar12 + 0xd90) * dVar58;
          dVar24 = dVar73 * dVar52 - dVar56 * dVar42;
          dVar33 = dVar63 * dVar56 - dVar59 * dVar73;
          dVar34 = dVar42 * dVar59 - dVar52 * dVar63;
          dVar33 = dVar33 + dVar33;
          dVar34 = dVar34 + dVar34;
          dVar24 = dVar24 + dVar24;
          dVar42 = (dVar24 * dVar56 - dVar59 * dVar34) + dVar49 * dVar33 + dVar42 +
                   *(double *)(lVar12 + 0xd20);
          auVar64._8_8_ = auVar28._8_8_ * auVar68._8_8_;
          auVar64._0_8_ = dVar35 * dVar58;
          uVar8 = 0;
          dVar58 = (dVar34 * dVar52 - dVar56 * dVar33) + dVar49 * dVar24 + dVar63 +
                   *(double *)(lVar12 + 0xd30);
          dVar35 = (dVar33 * dVar59 - dVar24 * dVar52) + dVar43 * dVar34 + dVar73 +
                   *(double *)(lVar12 + 0xd28);
        }
        else {
          dVar41 = *(double *)(lVar12 + 0xd00);
          dVar49 = *(double *)(lVar12 + 0xd08);
          dVar43 = *(double *)(lVar12 + 0xd10);
          dVar63 = dVar49 + dVar49;
          dVar34 = dVar43 + dVar43;
          dVar73 = dVar41 * (dVar41 + dVar41);
          local_188 = (1.0 - (dVar73 + dVar49 * dVar63)) * dVar58;
          dVar37 = *(double *)(lVar12 + 0xd00) * dVar34;
          dVar42 = *(double *)(lVar12 + 0xd18);
          dVar24 = dVar34 * dVar42;
          dVar33 = (dVar41 + dVar41) * *(double *)(lVar12 + 0xd18);
          dVar42 = dVar63 * dVar42;
          auVar64._0_8_ = dVar58 * dVar35;
          auVar64._8_8_ = auVar68._8_8_ * auVar28._8_8_;
          dStack_1b0 = (DAT_149934d80._8_8_ - (dVar43 * dVar34 + dVar73)) * dVar38;
          dVar73 = (dVar63 * dVar41 + dVar24) * dVar57;
          local_1a8 = (dVar34 * dVar49 + dVar33) * dVar38;
          local_1b8 = (dVar63 * dVar41 - dVar24) * dVar38;
          local_1c8 = (dVar37 - dVar42) * dVar57;
          local_1d8._8_4_ = SUB84(dVar73,0);
          local_1d8._0_8_ = ((double)DAT_149934d80 - (dVar43 * dVar34 + dVar49 * dVar63)) * dVar57;
          local_1d8._12_4_ = (int)((ulonglong)dVar73 >> 0x20);
          uStack_1c0 = 0;
          uStack_1a0 = 0;
          local_198._8_8_ = (dVar34 * dVar49 - dVar33) * dVar58;
          local_198._0_8_ = (dVar42 + dVar37) * dVar58;
          uStack_180 = 0;
          local_178 = *(double *)(lVar12 + 0xd20);
          dStack_170 = *(double *)(lVar12 + 0xd28);
          local_168 = *(double *)(lVar12 + 0xd30);
          uStack_160 = 0x3ff0000000000000;
          dVar37 = *(double *)(lVar12 + 0xd60);
          dVar41 = *(double *)(lVar12 + 0xd68);
          dVar42 = *(double *)(lVar12 + 0xd70);
          dVar49 = dVar41 + dVar41;
          dVar43 = dVar42 + dVar42;
          dVar24 = dVar37 * (dVar37 + dVar37);
          local_208 = (1.0 - (dVar24 + dVar41 * dVar49)) * dVar35;
          dVar33 = *(double *)(lVar12 + 0xd60) * dVar43;
          dVar58 = *(double *)(lVar12 + 0xd78);
          dVar63 = dVar43 * dVar58;
          dVar34 = (dVar37 + dVar37) * *(double *)(lVar12 + 0xd78);
          dVar58 = dVar49 * dVar58;
          local_258 = ((double)DAT_149934d80 - (dVar42 * dVar43 + dVar41 * dVar49)) * dVar62;
          dVar42 = (DAT_149934d80._8_8_ - (dVar42 * dVar43 + dVar24)) * dVar72;
          dStack_250 = (dVar49 * dVar37 + dVar63) * dVar62;
          local_228 = (dVar43 * dVar41 + dVar34) * dVar72;
          local_248 = (dVar33 - dVar58) * dVar62;
          uStack_240 = 0;
          local_238._8_4_ = SUB84(dVar42,0);
          local_238._0_8_ = (dVar49 * dVar37 - dVar63) * dVar72;
          local_238._12_4_ = (int)((ulonglong)dVar42 >> 0x20);
          uStack_220 = 0;
          local_218._8_8_ = (dVar43 * dVar41 - dVar34) * dVar35;
          local_218._0_8_ = (dVar58 + dVar33) * dVar35;
          uStack_200 = 0;
          local_1f8 = *(double *)(lVar12 + 0xd80);
          dStack_1f0 = *(double *)(lVar12 + 0xd88);
          local_1e8 = *(double *)(lVar12 + 0xd90);
          uStack_1e0 = 0x3ff0000000000000;
          FUN_1447fea8d(local_158);
          FUN_144a1c686(local_158,0x3e45798ee0000000);
          auVar68._8_8_ = -(ulonglong)(0.0 <= dVar38 * dVar72);
          auVar68._0_8_ = -(ulonglong)(0.0 <= dVar57 * dVar62);
          auVar25 = blendvpd(_DAT_149936790,auVar46,auVar68);
          dVar58 = (double)(~-(ulonglong)(0.0 <= auVar64._0_8_) & 0xbff0000000000000 |
                           -(ulonglong)(0.0 <= auVar64._0_8_) & 0x3ff0000000000000);
          dVar35 = auVar25._0_8_;
          local_158[2] = local_158[2] * dVar35;
          local_158[1] = local_158[1] * dVar35;
          local_158[0] = local_158[0] * dVar35;
          dVar35 = auVar25._8_8_;
          local_128 = local_128 * dVar35;
          dStack_130 = dStack_130 * dVar35;
          local_138 = dVar35 * local_138;
          local_108 = local_108 * dVar58;
          local_110 = local_110 * dVar58;
          local_118 = dVar58 * local_118;
          pdVar14 = &local_358;
          FUN_14481fd10(pdVar14,local_158);
          uVar8 = SUB84(pdVar14,0);
          dVar58 = local_348 * local_348 + local_358 * local_358;
          dVar35 = dStack_340 * dStack_340 + dStack_350 * dStack_350;
          auVar39._0_8_ = dVar58 + dVar35;
          auVar39._8_8_ = dVar58 + dVar35;
          auVar28._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar39._8_8_);
          auVar28._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar39._0_8_);
          auVar25 = sqrtpd(auVar39,auVar39);
          auVar46 = divpd(auVar46,auVar25);
          auVar60._0_8_ = auVar46._0_8_ * local_348;
          auVar60._8_8_ = auVar46._8_8_ * dStack_340;
          dVar37 = (double)((ulonglong)(local_358 * auVar46._0_8_) &
                           -(ulonglong)(9.99999993922529e-09 <= auVar39._0_8_));
          dVar41 = (double)((ulonglong)(dStack_350 * auVar46._8_8_) &
                           -(ulonglong)(9.99999993922529e-09 <= auVar39._8_8_));
          auVar46 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar60,auVar28);
          dVar42 = (double)CONCAT71(uStack_f7,local_f8);
          iVar16 = extraout_EAX;
          dVar58 = local_e8;
          dVar35 = dStack_f0;
        }
        dVar72 = dVar72 * dVar38;
        dVar62 = dVar62 * dVar57;
        dVar57 = local_2f8._0_8_;
        dVar49 = local_2f8._8_8_;
        dVar38 = local_2e8._0_8_;
        dVar43 = local_2e8._8_8_;
        auVar50._8_8_ = dVar72;
        auVar50._0_8_ = dVar62;
        auVar25 = minpd(auVar50,local_2f8);
        auVar68 = minpd(auVar64,local_2e8);
        auVar51._8_8_ = -(ulonglong)(auVar25._8_8_ < 0.0);
        auVar51._0_8_ = -(ulonglong)(auVar25._0_8_ < 0.0);
        iVar16 = movmskpd(iVar16,auVar51);
        auVar69._8_8_ = -(ulonglong)(auVar68._8_8_ < 0.0);
        auVar69._0_8_ = -(ulonglong)(auVar68._0_8_ < 0.0);
        uVar11 = movmskpd(uVar8,auVar69);
        dVar63 = auVar46._0_8_;
        dVar34 = auVar46._8_8_;
        local_378._8_8_ = auVar64._8_8_;
        local_378._0_8_ = auVar64._0_8_;
        local_378 = auVar64;
        if ((uVar11 & 0x3fffffff) == 0 && iVar16 == 0) {
          dVar24 = dVar41 * local_328 * -1.0 +
                   dVar63 * dStack_330 + dVar34 * local_338 * 1.0 + dVar37 * dStack_320;
          dVar33 = dVar37 * local_328 * 1.0 +
                   dVar34 * dStack_330 + dVar63 * local_338 * -1.0 + dVar41 * dStack_320;
          auVar61._0_8_ =
               dVar34 * local_328 * 1.0 +
               ((local_338 * dVar41 * 1.0 + dVar63 * dStack_320) - dVar37 * dStack_330);
          auVar61._8_8_ =
               dVar63 * local_328 * -1.0 +
               ((local_338 * dVar37 * -1.0 + dVar34 * dStack_320) - dVar41 * dStack_330);
          dVar42 = dVar42 * dVar57;
          dVar35 = dVar35 * dVar49;
          dVar58 = dVar58 * dVar38;
          dVar37 = dVar35 * local_338 - dVar42 * dStack_330;
          dVar41 = dVar58 * dStack_330 - dVar35 * local_328;
          dVar63 = dVar42 * local_328 - dVar58 * local_338;
          dVar41 = dVar41 + dVar41;
          dVar63 = dVar63 + dVar63;
          dVar37 = dVar37 + dVar37;
          auVar70._0_8_ = (double)local_378._0_8_ * dVar38;
          auVar70._8_8_ = (double)local_378._8_8_ * dVar43;
          local_318 = (dVar37 * dStack_330 - local_328 * dVar63) + dStack_320 * dVar41 + dVar42 +
                      local_318;
          uVar8 = 0;
          dVar58 = (dVar63 * local_338 - dStack_330 * dVar41) + dStack_320 * dVar37 + dVar58 +
                   local_308;
          dVar35 = (dVar41 * local_328 - dVar37 * local_338) + dStack_320 * dVar63 + dVar35 +
                   dStack_310;
        }
        else {
          dVar73 = dStack_330 + dStack_330;
          dVar24 = local_328 + local_328;
          dVar52 = local_338 * (local_338 + local_338);
          dVar56 = dStack_330 * dVar73;
          dVar33 = (local_338 + local_338) * dStack_320;
          auVar70._0_8_ = (double)local_378._0_8_ * dVar38;
          auVar70._8_8_ = (double)local_378._8_8_ * dVar43;
          local_188 = (1.0 - (dVar52 + dVar56)) * dVar38;
          dVar43 = (0.0 - (dVar52 + dVar56)) * dVar43;
          local_368._8_4_ = SUB84(dVar43,0);
          local_368._0_8_ = local_188;
          local_368._12_4_ = (int)((ulonglong)dVar43 >> 0x20);
          local_1b8 = (dVar73 * local_338 - dVar24 * dStack_320) * dVar49;
          dStack_1b0 = (1.0 - (local_328 * dVar24 + dVar52)) * dVar49;
          local_1a8 = (dVar24 * dStack_330 + dVar33) * dVar49;
          local_1c8 = (local_338 * dVar24 - dVar73 * dStack_320) * dVar57;
          local_1d8._8_8_ = (dVar73 * local_338 + dVar24 * dStack_320) * dVar57;
          local_1d8._0_8_ = (1.0 - (local_328 * dVar24 + dVar56)) * dVar57;
          uStack_1c0 = 0;
          uStack_1a0 = 0;
          local_198._8_8_ = (dVar24 * dStack_330 - dVar33) * dVar38;
          local_198._0_8_ = (dVar73 * dStack_320 + local_338 * dVar24) * dVar38;
          uStack_180 = 0;
          local_178 = local_318;
          dStack_170 = dStack_310;
          local_168 = local_308;
          uStack_160 = 0x3ff0000000000000;
          dVar33 = dVar41 + dVar41;
          dVar43 = dVar63 + dVar63;
          dVar73 = dVar37 * (dVar37 + dVar37);
          local_208 = (1.0 - (dVar73 + dVar41 * dVar33)) * (double)local_378._0_8_;
          dVar24 = (dVar37 + dVar37) * dVar34;
          dVar38 = (dVar43 * dVar41 - dVar24) * (double)local_378._0_8_;
          local_258 = (1.0 - (dVar63 * dVar43 + dVar41 * dVar33)) * dVar62;
          dStack_250 = (dVar33 * dVar37 + dVar43 * dVar34) * dVar62;
          local_228 = (dVar43 * dVar41 + dVar24) * dVar72;
          local_248 = (dVar37 * dVar43 - dVar33 * dVar34) * dVar62;
          uStack_240 = 0;
          local_238._8_8_ = (1.0 - (dVar63 * dVar43 + dVar73)) * dVar72;
          local_238._0_8_ = (dVar33 * dVar37 - dVar43 * dVar34) * dVar72;
          uStack_220 = 0;
          local_218._8_4_ = SUB84(dVar38,0);
          local_218._0_8_ = (dVar37 * dVar43 + dVar33 * dVar34) * (double)local_378._0_8_;
          local_218._12_4_ = (int)((ulonglong)dVar38 >> 0x20);
          uStack_200 = 0;
          uStack_1e0 = 0x3ff0000000000000;
          local_1f8 = dVar42;
          dStack_1f0 = dVar35;
          local_1e8 = dVar58;
          FUN_1447fea8d(local_158);
          FUN_144a1c686(local_158,0x3e45798ee0000000);
          auVar46 = _DAT_149934d80;
          auVar29._8_8_ = -(ulonglong)(0.0 <= dVar72 * dVar49);
          auVar29._0_8_ = -(ulonglong)(0.0 <= dVar62 * dVar57);
          auVar25 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar29);
          dVar58 = (double)(~-(ulonglong)(0.0 <= auVar70._0_8_) & 0xbff0000000000000 |
                           -(ulonglong)(0.0 <= auVar70._0_8_) & 0x3ff0000000000000);
          dVar35 = auVar25._0_8_;
          local_158[2] = local_158[2] * dVar35;
          local_158[1] = local_158[1] * dVar35;
          local_158[0] = local_158[0] * dVar35;
          dVar35 = auVar25._8_8_;
          local_128 = local_128 * dVar35;
          dStack_130 = dStack_130 * dVar35;
          local_138 = dVar35 * local_138;
          local_108 = local_108 * dVar58;
          local_110 = local_110 * dVar58;
          local_118 = dVar58 * local_118;
          pdVar14 = &local_358;
          FUN_14481fd10(pdVar14,local_158);
          uVar8 = SUB84(pdVar14,0);
          dVar58 = local_348 * local_348 + local_358 * local_358;
          dVar35 = dStack_340 * dStack_340 + dStack_350 * dStack_350;
          auVar44._0_8_ = dVar58 + dVar35;
          auVar44._8_8_ = dVar58 + dVar35;
          auVar30._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar44._8_8_);
          auVar30._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar44._0_8_);
          auVar25 = sqrtpd(auVar44,auVar44);
          auVar46 = divpd(auVar46,auVar25);
          auVar48._0_8_ = auVar46._0_8_ * local_348;
          auVar48._8_8_ = auVar46._8_8_ * dStack_340;
          dVar24 = (double)((ulonglong)(local_358 * auVar46._0_8_) &
                           -(ulonglong)(9.99999993922529e-09 <= auVar44._0_8_));
          dVar33 = (double)((ulonglong)(dStack_350 * auVar46._8_8_) &
                           -(ulonglong)(9.99999993922529e-09 <= auVar44._8_8_));
          auVar61 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar48,auVar30);
          local_318 = (double)CONCAT71(uStack_f7,local_f8);
          iVar16 = extraout_EAX_00;
          dVar58 = local_e8;
          dVar35 = dStack_f0;
        }
        auVar46 = _DAT_149934d80;
        dVar72 = dVar72 * dVar49;
        dVar34 = ABS(dVar62 * dVar57);
        auVar53._8_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(dVar72));
        auVar53._0_8_ = -(ulonglong)(9.99999993922529e-09 < dVar34);
        uVar11 = movmskpd(iVar16,auVar53);
        auVar54._8_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar70._8_8_));
        auVar54._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar70._0_8_));
        iVar16 = movmskpd(uVar8,auVar54);
        uVar21 = iVar16 << 2 | uVar11;
        auVar27 = _DAT_14c8464c0;
        auVar67 = _DAT_14c8464d0;
        dVar42 = DAT_14c846490;
        dVar37 = DAT_14c846498;
        dVar41 = DAT_14c846480;
        dVar49 = DAT_14c846488;
        dVar43 = DAT_14c8464b0;
        dVar38 = DAT_14c8464a0;
        dVar63 = DAT_14c8464a8;
        if (uVar21 != 0) {
          auVar3._8_4_ = SUB84(dVar72,0);
          auVar3._0_8_ = dVar62 * dVar57;
          auVar3._12_4_ = (int)((ulonglong)dVar72 >> 0x20);
          auVar68 = divpd(_DAT_149934d80,auVar3);
          auVar25 = divpd(ZEXT816(0x3ff0000000000000),auVar70);
          auVar27._0_8_ = (double)(-(ulonglong)(9.99999993922529e-09 < dVar34) & auVar68._0_8_);
          auVar27._8_8_ = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(dVar72)) & auVar68._8_8_)
          ;
          dVar57 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar70._0_8_)) & auVar25._0_8_)
          ;
          auVar67._8_8_ = 0;
          auVar67._0_8_ = dVar57;
          dVar41 = -dVar24;
          dVar49 = -dVar33;
          dVar42 = auVar61._0_8_ * -1.0;
          dVar37 = auVar61._8_8_ * 1.0;
          local_318 = local_318 * auVar27._0_8_;
          dVar35 = dVar35 * auVar27._8_8_;
          dVar58 = dVar58 * dVar57;
          dVar62 = dVar35 * dVar41 - dVar49 * local_318;
          dVar72 = dVar58 * dVar49 - dVar42 * dVar35;
          dVar57 = local_318 * dVar42 - dVar41 * dVar58;
          dVar72 = dVar72 + dVar72;
          dVar57 = dVar57 + dVar57;
          dVar62 = dVar62 + dVar62;
          dVar43 = 0.0 - (dVar37 * dVar62 + dVar58 + (dVar57 * dVar41 - dVar72 * dVar49));
          dVar38 = 0.0 - ((dVar62 * dVar49 - dVar57 * dVar42) + dVar37 * dVar72 + local_318);
          dVar63 = 0.0 - (dVar62 * dVar24 + dVar42 * dVar72 + dVar37 * dVar57 + dVar35);
        }
        dVar57 = local_288._0_8_;
        dVar62 = local_288._8_8_;
        dVar58 = local_278._0_8_;
        auVar25 = minpd(local_288,auVar27);
        auVar68 = minpd(local_278,auVar67);
        auVar55._8_8_ = -(ulonglong)(auVar25._8_8_ < 0.0);
        auVar55._0_8_ = -(ulonglong)(auVar25._0_8_ < 0.0);
        iVar16 = movmskpd(uVar11,auVar55);
        auVar71._8_8_ = -(ulonglong)(auVar68._8_8_ < 0.0);
        auVar71._0_8_ = -(ulonglong)(auVar68._0_8_ < 0.0);
        uVar11 = movmskpd(uVar21,auVar71);
        dVar35 = auVar27._0_8_;
        dVar72 = auVar27._8_8_;
        dVar34 = auVar67._0_8_;
        if ((uVar11 & 0x3fffffff) == 0 && iVar16 == 0) {
          dVar57 = dStack_2c0 * dVar42 * -1.0 +
                   local_2b8 * dVar49 + dVar41 * dStack_2b0 * 1.0 + dVar37 * local_2c8;
          dVar58 = local_2c8 * dVar42 * 1.0 +
                   dStack_2b0 * dVar49 + dVar41 * local_2b8 * -1.0 + dVar37 * dStack_2c0;
          auVar65._0_8_ =
               dStack_2b0 * dVar42 * 1.0 +
               ((dVar41 * dStack_2c0 * 1.0 + dVar37 * local_2b8) - dVar49 * local_2c8);
          auVar65._8_8_ =
               local_2b8 * dVar42 * -1.0 +
               ((dVar41 * local_2c8 * -1.0 + dVar37 * dStack_2b0) - dVar49 * dStack_2c0);
          dVar35 = dVar35 * local_2a8;
          dVar72 = dVar72 * dStack_2a0;
          dVar34 = dVar34 * local_298;
          dVar62 = dVar72 * dVar41 - dVar49 * dVar35;
          dVar24 = dVar34 * dVar49 - dVar42 * dVar72;
          dVar33 = dVar35 * dVar42 - dVar41 * dVar34;
          dVar24 = dVar24 + dVar24;
          dVar33 = dVar33 + dVar33;
          dVar62 = dVar62 + dVar62;
          dVar38 = dVar38 + (dVar62 * dVar49 - dVar42 * dVar33) + dVar37 * dVar24 + dVar35;
          dStack_f0 = dVar63 + (dVar24 * dVar42 - dVar62 * dVar41) + dVar37 * dVar33 + dVar72;
          local_e8 = dVar43 + (dVar33 * dVar41 - dVar49 * dVar24) + dVar37 * dVar62 + dVar34;
        }
        else {
          dVar24 = dVar49 + dVar49;
          dVar52 = dVar42 + dVar42;
          dVar33 = dVar41 * (dVar41 + dVar41);
          dStack_1b0 = (1.0 - (dVar42 * dVar52 + dVar33)) * dVar72;
          dVar56 = (dVar41 + dVar41) * dVar37;
          local_1b8 = (dVar24 * dVar41 - dVar52 * dVar37) * dVar72;
          dVar73 = (dVar52 * dVar49 - dVar56) * dVar34;
          dVar59 = (dVar24 * dVar41 + dVar52 * dVar37) * dVar35;
          local_1a8 = (dVar52 * dVar49 + dVar56) * dVar72;
          local_1d8._8_4_ = SUB84(dVar59,0);
          local_1d8._0_8_ = (1.0 - (dVar42 * dVar52 + dVar49 * dVar24)) * dVar35;
          local_1d8._12_4_ = (int)((ulonglong)dVar59 >> 0x20);
          local_188 = (1.0 - (dVar33 + dVar49 * dVar24)) * dVar34;
          local_1c8 = (dVar41 * dVar52 - dVar24 * dVar37) * dVar35;
          uStack_1c0 = 0;
          uStack_1a0 = 0;
          local_198._8_4_ = SUB84(dVar73,0);
          local_198._0_8_ = (dVar41 * dVar52 + dVar24 * dVar37) * dVar34;
          local_198._12_4_ = (int)((ulonglong)dVar73 >> 0x20);
          uStack_180 = 0;
          uStack_160 = 0x3ff0000000000000;
          dVar42 = dStack_2c0 + dStack_2c0;
          dVar37 = local_2b8 + local_2b8;
          dVar49 = local_2c8 * (local_2c8 + local_2c8);
          dVar41 = (local_2c8 + local_2c8) * dStack_2b0;
          local_258 = ((double)DAT_149934d80 - (local_2b8 * dVar37 + dStack_2c0 * dVar42)) * dVar57;
          dStack_250 = (dVar42 * local_2c8 + dVar37 * dStack_2b0) * dVar57;
          local_228 = (dVar37 * dStack_2c0 + dVar41) * dVar62;
          local_248 = (local_2c8 * dVar37 - dVar42 * dStack_2b0) * dVar57;
          uStack_240 = 0;
          local_238._8_8_ = (DAT_149934d80._8_8_ - (local_2b8 * dVar37 + dVar49)) * dVar62;
          local_238._0_8_ = (dVar42 * local_2c8 - dVar37 * dStack_2b0) * dVar62;
          uStack_220 = 0;
          local_218._8_8_ = (dVar37 * dStack_2c0 - dVar41) * dVar58;
          local_218._0_8_ = (dVar42 * dStack_2b0 + local_2c8 * dVar37) * dVar58;
          local_208 = (1.0 - (dVar49 + dStack_2c0 * dVar42)) * dVar58;
          uStack_200 = 0;
          local_1f8 = local_2a8;
          dStack_1f0 = dStack_2a0;
          local_1e8 = local_298;
          uStack_1e0 = 0x3ff0000000000000;
          local_178 = dVar38;
          dStack_170 = dVar63;
          local_168 = dVar43;
          FUN_1447fea8d(local_158);
          FUN_144a1c686(local_158,0x3e45798ee0000000);
          auVar31._8_8_ = -(ulonglong)(0.0 <= dVar72 * dVar62);
          auVar31._0_8_ = -(ulonglong)(0.0 <= dVar35 * dVar57);
          auVar25 = blendvpd(_DAT_149936790,auVar46,auVar31);
          uVar23 = -(ulonglong)(0.0 <= dVar34 * dVar58);
          dVar57 = (double)(~uVar23 & 0xbff0000000000000 | uVar23 & 0x3ff0000000000000);
          dVar58 = auVar25._0_8_;
          local_158[2] = local_158[2] * dVar58;
          local_158[1] = local_158[1] * dVar58;
          local_158[0] = local_158[0] * dVar58;
          dVar58 = auVar25._8_8_;
          local_128 = local_128 * dVar58;
          dStack_130 = dStack_130 * dVar58;
          local_138 = dVar58 * local_138;
          local_108 = local_108 * dVar57;
          local_110 = local_110 * dVar57;
          local_118 = dVar57 * local_118;
          FUN_14481fd10(&local_358,local_158);
          auVar40._0_8_ = local_358 * local_358;
          auVar40._8_8_ = dStack_350 * dStack_350;
          dVar57 = local_348 * local_348 + auVar40._0_8_;
          dVar58 = dStack_340 * dStack_340 + auVar40._8_8_;
          auVar45._0_8_ = dVar57 + dVar58;
          auVar45._8_8_ = dVar57 + dVar58;
          auVar25 = sqrtpd(auVar40,auVar45);
          auVar46 = divpd(auVar46,auVar25);
          auVar47._0_8_ = auVar46._0_8_ * local_348;
          auVar47._8_8_ = auVar46._8_8_ * dStack_340;
          dVar57 = (double)((ulonglong)(local_358 * auVar46._0_8_) &
                           -(ulonglong)(9.99999993922529e-09 <= auVar45._0_8_));
          dVar58 = (double)((ulonglong)(dStack_350 * auVar46._8_8_) &
                           -(ulonglong)(9.99999993922529e-09 <= auVar45._8_8_));
          auVar32._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar45._8_8_);
          auVar32._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar45._0_8_);
          auVar65 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar47,auVar32);
          dVar38 = (double)CONCAT71(uStack_f7,local_f8);
        }
        *(double *)(param_1 + 0x280) = dVar38;
        *(double *)(param_1 + 0x288) = dStack_f0;
        *(double *)(param_1 + 0x290) = local_e8;
        *(double *)(param_1 + 0x2a0) = dVar57;
        *(double *)(param_1 + 0x2a8) = dVar58;
        *(undefined1 (*) [16])(param_1 + 0x2b0) = auVar65;
        goto LAB_140a1252a;
      }
    }
LAB_140a12201:
    uVar10 = 0;
  }
  else {
    if (*(char *)(param_1 + 0x48a) != '\x01') {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_d0 ^ (ulonglong)auStack_398);
    }
    lVar12 = *param_2;
    if (*(int *)(lVar12 + 0xcec) == 0) goto LAB_140a12201;
    uVar11 = *(uint *)(lVar12 + 0xce8);
    uVar10 = 0;
    if (((int)uVar11 < 0) || (DAT_14c9647dc <= (int)uVar11)) goto LAB_140a12203;
    lVar9 = (ulonglong)((uVar11 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8);
    if ((lVar9 == 0) ||
       (((*(int *)(lVar9 + 0x10) != *(int *)(lVar12 + 0xcec) ||
         ((*(uint *)(lVar9 + 8) & 0x10200000) != 0)) || (*(longlong *)(lVar12 + 0xdc8) == 0))))
    goto LAB_140a12201;
    cVar15 = -(*(byte *)(lVar12 + 0xcc0) & 1);
    if (*(byte *)(param_1 + 0x488) != 0) {
      cVar15 = (char)(*(byte *)(lVar12 + 0xcc0) << 6) >> 7;
    }
    if (cVar15 == '\0') {
      fVar36 = 0.0;
LAB_140a1242a:
      uVar11 = *(uint *)(param_1 + 0x478);
      dVar35 = DAT_14c8464f0;
      dVar38 = DAT_14c8464e0;
      dVar72 = DAT_14c8464e8;
      if ((~uVar11 & 0x7fffffff) != 0) {
        lVar12 = param_2[6];
        lVar9 = lVar12 + 0x10;
        if (*(longlong *)(lVar12 + 0x20) != 0) {
          lVar9 = *(longlong *)(lVar12 + 0x20);
        }
        if ((*(uint *)(lVar9 + (ulonglong)(uVar11 >> 3 & 0x1ffc)) >> (uVar11 & 0x1f) & 1) != 0) {
          if ((int)uVar11 < 0) {
            uVar11 = (int)(uVar11 * 2) >> 1;
            lVar9 = -1;
            if ((-1 < (int)uVar11) && ((int)uVar11 < *(int *)(lVar12 + 0x88))) {
              piVar13 = (int *)((ulonglong)uVar11 * 4 + *(longlong *)(lVar12 + 0x80));
              goto LAB_140a1247c;
            }
          }
          else {
            piVar13 = (int *)(param_1 + 0x47c);
LAB_140a1247c:
            lVar9 = (longlong)*piVar13;
          }
          plVar22 = param_2 + 4;
          if (*(char *)(param_2[7] + lVar9) != '\0') {
            iVar16 = *(int *)(*(longlong *)(lVar12 + 0x90) + lVar9 * 4);
            lVar12 = (longlong)iVar16;
            if (lVar12 != -1) {
              if (*(char *)(param_2[7] + lVar12) == '\0') {
                FUN_1447d5d8e(plVar22,iVar16);
              }
              FUN_1449437a2(lVar9 * 0x60 + *plVar22,local_158,lVar12 * 0x60 + *plVar22);
              dVar35 = local_128;
              dVar38 = local_138;
              dVar72 = dStack_130;
              goto LAB_140a124bf;
            }
          }
          pdVar14 = (double *)(lVar9 * 0x60 + *plVar22);
          pdVar18 = local_158;
          for (lVar12 = 0xc; dVar35 = local_128, dVar38 = local_138, dVar72 = dStack_130,
              lVar12 != 0; lVar12 = lVar12 + -1) {
            *pdVar18 = *pdVar14;
            pdVar14 = pdVar14 + 1;
            pdVar18 = pdVar18 + 1;
          }
        }
      }
LAB_140a124bf:
      dVar42 = (double)fVar36;
      dVar62 = dVar35 + (dVar62 - dVar35) * dVar42;
      dVar58 = (dVar58 - dVar72) * dVar42 + dVar72;
      dVar57 = (dVar57 - dVar38) * dVar42 + dVar38;
      fVar66 = fVar36;
    }
    else {
      local_1d8._0_8_ = *(undefined8 *)(lVar12 + 0xce8);
      FUN_140a13ae4(*(longlong *)(lVar12 + 0xdc8),local_158,local_1d8,
                    *(undefined4 *)(lVar12 + 0xcc4 + (ulonglong)*(byte *)(param_1 + 0x488) * 4));
      if (local_f8 != '\x01') {
LAB_140a12415:
        fVar36 = 0.0;
        goto LAB_140a1242a;
      }
      dVar62 = local_128 * *(double *)(lVar12 + 0xce0);
      dVar58 = dStack_130 * *(double *)(lVar12 + 0xcd8);
      dVar57 = local_138 * *(double *)(lVar12 + 0xcd0);
      uVar10 = *(undefined8 *)(param_1 + 0x480);
      if ((char)param_2[0xf] == '\0') {
        FUN_144716af1(param_2[0xd]);
        *(undefined1 *)(param_2 + 0xf) = 1;
      }
      uVar11 = *(uint *)(param_2 + 0xe);
      lVar12 = param_2[0xd];
      iVar16 = (int)uVar10;
      iVar19 = (int)((ulonglong)uVar10 >> 0x20);
      if ((int)uVar11 < 1) {
        uVar21 = 0;
      }
      else {
        uVar21 = 0;
        uVar20 = uVar11;
        do {
          uVar1 = (uVar20 >> 1) + uVar21;
          uVar10 = *(undefined8 *)(lVar12 + (ulonglong)uVar1 * 0x10);
          iVar17 = (int)uVar10 - iVar16;
          if (iVar17 == 0) {
            iVar17 = (int)((ulonglong)uVar10 >> 0x20) - iVar19;
          }
          if (iVar17 < 0) {
            uVar21 = uVar1 + (uVar20 & 1);
          }
          bVar2 = 1 < uVar20;
          uVar20 = uVar20 >> 1;
        } while (bVar2);
      }
      fVar36 = 0.0;
      if ((int)uVar21 < (int)uVar11) {
        lVar9 = lVar12 + (ulonglong)uVar21 * 0x10;
        uVar10 = *(undefined8 *)(lVar12 + (ulonglong)uVar21 * 0x10);
        iVar16 = iVar16 - (int)uVar10;
        if (iVar16 == 0) {
          iVar16 = iVar19 - (int)((ulonglong)uVar10 >> 0x20);
        }
        if ((lVar9 != 0) && (-1 < iVar16)) {
          fVar36 = *(float *)(lVar9 + 8);
        }
      }
      fVar66 = 1.0;
      fVar36 = 1.0 - fVar36;
      if ((fVar36 < 1.0) && (fVar36 <= 0.0)) goto LAB_140a12415;
      if (fVar36 < 1.0) goto LAB_140a1242a;
    }
    *(double *)(param_1 + 0x280) = dVar57;
    *(double *)(param_1 + 0x288) = dVar58;
    *(double *)(param_1 + 0x290) = dVar62;
    *(float *)(param_1 + 0x1d0) = 1.0 - fVar66;
    *(float *)(param_1 + 0x1cc) = fVar66;
LAB_140a1252a:
    uVar10 = 1;
  }
LAB_140a12203:
  if ((local_d0 ^ (ulonglong)auStack_398) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar10;
}



// FUNCTION 140a13ae4 FUN_140a13ae4 body=482 status=ok
// SIG undefined FUN_140a13ae4(void)

undefined8 * FUN_140a13ae4(longlong param_1,undefined8 *param_2,uint *param_3,uint param_4)

{
  uint uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_3[1] != 0) {
    uVar1 = *param_3;
    uVar3 = 0;
    if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_140a13bca;
    plVar6 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if ((plVar6 != (longlong *)0x0) &&
       (((*(uint *)(plVar6 + 2) == param_3[1] && ((*(uint *)(plVar6 + 1) & 0x10200000) == 0)) &&
        (plVar6 = (longlong *)*plVar6, plVar6 != (longlong *)0x0)))) {
      cVar4 = (**(code **)(*plVar6 + 0xcf8))(plVar6);
      if ((cVar4 != '\0') && (*(int *)(param_1 + 0xa8) != *(int *)(param_1 + 0xd4))) {
        uVar2 = *(undefined8 *)param_3;
        lVar8 = param_1 + 0xd8;
        if (*(longlong *)(param_1 + 0xe0) != 0) {
          lVar8 = *(longlong *)(param_1 + 0xe0);
        }
        iVar5 = *(int *)(lVar8 + (ulonglong)
                                 (*(int *)(param_1 + 0xe8) - 1U &
                                 ((uint)((ulonglong)uVar2 >> 0x20) ^ (uint)uVar2)) * 4);
        if (iVar5 != -1) {
          lVar8 = *(longlong *)(param_1 + 0xa0);
          do {
            lVar9 = (longlong)iVar5 * 0x230;
            local_50 = *(undefined8 *)(lVar8 + lVar9);
            local_58 = uVar2;
            cVar4 = FUN_144717174(&local_50,&local_58);
            lVar8 = *(longlong *)(param_1 + 0xa0);
            if (cVar4 != '\0') {
              lVar7 = lVar8 + lVar9;
              if ((lVar7 != 0) && (lVar8 + lVar9 != -8)) {
                if (((int)param_4 < 0) || (*(int *)(lVar7 + 0x118) <= (int)param_4))
                goto LAB_140a13caf;
                plVar6 = (longlong *)(lVar7 + 0x110);
                goto LAB_140a13bb0;
              }
              break;
            }
            iVar5 = *(int *)(lVar8 + 0x228 + lVar9);
          } while (iVar5 != -1);
        }
      }
      if ((-1 < (int)param_4) &&
         ((int)param_4 < (int)plVar6[(longlong)(int)plVar6[0xe3] * 2 + 0xdb])) {
        plVar6 = plVar6 + (longlong)(int)plVar6[0xe3] * 2 + 0xda;
LAB_140a13bb0:
        puVar10 = (undefined8 *)((ulonglong)param_4 * 0x60 + *plVar6);
        puVar11 = param_2;
        for (lVar8 = 0xc; lVar8 != 0; lVar8 = lVar8 + -1) {
          *puVar11 = *puVar10;
          puVar10 = puVar10 + 1;
          puVar11 = puVar11 + 1;
        }
        uVar3 = 1;
        goto LAB_140a13bca;
      }
    }
  }
LAB_140a13caf:
  uVar3 = 0;
LAB_140a13bca:
  *(undefined1 *)(param_2 + 0xc) = uVar3;
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 140a13cc8 FUN_140a13cc8 body=12852 status=ok
// SIG undefined FUN_140a13cc8(void)

void FUN_140a13cc8(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  byte bVar8;
  byte bVar9;
  char cVar10;
  undefined8 *puVar11;
  uint *puVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  longlong *plVar15;
  undefined8 *puVar16;
  int iVar17;
  code *pcVar18;
  undefined ***pppuVar19;
  ulonglong uVar20;
  undefined8 *puVar21;
  int iVar22;
  longlong lVar23;
  longlong *plVar24;
  ulonglong uVar25;
  longlong lVar26;
  longlong lVar27;
  longlong lVar28;
  uint uVar29;
  longlong lVar30;
  ulonglong uVar31;
  ulonglong uVar32;
  bool bVar33;
  undefined1 auStack_198 [32];
  longlong local_178;
  longlong local_168;
  longlong *local_160;
  longlong *local_158;
  undefined8 *local_150;
  ulonglong local_148;
  longlong *local_140;
  longlong local_138;
  ulonglong local_130;
  undefined8 *local_128;
  longlong local_120;
  undefined8 *local_118;
  ulonglong local_110;
  longlong *local_108;
  undefined8 local_100;
  ulonglong local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined ***local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined **local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  ulonglong local_b8;
  undefined8 uStack_b0;
  undefined ***local_a8;
  undefined8 uStack_a0;
  undefined **local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_198;
  iVar17 = *(int *)(param_1 + 0x28);
  local_100 = param_2;
  if (iVar17 < 0) goto LAB_140a16d50;
  local_108 = (longlong *)(param_1 + 0x48);
  if (*(int *)(param_1 + 0x54) < iVar17) {
    FUN_1401b960e();
    iVar17 = *(int *)(param_1 + 0x28);
  }
  local_168 = param_1;
  if (0 < iVar17) {
    local_110 = param_1 + 0x3060;
    lVar30 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    local_160 = (longlong *)(lVar30 + 0x2b8);
    local_118 = (undefined8 *)0xc80000528bdb4a00;
    local_140 = (longlong *)0xc80000528bdb6680;
    local_120 = 0xc80000528bdb8300;
    local_128 = (undefined8 *)0xc80000528bdb9f80;
    local_130 = 0xc80000528bdbbc00;
    local_150 = (undefined8 *)(lVar30 + 0xea8);
    local_138 = -0x37ffffad7419e000;
    lVar30 = 0;
    do {
      uVar14 = *(undefined8 *)(param_1 + 0x18);
      lVar23 = *(longlong *)(*(longlong *)(param_1 + 0x20) + lVar30 * 8);
      iVar17 = *(int *)(param_1 + 0x50);
      *(uint *)(param_1 + 0x50) = iVar17 + 1U;
      if (*(uint *)(param_1 + 0x54) < iVar17 + 1U) {
        FUN_1472e84ae(local_108,iVar17);
      }
      lVar26 = *(longlong *)(param_1 + 0x48);
      lVar27 = (longlong)iVar17 * 0x260;
      *(longlong *)(lVar26 + lVar27) = param_1;
      *(ulonglong *)(lVar26 + 8 + lVar27) = local_110;
      *(undefined8 *)(lVar26 + 0x10 + lVar27) = uVar14;
      *(longlong *)(lVar26 + 0x18 + lVar27) = lVar23;
      *(undefined8 *)(lVar26 + 0x20 + lVar27) = *(undefined8 *)(lVar23 + 0x3108);
      *(int *)(lVar26 + 0x28 + lVar27) = (int)lVar30;
      *(longlong *)(lVar26 + 0x38 + lVar27) = lVar23;
      *(undefined ***)(lVar26 + 0x30 + lVar27) = &PTR_FUN_14a217cb0;
      *(longlong *)(lVar26 + 0x40 + lVar27) = lVar23;
      *(undefined8 *)(lVar26 + 0x80 + lVar27) = 0;
      *(undefined8 *)(lVar26 + 0x90 + lVar27) = 0;
      *(undefined8 *)(lVar26 + 0xc0 + lVar27) = 0;
      *(undefined8 *)(lVar26 + 0xd0 + lVar27) = 0;
      *(undefined1 *)(lVar26 + 0x100 + lVar27) = 0;
      puVar11 = (undefined8 *)(lVar26 + 0x48 + lVar27);
      *puVar11 = 0;
      puVar11[1] = 0;
      puVar11 = (undefined8 *)(lVar26 + 0x58 + lVar27);
      *puVar11 = 0;
      puVar11[1] = 0;
      puVar11 = (undefined8 *)(lVar26 + 0x68 + lVar27);
      *puVar11 = 0;
      puVar11[1] = 0;
      puVar11 = (undefined8 *)(lVar26 + 0x108 + lVar27);
      *puVar11 = 0;
      puVar11[1] = 0;
      puVar11 = (undefined8 *)(lVar26 + 0x118 + lVar27);
      *puVar11 = 0;
      puVar11[1] = 0;
      *(undefined4 *)(lVar26 + 0x128 + lVar27) = 0;
      *(wchar_t **)(lVar26 + 0x130 + lVar27) = L"OcclusionCullPipe";
      *(undefined4 *)(lVar26 + 0x138 + lVar27) = 0;
      *(undefined8 *)(lVar26 + 0x140 + lVar27) = 0;
      *(undefined8 *)(lVar26 + 0x150 + lVar27) = 0;
      *(undefined8 *)(lVar26 + 0x160 + lVar27) = 0;
      *(undefined8 *)(lVar26 + 0x170 + lVar27) = 0;
      *(undefined8 *)(lVar26 + 0x1a0 + lVar27) = 0;
      *(undefined8 *)(lVar26 + 0x1b0 + lVar27) = 0;
      *(undefined1 *)(lVar26 + 0x1e0 + lVar27) = 0;
      *(undefined4 *)(lVar26 + 0x208 + lVar27) = 0;
      puVar11 = (undefined8 *)(lVar26 + 0x1f8 + lVar27);
      *puVar11 = 0;
      puVar11[1] = 0;
      puVar11 = (undefined8 *)(lVar26 + 0x1e8 + lVar27);
      *puVar11 = 0;
      puVar11[1] = 0;
      *(wchar_t **)(lVar26 + 0x210 + lVar27) = L"RelevancePipe";
      *(undefined4 *)(lVar26 + 0x218 + lVar27) = 0;
      local_158 = (longlong *)lVar30;
      puVar11 = (undefined8 *)FUN_1448fe162(0xa8);
      *puVar11 = UE::Tasks::Private::FTaskBase::vftable;
      puVar11[1] = &DAT_100000001;
      puVar11[2] = 0;
      *(undefined4 *)(puVar11 + 3) = 0;
      *(undefined4 *)(puVar11 + 4) = 0xffffffff;
      puVar11[6] = 0;
      puVar11[7] = 0x100000000;
      *(undefined1 *)(puVar11 + 8) = 1;
      puVar11[0xe] = LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateDummy::vftable;
      puVar11[0xf] = 0;
      puVar11[0x10] = 0xe800000000000020;
      puVar11[0x12] = 0;
      puVar11[0x13] = 0x100000000;
      *(undefined2 *)(puVar11 + 0x14) = 0;
      LOCK();
      bVar33 = *(char *)(puVar11 + 8) == '\x01';
      if (bVar33) {
        *(char *)(puVar11 + 8) = '\0';
      }
      UNLOCK();
      if (!bVar33) {
        FUN_14008cdb0(puVar11 + 8);
      }
      *puVar11 = &PTR_FUN_149e1e2e0;
      if (*(code **)(puVar11[0xe] + 0x18) != FUN_144713626) {
        (**(code **)(puVar11[0xe] + 0x18))(puVar11 + 0xe,puVar11 + 9);
      }
      puVar11[0xe] = LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                     ::vftable;
      puVar11[9] = puVar11;
      puVar11[10] = puVar11;
      if (*local_160 == 0) {
        uVar14 = 0;
      }
      else {
        uVar14 = *(undefined8 *)(*local_160 + 0x30);
      }
      plVar15 = (longlong *)(lVar26 + lVar27);
      puVar11[0xf] = uVar14;
      puVar11[0x10] = local_118;
      *(undefined4 *)((longlong)puVar11 + 0x1c) = 2;
      plVar15[0x46] = (longlong)puVar11;
      puVar11 = (undefined8 *)FUN_1448fe162(0xa8);
      *puVar11 = UE::Tasks::Private::FTaskBase::vftable;
      puVar11[1] = &DAT_100000001;
      puVar11[2] = 0;
      *(undefined4 *)(puVar11 + 3) = 0;
      *(undefined4 *)(puVar11 + 4) = 0xffffffff;
      puVar11[6] = 0;
      puVar11[7] = 0x100000000;
      *(undefined1 *)(puVar11 + 8) = 1;
      puVar11[0xe] = LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateDummy::vftable;
      puVar11[0xf] = 0;
      puVar11[0x10] = 0xe800000000000020;
      puVar11[0x12] = 0;
      puVar11[0x13] = 0x100000000;
      *(undefined2 *)(puVar11 + 0x14) = 0;
      LOCK();
      bVar33 = *(char *)(puVar11 + 8) == '\x01';
      if (bVar33) {
        *(char *)(puVar11 + 8) = '\0';
      }
      UNLOCK();
      if (!bVar33) {
        FUN_14008cdb0(puVar11 + 8);
      }
      *puVar11 = &PTR_FUN_149e1e2e0;
      if (*(code **)(puVar11[0xe] + 0x18) != FUN_144713626) {
        (**(code **)(puVar11[0xe] + 0x18))(puVar11 + 0xe,puVar11 + 9);
      }
      puVar11[0xe] = LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                     ::vftable;
      puVar11[9] = puVar11;
      puVar11[10] = puVar11;
      if (*local_160 == 0) {
        uVar14 = 0;
      }
      else {
        uVar14 = *(undefined8 *)(*local_160 + 0x30);
      }
      puVar11[0xf] = uVar14;
      puVar11[0x10] = local_140;
      *(undefined4 *)((longlong)puVar11 + 0x1c) = 2;
      plVar15[0x47] = (longlong)puVar11;
      puVar11 = (undefined8 *)FUN_1448fe162(0xa8);
      *puVar11 = UE::Tasks::Private::FTaskBase::vftable;
      puVar11[1] = &DAT_100000001;
      puVar11[2] = 0;
      *(undefined4 *)(puVar11 + 3) = 0;
      *(undefined4 *)(puVar11 + 4) = 0xffffffff;
      puVar11[6] = 0;
      puVar11[7] = 0x100000000;
      *(undefined1 *)(puVar11 + 8) = 1;
      puVar11[0xe] = LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateDummy::vftable;
      puVar11[0xf] = 0;
      puVar11[0x10] = 0xe800000000000020;
      puVar11[0x12] = 0;
      puVar11[0x13] = 0x100000000;
      *(undefined2 *)(puVar11 + 0x14) = 0;
      LOCK();
      bVar33 = *(char *)(puVar11 + 8) == '\x01';
      if (bVar33) {
        *(char *)(puVar11 + 8) = '\0';
      }
      UNLOCK();
      if (!bVar33) {
        FUN_14008cdb0(puVar11 + 8);
      }
      *puVar11 = &PTR_FUN_149e1e2e0;
      if (*(code **)(puVar11[0xe] + 0x18) != FUN_144713626) {
        (**(code **)(puVar11[0xe] + 0x18))(puVar11 + 0xe,puVar11 + 9);
      }
      puVar11[0xe] = LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                     ::vftable;
      puVar11[9] = puVar11;
      puVar11[10] = puVar11;
      if (*local_160 == 0) {
        uVar14 = 0;
      }
      else {
        uVar14 = *(undefined8 *)(*local_160 + 0x30);
      }
      puVar11[0xf] = uVar14;
      puVar11[0x10] = local_120;
      *(undefined4 *)((longlong)puVar11 + 0x1c) = 2;
      plVar15[0x48] = (longlong)puVar11;
      puVar11 = (undefined8 *)FUN_1448fe162(0xa8);
      *puVar11 = UE::Tasks::Private::FTaskBase::vftable;
      puVar11[1] = &DAT_100000001;
      puVar11[2] = 0;
      *(undefined4 *)(puVar11 + 3) = 0;
      *(undefined4 *)(puVar11 + 4) = 0xffffffff;
      puVar11[6] = 0;
      puVar11[7] = 0x100000000;
      *(undefined1 *)(puVar11 + 8) = 1;
      puVar11[0xe] = LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateDummy::vftable;
      puVar11[0xf] = 0;
      puVar11[0x10] = 0xe800000000000020;
      puVar11[0x12] = 0;
      puVar11[0x13] = 0x100000000;
      *(undefined2 *)(puVar11 + 0x14) = 0;
      LOCK();
      bVar33 = *(char *)(puVar11 + 8) == '\x01';
      if (bVar33) {
        *(char *)(puVar11 + 8) = '\0';
      }
      UNLOCK();
      if (!bVar33) {
        FUN_14008cdb0(puVar11 + 8);
      }
      *puVar11 = &PTR_FUN_149e1e2e0;
      if (*(code **)(puVar11[0xe] + 0x18) != FUN_144713626) {
        (**(code **)(puVar11[0xe] + 0x18))(puVar11 + 0xe,puVar11 + 9);
      }
      puVar11[0xe] = LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                     ::vftable;
      puVar11[9] = puVar11;
      puVar11[10] = puVar11;
      if (*local_160 == 0) {
        uVar14 = 0;
      }
      else {
        uVar14 = *(undefined8 *)(*local_160 + 0x30);
      }
      puVar11[0xf] = uVar14;
      puVar11[0x10] = local_128;
      *(undefined4 *)((longlong)puVar11 + 0x1c) = 2;
      plVar15[0x49] = (longlong)puVar11;
      puVar11 = (undefined8 *)FUN_1448fe162(0xa8);
      *puVar11 = UE::Tasks::Private::FTaskBase::vftable;
      puVar11[1] = &DAT_100000001;
      puVar11[2] = 0;
      *(undefined4 *)(puVar11 + 3) = 0;
      *(undefined4 *)(puVar11 + 4) = 0xffffffff;
      puVar11[6] = 0;
      puVar11[7] = 0x100000000;
      *(undefined1 *)(puVar11 + 8) = 1;
      puVar11[0xe] = LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateDummy::vftable;
      puVar11[0xf] = 0;
      puVar11[0x10] = 0xe800000000000020;
      puVar11[0x12] = 0;
      puVar11[0x13] = 0x100000000;
      *(undefined2 *)(puVar11 + 0x14) = 0;
      LOCK();
      bVar33 = *(char *)(puVar11 + 8) == '\x01';
      if (bVar33) {
        *(char *)(puVar11 + 8) = '\0';
      }
      UNLOCK();
      if (!bVar33) {
        FUN_14008cdb0(puVar11 + 8);
      }
      *puVar11 = &PTR_FUN_149e1e2e0;
      if (*(code **)(puVar11[0xe] + 0x18) != FUN_144713626) {
        (**(code **)(puVar11[0xe] + 0x18))(puVar11 + 0xe,puVar11 + 9);
      }
      puVar11[0xe] = LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                     ::vftable;
      puVar11[9] = puVar11;
      puVar11[10] = puVar11;
      if (*local_160 == 0) {
        uVar14 = 0;
      }
      else {
        uVar14 = *(undefined8 *)(*local_160 + 0x30);
      }
      puVar11[0xf] = uVar14;
      puVar11[0x10] = local_130;
      *(undefined4 *)((longlong)puVar11 + 0x1c) = 2;
      plVar15[0x4a] = (longlong)puVar11;
      if ((plVar15[4] != 0) && (DAT_14c7609fc == '\x01')) {
        plVar24 = (longlong *)(*plVar15 + 0x40);
        if (*(int *)plVar15[1] == 1) {
          puVar12 = (uint *)*local_150;
          if (puVar12 != (uint *)0x0) goto LAB_140a144c4;
          while( true ) {
            FUN_14472e504();
            puVar12 = (uint *)*local_150;
LAB_140a144c4:
            puVar11 = (undefined8 *)(*(longlong *)(puVar12 + 0x10) + 7U & 0xfffffffffffffff8);
            uVar29 = puVar12[0x12];
            if (puVar11 + 0x14 <= puVar12 + 0x4000) break;
            while( true ) {
              *(uint **)(puVar12 + 0x10) = puVar12 + 0x4000;
              LOCK();
              uVar3 = *puVar12;
              *puVar12 = *puVar12 + uVar29 + 1;
              UNLOCK();
              if ((uVar3 ^ uVar29) != 0xffffffff) break;
              puVar12 = (uint *)*local_150;
              *puVar12 = 0xffffffff;
              *(uint **)(puVar12 + 0x10) = puVar12 + 0x16;
              puVar12[0x12] = 0;
              *local_150 = puVar12;
              puVar11 = (undefined8 *)((longlong)puVar12 + 0x5fU & 0xfffffffffffffff8);
              uVar29 = 0;
              if (puVar11 + 0x14 <= puVar12 + 0x4000) {
                uVar29 = 1;
                goto LAB_140a14546;
              }
            }
          }
          uVar29 = uVar29 + 1;
LAB_140a14546:
          *(undefined8 **)(puVar12 + 0x10) = puVar11 + 0x15;
          puVar12[0x12] = uVar29;
          *(int *)(puVar11 + -1) = ((int)puVar11 + -8) - (int)puVar12;
          *(undefined4 *)((longlong)puVar11 + -4) = 0xa0;
          puVar11[1] = 0;
          *puVar11 = &PTR_FUN_14a2f9858;
          lVar30 = *plVar24;
          do {
            puVar11[1] = lVar30;
            LOCK();
            lVar23 = *plVar24;
            bVar33 = lVar30 == lVar23;
            if (bVar33) {
              *plVar24 = (longlong)puVar11;
              lVar23 = lVar30;
            }
            UNLOCK();
            lVar30 = lVar23;
          } while (!bVar33);
          puVar21 = puVar11 + 2;
          FUN_1403fb00c(puVar21,plVar15);
          puVar11[2] = &PTR_FUN_14a2f9860;
          *(undefined4 *)(puVar11 + 0xc) = *(undefined4 *)(*(longlong *)(puVar11[6] + 8) + 0x68);
          puVar11[0xd] = 0;
          puVar11[0xe] = 0;
          puVar11[0xf] = 0;
          puVar11[0x10] = 0;
          puVar11[0x11] = 0;
          puVar13 = (undefined8 *)FUN_1448fe162(0xa8);
          *puVar13 = UE::Tasks::Private::FTaskBase::vftable;
          puVar13[1] = &DAT_100000001;
          puVar13[2] = 0;
          *(undefined4 *)(puVar13 + 3) = 0;
          *(undefined4 *)(puVar13 + 4) = 0xffffffff;
          puVar13[6] = 0;
          puVar13[7] = 0x100000000;
          *(undefined1 *)(puVar13 + 8) = 1;
          puVar13[0xe] = LowLevelTasks::
                         TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                         TTaskDelegateDummy::vftable;
          puVar13[0xf] = 0;
          puVar13[0x10] = 0xe800000000000020;
          puVar13[0x12] = 0;
          puVar13[0x13] = 0x100000000;
          *(undefined2 *)(puVar13 + 0x14) = 0;
          LOCK();
          bVar33 = *(char *)(puVar13 + 8) == '\x01';
          if (bVar33) {
            *(char *)(puVar13 + 8) = '\0';
          }
          UNLOCK();
          if (!bVar33) {
            FUN_14008cdb0(puVar13 + 8);
          }
          *puVar13 = &PTR_FUN_149e1e2e0;
          if (*(code **)(puVar13[0xe] + 0x18) != FUN_144713626) {
            (**(code **)(puVar13[0xe] + 0x18))(puVar13 + 0xe,puVar13 + 9);
          }
          puVar13[0xe] = LowLevelTasks::
                         TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                         TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                         ::vftable;
          puVar13[9] = puVar13;
          puVar13[10] = puVar13;
          if (*local_160 == 0) {
            uVar14 = 0;
          }
          else {
            uVar14 = *(undefined8 *)(*local_160 + 0x30);
          }
          puVar13[0xf] = uVar14;
          puVar13[0x10] = local_138;
          *(undefined4 *)((longlong)puVar13 + 0x1c) = 2;
          puVar11[0x12] = puVar13;
          *(undefined2 *)(puVar11 + 0x13) = 0;
          iVar17 = *(int *)(puVar11 + 0xc);
          if (iVar17 < 0) goto LAB_140a16d50;
          if (*(int *)((longlong)puVar11 + 0x84) < iVar17) {
            FUN_1447a0e40(puVar11 + 0xf);
          }
          FUN_1400e8656(puVar21);
          plVar15[0xd] = (longlong)puVar21;
          param_1 = local_168;
        }
        else {
          lVar30 = FUN_1472e30dc(plVar24,plVar15);
          plVar15[0xc] = lVar30;
          param_1 = local_168;
        }
      }
      if (*(int *)plVar15[1] == 1) {
        lVar30 = lVar26 + lVar27;
        FUN_14302e1ba(plVar15[0x49],plVar15 + 0x47);
        local_f8 = *(ulonglong *)(lVar30 + 0x80);
        uStack_b0 = *(undefined8 *)(lVar30 + 0x88);
        local_e8 = *(undefined ****)(lVar30 + 0x90);
        uStack_a0 = *(undefined8 *)(lVar30 + 0x98);
        local_98 = *(undefined ***)(lVar30 + 0xa0);
        uStack_90 = *(undefined8 *)(lVar30 + 0xa8);
        local_88 = *(undefined8 *)(lVar30 + 0xb0);
        uStack_80 = *(undefined8 *)(lVar30 + 0xb8);
        uVar6 = local_88;
        uVar7 = uStack_80;
        local_a8 = local_e8;
        uVar5 = uStack_a0;
        local_b8 = local_f8;
        uVar14 = uStack_b0;
        *(ulonglong *)(lVar30 + 0xb0) = CONCAT44(uStack_c4,local_c8);
        *(ulonglong *)(lVar30 + 0xb8) = CONCAT44(uStack_bc,uStack_c0);
        *(undefined ***)(lVar30 + 0xa0) = &PTR_LAB_14a2f9920;
        *(longlong **)(lVar30 + 0xa8) = plVar15;
        *(undefined8 *)(lVar30 + 0x90) = 0;
        *(ulonglong *)(lVar30 + 0x98) = CONCAT44(uStack_dc,uStack_e0);
        *(ulonglong *)(lVar30 + 0x80) = (ulonglong)FUN_14302e208;
        *(ulonglong *)(lVar30 + 0x88) = CONCAT44(uStack_ec,uStack_f0);
        uStack_b0._4_4_ = (uint)(uStack_b0 >> 0x20);
        uStack_a0._4_4_ = (undefined4)((ulonglong)uStack_a0 >> 0x20);
        local_88._4_4_ = (undefined4)((ulonglong)local_88 >> 0x20);
        uStack_80._4_4_ = (undefined4)((ulonglong)uStack_80 >> 0x20);
        local_c8 = (undefined4)local_88;
        uStack_c4 = local_88._4_4_;
        uStack_c0 = (undefined4)uStack_80;
        uStack_bc = uStack_80._4_4_;
        local_d8 = local_98;
        uStack_d0 = uStack_90;
        uStack_e0 = (undefined4)uStack_a0;
        uStack_dc = uStack_a0._4_4_;
        uStack_f0 = (uint)uStack_b0;
        uStack_ec = uStack_b0._4_4_;
        if (local_f8 != 0) {
          pppuVar19 = local_e8;
          if (local_e8 == (undefined ***)0x0) {
            pppuVar19 = &local_d8;
          }
          uStack_b0 = uVar14;
          uStack_a0 = uVar5;
          local_88 = uVar6;
          uStack_80 = uVar7;
          (*(code *)(*pppuVar19)[2])();
        }
        lVar30 = lVar26 + lVar27;
        local_f8 = *(ulonglong *)(lVar30 + 0xc0);
        uStack_b0 = *(undefined8 *)(lVar30 + 200);
        local_e8 = *(undefined ****)(lVar30 + 0xd0);
        uStack_a0 = *(undefined8 *)(lVar30 + 0xd8);
        local_98 = *(undefined ***)(lVar30 + 0xe0);
        uStack_90 = *(undefined8 *)(lVar30 + 0xe8);
        local_88 = *(undefined8 *)(lVar30 + 0xf0);
        uStack_80 = *(undefined8 *)(lVar30 + 0xf8);
        uVar6 = local_88;
        uVar7 = uStack_80;
        local_a8 = local_e8;
        uVar5 = uStack_a0;
        local_b8 = local_f8;
        uVar14 = uStack_b0;
        *(ulonglong *)(lVar30 + 0xf0) = CONCAT44(uStack_c4,local_c8);
        *(ulonglong *)(lVar30 + 0xf8) = CONCAT44(uStack_bc,uStack_c0);
        *(undefined ***)(lVar30 + 0xe0) = &PTR_LAB_14a2f9960;
        *(longlong **)(lVar30 + 0xe8) = plVar15;
        *(undefined8 *)(lVar30 + 0xd0) = 0;
        *(ulonglong *)(lVar30 + 0xd8) = CONCAT44(uStack_dc,uStack_e0);
        *(ulonglong *)(lVar30 + 0xc0) = (ulonglong)FUN_14302eb8a;
        *(ulonglong *)(lVar30 + 200) = CONCAT44(uStack_ec,uStack_f0);
        uStack_b0._4_4_ = (uint)(uStack_b0 >> 0x20);
        uStack_a0._4_4_ = (undefined4)((ulonglong)uStack_a0 >> 0x20);
        local_88._4_4_ = (undefined4)((ulonglong)local_88 >> 0x20);
        uStack_80._4_4_ = (undefined4)((ulonglong)uStack_80 >> 0x20);
        local_c8 = (undefined4)local_88;
        uStack_c4 = local_88._4_4_;
        uStack_c0 = (undefined4)uStack_80;
        uStack_bc = uStack_80._4_4_;
        local_d8 = local_98;
        uStack_d0 = uStack_90;
        uStack_e0 = (undefined4)uStack_a0;
        uStack_dc = uStack_a0._4_4_;
        uStack_f0 = (uint)uStack_b0;
        uStack_ec = uStack_b0._4_4_;
        if (local_f8 != 0) {
          pppuVar19 = local_e8;
          if (local_e8 == (undefined ***)0x0) {
            pppuVar19 = &local_d8;
          }
          uStack_b0 = uVar14;
          uStack_a0 = uVar5;
          local_88 = uVar6;
          uStack_80 = uVar7;
          (*(code *)(*pppuVar19)[2])();
        }
        LOCK();
        *(int *)(plVar15 + 0x27) = (int)plVar15[0x27] + 1;
        UNLOCK();
        lVar30 = lVar26 + lVar27;
        if ((*(char *)(plVar15[3] + 0x23f4) == '\x01') && (*(int *)(plVar15[3] + 0x1dd0) == 2)) {
          local_d8 = &PTR_LAB_14a2f9a10;
          pcVar18 = FUN_14302ffd0;
        }
        else {
          local_d8 = &PTR_LAB_14a2f9a30;
          pcVar18 = (code *)&LAB_1430300d8;
        }
        local_f8 = *(ulonglong *)(lVar30 + 0x160);
        uStack_b0 = *(undefined8 *)(lVar30 + 0x168);
        local_e8 = *(undefined ****)(lVar30 + 0x170);
        uStack_a0 = *(undefined8 *)(lVar30 + 0x178);
        local_98 = *(undefined ***)(lVar30 + 0x180);
        uStack_90 = *(undefined8 *)(lVar30 + 0x188);
        local_88 = *(undefined8 *)(lVar30 + 400);
        uStack_80 = *(undefined8 *)(lVar30 + 0x198);
        uVar6 = local_88;
        uVar7 = uStack_80;
        local_a8 = local_e8;
        uVar5 = uStack_a0;
        local_b8 = local_f8;
        uVar14 = uStack_b0;
        *(ulonglong *)(lVar30 + 400) = CONCAT44(uStack_c4,local_c8);
        *(ulonglong *)(lVar30 + 0x198) = CONCAT44(uStack_bc,uStack_c0);
        *(undefined ***)(lVar30 + 0x180) = local_d8;
        *(longlong **)(lVar30 + 0x188) = plVar15;
        *(undefined8 *)(lVar30 + 0x170) = 0;
        *(ulonglong *)(lVar30 + 0x178) = CONCAT44(uStack_dc,uStack_e0);
        *(ulonglong *)(lVar30 + 0x160) = (ulonglong)pcVar18;
        *(ulonglong *)(lVar30 + 0x168) = CONCAT44(uStack_ec,uStack_f0);
        uStack_b0._4_4_ = (uint)(uStack_b0 >> 0x20);
        uStack_a0._4_4_ = (undefined4)((ulonglong)uStack_a0 >> 0x20);
        local_88._4_4_ = (undefined4)((ulonglong)local_88 >> 0x20);
        uStack_80._4_4_ = (undefined4)((ulonglong)uStack_80 >> 0x20);
        local_c8 = (undefined4)local_88;
        uStack_c4 = local_88._4_4_;
        uStack_c0 = (undefined4)uStack_80;
        uStack_bc = uStack_80._4_4_;
        local_d8 = local_98;
        uStack_d0 = uStack_90;
        uStack_e0 = (undefined4)uStack_a0;
        uStack_dc = uStack_a0._4_4_;
        uStack_f0 = (uint)uStack_b0;
        uStack_ec = uStack_b0._4_4_;
        if (local_f8 != 0) {
          pppuVar19 = local_e8;
          if (local_e8 == (undefined ***)0x0) {
            pppuVar19 = &local_d8;
          }
          uStack_b0 = uVar14;
          uStack_a0 = uVar5;
          local_88 = uVar6;
          uStack_80 = uVar7;
          (*(code *)(*pppuVar19)[2])();
        }
        lVar26 = lVar26 + lVar27;
        if ((*(char *)(plVar15[3] + 0x23f4) == '\x01') && (*(int *)(plVar15[3] + 0x1dd0) == 2)) {
          local_d8 = &PTR_LAB_14a2f9a50;
          pcVar18 = FUN_143030130;
        }
        else {
          local_d8 = &PTR_LAB_14a2f9a70;
          pcVar18 = FUN_1430301da;
        }
        local_f8 = *(ulonglong *)(lVar26 + 0x1a0);
        uStack_b0 = *(ulonglong *)(lVar26 + 0x1a8);
        local_e8 = *(undefined ****)(lVar26 + 0x1b0);
        uStack_a0 = *(undefined8 *)(lVar26 + 0x1b8);
        local_98 = *(undefined ***)(lVar26 + 0x1c0);
        uStack_90 = *(undefined8 *)(lVar26 + 0x1c8);
        local_88 = *(undefined8 *)(lVar26 + 0x1d0);
        uStack_80 = *(undefined8 *)(lVar26 + 0x1d8);
        uVar5 = local_88;
        uVar6 = uStack_80;
        local_a8 = local_e8;
        uVar14 = uStack_a0;
        local_b8 = local_f8;
        uVar25 = uStack_b0;
        *(ulonglong *)(lVar26 + 0x1d0) = CONCAT44(uStack_c4,local_c8);
        *(ulonglong *)(lVar26 + 0x1d8) = CONCAT44(uStack_bc,uStack_c0);
        *(undefined ***)(lVar26 + 0x1c0) = local_d8;
        *(longlong **)(lVar26 + 0x1c8) = plVar15;
        *(undefined8 *)(lVar26 + 0x1b0) = 0;
        *(ulonglong *)(lVar26 + 0x1b8) = CONCAT44(uStack_dc,uStack_e0);
        *(ulonglong *)(lVar26 + 0x1a0) = (ulonglong)pcVar18;
        *(ulonglong *)(lVar26 + 0x1a8) = CONCAT44(uStack_ec,uStack_f0);
        uStack_b0._4_4_ = (uint)(uStack_b0 >> 0x20);
        uStack_a0._4_4_ = (undefined4)((ulonglong)uStack_a0 >> 0x20);
        local_88._4_4_ = (undefined4)((ulonglong)local_88 >> 0x20);
        uStack_80._4_4_ = (undefined4)((ulonglong)uStack_80 >> 0x20);
        local_c8 = (undefined4)local_88;
        uStack_c4 = local_88._4_4_;
        uStack_c0 = (undefined4)uStack_80;
        uStack_bc = uStack_80._4_4_;
        local_d8 = local_98;
        uStack_d0 = uStack_90;
        uStack_e0 = (undefined4)uStack_a0;
        uStack_dc = uStack_a0._4_4_;
        uStack_f0 = (uint)uStack_b0;
        uStack_ec = uStack_b0._4_4_;
        uStack_b0 = uVar25;
        uStack_a0 = uVar14;
        local_88 = uVar5;
        uStack_80 = uVar6;
        if (local_f8 != 0) {
          pppuVar19 = local_e8;
          if (local_e8 == (undefined ***)0x0) {
            pppuVar19 = &local_d8;
          }
          (*(code *)(*pppuVar19)[2])();
        }
        LOCK();
        *(int *)(plVar15 + 0x43) = (int)plVar15[0x43] + 1;
        UNLOCK();
      }
      FUN_14302e1ba(*(undefined8 *)(param_1 + 0x3010),plVar15 + 0x4a);
      FUN_14302e1ba(*(undefined8 *)(param_1 + 0x3020),plVar15 + 0x47);
      FUN_14302e1ba(*(undefined8 *)(param_1 + 0x3028),plVar15 + 0x48);
      FUN_14302e1ba(*(undefined8 *)(param_1 + 0x3030),plVar15 + 0x49);
      if (plVar15[4] != 0) {
        uVar14 = FUN_142fdadb4(plVar15[4],plVar15[3],*(undefined8 *)(param_1 + 0x18));
        *(undefined8 *)(plVar15[3] + 0x13698) = uVar14;
        if (*(longlong *)(plVar15[3] + 0x13698) != 0) {
          *(undefined1 *)(*(longlong *)(param_1 + 0x10) + 0x8a1) = 1;
        }
      }
      lVar30 = (longlong)local_158 + 1;
    } while (lVar30 < *(int *)(param_1 + 0x28));
  }
  local_140 = (longlong *)(param_1 + 0x3030);
  puVar11 = *(undefined8 **)(*(longlong *)(param_1 + 0x18) + 0x5648);
  if (puVar11 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar11 + 1) = *(int *)(puVar11 + 1) + 1;
    UNLOCK();
    lVar30 = *local_140;
    LOCK();
    *(int *)(lVar30 + 0xc) = *(int *)(lVar30 + 0xc) + 1;
    UNLOCK();
    cVar10 = FUN_1456bb142(puVar11 + 0x11,lVar30);
    if (cVar10 == '\0') {
      LOCK();
      *(int *)(lVar30 + 0xc) = *(int *)(lVar30 + 0xc) + -1;
      UNLOCK();
    }
    else {
      LOCK();
      *(int *)(puVar11 + 1) = *(int *)(puVar11 + 1) + 1;
      UNLOCK();
      FUN_1456bb1d4(lVar30 + 0x28,puVar11);
    }
    LOCK();
    piVar2 = (int *)(puVar11 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)*puVar11)(puVar11,1);
    }
  }
  puVar11 = *(undefined8 **)(*(longlong *)(param_1 + 0x18) + 0x5640);
  if (puVar11 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar11 + 1) = *(int *)(puVar11 + 1) + 1;
    UNLOCK();
    lVar30 = *(longlong *)(param_1 + 0x3038);
    LOCK();
    *(int *)(lVar30 + 0xc) = *(int *)(lVar30 + 0xc) + 1;
    UNLOCK();
    cVar10 = FUN_1456bb142(puVar11 + 0x11,lVar30);
    if (cVar10 == '\0') {
      LOCK();
      *(int *)(lVar30 + 0xc) = *(int *)(lVar30 + 0xc) + -1;
      UNLOCK();
    }
    else {
      LOCK();
      *(int *)(puVar11 + 1) = *(int *)(puVar11 + 1) + 1;
      UNLOCK();
      FUN_1456bb1d4(lVar30 + 0x28,puVar11);
    }
    LOCK();
    piVar2 = (int *)(puVar11 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)*puVar11)(puVar11,1);
    }
  }
  if (*(int *)(param_1 + 0x3060) == 1) {
    if (1 < *(int *)(param_1 + 0x28)) {
      if (*(char *)(**(longlong **)(param_1 + 0x20) + 0x23f4) == '\x01') {
        local_b8 = 0;
        uStack_b0 = 0;
        iVar17 = *(int *)(param_1 + 0x50);
        if ((longlong)iVar17 != 0) {
          lVar30 = *(longlong *)(param_1 + 0x48);
          lVar23 = 0;
          do {
            lVar26 = (longlong)(int)(uint)uStack_b0;
            uVar29 = (uint)uStack_b0 + 1;
            if (uStack_b0._4_4_ < uVar29) {
              uVar25 = uStack_b0 & 0xffffffff;
              uStack_b0._0_4_ = uVar29;
              FUN_14726fbcc(&local_b8,uVar25);
              uVar29 = (uint)uStack_b0;
            }
            uStack_b0._0_4_ = uVar29;
            uVar29 = (uint)uStack_b0;
            lVar27 = *(longlong *)(lVar30 + 0x238 + lVar23);
            *(longlong *)(local_b8 + lVar26 * 8) = lVar27;
            if (lVar27 != 0) {
              LOCK();
              *(int *)(lVar27 + 8) = *(int *)(lVar27 + 8) + 1;
              UNLOCK();
            }
            lVar26 = (longlong)(int)(uint)uStack_b0;
            uStack_b0._0_4_ = (uint)uStack_b0 + 1;
            if (uStack_b0._4_4_ < (uint)uStack_b0) {
              FUN_14726fbcc(&local_b8,uVar29);
            }
            lVar27 = *(longlong *)(lVar30 + 0x240 + lVar23);
            *(longlong *)(local_b8 + lVar26 * 8) = lVar27;
            if (lVar27 != 0) {
              LOCK();
              *(int *)(lVar27 + 8) = *(int *)(lVar27 + 8) + 1;
              UNLOCK();
            }
            lVar23 = lVar23 + 0x260;
          } while ((longlong)iVar17 * 0x260 - lVar23 != 0);
        }
        bVar9 = *(byte *)(param_1 + 0x3098);
        uVar25 = (ulonglong)bVar9;
        plVar15 = TlsGetValue(DAT_14c896140);
        if (plVar15 == (longlong *)0x0) {
          plVar15 = (longlong *)FUN_14001cc68(0x18,0x10);
          *plVar15 = 0;
          plVar15[1] = 0;
          *(undefined4 *)(plVar15 + 2) = 0;
          TlsSetValue(DAT_14c896140,plVar15);
        }
        plVar24 = (longlong *)plVar15[1];
        if (plVar24 == (longlong *)0x0) {
          plVar24 = (longlong *)*plVar15;
          if (plVar24 == (longlong *)0x0) {
            uVar29 = (uint)DAT_14c896180;
            uVar32 = DAT_14c896180;
            while (DAT_14c896180 = uVar32, local_f8 = uVar32, (uVar32 & 0x3ffffff) != 0) {
              local_148 = (uVar32 & 0xfffffffffc000000) + 0x4000000;
              if (local_148 >> 0x1a < uVar32 >> 0x1a) {
                FUN_14000f986(0x3a83126f);
              }
              uVar20 = (ulonglong)((uVar29 & 0x3ffffff) >> 0xe);
              uVar31 = (ulonglong)((uint)uVar32 & 0x3fff);
              local_148 = local_148 & 0xfffffffffc000000 |
                          (ulonglong)
                          *(uint *)(*(longlong *)(&DAT_14c833b00 + uVar20 * 8) + 0x10 +
                                   uVar31 * 0x18);
              LOCK();
              bVar33 = local_f8 == DAT_14c896180;
              uVar32 = local_148;
              if (!bVar33) {
                uVar32 = DAT_14c896180;
              }
              DAT_14c896180 = uVar32;
              UNLOCK();
              if (bVar33) {
                *(undefined4 *)(*(longlong *)(&DAT_14c833b00 + uVar20 * 8) + uVar31 * 0x18 + 0x10) =
                     0;
                plVar24 = *(longlong **)
                           (*(longlong *)(&DAT_14c833b00 + uVar20 * 8) + 8 +
                           (ulonglong)(uVar29 & 0x3fff) * 0x18);
                FUN_1447d080c(uVar29 & 0x3ffffff);
                plVar15[1] = (longlong)plVar24;
                param_1 = local_168;
                if (plVar24 == (longlong *)0x0) goto LAB_140a16a0a;
                goto LAB_140a16a47;
              }
              uVar29 = (uint)DAT_14c896180;
              uVar32 = DAT_14c896180;
            }
            plVar15[1] = 0;
LAB_140a16a0a:
            param_1 = local_168;
            puVar11 = (undefined8 *)FUN_14001cc68(0x10000,0);
            plVar15[1] = (longlong)puVar11;
            iVar17 = 0xff;
            do {
              puVar21 = puVar11 + 0x20;
              *puVar11 = puVar21;
              iVar17 = iVar17 + -1;
              puVar11 = puVar21;
            } while (iVar17 != 0);
            *puVar21 = 0;
            plVar24 = (longlong *)plVar15[1];
          }
          else {
            plVar15[1] = (longlong)plVar24;
            *plVar15 = 0;
          }
LAB_140a16a47:
          *(undefined4 *)(plVar15 + 2) = 0x100;
          iVar17 = 0x100;
        }
        else {
          iVar17 = (int)plVar15[2];
        }
        plVar15[1] = *plVar24;
        *(int *)(plVar15 + 2) = iVar17 + -1;
        *plVar24 = (longlong)UE::Tasks::Private::FTaskBase::vftable;
        plVar24[1] = (longlong)&DAT_100000002;
        plVar24[2] = 0;
        *(undefined4 *)(plVar24 + 3) = 0;
        *(undefined4 *)(plVar24 + 4) = 0xffffffff;
        plVar24[6] = 0;
        plVar24[7] = 0x100000000;
        *(undefined1 *)(plVar24 + 8) = 1;
        plVar24[0xe] = (longlong)
                       LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateDummy::vftable;
        plVar24[0xf] = 0;
        plVar24[0x10] = -0x17ffffffffffffe0;
        plVar24[0x12] = 0;
        plVar24[0x13] = 0x100000000;
        *(undefined2 *)(plVar24 + 0x14) = 0;
        LOCK();
        bVar33 = (char)plVar24[8] == '\x01';
        if (bVar33) {
          *(char *)(plVar24 + 8) = '\0';
        }
        UNLOCK();
        if (!bVar33) {
          FUN_14008cdb0(plVar24 + 8);
        }
        *plVar24 = (longlong)&PTR_FUN_14a2f9b78;
        if (*(code **)(plVar24[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(plVar24[0xe] + 0x18))(plVar24 + 0xe,plVar24 + 9);
        }
        plVar24[0xe] = (longlong)
                       LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        plVar24[9] = (longlong)plVar24;
        plVar24[10] = (longlong)plVar24;
        lVar30 = *(longlong *)
                  (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x2b8);
        if (lVar30 == 0) {
          uVar25 = 1;
          if (bVar9 != 6) {
            uVar25 = (ulonglong)bVar9;
          }
          lVar30 = 0;
        }
        else {
          if (bVar9 == 6) {
            uVar25 = *(ulonglong *)(lVar30 + 0x38) >> 0x3b;
          }
          lVar30 = *(longlong *)(lVar30 + 0x30);
        }
        plVar24[0xf] = lVar30;
        plVar24[0x10] = (uVar25 & 7) << 0x3b | 0xc00000528bd66400;
        *(undefined4 *)((longlong)plVar24 + 0x1c) = 0;
        plVar24[0x15] = param_1;
        *plVar24 = (longlong)&PTR_FUN_14a2f9b68;
        FUN_14726f3f0(plVar24,&local_b8,1);
        local_f8 = CONCAT71(local_f8._1_7_,1);
        FUN_1447439e4(plVar24);
        iVar17 = *(int *)(param_1 + 0x50);
        if ((longlong)iVar17 != 0) {
          lVar30 = *(longlong *)(param_1 + 0x48);
          lVar23 = 0;
          do {
            if ((*(int *)(*(longlong *)(lVar30 + 0x18 + lVar23) + 0x1dd0) == 1) &&
               (plVar15 = *(longlong **)(lVar30 + 0x150 + lVar23), plVar15 != plVar24)) {
              *(longlong **)(lVar30 + 0x150 + lVar23) = plVar24;
              if (plVar24 != (longlong *)0x0) {
                LOCK();
                *(int *)(plVar24 + 1) = (int)plVar24[1] + 1;
                UNLOCK();
              }
              if (plVar15 != (longlong *)0x0) {
                LOCK();
                plVar1 = plVar15 + 1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)*plVar1 == 0) {
                  (**(code **)*plVar15)(plVar15,1);
                }
              }
            }
            lVar23 = lVar23 + 0x260;
          } while ((longlong)iVar17 * 0x260 - lVar23 != 0);
        }
        if (plVar24 != (longlong *)0x0) {
          LOCK();
          plVar15 = plVar24 + 1;
          *(int *)plVar15 = (int)*plVar15 + -1;
          UNLOCK();
          if ((int)*plVar15 == 0) {
            (**(code **)*plVar24)(plVar24,1);
          }
        }
        FUN_14473400f(local_b8,uStack_b0 & 0xffffffff);
        FUN_140037cc8(&local_b8);
      }
      goto LAB_140a14f09;
    }
    if (*(int *)(param_1 + 0x28) != 1) goto LAB_140a14f09;
    puVar11 = (undefined8 *)
              (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0xea8);
    puVar12 = (uint *)*puVar11;
    if (puVar12 != (uint *)0x0) goto LAB_140a164ed;
    while( true ) {
      FUN_14472e504(puVar11);
      puVar12 = (uint *)*puVar11;
LAB_140a164ed:
      puVar21 = (undefined8 *)(*(longlong *)(puVar12 + 0x10) + 0xfU & 0xfffffffffffffff0);
      uVar29 = puVar12[0x12];
      if (puVar21 + 0x1c <= puVar12 + 0x4000) break;
      while( true ) {
        *(uint **)(puVar12 + 0x10) = puVar12 + 0x4000;
        LOCK();
        uVar3 = *puVar12;
        *puVar12 = *puVar12 + uVar29 + 1;
        UNLOCK();
        if ((uVar3 ^ uVar29) != 0xffffffff) break;
        puVar12 = (uint *)*puVar11;
        *puVar12 = 0xffffffff;
        *(uint **)(puVar12 + 0x10) = puVar12 + 0x16;
        puVar12[0x12] = 0;
        *puVar11 = puVar12;
        puVar21 = (undefined8 *)((longlong)puVar12 + 0x67U & 0xfffffffffffffff0);
        uVar29 = 0;
        if (puVar21 + 0x1c <= puVar12 + 0x4000) {
          uVar29 = 1;
          goto LAB_140a16569;
        }
      }
    }
    uVar29 = uVar29 + 1;
LAB_140a16569:
    *(undefined8 **)(puVar12 + 0x10) = puVar21 + 0x1d;
    puVar12[0x12] = uVar29;
    *(int *)(puVar21 + -1) = ((int)puVar21 + -8) - (int)puVar12;
    *(undefined4 *)((longlong)puVar21 + -4) = 0xe0;
    puVar21[1] = 0;
    *puVar21 = &PTR_FUN_14a2f9b88;
    lVar30 = *(longlong *)(param_1 + 0x40);
    do {
      puVar21[1] = lVar30;
      LOCK();
      lVar23 = *(longlong *)(param_1 + 0x40);
      bVar33 = lVar30 == lVar23;
      if (bVar33) {
        *(longlong *)(param_1 + 0x40) = (longlong)puVar21;
        lVar23 = lVar30;
      }
      UNLOCK();
      lVar30 = lVar23;
    } while (!bVar33);
    puVar21[2] = 0;
    puVar21[4] = 0;
    puVar21[6] = 0;
    puVar21[0xc] = 0;
    puVar21[0xe] = 0;
    *(undefined1 *)(puVar21 + 0x14) = 0;
    puVar21[0x15] = 0;
    puVar21[0x16] = 0;
    puVar21[0x17] = 0;
    puVar21[0x18] = 0;
    *(undefined4 *)(puVar21 + 0x19) = 0;
    puVar21[0x1a] = L"GatherDynamicMeshElements";
    *(undefined4 *)(puVar21 + 0x1b) = 0;
    *(undefined8 **)(param_1 + 0x58) = puVar21 + 2;
    local_f8 = puVar21[4];
    uStack_b0 = puVar21[5];
    local_e8 = (undefined ***)puVar21[6];
    uStack_a0 = puVar21[7];
    local_98 = (undefined **)puVar21[8];
    uStack_90 = puVar21[9];
    local_88 = puVar21[10];
    uStack_80 = puVar21[0xb];
    uVar6 = local_88;
    uVar7 = uStack_80;
    local_a8 = local_e8;
    uVar5 = uStack_a0;
    local_b8 = local_f8;
    uVar14 = uStack_b0;
    puVar21[10] = CONCAT44(uStack_c4,local_c8);
    puVar21[0xb] = CONCAT44(uStack_bc,uStack_c0);
    puVar21[8] = &PTR_LAB_14a2f9b90;
    puVar21[9] = param_1;
    puVar21[6] = 0;
    puVar21[7] = CONCAT44(uStack_dc,uStack_e0);
    puVar21[4] = &LAB_1430332c8;
    puVar21[5] = CONCAT44(uStack_ec,uStack_f0);
    uStack_b0._4_4_ = (uint)(uStack_b0 >> 0x20);
    uStack_a0._4_4_ = (undefined4)((ulonglong)uStack_a0 >> 0x20);
    local_88._4_4_ = (undefined4)((ulonglong)local_88 >> 0x20);
    uStack_80._4_4_ = (undefined4)((ulonglong)uStack_80 >> 0x20);
    local_c8 = (undefined4)local_88;
    uStack_c4 = local_88._4_4_;
    uStack_c0 = (undefined4)uStack_80;
    uStack_bc = uStack_80._4_4_;
    local_d8 = local_98;
    uStack_d0 = uStack_90;
    uStack_e0 = (undefined4)uStack_a0;
    uStack_dc = uStack_a0._4_4_;
    uStack_f0 = (uint)uStack_b0;
    uStack_ec = uStack_b0._4_4_;
    uStack_b0 = uVar14;
    uStack_a0 = uVar5;
    local_88 = uVar6;
    uStack_80 = uVar7;
    if (local_f8 != 0) {
      pppuVar19 = local_e8;
      if (local_e8 == (undefined ***)0x0) {
        pppuVar19 = &local_d8;
      }
      (*(code *)(*pppuVar19)[2])();
    }
    puVar11 = *(undefined8 **)(param_1 + 0x3038);
    puVar21 = (undefined8 *)**(longlong **)(param_1 + 0x58);
    if (puVar21 != puVar11) {
      **(longlong **)(param_1 + 0x58) = (longlong)puVar11;
      if (puVar11 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(puVar11 + 1) = *(int *)(puVar11 + 1) + 1;
        UNLOCK();
      }
      if (puVar21 != (undefined8 *)0x0) {
        LOCK();
        piVar2 = (int *)(puVar21 + 1);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)*puVar21)(puVar21,1);
        }
      }
    }
    puVar11 = (undefined8 *)FUN_1446fac86(0xa8);
    FUN_1447247dc(puVar11,0);
    *puVar11 = &PTR_FUN_149e00300;
    if (*(code **)(puVar11[0xe] + 0x18) != FUN_144713626) {
      (**(code **)(puVar11[0xe] + 0x18))(puVar11 + 0xe,puVar11 + 9);
    }
    puVar11[0xe] = LowLevelTasks::
                   TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                   TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                   ::vftable;
    puVar11[9] = puVar11;
    puVar11[10] = puVar11;
    lVar30 = *(longlong *)
              (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x2b8);
    if (lVar30 == 0) {
      uVar14 = 0;
    }
    else {
      uVar14 = *(undefined8 *)(lVar30 + 0x30);
    }
    puVar11[0xf] = uVar14;
    puVar11[0x10] = 0xc80000527800c400;
    *(undefined4 *)((longlong)puVar11 + 0x1c) = 2;
    puVar21 = *(undefined8 **)(param_1 + 0x3000);
    *(undefined8 **)(param_1 + 0x3000) = puVar11;
    if (puVar21 != (undefined8 *)0x0) {
      LOCK();
      piVar2 = (int *)(puVar21 + 1);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)*puVar21)(puVar21,1);
      }
    }
    lVar30 = *(longlong *)(param_1 + 0x58);
    local_f8 = *(ulonglong *)(lVar30 + 0x50);
    uStack_b0 = *(ulonglong *)(lVar30 + 0x58);
    local_e8 = *(undefined ****)(lVar30 + 0x60);
    uStack_a0 = *(undefined8 *)(lVar30 + 0x68);
    local_98 = *(undefined ***)(lVar30 + 0x70);
    uStack_90 = *(undefined8 *)(lVar30 + 0x78);
    local_88 = *(undefined8 *)(lVar30 + 0x80);
    uStack_80 = *(undefined8 *)(lVar30 + 0x88);
    uVar5 = local_88;
    uVar6 = uStack_80;
    local_a8 = local_e8;
    uVar14 = uStack_a0;
    local_b8 = local_f8;
    uVar25 = uStack_b0;
    *(ulonglong *)(lVar30 + 0x80) = CONCAT44(uStack_c4,local_c8);
    *(ulonglong *)(lVar30 + 0x88) = CONCAT44(uStack_bc,uStack_c0);
    *(undefined ***)(lVar30 + 0x70) = &PTR_LAB_14a2f9bb0;
    *(longlong *)(lVar30 + 0x78) = param_1;
    *(undefined8 *)(lVar30 + 0x60) = 0;
    *(ulonglong *)(lVar30 + 0x68) = CONCAT44(uStack_dc,uStack_e0);
    *(code **)(lVar30 + 0x50) = FUN_143033318;
    *(ulonglong *)(lVar30 + 0x58) = CONCAT44(uStack_ec,uStack_f0);
    uStack_b0._4_4_ = (uint)(uStack_b0 >> 0x20);
    uStack_a0._4_4_ = (undefined4)((ulonglong)uStack_a0 >> 0x20);
    local_88._4_4_ = (undefined4)((ulonglong)local_88 >> 0x20);
    uStack_80._4_4_ = (undefined4)((ulonglong)uStack_80 >> 0x20);
    local_c8 = (undefined4)local_88;
    uStack_c4 = local_88._4_4_;
    uStack_c0 = (undefined4)uStack_80;
    uStack_bc = uStack_80._4_4_;
    local_d8 = local_98;
    uStack_d0 = uStack_90;
    uStack_e0 = (undefined4)uStack_a0;
    uStack_dc = uStack_a0._4_4_;
    uStack_f0 = (uint)uStack_b0;
    uStack_ec = uStack_b0._4_4_;
    uStack_b0 = uVar25;
    uStack_a0 = uVar14;
    local_88 = uVar5;
    uStack_80 = uVar6;
    if (local_f8 != 0) {
      pppuVar19 = &local_d8;
      if (local_e8 != (undefined ***)0x0) {
        pppuVar19 = local_e8;
      }
      (*(code *)(*pppuVar19)[2])(pppuVar19);
    }
    LOCK();
    piVar2 = (int *)(*(longlong *)(param_1 + 0x58) + 200);
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  else {
LAB_140a14f09:
    puVar11 = (undefined8 *)
              (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0xea8);
    puVar12 = (uint *)*puVar11;
    if (puVar12 != (uint *)0x0) goto LAB_140a14f36;
    while( true ) {
      FUN_14472e504(puVar11);
      puVar12 = (uint *)*puVar11;
LAB_140a14f36:
      puVar21 = (undefined8 *)(*(longlong *)(puVar12 + 0x10) + 7U & 0xfffffffffffffff8);
      uVar29 = puVar12[0x12];
      if (puVar21 + 4 <= puVar12 + 0x4000) break;
      while( true ) {
        *(uint **)(puVar12 + 0x10) = puVar12 + 0x4000;
        LOCK();
        uVar3 = *puVar12;
        *puVar12 = *puVar12 + uVar29 + 1;
        UNLOCK();
        if ((uVar3 ^ uVar29) != 0xffffffff) break;
        puVar12 = (uint *)*puVar11;
        *puVar12 = 0xffffffff;
        *(uint **)(puVar12 + 0x10) = puVar12 + 0x16;
        puVar12[0x12] = 0;
        *puVar11 = puVar12;
        puVar21 = (undefined8 *)((longlong)puVar12 + 0x5fU & 0xfffffffffffffff8);
        uVar29 = 0;
        if (puVar21 + 4 <= puVar12 + 0x4000) {
          uVar29 = 1;
          goto LAB_140a14fac;
        }
      }
    }
    uVar29 = uVar29 + 1;
LAB_140a14fac:
    *(undefined8 **)(puVar12 + 0x10) = puVar21 + 5;
    puVar12[0x12] = uVar29;
    *(int *)(puVar21 + -1) = ((int)puVar21 + -8) - (int)puVar12;
    *(undefined4 *)((longlong)puVar21 + -4) = 0x20;
    puVar21[1] = 0;
    *puVar21 = &PTR_FUN_14a2f9bd0;
    lVar30 = *(longlong *)(param_1 + 0x40);
    do {
      puVar21[1] = lVar30;
      LOCK();
      lVar23 = *(longlong *)(param_1 + 0x40);
      bVar33 = lVar30 == lVar23;
      if (bVar33) {
        *(longlong *)(param_1 + 0x40) = (longlong)puVar21;
        lVar23 = lVar30;
      }
      UNLOCK();
      lVar30 = lVar23;
    } while (!bVar33);
    plVar15 = puVar21 + 2;
    puVar21[2] = 0;
    puVar21[3] = 0;
    *(longlong **)(param_1 + 0x60) = plVar15;
    uVar29 = *(uint *)(*(longlong *)(param_1 + 0x18) + 0x3338);
    iVar17 = *(int *)(puVar21 + 3);
    *(uint *)(puVar21 + 3) = iVar17 + uVar29;
    if ((uint)(*(int *)((longlong)puVar21 + 0x1c) - iVar17) < uVar29) {
      FUN_1472e852e(plVar15);
    }
    memset((void *)((longlong)iVar17 + *plVar15),0,(longlong)(int)uVar29);
  }
  uVar25 = 0;
  if ((DAT_14c761945 == '\x01') && ((DAT_14ca84e0d & 1) != 0)) {
    uVar29 = DAT_14c8335d8;
    if ((int)DAT_14c7609f8 < (int)DAT_14c8335d8) {
      uVar29 = DAT_14c7609f8;
    }
    uVar25 = 0;
    if (0 < (int)uVar29) {
      uVar25 = (ulonglong)uVar29;
    }
  }
  local_150 = *(undefined8 **)(param_1 + 0x10);
  uVar4 = *(undefined4 *)(local_150 + 0x82);
  *(undefined8 *)(param_1 + 0x68) = local_150[0x81];
  *(undefined4 *)(param_1 + 0x70) = uVar4;
  lVar30 = param_1 + 0x78;
  if (*(int *)(param_1 + 0x84) <= (int)uVar25) {
    FUN_141780146(lVar30,(int)uVar25 + 1);
  }
  iVar17 = *(int *)(param_1 + 0x80);
  if (-1 < iVar17) {
    local_158 = (longlong *)(param_1 + 0x88);
    local_120 = lVar30;
    if (*(int *)(param_1 + 0x94) < iVar17) {
      FUN_1400bd2dc(local_158);
    }
    plVar15 = local_150 + 0x12;
    puVar11 = (undefined8 *)
              (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0xea8);
    local_118 = local_150 + 0x13;
    plVar24 = (longlong *)0x0;
    local_110 = uVar25;
    do {
      puVar12 = (uint *)*puVar11;
      local_160 = plVar24;
      if (puVar12 != (uint *)0x0) goto LAB_140a15124;
      while( true ) {
        FUN_14472e504(puVar11);
        puVar12 = (uint *)*puVar11;
LAB_140a15124:
        puVar21 = (undefined8 *)(*(longlong *)(puVar12 + 0x10) + 0xfU & 0xfffffffffffffff0);
        uVar29 = puVar12[0x12];
        if (puVar21 + 0x1a8 <= puVar12 + 0x4000) break;
        while( true ) {
          *(uint **)(puVar12 + 0x10) = puVar12 + 0x4000;
          LOCK();
          uVar3 = *puVar12;
          *puVar12 = *puVar12 + uVar29 + 1;
          UNLOCK();
          if ((uVar3 ^ uVar29) != 0xffffffff) break;
          puVar12 = (uint *)*puVar11;
          *puVar12 = 0xffffffff;
          *(uint **)(puVar12 + 0x10) = puVar12 + 0x16;
          puVar12[0x12] = 0;
          *puVar11 = puVar12;
          puVar21 = (undefined8 *)((longlong)puVar12 + 0x67U & 0xfffffffffffffff0);
          uVar29 = 0;
          if (puVar21 + 0x1a8 <= puVar12 + 0x4000) {
            uVar29 = 1;
            goto LAB_140a151a2;
          }
        }
      }
      uVar29 = uVar29 + 1;
LAB_140a151a2:
      *(undefined8 **)(puVar12 + 0x10) = puVar21 + 0x1a9;
      puVar12[0x12] = uVar29;
      *(int *)(puVar21 + -1) = ((int)puVar21 + -8) - (int)puVar12;
      *(undefined4 *)((longlong)puVar21 + -4) = 0xd40;
      puVar21[1] = 0;
      *puVar21 = &PTR_FUN_14a2f9b60;
      lVar30 = *plVar15;
      do {
        puVar21[1] = lVar30;
        LOCK();
        lVar23 = *plVar15;
        bVar33 = lVar30 == lVar23;
        if (bVar33) {
          *plVar15 = (longlong)puVar21;
          lVar23 = lVar30;
        }
        UNLOCK();
        lVar30 = lVar23;
      } while (!bVar33);
      puVar21[2] = local_118;
      puVar21[3] = local_150[0x81];
      *(undefined4 *)(puVar21 + 4) = *(undefined4 *)(local_150 + 0x82);
      lVar30 = local_150[1];
      puVar21[5] = *(undefined8 *)(lVar30 + 0x3330);
      *(undefined4 *)(puVar21 + 6) = *(undefined4 *)(lVar30 + 0x3338);
      puVar21[9] = 0;
      puVar21[10] = 0x100000000;
      puVar21[0x16c] = 0;
      puVar21[0x16e] = 0x200000000;
      puVar21[0x170] = 0;
      puVar21[0x171] = 0;
      iVar17 = *(int *)((longlong)local_150 + 0x8a4);
      puVar21[0x177] = 0;
      puVar21[0x178] = 0x200000000;
      puVar21[0x172] = 0;
      puVar21[0x173] = 0;
      *(undefined4 *)(puVar21 + 0x174) = 0;
      puVar21[0x17a] = 0;
      puVar21[0x17b] = 0x200000000;
      puVar21[0x17e] = 0;
      puVar21[0x17f] = 0x200000000;
      puVar21[0x182] = 0;
      puVar21[0x183] = 0x200000000;
      puVar21[0x185] = 0;
      puVar21[0x186] = 0x200000000;
      puVar21[0x187] = 0;
      puVar21[0x188] = 0;
      puVar21[0x189] = 0;
      puVar21[0x18a] = 0;
      puVar21[0x18b] = 0;
      puVar21[0x18c] = 0;
      puVar21[0x18d] = 0;
      puVar21[0x18e] = 0;
      puVar21[399] = plVar15;
      puVar21[0x194] = 0;
      puVar21[0x192] = 0;
      puVar21[0x193] = 0;
      puVar21[400] = 0;
      puVar21[0x191] = 0;
      *(int *)(puVar21 + 0x195) = iVar17;
      *(undefined4 *)((longlong)puVar21 + 0xcac) = 3;
      bVar9 = DAT_14ca96500;
      if (iVar17 != 1) {
        if (iVar17 < 3) {
          bVar9 = 0;
        }
        else {
          lVar30 = (ulonglong)DAT_14ca85550 * 0x3c;
          bVar9 = 0;
          if ((*(longlong *)(&DAT_14ca814b0 + lVar30) != DAT_14ca81490) && (DAT_14ca85550 != 0xc)) {
            if ((*(byte *)((longlong)&DAT_14ca814d8 + lVar30 + 3) & 0x10) == 0) {
              bVar9 = 1;
            }
            else {
              bVar9 = (*(byte *)((longlong)&DAT_14ca814c8 + lVar30 + 3) & 0x20) >> 5;
            }
          }
        }
      }
      *(byte *)(puVar21 + 0x196) = bVar9;
      puVar21[0x199] = 0;
      puVar21[0x19a] = 0x200000000;
      uVar14 = FUN_14001cc68(0x308,0x10);
      FUN_14009016e(uVar14,~(-1 << ((byte)DAT_14c760da4 & 0x1f)),0);
      puVar21[0x19b] = uVar14;
      puVar21[0x19c] = uVar14;
      puVar21[0x19d] = 0;
      puVar21[0x19e] = 0;
      puVar21[0x19f] = uVar14;
      puVar21[0x1a0] = 0;
      puVar21[0x1a1] = 0;
      puVar21[0x1a2] = 0;
      puVar21[0x1a3] = 0;
      puVar21[0x1a4] = 0;
      puVar21[0x1a5] = 0;
      *(undefined4 *)(puVar21 + 0x1a6) = 0;
      puVar21[0x1a7] = L".\\Runtime/Renderer/Private\\SceneVisibilityPrivate.h(295)";
      iVar17 = *(int *)(puVar21 + 4);
      if (0 < (longlong)iVar17) {
        puVar13 = puVar21 + 7;
        uVar25 = (ulonglong)(iVar17 - 1);
        uVar32 = 0;
        uVar29 = 0;
        do {
          uVar29 = uVar29 | 1 << ((uint)uVar32 & 0x1f);
          lVar30 = puVar21[3];
          if (uVar25 == uVar32) {
            lVar23 = *(longlong *)(*(longlong *)(lVar30 + uVar25 * 8) + 8);
LAB_140a153fe:
            iVar22 = *(int *)(puVar21 + 10);
            *(uint *)(puVar21 + 10) = iVar22 + 1U;
            if (*(uint *)((longlong)puVar21 + 0x54) < iVar22 + 1U) {
              local_138 = lVar23;
              local_130 = uVar25;
              local_128 = puVar13;
              FUN_1472e80e0(puVar13,iVar22);
              puVar13 = local_128;
              lVar23 = local_138;
              uVar25 = local_130;
            }
            puVar16 = (undefined8 *)puVar21[9];
            if ((undefined8 *)puVar21[9] == (undefined8 *)0x0) {
              puVar16 = puVar13;
            }
            puVar16[(longlong)iVar22 * 2] = lVar23;
            *(char *)(puVar16 + (longlong)iVar22 * 2 + 1) = (char)uVar29;
            uVar29 = 0;
          }
          else {
            lVar23 = *(longlong *)(*(longlong *)(lVar30 + uVar32 * 8) + 8);
            if (lVar23 != *(longlong *)(*(longlong *)(lVar30 + 8 + uVar32 * 8) + 8))
            goto LAB_140a153fe;
          }
          uVar32 = uVar32 + 1;
        } while ((longlong)iVar17 != uVar32);
        uVar14 = puVar21[0x19b];
      }
      puVar13 = puVar21 + 0xc;
      FUN_14002049c(uVar14,1);
      iVar22 = *(int *)(puVar21 + 4);
      iVar17 = *(int *)(puVar21 + 0x16e);
      if (iVar17 < iVar22) {
        *(int *)(puVar21 + 0x16e) = iVar22;
        if ((uint)(*(int *)((longlong)puVar21 + 0xb74) - iVar17) < (uint)(iVar22 - iVar17)) {
          FUN_1472e81e2(puVar13,iVar17);
        }
        puVar16 = (undefined8 *)puVar21[0x16c];
        if ((undefined8 *)puVar21[0x16c] == (undefined8 *)0x0) {
          puVar16 = puVar13;
        }
        FUN_1430328e6(puVar16 + (longlong)iVar17 * 0xb0,iVar22 - iVar17);
      }
      else {
        if (iVar22 < 0) goto LAB_140a16e82;
        if (iVar22 < iVar17) {
          FUN_1472e8308(puVar13,iVar22,iVar17 - iVar22);
          FUN_1472e8382(puVar13);
        }
      }
      puVar21[0x194] = puVar21[0x19b];
      puVar21[0x192] = puVar21 + 0x19c;
      puVar21[0x191] = puVar21 + 0x19f;
      puVar21[0x193] = &DAT_14ca475a8;
      if (0 < *(int *)(puVar21 + 4)) {
        lVar30 = 0;
        lVar23 = 0;
        do {
          puVar16 = (undefined8 *)puVar21[0x16c];
          if ((undefined8 *)puVar21[0x16c] == (undefined8 *)0x0) {
            puVar16 = puVar13;
          }
          lVar26 = *(longlong *)(puVar21[3] + lVar23 * 8);
          local_178 = lVar26 + 0x13b98;
          FUN_144b2707e(puVar21 + 0x172,lVar26,(longlong)puVar16 + lVar30,
                        (longlong)puVar16 + lVar30 + 0x10);
          lVar23 = lVar23 + 1;
          lVar30 = lVar30 + 0x580;
        } while (lVar23 < *(int *)(puVar21 + 4));
      }
      lVar30 = local_168;
      iVar17 = *(int *)(local_168 + 0x80);
      *(uint *)(local_168 + 0x80) = iVar17 + 1U;
      if (*(uint *)(local_168 + 0x84) < iVar17 + 1U) {
        FUN_1472e8428(local_120,iVar17);
      }
      uVar25 = local_110;
      *(undefined8 **)(*(longlong *)(lVar30 + 0x78) + (longlong)iVar17 * 8) = puVar21 + 2;
      iVar17 = *(int *)(lVar30 + 0x90);
      *(uint *)(lVar30 + 0x90) = iVar17 + 1U;
      if (*(uint *)(lVar30 + 0x94) < iVar17 + 1U) {
        FUN_141780272(local_158,iVar17);
      }
      lVar23 = local_168;
      *(undefined8 *)(*local_158 + (longlong)iVar17 * 8) = puVar21[0x19b];
      plVar24 = (longlong *)(ulonglong)((int)local_160 + 1);
    } while ((int)local_160 != (int)uVar25);
    lVar26 = lVar30 + 0xa0;
    iVar22 = *(int *)(lVar30 + 0x28);
    iVar17 = *(int *)(lVar30 + 0x2fc8);
    if (iVar17 < iVar22) {
      *(int *)(lVar30 + 0x2fc8) = iVar22;
      if ((uint)(*(int *)(lVar30 + 0x2fcc) - iVar17) < (uint)(iVar22 - iVar17)) {
        FUN_1472e8584(lVar26,iVar17);
      }
      if (*(longlong *)(lVar30 + 0x2fc0) != 0) {
        lVar26 = *(longlong *)(lVar30 + 0x2fc0);
      }
      FUN_143033618((longlong)iVar17 * 0xbc8 + lVar26,iVar22 - iVar17);
      lVar23 = lVar30;
    }
    else {
      if (iVar22 < 0) {
LAB_140a16e82:
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(iVar22);
      }
      if (iVar22 < iVar17) {
        FUN_1472e86a0(lVar26,iVar22,iVar17 - iVar22);
        FUN_1472e871a(lVar26);
      }
    }
    bVar9 = *(byte *)(lVar23 + 0x3064);
    plVar15 = TlsGetValue(DAT_14c896140);
    if (plVar15 == (longlong *)0x0) {
      plVar15 = (longlong *)FUN_14001cc68(0x18,0x10);
      *plVar15 = 0;
      plVar15[1] = 0;
      *(undefined4 *)(plVar15 + 2) = 0;
      TlsSetValue(DAT_14c896140,plVar15);
    }
    plVar24 = (longlong *)plVar15[1];
    if (plVar24 == (longlong *)0x0) {
      plVar24 = (longlong *)*plVar15;
      if (plVar24 == (longlong *)0x0) {
        uVar29 = (uint)DAT_14c896180;
        uVar25 = DAT_14c896180;
        while (DAT_14c896180 = uVar25, local_b8 = uVar25, (uVar25 & 0x3ffffff) != 0) {
          local_f8 = (uVar25 & 0xfffffffffc000000) + 0x4000000;
          if (local_f8 >> 0x1a < uVar25 >> 0x1a) {
            FUN_14000f986(0x3a83126f);
          }
          uVar32 = (ulonglong)((uVar29 & 0x3ffffff) >> 0xe);
          uVar20 = (ulonglong)((uint)uVar25 & 0x3fff);
          local_f8 = local_f8 & 0xfffffffffc000000 |
                     (ulonglong)
                     *(uint *)(*(longlong *)(&DAT_14c833b00 + uVar32 * 8) + 0x10 + uVar20 * 0x18);
          LOCK();
          bVar33 = local_b8 == DAT_14c896180;
          uVar25 = local_f8;
          if (!bVar33) {
            uVar25 = DAT_14c896180;
          }
          DAT_14c896180 = uVar25;
          UNLOCK();
          if (bVar33) {
            *(undefined4 *)(*(longlong *)(&DAT_14c833b00 + uVar32 * 8) + uVar20 * 0x18 + 0x10) = 0;
            plVar24 = *(longlong **)
                       (*(longlong *)(&DAT_14c833b00 + uVar32 * 8) + 8 +
                       (ulonglong)(uVar29 & 0x3fff) * 0x18);
            FUN_1447d080c(uVar29 & 0x3ffffff);
            plVar15[1] = (longlong)plVar24;
            lVar23 = local_168;
            if (plVar24 == (longlong *)0x0) goto LAB_140a1586b;
            goto LAB_140a158a8;
          }
          uVar29 = (uint)DAT_14c896180;
          uVar25 = DAT_14c896180;
        }
        plVar15[1] = 0;
LAB_140a1586b:
        lVar23 = local_168;
        puVar11 = (undefined8 *)FUN_14001cc68(0x10000,0);
        plVar15[1] = (longlong)puVar11;
        iVar17 = 0xff;
        do {
          puVar21 = puVar11 + 0x20;
          *puVar11 = puVar21;
          iVar17 = iVar17 + -1;
          puVar11 = puVar21;
        } while (iVar17 != 0);
        *puVar21 = 0;
        plVar24 = (longlong *)plVar15[1];
      }
      else {
        plVar15[1] = (longlong)plVar24;
        *plVar15 = 0;
      }
LAB_140a158a8:
      *(undefined4 *)(plVar15 + 2) = 0x100;
      iVar17 = 0x100;
    }
    else {
      iVar17 = (int)plVar15[2];
    }
    plVar15[1] = *plVar24;
    *(int *)(plVar15 + 2) = iVar17 + -1;
    *plVar24 = (longlong)UE::Tasks::Private::FTaskBase::vftable;
    plVar24[1] = (longlong)&DAT_100000002;
    plVar24[2] = 0;
    *(undefined4 *)(plVar24 + 3) = 0;
    *(undefined4 *)(plVar24 + 4) = 0xffffffff;
    plVar24[6] = 0;
    plVar24[7] = 0x100000000;
    *(undefined1 *)(plVar24 + 8) = 1;
    plVar24[0xe] = (longlong)
                   LowLevelTasks::
                   TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                   TTaskDelegateDummy::vftable;
    plVar24[0xf] = 0;
    plVar24[0x10] = -0x17ffffffffffffe0;
    plVar24[0x12] = 0;
    plVar24[0x13] = 0x100000000;
    *(undefined2 *)(plVar24 + 0x14) = 0;
    LOCK();
    bVar33 = (char)plVar24[8] == '\x01';
    if (bVar33) {
      *(char *)(plVar24 + 8) = '\0';
    }
    UNLOCK();
    if (!bVar33) {
      FUN_14008cdb0(plVar24 + 8);
    }
    *plVar24 = (longlong)&PTR_FUN_14a2f9be8;
    if (*(code **)(plVar24[0xe] + 0x18) != FUN_144713626) {
      (**(code **)(plVar24[0xe] + 0x18))(plVar24 + 0xe,plVar24 + 9);
    }
    plVar24[0xe] = (longlong)
                   LowLevelTasks::
                   TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                   TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                   ::vftable;
    plVar24[9] = (longlong)plVar24;
    plVar24[10] = (longlong)plVar24;
    lVar30 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    lVar26 = *(longlong *)(lVar30 + 0x2b8);
    if (lVar26 == 0) {
      bVar8 = 1;
      if (bVar9 != 6) {
        bVar8 = bVar9;
      }
      bVar9 = bVar8;
      lVar26 = 0;
    }
    else {
      if (bVar9 == 6) {
        bVar9 = (byte)((ulonglong)*(undefined8 *)(lVar26 + 0x38) >> 0x3b);
      }
      lVar26 = *(longlong *)(lVar26 + 0x30);
    }
    plVar24[0xf] = lVar26;
    plVar24[0x10] = (ulonglong)(bVar9 & 7) << 0x3b | 0xc00000528bd68b80;
    *(undefined4 *)((longlong)plVar24 + 0x1c) = 0;
    plVar24[0x15] = lVar23;
    *plVar24 = (longlong)&PTR_FUN_14a2f9bd8;
    local_b8 = CONCAT71(local_b8._1_7_,1);
    FUN_1447439e4(plVar24);
    if (plVar24 != (longlong *)0x0) {
      lVar26 = *(longlong *)(lVar23 + 0x3010);
      LOCK();
      *(int *)(lVar26 + 0xc) = *(int *)(lVar26 + 0xc) + 1;
      UNLOCK();
      cVar10 = FUN_1456bb142(plVar24 + 0x11,lVar26);
      if (cVar10 == '\0') {
        LOCK();
        *(int *)(lVar26 + 0xc) = *(int *)(lVar26 + 0xc) + -1;
        UNLOCK();
      }
      else {
        LOCK();
        *(int *)(plVar24 + 1) = (int)plVar24[1] + 1;
        UNLOCK();
        FUN_1456bb1d4(lVar26 + 0x28,plVar24);
      }
      LOCK();
      plVar15 = plVar24 + 1;
      *(int *)plVar15 = (int)*plVar15 + -1;
      UNLOCK();
      if ((int)*plVar15 == 0) {
        (**(code **)*plVar24)(plVar24,1);
      }
    }
    plVar15 = (longlong *)(lVar23 + 0x3010);
    if (*(int *)(lVar23 + 0x3060) == 1) {
      FUN_142fe07b6(*(undefined8 *)(lVar23 + 0x10),*(undefined8 *)(lVar23 + 8));
      lVar26 = *(longlong *)(lVar23 + 0x48);
      if ((*(char *)(**(longlong **)(lVar23 + 0x20) + 0x23f4) == '\x01') &&
         (iVar17 = *(int *)(lVar23 + 0x50), (longlong)iVar17 != 0)) {
        iVar22 = *(int *)(**(longlong **)(lVar23 + 0x20) + 0x1dd8);
        lVar27 = 0;
        do {
          if (*(int *)(*(longlong *)(lVar26 + 0x18 + lVar27) + 0x1dd0) == 2) {
            lVar28 = *local_108 + (longlong)iVar22 * 0x260;
            *(longlong *)(lVar26 + 0x220 + lVar27) = lVar28 + 0x150;
            LOCK();
            piVar2 = (int *)(lVar28 + 0x218);
            *piVar2 = *piVar2 + 1;
            UNLOCK();
          }
          lVar27 = lVar27 + 0x260;
        } while ((longlong)iVar17 * 0x260 - lVar27 != 0);
        lVar26 = *local_108;
      }
      local_160 = (longlong *)(lVar30 + 0x2b8);
      local_158 = plVar15;
      if ((longlong)*(int *)(lVar23 + 0x50) != 0) {
        lVar30 = (longlong)*(int *)(lVar23 + 0x50) * 0x260 + lVar26;
        do {
          if (*(longlong *)(lVar26 + 0x68) != 0) {
            FUN_1401f5e84(*(longlong *)(lVar26 + 0x68),*(undefined8 *)(lVar23 + 8));
          }
          bVar9 = *(byte *)(lVar23 + 0x3064);
          plVar15 = TlsGetValue(DAT_14c896140);
          if (plVar15 == (longlong *)0x0) {
            plVar15 = (longlong *)FUN_14001cc68(0x18,0x10);
            *plVar15 = 0;
            plVar15[1] = 0;
            *(undefined4 *)(plVar15 + 2) = 0;
            TlsSetValue(DAT_14c896140,plVar15);
          }
          plVar24 = (longlong *)plVar15[1];
          if (plVar24 == (longlong *)0x0) {
            plVar24 = (longlong *)*plVar15;
            if (plVar24 == (longlong *)0x0) {
              uVar29 = (uint)DAT_14c896180;
              uVar25 = DAT_14c896180;
              while (DAT_14c896180 = uVar25, local_b8 = uVar25, (uVar25 & 0x3ffffff) != 0) {
                local_f8 = (uVar25 & 0xfffffffffc000000) + 0x4000000;
                if (local_f8 >> 0x1a < uVar25 >> 0x1a) {
                  FUN_14000f986(0x3a83126f);
                }
                uVar32 = (ulonglong)((uVar29 & 0x3ffffff) >> 0xe);
                uVar20 = (ulonglong)((uint)uVar25 & 0x3fff);
                local_f8 = local_f8 & 0xfffffffffc000000 |
                           (ulonglong)
                           *(uint *)(*(longlong *)(&DAT_14c833b00 + uVar32 * 8) + 0x10 +
                                    uVar20 * 0x18);
                LOCK();
                bVar33 = local_b8 == DAT_14c896180;
                uVar25 = local_f8;
                if (!bVar33) {
                  uVar25 = DAT_14c896180;
                }
                DAT_14c896180 = uVar25;
                UNLOCK();
                if (bVar33) {
                  *(undefined4 *)(*(longlong *)(&DAT_14c833b00 + uVar32 * 8) + uVar20 * 0x18 + 0x10)
                       = 0;
                  plVar24 = *(longlong **)
                             (*(longlong *)(&DAT_14c833b00 + uVar32 * 8) + 8 +
                             (ulonglong)(uVar29 & 0x3fff) * 0x18);
                  FUN_1447d080c(uVar29 & 0x3ffffff);
                  plVar15[1] = (longlong)plVar24;
                  lVar23 = local_168;
                  if (plVar24 == (longlong *)0x0) goto LAB_140a15ced;
                  goto LAB_140a15d28;
                }
                uVar29 = (uint)DAT_14c896180;
                uVar25 = DAT_14c896180;
              }
              plVar15[1] = 0;
LAB_140a15ced:
              lVar23 = local_168;
              puVar11 = (undefined8 *)FUN_14001cc68(0x10000,0);
              plVar15[1] = (longlong)puVar11;
              iVar17 = 0xff;
              do {
                puVar21 = puVar11 + 0x20;
                *puVar11 = puVar21;
                iVar17 = iVar17 + -1;
                puVar11 = puVar21;
              } while (iVar17 != 0);
              *puVar21 = 0;
              plVar24 = (longlong *)plVar15[1];
            }
            else {
              plVar15[1] = (longlong)plVar24;
              *plVar15 = 0;
            }
LAB_140a15d28:
            *(undefined4 *)(plVar15 + 2) = 0x100;
            iVar17 = 0x100;
          }
          else {
            iVar17 = (int)plVar15[2];
          }
          plVar15[1] = *plVar24;
          *(int *)(plVar15 + 2) = iVar17 + -1;
          *plVar24 = (longlong)UE::Tasks::Private::FTaskBase::vftable;
          plVar24[1] = (longlong)&DAT_100000002;
          plVar24[2] = 0;
          *(undefined4 *)(plVar24 + 3) = 0;
          *(undefined4 *)(plVar24 + 4) = 0xffffffff;
          plVar24[6] = 0;
          plVar24[7] = 0x100000000;
          *(undefined1 *)(plVar24 + 8) = 1;
          plVar24[0xe] = (longlong)
                         LowLevelTasks::
                         TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                         TTaskDelegateDummy::vftable;
          plVar24[0xf] = 0;
          plVar24[0x10] = -0x17ffffffffffffe0;
          plVar24[0x12] = 0;
          plVar24[0x13] = 0x100000000;
          *(undefined2 *)(plVar24 + 0x14) = 0;
          LOCK();
          bVar33 = (char)plVar24[8] == '\x01';
          if (bVar33) {
            *(char *)(plVar24 + 8) = '\0';
          }
          UNLOCK();
          if (!bVar33) {
            FUN_14008cdb0(plVar24 + 8);
          }
          *plVar24 = (longlong)&PTR_FUN_14a2f9c08;
          if (*(code **)(plVar24[0xe] + 0x18) != FUN_144713626) {
            (**(code **)(plVar24[0xe] + 0x18))(plVar24 + 0xe,plVar24 + 9);
          }
          plVar24[0xe] = (longlong)
                         LowLevelTasks::
                         TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                         TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                         ::vftable;
          plVar24[9] = (longlong)plVar24;
          plVar24[10] = (longlong)plVar24;
          lVar27 = *local_160;
          if (lVar27 == 0) {
            if (bVar9 == 6) {
              bVar9 = 1;
            }
            lVar27 = 0;
          }
          else {
            if (bVar9 == 6) {
              bVar9 = (byte)((ulonglong)*(undefined8 *)(lVar27 + 0x38) >> 0x3b);
            }
            lVar27 = *(longlong *)(lVar27 + 0x30);
          }
          plVar24[0xf] = lVar27;
          plVar24[0x10] = (ulonglong)(bVar9 & 7) << 0x3b | 0xc00000528bd6a600;
          *(undefined4 *)((longlong)plVar24 + 0x1c) = 0;
          plVar24[0x15] = lVar26;
          *plVar24 = (longlong)&PTR_FUN_14a2f9bf8;
          FUN_1400e88c2(plVar24,local_100);
          local_b8 = CONCAT71(local_b8._1_7_,1);
          FUN_1447439e4(plVar24);
          if (plVar24 != (longlong *)0x0) {
            lVar27 = *(longlong *)(lVar23 + 0x3018);
            LOCK();
            *(int *)(lVar27 + 0xc) = *(int *)(lVar27 + 0xc) + 1;
            UNLOCK();
            cVar10 = FUN_1456bb142(plVar24 + 0x11);
            if (cVar10 == '\0') {
              LOCK();
              *(int *)(lVar27 + 0xc) = *(int *)(lVar27 + 0xc) + -1;
              UNLOCK();
            }
            else {
              LOCK();
              *(int *)(plVar24 + 1) = (int)plVar24[1] + 1;
              UNLOCK();
              FUN_1456bb1d4(lVar27 + 0x28);
            }
            LOCK();
            plVar15 = plVar24 + 1;
            *(int *)plVar15 = (int)*plVar15 + -1;
            UNLOCK();
            if ((int)*plVar15 == 0) {
              (**(code **)*plVar24)(plVar24);
            }
          }
          lVar26 = lVar26 + 0x260;
        } while (lVar26 != lVar30);
      }
      bVar9 = *(byte *)(lVar23 + 0x3064);
      puVar11 = TlsGetValue(DAT_14c896140);
      if (puVar11 == (undefined8 *)0x0) {
        puVar11 = (undefined8 *)FUN_14001cc68(0x18,0x10);
        *puVar11 = 0;
        puVar11[1] = 0;
        *(undefined4 *)(puVar11 + 2) = 0;
        TlsSetValue(DAT_14c896140,puVar11);
      }
      puVar21 = (undefined8 *)puVar11[1];
      plVar15 = local_158;
      if (puVar21 == (undefined8 *)0x0) {
        puVar21 = (undefined8 *)*puVar11;
        if (puVar21 == (undefined8 *)0x0) {
          uVar29 = (uint)DAT_14c896180;
          uVar25 = DAT_14c896180;
          while (DAT_14c896180 = uVar25, local_b8 = uVar25, (uVar25 & 0x3ffffff) != 0) {
            local_f8 = (uVar25 & 0xfffffffffc000000) + 0x4000000;
            if (local_f8 >> 0x1a < uVar25 >> 0x1a) {
              FUN_14000f986(0x3a83126f);
            }
            uVar32 = (ulonglong)((uVar29 & 0x3ffffff) >> 0xe);
            uVar20 = (ulonglong)((uint)uVar25 & 0x3fff);
            local_f8 = local_f8 & 0xfffffffffc000000 |
                       (ulonglong)
                       *(uint *)(*(longlong *)(&DAT_14c833b00 + uVar32 * 8) + 0x10 + uVar20 * 0x18);
            LOCK();
            bVar33 = local_b8 == DAT_14c896180;
            uVar25 = local_f8;
            if (!bVar33) {
              uVar25 = DAT_14c896180;
            }
            DAT_14c896180 = uVar25;
            UNLOCK();
            if (bVar33) {
              *(undefined4 *)(*(longlong *)(&DAT_14c833b00 + uVar32 * 8) + uVar20 * 0x18 + 0x10) = 0
              ;
              puVar21 = *(undefined8 **)
                         (*(longlong *)(&DAT_14c833b00 + uVar32 * 8) + 8 +
                         (ulonglong)(uVar29 & 0x3fff) * 0x18);
              FUN_1447d080c(uVar29 & 0x3ffffff);
              puVar11[1] = puVar21;
              lVar23 = local_168;
              plVar15 = local_158;
              if (puVar21 != (undefined8 *)0x0) goto LAB_140a1618f;
              goto LAB_140a16d9d;
            }
            uVar29 = (uint)DAT_14c896180;
            uVar25 = DAT_14c896180;
          }
          puVar11[1] = 0;
LAB_140a16d9d:
          plVar15 = local_158;
          lVar23 = local_168;
          puVar21 = (undefined8 *)FUN_14001cc68(0x10000,0);
          puVar11[1] = puVar21;
          iVar17 = 0xff;
          puVar13 = puVar21;
          do {
            puVar16 = puVar13 + 0x20;
            *puVar13 = puVar16;
            iVar17 = iVar17 + -1;
            puVar13 = puVar16;
          } while (iVar17 != 0);
        }
        else {
          puVar11[1] = puVar21;
          puVar16 = puVar11;
        }
        *puVar16 = 0;
LAB_140a1618f:
        *(undefined4 *)(puVar11 + 2) = 0x100;
        iVar17 = 0xff;
      }
      else {
        iVar17 = *(int *)(puVar11 + 2) + -1;
      }
      puVar11[1] = *puVar21;
      *(int *)(puVar11 + 2) = iVar17;
      *puVar21 = UE::Tasks::Private::FTaskBase::vftable;
      puVar21[1] = &DAT_100000002;
      puVar21[2] = 0;
      *(undefined4 *)(puVar21 + 3) = 0;
      *(undefined4 *)(puVar21 + 4) = 0xffffffff;
      puVar21[6] = 0;
      puVar21[7] = 0x100000000;
      *(undefined1 *)(puVar21 + 8) = 1;
      puVar21[0xe] = LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateDummy::vftable;
      puVar21[0xf] = 0;
      puVar21[0x10] = 0xe800000000000020;
      puVar21[0x12] = 0;
      puVar21[0x13] = 0x100000000;
      *(undefined2 *)(puVar21 + 0x14) = 0;
      LOCK();
      bVar33 = *(char *)(puVar21 + 8) == '\x01';
      if (bVar33) {
        *(char *)(puVar21 + 8) = '\0';
      }
      UNLOCK();
      if (!bVar33) {
        FUN_14008cdb0(puVar21 + 8);
      }
      *puVar21 = &PTR_FUN_14a2f9c28;
      if (*(code **)(puVar21[0xe] + 0x18) != FUN_144713626) {
        (**(code **)(puVar21[0xe] + 0x18))(puVar21 + 0xe,puVar21 + 9);
      }
      puVar21[0xe] = LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                     ::vftable;
      puVar21[9] = puVar21;
      puVar21[10] = puVar21;
      lVar30 = *local_160;
      if (lVar30 == 0) {
        bVar8 = 1;
        if (bVar9 != 6) {
          bVar8 = bVar9;
        }
        bVar9 = bVar8;
        uVar14 = 0;
      }
      else {
        if (bVar9 == 6) {
          bVar9 = (byte)((ulonglong)*(undefined8 *)(lVar30 + 0x38) >> 0x3b);
        }
        uVar14 = *(undefined8 *)(lVar30 + 0x30);
      }
      puVar21[0xf] = uVar14;
      puVar21[0x10] = (ulonglong)(bVar9 & 7) << 0x3b | 0xc00000528bd6c080;
      *(undefined4 *)((longlong)puVar21 + 0x1c) = 0;
      puVar21[0x15] = lVar23;
      *puVar21 = &PTR_FUN_14a2f9c18;
      FUN_14302e1ba(puVar21,local_140);
      local_b8 = CONCAT71(local_b8._1_7_,1);
      FUN_1447439e4(puVar21);
      puVar11 = *(undefined8 **)(lVar23 + 0x3048);
      *(undefined8 **)(lVar23 + 0x3048) = puVar21;
      if (puVar11 != (undefined8 *)0x0) {
        LOCK();
        piVar2 = (int *)(puVar11 + 1);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)*puVar11)(puVar11,1);
        }
      }
    }
    FUN_1400daade(lVar23 + 0x3018);
    FUN_1400daade(plVar15);
    FUN_1400daade(lVar23 + 0x3020);
    FUN_1400daade(lVar23 + 0x3028);
    FUN_1400daade(local_140);
    if ((local_70 ^ (ulonglong)auStack_198) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
LAB_140a16d50:
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(iVar17);
}



// FUNCTION 140a16efe FUN_140a16efe body=621 status=ok
// SIG undefined FUN_140a16efe(void)

void FUN_140a16efe(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  char cVar5;
  undefined8 *puVar6;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  undefined8 local_50;
  undefined8 local_48;
  code *local_40;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = 0xffffffffffffffff;
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
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_30);
            goto LAB_140a16fe9;
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
LAB_140a16fe9:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x7d8))(param_1,local_30);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a1716c FUN_140a1716c body=1088 status=ok
// SIG undefined FUN_140a1716c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140a1716c(longlong *param_1,ulonglong param_2)

{
  longlong *plVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined8 local_80;
  wchar_t *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  undefined8 *local_60;
  undefined1 *local_58;
  code *local_50;
  int local_40;
  undefined4 local_3c;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (DAT_14caf84d0 == (longlong *)0x0) {
    local_60 = &local_38;
    local_38 = FUN_1449e2820;
    local_50 = FUN_14081d0ea;
    local_58 = &LAB_145a62952;
    local_68 = &LAB_147c8cd45;
    local_70 = &LAB_1461468ae;
    local_78 = L"Engine";
    local_80 = 0;
    local_88 = 0x10000006;
    local_90 = 8;
    local_98 = 0x218;
    FUN_14081cfa3(L"/Script/Engine",L"PhysicsSettings",&DAT_14caf84d0,FUN_1463f75b4);
  }
  if (DAT_14caf84d0[0x22] == 0) {
    (**(code **)(*DAT_14caf84d0 + 1000))();
  }
  iVar6 = (int)(param_2 >> 0x20);
  uVar8 = (uint)param_2;
  if (*(int *)((longlong)param_1 + 0x92c) < iVar6) {
    *(uint *)(param_1 + 0x125) = uVar8;
    *(int *)((longlong)param_1 + 0x92c) = iVar6;
  }
  if (DAT_14caf84d0 == (longlong *)0x0) {
    local_60 = &local_38;
    local_38 = FUN_1449e2820;
    local_50 = FUN_14081d0ea;
    local_58 = &LAB_145a62952;
    local_68 = &LAB_147c8cd45;
    local_70 = &LAB_1461468ae;
    local_78 = L"Engine";
    local_80 = 0;
    local_88 = 0x10000006;
    local_90 = 8;
    local_98 = 0x218;
    FUN_14081cfa3(L"/Script/Engine",L"PhysicsSettings",&DAT_14caf84d0,FUN_1463f75b4);
  }
  plVar1 = DAT_14caf84d0;
  lVar4 = DAT_14caf84d0[0x22];
  if (lVar4 == 0) {
    (**(code **)(*DAT_14caf84d0 + 1000))(DAT_14caf84d0);
    lVar4 = plVar1[0x22];
  }
  fVar11 = *(float *)(lVar4 + 0x168);
  lVar4 = FUN_1447210f0(param_1);
  if (((lVar4 != 0) && (*(longlong *)(lVar4 + 0x260) != 0)) &&
     (lVar4 = *(longlong *)(*(longlong *)(lVar4 + 0x260) + 0x38), lVar4 != 0)) {
    fVar11 = (float)*(double *)(lVar4 + 0x228);
  }
  FUN_140a175ae(param_1,&local_40,0);
  fVar9 = ((float)_DAT_14c7618e8 / 1000.0) / fVar11;
  uVar7 = local_40 - ((int)ROUND(-0.5 - (fVar9 + fVar9)) >> 1);
  *(byte *)((longlong)param_1 + 0x934) = *(byte *)((longlong)param_1 + 0x934) | uVar8 != 0xffffffff;
  lVar4 = FUN_1447210f0(param_1);
  iVar6 = -(uVar8 - uVar7);
  fVar9 = (float)*(double *)(lVar4 + 0x6d0);
  if (iVar6 < 0) {
    iVar6 = uVar8 - uVar7;
  }
  fVar10 = fVar9;
  if (uVar8 != uVar7) {
    fVar10 = *(float *)((longlong)param_1 + 0x93c);
  }
  *(float *)((longlong)param_1 + 0x93c) = fVar10;
  if (((*(char *)((longlong)param_1 + 0x934) != '\x01') ||
      ((float)_DAT_14c7618ec / 1000.0 < fVar11 * (float)iVar6)) ||
     (bVar2 = 1, (float)_DAT_14c7618f0 / 1000.0 < fVar9 - fVar10)) {
    *(float *)((longlong)param_1 + 0x93c) = fVar9;
    local_38 = (code *)((ulonglong)uVar7 | param_2 & 0xffffffff00000000);
    uVar5 = FUN_14477b072(param_1,DAT_14caf97a8);
    (**(code **)(*param_1 + 0x248))(param_1,uVar5,&local_38);
    bVar2 = *(byte *)((longlong)param_1 + 0x934);
    param_2 = (ulonglong)uVar7;
  }
  if ((bVar2 & 1) != 0) {
    iVar6 = (int)param_2 - uVar7;
    if (DAT_14c7618f8 == '\0') {
      iVar3 = 1;
      if (iVar6 < 1) {
        iVar3 = iVar6;
      }
      iVar6 = -1;
      if (-1 < iVar3) {
        iVar6 = iVar3;
      }
    }
    iVar3 = -iVar6;
    if (-1 < iVar3) {
      iVar6 = iVar3;
    }
    fVar11 = 1.0 - (float)iVar6 * _DAT_14c7618fc;
    if (1.0 <= fVar11) {
      fVar11 = 1.0;
    }
    if (fVar11 <= DAT_14c761900) {
      fVar11 = DAT_14c761900;
    }
    fVar11 = (float)iVar3 * _DAT_14c7618f4 * fVar11 + 1.0;
    if (DAT_14c761904 <= fVar11) {
      fVar11 = DAT_14c761904;
    }
    if (fVar11 <= DAT_14c761908) {
      fVar11 = DAT_14c761908;
    }
    local_38 = (code *)CONCAT44(local_3c,fVar11);
    uVar5 = FUN_14477b072(param_1,DAT_14caf9548);
    (**(code **)(*param_1 + 0x248))(param_1,uVar5,&local_38);
  }
  if ((local_30 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140a175ae FUN_140a175ae body=142 status=ok
// SIG undefined FUN_140a175ae(void)

int * FUN_140a175ae(longlong *param_1,int *param_2,float param_3)

{
  char cVar1;
  longlong lVar2;
  int iVar3;
  
  param_2[0] = -1;
  param_2[1] = -1;
  lVar2 = FUN_1447210f0();
  if (((lVar2 != 0) && (*(longlong *)(lVar2 + 0x260) != 0)) &&
     (lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0x260) + 0x38), lVar2 != 0)) {
    iVar3 = (int)(double)(-(ulonglong)(0.0 < *(double *)(lVar2 + 0x228)) &
                         (ulonglong)((double)param_3 / *(double *)(lVar2 + 0x228))) +
            *(int *)(lVar2 + 0x268);
    *param_2 = iVar3;
    param_2[1] = iVar3;
    cVar1 = (**(code **)(*param_1 + 0x6c8))(param_1);
    if (cVar1 != '\0') {
      *param_2 = iVar3 + (int)param_1[0x126];
    }
  }
  return param_2;
}



// FUNCTION 140a1763c FUN_140a1763c body=786 status=ok
// SIG undefined FUN_140a1763c(void)

void FUN_140a1763c(longlong param_1,longlong param_2,longlong *param_3,undefined8 *param_4,
                  uint *param_5,undefined8 param_6)

{
  undefined4 uVar1;
  char cVar2;
  uint uVar3;
  undefined1 auStack_258 [32];
  undefined8 *local_238;
  undefined8 *local_230;
  uint local_228;
  uint local_220;
  undefined8 local_218;
  undefined8 *local_210;
  uint local_208;
  undefined8 local_200;
  undefined4 local_1f8;
  undefined8 local_1f0;
  uint local_1e0;
  undefined4 local_1dc;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined4 local_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined4 local_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  ulonglong local_148 [2];
  undefined4 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined1 local_f0;
  undefined8 local_e8;
  undefined1 local_e0;
  undefined1 local_df;
  undefined1 local_de;
  undefined1 local_dd;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d0;
  uint uStack_cc;
  undefined4 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_258;
  cVar2 = (**(code **)(*param_3 + 0x368))(param_3);
  if ((cVar2 != '\0') && (2 < *(int *)(param_1 + 0x20))) {
    local_148[0] = (ulonglong)(*param_5 >> 0xd & 8 | *param_5 >> 0x11 & 1);
    local_1dc = FUN_144a875de(param_3,local_148);
    uVar3 = FUN_144a53bf0(param_3,local_148);
    local_210 = &local_188;
    local_158 = 0;
    uStack_150 = 0;
    local_168 = 0;
    uStack_160 = 0;
    local_178 = 0;
    uStack_170 = 0;
    local_188 = 0;
    uStack_180 = 0;
    local_198 = 0;
    uStack_190 = 0;
    local_208 = local_208 & 0xffffff00;
    local_218 = &local_198;
    local_228 = local_228 & 0xffffff00;
    local_230 = (undefined8 *)((ulonglong)local_230 & 0xffffffffffffff00);
    local_238 = (undefined8 *)((ulonglong)local_238 & 0xffffffffffffff00);
    local_220 = 0;
    cVar2 = FUN_1403113c0(param_3,*param_4,0,*(undefined4 *)(param_1 + 0x20));
    if (cVar2 != '\0') {
      uStack_c8 = 0;
      local_d0 = 0;
      uStack_cc = 0;
      local_c0 = 0;
      uStack_b8 = 0;
      local_b0 = 0;
      uStack_a8 = 0;
      local_a0 = 0;
      uStack_98 = 0;
      local_90 = 0;
      uStack_88 = 0;
      local_80 = 0;
      local_78 = 0;
      uStack_70 = 0;
      local_68 = 0;
      FUN_140a1794f(param_2,&local_d0,1);
      uVar1 = local_1dc;
      local_d0 = 1;
      uStack_cc = uStack_cc & 0xff;
      uStack_c8 = 0;
      uStack_b8 = 0;
      local_b0 = 0;
      uStack_a8 = 0;
      local_a0 = 0;
      uStack_98 = 0;
      local_90 = 0;
      uStack_88 = 0;
      local_208 = *(uint *)(param_1 + 8);
      local_200 = param_6;
      local_210._0_1_ = 1;
      local_218 = (undefined8 *)(CONCAT44(local_218._4_4_,*param_5) & 0xffffffff0000003f);
      local_228 = local_1dc;
      local_238 = (undefined8 *)&local_d0;
      local_230 = &local_198;
      local_220 = uVar3;
      local_1e0 = uVar3;
      FUN_140287f14(*(undefined4 *)(param_1 + 0x20),param_4,param_3,param_1 + 0x40);
      uVar3 = FUN_1447be3d0(*(undefined4 *)(param_1 + 0x20));
      local_1d8 = 0;
      uStack_1d0 = 0;
      local_1c8 = 0x11;
      local_1c0 = 0;
      uStack_1b8 = 0;
      local_1b0 = 0;
      uStack_1a8 = 0;
      local_1a0 = 0;
      FUN_144a53c8c(uVar3 | 2,0,&local_1d8,1);
      local_138 = 0;
      local_128 = 0;
      uStack_120 = 0;
      local_118 = 0;
      uStack_110 = 0;
      local_108 = 0;
      uStack_100 = 0;
      local_f8 = 0;
      local_d8 = 1;
      local_130 = 0x1020009;
      local_148[1] = 0x1a00000001;
      local_e8 = *(undefined8 *)(param_2 + 0x38);
      local_f0 = 0xb;
      local_e0 = 1;
      local_de = 1;
      local_dc = 0x22;
      local_df = ((uint)local_e8 >> 0xc & 1) == 0;
      local_220 = *param_5 & 0x3f;
      local_1f8 = *(undefined4 *)(param_1 + 8);
      local_1f0 = param_6;
      local_200 = CONCAT71(local_200._1_7_,1);
      local_208 = local_208 & 0xffffff00;
      local_210 = (undefined8 *)((ulonglong)local_210._1_7_ << 8);
      local_218 = (undefined8 *)((ulonglong)local_218 & 0xffffffff00000000);
      local_228 = local_1e0;
      local_230 = (undefined8 *)CONCAT44(local_230._4_4_,uVar1);
      local_238 = &local_198;
      local_dd = local_df;
      FUN_14028756c(param_4,param_3,&local_1d8);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_258) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a1794f FUN_140a1794f body=75 status=ok
// SIG undefined FUN_140a1794f(void)

void FUN_140a1794f(longlong param_1,longlong param_2,char param_3)

{
  undefined8 uVar1;
  bool bVar2;
  
  FUN_140a1799a((char)param_1,param_2,0);
  if (param_3 != '\0') {
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    *(undefined1 *)(param_2 + 0x50) = 0xb;
    *(undefined8 *)(param_2 + 0x58) = uVar1;
    *(undefined1 *)(param_2 + 0x60) = 1;
    *(undefined1 *)(param_2 + 0x62) = 1;
    *(undefined4 *)(param_2 + 100) = 0x21;
    bVar2 = ((uint)uVar1 >> 0xc & 1) == 0;
    *(bool *)(param_2 + 0x61) = bVar2;
    *(bool *)(param_2 + 99) = bVar2;
  }
  return;
}



// FUNCTION 140a1799a FUN_140a1799a body=565 status=ok
// SIG undefined FUN_140a1799a(void)

void FUN_140a1799a(longlong param_1,uint *param_2,int param_3)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  undefined1 uVar4;
  uint *puVar5;
  uint uVar6;
  ulonglong uVar7;
  
  *(undefined2 *)(param_2 + 0x1a) = *(undefined2 *)(param_1 + 0x24);
  *(undefined1 *)(param_2 + 1) = *(undefined1 *)(param_1 + 0x2c);
  *(undefined8 *)(param_2 + 4) = *(undefined8 *)(param_1 + 0x30);
  if ((*(byte *)(param_1 + 0x178) & 2) == 0) {
    cVar2 = FUN_140052d29(*(undefined2 *)(param_1 + 0xc));
    uVar3 = 1;
    if (cVar2 != '\0') {
      *(undefined1 *)((longlong)param_2 + 5) = *(undefined1 *)(param_1 + 0xec);
      *(undefined8 *)(param_2 + 6) = *(undefined8 *)(param_1 + 0xf0);
      uVar3 = 2;
    }
  }
  else {
    lVar1 = param_1 + (longlong)param_3 * 0x70;
    puVar5 = (uint *)(lVar1 + 0x98);
    if ((longlong)(int)*puVar5 < 1) {
      uVar3 = 1;
    }
    else {
      *(undefined1 *)((longlong)param_2 + (longlong)(int)*puVar5 + 4) =
           *(undefined1 *)(lVar1 + 0x9c);
      *(undefined8 *)(param_2 + (ulonglong)*puVar5 * 2 + 4) = *(undefined8 *)(lVar1 + 0xa0);
      uVar3 = *puVar5 + 1 + (uint)(*puVar5 == 0xffffffff);
    }
    uVar6 = uVar3;
    if (0 < (longlong)*(int *)(lVar1 + 0xa8)) {
      *(undefined1 *)((longlong)param_2 + (longlong)*(int *)(lVar1 + 0xa8) + 4) =
           *(undefined1 *)(lVar1 + 0xac);
      *(undefined8 *)(param_2 + (ulonglong)*(uint *)(lVar1 + 0xa8) * 2 + 4) =
           *(undefined8 *)(lVar1 + 0xb0);
      uVar6 = *(int *)(lVar1 + 0xa8) + 1;
      if (uVar6 <= uVar3) {
        uVar6 = uVar3;
      }
    }
    uVar3 = uVar6;
    if (0 < (longlong)*(int *)(lVar1 + 0xb8)) {
      *(undefined1 *)((longlong)param_2 + (longlong)*(int *)(lVar1 + 0xb8) + 4) =
           *(undefined1 *)(lVar1 + 0xbc);
      *(undefined8 *)(param_2 + (ulonglong)*(uint *)(lVar1 + 0xb8) * 2 + 4) =
           *(undefined8 *)(lVar1 + 0xc0);
      uVar3 = *(int *)(lVar1 + 0xb8) + 1;
      if (uVar3 <= uVar6) {
        uVar3 = uVar6;
      }
    }
    uVar6 = uVar3;
    if (0 < (longlong)*(int *)(lVar1 + 200)) {
      *(undefined1 *)((longlong)param_2 + (longlong)*(int *)(lVar1 + 200) + 4) =
           *(undefined1 *)(lVar1 + 0xcc);
      *(undefined8 *)(param_2 + (ulonglong)*(uint *)(lVar1 + 200) * 2 + 4) =
           *(undefined8 *)(lVar1 + 0xd0);
      uVar6 = *(int *)(lVar1 + 200) + 1;
      if (uVar6 <= uVar3) {
        uVar6 = uVar3;
      }
    }
    uVar3 = uVar6;
    if (0 < (longlong)*(int *)(lVar1 + 0xd8)) {
      *(undefined1 *)((longlong)param_2 + (longlong)*(int *)(lVar1 + 0xd8) + 4) =
           *(undefined1 *)(lVar1 + 0xdc);
      *(undefined8 *)(param_2 + (ulonglong)*(uint *)(lVar1 + 0xd8) * 2 + 4) =
           *(undefined8 *)(lVar1 + 0xe0);
      uVar3 = *(int *)(lVar1 + 0xd8) + 1;
      if (uVar3 <= uVar6) {
        uVar3 = uVar6;
      }
    }
    uVar6 = uVar3;
    if (0 < (longlong)*(int *)(lVar1 + 0xe8)) {
      *(undefined1 *)((longlong)param_2 + (longlong)*(int *)(lVar1 + 0xe8) + 4) =
           *(undefined1 *)(lVar1 + 0xec);
      *(undefined8 *)(param_2 + (ulonglong)*(uint *)(lVar1 + 0xe8) * 2 + 4) =
           *(undefined8 *)(lVar1 + 0xf0);
      uVar6 = *(int *)(lVar1 + 0xe8) + 1;
      if (uVar6 <= uVar3) {
        uVar6 = uVar3;
      }
    }
    uVar3 = uVar6;
    if (0 < (longlong)*(int *)(lVar1 + 0xf8)) {
      *(undefined1 *)((longlong)param_2 + (longlong)*(int *)(lVar1 + 0xf8) + 4) =
           *(undefined1 *)(lVar1 + 0xfc);
      *(undefined8 *)(param_2 + (ulonglong)*(uint *)(lVar1 + 0xf8) * 2 + 4) =
           *(undefined8 *)(lVar1 + 0x100);
      uVar3 = *(int *)(lVar1 + 0xf8) + 1;
      if (uVar3 <= uVar6) {
        uVar3 = uVar6;
      }
    }
  }
  uVar6 = *(uint *)(param_1 + 0x178);
  if ((uVar6 & 8) != 0) {
    uVar7 = (ulonglong)uVar3;
    *(char *)((longlong)param_2 + uVar7 + 4) = ((uVar6 & 0x10) == 0) * '\b' + '\r';
    uVar3 = uVar3 + 1;
    (param_2 + uVar7 * 2 + 4)[0] = 0x209;
    (param_2 + uVar7 * 2 + 4)[1] = 0;
    uVar6 = *(uint *)(param_1 + 0x178);
  }
  if ((uVar6 & 0x20) != 0) {
    if ((0x30 < (ulonglong)*(ushort *)(param_1 + 0xc)) ||
       (uVar4 = 0x25, (0x1000001200000U >> ((ulonglong)*(ushort *)(param_1 + 0xc) & 0x3f) & 1) == 0)
       ) {
      uVar4 = 2;
    }
    uVar7 = (ulonglong)uVar3;
    *(undefined1 *)((longlong)param_2 + uVar7 + 4) = uVar4;
    uVar3 = uVar3 + 1;
    (param_2 + uVar7 * 2 + 4)[0] = 9;
    (param_2 + uVar7 * 2 + 4)[1] = 0;
  }
  *param_2 = uVar3;
  *(undefined2 *)((longlong)param_2 + 0x6a) = 0;
  return;
}



// FUNCTION 140a17bd0 FUN_140a17bd0 body=188 status=ok
// SIG undefined FUN_140a17bd0(void)

void FUN_140a17bd0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  
  if (*(int *)(param_1 + 0x148) != *(int *)(param_1 + 0x174)) {
    lVar1 = *param_2;
    uVar2 = (uint)((ulonglong)lVar1 >> 0x10);
    uVar4 = (uint)lVar1 & 0xffff;
    lVar3 = param_1 + 0x178;
    if (*(longlong *)(param_1 + 0x180) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x180);
    }
    iVar5 = *(int *)(lVar3 + (ulonglong)
                             (*(int *)(param_1 + 0x188) - 1U &
                             (int)((ulonglong)lVar1 >> 0x20) + ((uint)lVar1 << 0x10 | uVar4) +
                             (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar4 >> 4)) * 4);
    if (iVar5 != -1) {
      lVar3 = *(longlong *)(param_1 + 0x140);
      do {
        if (*(longlong *)(lVar3 + (longlong)iVar5 * 0x14) == lVar1) {
          FUN_1405b161a((longlong *)(param_1 + 0x140),param_2);
          break;
        }
        iVar5 = *(int *)(lVar3 + (longlong)iVar5 * 0x14 + 0xc);
      } while (iVar5 != -1);
    }
  }
  FUN_140a17c8c(param_1,param_2);
  return;
}



// FUNCTION 140a17c8c FUN_140a17c8c body=211 status=ok
// SIG undefined FUN_140a17c8c(void)

void FUN_140a17c8c(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  
  lVar2 = (**(code **)(*param_1 + 0x2c8))();
  if ((lVar2 != 0) && ((longlong)*(int *)(lVar2 + 0x70) != 0)) {
    plVar3 = *(longlong **)(lVar2 + 0x68);
    plVar1 = plVar3 + *(int *)(lVar2 + 0x70);
    do {
      if ((int)param_1[0x12] != 0) {
        lVar2 = 0;
        do {
          if (*(longlong *)(param_1[0x11] + lVar2) == *plVar3) {
            return;
          }
          lVar2 = lVar2 + 8;
        } while ((longlong)(int)param_1[0x12] << 3 != lVar2);
      }
      plVar3 = plVar3 + 1;
    } while (plVar3 != plVar1);
  }
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x19));
  FUN_140608954(param_1 + 0x15,param_2);
  lVar2 = (**(code **)(*param_1 + 0x2c8))(param_1,param_2);
  if (lVar2 != 0) {
    FUN_14094f414(param_1 + 0x11,lVar2 + 0x28);
  }
  LOCK();
  *(undefined4 *)(param_1 + 0x25) = 1;
  UNLOCK();
                    /* WARNING: Could not recover jumptable at 0x000140a17d0b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x19));
  return;
}



// FUNCTION 140a17d60 FUN_140a17d60 body=45 status=ok
// SIG undefined FUN_140a17d60(void)

void FUN_140a17d60(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_140a17d8e(param_1 + 0x48);
  FUN_140a17e3a(param_1 + 0x88,param_3);
  return;
}



// FUNCTION 140a17d8e FUN_140a17d8e body=84 status=ok
// SIG undefined FUN_140a17d8e(void)

void FUN_140a17d8e(longlong param_1,undefined8 param_2)

{
  FUN_140a17de2(param_2,param_1,param_1 + 8);
  FUN_140a17de2(param_2,param_1 + 0x10,param_1 + 0x18);
  FUN_140a17de2(param_2,param_1 + 0x20,param_1 + 0x28);
  FUN_140a17de2(param_2,param_1 + 0x30,param_1 + 0x38);
  return;
}



// FUNCTION 140a17de2 FUN_140a17de2 body=87 status=ok
// SIG undefined FUN_140a17de2(void)

void FUN_140a17de2(longlong param_1,int *param_2,undefined8 *param_3)

{
  int iVar1;
  
  if (*param_2 != -1) {
    iVar1 = *(int *)(param_1 + 0x18);
    *(uint *)(param_1 + 0x18) = iVar1 + 1U;
    if (*(uint *)(param_1 + 0x1c) < iVar1 + 1U) {
      FUN_1446f48e2((longlong *)(param_1 + 0x10),iVar1);
    }
    *(int *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar1 * 4) = *param_2;
    *param_2 = -1;
    if (param_3 != (undefined8 *)0x0) {
      *param_3 = 0;
    }
  }
  return;
}



// FUNCTION 140a17e3a FUN_140a17e3a body=89 status=ok
// SIG undefined FUN_140a17e3a(void)

void FUN_140a17e3a(longlong param_1,undefined8 param_2)

{
  FUN_140a17e94(param_2,param_1 + 0x10,param_1 + 0x18);
  FUN_140a17e94(param_2,param_1,param_1 + 8);
  FUN_140a17e94(param_2,param_1 + 0x30,param_1 + 0x38);
  FUN_140a17e94(param_2,param_1 + 0x20,param_1 + 0x28);
  return;
}



// FUNCTION 140a17e94 FUN_140a17e94 body=87 status=ok
// SIG undefined FUN_140a17e94(void)

void FUN_140a17e94(longlong param_1,int *param_2,undefined8 *param_3)

{
  int iVar1;
  
  if (*param_2 != -1) {
    iVar1 = *(int *)(param_1 + 0x18);
    *(uint *)(param_1 + 0x18) = iVar1 + 1U;
    if (*(uint *)(param_1 + 0x1c) < iVar1 + 1U) {
      FUN_1446f48e2((longlong *)(param_1 + 0x10),iVar1);
    }
    *(int *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar1 * 4) = *param_2;
    *param_2 = -1;
    if (param_3 != (undefined8 *)0x0) {
      *param_3 = 0;
    }
  }
  return;
}



// FUNCTION 140a17efa FUN_140a17efa body=132 status=ok
// SIG undefined FUN_140a17efa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140a17efa(undefined8 *param_1,int param_2)

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



// FUNCTION 140a17f84 FUN_140a17f84 body=186 status=ok
// SIG undefined FUN_140a17f84(void)

undefined8 * FUN_140a17f84(void)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [8];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c990090) {
    FUN_144b3d300(&DAT_14c990090);
    if (DAT_14c990090 == -1) {
      FUN_1446ddc76(local_18,&DAT_149efe19f,1);
      FUN_145c2843e(&DAT_14c990058);
      atexit(FUN_142903a82);
      _Init_thread_footer(&DAT_14c990090);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return &DAT_14c990058;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a1803f FUN_140a1803f body=218 status=ok
// SIG undefined FUN_140a1803f(void)

void FUN_140a1803f(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140a1811a(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b6d53d0;
  puVar1[5] = &PTR_FUN_14b6d5e20;
  puVar1[6] = &PTR_LAB_14b6d5e60;
  puVar1[0x55] = &PTR_FUN_14b6d5eb0;
  puVar1[0x56] = &PTR_FUN_14b6d5f30;
  puVar1[0x57] = &PTR_FUN_14b6d5f40;
  puVar1[0xc4] = &PTR_FUN_14b6d5f70;
  puVar1[0xd1] = &PTR_FUN_14b6d5f80;
  puVar1[0xd2] = &PTR_FUN_14b6d5fa0;
  puVar1[0xd3] = &PTR_FUN_14b6d6040;
  puVar1[0xd4] = &PTR_FUN_14b6d6050;
  puVar1[0x21a] = 0;
  puVar1[0x21b] = 0;
  puVar1[0x21c] = 0;
  puVar1[0x21d] = 0;
  puVar1[0x21e] = 0;
  puVar1[0x21f] = 0;
  puVar1[0x220] = 0;
  puVar1[0x221] = 0;
  puVar1[0x222] = 0;
  puVar1[0x223] = 0;
  puVar1[0x224] = 0;
  return;
}



// FUNCTION 140a1811a FUN_140a1811a body=2144 status=ok
// SIG undefined FUN_140a1811a(void)

undefined8 * FUN_140a1811a(undefined8 *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  byte bVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  
  FUN_140a1897a();
  *param_1 = &PTR_FUN_14b098f90;
  param_1[5] = &PTR_FUN_14b0999e0;
  param_1[6] = &PTR_LAB_14b099a20;
  param_1[0x55] = &PTR_FUN_14b099a70;
  param_1[0x56] = &PTR_FUN_14b099af0;
  param_1[0x57] = &PTR_FUN_14b099b00;
  param_1[0xc4] = &PTR_FUN_14b099b30;
  param_1[0xd1] = &PTR_FUN_14b099b40;
  param_1[0xd2] = &PTR_FUN_14b099b60;
  param_1[0xd3] = &PTR_FUN_14b099c00;
  param_1[0xd4] = &PTR_FUN_14b099c10;
  param_1[0xd5] = 0;
  param_1[0xd6] = 0;
  param_1[0xd7] = 0;
  param_1[0xd8] = 0;
  *(undefined4 *)(param_1 + 0xd9) = 2;
  *(undefined8 *)((longlong)param_1 + 0x6cc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6d4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x6dc) = 0;
  param_1[0xdc] = 2;
  param_1[0xdd] = 0;
  *(undefined2 *)(param_1 + 0xde) = 0x100;
  *(undefined4 *)((longlong)param_1 + 0x6f4) = DAT_14cb717d0;
  param_1[0xdf] = 0;
  *(undefined4 *)(param_1 + 0xe0) = 0x4000;
  param_1[0xe1] = 0;
  *(undefined1 *)(param_1 + 0xe2) = 0;
  *(undefined4 *)((longlong)param_1 + 0x714) = 0x45fa0000;
  *(undefined1 *)(param_1 + 0xe3) = 0;
  *(undefined4 *)((longlong)param_1 + 0x71c) = 0x457a0000;
  *(undefined4 *)(param_1 + 0x103) = 0;
  *(undefined1 *)((longlong)param_1 + 0x81c) = 0;
  param_1[0x10a] = 0;
  param_1[0x10b] = 0;
  param_1[0x101] = 0;
  *(undefined8 *)((longlong)param_1 + 0x80f) = 0;
  param_1[0x104] = 0;
  param_1[0x105] = 0;
  param_1[0x106] = 0;
  param_1[0x107] = 0;
  *(undefined8 *)((longlong)param_1 + 0x839) = 0;
  *(undefined8 *)((longlong)param_1 + 0x841) = 0;
  memset(param_1 + 0xe4,0,0xe1);
  *(undefined4 *)(param_1 + 0x10c) = 2;
  *(undefined8 *)((longlong)param_1 + 0x864) = 0;
  *(undefined8 *)((longlong)param_1 + 0x86c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x874) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x87c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x884) = 0;
  *(undefined8 *)((longlong)param_1 + 0x889) = 0;
  param_1[0x113] = 0;
  param_1[0x114] = 0;
  param_1[0x115] = 0;
  param_1[0x116] = 0;
  param_1[0x117] = 0;
  param_1[0x118] = 0;
  param_1[0x119] = 0;
  param_1[0x11a] = 0;
  *(undefined8 *)((longlong)param_1 + 0x8d1) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8d9) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8e4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8ec) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8ed) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8f5) = 0;
  param_1[0x120] = 0;
  param_1[0x121] = 0;
  param_1[0x122] = 0;
  param_1[0x123] = 0;
  param_1[0x124] = 0;
  param_1[0x125] = 0;
  param_1[0x126] = 0;
  param_1[0x127] = 0;
  param_1[0x128] = 0;
  param_1[0x129] = 0;
  *(undefined8 *)((longlong)param_1 + 0x94a) = 0;
  *(undefined8 *)((longlong)param_1 + 0x952) = 0;
  *(undefined1 *)((longlong)param_1 + 0x95a) = 1;
  param_1[300] = 0;
  param_1[0x12d] = 0;
  param_1[0x12e] = 0;
  param_1[0x12f] = 0;
  param_1[0x130] = 0;
  bVar3 = DAT_14c9a8874 & 0x20;
  bVar7 = (DAT_14c9a8634 & 0x20) == 0;
  param_1[0x131] = 0x41f00000;
  *(undefined1 *)(param_1 + 0x132) = 1;
  param_1[0x133] = 0;
  *(undefined2 *)(param_1 + 0x137) = 4;
  *(undefined4 *)(param_1 + 0x134) = 0x40200000;
  *(undefined1 *)(param_1 + 0x138) = 3;
  cVar4 = (bVar3 == 0) * '\x03';
  *(char *)(param_1 + 0x139) = cVar4;
  *(undefined1 *)(param_1 + 0x13a) = 0;
  param_1[0x13b] = 0;
  *(undefined2 *)(param_1 + 0x13f) = 4;
  *(undefined4 *)(param_1 + 0x13c) = 0x40200000;
  *(undefined1 *)(param_1 + 0x140) = 3;
  *(char *)(param_1 + 0x141) = cVar4;
  *(undefined1 *)(param_1 + 0x142) = 0;
  param_1[0x143] = 0;
  *(undefined2 *)(param_1 + 0x147) = 4;
  *(undefined4 *)(param_1 + 0x144) = 0;
  *(undefined1 *)(param_1 + 0x148) = 1;
  *(bool *)(param_1 + 0x149) = bVar7;
  *(undefined1 *)(param_1 + 0x14a) = 0;
  param_1[0x14b] = 0;
  *(undefined2 *)(param_1 + 0x14f) = 4;
  *(undefined4 *)(param_1 + 0x14c) = 0;
  *(undefined1 *)(param_1 + 0x150) = 1;
  *(bool *)(param_1 + 0x151) = bVar7;
  *(undefined2 *)(param_1 + 0x152) = 0;
  *(undefined4 *)(param_1 + 0x153) = 0x10100;
  param_1[0x154] = 0;
  param_1[0x155] = 0;
  param_1[0x156] = 0;
  param_1[0x157] = 0;
  param_1[0x158] = 0;
  param_1[0x159] = 0;
  *(undefined1 *)(param_1 + 0x15a) = 0;
  *(undefined8 *)((longlong)param_1 + 0xad4) = 0x3f80000000000000;
  *(undefined4 *)((longlong)param_1 + 0xadc) = 0;
  *(byte *)(param_1 + 0x15c) = *(byte *)(param_1 + 0x15c) & 0xf0;
  *(undefined8 *)((longlong)param_1 + 0xae4) = 0;
  param_1[0x162] = 0;
  *(undefined4 *)(param_1 + 0x163) = 0;
  param_1[0x15e] = 0;
  param_1[0x15f] = 0;
  *(undefined8 *)((longlong)param_1 + 0xb1c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xb24) = 0;
  param_1[0x166] = 0;
  *(undefined4 *)(param_1 + 0x167) = 0;
  *(undefined1 *)(param_1 + 0x168) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb44) = 0;
  *(undefined1 *)(param_1 + 0x16d) = 0;
  *(undefined4 *)(param_1 + 0x16c) = 0;
  param_1[0x16a] = 0;
  param_1[0x16b] = 0;
  *(undefined1 *)((longlong)param_1 + 0xb69) = 1;
  param_1[0x16e] = 0;
  param_1[0x16f] = 0;
  FUN_140785382(param_1 + 0x170,7);
  param_1[0x177] = 0;
  *(undefined2 *)(param_1 + 0x17b) = 4;
  *(undefined4 *)(param_1 + 0x178) = 0x447a0000;
  *(undefined1 *)(param_1 + 0x17c) = 3;
  cVar4 = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  *(char *)(param_1 + 0x17d) = cVar4;
  *(undefined1 *)(param_1 + 0x17e) = 1;
  param_1[0x181] = 0;
  param_1[0x182] = 0;
  param_1[0x17f] = 0;
  param_1[0x180] = 0;
  *(undefined2 *)(param_1 + 0x186) = 4;
  *(undefined4 *)(param_1 + 0x183) = 0x43960000;
  *(undefined1 *)(param_1 + 0x187) = 3;
  *(char *)(param_1 + 0x188) = cVar4;
  param_1[0x189] = 0x451c4000449c4000;
  param_1[0x18a] = 0;
  *(undefined2 *)(param_1 + 0x18e) = 0;
  *(undefined1 *)(param_1 + 399) = 0;
  *(undefined1 *)(param_1 + 400) = 0;
  *(undefined1 *)(param_1 + 0x191) = 0;
  *(undefined2 *)(param_1 + 0x192) = 0;
  *(undefined1 *)((longlong)param_1 + 0xc92) = 1;
  *(undefined8 *)((longlong)param_1 + 0xc94) = 0;
  *(undefined1 *)(param_1 + 0x195) = 0;
  *(undefined8 *)((longlong)param_1 + 0xcac) = 0;
  param_1[0x194] = &PTR_FUN_14b099c30;
  *(undefined2 *)(param_1 + 0x197) = 0;
  *(undefined1 *)(param_1 + 0x199) = 0;
  *(undefined8 *)((longlong)param_1 + 0xccc) = 0;
  param_1[0x198] = &PTR_FUN_14b099c50;
  *(undefined2 *)(param_1 + 0x19b) = 2;
  param_1[0x19c] = 0;
  param_1[0x19d] = 0;
  param_1[0x19e] = 0;
  param_1[0x19f] = 0;
  param_1[0x1a0] = 0;
  *(undefined4 *)(param_1 + 0x1a1) = 0xc;
  param_1[0x1a2] = 0;
  *(undefined2 *)(param_1 + 0x1a3) = 0;
  *(undefined2 *)(param_1 + 0x1a4) = 0;
  *(undefined1 *)((longlong)param_1 + 0xd22) = 1;
  *(undefined8 *)((longlong)param_1 + 0xd24) = 0;
  *(undefined1 *)((longlong)param_1 + 0xd2c) = 0;
  *(undefined1 *)(param_1 + 0x1a6) = 1;
  param_1[0x1a7] = 0;
  param_1[0x1a8] = 0;
  param_1[0x1a9] = 0;
  param_1[0x1aa] = 0;
  *(undefined2 *)(param_1 + 0x1ae) = 4;
  *(undefined4 *)(param_1 + 0x1ab) = 0x453b8000;
  *(undefined1 *)(param_1 + 0x1af) = 3;
  *(char *)(param_1 + 0x1b0) = cVar4;
  param_1[0x1b1] = 0;
  *(undefined2 *)(param_1 + 0x1b5) = 4;
  *(undefined4 *)(param_1 + 0x1b2) = 0x447a0000;
  *(undefined1 *)(param_1 + 0x1b6) = 3;
  *(char *)(param_1 + 0x1b7) = cVar4;
  param_1[0x1b8] = 0;
  *(undefined2 *)(param_1 + 0x1bc) = 4;
  *(undefined4 *)(param_1 + 0x1b9) = 0x451c4000;
  *(undefined1 *)(param_1 + 0x1bd) = 3;
  *(char *)(param_1 + 0x1be) = cVar4;
  param_1[0x1bf] = 0x447a000044fa0000;
  *(undefined2 *)(param_1 + 0x1c0) = 0x100;
  *(undefined1 *)(param_1 + 0x1c1) = 1;
  param_1[0x1c2] = 0;
  param_1[0x1c3] = 0;
  param_1[0x1c4] = 0;
  param_1[0x1c5] = 0;
  *(undefined2 *)(param_1 + 0x1c9) = 4;
  *(undefined4 *)(param_1 + 0x1c6) = 0x43960000;
  *(undefined1 *)(param_1 + 0x1ca) = 3;
  *(char *)(param_1 + 0x1cb) = cVar4;
  param_1[0x1cc] = 0;
  *(undefined2 *)(param_1 + 0x1d0) = 4;
  *(undefined4 *)(param_1 + 0x1cd) = 0x447a0000;
  *(undefined1 *)(param_1 + 0x1d1) = 3;
  *(char *)(param_1 + 0x1d2) = cVar4;
  param_1[0x1d3] = 0x451c4000449c4000;
  param_1[0x1d4] = 0;
  *(undefined2 *)(param_1 + 0x1d8) = 0;
  *(undefined1 *)(param_1 + 0x1d9) = 0;
  *(undefined1 *)(param_1 + 0x1da) = 0;
  *(undefined4 *)(param_1 + 0x1db) = 0x100;
  *(undefined1 *)(param_1 + 0x1dd) = 0;
  *(undefined8 *)((longlong)param_1 + 0xeec) = 0;
  param_1[0x1dc] = &PTR_FUN_14b099c30;
  *(undefined2 *)(param_1 + 0x1df) = 0;
  *(undefined1 *)(param_1 + 0x1e1) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf0c) = 0;
  param_1[0x1e0] = &PTR_FUN_14b099c50;
  *(undefined2 *)(param_1 + 0x1e3) = 2;
  param_1[0x1e8] = 0;
  param_1[0x1e6] = 0;
  param_1[0x1e7] = 0;
  param_1[0x1e4] = 0;
  param_1[0x1e5] = 0;
  *(undefined4 *)(param_1 + 0x1e9) = 0xc;
  param_1[0x1ea] = 0;
  *(undefined2 *)(param_1 + 0x1eb) = 0;
  param_1[0x1ec] = 0;
  *(undefined2 *)(param_1 + 0x1f0) = 0;
  *(undefined1 *)(param_1 + 0x1f1) = 0;
  *(undefined1 *)(param_1 + 0x1f2) = 0;
  *(undefined1 *)((longlong)param_1 + 0xf9c) = 0;
  *(undefined4 *)(param_1 + 499) = 0;
  *(undefined2 *)((longlong)param_1 + 0xf9d) = 1;
  *(undefined1 *)((longlong)param_1 + 3999) = 0;
  *(undefined4 *)(param_1 + 500) = 0x461c4000;
  param_1[0x1fc] = 0;
  *(undefined8 *)((longlong)param_1 + 0xfd4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xfcc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xfb4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xfbc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xfa4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xfac) = 0;
  *(undefined2 *)(param_1 + 0x200) = 4;
  *(undefined4 *)(param_1 + 0x1fd) = 0x44bb8000;
  *(undefined1 *)(param_1 + 0x201) = 3;
  cVar4 = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  *(char *)(param_1 + 0x202) = cVar4;
  param_1[0x203] = 0x43fa000044fa0000;
  param_1[0x204] = 0;
  *(undefined2 *)(param_1 + 0x208) = 4;
  *(undefined4 *)(param_1 + 0x205) = 0x447a0000;
  *(undefined1 *)(param_1 + 0x209) = 3;
  *(char *)(param_1 + 0x20a) = cVar4;
  param_1[0x20b] = 0;
  *(undefined2 *)(param_1 + 0x20f) = 4;
  *(undefined4 *)(param_1 + 0x20c) = 0x43fa0000;
  *(undefined1 *)(param_1 + 0x210) = 3;
  *(char *)(param_1 + 0x211) = cVar4;
  param_1[0x212] = 0;
  *(undefined2 *)(param_1 + 0x216) = 0;
  *(undefined1 *)(param_1 + 0x217) = 0;
  *(undefined1 *)(param_1 + 0x218) = 0;
  param_1[0x219] = 0x44bb8000447a0000;
  param_1[0x123] = DAT_14cb241e8;
  *(undefined8 *)((longlong)param_1 + 0xd24) = DAT_14cb241f0;
  puVar2 = param_1;
  while( true ) {
    if (puVar2 == (undefined8 *)0x0) {
      FUN_140a18dcc(param_1 + 0xeb,param_1,param_1);
      if (param_1[0x1f7] == 0) {
        plVar1 = param_1 + 0x1f5;
        param_1[0x1f8] = &DAT_14cb715f0;
        param_1[0x1f7] = param_1;
        lVar5 = DAT_14cb715f0;
        while( true ) {
          param_1[0x1f5] = lVar5;
          LOCK();
          lVar6 = *(longlong *)param_1[0x1f8];
          bVar7 = lVar5 == lVar6;
          if (bVar7) {
            *(longlong *)param_1[0x1f8] = (longlong)plVar1;
            lVar6 = lVar5;
          }
          UNLOCK();
          if (bVar7) break;
          param_1[0x1f5] = lVar6;
          lVar5 = *(longlong *)param_1[0x1f8];
        }
        if (*plVar1 != 0) {
          *(longlong **)(*plVar1 + 8) = plVar1;
        }
      }
      return param_1;
    }
    if ((*(uint *)(puVar2 + 1) & 0x30) != 0) break;
    puVar2 = (undefined8 *)puVar2[4];
  }
  return param_1;
}



// FUNCTION 140a1897a FUN_140a1897a body=388 status=ok
// SIG undefined FUN_140a1897a(void)

undefined8 * FUN_140a1897a(undefined8 *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  
  FUN_14480568a();
  *param_1 = &PTR_FUN_14ab686d0;
  param_1[5] = &PTR_FUN_14ab690f0;
  param_1[6] = &PTR_LAB_14ab69130;
  param_1[0x55] = &PTR_FUN_14ab69180;
  param_1[0x56] = &PTR_FUN_14ab69200;
  param_1[0x57] = &PTR_FUN_14ab69210;
  param_1[0xc4] = &PTR_LAB_14ab74bb0;
  FUN_1403a3c5e(param_1 + 0xc5,param_1,param_1 + 0xc4);
  *param_1 = &PTR_FUN_14ab686d0;
  param_1[5] = &PTR_FUN_14ab690f0;
  param_1[6] = &PTR_LAB_14ab69130;
  param_1[0x55] = &PTR_FUN_14ab69180;
  param_1[0x56] = &PTR_FUN_14ab69200;
  param_1[0x57] = &PTR_FUN_14ab69210;
  param_1[0xc4] = &PTR_FUN_14ab69240;
  param_1[0xcb] = 0x42c8000042c80000;
  *(undefined4 *)(param_1 + 0xcc) = 0x42c80000;
  *(undefined1 *)((longlong)param_1 + 0x664) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1fb) = 0;
  param_1[0xcd] = 0;
  param_1[0xce] = 0;
  param_1[0xcf] = 0;
  param_1[0xd0] = 0;
  FUN_140a18afe(param_1,0);
  puVar2 = param_1;
  while( true ) {
    if (puVar2 == (undefined8 *)0x0) {
      if (param_1[0xcf] == 0) {
        plVar1 = param_1 + 0xcd;
        param_1[0xd0] = &DAT_14cb1d060;
        param_1[0xcf] = param_1;
        lVar3 = DAT_14cb1d060;
        while( true ) {
          param_1[0xcd] = lVar3;
          LOCK();
          lVar4 = *(longlong *)param_1[0xd0];
          bVar5 = lVar3 == lVar4;
          if (bVar5) {
            *(longlong *)param_1[0xd0] = (longlong)plVar1;
            lVar4 = lVar3;
          }
          UNLOCK();
          if (bVar5) break;
          param_1[0xcd] = lVar4;
          lVar3 = *(longlong *)param_1[0xd0];
        }
        if (*plVar1 != 0) {
          *(longlong **)(*plVar1 + 8) = plVar1;
        }
      }
      return param_1;
    }
    if ((*(uint *)(puVar2 + 1) & 0x30) != 0) break;
    puVar2 = (undefined8 *)puVar2[4];
  }
  return param_1;
}



// FUNCTION 140a18afe FUN_140a18afe body=513 status=ok
// SIG undefined FUN_140a18afe(void)

void FUN_140a18afe(longlong *param_1,uint param_2)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  longlong *plVar5;
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
  if (((*(int *)((longlong)param_1 + 0x554) == 0) ||
      (uVar4 = *(uint *)(param_1 + 0xaa), (int)uVar4 < 0)) || (DAT_14c9647dc <= (int)uVar4)) {
LAB_140a18bae:
    plVar5 = param_1;
  }
  else {
    plVar5 = (longlong *)
             ((ulonglong)((uVar4 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8));
    if (((plVar5 == (longlong *)0x0) || ((int)plVar5[2] != *(int *)((longlong)param_1 + 0x554))) ||
       (((*(uint *)(plVar5 + 1) & 0x10200000) != 0 ||
        (plVar5 = (longlong *)*plVar5, plVar5 == (longlong *)0x0)))) goto LAB_140a18bae;
    if ((plVar5[0x15] != 0) && ((*(byte *)(plVar5[0x15] + 0x65) & 1) == 0)) {
      uVar4 = 0;
      goto LAB_140a18bb8;
    }
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
    if ((*(int *)(plVar5[2] + 0x38) < *(int *)(DAT_14cad2858 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(plVar5[2] + 0x30) + (longlong)*(int *)(DAT_14cad2858 + 0x38) * 8) !=
        DAT_14cad2858 + 0x30)) goto LAB_140a18bae;
  }
  uVar4 = (uint)*(byte *)((longlong)plVar5 + 0x427);
LAB_140a18bb8:
  if (uVar4 != param_2) {
    FUN_140a18d12(param_1 + 0x82,param_2,1);
    bVar1 = *(byte *)((longlong)param_1 + 0x9c);
    bVar2 = (**(code **)(*param_1 + 0x358))(param_1);
    if ((bVar1 & 8) >> 3 != bVar2) {
      FUN_1406cc378(param_1);
    }
    (**(code **)(*param_1 + 0x950))(param_1,1);
    if (((*(byte *)((longlong)param_1 + 0x9c) & 1) != 0) && ((*(byte *)(param_1 + 0x83) & 1) != 0))
    {
      cVar3 = FUN_140a196da(param_1);
      if (cVar3 == '\0') {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_98);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a18d12 FUN_140a18d12 body=186 status=ok
// SIG undefined FUN_140a18d12(void)

void FUN_140a18d12(longlong param_1,uint param_2,char param_3)

{
  byte bVar1;
  uint uVar2;
  longlong *plVar3;
  
  bVar1 = *(byte *)(param_1 + 0x17);
  if (bVar1 != param_2) {
    *(undefined8 *)(param_1 + 0x44) = DAT_14cad0ef0;
    *(undefined8 *)(param_1 + 0xa0) = 0;
    *(byte *)(param_1 + 0x3d) = *(byte *)(param_1 + 0x3d) & 0xbf;
    *(char *)(param_1 + 0x17) = (char)param_2;
    if (param_3 != '\0') {
      FUN_1400bcfd8(param_1);
    }
    if ((((((param_2 & 0xfffffffe) == 2) != ((bVar1 & 0xfffffffe) == 2)) &&
         (*(int *)(param_1 + 0x144) != 0)) && (uVar2 = *(uint *)(param_1 + 0x140), -1 < (int)uVar2))
       && ((int)uVar2 < DAT_14c9647dc)) {
      plVar3 = (longlong *)
               ((ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
      if (((plVar3 != (longlong *)0x0) && ((int)plVar3[2] == *(int *)(param_1 + 0x144))) &&
         (((*(uint *)(plVar3 + 1) & 0x10200000) == 0 && (*plVar3 != 0)))) {
        FUN_1406cc378();
        return;
      }
    }
  }
  return;
}



// FUNCTION 140a18dcc FUN_140a18dcc body=2317 status=ok
// SIG undefined FUN_140a18dcc(void)

void FUN_140a18dcc(longlong *param_1,longlong param_2,longlong *param_3)

{
  uint uVar1;
  undefined2 *puVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong lVar11;
  int iVar12;
  longlong *plVar13;
  bool bVar14;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  wchar_t *local_98;
  code *local_90;
  undefined1 *local_88;
  undefined8 *local_80;
  code *local_78;
  code *local_70;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_2 == 0) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined4 *)(param_1 + 5) = 0;
    if (*(int *)((longlong)param_1 + 0x2c) < 0) {
      FUN_1446f8c06(param_1 + 4,0);
    }
    puVar2 = (undefined2 *)param_1[4];
    if (puVar2 != (undefined2 *)0x0) {
      *puVar2 = 0;
    }
    param_1[6] = 0;
    goto LAB_140a18f25;
  }
  if (param_1[6] == param_2) goto LAB_140a18f25;
  if (DAT_14c950c29 == 1) {
    FUN_1456cec3c(param_2);
  }
  bVar3 = DAT_14c950c29;
  param_1[6] = param_2;
  lVar6 = *(longlong *)(param_2 + 0xa8);
  if (lVar6 != 0 && (~bVar3 & 1) == 0) {
    FUN_1456cec3c(lVar6);
    bVar3 = DAT_14c950c29;
  }
  *param_1 = lVar6;
  if ((lVar6 == 0) || ((bVar3 & 1) == 0)) {
    if (lVar6 != 0) goto LAB_140a18e58;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    *(undefined4 *)(param_1 + 5) = 0;
    if (*(int *)((longlong)param_1 + 0x2c) < 0) {
      FUN_1446f8c06(param_1 + 4,0);
    }
    puVar2 = (undefined2 *)param_1[4];
    if (puVar2 != (undefined2 *)0x0) {
      *puVar2 = 0;
    }
  }
  else {
    FUN_1456cec3c(lVar6);
LAB_140a18e58:
    FUN_1400bbfc4(&local_68,lVar6);
    *(undefined4 *)(param_1 + 2) = (undefined4)local_68;
    *(undefined4 *)((longlong)param_1 + 0x14) = local_68._4_4_;
    *(undefined4 *)(param_1 + 3) = uStack_60;
    *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_5c;
    if (param_1 + 2 == &local_68) {
      if (local_58 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[4] != 0) {
        FUN_1400020a8();
      }
      param_1[4] = local_58;
      local_58 = 0;
      *(undefined4 *)(param_1 + 5) = local_50;
      *(undefined4 *)((longlong)param_1 + 0x2c) = local_4c;
    }
    cVar4 = (*(code *)PTR_FUN_14c758760)();
    uVar1 = *(uint *)(lVar6 + 0xc);
    if (cVar4 != '\0') {
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar6 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar6 = 0;
      }
      if ((*(uint *)(lVar6 + 8) & 0x8400000) != 0) {
        param_1[1] = 0;
        goto LAB_140a18f01;
      }
    }
    *(uint *)(param_1 + 1) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar6 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar6 = 0;
    }
    iVar5 = *(int *)(lVar6 + 0x10);
    if (*(int *)(lVar6 + 0x10) == 0) {
      LOCK();
      iVar5 = DAT_14c964868 + 1;
      UNLOCK();
      iVar12 = DAT_14c964868 + 1;
      bVar14 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar5;
      if (bVar14) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar12);
      }
      LOCK();
      iVar5 = *(int *)(lVar6 + 0x10);
      bVar14 = iVar5 == 0;
      if (bVar14) {
        *(int *)(lVar6 + 0x10) = iVar12;
        iVar5 = 0;
      }
      UNLOCK();
      if (bVar14) {
        iVar5 = iVar12;
      }
    }
    *(int *)((longlong)param_1 + 0xc) = iVar5;
  }
LAB_140a18f01:
  if ((param_3 == (longlong *)0x0) ||
     (plVar7 = (longlong *)FUN_14048bbc8(param_1), plVar7 == (longlong *)0x0)) goto LAB_140a18f25;
  if (*param_1 == 0) {
    lVar6 = *(longlong *)(param_1[6] + 0xa8);
    if (lVar6 != 0 && DAT_14c950c29 == 1) {
      FUN_1456cec3c(lVar6);
    }
    bVar3 = DAT_14c950c29;
    *param_1 = lVar6;
    if ((lVar6 == 0) || ((bVar3 & 1) == 0)) {
      if (lVar6 == 0) {
        param_1[1] = 0;
        param_1[2] = 0;
        param_1[3] = 0;
        *(undefined4 *)(param_1 + 5) = 0;
        if (*(int *)((longlong)param_1 + 0x2c) < 0) {
          FUN_1446f8c06(param_1 + 4,0);
        }
        puVar2 = (undefined2 *)param_1[4];
        if (puVar2 != (undefined2 *)0x0) {
          *puVar2 = 0;
        }
        goto LAB_140a18f20;
      }
    }
    else {
      FUN_1456cec3c(lVar6);
    }
    FUN_1400bbfc4(&local_68,lVar6);
    *(undefined4 *)(param_1 + 2) = (undefined4)local_68;
    *(undefined4 *)((longlong)param_1 + 0x14) = local_68._4_4_;
    *(undefined4 *)(param_1 + 3) = uStack_60;
    *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_5c;
    if (param_1 + 2 == &local_68) {
      if (local_58 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[4] != 0) {
        FUN_1400020a8();
      }
      param_1[4] = local_58;
      local_58 = 0;
      *(undefined4 *)(param_1 + 5) = local_50;
      *(undefined4 *)((longlong)param_1 + 0x2c) = local_4c;
    }
    cVar4 = (*(code *)PTR_FUN_14c758760)();
    if (cVar4 != '\0') {
      uVar1 = *(uint *)(lVar6 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar8 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar8 = 0;
      }
      if ((*(uint *)(lVar8 + 8) & 0x8400000) != 0) {
        param_1[1] = 0;
        goto LAB_140a18f20;
      }
    }
    FUN_14485c47a(param_1 + 1,lVar6);
  }
LAB_140a18f20:
  if (plVar7 == param_3) goto LAB_140a18f25;
  if (DAT_14c951858 == 0) {
    local_80 = &local_68;
    local_68 = FUN_1449e2820;
    local_70 = FUN_14081d0ea;
    local_78 = FUN_14081d0ea;
    local_88 = &LAB_1468c5283;
    local_90 = FUN_142809da0;
    local_98 = L"Engine";
    local_a0 = 0x400000000;
    local_a8 = 0x10000000;
    local_b0 = 8;
    local_b8 = 0x50;
    FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
  }
  plVar10 = plVar7;
  if ((*(int *)(DAT_14c951858 + 0x38) <= *(int *)(param_3[2] + 0x38)) &&
     (*(longlong *)(*(longlong *)(param_3[2] + 0x30) + (longlong)*(int *)(DAT_14c951858 + 0x38) * 8)
      == DAT_14c951858 + 0x30)) {
LAB_140a18fcc:
    plVar9 = plVar10;
    plVar10 = plVar9;
    if ((longlong *)plVar9[4] != (longlong *)0x0) goto code_r0x000140a18fdb;
    goto LAB_140a18fea;
  }
  do {
    plVar10 = (longlong *)plVar10[4];
  } while (plVar10 != param_3 && plVar10 != (longlong *)0x0);
  if (plVar10 != (longlong *)0x0) goto LAB_140a18f25;
  goto LAB_140a18ffc;
code_r0x000140a18fdb:
  plVar10 = (longlong *)plVar9[4];
  if ((*(uint *)(plVar9 + 1) >> 0x1c & 1) == 0) goto LAB_140a18fcc;
  plVar10 = (longlong *)FUN_142840154(plVar9);
LAB_140a18fea:
  if (plVar10 == (longlong *)0x0) {
    plVar10 = (longlong *)plVar9[4];
    goto LAB_140a18fcc;
  }
  if (plVar10 == param_3) goto LAB_140a18f25;
LAB_140a18ffc:
  lVar6 = plVar7[0x16];
  if (lVar6 == 0) {
    lVar6 = FUN_1448abda6(plVar7);
  }
  lVar8 = (**(code **)(*param_3 + 0x180))(param_3);
  if (lVar6 != lVar8) {
    param_1[6] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
LAB_140a1915a:
    *(undefined4 *)(param_1 + 5) = 0;
    if (*(int *)((longlong)param_1 + 0x2c) < 0) {
      FUN_1446f8c06(param_1 + 4,0);
    }
    puVar2 = (undefined2 *)param_1[4];
    if (puVar2 != (undefined2 *)0x0) {
      *puVar2 = 0;
    }
LAB_140a18f25:
    if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
  lVar8 = *param_1;
  plVar10 = plVar7;
  if ((lVar8 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar8);
  }
  else if (lVar8 == 0) {
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    *(undefined4 *)(param_1 + 5) = 0;
    if (*(int *)((longlong)param_1 + 0x2c) < 0) {
      FUN_1446f8c06(param_1 + 4,0);
    }
    puVar2 = (undefined2 *)param_1[4];
    if (puVar2 != (undefined2 *)0x0) {
      *puVar2 = 0;
    }
    goto LAB_140a190f2;
  }
  FUN_1400bbfc4(&local_68,lVar8);
  *(undefined4 *)(param_1 + 2) = (undefined4)local_68;
  *(undefined4 *)((longlong)param_1 + 0x14) = local_68._4_4_;
  *(undefined4 *)(param_1 + 3) = uStack_60;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_5c;
  if (param_1 + 2 == &local_68) {
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (param_1[4] != 0) {
      FUN_1400020a8();
    }
    param_1[4] = local_58;
    local_58 = 0;
    *(undefined4 *)(param_1 + 5) = local_50;
    *(undefined4 *)((longlong)param_1 + 0x2c) = local_4c;
  }
  cVar4 = (*(code *)PTR_FUN_14c758760)();
  uVar1 = *(uint *)(lVar8 + 0xc);
  if (cVar4 != '\0') {
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar8 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar8 = 0;
    }
    if ((*(uint *)(lVar8 + 8) & 0x8400000) != 0) {
      param_1[1] = 0;
      goto LAB_140a190f2;
    }
  }
  *(uint *)(param_1 + 1) = uVar1;
  if ((int)uVar1 < DAT_14c9647dc) {
    lVar8 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
  }
  else {
    lVar8 = 0;
  }
  iVar5 = *(int *)(lVar8 + 0x10);
  if (*(int *)(lVar8 + 0x10) == 0) {
    LOCK();
    iVar5 = DAT_14c964868 + 1;
    UNLOCK();
    iVar12 = DAT_14c964868 + 1;
    bVar14 = DAT_14c964868 < 1000;
    DAT_14c964868 = iVar5;
    if (bVar14) {
      FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                    L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                    iVar12);
    }
    LOCK();
    iVar5 = *(int *)(lVar8 + 0x10);
    bVar14 = iVar5 == 0;
    if (bVar14) {
      *(int *)(lVar8 + 0x10) = iVar12;
      iVar5 = 0;
    }
    UNLOCK();
    if (bVar14) {
      iVar5 = iVar12;
    }
  }
  *(int *)((longlong)param_1 + 0xc) = iVar5;
LAB_140a190f2:
  plVar9 = plVar10;
  plVar10 = plVar9;
  if ((longlong *)plVar9[4] != (longlong *)0x0) goto code_r0x000140a19101;
  goto LAB_140a19111;
code_r0x000140a19101:
  plVar10 = (longlong *)plVar9[4];
  if ((*(uint *)(plVar9 + 1) >> 0x1c & 1) != 0) {
    plVar10 = (longlong *)FUN_142840154(plVar9);
LAB_140a19111:
    if (plVar10 == (longlong *)0x0) {
      plVar10 = (longlong *)plVar9[4];
      goto LAB_140a190f2;
    }
    goto LAB_140a1911a;
  }
  goto LAB_140a190f2;
LAB_140a1911a:
  plVar13 = param_3;
  plVar9 = plVar13;
  if ((longlong *)plVar13[4] != (longlong *)0x0) goto code_r0x000140a19129;
  goto LAB_140a19139;
code_r0x000140a19129:
  param_3 = (longlong *)plVar13[4];
  if ((*(uint *)(plVar13 + 1) >> 0x1c & 1) == 0) goto LAB_140a1911a;
  plVar9 = (longlong *)FUN_142840154(plVar13);
LAB_140a19139:
  if (plVar9 == (longlong *)0x0) {
    param_3 = (longlong *)plVar13[4];
    goto LAB_140a1911a;
  }
  if ((plVar10 != plVar9) &&
     ((((lVar8 = FUN_14019257c(lVar6), lVar8 == 0 || (lVar6 = FUN_14019257c(lVar6), lVar6 == 0)) ||
       (lVar8 = plVar7[0x15], lVar8 == 0)) ||
      ((lVar11 = FUN_144a79cc8(lVar8), lVar11 == 0 ||
       (lVar6 = FUN_14477b890(lVar6,lVar8), lVar6 == 0)))))) goto LAB_140a18f25;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  goto LAB_140a1915a;
}



// FUNCTION 140a196da FUN_140a196da body=12 status=ok
// SIG undefined FUN_140a196da(void)

bool FUN_140a196da(longlong param_1)

{
  return *(longlong *)(param_1 + 0x518) != 0;
}



// FUNCTION 140a196e6 FUN_140a196e6 body=300 status=ok
// SIG undefined FUN_140a196e6(void)

undefined8 FUN_140a196e6(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_68 [40];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_140a1980b;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_140a1980b;
    }
    FUN_140192332(param_1 + 0x18,&local_40,0);
  }
  else {
LAB_140a1980b:
    local_40 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_140a197b4;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5,param_2,param_3,param_4);
      uVar6 = 1;
      goto LAB_140a197b4;
    }
  }
  uVar6 = 0;
LAB_140a197b4:
  if ((local_40 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_40);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a19814 FUN_140a19814 body=26 status=ok
// SIG undefined FUN_140a19814(void)

void FUN_140a19814(undefined8 param_1)

{
  FUN_140a1982e();
  FUN_140a1994a(param_1);
  return;
}



// FUNCTION 140a1982e FUN_140a1982e body=107 status=ok
// SIG undefined FUN_140a1982e(void)

void FUN_140a1982e(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if (((*(int *)(param_1 + 0x2c) != 0) && (uVar1 = *(uint *)(param_1 + 0x28), -1 < (int)uVar1)) &&
     ((int)uVar1 < DAT_14c9647dc)) {
    plVar3 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar3 != (longlong *)0x0) && ((int)plVar3[2] == *(int *)(param_1 + 0x2c))) &&
       ((*(uint *)(plVar3 + 1) & 0x10200000) == 0)) {
      if ((*(uint *)(plVar3 + 1) & 0x10200000) == 0) {
        lVar2 = *plVar3;
      }
      else {
        lVar2 = 0;
      }
      if (*(longlong *)(lVar2 + 0x30) != 0) {
        FUN_144a53da8(*(longlong *)(lVar2 + 0x30),param_1 + 0x30);
        return;
      }
    }
  }
  return;
}



// FUNCTION 140a1989c FUN_140a1989c body=173 status=ok
// SIG undefined FUN_140a1989c(void)

void FUN_140a1989c(longlong *param_1,undefined8 param_2,undefined8 param_3)

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
        goto LAB_140a19933;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_140a19933:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 140a1994a FUN_140a1994a body=318 status=ok
// SIG undefined FUN_140a1994a(void)

void FUN_140a1994a(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [32];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if ((((((longlong)(int)param_1[0x16] != 0) && (*(int *)((longlong)param_1 + 0x2c) != 0)) &&
       (uVar1 = *(uint *)(param_1 + 5), -1 < (int)uVar1)) &&
      (((int)uVar1 < DAT_14c9647dc &&
       (plVar3 = (longlong *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
       plVar3 != (longlong *)0x0)))) &&
     (((int)plVar3[2] == *(int *)((longlong)param_1 + 0x2c) &&
      ((*(uint *)(plVar3 + 1) & 0x10200000) == 0)))) {
    if ((*(uint *)(plVar3 + 1) & 0x10200000) == 0) {
      lVar2 = *plVar3;
    }
    else {
      lVar2 = 0;
    }
    if ((*(longlong *)(lVar2 + 0x30) != 0) &&
       (lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0x30) + 0x3f0), lVar2 != 0)) {
      lVar4 = param_1[0x15];
      lVar5 = (longlong)(int)param_1[0x16] << 4;
      do {
        (**(code **)(*param_1 + 0x2b0))(param_1,local_b8);
        local_58 = local_98;
        uStack_50 = uStack_90;
        local_48 = local_88;
        FUN_140a19a8a(lVar2,lVar4,&local_58);
        lVar4 = lVar4 + 0x10;
        lVar5 = lVar5 + -0x10;
      } while (lVar5 != 0);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a19a8a FUN_140a19a8a body=520 status=ok
// SIG undefined FUN_140a19a8a(void)

void FUN_140a19a8a(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  char cVar6;
  longlong *plVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  undefined1 auStack_88 [40];
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(char *)(param_1 + 0x120) == '\x01') {
    plVar7 = (longlong *)FUN_148827d60(param_1 + 0x110);
    *plVar7 = *param_2;
    plVar7[3] = param_3[2];
    uVar2 = *(undefined4 *)((longlong)param_3 + 4);
    uVar3 = *(undefined4 *)(param_3 + 1);
    uVar4 = *(undefined4 *)((longlong)param_3 + 0xc);
    *(undefined4 *)(plVar7 + 1) = *(undefined4 *)param_3;
    *(undefined4 *)((longlong)plVar7 + 0xc) = uVar2;
    *(undefined4 *)(plVar7 + 2) = uVar3;
    *(undefined4 *)((longlong)plVar7 + 0x14) = uVar4;
    goto LAB_140a19c6d;
  }
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    lVar1 = *param_2;
    lVar9 = param_1 + 0x40;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      lVar9 = *(longlong *)(param_1 + 0x48);
    }
    iVar8 = *(int *)(lVar9 + (ulonglong)
                             (*(int *)(param_1 + 0x50) - 1U &
                             (int)lVar1 + (int)((ulonglong)lVar1 >> 0x20) * 0x17) * 4);
    if (iVar8 != -1) {
      lVar9 = *(longlong *)(param_1 + 8);
      iVar10 = iVar8;
      do {
        if (*(longlong *)(lVar9 + (longlong)iVar10 * 0x90) == lVar1) goto LAB_140a19b1f;
        iVar10 = *(int *)((longlong)iVar10 * 0x90 + lVar9 + 0x88);
      } while (iVar10 != -1);
    }
  }
  goto LAB_140a19c8b;
  while (iVar8 = *(int *)(lVar11 + 0x88), iVar8 != -1) {
LAB_140a19b1f:
    lVar11 = lVar9 + (longlong)iVar8 * 0x90;
    if (*(longlong *)(lVar9 + (longlong)iVar8 * 0x90) == lVar1) goto LAB_140a19b38;
  }
  lVar11 = 0;
LAB_140a19b38:
  if (*(int *)(lVar11 + 0x10) != 1) {
    *(undefined8 *)(lVar11 + 0x50) = param_3[2];
    uVar5 = param_3[1];
    *(undefined8 *)(lVar11 + 0x40) = *param_3;
    *(undefined8 *)(lVar11 + 0x48) = uVar5;
    *(undefined8 *)(lVar11 + 0x18) = 0;
    *(undefined8 *)(lVar11 + 0x20) = 0;
    *(undefined8 *)(lVar11 + 0x28) = 0;
    *(undefined8 *)(lVar11 + 0x30) = 0;
    *(undefined8 *)(lVar11 + 0x38) = 0;
LAB_140a19c6d:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_88);
  }
  if (*(char *)(param_1 + 0x108) == '\x01') {
    FUN_1449cd27a(param_1 + 0x98,param_2,lVar11 + 0x18);
  }
  *(undefined8 *)(lVar11 + 0x50) = param_3[2];
  uVar2 = *(undefined4 *)((longlong)param_3 + 4);
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *(undefined4 *)((longlong)param_3 + 0xc);
  *(undefined4 *)(lVar11 + 0x40) = *(undefined4 *)param_3;
  *(undefined4 *)(lVar11 + 0x44) = uVar2;
  *(undefined4 *)(lVar11 + 0x48) = uVar3;
  *(undefined4 *)(lVar11 + 0x4c) = uVar4;
  FUN_1404ebd58(lVar11 + 0x58,&local_60,param_3);
  *(undefined8 *)(lVar11 + 0x38) = local_40;
  *(undefined4 *)(lVar11 + 0x28) = local_50;
  *(undefined4 *)(lVar11 + 0x2c) = uStack_4c;
  *(undefined4 *)(lVar11 + 0x30) = uStack_48;
  *(undefined4 *)(lVar11 + 0x34) = uStack_44;
  *(undefined4 *)(lVar11 + 0x18) = local_60;
  *(undefined4 *)(lVar11 + 0x1c) = uStack_5c;
  *(undefined4 *)(lVar11 + 0x20) = uStack_58;
  *(undefined4 *)(lVar11 + 0x24) = uStack_54;
  if (*(char *)(param_1 + 0x108) == '\x01') {
    cVar6 = FUN_140a19cb0(param_1 + 200,lVar11 + 0x18);
    if (cVar6 != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_88);
    }
    FUN_140526ea2(param_1 + 0x98);
    *(undefined1 *)(param_1 + 0x108) = 0;
  }
LAB_140a19c8b:
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140a19cb0 FUN_140a19cb0 body=94 status=ok
// SIG undefined FUN_140a19cb0(void)

bool FUN_140a19cb0(double *param_1,double *param_2)

{
  if ((*param_1 < *param_2) && (*param_2 < param_1[2])) {
    if ((param_1[1] < param_2[1]) && (param_2[1] < param_1[3])) {
      if (param_2[2] <= *param_1) {
        return false;
      }
      if (param_1[2] <= param_2[2]) {
        return false;
      }
      if (param_1[1] < param_2[3]) {
        return param_2[3] < param_1[3];
      }
    }
  }
  return false;
}



// FUNCTION 140a19d0e FUN_140a19d0e body=124 status=ok
// SIG undefined FUN_140a19d0e(void)

void FUN_140a19d0e(longlong *param_1)

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



// FUNCTION 140a19d8a FUN_140a19d8a body=67 status=ok
// SIG undefined FUN_140a19d8a(void)

ulonglong FUN_140a19d8a(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  
  switchD_143c3d4dc::caseD_1d();
  if ((((*(uint *)(param_1 + 8) & 0x10) != 0) || (*(longlong *)(param_1 + 0x1c8) == 0)) ||
     (uVar2 = FUN_140a19dce(*(longlong *)(param_1 + 0x1c8),param_1 + 0x3b8), (char)uVar2 == '\0')) {
    LOCK();
    uVar1 = *(uint *)(param_1 + 0x3b8);
    *(uint *)(param_1 + 0x3b8) = 1;
    uVar2 = (ulonglong)uVar1;
    UNLOCK();
  }
  return uVar2;
}



// FUNCTION 140a19dce FUN_140a19dce body=1222 status=ok
// SIG undefined FUN_140a19dce(void)

undefined8 FUN_140a19dce(longlong param_1,uint *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  DWORD DVar7;
  DWORD DVar8;
  ulonglong uVar9;
  undefined4 *puVar10;
  uint *puVar11;
  undefined8 uVar12;
  uint uVar13;
  undefined ***pppuVar14;
  uint *puVar15;
  undefined8 *puVar16;
  undefined1 auStack_98 [32];
  undefined1 **local_78;
  undefined1 *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  uint *local_40;
  ulonglong local_28;
  
  uVar9 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_28 = uVar9;
  if (*(longlong *)(param_1 + 8) == 0) goto LAB_140a19ee8;
  *(byte *)(param_1 + 0xb0) = *(byte *)(param_1 + 0xb0) | 4;
  LOCK();
  *param_2 = 0;
  UNLOCK();
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar6 = *(int *)(lVar4 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar6 != 2) {
      if (iVar6 != 1) goto LAB_140a19e25;
      DVar7 = FUN_140ad26c0();
      DVar8 = GetCurrentThreadId();
      if (DVar7 == DVar8) goto LAB_140a19e2a;
      goto LAB_140a19e51;
    }
  }
  else {
LAB_140a19e25:
    if (iVar6 != 0x10) {
LAB_140a19e51:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar6 = *(int *)(lVar4 + 0xc60), iVar6 == 2))
        goto LAB_140a19e2a;
        if (iVar6 == 1) {
          DVar7 = FUN_140ad26c0();
          DVar8 = GetCurrentThreadId();
          if (DVar7 == DVar8) goto LAB_140a19e2a;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar11 = (uint *)*puVar2;
        if (puVar11 != (uint *)0x0) goto LAB_140a19fb4;
        while( true ) {
          uVar13 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar13 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar13 | 1;
            __tlregdtor(&LAB_1438fbf1b);
          }
          lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar10 = *(undefined4 **)(lVar4 + 0x310);
          *(undefined8 *)(lVar4 + 0x310) = 0;
          if (puVar10 == (undefined4 *)0x0) {
            puVar10 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar10 = 0xffffffff;
          *(undefined4 **)(puVar10 + 0x10) = puVar10 + 0x16;
          puVar10[0x12] = 0;
          *puVar2 = puVar10;
          FUN_140217a48(puVar2);
          puVar11 = (uint *)*puVar2;
LAB_140a19fb4:
          puVar16 = (undefined8 *)(*(longlong *)(puVar11 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar15 = (uint *)(puVar16 + 0x16);
          uVar13 = puVar11[0x12];
          if (puVar15 <= puVar11 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar11 + 0x10) = puVar11 + 0x4000;
            LOCK();
            uVar3 = *puVar11;
            *puVar11 = *puVar11 + uVar13 + 1;
            UNLOCK();
            if ((uVar3 ^ uVar13) != 0xffffffff) break;
            puVar11 = (uint *)*puVar2;
            *puVar11 = 0xffffffff;
            *(uint **)(puVar11 + 0x10) = puVar11 + 0x16;
            puVar11[0x12] = 0;
            *puVar2 = puVar11;
            puVar16 = (undefined8 *)((longlong)puVar11 + 0x5fU & 0xfffffffffffffff8);
            puVar15 = (uint *)(puVar16 + 0x16);
            uVar13 = 0;
            if (puVar15 <= puVar11 + 0x4000) {
              uVar13 = 1;
              goto LAB_140a1a034;
            }
          }
        }
        uVar13 = uVar13 + 1;
LAB_140a1a034:
        *(uint **)(puVar11 + 0x10) = puVar15;
        puVar11[0x12] = uVar13;
        iVar6 = 0;
        FUN_1447247dc(puVar16,0);
        *puVar16 = &PTR_FUN_14ad4f480;
        puVar16[0x15] = param_2;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar13 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar13 < 2) {
            uVar9 = (ulonglong)(byte)(&DAT_149e38edc)[uVar13];
            iVar6 = 0;
          }
          else {
            uVar9 = 2;
          }
        }
        else {
          iVar6 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                  *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar9 = 5;
        }
        if (*(code **)(puVar16[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar16[0xe] + 0x18))(puVar16 + 0xe,puVar16 + 9);
        }
        puVar16[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar16[9] = puVar16;
        puVar16[10] = puVar16;
        lVar4 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar4 == 0) {
          uVar5 = 1;
          if ((char)uVar9 != '\x06') {
            uVar5 = uVar9;
          }
          uVar9 = uVar5;
          uVar12 = 0;
        }
        else {
          if ((char)uVar9 == '\x06') {
            uVar9 = *(ulonglong *)(lVar4 + 0x38) >> 0x3b;
          }
          uVar12 = *(undefined8 *)(lVar4 + 0x30);
        }
        puVar16[0xf] = uVar12;
        puVar16[0x10] = uVar9 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar16 + 0x1c) = iVar6;
        if (puVar16 == (undefined8 *)0x0) {
          local_68[0] = (undefined1 *)CONCAT71(local_68[0]._1_7_,1);
          uVar9 = FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar16 + 1) = *(int *)(puVar16 + 1) + 1;
          UNLOCK();
          local_68[0] = (undefined1 *)CONCAT71(local_68[0]._1_7_,1);
          uVar9 = FUN_1447439e4(puVar16);
          LOCK();
          piVar1 = (int *)(puVar16 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            uVar9 = (**(code **)*puVar16)(puVar16,1);
          }
        }
      }
      else {
        local_78 = local_68;
        local_58 = (undefined ***)0x0;
        local_48 = &PTR_LAB_14ad4f460;
        local_68[0] = &LAB_1438fc0a6;
        local_40 = param_2;
        uVar9 = FUN_14005a792(&DAT_14ca9a440,L"BeginDestroyCommand",&DAT_14cb35844);
        if (local_68[0] != (undefined1 *)0x0) {
          pppuVar14 = local_58;
          if (local_58 == (undefined ***)0x0) {
            pppuVar14 = &local_48;
          }
          uVar9 = (*(code *)(*pppuVar14)[2])();
        }
      }
      goto LAB_140a19ee8;
    }
  }
LAB_140a19e2a:
  LOCK();
  uVar13 = *param_2;
  *param_2 = 1;
  uVar9 = (ulonglong)uVar13;
  UNLOCK();
LAB_140a19ee8:
  uVar9 = CONCAT71((int7)(uVar9 >> 8),*(undefined1 *)(param_1 + 0xb0)) & 0xffffffffffffff04;
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return CONCAT71((int7)(uVar9 >> 8),(byte)uVar9 >> 2);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a1a296 FUN_140a1a296 body=35 status=ok
// SIG undefined FUN_140a1a296(void)

void FUN_140a1a296(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14067a286(param_2);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000140a1a2ab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x38))();
    return;
  }
  FUN_140a1a2ba();
  return;
}



// FUNCTION 140a1a2ba FUN_140a1a2ba body=94 status=ok
// SIG undefined FUN_140a1a2ba(void)

void FUN_140a1a2ba(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_140a1a318();
  puVar1[1] = 0;
  *(undefined1 *)(puVar1 + 2) = 0;
  *puVar1 = &PTR_FUN_14b04c490;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0x3f8000003e99999a;
  *(undefined4 *)(puVar1 + 7) = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x49) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x51) = 0;
  *(undefined4 *)((longlong)puVar1 + 0x5c) = 0x3f800000;
  *(undefined2 *)(puVar1 + 0xc) = 0;
  return;
}



// FUNCTION 140a1a318 FUN_140a1a318 body=84 status=ok
// SIG undefined FUN_140a1a318(void)

void FUN_140a1a318(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  
  plVar2 = (longlong *)*param_1;
  if (plVar2 == (longlong *)0x0) {
    plVar2 = (longlong *)FUN_140595974(0x680,0);
    lVar4 = 0xf;
    plVar1 = plVar2;
    do {
      plVar3 = plVar1 + 0xd;
      *plVar1 = (longlong)plVar3;
      lVar4 = lVar4 + -1;
      plVar1 = plVar3;
    } while (lVar4 != 0);
    *plVar3 = *param_1;
    *param_1 = (longlong)plVar2;
    *(int *)(param_1 + 1) = (int)param_1[1] + 0x10;
  }
  *param_1 = *plVar2;
  *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + 1;
  return;
}



// FUNCTION 140a1a374 FUN_140a1a374 body=328 status=ok
// SIG undefined FUN_140a1a374(void)

undefined8 * FUN_140a1a374(undefined8 *param_1)

{
  byte bVar1;
  
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[1] = 0;
  *param_1 = &PTR_FUN_14b2f9270;
  *(undefined4 *)(param_1 + 4) = 0x4fc71eb4;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0x447a0000;
  FUN_1446f470e(param_1 + 0xb,L"Velocity",1);
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  bVar1 = *(byte *)(param_1 + 0x1d);
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0x40c3880000000000;
  param_1[0x22] = 0;
  *(undefined2 *)(param_1 + 0x23) = 0;
  memset(param_1 + 0x24,0,0xa8);
  param_1[0x39] = 0x3e4ccccd42c80000;
  *(undefined1 *)(param_1 + 0x3a) = 1;
  param_1[0x3b] = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0x4fc71eb6;
  param_1[0x3d] = 0;
  *(undefined4 *)((longlong)param_1 + 0x1ef) = 0;
  *(undefined4 *)((longlong)param_1 + 500) = 0x41800000;
  *(undefined2 *)(param_1 + 0x3f) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1fc) = 0;
  *(undefined1 *)((longlong)param_1 + 0x204) = 0;
  *(byte *)(param_1 + 0x1d) = (bVar1 & 0xfc) + 1;
  return param_1;
}



// FUNCTION 140a1a4bc FUN_140a1a4bc body=197 status=ok
// SIG undefined FUN_140a1a4bc(void)

longlong FUN_140a1a4bc(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5)

{
  longlong lVar1;
  
  lVar1 = 8;
  do {
    *(undefined8 *)(param_1 + -8 + lVar1) = 0xffffffffffffffff;
    *(undefined8 *)(param_1 + lVar1) = 0;
    ((undefined8 *)(param_1 + lVar1))[1] = 0;
    *(undefined1 *)(param_1 + 0x10 + lVar1) = 0;
    lVar1 = lVar1 + 0x20;
  } while (lVar1 != 0x808);
  *(undefined8 *)(param_1 + 0x800) = param_5;
  *(undefined8 *)(param_1 + 0x808) = 0;
  *(undefined8 *)(param_1 + 0x810) = 0;
  FUN_140a1a5e0(*param_2,param_1 + 0x818);
  *(undefined8 *)(param_1 + 0x860) = 0;
  *(undefined8 *)(param_1 + 0x868) = 0x400000000;
  *(undefined8 *)(param_1 + 0x838) = 0;
  *(undefined8 *)(param_1 + 0x840) = 0;
  *(undefined8 *)(param_1 + 0x848) = 0;
  *(undefined1 *)(param_1 + 0x870) = 0;
  FUN_140a1a694(param_1 + 0x878,param_4,param_2);
  if (*(int *)(param_1 + 0x87c) != -1) {
    FUN_140a1a582(param_4);
  }
  return param_1;
}



// FUNCTION 140a1a582 FUN_140a1a582 body=94 status=ok
// SIG undefined FUN_140a1a582(void)

void FUN_140a1a582(longlong *param_1,uint param_2)

{
  char cVar1;
  ulonglong uVar2;
  
  uVar2 = (**(code **)(*param_1 + 0x280))();
  if ((uint)uVar2 == param_2) {
    return;
  }
  if ((uVar2 != 0xffffffffffffffff) &&
     (cVar1 = FUN_142a64198(&DAT_14c998008,uVar2 & 0xffffffff,param_2), cVar1 == '\0')) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000140a1a5d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x278))(param_1,(ulonglong)param_2 | 0xffffffff00000000);
  return;
}



// FUNCTION 140a1a5e0 FUN_140a1a5e0 body=180 status=ok
// SIG undefined FUN_140a1a5e0(void)

undefined8 * FUN_140a1a5e0(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x18);
  if (plVar3 == (longlong *)0x0) {
LAB_140a1a646:
    param_2[2] = 0;
    param_2[3] = 0;
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_140a1a646;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar7 = iVar6 == iVar5;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar7);
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = uVar4;
    param_2[3] = plVar3;
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
  if ((((*(byte *)(param_1 + 0x20) & 0x10) == 0) && (*(int *)(param_1 + 0x30) != 0)) &&
     (*(int *)(param_1 + 0x24) != 0)) {
    FUN_140a02ca4(param_2,*(int *)(param_1 + 0x24),1);
    FUN_140a02d18(param_1,param_2);
    FUN_140a02d8c(param_1,param_2,param_3);
  }
  return param_2;
}



// FUNCTION 140a1a694 FUN_140a1a694 body=244 status=ok
// SIG undefined FUN_140a1a694(void)

undefined8 * FUN_140a1a694(undefined8 *param_1,longlong param_2,longlong *param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  bool bVar7;
  
  iVar1 = *(int *)(*param_3 + 0x30);
  if ((((iVar1 < 1) || (DAT_14c75f429 == '\0')) || (DAT_14c998208 == '\0')) ||
     ((*(byte *)(*param_3 + 0x20) & 6) == 0)) {
    *param_1 = 0xffffffffffffffff;
  }
  else {
    if (param_2 == 0) {
      uVar5 = 0;
    }
    else {
      uVar2 = *(uint *)(param_2 + 0xc);
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
        iVar4 = DAT_14c964868 + 1;
        bVar7 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar3;
        if (bVar7) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar4);
        }
        LOCK();
        iVar3 = *(int *)(lVar6 + 0x10);
        bVar7 = iVar3 == 0;
        if (bVar7) {
          *(int *)(lVar6 + 0x10) = iVar4;
          iVar3 = 0;
        }
        UNLOCK();
        if (bVar7) {
          iVar3 = iVar4;
        }
      }
      uVar5 = CONCAT44(iVar3,uVar2);
    }
    FUN_140ced798(&DAT_14c998008,param_1,uVar5,iVar1);
  }
  return param_1;
}



// FUNCTION 140a1a788 FUN_140a1a788 body=343 status=ok
// SIG undefined FUN_140a1a788(void)

undefined4 *
FUN_140a1a788(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

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
  FUN_140a1a978(param_1,local_48);
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
  cVar3 = FUN_140a1a8e0(param_1,uVar8,local_40);
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
      FUN_140a1ab4e(param_1);
    }
  }
  *param_2 = local_4c;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a1a8e0 FUN_140a1a8e0 body=152 status=ok
// SIG undefined FUN_140a1a8e0(void)

void FUN_140a1a8e0(longlong *param_1,uint param_2,longlong *param_3,int *param_4,undefined1 *param_5
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
          FUN_1406a1396((int)lVar3,*param_4,1);
          *param_4 = iVar7;
          uVar5 = 1;
          break;
        }
        iVar7 = (int)plVar6[2];
        uVar5 = 0;
      } while (iVar7 != -1);
      goto LAB_140a1a92b;
    }
  }
  uVar5 = 0;
LAB_140a1a92b:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar5;
  }
  return;
}



// FUNCTION 140a1a978 FUN_140a1a978 body=470 status=ok
// SIG undefined FUN_140a1a978(void)

int * FUN_140a1a978(longlong *param_1,int *param_2)

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
      FUN_1403951a8(param_1,iVar11);
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



// FUNCTION 140a1ab4e FUN_140a1ab4e body=594 status=ok
// SIG undefined FUN_140a1ab4e(void)

void FUN_140a1ab4e(longlong *param_1)

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
            if (iVar3 - lVar14 == lVar13) goto LAB_140a1ad57;
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
LAB_140a1ad57:
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a1ada8 FUN_140a1ada8 body=57 status=ok
// SIG undefined FUN_140a1ada8(void)

void FUN_140a1ada8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba8e30 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba8e30 = FUN_140002ddd(FUN_1465d1e8a,uVar1,L"OakCinematicModeDef");
  }
  return;
}



// FUNCTION 140a1ade6 FUN_140a1ade6 body=221 status=ok
// SIG undefined FUN_140a1ade6(void)

longlong FUN_140a1ade6(void)

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
  if (DAT_14cb4c248 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1484b832a;
    local_40 = &LAB_14582eba4;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0xb0;
    FUN_14081cfa3(L"/Script/GeometryFramework",L"DynamicMesh",&DAT_14cb4c248,FUN_1464920a2);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb4c248;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a1aeca FUN_140a1aeca body=135 status=ok
// SIG undefined FUN_140a1aeca(void)

void FUN_140a1aeca(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = *(longlong *)(param_1 + 0x3b0);
  if (lVar1 == 0) goto LAB_140a1af21;
  if ((param_1 == 0) || (DAT_14c950c29 == '\0')) {
    if (param_1 != 0) goto LAB_140a1af06;
    local_20 = 0;
  }
  else {
    FUN_1456cec3c(param_1);
LAB_140a1af06:
    local_20 = param_1 + 0x210;
  }
  local_28 = param_1;
  FUN_140a1af52(lVar1,&local_28,0);
LAB_140a1af21:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a1af52 FUN_140a1af52 body=824 status=ok
// SIG undefined FUN_140a1af52(void)

void FUN_140a1af52(longlong param_1,longlong *param_2,byte param_3)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  undefined8 *puVar11;
  bool bVar12;
  
  plVar2 = *(longlong **)(param_1 + 0x78);
  lVar4 = *param_2;
  if (plVar2 == (longlong *)0x0) {
    if (lVar4 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = param_2[1];
    }
    if (param_3 == 0) {
      if ((longlong)*(int *)(param_1 + 0x30) < 1) {
        return;
      }
      lVar7 = param_1 + 0x28;
      iVar6 = 1;
      lVar5 = 0;
      while (*(longlong *)(*(longlong *)(param_1 + 0x28) + lVar5) != lVar4) {
        lVar5 = lVar5 + 0x18;
        iVar6 = iVar6 + 1;
        if ((longlong)*(int *)(param_1 + 0x30) * 0x18 == lVar5) {
          return;
        }
      }
      puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x28) + lVar5);
      iVar10 = *(int *)(param_1 + 0xa0);
      *(uint *)(param_1 + 0xa0) = iVar10 + 1U;
      if (*(uint *)(param_1 + 0xa4) < iVar10 + 1U) {
        FUN_140a1b28a(param_1 + 0x98,iVar10);
      }
      lVar4 = *(longlong *)(param_1 + 0x98);
      *(undefined8 *)(lVar4 + 0x10 + (longlong)iVar10 * 0x18) = puVar11[2];
      uVar3 = puVar11[1];
      puVar1 = (undefined8 *)(lVar4 + (longlong)iVar10 * 0x18);
      *puVar1 = *puVar11;
      puVar1[1] = uVar3;
      iVar10 = *(int *)(param_1 + 0x30);
      iVar6 = iVar10 - iVar6;
      if (iVar6 != 0) {
        iVar8 = 1;
        if (iVar6 < 1) {
          iVar8 = iVar6;
        }
        memmove((void *)(lVar5 + *(longlong *)(param_1 + 0x28)),
                (void *)(*(longlong *)(param_1 + 0x28) + (longlong)(iVar10 - iVar8) * 0x18),
                (longlong)iVar8 * 0x18);
        iVar10 = *(int *)(param_1 + 0x30);
      }
      *(int *)(param_1 + 0x30) = iVar10 + -1;
    }
    else {
      if ((longlong)*(int *)(param_1 + 0xa0) < 1) {
        return;
      }
      lVar7 = param_1 + 0x98;
      iVar6 = 1;
      lVar5 = 0;
      while (*(longlong *)(*(longlong *)(param_1 + 0x98) + lVar5) != lVar4) {
        lVar5 = lVar5 + 0x18;
        iVar6 = iVar6 + 1;
        if ((longlong)*(int *)(param_1 + 0xa0) * 0x18 == lVar5) {
          return;
        }
      }
      puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x98) + lVar5);
      iVar10 = *(int *)(param_1 + 0x30);
      *(uint *)(param_1 + 0x30) = iVar10 + 1U;
      if (*(uint *)(param_1 + 0x34) < iVar10 + 1U) {
        FUN_140a1b28a(param_1 + 0x28,iVar10);
      }
      lVar4 = *(longlong *)(param_1 + 0x28);
      *(undefined8 *)(lVar4 + 0x10 + (longlong)iVar10 * 0x18) = puVar11[2];
      uVar3 = puVar11[1];
      puVar1 = (undefined8 *)(lVar4 + (longlong)iVar10 * 0x18);
      *puVar1 = *puVar11;
      puVar1[1] = uVar3;
      iVar10 = *(int *)(param_1 + 0xa0);
      iVar6 = iVar10 - iVar6;
      if (iVar6 != 0) {
        iVar8 = 1;
        if (iVar6 < 1) {
          iVar8 = iVar6;
        }
        memmove((void *)(lVar5 + *(longlong *)(param_1 + 0x98)),
                (void *)(*(longlong *)(param_1 + 0x98) + (longlong)(iVar10 - iVar8) * 0x18),
                (longlong)iVar8 * 0x18);
        iVar10 = *(int *)(param_1 + 0xa0);
      }
      *(int *)(param_1 + 0xa0) = iVar10 + -1;
    }
    FUN_140c2b914(lVar7);
    return;
  }
  if ((lVar4 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar4);
    lVar7 = param_2[1];
  }
  else {
    lVar7 = param_2[1];
    if (lVar4 == 0) {
      uVar9 = 0;
      iVar6 = 0;
      goto LAB_140a1b11c;
    }
  }
  uVar9 = *(uint *)(lVar4 + 0xc);
  if ((int)uVar9 < DAT_14c9647dc) {
    lVar5 = (ulonglong)((uVar9 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8);
  }
  else {
    lVar5 = 0;
  }
  iVar6 = *(int *)(lVar5 + 0x10);
  if (*(int *)(lVar5 + 0x10) == 0) {
    LOCK();
    iVar6 = DAT_14c964868 + 1;
    UNLOCK();
    iVar10 = DAT_14c964868 + 1;
    bVar12 = DAT_14c964868 < 1000;
    DAT_14c964868 = iVar6;
    if (bVar12) {
      FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                    L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                    iVar10);
    }
    LOCK();
    iVar6 = *(int *)(lVar5 + 0x10);
    bVar12 = iVar6 == 0;
    if (bVar12) {
      *(int *)(lVar5 + 0x10) = iVar10;
      iVar6 = 0;
    }
    UNLOCK();
    if (bVar12) {
      iVar6 = iVar10;
    }
  }
LAB_140a1b11c:
  iVar10 = (int)plVar2[1];
  *(uint *)(plVar2 + 1) = iVar10 + 1U;
  if (*(uint *)((longlong)plVar2 + 0xc) < iVar10 + 1U) {
    FUN_140a1b400(plVar2,iVar10);
  }
  plVar2 = (longlong *)(*plVar2 + (longlong)iVar10 * 0x28);
  *plVar2 = lVar4;
  if ((lVar4 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar4);
  }
  plVar2[1] = lVar7;
  *(uint *)(plVar2 + 2) = uVar9;
  *(int *)((longlong)plVar2 + 0x14) = iVar6;
  plVar2[3] = 0;
  *(undefined4 *)(plVar2 + 4) = 0x100;
  *(uint *)((longlong)plVar2 + 0x24) = param_3 ^ 3;
  return;
}



// FUNCTION 140a1b28a FUN_140a1b28a body=373 status=ok
// SIG undefined FUN_140a1b28a(void)

void FUN_140a1b28a(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140a1b313;
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
LAB_140a1b313:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x18)) {
    uVar7 = uVar5 / 0x18 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x18,8);
  return;
}



// FUNCTION 140a1b400 FUN_140a1b400 body=373 status=ok
// SIG undefined FUN_140a1b400(void)

void FUN_140a1b400(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140a1b489;
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
LAB_140a1b489:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x28)) {
    uVar7 = uVar5 / 0x28 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x28,8);
  return;
}



// FUNCTION 140a1b576 FUN_140a1b576 body=164 status=ok
// SIG undefined FUN_140a1b576(void)

void FUN_140a1b576(void)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (DAT_14ca98538 == (longlong *)0x0) {
    DAT_14ca98538 = (longlong *)FUN_14001cc68(0x10,0x10);
    *DAT_14ca98538 = 0;
    DAT_14ca98538[1] = 0;
  }
  else {
    lVar3 = DAT_14ca98538[1];
    if ((longlong)(int)lVar3 == 0) goto LAB_140a1b5ba;
    lVar2 = *DAT_14ca98538;
    lVar5 = 0;
    do {
      (*(code *)**(undefined8 **)(lVar2 + lVar5))((*(undefined8 **)(lVar2 + lVar5))[1]);
      lVar5 = lVar5 + 8;
    } while ((longlong)(int)lVar3 * 8 != lVar5);
  }
  if (DAT_14ca98538 == (longlong *)0x0) {
    DAT_14ca98538 = (longlong *)FUN_14001cc68(0x10,0x10);
    *DAT_14ca98538 = 0;
    DAT_14ca98538[1] = 0;
    return;
  }
LAB_140a1b5ba:
  plVar4 = DAT_14ca98538;
  piVar1 = (int *)((longlong)DAT_14ca98538 + 0xc);
  *(undefined4 *)(DAT_14ca98538 + 1) = 0;
  if (*piVar1 == 0) {
    return;
  }
  FUN_145763210(plVar4,0);
  return;
}



// FUNCTION 140a1b624 FUN_140a1b624 body=57 status=ok
// SIG undefined FUN_140a1b624(void)

void FUN_140a1b624(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb229c0 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb229c0 = FUN_140002ddd(FUN_14643a144,uVar1,L"GpsGenerator_Grid");
  }
  return;
}



// FUNCTION 140a1b664 FUN_140a1b664 body=124 status=ok
// SIG undefined FUN_140a1b664(void)

void FUN_140a1b664(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  
  lVar2 = *(longlong *)(param_1 + 0x630);
  if ((lVar2 != 0) && (iVar1 = *(int *)(lVar2 + 0xa8), (longlong)iVar1 != 0)) {
    lVar3 = *(longlong *)(lVar2 + 0xa0);
    lVar5 = 0;
    do {
      plVar4 = *(longlong **)(lVar3 + lVar5);
      (**(code **)(*plVar4 + 0x28))(plVar4,lVar2);
      lVar5 = lVar5 + 8;
    } while ((longlong)iVar1 * 8 != lVar5);
  }
  if (*(longlong *)(param_1 + 0x558) == 0) {
    return;
  }
  FUN_140457ffc(*(longlong *)(param_1 + 0x558) + 0x1258,param_1);
  return;
}



// FUNCTION 140a1b6fc FUN_140a1b6fc body=96 status=ok
// SIG undefined FUN_140a1b6fc(void)

void FUN_140a1b6fc(longlong param_1,int param_2)

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



// FUNCTION 140a1b75c FUN_140a1b75c body=40 status=ok
// SIG undefined FUN_140a1b75c(void)

undefined8 FUN_140a1b75c(undefined8 param_1,int param_2)

{
  FUN_140a1b784();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140a1b784 FUN_140a1b784 body=102 status=ok
// SIG undefined FUN_140a1b784(void)

void FUN_140a1b784(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a463de0;
  FUN_140a1b7ea(param_1 + 0x16);
  *(undefined4 *)(param_1 + 0x15) = 0;
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  FUN_140a1b822(param_1 + 0xc);
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 140a1b7ea FUN_140a1b7ea body=55 status=ok
// SIG undefined FUN_140a1b7ea(void)

void FUN_140a1b7ea(longlong *param_1)

{
  FUN_140a1ba40(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140a1b822 FUN_140a1b822 body=55 status=ok
// SIG undefined FUN_140a1b822(void)

void FUN_140a1b822(longlong *param_1)

{
  FUN_140a1b85a(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140a1b85a FUN_140a1b85a body=484 status=ok
// SIG undefined FUN_140a1b85a(void)

void FUN_140a1b85a(longlong *param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
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
  puVar1 = (uint *)(param_1 + 2);
  iVar2 = (int)param_1[5];
  local_4c = 1;
  if (iVar2 == 0) {
    local_38 = 0;
    local_50 = 0;
    local_3c = 0;
  }
  else {
    puVar6 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar6 = puVar1;
    }
    uVar5 = *puVar6;
    if (uVar5 == 0) {
      iVar7 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar7 = iVar2 + -1;
      }
      uVar9 = 0;
      uVar8 = (ulonglong)(uint)(iVar7 >> 5);
      if (iVar7 >> 5 < 1) {
        uVar8 = uVar9;
      }
      local_50 = (int)uVar8 + 1;
      local_38 = (int)uVar8 * 0x20 + 0x20;
      iVar7 = 0;
      do {
        local_3c = iVar2;
        if (uVar8 == uVar9) goto LAB_140a1b915;
        iVar7 = iVar7 + 0x20;
        uVar5 = puVar6[uVar9 + 1];
        uVar9 = uVar9 + 1;
      } while (uVar5 == 0);
      local_50 = (int)uVar9;
      local_38 = iVar7;
    }
    else {
      local_38 = 0;
      local_50 = 0;
    }
    local_4c = -uVar5 & uVar5;
    uVar8 = (ulonglong)local_4c * 2 + 1;
    lVar3 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    local_3c = (local_38 - ((uint)lVar3 ^ 0x3f)) + 0x3e;
    if (iVar2 <= local_3c) {
      local_3c = iVar2;
    }
  }
LAB_140a1b915:
  local_40 = 0xffffffff;
  local_58 = param_1;
  local_48 = puVar1;
  if (local_3c < iVar2) {
    do {
      if (*(longlong *)(*local_58 + 0x10 + (longlong)local_3c * 0x28) != 0) {
        FUN_1400020a8();
      }
      local_40 = local_40 & ~local_4c;
      FUN_1449c0562(&local_50);
    } while (local_3c < (int)local_48[6]);
  }
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_140549ad6(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar5 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar5) ||
     (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
    uVar4 = 0x80;
    if (0x80 < (int)uVar5) {
      uVar4 = uVar5;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar4;
    FUN_1446efbd8(puVar1,0);
  }
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140a1ba40 FUN_140a1ba40 body=501 status=ok
// SIG undefined FUN_140a1ba40(void)

void FUN_140a1ba40(longlong *param_1,int param_2)

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
        if (uVar14 == uVar12) goto LAB_140a1bb84;
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
      FUN_1409ee0a6((longlong)iVar4 * 0x130 + *param_1);
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
          if (iVar7 - lVar11 == lVar9) goto LAB_140a1bb84;
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
LAB_140a1bb84:
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_140a1bc36(param_1,param_2);
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



// FUNCTION 140a1bc36 FUN_140a1bc36 body=224 status=ok
// SIG undefined FUN_140a1bc36(void)

void FUN_140a1bc36(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
    uVar1 = (longlong)param_2 * 0x130;
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
    if (param_2 <= (int)(uVar1 / 0x130)) {
      uVar2 = uVar1 / 0x130 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x130,8);
  }
  return;
}



// FUNCTION 140a1bd16 FUN_140a1bd16 body=91 status=ok
// SIG undefined FUN_140a1bd16(void)

void FUN_140a1bd16(longlong param_1)

{
  *(undefined4 *)(param_1 + 0xa0) = 0;
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FUN_1400020a8();
  }
  FUN_140a1bd72(param_1 + 0x58);
  *(undefined4 *)(param_1 + 0x50) = 0;
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_1400020a8();
  }
  FUN_140a1bdaa(param_1 + 8);
  return;
}



// FUNCTION 140a1bd72 FUN_140a1bd72 body=55 status=ok
// SIG undefined FUN_140a1bd72(void)

void FUN_140a1bd72(longlong *param_1)

{
  FUN_140a1bde2(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140a1bdaa FUN_140a1bdaa body=55 status=ok
// SIG undefined FUN_140a1bdaa(void)

void FUN_140a1bdaa(longlong *param_1)

{
  FUN_140a1be5e(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140a1bde2 FUN_140a1bde2 body=123 status=ok
// SIG undefined FUN_140a1bde2(void)

void FUN_140a1bde2(longlong param_1,int param_2)

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



// FUNCTION 140a1be5e FUN_140a1be5e body=123 status=ok
// SIG undefined FUN_140a1be5e(void)

void FUN_140a1be5e(longlong param_1,int param_2)

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



// FUNCTION 140a1beda FUN_140a1beda body=150 status=ok
// SIG undefined FUN_140a1beda(void)

void FUN_140a1beda(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  char cVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_140a1bf88();
  cVar2 = FUN_140a1c4b4(param_1,param_2,param_3);
  if (cVar2 == '\0') {
    cVar2 = FUN_140a1cb24(param_1,param_2,param_3);
    if (cVar1 == '\0' && cVar2 == '\x01') {
LAB_140a1bf4d:
      local_30 = param_3;
      FUN_1406074a2(param_1 + 8,param_1,&local_30,param_2);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
    }
  }
  else if (cVar1 == '\0') goto LAB_140a1bf4d;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a1bf88 FUN_140a1bf88 body=1050 status=ok
// SIG undefined FUN_140a1bf88(void)

undefined8 FUN_140a1bf88(longlong param_1,undefined8 *param_2,longlong param_3)

{
  byte bVar1;
  char cVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  code *pcVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong *plVar10;
  ulonglong uVar11;
  longlong *plVar12;
  undefined8 *_Src;
  longlong *plVar13;
  undefined8 *puVar14;
  uint *puVar15;
  uint *puVar16;
  longlong lVar17;
  undefined1 auStack_c8 [40];
  longlong local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong local_78 [3];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (DAT_14cb7e048 != (int)param_3) {
    plVar13 = *(longlong **)(param_1 + 0x198);
    iVar4 = *(int *)(param_1 + 0x1a0);
    lVar17 = (longlong)iVar4;
    if (lVar17 != 0) {
      lVar8 = lVar17 * 0x30;
      plVar10 = plVar13;
      do {
        if (*plVar10 == param_3) {
          if (plVar10 != (longlong *)0x0) {
            plVar13 = plVar10 + 1;
            bVar1 = *(byte *)(plVar10 + 5);
            if (bVar1 == *(byte *)(param_2 + 4)) {
              if (0x18 < *(ushort *)(param_2 + 3)) {
                param_2 = (undefined8 *)*param_2;
              }
              if (0x18 < *(ushort *)(plVar10 + 4)) {
                plVar13 = (longlong *)*plVar13;
              }
              uVar11 = (ulonglong)((uint)bVar1 * 0x120);
              pcVar7 = *(code **)((longlong)&DAT_14c9a85c0 + uVar11);
              if (pcVar7 == (code *)0x0) {
                memcpy(plVar13,param_2,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar11));
              }
              else {
                (*pcVar7)(plVar13,param_2);
              }
            }
            else {
              pcVar7 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar1 * 0x120));
              if (pcVar7 != (code *)0x0) {
                plVar12 = plVar13;
                if (0x18 < *(ushort *)(plVar10 + 4)) {
                  plVar12 = (longlong *)*plVar13;
                }
                (*pcVar7)(plVar12);
              }
              if (0x18 < *(ushort *)(plVar10 + 4)) {
                FUN_1400020a8(*plVar13);
              }
              bVar1 = *(byte *)(param_2 + 4);
              uVar3 = *(ushort *)(param_2 + 3);
              *(ushort *)(plVar10 + 4) = uVar3;
              puVar14 = param_2;
              if (0x18 < uVar3) {
                plVar12 = (longlong *)FUN_14001cc68(uVar3,0);
                *plVar13 = (longlong)plVar12;
                puVar14 = (undefined8 *)*param_2;
                plVar13 = plVar12;
              }
              pcVar7 = *(code **)((longlong)&DAT_14c9a85b0 + (ulonglong)((uint)bVar1 * 0x120));
              if (pcVar7 == (code *)0x0) {
                memcpy(plVar13,puVar14,
                       (longlong)
                       *(int *)((longlong)&DAT_14c9a8510 + (ulonglong)((uint)bVar1 * 0x120)));
              }
              else {
                (*pcVar7)(plVar13);
              }
              *(undefined1 *)(plVar10 + 5) = *(undefined1 *)(param_2 + 4);
            }
            goto LAB_140a1c24e;
          }
          break;
        }
        plVar10 = plVar10 + 6;
        lVar8 = lVar8 + -0x30;
      } while (lVar8 != 0);
    }
    if (0 < *(int *)(param_1 + 0x130)) {
      puVar14 = (undefined8 *)(param_1 + 0x198);
      *(uint *)(param_1 + 0x1a0) = iVar4 + 1U;
      if (*(uint *)(param_1 + 0x1a4) < iVar4 + 1U) {
        FUN_140a1c3a4(puVar14,iVar4);
        plVar13 = (longlong *)*puVar14;
      }
      plVar10 = plVar13 + lVar17 * 6;
      plVar12 = plVar10 + 1;
      *plVar10 = param_3;
      bVar1 = *(byte *)(param_2 + 4);
      uVar3 = *(ushort *)(param_2 + 3);
      *(ushort *)(plVar10 + 4) = uVar3;
      _Src = param_2;
      if (0x18 < uVar3) {
        plVar10 = (longlong *)FUN_14001cc68(uVar3,0);
        *plVar12 = (longlong)plVar10;
        _Src = (undefined8 *)*param_2;
        plVar12 = plVar10;
      }
      pcVar7 = *(code **)((longlong)&DAT_14c9a85b0 + (ulonglong)((uint)bVar1 * 0x120));
      if (pcVar7 == (code *)0x0) {
        memcpy(plVar12,_Src,
               (longlong)*(int *)((longlong)&DAT_14c9a8510 + (ulonglong)((uint)bVar1 * 0x120)));
      }
      else {
        (*pcVar7)(plVar12);
      }
      *(undefined1 *)(plVar13 + lVar17 * 6 + 5) = *(undefined1 *)(param_2 + 4);
      uVar5 = *(uint *)(param_1 + 0x1a0);
      if (0 < (int)uVar5) {
        lVar17 = *(longlong *)(param_1 + 0x198);
        *puVar14 = 0;
        *(undefined8 *)(param_1 + 0x1a0) = 0;
        puVar16 = (uint *)(param_1 + 0x68);
        if (*(uint **)(param_1 + 0x128) != (uint *)0x0) {
          puVar16 = *(uint **)(param_1 + 0x128);
        }
        if ((longlong)*(int *)(param_1 + 0x130) != 0) {
          puVar15 = puVar16 + (longlong)*(int *)(param_1 + 0x130) * 6;
          local_a0 = lVar17 + 8;
          do {
            if (((((puVar16[1] != 0) && (uVar6 = *puVar16, -1 < (int)uVar6)) &&
                 ((int)uVar6 < DAT_14c9647dc)) &&
                ((plVar13 = (longlong *)
                            ((ulonglong)((uVar6 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8)),
                 plVar13 != (longlong *)0x0 && (*(uint *)(plVar13 + 2) == puVar16[1])))) &&
               (((*(uint *)(plVar13 + 1) & 0x10200000) == 0 &&
                (plVar13 = (longlong *)*plVar13, plVar13 != (longlong *)0x0)))) {
              lVar8 = FUN_14081cebe();
              if (((*(int *)(lVar8 + 0x38) <= *(int *)(plVar13[2] + 0x38)) &&
                  (*(longlong *)
                    (*(longlong *)(plVar13[2] + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) ==
                   lVar8 + 0x30)) && ((*(uint *)(plVar13 + 1) & 0x20) == 0)) {
                local_78[0] = 0;
                local_78[1] = 0;
                (**(code **)(*plVar13 + 0x790))(plVar13,local_78,0);
                lVar8 = 0;
                do {
                  cVar2 = *(char *)(lVar17 + 0x28 + lVar8);
                  if (cVar2 == '\x18') {
                    FUN_140a1ca64(local_a0 + lVar8,&local_88);
                    local_98 = local_88;
                    uStack_94 = uStack_84;
                    uStack_90 = uStack_80;
                    uStack_8c = uStack_7c;
                    FUN_140654ea0(plVar13,*(undefined8 *)(lVar17 + lVar8),&local_98);
                  }
                  else if (cVar2 == '\x03') {
                    FUN_140a1d5a8(plVar13,*(undefined8 *)(lVar17 + lVar8),
                                  *(undefined4 *)(lVar17 + 8 + lVar8));
                  }
                  lVar8 = lVar8 + 0x30;
                } while ((ulonglong)uVar5 * 0x30 != lVar8);
                if (local_78[0] != 0) {
                  FUN_1400020a8();
                }
              }
            }
            puVar16 = puVar16 + 6;
          } while (puVar16 != puVar15);
        }
        FUN_140160ff5(lVar17,(ulonglong)uVar5);
        if (lVar17 != 0) {
          FUN_1400020a8(lVar17);
        }
      }
LAB_140a1c24e:
      uVar9 = 1;
      goto LAB_140a1bfe2;
    }
  }
  uVar9 = 0;
LAB_140a1bfe2:
  if ((local_60 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9;
}



// FUNCTION 140a1c3a4 FUN_140a1c3a4 body=272 status=ok
// SIG undefined FUN_140a1c3a4(void)

void FUN_140a1c3a4(longlong param_1,int param_2)

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



// FUNCTION 140a1c4b4 FUN_140a1c4b4 body=1455 status=ok
// SIG undefined FUN_140a1c4b4(void)

ulonglong FUN_140a1c4b4(longlong param_1,undefined8 *param_2,longlong param_3)

{
  int *piVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  code *pcVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 uVar9;
  longlong *plVar10;
  undefined ***pppuVar11;
  undefined8 *puVar12;
  int iVar13;
  ulonglong uVar14;
  undefined *puVar15;
  longlong *plVar16;
  longlong lVar17;
  longlong lVar18;
  bool bVar19;
  undefined1 auStack_e8 [32];
  code **local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  code *local_b0;
  undefined1 local_a0 [8];
  longlong *local_98;
  longlong local_90;
  code *local_88;
  longlong *local_80;
  undefined ***local_78;
  undefined **local_68;
  code *local_60;
  longlong *local_58;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_90 = param_3;
  if ((longlong)*(int *)(param_1 + 400) != 0) {
    plVar8 = *(longlong **)(param_1 + 0x188);
    lVar7 = (longlong)*(int *)(param_1 + 400) * 0x58;
    do {
      if (*plVar8 == param_3) {
        if (plVar8 != (longlong *)0x0) {
          plVar16 = plVar8 + 1;
          bVar2 = *(byte *)(plVar8 + 5);
          if (bVar2 == *(byte *)(param_2 + 4)) {
            if (0x18 < *(ushort *)(param_2 + 3)) {
              param_2 = (undefined8 *)*param_2;
            }
            if (0x18 < *(ushort *)(plVar8 + 4)) {
              plVar16 = (longlong *)*plVar16;
            }
            uVar14 = (ulonglong)((uint)bVar2 * 0x120);
            pcVar5 = *(code **)((longlong)&DAT_14c9a85c0 + uVar14);
            if (pcVar5 == (code *)0x0) {
              memcpy(plVar16,param_2,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar14));
            }
            else {
              (*pcVar5)(plVar16,param_2);
            }
          }
          else {
            pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar2 * 0x120));
            if (pcVar5 != (code *)0x0) {
              plVar10 = plVar16;
              if (0x18 < *(ushort *)(plVar8 + 4)) {
                plVar10 = (longlong *)*plVar16;
              }
              (*pcVar5)(plVar10);
            }
            if (0x18 < *(ushort *)(plVar8 + 4)) {
              FUN_1400020a8(*plVar16);
            }
            bVar2 = *(byte *)(param_2 + 4);
            uVar3 = *(ushort *)(param_2 + 3);
            *(ushort *)(plVar8 + 4) = uVar3;
            puVar12 = param_2;
            if (0x18 < uVar3) {
              plVar10 = (longlong *)FUN_14001cc68(uVar3,0);
              *plVar16 = (longlong)plVar10;
              puVar12 = (undefined8 *)*param_2;
              plVar16 = plVar10;
            }
            pcVar5 = *(code **)((longlong)&DAT_14c9a85b0 + (ulonglong)((uint)bVar2 * 0x120));
            if (pcVar5 == (code *)0x0) {
              memcpy(plVar16,puVar12,
                     (longlong)*(int *)((longlong)&DAT_14c9a8510 + (ulonglong)((uint)bVar2 * 0x120))
                    );
            }
            else {
              (*pcVar5)(plVar16);
            }
            *(undefined1 *)(plVar8 + 5) = *(undefined1 *)(param_2 + 4);
          }
          uVar14 = CONCAT71((int7)((ulonglong)plVar8 >> 8),1);
          goto LAB_140a1c501;
        }
        break;
      }
      plVar8 = plVar8 + 0xb;
      lVar7 = lVar7 + -0x58;
    } while (lVar7 != 0);
  }
  if ((*(int *)(param_1 + 0x130) < 1) ||
     ((lVar7 = FUN_144a5c5e8(param_1,&local_90), lVar7 == 0 && (DAT_14cb7e048 != (int)param_3)))) {
    uVar14 = 0;
  }
  else {
    iVar6 = *(int *)(param_1 + 400);
    *(uint *)(param_1 + 400) = iVar6 + 1U;
    if (*(uint *)(param_1 + 0x194) < iVar6 + 1U) {
      FUN_140a1d88a((longlong *)(param_1 + 0x188),iVar6);
    }
    lVar17 = *(longlong *)(param_1 + 0x188);
    plVar8 = (longlong *)((longlong)iVar6 * 0x58 + lVar17);
    plVar16 = plVar8 + 1;
    *plVar8 = param_3;
    bVar2 = *(byte *)(param_2 + 4);
    uVar3 = *(ushort *)(param_2 + 3);
    *(ushort *)(plVar8 + 4) = uVar3;
    puVar12 = param_2;
    if (0x18 < uVar3) {
      plVar8 = (longlong *)FUN_14001cc68(uVar3,0);
      *plVar16 = (longlong)plVar8;
      puVar12 = (undefined8 *)*param_2;
      plVar16 = plVar8;
    }
    lVar17 = lVar17 + (longlong)iVar6 * 0x58;
    pcVar5 = *(code **)((longlong)&DAT_14c9a85b0 + (ulonglong)((uint)bVar2 * 0x120));
    if (pcVar5 == (code *)0x0) {
      memcpy(plVar16,puVar12,
             (longlong)*(int *)((longlong)&DAT_14c9a8510 + (ulonglong)((uint)bVar2 * 0x120)));
    }
    else {
      (*pcVar5)(plVar16);
    }
    *(undefined1 *)(lVar17 + 0x28) = *(undefined1 *)(param_2 + 4);
    if (lVar7 == 0) {
      *(undefined8 *)(lVar17 + 0x30) = 0;
      lVar18 = 0;
    }
    else {
      for (uVar14 = *(ulonglong *)(lVar7 + 0x10); (uVar14 & 1) == 0;
          uVar14 = *(ulonglong *)(uVar14 + 0x10)) {
        if (uVar14 < 2) goto LAB_140a1c989;
      }
      uVar14 = uVar14 & 0xfffffffffffffffe;
      if (uVar14 == 0) {
LAB_140a1c989:
        *(undefined4 *)(lVar17 + 0x30) = 0;
        iVar6 = 0;
      }
      else {
        if (DAT_14c950c29 != '\0') {
          FUN_1456cec3c(uVar14);
        }
        *(undefined8 *)(lVar17 + 0x30) = 0;
        uVar4 = *(uint *)(uVar14 + 0xc);
        *(uint *)(lVar17 + 0x30) = uVar4;
        if ((int)uVar4 < DAT_14c9647dc) {
          lVar18 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
        }
        else {
          lVar18 = 0;
        }
        iVar6 = *(int *)(lVar18 + 0x10);
        if (*(int *)(lVar18 + 0x10) == 0) {
          LOCK();
          iVar6 = DAT_14c964868 + 1;
          UNLOCK();
          iVar13 = DAT_14c964868 + 1;
          bVar19 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar6;
          if (bVar19) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar13);
          }
          LOCK();
          iVar6 = *(int *)(lVar18 + 0x10);
          bVar19 = iVar6 == 0;
          if (bVar19) {
            *(int *)(lVar18 + 0x10) = iVar13;
            iVar6 = 0;
          }
          UNLOCK();
          if (bVar19) {
            iVar6 = iVar13;
          }
        }
      }
      *(int *)(lVar17 + 0x34) = iVar6;
      puVar15 = *(undefined **)(lVar7 + 8);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c951a88) && (FUN_144b3d300(&DAT_14c951a88), DAT_14c951a88 == -1))
      {
        local_b8 = FUN_140342cba();
        local_b0 = FUN_1468c7f1e;
        local_c0 = 0;
        local_c8 = (code **)0x8001;
        FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0);
        atexit(FUN_14280c819);
        _Init_thread_footer(&DAT_14c951a88);
      }
      if (DAT_14c951a40 == 0) {
        bVar19 = puVar15 != (undefined *)0x0;
        if (puVar15 != &DAT_14c951a38 && bVar19) {
          do {
            puVar15 = *(undefined **)(puVar15 + 0x30);
            bVar19 = puVar15 != (undefined *)0x0;
            if (puVar15 == &DAT_14c951a38) break;
          } while (puVar15 != (undefined *)0x0);
        }
      }
      else {
        bVar19 = (*(ulonglong *)(puVar15 + 0x18) & DAT_14c951a40) != 0;
      }
      lVar18 = 0;
      if (bVar19) {
        lVar18 = lVar7;
      }
    }
    *(undefined8 *)(lVar17 + 0x48) = 0;
    *(undefined8 *)(lVar17 + 0x50) = 0;
    *(undefined8 *)(lVar17 + 0x38) = 0;
    *(undefined8 *)(lVar17 + 0x40) = 0;
    FUN_1449651a4(lVar17 + 0x38,lVar18);
    uVar14 = CONCAT71((int7)((ulonglong)lVar7 >> 8),1);
    if (*(int *)(param_1 + 400) == 1) {
      uVar9 = FUN_1401cb356();
      if (param_1 == 0) {
        local_60 = (code *)0x0;
        local_80 = (longlong *)0x0;
      }
      else {
        FUN_140a1d53c(param_1,&local_88);
        local_60 = local_88;
        if (local_80 != (longlong *)0x0) {
          LOCK();
          *(int *)((longlong)local_80 + 0xc) = *(int *)((longlong)local_80 + 0xc) + 1;
          UNLOCK();
          if (local_80 != (longlong *)0x0) {
            LOCK();
            piVar1 = (int *)((longlong)local_80 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*local_80 + 0x10))();
            }
          }
        }
      }
      local_c8 = &local_88;
      local_78 = (undefined ***)0x0;
      local_68 = &PTR_LAB_14b405a20;
      local_88 = FUN_143d5e4a2;
      local_58 = local_80;
      FUN_1401cbba4(uVar9,local_a0,L"FGbxBodyNodeState_SceneComponent_SetComponentPropertyValue",0);
      if (local_98 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)local_98 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_98 + 0x10))();
        }
      }
      if (local_88 != (code *)0x0) {
        pppuVar11 = local_78;
        if (local_78 == (undefined ***)0x0) {
          pppuVar11 = &local_68;
        }
        (*(code *)(*pppuVar11)[2])();
      }
    }
  }
LAB_140a1c501:
  if ((local_40 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return uVar14 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a1ca64 FUN_140a1ca64 body=191 status=ok
// SIG undefined FUN_140a1ca64(void)

undefined4 * FUN_140a1ca64(undefined4 *param_1,undefined4 *param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 ***pppuVar5;
  undefined1 auStack_68 [40];
  undefined8 **local_40 [3];
  ushort local_28;
  byte local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(char *)(param_1 + 8) == '\x18') {
    uVar2 = param_1[1];
    uVar3 = param_1[2];
    uVar4 = param_1[3];
    *param_2 = *param_1;
    param_2[1] = uVar2;
    param_2[2] = uVar3;
    param_2[3] = uVar4;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_68);
  }
  FUN_1400b56fe(local_40,param_1,0x18);
  pppuVar5 = (undefined8 ***)&DAT_14c9ab240;
  if (local_20 != 0) {
    pppuVar5 = local_40;
  }
  uVar2 = *(undefined4 *)((longlong)pppuVar5 + 4);
  uVar3 = *(undefined4 *)(pppuVar5 + 1);
  uVar4 = *(undefined4 *)((longlong)pppuVar5 + 0xc);
  *param_2 = *(undefined4 *)pppuVar5;
  param_2[1] = uVar2;
  param_2[2] = uVar3;
  param_2[3] = uVar4;
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_20 * 0x120));
  if (pcVar1 != (code *)0x0) {
    pppuVar5 = local_40;
    if (0x18 < local_28) {
      pppuVar5 = (undefined8 ***)local_40[0];
    }
    (*pcVar1)(pppuVar5);
  }
  if (0x18 < local_28) {
    FUN_1400020a8(local_40[0]);
  }
  if ((local_18 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 140a1cb24 FUN_140a1cb24 body=2311 status=ok
// SIG undefined FUN_140a1cb24(void)

undefined8 FUN_140a1cb24(longlong param_1,undefined8 *param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  byte bVar4;
  ushort uVar5;
  int iVar6;
  void *_Src;
  code *pcVar7;
  bool bVar8;
  char cVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 uVar13;
  longlong *plVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  uint *puVar18;
  longlong *plVar19;
  undefined8 *_Src_00;
  int iVar20;
  ulonglong uVar21;
  uint uVar22;
  longlong lVar23;
  uint *puVar24;
  uint *puVar25;
  longlong *_Dst;
  longlong lVar26;
  ulonglong uVar27;
  undefined8 *puVar28;
  undefined1 auStack_148 [32];
  undefined4 local_128;
  undefined4 local_120;
  undefined4 local_118;
  undefined8 local_110;
  wchar_t *local_108;
  undefined1 *local_100;
  undefined1 *local_f8;
  code **local_f0;
  undefined1 *local_e8;
  code *local_e0;
  longlong local_d8;
  uint *local_d0;
  undefined8 *local_c8;
  longlong local_c0;
  uint *local_b8;
  uint *local_b0;
  uint *local_a8;
  ulonglong local_a0;
  longlong local_98;
  undefined8 uStack_90;
  code *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_74;
  uint local_70;
  undefined1 local_69;
  code *local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_148;
  if ((longlong)*(int *)(param_1 + 0x130) < 1) {
    uVar13 = 0;
  }
  else {
    puVar18 = (uint *)(param_1 + 0x68);
    puVar25 = *(uint **)(param_1 + 0x128);
    if (*(uint **)(param_1 + 0x128) == (uint *)0x0) {
      puVar25 = puVar18;
    }
    puVar24 = puVar25 + (longlong)*(int *)(param_1 + 0x130) * 6;
    do {
      if (((((puVar25[1] != 0) && (uVar22 = *puVar25, -1 < (int)uVar22)) &&
           ((int)uVar22 < DAT_14c9647dc)) &&
          ((plVar19 = (longlong *)
                      ((ulonglong)((uVar22 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar22 >> 0x10) * 8)),
           plVar19 != (longlong *)0x0 && (*(uint *)(plVar19 + 2) == puVar25[1])))) &&
         (((*(uint *)(plVar19 + 1) & 0x10200000) == 0 &&
          (plVar19 = (longlong *)*plVar19, plVar19 != (longlong *)0x0)))) {
        if (DAT_14cb39ca0 == 0) {
          local_88 = FUN_144a7958c;
          local_e0 = FUN_14081d0ea;
          local_e8 = &LAB_14638c6c0;
          local_f0 = &local_88;
          local_f8 = &LAB_14811044c;
          local_100 = &LAB_1407f5cf8;
          local_108 = L"Engine";
          local_110 = 0;
          local_118 = 0x10000004;
          local_120 = 0x10;
          local_128 = 0x8e0;
          FUN_14081cfa3(L"/Script/Niagara",L"NiagaraComponent",&DAT_14cb39ca0,FUN_14646d392);
        }
        if (((*(int *)(DAT_14cb39ca0 + 0x38) <= *(int *)(plVar19[2] + 0x38)) &&
            (*(longlong *)
              (*(longlong *)(plVar19[2] + 0x30) + (longlong)*(int *)(DAT_14cb39ca0 + 0x38) * 8) ==
             DAT_14cb39ca0 + 0x30)) &&
           (local_b8 = puVar24, local_b0 = puVar25,
           lVar11 = (**(code **)(*plVar19 + 0xa70))(plVar19), puVar25 = local_b0, puVar24 = local_b8
           , lVar11 != 0)) {
          lVar12 = FUN_14018d992();
          puVar25 = local_b0;
          puVar24 = local_b8;
          if ((*(int *)(lVar12 + 0x38) <= *(int *)(*(longlong *)(lVar11 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar12 + 0x38) * 8) == lVar12 + 0x30)) {
            local_98 = 0;
            uStack_90 = 0;
            FUN_1406fc1b6(&local_98,*(int *)(lVar11 + 0x3c8) - *(int *)(lVar11 + 0x3f4));
            puVar25 = (uint *)(lVar11 + 0x3d0);
            iVar6 = *(int *)(lVar11 + 1000);
            local_d8 = param_1;
            local_c8 = param_2;
            local_c0 = param_3;
            local_a8 = puVar18;
            if (iVar6 == 0) {
              uVar27 = 1;
              uVar21 = 0;
              iVar15 = 0;
              iVar20 = 0;
            }
            else {
              puVar18 = *(uint **)(lVar11 + 0x3e0);
              if (*(uint **)(lVar11 + 0x3e0) == (uint *)0x0) {
                puVar18 = puVar25;
              }
              uVar22 = *puVar18;
              if (uVar22 == 0) {
                iVar15 = iVar6 + 0x1e;
                if (-1 < iVar6 + -1) {
                  iVar15 = iVar6 + -1;
                }
                uVar21 = 0;
                uVar27 = (ulonglong)(uint)(iVar15 >> 5);
                if (iVar15 >> 5 < 1) {
                  uVar27 = uVar21;
                }
                iVar20 = 0;
                do {
                  if (uVar27 == uVar21) goto LAB_140a1ce83;
                  iVar20 = iVar20 + 0x20;
                  uVar22 = puVar18[uVar21 + 1];
                  uVar21 = uVar21 + 1;
                } while (uVar22 == 0);
              }
              else {
                uVar21 = 0;
                iVar20 = 0;
              }
              uVar27 = (ulonglong)(-uVar22 & uVar22);
              uVar3 = uVar27 * 2 + 1;
              lVar12 = 0x3f;
              if (uVar3 != 0) {
                for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
                }
              }
              iVar15 = (iVar20 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
              if (iVar6 <= iVar15) {
                iVar15 = iVar6;
              }
            }
            if (iVar15 < iVar6) {
              uVar22 = 0xffffffff;
              do {
                uVar3 = uStack_90;
                puVar28 = (undefined8 *)((longlong)iVar15 * 0x48 + *(longlong *)(lVar11 + 0x3c0));
                lVar12 = (longlong)(int)uStack_90;
                uVar10 = (int)uStack_90 + 1;
                uStack_90 = CONCAT44(uStack_90._4_4_,uVar10);
                if (uStack_90._4_4_ < uVar10) {
                  FUN_146469efe(&local_98,uVar3 & 0xffffffff);
                }
                lVar12 = lVar12 * 0x20;
                *(undefined4 *)(local_98 + 8 + lVar12) = *(undefined4 *)(puVar28 + 1);
                *(undefined8 *)(local_98 + lVar12) = *puVar28;
                *(undefined8 *)(local_98 + 0x10 + lVar12) = 0;
                iVar6 = *(int *)(puVar28 + 3);
                _Src = (void *)puVar28[2];
                *(int *)(local_98 + 0x18 + lVar12) = iVar6;
                if ((longlong)iVar6 == 0) {
                  *(undefined4 *)(local_98 + lVar12 + 0x1c) = 0;
                }
                else {
                  puVar28 = (undefined8 *)(lVar12 + local_98 + 0x10);
                  local_d0 = puVar25;
                  FUN_1447a127e(puVar28,iVar6,0);
                  memcpy((void *)*puVar28,_Src,(longlong)iVar6);
                  puVar25 = local_d0;
                }
                uVar22 = uVar22 & ~(uint)uVar27;
                puVar18 = *(uint **)(lVar11 + 0x3e0);
                if (*(uint **)(lVar11 + 0x3e0) == (uint *)0x0) {
                  puVar18 = puVar25;
                }
                iVar6 = *(int *)(lVar11 + 1000);
                iVar15 = (int)uVar21;
                lVar12 = (longlong)iVar15;
                uVar10 = puVar18[lVar12] & uVar22;
                if (uVar10 == 0) {
                  iVar16 = iVar6 + 0x1e;
                  if (-1 < iVar6 + -1) {
                    iVar16 = iVar6 + -1;
                  }
                  iVar16 = iVar16 >> 5;
                  iVar17 = iVar16;
                  if (iVar16 < iVar15) {
                    iVar17 = iVar15;
                  }
                  if (iVar16 <= iVar15) break;
                  lVar23 = 0;
                  while( true ) {
                    iVar20 = iVar20 + 0x20;
                    uVar10 = puVar18[lVar12 + lVar23 + 1];
                    if (uVar10 != 0) break;
                    lVar23 = lVar23 + 1;
                    if (iVar17 - lVar12 == lVar23) goto LAB_140a1ce83;
                  }
                  uVar21 = (ulonglong)(iVar15 + (int)lVar23 + 1);
                  uVar22 = 0xffffffff;
                }
                uVar27 = (ulonglong)(-uVar10 & uVar10);
                uVar3 = uVar27 * 2 + 1;
                lVar12 = 0x3f;
                if (uVar3 != 0) {
                  for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
                  }
                }
                iVar15 = (iVar20 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
              } while (iVar15 < iVar6);
            }
LAB_140a1ce83:
            lVar12 = local_c0;
            puVar28 = local_c8;
            lVar11 = local_d8;
            uVar21 = (ulonglong)(int)uStack_90;
            bVar8 = true;
            param_1 = local_d8;
            if (uVar21 != 0) {
              lVar23 = 0;
LAB_140a1cebe:
              if (*(longlong *)(local_98 + lVar23) != local_c0) goto code_r0x000140a1cec4;
              plVar19 = (longlong *)(local_d8 + 0x1a8);
              iVar6 = *(int *)(local_d8 + 0x1b0);
              *(uint *)(local_d8 + 0x1b0) = iVar6 + 1U;
              if (*(uint *)(local_d8 + 0x1b4) < iVar6 + 1U) {
                FUN_140a1d42c(plVar19,iVar6);
              }
              lVar23 = *plVar19;
              plVar14 = (longlong *)(lVar23 + (longlong)iVar6 * 0x30);
              _Dst = plVar14 + 1;
              *plVar14 = lVar12;
              bVar4 = *(byte *)(puVar28 + 4);
              uVar5 = *(ushort *)(puVar28 + 3);
              *(ushort *)(plVar14 + 4) = uVar5;
              _Src_00 = puVar28;
              if (0x18 < uVar5) {
                plVar14 = (longlong *)FUN_14001cc68(uVar5,0);
                *_Dst = (longlong)plVar14;
                _Src_00 = (undefined8 *)*puVar28;
                _Dst = plVar14;
              }
              pcVar7 = *(code **)((longlong)&DAT_14c9a85b0 + (ulonglong)((uint)bVar4 * 0x120));
              if (pcVar7 == (code *)0x0) {
                memcpy(_Dst,_Src_00,
                       (longlong)
                       *(int *)((longlong)&DAT_14c9a8510 + (ulonglong)((uint)bVar4 * 0x120)));
              }
              else {
                (*pcVar7)(_Dst);
              }
              *(undefined1 *)(lVar23 + (longlong)iVar6 * 0x30 + 0x28) = *(undefined1 *)(puVar28 + 4)
              ;
              uVar21 = (ulonglong)*(int *)(local_d8 + 0x1b0);
              param_1 = local_d8;
              if (uVar21 != 0) {
                lVar12 = *(longlong *)(local_d8 + 0x1a8);
                *plVar19 = 0;
                *(undefined8 *)(lVar11 + 0x1b0) = 0;
                puVar18 = *(uint **)(local_d8 + 0x128);
                if (*(uint **)(local_d8 + 0x128) == (uint *)0x0) {
                  puVar18 = local_a8;
                }
                if ((longlong)*(int *)(local_d8 + 0x130) != 0) {
                  puVar25 = puVar18 + (longlong)*(int *)(local_d8 + 0x130) * 6;
                  lVar11 = lVar12 + 0x28;
                  lVar23 = uVar21 * 0x30;
                  do {
                    if (((((puVar18[1] != 0) && (uVar22 = *puVar18, -1 < (int)uVar22)) &&
                         ((int)uVar22 < DAT_14c9647dc)) &&
                        ((plVar19 = (longlong *)
                                    ((ulonglong)((uVar22 & 0xffff) * 0x18) +
                                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar22 >> 0x10) * 8)),
                         plVar19 != (longlong *)0x0 && (*(uint *)(plVar19 + 2) == puVar18[1])))) &&
                       (((*(uint *)(plVar19 + 1) & 0x10200000) == 0 &&
                        (plVar19 = (longlong *)*plVar19, plVar19 != (longlong *)0x0)))) {
                      if (DAT_14cb39ca0 == 0) {
                        local_f0 = &local_68;
                        local_68 = FUN_144a7958c;
                        local_e0 = FUN_14081d0ea;
                        local_e8 = &LAB_14638c6c0;
                        local_f8 = &LAB_14811044c;
                        local_100 = &LAB_1407f5cf8;
                        local_108 = L"Engine";
                        local_110 = 0;
                        local_118 = 0x10000004;
                        local_120 = 0x10;
                        local_128 = 0x8e0;
                        FUN_14081cfa3(L"/Script/Niagara",L"NiagaraComponent",&DAT_14cb39ca0,
                                      FUN_14646d392);
                      }
                      if ((*(int *)(DAT_14cb39ca0 + 0x38) <= *(int *)(plVar19[2] + 0x38)) &&
                         (*(longlong *)
                           (*(longlong *)(plVar19[2] + 0x30) +
                           (longlong)*(int *)(DAT_14cb39ca0 + 0x38) * 8) == DAT_14cb39ca0 + 0x30)) {
                        lVar26 = 0;
                        local_d0 = puVar25;
                        local_a0 = uVar21;
                        do {
                          lVar1 = lVar11 + lVar26;
                          lVar2 = lVar12 + 8 + lVar26;
                          cVar9 = *(char *)(lVar11 + lVar26);
                          if (cVar9 == '\x01') {
                            cVar9 = FUN_140613580(lVar2,&local_69);
                            if (cVar9 != '\0') {
                              (**(code **)(*plVar19 + 0x9f8))
                                        (plVar19,*(undefined8 *)(lVar1 + -0x28),local_69);
                            }
                          }
                          else if (cVar9 == '\x18') {
                            lVar2 = lVar11 + lVar26;
                            local_88 = *(code **)(lVar2 + -0x20);
                            uStack_80 = *(undefined4 *)(lVar2 + -0x18);
                            uStack_7c = *(undefined4 *)(lVar2 + -0x14);
                            (**(code **)(*plVar19 + 0xa18))
                                      (plVar19,*(undefined8 *)(lVar1 + -0x28),&local_88);
                          }
                          else if (cVar9 == '\x02') {
                            cVar9 = FUN_140a1d9f8(lVar2,&local_70);
                            if (cVar9 != '\0') {
                              (**(code **)(*plVar19 + 0xa00))
                                        (plVar19,*(undefined8 *)(lVar1 + -0x28),local_70);
                            }
                          }
                          else if ((cVar9 == '\x03') &&
                                  (cVar9 = FUN_140a1daa8(lVar2,&local_74), cVar9 != '\0')) {
                            (**(code **)(*plVar19 + 0xa08))
                                      (plVar19,*(undefined8 *)(lVar1 + -0x28),local_74);
                          }
                          lVar26 = lVar26 + 0x30;
                          uVar21 = local_a0;
                          puVar25 = local_d0;
                        } while (lVar23 != lVar26);
                      }
                    }
                    puVar18 = puVar18 + 6;
                  } while (puVar18 != puVar25);
                }
                FUN_14016105e(lVar12,uVar21 & 0xffffffff);
                param_1 = local_d8;
                if (lVar12 != 0) {
                  FUN_1400020a8(lVar12);
                }
              }
              uVar21 = uStack_90 & 0xffffffff;
              bVar8 = false;
              goto LAB_140a1d123;
            }
            uVar21 = 0;
LAB_140a1d123:
            param_3 = local_c0;
            param_2 = local_c8;
            FUN_1406fc1fc(local_98,uVar21);
            if (local_98 != 0) {
              FUN_1400020a8();
            }
            uVar13 = 1;
            puVar18 = local_a8;
            puVar25 = local_b0;
            puVar24 = local_b8;
            if (!bVar8) break;
          }
        }
      }
      puVar25 = puVar25 + 6;
      uVar13 = 0;
    } while (puVar25 != puVar24);
  }
  if ((local_60 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return uVar13;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
code_r0x000140a1cec4:
  lVar23 = lVar23 + 0x20;
  if (uVar21 << 5 == lVar23) goto LAB_140a1d123;
  goto LAB_140a1cebe;
}



// FUNCTION 140a1d42c FUN_140a1d42c body=272 status=ok
// SIG undefined FUN_140a1d42c(void)

void FUN_140a1d42c(longlong param_1,int param_2)

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



// FUNCTION 140a1d53c FUN_140a1d53c body=107 status=ok
// SIG undefined FUN_140a1d53c(void)

longlong * FUN_140a1d53c(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(longlong *)(param_1 + 0x40) == 0) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x40) + 0x118);
    if (plVar3 == (longlong *)0x0) {
      *param_2 = param_1;
      param_2[1] = 0;
    }
    else {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      *param_2 = param_1;
      param_2[1] = (longlong)plVar3;
      LOCK();
      *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
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
  return param_2;
}



// FUNCTION 140a1d5a8 FUN_140a1d5a8 body=737 status=ok
// SIG undefined FUN_140a1d5a8(void)

void FUN_140a1d5a8(longlong *param_1,longlong param_2,undefined4 param_3)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  int iVar11;
  longlong *plVar12;
  undefined1 auStack_138 [32];
  ulonglong *local_118;
  int local_10c;
  ulonglong local_108;
  undefined8 local_100;
  longlong local_f8 [2];
  longlong *local_e8;
  undefined8 uStack_e0;
  undefined8 local_d0;
  ulonglong local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_138;
  iVar3 = (**(code **)(*param_1 + 0xa08))();
  iVar4 = (**(code **)(*param_1 + 0x7b0))(param_1);
  if (iVar4 < iVar3) {
    iVar4 = iVar3;
  }
  if (0 < iVar4) {
    iVar3 = 0;
    do {
      plVar7 = (longlong *)(**(code **)(*param_1 + 0x610))(param_1,iVar3);
      if (plVar7 != (longlong *)0x0) {
        local_e8 = (longlong *)0x0;
        uStack_e0 = 0;
        local_f8[0] = 0;
        local_f8[1] = 0;
        (**(code **)(*plVar7 + 0x370))(plVar7,0,&local_e8,local_f8);
        if ((longlong)(int)uStack_e0 != 0) {
          lVar8 = (longlong)(int)uStack_e0 << 4;
          plVar12 = local_e8;
LAB_140a1d669:
          if (*plVar12 != param_2) goto code_r0x000140a1d66e;
          local_c8 = plVar7[3];
          FUN_1400021e4(&local_c8);
          iVar6 = (int)local_100;
          iVar5 = ((int)local_100 == 0) + 8;
          local_c8 = local_108;
          local_108 = 0;
          iVar1 = local_100._4_4_;
          local_c0 = local_100;
          local_100 = 0;
          iVar11 = iVar5 + iVar6;
          if (iVar11 < iVar6) {
                    /* WARNING: Subroutine does not return */
            FUN_1456afac4(iVar5);
          }
          if (iVar11 < 0) {
                    /* WARNING: Subroutine does not return */
            FUN_1456afac4(iVar11);
          }
          if (iVar1 < iVar11) {
            FUN_1446f8c06(&local_c8);
          }
          FUN_1400020e8(&local_c8,L"_Dynamic",8);
          iVar6 = (int)local_c0 + -1;
          if ((int)local_c0 == 0) {
            iVar6 = 0;
          }
          FUN_1446f82e2(&local_d0,iVar6,local_c8,1);
          uVar2 = local_d0;
          if (local_c8 != 0) {
            FUN_1400020a8();
          }
          if (local_108 != 0) {
            FUN_1400020a8();
          }
          plVar9 = (longlong *)(**(code **)(*param_1 + 0x678))(param_1,iVar3,0,uVar2);
          if ((plVar7 != plVar9) && (iVar6 = (**(code **)(*param_1 + 0x7b0))(param_1), 0 < iVar6)) {
            local_10c = 0;
            do {
              plVar10 = (longlong *)(**(code **)(*param_1 + 0x610))(param_1,local_10c);
              if (plVar10 == plVar7) {
                (**(code **)(*param_1 + 0x638))(param_1,local_10c,plVar9);
              }
              local_10c = local_10c + 1;
              iVar6 = (**(code **)(*param_1 + 0x7b0))(param_1);
            } while (local_10c < iVar6);
          }
          if (plVar9 != (longlong *)0x0) {
            local_c8 = local_c8 & 0xffffffffffffff00;
            local_80 = 0;
            uStack_78 = 0;
            local_90 = 0;
            uStack_88 = 0;
            local_a0 = 0;
            uStack_98 = 0;
            local_b0 = 0;
            uStack_a8 = 0;
            local_c0 = 0;
            uStack_b8 = 0;
            local_118 = &local_c8;
            FUN_140042bb4(plVar9,plVar12,param_3,0);
          }
        }
LAB_140a1d7aa:
        if (local_f8[0] != 0) {
          FUN_1400020a8();
        }
        if (local_e8 != (longlong *)0x0) {
          FUN_1400020a8();
        }
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 != iVar4);
  }
  if ((local_70 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
code_r0x000140a1d66e:
  plVar12 = plVar12 + 2;
  lVar8 = lVar8 + -0x10;
  if (lVar8 == 0) goto LAB_140a1d7aa;
  goto LAB_140a1d669;
}



// FUNCTION 140a1d88a FUN_140a1d88a body=366 status=ok
// SIG undefined FUN_140a1d88a(void)

void FUN_140a1d88a(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140a1d90f;
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
LAB_140a1d90f:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x58)) {
    uVar7 = uVar5 / 0x58 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x58,8);
  return;
}



// FUNCTION 140a1d9f8 FUN_140a1d9f8 body=174 status=ok
// SIG undefined FUN_140a1d9f8(void)

ulonglong FUN_140a1d9f8(undefined4 *param_1,undefined4 *param_2)

{
  code *pcVar1;
  undefined8 unaff_RBX;
  undefined7 uVar3;
  ulonglong uVar2;
  undefined4 *puVar4;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  ushort local_30;
  byte local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar3 = (undefined7)((ulonglong)unaff_RBX >> 8);
  if (*(char *)(param_1 + 8) == '\x02') {
    *param_2 = *param_1;
    uVar2 = CONCAT71(uVar3,1);
  }
  else {
    puVar4 = &local_48;
    FUN_1400b56fe(puVar4,param_1,2);
    uVar2 = CONCAT71(uVar3,local_28 != 0);
    if (local_28 != 0) {
      *param_2 = local_48;
    }
    pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_28 * 0x120));
    if (pcVar1 != (code *)0x0) {
      if (0x18 < local_30) {
        puVar4 = (undefined4 *)CONCAT44(uStack_44,local_48);
      }
      (*pcVar1)(puVar4);
    }
    if (0x18 < local_30) {
      FUN_1400020a8(CONCAT44(uStack_44,local_48));
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar2 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a1daa8 FUN_140a1daa8 body=182 status=ok
// SIG undefined FUN_140a1daa8(void)

ulonglong FUN_140a1daa8(undefined4 *param_1,undefined4 *param_2)

{
  code *pcVar1;
  undefined8 unaff_RBX;
  undefined7 uVar3;
  ulonglong uVar2;
  undefined4 *puVar4;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  ushort local_30;
  byte local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar3 = (undefined7)((ulonglong)unaff_RBX >> 8);
  if (*(char *)(param_1 + 8) == '\x03') {
    *param_2 = *param_1;
    uVar2 = CONCAT71(uVar3,1);
  }
  else {
    puVar4 = &local_48;
    FUN_1400b56fe(puVar4,param_1,3);
    uVar2 = CONCAT71(uVar3,local_28 != 0);
    if (local_28 != 0) {
      *param_2 = local_48;
    }
    pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_28 * 0x120));
    if (pcVar1 != (code *)0x0) {
      if (0x18 < local_30) {
        puVar4 = (undefined4 *)CONCAT44(uStack_44,local_48);
      }
      (*pcVar1)(puVar4);
    }
    if (0x18 < local_30) {
      FUN_1400020a8(CONCAT44(uStack_44,local_48));
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar2 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a1db60 FUN_140a1db60 body=757 status=ok
// SIG undefined FUN_140a1db60(void)

void FUN_140a1db60(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  uint local_a0;
  uint local_98;
  undefined1 *local_90;
  undefined2 *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  code **local_70;
  undefined1 *local_68;
  code *local_60;
  code *local_58;
  int local_50;
  undefined1 local_41;
  undefined1 local_40 [8];
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar3 = *(longlong *)(param_2 + 0x28);
  lVar7 = *(longlong *)(lVar3 + 0xe8);
  if (lVar7 == 0) goto LAB_140a1dd0f;
  if (DAT_14cbadd90 == 0) {
    local_70 = &local_58;
    local_58 = FUN_141030f22;
    local_60 = FUN_14081d0ea;
    local_68 = &LAB_1459f2e4c;
    local_78 = &LAB_148c39de3;
    local_80 = &LAB_1457a9eb2;
    local_88 = &DAT_149e063b2;
    local_90 = (undefined1 *)0x0;
    local_98 = 0x10000004;
    local_a0 = 0x10;
    local_a8 = 0x3de0;
    FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
    lVar7 = *(longlong *)(lVar3 + 0xe8);
    if (lVar7 == 0) goto LAB_140a1dd0f;
  }
  if ((((DAT_14cbadd90 == 0) || (lVar3 = *(longlong *)(lVar7 + 0x10), lVar3 == 0)) ||
      (*(int *)(lVar3 + 0x38) < *(int *)(DAT_14cbadd90 + 0x38))) ||
     (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) !=
      DAT_14cbadd90 + 0x30)) goto LAB_140a1dd0f;
  lVar3 = param_1 + 0x8e0;
  lVar5 = FUN_140a1de56(lVar3);
  if (lVar5 == 0) goto LAB_140a1dd0f;
  lVar5 = FUN_140a1de56(param_1 + 0x908);
  if (lVar5 == 0) goto LAB_140a1dd0f;
  cVar4 = FUN_14016169c(lVar7,&local_58);
  lVar7 = param_1 + 0x908;
  if ((int)local_58 == 0) {
    lVar7 = lVar3;
  }
  if (cVar4 == '\0') {
    lVar7 = lVar3;
  }
  lVar5 = FUN_14050fd64();
  local_58 = (code *)0x0;
  local_50 = 0;
  FUN_1446efa72(&local_58,0,2,0x10);
  local_50 = 2;
  *(undefined ***)local_58 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar6 = DAT_14c758608 + 1;
  lVar3 = DAT_14c758608 + 1;
  if (lVar6 == 0) {
    LOCK();
    UNLOCK();
    lVar6 = DAT_14c758608 + 2;
    lVar3 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar3;
  *(longlong *)(local_58 + 0x10) = lVar6;
  *(undefined ***)local_58 = &PTR_FUN_14b963090;
  local_90 = &local_41;
  local_98 = local_98 & 0xffffff00;
  local_a0 = local_a0 & 0xffffff00;
  local_a8 = 0;
  FUN_140a1e0be(lVar5 + 0x1e8,local_40,lVar7 + 8,&local_58);
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_38 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar2 = (int *)((longlong)local_38 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_38 + 0x10))(local_38);
      }
    }
  }
  if (local_50 == 0) {
LAB_140a1dcfa:
    if (local_58 != (code *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_58 != (code *)0x0) {
    (*(code *)**(undefined8 **)local_58)(local_58,0);
    FUN_1446efa72(&local_58,0,0,0x10);
    local_50 = 0;
    goto LAB_140a1dcfa;
  }
  *(undefined1 *)(param_1 + 0x931) = 0;
LAB_140a1dd0f:
  if ((local_30 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140a1de56 FUN_140a1de56 body=386 status=ok
// SIG undefined FUN_140a1de56(void)

longlong FUN_140a1de56(uint *param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  uint uVar6;
  longlong lVar7;
  bool bVar8;
  
  if (((((param_1[1] == 0) || (uVar3 = *param_1, (int)uVar3 < 0)) || (DAT_14c9647dc <= (int)uVar3))
      || ((plVar5 = (longlong *)
                    ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
          plVar5 == (longlong *)0x0 || (*(uint *)(plVar5 + 2) != param_1[1])))) ||
     (((*(uint *)(plVar5 + 1) & 0x10200000) != 0 || (lVar4 = *plVar5, lVar4 == 0)))) {
    if (*(longlong *)(param_1 + 2) == 0) {
      return 0;
    }
    lVar4 = FUN_140007850();
    cVar2 = (*(code *)PTR_FUN_14c758760)();
    if ((lVar4 == 0) || (cVar2 == '\0')) {
      if (lVar4 == 0) {
        param_1[0] = 0;
        param_1[1] = 0;
        return 0;
      }
      uVar3 = *(uint *)(lVar4 + 0xc);
      *param_1 = uVar3;
      if ((int)uVar3 < DAT_14c9647dc) {
        lVar7 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
      }
      else {
        lVar7 = 0;
      }
      uVar3 = *(uint *)(lVar7 + 0x10);
      if (*(uint *)(lVar7 + 0x10) == 0) {
        LOCK();
        iVar1 = DAT_14c964868 + 1;
        UNLOCK();
        uVar6 = DAT_14c964868 + 1;
        bVar8 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar1;
        if (bVar8) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        uVar6);
        }
        LOCK();
        uVar3 = *(uint *)(lVar7 + 0x10);
        bVar8 = uVar3 == 0;
        if (bVar8) {
          *(uint *)(lVar7 + 0x10) = uVar6;
          uVar3 = 0;
        }
        UNLOCK();
        if (bVar8) {
          uVar3 = uVar6;
        }
      }
      param_1[1] = uVar3;
    }
    else {
      uVar3 = *(uint *)(lVar4 + 0xc);
      if ((int)uVar3 < DAT_14c9647dc) {
        lVar7 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
      }
      else {
        lVar7 = 0;
      }
      if ((*(uint *)(lVar7 + 8) & 0x8400000) == 0) {
        FUN_14485c47a(param_1,lVar4);
      }
    }
    if ((*(uint *)(lVar4 + 8) >> 0x1e & 1) != 0) {
      return 0;
    }
  }
  lVar7 = FUN_140a1dfd8();
  if ((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
      lVar7 + 0x30)) {
    return lVar4;
  }
  return 0;
}



// FUNCTION 140a1dfd8 FUN_140a1dfd8 body=228 status=ok
// SIG undefined FUN_140a1dfd8(void)

longlong FUN_140a1dfd8(void)

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
  if (DAT_14cae9fc8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_14006763c;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_146386466;
    local_38 = &LAB_147badbdd;
    local_40 = FUN_1417df061;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x268;
    FUN_14081cfa3(L"/Script/Engine",L"Material",&DAT_14cae9fc8,&DAT_147badbdc);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cae9fc8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a1e0be FUN_140a1e0be body=498 status=ok
// SIG undefined FUN_140a1e0be(void)

undefined8
FUN_140a1e0be(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined8 *param_4,
             undefined4 param_5,undefined1 param_6,undefined1 param_7)

{
  void *_Src;
  longlong lVar1;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined1 local_c0;
  undefined1 local_b8;
  longlong *local_b0;
  undefined4 *local_a8;
  ulonglong *local_a0;
  longlong local_98;
  undefined4 local_90;
  longlong local_88 [2];
  undefined8 *local_78;
  int local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  void *local_58;
  int local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_78 = (undefined8 *)*param_4;
  *param_4 = 0;
  local_70 = *(int *)(param_4 + 1);
  *(undefined4 *)(param_4 + 1) = 0;
  local_88[0] = 0;
  local_88[1] = 0;
  local_68 = *param_3;
  uStack_64 = param_3[1];
  uStack_60 = param_3[2];
  uStack_5c = param_3[3];
  local_58 = (void *)0x0;
  local_50 = param_3[6];
  lVar1 = (longlong)local_50;
  _Src = *(void **)(param_3 + 4);
  if (lVar1 == 0) {
    local_4c = 0;
  }
  else {
    FUN_1446dd670(&local_58,local_50,0);
    memcpy(local_58,_Src,lVar1 * 2);
  }
  local_a8 = &local_68;
  local_a0 = &local_48;
  FUN_140a1e2b2(&local_98);
  local_b0 = local_88;
  local_b8 = param_7;
  local_c0 = param_6;
  local_c8 = param_5;
  FUN_140421d62(param_1,param_2,&local_98,&local_78);
  FUN_140861e20(local_98,local_90);
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_58 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_88[0] != 0) {
    FUN_1400020a8();
  }
  if (local_70 != 0) {
    if (local_78 == (undefined8 *)0x0) goto LAB_140a1e1fb;
    (**(code **)*local_78)(local_78,0);
    FUN_1446efa72(&local_78,0,0,0x10);
    local_70 = 0;
  }
  if (local_78 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_140a1e1fb:
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a1e2b2 FUN_140a1e2b2 body=85 status=ok
// SIG undefined FUN_140a1e2b2(void)

undefined8 * FUN_140a1e2b2(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  
  *param_1 = 0;
  lVar1 = *param_2;
  uVar2 = (ulonglong)(param_2[1] - lVar1) >> 5;
  *(int *)(param_1 + 1) = (int)uVar2;
  if ((int)uVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_140a1e386(param_1,uVar2 & 0xffffffff,0);
    FUN_140a1e307(*param_1,lVar1,uVar2 & 0xffffffff);
  }
  return param_1;
}



// FUNCTION 140a1e307 FUN_140a1e307 body=126 status=ok
// SIG undefined FUN_140a1e307(void)

void FUN_140a1e307(longlong param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  
  if (param_3 != 0) {
    puVar5 = (undefined8 *)(param_1 + 0x10);
    do {
      uVar2 = param_2[1];
      uVar3 = param_2[2];
      uVar4 = param_2[3];
      *(undefined4 *)(puVar5 + -2) = *param_2;
      *(undefined4 *)((longlong)puVar5 + -0xc) = uVar2;
      *(undefined4 *)(puVar5 + -1) = uVar3;
      *(undefined4 *)((longlong)puVar5 + -4) = uVar4;
      *puVar5 = 0;
      iVar1 = param_2[6];
      _Src = *(void **)(param_2 + 4);
      *(int *)(puVar5 + 1) = iVar1;
      if ((longlong)iVar1 == 0) {
        *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
      }
      else {
        FUN_1446dd670(puVar5,iVar1,0);
        memcpy((void *)*puVar5,_Src,(longlong)iVar1 * 2);
      }
      param_2 = param_2 + 8;
      puVar5 = puVar5 + 4;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 140a1e386 FUN_140a1e386 body=216 status=ok
// SIG undefined FUN_140a1e386(void)

void FUN_140a1e386(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar2 = (longlong)param_2 * 0x20;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar2 < 0x7ff1) {
          uVar2 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)
                                        [((longlong)param_2 & 0x7ffffffffffffffU) * 2]];
        }
        else {
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar2 = -uVar3 & (uVar2 + uVar3) - 1;
        }
      }
      else {
        uVar2 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar2,8);
      }
    }
    iVar1 = (int)(uVar2 >> 5);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar4 = iVar1;
    }
  }
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0x20,8);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 140a1e46c FUN_140a1e46c body=293 status=ok
// SIG undefined FUN_140a1e46c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140a1e46c(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14b30c780;
  param_1[0xb] = &DAT_14a171d50;
  *(undefined4 *)(param_1 + 0xe) = 0;
  if (*(int *)((longlong)param_1 + 0x74) != 0) {
    FUN_140115c12(param_1 + 0xd,0);
  }
  param_1[0xc] = 0;
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  param_1[7] = &DAT_14a171d50;
  *(undefined4 *)(param_1 + 10) = 0;
  if (*(int *)((longlong)param_1 + 0x54) != 0) {
    FUN_140115c12(param_1 + 9,0);
  }
  param_1[8] = 0;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if ((longlong *)param_1[3] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[3] + 0x10))();
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



// FUNCTION 140a1e592 FUN_140a1e592 body=266 status=ok
// SIG undefined FUN_140a1e592(void)

void FUN_140a1e592(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_78 [40];
  undefined1 local_50 [16];
  longlong local_40;
  int local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140d9d100(param_1 + 0x100);
  FUN_140f62150(local_50,*(longlong *)(param_1 + 0x2c8) + 0x640);
  if (local_40 != 0) {
    do {
      lVar2 = *(longlong *)(local_40 + 0x1b8);
      lVar3 = (longlong)local_38 * 0x10;
      *(undefined4 *)(lVar2 + 8 + lVar3) = 0;
      if (*(int *)(lVar2 + 0xc + lVar3) < 0) {
        FUN_146d97e1a(lVar2 + lVar3,0);
      }
      lVar2 = *(longlong *)(local_40 + 0x1d0);
      lVar3 = (longlong)local_38 * 0x10;
      *(undefined4 *)(lVar2 + 8 + lVar3) = 0;
      if (*(int *)(lVar2 + 0xc + lVar3) < 0) {
        FUN_146d97e7a(lVar2 + lVar3,0);
      }
      FUN_140a1e69e(local_50);
    } while (local_40 != 0);
  }
  iVar1 = *(int *)(param_1 + 0xf8);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0xf0);
    lVar3 = 0;
    do {
      (**(code **)(**(longlong **)(lVar2 + lVar3) + 0x10))();
      lVar3 = lVar3 + 8;
    } while ((longlong)iVar1 * 8 != lVar3);
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a1e69e FUN_140a1e69e body=131 status=ok
// SIG undefined FUN_140a1e69e(void)

longlong FUN_140a1e69e(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  undefined1 uVar5;
  int iVar6;
  
  do {
    plVar1 = *(longlong **)(param_1 + 8);
    if (plVar1 == (longlong *)0x0) {
      iVar3 = *(int *)(param_1 + 0x18) + 1;
      *(int *)(param_1 + 0x18) = iVar3;
      if (*(int *)(param_1 + 0x24) <= iVar3) {
LAB_140a1e710:
        *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
        FUN_140f621a4(param_1);
      }
      lVar4 = *(longlong *)(param_1 + 0x10);
    }
    else {
      iVar3 = *(int *)(param_1 + 0x28);
      iVar6 = iVar3 + 1;
      *(int *)(param_1 + 0x28) = iVar6;
      if ((int)plVar1[1] <= iVar6) goto LAB_140a1e710;
      plVar1 = *(longlong **)(*plVar1 + 8 + (longlong)iVar3 * 8);
      lVar4 = *plVar1;
      if (lVar4 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(undefined1 *)(lVar4 + 0x70);
      }
      lVar2 = plVar1[1];
      *(longlong *)(param_1 + 0x10) = lVar4;
      *(int *)(param_1 + 0x18) = (int)lVar2;
      *(undefined1 *)(param_1 + 0x1c) = uVar5;
    }
    if ((lVar4 == 0) ||
       (*(char *)(*(longlong *)(lVar4 + 0x230) + (longlong)*(int *)(param_1 + 0x18)) == '\0')) {
      return param_1;
    }
  } while( true );
}



// FUNCTION 140a1e722 FUN_140a1e722 body=3522 status=ok
// SIG undefined FUN_140a1e722(void)

/* WARNING: Removing unreachable block (ram,0x000140a1eaa3) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140a1e722(longlong *param_1,undefined8 *param_2,double param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong *plVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  longlong **pplVar8;
  undefined4 *puVar9;
  undefined8 uVar10;
  uint *puVar11;
  uint uVar12;
  longlong **pplVar13;
  undefined4 uVar14;
  int iVar15;
  ulonglong uVar16;
  undefined8 *puVar17;
  longlong lVar18;
  byte bVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  undefined1 auStack_e8 [32];
  undefined8 *local_c8;
  undefined8 *local_c0;
  longlong *local_b8;
  undefined8 *local_b0;
  longlong local_a8;
  undefined8 local_a0;
  undefined1 local_91;
  longlong *local_90;
  longlong **local_88;
  longlong *local_80;
  longlong *local_78;
  longlong **local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  iVar3 = (int)param_1[0x48];
  *(bool *)((longlong)param_1 + 0x221) = 1 < iVar3;
  dVar22 = 0.0;
  if (*(char *)((longlong)param_1 + 0x204) == '\0') {
    dVar22 = param_3;
  }
  if (((DAT_14c993850 != 0) || (dVar24 = (double)param_1[0x45], dVar24 < 0.0)) ||
     (DAT_14c75f150 == 0)) {
    dVar23 = dVar22;
    iVar15 = 1;
    if (0.0 < param_3 && 1 < iVar3) {
      dVar24 = dVar22 / (double)*(float *)(param_1 + 0x47);
      iVar6 = -((int)ROUND(-0.5 - (dVar24 + dVar24)) >> 1);
      dVar23 = (double)*(float *)(param_1 + 0x47);
      iVar15 = iVar3;
      if (iVar6 <= iVar3) {
        dVar23 = dVar22 / (double)iVar6;
        iVar15 = iVar6;
      }
    }
  }
  else {
    dVar23 = dVar22 + (double)param_1[0x46];
    if ((param_3 != 0.0) || (NAN(param_3))) {
      iVar15 = (int)ROUND(dVar23 / dVar24 + dVar23 / dVar24 + -0.5) >> 1;
      param_1[0x46] = (longlong)(dVar23 - (double)iVar15 * dVar24);
      dVar23 = dVar24;
    }
    else {
      param_1[0x46] = 0;
      iVar15 = 1;
    }
  }
  if (0.0 < param_3) {
    *(int *)((longlong)param_1 + 0x244) = *(int *)((longlong)param_1 + 0x244) + 1;
  }
  if (((int)param_1[0x4b] == 2) && (iVar6 = 3 - (int)param_1[0x40], iVar6 <= iVar15)) {
    iVar15 = iVar6;
  }
  if (0 < iVar15) {
    iVar6 = 1;
    if (1 < *(int *)((longlong)param_1 + 0x244)) {
      iVar6 = *(int *)((longlong)param_1 + 0x244);
    }
    (**(code **)(*param_1 + 0x48))(param_1,dVar23,iVar15,iVar6);
    *(undefined4 *)((longlong)param_1 + 0x244) = 0;
  }
  if ((char)param_1[0xd] == '\x01') {
    *param_2 = 0;
  }
  else {
    puVar17 = (undefined8 *)param_1[0x3c];
    if (puVar17 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(puVar17 + 1) = *(int *)(puVar17 + 1) + 1;
      UNLOCK();
    }
    lVar18 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    puVar2 = (undefined8 *)(lVar18 + 0x308);
    local_c0 = (undefined8 *)(lVar18 + 0x310);
    local_b8 = (longlong *)(lVar18 + 0x2b8);
    local_a8 = 0x527800b400;
    local_a0 = 0xe80000527800b400;
    local_b0 = param_2;
    do {
      pplVar8 = (longlong **)FUN_14298adc4(param_1 + 0xe);
      if (pplVar8 == (longlong **)0x0) break;
      plVar4 = (longlong *)param_1[0x39];
      if ((plVar4 != (longlong *)0x0) && ((char)param_1[0x44] == '\0')) {
        (**(code **)(*plVar4 + 0x18))
                  (plVar4,*(undefined4 *)((longlong)pplVar8 + 0x28c),pplVar8 + 0x58);
      }
      if (*(char *)((longlong)param_1 + 0x6a) != '\x02') {
        puVar20 = puVar17;
        if ((int)param_1[0x4b] == 1) {
          puVar21 = (undefined8 *)param_1[0x3c];
          if (puVar17 == puVar21) goto LAB_140a1ea5c;
          if (puVar21 != (undefined8 *)0x0) {
            LOCK();
            *(int *)(puVar21 + 1) = *(int *)(puVar21 + 1) + 1;
            UNLOCK();
          }
          puVar20 = puVar21;
          if (puVar17 != (undefined8 *)0x0) {
            LOCK();
            piVar1 = (int *)(puVar17 + 1);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)*puVar17)(puVar17,1);
            }
          }
        }
        puVar21 = (undefined8 *)param_1[0x3c];
        puVar17 = puVar20;
LAB_140a1ea5c:
        local_c8 = puVar17;
        local_68 = (longlong *)0x400000000;
        if ((puVar21 != (undefined8 *)0x0) && ((*(byte *)(puVar21 + 0x14) & 1) == 0)) {
          local_68 = (longlong *)0x400000001;
          local_90 = (longlong *)param_1[0x3c];
          if (local_90 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_90 + 1) = (int)local_90[1] + 1;
            UNLOCK();
          }
        }
        local_70 = (longlong **)0x0;
        puVar11 = (uint *)*puVar2;
        if (puVar11 != (uint *)0x0) goto LAB_140a1eb47;
        do {
          puVar17 = local_c0;
          uVar7 = *(uint *)(*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0x318);
          if ((uVar7 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar7 | 1;
            __tlregdtor(&LAB_1429afcea);
          }
          puVar9 = (undefined4 *)*puVar17;
          *puVar17 = 0;
          if (puVar9 == (undefined4 *)0x0) {
            puVar9 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar9 = 0xffffffff;
          *(undefined4 **)(puVar9 + 0x10) = puVar9 + 0x16;
          puVar9[0x12] = 0;
          *puVar2 = puVar9;
          FUN_140217a48(puVar2);
          puVar11 = (uint *)*puVar2;
LAB_140a1eb47:
          uVar16 = *(longlong *)(puVar11 + 0x10) + 7;
          uVar7 = puVar11[0x12];
          while( true ) {
            puVar17 = (undefined8 *)(uVar16 & 0xfffffffffffffff8);
            if (puVar17 + 0x17 <= puVar11 + 0x4000) {
              *(undefined8 **)(puVar11 + 0x10) = puVar17 + 0x17;
              puVar11[0x12] = uVar7 + 1;
              FUN_1447247dc(puVar17,&local_90);
              *puVar17 = &PTR_FUN_149f52b98;
              puVar17[0x15] = param_1;
              puVar17[0x16] = pplVar8;
              uVar7 = DAT_14c993670;
              if (((DAT_14c993668 != 0x400) || (DAT_14c7585d8 != 0)) &&
                 ((DAT_14c993668 != 0x800 || (DAT_14c7585dc != 0)))) {
                uVar7 = DAT_14c993668 | _DAT_14c99366c;
              }
              uVar12 = uVar7 >> 10 & 3;
              if ((uVar7 >> 9 & 1) == 0 || uVar12 < 2) {
                uVar16 = (ulonglong)(byte)(&DAT_149e38edc)[uVar12];
              }
              else {
                uVar16 = 2;
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
              lVar18 = *local_b8;
              if (lVar18 == 0) {
                if ((char)uVar16 == '\x06') {
                  uVar16 = 1;
                }
                uVar10 = 0;
              }
              else {
                if ((char)uVar16 == '\x06') {
                  uVar16 = *(ulonglong *)(lVar18 + 0x38) >> 0x3b;
                }
                uVar10 = *(undefined8 *)(lVar18 + 0x30);
              }
              puVar17[0xf] = uVar10;
              puVar17[0x10] = (uVar16 << 0x3b) + local_a8 | 0xc000000000000000;
              *(undefined4 *)((longlong)puVar17 + 0x1c) = 0;
              if (puVar17 != (undefined8 *)0x0) {
                LOCK();
                *(int *)(puVar17 + 1) = *(int *)(puVar17 + 1) + 1;
                UNLOCK();
              }
              local_91 = 1;
              FUN_1447439e4(puVar17,&local_91);
              puVar20 = (undefined8 *)param_1[0x3c];
              param_1[0x3c] = (longlong)puVar17;
              if (puVar20 != (undefined8 *)0x0) {
                LOCK();
                piVar1 = (int *)(puVar20 + 1);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)*puVar20)(puVar20,1);
                }
              }
              uVar16 = (ulonglong)local_68;
              lVar18 = (longlong)(int)local_68;
              uVar7 = (int)local_68 + 1;
              local_68 = (longlong *)CONCAT44(local_68._4_4_,uVar7);
              if (local_68._4_4_ < uVar7) {
                FUN_14476a5c8(&local_90,uVar16 & 0xffffffff);
              }
              pplVar13 = local_70;
              if (local_70 == (longlong **)0x0) {
                pplVar13 = &local_90;
              }
              plVar4 = (longlong *)param_1[0x3c];
              pplVar13[lVar18] = plVar4;
              if (plVar4 != (longlong *)0x0) {
                LOCK();
                *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
                UNLOCK();
              }
              if ((char)param_1[0x3d] != '\x01') goto LAB_140a1f02f;
              puVar11 = (uint *)*puVar2;
              if (puVar11 != (uint *)0x0) goto LAB_140a1ee2e;
              goto LAB_140a1edc4;
            }
            *(uint **)(puVar11 + 0x10) = puVar11 + 0x4000;
            LOCK();
            uVar12 = *puVar11;
            *puVar11 = *puVar11 + uVar7 + 1;
            UNLOCK();
            if ((uVar12 ^ uVar7) != 0xffffffff) break;
            puVar11 = (uint *)*puVar2;
            *puVar11 = 0xffffffff;
            *(uint **)(puVar11 + 0x10) = puVar11 + 0x16;
            puVar11[0x12] = 0;
            *puVar2 = puVar11;
            uVar16 = (longlong)puVar11 + 0x5f;
            uVar7 = 0;
          }
        } while( true );
      }
      LOCK();
      *(int *)(param_1 + 0x40) = (int)param_1[0x40] + 1;
      UNLOCK();
      local_90 = param_1;
      local_88 = pplVar8;
      local_80 = param_1;
      local_78 = param_1;
      local_70 = pplVar8;
      local_68 = param_1;
      (**(code **)(*param_1 + 0x58))(param_1,*(undefined4 *)(pplVar8 + 0x51));
      (**(code **)(*param_1 + 0x50))(param_1,pplVar8);
      (**(code **)(*param_1 + 0x38))(param_1,pplVar8[0x50]);
      plVar4 = local_80;
      *(undefined1 *)((longlong)local_80 + 0x1e9) = 1;
      (**(code **)(*local_80 + 0x28))(local_80);
      *(undefined1 *)((longlong)plVar4 + 0x1e9) = 0;
      FUN_1429ae852(&local_78);
LAB_140a1e9fb:
      if (DAT_14c993850 == 0) {
        bVar5 = 0.0 <= (double)param_1[0x45];
      }
      else {
        bVar5 = false;
      }
    } while ((1 < iVar3) || (bVar5));
    param_2 = local_b0;
    if ((int)param_1[0x4b] == 2) {
      *local_b0 = 0;
      if (puVar17 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(puVar17 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puVar17)(puVar17,1);
        }
      }
    }
    else {
      *local_b0 = puVar17;
    }
  }
  if ((local_60 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_140a1edc4:
  puVar17 = local_c0;
  uVar7 = *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318);
  if ((uVar7 & 1) == 0) {
    *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
             ) = uVar7 | 1;
    __tlregdtor(&LAB_1429afcea);
  }
  puVar9 = (undefined4 *)*puVar17;
  *puVar17 = 0;
  if (puVar9 == (undefined4 *)0x0) {
    puVar9 = _aligned_malloc(0x10000,0x10000);
  }
  *puVar9 = 0xffffffff;
  *(undefined4 **)(puVar9 + 0x10) = puVar9 + 0x16;
  puVar9[0x12] = 0;
  *puVar2 = puVar9;
  FUN_140217a48(puVar2);
  puVar11 = (uint *)*puVar2;
LAB_140a1ee2e:
  uVar16 = *(longlong *)(puVar11 + 0x10) + 7;
  uVar7 = puVar11[0x12];
LAB_140a1ee4c:
  puVar17 = (undefined8 *)(uVar16 & 0xfffffffffffffff8);
  if (puVar17 + 0x16 <= puVar11 + 0x4000) {
    *(undefined8 **)(puVar11 + 0x10) = puVar17 + 0x16;
    puVar11[0x12] = uVar7 + 1;
    FUN_1447247dc(puVar17,&local_90);
    *puVar17 = &PTR_FUN_149f52ba8;
    puVar17[0x15] = param_1;
    if (*(code **)(puVar17[0xe] + 0x18) != FUN_144713626) {
      (**(code **)(puVar17[0xe] + 0x18))(puVar17 + 0xe,puVar17 + 9);
    }
    puVar17[0xe] = LowLevelTasks::
                   TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                   TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                   ::vftable;
    puVar17[9] = puVar17;
    puVar17[10] = puVar17;
    if (*local_b8 == 0) {
      uVar10 = 0;
    }
    else {
      uVar10 = *(undefined8 *)(*local_b8 + 0x30);
    }
    puVar17[0xf] = uVar10;
    puVar17[0x10] = local_a0;
    *(undefined4 *)((longlong)puVar17 + 0x1c) = 4;
    if (puVar17 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(puVar17 + 1) = *(int *)(puVar17 + 1) + 1;
      UNLOCK();
    }
    local_91 = 1;
    FUN_1447439e4(puVar17,&local_91);
    puVar20 = (undefined8 *)param_1[0x3c];
    param_1[0x3c] = (longlong)puVar17;
    if (puVar20 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar20 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar20)(puVar20,1);
      }
    }
    plVar4 = local_68;
    lVar18 = (longlong)(int)local_68;
    uVar7 = (int)local_68 + 1;
    local_68 = (longlong *)CONCAT44(local_68._4_4_,uVar7);
    if (local_68._4_4_ < uVar7) {
      FUN_14476a5c8(&local_90,(ulonglong)plVar4 & 0xffffffff);
    }
    pplVar13 = local_70;
    if (local_70 == (longlong **)0x0) {
      pplVar13 = &local_90;
    }
    plVar4 = (longlong *)param_1[0x3c];
    pplVar13[lVar18] = plVar4;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
LAB_140a1f02f:
    puVar11 = (uint *)*puVar2;
    if (puVar11 != (uint *)0x0) goto LAB_140a1f0a1;
    do {
      puVar17 = local_c0;
      uVar7 = *(uint *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318);
      if ((uVar7 & 1) == 0) {
        *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x318) = uVar7 | 1;
        __tlregdtor(&LAB_1429afcea);
      }
      puVar9 = (undefined4 *)*puVar17;
      *puVar17 = 0;
      if (puVar9 == (undefined4 *)0x0) {
        puVar9 = _aligned_malloc(0x10000,0x10000);
      }
      *puVar9 = 0xffffffff;
      *(undefined4 **)(puVar9 + 0x10) = puVar9 + 0x16;
      puVar9[0x12] = 0;
      *puVar2 = puVar9;
      FUN_140217a48(puVar2);
      puVar11 = (uint *)*puVar2;
LAB_140a1f0a1:
      uVar16 = *(longlong *)(puVar11 + 0x10) + 7;
      uVar7 = puVar11[0x12];
      while( true ) {
        puVar17 = (undefined8 *)(uVar16 & 0xfffffffffffffff8);
        if (puVar17 + 0x17 <= puVar11 + 0x4000) {
          *(undefined8 **)(puVar11 + 0x10) = puVar17 + 0x17;
          puVar11[0x12] = uVar7 + 1;
          FUN_1447247dc(puVar17,&local_90);
          *puVar17 = &PTR_FUN_149f52bb8;
          puVar17[0x15] = param_1;
          puVar17[0x16] = pplVar8;
          LOCK();
          *(int *)(param_1 + 0x40) = (int)param_1[0x40] + 1;
          UNLOCK();
          if (DAT_14c993678 == 0) {
            uVar7 = DAT_14c993670;
            if (((DAT_14c993668 != 0x400) || (DAT_14c7585d8 != 0)) &&
               ((DAT_14c993668 != 0x800 || (DAT_14c7585dc != 0)))) {
              uVar7 = DAT_14c993668 | _DAT_14c99366c;
            }
            uVar12 = uVar7 >> 10 & 3;
            uVar14 = 0;
            if ((uVar7 >> 9 & 1) == 0 || uVar12 < 2) {
              bVar19 = (&DAT_149e38edc)[uVar12];
              uVar14 = 0;
            }
            else {
              bVar19 = 2;
            }
          }
          else {
            bVar19 = 5;
            uVar14 = 3;
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
          lVar18 = *local_b8;
          if (lVar18 == 0) {
            if (bVar19 == 6) {
              bVar19 = 1;
            }
            uVar10 = 0;
          }
          else {
            if (bVar19 == 6) {
              bVar19 = (byte)((ulonglong)*(undefined8 *)(lVar18 + 0x38) >> 0x3b);
            }
            uVar10 = *(undefined8 *)(lVar18 + 0x30);
          }
          puVar17[0xf] = uVar10;
          puVar17[0x10] = ((ulonglong)(bVar19 & 7) << 0x3b) + local_a8 | 0xc000000000000000;
          *(undefined4 *)((longlong)puVar17 + 0x1c) = uVar14;
          if (puVar17 != (undefined8 *)0x0) {
            LOCK();
            *(int *)(puVar17 + 1) = *(int *)(puVar17 + 1) + 1;
            UNLOCK();
          }
          local_91 = 1;
          FUN_1447439e4(puVar17,&local_91);
          puVar20 = (undefined8 *)param_1[0x3c];
          param_1[0x3c] = (longlong)puVar17;
          if (puVar20 != (undefined8 *)0x0) {
            LOCK();
            piVar1 = (int *)(puVar20 + 1);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)*puVar20)(puVar20,1);
            }
          }
          puVar17 = local_c8;
          if (((DAT_14c993850 != 0) || ((double)param_1[0x45] < 0.0)) &&
             (puVar20 = (undefined8 *)param_1[0x3c], local_c8 != puVar20)) {
            if (puVar20 != (undefined8 *)0x0) {
              LOCK();
              *(int *)(puVar20 + 1) = *(int *)(puVar20 + 1) + 1;
              UNLOCK();
            }
            puVar17 = puVar20;
            if (local_c8 != (undefined8 *)0x0) {
              LOCK();
              piVar1 = (int *)(local_c8 + 1);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)*local_c8)(local_c8,1);
              }
            }
          }
          pplVar8 = local_70;
          if (local_70 == (longlong **)0x0) {
            pplVar8 = &local_90;
          }
          FUN_144717c65(pplVar8,(ulonglong)local_68 & 0xffffffff);
          if (local_70 != (longlong **)0x0) {
            FUN_1400020a8();
          }
          goto LAB_140a1e9fb;
        }
        *(uint **)(puVar11 + 0x10) = puVar11 + 0x4000;
        LOCK();
        uVar12 = *puVar11;
        *puVar11 = *puVar11 + uVar7 + 1;
        UNLOCK();
        if ((uVar12 ^ uVar7) != 0xffffffff) break;
        puVar11 = (uint *)*puVar2;
        *puVar11 = 0xffffffff;
        *(uint **)(puVar11 + 0x10) = puVar11 + 0x16;
        puVar11[0x12] = 0;
        *puVar2 = puVar11;
        uVar16 = (longlong)puVar11 + 0x5f;
        uVar7 = 0;
      }
    } while( true );
  }
  *(uint **)(puVar11 + 0x10) = puVar11 + 0x4000;
  LOCK();
  uVar12 = *puVar11;
  *puVar11 = *puVar11 + uVar7 + 1;
  UNLOCK();
  if ((uVar12 ^ uVar7) == 0xffffffff) goto code_r0x000140a1ee6e;
  goto LAB_140a1edc4;
code_r0x000140a1ee6e:
  puVar11 = (uint *)*puVar2;
  *puVar11 = 0xffffffff;
  *(uint **)(puVar11 + 0x10) = puVar11 + 0x16;
  puVar11[0x12] = 0;
  *puVar2 = puVar11;
  uVar16 = (longlong)puVar11 + 0x5f;
  uVar7 = 0;
  goto LAB_140a1ee4c;
}



// FUNCTION 140a1f4e6 FUN_140a1f4e6 body=3921 status=ok
// SIG undefined FUN_140a1f4e6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140a1f4e6(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  bool bVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  ulonglong uVar8;
  char cVar9;
  char cVar10;
  char cVar11;
  char cVar12;
  char cVar13;
  bool bVar14;
  char cVar15;
  int iVar16;
  longlong lVar17;
  double *pdVar18;
  double *pdVar19;
  longlong lVar20;
  uint uVar21;
  uint uVar22;
  undefined8 *puVar23;
  longlong *plVar24;
  undefined1 *puVar25;
  bool bVar26;
  float fVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined4 uVar47;
  undefined4 uVar48;
  float fVar49;
  undefined1 auStack_438 [32];
  undefined8 *local_418;
  undefined8 *local_410;
  undefined8 *local_408;
  undefined8 *local_400;
  undefined8 *local_3f8;
  undefined8 local_3e8;
  double dStack_3e0;
  double local_3d8;
  double dStack_3d0;
  undefined4 local_344;
  byte local_33b;
  undefined4 local_318;
  double local_2e0;
  double local_2d8;
  double local_2d0;
  double local_2c8;
  double dStack_2c0;
  double local_2b8;
  undefined8 local_2a8;
  double dStack_2a0;
  double local_298;
  double dStack_290;
  double local_250;
  double dStack_248;
  double local_240;
  undefined4 local_204;
  byte local_1fb;
  undefined1 local_1f0 [24];
  undefined4 local_1d8;
  uint local_1d0;
  int local_1cc;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  double local_180;
  double local_178;
  double local_170;
  double local_168;
  double local_160;
  double local_158;
  undefined8 local_150;
  float local_148;
  double local_140;
  double local_138;
  double local_130;
  double local_128;
  double dStack_120;
  double local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined1 local_100;
  undefined2 local_ff;
  undefined1 local_fd;
  undefined4 local_fc;
  undefined1 local_f8;
  undefined4 local_f4;
  undefined1 local_f0;
  undefined4 local_ec;
  undefined2 local_e8;
  longlong local_c0;
  undefined8 local_b8;
  undefined1 local_b0 [16];
  undefined1 *local_a0;
  undefined8 local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_438;
  (**(code **)(*param_1 + 0xe80))(param_1,param_2,0);
  if ((((((param_1[0x76c] == 0) || (*(float *)(param_1[0x76c] + 0xec) <= 0.0)) ||
        ((char)param_1[0x220] != '\x01')) ||
       ((cVar15 = (**(code **)(*param_1 + 0xeb8))(param_1), cVar15 == '\0' || (param_1[0x15] == 0)))
       ) || (*(byte *)(param_1[0x15] + 0x178) < 2)) ||
     ((((~*(uint *)(param_1 + 0x93) & 3) != 0 ||
       (cVar15 = (**(code **)(*param_1 + 0x600))(param_1), cVar15 == '\0')) ||
      ((cVar15 = (**(code **)(*param_1 + 0xeb8))(param_1), cVar15 == '\0' || (param_1[0x76c] == 0)))
      ))) goto LAB_140a1f582;
  plVar24 = param_1;
  (**(code **)(*param_1 + 0x578))(param_1,&local_140);
  uVar47 = SUB84(plVar24,0);
  local_148 = *(float *)((longlong)param_1 + 0x1fc) * 0.5;
  local_150 = 0x3f80000000000003;
  dVar28 = (double)param_1[0x3e];
  lVar17 = *(longlong *)((longlong)dVar28 + 0x1c8);
  if (lVar17 == 0) {
    uVar47 = SUB84(DAT_14c846500,0);
    uVar48 = (undefined4)((ulonglong)DAT_14c846500 >> 0x20);
  }
  else {
    dVar32 = *(double *)(lVar17 + 0x240);
    dVar29 = *(double *)(lVar17 + 0x248);
    dVar30 = *(double *)(lVar17 + 0x250);
    dVar31 = *(double *)(lVar17 + 600);
    pdVar18 = *(double **)(lVar17 + 0x228);
    local_2a8 = dVar32;
    dStack_2a0 = dVar29;
    local_298 = dVar30;
    dStack_290 = dVar31;
    if (pdVar18 == (double *)0x0) {
      uVar47 = 0x40;
      pdVar18 = (double *)FUN_14001cc68(0x40,0x10);
      dVar28 = DAT_14c8463d8;
      *pdVar18 = DAT_14c8463d0;
      pdVar18[1] = dVar28;
      dVar28 = DAT_14c8463e8;
      pdVar18[2] = DAT_14c8463e0;
      pdVar18[3] = dVar28;
      dVar28 = DAT_14c846500;
      pdVar18[4] = DAT_14c8464f8;
      pdVar18[5] = dVar28;
      dVar28 = DAT_14c846508;
      pdVar18[6] = DAT_14c846508;
      *(double **)(lVar17 + 0x228) = pdVar18;
    }
    auVar40._8_4_ = (int)-(ulonglong)(dVar29 != pdVar18[1]);
    auVar40._0_8_ = -(ulonglong)(dVar32 != *pdVar18);
    auVar40._12_4_ = (int)(-(ulonglong)(dVar29 != pdVar18[1]) >> 0x20);
    iVar16 = movmskpd(SUB84(dVar28,0),auVar40);
    auVar41._8_4_ = (int)-(ulonglong)(dVar31 != pdVar18[3]);
    auVar41._0_8_ = -(ulonglong)(dVar30 != pdVar18[2]);
    auVar41._12_4_ = (int)(-(ulonglong)(dVar31 != pdVar18[3]) >> 0x20);
    uVar21 = movmskpd(uVar47,auVar41);
    if ((uVar21 & 0x3fffffff) != 0 || iVar16 != 0) {
      pdVar18[2] = local_298;
      pdVar18[3] = dStack_290;
      *pdVar18 = local_2a8;
      pdVar18[1] = dStack_2a0;
      FUN_1448052ee(&local_2a8,&local_3e8);
      pdVar18[6] = local_3d8;
      pdVar18[4] = local_3e8;
      pdVar18[5] = dStack_3e0;
    }
    uVar47 = SUB84(pdVar18[5],0);
    uVar48 = (undefined4)((ulonglong)pdVar18[5] >> 0x20);
  }
  dVar28 = (double)FUN_144719204();
  dVar29 = (double)FUN_144719204(CONCAT44(uVar48,uVar47));
  dVar30 = sin(dVar28 * 0.017453292519943295);
  dVar31 = cos(dVar28 * 0.017453292519943295);
  dVar32 = sin(dVar29 * 0.017453292519943295);
  dVar28 = cos(dVar29 * 0.017453292519943295);
  dVar32 = dVar32 * dVar31;
  dVar28 = dVar28 * dVar31;
  dVar29 = dVar28 * dVar28 + dVar32 * dVar32;
  if ((dVar29 != 1.0) || (NAN(dVar29))) {
    if (dVar29 < 9.99999993922529e-09) {
      uVar47 = SUB84(DAT_14c8464f0,0);
      uVar48 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
      dVar32 = DAT_14c8464e8;
      dVar28 = DAT_14c8464e0;
    }
    else {
      uVar47 = 0;
      uVar48 = 0;
      dVar32 = dVar32 * (1.0 / SQRT(dVar29));
      dVar28 = dVar28 * (1.0 / SQRT(dVar29));
    }
  }
  else {
    uVar8 = -(ulonglong)(dVar30 == 0.0) & (ulonglong)dVar30;
    uVar47 = (undefined4)uVar8;
    uVar48 = (undefined4)(uVar8 >> 0x20);
  }
  dVar29 = (double)*(float *)(param_1[0x76c] + 0xf0);
  local_158 = (double)(*(float *)((longlong)param_1 + 0x1fc) * 1.5) + local_130 +
              (dVar28 * DAT_14c8462c8 - DAT_14c8462c0 * dVar32) * dVar29;
  local_160 = local_138 + 0.0 +
              (DAT_14c8462c0 * (double)CONCAT44(uVar48,uVar47) - DAT_14c8462d0 * dVar28) * dVar29;
  local_168 = local_140 + 0.0 +
              (DAT_14c8462d0 * dVar32 - DAT_14c8462c8 * (double)CONCAT44(uVar48,uVar47)) * dVar29;
  dVar29 = (double)*(float *)(param_1[0x76c] + 0xec);
  local_170 = (double)CONCAT44(uVar48,uVar47) * dVar29 + local_158;
  local_178 = dVar32 * dVar29 + local_160;
  local_180 = dVar29 * dVar28 + local_168;
  lVar17 = 0;
  local_ec = 0;
  local_e8 = 0x101;
  local_c0 = 0;
  local_b8 = 0x800000000;
  local_a0 = (undefined1 *)0x0;
  local_98 = 0x400000000;
  local_100 = 0;
  local_f4 = 0;
  local_110 = 0;
  uStack_108 = 0;
  local_ff = 1;
  local_fd = 0;
  local_f0 = 0;
  local_fc = 0x1000000;
  local_f8 = 1;
  local_198 = _DAT_14cad0ee0;
  uStack_190 = uRam000000014cad0ee8;
  local_1a8 = _DAT_14cad0ed0;
  uStack_1a0 = _DAT_14cad0ed8;
  do {
    cVar15 = *(char *)((longlong)&uStack_1a0 + lVar17 + 2);
    cVar9 = *(char *)((longlong)&uStack_1a0 + lVar17 + 3);
    cVar10 = *(char *)((longlong)&uStack_1a0 + lVar17 + 4);
    cVar11 = *(char *)((longlong)&uStack_1a0 + lVar17 + 5);
    cVar12 = *(char *)((longlong)&uStack_1a0 + lVar17 + 6);
    cVar13 = *(char *)((longlong)&uStack_1a0 + lVar17 + 7);
    bVar26 = *(char *)((longlong)&local_1a8 + lVar17) == DAT_149c360b0;
    bVar2 = *(char *)((longlong)&local_1a8 + lVar17 + 1) == DAT_149c360b0._1_1_;
    if ((bool)(~bVar26 & 1)) {
      *(undefined1 *)((longlong)&local_1a8 + lVar17) = 2;
    }
    if ((bool)(~bVar2 & 1)) {
      *(undefined1 *)((longlong)&local_1a8 + lVar17 + 1) = 2;
    }
    if ((bool)(~(*(char *)((longlong)&local_1a8 + lVar17 + 2) == DAT_149c360b0._2_1_) & 1)) {
      *(undefined1 *)((longlong)&local_1a8 + lVar17 + 2) = 2;
    }
    if ((bool)(~(*(char *)((longlong)&local_1a8 + lVar17 + 3) == DAT_149c360b0._3_1_) & 1)) {
      *(undefined1 *)((longlong)&local_1a8 + lVar17 + 3) = 2;
    }
    if ((bool)(~(*(char *)((longlong)&local_1a8 + lVar17 + 4) == DAT_149c360b0._4_1_) & 1)) {
      *(undefined1 *)((longlong)&local_1a8 + lVar17 + 4) = 2;
    }
    if ((bool)(~(*(char *)((longlong)&local_1a8 + lVar17 + 5) == DAT_149c360b0._5_1_) & 1)) {
      *(undefined1 *)((longlong)&local_1a8 + lVar17 + 5) = 2;
    }
    if ((bool)(~(*(char *)((longlong)&local_1a8 + lVar17 + 6) == DAT_149c360b0._6_1_) & 1)) {
      *(undefined1 *)((longlong)&local_1a8 + lVar17 + 6) = 2;
    }
    if ((bool)(~(*(char *)((longlong)&local_1a8 + lVar17 + 7) == DAT_149c360b0._7_1_) & 1)) {
      *(undefined1 *)((longlong)&local_1a8 + lVar17 + 7) = 2;
    }
    if ((bool)(~bVar26 & 1)) {
      *(undefined1 *)((longlong)&uStack_1a0 + lVar17) = 2;
    }
    if ((bool)(~bVar2 & 1)) {
      *(undefined1 *)((longlong)&uStack_1a0 + lVar17 + 1) = 2;
    }
    if ((bool)(~(cVar15 == DAT_149c360b0._10_1_) & 1)) {
      *(undefined1 *)((longlong)&uStack_1a0 + lVar17 + 2) = 2;
    }
    if ((bool)(~(cVar9 == DAT_149c360b0._11_1_) & 1)) {
      *(undefined1 *)((longlong)&uStack_1a0 + lVar17 + 3) = 2;
    }
    if ((bool)(~(cVar10 == DAT_149c360b0._12_1_) & 1)) {
      *(undefined1 *)((longlong)&uStack_1a0 + lVar17 + 4) = 2;
    }
    if ((bool)(~(cVar11 == DAT_149c360b0._13_1_) & 1)) {
      *(undefined1 *)((longlong)&uStack_1a0 + lVar17 + 5) = 2;
    }
    if ((bool)(~(cVar12 == DAT_149c360b0._14_1_) & 1)) {
      *(undefined1 *)((longlong)&uStack_1a0 + lVar17 + 6) = 2;
    }
    if ((bool)(~(cVar13 == DAT_149c360b0._15_1_) & 1)) {
      *(undefined1 *)((longlong)&uStack_1a0 + lVar17 + 7) = 2;
    }
    lVar17 = lVar17 + 0x10;
  } while (lVar17 != 0x20);
  (**(code **)(*param_1 + 0x4d8))(param_1,&local_110,&local_1a8);
  if (param_1[0x3e] != 0) {
    uVar1 = *(undefined4 *)(param_1[0x3e] + 0xc);
    lVar17 = (longlong)(int)local_98;
    uVar21 = (int)local_98 + 1;
    local_98 = CONCAT44(local_98._4_4_,uVar21);
    if (local_98._4_4_ < uVar21) {
      FUN_1447de67e(local_b0);
    }
    puVar25 = local_b0;
    if (local_a0 != (undefined1 *)0x0) {
      puVar25 = local_a0;
    }
    *(undefined4 *)(puVar25 + lVar17 * 4) = uVar1;
  }
  local_110 = DAT_14cb760c8;
  memset(&local_2a8,0,0x100);
  local_1d8 = 0xffffffff;
  local_2a8 = (double)CONCAT44(0x3f800000,(undefined4)local_2a8);
  local_204 = 0xffffffff;
  lVar17 = param_1[0x16];
  if (lVar17 == 0) {
    lVar17 = FUN_1448abda6(param_1);
  }
  lVar20 = param_1[0x22];
  local_3e8 = *(double *)(lVar20 + 0x240);
  dStack_3e0 = *(double *)(lVar20 + 0x248);
  local_418 = &local_3e8;
  local_3d8 = *(double *)(lVar20 + 0x250);
  dStack_3d0 = *(double *)(lVar20 + 600);
  local_408 = &local_150;
  local_410 = (undefined8 *)CONCAT44(local_410._4_4_,2);
  local_400 = &local_110;
  local_3f8 = &local_1a8;
  FUN_14021655c(lVar17,&local_2a8,&local_168,&local_180);
  dVar29 = local_250 * local_250 + dStack_248 * dStack_248;
  if ((dVar29 != 1.0) || (NAN(dVar29))) {
    if (9.99999993922529e-09 <= dVar29) {
      dStack_248 = dStack_248 * (1.0 / SQRT(dVar29));
      local_250 = local_250 * (1.0 / SQRT(dVar29));
      goto LAB_140a2029c;
    }
    local_2b8 = DAT_14c8464f0;
    local_2c8 = DAT_14c8464e0;
    dStack_2c0 = DAT_14c8464e8;
  }
  else if ((local_240 != 0.0) || (NAN(local_240))) {
LAB_140a2029c:
    local_2b8 = 0.0;
    local_2c8 = local_250;
    dStack_2c0 = dStack_248;
  }
  else {
    local_2b8 = local_240;
    local_2c8 = local_250;
    dStack_2c0 = dStack_248;
  }
  lVar17 = FUN_14485cccc(local_1f0);
  if (((lVar17 != 0) ||
      ((((bVar26 = true, local_1cc != 0 && (-1 < (int)local_1d0)) &&
        ((int)local_1d0 < DAT_14c9647dc)) &&
       (((plVar24 = (longlong *)
                    ((ulonglong)((local_1d0 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_1d0 >> 0x10) * 8)),
         plVar24 != (longlong *)0x0 && ((int)plVar24[2] == local_1cc)) &&
        (((*(uint *)(plVar24 + 1) & 0x10200000) == 0 && (*plVar24 != 0)))))))) &&
     ((bVar26 = true, (local_1fb & 3) == 1 && (local_240 < (double)*(float *)(param_1 + 0x45))))) {
    fVar49 = *(float *)((longlong)param_1 + 0x1fc) + 1.0;
    fVar27 = tanf(*(float *)((longlong)param_1 + 0x224) * 0.017453292);
    local_118 = (double)(fVar49 + *(float *)((longlong)param_1 + 0x1fc)) + local_130;
    dStack_120 = local_138 + 0.0;
    local_128 = local_140 + 0.0;
    dVar29 = (double)(fVar49 / fVar27 + dStack_2a0._0_4_);
    local_2d0 = (double)CONCAT44(uVar48,uVar47) * dVar29 + local_118;
    local_2d8 = dVar32 * dVar29 + dStack_120;
    local_2e0 = dVar29 * dVar28 + local_128;
    memset(&local_3e8,0,0x100);
    local_318 = 0xffffffff;
    local_3e8 = (double)CONCAT44(0x3f800000,(undefined4)local_3e8);
    local_344 = 0xffffffff;
    lVar20 = param_1[0x16];
    if (lVar20 == 0) {
      lVar20 = FUN_1448abda6(param_1);
    }
    local_418 = (undefined8 *)CONCAT44(local_418._4_4_,2);
    local_410 = &local_110;
    local_408 = &local_1a8;
    FUN_1400b50cc(lVar20,&local_3e8,&local_128,&local_2e0);
    bVar26 = (local_33b & 3) != 1;
    if ((!bVar26) &&
       ((local_2b8 * (double)CONCAT44(uVar48,uVar47) + local_2c8 * dVar28 + dStack_2c0 * dVar32 <=
         (double)*(float *)(param_1[0x76c] + 0xf8) ||
        (fVar27 = *(float *)(param_1[0x76c] + 0xfc),
        (double)param_1[0x27] * (double)param_1[0x27] +
        (double)param_1[0x25] * (double)param_1[0x25] +
        (double)param_1[0x26] * (double)param_1[0x26] < (double)(fVar27 * fVar27))))) {
      if (param_1[0x62e] == 0) {
        if ((char)param_1[0x696] != '\x01') goto LAB_140a1fcc8;
        plVar24 = param_1 + 0x642;
      }
      else {
        plVar24 = (longlong *)(param_1[0x62e] + 0xd8);
      }
      thunk_FUN_140ae50e2(plVar24,lVar17,&local_2c8);
    }
  }
LAB_140a1fcc8:
  bVar14 = false;
  bVar2 = false;
  if ((((local_2c8 == 0.0) && (bVar2 = bVar14, !NAN(local_2c8))) && (dStack_2c0 == 0.0)) &&
     (!NAN(dStack_2c0))) {
    bVar2 = local_2b8 == 0.0;
  }
  if ((bool)(bVar26 | bVar2)) {
    dVar29 = (double)param_1[0x81c];
  }
  else {
    dVar30 = local_2c8 * DAT_14c8462c8 - DAT_14c8462c0 * dStack_2c0;
    dVar31 = DAT_14c8462c0 * local_2b8 - local_2c8 * DAT_14c8462d0;
    dVar29 = dStack_2c0 * DAT_14c8462d0 - DAT_14c8462c8 * local_2b8;
    param_1[0x81c] = (longlong)dVar29;
    param_1[0x81d] = (longlong)dVar31;
    param_1[0x81e] = (longlong)dVar30;
    if ((double)CONCAT44(uVar48,uVar47) * dVar30 + dVar28 * dVar29 + dVar32 * dVar31 < 0.0) {
      dVar29 = -dVar29;
      auVar5._8_4_ = SUB84(dVar31,0);
      auVar5._0_8_ = dVar29;
      auVar5._12_4_ = (uint)((ulonglong)dVar31 >> 0x20) ^ 0x80000000;
      *(undefined1 (*) [16])(param_1 + 0x81c) = auVar5;
      param_1[0x81e] = (longlong)-dVar30;
    }
  }
  if ((((dVar29 != 0.0) || (NAN(dVar29))) ||
      (((double)param_1[0x81d] != 0.0 ||
       ((NAN((double)param_1[0x81d]) || ((double)param_1[0x81e] != 0.0)))))) ||
     (NAN((double)param_1[0x81e]))) {
    pdVar18 = (double *)(param_1 + 0x81c);
    pdVar19 = pdVar18;
    dVar31 = (double)FUN_144a79a9c(pdVar18,&local_2e0);
    uVar47 = SUB84(pdVar19,0);
    lVar17 = param_1[0x22];
    dVar28 = *(double *)(lVar17 + 0x240);
    dVar32 = *(double *)(lVar17 + 0x248);
    dVar29 = *(double *)(lVar17 + 0x250);
    dVar30 = *(double *)(lVar17 + 600);
    pdVar19 = *(double **)(lVar17 + 0x228);
    local_3e8 = dVar28;
    dStack_3e0 = dVar32;
    local_3d8 = dVar29;
    dStack_3d0 = dVar30;
    if (pdVar19 == (double *)0x0) {
      uVar47 = 0x40;
      pdVar19 = (double *)FUN_14001cc68(0x40,0x10);
      dVar31 = DAT_14c8463d8;
      *pdVar19 = DAT_14c8463d0;
      pdVar19[1] = dVar31;
      dVar31 = DAT_14c8463e8;
      pdVar19[2] = DAT_14c8463e0;
      pdVar19[3] = dVar31;
      dVar31 = DAT_14c846500;
      pdVar19[4] = DAT_14c8464f8;
      pdVar19[5] = dVar31;
      dVar31 = DAT_14c846508;
      pdVar19[6] = DAT_14c846508;
      *(double **)(lVar17 + 0x228) = pdVar19;
    }
    auVar6._8_4_ = (int)-(ulonglong)(dVar32 != pdVar19[1]);
    auVar6._0_8_ = -(ulonglong)(dVar28 != *pdVar19);
    auVar6._12_4_ = (int)(-(ulonglong)(dVar32 != pdVar19[1]) >> 0x20);
    uVar21 = movmskpd(SUB84(dVar31,0),auVar6);
    auVar7._8_4_ = (int)-(ulonglong)(dVar30 != pdVar19[3]);
    auVar7._0_8_ = -(ulonglong)(dVar29 != pdVar19[2]);
    auVar7._12_4_ = (int)(-(ulonglong)(dVar30 != pdVar19[3]) >> 0x20);
    uVar22 = movmskpd(uVar47,auVar7);
    uVar47 = 0;
    dVar28 = (double)(ulonglong)uVar21;
    if ((uVar22 & 0x3fffffff) != 0 || uVar21 != 0) {
      puVar23 = &local_3e8;
      pdVar19[2] = local_3d8;
      pdVar19[3] = dStack_3d0;
      *pdVar19 = local_3e8;
      pdVar19[1] = dStack_3e0;
      FUN_1448052ee(puVar23,&local_128);
      uVar47 = SUB84(puVar23,0);
      pdVar19[6] = local_118;
      pdVar19[4] = local_128;
      pdVar19[5] = dStack_120;
      dVar28 = local_118;
    }
    dVar32 = (double)DAT_1499387d0;
    dVar29 = DAT_1499387d0._8_8_;
    auVar39._8_8_ = local_2d8 - pdVar19[5];
    auVar39._0_8_ = local_2e0 - pdVar19[4];
    auVar40 = divpd(auVar39,_DAT_1499387d0);
    auVar33._0_8_ = (local_2d0 - pdVar19[6]) / 360.0;
    auVar33._8_8_ = 0;
    auVar41 = roundpd(auVar40,auVar40,3);
    auVar40 = roundpd(auVar33,auVar33,3);
    auVar45._0_8_ = (local_2d0 - pdVar19[6]) - auVar40._0_8_ * dVar32;
    auVar45._8_8_ = 0.0 - auVar40._8_8_ * dVar29;
    dVar30 = (local_2e0 - pdVar19[4]) - auVar41._0_8_ * dVar32;
    dVar31 = (local_2d8 - pdVar19[5]) - auVar41._8_8_ * dVar29;
    auVar44._0_8_ = dVar30 + dVar32;
    auVar44._8_8_ = dVar31 + dVar29;
    auVar43._0_8_ = dVar32 + auVar45._0_8_;
    auVar43._8_8_ = dVar29 + auVar45._8_8_;
    auVar34._8_8_ = -(ulonglong)(0.0 <= dVar31);
    auVar34._0_8_ = -(ulonglong)(0.0 <= dVar30);
    auVar3._8_4_ = SUB84(dVar31,0);
    auVar3._0_8_ = dVar30;
    auVar3._12_4_ = (int)((ulonglong)dVar31 >> 0x20);
    auVar41 = blendvpd(auVar44,auVar3,auVar34);
    auVar35._8_8_ = -(ulonglong)(0.0 <= auVar45._8_8_);
    auVar35._0_8_ = -(ulonglong)(0.0 <= auVar45._0_8_);
    auVar40 = blendvpd(auVar43,auVar45,auVar35);
    auVar46._0_8_ = auVar41._0_8_ + -360.0;
    auVar46._8_8_ = auVar41._8_8_ + -360.0;
    dVar32 = auVar40._8_8_ + -360.0;
    auVar36._8_8_ = -(ulonglong)(180.0 < auVar41._8_8_);
    auVar36._0_8_ = -(ulonglong)(180.0 < auVar41._0_8_);
    auVar41 = blendvpd(auVar41,auVar46,auVar36);
    auVar37._8_8_ = -(ulonglong)(180.0 < auVar40._8_8_);
    auVar37._0_8_ = -(ulonglong)(180.0 < auVar40._0_8_);
    auVar4._8_4_ = SUB84(dVar32,0);
    auVar4._0_8_ = auVar40._0_8_ + -360.0;
    auVar4._12_4_ = (int)((ulonglong)dVar32 >> 0x20);
    auVar40 = blendvpd(auVar40,auVar4,auVar37);
    auVar42._8_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(auVar41._8_8_));
    auVar42._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(auVar41._0_8_));
    iVar16 = movmskpd(SUB84(dVar28,0),auVar42);
    auVar38._8_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(auVar40._8_8_));
    auVar38._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(auVar40._0_8_));
    uVar21 = movmskpd(uVar47,auVar38);
    if ((uVar21 & 0x3fffffff) == 0 && iVar16 == 0) {
      param_1[0x81e] = (longlong)DAT_14c8464f0;
      dVar28 = DAT_14c8464e8;
      *pdVar18 = DAT_14c8464e0;
      param_1[0x81d] = (longlong)dVar28;
    }
  }
  if (local_a0 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if (local_c0 != 0) {
    FUN_1400020a8();
  }
LAB_140a1f582:
  if ((local_90 ^ (ulonglong)auStack_438) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  FUN_140a20438(param_1);
  return;
}



// FUNCTION 140a20438 FUN_140a20438 body=4429 status=ok
// SIG undefined FUN_140a20438(void)

void FUN_140a20438(longlong *param_1,float param_2,int param_3)

{
  uint *puVar1;
  double dVar2;
  double dVar3;
  char cVar4;
  bool bVar5;
  ulonglong uVar6;
  char cVar7;
  uint uVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  double *pdVar13;
  double *pdVar14;
  bool bVar15;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  double dVar19;
  double dVar20;
  float fVar21;
  undefined1 auStack_5e8 [32];
  double *local_5c8;
  double *local_5c0;
  float local_5b8;
  int local_5b0;
  char local_5a8;
  int local_598;
  char local_592;
  char local_591;
  longlong *local_590;
  longlong *local_588;
  ulonglong local_580;
  longlong *local_578;
  longlong *local_570;
  double local_568 [4];
  double local_548;
  longlong lStack_540;
  longlong local_538;
  undefined8 local_528;
  undefined8 uStack_520;
  undefined8 local_518;
  undefined8 uStack_510;
  undefined1 local_500 [24];
  double local_4e8;
  double dStack_4e0;
  double local_4d8;
  double local_478;
  double local_470;
  double local_468;
  double local_460;
  double local_458;
  double local_450;
  longlong local_430;
  longlong local_428;
  longlong lStack_420;
  undefined4 local_418;
  undefined1 local_414;
  undefined8 local_410;
  longlong lStack_408;
  longlong local_400;
  longlong lStack_3f8;
  longlong local_3f0;
  double local_3e8 [4];
  double local_3c8;
  longlong lStack_3c0;
  longlong local_3b8;
  uint local_3a8;
  byte local_3a0 [4];
  undefined8 local_39c;
  undefined1 local_390 [4];
  undefined4 local_38c;
  undefined4 local_2ec;
  undefined4 local_2c0;
  double local_290;
  double local_288;
  double local_280;
  double local_278;
  double dStack_270;
  double local_268;
  double local_258;
  longlong lStack_250;
  longlong local_248;
  double local_238;
  undefined4 local_230;
  undefined1 local_228 [64];
  undefined1 local_1e8 [24];
  undefined1 local_1d0 [96];
  longlong local_170;
  longlong local_168;
  longlong lStack_160;
  undefined4 local_158;
  undefined1 local_154;
  undefined8 local_150;
  longlong lStack_148;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  longlong local_130;
  double local_128;
  double dStack_120;
  double local_118;
  double local_108;
  double dStack_100;
  double local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_5e8;
  if (1e-06 <= param_2) {
    lVar10 = param_1[0x3e];
    if ((lVar10 == 0) ||
       ((((*(longlong *)(lVar10 + 0x3c0) == 0 && ((*(byte *)((longlong)param_1 + 0x349) & 8) == 0))
         && ((char)param_1[0x1f0] == '\0')) &&
        (((*(byte *)(param_1 + 0x1b6) & 2) == 0 && (*(char *)(lVar10 + 0x178) != '\x01')))))) {
      param_1[0x73] = (longlong)DAT_14c8464f0;
      dVar19 = DAT_14c8464e8;
      param_1[0x71] = (longlong)DAT_14c8464e0;
      param_1[0x72] = (longlong)dVar19;
      dVar19 = DAT_14c8464e8;
      param_1[0x25] = (longlong)DAT_14c8464e0;
      param_1[0x26] = (longlong)dVar19;
      param_1[0x27] = (longlong)DAT_14c8464f0;
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_f0 ^ (ulonglong)auStack_5e8);
    }
    uVar8 = (**(code **)(*(longlong *)param_1[0x22] + 0x570))();
    if ((5 < uVar8) || ((0x2aU >> (uVar8 & 0x1f) & 1) == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_f0 ^ (ulonglong)auStack_5e8);
    }
    *(byte *)((longlong)param_1 + 0x5b4) = *(byte *)((longlong)param_1 + 0x5b4) & 0xdf;
    if (1e-06 <= param_2) {
      local_591 = *(char *)((longlong)param_1 + 0x291);
      local_592 = *(char *)((longlong)param_1 + 0x292);
      pdVar14 = (double *)(param_1 + 0x93);
      local_590 = param_1 + 0x95;
      puVar1 = (uint *)(param_1 + 0xb0);
      pdVar13 = (double *)(param_1 + 0x25);
      local_578 = param_1 + 0x2f;
      local_570 = param_1 + 0xad;
      local_580 = 0;
      local_588 = (longlong *)0x0;
      do {
        if (((*(int *)((longlong)param_1 + 0x444) <= param_3) ||
            (lVar10 = param_1[0x3e], lVar10 == 0)) ||
           (((*(longlong *)(lVar10 + 0x3c0) == 0 &&
             ((((*(byte *)((longlong)param_1 + 0x349) & 8) == 0 && ((char)param_1[0x1f0] == '\0'))
              && ((*(byte *)(param_1 + 0x1b6) & 2) == 0)))) && (*(char *)(lVar10 + 0x178) != '\x01')
            ))) break;
        *(byte *)((longlong)param_1 + 0x5b4) = *(byte *)((longlong)param_1 + 0x5b4) & 0xdf;
        fVar21 = *(float *)(param_1 + 0x88);
        fVar16 = param_2;
        if ((param_3 + 1 < *(int *)((longlong)param_1 + 0x444)) &&
           (fVar16 = fVar21, param_2 * 0.5 <= fVar21)) {
          fVar16 = param_2 * 0.5;
        }
        plVar11 = *(longlong **)(lVar10 + 0x450);
        if (plVar11 == (longlong *)0x0) {
          local_f8 = DAT_14c8464f0;
          local_108 = DAT_14c8464e0;
          dStack_100 = DAT_14c8464e8;
        }
        else {
          local_108 = (double)plVar11[0x4c];
          dStack_100 = (double)plVar11[0x4d];
          local_f8 = (double)plVar11[0x4e];
        }
        fVar16 = (float)(~-(uint)(fVar21 < param_2) & (uint)param_2 |
                        (uint)fVar16 & -(uint)(fVar21 < param_2));
        fVar21 = 1e-06;
        if (1e-06 <= fVar16) {
          fVar21 = fVar16;
        }
        lVar10 = param_1[0x22];
        local_128 = *(double *)(lVar10 + 0x260);
        dStack_120 = *(double *)(lVar10 + 0x268);
        local_118 = *(double *)(lVar10 + 0x270);
        local_230 = (undefined4)param_1[0x94];
        local_238 = *pdVar14;
        memcpy(local_228,local_590,0xb8);
        local_170 = param_1[0xac];
        local_168 = *local_570;
        lStack_160 = local_570[1];
        local_158 = (undefined4)param_1[0xaf];
        local_154 = *(undefined1 *)((longlong)param_1 + 0x57c);
        local_130 = param_1[0xb4];
        local_150 = *(undefined8 *)puVar1;
        lStack_148 = param_1[0xb1];
        local_140 = (undefined4)param_1[0xb2];
        uStack_13c = *(undefined4 *)((longlong)param_1 + 0x594);
        uStack_138 = (undefined4)param_1[0xb3];
        uStack_134 = *(undefined4 *)((longlong)param_1 + 0x59c);
        (**(code **)(*param_1 + 0xb80))(param_1);
        (**(code **)(*param_1 + 0x8d8))(param_1);
        local_248 = param_1[0x27];
        local_258 = *pdVar13;
        lStack_250 = param_1[0x26];
        dVar19 = (-(double)param_1[0x46] * (double)param_1[0x71] -
                 (double)param_1[0x72] * (double)param_1[0x47]) -
                 (double)param_1[0x73] * (double)param_1[0x48];
        param_1[0x71] = (longlong)(dVar19 * (double)param_1[0x46] + (double)param_1[0x71]);
        param_1[0x72] = (longlong)((double)param_1[0x47] * dVar19 + (double)param_1[0x72]);
        param_1[0x73] = (longlong)((double)param_1[0x48] * dVar19 + (double)param_1[0x73]);
        if ((((char)param_1[0x1f0] == '\0') && ((*(byte *)(param_1 + 0x1b6) & 2) == 0)) &&
           ((DAT_14c7613f6 & (byte)local_588 & 1) == 0)) {
          uVar17 = (**(code **)(*param_1 + 0x718))(param_1);
          local_5c8 = (double *)CONCAT44(local_5c8._4_4_,uVar17);
          (**(code **)(*param_1 + 0x6f0))
                    (param_1,fVar21,*(undefined4 *)((longlong)param_1 + 0x294),0);
        }
        param_2 = param_2 - fVar21;
        (**(code **)(*param_1 + 0xb88))(param_1,fVar21);
        if ((*(char *)((longlong)param_1 + 0x291) != local_591) ||
           (*(char *)((longlong)param_1 + 0x292) != local_592)) {
          param_2 = fVar21 + param_2;
          lVar10 = *param_1;
LAB_140a213dc:
          (**(code **)(lVar10 + 0x668))(param_1,param_2,param_3);
          goto LAB_140a204c9;
        }
        local_268 = (double)param_1[0x27];
        local_278 = *pdVar13;
        dStack_270 = (double)param_1[0x26];
        dVar19 = (double)fVar21;
        local_280 = local_268 * dVar19;
        local_288 = dStack_270 * dVar19;
        local_290 = local_278 * dVar19;
        bVar5 = false;
        if ((ABS(local_290) <= 9.999999747378752e-05) && (ABS(local_288) <= 9.999999747378752e-05))
        {
          bVar5 = ABS(local_280) <= 9.999999747378752e-05;
        }
        local_3a8 = 0;
        local_3a0[0] = local_3a0[0] & 0xf8;
        local_39c = 0;
        local_598 = param_3 + 1;
        memset(local_390,0,0x100);
        local_2c0 = 0xffffffff;
        local_2ec = 0xffffffff;
        local_38c = 0x3f800000;
        fVar16 = 0.0;
        if (!bVar5) {
          (**(code **)(*param_1 + 0x8c8))(param_1,&local_278,fVar21);
          cVar7 = (**(code **)(param_1[0x2f] + 0xe8))(local_578);
          if (cVar7 == '\0') {
            if ((*(char *)((longlong)param_1 + 0x291) != local_591) ||
               (*(char *)((longlong)param_1 + 0x292) != local_592)) {
              fVar16 = (float)SQRT(local_280 * local_280 +
                                   local_290 * local_290 + local_288 * local_288);
              if (0.0001 < fVar16) {
                lVar10 = param_1[0x22];
                dVar19 = *(double *)(lVar10 + 0x270) - local_118;
                dVar20 = *(double *)(lVar10 + 0x268) - dStack_120;
                dVar2 = *(double *)(lVar10 + 0x260) - local_128;
                dVar3 = dVar19 * (double)param_1[0x48] +
                        dVar2 * (double)param_1[0x46] + dVar20 * (double)param_1[0x47];
                dVar19 = dVar19 - (double)param_1[0x48] * dVar3;
                dVar20 = dVar20 - (double)param_1[0x47] * dVar3;
                dVar2 = dVar2 - dVar3 * (double)param_1[0x46];
                fVar16 = (float)SQRT(dVar19 * dVar19 + dVar2 * dVar2 + dVar20 * dVar20) / fVar16;
                fVar18 = 1.0;
                if (fVar16 <= 1.0) {
                  fVar18 = fVar16;
                }
                param_2 = param_2 + fVar21 * (1.0 - fVar18);
              }
              lVar10 = *param_1;
              param_3 = local_598;
              goto LAB_140a213dc;
            }
            fVar16 = param_2;
            if ((local_3a8 & 1) == 0) goto LAB_140a20afd;
            memcpy(pdVar14,local_3a0,0x110);
            goto LAB_140a20b64;
          }
          pdVar14 = &local_3c8;
          local_3b8 = local_248;
          local_3c8 = local_258;
          lStack_3c0 = lStack_250;
          pdVar13 = local_3e8;
LAB_140a214f4:
          *pdVar13 = local_128;
          pdVar13[1] = dStack_120;
          pdVar13[2] = local_118;
          local_5c0 = (double *)CONCAT44(local_5c0._4_4_,local_598);
          local_5c8 = (double *)CONCAT44(local_5c8._4_4_,param_2);
          (**(code **)(*param_1 + 0x768))(param_1,pdVar13,pdVar14,fVar21);
          goto LAB_140a204c9;
        }
LAB_140a20afd:
        lVar10 = param_1[0x22];
        local_4e8 = *(double *)(lVar10 + 0x260);
        dStack_4e0 = *(double *)(lVar10 + 0x268);
        local_4d8 = *(double *)(lVar10 + 0x270);
        local_5c8 = (double *)0x0;
        (**(code **)(*param_1 + 0x900))(param_1,&local_4e8,pdVar14);
        param_2 = fVar16;
LAB_140a20b64:
        cVar7 = (**(code **)(*param_1 + 0x870))(param_1);
        if (cVar7 == '\0') {
          if ((*(uint *)(param_1 + 0x93) & 3) == 3) goto LAB_140a20cf1;
          if ((*(byte *)((longlong)param_1 + 0x34a) & 1) == 0) {
            bVar15 = false;
            cVar7 = '\0';
          }
          else {
            bVar15 = true;
            if (plVar11 != (longlong *)0x0 && !bVar5) {
              uVar8 = (**(code **)(*plVar11 + 0x570))(plVar11);
              if ((uVar8 < 6) && ((0x2aU >> (uVar8 & 0x1f) & 1) != 0)) {
                bVar15 = false;
              }
              else {
                bVar15 = *(char *)((longlong)plVar11 + 0x1fb) == '\x02';
              }
            }
            local_5b0 = local_598;
            local_5c0 = (double *)CONCAT44(local_5c0._4_4_,param_2);
            local_5c8 = &local_128;
            local_5b8 = fVar21;
            local_5a8 = bVar15;
            cVar7 = (**(code **)(*param_1 + 0x810))(param_1,&local_238,local_590,&local_290);
          }
          if (((ulonglong)local_588 & 1) == 0) {
            local_5c8 = &local_238;
            local_588 = plVar11;
            (**(code **)(*param_1 + 0x808))(param_1,&local_4e8,&local_128,&local_290);
            plVar11 = local_588;
          }
          else {
            local_4d8 = DAT_14c8464f0;
            local_4e8 = DAT_14c8464e0;
            dStack_4e0 = DAT_14c8464e8;
          }
          if ((((local_4e8 != 0.0) || (NAN(local_4e8))) || (dStack_4e0 != 0.0)) ||
             (((NAN(dStack_4e0) || (local_4d8 != 0.0)) || (NAN(local_4d8))))) {
            local_5c8 = &local_238;
            local_5c0 = (double *)((ulonglong)local_5c0 & 0xffffffffffffff00);
            uVar9 = FUN_1479c55c0(param_1,&local_128,plVar11);
            dVar19 = 1.0 / dVar19;
            param_1[0x25] = (longlong)(dVar19 * local_4e8);
            param_1[0x26] = (longlong)(dStack_4e0 * dVar19);
            param_1[0x27] = (longlong)(local_4d8 * dVar19);
            param_2 = param_2 + fVar21;
            local_588 = (longlong *)CONCAT71((int7)((ulonglong)uVar9 >> 8),1);
            goto LAB_140a20fc9;
          }
          if ((*(byte *)((longlong)param_1 + 0x34a) & 1) == 0) {
            if (!(bool)(plVar11 != (longlong *)0x0 & (bVar5 ^ 1U))) {
              local_5b0 = local_598;
              local_5c0 = (double *)CONCAT44(local_5c0._4_4_,param_2);
              local_5c8 = &local_128;
              local_5a8 = '\x01';
              local_5b8 = fVar21;
              cVar7 = (**(code **)(*param_1 + 0x810))(param_1,&local_238,local_590,&local_290);
              goto joined_r0x000140a21494;
            }
            uVar8 = (**(code **)(*plVar11 + 0x570))(plVar11);
            if ((uVar8 < 6) && ((0x2aU >> (uVar8 & 0x1f) & 1) != 0)) {
              local_5b0 = local_598;
              local_5c0 = (double *)CONCAT44(local_5c0._4_4_,param_2);
              local_5c8 = &local_128;
              local_5a8 = '\0';
              local_5b8 = fVar21;
              cVar7 = (**(code **)(*param_1 + 0x810))(param_1,&local_238,local_590,&local_290);
            }
            else {
              cVar4 = *(char *)((longlong)plVar11 + 0x1fb);
              local_5a8 = cVar4 == '\x02';
              local_5b0 = local_598;
              local_5c0 = (double *)CONCAT44(local_5c0._4_4_,param_2);
              local_5c8 = &local_128;
              local_5b8 = fVar21;
              cVar7 = (**(code **)(*param_1 + 0x810))(param_1,&local_238,local_590,&local_290);
              if (cVar4 == '\x02') goto joined_r0x000140a21494;
            }
LAB_140a2148b:
            if ((local_580 & 1) == 0) goto joined_r0x000140a21494;
          }
          else {
            if (bVar15 == false) goto LAB_140a2148b;
joined_r0x000140a21494:
            if (cVar7 != '\0') goto LAB_140a204c9;
          }
          local_5c8 = &local_238;
          local_5c0 = (double *)CONCAT71(local_5c0._1_7_,1);
          FUN_1479c55c0(param_1,&local_128,plVar11,&local_108);
          break;
        }
        if ((*(uint *)(param_1 + 0x93) & 3) == 3) {
LAB_140a20cf1:
          cVar7 = (**(code **)(*param_1 + 0x620))(param_1,&local_238,pdVar14);
          if (cVar7 != '\0') {
            local_5c8 = (double *)CONCAT44(local_5c8._4_4_,fVar21);
            (**(code **)(*param_1 + 0x628))(param_1,local_1d0,local_1e8,&local_128);
            cVar7 = (**(code **)(param_1[0x2f] + 0xe0))(local_578);
            if (cVar7 != '\0') {
              local_5c8 = &local_290;
              local_5c0 = &local_128;
              (**(code **)(*param_1 + 0x618))(param_1,local_598,param_2,fVar21);
            }
            goto LAB_140a204c9;
          }
          (**(code **)(*param_1 + 0x630))(param_1);
          if ((*(int *)((longlong)param_1 + 0x584) == 0) || (uVar8 = *puVar1, (int)uVar8 < 0)) {
LAB_140a21170:
            uVar9 = 0;
          }
          else {
            uVar9 = 0;
            if ((int)uVar8 < DAT_14c9647dc) {
              puVar12 = (undefined8 *)
                        ((ulonglong)((uVar8 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8));
              if (((puVar12 == (undefined8 *)0x0) ||
                  (*(int *)(puVar12 + 2) != *(int *)((longlong)param_1 + 0x584))) ||
                 ((*(uint *)(puVar12 + 1) & 0x10200000) != 0)) goto LAB_140a21170;
              uVar9 = *puVar12;
            }
          }
          (**(code **)(*param_1 + 0x730))(param_1,uVar9,param_1[0xb3]);
        }
        else if ((param_2 <= 0.0) && ((*(byte *)((longlong)param_1 + 0x555) & 2) != 0)) {
          memcpy(&local_4e8,local_590,0xb8);
          local_430 = param_1[0xac];
          local_428 = *local_570;
          lStack_420 = local_570[1];
          local_418 = (undefined4)param_1[0xaf];
          local_414 = *(undefined1 *)((longlong)param_1 + 0x57c);
          local_3f0 = param_1[0xb4];
          local_410 = *(undefined8 *)puVar1;
          lStack_408 = param_1[0xb1];
          local_400 = param_1[0xb2];
          lStack_3f8 = param_1[0xb3];
          local_450 = local_468 - (double)param_1[0x48] * 2.4000000953674316;
          local_460 = local_478 - (double)param_1[0x46] * 2.4000000953674316;
          local_458 = local_470 - (double)param_1[0x47] * 2.4000000953674316;
          (**(code **)(*param_1 + 0x4f0))(param_1,local_500,&local_4e8);
          lVar10 = param_1[0x22];
          local_528 = *(undefined8 *)(lVar10 + 0x240);
          uStack_520 = *(undefined8 *)(lVar10 + 0x248);
          local_518 = *(undefined8 *)(lVar10 + 0x250);
          uStack_510 = *(undefined8 *)(lVar10 + 600);
          (**(code **)(*param_1 + 0x4f8))(param_1,local_500,&local_4e8);
          *(byte *)((longlong)param_1 + 0x349) = *(byte *)((longlong)param_1 + 0x349) | 0x10;
        }
        cVar7 = (**(code **)(*local_578 + 0xe8))();
        param_3 = local_598;
        if (cVar7 != '\0') {
          local_538 = param_1[0x27];
          pdVar14 = &local_548;
          local_548 = *pdVar13;
          lStack_540 = param_1[0x26];
          pdVar13 = local_568;
          goto LAB_140a214f4;
        }
        if (((~*(uint *)pdVar14 & 3) != 0) && ((*(byte *)((longlong)param_1 + 0x555) & 2) == 0)) {
          cVar7 = '\x01';
          if ((!bVar5 && (*(byte *)((longlong)param_1 + 0x5b4) & 0x20) == 0) &&
              plVar11 != (longlong *)0x0) {
            uVar9 = (**(code **)(*plVar11 + 0x570))(plVar11);
            if ((((uint)uVar9 < 6) && ((0x2aU >> ((uint)uVar9 & 0x1f) & 1) != 0)) ||
               (*(char *)((longlong)plVar11 + 0x1fb) != '\x02')) {
              uVar6 = local_580 & 1;
              local_580 = CONCAT71((int7)((ulonglong)uVar9 >> 8),1);
              if (uVar6 != 0) goto LAB_140a20ec2;
              cVar7 = '\0';
            }
          }
          local_5b0 = param_3;
          local_5c0 = (double *)CONCAT44(local_5c0._4_4_,param_2);
          local_5c8 = &local_128;
          plVar11 = param_1;
          local_5b8 = fVar21;
          local_5a8 = cVar7;
          cVar7 = (**(code **)(*param_1 + 0x810))(param_1,&local_238,local_590);
          local_580 = CONCAT71((int7)((ulonglong)plVar11 >> 8),1);
          if (cVar7 != '\0') goto LAB_140a204c9;
        }
LAB_140a20ec2:
        cVar7 = (**(code **)(*local_578 + 0xe0))();
        if (((cVar7 != '\0') && ((*(byte *)((longlong)param_1 + 0x5b4) & 0x20) == 0)) &&
           (((char)param_1[0x1f0] == '\0' &&
            ((1e-06 <= fVar21 && ((*(byte *)(param_1 + 0x1b6) & 2) == 0)))))) {
          lVar10 = param_1[0x22];
          dVar2 = *(double *)(lVar10 + 0x270);
          dVar3 = *(double *)(lVar10 + 0x268);
          dVar19 = 1.0 / dVar19;
          param_1[0x25] = (longlong)(dVar19 * (*(double *)(lVar10 + 0x260) - local_128));
          param_1[0x26] = (longlong)((dVar3 - dStack_120) * dVar19);
          param_1[0x27] = (longlong)((dVar2 - local_118) * dVar19);
          (**(code **)(*param_1 + 0x8d8))(param_1);
        }
        lVar10 = param_1[0x22];
        if ((*(double *)(lVar10 + 0x260) == local_128) &&
           (!NAN(*(double *)(lVar10 + 0x260)) && !NAN(local_128))) {
          if ((*(double *)(lVar10 + 0x268) == dStack_120) &&
             (!NAN(*(double *)(lVar10 + 0x268)) && !NAN(dStack_120))) {
            if ((*(double *)(lVar10 + 0x270) == local_118) &&
               (!NAN(*(double *)(lVar10 + 0x270)) && !NAN(local_118))) break;
          }
        }
LAB_140a20fc9:
      } while (1e-06 <= param_2);
    }
    cVar7 = (**(code **)(param_1[0x2f] + 0xe0))(param_1 + 0x2f);
    if (cVar7 != '\0') {
      (**(code **)(*param_1 + 0x8d8))(param_1);
    }
  }
LAB_140a204c9:
  if ((local_f0 ^ (ulonglong)auStack_5e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a21602 FUN_140a21602 body=427 status=ok
// SIG undefined FUN_140a21602(void)

void FUN_140a21602(longlong param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong lVar13;
  
  lVar3 = *(longlong *)(param_1 + 0x118);
  if (lVar3 != 0) {
    uVar1 = *(undefined4 *)(lVar3 + 0x478);
    uVar4 = *(undefined4 *)(lVar3 + 0x47c);
    uVar5 = *(undefined4 *)(lVar3 + 0x480);
    uVar6 = *(undefined4 *)(lVar3 + 0x484);
    uVar10 = *(undefined8 *)(lVar3 + 0x490);
    *(undefined8 *)(param_3 + 4) = *(undefined8 *)(lVar3 + 0x488);
    *(undefined8 *)(param_3 + 6) = uVar10;
    *param_3 = uVar1;
    param_3[1] = uVar4;
    param_3[2] = uVar5;
    param_3[3] = uVar6;
    iVar7 = *(int *)(lVar3 + 1000);
    if (0 < iVar7) {
      lVar13 = 0;
      do {
        lVar12 = *(longlong *)(*(longlong *)(lVar3 + 0x3e0) + lVar13 * 8);
        if (lVar12 != 0) {
          uVar1 = *(undefined4 *)(lVar12 + 0xc);
          iVar7 = *(int *)(param_2 + 0x78);
          *(uint *)(param_2 + 0x78) = iVar7 + 1U;
          if (*(uint *)(param_2 + 0x7c) < iVar7 + 1U) {
            FUN_1447de67e(param_2 + 0x60,iVar7);
          }
          lVar12 = *(longlong *)(param_2 + 0x70);
          if (*(longlong *)(param_2 + 0x70) == 0) {
            lVar12 = param_2 + 0x60;
          }
          *(undefined4 *)(lVar12 + (longlong)iVar7 * 4) = uVar1;
          iVar7 = *(int *)(lVar3 + 1000);
        }
        lVar13 = lVar13 + 1;
      } while (lVar13 < iVar7);
    }
    iVar7 = *(int *)(lVar3 + 0x3f8);
    if ((longlong)iVar7 != 0) {
      lVar13 = *(longlong *)(lVar3 + 0x3f0);
      lVar12 = 0;
      do {
        plVar11 = *(longlong **)(lVar13 + lVar12);
        if (((plVar11 != (longlong *)0x0) &&
            (uVar8 = (**(code **)(*plVar11 + 0x570))(plVar11), uVar8 < 6)) &&
           ((0x2aU >> (uVar8 & 0x1f) & 1) != 0)) {
          uVar1 = *(undefined4 *)((longlong)plVar11 + 0xc);
          iVar2 = *(int *)(param_2 + 0x58);
          *(uint *)(param_2 + 0x58) = iVar2 + 1U;
          if (*(uint *)(param_2 + 0x5c) < iVar2 + 1U) {
            FUN_140694806(param_2 + 0x30,iVar2);
          }
          lVar9 = *(longlong *)(param_2 + 0x50);
          if (*(longlong *)(param_2 + 0x50) == 0) {
            lVar9 = param_2 + 0x30;
          }
          *(undefined4 *)(lVar9 + (longlong)iVar2 * 4) = uVar1;
          *(undefined1 *)(param_2 + 0x29) = 0;
        }
        lVar12 = lVar12 + 8;
      } while ((longlong)iVar7 * 8 != lVar12);
    }
    *(byte *)(param_2 + 0x10) = *(byte *)(lVar3 + 0x2d3) >> 5 & 1;
    *(byte *)(param_2 + 0x13) = *(byte *)(lVar3 + 0x2d3) >> 6 & 1;
    *(undefined1 *)(param_2 + 0x20) = *(undefined1 *)(lVar3 + 0x2ea);
    if (((*(byte *)(lVar3 + 0x2e4) & 8) != 0) && (lVar3 = *(longlong *)(lVar3 + 0xa8), lVar3 != 0))
    {
      uVar10 = FUN_140757e32();
      plVar11 = (longlong *)FUN_144718840(lVar3,uVar10);
      if (plVar11 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000140a217aa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar11 + 0x20))(plVar11,param_2,*(code **)(*plVar11 + 0x20));
        return;
      }
    }
  }
  return;
}



// FUNCTION 140a217ae FUN_140a217ae body=1557 status=ok
// SIG undefined FUN_140a217ae(void)

int * FUN_140a217ae(longlong *param_1,int *param_2,undefined8 *param_3,char *param_4)

{
  uint *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  char cVar9;
  byte bVar10;
  int iVar11;
  uint *puVar12;
  longlong *plVar13;
  int iVar14;
  int iVar15;
  longlong *plVar16;
  ulonglong uVar17;
  int iVar18;
  longlong lVar19;
  uint uVar20;
  int iVar21;
  ulonglong uVar22;
  uint uVar23;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar18 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar18 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar18) {
      FUN_14482b872(param_1,iVar18);
    }
    iVar21 = (int)param_1[5];
    if (iVar21 == 0) {
      iVar5 = -1;
    }
    else {
      iVar5 = iVar21 + 0x1e;
      if (-1 < iVar21 + -1) {
        iVar5 = iVar21 + -1;
      }
      iVar5 = iVar5 >> 5;
    }
    plVar16 = param_1 + 2;
    iVar11 = iVar21 + 1;
    iVar14 = iVar21 + 0x1f;
    if (-1 < iVar21) {
      iVar14 = iVar21;
    }
    if (iVar14 >> 5 == iVar5) {
      *(int *)(param_1 + 5) = iVar11;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar21) {
        if (iVar21 + 0x20U < 0xa0) {
          iVar11 = 0x80;
          iVar5 = iVar21;
        }
        else {
          uVar23 = iVar21 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar20 = 4;
            if (4 < uVar23) {
              uVar20 = uVar23;
            }
          }
          else {
            uVar20 = (uVar23 * 3 >> 3) + uVar23 + 0x10;
          }
          uVar8 = FUN_144a3809e(uVar20 << 2,0);
          iVar5 = (int)(uVar8 >> 2);
          iVar11 = -0x20;
          if ((int)uVar23 <= iVar5) {
            iVar11 = iVar5 << 5;
          }
          iVar5 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar11;
        FUN_1446efbd8(plVar16,iVar5);
        iVar11 = (int)param_1[5] + 1;
      }
      iVar5 = iVar11 + 0x1f;
      if (-1 < iVar11) {
        iVar5 = iVar11;
      }
      *(int *)(param_1 + 5) = iVar11;
      if (iVar11 % 0x20 != 0) {
        plVar13 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar13 = plVar16;
        }
        bVar10 = -(char)(iVar11 % 0x20);
        *(uint *)((longlong)plVar13 + (longlong)(iVar5 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar13 + (longlong)(iVar5 >> 5) * 4) << (bVar10 & 0x1f)) >>
             (bVar10 & 0x1f);
      }
    }
    lVar7 = (longlong)iVar18;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar16 = (longlong *)param_1[4];
    }
    bVar10 = (byte)iVar21 & 0x1f;
    puVar1 = (uint *)((longlong)plVar16 + (longlong)(iVar14 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar10 | 0xfffffffeU >> 0x20 - bVar10);
  }
  else {
    iVar18 = (int)param_1[6];
    lVar7 = (longlong)iVar18;
    iVar21 = *(int *)(*param_1 + 4 + lVar7 * 0x18);
    *(int *)(param_1 + 6) = iVar21;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar21 * 0x18) = 0xffffffff;
    }
  }
  puVar1 = (uint *)(param_1 + 2);
  puVar12 = (uint *)param_1[4];
  if ((uint *)param_1[4] == (uint *)0x0) {
    puVar12 = puVar1;
  }
  iVar21 = iVar18 + 0x1f;
  if (-1 < iVar18) {
    iVar21 = iVar18;
  }
  puVar12[iVar21 >> 5] = puVar12[iVar21 >> 5] | 1 << ((byte)iVar18 & 0x1f);
  plVar16 = (longlong *)(*param_1 + lVar7 * 0x18);
  plVar13 = (longlong *)param_3[1];
  lVar7 = *(longlong *)*param_3;
  *plVar16 = lVar7;
  plVar16[1] = *plVar13;
  *(undefined4 *)(plVar16 + 2) = 0xffffffff;
  uVar23 = (uint)((ulonglong)lVar7 >> 0x10);
  uVar20 = (uint)lVar7 & 0xffff;
  uVar23 = ((uint)lVar7 << 0x10 | uVar20) + (int)((ulonglong)lVar7 >> 0x20) +
           (uVar23 << 0x13 | uVar23 & 0xffff) + (uVar20 >> 4);
  if ((uint)((int)param_1[1] - *(int *)((longlong)param_1 + 0x34)) < 2) {
LAB_140a218ee:
    cVar9 = '\0';
  }
  else {
    plVar13 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar13 = (longlong *)param_1[8];
    }
    iVar21 = *(int *)((longlong)plVar13 + (ulonglong)((int)param_1[9] - 1U & uVar23) * 4);
    if (iVar21 == -1) goto LAB_140a218ee;
    do {
      plVar13 = (longlong *)(*param_1 + (longlong)iVar21 * 0x18);
      if (*plVar13 == lVar7) {
        uVar3 = *(undefined4 *)((longlong)plVar16 + 4);
        lVar7 = plVar16[1];
        uVar4 = *(undefined4 *)((longlong)plVar16 + 0xc);
        *(int *)plVar13 = (int)*plVar16;
        *(undefined4 *)((longlong)plVar13 + 4) = uVar3;
        *(int *)(plVar13 + 1) = (int)lVar7;
        *(undefined4 *)((longlong)plVar13 + 0xc) = uVar4;
        FUN_14791c694(param_1,iVar18);
        cVar9 = '\x01';
        iVar18 = iVar21;
        break;
      }
      iVar21 = (int)plVar13[2];
      cVar9 = '\0';
    } while (iVar21 != -1);
  }
  if (param_4 != (char *)0x0) {
    *param_4 = cVar9;
  }
  if (cVar9 != '\0') goto LAB_140a21ba5;
  uVar6 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  uVar20 = 1;
  if (3 < uVar6) {
    uVar8 = (ulonglong)(uVar6 & 0xfffffffe) + 0xf;
    lVar7 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    uVar20 = 1 << ((byte)lVar7 & 0x1f);
  }
  if (((int)uVar6 < 1) || ((int)uVar20 <= (int)param_1[9])) {
    uVar23 = (int)param_1[9] - 1U & uVar23;
    *(uint *)((longlong)plVar16 + 0x14) = uVar23;
    plVar13 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar13 = param_1 + 7;
    }
    *(undefined4 *)(plVar16 + 2) =
         *(undefined4 *)
          ((longlong)plVar13 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar23) * 4);
    plVar16 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar16 = param_1 + 7;
    }
    *(int *)((longlong)plVar16 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar23) * 4) =
         iVar18;
    goto LAB_140a21ba5;
  }
  *(uint *)(param_1 + 9) = uVar20;
  plVar16 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar16,0,0,4);
    uVar20 = *(uint *)(param_1 + 9);
  }
  plVar13 = param_1 + 7;
  if (uVar20 == 1) {
    if (*plVar16 != 0) {
      FUN_1446efa72(plVar16,0,0,4);
    }
LAB_140a21951:
    uVar23 = 0;
    do {
      plVar16 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar16 = plVar13;
      }
      *(undefined4 *)((longlong)plVar16 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar23) * 4) =
           0xffffffff;
      uVar23 = uVar23 + 1;
    } while (uVar20 != uVar23);
  }
  else {
    if (uVar20 == 0) goto LAB_140a21ba5;
    FUN_1446efa72(plVar16,0,uVar20,4);
    if (0 < (int)uVar20) goto LAB_140a21951;
  }
  iVar21 = (int)param_1[5];
  if (iVar21 == 0) {
    uVar8 = 0;
    uVar17 = 1;
    iVar5 = 0;
    iVar11 = 0;
  }
  else {
    puVar12 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar12 = puVar1;
    }
    uVar23 = *puVar12;
    if (uVar23 == 0) {
      iVar5 = iVar21 + 0x1e;
      if (-1 < iVar21 + -1) {
        iVar5 = iVar21 + -1;
      }
      uVar8 = 0;
      uVar17 = (ulonglong)(uint)(iVar5 >> 5);
      if (iVar5 >> 5 < 1) {
        uVar17 = uVar8;
      }
      iVar11 = 0;
      do {
        if (uVar17 == uVar8) goto LAB_140a21ba5;
        iVar11 = iVar11 + 0x20;
        uVar23 = puVar12[uVar8 + 1];
        uVar8 = uVar8 + 1;
      } while (uVar23 == 0);
    }
    else {
      uVar8 = 0;
      iVar11 = 0;
    }
    uVar17 = (ulonglong)(-uVar23 & uVar23);
    uVar22 = uVar17 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar22 != 0) {
      for (; uVar22 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    iVar5 = (iVar11 - ((uint)lVar7 ^ 0x3f)) + 0x3e;
    if (iVar21 <= iVar5) {
      iVar5 = iVar21;
    }
  }
  if (iVar5 < iVar21) {
    uVar23 = 0xffffffff;
    do {
      lVar7 = *param_1;
      lVar19 = (longlong)iVar5;
      uVar2 = *(undefined8 *)(lVar7 + lVar19 * 0x18);
      uVar20 = (uint)((ulonglong)uVar2 >> 0x10);
      uVar6 = (uint)uVar2 & 0xffff;
      uVar22 = (longlong)
               (int)(((uint)uVar2 << 0x10 | uVar6) + (int)((ulonglong)uVar2 >> 0x20) +
                     (uVar20 << 0x13 | uVar20 & 0xffff) + (uVar6 >> 4)) &
               (longlong)(int)param_1[9] - 1U;
      iVar21 = (int)uVar22;
      *(int *)(lVar7 + 0x14 + lVar19 * 0x18) = iVar21;
      plVar16 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar16 = plVar13;
      }
      *(undefined4 *)(lVar7 + 0x10 + lVar19 * 0x18) =
           *(undefined4 *)((longlong)plVar16 + ((longlong)(int)param_1[9] - 1U & uVar22) * 4);
      plVar16 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar16 = plVar13;
      }
      *(int *)((longlong)plVar16 + ((longlong)iVar21 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
      uVar23 = ~(uint)uVar17 & uVar23;
      puVar12 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar12 = puVar1;
      }
      iVar21 = (int)param_1[5];
      iVar5 = (int)uVar8;
      lVar7 = (longlong)iVar5;
      uVar20 = puVar12[lVar7] & uVar23;
      if (uVar20 == 0) {
        iVar14 = iVar21 + 0x1e;
        if (-1 < iVar21 + -1) {
          iVar14 = iVar21 + -1;
        }
        iVar14 = iVar14 >> 5;
        iVar15 = iVar14;
        if (iVar14 < iVar5) {
          iVar15 = iVar5;
        }
        if (iVar14 <= iVar5) break;
        lVar19 = 0;
        while( true ) {
          iVar11 = iVar11 + 0x20;
          uVar20 = puVar12[lVar7 + lVar19 + 1];
          if (uVar20 != 0) break;
          lVar19 = lVar19 + 1;
          if (iVar15 - lVar7 == lVar19) goto LAB_140a21ba5;
        }
        uVar8 = (ulonglong)(iVar5 + (int)lVar19 + 1);
        uVar23 = 0xffffffff;
      }
      uVar17 = (ulonglong)(-uVar20 & uVar20);
      uVar22 = uVar17 * 2 + 1;
      lVar7 = 0x3f;
      if (uVar22 != 0) {
        for (; uVar22 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar5 = (iVar11 - ((uint)lVar7 ^ 0x3f)) + 0x3e;
    } while (iVar5 < iVar21);
  }
LAB_140a21ba5:
  *param_2 = iVar18;
  return param_2;
}



// FUNCTION 140a21dde FUN_140a21dde body=1711 status=ok
// SIG undefined FUN_140a21dde(void)

ulonglong FUN_140a21dde(longlong param_1,byte param_2,uint *param_3,longlong *param_4)

{
  uint *puVar1;
  longlong lVar2;
  uint *puVar3;
  undefined4 *puVar4;
  byte bVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  char cVar9;
  uint uVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong lVar14;
  uint uVar15;
  ulonglong uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  bool bVar22;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  wchar_t *local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  undefined8 *local_80;
  undefined1 *local_78;
  code *local_70;
  undefined4 local_67;
  undefined3 uStack_63;
  undefined8 local_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  plVar12 = &DAT_14caea250;
  if (param_2 < 9) {
    plVar12 = (longlong *)((ulonglong)((uint)param_2 * 0x50) + param_1);
  }
  if ((int)plVar12[1] != *(int *)((longlong)plVar12 + 0x34)) {
    uVar10 = *param_3;
    bVar5 = (byte)param_3[4];
    uVar15 = param_3[3];
    uVar19 = uVar15 >> 0xd ^
             (uVar10 * 0x10000 + param_3[2] + (uVar10 & 0xffff) +
              ((uVar10 >> 0x10) << 0x13 | uVar10 >> 0x10) + ((uVar10 & 0xffff) >> 4)) - uVar15;
    uVar17 = uVar19 << 8 ^ (-0x61c88647 - uVar15) - uVar19;
    uVar18 = uVar17 >> 0xd ^ (uVar15 - uVar19) - uVar17;
    uVar19 = uVar18 >> 0xc ^ (uVar19 - uVar17) - uVar18;
    uVar17 = uVar19 << 0x10 ^ (uVar17 - uVar18) - uVar19;
    uVar18 = uVar17 >> 5 ^ (uVar18 - uVar19) - uVar17;
    uVar19 = uVar18 >> 3 ^ (uVar19 - uVar17) - uVar18;
    uVar17 = uVar19 << 10 ^ (uVar17 - uVar18) - uVar19;
    uVar17 = uVar17 >> 0xf ^ uVar18 - (uVar19 + uVar17);
    iVar20 = uVar17 - bVar5;
    uVar19 = iVar20 * 0x100 ^ 0x9e3779b9 - uVar17;
    uVar17 = uVar19 >> 0xd ^ ((uint)bVar5 - iVar20) - uVar19;
    uVar18 = uVar17 >> 0xc ^ (iVar20 - uVar19) - uVar17;
    uVar19 = uVar18 << 0x10 ^ (uVar19 - uVar17) - uVar18;
    uVar21 = uVar19 >> 5 ^ (uVar17 - uVar18) - uVar19;
    uVar17 = uVar21 >> 3 ^ (uVar18 - uVar19) - uVar21;
    uVar18 = uVar17 << 10 ^ (uVar19 - uVar21) - uVar17;
    plVar13 = plVar12 + 7;
    if ((longlong *)plVar12[8] != (longlong *)0x0) {
      plVar13 = (longlong *)plVar12[8];
    }
    iVar20 = *(int *)((longlong)plVar13 +
                     (ulonglong)
                     ((int)plVar12[9] - 1U & (uVar18 >> 0xf ^ uVar21 - (uVar17 + uVar18))) * 4);
    if (iVar20 != -1) {
      lVar11 = *plVar12;
      do {
        lVar14 = (longlong)iVar20;
        if ((((*(uint *)(lVar11 + lVar14 * 0x18) == uVar10) &&
             (*(uint *)(lVar11 + 4 + lVar14 * 0x18) == param_3[2])) &&
            (lVar2 = lVar11 + lVar14 * 0x18, *(byte *)(lVar2 + 8) == bVar5)) &&
           (*(uint *)(lVar2 + 0xc) == uVar15)) {
          uVar16 = CONCAT71((int7)((ulonglong)lVar11 >> 8),1);
          if (param_2 == 3) {
            puVar3 = (uint *)(*(longlong *)(param_1 + 0x340) + lVar14 * 0x28);
            if (((((puVar3[1] == 0) || (uVar10 = *puVar3, (int)uVar10 < 0)) ||
                 ((DAT_14c9647dc <= (int)uVar10 ||
                  ((plVar12 = (longlong *)
                              ((ulonglong)((uVar10 & 0xffff) * 0x18) +
                              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8)),
                   plVar12 == (longlong *)0x0 || (*(uint *)(plVar12 + 2) != puVar3[1])))))) ||
                ((*(uint *)(plVar12 + 1) & 0x10200000) != 0)) || (lVar11 = *plVar12, lVar11 == 0)) {
              if (*(longlong *)(puVar3 + 2) != 0) {
                puVar1 = puVar3 + 2;
                lVar11 = FUN_140007850();
                cVar9 = (*(code *)PTR_FUN_14c758760)();
                if ((lVar11 == 0) || (cVar9 == '\0')) {
                  if (lVar11 != 0) {
                    uVar10 = *(uint *)(lVar11 + 0xc);
                    *puVar3 = uVar10;
                    if ((int)uVar10 < DAT_14c9647dc) {
                      lVar14 = (ulonglong)((uVar10 & 0xffff) * 0x18) +
                               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8);
                    }
                    else {
                      lVar14 = 0;
                    }
                    uVar10 = *(uint *)(lVar14 + 0x10);
                    if (*(uint *)(lVar14 + 0x10) == 0) {
                      LOCK();
                      iVar20 = DAT_14c964868 + 1;
                      UNLOCK();
                      uVar15 = DAT_14c964868 + 1;
                      bVar22 = DAT_14c964868 < 1000;
                      DAT_14c964868 = iVar20;
                      if (bVar22) {
                        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",
                                      0x23d,
                                      L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                      ,uVar15);
                      }
                      LOCK();
                      uVar10 = *(uint *)(lVar14 + 0x10);
                      bVar22 = uVar10 == 0;
                      if (bVar22) {
                        *(uint *)(lVar14 + 0x10) = uVar15;
                        uVar10 = 0;
                      }
                      UNLOCK();
                      if (bVar22) {
                        uVar10 = uVar15;
                      }
                    }
                    puVar3[1] = uVar10;
                    goto LAB_140a22184;
                  }
                  puVar3[0] = 0;
                  puVar3[1] = 0;
                }
                else {
                  uVar10 = *(uint *)(lVar11 + 0xc);
                  if ((int)uVar10 < DAT_14c9647dc) {
                    lVar14 = (ulonglong)((uVar10 & 0xffff) * 0x18) +
                             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8);
                  }
                  else {
                    lVar14 = 0;
                  }
                  if ((*(uint *)(lVar14 + 8) & 0x8400000) == 0) {
                    FUN_14485c47a(puVar3,lVar11);
                  }
LAB_140a22184:
                  if ((*(uint *)(lVar11 + 8) >> 0x1e & 1) == 0) goto LAB_140a2204f;
                }
                if (*(longlong *)puVar1 != 0) {
                  FUN_140081d40(puVar1,0);
                  lVar11 = FUN_14479d2ce(puVar3);
                  if (lVar11 != 0) goto LAB_140a2204f;
                  if (*(longlong *)puVar1 != 0) {
                    lVar11 = FUN_140007850();
                    cVar9 = (*(code *)PTR_FUN_14c758760)();
                    if ((lVar11 == 0) || (cVar9 == '\0')) {
                      FUN_14485c47a(puVar3,lVar11);
                      if (lVar11 == 0) goto LAB_140a221f8;
                    }
                    else {
                      uVar10 = *(uint *)(lVar11 + 0xc);
                      if ((int)uVar10 < DAT_14c9647dc) {
                        lVar14 = (ulonglong)((uVar10 & 0xffff) * 0x18) +
                                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8);
                      }
                      else {
                        lVar14 = 0;
                      }
                      if ((*(uint *)(lVar14 + 8) & 0x8400000) == 0) {
                        FUN_14485c47a(puVar3,lVar11);
                      }
                    }
                    if ((*(uint *)(lVar11 + 8) >> 0x1e & 1) == 0) goto LAB_140a2204f;
                  }
                }
              }
LAB_140a221f8:
              lVar11 = 0;
            }
            else {
LAB_140a2204f:
              if (DAT_14cb0b430 == 0) {
                local_80 = &local_60;
                local_60 = FUN_1449e2820;
                local_70 = FUN_14081d0ea;
                local_78 = &LAB_145892f94;
                local_88 = &LAB_147d6dbf3;
                local_90 = &LAB_1464081e0;
                local_98 = L"Engine";
                local_a0 = 0;
                local_a8 = 0x10000001;
                local_b0 = 8;
                local_b8 = 0x138;
                FUN_14081cfa3(L"/Script/Engine",L"Texture",&DAT_14cb0b430,FUN_1464081be);
              }
              if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x38) < *(int *)(DAT_14cb0b430 + 0x38))
                 || (*(longlong *)
                      (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x30) +
                      (longlong)*(int *)(DAT_14cb0b430 + 0x38) * 8) != DAT_14cb0b430 + 0x30))
              goto LAB_140a221f8;
            }
            *param_4 = lVar11;
            *(undefined4 *)(param_4 + 1) = (undefined4)local_60;
            *(undefined4 *)((longlong)param_4 + 0xc) = local_60._4_4_;
            *(undefined4 *)(param_4 + 2) = uStack_58;
            *(undefined4 *)((longlong)param_4 + 0x14) = uStack_54;
            param_4[3] = local_50;
            *(undefined1 *)(param_4 + 4) = 3;
            *(undefined4 *)((longlong)param_4 + 0x21) = local_67;
            *(uint *)((longlong)param_4 + 0x24) = CONCAT31(uStack_63,local_67._3_1_);
          }
          else {
            switch(param_2) {
            case 0:
              *(undefined4 *)param_4 = *(undefined4 *)(*(longlong *)(param_1 + 0x2f0) + lVar14 * 4);
              *(undefined1 *)(param_4 + 4) = 0;
              lVar11 = *(longlong *)(param_1 + 0x2d0);
              break;
            case 1:
              puVar4 = (undefined4 *)(*(longlong *)(param_1 + 800) + lVar14 * 0x10);
              uVar6 = puVar4[1];
              uVar7 = puVar4[2];
              uVar8 = puVar4[3];
              *(undefined4 *)param_4 = *puVar4;
              *(undefined4 *)((longlong)param_4 + 4) = uVar6;
              *(undefined4 *)(param_4 + 1) = uVar7;
              *(undefined4 *)((longlong)param_4 + 0xc) = uVar8;
              *(undefined1 *)(param_4 + 4) = 1;
              lVar11 = *(longlong *)(param_1 + 0x2e0);
              break;
            case 2:
              puVar4 = (undefined4 *)(*(longlong *)(param_1 + 0x330) + lVar14 * 0x20);
              uVar6 = puVar4[1];
              uVar7 = puVar4[2];
              uVar8 = puVar4[3];
              plVar12 = (longlong *)(*(longlong *)(param_1 + 0x330) + 0x10 + lVar14 * 0x20);
              lVar11 = *plVar12;
              lVar14 = plVar12[1];
              *(undefined4 *)param_4 = *puVar4;
              *(undefined4 *)((longlong)param_4 + 4) = uVar6;
              *(undefined4 *)(param_4 + 1) = uVar7;
              *(undefined4 *)((longlong)param_4 + 0xc) = uVar8;
              param_4[2] = lVar11;
              param_4[3] = lVar14;
              *(undefined1 *)(param_4 + 4) = 2;
            default:
              goto switchD_140a220f1_caseD_3;
            case 4:
              lVar11 = FUN_147baf610(lVar14 * 0x28 + *(longlong *)(param_1 + 0x350));
              *param_4 = lVar11;
              *(undefined1 *)(param_4 + 4) = 4;
              goto switchD_140a220f1_caseD_3;
            case 5:
              uVar6 = *(undefined4 *)(*(longlong *)(param_1 + 0x370) + lVar14 * 4);
              lVar11 = FUN_147baf68c(lVar14 * 0x28 + *(longlong *)(param_1 + 0x360));
              *param_4 = lVar11;
              *(undefined4 *)(param_4 + 1) = uVar6;
              *(undefined1 *)(param_4 + 4) = 5;
              goto switchD_140a220f1_caseD_3;
            case 6:
              lVar11 = FUN_147b07efc(lVar14 * 0x28 + *(longlong *)(param_1 + 0x380));
              *param_4 = lVar11;
              *(undefined1 *)(param_4 + 4) = 6;
              goto switchD_140a220f1_caseD_3;
            case 7:
              lVar11 = FUN_147baf64e(lVar14 * 0x28 + *(longlong *)(param_1 + 0x390));
              *param_4 = lVar11;
              *(undefined1 *)(param_4 + 4) = 7;
              goto switchD_140a220f1_caseD_3;
            case 8:
              *(undefined1 *)param_4 = *(undefined1 *)(*(longlong *)(param_1 + 0x300) + lVar14);
              *(undefined1 *)(param_4 + 4) = 8;
              *(undefined1 *)((longlong)param_4 + 0x2c) =
                   *(undefined1 *)(*(longlong *)(param_1 + 0x310) + lVar14);
              goto switchD_140a220f1_caseD_3;
            }
            *(undefined4 *)(param_4 + 5) = *(undefined4 *)(lVar11 + lVar14 * 4);
          }
          goto switchD_140a220f1_caseD_3;
        }
        iVar20 = *(int *)(lVar11 + 0x10 + lVar14 * 0x18);
      } while (iVar20 != -1);
    }
  }
  uVar16 = 0;
switchD_140a220f1_caseD_3:
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar16 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a2249c FUN_140a2249c body=40 status=ok
// SIG undefined FUN_140a2249c(void)

undefined8 FUN_140a2249c(undefined8 param_1,int param_2)

{
  FUN_1407f61d0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140a224c4 FUN_140a224c4 body=962 status=ok
// SIG undefined FUN_140a224c4(void)

void FUN_140a224c4(longlong param_1,longlong param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  longlong lVar12;
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
  undefined8 *local_50;
  undefined4 local_48;
  code *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if ((((param_2 != 0) && (lVar8 = *(longlong *)(param_1 + 0x888), lVar8 != 0)) &&
      (*(longlong *)(param_1 + 0x890) != 0)) && (*(longlong *)(param_1 + 0x898) != 0)) {
    if (DAT_14cae8b20 == 0) {
      local_70 = &local_40;
      local_40 = (code *)&LAB_14355090c;
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
    lVar9 = DAT_14cae8b20;
    if (DAT_14c951858 == 0) {
      local_70 = &local_40;
      local_40 = FUN_1449e2820;
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
    lVar8 = *(longlong *)(lVar8 + 0x20);
    if (lVar8 == 0) {
      lVar12 = 0;
    }
    else {
      iVar1 = *(int *)(lVar9 + 0x38);
      do {
        if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x38) < iVar1) ||
           (lVar12 = lVar8,
           *(longlong *)(*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) + (longlong)iVar1 * 8) !=
           lVar9 + 0x30)) {
          lVar12 = 0;
        }
      } while ((lVar12 == 0) && (lVar8 = *(longlong *)(lVar8 + 0x20), lVar8 != 0));
    }
    lVar8 = FUN_1447210f0(*(undefined8 *)(param_1 + 0x888));
    if ((lVar12 != 0) && (lVar8 != 0)) {
      cVar7 = FUN_1405246fa(param_1);
      if (cVar7 == '\0') {
        lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x888) + 0x1c8);
        puVar10 = &DAT_14c846480;
        if (lVar8 != 0) {
          puVar10 = (undefined8 *)(lVar8 + 0x240);
        }
        puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x898) + 0x40);
        for (lVar8 = 0xc; lVar8 != 0; lVar8 = lVar8 + -1) {
          *puVar11 = *puVar10;
          puVar10 = puVar10 + 1;
          puVar11 = puVar11 + 1;
        }
        FUN_140a22fc0(param_1,param_2);
        uVar2 = *param_3;
        uVar4 = *(undefined8 *)(param_3 + 1);
        uVar3 = param_3[3];
        *(undefined4 *)(param_1 + 0x2b4) = 0;
        *(undefined4 *)(param_1 + 0x2b8) = uVar2;
        *(undefined8 *)(param_1 + 700) = 0;
        *(undefined2 *)(param_1 + 0x2c4) = 0x100;
        *(undefined8 *)(param_1 + 0x2c8) = uVar4;
        *(uint *)(param_1 + 0x2d0) = uVar3 & 1;
        *(undefined1 *)(param_1 + 0x2d4) = 0;
        *(uint *)(param_1 + 0x2d8) = uVar3 >> 2 & 1 | 2;
        local_40 = (code *)CONCAT62(local_40._2_6_,0x101);
        FUN_140a22888(param_1,param_2,lVar12);
      }
      else {
        local_50 = (undefined8 *)0x0;
        local_48 = 0;
        FUN_1446efa72(&local_50,0,4,0x10);
        puVar10 = local_50;
        local_48 = 4;
        *local_50 = &PTR_LAB_14b425990;
        local_50[1] = param_2;
        uVar2 = param_3[1];
        uVar5 = param_3[2];
        uVar6 = param_3[3];
        *(undefined4 *)(local_50 + 2) = *param_3;
        *(undefined4 *)((longlong)local_50 + 0x14) = uVar2;
        *(undefined4 *)(local_50 + 3) = uVar5;
        *(undefined4 *)((longlong)local_50 + 0x1c) = uVar6;
        LOCK();
        UNLOCK();
        lVar9 = DAT_14c758608 + 1;
        lVar8 = DAT_14c758608 + 1;
        if (lVar9 == 0) {
          LOCK();
          UNLOCK();
          lVar9 = DAT_14c758608 + 2;
          lVar8 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar8;
        local_50[4] = lVar9;
        *local_50 = &PTR_FUN_14b425920;
        local_50[5] = 0;
        FUN_14485c47a(local_50 + 5,param_1);
        puVar10[6] = &LAB_14895ae3e;
        *(undefined4 *)(puVar10 + 7) = 0;
        FUN_14621550a(param_1,&local_50);
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a22888 FUN_140a22888 body=518 status=ok
// SIG undefined FUN_140a22888(void)

void FUN_140a22888(longlong param_1,undefined8 param_2,longlong param_3,undefined2 *param_4)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  bool bVar8;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar6 = *(longlong *)(param_3 + 0xc0);
  if ((lVar6 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar6);
  }
  else if (lVar6 == 0) {
    uVar7 = 0;
    uVar3 = 0;
    goto LAB_140a22910;
  }
  uVar7 = *(uint *)(lVar6 + 0xc);
  if ((int)uVar7 < DAT_14c9647dc) {
    lVar6 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8);
  }
  else {
    lVar6 = 0;
  }
  uVar3 = (ulonglong)*(uint *)(lVar6 + 0x10);
  if (*(uint *)(lVar6 + 0x10) == 0) {
    LOCK();
    iVar1 = DAT_14c964868 + 1;
    UNLOCK();
    uVar4 = DAT_14c964868 + 1;
    bVar8 = DAT_14c964868 < 1000;
    DAT_14c964868 = iVar1;
    if (bVar8) {
      FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                    L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                    uVar4);
    }
    LOCK();
    uVar2 = *(uint *)(lVar6 + 0x10);
    bVar8 = uVar2 == 0;
    if (bVar8) {
      *(uint *)(lVar6 + 0x10) = uVar4;
      uVar2 = 0;
    }
    UNLOCK();
    if (bVar8) {
      uVar2 = uVar4;
    }
    uVar3 = (ulonglong)uVar2;
  }
LAB_140a22910:
  *(ulonglong *)(param_1 + 0x4b8) = (ulonglong)uVar7 | uVar3 << 0x20;
  if (param_3 == 0) {
    *(undefined4 *)(param_1 + 0x4c0) = 0;
    iVar1 = 0;
  }
  else {
    uVar7 = *(uint *)(param_3 + 0xc);
    *(uint *)(param_1 + 0x4c0) = uVar7;
    if ((int)uVar7 < DAT_14c9647dc) {
      lVar6 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8);
    }
    else {
      lVar6 = 0;
    }
    iVar1 = *(int *)(lVar6 + 0x10);
    if (*(int *)(lVar6 + 0x10) == 0) {
      LOCK();
      iVar1 = DAT_14c964868 + 1;
      UNLOCK();
      iVar5 = DAT_14c964868 + 1;
      bVar8 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar1;
      if (bVar8) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar5);
      }
      LOCK();
      iVar1 = *(int *)(lVar6 + 0x10);
      bVar8 = iVar1 == 0;
      if (bVar8) {
        *(int *)(lVar6 + 0x10) = iVar5;
        iVar1 = 0;
      }
      UNLOCK();
      if (bVar8) {
        iVar1 = iVar5;
      }
    }
  }
  *(int *)(param_1 + 0x4c4) = iVar1;
  *(undefined2 *)(param_1 + 0x4c8) = *param_4;
  FUN_140a23dcc(param_1,param_2);
  local_50 = *(undefined8 *)(param_1 + 0x2e8);
  local_48 = *(longlong *)(param_1 + 0x2f0);
  if (local_48 != 0) {
    LOCK();
    *(int *)(local_48 + 8) = *(int *)(local_48 + 8) + 1;
    UNLOCK();
  }
  FUN_140a22a90(param_1);
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140a22a90 FUN_140a22a90 body=97 status=ok
// SIG undefined FUN_140a22a90(void)

void FUN_140a22a90(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_140a22af2(*param_2,*(undefined8 *)(param_1 + 0x360));
  FUN_140a22b66(*param_2,param_1 + 0x4a0);
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
                    /* WARNING: Could not recover jumptable at 0x000140a22aed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 140a22af2 FUN_140a22af2 body=106 status=ok
// SIG undefined FUN_140a22af2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140a22af2(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if ((*(uint *)(param_1 + 0x48) >> (_DAT_14cab3ff8 & 0x1f) & 1) != 0) {
    local_18 = param_2;
    FUN_140a22bda(param_1 + 0x38,_DAT_14cab3ff8);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_140cad4ca(param_1 + 0x38);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 140a22b66 FUN_140a22b66 body=106 status=ok
// SIG undefined FUN_140a22b66(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140a22b66(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if ((*(uint *)(param_1 + 0x48) >> (_DAT_14cab4a20 & 0x1f) & 1) != 0) {
    local_18 = param_2;
    FUN_140a22e58(param_1 + 0x38,_DAT_14cab4a20);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    FUN_140a22de4();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 140a22bda FUN_140a22bda body=130 status=ok
// SIG undefined FUN_140a22bda(void)

undefined8 *** FUN_140a22bda(undefined8 param_1,byte param_2)

{
  undefined8 ****ppppuVar1;
  undefined1 auStack_58 [40];
  undefined8 ***local_30;
  char local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140a22d00(param_1,1 << (param_2 & 0x1f));
  ppppuVar1 = &local_30;
  FUN_140a22c5e(param_1,ppppuVar1,1 << (DAT_14cab3ff8 & 0x1f));
  if ((local_28 == '\x01') || (local_28 == '\x02')) {
    ppppuVar1 = (undefined8 ****)local_30;
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return *ppppuVar1;
}



// FUNCTION 140a22c5e FUN_140a22c5e body=161 status=ok
// SIG undefined FUN_140a22c5e(void)

void FUN_140a22c5e(longlong *param_1,longlong *param_2,uint param_3)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  if ((*(uint *)(param_1 + 2) & param_3) == 0) {
    uVar3 = 0xff;
  }
  else {
    uVar2 = *(uint *)(param_1 + 2) & param_3 - 1;
    uVar3 = (ulonglong)uVar2 - (ulonglong)(uVar2 >> 1 & 0x55555555);
    uVar3 = (uVar3 >> 2 & 0x3333333333333333) + (uVar3 & 0x3333333333333333);
    uVar3 = ((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
  }
  lVar1 = *param_1;
  uVar4 = (ulonglong)*(ushort *)(lVar1 + uVar3 * 6);
  lVar5 = 0;
  if (uVar4 != 0xffff) {
    lVar5 = lVar1 + uVar4;
  }
  *param_2 = (ulonglong)*(byte *)(lVar1 + 4 + uVar3 * 6) + lVar5;
  *(undefined1 *)(param_2 + 1) = *(undefined1 *)(lVar1 + 5 + uVar3 * 6);
  return;
}



// FUNCTION 140a22d00 FUN_140a22d00 body=225 status=ok
// SIG undefined FUN_140a22d00(void)

undefined8 FUN_140a22d00(longlong *param_1,uint param_2,undefined8 *param_3)

{
  ushort *puVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  if ((*(uint *)(param_1 + 2) & param_2) != 0) {
    uVar3 = *(uint *)(param_1 + 2) & param_2 - 1;
    uVar4 = (ulonglong)uVar3 - (ulonglong)(uVar3 >> 1 & 0x55555555);
    uVar4 = (uVar4 >> 2 & 0x3333333333333333) + (uVar4 & 0x3333333333333333);
    uVar4 = ((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
    uVar6 = uVar4 >> 0x38;
    lVar2 = *param_1;
    if (*(char *)(lVar2 + 5 + uVar6 * 6) == '\x01') {
      puVar1 = (ushort *)(lVar2 + uVar6 * 6);
      if ((char)puVar1[1] != '\b') {
        return 0;
      }
      if (*(char *)((longlong)puVar1 + 3) != '\b') {
        return 0;
      }
      puVar5 = (undefined8 *)0x0;
      if ((ulonglong)*puVar1 != 0xffff) {
        puVar5 = (undefined8 *)(lVar2 + (ulonglong)*puVar1);
      }
      lVar7 = (uVar4 >> 0x38) * 0x10;
      (**(code **)(param_1[3] + 8 + lVar7))(puVar5);
      *puVar5 = *param_3;
      lVar2 = param_1[3];
      *(undefined1 **)(lVar2 + lVar7) = &LAB_1432df84e;
      *(undefined **)(lVar2 + 8 + lVar7) = &DAT_140a22de2;
      return CONCAT71((int7)((ulonglong)lVar2 >> 8),1);
    }
  }
  return 0;
}



// FUNCTION 140a22de4 FUN_140a22de4 body=114 status=ok
// SIG undefined FUN_140a22de4(void)

undefined8 *** FUN_140a22de4(undefined8 param_1,undefined8 param_2)

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
  FUN_140a238cc(param_1,ppppuVar1,1 << (DAT_14cab4a20 & 0x1f));
  if ((local_18 == '\x01') || (local_18 == '\x02')) {
    ppppuVar1 = (undefined8 ****)local_20;
  }
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return *ppppuVar1;
}



// FUNCTION 140a22e58 FUN_140a22e58 body=130 status=ok
// SIG undefined FUN_140a22e58(void)

undefined8 *** FUN_140a22e58(undefined8 param_1,byte param_2)

{
  undefined8 ****ppppuVar1;
  undefined1 auStack_58 [40];
  undefined8 ***local_30;
  char local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140a22edc(param_1,1 << (param_2 & 0x1f));
  ppppuVar1 = &local_30;
  FUN_140a22c5e(param_1,ppppuVar1,1 << (DAT_14cab4a20 & 0x1f));
  if ((local_28 == '\x01') || (local_28 == '\x02')) {
    ppppuVar1 = (undefined8 ****)local_30;
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return *ppppuVar1;
}



// FUNCTION 140a22edc FUN_140a22edc body=225 status=ok
// SIG undefined FUN_140a22edc(void)

undefined8 FUN_140a22edc(longlong *param_1,uint param_2,undefined8 *param_3)

{
  ushort *puVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  if ((*(uint *)(param_1 + 2) & param_2) != 0) {
    uVar3 = *(uint *)(param_1 + 2) & param_2 - 1;
    uVar4 = (ulonglong)uVar3 - (ulonglong)(uVar3 >> 1 & 0x55555555);
    uVar4 = (uVar4 >> 2 & 0x3333333333333333) + (uVar4 & 0x3333333333333333);
    uVar4 = ((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101;
    uVar6 = uVar4 >> 0x38;
    lVar2 = *param_1;
    if (*(char *)(lVar2 + 5 + uVar6 * 6) == '\x01') {
      puVar1 = (ushort *)(lVar2 + uVar6 * 6);
      if ((char)puVar1[1] != '\b') {
        return 0;
      }
      if (*(char *)((longlong)puVar1 + 3) != '\b') {
        return 0;
      }
      puVar5 = (undefined8 *)0x0;
      if ((ulonglong)*puVar1 != 0xffff) {
        puVar5 = (undefined8 *)(lVar2 + (ulonglong)*puVar1);
      }
      lVar7 = (uVar4 >> 0x38) * 0x10;
      (**(code **)(param_1[3] + 8 + lVar7))(puVar5);
      *puVar5 = *param_3;
      lVar2 = param_1[3];
      *(undefined1 **)(lVar2 + lVar7) = &LAB_1478244c0;
      *(undefined **)(lVar2 + 8 + lVar7) = &DAT_140a22fbe;
      return CONCAT71((int7)((ulonglong)lVar2 >> 8),1);
    }
  }
  return 0;
}



// FUNCTION 140a22fc0 FUN_140a22fc0 body=1144 status=ok
// SIG undefined FUN_140a22fc0(void)

void FUN_140a22fc0(longlong param_1,longlong param_2)

{
  int *piVar1;
  code *pcVar2;
  byte bVar3;
  longlong lVar4;
  longlong lVar5;
  undefined *puVar6;
  int iVar7;
  undefined8 ****ppppuVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 *puVar11;
  int iVar12;
  longlong lVar13;
  undefined1 auStack_148 [40];
  longlong local_120;
  longlong local_118;
  char local_110 [16];
  longlong *local_100;
  longlong local_f8;
  int local_e8;
  char local_e0;
  undefined8 local_d8;
  longlong *local_d0;
  int local_b8;
  undefined8 ***local_b0 [3];
  ushort local_98;
  byte local_90;
  undefined8 local_88 [6];
  undefined8 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_148;
  if (param_2 != 0) {
    FUN_140a2343a(*(undefined8 *)(param_1 + 0x890));
    FUN_140a2348a(param_1);
    if ((longlong)*(int *)(param_2 + 0xe0) != 0) {
      lVar10 = *(longlong *)(param_2 + 0xd8);
      lVar9 = (longlong)*(int *)(param_2 + 0xe0) * 0x28;
      do {
        lVar5 = *(longlong *)(lVar10 + 0x20);
        if (lVar5 == 0) {
          local_88[0] = *(undefined8 *)(lVar10 + 0x10);
          FUN_1446dcdd4(local_110,local_88);
          lVar5 = FUN_1448fdc6e(local_110);
          if (local_f8 != 0) {
            FUN_1400020a8();
          }
          *(longlong *)(lVar10 + 0x20) = lVar5;
          if (lVar5 != 0) goto LAB_140a2307e;
        }
        else {
LAB_140a2307e:
          local_110[0] = '\0';
          local_e8 = 0;
          FUN_1456bb102(local_110,*(undefined8 *)(param_1 + 0x888));
          local_e0 = '\0';
          local_b8 = 0;
          FUN_1400606f6(local_88,lVar5,local_110);
          puVar11 = local_58;
          if (local_58 == (undefined8 *)0x0) {
            puVar11 = local_88;
          }
          if (local_50 < 1) {
            puVar11 = (undefined8 *)&DAT_14c9a40e0;
          }
          FUN_1400603ec(local_b0,lVar5,puVar11);
          puVar11 = local_58;
          if (local_58 == (undefined8 *)0x0) {
            puVar11 = local_88;
          }
          FUN_1446fdf58(puVar11,local_50);
          if (local_58 != (undefined8 *)0x0) {
            FUN_1400020a8();
          }
          lVar5 = FUN_1457633d0(local_b0,0);
          pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_90 * 0x120));
          if (pcVar2 != (code *)0x0) {
            ppppuVar8 = local_b0;
            if (0x18 < local_98) {
              ppppuVar8 = (undefined8 ****)local_b0[0];
            }
            (*pcVar2)(ppppuVar8);
          }
          if (0x18 < local_98) {
            FUN_1400020a8(local_b0[0]);
          }
          if ((longlong)local_b8 != 0) {
            lVar13 = (longlong)local_b8 + -1;
            local_118 = DAT_14c9a3da0;
            local_120 = lVar13 * 0x10;
            FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + local_120),
                          *(undefined4 *)(DAT_14c9a3da0 + 8 + local_120));
            if (*(longlong *)(local_118 + local_120) != 0) {
              FUN_1400020a8();
            }
            lVar4 = DAT_14c9a3da0;
            iVar12 = (int)lVar13;
            if (DAT_14c9a3dd4 != 0) {
              *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar12;
            }
            *(undefined4 *)(lVar4 + local_120) = 0xffffffff;
            iVar7 = -1;
            if (0 < DAT_14c9a3dd4) {
              iVar7 = DAT_14c9a3dd0;
            }
            *(int *)(lVar4 + 4 + local_120) = iVar7;
            DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
            puVar6 = DAT_14c9a3dc0;
            if (DAT_14c9a3dc0 == (undefined *)0x0) {
              puVar6 = &DAT_14c9a3db0;
            }
            iVar7 = iVar12 + 0x1f;
            if (-1 < iVar12) {
              iVar7 = iVar12;
            }
            bVar3 = (byte)lVar13 & 0x1f;
            DAT_14c9a3dd0 = iVar12;
            *(uint *)(puVar6 + (longlong)(iVar7 >> 5) * 4) =
                 *(uint *)(puVar6 + (longlong)(iVar7 >> 5) * 4) &
                 (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
            local_b8 = 0;
          }
          if (local_e0 != '\0') {
            if (local_e0 == '\x01') {
              local_d8 = 0;
            }
            else if ((local_e0 == '\x03') && (local_d0 != (longlong *)0x0)) {
              LOCK();
              piVar1 = (int *)((longlong)local_d0 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*local_d0 + 0x10))();
              }
            }
            local_e0 = '\0';
          }
          if ((longlong)local_e8 != 0) {
            lVar13 = (longlong)local_e8 + -1;
            local_118 = DAT_14c9a3da0;
            local_120 = lVar13 * 0x10;
            FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + local_120),
                          *(undefined4 *)(DAT_14c9a3da0 + 8 + local_120));
            if (*(longlong *)(local_118 + local_120) != 0) {
              FUN_1400020a8();
            }
            lVar4 = DAT_14c9a3da0;
            iVar12 = (int)lVar13;
            if (DAT_14c9a3dd4 != 0) {
              *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar12;
            }
            *(undefined4 *)(lVar4 + local_120) = 0xffffffff;
            iVar7 = -1;
            if (0 < DAT_14c9a3dd4) {
              iVar7 = DAT_14c9a3dd0;
            }
            *(int *)(lVar4 + 4 + local_120) = iVar7;
            DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
            puVar6 = DAT_14c9a3dc0;
            if (DAT_14c9a3dc0 == (undefined *)0x0) {
              puVar6 = &DAT_14c9a3db0;
            }
            iVar7 = iVar12 + 0x1f;
            if (-1 < iVar12) {
              iVar7 = iVar12;
            }
            bVar3 = (byte)lVar13 & 0x1f;
            DAT_14c9a3dd0 = iVar12;
            *(uint *)(puVar6 + (longlong)(iVar7 >> 5) * 4) =
                 *(uint *)(puVar6 + (longlong)(iVar7 >> 5) * 4) &
                 (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
            local_e8 = 0;
          }
          if ((local_110[0] == '\x03') && (local_100 != (longlong *)0x0)) {
            LOCK();
            piVar1 = (int *)((longlong)local_100 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*local_100 + 0x10))();
            }
          }
          if (lVar5 != 0) {
            FUN_140a2348a(param_1);
          }
        }
        lVar10 = lVar10 + 0x28;
        lVar9 = lVar9 + -0x28;
      } while (lVar9 != 0);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140a2343a FUN_140a2343a body=80 status=ok
// SIG undefined FUN_140a2343a(void)

void FUN_140a2343a(longlong param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x30) != 0) {
    iVar1 = *(int *)(param_1 + 0x34);
    FUN_1407c9f3e(*(undefined8 *)(param_1 + 0x28));
    *(undefined4 *)(param_1 + 0x30) = 0;
    if ((iVar1 < 0) && (*(int *)(param_1 + 0x34) != 0)) {
      FUN_14757ec46(param_1 + 0x28,0);
    }
    FUN_14064dc56(param_1 + 0x40);
    *(undefined1 *)(param_1 + 0x38) = 0;
  }
  return;
}



// FUNCTION 140a2348a FUN_140a2348a body=1088 status=ok
// SIG undefined FUN_140a2348a(void)

void FUN_140a2348a(longlong param_1,undefined8 param_2,int *param_3,longlong param_4)

{
  uint uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  int iStack_a0;
  int iStack_9c;
  longlong local_98;
  int local_88;
  int iStack_84;
  int iStack_80;
  int iStack_7c;
  undefined8 local_78;
  int local_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  longlong *local_50;
  int local_48;
  undefined1 local_40 [8];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (((param_3[1] == 0 && *param_3 == 0) && param_3[2] == 0) && param_3[3] == 0)
  goto LAB_140a237d7;
  local_68 = *param_3;
  iStack_64 = param_3[1];
  iStack_60 = param_3[2];
  iStack_5c = param_3[3];
  local_58 = DAT_14cb8a5dc;
  uStack_54 = 0xffffffff;
  uVar2 = *(undefined8 *)(param_1 + 0x890);
  local_a8 = (longlong *)0x0;
  iStack_a0 = 1;
  FUN_14010590e(&local_a8,1,0);
  *local_a8 = param_4;
  local_78 = CONCAT44(uStack_54,local_58);
  local_88 = local_68;
  iStack_84 = iStack_64;
  iStack_80 = iStack_60;
  iStack_7c = iStack_5c;
  FUN_140b87554(uVar2,&local_88,&local_a8,0);
  if (local_a8 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  local_a8 = (longlong *)CONCAT44(local_a8._4_4_,local_58);
  FUN_140e06640(param_1 + 0x38);
  if (param_4 == 0) goto LAB_140a237d7;
  iVar7 = *(int *)(param_4 + 0x308);
  if ((longlong)iVar7 != 0) {
    lVar10 = *(longlong *)(param_4 + 0x300);
    lVar9 = 0;
    do {
      if (((*(int *)(lVar10 + 8 + lVar9) != 0) &&
          (plVar3 = *(longlong **)(lVar10 + lVar9), plVar3 != (longlong *)0x0)) &&
         (cVar5 = (**(code **)(*plVar3 + 0x20))(plVar3,param_1), cVar5 != '\0')) goto LAB_140a237d7;
      lVar9 = lVar9 + 0x10;
    } while ((longlong)iVar7 * 0x10 != lVar9);
  }
  local_98 = CONCAT44(uStack_54,local_58);
  local_a8 = (longlong *)CONCAT44(iStack_64,local_68);
  iStack_a0 = iStack_60;
  iStack_9c = iStack_5c;
  local_50 = (longlong *)0x0;
  local_48 = 0;
  FUN_1446efa72(&local_50,0,4,0x10);
  plVar3 = local_50;
  local_48 = 4;
  *local_50 = (longlong)&PTR_LAB_14a915ec0;
  LOCK();
  UNLOCK();
  lVar9 = DAT_14c758608 + 1;
  lVar10 = DAT_14c758608 + 1;
  if (lVar9 == 0) {
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 2;
    lVar10 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar10;
  local_50[2] = lVar9;
  *local_50 = (longlong)&PTR_FUN_14b425a00;
  local_50[3] = 0;
  iVar7 = 0;
  if (param_1 != 0) {
    uVar1 = *(uint *)(param_1 + 0xc);
    *(uint *)(local_50 + 3) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar10 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar10 = 0;
    }
    iVar7 = *(int *)(lVar10 + 0x10);
    if (*(int *)(lVar10 + 0x10) == 0) {
      LOCK();
      iVar7 = DAT_14c964868 + 1;
      UNLOCK();
      iVar6 = DAT_14c964868 + 1;
      bVar11 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar7;
      if (bVar11) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar6);
      }
      LOCK();
      iVar7 = *(int *)(lVar10 + 0x10);
      bVar11 = iVar7 == 0;
      if (bVar11) {
        *(int *)(lVar10 + 0x10) = iVar6;
        iVar7 = 0;
      }
      UNLOCK();
      if (bVar11) {
        iVar7 = iVar6;
      }
    }
  }
  *(int *)((longlong)plVar3 + 0x1c) = iVar7;
  plVar3[4] = param_1;
  plVar3[7] = local_98;
  *(undefined4 *)(plVar3 + 5) = (undefined4)local_a8;
  *(undefined4 *)((longlong)plVar3 + 0x2c) = local_a8._4_4_;
  *(int *)(plVar3 + 6) = iStack_a0;
  *(int *)((longlong)plVar3 + 0x34) = iStack_9c;
  if (((local_48 == 0) || (local_50 == (longlong *)0x0)) ||
     (cVar5 = (**(code **)(*local_50 + 0x30))(), cVar5 == '\0')) {
    if (local_48 != 0) {
      if (local_50 == (longlong *)0x0) goto LAB_140a237d7;
      (**(code **)*local_50)(local_50,0);
      FUN_1446efa72(&local_50,0,0,0x10);
      goto LAB_140a237be;
    }
  }
  else {
    plVar3 = (longlong *)(param_4 + 0x300);
    if (*(int *)(param_4 + 0x314) < 1) {
      iVar7 = *(int *)(param_4 + 0x308);
      iVar6 = *(int *)(param_4 + 0x310) + -1;
      *(int *)(param_4 + 0x310) = iVar6;
      if (iVar6 <= iVar7) {
        iVar6 = iVar7;
        if (0 < iVar7) {
          iVar8 = 0;
          do {
            if (((*(int *)(*plVar3 + 8 + (longlong)iVar8 * 0x10) == 0) ||
                (plVar4 = *(longlong **)(*plVar3 + (longlong)iVar8 * 0x10),
                plVar4 == (longlong *)0x0)) ||
               (cVar5 = (**(code **)(*plVar4 + 0x28))(), cVar5 != '\0')) {
              FUN_14005b288(plVar3,iVar8);
              FUN_14005b248(plVar3);
            }
            else {
              iVar8 = iVar8 + 1;
            }
            iVar6 = *(int *)(param_4 + 0x308);
          } while (iVar8 < iVar6);
        }
        iVar8 = 2;
        if (2 < iVar6 * 2) {
          iVar8 = iVar6 * 2;
        }
        *(int *)(param_4 + 0x310) = iVar8;
        if ((iVar8 < iVar7) && (*(int *)(param_4 + 0x30c) != iVar6)) {
          FUN_14045812c();
        }
      }
    }
    if ((local_48 != 0) && (local_50 != (longlong *)0x0)) {
      (**(code **)(*local_50 + 0x38))(local_50,local_40);
    }
    iVar7 = *(int *)(param_4 + 0x308);
    *(uint *)(param_4 + 0x308) = iVar7 + 1U;
    if (*(uint *)(param_4 + 0x30c) < iVar7 + 1U) {
      FUN_1447a71f6(plVar3,iVar7);
    }
    lVar10 = *plVar3;
    lVar9 = (longlong)iVar7 * 0x10;
    *(undefined8 *)(lVar10 + lVar9) = 0;
    *(undefined4 *)(lVar10 + 8 + lVar9) = 0;
    *(longlong **)(lVar10 + lVar9) = local_50;
    local_50 = (longlong *)0x0;
    *(int *)(lVar10 + 8 + lVar9) = local_48;
LAB_140a237be:
    local_48 = 0;
  }
  if (local_50 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_140a237d7:
  if ((local_38 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140a238cc FUN_140a238cc body=1279 status=ok
// SIG undefined FUN_140a238cc(void)

longlong * FUN_140a238cc(ulonglong *param_1,longlong *param_2,uint param_3,undefined8 *param_4)

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
  *(undefined1 **)(uVar14 + lVar10) = &LAB_1478244c0;
  *(undefined **)(uVar14 + 8 + lVar10) = &DAT_140a22fbe;
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



// FUNCTION 140a23dcc FUN_140a23dcc body=4451 status=ok
// SIG undefined FUN_140a23dcc(void)

void FUN_140a23dcc(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  float *pfVar2;
  uint uVar3;
  undefined1 uVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined8 uVar11;
  undefined **ppuVar12;
  int iVar13;
  float *pfVar14;
  ulonglong uVar15;
  longlong *plVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  longlong lVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  bool bVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  float fVar27;
  double dVar28;
  double dVar29;
  undefined1 in_XMM2 [16];
  undefined1 auVar30 [16];
  float fVar31;
  undefined1 auStack_128 [32];
  undefined4 local_108;
  undefined4 local_100;
  undefined4 local_f8;
  undefined8 local_f0;
  wchar_t *local_e8;
  undefined1 *local_e0;
  undefined1 *local_d8;
  undefined8 *local_d0;
  code *local_c8;
  code *local_c0;
  ulonglong local_b8;
  longlong *local_b0;
  longlong *local_a8;
  longlong *local_a0;
  longlong *local_98;
  longlong *local_90;
  longlong *local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_70;
  longlong *local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if (param_1[0x53] != 0) {
    FUN_140c7df7a(param_1,*(undefined8 *)((longlong)param_1 + 0x31c));
  }
  if ((param_2 != (longlong *)0x0) && (DAT_14c950c29 != 0)) {
    FUN_1456cec3c(param_2);
  }
  param_1[0x53] = (longlong)param_2;
  iVar13 = (int)param_1[0x54];
  lVar7 = (**(code **)(*param_2 + 0x2e8))(param_2);
  if (lVar7 == 0) {
    fVar31 = 0.0;
    cVar5 = '\0';
  }
  else {
    uVar4 = *(undefined1 *)(lVar7 + 0x128);
    uVar15 = *(ulonglong *)(lVar7 + 0x118);
    uVar22 = *(ulonglong *)(lVar7 + 0x120);
    uVar17 = uVar15 >> 0x20;
    uVar18 = uVar22 >> 0x20;
    if ((int)uVar15 < 1 || (int)(uVar15 >> 0x20) < 1) {
      FUN_14179f158(param_1,&local_70,1,uVar4);
      if (local_70 != (code *)0x0) {
        FUN_1400020a8();
      }
      uVar17 = 1;
      uVar15 = 60000;
    }
    if ((int)(uVar22 >> 0x20) < 1 || (int)uVar22 < 1) {
      FUN_14179f158(param_1,&local_70,1,uVar4);
      if (local_70 != (code *)0x0) {
        FUN_1400020a8();
      }
      uVar18 = 1;
      uVar22 = 0x1e;
    }
    uVar21 = uVar15 & 0xffffffff | uVar17 << 0x20;
    uVar23 = uVar22 & 0xffffffff | uVar18 << 0x20;
    local_b8 = uVar18;
    FUN_1432dae44(param_1 + 0x61,uVar23,uVar21,uVar4);
    *(undefined1 *)((longlong)param_1 + 0x35c) = *(undefined1 *)(lVar7 + 0x170);
    uVar20 = (*(longlong *)(lVar7 + 0x108) >> 0x20) +
             (longlong)
             *(int *)(&DAT_14a46e5f8 + (ulonglong)((char)*(longlong *)(lVar7 + 0x108) == '\0') * 4);
    lVar19 = (*(longlong *)(lVar7 + 0x110) >> 0x20) +
             (longlong)
             *(int *)(&DAT_14a46e600 + (ulonglong)((char)*(longlong *)(lVar7 + 0x110) == '\x01') * 4
                     );
    if (uVar21 != uVar23) {
      local_70 = (code *)(((longlong)(uVar17 << 0x20) >> 0x20) * (longlong)(int)uVar22);
      local_80 = (longlong)(int)uVar15 * ((longlong)(uVar18 << 0x20) >> 0x20);
      lVar8 = ((longlong)local_70 * lVar19) / (longlong)local_80;
      auVar30._8_8_ = 0;
      auVar30._0_8_ =
           (double)((ulonglong)(double)(longlong)local_70 & 0x8000000000000000) /
           (double)(longlong)local_80 +
           (((double)(longlong)local_70 * (double)(int)lVar19) / (double)(longlong)local_80 -
           (double)lVar8);
      auVar30 = roundpd(auVar30,auVar30,1);
      lVar19 = (longlong)auVar30._0_8_ + lVar8;
      if (0x7ffffffe < lVar19) {
        lVar19 = 0x7fffffff;
      }
      if (lVar19 < -0x7fffffff) {
        lVar19 = -0x80000000;
      }
      lVar8 = (longlong)((longlong)local_70 * uVar20) / (longlong)local_80;
      in_XMM2._0_8_ =
           (double)((ulonglong)(double)(longlong)local_70 & 0x8000000000000000) /
           (double)(longlong)local_80 +
           (((double)(longlong)local_70 * (double)(int)uVar20) / (double)(longlong)local_80 -
           (double)lVar8);
      in_XMM2._8_8_ = 0;
      auVar25._8_8_ = 0;
      auVar25._0_8_ = in_XMM2._0_8_;
      auVar30 = roundpd(auVar25,auVar25,1);
      uVar20 = (longlong)auVar30._0_8_ + lVar8;
      if (0x7ffffffe < (longlong)uVar20) {
        uVar20 = 0x7fffffff;
      }
      if ((longlong)uVar20 < -0x7fffffff) {
        uVar20 = 0xffffffff80000000;
      }
    }
    FUN_140ef61d2(param_1,uVar20 & 0xffffffff,(int)lVar19 - (int)uVar20);
    if ((*(byte *)(param_1 + 0x5a) & 1) == 0) {
      dVar28 = ((double)*(float *)((longlong)param_1 + 0x2cc) * (double)(int)uVar22) /
               (double)(int)local_b8;
      auVar26._8_8_ = 0;
      auVar26._0_8_ = dVar28;
      auVar30 = roundpd(in_XMM2,auVar26,1);
      dVar29 = auVar30._0_8_;
      dVar28 = dVar28 - dVar29;
      iVar6 = (int)dVar28;
      fVar27 = (float)dVar28 - (float)iVar6;
      fVar31 = fVar27;
      if (0.99999994 <= fVar27) {
        fVar31 = 0.99999994;
      }
      fVar31 = (float)(~-(uint)(0.0 < fVar27) & (uint)fVar27 | (uint)fVar31 & -(uint)(0.0 < fVar27))
               + 0.5 + -0.5;
      if (0.99999994 <= fVar31) {
        fVar31 = 0.99999994;
      }
      if (fVar31 <= 0.0) {
        fVar31 = 0.0;
      }
      if (2147483647.0 <= dVar29) {
        dVar29 = 2147483647.0;
      }
      if (dVar29 <= -2147483648.0) {
        dVar29 = -2147483648.0;
      }
      iVar6 = (int)dVar29 + iVar6;
      iVar13 = *(int *)((longlong)param_1 + 0x2a4) + -1;
      fVar27 = 0.0;
      if (iVar6 < iVar13) {
        iVar13 = iVar6;
        fVar27 = fVar31;
      }
      if (iVar13 < 1) {
        iVar6 = iVar13;
        if (fVar27 <= 0.0) {
          iVar6 = 0;
          fVar27 = 0.0;
        }
        bVar24 = iVar13 != 0;
        iVar13 = iVar6;
        if (bVar24) {
          iVar13 = 0;
          fVar27 = 0.0;
        }
      }
    }
    else {
      iVar13 = rand();
      iVar13 = iVar13 % *(int *)((longlong)param_1 + 0x2a4);
      fVar27 = 0.0;
    }
    fVar27 = fVar27 + 0.0;
    auVar30 = roundss(ZEXT416(0),ZEXT416((uint)fVar27),9);
    fVar31 = (fVar27 - auVar30._0_4_) + 0.5 + -0.5;
    if (0.99999994 <= fVar31) {
      fVar31 = 0.99999994;
    }
    iVar13 = ((int)ROUND(fVar27 + fVar27 + -0.5) >> 1) + iVar13 + (int)param_1[0x54];
    if (fVar31 <= 0.0) {
      fVar31 = 0.0;
    }
    cVar5 = *(char *)(lVar7 + 0x129);
    if (cVar5 == '\x06') {
      uVar11 = (**(code **)(param_1[5] + 0x78))(param_1 + 5);
      FUN_14756e90a(lVar7,&local_70,uVar11);
      plVar10 = local_68;
      param_1[0x7a] = (longlong)local_70;
      local_70 = (code *)0x0;
      plVar9 = (longlong *)param_1[0x7b];
      if (local_68 == plVar9) {
LAB_140a24e2f:
        plVar9 = local_68;
        if (local_68 != (longlong *)0x0) {
          LOCK();
          plVar10 = local_68 + 1;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if ((int)*plVar10 == 0) {
            (**(code **)*local_68)(local_68);
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
        local_68 = (longlong *)0x0;
        param_1[0x7b] = (longlong)plVar10;
        if (plVar9 != (longlong *)0x0) {
          LOCK();
          plVar10 = plVar9 + 1;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if ((int)*plVar10 == 0) {
            (**(code **)*plVar9)(plVar9);
            LOCK();
            piVar1 = (int *)((longlong)plVar9 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar9 + 0x10))(plVar9);
            }
          }
          goto LAB_140a24e2f;
        }
      }
      cVar5 = '\x06';
    }
  }
  if (param_1[0x7a] != 0) goto LAB_140a245b2;
  switch(cVar5) {
  case '\x01':
    plVar10 = (longlong *)FUN_14001cc68(0x60,0x10);
    plVar10[1] = (longlong)&DAT_100000001;
    *plVar10 = (longlong)&PTR_LAB_14a491ee0;
    plVar9 = plVar10 + 2;
    plVar10[5] = 0;
    plVar10[6] = 0;
    plVar10[3] = 0;
    plVar10[4] = 0;
    plVar10[7] = 0;
    plVar10[8] = 0;
    plVar10[9] = 0;
    plVar10[10] = 0;
    plVar10[0xb] = 0;
    *(undefined8 *)((longlong)plVar10 + 0x2c) = 0x10000ea60;
    *(undefined1 *)(plVar10 + 0xb) = 0;
    ppuVar12 = &PTR_FUN_14a491f00;
    break;
  case '\x02':
    plVar10 = (longlong *)FUN_14001cc68(0x60,0x10);
    plVar10[1] = (longlong)&DAT_100000001;
    *plVar10 = (longlong)&PTR_LAB_14a491e90;
    plVar9 = plVar10 + 2;
    plVar10[5] = 0;
    plVar10[6] = 0;
    plVar10[3] = 0;
    plVar10[4] = 0;
    plVar10[7] = 0;
    plVar10[8] = 0;
    plVar10[9] = 0;
    plVar10[10] = 0;
    plVar10[0xb] = 0;
    *(undefined8 *)((longlong)plVar10 + 0x2c) = 0x10000ea60;
    *(undefined1 *)(plVar10 + 0xb) = 0;
    ppuVar12 = &PTR_FUN_14a491eb0;
    break;
  case '\x03':
    plVar10 = (longlong *)FUN_14001cc68(0x88,0x10);
    plVar10[1] = (longlong)&DAT_100000001;
    *plVar10 = (longlong)&PTR_LAB_14a491f30;
    plVar9 = plVar10 + 2;
    plVar10[5] = 0;
    plVar10[6] = 0;
    plVar10[0xb] = 0;
    plVar10[0xc] = 0;
    plVar10[3] = 0;
    plVar10[4] = 0;
    plVar10[7] = 0;
    plVar10[8] = 0;
    plVar10[9] = 0;
    plVar10[10] = 0;
    plVar10[0xd] = 0;
    plVar10[0xe] = 0;
    plVar10[0xf] = 0;
    plVar10[0x10] = 0;
    *(undefined8 *)((longlong)plVar10 + 0x2c) = 0x10000ea60;
    *(undefined1 *)(plVar10 + 0xb) = 0;
    ppuVar12 = &PTR_FUN_14a491f50;
    break;
  case '\x04':
    plVar10 = (longlong *)FUN_14001cc68(0x38,0x10);
    plVar10[1] = (longlong)&DAT_100000001;
    *plVar10 = (longlong)&PTR_LAB_14a491f80;
    plVar9 = plVar10 + 2;
    plVar10[5] = 0;
    plVar10[6] = 0;
    plVar10[3] = 0;
    plVar10[4] = 0;
    *(undefined8 *)((longlong)plVar10 + 0x2c) = 0x10000ea60;
    ppuVar12 = &PTR_FUN_14a491fa0;
    break;
  case '\x05':
    plVar10 = (longlong *)FUN_14001cc68(0x48,0x10);
    plVar10[1] = (longlong)&DAT_100000001;
    *plVar10 = (longlong)&PTR_FUN_14a491fd0;
    plVar9 = plVar10 + 2;
    *(undefined1 *)(plVar10 + 5) = 0;
    *(undefined8 *)((longlong)plVar10 + 0x2c) = 0x10000ea60;
    plVar10[2] = (longlong)&PTR_FUN_14a491ff0;
    plVar10[7] = 0;
    plVar10[8] = 0;
    goto LAB_140a244f5;
  default:
    plVar10 = (longlong *)FUN_14001cc68(0x40,0x10);
    plVar10[1] = (longlong)&DAT_100000001;
    *plVar10 = (longlong)&PTR_FUN_14a491e40;
    plVar9 = plVar10 + 2;
    *(undefined1 *)(plVar10 + 5) = 0;
    *(undefined8 *)((longlong)plVar10 + 0x2c) = 0x10000ea60;
    plVar10[2] = (longlong)&PTR_FUN_14a491e60;
    plVar10[7] = 0;
    goto LAB_140a244f5;
  }
  plVar10[2] = (longlong)ppuVar12;
LAB_140a244f5:
  if (plVar10 == (longlong *)0x0) {
    param_1[0x7a] = (longlong)plVar9;
    plVar16 = (longlong *)param_1[0x7b];
    if (plVar16 != (longlong *)0x0) {
      param_1[0x7b] = 0;
LAB_140a24543:
      LOCK();
      plVar9 = plVar16 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
        (**(code **)*plVar16)(plVar16);
        LOCK();
        piVar1 = (int *)((longlong)plVar16 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar16 + 0x10))(plVar16);
        }
      }
      if (plVar10 != (longlong *)0x0) goto LAB_140a24584;
      goto LAB_140a245a1;
    }
  }
  else {
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
    param_1[0x7a] = (longlong)plVar9;
    plVar16 = (longlong *)param_1[0x7b];
    if (plVar10 == plVar16) {
      LOCK();
      plVar9 = plVar10 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
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
    else {
      param_1[0x7b] = (longlong)plVar10;
      if (plVar16 != (longlong *)0x0) goto LAB_140a24543;
    }
LAB_140a24584:
    LOCK();
    plVar9 = plVar10 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
    }
LAB_140a245a1:
    plVar9 = (longlong *)param_1[0x7a];
  }
  if (plVar9 == (longlong *)0x0) {
    plVar9 = (longlong *)FUN_14001cc68(0x40,0x10);
    plVar9[1] = (longlong)&DAT_100000001;
    *plVar9 = (longlong)&PTR_FUN_14a491e40;
    *(undefined1 *)(plVar9 + 5) = 0;
    *(undefined8 *)((longlong)plVar9 + 0x2c) = 0x10000ea60;
    plVar9[2] = (longlong)&PTR_FUN_14a491e60;
    plVar9[7] = 0;
    if (plVar9 == (longlong *)0x0) {
      param_1[0x7a] = 0x10;
      plVar10 = (longlong *)param_1[0x7b];
      if (plVar10 != (longlong *)0x0) {
        param_1[0x7b] = 0;
LAB_140a24d6b:
        LOCK();
        plVar16 = plVar10 + 1;
        *(int *)plVar16 = (int)*plVar16 + -1;
        UNLOCK();
        if ((int)*plVar16 == 0) {
          (**(code **)*plVar10)(plVar10);
          LOCK();
          piVar1 = (int *)((longlong)plVar10 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar10 + 0x10))(plVar10);
          }
        }
        if (plVar9 != (longlong *)0x0) goto LAB_140a24e75;
      }
    }
    else {
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
      param_1[0x7a] = (longlong)(plVar9 + 2);
      plVar10 = (longlong *)param_1[0x7b];
      if (plVar9 == plVar10) {
        LOCK();
        plVar10 = plVar9 + 1;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)*plVar10 == 0) {
          (**(code **)*plVar9)(plVar9);
          LOCK();
          piVar1 = (int *)((longlong)plVar9 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar9 + 0x10))(plVar9);
          }
        }
      }
      else {
        param_1[0x7b] = (longlong)plVar9;
        if (plVar10 != (longlong *)0x0) goto LAB_140a24d6b;
      }
LAB_140a24e75:
      LOCK();
      plVar10 = plVar9 + 1;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)*plVar10 == 0) {
        (**(code **)*plVar9)(plVar9);
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
LAB_140a245b2:
  if ((param_1[0x76] == 0) && (lVar7 = (**(code **)(param_1[5] + 0x78))(param_1 + 5), lVar7 != 0)) {
    lVar7 = FUN_140d63f64(lVar7);
    if ((lVar7 != 0) && (DAT_14c950c29 != 0)) {
      FUN_1456cec3c(lVar7);
    }
    param_1[0x76] = lVar7;
  }
  plVar9 = param_1;
  if ((*(byte *)(param_1 + 0x5b) & 2) == 0) {
    local_78 = *(undefined4 *)((longlong)param_1 + 0x2c4);
    local_80 = *(ulonglong *)((longlong)param_1 + 700);
  }
  else {
    for (; plVar9 != (longlong *)0x0; plVar9 = (longlong *)plVar9[4]) {
      if (DAT_14cae8b20 == 0) {
        local_70 = (code *)&LAB_14355090c;
        local_c0 = FUN_14081d0ea;
        local_c8 = FUN_14081d0ea;
        local_d0 = &local_70;
        local_d8 = &LAB_147b8e16d;
        local_e0 = &LAB_140810a38;
        local_e8 = L"Engine";
        local_f0 = 0x800000000;
        local_f8 = 0x10000000;
        local_100 = 8;
        local_108 = 0x3f0;
        FUN_14081cfa3(L"/Script/Engine",L"Level",&DAT_14cae8b20,&DAT_147b8e16c);
      }
      lVar7 = plVar9[2];
      iVar6 = *(int *)(lVar7 + 0x38);
      if ((*(int *)(DAT_14cae8b20 + 0x38) <= iVar6) &&
         (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(DAT_14cae8b20 + 0x38) * 8)
          == DAT_14cae8b20 + 0x30)) break;
      if (DAT_14cac7648 == 0) {
        local_70 = FUN_144a7958c;
        local_c0 = FUN_14081d0ea;
        local_c8 = FUN_143242436;
        local_d0 = &local_70;
        local_d8 = &LAB_14789ef1f;
        local_e0 = &LAB_1417b008f;
        local_e8 = L"Engine";
        local_f0 = 0x8000000000;
        local_f8 = 0x10000004;
        local_100 = 0x10;
        local_108 = 0x2b0;
        FUN_14081cfa3(L"/Script/Engine",L"SceneComponent",&DAT_14cac7648,FUN_146393848);
        lVar7 = plVar9[2];
        iVar6 = *(int *)(lVar7 + 0x38);
      }
      if ((*(int *)(DAT_14cac7648 + 0x38) <= iVar6) &&
         (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(DAT_14cac7648 + 0x38) * 8)
          == DAT_14cac7648 + 0x30)) {
        uVar3 = *(uint *)((longlong)plVar9 + 0x4c);
        uVar4 = *(undefined1 *)((longlong)plVar9 + 0x4a);
LAB_140a2490a:
        local_80 = (ulonglong)uVar3;
        local_78 = CONCAT31(local_78._1_3_,uVar4) & 0xffffff01;
        goto LAB_140a2492c;
      }
      if (DAT_14cac9ca8 == 0) {
        local_70 = FUN_141030f22;
        local_c0 = FUN_14081d0ea;
        local_c8 = FUN_14081d0ea;
        local_d0 = &local_70;
        local_d8 = &LAB_1478c0a72;
        local_e0 = &LAB_1417b2375;
        local_e8 = L"Engine";
        local_f0 = 0x1000000000;
        local_f8 = 0x10000004;
        local_100 = 8;
        local_108 = 0x390;
        FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
        lVar7 = plVar9[2];
        iVar6 = *(int *)(lVar7 + 0x38);
      }
      if ((*(int *)(DAT_14cac9ca8 + 0x38) <= iVar6) &&
         (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8)
          == DAT_14cac9ca8 + 0x30)) {
        uVar3 = *(uint *)((longlong)plVar9 + 0x3c);
        uVar4 = *(undefined1 *)((longlong)plVar9 + 0x3a);
        goto LAB_140a2490a;
      }
    }
    local_78 = 0;
    local_80 = 0;
LAB_140a2492c:
    local_78._0_2_ = CONCAT11(1,(char)local_78);
  }
  pfVar2 = (float *)(param_1 + 0x82);
  lVar7 = param_1[0x76];
  if (*(char *)((longlong)param_1 + 0x41c) == '\x01') {
    cVar5 = FUN_140d64518(lVar7,param_1);
    if (cVar5 == '\0') {
      lVar7 = param_1[0x76];
      goto LAB_140a249ff;
    }
    if ((*pfVar2 != (float)local_80) || (NAN(*pfVar2) || NAN((float)local_80))) {
LAB_140a249b2:
      FUN_14087332c(param_1 + 0x5c);
      lVar7 = param_1[0x76];
      if ((param_1 == (longlong *)0x0) || (DAT_14c950c29 == 0)) {
        if (param_1 != (longlong *)0x0) goto LAB_140a249ea;
        plVar9 = (longlong *)0x0;
      }
      else {
        FUN_1456cec3c(param_1);
LAB_140a249ea:
        plVar9 = param_1 + 0x42;
      }
      local_a0 = param_1;
      local_98 = plVar9;
      FUN_140873c04(lVar7);
      lVar7 = param_1[0x76];
      pfVar14 = pfVar2;
      local_b0 = param_1;
      local_a8 = plVar9;
      if ((param_1 != (longlong *)0x0) && (DAT_14c950c29 != 0)) {
        FUN_1456cec3c(param_1);
      }
      goto LAB_140a24b17;
    }
    if ((*(float *)((longlong)param_1 + 0x414) != local_80._4_4_) ||
       (((NAN(*(float *)((longlong)param_1 + 0x414)) || NAN(local_80._4_4_) ||
         ((char)param_1[0x83] != (char)local_78)) ||
        (*(char *)((longlong)param_1 + 0x419) != local_78._1_1_)))) goto LAB_140a249b2;
  }
  else {
LAB_140a249ff:
    if ((param_1 == (longlong *)0x0) || (DAT_14c950c29 == 0)) {
      if (param_1 != (longlong *)0x0) goto LAB_140a24a1e;
      local_88 = (longlong *)0x0;
    }
    else {
      FUN_1456cec3c(param_1);
LAB_140a24a1e:
      local_88 = param_1 + 0x42;
    }
    pfVar14 = (float *)&local_80;
    local_90 = param_1;
LAB_140a24b17:
    FUN_140c2b0aa(lVar7,pfVar14);
  }
  *(uint *)(param_1 + 0x83) = local_78;
  *(ulonglong *)pfVar2 = local_80;
  *(undefined1 *)((longlong)param_1 + 0x41c) = 1;
  FUN_140b556ce(param_1 + 0x5c,param_1[0x53],param_1 + 5,0);
  if (((*(byte *)(param_1 + 0x5b) & 4) == 0) && (lVar7 = param_1[0x5d], lVar7 != 0)) {
    lVar19 = *(longlong *)(lVar7 + 0x28);
    if ((lVar19 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar19);
      lVar7 = param_1[0x5d];
      if (lVar7 == 0) goto LAB_140a24bc3;
    }
    if ((lVar19 != 0) && (*(int *)(lVar7 + 0x34) != -1)) {
      *(uint *)(param_1 + 0x5b) =
           *(uint *)(param_1 + 0x5b) & 0xfffffffb |
           *(byte *)(*(longlong *)(lVar19 + 0xa0) + 0x2c + (longlong)*(int *)(lVar7 + 0x34) * 0x30)
           & 4;
    }
  }
LAB_140a24bc3:
  if ((char)param_1[0x79] == '\0') {
    iVar6 = *(int *)((longlong)param_1 + 0x3c4);
    FUN_140a07690(param_1[0x77],(int)param_1[0x78]);
    *(undefined4 *)(param_1 + 0x78) = 0;
    if ((iVar6 < 0) && (*(int *)((longlong)param_1 + 0x3c4) != 0)) {
      FUN_147581eec(param_1 + 0x77,0);
    }
  }
  *(int *)((longlong)param_1 + 0x31c) = iVar13;
  *(float *)(param_1 + 100) = fVar31;
  if (*(char *)((longlong)param_1 + 0x32c) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x32c) = 0;
  }
  if ((char)param_1[0x6b] == '\x01') {
    *(undefined1 *)(param_1 + 0x6b) = 0;
  }
  local_68 = (longlong *)param_1[0x61];
  local_70 = (code *)CONCAT44(fVar31,iVar13);
  FUN_1405246a4(param_1[0x7a]);
  cVar5 = FUN_1402d76c0(param_1);
  if (cVar5 != '\0') {
    *(char *)((longlong)param_1 + 0x394) = (char)param_1[0x52];
    param_1[0x73] = *(longlong *)((longlong)param_1 + 0x2ac);
  }
  *(undefined8 *)((longlong)param_1 + 0x38c) = *(undefined8 *)((longlong)param_1 + 0x31c);
  (**(code **)(*param_1 + 0x2f8))(param_1);
  if ((local_60 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a24f30 FUN_140a24f30 body=2240 status=ok
// SIG undefined FUN_140a24f30(void)

void FUN_140a24f30(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  char cVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  byte bVar12;
  longlong lVar13;
  uint uVar14;
  longlong lVar15;
  undefined1 uVar16;
  longlong lVar17;
  undefined1 uVar18;
  undefined8 *puVar19;
  longlong *plVar20;
  undefined8 uVar21;
  byte bVar22;
  longlong lVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 auStack_148 [32];
  undefined4 local_128;
  undefined4 local_120;
  undefined4 local_118;
  undefined8 local_110;
  undefined2 *local_108;
  undefined1 *local_100;
  undefined1 *local_f8;
  code **local_f0;
  undefined1 *local_e8;
  code *local_e0;
  longlong local_d8;
  longlong local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  code *local_a8;
  longlong local_a0;
  byte local_92;
  char local_91;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_148;
  FUN_140a259ce();
  lVar13 = DAT_14c9647c8;
  iVar5 = *(int *)(param_1 + 0x2c);
  if (((iVar5 == 0) || (uVar14 = *(uint *)(param_1 + 0x28), (int)uVar14 < 0)) ||
     (DAT_14c9647dc <= (int)uVar14)) goto LAB_140a25494;
  plVar20 = (longlong *)
            ((ulonglong)((uVar14 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar14 >> 0x10) * 8));
  if (((plVar20 == (longlong *)0x0) || ((int)plVar20[2] != iVar5)) ||
     ((*(uint *)(plVar20 + 1) & 0x10200000) != 0)) goto LAB_140a25494;
  if ((*(uint *)(plVar20 + 1) & 0x10200000) == 0) {
    lVar17 = *plVar20;
  }
  else {
    lVar17 = 0;
  }
  *(float *)(param_1 + 0x3b8) = (float)*(double *)(lVar17 + 0x6e8);
  plVar20 = (longlong *)
            ((ulonglong)((uVar14 & 0xffff) * 0x18) +
            *(longlong *)(lVar13 + (ulonglong)(uVar14 >> 0x10) * 8));
  if (((plVar20 == (longlong *)0x0) || ((int)plVar20[2] != iVar5)) ||
     ((*(uint *)(plVar20 + 1) & 0x10200000) != 0)) {
    lVar13 = 0;
  }
  else {
    lVar13 = *plVar20;
  }
  if (*(int *)(lVar13 + 0x238) < 1) {
    fVar24 = 0.0;
    lVar17 = 0;
    uVar16 = 0;
    bVar22 = 0;
    fVar25 = 0.0;
  }
  else {
    fVar25 = 0.0;
    lVar15 = 0;
    bVar22 = 0;
    uVar16 = 0;
    lVar17 = 0;
    fVar24 = 0.0;
    do {
      iVar5 = *(int *)(*(longlong *)(lVar13 + 0x230) + 4 + lVar15 * 8);
      if (((((iVar5 != 0) &&
            (uVar14 = *(uint *)(*(longlong *)(lVar13 + 0x230) + lVar15 * 8), -1 < (int)uVar14)) &&
           ((int)uVar14 < DAT_14c9647dc)) &&
          ((plVar20 = (longlong *)
                      ((ulonglong)((uVar14 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar14 >> 0x10) * 8)),
           plVar20 != (longlong *)0x0 && ((int)plVar20[2] == iVar5)))) &&
         (((*(uint *)(plVar20 + 1) & 0x10200000) == 0 &&
          (plVar20 = (longlong *)*plVar20, plVar20 != (longlong *)0x0)))) {
        if (DAT_14cbadd90 == 0) {
          local_a8 = FUN_141030f22;
          local_e0 = FUN_14081d0ea;
          local_e8 = &LAB_1459f2e4c;
          local_f0 = &local_a8;
          local_f8 = &LAB_148c39de3;
          local_100 = &LAB_1457a9eb2;
          local_108 = &DAT_149e063b2;
          local_110 = 0;
          local_118 = 0x10000004;
          local_120 = 0x10;
          local_128 = 0x3de0;
          FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
        }
        if (((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(plVar20[2] + 0x38)) &&
            (*(longlong *)
              (*(longlong *)(plVar20[2] + 0x30) + (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) ==
             DAT_14cbadd90 + 0x30)) &&
           (((*(byte *)(plVar20 + 0x84) & 2) != 0 &&
            ((cVar8 = (**(code **)(*plVar20 + 0x6c8))(plVar20), cVar8 != '\0' &&
             (lVar9 = FUN_1402a1246(plVar20), lVar9 != 0)))))) {
          fVar26 = *(float *)(lVar9 + 0xe00);
          if (*(float *)(lVar9 + 0xe00) <= fVar24) {
            fVar26 = fVar24;
          }
          fVar24 = *(float *)(lVar9 + 0xe04);
          if (*(float *)(lVar9 + 0xe04) <= fVar25) {
            fVar24 = fVar25;
          }
          bVar22 = bVar22 | *(byte *)(lVar9 + 0xe08);
          cVar8 = FUN_14016169c(plVar20,&local_a8);
          fVar25 = fVar24;
          fVar24 = fVar26;
          if ((cVar8 == '\0') || ((int)local_a8 == 0)) {
            lVar17 = plVar20[0x7a];
            uVar16 = *(undefined1 *)(lVar9 + 0xe09);
          }
        }
      }
      lVar15 = lVar15 + 1;
    } while ((int)lVar15 < *(int *)(lVar13 + 0x238));
  }
  *(float *)(param_1 + 0x388) = fVar24;
  *(float *)(param_1 + 0x38c) = fVar25;
  *(byte *)(param_1 + 0x390) = bVar22 & 1;
  bVar4 = *(byte *)(param_1 + 0x391);
  if (*(float *)(param_1 + 0x330 + (ulonglong)(bVar4 == 2) * 4) <= fVar24) {
    *(undefined1 *)(param_1 + 0x391) = 2;
    *(undefined1 *)(param_1 + 0x393) = 1;
    bVar12 = 2;
    bVar7 = true;
    if ((bVar22 & 1) != 0) goto LAB_140a2578f;
    if (bVar4 == 2) {
      if ((*(byte *)(param_1 + 0x394) & 1) == 0) goto LAB_140a2564a;
    }
    else {
      *(undefined1 *)(param_1 + 0x394) = 0;
LAB_140a2564a:
      if (fVar25 < *(float *)(param_1 + 0x340)) goto LAB_140a2520f;
    }
    *(undefined1 *)(param_1 + 0x394) = 1;
    bVar7 = true;
    uVar18 = 1;
  }
  else if ((bVar22 & 1) == 0) {
    if (*(float *)(param_1 + 0x338 + (ulonglong)((bVar4 & 0xfd) == 1) * 4) <= fVar24) {
      uVar18 = *(undefined1 *)(param_1 + 0x394);
      bVar12 = *(char *)(param_1 + 0x393) * '\x02' + 1;
      *(byte *)(param_1 + 0x391) = bVar12;
      bVar7 = false;
    }
    else {
      *(undefined1 *)(param_1 + 0x391) = 0;
      *(undefined2 *)(param_1 + 0x393) = 0;
      bVar7 = false;
      bVar12 = 0;
LAB_140a2520f:
      uVar18 = 0;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x391) = 2;
    *(undefined1 *)(param_1 + 0x393) = 1;
LAB_140a2578f:
    bVar12 = 2;
    bVar7 = true;
    uVar18 = 2;
  }
  *(undefined1 *)(param_1 + 0x392) = uVar18;
  cVar8 = *(char *)(param_1 + 0x3c8);
  if ((cVar8 != '\x04') && (*(char *)(param_1 + 0x391) = cVar8, cVar8 == '\0')) {
    *(undefined1 *)(param_1 + 0x392) = 0;
  }
  if (((bVar7) || ((bVar12 | 2) == 3)) && (2 < (byte)(bVar4 - 1))) {
    FUN_1457634aa(param_1,uVar16);
  }
  if (lVar17 != 0) {
    lVar13 = *(longlong *)(lVar17 + 0x1c8);
    if (lVar13 == 0) {
      local_b8 = DAT_14c8464f0;
      local_c8 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
      uStack_c0 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
    }
    else {
      local_c8 = *(undefined8 *)(lVar13 + 0x260);
      uStack_c0 = *(undefined8 *)(lVar13 + 0x268);
      local_b8 = *(undefined8 *)(lVar13 + 0x270);
    }
    if ((((*(int *)(param_1 + 0x2c) != 0) && (uVar14 = *(uint *)(param_1 + 0x28), -1 < (int)uVar14))
        && (((int)uVar14 < DAT_14c9647dc &&
            ((lVar13 = (ulonglong)((uVar14 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar14 >> 0x10) * 8), lVar13 != 0
             && (*(int *)(lVar13 + 0x10) == *(int *)(param_1 + 0x2c))))))) &&
       ((*(uint *)(lVar13 + 8) & 0x10200000) == 0)) {
      plVar20 = (longlong *)(param_1 + 0x110);
      iVar5 = *(int *)(param_1 + 0x350);
      iVar6 = *(int *)(param_1 + 0x118);
      if (iVar6 < iVar5) {
        *(int *)(param_1 + 0x118) = iVar5;
        if ((uint)(*(int *)(param_1 + 0x11c) - iVar6) < (uint)(iVar5 - iVar6)) {
          FUN_14576371e(plVar20,iVar6);
        }
        FUN_1457636e4((longlong)iVar6 * 0x70 + *plVar20,iVar5 - iVar6);
      }
      else {
        if (iVar5 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(iVar5);
        }
        if (iVar5 < iVar6) {
          FUN_148ced7ba(plVar20,iVar5,iVar6 - iVar5);
          FUN_148ced814(plVar20);
        }
      }
      if (0 < *(int *)(param_1 + 0x350)) {
        lVar13 = 0x38;
        lVar15 = 0;
        lVar17 = 0;
        local_d8 = param_1;
        do {
          lVar9 = *(longlong *)(param_1 + 0x110);
          lVar23 = *(longlong *)(param_1 + 0x348) + lVar15;
          lVar10 = FUN_140a257f2(lVar23);
          if ((lVar10 != 0) && (lVar10 = FUN_140a257f2(lVar23), *(char *)(lVar10 + 0x80) == '\x01'))
          {
            uVar11 = FUN_140a257f2(lVar23);
            if ((*(int *)(param_1 + 0x2c) == 0) ||
               (uVar14 = *(uint *)(param_1 + 0x28), (int)uVar14 < 0)) {
LAB_140a25544:
              uVar21 = 0;
            }
            else {
              uVar21 = 0;
              if ((int)uVar14 < DAT_14c9647dc) {
                puVar19 = (undefined8 *)
                          ((ulonglong)((uVar14 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar14 >> 0x10) * 8));
                if (((puVar19 == (undefined8 *)0x0) ||
                    (*(int *)(puVar19 + 2) != *(int *)(param_1 + 0x2c))) ||
                   ((*(uint *)(puVar19 + 1) & 0x10200000) != 0)) goto LAB_140a25544;
                uVar21 = *puVar19;
              }
            }
            uVar11 = FUN_1402a1570(uVar21,uVar11);
            FUN_1402a10ba(&local_92,uVar21,uVar11,&local_c8);
            uVar14 = (uint)local_92;
            if (local_91 == '\0') {
              uVar14 = 0;
            }
            lVar10 = FUN_140a257f2(lVar23);
            param_1 = local_d8;
            if ((int)uVar14 < *(int *)(lVar10 + 0x68)) {
              lVar10 = FUN_140a257f2(lVar23);
              lVar10 = *(longlong *)
                        (*(longlong *)(lVar10 + 0x60) +
                        (ulonglong)(uVar14 << 7) + (ulonglong)uVar14 * 8);
              param_1 = local_d8;
              if (*(longlong *)(lVar9 + lVar13 + -0x38) != lVar10) {
                lVar3 = lVar9 + lVar13;
                *(longlong *)(lVar3 + -0x38) = lVar10;
                FUN_140a26446(lVar3 + -0x30);
                lVar10 = FUN_140a257f2(lVar23);
                lVar23 = *(longlong *)(lVar10 + 0x60);
                lVar10 = (ulonglong)(uVar14 << 7) + (ulonglong)uVar14 * 8;
                *(undefined8 *)(lVar3 + -0x18) = *(undefined8 *)(lVar23 + lVar10 + 0x30);
                local_d0 = lVar3 + -0x30;
                FUN_1410267a0(lVar9 + lVar13 + -0x10);
                FUN_1410267fe(lVar9 + lVar13,lVar23 + lVar10 + 0x48);
                lVar23 = lVar23 + lVar10;
                FUN_14102685c(lVar9 + lVar13 + 0x10,lVar23 + 0x58);
                *(undefined1 *)(lVar9 + lVar13 + 0x20) = *(undefined1 *)(lVar23 + 0x68);
                uVar11 = *(undefined8 *)(lVar23 + 0x70);
                lVar10 = *(longlong *)(lVar23 + 0x78);
                if (lVar10 != 0) {
                  LOCK();
                  *(int *)(lVar10 + 8) = *(int *)(lVar10 + 8) + 1;
                  UNLOCK();
                }
                plVar20 = *(longlong **)(lVar9 + 0x30 + lVar13);
                *(undefined8 *)(lVar9 + 0x28 + lVar13) = uVar11;
                *(longlong *)(lVar9 + 0x30 + lVar13) = lVar10;
                if (plVar20 != (longlong *)0x0) {
                  LOCK();
                  plVar1 = plVar20 + 1;
                  *(int *)plVar1 = (int)*plVar1 + -1;
                  UNLOCK();
                  if ((int)*plVar1 == 0) {
                    (**(code **)*plVar20)(plVar20);
                    LOCK();
                    piVar2 = (int *)((longlong)plVar20 + 0xc);
                    *piVar2 = *piVar2 + -1;
                    UNLOCK();
                    if (*piVar2 == 0) {
                      (**(code **)(*plVar20 + 0x10))(plVar20);
                    }
                  }
                }
                local_a8 = *(code **)(local_d8 + 0x40);
                local_a0 = *(longlong *)(local_d8 + 0x48);
                if (local_a0 != 0) {
                  LOCK();
                  *(int *)(local_a0 + 8) = *(int *)(local_a0 + 8) + 1;
                  UNLOCK();
                }
                FUN_140a26a1e(local_d0,&local_a8);
                param_1 = local_d8;
              }
            }
          }
          lVar17 = lVar17 + 1;
          lVar15 = lVar15 + 0x28;
          lVar13 = lVar13 + 0x70;
        } while (lVar17 < *(int *)(param_1 + 0x350));
      }
    }
  }
  if ((longlong)*(int *)(param_1 + 0x118) != 0) {
    lVar13 = (longlong)*(int *)(param_1 + 0x118) * 0x70;
    lVar17 = *(longlong *)(param_1 + 0x110) + 8;
    do {
      FUN_140a259f8(lVar17);
      lVar17 = lVar17 + 0x70;
      lVar13 = lVar13 + -0x70;
    } while (lVar13 != 0);
  }
  FUN_140a259f8(param_1 + 0x128);
  FUN_140a25c5c(param_1);
LAB_140a25494:
  if ((local_90 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140a257f2 FUN_140a257f2 body=246 status=ok
// SIG undefined FUN_140a257f2(void)

longlong FUN_140a257f2(uint *param_1)

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
  lVar3 = FUN_140a258e8();
  if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
      lVar3 + 0x30)) {
    return lVar4;
  }
  return 0;
}



// FUNCTION 140a258e8 FUN_140a258e8 body=228 status=ok
// SIG undefined FUN_140a258e8(void)

longlong FUN_140a258e8(void)

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
  if (DAT_14cbbf2c0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14585df80;
    local_38 = &LAB_148ca7b43;
    local_40 = FUN_1466114e5;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x88;
    FUN_14081cfa3(L"/Script/OakGame",L"OakWorldPainterLayer_MusicZone",&DAT_14cbbf2c0,&DAT_148ca7b42
                 );
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbbf2c0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a259ce FUN_140a259ce body=41 status=ok
// SIG undefined FUN_140a259ce(void)

void FUN_140a259ce(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  char cVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  bool bVar11;
  
  lVar3 = *(longlong *)(param_1 + 0x50);
  if (((lVar3 != 0) &&
      (((*(char *)(lVar3 + 0x30) != '\0' || (*(char *)(lVar3 + 0x31) != '\0')) ||
       (*(int *)(lVar3 + 0x6c) != 2)))) || (lVar3 = *(longlong *)(param_1 + 0x60), lVar3 == 0)) {
    return;
  }
  if (*(longlong *)(lVar3 + 0x58) != 0) {
    iVar2 = *(int *)(lVar3 + 0x28);
    if ((longlong)iVar2 != 0) {
      lVar9 = *(longlong *)(lVar3 + 0x20);
      lVar10 = 0;
      do {
        plVar4 = *(longlong **)(lVar9 + lVar10);
        if ((plVar4 != (longlong *)0x0) &&
           (cVar7 = (**(code **)(*plVar4 + 0x10))(plVar4,lVar3), cVar7 == '\0')) {
          FUN_140a25bd6(lVar3);
          return;
        }
        lVar10 = lVar10 + 0x18;
      } while ((longlong)iVar2 * 0x18 != lVar10);
    }
    if (*(char *)(lVar3 + 0x50) == '\0') {
      iVar2 = *(int *)(lVar3 + 0x38);
      if ((longlong)iVar2 != 0) {
        lVar9 = *(longlong *)(lVar3 + 0x30);
        lVar10 = 0;
        do {
          plVar4 = *(longlong **)(lVar9 + lVar10);
          if (plVar4 != (longlong *)0x0) {
            (**(code **)(*plVar4 + 0x10))(plVar4,lVar3);
          }
          lVar10 = lVar10 + 0x18;
        } while ((longlong)iVar2 * 0x18 != lVar10);
      }
      *(undefined1 *)(lVar3 + 0x50) = 1;
    }
    if (0 < *(int *)(lVar3 + 0x48)) {
      lVar9 = 0;
      bVar11 = false;
      do {
        lVar10 = *(longlong *)(*(longlong *)(lVar3 + 0x40) + lVar9 * 0x18);
        plVar4 = *(longlong **)(*(longlong *)(lVar3 + 0x40) + 8 + lVar9 * 0x18);
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
          UNLOCK();
          LOCK();
          *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
          UNLOCK();
          LOCK();
          plVar6 = plVar4 + 1;
          *(int *)plVar6 = (int)*plVar6 + -1;
          UNLOCK();
          if ((int)*plVar6 == 0) {
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
        if (lVar10 != 0) {
          if (bVar11) {
LAB_140a25ad6:
            FUN_140a25bd6(lVar10);
          }
          else {
            iVar2 = *(int *)(lVar10 + 0x28);
            if ((longlong)iVar2 != 0) {
              lVar5 = *(longlong *)(lVar10 + 0x20);
              lVar8 = 0;
              do {
                plVar6 = *(longlong **)(lVar5 + lVar8);
                if ((plVar6 != (longlong *)0x0) &&
                   (cVar7 = (**(code **)(*plVar6 + 0x10))(plVar6,lVar10), cVar7 == '\0'))
                goto LAB_140a25ad6;
                lVar8 = lVar8 + 0x18;
              } while ((longlong)iVar2 * 0x18 != lVar8);
            }
            FUN_140a259f8(lVar10);
            bVar11 = true;
          }
        }
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          plVar6 = plVar4 + 1;
          *(int *)plVar6 = (int)*plVar6 + -1;
          UNLOCK();
          if ((int)*plVar6 == 0) {
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
        lVar9 = lVar9 + 1;
      } while (lVar9 < *(int *)(lVar3 + 0x48));
    }
  }
  return;
}



// FUNCTION 140a259f8 FUN_140a259f8 body=450 status=ok
// SIG undefined FUN_140a259f8(void)

void FUN_140a259f8(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  bool bVar10;
  
  if (*(longlong *)(param_1 + 0x58) != 0) {
    iVar2 = *(int *)(param_1 + 0x28);
    if ((longlong)iVar2 != 0) {
      lVar8 = *(longlong *)(param_1 + 0x20);
      lVar9 = 0;
      do {
        plVar3 = *(longlong **)(lVar8 + lVar9);
        if ((plVar3 != (longlong *)0x0) &&
           (cVar6 = (**(code **)(*plVar3 + 0x10))(plVar3,param_1), cVar6 == '\0')) {
          FUN_140a25bd6(param_1);
          return;
        }
        lVar9 = lVar9 + 0x18;
      } while ((longlong)iVar2 * 0x18 != lVar9);
    }
    if (*(char *)(param_1 + 0x50) == '\0') {
      iVar2 = *(int *)(param_1 + 0x38);
      if ((longlong)iVar2 != 0) {
        lVar8 = *(longlong *)(param_1 + 0x30);
        lVar9 = 0;
        do {
          plVar3 = *(longlong **)(lVar8 + lVar9);
          if (plVar3 != (longlong *)0x0) {
            (**(code **)(*plVar3 + 0x10))(plVar3,param_1);
          }
          lVar9 = lVar9 + 0x18;
        } while ((longlong)iVar2 * 0x18 != lVar9);
      }
      *(undefined1 *)(param_1 + 0x50) = 1;
    }
    if (0 < *(int *)(param_1 + 0x48)) {
      lVar8 = 0;
      bVar10 = false;
      do {
        lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x40) + lVar8 * 0x18);
        plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x40) + 8 + lVar8 * 0x18);
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
          UNLOCK();
          LOCK();
          *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
          UNLOCK();
          LOCK();
          plVar5 = plVar3 + 1;
          *(int *)plVar5 = (int)*plVar5 + -1;
          UNLOCK();
          if ((int)*plVar5 == 0) {
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
        if (lVar9 != 0) {
          if (bVar10) {
LAB_140a25ad6:
            FUN_140a25bd6(lVar9);
          }
          else {
            iVar2 = *(int *)(lVar9 + 0x28);
            if ((longlong)iVar2 != 0) {
              lVar4 = *(longlong *)(lVar9 + 0x20);
              lVar7 = 0;
              do {
                plVar5 = *(longlong **)(lVar4 + lVar7);
                if ((plVar5 != (longlong *)0x0) &&
                   (cVar6 = (**(code **)(*plVar5 + 0x10))(plVar5,lVar9), cVar6 == '\0'))
                goto LAB_140a25ad6;
                lVar7 = lVar7 + 0x18;
              } while ((longlong)iVar2 * 0x18 != lVar7);
            }
            FUN_140a259f8(lVar9);
            bVar10 = true;
          }
        }
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          plVar5 = plVar3 + 1;
          *(int *)plVar5 = (int)*plVar5 + -1;
          UNLOCK();
          if ((int)*plVar5 == 0) {
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
        lVar8 = lVar8 + 1;
      } while (lVar8 < *(int *)(param_1 + 0x48));
    }
  }
  return;
}



// FUNCTION 140a25bd6 FUN_140a25bd6 body=134 status=ok
// SIG undefined FUN_140a25bd6(void)

void FUN_140a25bd6(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if (*(char *)(param_1 + 0x50) == '\x01') {
    iVar1 = *(int *)(param_1 + 0x38);
    if ((longlong)iVar1 != 0) {
      lVar2 = *(longlong *)(param_1 + 0x30);
      lVar4 = 0;
      do {
        plVar3 = *(longlong **)(lVar2 + lVar4);
        if (plVar3 != (longlong *)0x0) {
          (**(code **)(*plVar3 + 0x18))(plVar3,param_1);
        }
        lVar4 = lVar4 + 0x18;
      } while ((longlong)iVar1 * 0x18 != lVar4);
    }
    iVar1 = *(int *)(param_1 + 0x48);
    if ((longlong)iVar1 != 0) {
      lVar2 = *(longlong *)(param_1 + 0x40);
      lVar4 = 0;
      do {
        if (*(longlong *)(lVar2 + lVar4) != 0) {
          FUN_140a25bd6();
        }
        lVar4 = lVar4 + 0x18;
      } while ((longlong)iVar1 * 0x18 != lVar4);
    }
    *(undefined1 *)(param_1 + 0x50) = 0;
  }
  return;
}



// FUNCTION 140a25c5c FUN_140a25c5c body=1660 status=ok
// SIG undefined FUN_140a25c5c(void)

void FUN_140a25c5c(longlong param_1)

{
  byte *pbVar1;
  float fVar2;
  uint uVar3;
  longlong *plVar4;
  char cVar5;
  byte bVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  int iVar11;
  byte *pbVar12;
  longlong lVar13;
  float fVar14;
  undefined1 auStack_78 [32];
  longlong *local_58;
  ulonglong local_50;
  
  lVar13 = DAT_14cb259f8;
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (DAT_14cb259f8 != 0) {
    fVar14 = *(float *)(param_1 + 0x330);
    if (fVar14 <= 1.0) {
      fVar14 = 1.0;
    }
    fVar2 = *(float *)(param_1 + 0x388);
    lVar8 = *(longlong *)(param_1 + 0x1b0);
    if (lVar8 == 0) {
      uVar7 = FUN_1407f787c();
      lVar8 = FUN_14477b664(uVar7);
      *(longlong *)(param_1 + 0x1b0) = lVar8;
    }
    lVar9 = *(longlong *)(param_1 + 0x1b8);
    if (((lVar9 == 0) && (lVar9 = 0, lVar8 != 0)) && (*(longlong *)(param_1 + 0x1a8) != 0)) {
      plVar10 = *(longlong **)(lVar8 + 0xb8);
      if ((plVar10 == (longlong *)0x0) ||
         (cVar5 = (**(code **)(*plVar10 + 0x108))(plVar10), cVar5 == '\0')) {
        lVar9 = 0;
      }
      else {
        uVar7 = (**(code **)(*plVar10 + 0x110))(plVar10);
        lVar9 = FUN_144aff482(uVar7,(longlong *)(param_1 + 0x1a8));
      }
      *(longlong *)(param_1 + 0x1b8) = lVar9;
    }
    FUN_1447eec96(lVar13,lVar9,fVar2 / fVar14,0);
  }
  if ((((*(longlong *)(param_1 + 0x40) == 0) || (*(int *)(param_1 + 0x2c) == 0)) ||
      ((uVar3 = *(uint *)(param_1 + 0x28), (int)uVar3 < 0 ||
       (((DAT_14c9647dc <= (int)uVar3 ||
         (lVar13 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8), lVar13 == 0)) ||
        (*(int *)(lVar13 + 0x10) != *(int *)(param_1 + 0x2c))))))) ||
     (((*(uint *)(lVar13 + 8) & 0x10200000) != 0 ||
      (FUN_1403c747e(*(longlong *)(param_1 + 0x40),&local_58,0), plVar10 = local_58,
      local_58 == (longlong *)0x0)))) goto LAB_140a25d8e;
  bVar6 = *(byte *)(param_1 + 0x392);
  if (bVar6 != *(byte *)(param_1 + 0x396)) {
    if (*(int *)(param_1 + 0x2e8) != *(int *)(param_1 + 0x314)) {
      lVar13 = param_1 + 0x318;
      if (*(longlong *)(param_1 + 800) != 0) {
        lVar13 = *(longlong *)(param_1 + 800);
      }
      iVar11 = *(int *)(lVar13 + (ulonglong)(*(int *)(param_1 + 0x328) - 1U & (uint)bVar6) * 4);
      if (iVar11 != -1) {
        do {
          pbVar1 = (byte *)(*(longlong *)(param_1 + 0x2e0) + (longlong)iVar11 * 0x28);
          if (*pbVar1 == bVar6) {
            pbVar12 = pbVar1 + 8;
            if (pbVar12 != (byte *)0x0 && pbVar1 != (byte *)0x0) {
              lVar13 = *(longlong *)(pbVar1 + 0x10);
              if (lVar13 == 0) {
                uVar7 = FUN_1405b1a32();
                lVar13 = FUN_14477b664(uVar7);
                *(longlong *)(pbVar1 + 0x10) = lVar13;
              }
              if (((*(longlong *)(pbVar1 + 0x18) == 0) && (lVar13 != 0)) &&
                 (*(longlong *)pbVar12 != 0)) {
                plVar4 = *(longlong **)(lVar13 + 0xb8);
                if ((plVar4 == (longlong *)0x0) ||
                   (cVar5 = (**(code **)(*plVar4 + 0x108))(plVar4), cVar5 == '\0')) {
                  uVar7 = 0;
                }
                else {
                  uVar7 = (**(code **)(*plVar4 + 0x110))(plVar4);
                  uVar7 = FUN_144aff482(uVar7,pbVar12);
                }
                *(undefined8 *)(pbVar1 + 0x18) = uVar7;
              }
              FUN_140849a08(plVar10);
              bVar6 = *(byte *)(param_1 + 0x392);
            }
            break;
          }
          iVar11 = *(int *)(pbVar1 + 0x20);
        } while (iVar11 != -1);
      }
    }
    *(byte *)(param_1 + 0x396) = bVar6;
  }
  bVar6 = *(byte *)(param_1 + 0x391);
  if (bVar6 != *(byte *)(param_1 + 0x395)) {
    if (*(int *)(param_1 + 0x298) != *(int *)(param_1 + 0x2c4)) {
      lVar13 = param_1 + 0x2c8;
      if (*(longlong *)(param_1 + 0x2d0) != 0) {
        lVar13 = *(longlong *)(param_1 + 0x2d0);
      }
      iVar11 = *(int *)(lVar13 + (ulonglong)(*(int *)(param_1 + 0x2d8) - 1U & (uint)bVar6) * 4);
      if (iVar11 != -1) {
        do {
          pbVar1 = (byte *)(*(longlong *)(param_1 + 0x290) + (longlong)iVar11 * 0x28);
          if (*pbVar1 == bVar6) {
            pbVar12 = pbVar1 + 8;
            if (pbVar12 != (byte *)0x0 && pbVar1 != (byte *)0x0) {
              lVar13 = *(longlong *)(pbVar1 + 0x10);
              if (lVar13 == 0) {
                uVar7 = FUN_1405b1a32();
                lVar13 = FUN_14477b664(uVar7);
                *(longlong *)(pbVar1 + 0x10) = lVar13;
              }
              if (((*(longlong *)(pbVar1 + 0x18) == 0) && (lVar13 != 0)) &&
                 (*(longlong *)pbVar12 != 0)) {
                plVar10 = *(longlong **)(lVar13 + 0xb8);
                if ((plVar10 == (longlong *)0x0) ||
                   (cVar5 = (**(code **)(*plVar10 + 0x108))(plVar10), cVar5 == '\0')) {
                  uVar7 = 0;
                }
                else {
                  uVar7 = (**(code **)(*plVar10 + 0x110))(plVar10);
                  uVar7 = FUN_144aff482(uVar7,pbVar12);
                }
                *(undefined8 *)(pbVar1 + 0x18) = uVar7;
              }
              FUN_140849a08();
            }
            break;
          }
          iVar11 = *(int *)(pbVar1 + 0x20);
        } while (iVar11 != -1);
      }
    }
    lVar13 = *(longlong *)(param_1 + 0x1c8);
    if (lVar13 == 0) {
      FUN_1407f787c();
      lVar13 = FUN_14477b664();
      *(longlong *)(param_1 + 0x1c8) = lVar13;
    }
    plVar10 = (longlong *)(param_1 + 0x1c0);
    lVar8 = *(longlong *)(param_1 + 0x1d0);
    if (lVar8 == 0) {
      if ((lVar13 != 0) && (*plVar10 != 0)) {
        plVar4 = *(longlong **)(lVar13 + 0xb8);
        if ((plVar4 == (longlong *)0x0) || (cVar5 = (**(code **)(*plVar4 + 0x108))(), cVar5 == '\0')
           ) {
          *(undefined8 *)(param_1 + 0x1d0) = 0;
        }
        else {
          uVar7 = (**(code **)(*plVar4 + 0x110))(plVar4);
          lVar8 = FUN_144aff482(uVar7,plVar10);
          *(longlong *)(param_1 + 0x1d0) = lVar8;
          if (lVar8 != 0) goto LAB_140a2602b;
        }
      }
    }
    else {
LAB_140a2602b:
      lVar13 = DAT_14cb259f8;
      if (DAT_14cb259f8 != 0) {
        fVar14 = 0.0;
        if (*(int *)(param_1 + 0x1e0) != *(int *)(param_1 + 0x20c)) {
          lVar9 = param_1 + 0x210;
          if (*(longlong *)(param_1 + 0x218) != 0) {
            lVar9 = *(longlong *)(param_1 + 0x218);
          }
          iVar11 = *(int *)(lVar9 + (ulonglong)
                                    (*(int *)(param_1 + 0x220) - 1U &
                                    (uint)*(byte *)(param_1 + 0x391)) * 4);
          if (iVar11 != -1) {
            do {
              lVar9 = *(longlong *)(param_1 + 0x1d8) + (longlong)iVar11 * 0x10;
              if (*(byte *)(*(longlong *)(param_1 + 0x1d8) + (longlong)iVar11 * 0x10) ==
                  *(byte *)(param_1 + 0x391)) {
                if ((int *)(lVar9 + 4) != (int *)0x0 && lVar9 != 0) {
                  fVar14 = (float)*(int *)(lVar9 + 4);
                }
                break;
              }
              iVar11 = *(int *)(lVar9 + 8);
            } while (iVar11 != -1);
          }
        }
        if (*(longlong *)(param_1 + 0x1c8) == 0) {
          uVar7 = FUN_1407f787c();
          lVar9 = FUN_14477b664(uVar7);
          *(longlong *)(param_1 + 0x1c8) = lVar9;
          lVar8 = *(longlong *)(param_1 + 0x1d0);
          if (((lVar8 == 0) && (lVar8 = 0, lVar9 != 0)) && (*plVar10 != 0)) {
            plVar4 = *(longlong **)(lVar9 + 0xb8);
            if ((plVar4 == (longlong *)0x0) ||
               (cVar5 = (**(code **)(*plVar4 + 0x108))(plVar4), cVar5 == '\0')) {
              lVar8 = 0;
            }
            else {
              uVar7 = (**(code **)(*plVar4 + 0x110))(plVar4);
              lVar8 = FUN_144aff482(uVar7,plVar10);
            }
            *(longlong *)(param_1 + 0x1d0) = lVar8;
          }
        }
        FUN_1447eec96(lVar13,lVar8,fVar14,0);
      }
    }
    *(undefined1 *)(param_1 + 0x395) = *(undefined1 *)(param_1 + 0x391);
    if (*(int *)(param_1 + 0x2c) == 0) {
LAB_140a2628b:
      lVar13 = 0;
    }
    else {
      uVar3 = *(uint *)(param_1 + 0x28);
      lVar13 = 0;
      if ((-1 < (int)uVar3) && ((int)uVar3 < DAT_14c9647dc)) {
        plVar10 = (longlong *)
                  ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
        if ((plVar10 == (longlong *)0x0) ||
           (((int)plVar10[2] != *(int *)(param_1 + 0x2c) ||
            ((*(uint *)(plVar10 + 1) & 0x10200000) != 0)))) goto LAB_140a2628b;
        lVar13 = *plVar10;
      }
    }
    *(undefined8 *)(param_1 + 0x398) = *(undefined8 *)(lVar13 + 0x6e8);
  }
  if (((local_58 != (longlong *)0x0) &&
      (*(int *)(local_58 + 0x21) = (int)local_58[0x21] + -1, (int)local_58[0x26] < 1)) &&
     (FUN_1400847bc(local_58 + 0x17,0), (int)local_58[0x21] == 0)) {
    FUN_140087e46(local_58);
    if (*local_58 != -1) {
      if (DAT_14cb259f8 == 0) goto LAB_140a25d8e;
      FUN_14033a6c8(*(undefined8 *)(DAT_14cb259f8 + 0x40),local_58);
    }
    if (DAT_14cb259f8 != 0) {
      FUN_14008869e(*(undefined8 *)(DAT_14cb259f8 + 0x30),local_58);
    }
  }
LAB_140a25d8e:
  if ((local_50 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140a262da FUN_140a262da body=98 status=ok
// SIG undefined FUN_140a262da(void)

undefined1 FUN_140a262da(longlong *param_1)

{
  undefined1 uVar1;
  undefined1 auStack_48 [40];
  char local_20 [12];
  int local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*param_1 == 0) {
    uVar1 = 0;
  }
  else {
    FUN_140a2633e(*param_1,local_20);
    if (local_20[0] == '\x01') {
      uVar1 = local_14 != 0;
    }
    else {
      uVar1 = FUN_140321d1a(local_20);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a2633e FUN_140a2633e body=263 status=ok
// SIG undefined FUN_140a2633e(void)

undefined4 * FUN_140a2633e(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined ***pppuVar5;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined8 uStack_74;
  undefined4 uStack_6c;
  undefined1 *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  longlong local_40;
  ulonglong local_28;
  
  uVar1 = local_78;
  uVar4 = DAT_14cb7c580;
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((*(byte *)(param_1 + 0x10) & 2) == 0) goto LAB_140a26362;
  local_58 = (undefined ***)0x0;
  local_48 = &PTR_LAB_14b400660;
  local_40 = param_1;
  local_68[0] = &LAB_143d415dc;
  if (*(int *)(param_1 + 0x38) == 0) {
    local_78 = CONCAT31(local_78._1_3_,1);
    uVar2 = local_78;
    uStack_6c = 0;
    uStack_74 = DAT_14cb7c580;
    *(undefined1 *)(param_1 + 0x14) = 1;
    local_78._1_2_ = SUB42(uVar1,1);
    *(undefined2 *)(param_1 + 0x15) = local_78._1_2_;
    local_78._3_1_ = SUB41(uVar1,3);
    *(undefined1 *)(param_1 + 0x17) = local_78._3_1_;
    *(undefined8 *)(param_1 + 0x18) = uVar4;
    *(undefined4 *)(param_1 + 0x20) = 0;
    local_78 = uVar2;
LAB_140a26427:
    pppuVar5 = local_58;
    if (local_58 == (undefined ***)0x0) {
      pppuVar5 = &local_48;
    }
    (*(code *)(*pppuVar5)[2])();
  }
  else {
    FUN_140a2653c(param_1 + 0x30,&local_78,*(int *)(param_1 + 0x38) + -1,local_68);
    *(undefined4 *)(param_1 + 0x14) = local_78;
    *(undefined4 *)(param_1 + 0x18) = (undefined4)uStack_74;
    *(undefined4 *)(param_1 + 0x1c) = uStack_74._4_4_;
    *(undefined4 *)(param_1 + 0x20) = uStack_6c;
    if (local_68[0] != (undefined1 *)0x0) goto LAB_140a26427;
  }
  *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) & 0xfd;
LAB_140a26362:
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  uVar3 = *(undefined4 *)(param_1 + 0x20);
  *param_2 = *(undefined4 *)(param_1 + 0x14);
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  param_2[3] = uVar3;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 140a26446 FUN_140a26446 body=245 status=ok
// SIG undefined FUN_140a26446(void)

void FUN_140a26446(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  
  FUN_140a25bd6();
  iVar3 = *(int *)(param_1 + 0x48);
  if ((longlong)iVar3 != 0) {
    lVar4 = *(longlong *)(param_1 + 0x40);
    lVar6 = 0;
    do {
      if (*(longlong *)(lVar4 + lVar6) != 0) {
        FUN_140a26446();
      }
      lVar6 = lVar6 + 0x18;
    } while ((longlong)iVar3 * 0x18 != lVar6);
  }
  iVar3 = *(int *)(param_1 + 0x38);
  if ((longlong)iVar3 != 0) {
    lVar4 = *(longlong *)(param_1 + 0x30);
    lVar6 = 0;
    do {
      plVar5 = *(longlong **)(lVar4 + lVar6);
      if (plVar5 != (longlong *)0x0) {
        (**(code **)(*plVar5 + 0x28))(plVar5,param_1);
      }
      lVar6 = lVar6 + 0x18;
    } while ((longlong)iVar3 * 0x18 != lVar6);
  }
  iVar3 = *(int *)(param_1 + 0x28);
  if ((longlong)iVar3 != 0) {
    lVar4 = *(longlong *)(param_1 + 0x20);
    lVar6 = 0;
    do {
      plVar5 = *(longlong **)(lVar4 + lVar6);
      if (plVar5 != (longlong *)0x0) {
        (**(code **)(*plVar5 + 0x20))();
      }
      lVar6 = lVar6 + 0x18;
    } while ((longlong)iVar3 * 0x18 != lVar6);
  }
  *(undefined8 *)(param_1 + 0x58) = 0;
  plVar5 = *(longlong **)(param_1 + 0x60);
  if (plVar5 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x60) = 0;
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
                    /* WARNING: Could not recover jumptable at 0x000140a26537. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar5 + 0x10))(plVar5);
        return;
      }
    }
  }
  return;
}



// FUNCTION 140a2653c FUN_140a2653c body=1248 status=ok
// SIG undefined FUN_140a2653c(void)

char * FUN_140a2653c(longlong *param_1,char *param_2,uint param_3,undefined8 *param_4)

{
  undefined1 *puVar1;
  code *pcVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  size_t sVar8;
  ulonglong *puVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  longlong *plVar13;
  undefined8 *puVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  longlong lVar17;
  longlong lVar18;
  byte bVar19;
  bool bVar20;
  undefined1 auStack_178 [32];
  uint *local_158;
  int local_150;
  undefined1 local_14c [3];
  undefined1 uStack_149;
  uint local_148;
  longlong local_144;
  uint local_13c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  *param_2 = '\0';
  param_2[4] = '\0';
  param_2[5] = '\0';
  param_2[6] = '\0';
  param_2[7] = '\0';
  param_2[8] = '\0';
  param_2[9] = '\0';
  param_2[10] = '\0';
  param_2[0xb] = '\0';
  param_2[0xc] = '\0';
  param_2[0xd] = '\0';
  param_2[0xe] = '\0';
  param_2[0xf] = '\0';
  if (((int)param_3 < 0) || ((int)param_1[1] <= (int)param_3)) goto LAB_140a26750;
  puVar1 = (undefined1 *)(*param_1 + (ulonglong)param_3 * 0x50);
  cVar3 = *(char *)(*param_1 + (ulonglong)param_3 * 0x50);
  if (cVar3 == '\r') {
    FUN_140a2653c(param_1,&local_148,(int)*(short *)(puVar1 + 2),param_4);
    if ((char)local_148 == '\x01') {
      if (local_13c == 0) goto LAB_140a266aa;
    }
    else {
      cVar3 = FUN_140321d1a(&local_148);
      if (cVar3 == '\0') goto LAB_140a266aa;
    }
    *param_2 = '\x01';
    param_2[0xc] = '\x01';
    param_2[0xd] = '\0';
    param_2[0xe] = '\0';
    param_2[0xf] = '\0';
    goto LAB_140a266db;
  }
  if (cVar3 == '\f') {
    FUN_140a2653c(param_1,&local_148,(int)*(short *)(puVar1 + 2),param_4);
    if ((char)local_148 == '\x01') {
      if (local_13c != 0) goto LAB_140a266aa;
LAB_140a26684:
      *param_2 = '\x01';
      param_2[0xc] = '\0';
      param_2[0xd] = '\0';
      param_2[0xe] = '\0';
      param_2[0xf] = '\0';
LAB_140a266fb:
      puVar14 = &DAT_14cb7c580;
    }
    else {
      cVar3 = FUN_140321d1a(&local_148);
      if (cVar3 == '\0') goto LAB_140a26684;
LAB_140a266aa:
      FUN_140a2653c(param_1,&local_158,(int)*(short *)(puVar1 + 4),param_4);
      if ((char)local_158 == '\x01') {
        *param_2 = '\x01';
        *(uint *)(param_2 + 0xc) = (uint)(_local_14c != 0);
        if (_local_14c == 0) goto LAB_140a266fb;
      }
      else {
        bVar19 = FUN_140321d1a(&local_158);
        *param_2 = '\x01';
        *(uint *)(param_2 + 0xc) = (uint)bVar19;
        if (bVar19 == 0) goto LAB_140a266fb;
      }
LAB_140a266db:
      puVar14 = &DAT_14cb7c588;
    }
    *(undefined8 *)(param_2 + 4) = *puVar14;
  }
  else if (cVar3 == '\0') {
    if (*(short *)(puVar1 + 2) < 0) {
      if (*(int *)(puVar1 + 0x1c) < 1) {
        uVar7 = *(undefined8 *)(puVar1 + 0x48);
        *(undefined8 *)param_2 = *(undefined8 *)(puVar1 + 0x40);
        *(undefined8 *)(param_2 + 8) = uVar7;
      }
      else {
        pcVar2 = (code *)*param_4;
        plVar13 = param_4 + 4;
        if ((longlong *)param_4[2] != (longlong *)0x0) {
          plVar13 = (longlong *)param_4[2];
        }
        local_148 = param_3;
        uVar7 = (**(code **)(*plVar13 + 8))(plVar13);
        (*pcVar2)(param_2,uVar7,&local_148);
      }
    }
    else {
      cVar3 = puVar1[0x40];
      if (cVar3 == '\x03') {
        uVar15 = *(ulonglong *)(puVar1 + 0x44);
      }
      else if (cVar3 == '\x02') {
        iVar12 = *(int *)(puVar1 + 0x4c);
        uVar15 = DAT_14cb7c570;
        if ((iVar12 != 1) && (uVar15 = DAT_14cb7c578, iVar12 != 0)) {
          memset(&local_148,0,0x100);
          FUN_1407bf796(&local_148,0x100,&DAT_149dfc0ac,iVar12);
          sVar8 = strlen((char *)&local_148);
          iVar12 = (int)sVar8;
          if (iVar12 == 0) {
LAB_140a26a18:
            uVar15 = 0;
            uVar16 = 0;
          }
          else {
            lVar10 = (longlong)iVar12;
            if (&local_148 <= local_14c + lVar10 + 3) {
              lVar18 = 0;
              lVar11 = 0;
LAB_140a26960:
              if ((byte)(local_14c[lVar11 + lVar10 + 3] - 0x30) < 10) goto code_r0x000140a2696f;
              iVar5 = (int)lVar11;
              if (iVar5 == 0 || iVar12 <= -iVar5) goto LAB_140a26998;
              lVar18 = 0;
              if (((uint)-iVar5 < 0xb) && (local_14c[lVar11 + lVar10 + 3] == '_')) {
                if ((iVar5 != -1) && (*(char *)((longlong)&local_148 + lVar11 + lVar10) == '0'))
                goto LAB_140a26998;
                lVar17 = 0;
                do {
                  lVar18 = (longlong)*(char *)((longlong)&local_148 + lVar11 + lVar10) + lVar17 * 10
                  ;
                  lVar17 = lVar18 + -0x30;
                  lVar11 = lVar11 + 1;
                } while (lVar11 != 0);
                if (lVar17 < 0x7fffffff) {
                  iVar12 = iVar12 + iVar5 + -1;
                  lVar18 = lVar18 + -0x2f;
                }
                else {
LAB_140a26998:
                  lVar18 = 0;
                }
              }
              goto LAB_140a2699b;
            }
            lVar18 = 0;
LAB_140a2699f:
            _local_14c = _local_14c & 0xffffff00;
            local_158 = &local_148;
            local_150 = iVar12;
            uVar6 = FUN_14001a6c0(&local_158,1);
            uVar16 = lVar18 << 0x20;
            uVar15 = (ulonglong)uVar6;
          }
          uVar15 = uVar15 | uVar16;
        }
      }
      else if (cVar3 == '\x01') {
        puVar9 = &DAT_14cb7c580;
        if (*(int *)(puVar1 + 0x4c) != 0) {
          puVar9 = &DAT_14cb7c588;
        }
        uVar15 = *puVar9;
      }
      else {
        uVar15 = 0;
      }
      if (uVar15 == DAT_14cb7bf88) {
        FUN_140a2653c(param_1,&local_148,(int)*(short *)(puVar1 + 2),param_4);
        if ((local_148 & 0xff) == 3) {
          bVar20 = local_144 == 0;
LAB_140a2686b:
          uVar6 = (uint)!bVar20;
        }
        else {
          uVar6 = local_13c;
          if (((local_148 & 0xff) != 2) && (uVar6 = 0, (char)local_148 == '\x01')) {
            bVar20 = local_13c == 0;
            goto LAB_140a2686b;
          }
        }
        FUN_140a2653c(param_1,&local_148,(int)*(short *)(puVar1 + 4),param_4);
        if ((local_148 & 0xff) == 3) {
          bVar20 = local_144 == 0;
LAB_140a268b4:
          uVar4 = (uint)!bVar20;
        }
        else {
          uVar4 = local_13c;
          if (((local_148 & 0xff) != 2) && (uVar4 = 0, (char)local_148 == '\x01')) {
            bVar20 = local_13c == 0;
            goto LAB_140a268b4;
          }
        }
        iVar12 = uVar4 - uVar6;
        if (iVar12 < 0) {
          iVar12 = 0;
        }
        else {
          uVar4 = rand();
          iVar5 = (int)((float)(iVar12 + 1) * ((float)(uVar4 & 0x7fff) / 32767.0));
          if (iVar5 < iVar12) {
            iVar12 = iVar5;
          }
        }
        *param_2 = '\x02';
        param_2[4] = '\0';
        param_2[5] = '\0';
        param_2[6] = '\0';
        param_2[7] = '\0';
        param_2[8] = '\0';
        param_2[9] = '\0';
        param_2[10] = '\0';
        param_2[0xb] = '\0';
        *(uint *)(param_2 + 0xc) = iVar12 + uVar6;
      }
    }
  }
  else {
    FUN_140a2653c(param_1,&local_148,(int)*(short *)(puVar1 + 4),param_4);
    FUN_140a2653c(param_1,&local_158,(int)*(short *)(puVar1 + 2),param_4);
    FUN_140321208(param_2,*puVar1,&local_158,&local_148);
  }
  if (puVar1[1] == '\x01') {
    if (*param_2 == '\x01') {
      bVar19 = *(int *)(param_2 + 0xc) != 0;
    }
    else {
      bVar19 = FUN_140321d1a(param_2);
    }
    puVar14 = &DAT_14cb7c580;
    if (bVar19 == 0) {
      puVar14 = &DAT_14cb7c588;
    }
    uVar7 = *puVar14;
    *param_2 = '\x01';
    *(undefined8 *)(param_2 + 4) = uVar7;
    *(uint *)(param_2 + 0xc) = (uint)(bVar19 ^ 1);
  }
LAB_140a26750:
  if ((local_48 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
code_r0x000140a2696f:
  lVar17 = lVar11 + -1;
  lVar11 = lVar11 + -1;
  if ((uint *)((longlong)(local_14c + lVar10 + 3) + lVar17) < &local_148) {
LAB_140a2699b:
    if (iVar12 == 0) goto LAB_140a26a18;
    goto LAB_140a2699f;
  }
  goto LAB_140a26960;
}



// FUNCTION 140a26a1e FUN_140a26a1e body=432 status=ok
// SIG undefined FUN_140a26a1e(void)

void FUN_140a26a1e(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong local_50;
  undefined8 local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar4 = *param_2;
  lVar5 = param_2[1];
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
  }
  plVar6 = *(longlong **)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x58) = uVar4;
  *(longlong *)(param_1 + 0x60) = lVar5;
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
  iVar3 = *(int *)(param_1 + 0x28);
  if ((longlong)iVar3 != 0) {
    lVar5 = *(longlong *)(param_1 + 0x20);
    lVar8 = 0;
    do {
      plVar6 = *(longlong **)(lVar5 + lVar8);
      if (plVar6 != (longlong *)0x0) {
        local_48 = *(undefined8 *)(param_1 + 0x58);
        local_40 = *(longlong *)(param_1 + 0x60);
        if (local_40 != 0) {
          LOCK();
          *(int *)(local_40 + 8) = *(int *)(local_40 + 8) + 1;
          UNLOCK();
        }
        (**(code **)(*plVar6 + 0x18))(plVar6,&local_48);
      }
      lVar8 = lVar8 + 0x18;
    } while ((longlong)iVar3 * 0x18 != lVar8);
  }
  iVar3 = *(int *)(param_1 + 0x38);
  if ((longlong)iVar3 != 0) {
    lVar5 = *(longlong *)(param_1 + 0x30);
    lVar8 = 0;
    do {
      plVar6 = *(longlong **)(lVar5 + lVar8);
      if (plVar6 != (longlong *)0x0) {
        (**(code **)(*plVar6 + 0x20))(plVar6,param_1);
      }
      lVar8 = lVar8 + 0x18;
    } while ((longlong)iVar3 * 0x18 != lVar8);
  }
  iVar3 = *(int *)(param_1 + 0x48);
  if ((longlong)iVar3 != 0) {
    lVar5 = *(longlong *)(param_1 + 0x40);
    lVar8 = 0;
    do {
      lVar7 = *(longlong *)(lVar5 + lVar8);
      if (lVar7 != 0) {
        local_58 = *(undefined8 *)(param_1 + 0x58);
        local_50 = *(longlong *)(param_1 + 0x60);
        if (local_50 != 0) {
          LOCK();
          *(int *)(local_50 + 8) = *(int *)(local_50 + 8) + 1;
          UNLOCK();
        }
        FUN_140a26a1e(lVar7,&local_58);
      }
      lVar8 = lVar8 + 0x18;
    } while ((longlong)iVar3 * 0x18 != lVar8);
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
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140a26bd0 FUN_140a26bd0 body=546 status=ok
// SIG undefined FUN_140a26bd0(void)

void FUN_140a26bd0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  char cVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_58 [32];
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar9 = *(longlong *)(param_2 + 0x58);
  plVar3 = *(longlong **)(param_2 + 0x60);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  if (lVar9 == 0) goto LAB_140a26d80;
  lVar8 = *(longlong *)(param_1 + 0x10);
  if (lVar8 == 0) {
    uVar7 = FUN_1405b1a32();
    lVar8 = FUN_14477b664(uVar7);
    *(longlong *)(param_1 + 0x10) = lVar8;
  }
  plVar1 = (longlong *)(param_1 + 8);
  if (*(longlong *)(param_1 + 0x18) == 0) {
    if ((lVar8 == 0) || (*plVar1 == 0)) goto LAB_140a26d80;
    plVar5 = *(longlong **)(lVar8 + 0xb8);
    if (plVar5 != (longlong *)0x0) {
      cVar6 = (**(code **)(*plVar5 + 0x108))(plVar5);
      if (cVar6 != '\0') {
        uVar7 = (**(code **)(*plVar5 + 0x110))(plVar5);
        lVar8 = FUN_144aff482(uVar7,plVar1);
        *(longlong *)(param_1 + 0x18) = lVar8;
        if (lVar8 == 0) goto LAB_140a26d80;
        goto LAB_140a26c30;
      }
    }
    *(undefined8 *)(param_1 + 0x18) = 0;
    goto LAB_140a26d80;
  }
LAB_140a26c30:
  FUN_1403c747e(lVar9,&local_38,0);
  plVar5 = local_38;
  if (local_38 == (longlong *)0x0) goto LAB_140a26d80;
  lVar9 = *(longlong *)(param_1 + 0x10);
  if (lVar9 == 0) {
    uVar7 = FUN_1405b1a32();
    lVar9 = FUN_14477b664(uVar7);
    *(longlong *)(param_1 + 0x10) = lVar9;
  }
  if (((*(longlong *)(param_1 + 0x18) == 0) && (lVar9 != 0)) && (*plVar1 != 0)) {
    plVar4 = *(longlong **)(lVar9 + 0xb8);
    if (plVar4 == (longlong *)0x0) {
LAB_140a26dec:
      uVar7 = 0;
    }
    else {
      cVar6 = (**(code **)(*plVar4 + 0x108))(plVar4);
      if (cVar6 == '\0') goto LAB_140a26dec;
      uVar7 = (**(code **)(*plVar4 + 0x110))(plVar4);
      uVar7 = FUN_144aff482(uVar7,plVar1);
    }
    *(undefined8 *)(param_1 + 0x18) = uVar7;
  }
  FUN_140849a08(plVar5);
  if ((local_38 != (longlong *)0x0) &&
     (*(int *)(local_38 + 0x21) = (int)local_38[0x21] + -1, (int)local_38[0x26] < 1)) {
    FUN_1400847bc(local_38 + 0x17,0);
    if ((int)local_38[0x21] == 0) {
      FUN_140087e46(local_38);
      if (*local_38 != -1) {
        if (DAT_14cb259f8 == 0) goto LAB_140a26d80;
        FUN_14033a6c8(*(undefined8 *)(DAT_14cb259f8 + 0x40),local_38);
      }
      if (DAT_14cb259f8 != 0) {
        FUN_14008869e(*(undefined8 *)(DAT_14cb259f8 + 0x30),local_38);
      }
    }
  }
LAB_140a26d80:
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
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a26df4 FUN_140a26df4 body=366 status=ok
// SIG undefined FUN_140a26df4(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_140a26df4(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  longlong local_58 [4];
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(char *)(param_1 + 0x38) == '\x01') {
    plVar1 = (longlong *)(param_1 + 0x70);
    cVar2 = FUN_144904448(plVar1);
    if (cVar2 != '\0') {
      plVar4 = (longlong *)*plVar1;
      if (((plVar4 == (longlong *)0x0) || (*(longlong *)(param_1 + 0x78) == -1)) ||
         (*plVar4 != *(longlong *)(param_1 + 0x78))) {
        plVar4 = (longlong *)0x0;
      }
      else {
        *(int *)(plVar4 + 0x21) = (int)plVar4[0x21] + 1;
      }
      local_38 = 0;
      uStack_30 = 0;
      lVar3 = FUN_140206ee8(param_1 + 0x40);
      if (lVar3 == 0 || plVar4 == (longlong *)0x0) {
        FUN_140665294(plVar1,local_58);
        if ((local_58[0] != 0) && ((DAT_14cb26569 & 1) != 0)) {
          FUN_1400848c0(*(undefined8 *)(local_58[0] + 0x50));
        }
        FUN_14072d42a(plVar1,0);
        if (plVar4 == (longlong *)0x0) goto LAB_140a26f02;
      }
      else {
        local_68 = 0;
        FUN_14084a448(plVar4,local_58 + 1,lVar3,0);
        local_58[1] = 0;
        local_58[2] = 0xffffffffffffffff;
      }
      *(int *)(plVar4 + 0x21) = (int)plVar4[0x21] + -1;
      if ((int)plVar4[0x26] < 1) {
        FUN_1400847bc(plVar4 + 0x17,0);
        if ((int)plVar4[0x21] == 0) {
          FUN_140087e46(plVar4);
          if (*plVar4 != -1) {
            if (DAT_14cb259f8 == 0) goto LAB_140a26f02;
            FUN_14033a6c8(*(undefined8 *)(DAT_14cb259f8 + 0x40),plVar4);
          }
          if (DAT_14cb259f8 != 0) {
            FUN_14008869e(*(undefined8 *)(DAT_14cb259f8 + 0x30),plVar4);
          }
        }
      }
    }
  }
LAB_140a26f02:
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a26f64 FUN_140a26f64 body=532 status=ok
// SIG undefined FUN_140a26f64(void)

void FUN_140a26f64(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  char cVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  longlong *local_48;
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar4 = *(longlong *)(param_2 + 0x58);
  plVar5 = *(longlong **)(param_2 + 0x60);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  if ((lVar4 == 0) ||
     ((*(char *)(param_1 + 0x38) == '\x01' && (cVar7 = FUN_144904448(param_1 + 0x70), cVar7 != '\0')
      ))) goto LAB_140a270e8;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  local_40 = lVar4;
  local_38 = plVar5;
  lVar8 = FUN_140206ee8(param_1 + 8,&local_40);
  if ((lVar8 == 0) ||
     (FUN_1403c747e(lVar4,&local_48,0), plVar1 = local_48, local_48 == (longlong *)0x0))
  goto LAB_140a270e8;
  plVar6 = *(longlong **)(lVar4 + 0x20);
  if ((plVar6 == (longlong *)0x0) || (*(int *)(lVar4 + 0x1c) == 0)) {
LAB_140a27080:
    plVar9 = (longlong *)0x0;
  }
  else {
    uVar3 = *(uint *)(lVar4 + 0x18);
    plVar9 = (longlong *)0x0;
    if ((-1 < (int)uVar3) && ((int)uVar3 < DAT_14c9647dc)) {
      lVar10 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
      if ((lVar10 == 0) ||
         ((*(int *)(lVar10 + 0x10) != *(int *)(lVar4 + 0x1c) ||
          ((*(uint *)(lVar10 + 8) & 0x10200000) != 0)))) goto LAB_140a27080;
      if (*(code **)(*plVar6 + 0x30) == (code *)&LAB_14479b63c) {
        plVar9 = plVar6 + -0xa4;
        if ((longlong *)plVar6[-0x77] != (longlong *)0x0) {
          plVar9 = (longlong *)plVar6[-0x77];
        }
      }
      else {
        plVar9 = (longlong *)(**(code **)(*plVar6 + 0x30))();
      }
    }
  }
  local_68 = 0;
  FUN_14084a448(plVar1,&local_60,lVar8,plVar9);
  *(undefined8 *)(param_1 + 0x70) = local_60;
  *(undefined8 *)(param_1 + 0x78) = local_58;
  *(undefined8 *)(param_1 + 0x80) = local_50;
  if (((local_48 != (longlong *)0x0) &&
      (*(int *)(local_48 + 0x21) = (int)local_48[0x21] + -1, (int)local_48[0x26] < 1)) &&
     (FUN_1400847bc(local_48 + 0x17,0), (int)local_48[0x21] == 0)) {
    FUN_140087e46(local_48);
    if (*local_48 != -1) {
      if (DAT_14cb259f8 == 0) goto LAB_140a270e8;
      FUN_14033a6c8(*(undefined8 *)(DAT_14cb259f8 + 0x40),local_48);
    }
    if (DAT_14cb259f8 != 0) {
      FUN_14008869e(*(undefined8 *)(DAT_14cb259f8 + 0x30),local_48);
    }
  }
LAB_140a270e8:
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
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140a27188 FUN_140a27188 body=71 status=ok
// SIG undefined FUN_140a27188(void)

undefined8 * FUN_140a27188(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b25e6c0;
  FUN_140a271cf(param_1[2],*(undefined4 *)(param_1 + 3));
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140a271cf FUN_140a271cf body=73 status=ok
// SIG undefined FUN_140a271cf(void)

void FUN_140a271cf(longlong param_1,int param_2)

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



// FUNCTION 140a27218 FUN_140a27218 body=44 status=ok
// SIG undefined FUN_140a27218(void)

longlong FUN_140a27218(longlong param_1,int param_2)

{
  FUN_140a27244(param_1 + 0x10);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140a27244 FUN_140a27244 body=216 status=ok
// SIG undefined FUN_140a27244(void)

void FUN_140a27244(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_14a8be088;
  lVar1 = param_1[1];
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)(lVar1 + 8) + 0x20))(lVar1 + 8);
    lVar1 = param_1[1];
    if (lVar1 != 0) {
      (*(code *)**(undefined8 **)(lVar1 + 8))(lVar1 + 8,1);
    }
  }
  lVar1 = param_1[2];
  if (lVar1 != 0) {
    if (*(int *)(lVar1 + 0x28) != 0) {
      (**(code **)(*(longlong *)(lVar1 + 8) + 0x20))(lVar1 + 8);
      lVar1 = param_1[2];
      if (lVar1 == 0) goto LAB_140a272b4;
    }
    (*(code *)**(undefined8 **)(lVar1 + 8))(lVar1 + 8,1);
  }
LAB_140a272b4:
  lVar1 = param_1[3];
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)(lVar1 + 8) + 0x20))(lVar1 + 8);
    lVar1 = param_1[3];
    if (lVar1 != 0) {
      (*(code *)**(undefined8 **)(lVar1 + 8))(lVar1 + 8,1);
    }
  }
  lVar1 = param_1[4];
  if (lVar1 != 0) {
    (**(code **)(*(longlong *)(lVar1 + 8) + 0x20))(lVar1 + 8);
    lVar1 = param_1[4];
    if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000140a27312. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)**(undefined8 **)(lVar1 + 8))(lVar1 + 8,1);
      return;
    }
  }
  return;
}



// FUNCTION 140a2731c FUN_140a2731c body=39 status=ok
// SIG undefined FUN_140a2731c(void)

longlong FUN_140a2731c(longlong param_1,int param_2)

{
  FUN_14006f2ae();
  if (param_2 != 0) {
    FUN_1400020a8(param_1 + -8);
  }
  return param_1 + -8;
}



// FUNCTION 140a27344 FUN_140a27344 body=57 status=ok
// SIG undefined FUN_140a27344(void)

void FUN_140a27344(longlong param_1)

{
  FUN_144725486();
  FUN_144725486(param_1 + 0x10);
  FUN_144725486(param_1 + 0x28);
  FUN_144725486(param_1 + 0x40);
  FUN_144725486(param_1 + 0x58);
  return;
}



// FUNCTION 140a2737e FUN_140a2737e body=82 status=ok
// SIG undefined FUN_140a2737e(void)

undefined8 * FUN_140a2737e(undefined8 *param_1,int param_2)

{
  param_1[-1] = &PTR_LAB_14a8ca1c0;
  *param_1 = &PTR_FUN_14a8ca1d0;
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  FUN_14003f39a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1 + -1);
  }
  return param_1 + -1;
}



// FUNCTION 140a273d0 FUN_140a273d0 body=135 status=ok
// SIG undefined FUN_140a273d0(void)

undefined8 * FUN_140a273d0(undefined8 *param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  
  *param_1 = &PTR_FUN_14a1ca480;
  if (param_1[0x42] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[0x42] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (param_1[0x41] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[0x41] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  FUN_1447259a8(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1 + -1);
  }
  return param_1 + -1;
}



// FUNCTION 140a27458 FUN_140a27458 body=776 status=ok
// SIG undefined FUN_140a27458(void)

undefined8 * FUN_140a27458(undefined8 *param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  
  param_1[-1] = &PTR_LAB_14a8ca178;
  *param_1 = &PTR_FUN_14a8ca190;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x11] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[0x11] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (param_1[0x10] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[0x10] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (param_1[0xf] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[0xf] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (param_1[0xe] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[0xe] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  param_1[0xb] = &PTR_FUN_14a38cff0;
  if (param_1[0xd] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[0xd] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  param_1[0xb] = &PTR_FUN_14a38cd70;
  *(undefined1 *)((longlong)param_1 + 0x66) = 2;
  if ((*(int *)(param_1 + 0xc) != -1) && (DAT_14c868880 == '\0')) {
    FUN_140033559(".\\Runtime/RenderCore/Private/RenderResource.cpp",0xfe,
                  L"A FRenderResource was deleted without being released first!");
  }
  param_1[8] = &PTR_FUN_14a38cff0;
  if (param_1[10] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[10] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  param_1[8] = &PTR_FUN_14a38cd70;
  *(undefined1 *)((longlong)param_1 + 0x4e) = 2;
  if ((*(int *)(param_1 + 9) != -1) && (DAT_14c868880 == '\0')) {
    FUN_140033559(".\\Runtime/RenderCore/Private/RenderResource.cpp",0xfe,
                  L"A FRenderResource was deleted without being released first!");
  }
  param_1[5] = &PTR_FUN_14a38cff0;
  if (param_1[7] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[7] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  param_1[5] = &PTR_FUN_14a38cd70;
  *(undefined1 *)((longlong)param_1 + 0x36) = 2;
  if ((*(int *)(param_1 + 6) != -1) && (DAT_14c868880 == '\0')) {
    FUN_140033559(".\\Runtime/RenderCore/Private/RenderResource.cpp",0xfe,
                  L"A FRenderResource was deleted without being released first!");
  }
  param_1[2] = &PTR_FUN_14a38cff0;
  if (param_1[4] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[4] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  param_1[2] = &PTR_FUN_14a38cd70;
  *(undefined1 *)((longlong)param_1 + 0x1e) = 2;
  if ((*(int *)(param_1 + 3) != -1) && (DAT_14c868880 == '\0')) {
    FUN_140033559(".\\Runtime/RenderCore/Private/RenderResource.cpp",0xfe,
                  L"A FRenderResource was deleted without being released first!");
  }
  *param_1 = &PTR_FUN_14a38cd70;
  *(undefined1 *)((longlong)param_1 + 0xe) = 2;
  if ((*(int *)(param_1 + 1) != -1) && (DAT_14c868880 == '\0')) {
    FUN_140033559(".\\Runtime/RenderCore/Private/RenderResource.cpp",0xfe,
                  L"A FRenderResource was deleted without being released first!");
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1 + -1);
  }
  return param_1 + -1;
}



// FUNCTION 140a27760 FUN_140a27760 body=413 status=ok
// SIG undefined FUN_140a27760(void)

char * FUN_140a27760(longlong *param_1,char *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  longlong *plVar6;
  uint uVar7;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  longlong *local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_60 = param_4;
  plVar6 = (longlong *)(**(code **)(*param_1 + 0x180))();
  iVar5 = (**(code **)*plVar6)(plVar6);
  if (0 < iVar5) {
    uVar7 = iVar5 + 1;
    do {
      (**(code **)(*plVar6 + 0x10))(plVar6,&local_58,uVar7 - 2);
      plVar4 = local_50;
      plVar1 = local_58;
      if (local_50 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_50 + 1) = (int)local_50[1] + 1;
        UNLOCK();
        if (local_50 != (longlong *)0x0) {
          LOCK();
          plVar3 = local_50 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
            (**(code **)*local_50)(local_50);
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
      (**(code **)(*plVar1 + 0x70))(plVar1,param_2,param_3,local_60);
      if (*param_2 != '\0') {
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          plVar6 = plVar4 + 1;
          *(int *)plVar6 = (int)*plVar6 + -1;
          UNLOCK();
          if ((int)*plVar6 == 0) {
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
        goto LAB_140a27869;
      }
      FUN_14493db24(param_2);
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
      uVar7 = uVar7 - 1;
    } while (1 < uVar7);
  }
  *param_2 = '\0';
  param_2[0x20] = '\0';
  param_2[8] = '\0';
  param_2[9] = '\0';
  param_2[10] = '\0';
  param_2[0xb] = '\0';
  param_2[0xc] = '\0';
  param_2[0xd] = '\0';
  param_2[0xe] = '\0';
  param_2[0xf] = '\0';
  param_2[0x10] = '\0';
  param_2[0x11] = '\0';
  param_2[0x12] = '\0';
  param_2[0x13] = '\0';
  param_2[0x14] = '\0';
  param_2[0x15] = '\0';
  param_2[0x16] = '\0';
  param_2[0x17] = '\0';
  memset(param_2 + 0x28,0,0x88);
  param_2[0xb0] = '\x02';
  param_2[0xb1] = '\a';
  param_2[0xb2] = '\x02';
  param_2[0xb3] = '\0';
  param_2[0xb4] = '\0';
LAB_140a27869:
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a27906 FUN_140a27906 body=196 status=ok
// SIG undefined FUN_140a27906(void)

undefined1 *
FUN_140a27906(longlong param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  if ((*(byte *)(param_1 + 0x39) & 8) == 0) {
    *param_2 = 0;
    param_2[0x20] = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    memset(param_2 + 0x28,0,0x88);
    *(undefined4 *)(param_2 + 0xb0) = 0x20702;
    param_2[0xb4] = 0;
  }
  else {
    if ((longlong)*(int *)(param_1 + 0x2d8) != 0) {
      lVar1 = 0;
      do {
        if ((*(int *)(*(longlong *)(param_1 + 0x2d0) + 8 + lVar1) != 0) &&
           (*(longlong *)(*(longlong *)(param_1 + 0x2d0) + lVar1) != 0)) {
          FUN_140a279ca(param_1 + 0x2d0,param_3,param_4,0);
          break;
        }
        lVar1 = lVar1 + 0x10;
      } while ((longlong)*(int *)(param_1 + 0x2d8) * 0x10 != lVar1);
    }
    FUN_1407c952c(param_1,param_2,param_3,param_4,0);
  }
  return param_2;
}



// FUNCTION 140a279ca FUN_140a279ca body=187 status=ok
// SIG undefined FUN_140a279ca(void)

void FUN_140a279ca(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

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
        goto LAB_140a27a6d;
      }
    }
    uVar5 = uVar7 - 1;
    bVar6 = true;
  } while (1 < uVar7);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_140a27a6d:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 140a27a86 FUN_140a27a86 body=164 status=ok
// SIG undefined FUN_140a27a86(void)

void FUN_140a27a86(longlong param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  
  lVar4 = (longlong)param_2;
  lVar3 = lVar4 * 0x10;
  FUN_140a27b2a(param_3,*(longlong *)(param_1 + 0x80) + lVar3);
  lVar2 = *(longlong *)(param_1 + 0x80);
  *(undefined4 *)(lVar2 + 8 + lVar3) = 0;
  if (*(int *)(lVar2 + 0xc + lVar3) < 0) {
    FUN_141775394(lVar2 + lVar3,0);
  }
  iVar1 = *(int *)(*(longlong *)(param_1 + 0x60) + lVar4 * 8);
  if (iVar1 == -1) {
    return;
  }
  iVar5 = 0;
  do {
    FUN_140a27a86(param_1,iVar1 + iVar5,param_3);
    iVar5 = iVar5 + 1;
  } while (iVar5 != 8);
  *(undefined4 *)(*(longlong *)(param_1 + 0x60) + lVar4 * 8) = 0xffffffff;
  FUN_140a27b92(param_1,iVar1);
  return;
}



// FUNCTION 140a27b2a FUN_140a27b2a body=103 status=ok
// SIG undefined FUN_140a27b2a(void)

void FUN_140a27b2a(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(param_2 + 1);
  if ((longlong)(int)uVar1 != 0) {
    iVar2 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_140042cc8(param_1,iVar2);
    }
    memmove((void *)((longlong)iVar2 * 0x48 + *param_1),(void *)*param_2,(longlong)(int)uVar1 * 0x48
           );
    *(undefined4 *)(param_2 + 1) = 0;
  }
  return;
}



// FUNCTION 140a27b92 FUN_140a27b92 body=116 status=ok
// SIG undefined FUN_140a27b92(void)

void FUN_140a27b92(longlong param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  
  lVar2 = 0;
  do {
    *(undefined8 *)(*(longlong *)(param_1 + 0x60) + (longlong)(param_2 + (int)lVar2) * 8) =
         0xffffffff;
    lVar2 = lVar2 + 1;
  } while (lVar2 != 8);
  uVar3 = param_2 - 1U >> 3;
  *(undefined4 *)(*(longlong *)(param_1 + 0x70) + (ulonglong)uVar3 * 4) = 0xffffffff;
  iVar1 = *(int *)(param_1 + 0x98);
  *(uint *)(param_1 + 0x98) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x9c) < iVar1 + 1U) {
    FUN_1447808da((longlong *)(param_1 + 0x90),iVar1);
  }
  *(uint *)(*(longlong *)(param_1 + 0x90) + (longlong)iVar1 * 4) = uVar3;
  return;
}



// FUNCTION 140a27c06 FUN_140a27c06 body=217 status=ok
// SIG undefined FUN_140a27c06(void)

undefined8
FUN_140a27c06(longlong *param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,
             undefined4 param_5,longlong *param_6)

{
  undefined8 *puVar1;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  longlong *local_40;
  longlong local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = *param_6;
  local_40 = &local_30;
  *param_6 = 0;
  local_28 = (undefined4)param_6[1];
  local_24 = *(undefined4 *)((longlong)param_6 + 0xc);
  param_6[1] = 0;
  local_48 = param_5;
  (**(code **)(*param_1 + 0x558))(param_1,param_2,param_3,param_4);
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if ((int)param_4[1] != 0) {
    puVar1 = (undefined8 *)*param_4;
    if (puVar1 == (undefined8 *)0x0) goto LAB_140a27c85;
    (**(code **)*puVar1)(puVar1,0);
    FUN_1446efa72(param_4,0,0,0x10);
    *(undefined4 *)(param_4 + 1) = 0;
  }
  if (*param_4 != 0) {
    FUN_1400020a8();
  }
LAB_140a27c85:
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a27ce0 FUN_140a27ce0 body=881 status=ok
// SIG undefined FUN_140a27ce0(void)

undefined8 *
FUN_140a27ce0(longlong *param_1,undefined8 *param_2,longlong *param_3,undefined8 *param_4,
             undefined4 param_5,longlong *param_6)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  undefined1 auStack_108 [32];
  undefined1 *local_e8;
  undefined1 local_e0;
  undefined1 local_d8;
  longlong *local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined1 local_b8 [8];
  ulonglong local_b0;
  undefined8 *local_a8;
  ulonglong local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  longlong local_88;
  undefined8 uStack_80;
  longlong local_78;
  undefined8 uStack_70;
  longlong local_68;
  undefined4 local_60;
  undefined4 local_5c;
  longlong local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 *local_48;
  ulonglong uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  uStack_70._0_4_ = 0;
  if (*(char *)((longlong)param_1 + 0x354) == '\x01') {
    (**(code **)(*param_1 + 0x3c0))(param_1,param_3,&local_78,&local_88);
    if (0 < (int)uStack_80) {
      *param_2 = 0;
      param_2[1] = 0;
      goto LAB_140a27fcc;
    }
  }
  if (((int)uStack_70 == 0 & *(byte *)((longlong)param_1 + 0x352)) == 1) {
    FUN_1479548e8(param_1 + 0x3d,&local_48,param_3);
    uVar3 = uStack_40;
    puVar2 = local_48;
    local_48 = (undefined8 *)0x0;
    uStack_40 = 0;
    local_98 = 0;
    uStack_90 = 0;
    FUN_1402a1d54(param_4,&local_98,&local_48);
    if ((int)uStack_40 == 0) {
LAB_140a27fb4:
      if (local_48 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
    else if (local_48 != (undefined8 *)0x0) {
      (**(code **)*local_48)(local_48,0);
      FUN_1446efa72(&local_48,0,0,0x10);
      uStack_40 = uStack_40 & 0xffffffff00000000;
      goto LAB_140a27fb4;
    }
  }
  else {
    local_48 = (undefined8 *)*param_4;
    *param_4 = 0;
    uVar1 = *(undefined4 *)(param_4 + 1);
    *(undefined4 *)(param_4 + 1) = 0;
    uStack_40 = CONCAT44(uStack_40._4_4_,uVar1);
    if (DAT_14cb0a348 == '\0') {
      local_58 = *param_6;
      *param_6 = 0;
      local_50 = (undefined4)param_6[1];
      local_4c = *(undefined4 *)((longlong)param_6 + 0xc);
      param_6[1] = 0;
    }
    else {
      local_58 = 0;
      local_50 = 0;
      local_4c = 0;
    }
    local_d0 = &local_58;
    local_68 = *param_3;
    *param_3 = 0;
    local_60 = (undefined4)param_3[1];
    local_5c = *(undefined4 *)((longlong)param_3 + 0xc);
    param_3[1] = 0;
    local_d8 = 0 < (int)uStack_70;
    local_e8 = (undefined1 *)CONCAT44(local_e8._4_4_,param_5);
    local_e0 = 0;
    FUN_140421d62(param_1 + 0x3d,&local_a8,&local_68,&local_48);
    FUN_140861e20(local_68,local_60);
    if (local_68 != 0) {
      FUN_1400020a8();
    }
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    if ((int)uStack_40 == 0) {
LAB_140a27ea5:
      if (local_48 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
    else if (local_48 != (undefined8 *)0x0) {
      (**(code **)*local_48)(local_48,0);
      FUN_1446efa72(&local_48,0,0,0x10);
      uStack_40 = uStack_40 & 0xffffffff00000000;
      goto LAB_140a27ea5;
    }
    puVar2 = local_a8;
    uVar3 = local_a0;
    if (local_a0 == 0) {
      if (local_a8 != (undefined8 *)0x0 && 0 < (int)uStack_70) {
        local_b0 = 0;
        goto LAB_140a27f03;
      }
      uVar3 = 0;
    }
    else if (local_a8 != (undefined8 *)0x0 && 0 < (int)uStack_70) {
      local_b0 = local_a0;
      LOCK();
      *(int *)(local_a0 + 8) = *(int *)(local_a0 + 8) + 1;
      UNLOCK();
LAB_140a27f03:
      local_c8 = 0;
      uStack_c0 = 0;
      local_e8 = local_b8;
      (**(code **)(*param_1 + 0x548))(param_1,&local_78,&local_c8,0);
    }
  }
  *param_2 = puVar2;
  param_2[1] = uVar3;
LAB_140a27fcc:
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a28052 FUN_140a28052 body=42 status=ok
// SIG undefined FUN_140a28052(void)

void FUN_140a28052(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_140a28092(param_2);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000140a28067. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x38))();
    return;
  }
  uVar2 = FUN_140a281ea();
  FUN_140d2ac68(uVar2);
  return;
}



// FUNCTION 140a2807c FUN_140a2807c body=21 status=ok
// SIG undefined FUN_140a2807c(void)

void FUN_140a2807c(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_140a281ea();
  FUN_140d2ac68(uVar1);
  return;
}



// FUNCTION 140a28092 FUN_140a28092 body=191 status=ok
// SIG undefined FUN_140a28092(void)

longlong FUN_140a28092(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  undefined *puVar7;
  
  FUN_140a28152();
  lVar3 = *param_1;
  if (DAT_14cb7d270 != DAT_14cb7d29c) {
    uVar4 = (uint)((ulonglong)lVar3 >> 0x10);
    uVar6 = (uint)lVar3 & 0xffff;
    puVar7 = &DAT_14cb7d2a0;
    if (DAT_14cb7d2a8 != (undefined *)0x0) {
      puVar7 = DAT_14cb7d2a8;
    }
    iVar2 = *(int *)(puVar7 + (ulonglong)
                              (DAT_14cb7d2b0 - 1U &
                              (int)((ulonglong)lVar3 >> 0x20) + ((uint)lVar3 << 0x10 | uVar6) +
                              (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar6 >> 4)) * 4);
    while (iVar2 != -1) {
      plVar1 = (longlong *)(DAT_14cb7d268 + (longlong)iVar2 * 0x18);
      if (*plVar1 == lVar3) {
        if (plVar1 + 1 != (longlong *)0x0 && plVar1 != (longlong *)0x0) {
          return plVar1[1];
        }
        break;
      }
      iVar2 = (int)plVar1[2];
    }
  }
  lVar5 = DAT_14cb7d260;
  if (lVar3 != 0) {
    lVar5 = 0;
  }
  return lVar5;
}



// FUNCTION 140a28152 FUN_140a28152 body=152 status=ok
// SIG undefined FUN_140a28152(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140a28152(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb7d2b8) {
    FUN_144b3d300(&DAT_14cb7d2b8);
    if (DAT_14cb7d2b8 == -1) {
      DAT_14cb7d288 = 0;
      DAT_14cb7d290 = 0;
      DAT_14cb7d268 = 0;
      _DAT_14cb7d270 = 0;
      _DAT_14cb7d294 = 0xffffffff00000080;
      DAT_14cb7d29c = 0;
      DAT_14cb7d2a8 = 0;
      DAT_14cb7d2b0 = 0;
      atexit(FUN_143d46643);
      _Init_thread_footer(&DAT_14cb7d2b8);
      return;
    }
  }
  return;
}



// FUNCTION 140a281ea FUN_140a281ea body=113 status=ok
// SIG undefined FUN_140a281ea(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140a281ea(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  puVar2 = DAT_14cb7d2c0;
  if (DAT_14cb7d2c0 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)FUN_140595974(0x3c80,0);
    lVar4 = 0xf;
    puVar1 = puVar2;
    do {
      puVar3 = puVar1 + 0x79;
      *puVar1 = puVar3;
      lVar4 = lVar4 + -1;
      puVar1 = puVar3;
    } while (lVar4 != 0);
    *puVar3 = DAT_14cb7d2c0;
    DAT_14cb7d2c8 = DAT_14cb7d2c8 + 0x10;
  }
  DAT_14cb7d2c0 = (undefined8 *)*puVar2;
  _DAT_14cb7d2cc = _DAT_14cb7d2cc + 1;
  return;
}



// FUNCTION 140a28262 FUN_140a28262 body=57 status=ok
// SIG undefined FUN_140a28262(void)

void FUN_140a28262(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb22fe8 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb22fe8 = FUN_140002ddd(FUN_14643c096,uVar1,L"GpsTest_Angle");
  }
  return;
}



// FUNCTION 140a2829c FUN_140a2829c body=185 status=ok
// SIG undefined FUN_140a2829c(void)

void FUN_140a2829c(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  ulonglong *puVar2;
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cc18);
  local_1c = 1;
  puVar2 = (ulonglong *)param_2[1];
  puVar1 = (undefined4 *)*puVar2 + 1;
  if ((undefined4 *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_1c,4);
    }
    else {
      thunk_FUN_14572512c(param_2,&local_1c);
    }
  }
  else {
    local_1c = *(undefined4 *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  FUN_1448332aa(param_2,&DAT_149e3cc18);
  FUN_140a28356(param_2,param_1 + 0x10);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a28356 FUN_140a28356 body=245 status=ok
// SIG undefined FUN_140a28356(void)

longlong * FUN_140a28356(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  ulonglong *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [44];
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_2c = (int)param_2[1];
  puVar2 = (ulonglong *)param_1[1];
  piVar1 = (int *)*puVar2 + 1;
  if ((int *)puVar2[1] < piVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_2c,4);
    }
    else {
      thunk_FUN_14572512c(param_1,&local_2c);
    }
  }
  else {
    local_2c = *(int *)*puVar2;
    *puVar2 = (ulonglong)piVar1;
  }
  if (-1 < local_2c) {
    if (*(int *)((longlong)param_2 + 0xc) < local_2c) {
      FUN_140836c88(param_2);
    }
    FUN_14008dbc8(param_2,local_2c,1);
    if (0 < local_2c) {
      lVar3 = 0;
      lVar4 = 0;
      do {
        FUN_140a2844e(param_1,*param_2 + lVar3);
        lVar4 = lVar4 + 1;
        lVar3 = lVar3 + 8;
      } while (lVar4 < local_2c);
    }
    if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(local_2c);
}



// FUNCTION 140a2844e FUN_140a2844e body=147 status=ok
// SIG undefined FUN_140a2844e(void)

void FUN_140a2844e(longlong param_1,longlong *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *param_2;
  FUN_140a2860c();
  if ((*(byte *)(param_1 + 0x28) & 1) != 0) {
    plVar4 = (longlong *)FUN_140a284e2(*(undefined8 *)(param_1 + 0x98),&local_20);
    puVar2 = (undefined8 *)*plVar4;
    puVar3 = (undefined8 *)*param_2;
    if (puVar3 != puVar2) {
      *param_2 = (longlong)puVar2;
      if (puVar2 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(puVar2 + 1) = *(int *)(puVar2 + 1) + 1;
        UNLOCK();
      }
      if (puVar3 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(puVar3 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if ((*piVar1 == 0) && (*(int *)((longlong)puVar3 + 0xc) == 0)) {
          (**(code **)*puVar3)(puVar3,1);
        }
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a284e2 FUN_140a284e2 body=297 status=ok
// SIG undefined FUN_140a284e2(void)

undefined8 * FUN_140a284e2(longlong param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  int iVar6;
  undefined1 auStack_68 [32];
  ulonglong local_48;
  undefined8 *local_40;
  ulonglong *local_38;
  undefined8 **local_30;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar2 = *param_2;
  if (*(int *)(param_1 + 0x110) != *(int *)(param_1 + 0x13c)) {
    uVar3 = ((uint)(uVar2 >> 0x14) & 0xffff ^ (uint)(uVar2 >> 4)) * -0x7a143595;
    uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    lVar4 = param_1 + 0x140;
    if (*(longlong *)(param_1 + 0x148) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x148);
    }
    iVar6 = *(int *)(lVar4 + (ulonglong)(*(int *)(param_1 + 0x150) - 1U & (uVar3 >> 0x10 ^ uVar3)) *
                             4);
    if (iVar6 != -1) {
      do {
        puVar1 = (ulonglong *)(*(longlong *)(param_1 + 0x108) + (longlong)iVar6 * 0x18);
        if (*puVar1 == uVar2) {
          if ((puVar1 != (ulonglong *)0x0) &&
             (puVar5 = (undefined8 *)puVar1[1], puVar5 != (undefined8 *)0x0)) goto LAB_140a285d3;
          break;
        }
        iVar6 = (int)puVar1[2];
      } while (iVar6 != -1);
    }
  }
  puVar5 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar5 = &PTR_FUN_149f48dd0;
  puVar5[1] = uVar2;
  if (uVar2 != 0) {
    LOCK();
    *(int *)(uVar2 + 8) = *(int *)(uVar2 + 8) + 1;
    UNLOCK();
  }
  local_30 = &local_40;
  local_38 = &local_48;
  local_48 = uVar2;
  local_40 = puVar5;
  FUN_1400496ee((longlong *)(param_1 + 0x108),local_24,&local_38,0);
LAB_140a285d3:
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar5 + 1;
}



// FUNCTION 140a2860c FUN_140a2860c body=1047 status=ok
// SIG undefined FUN_140a2860c(void)

void FUN_140a2860c(longlong param_1,ulonglong *param_2)

{
  uint *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined4 *puVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  ulonglong *puVar8;
  longlong *plVar9;
  uint uVar10;
  int iVar11;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  uint local_4c;
  ulonglong *local_48;
  uint *local_40;
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar9 = *(longlong **)(param_1 + 0x90);
  puVar8 = (ulonglong *)plVar9[1];
  puVar1 = (uint *)*puVar8 + 1;
  if ((uint *)puVar8[1] < puVar1) {
    local_48 = (ulonglong *)CONCAT44(local_48._4_4_,(uint)(*param_2 != 0));
    (**(code **)(*plVar9 + 0x170))(plVar9,&local_48,4);
    uVar10 = (uint)local_48;
    if (1 < (uint)local_48) {
      FUN_14572541c(plVar9);
      uVar10 = (uint)local_48;
    }
  }
  else {
    uVar10 = *(uint *)*puVar8;
    *puVar8 = (ulonglong)puVar1;
  }
  if (uVar10 == 0) {
    *param_2 = 0;
    goto LAB_140a28767;
  }
  plVar9 = *(longlong **)(param_1 + 0x90);
  if ((*(byte *)(plVar9 + 5) & 1) == 0) {
    if (((*(byte *)(plVar9 + 5) & 4) != 0) || ((*(byte *)((longlong)plVar9 + 0x2b) & 8) != 0)) {
      local_58 = *param_2;
      lVar3 = *(longlong *)(param_1 + 0x98);
      if (*(int *)(lVar3 + 0x18) != *(int *)(lVar3 + 0x44)) {
        uVar10 = ((uint)(local_58 >> 0x14) & 0xffff ^ (uint)(local_58 >> 4)) * -0x7a143595;
        uVar10 = (uVar10 >> 0xd ^ uVar10) * -0x3d4d51cb;
        lVar7 = lVar3 + 0x48;
        if (*(longlong *)(lVar3 + 0x50) != 0) {
          lVar7 = *(longlong *)(lVar3 + 0x50);
        }
        iVar6 = *(int *)(lVar7 + (ulonglong)
                                 (*(int *)(lVar3 + 0x58) - 1U & (uVar10 >> 0x10 ^ uVar10)) * 4);
        if (iVar6 != -1) {
          lVar7 = *(longlong *)(lVar3 + 0x10);
          iVar11 = iVar6;
          do {
            if (*(ulonglong *)(lVar7 + (longlong)iVar11 * 0x18) == local_58) goto LAB_140a28937;
            iVar11 = *(int *)(lVar7 + (longlong)iVar11 * 0x18 + 0x10);
          } while (iVar11 != -1);
        }
      }
      FUN_14042e8e0(lVar3 + 0x60,&local_48,&local_58,0);
      local_4c = *(uint *)(*(longlong *)(param_1 + 0x98) + 0xb0);
      *(uint *)(*(longlong *)(param_1 + 0x98) + 0xb0) = local_4c + 1;
      local_40 = &local_4c;
      local_48 = &local_58;
      FUN_1467c4600(*(longlong *)(param_1 + 0x98) + 0x10,local_34,&local_48,0);
      plVar9 = *(longlong **)(param_1 + 0x90);
      puVar8 = (ulonglong *)plVar9[1];
      puVar1 = (uint *)*puVar8 + 1;
      if ((uint *)puVar8[1] < puVar1) {
        if ((*(byte *)((longlong)plVar9 + 0x2a) & 2) == 0) {
          (**(code **)(*plVar9 + 0x170))(plVar9,&local_4c,4);
        }
        else {
          thunk_FUN_14572512c(plVar9,&local_4c);
        }
      }
      else {
        local_4c = *(uint *)*puVar8;
        *puVar8 = (ulonglong)puVar1;
      }
      plVar9 = (longlong *)*param_2;
      plVar5 = (longlong *)FUN_14004c990(param_1,plVar9);
      if (plVar5 != (longlong *)0x0) {
        *param_2 = (ulonglong)plVar5;
        plVar9 = plVar5;
      }
      (**(code **)(*plVar9 + 0xf0))(plVar9,param_1);
      FUN_146ca4900(*(longlong *)(param_1 + 0x98) + 0x60,local_58);
    }
    goto LAB_140a28767;
  }
  puVar8 = (ulonglong *)plVar9[1];
  puVar1 = (uint *)*puVar8 + 1;
  if ((uint *)puVar8[1] < puVar1) {
    if ((*(byte *)((longlong)plVar9 + 0x2a) & 2) == 0) {
      (**(code **)(*plVar9 + 0x170))(plVar9,&local_4c,4);
    }
    else {
      thunk_FUN_14572512c(plVar9,&local_4c);
    }
  }
  else {
    local_4c = *(uint *)*puVar8;
    *puVar8 = (ulonglong)puVar1;
  }
  if (-1 < (int)local_4c) {
    iVar6 = local_4c + 1;
    plVar9 = *(longlong **)(param_1 + 0x98);
    iVar11 = (int)plVar9[1];
    uVar10 = iVar6 - iVar11;
    if (uVar10 != 0 && iVar11 <= iVar6) {
      *(int *)(plVar9 + 1) = iVar6;
      if ((uint)(*(int *)((longlong)plVar9 + 0xc) - iVar11) < uVar10) {
        FUN_1456bd870(plVar9);
      }
      memset((void *)((longlong)iVar11 * 8 + *plVar9),0,(ulonglong)uVar10 << 3);
      if ((int)local_4c < 0) goto LAB_140a2879f;
      plVar9 = *(longlong **)(param_1 + 0x98);
      iVar11 = (int)plVar9[1];
    }
    if ((int)local_4c < iVar11) {
      uVar2 = *(ulonglong *)(*plVar9 + (ulonglong)local_4c * 8);
      if (uVar2 == 0) {
        plVar9 = (longlong *)*param_2;
        plVar5 = (longlong *)FUN_14004c990(param_1,plVar9);
        if (plVar5 != (longlong *)0x0) {
          *param_2 = (ulonglong)plVar5;
          plVar9 = plVar5;
        }
        (**(code **)(*plVar9 + 0xf0))(plVar9,param_1);
        local_58 = *param_2;
        local_40 = &local_4c;
        *(ulonglong *)(**(longlong **)(param_1 + 0x98) + (longlong)(int)local_4c * 8) = local_58;
        local_48 = &local_58;
        FUN_14004a1c4(*(longlong *)(param_1 + 0x98) + 0x10,local_34,&local_48,0);
      }
      else {
        *param_2 = uVar2;
      }
      goto LAB_140a28767;
    }
  }
LAB_140a2879f:
  FUN_1468216ba(*(undefined8 *)(param_1 + 0x90));
LAB_140a28767:
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
  while (iVar6 = (int)puVar8[2], iVar6 != -1) {
LAB_140a28937:
    puVar8 = (ulonglong *)(lVar7 + (longlong)iVar6 * 0x18);
    if (*puVar8 == local_58) goto LAB_140a28982;
  }
  puVar8 = (ulonglong *)0x0;
LAB_140a28982:
  puVar4 = *(undefined4 **)plVar9[1];
  if ((undefined4 *)((undefined8 *)plVar9[1])[1] < puVar4 + 1) {
    if ((*(byte *)((longlong)plVar9 + 0x2a) & 2) == 0) {
      (**(code **)(*plVar9 + 0x170))(plVar9,puVar8 + 1,4);
    }
    else {
      thunk_FUN_14572512c();
    }
  }
  else {
    *(undefined4 *)(puVar8 + 1) = *puVar4;
    *(longlong *)plVar9[1] = *(longlong *)plVar9[1] + 4;
  }
  goto LAB_140a28767;
}



// FUNCTION 140a28a24 FUN_140a28a24 body=499 status=ok
// SIG undefined FUN_140a28a24(void)

void FUN_140a28a24(longlong param_1,longlong *param_2)

{
  float *pfVar1;
  ulonglong *puVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_58 [40];
  float local_30 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14004c296(local_30,*(undefined1 *)(param_1 + 0x1c));
  FUN_14004b8ea(param_1,param_2);
  lVar4 = 0;
  do {
    local_30[0] = (float)*(double *)(param_1 + 0x20 + lVar4 * 8);
    puVar2 = (ulonglong *)param_2[1];
    pfVar1 = (float *)*puVar2 + 1;
    if ((float *)puVar2[1] < pfVar1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,local_30,4);
      }
      else {
        thunk_FUN_14572512c(param_2,local_30);
      }
    }
    else {
      local_30[0] = *(float *)*puVar2;
      *puVar2 = (ulonglong)pfVar1;
    }
    *(double *)(param_1 + 0x20 + lVar4 * 8) = (double)local_30[0];
    lVar4 = lVar4 + 1;
  } while (lVar4 != 3);
  lVar4 = 0;
  do {
    local_30[0] = (float)*(double *)(param_1 + 0x38 + lVar4 * 8);
    puVar2 = (ulonglong *)param_2[1];
    pfVar1 = (float *)*puVar2 + 1;
    if ((float *)puVar2[1] < pfVar1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,local_30,4);
      }
      else {
        thunk_FUN_14572512c(param_2,local_30);
      }
    }
    else {
      local_30[0] = *(float *)*puVar2;
      *puVar2 = (ulonglong)pfVar1;
    }
    *(double *)(param_1 + 0x38 + lVar4 * 8) = (double)local_30[0];
    lVar4 = lVar4 + 1;
  } while (lVar4 != 3);
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e31250);
  iVar3 = FUN_1448332aa(param_2,&DAT_149e31250);
  if (0x24 < iVar3) {
    local_30[0] = (float)*(double *)(param_1 + 0x10);
    puVar2 = (ulonglong *)param_2[1];
    pfVar1 = (float *)*puVar2 + 1;
    if ((float *)puVar2[1] < pfVar1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,local_30,4);
      }
      else {
        thunk_FUN_14572512c(param_2,local_30);
      }
    }
    else {
      local_30[0] = *(float *)*puVar2;
      *puVar2 = (ulonglong)pfVar1;
    }
    *(double *)(param_1 + 0x10) = (double)local_30[0];
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a28c18 FUN_140a28c18 body=142 status=ok
// SIG undefined FUN_140a28c18(void)

void FUN_140a28c18(longlong param_1,undefined4 *param_2,longlong param_3,byte *param_4)

{
  byte bVar1;
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_3 == 0) {
    param_3 = FUN_140bc13b4(param_4,*(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xe0),
                            *(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xe8));
  }
  else if (param_4 == (byte *)0x0) {
    param_4 = (byte *)(*(int *)(param_1 + 0x44) + param_3);
  }
  local_30 = *param_2;
  uStack_2c = param_2[1];
  uStack_28 = param_2[2];
  uStack_24 = param_2[3];
  bVar1 = FUN_140a28ca8(param_3,*(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xe8));
  *param_4 = *param_4 | bVar1;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a28ca8 FUN_140a28ca8 body=916 status=ok
// SIG undefined FUN_140a28ca8(void)

undefined8 FUN_140a28ca8(ulonglong param_1,undefined8 param_2,uint *param_3)

{
  longlong *plVar1;
  int *piVar2;
  uint *_Dst;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  longlong *plVar13;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  ulonglong local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = param_2;
  if ((*(longlong *)(param_3 + 2) != 0) && (param_3[1] != 0)) {
    uVar4 = *param_3;
    uVar8 = 0;
    if (((int)uVar4 < 0) || (DAT_14c9647dc <= (int)uVar4)) goto LAB_140a28f21;
    plVar6 = (longlong *)
             ((ulonglong)((uVar4 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8));
    if ((((plVar6 != (longlong *)0x0) && (*(uint *)(plVar6 + 2) == param_3[1])) &&
        ((*(uint *)(plVar6 + 1) & 0x10200000) == 0)) &&
       ((*plVar6 != 0 &&
        (lVar7 = FUN_1400796d0(*(undefined8 *)(*plVar6 + 0x10),*(longlong *)(param_3 + 2),1),
        lVar7 != 0)))) {
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14c963d60);
      if (DAT_14c963d90 == DAT_14c963dbc) {
        FUN_140f9708a(&DAT_14c9647b8,&PTR_PTR_14c75ecc8);
      }
      uVar4 = ((uint)(param_1 >> 0x14) & 0xffff ^ (uint)(param_1 >> 4)) * -0x7a143595;
      uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
      local_40 = param_1;
      uVar8 = FUN_140a2903e(uVar4 >> 0x10 ^ uVar4);
      uVar4 = (uint)((ulonglong)param_2 >> 0x10);
      uVar11 = (uint)param_2 & 0xffff;
      plVar6 = (longlong *)
               FUN_140a294e4(uVar8,((uint)param_2 << 0x10 | uVar11) +
                                   (int)((ulonglong)param_2 >> 0x20) +
                                   (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar11 >> 4));
      if (*plVar6 == 0) {
        plVar9 = (longlong *)FUN_14001cc68(0x20,0x10);
        plVar9[1] = (longlong)&DAT_100000001;
        *plVar9 = (longlong)&PTR_FUN_149eae1a0;
        plVar9[2] = 0;
        plVar9[3] = 0;
        if (plVar9 == (longlong *)0x0) {
          *plVar6 = 0x10;
          plVar13 = (longlong *)plVar6[1];
          if (plVar13 != (longlong *)0x0) {
            plVar6[1] = 0;
LAB_140a28fc6:
            LOCK();
            plVar1 = plVar13 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*plVar13)(plVar13);
              LOCK();
              piVar2 = (int *)((longlong)plVar13 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar13 + 0x10))(plVar13);
              }
            }
            if (plVar9 != (longlong *)0x0) goto LAB_140a28e54;
          }
        }
        else {
          LOCK();
          *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
          UNLOCK();
          *plVar6 = (longlong)(plVar9 + 2);
          plVar13 = (longlong *)plVar6[1];
          if (plVar9 == plVar13) {
            LOCK();
            plVar13 = plVar9 + 1;
            *(int *)plVar13 = (int)*plVar13 + -1;
            UNLOCK();
            if ((int)*plVar13 == 0) {
              (**(code **)*plVar9)(plVar9);
              LOCK();
              piVar2 = (int *)((longlong)plVar9 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar9 + 0x10))(plVar9);
              }
            }
          }
          else {
            plVar6[1] = (longlong)plVar9;
            if (plVar13 != (longlong *)0x0) goto LAB_140a28fc6;
          }
LAB_140a28e54:
          LOCK();
          plVar13 = plVar9 + 1;
          *(int *)plVar13 = (int)*plVar13 + -1;
          UNLOCK();
          if ((int)*plVar13 == 0) {
            (**(code **)*plVar9)(plVar9);
            LOCK();
            piVar2 = (int *)((longlong)plVar9 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar9 + 0x10))(plVar9);
            }
          }
        }
      }
      plVar6 = (longlong *)*plVar6;
      local_40 = *(ulonglong *)param_3;
      local_38 = *(undefined8 *)(param_3 + 2);
      FUN_1403350f6(plVar6);
      iVar5 = (int)plVar6[1];
      if (0 < iVar5) {
        lVar7 = 0;
        bVar10 = false;
        do {
          while( true ) {
            lVar3 = *plVar6;
            _Dst = (uint *)(lVar3 + lVar7 * 0x10);
            if (((*(longlong *)(lVar3 + 8 + lVar7 * 0x10) != 0) && (_Dst[1] != 0)) &&
               ((uVar4 = *_Dst, -1 < (int)uVar4 &&
                (((((int)uVar4 < DAT_14c9647dc &&
                   (plVar9 = (longlong *)
                             ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8)),
                   plVar9 != (longlong *)0x0)) && (*(uint *)(plVar9 + 2) == _Dst[1])) &&
                 (((*(uint *)(plVar9 + 1) >> 0x1c & 1) == 0 && (*plVar9 != 0)))))))) break;
            iVar12 = ~(uint)lVar7 + iVar5;
            if (iVar12 != 0) {
              if (0 < iVar12) {
                iVar12 = 1;
              }
              memmove(_Dst,(void *)(lVar3 + (longlong)(iVar5 - iVar12) * 0x10),(longlong)iVar12 << 4
                     );
              iVar5 = (int)plVar6[1];
            }
            iVar5 = iVar5 + -1;
            *(int *)(plVar6 + 1) = iVar5;
            bVar10 = true;
            if (iVar5 <= lVar7) goto LAB_140a28f89;
          }
          lVar7 = lVar7 + 1;
        } while (lVar7 < iVar5);
        if (bVar10) {
LAB_140a28f89:
          FUN_1400bbcfc(plVar6);
        }
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14c963d60);
      uVar8 = 1;
      goto LAB_140a28f21;
    }
  }
  uVar8 = 0;
LAB_140a28f21:
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8;
}



// FUNCTION 140a2903e FUN_140a2903e body=1188 status=ok
// SIG undefined FUN_140a2903e(void)

longlong FUN_140a2903e(uint param_1,longlong *param_2)

{
  longlong *_Src;
  void *_Dst;
  uint uVar1;
  int iVar2;
  longlong lVar3;
  undefined *puVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  longlong *plVar8;
  ulonglong uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  undefined1 auStack_a8 [32];
  longlong local_88 [11];
  
  iVar10 = DAT_14c963db8;
  iVar12 = DAT_14c963d90;
  local_88[10] = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (DAT_14c963d90 != DAT_14c963dbc) {
    puVar4 = &DAT_14c963dc0;
    if (DAT_14c963dc8 != (undefined *)0x0) {
      puVar4 = DAT_14c963dc8;
    }
    iVar2 = *(int *)(puVar4 + (ulonglong)(DAT_14c963dd0 - 1U & param_1) * 4);
    if (iVar2 != -1) {
      do {
        lVar3 = DAT_14c963d88 + (longlong)iVar2 * 0x60;
        if (*(longlong *)(DAT_14c963d88 + (longlong)iVar2 * 0x60) == *param_2) {
          if (lVar3 != 0) goto LAB_140a292f5;
          break;
        }
        iVar2 = *(int *)(lVar3 + 0x58);
      } while (iVar2 != -1);
    }
  }
  if (DAT_14c963dbc == 0) {
    iVar10 = DAT_14c963d90 + 1;
    bVar13 = DAT_14c963d94 == DAT_14c963d90;
    DAT_14c963d90 = iVar10;
    if (bVar13) {
      FUN_14488f93c(&DAT_14c963d88,iVar12);
    }
    iVar10 = DAT_14c963db0;
    if (DAT_14c963db0 == 0) {
      iVar2 = -1;
    }
    else {
      iVar2 = DAT_14c963db0 + 0x1e;
      if (-1 < DAT_14c963db0 + -1) {
        iVar2 = DAT_14c963db0 + -1;
      }
      iVar2 = iVar2 >> 5;
    }
    iVar7 = DAT_14c963db0 + 1;
    iVar11 = DAT_14c963db0 + 0x1f;
    if (-1 < DAT_14c963db0) {
      iVar11 = DAT_14c963db0;
    }
    if (iVar11 >> 5 != iVar2) {
      if (DAT_14c963db4 <= DAT_14c963db0) {
        if (DAT_14c963db0 + 0x20U < 0xa0) {
          DAT_14c963db4 = 0x80;
        }
        else {
          uVar1 = DAT_14c963db0 + 0x20U >> 5;
          if (DAT_14c963db4 + 0x1fU < 0xa0) {
            uVar6 = 4;
            if (4 < uVar1) {
              uVar6 = uVar1;
            }
          }
          else {
            uVar6 = (uVar1 * 3 >> 3) + uVar1 + 0x10;
          }
          uVar9 = FUN_144a3809e(uVar6 << 2,0);
          iVar2 = (int)(uVar9 >> 2);
          DAT_14c963db4 = -0x20;
          if ((int)uVar1 <= iVar2) {
            DAT_14c963db4 = iVar2 << 5;
          }
        }
        FUN_1446efbd8(&DAT_14c963d98,DAT_14c963db0);
        iVar7 = DAT_14c963db0 + 1;
      }
      iVar2 = iVar7 + 0x1f;
      if (-1 < iVar7) {
        iVar2 = iVar7;
      }
      if (iVar7 % 0x20 != 0) {
        puVar4 = &DAT_14c963d98;
        if (DAT_14c963da8 != (undefined *)0x0) {
          puVar4 = DAT_14c963da8;
        }
        bVar5 = -(char)(iVar7 % 0x20);
        DAT_14c963db0 = iVar7;
        *(uint *)(puVar4 + (longlong)(iVar2 >> 5) * 4) =
             (uint)(*(int *)(puVar4 + (longlong)(iVar2 >> 5) * 4) << (bVar5 & 0x1f)) >>
             (bVar5 & 0x1f);
        iVar7 = DAT_14c963db0;
      }
    }
    DAT_14c963db0 = iVar7;
    lVar3 = (longlong)iVar12;
    puVar4 = &DAT_14c963d98;
    if (DAT_14c963da8 != (undefined *)0x0) {
      puVar4 = DAT_14c963da8;
    }
    bVar5 = (byte)iVar10 & 0x1f;
    *(uint *)(puVar4 + (longlong)(iVar11 >> 5) * 4) =
         *(uint *)(puVar4 + (longlong)(iVar11 >> 5) * 4) &
         (-2 << bVar5 | 0xfffffffeU >> 0x20 - bVar5);
  }
  else {
    lVar3 = (longlong)DAT_14c963db8;
    DAT_14c963db8 = *(int *)(DAT_14c963d88 + 4 + lVar3 * 0x60);
    DAT_14c963dbc = DAT_14c963dbc + -1;
    iVar12 = iVar10;
    if (DAT_14c963dbc != 0) {
      *(undefined4 *)(DAT_14c963d88 + (longlong)DAT_14c963db8 * 0x60) = 0xffffffff;
    }
  }
  iVar10 = 1;
  puVar4 = &DAT_14c963d98;
  if (DAT_14c963da8 != (undefined *)0x0) {
    puVar4 = DAT_14c963da8;
  }
  iVar2 = iVar12 + 0x1f;
  if (-1 < iVar12) {
    iVar2 = iVar12;
  }
  *(uint *)(puVar4 + (longlong)(iVar2 >> 5) * 4) =
       *(uint *)(puVar4 + (longlong)(iVar2 >> 5) * 4) | 1 << ((byte)iVar12 & 0x1f);
  _Src = (longlong *)(DAT_14c963d88 + lVar3 * 0x60);
  local_88[4] = 0;
  local_88[7] = 0;
  local_88[2] = 0;
  local_88[3] = 0;
  local_88[0] = 0;
  local_88[1] = 0;
  local_88[5] = 0x8000000000;
  local_88[6] = 0xffffffff;
  plVar8 = (longlong *)(DAT_14c963d88 + lVar3 * 0x60);
  *plVar8 = *param_2;
  plVar8[5] = 0;
  *(undefined4 *)(plVar8 + 6) = 0;
  plVar8[1] = 0;
  plVar8[2] = 0;
  *(undefined8 *)((longlong)plVar8 + 0x34) = 0xffffffff00000080;
  *(undefined4 *)((longlong)plVar8 + 0x3c) = 0;
  if (plVar8 + 1 != local_88) {
    *(undefined4 *)(_Src + 3) = 0;
    *(undefined4 *)((longlong)_Src + 0x1c) = 0;
    *(undefined4 *)(_Src + 4) = 0;
    *(undefined4 *)((longlong)_Src + 0x24) = 0;
    local_88[5] = 0;
  }
  *(undefined4 *)(_Src + 8) = 0;
  _Src[9] = 0;
  local_88[8] = 0;
  *(undefined4 *)(_Src + 10) = 0;
  local_88[9] = 0;
  FUN_14007efaa();
  *(undefined4 *)(_Src + 0xb) = 0xffffffff;
  uVar1 = DAT_14c963d90 - DAT_14c963dbc;
  if (uVar1 != 1) {
    if (DAT_14c963d90 != DAT_14c963dbc) {
      puVar4 = &DAT_14c963dc0;
      if (DAT_14c963dc8 != (undefined *)0x0) {
        puVar4 = DAT_14c963dc8;
      }
      iVar2 = *(int *)(puVar4 + (ulonglong)(DAT_14c963dd0 - 1U & param_1) * 4);
      if (iVar2 != -1) {
        do {
          _Dst = (void *)(DAT_14c963d88 + (longlong)iVar2 * 0x60);
          if (*(longlong *)(DAT_14c963d88 + (longlong)iVar2 * 0x60) == *_Src) {
            *(undefined4 *)((longlong)_Dst + 0x50) = 0;
            if (*(longlong *)((longlong)_Dst + 0x48) != 0) {
              FUN_1400020a8();
            }
            FUN_14007efaa((longlong)_Dst + 8);
            memmove(_Dst,_Src,0x58);
            FUN_14007efe2(&DAT_14c963d88,iVar12,1);
            goto LAB_140a292cd;
          }
          iVar2 = *(int *)((longlong)_Dst + 0x58);
        } while (iVar2 != -1);
      }
    }
    if (3 < uVar1) {
      uVar9 = (ulonglong)(uVar1 & 0xfffffffe) + 0xf;
      lVar3 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      iVar10 = 1 << ((byte)lVar3 & 0x1f);
    }
  }
  if (((int)uVar1 < 1) || (iVar10 <= DAT_14c963dd0)) {
    param_1 = DAT_14c963dd0 - 1U & param_1;
    *(uint *)((longlong)_Src + 0x5c) = param_1;
    puVar4 = DAT_14c963dc8;
    if (DAT_14c963dc8 == (undefined *)0x0) {
      puVar4 = &DAT_14c963dc0;
    }
    *(undefined4 *)(_Src + 0xb) =
         *(undefined4 *)(puVar4 + ((longlong)DAT_14c963dd0 - 1U & (longlong)(int)param_1) * 4);
    puVar4 = DAT_14c963dc8;
    if (DAT_14c963dc8 == (undefined *)0x0) {
      puVar4 = &DAT_14c963dc0;
    }
    *(int *)(puVar4 + ((longlong)DAT_14c963dd0 - 1U & (longlong)(int)param_1) * 4) = iVar12;
  }
  else {
    DAT_14c963dd0 = iVar10;
    FUN_140a29b1a();
  }
LAB_140a292cd:
  lVar3 = DAT_14c963d88 + (longlong)iVar12 * 0x60;
LAB_140a292f5:
  if ((local_88[10] ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + 8;
}



// FUNCTION 140a294e4 FUN_140a294e4 body=1589 status=ok
// SIG undefined FUN_140a294e4(void)

longlong FUN_140a294e4(longlong *param_1,uint param_2,longlong *param_3)

{
  int *piVar1;
  uint *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  uint uVar13;
  longlong *plVar14;
  longlong lVar15;
  ulonglong uVar16;
  byte bVar17;
  int iVar18;
  uint *puVar19;
  uint uVar20;
  int iVar21;
  int iVar22;
  longlong *plVar23;
  ulonglong uVar24;
  int iVar25;
  ulonglong uVar26;
  int iVar27;
  longlong lVar28;
  uint uVar29;
  
  iVar27 = (int)param_1[1];
  iVar25 = *(int *)((longlong)param_1 + 0x34);
  if (iVar27 != iVar25) {
    plVar14 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar14 = (longlong *)param_1[8];
    }
    iVar12 = *(int *)((longlong)plVar14 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar12 != -1) {
      do {
        lVar15 = *param_1 + (longlong)iVar12 * 0x20;
        if (*(longlong *)(*param_1 + (longlong)iVar12 * 0x20) == *param_3) {
          if (lVar15 != 0) goto LAB_140a2990d;
          break;
        }
        iVar12 = *(int *)(lVar15 + 0x18);
      } while (iVar12 != -1);
    }
  }
  if (iVar25 == 0) {
    *(int *)(param_1 + 1) = iVar27 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar27) {
      FUN_1447711aa(param_1,iVar27);
    }
    iVar25 = (int)param_1[5];
    if (iVar25 == 0) {
      iVar12 = -1;
    }
    else {
      iVar12 = iVar25 + 0x1e;
      if (-1 < iVar25 + -1) {
        iVar12 = iVar25 + -1;
      }
      iVar12 = iVar12 >> 5;
    }
    plVar14 = param_1 + 2;
    iVar18 = iVar25 + 1;
    iVar21 = iVar25 + 0x1f;
    if (-1 < iVar25) {
      iVar21 = iVar25;
    }
    if (iVar21 >> 5 == iVar12) {
      *(int *)(param_1 + 5) = iVar18;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar25) {
        if (iVar25 + 0x20U < 0xa0) {
          iVar18 = 0x80;
          iVar12 = iVar25;
        }
        else {
          uVar20 = iVar25 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar13 = 4;
            if (4 < uVar20) {
              uVar13 = uVar20;
            }
          }
          else {
            uVar13 = (uVar20 * 3 >> 3) + uVar20 + 0x10;
          }
          uVar16 = FUN_144a3809e(uVar13 << 2,0);
          iVar12 = (int)(uVar16 >> 2);
          iVar18 = -0x20;
          if ((int)uVar20 <= iVar12) {
            iVar18 = iVar12 << 5;
          }
          iVar12 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar18;
        FUN_1446efbd8(plVar14,iVar12);
        iVar18 = (int)param_1[5] + 1;
      }
      iVar12 = iVar18 + 0x1f;
      if (-1 < iVar18) {
        iVar12 = iVar18;
      }
      *(int *)(param_1 + 5) = iVar18;
      if (iVar18 % 0x20 != 0) {
        plVar23 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar23 = plVar14;
        }
        bVar17 = -(char)(iVar18 % 0x20);
        *(uint *)((longlong)plVar23 + (longlong)(iVar12 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar23 + (longlong)(iVar12 >> 5) * 4) << (bVar17 & 0x1f)) >>
             (bVar17 & 0x1f);
      }
    }
    lVar15 = (longlong)iVar27;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar14 = (longlong *)param_1[4];
    }
    bVar17 = (byte)iVar25 & 0x1f;
    puVar2 = (uint *)((longlong)plVar14 + (longlong)(iVar21 >> 5) * 4);
    *puVar2 = *puVar2 & (-2 << bVar17 | 0xfffffffeU >> 0x20 - bVar17);
  }
  else {
    iVar27 = (int)param_1[6];
    lVar15 = (longlong)iVar27;
    iVar12 = *(int *)(*param_1 + 4 + lVar15 * 0x20);
    *(int *)(param_1 + 6) = iVar12;
    *(int *)((longlong)param_1 + 0x34) = iVar25 + -1;
    if (iVar25 + -1 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar12 * 0x20) = 0xffffffff;
    }
  }
  puVar2 = (uint *)(param_1 + 2);
  puVar19 = (uint *)param_1[4];
  if ((uint *)param_1[4] == (uint *)0x0) {
    puVar19 = puVar2;
  }
  iVar25 = iVar27 + 0x1f;
  if (-1 < iVar27) {
    iVar25 = iVar27;
  }
  puVar19[iVar25 >> 5] = puVar19[iVar25 >> 5] | 1 << ((byte)iVar27 & 0x1f);
  uVar20 = 1;
  lVar28 = *param_1;
  lVar15 = lVar15 * 0x20;
  puVar3 = (undefined4 *)(lVar28 + lVar15);
  lVar6 = *param_3;
  *(longlong *)(lVar28 + lVar15) = lVar6;
  puVar5 = (undefined8 *)(lVar28 + 8 + lVar15);
  *puVar5 = 0;
  puVar5[1] = 0;
  *(undefined4 *)(lVar28 + 0x18 + lVar15) = 0xffffffff;
  uVar13 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (1 < uVar13) {
    plVar14 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar14 = (longlong *)param_1[8];
    }
    iVar25 = *(int *)((longlong)plVar14 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar25 != -1) {
      do {
        puVar4 = (undefined4 *)(*param_1 + (longlong)iVar25 * 0x20);
        if (*(longlong *)(*param_1 + (longlong)iVar25 * 0x20) == lVar6) {
          plVar14 = *(longlong **)(puVar4 + 4);
          if (plVar14 != (longlong *)0x0) {
            LOCK();
            plVar23 = plVar14 + 1;
            *(int *)plVar23 = (int)*plVar23 + -1;
            UNLOCK();
            if ((int)*plVar23 == 0) {
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
          uVar8 = *puVar3;
          uVar9 = puVar3[1];
          uVar10 = puVar3[2];
          uVar11 = puVar3[3];
          *(undefined8 *)(puVar4 + 4) = *(undefined8 *)(puVar3 + 4);
          *puVar4 = uVar8;
          puVar4[1] = uVar9;
          puVar4[2] = uVar10;
          puVar4[3] = uVar11;
          FUN_140819bac(param_1,iVar27);
          goto LAB_140a298fc;
        }
        iVar25 = puVar4[6];
      } while (iVar25 != -1);
    }
  }
  if (3 < uVar13) {
    uVar16 = (ulonglong)(uVar13 & 0xfffffffe) + 0xf;
    lVar15 = 0x3f;
    if (uVar16 != 0) {
      for (; uVar16 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    uVar20 = 1 << ((byte)lVar15 & 0x1f);
  }
  if (((int)uVar13 < 1) || ((int)uVar20 <= (int)param_1[9])) {
    param_2 = (int)param_1[9] - 1U & param_2;
    puVar3[7] = param_2;
    plVar14 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar14 = param_1 + 7;
    }
    puVar3[6] = *(undefined4 *)
                 ((longlong)plVar14 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)param_2) * 4)
    ;
    plVar14 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar14 = param_1 + 7;
    }
    *(int *)((longlong)plVar14 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)param_2) * 4) =
         iVar27;
    goto LAB_140a298fc;
  }
  *(uint *)(param_1 + 9) = uVar20;
  plVar14 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar14,0,0,4);
    uVar20 = *(uint *)(param_1 + 9);
  }
  plVar23 = param_1 + 7;
  if (uVar20 == 1) {
    if (*plVar14 != 0) {
      FUN_1446efa72(plVar14,0,0,4);
    }
LAB_140a296b4:
    uVar13 = 0;
    do {
      plVar14 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar14 = plVar23;
      }
      *(undefined4 *)((longlong)plVar14 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar13) * 4) =
           0xffffffff;
      uVar13 = uVar13 + 1;
    } while (uVar20 != uVar13);
  }
  else {
    if (uVar20 == 0) goto LAB_140a298fc;
    FUN_1446efa72(plVar14,0,uVar20,4);
    if (0 < (int)uVar20) goto LAB_140a296b4;
  }
  iVar25 = (int)param_1[5];
  if (iVar25 == 0) {
    uVar16 = 0;
    uVar24 = 1;
    iVar12 = 0;
    iVar18 = 0;
  }
  else {
    puVar19 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar19 = puVar2;
    }
    uVar20 = *puVar19;
    if (uVar20 == 0) {
      iVar12 = iVar25 + 0x1e;
      if (-1 < iVar25 + -1) {
        iVar12 = iVar25 + -1;
      }
      uVar16 = 0;
      uVar24 = (ulonglong)(uint)(iVar12 >> 5);
      if (iVar12 >> 5 < 1) {
        uVar24 = uVar16;
      }
      iVar18 = 0;
      do {
        if (uVar24 == uVar16) goto LAB_140a298fc;
        iVar18 = iVar18 + 0x20;
        uVar20 = puVar19[uVar16 + 1];
        uVar16 = uVar16 + 1;
      } while (uVar20 == 0);
    }
    else {
      uVar16 = 0;
      iVar18 = 0;
    }
    uVar24 = (ulonglong)(-uVar20 & uVar20);
    uVar26 = uVar24 * 2 + 1;
    lVar15 = 0x3f;
    if (uVar26 != 0) {
      for (; uVar26 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    iVar12 = (iVar18 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
    if (iVar25 <= iVar12) {
      iVar12 = iVar25;
    }
  }
  if (iVar12 < iVar25) {
    uVar20 = 0xffffffff;
    do {
      lVar15 = *param_1;
      lVar28 = (longlong)iVar12 * 0x20;
      uVar7 = *(undefined8 *)(lVar15 + lVar28);
      uVar13 = (uint)((ulonglong)uVar7 >> 0x10);
      uVar29 = (uint)uVar7 & 0xffff;
      uVar26 = (longlong)
               (int)(((uint)uVar7 << 0x10 | uVar29) + (int)((ulonglong)uVar7 >> 0x20) +
                     (uVar13 << 0x13 | uVar13 & 0xffff) + (uVar29 >> 4)) &
               (longlong)(int)param_1[9] - 1U;
      iVar25 = (int)uVar26;
      *(int *)(lVar15 + 0x1c + lVar28) = iVar25;
      plVar14 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar14 = plVar23;
      }
      *(undefined4 *)(lVar15 + 0x18 + lVar28) =
           *(undefined4 *)((longlong)plVar14 + ((longlong)(int)param_1[9] - 1U & uVar26) * 4);
      plVar14 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar14 = plVar23;
      }
      *(int *)((longlong)plVar14 + ((longlong)iVar25 & (longlong)(int)param_1[9] - 1U) * 4) = iVar12
      ;
      uVar20 = ~(uint)uVar24 & uVar20;
      puVar19 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar19 = puVar2;
      }
      iVar25 = (int)param_1[5];
      iVar12 = (int)uVar16;
      lVar15 = (longlong)iVar12;
      uVar13 = puVar19[lVar15] & uVar20;
      if (uVar13 == 0) {
        iVar21 = iVar25 + 0x1e;
        if (-1 < iVar25 + -1) {
          iVar21 = iVar25 + -1;
        }
        iVar21 = iVar21 >> 5;
        iVar22 = iVar21;
        if (iVar21 < iVar12) {
          iVar22 = iVar12;
        }
        if (iVar21 <= iVar12) break;
        lVar28 = 0;
        while( true ) {
          iVar18 = iVar18 + 0x20;
          uVar13 = puVar19[lVar15 + lVar28 + 1];
          if (uVar13 != 0) break;
          lVar28 = lVar28 + 1;
          if (iVar22 - lVar15 == lVar28) goto LAB_140a298fc;
        }
        uVar16 = (ulonglong)(iVar12 + (int)lVar28 + 1);
        uVar20 = 0xffffffff;
      }
      uVar24 = (ulonglong)(-uVar13 & uVar13);
      uVar26 = uVar24 * 2 + 1;
      lVar15 = 0x3f;
      if (uVar26 != 0) {
        for (; uVar26 >> lVar15 == 0; lVar15 = lVar15 + -1) {
        }
      }
      iVar12 = (iVar18 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
    } while (iVar12 < iVar25);
  }
LAB_140a298fc:
  lVar15 = *param_1 + (longlong)iVar27 * 0x20;
LAB_140a2990d:
  return lVar15 + 8;
}



// FUNCTION 140a29b1a FUN_140a29b1a body=620 status=ok
// SIG undefined FUN_140a29b1a(void)

void FUN_140a29b1a(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  ulonglong uVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  ulonglong uVar12;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  undefined *local_50;
  undefined8 local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (DAT_14c963dc8 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14c963dc8,0,0,4);
  }
  uVar4 = DAT_14c963dd0;
  if (DAT_14c963dd0 != 0) {
    FUN_144a1cbf0(&DAT_14c963dc0,0,DAT_14c963dd0,4);
    if (0 < (int)uVar4) {
      uVar2 = 0;
      do {
        puVar6 = DAT_14c963dc8;
        if (DAT_14c963dc8 == (undefined *)0x0) {
          puVar6 = &DAT_14c963dc0;
        }
        *(undefined4 *)(puVar6 + (ulonglong)(DAT_14c963dd0 + 0x7fffffff & uVar2) * 4) = 0xffffffff;
        uVar2 = uVar2 + 1;
      } while (uVar4 != uVar2);
    }
    local_58 = 0x100000000;
    local_50 = &DAT_14c963d98;
    local_48 = 0xffffffff;
    local_40 = 0;
    if (DAT_14c963db0 == 0) {
      uVar7 = 1;
      local_48._0_4_ = 0xffffffff;
      local_48._4_4_ = 0;
      local_58._0_4_ = 0;
    }
    else {
      FUN_1449c0562(&local_58);
      uVar7 = local_58 >> 0x20;
    }
    iVar3 = (int)local_58;
    uVar4 = (uint)local_48;
    iVar5 = local_48._4_4_;
    iVar8 = local_40;
    if (local_48._4_4_ < *(int *)(local_50 + 0x18)) {
      do {
        lVar10 = DAT_14c963d88;
        lVar9 = (longlong)iVar5 * 0x60;
        uVar2 = ((uint)(*(ulonglong *)(DAT_14c963d88 + lVar9) >> 0x14) & 0xffff ^
                (uint)(*(ulonglong *)(DAT_14c963d88 + lVar9) >> 4)) * -0x7a143595;
        uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
        uVar12 = (longlong)(int)(uVar2 >> 0x10 ^ uVar2) & (longlong)(int)DAT_14c963dd0 - 1U;
        iVar11 = (int)uVar12;
        *(int *)(DAT_14c963d88 + 0x5c + lVar9) = iVar11;
        puVar6 = DAT_14c963dc8;
        if (DAT_14c963dc8 == (undefined *)0x0) {
          puVar6 = &DAT_14c963dc0;
        }
        *(undefined4 *)(lVar10 + 0x58 + lVar9) =
             *(undefined4 *)(puVar6 + ((longlong)(int)DAT_14c963dd0 - 1U & uVar12) * 4);
        puVar6 = DAT_14c963dc8;
        if (DAT_14c963dc8 == (undefined *)0x0) {
          puVar6 = &DAT_14c963dc0;
        }
        *(int *)(puVar6 + ((longlong)iVar11 & (longlong)(int)DAT_14c963dd0 - 1U) * 4) = iVar5;
        uVar4 = ~(uint)uVar7 & uVar4;
        puVar6 = *(undefined **)(local_50 + 0x10);
        if (*(undefined **)(local_50 + 0x10) == (undefined *)0x0) {
          puVar6 = local_50;
        }
        iVar11 = *(int *)(local_50 + 0x18);
        lVar10 = (longlong)iVar3;
        uVar2 = *(uint *)(puVar6 + lVar10 * 4) & uVar4;
        if (uVar2 == 0) {
          iVar5 = iVar11 + 0x1e;
          if (-1 < iVar11 + -1) {
            iVar5 = iVar11 + -1;
          }
          iVar5 = iVar5 >> 5;
          iVar1 = iVar5;
          if (iVar5 < iVar3) {
            iVar1 = iVar3;
          }
          if (iVar5 <= iVar3) break;
          lVar9 = 0;
          while( true ) {
            iVar8 = iVar8 + 0x20;
            uVar2 = *(uint *)(puVar6 + lVar9 * 4 + lVar10 * 4 + 4);
            if (uVar2 != 0) break;
            lVar9 = lVar9 + 1;
            if (iVar1 - lVar10 == lVar9) goto LAB_140a29d41;
          }
          iVar3 = iVar3 + (int)lVar9 + 1;
          uVar4 = 0xffffffff;
        }
        uVar7 = (ulonglong)(-uVar2 & uVar2);
        uVar12 = uVar7 * 2 + 1;
        lVar10 = 0x3f;
        if (uVar12 != 0) {
          for (; uVar12 >> lVar10 == 0; lVar10 = lVar10 + -1) {
          }
        }
        iVar5 = (iVar8 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
      } while (iVar5 < iVar11);
    }
  }
LAB_140a29d41:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a29d88 FUN_140a29d88 body=294 status=ok
// SIG undefined FUN_140a29d88(void)

void FUN_140a29d88(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  undefined1 local_68 [24];
  longlong local_50;
  undefined8 local_40;
  longlong *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar6 = (longlong *)FUN_140094282();
  FUN_1447a97f4(local_68,param_4);
  local_40 = *param_3;
  local_38 = (longlong *)param_3[1];
  if (local_38 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_38 + 1) = (int)local_38[1] + 1;
    UNLOCK();
  }
  local_30 = 0xffffffff;
  iVar4 = (int)plVar6[1];
  *(uint *)(plVar6 + 1) = iVar4 + 1U;
  if (*(uint *)((longlong)plVar6 + 0xc) < iVar4 + 1U) {
    FUN_140a29eb0(plVar6,iVar4);
  }
  lVar5 = *plVar6;
  lVar7 = (longlong)iVar4 * 0x40;
  *(undefined8 *)(lVar5 + lVar7) = 0;
  ((undefined8 *)(lVar5 + lVar7))[1] = 0;
  *(undefined4 *)(lVar5 + 0x10 + lVar7) = 0;
  puVar3 = (undefined8 *)(lVar5 + 0x18 + lVar7);
  *puVar3 = 0;
  puVar3[1] = 0;
  FUN_1404e49fa(lVar5 + lVar7,local_68);
  plVar6 = local_38;
  *(undefined8 *)(lVar5 + 0x28 + lVar7) = local_40;
  *(longlong **)(lVar5 + 0x30 + lVar7) = local_38;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_38 + 1) = (int)local_38[1] + 1;
    UNLOCK();
  }
  *(undefined4 *)(lVar5 + lVar7 + 0x38) = local_30;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_38 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a29eb0 FUN_140a29eb0 body=255 status=ok
// SIG undefined FUN_140a29eb0(void)

void FUN_140a29eb0(longlong param_1,int param_2)

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



// FUNCTION 140a29fb0 FUN_140a29fb0 body=91 status=ok
// SIG undefined FUN_140a29fb0(void)

undefined8 FUN_140a29fb0(longlong *param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_1 != (longlong *)0x0) {
    uVar1 = FUN_140a2a00c();
    plVar2 = (longlong *)(**(code **)(*param_1 + 0x288))(param_1,uVar1);
    if (plVar2 != (longlong *)0x0) {
      uVar1 = FUN_140a2a00c();
      plVar3 = (longlong *)FUN_144718840(plVar2,uVar1);
      if ((plVar2 != plVar3) && (plVar3 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000140a29fff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar1 = (**(code **)(*plVar3 + 0x10))(plVar3);
        return uVar1;
      }
    }
  }
  return 0;
}



// FUNCTION 140a2a00c FUN_140a2a00c body=228 status=ok
// SIG undefined FUN_140a2a00c(void)

longlong FUN_140a2a00c(void)

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
  if (DAT_14cb57330 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_14863f12f;
    local_40 = FUN_1464bc042;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/GbxGame",L"AIDodger",&DAT_14cb57330,&DAT_14863f12e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb57330;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a2a0f2 FUN_140a2a0f2 body=15 status=ok
// SIG undefined FUN_140a2a0f2(void)

bool FUN_140a2a0f2(longlong param_1)

{
  return 0.0 < *(float *)(param_1 + 0x34);
}



// FUNCTION 140a2a102 FUN_140a2a102 body=287 status=ok
// SIG undefined FUN_140a2a102(void)

undefined8 FUN_140a2a102(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_b8 [32];
  undefined1 *local_98;
  undefined1 local_90 [24];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  double local_68;
  float local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_4 == (longlong *)0x0) {
    FUN_141422764(param_1);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_50 ^ (ulonglong)auStack_b8);
  }
  lVar1 = param_4[0x39];
  if (lVar1 == 0) {
    local_68 = (double)DAT_14c8464f0;
    local_78 = (undefined4)DAT_14c8464e0;
    uStack_74 = DAT_14c8464e0._4_4_;
    uStack_70 = (undefined4)DAT_14c8464e8;
    uStack_6c = DAT_14c8464e8._4_4_;
    uVar2 = (undefined4)DAT_14c8464f0;
    uVar3 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
  }
  else {
    local_78 = *(undefined4 *)(lVar1 + 0x260);
    uStack_74 = *(undefined4 *)(lVar1 + 0x264);
    uStack_70 = *(undefined4 *)(lVar1 + 0x268);
    uStack_6c = *(undefined4 *)(lVar1 + 0x26c);
    uVar2 = (undefined4)*(undefined8 *)(lVar1 + 0x270);
    uVar3 = (undefined4)((ulonglong)*(undefined8 *)(lVar1 + 0x270) >> 0x20);
  }
  (**(code **)(*param_4 + 0x528))(param_4,local_90,&local_54);
  local_68 = (double)CONCAT44(uVar3,uVar2) - (double)local_54;
  (**(code **)(*param_4 + 0x328))(param_4,local_90);
  local_98 = local_90;
  FUN_140a2a224(param_1,param_2,param_3,&local_78);
  if ((local_50 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a2a224 FUN_140a2a224 body=678 status=ok
// SIG undefined FUN_140a2a224(void)

undefined8
FUN_140a2a224(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 *param_4,
             undefined4 *param_5)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  undefined4 local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  wchar_t *local_c8;
  undefined1 *local_c0;
  undefined1 *local_b8;
  code **local_b0;
  undefined1 *local_a8;
  code *local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  double local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 local_50;
  float local_44;
  code *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (param_2 != (longlong *)0x0) {
    lVar3 = FUN_1447210f0(param_2);
    if (lVar3 != 0) {
      local_50 = 0;
      uVar6 = 0;
      if ((*(longlong *)(lVar3 + 0x30) != 0) &&
         (plVar1 = *(longlong **)(*(longlong *)(lVar3 + 0x30) + 0x2b0), plVar1 != (longlong *)0x0))
      {
        if (*(code **)(*plVar1 + 0x660) == FUN_1449fb17e) {
          if ((*(byte *)((longlong)plVar1 + 0x39e) & 1) == 0) {
            if ((*(byte *)((longlong)plVar1 + 0x39e) & 2) == 0) {
              if (DAT_14caf84d0 == 0) {
                local_b0 = &local_40;
                local_40 = FUN_1449e2820;
                local_a0 = FUN_14081d0ea;
                local_a8 = &LAB_145a62952;
                local_b8 = &LAB_147c8cd45;
                local_c0 = &LAB_1461468ae;
                local_c8 = L"Engine";
                local_d0 = 0;
                local_d8 = 0x10000006;
                local_e0 = 8;
                local_e8 = 0x218;
                FUN_14081cfa3(L"/Script/Engine",L"PhysicsSettings",&DAT_14caf84d0,FUN_1463f75b4);
              }
              lVar2 = DAT_14caf84d0;
              lVar3 = *(longlong *)(DAT_14caf84d0 + 0x110);
              if (lVar3 == 0) {
                FUN_140aa6c08(DAT_14caf84d0);
                lVar3 = *(longlong *)(lVar2 + 0x110);
              }
              puVar4 = (undefined4 *)(lVar3 + 0x38);
            }
            else {
              puVar4 = (undefined4 *)((longlong)plVar1 + 0x41c);
            }
            uVar6 = *puVar4;
            *(undefined4 *)(plVar1 + 0x83) = uVar6;
          }
          else {
            uVar6 = (undefined4)plVar1[0x83];
          }
        }
        else {
          uVar6 = (**(code **)(*plVar1 + 0x660))(plVar1);
        }
      }
      local_50 = CONCAT44(local_50._4_4_,uVar6);
      lVar3 = param_2[0x39];
      if (lVar3 == 0) {
        puVar5 = &DAT_14c8464e0;
        uVar6 = (undefined4)DAT_14c8464f0;
        uVar7 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
      }
      else {
        uVar6 = (undefined4)*(undefined8 *)(lVar3 + 0x270);
        uVar7 = (undefined4)((ulonglong)*(undefined8 *)(lVar3 + 0x270) >> 0x20);
        puVar5 = (undefined8 *)(lVar3 + 0x260);
      }
      local_98 = *(undefined4 *)puVar5;
      uStack_94 = *(undefined4 *)((longlong)puVar5 + 4);
      uStack_90 = *(undefined4 *)(puVar5 + 1);
      uStack_8c = *(undefined4 *)((longlong)puVar5 + 0xc);
      local_88 = CONCAT44(uVar7,uVar6);
      local_80 = *param_4;
      uStack_78 = param_4[1];
      local_70 = (double)param_4[2];
      local_68 = *param_5;
      uStack_64 = param_5[1];
      uStack_60 = param_5[2];
      uStack_5c = param_5[3];
      local_58 = *(undefined8 *)(param_5 + 4);
      (**(code **)(*param_2 + 0x528))(param_2,&local_40,&local_44);
      local_70 = (double)local_44 + local_70;
      FUN_14125d732(param_3,param_1,&local_98);
      if ((local_38 ^ (ulonglong)auStack_108) == DAT_14c707940) {
        return param_1;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
  }
  FUN_141422764(param_1);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_108);
}



// FUNCTION 140a2a4d0 FUN_140a2a4d0 body=125 status=ok
// SIG undefined FUN_140a2a4d0(void)

double * FUN_140a2a4d0(double *param_1,double *param_2)

{
  float fVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  float fVar6;
  double dVar7;
  
  fVar1 = *(float *)(param_1 + 6);
  fVar6 = *(float *)((longlong)param_1 + 0x34);
  if (fVar6 <= 0.0) {
    fVar6 = 0.0;
  }
  dVar2 = param_1[5];
  dVar7 = (double)fVar6;
  dVar3 = param_1[4];
  dVar4 = param_1[2];
  dVar5 = param_1[1];
  *param_2 = dVar7 * param_1[3] + 0.0 + *param_1;
  param_2[1] = dVar3 * dVar7 + 0.0 + dVar5;
  param_2[2] = dVar7 * 0.0 + (double)(fVar1 * 0.5 * fVar6 * fVar6 + (float)dVar2 * fVar6) + dVar4;
  return param_2;
}



// FUNCTION 140a2a54e FUN_140a2a54e body=125 status=ok
// SIG undefined FUN_140a2a54e(void)

double * FUN_140a2a54e(double *param_1,double *param_2,float param_3)

{
  float fVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  if (*(float *)((longlong)param_1 + 0x34) <= param_3) {
    param_3 = *(float *)((longlong)param_1 + 0x34);
  }
  if (param_3 <= 0.0) {
    param_3 = 0.0;
  }
  fVar1 = *(float *)(param_1 + 6);
  dVar2 = param_1[5];
  dVar6 = (double)param_3;
  dVar3 = param_1[4];
  dVar4 = param_1[2];
  dVar5 = param_1[1];
  *param_2 = dVar6 * param_1[3] + 0.0 + *param_1;
  param_2[1] = dVar3 * dVar6 + 0.0 + dVar5;
  param_2[2] = dVar6 * 0.0 + (double)(fVar1 * 0.5 * param_3 * param_3 + (float)dVar2 * param_3) +
               dVar4;
  return param_2;
}



// FUNCTION 140a2a5cc FUN_140a2a5cc body=797 status=ok
// SIG undefined FUN_140a2a5cc(void)

void * FUN_140a2a5cc(char *param_1,void *param_2,longlong param_3,undefined8 param_4,
                    longlong param_5)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  uint uVar6;
  undefined1 *puVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_158 [32];
  undefined8 *local_138;
  undefined4 local_130;
  undefined4 *local_128;
  undefined8 *local_120;
  undefined1 *local_118;
  undefined8 local_108;
  longlong local_100;
  undefined1 local_f8 [32];
  undefined4 local_d8;
  undefined8 local_d4;
  float local_cc;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined1 local_b8;
  undefined2 local_b7;
  undefined1 local_b5;
  undefined4 local_b4;
  undefined1 local_b0;
  undefined4 local_ac;
  undefined1 local_a8;
  undefined4 local_a4;
  undefined2 local_a0;
  longlong local_78;
  undefined8 local_70;
  undefined1 local_68 [16];
  undefined1 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  cVar1 = *param_1;
  if (cVar1 == '\x02') {
    local_d8 = 2;
    local_d4 = CONCAT44(local_d4._4_4_,*(undefined4 *)(param_1 + 0x20));
  }
  else if (cVar1 == '\x01') {
    local_cc = (float)*(double *)(param_1 + 0x18);
    local_d8 = 1;
    local_d4 = CONCAT44((float)*(double *)(param_1 + 0x10),(float)*(double *)(param_1 + 8));
  }
  else if (cVar1 == '\x03') {
    local_d4 = *(undefined8 *)(param_1 + 0x24);
    local_d8 = 3;
  }
  else {
    local_d8 = 0;
  }
  local_a4 = 0;
  local_c0 = 0;
  local_a0 = 0x101;
  local_78 = 0;
  local_70 = 0x800000000;
  local_58 = (undefined1 *)0x0;
  local_50 = 0x400000000;
  local_b8 = 0;
  local_ac = 0;
  local_c8 = DAT_14cb246a8;
  local_b7 = 1;
  local_b5 = 0;
  local_a8 = 0;
  local_b4 = 0x1000000;
  local_b0 = 1;
  lVar11 = *(longlong *)(param_5 + 0x40);
  if (*(longlong *)(param_5 + 0x40) == 0) {
    lVar11 = param_5;
  }
  iVar2 = *(int *)(param_5 + 0x48);
  local_108 = param_4;
  local_100 = param_3;
  if ((longlong)iVar2 != 0) {
    lVar9 = 0;
    do {
      iVar3 = *(int *)(lVar11 + 4 + lVar9);
      if (((iVar3 != 0) && (uVar6 = *(uint *)(lVar11 + lVar9), -1 < (int)uVar6)) &&
         ((int)uVar6 < DAT_14c9647dc)) {
        plVar8 = (longlong *)
                 ((ulonglong)((uVar6 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8));
        if (((plVar8 != (longlong *)0x0) && ((int)plVar8[2] == iVar3)) &&
           (((*(uint *)(plVar8 + 1) & 0x10200000) == 0 && (*plVar8 != 0)))) {
          uVar4 = *(undefined4 *)(*plVar8 + 0xc);
          lVar10 = (longlong)(int)local_50;
          uVar6 = (int)local_50 + 1;
          local_50 = CONCAT44(local_50._4_4_,uVar6);
          if (local_50._4_4_ < uVar6) {
            FUN_1447de67e(local_68);
          }
          puVar7 = local_58;
          if (local_58 == (undefined1 *)0x0) {
            puVar7 = local_68;
          }
          *(undefined4 *)(puVar7 + lVar10 * 4) = uVar4;
        }
      }
      lVar9 = lVar9 + 8;
    } while ((longlong)iVar2 * 8 != lVar9);
  }
  memset(param_2,0,0x100);
  *(undefined4 *)((longlong)param_2 + 0xd0) = 0xffffffff;
  *(undefined4 *)((longlong)param_2 + 4) = 0x3f800000;
  *(undefined4 *)((longlong)param_2 + 0xa4) = 0xffffffff;
  *(undefined1 *)((longlong)param_2 + 0x100) = 0;
  FUN_140a2a8ea(param_1,local_f8);
  local_120 = &local_c8;
  local_128 = &local_d8;
  local_138 = &DAT_14c8463d0;
  local_130 = 2;
  local_118 = local_f8;
  uVar5 = FUN_14021655c(local_108,param_2,local_100,local_100 + 0x18);
  *(undefined1 *)((longlong)param_2 + 0x100) = uVar5;
  if (local_58 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a2a8ea FUN_140a2a8ea body=456 status=ok
// SIG undefined FUN_140a2a8ea(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140a2a8ea(longlong param_1,undefined8 *param_2)

{
  char *pcVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  undefined8 uVar13;
  longlong lVar14;
  longlong lVar15;
  ulonglong uVar16;
  undefined1 auVar17 [16];
  
  uVar13 = uRam000000014cad0ee8;
  bVar2 = *(byte *)(param_1 + 0x2e);
  param_2[2] = _DAT_14cad0ee0;
  param_2[3] = uVar13;
  uVar13 = _DAT_14cad0ed8;
  *param_2 = _DAT_14cad0ed0;
  param_2[1] = uVar13;
  auVar17 = pshufb(ZEXT116(bVar2),(undefined1  [16])0x0);
  lVar14 = 0;
  do {
    pcVar1 = (char *)((longlong)param_2 + lVar14);
    bVar5 = *pcVar1 == auVar17[0];
    bVar6 = pcVar1[1] == auVar17[1];
    bVar7 = pcVar1[2] == auVar17[2];
    bVar8 = pcVar1[3] == auVar17[3];
    bVar9 = pcVar1[4] == auVar17[4];
    bVar10 = pcVar1[5] == auVar17[5];
    bVar11 = pcVar1[6] == auVar17[6];
    bVar12 = pcVar1[7] == auVar17[7];
    if ((bool)(~bVar5 & 1)) {
      *(byte *)((longlong)param_2 + lVar14) = bVar2;
    }
    if ((bool)(~bVar6 & 1)) {
      *(byte *)((longlong)param_2 + lVar14 + 1) = bVar2;
    }
    if ((bool)(~bVar7 & 1)) {
      *(byte *)((longlong)param_2 + lVar14 + 2) = bVar2;
    }
    if ((bool)(~bVar8 & 1)) {
      *(byte *)((longlong)param_2 + lVar14 + 3) = bVar2;
    }
    if ((bool)(~bVar9 & 1)) {
      *(byte *)((longlong)param_2 + lVar14 + 4) = bVar2;
    }
    if ((bool)(~bVar10 & 1)) {
      *(byte *)((longlong)param_2 + lVar14 + 5) = bVar2;
    }
    if ((bool)(~bVar11 & 1)) {
      *(byte *)((longlong)param_2 + lVar14 + 6) = bVar2;
    }
    if ((bool)(~bVar12 & 1)) {
      *(byte *)((longlong)param_2 + lVar14 + 7) = bVar2;
    }
    if ((bool)(~bVar5 & 1)) {
      *(byte *)((longlong)param_2 + lVar14 + 8) = bVar2;
    }
    if ((bool)(~bVar6 & 1)) {
      *(byte *)((longlong)param_2 + lVar14 + 9) = bVar2;
    }
    if ((bool)(~bVar7 & 1)) {
      *(byte *)((longlong)param_2 + lVar14 + 10) = bVar2;
    }
    if ((bool)(~bVar8 & 1)) {
      *(byte *)((longlong)param_2 + lVar14 + 0xb) = bVar2;
    }
    if ((bool)(~bVar9 & 1)) {
      *(byte *)((longlong)param_2 + lVar14 + 0xc) = bVar2;
    }
    if ((bool)(~bVar10 & 1)) {
      *(byte *)((longlong)param_2 + lVar14 + 0xd) = bVar2;
    }
    if ((bool)(~bVar11 & 1)) {
      *(byte *)((longlong)param_2 + lVar14 + 0xe) = bVar2;
    }
    if ((bool)(~bVar12 & 1)) {
      *(byte *)((longlong)param_2 + lVar14 + 0xf) = bVar2;
    }
    lVar14 = lVar14 + 0x10;
  } while (lVar14 != 0x20);
  iVar4 = *(int *)(param_1 + 0x38);
  if ((longlong)iVar4 != 0) {
    lVar14 = *(longlong *)(param_1 + 0x30);
    lVar15 = 0;
    do {
      uVar16 = (ulonglong)*(byte *)(lVar14 + lVar15);
      if ((uVar16 < 0x20) &&
         (cVar3 = *(char *)(lVar14 + 1 + lVar15), *(char *)((longlong)param_2 + uVar16) != cVar3)) {
        *(char *)((longlong)param_2 + uVar16) = cVar3;
      }
      lVar15 = lVar15 + 2;
    } while ((longlong)iVar4 * 2 != lVar15);
  }
  return;
}



// FUNCTION 140a2aab2 FUN_140a2aab2 body=1426 status=ok
// SIG undefined FUN_140a2aab2(void)

bool FUN_140a2aab2(longlong *param_1)

{
  uint uVar1;
  char cVar2;
  char cVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  
  FUN_14087fa96();
  cVar3 = (char)param_1[0x24];
  do {
    cVar2 = cVar3;
    lVar4 = FUN_1447210f0(param_1[7]);
    if (lVar4 == 0) {
      *(undefined1 *)(param_1 + 0x24) = 5;
      return true;
    }
    switch((char)param_1[0x24]) {
    case '\x01':
      if ((longlong)(int)param_1[0x1c] != 0) {
        lVar4 = param_1[0x1b];
        lVar8 = (longlong)(int)param_1[0x1c] * 0x50;
        do {
          if (*(char *)(lVar4 + 0x40) == '\x01') {
            if ((*(char *)(lVar4 + 8) != '\0') ||
               (*(float *)(lVar4 + 0x34) <= *(float *)(lVar4 + 0x3c) &&
                *(float *)(lVar4 + 0x3c) != *(float *)(lVar4 + 0x34)))
            goto switchD_140a2aafe_caseD_5;
          }
          else if (((*(int *)(lVar4 + 0x18) != 0) &&
                   ((((uVar1 = *(uint *)(lVar4 + 0x14), -1 < (int)uVar1 &&
                      ((int)uVar1 < DAT_14c9647dc)) &&
                     (plVar7 = (longlong *)
                               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
                     plVar7 != (longlong *)0x0)) &&
                    (((int)plVar7[2] == *(int *)(lVar4 + 0x18) &&
                     ((*(uint *)(plVar7 + 1) & 0x10200000) == 0)))))) && (*plVar7 != 0)) {
            if ((*(int *)(lVar4 + 0x10) == 0) || (uVar1 = *(uint *)(lVar4 + 0xc), (int)uVar1 < 0)) {
LAB_140a2b02b:
              uVar6 = 0;
            }
            else {
              uVar6 = 0;
              if ((int)uVar1 < DAT_14c9647dc) {
                puVar5 = (undefined8 *)
                         ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
                if (((puVar5 == (undefined8 *)0x0) ||
                    (*(int *)(puVar5 + 2) != *(int *)(lVar4 + 0x10))) ||
                   ((*(uint *)(puVar5 + 1) & 0x10200000) != 0)) goto LAB_140a2b02b;
                uVar6 = *puVar5;
              }
            }
            cVar3 = FUN_14489e746(*plVar7,lVar4,uVar6,0);
            if (cVar3 != '\0') goto switchD_140a2aafe_caseD_5;
          }
          lVar4 = lVar4 + 0x50;
          lVar8 = lVar8 + -0x50;
        } while (lVar8 != 0);
      }
      (**(code **)(*param_1 + 0x98))(param_1);
      FUN_145763bda(param_1);
      *(undefined1 *)(param_1 + 0x24) = 2;
      FUN_145af8962(param_1);
      lVar4 = param_1[0x2c] + 0x228;
      uVar6 = 1;
      goto LAB_140a2afca;
    case '\x02':
      if ((longlong)(int)param_1[0x1c] != 0) {
        lVar4 = param_1[0x1b];
        lVar8 = (longlong)(int)param_1[0x1c] * 0x50;
        do {
          if (*(char *)(lVar4 + 0x40) == '\x01') {
            if ((*(char *)(lVar4 + 8) != '\0') ||
               (*(float *)(lVar4 + 0x34) <= *(float *)(lVar4 + 0x3c) &&
                *(float *)(lVar4 + 0x3c) != *(float *)(lVar4 + 0x34)))
            goto switchD_140a2aafe_caseD_5;
          }
          else if ((((*(int *)(lVar4 + 0x18) != 0) &&
                    ((uVar1 = *(uint *)(lVar4 + 0x14), -1 < (int)uVar1 &&
                     ((int)uVar1 < DAT_14c9647dc)))) &&
                   (plVar7 = (longlong *)
                             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
                   plVar7 != (longlong *)0x0)) &&
                  ((((int)plVar7[2] == *(int *)(lVar4 + 0x18) &&
                    ((*(uint *)(plVar7 + 1) & 0x10200000) == 0)) && (*plVar7 != 0)))) {
            if ((*(int *)(lVar4 + 0x10) == 0) || (uVar1 = *(uint *)(lVar4 + 0xc), (int)uVar1 < 0)) {
LAB_140a2affd:
              uVar6 = 0;
            }
            else {
              uVar6 = 0;
              if ((int)uVar1 < DAT_14c9647dc) {
                puVar5 = (undefined8 *)
                         ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
                if (((puVar5 == (undefined8 *)0x0) ||
                    (*(int *)(puVar5 + 2) != *(int *)(lVar4 + 0x10))) ||
                   ((*(uint *)(puVar5 + 1) & 0x10200000) != 0)) goto LAB_140a2affd;
                uVar6 = *puVar5;
              }
            }
            cVar3 = FUN_14489e746(*plVar7,lVar4,uVar6,0);
            if (cVar3 != '\0') goto switchD_140a2aafe_caseD_5;
          }
          lVar4 = lVar4 + 0x50;
          lVar8 = lVar8 + -0x50;
        } while (lVar8 != 0);
      }
      (**(code **)(*param_1 + 0xa0))(param_1);
      *(undefined1 *)(param_1 + 0x24) = 3;
      lVar4 = param_1[0x2c] + 0x378;
      uVar6 = 0;
LAB_140a2afca:
      FUN_1408838b6(param_1,lVar4,uVar6,1);
      break;
    case '\x03':
      if ((((*(int *)((longlong)param_1 + 0x16c) == 0) ||
           (uVar1 = *(uint *)(param_1 + 0x2d), (int)uVar1 < 0)) ||
          ((DAT_14c9647dc <= (int)uVar1 ||
           ((plVar7 = (longlong *)
                      ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
            plVar7 == (longlong *)0x0 || ((int)plVar7[2] != *(int *)((longlong)param_1 + 0x16c))))))
          ) || (((*(uint *)(plVar7 + 1) & 0x10200000) != 0 ||
                (((lVar4 = *plVar7, lVar4 == 0 || ((&DAT_00001100)[lVar4] != '\t')) ||
                 (*(float *)(lVar4 + 0x10f4) <= *(float *)(lVar4 + 0x10f8))))))) {
        lVar4 = FUN_14479d2ce();
        if (lVar4 != 0) {
          FUN_1409df526(lVar4,&DAT_14cb8ceb8);
        }
        *(undefined1 *)(param_1 + 0x24) = 4;
      }
      break;
    case '\x04':
      if ((longlong)(int)param_1[0x1c] != 0) {
        lVar4 = param_1[0x1b];
        lVar8 = (longlong)(int)param_1[0x1c] * 0x50;
        do {
          if (*(char *)(lVar4 + 0x40) == '\x01') {
            if ((*(char *)(lVar4 + 8) != '\0') ||
               (*(float *)(lVar4 + 0x34) <= *(float *)(lVar4 + 0x3c) &&
                *(float *)(lVar4 + 0x3c) != *(float *)(lVar4 + 0x34)))
            goto switchD_140a2aafe_caseD_5;
          }
          else if (((*(int *)(lVar4 + 0x18) != 0) &&
                   (((uVar1 = *(uint *)(lVar4 + 0x14), -1 < (int)uVar1 &&
                     ((int)uVar1 < DAT_14c9647dc)) &&
                    (plVar7 = (longlong *)
                              ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
                    plVar7 != (longlong *)0x0)))) &&
                  ((((int)plVar7[2] == *(int *)(lVar4 + 0x18) &&
                    ((*(uint *)(plVar7 + 1) & 0x10200000) == 0)) && (*plVar7 != 0)))) {
            if ((*(int *)(lVar4 + 0x10) == 0) || (uVar1 = *(uint *)(lVar4 + 0xc), (int)uVar1 < 0)) {
LAB_140a2afd7:
              uVar6 = 0;
            }
            else {
              uVar6 = 0;
              if ((int)uVar1 < DAT_14c9647dc) {
                puVar5 = (undefined8 *)
                         ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
                if (((puVar5 == (undefined8 *)0x0) ||
                    (*(int *)(puVar5 + 2) != *(int *)(lVar4 + 0x10))) ||
                   ((*(uint *)(puVar5 + 1) & 0x10200000) != 0)) goto LAB_140a2afd7;
                uVar6 = *puVar5;
              }
            }
            cVar3 = FUN_14489e746(*plVar7,lVar4,uVar6,0);
            if (cVar3 != '\0') goto switchD_140a2aafe_caseD_5;
          }
          lVar4 = lVar4 + 0x50;
          lVar8 = lVar8 + -0x50;
        } while (lVar8 != 0);
      }
      *(undefined1 *)(param_1 + 0x24) = 5;
      break;
    case '\x05':
      break;
    default:
      FUN_1408838b6(param_1,param_1[0x2c] + 0xd8,1,1);
      *(undefined1 *)(param_1 + 0x24) = 1;
    }
switchD_140a2aafe_caseD_5:
    cVar3 = (char)param_1[0x24];
    if ((char)param_1[0x24] == cVar2) {
      return cVar2 == '\x05';
    }
  } while( true );
}



// FUNCTION 140a2b044 FUN_140a2b044 body=160 status=ok
// SIG undefined FUN_140a2b044(void)

longlong FUN_140a2b044(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  
  if (DAT_14c96b460 != DAT_14c96b48c) {
    lVar2 = *param_1;
    uVar3 = (uint)((ulonglong)lVar2 >> 0x10);
    uVar4 = (uint)lVar2 & 0xffff;
    puVar6 = &DAT_14c96b490;
    if (DAT_14c96b498 != (undefined *)0x0) {
      puVar6 = DAT_14c96b498;
    }
    iVar5 = *(int *)(puVar6 + (ulonglong)
                              (DAT_14c96b4a0 - 1U &
                              (int)((ulonglong)lVar2 >> 0x20) + ((uint)lVar2 << 0x10 | uVar4) +
                              (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar4 >> 4)) * 4);
    if (iVar5 != -1) {
      while (plVar1 = (longlong *)(DAT_14c96b458 + (longlong)iVar5 * 0x18), *plVar1 != lVar2) {
        iVar5 = (int)plVar1[2];
        if (iVar5 == -1) {
          return 0;
        }
      }
      if (plVar1 != (longlong *)0x0) {
        if (plVar1 + 1 != (longlong *)0x0) {
          return plVar1[1];
        }
        return 0;
      }
      return 0;
    }
  }
  return 0;
}



// FUNCTION 140a2b0e4 FUN_140a2b0e4 body=284 status=ok
// SIG undefined FUN_140a2b0e4(void)

void FUN_140a2b0e4(longlong *param_1)

{
  double dVar1;
  double dVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  double *pdVar7;
  undefined1 auStack_78 [32];
  double local_58;
  double local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  cVar4 = (**(code **)(*param_1 + 0x708))();
  if (cVar4 != '\0') {
    lVar5 = FUN_144a782da(param_1 + 0x301,&DAT_14cb72620);
    if ((lVar5 != 0) && (0.0 < *(float *)(lVar5 + 0x2a4))) {
      if (-1 < *(char *)(lVar5 + 0x3b0)) {
        lVar6 = FUN_143cb8284(lVar5);
        if (*(char *)(lVar6 + 0x40) == '\x03') goto LAB_140a2b115;
      }
      plVar3 = (longlong *)param_1[0x78];
      if (plVar3 != (longlong *)0x0) {
        lVar6 = FUN_144a75eb4();
        if ((*(int *)(lVar6 + 0x38) <= *(int *)(plVar3[2] + 0x38)) &&
           (*(longlong *)(*(longlong *)(plVar3[2] + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
            lVar6 + 0x30)) {
          pdVar7 = (double *)FUN_1407726b2(lVar5);
          dVar1 = *pdVar7;
          dVar2 = pdVar7[1];
          (**(code **)(*plVar3 + 0x680))(plVar3,&local_58);
          plVar3[0xc2] = (longlong)(dVar1 - local_58);
          plVar3[0xc3] = (longlong)(dVar2 - local_50);
          plVar3[0xc4] = 0;
        }
      }
    }
  }
LAB_140a2b115:
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a2b202 FUN_140a2b202 body=54 status=ok
// SIG undefined FUN_140a2b202(void)

undefined1 FUN_140a2b202(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_140a2b238(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 140a2b238 FUN_140a2b238 body=215 status=ok
// SIG undefined FUN_140a2b238(void)

undefined8 ** FUN_140a2b238(undefined8 **param_1,undefined8 **param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined1 auStack_48 [40];
  undefined8 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != param_1) {
    puVar2 = param_2[1];
    if (DAT_14c950c29 == '\x01') {
      if (puVar2 == (undefined8 *)0x0) {
        puVar2 = (undefined8 *)0x0;
      }
      else {
        FUN_1456cec3c();
        puVar2 = param_2[1];
      }
    }
    param_1[1] = puVar2;
    plVar1 = *param_2;
    if (plVar1 == (longlong *)0x0) {
      local_20 = (undefined8 *)0x0;
    }
    else {
      (**(code **)(*plVar1 + 0x10))(plVar1,&local_20);
    }
    if (&local_20 != param_1) {
      puVar2 = *param_1;
      *param_1 = local_20;
      local_20 = (undefined8 *)0x0;
      if (puVar2 == (undefined8 *)0x0) goto LAB_140a2b2bc;
      (**(code **)*puVar2)(puVar2,1);
    }
    if (local_20 != (undefined8 *)0x0) {
      (**(code **)*local_20)(local_20,1);
    }
  }
LAB_140a2b2bc:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a2b310 FUN_140a2b310 body=1163 status=ok
// SIG undefined FUN_140a2b310(void)

undefined8 * FUN_140a2b310(longlong *param_1,undefined8 *param_2,longlong param_3)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined1 auStack_248 [32];
  undefined1 local_228 [128];
  double local_1a8;
  double local_1a0;
  double local_198;
  undefined8 local_190;
  double local_188;
  double local_180;
  double local_178;
  undefined8 local_170;
  double local_168;
  double local_160;
  double local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128 [17];
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_248;
  puVar9 = &DAT_14c846400;
  puVar10 = local_128;
  for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar10 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar10 = puVar10 + 1;
  }
  if (param_3 != 0) {
    lVar5 = (**(code **)(*param_1 + 0x308))(param_1);
    if (*(int *)(lVar5 + 0x98) != *(int *)(lVar5 + 0xc4)) {
      uVar2 = (uint)((ulonglong)param_3 >> 0x10);
      uVar7 = (uint)param_3 & 0xffff;
      lVar6 = lVar5 + 200;
      if (*(longlong *)(lVar5 + 0xd0) != 0) {
        lVar6 = *(longlong *)(lVar5 + 0xd0);
      }
      iVar4 = *(int *)(lVar6 + (ulonglong)
                               (*(int *)(lVar5 + 0xd8) - 1U &
                               (int)((ulonglong)param_3 >> 0x20) + ((uint)param_3 << 0x10 | uVar7) +
                               (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar7 >> 4)) * 4);
      if (iVar4 != -1) {
        do {
          plVar1 = (longlong *)(*(longlong *)(lVar5 + 0x90) + (longlong)iVar4 * 0x14);
          if (*plVar1 == param_3) {
            if (((plVar1 != (longlong *)0x0) && (plVar1 + 1 != (longlong *)0x0)) &&
               ((int)plVar1[1] != -1)) {
              (**(code **)(*param_1 + 0x340))(param_1,param_2);
                    /* WARNING: Subroutine does not return */
              FUN_144d8e3a0(local_a0 ^ (ulonglong)auStack_248);
            }
            break;
          }
          iVar4 = *(int *)((longlong)plVar1 + 0xc);
        } while (iVar4 != -1);
      }
    }
    lVar5 = (**(code **)(*param_1 + 0x3e0))(param_1,param_3);
    if (lVar5 != 0) {
      lVar3 = (**(code **)(*param_1 + 0x308))(param_1);
      lVar6 = *(longlong *)(lVar5 + 0x30);
      if ((lVar6 != 0) && (*(int *)(lVar3 + 0x98) != *(int *)(lVar3 + 0xc4))) {
        uVar2 = (uint)((ulonglong)lVar6 >> 0x10);
        uVar7 = (uint)lVar6 & 0xffff;
        lVar8 = lVar3 + 200;
        if (*(longlong *)(lVar3 + 0xd0) != 0) {
          lVar8 = *(longlong *)(lVar3 + 0xd0);
        }
        iVar4 = *(int *)(lVar8 + (ulonglong)
                                 (*(int *)(lVar3 + 0xd8) - 1U &
                                 (int)((ulonglong)lVar6 >> 0x20) + ((uint)lVar6 << 0x10 | uVar7) +
                                 (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar7 >> 4)) * 4);
        if (iVar4 != -1) {
          do {
            plVar1 = (longlong *)(*(longlong *)(lVar3 + 0x90) + (longlong)iVar4 * 0x14);
            if (*plVar1 == lVar6) {
              if (((plVar1 != (longlong *)0x0) && (plVar1 + 1 != (longlong *)0x0)) &&
                 (iVar4 = (int)plVar1[1], iVar4 != -1)) {
                dVar14 = *(double *)(lVar5 + 0x50) * 0.01745329238474369;
                dVar15 = *(double *)(lVar5 + 0x58) * 0.01745329238474369;
                dVar16 = *(double *)(lVar5 + 0x60) * 0.01745329238474369;
                dVar11 = sin(dVar14);
                dVar12 = sin(dVar15);
                dVar13 = sin(dVar16);
                sin(0.0);
                dVar14 = cos(dVar14);
                dVar15 = cos(dVar15);
                dVar16 = cos(dVar16);
                cos(0.0);
                local_1a8 = dVar14 * dVar15;
                local_1a0 = dVar12 * dVar14;
                local_190 = 0;
                local_188 = dVar11 * dVar13 * dVar15 - dVar12 * dVar16;
                local_180 = dVar11 * dVar13 * dVar12 + dVar15 * dVar16;
                local_178 = -dVar13 * dVar14;
                local_170 = 0;
                local_168 = -(dVar11 * dVar16 * dVar15 + dVar12 * dVar13);
                local_160 = dVar15 * dVar13 - dVar12 * dVar11 * dVar16;
                local_158 = dVar14 * dVar16;
                local_150 = 0;
                local_148 = *(undefined8 *)(lVar5 + 0x38);
                local_140 = *(undefined8 *)(lVar5 + 0x40);
                local_138 = *(undefined8 *)(lVar5 + 0x48);
                local_130 = 0x3ff0000000000000;
                local_198 = dVar11;
                (**(code **)(*param_1 + 0x340))(param_1,local_228,iVar4);
                FUN_1447fea8d(local_128,&local_1a8,local_228);
              }
              break;
            }
            iVar4 = *(int *)((longlong)plVar1 + 0xc);
          } while (iVar4 != -1);
        }
      }
    }
  }
  puVar9 = local_128;
  puVar10 = param_2;
  for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar10 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar10 = puVar10 + 1;
  }
  if ((local_a0 ^ (ulonglong)auStack_248) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 140a2b79e FUN_140a2b79e body=33 status=ok
// SIG undefined FUN_140a2b79e(void)

undefined8 * FUN_140a2b79e(longlong param_1,undefined8 *param_2,int param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)((longlong)param_3 * 0x80 + *(longlong *)(param_1 + 0x4f0));
  puVar3 = param_2;
  for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return param_2;
}



// FUNCTION 140a2b7c8 FUN_140a2b7c8 body=188 status=ok
// SIG undefined FUN_140a2b7c8(void)

undefined8 FUN_140a2b7c8(undefined8 param_1,longlong param_2)

{
  undefined7 uVar1;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  undefined7 extraout_var_01;
  undefined1 auStack_98 [40];
  undefined1 local_70 [40];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  longlong local_30;
  undefined8 uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar1 = (undefined7)(local_20 >> 8);
  if ((*(byte *)(param_2 + 0x28) & 4) == 0) {
    if ((*(byte *)(param_2 + 0x28) & 1) == 0) goto LAB_140a2b818;
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    local_30 = 0;
    uStack_28 = 0;
    FUN_14075f7c0(param_2,&local_48);
    FUN_1447a97f4(local_70,&local_48);
    FUN_14071d490(local_70,param_1);
    uVar1 = extraout_var_00;
  }
  else {
    FUN_14014e996(param_1,&local_48,1,0);
    FUN_14075f7c0(param_2,&local_48);
    uVar1 = extraout_var;
  }
  if (local_30 != 0) {
    FUN_1400020a8();
    uVar1 = extraout_var_01;
  }
LAB_140a2b818:
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return CONCAT71(uVar1,1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a2b886 FUN_140a2b886 body=277 status=ok
// SIG undefined FUN_140a2b886(void)

undefined4 FUN_140a2b886(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  undefined8 unaff_RSI;
  int iVar8;
  int iVar9;
  bool bVar10;
  undefined8 uVar7;
  
  lVar1 = *param_2;
  uVar7 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  uVar6 = (undefined4)uVar7;
  uVar3 = (uint)lVar1;
  iVar9 = (int)((ulonglong)lVar1 >> 0x20);
  uVar2 = (uint)((ulonglong)lVar1 >> 0x10);
  if ((lVar1 != 0) &&
     ((lVar1 != *(longlong *)(param_1 + 0x1800) ||
      (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x58) + 0x1b0) + 0x18) != lVar1)))) {
    if (*(int *)(param_1 + 0x1678) != *(int *)(param_1 + 0x16a4)) {
      lVar4 = param_1 + 0x16a8;
      if (*(longlong *)(param_1 + 0x16b0) != 0) {
        lVar4 = *(longlong *)(param_1 + 0x16b0);
      }
      iVar8 = *(int *)(lVar4 + (ulonglong)
                               (*(int *)(param_1 + 0x16b8) - 1U &
                               iVar9 + (uVar3 << 0x10 | uVar3 & 0xffff) +
                               (uVar2 << 0x13 | uVar2 & 0xffff) + ((uVar3 & 0xffff) >> 4)) * 4);
      if (iVar8 != -1) {
        do {
          bVar10 = *(longlong *)(*(longlong *)(param_1 + 0x1670) + (longlong)iVar8 * 0x10) == lVar1;
          uVar7 = CONCAT71((int7)((ulonglong)uVar7 >> 8),bVar10);
          uVar6 = (undefined4)uVar7;
          if (bVar10) break;
          iVar8 = *(int *)((longlong)iVar8 * 0x10 + *(longlong *)(param_1 + 0x1670) + 8);
        } while (iVar8 != -1);
        goto LAB_140a2b93c;
      }
    }
    uVar6 = 0;
  }
LAB_140a2b93c:
  puVar5 = (undefined1 *)
           FUN_140a2b99c(param_1 + 0x1710,
                         (uVar3 << 0x10 | uVar3 & 0xffff) + iVar9 + (uVar2 << 0x13 | uVar2 & 0xffff)
                         + ((uVar3 & 0xffff) >> 4),param_2);
  *puVar5 = (char)uVar6;
  return uVar6;
}



// FUNCTION 140a2b99c FUN_140a2b99c body=189 status=ok
// SIG undefined FUN_140a2b99c(void)

longlong * FUN_140a2b99c(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
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
        plVar2 = (longlong *)(*param_1 + (longlong)iVar1 * 0x14);
        if (*plVar2 == *param_3) {
          if (plVar2 != (longlong *)0x0) goto LAB_140a2ba3c;
          break;
        }
        iVar1 = *(int *)((longlong)plVar2 + 0xc);
      } while (iVar1 != -1);
    }
  }
  local_38 = 0;
  local_28 = param_3;
  FUN_140a2ba5a(param_1,&local_1c,param_2);
  plVar2 = (longlong *)(*param_1 + (longlong)local_1c * 0x14);
LAB_140a2ba3c:
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar2 + 1;
}



// FUNCTION 140a2ba5a FUN_140a2ba5a body=301 status=ok
// SIG undefined FUN_140a2ba5a(void)

undefined4 *
FUN_140a2ba5a(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4,
             undefined8 param_5)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_58 [2];
  undefined8 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_140a2bc24(param_1,local_58);
  *local_50 = *(undefined8 *)*param_4;
  *(undefined1 *)(local_50 + 1) = 0;
  *(undefined4 *)((longlong)local_50 + 0xc) = 0xffffffff;
  local_68 = param_5;
  cVar1 = FUN_140a2bb88(param_1,param_3,local_50,local_58);
  if (cVar1 == '\0') {
    uVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    if (uVar2 < 4) {
      iVar4 = 1;
    }
    else {
      uVar3 = (ulonglong)(uVar2 & 0xfffffffe) + 0xf;
      lVar5 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iVar4 = 1 << ((byte)lVar5 & 0x1f);
    }
    if (((int)uVar2 < 1) || (iVar4 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      *(uint *)(local_50 + 2) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)((longlong)local_50 + 0xc) =
           *(undefined4 *)
            (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_58[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar4;
      FUN_140a2be0e(param_1);
    }
  }
  *param_2 = local_58[0];
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a2bb88 FUN_140a2bb88 body=156 status=ok
// SIG undefined FUN_140a2bb88(void)

void FUN_140a2bb88(longlong *param_1,uint param_2,longlong *param_3,int *param_4,undefined1 *param_5
                  )

{
  longlong lVar1;
  undefined1 uVar2;
  longlong *plVar3;
  int iVar4;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar4 != -1) {
      do {
        plVar3 = (longlong *)(*param_1 + (longlong)iVar4 * 0x14);
        if (*plVar3 == *param_3) {
          lVar1 = *param_3;
          *(int *)(plVar3 + 1) = (int)param_3[1];
          *plVar3 = lVar1;
          FUN_145764936(param_1,*param_4,1);
          *param_4 = iVar4;
          uVar2 = 1;
          goto LAB_140a2bbf2;
        }
        iVar4 = *(int *)((longlong)plVar3 + 0xc);
      } while (iVar4 != -1);
    }
  }
  uVar2 = 0;
LAB_140a2bbf2:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar2;
  }
  return;
}



// FUNCTION 140a2bc24 FUN_140a2bc24 body=489 status=ok
// SIG undefined FUN_140a2bc24(void)

int * FUN_140a2bc24(longlong *param_1,int *param_2)

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



// FUNCTION 140a2be0e FUN_140a2be0e body=594 status=ok
// SIG undefined FUN_140a2be0e(void)

void FUN_140a2be0e(longlong *param_1)

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
        uVar2 = *(undefined8 *)(lVar14 + lVar13 * 0x14);
        uVar4 = (uint)((ulonglong)uVar2 >> 0x10);
        uVar15 = (uint)uVar2 & 0xffff;
        uVar11 = (longlong)
                 (int)(((uint)uVar2 << 0x10 | uVar15) + (int)((ulonglong)uVar2 >> 0x20) +
                       (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar15 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar10 = (int)uVar11;
        *(int *)(lVar14 + 0x10 + lVar13 * 0x14) = iVar10;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar14 + 0xc + lVar13 * 0x14) =
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
            if (iVar3 - lVar14 == lVar13) goto LAB_140a2c017;
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
LAB_140a2c017:
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a2c062 FUN_140a2c062 body=472 status=ok
// SIG undefined FUN_140a2c062(void)

void FUN_140a2c062(longlong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  
  iVar2 = (int)param_2[5];
  if (iVar2 == 0) {
    uVar10 = 1;
    uVar14 = 0;
    iVar4 = 0;
    iVar9 = 0;
  }
  else {
    puVar5 = (uint *)param_2[4];
    if ((uint *)param_2[4] == (uint *)0x0) {
      puVar5 = (uint *)(param_2 + 2);
    }
    uVar6 = *puVar5;
    if (uVar6 == 0) {
      iVar4 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar4 = iVar2 + -1;
      }
      uVar14 = 0;
      uVar10 = (ulonglong)(uint)(iVar4 >> 5);
      if (iVar4 >> 5 < 1) {
        uVar10 = uVar14;
      }
      iVar9 = 0;
      do {
        if (uVar10 == uVar14) {
          return;
        }
        iVar9 = iVar9 + 0x20;
        uVar6 = puVar5[uVar14 + 1];
        uVar14 = uVar14 + 1;
      } while (uVar6 == 0);
    }
    else {
      uVar14 = 0;
      iVar9 = 0;
    }
    uVar10 = (ulonglong)(-uVar6 & uVar6);
    uVar1 = uVar10 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iVar4 = (iVar9 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar4) {
      iVar4 = iVar2;
    }
  }
  if (iVar4 != iVar2) {
    uVar6 = 0xffffffff;
    do {
      (**(code **)(*param_1 + 0x88))(param_1,(longlong)iVar4 * 0x10 + *param_2,param_3,param_4);
      uVar6 = ~(uint)uVar10 & uVar6;
      puVar5 = (uint *)param_2[4];
      if ((uint *)param_2[4] == (uint *)0x0) {
        puVar5 = (uint *)(param_2 + 2);
      }
      iVar3 = (int)param_2[5];
      iVar4 = (int)uVar14;
      lVar12 = (longlong)iVar4;
      uVar11 = puVar5[lVar12] & uVar6;
      if (uVar11 == 0) {
        iVar7 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar7 = iVar3 + -1;
        }
        iVar7 = iVar7 >> 5;
        iVar9 = iVar9 + 0x20;
        iVar8 = iVar7;
        if (iVar7 < iVar4) {
          iVar8 = iVar4;
        }
        if (iVar4 < iVar7) {
          lVar13 = 0;
          do {
            uVar11 = puVar5[lVar12 + lVar13 + 1];
            if (uVar11 != 0) {
              uVar14 = (ulonglong)(iVar4 + (int)lVar13 + 1);
              uVar6 = 0xffffffff;
              goto LAB_140a2c198;
            }
            iVar9 = iVar9 + 0x20;
            lVar13 = lVar13 + 1;
          } while (iVar8 - lVar12 != lVar13);
          uVar6 = 0xffffffff;
          iVar4 = iVar8;
        }
        uVar14 = (ulonglong)(iVar4 + 1);
        iVar4 = iVar3;
      }
      else {
LAB_140a2c198:
        uVar10 = (ulonglong)(-uVar11 & uVar11);
        uVar1 = uVar10 * 2 + 1;
        lVar12 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        iVar4 = (iVar9 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
        if (iVar3 <= iVar4) {
          iVar4 = iVar3;
        }
      }
    } while (iVar4 != iVar2);
  }
  return;
}



// FUNCTION 140a2c23a FUN_140a2c23a body=109 status=ok
// SIG undefined FUN_140a2c23a(void)

void FUN_140a2c23a(longlong *param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  
  if (-1 < param_3) {
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != param_3) {
      FUN_140a2c2a8(param_1,param_3);
    }
    for (; param_3 != 0; param_3 = param_3 + -1) {
      iVar1 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
        FUN_14043c6b4(param_1,iVar1);
      }
      *(undefined8 *)(*param_1 + (longlong)iVar1 * 8) = *param_2;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_3);
}



// FUNCTION 140a2c2a8 FUN_140a2c2a8 body=315 status=ok
// SIG undefined FUN_140a2c2a8(void)

void FUN_140a2c2a8(longlong param_1,int param_2)

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
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_140a2c312;
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
LAB_140a2c312:
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



// FUNCTION 140a2c3e4 FUN_140a2c3e4 body=1154 status=ok
// SIG undefined FUN_140a2c3e4(void)

void FUN_140a2c3e4(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  char cVar5;
  undefined8 *puVar6;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  undefined8 local_50;
  undefined8 local_48;
  code *local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_48 = FUN_1446ddbd2();
      local_40 = FUN_1468d96f0;
      local_50 = 0;
      local_58 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
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
            goto LAB_140a2c4cf;
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
LAB_140a2c4cf:
  local_38 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_48 = FUN_1446ddbd2();
      local_40 = FUN_1468d96f0;
      local_50 = 0;
      local_58 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
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
            goto LAB_140a2c59c;
          }
        }
        puVar6 = (undefined8 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (puVar6 != &local_38) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_38,puVar6,(int)plVar1[6]);
          }
          else {
            memcpy(&local_38,puVar6,
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
LAB_140a2c59c:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_140a2c868(param_1,local_30,local_38);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a2c868 FUN_140a2c868 body=538 status=ok
// SIG undefined FUN_140a2c868(void)

void FUN_140a2c868(longlong param_1,longlong param_2)

{
  int *piVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  bool bVar8;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140a2ca92();
  if ((param_2 == 0) || ((*(uint *)(param_2 + 8) >> 0x1e & 1) != 0)) {
    *(undefined1 *)(param_1 + 0x59) = 0;
  }
  else {
    uVar2 = *(uint *)(param_2 + 0xc);
    *(uint *)(param_1 + 0x50) = uVar2;
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar6 = 0;
    }
    iVar4 = *(int *)(lVar6 + 0x10);
    if (iVar4 == 0) {
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
      *(int *)(param_1 + 0x54) = iVar4;
      if (iVar4 == 0) goto LAB_140a2c931;
    }
    else {
      *(int *)(param_1 + 0x54) = iVar4;
    }
    uVar2 = *(uint *)(param_1 + 0x50);
    if ((((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) &&
        (plVar5 = (longlong *)
                  ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
        plVar5 != (longlong *)0x0)) &&
       (((int)plVar5[2] == iVar4 && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0)))) {
      if ((*(uint *)(plVar5 + 1) & 0x10200000) == 0) {
        lVar6 = *plVar5;
      }
      else {
        lVar6 = 0;
      }
      *(undefined1 *)(param_1 + 0x59) = *(undefined1 *)(lVar6 + 0xbd8);
      FUN_140a2d218(param_1);
    }
  }
LAB_140a2c931:
  if (((*(int *)(param_1 + 0x54) != 0) && (uVar2 = *(uint *)(param_1 + 0x50), -1 < (int)uVar2)) &&
     (((int)uVar2 < DAT_14c9647dc &&
      (((lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8), lVar6 != 0 &&
        (*(int *)(lVar6 + 0x10) == *(int *)(param_1 + 0x54))) &&
       ((*(uint *)(lVar6 + 8) & 0x10200000) == 0)))))) {
    FUN_140a2ce32(param_1);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
  }
  FUN_1449027d0(param_1,&local_30);
  pcVar3 = (char *)*local_30;
  AcquireSRWLockExclusive((PSRWLOCK)(pcVar3 + 0x70));
  *(int *)(pcVar3 + 0x68) = *(int *)(pcVar3 + 0x68) + 1;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_28 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar1 = (int *)((longlong)local_28 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_28 + 0x10))(local_28);
      }
    }
  }
  if (*pcVar3 == '\0') {
    if (*(int *)(pcVar3 + 4) != 0) goto LAB_140a2c9ee;
    iVar4 = 1;
  }
  else {
    iVar4 = *(int *)(pcVar3 + 4) + 1;
  }
  *pcVar3 = '\0';
  *(int *)(pcVar3 + 4) = iVar4;
LAB_140a2c9ee:
  ReleaseSRWLockExclusive((PSRWLOCK)(pcVar3 + 0x70));
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140a2ca92 FUN_140a2ca92 body=496 status=ok
// SIG undefined FUN_140a2ca92(void)

void FUN_140a2ca92(longlong param_1)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if (*(int *)(param_1 + 0x54) == 0) {
    return;
  }
  uVar1 = *(uint *)(param_1 + 0x50);
  if ((int)uVar1 < 0) {
    return;
  }
  if (DAT_14c9647dc <= (int)uVar1) {
    return;
  }
  lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
  if (lVar4 == 0) {
    return;
  }
  if (*(int *)(lVar4 + 0x10) != *(int *)(param_1 + 0x54)) {
    return;
  }
  if ((*(uint *)(lVar4 + 8) & 0x10200000) != 0) {
    return;
  }
  FUN_140a2cd52(param_1);
  FUN_140a2cc82();
  if (*(int *)(param_1 + 0x54) == 0) {
LAB_140a2cc70:
    lVar4 = 0;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x50);
    lVar4 = 0;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      plVar3 = (longlong *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((plVar3 == (longlong *)0x0) ||
         (((int)plVar3[2] != *(int *)(param_1 + 0x54) || ((*(uint *)(plVar3 + 1) & 0x10200000) != 0)
          ))) goto LAB_140a2cc70;
      lVar4 = *plVar3;
    }
  }
  FUN_1401073f6(lVar4 + 0xa10,param_1);
  iVar2 = *(int *)(param_1 + 0x54);
  if (iVar2 == 0) {
LAB_140a2cc77:
    lVar4 = 0;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x50);
    lVar4 = 0;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      plVar3 = (longlong *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((plVar3 == (longlong *)0x0) ||
         (((int)plVar3[2] != iVar2 || ((*(uint *)(plVar3 + 1) & 0x10200000) != 0))))
      goto LAB_140a2cc77;
      lVar4 = *plVar3;
    }
  }
  if ((0 < *(int *)(lVar4 + 0xbf0)) && (*(longlong *)(*(longlong *)(lVar4 + 0xbe8) + 0x10) != 0)) {
    if (*(longlong *)(param_1 + 0x60) != 0) {
      FUN_14480f766();
      iVar2 = *(int *)(param_1 + 0x54);
    }
    *(undefined8 *)(param_1 + 0x60) = 0;
  }
  if (iVar2 != 0) {
    uVar1 = *(uint *)(param_1 + 0x50);
    lVar4 = 0;
    if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_140a2cc34;
    plVar3 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if ((plVar3 != (longlong *)0x0) &&
       (((int)plVar3[2] == iVar2 && ((*(uint *)(plVar3 + 1) & 0x10200000) == 0)))) {
      lVar4 = *plVar3;
      goto LAB_140a2cc34;
    }
  }
  lVar4 = 0;
LAB_140a2cc34:
  if ((1 < *(int *)(lVar4 + 0xbf0)) &&
     (lVar4 = *(longlong *)(*(longlong *)(lVar4 + 0xbe8) + 0x98), lVar4 != 0)) {
    if (*(longlong *)(param_1 + 0x68) != 0) {
      FUN_14480f766(lVar4 + 0x40);
    }
    *(undefined8 *)(param_1 + 0x68) = 0;
  }
  return;
}



// FUNCTION 140a2cc82 FUN_140a2cc82 body=208 status=ok
// SIG undefined FUN_140a2cc82(void)

void FUN_140a2cc82(longlong param_1)

{
  byte bVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  
  if (((*(int *)(param_1 + 0x54) != 0) && (uVar2 = *(uint *)(param_1 + 0x50), -1 < (int)uVar2)) &&
     ((int)uVar2 < DAT_14c9647dc)) {
    plVar4 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if (((plVar4 != (longlong *)0x0) && ((int)plVar4[2] == *(int *)(param_1 + 0x54))) &&
       ((*(uint *)(plVar4 + 1) & 0x10200000) == 0)) {
      if ((*(uint *)(plVar4 + 1) & 0x10200000) == 0) {
        lVar3 = *plVar4;
      }
      else {
        lVar3 = 0;
      }
      bVar1 = *(byte *)(lVar3 + 0xbd8);
      if (((int)(uint)bVar1 < *(int *)(lVar3 + 0xbf0)) &&
         (lVar3 = *(longlong *)
                   (*(longlong *)(lVar3 + 0xbe8) + 0x40 +
                   (ulonglong)bVar1 * 0x80 + (ulonglong)bVar1 * 8), lVar3 != 0)) {
        if (*(longlong *)(param_1 + 0x70) != 0) {
          FUN_14480f766(lVar3 + 0x38);
        }
        *(undefined8 *)(param_1 + 0x70) = 0;
        if (*(longlong *)(param_1 + 0x78) != 0) {
          FUN_14480f766(lVar3 + 0x68);
        }
        *(undefined8 *)(param_1 + 0x78) = 0;
      }
    }
  }
  return;
}



// FUNCTION 140a2cd52 FUN_140a2cd52 body=224 status=ok
// SIG undefined FUN_140a2cd52(void)

void FUN_140a2cd52(longlong param_1)

{
  byte bVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  
  if (((*(int *)(param_1 + 0x54) != 0) && (uVar2 = *(uint *)(param_1 + 0x50), -1 < (int)uVar2)) &&
     ((int)uVar2 < DAT_14c9647dc)) {
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if (((plVar5 != (longlong *)0x0) && ((int)plVar5[2] == *(int *)(param_1 + 0x54))) &&
       ((*(uint *)(plVar5 + 1) & 0x10200000) == 0)) {
      if ((*(uint *)(plVar5 + 1) & 0x10200000) == 0) {
        lVar4 = *plVar5;
      }
      else {
        lVar4 = 0;
      }
      bVar1 = *(byte *)(lVar4 + 0xbd8);
      if ((int)(uint)bVar1 < *(int *)(lVar4 + 0xbf0)) {
        lVar4 = *(longlong *)
                 (*(longlong *)(lVar4 + 0xbe8) + 8 + (ulonglong)bVar1 * 0x80 + (ulonglong)bVar1 * 8)
        ;
        if (lVar4 != 0) {
          lVar3 = FUN_140086c3a();
          if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30)) {
            if (*(longlong *)(param_1 + 0x80) != 0) {
              FUN_14480f766(lVar4 + 0x58);
            }
            *(undefined8 *)(param_1 + 0x80) = 0;
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 140a2ce32 FUN_140a2ce32 body=660 status=ok
// SIG undefined FUN_140a2ce32(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140a2ce32(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  int iVar9;
  int *piVar10;
  bool bVar11;
  float fVar12;
  undefined1 auStack_58 [32];
  longlong *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1449027d0(param_1,&local_38);
  lVar2 = *local_38;
  AcquireSRWLockExclusive((PSRWLOCK)(lVar2 + 0x70));
  *(int *)(lVar2 + 0x68) = *(int *)(lVar2 + 0x68) + 1;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar10 = (int *)((longlong)local_30 + 0xc);
      *piVar10 = *piVar10 + -1;
      UNLOCK();
      if (*piVar10 == 0) {
        (**(code **)(*local_30 + 0x10))(local_30);
      }
    }
  }
  cVar3 = FUN_140a2d176(param_1);
  if (*(char *)(lVar2 + 0x48) == cVar3) {
    if (*(int *)(lVar2 + 0x4c) == 0) {
      iVar5 = 1;
      goto LAB_140a2cfef;
    }
  }
  else {
    iVar5 = *(int *)(lVar2 + 0x4c) + 1;
LAB_140a2cfef:
    *(char *)(lVar2 + 0x48) = cVar3;
    *(int *)(lVar2 + 0x4c) = iVar5;
  }
  if (cVar3 == '\0') goto LAB_140a2cea6;
  param_1 = param_1 + 0x50;
  lVar6 = FUN_14479d2ce(param_1);
  bVar4 = *(byte *)(lVar6 + 0xbd8);
  if ((*(int *)(lVar6 + 0xbf0) <= (int)(uint)bVar4) ||
     (lVar6 = *(longlong *)
               (*(longlong *)(lVar6 + 0xbe8) + 0x40 + (ulonglong)bVar4 * 0x80 + (ulonglong)bVar4 * 8
               ), lVar6 == 0)) goto LAB_140a2cea6;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbd6638) {
    FUN_144b3d300(&DAT_14cbd6638);
    if (DAT_14cbd6638 == -1) {
      _DAT_14cbd6610 = 0;
      uRam000000014cbd6618 = 0;
      _DAT_14cbd6620 = 0;
      DAT_14cbd6628 = 0;
      uRam000000014cbd6630 = 0;
      FUN_1446ddda2(&DAT_14cbd6610,"order",0);
      atexit((_func_5014 *)&LAB_14426d4ba);
      _Init_thread_footer(&DAT_14cbd6638);
    }
  }
  uVar7 = FUN_14479d2ce(param_1);
  lVar8 = FUN_140a2d0c8(uVar7);
  if (lVar8 == 0) {
    bVar11 = false;
  }
  else {
    uVar7 = FUN_14479d2ce(param_1);
    lVar8 = FUN_140a2d0c8(uVar7);
    piVar10 = &DAT_14c9485f0;
    if (*(int **)(lVar8 + 8) != (int *)0x0) {
      piVar10 = *(int **)(lVar8 + 8);
    }
    bVar11 = *piVar10 == DAT_14cbd6610;
  }
  if (bVar11 == (bool)*(char *)(lVar2 + 0x60)) {
    if (*(int *)(lVar2 + 100) == 0) {
      iVar5 = 1;
      goto LAB_140a2d077;
    }
  }
  else {
    iVar5 = *(int *)(lVar2 + 100) + 1;
LAB_140a2d077:
    *(bool *)(lVar2 + 0x60) = bVar11;
    *(int *)(lVar2 + 100) = iVar5;
  }
  fVar12 = *(float *)(lVar6 + 0xa0) * 100.0;
  iVar5 = (int)ROUND(fVar12 + fVar12 + -0.5) >> 1;
  if (iVar5 == *(int *)(lVar2 + 0x58)) {
    if (*(int *)(lVar2 + 0x5c) == 0) {
      iVar9 = 1;
      goto LAB_140a2d001;
    }
  }
  else {
    iVar9 = *(int *)(lVar2 + 0x5c) + 1;
LAB_140a2d001:
    *(int *)(lVar2 + 0x58) = iVar5;
    *(int *)(lVar2 + 0x5c) = iVar9;
  }
  bVar4 = *(byte *)(lVar6 + 0xc4) >> 2 & 1;
  if (bVar4 == *(byte *)(lVar2 + 0x50)) {
    if (*(int *)(lVar2 + 0x54) != 0) goto LAB_140a2cea6;
    iVar5 = 1;
  }
  else {
    iVar5 = *(int *)(lVar2 + 0x54) + 1;
  }
  *(byte *)(lVar2 + 0x50) = bVar4;
  *(int *)(lVar2 + 0x54) = iVar5;
LAB_140a2cea6:
  ReleaseSRWLockExclusive((PSRWLOCK)(lVar2 + 0x70));
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a2d0c8 FUN_140a2d0c8 body=19 status=ok
// SIG undefined FUN_140a2d0c8(void)

longlong FUN_140a2d0c8(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  lVar1 = *(longlong *)(param_1 + 0x3f0);
  if (lVar1 == 0) {
    return 0;
  }
  lVar5 = *(longlong *)(lVar1 + 0xd8);
  if (lVar5 == 0) {
    uVar4 = FUN_140428d10();
    lVar5 = FUN_14477b664(uVar4);
    *(longlong *)(lVar1 + 0xd8) = lVar5;
  }
  if (*(longlong *)(lVar1 + 0xe0) == 0) {
    if ((*(longlong *)(lVar1 + 0xd0) != 0) && (lVar5 != 0)) {
      plVar2 = *(longlong **)(lVar5 + 0xb8);
      if ((plVar2 == (longlong *)0x0) ||
         (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
        lVar5 = 0;
      }
      else {
        uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
        lVar5 = FUN_144aff482(uVar4,(longlong *)(lVar1 + 0xd0));
      }
      *(longlong *)(lVar1 + 0xe0) = lVar5;
      return lVar5;
    }
    return 0;
  }
  return *(longlong *)(lVar1 + 0xe0);
}



// FUNCTION 140a2d0dc FUN_140a2d0dc body=153 status=ok
// SIG undefined FUN_140a2d0dc(void)

longlong FUN_140a2d0dc(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  lVar4 = *(longlong *)(param_1 + 0xd8);
  if (lVar4 == 0) {
    uVar3 = FUN_140428d10();
    lVar4 = FUN_14477b664(uVar3);
    *(longlong *)(param_1 + 0xd8) = lVar4;
  }
  if (*(longlong *)(param_1 + 0xe0) == 0) {
    if ((*(longlong *)(param_1 + 0xd0) != 0) && (lVar4 != 0)) {
      plVar1 = *(longlong **)(lVar4 + 0xb8);
      if ((plVar1 == (longlong *)0x0) ||
         (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
        lVar4 = 0;
      }
      else {
        uVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
        lVar4 = FUN_144aff482(uVar3,(longlong *)(param_1 + 0xd0));
      }
      *(longlong *)(param_1 + 0xe0) = lVar4;
      return lVar4;
    }
    return 0;
  }
  return *(longlong *)(param_1 + 0xe0);
}



// FUNCTION 140a2d176 FUN_140a2d176 body=162 status=ok
// SIG undefined FUN_140a2d176(void)

undefined8 FUN_140a2d176(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (*(int *)(param_1 + 0x54) != 0) {
    uVar1 = *(uint *)(param_1 + 0x50);
    if ((int)uVar1 < 0) {
      return 0;
    }
    if (DAT_14c9647dc <= (int)uVar1) {
      return 0;
    }
    plVar2 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar2 != (longlong *)0x0) && ((int)plVar2[2] == *(int *)(param_1 + 0x54))) &&
       ((*(uint *)(plVar2 + 1) & 0x10200000) == 0)) {
      if ((*(uint *)(plVar2 + 1) & 0x10200000) == 0) {
        lVar4 = *plVar2;
      }
      else {
        lVar4 = 0;
      }
      if ((0 < *(int *)(lVar4 + 0xbf0)) &&
         (lVar4 = *(longlong *)(*(longlong *)(lVar4 + 0xbe8) + 0x20), lVar4 != 0)) {
        lVar3 = FUN_14018fcd2();
        lVar4 = *(longlong *)(lVar4 + 0x10);
        if ((*(int *)(lVar3 + 0x38) <= *(int *)(lVar4 + 0x38)) &&
           (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
            lVar3 + 0x30)) {
          return CONCAT71((int7)((ulonglong)(lVar3 + 0x30) >> 8),1);
        }
      }
    }
  }
  return 0;
}



// FUNCTION 140a2d218 FUN_140a2d218 body=2541 status=ok
// SIG undefined FUN_140a2d218(void)

void FUN_140a2d218(longlong param_1)

{
  uint *_Dst;
  byte bVar1;
  undefined8 *puVar2;
  int iVar3;
  uint uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  ulonglong uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  bool bVar14;
  undefined1 auStack_88 [32];
  ulonglong local_68;
  undefined8 local_60;
  undefined8 *local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  iVar3 = *(int *)(param_1 + 0x54);
  if ((((iVar3 == 0) || (uVar12 = *(uint *)(param_1 + 0x50), (int)uVar12 < 0)) ||
      (DAT_14c9647dc <= (int)uVar12)) ||
     (((plVar8 = (longlong *)
                 ((ulonglong)((uVar12 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8)),
       plVar8 == (longlong *)0x0 || ((int)plVar8[2] != iVar3)) ||
      ((*(uint *)(plVar8 + 1) & 0x10200000) != 0)))) goto LAB_140a2d8f9;
  if ((*(uint *)(plVar8 + 1) & 0x10200000) == 0) {
    lVar6 = *plVar8;
  }
  else {
    lVar6 = 0;
  }
  if ((*(int *)(lVar6 + 0xbf0) < 1) ||
     (lVar6 = *(longlong *)(*(longlong *)(lVar6 + 0xbe8) + 0x10), lVar6 == 0)) {
LAB_140a2d3d1:
    uVar12 = *(uint *)(param_1 + 0x50);
    lVar6 = 0;
    if ((-1 < (int)uVar12) && ((int)uVar12 < DAT_14c9647dc)) {
      plVar8 = (longlong *)
               ((ulonglong)((uVar12 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8));
      if ((plVar8 == (longlong *)0x0) ||
         (((int)plVar8[2] != iVar3 || ((*(uint *)(plVar8 + 1) & 0x10200000) != 0))))
      goto LAB_140a2da3c;
      lVar6 = *plVar8;
    }
  }
  else {
    local_58 = (undefined8 *)0x0;
    local_50 = local_50 & 0xffffffff00000000;
    FUN_1446efa72(&local_58,0,3,0x10);
    puVar2 = local_58;
    local_50 = CONCAT44(local_50._4_4_,3);
    *local_58 = &PTR_LAB_149e020b0;
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 1;
    lVar13 = DAT_14c758608 + 1;
    if (lVar7 == 0) {
      LOCK();
      UNLOCK();
      lVar7 = DAT_14c758608 + 2;
      lVar13 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar13;
    local_58[2] = lVar7;
    *local_58 = &PTR_FUN_14b9adc20;
    local_58[3] = 0;
    iVar3 = 0;
    if (param_1 != 0) {
      uVar12 = *(uint *)(param_1 + 0xc);
      *(uint *)(local_58 + 3) = uVar12;
      if ((int)uVar12 < DAT_14c9647dc) {
        lVar13 = (ulonglong)((uVar12 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8);
      }
      else {
        lVar13 = 0;
      }
      iVar3 = *(int *)(lVar13 + 0x10);
      if (*(int *)(lVar13 + 0x10) == 0) {
        LOCK();
        iVar3 = DAT_14c964868 + 1;
        UNLOCK();
        iVar11 = DAT_14c964868 + 1;
        bVar14 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar3;
        if (bVar14) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar11);
        }
        LOCK();
        iVar3 = *(int *)(lVar13 + 0x10);
        bVar14 = iVar3 == 0;
        if (bVar14) {
          *(int *)(lVar13 + 0x10) = iVar11;
          iVar3 = 0;
        }
        UNLOCK();
        if (bVar14) {
          iVar3 = iVar11;
        }
      }
    }
    *(int *)((longlong)puVar2 + 0x1c) = iVar3;
    puVar2[4] = FUN_140cf39ba;
    *(undefined4 *)(puVar2 + 5) = 0;
    FUN_1448b6402(lVar6 + 0x40,&local_60);
    if ((int)local_50 == 0) {
LAB_140a2d3af:
      if (local_58 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
    else if (local_58 != (undefined8 *)0x0) {
      (**(code **)*local_58)(local_58,0);
      FUN_1446efa72(&local_58,0,0,0x10);
      local_50 = local_50 & 0xffffffff00000000;
      goto LAB_140a2d3af;
    }
    *(undefined8 *)(param_1 + 0x60) = local_60;
    iVar3 = *(int *)(param_1 + 0x54);
    if (iVar3 != 0) goto LAB_140a2d3d1;
    iVar3 = 0;
LAB_140a2da3c:
    lVar6 = 0;
  }
  if ((1 < *(int *)(lVar6 + 0xbf0)) &&
     (lVar6 = *(longlong *)(*(longlong *)(lVar6 + 0xbe8) + 0x98), lVar6 != 0)) {
    local_58 = (undefined8 *)0x0;
    local_50 = local_50 & 0xffffffff00000000;
    FUN_1446efa72(&local_58,0,3,0x10);
    puVar2 = local_58;
    local_50 = CONCAT44(local_50._4_4_,3);
    *local_58 = &PTR_LAB_149e020b0;
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 1;
    lVar13 = DAT_14c758608 + 1;
    if (lVar7 == 0) {
      LOCK();
      UNLOCK();
      lVar7 = DAT_14c758608 + 2;
      lVar13 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar13;
    local_58[2] = lVar7;
    *local_58 = &PTR_FUN_14b9adc20;
    local_58[3] = 0;
    iVar3 = 0;
    if (param_1 != 0) {
      uVar12 = *(uint *)(param_1 + 0xc);
      *(uint *)(local_58 + 3) = uVar12;
      if ((int)uVar12 < DAT_14c9647dc) {
        lVar13 = (ulonglong)((uVar12 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8);
      }
      else {
        lVar13 = 0;
      }
      iVar3 = *(int *)(lVar13 + 0x10);
      if (*(int *)(lVar13 + 0x10) == 0) {
        LOCK();
        iVar3 = DAT_14c964868 + 1;
        UNLOCK();
        iVar11 = DAT_14c964868 + 1;
        bVar14 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar3;
        if (bVar14) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar11);
        }
        LOCK();
        iVar3 = *(int *)(lVar13 + 0x10);
        bVar14 = iVar3 == 0;
        if (bVar14) {
          *(int *)(lVar13 + 0x10) = iVar11;
          iVar3 = 0;
        }
        UNLOCK();
        if (bVar14) {
          iVar3 = iVar11;
        }
      }
    }
    *(int *)((longlong)puVar2 + 0x1c) = iVar3;
    puVar2[4] = FUN_140cf39ba;
    *(undefined4 *)(puVar2 + 5) = 0;
    FUN_1448b6402(lVar6 + 0x40,&local_60);
    if ((int)local_50 == 0) {
LAB_140a2d529:
      if (local_58 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
    else if (local_58 != (undefined8 *)0x0) {
      (**(code **)*local_58)(local_58,0);
      FUN_1446efa72(&local_58,0,0,0x10);
      local_50 = local_50 & 0xffffffff00000000;
      goto LAB_140a2d529;
    }
    *(undefined8 *)(param_1 + 0x68) = local_60;
    iVar3 = *(int *)(param_1 + 0x54);
  }
  uVar9 = 0;
  if (iVar3 == 0) {
LAB_140a2da32:
    lVar6 = 0;
  }
  else {
    uVar12 = *(uint *)(param_1 + 0x50);
    lVar6 = 0;
    if ((-1 < (int)uVar12) && ((int)uVar12 < DAT_14c9647dc)) {
      plVar8 = (longlong *)
               ((ulonglong)((uVar12 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8));
      if ((plVar8 == (longlong *)0x0) ||
         (((int)plVar8[2] != iVar3 || ((*(uint *)(plVar8 + 1) & 0x10200000) != 0))))
      goto LAB_140a2da32;
      lVar6 = *plVar8;
    }
  }
  plVar8 = (longlong *)(lVar6 + 0xa10);
  FUN_1412a4182(&local_68);
  if (param_1 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = *(uint *)(param_1 + 0xc);
    if ((int)uVar12 < DAT_14c9647dc) {
      lVar13 = (ulonglong)((uVar12 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8);
    }
    else {
      lVar13 = 0;
    }
    uVar4 = *(uint *)(lVar13 + 0x10);
    if (*(uint *)(lVar13 + 0x10) == 0) {
      LOCK();
      iVar3 = DAT_14c964868 + 1;
      UNLOCK();
      uVar10 = DAT_14c964868 + 1;
      bVar14 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar3;
      if (bVar14) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar10);
      }
      LOCK();
      uVar4 = *(uint *)(lVar13 + 0x10);
      bVar14 = uVar4 == 0;
      if (bVar14) {
        *(uint *)(lVar13 + 0x10) = uVar10;
        uVar4 = 0;
      }
      UNLOCK();
      if (bVar14) {
        uVar4 = uVar10;
      }
    }
    uVar9 = (ulonglong)uVar4;
    if (local_68 == 0) {
      local_68 = 0;
    }
    else if (uVar4 == 0) {
      uVar9 = 0;
    }
    else if (((((-1 < (int)uVar12) && ((int)uVar12 < DAT_14c9647dc)) &&
              (plVar5 = (longlong *)
                        ((ulonglong)((uVar12 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8)),
              plVar5 != (longlong *)0x0)) &&
             ((*(uint *)(plVar5 + 2) == uVar4 && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0)))) &&
            (*plVar5 != 0)) {
      FUN_1400796d0(*(undefined8 *)(*plVar5 + 0x10),local_68);
    }
  }
  local_58 = (undefined8 *)((ulonglong)uVar12 | uVar9 << 0x20);
  local_50 = local_68;
  FUN_1403350f6(plVar8);
  iVar3 = *(int *)(lVar6 + 0xa18);
  if (0 < iVar3) {
    lVar13 = 0;
    bVar14 = false;
    do {
      while( true ) {
        lVar7 = *plVar8;
        _Dst = (uint *)(lVar7 + lVar13 * 0x10);
        if ((((*(longlong *)(lVar7 + 8 + lVar13 * 0x10) != 0) && (_Dst[1] != 0)) &&
            ((uVar12 = *_Dst, -1 < (int)uVar12 &&
             ((((int)uVar12 < DAT_14c9647dc &&
               (plVar5 = (longlong *)
                         ((ulonglong)((uVar12 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8)),
               plVar5 != (longlong *)0x0)) && (*(uint *)(plVar5 + 2) == _Dst[1])))))) &&
           (((*(uint *)(plVar5 + 1) >> 0x1c & 1) == 0 && (*plVar5 != 0)))) break;
        iVar11 = ~(uint)lVar13 + iVar3;
        if (iVar11 != 0) {
          if (0 < iVar11) {
            iVar11 = 1;
          }
          memmove(_Dst,(void *)(lVar7 + (longlong)(iVar3 - iVar11) * 0x10),(longlong)iVar11 << 4);
          iVar3 = *(int *)(lVar6 + 0xa18);
        }
        iVar3 = iVar3 + -1;
        *(int *)(lVar6 + 0xa18) = iVar3;
        bVar14 = true;
        if (iVar3 <= lVar13) goto LAB_140a2da25;
      }
      lVar13 = lVar13 + 1;
    } while (lVar13 < iVar3);
    if (bVar14) {
LAB_140a2da25:
      FUN_1400bbcfc(plVar8);
    }
  }
  FUN_140a2dc06(param_1);
  if (((*(int *)(param_1 + 0x54) == 0) || (uVar12 = *(uint *)(param_1 + 0x50), (int)uVar12 < 0)) ||
     ((DAT_14c9647dc <= (int)uVar12 ||
      (((plVar8 = (longlong *)
                  ((ulonglong)((uVar12 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8)),
        plVar8 == (longlong *)0x0 || ((int)plVar8[2] != *(int *)(param_1 + 0x54))) ||
       ((*(uint *)(plVar8 + 1) & 0x10200000) != 0)))))) goto LAB_140a2d8f9;
  if ((*(uint *)(plVar8 + 1) & 0x10200000) == 0) {
    lVar6 = *plVar8;
  }
  else {
    lVar6 = 0;
  }
  bVar1 = *(byte *)(lVar6 + 0xbd8);
  if ((*(int *)(lVar6 + 0xbf0) <= (int)(uint)bVar1) ||
     (lVar6 = *(longlong *)
               (*(longlong *)(lVar6 + 0xbe8) + 8 + (ulonglong)bVar1 * 0x80 + (ulonglong)bVar1 * 8),
     lVar6 == 0)) goto LAB_140a2d8f9;
  lVar13 = FUN_140086c3a();
  if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x38) < *(int *)(lVar13 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) + (longlong)*(int *)(lVar13 + 0x38) * 8)
      != lVar13 + 0x30)) goto LAB_140a2d8f9;
  local_58 = (undefined8 *)0x0;
  local_50 = local_50 & 0xffffffff00000000;
  FUN_1446efa72(&local_58,0,3,0x10);
  puVar2 = local_58;
  local_50 = CONCAT44(local_50._4_4_,3);
  *local_58 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar7 = DAT_14c758608 + 1;
  lVar13 = DAT_14c758608 + 1;
  if (lVar7 == 0) {
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 2;
    lVar13 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar13;
  local_58[2] = lVar7;
  *local_58 = &PTR_FUN_14b9adc20;
  local_58[3] = 0;
  iVar3 = 0;
  if (param_1 != 0) {
    uVar12 = *(uint *)(param_1 + 0xc);
    *(uint *)(local_58 + 3) = uVar12;
    if ((int)uVar12 < DAT_14c9647dc) {
      lVar13 = (ulonglong)((uVar12 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8);
    }
    else {
      lVar13 = 0;
    }
    iVar3 = *(int *)(lVar13 + 0x10);
    if (*(int *)(lVar13 + 0x10) == 0) {
      LOCK();
      iVar3 = DAT_14c964868 + 1;
      UNLOCK();
      iVar11 = DAT_14c964868 + 1;
      bVar14 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar3;
      if (bVar14) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar11);
      }
      LOCK();
      iVar3 = *(int *)(lVar13 + 0x10);
      bVar14 = iVar3 == 0;
      if (bVar14) {
        *(int *)(lVar13 + 0x10) = iVar11;
        iVar3 = 0;
      }
      UNLOCK();
      if (bVar14) {
        iVar3 = iVar11;
      }
    }
  }
  *(int *)((longlong)puVar2 + 0x1c) = iVar3;
  puVar2[4] = FUN_140cf3d82;
  *(undefined4 *)(puVar2 + 5) = 0;
  FUN_1448b6402(lVar6 + 0x58,&local_60,&local_58);
  if ((int)local_50 == 0) {
LAB_140a2d8df:
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_58 != (undefined8 *)0x0) {
    (**(code **)*local_58)(local_58,0);
    FUN_1446efa72(&local_58,0,0,0x10);
    local_50 = local_50 & 0xffffffff00000000;
    goto LAB_140a2d8df;
  }
  *(undefined8 *)(param_1 + 0x80) = local_60;
LAB_140a2d8f9:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140a2dc06 FUN_140a2dc06 body=238 status=ok
// SIG undefined FUN_140a2dc06(void)

void FUN_140a2dc06(longlong param_1)

{
  byte bVar1;
  char cVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  code *local_48;
  undefined4 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar2 = FUN_140a2d176();
  if (cVar2 != '\0') {
    cVar2 = FUN_144729dda(param_1 + 0x50);
    if (cVar2 != '\0') {
      lVar3 = FUN_14479d2ce(param_1 + 0x50);
      bVar1 = *(byte *)(lVar3 + 0xbd8);
      if (((int)(uint)bVar1 < *(int *)(lVar3 + 0xbf0)) &&
         (lVar3 = *(longlong *)
                   (*(longlong *)(lVar3 + 0xbe8) + 0x40 +
                   (ulonglong)bVar1 * 0x80 + (ulonglong)bVar1 * 8), lVar3 != 0)) {
        local_48 = FUN_140bfdeac;
        local_40 = 0;
        FUN_1457649c0(lVar3 + 0x38,&local_38,param_1,&local_48);
        *(undefined8 *)(param_1 + 0x70) = local_38;
        local_48 = FUN_1412b40fa;
        local_40 = 0;
        FUN_145764ac0(lVar3 + 0x68,&local_38,param_1,&local_48);
        *(undefined8 *)(param_1 + 0x78) = local_38;
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a2dcf6 FUN_140a2dcf6 body=125 status=ok
// SIG undefined FUN_140a2dcf6(void)

void FUN_140a2dcf6(longlong *param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  FUN_1402bfe30();
  uVar2 = (**(code **)(*param_1 + 0x180))(param_1);
  lVar3 = FUN_140a2dd74(uVar2);
  if (lVar3 != 0) {
    FUN_140a2e418(lVar3,param_1);
  }
  lVar3 = (**(code **)(*param_1 + 0x3f8))(param_1);
  if (lVar3 != 0) {
    uVar2 = (**(code **)(*param_1 + 0x3f8))(param_1);
    FUN_140a2de0c(uVar2,param_1);
  }
  cVar1 = FUN_1402bfec4(param_1,0);
  if (cVar1 == '\0') {
    FUN_140644460(param_1);
    return;
  }
  return;
}



// FUNCTION 140a2dd74 FUN_140a2dd74 body=152 status=ok
// SIG undefined FUN_140a2dd74(void)

ulonglong FUN_140a2dd74(ulonglong param_1)

{
  ulonglong *puVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  
  if (DAT_14cacd610 != DAT_14cacd63c) {
    uVar2 = ((uint)(param_1 >> 0x14) & 0xffff ^ (uint)(param_1 >> 4)) * -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    puVar4 = &DAT_14cacd640;
    if (DAT_14cacd648 != (undefined *)0x0) {
      puVar4 = DAT_14cacd648;
    }
    iVar3 = *(int *)(puVar4 + (ulonglong)(DAT_14cacd650 - 1U & (uVar2 >> 0x10 ^ uVar2)) * 4);
    if (iVar3 != -1) {
      while (puVar1 = (ulonglong *)(DAT_14cacd608 + (longlong)iVar3 * 0x18), *puVar1 != param_1) {
        iVar3 = (int)puVar1[2];
        if (iVar3 == -1) {
          return 0;
        }
      }
      if (puVar1 != (ulonglong *)0x0) {
        if (puVar1 + 1 != (ulonglong *)0x0) {
          return puVar1[1];
        }
        return 0;
      }
      return 0;
    }
  }
  return 0;
}



// FUNCTION 140a2de0c FUN_140a2de0c body=863 status=ok
// SIG undefined FUN_140a2de0c(void)

void FUN_140a2de0c(longlong param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  bool bVar8;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined8 local_80;
  wchar_t *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  undefined8 *local_60;
  undefined1 *local_58;
  code *local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x378));
  local_48 = (code *)0x0;
  if (param_2 != 0) {
    uVar7 = *(uint *)(param_2 + 0xc);
    if ((int)uVar7 < DAT_14c9647dc) {
      lVar6 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8);
    }
    else {
      lVar6 = 0;
    }
    iVar1 = *(int *)(lVar6 + 0x10);
    if (*(int *)(lVar6 + 0x10) == 0) {
      LOCK();
      iVar1 = DAT_14c964868 + 1;
      UNLOCK();
      iVar4 = DAT_14c964868 + 1;
      bVar8 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar1;
      if (bVar8) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar4);
      }
      LOCK();
      iVar1 = *(int *)(lVar6 + 0x10);
      bVar8 = iVar1 == 0;
      if (bVar8) {
        *(int *)(lVar6 + 0x10) = iVar4;
        iVar1 = 0;
      }
      UNLOCK();
      if (bVar8) {
        iVar1 = iVar4;
      }
    }
    local_48 = (code *)CONCAT44(iVar1,uVar7);
  }
  FUN_140a2e16c(param_1 + 0x380,&local_48);
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x378));
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x2f0));
  if (param_2 == 0) {
    uVar7 = 0;
    uVar3 = 0;
  }
  else {
    if (DAT_14cb06da8 == 0) {
      local_48 = FUN_1449e2820;
      local_50 = FUN_14081d0ea;
      local_58 = &LAB_1464003b0;
      local_68 = &LAB_147d17bdf;
      local_70 = &LAB_1417edf22;
      local_78 = L"Engine";
      local_80 = 0;
      local_88 = 0x10000000;
      local_90 = 8;
      local_98 = 0x588;
      local_60 = &local_48;
      FUN_14081cfa3(L"/Script/Engine",L"SkeletalMesh",&DAT_14cb06da8,FUN_14640038e);
    }
    if ((*(int *)(DAT_14cb06da8 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cb06da8 + 0x38) * 8) == DAT_14cb06da8 + 0x30)) {
      uVar7 = *(uint *)(param_2 + 0xc);
      if ((int)uVar7 < DAT_14c9647dc) {
        lVar6 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8);
      }
      else {
        lVar6 = 0;
      }
      iVar1 = *(int *)(lVar6 + 0x10);
      if (*(int *)(lVar6 + 0x10) == 0) {
        LOCK();
        iVar1 = DAT_14c964868 + 1;
        UNLOCK();
        iVar4 = DAT_14c964868 + 1;
        bVar8 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar1;
        if (bVar8) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar4);
        }
        LOCK();
        iVar1 = *(int *)(lVar6 + 0x10);
        bVar8 = iVar1 == 0;
        if (bVar8) {
          *(int *)(lVar6 + 0x10) = iVar4;
          iVar1 = 0;
        }
        UNLOCK();
        if (bVar8) {
          iVar1 = iVar4;
        }
      }
      FUN_140a2e1f4(param_1 + 0x3d0,CONCAT44(iVar1,uVar7));
    }
    uVar7 = *(uint *)(param_2 + 0xc);
    if ((int)uVar7 < DAT_14c9647dc) {
      lVar6 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8);
    }
    else {
      lVar6 = 0;
    }
    uVar3 = (ulonglong)*(uint *)(lVar6 + 0x10);
    if (*(uint *)(lVar6 + 0x10) == 0) {
      LOCK();
      iVar1 = DAT_14c964868 + 1;
      UNLOCK();
      uVar5 = DAT_14c964868 + 1;
      bVar8 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar1;
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
      uVar3 = (ulonglong)uVar2;
    }
  }
  FUN_140a2e306(param_1 + 0x328,(ulonglong)uVar7 | uVar3 << 0x20);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x2f0));
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140a2e16c FUN_140a2e16c body=136 status=ok
// SIG undefined FUN_140a2e16c(void)

undefined8 FUN_140a2e16c(longlong *param_1,int *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar2 = FUN_144a78877(*param_2,param_2[1]);
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 + ((longlong)iVar2 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar2 != -1) {
      lVar1 = *param_1;
      do {
        lVar4 = (longlong)iVar2;
        if ((*(int *)(lVar1 + lVar4 * 0x18) == *param_2) &&
           (*(int *)(lVar1 + 4 + lVar4 * 0x18) == param_2[1])) {
          FUN_14794c592(param_1);
          return 1;
        }
        iVar2 = *(int *)(lVar1 + lVar4 * 0x18 + 0x10);
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 140a2e1f4 FUN_140a2e1f4 body=272 status=ok
// SIG undefined FUN_140a2e1f4(void)

undefined8 FUN_140a2e1f4(longlong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  ulonglong uVar9;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar5 = 0;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar8 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar8 = (longlong *)param_1[8];
    }
    uVar9 = (longlong)(int)((uint)((ulonglong)param_2 >> 0x20) ^ (uint)param_2) &
            (longlong)(int)param_1[9] - 1U;
    lVar4 = (longlong)*(int *)((longlong)plVar8 + uVar9 * 4);
    if (lVar4 != -1) {
      lVar2 = *param_1;
      local_48 = *(undefined8 *)(lVar2 + lVar4 * 0x14);
      local_50 = param_2;
      cVar3 = FUN_14794c670();
      if (cVar3 == '\0') {
        puVar1 = (undefined8 *)(lVar2 + lVar4 * 0x14);
        do {
          puVar7 = puVar1;
          lVar4 = (longlong)*(int *)((longlong)puVar7 + 0xc);
          if (lVar4 == -1) goto LAB_140a2e21c;
          puVar1 = (undefined8 *)(*param_1 + lVar4 * 0x14);
          local_48 = *puVar1;
          local_50 = param_2;
          cVar3 = FUN_14794c670(&local_48,&local_50);
        } while (cVar3 == '\0');
        puVar6 = (undefined4 *)((longlong)puVar7 + 0xc);
      }
      else {
        puVar6 = (undefined4 *)((longlong)plVar8 + uVar9 * 4);
      }
      FUN_14794c618(param_1,*puVar6);
      uVar5 = 1;
    }
  }
LAB_140a2e21c:
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a2e306 FUN_140a2e306 body=272 status=ok
// SIG undefined FUN_140a2e306(void)

undefined8 FUN_140a2e306(longlong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  ulonglong uVar9;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar5 = 0;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar8 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar8 = (longlong *)param_1[8];
    }
    uVar9 = (longlong)(int)((uint)((ulonglong)param_2 >> 0x20) ^ (uint)param_2) &
            (longlong)(int)param_1[9] - 1U;
    lVar4 = (longlong)*(int *)((longlong)plVar8 + uVar9 * 4);
    if (lVar4 != -1) {
      lVar2 = *param_1;
      local_48 = *(undefined8 *)(lVar2 + lVar4 * 0x14);
      local_50 = param_2;
      cVar3 = FUN_14794c55c();
      if (cVar3 == '\0') {
        puVar1 = (undefined8 *)(lVar2 + lVar4 * 0x14);
        do {
          puVar7 = puVar1;
          lVar4 = (longlong)*(int *)((longlong)puVar7 + 0xc);
          if (lVar4 == -1) goto LAB_140a2e32e;
          puVar1 = (undefined8 *)(*param_1 + lVar4 * 0x14);
          local_48 = *puVar1;
          local_50 = param_2;
          cVar3 = FUN_14794c55c(&local_48,&local_50);
        } while (cVar3 == '\0');
        puVar6 = (undefined4 *)((longlong)puVar7 + 0xc);
      }
      else {
        puVar6 = (undefined4 *)((longlong)plVar8 + uVar9 * 4);
      }
      FUN_14794c718(param_1,*puVar6);
      uVar5 = 1;
    }
  }
LAB_140a2e32e:
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a2e418 FUN_140a2e418 body=173 status=ok
// SIG undefined FUN_140a2e418(void)

void FUN_140a2e418(longlong param_1,undefined8 param_2)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  if ((longlong)*(int *)(param_1 + 0x1f8) != 0) {
    lVar4 = *(longlong *)(param_1 + 0x1f0);
    lVar5 = (longlong)*(int *)(param_1 + 0x1f8) * 0x70;
    do {
      cVar2 = FUN_1409d2f40(lVar4 + 0x60,param_2);
      if (cVar2 == '\0') {
        cVar2 = FUN_14793e274(lVar4 + 0x68,param_2);
        if (cVar2 != '\0') goto LAB_140a2e45a;
      }
      else {
LAB_140a2e45a:
        iVar1 = *(int *)(param_1 + 0x1e0);
        *(uint *)(param_1 + 0x1e0) = iVar1 + 1U;
        if (*(uint *)(param_1 + 0x1e4) < iVar1 + 1U) {
          FUN_14794e646(param_1 + 0x10,iVar1);
        }
        lVar3 = *(longlong *)(param_1 + 0x1d0);
        if (*(longlong *)(param_1 + 0x1d0) == 0) {
          lVar3 = param_1 + 0x10;
        }
        FUN_14793e2ec((longlong)iVar1 * 0x70 + lVar3,lVar4);
      }
      lVar4 = lVar4 + 0x70;
      lVar5 = lVar5 + -0x70;
    } while (lVar5 != 0);
  }
  return;
}



// FUNCTION 140a2e4c6 FUN_140a2e4c6 body=57 status=ok
// SIG undefined FUN_140a2e4c6(void)

void FUN_140a2e4c6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb603f0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb603f0 = FUN_140002ddd(FUN_1464ec179,uVar1,L"GbxLightSettings");
  }
  return;
}



// FUNCTION 140a2e500 FUN_140a2e500 body=72 status=ok
// SIG undefined FUN_140a2e500(void)

undefined8 FUN_140a2e500(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined7 uVar3;
  undefined8 uVar2;
  undefined7 extraout_var;
  
  if ((param_2 == 0) || (*(longlong *)(param_1 + 8) != *(longlong *)(param_2 + 8))) {
    uVar2 = 0;
  }
  else {
    lVar1 = *(longlong *)(param_2 + 0x70);
    uVar3 = (undefined7)((ulonglong)*(longlong *)(param_1 + 8) >> 8);
    if ((lVar1 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar1);
      uVar3 = extraout_var;
    }
    uVar2 = CONCAT71(uVar3,*(longlong *)(param_1 + 0x70) == lVar1);
  }
  return uVar2;
}



// FUNCTION 140a2e554 FUN_140a2e554 body=164 status=ok
// SIG undefined FUN_140a2e554(void)

undefined8 * FUN_140a2e554(undefined8 *param_1)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  FUN_140312256();
  *param_1 = &PTR_FUN_14b1100a0;
  param_1[0x72] = 0;
  uVar2 = DAT_14cb88d30;
  uVar3 = FUN_140c7aaec();
  lVar4 = FUN_14048696c(param_1,uVar2,uVar3,uVar3,1,0);
  if (lVar4 != 0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c(lVar4);
  }
  bVar1 = DAT_14c950c29;
  param_1[0x72] = lVar4;
  if ((lVar4 != 0) && ((bVar1 & 1) != 0)) {
    FUN_1456cec3c(lVar4);
    lVar4 = param_1[0x72];
  }
  param_1[0x39] = lVar4;
  return param_1;
}



// FUNCTION 140a2e5f8 FUN_140a2e5f8 body=245 status=ok
// SIG undefined FUN_140a2e5f8(void)

longlong FUN_140a2e5f8(longlong param_1,int param_2,undefined8 param_3,char param_4)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar4 = FUN_140a2e6ed(DAT_14c951640);
  FUN_140a2e87e(lVar4,param_3,param_1);
  plVar1 = (longlong *)(param_1 + 0x1f8);
  if (param_2 == -1) {
    if ((lVar4 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar4);
    }
    iVar2 = *(int *)(param_1 + 0x200);
    *(uint *)(param_1 + 0x200) = iVar2 + 1U;
    if (*(uint *)(param_1 + 0x204) < iVar2 + 1U) {
      FUN_140a2e9ae(plVar1,iVar2);
    }
    *(longlong *)(*plVar1 + (longlong)iVar2 * 8) = lVar4;
    if ((lVar4 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar4);
    }
  }
  else {
    lVar3 = *plVar1;
    if ((lVar4 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar4);
    }
    *(longlong *)(lVar3 + (longlong)param_2 * 8) = lVar4;
  }
  FUN_14490d4fa(lVar4,1);
  if (param_4 != '\0') {
    FUN_140a2eb0a(param_1,0,0);
  }
  return lVar4;
}



// FUNCTION 140a2e6ed FUN_140a2e6ed body=177 status=ok
// SIG undefined FUN_140a2e6ed(void)

undefined8 FUN_140a2e6ed(undefined8 param_1)

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
  local_b8 = FUN_140a2e7a0();
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



// FUNCTION 140a2e7a0 FUN_140a2e7a0 body=221 status=ok
// SIG undefined FUN_140a2e7a0(void)

longlong FUN_140a2e7a0(void)

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
  if (DAT_14cac48f0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1478828b5;
    local_40 = &LAB_140893686;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x120;
    FUN_14081cfa3(L"/Script/Engine",L"MaterialParameterCollectionInstance",&DAT_14cac48f0,
                  &DAT_1478828b4);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cac48f0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a2e87e FUN_140a2e87e body=304 status=ok
// SIG undefined FUN_140a2e87e(void)

void FUN_140a2e87e(longlong param_1,longlong param_2,longlong param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  bool bVar5;
  
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x2c) = 0;
    iVar2 = 0;
  }
  else {
    uVar1 = *(uint *)(param_2 + 0xc);
    *(uint *)(param_1 + 0x2c) = uVar1;
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
  *(int *)(param_1 + 0x30) = iVar2;
  if (param_3 == 0) {
    *(undefined4 *)(param_1 + 0x34) = 0;
    iVar2 = 0;
  }
  else {
    uVar1 = *(uint *)(param_3 + 0xc);
    *(uint *)(param_1 + 0x34) = uVar1;
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
  *(int *)(param_1 + 0x38) = iVar2;
  return;
}



// FUNCTION 140a2e9ae FUN_140a2e9ae body=346 status=ok
// SIG undefined FUN_140a2e9ae(void)

void FUN_140a2e9ae(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140a2ea40;
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
LAB_140a2ea40:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 140a2eb0a FUN_140a2eb0a body=251 status=ok
// SIG undefined FUN_140a2eb0a(void)

void FUN_140a2eb0a(longlong param_1,char param_2,undefined4 param_3)

{
  undefined8 uVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar4 = *(longlong **)(param_1 + 0x218);
  if (plVar4 != (longlong *)0x0) {
    local_58 = 0;
    uStack_50 = 0;
    if (0 < *(int *)(param_1 + 0x200)) {
      lVar5 = 0;
      do {
        lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x1f8) + lVar5 * 8);
        if (param_2 != '\0') {
          FUN_14490d4fa(lVar6,param_3);
        }
        uVar2 = uStack_50;
        uVar1 = *(undefined8 *)(lVar6 + 0xe0);
        lVar6 = (longlong)(int)uStack_50;
        uVar3 = (int)uStack_50 + 1;
        uStack_50 = CONCAT44(uStack_50._4_4_,uVar3);
        if (uStack_50._4_4_ < uVar3) {
          FUN_140a2ec06(&local_58,uVar2 & 0xffffffff);
        }
        *(undefined8 *)(local_58 + lVar6 * 8) = uVar1;
        lVar5 = lVar5 + 1;
      } while (lVar5 < *(int *)(param_1 + 0x200));
      plVar4 = *(longlong **)(param_1 + 0x218);
    }
    (**(code **)(*plVar4 + 0x430))(plVar4,&local_58);
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a2ec06 FUN_140a2ec06 body=353 status=ok
// SIG undefined FUN_140a2ec06(void)

void FUN_140a2ec06(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140a2ec8b;
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
LAB_140a2ec8b:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 140a2ed68 FUN_140a2ed68 body=3365 status=ok
// SIG undefined FUN_140a2ed68(void)

ulonglong FUN_140a2ed68(longlong param_1,undefined8 param_2,int *param_3,undefined8 *param_4,
                       longlong *param_5)

{
  byte *pbVar1;
  longlong *plVar2;
  ulonglong uVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  byte *pbVar8;
  longlong *plVar9;
  wchar_t **ppwVar10;
  char cVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  longlong *plVar15;
  undefined8 uVar16;
  longlong *plVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  uint *puVar22;
  size_t sVar23;
  int iVar24;
  undefined8 *puVar25;
  longlong lVar26;
  byte bVar27;
  ulonglong uVar28;
  undefined7 uVar29;
  ulonglong uVar30;
  longlong lVar31;
  ulonglong uVar32;
  byte unaff_R12B;
  int iVar33;
  wchar_t *_Str;
  uint uVar34;
  undefined1 auStack_198 [32];
  undefined1 local_178;
  longlong local_170;
  ulonglong local_168;
  uint *local_160;
  byte *local_158;
  longlong *plStack_150;
  byte *local_148;
  longlong *plStack_140;
  longlong local_138;
  longlong *plStack_130;
  undefined4 local_124;
  wchar_t **local_120;
  byte **local_118;
  int local_10c;
  wchar_t *local_108;
  byte *pbStack_100;
  wchar_t *local_f8;
  wchar_t **ppwStack_f0;
  undefined4 local_e8;
  longlong local_e0;
  undefined8 uStack_d8;
  longlong local_78;
  undefined8 local_70;
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_198;
  plVar15 = (longlong *)FUN_140a2fa8e();
  if (plVar15 != (longlong *)0x0) {
    uVar16 = FUN_140f5697c();
    plVar15 = (longlong *)(**(code **)(*plVar15 + 0x288))(plVar15,uVar16);
    if (plVar15 != (longlong *)0x0) {
      uVar16 = FUN_140f5697c();
      plVar17 = (longlong *)FUN_144718840(plVar15,uVar16);
      bVar27 = 0;
      uVar29 = 0;
      if (plVar15 != plVar17) {
        if (plVar17 != (longlong *)0x0) {
          lVar18 = (**(code **)(*plVar17 + 0x10))(plVar17);
          if (((*param_3 != 2) ||
              ((*(longlong *)(lVar18 + 0xa8) != 0 &&
               (*(char *)(*(longlong *)(lVar18 + 0xa8) + 0x178) == '\x03')))) &&
             (uVar28 = 0, *(char *)(lVar18 + 0x128) == '\x01')) {
            uVar30 = (ulonglong)*(int *)(param_1 + 0x100);
            lVar19 = FUN_140a2fc5c(*(undefined8 *)(lVar18 + 0xa8));
            if ((*(char *)(lVar18 + 0x12a + uVar30) == '\x01') &&
               (*(char *)(lVar18 + 0x129) == '\x01')) {
              local_170 = lVar19;
              local_168 = uVar30;
              if (0 < *(int *)(lVar18 + 0x110)) {
                lVar31 = 0;
                lVar26 = 0;
                do {
                  lVar7 = *(longlong *)(lVar18 + 0x108);
                  plVar15 = (longlong *)(lVar31 + lVar7);
                  lVar21 = *(longlong *)(lVar7 + 8 + lVar31);
                  if (lVar21 == 0) {
                    uVar16 = FUN_145764ed6();
                    lVar21 = FUN_14477b664(uVar16);
                    plVar15[1] = lVar21;
                  }
                  lVar20 = *(longlong *)(lVar7 + 0x10 + lVar31);
                  if (lVar20 == 0) {
                    if ((lVar21 != 0) && (*plVar15 != 0)) {
                      plVar17 = *(longlong **)(lVar21 + 0xb8);
                      if ((plVar17 == (longlong *)0x0) ||
                         (cVar11 = (**(code **)(*plVar17 + 0x108))(plVar17), cVar11 == '\0')) {
                        *(undefined8 *)(lVar7 + 0x10 + lVar31) = 0;
                        lVar19 = local_170;
                      }
                      else {
                        uVar16 = (**(code **)(*plVar17 + 0x110))(plVar17);
                        lVar20 = FUN_144aff482(uVar16,plVar15);
                        *(longlong *)(lVar7 + 0x10 + lVar31) = lVar20;
                        lVar19 = local_170;
                        if (lVar20 != 0) goto LAB_140a2ee88;
                      }
                    }
                  }
                  else {
LAB_140a2ee88:
                    if (((*(int *)(lVar20 + 0x34) == (int)local_168) ||
                        (((lVar19 != 0 && (*(char *)(lVar19 + 0xd68) != '\x01')) ||
                         (cVar11 = (**(code **)(*DAT_14cb8a878 + 0xa8))(), cVar11 == '\0')))) &&
                       ((lVar26 < *(int *)(lVar18 + 0x120) &&
                        (0 < *(int *)(*(longlong *)(lVar18 + 0x118) + lVar26 * 4)))))
                    goto LAB_140a2f084;
                  }
                  lVar26 = lVar26 + 1;
                  lVar31 = lVar31 + 0x30;
                } while (lVar26 < *(int *)(lVar18 + 0x110));
              }
              pbVar8 = (byte *)*param_4;
              if (pbVar8 != (byte *)0x0) {
                if ((*pbVar8 & 2) == 0) {
                  plVar15 = &DAT_14c9a1288;
                }
                else {
                  plVar15 = (longlong *)(*(longlong *)(pbVar8 + 8) + 0x18);
                }
                if ((int)plVar15[2] != *(int *)((longlong)plVar15 + 0x3c)) {
                  plVar17 = plVar15 + 8;
                  if ((longlong *)plVar15[9] != (longlong *)0x0) {
                    plVar17 = (longlong *)plVar15[9];
                  }
                  iVar33 = *(int *)((longlong)plVar17 +
                                   (ulonglong)((int)plVar15[10] - 1U & DAT_14cb89d40) * 4);
                  if (iVar33 != -1) {
                    do {
                      lVar26 = *plVar15 + (longlong)iVar33 * 0x40;
                      if (*(uint *)(*plVar15 + (longlong)iVar33 * 0x40) == DAT_14cb89d40) {
                        if (((lVar26 != 0) &&
                            (puVar25 = (undefined8 *)(lVar26 + 0x28), puVar25 != (undefined8 *)0x0))
                           && (((byte *)*puVar25 != (byte *)0x0 && ((*(byte *)*puVar25 & 0x40) == 0)
                               ))) goto LAB_140a2efe8;
                        break;
                      }
                      iVar33 = *(int *)(lVar26 + 0x38);
                    } while (iVar33 != -1);
                  }
                }
              }
              puVar25 = &DAT_14c9a1308;
LAB_140a2efe8:
              pbVar8 = (byte *)*puVar25;
              plVar15 = &DAT_14c9a1288;
              if ((pbVar8 != (byte *)0x0) && ((*pbVar8 & 2) != 0)) {
                plVar15 = (longlong *)(*(longlong *)(pbVar8 + 8) + 0x18);
              }
              local_160 = (uint *)(plVar15 + 3);
              uVar5 = *(uint *)(plVar15 + 6);
              uVar28 = (ulonglong)uVar5;
              if (uVar5 == 0) {
                uVar32 = 1;
                uVar30 = 0;
                uVar12 = 0;
                iVar33 = 0;
              }
              else {
                puVar22 = (uint *)plVar15[5];
                if ((uint *)plVar15[5] == (uint *)0x0) {
                  puVar22 = local_160;
                }
                uVar12 = *puVar22;
                if (uVar12 == 0) {
                  iVar33 = uVar5 + 0x1e;
                  if (-1 < (int)(uVar5 - 1)) {
                    iVar33 = uVar5 - 1;
                  }
                  uVar30 = 0;
                  uVar32 = (ulonglong)(uint)(iVar33 >> 5);
                  if (iVar33 >> 5 < 1) {
                    uVar32 = uVar30;
                  }
                  iVar33 = 0;
                  do {
                    if (uVar32 == uVar30) goto LAB_140a2f084;
                    iVar33 = iVar33 + 0x20;
                    uVar12 = puVar22[uVar30 + 1];
                    uVar30 = uVar30 + 1;
                  } while (uVar12 == 0);
                }
                else {
                  uVar30 = 0;
                  iVar33 = 0;
                }
                uVar32 = (ulonglong)(-uVar12 & uVar12);
                uVar3 = uVar32 * 2 + 1;
                lVar26 = 0x3f;
                if (uVar3 != 0) {
                  for (; uVar3 >> lVar26 == 0; lVar26 = lVar26 + -1) {
                  }
                }
                uVar12 = (iVar33 - ((uint)lVar26 ^ 0x3f)) + 0x3e;
                if ((int)uVar5 <= (int)uVar12) {
                  uVar12 = uVar5;
                }
              }
              if (uVar12 != uVar5) {
                uVar34 = 0xffffffff;
                do {
                  iVar14 = FUN_140e1edd4(*plVar15 + (longlong)(int)uVar12 * 0x40 + 0x28,0);
                  if (0 < iVar14) goto LAB_140a2f5a7;
                  uVar34 = uVar34 & ~(uint)uVar32;
                  puVar22 = (uint *)plVar15[5];
                  if ((uint *)plVar15[5] == (uint *)0x0) {
                    puVar22 = local_160;
                  }
                  uVar6 = *(uint *)(plVar15 + 6);
                  iVar14 = (int)uVar30;
                  lVar19 = (longlong)iVar14;
                  uVar12 = puVar22[lVar19] & uVar34;
                  if (uVar12 == 0) {
                    iVar13 = uVar6 + 0x1e;
                    if (-1 < (int)(uVar6 - 1)) {
                      iVar13 = uVar6 - 1;
                    }
                    iVar13 = iVar13 >> 5;
                    iVar33 = iVar33 + 0x20;
                    iVar24 = iVar13;
                    if (iVar13 < iVar14) {
                      iVar24 = iVar14;
                    }
                    if (iVar14 < iVar13) {
                      lVar26 = 0;
                      do {
                        uVar12 = puVar22[lVar19 + lVar26 + 1];
                        if (uVar12 != 0) {
                          uVar30 = (ulonglong)(iVar14 + (int)lVar26 + 1);
                          uVar34 = 0xffffffff;
                          goto LAB_140a2f53f;
                        }
                        iVar33 = iVar33 + 0x20;
                        lVar26 = lVar26 + 1;
                      } while (iVar24 - lVar19 != lVar26);
                      uVar34 = 0xffffffff;
                      iVar14 = iVar24;
                    }
                    uVar30 = (ulonglong)(iVar14 + 1);
                    uVar12 = uVar6;
                  }
                  else {
LAB_140a2f53f:
                    uVar32 = (ulonglong)(-uVar12 & uVar12);
                    uVar3 = uVar32 * 2 + 1;
                    lVar19 = 0x3f;
                    if (uVar3 != 0) {
                      for (; uVar3 >> lVar19 == 0; lVar19 = lVar19 + -1) {
                      }
                    }
                    uVar12 = (iVar33 - ((uint)lVar19 ^ 0x3f)) + 0x3e;
                    if ((int)uVar6 <= (int)uVar12) {
                      uVar12 = uVar6;
                    }
                  }
                  lVar19 = local_170;
                } while (uVar12 != uVar5);
              }
LAB_140a2f084:
              uVar30 = local_168;
              iVar33 = (int)local_168;
              if ((iVar33 == 1) &&
                 (((lVar19 == 0 || (*(char *)(lVar19 + 0xd68) != '\x01')) ||
                  (cVar11 = (**(code **)(*DAT_14cb8a878 + 0xa8))(), cVar11 == '\0')))) {
LAB_140a2f5a7:
                unaff_R12B = 0;
                uVar29 = (undefined7)(uVar28 >> 8);
                bVar27 = 1;
              }
              else {
                FUN_140a30064(lVar18 + 0x78,lVar18,uVar30 & 0xffffffff);
                if (((byte *)*param_5 == (byte *)0x0) || ((*(byte *)*param_5 & 3) == 0)) {
                  FUN_14009b010(param_5,3,0);
                }
                local_158 = (byte *)0x0;
                plStack_150 = (longlong *)0x0;
                FUN_14009b010(&local_158,2,0);
                puVar25 = &DAT_14c9a1270;
                if ((local_158 != (byte *)0x0) && ((*local_158 & 2) != 0)) {
                  puVar25 = *(undefined8 **)(local_158 + 8);
                }
                iVar14 = *(int *)(lVar18 + 0xb8);
                if (iVar14 < 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_1456afac4(iVar14);
                }
                if (*(int *)((longlong)puVar25 + 0x14) < iVar14) {
                  FUN_14009b4be();
                  iVar14 = *(int *)(lVar18 + 0xb8);
                }
                if (iVar14 != 0) {
                  lVar19 = *(longlong *)(lVar18 + 0xb0);
                  lVar26 = 0;
                  do {
                    lVar31 = *(longlong *)(lVar19 + lVar26);
                    if ((DAT_14c950c29 == '\x01') && (lVar31 != 0)) {
                      FUN_1456cec3c(lVar31);
LAB_140a2f18c:
                      if ((*(char *)(lVar31 + 400) == '\x01') &&
                         ((iVar13 = FUN_140a2fb9a(lVar31), iVar13 == iVar33 ||
                          (((local_170 != 0 && (*(char *)(local_170 + 0xd68) != '\x01')) ||
                           (cVar11 = (**(code **)(*DAT_14cb8a878 + 0xa8))(), cVar11 == '\0')))))) {
                        local_f8 = (wchar_t *)0x0;
                        ppwStack_f0 = (wchar_t **)0x0;
                        FUN_14009b010(&local_f8,3,0);
                        cVar11 = FUN_140a30178(lVar31,&local_f8);
                        if ((cVar11 != '\0') && (local_158 != (byte *)0x0)) {
                          local_178 = 0;
                          FUN_140141db6(local_158,&local_f8,0,0);
                        }
                        ppwVar10 = ppwStack_f0;
                        if (ppwStack_f0 != (wchar_t **)0x0) {
                          LOCK();
                          plVar15 = (longlong *)(ppwStack_f0 + 1);
                          *(int *)plVar15 = (int)*plVar15 + -1;
                          UNLOCK();
                          if ((int)*plVar15 == 0) {
                            (**(code **)*ppwStack_f0)(ppwStack_f0);
                            LOCK();
                            piVar4 = (int *)((longlong)ppwVar10 + 0xc);
                            *piVar4 = *piVar4 + -1;
                            UNLOCK();
                            if (*piVar4 == 0) {
                              (**(code **)((longlong)*ppwVar10 + 0x10))(ppwVar10);
                            }
                          }
                        }
                      }
                    }
                    else if (lVar31 != 0) goto LAB_140a2f18c;
                    lVar26 = lVar26 + 8;
                  } while ((longlong)iVar14 * 8 != lVar26);
                }
                puVar25 = &DAT_14c9a1270;
                if ((local_158 != (byte *)0x0) && ((*local_158 & 2) != 0)) {
                  puVar25 = *(undefined8 **)(local_158 + 8);
                }
                if ((*(int *)(puVar25 + 2) != 0) && (*param_5 != 0)) {
                  local_178 = 0;
                  FUN_14014191c(*param_5,&DAT_14cb89888,&local_158,0);
                }
                plVar15 = param_5;
                if ((*(int *)(lVar18 + 0x110) != 0) &&
                   (*(int *)(lVar18 + 0x110) == *(int *)(lVar18 + 0x120))) {
                  local_108 = (wchar_t *)0x0;
                  pbStack_100 = (byte *)0x0;
                  FUN_14009b010(&local_108,3,0);
                  if ((longlong)*(int *)(lVar18 + 0x110) != 0) {
                    plVar17 = *(longlong **)(lVar18 + 0x108);
                    lVar19 = (longlong)*(int *)(lVar18 + 0x110) * 0x30;
                    plVar15 = (longlong *)0x0;
                    do {
                      lVar26 = plVar17[1];
                      if (lVar26 == 0) {
                        uVar16 = FUN_145764ed6();
                        lVar26 = FUN_14477b664(uVar16);
                        plVar17[1] = lVar26;
                      }
                      lVar31 = plVar17[2];
                      if (lVar31 == 0) {
                        if ((lVar26 != 0) && (*plVar17 != 0)) {
                          plVar9 = *(longlong **)(lVar26 + 0xb8);
                          if ((plVar9 == (longlong *)0x0) ||
                             (cVar11 = (**(code **)(*plVar9 + 0x108))(plVar9), cVar11 == '\0')) {
                            lVar31 = 0;
                          }
                          else {
                            uVar16 = (**(code **)(*plVar9 + 0x110))(plVar9);
                            lVar31 = FUN_144aff482(uVar16,plVar17);
                          }
                          plVar17[2] = lVar31;
                          goto LAB_140a2f32b;
                        }
                      }
                      else {
LAB_140a2f32b:
                        if ((lVar31 != 0) &&
                           (lVar26 = *(longlong *)(lVar18 + 0x118),
                           *(int *)(lVar26 + (longlong)plVar15) != 0)) {
                          if ((*(int *)(lVar31 + 0x34) != (int)local_168) &&
                             ((local_170 == 0 || (*(char *)(local_170 + 0xd68) == '\x01')))) {
                            cVar11 = (**(code **)(*DAT_14cb8a878 + 0xa8))();
                            if (cVar11 != '\0') goto LAB_140a2f3de;
                            lVar26 = *(longlong *)(lVar18 + 0x118);
                          }
                          local_120 = (wchar_t **)*plVar17;
                          FUN_1446dcdd4(&local_f8,&local_120);
                          if ((local_108 != (wchar_t *)0x0) && ((~(byte)*local_108 & 3) == 0)) {
                            lVar31 = *(longlong *)(local_108 + 4);
                            local_148 = (byte *)CONCAT44(local_148._4_4_,1);
                            local_118 = &local_148;
                            local_120 = &local_f8;
                            FUN_14049fede(lVar31 + 0x18,&local_138,&local_120,0);
                            lVar31 = *(longlong *)
                                      (*(longlong *)(lVar31 + 0x18) + 0x28 +
                                      (longlong)(int)local_138 * 0x40);
                            if (lVar31 != 0) {
                              FUN_1404a8912(lVar31,*(undefined4 *)(lVar26 + (longlong)plVar15));
                            }
                          }
                          if (local_e0 != 0) {
                            FUN_1400020a8();
                          }
                        }
                      }
LAB_140a2f3de:
                      plVar17 = plVar17 + 6;
                      plVar15 = (longlong *)((longlong)plVar15 + 4);
                      lVar19 = lVar19 + -0x30;
                    } while (lVar19 != 0);
                  }
                  puVar25 = &DAT_14c9a1288;
                  if ((local_108 != (wchar_t *)0x0) && ((*local_108 & L'\x02') != L'\0')) {
                    puVar25 = (undefined8 *)(*(longlong *)(local_108 + 4) + 0x18);
                  }
                  iVar33 = (int)local_168;
                  if ((*(int *)(puVar25 + 2) != *(int *)((longlong)puVar25 + 0x3c)) &&
                     (*param_5 != 0)) {
                    local_178 = 0;
                    FUN_14014191c(*param_5,&DAT_14cb89d40,&local_108,0);
                  }
                  pbVar8 = pbStack_100;
                  if (pbStack_100 != (byte *)0x0) {
                    LOCK();
                    pbVar1 = pbStack_100 + 8;
                    *(int *)pbVar1 = *(int *)pbVar1 + -1;
                    UNLOCK();
                    if (*(int *)pbVar1 == 0) {
                      (*(code *)**(undefined8 **)pbStack_100)(pbStack_100);
                      LOCK();
                      pbVar1 = pbVar8 + 0xc;
                      *(int *)pbVar1 = *(int *)pbVar1 + -1;
                      UNLOCK();
                      if (*(int *)pbVar1 == 0) {
                        (**(code **)(*(longlong *)pbVar8 + 0x10))(pbVar8);
                      }
                    }
                  }
                }
                lVar18 = *(longlong *)(lVar18 + 0x138);
                if (((lVar18 != 0) && (iVar33 == 0)) && (*(int *)(lVar18 + 0x40) != 0)) {
                  local_138 = 0;
                  plStack_130 = (longlong *)0x0;
                  FUN_14009b010(&local_138,3,0);
                  if ((longlong)*(int *)(lVar18 + 0x40) != 0) {
                    lVar19 = *(longlong *)(lVar18 + 0x38);
                    plVar15 = (longlong *)((longlong)*(int *)(lVar18 + 0x40) * 0x1c);
                    local_168 = lVar19 + 8;
                    plVar17 = (longlong *)0x0;
                    do {
                      local_148 = (byte *)0x0;
                      plStack_140 = (longlong *)0x0;
                      FUN_14009b010(&local_148,3,0);
                      local_108 = (wchar_t *)0x0;
                      pbStack_100 = (byte *)0x0;
                      FUN_1407c869a(local_168 + (longlong)plVar17,&local_108);
                      _Str = L"";
                      if ((int)pbStack_100 != 0) {
                        _Str = local_108;
                      }
                      local_78 = 0;
                      if (_Str == (wchar_t *)0x0) {
                        local_70 = 0;
                        local_68 = 0;
                      }
                      else {
                        sVar23 = wcslen(_Str);
                        FUN_1449b853c(&local_f8,_Str,sVar23 & 0xffffffff,1);
                      }
                      uVar16 = local_70;
                      if ((local_148 != (byte *)0x0) && ((~*local_148 & 3) == 0)) {
                        lVar18 = *(longlong *)(local_148 + 8);
                        local_124 = 1;
                        local_120 = (wchar_t **)&DAT_14cb899a0;
                        local_118 = (byte **)&local_124;
                        FUN_14049fede(lVar18 + 0x18,&local_10c,&local_120,0);
                        lVar18 = *(longlong *)
                                  (*(longlong *)(lVar18 + 0x18) + 0x28 + (longlong)local_10c * 0x40)
                        ;
                        if ((lVar18 != 0) && ((*(byte *)(lVar18 + 1) & 2) == 0)) {
                          FUN_140126aca(lVar18,uVar16);
                        }
                      }
                      if (local_78 != 0) {
                        FUN_1400020a8();
                      }
                      if (local_108 != (wchar_t *)0x0) {
                        FUN_1400020a8();
                      }
                      if ((local_148 != (byte *)0x0) && ((~*local_148 & 3) == 0)) {
                        lVar18 = *(longlong *)(local_148 + 8);
                        local_108 = (wchar_t *)CONCAT44(local_108._4_4_,1);
                        local_f8 = (wchar_t *)&DAT_14cb899c8;
                        ppwStack_f0 = &local_108;
                        FUN_14049fede(lVar18 + 0x18,&local_120,&local_f8,0);
                        lVar18 = *(longlong *)
                                  (*(longlong *)(lVar18 + 0x18) + 0x28 +
                                  (longlong)(int)local_120 * 0x40);
                        if (lVar18 != 0) {
                          FUN_1406114f4(lVar18,*(undefined4 *)(lVar19 + 0x18 + (longlong)plVar17));
                        }
                      }
                      local_108 = *(wchar_t **)(lVar19 + (longlong)plVar17);
                      local_f8 = (wchar_t *)0x0;
                      ppwStack_f0 = (wchar_t **)0x0;
                      local_e8 = 0;
                      local_e0 = 0;
                      uStack_d8 = 0;
                      local_118 = &pbStack_100;
                      local_120 = &local_108;
                      FUN_14581cf4c(&local_f8,&local_120);
                      if (local_138 != 0) {
                        local_178 = 0;
                        FUN_14014191c(local_138,&local_f8);
                      }
                      if (local_e0 != 0) {
                        FUN_1400020a8();
                      }
                      plVar9 = plStack_140;
                      if (plStack_140 != (longlong *)0x0) {
                        LOCK();
                        plVar2 = plStack_140 + 1;
                        *(int *)plVar2 = (int)*plVar2 + -1;
                        UNLOCK();
                        if ((int)*plVar2 == 0) {
                          (**(code **)*plStack_140)(plStack_140);
                          LOCK();
                          piVar4 = (int *)((longlong)plVar9 + 0xc);
                          *piVar4 = *piVar4 + -1;
                          UNLOCK();
                          if (*piVar4 == 0) {
                            (**(code **)(*plVar9 + 0x10))(plVar9);
                          }
                        }
                      }
                      plVar17 = (longlong *)((longlong)plVar17 + 0x1c);
                    } while (plVar15 != plVar17);
                  }
                  if (*param_5 != 0) {
                    local_178 = 0;
                    FUN_14014191c(*param_5,&DAT_14cb89978,&local_138,0);
                  }
                  plVar17 = plStack_130;
                  if (plStack_130 != (longlong *)0x0) {
                    LOCK();
                    plVar9 = plStack_130 + 1;
                    *(int *)plVar9 = (int)*plVar9 + -1;
                    UNLOCK();
                    if ((int)*plVar9 == 0) {
                      (**(code **)*plStack_130)(plStack_130);
                      LOCK();
                      piVar4 = (int *)((longlong)plVar17 + 0xc);
                      *piVar4 = *piVar4 + -1;
                      UNLOCK();
                      if (*piVar4 == 0) {
                        (**(code **)(*plVar17 + 0x10))(plVar17);
                      }
                    }
                  }
                }
                plVar17 = plStack_150;
                if (plStack_150 != (longlong *)0x0) {
                  LOCK();
                  plVar9 = plStack_150 + 1;
                  *(int *)plVar9 = (int)*plVar9 + -1;
                  UNLOCK();
                  if ((int)*plVar9 == 0) {
                    (**(code **)*plStack_150)(plStack_150);
                    LOCK();
                    piVar4 = (int *)((longlong)plVar17 + 0xc);
                    *piVar4 = *piVar4 + -1;
                    UNLOCK();
                    if (*piVar4 == 0) {
                      (**(code **)(*plVar17 + 0x10))(plVar17);
                    }
                  }
                }
                uVar29 = (undefined7)((ulonglong)plVar15 >> 8);
                bVar27 = 1;
                unaff_R12B = 1;
              }
              goto LAB_140a2f9bb;
            }
          }
          bVar27 = 1;
          uVar29 = 0;
          unaff_R12B = 0;
        }
        goto LAB_140a2f9bb;
      }
    }
  }
  bVar27 = 0;
  uVar29 = 0;
LAB_140a2f9bb:
  if ((local_60 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT71(uVar29,bVar27 & unaff_R12B) & 0xffffffff;
}



// FUNCTION 140a2fa8e FUN_140a2fa8e body=106 status=ok
// SIG undefined FUN_140a2fa8e(void)

undefined8 FUN_140a2fa8e(longlong *param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar2 = (**(code **)(*param_1 + 0x180))();
  if ((((lVar2 != 0) && (lVar2 = FUN_1400f6f32(lVar2), lVar2 != 0)) &&
      (*(longlong *)(lVar2 + 0x68) != 0)) && (-1 < *(short *)(param_2 + 0x18))) {
    uVar3 = FUN_140a2fb0c(*(longlong *)(lVar2 + 0x68),param_2 + 0x18);
    cVar1 = (**(code **)(*param_1 + 0x2d8))(param_1,uVar3);
    if (cVar1 == '\0') {
      return 0;
    }
    return uVar3;
  }
  return 0;
}



// FUNCTION 140a2fb0c FUN_140a2fb0c body=142 status=ok
// SIG undefined FUN_140a2fb0c(void)

undefined8 FUN_140a2fb0c(longlong param_1,ushort *param_2)

{
  ushort uVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  uVar1 = *param_2;
  if ((-1 < (short)uVar1) && ((int)(short)uVar1 < *(int *)(param_1 + 0x10))) {
    lVar5 = *(longlong *)(*(longlong *)(param_1 + 8) + (ulonglong)uVar1 * 8);
    if ((lVar5 != 0) && (*(uint *)(lVar5 + 8) == (uint)param_2[1])) {
      if (-1 < *(short *)(lVar5 + 4)) {
        do {
          lVar5 = *(longlong *)(*(longlong *)(param_1 + 8) + (longlong)*(short *)(lVar5 + 2) * 8);
        } while (-1 < *(short *)(lVar5 + 4));
        if (lVar5 == 0) {
          return 0;
        }
      }
      if (*(int *)(lVar5 + 0x30) != 0) {
        uVar2 = *(uint *)(lVar5 + 0x2c);
        uVar3 = 0;
        if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
          puVar4 = (undefined8 *)
                   ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
          if (puVar4 == (undefined8 *)0x0) {
            return 0;
          }
          if (*(int *)(puVar4 + 2) != *(int *)(lVar5 + 0x30)) {
            return 0;
          }
          if ((*(uint *)(puVar4 + 1) & 0x10200000) != 0) {
            return 0;
          }
          uVar3 = *puVar4;
        }
        return uVar3;
      }
    }
  }
  return 0;
}



// FUNCTION 140a2fb9a FUN_140a2fb9a body=194 status=ok
// SIG undefined FUN_140a2fb9a(void)

undefined4 FUN_140a2fb9a(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 *puVar6;
  
  lVar4 = *(longlong *)(param_1 + 0x110);
  if (lVar4 == 0) {
    uVar3 = FUN_140e2014e();
    lVar4 = FUN_14477b664(uVar3);
    *(longlong *)(param_1 + 0x110) = lVar4;
  }
  lVar5 = *(longlong *)(param_1 + 0x118);
  if (lVar5 == 0) {
    if (lVar4 == 0) {
      return 0;
    }
    if (*(longlong *)(param_1 + 0x108) == 0) {
      return 0;
    }
    plVar1 = *(longlong **)(lVar4 + 0xb8);
    if ((plVar1 == (longlong *)0x0) ||
       (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
      *(undefined8 *)(param_1 + 0x118) = 0;
      return 0;
    }
    uVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
    lVar5 = FUN_144aff482(uVar3,(longlong *)(param_1 + 0x108));
    *(longlong *)(param_1 + 0x118) = lVar5;
    if (lVar5 == 0) {
      return 0;
    }
  }
  lVar4 = FUN_140a48a68(lVar5);
  puVar6 = (undefined4 *)(lVar5 + 0x1c);
  if (lVar4 != 0) {
    puVar6 = (undefined4 *)(lVar4 + 0x34);
  }
  return *puVar6;
}



// FUNCTION 140a2fc5c FUN_140a2fc5c body=1030 status=ok
// SIG undefined FUN_140a2fc5c(void)

longlong * FUN_140a2fc5c(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
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
  for (; param_1 != (longlong *)0x0; param_1 = (longlong *)param_1[4]) {
    if (DAT_14c951858 == 0) {
      local_50 = FUN_1449e2820;
      local_60 = FUN_14081d0ea;
      local_68 = FUN_14081d0ea;
      local_70 = &local_50;
      local_78 = &LAB_1468c5283;
      local_80 = FUN_142809da0;
      local_88 = L"Engine";
      local_90 = 0x400000000;
      local_98 = 0x10000000;
      local_a0 = 8;
      local_a8 = 0x50;
      FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
    }
    lVar1 = param_1[2];
    iVar4 = *(int *)(lVar1 + 0x38);
    if ((*(int *)(DAT_14c951858 + 0x38) <= iVar4) &&
       (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(DAT_14c951858 + 0x38) * 8) ==
        DAT_14c951858 + 0x30)) break;
    if (DAT_14cb61cd0 == 0) {
      local_50 = FUN_141030f22;
      local_60 = FUN_14081d0ea;
      local_68 = (code *)&LAB_1463b31ae;
      local_70 = &local_50;
      local_78 = &LAB_1486dca4f;
      local_80 = (code *)&LAB_1464f50a6;
      local_88 = L"Game";
      local_90 = 0;
      local_98 = 0x10000004;
      local_a0 = 8;
      local_a8 = 0xd70;
      FUN_14081cfa3(L"/Script/GbxGame",L"GbxPlayerController",&DAT_14cb61cd0,FUN_1464f5084);
      lVar1 = param_1[2];
      iVar4 = *(int *)(lVar1 + 0x38);
    }
    if ((*(int *)(DAT_14cb61cd0 + 0x38) <= iVar4) &&
       (plVar3 = param_1,
       *(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(DAT_14cb61cd0 + 0x38) * 8) ==
       DAT_14cb61cd0 + 0x30)) goto LAB_140a3002d;
    lVar2 = FUN_1400d1928();
    lVar1 = param_1[2];
    iVar4 = *(int *)(lVar1 + 0x38);
    if ((iVar4 < *(int *)(lVar2 + 0x38)) ||
       (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
        lVar2 + 0x30)) {
      if (DAT_14cac9ca8 == 0) {
        local_50 = FUN_141030f22;
        local_60 = FUN_14081d0ea;
        local_68 = FUN_14081d0ea;
        local_70 = &local_50;
        local_78 = &LAB_1478c0a72;
        local_80 = (code *)&LAB_1417b2375;
        local_88 = L"Engine";
        local_90 = 0x1000000000;
        local_98 = 0x10000004;
        local_a0 = 8;
        local_a8 = 0x390;
        FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
        lVar1 = param_1[2];
        iVar4 = *(int *)(lVar1 + 0x38);
      }
      if ((*(int *)(DAT_14cac9ca8 + 0x38) <= iVar4) &&
         (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8)
          == DAT_14cac9ca8 + 0x30)) {
        plVar3 = (longlong *)(**(code **)(*param_1 + 0x5d8))(param_1);
        goto LAB_140a2fd77;
      }
    }
    else {
      plVar3 = (longlong *)FUN_1401b2ade(param_1);
LAB_140a2fd77:
      if (plVar3 != (longlong *)0x0) {
        if (DAT_14cb61cd0 == 0) {
          local_50 = FUN_141030f22;
          local_60 = FUN_14081d0ea;
          local_68 = (code *)&LAB_1463b31ae;
          local_70 = &local_50;
          local_78 = &LAB_1486dca4f;
          local_80 = (code *)&LAB_1464f50a6;
          local_88 = L"Game";
          local_90 = 0;
          local_98 = 0x10000004;
          local_a0 = 8;
          local_a8 = 0xd70;
          FUN_14081cfa3(L"/Script/GbxGame",L"GbxPlayerController",&DAT_14cb61cd0,FUN_1464f5084);
        }
        if ((*(int *)(DAT_14cb61cd0 + 0x38) <= *(int *)(plVar3[2] + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(plVar3[2] + 0x30) + (longlong)*(int *)(DAT_14cb61cd0 + 0x38) * 8) ==
            DAT_14cb61cd0 + 0x30)) goto LAB_140a3002d;
      }
    }
  }
  plVar3 = (longlong *)0x0;
LAB_140a3002d:
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return plVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a30064 FUN_140a30064 body=275 status=ok
// SIG undefined FUN_140a30064(void)

void FUN_140a30064(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  byte bVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  iVar1 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar1 + 1;
  lVar7 = (longlong)(int)param_1[1];
  if (lVar7 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar1;
  }
  else {
    uVar8 = lVar7 + 1;
    lVar7 = lVar7 * 0x10 + -8;
    bVar5 = 0;
    do {
      if (((*(int *)(*param_1 + lVar7) == 0) ||
          (plVar2 = *(longlong **)(*param_1 + -8 + lVar7), plVar2 == (longlong *)0x0)) ||
         (cVar3 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2,param_3), cVar3 == '\0')) {
        bVar5 = 1;
      }
      uVar8 = uVar8 - 1;
      lVar7 = lVar7 + -0x10;
    } while (1 < uVar8);
    iVar1 = *(int *)((longlong)param_1 + 0x14);
    *(int *)((longlong)param_1 + 0x14) = iVar1 + -1;
    if ((bool)(bVar5 & iVar1 < 2)) {
      iVar1 = (int)param_1[1];
      iVar4 = iVar1;
      if (0 < iVar1) {
        iVar6 = 0;
        do {
          if (((*(int *)(*param_1 + 8 + (longlong)iVar6 * 0x10) == 0) ||
              (plVar2 = *(longlong **)(*param_1 + (longlong)iVar6 * 0x10), plVar2 == (longlong *)0x0
              )) || (cVar3 = (**(code **)(*plVar2 + 0x28))(), cVar3 != '\0')) {
            FUN_14005b288(param_1,iVar6);
            FUN_14005b248(param_1);
          }
          else {
            iVar6 = iVar6 + 1;
          }
          iVar4 = (int)param_1[1];
        } while (iVar6 < iVar4);
      }
      iVar6 = 2;
      if (2 < iVar4 * 2) {
        iVar6 = iVar4 * 2;
      }
      *(int *)(param_1 + 2) = iVar6;
      if ((iVar6 < iVar1) && (*(int *)((longlong)param_1 + 0xc) != iVar4)) {
        FUN_14045812c(param_1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 140a30178 FUN_140a30178 body=2601 status=ok
// SIG undefined FUN_140a30178(void)

ulonglong FUN_140a30178(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  longlong *plVar4;
  bool bVar5;
  char cVar6;
  byte *pbVar7;
  char cVar8;
  undefined8 *puVar9;
  undefined4 **ppuVar10;
  undefined8 uVar11;
  int iVar12;
  longlong lVar13;
  char *pcVar14;
  longlong lVar15;
  longlong lVar16;
  ulonglong uVar17;
  byte *pbVar18;
  undefined4 *puVar19;
  undefined1 auStack_f8 [32];
  undefined1 local_d8;
  ulonglong local_c8;
  longlong *local_c0;
  byte *local_b8;
  longlong *plStack_b0;
  byte *local_a8;
  longlong *plStack_a0;
  undefined4 *local_98;
  longlong *plStack_90;
  undefined4 local_7c;
  undefined4 *local_78;
  byte **local_70;
  int local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (*(char *)(param_1 + 0x191) != '\x01') {
    uVar17 = 0;
    goto LAB_140a309df;
  }
  if (((byte *)*param_2 == (byte *)0x0) || ((*(byte *)*param_2 & 3) == 0)) {
    FUN_14009b010(param_2,3,0);
  }
  lVar15 = *(longlong *)(param_1 + 0x110);
  if (lVar15 == 0) {
    uVar11 = FUN_140e2014e();
    lVar15 = FUN_14477b664(uVar11);
    *(longlong *)(param_1 + 0x110) = lVar15;
  }
  lVar16 = *(longlong *)(param_1 + 0x118);
  if (lVar16 == 0) {
    puVar19 = &DAT_14c9485f0;
    if (lVar15 != 0) {
      puVar19 = &DAT_14c9485f0;
      if (*(longlong *)(param_1 + 0x108) != 0) {
        plVar2 = *(longlong **)(lVar15 + 0xb8);
        if ((plVar2 == (longlong *)0x0) ||
           (cVar6 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar6 == '\0')) {
          *(undefined8 *)(param_1 + 0x118) = 0;
          puVar19 = &DAT_14c9485f0;
        }
        else {
          uVar11 = (**(code **)(*plVar2 + 0x110))(plVar2);
          lVar16 = FUN_144aff482(uVar11,(longlong *)(param_1 + 0x108));
          *(longlong *)(param_1 + 0x118) = lVar16;
          puVar19 = &DAT_14c9485f0;
          if (lVar16 != 0) goto LAB_140a301f4;
        }
      }
    }
  }
  else {
LAB_140a301f4:
    puVar19 = *(undefined4 **)(lVar16 + 8);
    if (puVar19 == (undefined4 *)0x0) {
      puVar19 = &DAT_14c9485f0;
    }
  }
  pbVar7 = (byte *)*param_2;
  if ((pbVar7 != (byte *)0x0) && ((~*pbVar7 & 3) == 0)) {
    lVar15 = *(longlong *)(pbVar7 + 8);
    local_70 = &local_a8;
    local_a8 = (byte *)CONCAT44(local_a8._4_4_,1);
    local_78 = &DAT_14cb89810;
    FUN_14049fede(lVar15 + 0x18,&local_98,&local_78,0);
    lVar15 = *(longlong *)(*(longlong *)(lVar15 + 0x18) + 0x28 + (longlong)(int)local_98 * 0x40);
    if (lVar15 != 0) {
      FUN_1402afb64(lVar15,puVar19);
    }
  }
  lVar15 = *(longlong *)(param_1 + 0x128);
  if (lVar15 == 0) {
    uVar11 = FUN_14034f1a8();
    lVar15 = FUN_14477b664(uVar11);
    *(longlong *)(param_1 + 0x128) = lVar15;
  }
  plVar2 = (longlong *)(param_1 + 0x120);
  lVar16 = *(longlong *)(param_1 + 0x130);
  if (lVar16 == 0) {
    if ((lVar15 != 0) && (*plVar2 != 0)) {
      plVar4 = *(longlong **)(lVar15 + 0xb8);
      if ((plVar4 == (longlong *)0x0) ||
         (cVar6 = (**(code **)(*plVar4 + 0x108))(plVar4), cVar6 == '\0')) {
        *(undefined8 *)(param_1 + 0x130) = 0;
      }
      else {
        uVar11 = (**(code **)(*plVar4 + 0x110))(plVar4);
        lVar16 = FUN_144aff482(uVar11,plVar2);
        *(longlong *)(param_1 + 0x130) = lVar16;
        if (lVar16 != 0) {
          lVar15 = *(longlong *)(param_1 + 0x128);
          goto LAB_140a3028e;
        }
      }
    }
  }
  else {
LAB_140a3028e:
    if (lVar15 == 0) {
      uVar11 = FUN_14034f1a8();
      lVar15 = FUN_14477b664(uVar11);
      *(longlong *)(param_1 + 0x128) = lVar15;
      lVar16 = *(longlong *)(param_1 + 0x130);
      if (((lVar16 == 0) && (lVar16 = 0, lVar15 != 0)) && (*plVar2 != 0)) {
        plVar4 = *(longlong **)(lVar15 + 0xb8);
        if ((plVar4 == (longlong *)0x0) ||
           (cVar6 = (**(code **)(*plVar4 + 0x108))(plVar4), cVar6 == '\0')) {
          lVar16 = 0;
        }
        else {
          uVar11 = (**(code **)(*plVar4 + 0x110))(plVar4);
          lVar16 = FUN_144aff482(uVar11,plVar2);
        }
        *(longlong *)(param_1 + 0x130) = lVar16;
      }
    }
    puVar19 = &DAT_14c9485f0;
    if (*(undefined4 **)(lVar16 + 8) != (undefined4 *)0x0) {
      puVar19 = *(undefined4 **)(lVar16 + 8);
    }
    pbVar7 = (byte *)*param_2;
    if ((pbVar7 != (byte *)0x0) && ((~*pbVar7 & 3) == 0)) {
      lVar15 = *(longlong *)(pbVar7 + 8);
      local_70 = &local_a8;
      local_a8 = (byte *)CONCAT44(local_a8._4_4_,1);
      local_78 = &DAT_14cb89838;
      FUN_14049fede(lVar15 + 0x18,&local_98,&local_78,0);
      lVar15 = *(longlong *)(*(longlong *)(lVar15 + 0x18) + 0x28 + (longlong)(int)local_98 * 0x40);
      if (lVar15 != 0) {
        FUN_1402afb64(lVar15,puVar19);
      }
    }
  }
  local_a8 = (byte *)0x0;
  plStack_a0 = (longlong *)0x0;
  FUN_14009b010(&local_a8,2,0);
  puVar9 = &DAT_14c9a1270;
  if ((local_a8 != (byte *)0x0) && ((*local_a8 & 2) != 0)) {
    puVar9 = *(undefined8 **)(local_a8 + 8);
  }
  iVar12 = *(int *)(param_1 + 0x140);
  if (iVar12 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar12);
  }
  if (*(int *)((longlong)puVar9 + 0x14) < iVar12) {
    FUN_14009b4be();
    iVar12 = *(int *)(param_1 + 0x140);
  }
  local_c0 = param_2;
  if (iVar12 == 0) {
    local_c8 = 0;
  }
  else {
    lVar15 = *(longlong *)(param_1 + 0x138);
    lVar16 = (longlong)iVar12 * 0xa8 + lVar15;
    local_c8 = 0;
    do {
      local_b8 = (byte *)0x0;
      plStack_b0 = (longlong *)0x0;
      FUN_14009b010(&local_b8,3,0);
      if (((((*(int *)(lVar15 + 0x5c) != 0) && (uVar3 = *(uint *)(lVar15 + 0x58), -1 < (int)uVar3))
           && ((int)uVar3 < DAT_14c9647dc)) &&
          ((lVar13 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8), lVar13 != 0 &&
           (*(int *)(lVar13 + 0x10) == *(int *)(lVar15 + 0x5c))))) &&
         ((*(uint *)(lVar13 + 8) & 0x10200000) == 0)) {
        if ((local_b8 == (byte *)0x0) || ((*local_b8 & 3) == 0)) {
          FUN_14009b010(&local_b8,3);
        }
        if (*(undefined8 **)(lVar15 + 0x50) == (undefined8 *)0x0) {
          local_78 = (undefined4 *)0x0;
        }
        else {
          local_78 = (undefined4 *)**(undefined8 **)(lVar15 + 0x50);
        }
        ppuVar10 = (undefined4 **)(lVar15 + 0x48);
        if (local_78 != (undefined4 *)0x0) {
          ppuVar10 = &local_78;
        }
        local_98 = *ppuVar10;
        if ((local_b8 != (byte *)0x0) && ((~*local_b8 & 3) == 0)) {
          lVar13 = *(longlong *)(local_b8 + 8);
          local_7c = 1;
          local_78 = &DAT_14cb89810;
          local_70 = (byte **)&local_7c;
          FUN_14049fede(lVar13 + 0x18,&local_64,&local_78,0);
          lVar13 = *(longlong *)(*(longlong *)(lVar13 + 0x18) + 0x28 + (longlong)local_64 * 0x40);
          if (lVar13 != 0) {
            FUN_1401269d0(lVar13,&local_98);
          }
        }
        local_98 = (undefined4 *)0x0;
        plStack_90 = (longlong *)0x0;
        FUN_14009b010(&local_98,3);
        if ((*(int *)(lVar15 + 0x5c) == 0) || (uVar3 = *(uint *)(lVar15 + 0x58), (int)uVar3 < 0)) {
LAB_140a307a9:
          uVar11 = 0;
        }
        else {
          uVar11 = 0;
          if ((int)uVar3 < DAT_14c9647dc) {
            puVar9 = (undefined8 *)
                     ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
            if (((puVar9 == (undefined8 *)0x0) || (*(int *)(puVar9 + 2) != *(int *)(lVar15 + 0x5c)))
               || ((*(uint *)(puVar9 + 1) & 0x10200000) != 0)) goto LAB_140a307a9;
            uVar11 = *puVar9;
          }
        }
        cVar6 = FUN_140a30c40(uVar11);
        if ((cVar6 == '\0') || (*(int *)(lVar15 + 0x94) < 1)) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
          if ((local_b8 != (byte *)0x0) && ((~*local_b8 & 3) == 0)) {
            lVar13 = *(longlong *)(local_b8 + 8);
            local_7c = 1;
            local_78 = &DAT_14cb89900;
            local_70 = (byte **)&local_7c;
            FUN_14049fede(lVar13 + 0x18,&local_64,&local_78,0);
            lVar13 = *(longlong *)(*(longlong *)(lVar13 + 0x18) + 0x28 + (longlong)local_64 * 0x40);
            if (lVar13 != 0) {
              FUN_1404a8912(lVar13,*(undefined4 *)(lVar15 + 0x94));
            }
          }
        }
        if ((*(int *)(lVar15 + 0x5c) == 0) || (uVar3 = *(uint *)(lVar15 + 0x58), (int)uVar3 < 0)) {
LAB_140a307b0:
          uVar11 = 0;
        }
        else {
          uVar11 = 0;
          if ((int)uVar3 < DAT_14c9647dc) {
            puVar9 = (undefined8 *)
                     ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
            if (((puVar9 == (undefined8 *)0x0) || (*(int *)(puVar9 + 2) != *(int *)(lVar15 + 0x5c)))
               || ((*(uint *)(puVar9 + 1) & 0x10200000) != 0)) goto LAB_140a307b0;
            uVar11 = *puVar9;
          }
        }
        pbVar7 = (byte *)FUN_140a30ba2(uVar11);
        if ((char)pbVar7 != '\0') {
          cVar6 = *(char *)(lVar15 + 0x91);
          pbVar7 = (byte *)FUN_140a30cde();
          if (((char)pbVar7 == '\0') || (*(longlong *)(lVar15 + 0x70) != 0)) {
LAB_140a30632:
            cVar8 = '\0';
          }
          else {
            if ((((*(int *)(lVar15 + 0x5c) != 0) &&
                 ((uVar3 = *(uint *)(lVar15 + 0x58), -1 < (int)uVar3 && ((int)uVar3 < DAT_14c9647dc)
                  ))) && (puVar9 = (undefined8 *)
                                   ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
                         puVar9 != (undefined8 *)0x0)) &&
               ((*(int *)(puVar9 + 2) == *(int *)(lVar15 + 0x5c) &&
                ((*(uint *)(puVar9 + 1) & 0x10200000) == 0)))) {
              if ((*(uint *)(puVar9 + 1) & 0x10200000) == 0) {
                uVar11 = *puVar9;
              }
              else {
                uVar11 = 0;
              }
              pbVar7 = (byte *)FUN_140a30ba2(uVar11);
              cVar8 = '\x01';
              if ((char)pbVar7 != '\0') goto LAB_140a30634;
            }
            cVar8 = '\x01';
            pbVar7 = (byte *)0x0;
            if ((longlong)*(int *)(lVar15 + 0x88) != 0) {
              pbVar7 = (byte *)((longlong)*(int *)(lVar15 + 0x88) * 8);
              pbVar18 = (byte *)0x0;
              do {
                if (*(longlong *)(*(longlong *)(pbVar18 + *(longlong *)(lVar15 + 0x80)) + 0x70) != 0
                   ) goto LAB_140a30632;
                pbVar18 = pbVar18 + 8;
              } while (pbVar7 != pbVar18);
            }
          }
LAB_140a30634:
          if (cVar6 != cVar8) {
            pbVar7 = local_b8;
            if ((local_b8 != (byte *)0x0) && ((~*local_b8 & 3) == 0)) {
              lVar13 = *(longlong *)(local_b8 + 8);
              local_7c = 1;
              local_78 = (undefined4 *)&DAT_14cb89928;
              local_70 = (byte **)&local_7c;
              FUN_14049fede(lVar13 + 0x18,&local_64,&local_78,0);
              pbVar7 = (byte *)((longlong)local_64 * 0x40);
              lVar13 = *(longlong *)(pbVar7 + *(longlong *)(lVar13 + 0x18) + 0x28);
              if ((lVar13 != 0) && ((*(byte *)(lVar13 + 1) & 2) == 0)) {
                pcVar14 = "false";
                if (*(char *)(lVar15 + 0x91) != '\0') {
                  pcVar14 = "true";
                }
                pbVar7 = (byte *)FUN_140126aca(lVar13,pcVar14);
              }
            }
            bVar5 = true;
            if (((0 < *(int *)(lVar15 + 0x9c)) && (pbVar7 = local_b8, local_b8 != (byte *)0x0)) &&
               ((~*local_b8 & 3) == 0)) {
              lVar13 = *(longlong *)(local_b8 + 8);
              local_7c = 1;
              local_78 = (undefined4 *)&DAT_14cb89950;
              local_70 = (byte **)&local_7c;
              FUN_14049fede(lVar13 + 0x18,&local_64,&local_78,0);
              pbVar7 = (byte *)((longlong)local_64 * 0x40);
              if (*(longlong *)(pbVar7 + *(longlong *)(lVar13 + 0x18) + 0x28) != 0) {
                pbVar7 = (byte *)FUN_1404a8912(*(longlong *)
                                                (pbVar7 + *(longlong *)(lVar13 + 0x18) + 0x28),
                                               *(undefined4 *)(lVar15 + 0x9c));
              }
            }
          }
        }
        plVar2 = plStack_90;
        if (plStack_90 != (longlong *)0x0) {
          LOCK();
          plVar4 = plStack_90 + 1;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)*plVar4 == 0) {
            pbVar7 = (byte *)(**(code **)*plStack_90)(plStack_90);
            LOCK();
            piVar1 = (int *)((longlong)plVar2 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              pbVar7 = (byte *)(**(code **)(*plVar2 + 0x10))(plVar2);
            }
          }
        }
        if ((bVar5) &&
           (local_c8 = CONCAT71((int7)((ulonglong)pbVar7 >> 8),1), local_a8 != (byte *)0x0)) {
          local_d8 = 0;
          FUN_140141db6(local_a8,&local_b8);
        }
      }
      plVar2 = plStack_b0;
      if (plStack_b0 != (longlong *)0x0) {
        LOCK();
        plVar4 = plStack_b0 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
          (**(code **)*plStack_b0)(plStack_b0);
          LOCK();
          piVar1 = (int *)((longlong)plVar2 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar2 + 0x10))(plVar2);
          }
        }
      }
      lVar15 = lVar15 + 0xa8;
    } while (lVar15 != lVar16);
  }
  uVar17 = local_c8;
  puVar9 = &DAT_14c9a1270;
  if ((local_a8 != (byte *)0x0) && ((*local_a8 & 2) != 0)) {
    puVar9 = *(undefined8 **)(local_a8 + 8);
  }
  if ((*(int *)(puVar9 + 2) != 0) && (*local_c0 != 0)) {
    local_d8 = 0;
    FUN_14014191c(*local_c0,&DAT_14cb89860,&local_a8,0);
  }
  plVar2 = plStack_a0;
  if (plStack_a0 != (longlong *)0x0) {
    LOCK();
    plVar4 = plStack_a0 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*plStack_a0)(plStack_a0);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
LAB_140a309df:
  if ((local_60 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar17 & 0xffffff01;
}



// FUNCTION 140a30ba2 FUN_140a30ba2 body=158 status=ok
// SIG undefined FUN_140a30ba2(void)

bool FUN_140a30ba2(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  lVar3 = *(longlong *)(param_1 + 0x110);
  if (lVar3 == 0) {
    uVar4 = FUN_140e2014e();
    lVar3 = FUN_14477b664(uVar4);
    *(longlong *)(param_1 + 0x110) = lVar3;
  }
  lVar5 = *(longlong *)(param_1 + 0x118);
  if (((lVar5 != 0) || (lVar5 = 0, lVar3 == 0)) || (*(longlong *)(param_1 + 0x108) == 0))
  goto LAB_140a30bc4;
  plVar1 = *(longlong **)(lVar3 + 0xb8);
  if (plVar1 == (longlong *)0x0) {
LAB_140a30c3c:
    lVar5 = 0;
  }
  else {
    cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1);
    if (cVar2 == '\0') goto LAB_140a30c3c;
    uVar4 = (**(code **)(*plVar1 + 0x110))(plVar1);
    lVar5 = FUN_144aff482(uVar4,(longlong *)(param_1 + 0x108));
  }
  *(longlong *)(param_1 + 0x118) = lVar5;
LAB_140a30bc4:
  return *(char *)(lVar5 + 0x18) == '\x01';
}



// FUNCTION 140a30c40 FUN_140a30c40 body=158 status=ok
// SIG undefined FUN_140a30c40(void)

bool FUN_140a30c40(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  lVar3 = *(longlong *)(param_1 + 0x110);
  if (lVar3 == 0) {
    uVar4 = FUN_140e2014e();
    lVar3 = FUN_14477b664(uVar4);
    *(longlong *)(param_1 + 0x110) = lVar3;
  }
  lVar5 = *(longlong *)(param_1 + 0x118);
  if (((lVar5 != 0) || (lVar5 = 0, lVar3 == 0)) || (*(longlong *)(param_1 + 0x108) == 0))
  goto LAB_140a30c62;
  plVar1 = *(longlong **)(lVar3 + 0xb8);
  if (plVar1 == (longlong *)0x0) {
LAB_140a30cda:
    lVar5 = 0;
  }
  else {
    cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1);
    if (cVar2 == '\0') goto LAB_140a30cda;
    uVar4 = (**(code **)(*plVar1 + 0x110))(plVar1);
    lVar5 = FUN_144aff482(uVar4,(longlong *)(param_1 + 0x108));
  }
  *(longlong *)(param_1 + 0x118) = lVar5;
LAB_140a30c62:
  return *(char *)(lVar5 + 0x18) == '\0';
}



// FUNCTION 140a30cde FUN_140a30cde body=142 status=ok
// SIG undefined FUN_140a30cde(void)

bool FUN_140a30cde(longlong param_1)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  
  if ((((*(int *)(param_1 + 0x5c) != 0) && (uVar1 = *(uint *)(param_1 + 0x58), -1 < (int)uVar1)) &&
      ((int)uVar1 < DAT_14c9647dc)) &&
     (((puVar6 = (undefined8 *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
       puVar6 != (undefined8 *)0x0 && (*(int *)(puVar6 + 2) == *(int *)(param_1 + 0x5c))) &&
      ((*(uint *)(puVar6 + 1) & 0x10200000) == 0)))) {
    if ((*(uint *)(puVar6 + 1) & 0x10200000) == 0) {
      uVar5 = *puVar6;
    }
    else {
      uVar5 = 0;
    }
    cVar4 = FUN_140a30ba2(uVar5);
    if (cVar4 != '\0') {
      iVar2 = *(int *)(param_1 + 0x88);
      goto LAB_140a30d42;
    }
  }
  lVar3 = *(longlong *)(param_1 + 0x50);
  if (lVar3 == 0) {
    return true;
  }
  if (*(char *)(lVar3 + 8) != '\x01') {
    return false;
  }
  iVar2 = *(int *)(lVar3 + 0xc);
LAB_140a30d42:
  return iVar2 == 0;
}



// FUNCTION 140a30d6c FUN_140a30d6c body=57 status=ok
// SIG undefined FUN_140a30d6c(void)

void FUN_140a30d6c(longlong param_1,int param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  if (param_2 != 0) {
    lVar3 = 0;
    do {
      puVar2 = *(undefined8 **)(param_1 + lVar3 * 8);
      if (puVar2 != (undefined8 *)0x0) {
        piVar1 = (int *)(puVar2 + 1);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          (**(code **)*puVar2)(puVar2,1);
        }
      }
      lVar3 = lVar3 + 1;
    } while (param_2 != (int)lVar3);
  }
  return;
}



// FUNCTION 140a30da6 FUN_140a30da6 body=79 status=ok
// SIG undefined FUN_140a30da6(void)

undefined8 * FUN_140a30da6(undefined8 *param_1,int param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_14aac2950;
  puVar2 = (undefined8 *)param_1[2];
  if (puVar2 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  *param_1 = &PTR_FUN_149e38530;
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140a30df5 FUN_140a30df5 body=57 status=ok
// SIG undefined FUN_140a30df5(void)

void FUN_140a30df5(longlong param_1,int param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  if (param_2 != 0) {
    lVar3 = 0;
    do {
      puVar2 = *(undefined8 **)(param_1 + lVar3 * 8);
      if (puVar2 != (undefined8 *)0x0) {
        piVar1 = (int *)(puVar2 + 1);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          (**(code **)*puVar2)(puVar2,1);
        }
      }
      lVar3 = lVar3 + 1;
    } while (param_2 != (int)lVar3);
  }
  return;
}



// FUNCTION 140a30e2e FUN_140a30e2e body=38 status=ok
// SIG undefined FUN_140a30e2e(void)

undefined8 FUN_140a30e2e(undefined8 param_1,int param_2)

{
  FUN_140a30e54();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140a30e54 FUN_140a30e54 body=130 status=ok
// SIG undefined FUN_140a30e54(void)

void FUN_140a30e54(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  
  *param_1 = &PTR_FUN_14aac2948;
  puVar3 = (undefined8 *)param_1[4];
  if (puVar3 != (undefined8 *)0x0) {
    piVar2 = (int *)(puVar3 + 1);
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  plVar1 = param_1 + 2;
  if (*(int *)(param_1 + 3) != 0) {
    puVar3 = (undefined8 *)*plVar1;
    if (puVar3 == (undefined8 *)0x0) goto LAB_140a30e82;
    (**(code **)*puVar3)(puVar3,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 3) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_140a30e82:
  *param_1 = &PTR_FUN_149e38530;
  return;
}



// FUNCTION 140a30ee2 FUN_140a30ee2 body=139 status=ok
// SIG undefined FUN_140a30ee2(void)

undefined8 FUN_140a30ee2(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined1 local_38 [24];
  longlong local_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = FUN_1405831b2();
  local_40 = *(undefined8 *)(lVar1 + 0xd18 + (ulonglong)*(byte *)(param_1 + 0x57) * 0x18);
  FUN_1446dcdd4(local_38);
  if (DAT_14cb77da0 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_144837462(DAT_14cb77da0,local_38);
  }
  if (local_20 != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140a30f6e FUN_140a30f6e body=2188 status=ok
// SIG undefined FUN_140a30f6e(void)

undefined8 FUN_140a30f6e(short *param_1,longlong param_2,undefined4 *param_3)

{
  short sVar1;
  undefined2 uVar2;
  char cVar3;
  ushort uVar4;
  int iVar5;
  ulong uVar6;
  void *pvVar7;
  undefined8 uVar8;
  undefined2 *puVar9;
  wchar_t wVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  wchar_t *pwVar16;
  wchar_t *pwVar17;
  longlong lVar18;
  undefined1 auStack_1b8 [36];
  ulong local_194;
  wchar_t *local_190;
  wchar_t *local_188;
  wchar_t *local_180;
  char local_178;
  wchar_t local_170 [4];
  wchar_t local_168 [12];
  wchar_t local_150 [96];
  longlong local_90;
  undefined8 local_88;
  undefined4 local_80;
  wchar_t *local_78;
  wchar_t *local_70;
  wchar_t *local_68;
  char local_60;
  wchar_t local_58 [8];
  ulonglong local_48;
  undefined7 uVar10;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = 0;
  }
  if (*param_1 == 0x22) {
    pwVar16 = param_1 + 1;
LAB_140a30fce:
    do {
      lVar18 = -0x100000000;
      uVar12 = 0;
      do {
        uVar14 = uVar12;
        uVar4 = *(ushort *)((longlong)pwVar16 + uVar14);
        uVar12 = 1L << ((byte)uVar4 & 0x3f);
        uVar15 = uVar12 & 0x400002401;
        if (0x3f < uVar4) {
          uVar15 = 0;
        }
        uVar13 = (ulonglong)((uint)uVar12 & 0x10000000);
        if ((uVar4 & 0xffc0) != 0x40) {
          uVar13 = 0;
        }
        uVar12 = uVar14 + 2;
        lVar18 = lVar18 + 0x100000000;
      } while (uVar13 == 0 && uVar15 == 0);
      lVar18 = lVar18 >> 0x20;
      if (*(ulonglong *)(param_2 + 0x10) <= (ulonglong)(*(longlong *)(param_2 + 8) + lVar18 * 2)) {
        FUN_140213274(param_2,lVar18);
      }
      pvVar7 = (void *)(uVar14 >> 1);
      if ((int)pvVar7 != 0) {
        pvVar7 = *(void **)(param_2 + 8);
        memcpy(pvVar7,pwVar16,lVar18 * 2);
        pvVar7 = (void *)(lVar18 * 2 + (longlong)pvVar7);
        *(void **)(param_2 + 8) = pvVar7;
      }
      sVar1 = *(short *)((longlong)pwVar16 + uVar14);
      if (sVar1 != 0x5c) goto code_r0x000140a31077;
      uVar4 = *(ushort *)((longlong)pwVar16 + uVar12);
      if (uVar4 < 0x6e) {
        if (uVar4 == 0x22) {
          puVar9 = *(undefined2 **)(param_2 + 8);
          if (*(undefined2 **)(param_2 + 0x10) <= puVar9 + 1) {
            FUN_140213274(param_2,1);
            puVar9 = *(undefined2 **)(param_2 + 8);
          }
          *(undefined2 **)(param_2 + 8) = puVar9 + 1;
          *puVar9 = 0x22;
        }
        else if (uVar4 == 0x27) {
          puVar9 = *(undefined2 **)(param_2 + 8);
          if (*(undefined2 **)(param_2 + 0x10) <= puVar9 + 1) {
            FUN_140213274(param_2,1);
            puVar9 = *(undefined2 **)(param_2 + 8);
          }
          *(undefined2 **)(param_2 + 8) = puVar9 + 1;
          *puVar9 = 0x27;
        }
        else {
          if (uVar4 != 0x5c) {
LAB_140a31273:
            if ((uVar4 & 0xfff8) == 0x30) {
              pwVar17 = (wchar_t *)((longlong)pwVar16 + uVar12);
              local_190 = local_170;
              local_180 = local_150;
              local_178 = '\0';
              wVar11 = *(wchar_t *)((longlong)pwVar16 + uVar12);
              local_188 = local_190;
              if (((wVar11 & 0xfff8U) == 0x30) &&
                 (local_188 = local_190,
                 0x3f < (ushort)wVar11 || (1L << ((byte)wVar11 & 0x3f) & 0x400002401U) == 0)) {
                local_188 = local_190;
                while ((int)((ulonglong)((longlong)local_188 - (longlong)local_190) >> 1) < 3) {
                  if (local_180 <= local_188 + 1) {
                    FUN_140213274(&local_190,1);
                  }
                  pwVar17 = pwVar17 + 1;
                  pwVar16 = local_188 + 1;
                  *local_188 = wVar11;
                  wVar11 = *pwVar17;
                  local_188 = pwVar16;
                  if (((wVar11 & 0xfff8U) != 0x30) ||
                     ((ushort)wVar11 < 0x40 && (1L << ((byte)wVar11 & 0x3f) & 0x400002401U) != 0))
                  break;
                }
              }
              *local_188 = L'\0';
              iVar5 = 8;
LAB_140a31470:
              uVar6 = wcstoul(local_190,(wchar_t **)0x0,iVar5);
              puVar9 = *(undefined2 **)(param_2 + 8);
              if (*(undefined2 **)(param_2 + 0x10) <= puVar9 + 1) {
                FUN_140213274(param_2,1);
                puVar9 = *(undefined2 **)(param_2 + 8);
              }
              *(undefined2 **)(param_2 + 8) = puVar9 + 1;
              *puVar9 = (short)uVar6;
              pwVar16 = pwVar17;
              pwVar17 = local_190;
              cVar3 = local_178;
            }
            else {
              if (uVar4 == 0x78) {
                iVar5 = iswxdigit(*(wint_t *)((longlong)pwVar16 + uVar14 + 4));
                if (iVar5 != 0) {
                  pwVar17 = (wchar_t *)((longlong)pwVar16 + uVar14 + 4);
                  local_190 = local_170;
                  local_180 = local_150;
                  local_178 = '\0';
                  wVar11 = *pwVar17;
                  if ((0x3f < (ushort)wVar11) ||
                     (local_188 = local_190, (1L << ((byte)wVar11 & 0x3f) & 0x400002401U) == 0)) {
                    local_188 = local_190;
                    do {
                      iVar5 = iswxdigit(wVar11);
                      if (iVar5 == 0) break;
                      wVar11 = *pwVar17;
                      if (local_180 <= local_188 + 1) {
                        FUN_140213274(&local_190,1);
                      }
                      pwVar17 = pwVar17 + 1;
                      pwVar16 = local_188 + 1;
                      *local_188 = wVar11;
                      wVar11 = *pwVar17;
                      local_188 = pwVar16;
                    } while ((0x3f < (ushort)wVar11) ||
                            ((1L << ((byte)wVar11 & 0x3f) & 0x400002401U) == 0));
                  }
                  *local_188 = L'\0';
                  iVar5 = 0x10;
                  goto LAB_140a31470;
                }
                uVar4 = *(ushort *)((longlong)pwVar16 + uVar12);
              }
              if (uVar4 == 0x75) {
                iVar5 = iswxdigit(*(wint_t *)((longlong)pwVar16 + uVar14 + 4));
                if (iVar5 != 0) {
                  pwVar16 = (wchar_t *)((longlong)pwVar16 + uVar14 + 4);
                  local_190 = local_170;
                  local_180 = local_168;
                  local_178 = '\0';
                  wVar11 = *pwVar16;
                  if ((0x3f < (ushort)wVar11) ||
                     (local_188 = local_190, (1L << ((byte)wVar11 & 0x3f) & 0x400002401U) == 0)) {
                    local_188 = local_190;
                    do {
                      iVar5 = iswxdigit(wVar11);
                      if ((iVar5 == 0) ||
                         (3 < (int)((ulonglong)((longlong)local_188 - (longlong)local_190) >> 1)))
                      break;
                      wVar11 = *pwVar16;
                      if (local_180 <= local_188 + 1) {
                        FUN_140213274(&local_190,1);
                      }
                      pwVar16 = pwVar16 + 1;
                      pwVar17 = local_188 + 1;
                      *local_188 = wVar11;
                      wVar11 = *pwVar16;
                      local_188 = pwVar17;
                    } while ((0x3f < (ushort)wVar11) ||
                            ((1L << ((byte)wVar11 & 0x3f) & 0x400002401U) == 0));
                  }
                  *local_188 = L'\0';
                  uVar6 = wcstoul(local_190,(wchar_t **)0x0,0x10);
                  local_78 = (wchar_t *)CONCAT62(local_78._2_6_,(short)uVar6);
                  FUN_1449668a2(param_2,&local_78,(short)uVar6 != 0);
                  pwVar17 = local_190;
                  cVar3 = local_178;
                  goto joined_r0x000140a31743;
                }
                uVar4 = *(ushort *)((longlong)pwVar16 + uVar12);
              }
              if ((uVar4 != 0x55) ||
                 (iVar5 = iswxdigit(*(wint_t *)((longlong)pwVar16 + uVar14 + 4)), iVar5 == 0)) {
                puVar9 = *(undefined2 **)(param_2 + 8);
                if (*(undefined2 **)(param_2 + 0x10) <= puVar9 + 1) {
                  FUN_140213274(param_2,1);
                  puVar9 = *(undefined2 **)(param_2 + 8);
                }
                *(undefined2 **)(param_2 + 8) = puVar9 + 1;
                *puVar9 = 0x5c;
                uVar2 = *(undefined2 *)((longlong)pwVar16 + uVar12);
                puVar9 = *(undefined2 **)(param_2 + 8);
                if (*(undefined2 **)(param_2 + 0x10) <= puVar9 + 1) {
                  FUN_140213274(param_2,1);
                  puVar9 = *(undefined2 **)(param_2 + 8);
                }
                pwVar16 = (wchar_t *)((longlong)pwVar16 + uVar14 + 4);
                *(undefined2 **)(param_2 + 8) = puVar9 + 1;
                *puVar9 = uVar2;
                goto LAB_140a30fce;
              }
              pwVar16 = (wchar_t *)((longlong)pwVar16 + uVar14 + 4);
              local_78 = local_58;
              local_68 = (wchar_t *)&local_48;
              local_60 = '\0';
              wVar11 = *pwVar16;
              if ((0x3f < (ushort)wVar11) ||
                 (local_70 = local_78, (1L << ((byte)wVar11 & 0x3f) & 0x400002401U) == 0)) {
                local_70 = local_78;
                do {
                  iVar5 = iswxdigit(wVar11);
                  if ((iVar5 == 0) ||
                     (7 < (int)((ulonglong)((longlong)local_70 - (longlong)local_78) >> 1))) break;
                  wVar11 = *pwVar16;
                  if (local_68 <= local_70 + 1) {
                    FUN_140213274(&local_78,1);
                  }
                  pwVar16 = pwVar16 + 1;
                  pwVar17 = local_70 + 1;
                  *local_70 = wVar11;
                  wVar11 = *pwVar16;
                  local_70 = pwVar17;
                } while ((0x3f < (ushort)wVar11) ||
                        ((1L << ((byte)wVar11 & 0x3f) & 0x400002401U) == 0));
              }
              *local_70 = L'\0';
              local_194 = wcstoul(local_78,(wchar_t **)0x0,0x10);
              local_90 = 0;
              FUN_14681c08a(&local_190,&local_194,local_194 != 0,local_194 == 0);
              FUN_1449668a2(param_2,local_88,local_80);
              pwVar17 = local_78;
              cVar3 = local_60;
              if (local_90 != 0) {
                FUN_1400020a8();
                pwVar17 = local_78;
                cVar3 = local_60;
              }
            }
joined_r0x000140a31743:
            if (cVar3 == '\x01') {
              FUN_1400020a8(pwVar17);
            }
            goto LAB_140a30fce;
          }
          puVar9 = *(undefined2 **)(param_2 + 8);
          if (*(undefined2 **)(param_2 + 0x10) <= puVar9 + 1) {
            FUN_140213274(param_2,1);
            puVar9 = *(undefined2 **)(param_2 + 8);
          }
          *(undefined2 **)(param_2 + 8) = puVar9 + 1;
          *puVar9 = 0x5c;
        }
      }
      else if (uVar4 == 0x6e) {
        puVar9 = *(undefined2 **)(param_2 + 8);
        if (*(undefined2 **)(param_2 + 0x10) <= puVar9 + 1) {
          FUN_140213274(param_2,1);
          puVar9 = *(undefined2 **)(param_2 + 8);
        }
        *(undefined2 **)(param_2 + 8) = puVar9 + 1;
        *puVar9 = 10;
      }
      else if (uVar4 == 0x72) {
        puVar9 = *(undefined2 **)(param_2 + 8);
        if (*(undefined2 **)(param_2 + 0x10) <= puVar9 + 1) {
          FUN_140213274(param_2,1);
          puVar9 = *(undefined2 **)(param_2 + 8);
        }
        *(undefined2 **)(param_2 + 8) = puVar9 + 1;
        *puVar9 = 0xd;
      }
      else {
        if (uVar4 != 0x74) goto LAB_140a31273;
        puVar9 = *(undefined2 **)(param_2 + 8);
        if (*(undefined2 **)(param_2 + 0x10) <= puVar9 + 1) {
          FUN_140213274(param_2,1);
          puVar9 = *(undefined2 **)(param_2 + 8);
        }
        *(undefined2 **)(param_2 + 8) = puVar9 + 1;
        *puVar9 = 9;
      }
      pwVar16 = (wchar_t *)((longlong)pwVar16 + uVar14 + 4);
    } while( true );
  }
  uVar8 = 0;
LAB_140a31098:
  if ((local_48 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8;
code_r0x000140a31077:
  uVar10 = (undefined7)((ulonglong)pvVar7 >> 8);
  uVar8 = CONCAT71(uVar10,sVar1 == 0x22);
  if ((param_3 != (undefined4 *)0x0) && (sVar1 == 0x22)) {
    *param_3 = (int)((longlong)pwVar16 + (uVar12 - (longlong)param_1) >> 1);
    uVar8 = CONCAT71(uVar10,1);
  }
  goto LAB_140a31098;
}



// FUNCTION 140a317fc FUN_140a317fc body=199 status=ok
// SIG undefined FUN_140a317fc(void)

undefined8 * FUN_140a317fc(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a469a90;
  if (param_1[0x7d] != 0) {
    FUN_1400020a8();
  }
  FUN_140a318c3(param_1[0x7b],*(undefined4 *)(param_1 + 0x7c));
  if (param_1[0x7b] != 0) {
    FUN_1400020a8();
  }
  FUN_140a31900(param_1[0x79],*(undefined4 *)(param_1 + 0x7a));
  if (param_1[0x79] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x77] != 0) {
    FUN_1400020a8();
  }
  FUN_140a31b96(param_1 + 0x59);
  FUN_140a31f9c(param_1 + 0x31);
  FUN_140a3194c(param_1 + 5);
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140a318c3 FUN_140a318c3 body=61 status=ok
// SIG undefined FUN_140a318c3(void)

void FUN_140a318c3(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x10);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-2] != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140a31900 FUN_140a31900 body=75 status=ok
// SIG undefined FUN_140a31900(void)

void FUN_140a31900(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x20);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-2] != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-4] != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 6;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}


