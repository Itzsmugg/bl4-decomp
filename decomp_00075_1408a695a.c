// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1408a695a FUN_1408a695a body=157 status=ok
// SIG undefined FUN_1408a695a(void)

undefined8 FUN_1408a695a(longlong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_40;
  longlong local_38;
  int local_30;
  undefined1 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (((byte *)*param_2 == (byte *)0x0) || ((*(byte *)*param_2 & 0x6b) != 3)) {
    local_50 = 0;
    local_48 = 0;
    local_40 = 0;
    local_1c = 0;
    FUN_140008118(&local_38);
    if ((*param_1 != local_38) || ((int)param_1[1] != local_30)) {
      *param_1 = local_38;
      *(int *)(param_1 + 1) = local_30;
      param_1[2] = 0;
    }
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  if ((local_18 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar1;
}



// FUNCTION 1408a69f8 FUN_1408a69f8 body=297 status=ok
// SIG undefined FUN_1408a69f8(void)

undefined8 FUN_1408a69f8(longlong param_1,undefined8 param_2,undefined8 param_3)

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
    if (iVar1 == 2) goto LAB_1408a6b1a;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1408a6b1a;
    }
    FUN_140192332(param_1 + 0x18,&local_38,0);
  }
  else {
LAB_1408a6b1a:
    local_38 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1408a6ac5;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5 + (longlong)*(int *)(param_1 + 0x28),param_2,param_3);
      uVar6 = 1;
      goto LAB_1408a6ac5;
    }
  }
  uVar6 = 0;
LAB_1408a6ac5:
  if ((local_38 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_38);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1408a6b22 FUN_1408a6b22 body=144 status=ok
// SIG undefined FUN_1408a6b22(void)

void FUN_1408a6b22(longlong *param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  
  if ((param_3 == 0) || (cVar3 = (**(code **)(*param_1 + 0x498))(), cVar3 != '\a')) {
    return;
  }
  iVar1 = *(int *)(param_3 + 0x90);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_3 + 0x88);
    lVar4 = 0;
    do {
      if (((*(longlong *)(lVar2 + lVar4) != 0) && (cVar3 = FUN_140898d24(), cVar3 != '\0')) &&
         (*(char *)(*(longlong *)(lVar2 + lVar4) + 0x108) != '\x02')) {
        return;
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  FUN_14144f736(param_1 + 0x40,&DAT_14cbca3b0,1);
  return;
}



// FUNCTION 1408a6bb2 FUN_1408a6bb2 body=23 status=ok
// SIG undefined FUN_1408a6bb2(void)

void FUN_1408a6bb2(void)

{
  FUN_1408a6bca();
  return;
}



// FUNCTION 1408a6bca FUN_1408a6bca body=1252 status=ok
// SIG undefined FUN_1408a6bca(void)

void FUN_1408a6bca(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong param_5)

{
  int *piVar1;
  uint uVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  uint uVar14;
  uint uVar15;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [24];
  longlong *local_70;
  longlong local_60;
  longlong local_58;
  longlong *local_50;
  undefined1 *local_48;
  undefined1 local_3c [4];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar15 = (uint)param_5;
  iVar7 = (int)((ulonglong)param_5 >> 0x20);
  uVar2 = (uint)((ulonglong)param_5 >> 0x10);
  if (*(int *)(param_1 + 0x60) != *(int *)(param_1 + 0x8c)) {
    lVar5 = param_1 + 0x90;
    if (*(longlong *)(param_1 + 0x98) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x98);
    }
    iVar6 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)(param_1 + 0xa0) - 1U &
                             iVar7 + (uVar15 << 0x10 | uVar15 & 0xffff) +
                             (uVar2 << 0x13 | uVar2 & 0xffff) + ((uVar15 & 0xffff) >> 4)) * 4);
    if (iVar6 != -1) {
      do {
        if (*(longlong *)(*(longlong *)(param_1 + 0x58) + (longlong)iVar6 * 0x14) == param_5)
        goto LAB_1408a6c72;
        iVar6 = *(int *)(*(longlong *)(param_1 + 0x58) + (longlong)iVar6 * 0x14 + 0xc);
      } while (iVar6 != -1);
    }
  }
  FUN_140b203e2(param_1,param_5);
LAB_1408a6c72:
  if (*(int *)(param_2 + 0x60) != *(int *)(param_2 + 0x8c)) {
    lVar5 = param_2 + 0x90;
    if (*(longlong *)(param_2 + 0x98) != 0) {
      lVar5 = *(longlong *)(param_2 + 0x98);
    }
    iVar6 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)(param_2 + 0xa0) - 1U &
                             iVar7 + (uVar15 << 0x10 | uVar15 & 0xffff) +
                             (uVar2 << 0x13 | uVar2 & 0xffff) + ((uVar15 & 0xffff) >> 4)) * 4);
    if (iVar6 != -1) {
      do {
        plVar4 = (longlong *)(*(longlong *)(param_2 + 0x58) + (longlong)iVar6 * 0x14);
        if (*plVar4 == param_5) goto LAB_1408a6cee;
        iVar6 = *(int *)((longlong)plVar4 + 0xc);
      } while (iVar6 != -1);
    }
  }
  plVar4 = (longlong *)0x0;
LAB_1408a6cee:
  FUN_1408a70b0(param_1,(int)plVar4[1],param_5);
  local_58 = param_5;
  local_60 = param_4;
  cVar3 = FUN_140498cd4(param_1,param_4,param_5);
  uVar11 = (uint)((ulonglong)param_3 >> 0x10);
  uVar14 = (uint)param_3;
  iVar6 = (int)((ulonglong)param_3 >> 0x20);
  if (cVar3 == '\0') {
    if (*(int *)(param_2 + 0x10) != *(int *)(param_2 + 0x3c)) {
      uVar12 = iVar6 + (uVar14 << 0x10 | uVar14 & 0xffff) +
               ((uVar14 & 0xffff) >> 4) + (uVar11 << 0x13 | uVar11 & 0xffff);
      lVar5 = param_2 + 0x40;
      if (*(longlong *)(param_2 + 0x48) != 0) {
        lVar5 = *(longlong *)(param_2 + 0x48);
      }
      iVar8 = *(int *)(lVar5 + (ulonglong)
                               (*(int *)(param_2 + 0x50) - 1U &
                               ((uVar12 >> 2) +
                                iVar7 + uVar15 * 0x10000 + (uVar15 & 0xffff) +
                                (uVar2 << 0x13 | uVar2 & 0xffff) + ((uVar15 & 0xffff) >> 4) +
                                uVar12 * 0x40 + 0x9e3779b9 ^ uVar12)) * 4);
      if (iVar8 != -1) {
        lVar5 = *(longlong *)(param_2 + 8);
        do {
          lVar9 = (longlong)iVar8 * 0x40;
          lVar10 = lVar5 + lVar9;
          if ((*(longlong *)(lVar5 + lVar9) == param_3) &&
             (*(longlong *)(lVar5 + 8 + lVar9) == param_5)) goto LAB_1408a700d;
          iVar8 = *(int *)(lVar10 + 0x38);
        } while (iVar8 != -1);
      }
    }
    lVar10 = 0;
LAB_1408a700d:
    FUN_146ece748(local_88,lVar10 + 0x10);
    local_50 = &local_60;
    local_48 = local_88;
    FUN_140d6f98c(param_1 + 8,local_3c);
    if (local_70 != (longlong *)0x0) {
      plVar4 = local_70 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      if ((int)*plVar4 == 0) {
        (**(code **)*local_70)(local_70);
        piVar1 = (int *)((longlong)local_70 + 0xc);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          (**(code **)(*local_70 + 0x10))(local_70);
        }
      }
    }
  }
  if (*(int *)(param_2 + 0x10) == *(int *)(param_2 + 0x3c)) {
    lVar5 = *(longlong *)(param_2 + 8);
    iVar7 = -1;
  }
  else {
    uVar11 = iVar6 + uVar14 * 0x10000 + (uVar14 & 0xffff) + (uVar11 << 0x13 | uVar11 & 0xffff) +
             ((uVar14 & 0xffff) >> 4);
    lVar5 = *(longlong *)(param_2 + 8);
    lVar10 = param_2 + 0x40;
    if (*(longlong *)(param_2 + 0x48) != 0) {
      lVar10 = *(longlong *)(param_2 + 0x48);
    }
    iVar6 = *(int *)(lVar10 + (ulonglong)
                              (*(int *)(param_2 + 0x50) - 1U &
                              ((uVar11 >> 2) +
                               iVar7 + uVar15 * 0x10000 + (uVar15 & 0xffff) +
                               (uVar2 << 0x13 | uVar2 & 0xffff) + ((uVar15 & 0xffff) >> 4) +
                               uVar11 * 0x40 + 0x9e3779b9 ^ uVar11)) * 4);
    while ((iVar7 = -1, iVar6 != -1 &&
           ((lVar10 = (longlong)iVar6 * 0x40, *(longlong *)(lVar5 + lVar10) != param_3 ||
            (iVar7 = iVar6, *(longlong *)(lVar5 + 8 + lVar10) != param_5))))) {
      iVar6 = *(int *)(lVar10 + lVar5 + 0x38);
    }
  }
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    uVar2 = (uint)((ulonglong)local_58 >> 0x10);
    uVar11 = (uint)local_58 & 0xffff;
    uVar15 = (uint)((ulonglong)local_60 >> 0x10);
    uVar14 = (uint)local_60 & 0xffff;
    uVar15 = (int)((ulonglong)local_60 >> 0x20) + ((uint)local_60 << 0x10 | uVar14) +
             (uVar15 << 0x13 | uVar15 & 0xffff) + (uVar14 >> 4);
    lVar10 = param_1 + 0x40;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      lVar10 = *(longlong *)(param_1 + 0x48);
    }
    iVar6 = *(int *)(lVar10 + (ulonglong)
                              (*(int *)(param_1 + 0x50) - 1U &
                              (((uint)local_58 << 0x10 | uVar11) +
                               (int)((ulonglong)local_58 >> 0x20) + (uVar2 << 0x13 | uVar2 & 0xffff)
                               + (uVar11 >> 4) + uVar15 * 0x40 + (uVar15 >> 2) + 0x9e3779b9 ^ uVar15
                              )) * 4);
    if (iVar6 != -1) {
      lVar10 = *(longlong *)(param_1 + 8);
      do {
        lVar13 = (longlong)iVar6 * 0x40;
        lVar9 = lVar10 + lVar13;
        if ((*(longlong *)(lVar10 + lVar13) == local_60) &&
           (*(longlong *)(lVar10 + 8 + lVar13) == local_58)) goto LAB_1408a6ecd;
        iVar6 = *(int *)(lVar9 + 0x38);
      } while (iVar6 != -1);
    }
  }
  lVar9 = 0;
LAB_1408a6ecd:
  lVar10 = 0;
  if (iVar7 != -1) {
    lVar10 = lVar5 + (longlong)iVar7 * 0x40;
  }
  FUN_1448c236a(lVar9 + 0x10);
  (**(code **)(**(longlong **)(lVar9 + 0x30) + 0x20 +
              (ulonglong)(*(char *)(lVar9 + 0x10) != *(char *)(lVar10 + 0x10)) * 8))
            (*(longlong **)(lVar9 + 0x30),*(undefined8 *)(lVar10 + 0x30));
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1408a70b0 FUN_1408a70b0 body=651 status=ok
// SIG undefined FUN_1408a70b0(void)

void FUN_1408a70b0(longlong param_1,int param_2,longlong param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  uint uVar15;
  
  iVar3 = FUN_1401f66f6(param_1,param_3);
  if (iVar3 == param_2) {
    return;
  }
  iVar3 = *(int *)(param_1 + 0x30);
  if (iVar3 == 0) {
    uVar14 = 1;
    uVar13 = 0;
    iVar4 = 0;
    iVar10 = 0;
  }
  else {
    puVar5 = *(uint **)(param_1 + 0x28);
    if (*(uint **)(param_1 + 0x28) == (uint *)0x0) {
      puVar5 = (uint *)(param_1 + 0x18);
    }
    uVar15 = *puVar5;
    if (uVar15 == 0) {
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
        if (uVar14 == uVar13) goto LAB_1408a726b;
        iVar10 = iVar10 + 0x20;
        uVar15 = puVar5[uVar13 + 1];
        uVar13 = uVar13 + 1;
      } while (uVar15 == 0);
    }
    else {
      uVar13 = 0;
      iVar10 = 0;
    }
    uVar14 = (ulonglong)(-uVar15 & uVar15);
    uVar1 = uVar14 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    iVar4 = (iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    if (iVar3 <= iVar4) {
      iVar4 = iVar3;
    }
  }
  if (iVar4 != iVar3) {
    uVar15 = 0xffffffff;
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 8) + 8 + (longlong)iVar4 * 0x40) == param_3) {
        lVar11 = *(longlong *)(param_1 + 8) + (longlong)iVar4 * 0x40;
        iVar4 = (**(code **)(**(longlong **)(lVar11 + 0x30) + 0x60))();
        if (iVar4 < param_2) {
          FUN_1448c236a(lVar11 + 0x10);
          (**(code **)**(undefined8 **)(lVar11 + 0x30))(*(undefined8 **)(lVar11 + 0x30),param_2);
        }
      }
      uVar15 = uVar15 & ~(uint)uVar14;
      puVar5 = *(uint **)(param_1 + 0x28);
      if (*(uint **)(param_1 + 0x28) == (uint *)0x0) {
        puVar5 = (uint *)(param_1 + 0x18);
      }
      iVar2 = *(int *)(param_1 + 0x30);
      iVar4 = (int)uVar13;
      lVar11 = (longlong)iVar4;
      uVar9 = puVar5[lVar11] & uVar15;
      if (uVar9 == 0) {
        iVar7 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar7 = iVar2 + -1;
        }
        iVar7 = iVar7 >> 5;
        iVar10 = iVar10 + 0x20;
        iVar8 = iVar7;
        if (iVar7 < iVar4) {
          iVar8 = iVar4;
        }
        if (iVar4 < iVar7) {
          lVar12 = 0;
          do {
            uVar9 = puVar5[lVar11 + lVar12 + 1];
            if (uVar9 != 0) {
              uVar13 = (ulonglong)(iVar4 + (int)lVar12 + 1);
              uVar15 = 0xffffffff;
              goto LAB_1408a7231;
            }
            iVar10 = iVar10 + 0x20;
            lVar12 = lVar12 + 1;
          } while (iVar8 - lVar11 != lVar12);
          uVar15 = 0xffffffff;
          iVar4 = iVar8;
        }
        uVar13 = (ulonglong)(iVar4 + 1);
        iVar4 = iVar2;
      }
      else {
LAB_1408a7231:
        uVar14 = (ulonglong)(-uVar9 & uVar9);
        uVar1 = uVar14 * 2 + 1;
        lVar11 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        iVar4 = (iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
        if (iVar2 <= iVar4) {
          iVar4 = iVar2;
        }
      }
    } while (iVar4 != iVar3);
  }
LAB_1408a726b:
  if (*(int *)(param_1 + 0x60) != *(int *)(param_1 + 0x8c)) {
    uVar15 = (uint)((ulonglong)param_3 >> 0x10);
    uVar9 = (uint)param_3 & 0xffff;
    lVar11 = param_1 + 0x90;
    if (*(longlong *)(param_1 + 0x98) != 0) {
      lVar11 = *(longlong *)(param_1 + 0x98);
    }
    iVar3 = *(int *)(lVar11 + (ulonglong)
                              (*(int *)(param_1 + 0xa0) - 1U &
                              (int)((ulonglong)param_3 >> 0x20) + ((uint)param_3 << 0x10 | uVar9) +
                              (uVar15 << 0x13 | uVar15 & 0xffff) + (uVar9 >> 4)) * 4);
    if (iVar3 != -1) {
      do {
        plVar6 = (longlong *)(*(longlong *)(param_1 + 0x58) + (longlong)iVar3 * 0x14);
        if (*plVar6 == param_3) break;
        iVar3 = *(int *)((longlong)plVar6 + 0xc);
        plVar6 = (longlong *)0x0;
      } while (iVar3 != -1);
      goto LAB_1408a72df;
    }
  }
  plVar6 = (longlong *)0x0;
LAB_1408a72df:
  *(int *)(plVar6 + 1) = param_2;
  return;
}



// FUNCTION 1408a733c FUN_1408a733c body=375 status=ok
// SIG undefined FUN_1408a733c(void)

void FUN_1408a733c(longlong param_1)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [24];
  longlong local_70;
  longlong *local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_1408a74b4();
  local_38 = 0x852dec3b;
  uStack_34 = 0x98e54617;
  uStack_30 = 0xba0625f6;
  uStack_2c = 0x52641985;
  iVar4 = FUN_1448a256a(param_1);
  if ((iVar4 < 0) && (iVar4 = *(int *)(param_1 + 0x3c0), (longlong)iVar4 != 0)) {
    lVar3 = *(longlong *)(param_1 + 0x3b8);
    lVar5 = 0;
    do {
      if ((*(longlong *)(lVar3 + 0x24 + lVar5) != 0) && (*(char *)(lVar3 + 0x20 + lVar5) == '\x01'))
      {
        *(undefined1 *)(lVar3 + 0x2c + lVar5) = 1;
      }
      lVar5 = lVar5 + 0x30;
    } while ((longlong)iVar4 * 0x30 != lVar5);
  }
  if ((*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0xc88) == '\0') && (-1 < *(int *)(param_1 + 0xd4))) {
    uVar2 = *(undefined8 *)(param_1 + 0x3c8);
    FUN_1408a7712(local_88,param_1 + 0x3b0);
    FUN_14085123a(uVar2,local_88,0,1);
    if (local_40 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)local_40 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_40 + 0x10))();
      }
    }
    if (local_70 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    lVar3 = *(longlong *)(param_1 + 0x3c8);
    iVar4 = *(int *)(lVar3 + 0x84);
    FUN_1401edebb(*(undefined8 *)(lVar3 + 0x78),*(undefined4 *)(lVar3 + 0x80));
    *(undefined4 *)(lVar3 + 0x80) = 0;
    if ((iVar4 < 0) && (*(int *)(lVar3 + 0x84) != 0)) {
      FUN_1408522b2(lVar3 + 0x78,0);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1408a74b4 FUN_1408a74b4 body=36 status=ok
// SIG undefined FUN_1408a74b4(void)

void FUN_1408a74b4(undefined8 param_1)

{
  FUN_1408a74d8();
  FUN_1408a762a(param_1);
  FUN_1408a750e(param_1,1);
  return;
}



// FUNCTION 1408a74d8 FUN_1408a74d8 body=54 status=ok
// SIG undefined FUN_1408a74d8(void)

void FUN_1408a74d8(longlong param_1)

{
  FUN_14078270c();
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400337aa();
  }
  if (-1 < (char)*(uint *)(param_1 + 0xd4)) {
    *(uint *)(param_1 + 0xd4) = *(uint *)(param_1 + 0xd4) & 0xfffff77f;
  }
  return;
}



// FUNCTION 1408a750e FUN_1408a750e body=282 status=ok
// SIG undefined FUN_1408a750e(void)

void FUN_1408a750e(longlong param_1,undefined4 param_2)

{
  int iVar1;
  DWORD DVar2;
  DWORD DVar3;
  undefined2 *puVar4;
  undefined1 auStack_58 [40];
  undefined2 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((DAT_14c86a9f8 == '\x01') &&
     (iVar1 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
     iVar1 != 2)) {
    if (iVar1 == 1) {
      DVar2 = FUN_140ad26c0();
      DVar3 = GetCurrentThreadId();
      if (DVar2 == DVar3) goto LAB_1408a75bb;
    }
    if (*DAT_14c950c20 == 0) {
      FUN_144750a86(param_1,&local_30,0,0);
      puVar4 = local_30;
      if (local_28 == 0) {
        puVar4 = &DAT_149dfb77a;
      }
      FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/GarbageCollection.cpp",0x1a16,
                    L"AssembleReferenceTokenStream for %s called on a non-game thread while GC is not locked."
                    ,puVar4);
      if (local_30 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
    }
  }
LAB_1408a75bb:
  if ((*(byte *)(param_1 + 0xd4) & 0x80) == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14c950388);
    FUN_1446f0488(param_1,param_2);
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14c950388);
  }
  else {
    FUN_1446f0488(param_1,param_2);
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1408a762a FUN_1408a762a body=231 status=ok
// SIG undefined FUN_1408a762a(void)

void FUN_1408a762a(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined1 auStack_78 [40];
  int *local_50;
  undefined1 *local_48;
  undefined4 **local_40;
  longlong local_38;
  longlong local_30;
  longlong *local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *(undefined4 *)(param_1 + 0x2b0) = 0;
  if (*(int *)(param_1 + 0x2a8) != 0) {
    uVar3 = FUN_1458f046a();
    cVar2 = FUN_144a7ff9e(param_1,uVar3);
    if ((cVar2 != '\0') && (lVar1 = *(longlong *)(param_1 + 0x110), lVar1 != 0)) {
      local_1c = 0;
      local_38 = lVar1;
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c();
      }
      FUN_14797d7b6(&local_30,&local_38);
      plVar5 = (longlong *)0x0;
      if (local_30 != 0) {
        plVar5 = local_28;
      }
      puVar4 = (undefined8 *)(**(code **)(*plVar5 + 0x30))();
      local_50 = &local_1c;
      local_40 = &local_50;
      local_48 = &LAB_14341ae8e;
      (**(code **)*puVar4)(puVar4,param_1);
      *(int *)(param_1 + 0x2b0) = local_1c - *(int *)(param_1 + 0x2a8);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1408a7712 FUN_1408a7712 body=430 status=ok
// SIG undefined FUN_1408a7712(void)

undefined8 * FUN_1408a7712(undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong *plVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_78 [40];
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  longlong local_40;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar6 = (**(code **)(*param_2 + 8))(param_2);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  if (lVar6 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  else {
    FUN_1400bbfc4(&local_50,lVar6);
    *(undefined4 *)(param_1 + 1) = local_50;
    *(undefined4 *)((longlong)param_1 + 0xc) = uStack_4c;
    *(undefined4 *)(param_1 + 2) = uStack_48;
    *(undefined4 *)((longlong)param_1 + 0x14) = uStack_44;
    if (param_1 + 1 == (undefined8 *)&local_50) {
      if (local_40 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[3] != 0) {
        FUN_1400020a8();
      }
      param_1[3] = local_40;
      local_40 = 0;
      *(undefined4 *)(param_1 + 4) = local_38;
      *(undefined4 *)((longlong)param_1 + 0x24) = local_34;
    }
    cVar5 = (*(code *)PTR_FUN_14c758760)();
    if (cVar5 != '\0') {
      uVar3 = *(uint *)(lVar6 + 0xc);
      if ((int)uVar3 < DAT_14c9647dc) {
        lVar7 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
      }
      else {
        lVar7 = 0;
      }
      if ((*(uint *)(lVar7 + 8) & 0x8400000) != 0) {
        *param_1 = 0;
        goto LAB_1408a77f1;
      }
    }
    FUN_14485c47a(param_1,lVar6);
  }
LAB_1408a77f1:
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  (**(code **)(*param_2 + 0x18))(param_2,&local_50);
  param_1[8] = CONCAT44(uStack_4c,local_50);
  lVar6 = CONCAT44(uStack_44,uStack_48);
  param_1[9] = lVar6;
  if (lVar6 != 0) {
    LOCK();
    *(int *)(lVar6 + 0xc) = *(int *)(lVar6 + 0xc) + 1;
    UNLOCK();
    plVar4 = (longlong *)CONCAT44(uStack_44,uStack_48);
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
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1408a78c2 FUN_1408a78c2 body=14520 status=ok
// SIG undefined FUN_1408a78c2(void)

void FUN_1408a78c2(code ****param_1,code **param_2)

{
  int *piVar1;
  uint uVar2;
  uint *puVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  float fVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  code cVar10;
  ushort uVar11;
  uint uVar12;
  bool bVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  char cVar17;
  int iVar18;
  int iVar19;
  undefined4 uVar20;
  int iVar21;
  longlong lVar22;
  ulonglong uVar23;
  code ***pppcVar24;
  code **ppcVar25;
  undefined8 uVar26;
  code ****ppppcVar27;
  code ***pppcVar28;
  code **ppcVar29;
  byte bVar30;
  uint uVar31;
  int iVar32;
  undefined4 uVar33;
  code *pcVar34;
  code **ppcVar35;
  code ****ppppcVar36;
  code **ppcVar37;
  uint uVar38;
  uint uVar39;
  int iVar40;
  int iVar41;
  ulonglong uVar42;
  longlong *plVar43;
  uint uVar44;
  longlong lVar45;
  code **ppcVar46;
  uint uVar47;
  code *pcVar48;
  longlong lVar49;
  undefined4 uVar50;
  longlong *plVar51;
  code **ppcVar52;
  code *pcVar53;
  code ****ppppcVar54;
  ulonglong uVar55;
  float fVar56;
  code *pcVar57;
  code *pcVar58;
  float fVar59;
  undefined1 auStack_3b8 [32];
  code **local_398;
  code **local_390;
  code **local_388;
  code **local_380;
  code **local_378;
  float local_370;
  code **local_368;
  undefined4 local_360;
  code ***local_358;
  code **local_348;
  code **local_340;
  code ****local_338;
  longlong local_330;
  code **local_328;
  code ***local_320;
  code ***local_318;
  code **local_310;
  code **local_308;
  code ***local_300;
  code **local_2f8;
  code **local_2f0;
  code **local_2e8;
  code **local_2e0;
  code **local_2d8;
  int local_2cc;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  code *local_2a8;
  undefined8 uStack_2a0;
  code ***local_298;
  undefined8 uStack_290;
  longlong local_288;
  undefined8 uStack_280;
  longlong local_278;
  undefined8 uStack_270;
  longlong local_268;
  undefined8 uStack_260;
  code *local_258;
  undefined8 uStack_250;
  code **local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_1f4;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_194;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_144;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined4 local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_3b8;
  ppppcVar27 = param_1 + 0x1e;
  local_340 = param_2;
  local_338 = param_1;
  if (*(int *)((longlong)param_1 + 0x124) == 0) {
    iVar21 = *(int *)(param_1 + 0x1f);
    *(int *)(param_1 + 0x1f) = iVar21 + 1;
    if (*(int *)((longlong)param_1 + 0xfc) == iVar21) {
      FUN_14482b872(ppppcVar27,iVar21);
    }
    iVar19 = *(int *)(param_1 + 0x23);
    if (iVar19 == 0) {
      iVar18 = -1;
    }
    else {
      iVar18 = iVar19 + 0x1e;
      if (-1 < iVar19 + -1) {
        iVar18 = iVar19 + -1;
      }
      iVar18 = iVar18 >> 5;
    }
    ppppcVar54 = param_1 + 0x20;
    iVar32 = iVar19 + 1;
    iVar40 = iVar19 + 0x1f;
    if (-1 < iVar19) {
      iVar40 = iVar19;
    }
    if (iVar40 >> 5 == iVar18) {
      *(int *)(param_1 + 0x23) = iVar32;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x11c) <= iVar19) {
        if (iVar19 + 0x20U < 0xa0) {
          iVar32 = 0x80;
          iVar18 = iVar19;
        }
        else {
          uVar39 = iVar19 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x11c) + 0x1fU < 0xa0) {
            uVar31 = 4;
            if (4 < uVar39) {
              uVar31 = uVar39;
            }
          }
          else {
            uVar31 = (uVar39 * 3 >> 3) + uVar39 + 0x10;
          }
          uVar23 = FUN_144a3809e(uVar31 << 2,0);
          iVar18 = (int)(uVar23 >> 2);
          iVar32 = -0x20;
          if ((int)uVar39 <= iVar18) {
            iVar32 = iVar18 << 5;
          }
          iVar18 = *(int *)(param_1 + 0x23);
        }
        *(int *)((longlong)param_1 + 0x11c) = iVar32;
        FUN_1446efbd8(ppppcVar54,iVar18);
        iVar32 = *(int *)(param_1 + 0x23) + 1;
      }
      iVar18 = iVar32 + 0x1f;
      if (-1 < iVar32) {
        iVar18 = iVar32;
      }
      *(int *)(param_1 + 0x23) = iVar32;
      if (iVar32 % 0x20 != 0) {
        ppppcVar36 = (code ****)param_1[0x22];
        if ((code ****)param_1[0x22] == (code ****)0x0) {
          ppppcVar36 = ppppcVar54;
        }
        bVar30 = -(char)(iVar32 % 0x20);
        *(uint *)((longlong)ppppcVar36 + (longlong)(iVar18 >> 5) * 4) =
             (uint)(*(int *)((longlong)ppppcVar36 + (longlong)(iVar18 >> 5) * 4) << (bVar30 & 0x1f))
             >> (bVar30 & 0x1f);
      }
    }
    lVar22 = (longlong)iVar21;
    if ((code ****)param_1[0x22] != (code ****)0x0) {
      ppppcVar54 = (code ****)param_1[0x22];
    }
    bVar30 = (byte)iVar19 & 0x1f;
    puVar3 = (uint *)((longlong)ppppcVar54 + (longlong)(iVar40 >> 5) * 4);
    *puVar3 = *puVar3 & (-2 << bVar30 | 0xfffffffeU >> 0x20 - bVar30);
  }
  else {
    iVar21 = *(int *)(param_1 + 0x24);
    lVar22 = (longlong)iVar21;
    iVar19 = *(int *)((longlong)param_1[0x1e] + lVar22 * 0x18 + 4);
    *(int *)(param_1 + 0x24) = iVar19;
    iVar18 = *(int *)((longlong)param_1 + 0x124) + -1;
    *(int *)((longlong)param_1 + 0x124) = iVar18;
    if (iVar18 != 0) {
      *(undefined4 *)(param_1[0x1e] + (longlong)iVar19 * 3) = 0xffffffff;
    }
  }
  ppcVar29 = local_340;
  ppppcVar54 = param_1 + 0x20;
  uVar39 = 1;
  ppppcVar36 = (code ****)param_1[0x22];
  if ((code ****)param_1[0x22] == (code ****)0x0) {
    ppppcVar36 = ppppcVar54;
  }
  iVar19 = iVar21 + 0x1f;
  if (-1 < iVar21) {
    iVar19 = iVar21;
  }
  puVar3 = (uint *)((longlong)ppppcVar36 + (longlong)(iVar19 >> 5) * 4);
  *puVar3 = *puVar3 | 1 << ((byte)iVar21 & 0x1f);
  pppcVar28 = param_1[0x1e] + lVar22 * 3;
  *pppcVar28 = local_340;
  *(undefined4 *)(pppcVar28 + 1) = 0;
  *(undefined4 *)(pppcVar28 + 2) = 0xffffffff;
  uVar31 = ((uint)((ulonglong)local_340 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_340 >> 4)) *
           -0x7a143595;
  uVar31 = (uVar31 >> 0xd ^ uVar31) * -0x3d4d51cb;
  uVar31 = uVar31 >> 0x10 ^ uVar31;
  local_330 = CONCAT44(local_330._4_4_,uVar31);
  uVar38 = *(int *)(param_1 + 0x1f) - *(int *)((longlong)param_1 + 0x124);
  if (uVar38 != 1) {
    if (*(int *)(param_1 + 0x1f) != *(int *)((longlong)param_1 + 0x124)) {
      ppppcVar36 = local_338 + 0x25;
      if ((code ****)local_338[0x26] != (code ****)0x0) {
        ppppcVar36 = (code ****)local_338[0x26];
      }
      iVar19 = *(int *)((longlong)ppppcVar36 +
                       (ulonglong)(*(int *)(local_338 + 0x27) - 1U & uVar31) * 4);
      if (iVar19 != -1) {
        do {
          pppcVar24 = *ppppcVar27 + (longlong)iVar19 * 3;
          if (*pppcVar24 == local_340) {
            ppcVar29 = pppcVar28[1];
            *pppcVar24 = *pppcVar28;
            pppcVar24[1] = ppcVar29;
            FUN_149801c7a(ppppcVar27,iVar21);
            param_1 = local_338;
            ppcVar29 = local_340;
            iVar21 = iVar19;
            goto LAB_1408a7e55;
          }
          iVar19 = *(int *)(pppcVar24 + 2);
        } while (iVar19 != -1);
      }
    }
    param_1 = local_338;
    if (3 < uVar38) {
      uVar23 = (ulonglong)(uVar38 & 0xfffffffe) + 0xf;
      lVar22 = 0x3f;
      if (uVar23 != 0) {
        for (; uVar23 >> lVar22 == 0; lVar22 = lVar22 + -1) {
        }
      }
      uVar39 = 1 << ((byte)lVar22 & 0x1f);
    }
  }
  if (((int)uVar38 < 1) || ((int)uVar39 <= *(int *)(param_1 + 0x27))) {
    uVar31 = *(int *)(param_1 + 0x27) - 1U & uVar31;
    *(uint *)((longlong)pppcVar28 + 0x14) = uVar31;
    ppppcVar27 = (code ****)param_1[0x26];
    if ((code ****)param_1[0x26] == (code ****)0x0) {
      ppppcVar27 = param_1 + 0x25;
    }
    *(undefined4 *)(pppcVar28 + 2) =
         *(undefined4 *)
          ((longlong)ppppcVar27 +
          ((longlong)*(int *)(param_1 + 0x27) - 1U & (longlong)(int)uVar31) * 4);
    ppppcVar27 = (code ****)param_1[0x26];
    if ((code ****)param_1[0x26] == (code ****)0x0) {
      ppppcVar27 = param_1 + 0x25;
    }
    *(int *)((longlong)ppppcVar27 +
            ((longlong)*(int *)(param_1 + 0x27) - 1U & (longlong)(int)uVar31) * 4) = iVar21;
    goto LAB_1408a7e55;
  }
  *(uint *)(param_1 + 0x27) = uVar39;
  ppppcVar27 = param_1 + 0x26;
  if (param_1[0x26] != (code ***)0x0) {
    FUN_1446efa72(ppppcVar27,0,0,4);
    uVar39 = *(uint *)(param_1 + 0x27);
  }
  ppppcVar36 = param_1 + 0x25;
  if (uVar39 == 1) {
    if (*ppppcVar27 != (code ***)0x0) {
      FUN_1446efa72(ppppcVar27,0,0,4);
    }
LAB_1408a7af7:
    uVar31 = 0;
    do {
      ppppcVar27 = (code ****)param_1[0x26];
      if ((code ****)param_1[0x26] == (code ****)0x0) {
        ppppcVar27 = ppppcVar36;
      }
      *(undefined4 *)
       ((longlong)ppppcVar27 + (ulonglong)(*(int *)(param_1 + 0x27) + 0x7fffffffU & uVar31) * 4) =
           0xffffffff;
      uVar31 = uVar31 + 1;
    } while (uVar39 != uVar31);
  }
  else {
    if (uVar39 == 0) goto LAB_1408a7e55;
    FUN_1446efa72(ppppcVar27,0,uVar39,4);
    if (0 < (int)uVar39) goto LAB_1408a7af7;
  }
  iVar19 = *(int *)(param_1 + 0x23);
  if (iVar19 == 0) {
    uVar23 = 0;
    uVar42 = 1;
    iVar18 = 0;
    iVar32 = 0;
  }
  else {
    ppppcVar27 = (code ****)param_1[0x22];
    if ((code ****)param_1[0x22] == (code ****)0x0) {
      ppppcVar27 = ppppcVar54;
    }
    uVar39 = *(uint *)ppppcVar27;
    if (uVar39 == 0) {
      iVar18 = iVar19 + 0x1e;
      if (-1 < iVar19 + -1) {
        iVar18 = iVar19 + -1;
      }
      uVar23 = 0;
      uVar42 = (ulonglong)(uint)(iVar18 >> 5);
      if (iVar18 >> 5 < 1) {
        uVar42 = uVar23;
      }
      iVar32 = 0;
      do {
        if (uVar42 == uVar23) goto LAB_1408a7e55;
        iVar32 = iVar32 + 0x20;
        uVar39 = *(uint *)((longlong)ppppcVar27 + (uVar23 + 1) * 4);
        uVar23 = uVar23 + 1;
      } while (uVar39 == 0);
    }
    else {
      uVar23 = 0;
      iVar32 = 0;
    }
    uVar42 = (ulonglong)(-uVar39 & uVar39);
    uVar55 = uVar42 * 2 + 1;
    lVar22 = 0x3f;
    if (uVar55 != 0) {
      for (; uVar55 >> lVar22 == 0; lVar22 = lVar22 + -1) {
      }
    }
    iVar18 = (iVar32 - ((uint)lVar22 ^ 0x3f)) + 0x3e;
    if (iVar19 <= iVar18) {
      iVar18 = iVar19;
    }
  }
  if (iVar18 < iVar19) {
    uVar39 = 0xffffffff;
    do {
      pppcVar28 = param_1[0x1e];
      lVar22 = (longlong)iVar18;
      uVar31 = ((uint)((ulonglong)pppcVar28[lVar22 * 3] >> 0x14) & 0xffff ^
               (uint)((ulonglong)pppcVar28[lVar22 * 3] >> 4)) * -0x7a143595;
      uVar31 = (uVar31 >> 0xd ^ uVar31) * -0x3d4d51cb;
      uVar55 = (longlong)(int)(uVar31 >> 0x10 ^ uVar31) & (longlong)*(int *)(param_1 + 0x27) - 1U;
      iVar19 = (int)uVar55;
      *(int *)((longlong)pppcVar28 + lVar22 * 0x18 + 0x14) = iVar19;
      ppppcVar27 = (code ****)param_1[0x26];
      if ((code ****)param_1[0x26] == (code ****)0x0) {
        ppppcVar27 = ppppcVar36;
      }
      *(undefined4 *)(pppcVar28 + lVar22 * 3 + 2) =
           *(undefined4 *)
            ((longlong)ppppcVar27 + ((longlong)*(int *)(local_338 + 0x27) - 1U & uVar55) * 4);
      ppppcVar27 = (code ****)local_338[0x26];
      if ((code ****)local_338[0x26] == (code ****)0x0) {
        ppppcVar27 = ppppcVar36;
      }
      *(int *)((longlong)ppppcVar27 +
              ((longlong)iVar19 & (longlong)*(int *)(local_338 + 0x27) - 1U) * 4) = iVar18;
      uVar39 = ~(uint)uVar42 & uVar39;
      ppppcVar27 = (code ****)local_338[0x22];
      if ((code ****)local_338[0x22] == (code ****)0x0) {
        ppppcVar27 = ppppcVar54;
      }
      iVar19 = *(int *)(local_338 + 0x23);
      iVar18 = (int)uVar23;
      lVar22 = (longlong)iVar18;
      uVar31 = *(uint *)((longlong)ppppcVar27 + lVar22 * 4) & uVar39;
      ppcVar29 = local_340;
      param_1 = local_338;
      if (uVar31 == 0) {
        iVar40 = iVar19 + 0x1e;
        if (-1 < iVar19 + -1) {
          iVar40 = iVar19 + -1;
        }
        iVar40 = iVar40 >> 5;
        iVar41 = iVar40;
        if (iVar40 < iVar18) {
          iVar41 = iVar18;
        }
        if (iVar40 <= iVar18) break;
        lVar45 = 0;
        while( true ) {
          iVar32 = iVar32 + 0x20;
          uVar31 = *(uint *)((longlong)ppppcVar27 + (lVar22 + lVar45 + 1) * 4);
          if (uVar31 != 0) break;
          lVar45 = lVar45 + 1;
          if (iVar41 - lVar22 == lVar45) goto LAB_1408a7e55;
        }
        uVar23 = (ulonglong)(iVar18 + (int)lVar45 + 1);
        uVar39 = 0xffffffff;
      }
      uVar42 = (ulonglong)(-uVar31 & uVar31);
      uVar55 = uVar42 * 2 + 1;
      lVar22 = 0x3f;
      if (uVar55 != 0) {
        for (; uVar55 >> lVar22 == 0; lVar22 = lVar22 + -1) {
        }
      }
      iVar18 = (iVar32 - ((uint)lVar22 ^ 0x3f)) + 0x3e;
    } while (iVar18 < iVar19);
  }
LAB_1408a7e55:
  *(undefined4 *)(param_1[0x1e] + (longlong)iVar21 * 3 + 1) = 0xffffffff;
  if (0 < (longlong)*(int *)(param_1 + 0x1d)) {
    local_2f8 = ppcVar29 + 0x48;
    local_308 = ppcVar29 + 0x34;
    local_2e8 = ppcVar29 + 0x31;
    local_2f0 = ppcVar29 + 0x28;
    pppcVar28 = (code ***)(longlong)*(int *)(param_1 + 0x1d);
    do {
      ppcVar35 = param_1[0x1c][(longlong)((longlong)pppcVar28 + -1)];
      local_310 = ppcVar35 + 0x83;
      local_348 = ppcVar35;
      local_320 = pppcVar28;
      if (*(int *)((longlong)ppcVar35 + 0x44c) == 0) {
        uVar39 = *(uint *)(ppcVar35 + 0x84);
        uVar23 = (ulonglong)uVar39;
        *(uint *)(ppcVar35 + 0x84) = uVar39 + 1;
        if (*(uint *)((longlong)ppcVar35 + 0x424) == uVar39) {
          FUN_1408ab94c(local_310,uVar39);
        }
        iVar21 = *(int *)(ppcVar35 + 0x88);
        if (iVar21 == 0) {
          iVar19 = -1;
        }
        else {
          iVar19 = iVar21 + 0x1e;
          if (-1 < iVar21 + -1) {
            iVar19 = iVar21 + -1;
          }
          iVar19 = iVar19 >> 5;
        }
        ppcVar37 = ppcVar35 + 0x85;
        iVar18 = iVar21 + 1;
        iVar32 = iVar21 + 0x1f;
        if (-1 < iVar21) {
          iVar32 = iVar21;
        }
        local_318 = (code ***)uVar23;
        if (iVar32 >> 5 == iVar19) {
          *(int *)(ppcVar35 + 0x88) = iVar18;
        }
        else {
          if (*(int *)((longlong)ppcVar35 + 0x444) <= iVar21) {
            if (iVar21 + 0x20U < 0xa0) {
              iVar18 = 0x80;
              iVar19 = iVar21;
            }
            else {
              uVar39 = iVar21 + 0x20U >> 5;
              if (*(int *)((longlong)ppcVar35 + 0x444) + 0x1fU < 0xa0) {
                uVar31 = 4;
                if (4 < uVar39) {
                  uVar31 = uVar39;
                }
              }
              else {
                uVar31 = (uVar39 * 3 >> 3) + uVar39 + 0x10;
              }
              uVar23 = FUN_144a3809e(uVar31 << 2,0);
              iVar19 = (int)(uVar23 >> 2);
              iVar18 = -0x20;
              if ((int)uVar39 <= iVar19) {
                iVar18 = iVar19 << 5;
              }
              iVar19 = *(int *)(ppcVar35 + 0x88);
            }
            *(int *)((longlong)ppcVar35 + 0x444) = iVar18;
            FUN_1446efbd8(ppcVar37,iVar19);
            iVar18 = *(int *)(ppcVar35 + 0x88) + 1;
            pppcVar28 = local_320;
          }
          iVar19 = iVar18 + 0x1f;
          if (-1 < iVar18) {
            iVar19 = iVar18;
          }
          *(int *)(ppcVar35 + 0x88) = iVar18;
          if (iVar18 % 0x20 != 0) {
            ppcVar52 = (code **)ppcVar35[0x87];
            if ((code **)ppcVar35[0x87] == (code **)0x0) {
              ppcVar52 = ppcVar37;
            }
            bVar30 = -(char)(iVar18 % 0x20);
            *(uint *)((longlong)ppcVar52 + (longlong)(iVar19 >> 5) * 4) =
                 (uint)(*(int *)((longlong)ppcVar52 + (longlong)(iVar19 >> 5) * 4) <<
                       (bVar30 & 0x1f)) >> (bVar30 & 0x1f);
          }
        }
        lVar22 = (longlong)(int)local_318;
        if ((code **)ppcVar35[0x87] != (code **)0x0) {
          ppcVar37 = (code **)ppcVar35[0x87];
        }
        bVar30 = (byte)iVar21 & 0x1f;
        puVar3 = (uint *)((longlong)ppcVar37 + (longlong)(iVar32 >> 5) * 4);
        *puVar3 = *puVar3 & (-2 << bVar30 | 0xfffffffeU >> 0x20 - bVar30);
      }
      else {
        local_318 = (code ***)(ulonglong)*(uint *)(ppcVar35 + 0x89);
        lVar22 = (longlong)(int)*(uint *)(ppcVar35 + 0x89);
        iVar21 = *(int *)(ppcVar35[0x83] + lVar22 * 0x168 + 4);
        *(int *)(ppcVar35 + 0x89) = iVar21;
        iVar19 = *(int *)((longlong)ppcVar35 + 0x44c) + -1;
        *(int *)((longlong)ppcVar35 + 0x44c) = iVar19;
        ppcVar29 = local_340;
        if (iVar19 != 0) {
          *(undefined4 *)(ppcVar35[0x83] + (longlong)iVar21 * 0x168) = 0xffffffff;
        }
      }
      local_328 = ppcVar35 + 0x85;
      iVar21 = (int)local_318;
      ppcVar37 = (code **)ppcVar35[0x87];
      if ((code **)ppcVar35[0x87] == (code **)0x0) {
        ppcVar37 = local_328;
      }
      iVar19 = iVar21 + 0x1f;
      if (-1 < iVar21) {
        iVar19 = iVar21;
      }
      pcVar34 = (code *)((longlong)ppcVar37 + (longlong)(iVar19 >> 5) * 4);
      *(uint *)pcVar34 = *(uint *)pcVar34 | 1 << ((byte)local_318 & 0x1f);
      uVar39 = 1;
      pcVar34 = ppcVar35[0x83];
      local_300 = (code ***)(pcVar34 + lVar22 * 0x168);
      memset(&local_248,0,0x158);
      local_1f4 = 0xffffffff00000080;
      local_1d0 = 0;
      uStack_1c8 = 0;
      local_1c0 = 0;
      uStack_1b8 = 0;
      local_194 = 0xffffffff00000080;
      local_170 = 0;
      uStack_168 = 0;
      local_144 = 0xffffffff00000080;
      local_100 = 0;
      local_110 = 0;
      uStack_108 = 0;
      local_120 = 0;
      uStack_118 = 0;
      local_f8 = 0xffffffff;
      pcVar34 = pcVar34 + lVar22 * 0x168 + 0x10;
      *(code ***)(pcVar34 + -0x10) = ppcVar29;
      *(undefined8 *)(pcVar34 + -8) = 0;
      FUN_1408ab5ec(pcVar34,&uStack_240);
      ppcVar35 = local_348;
      *(undefined4 *)(pcVar34 + 0x148) = local_f8;
      FUN_14062bdec(&uStack_240);
      param_1 = local_338;
      *(undefined4 *)(pcVar34 + 0x150) = 0xffffffff;
      uVar23 = *(ulonglong *)(pcVar34 + -0x10);
      uVar31 = ((uint)(uVar23 >> 0x14) & 0xffff ^ (uint)(uVar23 >> 4)) * -0x7a143595;
      uVar31 = (uVar31 >> 0xd ^ uVar31) * -0x3d4d51cb;
      uVar31 = uVar31 >> 0x10 ^ uVar31;
      uVar38 = *(int *)(ppcVar35 + 0x84) - *(int *)((longlong)ppcVar35 + 0x44c);
      if (uVar38 != 1) {
        if (*(int *)(ppcVar35 + 0x84) != *(int *)((longlong)ppcVar35 + 0x44c)) {
          ppcVar29 = local_348 + 0x8a;
          if ((code **)local_348[0x8b] != (code **)0x0) {
            ppcVar29 = (code **)local_348[0x8b];
          }
          uVar44 = *(uint *)((longlong)ppcVar29 +
                            (ulonglong)(*(int *)(local_348 + 0x8c) - 1U & uVar31) * 4);
          if (uVar44 != 0xffffffff) {
            do {
              pcVar34 = *local_310 + (longlong)(int)uVar44 * 0x168;
              if (*(ulonglong *)(*local_310 + (longlong)(int)uVar44 * 0x168) == uVar23) {
                FUN_14062bdec(pcVar34 + 0x10);
                memmove(pcVar34,local_300,0x160);
                FUN_149801284(local_310);
                local_318 = (code ***)(ulonglong)uVar44;
                ppcVar35 = local_348;
                param_1 = local_338;
                pppcVar28 = local_320;
                ppcVar29 = local_340;
                goto LAB_1408a83be;
              }
              uVar44 = *(uint *)(pcVar34 + 0x160);
            } while (uVar44 != 0xffffffff);
          }
        }
        ppcVar35 = local_348;
        pppcVar28 = local_320;
        ppcVar29 = local_340;
        if (3 < uVar38) {
          uVar23 = (ulonglong)(uVar38 & 0xfffffffe) + 0xf;
          lVar22 = 0x3f;
          if (uVar23 != 0) {
            for (; uVar23 >> lVar22 == 0; lVar22 = lVar22 + -1) {
            }
          }
          uVar39 = 1 << ((byte)lVar22 & 0x1f);
        }
      }
      if (((int)uVar38 < 1) || ((int)uVar39 <= *(int *)(ppcVar35 + 0x8c))) {
        uVar31 = *(int *)(ppcVar35 + 0x8c) - 1U & uVar31;
        *(uint *)((longlong)local_300 + 0x164) = uVar31;
        ppcVar37 = (code **)ppcVar35[0x8b];
        if ((code **)ppcVar35[0x8b] == (code **)0x0) {
          ppcVar37 = ppcVar35 + 0x8a;
        }
        *(int *)(local_300 + 0x2c) =
             *(int *)((longlong)ppcVar37 +
                     ((longlong)*(int *)(ppcVar35 + 0x8c) - 1U & (longlong)(int)uVar31) * 4);
        ppcVar37 = (code **)ppcVar35[0x8b];
        if ((code **)ppcVar35[0x8b] == (code **)0x0) {
          ppcVar37 = ppcVar35 + 0x8a;
        }
        *(int *)((longlong)ppcVar37 +
                ((longlong)*(int *)(ppcVar35 + 0x8c) - 1U & (longlong)(int)uVar31) * 4) =
             (int)local_318;
      }
      else {
        *(uint *)(ppcVar35 + 0x8c) = uVar39;
        ppcVar37 = ppcVar35 + 0x8b;
        if (ppcVar35[0x8b] != (code *)0x0) {
          FUN_1446efa72(ppcVar37,0,0,4);
          uVar39 = *(uint *)(ppcVar35 + 0x8c);
        }
        ppcVar52 = ppcVar35 + 0x8a;
        if (uVar39 == 1) {
          if (*ppcVar37 != (code *)0x0) {
            FUN_1446efa72(ppcVar37,0,0,4);
          }
LAB_1408a8162:
          uVar31 = 0;
          do {
            ppcVar37 = (code **)ppcVar35[0x8b];
            if ((code **)ppcVar35[0x8b] == (code **)0x0) {
              ppcVar37 = ppcVar52;
            }
            *(int *)((longlong)ppcVar37 +
                    (ulonglong)(*(int *)(ppcVar35 + 0x8c) + 0x7fffffffU & uVar31) * 4) = -1;
            uVar31 = uVar31 + 1;
          } while (uVar39 != uVar31);
        }
        else {
          if (uVar39 == 0) goto LAB_1408a83be;
          FUN_1446efa72(ppcVar37,0,uVar39,4);
          if (0 < (int)uVar39) goto LAB_1408a8162;
        }
        iVar21 = *(int *)(ppcVar35 + 0x88);
        if (iVar21 == 0) {
          uVar23 = 0;
          uVar42 = 1;
          iVar19 = 0;
          iVar18 = 0;
        }
        else {
          ppcVar37 = (code **)ppcVar35[0x87];
          if ((code **)ppcVar35[0x87] == (code **)0x0) {
            ppcVar37 = local_328;
          }
          uVar39 = *(uint *)ppcVar37;
          if (uVar39 == 0) {
            iVar19 = iVar21 + 0x1e;
            if (-1 < iVar21 + -1) {
              iVar19 = iVar21 + -1;
            }
            uVar23 = 0;
            uVar42 = (ulonglong)(uint)(iVar19 >> 5);
            if (iVar19 >> 5 < 1) {
              uVar42 = uVar23;
            }
            iVar18 = 0;
            do {
              if (uVar42 == uVar23) goto LAB_1408a83be;
              iVar18 = iVar18 + 0x20;
              uVar39 = *(uint *)((longlong)ppcVar37 + (uVar23 + 1) * 4);
              uVar23 = uVar23 + 1;
            } while (uVar39 == 0);
          }
          else {
            uVar23 = 0;
            iVar18 = 0;
          }
          uVar42 = (ulonglong)(-uVar39 & uVar39);
          uVar55 = uVar42 * 2 + 1;
          lVar22 = 0x3f;
          if (uVar55 != 0) {
            for (; uVar55 >> lVar22 == 0; lVar22 = lVar22 + -1) {
            }
          }
          iVar19 = (iVar18 - ((uint)lVar22 ^ 0x3f)) + 0x3e;
          if (iVar21 <= iVar19) {
            iVar19 = iVar21;
          }
        }
        if (iVar19 < iVar21) {
          uVar39 = 0xffffffff;
          do {
            pcVar34 = ppcVar35[0x83];
            lVar22 = (longlong)iVar19 * 0x168;
            uVar31 = ((uint)(*(ulonglong *)(pcVar34 + lVar22) >> 0x14) & 0xffff ^
                     (uint)(*(ulonglong *)(pcVar34 + lVar22) >> 4)) * -0x7a143595;
            uVar31 = (uVar31 >> 0xd ^ uVar31) * -0x3d4d51cb;
            uVar55 = (longlong)(int)(uVar31 >> 0x10 ^ uVar31) &
                     (longlong)*(int *)(ppcVar35 + 0x8c) - 1U;
            iVar21 = (int)uVar55;
            *(int *)(pcVar34 + lVar22 + 0x164) = iVar21;
            ppcVar29 = (code **)ppcVar35[0x8b];
            if ((code **)ppcVar35[0x8b] == (code **)0x0) {
              ppcVar29 = ppcVar52;
            }
            *(int *)(pcVar34 + lVar22 + 0x160) =
                 *(int *)((longlong)ppcVar29 +
                         ((longlong)*(int *)(ppcVar35 + 0x8c) - 1U & uVar55) * 4);
            ppcVar29 = (code **)ppcVar35[0x8b];
            if ((code **)ppcVar35[0x8b] == (code **)0x0) {
              ppcVar29 = ppcVar52;
            }
            *(int *)((longlong)ppcVar29 +
                    ((longlong)iVar21 & (longlong)*(int *)(ppcVar35 + 0x8c) - 1U) * 4) = iVar19;
            uVar39 = ~(uint)uVar42 & uVar39;
            ppcVar37 = (code **)ppcVar35[0x87];
            if ((code **)ppcVar35[0x87] == (code **)0x0) {
              ppcVar37 = local_328;
            }
            iVar21 = *(int *)(ppcVar35 + 0x88);
            iVar19 = (int)uVar23;
            lVar22 = (longlong)iVar19;
            uVar31 = *(uint *)((longlong)ppcVar37 + lVar22 * 4) & uVar39;
            ppcVar29 = local_340;
            pppcVar28 = local_320;
            if (uVar31 == 0) {
              iVar32 = iVar21 + 0x1e;
              if (-1 < iVar21 + -1) {
                iVar32 = iVar21 + -1;
              }
              iVar32 = iVar32 >> 5;
              iVar40 = iVar32;
              if (iVar32 < iVar19) {
                iVar40 = iVar19;
              }
              if (iVar32 <= iVar19) break;
              lVar45 = 0;
              while( true ) {
                iVar18 = iVar18 + 0x20;
                uVar31 = *(uint *)((longlong)ppcVar37 + (lVar22 + lVar45 + 1) * 4);
                if (uVar31 != 0) break;
                lVar45 = lVar45 + 1;
                if (iVar40 - lVar22 == lVar45) goto LAB_1408a83be;
              }
              uVar23 = (ulonglong)(iVar19 + (int)lVar45 + 1);
              uVar39 = 0xffffffff;
            }
            uVar42 = (ulonglong)(-uVar31 & uVar31);
            uVar55 = uVar42 * 2 + 1;
            lVar22 = 0x3f;
            if (uVar55 != 0) {
              for (; uVar55 >> lVar22 == 0; lVar22 = lVar22 + -1) {
              }
            }
            iVar19 = (iVar18 - ((uint)lVar22 ^ 0x3f)) + 0x3e;
          } while (iVar19 < iVar21);
        }
      }
LAB_1408a83be:
      pppcVar24 = (code ***)((longlong)pppcVar28 + -1);
      ppcVar37 = (code **)ppcVar35[0x83];
      lVar22 = (longlong)(int)local_318;
      *(int *)(ppcVar37 + lVar22 * 0x2d + 1) = (int)pppcVar24;
      iVar21 = *(int *)ppcVar35;
      local_318 = pppcVar24;
      if (iVar21 == 0) {
        iVar21 = -1;
      }
      else {
        if (ppcVar29[0xd] == (code *)0x0) {
          uVar20 = FUN_1408ab6e2(ppcVar29[0xe],iVar21,*(undefined4 *)(param_1 + 4),0);
        }
        else {
          uVar20 = FUN_146e23344(ppcVar29[0xd],*(undefined4 *)(param_1 + 4),iVar21,0);
        }
        local_2a8 = (code *)CONCAT44(local_2a8._4_4_,uVar20);
        local_328 = ppcVar37;
        if (ppcVar29[0xd] == (code *)0x0) {
          pppcVar24 = (code ***)FUN_14001cc68(0x260);
          memset(pppcVar24,0,0x170);
          pppcVar24[0x30] = (code **)0x0;
          pppcVar24[0x31] = (code **)0x0;
          pppcVar24[0x32] = (code **)0x0;
          pppcVar24[0x33] = (code **)0x0;
          pppcVar24[0x34] = (code **)0x0;
          pppcVar24[0x35] = (code **)0x0;
          pppcVar24[0x36] = (code **)0x0;
          pppcVar24[0x37] = (code **)0x0;
          pppcVar24[0x38] = (code **)0x0;
          pppcVar24[0x39] = (code **)0x0;
          pppcVar24[0x3a] = (code **)0x0;
          pppcVar24[0x3b] = (code **)0x0;
          pppcVar24[0x3c] = (code **)0x0;
          pppcVar24[0x3d] = (code **)0x0;
          *(undefined8 *)((longlong)pppcVar24 + 0x1ed) = 0;
          pppcVar24[0x3f] = (code **)0x0;
          pppcVar24[0x40] = (code **)0x0;
          pppcVar24[0x41] = (code **)0x0;
          pppcVar24[0x42] = (code **)0x0;
          pppcVar24[0x43] = (code **)0x0;
          pppcVar24[0x44] = (code **)0x0;
          pppcVar24[0x45] = (code **)0x0;
          pppcVar24[0x46] = (code **)0x0;
          pppcVar24[0x47] = (code **)0x0;
          pppcVar24[0x48] = (code **)0x0;
          pppcVar24[0x49] = (code **)0x0;
          *(undefined4 *)(pppcVar24 + 0x4a) = 0xffffffff;
          *(undefined4 *)((longlong)pppcVar24 + 0x254) = 0xffffffff;
          *(undefined4 *)(pppcVar24 + 0x4b) = 0xffffffff;
          *(undefined4 *)((longlong)pppcVar24 + 0x25c) = 0xffffffff;
          local_248 = &local_2a8;
          local_298 = pppcVar24;
          uStack_240 = &local_298;
          FUN_1408ac5ca(local_2f8,&local_258,&local_248);
          pppcVar24 = local_298;
          lVar45 = *(longlong *)(ppcVar29[0x48] + (longlong)(int)local_258 * 0x18 + 8);
          pcVar34 = ppcVar29[0xe];
          *(undefined8 *)(lVar45 + 0x1b0) = 0;
          *(code **)(lVar45 + 0x1b8) = pcVar34;
          *(code ***)(lVar45 + 0x1c0) = local_2f0;
          *(undefined8 *)(lVar45 + 0x248) = 0;
          *(code ***)(lVar45 + 0x1c8) = local_2e8;
          *(code ***)(lVar45 + 0x1d0) = local_308;
          *(int *)(lVar45 + 0x1d8) = (int)local_2a8;
          *(int *)(lVar45 + 0x1dc) = (int)local_2a8;
          *(int *)(lVar45 + 0x1e0) = iVar21;
          if (local_298 != (code ***)0x0) {
            FUN_14062c8d2(local_298);
            FUN_1400020a8(pppcVar24);
          }
        }
        else {
          local_310 = ppcVar29 + 0x61;
          local_300 = (code ***)(ppcVar29 + 0x46);
          local_2d8 = ppcVar29 + 0x43;
          local_2e0 = ppcVar29 + 0x1f;
          pppcVar28 = (code ***)FUN_14001cc68(0x260);
          memset(pppcVar28,0,0x170);
          *(undefined1 (*) [16])(pppcVar28 + 0x30) = (undefined1  [16])0x0;
          *(undefined1 (*) [16])(pppcVar28 + 0x32) = (undefined1  [16])0x0;
          *(undefined1 (*) [16])(pppcVar28 + 0x34) = (undefined1  [16])0x0;
          *(undefined1 (*) [16])(pppcVar28 + 0x36) = (undefined1  [16])0x0;
          *(undefined1 (*) [16])(pppcVar28 + 0x38) = (undefined1  [16])0x0;
          *(undefined1 (*) [16])(pppcVar28 + 0x3a) = (undefined1  [16])0x0;
          *(undefined1 (*) [16])(pppcVar28 + 0x3c) = (undefined1  [16])0x0;
          *(undefined8 *)((longlong)pppcVar28 + 0x1ed) = 0;
          *(undefined1 (*) [16])(pppcVar28 + 0x3f) = (undefined1  [16])0x0;
          *(undefined1 (*) [16])(pppcVar28 + 0x41) = (undefined1  [16])0x0;
          *(undefined1 (*) [16])(pppcVar28 + 0x43) = (undefined1  [16])0x0;
          *(undefined1 (*) [16])(pppcVar28 + 0x45) = (undefined1  [16])0x0;
          *(undefined1 (*) [16])(pppcVar28 + 0x47) = (undefined1  [16])0x0;
          pppcVar28[0x49] = (code **)0x0;
          *(undefined4 *)(pppcVar28 + 0x4a) = 0xffffffff;
          *(undefined4 *)((longlong)pppcVar28 + 0x254) = 0xffffffff;
          *(undefined4 *)(pppcVar28 + 0x4b) = 0xffffffff;
          *(undefined4 *)((longlong)pppcVar28 + 0x25c) = 0xffffffff;
          local_248 = &local_2a8;
          local_298 = pppcVar28;
          uStack_240 = &local_298;
          FUN_1408ac5ca(local_2f8,&local_258);
          pppcVar24 = local_298;
          lVar45 = *(longlong *)(ppcVar29[0x48] + (longlong)(int)local_258 * 0x18 + 8);
          pcVar34 = ppcVar29[0xd];
          *(undefined8 *)(lVar45 + 0x1b8) = 0;
          *(code **)(lVar45 + 0x1b0) = pcVar34;
          *(code ***)(lVar45 + 0x1f8) = ppcVar29 + 0x6c;
          *(code ***)(lVar45 + 0x1c0) = local_2f0;
          *(code ***)(lVar45 + 0x1c8) = local_2e8;
          *(code ***)(lVar45 + 0x1d0) = local_308;
          *(code ***)(lVar45 + 0x200) = local_2e0;
          *(code ***)(lVar45 + 0x208) = local_2d8;
          *(code ****)(lVar45 + 0x210) = local_300;
          *(code ***)(lVar45 + 0x218) = local_310;
          *(code ***)(lVar45 + 0x220) = ppcVar29 + 99;
          *(code ***)(lVar45 + 0x228) = ppcVar29 + 0x65;
          *(undefined4 *)(lVar45 + 0x1d8) = 0;
          *(int *)(lVar45 + 0x1dc) = (int)local_2a8;
          *(undefined4 *)(lVar45 + 0x1e0) =
               *(undefined4 *)
                (*(longlong *)(pcVar34 + 0x1f8) + 0x14 + (longlong)(int)local_2a8 * 0x18);
          param_1 = local_338;
          pppcVar28 = local_320;
          ppcVar29 = local_340;
          if (local_298 != (code ***)0x0) {
            FUN_14062c8d2(local_298);
            FUN_1400020a8(pppcVar24);
            param_1 = local_338;
            pppcVar28 = local_320;
            ppcVar29 = local_340;
          }
        }
        ppcVar37 = local_328;
        ppcVar35 = local_348;
        FUN_140bf8f7e(ppcVar29,(ulonglong)local_2a8 & 0xffffffff,0);
        iVar21 = (int)local_2a8;
      }
      *(int *)((longlong)ppcVar37 + (lVar22 * 0x5a + 3) * 4) = iVar21;
      pppcVar24 = pppcVar28;
      if (*(int *)ppcVar35 != 0) {
        if (ppcVar29[0xe] == (code *)0x0) {
          pcVar34 = (code *)0x0;
        }
        else {
          local_248 = (code **)0x0;
          uStack_240 = (code ****)0x0;
          iVar21 = *(int *)(ppcVar35 + 0x5b);
          if (iVar21 < 0) goto LAB_1408aaf3b;
          if (iVar21 != 0) {
            FUN_1405c2e9e(&local_248);
            if ((longlong)*(int *)(local_348 + 0x5b) != 0) {
              pcVar48 = local_348[0x5a];
              pcVar34 = pcVar48 + (longlong)*(int *)(local_348 + 0x5b) * 0xc;
              do {
                ppppcVar27 = uStack_240;
                iVar21 = *(int *)((longlong)ppcVar37 + (lVar22 * 0x5a + 3) * 4);
                iVar19 = *(int *)pcVar48;
                iVar18 = *(int *)(pcVar48 + 4);
                iVar32 = *(int *)(pcVar48 + 8);
                lVar45 = (longlong)(int)uStack_240;
                uVar39 = (int)uStack_240 + 1;
                uStack_240 = (code ****)CONCAT44(uStack_240._4_4_,uVar39);
                if (uStack_240._4_4_ < uVar39) {
                  FUN_141087970(&local_248,(ulonglong)ppppcVar27 & 0xffffffff);
                }
                *(int *)((longlong)local_248 + lVar45 * 0xc) = iVar19 + iVar21;
                *(int *)((longlong)local_248 + lVar45 * 0xc + 4) = iVar18 + iVar21;
                *(int *)((longlong)local_248 + lVar45 * 0xc + 8) = iVar21 + iVar32;
                pcVar48 = pcVar48 + 0xc;
              } while (pcVar48 != pcVar34);
            }
          }
          ppcVar35 = local_348;
          iVar21 = *(int *)((longlong)ppcVar37 + (lVar22 * 0x5a + 3) * 4);
          local_398 = (code **)CONCAT71(local_398._1_7_,1);
          FUN_140dc1be2(ppcVar37 + lVar22 * 0x2d + 2,&local_248,iVar21,
                        iVar21 + *(int *)local_348 + -1);
          FUN_140aaccac(ppcVar37 + lVar22 * 0x2d + 2,&local_298);
          if (local_248 != (code **)0x0) {
            FUN_1400020a8();
          }
          pcVar34 = local_340[0xe];
          iVar21 = *(int *)((longlong)ppcVar37 + (lVar22 * 0x5a + 3) * 4);
          param_1 = local_338;
          ppcVar29 = local_340;
        }
        ppcVar52 = &local_258;
        ppcVar46 = ppcVar37 + lVar22 * 0x2d + 2;
        if (pcVar34 == (code *)0x0) {
          ppcVar46 = ppcVar35 + 0x5a;
        }
        local_390 = (code **)CONCAT44(local_390._4_4_,iVar21);
        local_398 = (code **)((ulonglong)local_398 & 0xffffffff00000000);
        FUN_1408acb46(*param_1,ppcVar29,0xffffffff,local_318);
        FUN_1408abde0(ppcVar35,ppcVar29);
        FUN_140222058(ppcVar35,ppcVar29);
        ppcVar25 = param_1[1][3];
        if (*(char *)param_1[1] == '\0') {
          ppcVar25 = ppcVar25 + (int)local_318;
        }
        ppcVar25 = (code **)*ppcVar25;
        local_328 = (code **)CONCAT44(local_328._4_4_,*(int *)ppcVar35);
        local_310 = ppcVar46;
        FUN_1400021e4(&DAT_14cc27038,ppcVar52);
        FUN_1400021e4(&DAT_14cc27038,&local_248);
        local_398 = (code **)0x0;
        FUN_1408ab21e(ppcVar25,&local_298,&local_248,ppcVar52);
        if (local_248 != (code **)0x0) {
          FUN_1400020a8();
        }
        iVar21 = (uint)uStack_290 + -1;
        if ((uint)uStack_290 == 0) {
          iVar21 = 0;
        }
        uVar23 = 0;
        if (0 < iVar21) {
          pppcVar28 = (code ***)&DAT_149dfb77a;
          if ((uint)uStack_290 != 0) {
            pppcVar28 = local_298;
          }
          lVar45 = 0;
          uVar23 = 0;
          ppcVar52 = (code **)&DAT_14c75d150;
          do {
            uVar11 = *(ushort *)((longlong)pppcVar28 + lVar45 * 2);
            uVar39 = ((uint)uVar11 + (uint)(0x19 < uVar11 - 0x61) * 0x20) - 0x20;
            uVar31 = (uint)(uVar23 >> 8) ^
                     *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar23 ^ uVar39) & 0xff) * 4);
            uVar23 = (ulonglong)
                     (uVar31 >> 8 ^
                     *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar31 & 0xff ^ uVar39 >> 8 & 0xff) * 4)
                     );
            lVar45 = lVar45 + 1;
          } while (iVar21 != (int)lVar45);
        }
        uVar20 = SUB84(ppcVar52,0);
        pppcVar28 = (code ***)(local_348 + 1);
        iVar21 = FUN_140aad9fa(pppcVar28,uVar23,&local_298);
        if ((iVar21 == -1) ||
           (ppcVar29 = *pppcVar28 + (longlong)iVar21 * 5, ppcVar29 == (code **)0x0)) {
          iVar21 = 0;
          ppppcVar27 = (code ****)0x0;
        }
        else {
          ppppcVar27 = (code ****)ppcVar29[2];
          iVar21 = *(int *)(ppcVar29 + 3);
          uVar20 = *(undefined4 *)((longlong)ppcVar29 + 0x1c);
        }
        local_300 = pppcVar28;
        FUN_1400021e4(&DAT_14cc27038,&local_248);
        iVar19 = FUN_144a41c6c(ppcVar25,&local_248);
        fVar56 = 0.0;
        fVar59 = 1.0;
        if (iVar19 != -1) {
          fVar59 = *(float *)(ppcVar25[5] + (longlong)iVar19 * 0xc);
          fVar56 = *(float *)(ppcVar25[3] + (longlong)iVar19 * 0xc);
        }
        if (local_248 != (code **)0x0) {
          FUN_1400020a8();
        }
        ppcVar29 = local_340;
        local_248 = (code **)CONCAT44(local_248._4_4_,(int)local_328);
        if (iVar21 != (int)local_328) {
          ppppcVar27 = (code ****)0x0;
          local_328._0_4_ = 0;
          uVar20 = local_238._4_4_;
        }
        local_238._4_4_ = uVar20;
        local_238 = (code **)CONCAT44(local_238._4_4_,(int)local_328);
        uStack_230 = CONCAT44(fVar59 - fVar56,fVar56);
        local_328 = ppcVar25;
        uStack_240 = ppppcVar27;
        if (local_298 != (code ***)0x0) {
          FUN_1400020a8();
        }
        if (local_258 != (code *)0x0) {
          FUN_1400020a8();
        }
        FUN_1400021e4(&DAT_14cc27058,&local_2a8);
        FUN_1400021e4(&DAT_14cc27058,&local_298);
        local_398 = (code **)0x0;
        FUN_1408ab21e(local_328,&local_258,&local_298);
        if (local_298 != (code ***)0x0) {
          FUN_1400020a8();
        }
        ppcVar35 = local_328;
        param_1 = local_338;
        uVar23 = 0;
        iVar21 = (int)uStack_250 + -1;
        if ((int)uStack_250 == 0) {
          iVar21 = 0;
        }
        if (0 < iVar21) {
          pcVar34 = (code *)&DAT_149dfb77a;
          if ((int)uStack_250 != 0) {
            pcVar34 = local_258;
          }
          lVar45 = 0;
          uVar23 = 0;
          do {
            uVar39 = ((uint)*(ushort *)(pcVar34 + lVar45 * 2) +
                     (uint)(0x19 < *(ushort *)(pcVar34 + lVar45 * 2) - 0x61) * 0x20) - 0x20;
            uVar31 = (uint)(uVar23 >> 8) ^
                     *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar23 ^ uVar39) & 0xff) * 4);
            uVar23 = (ulonglong)
                     (uVar31 >> 8 ^
                     *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar31 & 0xff ^ uVar39 >> 8 & 0xff) * 4)
                     );
            lVar45 = lVar45 + 1;
          } while (iVar21 != (int)lVar45);
        }
        ppcVar52 = local_348 + 0xb;
        iVar21 = FUN_1408ab52e(ppcVar52,uVar23,&local_258);
        if (iVar21 == -1) {
          uVar23 = 0;
        }
        else {
          pcVar34 = *ppcVar52 + (longlong)iVar21 * 0x20;
          ppcVar29 = local_340;
          param_1 = local_338;
          ppcVar35 = local_328;
          if (pcVar34 == (code *)0x0) {
            uVar23 = 0;
          }
          else {
            uVar23 = *(ulonglong *)(pcVar34 + 0x10);
          }
        }
        if (local_258 != (code *)0x0) {
          FUN_1400020a8();
        }
        if (local_2a8 != (code *)0x0) {
          FUN_1400020a8();
        }
        local_298 = &local_248;
        uStack_290 = uVar23;
        FUN_140056680(&local_258,L"MassMode");
        iVar21 = FUN_144a41c6c(ppcVar35,&local_258);
        if (iVar21 == -1) {
          iVar21 = 2;
        }
        else {
          iVar21 = (int)*(float *)(ppcVar35[3] + (longlong)iVar21 * 0xc);
        }
        if (local_258 != (code *)0x0) {
          FUN_1400020a8();
        }
        FUN_140056680(&local_258,L"MinPerParticleMass");
        iVar19 = FUN_144a41c6c(ppcVar35,&local_258);
        fVar59 = 0.0001;
        if (iVar19 != -1) {
          fVar59 = *(float *)(ppcVar35[3] + (longlong)iVar19 * 0xc);
        }
        if (fVar59 <= 1e-08) {
          fVar59 = 1e-08;
        }
        if (local_258 != (code *)0x0) {
          FUN_1400020a8();
        }
        ppcVar52 = local_328;
        if (iVar21 == 2) {
          FUN_1408ab488(&local_2c8,ppcVar35);
          FUN_1400021e4(&DAT_14cc27040,&local_2b8);
          FUN_1408ab3ba(&local_2a8,ppcVar35,&local_2b8);
          pppcVar28 = local_300;
          uVar23 = 0;
          iVar21 = (int)uStack_2a0 + -1;
          if ((int)uStack_2a0 == 0) {
            iVar21 = 0;
          }
          if (0 < iVar21) {
            pcVar34 = (code *)&DAT_149dfb77a;
            if ((int)uStack_2a0 != 0) {
              pcVar34 = local_2a8;
            }
            lVar45 = 0;
            uVar23 = 0;
            do {
              uVar39 = ((uint)*(ushort *)(pcVar34 + lVar45 * 2) +
                       (uint)(0x19 < *(ushort *)(pcVar34 + lVar45 * 2) - 0x61) * 0x20) - 0x20;
              uVar31 = (uint)(uVar23 >> 8) ^
                       *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar23 ^ uVar39) & 0xff) * 4);
              uVar23 = (ulonglong)
                       (uVar31 >> 8 ^
                       *(uint *)(&DAT_14c75d150 +
                                (ulonglong)(uVar31 & 0xff ^ uVar39 >> 8 & 0xff) * 4));
              lVar45 = lVar45 + 1;
            } while (iVar21 != (int)lVar45);
          }
          iVar21 = FUN_140aad9fa(local_300,uVar23,&local_2a8);
          if ((iVar21 == -1) ||
             (ppcVar35 = *pppcVar28 + (longlong)iVar21 * 5, ppcVar35 == (code **)0x0)) {
            local_258 = (code *)0x0;
            uStack_250 = (code ****)((ulonglong)uStack_250 & 0xffffffff00000000);
          }
          else {
            local_258 = ppcVar35[2];
            uStack_250 = (code ****)ppcVar35[3];
          }
          if (local_2a8 != (code *)0x0) {
            FUN_1400020a8();
          }
          if (local_2b8 != (code *)0x0) {
            FUN_1400020a8();
          }
          ppcVar35 = local_310;
          local_2a8 = FUN_1408ab17c;
          uVar39 = *(uint *)((longlong)ppcVar37 + (lVar22 * 0x5a + 3) * 4);
          lVar22 = (longlong)(int)uVar39;
          if (ppcVar29[0xd] == (code *)0x0) {
            uVar31 = *(uint *)(ppcVar29[0xe] + 0xe8);
            lVar45 = *(longlong *)(ppcVar29[0xe] + 0xe0);
            if ((int)uVar31 < 1) {
              uVar38 = 0;
            }
            else {
              uVar44 = -uVar39;
              if ((int)-uVar39 < 0) {
                uVar44 = uVar39;
              }
              uVar38 = 0;
              do {
                uVar2 = (uVar31 >> 1) + uVar38;
                uVar12 = *(uint *)(lVar45 + (ulonglong)uVar2 * 4);
                uVar47 = -uVar12;
                if ((int)uVar47 < 0) {
                  uVar47 = uVar12;
                }
                if (uVar47 <= uVar44) {
                  uVar38 = uVar2 + (uVar31 & 1);
                }
                bVar13 = 1 < uVar31;
                uVar31 = uVar31 >> 1;
              } while (bVar13);
            }
            iVar21 = *(int *)(lVar45 + (ulonglong)uVar38 * 4);
            iVar19 = -iVar21;
            if (iVar19 < 0) {
              iVar19 = iVar21;
            }
            uStack_2a0 = &local_298;
            FUN_1408ababe(ppcVar29,uVar39,iVar19 - uVar39,local_310);
            local_2b8 = (code *)CONCAT44(local_2c8._4_4_ * 0.0001,(float)local_2c8 * 0.0001);
            local_398 = (code **)&local_2b8;
            local_390 = &local_258;
            FUN_1408ac284(ppcVar29,ppcVar35,uVar39,iVar19 - uVar39);
            param_1 = local_338;
            pppcVar24 = local_320;
            if ((int)uVar39 < iVar19) {
              pcVar34 = ppcVar29[0xe];
              iVar21 = 0;
              do {
                fVar56 = *(float *)(*(longlong *)(pcVar34 + 0x98) + lVar22 * 4);
                if (fVar56 <= fVar59) {
                  fVar56 = fVar59;
                }
                *(float *)(*(longlong *)(pcVar34 + 0x98) + lVar22 * 4) = fVar56;
                local_2cc = iVar21;
                cVar17 = FUN_1408ab17c(&local_298);
                if (cVar17 == '\0') {
                  fVar56 = 1.0 / *(float *)(*(longlong *)(pcVar34 + 0x98) + lVar22 * 4);
                }
                else {
                  fVar56 = 0.0;
                }
                *(float *)(*(longlong *)(pcVar34 + 0xb0) + lVar22 * 4) = fVar56;
                lVar22 = lVar22 + 1;
                iVar21 = iVar21 + 1;
                pppcVar24 = local_320;
              } while (iVar19 - uVar39 != iVar21);
            }
          }
          else {
            lVar22 = lVar22 * 0x18 + *(longlong *)(ppcVar29[0xd] + 0x1f8);
            uStack_2a0 = &local_298;
            FUN_14462e238(lVar22,local_310);
            local_2b8 = (code *)CONCAT44(local_2c8._4_4_ * 0.0001,(float)local_2c8 * 0.0001);
            FUN_14462e414(lVar22,ppcVar35,&local_2b8,&local_258);
            FUN_1497f2db6(lVar22,fVar59,&local_2a8);
            pppcVar24 = local_320;
          }
        }
        else if (iVar21 == 1) {
          uVar26 = FUN_1497ef5f4(local_328);
          ppcVar29 = local_340;
          local_258 = FUN_1408ab17c;
          local_390 = &local_258;
          local_398 = local_310;
          uStack_250 = &local_298;
          FUN_1497ef684(local_340,*(int *)((longlong)ppcVar37 + (lVar22 * 0x5a + 3) * 4),uVar26,
                        fVar59);
          param_1 = local_338;
          pppcVar24 = local_320;
        }
        else {
          FUN_1408ab488(&local_2c8,local_328);
          FUN_1400021e4(&DAT_14cc27040,&local_2b8);
          FUN_1408ab3ba(&local_2a8,ppcVar52,&local_2b8);
          pcVar34 = local_2a8;
          if ((int)uStack_2a0 == 0) {
            pcVar34 = (code *)&DAT_149dfb77a;
          }
          iVar21 = (int)uStack_2a0 + -1;
          if ((int)uStack_2a0 == 0) {
            iVar21 = 0;
          }
          uVar20 = FUN_144a49b4a(iVar21,pcVar34);
          iVar21 = FUN_140aad9fa(local_300,uVar20,&local_2a8);
          if ((iVar21 == -1) ||
             (ppcVar29 = *local_300 + (longlong)iVar21 * 5, ppcVar29 == (code **)0x0)) {
            local_258 = (code *)0x0;
            uStack_250 = (code ****)((ulonglong)uStack_250 & 0xffffffff00000000);
          }
          else {
            local_258 = ppcVar29[2];
            uStack_250 = (code ****)ppcVar29[3];
          }
          if (local_2a8 != (code *)0x0) {
            FUN_1400020a8();
          }
          if (local_2b8 != (code *)0x0) {
            FUN_1400020a8();
          }
          ppcVar29 = local_340;
          local_2a8 = FUN_1408ab17c;
          local_390 = local_310;
          local_398 = (code **)CONCAT44(local_398._4_4_,fVar59);
          local_388 = &local_2a8;
          uStack_2a0 = &local_298;
          FUN_1497ef1d2(local_340,*(int *)((longlong)ppcVar37 + (lVar22 * 0x5a + 3) * 4),&local_2c8,
                        &local_258);
          param_1 = local_338;
          pppcVar24 = local_320;
        }
      }
      pppcVar28 = local_318;
    } while (&DAT_00000001 < pppcVar24);
    iVar21 = *(int *)(param_1 + 0x1d);
    if (0 < iVar21) {
      lVar22 = 0;
      do {
        ppcVar35 = param_1[0x1c][lVar22];
        if (*(int *)(ppcVar35 + 0x84) == *(int *)((longlong)ppcVar35 + 0x44c)) {
LAB_1408aa39b:
          pcVar34 = (code *)0x0;
        }
        else {
          ppcVar37 = ppcVar35 + 0x8a;
          if ((code **)ppcVar35[0x8b] != (code **)0x0) {
            ppcVar37 = (code **)ppcVar35[0x8b];
          }
          iVar19 = *(int *)((longlong)ppcVar37 +
                           (ulonglong)(*(int *)(ppcVar35 + 0x8c) - 1U & (uint)local_330) * 4);
          if (iVar19 == -1) goto LAB_1408aa39b;
          do {
            pcVar34 = ppcVar35[0x83] + (longlong)iVar19 * 0x168;
            if (*(code ***)(ppcVar35[0x83] + (longlong)iVar19 * 0x168) == ppcVar29) break;
            iVar19 = *(int *)(pcVar34 + 0x160);
            pcVar34 = (code *)0x0;
          } while (iVar19 != -1);
        }
        if (*(int *)ppcVar35 != 0) {
          iVar21 = *(int *)(pcVar34 + 0xc);
          pcVar48 = ppcVar29[0x53];
          fVar59 = (float)(*(**param_1)[0x1d])();
          local_348 = param_1[1][3];
          if (*(char *)param_1[1] == '\0') {
            local_348 = local_348 + (int)lVar22;
          }
          local_348 = (code **)*local_348;
          local_248 = (code **)0x0;
          uStack_240 = (code ****)0x0;
          uVar20 = 0xffffffff;
          ppppcVar27 = uStack_240;
          if (ppcVar29[0xe] == (code *)0x0) {
            if (lVar22 != 0) {
              local_298 = (code ***)((ulonglong)local_298 & 0xffffffffffffff00);
              cVar17 = FUN_1497ef952(local_348);
              ppppcVar27 = uStack_240;
              if ((cVar17 != '\0') &&
                 (iVar19 = FUN_1497ef8d0(*local_338[1][3]), ppppcVar27 = uStack_240,
                 iVar19 == (int)lVar22)) {
                ppcVar29 = *local_338[0x1c];
                if (*(int *)(ppcVar29 + 0x84) != *(int *)((longlong)ppcVar29 + 0x44c)) {
                  ppcVar37 = ppcVar29 + 0x8a;
                  if ((code **)ppcVar29[0x8b] != (code **)0x0) {
                    ppcVar37 = (code **)ppcVar29[0x8b];
                  }
                  iVar19 = *(int *)((longlong)ppcVar37 +
                                   (ulonglong)(*(int *)(ppcVar29 + 0x8c) - 1U & (uint)local_330) * 4
                                   );
                  if (iVar19 != -1) {
                    do {
                      pcVar34 = ppcVar29[0x83] + (longlong)iVar19 * 0x168;
                      if (*(code ***)(ppcVar29[0x83] + (longlong)iVar19 * 0x168) == local_340)
                      goto LAB_1408aac70;
                      iVar19 = *(int *)(pcVar34 + 0x160);
                    } while (iVar19 != -1);
                  }
                }
                pcVar34 = (code *)0x0;
LAB_1408aac70:
                lVar45 = FUN_14491371e(local_340,*(undefined4 *)(pcVar34 + 0xc));
                ppppcVar54 = uStack_240;
                local_248 = *(code ***)(lVar45 + 0x160);
                ppppcVar27 = *(code *****)(lVar45 + 0x168);
                if (ppppcVar27 == (code ****)0x0) {
                  uStack_240 = (code ****)0x0;
                  ppppcVar27 = uStack_240;
                }
                else {
                  LOCK();
                  *(int *)(ppppcVar27 + 1) = *(int *)(ppppcVar27 + 1) + 1;
                  UNLOCK();
                  if (uStack_240 != (code ****)0x0) {
                    LOCK();
                    ppppcVar36 = uStack_240 + 1;
                    *(int *)ppppcVar36 = *(int *)ppppcVar36 + -1;
                    UNLOCK();
                    if (*(int *)ppppcVar36 == 0) {
                      pppcVar28 = *uStack_240;
                      uStack_240 = ppppcVar27;
                      (*(code *)*pppcVar28)(ppppcVar54);
                      LOCK();
                      piVar1 = (int *)((longlong)ppppcVar54 + 0xc);
                      *piVar1 = *piVar1 + -1;
                      UNLOCK();
                      ppppcVar27 = uStack_240;
                      if (*piVar1 == 0) {
                        (*(code *)(*ppppcVar54)[2])(ppppcVar54);
                        ppppcVar27 = uStack_240;
                      }
                    }
                  }
                }
              }
              goto LAB_1408a8f48;
            }
            uVar39 = FUN_1497ef8d0(local_348);
            ppppcVar27 = uStack_240;
            if (uVar39 + 1 < 2) goto LAB_1408a8f48;
            pppcVar28 = local_338[1];
            if (*(char *)pppcVar28 == '\0') {
              if (((-1 < (int)uVar39) && ((int)uVar39 < *(int *)(pppcVar28 + 4))) &&
                 ((int)uVar39 < *(int *)(local_338 + 0x1d))) {
                ppcVar29 = pppcVar28[3] + uVar39;
                goto LAB_1408aa96d;
              }
              goto LAB_1408a8f48;
            }
            if (((int)uVar39 < 0) || (*(int *)(local_338 + 0x1d) <= (int)uVar39))
            goto LAB_1408a8f48;
            ppcVar29 = pppcVar28[3];
LAB_1408aa96d:
            local_298 = (code ***)((ulonglong)local_298 & 0xffffffffffffff00);
            cVar17 = FUN_1497ef952(*ppcVar29);
            ppppcVar27 = uStack_240;
            if (cVar17 == '\0') goto LAB_1408a8f48;
            ppcVar37 = local_338[0x1c][uVar39];
            if (*(int *)(ppcVar37 + 0x84) != *(int *)((longlong)ppcVar37 + 0x44c)) {
              ppcVar29 = ppcVar37 + 0x8a;
              if ((code **)ppcVar37[0x8b] != (code **)0x0) {
                ppcVar29 = (code **)ppcVar37[0x8b];
              }
              iVar19 = *(int *)((longlong)ppcVar29 +
                               (ulonglong)(*(int *)(ppcVar37 + 0x8c) - 1U & (uint)local_330) * 4);
              if (iVar19 != -1) {
                do {
                  pcVar53 = ppcVar37[0x83] + (longlong)iVar19 * 0x168;
                  if (*(code ***)(ppcVar37[0x83] + (longlong)iVar19 * 0x168) == local_340)
                  goto LAB_1408aa9b6;
                  iVar19 = *(int *)(pcVar53 + 0x160);
                } while (iVar19 != -1);
              }
            }
            pcVar53 = (code *)0x0;
LAB_1408aa9b6:
            ppcVar37 = ppcVar37 + 0x5a;
            uVar20 = *(undefined4 *)(pcVar53 + 0xc);
            *(uint *)(pcVar34 + 0x158) = uVar39;
          }
          else {
LAB_1408a8f48:
            uStack_240 = ppppcVar27;
            ppcVar37 = (code **)0x0;
          }
          ppcVar29 = local_340;
          uVar26 = FUN_14491371e(local_340,iVar21);
          local_378 = ppcVar35 + 0x29;
          local_380 = ppcVar35 + 0x1f;
          local_388 = ppcVar35 + 0x15;
          local_390 = ppcVar35 + 0xb;
          local_398 = ppcVar35 + 1;
          local_358 = &local_248;
          local_370 = (float)((1.0 / (double)pcVar48) * (double)fVar59);
          local_368 = ppcVar37;
          local_360 = uVar20;
          FUN_1408af72a(uVar26);
          ppppcVar27 = uStack_240;
          param_1 = local_338;
          if (ppcVar29[0xd] == (code *)0x0) {
            pcVar34 = ppcVar29[0xe] + 0xb0;
          }
          else {
            lVar45 = *(longlong *)(ppcVar29[0xd] + 0x1f8);
            pcVar34 = (code *)(*(longlong *)(lVar45 + 8 + (longlong)iVar21 * 0x18) + 0x90);
            iVar21 = *(int *)(lVar45 + 0x10 + (longlong)iVar21 * 0x18);
          }
          lVar45 = *(longlong *)pcVar34;
          ppcVar35[0x8d] = (code *)0x0;
          if (0 < (longlong)*(int *)ppcVar35) {
            iVar19 = 0;
            iVar18 = 0;
            lVar49 = 0;
            do {
              fVar59 = *(float *)((longlong)iVar21 * 4 + lVar45 + lVar49 * 4);
              if ((fVar59 != 0.0) || (NAN(fVar59))) {
                iVar18 = iVar18 + 1;
                *(int *)((longlong)ppcVar35 + 0x46c) = iVar18;
              }
              else {
                iVar19 = iVar19 + 1;
                *(int *)(ppcVar35 + 0x8d) = iVar19;
              }
              lVar49 = lVar49 + 1;
            } while (*(int *)ppcVar35 != lVar49);
          }
          if (uStack_240 != (code ****)0x0) {
            LOCK();
            ppppcVar54 = uStack_240 + 1;
            *(int *)ppppcVar54 = *(int *)ppppcVar54 + -1;
            UNLOCK();
            if (*(int *)ppppcVar54 == 0) {
              (*(code *)**uStack_240)(uStack_240);
              LOCK();
              piVar1 = (int *)((longlong)ppppcVar27 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (*(code *)(*ppppcVar27)[2])(ppppcVar27);
              }
            }
          }
          iVar21 = *(int *)(param_1 + 0x1d);
        }
        lVar22 = lVar22 + 1;
      } while (lVar22 < iVar21);
    }
  }
  if ((longlong)*(int *)(param_1 + 3) != 0) {
    pppcVar28 = param_1[2];
    local_300 = pppcVar28 + *(int *)(param_1 + 3);
    do {
      ppcVar35 = *pppcVar28;
      local_298 = &local_248;
      local_320 = pppcVar28;
      local_248 = ppcVar29;
      uStack_240 = param_1;
      FUN_1408ad1dc(ppcVar35 + 6,&local_258,&local_298);
      *(undefined4 *)(ppcVar35[6] + (longlong)(int)local_258 * 0x20 + 0x10) = 0xffffffff;
      lVar22 = (*(**param_1)[0x17])();
      ppcVar35[0x10] = *(code **)(lVar22 + 0x40);
      local_268 = 0;
      uStack_260 = 0;
      local_278 = 0;
      uStack_270 = 0;
      local_288 = 0;
      uStack_280 = 0;
      local_298 = (code ***)0x0;
      uStack_290 = 0;
      local_2a8 = (code *)0x0;
      uStack_2a0 = (code ****)0x0;
      local_2b8 = (code *)0x0;
      uStack_2b0 = 0;
      local_2c8 = (code *)0x0;
      uStack_2c0 = 0;
      pcVar34 = *ppcVar35;
      pcVar48 = ppcVar35[1];
      local_310 = ppcVar35;
      FUN_1401bf620(&local_298);
      uStack_2c0 = uStack_2c0 & 0xffffffff00000000;
      if (pcVar34 != (code *)0x0) {
        iVar21 = *(int *)(pcVar34 + 0x48);
        if (iVar21 < 0) {
LAB_1408aaf3b:
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(iVar21);
        }
        if (iVar21 != 0) {
          FUN_14481578e(&local_2c8);
          if ((longlong)*(int *)(pcVar34 + 0x48) != 0) {
            pppcVar28 = *(code ****)(pcVar34 + 0x40);
            local_318 = pppcVar28 + *(int *)(pcVar34 + 0x48);
            local_328 = (code **)(pcVar48 + 200);
            do {
              ppcVar29 = *pppcVar28;
              if (ppcVar29 != (code **)0x0) {
                uVar20 = 0xffffffff;
                if (((pcVar48 != (code *)0x0) && (pcVar34 = ppcVar29[5], pcVar34 != (code *)0x0)) &&
                   (*(int *)(pcVar48 + 0x98) != *(int *)(pcVar48 + 0xc4))) {
                  uVar39 = (uint)((ulonglong)pcVar34 >> 0x10);
                  uVar31 = (uint)pcVar34 & 0xffff;
                  ppcVar35 = *(code ***)(pcVar48 + 0xd0);
                  if (*(code ***)(pcVar48 + 0xd0) == (code **)0x0) {
                    ppcVar35 = local_328;
                  }
                  iVar21 = *(int *)((longlong)ppcVar35 +
                                   (ulonglong)
                                   (*(int *)(pcVar48 + 0xd8) - 1U &
                                   (int)((ulonglong)pcVar34 >> 0x20) +
                                   ((uint)pcVar34 << 0x10 | uVar31) +
                                   (uVar39 << 0x13 | uVar39 & 0xffff) + (uVar31 >> 4)) * 4);
                  if (iVar21 != -1) {
                    do {
                      plVar43 = (longlong *)
                                (*(longlong *)(pcVar48 + 0x90) + (longlong)iVar21 * 0x14);
                      if ((code *)*plVar43 == pcVar34) {
                        if ((plVar43 != (longlong *)0x0) && (plVar43 + 1 != (longlong *)0x0)) {
                          uVar20 = (undefined4)plVar43[1];
                        }
                        break;
                      }
                      iVar21 = *(int *)((longlong)plVar43 + 0xc);
                    } while (iVar21 != -1);
                  }
                }
                local_348 = (code **)(uStack_2c0 & 0xffffffff);
                uVar39 = (int)uStack_2c0 + 1;
                uStack_2c0 = CONCAT44(uStack_2c0._4_4_,uVar39);
                if (uStack_2c0._4_4_ < uVar39) {
                  FUN_1446f48e2(&local_2c8);
                }
                *(undefined4 *)(local_2c8 + (longlong)(int)local_348 * 4) = uVar20;
                ppcVar35 = local_348;
                if ((longlong)*(int *)(ppcVar29 + 0xc) != 0) {
                  pcVar34 = ppcVar29[0xb] + 0x48;
                  lVar22 = (longlong)*(int *)(ppcVar29 + 0xc) * 0x68;
                  do {
                    uVar23 = uStack_290;
                    if ((*(float *)(pcVar34 + 0x1c) != 0.0) || (NAN(*(float *)(pcVar34 + 0x1c)))) {
                      FUN_1401c9a0e(pcVar34,&local_248,&DAT_14c8462c0);
                      dVar15 = (double)(*(float *)(pcVar34 + 0x1c) * 0.5);
                      dVar14 = (double)local_238 * dVar15;
                      dVar16 = (double)uStack_240 * dVar15;
                      dVar15 = dVar15 * (double)local_248;
                      dVar7 = *(double *)(pcVar34 + -8);
                      dVar8 = *(double *)(pcVar34 + -0x18);
                      dVar9 = *(double *)(pcVar34 + -0x10);
                      uVar20 = *(undefined4 *)(pcVar34 + 0x18);
                      iVar21 = (uint)uStack_290;
                      lVar45 = (longlong)(int)(uint)uStack_290;
                      uVar39 = (uint)uStack_290 + 1;
                      if (uStack_290._4_4_ < uVar39) {
                        uVar23 = uStack_290 & 0xffffffff;
                        uStack_290._0_4_ = uVar39;
                        FUN_1408ab84c(&local_298,uVar23);
                        uVar39 = (uint)uStack_290;
                      }
                      uStack_290._0_4_ = uVar39;
                      uVar39 = (uint)uStack_290;
                      *(int *)(local_298 + lVar45 * 4) = (int)local_348;
                      *(undefined4 *)((longlong)local_298 + lVar45 * 0x20 + 4) = uVar20;
                      local_298[lVar45 * 4 + 1] = (code **)(dVar8 - dVar15);
                      local_298[lVar45 * 4 + 2] = (code **)(dVar9 - dVar16);
                      local_298[lVar45 * 4 + 3] = (code **)(dVar7 - dVar14);
                      lVar45 = (longlong)(int)(uint)uStack_290;
                      uStack_290._0_4_ = (uint)uStack_290 + 1;
                      if (uStack_290._4_4_ < (uint)uStack_290) {
                        FUN_1408ab84c(&local_298,uVar39);
                      }
                      uVar23 = uStack_280;
                      *(int *)(local_298 + lVar45 * 4) = (int)local_348;
                      *(undefined4 *)((longlong)local_298 + lVar45 * 0x20 + 4) = uVar20;
                      local_298[lVar45 * 4 + 1] = (code **)(dVar15 + dVar8);
                      local_298[lVar45 * 4 + 2] = (code **)(dVar16 + dVar9);
                      local_298[lVar45 * 4 + 3] = (code **)(dVar14 + dVar7);
                      lVar45 = (longlong)(int)uStack_280;
                      uVar31 = (int)uStack_280 + 1;
                      uStack_280 = CONCAT44(uStack_280._4_4_,uVar31);
                      if (uStack_280._4_4_ < uVar31) {
                        FUN_1408abc7e(&local_288,uVar23 & 0xffffffff);
                      }
                      *(ulonglong *)(local_288 + lVar45 * 8) = CONCAT44(uVar39,iVar21);
                      ppcVar35 = local_348;
                    }
                    else {
                      local_238 = *(code ***)(pcVar34 + -8);
                      local_248 = *(code ***)(pcVar34 + -0x18);
                      uStack_240 = *(code *****)(pcVar34 + -0x10);
                      uVar20 = *(undefined4 *)(pcVar34 + 0x18);
                      lVar45 = (longlong)(int)(uint)uStack_290;
                      uVar39 = (uint)uStack_290 + 1;
                      uStack_290 = CONCAT44(uStack_290._4_4_,uVar39);
                      if (uStack_290._4_4_ < uVar39) {
                        FUN_1408ab84c(&local_298,uVar23 & 0xffffffff);
                        ppcVar35 = local_348;
                      }
                      *(int *)(local_298 + lVar45 * 4) = (int)ppcVar35;
                      *(undefined4 *)((longlong)local_298 + lVar45 * 0x20 + 4) = uVar20;
                      local_298[lVar45 * 4 + 1] = local_248;
                      (local_298 + lVar45 * 4 + 1)[1] = (code **)uStack_240;
                      local_298[lVar45 * 4 + 3] = local_238;
                    }
                    pcVar34 = pcVar34 + 0x68;
                    lVar22 = lVar22 + -0x68;
                  } while (lVar22 != 0);
                }
                iVar21 = *(int *)(ppcVar29 + 8);
                if ((longlong)iVar21 != 0) {
                  pcVar34 = ppcVar29[7];
                  lVar22 = 0;
                  do {
                    uVar23 = uStack_290;
                    local_238 = *(code ***)(pcVar34 + lVar22 + 0x40);
                    local_248 = *(code ***)(pcVar34 + lVar22 + 0x30);
                    uStack_240 = *(code *****)(pcVar34 + lVar22 + 0x30 + 8);
                    uVar20 = *(undefined4 *)(pcVar34 + lVar22 + 0x48);
                    lVar45 = (longlong)(int)(uint)uStack_290;
                    uVar39 = (uint)uStack_290 + 1;
                    uStack_290 = CONCAT44(uStack_290._4_4_,uVar39);
                    if (uStack_290._4_4_ < uVar39) {
                      FUN_1408ab84c(&local_298,uVar23 & 0xffffffff);
                      ppcVar35 = local_348;
                    }
                    *(int *)(local_298 + lVar45 * 4) = (int)ppcVar35;
                    *(undefined4 *)((longlong)local_298 + lVar45 * 0x20 + 4) = uVar20;
                    local_298[lVar45 * 4 + 1] = local_248;
                    (local_298 + lVar45 * 4 + 1)[1] = (code **)uStack_240;
                    local_298[lVar45 * 4 + 3] = local_238;
                    lVar22 = lVar22 + 0x50;
                  } while ((longlong)iVar21 * 0x50 != lVar22);
                }
                if ((longlong)*(int *)(ppcVar29 + 0x10) != 0) {
                  pcVar34 = ppcVar29[0xf] + 0x48;
                  lVar22 = (longlong)*(int *)(ppcVar29 + 0x10) * 0x70;
                  do {
                    uVar23 = uStack_290;
                    if ((*(float *)(pcVar34 + 0x20) != 0.0) || (NAN(*(float *)(pcVar34 + 0x20)))) {
                      FUN_1401c9a0e(pcVar34,&local_248,&DAT_14c8462c0);
                      dVar14 = (double)(*(float *)(pcVar34 + 0x20) * 0.5);
                      dVar15 = (double)local_238 * dVar14;
                      dVar16 = (double)uStack_240 * dVar14;
                      dVar14 = dVar14 * (double)local_248;
                      dVar7 = *(double *)(pcVar34 + -8);
                      dVar8 = *(double *)(pcVar34 + -0x18);
                      dVar9 = *(double *)(pcVar34 + -0x10);
                      uVar20 = *(undefined4 *)(pcVar34 + 0x18);
                      uVar50 = *(undefined4 *)(pcVar34 + 0x1c);
                      iVar21 = (uint)uStack_290;
                      lVar45 = (longlong)(int)(uint)uStack_290;
                      uVar39 = (uint)uStack_290 + 1;
                      if (uStack_290._4_4_ < uVar39) {
                        uVar23 = uStack_290 & 0xffffffff;
                        uStack_290._0_4_ = uVar39;
                        FUN_1408ab84c(&local_298,uVar23);
                        uVar39 = (uint)uStack_290;
                      }
                      uStack_290._0_4_ = uVar39;
                      uVar39 = (uint)uStack_290;
                      *(int *)(local_298 + lVar45 * 4) = (int)local_348;
                      *(undefined4 *)((longlong)local_298 + lVar45 * 0x20 + 4) = uVar20;
                      local_298[lVar45 * 4 + 1] = (code **)(dVar14 + dVar8);
                      local_298[lVar45 * 4 + 2] = (code **)(dVar16 + dVar9);
                      local_298[lVar45 * 4 + 3] = (code **)(dVar15 + dVar7);
                      lVar45 = (longlong)(int)(uint)uStack_290;
                      uStack_290._0_4_ = (uint)uStack_290 + 1;
                      if (uStack_290._4_4_ < (uint)uStack_290) {
                        FUN_1408ab84c(&local_298,uVar39);
                      }
                      uVar23 = uStack_280;
                      *(int *)(local_298 + lVar45 * 4) = (int)local_348;
                      *(undefined4 *)((longlong)local_298 + lVar45 * 0x20 + 4) = uVar50;
                      local_298[lVar45 * 4 + 1] = (code **)(dVar8 - dVar14);
                      local_298[lVar45 * 4 + 2] = (code **)(dVar9 - dVar16);
                      local_298[lVar45 * 4 + 3] = (code **)(dVar7 - dVar15);
                      lVar45 = (longlong)(int)uStack_280;
                      uVar31 = (int)uStack_280 + 1;
                      uStack_280 = CONCAT44(uStack_280._4_4_,uVar31);
                      if (uStack_280._4_4_ < uVar31) {
                        FUN_1408abc7e(&local_288,uVar23 & 0xffffffff);
                      }
                      *(ulonglong *)(local_288 + lVar45 * 8) = CONCAT44(uVar39,iVar21);
                    }
                    else {
                      local_238 = *(code ***)(pcVar34 + -8);
                      local_248 = *(code ***)(pcVar34 + -0x18);
                      uStack_240 = *(code *****)(pcVar34 + -0x10);
                      fVar59 = *(float *)(pcVar34 + 0x18);
                      if (*(float *)(pcVar34 + 0x18) <= *(float *)(pcVar34 + 0x1c)) {
                        fVar59 = *(float *)(pcVar34 + 0x1c);
                      }
                      lVar45 = (longlong)(int)(uint)uStack_290;
                      uVar39 = (uint)uStack_290 + 1;
                      uStack_290 = CONCAT44(uStack_290._4_4_,uVar39);
                      if (uStack_290._4_4_ < uVar39) {
                        FUN_1408ab84c(&local_298,uVar23 & 0xffffffff);
                      }
                      *(int *)(local_298 + lVar45 * 4) = (int)local_348;
                      *(float *)((longlong)local_298 + lVar45 * 0x20 + 4) = fVar59;
                      local_298[lVar45 * 4 + 1] = local_248;
                      (local_298 + lVar45 * 4 + 1)[1] = (code **)uStack_240;
                      local_298[lVar45 * 4 + 3] = local_238;
                    }
                    pcVar34 = pcVar34 + 0x70;
                    lVar22 = lVar22 + -0x70;
                    ppcVar35 = local_348;
                  } while (lVar22 != 0);
                }
                if ((longlong)*(int *)(ppcVar29 + 10) != 0) {
                  lVar22 = (longlong)*(int *)(ppcVar29 + 10) * 0x70;
                  pcVar34 = ppcVar29[9] + 0x48;
                  do {
                    local_218 = DAT_14c8463e0;
                    uStack_210 = DAT_14c8463e8;
                    local_228 = DAT_14c8463d0;
                    uStack_220 = DAT_14c8463d8;
                    local_248 = *(code ***)(pcVar34 + -0x18);
                    uStack_240 = *(code *****)(pcVar34 + -0x10);
                    local_238 = *(code ***)(pcVar34 + -8);
                    FUN_144a7484c(pcVar34,&local_228);
                    uVar23 = uStack_260;
                    fVar59 = *(float *)(pcVar34 + 0x20);
                    fVar56 = *(float *)(pcVar34 + 0x1c);
                    fVar6 = *(float *)(pcVar34 + 0x18);
                    lVar45 = (longlong)(int)uStack_260;
                    uVar39 = (int)uStack_260 + 1;
                    uStack_260 = CONCAT44(uStack_260._4_4_,uVar39);
                    if (uStack_260._4_4_ < uVar39) {
                      FUN_146fdf4c4(&local_268,uVar23 & 0xffffffff);
                    }
                    lVar45 = lVar45 * 0x60;
                    puVar5 = (undefined8 *)(local_268 + 0x30 + lVar45);
                    *puVar5 = local_218;
                    puVar5[1] = uStack_210;
                    puVar5 = (undefined8 *)(local_268 + 0x20 + lVar45);
                    *puVar5 = local_228;
                    puVar5[1] = uStack_220;
                    puVar5 = (undefined8 *)(local_268 + 0x10 + lVar45);
                    *puVar5 = local_238;
                    puVar5[1] = uStack_230;
                    *(longlong *)(local_268 + lVar45) = (longlong)local_248;
                    ((longlong *)(local_268 + lVar45))[1] = (longlong)uStack_240;
                    *(double *)(local_268 + 0x40 + lVar45) = (double)fVar6 * 0.5;
                    *(double *)(local_268 + 0x48 + lVar45) = (double)fVar56 * 0.5;
                    *(double *)(local_268 + 0x50 + lVar45) = (double)fVar59 * 0.5;
                    *(int *)(local_268 + 0x58 + lVar45) = (int)local_348;
                    pcVar34 = pcVar34 + 0x70;
                    lVar22 = lVar22 + -0x70;
                    ppcVar35 = local_348;
                  } while (lVar22 != 0);
                }
                if ((longlong)*(int *)(ppcVar29 + 0xe) != 0) {
                  local_308 = (code **)ppcVar29[0xd];
                  ppcVar37 = local_308 + (longlong)*(int *)(ppcVar29 + 0xe) * 0x20;
                  do {
                    local_238 = (code **)0x0;
                    uStack_230 = 0;
                    local_248 = (code **)0x0;
                    uStack_240 = (code ****)0x0;
                    local_228 = CONCAT44(local_228._4_4_,(int)ppcVar35);
                    pcVar34 = local_308[0x1e];
                    FUN_147d1f964(&local_248,*(undefined4 *)(pcVar34 + 0x28));
                    if (0 < *(int *)(pcVar34 + 0x28)) {
                      local_330 = 0;
                      do {
                        lVar22 = *(longlong *)(pcVar34 + 0x20);
                        pcVar57 = (code *)(double)*(float *)(lVar22 + 0x14 + local_330 * 0x18);
                        pcVar53 = (code *)(double)*(float *)(lVar22 + 0x10 + local_330 * 0x18);
                        pcVar58 = (code *)(double)*(float *)(lVar22 + 0xc + local_330 * 0x18);
                        fVar59 = *(float *)(lVar22 + 8 + local_330 * 0x18);
                        fVar56 = *(float *)(lVar22 + 4 + local_330 * 0x18);
                        fVar6 = *(float *)(lVar22 + local_330 * 0x18);
                        local_248[local_330 * 6] = pcVar58;
                        local_248[local_330 * 6 + 1] = pcVar53;
                        local_248[local_330 * 6 + 2] = pcVar57;
                        local_248[local_330 * 6 + 3] =
                             (code *)((double)fVar59 * (double)pcVar57 +
                                     (double)fVar6 * (double)pcVar58 +
                                     (double)fVar56 * (double)pcVar53);
                        plVar43 = *(longlong **)(pcVar34 + 0x58);
                        if (plVar43 == (longlong *)0x0) {
LAB_1408a9cc4:
                          ppcVar35 = local_248 + local_330 * 6 + 4;
                          iVar21 = *(int *)(local_248 + local_330 * 6 + 5);
                          if ((longlong)iVar21 < 0) {
                            *(undefined4 *)(local_248 + local_330 * 6 + 5) = 0;
                            if ((uint)(*(int *)((longlong)local_248 + local_330 * 0x30 + 0x2c) -
                                      iVar21) < (uint)-iVar21) {
                              FUN_1446f48e2(ppcVar35);
                            }
                            memset(*ppcVar35 + (longlong)iVar21 * 4,0,(ulonglong)(uint)-iVar21 << 2)
                            ;
                          }
                          else if (iVar21 != 0) {
                            *(undefined4 *)(local_248 + local_330 * 6 + 5) = 0;
                            FUN_14479f406(ppcVar35);
                          }
                        }
                        else {
                          cVar10 = pcVar34[0x60];
                          if (cVar10 == (code)0x3) {
                            uVar39 = *(uint *)(*plVar43 + 4 + local_330 * 8);
                          }
                          else if (cVar10 == (code)0x2) {
                            uVar39 = (uint)*(short *)(*plVar43 + 2 + local_330 * 4);
                          }
                          else {
                            if (cVar10 != (code)0x1) goto LAB_1408a9cc4;
                            uVar39 = (uint)*(byte *)(*plVar43 + 1 + local_330 * 2);
                          }
                          ppcVar35 = local_248 + local_330 * 6 + 4;
                          iVar21 = *(int *)(local_248 + local_330 * 6 + 5);
                          if (iVar21 < (int)uVar39) {
                            *(uint *)(local_248 + local_330 * 6 + 5) = uVar39;
                            local_2f8 = (code **)CONCAT44(local_2f8._4_4_,uVar39 - iVar21);
                            if ((uint)(*(int *)((longlong)local_248 + local_330 * 0x30 + 0x2c) -
                                      iVar21) < uVar39 - iVar21) {
                              FUN_1446f48e2(ppcVar35);
                            }
                            memset(*ppcVar35 + (longlong)iVar21 * 4,0,(longlong)(int)local_2f8 << 2)
                            ;
                          }
                          else {
                            if ((int)uVar39 < 0) {
                    /* WARNING: Subroutine does not return */
                              FUN_1456afac4(uVar39);
                            }
                            if ((int)uVar39 < iVar21) {
                              *(uint *)(local_248 + local_330 * 6 + 5) = uVar39;
                              FUN_14479f406(ppcVar35);
                            }
                          }
                          if (0 < (int)uVar39) {
                            lVar22 = local_330 << 0x20;
                            uVar23 = 0;
                            do {
                              plVar43 = *(longlong **)(pcVar34 + 0x58);
                              uVar31 = 0xffffffff;
                              if (plVar43 != (longlong *)0x0) {
                                cVar10 = pcVar34[0x60];
                                if (cVar10 == (code)0x1) {
                                  uVar31 = (uint)*(byte *)(plVar43[2] + 1 +
                                                          (longlong)
                                                          (int)((uint)*(byte *)(*plVar43 +
                                                                               (lVar22 >> 0x1f)) +
                                                               (int)uVar23) * 3);
                                }
                                else if (cVar10 == (code)0x2) {
                                  uVar31 = (uint)*(short *)(plVar43[2] + 2 +
                                                           (longlong)
                                                           ((int)*(short *)(*plVar43 +
                                                                           (lVar22 >> 0x1e)) +
                                                           (int)uVar23) * 6);
                                }
                                else if (cVar10 == (code)0x3) {
                                  uVar31 = *(uint *)(plVar43[2] + 4 +
                                                    ((longlong)*(int *)(*plVar43 + (lVar22 >> 0x1d))
                                                    + uVar23) * 0xc);
                                }
                              }
                              *(uint *)(*ppcVar35 + uVar23 * 4) = uVar31;
                              uVar23 = uVar23 + 1;
                            } while (uVar39 != uVar23);
                          }
                        }
                        local_330 = local_330 + 1;
                      } while (local_330 < *(int *)(pcVar34 + 0x28));
                    }
                    uVar39 = *(uint *)(pcVar34 + 0x38);
                    uVar23 = (ulonglong)uVar39;
                    if ((int)uVar39 < 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_1456afac4(uVar23);
                    }
                    if ((int)uStack_230._4_4_ < (int)uVar39) {
                      FUN_1447a8aa0(&local_238,uVar39);
                    }
                    if (uVar23 != 0) {
                      lVar22 = 0;
                      do {
                        uVar42 = uStack_230;
                        lVar45 = *(longlong *)(pcVar34 + 0x30);
                        fVar59 = *(float *)(lVar45 + 8 + lVar22);
                        fVar56 = *(float *)(lVar45 + 4 + lVar22);
                        fVar6 = *(float *)(lVar45 + lVar22);
                        lVar45 = (longlong)(int)uStack_230;
                        uVar39 = (int)uStack_230 + 1;
                        uStack_230 = CONCAT44(uStack_230._4_4_,uVar39);
                        if (uStack_230._4_4_ < uVar39) {
                          FUN_1403e3958(&local_238,uVar42 & 0xffffffff);
                        }
                        local_238[lVar45 * 3] = (code *)(double)fVar6;
                        local_238[lVar45 * 3 + 1] = (code *)(double)fVar56;
                        local_238[lVar45 * 3 + 2] = (code *)(double)fVar59;
                        lVar22 = lVar22 + 0xc;
                      } while (uVar23 * 0xc != lVar22);
                    }
                    uVar23 = uStack_270;
                    lVar22 = (longlong)(int)uStack_270;
                    uVar39 = (int)uStack_270 + 1;
                    uStack_270 = CONCAT44(uStack_270._4_4_,uVar39);
                    if (uStack_270._4_4_ < uVar39) {
                      FUN_146fdf430(&local_278,uVar23 & 0xffffffff);
                    }
                    FUN_146fdf232(lVar22 * 0x28 + local_278,&local_248);
                    FUN_146fdeb9a(&local_248);
                    local_308 = local_308 + 0x20;
                    ppcVar35 = local_348;
                  } while (local_308 != ppcVar37);
                }
                if ((longlong)*(int *)(ppcVar29 + 0x12) != 0) {
                  pcVar34 = ppcVar29[0x11];
                  local_2f8 = (code **)((longlong)*(int *)(ppcVar29 + 0x12) * 0xa0);
                  ppcVar35 = (code **)0x0;
                  do {
                    local_330 = *(longlong *)(pcVar34 + 0x90 + (longlong)ppcVar35);
                    plVar43 = *(longlong **)(pcVar34 + 0x98 + (longlong)ppcVar35);
                    if (plVar43 == (longlong *)0x0) {
                      if (local_330 != 0) {
LAB_1408aa04b:
                        local_308 = (code **)CONCAT44(local_308._4_4_,
                                                      (int)CONCAT71((int7)((ulonglong)local_330 >> 8
                                                                          ),1));
                        plVar43 = (longlong *)0x0;
                        goto LAB_1408aa056;
                      }
                    }
                    else {
                      LOCK();
                      *(int *)(plVar43 + 1) = (int)plVar43[1] + 1;
                      UNLOCK();
                      LOCK();
                      plVar51 = plVar43 + 1;
                      *(int *)plVar51 = (int)*plVar51 + -1;
                      UNLOCK();
                      if ((int)*plVar51 == 0) {
                        (**(code **)*plVar43)(plVar43);
                        LOCK();
                        piVar1 = (int *)((longlong)plVar43 + 0xc);
                        *piVar1 = *piVar1 + -1;
                        UNLOCK();
                        if (*piVar1 == 0) {
                          (**(code **)(*plVar43 + 0x10))(plVar43);
                        }
                      }
                      if (local_330 != 0) {
                        plVar43 = *(longlong **)(pcVar34 + 0x98 + (longlong)ppcVar35);
                        local_330 = *(longlong *)(pcVar34 + 0x90 + (longlong)ppcVar35);
                        if (plVar43 == (longlong *)0x0) goto LAB_1408aa04b;
                        LOCK();
                        *(int *)(plVar43 + 1) = (int)plVar43[1] + 1;
                        UNLOCK();
                        local_308 = (code **)((ulonglong)local_308 & 0xffffffff00000000);
LAB_1408aa056:
                        ppppcVar27 = uStack_2a0;
                        pcVar53 = (code *)((longlong)ppcVar35 + (longlong)(pcVar34 + 0x30));
                        pppcVar24 = &local_248;
                        for (lVar22 = 0xc; lVar22 != 0; lVar22 = lVar22 + -1) {
                          *pppcVar24 = *(code ***)pcVar53;
                          pcVar53 = pcVar53 + 8;
                          pppcVar24 = pppcVar24 + 1;
                        }
                        lVar22 = (longlong)(int)uStack_2a0;
                        uVar39 = (int)uStack_2a0 + 1;
                        uStack_2a0 = (code ****)CONCAT44(uStack_2a0._4_4_,uVar39);
                        if (uStack_2a0._4_4_ < uVar39) {
                          FUN_149802202(&local_2a8,(ulonglong)ppppcVar27 & 0xffffffff);
                        }
                        lVar22 = lVar22 * 0x80;
                        *(longlong *)(local_2a8 + lVar22) = local_330;
                        *(longlong **)(local_2a8 + lVar22 + 8) = plVar43;
                        if ((char)local_308 == '\0') {
                          LOCK();
                          *(int *)(plVar43 + 1) = (int)plVar43[1] + 1;
                          UNLOCK();
                          pppcVar24 = &local_248;
                          pcVar53 = local_2a8 + lVar22 + 0x10;
                          for (lVar45 = 0xc; lVar45 != 0; lVar45 = lVar45 + -1) {
                            *(code ***)pcVar53 = *pppcVar24;
                            pppcVar24 = pppcVar24 + 1;
                            pcVar53 = pcVar53 + 8;
                          }
                          *(int *)(local_2a8 + lVar22 + 0x70) = (int)local_348;
                          LOCK();
                          plVar51 = plVar43 + 1;
                          *(int *)plVar51 = (int)*plVar51 + -1;
                          UNLOCK();
                          if ((int)*plVar51 == 0) {
                            (**(code **)*plVar43)(plVar43);
                            LOCK();
                            piVar1 = (int *)((longlong)plVar43 + 0xc);
                            *piVar1 = *piVar1 + -1;
                            UNLOCK();
                            if (*piVar1 == 0) {
                              (**(code **)(*plVar43 + 0x10))(plVar43);
                            }
                          }
                        }
                        else {
                          pppcVar24 = &local_248;
                          pcVar53 = local_2a8 + lVar22 + 0x10;
                          for (lVar45 = 0xc; lVar45 != 0; lVar45 = lVar45 + -1) {
                            *(code ***)pcVar53 = *pppcVar24;
                            pppcVar24 = pppcVar24 + 1;
                            pcVar53 = pcVar53 + 8;
                          }
                          *(int *)(local_2a8 + lVar22 + 0x70) = (int)local_348;
                        }
                      }
                    }
                    ppcVar35 = ppcVar35 + 0x14;
                  } while (local_2f8 != ppcVar35);
                }
                param_1 = local_338;
                if ((longlong)*(int *)(ppcVar29 + 0x14) != 0) {
                  pcVar34 = ppcVar29[0x13];
                  pcVar53 = pcVar34 + (longlong)*(int *)(ppcVar29 + 0x14) * 0x38;
                  do {
                    lVar22 = *(longlong *)(pcVar34 + 0x30);
                    if (lVar22 != 0) {
                      local_258 = (code *)0x0;
                      uStack_250 = (code ****)0x0;
                      iVar21 = *(int *)(lVar22 + 0xa0);
                      if (iVar21 < 0) goto LAB_1408aaf3b;
                      if (iVar21 != 0) {
                        FUN_14481578e(&local_258);
                        if ((longlong)*(int *)(lVar22 + 0xa0) != 0) {
                          plVar51 = *(longlong **)(lVar22 + 0x98);
                          plVar43 = plVar51 + *(int *)(lVar22 + 0xa0);
                          do {
                            uVar23 = uStack_2c0;
                            uVar20 = 0xffffffff;
                            if (((pcVar48 != (code *)0x0) && (lVar22 = *plVar51, lVar22 != 0)) &&
                               (*(int *)(pcVar48 + 0x98) != *(int *)(pcVar48 + 0xc4))) {
                              uVar39 = (uint)((ulonglong)lVar22 >> 0x10);
                              uVar31 = (uint)lVar22 & 0xffff;
                              ppcVar29 = *(code ***)(pcVar48 + 0xd0);
                              if (*(code ***)(pcVar48 + 0xd0) == (code **)0x0) {
                                ppcVar29 = local_328;
                              }
                              iVar21 = *(int *)((longlong)ppcVar29 +
                                               (ulonglong)
                                               (*(int *)(pcVar48 + 0xd8) - 1U &
                                               (int)((ulonglong)lVar22 >> 0x20) +
                                               ((uint)lVar22 << 0x10 | uVar31) +
                                               (uVar39 << 0x13 | uVar39 & 0xffff) + (uVar31 >> 4)) *
                                               4);
                              if (iVar21 != -1) {
                                do {
                                  plVar4 = (longlong *)
                                           (*(longlong *)(pcVar48 + 0x90) + (longlong)iVar21 * 0x14)
                                  ;
                                  if (*plVar4 == lVar22) {
                                    if ((plVar4 != (longlong *)0x0) &&
                                       (plVar4 + 1 != (longlong *)0x0)) {
                                      uVar20 = (undefined4)plVar4[1];
                                    }
                                    break;
                                  }
                                  iVar21 = *(int *)((longlong)plVar4 + 0xc);
                                } while (iVar21 != -1);
                              }
                            }
                            iVar21 = (int)uStack_2c0;
                            uVar39 = (int)uStack_2c0 + 1;
                            uStack_2c0 = CONCAT44(uStack_2c0._4_4_,uVar39);
                            if (uStack_2c0._4_4_ < uVar39) {
                              FUN_1446f48e2(&local_2c8,uVar23 & 0xffffffff);
                            }
                            ppppcVar27 = uStack_250;
                            *(undefined4 *)(local_2c8 + (longlong)iVar21 * 4) = uVar20;
                            lVar22 = (longlong)(int)uStack_250;
                            uVar39 = (int)uStack_250 + 1;
                            uStack_250 = (code ****)CONCAT44(uStack_250._4_4_,uVar39);
                            if (uStack_250._4_4_ < uVar39) {
                              FUN_1446f48e2(&local_258,(ulonglong)ppppcVar27 & 0xffffffff);
                            }
                            *(int *)(local_258 + lVar22 * 4) = iVar21;
                            plVar51 = plVar51 + 1;
                          } while (plVar51 != plVar43);
                        }
                      }
                      pcVar57 = local_258;
                      uVar23 = uStack_2b0;
                      local_248 = *(code ***)(pcVar34 + 0x30);
                      if (local_248 != (code **)0x0) {
                        LOCK();
                        *(int *)(local_248 + 1) = *(int *)(local_248 + 1) + 1;
                        UNLOCK();
                      }
                      uStack_240 = (code ****)CONCAT44(uStack_240._4_4_,(int)local_348);
                      local_238 = (code **)local_258;
                      local_258 = (code *)0x0;
                      uVar50 = (int)uStack_250;
                      uStack_230._0_4_ = (int)uStack_250;
                      uVar20 = uStack_250._4_4_;
                      uStack_230._4_4_ = uStack_250._4_4_;
                      uStack_250 = (code ****)0x0;
                      lVar22 = (longlong)(int)uStack_2b0;
                      uVar39 = (int)uStack_2b0 + 1;
                      uStack_2b0 = CONCAT44(uStack_2b0._4_4_,uVar39);
                      if (uStack_2b0._4_4_ < uVar39) {
                        FUN_149802288(&local_2b8,uVar23 & 0xffffffff);
                      }
                      lVar22 = lVar22 * 0x20;
                      *(code ***)(local_2b8 + lVar22) = local_248;
                      uVar33 = (int)local_348;
                      if (local_248 != (code **)0x0) {
                        LOCK();
                        *(int *)(local_248 + 1) = *(int *)(local_248 + 1) + 1;
                        UNLOCK();
                        pcVar57 = (code *)local_238;
                        uVar50 = (int)uStack_230;
                        uVar33 = (int)uStack_240;
                        uVar20 = uStack_230._4_4_;
                      }
                      *(undefined4 *)(local_2b8 + lVar22 + 8) = uVar33;
                      *(code **)(local_2b8 + lVar22 + 0x10) = pcVar57;
                      local_238 = (code **)0x0;
                      *(undefined4 *)(local_2b8 + lVar22 + 0x18) = uVar50;
                      *(undefined4 *)(local_2b8 + lVar22 + 0x1c) = uVar20;
                      uStack_230 = 0;
                      FUN_1497efc3a();
                      if (local_258 != (code *)0x0) {
                        FUN_1400020a8();
                      }
                    }
                    pcVar34 = pcVar34 + 0x38;
                    param_1 = local_338;
                  } while (pcVar34 != pcVar53);
                }
              }
              pppcVar28 = pppcVar28 + 1;
            } while (pppcVar28 != local_318);
          }
        }
      }
      ppcVar29 = local_340;
      local_388 = (code **)local_310[0x10];
      local_380 = (code **)&local_2c8;
      local_390 = (code **)&local_2b8;
      local_398 = &local_2a8;
      FUN_1408ad85a(*(undefined8 *)local_310[4],local_340,param_1,&local_298);
      if (local_2c8 != (code *)0x0) {
        FUN_1400020a8();
      }
      FUN_1408ab392(local_2b8,uStack_2b0 & 0xffffffff);
      if (local_2b8 != (code *)0x0) {
        FUN_1400020a8();
      }
      FUN_1408ab43a(local_2a8,(ulonglong)uStack_2a0 & 0xffffffff);
      if (local_2a8 != (code *)0x0) {
        FUN_1400020a8();
      }
      if (local_268 != 0) {
        FUN_1400020a8();
      }
      FUN_1400bc89a(local_278,uStack_270 & 0xffffffff);
      if (local_278 != 0) {
        FUN_1400020a8();
      }
      if (local_288 != 0) {
        FUN_1400020a8();
      }
      if (local_298 != (code ***)0x0) {
        FUN_1400020a8();
      }
      pppcVar28 = local_320 + 1;
    } while (pppcVar28 != local_300);
  }
  if ((local_f0 ^ (ulonglong)auStack_3b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1408ab17c FUN_1408ab17c body=162 status=ok
// SIG undefined FUN_1408ab17c(void)

undefined8 FUN_1408ab17c(longlong *param_1,uint *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong *plVar5;
  int iVar6;
  bool bVar7;
  float fVar8;
  
  uVar1 = *param_2;
  lVar2 = *param_1;
  if ((*(int *)(lVar2 + 0x10) < 1) || (ABS(*(float *)(lVar2 + 0x1c)) <= 0.0001)) {
    fVar8 = *(float *)(lVar2 + 0x18);
  }
  else {
    fVar8 = *(float *)(lVar2 + 0x1c) *
            *(float *)(*(longlong *)(lVar2 + 8) + (longlong)(int)uVar1 * 4) +
            *(float *)(lVar2 + 0x18);
  }
  if (fVar8 < 0.1) {
    return CONCAT71((int7)((ulonglong)lVar2 >> 8),1);
  }
  plVar3 = (longlong *)param_1[1];
  if ((plVar3 != (longlong *)0x0) && ((int)plVar3[1] != *(int *)((longlong)plVar3 + 0x34))) {
    plVar5 = plVar3 + 7;
    if ((longlong *)plVar3[8] != (longlong *)0x0) {
      plVar5 = (longlong *)plVar3[8];
    }
    iVar6 = *(int *)((longlong)plVar5 + (ulonglong)((int)plVar3[9] - 1U & uVar1) * 4);
    if (iVar6 != -1) {
      do {
        bVar7 = *(uint *)(*plVar3 + (longlong)iVar6 * 0xc) == uVar1;
        uVar4 = CONCAT71((int7)(int3)((uint)iVar6 >> 8),bVar7);
        if (bVar7) {
          return uVar4;
        }
        iVar6 = *(int *)(*plVar3 + (longlong)iVar6 * 0xc + 4);
      } while (iVar6 != -1);
      return uVar4;
    }
  }
  return 0;
}



// FUNCTION 1408ab21e FUN_1408ab21e body=198 status=ok
// SIG undefined FUN_1408ab21e(void)

undefined8
FUN_1408ab21e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
             undefined8 param_5)

{
  void *_Src;
  longlong lVar1;
  undefined1 auStack_88 [32];
  void **local_68;
  undefined8 local_60;
  undefined8 local_58;
  void *local_50;
  int local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_50 = (void *)0x0;
  local_48 = *(int *)(param_4 + 1);
  lVar1 = (longlong)local_48;
  _Src = (void *)*param_4;
  if (lVar1 == 0) {
    local_44 = 0;
  }
  else {
    FUN_1446dd670(&local_50,local_48,0);
    memcpy(local_50,_Src,lVar1 * 2);
  }
  local_60 = param_5;
  local_68 = &local_50;
  local_58 = param_1;
  FUN_1408ab2e6(param_1,param_2,param_3);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1408ab2e6 FUN_1408ab2e6 body=172 status=ok
// SIG undefined FUN_1408ab2e6(void)

undefined8 *
FUN_1408ab2e6(undefined8 param_1,undefined8 *param_2,undefined8 param_3,longlong *param_4,
             longlong *param_5,int *param_6)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  void *_Src;
  
  iVar3 = FUN_144a41c6c(param_1,param_3);
  if (param_6 != (int *)0x0) {
    *param_6 = iVar3;
  }
  if (iVar3 == -1) {
    *param_2 = 0;
    iVar1 = (int)param_5[1];
    _Src = (void *)*param_5;
  }
  else {
    lVar2 = *(longlong *)(*param_4 + 0x38);
    *param_2 = 0;
    iVar1 = *(int *)(lVar2 + 8 + (longlong)iVar3 * 0x10);
    _Src = *(void **)(lVar2 + (longlong)iVar3 * 0x10);
  }
  *(int *)(param_2 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_2,iVar1,0);
    memcpy((void *)*param_2,_Src,(longlong)iVar1 * 2);
  }
  if (*param_5 != 0) {
    FUN_1400020a8();
  }
  return param_2;
}



// FUNCTION 1408ab392 FUN_1408ab392 body=40 status=ok
// SIG undefined FUN_1408ab392(void)

void FUN_1408ab392(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1497efc3a(param_1);
    param_1 = param_1 + 0x20;
  }
  return;
}



// FUNCTION 1408ab3ba FUN_1408ab3ba body=127 status=ok
// SIG undefined FUN_1408ab3ba(void)

undefined8 FUN_1408ab3ba(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong local_38 [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1400021e4(&DAT_14cc27040,local_38);
  local_48 = 0;
  FUN_1408ab21e(param_2,param_1,local_38,param_3);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1408ab43a FUN_1408ab43a body=77 status=ok
// SIG undefined FUN_1408ab43a(void)

void FUN_1408ab43a(longlong param_1,int param_2)

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
      plVar4 = plVar4 + 0x10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1408ab488 FUN_1408ab488 body=164 status=ok
// SIG undefined FUN_1408ab488(void)

undefined8 * FUN_1408ab488(undefined8 *param_1,longlong param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1400021e4(&DAT_14cc27040,local_30);
  iVar2 = FUN_144a41c6c(param_2,local_30);
  if (iVar2 == -1) {
    *param_1 = 0x3eb333333eb33333;
  }
  else {
    uVar1 = *(undefined4 *)(*(longlong *)(param_2 + 0x28) + (longlong)iVar2 * 0xc);
    *(undefined4 *)param_1 = *(undefined4 *)(*(longlong *)(param_2 + 0x18) + (longlong)iVar2 * 0xc);
    *(undefined4 *)((longlong)param_1 + 4) = uVar1;
  }
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1408ab52e FUN_1408ab52e body=189 status=ok
// SIG undefined FUN_1408ab52e(void)

int FUN_1408ab52e(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
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
    iVar1 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar4 = *param_1;
      iVar2 = (int)param_3[1];
LAB_1408ab56c:
      lVar10 = (longlong)iVar1 * 0x20;
      iVar3 = *(int *)(lVar4 + 8 + lVar10);
      if (iVar3 == iVar2) {
        if (iVar2 < 2) {
          return iVar1;
        }
        lVar7 = 0;
        do {
          uVar8 = *(ushort *)(*(longlong *)(lVar4 + lVar10) + lVar7);
          uVar9 = (ulonglong)uVar8;
          uVar6 = *(ushort *)(*param_3 + lVar7);
          if (uVar8 == uVar6) {
            if (uVar8 == 0) {
              return iVar1;
            }
          }
          else {
            if (0x7f < (uVar6 | uVar8)) goto LAB_1408ab5e3;
            uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
            uVar11 = (ulonglong)uVar6;
            uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
            if ((&DAT_149e05da0)[uVar9] != (&DAT_149e05da0)[uVar11]) goto LAB_1408ab5e3;
          }
          lVar7 = lVar7 + 2;
        } while( true );
      }
      if (iVar3 + iVar2 == 1) {
        return iVar1;
      }
      goto LAB_1408ab586;
    }
  }
  return -1;
LAB_1408ab5e3:
  if (uVar8 == uVar6) {
    return iVar1;
  }
LAB_1408ab586:
  iVar1 = *(int *)(lVar4 + 0x18 + lVar10);
  if (iVar1 == -1) {
    return -1;
  }
  goto LAB_1408ab56c;
}



// FUNCTION 1408ab5ec FUN_1408ab5ec body=246 status=ok
// SIG undefined FUN_1408ab5ec(void)

void FUN_1408ab5ec(undefined8 *param_1,undefined8 *param_2)

{
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
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  *(undefined4 *)((longlong)param_1 + 0x144) = *(undefined4 *)((longlong)param_2 + 0x144);
  return;
}



// FUNCTION 1408ab6e2 FUN_1408ab6e2 body=263 status=ok
// SIG undefined FUN_1408ab6e2(void)

int FUN_1408ab6e2(longlong param_1,int param_2,uint param_3,undefined4 param_4)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  
  if (param_2 == 0) {
    iVar5 = -1;
  }
  else {
    iVar5 = *(int *)(param_1 + 0x38);
    iVar6 = iVar5 + param_2;
    *(int *)(param_1 + 0x38) = iVar6;
    iVar1 = *(int *)(param_1 + 0x30);
    if ((longlong)iVar1 != 0) {
      lVar3 = *(longlong *)(param_1 + 0x28);
      lVar4 = 0;
      do {
        plVar2 = *(longlong **)(lVar3 + lVar4);
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 8))(plVar2,iVar6);
        }
        lVar4 = lVar4 + 8;
      } while ((longlong)iVar1 * 8 != lVar4);
      iVar6 = *(int *)(param_1 + 0x38);
    }
    lVar4 = (longlong)iVar5;
    lVar3 = lVar4;
    if (iVar5 < iVar6) {
      do {
        *(uint *)(*(longlong *)(param_1 + 0x208) + lVar3 * 4) = param_3;
        lVar3 = lVar3 + 1;
        iVar6 = *(int *)(param_1 + 0x38);
      } while (lVar3 < iVar6);
    }
    if ((*(char *)(param_1 + 0x465) == '\x01') && (iVar5 < iVar6)) {
      do {
        *(undefined4 *)(*(longlong *)(param_1 + 0x310) + lVar4 * 4) = 0;
        lVar4 = lVar4 + 1;
      } while (lVar4 < *(int *)(param_1 + 0x38));
    }
    if (*(uint *)(param_1 + 0x18) <= param_3) {
      FUN_140630782(param_1,(param_3 - *(uint *)(param_1 + 0x18)) + 1);
    }
    FUN_1408ab7ea(param_1 + 0xd8,param_2,param_4);
  }
  return iVar5;
}



// FUNCTION 1408ab7ea FUN_1408ab7ea body=98 status=ok
// SIG undefined FUN_1408ab7ea(void)

int FUN_1408ab7ea(longlong param_1,int param_2,char param_3)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  plVar1 = (longlong *)(param_1 + 8);
  iVar2 = *(int *)(param_1 + 0x10);
  iVar4 = 0;
  if ((longlong)iVar2 != 0) {
    iVar3 = *(int *)(*plVar1 + (longlong)(iVar2 + -1) * 4);
    iVar4 = -iVar3;
    if (iVar4 < 0) {
      iVar4 = iVar3;
    }
  }
  if (param_2 != 0) {
    iVar3 = -(param_2 + iVar4);
    if (param_3 != '\0') {
      iVar3 = param_2 + iVar4;
    }
    *(uint *)(param_1 + 0x10) = iVar2 + 1U;
    if (*(uint *)(param_1 + 0x14) < iVar2 + 1U) {
      FUN_1446f48e2(plVar1,iVar2);
    }
    *(int *)(*plVar1 + (longlong)iVar2 * 4) = iVar3;
  }
  return iVar4;
}



// FUNCTION 1408ab84c FUN_1408ab84c body=255 status=ok
// SIG undefined FUN_1408ab84c(void)

void FUN_1408ab84c(longlong param_1,int param_2)

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



// FUNCTION 1408ab94c FUN_1408ab94c body=369 status=ok
// SIG undefined FUN_1408ab94c(void)

void FUN_1408ab94c(longlong param_1,int param_2)

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
  uVar5 = lVar4 * 0x168;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1408ab9d4;
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
LAB_1408ab9d4:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x168)) {
    uVar7 = uVar5 / 0x168 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x168,8);
  return;
}



// FUNCTION 1408ababe FUN_1408ababe body=448 status=ok
// SIG undefined FUN_1408ababe(void)

float FUN_1408ababe(longlong param_1,int param_2,int param_3,longlong *param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  lVar1 = *(longlong *)(param_1 + 0x70);
  if (0 < param_3) {
    lVar3 = (longlong)param_2;
    do {
      *(undefined4 *)(*(longlong *)(lVar1 + 0x98) + lVar3 * 4) = 0;
      lVar3 = lVar3 + 1;
    } while (lVar3 < param_3 + param_2);
  }
  lVar3 = param_4[1];
  if ((longlong)(int)lVar3 == 0) {
    fVar8 = 0.0;
  }
  else {
    lVar2 = *param_4;
    fVar8 = 0.0;
    lVar4 = 0;
    do {
      lVar5 = (longlong)*(int *)(lVar2 + 8 + lVar4);
      lVar6 = (longlong)*(int *)(lVar2 + lVar4);
      lVar7 = *(longlong *)(lVar1 + 0x48);
      fVar14 = *(float *)(lVar7 + 8 + lVar6 * 0xc);
      fVar9 = *(float *)(lVar7 + 8 + lVar5 * 0xc) - fVar14;
      fVar10 = *(float *)(lVar7 + lVar6 * 0xc);
      fVar15 = *(float *)(lVar7 + 4 + lVar6 * 0xc);
      fVar12 = *(float *)(lVar7 + 4 + lVar5 * 0xc) - fVar15;
      fVar13 = *(float *)(lVar7 + lVar5 * 0xc) - fVar10;
      lVar5 = (longlong)*(int *)(lVar2 + 4 + lVar4);
      fVar14 = *(float *)(lVar7 + 8 + lVar5 * 0xc) - fVar14;
      fVar15 = *(float *)(lVar7 + 4 + lVar5 * 0xc) - fVar15;
      fVar10 = *(float *)(lVar7 + lVar5 * 0xc) - fVar10;
      fVar11 = fVar10 * fVar12 - fVar13 * fVar15;
      fVar10 = fVar14 * fVar13 - fVar9 * fVar10;
      fVar14 = fVar15 * fVar9 - fVar14 * fVar12;
      fVar14 = SQRT(fVar11 * fVar11 + fVar14 * fVar14 + fVar10 * fVar10) * 0.5;
      fVar8 = fVar8 + fVar14;
      fVar14 = fVar14 / 3.0;
      *(float *)(*(longlong *)(lVar1 + 0x98) + lVar6 * 4) =
           *(float *)(*(longlong *)(lVar1 + 0x98) + lVar6 * 4) + fVar14;
      lVar7 = (longlong)*(int *)(lVar2 + 4 + lVar4);
      *(float *)(*(longlong *)(lVar1 + 0x98) + lVar7 * 4) =
           *(float *)(*(longlong *)(lVar1 + 0x98) + lVar7 * 4) + fVar14;
      lVar7 = (longlong)*(int *)(lVar2 + 8 + lVar4);
      *(float *)(*(longlong *)(lVar1 + 0x98) + lVar7 * 4) =
           fVar14 + *(float *)(*(longlong *)(lVar1 + 0x98) + lVar7 * 4);
      lVar4 = lVar4 + 0xc;
    } while ((longlong)(int)lVar3 * 0xc != lVar4);
  }
  return fVar8;
}



// FUNCTION 1408abc7e FUN_1408abc7e body=353 status=ok
// SIG undefined FUN_1408abc7e(void)

void FUN_1408abc7e(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1408abd03;
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
LAB_1408abd03:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,4);
  return;
}



// FUNCTION 1408abde0 FUN_1408abde0 body=814 status=ok
// SIG undefined FUN_1408abde0(void)

void FUN_1408abde0(int *param_1,ulonglong param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  uint uVar12;
  int *piVar13;
  int iVar14;
  longlong lVar15;
  undefined8 *puVar16;
  undefined1 auStack_b8 [32];
  longlong *local_98;
  undefined4 local_84;
  longlong local_80;
  ulonglong local_78;
  longlong local_70;
  longlong *local_68;
  longlong local_60;
  undefined8 *local_58 [2];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_1[0x108] != param_1[0x113]) {
    uVar12 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar12 = (uVar12 >> 0xd ^ uVar12) * -0x3d4d51cb;
    piVar13 = param_1 + 0x114;
    if (*(int **)(param_1 + 0x116) != (int *)0x0) {
      piVar13 = *(int **)(param_1 + 0x116);
    }
    iVar14 = piVar13[param_1[0x118] - 1U & (uVar12 >> 0x10 ^ uVar12)];
    if (iVar14 != -1) {
      do {
        lVar15 = *(longlong *)(param_1 + 0x106) + (longlong)iVar14 * 0x168;
        if (*(ulonglong *)(*(longlong *)(param_1 + 0x106) + (longlong)iVar14 * 0x168) == param_2)
        break;
        iVar14 = *(int *)(lVar15 + 0x160);
        lVar15 = 0;
      } while (iVar14 != -1);
      goto LAB_1408abe8b;
    }
  }
  lVar15 = 0;
LAB_1408abe8b:
  uVar1 = *(undefined4 *)(lVar15 + 0xc);
  local_60 = (longlong)*param_1;
  FUN_1408ac110(param_2,local_58,uVar1);
  puVar16 = local_58[0];
  FUN_1402221ea(param_2,local_58,uVar1);
  puVar5 = local_58[0];
  FUN_1408ac1ca(param_2,local_58,uVar1);
  puVar6 = local_58[0];
  local_98 = (longlong *)(param_2 + 0x128);
  lVar15 = param_2 + 0x70;
  local_80 = param_2 + 0x68;
  local_84 = uVar1;
  FUN_144a41dda(local_58,local_80,lVar15,uVar1);
  puVar7 = local_58[0];
  local_98 = (longlong *)(param_2 + 0x170);
  local_78 = param_2;
  FUN_144a41dda(local_58,local_80,lVar15,uVar1);
  puVar8 = local_58[0];
  lVar3 = local_80;
  local_98 = (longlong *)(param_2 + 0x110);
  local_70 = lVar15;
  FUN_144a41dda(local_58,local_80,lVar15,local_84);
  puVar9 = local_58[0];
  local_98 = (longlong *)(local_78 + 0x140);
  FUN_144a41dda(local_58,lVar3,lVar15,local_84);
  puVar10 = local_58[0];
  uVar4 = local_78;
  local_98 = (longlong *)(local_78 + 0x1a0);
  local_68 = local_98;
  FUN_144a41dda(local_58,local_80,local_70,local_84);
  local_98 = (longlong *)(uVar4 + 0x158);
  FUN_144a41dda(local_58,local_80,local_70,local_84);
  puVar11 = local_58[0];
  local_98 = (longlong *)(local_78 + 0x188);
  FUN_144a41dda(local_58,local_80,local_70,local_84);
  if (0 < local_60) {
    lVar15 = 0;
    do {
      *(undefined4 *)((longlong)puVar10 + lVar15 + 8) =
           *(undefined4 *)((longlong)puVar7 + lVar15 + 8);
      *(undefined8 *)((longlong)puVar10 + lVar15) = *(undefined8 *)((longlong)puVar7 + lVar15);
      uVar2 = *(undefined8 *)((longlong)puVar7 + lVar15);
      uVar1 = *(undefined4 *)((longlong)puVar7 + lVar15 + 8);
      *(undefined4 *)((longlong)puVar9 + lVar15 + 8) = uVar1;
      *(undefined8 *)((longlong)puVar9 + lVar15) = uVar2;
      *(undefined4 *)((longlong)puVar5 + lVar15 + 8) = uVar1;
      *(undefined8 *)((longlong)puVar5 + lVar15) = uVar2;
      uVar2 = *(undefined8 *)((longlong)puVar9 + lVar15);
      *(undefined4 *)(puVar16 + 1) = *(undefined4 *)((longlong)puVar9 + lVar15 + 8);
      *puVar16 = uVar2;
      *(undefined4 *)((longlong)local_58[0] + lVar15 + 8) =
           *(undefined4 *)((longlong)puVar8 + lVar15 + 8);
      *(undefined8 *)((longlong)local_58[0] + lVar15) = *(undefined8 *)((longlong)puVar8 + lVar15);
      uVar2 = *(undefined8 *)((longlong)puVar8 + lVar15);
      *(undefined4 *)((longlong)puVar11 + lVar15 + 8) =
           *(undefined4 *)((longlong)puVar8 + lVar15 + 8);
      *(undefined8 *)((longlong)puVar11 + lVar15) = uVar2;
      lVar3 = *local_68;
      *(undefined8 *)(lVar3 + lVar15) = 0;
      *(undefined4 *)(lVar3 + 8 + lVar15) = 0;
      *(undefined4 *)((longlong)puVar6 + lVar15 + 8) = 0;
      *(undefined8 *)((longlong)puVar6 + lVar15) = 0;
      lVar15 = lVar15 + 0xc;
      puVar16 = puVar16 + 2;
    } while (local_60 * 0xc != lVar15);
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1408ac110 FUN_1408ac110 body=185 status=ok
// SIG undefined FUN_1408ac110(void)

void FUN_1408ac110(longlong param_1,longlong *param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  uint uVar5;
  longlong *plVar6;
  longlong lVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  
  if (*(longlong *)(param_1 + 0x68) == 0) {
    lVar3 = *(longlong *)(param_1 + 0x70);
    uVar13 = *(uint *)(lVar3 + 0xe8);
    uVar12 = 0;
    if (0 < (int)uVar13) {
      uVar5 = -param_3;
      if ((int)-param_3 < 0) {
        uVar5 = param_3;
      }
      uVar10 = (ulonglong)uVar13;
      do {
        uVar10 = uVar10 >> 1;
        uVar11 = (uint)uVar10 + (int)uVar12;
        uVar1 = *(uint *)(*(longlong *)(lVar3 + 0xe0) + (ulonglong)uVar11 * 4);
        uVar9 = -uVar1;
        if ((int)uVar9 < 0) {
          uVar9 = uVar1;
        }
        if (uVar9 <= uVar5) {
          uVar12 = (ulonglong)(uVar11 + (uVar13 & 1));
        }
        bVar4 = 1 < uVar13;
        uVar13 = (uint)uVar10;
      } while (bVar4);
    }
    plVar6 = (longlong *)(lVar3 + 200);
    iVar2 = *(int *)(*(longlong *)(lVar3 + 0xe0) + uVar12 * 4);
    iVar8 = -iVar2;
    if (iVar8 < 0) {
      iVar8 = iVar2;
    }
    iVar8 = iVar8 - param_3;
  }
  else {
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x68) + 0x1f8);
    lVar7 = (longlong)(int)param_3;
    plVar6 = (longlong *)(*(longlong *)(lVar3 + 8 + lVar7 * 0x18) + 0xa8);
    param_3 = *(uint *)(lVar3 + 0x10 + lVar7 * 0x18);
    iVar8 = *(int *)(lVar3 + 0x14 + lVar7 * 0x18);
  }
  *param_2 = (longlong)(int)param_3 * 0x10 + *plVar6;
  *(int *)(param_2 + 1) = iVar8;
  return;
}



// FUNCTION 1408ac1ca FUN_1408ac1ca body=185 status=ok
// SIG undefined FUN_1408ac1ca(void)

void FUN_1408ac1ca(longlong param_1,longlong *param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  uint uVar5;
  longlong *plVar6;
  longlong lVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  
  if (*(longlong *)(param_1 + 0x68) == 0) {
    lVar3 = *(longlong *)(param_1 + 0x70);
    uVar13 = *(uint *)(lVar3 + 0xe8);
    uVar12 = 0;
    if (0 < (int)uVar13) {
      uVar5 = -param_3;
      if ((int)-param_3 < 0) {
        uVar5 = param_3;
      }
      uVar10 = (ulonglong)uVar13;
      do {
        uVar10 = uVar10 >> 1;
        uVar11 = (uint)uVar10 + (int)uVar12;
        uVar1 = *(uint *)(*(longlong *)(lVar3 + 0xe0) + (ulonglong)uVar11 * 4);
        uVar9 = -uVar1;
        if ((int)uVar9 < 0) {
          uVar9 = uVar1;
        }
        if (uVar9 <= uVar5) {
          uVar12 = (ulonglong)(uVar11 + (uVar13 & 1));
        }
        bVar4 = 1 < uVar13;
        uVar13 = (uint)uVar10;
      } while (bVar4);
    }
    plVar6 = (longlong *)(lVar3 + 0x68);
    iVar2 = *(int *)(*(longlong *)(lVar3 + 0xe0) + uVar12 * 4);
    iVar8 = -iVar2;
    if (iVar8 < 0) {
      iVar8 = iVar2;
    }
    iVar8 = iVar8 - param_3;
  }
  else {
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x68) + 0x1f8);
    lVar7 = (longlong)(int)param_3;
    plVar6 = (longlong *)(*(longlong *)(lVar3 + 8 + lVar7 * 0x18) + 0x48);
    iVar8 = *(int *)(lVar3 + 0x14 + lVar7 * 0x18);
    param_3 = *(uint *)(lVar3 + 0x10 + lVar7 * 0x18);
  }
  *param_2 = (longlong)(int)param_3 * 0xc + *plVar6;
  *(int *)(param_2 + 1) = iVar8;
  return;
}



// FUNCTION 1408ac284 FUN_1408ac284 body=837 status=ok
// SIG undefined FUN_1408ac284(void)

void FUN_1408ac284(longlong param_1,undefined8 param_2,int param_3,int param_4,float *param_5,
                  longlong *param_6)

{
  ulonglong uVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint *puVar11;
  ulonglong uVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  ulonglong uVar17;
  float fVar18;
  undefined1 auStack_e8 [32];
  longlong local_c8;
  ulonglong uStack_c0;
  uint local_b8 [4];
  uint *local_a8;
  int local_a0;
  uint local_9c;
  undefined4 uStack_98;
  undefined4 local_94;
  longlong local_88;
  undefined4 local_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  iVar4 = (int)param_6[1];
  uVar17 = 0;
  lVar16 = 0;
  if (iVar4 == param_4) {
    lVar16 = *param_6;
  }
  fVar2 = *param_5;
  fVar3 = param_5[1];
  local_a8 = (uint *)0x0;
  local_a0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_9c = 0x80;
  uStack_98 = 0xffffffff;
  local_94 = 0;
  local_88 = 0;
  local_80 = 0;
  FUN_1400baa38(param_2);
  lVar5 = *(longlong *)(param_1 + 0x70);
  if (local_a0 == 0) {
    uVar12 = 1;
    iVar6 = 0;
    iVar13 = 0;
  }
  else {
    puVar11 = local_a8;
    if (local_a8 == (uint *)0x0) {
      puVar11 = local_b8;
    }
    uVar7 = *puVar11;
    if (uVar7 == 0) {
      iVar13 = local_a0 + 0x1e;
      if (-1 < local_a0 + -1) {
        iVar13 = local_a0 + -1;
      }
      uVar17 = 0;
      uVar12 = (ulonglong)(uint)(iVar13 >> 5);
      if (iVar13 >> 5 < 1) {
        uVar12 = uVar17;
      }
      iVar6 = 0;
      do {
        if (uVar12 == uVar17) goto LAB_1408ac3be;
        iVar6 = iVar6 + 0x20;
        uVar7 = puVar11[uVar17 + 1];
        uVar17 = uVar17 + 1;
      } while (uVar7 == 0);
    }
    else {
      uVar17 = 0;
      iVar6 = 0;
    }
    uVar12 = (ulonglong)(-uVar7 & uVar7);
    uVar1 = uVar12 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    iVar13 = (iVar6 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
    if (local_a0 <= iVar13) {
      iVar13 = local_a0;
    }
  }
  if (iVar13 != local_a0) {
    uVar7 = 0xffffffff;
    do {
      lVar14 = (longlong)*(int *)(local_c8 + (longlong)iVar13 * 0xc);
      fVar18 = fVar2;
      if (0.0001 < ABS(fVar3 - fVar2) && (0 < iVar4 && iVar4 == param_4)) {
        fVar18 = *(float *)(lVar16 + (lVar14 - param_3) * 4) * (fVar3 - fVar2) + fVar2;
      }
      lVar15 = *(longlong *)(lVar5 + 0x98);
      *(float *)(lVar15 + lVar14 * 4) = fVar18 * *(float *)(lVar15 + lVar14 * 4);
      uVar7 = uVar7 & ~(uint)uVar12;
      puVar11 = local_a8;
      if (local_a8 == (uint *)0x0) {
        puVar11 = local_b8;
      }
      iVar13 = (int)uVar17;
      lVar14 = (longlong)iVar13;
      uVar8 = puVar11[lVar14] & uVar7;
      if (uVar8 == 0) {
        iVar9 = local_a0 + 0x1e;
        if (-1 < local_a0 + -1) {
          iVar9 = local_a0 + -1;
        }
        iVar9 = iVar9 >> 5;
        iVar6 = iVar6 + 0x20;
        iVar10 = iVar9;
        if (iVar9 < iVar13) {
          iVar10 = iVar13;
        }
        if (iVar13 < iVar9) {
          lVar15 = 0;
          do {
            uVar8 = puVar11[lVar14 + lVar15 + 1];
            if (uVar8 != 0) {
              uVar17 = (ulonglong)(iVar13 + (int)lVar15 + 1);
              uVar7 = 0xffffffff;
              goto LAB_1408ac553;
            }
            iVar6 = iVar6 + 0x20;
            lVar15 = lVar15 + 1;
          } while (iVar10 - lVar14 != lVar15);
          uVar7 = 0xffffffff;
          iVar13 = iVar10;
        }
        uVar17 = (ulonglong)(iVar13 + 1);
        iVar13 = local_a0;
      }
      else {
LAB_1408ac553:
        uVar12 = (ulonglong)(-uVar8 & uVar8);
        uVar1 = uVar12 * 2 + 1;
        lVar14 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        iVar13 = (iVar6 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
        if (local_a0 <= iVar13) {
          iVar13 = local_a0;
        }
      }
    } while (iVar13 != local_a0);
  }
LAB_1408ac3be:
  local_80 = 0;
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  uVar17 = uStack_c0 >> 0x20;
  uStack_c0 = uStack_c0 & 0xffffffff00000000;
  if ((int)uVar17 != 0) {
    FUN_1447a08a2(&local_c8,0);
  }
  uStack_98 = 0xffffffff;
  local_94 = 0;
  local_a0 = 0;
  if (0x80 < local_9c) {
    local_9c = 0x80;
    FUN_1446efbd8(local_b8,0);
  }
  if (local_a8 != (uint *)0x0) {
    FUN_1400020a8();
  }
  if (local_c8 != 0) {
    FUN_1400020a8();
  }
  if ((local_70 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1408ac5ca FUN_1408ac5ca body=1404 status=ok
// SIG undefined FUN_1408ac5ca(void)

uint * FUN_1408ac5ca(longlong *param_1,uint *param_2,undefined8 *param_3)

{
  uint *puVar1;
  uint *puVar2;
  undefined8 *puVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong uVar7;
  byte bVar8;
  int iVar9;
  uint *puVar10;
  longlong *plVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  longlong *plVar15;
  ulonglong uVar16;
  uint uVar17;
  longlong lVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  ulonglong uVar22;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    uVar17 = *(uint *)(param_1 + 1);
    *(uint *)(param_1 + 1) = uVar17 + 1;
    if (*(uint *)((longlong)param_1 + 0xc) == uVar17) {
      FUN_14482b872(param_1,uVar17);
    }
    iVar21 = (int)param_1[5];
    if (iVar21 == 0) {
      iVar4 = -1;
    }
    else {
      iVar4 = iVar21 + 0x1e;
      if (-1 < iVar21 + -1) {
        iVar4 = iVar21 + -1;
      }
      iVar4 = iVar4 >> 5;
    }
    plVar11 = param_1 + 2;
    iVar9 = iVar21 + 1;
    iVar13 = iVar21 + 0x1f;
    if (-1 < iVar21) {
      iVar13 = iVar21;
    }
    if (iVar13 >> 5 == iVar4) {
      *(int *)(param_1 + 5) = iVar9;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar21) {
        if (iVar21 + 0x20U < 0xa0) {
          iVar9 = 0x80;
          iVar4 = iVar21;
        }
        else {
          uVar5 = iVar21 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar19 = 4;
            if (4 < uVar5) {
              uVar19 = uVar5;
            }
          }
          else {
            uVar19 = (uVar5 * 3 >> 3) + uVar5 + 0x10;
          }
          uVar7 = FUN_144a3809e(uVar19 << 2,0);
          iVar4 = (int)(uVar7 >> 2);
          iVar9 = -0x20;
          if ((int)uVar5 <= iVar4) {
            iVar9 = iVar4 << 5;
          }
          iVar4 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar9;
        FUN_1446efbd8(plVar11,iVar4);
        iVar9 = (int)param_1[5] + 1;
      }
      iVar4 = iVar9 + 0x1f;
      if (-1 < iVar9) {
        iVar4 = iVar9;
      }
      *(int *)(param_1 + 5) = iVar9;
      if (iVar9 % 0x20 != 0) {
        plVar15 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar15 = plVar11;
        }
        bVar8 = -(char)(iVar9 % 0x20);
        *(uint *)((longlong)plVar15 + (longlong)(iVar4 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar15 + (longlong)(iVar4 >> 5) * 4) << (bVar8 & 0x1f)) >>
             (bVar8 & 0x1f);
      }
    }
    lVar6 = (longlong)(int)uVar17;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar11 = (longlong *)param_1[4];
    }
    bVar8 = (byte)iVar21 & 0x1f;
    puVar1 = (uint *)((longlong)plVar11 + (longlong)(iVar13 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar8 | 0xfffffffeU >> 0x20 - bVar8);
  }
  else {
    uVar17 = *(uint *)(param_1 + 6);
    lVar6 = (longlong)(int)uVar17;
    iVar21 = *(int *)(*param_1 + 4 + lVar6 * 0x18);
    *(int *)(param_1 + 6) = iVar21;
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar21 * 0x18) = 0xffffffff;
    }
  }
  puVar1 = (uint *)(param_1 + 2);
  puVar10 = (uint *)param_1[4];
  if ((uint *)param_1[4] == (uint *)0x0) {
    puVar10 = puVar1;
  }
  uVar5 = uVar17 + 0x1f;
  if (-1 < (int)uVar17) {
    uVar5 = uVar17;
  }
  puVar10[(int)uVar5 >> 5] = puVar10[(int)uVar5 >> 5] | 1 << ((byte)uVar17 & 0x1f);
  uVar19 = 1;
  puVar10 = (uint *)(*param_1 + lVar6 * 0x18);
  puVar3 = (undefined8 *)param_3[1];
  *puVar10 = *(uint *)*param_3;
  *(undefined8 *)(puVar10 + 2) = *puVar3;
  *puVar3 = 0;
  puVar10[4] = 0xffffffff;
  uVar5 = *puVar10;
  uVar12 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (1 < uVar12) {
    plVar11 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar11 = (longlong *)param_1[8];
    }
    uVar20 = *(uint *)((longlong)plVar11 + (ulonglong)((int)param_1[9] - 1U & uVar5) * 4);
    if (uVar20 != 0xffffffff) {
      do {
        puVar2 = (uint *)(*param_1 + (longlong)(int)uVar20 * 0x18);
        if (*puVar2 == uVar5) {
          lVar6 = *(longlong *)(puVar2 + 2);
          if (lVar6 != 0) {
            FUN_14062c8d2(lVar6);
            FUN_1400020a8(lVar6);
          }
          uVar5 = puVar10[1];
          uVar19 = puVar10[2];
          uVar12 = puVar10[3];
          *puVar2 = *puVar10;
          puVar2[1] = uVar5;
          puVar2[2] = uVar19;
          puVar2[3] = uVar12;
          FUN_1498031e2(param_1,uVar17);
          uVar17 = uVar20;
          goto LAB_1408ac960;
        }
        uVar20 = puVar2[4];
      } while (uVar20 != 0xffffffff);
    }
  }
  if (3 < uVar12) {
    uVar7 = (ulonglong)(uVar12 & 0xfffffffe) + 0xf;
    lVar6 = 0x3f;
    if (uVar7 != 0) {
      for (; uVar7 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    uVar19 = 1 << ((byte)lVar6 & 0x1f);
  }
  if (((int)uVar12 < 1) || ((int)uVar19 <= (int)param_1[9])) {
    uVar5 = (int)param_1[9] - 1U & uVar5;
    puVar10[5] = uVar5;
    plVar11 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar11 = param_1 + 7;
    }
    puVar10[4] = *(uint *)((longlong)plVar11 +
                          ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar5) * 4);
    plVar11 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar11 = param_1 + 7;
    }
    *(uint *)((longlong)plVar11 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar5) * 4) =
         uVar17;
    goto LAB_1408ac960;
  }
  *(uint *)(param_1 + 9) = uVar19;
  plVar11 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar11,0,0,4);
    uVar19 = *(uint *)(param_1 + 9);
  }
  plVar15 = param_1 + 7;
  if (uVar19 == 1) {
    if (*plVar11 != 0) {
      FUN_1446efa72(plVar11,0,0,4);
    }
LAB_1408ac769:
    uVar5 = 0;
    do {
      plVar11 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar11 = plVar15;
      }
      *(undefined4 *)((longlong)plVar11 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar5) * 4) =
           0xffffffff;
      uVar5 = uVar5 + 1;
    } while (uVar19 != uVar5);
  }
  else {
    if (uVar19 == 0) goto LAB_1408ac960;
    FUN_1446efa72(plVar11,0,uVar19,4);
    if (0 < (int)uVar19) goto LAB_1408ac769;
  }
  iVar21 = (int)param_1[5];
  if (iVar21 == 0) {
    uVar7 = 0;
    uVar16 = 1;
    iVar4 = 0;
    iVar9 = 0;
  }
  else {
    puVar10 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar10 = puVar1;
    }
    uVar5 = *puVar10;
    if (uVar5 == 0) {
      iVar4 = iVar21 + 0x1e;
      if (-1 < iVar21 + -1) {
        iVar4 = iVar21 + -1;
      }
      uVar7 = 0;
      uVar16 = (ulonglong)(uint)(iVar4 >> 5);
      if (iVar4 >> 5 < 1) {
        uVar16 = uVar7;
      }
      iVar9 = 0;
      do {
        if (uVar16 == uVar7) goto LAB_1408ac960;
        iVar9 = iVar9 + 0x20;
        uVar5 = puVar10[uVar7 + 1];
        uVar7 = uVar7 + 1;
      } while (uVar5 == 0);
    }
    else {
      uVar7 = 0;
      iVar9 = 0;
    }
    uVar16 = (ulonglong)(-uVar5 & uVar5);
    uVar22 = uVar16 * 2 + 1;
    lVar6 = 0x3f;
    if (uVar22 != 0) {
      for (; uVar22 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    iVar4 = (iVar9 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
    if (iVar21 <= iVar4) {
      iVar4 = iVar21;
    }
  }
  if (iVar4 < iVar21) {
    uVar5 = 0xffffffff;
    do {
      lVar6 = *param_1;
      lVar18 = (longlong)iVar4;
      uVar22 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar6 + lVar18 * 0x18);
      iVar21 = (int)uVar22;
      *(int *)(lVar6 + 0x14 + lVar18 * 0x18) = iVar21;
      plVar11 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar11 = plVar15;
      }
      *(undefined4 *)(lVar6 + 0x10 + lVar18 * 0x18) =
           *(undefined4 *)((longlong)plVar11 + ((longlong)(int)param_1[9] - 1U & uVar22) * 4);
      plVar11 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar11 = plVar15;
      }
      *(int *)((longlong)plVar11 + ((longlong)iVar21 & (longlong)(int)param_1[9] - 1U) * 4) = iVar4;
      uVar5 = ~(uint)uVar16 & uVar5;
      puVar10 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar10 = puVar1;
      }
      iVar21 = (int)param_1[5];
      iVar4 = (int)uVar7;
      lVar6 = (longlong)iVar4;
      uVar19 = puVar10[lVar6] & uVar5;
      if (uVar19 == 0) {
        iVar13 = iVar21 + 0x1e;
        if (-1 < iVar21 + -1) {
          iVar13 = iVar21 + -1;
        }
        iVar13 = iVar13 >> 5;
        iVar14 = iVar13;
        if (iVar13 < iVar4) {
          iVar14 = iVar4;
        }
        if (iVar13 <= iVar4) break;
        lVar18 = 0;
        while( true ) {
          iVar9 = iVar9 + 0x20;
          uVar19 = puVar10[lVar6 + lVar18 + 1];
          if (uVar19 != 0) break;
          lVar18 = lVar18 + 1;
          if (iVar14 - lVar6 == lVar18) goto LAB_1408ac960;
        }
        uVar7 = (ulonglong)(iVar4 + (int)lVar18 + 1);
        uVar5 = 0xffffffff;
      }
      uVar16 = (ulonglong)(-uVar19 & uVar19);
      uVar22 = uVar16 * 2 + 1;
      lVar6 = 0x3f;
      if (uVar22 != 0) {
        for (; uVar22 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar4 = (iVar9 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
    } while (iVar4 < iVar21);
  }
LAB_1408ac960:
  *param_2 = uVar17;
  return param_2;
}



// FUNCTION 1408acb46 FUN_1408acb46 body=1658 status=ok
// SIG undefined FUN_1408acb46(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1408acb46(longlong *param_1,longlong param_2,int param_3,int param_4,undefined4 param_5,
                  undefined4 param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  double dVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  char cVar16;
  undefined4 uVar17;
  double *pdVar18;
  undefined8 *puVar19;
  longlong lVar20;
  int iVar21;
  longlong lVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined1 auStack_168 [32];
  longlong local_148;
  longlong local_140;
  undefined8 local_138;
  longlong *local_130;
  undefined4 local_128;
  int local_120;
  int local_11c;
  longlong local_118;
  longlong local_110;
  longlong local_108;
  longlong local_100;
  longlong local_f8 [2];
  longlong local_e8 [2];
  undefined8 local_d8 [2];
  longlong local_c8 [2];
  longlong local_b8;
  int local_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  float local_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_168;
  cVar16 = (**(code **)(*param_1 + 0x20))(param_1,param_4);
  if (cVar16 != '\0') {
    dVar11 = 1.0 / *(double *)(param_2 + 0x298);
    local_148 = param_2 + 0x128;
    lVar20 = param_2 + 0x70;
    lVar22 = param_2 + 0x68;
    FUN_144a41dda(local_e8,lVar22,lVar20,param_6);
    local_148 = param_2 + 0x170;
    local_110 = lVar22;
    local_100 = lVar20;
    FUN_144a41dda(local_f8,lVar22,lVar20,param_6);
    pdVar18 = (double *)(**(code **)(*param_1 + 0xb8))(param_1);
    uStack_a0 = CONCAT44((float)pdVar18[3],(float)pdVar18[2]);
    local_a8 = CONCAT44((float)pdVar18[1],(float)*pdVar18);
    fStack_80 = (float)(pdVar18[10] * dVar11);
    fStack_7c = (float)(pdVar18[0xb] * 0.0);
    local_88 = (float)(pdVar18[8] * dVar11);
    fStack_84 = (float)(pdVar18[9] * dVar11);
    fStack_90 = (float)(((double)(*(ulonglong *)(param_2 + 0x2c8) ^ DAT_149931e80) + pdVar18[6]) *
                       dVar11);
    fStack_8c = (float)((pdVar18[7] + 0.0) * 0.0);
    local_98 = (float)((pdVar18[4] - *(double *)(param_2 + 0x2b8)) * dVar11);
    fStack_94 = (float)((pdVar18[5] - *(double *)(param_2 + 0x2c0)) * dVar11);
    local_120 = param_3;
    (**(code **)(*param_1 + 200))(param_1,&local_b8);
    local_118 = local_b8;
    puVar19 = (undefined8 *)(**(code **)(*param_1 + 0xc0))(param_1);
    uVar10 = *puVar19;
    uVar17 = (**(code **)(*param_1 + 0x28))(param_1,param_4);
    (**(code **)(*param_1 + 0xd0))(param_1,&local_b8,param_4);
    (**(code **)(*param_1 + 0x38))(param_1,local_c8,param_4);
    (**(code **)(*param_1 + 0x48))(param_1,local_d8,param_4);
    local_130 = &local_a8;
    local_140 = local_118;
    local_148 = local_b8;
    local_138 = uVar10;
    local_128 = uVar17;
    FUN_142456320(local_e8[0],local_f8[0],local_c8[0],local_d8[0]);
    lVar22 = local_100;
    lVar20 = local_110;
    iVar21 = param_4 - local_120;
    if (iVar21 != 0) {
      local_148 = param_2 + 0x110;
      local_11c = param_4;
      local_118 = local_148;
      FUN_144a41dda(&local_a8,local_110,local_100,param_5);
      local_108 = local_a8;
      local_148 = param_2 + 0x158;
      FUN_144a41dda(&local_a8,lVar20,lVar22,param_5);
      lVar15 = local_a8;
      local_148 = local_118;
      FUN_144a41dda(&local_b8,lVar20,lVar22,param_6);
      local_148 = param_2 + 0x158;
      FUN_144a41dda(local_c8,local_110,lVar22,param_6);
      if ((((iVar21 + 1U & 0xfffffffd) == 0) &&
          (cVar16 = (**(code **)(*param_1 + 0x20))(param_1,local_120), cVar16 != '\0')) &&
         (cVar16 = (**(code **)(*param_1 + 0x20))(param_1,local_11c), cVar16 != '\0')) {
        (**(code **)(*param_1 + 0xd8 + (ulonglong)(local_11c <= local_120) * 8))(param_1,&local_a8);
        if (0 < (longlong)local_b0) {
          lVar20 = 8;
          lVar22 = 0;
          do {
            lVar12 = (ulonglong)*(ushort *)(local_a8 + 0x30 + lVar22) * 0xc;
            fVar23 = *(float *)(local_a8 + lVar22);
            fVar29 = *(float *)(local_108 + 8 + lVar12);
            fVar28 = *(float *)(local_108 + 4 + lVar12);
            fVar25 = *(float *)(local_a8 + 4 + lVar22);
            fVar27 = *(float *)(local_a8 + 0xc + lVar22);
            fVar24 = *(float *)(lVar15 + 8 + lVar12);
            fVar26 = *(float *)(lVar15 + 4 + lVar12);
            lVar13 = (ulonglong)*(ushort *)(local_a8 + 0x32 + lVar22) * 0xc;
            fVar1 = *(float *)(local_108 + 8 + lVar13);
            fVar2 = *(float *)(local_108 + 4 + lVar13);
            fVar3 = *(float *)(lVar15 + 8 + lVar13);
            fVar4 = *(float *)(lVar15 + 4 + lVar13);
            lVar14 = (ulonglong)*(ushort *)(local_a8 + 0x34 + lVar22) * 0xc;
            fVar5 = *(float *)(local_a8 + 8 + lVar22);
            fVar6 = *(float *)(local_108 + 8 + lVar14);
            fVar7 = *(float *)(local_108 + 4 + lVar14);
            fVar8 = *(float *)(lVar15 + 8 + lVar14);
            fVar9 = *(float *)(lVar15 + 4 + lVar14);
            *(float *)(local_b8 + -8 + lVar20) =
                 fVar27 * *(float *)(lVar15 + lVar14) +
                 fVar5 * *(float *)(local_108 + lVar14) +
                 *(float *)(lVar15 + lVar13) * fVar27 +
                 fVar25 * *(float *)(local_108 + lVar13) +
                 *(float *)(lVar15 + lVar12) * fVar27 + fVar23 * *(float *)(local_108 + lVar12);
            *(float *)(local_b8 + -4 + lVar20) =
                 fVar9 * fVar27 +
                 fVar7 * fVar5 + fVar4 * fVar27 + fVar2 * fVar25 + fVar26 * fVar27 + fVar28 * fVar23
            ;
            *(float *)(local_b8 + lVar20) =
                 fVar8 * fVar27 +
                 fVar6 * fVar5 + fVar3 * fVar27 + fVar1 * fVar25 + fVar24 * fVar27 + fVar29 * fVar23
            ;
            fVar23 = *(float *)(local_a8 + lVar22);
            fVar29 = *(float *)(local_a8 + 4 + lVar22);
            fVar28 = *(float *)(local_a8 + 8 + lVar22);
            fVar25 = *(float *)(lVar15 + 8 + lVar14) * fVar28 +
                     *(float *)(lVar15 + 8 + lVar13) * fVar29 +
                     *(float *)(lVar15 + 8 + lVar12) * fVar23;
            fVar27 = *(float *)(lVar15 + 4 + lVar14) * fVar28 +
                     *(float *)(lVar15 + 4 + lVar13) * fVar29 +
                     *(float *)(lVar15 + 4 + lVar12) * fVar23;
            fVar23 = fVar28 * *(float *)(lVar15 + lVar14) +
                     fVar29 * *(float *)(lVar15 + lVar13) + fVar23 * *(float *)(lVar15 + lVar12);
            fVar29 = fVar25 * fVar25 + fVar23 * fVar23 + fVar27 * fVar27;
            if (((fVar29 != 1.0) || (fVar28 = fVar27, fVar24 = fVar23, fVar26 = fVar25, NAN(fVar29))
                ) && (fVar28 = DAT_14c846330._4_4_, fVar24 = (float)DAT_14c846330,
                     fVar26 = DAT_14c846338, 1e-08 <= fVar29)) {
              fVar29 = 1.0 / SQRT(fVar29);
              fVar28 = fVar27 * fVar29;
              fVar24 = fVar23 * fVar29;
              fVar26 = fVar25 * fVar29;
            }
            *(float *)(local_c8[0] + -8 + lVar20) = fVar24;
            *(float *)(local_c8[0] + -4 + lVar20) = fVar28;
            *(float *)(local_c8[0] + lVar20) = fVar26;
            lVar22 = lVar22 + 0x40;
            lVar20 = lVar20 + 0xc;
          } while ((longlong)local_b0 * 0x40 != lVar22);
        }
      }
      else if (0 < (longlong)local_b0) {
        lVar20 = 0;
        do {
          *(undefined4 *)(local_b8 + 8 + lVar20) = *(undefined4 *)(local_e8[0] + 8 + lVar20);
          *(undefined8 *)(local_b8 + lVar20) = *(undefined8 *)(local_e8[0] + lVar20);
          *(undefined4 *)(local_c8[0] + 8 + lVar20) = *(undefined4 *)(local_f8[0] + 8 + lVar20);
          *(undefined8 *)(local_c8[0] + lVar20) = *(undefined8 *)(local_f8[0] + lVar20);
          lVar20 = lVar20 + 0xc;
        } while ((longlong)local_b0 * 0xc != lVar20);
      }
    }
  }
  if ((local_70 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1408ad1dc FUN_1408ad1dc body=1661 status=ok
// SIG undefined FUN_1408ad1dc(void)

int * FUN_1408ad1dc(longlong *param_1,int *param_2,longlong *param_3)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  ulonglong uVar10;
  longlong *plVar11;
  byte bVar12;
  int iVar13;
  uint *puVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  longlong lVar18;
  longlong *plVar19;
  ulonglong uVar20;
  int iVar21;
  uint uVar22;
  uint uVar23;
  longlong lVar24;
  int iVar25;
  ulonglong uVar26;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar21 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar21 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar21) {
      FUN_1447711aa(param_1,iVar21);
    }
    iVar25 = (int)param_1[5];
    if (iVar25 == 0) {
      iVar9 = -1;
    }
    else {
      iVar9 = iVar25 + 0x1e;
      if (-1 < iVar25 + -1) {
        iVar9 = iVar25 + -1;
      }
      iVar9 = iVar9 >> 5;
    }
    plVar11 = param_1 + 2;
    iVar13 = iVar25 + 1;
    iVar16 = iVar25 + 0x1f;
    if (-1 < iVar25) {
      iVar16 = iVar25;
    }
    if (iVar16 >> 5 == iVar9) {
      *(int *)(param_1 + 5) = iVar13;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar25) {
        if (iVar25 + 0x20U < 0xa0) {
          iVar13 = 0x80;
          iVar9 = iVar25;
        }
        else {
          uVar15 = iVar25 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar22 = 4;
            if (4 < uVar15) {
              uVar22 = uVar15;
            }
          }
          else {
            uVar22 = (uVar15 * 3 >> 3) + uVar15 + 0x10;
          }
          uVar10 = FUN_144a3809e(uVar22 << 2,0);
          iVar9 = (int)(uVar10 >> 2);
          iVar13 = -0x20;
          if ((int)uVar15 <= iVar9) {
            iVar13 = iVar9 << 5;
          }
          iVar9 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar13;
        FUN_1446efbd8(plVar11,iVar9);
        iVar13 = (int)param_1[5] + 1;
      }
      iVar9 = iVar13 + 0x1f;
      if (-1 < iVar13) {
        iVar9 = iVar13;
      }
      *(int *)(param_1 + 5) = iVar13;
      if (iVar13 % 0x20 != 0) {
        plVar19 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar19 = plVar11;
        }
        bVar12 = -(char)(iVar13 % 0x20);
        *(uint *)((longlong)plVar19 + (longlong)(iVar9 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar19 + (longlong)(iVar9 >> 5) * 4) << (bVar12 & 0x1f)) >>
             (bVar12 & 0x1f);
      }
    }
    lVar18 = (longlong)iVar21;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar11 = (longlong *)param_1[4];
    }
    bVar12 = (byte)iVar25 & 0x1f;
    puVar1 = (uint *)((longlong)plVar11 + (longlong)(iVar16 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar12 | 0xfffffffeU >> 0x20 - bVar12);
  }
  else {
    iVar21 = (int)param_1[6];
    lVar18 = (longlong)iVar21;
    iVar25 = *(int *)(*param_1 + 4 + lVar18 * 0x20);
    *(int *)(param_1 + 6) = iVar25;
    iVar9 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar9;
    if (iVar9 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar25 * 0x20) = 0xffffffff;
    }
  }
  puVar1 = (uint *)(param_1 + 2);
  uVar15 = 1;
  puVar14 = (uint *)param_1[4];
  if ((uint *)param_1[4] == (uint *)0x0) {
    puVar14 = puVar1;
  }
  iVar25 = iVar21 + 0x1f;
  if (-1 < iVar21) {
    iVar25 = iVar21;
  }
  puVar14[iVar25 >> 5] = puVar14[iVar25 >> 5] | 1 << ((byte)iVar21 & 0x1f);
  lVar24 = *param_1;
  lVar18 = lVar18 * 0x20;
  puVar2 = (undefined4 *)(lVar24 + lVar18);
  puVar4 = (undefined4 *)*param_3;
  uVar5 = puVar4[1];
  uVar6 = puVar4[2];
  uVar7 = puVar4[3];
  puVar3 = (undefined4 *)(lVar24 + lVar18);
  *puVar3 = *puVar4;
  puVar3[1] = uVar5;
  puVar3[2] = uVar6;
  puVar3[3] = uVar7;
  *(undefined4 *)(lVar24 + 0x10 + lVar18) = 0;
  *(undefined4 *)(lVar24 + 0x18 + lVar18) = 0xffffffff;
  uVar10 = *(ulonglong *)(lVar24 + lVar18);
  uVar20 = *(ulonglong *)(lVar24 + 8 + lVar18);
  uVar22 = ((uint)(uVar10 >> 0x14) & 0xffff ^ (uint)(uVar10 >> 4)) * -0x7a143595;
  uVar22 = (uVar22 >> 0xd ^ uVar22) * -0x3d4d51cb;
  uVar22 = uVar22 >> 0x10 ^ uVar22;
  uVar23 = ((uint)(uVar20 >> 0x14) & 0xffff ^ (uint)(uVar20 >> 4)) * -0x7a143595;
  uVar23 = (uVar23 >> 0xd ^ uVar23) * -0x3d4d51cb;
  uVar22 = uVar22 * 0x40 + (uVar23 >> 0x10 ^ uVar23) + (uVar22 >> 2) + 0x9e3779b9 ^ uVar22;
  uVar23 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar23 != 1) {
    if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
      plVar11 = param_1 + 7;
      if ((longlong *)param_1[8] != (longlong *)0x0) {
        plVar11 = (longlong *)param_1[8];
      }
      iVar25 = *(int *)((longlong)plVar11 + (ulonglong)((int)param_1[9] - 1U & uVar22) * 4);
      if (iVar25 != -1) {
        lVar18 = *param_1;
        do {
          lVar24 = (longlong)iVar25 * 0x20;
          puVar3 = (undefined4 *)(lVar18 + lVar24);
          if ((*(ulonglong *)(lVar18 + lVar24) == uVar10) &&
             (*(ulonglong *)(lVar18 + 8 + lVar24) == uVar20)) {
            uVar5 = *puVar2;
            uVar6 = puVar2[1];
            uVar7 = puVar2[2];
            uVar8 = puVar2[3];
            *(undefined8 *)(puVar3 + 4) = *(undefined8 *)(puVar2 + 4);
            *puVar3 = uVar5;
            puVar3[1] = uVar6;
            puVar3[2] = uVar7;
            puVar3[3] = uVar8;
            FUN_149801dc8(param_1,iVar21);
            iVar21 = iVar25;
            goto LAB_1408ad5e3;
          }
          iVar25 = puVar3[6];
        } while (iVar25 != -1);
      }
    }
    if (3 < uVar23) {
      uVar10 = (ulonglong)(uVar23 & 0xfffffffe) + 0xf;
      lVar18 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar18 == 0; lVar18 = lVar18 + -1) {
        }
      }
      uVar15 = 1 << ((byte)lVar18 & 0x1f);
    }
  }
  if (((int)uVar23 < 1) || ((int)uVar15 <= (int)param_1[9])) {
    uVar22 = (int)param_1[9] - 1U & uVar22;
    puVar2[7] = uVar22;
    plVar11 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar11 = param_1 + 7;
    }
    puVar2[6] = *(undefined4 *)
                 ((longlong)plVar11 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar22) * 4);
    plVar11 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar11 = param_1 + 7;
    }
    *(int *)((longlong)plVar11 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar22) * 4) =
         iVar21;
    goto LAB_1408ad5e3;
  }
  *(uint *)(param_1 + 9) = uVar15;
  plVar11 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar11,0,0,4);
    uVar15 = *(uint *)(param_1 + 9);
  }
  plVar19 = param_1 + 7;
  if (uVar15 == 1) {
    if (*plVar11 != 0) {
      FUN_1446efa72(plVar11,0,0,4);
    }
LAB_1408ad3b3:
    uVar22 = 0;
    do {
      plVar11 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar11 = plVar19;
      }
      *(undefined4 *)((longlong)plVar11 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar22) * 4) =
           0xffffffff;
      uVar22 = uVar22 + 1;
    } while (uVar15 != uVar22);
  }
  else {
    if (uVar15 == 0) goto LAB_1408ad5e3;
    FUN_1446efa72(plVar11,0,uVar15,4);
    if (0 < (int)uVar15) goto LAB_1408ad3b3;
  }
  iVar25 = (int)param_1[5];
  if (iVar25 == 0) {
    uVar10 = 0;
    uVar20 = 1;
    iVar9 = 0;
    iVar13 = 0;
  }
  else {
    puVar14 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar14 = puVar1;
    }
    uVar15 = *puVar14;
    if (uVar15 == 0) {
      iVar9 = iVar25 + 0x1e;
      if (-1 < iVar25 + -1) {
        iVar9 = iVar25 + -1;
      }
      uVar10 = 0;
      uVar20 = (ulonglong)(uint)(iVar9 >> 5);
      if (iVar9 >> 5 < 1) {
        uVar20 = uVar10;
      }
      iVar13 = 0;
      do {
        if (uVar20 == uVar10) goto LAB_1408ad5e3;
        iVar13 = iVar13 + 0x20;
        uVar15 = puVar14[uVar10 + 1];
        uVar10 = uVar10 + 1;
      } while (uVar15 == 0);
    }
    else {
      uVar10 = 0;
      iVar13 = 0;
    }
    uVar20 = (ulonglong)(-uVar15 & uVar15);
    uVar26 = uVar20 * 2 + 1;
    lVar18 = 0x3f;
    if (uVar26 != 0) {
      for (; uVar26 >> lVar18 == 0; lVar18 = lVar18 + -1) {
      }
    }
    iVar9 = (iVar13 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
    if (iVar25 <= iVar9) {
      iVar9 = iVar25;
    }
  }
  if (iVar9 < iVar25) {
    uVar15 = 0xffffffff;
    do {
      lVar18 = *param_1;
      lVar24 = (longlong)iVar9 * 0x20;
      uVar26 = *(ulonglong *)(lVar18 + 8 + lVar24);
      uVar22 = ((uint)(*(ulonglong *)(lVar18 + lVar24) >> 0x14) & 0xffff ^
               (uint)(*(ulonglong *)(lVar18 + lVar24) >> 4)) * -0x7a143595;
      uVar22 = (uVar22 >> 0xd ^ uVar22) * -0x3d4d51cb;
      uVar22 = uVar22 >> 0x10 ^ uVar22;
      uVar23 = ((uint)(uVar26 >> 0x14) & 0xffff ^ (uint)(uVar26 >> 4)) * -0x7a143595;
      uVar23 = (uVar23 >> 0xd ^ uVar23) * -0x3d4d51cb;
      uVar26 = (longlong)
               (int)(uVar22 * 0x40 + (uVar23 >> 0x10 ^ uVar23) + (uVar22 >> 2) + 0x9e3779b9 ^ uVar22
                    ) & (longlong)(int)param_1[9] - 1U;
      iVar25 = (int)uVar26;
      *(int *)(lVar18 + 0x1c + lVar24) = iVar25;
      plVar11 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar11 = plVar19;
      }
      *(undefined4 *)(lVar18 + 0x18 + lVar24) =
           *(undefined4 *)((longlong)plVar11 + ((longlong)(int)param_1[9] - 1U & uVar26) * 4);
      plVar11 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar11 = plVar19;
      }
      *(int *)((longlong)plVar11 + ((longlong)iVar25 & (longlong)(int)param_1[9] - 1U) * 4) = iVar9;
      uVar15 = ~(uint)uVar20 & uVar15;
      puVar14 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar14 = puVar1;
      }
      iVar25 = (int)param_1[5];
      iVar9 = (int)uVar10;
      lVar18 = (longlong)iVar9;
      uVar22 = puVar14[lVar18] & uVar15;
      if (uVar22 == 0) {
        iVar16 = iVar25 + 0x1e;
        if (-1 < iVar25 + -1) {
          iVar16 = iVar25 + -1;
        }
        iVar16 = iVar16 >> 5;
        iVar17 = iVar16;
        if (iVar16 < iVar9) {
          iVar17 = iVar9;
        }
        if (iVar16 <= iVar9) break;
        lVar24 = 0;
        while( true ) {
          iVar13 = iVar13 + 0x20;
          uVar22 = puVar14[lVar18 + lVar24 + 1];
          if (uVar22 != 0) break;
          lVar24 = lVar24 + 1;
          if (iVar17 - lVar18 == lVar24) goto LAB_1408ad5e3;
        }
        uVar10 = (ulonglong)(iVar9 + (int)lVar24 + 1);
        uVar15 = 0xffffffff;
      }
      uVar20 = (ulonglong)(-uVar22 & uVar22);
      uVar26 = uVar20 * 2 + 1;
      lVar18 = 0x3f;
      if (uVar26 != 0) {
        for (; uVar26 >> lVar18 == 0; lVar18 = lVar18 + -1) {
        }
      }
      iVar9 = (iVar13 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
    } while (iVar9 < iVar25);
  }
LAB_1408ad5e3:
  *param_2 = iVar21;
  return param_2;
}



// FUNCTION 1408ad85a FUN_1408ad85a body=7887 status=ok
// SIG undefined FUN_1408ad85a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1408ad85a(longlong *param_1,longlong *param_2,uint *param_3,longlong param_4,
                  longlong *param_5,longlong *param_6,double param_7,longlong *param_8)

{
  int *piVar1;
  double dVar2;
  uint uVar3;
  int iVar4;
  void *_Src;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  DWORD DVar10;
  longlong lVar11;
  undefined8 *puVar12;
  byte bVar13;
  uint uVar14;
  undefined1 *puVar15;
  longlong lVar16;
  longlong lVar17;
  longlong *plVar18;
  uint uVar19;
  int iVar20;
  longlong lVar21;
  longlong *plVar22;
  ulonglong uVar23;
  int iVar24;
  int iVar25;
  uint uVar26;
  undefined4 *puVar27;
  int *piVar28;
  double *pdVar29;
  uint *puVar30;
  uint uVar31;
  ulonglong uVar32;
  undefined8 *puVar33;
  ulonglong uVar34;
  uint uVar35;
  longlong lVar36;
  uint uVar37;
  int iVar38;
  longlong lVar39;
  longlong *plVar40;
  double *pdVar41;
  bool bVar42;
  ulonglong uVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  double dVar47;
  double dVar48;
  double dVar49;
  float fVar50;
  double dVar51;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined4 uVar54;
  undefined4 uVar55;
  undefined4 uVar56;
  float fVar57;
  undefined4 uVar58;
  undefined4 uVar59;
  undefined4 uVar60;
  undefined4 uVar61;
  double dVar62;
  undefined1 auStack_278 [32];
  longlong *local_258;
  uint *local_250;
  longlong *local_248;
  longlong *local_240;
  ulonglong local_238;
  int *local_230;
  int *local_228;
  ulonglong local_220;
  ulonglong local_218;
  ulonglong local_210;
  ulonglong local_208;
  longlong local_200;
  ulonglong local_1f8;
  ulonglong local_1f0;
  longlong *local_1e8;
  longlong *local_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  double local_1c8;
  undefined8 *local_170;
  undefined8 *local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  double local_148;
  longlong local_140 [2];
  int local_130;
  undefined4 uStack_12c;
  undefined1 local_120 [32];
  undefined1 *local_100;
  int local_f8;
  uint local_f4;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_278;
  local_250 = param_3;
  FUN_140114dc4(param_1,param_4);
  FUN_140114e1c(param_1 + 2,param_4 + 0x10);
  local_1e8 = param_1 + 4;
  FUN_140114ece(local_1e8,param_4 + 0x20);
  local_1e0 = param_1 + 6;
  FUN_140114e74();
  dVar2 = (double)param_2[0x53];
  iVar38 = (int)param_1[1];
  local_100 = (undefined1 *)0x0;
  local_f4 = 0x100;
  local_f8 = iVar38;
  uVar31 = iVar38 + 0x1f;
  local_248 = param_2;
  if (0x1f < uVar31) {
    if (uVar31 < 0x120) {
      uVar31 = uVar31 >> 3 & 0x3c;
      puVar15 = local_120;
    }
    else {
      FUN_140694960(local_120,0,uVar31 >> 5,4);
      local_f4 = uVar31 & 0xffffffe0;
      puVar15 = local_100;
      if (local_100 == (undefined1 *)0x0) {
        puVar15 = local_120;
      }
      uVar31 = (uVar31 >> 5) << 2;
    }
    memset(puVar15,0,(ulonglong)uVar31);
    iVar4 = local_f8 + 0x1f;
    if (-1 < local_f8) {
      iVar4 = local_f8;
    }
    if (local_f8 % 0x20 != 0) {
      puVar15 = local_120;
      if (local_100 != (undefined1 *)0x0) {
        puVar15 = local_100;
      }
      bVar13 = -(char)(local_f8 % 0x20);
      *(uint *)(puVar15 + (longlong)(iVar4 >> 5) * 4) =
           (uint)(*(int *)(puVar15 + (longlong)(iVar4 >> 5) * 4) << (bVar13 & 0x1f)) >>
           (bVar13 & 0x1f);
    }
  }
  plVar18 = local_248;
  iVar4 = (int)param_1[3];
  uVar32 = (ulonglong)iVar4;
  if (0 < (longlong)uVar32) {
    lVar11 = 0;
    uVar34 = 0;
    do {
      lVar21 = param_1[2];
      lVar36 = 0;
      do {
        uVar31 = *(uint *)(lVar21 + lVar11 + lVar36);
        puVar15 = local_100;
        if (local_100 == (undefined1 *)0x0) {
          puVar15 = local_120;
        }
        uVar14 = uVar31 + 0x1f;
        if (-1 < (int)uVar31) {
          uVar14 = uVar31;
        }
        if ((*(uint *)(puVar15 + (longlong)((int)uVar14 >> 5) * 4) >> (uVar31 & 0x1f) & 1) == 0) {
          *(uint *)(puVar15 + (longlong)((int)uVar14 >> 5) * 4) =
               *(uint *)(puVar15 + (longlong)((int)uVar14 >> 5) * 4) | 1 << ((byte)uVar31 & 0x1f);
          iVar38 = iVar38 + -1;
        }
        lVar36 = lVar36 + 4;
      } while (lVar36 != 8);
      uVar34 = uVar34 + 1;
      lVar11 = lVar11 + 8;
    } while (uVar34 != uVar32);
  }
  local_218 = (ulonglong)*(uint *)(param_1 + 5);
  local_1f8 = (ulonglong)*(uint *)(param_1 + 7);
  local_220 = (ulonglong)*(uint *)(param_5 + 1);
  lVar11 = (longlong)(int)param_6[1];
  if (lVar11 == 0) {
    iVar25 = 0;
  }
  else {
    lVar21 = 0;
    iVar25 = 0;
    do {
      iVar25 = iVar25 + *(int *)(*param_6 + 0x18 + lVar21);
      lVar21 = lVar21 + 0x20;
    } while (lVar11 << 5 != lVar21);
  }
  uVar35 = iVar38 + iVar4;
  uVar19 = *(uint *)(param_1 + 5) + uVar35;
  uVar14 = *(uint *)(param_1 + 7) + uVar19;
  iVar24 = *(uint *)(param_5 + 1) + uVar14;
  uVar31 = iVar25 + (int)param_6[1] + iVar24;
  *(uint *)(param_1 + 8) = uVar31;
  if (uVar31 == 0) goto LAB_1408af621;
  if (local_250 == (uint *)0x0) {
    local_240 = (longlong *)CONCAT44(local_240._4_4_,0xffffffff);
  }
  else {
    local_240 = (longlong *)CONCAT44(local_240._4_4_,local_250[8]);
  }
  local_230 = (int *)(ulonglong)uVar35;
  local_210 = (ulonglong)uVar19;
  local_208 = (ulonglong)uVar14;
  local_200 = lVar11;
  if ((int)param_1[10] != *(int *)((longlong)param_1 + 0x7c)) {
    uVar14 = ((uint)((ulonglong)local_250 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_250 >> 4)) *
             -0x7a143595;
    uVar14 = (uVar14 >> 0xd ^ uVar14) * -0x3d4d51cb;
    uVar19 = ((uint)((ulonglong)local_248 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_248 >> 4)) *
             -0x7a143595;
    uVar19 = (uVar19 >> 0xd ^ uVar19) * -0x3d4d51cb;
    uVar19 = uVar19 >> 0x10 ^ uVar19;
    plVar22 = param_1 + 0x10;
    if ((longlong *)param_1[0x11] != (longlong *)0x0) {
      plVar22 = (longlong *)param_1[0x11];
    }
    iVar25 = *(int *)((longlong)plVar22 +
                     (ulonglong)
                     ((int)param_1[0x12] - 1U &
                     (uVar19 * 0x40 + (uVar14 >> 0x10 ^ uVar14) + (uVar19 >> 2) + 0x9e3779b9 ^
                     uVar19)) * 4);
    if (iVar25 != -1) {
      lVar11 = param_1[9];
      do {
        lVar36 = (longlong)iVar25 * 0x20;
        lVar21 = lVar11 + lVar36;
        if ((*(longlong **)(lVar11 + lVar36) == local_248) &&
           (*(uint **)(lVar11 + 8 + lVar36) == local_250)) {
          if (lVar21 != 0) {
            uVar14 = *(uint *)(lVar21 + 0x10);
            goto LAB_1408adc76;
          }
          break;
        }
        iVar25 = *(int *)(lVar21 + 0x18);
      } while (iVar25 != -1);
    }
  }
  local_158 = &local_1d8;
  local_1d8 = local_248;
  uStack_1d0 = local_250;
  FUN_1408ad1dc(param_1 + 9,&local_130);
  lVar21 = param_1[9] + (longlong)local_130 * 0x20;
  uVar31 = *(uint *)(param_1 + 8);
  uVar14 = 0xffffffff;
LAB_1408adc76:
  local_250 = (uint *)(lVar21 + 0x10);
  if (uVar31 == 0) {
    uVar14 = 0xffffffff;
  }
  else {
    lVar11 = plVar18[0xd];
    if (lVar11 == 0) {
      if (*(int *)((longlong)plVar18 + 0x33c) + (int)plVar18[0x67] == uVar14) {
        iVar25 = *(int *)((longlong)plVar18 + 0x33c) + uVar31;
        *(int *)((longlong)plVar18 + 0x33c) = iVar25;
        lVar11 = plVar18[0xe];
        if (iVar25 + (int)plVar18[0x67] <= *(int *)(lVar11 + 0x108)) {
          uVar19 = *(uint *)(lVar11 + 0x1a0);
          uVar34 = 0;
          if (0 < (int)uVar19) {
            uVar35 = -uVar14;
            if ((int)-uVar14 < 0) {
              uVar35 = uVar14;
            }
            uVar43 = (ulonglong)uVar19;
            do {
              uVar43 = uVar43 >> 1;
              uVar37 = (uint)uVar43 + (int)uVar34;
              uVar3 = *(uint *)(*(longlong *)(lVar11 + 0x198) + (ulonglong)uVar37 * 4);
              uVar26 = -uVar3;
              if ((int)uVar26 < 0) {
                uVar26 = uVar3;
              }
              if (uVar26 <= uVar35) {
                uVar34 = (ulonglong)(uVar37 + (uVar19 & 1));
              }
              bVar42 = 1 < uVar19;
              plVar18 = local_248;
              uVar19 = (uint)uVar43;
            } while (bVar42);
          }
          iVar25 = *(int *)(*(longlong *)(lVar11 + 0x198) + uVar34 * 4);
          iVar20 = -iVar25;
          if (iVar20 < 0) {
            iVar20 = iVar25;
          }
          if (iVar20 - uVar14 == uVar31) goto LAB_1408addd5;
        }
        FUN_1429bd144(lVar11,uVar14);
      }
      uVar14 = FUN_140f4b6e6(plVar18[0xe],uVar31,(ulonglong)local_240 & 0xffffffff,0);
    }
    else {
      if ((-1 < (int)uVar14) && ((int)uVar14 < *(int *)(lVar11 + 0x408))) {
        plVar18 = local_248;
        if (*(uint *)(*(longlong *)(lVar11 + 0x400) + 0x14 + (ulonglong)uVar14 * 0x18) == uVar31)
        goto LAB_1408addd5;
        FUN_146e23f1e(lVar11,uVar14);
        lVar11 = local_248[0xd];
      }
      uVar14 = FUN_146e23c68(lVar11,(ulonglong)local_240 & 0xffffffff,uVar31,0);
      plVar18 = local_248;
    }
    FUN_140c075ea(plVar18,&local_1d8,uVar14);
    plVar22 = local_1d8;
    FUN_140c076a2(plVar18,&local_1d8,uVar14);
    if (0 < (int)uVar31) {
      puVar27 = (undefined4 *)((longlong)plVar22 + 0xc);
      lVar11 = 0;
      do {
        *(undefined8 *)((longlong)local_1d8 + lVar11) = 0;
        *(undefined4 *)((longlong)local_1d8 + lVar11 + 8) = 0;
        puVar27[-3] = 0;
        puVar27[-2] = 0;
        puVar27[-1] = 0;
        *puVar27 = 0x3f800000;
        lVar11 = lVar11 + 0xc;
        puVar27 = puVar27 + 4;
      } while ((ulonglong)uVar31 * 0xc != lVar11);
    }
    FUN_140fb7f56(plVar18,uVar14,0);
  }
LAB_1408addd5:
  param_7 = (1.0 / dVar2) * param_7;
  *local_250 = uVar14;
  local_258 = plVar18 + 0x37;
  plVar40 = plVar18 + 0xe;
  plVar22 = plVar18 + 0xd;
  FUN_14462e191(&local_130,plVar22,plVar40,uVar14);
  local_258 = plVar18 + 0x3a;
  local_248 = plVar22;
  local_240 = plVar40;
  FUN_140c0753f(local_140,plVar22,plVar40,uVar14);
  if (0 < iVar4) {
    local_228 = (int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60);
    lVar11 = 0;
    uVar34 = 0;
    do {
      lVar21 = *param_1;
      lVar36 = (longlong)*(int *)(param_1[2] + uVar34 * 8) * 0x20;
      iVar4 = *(int *)(lVar21 + lVar36);
      uVar9 = 0xffffffff;
      if ((-1 < (longlong)iVar4) && (iVar4 < (int)param_8[1])) {
        uVar9 = *(undefined4 *)(*param_8 + (longlong)iVar4 * 4);
      }
      lVar36 = lVar36 + lVar21;
      lVar21 = (longlong)*(int *)(param_1[2] + 4 + uVar34 * 8) * 0x20 + lVar21;
      *(undefined4 *)(CONCAT44(uStack_12c,local_130) + uVar34 * 4) = uVar9;
      uVar8 = uRam000000014c846088;
      uVar59 = uRam000000014c84607c;
      uVar58 = uRam000000014c846078;
      uVar55 = uRam000000014c846074;
      uVar56 = _DAT_14c846070;
      uVar54 = uRam000000014c84606c;
      uVar44 = uRam000000014c846068;
      uVar45 = uRam000000014c846064;
      uVar9 = _DAT_14c846060;
      dVar51 = *(double *)(lVar36 + 0x18) * param_7;
      dVar48 = *(double *)(lVar36 + 0x10) * param_7;
      dVar62 = *(double *)(lVar36 + 8) * param_7;
      dVar2 = *(double *)(lVar21 + 0x18) * param_7;
      dVar47 = *(double *)(lVar21 + 0x10) * param_7;
      dVar5 = *(double *)(lVar21 + 8) * param_7;
      dVar49 = (dVar51 + dVar2) * 0.5;
      dVar7 = (dVar48 + dVar47) * 0.5;
      dVar6 = (dVar62 + dVar5) * 0.5;
      dVar2 = (dVar2 - dVar51) * 0.5;
      dVar48 = (dVar47 - dVar48) * 0.5;
      dVar5 = (dVar5 - dVar62) * 0.5;
      local_1c8 = dVar49 - dVar2;
      uStack_1d0 = (uint *)(dVar7 - dVar48);
      local_1d8 = (longlong *)(dVar6 - dVar5);
      local_148 = dVar49 + dVar2;
      uStack_150 = dVar7 + dVar48;
      local_158 = (undefined8 *)(dVar6 + dVar5);
      plVar18 = (longlong *)((double)*(float *)(lVar36 + 4) * param_7);
      plVar22 = (longlong *)((double)*(float *)(lVar21 + 4) * param_7);
      uVar43 = -(ulonglong)((double)plVar22 < (double)plVar18);
      dVar62 = (double)(~uVar43 & (ulonglong)plVar22 | uVar43 & (ulonglong)plVar18);
      puVar12 = (undefined8 *)(local_140[0] + 0x20 + lVar11);
      *puVar12 = _DAT_14c846080;
      puVar12[1] = uVar8;
      puVar27 = (undefined4 *)(local_140[0] + 0x10 + lVar11);
      *puVar27 = uVar56;
      puVar27[1] = uVar55;
      puVar27[2] = uVar58;
      puVar27[3] = uVar59;
      puVar27 = (undefined4 *)(local_140[0] + lVar11);
      *puVar27 = uVar9;
      puVar27[1] = uVar45;
      puVar27[2] = uVar44;
      puVar27[3] = uVar54;
      lVar21 = DAT_14cc271c0;
      if (9.99999993922529e-09 <= dVar2 * dVar2 + dVar5 * dVar5 + dVar48 * dVar48) {
        if (dVar62 - (double)(~uVar43 & (ulonglong)plVar18 | uVar43 & (ulonglong)plVar22) <
            9.999999747378752e-05) {
          local_168 = (undefined8 *)FUN_14001cc68(0x58,0x10);
          local_168[1] = 0;
          *(undefined2 *)(local_168 + 3) = 0x101;
          *(undefined1 *)((longlong)local_168 + 0x1a) = 1;
          *(undefined2 *)((longlong)local_168 + 0x1c) = 0x303;
          *local_168 = &PTR_FUN_149f487f0;
          local_168[6] = local_1c8;
          local_168[4] = local_1d8;
          local_168[5] = uStack_1d0;
          dVar2 = local_148 - local_1c8;
          dVar48 = uStack_150 - (double)uStack_1d0;
          dVar47 = (double)local_158 - (double)local_1d8;
          dVar7 = dVar2 * dVar2 + dVar47 * dVar47 + dVar48 * dVar48;
          dVar6 = 0.0;
          uVar45 = 0;
          uVar9 = 0;
          dVar5 = 0.0;
          dVar51 = 0.0;
          dVar49 = 1.0;
          if (9.999999747378752e-05 <= dVar7) {
            dVar51 = SQRT(dVar7);
            dVar5 = dVar2 / dVar51;
            uVar9 = SUB84(dVar5,0);
            dVar6 = dVar48 / dVar51;
            uVar45 = (undefined4)((ulonglong)dVar6 >> 0x20);
            dVar49 = dVar47 / dVar51;
          }
          local_168[7] = dVar49;
          local_168[8] = CONCAT44(uVar45,SUB84(dVar6,0));
          local_168[9] = CONCAT44((int)((ulonglong)dVar5 >> 0x20),uVar9);
          local_168[10] = dVar51;
          local_168[2] = dVar62;
          if (local_168 != (undefined8 *)0x0) {
            LOCK();
            *(int *)(local_168 + 1) = *(int *)(local_168 + 1) + 1;
            UNLOCK();
          }
          uVar31 = *local_250;
          goto LAB_1408ae434;
        }
        iVar4 = *local_228;
        if (iVar4 == 0x40000002) {
          uVar43 = 0;
        }
        else {
          bVar42 = true;
          if ((DAT_14c86a9f8 == '\x01') && (iVar4 != 2)) {
            if (iVar4 == 1) {
              uVar9 = FUN_140ad26c0();
              local_238 = CONCAT44(local_238._4_4_,uVar9);
              DVar10 = GetCurrentThreadId();
              bVar42 = (DWORD)local_238 == DVar10;
            }
            else {
              bVar42 = false;
            }
          }
          uVar43 = (ulonglong)(bVar42 ^ 1);
        }
        if (*(char *)(lVar21 + uVar43) == '\x01') {
          local_168 = (undefined8 *)FUN_14001cc68(0x98,0x10);
          local_168[1] = 0;
          local_168[2] = 0;
          *(undefined2 *)((longlong)local_168 + 0x19) = 0x101;
          *(undefined2 *)((longlong)local_168 + 0x1c) = 0x1010;
          *local_168 = &PTR_FUN_149f55690;
          local_168[6] = local_1c8;
          local_168[4] = local_1d8;
          local_168[5] = uStack_1d0;
          dVar62 = local_148 - local_1c8;
          dVar2 = uStack_150 - (double)uStack_1d0;
          dVar5 = (double)local_158 - (double)local_1d8;
          dVar48 = dVar62 * dVar62 + dVar5 * dVar5 + dVar2 * dVar2;
          if (((dVar48 != 1.0) || (dVar6 = dVar2, dVar7 = dVar5, dVar49 = dVar62, NAN(dVar48))) &&
             (dVar6 = DAT_14c8464e8, dVar7 = DAT_14c8464e0, dVar49 = DAT_14c8464f0,
             9.99999993922529e-09 <= dVar48)) {
            dVar49 = 1.0 / SQRT(dVar48);
            dVar6 = dVar2 * dVar49;
            dVar7 = dVar5 * dVar49;
            dVar49 = dVar62 * dVar49;
          }
          local_168[7] = dVar7;
          local_168[8] = dVar6;
          local_168[9] = dVar49;
          local_168[10] = SQRT(dVar48);
          local_168[0xb] = plVar18;
          local_168[0xc] = plVar22;
          local_168[0xf] = local_1c8;
          local_168[0xd] = local_1d8;
          local_168[0xe] = uStack_1d0;
          local_168[0x12] = local_1c8;
          local_168[0x10] = local_1d8;
          local_168[0x11] = uStack_1d0;
          *(undefined1 *)(local_168 + 3) = 1;
          dVar2 = (double)local_168[0xf];
          if (local_148 <= (double)local_168[0xf]) {
            dVar2 = local_148;
          }
          dVar5 = (double)local_168[0xd];
          dVar48 = (double)local_168[0xe];
          uVar44 = (undefined4)((ulonglong)uStack_150 >> 0x20);
          uVar9 = SUB84(dVar48,0);
          uVar45 = (int)((ulonglong)dVar48 >> 0x20);
          if (uStack_150 <= dVar48) {
            uVar9 = SUB84(uStack_150,0);
            uVar45 = uVar44;
          }
          uVar55 = (undefined4)((ulonglong)local_158 >> 0x20);
          uVar54 = SUB84(dVar5,0);
          uVar56 = (int)((ulonglong)dVar5 >> 0x20);
          if ((double)local_158 <= dVar5) {
            uVar54 = (int)local_158;
            uVar56 = uVar55;
          }
          dVar5 = (double)local_168[0x12];
          uVar58 = SUB84(dVar5,0);
          uVar59 = (undefined4)((ulonglong)dVar5 >> 0x20);
          if (dVar5 <= local_148) {
            uVar58 = SUB84(local_148,0);
            uVar59 = (undefined4)((ulonglong)local_148 >> 0x20);
          }
          dVar5 = (double)local_168[0x10];
          dVar48 = (double)local_168[0x11];
          uVar60 = SUB84(dVar48,0);
          uVar61 = (int)((ulonglong)dVar48 >> 0x20);
          if (dVar48 <= uStack_150) {
            uVar60 = SUB84(uStack_150,0);
            uVar61 = uVar44;
          }
          uVar44 = SUB84(dVar5,0);
          uVar46 = (int)((ulonglong)dVar5 >> 0x20);
          if (dVar5 <= (double)local_158) {
            uVar44 = (int)local_158;
            uVar46 = uVar55;
          }
          if ((double)plVar18 <= (double)plVar22) {
            plVar18 = plVar22;
          }
          local_168[0xd] = (double)CONCAT44(uVar56,uVar54) - (double)plVar18;
          local_168[0xe] = (double)CONCAT44(uVar45,uVar9) - (double)plVar18;
          local_168[0xf] = dVar2 - (double)plVar18;
          local_168[0x10] = (double)CONCAT44(uVar46,uVar44) + (double)plVar18;
          local_168[0x11] = (double)CONCAT44(uVar61,uVar60) + (double)plVar18;
          local_168[0x12] = (double)CONCAT44(uVar59,uVar58) + (double)plVar18;
          if (local_168 != (undefined8 *)0x0) {
            LOCK();
            *(int *)(local_168 + 1) = *(int *)(local_168 + 1) + 1;
            UNLOCK();
          }
          uVar31 = *local_250;
          goto LAB_1408ae434;
        }
        local_168 = (undefined8 *)0x0;
        uStack_160 = 0;
        FUN_140836c88(&local_168,3);
        uVar43 = FUN_14001cc68(200,0x10);
        local_258 = plVar22;
        FUN_1474b8246(uVar43,&local_1d8,&local_158,plVar18);
        if (uVar43 != 0) {
          LOCK();
          *(int *)(uVar43 + 8) = *(int *)(uVar43 + 8) + 1;
          UNLOCK();
        }
        lVar21 = (longlong)(int)(uint)uStack_160;
        uVar31 = (uint)uStack_160 + 1;
        if (uStack_160._4_4_ < uVar31) {
          uVar23 = uStack_160 & 0xffffffff;
          local_238 = uVar43;
          uStack_160._0_4_ = uVar31;
          FUN_140619960(&local_168,uVar23);
          uVar43 = local_238;
          uVar31 = (uint)uStack_160;
        }
        uStack_160._0_4_ = uVar31;
        local_168[lVar21] = uVar43;
        puVar12 = (undefined8 *)FUN_14001cc68(0x38,0x10);
        puVar12[1] = 0;
        *(undefined2 *)(puVar12 + 3) = 0x101;
        *(undefined1 *)((longlong)puVar12 + 0x1a) = 1;
        *(undefined2 *)((longlong)puVar12 + 0x1c) = 0;
        *puVar12 = &PTR_FUN_149f48e60;
        *(undefined4 *)(puVar12 + 4) = (undefined4)local_1d8;
        *(undefined4 *)((longlong)puVar12 + 0x24) = local_1d8._4_4_;
        *(int *)(puVar12 + 5) = (int)uStack_1d0;
        *(uint *)((longlong)puVar12 + 0x2c) = uStack_1d0._4_4_;
        puVar12[6] = local_1c8;
        puVar12[2] = plVar18;
        if (puVar12 != (undefined8 *)0x0) {
          LOCK();
          *(int *)(puVar12 + 1) = *(int *)(puVar12 + 1) + 1;
          UNLOCK();
        }
        uVar43 = (ulonglong)(int)(uint)uStack_160;
        uStack_160._0_4_ = (uint)uStack_160 + 1;
        if (uStack_160._4_4_ < (uint)uStack_160) {
          local_238 = uVar43;
          FUN_140619960(&local_168,uVar43);
          uVar43 = local_238;
        }
        local_168[uVar43] = puVar12;
        puVar12 = (undefined8 *)FUN_14001cc68(0x38,0x10);
        puVar12[1] = 0;
        *(undefined2 *)(puVar12 + 3) = 0x101;
        *(undefined1 *)((longlong)puVar12 + 0x1a) = 1;
        *(undefined2 *)((longlong)puVar12 + 0x1c) = 0;
        *puVar12 = &PTR_FUN_149f48e60;
        *(undefined4 *)(puVar12 + 4) = (undefined4)local_158;
        *(undefined4 *)((longlong)puVar12 + 0x24) = local_158._4_4_;
        *(int *)(puVar12 + 5) = (int)uStack_150;
        *(uint *)((longlong)puVar12 + 0x2c) = uStack_150._4_4_;
        puVar12[6] = local_148;
        puVar12[2] = plVar22;
        if (puVar12 != (undefined8 *)0x0) {
          LOCK();
          *(int *)(puVar12 + 1) = *(int *)(puVar12 + 1) + 1;
          UNLOCK();
        }
        uVar43 = (ulonglong)(int)(uint)uStack_160;
        uStack_160._0_4_ = (uint)uStack_160 + 1;
        if (uStack_160._4_4_ < (uint)uStack_160) {
          local_238 = uVar43;
          FUN_140619960(&local_168,uVar43);
          uVar43 = local_238;
        }
        local_168[uVar43] = puVar12;
        puVar12 = (undefined8 *)FUN_14001cc68(0x70,0x10);
        FUN_14014f414(puVar12,&local_168);
        if (puVar12 != (undefined8 *)0x0) {
          LOCK();
          *(int *)(puVar12 + 1) = *(int *)(puVar12 + 1) + 1;
          UNLOCK();
        }
        uVar31 = *local_250;
        if (*local_248 == 0) {
          plVar18 = (longlong *)(*local_240 + 0xf0);
        }
        else {
          lVar21 = *(longlong *)(*local_248 + 0x400);
          plVar18 = *(longlong **)(lVar21 + 8 + (longlong)(int)uVar31 * 0x18);
          uVar31 = *(uint *)(lVar21 + 0x10 + (longlong)(int)uVar31 * 0x18);
        }
        local_170 = puVar12;
        (**(code **)(*plVar18 + 0x10))(plVar18,uVar31 + (int)uVar34,&local_170);
        if (local_170 != (undefined8 *)0x0) {
          LOCK();
          piVar28 = (int *)(local_170 + 1);
          *piVar28 = *piVar28 + -1;
          UNLOCK();
          if ((*piVar28 == 0) && (*(int *)((longlong)local_170 + 0xc) == 0)) {
            (**(code **)*local_170)(local_170,1);
          }
        }
        FUN_144756766(local_168,uStack_160 & 0xffffffff);
        if (local_168 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
      }
      else {
        local_168 = (undefined8 *)FUN_14001cc68(0x38,0x10);
        local_168[1] = 0;
        *(undefined2 *)(local_168 + 3) = 0x101;
        *(undefined1 *)((longlong)local_168 + 0x1a) = 1;
        *(undefined2 *)((longlong)local_168 + 0x1c) = 0;
        *local_168 = &PTR_FUN_149f48e60;
        local_168[4] = dVar6;
        local_168[5] = dVar7;
        local_168[6] = dVar49;
        local_168[2] = dVar62;
        if (local_168 != (undefined8 *)0x0) {
          LOCK();
          *(int *)(local_168 + 1) = *(int *)(local_168 + 1) + 1;
          UNLOCK();
        }
        uVar31 = *local_250;
LAB_1408ae434:
        if (*local_248 == 0) {
          plVar18 = (longlong *)(*local_240 + 0xf0);
        }
        else {
          lVar21 = *(longlong *)(*local_248 + 0x400);
          plVar18 = *(longlong **)(lVar21 + 8 + (longlong)(int)uVar31 * 0x18);
          uVar31 = *(uint *)(lVar21 + 0x10 + (longlong)(int)uVar31 * 0x18);
        }
        (**(code **)(*plVar18 + 0x10))(plVar18,uVar31 + (int)uVar34,&local_168);
        if (local_168 != (undefined8 *)0x0) {
          LOCK();
          piVar28 = (int *)(local_168 + 1);
          *piVar28 = *piVar28 + -1;
          UNLOCK();
          if ((*piVar28 == 0) && (*(int *)((longlong)local_168 + 0xc) == 0)) {
            (**(code **)*local_168)(local_168,1);
          }
        }
      }
      uVar34 = uVar34 + 1;
      lVar11 = lVar11 + 0x30;
    } while (uVar32 != uVar34);
  }
  if ((iVar38 != 0) && (iVar38 = (int)param_1[1], 0 < iVar38)) {
    lVar11 = 0;
    uVar34 = 0;
    do {
      puVar15 = local_100;
      if (local_100 == (undefined1 *)0x0) {
        puVar15 = local_120;
      }
      if ((*(uint *)(puVar15 + (uVar34 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar34 & 0x1f) & 1) == 0) {
        lVar21 = *param_1;
        iVar38 = *(int *)(lVar21 + lVar11);
        uVar9 = 0xffffffff;
        if ((-1 < (longlong)iVar38) && (iVar38 < (int)param_8[1])) {
          uVar9 = *(undefined4 *)(*param_8 + (longlong)iVar38 * 4);
        }
        iVar38 = (int)uVar32;
        *(undefined4 *)(CONCAT44(uStack_12c,local_130) + (longlong)iVar38 * 4) = uVar9;
        uVar8 = uRam000000014c846088;
        uVar59 = uRam000000014c84607c;
        uVar58 = uRam000000014c846078;
        uVar55 = uRam000000014c846074;
        uVar56 = _DAT_14c846070;
        uVar54 = uRam000000014c84606c;
        uVar44 = uRam000000014c846068;
        uVar45 = uRam000000014c846064;
        uVar9 = _DAT_14c846060;
        lVar36 = (longlong)iVar38 * 0x30;
        puVar12 = (undefined8 *)(local_140[0] + 0x20 + lVar36);
        *puVar12 = _DAT_14c846080;
        puVar12[1] = uVar8;
        puVar27 = (undefined4 *)(local_140[0] + 0x10 + lVar36);
        *puVar27 = uVar56;
        puVar27[1] = uVar55;
        puVar27[2] = uVar58;
        puVar27[3] = uVar59;
        puVar27 = (undefined4 *)(local_140[0] + lVar36);
        *puVar27 = uVar9;
        puVar27[1] = uVar45;
        puVar27[2] = uVar44;
        puVar27[3] = uVar54;
        fVar57 = *(float *)(lVar21 + 4 + lVar11);
        dVar2 = *(double *)(lVar21 + 0x18 + lVar11);
        dVar5 = *(double *)(lVar21 + 0x10 + lVar11);
        dVar48 = *(double *)(lVar21 + 8 + lVar11);
        local_1d8 = (longlong *)FUN_14001cc68(0x38,0x10);
        local_1d8[1] = 0;
        *(undefined2 *)(local_1d8 + 3) = 0x101;
        *(undefined1 *)((longlong)local_1d8 + 0x1a) = 1;
        *(undefined2 *)((longlong)local_1d8 + 0x1c) = 0;
        *local_1d8 = (longlong)&PTR_FUN_149f48e60;
        local_1d8[4] = (longlong)(dVar48 * param_7);
        local_1d8[5] = (longlong)(dVar5 * param_7);
        local_1d8[6] = (longlong)(dVar2 * param_7);
        local_1d8[2] = (longlong)((double)fVar57 * param_7);
        if (local_1d8 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_1d8 + 1) = (int)local_1d8[1] + 1;
          UNLOCK();
        }
        uVar31 = *local_250;
        if (*local_248 == 0) {
          plVar18 = (longlong *)(*local_240 + 0xf0);
        }
        else {
          lVar21 = *(longlong *)(*local_248 + 0x400);
          plVar18 = *(longlong **)(lVar21 + 8 + (longlong)(int)uVar31 * 0x18);
          uVar31 = *(uint *)(lVar21 + 0x10 + (longlong)(int)uVar31 * 0x18);
        }
        (**(code **)(*plVar18 + 0x10))(plVar18,uVar31 + iVar38,&local_1d8);
        if (local_1d8 != (longlong *)0x0) {
          LOCK();
          plVar18 = local_1d8 + 1;
          *(int *)plVar18 = (int)*plVar18 + -1;
          UNLOCK();
          if (((int)*plVar18 == 0) && (*(int *)((longlong)local_1d8 + 0xc) == 0)) {
            (**(code **)*local_1d8)(local_1d8,1);
          }
        }
        uVar32 = (ulonglong)(iVar38 + 1);
        iVar38 = (int)param_1[1];
      }
      uVar34 = uVar34 + 1;
      lVar11 = lVar11 + 0x20;
    } while ((longlong)uVar34 < (longlong)iVar38);
  }
  if (0 < (int)local_218) {
    fVar57 = (float)param_7;
    piVar28 = (int *)(longlong)(int)local_230;
    uVar32 = 0;
    do {
      uVar59 = uRam000000014c84607c;
      uVar58 = uRam000000014c846078;
      uVar55 = uRam000000014c846074;
      uVar56 = _DAT_14c846070;
      uVar54 = uRam000000014c84606c;
      uVar44 = uRam000000014c846068;
      uVar45 = uRam000000014c846064;
      uVar9 = _DAT_14c846060;
      lVar11 = *local_1e8;
      lVar21 = (longlong)piVar28 * 0x30;
      auVar52._8_8_ = uRam000000014c846088;
      auVar52._0_8_ = _DAT_14c846080;
      *(undefined1 (*) [16])(local_140[0] + 0x20 + lVar21) = auVar52;
      puVar27 = (undefined4 *)(local_140[0] + 0x10 + lVar21);
      *puVar27 = uVar56;
      puVar27[1] = uVar55;
      puVar27[2] = uVar58;
      puVar27[3] = uVar59;
      puVar27 = (undefined4 *)(local_140[0] + lVar21);
      *puVar27 = uVar9;
      puVar27[1] = uVar45;
      puVar27[2] = uVar44;
      puVar27[3] = uVar54;
      iVar38 = *(int *)(lVar11 + 0x20 + uVar32 * 0x28);
      uVar9 = 0xffffffff;
      if ((-1 < (longlong)iVar38) && (iVar38 < (int)param_8[1])) {
        uVar9 = *(undefined4 *)(*param_8 + (longlong)iVar38 * 4);
      }
      puVar12 = (undefined8 *)(lVar11 + uVar32 * 0x28);
      *(undefined4 *)(CONCAT44(uStack_12c,local_130) + (longlong)piVar28 * 4) = uVar9;
      local_1d8 = (longlong *)0x0;
      uStack_1d0 = (uint *)0x0;
      local_158 = (undefined8 *)0x0;
      uStack_150 = 0.0;
      local_1f0 = (ulonglong)*(int *)(puVar12 + 3);
      iVar38 = *(int *)(puVar12 + 1);
      local_228 = (int *)CONCAT44(local_228._4_4_,iVar38);
      local_238 = uVar32;
      local_230 = piVar28;
      if (3 < iVar38 && 3 < (longlong)local_1f0) {
        FUN_14004bbe0(&local_1d8,iVar38);
        if ((int)uStack_150._4_4_ < iVar38) {
          FUN_1403b10bc(&local_158,(ulonglong)local_228 & 0xffffffff);
        }
        if ((longlong)*(int *)(puVar12 + 1) != 0) {
          pdVar41 = (double *)*puVar12;
          pdVar29 = pdVar41 + (longlong)*(int *)(puVar12 + 1) * 6;
          do {
            puVar30 = uStack_1d0;
            dVar2 = *pdVar41;
            dVar5 = pdVar41[1];
            dVar48 = pdVar41[2];
            dVar62 = dVar48 * dVar48 + dVar2 * dVar2 + dVar5 * dVar5;
            if ((dVar62 <= 9.99999993922529e-09) || (*(int *)(pdVar41 + 5) == 0)) break;
            dVar6 = 1.0 / SQRT(dVar62);
            dVar62 = pdVar41[3];
            lVar11 = (longlong)(int)uStack_1d0;
            uVar31 = (int)uStack_1d0 + 1;
            uStack_1d0 = (uint *)CONCAT44(uStack_1d0._4_4_,uVar31);
            if (uStack_1d0._4_4_ < uVar31) {
              FUN_146ccf99a(&local_1d8,(ulonglong)puVar30 & 0xffffffff);
            }
            dVar7 = uStack_150;
            fVar50 = (float)(dVar62 * dVar6);
            *(float *)(local_1d8 + lVar11 * 3) = fVar50 * (float)(dVar2 * dVar6) * fVar57;
            *(float *)((longlong)local_1d8 + lVar11 * 0x18 + 4) =
                 (float)(dVar5 * dVar6) * fVar50 * fVar57;
            *(float *)(local_1d8 + lVar11 * 3 + 1) = (float)(dVar48 * dVar6) * fVar50 * fVar57;
            *(float *)((longlong)local_1d8 + lVar11 * 0x18 + 0xc) = (float)(dVar2 * dVar6);
            *(float *)(local_1d8 + lVar11 * 3 + 2) = (float)(dVar5 * dVar6);
            *(float *)((longlong)local_1d8 + lVar11 * 0x18 + 0x14) = (float)(dVar48 * dVar6);
            lVar11 = (longlong)(int)uStack_150;
            uVar31 = (int)uStack_150 + 1;
            uStack_150 = (double)CONCAT44(uStack_150._4_4_,uVar31);
            if (uStack_150._4_4_ < uVar31) {
              FUN_140bfc2d4(&local_158,(ulonglong)dVar7 & 0xffffffff);
            }
            puVar33 = local_158 + lVar11 * 2;
            local_158[lVar11 * 2] = 0;
            iVar38 = *(int *)(pdVar41 + 5);
            _Src = (void *)pdVar41[4];
            *(int *)(local_158 + lVar11 * 2 + 1) = iVar38;
            if ((longlong)iVar38 == 0) {
              *(undefined4 *)((longlong)puVar33 + 0xc) = 0;
            }
            else {
              FUN_144a06ca8(puVar33,iVar38,0);
              memcpy((void *)*puVar33,_Src,(longlong)iVar38 << 2);
            }
            pdVar41 = pdVar41 + 6;
          } while (pdVar41 != pdVar29);
        }
      }
      uVar32 = local_1f0;
      if ((int)uStack_1d0 == (int)local_228) {
        local_168 = (undefined8 *)0x0;
        uStack_160 = 0;
        iVar38 = (int)local_1f0;
        FUN_140627580(&local_168,local_1f0 & 0xffffffff,1);
        if (0 < iVar38) {
          lVar11 = 0;
          do {
            lVar21 = puVar12[2];
            dVar2 = *(double *)(lVar21 + 0x10 + lVar11 * 2);
            dVar5 = *(double *)(lVar21 + 8 + lVar11 * 2);
            *(float *)((longlong)local_168 + lVar11) = (float)*(double *)(lVar21 + lVar11 * 2);
            *(float *)((longlong)local_168 + lVar11 + 4) = (float)dVar5;
            *(float *)((longlong)local_168 + lVar11 + 8) = (float)dVar2;
            lVar11 = lVar11 + 0xc;
          } while (uVar32 * 0xc != lVar11);
        }
        puVar12 = (undefined8 *)FUN_14001cc68(0xb0,0x10);
        FUN_149801e3a(puVar12,&local_1d8,&local_158,&local_168);
        piVar28 = local_230;
        if (puVar12 != (undefined8 *)0x0) {
          LOCK();
          *(int *)(puVar12 + 1) = *(int *)(puVar12 + 1) + 1;
          UNLOCK();
        }
        uVar31 = *local_250;
        if (*local_248 == 0) {
          plVar18 = (longlong *)(*local_240 + 0xf0);
        }
        else {
          lVar11 = *(longlong *)(*local_248 + 0x400);
          plVar18 = *(longlong **)(lVar11 + 8 + (longlong)(int)uVar31 * 0x18);
          uVar31 = *(uint *)(lVar11 + 0x10 + (longlong)(int)uVar31 * 0x18);
        }
        local_170 = puVar12;
        (**(code **)(*plVar18 + 0x10))(plVar18,(int)local_230 + uVar31,&local_170);
        if (local_170 != (undefined8 *)0x0) {
          LOCK();
          piVar1 = (int *)(local_170 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if ((*piVar1 == 0) && (*(int *)((longlong)local_170 + 0xc) == 0)) {
            (**(code **)*local_170)(local_170,1);
          }
        }
        if (local_168 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
      }
      else {
        local_168 = (undefined8 *)FUN_14001cc68(0x38,0x10);
        piVar28 = local_230;
        local_168[1] = 0;
        *(undefined2 *)(local_168 + 3) = 0x101;
        *(undefined1 *)((longlong)local_168 + 0x1a) = 1;
        *(undefined2 *)((longlong)local_168 + 0x1c) = 0;
        *local_168 = &PTR_FUN_149f48e60;
        local_168[4] = 0;
        local_168[5] = 0;
        local_168[6] = 0;
        local_168[2] = 0x3ff0000000000000;
        if (local_168 != (undefined8 *)0x0) {
          LOCK();
          *(int *)(local_168 + 1) = *(int *)(local_168 + 1) + 1;
          UNLOCK();
        }
        uVar31 = *local_250;
        if (*local_248 == 0) {
          plVar18 = (longlong *)(*local_240 + 0xf0);
        }
        else {
          lVar11 = *(longlong *)(*local_248 + 0x400);
          plVar18 = *(longlong **)(lVar11 + 8 + (longlong)(int)uVar31 * 0x18);
          uVar31 = *(uint *)(lVar11 + 0x10 + (longlong)(int)uVar31 * 0x18);
        }
        (**(code **)(*plVar18 + 0x10))(plVar18,(int)local_230 + uVar31,&local_168);
        if (local_168 != (undefined8 *)0x0) {
          LOCK();
          piVar1 = (int *)(local_168 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if ((*piVar1 == 0) && (*(int *)((longlong)local_168 + 0xc) == 0)) {
            (**(code **)*local_168)(local_168,1);
          }
        }
      }
      FUN_144716727(local_158,(ulonglong)uStack_150 & 0xffffffff);
      if (local_158 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
      if (local_1d8 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      piVar28 = (int *)((longlong)piVar28 + 1);
      uVar32 = local_238 + 1;
    } while (uVar32 != local_218);
  }
  if (0 < (int)local_1f8) {
    lVar36 = (longlong)(int)local_210;
    lVar11 = lVar36 * 0x30;
    lVar21 = local_1f8 * 0x30;
    lVar39 = 0;
    do {
      lVar17 = *local_1e0;
      auVar52 = insertps(ZEXT416((uint)(float)*(double *)(lVar17 + 0x20 + lVar39 * 2)),
                         ZEXT416((uint)(float)*(double *)(lVar17 + 0x28 + lVar39 * 2)),0x10);
      auVar52 = insertps(auVar52,ZEXT416((uint)(float)*(double *)(lVar17 + 0x30 + lVar39 * 2)),0x20)
      ;
      auVar53 = insertps(auVar52,ZEXT416((uint)(float)*(double *)(lVar17 + 0x38 + lVar39 * 2)),0x30)
      ;
      auVar52 = insertps(ZEXT416((uint)(float)*(double *)(lVar17 + lVar39 * 2)),
                         ZEXT416((uint)(float)*(double *)(lVar17 + 8 + lVar39 * 2)),0x1c);
      auVar52 = insertps(auVar52,ZEXT416((uint)(float)*(double *)(lVar17 + 0x10 + lVar39 * 2)),0x28)
      ;
      lVar16 = local_140[0] + lVar11;
      *(undefined1 (*) [16])(lVar39 + lVar16) = auVar53;
      *(undefined1 (*) [16])(lVar39 + 0x10 + lVar16) = auVar52;
      puVar12 = (undefined8 *)(lVar39 + 0x20 + lVar16);
      *puVar12 = &DAT_3f8000003f800000;
      puVar12[1] = 0x3f800000;
      iVar38 = *(int *)(lVar17 + 0x58 + lVar39 * 2);
      uVar9 = 0xffffffff;
      if ((-1 < (longlong)iVar38) && (iVar38 < (int)param_8[1])) {
        uVar9 = *(undefined4 *)(*param_8 + (longlong)iVar38 * 4);
      }
      *(undefined4 *)(CONCAT44(uStack_12c,local_130) + lVar36 * 4) = uVar9;
      dVar2 = *(double *)(lVar17 + 0x50 + lVar39 * 2) * param_7;
      dVar5 = *(double *)(lVar17 + 0x48 + lVar39 * 2) * param_7;
      dVar48 = *(double *)(lVar17 + 0x40 + lVar39 * 2) * param_7;
      local_1d8 = (longlong *)FUN_14001cc68(0x50,0x10);
      local_1d8[1] = 0;
      local_1d8[2] = 0;
      *(undefined2 *)(local_1d8 + 3) = 0x101;
      *(undefined1 *)((longlong)local_1d8 + 0x1a) = 1;
      *(undefined2 *)((longlong)local_1d8 + 0x1c) = 0x101;
      *local_1d8 = (longlong)&PTR_FUN_149f489d0;
      auVar53._8_4_ = SUB84(dVar5,0);
      auVar53._0_8_ = -dVar48;
      auVar53._12_4_ = (uint)((ulonglong)dVar5 >> 0x20) ^ 0x80000000;
      *(undefined1 (*) [16])(local_1d8 + 4) = auVar53;
      local_1d8[6] = (longlong)-dVar2;
      local_1d8[7] = (longlong)dVar48;
      local_1d8[8] = (longlong)dVar5;
      local_1d8[9] = (longlong)dVar2;
      if (local_1d8 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_1d8 + 1) = (int)local_1d8[1] + 1;
        UNLOCK();
      }
      uVar31 = *local_250;
      if (*local_248 == 0) {
        plVar18 = (longlong *)(*local_240 + 0xf0);
      }
      else {
        lVar17 = *(longlong *)(*local_248 + 0x400);
        plVar18 = *(longlong **)(lVar17 + 8 + (longlong)(int)uVar31 * 0x18);
        uVar31 = *(uint *)(lVar17 + 0x10 + (longlong)(int)uVar31 * 0x18);
      }
      (**(code **)(*plVar18 + 0x10))(SUB84(dVar48,0),(int)lVar36 + uVar31,&local_1d8);
      if (local_1d8 != (longlong *)0x0) {
        LOCK();
        plVar18 = local_1d8 + 1;
        *(int *)plVar18 = (int)*plVar18 + -1;
        UNLOCK();
        if (((int)*plVar18 == 0) && (*(int *)((longlong)local_1d8 + 0xc) == 0)) {
          (**(code **)*local_1d8)(local_1d8,1);
        }
      }
      lVar36 = lVar36 + 1;
      lVar39 = lVar39 + 0x30;
    } while (lVar21 != lVar39);
  }
  puVar30 = local_250;
  if (0 < (int)local_220) {
    lVar36 = (longlong)(int)local_208;
    lVar21 = lVar36 * 0x80;
    lVar11 = lVar36 * 0x30;
    local_220 = local_220 << 7;
    uVar32 = 0;
    do {
      uVar8 = uRam000000014c846088;
      uVar59 = uRam000000014c84607c;
      uVar58 = uRam000000014c846078;
      uVar55 = uRam000000014c846074;
      uVar56 = _DAT_14c846070;
      uVar54 = uRam000000014c84606c;
      uVar44 = uRam000000014c846068;
      uVar45 = uRam000000014c846064;
      uVar9 = _DAT_14c846060;
      puVar12 = (undefined8 *)(local_140[0] + 0x20 + lVar11);
      *puVar12 = _DAT_14c846080;
      puVar12[1] = uVar8;
      puVar27 = (undefined4 *)(local_140[0] + 0x10 + lVar11);
      *puVar27 = uVar56;
      puVar27[1] = uVar55;
      puVar27[2] = uVar58;
      puVar27[3] = uVar59;
      puVar27 = (undefined4 *)(local_140[0] + lVar11);
      *puVar27 = uVar9;
      puVar27[1] = uVar45;
      puVar27[2] = uVar44;
      puVar27[3] = uVar54;
      iVar38 = *(int *)(*param_5 + 0x70 + uVar32);
      uVar9 = 0xffffffff;
      if ((-1 < (longlong)iVar38) && (iVar38 < (int)param_8[1])) {
        uVar9 = *(undefined4 *)(*param_8 + (longlong)iVar38 * 4);
      }
      *(undefined4 *)(CONCAT44(uStack_12c,local_130) + lVar36 * 4) = uVar9;
      lVar39 = *param_5;
      puVar12 = (undefined8 *)(lVar39 + uVar32 + 0x10);
      puVar33 = &local_1d8;
      for (lVar17 = 0xc; lVar17 != 0; lVar17 = lVar17 + -1) {
        *puVar33 = *puVar12;
        puVar12 = puVar12 + 1;
        puVar33 = puVar33 + 1;
      }
      plVar18 = *(longlong **)(lVar21 + lVar39 + uVar32);
      (**(code **)(*plVar18 + 0x28))(plVar18,&local_168);
      puVar12 = (undefined8 *)FUN_14001cc68(0xc0,0x10);
      FUN_14010f5c4(puVar12,&local_168,&local_1d8);
      if (puVar12 != (undefined8 *)0x0) {
        LOCK();
        *(int *)(puVar12 + 1) = *(int *)(puVar12 + 1) + 1;
        UNLOCK();
      }
      local_158 = puVar12;
      if (local_168 != (undefined8 *)0x0) {
        LOCK();
        piVar28 = (int *)(local_168 + 1);
        *piVar28 = *piVar28 + -1;
        UNLOCK();
        if ((*piVar28 == 0) && (*(int *)((longlong)local_168 + 0xc) == 0)) {
          (**(code **)*local_168)(local_168,1);
        }
      }
      puVar30 = local_250;
      uVar31 = *local_250;
      if (*local_248 == 0) {
        plVar18 = (longlong *)(*local_240 + 0xf0);
      }
      else {
        lVar39 = *(longlong *)(*local_248 + 0x400);
        plVar18 = *(longlong **)(lVar39 + 8 + (longlong)(int)uVar31 * 0x18);
        uVar31 = *(uint *)(lVar39 + 0x10 + (longlong)(int)uVar31 * 0x18);
      }
      (**(code **)(*plVar18 + 0x10))(plVar18,(int)lVar36 + uVar31,&local_158);
      if (local_158 != (undefined8 *)0x0) {
        LOCK();
        piVar28 = (int *)(local_158 + 1);
        *piVar28 = *piVar28 + -1;
        UNLOCK();
        if ((*piVar28 == 0) && (*(int *)((longlong)local_158 + 0xc) == 0)) {
          (**(code **)*local_158)(local_158,1);
        }
      }
      lVar36 = lVar36 + 1;
      uVar32 = uVar32 + 0x80;
      lVar11 = lVar11 + 0x30;
    } while (local_220 != uVar32);
  }
  if (((int)local_200 != 0) && ((longlong)(int)param_6[1] != 0)) {
    piVar28 = (int *)*param_6;
    local_230 = piVar28 + (longlong)(int)param_6[1] * 8;
    do {
      local_1d8 = (longlong *)0x0;
      uStack_1d0 = (uint *)0x0;
      iVar38 = piVar28[6];
      if (iVar38 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(iVar38);
      }
      if (iVar38 != 0) {
        FUN_14481578e(&local_1d8);
      }
      if (*local_240 == 0) {
        uVar31 = 0;
      }
      else {
        uVar31 = *puVar30;
      }
      iVar38 = piVar28[6];
      local_228 = piVar28;
      if ((longlong)iVar38 != 0) {
        lVar11 = *(longlong *)(piVar28 + 4);
        lVar36 = (longlong)iVar24;
        lVar21 = lVar36 * 0x30;
        lVar39 = 0;
        do {
          uVar8 = uRam000000014c846088;
          uVar59 = uRam000000014c84607c;
          uVar58 = uRam000000014c846078;
          uVar55 = uRam000000014c846074;
          uVar56 = _DAT_14c846070;
          uVar54 = uRam000000014c84606c;
          uVar44 = uRam000000014c846068;
          uVar45 = uRam000000014c846064;
          uVar9 = _DAT_14c846060;
          iVar4 = *(int *)(lVar11 + lVar39);
          puVar12 = (undefined8 *)(local_140[0] + 0x20 + lVar21);
          *puVar12 = _DAT_14c846080;
          puVar12[1] = uVar8;
          puVar27 = (undefined4 *)(local_140[0] + 0x10 + lVar21);
          *puVar27 = uVar56;
          puVar27[1] = uVar55;
          puVar27[2] = uVar58;
          puVar27[3] = uVar59;
          puVar27 = (undefined4 *)(local_140[0] + lVar21);
          *puVar27 = uVar9;
          puVar27[1] = uVar45;
          puVar27[2] = uVar44;
          puVar27[3] = uVar54;
          uVar9 = 0xffffffff;
          if ((-1 < (longlong)iVar4) && (iVar4 < (int)param_8[1])) {
            uVar9 = *(undefined4 *)(*param_8 + (longlong)iVar4 * 4);
          }
          *(undefined4 *)(lVar39 + CONCAT44(uStack_12c,local_130) + lVar36 * 4) = uVar9;
          local_158 = (undefined8 *)FUN_14001cc68(0x20,0x10);
          local_158[1] = 0;
          local_158[2] = 0;
          *(undefined4 *)((longlong)local_158 + 0x17) = 0;
          *(undefined2 *)((longlong)local_158 + 0x1c) = 0x1111;
          *local_158 = &PTR_FUN_14be86810;
          if (local_158 != (undefined8 *)0x0) {
            LOCK();
            *(int *)(local_158 + 1) = *(int *)(local_158 + 1) + 1;
            UNLOCK();
          }
          uVar14 = *local_250;
          if (*local_248 == 0) {
            plVar18 = (longlong *)(*local_240 + 0xf0);
          }
          else {
            lVar17 = *(longlong *)(*local_248 + 0x400);
            plVar18 = *(longlong **)(lVar17 + 8 + (longlong)(int)uVar14 * 0x18);
            uVar14 = *(uint *)(lVar17 + 0x10 + (longlong)(int)uVar14 * 0x18);
          }
          (**(code **)(*plVar18 + 0x10))(plVar18,uVar14 + iVar24,&local_158);
          puVar30 = uStack_1d0;
          lVar17 = (longlong)(int)uStack_1d0;
          uVar14 = (int)uStack_1d0 + 1;
          uStack_1d0 = (uint *)CONCAT44(uStack_1d0._4_4_,uVar14);
          if (uStack_1d0._4_4_ < uVar14) {
            FUN_1446f48e2(&local_1d8,(ulonglong)puVar30 & 0xffffffff);
          }
          *(uint *)((longlong)local_1d8 + lVar17 * 4) = uVar31 + iVar24;
          if (local_158 != (undefined8 *)0x0) {
            LOCK();
            piVar28 = (int *)(local_158 + 1);
            *piVar28 = *piVar28 + -1;
            UNLOCK();
            if ((*piVar28 == 0) && (*(int *)((longlong)local_158 + 0xc) == 0)) {
              (**(code **)*local_158)(local_158,1);
            }
          }
          iVar24 = iVar24 + 1;
          lVar39 = lVar39 + 4;
          lVar21 = lVar21 + 0x30;
        } while ((longlong)iVar38 * 4 != lVar39);
      }
      piVar28 = local_228;
      uVar8 = uRam000000014c846088;
      uVar59 = uRam000000014c84607c;
      uVar58 = uRam000000014c846078;
      uVar55 = uRam000000014c846074;
      uVar56 = _DAT_14c846070;
      uVar54 = uRam000000014c84606c;
      uVar44 = uRam000000014c846068;
      uVar45 = uRam000000014c846064;
      uVar9 = _DAT_14c846060;
      lVar11 = (longlong)iVar24 * 0x30;
      puVar12 = (undefined8 *)(local_140[0] + 0x20 + lVar11);
      *puVar12 = _DAT_14c846080;
      puVar12[1] = uVar8;
      puVar27 = (undefined4 *)(local_140[0] + 0x10 + lVar11);
      *puVar27 = uVar56;
      puVar27[1] = uVar55;
      puVar27[2] = uVar58;
      puVar27[3] = uVar59;
      puVar27 = (undefined4 *)(local_140[0] + lVar11);
      *puVar27 = uVar9;
      puVar27[1] = uVar45;
      puVar27[2] = uVar44;
      puVar27[3] = uVar54;
      iVar38 = local_228[2];
      uVar9 = 0xffffffff;
      if ((-1 < (longlong)iVar38) && (iVar38 < (int)param_8[1])) {
        uVar9 = *(undefined4 *)(*param_8 + (longlong)iVar38 * 4);
      }
      *(undefined4 *)(CONCAT44(uStack_12c,local_130) + (longlong)iVar24 * 4) = uVar9;
      (**(code **)(**(longlong **)local_228 + 0x38))(*(longlong **)local_228,&local_158);
      puVar12 = local_158;
      if (local_158 + 0x28 != &local_1d8) {
        if (local_158[0x28] != 0) {
          FUN_1400020a8();
        }
        puVar12[0x28] = local_1d8;
        local_1d8 = (longlong *)0x0;
        *(int *)(puVar12 + 0x29) = (int)uStack_1d0;
        *(uint *)((longlong)puVar12 + 0x14c) = uStack_1d0._4_4_;
        uStack_1d0 = (uint *)0x0;
      }
      puVar30 = local_250;
      uVar31 = *local_250;
      if (*local_248 == 0) {
        plVar18 = (longlong *)(*local_240 + 0xf0);
      }
      else {
        lVar11 = *(longlong *)(*local_248 + 0x400);
        plVar18 = *(longlong **)(lVar11 + 8 + (longlong)(int)uVar31 * 0x18);
        uVar31 = *(uint *)(lVar11 + 0x10 + (longlong)(int)uVar31 * 0x18);
      }
      (**(code **)(*plVar18 + 0x10))(plVar18,uVar31 + iVar24,&local_158);
      puVar12 = local_158;
      if (local_158 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_158 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if ((*piVar1 == 0) && (*(int *)((longlong)puVar12 + 0xc) == 0)) {
          (**(code **)*puVar12)(puVar12,1);
        }
      }
      if (local_1d8 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      iVar24 = iVar24 + 1;
      piVar28 = piVar28 + 8;
    } while (piVar28 != local_230);
  }
LAB_1408af621:
  if (local_100 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_f0 ^ (ulonglong)auStack_278) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1408af72a FUN_1408af72a body=30992 status=ok
// SIG undefined FUN_1408af72a(void)

void FUN_1408af72a(longlong *param_1,undefined4 **param_2,undefined4 **param_3,ulonglong param_4,
                  undefined4 **param_5,undefined8 param_6,undefined8 param_7,undefined4 **param_8,
                  undefined4 **param_9,undefined4 param_10,longlong *param_11,int param_12,
                  undefined8 param_13)

{
  int *piVar1;
  longlong *plVar2;
  undefined4 **ppuVar3;
  undefined8 *puVar4;
  ushort uVar5;
  ushort uVar6;
  undefined4 uVar7;
  longlong lVar8;
  bool bVar9;
  undefined4 uVar10;
  undefined4 **ppuVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined1 uVar15;
  char cVar16;
  int iVar17;
  undefined4 uVar18;
  int iVar19;
  longlong *plVar20;
  longlong *plVar21;
  longlong *plVar22;
  undefined4 *puVar23;
  ulonglong uVar24;
  longlong lVar25;
  ulonglong uVar26;
  uint uVar27;
  longlong lVar28;
  byte bVar29;
  int iVar30;
  longlong lVar31;
  longlong lVar32;
  longlong lVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  undefined8 *puVar37;
  undefined8 *puVar38;
  longlong lVar39;
  undefined8 *puVar40;
  undefined4 *puVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  undefined1 auStack_6e8 [32];
  undefined4 **local_6c8;
  undefined4 **local_6c0;
  undefined4 **local_6b8;
  undefined4 **local_6b0;
  undefined4 **local_6a8;
  undefined1 *local_6a0;
  undefined1 *local_698;
  undefined1 *local_690;
  longlong *local_688;
  undefined1 local_680;
  undefined1 local_678;
  undefined4 local_670;
  longlong *local_660;
  undefined4 **local_658;
  undefined4 **local_650;
  undefined4 **local_648;
  ulonglong local_640;
  int local_634;
  longlong *local_630;
  undefined4 **local_628;
  undefined4 local_61c;
  undefined8 local_618;
  undefined4 local_610;
  undefined1 local_60c [8];
  undefined4 local_604;
  undefined1 local_600 [8];
  undefined4 local_5f8;
  undefined1 local_5f4 [8];
  undefined4 local_5ec;
  longlong local_5e8;
  ulonglong uStack_5e0;
  undefined4 *local_5d8;
  ulonglong uStack_5d0;
  longlong local_5c8;
  undefined4 local_5c0;
  undefined4 *local_5b8;
  int local_5b0;
  undefined4 *local_5a8;
  undefined8 uStack_5a0;
  undefined4 *local_598;
  undefined4 local_590;
  undefined4 *local_588;
  int local_580;
  undefined4 *local_578;
  undefined8 uStack_570;
  undefined4 *local_568;
  undefined8 uStack_560;
  undefined4 *local_558;
  undefined8 uStack_550;
  undefined4 *local_548;
  int iStack_540;
  undefined4 uStack_53c;
  longlong *local_538;
  undefined4 uStack_530;
  undefined4 uStack_52c;
  longlong local_528;
  longlong lStack_520;
  undefined4 local_518;
  undefined4 uStack_514;
  undefined4 uStack_510;
  undefined4 uStack_50c;
  undefined4 *local_2f8;
  undefined8 uStack_2f0;
  longlong *local_2e8;
  undefined8 uStack_2e0;
  longlong local_2d8;
  longlong lStack_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  ulonglong local_a0;
  
  local_618 = param_13;
  local_634 = param_12;
  local_630 = param_11;
  local_628 = param_9;
  local_650 = param_5;
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_6e8;
  local_648 = param_3;
  FUN_140056680(&local_2f8,L"UseSelfCollisions");
  iVar17 = FUN_144a41c6c(param_2,&local_2f8);
  if (iVar17 == -1) {
    bVar9 = false;
  }
  else {
    bVar9 = (float)param_2[3][(longlong)iVar17 * 3] != 0.0;
  }
  if (local_2f8 != (undefined4 *)0x0) {
    FUN_1400020a8();
  }
  local_660 = param_1;
  local_658 = param_2;
  local_640 = param_4;
  if (bVar9) {
    plVar21 = (longlong *)FUN_14001cc68(0x560,0x10);
    plVar21[1] = (longlong)&DAT_100000001;
    *plVar21 = (longlong)&PTR_FUN_14be85a80;
    local_6c8 = local_648;
    local_6c0 = param_2;
    FUN_1497f4306(plVar21 + 2,(int)param_1[0x3b],(int)param_1[0x3c],param_7);
    if (plVar21 == (longlong *)0x0) {
      local_660[0x20] = 0x10;
      plVar20 = (longlong *)local_660[0x21];
      if (plVar20 != (longlong *)0x0) {
        local_660[0x21] = 0;
LAB_1408b6350:
        LOCK();
        plVar22 = plVar20 + 1;
        *(int *)plVar22 = (int)*plVar22 + -1;
        UNLOCK();
        if ((int)*plVar22 == 0) {
          (**(code **)*plVar20)(plVar20);
          LOCK();
          piVar1 = (int *)((longlong)plVar20 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar20 + 0x10))(plVar20);
          }
        }
        if (plVar21 != (longlong *)0x0) goto LAB_1408b6372;
      }
    }
    else {
      LOCK();
      *(int *)(plVar21 + 1) = (int)plVar21[1] + 1;
      UNLOCK();
      local_660[0x20] = (longlong)(plVar21 + 2);
      plVar20 = (longlong *)local_660[0x21];
      if (plVar21 == plVar20) {
        LOCK();
        plVar20 = plVar21 + 1;
        *(int *)plVar20 = (int)*plVar20 + -1;
        UNLOCK();
        if ((int)*plVar20 == 0) {
          (**(code **)*plVar21)(plVar21);
          LOCK();
          piVar1 = (int *)((longlong)plVar21 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar21 + 0x10))(plVar21);
          }
        }
      }
      else {
        local_660[0x21] = (longlong)plVar21;
        if (plVar20 != (longlong *)0x0) goto LAB_1408b6350;
      }
LAB_1408b6372:
      LOCK();
      plVar20 = plVar21 + 1;
      *(int *)plVar20 = (int)*plVar20 + -1;
      UNLOCK();
      if ((int)*plVar20 == 0) {
        (**(code **)*plVar21)(plVar21);
        LOCK();
        piVar1 = (int *)((longlong)plVar21 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar21 + 0x10))(plVar21);
        }
      }
    }
    plVar21 = local_660;
    *(int *)((longlong)local_660 + 0x1e4) = *(int *)((longlong)local_660 + 0x1e4) + 1;
    plVar20 = (longlong *)FUN_14001cc68(0x1c0,0x10);
    plVar20[1] = (longlong)&DAT_100000001;
    *plVar20 = (longlong)&PTR_FUN_14be85aa0;
    local_6c8 = (undefined4 **)plVar21[0x38];
    local_6b0 = local_658;
    local_6b8 = param_8;
    local_6c0 = local_650;
    FUN_1497f4ed6(plVar20 + 2,(int)plVar21[0x3b],(int)plVar21[0x3c],local_648);
    if (plVar20 == (longlong *)0x0) {
      local_660[0x22] = 0x10;
      plVar21 = (longlong *)local_660[0x23];
      if (plVar21 != (longlong *)0x0) {
        local_660[0x23] = 0;
LAB_1408b647c:
        LOCK();
        plVar22 = plVar21 + 1;
        *(int *)plVar22 = (int)*plVar22 + -1;
        UNLOCK();
        if ((int)*plVar22 == 0) {
          (**(code **)*plVar21)(plVar21);
          LOCK();
          piVar1 = (int *)((longlong)plVar21 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar21 + 0x10))(plVar21);
          }
        }
        if (plVar20 != (longlong *)0x0) goto LAB_1408b65b1;
      }
    }
    else {
      LOCK();
      *(int *)(plVar20 + 1) = (int)plVar20[1] + 1;
      UNLOCK();
      local_660[0x22] = (longlong)(plVar20 + 2);
      plVar21 = (longlong *)local_660[0x23];
      if (plVar20 == plVar21) {
        LOCK();
        plVar21 = plVar20 + 1;
        *(int *)plVar21 = (int)*plVar21 + -1;
        UNLOCK();
        if ((int)*plVar21 == 0) {
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
      else {
        local_660[0x23] = (longlong)plVar20;
        if (plVar21 != (longlong *)0x0) goto LAB_1408b647c;
      }
LAB_1408b65b1:
      LOCK();
      plVar21 = plVar20 + 1;
      *(int *)plVar21 = (int)*plVar21 + -1;
      UNLOCK();
      if ((int)*plVar21 == 0) {
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
    plVar21 = local_660;
    *(int *)((longlong)local_660 + 0x1ec) = *(int *)((longlong)local_660 + 0x1ec) + 1;
    plVar20 = (longlong *)FUN_14001cc68(0x20,0x10);
    plVar20[1] = (longlong)&DAT_100000001;
    *plVar20 = (longlong)&PTR_FUN_14be85ac0;
    lVar32 = plVar21[0x3b];
    lVar33 = plVar21[0x3c];
    plVar20[2] = (longlong)local_648;
    *(int *)(plVar20 + 3) = (int)lVar32;
    *(int *)((longlong)plVar20 + 0x1c) = (int)lVar33;
    if (plVar20 == (longlong *)0x0) {
      local_660[0x24] = 0x10;
      plVar21 = (longlong *)local_660[0x25];
      if (plVar21 != (longlong *)0x0) {
        local_660[0x25] = 0;
LAB_1408b6686:
        LOCK();
        plVar22 = plVar21 + 1;
        *(int *)plVar22 = (int)*plVar22 + -1;
        UNLOCK();
        if ((int)*plVar22 == 0) {
          (**(code **)*plVar21)(plVar21);
          LOCK();
          piVar1 = (int *)((longlong)plVar21 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar21 + 0x10))(plVar21);
          }
        }
        if (plVar20 != (longlong *)0x0) goto LAB_1408b66c7;
      }
    }
    else {
      LOCK();
      *(int *)(plVar20 + 1) = (int)plVar20[1] + 1;
      UNLOCK();
      local_660[0x24] = (longlong)(plVar20 + 2);
      plVar21 = (longlong *)local_660[0x25];
      if (plVar20 == plVar21) {
        LOCK();
        plVar21 = plVar20 + 1;
        *(int *)plVar21 = (int)*plVar21 + -1;
        UNLOCK();
        if ((int)*plVar21 == 0) {
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
      else {
        local_660[0x25] = (longlong)plVar20;
        if (plVar21 != (longlong *)0x0) goto LAB_1408b6686;
      }
LAB_1408b66c7:
      LOCK();
      plVar21 = plVar20 + 1;
      *(int *)plVar21 = (int)*plVar21 + -1;
      UNLOCK();
      if ((int)*plVar21 == 0) {
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
    *(int *)(local_660 + 0x3e) = (int)local_660[0x3e] + 1;
    param_1 = local_660;
    param_2 = local_658;
    param_4 = local_640;
    if (local_660[0x36] == 0) {
      *(int *)((longlong)local_660 + 0x1e4) = *(int *)((longlong)local_660 + 0x1e4) + 1;
    }
    else {
      *(int *)(local_660 + 0x47) = (int)local_660[0x47] + 1;
      *(int *)(local_660 + 0x48) = (int)local_660[0x48] + 1;
    }
  }
  else {
    FUN_1400021e4(&DAT_14c993388,&local_2f8);
    iVar17 = FUN_144a41c6c(param_2,&local_2f8);
    if (iVar17 == -1) {
      bVar29 = 0;
    }
    else {
      bVar29 = *(byte *)((longlong)param_2[9] + (longlong)iVar17) & 1;
    }
    if (local_2f8 != (undefined4 *)0x0) {
      FUN_1400020a8();
    }
    if (bVar29 != 0) {
      plVar21 = (longlong *)FUN_14001cc68(0x50,0x10);
      plVar21[1] = (longlong)&DAT_100000001;
      *plVar21 = (longlong)&PTR_FUN_14be85ae0;
      local_6c8 = param_2;
      FUN_1497f5fa4(plVar21 + 2,(int)param_1[0x3b],(int)param_1[0x3c],param_6);
      if (plVar21 == (longlong *)0x0) {
        local_660[0x26] = 0x10;
        plVar20 = (longlong *)local_660[0x27];
        if (plVar20 != (longlong *)0x0) {
          local_660[0x27] = 0;
LAB_1408b5f8d:
          LOCK();
          plVar22 = plVar20 + 1;
          *(int *)plVar22 = (int)*plVar22 + -1;
          UNLOCK();
          if ((int)*plVar22 == 0) {
            (**(code **)*plVar20)(plVar20);
            LOCK();
            piVar1 = (int *)((longlong)plVar20 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar20 + 0x10))(plVar20);
            }
          }
          if (plVar21 != (longlong *)0x0) goto LAB_1408b64ea;
        }
      }
      else {
        LOCK();
        *(int *)(plVar21 + 1) = (int)plVar21[1] + 1;
        UNLOCK();
        local_660[0x26] = (longlong)(plVar21 + 2);
        plVar20 = (longlong *)local_660[0x27];
        if (plVar21 == plVar20) {
          LOCK();
          plVar20 = plVar21 + 1;
          *(int *)plVar20 = (int)*plVar20 + -1;
          UNLOCK();
          if ((int)*plVar20 == 0) {
            (**(code **)*plVar21)(plVar21);
            LOCK();
            piVar1 = (int *)((longlong)plVar21 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar21 + 0x10))(plVar21);
            }
          }
        }
        else {
          local_660[0x27] = (longlong)plVar21;
          if (plVar20 != (longlong *)0x0) goto LAB_1408b5f8d;
        }
LAB_1408b64ea:
        LOCK();
        plVar20 = plVar21 + 1;
        *(int *)plVar20 = (int)*plVar20 + -1;
        UNLOCK();
        if ((int)*plVar20 == 0) {
          (**(code **)*plVar21)(plVar21);
          LOCK();
          piVar1 = (int *)((longlong)plVar21 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar21 + 0x10))(plVar21);
          }
        }
      }
      *(int *)((longlong)local_660 + 0x1e4) = *(int *)((longlong)local_660 + 0x1e4) + 1;
      *(int *)((longlong)local_660 + 0x1ec) = *(int *)((longlong)local_660 + 0x1ec) + 1;
      param_1 = local_660;
      param_2 = local_658;
      param_4 = local_640;
    }
  }
  if (((param_4 == 0) || (*(int *)(param_4 + 0x150) == 0)) ||
     (cVar16 = FUN_1497f3032(param_2), plVar21 = local_660, cVar16 == '\0')) {
    FUN_1400021e4(&DAT_14c9964d8,&local_2f8);
    iVar17 = FUN_144a41c6c(param_2,&local_2f8);
    if (iVar17 == -1) {
      bVar29 = 0;
    }
    else {
      bVar29 = *(byte *)((longlong)param_2[9] + (longlong)iVar17) & 1;
    }
    if (local_2f8 != (undefined4 *)0x0) {
      FUN_1400020a8();
    }
    plVar21 = local_660;
    if (bVar29 == 0) {
      FUN_1400021e4(&DAT_14c9933c0,&local_2f8);
      iVar17 = FUN_144a41c6c(param_2,&local_2f8);
      if (iVar17 == -1) {
        bVar29 = 0;
      }
      else {
        bVar29 = *(byte *)((longlong)param_2[9] + (longlong)iVar17) & 1;
      }
      if (local_2f8 != (undefined4 *)0x0) {
        FUN_1400020a8();
      }
      if (bVar29 != 0) {
        if (param_1[0x36] == 0) {
          lVar32 = param_1[0x37];
          plVar20 = (longlong *)FUN_14001cc68(0xa0,0x10);
          plVar20[1] = (longlong)&DAT_100000001;
          *plVar20 = (longlong)&PTR_FUN_14be85b50;
          lVar33 = param_1[0x3b];
          lVar25 = param_1[0x3c];
          local_578 = (undefined4 *)CONCAT44(local_578._4_4_,0x3f800000);
          FUN_14190b59e(&local_568,local_658);
          FUN_1400021e4(&DAT_14c9933c0,&local_558);
          FUN_14190b64c(&local_548);
          ppuVar3 = local_650;
          uVar26 = 0;
          iVar17 = iStack_540 + -1;
          if (iStack_540 == 0) {
            iVar17 = 0;
          }
          if (0 < iVar17) {
            puVar23 = local_548;
            if (iStack_540 == 0) {
              puVar23 = (undefined4 *)&DAT_149dfb77a;
            }
            lVar31 = 0;
            uVar26 = 0;
            do {
              uVar5 = *(ushort *)((longlong)puVar23 + lVar31 * 2);
              uVar27 = ((uint)(0x19 < uVar5 - 0x61) * 0x20 + (uint)uVar5) - 0x20;
              uVar34 = (uint)(uVar26 >> 8) ^
                       *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar26 ^ uVar27) & 0xff) * 4);
              uVar26 = (ulonglong)
                       (uVar34 >> 8 ^
                       *(uint *)(&DAT_14c75d150 +
                                (ulonglong)(uVar34 & 0xff ^ uVar27 >> 8 & 0xff) * 4));
              lVar31 = lVar31 + 1;
            } while (iVar17 != (int)lVar31);
          }
          plVar21 = plVar20 + 2;
          iVar17 = FUN_140aad9fa(local_650,uVar26,&local_548);
          param_4 = local_640;
          puVar23 = *ppuVar3 + (longlong)iVar17 * 10;
          if (puVar23 == (undefined4 *)0x0 || iVar17 == -1) {
            local_2f8 = (undefined4 *)0x0;
            uStack_2f0 = (ulonglong)uStack_2f0._4_4_ << 0x20;
          }
          else {
            local_2f8 = *(undefined4 **)(puVar23 + 4);
            uStack_2f0 = *(ulonglong *)(puVar23 + 6);
          }
          local_6c0 = &local_2f8;
          local_6c8 = local_648;
          local_6a8 = (undefined4 **)CONCAT44(local_6a8._4_4_,0x3f800000);
          local_6b0 = (undefined4 **)CONCAT71(local_6b0._1_7_,1);
          local_6b8 = &local_568;
          FUN_14026d462(plVar21,lVar32 + 0x20,(int)lVar33,(int)lVar25);
          plVar20[2] = (longlong)&PTR_FUN_14be85b70;
          plVar20[0x11] = 0;
          plVar20[0x12] = 0;
          FUN_140bfb5f8(plVar21,lVar32 + 0x20);
          if (local_548 != (undefined4 *)0x0) {
            FUN_1400020a8();
          }
          param_2 = local_658;
          if (local_558 != (undefined4 *)0x0) {
            FUN_1400020a8();
          }
          plVar20[2] = (longlong)&PTR_FUN_14be85b68;
          FUN_14190b6cc(plVar20 + 0x13,param_2);
          if (plVar20 == (longlong *)0x0) {
            local_660[2] = 0x10;
            plVar21 = (longlong *)local_660[3];
joined_r0x0001408b5fdb:
            if (plVar21 == (longlong *)0x0) goto LAB_1408afbd1;
            local_660[3] = 0;
          }
          else {
            LOCK();
            *(int *)(plVar20 + 1) = (int)plVar20[1] + 1;
            UNLOCK();
            local_660[2] = (longlong)plVar21;
            plVar21 = (longlong *)local_660[3];
            if (plVar20 == plVar21) {
              LOCK();
              plVar21 = plVar20 + 1;
              *(int *)plVar21 = (int)*plVar21 + -1;
              iVar17 = (int)*plVar21;
              UNLOCK();
              goto joined_r0x0001408b6534;
            }
            local_660[3] = (longlong)plVar20;
joined_r0x0001408b51e8:
            if (plVar21 == (longlong *)0x0) goto LAB_1408afbc7;
          }
          LOCK();
          plVar22 = plVar21 + 1;
          *(int *)plVar22 = (int)*plVar22 + -1;
          UNLOCK();
          if ((int)*plVar22 == 0) {
            (**(code **)*plVar21)(plVar21);
            LOCK();
            piVar1 = (int *)((longlong)plVar21 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar21 + 0x10))(plVar21);
            }
          }
          param_2 = local_658;
          param_4 = local_640;
          if (plVar20 == (longlong *)0x0) goto LAB_1408afbd1;
        }
        else {
          iVar17 = *(int *)((longlong)param_1 + 0x1dc);
          lVar32 = *(longlong *)(param_1[0x36] + 0x1f8);
          plVar20 = (longlong *)FUN_14001cc68(0xa0,0x10);
          plVar20[1] = (longlong)&DAT_100000001;
          *plVar20 = (longlong)&PTR_FUN_14be85b50;
          local_6c8 = local_658;
          FUN_1497f6f60(plVar20 + 2,(longlong)iVar17 * 0x18 + lVar32,local_648,local_650);
          param_2 = local_658;
          param_4 = local_640;
          if (plVar20 == (longlong *)0x0) {
            local_660[2] = 0x10;
            plVar21 = (longlong *)local_660[3];
            goto joined_r0x0001408b5fdb;
          }
          LOCK();
          *(int *)(plVar20 + 1) = (int)plVar20[1] + 1;
          UNLOCK();
          local_660[2] = (longlong)(plVar20 + 2);
          plVar21 = (longlong *)local_660[3];
          if (plVar20 != plVar21) {
            local_660[3] = (longlong)plVar20;
            goto joined_r0x0001408b51e8;
          }
          LOCK();
          plVar21 = plVar20 + 1;
          *(int *)plVar21 = (int)*plVar21 + -1;
          iVar17 = (int)*plVar21;
          UNLOCK();
joined_r0x0001408b6534:
          if (iVar17 == 0) {
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
LAB_1408afbc7:
        LOCK();
        plVar21 = plVar20 + 1;
        *(int *)plVar21 = (int)*plVar21 + -1;
        UNLOCK();
        if ((int)*plVar21 == 0) {
          (**(code **)*plVar20)(plVar20);
          LOCK();
          piVar1 = (int *)((longlong)plVar20 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            lVar32 = *plVar20;
LAB_1408b52a6:
            (**(code **)(lVar32 + 0x10))(plVar20);
          }
        }
        goto LAB_1408afbd1;
      }
    }
    else {
      if (param_1[0x36] == 0) {
        lVar32 = local_660[0x37];
        plVar20 = (longlong *)FUN_14001cc68(0xf8,0x10);
        plVar20[1] = (longlong)&DAT_100000001;
        *plVar20 = (longlong)&PTR_FUN_14be85b20;
        local_6b8 = local_658;
        local_6c0 = local_650;
        local_6c8 = local_648;
        FUN_1497f6b7a(plVar20 + 2,lVar32 + 0x20,(int)plVar21[0x3b],(int)plVar21[0x3c]);
        param_4 = local_640;
        param_2 = local_658;
        if (plVar20 == (longlong *)0x0) {
          local_660[4] = 0x10;
          plVar21 = (longlong *)local_660[5];
          if (plVar21 != (longlong *)0x0) {
            local_660[5] = 0;
LAB_1408b6839:
            LOCK();
            plVar22 = plVar21 + 1;
            *(int *)plVar22 = (int)*plVar22 + -1;
            UNLOCK();
            if ((int)*plVar22 == 0) {
              (**(code **)*plVar21)(plVar21);
              LOCK();
              piVar1 = (int *)((longlong)plVar21 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar21 + 0x10))(plVar21);
              }
            }
            param_2 = local_658;
            param_4 = local_640;
            if (plVar20 != (longlong *)0x0) goto LAB_1408b6aa3;
          }
        }
        else {
          LOCK();
          *(int *)(plVar20 + 1) = (int)plVar20[1] + 1;
          UNLOCK();
          local_660[4] = (longlong)(plVar20 + 2);
          plVar21 = (longlong *)local_660[5];
          if (plVar20 == plVar21) {
            LOCK();
            plVar21 = plVar20 + 1;
            *(int *)plVar21 = (int)*plVar21 + -1;
            UNLOCK();
            if ((int)*plVar21 == 0) {
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
          else {
            local_660[5] = (longlong)plVar20;
            if (plVar21 != (longlong *)0x0) goto LAB_1408b6839;
          }
LAB_1408b6aa3:
          LOCK();
          plVar21 = plVar20 + 1;
          *(int *)plVar21 = (int)*plVar21 + -1;
          UNLOCK();
          if ((int)*plVar21 == 0) {
            (**(code **)*plVar20)(plVar20);
            LOCK();
            piVar1 = (int *)((longlong)plVar20 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              lVar32 = *plVar20;
              goto LAB_1408b52a6;
            }
          }
        }
      }
      else {
        iVar17 = *(int *)((longlong)local_660 + 0x1dc);
        lVar32 = *(longlong *)(param_1[0x36] + 0x1f8);
        plVar21 = (longlong *)FUN_14001cc68(0xf8,0x10);
        plVar21[1] = (longlong)&DAT_100000001;
        *plVar21 = (longlong)&PTR_FUN_14be85b20;
        local_6c8 = local_658;
        FUN_1497f645c(plVar21 + 2,(longlong)iVar17 * 0x18 + lVar32,local_648,local_650);
        if (plVar21 == (longlong *)0x0) {
          local_660[4] = 0x10;
          plVar20 = (longlong *)local_660[5];
          if (plVar20 != (longlong *)0x0) {
            local_660[5] = 0;
LAB_1408b68ae:
            LOCK();
            plVar22 = plVar20 + 1;
            *(int *)plVar22 = (int)*plVar22 + -1;
            UNLOCK();
            if ((int)*plVar22 == 0) {
              (**(code **)*plVar20)(plVar20);
              LOCK();
              piVar1 = (int *)((longlong)plVar20 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar20 + 0x10))(plVar20);
              }
            }
            if (plVar21 != (longlong *)0x0) goto LAB_1408b6ae7;
          }
        }
        else {
          LOCK();
          *(int *)(plVar21 + 1) = (int)plVar21[1] + 1;
          UNLOCK();
          local_660[4] = (longlong)(plVar21 + 2);
          plVar20 = (longlong *)local_660[5];
          if (plVar21 == plVar20) {
            LOCK();
            plVar20 = plVar21 + 1;
            *(int *)plVar20 = (int)*plVar20 + -1;
            UNLOCK();
            if ((int)*plVar20 == 0) {
              (**(code **)*plVar21)(plVar21);
              LOCK();
              piVar1 = (int *)((longlong)plVar21 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar21 + 0x10))(plVar21);
              }
            }
          }
          else {
            local_660[5] = (longlong)plVar21;
            if (plVar20 != (longlong *)0x0) goto LAB_1408b68ae;
          }
LAB_1408b6ae7:
          LOCK();
          plVar20 = plVar21 + 1;
          *(int *)plVar20 = (int)*plVar20 + -1;
          UNLOCK();
          if ((int)*plVar20 == 0) {
            (**(code **)*plVar21)(plVar21);
            LOCK();
            piVar1 = (int *)((longlong)plVar21 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar21 + 0x10))(plVar21);
            }
          }
        }
        *(int *)(local_660 + 0x48) = (int)local_660[0x48] + 1;
        param_2 = local_658;
        param_4 = local_640;
      }
LAB_1408afbd1:
      *(int *)((longlong)local_660 + 0x1e4) = *(int *)((longlong)local_660 + 0x1e4) + 1;
      *(int *)(local_660 + 0x3d) = (int)local_660[0x3d] + 1;
      param_1 = local_660;
    }
    if (param_4 != 0) goto LAB_1408afbea;
LAB_1408afbf8:
    FUN_1400021e4(&DAT_14c996420,&local_2f8);
    iVar17 = FUN_144a41c6c(param_2,&local_2f8);
    if (iVar17 == -1) {
      bVar29 = 0;
    }
    else {
      bVar29 = *(byte *)((longlong)param_2[9] + (longlong)iVar17) & 1;
    }
    if (local_2f8 != (undefined4 *)0x0) {
      FUN_1400020a8();
    }
    if (bVar29 == 0) {
      FUN_1400021e4(&DAT_14c993390,&local_2f8);
      iVar17 = FUN_144a41c6c(param_2,&local_2f8);
      if (iVar17 == -1) {
        bVar29 = 0;
      }
      else {
        bVar29 = *(byte *)((longlong)param_2[9] + (longlong)iVar17) & 1;
      }
      if (local_2f8 != (undefined4 *)0x0) {
        FUN_1400020a8();
      }
      if (bVar29 == 0) {
        FUN_1400021e4(&DAT_14c9964e8,&local_2f8);
        iVar17 = FUN_144a41c6c(param_2,&local_2f8);
        if (iVar17 == -1) {
          bVar29 = 0;
        }
        else {
          bVar29 = *(byte *)((longlong)param_2[9] + (longlong)iVar17) & 1;
        }
        if (local_2f8 != (undefined4 *)0x0) {
          FUN_1400020a8();
        }
        if (bVar29 != 0) {
          FUN_140340218(local_648,&local_2f8);
          plVar21 = local_660;
          if (param_1[0x36] == 0) {
            lVar32 = local_660[0x37];
            plVar20 = (longlong *)FUN_14001cc68(0xf8,0x10);
            plVar20[1] = (longlong)&DAT_100000001;
            *plVar20 = (longlong)&PTR_FUN_14be85c00;
            local_6b8 = local_658;
            local_6c0 = local_650;
            local_6c8 = &local_2f8;
            FUN_1497fc390(plVar20 + 2,lVar32 + 0x20,(int)plVar21[0x3b],(int)plVar21[0x3c]);
            if (plVar20 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar20 + 1) = (int)plVar20[1] + 1;
              UNLOCK();
              local_660[0xc] = (longlong)(plVar20 + 2);
              plVar21 = (longlong *)local_660[0xd];
              if (plVar20 == plVar21) goto LAB_1408b6312;
              local_660[0xd] = (longlong)plVar20;
              goto LAB_1408b5e52;
            }
            local_660[0xc] = 0x10;
            plVar21 = (longlong *)local_660[0xd];
            if (plVar21 == (longlong *)0x0) goto LAB_1408b6d15;
            local_660[0xd] = 0;
            goto LAB_1408b69d2;
          }
          iVar17 = *(int *)((longlong)local_660 + 0x1dc);
          lVar32 = *(longlong *)(param_1[0x36] + 0x1f8);
          plVar21 = (longlong *)FUN_14001cc68(0xf8,0x10);
          plVar21[1] = (longlong)&DAT_100000001;
          *plVar21 = (longlong)&PTR_FUN_14be85c00;
          local_6c8 = local_658;
          FUN_1497fb89a(plVar21 + 2,(longlong)iVar17 * 0x18 + lVar32,&local_2f8,local_650);
          if (plVar21 == (longlong *)0x0) {
            local_660[0xc] = 0x10;
            plVar20 = (longlong *)local_660[0xd];
            if (plVar20 != (longlong *)0x0) {
              local_660[0xd] = 0;
LAB_1408b6a4b:
              LOCK();
              plVar22 = plVar20 + 1;
              *(int *)plVar22 = (int)*plVar22 + -1;
              UNLOCK();
              if ((int)*plVar22 == 0) {
                (**(code **)*plVar20)(plVar20);
                LOCK();
                piVar1 = (int *)((longlong)plVar20 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar20 + 0x10))(plVar20);
                }
              }
              if (plVar21 != (longlong *)0x0) goto LAB_1408b6cea;
            }
          }
          else {
            LOCK();
            *(int *)(plVar21 + 1) = (int)plVar21[1] + 1;
            UNLOCK();
            local_660[0xc] = (longlong)(plVar21 + 2);
            plVar20 = (longlong *)local_660[0xd];
            if (plVar21 == plVar20) {
              LOCK();
              plVar20 = plVar21 + 1;
              *(int *)plVar20 = (int)*plVar20 + -1;
              UNLOCK();
              if ((int)*plVar20 == 0) {
                (**(code **)*plVar21)(plVar21);
                LOCK();
                piVar1 = (int *)((longlong)plVar21 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar21 + 0x10))(plVar21);
                }
              }
            }
            else {
              local_660[0xd] = (longlong)plVar21;
              if (plVar20 != (longlong *)0x0) goto LAB_1408b6a4b;
            }
LAB_1408b6cea:
            LOCK();
            plVar20 = plVar21 + 1;
            *(int *)plVar20 = (int)*plVar20 + -1;
            UNLOCK();
            if ((int)*plVar20 == 0) {
              (**(code **)*plVar21)(plVar21);
              LOCK();
              piVar1 = (int *)((longlong)plVar21 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar21 + 0x10))(plVar21);
              }
            }
          }
          *(int *)(local_660 + 0x48) = (int)local_660[0x48] + 1;
          goto LAB_1408b6d15;
        }
        FUN_1400021e4(&DAT_14c9933c8,&local_2f8);
        iVar17 = FUN_144a41c6c(param_2,&local_2f8);
        if (iVar17 == -1) {
          bVar29 = 0;
        }
        else {
          bVar29 = *(byte *)((longlong)param_2[9] + (longlong)iVar17) & 1;
        }
        if (local_2f8 != (undefined4 *)0x0) {
          FUN_1400020a8();
        }
        if (bVar29 == 0) goto LAB_1408b05e5;
        FUN_140340218(local_648,&local_568);
        if (param_1[0x36] == 0) {
          lVar32 = param_1[0x37];
          plVar21 = (longlong *)FUN_14001cc68(0xa0,0x10);
          plVar21[1] = (longlong)&DAT_100000001;
          *plVar21 = (longlong)&PTR_FUN_14be85c20;
          lVar33 = param_1[0x3b];
          lVar25 = param_1[0x3c];
          local_588 = (undefined4 *)CONCAT44(local_588._4_4_,0x3f800000);
          FUN_14190c374(&local_578,local_658);
          FUN_1400021e4(&DAT_14c9933c8,&local_558);
          FUN_14190c422(&local_548);
          ppuVar3 = local_650;
          uVar26 = 0;
          iVar17 = iStack_540 + -1;
          if (iStack_540 == 0) {
            iVar17 = 0;
          }
          if (0 < iVar17) {
            puVar23 = local_548;
            if (iStack_540 == 0) {
              puVar23 = (undefined4 *)&DAT_149dfb77a;
            }
            lVar31 = 0;
            uVar26 = 0;
            do {
              uVar5 = *(ushort *)((longlong)puVar23 + lVar31 * 2);
              uVar27 = ((uint)(0x19 < uVar5 - 0x61) * 0x20 + (uint)uVar5) - 0x20;
              uVar34 = (uint)(uVar26 >> 8) ^
                       *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar26 ^ uVar27) & 0xff) * 4);
              uVar26 = (ulonglong)
                       (uVar34 >> 8 ^
                       *(uint *)(&DAT_14c75d150 +
                                (ulonglong)(uVar34 & 0xff ^ uVar27 >> 8 & 0xff) * 4));
              lVar31 = lVar31 + 1;
            } while (iVar17 != (int)lVar31);
          }
          plVar20 = plVar21 + 2;
          iVar17 = FUN_140aad9fa(local_650,uVar26,&local_548);
          puVar23 = *ppuVar3 + (longlong)iVar17 * 10;
          if (puVar23 == (undefined4 *)0x0 || iVar17 == -1) {
            local_2f8 = (undefined4 *)0x0;
            uStack_2f0 = uStack_2f0 & 0xffffffff00000000;
          }
          else {
            local_2f8 = *(undefined4 **)(puVar23 + 4);
            uStack_2f0 = *(ulonglong *)(puVar23 + 6);
          }
          local_6c0 = &local_2f8;
          local_6c8 = &local_568;
          local_6b0 = (undefined4 **)CONCAT44(local_6b0._4_4_,0x3f800000);
          local_6b8 = &local_578;
          FUN_14190bfd0(plVar20,lVar32 + 0x20,(int)lVar33,(int)lVar25);
          plVar21[2] = (longlong)&PTR_FUN_14be85b70;
          plVar21[0x11] = 0;
          plVar21[0x12] = 0;
          FUN_140bfb5f8(plVar20,lVar32 + 0x20);
          if (local_548 != (undefined4 *)0x0) {
            FUN_1400020a8();
          }
          param_2 = local_658;
          param_1 = local_660;
          if (local_558 != (undefined4 *)0x0) {
            FUN_1400020a8();
          }
          plVar21[2] = (longlong)&PTR_FUN_14be85c38;
          FUN_14190c4a2(plVar21 + 0x13,param_2);
          if (plVar21 == (longlong *)0x0) {
            param_1[10] = 0x10;
            plVar20 = (longlong *)param_1[0xb];
joined_r0x0001408b64c2:
            if (plVar20 != (longlong *)0x0) {
              param_1[0xb] = 0;
              goto LAB_1408b5c1d;
            }
          }
          else {
            LOCK();
            *(int *)(plVar21 + 1) = (int)plVar21[1] + 1;
            UNLOCK();
            param_1[10] = (longlong)plVar20;
            plVar20 = (longlong *)param_1[0xb];
            if (plVar21 == plVar20) {
              LOCK();
              plVar20 = plVar21 + 1;
              *(int *)plVar20 = (int)*plVar20 + -1;
              iVar17 = (int)*plVar20;
              UNLOCK();
              goto joined_r0x0001408b6978;
            }
            param_1[0xb] = (longlong)plVar21;
joined_r0x0001408b5bec:
            if (plVar20 == (longlong *)0x0) goto LAB_1408b010e;
LAB_1408b5c1d:
            LOCK();
            plVar22 = plVar20 + 1;
            *(int *)plVar22 = (int)*plVar22 + -1;
            UNLOCK();
            if ((int)*plVar22 == 0) {
              (**(code **)*plVar20)(plVar20);
              LOCK();
              piVar1 = (int *)((longlong)plVar20 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar20 + 0x10))(plVar20);
              }
            }
            param_1 = local_660;
            param_2 = local_658;
            if (plVar21 != (longlong *)0x0) goto LAB_1408b010e;
          }
        }
        else {
          iVar17 = *(int *)((longlong)param_1 + 0x1dc);
          lVar32 = *(longlong *)(param_1[0x36] + 0x1f8);
          plVar21 = (longlong *)FUN_14001cc68(0xa0,0x10);
          plVar21[1] = (longlong)&DAT_100000001;
          *plVar21 = (longlong)&PTR_FUN_14be85c20;
          local_6c8 = local_658;
          FUN_1497fc770(plVar21 + 2,(longlong)iVar17 * 0x18 + lVar32,&local_568,local_650);
          param_1 = local_660;
          param_2 = local_658;
          if (plVar21 == (longlong *)0x0) {
            local_660[10] = 0x10;
            plVar20 = (longlong *)local_660[0xb];
            goto joined_r0x0001408b64c2;
          }
          LOCK();
          *(int *)(plVar21 + 1) = (int)plVar21[1] + 1;
          UNLOCK();
          local_660[10] = (longlong)(plVar21 + 2);
          plVar20 = (longlong *)local_660[0xb];
          if (plVar21 != plVar20) {
            local_660[0xb] = (longlong)plVar21;
            goto joined_r0x0001408b5bec;
          }
          LOCK();
          plVar20 = plVar21 + 1;
          *(int *)plVar20 = (int)*plVar20 + -1;
          iVar17 = (int)*plVar20;
          UNLOCK();
joined_r0x0001408b6978:
          if (iVar17 == 0) {
            (**(code **)*plVar21)(plVar21);
            LOCK();
            piVar1 = (int *)((longlong)plVar21 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar21 + 0x10))(plVar21);
            }
          }
LAB_1408b010e:
          LOCK();
          plVar20 = plVar21 + 1;
          *(int *)plVar20 = (int)*plVar20 + -1;
          UNLOCK();
          if ((int)*plVar20 == 0) {
            (**(code **)*plVar21)(plVar21);
            LOCK();
            piVar1 = (int *)((longlong)plVar21 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar21 + 0x10))(plVar21);
            }
          }
        }
        *(int *)((longlong)param_1 + 0x1e4) = *(int *)((longlong)param_1 + 0x1e4) + 1;
        *(int *)(param_1 + 0x3d) = (int)param_1[0x3d] + 1;
        puVar23 = local_568;
      }
      else {
        FUN_1403402f8(local_648,&local_5d8);
        if (param_1[0x36] == 0) {
          lVar32 = param_1[0x37];
          plVar21 = (longlong *)FUN_14001cc68(0x158,0x10);
          ppuVar3 = local_658;
          plVar21[1] = (longlong)&DAT_100000001;
          *plVar21 = (longlong)&PTR_FUN_14be85be0;
          local_61c = (undefined4)param_1[0x3b];
          local_640 = CONCAT44(local_640._4_4_,(int)param_1[0x3c]);
          plVar21[2] = (longlong)&PTR_FUN_14be85bf8;
          uVar27 = 0;
          local_5ec = 0;
          uVar15 = FUN_140e75a96(local_658);
          FUN_140e759b6(&local_5e8,ppuVar3);
          local_5f8 = 0x3f800000;
          FUN_14190b758(local_5f4,ppuVar3);
          local_604 = 0;
          FUN_14190b806(local_600,ppuVar3);
          local_610 = 0x3f800000;
          FUN_14190b8b4(local_60c,ppuVar3);
          FUN_14190b962(&local_2f8,local_650,ppuVar3);
          FUN_1400021e4(&DAT_14c9933a0,&local_568);
          FUN_14190bbbc(&local_558,ppuVar3,&local_568);
          ppuVar3 = local_650;
          iVar17 = (int)uStack_550 + -1;
          if ((int)uStack_550 == 0) {
            iVar17 = 0;
          }
          if (0 < iVar17) {
            puVar23 = local_558;
            if ((int)uStack_550 == 0) {
              puVar23 = (undefined4 *)&DAT_149dfb77a;
            }
            lVar33 = 0;
            uVar27 = 0;
            do {
              uVar5 = *(ushort *)((longlong)puVar23 + lVar33 * 2);
              uVar34 = ((uint)(0x19 < uVar5 - 0x61) * 0x20 + (uint)uVar5) - 0x20;
              uVar27 = uVar27 >> 8 ^
                       *(uint *)(&DAT_14c75d150 + (ulonglong)((uVar27 ^ uVar34) & 0xff) * 4);
              uVar27 = uVar27 >> 8 ^
                       *(uint *)(&DAT_14c75d150 +
                                (ulonglong)(uVar27 & 0xff ^ uVar34 >> 8 & 0xff) * 4);
              lVar33 = lVar33 + 1;
            } while (iVar17 != (int)lVar33);
          }
          iVar17 = FUN_140aad9fa(local_650,uVar27,&local_558);
          puVar23 = *ppuVar3 + (longlong)iVar17 * 10;
          if (puVar23 == (undefined4 *)0x0 || iVar17 == -1) {
            local_548 = (undefined4 *)0x0;
            iStack_540 = 0;
          }
          else {
            local_548 = *(undefined4 **)(puVar23 + 4);
            iStack_540 = puVar23[6];
            uStack_53c = puVar23[7];
          }
          FUN_1400021e4(&DAT_14c993398,&local_598);
          FUN_14190bc3c(&local_588);
          ppuVar3 = local_650;
          uVar26 = 0;
          iVar17 = local_580 + -1;
          if (local_580 == 0) {
            iVar17 = 0;
          }
          if (0 < iVar17) {
            puVar23 = local_588;
            if (local_580 == 0) {
              puVar23 = (undefined4 *)&DAT_149dfb77a;
            }
            lVar33 = 0;
            uVar26 = 0;
            do {
              uVar5 = *(ushort *)((longlong)puVar23 + lVar33 * 2);
              uVar27 = ((uint)(0x19 < uVar5 - 0x61) * 0x20 + (uint)uVar5) - 0x20;
              uVar34 = (uint)(uVar26 >> 8) ^
                       *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar26 ^ uVar27) & 0xff) * 4);
              uVar26 = (ulonglong)
                       (uVar34 >> 8 ^
                       *(uint *)(&DAT_14c75d150 +
                                (ulonglong)(uVar34 & 0xff ^ uVar27 >> 8 & 0xff) * 4));
              lVar33 = lVar33 + 1;
            } while (iVar17 != (int)lVar33);
          }
          iVar17 = FUN_140aad9fa(local_650,uVar26,&local_588);
          puVar23 = *ppuVar3 + (longlong)iVar17 * 10;
          if (puVar23 == (undefined4 *)0x0 || iVar17 == -1) {
            local_578 = (undefined4 *)0x0;
            uStack_570 = (ulonglong)uStack_570._4_4_ << 0x20;
          }
          else {
            local_578 = *(undefined4 **)(puVar23 + 4);
            uStack_570 = *(ulonglong *)(puVar23 + 6);
          }
          FUN_1400021e4(&DAT_14c993390,&local_5c8);
          FUN_14190bcbc(&local_5b8);
          ppuVar3 = local_650;
          uVar26 = 0;
          iVar17 = local_5b0 + -1;
          if (local_5b0 == 0) {
            iVar17 = 0;
          }
          if (0 < iVar17) {
            puVar23 = local_5b8;
            if (local_5b0 == 0) {
              puVar23 = (undefined4 *)&DAT_149dfb77a;
            }
            lVar33 = 0;
            uVar26 = 0;
            do {
              uVar5 = *(ushort *)((longlong)puVar23 + lVar33 * 2);
              uVar27 = ((uint)(0x19 < uVar5 - 0x61) * 0x20 + (uint)uVar5) - 0x20;
              uVar34 = (uint)(uVar26 >> 8) ^
                       *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar26 ^ uVar27) & 0xff) * 4);
              uVar26 = (ulonglong)
                       (uVar34 >> 8 ^
                       *(uint *)(&DAT_14c75d150 +
                                (ulonglong)(uVar34 & 0xff ^ uVar27 >> 8 & 0xff) * 4));
              lVar33 = lVar33 + 1;
            } while (iVar17 != (int)lVar33);
          }
          plVar20 = plVar21 + 2;
          iVar17 = FUN_140aad9fa(local_650,uVar26,&local_5b8);
          puVar23 = *ppuVar3 + (longlong)iVar17 * 10;
          if (puVar23 == (undefined4 *)0x0 || iVar17 == -1) {
            local_5a8 = (undefined4 *)0x0;
            uStack_5a0 = (ulonglong)uStack_5a0._4_4_ << 0x20;
          }
          else {
            local_5a8 = *(undefined4 **)(puVar23 + 4);
            uStack_5a0 = *(ulonglong *)(puVar23 + 6);
          }
          local_688 = &local_5e8;
          local_690 = local_5f4;
          local_698 = local_600;
          local_6a0 = local_60c;
          local_6a8 = &local_2f8;
          local_6b0 = &local_548;
          local_6b8 = &local_578;
          local_6c0 = &local_5a8;
          local_6c8 = &local_5d8;
          local_670 = 0x3f800000;
          local_678 = 1;
          local_680 = uVar15;
          FUN_1408e8d8e(plVar20,lVar32 + 0x20,local_61c,local_640 & 0xffffffff);
          if (local_5b8 != (undefined4 *)0x0) {
            FUN_1400020a8();
          }
          param_2 = local_658;
          if (local_5c8 != 0) {
            FUN_1400020a8();
          }
          if (local_588 != (undefined4 *)0x0) {
            FUN_1400020a8();
          }
          if (local_598 != (undefined4 *)0x0) {
            FUN_1400020a8();
          }
          if (local_558 != (undefined4 *)0x0) {
            FUN_1400020a8();
          }
          if (local_568 != (undefined4 *)0x0) {
            FUN_1400020a8();
          }
          plVar21[2] = (longlong)&PTR_FUN_14be85bf8;
          plVar21[0x26] = 0;
          plVar21[0x27] = 0;
          FUN_14190bd3c(plVar21 + 0x28,param_2);
          FUN_14190bdaa((longlong)plVar21 + 0x144,param_2);
          FUN_14190be18(plVar21 + 0x29,param_2);
          FUN_14190be86((longlong)plVar21 + 0x14c,param_2);
          FUN_14190bef4(plVar21 + 0x2a,param_2);
          FUN_14190bf62((longlong)plVar21 + 0x154,param_2);
          FUN_141287d8c(plVar20,lVar32 + 0x20);
          if (plVar21 == (longlong *)0x0) {
            local_660[0xe] = 0x10;
            plVar20 = (longlong *)local_660[0xf];
joined_r0x0001408b699e:
            param_1 = local_660;
            if (plVar20 != (longlong *)0x0) {
              local_660[0xf] = 0;
              goto LAB_1408b61d9;
            }
          }
          else {
            LOCK();
            *(int *)(plVar21 + 1) = (int)plVar21[1] + 1;
            UNLOCK();
            local_660[0xe] = (longlong)plVar20;
            plVar20 = (longlong *)local_660[0xf];
            if (plVar21 == plVar20) {
              LOCK();
              plVar20 = plVar21 + 1;
              *(int *)plVar20 = (int)*plVar20 + -1;
              iVar17 = (int)*plVar20;
              UNLOCK();
              param_1 = local_660;
              goto joined_r0x0001408b6cc2;
            }
            local_660[0xf] = (longlong)plVar21;
joined_r0x0001408b6185:
            param_1 = local_660;
            if (plVar20 == (longlong *)0x0) goto LAB_1408b05bd;
LAB_1408b61d9:
            LOCK();
            plVar22 = plVar20 + 1;
            *(int *)plVar22 = (int)*plVar22 + -1;
            UNLOCK();
            if ((int)*plVar22 == 0) {
              (**(code **)*plVar20)(plVar20);
              LOCK();
              piVar1 = (int *)((longlong)plVar20 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar20 + 0x10))(plVar20);
              }
            }
            param_1 = local_660;
            param_2 = local_658;
            if (plVar21 != (longlong *)0x0) goto LAB_1408b05bd;
          }
        }
        else {
          iVar17 = *(int *)((longlong)param_1 + 0x1dc);
          lVar32 = *(longlong *)(param_1[0x36] + 0x1f8);
          plVar21 = (longlong *)FUN_14001cc68(0x158,0x10);
          plVar21[1] = (longlong)&DAT_100000001;
          *plVar21 = (longlong)&PTR_FUN_14be85be0;
          local_6c8 = local_658;
          FUN_1497fb2da(plVar21 + 2,(longlong)iVar17 * 0x18 + lVar32,&local_5d8,local_650);
          param_2 = local_658;
          if (plVar21 == (longlong *)0x0) {
            local_660[0xe] = 0x10;
            plVar20 = (longlong *)local_660[0xf];
            goto joined_r0x0001408b699e;
          }
          LOCK();
          *(int *)(plVar21 + 1) = (int)plVar21[1] + 1;
          UNLOCK();
          local_660[0xe] = (longlong)(plVar21 + 2);
          plVar20 = (longlong *)local_660[0xf];
          if (plVar21 != plVar20) {
            local_660[0xf] = (longlong)plVar21;
            goto joined_r0x0001408b6185;
          }
          LOCK();
          plVar20 = plVar21 + 1;
          *(int *)plVar20 = (int)*plVar20 + -1;
          iVar17 = (int)*plVar20;
          UNLOCK();
          param_1 = local_660;
joined_r0x0001408b6cc2:
          local_660 = param_1;
          if (iVar17 == 0) {
            (**(code **)*plVar21)(plVar21);
            LOCK();
            piVar1 = (int *)((longlong)plVar21 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar21 + 0x10))(plVar21);
            }
          }
LAB_1408b05bd:
          LOCK();
          plVar20 = plVar21 + 1;
          *(int *)plVar20 = (int)*plVar20 + -1;
          UNLOCK();
          if ((int)*plVar20 == 0) {
            (**(code **)*plVar21)(plVar21);
            LOCK();
            piVar1 = (int *)((longlong)plVar21 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar21 + 0x10))(plVar21);
            }
          }
        }
        *(int *)((longlong)param_1 + 0x1e4) = *(int *)((longlong)param_1 + 0x1e4) + 1;
        *(int *)(param_1 + 0x3d) = (int)param_1[0x3d] + 1;
        puVar23 = local_5d8;
      }
      if (puVar23 != (undefined4 *)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      FUN_1403402f8(local_648,&local_2f8);
      plVar21 = local_660;
      if (param_1[0x36] == 0) {
        lVar32 = local_660[0x37];
        plVar20 = (longlong *)FUN_14001cc68(0x290,0x10);
        plVar20[1] = (longlong)&DAT_100000001;
        *plVar20 = (longlong)&PTR_LAB_14be85bc0;
        local_6b8 = local_658;
        local_6c0 = local_650;
        local_6c8 = &local_2f8;
        FUN_1497faab6(plVar20 + 2,lVar32 + 0x20,(int)plVar21[0x3b],(int)plVar21[0x3c]);
        if (plVar20 == (longlong *)0x0) {
          local_660[0x10] = 0x10;
          goto LAB_1408b68e8;
        }
        LOCK();
        *(int *)(plVar20 + 1) = (int)plVar20[1] + 1;
        UNLOCK();
        local_660[0x10] = (longlong)(plVar20 + 2);
LAB_1408b5e33:
        plVar21 = (longlong *)local_660[0x11];
        if (plVar20 == plVar21) {
LAB_1408b6312:
          LOCK();
          plVar21 = plVar20 + 1;
          *(int *)plVar21 = (int)*plVar21 + -1;
          UNLOCK();
          if ((int)*plVar21 == 0) {
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
        else {
          local_660[0x11] = (longlong)plVar20;
LAB_1408b5e52:
          if (plVar21 != (longlong *)0x0) goto LAB_1408b69d2;
        }
LAB_1408b69f8:
        LOCK();
        plVar21 = plVar20 + 1;
        *(int *)plVar21 = (int)*plVar21 + -1;
        UNLOCK();
        if ((int)*plVar21 == 0) {
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
      else {
        iVar17 = *(int *)((longlong)local_660 + 0x1dc);
        lVar32 = *(longlong *)(param_1[0x36] + 0x1f8);
        plVar20 = (longlong *)FUN_14001cc68(0x290,0x10);
        plVar20[1] = (longlong)&DAT_100000001;
        *plVar20 = (longlong)&PTR_LAB_14be85bc0;
        local_6c8 = local_658;
        FUN_1497f951e(plVar20 + 2,(longlong)iVar17 * 0x18 + lVar32,&local_2f8,local_650);
        if (plVar20 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar20 + 1) = (int)plVar20[1] + 1;
          UNLOCK();
          local_660[0x10] = (longlong)(plVar20 + 2);
          goto LAB_1408b5e33;
        }
        local_660[0x10] = 0x10;
LAB_1408b68e8:
        plVar21 = (longlong *)local_660[0x11];
        if (plVar21 != (longlong *)0x0) {
          local_660[0x11] = 0;
LAB_1408b69d2:
          LOCK();
          plVar22 = plVar21 + 1;
          *(int *)plVar22 = (int)*plVar22 + -1;
          UNLOCK();
          if ((int)*plVar22 == 0) {
            (**(code **)*plVar21)(plVar21);
            LOCK();
            piVar1 = (int *)((longlong)plVar21 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar21 + 0x10))(plVar21);
            }
          }
          if (plVar20 != (longlong *)0x0) goto LAB_1408b69f8;
        }
      }
LAB_1408b6d15:
      *(int *)((longlong)local_660 + 0x1e4) = *(int *)((longlong)local_660 + 0x1e4) + 1;
      *(int *)(local_660 + 0x3d) = (int)local_660[0x3d] + 1;
      param_1 = local_660;
      param_2 = local_658;
      if (local_2f8 != (undefined4 *)0x0) {
        FUN_1400020a8();
        param_1 = local_660;
        param_2 = local_658;
      }
    }
  }
  else {
    if (param_1[0x36] == 0) {
      lVar32 = local_660[0x37];
      plVar22 = (longlong *)FUN_14001cc68(0x268,0x10);
      plVar22[1] = (longlong)&DAT_100000001;
      *plVar22 = (longlong)&PTR_FUN_14be85b00;
      plVar20 = plVar22 + 2;
      local_6b0 = local_658;
      local_6b8 = local_650;
      local_6c8 = local_648;
      local_6a8 = (undefined4 **)CONCAT71(local_6a8._1_7_,1);
      local_6c0 = (undefined4 **)(param_4 + 0x168);
      FUN_146e8bd08(plVar20,lVar32 + 0x20,(int)plVar21[0x3b],(int)plVar21[0x3c]);
    }
    else {
      iVar17 = *(int *)((longlong)local_660 + 0x1dc);
      lVar32 = *(longlong *)(param_1[0x36] + 0x1f8);
      plVar22 = (longlong *)FUN_14001cc68(0x268,0x10);
      plVar22[1] = (longlong)&DAT_100000001;
      *plVar22 = (longlong)&PTR_FUN_14be85b00;
      plVar20 = plVar22 + 2;
      local_6c0 = local_658;
      local_6c8 = local_650;
      local_6b8 = (undefined4 **)CONCAT71(local_6b8._1_7_,1);
      FUN_146e89b74(plVar20,(longlong)iVar17 * 0x18 + lVar32,local_648,
                    (undefined4 **)(param_4 + 0x168));
    }
    if (plVar22 == (longlong *)0x0) {
      local_660[6] = (longlong)plVar20;
      plVar21 = (longlong *)local_660[7];
      if (plVar21 != (longlong *)0x0) {
        local_660[7] = 0;
LAB_1408b6939:
        LOCK();
        plVar20 = plVar21 + 1;
        *(int *)plVar20 = (int)*plVar20 + -1;
        UNLOCK();
        if ((int)*plVar20 == 0) {
          (**(code **)*plVar21)(plVar21);
          LOCK();
          piVar1 = (int *)((longlong)plVar21 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar21 + 0x10))(plVar21);
          }
        }
        if (plVar22 != (longlong *)0x0) goto LAB_1408b6b44;
      }
    }
    else {
      LOCK();
      *(int *)(plVar22 + 1) = (int)plVar22[1] + 1;
      UNLOCK();
      local_660[6] = (longlong)plVar20;
      plVar21 = (longlong *)local_660[7];
      if (plVar22 == plVar21) {
        LOCK();
        plVar21 = plVar22 + 1;
        *(int *)plVar21 = (int)*plVar21 + -1;
        UNLOCK();
        if ((int)*plVar21 == 0) {
          (**(code **)*plVar22)(plVar22);
          LOCK();
          piVar1 = (int *)((longlong)plVar22 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar22 + 0x10))(plVar22);
          }
        }
      }
      else {
        local_660[7] = (longlong)plVar22;
        if (plVar21 != (longlong *)0x0) goto LAB_1408b6939;
      }
LAB_1408b6b44:
      LOCK();
      plVar21 = plVar22 + 1;
      *(int *)plVar21 = (int)*plVar21 + -1;
      UNLOCK();
      if ((int)*plVar21 == 0) {
        (**(code **)*plVar22)(plVar22);
        LOCK();
        piVar1 = (int *)((longlong)plVar22 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar22 + 0x10))(plVar22);
        }
      }
    }
    *(int *)((longlong)local_660 + 0x1e4) = *(int *)((longlong)local_660 + 0x1e4) + 1;
    *(int *)(local_660 + 0x3d) = (int)local_660[0x3d] + 1;
    param_1 = local_660;
    param_2 = local_658;
    param_4 = local_640;
LAB_1408afbea:
    if (*(int *)(param_4 + 0x150) == 0) goto LAB_1408afbf8;
    cVar16 = FUN_1497f30b0(param_2);
    plVar21 = local_660;
    if (cVar16 != '\0') {
      ppuVar3 = (undefined4 **)(local_640 + 0x168);
      if (local_660[0x36] == 0) {
        lVar32 = local_660[0x37];
        plVar20 = (longlong *)FUN_14001cc68(0x450,0x10);
        plVar20[1] = (longlong)&DAT_100000001;
        *plVar20 = (longlong)&PTR_FUN_14be85b80;
        local_6b0 = local_658;
        local_6b8 = local_650;
        local_6c8 = local_648;
        local_6c0 = ppuVar3;
        FUN_1497f886e(plVar20 + 2,lVar32 + 0x20,(int)plVar21[0x3b],(int)plVar21[0x3c]);
        if (plVar20 == (longlong *)0x0) {
          local_660[8] = 0x10;
          plVar21 = (longlong *)local_660[9];
          if (plVar21 != (longlong *)0x0) {
            local_660[9] = 0;
LAB_1408b6f71:
            LOCK();
            plVar22 = plVar21 + 1;
            *(int *)plVar22 = (int)*plVar22 + -1;
            UNLOCK();
            if ((int)*plVar22 == 0) {
              (**(code **)*plVar21)(plVar21);
              LOCK();
              piVar1 = (int *)((longlong)plVar21 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar21 + 0x10))(plVar21);
              }
            }
            if (plVar20 != (longlong *)0x0) goto LAB_1408b7002;
          }
        }
        else {
          LOCK();
          *(int *)(plVar20 + 1) = (int)plVar20[1] + 1;
          UNLOCK();
          local_660[8] = (longlong)(plVar20 + 2);
          plVar21 = (longlong *)local_660[9];
          if (plVar20 == plVar21) {
            LOCK();
            plVar21 = plVar20 + 1;
            *(int *)plVar21 = (int)*plVar21 + -1;
            UNLOCK();
            if ((int)*plVar21 == 0) {
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
          else {
            local_660[9] = (longlong)plVar20;
            if (plVar21 != (longlong *)0x0) goto LAB_1408b6f71;
          }
LAB_1408b7002:
          LOCK();
          plVar21 = plVar20 + 1;
          *(int *)plVar21 = (int)*plVar21 + -1;
          UNLOCK();
          if ((int)*plVar21 == 0) {
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
      }
      else {
        iVar17 = *(int *)((longlong)local_660 + 0x1dc);
        lVar32 = *(longlong *)(local_660[0x36] + 0x1f8);
        plVar21 = (longlong *)FUN_14001cc68(0x450,0x10);
        plVar21[1] = (longlong)&DAT_100000001;
        *plVar21 = (longlong)&PTR_FUN_14be85b80;
        local_6c0 = local_658;
        local_6c8 = local_650;
        FUN_1497f7170(plVar21 + 2,(longlong)iVar17 * 0x18 + lVar32,local_648,ppuVar3);
        if (plVar21 == (longlong *)0x0) {
          local_660[8] = 0x10;
          plVar20 = (longlong *)local_660[9];
          if (plVar20 != (longlong *)0x0) {
            local_660[9] = 0;
LAB_1408b6fc1:
            LOCK();
            plVar22 = plVar20 + 1;
            *(int *)plVar22 = (int)*plVar22 + -1;
            UNLOCK();
            if ((int)*plVar22 == 0) {
              (**(code **)*plVar20)(plVar20);
              LOCK();
              piVar1 = (int *)((longlong)plVar20 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar20 + 0x10))(plVar20);
              }
            }
            if (plVar21 != (longlong *)0x0) goto LAB_1408b703e;
          }
        }
        else {
          LOCK();
          *(int *)(plVar21 + 1) = (int)plVar21[1] + 1;
          UNLOCK();
          local_660[8] = (longlong)(plVar21 + 2);
          plVar20 = (longlong *)local_660[9];
          if (plVar21 == plVar20) {
            LOCK();
            plVar20 = plVar21 + 1;
            *(int *)plVar20 = (int)*plVar20 + -1;
            UNLOCK();
            if ((int)*plVar20 == 0) {
              (**(code **)*plVar21)(plVar21);
              LOCK();
              piVar1 = (int *)((longlong)plVar21 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar21 + 0x10))(plVar21);
              }
            }
          }
          else {
            local_660[9] = (longlong)plVar21;
            if (plVar20 != (longlong *)0x0) goto LAB_1408b6fc1;
          }
LAB_1408b703e:
          LOCK();
          plVar20 = plVar21 + 1;
          *(int *)plVar20 = (int)*plVar20 + -1;
          UNLOCK();
          if ((int)*plVar20 == 0) {
            (**(code **)*plVar21)(plVar21);
            LOCK();
            piVar1 = (int *)((longlong)plVar21 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar21 + 0x10))(plVar21);
            }
          }
        }
        *(int *)(local_660 + 0x48) = (int)local_660[0x48] + 1;
      }
      *(int *)((longlong)local_660 + 0x1e4) = *(int *)((longlong)local_660 + 0x1e4) + 1;
      *(int *)(local_660 + 0x3d) = (int)local_660[0x3d] + 2;
    }
    uVar26 = local_640;
    param_2 = local_658;
    param_1 = local_660;
    if ((*(int *)(local_640 + 0x150) == 0) ||
       (cVar16 = FUN_1497f312e(local_658), plVar21 = local_660, cVar16 == '\0')) goto LAB_1408afbf8;
    if (param_1[0x36] == 0) {
      lVar32 = local_660[0x37];
      plVar22 = (longlong *)FUN_14001cc68(0x370,0x10);
      plVar22[1] = (longlong)&DAT_100000001;
      *plVar22 = (longlong)&PTR_FUN_14be85ba0;
      plVar20 = plVar22 + 2;
      local_6b0 = local_658;
      local_6b8 = local_650;
      local_6c8 = local_648;
      local_6c0 = (undefined4 **)(uVar26 + 0x168);
      FUN_146e4b830(plVar20,lVar32 + 0x20,(int)plVar21[0x3b],(int)plVar21[0x3c]);
    }
    else {
      iVar17 = *(int *)((longlong)local_660 + 0x1dc);
      lVar32 = *(longlong *)(param_1[0x36] + 0x1f8);
      plVar22 = (longlong *)FUN_14001cc68(0x370,0x10);
      plVar22[1] = (longlong)&DAT_100000001;
      *plVar22 = (longlong)&PTR_FUN_14be85ba0;
      plVar20 = plVar22 + 2;
      local_6c0 = local_658;
      local_6c8 = local_650;
      FUN_146e48c02(plVar20,(longlong)iVar17 * 0x18 + lVar32,local_648,
                    (undefined4 **)(uVar26 + 0x168));
    }
    if (plVar22 == (longlong *)0x0) {
      local_660[0x12] = (longlong)plVar20;
      plVar21 = (longlong *)local_660[0x13];
      if (plVar21 != (longlong *)0x0) {
        local_660[0x13] = 0;
LAB_1408b6c83:
        LOCK();
        plVar20 = plVar21 + 1;
        *(int *)plVar20 = (int)*plVar20 + -1;
        UNLOCK();
        if ((int)*plVar20 == 0) {
          (**(code **)*plVar21)(plVar21);
          LOCK();
          piVar1 = (int *)((longlong)plVar21 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar21 + 0x10))(plVar21);
          }
        }
        if (plVar22 != (longlong *)0x0) goto LAB_1408b6e5a;
      }
    }
    else {
      LOCK();
      *(int *)(plVar22 + 1) = (int)plVar22[1] + 1;
      UNLOCK();
      local_660[0x12] = (longlong)plVar20;
      plVar21 = (longlong *)local_660[0x13];
      if (plVar22 == plVar21) {
        LOCK();
        plVar21 = plVar22 + 1;
        *(int *)plVar21 = (int)*plVar21 + -1;
        UNLOCK();
        if ((int)*plVar21 == 0) {
          (**(code **)*plVar22)(plVar22);
          LOCK();
          piVar1 = (int *)((longlong)plVar22 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar22 + 0x10))(plVar22);
          }
        }
      }
      else {
        local_660[0x13] = (longlong)plVar22;
        if (plVar21 != (longlong *)0x0) goto LAB_1408b6c83;
      }
LAB_1408b6e5a:
      LOCK();
      plVar21 = plVar22 + 1;
      *(int *)plVar21 = (int)*plVar21 + -1;
      UNLOCK();
      if ((int)*plVar21 == 0) {
        (**(code **)*plVar22)(plVar22);
        LOCK();
        piVar1 = (int *)((longlong)plVar22 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar22 + 0x10))(plVar22);
        }
      }
    }
    *(int *)((longlong)local_660 + 0x1e4) = *(int *)((longlong)local_660 + 0x1e4) + 1;
    *(int *)(local_660 + 0x3d) = (int)local_660[0x3d] + 1;
    param_1 = local_660;
    param_2 = local_658;
  }
LAB_1408b05e5:
  FUN_1400021e4(&DAT_14cc26f80,&local_2f8);
  iVar17 = FUN_144a41c6c(param_2,&local_2f8);
  if (iVar17 == -1) {
    bVar29 = 0;
  }
  else {
    bVar29 = *(byte *)((longlong)param_2[9] + (longlong)iVar17) & 1;
  }
  if (local_2f8 != (undefined4 *)0x0) {
    FUN_1400020a8();
  }
  plVar21 = local_660;
  if (bVar29 == 0) {
    FUN_1400021e4(&DAT_14c993d80,&local_2f8);
    iVar17 = FUN_144a41c6c(param_2,&local_2f8);
    if (iVar17 == -1) {
      bVar29 = 0;
    }
    else {
      bVar29 = *(byte *)((longlong)param_2[9] + (longlong)iVar17) & 1;
    }
    if (local_2f8 != (undefined4 *)0x0) {
      FUN_1400020a8();
    }
    if (bVar29 != 0) {
      if (param_1[0x36] == 0) {
        lVar32 = param_1[0x37];
        plVar22 = (longlong *)FUN_14001cc68(0xb0,0x10);
        plVar22[1] = (longlong)&DAT_100000001;
        *plVar22 = (longlong)&PTR_FUN_14be85c70;
        lVar33 = param_1[0x3b];
        lVar25 = param_1[0x3c];
        local_578 = (undefined4 *)CONCAT44(local_578._4_4_,0x3f800000);
        FUN_14190c52e(&local_568,local_658);
        FUN_1400021e4(&DAT_14c993d80,&local_558);
        FUN_14190c5dc(&local_548);
        ppuVar3 = local_650;
        uVar26 = 0;
        iVar17 = iStack_540 + -1;
        if (iStack_540 == 0) {
          iVar17 = 0;
        }
        if (0 < iVar17) {
          puVar23 = local_548;
          if (iStack_540 == 0) {
            puVar23 = (undefined4 *)&DAT_149dfb77a;
          }
          lVar31 = 0;
          uVar26 = 0;
          do {
            uVar5 = *(ushort *)((longlong)puVar23 + lVar31 * 2);
            uVar27 = ((uint)(0x19 < uVar5 - 0x61) * 0x20 + (uint)uVar5) - 0x20;
            uVar34 = (uint)(uVar26 >> 8) ^
                     *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar26 ^ uVar27) & 0xff) * 4);
            uVar26 = (ulonglong)
                     (uVar34 >> 8 ^
                     *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar34 & 0xff ^ uVar27 >> 8 & 0xff) * 4)
                     );
            lVar31 = lVar31 + 1;
          } while (iVar17 != (int)lVar31);
        }
        plVar20 = plVar22 + 2;
        iVar17 = FUN_140aad9fa(local_650,uVar26,&local_548);
        puVar23 = *ppuVar3 + (longlong)iVar17 * 10;
        if (puVar23 == (undefined4 *)0x0 || iVar17 == -1) {
          local_2f8 = (undefined4 *)0x0;
          uStack_2f0 = uStack_2f0 & 0xffffffff00000000;
        }
        else {
          local_2f8 = *(undefined4 **)(puVar23 + 4);
          uStack_2f0 = *(ulonglong *)(puVar23 + 6);
        }
        local_6c0 = &local_2f8;
        local_6c8 = local_648;
        local_6a8 = (undefined4 **)CONCAT44(local_6a8._4_4_,0x3f800000);
        local_6b0 = (undefined4 **)CONCAT71(local_6b0._1_7_,1);
        local_6b8 = &local_568;
        FUN_1405c237e(plVar20,lVar32 + 0x20,(int)lVar33,(int)lVar25);
        plVar22[2] = (longlong)&PTR_FUN_14be85c90;
        plVar22[0x13] = 0;
        plVar22[0x14] = 0;
        FUN_14108741c(plVar20,lVar32 + 0x20);
        if (local_548 != (undefined4 *)0x0) {
          FUN_1400020a8();
        }
        param_2 = local_658;
        plVar21 = local_660;
        if (local_558 != (undefined4 *)0x0) {
          FUN_1400020a8();
        }
        plVar22[2] = (longlong)&PTR_FUN_14be85c88;
        FUN_14190c65c(plVar22 + 0x15,param_2);
        if (plVar22 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar22 + 1) = (int)plVar22[1] + 1;
          UNLOCK();
          plVar21[0x14] = (longlong)plVar20;
          plVar20 = (longlong *)plVar21[0x15];
          if (plVar22 == plVar20) {
            LOCK();
            plVar20 = plVar22 + 1;
            *(int *)plVar20 = (int)*plVar20 + -1;
            iVar17 = (int)*plVar20;
            UNLOCK();
            goto joined_r0x0001408b5f35;
          }
          plVar21[0x15] = (longlong)plVar22;
joined_r0x0001408b5f16:
          if (plVar20 != (longlong *)0x0) goto LAB_1408b60a1;
          goto LAB_1408b08d9;
        }
        plVar21[0x14] = 0x10;
        plVar20 = (longlong *)plVar21[0x15];
      }
      else {
        iVar17 = *(int *)((longlong)param_1 + 0x1dc);
        lVar32 = *(longlong *)(param_1[0x36] + 0x1f8);
        plVar22 = (longlong *)FUN_14001cc68(0xb0,0x10);
        plVar22[1] = (longlong)&DAT_100000001;
        *plVar22 = (longlong)&PTR_FUN_14be85c70;
        local_6c8 = local_658;
        FUN_1497fceee(plVar22 + 2,(longlong)iVar17 * 0x18 + lVar32,local_648,local_650);
        plVar21 = local_660;
        param_2 = local_658;
        if (plVar22 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar22 + 1) = (int)plVar22[1] + 1;
          UNLOCK();
          local_660[0x14] = (longlong)(plVar22 + 2);
          plVar20 = (longlong *)local_660[0x15];
          if (plVar22 == plVar20) goto LAB_1408b5f21;
          local_660[0x15] = (longlong)plVar22;
          goto joined_r0x0001408b5f16;
        }
        local_660[0x14] = 0x10;
        plVar20 = (longlong *)local_660[0x15];
      }
      if (plVar20 != (longlong *)0x0) {
        plVar21[0x15] = 0;
LAB_1408b60a1:
        LOCK();
        plVar21 = plVar20 + 1;
        *(int *)plVar21 = (int)*plVar21 + -1;
        UNLOCK();
        if ((int)*plVar21 == 0) {
          (**(code **)*plVar20)(plVar20);
          LOCK();
          piVar1 = (int *)((longlong)plVar20 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar20 + 0x10))(plVar20);
          }
        }
        plVar21 = local_660;
        param_2 = local_658;
        if (plVar22 != (longlong *)0x0) goto LAB_1408b08d9;
      }
      goto LAB_1408b08e3;
    }
  }
  else {
    if (param_1[0x36] == 0) {
      lVar32 = local_660[0x37];
      plVar22 = (longlong *)FUN_14001cc68(0xb0,0x10);
      plVar22[1] = (longlong)&DAT_100000001;
      *plVar22 = (longlong)&PTR_FUN_14be85c40;
      plVar20 = plVar22 + 2;
      local_6b8 = local_658;
      local_6c0 = local_650;
      local_6c8 = local_648;
      FUN_1497fcd2e(plVar20,lVar32 + 0x20,(int)plVar21[0x3b],(int)plVar21[0x3c]);
    }
    else {
      iVar17 = *(int *)((longlong)local_660 + 0x1dc);
      lVar32 = *(longlong *)(param_1[0x36] + 0x1f8);
      plVar22 = (longlong *)FUN_14001cc68(0xb0,0x10);
      plVar22[1] = (longlong)&DAT_100000001;
      *plVar22 = (longlong)&PTR_FUN_14be85c40;
      plVar20 = plVar22 + 2;
      local_6c8 = local_658;
      FUN_1497fc92e(plVar20,(longlong)iVar17 * 0x18 + lVar32,local_648,local_650);
    }
    plVar21 = local_660;
    param_2 = local_658;
    if (plVar22 == (longlong *)0x0) {
      local_660[0x16] = (longlong)plVar20;
      plVar20 = (longlong *)local_660[0x17];
      if (plVar20 != (longlong *)0x0) {
        local_660[0x17] = 0;
        goto LAB_1408b60a1;
      }
    }
    else {
      LOCK();
      *(int *)(plVar22 + 1) = (int)plVar22[1] + 1;
      UNLOCK();
      local_660[0x16] = (longlong)plVar20;
      plVar20 = (longlong *)local_660[0x17];
      if (plVar22 != plVar20) {
        local_660[0x17] = (longlong)plVar22;
        goto joined_r0x0001408b5f16;
      }
LAB_1408b5f21:
      LOCK();
      plVar21 = plVar22 + 1;
      *(int *)plVar21 = (int)*plVar21 + -1;
      iVar17 = (int)*plVar21;
      UNLOCK();
      plVar21 = local_660;
      param_2 = local_658;
joined_r0x0001408b5f35:
      if (iVar17 == 0) {
        (**(code **)*plVar22)(plVar22);
        LOCK();
        piVar1 = (int *)((longlong)plVar22 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar22 + 0x10))(plVar22);
        }
      }
LAB_1408b08d9:
      LOCK();
      plVar20 = plVar22 + 1;
      *(int *)plVar20 = (int)*plVar20 + -1;
      UNLOCK();
      if ((int)*plVar20 == 0) {
        (**(code **)*plVar22)(plVar22);
        LOCK();
        piVar1 = (int *)((longlong)plVar22 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar22 + 0x10))(plVar22);
        }
      }
    }
LAB_1408b08e3:
    *(int *)((longlong)plVar21 + 0x1e4) = *(int *)((longlong)plVar21 + 0x1e4) + 1;
    *(int *)(plVar21 + 0x3d) = (int)plVar21[0x3d] + 1;
  }
  FUN_1400021e4(&DAT_14c9941fc,&local_2f8);
  iVar17 = FUN_144a41c6c(param_2,&local_2f8);
  if (iVar17 == -1) {
    bVar29 = 0;
  }
  else {
    bVar29 = *(byte *)((longlong)param_2[9] + (longlong)iVar17) & 1;
  }
  if (local_2f8 != (undefined4 *)0x0) {
    FUN_1400020a8();
  }
  plVar21 = local_660;
  if (bVar29 != 0) {
    if (local_660[0x36] == 0) {
      lVar32 = local_660[0x37];
      plVar20 = (longlong *)FUN_14001cc68(0xb0,0x10);
      ppuVar3 = local_658;
      plVar20[1] = (longlong)&DAT_100000001;
      *plVar20 = (longlong)&PTR_FUN_14be85ca0;
      lVar33 = plVar21[0x3b];
      lVar25 = plVar21[0x3c];
      local_5b8 = (undefined4 *)CONCAT44(local_5b8._4_4_,0x3f800000);
      FUN_14190c6e8(&local_598,local_658);
      local_5c8 = CONCAT44(local_5c8._4_4_,0x3f800000);
      FUN_14190c796(&local_5a8,ppuVar3);
      FUN_1400021e4(&DAT_14c994204,&local_558);
      FUN_14190c844(&local_548);
      ppuVar3 = local_650;
      uVar26 = 0;
      iVar17 = iStack_540 + -1;
      if (iStack_540 == 0) {
        iVar17 = 0;
      }
      if (0 < iVar17) {
        puVar23 = local_548;
        if (iStack_540 == 0) {
          puVar23 = (undefined4 *)&DAT_149dfb77a;
        }
        lVar31 = 0;
        uVar26 = 0;
        do {
          uVar5 = *(ushort *)((longlong)puVar23 + lVar31 * 2);
          uVar27 = ((uint)(0x19 < uVar5 - 0x61) * 0x20 + (uint)uVar5) - 0x20;
          uVar34 = (uint)(uVar26 >> 8) ^
                   *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar26 ^ uVar27) & 0xff) * 4);
          uVar26 = (ulonglong)
                   (uVar34 >> 8 ^
                   *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar34 & 0xff ^ uVar27 >> 8 & 0xff) * 4));
          lVar31 = lVar31 + 1;
        } while (iVar17 != (int)lVar31);
      }
      iVar17 = FUN_140aad9fa(local_650,uVar26,&local_548);
      puVar23 = *ppuVar3 + (longlong)iVar17 * 10;
      if (puVar23 == (undefined4 *)0x0 || iVar17 == -1) {
        local_2f8 = (undefined4 *)0x0;
        uStack_2f0 = uStack_2f0 & 0xffffffff00000000;
      }
      else {
        local_2f8 = *(undefined4 **)(puVar23 + 4);
        uStack_2f0 = *(ulonglong *)(puVar23 + 6);
      }
      FUN_1400021e4(&DAT_14c9941fc,&local_588);
      FUN_14190c8c4(&local_578);
      uVar26 = 0;
      iVar17 = (uint)uStack_570 + -1;
      if ((uint)uStack_570 == 0) {
        iVar17 = 0;
      }
      if (0 < iVar17) {
        puVar23 = local_578;
        if ((uint)uStack_570 == 0) {
          puVar23 = (undefined4 *)&DAT_149dfb77a;
        }
        lVar31 = 0;
        uVar26 = 0;
        do {
          uVar5 = *(ushort *)((longlong)puVar23 + lVar31 * 2);
          uVar27 = ((uint)(0x19 < uVar5 - 0x61) * 0x20 + (uint)uVar5) - 0x20;
          uVar34 = (uint)(uVar26 >> 8) ^
                   *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar26 ^ uVar27) & 0xff) * 4);
          uVar26 = (ulonglong)
                   (uVar34 >> 8 ^
                   *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar34 & 0xff ^ uVar27 >> 8 & 0xff) * 4));
          lVar31 = lVar31 + 1;
        } while (iVar17 != (int)lVar31);
      }
      iVar17 = FUN_140aad9fa(ppuVar3,uVar26,&local_578);
      puVar23 = *ppuVar3 + (longlong)iVar17 * 10;
      if (puVar23 == (undefined4 *)0x0 || iVar17 == -1) {
        local_568 = (undefined4 *)0x0;
        uStack_560 = (ulonglong)uStack_560._4_4_ << 0x20;
      }
      else {
        local_568 = *(undefined4 **)(puVar23 + 4);
        uStack_560 = *(ulonglong *)(puVar23 + 6);
      }
      local_6b8 = &local_2f8;
      local_6a8 = &local_598;
      local_6b0 = &local_5a8;
      local_698 = (undefined1 *)CONCAT44(local_698._4_4_,param_10);
      local_6c0 = &local_568;
      local_6c8 = local_628;
      local_6a0 = (undefined1 *)CONCAT44(local_6a0._4_4_,0x3f800000);
      FUN_140fb589e(plVar20 + 2,lVar32 + 0x20,(int)lVar33,(int)lVar25);
      if (local_578 != (undefined4 *)0x0) {
        FUN_1400020a8();
      }
      param_2 = local_658;
      plVar21 = local_660;
      if (local_588 != (undefined4 *)0x0) {
        FUN_1400020a8();
      }
      if (local_548 != (undefined4 *)0x0) {
        FUN_1400020a8();
      }
      if (local_558 != (undefined4 *)0x0) {
        FUN_1400020a8();
      }
      plVar20[2] = (longlong)&PTR_FUN_14be85cb8;
      FUN_14190c944(plVar20 + 0x15,param_2);
      FUN_14190c9b2((longlong)plVar20 + 0xac,param_2);
      if (plVar20 == (longlong *)0x0) {
        plVar21[0x18] = 0x10;
        plVar22 = (longlong *)plVar21[0x19];
        if (plVar22 != (longlong *)0x0) {
          plVar21[0x19] = 0;
LAB_1408b572a:
          LOCK();
          plVar21 = plVar22 + 1;
          *(int *)plVar21 = (int)*plVar21 + -1;
          UNLOCK();
          if ((int)*plVar21 == 0) {
            (**(code **)*plVar22)(plVar22);
            LOCK();
            piVar1 = (int *)((longlong)plVar22 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar22 + 0x10))(plVar22);
            }
          }
          plVar21 = local_660;
          param_2 = local_658;
          if (plVar20 != (longlong *)0x0) goto LAB_1408b0cf2;
        }
      }
      else {
        LOCK();
        *(int *)(plVar20 + 1) = (int)plVar20[1] + 1;
        UNLOCK();
        plVar21[0x18] = (longlong)(plVar20 + 2);
        plVar22 = (longlong *)plVar21[0x19];
        if (plVar20 == plVar22) {
          LOCK();
          plVar22 = plVar20 + 1;
          *(int *)plVar22 = (int)*plVar22 + -1;
          UNLOCK();
          if ((int)*plVar22 == 0) {
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
        else {
          plVar21[0x19] = (longlong)plVar20;
          if (plVar22 != (longlong *)0x0) goto LAB_1408b572a;
        }
LAB_1408b0cf2:
        LOCK();
        plVar22 = plVar20 + 1;
        *(int *)plVar22 = (int)*plVar22 + -1;
        UNLOCK();
        if ((int)*plVar22 == 0) {
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
      *(int *)((longlong)plVar21 + 0x1e4) = *(int *)((longlong)plVar21 + 0x1e4) + 1;
    }
    else {
      iVar17 = *(int *)((longlong)local_660 + 0x1dc);
      lVar32 = *(longlong *)(local_660[0x36] + 0x1f8);
      plVar21 = (longlong *)FUN_14001cc68(0xb0,0x10);
      plVar21[1] = (longlong)&DAT_100000001;
      *plVar21 = (longlong)&PTR_FUN_14be85ca0;
      local_6c0 = (undefined4 **)CONCAT44(local_6c0._4_4_,param_10);
      local_6c8 = local_658;
      FUN_1497fd106(plVar21 + 2,(longlong)iVar17 * 0x18 + lVar32,local_628,local_650);
      if (plVar21 == (longlong *)0x0) {
        local_660[0x18] = 0x10;
        plVar20 = (longlong *)local_660[0x19];
        if (plVar20 != (longlong *)0x0) {
          local_660[0x19] = 0;
LAB_1408b6044:
          LOCK();
          plVar22 = plVar20 + 1;
          *(int *)plVar22 = (int)*plVar22 + -1;
          UNLOCK();
          if ((int)*plVar22 == 0) {
            (**(code **)*plVar20)(plVar20);
            LOCK();
            piVar1 = (int *)((longlong)plVar20 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar20 + 0x10))(plVar20);
            }
          }
          if (plVar21 != (longlong *)0x0) goto LAB_1408b655c;
        }
      }
      else {
        LOCK();
        *(int *)(plVar21 + 1) = (int)plVar21[1] + 1;
        UNLOCK();
        local_660[0x18] = (longlong)(plVar21 + 2);
        plVar20 = (longlong *)local_660[0x19];
        if (plVar21 == plVar20) {
          LOCK();
          plVar20 = plVar21 + 1;
          *(int *)plVar20 = (int)*plVar20 + -1;
          UNLOCK();
          if ((int)*plVar20 == 0) {
            (**(code **)*plVar21)(plVar21);
            LOCK();
            piVar1 = (int *)((longlong)plVar21 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar21 + 0x10))(plVar21);
            }
          }
        }
        else {
          local_660[0x19] = (longlong)plVar21;
          if (plVar20 != (longlong *)0x0) goto LAB_1408b6044;
        }
LAB_1408b655c:
        LOCK();
        plVar20 = plVar21 + 1;
        *(int *)plVar20 = (int)*plVar20 + -1;
        UNLOCK();
        if ((int)*plVar20 == 0) {
          (**(code **)*plVar21)(plVar21);
          LOCK();
          piVar1 = (int *)((longlong)plVar21 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar21 + 0x10))(plVar21);
          }
        }
      }
      *(int *)(local_660 + 0x47) = (int)local_660[0x47] + 1;
      param_2 = local_658;
    }
  }
  FUN_1400b22c2(&local_2f8,"UseLegacyConfig");
  iVar17 = FUN_144a41c6c(param_2,&local_2f8);
  plVar21 = local_660;
  if (iVar17 == -1) {
    bVar9 = false;
  }
  else {
    bVar9 = (float)param_2[3][(longlong)iVar17 * 3] != 0.0;
  }
  if (local_2f8 != (undefined4 *)0x0) {
    FUN_1400020a8();
  }
  if (bVar9) {
    FUN_140056680(&local_2f8,L"MaxDistance");
    local_6c8 = (undefined4 **)0x0;
    FUN_1408ab21e(param_2,&local_548,&local_2f8,&local_2f8);
    if (local_2f8 != (undefined4 *)0x0) {
      FUN_1400020a8();
    }
    ppuVar3 = local_650;
    local_2f8 = local_548;
    uStack_2f0 = CONCAT44(uStack_53c,iStack_540);
    iVar17 = 0;
    iVar30 = iStack_540 + -1;
    if (iStack_540 == 0) {
      iVar30 = 0;
    }
    uVar26 = 0;
    if (0 < iVar30) {
      puVar23 = local_548;
      if (iStack_540 == 0) {
        puVar23 = (undefined4 *)&DAT_149dfb77a;
      }
      lVar32 = 0;
      uVar26 = 0;
      do {
        uVar5 = *(ushort *)((longlong)puVar23 + lVar32 * 2);
        uVar27 = ((uint)(0x19 < uVar5 - 0x61) * 0x20 + (uint)uVar5) - 0x20;
        uVar34 = (uint)(uVar26 >> 8) ^
                 *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar26 ^ uVar27) & 0xff) * 4);
        uVar26 = (ulonglong)
                 (uVar34 >> 8 ^
                 *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar34 & 0xff ^ uVar27 >> 8 & 0xff) * 4));
        lVar32 = lVar32 + 1;
      } while (iVar30 != (int)lVar32);
    }
    iVar30 = FUN_140aad9fa(local_650,uVar26,&local_2f8);
    plVar21 = local_660;
    if ((iVar30 != -1) && (iVar17 = 0, *ppuVar3 + (longlong)iVar30 * 10 != (undefined4 *)0x0)) {
      iVar17 = (*ppuVar3 + (longlong)iVar30 * 10)[6];
    }
    lVar32 = local_660[0x3c];
    if (local_2f8 != (undefined4 *)0x0) {
      FUN_1400020a8();
    }
    if (iVar17 == (int)lVar32) goto LAB_1408b0eb2;
  }
  else {
LAB_1408b0eb2:
    FUN_1400021e4(&DAT_14c994820,&local_2f8);
    iVar17 = FUN_144a41c6c(param_2,&local_2f8);
    if (iVar17 == -1) {
      bVar29 = 0;
    }
    else {
      bVar29 = *(byte *)((longlong)param_2[9] + (longlong)iVar17) & 1;
    }
    if (local_2f8 != (undefined4 *)0x0) {
      FUN_1400020a8();
    }
    if (bVar29 != 0) {
      lVar32 = plVar21[0x38];
      plVar20 = (longlong *)FUN_14001cc68(0x40,0x10);
      plVar20[1] = (longlong)&DAT_100000001;
      *plVar20 = (longlong)&PTR_FUN_14be85cc0;
      lVar33 = plVar21[0x3b];
      lVar25 = plVar21[0x3c];
      plVar20[2] = lVar32;
      FUN_1400021e4(&DAT_14c994820,&local_558);
      FUN_1400021e4(&DAT_14c994820,&local_2f8);
      local_6c8 = (undefined4 **)0x0;
      FUN_1408ab21e(param_2,&local_548,&local_2f8,&local_558);
      if (local_2f8 != (undefined4 *)0x0) {
        FUN_1400020a8();
      }
      ppuVar3 = local_650;
      uVar26 = 0;
      iVar17 = iStack_540 + -1;
      if (iStack_540 == 0) {
        iVar17 = 0;
      }
      if (0 < iVar17) {
        puVar23 = local_548;
        if (iStack_540 == 0) {
          puVar23 = (undefined4 *)&DAT_149dfb77a;
        }
        lVar32 = 0;
        uVar26 = 0;
        do {
          uVar5 = *(ushort *)((longlong)puVar23 + lVar32 * 2);
          uVar27 = ((uint)(0x19 < uVar5 - 0x61) * 0x20 + (uint)uVar5) - 0x20;
          uVar34 = (uint)(uVar26 >> 8) ^
                   *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar26 ^ uVar27) & 0xff) * 4);
          uVar26 = (ulonglong)
                   (uVar34 >> 8 ^
                   *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar34 & 0xff ^ uVar27 >> 8 & 0xff) * 4));
          lVar32 = lVar32 + 1;
        } while (iVar17 != (int)lVar32);
      }
      iVar17 = FUN_140aad9fa(local_650,uVar26,&local_548);
      plVar21 = local_660;
      if ((iVar17 == -1) ||
         (puVar23 = *ppuVar3 + (longlong)iVar17 * 10, puVar23 == (undefined4 *)0x0)) {
        plVar20[3] = 0;
        *(undefined4 *)(plVar20 + 4) = 0;
      }
      else {
        uVar18 = puVar23[5];
        uVar7 = puVar23[6];
        uVar10 = puVar23[7];
        *(undefined4 *)(plVar20 + 3) = puVar23[4];
        *(undefined4 *)((longlong)plVar20 + 0x1c) = uVar18;
        *(undefined4 *)(plVar20 + 4) = uVar7;
        *(undefined4 *)((longlong)plVar20 + 0x24) = uVar10;
      }
      if (local_548 != (undefined4 *)0x0) {
        FUN_1400020a8();
      }
      if (local_558 != (undefined4 *)0x0) {
        FUN_1400020a8();
      }
      *(int *)(plVar20 + 5) = (int)lVar33;
      *(int *)((longlong)plVar20 + 0x2c) = (int)lVar25;
      *(undefined4 *)(plVar20 + 6) = param_10;
      FUN_1400021e4(&DAT_14c994820,&local_2f8);
      iVar17 = FUN_144a41c6c(param_2,&local_2f8);
      if (iVar17 == -1) {
        fVar43 = 0.0;
      }
      else {
        fVar43 = (float)param_2[3][(longlong)iVar17 * 3];
      }
      if (local_2f8 != (undefined4 *)0x0) {
        FUN_1400020a8();
      }
      *(float *)((longlong)plVar20 + 0x34) = fVar43;
      FUN_1400021e4(&DAT_14c994820,&local_2f8);
      iVar17 = FUN_144a41c6c(param_2,&local_2f8);
      if (iVar17 == -1) {
        fVar44 = 1.0;
      }
      else {
        fVar44 = (float)param_2[5][(longlong)iVar17 * 3];
      }
      if (local_2f8 != (undefined4 *)0x0) {
        FUN_1400020a8();
      }
      *(float *)(plVar20 + 7) = fVar44 - fVar43;
      FUN_1400021e4(&DAT_14c994820,&local_2f8);
      uVar18 = FUN_144a41c6c(param_2,&local_2f8);
      if (local_2f8 != (undefined4 *)0x0) {
        FUN_1400020a8();
      }
      *(undefined4 *)((longlong)plVar20 + 0x3c) = uVar18;
      if (plVar20 == (longlong *)0x0) {
        plVar21[0x1a] = 0x10;
        plVar22 = (longlong *)plVar21[0x1b];
        if (plVar22 != (longlong *)0x0) {
          plVar21[0x1b] = 0;
LAB_1408b5802:
          LOCK();
          plVar21 = plVar22 + 1;
          *(int *)plVar21 = (int)*plVar21 + -1;
          UNLOCK();
          if ((int)*plVar21 == 0) {
            (**(code **)*plVar22)(plVar22);
            LOCK();
            piVar1 = (int *)((longlong)plVar22 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar22 + 0x10))(plVar22);
            }
          }
          plVar21 = local_660;
          param_2 = local_658;
          if (plVar20 != (longlong *)0x0) goto LAB_1408b11b3;
        }
      }
      else {
        LOCK();
        *(int *)(plVar20 + 1) = (int)plVar20[1] + 1;
        UNLOCK();
        plVar21[0x1a] = (longlong)(plVar20 + 2);
        plVar22 = (longlong *)plVar21[0x1b];
        if (plVar20 == plVar22) {
          LOCK();
          plVar22 = plVar20 + 1;
          *(int *)plVar22 = (int)*plVar22 + -1;
          UNLOCK();
          if ((int)*plVar22 == 0) {
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
        else {
          plVar21[0x1b] = (longlong)plVar20;
          if (plVar22 != (longlong *)0x0) goto LAB_1408b5802;
        }
LAB_1408b11b3:
        LOCK();
        plVar22 = plVar20 + 1;
        *(int *)plVar22 = (int)*plVar22 + -1;
        UNLOCK();
        if ((int)*plVar22 == 0) {
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
      *(int *)(plVar21 + 0x3d) = (int)plVar21[0x3d] + 1;
    }
  }
  FUN_1400b22c2(&local_2f8,"UseLegacyConfig");
  iVar17 = FUN_144a41c6c(param_2,&local_2f8);
  if (iVar17 == -1) {
    bVar9 = false;
  }
  else {
    bVar9 = (float)param_2[3][(longlong)iVar17 * 3] != 0.0;
  }
  if (local_2f8 != (undefined4 *)0x0) {
    FUN_1400020a8();
  }
  if (bVar9) {
    FUN_140056680(&local_2f8,L"BackstopRadius");
    FUN_140056680(&local_548,L"BackstopDistance");
    local_6c8 = (undefined4 **)0x0;
    FUN_1408ab21e(param_2,&local_558,&local_2f8,&local_2f8);
    if (local_2f8 != (undefined4 *)0x0) {
      FUN_1400020a8();
    }
    local_2f8 = local_558;
    uStack_2f0 = uStack_550;
    local_6c8 = (undefined4 **)0x0;
    FUN_1408ab21e(param_2,&local_558,&local_548,&local_548);
    if (local_548 != (undefined4 *)0x0) {
      FUN_1400020a8();
    }
    ppuVar3 = local_650;
    local_548 = local_558;
    iStack_540 = (int)uStack_550;
    uStack_53c = uStack_550._4_4_;
    iVar17 = (int)uStack_2f0 + -1;
    if ((int)uStack_2f0 == 0) {
      iVar17 = 0;
    }
    if (0 < iVar17) {
      iVar30 = 0;
      do {
        iVar30 = iVar30 + 1;
      } while (iVar17 != iVar30);
    }
    iVar30 = FUN_140aad9fa(local_650);
    ppuVar11 = local_650;
    iVar17 = 0;
    if ((iVar30 != -1) && (iVar17 = 0, *ppuVar3 + (longlong)iVar30 * 10 != (undefined4 *)0x0)) {
      iVar17 = (*ppuVar3 + (longlong)iVar30 * 10)[6];
    }
    iVar30 = iStack_540 + -1;
    if (iStack_540 == 0) {
      iVar30 = 0;
    }
    uVar26 = 0;
    if (0 < iVar30) {
      puVar23 = local_548;
      if (iStack_540 == 0) {
        puVar23 = (undefined4 *)&DAT_149dfb77a;
      }
      lVar32 = 0;
      uVar26 = 0;
      do {
        uVar5 = *(ushort *)((longlong)puVar23 + lVar32 * 2);
        uVar27 = ((uint)(0x19 < uVar5 - 0x61) * 0x20 + (uint)uVar5) - 0x20;
        uVar34 = (uint)(uVar26 >> 8) ^
                 *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar26 ^ uVar27) & 0xff) * 4);
        uVar26 = (ulonglong)
                 (uVar34 >> 8 ^
                 *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar34 & 0xff ^ uVar27 >> 8 & 0xff) * 4));
        lVar32 = lVar32 + 1;
      } while (iVar30 != (int)lVar32);
    }
    iVar19 = FUN_140aad9fa(local_650,uVar26,&local_548);
    iVar30 = 0;
    if ((iVar19 != -1) && (iVar30 = 0, *ppuVar11 + (longlong)iVar19 * 10 != (undefined4 *)0x0)) {
      iVar30 = (*ppuVar11 + (longlong)iVar19 * 10)[6];
    }
    lVar32 = local_660[0x3c];
    if (local_548 != (undefined4 *)0x0) {
      FUN_1400020a8();
    }
    if (local_2f8 != (undefined4 *)0x0) {
      FUN_1400020a8();
    }
    plVar21 = local_660;
    if (iVar30 == (int)lVar32 && iVar17 == (int)lVar32) goto LAB_1408b1486;
  }
  else {
LAB_1408b1486:
    FUN_1400021e4(&DAT_14c994830,&local_2f8);
    iVar17 = FUN_144a41c6c(param_2,&local_2f8);
    if (iVar17 == -1) {
      bVar29 = 0;
    }
    else {
      bVar29 = *(byte *)((longlong)param_2[9] + (longlong)iVar17) & 1;
    }
    if (local_2f8 != (undefined4 *)0x0) {
      FUN_1400020a8();
    }
    if ((bVar29 != 0) || (cVar16 = FUN_1497f31ac(param_2), cVar16 != '\0')) {
      lVar32 = plVar21[0x38];
      lVar33 = plVar21[0x39];
      plVar20 = (longlong *)FUN_14001cc68(0x70,0x10);
      plVar20[1] = (longlong)&DAT_100000001;
      *plVar20 = (longlong)&PTR_FUN_14be85ce0;
      lVar25 = plVar21[0x3b];
      lVar31 = plVar21[0x3c];
      plVar20[2] = lVar32;
      plVar20[3] = lVar33;
      FUN_1400021e4(&DAT_14c994830,&local_558);
      FUN_1400021e4(&DAT_14c994830,&local_2f8);
      local_6c8 = (undefined4 **)0x0;
      FUN_1408ab21e(param_2,&local_548,&local_2f8,&local_558);
      if (local_2f8 != (undefined4 *)0x0) {
        FUN_1400020a8();
      }
      ppuVar3 = local_650;
      uVar26 = 0;
      iVar17 = iStack_540 + -1;
      if (iStack_540 == 0) {
        iVar17 = 0;
      }
      if (0 < iVar17) {
        puVar23 = local_548;
        if (iStack_540 == 0) {
          puVar23 = (undefined4 *)&DAT_149dfb77a;
        }
        lVar32 = 0;
        uVar26 = 0;
        do {
          uVar5 = *(ushort *)((longlong)puVar23 + lVar32 * 2);
          uVar27 = ((uint)(0x19 < uVar5 - 0x61) * 0x20 + (uint)uVar5) - 0x20;
          uVar34 = (uint)(uVar26 >> 8) ^
                   *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar26 ^ uVar27) & 0xff) * 4);
          uVar26 = (ulonglong)
                   (uVar34 >> 8 ^
                   *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar34 & 0xff ^ uVar27 >> 8 & 0xff) * 4));
          lVar32 = lVar32 + 1;
        } while (iVar17 != (int)lVar32);
      }
      iVar17 = FUN_140aad9fa(local_650,uVar26,&local_548);
      if ((iVar17 == -1) ||
         (puVar23 = *ppuVar3 + (longlong)iVar17 * 10, puVar23 == (undefined4 *)0x0)) {
        plVar20[4] = 0;
        *(undefined4 *)(plVar20 + 5) = 0;
      }
      else {
        uVar18 = puVar23[5];
        uVar7 = puVar23[6];
        uVar10 = puVar23[7];
        *(undefined4 *)(plVar20 + 4) = puVar23[4];
        *(undefined4 *)((longlong)plVar20 + 0x24) = uVar18;
        *(undefined4 *)(plVar20 + 5) = uVar7;
        *(undefined4 *)((longlong)plVar20 + 0x2c) = uVar10;
      }
      if (local_548 != (undefined4 *)0x0) {
        FUN_1400020a8();
      }
      if (local_558 != (undefined4 *)0x0) {
        FUN_1400020a8();
      }
      FUN_1400021e4(&DAT_14c994828,&local_558);
      FUN_1400021e4(&DAT_14c994828,&local_2f8);
      local_6c8 = (undefined4 **)0x0;
      FUN_1408ab21e(param_2,&local_548,&local_2f8,&local_558);
      if (local_2f8 != (undefined4 *)0x0) {
        FUN_1400020a8();
      }
      ppuVar3 = local_650;
      uVar26 = 0;
      iVar17 = iStack_540 + -1;
      if (iStack_540 == 0) {
        iVar17 = 0;
      }
      if (0 < iVar17) {
        puVar23 = local_548;
        if (iStack_540 == 0) {
          puVar23 = (undefined4 *)&DAT_149dfb77a;
        }
        lVar32 = 0;
        uVar26 = 0;
        do {
          uVar5 = *(ushort *)((longlong)puVar23 + lVar32 * 2);
          uVar27 = ((uint)(0x19 < uVar5 - 0x61) * 0x20 + (uint)uVar5) - 0x20;
          uVar34 = (uint)(uVar26 >> 8) ^
                   *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar26 ^ uVar27) & 0xff) * 4);
          uVar26 = (ulonglong)
                   (uVar34 >> 8 ^
                   *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar34 & 0xff ^ uVar27 >> 8 & 0xff) * 4));
          lVar32 = lVar32 + 1;
        } while (iVar17 != (int)lVar32);
      }
      iVar17 = FUN_140aad9fa(local_650,uVar26,&local_548);
      plVar21 = local_660;
      if ((iVar17 == -1) ||
         (puVar23 = *ppuVar3 + (longlong)iVar17 * 10, puVar23 == (undefined4 *)0x0)) {
        plVar20[6] = 0;
        *(undefined4 *)(plVar20 + 7) = 0;
      }
      else {
        uVar18 = puVar23[5];
        uVar7 = puVar23[6];
        uVar10 = puVar23[7];
        *(undefined4 *)(plVar20 + 6) = puVar23[4];
        *(undefined4 *)((longlong)plVar20 + 0x34) = uVar18;
        *(undefined4 *)(plVar20 + 7) = uVar7;
        *(undefined4 *)((longlong)plVar20 + 0x3c) = uVar10;
      }
      if (local_548 != (undefined4 *)0x0) {
        FUN_1400020a8();
      }
      if (local_558 != (undefined4 *)0x0) {
        FUN_1400020a8();
      }
      *(int *)(plVar20 + 8) = (int)lVar25;
      *(int *)((longlong)plVar20 + 0x44) = (int)lVar31;
      *(undefined4 *)(plVar20 + 9) = param_10;
      FUN_1400021e4(&DAT_14c994830,&local_2f8);
      iVar17 = FUN_144a41c6c(param_2,&local_2f8);
      if (iVar17 == -1) {
        fVar43 = 0.0;
      }
      else {
        fVar43 = (float)param_2[3][(longlong)iVar17 * 3];
      }
      if (local_2f8 != (undefined4 *)0x0) {
        FUN_1400020a8();
      }
      if (fVar43 <= 0.0) {
        fVar43 = 0.0;
      }
      *(float *)((longlong)plVar20 + 0x4c) = fVar43;
      FUN_1400021e4(&DAT_14c994830,&local_2f8);
      iVar17 = FUN_144a41c6c(param_2,&local_2f8);
      if (iVar17 == -1) {
        fVar44 = 1.0;
      }
      else {
        fVar44 = (float)param_2[5][(longlong)iVar17 * 3];
      }
      if (local_2f8 != (undefined4 *)0x0) {
        FUN_1400020a8();
      }
      fVar42 = 0.0;
      if (fVar44 <= 0.0) {
        fVar44 = 0.0;
      }
      *(float *)(plVar20 + 10) = fVar44 - fVar43;
      FUN_1400021e4(&DAT_14c994828,&local_2f8);
      iVar17 = FUN_144a41c6c(param_2,&local_2f8);
      if (iVar17 != -1) {
        fVar42 = (float)param_2[3][(longlong)iVar17 * 3];
      }
      if (local_2f8 != (undefined4 *)0x0) {
        FUN_1400020a8();
      }
      *(float *)((longlong)plVar20 + 0x54) = fVar42;
      FUN_1400021e4(&DAT_14c994828,&local_2f8);
      iVar17 = FUN_144a41c6c(param_2,&local_2f8);
      if (iVar17 == -1) {
        fVar43 = 1.0;
      }
      else {
        fVar43 = (float)param_2[5][(longlong)iVar17 * 3];
      }
      if (local_2f8 != (undefined4 *)0x0) {
        FUN_1400020a8();
      }
      *(float *)(plVar20 + 0xb) = fVar43 - fVar42;
      *(undefined1 *)((longlong)plVar20 + 0x5c) = 1;
      FUN_1400021e4(&DAT_14c994838,&local_2f8);
      iVar17 = FUN_144a41c6c(param_2,&local_2f8);
      if (iVar17 == -1) {
        bVar29 = 0;
      }
      else {
        bVar29 = -((float)param_2[3][(longlong)iVar17 * 3] != 0.0) & 1;
      }
      if (local_2f8 != (undefined4 *)0x0) {
        FUN_1400020a8();
      }
      *(byte *)((longlong)plVar20 + 0x5d) = bVar29;
      FUN_1400021e4(&DAT_14c994828,&local_2f8);
      uVar18 = FUN_144a41c6c(param_2,&local_2f8);
      if (local_2f8 != (undefined4 *)0x0) {
        FUN_1400020a8();
      }
      *(undefined4 *)(plVar20 + 0xc) = uVar18;
      FUN_1400021e4(&DAT_14c994830,&local_2f8);
      uVar18 = FUN_144a41c6c(param_2,&local_2f8);
      if (local_2f8 != (undefined4 *)0x0) {
        FUN_1400020a8();
      }
      *(undefined4 *)((longlong)plVar20 + 100) = uVar18;
      FUN_1400021e4(&DAT_14c994838,&local_2f8);
      uVar18 = FUN_144a41c6c(param_2,&local_2f8);
      if (local_2f8 != (undefined4 *)0x0) {
        FUN_1400020a8();
      }
      *(undefined4 *)(plVar20 + 0xd) = uVar18;
      if (plVar20 == (longlong *)0x0) {
        plVar21[0x1c] = 0x10;
        plVar22 = (longlong *)plVar21[0x1d];
        if (plVar22 != (longlong *)0x0) {
          plVar21[0x1d] = 0;
LAB_1408b59cc:
          LOCK();
          plVar21 = plVar22 + 1;
          *(int *)plVar21 = (int)*plVar21 + -1;
          UNLOCK();
          if ((int)*plVar21 == 0) {
            (**(code **)*plVar22)(plVar22);
            LOCK();
            piVar1 = (int *)((longlong)plVar22 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar22 + 0x10))(plVar22);
            }
          }
          plVar21 = local_660;
          param_2 = local_658;
          if (plVar20 != (longlong *)0x0) goto LAB_1408b1a40;
        }
      }
      else {
        LOCK();
        *(int *)(plVar20 + 1) = (int)plVar20[1] + 1;
        UNLOCK();
        plVar21[0x1c] = (longlong)(plVar20 + 2);
        plVar22 = (longlong *)plVar21[0x1d];
        if (plVar20 == plVar22) {
          LOCK();
          plVar22 = plVar20 + 1;
          *(int *)plVar22 = (int)*plVar22 + -1;
          UNLOCK();
          if ((int)*plVar22 == 0) {
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
        else {
          plVar21[0x1d] = (longlong)plVar20;
          if (plVar22 != (longlong *)0x0) goto LAB_1408b59cc;
        }
LAB_1408b1a40:
        LOCK();
        plVar22 = plVar20 + 1;
        *(int *)plVar22 = (int)*plVar22 + -1;
        UNLOCK();
        if ((int)*plVar22 == 0) {
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
      *(int *)(plVar21 + 0x3d) = (int)plVar21[0x3d] + 1;
    }
  }
  FUN_1400021e4(&DAT_14cc26f98,&local_2f8);
  iVar17 = FUN_144a41c6c(param_2,&local_2f8);
  if (iVar17 == -1) {
    bVar29 = 0;
  }
  else {
    bVar29 = *(byte *)((longlong)param_2[9] + (longlong)iVar17) & 1;
  }
  if (local_2f8 != (undefined4 *)0x0) {
    FUN_1400020a8();
  }
  if (bVar29 != 0) {
    lVar32 = plVar21[0x38];
    lVar33 = plVar21[0x3a];
    plVar20 = (longlong *)FUN_14001cc68(0xc0,0x10);
    plVar20[1] = (longlong)&DAT_100000001;
    *plVar20 = (longlong)&PTR_FUN_14be85d00;
    lVar25 = plVar21[0x3b];
    uVar27 = *(uint *)(plVar21 + 0x3c);
    plVar20[2] = lVar32;
    plVar20[3] = lVar33;
    *(int *)(plVar20 + 4) = (int)lVar25;
    *(uint *)((longlong)plVar20 + 0x24) = uVar27;
    FUN_1400021e4(&DAT_14cc26f98,&local_558);
    FUN_1400021e4(&DAT_14cc26f98,&local_2f8);
    local_6c8 = (undefined4 **)0x0;
    FUN_1408ab21e(param_2,&local_548,&local_2f8,&local_558);
    if (local_2f8 != (undefined4 *)0x0) {
      FUN_1400020a8();
    }
    ppuVar3 = local_650;
    lVar32 = 0;
    iVar17 = iStack_540 + -1;
    if (iStack_540 == 0) {
      iVar17 = 0;
    }
    uVar26 = 0;
    if (0 < iVar17) {
      puVar23 = local_548;
      if (iStack_540 == 0) {
        puVar23 = (undefined4 *)&DAT_149dfb77a;
      }
      lVar33 = 0;
      uVar26 = 0;
      do {
        uVar5 = *(ushort *)((longlong)puVar23 + lVar33 * 2);
        uVar34 = ((uint)(0x19 < uVar5 - 0x61) * 0x20 + (uint)uVar5) - 0x20;
        uVar35 = (uint)(uVar26 >> 8) ^
                 *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar26 ^ uVar34) & 0xff) * 4);
        uVar26 = (ulonglong)
                 (uVar35 >> 8 ^
                 *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar35 & 0xff ^ uVar34 >> 8 & 0xff) * 4));
        lVar33 = lVar33 + 1;
      } while (iVar17 != (int)lVar33);
    }
    iVar17 = FUN_140aad9fa(local_650,uVar26,&local_548);
    if (iVar17 == -1) {
      uVar34 = 0;
    }
    else {
      uVar34 = 0;
      puVar23 = *ppuVar3 + (longlong)iVar17 * 10;
      if (puVar23 != (undefined4 *)0x0) {
        lVar32 = *(longlong *)(puVar23 + 4);
        uVar34 = puVar23[6];
      }
    }
    FUN_1400021e4(&DAT_14cc26f98,&local_2f8);
    iVar17 = FUN_144a41c6c(param_2,&local_2f8);
    if (iVar17 == -1) {
      fVar44 = 1.0;
      fVar43 = 1.0;
    }
    else {
      fVar43 = (float)param_2[5][(longlong)iVar17 * 3];
      fVar44 = (float)param_2[3][(longlong)iVar17 * 3];
    }
    if (local_2f8 != (undefined4 *)0x0) {
      FUN_1400020a8();
    }
    lVar33 = DAT_14c84635c;
    plVar20[5] = (longlong)&PTR_FUN_149f57480;
    plVar21 = plVar20 + 6;
    plVar22 = plVar20 + 8;
    plVar20[6] = 0;
    plVar20[7] = 0;
    plVar20[8] = 0;
    plVar20[9] = 0;
    plVar20[10] = lVar33;
    *(undefined1 *)(plVar20 + 0xb) = 1;
    if (((int)uVar27 < 1) || (uVar34 != uVar27)) {
      *(undefined4 *)(plVar20 + 7) = 1;
      FUN_1447403be(plVar21,0);
      *(undefined1 *)plVar20[6] = 0;
      iVar17 = (int)plVar20[9];
      *(int *)(plVar20 + 9) = iVar17 + 1;
      if (*(int *)((longlong)plVar20 + 0x4c) == iVar17) {
        FUN_14475e4ac(plVar22,iVar17);
      }
      *(undefined4 *)(*plVar22 + (longlong)iVar17 * 4) = 0;
    }
    else {
      *(uint *)(plVar20 + 7) = uVar27;
      uVar26 = 0;
      FUN_1447403be(plVar21,0);
      do {
        fVar42 = *(float *)(lVar32 + uVar26 * 4);
        if (1.0 <= fVar42) {
          fVar42 = 1.0;
        }
        if (fVar42 <= 0.0) {
          fVar42 = 0.0;
        }
        *(char *)(*plVar21 + uVar26) = (char)(int)(fVar42 * 15.0);
        uVar26 = uVar26 + 1;
      } while (uVar27 != uVar26);
      iVar17 = (int)plVar20[9];
      lVar32 = (longlong)iVar17;
      *(int *)(plVar20 + 9) = iVar17 + 0x10;
      if ((uint)(*(int *)((longlong)plVar20 + 0x4c) - iVar17) < 0x10) {
        FUN_14475e4ac(plVar22,iVar17);
      }
      lVar33 = *plVar22;
      puVar37 = (undefined8 *)(lVar33 + 0x30 + lVar32 * 4);
      *puVar37 = 0;
      puVar37[1] = 0;
      puVar37 = (undefined8 *)(lVar33 + 0x20 + lVar32 * 4);
      *puVar37 = 0;
      puVar37[1] = 0;
      puVar37 = (undefined8 *)(lVar33 + 0x10 + lVar32 * 4);
      *puVar37 = 0;
      puVar37[1] = 0;
      puVar37 = (undefined8 *)(lVar33 + lVar32 * 4);
      *puVar37 = 0;
      puVar37[1] = 0;
      param_2 = local_658;
    }
    plVar20[5] = (longlong)&PTR_FUN_149f57478;
    plVar20[0xc] = 0x40dd0c55447a0000;
    plVar20[0xd] = 0;
    fVar42 = 1.0;
    if (1.0 <= fVar43) {
      fVar43 = 1.0;
    }
    if (fVar43 <= 0.0) {
      fVar43 = 0.0;
    }
    if (1.0 <= fVar44) {
      fVar44 = 1.0;
    }
    if (fVar44 <= 0.0) {
      fVar44 = 0.0;
    }
    bVar29 = 1;
    if ((*(float *)(plVar20 + 10) == fVar44) && (!NAN(*(float *)(plVar20 + 10)) && !NAN(fVar44))) {
      bVar29 = -(*(float *)((longlong)plVar20 + 0x54) != fVar43) & 1;
    }
    *(byte *)(plVar20 + 0xb) = *(byte *)(plVar20 + 0xb) | bVar29;
    *(float *)(plVar20 + 10) = fVar44;
    *(float *)((longlong)plVar20 + 0x54) = fVar43;
    if (local_548 != (undefined4 *)0x0) {
      FUN_1400020a8();
    }
    if (local_558 != (undefined4 *)0x0) {
      FUN_1400020a8();
    }
    FUN_1400021e4(&DAT_14cc26fa0,&local_558);
    FUN_1400021e4(&DAT_14cc26fa0,&local_2f8);
    local_6c8 = (undefined4 **)0x0;
    FUN_1408ab21e(param_2,&local_548,&local_2f8,&local_558);
    if (local_2f8 != (undefined4 *)0x0) {
      FUN_1400020a8();
    }
    ppuVar3 = local_650;
    uVar34 = 0;
    iVar17 = iStack_540 + -1;
    if (iStack_540 == 0) {
      iVar17 = 0;
    }
    uVar26 = 0;
    if (0 < iVar17) {
      puVar23 = local_548;
      if (iStack_540 == 0) {
        puVar23 = (undefined4 *)&DAT_149dfb77a;
      }
      lVar32 = 0;
      uVar26 = 0;
      do {
        uVar5 = *(ushort *)((longlong)puVar23 + lVar32 * 2);
        uVar35 = ((uint)(0x19 < uVar5 - 0x61) * 0x20 + (uint)uVar5) - 0x20;
        uVar36 = (uint)(uVar26 >> 8) ^
                 *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar26 ^ uVar35) & 0xff) * 4);
        uVar26 = (ulonglong)
                 (uVar36 >> 8 ^
                 *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar36 & 0xff ^ uVar35 >> 8 & 0xff) * 4));
        lVar32 = lVar32 + 1;
      } while (iVar17 != (int)lVar32);
    }
    iVar17 = FUN_140aad9fa(local_650,uVar26,&local_548);
    plVar21 = local_660;
    puVar23 = *ppuVar3 + (longlong)iVar17 * 10;
    if (puVar23 == (undefined4 *)0x0 || iVar17 == -1) {
      lVar32 = 0;
    }
    else {
      lVar32 = *(longlong *)(puVar23 + 4);
      uVar34 = puVar23[6];
    }
    FUN_1400021e4(&DAT_14cc26fa0,&local_2f8);
    ppuVar3 = local_658;
    iVar17 = FUN_144a41c6c(local_658,&local_2f8);
    fVar43 = 1.0;
    if (iVar17 != -1) {
      fVar42 = (float)ppuVar3[5][(longlong)iVar17 * 3];
      fVar43 = (float)ppuVar3[3][(longlong)iVar17 * 3];
    }
    if (local_2f8 != (undefined4 *)0x0) {
      FUN_1400020a8();
    }
    lVar33 = DAT_14c84635c;
    plVar22 = plVar20 + 0xf;
    plVar2 = plVar20 + 0x11;
    plVar20[0xe] = (longlong)&PTR_FUN_149f57480;
    plVar20[0xf] = 0;
    plVar20[0x10] = 0;
    plVar20[0x11] = 0;
    plVar20[0x12] = 0;
    plVar20[0x13] = lVar33;
    *(undefined1 *)(plVar20 + 0x14) = 1;
    if (((int)uVar27 < 1) || (uVar34 != uVar27)) {
      *(undefined4 *)(plVar20 + 0x10) = 1;
      FUN_1447403be(plVar22,0);
      *(undefined1 *)plVar20[0xf] = 0;
      iVar17 = (int)plVar20[0x12];
      *(int *)(plVar20 + 0x12) = iVar17 + 1;
      if (*(int *)((longlong)plVar20 + 0x94) == iVar17) {
        FUN_14475e4ac(plVar2,iVar17);
      }
      *(undefined4 *)(*plVar2 + (longlong)iVar17 * 4) = 0;
    }
    else {
      *(uint *)(plVar20 + 0x10) = uVar27;
      uVar26 = 0;
      FUN_1447403be(plVar22,0);
      do {
        fVar44 = *(float *)(lVar32 + uVar26 * 4);
        if (1.0 <= fVar44) {
          fVar44 = 1.0;
        }
        if (fVar44 <= 0.0) {
          fVar44 = 0.0;
        }
        *(char *)(*plVar22 + uVar26) = (char)(int)(fVar44 * 15.0);
        uVar26 = uVar26 + 1;
      } while (uVar27 != uVar26);
      iVar17 = (int)plVar20[0x12];
      lVar32 = (longlong)iVar17;
      *(int *)(plVar20 + 0x12) = iVar17 + 0x10;
      if ((uint)(*(int *)((longlong)plVar20 + 0x94) - iVar17) < 0x10) {
        FUN_14475e4ac(plVar2,iVar17);
      }
      lVar33 = *plVar2;
      puVar37 = (undefined8 *)(lVar33 + 0x30 + lVar32 * 4);
      *puVar37 = 0;
      puVar37[1] = 0;
      puVar37 = (undefined8 *)(lVar33 + 0x20 + lVar32 * 4);
      *puVar37 = 0;
      puVar37[1] = 0;
      puVar37 = (undefined8 *)(lVar33 + 0x10 + lVar32 * 4);
      *puVar37 = 0;
      puVar37[1] = 0;
      puVar37 = (undefined8 *)(lVar33 + lVar32 * 4);
      *puVar37 = 0;
      puVar37[1] = 0;
    }
    param_2 = local_658;
    plVar20[0xe] = (longlong)&PTR_FUN_149f57478;
    plVar20[0x15] = 0x40dd0c55447a0000;
    plVar20[0x16] = 0;
    if (1.0 <= fVar42) {
      fVar42 = 1.0;
    }
    if (fVar42 <= 0.0) {
      fVar42 = 0.0;
    }
    if (1.0 <= fVar43) {
      fVar43 = 1.0;
    }
    if (fVar43 <= 0.0) {
      fVar43 = 0.0;
    }
    bVar29 = 1;
    if ((*(float *)(plVar20 + 0x13) == fVar43) && (!NAN(*(float *)(plVar20 + 0x13)) && !NAN(fVar43))
       ) {
      bVar29 = -(*(float *)((longlong)plVar20 + 0x9c) != fVar42) & 1;
    }
    *(byte *)(plVar20 + 0x14) = *(byte *)(plVar20 + 0x14) | bVar29;
    *(float *)(plVar20 + 0x13) = fVar43;
    *(float *)((longlong)plVar20 + 0x9c) = fVar42;
    if (local_548 != (undefined4 *)0x0) {
      FUN_1400020a8();
    }
    if (local_558 != (undefined4 *)0x0) {
      FUN_1400020a8();
    }
    FUN_1400021e4(&DAT_14cc26f98,&local_2f8);
    uVar18 = FUN_144a41c6c(param_2,&local_2f8);
    if (local_2f8 != (undefined4 *)0x0) {
      FUN_1400020a8();
    }
    *(undefined4 *)(plVar20 + 0x17) = uVar18;
    FUN_1400021e4(&DAT_14cc26fa0,&local_2f8);
    uVar18 = FUN_144a41c6c(param_2,&local_2f8);
    if (local_2f8 != (undefined4 *)0x0) {
      FUN_1400020a8();
    }
    *(undefined4 *)((longlong)plVar20 + 0xbc) = uVar18;
    if (plVar20 == (longlong *)0x0) {
      plVar21[0x1e] = 0x10;
      plVar22 = (longlong *)plVar21[0x1f];
      if (plVar22 != (longlong *)0x0) {
        plVar21[0x1f] = 0;
LAB_1408b58dd:
        LOCK();
        plVar21 = plVar22 + 1;
        *(int *)plVar21 = (int)*plVar21 + -1;
        UNLOCK();
        if ((int)*plVar21 == 0) {
          (**(code **)*plVar22)(plVar22);
          LOCK();
          piVar1 = (int *)((longlong)plVar22 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar22 + 0x10))(plVar22);
          }
        }
        plVar21 = local_660;
        param_2 = local_658;
        if (plVar20 != (longlong *)0x0) goto LAB_1408b20cc;
      }
    }
    else {
      LOCK();
      *(int *)(plVar20 + 1) = (int)plVar20[1] + 1;
      UNLOCK();
      plVar21[0x1e] = (longlong)(plVar20 + 2);
      plVar22 = (longlong *)plVar21[0x1f];
      if (plVar20 == plVar22) {
        LOCK();
        plVar22 = plVar20 + 1;
        *(int *)plVar22 = (int)*plVar22 + -1;
        UNLOCK();
        if ((int)*plVar22 == 0) {
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
      else {
        plVar21[0x1f] = (longlong)plVar20;
        if (plVar22 != (longlong *)0x0) goto LAB_1408b58dd;
      }
LAB_1408b20cc:
      LOCK();
      plVar22 = plVar20 + 1;
      *(int *)plVar22 = (int)*plVar22 + -1;
      UNLOCK();
      if ((int)*plVar22 == 0) {
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
    *(int *)((longlong)plVar21 + 0x1e4) = *(int *)((longlong)plVar21 + 0x1e4) + 1;
    *(int *)(plVar21 + 0x3d) = (int)plVar21[0x3d] + 1;
  }
  ppuVar3 = local_650;
  if (plVar21[0x36] != 0) {
    FUN_1497e8146(plVar21,param_2,local_650);
    FUN_1497e8292(plVar21,param_2,ppuVar3,local_648);
    if (plVar21[0x3f] != 0) {
      *(int *)((longlong)plVar21 + 0x234) = *(int *)((longlong)plVar21 + 0x234) + 1;
    }
    FUN_1497e83d4(plVar21,param_2,param_10);
    lVar32 = plVar21[0x36];
    if (((local_634 != -1) && (local_630 != (longlong *)0x0)) && (lVar32 != 0)) {
      cVar16 = FUN_1497f322c(param_2);
      lVar32 = plVar21[0x36];
      if (cVar16 != '\0') {
        local_558 = (undefined4 *)0x0;
        uStack_550 = 0;
        local_568 = (undefined4 *)0x0;
        uStack_560 = 0;
        lVar33 = (longlong)*(int *)((longlong)plVar21 + 0x1dc);
        local_628 = *(undefined4 ***)(lVar32 + 0x1f8);
        local_640 = lVar33 * 3;
        uVar18 = *(undefined4 *)((longlong)local_628 + lVar33 * 0x18 + 0x14);
        iVar17 = *(int *)(local_628 + lVar33 * 3 + 2);
        lVar32 = *(longlong *)(local_628[lVar33 * 3 + 1] + 10);
        local_578 = (undefined4 *)0x0;
        uStack_570 = 0;
        iVar30 = *(int *)(local_648 + 1);
        if (iVar30 < 0) {
LAB_1408b4e00:
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(iVar30 * 3);
        }
        if (iVar30 != 0) {
          FUN_14480809c(&local_578);
          if ((longlong)*(int *)(local_648 + 1) != 0) {
            puVar41 = *local_648;
            puVar23 = puVar41 + (longlong)*(int *)(local_648 + 1) * 3;
            do {
              uVar7 = *puVar41;
              lVar33 = (longlong)(int)(uint)uStack_570;
              uVar27 = (uint)uStack_570 + 1;
              if (uStack_570._4_4_ < uVar27) {
                uVar26 = uStack_570 & 0xffffffff;
                uStack_570._0_4_ = uVar27;
                FUN_1447808da(&local_578,uVar26);
                uVar27 = (uint)uStack_570;
              }
              uStack_570._0_4_ = uVar27;
              uVar27 = (uint)uStack_570;
              local_578[lVar33] = uVar7;
              uVar7 = puVar41[1];
              lVar33 = (longlong)(int)(uint)uStack_570;
              uStack_570._0_4_ = (uint)uStack_570 + 1;
              if (uStack_570._4_4_ < (uint)uStack_570) {
                FUN_1447808da(&local_578,uVar27);
              }
              uVar27 = (uint)uStack_570;
              local_578[lVar33] = uVar7;
              uVar7 = puVar41[2];
              lVar33 = (longlong)(int)(uint)uStack_570;
              uStack_570._0_4_ = (uint)uStack_570 + 1;
              if (uStack_570._4_4_ < (uint)uStack_570) {
                FUN_1447808da(&local_578,uVar27);
              }
              local_578[lVar33] = uVar7;
              puVar41 = puVar41 + 3;
            } while (puVar41 != puVar23);
          }
        }
        local_588 = local_578;
        local_580 = (uint)uStack_570;
        local_598 = (undefined4 *)((longlong)iVar17 * 0xc + lVar32);
        local_590 = uVar18;
        FUN_1497eac5c(&local_2f8);
        lVar32 = *(longlong *)(plVar21[0x36] + 0x1f8);
        lVar25 = (longlong)local_634;
        local_648 = (undefined4 **)
                    CONCAT44(local_648._4_4_,*(undefined4 *)(lVar32 + 0x14 + lVar25 * 0x18));
        lVar33 = *(longlong *)(lVar32 + 8 + lVar25 * 0x18);
        lVar25 = (longlong)*(int *)(lVar32 + 0x10 + lVar25 * 0x18);
        lVar32 = *(longlong *)(lVar33 + 0x28);
        lVar33 = lVar25 * 4 + *(longlong *)(lVar33 + 0x90);
        local_5a8 = (undefined4 *)0x0;
        uStack_5a0 = 0;
        iVar30 = (int)local_630[1];
        if (iVar30 < 0) goto LAB_1408b4e00;
        if (iVar30 != 0) {
          FUN_14480809c(&local_5a8);
          lVar31 = local_630[1];
          if ((longlong)(int)lVar31 != 0) {
            lVar8 = *local_630;
            lVar39 = 0;
            do {
              iVar17 = *(int *)(lVar8 + lVar39);
              fVar43 = *(float *)(lVar33 + (longlong)iVar17 * 4);
              if ((((fVar43 != 0.0) || (NAN(fVar43))) ||
                  ((fVar43 = *(float *)(lVar33 + (longlong)*(int *)(lVar8 + 4 + lVar39) * 4),
                   fVar43 != 0.0 ||
                   ((NAN(fVar43) ||
                    (fVar43 = *(float *)(lVar33 + (longlong)*(int *)(lVar8 + 8 + lVar39) * 4),
                    fVar43 != 0.0)))))) || (NAN(fVar43))) {
                lVar28 = (longlong)(int)(uint)uStack_5a0;
                uVar27 = (uint)uStack_5a0 + 1;
                if (uStack_5a0._4_4_ < uVar27) {
                  uVar26 = uStack_5a0 & 0xffffffff;
                  uStack_5a0._0_4_ = uVar27;
                  FUN_1447808da(&local_5a8,uVar26);
                  uVar27 = (uint)uStack_5a0;
                }
                uStack_5a0._0_4_ = uVar27;
                uVar27 = (uint)uStack_5a0;
                local_5a8[lVar28] = iVar17;
                uVar18 = *(undefined4 *)(lVar8 + 4 + lVar39);
                lVar28 = (longlong)(int)(uint)uStack_5a0;
                uStack_5a0._0_4_ = (uint)uStack_5a0 + 1;
                if (uStack_5a0._4_4_ < (uint)uStack_5a0) {
                  FUN_1447808da(&local_5a8,uVar27);
                }
                uVar27 = (uint)uStack_5a0;
                local_5a8[lVar28] = uVar18;
                uVar18 = *(undefined4 *)(lVar8 + 8 + lVar39);
                lVar28 = (longlong)(int)(uint)uStack_5a0;
                uStack_5a0._0_4_ = (uint)uStack_5a0 + 1;
                if (uStack_5a0._4_4_ < (uint)uStack_5a0) {
                  FUN_1447808da(&local_5a8,uVar27);
                }
                local_5a8[lVar28] = uVar18;
              }
              lVar39 = lVar39 + 0xc;
            } while ((longlong)(int)lVar31 * 0xc != lVar39);
          }
        }
        if ((uint)uStack_5a0 == 0) {
          if (local_5a8 != (undefined4 *)0x0) {
            FUN_1400020a8();
          }
          FUN_147df30f8(&local_2f8);
          plVar21 = local_660;
          if (local_578 != (undefined4 *)0x0) {
            FUN_1400020a8();
            plVar21 = local_660;
          }
        }
        else {
          local_5b8 = local_5a8;
          local_5b0 = (uint)uStack_5a0;
          local_5c0 = local_648._0_4_;
          local_5c8 = lVar25 * 0xc + lVar32;
          FUN_1497eac5c(&local_548);
          local_5d8 = (undefined4 *)0x0;
          uStack_5d0 = 0;
          local_6b0 = (undefined4 **)&local_5e8;
          local_5e8 = 0;
          uStack_5e0 = 0;
          local_6c0 = (undefined4 **)((ulonglong)local_6c0 & 0xffffffffffffff00);
          local_6c8 = (undefined4 **)((ulonglong)local_6c8 & 0xffffffffffffff00);
          local_6b8 = (undefined4 **)((ulonglong)local_6b8 & 0xffffffff00000000);
          FUN_1437cde96(&local_5d8,&local_2f8,&local_548,0);
          FUN_1497fe430(local_5e8,uStack_5e0 & 0xffffffff);
          if (local_5e8 != 0) {
            FUN_1400020a8();
          }
          if ((int)uStack_5d0 < 0) {
LAB_1408b4e07:
                    /* WARNING: Subroutine does not return */
            FUN_1456afac4(uStack_5d0 & 0xffffffff);
          }
          iVar17 = (int)uStack_5d0;
          if ((int)uStack_550._4_4_ < (int)uStack_5d0) {
            FUN_1497fe4ae(&local_558);
            iVar17 = (int)uStack_5d0;
            if ((int)uStack_5d0 < 0) goto LAB_1408b4e07;
          }
          if ((int)uStack_560._4_4_ < iVar17) {
            FUN_1405c2e9e(&local_568);
            iVar17 = (int)uStack_5d0;
          }
          if (iVar17 != 0) {
            puVar41 = local_5d8 + (longlong)iVar17 * 0x10;
            puVar23 = local_5d8;
            do {
              uVar26 = uStack_550;
              lVar32 = (longlong)(int)uStack_550;
              uVar27 = (int)uStack_550 + 1;
              uStack_550 = CONCAT44(uStack_550._4_4_,uVar27);
              if (uStack_550._4_4_ < uVar27) {
                FUN_1497fe50e(&local_558,uVar26 & 0xffffffff);
              }
              uVar26 = uStack_560;
              local_558[lVar32 * 4] = *puVar23;
              local_558[lVar32 * 4 + 1] = puVar23[1];
              local_558[lVar32 * 4 + 2] = puVar23[2];
              local_558[lVar32 * 4 + 3] = puVar23[3];
              lVar32 = (longlong)(int)uStack_560;
              uVar27 = (int)uStack_560 + 1;
              uStack_560 = CONCAT44(uStack_560._4_4_,uVar27);
              if (uStack_560._4_4_ < uVar27) {
                FUN_141087970(&local_568,uVar26 & 0xffffffff);
              }
              uVar5 = *(ushort *)(puVar23 + 0xd);
              uVar6 = *(ushort *)((longlong)puVar23 + 0x32);
              local_568[lVar32 * 3] = (uint)*(ushort *)(puVar23 + 0xc);
              local_568[lVar32 * 3 + 1] = (uint)uVar6;
              local_568[lVar32 * 3 + 2] = (uint)uVar5;
              puVar23 = puVar23 + 0x10;
            } while (puVar23 != puVar41);
          }
          if (local_5d8 != (undefined4 *)0x0) {
            FUN_1400020a8(local_5d8);
          }
          FUN_147df30f8(&local_548);
          if (local_5a8 != (undefined4 *)0x0) {
            FUN_1400020a8();
          }
          ppuVar3 = local_628 + local_640;
          FUN_147df30f8(&local_2f8);
          if (local_578 != (undefined4 *)0x0) {
            FUN_1400020a8();
          }
          plVar20 = (longlong *)FUN_14001cc68(0x130,0x10);
          plVar20[1] = (longlong)&DAT_100000001;
          *plVar20 = (longlong)&PTR_FUN_14be85d90;
          local_6b0 = local_658;
          local_6b8 = local_650;
          local_6c0 = &local_568;
          local_6c8 = &local_558;
          FUN_1497fe594(plVar20 + 2,ppuVar3,local_634,local_630);
          plVar21 = local_660;
          if (plVar20 == (longlong *)0x0) {
            local_660[0x2c] = 0x10;
            plVar22 = (longlong *)local_660[0x2d];
            if (plVar22 != (longlong *)0x0) {
              local_660[0x2d] = 0;
LAB_1408b4d5e:
              LOCK();
              plVar21 = plVar22 + 1;
              *(int *)plVar21 = (int)*plVar21 + -1;
              UNLOCK();
              if ((int)*plVar21 == 0) {
                (**(code **)*plVar22)(plVar22);
                LOCK();
                piVar1 = (int *)((longlong)plVar22 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar22 + 0x10))(plVar22);
                }
              }
              plVar21 = local_660;
              if (plVar20 != (longlong *)0x0) goto LAB_1408b4da7;
            }
          }
          else {
            LOCK();
            *(int *)(plVar20 + 1) = (int)plVar20[1] + 1;
            UNLOCK();
            local_660[0x2c] = (longlong)(plVar20 + 2);
            plVar22 = (longlong *)local_660[0x2d];
            if (plVar20 == plVar22) {
              LOCK();
              plVar22 = plVar20 + 1;
              *(int *)plVar22 = (int)*plVar22 + -1;
              UNLOCK();
              if ((int)*plVar22 == 0) {
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
            else {
              local_660[0x2d] = (longlong)plVar20;
              if (plVar22 != (longlong *)0x0) goto LAB_1408b4d5e;
            }
LAB_1408b4da7:
            LOCK();
            plVar22 = plVar20 + 1;
            *(int *)plVar22 = (int)*plVar22 + -1;
            UNLOCK();
            if ((int)*plVar22 == 0) {
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
          *(int *)(plVar21 + 0x3d) = (int)plVar21[0x3d] + 1;
          *(int *)((longlong)plVar21 + 0x1e4) = *(int *)((longlong)plVar21 + 0x1e4) + 1;
        }
        if (local_568 != (undefined4 *)0x0) {
          FUN_1400020a8();
        }
        if (local_558 != (undefined4 *)0x0) {
          FUN_1400020a8();
        }
        lVar32 = plVar21[0x36];
      }
    }
    if (lVar32 != 0) {
      FUN_1497e851e(plVar21,local_618);
      goto LAB_1408b444c;
    }
  }
  iVar17 = *(int *)((longlong)plVar21 + 0x1e4);
  if (iVar17 != 0) {
    lVar32 = plVar21[0x37];
    FUN_140acda74(lVar32 + 800,iVar17);
    uVar18 = FUN_140acdace(lVar32 + 0x330,iVar17,0);
    *(undefined4 *)(plVar21 + 0x4a) = uVar18;
  }
  iVar17 = (int)plVar21[0x3d];
  if (iVar17 != 0) {
    lVar32 = plVar21[0x37];
    FUN_140acda74(lVar32 + 0x348,iVar17);
    uVar18 = FUN_140acdace(lVar32 + 0x358,iVar17,0);
    *(undefined4 *)((longlong)plVar21 + 0x254) = uVar18;
  }
  iVar17 = *(int *)((longlong)plVar21 + 0x1ec);
  if (iVar17 != 0) {
    lVar32 = plVar21[0x37];
    FUN_140acda74(lVar32 + 0x370,iVar17);
    uVar18 = FUN_140acdace(lVar32 + 0x380,iVar17,0);
    *(undefined4 *)(plVar21 + 0x4b) = uVar18;
  }
  iVar17 = (int)plVar21[0x3e];
  if (iVar17 == 0) {
    iVar17 = *(int *)((longlong)plVar21 + 0x25c);
  }
  else {
    lVar32 = plVar21[0x37];
    FUN_140acda74(lVar32 + 0x398,iVar17);
    iVar17 = FUN_140acdace(lVar32 + 0x3a8,iVar17,0);
    *(int *)((longlong)plVar21 + 0x25c) = iVar17;
  }
  lVar32 = plVar21[0x37];
  plVar20 = (longlong *)((longlong)(int)plVar21[0x4a] * 0x40 + *(longlong *)(lVar32 + 800));
  puVar38 = (undefined8 *)
            ((longlong)*(int *)((longlong)plVar21 + 0x254) * 0x40 + *(longlong *)(lVar32 + 0x348));
  puVar37 = (undefined8 *)((longlong)(int)plVar21[0x4b] * 0x40 + *(longlong *)(lVar32 + 0x370));
  puVar40 = (undefined8 *)((longlong)iVar17 * 0x40 + *(longlong *)(lVar32 + 0x398));
  if (plVar21[6] == 0) {
    iVar17 = 0;
  }
  else {
    local_548 = (undefined4 *)*plVar20;
    uStack_2f0 = plVar20[1];
    local_538 = (longlong *)plVar20[2];
    uStack_2e0 = plVar20[3];
    local_2d8 = plVar20[4];
    lStack_2d0 = plVar20[5];
    local_2c8 = plVar20[6];
    uStack_2c0 = plVar20[7];
    lVar25 = local_2c8;
    lVar31 = uStack_2c0;
    local_2e8 = local_538;
    lVar33 = uStack_2e0;
    local_2f8 = local_548;
    lVar32 = uStack_2f0;
    plVar20[6] = CONCAT44(uStack_514,local_518);
    plVar20[7] = CONCAT44(uStack_50c,uStack_510);
    plVar20[4] = (longlong)&PTR_LAB_14be86390;
    plVar20[5] = (longlong)plVar21;
    plVar20[2] = 0;
    plVar20[3] = CONCAT44(uStack_52c,uStack_530);
    *plVar20 = (longlong)FUN_144631a1c;
    plVar20[1] = CONCAT44(uStack_53c,iStack_540);
    uStack_2f0._4_4_ = (uint)(uStack_2f0 >> 0x20);
    uStack_2e0._4_4_ = (undefined4)((ulonglong)uStack_2e0 >> 0x20);
    local_2c8._4_4_ = (undefined4)((ulonglong)local_2c8 >> 0x20);
    uStack_2c0._4_4_ = (undefined4)((ulonglong)uStack_2c0 >> 0x20);
    local_518 = (undefined4)local_2c8;
    uStack_514 = local_2c8._4_4_;
    uStack_510 = (undefined4)uStack_2c0;
    uStack_50c = uStack_2c0._4_4_;
    local_528 = local_2d8;
    lStack_520 = lStack_2d0;
    uStack_530 = (undefined4)uStack_2e0;
    uStack_52c = uStack_2e0._4_4_;
    iStack_540 = (int)uStack_2f0;
    uStack_53c = uStack_2f0._4_4_;
    if (local_548 != (undefined4 *)0x0) {
      plVar22 = local_538;
      if (local_538 == (longlong *)0x0) {
        plVar22 = &local_528;
      }
      uStack_2f0 = lVar32;
      uStack_2e0 = lVar33;
      local_2c8 = lVar25;
      uStack_2c0 = lVar31;
      (**(code **)(*plVar22 + 0x10))();
    }
    local_548 = (undefined4 *)*puVar38;
    uStack_2f0 = puVar38[1];
    local_538 = (longlong *)puVar38[2];
    uStack_2e0 = puVar38[3];
    local_2d8 = puVar38[4];
    lStack_2d0 = puVar38[5];
    local_2c8 = puVar38[6];
    uStack_2c0 = puVar38[7];
    uVar13 = local_2c8;
    uVar14 = uStack_2c0;
    local_2e8 = local_538;
    uVar12 = uStack_2e0;
    local_2f8 = local_548;
    uVar26 = uStack_2f0;
    puVar38[6] = CONCAT44(uStack_514,local_518);
    puVar38[7] = CONCAT44(uStack_50c,uStack_510);
    puVar38[4] = &PTR_LAB_14be863b0;
    puVar38[5] = plVar21;
    puVar38[2] = 0;
    puVar38[3] = CONCAT44(uStack_52c,uStack_530);
    *puVar38 = &LAB_144631a84;
    puVar38[1] = CONCAT44(uStack_53c,iStack_540);
    uStack_2f0._4_4_ = (uint)(uStack_2f0 >> 0x20);
    uStack_2e0._4_4_ = (undefined4)((ulonglong)uStack_2e0 >> 0x20);
    local_2c8._4_4_ = (undefined4)((ulonglong)local_2c8 >> 0x20);
    uStack_2c0._4_4_ = (undefined4)((ulonglong)uStack_2c0 >> 0x20);
    local_518 = (undefined4)local_2c8;
    uStack_514 = local_2c8._4_4_;
    uStack_510 = (undefined4)uStack_2c0;
    uStack_50c = uStack_2c0._4_4_;
    local_528 = local_2d8;
    lStack_520 = lStack_2d0;
    uStack_530 = (undefined4)uStack_2e0;
    uStack_52c = uStack_2e0._4_4_;
    iStack_540 = (int)uStack_2f0;
    uStack_53c = uStack_2f0._4_4_;
    uStack_2f0 = uVar26;
    uStack_2e0 = uVar12;
    local_2c8 = uVar13;
    uStack_2c0 = uVar14;
    if (local_548 != (undefined4 *)0x0) {
      plVar22 = &local_528;
      if (local_538 != (longlong *)0x0) {
        plVar22 = local_538;
      }
      (**(code **)(*plVar22 + 0x10))(plVar22);
    }
    iVar17 = 1;
  }
  if (plVar21[4] != 0) {
    uVar26 = (ulonglong)(uint)(iVar17 << 6);
    local_548 = *(undefined4 **)((longlong)plVar20 + uVar26);
    uStack_2f0 = ((longlong *)((longlong)plVar20 + uVar26))[1];
    puVar4 = (undefined8 *)((longlong)plVar20 + uVar26 + 0x10);
    local_538 = (longlong *)*puVar4;
    uStack_2e0 = puVar4[1];
    plVar22 = (longlong *)((longlong)plVar20 + uVar26 + 0x20);
    local_2d8 = *plVar22;
    lStack_2d0 = plVar22[1];
    puVar4 = (undefined8 *)((longlong)plVar20 + uVar26 + 0x30);
    local_2c8 = *puVar4;
    uStack_2c0 = puVar4[1];
    uVar13 = local_2c8;
    uVar14 = uStack_2c0;
    local_2e8 = local_538;
    uVar12 = uStack_2e0;
    local_2f8 = local_548;
    lVar32 = uStack_2f0;
    puVar4 = (undefined8 *)((longlong)plVar20 + uVar26 + 0x30);
    *puVar4 = CONCAT44(uStack_514,local_518);
    puVar4[1] = CONCAT44(uStack_50c,uStack_510);
    puVar4 = (undefined8 *)((longlong)plVar20 + uVar26 + 0x20);
    *puVar4 = &PTR_LAB_14be863d0;
    puVar4[1] = plVar21;
    puVar4 = (undefined8 *)((longlong)plVar20 + uVar26 + 0x10);
    *puVar4 = 0;
    puVar4[1] = CONCAT44(uStack_52c,uStack_530);
    *(undefined8 *)((longlong)plVar20 + uVar26) = FUN_144631ade;
    ((undefined8 *)((longlong)plVar20 + uVar26))[1] = CONCAT44(uStack_53c,iStack_540);
    uStack_2f0._4_4_ = (uint)(uStack_2f0 >> 0x20);
    uStack_2e0._4_4_ = (undefined4)((ulonglong)uStack_2e0 >> 0x20);
    local_2c8._4_4_ = (undefined4)((ulonglong)local_2c8 >> 0x20);
    uStack_2c0._4_4_ = (undefined4)((ulonglong)uStack_2c0 >> 0x20);
    local_518 = (undefined4)local_2c8;
    uStack_514 = local_2c8._4_4_;
    uStack_510 = (undefined4)uStack_2c0;
    uStack_50c = uStack_2c0._4_4_;
    local_528 = local_2d8;
    lStack_520 = lStack_2d0;
    uStack_530 = (undefined4)uStack_2e0;
    uStack_52c = uStack_2e0._4_4_;
    iStack_540 = (int)uStack_2f0;
    uStack_53c = uStack_2f0._4_4_;
    if (local_548 != (undefined4 *)0x0) {
      plVar22 = local_538;
      if (local_538 == (longlong *)0x0) {
        plVar22 = &local_528;
      }
      uStack_2f0 = lVar32;
      uStack_2e0 = uVar12;
      local_2c8 = uVar13;
      uStack_2c0 = uVar14;
      (**(code **)(*plVar22 + 0x10))();
    }
    uVar24 = (ulonglong)(uint)(iVar17 << 6);
    local_548 = *(undefined4 **)((longlong)puVar38 + uVar24);
    uStack_2f0 = ((undefined8 *)((longlong)puVar38 + uVar24))[1];
    puVar4 = (undefined8 *)((longlong)puVar38 + uVar24 + 0x10);
    local_538 = (longlong *)*puVar4;
    uStack_2e0 = puVar4[1];
    plVar22 = (longlong *)((longlong)puVar38 + uVar24 + 0x20);
    local_2d8 = *plVar22;
    lStack_2d0 = plVar22[1];
    puVar4 = (undefined8 *)((longlong)puVar38 + uVar24 + 0x30);
    local_2c8 = *puVar4;
    uStack_2c0 = puVar4[1];
    uVar13 = local_2c8;
    uVar14 = uStack_2c0;
    local_2e8 = local_538;
    uVar12 = uStack_2e0;
    local_2f8 = local_548;
    uVar26 = uStack_2f0;
    puVar4 = (undefined8 *)((longlong)puVar38 + uVar24 + 0x30);
    *puVar4 = CONCAT44(uStack_514,local_518);
    puVar4[1] = CONCAT44(uStack_50c,uStack_510);
    puVar4 = (undefined8 *)((longlong)puVar38 + uVar24 + 0x20);
    *puVar4 = &PTR_LAB_14be863f0;
    puVar4[1] = plVar21;
    puVar4 = (undefined8 *)((longlong)puVar38 + uVar24 + 0x10);
    *puVar4 = 0;
    puVar4[1] = CONCAT44(uStack_52c,uStack_530);
    *(undefined8 *)((longlong)puVar38 + uVar24) = &LAB_144631b46;
    ((undefined8 *)((longlong)puVar38 + uVar24))[1] = CONCAT44(uStack_53c,iStack_540);
    uStack_2f0._4_4_ = (uint)(uStack_2f0 >> 0x20);
    uStack_2e0._4_4_ = (undefined4)((ulonglong)uStack_2e0 >> 0x20);
    local_2c8._4_4_ = (undefined4)((ulonglong)local_2c8 >> 0x20);
    uStack_2c0._4_4_ = (undefined4)((ulonglong)uStack_2c0 >> 0x20);
    local_518 = (undefined4)local_2c8;
    uStack_514 = local_2c8._4_4_;
    uStack_510 = (undefined4)uStack_2c0;
    uStack_50c = uStack_2c0._4_4_;
    local_528 = local_2d8;
    lStack_520 = lStack_2d0;
    uStack_530 = (undefined4)uStack_2e0;
    uStack_52c = uStack_2e0._4_4_;
    iStack_540 = (int)uStack_2f0;
    uStack_53c = uStack_2f0._4_4_;
    uStack_2f0 = uVar26;
    uStack_2e0 = uVar12;
    local_2c8 = uVar13;
    uStack_2c0 = uVar14;
    if (local_548 != (undefined4 *)0x0) {
      plVar22 = &local_528;
      if (local_538 != (longlong *)0x0) {
        plVar22 = local_538;
      }
      (**(code **)(*plVar22 + 0x10))(plVar22);
    }
    iVar17 = iVar17 + 1;
  }
  if (plVar21[2] != 0) {
    uVar26 = (ulonglong)(uint)(iVar17 << 6);
    local_548 = *(undefined4 **)((longlong)plVar20 + uVar26);
    uStack_2f0 = ((longlong *)((longlong)plVar20 + uVar26))[1];
    puVar4 = (undefined8 *)((longlong)plVar20 + uVar26 + 0x10);
    local_538 = (longlong *)*puVar4;
    uStack_2e0 = puVar4[1];
    plVar22 = (longlong *)((longlong)plVar20 + uVar26 + 0x20);
    local_2d8 = *plVar22;
    lStack_2d0 = plVar22[1];
    puVar4 = (undefined8 *)((longlong)plVar20 + uVar26 + 0x30);
    local_2c8 = *puVar4;
    uStack_2c0 = puVar4[1];
    uVar13 = local_2c8;
    uVar14 = uStack_2c0;
    local_2e8 = local_538;
    uVar12 = uStack_2e0;
    local_2f8 = local_548;
    lVar32 = uStack_2f0;
    puVar4 = (undefined8 *)((longlong)plVar20 + uVar26 + 0x30);
    *puVar4 = CONCAT44(uStack_514,local_518);
    puVar4[1] = CONCAT44(uStack_50c,uStack_510);
    puVar4 = (undefined8 *)((longlong)plVar20 + uVar26 + 0x20);
    *puVar4 = &PTR_LAB_14be86410;
    puVar4[1] = plVar21;
    puVar4 = (undefined8 *)((longlong)plVar20 + uVar26 + 0x10);
    *puVar4 = 0;
    puVar4[1] = CONCAT44(uStack_52c,uStack_530);
    *(undefined8 *)((longlong)plVar20 + uVar26) = FUN_144631ba0;
    ((undefined8 *)((longlong)plVar20 + uVar26))[1] = CONCAT44(uStack_53c,iStack_540);
    uStack_2f0._4_4_ = (uint)(uStack_2f0 >> 0x20);
    uStack_2e0._4_4_ = (undefined4)((ulonglong)uStack_2e0 >> 0x20);
    local_2c8._4_4_ = (undefined4)((ulonglong)local_2c8 >> 0x20);
    uStack_2c0._4_4_ = (undefined4)((ulonglong)uStack_2c0 >> 0x20);
    local_518 = (undefined4)local_2c8;
    uStack_514 = local_2c8._4_4_;
    uStack_510 = (undefined4)uStack_2c0;
    uStack_50c = uStack_2c0._4_4_;
    local_528 = local_2d8;
    lStack_520 = lStack_2d0;
    uStack_530 = (undefined4)uStack_2e0;
    uStack_52c = uStack_2e0._4_4_;
    iStack_540 = (int)uStack_2f0;
    uStack_53c = uStack_2f0._4_4_;
    if (local_548 != (undefined4 *)0x0) {
      plVar22 = local_538;
      if (local_538 == (longlong *)0x0) {
        plVar22 = &local_528;
      }
      uStack_2f0 = lVar32;
      uStack_2e0 = uVar12;
      local_2c8 = uVar13;
      uStack_2c0 = uVar14;
      (**(code **)(*plVar22 + 0x10))();
    }
    uVar24 = (ulonglong)(uint)(iVar17 << 6);
    local_548 = *(undefined4 **)((longlong)puVar38 + uVar24);
    uStack_2f0 = ((undefined8 *)((longlong)puVar38 + uVar24))[1];
    puVar4 = (undefined8 *)((longlong)puVar38 + uVar24 + 0x10);
    local_538 = (longlong *)*puVar4;
    uStack_2e0 = puVar4[1];
    plVar22 = (longlong *)((longlong)puVar38 + uVar24 + 0x20);
    local_2d8 = *plVar22;
    lStack_2d0 = plVar22[1];
    puVar4 = (undefined8 *)((longlong)puVar38 + uVar24 + 0x30);
    local_2c8 = *puVar4;
    uStack_2c0 = puVar4[1];
    uVar13 = local_2c8;
    uVar14 = uStack_2c0;
    local_2e8 = local_538;
    uVar12 = uStack_2e0;
    local_2f8 = local_548;
    uVar26 = uStack_2f0;
    puVar4 = (undefined8 *)((longlong)puVar38 + uVar24 + 0x30);
    *puVar4 = CONCAT44(uStack_514,local_518);
    puVar4[1] = CONCAT44(uStack_50c,uStack_510);
    puVar4 = (undefined8 *)((longlong)puVar38 + uVar24 + 0x20);
    *puVar4 = &PTR_LAB_14be86430;
    puVar4[1] = plVar21;
    puVar4 = (undefined8 *)((longlong)puVar38 + uVar24 + 0x10);
    *puVar4 = 0;
    puVar4[1] = CONCAT44(uStack_52c,uStack_530);
    *(undefined8 *)((longlong)puVar38 + uVar24) = &LAB_144631d9e;
    ((undefined8 *)((longlong)puVar38 + uVar24))[1] = CONCAT44(uStack_53c,iStack_540);
    uStack_2f0._4_4_ = (uint)(uStack_2f0 >> 0x20);
    uStack_2e0._4_4_ = (undefined4)((ulonglong)uStack_2e0 >> 0x20);
    local_2c8._4_4_ = (undefined4)((ulonglong)local_2c8 >> 0x20);
    uStack_2c0._4_4_ = (undefined4)((ulonglong)uStack_2c0 >> 0x20);
    local_518 = (undefined4)local_2c8;
    uStack_514 = local_2c8._4_4_;
    uStack_510 = (undefined4)uStack_2c0;
    uStack_50c = uStack_2c0._4_4_;
    local_528 = local_2d8;
    lStack_520 = lStack_2d0;
    uStack_530 = (undefined4)uStack_2e0;
    uStack_52c = uStack_2e0._4_4_;
    iStack_540 = (int)uStack_2f0;
    uStack_53c = uStack_2f0._4_4_;
    uStack_2f0 = uVar26;
    uStack_2e0 = uVar12;
    local_2c8 = uVar13;
    uStack_2c0 = uVar14;
    if (local_548 != (undefined4 *)0x0) {
      plVar22 = &local_528;
      if (local_538 != (longlong *)0x0) {
        plVar22 = local_538;
      }
      (**(code **)(*plVar22 + 0x10))(plVar22);
    }
    iVar17 = iVar17 + 1;
  }
  if (plVar21[8] != 0) {
    uVar26 = (ulonglong)(uint)(iVar17 << 6);
    local_548 = *(undefined4 **)((longlong)plVar20 + uVar26);
    uStack_2f0 = ((longlong *)((longlong)plVar20 + uVar26))[1];
    puVar4 = (undefined8 *)((longlong)plVar20 + uVar26 + 0x10);
    local_538 = (longlong *)*puVar4;
    uStack_2e0 = puVar4[1];
    plVar22 = (longlong *)((longlong)plVar20 + uVar26 + 0x20);
    local_2d8 = *plVar22;
    lStack_2d0 = plVar22[1];
    puVar4 = (undefined8 *)((longlong)plVar20 + uVar26 + 0x30);
    local_2c8 = *puVar4;
    uStack_2c0 = puVar4[1];
    uVar13 = local_2c8;
    uVar14 = uStack_2c0;
    local_2e8 = local_538;
    uVar12 = uStack_2e0;
    local_2f8 = local_548;
    lVar32 = uStack_2f0;
    puVar4 = (undefined8 *)((longlong)plVar20 + uVar26 + 0x30);
    *puVar4 = CONCAT44(uStack_514,local_518);
    puVar4[1] = CONCAT44(uStack_50c,uStack_510);
    puVar4 = (undefined8 *)((longlong)plVar20 + uVar26 + 0x20);
    *puVar4 = &PTR_LAB_14be86450;
    puVar4[1] = plVar21;
    puVar4 = (undefined8 *)((longlong)plVar20 + uVar26 + 0x10);
    *puVar4 = 0;
    puVar4[1] = CONCAT44(uStack_52c,uStack_530);
    *(undefined8 *)((longlong)plVar20 + uVar26) = FUN_144631df8;
    ((undefined8 *)((longlong)plVar20 + uVar26))[1] = CONCAT44(uStack_53c,iStack_540);
    uStack_2f0._4_4_ = (uint)(uStack_2f0 >> 0x20);
    uStack_2e0._4_4_ = (undefined4)((ulonglong)uStack_2e0 >> 0x20);
    local_2c8._4_4_ = (undefined4)((ulonglong)local_2c8 >> 0x20);
    uStack_2c0._4_4_ = (undefined4)((ulonglong)uStack_2c0 >> 0x20);
    local_518 = (undefined4)local_2c8;
    uStack_514 = local_2c8._4_4_;
    uStack_510 = (undefined4)uStack_2c0;
    uStack_50c = uStack_2c0._4_4_;
    local_528 = local_2d8;
    lStack_520 = lStack_2d0;
    uStack_530 = (undefined4)uStack_2e0;
    uStack_52c = uStack_2e0._4_4_;
    iStack_540 = (int)uStack_2f0;
    uStack_53c = uStack_2f0._4_4_;
    if (local_548 != (undefined4 *)0x0) {
      plVar22 = local_538;
      if (local_538 == (longlong *)0x0) {
        plVar22 = &local_528;
      }
      uStack_2f0 = lVar32;
      uStack_2e0 = uVar12;
      local_2c8 = uVar13;
      uStack_2c0 = uVar14;
      (**(code **)(*plVar22 + 0x10))();
    }
    uVar24 = (ulonglong)(uint)(iVar17 << 6);
    local_548 = *(undefined4 **)((longlong)puVar38 + uVar24);
    uStack_2f0 = ((undefined8 *)((longlong)puVar38 + uVar24))[1];
    puVar4 = (undefined8 *)((longlong)puVar38 + uVar24 + 0x10);
    local_538 = (longlong *)*puVar4;
    uStack_2e0 = puVar4[1];
    plVar22 = (longlong *)((longlong)puVar38 + uVar24 + 0x20);
    local_2d8 = *plVar22;
    lStack_2d0 = plVar22[1];
    puVar4 = (undefined8 *)((longlong)puVar38 + uVar24 + 0x30);
    local_2c8 = *puVar4;
    uStack_2c0 = puVar4[1];
    uVar13 = local_2c8;
    uVar14 = uStack_2c0;
    local_2e8 = local_538;
    uVar12 = uStack_2e0;
    local_2f8 = local_548;
    uVar26 = uStack_2f0;
    puVar4 = (undefined8 *)((longlong)puVar38 + uVar24 + 0x30);
    *puVar4 = CONCAT44(uStack_514,local_518);
    puVar4[1] = CONCAT44(uStack_50c,uStack_510);
    puVar4 = (undefined8 *)((longlong)puVar38 + uVar24 + 0x20);
    *puVar4 = &PTR_LAB_14be86470;
    puVar4[1] = plVar21;
    puVar4 = (undefined8 *)((longlong)puVar38 + uVar24 + 0x10);
    *puVar4 = 0;
    puVar4[1] = CONCAT44(uStack_52c,uStack_530);
    *(undefined8 *)((longlong)puVar38 + uVar24) = &LAB_144631e84;
    ((undefined8 *)((longlong)puVar38 + uVar24))[1] = CONCAT44(uStack_53c,iStack_540);
    uStack_2f0._4_4_ = (uint)(uStack_2f0 >> 0x20);
    uStack_2e0._4_4_ = (undefined4)((ulonglong)uStack_2e0 >> 0x20);
    local_2c8._4_4_ = (undefined4)((ulonglong)local_2c8 >> 0x20);
    uStack_2c0._4_4_ = (undefined4)((ulonglong)uStack_2c0 >> 0x20);
    local_518 = (undefined4)local_2c8;
    uStack_514 = local_2c8._4_4_;
    uStack_510 = (undefined4)uStack_2c0;
    uStack_50c = uStack_2c0._4_4_;
    local_528 = local_2d8;
    lStack_520 = lStack_2d0;
    uStack_530 = (undefined4)uStack_2e0;
    uStack_52c = uStack_2e0._4_4_;
    iStack_540 = (int)uStack_2f0;
    uStack_53c = uStack_2f0._4_4_;
    uStack_2f0 = uVar26;
    uStack_2e0 = uVar12;
    local_2c8 = uVar13;
    uStack_2c0 = uVar14;
    if (local_548 != (undefined4 *)0x0) {
      plVar22 = &local_528;
      if (local_538 != (longlong *)0x0) {
        plVar22 = local_538;
      }
      (**(code **)(*plVar22 + 0x10))(plVar22);
    }
    iVar17 = iVar17 + 1;
  }
  if (plVar21[0xc] != 0) {
    uVar26 = (ulonglong)(uint)(iVar17 << 6);
    local_548 = *(undefined4 **)((longlong)plVar20 + uVar26);
    uStack_2f0 = ((longlong *)((longlong)plVar20 + uVar26))[1];
    puVar4 = (undefined8 *)((longlong)plVar20 + uVar26 + 0x10);
    local_538 = (longlong *)*puVar4;
    uStack_2e0 = puVar4[1];
    plVar22 = (longlong *)((longlong)plVar20 + uVar26 + 0x20);
    local_2d8 = *plVar22;
    lStack_2d0 = plVar22[1];
    puVar4 = (undefined8 *)((longlong)plVar20 + uVar26 + 0x30);
    local_2c8 = *puVar4;
    uStack_2c0 = puVar4[1];
    uVar13 = local_2c8;
    uVar14 = uStack_2c0;
    local_2e8 = local_538;
    uVar12 = uStack_2e0;
    local_2f8 = local_548;
    lVar32 = uStack_2f0;
    puVar4 = (undefined8 *)((longlong)plVar20 + uVar26 + 0x30);
    *puVar4 = CONCAT44(uStack_514,local_518);
    puVar4[1] = CONCAT44(uStack_50c,uStack_510);
    puVar4 = (undefined8 *)((longlong)plVar20 + uVar26 + 0x20);
    *puVar4 = &PTR_LAB_14be86490;
    puVar4[1] = plVar21;
    puVar4 = (undefined8 *)((longlong)plVar20 + uVar26 + 0x10);
    *puVar4 = 0;
    puVar4[1] = CONCAT44(uStack_52c,uStack_530);
    *(undefined8 *)((longlong)plVar20 + uVar26) = FUN_144631ede;
    ((undefined8 *)((longlong)plVar20 + uVar26))[1] = CONCAT44(uStack_53c,iStack_540);
    uStack_2f0._4_4_ = (uint)(uStack_2f0 >> 0x20);
    uStack_2e0._4_4_ = (undefined4)((ulonglong)uStack_2e0 >> 0x20);
    local_2c8._4_4_ = (undefined4)((ulonglong)local_2c8 >> 0x20);
    uStack_2c0._4_4_ = (undefined4)((ulonglong)uStack_2c0 >> 0x20);
    local_518 = (undefined4)local_2c8;
    uStack_514 = local_2c8._4_4_;
    uStack_510 = (undefined4)uStack_2c0;
    uStack_50c = uStack_2c0._4_4_;
    local_528 = local_2d8;
    lStack_520 = lStack_2d0;
    uStack_530 = (undefined4)uStack_2e0;
    uStack_52c = uStack_2e0._4_4_;
    iStack_540 = (int)uStack_2f0;
    uStack_53c = uStack_2f0._4_4_;
    if (local_548 != (undefined4 *)0x0) {
      plVar22 = local_538;
      if (local_538 == (longlong *)0x0) {
        plVar22 = &local_528;
      }
      uStack_2f0 = lVar32;
      uStack_2e0 = uVar12;
      local_2c8 = uVar13;
      uStack_2c0 = uVar14;
      (**(code **)(*plVar22 + 0x10))();
    }
    uVar24 = (ulonglong)(uint)(iVar17 << 6);
    local_548 = *(undefined4 **)((longlong)puVar38 + uVar24);
    uStack_2f0 = ((undefined8 *)((longlong)puVar38 + uVar24))[1];
    puVar4 = (undefined8 *)((longlong)puVar38 + uVar24 + 0x10);
    local_538 = (longlong *)*puVar4;
    uStack_2e0 = puVar4[1];
    plVar22 = (longlong *)((longlong)puVar38 + uVar24 + 0x20);
    local_2d8 = *plVar22;
    lStack_2d0 = plVar22[1];
    puVar4 = (undefined8 *)((longlong)puVar38 + uVar24 + 0x30);
    local_2c8 = *puVar4;
    uStack_2c0 = puVar4[1];
    uVar13 = local_2c8;
    uVar14 = uStack_2c0;
    local_2e8 = local_538;
    uVar12 = uStack_2e0;
    local_2f8 = local_548;
    uVar26 = uStack_2f0;
    puVar4 = (undefined8 *)((longlong)puVar38 + uVar24 + 0x30);
    *puVar4 = CONCAT44(uStack_514,local_518);
    puVar4[1] = CONCAT44(uStack_50c,uStack_510);
    puVar4 = (undefined8 *)((longlong)puVar38 + uVar24 + 0x20);
    *puVar4 = &PTR_LAB_14be864b0;
    puVar4[1] = plVar21;
    puVar4 = (undefined8 *)((longlong)puVar38 + uVar24 + 0x10);
    *puVar4 = 0;
    puVar4[1] = CONCAT44(uStack_52c,uStack_530);
    *(undefined8 *)((longlong)puVar38 + uVar24) = &LAB_144631f46;
    ((undefined8 *)((longlong)puVar38 + uVar24))[1] = CONCAT44(uStack_53c,iStack_540);
    uStack_2f0._4_4_ = (uint)(uStack_2f0 >> 0x20);
    uStack_2e0._4_4_ = (undefined4)((ulonglong)uStack_2e0 >> 0x20);
    local_2c8._4_4_ = (undefined4)((ulonglong)local_2c8 >> 0x20);
    uStack_2c0._4_4_ = (undefined4)((ulonglong)uStack_2c0 >> 0x20);
    local_518 = (undefined4)local_2c8;
    uStack_514 = local_2c8._4_4_;
    uStack_510 = (undefined4)uStack_2c0;
    uStack_50c = uStack_2c0._4_4_;
    local_528 = local_2d8;
    lStack_520 = lStack_2d0;
    uStack_530 = (undefined4)uStack_2e0;
    uStack_52c = uStack_2e0._4_4_;
    iStack_540 = (int)uStack_2f0;
    uStack_53c = uStack_2f0._4_4_;
    uStack_2f0 = uVar26;
    uStack_2e0 = uVar12;
    local_2c8 = uVar13;
    uStack_2c0 = uVar14;
    if (local_548 != (undefined4 *)0x0) {
      plVar22 = &local_528;
      if (local_538 != (longlong *)0x0) {
        plVar22 = local_538;
      }
      (**(code **)(*plVar22 + 0x10))(plVar22);
    }
    iVar17 = iVar17 + 1;
  }
  if (plVar21[10] != 0) {
    uVar26 = (ulonglong)(uint)(iVar17 << 6);
    local_548 = *(undefined4 **)((longlong)plVar20 + uVar26);
    uStack_2f0 = ((longlong *)((longlong)plVar20 + uVar26))[1];
    puVar4 = (undefined8 *)((longlong)plVar20 + uVar26 + 0x10);
    local_538 = (longlong *)*puVar4;
    uStack_2e0 = puVar4[1];
    plVar22 = (longlong *)((longlong)plVar20 + uVar26 + 0x20);
    local_2d8 = *plVar22;
    lStack_2d0 = plVar22[1];
    puVar4 = (undefined8 *)((longlong)plVar20 + uVar26 + 0x30);
    local_2c8 = *puVar4;
    uStack_2c0 = puVar4[1];
    uVar13 = local_2c8;
    uVar14 = uStack_2c0;
    local_2e8 = local_538;
    uVar12 = uStack_2e0;
    local_2f8 = local_548;
    lVar32 = uStack_2f0;
    puVar4 = (undefined8 *)((longlong)plVar20 + uVar26 + 0x30);
    *puVar4 = CONCAT44(uStack_514,local_518);
    puVar4[1] = CONCAT44(uStack_50c,uStack_510);
    puVar4 = (undefined8 *)((longlong)plVar20 + uVar26 + 0x20);
    *puVar4 = &PTR_LAB_14be864d0;
    puVar4[1] = plVar21;
    puVar4 = (undefined8 *)((longlong)plVar20 + uVar26 + 0x10);
    *puVar4 = 0;
    puVar4[1] = CONCAT44(uStack_52c,uStack_530);
    *(undefined8 *)((longlong)plVar20 + uVar26) = FUN_144631fa0;
    ((undefined8 *)((longlong)plVar20 + uVar26))[1] = CONCAT44(uStack_53c,iStack_540);
    uStack_2f0._4_4_ = (uint)(uStack_2f0 >> 0x20);
    uStack_2e0._4_4_ = (undefined4)((ulonglong)uStack_2e0 >> 0x20);
    local_2c8._4_4_ = (undefined4)((ulonglong)local_2c8 >> 0x20);
    uStack_2c0._4_4_ = (undefined4)((ulonglong)uStack_2c0 >> 0x20);
    local_518 = (undefined4)local_2c8;
    uStack_514 = local_2c8._4_4_;
    uStack_510 = (undefined4)uStack_2c0;
    uStack_50c = uStack_2c0._4_4_;
    local_528 = local_2d8;
    lStack_520 = lStack_2d0;
    uStack_530 = (undefined4)uStack_2e0;
    uStack_52c = uStack_2e0._4_4_;
    iStack_540 = (int)uStack_2f0;
    uStack_53c = uStack_2f0._4_4_;
    if (local_548 != (undefined4 *)0x0) {
      plVar22 = local_538;
      if (local_538 == (longlong *)0x0) {
        plVar22 = &local_528;
      }
      uStack_2f0 = lVar32;
      uStack_2e0 = uVar12;
      local_2c8 = uVar13;
      uStack_2c0 = uVar14;
      (**(code **)(*plVar22 + 0x10))();
    }
    uVar24 = (ulonglong)(uint)(iVar17 << 6);
    local_548 = *(undefined4 **)((longlong)puVar38 + uVar24);
    uStack_2f0 = ((undefined8 *)((longlong)puVar38 + uVar24))[1];
    puVar4 = (undefined8 *)((longlong)puVar38 + uVar24 + 0x10);
    local_538 = (longlong *)*puVar4;
    uStack_2e0 = puVar4[1];
    plVar22 = (longlong *)((longlong)puVar38 + uVar24 + 0x20);
    local_2d8 = *plVar22;
    lStack_2d0 = plVar22[1];
    puVar4 = (undefined8 *)((longlong)puVar38 + uVar24 + 0x30);
    local_2c8 = *puVar4;
    uStack_2c0 = puVar4[1];
    uVar13 = local_2c8;
    uVar14 = uStack_2c0;
    local_2e8 = local_538;
    uVar12 = uStack_2e0;
    local_2f8 = local_548;
    uVar26 = uStack_2f0;
    puVar4 = (undefined8 *)((longlong)puVar38 + uVar24 + 0x30);
    *puVar4 = CONCAT44(uStack_514,local_518);
    puVar4[1] = CONCAT44(uStack_50c,uStack_510);
    puVar4 = (undefined8 *)((longlong)puVar38 + uVar24 + 0x20);
    *puVar4 = &PTR_LAB_14be864f0;
    puVar4[1] = plVar21;
    puVar4 = (undefined8 *)((longlong)puVar38 + uVar24 + 0x10);
    *puVar4 = 0;
    puVar4[1] = CONCAT44(uStack_52c,uStack_530);
    *(undefined8 *)((longlong)puVar38 + uVar24) = &LAB_14463219e;
    ((undefined8 *)((longlong)puVar38 + uVar24))[1] = CONCAT44(uStack_53c,iStack_540);
    uStack_2f0._4_4_ = (uint)(uStack_2f0 >> 0x20);
    uStack_2e0._4_4_ = (undefined4)((ulonglong)uStack_2e0 >> 0x20);
    local_2c8._4_4_ = (undefined4)((ulonglong)local_2c8 >> 0x20);
    uStack_2c0._4_4_ = (undefined4)((ulonglong)uStack_2c0 >> 0x20);
    local_518 = (undefined4)local_2c8;
    uStack_514 = local_2c8._4_4_;
    uStack_510 = (undefined4)uStack_2c0;
    uStack_50c = uStack_2c0._4_4_;
    local_528 = local_2d8;
    lStack_520 = lStack_2d0;
    uStack_530 = (undefined4)uStack_2e0;
    uStack_52c = uStack_2e0._4_4_;
    iStack_540 = (int)uStack_2f0;
    uStack_53c = uStack_2f0._4_4_;
    uStack_2f0 = uVar26;
    uStack_2e0 = uVar12;
    local_2c8 = uVar13;
    uStack_2c0 = uVar14;
    if (local_548 != (undefined4 *)0x0) {
      plVar22 = &local_528;
      if (local_538 != (longlong *)0x0) {
        plVar22 = local_538;
      }
      (**(code **)(*plVar22 + 0x10))(plVar22);
    }
    iVar17 = iVar17 + 1;
  }
  if (plVar21[0xe] != 0) {
    uVar26 = (ulonglong)(uint)(iVar17 << 6);
    local_548 = *(undefined4 **)((longlong)plVar20 + uVar26);
    uStack_2f0 = ((longlong *)((longlong)plVar20 + uVar26))[1];
    puVar4 = (undefined8 *)((longlong)plVar20 + uVar26 + 0x10);
    local_538 = (longlong *)*puVar4;
    uStack_2e0 = puVar4[1];
    plVar22 = (longlong *)((longlong)plVar20 + uVar26 + 0x20);
    local_2d8 = *plVar22;
    lStack_2d0 = plVar22[1];
    puVar4 = (undefined8 *)((longlong)plVar20 + uVar26 + 0x30);
    local_2c8 = *puVar4;
    uStack_2c0 = puVar4[1];
    uVar13 = local_2c8;
    uVar14 = uStack_2c0;
    local_2e8 = local_538;
    uVar12 = uStack_2e0;
    local_2f8 = local_548;
    lVar32 = uStack_2f0;
    puVar4 = (undefined8 *)((longlong)plVar20 + uVar26 + 0x30);
    *puVar4 = CONCAT44(uStack_514,local_518);
    puVar4[1] = CONCAT44(uStack_50c,uStack_510);
    puVar4 = (undefined8 *)((longlong)plVar20 + uVar26 + 0x20);
    *puVar4 = &PTR_LAB_14be86510;
    puVar4[1] = plVar21;
    puVar4 = (undefined8 *)((longlong)plVar20 + uVar26 + 0x10);
    *puVar4 = 0;
    puVar4[1] = CONCAT44(uStack_52c,uStack_530);
    *(undefined8 *)((longlong)plVar20 + uVar26) = FUN_1446321f8;
    ((undefined8 *)((longlong)plVar20 + uVar26))[1] = CONCAT44(uStack_53c,iStack_540);
    uStack_2f0._4_4_ = (uint)(uStack_2f0 >> 0x20);
    uStack_2e0._4_4_ = (undefined4)((ulonglong)uStack_2e0 >> 0x20);
    local_2c8._4_4_ = (undefined4)((ulonglong)local_2c8 >> 0x20);
    uStack_2c0._4_4_ = (undefined4)((ulonglong)uStack_2c0 >> 0x20);
    local_518 = (undefined4)local_2c8;
    uStack_514 = local_2c8._4_4_;
    uStack_510 = (undefined4)uStack_2c0;
    uStack_50c = uStack_2c0._4_4_;
    local_528 = local_2d8;
    lStack_520 = lStack_2d0;
    uStack_530 = (undefined4)uStack_2e0;
    uStack_52c = uStack_2e0._4_4_;
    iStack_540 = (int)uStack_2f0;
    uStack_53c = uStack_2f0._4_4_;
    if (local_548 != (undefined4 *)0x0) {
      plVar22 = local_538;
      if (local_538 == (longlong *)0x0) {
        plVar22 = &local_528;
      }
      uStack_2f0 = lVar32;
      uStack_2e0 = uVar12;
      local_2c8 = uVar13;
      uStack_2c0 = uVar14;
      (**(code **)(*plVar22 + 0x10))();
    }
    uVar24 = (ulonglong)(uint)(iVar17 << 6);
    local_548 = *(undefined4 **)((longlong)puVar38 + uVar24);
    uStack_2f0 = ((undefined8 *)((longlong)puVar38 + uVar24))[1];
    puVar4 = (undefined8 *)((longlong)puVar38 + uVar24 + 0x10);
    local_538 = (longlong *)*puVar4;
    uStack_2e0 = puVar4[1];
    plVar22 = (longlong *)((longlong)puVar38 + uVar24 + 0x20);
    local_2d8 = *plVar22;
    lStack_2d0 = plVar22[1];
    puVar4 = (undefined8 *)((longlong)puVar38 + uVar24 + 0x30);
    local_2c8 = *puVar4;
    uStack_2c0 = puVar4[1];
    uVar13 = local_2c8;
    uVar14 = uStack_2c0;
    local_2e8 = local_538;
    uVar12 = uStack_2e0;
    local_2f8 = local_548;
    uVar26 = uStack_2f0;
    puVar4 = (undefined8 *)((longlong)puVar38 + uVar24 + 0x30);
    *puVar4 = CONCAT44(uStack_514,local_518);
    puVar4[1] = CONCAT44(uStack_50c,uStack_510);
    puVar4 = (undefined8 *)((longlong)puVar38 + uVar24 + 0x20);
    *puVar4 = &PTR_LAB_14be86530;
    puVar4[1] = plVar21;
    puVar4 = (undefined8 *)((longlong)puVar38 + uVar24 + 0x10);
    *puVar4 = 0;
    puVar4[1] = CONCAT44(uStack_52c,uStack_530);
    *(undefined8 *)((longlong)puVar38 + uVar24) = &LAB_14463227a;
    ((undefined8 *)((longlong)puVar38 + uVar24))[1] = CONCAT44(uStack_53c,iStack_540);
    uStack_2f0._4_4_ = (uint)(uStack_2f0 >> 0x20);
    uStack_2e0._4_4_ = (undefined4)((ulonglong)uStack_2e0 >> 0x20);
    local_2c8._4_4_ = (undefined4)((ulonglong)local_2c8 >> 0x20);
    uStack_2c0._4_4_ = (undefined4)((ulonglong)uStack_2c0 >> 0x20);
    local_518 = (undefined4)local_2c8;
    uStack_514 = local_2c8._4_4_;
    uStack_510 = (undefined4)uStack_2c0;
    uStack_50c = uStack_2c0._4_4_;
    local_528 = local_2d8;
    lStack_520 = lStack_2d0;
    uStack_530 = (undefined4)uStack_2e0;
    uStack_52c = uStack_2e0._4_4_;
    iStack_540 = (int)uStack_2f0;
    uStack_53c = uStack_2f0._4_4_;
    uStack_2f0 = uVar26;
    uStack_2e0 = uVar12;
    local_2c8 = uVar13;
    uStack_2c0 = uVar14;
    if (local_548 != (undefined4 *)0x0) {
      plVar22 = &local_528;
      if (local_538 != (longlong *)0x0) {
        plVar22 = local_538;
      }
      (**(code **)(*plVar22 + 0x10))(plVar22);
    }
    iVar17 = iVar17 + 1;
  }
  if (plVar21[0x10] != 0) {
    uVar26 = (ulonglong)(uint)(iVar17 << 6);
    local_548 = *(undefined4 **)((longlong)plVar20 + uVar26);
    uStack_2f0 = ((longlong *)((longlong)plVar20 + uVar26))[1];
    puVar4 = (undefined8 *)((longlong)plVar20 + uVar26 + 0x10);
    local_538 = (longlong *)*puVar4;
    uStack_2e0 = puVar4[1];
    plVar22 = (longlong *)((longlong)plVar20 + uVar26 + 0x20);
    local_2d8 = *plVar22;
    lStack_2d0 = plVar22[1];
    puVar4 = (undefined8 *)((longlong)plVar20 + uVar26 + 0x30);
    local_2c8 = *puVar4;
    uStack_2c0 = puVar4[1];
    uVar13 = local_2c8;
    uVar14 = uStack_2c0;
    local_2e8 = local_538;
    uVar12 = uStack_2e0;
    local_2f8 = local_548;
    lVar32 = uStack_2f0;
    puVar4 = (undefined8 *)((longlong)plVar20 + uVar26 + 0x30);
    *puVar4 = CONCAT44(uStack_514,local_518);
    puVar4[1] = CONCAT44(uStack_50c,uStack_510);
    puVar4 = (undefined8 *)((longlong)plVar20 + uVar26 + 0x20);
    *puVar4 = &PTR_LAB_14be86550;
    puVar4[1] = plVar21;
    puVar4 = (undefined8 *)((longlong)plVar20 + uVar26 + 0x10);
    *puVar4 = 0;
    puVar4[1] = CONCAT44(uStack_52c,uStack_530);
    *(undefined8 *)((longlong)plVar20 + uVar26) = &LAB_1446322d4;
    ((undefined8 *)((longlong)plVar20 + uVar26))[1] = CONCAT44(uStack_53c,iStack_540);
    uStack_2f0._4_4_ = (uint)(uStack_2f0 >> 0x20);
    uStack_2e0._4_4_ = (undefined4)((ulonglong)uStack_2e0 >> 0x20);
    local_2c8._4_4_ = (undefined4)((ulonglong)local_2c8 >> 0x20);
    uStack_2c0._4_4_ = (undefined4)((ulonglong)uStack_2c0 >> 0x20);
    local_518 = (undefined4)local_2c8;
    uStack_514 = local_2c8._4_4_;
    uStack_510 = (undefined4)uStack_2c0;
    uStack_50c = uStack_2c0._4_4_;
    local_528 = local_2d8;
    lStack_520 = lStack_2d0;
    uStack_530 = (undefined4)uStack_2e0;
    uStack_52c = uStack_2e0._4_4_;
    iStack_540 = (int)uStack_2f0;
    uStack_53c = uStack_2f0._4_4_;
    if (local_548 != (undefined4 *)0x0) {
      plVar22 = local_538;
      if (local_538 == (longlong *)0x0) {
        plVar22 = &local_528;
      }
      uStack_2f0 = lVar32;
      uStack_2e0 = uVar12;
      local_2c8 = uVar13;
      uStack_2c0 = uVar14;
      (**(code **)(*plVar22 + 0x10))();
    }
    uVar24 = (ulonglong)(uint)(iVar17 << 6);
    local_548 = *(undefined4 **)((longlong)puVar38 + uVar24);
    uStack_2f0 = ((undefined8 *)((longlong)puVar38 + uVar24))[1];
    puVar4 = (undefined8 *)((longlong)puVar38 + uVar24 + 0x10);
    local_538 = (longlong *)*puVar4;
    uStack_2e0 = puVar4[1];
    plVar22 = (longlong *)((longlong)puVar38 + uVar24 + 0x20);
    local_2d8 = *plVar22;
    lStack_2d0 = plVar22[1];
    puVar4 = (undefined8 *)((longlong)puVar38 + uVar24 + 0x30);
    local_2c8 = *puVar4;
    uStack_2c0 = puVar4[1];
    uVar13 = local_2c8;
    uVar14 = uStack_2c0;
    local_2e8 = local_538;
    uVar12 = uStack_2e0;
    local_2f8 = local_548;
    uVar26 = uStack_2f0;
    puVar4 = (undefined8 *)((longlong)puVar38 + uVar24 + 0x30);
    *puVar4 = CONCAT44(uStack_514,local_518);
    puVar4[1] = CONCAT44(uStack_50c,uStack_510);
    puVar4 = (undefined8 *)((longlong)puVar38 + uVar24 + 0x20);
    *puVar4 = &PTR_LAB_14be86570;
    puVar4[1] = plVar21;
    puVar4 = (undefined8 *)((longlong)puVar38 + uVar24 + 0x10);
    *puVar4 = 0;
    puVar4[1] = CONCAT44(uStack_52c,uStack_530);
    *(undefined8 *)((longlong)puVar38 + uVar24) = &LAB_1446323ae;
    ((undefined8 *)((longlong)puVar38 + uVar24))[1] = CONCAT44(uStack_53c,iStack_540);
    uStack_2f0._4_4_ = (uint)(uStack_2f0 >> 0x20);
    uStack_2e0._4_4_ = (undefined4)((ulonglong)uStack_2e0 >> 0x20);
    local_2c8._4_4_ = (undefined4)((ulonglong)local_2c8 >> 0x20);
    uStack_2c0._4_4_ = (undefined4)((ulonglong)uStack_2c0 >> 0x20);
    local_518 = (undefined4)local_2c8;
    uStack_514 = local_2c8._4_4_;
    uStack_510 = (undefined4)uStack_2c0;
    uStack_50c = uStack_2c0._4_4_;
    local_528 = local_2d8;
    lStack_520 = lStack_2d0;
    uStack_530 = (undefined4)uStack_2e0;
    uStack_52c = uStack_2e0._4_4_;
    iStack_540 = (int)uStack_2f0;
    uStack_53c = uStack_2f0._4_4_;
    uStack_2f0 = uVar26;
    uStack_2e0 = uVar12;
    local_2c8 = uVar13;
    uStack_2c0 = uVar14;
    if (local_548 != (undefined4 *)0x0) {
      plVar22 = &local_528;
      if (local_538 != (longlong *)0x0) {
        plVar22 = local_538;
      }
      (**(code **)(*plVar22 + 0x10))(plVar22);
    }
    iVar17 = iVar17 + 1;
  }
  if (plVar21[0x12] != 0) {
    uVar26 = (ulonglong)(uint)(iVar17 << 6);
    local_548 = *(undefined4 **)((longlong)plVar20 + uVar26);
    uStack_2f0 = ((longlong *)((longlong)plVar20 + uVar26))[1];
    puVar4 = (undefined8 *)((longlong)plVar20 + uVar26 + 0x10);
    local_538 = (longlong *)*puVar4;
    uStack_2e0 = puVar4[1];
    plVar22 = (longlong *)((longlong)plVar20 + uVar26 + 0x20);
    local_2d8 = *plVar22;
    lStack_2d0 = plVar22[1];
    puVar4 = (undefined8 *)((longlong)plVar20 + uVar26 + 0x30);
    local_2c8 = *puVar4;
    uStack_2c0 = puVar4[1];
    uVar13 = local_2c8;
    uVar14 = uStack_2c0;
    local_2e8 = local_538;
    uVar12 = uStack_2e0;
    local_2f8 = local_548;
    lVar32 = uStack_2f0;
    puVar4 = (undefined8 *)((longlong)plVar20 + uVar26 + 0x30);
    *puVar4 = CONCAT44(uStack_514,local_518);
    puVar4[1] = CONCAT44(uStack_50c,uStack_510);
    puVar4 = (undefined8 *)((longlong)plVar20 + uVar26 + 0x20);
    *puVar4 = &PTR_LAB_14be86590;
    puVar4[1] = plVar21;
    puVar4 = (undefined8 *)((longlong)plVar20 + uVar26 + 0x10);
    *puVar4 = 0;
    puVar4[1] = CONCAT44(uStack_52c,uStack_530);
    *(undefined8 *)((longlong)plVar20 + uVar26) = &LAB_14463240a;
    ((undefined8 *)((longlong)plVar20 + uVar26))[1] = CONCAT44(uStack_53c,iStack_540);
    uStack_2f0._4_4_ = (uint)(uStack_2f0 >> 0x20);
    uStack_2e0._4_4_ = (undefined4)((ulonglong)uStack_2e0 >> 0x20);
    local_2c8._4_4_ = (undefined4)((ulonglong)local_2c8 >> 0x20);
    uStack_2c0._4_4_ = (undefined4)((ulonglong)uStack_2c0 >> 0x20);
    local_518 = (undefined4)local_2c8;
    uStack_514 = local_2c8._4_4_;
    uStack_510 = (undefined4)uStack_2c0;
    uStack_50c = uStack_2c0._4_4_;
    local_528 = local_2d8;
    lStack_520 = lStack_2d0;
    uStack_530 = (undefined4)uStack_2e0;
    uStack_52c = uStack_2e0._4_4_;
    iStack_540 = (int)uStack_2f0;
    uStack_53c = uStack_2f0._4_4_;
    if (local_548 != (undefined4 *)0x0) {
      plVar22 = local_538;
      if (local_538 == (longlong *)0x0) {
        plVar22 = &local_528;
      }
      uStack_2f0 = lVar32;
      uStack_2e0 = uVar12;
      local_2c8 = uVar13;
      uStack_2c0 = uVar14;
      (**(code **)(*plVar22 + 0x10))();
    }
    uVar24 = (ulonglong)(uint)(iVar17 << 6);
    local_548 = *(undefined4 **)((longlong)puVar38 + uVar24);
    uStack_2f0 = ((undefined8 *)((longlong)puVar38 + uVar24))[1];
    puVar4 = (undefined8 *)((longlong)puVar38 + uVar24 + 0x10);
    local_538 = (longlong *)*puVar4;
    uStack_2e0 = puVar4[1];
    plVar22 = (longlong *)((longlong)puVar38 + uVar24 + 0x20);
    local_2d8 = *plVar22;
    lStack_2d0 = plVar22[1];
    puVar4 = (undefined8 *)((longlong)puVar38 + uVar24 + 0x30);
    local_2c8 = *puVar4;
    uStack_2c0 = puVar4[1];
    uVar13 = local_2c8;
    uVar14 = uStack_2c0;
    local_2e8 = local_538;
    uVar12 = uStack_2e0;
    local_2f8 = local_548;
    uVar26 = uStack_2f0;
    puVar4 = (undefined8 *)((longlong)puVar38 + uVar24 + 0x30);
    *puVar4 = CONCAT44(uStack_514,local_518);
    puVar4[1] = CONCAT44(uStack_50c,uStack_510);
    puVar4 = (undefined8 *)((longlong)puVar38 + uVar24 + 0x20);
    *puVar4 = &PTR_LAB_14be865b0;
    puVar4[1] = plVar21;
    puVar4 = (undefined8 *)((longlong)puVar38 + uVar24 + 0x10);
    *puVar4 = 0;
    puVar4[1] = CONCAT44(uStack_52c,uStack_530);
    *(undefined8 *)((longlong)puVar38 + uVar24) = &LAB_1446324e4;
    ((undefined8 *)((longlong)puVar38 + uVar24))[1] = CONCAT44(uStack_53c,iStack_540);
    uStack_2f0._4_4_ = (uint)(uStack_2f0 >> 0x20);
    uStack_2e0._4_4_ = (undefined4)((ulonglong)uStack_2e0 >> 0x20);
    local_2c8._4_4_ = (undefined4)((ulonglong)local_2c8 >> 0x20);
    uStack_2c0._4_4_ = (undefined4)((ulonglong)uStack_2c0 >> 0x20);
    local_518 = (undefined4)local_2c8;
    uStack_514 = local_2c8._4_4_;
    uStack_510 = (undefined4)uStack_2c0;
    uStack_50c = uStack_2c0._4_4_;
    local_528 = local_2d8;
    lStack_520 = lStack_2d0;
    uStack_530 = (undefined4)uStack_2e0;
    uStack_52c = uStack_2e0._4_4_;
    iStack_540 = (int)uStack_2f0;
    uStack_53c = uStack_2f0._4_4_;
    uStack_2f0 = uVar26;
    uStack_2e0 = uVar12;
    local_2c8 = uVar13;
    uStack_2c0 = uVar14;
    if (local_548 != (undefined4 *)0x0) {
      plVar22 = &local_528;
      if (local_538 != (longlong *)0x0) {
        plVar22 = local_538;
      }
      (**(code **)(*plVar22 + 0x10))(plVar22);
    }
    iVar17 = iVar17 + 1;
  }
  if (plVar21[0x16] != 0) {
    uVar26 = (ulonglong)(uint)(iVar17 << 6);
    local_548 = *(undefined4 **)((longlong)plVar20 + uVar26);
    uStack_2f0 = ((longlong *)((longlong)plVar20 + uVar26))[1];
    puVar4 = (undefined8 *)((longlong)plVar20 + uVar26 + 0x10);
    local_538 = (longlong *)*puVar4;
    uStack_2e0 = puVar4[1];
    plVar22 = (longlong *)((longlong)plVar20 + uVar26 + 0x20);
    local_2d8 = *plVar22;
    lStack_2d0 = plVar22[1];
    puVar4 = (undefined8 *)((longlong)plVar20 + uVar26 + 0x30);
    local_2c8 = *puVar4;
    uStack_2c0 = puVar4[1];
    uVar13 = local_2c8;
    uVar14 = uStack_2c0;
    local_2e8 = local_538;
    uVar12 = uStack_2e0;
    local_2f8 = local_548;
    lVar32 = uStack_2f0;
    puVar4 = (undefined8 *)((longlong)plVar20 + uVar26 + 0x30);
    *puVar4 = CONCAT44(uStack_514,local_518);
    puVar4[1] = CONCAT44(uStack_50c,uStack_510);
    puVar4 = (undefined8 *)((longlong)plVar20 + uVar26 + 0x20);
    *puVar4 = &PTR_LAB_14be865d0;
    puVar4[1] = plVar21;
    puVar4 = (undefined8 *)((longlong)plVar20 + uVar26 + 0x10);
    *puVar4 = 0;
    puVar4[1] = CONCAT44(uStack_52c,uStack_530);
    *(undefined8 *)((longlong)plVar20 + uVar26) = FUN_144632540;
    ((undefined8 *)((longlong)plVar20 + uVar26))[1] = CONCAT44(uStack_53c,iStack_540);
    uStack_2f0._4_4_ = (uint)(uStack_2f0 >> 0x20);
    uStack_2e0._4_4_ = (undefined4)((ulonglong)uStack_2e0 >> 0x20);
    local_2c8._4_4_ = (undefined4)((ulonglong)local_2c8 >> 0x20);
    uStack_2c0._4_4_ = (undefined4)((ulonglong)uStack_2c0 >> 0x20);
    local_518 = (undefined4)local_2c8;
    uStack_514 = local_2c8._4_4_;
    uStack_510 = (undefined4)uStack_2c0;
    uStack_50c = uStack_2c0._4_4_;
    local_528 = local_2d8;
    lStack_520 = lStack_2d0;
    uStack_530 = (undefined4)uStack_2e0;
    uStack_52c = uStack_2e0._4_4_;
    iStack_540 = (int)uStack_2f0;
    uStack_53c = uStack_2f0._4_4_;
    if (local_548 != (undefined4 *)0x0) {
      plVar22 = local_538;
      if (local_538 == (longlong *)0x0) {
        plVar22 = &local_528;
      }
      uStack_2f0 = lVar32;
      uStack_2e0 = uVar12;
      local_2c8 = uVar13;
      uStack_2c0 = uVar14;
      (**(code **)(*plVar22 + 0x10))();
    }
    uVar24 = (ulonglong)(uint)(iVar17 << 6);
    local_548 = *(undefined4 **)((longlong)puVar38 + uVar24);
    uStack_2f0 = ((undefined8 *)((longlong)puVar38 + uVar24))[1];
    puVar4 = (undefined8 *)((longlong)puVar38 + uVar24 + 0x10);
    local_538 = (longlong *)*puVar4;
    uStack_2e0 = puVar4[1];
    plVar22 = (longlong *)((longlong)puVar38 + uVar24 + 0x20);
    local_2d8 = *plVar22;
    lStack_2d0 = plVar22[1];
    puVar4 = (undefined8 *)((longlong)puVar38 + uVar24 + 0x30);
    local_2c8 = *puVar4;
    uStack_2c0 = puVar4[1];
    uVar13 = local_2c8;
    uVar14 = uStack_2c0;
    local_2e8 = local_538;
    uVar12 = uStack_2e0;
    local_2f8 = local_548;
    uVar26 = uStack_2f0;
    puVar4 = (undefined8 *)((longlong)puVar38 + uVar24 + 0x30);
    *puVar4 = CONCAT44(uStack_514,local_518);
    puVar4[1] = CONCAT44(uStack_50c,uStack_510);
    puVar4 = (undefined8 *)((longlong)puVar38 + uVar24 + 0x20);
    *puVar4 = &PTR_LAB_14be865f0;
    puVar4[1] = plVar21;
    puVar4 = (undefined8 *)((longlong)puVar38 + uVar24 + 0x10);
    *puVar4 = 0;
    puVar4[1] = CONCAT44(uStack_52c,uStack_530);
    *(undefined8 *)((longlong)puVar38 + uVar24) = FUN_144632656;
    ((undefined8 *)((longlong)puVar38 + uVar24))[1] = CONCAT44(uStack_53c,iStack_540);
    uStack_2f0._4_4_ = (uint)(uStack_2f0 >> 0x20);
    uStack_2e0._4_4_ = (undefined4)((ulonglong)uStack_2e0 >> 0x20);
    local_2c8._4_4_ = (undefined4)((ulonglong)local_2c8 >> 0x20);
    uStack_2c0._4_4_ = (undefined4)((ulonglong)uStack_2c0 >> 0x20);
    local_518 = (undefined4)local_2c8;
    uStack_514 = local_2c8._4_4_;
    uStack_510 = (undefined4)uStack_2c0;
    uStack_50c = uStack_2c0._4_4_;
    local_528 = local_2d8;
    lStack_520 = lStack_2d0;
    uStack_530 = (undefined4)uStack_2e0;
    uStack_52c = uStack_2e0._4_4_;
    iStack_540 = (int)uStack_2f0;
    uStack_53c = uStack_2f0._4_4_;
    uStack_2f0 = uVar26;
    uStack_2e0 = uVar12;
    local_2c8 = uVar13;
    uStack_2c0 = uVar14;
    if (local_548 != (undefined4 *)0x0) {
      plVar22 = &local_528;
      if (local_538 != (longlong *)0x0) {
        plVar22 = local_538;
      }
      (**(code **)(*plVar22 + 0x10))(plVar22);
    }
    iVar17 = iVar17 + 1;
  }
  if (plVar21[0x14] != 0) {
    uVar26 = (ulonglong)(uint)(iVar17 << 6);
    local_548 = *(undefined4 **)((longlong)plVar20 + uVar26);
    uStack_2f0 = ((longlong *)((longlong)plVar20 + uVar26))[1];
    puVar4 = (undefined8 *)((longlong)plVar20 + uVar26 + 0x10);
    local_538 = (longlong *)*puVar4;
    uStack_2e0 = puVar4[1];
    plVar22 = (longlong *)((longlong)plVar20 + uVar26 + 0x20);
    local_2d8 = *plVar22;
    lStack_2d0 = plVar22[1];
    puVar4 = (undefined8 *)((longlong)plVar20 + uVar26 + 0x30);
    local_2c8 = *puVar4;
    uStack_2c0 = puVar4[1];
    uVar13 = local_2c8;
    uVar14 = uStack_2c0;
    local_2e8 = local_538;
    uVar12 = uStack_2e0;
    local_2f8 = local_548;
    lVar32 = uStack_2f0;
    puVar4 = (undefined8 *)((longlong)plVar20 + uVar26 + 0x30);
    *puVar4 = CONCAT44(uStack_514,local_518);
    puVar4[1] = CONCAT44(uStack_50c,uStack_510);
    puVar4 = (undefined8 *)((longlong)plVar20 + uVar26 + 0x20);
    *puVar4 = &PTR_LAB_14be86610;
    puVar4[1] = plVar21;
    puVar4 = (undefined8 *)((longlong)plVar20 + uVar26 + 0x10);
    *puVar4 = 0;
    puVar4[1] = CONCAT44(uStack_52c,uStack_530);
    *(undefined8 *)((longlong)plVar20 + uVar26) = FUN_144632b5e;
    ((undefined8 *)((longlong)plVar20 + uVar26))[1] = CONCAT44(uStack_53c,iStack_540);
    uStack_2f0._4_4_ = (uint)(uStack_2f0 >> 0x20);
    uStack_2e0._4_4_ = (undefined4)((ulonglong)uStack_2e0 >> 0x20);
    local_2c8._4_4_ = (undefined4)((ulonglong)local_2c8 >> 0x20);
    uStack_2c0._4_4_ = (undefined4)((ulonglong)uStack_2c0 >> 0x20);
    local_518 = (undefined4)local_2c8;
    uStack_514 = local_2c8._4_4_;
    uStack_510 = (undefined4)uStack_2c0;
    uStack_50c = uStack_2c0._4_4_;
    local_528 = local_2d8;
    lStack_520 = lStack_2d0;
    uStack_530 = (undefined4)uStack_2e0;
    uStack_52c = uStack_2e0._4_4_;
    iStack_540 = (int)uStack_2f0;
    uStack_53c = uStack_2f0._4_4_;
    if (local_548 != (undefined4 *)0x0) {
      plVar22 = local_538;
      if (local_538 == (longlong *)0x0) {
        plVar22 = &local_528;
      }
      uStack_2f0 = lVar32;
      uStack_2e0 = uVar12;
      local_2c8 = uVar13;
      uStack_2c0 = uVar14;
      (**(code **)(*plVar22 + 0x10))();
    }
    uVar24 = (ulonglong)(uint)(iVar17 << 6);
    local_548 = *(undefined4 **)((longlong)puVar38 + uVar24);
    uStack_2f0 = ((undefined8 *)((longlong)puVar38 + uVar24))[1];
    puVar4 = (undefined8 *)((longlong)puVar38 + uVar24 + 0x10);
    local_538 = (longlong *)*puVar4;
    uStack_2e0 = puVar4[1];
    plVar22 = (longlong *)((longlong)puVar38 + uVar24 + 0x20);
    local_2d8 = *plVar22;
    lStack_2d0 = plVar22[1];
    puVar4 = (undefined8 *)((longlong)puVar38 + uVar24 + 0x30);
    local_2c8 = *puVar4;
    uStack_2c0 = puVar4[1];
    uVar13 = local_2c8;
    uVar14 = uStack_2c0;
    local_2e8 = local_538;
    uVar12 = uStack_2e0;
    local_2f8 = local_548;
    uVar26 = uStack_2f0;
    puVar4 = (undefined8 *)((longlong)puVar38 + uVar24 + 0x30);
    *puVar4 = CONCAT44(uStack_514,local_518);
    puVar4[1] = CONCAT44(uStack_50c,uStack_510);
    puVar4 = (undefined8 *)((longlong)puVar38 + uVar24 + 0x20);
    *puVar4 = &PTR_LAB_14be86630;
    puVar4[1] = plVar21;
    puVar4 = (undefined8 *)((longlong)puVar38 + uVar24 + 0x10);
    *puVar4 = 0;
    puVar4[1] = CONCAT44(uStack_52c,uStack_530);
    *(undefined8 *)((longlong)puVar38 + uVar24) = &LAB_144632d6a;
    ((undefined8 *)((longlong)puVar38 + uVar24))[1] = CONCAT44(uStack_53c,iStack_540);
    uStack_2f0._4_4_ = (uint)(uStack_2f0 >> 0x20);
    uStack_2e0._4_4_ = (undefined4)((ulonglong)uStack_2e0 >> 0x20);
    local_2c8._4_4_ = (undefined4)((ulonglong)local_2c8 >> 0x20);
    uStack_2c0._4_4_ = (undefined4)((ulonglong)uStack_2c0 >> 0x20);
    local_518 = (undefined4)local_2c8;
    uStack_514 = local_2c8._4_4_;
    uStack_510 = (undefined4)uStack_2c0;
    uStack_50c = uStack_2c0._4_4_;
    local_528 = local_2d8;
    lStack_520 = lStack_2d0;
    uStack_530 = (undefined4)uStack_2e0;
    uStack_52c = uStack_2e0._4_4_;
    iStack_540 = (int)uStack_2f0;
    uStack_53c = uStack_2f0._4_4_;
    uStack_2f0 = uVar26;
    uStack_2e0 = uVar12;
    local_2c8 = uVar13;
    uStack_2c0 = uVar14;
    if (local_548 != (undefined4 *)0x0) {
      plVar22 = &local_528;
      if (local_538 != (longlong *)0x0) {
        plVar22 = local_538;
      }
      (**(code **)(*plVar22 + 0x10))(plVar22);
    }
    iVar17 = iVar17 + 1;
  }
  iVar30 = iVar17;
  if (plVar21[8] != 0) {
    uVar24 = (ulonglong)(uint)(iVar17 << 6);
    local_548 = *(undefined4 **)((longlong)puVar38 + uVar24);
    uStack_2f0 = ((undefined8 *)((longlong)puVar38 + uVar24))[1];
    puVar4 = (undefined8 *)((longlong)puVar38 + uVar24 + 0x10);
    local_538 = (longlong *)*puVar4;
    uStack_2e0 = puVar4[1];
    plVar22 = (longlong *)((longlong)puVar38 + uVar24 + 0x20);
    local_2d8 = *plVar22;
    lStack_2d0 = plVar22[1];
    puVar4 = (undefined8 *)((longlong)puVar38 + uVar24 + 0x30);
    local_2c8 = *puVar4;
    uStack_2c0 = puVar4[1];
    uVar13 = local_2c8;
    uVar14 = uStack_2c0;
    local_2e8 = local_538;
    uVar12 = uStack_2e0;
    local_2f8 = local_548;
    uVar26 = uStack_2f0;
    puVar4 = (undefined8 *)((longlong)puVar38 + uVar24 + 0x30);
    *puVar4 = CONCAT44(uStack_514,local_518);
    puVar4[1] = CONCAT44(uStack_50c,uStack_510);
    puVar4 = (undefined8 *)((longlong)puVar38 + uVar24 + 0x20);
    *puVar4 = &PTR_LAB_14be86650;
    puVar4[1] = plVar21;
    puVar4 = (undefined8 *)((longlong)puVar38 + uVar24 + 0x10);
    *puVar4 = 0;
    puVar4[1] = CONCAT44(uStack_52c,uStack_530);
    *(undefined8 *)((longlong)puVar38 + uVar24) = &LAB_144632dc6;
    ((undefined8 *)((longlong)puVar38 + uVar24))[1] = CONCAT44(uStack_53c,iStack_540);
    uStack_2f0._4_4_ = (uint)(uStack_2f0 >> 0x20);
    uStack_2e0._4_4_ = (undefined4)((ulonglong)uStack_2e0 >> 0x20);
    local_2c8._4_4_ = (undefined4)((ulonglong)local_2c8 >> 0x20);
    uStack_2c0._4_4_ = (undefined4)((ulonglong)uStack_2c0 >> 0x20);
    local_518 = (undefined4)local_2c8;
    uStack_514 = local_2c8._4_4_;
    uStack_510 = (undefined4)uStack_2c0;
    uStack_50c = uStack_2c0._4_4_;
    local_528 = local_2d8;
    lStack_520 = lStack_2d0;
    uStack_530 = (undefined4)uStack_2e0;
    uStack_52c = uStack_2e0._4_4_;
    iStack_540 = (int)uStack_2f0;
    uStack_53c = uStack_2f0._4_4_;
    uStack_2f0 = uVar26;
    uStack_2e0 = uVar12;
    local_2c8 = uVar13;
    uStack_2c0 = uVar14;
    if (local_548 != (undefined4 *)0x0) {
      plVar22 = local_538;
      if (local_538 == (longlong *)0x0) {
        plVar22 = &local_528;
      }
      (**(code **)(*plVar22 + 0x10))();
    }
    iVar30 = iVar17 + 1;
  }
  if (plVar21[0x1a] != 0) {
    uVar24 = (ulonglong)(uint)(iVar30 << 6);
    local_548 = *(undefined4 **)((longlong)puVar38 + uVar24);
    uStack_2f0 = ((undefined8 *)((longlong)puVar38 + uVar24))[1];
    puVar4 = (undefined8 *)((longlong)puVar38 + uVar24 + 0x10);
    local_538 = (longlong *)*puVar4;
    uStack_2e0 = puVar4[1];
    plVar22 = (longlong *)((longlong)puVar38 + uVar24 + 0x20);
    local_2d8 = *plVar22;
    lStack_2d0 = plVar22[1];
    puVar4 = (undefined8 *)((longlong)puVar38 + uVar24 + 0x30);
    local_2c8 = *puVar4;
    uStack_2c0 = puVar4[1];
    uVar13 = local_2c8;
    uVar14 = uStack_2c0;
    local_2e8 = local_538;
    uVar12 = uStack_2e0;
    local_2f8 = local_548;
    uVar26 = uStack_2f0;
    puVar4 = (undefined8 *)((longlong)puVar38 + uVar24 + 0x30);
    *puVar4 = CONCAT44(uStack_514,local_518);
    puVar4[1] = CONCAT44(uStack_50c,uStack_510);
    puVar4 = (undefined8 *)((longlong)puVar38 + uVar24 + 0x20);
    *puVar4 = &PTR_LAB_14be86670;
    puVar4[1] = plVar21;
    puVar4 = (undefined8 *)((longlong)puVar38 + uVar24 + 0x10);
    *puVar4 = 0;
    puVar4[1] = CONCAT44(uStack_52c,uStack_530);
    *(undefined8 *)((longlong)puVar38 + uVar24) = &LAB_144632e24;
    ((undefined8 *)((longlong)puVar38 + uVar24))[1] = CONCAT44(uStack_53c,iStack_540);
    uStack_2f0._4_4_ = (uint)(uStack_2f0 >> 0x20);
    uStack_2e0._4_4_ = (undefined4)((ulonglong)uStack_2e0 >> 0x20);
    local_2c8._4_4_ = (undefined4)((ulonglong)local_2c8 >> 0x20);
    uStack_2c0._4_4_ = (undefined4)((ulonglong)uStack_2c0 >> 0x20);
    local_518 = (undefined4)local_2c8;
    uStack_514 = local_2c8._4_4_;
    uStack_510 = (undefined4)uStack_2c0;
    uStack_50c = uStack_2c0._4_4_;
    local_528 = local_2d8;
    lStack_520 = lStack_2d0;
    uStack_530 = (undefined4)uStack_2e0;
    uStack_52c = uStack_2e0._4_4_;
    iStack_540 = (int)uStack_2f0;
    uStack_53c = uStack_2f0._4_4_;
    uStack_2f0 = uVar26;
    uStack_2e0 = uVar12;
    local_2c8 = uVar13;
    uStack_2c0 = uVar14;
    if (local_548 != (undefined4 *)0x0) {
      plVar22 = local_538;
      if (local_538 == (longlong *)0x0) {
        plVar22 = &local_528;
      }
      (**(code **)(*plVar22 + 0x10))();
    }
    iVar30 = iVar30 + 1;
  }
  if (plVar21[0x1c] != 0) {
    uVar24 = (ulonglong)(uint)(iVar30 << 6);
    local_548 = *(undefined4 **)((longlong)puVar38 + uVar24);
    uStack_2f0 = ((undefined8 *)((longlong)puVar38 + uVar24))[1];
    puVar4 = (undefined8 *)((longlong)puVar38 + uVar24 + 0x10);
    local_538 = (longlong *)*puVar4;
    uStack_2e0 = puVar4[1];
    plVar22 = (longlong *)((longlong)puVar38 + uVar24 + 0x20);
    local_2d8 = *plVar22;
    lStack_2d0 = plVar22[1];
    puVar4 = (undefined8 *)((longlong)puVar38 + uVar24 + 0x30);
    local_2c8 = *puVar4;
    uStack_2c0 = puVar4[1];
    uVar13 = local_2c8;
    uVar14 = uStack_2c0;
    local_2e8 = local_538;
    uVar12 = uStack_2e0;
    local_2f8 = local_548;
    uVar26 = uStack_2f0;
    puVar4 = (undefined8 *)((longlong)puVar38 + uVar24 + 0x30);
    *puVar4 = CONCAT44(uStack_514,local_518);
    puVar4[1] = CONCAT44(uStack_50c,uStack_510);
    puVar4 = (undefined8 *)((longlong)puVar38 + uVar24 + 0x20);
    *puVar4 = &PTR_LAB_14be86690;
    puVar4[1] = plVar21;
    puVar4 = (undefined8 *)((longlong)puVar38 + uVar24 + 0x10);
    *puVar4 = 0;
    puVar4[1] = CONCAT44(uStack_52c,uStack_530);
    *(undefined8 *)((longlong)puVar38 + uVar24) = &LAB_144632e80;
    ((undefined8 *)((longlong)puVar38 + uVar24))[1] = CONCAT44(uStack_53c,iStack_540);
    uStack_2f0._4_4_ = (uint)(uStack_2f0 >> 0x20);
    uStack_2e0._4_4_ = (undefined4)((ulonglong)uStack_2e0 >> 0x20);
    local_2c8._4_4_ = (undefined4)((ulonglong)local_2c8 >> 0x20);
    uStack_2c0._4_4_ = (undefined4)((ulonglong)uStack_2c0 >> 0x20);
    local_518 = (undefined4)local_2c8;
    uStack_514 = local_2c8._4_4_;
    uStack_510 = (undefined4)uStack_2c0;
    uStack_50c = uStack_2c0._4_4_;
    local_528 = local_2d8;
    lStack_520 = lStack_2d0;
    uStack_530 = (undefined4)uStack_2e0;
    uStack_52c = uStack_2e0._4_4_;
    iStack_540 = (int)uStack_2f0;
    uStack_53c = uStack_2f0._4_4_;
    uStack_2f0 = uVar26;
    uStack_2e0 = uVar12;
    local_2c8 = uVar13;
    uStack_2c0 = uVar14;
    if (local_548 != (undefined4 *)0x0) {
      plVar22 = local_538;
      if (local_538 == (longlong *)0x0) {
        plVar22 = &local_528;
      }
      (**(code **)(*plVar22 + 0x10))();
    }
    iVar30 = iVar30 + 1;
  }
  if (plVar21[0x1e] != 0) {
    uVar26 = (ulonglong)(uint)(iVar17 << 6);
    local_548 = *(undefined4 **)((longlong)plVar20 + uVar26);
    uStack_2f0 = ((longlong *)((longlong)plVar20 + uVar26))[1];
    puVar4 = (undefined8 *)((longlong)plVar20 + uVar26 + 0x10);
    local_538 = (longlong *)*puVar4;
    uStack_2e0 = puVar4[1];
    plVar22 = (longlong *)((longlong)plVar20 + uVar26 + 0x20);
    local_2d8 = *plVar22;
    lStack_2d0 = plVar22[1];
    puVar4 = (undefined8 *)((longlong)plVar20 + uVar26 + 0x30);
    local_2c8 = *puVar4;
    uStack_2c0 = puVar4[1];
    uVar13 = local_2c8;
    uVar14 = uStack_2c0;
    local_2e8 = local_538;
    uVar12 = uStack_2e0;
    local_2f8 = local_548;
    lVar32 = uStack_2f0;
    puVar4 = (undefined8 *)((longlong)plVar20 + uVar26 + 0x30);
    *puVar4 = CONCAT44(uStack_514,local_518);
    puVar4[1] = CONCAT44(uStack_50c,uStack_510);
    puVar4 = (undefined8 *)((longlong)plVar20 + uVar26 + 0x20);
    *puVar4 = &PTR_LAB_14be866b0;
    puVar4[1] = plVar21;
    puVar4 = (undefined8 *)((longlong)plVar20 + uVar26 + 0x10);
    *puVar4 = 0;
    puVar4[1] = CONCAT44(uStack_52c,uStack_530);
    *(undefined8 *)((longlong)plVar20 + uVar26) = FUN_144632eee;
    ((undefined8 *)((longlong)plVar20 + uVar26))[1] = CONCAT44(uStack_53c,iStack_540);
    uStack_2f0._4_4_ = (uint)(uStack_2f0 >> 0x20);
    uStack_2e0._4_4_ = (undefined4)((ulonglong)uStack_2e0 >> 0x20);
    local_2c8._4_4_ = (undefined4)((ulonglong)local_2c8 >> 0x20);
    uStack_2c0._4_4_ = (undefined4)((ulonglong)uStack_2c0 >> 0x20);
    local_518 = (undefined4)local_2c8;
    uStack_514 = local_2c8._4_4_;
    uStack_510 = (undefined4)uStack_2c0;
    uStack_50c = uStack_2c0._4_4_;
    local_528 = local_2d8;
    lStack_520 = lStack_2d0;
    uStack_530 = (undefined4)uStack_2e0;
    uStack_52c = uStack_2e0._4_4_;
    iStack_540 = (int)uStack_2f0;
    uStack_53c = uStack_2f0._4_4_;
    if (local_548 != (undefined4 *)0x0) {
      plVar22 = local_538;
      if (local_538 == (longlong *)0x0) {
        plVar22 = &local_528;
      }
      uStack_2f0 = lVar32;
      uStack_2e0 = uVar12;
      local_2c8 = uVar13;
      uStack_2c0 = uVar14;
      (**(code **)(*plVar22 + 0x10))();
    }
    uVar24 = (ulonglong)(uint)(iVar30 << 6);
    local_548 = *(undefined4 **)((longlong)puVar38 + uVar24);
    uStack_2f0 = ((undefined8 *)((longlong)puVar38 + uVar24))[1];
    puVar4 = (undefined8 *)((longlong)puVar38 + uVar24 + 0x10);
    local_538 = (longlong *)*puVar4;
    uStack_2e0 = puVar4[1];
    plVar22 = (longlong *)((longlong)puVar38 + uVar24 + 0x20);
    local_2d8 = *plVar22;
    lStack_2d0 = plVar22[1];
    puVar4 = (undefined8 *)((longlong)puVar38 + uVar24 + 0x30);
    local_2c8 = *puVar4;
    uStack_2c0 = puVar4[1];
    uVar13 = local_2c8;
    uVar14 = uStack_2c0;
    local_2e8 = local_538;
    uVar12 = uStack_2e0;
    local_2f8 = local_548;
    uVar26 = uStack_2f0;
    puVar4 = (undefined8 *)((longlong)puVar38 + uVar24 + 0x30);
    *puVar4 = CONCAT44(uStack_514,local_518);
    puVar4[1] = CONCAT44(uStack_50c,uStack_510);
    puVar4 = (undefined8 *)((longlong)puVar38 + uVar24 + 0x20);
    *puVar4 = &PTR_LAB_14be866d0;
    puVar4[1] = plVar21;
    puVar4 = (undefined8 *)((longlong)puVar38 + uVar24 + 0x10);
    *puVar4 = 0;
    puVar4[1] = CONCAT44(uStack_52c,uStack_530);
    *(undefined8 *)((longlong)puVar38 + uVar24) = FUN_144633230;
    ((undefined8 *)((longlong)puVar38 + uVar24))[1] = CONCAT44(uStack_53c,iStack_540);
    uStack_2f0._4_4_ = (uint)(uStack_2f0 >> 0x20);
    uStack_2e0._4_4_ = (undefined4)((ulonglong)uStack_2e0 >> 0x20);
    local_2c8._4_4_ = (undefined4)((ulonglong)local_2c8 >> 0x20);
    uStack_2c0._4_4_ = (undefined4)((ulonglong)uStack_2c0 >> 0x20);
    local_518 = (undefined4)local_2c8;
    uStack_514 = local_2c8._4_4_;
    uStack_510 = (undefined4)uStack_2c0;
    uStack_50c = uStack_2c0._4_4_;
    local_528 = local_2d8;
    lStack_520 = lStack_2d0;
    uStack_530 = (undefined4)uStack_2e0;
    uStack_52c = uStack_2e0._4_4_;
    iStack_540 = (int)uStack_2f0;
    uStack_53c = uStack_2f0._4_4_;
    uStack_2f0 = uVar26;
    uStack_2e0 = uVar12;
    local_2c8 = uVar13;
    uStack_2c0 = uVar14;
    if (local_548 != (undefined4 *)0x0) {
      plVar22 = &local_528;
      if (local_538 != (longlong *)0x0) {
        plVar22 = local_538;
      }
      (**(code **)(*plVar22 + 0x10))(plVar22);
    }
    iVar17 = iVar17 + 1;
    iVar30 = iVar30 + 1;
  }
  if (*plVar21 != 0) {
    uVar24 = (ulonglong)(uint)(iVar30 << 6);
    local_548 = *(undefined4 **)((longlong)puVar38 + uVar24);
    uStack_2f0 = ((undefined8 *)((longlong)puVar38 + uVar24))[1];
    puVar4 = (undefined8 *)((longlong)puVar38 + uVar24 + 0x10);
    local_538 = (longlong *)*puVar4;
    uStack_2e0 = puVar4[1];
    plVar22 = (longlong *)((longlong)puVar38 + uVar24 + 0x20);
    local_2d8 = *plVar22;
    lStack_2d0 = plVar22[1];
    puVar4 = (undefined8 *)((longlong)puVar38 + uVar24 + 0x30);
    local_2c8 = *puVar4;
    uStack_2c0 = puVar4[1];
    uVar13 = local_2c8;
    uVar14 = uStack_2c0;
    local_2e8 = local_538;
    uVar12 = uStack_2e0;
    local_2f8 = local_548;
    uVar26 = uStack_2f0;
    puVar4 = (undefined8 *)((longlong)puVar38 + uVar24 + 0x30);
    *puVar4 = CONCAT44(uStack_514,local_518);
    puVar4[1] = CONCAT44(uStack_50c,uStack_510);
    puVar4 = (undefined8 *)((longlong)puVar38 + uVar24 + 0x20);
    *puVar4 = &PTR_LAB_14be866f0;
    puVar4[1] = plVar21;
    puVar4 = (undefined8 *)((longlong)puVar38 + uVar24 + 0x10);
    *puVar4 = 0;
    puVar4[1] = CONCAT44(uStack_52c,uStack_530);
    *(undefined8 *)((longlong)puVar38 + uVar24) = FUN_1446336c2;
    ((undefined8 *)((longlong)puVar38 + uVar24))[1] = CONCAT44(uStack_53c,iStack_540);
    uStack_2f0._4_4_ = (uint)(uStack_2f0 >> 0x20);
    uStack_2e0._4_4_ = (undefined4)((ulonglong)uStack_2e0 >> 0x20);
    local_2c8._4_4_ = (undefined4)((ulonglong)local_2c8 >> 0x20);
    uStack_2c0._4_4_ = (undefined4)((ulonglong)uStack_2c0 >> 0x20);
    local_518 = (undefined4)local_2c8;
    uStack_514 = local_2c8._4_4_;
    uStack_510 = (undefined4)uStack_2c0;
    uStack_50c = uStack_2c0._4_4_;
    local_528 = local_2d8;
    lStack_520 = lStack_2d0;
    uStack_530 = (undefined4)uStack_2e0;
    uStack_52c = uStack_2e0._4_4_;
    iStack_540 = (int)uStack_2f0;
    uStack_53c = uStack_2f0._4_4_;
    uStack_2f0 = uVar26;
    uStack_2e0 = uVar12;
    local_2c8 = uVar13;
    uStack_2c0 = uVar14;
    if (local_548 != (undefined4 *)0x0) {
      plVar22 = local_538;
      if (local_538 == (longlong *)0x0) {
        plVar22 = &local_528;
      }
      (**(code **)(*plVar22 + 0x10))();
    }
  }
  if ((plVar21[0x20] == 0) || (plVar21[0x22] == 0)) {
    iVar30 = 0;
  }
  else {
    uVar26 = (ulonglong)(uint)(iVar17 << 6);
    local_548 = *(undefined4 **)((longlong)plVar20 + uVar26);
    uStack_2f0 = ((longlong *)((longlong)plVar20 + uVar26))[1];
    puVar38 = (undefined8 *)((longlong)plVar20 + uVar26 + 0x10);
    local_538 = (longlong *)*puVar38;
    uStack_2e0 = puVar38[1];
    plVar22 = (longlong *)((longlong)plVar20 + uVar26 + 0x20);
    local_2d8 = *plVar22;
    lStack_2d0 = plVar22[1];
    puVar38 = (undefined8 *)((longlong)plVar20 + uVar26 + 0x30);
    local_2c8 = *puVar38;
    uStack_2c0 = puVar38[1];
    uVar13 = local_2c8;
    uVar14 = uStack_2c0;
    local_2e8 = local_538;
    uVar12 = uStack_2e0;
    local_2f8 = local_548;
    lVar32 = uStack_2f0;
    puVar38 = (undefined8 *)((longlong)plVar20 + uVar26 + 0x30);
    *puVar38 = CONCAT44(uStack_514,local_518);
    puVar38[1] = CONCAT44(uStack_50c,uStack_510);
    puVar38 = (undefined8 *)((longlong)plVar20 + uVar26 + 0x20);
    *puVar38 = &PTR_LAB_14be86710;
    puVar38[1] = plVar21;
    puVar38 = (undefined8 *)((longlong)plVar20 + uVar26 + 0x10);
    *puVar38 = 0;
    puVar38[1] = CONCAT44(uStack_52c,uStack_530);
    *(undefined8 *)((longlong)plVar20 + uVar26) = FUN_14463374e;
    ((undefined8 *)((longlong)plVar20 + uVar26))[1] = CONCAT44(uStack_53c,iStack_540);
    uStack_2f0._4_4_ = (uint)(uStack_2f0 >> 0x20);
    uStack_2e0._4_4_ = (undefined4)((ulonglong)uStack_2e0 >> 0x20);
    local_2c8._4_4_ = (undefined4)((ulonglong)local_2c8 >> 0x20);
    uStack_2c0._4_4_ = (undefined4)((ulonglong)uStack_2c0 >> 0x20);
    local_518 = (undefined4)local_2c8;
    uStack_514 = local_2c8._4_4_;
    uStack_510 = (undefined4)uStack_2c0;
    uStack_50c = uStack_2c0._4_4_;
    local_528 = local_2d8;
    lStack_520 = lStack_2d0;
    uStack_530 = (undefined4)uStack_2e0;
    uStack_52c = uStack_2e0._4_4_;
    iStack_540 = (int)uStack_2f0;
    uStack_53c = uStack_2f0._4_4_;
    if (local_548 != (undefined4 *)0x0) {
      plVar22 = local_538;
      if (local_538 == (longlong *)0x0) {
        plVar22 = &local_528;
      }
      uStack_2f0 = lVar32;
      uStack_2e0 = uVar12;
      local_2c8 = uVar13;
      uStack_2c0 = uVar14;
      (**(code **)(*plVar22 + 0x10))();
    }
    local_548 = (undefined4 *)*puVar37;
    uStack_2f0 = puVar37[1];
    local_538 = (longlong *)puVar37[2];
    uStack_2e0 = puVar37[3];
    local_2d8 = puVar37[4];
    lStack_2d0 = puVar37[5];
    local_2c8 = puVar37[6];
    uStack_2c0 = puVar37[7];
    uVar13 = local_2c8;
    uVar14 = uStack_2c0;
    local_2e8 = local_538;
    uVar12 = uStack_2e0;
    local_2f8 = local_548;
    uVar26 = uStack_2f0;
    puVar37[6] = CONCAT44(uStack_514,local_518);
    puVar37[7] = CONCAT44(uStack_50c,uStack_510);
    puVar37[4] = &PTR_LAB_14be86730;
    puVar37[5] = plVar21;
    puVar37[2] = 0;
    puVar37[3] = CONCAT44(uStack_52c,uStack_530);
    *puVar37 = &LAB_14463388e;
    puVar37[1] = CONCAT44(uStack_53c,iStack_540);
    uStack_2f0._4_4_ = (uint)(uStack_2f0 >> 0x20);
    uStack_2e0._4_4_ = (undefined4)((ulonglong)uStack_2e0 >> 0x20);
    local_2c8._4_4_ = (undefined4)((ulonglong)local_2c8 >> 0x20);
    uStack_2c0._4_4_ = (undefined4)((ulonglong)uStack_2c0 >> 0x20);
    local_518 = (undefined4)local_2c8;
    uStack_514 = local_2c8._4_4_;
    uStack_510 = (undefined4)uStack_2c0;
    uStack_50c = uStack_2c0._4_4_;
    local_528 = local_2d8;
    lStack_520 = lStack_2d0;
    uStack_530 = (undefined4)uStack_2e0;
    uStack_52c = uStack_2e0._4_4_;
    iStack_540 = (int)uStack_2f0;
    uStack_53c = uStack_2f0._4_4_;
    uStack_2f0 = uVar26;
    uStack_2e0 = uVar12;
    local_2c8 = uVar13;
    uStack_2c0 = uVar14;
    if (local_548 != (undefined4 *)0x0) {
      plVar22 = &local_528;
      if (local_538 != (longlong *)0x0) {
        plVar22 = local_538;
      }
      (**(code **)(*plVar22 + 0x10))(plVar22);
    }
    iVar17 = iVar17 + 1;
    iVar30 = 1;
  }
  if (plVar21[0x26] != 0) {
    uVar26 = (ulonglong)(uint)(iVar17 << 6);
    local_548 = *(undefined4 **)((longlong)plVar20 + uVar26);
    uStack_2f0 = ((longlong *)((longlong)plVar20 + uVar26))[1];
    puVar38 = (undefined8 *)((longlong)plVar20 + uVar26 + 0x10);
    local_538 = (longlong *)*puVar38;
    uStack_2e0 = puVar38[1];
    plVar22 = (longlong *)((longlong)plVar20 + uVar26 + 0x20);
    local_2d8 = *plVar22;
    lStack_2d0 = plVar22[1];
    puVar38 = (undefined8 *)((longlong)plVar20 + uVar26 + 0x30);
    local_2c8 = *puVar38;
    uStack_2c0 = puVar38[1];
    uVar13 = local_2c8;
    uVar14 = uStack_2c0;
    local_2e8 = local_538;
    uVar12 = uStack_2e0;
    local_2f8 = local_548;
    lVar32 = uStack_2f0;
    puVar38 = (undefined8 *)((longlong)plVar20 + uVar26 + 0x30);
    *puVar38 = CONCAT44(uStack_514,local_518);
    puVar38[1] = CONCAT44(uStack_50c,uStack_510);
    puVar38 = (undefined8 *)((longlong)plVar20 + uVar26 + 0x20);
    *puVar38 = &PTR_LAB_14be86750;
    puVar38[1] = plVar21;
    puVar38 = (undefined8 *)((longlong)plVar20 + uVar26 + 0x10);
    *puVar38 = 0;
    puVar38[1] = CONCAT44(uStack_52c,uStack_530);
    *(undefined8 *)((longlong)plVar20 + uVar26) = &LAB_1446338ea;
    ((undefined8 *)((longlong)plVar20 + uVar26))[1] = CONCAT44(uStack_53c,iStack_540);
    uStack_2f0._4_4_ = (uint)(uStack_2f0 >> 0x20);
    uStack_2e0._4_4_ = (undefined4)((ulonglong)uStack_2e0 >> 0x20);
    local_2c8._4_4_ = (undefined4)((ulonglong)local_2c8 >> 0x20);
    uStack_2c0._4_4_ = (undefined4)((ulonglong)uStack_2c0 >> 0x20);
    local_518 = (undefined4)local_2c8;
    uStack_514 = local_2c8._4_4_;
    uStack_510 = (undefined4)uStack_2c0;
    uStack_50c = uStack_2c0._4_4_;
    local_528 = local_2d8;
    lStack_520 = lStack_2d0;
    uStack_530 = (undefined4)uStack_2e0;
    uStack_52c = uStack_2e0._4_4_;
    iStack_540 = (int)uStack_2f0;
    uStack_53c = uStack_2f0._4_4_;
    if (local_548 != (undefined4 *)0x0) {
      plVar22 = local_538;
      if (local_538 == (longlong *)0x0) {
        plVar22 = &local_528;
      }
      uStack_2f0 = lVar32;
      uStack_2e0 = uVar12;
      local_2c8 = uVar13;
      uStack_2c0 = uVar14;
      (**(code **)(*plVar22 + 0x10))();
    }
    uVar24 = (ulonglong)(uint)(iVar30 << 6);
    local_548 = *(undefined4 **)((longlong)puVar37 + uVar24);
    uStack_2f0 = ((undefined8 *)((longlong)puVar37 + uVar24))[1];
    puVar38 = (undefined8 *)((longlong)puVar37 + uVar24 + 0x10);
    local_538 = (longlong *)*puVar38;
    uStack_2e0 = puVar38[1];
    plVar22 = (longlong *)((longlong)puVar37 + uVar24 + 0x20);
    local_2d8 = *plVar22;
    lStack_2d0 = plVar22[1];
    puVar38 = (undefined8 *)((longlong)puVar37 + uVar24 + 0x30);
    local_2c8 = *puVar38;
    uStack_2c0 = puVar38[1];
    uVar13 = local_2c8;
    uVar14 = uStack_2c0;
    local_2e8 = local_538;
    uVar12 = uStack_2e0;
    local_2f8 = local_548;
    uVar26 = uStack_2f0;
    puVar38 = (undefined8 *)((longlong)puVar37 + uVar24 + 0x30);
    *puVar38 = CONCAT44(uStack_514,local_518);
    puVar38[1] = CONCAT44(uStack_50c,uStack_510);
    puVar38 = (undefined8 *)((longlong)puVar37 + uVar24 + 0x20);
    *puVar38 = &PTR_LAB_14be86770;
    puVar38[1] = plVar21;
    puVar38 = (undefined8 *)((longlong)puVar37 + uVar24 + 0x10);
    *puVar38 = 0;
    puVar38[1] = CONCAT44(uStack_52c,uStack_530);
    *(undefined8 *)((longlong)puVar37 + uVar24) = &LAB_14463394c;
    ((undefined8 *)((longlong)puVar37 + uVar24))[1] = CONCAT44(uStack_53c,iStack_540);
    uStack_2f0._4_4_ = (uint)(uStack_2f0 >> 0x20);
    uStack_2e0._4_4_ = (undefined4)((ulonglong)uStack_2e0 >> 0x20);
    local_2c8._4_4_ = (undefined4)((ulonglong)local_2c8 >> 0x20);
    uStack_2c0._4_4_ = (undefined4)((ulonglong)uStack_2c0 >> 0x20);
    local_518 = (undefined4)local_2c8;
    uStack_514 = local_2c8._4_4_;
    uStack_510 = (undefined4)uStack_2c0;
    uStack_50c = uStack_2c0._4_4_;
    local_528 = local_2d8;
    lStack_520 = lStack_2d0;
    uStack_530 = (undefined4)uStack_2e0;
    uStack_52c = uStack_2e0._4_4_;
    iStack_540 = (int)uStack_2f0;
    uStack_53c = uStack_2f0._4_4_;
    uStack_2f0 = uVar26;
    uStack_2e0 = uVar12;
    local_2c8 = uVar13;
    uStack_2c0 = uVar14;
    if (local_548 != (undefined4 *)0x0) {
      plVar22 = &local_528;
      if (local_538 != (longlong *)0x0) {
        plVar22 = local_538;
      }
      (**(code **)(*plVar22 + 0x10))(plVar22);
    }
    iVar17 = iVar17 + 1;
  }
  if ((plVar21[0x20] != 0) && (plVar21[0x24] != 0)) {
    uVar26 = (ulonglong)(uint)(iVar17 << 6);
    local_548 = *(undefined4 **)((longlong)plVar20 + uVar26);
    uStack_2f0 = ((longlong *)((longlong)plVar20 + uVar26))[1];
    puVar37 = (undefined8 *)((longlong)plVar20 + uVar26 + 0x10);
    local_538 = (longlong *)*puVar37;
    uStack_2e0 = puVar37[1];
    plVar22 = (longlong *)((longlong)plVar20 + uVar26 + 0x20);
    local_2d8 = *plVar22;
    lStack_2d0 = plVar22[1];
    puVar37 = (undefined8 *)((longlong)plVar20 + uVar26 + 0x30);
    local_2c8 = *puVar37;
    uStack_2c0 = puVar37[1];
    uVar13 = local_2c8;
    uVar14 = uStack_2c0;
    local_2e8 = local_538;
    uVar12 = uStack_2e0;
    local_2f8 = local_548;
    lVar32 = uStack_2f0;
    puVar37 = (undefined8 *)((longlong)plVar20 + uVar26 + 0x30);
    *puVar37 = CONCAT44(uStack_514,local_518);
    puVar37[1] = CONCAT44(uStack_50c,uStack_510);
    puVar37 = (undefined8 *)((longlong)plVar20 + uVar26 + 0x20);
    *puVar37 = &PTR_LAB_14be86790;
    puVar37[1] = plVar21;
    puVar37 = (undefined8 *)((longlong)plVar20 + uVar26 + 0x10);
    *puVar37 = 0;
    puVar37[1] = CONCAT44(uStack_52c,uStack_530);
    *(undefined8 *)((longlong)plVar20 + uVar26) = &LAB_1446339a8;
    ((undefined8 *)((longlong)plVar20 + uVar26))[1] = CONCAT44(uStack_53c,iStack_540);
    uStack_2f0._4_4_ = (uint)(uStack_2f0 >> 0x20);
    uStack_2e0._4_4_ = (undefined4)((ulonglong)uStack_2e0 >> 0x20);
    local_2c8._4_4_ = (undefined4)((ulonglong)local_2c8 >> 0x20);
    uStack_2c0._4_4_ = (undefined4)((ulonglong)uStack_2c0 >> 0x20);
    local_518 = (undefined4)local_2c8;
    uStack_514 = local_2c8._4_4_;
    uStack_510 = (undefined4)uStack_2c0;
    uStack_50c = uStack_2c0._4_4_;
    local_528 = local_2d8;
    lStack_520 = lStack_2d0;
    uStack_530 = (undefined4)uStack_2e0;
    uStack_52c = uStack_2e0._4_4_;
    iStack_540 = (int)uStack_2f0;
    uStack_53c = uStack_2f0._4_4_;
    if (local_548 != (undefined4 *)0x0) {
      plVar22 = local_538;
      if (local_538 == (longlong *)0x0) {
        plVar22 = &local_528;
      }
      uStack_2f0 = lVar32;
      uStack_2e0 = uVar12;
      local_2c8 = uVar13;
      uStack_2c0 = uVar14;
      (**(code **)(*plVar22 + 0x10))();
    }
    local_548 = (undefined4 *)*puVar40;
    uStack_2f0 = puVar40[1];
    local_538 = (longlong *)puVar40[2];
    uStack_2e0 = puVar40[3];
    local_2d8 = puVar40[4];
    lStack_2d0 = puVar40[5];
    local_2c8 = puVar40[6];
    uStack_2c0 = puVar40[7];
    uVar13 = local_2c8;
    uVar14 = uStack_2c0;
    local_2e8 = local_538;
    uVar12 = uStack_2e0;
    local_2f8 = local_548;
    uVar26 = uStack_2f0;
    puVar40[6] = CONCAT44(uStack_514,local_518);
    puVar40[7] = CONCAT44(uStack_50c,uStack_510);
    puVar40[4] = &PTR_LAB_14be867b0;
    puVar40[5] = plVar21;
    puVar40[2] = 0;
    puVar40[3] = CONCAT44(uStack_52c,uStack_530);
    *puVar40 = FUN_144633a1c;
    puVar40[1] = CONCAT44(uStack_53c,iStack_540);
    uStack_2f0._4_4_ = (uint)(uStack_2f0 >> 0x20);
    uStack_2e0._4_4_ = (undefined4)((ulonglong)uStack_2e0 >> 0x20);
    local_2c8._4_4_ = (undefined4)((ulonglong)local_2c8 >> 0x20);
    uStack_2c0._4_4_ = (undefined4)((ulonglong)uStack_2c0 >> 0x20);
    local_518 = (undefined4)local_2c8;
    uStack_514 = local_2c8._4_4_;
    uStack_510 = (undefined4)uStack_2c0;
    uStack_50c = uStack_2c0._4_4_;
    local_528 = local_2d8;
    lStack_520 = lStack_2d0;
    uStack_530 = (undefined4)uStack_2e0;
    uStack_52c = uStack_2e0._4_4_;
    iStack_540 = (int)uStack_2f0;
    uStack_53c = uStack_2f0._4_4_;
    uStack_2f0 = uVar26;
    uStack_2e0 = uVar12;
    local_2c8 = uVar13;
    uStack_2c0 = uVar14;
    if (local_548 != (undefined4 *)0x0) {
      plVar22 = &local_528;
      if (local_538 != (longlong *)0x0) {
        plVar22 = local_538;
      }
      (**(code **)(*plVar22 + 0x10))(plVar22);
    }
    iVar17 = iVar17 + 1;
  }
  if (plVar21[0x18] != 0) {
    uVar24 = (ulonglong)(uint)(iVar17 << 6);
    local_548 = *(undefined4 **)((longlong)plVar20 + uVar24);
    uStack_2f0 = ((undefined8 *)((longlong)plVar20 + uVar24))[1];
    puVar37 = (undefined8 *)((longlong)plVar20 + uVar24 + 0x10);
    local_538 = (longlong *)*puVar37;
    uStack_2e0 = puVar37[1];
    plVar22 = (longlong *)((longlong)plVar20 + uVar24 + 0x20);
    local_2d8 = *plVar22;
    lStack_2d0 = plVar22[1];
    puVar37 = (undefined8 *)((longlong)plVar20 + uVar24 + 0x30);
    local_2c8 = *puVar37;
    uStack_2c0 = puVar37[1];
    uVar13 = local_2c8;
    uVar14 = uStack_2c0;
    local_2e8 = local_538;
    uVar12 = uStack_2e0;
    local_2f8 = local_548;
    uVar26 = uStack_2f0;
    puVar37 = (undefined8 *)((longlong)plVar20 + uVar24 + 0x30);
    *puVar37 = CONCAT44(uStack_514,local_518);
    puVar37[1] = CONCAT44(uStack_50c,uStack_510);
    puVar37 = (undefined8 *)((longlong)plVar20 + uVar24 + 0x20);
    *puVar37 = &PTR_LAB_14be867d0;
    puVar37[1] = plVar21;
    puVar37 = (undefined8 *)((longlong)plVar20 + uVar24 + 0x10);
    *puVar37 = 0;
    puVar37[1] = CONCAT44(uStack_52c,uStack_530);
    *(undefined8 *)((longlong)plVar20 + uVar24) = FUN_144633adc;
    ((undefined8 *)((longlong)plVar20 + uVar24))[1] = CONCAT44(uStack_53c,iStack_540);
    uStack_2f0._4_4_ = (uint)(uStack_2f0 >> 0x20);
    uStack_2e0._4_4_ = (undefined4)((ulonglong)uStack_2e0 >> 0x20);
    local_2c8._4_4_ = (undefined4)((ulonglong)local_2c8 >> 0x20);
    uStack_2c0._4_4_ = (undefined4)((ulonglong)uStack_2c0 >> 0x20);
    local_518 = (undefined4)local_2c8;
    uStack_514 = local_2c8._4_4_;
    uStack_510 = (undefined4)uStack_2c0;
    uStack_50c = uStack_2c0._4_4_;
    local_528 = local_2d8;
    lStack_520 = lStack_2d0;
    uStack_530 = (undefined4)uStack_2e0;
    uStack_52c = uStack_2e0._4_4_;
    iStack_540 = (int)uStack_2f0;
    uStack_53c = uStack_2f0._4_4_;
    uStack_2f0 = uVar26;
    uStack_2e0 = uVar12;
    local_2c8 = uVar13;
    uStack_2c0 = uVar14;
    if (local_548 != (undefined4 *)0x0) {
      plVar20 = local_538;
      if (local_538 == (longlong *)0x0) {
        plVar20 = &local_528;
      }
      (**(code **)(*plVar20 + 0x10))();
    }
  }
LAB_1408b444c:
  if (plVar21[0x37] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_a0 ^ (ulonglong)auStack_6e8);
  }
  if ((local_a0 ^ (ulonglong)auStack_6e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1408b7084 FUN_1408b7084 body=439 status=ok
// SIG undefined FUN_1408b7084(void)

undefined4 * FUN_1408b7084(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  uint uVar13;
  uint uVar14;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1408b72e2(param_1,local_48);
  puVar1 = (undefined4 *)param_3[1];
  uVar2 = ((undefined8 *)*param_3)[1];
  *local_40 = *(undefined8 *)*param_3;
  local_40[1] = uVar2;
  uVar4 = puVar1[1];
  uVar5 = puVar1[2];
  uVar6 = puVar1[3];
  *(undefined4 *)(local_40 + 2) = *puVar1;
  *(undefined4 *)((longlong)local_40 + 0x14) = uVar4;
  *(undefined4 *)(local_40 + 3) = uVar5;
  *(undefined4 *)((longlong)local_40 + 0x1c) = uVar6;
  *(undefined4 *)(local_40 + 4) = 0xffffffff;
  local_4c = local_48[0];
  uVar2 = *local_40;
  uVar3 = local_40[1];
  uVar10 = (uint)((ulonglong)uVar3 >> 0x10);
  uVar14 = (uint)uVar3 & 0xffff;
  uVar8 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar13 = (uint)uVar2 & 0xffff;
  uVar8 = ((uint)uVar2 << 0x10 | uVar13) + (int)((ulonglong)uVar2 >> 0x20) +
          (uVar8 << 0x13 | uVar8 & 0xffff) + (uVar13 >> 4);
  uVar8 = (uVar8 >> 2) +
          ((uint)uVar3 << 0x10 | uVar14) + (int)((ulonglong)uVar3 >> 0x20) +
          (uVar10 << 0x13 | uVar10 & 0xffff) + (uVar14 >> 4) + uVar8 * 0x40 + 0x9e3779b9 ^ uVar8;
  local_58 = 0;
  cVar7 = FUN_1408b723c(param_1,uVar8,local_40);
  if (cVar7 == '\0') {
    uVar10 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    if (uVar10 < 4) {
      iVar11 = 1;
    }
    else {
      uVar9 = (ulonglong)(uVar10 & 0xfffffffe) + 0xf;
      lVar12 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iVar11 = 1 << ((byte)lVar12 & 0x1f);
    }
    if (((int)uVar10 < 1) || (iVar11 <= *(int *)(param_1 + 0x48))) {
      uVar8 = *(int *)(param_1 + 0x48) - 1U & uVar8;
      *(uint *)((longlong)local_40 + 0x24) = uVar8;
      lVar12 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar12 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 4) =
           *(undefined4 *)
            (lVar12 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4);
      lVar12 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar12 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar12 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar11;
      FUN_1408b7556(param_1);
    }
  }
  *param_2 = local_4c;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1408b723c FUN_1408b723c body=165 status=ok
// SIG undefined FUN_1408b723c(void)

void FUN_1408b723c(longlong *param_1,uint param_2,longlong *param_3,int *param_4,undefined1 *param_5
                  )

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 uVar8;
  longlong *plVar9;
  int iVar10;
  
  uVar8 = 0;
  if (((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) &&
     (uVar8 = 0, (int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1)) {
    plVar9 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar9 = (longlong *)param_1[8];
    }
    iVar10 = *(int *)((longlong)plVar9 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar10 != -1) {
      do {
        plVar9 = (longlong *)(*param_1 + (longlong)iVar10 * 0x28);
        if ((*plVar9 == *param_3) &&
           (*(longlong *)(*param_1 + 8 + (longlong)iVar10 * 0x28) == param_3[1])) {
          lVar5 = *param_3;
          uVar1 = *(undefined4 *)((longlong)param_3 + 4);
          lVar6 = param_3[1];
          uVar2 = *(undefined4 *)((longlong)param_3 + 0xc);
          uVar3 = *(undefined4 *)((longlong)param_3 + 0x14);
          lVar7 = param_3[3];
          uVar4 = *(undefined4 *)((longlong)param_3 + 0x1c);
          *(int *)(plVar9 + 2) = (int)param_3[2];
          *(undefined4 *)((longlong)plVar9 + 0x14) = uVar3;
          *(int *)(plVar9 + 3) = (int)lVar7;
          *(undefined4 *)((longlong)plVar9 + 0x1c) = uVar4;
          *(int *)plVar9 = (int)lVar5;
          *(undefined4 *)((longlong)plVar9 + 4) = uVar1;
          *(int *)(plVar9 + 1) = (int)lVar6;
          *(undefined4 *)((longlong)plVar9 + 0xc) = uVar2;
          FUN_1408b74cc((int)lVar5,*param_4,1);
          *param_4 = iVar10;
          uVar8 = 1;
          goto LAB_1408b72ab;
        }
        iVar10 = (int)plVar9[4];
      } while (iVar10 != -1);
    }
    uVar8 = 0;
  }
LAB_1408b72ab:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar8;
  }
  return;
}



// FUNCTION 1408b72e2 FUN_1408b72e2 body=489 status=ok
// SIG undefined FUN_1408b72e2(void)

int * FUN_1408b72e2(longlong *param_1,int *param_2)

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
      FUN_14055df60(param_1,iVar11);
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
    iVar6 = *(int *)(*param_1 + 4 + lVar3 * 0x28);
    *(int *)(param_1 + 6) = iVar6;
    iVar2 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar2;
    if (iVar2 != 0) {
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
  *(longlong *)(param_2 + 2) = lVar3 * 0x28 + *param_1;
  return param_2;
}



// FUNCTION 1408b74cc FUN_1408b74cc body=138 status=ok
// SIG undefined FUN_1408b74cc(void)

void FUN_1408b74cc(longlong *param_1,int param_2,int param_3)

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
      puVar7 = puVar7 + 10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1408b7556 FUN_1408b7556 body=743 status=ok
// SIG undefined FUN_1408b7556(void)

void FUN_1408b7556(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  longlong *plVar8;
  ulonglong uVar9;
  longlong lVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  ulonglong uVar15;
  longlong lVar16;
  int iVar17;
  undefined1 auStack_98 [36];
  int local_74;
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
  uVar12 = *(uint *)(param_1 + 9);
  if (uVar12 != 0) {
    plVar1 = param_1 + 7;
    FUN_144a1cbf0(plVar1,0,uVar12,4);
    if (0 < (int)uVar12) {
      uVar5 = 0;
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar5) * 4) =
             0xffffffff;
        uVar5 = uVar5 + 1;
      } while (uVar12 != uVar5);
    }
    local_60 = param_1 + 2;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    if ((int)param_1[5] == 0) {
      uVar15 = 1;
      local_58._0_4_ = 0xffffffff;
      local_58._4_4_ = 0;
      local_70 = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      local_70 = local_68 & 0xffffffff;
      uVar15 = local_68 >> 0x20;
    }
    uVar12 = (uint)local_58;
    iVar17 = local_58._4_4_;
    iVar11 = local_50;
    if (local_58._4_4_ < (int)local_60[3]) {
      do {
        local_74 = iVar11;
        lVar10 = *param_1;
        lVar16 = (longlong)iVar17;
        uVar3 = *(undefined8 *)(lVar10 + lVar16 * 0x28);
        uVar4 = *(undefined8 *)(lVar10 + 8 + lVar16 * 0x28);
        uVar5 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar7 = (uint)((ulonglong)uVar3 >> 0x10);
        uVar6 = (uint)uVar3 & 0xffff;
        uVar6 = ((uint)uVar3 << 0x10 | uVar6) + (int)((ulonglong)uVar3 >> 0x20) +
                (uVar7 << 0x13 | uVar7 & 0xffff) + (uVar6 >> 4);
        uVar7 = (uint)uVar4 & 0xffff;
        uVar9 = (longlong)
                (int)((uVar6 >> 2) +
                      ((uint)uVar4 << 0x10 | uVar7) + (int)((ulonglong)uVar4 >> 0x20) +
                      (uVar5 << 0x13 | uVar5 & 0xffff) + (uVar7 >> 4) + uVar6 * 0x40 + 0x9e3779b9 ^
                     uVar6) & (longlong)(int)param_1[9] - 1U;
        iVar11 = (int)uVar9;
        *(int *)(lVar10 + 0x24 + lVar16 * 0x28) = iVar11;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar10 + 0x20 + lVar16 * 0x28) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar9) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar11 & (longlong)(int)param_1[9] - 1U) * 4) =
             iVar17;
        uVar12 = ~(uint)uVar15 & uVar12;
        plVar8 = (longlong *)local_60[2];
        if ((longlong *)local_60[2] == (longlong *)0x0) {
          plVar8 = local_60;
        }
        iVar2 = (int)local_60[3];
        iVar17 = (int)local_70;
        lVar10 = (longlong)iVar17;
        uVar5 = *(uint *)((longlong)plVar8 + lVar10 * 4) & uVar12;
        iVar11 = local_74;
        if (uVar5 == 0) {
          iVar13 = iVar2 + 0x1e;
          if (-1 < iVar2 + -1) {
            iVar13 = iVar2 + -1;
          }
          iVar13 = iVar13 >> 5;
          iVar14 = iVar13;
          if (iVar13 < iVar17) {
            iVar14 = iVar17;
          }
          if (iVar13 <= iVar17) break;
          lVar16 = 0;
          while( true ) {
            iVar11 = iVar11 + 0x20;
            uVar5 = *(uint *)((longlong)plVar8 + lVar16 * 4 + lVar10 * 4 + 4);
            if (uVar5 != 0) break;
            lVar16 = lVar16 + 1;
            if (iVar14 - lVar10 == lVar16) goto LAB_1408b7816;
          }
          local_70 = (ulonglong)(iVar17 + (int)lVar16 + 1);
          uVar12 = 0xffffffff;
        }
        uVar15 = (ulonglong)(-uVar5 & uVar5);
        uVar9 = uVar15 * 2 + 1;
        lVar10 = 0x3f;
        if (uVar9 != 0) {
          for (; uVar9 >> lVar10 == 0; lVar10 = lVar10 + -1) {
          }
        }
        iVar17 = (iVar11 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
      } while (iVar17 < iVar2);
    }
  }
LAB_1408b7816:
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1408b783e FUN_1408b783e body=269 status=ok
// SIG undefined FUN_1408b783e(void)

longlong * FUN_1408b783e(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  bool bVar9;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0x3860a972;
  param_1[2] = 0;
  uVar5 = (**(code **)(*param_2 + 0x180))(param_2);
  FUN_1408b794c(&local_30,uVar5);
  if (local_28 != (longlong *)0x0) {
    iVar4 = (int)local_28[1];
    do {
      if (iVar4 == 0) {
        plVar8 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar3 = (int)local_28[1];
      bVar9 = iVar4 == iVar3;
      if (bVar9) {
        *(int *)(local_28 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
      plVar8 = local_28;
    } while (!bVar9);
    LOCK();
    piVar1 = (int *)((longlong)local_28 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_28 + 0x10))();
    }
    if (plVar8 != (longlong *)0x0) {
      if (local_30 != 0) {
        lVar6 = FUN_144a2b138(local_30,param_3);
        if (lVar6 == 0) {
          iVar4 = 0x3860a972;
          lVar7 = 0;
        }
        else {
          lVar7 = *(longlong *)(lVar6 + 0x3c8);
          iVar4 = *(int *)(lVar6 + 0x3d0);
        }
        if ((*param_1 != lVar7) || ((int)param_1[1] != iVar4)) {
          *param_1 = lVar7;
          *(int *)(param_1 + 1) = iVar4;
          param_1[2] = 0;
        }
      }
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
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1408b794c FUN_1408b794c body=310 status=ok
// SIG undefined FUN_1408b794c(void)

longlong * FUN_1408b794c(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = 0;
  param_1[1] = 0;
  uVar4 = DAT_14cbc1a30;
  if (param_2 != 0) {
    if (DAT_14c9a7d10 == (undefined8 *)0x0) {
      DAT_14c9a7d10 = (undefined8 *)FUN_14001cc68(0x20,0x10);
      *DAT_14c9a7d10 = 0;
      DAT_14c9a7d10[1] = 0;
      DAT_14c9a7d10[2] = 0;
      DAT_14c9a7d10[3] = 0;
    }
    FUN_14005915a(DAT_14c9a7d10,&local_38,uVar4,param_2);
    plVar1 = local_30;
    if (local_38 != 0) {
      if (local_30 == (longlong *)0x0) {
        *param_1 = local_38;
      }
      else {
        LOCK();
        *(int *)(local_30 + 1) = (int)local_30[1] + 1;
        UNLOCK();
        *param_1 = local_38;
        if ((longlong *)param_1[1] != local_30) {
          LOCK();
          *(int *)((longlong)local_30 + 0xc) = *(int *)((longlong)local_30 + 0xc) + 1;
          UNLOCK();
          plVar3 = (longlong *)param_1[1];
          if (plVar3 != (longlong *)0x0) {
            LOCK();
            piVar2 = (int *)((longlong)plVar3 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar3 + 0x10))();
            }
          }
          param_1[1] = (longlong)plVar1;
        }
        LOCK();
        plVar3 = plVar1 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*plVar1)(plVar1);
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
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1408b7a90 FUN_1408b7a90 body=128 status=ok
// SIG undefined FUN_1408b7a90(void)

void FUN_1408b7a90(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    uVar2 = param_2 - iVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < uVar2) {
      FUN_1408b7b10(param_1,iVar1);
    }
    if (uVar2 != 0) {
      memset((void *)((longlong)iVar1 + *param_1),0,(ulonglong)uVar2);
      return;
    }
    return;
  }
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  if ((param_2 < iVar1) && (*(int *)(param_1 + 1) = param_2, param_3 == '\x01')) {
    FUN_146d9c650(param_1);
    return;
  }
  return;
}



// FUNCTION 1408b7b10 FUN_1408b7b10 body=345 status=ok
// SIG undefined FUN_1408b7b10(void)

void FUN_1408b7b10(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1408b7b93;
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
LAB_1408b7b93:
  uVar7 = 0x7fffffff;
  if ((int)uVar3 <= (int)uVar5) {
    uVar7 = uVar5 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,1,1);
  return;
}



// FUNCTION 1408b7c72 FUN_1408b7c72 body=1495 status=ok
// SIG undefined FUN_1408b7c72(void)

undefined8 FUN_1408b7c72(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  double dVar4;
  double dVar5;
  char cVar6;
  char cVar7;
  undefined8 uVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  double *pdVar13;
  longlong lVar14;
  int iVar15;
  double *pdVar16;
  double dVar17;
  undefined1 auStack_258 [32];
  undefined8 local_238;
  undefined1 *puStack_230;
  int local_21c;
  double *local_218;
  longlong local_210;
  double *local_208;
  undefined1 local_200 [56];
  undefined1 local_1c8 [16];
  double local_1b8;
  double dStack_1b0;
  double dStack_1a8;
  double dStack_1a0;
  undefined4 local_198;
  undefined4 uStack_194;
  double local_188 [12];
  undefined4 local_128;
  uint uStack_124;
  undefined4 uStack_120;
  uint uStack_11c;
  double local_118;
  double local_110;
  double dStack_108;
  double local_100;
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_258;
  lVar2 = *param_2;
  uVar8 = 1;
  if ((lVar2 != 0) && (*(int *)(lVar2 + 0x58) == (int)param_2[2])) {
    iVar15 = *(int *)(lVar2 + 0x88);
    local_f8._8_4_ = SUB84((double)*(float *)(lVar2 + 0x44),0);
    local_f8._0_8_ = (double)*(float *)(lVar2 + 0x40);
    local_f8._12_4_ = (int)((ulonglong)(double)*(float *)(lVar2 + 0x44) >> 0x20);
    local_e8._8_4_ = SUB84((double)*(float *)(lVar2 + 0x4c),0);
    local_e8._0_8_ = (double)*(float *)(lVar2 + 0x48);
    local_e8._12_4_ = (int)((ulonglong)(double)*(float *)(lVar2 + 0x4c) >> 0x20);
    local_d8 = *(undefined8 *)(lVar2 + 0x20);
    uStack_d0 = *(undefined8 *)(lVar2 + 0x28);
    local_c8 = *(undefined8 *)(lVar2 + 0x30);
    uStack_c0 = 0;
    local_b8 = 0x3ff0000000000000;
    uStack_b0 = 0x3ff0000000000000;
    local_a8 = 0x3ff0000000000000;
    uStack_a0 = 0;
    plVar3 = *(longlong **)(param_1 + 0x90);
    local_21c = iVar15;
    if (plVar3 == (longlong *)0x0) {
      local_100 = *(double *)(param_1 + 0x48);
      local_110 = *(double *)(param_1 + 0x38);
      dStack_108 = *(double *)(param_1 + 0x40);
      local_128 = *(undefined4 *)(param_1 + 0x38);
      uStack_120 = *(undefined4 *)(param_1 + 0x40);
      uStack_124 = *(uint *)(param_1 + 0x3c) ^ 0x80000000;
      uStack_11c = *(uint *)(param_1 + 0x44) ^ 0x80000000;
      local_118 = -*(double *)(param_1 + 0x48);
      iVar10 = iVar15;
    }
    else {
      pdVar13 = (double *)(param_1 + 0xa0);
      pdVar16 = local_188;
      for (lVar11 = 0xc; lVar11 != 0; lVar11 = lVar11 + -1) {
        *pdVar16 = *pdVar13;
        pdVar13 = pdVar13 + 1;
        pdVar16 = pdVar16 + 1;
      }
      (**(code **)(*plVar3 + 0x80))(plVar3,local_1c8);
      FUN_1400c6592(local_1c8,&local_128,local_188);
      iVar10 = *(int *)(lVar2 + 0x88);
    }
    uVar8 = 1;
    if (0 < iVar10) {
      local_210 = param_1 + 0x80;
      local_218 = (double *)(param_1 + 0xa0);
      local_208 = (double *)(param_1 + 0x58);
      lVar11 = 0;
      do {
        lVar12 = *(longlong *)(lVar2 + 0x80);
        if (*(longlong *)(lVar2 + 0x80) == 0) {
          lVar12 = lVar2 + 0x78;
        }
        lVar14 = *(longlong *)(lVar12 + lVar11 * 8);
        uVar8 = *(undefined8 *)(lVar14 + 0x10);
        if (1 < iVar15) {
          if (*(longlong *)(param_1 + 0x90) == 0) {
            dVar4 = *(double *)(param_1 + 0x38);
            dVar17 = *(double *)(param_1 + 0x40);
            dVar5 = *(double *)(param_1 + 0x48);
          }
          else {
            dVar5 = (local_100 - local_118) * 0.5;
            dVar17 = (dStack_108 - (double)CONCAT44(uStack_11c,uStack_120)) * 0.5;
            dVar4 = (local_110 - (double)CONCAT44(uStack_124,local_128)) * 0.5;
          }
          local_188[0] = *(double *)(lVar14 + 0x18) - dVar4;
          local_188[1] = *(double *)(lVar14 + 0x20) - dVar17;
          local_188[2] = *(double *)(lVar14 + 0x28) - dVar5;
          local_188[3] = *(double *)(lVar14 + 0x30) + dVar4;
          local_188[4] = *(double *)(lVar14 + 0x38) + dVar17;
          local_188[5] = *(double *)(lVar14 + 0x40) + dVar5;
          if (*(longlong *)(param_1 + 0x90) == 0) {
            dVar4 = *(double *)(param_1 + 0xc0);
            dVar17 = *(double *)(param_1 + 200);
            local_1b8 = *(double *)(param_1 + 0xd0);
          }
          else {
            local_1b8 = (local_100 - local_118) * 0.5 + local_118;
            dVar17 = (dStack_108 - (double)CONCAT44(uStack_11c,uStack_120)) * 0.5 +
                     (double)CONCAT44(uStack_11c,uStack_120);
            dVar4 = (local_110 - (double)CONCAT44(uStack_124,local_128)) * 0.5 +
                    (double)CONCAT44(uStack_124,local_128);
          }
          local_1c8._8_4_ = SUB84(dVar17,0);
          local_1c8._0_8_ = dVar4;
          local_1c8._12_4_ = (int)((ulonglong)dVar17 >> 0x20);
          lVar9 = 0;
          do {
            dVar4 = *(double *)(local_1c8 + lVar9 * 8);
            if ((dVar4 < local_188[lVar9]) ||
               (local_188[lVar9 + 3] <= dVar4 && dVar4 != local_188[lVar9 + 3])) goto LAB_1408b815b;
            lVar9 = lVar9 + 1;
          } while (lVar9 != 3);
        }
        cVar6 = '\x02';
        if ((*(byte *)(*(longlong *)(param_1 + 0x78) + 0x10) & 4) == 0) {
LAB_1408b8009:
          local_1b8 = (double)CONCAT44(local_1b8._4_4_,0xffffffff);
          dStack_1b0 = 0.0;
          dStack_1a8 = 0.0;
          dStack_1a0 = 0.0;
          local_198 = 0xffffffff;
          local_1c8._8_8_ = *(undefined8 *)(lVar12 + lVar11 * 8);
          local_1c8._0_8_ = lVar2;
          if (*(longlong *)(param_1 + 0x90) != 0) {
            if ((*(byte *)(param_1 + 0x51) & 2) == 0) {
              pdVar13 = local_218;
              pdVar16 = local_188;
              for (lVar12 = 0xc; lVar12 != 0; lVar12 = lVar12 + -1) {
                *pdVar16 = *pdVar13;
                pdVar13 = pdVar13 + 1;
                pdVar16 = pdVar16 + 1;
              }
              puStack_230 = (undefined1 *)0x0;
            }
            else {
              pdVar13 = local_218;
              pdVar16 = local_188;
              for (lVar12 = 0xc; lVar12 != 0; lVar12 = lVar12 + -1) {
                *pdVar16 = *pdVar13;
                pdVar13 = pdVar13 + 1;
                pdVar16 = pdVar16 + 1;
              }
              puStack_230 = local_200;
            }
            local_238 = 0;
            cVar7 = FUN_140a08058(uVar8,local_f8);
            iVar15 = local_21c;
            if (cVar7 != '\0') {
              dStack_1a0 = local_208[2];
              dStack_1b0 = *local_208;
              dStack_1a8 = local_208[1];
              if ((*(byte *)(*(longlong *)(param_1 + 0x78) + 0x10) & 8) != 0) {
                cVar6 = (**(code **)(**(longlong **)(param_1 + 0x98) + 0x10))
                                  (*(longlong **)(param_1 + 0x98),local_210,local_1c8);
              }
              if (cVar6 != '\0') {
                if ((cVar6 == '\x02') || (*(char *)(param_1 + 0x52) == '\x01')) {
                  lVar12 = *(longlong *)(param_1 + 0x70);
LAB_1408b8119:
                  *(ulonglong *)(lVar12 + 0x38) = CONCAT44(uStack_194,local_198);
                  *(double *)(lVar12 + 0x28) = dStack_1a8;
                  *(double *)(lVar12 + 0x30) = dStack_1a0;
                  *(double *)(lVar12 + 0x18) = local_1b8;
                  *(double *)(lVar12 + 0x20) = dStack_1b0;
                  *(undefined4 *)(lVar12 + 8) = local_1c8._0_4_;
                  *(undefined4 *)(lVar12 + 0xc) = local_1c8._4_4_;
                  *(undefined4 *)(lVar12 + 0x10) = local_1c8._8_4_;
                  *(undefined4 *)(lVar12 + 0x14) = local_1c8._12_4_;
                  *(undefined1 *)(lVar12 + 0x44) = 1;
                }
                else {
                  lVar12 = *(longlong *)(param_1 + 0x70);
                  if (*(char *)(lVar12 + 0x45) == '\x01') goto LAB_1408b8119;
                  iVar15 = *(int *)(lVar12 + 0x1c50);
                  *(uint *)(lVar12 + 0x1c50) = iVar15 + 1U;
                  if (*(uint *)(lVar12 + 0x1c54) < iVar15 + 1U) {
                    FUN_140ef0e5e(lVar12 + 0x48,iVar15);
                  }
                  lVar14 = lVar12 + 0x48;
                  if (*(longlong *)(lVar12 + 0x1c48) != 0) {
                    lVar14 = *(longlong *)(lVar12 + 0x1c48);
                  }
                  lVar12 = (longlong)iVar15 * 0x38;
                  *(ulonglong *)(lVar14 + 0x30 + lVar12) = CONCAT44(uStack_194,local_198);
                  pdVar13 = (double *)(lVar14 + 0x20 + lVar12);
                  *pdVar13 = dStack_1a8;
                  pdVar13[1] = dStack_1a0;
                  pdVar13 = (double *)(lVar14 + 0x10 + lVar12);
                  *pdVar13 = local_1b8;
                  pdVar13[1] = dStack_1b0;
                  puVar1 = (undefined4 *)(lVar14 + lVar12);
                  *puVar1 = local_1c8._0_4_;
                  puVar1[1] = local_1c8._4_4_;
                  puVar1[2] = local_1c8._8_4_;
                  puVar1[3] = local_1c8._12_4_;
                  iVar15 = local_21c;
                }
                if (*(char *)(param_1 + 0x52) != '\0') {
                  uVar8 = 0;
                  goto LAB_1408b81f6;
                }
              }
            }
          }
        }
        else {
          cVar6 = (**(code **)(**(longlong **)(param_1 + 0x98) + 0x20))
                            (*(longlong **)(param_1 + 0x98),local_210,lVar14,lVar2);
          if (cVar6 != '\0') goto LAB_1408b8009;
        }
LAB_1408b815b:
        lVar11 = lVar11 + 1;
      } while (lVar11 < *(int *)(lVar2 + 0x88));
      uVar8 = 1;
    }
  }
LAB_1408b81f6:
  if ((local_90 ^ (ulonglong)auStack_258) == DAT_14c707940) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1408b824a FUN_1408b824a body=1798 status=ok
// SIG undefined FUN_1408b824a(void)

void FUN_1408b824a(longlong param_1,undefined8 *param_2,longlong param_3,longlong param_4)

{
  char cVar1;
  char cVar2;
  int iVar3;
  bool bVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  uint uVar10;
  int iVar11;
  ulonglong uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auStack_118 [40];
  undefined8 *local_f0;
  longlong local_e8;
  undefined4 local_e0 [2];
  longlong local_d8;
  undefined2 local_d0;
  longlong local_c8;
  longlong *local_c0 [2];
  longlong local_b0;
  undefined8 uStack_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined1 local_90 [16];
  longlong local_80;
  undefined8 local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_118;
  plVar5 = (longlong *)(param_1 + 0x40);
  if (0 < (longlong)*(int *)(param_1 + 0x48)) {
    lVar8 = (longlong)*(int *)(param_1 + 0x48) * 200;
    if (*(char *)(*plVar5 + -6 + lVar8) == '\x01') {
      FUN_1408b8952(*param_2,*(undefined4 *)(*plVar5 + lVar8 + -0x88));
    }
  }
  iVar11 = *(int *)(param_1 + 0x2c);
  iVar3 = *(int *)(param_3 + 0xc);
  lVar8 = (longlong)iVar11 * 0x78;
  FUN_1408b8952(*param_2,*(undefined4 *)
                          (*(longlong *)(*(longlong *)(param_1 + 0x38) + 0x10) + 0x20 + lVar8));
  local_f0 = param_2;
  FUN_1408b8952(*param_2);
  uVar10 = *(uint *)(param_1 + 0x48);
  if (((((longlong)iVar11 < 0) || (lVar7 = *(longlong *)(param_1 + 0x38), lVar7 == 0)) ||
      (*(int *)(lVar7 + 0x18) <= iVar11)) ||
     (*(char *)(*(longlong *)(lVar7 + 0x10) + 0x28 + lVar8) == '\0')) {
    local_80 = 0;
    local_78 = 0x300000000;
    if (param_4 == 0) {
      fVar14 = 0.0;
      local_e8 = 0;
    }
    else {
      fVar14 = *(float *)(param_4 + 4);
      local_e8 = *(longlong *)(param_4 + 8);
      FUN_1408b89b0(local_90);
      uVar10 = *(uint *)(param_1 + 0x48);
    }
    if ((int)uVar10 < 1) {
      if (*(int *)(param_1 + 0x2c) == iVar3) {
        fVar16 = 1.0;
      }
      else {
        fVar16 = 0.0;
      }
    }
    else {
      lVar8 = *plVar5;
      fVar16 = 0.0;
      lVar7 = 0;
      do {
        fVar13 = *(float *)(lVar8 + 4 + lVar7);
        fVar15 = 1.0 - fVar13;
        if (lVar7 == 0) {
          if (*(int *)(lVar8 + 0x34) == iVar3) {
            fVar16 = fVar16 + fVar15;
          }
        }
        else {
          fVar16 = fVar16 * fVar15;
        }
        if (*(int *)(lVar8 + 0x30 + lVar7) == iVar3) {
          fVar16 = fVar16 + fVar13;
        }
        lVar7 = lVar7 + 200;
      } while ((ulonglong)uVar10 * 200 - lVar7 != 0);
      if (1.0 <= fVar16) {
        fVar16 = 1.0;
      }
      if (fVar16 <= 0.0) {
        fVar16 = 0.0;
      }
    }
    *(uint *)(param_1 + 0x48) = uVar10 + 1;
    if (*(uint *)(param_1 + 0x4c) < uVar10 + 1) {
      FUN_1408b8a80(plVar5);
    }
    lVar8 = *plVar5 + (longlong)(int)uVar10 * 200;
    puVar9 = (undefined8 *)(*plVar5 + (longlong)(int)uVar10 * 200);
    *puVar9 = 0;
    puVar9[2] = 0;
    puVar9[3] = 0;
    puVar9[4] = 0;
    *(undefined4 *)(puVar9 + 5) = 0xffffffff;
    *(int *)(puVar9 + 6) = iVar3;
    *(int *)((longlong)puVar9 + 0x34) = iVar11;
    *(undefined4 *)(puVar9 + 7) = *(undefined4 *)(param_3 + 0x14);
    *(undefined4 *)((longlong)puVar9 + 0x3c) = *(undefined4 *)(param_3 + 0x18);
    *(undefined4 *)(puVar9 + 8) = *(undefined4 *)(param_3 + 0x1c);
    puVar9[0xf] = 0;
    puVar9[0x10] = 0x300000000;
    puVar9[9] = 0;
    puVar9[10] = 0;
    puVar9[0xb] = 0;
    puVar9[0xc] = 0;
    puVar9[0x11] = 0;
    *(undefined4 *)(puVar9 + 0x12) = 0x3e4ccccd;
    *(undefined8 *)((longlong)puVar9 + 0xa4) = 0x3f80000000000000;
    *(undefined1 *)((longlong)puVar9 + 0xac) = 0;
    FUN_1404163bc(puVar9 + 0x11);
    lVar7 = *(longlong *)(param_3 + 0x30);
    puVar9[0x17] = lVar7;
    if ((lVar7 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    cVar1 = *(char *)(param_3 + 0x20);
    *(char *)(lVar8 + 0xc0) = cVar1;
    cVar2 = *(char *)(param_3 + 0x38);
    *(char *)(lVar8 + 0xc1) = cVar2;
    *(undefined1 *)(lVar8 + 0xc2) = 1;
    *(undefined1 *)(lVar8 + 0xc3) = *(undefined1 *)(param_3 + 0x39);
    fVar13 = 0.0;
    if (cVar2 != '\x01') {
      fVar16 = 1.0 - fVar16;
      fVar14 = *(float *)(param_3 + 0x10) - fVar14;
      if (fVar14 <= 0.0) {
        fVar14 = 0.0;
      }
      if (cVar1 == '\x02') {
        fVar13 = fVar16 * fVar16;
        fVar16 = fVar16 * 1.6666666 + (fVar16 * fVar13 * 1.3333334 - (fVar13 + fVar13));
      }
      else {
        if (1.0 <= fVar16) {
          fVar16 = 1.0;
        }
        if (fVar16 <= 0.0) {
          fVar16 = 0.0;
        }
      }
      fVar13 = fVar14 * fVar16;
    }
    *(float *)(lVar8 + 8) = fVar13;
    if (fVar13 <= 0.0) {
      fVar13 = 0.0;
    }
    *(float *)(lVar8 + 0x90) = fVar13;
    *(undefined2 *)(lVar8 + 0xae) = 0x101;
    *(char *)(lVar8 + 0xac) = cVar1;
    lVar7 = *(longlong *)(param_3 + 0x28);
    if ((lVar7 != 0) && (DAT_14c950c29 != 0)) {
      FUN_1456cec3c(lVar7);
    }
    *(longlong *)(lVar8 + 0x88) = lVar7;
    *(undefined8 *)(lVar8 + 0xa4) = 0x3f80000000000000;
    *(undefined1 *)(lVar8 + 0xad) = 1;
    *(undefined1 *)(lVar8 + 0xaf) = 1;
    if (local_e8 != 0 && *(char *)(param_3 + 0x38) == '\x02') {
      FUN_147912842(lVar8);
    }
    if (*(longlong *)(lVar8 + 0xb8) != 0) {
      iVar11 = *(int *)(lVar8 + 0x60);
      *(int *)(lVar8 + 0x60) = iVar11 + 2;
      if ((uint)(*(int *)(lVar8 + 100) - iVar11) < 2) {
        FUN_1401e176a(lVar8 + 0x58);
      }
      memset((void *)((longlong)iVar11 * 0x60 + *(longlong *)(lVar8 + 0x58)),0,0xc0);
      lVar7 = *(longlong *)(lVar8 + 0x58);
      uVar10 = *(uint *)(*(longlong *)(lVar8 + 0xb8) + 0x40);
      iVar11 = *(int *)(lVar7 + 0x48);
      *(uint *)(lVar7 + 0x48) = uVar10 + iVar11;
      if ((uint)(*(int *)(lVar7 + 0x4c) - iVar11) < uVar10) {
        FUN_14475e4ac((longlong *)(lVar7 + 0x40));
      }
      memset((void *)((longlong)iVar11 * 4 + *(longlong *)(lVar7 + 0x40)),0,
             (longlong)(int)uVar10 << 2);
      lVar7 = *(longlong *)(lVar8 + 0x58);
      uVar10 = *(uint *)(*(longlong *)(lVar8 + 0xb8) + 0x40);
      iVar11 = *(int *)(lVar7 + 0xa8);
      *(uint *)(lVar7 + 0xa8) = uVar10 + iVar11;
      if ((uint)(*(int *)(lVar7 + 0xac) - iVar11) < uVar10) {
        FUN_14475e4ac((longlong *)(lVar7 + 0xa0));
      }
      memset((void *)((longlong)iVar11 * 4 + *(longlong *)(lVar7 + 0xa0)),0,
             (longlong)(int)uVar10 << 2);
    }
    puVar9 = local_f0;
    if ((*(char *)(param_3 + 0x38) == '\x01') &&
       (plVar5 = (longlong *)FUN_14025b9ca(local_f0), plVar5 != (longlong *)0x0)) {
      local_d8 = 0;
      local_d0 = 0;
      local_c8 = 0;
      FUN_144a5dc74(local_c0);
      local_b0 = 0;
      uStack_a8 = 0;
      local_a0 = 0xffffffff;
      local_98 = 0;
      local_e0[0] = *(undefined4 *)(param_3 + 0x10);
      lVar7 = *(longlong *)(param_3 + 0x30);
      if (DAT_14c950c29 == 1) {
        if (lVar7 == 0) {
          lVar7 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar7 = *(longlong *)(param_3 + 0x30);
        }
      }
      local_d0 = CONCAT11(*(undefined1 *)(param_3 + 0x20),1);
      lVar6 = *(longlong *)(param_3 + 0x28);
      local_d8 = lVar7;
      if ((DAT_14c950c29 & 1) != 0) {
        if (lVar6 == 0) {
          lVar6 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar6 = *(longlong *)(param_3 + 0x28);
        }
      }
      puVar9 = local_f0;
      local_c8 = lVar6;
      (**(code **)(*plVar5 + 0x20))(plVar5,local_e0);
      (**(code **)(*plVar5 + 0x30))(plVar5,*puVar9,*(undefined4 *)((longlong)puVar9 + 0x14));
      if (local_b0 != 0) {
        FUN_1400020a8();
      }
      if (local_c0[0] != (longlong *)0x0) {
        (**(code **)(*local_c0[0] + 0x10))();
      }
    }
    FUN_1408b89b0(lVar8 + 0x68,local_90);
    if ((*(char *)(param_1 + 0x28) != '\x01') || (*(char *)(param_1 + 0x24) == '\0')) {
      FUN_1408b8952(*puVar9,*(undefined4 *)(lVar8 + 0x38));
    }
    if (local_80 != 0) {
      FUN_1400020a8();
    }
  }
  puVar9 = local_f0;
  plVar5 = (longlong *)(param_1 + 0x90);
  iVar11 = *(int *)(param_1 + 0x98);
  uVar12 = (ulonglong)iVar11;
  if (0 < (longlong)uVar12) {
    lVar8 = uVar12 * 0x50 + -8;
    do {
      if ((*(char *)(*plVar5 + lVar8) == '\0') && (0 < *(int *)(*plVar5 + -0x20 + lVar8))) {
        FUN_145753cfe(plVar5,(int)uVar12 + -1);
      }
      lVar8 = lVar8 + -0x50;
      bVar4 = 1 < uVar12;
      uVar12 = uVar12 - 1;
    } while (bVar4);
    iVar11 = *(int *)(param_1 + 0x98);
  }
  if (*(int *)(param_1 + 0x9c) != iVar11) {
    FUN_145753d5e(plVar5,iVar11);
  }
  FUN_1408b8e5c(param_1,puVar9,iVar3);
  if ((local_70 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1408b8952 FUN_1408b8952 body=93 status=ok
// SIG undefined FUN_1408b8952(void)

void FUN_1408b8952(longlong param_1,int param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  if ((param_2 != -1) && (*(longlong **)(param_1 + 0x138) != (longlong *)0x0)) {
    plVar2 = (longlong *)(**(code **)(**(longlong **)(param_1 + 0x138) + 0x18))();
    lVar1 = *plVar2;
    uVar3 = FUN_1408b8ca0(*(undefined8 *)(param_1 + 0x138));
    FUN_1408b8bfa(param_1 + 0x338,(longlong)param_2 * 0xb8 + lVar1,uVar3);
    return;
  }
  return;
}



// FUNCTION 1408b89b0 FUN_1408b89b0 body=104 status=ok
// SIG undefined FUN_1408b89b0(void)

void * FUN_1408b89b0(void *param_1,void *param_2)

{
  int iVar1;
  void *_Dst;
  void *_Src;
  
  if (param_1 != param_2) {
    _Src = *(void **)((longlong)param_2 + 0x10);
    if (*(void **)((longlong)param_2 + 0x10) == (void *)0x0) {
      _Src = param_2;
    }
    iVar1 = *(int *)((longlong)param_2 + 0x18);
    *(int *)((longlong)param_1 + 0x18) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0x1c) == 0) {
      *(undefined4 *)((longlong)param_1 + 0x1c) = 3;
    }
    else {
      FUN_1408b8a18(param_1,iVar1);
      if (iVar1 != 0) {
        _Dst = *(void **)((longlong)param_1 + 0x10);
        if (*(void **)((longlong)param_1 + 0x10) == (void *)0x0) {
          _Dst = param_1;
        }
        memcpy(_Dst,_Src,(longlong)iVar1 << 2);
      }
    }
  }
  return param_1;
}



// FUNCTION 1408b8a18 FUN_1408b8a18 body=103 status=ok
// SIG undefined FUN_1408b8a18(void)

void FUN_1408b8a18(longlong param_1,uint param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = 3;
    if (3 < param_2) {
      uVar2 = FUN_144a3809e((longlong)(int)param_2 << 2,0);
      iVar1 = (int)(uVar2 >> 2);
      iVar3 = 0x7fffffff;
      if ((int)param_2 <= iVar1) {
        iVar3 = iVar1;
      }
    }
  }
  if (param_3 < iVar3) {
    FUN_14791a81e(param_1,0,iVar3,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0x1c) = param_3;
  return;
}



// FUNCTION 1408b8a80 FUN_1408b8a80 body=376 status=ok
// SIG undefined FUN_1408b8a80(void)

void FUN_1408b8a80(longlong param_1,int param_2)

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
  uVar5 = lVar4 * 200;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1408b8b08;
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
LAB_1408b8b08:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 200)) {
    uVar7 = uVar5 / 200 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,200,8);
  return;
}



// FUNCTION 1408b8bfa FUN_1408b8bfa body=166 status=ok
// SIG undefined FUN_1408b8bfa(void)

void FUN_1408b8bfa(longlong param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  
  if ((param_3 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_3);
  }
  iVar1 = *(int *)(param_1 + 0x18);
  *(uint *)(param_1 + 0x18) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x1c) < iVar1 + 1U) {
    FUN_140166dde((longlong *)(param_1 + 0x10),iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x10);
  lVar4 = (longlong)iVar1 * 0x30;
  *(undefined8 *)(lVar2 + lVar4) = 0;
  ((undefined8 *)(lVar2 + lVar4))[1] = 0;
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = param_2;
  *(undefined8 *)(lVar2 + 0x18 + lVar4) = 0;
  cVar3 = DAT_14c950c29;
  *(longlong *)(lVar2 + 0x20 + lVar4) = param_3;
  if ((param_3 != 0) && (cVar3 != '\0')) {
    FUN_1456cec3c(param_3);
  }
  *(undefined4 *)(lVar2 + lVar4 + 0x28) = 0;
  *(undefined1 *)(lVar2 + lVar4 + 0x2c) = 0;
  return;
}



// FUNCTION 1408b8ca0 FUN_1408b8ca0 body=442 status=ok
// SIG undefined FUN_1408b8ca0(void)

longlong FUN_1408b8ca0(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_a8 [32];
  wchar_t *local_88;
  undefined4 local_80;
  undefined8 local_78;
  wchar_t *local_70;
  undefined4 local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  code **local_50;
  code *local_40;
  undefined1 local_38 [8];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1 != (longlong *)0x0) {
    lVar1 = (**(code **)(*param_1 + 8))();
    if (lVar1 != 0) {
      if (DAT_14c949118 == 0) {
        local_40 = FUN_140631fbe;
        lVar4 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
        DAT_14c949118 = lVar4;
        FUN_1446f470e(local_38,L"Class",1);
        local_58 = &LAB_146891e90;
        local_60 = &LAB_146273097;
        local_70 = L"Engine";
        local_68 = 199;
        local_78 = 0x20;
        local_80 = 0x10000000;
        local_88 = (wchar_t *)CONCAT44(local_88._4_4_,8);
        local_50 = &local_40;
        FUN_14574b4b2(lVar4);
        DAT_14c949118 = lVar4;
        uVar2 = FUN_144a7a812();
        lVar4 = DAT_14c949118;
        uVar3 = FUN_1449e2fb2();
        local_88 = L"Class";
        FUN_14574b446(uVar3,lVar4,uVar2,L"/Script/CoreUObject");
      }
      if ((*(int *)(DAT_14c949118 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14c949118 + 0x38) * 8) == DAT_14c949118 + 0x30))
      goto LAB_1408b8d0a;
    }
    lVar1 = (**(code **)(*param_1 + 8))(param_1);
    if ((lVar1 != 0) && (lVar1 = *(longlong *)(lVar1 + 0x20), lVar1 != 0)) {
      lVar4 = FUN_144a797b2();
      if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8
           ) == lVar4 + 0x30)) goto LAB_1408b8d0a;
    }
  }
  lVar1 = 0;
LAB_1408b8d0a:
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1408b8e5c FUN_1408b8e5c body=2255 status=ok
// SIG undefined FUN_1408b8e5c(void)

void FUN_1408b8e5c(longlong param_1,longlong *param_2,uint param_3)

{
  float fVar1;
  short sVar2;
  short sVar3;
  char *pcVar4;
  uint uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong *plVar10;
  uint uVar11;
  int iVar12;
  longlong lVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  char cVar16;
  longlong lVar17;
  uint uVar18;
  char cVar19;
  float fVar20;
  float fVar21;
  undefined1 auStack_c8 [39];
  char local_a1;
  longlong local_a0;
  uint local_94;
  longlong *local_90;
  longlong local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined1 local_78;
  undefined8 local_74;
  char *local_68;
  undefined8 local_60;
  undefined1 local_58;
  undefined8 local_54;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uVar5 = *(uint *)(param_1 + 0x2c);
  if (uVar5 == param_3) goto LAB_1408b941c;
  local_94 = uVar5;
  if (uVar5 != 0xffffffff) {
    if ((int)uVar5 < *(int *)(param_1 + 0x88)) {
      if ((*(int *)(*(longlong *)(param_1 + 0x80) + 8 + (longlong)(int)uVar5 * 0x10) != 0) &&
         (plVar7 = *(longlong **)(*(longlong *)(param_1 + 0x80) + (longlong)(int)uVar5 * 0x10),
         plVar7 != (longlong *)0x0)) {
        (**(code **)(*plVar7 + 0x60))(plVar7,param_1,uVar5,(ulonglong)param_3);
        uVar5 = *(uint *)(param_1 + 0x2c);
      }
    }
    if ((-1 < (int)uVar5) && ((int)uVar5 < *(int *)(param_1 + 0x58))) {
      if (*(int *)(*(longlong *)(param_1 + 0x50) + 8 + (ulonglong)uVar5 * 0x10) != -1) {
        lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x50) + (ulonglong)uVar5 * 0x10);
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14cacc328) &&
           (FUN_144b3d300(&DAT_14cacc328), DAT_14cacc328 == -1)) {
          DAT_14cacc324 = -1;
          _Init_thread_footer(&DAT_14cacc328);
        }
        if (DAT_14cacc324 == -1) {
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110)
               < DAT_14cacc338) && (FUN_144b3d300(), DAT_14cacc338 == -1)) {
            local_68 = "StateExitFunction";
            local_60 = CONCAT35(local_60._5_3_,0x11);
            uVar5 = FUN_14001a6c0(&local_68,1);
            DAT_14cacc330 = (ulonglong)uVar5;
            _Init_thread_footer();
          }
          if (DAT_14cacbf50 == 0) {
            uVar6 = FUN_140002dac();
            DAT_14cacbf50 = FUN_140002ddd(FUN_1463a5c91,uVar6,L"AnimNode_StateResult");
          }
          plVar7 = *(longlong **)(lVar9 + 8);
          if (plVar7 == (longlong *)0x0) {
            DAT_14cacc324 = -1;
          }
          else {
            if (*plVar7 == 0) {
              plVar7 = (longlong *)0x0;
            }
            else {
              plVar7 = (longlong *)plVar7[1];
            }
            DAT_14cacc324 = (**(code **)(*plVar7 + 0x130))(plVar7,DAT_14cacbf50,DAT_14cacc330);
          }
        }
        plVar7 = *(longlong **)(lVar9 + 8);
        lVar13 = *plVar7;
        uVar5 = *(uint *)(plVar7[2] + (longlong)DAT_14cacc324 * 4);
        uVar18 = uVar5 & 0x7fffffff;
        if ((int)uVar5 < 0) {
          if (lVar13 == 0) {
            plVar10 = (longlong *)0x0;
          }
          else {
            plVar10 = (longlong *)plVar7[1];
          }
          lVar17 = plVar7[4];
          if (*(code **)(*plVar10 + 0x20) == (code *)&LAB_14488c8ee) {
            plVar10 = plVar10 + 0x12;
          }
          else {
            plVar10 = (longlong *)(**(code **)(*plVar10 + 0x20))(plVar10);
            lVar13 = *plVar7;
          }
          if (lVar13 == 0) {
            plVar7 = (longlong *)0x0;
          }
          else {
            plVar7 = (longlong *)plVar7[1];
          }
          uVar6 = (**(code **)(*plVar7 + 0x108))
                            (plVar7,uVar18,
                             lVar9 - *(int *)(*(longlong *)(*plVar10 + (longlong)(int)lVar17 * 8) +
                                             0x44));
        }
        else {
          if (lVar13 == 0) {
            plVar7 = (longlong *)0x0;
          }
          else {
            plVar7 = (longlong *)plVar7[1];
          }
          uVar6 = (**(code **)(*plVar7 + 0x100))(plVar7,uVar18);
        }
        FUN_140fbdcea(uVar6,param_2,param_1);
      }
    }
  }
  local_90 = (longlong *)(param_1 + 0x50);
  if (((int)param_3 < 0) || (*(int *)(*(longlong *)(param_1 + 0x38) + 0x18) <= (int)param_3)) {
    cVar16 = '\0';
  }
  else {
    cVar16 = *(char *)(*(longlong *)(*(longlong *)(param_1 + 0x38) + 0x10) + 0x50 +
                      (ulonglong)param_3 * 0x78);
  }
  if ((longlong)*(int *)(param_1 + 0x48) < 1) {
    cVar19 = *(uint *)(param_1 + 0x2c) == param_3;
  }
  else {
    lVar9 = *(longlong *)(param_1 + 0x40);
    fVar20 = 0.0;
    lVar13 = 0;
    do {
      fVar1 = *(float *)(lVar9 + 4 + lVar13);
      fVar21 = 1.0 - fVar1;
      if (lVar13 == 0) {
        if (*(uint *)(lVar9 + 0x34) == param_3) {
          fVar20 = fVar20 + fVar21;
        }
      }
      else {
        fVar20 = fVar20 * fVar21;
      }
      if (*(uint *)(lVar9 + 0x30 + lVar13) == param_3) {
        fVar20 = fVar20 + fVar1;
      }
      lVar13 = lVar13 + 200;
    } while ((longlong)*(int *)(param_1 + 0x48) * 200 - lVar13 != 0);
    if (1.0 <= fVar20) {
      fVar20 = 1.0;
    }
    cVar19 = 0.0 < fVar20;
  }
  uVar5 = *(int *)(*(longlong *)(param_1 + 0x38) + 0x18) - 1;
  if ((int)param_3 < (int)uVar5) {
    uVar5 = param_3;
  }
  uVar8 = (ulonglong)uVar5;
  if ((int)uVar5 < 1) {
    uVar8 = 0;
  }
  *(int *)(param_1 + 0x2c) = (int)uVar8;
  *(undefined4 *)(param_1 + 0x30) = 0;
  lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x10);
  lVar13 = (longlong)*(int *)(lVar9 + 0x38 + uVar8 * 0x78);
  if (lVar13 != 0) {
    lVar9 = *(longlong *)(lVar9 + 0x30 + uVar8 * 0x78);
    lVar17 = 0;
    do {
      plVar7 = (longlong *)FUN_1417b4e96(*param_2,*(undefined4 *)(lVar9 + lVar17));
      if (plVar7 != (longlong *)0x0) {
        (**(code **)(*plVar7 + 0x140))(plVar7);
      }
      lVar17 = lVar17 + 4;
    } while (lVar13 * 4 != lVar17);
    uVar8 = (ulonglong)*(uint *)(param_1 + 0x2c);
    lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x10);
  }
  lVar13 = (longlong)(int)uVar8 * 0x78;
  lVar17 = (longlong)*(int *)(lVar9 + 0x48 + lVar13);
  if (lVar17 != 0) {
    puVar15 = *(undefined4 **)(lVar9 + 0x40 + lVar13);
    puVar14 = puVar15 + lVar17;
    do {
      lVar9 = FUN_147912dda(*param_2,*puVar15);
      if ((lVar9 != 0) && (lVar9 = FUN_147508a86(lVar9), lVar9 != 0)) {
        local_88 = 0;
        local_a0 = lVar9;
        lVar9 = FUN_1479129d8(*param_2,*puVar15);
        plVar7 = (longlong *)(lVar9 + 200);
        if (lVar9 == 0) {
          plVar7 = &DAT_14cacbf28;
        }
        local_88 = *plVar7;
        FUN_1478f8418(local_a0,&local_68,&local_88);
        pcVar4 = local_68;
        local_a0 = (longlong)(int)local_60;
        if (local_a0 != 0) {
          local_a0 = local_a0 << 3;
          lVar9 = 0;
          local_a1 = cVar19;
          do {
            (**(code **)(**(longlong **)(pcVar4 + lVar9) + 0x140))();
            lVar9 = lVar9 + 8;
            cVar19 = local_a1;
          } while (local_a0 != lVar9);
        }
        if (local_68 != (char *)0x0) {
          FUN_1400020a8();
        }
      }
      puVar15 = puVar15 + 1;
    } while (puVar15 != puVar14);
  }
  plVar7 = local_90;
  uVar5 = local_94;
  if (((cVar19 == '\0') || (cVar16 != '\0')) &&
     ((lVar9 = *(longlong *)(param_1 + 0x38), lVar9 == 0 || (int)param_3 < 0 ||
      ((*(int *)(lVar9 + 0x18) <= (int)param_3 ||
       (*(char *)(*(longlong *)(lVar9 + 0x10) + 0x28 + (ulonglong)param_3 * 0x78) == '\0')))))) {
    local_88 = *param_2;
    uStack_80 = (undefined4)param_2[1];
    uStack_7c = *(undefined4 *)((longlong)param_2 + 0xc);
    local_78 = 1;
    local_74 = 0xffffffffffffffff;
    lVar9 = (longlong)(int)param_3 * 0x10;
    FUN_140320438(*local_90 + lVar9);
    pcVar4 = (char *)*param_2;
    sVar2 = *(short *)(pcVar4 + 0x5d8);
    if ((sVar2 != -1) && (*(longlong *)(pcVar4 + 0x5d0) != -1)) {
      sVar3 = *(short *)(*(longlong *)(param_1 + 0xc0) + 8 + lVar9);
      plVar10 = (longlong *)(*(longlong *)(param_1 + 0xc0) + lVar9);
      if ((((sVar3 == -1) || (*plVar10 != *(longlong *)(pcVar4 + 0x5d0))) || (sVar3 != sVar2)) ||
         (*plVar10 == -1)) {
        *(short *)(plVar10 + 1) = sVar2;
        *plVar10 = *(longlong *)(pcVar4 + 0x5d0);
        *(undefined2 *)((longlong)plVar10 + 10) = *(undefined2 *)(pcVar4 + 0x5da);
        local_60 = 0;
        local_58 = 1;
        local_54 = 0xffffffffffffffff;
        plVar10 = *(longlong **)(*plVar7 + lVar9);
        local_68 = pcVar4;
        if (plVar10 != (longlong *)0x0) {
          (**(code **)(*plVar10 + 0x18))(plVar10,&local_68);
        }
      }
    }
  }
  iVar12 = *(int *)(param_1 + 0x2c);
  if ((longlong)iVar12 < 0) {
LAB_1408b93e7:
    if (iVar12 == -1) goto LAB_1408b941c;
  }
  else if (iVar12 < *(int *)(param_1 + 0x58)) {
    lVar9 = *plVar7;
    lVar13 = (longlong)iVar12 * 0x10;
    if (*(int *)(lVar9 + 8 + lVar13) != -1) {
      lVar9 = *(longlong *)(lVar9 + lVar13);
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14cacc2f8) && (FUN_144b3d300(&DAT_14cacc2f8), DAT_14cacc2f8 == -1))
      {
        DAT_14cacc2f4 = -1;
        _Init_thread_footer(&DAT_14cacc2f8);
      }
      if (DAT_14cacc2f4 == -1) {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14cacc308) && (FUN_144b3d300(), DAT_14cacc308 == -1)) {
          local_68 = "StateEntryFunction";
          local_60 = CONCAT35(local_60._5_3_,0x12);
          uVar18 = FUN_14001a6c0(&local_68,1);
          DAT_14cacc300 = (ulonglong)uVar18;
          _Init_thread_footer();
        }
        if (DAT_14cacbf50 == 0) {
          uVar6 = FUN_140002dac();
          DAT_14cacbf50 = FUN_140002ddd(FUN_1463a5c91,uVar6,L"AnimNode_StateResult");
        }
        plVar7 = *(longlong **)(lVar9 + 8);
        if (plVar7 == (longlong *)0x0) {
          DAT_14cacc2f4 = -1;
        }
        else {
          if (*plVar7 == 0) {
            plVar7 = (longlong *)0x0;
          }
          else {
            plVar7 = (longlong *)plVar7[1];
          }
          DAT_14cacc2f4 = (**(code **)(*plVar7 + 0x130))(plVar7,DAT_14cacbf50,DAT_14cacc300);
        }
      }
      plVar7 = *(longlong **)(lVar9 + 8);
      lVar13 = *plVar7;
      uVar18 = *(uint *)(plVar7[2] + (longlong)DAT_14cacc2f4 * 4);
      uVar11 = uVar18 & 0x7fffffff;
      if ((int)uVar18 < 0) {
        if (lVar13 == 0) {
          plVar10 = (longlong *)0x0;
        }
        else {
          plVar10 = (longlong *)plVar7[1];
        }
        lVar17 = plVar7[4];
        if (*(code **)(*plVar10 + 0x20) == (code *)&LAB_14488c8ee) {
          plVar10 = plVar10 + 0x12;
        }
        else {
          plVar10 = (longlong *)(**(code **)(*plVar10 + 0x20))(plVar10);
          lVar13 = *plVar7;
        }
        if (lVar13 == 0) {
          plVar7 = (longlong *)0x0;
        }
        else {
          plVar7 = (longlong *)plVar7[1];
        }
        uVar6 = (**(code **)(*plVar7 + 0x108))
                          (plVar7,uVar11,
                           lVar9 - *(int *)(*(longlong *)(*plVar10 + (longlong)(int)lVar17 * 8) +
                                           0x44));
      }
      else {
        if (lVar13 == 0) {
          plVar7 = (longlong *)0x0;
        }
        else {
          plVar7 = (longlong *)plVar7[1];
        }
        uVar6 = (**(code **)(*plVar7 + 0x100))(plVar7,uVar11);
      }
      FUN_140fbdcea(uVar6,param_2,param_1);
      iVar12 = *(int *)(param_1 + 0x2c);
      goto LAB_1408b93e7;
    }
  }
  if (iVar12 < *(int *)(param_1 + 0x78)) {
    if ((*(int *)(*(longlong *)(param_1 + 0x70) + 8 + (longlong)iVar12 * 0x10) != 0) &&
       (plVar7 = *(longlong **)(*(longlong *)(param_1 + 0x70) + (longlong)iVar12 * 0x10),
       plVar7 != (longlong *)0x0)) {
      (**(code **)(*plVar7 + 0x60))(plVar7,param_1,uVar5);
    }
  }
LAB_1408b941c:
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1408b975a FUN_1408b975a body=146 status=ok
// SIG undefined FUN_1408b975a(void)

int FUN_1408b975a(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  ulonglong uVar5;
  
  lVar2 = param_1[1];
  if ((longlong)(int)lVar2 != 0) {
    lVar1 = *param_1;
    uVar5 = 0;
    do {
      cVar3 = FUN_1407b174e(lVar1 + uVar5,param_2);
      if (cVar3 != '\0') {
        iVar4 = (int)(uVar5 >> 4) * -0x33333333;
        if (iVar4 != -1) {
          return iVar4;
        }
        break;
      }
      uVar5 = uVar5 + 0x50;
    } while ((longlong)(int)lVar2 * 0x50 != uVar5);
  }
  iVar4 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar4 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar4 + 1U) {
    FUN_145745354(param_1,iVar4);
  }
  FUN_1408b97ec((longlong)iVar4 * 0x50 + *param_1,param_2);
  return iVar4;
}



// FUNCTION 1408b97ec FUN_1408b97ec body=252 status=ok
// SIG undefined FUN_1408b97ec(void)

undefined4 * FUN_1408b97ec(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  void *_Src;
  byte bVar4;
  
  *param_1 = *param_2;
  lVar2 = *(longlong *)(param_2 + 2);
  *(longlong *)(param_1 + 2) = lVar2;
  if ((lVar2 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  bVar4 = DAT_14c950c29;
  *(undefined2 *)(param_1 + 4) = *(undefined2 *)(param_2 + 4);
  lVar2 = *(longlong *)(param_2 + 6);
  *(longlong *)(param_1 + 6) = lVar2;
  if ((lVar2 != 0 & bVar4) == 1) {
    FUN_1456cec3c();
  }
  plVar3 = *(longlong **)(param_2 + 8);
  *(longlong **)(param_1 + 8) = plVar3;
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  param_1[10] = param_2[10];
  *(undefined8 *)(param_1 + 0xc) = 0;
  iVar1 = param_2[0xe];
  _Src = *(void **)(param_2 + 0xc);
  param_1[0xe] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[0xf] = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0xc,iVar1,0);
    memcpy(*(void **)(param_1 + 0xc),_Src,(longlong)iVar1 * 2);
  }
  param_1[0x10] = param_2[0x10];
  lVar2 = *(longlong *)(param_2 + 0x12);
  *(longlong *)(param_1 + 0x12) = lVar2;
  if ((lVar2 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  return param_1;
}



// FUNCTION 1408b98e8 FUN_1408b98e8 body=321 status=ok
// SIG undefined FUN_1408b98e8(void)

undefined8 FUN_1408b98e8(longlong param_1)

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
  lVar1 = *(longlong *)(param_1 + 0xa8);
  if (lVar1 != 0) {
    if (DAT_14cb46ec8 == 0) {
      local_40 = &local_20;
      local_20 = FUN_141030f22;
      local_30 = FUN_14081d0ea;
      local_38 = FUN_142b4754c;
      local_48 = &LAB_1483e40eb;
      local_50 = &LAB_146486986;
      local_58 = L"Engine";
      local_60 = 0;
      local_68 = 0x10000005;
      local_70 = 8;
      local_78 = 0x420;
      FUN_14081cfa3(L"/Script/Water",L"WaterBody",&DAT_14cb46ec8,FUN_146486964);
    }
    if (((*(int *)(DAT_14cb46ec8 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
          (longlong)*(int *)(DAT_14cb46ec8 + 0x38) * 8) == DAT_14cb46ec8 + 0x30)) &&
       (*(longlong *)(lVar1 + 0x398) != 0)) {
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



// FUNCTION 1408b9a3e FUN_1408b9a3e body=489 status=ok
// SIG undefined FUN_1408b9a3e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1408b9a3e(longlong param_1,double *param_2)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined1 auStack_b8 [44];
  undefined1 local_8c [4];
  double local_88;
  double dStack_80;
  double local_78;
  undefined1 local_64 [4];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  dVar2 = *param_2 - *(double *)(param_1 + 0x260);
  dVar3 = param_2[1] - *(double *)(param_1 + 0x268);
  dVar7 = param_2[2] - *(double *)(param_1 + 0x270);
  auVar1 = *(undefined1 (*) [16])(param_1 + 0x280);
  dVar4 = -*(double *)(param_1 + 0x240);
  dVar5 = -*(double *)(param_1 + 0x248);
  dVar9 = *(double *)(param_1 + 0x250) * -1.0;
  dVar10 = *(double *)(param_1 + 600) * 1.0;
  dVar12 = dVar2 * dVar9 - dVar4 * dVar7;
  dVar11 = dVar3 * dVar4 - dVar2 * dVar5;
  dVar6 = dVar7 * dVar5 - dVar3 * dVar9;
  dVar6 = dVar6 + dVar6;
  dVar12 = dVar12 + dVar12;
  dVar11 = dVar11 + dVar11;
  auVar8 = divpd(_DAT_149934d80,auVar1);
  local_88 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._0_8_)) & auVar8._0_8_) *
             ((dVar11 * dVar5 - dVar12 * dVar9) + dVar10 * dVar6 + dVar2);
  dStack_80 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar1._8_8_)) & auVar8._8_8_) *
              (*(double *)(param_1 + 0x240) * dVar11 + dVar9 * dVar6 + dVar10 * dVar12 + dVar3);
  local_78 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(*(double *)(param_1 + 0x290))) &
                     (ulonglong)(1.0 / *(double *)(param_1 + 0x290))) *
             (dVar10 * dVar11 + dVar7 + (dVar12 * dVar4 - dVar6 * dVar5));
  FUN_14040e062(param_1 + 0x620,&local_88,local_8c,local_64);
  if ((local_60 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1408b9c28 FUN_1408b9c28 body=957 status=ok
// SIG undefined FUN_1408b9c28(void)

void FUN_1408b9c28(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  uint *puVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  undefined1 auStack_88 [32];
  int local_68;
  uint local_64;
  ulonglong local_60;
  ulonglong local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb44478 == 0) {
    uVar16 = 1;
    uVar15 = 0;
    uVar1 = 0;
    iVar7 = 0;
  }
  else {
    puVar11 = &DAT_14cb44460;
    if (DAT_14cb44470 != (uint *)0x0) {
      puVar11 = DAT_14cb44470;
    }
    uVar1 = *puVar11;
    if (uVar1 == 0) {
      iVar7 = DAT_14cb44478 + 0x1e;
      if (-1 < (int)(DAT_14cb44478 - 1)) {
        iVar7 = DAT_14cb44478 - 1;
      }
      uVar15 = 0;
      uVar16 = (ulonglong)(uint)(iVar7 >> 5);
      if (iVar7 >> 5 < 1) {
        uVar16 = uVar15;
      }
      iVar7 = 0;
      do {
        if (uVar16 == uVar15) goto LAB_1408b9f58;
        iVar7 = iVar7 + 0x20;
        uVar1 = puVar11[uVar15 + 1];
        uVar15 = uVar15 + 1;
      } while (uVar1 == 0);
    }
    else {
      uVar15 = 0;
      iVar7 = 0;
    }
    uVar16 = (ulonglong)(-uVar1 & uVar1);
    uVar4 = uVar16 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar1 = (iVar7 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
    if ((int)DAT_14cb44478 <= (int)uVar1) {
      uVar1 = DAT_14cb44478;
    }
  }
  if (uVar1 != DAT_14cb44478) {
    uVar8 = 0xffffffff;
    local_60 = (ulonglong)DAT_14cb44478;
    do {
      lVar10 = *(longlong *)(DAT_14cb44450 + 8 + (longlong)(int)uVar1 * 0x18);
      do {
        local_50 = 0;
        iVar2 = FUN_1408ba072(lVar10 + 0x1ba0,&local_50);
      } while (iVar2 != 0);
      iVar2 = *(int *)(lVar10 + 0x1bc8);
      local_68 = iVar7;
      local_64 = uVar8;
      local_58 = uVar15;
      if (iVar2 == 0) {
        uVar14 = 1;
        uVar15 = 0;
        iVar7 = 0;
        iVar9 = 0;
      }
      else {
        puVar11 = *(uint **)(lVar10 + 0x1bc0);
        if (*(uint **)(lVar10 + 0x1bc0) == (uint *)0x0) {
          puVar11 = (uint *)(lVar10 + 0x1bb0);
        }
        uVar1 = *puVar11;
        if (uVar1 == 0) {
          iVar7 = iVar2 + 0x1e;
          if (-1 < iVar2 + -1) {
            iVar7 = iVar2 + -1;
          }
          uVar15 = 0;
          uVar4 = (ulonglong)(uint)(iVar7 >> 5);
          if (iVar7 >> 5 < 1) {
            uVar4 = uVar15;
          }
          iVar7 = 0;
          do {
            if (uVar4 == uVar15) goto LAB_1408b9e1f;
            iVar7 = iVar7 + 0x20;
            uVar1 = puVar11[uVar15 + 1];
            uVar15 = uVar15 + 1;
          } while (uVar1 == 0);
        }
        else {
          uVar15 = 0;
          iVar7 = 0;
        }
        uVar14 = (ulonglong)(-uVar1 & uVar1);
        uVar4 = uVar14 * 2 + 1;
        lVar13 = 0x3f;
        if (uVar4 != 0) {
          for (; uVar4 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        iVar9 = (iVar7 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
        if (iVar2 <= iVar9) {
          iVar9 = iVar2;
        }
      }
      if (iVar9 != iVar2) {
        uVar1 = 0xffffffff;
        do {
          FUN_1408b9fe6(*(longlong *)(lVar10 + 0x1ba0) + (longlong)iVar9 * 0xf0 + 8);
          uVar1 = ~(uint)uVar14 & uVar1;
          puVar11 = *(uint **)(lVar10 + 0x1bc0);
          if (*(uint **)(lVar10 + 0x1bc0) == (uint *)0x0) {
            puVar11 = (uint *)(lVar10 + 0x1bb0);
          }
          iVar3 = *(int *)(lVar10 + 0x1bc8);
          iVar9 = (int)uVar15;
          lVar13 = (longlong)iVar9;
          uVar8 = puVar11[lVar13] & uVar1;
          if (uVar8 == 0) {
            iVar5 = iVar3 + 0x1e;
            if (-1 < iVar3 + -1) {
              iVar5 = iVar3 + -1;
            }
            iVar5 = iVar5 >> 5;
            iVar7 = iVar7 + 0x20;
            iVar6 = iVar5;
            if (iVar5 < iVar9) {
              iVar6 = iVar9;
            }
            if (iVar9 < iVar5) {
              lVar12 = 0;
              do {
                uVar8 = puVar11[lVar13 + lVar12 + 1];
                if (uVar8 != 0) {
                  uVar15 = (ulonglong)(iVar9 + (int)lVar12 + 1);
                  uVar1 = 0xffffffff;
                  goto LAB_1408b9de8;
                }
                iVar7 = iVar7 + 0x20;
                lVar12 = lVar12 + 1;
              } while (iVar6 - lVar13 != lVar12);
              uVar1 = 0xffffffff;
              iVar9 = iVar6;
            }
            uVar15 = (ulonglong)(iVar9 + 1);
            iVar9 = iVar3;
          }
          else {
LAB_1408b9de8:
            uVar14 = (ulonglong)(-uVar8 & uVar8);
            uVar4 = uVar14 * 2 + 1;
            lVar13 = 0x3f;
            if (uVar4 != 0) {
              for (; uVar4 >> lVar13 == 0; lVar13 = lVar13 + -1) {
              }
            }
            iVar9 = (iVar7 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
            if (iVar3 <= iVar9) {
              iVar9 = iVar3;
            }
          }
        } while (iVar9 != iVar2);
      }
LAB_1408b9e1f:
      uVar8 = local_64 & ~(uint)uVar16;
      puVar11 = DAT_14cb44470;
      if (DAT_14cb44470 == (uint *)0x0) {
        puVar11 = &DAT_14cb44460;
      }
      iVar2 = (int)local_58;
      lVar10 = (longlong)iVar2;
      uVar1 = puVar11[lVar10] & uVar8;
      uVar15 = local_58;
      iVar7 = local_68;
      if (uVar1 == 0) {
        iVar9 = DAT_14cb44478 + 0x1e;
        if (-1 < (int)(DAT_14cb44478 - 1)) {
          iVar9 = DAT_14cb44478 - 1;
        }
        iVar9 = iVar9 >> 5;
        iVar7 = local_68 + 0x20;
        iVar3 = iVar9;
        if (iVar9 < iVar2) {
          iVar3 = iVar2;
        }
        if (iVar2 < iVar9) {
          lVar13 = 0;
          do {
            uVar1 = puVar11[lVar10 + lVar13 + 1];
            if (uVar1 != 0) {
              uVar8 = 0xffffffff;
              uVar15 = (ulonglong)(iVar2 + (int)lVar13 + 1);
              goto LAB_1408b9ea7;
            }
            iVar7 = iVar7 + 0x20;
            lVar13 = lVar13 + 1;
          } while (iVar3 - lVar10 != lVar13);
          uVar8 = 0xffffffff;
          iVar2 = iVar3;
        }
        uVar15 = (ulonglong)(iVar2 + 1);
        uVar1 = DAT_14cb44478;
      }
      else {
LAB_1408b9ea7:
        uVar16 = (ulonglong)(-uVar1 & uVar1);
        uVar4 = uVar16 * 2 + 1;
        lVar10 = 0x3f;
        if (uVar4 != 0) {
          for (; uVar4 >> lVar10 == 0; lVar10 = lVar10 + -1) {
          }
        }
        uVar1 = (iVar7 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
        if ((int)DAT_14cb44478 <= (int)uVar1) {
          uVar1 = DAT_14cb44478;
        }
      }
    } while (uVar1 != (uint)local_60);
  }
LAB_1408b9f58:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1408b9fe6 FUN_1408b9fe6 body=140 status=ok
// SIG undefined FUN_1408b9fe6(void)

void FUN_1408b9fe6(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  bool bVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar5 = (ulonglong)*(int *)(param_1 + 0x10);
  if (0 < (longlong)uVar5) {
    do {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 8) + -8 + uVar5 * 8);
      if (lVar2 == 0) {
LAB_1408ba05f:
        FUN_140389238(param_1);
      }
      else {
        if ((*(uint *)(lVar2 + 8) >> 0x1e & 1) != 0) {
LAB_1408ba04f:
          *(undefined4 *)(lVar2 + 0x828) = 0xffffffff;
          goto LAB_1408ba05f;
        }
        uVar1 = *(uint *)(lVar2 + 0xc);
        if ((int)uVar1 < DAT_14c9647dc) {
          lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
        }
        else {
          lVar4 = 0;
        }
        if ((*(uint *)(lVar4 + 8) >> 0x1c & 1) != 0) goto LAB_1408ba04f;
      }
      bVar3 = 1 < uVar5;
      uVar5 = uVar5 - 1;
    } while (bVar3);
  }
  return;
}



// FUNCTION 1408ba072 FUN_1408ba072 body=331 status=ok
// SIG undefined FUN_1408ba072(void)

undefined8 FUN_1408ba072(longlong *param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  byte bVar2;
  uint uVar3;
  longlong *plVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong *puVar7;
  ulonglong *puVar8;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar6 = *param_2;
    if ((uVar6 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(uVar6);
    }
    uVar3 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
    uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    uVar6 = (longlong)(int)(uVar3 >> 0x10 ^ uVar3) & (longlong)(int)param_1[9] - 1U;
    iVar5 = *(int *)((longlong)plVar4 + uVar6 * 4);
    if (iVar5 != -1) {
      puVar7 = (ulonglong *)((longlong)plVar4 + uVar6 * 4);
      bVar2 = DAT_14c950c29;
      do {
        puVar8 = (ulonglong *)((longlong)iVar5 * 0xf0 + *param_1);
        uVar6 = *param_2;
        if ((uVar6 != 0 & bVar2) == 1) {
          FUN_1456cec3c(uVar6);
          bVar2 = DAT_14c950c29;
        }
        uVar1 = *puVar8;
        if (((bVar2 & 1) != 0) && (uVar1 != 0)) {
          FUN_1456cec3c(uVar1);
          bVar2 = DAT_14c950c29;
        }
        if ((uVar6 != 0 & bVar2) == 1) {
          FUN_1456cec3c(uVar6);
          bVar2 = DAT_14c950c29;
        }
        if (uVar1 == uVar6) {
          FUN_140dc4dae(param_1,(int)*puVar7);
          return 1;
        }
        iVar5 = (int)puVar8[0x1d];
        puVar7 = puVar8 + 0x1d;
      } while (iVar5 != -1);
    }
  }
  return 0;
}



// FUNCTION 1408ba1c4 FUN_1408ba1c4 body=57 status=ok
// SIG undefined FUN_1408ba1c4(void)

void FUN_1408ba1c4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb227b0 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb227b0 = FUN_140002ddd(FUN_146439766,uVar1,L"GpsFlow");
  }
  return;
}



// FUNCTION 1408ba1fe FUN_1408ba1fe body=625 status=ok
// SIG undefined FUN_1408ba1fe(void)

void FUN_1408ba1fe(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  undefined1 auStack_318 [32];
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  longlong local_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  longlong *plStack_190;
  undefined4 local_188;
  undefined8 local_180;
  undefined4 local_178;
  undefined1 local_170 [4];
  undefined4 local_16c;
  undefined4 local_cc;
  undefined4 local_a0;
  undefined4 local_70;
  undefined4 local_68;
  undefined4 local_64;
  char local_48;
  undefined1 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_318;
  if ((&DAT_00001100)[param_1] != '\x02') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_318);
  }
  plVar3 = *(longlong **)(param_1 + 0x1f0);
  if (plVar3 != (longlong *)0x0) {
    *(byte *)(param_1 + 0x5b4) = *(byte *)(param_1 + 0x5b4) | 0x20;
    iVar6 = 1;
    if (1 < *(int *)(param_1 + 0x153c)) {
      iVar6 = *(int *)(param_1 + 0x153c);
    }
    *(int *)(param_1 + 0x153c) = iVar6;
    if (*(longlong *)(param_1 + 0x1518) != 0) {
      local_1b8 = DAT_14cb1c870;
      local_1c8 = DAT_14cb1c860;
      uStack_1c0 = DAT_14cb1c868;
      local_1b0 = DAT_14cb1c860;
      uStack_1a8 = DAT_14cb1c868;
      local_1a0 = DAT_14cb1c870;
      local_198 = 0;
      plStack_190 = (longlong *)0x0;
      local_188 = 0xffffffff;
      local_180 = 0;
      local_178 = 0xbf800000;
      memset(local_170,0,0x100);
      local_a0 = 0xffffffff;
      local_16c = 0x3f800000;
      local_cc = 0xffffffff;
      local_70 = 0;
      local_68 = 0x41400000;
      local_48 = '\0';
      local_40 = 0;
      local_1d0 = *(longlong *)(param_1 + 0xb0);
      if (local_1d0 == 0) {
        local_1d0 = FUN_1448abda6(param_1);
      }
      local_64 = 0x7f7fffff;
      lVar4 = plVar3[0x39];
      if (lVar4 == 0) {
        local_2e8 = DAT_14c8464f0;
        local_2f8 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
        uStack_2f0 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
      }
      else {
        local_2f8 = *(undefined8 *)(lVar4 + 0x260);
        uStack_2f0 = *(undefined8 *)(lVar4 + 0x268);
        local_2e8 = *(undefined8 *)(lVar4 + 0x270);
      }
      FUN_144a41e86(&local_1c8,&local_2f8);
      (**(code **)(*plVar3 + 0x528))(plVar3,&local_180,(longlong)&local_180 + 4);
      cVar5 = FUN_1408baa42(*(undefined8 *)(param_1 + 0x1518));
      if (cVar5 != '\0') {
        FUN_144948f94(&local_1c8,
                      (float)((double)local_180._4_4_ +
                             *(double *)(*(longlong *)(param_1 + 0x1518) + 0x278)));
      }
      FUN_14038dd94(&local_2f8,&local_1d0);
      FUN_1408ba9a6(param_1,&local_2f8);
      plVar3 = plStack_190;
      if (local_48 == '\x01') {
        local_48 = '\0';
      }
      if (plStack_190 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_190 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plStack_190)(plStack_190);
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
  if ((local_38 ^ (ulonglong)auStack_318) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1408ba560 FUN_1408ba560 body=1031 status=ok
// SIG undefined FUN_1408ba560(void)

void FUN_1408ba560(longlong *param_1,undefined8 param_2,uint *param_3,byte param_4,
                  undefined8 param_5)

{
  longlong *plVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  byte bVar6;
  longlong lVar7;
  bool bVar8;
  float fVar9;
  float fVar10;
  double dVar11;
  float fVar12;
  float fVar13;
  undefined1 auStack_1d8 [32];
  uint *local_1b8;
  float local_1b0;
  undefined8 local_1a8;
  longlong local_198;
  uint local_190;
  undefined8 local_18c;
  undefined1 local_180 [4];
  undefined4 local_17c;
  undefined4 local_dc;
  undefined4 local_b0;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  cVar2 = (**(code **)(*param_1 + 0x600))();
  if (((cVar2 == '\0') || (uVar3 = (**(code **)(*(longlong *)param_1[0x22] + 0x570))(), 5 < uVar3))
     || ((0x2aU >> (uVar3 & 0x1f) & 1) == 0)) {
    *(byte *)param_3 = (byte)*param_3 & 0xf8;
    param_3[1] = 0;
    param_3[2] = 0;
    memset(param_3 + 4,0,0x100);
    param_3[0x38] = 0xffffffff;
    param_3[0x2d] = 0xffffffff;
    param_3[5] = 0x3f800000;
  }
  else {
    cVar2 = (**(code **)(param_1[0x2f] + 0xe0))(param_1 + 0x2f);
    if (cVar2 == '\0') {
      fVar13 = -2.4;
    }
    else {
      fVar13 = 2.4001;
    }
    fVar9 = *(float *)((longlong)param_1 + 0x1fc) + fVar13;
    fVar12 = 2.4;
    if (2.4 <= fVar9) {
      fVar12 = fVar9;
    }
    if (0.0 < fVar12) {
      bVar6 = *(byte *)((longlong)param_1 + 0x349);
      if ((((bVar6 & 0x10) == 0 & (*(byte *)((longlong)param_1 + 0x5b6) & 2) == 0 & param_4) == 1)
         && ((*(byte *)((longlong)param_1 + 0x5b4) & 0x20) == 0)) {
        plVar1 = *(longlong **)(param_1[0x3e] + 0x450);
        if (plVar1 == (longlong *)0x0) {
          lVar7 = 0;
        }
        else {
          lVar7 = plVar1[0x15];
        }
        uVar4 = (**(code **)(*(longlong *)param_1[0x22] + 0x580))();
        if (plVar1 != (longlong *)0x0) {
          local_198 = lVar7;
          uVar3 = (**(code **)(*plVar1 + 0x570))(plVar1);
          bVar6 = 0x10;
          if (((uVar3 < 6) && ((0x2aU >> (uVar3 & 0x1f) & 1) != 0)) &&
             (iVar5 = (**(code **)(*plVar1 + 0x578))(plVar1,uVar4), iVar5 == 2)) {
            bVar6 = (*(char *)((longlong)plVar1 + 0x1fb) == '\x02') << 4;
          }
          *(byte *)((longlong)param_1 + 0x349) = *(byte *)((longlong)param_1 + 0x349) & 0xef | bVar6
          ;
          lVar7 = local_198;
        }
        if (lVar7 == 0) {
          bVar8 = true;
        }
        else {
          bVar8 = (*(uint *)(lVar7 + 8) >> 0x1e & 1) == 0;
        }
        bVar6 = *(byte *)((longlong)param_1 + 0x349);
        if (((plVar1 != (longlong *)0x0) && (bVar8)) && ((bVar6 & 0x10) == 0)) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_80 ^ (ulonglong)auStack_1d8);
        }
      }
      *(byte *)((longlong)param_1 + 0x349) = bVar6 & 0xef;
      lVar7 = *(longlong *)(param_1[0x3e] + 0x438);
      dVar11 = *(double *)(lVar7 + 0x280);
      if (*(double *)(lVar7 + 0x288) <= *(double *)(lVar7 + 0x280)) {
        dVar11 = *(double *)(lVar7 + 0x288);
      }
      local_1b0 = (float)dVar11 * *(float *)(lVar7 + 0x644);
      local_1a8 = param_5;
      local_1b8 = param_3;
      (**(code **)(*param_1 + 0x910))(param_1,param_2,fVar12,fVar12);
    }
    if ((*param_3 & 5) == 1) {
      cVar2 = (**(code **)(*param_1 + 0x938))(param_1,param_3 + 4,1);
      if (cVar2 != '\0') {
        fVar13 = fVar13 + *(float *)((longlong)param_1 + 0x1fc);
        fVar12 = 2.4;
        if (2.4 <= fVar13) {
          fVar12 = fVar13;
        }
        cVar2 = (**(code **)(param_1[0x2f] + 0xe0))(param_1 + 0x2f);
        if (cVar2 != '\0') {
          fVar13 = 0.0;
          if (0.0 <= *(float *)((longlong)param_1 + 0x32c)) {
            fVar13 = *(float *)((longlong)param_1 + 0x32c);
          }
          fVar12 = fVar12 + fVar13;
        }
        local_190 = 0;
        local_18c = 0;
        memset(local_180,0,0x100);
        local_b0 = 0xffffffff;
        local_dc = 0xffffffff;
        local_17c = 0x3f800000;
        if (param_1[0x3e] == 0) {
          fVar13 = 0.0;
        }
        else {
          lVar7 = *(longlong *)(param_1[0x3e] + 0x438);
          dVar11 = *(double *)(lVar7 + 0x280);
          if (*(double *)(lVar7 + 0x288) <= *(double *)(lVar7 + 0x280)) {
            dVar11 = *(double *)(lVar7 + 0x288);
          }
          fVar10 = (float)dVar11 * *(float *)(lVar7 + 0x644);
          fVar9 = 0.0;
          if (0.0 <= *(float *)(param_1 + 0x65)) {
            fVar9 = *(float *)(param_1 + 0x65);
          }
          fVar13 = fVar10 - fVar9;
          if (fVar10 <= fVar10 - fVar9) {
            fVar13 = fVar10;
          }
          if (fVar13 <= 0.11) {
            fVar13 = 0.11;
          }
        }
        local_1b8 = &local_190;
        cVar2 = (**(code **)(*param_1 + 0x940))(param_1,fVar13,param_3 + 4,fVar12);
        if (cVar2 == '\0') {
          *(byte *)param_3 = (byte)*param_3 & 0xfd;
        }
        else {
          fVar13 = (float)param_3[1];
          if (fVar12 <= (2.15 - fVar13) + (float)local_18c) {
            param_3[1] = 0x4009999a;
            fVar13 = 2.15;
          }
          if ((*param_3 & 2) == 0) {
            fVar12 = fVar13;
            if (fVar13 <= 1.9) {
              fVar12 = 1.9;
            }
            local_1b8 = (uint *)CONCAT71(local_1b8._1_7_,1);
            FUN_1407b691e(param_3,local_180,fVar13,fVar12);
          }
        }
      }
    }
  }
  if ((local_80 ^ (ulonglong)auStack_1d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1408ba9a6 FUN_1408ba9a6 body=156 status=ok
// SIG undefined FUN_1408ba9a6(void)

void FUN_1408ba9a6(longlong param_1,void *param_2)

{
  uint uVar1;
  uint uVar2;
  
  if ((*(longlong *)(param_1 + 0x14e8) != 0) && ((&DAT_00001100)[param_1] == '\x02')) {
    memcpy((void *)(param_1 + 0x4a8),param_2,0x100);
    uVar1 = *(uint *)(param_1 + 0x498);
    uVar2 = (uint)((*(byte *)((longlong)param_2 + 0xad) & 3) == 1);
    *(uint *)(param_1 + 0x498) = uVar1 & 0xfffffffe | uVar2;
    uVar1 = (uVar1 & 0xfffffffc | uVar2) +
            (uint)((*(byte *)((longlong)param_2 + 0xad) & 3) == 1) * 2;
    *(uint *)(param_1 + 0x498) = uVar1;
    *(undefined4 *)(param_1 + 0x49c) = *(undefined4 *)((longlong)param_2 + 0x100);
    *(uint *)(param_1 + 0x498) = uVar1 & 0xfffffffb;
    *(undefined4 *)(param_1 + 0x4a0) = 0;
  }
  return;
}



// FUNCTION 1408baa42 FUN_1408baa42 body=547 status=ok
// SIG undefined FUN_1408baa42(void)

bool FUN_1408baa42(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  int iVar7;
  bool bVar8;
  double dVar9;
  float fVar10;
  double dVar11;
  double dVar12;
  
  iVar7 = *(int *)(param_1 + 600);
  iVar4 = *(int *)(param_1 + 0x25c);
  iVar5 = *(int *)(param_1 + 0x260);
  dVar11 = *(double *)(param_1 + 0x268);
  dVar9 = *(double *)(param_1 + 0x270);
  dVar12 = *(double *)(param_1 + 0x278);
  plVar6 = *(longlong **)(param_1 + 0x2a0);
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
  }
  if (iVar5 - 1U < 2) {
    bVar8 = false;
    if ((iVar7 == -1) || (iVar4 == -1)) goto LAB_1408babc0;
LAB_1408baab9:
    bVar8 = false;
    if ((dVar11 <= -DAT_14cb1c738) || (bVar8 = false, DAT_14cb1c738 <= dVar11)) goto LAB_1408babc0;
    bVar8 = false;
    if ((dVar9 <= -DAT_14cb1c740) || (DAT_14cb1c740 <= dVar9)) goto LAB_1408babc0;
    bVar8 = false;
    if ((dVar12 <= -DAT_14cb1c748) || (DAT_14cb1c748 <= dVar12)) goto LAB_1408babc0;
    iVar7 = _finite(dVar11);
    if (iVar7 != 0) {
      iVar7 = _finite(dVar9);
      if (iVar7 != 0) {
        iVar7 = _finite(dVar12);
        if (iVar7 != 0) {
          if (*(int *)(param_1 + 0x250) - 0x15U < 10) {
            fVar3 = *(float *)(param_1 + 0x5d4);
            fVar10 = *(float *)(param_1 + 0x5d0);
            if (*(float *)(param_1 + 0x5d0) <= fVar3) {
              fVar10 = fVar3;
            }
            dVar11 = *(double *)(param_1 + 0x588) - dVar11;
            dVar9 = *(double *)(param_1 + 0x590) - dVar9;
            dVar12 = (*(double *)(param_1 + 0x598) - (double)fVar3) - dVar12;
            dVar11 = dVar12 * dVar12 + dVar9 * dVar9 + dVar11 * dVar11;
          }
          else {
            fVar10 = *(float *)(param_1 + 0x5d0);
            dVar11 = *(double *)(param_1 + 0x588) - dVar11;
            dVar9 = *(double *)(param_1 + 0x590) - dVar9;
            dVar11 = dVar9 * dVar9 + dVar11 * dVar11;
          }
          bVar8 = (float)SQRT(dVar11) < fVar10;
          goto LAB_1408babc0;
        }
      }
    }
  }
  else if (iVar5 == 3) goto LAB_1408baab9;
  bVar8 = false;
LAB_1408babc0:
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
  return bVar8;
}



// FUNCTION 1408bac65 FUN_1408bac65 body=411 status=ok
// SIG undefined FUN_1408bac65(void)

void FUN_1408bac65(longlong *param_1)

{
  undefined2 uVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [40];
  longlong local_50;
  longlong local_48;
  longlong local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  puVar2 = (undefined8 *)*param_1;
  FUN_140553f2a(puVar2,param_1);
  *puVar2 = &PTR_FUN_14a4da7f0;
  puVar2[8] = &PTR_FUN_14a4daad0;
  puVar2[9] = 0;
  puVar2[10] = 0xffffffffffffffff;
  *(undefined1 *)((longlong)puVar2 + 0x32) = 8;
  uVar3 = FUN_1408bae02();
  *(uint *)(puVar2 + 7) = uVar3 | 0x10;
  *puVar2 = &PTR_FUN_14a4ced50;
  puVar2[8] = &PTR_FUN_14a4cf030;
  uVar3 = FUN_1408bae02();
  *(uint *)(puVar2 + 7) = *(uint *)(puVar2 + 7) & ~uVar3;
  lVar4 = FUN_14009d2a0();
  lVar5 = FUN_14038fb82();
  *(undefined2 *)(puVar2 + 6) = *(undefined2 *)(lVar5 + 0x84);
  *(undefined4 *)(puVar2 + 10) = *(undefined4 *)(lVar5 + 0x8c);
  if ((*(uint *)(puVar2 + 1) & 0x10) != 0) {
    local_38 = puVar2[2];
    if ((local_38 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
    local_40 = FUN_14099c56c();
    if ((local_40 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(local_40);
    }
    FUN_140909372(&local_40,&local_38);
    uVar1 = *(undefined2 *)(lVar5 + 0x84);
    local_48 = puVar2[2];
    if ((local_48 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
    FUN_14118c742(&local_48,uVar1);
    lVar5 = 0;
    do {
      uVar1 = *(undefined2 *)(lVar4 + 0xbc + lVar5 * 2);
      local_50 = puVar2[2];
      if ((local_50 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c();
      }
      FUN_14118c742(&local_50,uVar1);
      lVar5 = lVar5 + 1;
    } while (lVar5 != 9);
  }
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1408bae02 FUN_1408bae02 body=94 status=ok
// SIG undefined FUN_1408bae02(void)

undefined4 FUN_1408bae02(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cab49a4) {
    FUN_144b3d300(&DAT_14cab49a4);
    if (DAT_14cab49a4 == -1) {
      DAT_14cab49a0 = FUN_145cb8322();
      _Init_thread_footer(&DAT_14cab49a4);
    }
  }
  return DAT_14cab49a0;
}



// FUNCTION 1408bae60 FUN_1408bae60 body=88 status=ok
// SIG undefined FUN_1408bae60(void)

void FUN_1408bae60(longlong param_1)

{
  longlong lVar1;
  
  FUN_1408baeb8();
  *(byte *)(param_1 + 0x9c) = *(byte *)(param_1 + 0x9c) & 0xfe;
  *(undefined4 *)(param_1 + 0x98) = 0;
  if (((*(byte *)(param_1 + 0xb8) & 6) != 0) &&
     ((lVar1 = *(longlong *)(param_1 + 0xb0), lVar1 != 0 ||
      (lVar1 = FUN_1448abda6(param_1), lVar1 != 0)))) {
    FUN_1401b4182(lVar1,param_1);
    return;
  }
  return;
}



// FUNCTION 1408baeb8 FUN_1408baeb8 body=317 status=ok
// SIG undefined FUN_1408baeb8(void)

void FUN_1408baeb8(longlong param_1)

{
  PSRWLOCK SRWLock;
  longlong *plVar1;
  longlong lVar2;
  
  if ((((*(longlong *)(param_1 + 0x1d8) != 0) &&
       (lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x1d8) + 0x550), lVar2 != 0)) ||
      (((lVar2 = *(longlong *)(param_1 + 0xb0), lVar2 != 0 ||
        (lVar2 = FUN_1448abda6(param_1), lVar2 != 0)) &&
       ((*(longlong *)(lVar2 + 0x260) != 0 &&
        (lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0x260) + 0x38), lVar2 != 0)))))) &&
     (lVar2 = *(longlong *)(lVar2 + 0x9d0), lVar2 != 0)) {
    SRWLock = (PSRWLOCK)(lVar2 + 0x20);
    AcquireSRWLockShared(SRWLock);
    (**(code **)(*(longlong *)**(undefined8 **)(lVar2 + 8) + 0x10))
              ((longlong *)**(undefined8 **)(lVar2 + 8),param_1);
    ReleaseSRWLockShared(SRWLock);
    AcquireSRWLockShared(SRWLock);
    plVar1 = *(longlong **)(*(longlong *)(lVar2 + 8) + 8);
    (**(code **)(*plVar1 + 0x10))(plVar1,param_1);
    ReleaseSRWLockShared(SRWLock);
    AcquireSRWLockShared(SRWLock);
    plVar1 = *(longlong **)(*(longlong *)(lVar2 + 8) + 0x18);
    (**(code **)(*plVar1 + 0x10))(plVar1,param_1);
    ReleaseSRWLockShared(SRWLock);
    AcquireSRWLockShared(SRWLock);
    plVar1 = *(longlong **)(*(longlong *)(lVar2 + 8) + 0x20);
    (**(code **)(*plVar1 + 0x10))(plVar1,param_1);
    ReleaseSRWLockShared(SRWLock);
    AcquireSRWLockShared(SRWLock);
    plVar1 = *(longlong **)(*(longlong *)(lVar2 + 8) + 0x28);
    (**(code **)(*plVar1 + 0x10))(plVar1,param_1);
                    /* WARNING: Could not recover jumptable at 0x0001408bafc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockShared(SRWLock);
    return;
  }
  return;
}



// FUNCTION 1408baffc FUN_1408baffc body=57 status=ok
// SIG undefined FUN_1408baffc(void)

void FUN_1408baffc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb21418 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb21418 = FUN_140002ddd(FUN_146432d32,uVar1,L"GbxBrainAspect_HasNavLoS");
  }
  return;
}



// FUNCTION 1408bb035 FUN_1408bb035 body=272 status=ok
// SIG undefined FUN_1408bb035(void)

undefined8
FUN_1408bb035(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  char cVar1;
  undefined8 uVar2;
  
  if ((param_1 == 0) || (*(longlong *)(param_1 + 0x260) == 0)) {
    return 0;
  }
  if ((*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x260) + 0x38) + 0x1e9) == '\x01') &&
     ((cVar1 = FUN_144a61b4f(), cVar1 != '\0' ||
      (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0xc60) == 0x40000002)))) {
    uVar2 = FUN_14344c398(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                          param_10);
    return uVar2;
  }
  uVar2 = FUN_1408bb145(param_1,param_2,param_3,param_4);
  return uVar2;
}



// FUNCTION 1408bb145 FUN_1408bb145 body=1177 status=ok
// SIG undefined FUN_1408bb145(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_1408bb145(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 param_5,uint param_6,longlong param_7,longlong param_8,
                       uint *param_9)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  uint *puVar6;
  undefined1 uVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  int *piVar10;
  int *piVar11;
  byte bVar12;
  longlong lVar13;
  int *piVar14;
  uint uVar15;
  int iVar16;
  longlong *plVar17;
  undefined1 auStack_1dc8 [32];
  longlong local_1da8;
  undefined8 local_1da0;
  uint local_1d98;
  longlong local_1d90;
  longlong local_1d88;
  uint *local_1d80;
  undefined1 local_1d78;
  undefined ***local_1d68;
  undefined ***local_1d60;
  undefined8 local_1d58;
  undefined4 *local_1d50;
  longlong local_1d48;
  undefined8 local_1d40;
  longlong local_1d38;
  ushort *local_1d30;
  undefined8 *local_1d28;
  undefined1 *local_1d20;
  byte *local_1d18;
  undefined8 local_1d10;
  longlong local_1d08;
  uint *local_1d00;
  undefined1 *local_1cf8;
  undefined ****local_1cf0;
  undefined1 local_1ce3;
  ushort local_1ce2;
  undefined **local_1ce0;
  undefined1 local_1cd8;
  longlong local_1cd0;
  longlong local_1cc8;
  undefined1 local_1cc0;
  undefined1 local_1cbf;
  undefined1 local_1cbe;
  byte local_1cbd;
  undefined2 local_1cbc;
  undefined8 local_1cb8;
  uint local_1cb0;
  uint local_1cac;
  byte local_1ca1;
  undefined **local_1ca0 [3];
  undefined4 local_1c88;
  undefined8 local_1c80;
  undefined8 uStack_1c78;
  undefined8 local_1c70;
  undefined4 local_1c68;
  undefined4 local_1c60;
  undefined2 local_1c5c;
  longlong local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  lVar5 = param_8;
  lVar4 = param_7;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1dc8;
  if ((param_1 == 0) || (*(longlong *)(param_1 + 0x260) == 0)) {
    uVar9 = 0;
  }
  else {
    local_1ca1 = 0;
    bVar12 = *(byte *)(param_2 + 0x1c) & 0x1f;
    lVar13 = param_2;
    if (bVar12 == 4 && param_2 != 0) {
      do {
        lVar13 = *(longlong *)(lVar13 + 0x20);
        bVar12 = *(byte *)(lVar13 + 0x1c) & 0x1f;
      } while (lVar13 != 0 && bVar12 == 4);
    }
    uVar9 = 0;
    if ((bVar12 < 9) && (uVar15 = 0x10b, (0x10bU >> (uint)bVar12 & 1) != 0)) {
      if (*param_9 == 0) {
        lVar13 = 0;
        local_1cb0 = 0;
        uVar15 = 0;
        do {
          if (*(char *)(param_8 + lVar13) == '\x02') {
            uVar15 = uVar15 | 1 << ((uint)lVar13 & 0x1f);
          }
          else if (*(char *)(param_8 + lVar13) == '\x01') {
            local_1cb0 = local_1cb0 | 1 << ((uint)lVar13 & 0x1f);
          }
          lVar13 = lVar13 + 1;
        } while (lVar13 != 0x20);
        local_1cb8 = CONCAT44(uVar15,1);
        local_1cac = (uint)*(byte *)(param_7 + 0x10) + (param_6 & 0xff) * 0x200000 + 1 |
                     *(int *)(param_7 + 0x20) << 0x1a;
      }
      else {
        local_1cb0 = 0;
        local_1cb8 = (ulonglong)*param_9 << 0x20;
        local_1cac = (uint)*(byte *)(param_7 + 0x10) + param_9[1] * 0x4000000 + 0x200001;
      }
      local_1ce0 = &PTR_FUN_14a83af80;
      if (*(char *)(param_7 + 0x29) == '\0') {
        *(undefined1 *)(param_7 + 0x29) = 1;
        if (1 < *(int *)(param_7 + 0x58)) {
          piVar1 = (int *)(param_7 + 0x30);
          piVar11 = *(int **)(param_7 + 0x50);
          if (*(int **)(param_7 + 0x50) == (int *)0x0) {
            piVar11 = piVar1;
          }
          FUN_1449e0cb6(piVar11,*(int *)(param_7 + 0x58),uVar15,local_1ca0);
          piVar11 = *(int **)(lVar4 + 0x50);
          piVar10 = piVar11;
          if (piVar11 == (int *)0x0) {
            piVar10 = piVar1;
          }
          iVar2 = *(int *)(lVar4 + 0x58);
          if ((longlong)iVar2 != 1) {
            lVar13 = 4;
            piVar14 = piVar10;
            iVar16 = *piVar10;
            do {
              iVar3 = *(int *)((longlong)piVar10 + lVar13);
              if (iVar16 != iVar3) {
                piVar14[1] = iVar3;
                piVar14 = piVar14 + 1;
              }
              lVar13 = lVar13 + 4;
              iVar16 = iVar3;
            } while ((longlong)iVar2 * 4 != lVar13);
            piVar11 = *(int **)(lVar4 + 0x50);
            piVar10 = piVar14;
          }
          if (piVar11 == (int *)0x0) {
            piVar11 = piVar1;
          }
          FUN_1479ab1f6(piVar1,(int)((ulonglong)((longlong)piVar10 - (longlong)piVar11) >> 2) + 1,0)
          ;
        }
      }
      local_1cd0 = lVar4 + 0x30;
      local_1cc8 = lVar4 + 0x60;
      plVar17 = (longlong *)0x0;
      local_1cbc = 0;
      local_1cd8 = 0;
      local_1cbf = *(undefined1 *)(lVar4 + 0x15);
      local_1cbe = *(undefined1 *)(lVar4 + 0x14);
      local_1cbd = *(byte *)(lVar4 + 0x11) ^ 1;
      local_1cc0 = 1;
      local_1ce2 = (ushort)*(byte *)(lVar4 + 0x16) << 5 | 4;
      local_1ca0[0] = &PTR_FUN_149f760b8;
      local_1c88 = 0xffffffff;
      local_1c80 = 0;
      uStack_1c78 = 0;
      local_1c70 = 0;
      local_1c68 = 0xffffffff;
      local_1c60 = 0;
      local_1c5c = 0;
      local_58 = 0;
      local_50 = 0x8000000000;
      if (0.0 < *(float *)(lVar4 + 0x24)) {
        plVar17 = *(longlong **)(param_1 + 0x938);
        if (plVar17 == (longlong *)0x0) {
          uVar7 = 0;
        }
        else {
          uVar7 = (**(code **)(*plVar17 + 0x28))(plVar17,*(float *)(lVar4 + 0x24),1);
        }
        local_1cbc = CONCAT11(uVar7,(undefined1)local_1cbc);
      }
      puVar6 = param_9;
      local_1d40 = *(undefined8 *)(param_1 + 0x260);
      local_1d68 = local_1ca0;
      local_1cf0 = &local_1d68;
      local_1d60 = &local_1ce0;
      local_1d50 = &param_6;
      local_1d48 = lVar4;
      local_1d30 = &local_1ce2;
      local_1d28 = &local_1cb8;
      local_1d20 = &local_1ce3;
      local_1d18 = &local_1ca1;
      local_1d10 = param_5;
      local_1d08 = lVar5;
      local_1d00 = param_9;
      local_1cf8 = &LAB_1408712fe;
      local_1d58 = param_4;
      local_1d38 = param_2;
      uVar8 = FUN_1400d1732();
      if ((plVar17 != (longlong *)0x0) && (local_1cbc._1_1_ != '\0')) {
        local_1d80 = puVar6;
        local_1d88 = lVar5;
        local_1d90 = lVar4;
        local_1d98 = param_6;
        local_1d78 = 1;
        local_1da8 = param_2;
        local_1da0 = param_4;
        uVar8 = (**(code **)(*plVar17 + 0x68))(plVar17,*(undefined4 *)(lVar4 + 0x24),param_5,1);
        local_1ca1 = local_1ca1 | (byte)uVar8;
      }
      local_1ca0[0] = &PTR_FUN_149f760b8;
      if (local_58 != 0) {
        uVar8 = FUN_1400020a8();
      }
      uVar9 = CONCAT71((int7)((ulonglong)uVar8 >> 8),local_1ca1);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_1dc8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9 & 0xffffffffffffff01;
}



// FUNCTION 1408bb5e0 FUN_1408bb5e0 body=283 status=ok
// SIG undefined FUN_1408bb5e0(void)

undefined8 FUN_1408bb5e0(longlong *param_1,undefined8 *param_2,longlong param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  if (param_3 != 0) {
    *(undefined8 *)((longlong)param_2 + 0xc) = 0;
    *param_2 = 0;
    *(undefined1 *)(param_2 + 1) = 0;
    param_2[3] = 0;
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[6] = 0;
    uVar3 = DAT_14c8464e8._4_4_;
    uVar2 = (undefined4)DAT_14c8464e8;
    uVar1 = DAT_14c8464e0._4_4_;
    *(undefined4 *)(param_2 + 7) = (undefined4)DAT_14c8464e0;
    *(undefined4 *)((longlong)param_2 + 0x3c) = uVar1;
    *(undefined4 *)(param_2 + 8) = uVar2;
    *(undefined4 *)((longlong)param_2 + 0x44) = uVar3;
    param_2[9] = DAT_14c8464f0;
    param_2[10] = 0x3f800000;
    *(undefined1 *)(param_2 + 0xb) = 0;
    *(undefined8 *)((longlong)param_2 + 0x5c) = 0;
    *(undefined8 *)((longlong)param_2 + 100) = 0;
    *(undefined4 *)((longlong)param_2 + 0x6c) = 0;
    puVar4 = (undefined8 *)FUN_14001cc68(0x60,0x10);
    *puVar4 = 0;
    *(undefined4 *)(puVar4 + 2) = 0;
    puVar4[4] = 0;
    puVar4[6] = 0;
    param_2[0xf] = puVar4;
    param_2[0xe] = puVar4;
    *(undefined4 *)(param_2 + 0x10) = 0;
    param_2[0x15] = 0;
    *(undefined4 *)(param_2 + 0x16) = 0;
    param_2[0x11] = 0;
    param_2[0x12] = 0;
    *(undefined8 *)((longlong)param_2 + 0xb4) = 0xffffffff00000080;
    *(undefined4 *)((longlong)param_2 + 0xbc) = 0;
    param_2[0x19] = 0;
    *(undefined4 *)(param_2 + 0x1a) = 0;
    param_2[0x1b] = 0;
    param_2[0x1c] = 0;
    *(undefined4 *)(param_2 + 0x1d) = 10;
    *(undefined1 *)((longlong)param_2 + 0xec) = 0;
                    /* WARNING: Could not recover jumptable at 0x0001408bb6e7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar5 = (**(code **)(*param_1 + 0x440))(param_1,param_2,param_3);
    return uVar5;
  }
  return 0;
}



// FUNCTION 1408bb6fc FUN_1408bb6fc body=318 status=ok
// SIG undefined FUN_1408bb6fc(void)

ulonglong FUN_1408bb6fc(longlong param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  undefined8 unaff_RDI;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  
  if ((param_3 == 0 || param_2 == 0) || (cVar2 = FUN_141908cfc(param_1), cVar2 == '\0')) {
    uVar7 = 0;
  }
  else {
    iVar5 = 0x20;
    if (*(int *)(param_1 + 0x88) < 0x20) {
      iVar5 = *(int *)(param_1 + 0x88);
    }
    *(int *)(param_2 + 0xe8) = iVar5;
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
    if ((longlong)*(int *)(param_1 + 0x80) != 0) {
      plVar6 = *(longlong **)(param_1 + 0x78);
      lVar8 = (longlong)*(int *)(param_1 + 0x80) * 0x18;
      do {
        lVar4 = plVar6[1];
        if (lVar4 == 0) {
          uVar3 = FUN_1407f787c();
          lVar4 = FUN_14477b664(uVar3);
          plVar6[1] = lVar4;
        }
        lVar9 = plVar6[2];
        if (lVar9 == 0) {
          if (lVar4 == 0) {
            lVar9 = 0;
          }
          else {
            lVar9 = 0;
            if (*plVar6 != 0) {
              plVar1 = *(longlong **)(lVar4 + 0xb8);
              if ((plVar1 == (longlong *)0x0) ||
                 (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
                lVar9 = 0;
              }
              else {
                uVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
                lVar9 = FUN_144aff482(uVar3,plVar6);
              }
              plVar6[2] = lVar9;
            }
          }
        }
        iVar5 = *(int *)(param_2 + 0xe0);
        *(uint *)(param_2 + 0xe0) = iVar5 + 1U;
        if (*(uint *)(param_2 + 0xe4) < iVar5 + 1U) {
          FUN_14190a5ae((longlong *)(param_2 + 0xd8),iVar5);
        }
        *(longlong *)(*(longlong *)(param_2 + 0xd8) + (longlong)iVar5 * 8) = lVar9;
        plVar6 = plVar6 + 3;
        lVar8 = lVar8 + -0x18;
      } while (lVar8 != 0);
    }
  }
  return uVar7 & 0xffffffff;
}



// FUNCTION 1408bb83a FUN_1408bb83a body=129 status=ok
// SIG undefined FUN_1408bb83a(void)

void FUN_1408bb83a(longlong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
  *(undefined8 *)(param_1 + 0x80) = param_2;
  *(undefined1 *)(param_1 + 0x88) = 0;
  iVar1 = *(int *)(param_1 + 0x10);
  iVar2 = *(int *)(param_1 + 0x3c);
  FUN_1408bb8bc(param_1 + 8,param_2);
  iVar3 = *(int *)(param_1 + 0x10);
  iVar4 = *(int *)(param_1 + 0x3c);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
  if ((iVar2 < iVar1) && (iVar3 == iVar4)) {
    FUN_140f93338(&DAT_14c9647b8,param_1);
    return;
  }
  return;
}



// FUNCTION 1408bb8bc FUN_1408bb8bc body=157 status=ok
// SIG undefined FUN_1408bb8bc(void)

undefined8 FUN_1408bb8bc(longlong *param_1,ulonglong param_2)

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
          FUN_145753dd0(param_1,iVar1);
          return 1;
        }
        iVar1 = *(int *)(*param_1 + (longlong)iVar1 * 0x18 + 0x10);
      } while (iVar1 != -1);
    }
  }
  return 0;
}



// FUNCTION 1408bb964 FUN_1408bb964 body=180 status=ok
// SIG undefined FUN_1408bb964(void)

undefined8 FUN_1408bb964(uint *param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  
  if (((((param_1[3] != 0) && (uVar1 = param_1[2], -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)
       ) && ((plVar4 = (longlong *)
                       ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
             plVar4 != (longlong *)0x0 && (*(uint *)(plVar4 + 2) == param_1[3])))) &&
     (((*(uint *)(plVar4 + 1) & 0x10200000) == 0 && (lVar2 = *plVar4, lVar2 != 0))))
  goto LAB_1408bba04;
  if (param_1[1] == 0) {
LAB_1408bba10:
    plVar4 = (longlong *)0x0;
  }
  else {
    uVar1 = *param_1;
    plVar4 = (longlong *)0x0;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      puVar3 = (undefined8 *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((puVar3 == (undefined8 *)0x0) ||
         ((*(uint *)(puVar3 + 2) != param_1[1] || ((*(uint *)(puVar3 + 1) & 0x10200000) != 0))))
      goto LAB_1408bba10;
      plVar4 = (longlong *)*puVar3;
    }
  }
  lVar2 = (**(code **)(*plVar4 + 0x180))();
  if (lVar2 == 0) {
    return 0;
  }
LAB_1408bba04:
  return *(undefined8 *)(lVar2 + 0x1f0);
}



// FUNCTION 1408bba1e FUN_1408bba1e body=57 status=ok
// SIG undefined FUN_1408bba1e(void)

void FUN_1408bba1e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb211b0 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb211b0 = FUN_140002ddd(FUN_1464323a0,uVar1,L"GbxBrainAspect_CanSee");
  }
  return;
}



// FUNCTION 1408bba58 FUN_1408bba58 body=94 status=ok
// SIG undefined FUN_1408bba58(void)

bool FUN_1408bba58(undefined8 param_1,short param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = FUN_1408bbab6();
  if ((lVar2 != 0) && ((longlong)*(int *)(lVar2 + 0x520) != 0)) {
    lVar1 = *(longlong *)(lVar2 + 0x518);
    lVar2 = (longlong)*(int *)(lVar2 + 0x520) * 0x90;
    do {
      if (*(short *)(lVar1 + 0xc) == param_2) {
        if (lVar1 == 0) {
          return true;
        }
        return 4 < *(int *)(lVar1 + 0x88);
      }
      lVar1 = lVar1 + 0x90;
      lVar2 = lVar2 + -0x90;
    } while (lVar2 != 0);
  }
  return true;
}



// FUNCTION 1408bbab6 FUN_1408bbab6 body=446 status=ok
// SIG undefined FUN_1408bbab6(void)

longlong FUN_1408bbab6(longlong param_1)

{
  longlong lVar1;
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
  longlong local_88;
  code *local_80;
  undefined1 local_78 [28];
  char local_5c;
  longlong local_50;
  char local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar1 = *(longlong *)(param_1 + 0x48);
  if (lVar1 == 0) {
    lVar1 = *(longlong *)(param_1 + 0x20);
    if (lVar1 != 0) {
      if (DAT_14cb10130 == 0) {
        local_a0 = &local_80;
        local_80 = FUN_140754f84;
        local_90 = FUN_14081d0ea;
        local_98 = FUN_14081d0ea;
        local_a8 = &LAB_147da9a76;
        local_b0 = FUN_1409f3105;
        local_b8 = L"Engine";
        local_c0 = 0;
        local_c8 = 0x10000000;
        local_d0 = 8;
        local_d8 = 0x990;
        FUN_14081cfa3(L"/Script/Engine",L"World",&DAT_14cb10130,FUN_14640e230);
      }
      if ((*(int *)(DAT_14cb10130 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14cb10130 + 0x38) * 8) == DAT_14cb10130 + 0x30)) {
        local_88 = FUN_1408bbcfa();
        if ((local_88 != 0) && (DAT_14c950c29 != '\0')) {
          FUN_1456cec3c(local_88);
        }
        FUN_1408bbc76(&local_80,lVar1,&local_88,5);
        if (local_5c == '\0') {
          if ((local_50 != 0) && (DAT_14c950c29 != '\0')) {
            FUN_1456cec3c(local_50);
          }
          *(longlong *)(param_1 + 0x48) = local_50;
          lVar1 = local_50;
        }
        else {
          lVar1 = 0;
        }
        if (local_28 == '\x01') {
          FUN_14024445c(local_78);
        }
        if (local_5c == '\0') goto LAB_1408bbadb;
      }
    }
    lVar1 = 0;
  }
LAB_1408bbadb:
  if ((local_20 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1408bbc76 FUN_1408bbc76 body=131 status=ok
// SIG undefined FUN_1408bbc76(void)

undefined4 *
FUN_1408bbc76(undefined4 *param_1,undefined8 param_2,longlong *param_3,undefined4 param_4)

{
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = *param_3;
  if ((local_30 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  *param_1 = param_4;
  *(undefined1 *)(param_1 + 0x16) = 0;
  local_28 = param_2;
  FUN_140244552(param_1 + 2,&local_28,&local_30);
  FUN_1408bbde0(param_1);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1408bbcfa FUN_1408bbcfa body=228 status=ok
// SIG undefined FUN_1408bbcfa(void)

longlong FUN_1408bbcfa(void)

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
  if (DAT_14cb60160 == 0) {
    local_30 = &local_10;
    local_10 = FUN_141030f22;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_141117124;
    local_38 = &LAB_1486c10ed;
    local_40 = &LAB_14600dc91;
    local_48 = &DAT_149e063b2;
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0x7c8;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxLevelSequenceManager",&DAT_14cb60160,FUN_1464eb136);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb60160;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1408bbde0 FUN_1408bbde0 body=442 status=ok
// SIG undefined FUN_1408bbde0(void)

void FUN_1408bbde0(uint *param_1)

{
  uint uVar1;
  longlong lVar2;
  char *pcVar3;
  byte bVar4;
  char cVar5;
  longlong lVar6;
  char *pcVar7;
  longlong lVar8;
  longlong lVar9;
  uint *puVar10;
  longlong lVar11;
  longlong lVar12;
  bool bVar13;
  
  lVar12 = (longlong)(int)param_1[6];
  if ((int)(param_1[8] + 1) < (int)(param_1[0x10] + param_1[6])) {
    lVar2 = *(longlong *)(param_1 + 2);
    lVar11 = (longlong)(int)param_1[8] + 1;
    do {
      lVar9 = lVar11;
      puVar10 = param_1 + 4;
      if (lVar12 <= lVar11) {
        lVar9 = lVar11 - lVar12;
        puVar10 = param_1 + 0xe;
      }
      lVar9 = *(longlong *)(*(longlong *)puVar10 + lVar9 * 8);
      param_1[10] = param_1[10] + 1;
      if (((lVar9 != 0) && (lVar6 = FUN_144a79cc8(lVar9), lVar6 != 0)) &&
         ((uVar1 = *param_1, (uVar1 & 1) == 0 || ((*(uint *)(lVar9 + 8) >> 0x1e & 1) == 0)))) {
        if ((uVar1 & 2) != 0) {
          cVar5 = FUN_144affb44(lVar9);
          if (cVar5 == '\0') goto LAB_1408bbf7d;
          uVar1 = *param_1;
        }
        if ((uVar1 & 4) != 0) {
          if (((*(byte *)(lVar6 + 0x240) & 0x20) == 0) ||
             (bVar4 = 1, (*(byte *)(lVar6 + 0x242) & 8) != 0)) {
            bVar4 = 1;
            if ((*(byte *)(lVar6 + 0x241) & 0x20) == 0) {
              bVar4 = (*(byte *)(lVar6 + 0x241) & 0x40) >> 6;
            }
          }
          pcVar3 = *(char **)(lVar6 + 0x2e8);
          if (*(longlong *)(lVar6 + 0xc0) == 0) {
            pcVar7 = (char *)0x0;
          }
          else {
            pcVar7 = (char *)FUN_144a8afea();
          }
          if (pcVar3 == (char *)0x0) {
            bVar13 = true;
          }
          else {
            bVar13 = *pcVar3 == '\x02';
          }
          if ((bVar4 & ((pcVar7 == (char *)0x0 || pcVar3 == pcVar7) | bVar13)) != 1)
          goto LAB_1408bbf7d;
        }
        lVar8 = FUN_144a8afe2(lVar6);
        if (lVar8 == lVar2) {
          if (*(longlong *)(lVar2 + 0x30) == lVar6) {
LAB_1408bbf09:
            *(longlong *)(param_1 + 0xc) = lVar9;
            param_1[8] = (uint)lVar11;
            return;
          }
          lVar6 = FUN_14059e8cc();
          if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x38) < *(int *)(lVar6 + 0x38)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar6 + 0x38) * 8) != lVar6 + 0x30)) goto LAB_1408bbf09;
        }
      }
LAB_1408bbf7d:
      lVar11 = lVar11 + 1;
    } while (lVar11 < (int)param_1[0x10] + lVar12);
  }
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 9) = 1;
  return;
}



// FUNCTION 1408bbf9a FUN_1408bbf9a body=82 status=ok
// SIG undefined FUN_1408bbf9a(void)

void FUN_1408bbf9a(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  if (0 < (longlong)*(int *)(param_1 + 0x68)) {
    plVar2 = (longlong *)(*(longlong *)(param_1 + 0x60) + 0x10);
    lVar1 = 0;
    do {
      if (*plVar2 == param_2) {
        FUN_1408bbfec((longlong *)(param_1 + 0x60),lVar1,CONCAT71((int7)((ulonglong)plVar2 >> 8),1))
        ;
        break;
      }
      lVar1 = lVar1 + 1;
      plVar2 = plVar2 + 3;
    } while (*(int *)(param_1 + 0x68) != lVar1);
  }
  FUN_1408bc0f6(param_1 + 0x48,param_2);
  return;
}



// FUNCTION 1408bbfec FUN_1408bbfec body=106 status=ok
// SIG undefined FUN_1408bbfec(void)

void FUN_1408bbfec(longlong *param_1,uint param_2,char param_3)

{
  void *_Dst;
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  
  lVar1 = *param_1;
  lVar2 = (longlong)(int)param_2;
  *(undefined8 *)(lVar1 + lVar2 * 0x18) = 0;
  *(undefined8 *)(lVar1 + 8 + lVar2 * 0x18) = 0xffffffffffffffff;
  iVar3 = (int)param_1[1];
  if (~param_2 + iVar3 != 0) {
    _Dst = (void *)(lVar1 + lVar2 * 0x18);
    memmove(_Dst,(void *)((longlong)_Dst + 0x18),(longlong)(int)(~param_2 + iVar3) * 0x18);
    iVar3 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar3 + -1;
  if (param_3 == '\x01') {
    FUN_1408bc056(param_1);
    return;
  }
  return;
}



// FUNCTION 1408bc056 FUN_1408bc056 body=159 status=ok
// SIG undefined FUN_1408bc056(void)

void FUN_1408bc056(longlong param_1)

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



// FUNCTION 1408bc0f6 FUN_1408bc0f6 body=162 status=ok
// SIG undefined FUN_1408bc0f6(void)

void FUN_1408bc0f6(longlong *param_1,undefined8 param_2)

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
        goto LAB_1408bc183;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_1408bc183:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 1408bc198 FUN_1408bc198 body=38 status=ok
// SIG undefined FUN_1408bc198(void)

undefined8 FUN_1408bc198(undefined8 param_1,int param_2)

{
  FUN_1408bc1be();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1408bc1be FUN_1408bc1be body=1011 status=ok
// SIG undefined FUN_1408bc1be(void)

void FUN_1408bc1be(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  
  *param_1 = &PTR_LAB_149f6c8d0;
  *(undefined4 *)(param_1 + 0x11a) = 0;
  if (param_1[0x119] != 0) {
    FUN_1400020a8();
  }
  FUN_1400c7da0(param_1 + 0x111);
  puVar1 = (undefined8 *)param_1[0x110];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  lVar3 = 0x858;
  do {
    puVar1 = *(undefined8 **)((longlong)param_1 + lVar3);
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
    lVar3 = lVar3 + -0x10;
  } while (lVar3 != 0x828);
  FUN_14054b152(param_1 + 0xba);
  if (param_1[0xb2] != 0) {
    plVar2 = param_1 + 0xb6;
    if ((longlong *)param_1[0xb4] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[0xb4];
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if (param_1[0xaa] != 0) {
    plVar2 = param_1 + 0xae;
    if ((longlong *)param_1[0xac] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[0xac];
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if (param_1[0xa2] != 0) {
    plVar2 = param_1 + 0xa6;
    if ((longlong *)param_1[0xa4] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[0xa4];
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  *(undefined4 *)(param_1 + 0x9d) = 0;
  if (param_1[0x9c] != 0) {
    FUN_1400020a8();
  }
  FUN_14083ed90(param_1 + 0x94);
  *(undefined4 *)(param_1 + 0x93) = 0;
  if (param_1[0x92] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x8b) = 0;
  if (*(int *)((longlong)param_1 + 0x45c) != 0) {
    FUN_144727cd0(param_1 + 0x8a,0);
  }
  param_1[0x90] = 0xffffffff;
  *(undefined4 *)(param_1 + 0x8f) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x47c)) {
    *(undefined4 *)((longlong)param_1 + 0x47c) = 0x80;
    FUN_1446efbd8(param_1 + 0x8c,0);
  }
  if (param_1[0x8e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x8a] != 0) {
    FUN_1400020a8();
  }
  FUN_1408bc66e(param_1[0x88],*(undefined4 *)(param_1 + 0x89));
  if (param_1[0x88] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x86] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x82] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x80] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x7e] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x7d) = 0;
  if (param_1[0x7c] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x75) = 0;
  if (*(int *)((longlong)param_1 + 0x3ac) != 0) {
    FUN_144727cd0(param_1 + 0x74,0);
  }
  param_1[0x7a] = 0xffffffff;
  *(undefined4 *)(param_1 + 0x79) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x3cc)) {
    *(undefined4 *)((longlong)param_1 + 0x3cc) = 0x80;
    FUN_1446efbd8(param_1 + 0x76,0);
  }
  if (param_1[0x78] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x74] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x73) = 0;
  if (param_1[0x72] != 0) {
    FUN_1400020a8();
  }
  FUN_1408bc6a2(param_1 + 0x6a);
  if (param_1[0x68] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x66] != 0) {
    FUN_1400020a8();
  }
  if (param_1[100] != 0) {
    FUN_1400020a8();
  }
  plVar2 = (longlong *)param_1[0x62];
  if (plVar2 != (longlong *)0x0) {
    FUN_1408bc892(plVar2 + 2);
    FUN_1408bc7be(*plVar2,(int)plVar2[1]);
    if (*plVar2 != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(plVar2);
  }
  FUN_1408bc63f(param_1[0x46],*(undefined4 *)(param_1 + 0x47));
  if (param_1[0x46] != 0) {
    FUN_1400020a8();
  }
  FUN_1408bc6da(param_1 + 8);
  FUN_1401aa844(param_1);
  return;
}



// FUNCTION 1408bc5b2 FUN_1408bc5b2 body=29 status=ok
// SIG undefined FUN_1408bc5b2(void)

undefined8 FUN_1408bc5b2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1408bc5d0 FUN_1408bc5d0 body=111 status=ok
// SIG undefined FUN_1408bc5d0(void)

undefined8 * FUN_1408bc5d0(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_149f6c8c8;
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_149e38530;
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1408bc63f FUN_1408bc63f body=47 status=ok
// SIG undefined FUN_1408bc63f(void)

void FUN_1408bc63f(longlong param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = 0;
    do {
      if (*(longlong *)(param_1 + lVar1 * 8) != 0) {
        FUN_1400020a8();
      }
      lVar1 = lVar1 + 1;
    } while (param_2 != (int)lVar1);
  }
  return;
}



// FUNCTION 1408bc66e FUN_1408bc66e body=52 status=ok
// SIG undefined FUN_1408bc66e(void)

void FUN_1408bc66e(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar2 = 0;
    do {
      puVar1 = *(undefined8 **)(param_1 + lVar2 * 8);
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
      }
      lVar2 = lVar2 + 1;
    } while (param_2 != (int)lVar2);
  }
  return;
}



// FUNCTION 1408bc6a2 FUN_1408bc6a2 body=55 status=ok
// SIG undefined FUN_1408bc6a2(void)

void FUN_1408bc6a2(longlong *param_1)

{
  FUN_1408bc818(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1408bc6da FUN_1408bc6da body=228 status=ok
// SIG undefined FUN_1408bc6da(void)

void FUN_1408bc6da(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (((*(byte *)((longlong)param_1 + 0x1e1) & 2) != 0) &&
     (plVar3 = (longlong *)param_1[0x3a], plVar3 != (longlong *)0x0)) {
    FUN_145af522b(*plVar3,(int)plVar3[1]);
    if (*plVar3 != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(plVar3);
  }
  if (param_1[0x26] != 0) {
    FUN_1400020a8();
  }
  FUN_1408bc7be(param_1[0x24],(int)param_1[0x25]);
  if (param_1[0x24] != 0) {
    FUN_1400020a8();
  }
  FUN_1408bc7e9(param_1[5],(int)param_1[6]);
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
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
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1408bc7be FUN_1408bc7be body=43 status=ok
// SIG undefined FUN_1408bc7be(void)

void FUN_1408bc7be(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_14017126a(param_1);
    param_1 = param_1 + 200;
  }
  return;
}



// FUNCTION 1408bc7e9 FUN_1408bc7e9 body=47 status=ok
// SIG undefined FUN_1408bc7e9(void)

void FUN_1408bc7e9(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 8);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1408bc818 FUN_1408bc818 body=121 status=ok
// SIG undefined FUN_1408bc818(void)

void FUN_1408bc818(longlong param_1,int param_2)

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



// FUNCTION 1408bc892 FUN_1408bc892 body=260 status=ok
// SIG undefined FUN_1408bc892(void)

void FUN_1408bc892(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = 0xf0;
  do {
    if (*(longlong *)((longlong)param_1 + lVar1) != 0) {
      FUN_1400020a8();
    }
    lVar1 = lVar1 + -0x10;
  } while (lVar1 != 0xd0);
  lVar1 = 0xd0;
  do {
    if (*(longlong *)((longlong)param_1 + lVar1) != 0) {
      FUN_1400020a8();
    }
    lVar1 = lVar1 + -0x10;
  } while (lVar1 != 0xb0);
  lVar1 = 0xb0;
  do {
    if (*(longlong *)((longlong)param_1 + lVar1) != 0) {
      FUN_1400020a8();
    }
    lVar1 = lVar1 + -0x10;
  } while (lVar1 != 0x90);
  lVar1 = 0x90;
  do {
    if (*(longlong *)((longlong)param_1 + lVar1) != 0) {
      FUN_1400020a8();
    }
    lVar1 = lVar1 + -0x10;
  } while (lVar1 != 0x70);
  lVar1 = 0x70;
  do {
    if (*(longlong *)((longlong)param_1 + lVar1) != 0) {
      FUN_1400020a8();
    }
    lVar1 = lVar1 + -0x10;
  } while (lVar1 != 0x30);
  lVar1 = 0x30;
  do {
    if (*(longlong *)((longlong)param_1 + lVar1) != 0) {
      FUN_1400020a8();
    }
    lVar1 = lVar1 + -0x10;
  } while (lVar1 != 0x10);
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1408bc996 FUN_1408bc996 body=998 status=ok
// SIG undefined FUN_1408bc996(void)

void FUN_1408bc996(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  void *_Src;
  byte bVar4;
  uint uVar5;
  int *piVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  int *piVar10;
  longlong lVar11;
  longlong *plVar12;
  undefined1 auStack_78 [32];
  longlong *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1408bce38(param_1,*param_2);
  plVar3 = *(longlong **)(param_1 + 0xa8);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x18))(plVar3,param_2);
  }
  plVar3 = *(longlong **)(*param_2 + 0x6a0);
  if ((longlong)*(int *)(param_1 + 0xc0) != 0) {
    lVar8 = *(longlong *)(param_1 + 0xb8);
    lVar11 = (longlong)*(int *)(param_1 + 0xc0) << 4;
    do {
      FUN_14019c9f2(lVar8,plVar3);
      lVar8 = lVar8 + 0x10;
      lVar11 = lVar11 + -0x10;
    } while (lVar11 != 0);
  }
  if ((longlong)*(int *)(param_1 + 0xe8) != 0) {
    lVar8 = *(longlong *)(param_1 + 0xe0);
    lVar11 = (longlong)*(int *)(param_1 + 0xe8) << 4;
    do {
      FUN_14019c9f2(lVar8,plVar3);
      lVar8 = lVar8 + 0x10;
      lVar11 = lVar11 + -0x10;
    } while (lVar11 != 0);
  }
  FUN_14019c9f2(param_1 + 200);
  if ((longlong)*(int *)(param_1 + 0xc0) != 0) {
    piVar6 = (int *)(*(longlong *)(param_1 + 0xb8) + 0xc);
    lVar8 = (longlong)*(int *)(param_1 + 0xc0) << 4;
    do {
      uVar5 = piVar6[-1];
      piVar10 = piVar6;
      if ((int)uVar5 < 0) {
        if ((((~uVar5 & 0x7fffffff) != 0) && (uVar5 = (int)(uVar5 * 2) >> 1, -1 < (int)uVar5)) &&
           ((int)uVar5 < (int)plVar3[0x11])) {
          piVar10 = (int *)((ulonglong)uVar5 * 4 + plVar3[0x10]);
          goto LAB_1408bca72;
        }
      }
      else {
LAB_1408bca72:
        iVar2 = *piVar10;
        if ((-1 < (longlong)iVar2) && (iVar2 < *(int *)(param_1 + 0xa0))) {
          *(undefined4 *)(*(longlong *)(param_1 + 0x98) + (longlong)iVar2 * 4) = 0;
        }
      }
      piVar6 = piVar6 + 4;
      lVar8 = lVar8 + -0x10;
    } while (lVar8 != 0);
  }
  *(undefined1 *)(param_1 + 0x160) = 0;
  if ((longlong)*(int *)(param_1 + 0xe8) != 0) {
    lVar8 = 0;
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 0xe0) + lVar8) != 0) {
        *(undefined1 *)(param_1 + 0x160) = 1;
        bVar4 = 1;
        goto LAB_1408bcad3;
      }
      lVar8 = lVar8 + 0x10;
    } while ((longlong)*(int *)(param_1 + 0xe8) * 0x10 != lVar8);
  }
  bVar4 = 0;
LAB_1408bcad3:
  plVar1 = (longlong *)(param_1 + 0x168);
  *(undefined4 *)(param_1 + 0x170) = 0;
  if (*(int *)(param_1 + 0x174) < 0) {
    FUN_1447d6d9c(plVar1,0);
    bVar4 = *(byte *)(param_1 + 0x160);
  }
  if (((((bVar4 & 1) != 0) && (*(int *)(param_1 + 0x4c) != 0)) &&
      ((uVar5 = *(uint *)(param_1 + 0x48), -1 < (int)uVar5 &&
       ((((int)uVar5 < DAT_14c9647dc &&
         (plVar7 = (longlong *)
                   ((ulonglong)((uVar5 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8)),
         plVar7 != (longlong *)0x0)) && ((int)plVar7[2] == *(int *)(param_1 + 0x4c))))))) &&
     ((*(uint *)(plVar7 + 1) & 0x10200000) == 0)) {
    if ((*(uint *)(plVar7 + 1) & 0x10200000) == 0) {
      lVar8 = *plVar7;
    }
    else {
      lVar8 = 0;
    }
    local_58 = (longlong *)0x0;
    local_50 = *(int *)(lVar8 + 0xb0);
    lVar11 = (longlong)local_50;
    _Src = *(void **)(lVar8 + 0xa8);
    if (lVar11 != 0) {
      FUN_1401b309e(&local_58,local_50,0);
      memcpy(local_58,_Src,lVar11 << 3);
      if ((longlong)local_50 != 0) {
        plVar7 = local_58 + local_50;
        plVar12 = local_58;
        do {
          if ((longlong)*(int *)(param_1 + 0xe8) != 0) {
            lVar8 = 0;
            do {
              if (*(longlong *)(*(longlong *)(param_1 + 0xe0) + lVar8) == *plVar12)
              goto LAB_1408bcc69;
              lVar8 = lVar8 + 0x10;
            } while ((longlong)*(int *)(param_1 + 0xe8) * 0x10 != lVar8);
          }
          uVar5 = FUN_1408bcd7e(plVar3);
          if ((longlong)(int)plVar3[1] != 0) {
            lVar8 = (longlong)(int)plVar3[1] * 2;
            lVar9 = 0;
            lVar11 = 0;
            do {
              if (uVar5 == *(ushort *)(*plVar3 + lVar9 * 2)) {
                if ((int)lVar9 != -1) {
                  *(undefined4 *)(*(longlong *)(param_1 + 0x98) + (lVar11 >> 0x20) * 4) = 0;
                  iVar2 = *(int *)(param_1 + 0x170);
                  *(uint *)(param_1 + 0x170) = iVar2 + 1U;
                  if (*(uint *)(param_1 + 0x174) < iVar2 + 1U) {
                    FUN_1408f8cfa(plVar1,iVar2);
                  }
                  *(int *)(*plVar1 + (longlong)iVar2 * 4) = (int)lVar9;
                }
                break;
              }
              lVar11 = lVar11 + 0x100000000;
              lVar9 = lVar9 + 1;
              lVar8 = lVar8 + -2;
            } while (lVar8 != 0);
          }
LAB_1408bcc69:
          plVar12 = plVar12 + 1;
        } while (plVar12 != plVar7);
      }
      if (local_58 != (longlong *)0x0) {
        FUN_1400020a8(local_58);
      }
    }
  }
  FUN_1403ed7b2(param_1 + 0x80,*(undefined4 *)(param_1 + 0xa0),1);
  if (0 < *(int *)(param_1 + 0xa0)) {
    lVar8 = 0;
    do {
      *(bool *)(*(longlong *)(param_1 + 0x80) + lVar8) =
           1e-08 < *(float *)(*(longlong *)(param_1 + 0x98) + lVar8 * 4);
      lVar8 = lVar8 + 1;
    } while (lVar8 < *(int *)(param_1 + 0xa0));
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1408bcd7e FUN_1408bcd7e body=186 status=ok
// SIG undefined FUN_1408bcd7e(void)

undefined4 FUN_1408bcd7e(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  
  lVar2 = *param_2;
  if ((lVar2 != 0) &&
     (lVar3 = *(longlong *)(param_1 + 0x48), *(int *)(lVar3 + 0x98) != *(int *)(lVar3 + 0xc4))) {
    uVar4 = (uint)((ulonglong)lVar2 >> 0x10);
    uVar7 = (uint)lVar2 & 0xffff;
    lVar6 = lVar3 + 200;
    if (*(longlong *)(lVar3 + 0xd0) != 0) {
      lVar6 = *(longlong *)(lVar3 + 0xd0);
    }
    iVar5 = *(int *)(lVar6 + (ulonglong)
                             (*(int *)(lVar3 + 0xd8) - 1U &
                             (int)((ulonglong)lVar2 >> 0x20) + ((uint)lVar2 << 0x10 | uVar7) +
                             (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar7 >> 4)) * 4);
    if (iVar5 != -1) {
      do {
        plVar1 = (longlong *)(*(longlong *)(lVar3 + 0x90) + (longlong)iVar5 * 0x14);
        if (*plVar1 == lVar2) {
          if (plVar1 == (longlong *)0x0) {
            return 0xffffffff;
          }
          if (plVar1 + 1 == (longlong *)0x0) {
            return 0xffffffff;
          }
          return (int)plVar1[1];
        }
        iVar5 = *(int *)((longlong)plVar1 + 0xc);
      } while (iVar5 != -1);
    }
  }
  return 0xffffffff;
}



// FUNCTION 1408bce38 FUN_1408bce38 body=616 status=ok
// SIG undefined FUN_1408bce38(void)

void FUN_1408bce38(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  uint uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  
  plVar1 = param_1 + 0x13;
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (*(int *)((longlong)param_1 + 0xa4) < 0) {
    FUN_14482f6fa(plVar1,0);
  }
  if (((((*(int *)((longlong)param_1 + 0x4c) != 0) &&
        (uVar5 = *(uint *)(param_1 + 9), -1 < (int)uVar5)) && ((int)uVar5 < DAT_14c9647dc)) &&
      (((plVar6 = (longlong *)
                  ((ulonglong)((uVar5 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8)),
        plVar6 != (longlong *)0x0 && ((int)plVar6[2] == *(int *)((longlong)param_1 + 0x4c))) &&
       ((plVar4 = *(longlong **)(param_2 + 0x6a0), (*(uint *)(plVar6 + 1) & 0x10200000) == 0 &&
        ((*(int *)((longlong)plVar4 + 0x34) != 0 && (uVar5 = *(uint *)(plVar4 + 6), -1 < (int)uVar5)
         ))))))) &&
     (((int)uVar5 < DAT_14c9647dc &&
      ((((lVar8 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8), lVar8 != 0 &&
         (*(int *)(lVar8 + 0x10) == *(int *)((longlong)plVar4 + 0x34))) &&
        ((*(uint *)(lVar8 + 8) & 0x10200000) == 0)) && (plVar4[9] != 0)))))) {
    uVar5 = *(uint *)(plVar4 + 1);
    if (0 < (longlong)(int)uVar5) {
      if ((*(uint *)(plVar6 + 1) & 0x10200000) == 0) {
        lVar8 = *plVar6;
      }
      else {
        lVar8 = 0;
      }
      iVar3 = (int)param_1[0x14];
      *(uint *)(param_1 + 0x14) = iVar3 + uVar5;
      if ((uint)(*(int *)((longlong)param_1 + 0xa4) - iVar3) < uVar5) {
        FUN_14475e4ac(plVar1);
      }
      memset((void *)((longlong)iVar3 * 4 + *plVar1),0,(longlong)(int)uVar5 << 2);
      if ((longlong)*(int *)(lVar8 + 0xb0) != 0) {
        lVar10 = *(longlong *)(lVar8 + 0xa8);
        lVar2 = lVar10 + (longlong)*(int *)(lVar8 + 0xb0) * 8;
        do {
          uVar5 = FUN_1408bcd7e(plVar4,lVar10);
          if ((longlong)(int)plVar4[1] != 0) {
            uVar9 = 0;
            lVar7 = 0;
            do {
              if (uVar5 == *(ushort *)(*plVar4 + uVar9)) {
                if ((~uVar9 & 0x1fffffffe) != 0) {
                  *(undefined4 *)(*plVar1 + (lVar7 >> 0x20) * 4) = 0x3f800000;
                }
                break;
              }
              lVar7 = lVar7 + 0x100000000;
              uVar9 = uVar9 + 2;
            } while ((longlong)(int)plVar4[1] * 2 != uVar9);
          }
          lVar10 = lVar10 + 8;
        } while (lVar10 != lVar2);
      }
                    /* WARNING: Could not recover jumptable at 0x0001408bd035. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x1a0))(param_1,plVar4,lVar8);
      return;
    }
  }
  if (*(int *)((longlong)param_1 + 0x7c) < 0) {
    *(undefined4 *)(param_1 + 0xf) = 0;
    FUN_1474dadec(param_1 + 0xe);
    return;
  }
  *(undefined4 *)(param_1 + 0xf) = 0;
  return;
}



// FUNCTION 1408bd0a0 FUN_1408bd0a0 body=247 status=ok
// SIG undefined FUN_1408bd0a0(void)

void FUN_1408bd0a0(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  
  plVar1 = (longlong *)(param_1 + 0x70);
  *(undefined4 *)(param_1 + 0x78) = 0;
  if (*(int *)(param_1 + 0x7c) < 0) {
    FUN_1474dadec(plVar1);
  }
  if ((*(longlong *)(param_3 + 0x40) != 0) && ((longlong)*(int *)(param_1 + 0xf8) != 0)) {
    lVar8 = *(longlong *)(param_1 + 0xf0);
    lVar5 = (longlong)*(int *)(param_1 + 0xf8) * 200 + lVar8;
    do {
      iVar7 = -1;
      if (0 < (longlong)*(int *)(param_3 + 0x90)) {
        lVar6 = 0;
        do {
          if (*(longlong *)(*(longlong *)(param_3 + 0x88) + lVar6 * 8) ==
              *(longlong *)(lVar8 + 0xb0)) {
            uVar2 = *(undefined8 *)(*(longlong *)(param_3 + 0x88) + lVar6 * 8);
            iVar7 = *(int *)(param_1 + 0x78);
            *(uint *)(param_1 + 0x78) = iVar7 + 1U;
            if (*(uint *)(param_1 + 0x7c) < iVar7 + 1U) {
              FUN_1408bd198(plVar1,iVar7);
            }
            lVar3 = *plVar1;
            lVar4 = (longlong)iVar7 * 0x10;
            *(undefined8 *)(lVar3 + lVar4) = uVar2;
            *(int *)(lVar3 + 8 + lVar4) = (int)lVar6;
            *(undefined4 *)(lVar3 + 0xc + lVar4) = 0;
            break;
          }
          lVar6 = lVar6 + 1;
        } while (*(int *)(param_3 + 0x90) != lVar6);
      }
      *(int *)(lVar8 + 0xbc) = iVar7;
      lVar8 = lVar8 + 200;
    } while (lVar8 != lVar5);
  }
  return;
}



// FUNCTION 1408bd198 FUN_1408bd198 body=269 status=ok
// SIG undefined FUN_1408bd198(void)

void FUN_1408bd198(longlong param_1,int param_2)

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



// FUNCTION 1408bd2a6 FUN_1408bd2a6 body=277 status=ok
// SIG undefined FUN_1408bd2a6(void)

undefined8 FUN_1408bd2a6(longlong param_1)

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
    if (iVar1 == 2) goto LAB_1408bd3b5;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1408bd3b5;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_1408bd3b5:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1408bd363;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5 + (longlong)*(int *)(param_1 + 0x28));
      uVar6 = 1;
      goto LAB_1408bd363;
    }
  }
  uVar6 = 0;
LAB_1408bd363:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1408bd412 FUN_1408bd412 body=147 status=ok
// SIG undefined FUN_1408bd412(void)

void FUN_1408bd412(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = param_1[0x1ac];
  if (*param_2 != lVar1) {
    *(byte *)(param_1 + 0x1aa) = *(byte *)(param_1 + 0x1aa) | 1;
    (**(code **)(*param_1 + 0x960))();
    *(byte *)(param_1 + 0x1aa) = *(byte *)(param_1 + 0x1aa) & 0xfe;
    if (param_1[0x1ac] == lVar1) {
      param_1[0x1ac] = *param_2;
      local_28 = lVar1;
      (**(code **)(*param_1 + 0x958))(param_1);
    }
    FUN_14054d5aa(param_1 + 0x12e,param_1);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1408bd596 FUN_1408bd596 body=120 status=ok
// SIG undefined FUN_1408bd596(void)

void FUN_1408bd596(longlong param_1,undefined4 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(param_1 + 0xd10);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0xd08);
    lVar3 = 0;
    do {
      FUN_1408bd60e(*(undefined8 *)(lVar2 + lVar3),param_2);
      lVar3 = lVar3 + 8;
    } while ((longlong)iVar1 * 8 != lVar3);
  }
  iVar1 = *(int *)(param_1 + 0xd20);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0xd18);
    lVar3 = 0;
    do {
      FUN_1408bd60e(*(undefined8 *)(lVar2 + lVar3),param_2);
      lVar3 = lVar3 + 8;
    } while ((longlong)iVar1 * 8 != lVar3);
  }
  return;
}



// FUNCTION 1408bd60e FUN_1408bd60e body=605 status=ok
// SIG undefined FUN_1408bd60e(void)

void FUN_1408bd60e(longlong param_1,char param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  code *pcVar6;
  byte bVar7;
  longlong lVar8;
  float *pfVar9;
  float fVar10;
  undefined1 auStack_108 [40];
  char local_e0 [16];
  longlong *local_d0;
  undefined4 local_b8 [2];
  float local_b0;
  undefined4 uStack_ac;
  ushort local_98;
  byte local_90;
  float local_88;
  undefined4 uStack_84;
  ushort local_70;
  byte local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  iVar2 = *(int *)(param_1 + 0xa8);
  if ((longlong)iVar2 != 0) {
    lVar3 = *(longlong *)(param_1 + 0xa0);
    lVar8 = 0;
    do {
      lVar4 = *(longlong *)(lVar3 + lVar8);
      if ((*(char *)(lVar4 + 0x22) == param_2) && (*(longlong *)(lVar4 + 8) == 0)) {
        if ((*(byte *)(lVar4 + 0x20) & 2) == 0) {
          *(byte *)(lVar4 + 0x20) = *(byte *)(lVar4 + 0x20) | 8;
          *(byte *)(param_1 + 0x79) = *(byte *)(param_1 + 0x79) | 2;
          if (((*(byte *)(lVar4 + 0x21) & 1) != 0) &&
             ((*(uint *)(lVar4 + 0x24) >> (*(byte *)(param_1 + 0x7a) & 0x1f) & 1) != 0)) {
            lVar5 = *(longlong *)(lVar4 + 0x38);
            local_e0[0] = '\0';
            local_b8[0] = 0;
            FUN_1456bb102(local_e0,*(undefined8 *)(param_1 + 0x40));
            FUN_1448729ea(lVar5 + 0x20,&local_b0,local_e0);
            if (local_90 == 3) {
              fVar10 = local_b0;
              bVar7 = 3;
            }
            else {
              pfVar9 = &local_88;
              FUN_1400b56fe(pfVar9,&local_b0,3);
              fVar10 = 0.0;
              if (local_68 != 0) {
                fVar10 = local_88;
              }
              pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
              if (pcVar6 != (code *)0x0) {
                if (0x18 < local_70) {
                  pfVar9 = (float *)CONCAT44(uStack_84,local_88);
                }
                (*pcVar6)(pfVar9);
              }
              bVar7 = local_90;
              if (0x18 < local_70) {
                FUN_1400020a8(CONCAT44(uStack_84,local_88));
                bVar7 = local_90;
              }
            }
            pfVar9 = &local_b0;
            pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar7 * 0x120));
            if (pcVar6 != (code *)0x0) {
              if (0x18 < local_98) {
                pfVar9 = (float *)CONCAT44(uStack_ac,local_b0);
              }
              (*pcVar6)(pfVar9);
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
            *(float *)(lVar4 + 0x28) = fVar10 + *(float *)(lVar4 + 0x28);
          }
        }
      }
      else if (*(char *)(lVar4 + 0x23) == param_2) {
        *(undefined4 *)(lVar4 + 0x28) = 0;
        *(byte *)(lVar4 + 0x20) = *(byte *)(lVar4 + 0x20) | 10;
        *(byte *)(param_1 + 0x79) = *(byte *)(param_1 + 0x79) | 2;
      }
      lVar8 = lVar8 + 8;
    } while ((longlong)iVar2 * 8 != lVar8);
  }
  if ((local_60 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1408bd86c FUN_1408bd86c body=40 status=ok
// SIG undefined FUN_1408bd86c(void)

undefined8 FUN_1408bd86c(undefined8 param_1,int param_2)

{
  FUN_1408bd894();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1408bd894 FUN_1408bd894 body=61 status=ok
// SIG undefined FUN_1408bd894(void)

void FUN_1408bd894(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a6aa8b0;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 1408bd8d2 FUN_1408bd8d2 body=228 status=ok
// SIG undefined FUN_1408bd8d2(void)

undefined8 * FUN_1408bd8d2(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b9359d0;
  FUN_1408bd9b6(param_1[0x26],*(undefined4 *)(param_1 + 0x27));
  if (param_1[0x26] != 0) {
    FUN_1400020a8();
  }
  FUN_140bf96d8(param_1[0x24],*(undefined4 *)(param_1 + 0x25));
  if (param_1[0x24] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x20],*(undefined4 *)(param_1 + 0x21));
  if (param_1[0x20] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x1d],*(undefined4 *)(param_1 + 0x1e));
  if (param_1[0x1d] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x1a],*(undefined4 *)(param_1 + 0x1b));
  if (param_1[0x1a] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1408bd9b6 FUN_1408bd9b6 body=60 status=ok
// SIG undefined FUN_1408bd9b6(void)

void FUN_1408bd9b6(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x48);
    do {
      FUN_1408bd9f2(*plVar1,(int)plVar1[1]);
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 0xb;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1408bd9f2 FUN_1408bd9f2 body=40 status=ok
// SIG undefined FUN_1408bd9f2(void)

void FUN_1408bd9f2(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1449e6b18(param_1);
    param_1 = param_1 + 0xc;
  }
  return;
}



// FUNCTION 1408bda1a FUN_1408bda1a body=923 status=ok
// SIG undefined FUN_1408bda1a(void)

undefined2 ** FUN_1408bda1a(undefined8 param_1,undefined2 **param_2)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  wchar_t *_Str;
  size_t sVar7;
  undefined8 uVar8;
  int iVar9;
  longlong lVar10;
  ushort uVar11;
  undefined2 *puVar12;
  ushort uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined1 auStack_88 [32];
  undefined2 *local_68;
  undefined8 uStack_60;
  undefined2 *local_58;
  int iStack_50;
  int iStack_4c;
  longlong *local_48;
  ulonglong uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1400b22c2(param_2,"Windows");
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c8442bc) && (FUN_144b3d300(&DAT_14c8442bc), DAT_14c8442bc == -1)) {
    uVar8 = FUN_14118da1c();
    DAT_14c8442b8 = FUN_14054d46e(uVar8,L"nullrhi");
    _Init_thread_footer(&DAT_14c8442bc);
  }
  bVar2 = DAT_14c8442b8;
  if (DAT_14c872bf0 == '\x01') {
    if (DAT_14c872bf1 != '\x01') goto LAB_1408bdcb2;
    bVar2 = DAT_14c8442b8 & 1;
  }
  if (bVar2 != 0) goto LAB_1408bdcb2;
  local_48 = (longlong *)0x0;
  uStack_40 = 0;
  FUN_1408bde70(DAT_14c872ce0,&DAT_14c872b28);
  plVar6 = (longlong *)FUN_140489acc();
  if ((plVar6 != (longlong *)0x0) && (cVar4 = (**(code **)(*plVar6 + 0x420))(plVar6), cVar4 != '\0')
     ) {
    thunk_FUN_1400020e8(param_2,L"_Handheld",9);
  }
  _Str = (wchar_t *)FUN_1408bddb6(0);
  iVar1 = *(int *)(param_2 + 1);
  lVar10 = (longlong)iVar1;
  local_68 = (undefined2 *)0x0;
  puVar12 = *param_2;
  uStack_60 = CONCAT44(uStack_60._4_4_,iVar1);
  FUN_1446dd670(&local_68,(uint)(lVar10 == 0) + iVar1 + 1,0);
  if (lVar10 != 0) {
    memcpy(local_68,puVar12,lVar10 * 2);
  }
  FUN_140002184(&local_68);
  if (_Str == (wchar_t *)0x0) {
LAB_1408bdcd7:
    iStack_50 = (int)uStack_60;
    iStack_4c = uStack_60._4_4_;
    local_58 = local_68;
    local_68 = (undefined2 *)0x0;
  }
  else {
    sVar7 = wcslen(_Str);
    if ((int)sVar7 == 0) goto LAB_1408bdcd7;
    iVar1 = (int)uStack_60;
    iVar5 = (int)sVar7 + (uint)((int)uStack_60 == 0);
    local_58 = local_68;
    local_68 = (undefined2 *)0x0;
    iStack_50 = (int)uStack_60;
    iVar3 = uStack_60._4_4_;
    iStack_4c = uStack_60._4_4_;
    uStack_60 = 0;
    iVar9 = iVar5 + iVar1;
    if (iVar9 < iVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4((longlong)iVar5);
    }
    if (iVar9 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar9);
    }
    if (iVar3 < iVar9) {
      FUN_1446f8c06(&local_58);
    }
    FUN_1400020e8(&local_58,_Str,sVar7 & 0xffffffff);
    if (local_68 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  puVar12 = local_58;
  if (iStack_50 == 0) {
    puVar12 = &DAT_149dfb77a;
  }
  FUN_140002266(&local_68,L"%s DeviceProfile",puVar12);
  bVar2 = 1;
  if ((longlong)(int)uStack_40 != 0) {
    plVar6 = local_48;
LAB_1408bdbff:
    if ((int)plVar6[1] == (int)uStack_60) {
      if (1 < (int)uStack_60) {
        lVar10 = 0;
        do {
          uVar13 = *(ushort *)(*plVar6 + lVar10);
          uVar14 = (ulonglong)uVar13;
          uVar11 = *(ushort *)((longlong)local_68 + lVar10);
          if (uVar13 == uVar11) {
            if (uVar13 == 0) break;
          }
          else {
            if (0x7f < (uVar11 | uVar13)) goto LAB_1408bdc5f;
            uVar13 = (ushort)(byte)(&DAT_149e05da0)[uVar14];
            uVar15 = (ulonglong)uVar11;
            uVar11 = (ushort)(byte)(&DAT_149e05da0)[uVar15];
            if ((&DAT_149e05da0)[uVar14] != (&DAT_149e05da0)[uVar15]) goto LAB_1408bdc5f;
          }
          lVar10 = lVar10 + 2;
        } while( true );
      }
      goto LAB_1408bdc67;
    }
    if ((int)plVar6[1] + (int)uStack_60 == 1) goto LAB_1408bdc67;
    goto LAB_1408bdc11;
  }
LAB_1408bdc69:
  if (local_68 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((bool)(&local_58 == param_2 | bVar2)) {
    if (local_58 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_2 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    *param_2 = local_58;
    local_58 = (undefined2 *)0x0;
    *(int *)(param_2 + 1) = iStack_50;
    *(int *)((longlong)param_2 + 0xc) = iStack_4c;
  }
  FUN_1447a1747(local_48,uStack_40 & 0xffffffff);
  if (local_48 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_1408bdcb2:
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
LAB_1408bdc5f:
  if (uVar13 == uVar11) {
LAB_1408bdc67:
    bVar2 = 0;
    goto LAB_1408bdc69;
  }
LAB_1408bdc11:
  plVar6 = plVar6 + 2;
  if (plVar6 == local_48 + (longlong)(int)uStack_40 * 2) goto LAB_1408bdc69;
  goto LAB_1408bdbff;
}



// FUNCTION 1408bddb6 FUN_1408bddb6 body=185 status=ok
// SIG undefined FUN_1408bddb6(void)

wchar_t * FUN_1408bddb6(char param_1)

{
  wchar_t *pwVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  wchar_t *local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14ca83900 == 0) {
    FUN_1408be3a6(&local_24,&local_30);
    if (param_1 != '\0') {
      uVar2 = FUN_144a52528();
      FUN_1446f470e(&local_38,local_30,1);
      FUN_14156ce54(uVar2,local_38,0,1);
    }
    pwVar1 = L"ES31";
    if (local_24 != 1) {
      pwVar1 = local_30;
    }
  }
  else {
    pwVar1 = DAT_14ca85570;
    if (DAT_14c760db4 == 1) {
      pwVar1 = L"ES31";
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return pwVar1;
}



// FUNCTION 1408bde70 FUN_1408bde70 body=688 status=ok
// SIG undefined FUN_1408bde70(void)

undefined8 FUN_1408bde70(undefined8 param_1,undefined8 *param_2,longlong *param_3)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong lVar4;
  void *_Src;
  longlong *plVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint *puVar11;
  undefined2 *puVar12;
  longlong lVar13;
  int iVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  uint uVar17;
  undefined2 *puVar18;
  longlong lVar19;
  int iVar20;
  longlong lVar21;
  
  plVar5 = (longlong *)FUN_14052bcbc();
  uVar6 = 0;
  if (plVar5 != (longlong *)0x0) {
    AcquireSRWLockShared((PSRWLOCK)&DAT_14c866fe8);
    lVar19 = plVar5[1];
    iVar20 = *(int *)((longlong)plVar5 + 0x34);
    ReleaseSRWLockShared((PSRWLOCK)&DAT_14c866fe8);
    FUN_1408be27e(param_3,(int)lVar19 - iVar20);
    uVar17 = *(uint *)(plVar5 + 5);
    uVar6 = (ulonglong)uVar17;
    if (uVar17 == 0) {
      uVar16 = 1;
      uVar15 = 0;
      uVar8 = 0;
      iVar20 = 0;
    }
    else {
      puVar11 = (uint *)plVar5[4];
      if ((uint *)plVar5[4] == (uint *)0x0) {
        puVar11 = (uint *)(plVar5 + 2);
      }
      uVar8 = *puVar11;
      if (uVar8 == 0) {
        iVar20 = uVar17 + 0x1e;
        if (-1 < (int)(uVar17 - 1)) {
          iVar20 = uVar17 - 1;
        }
        uVar15 = 0;
        uVar16 = (ulonglong)(uint)(iVar20 >> 5);
        if (iVar20 >> 5 < 1) {
          uVar16 = uVar15;
        }
        iVar20 = 0;
        do {
          if (uVar16 == uVar15) goto LAB_1408be0be;
          iVar20 = iVar20 + 0x20;
          uVar8 = puVar11[uVar15 + 1];
          uVar15 = uVar15 + 1;
        } while (uVar8 == 0);
      }
      else {
        uVar15 = 0;
        iVar20 = 0;
      }
      uVar16 = (ulonglong)(-uVar8 & uVar8);
      uVar2 = uVar16 * 2 + 1;
      lVar19 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar19 == 0; lVar19 = lVar19 + -1) {
        }
      }
      uVar8 = (iVar20 - ((uint)lVar19 ^ 0x3f)) + 0x3e;
      if ((int)uVar17 <= (int)uVar8) {
        uVar8 = uVar17;
      }
    }
    if ((int)uVar8 < (int)uVar17) {
      uVar17 = 0xffffffff;
      do {
        lVar13 = (longlong)(int)uVar8 * 0xc0;
        lVar19 = *plVar5;
        iVar14 = (int)param_3[1];
        *(uint *)(param_3 + 1) = iVar14 + 1U;
        if (*(uint *)((longlong)param_3 + 0xc) < iVar14 + 1U) {
          FUN_1447a1bd6(param_3,iVar14);
        }
        lVar4 = *param_3;
        lVar21 = (longlong)iVar14 * 0x10;
        puVar1 = (undefined8 *)(lVar4 + lVar21);
        *(undefined8 *)(lVar4 + lVar21) = 0;
        iVar14 = *(int *)((undefined8 *)(lVar19 + lVar13) + 1);
        _Src = *(void **)(lVar19 + lVar13);
        *(int *)(lVar4 + 8 + lVar21) = iVar14;
        if ((longlong)iVar14 == 0) {
          *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
        }
        else {
          FUN_1446dd670(puVar1,iVar14,0);
          memcpy((void *)*puVar1,_Src,(longlong)iVar14 * 2);
        }
        uVar7 = FUN_1408be120();
        puVar12 = &DAT_149dfb77a;
        puVar18 = &DAT_149dfb77a;
        if (*(int *)(*plVar5 + 8 + lVar13) != 0) {
          puVar18 = *(undefined2 **)(*plVar5 + lVar13);
        }
        if (*(int *)(param_2 + 1) != 0) {
          puVar12 = (undefined2 *)*param_2;
        }
        FUN_1408be1b6(uVar7,puVar12,puVar18);
        uVar17 = uVar17 & ~(uint)uVar16;
        puVar11 = (uint *)plVar5[4];
        if ((uint *)plVar5[4] == (uint *)0x0) {
          puVar11 = (uint *)(plVar5 + 2);
        }
        uVar3 = *(uint *)(plVar5 + 5);
        uVar6 = (ulonglong)uVar3;
        iVar14 = (int)uVar15;
        lVar19 = (longlong)iVar14;
        uVar8 = puVar11[lVar19] & uVar17;
        if (uVar8 == 0) {
          iVar9 = uVar3 + 0x1e;
          if (-1 < (int)(uVar3 - 1)) {
            iVar9 = uVar3 - 1;
          }
          iVar9 = iVar9 >> 5;
          iVar10 = iVar9;
          if (iVar9 < iVar14) {
            iVar10 = iVar14;
          }
          if (iVar9 <= iVar14) break;
          lVar13 = 0;
          while( true ) {
            iVar20 = iVar20 + 0x20;
            uVar8 = puVar11[lVar19 + lVar13 + 1];
            if (uVar8 != 0) break;
            lVar13 = lVar13 + 1;
            if (iVar10 - lVar19 == lVar13) goto LAB_1408be0be;
          }
          uVar15 = (ulonglong)(iVar14 + (int)lVar13 + 1);
          uVar17 = 0xffffffff;
        }
        uVar16 = (ulonglong)(-uVar8 & uVar8);
        uVar2 = uVar16 * 2 + 1;
        lVar19 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar19 == 0; lVar19 = lVar19 + -1) {
          }
        }
        uVar8 = (iVar20 - ((uint)lVar19 ^ 0x3f)) + 0x3e;
      } while ((int)uVar8 < (int)uVar3);
    }
  }
LAB_1408be0be:
  return CONCAT71((int7)(uVar6 >> 8),plVar5 != (longlong *)0x0);
}



// FUNCTION 1408be120 FUN_1408be120 body=149 status=ok
// SIG undefined FUN_1408be120(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1408be120(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c867900) {
    FUN_144b3d300(&DAT_14c867900);
    if (DAT_14c867900 == -1) {
      InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14c8678c0);
      SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14c8678c0,4000);
      DAT_14c8678e8 = 0;
      _DAT_14c8678f0 = 0;
      _DAT_14c8678f8 = 2;
      atexit(FUN_14277fb5f);
      _Init_thread_footer(&DAT_14c867900);
    }
  }
  return &DAT_14c8678c0;
}



// FUNCTION 1408be1b6 FUN_1408be1b6 body=200 status=ok
// SIG undefined FUN_1408be1b6(void)

void FUN_1408be1b6(LPCRITICAL_SECTION param_1,undefined8 param_2,undefined8 param_3)

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
      while (((*(int *)((longlong)&(param_1[1].DebugInfo)->Type + lVar8) != 0 &&
              (plVar3 = *(longlong **)((longlong)param_1[1].DebugInfo + lVar8 + -8),
              plVar3 != (longlong *)0x0)) &&
             (cVar5 = (**(code **)(*plVar3 + 0x60))(plVar3,param_2,param_3), cVar5 != '\0'))) {
        lVar8 = lVar8 + -0x10;
        bVar4 = uVar9 < 2;
        uVar9 = uVar9 - 1;
        if (bVar4) {
          piVar1 = (int *)((longlong)&param_1[1].OwningThread + 4);
          *piVar1 = *piVar1 + -1;
          if (bVar7) goto LAB_1408be26f;
          goto LAB_1408be1e6;
        }
      }
      uVar6 = uVar9 - 1;
      bVar7 = true;
    } while (1 < uVar9);
    piVar1 = (int *)((longlong)&param_1[1].OwningThread + 4);
    *piVar1 = *piVar1 + -1;
LAB_1408be26f:
    FUN_14109be94(param_1,0);
  }
LAB_1408be1e6:
  if (param_1 == (LPCRITICAL_SECTION)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001408be1fa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(param_1);
  return;
}



// FUNCTION 1408be27e FUN_1408be27e body=69 status=ok
// SIG undefined FUN_1408be27e(void)

void FUN_1408be27e(undefined8 *param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  FUN_1447a1747(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_1408be2c4(param_1,param_2);
    return;
  }
  return;
}



// FUNCTION 1408be2c4 FUN_1408be2c4 body=226 status=ok
// SIG undefined FUN_1408be2c4(void)

void FUN_1408be2c4(longlong param_1,int param_2)

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



// FUNCTION 1408be3a6 FUN_1408be3a6 body=9435 status=ok
// SIG undefined FUN_1408be3a6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong ***** FUN_1408be3a6(int *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 uVar5;
  int iVar6;
  char cVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  char cVar11;
  ulong uVar12;
  uint uVar13;
  int iVar14;
  DWORD DVar15;
  DWORD DVar16;
  longlong *plVar17;
  ulonglong *puVar18;
  longlong lVar19;
  ulonglong uVar20;
  longlong *****ppppplVar21;
  longlong ****pppplVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  int iVar25;
  longlong lVar26;
  wchar_t *pwVar27;
  longlong *****ppppplVar28;
  uint uVar29;
  longlong lVar30;
  undefined4 uVar31;
  uint uVar32;
  longlong ****unaff_RDI;
  undefined7 uVar34;
  undefined2 *puVar33;
  ushort uVar35;
  ulonglong uVar36;
  ushort uVar37;
  longlong *****ppppplVar38;
  bool bVar39;
  undefined1 auStack_2f8 [32];
  longlong ****local_2d8;
  longlong ****local_2d0;
  uint local_2bc;
  ulonglong local_2b8;
  undefined8 local_2b0;
  int *local_2a8;
  undefined4 local_29c;
  undefined8 *local_298;
  undefined8 local_290;
  void *local_288;
  int local_280;
  undefined4 local_27c;
  byte local_271;
  longlong ****local_270;
  longlong *local_268;
  longlong *local_260 [2];
  char local_249;
  undefined2 *local_248;
  undefined8 uStack_240;
  longlong ****local_238;
  int local_230;
  longlong ****local_228;
  undefined8 uStack_220;
  longlong ****local_218;
  longlong *plStack_210;
  longlong ****local_208;
  undefined8 uStack_200;
  longlong ****local_1f8;
  undefined8 uStack_1f0;
  longlong ****local_1e8;
  int local_1e0;
  longlong ****local_1d8;
  longlong *plStack_1d0;
  longlong ****local_1c8;
  undefined4 *puStack_1c0;
  int local_1ac;
  longlong ***local_1a8;
  ulonglong uStack_1a0;
  uint local_190;
  char local_18c;
  undefined1 local_188 [16];
  longlong local_178;
  longlong local_170 [17];
  undefined8 local_e8;
  ulonglong uStack_e0;
  longlong *local_d8 [2];
  undefined4 local_c8 [4];
  undefined1 local_b8 [16];
  undefined4 local_a8 [18];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_2f8;
  local_298 = param_2;
  FUN_1431d79ba();
  local_271 = 0;
  local_2d8 = (longlong ****)&DAT_14c872b08;
  cVar7 = FUN_14052bb08(DAT_14c872ce0,L"D3DRHIPreference",L"bUseGPUCrashDebugging");
  if (cVar7 != '\0') {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar17 = (longlong *)
              (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.GPUCrashDebugging",1);
    if (plVar17 == (longlong *)0x0) {
      puVar18 = (ulonglong *)0x0;
    }
    else {
      puVar18 = (ulonglong *)(**(code **)(*plVar17 + 0x68))(plVar17);
    }
    *puVar18 = (ulonglong)local_271 << 0x20 | (ulonglong)local_271;
  }
  local_2a8 = param_1;
  FUN_145a5b8a0(&local_190);
  if (local_18c == '\0') {
    lVar19 = 0;
    do {
      uVar23 = (ulonglong)*(uint *)((longlong)&DAT_14a3813e0 + lVar19);
      if ((longlong)(int)local_170[uVar23 * 4] != 0) {
        lVar26 = 0;
        iVar25 = 0;
        do {
          iVar14 = *(int *)(local_170[uVar23 * 4 + -1] + lVar26);
          if (*(int *)(local_170[uVar23 * 4 + -1] + lVar26) < iVar25) {
            iVar14 = iVar25;
          }
          iVar25 = iVar14;
          lVar26 = lVar26 + 4;
        } while ((longlong)(int)local_170[uVar23 * 4] * 4 != lVar26);
        bVar8 = 1;
        local_2b8 = uVar23;
        do {
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110)
               < DAT_14ca85588) && (FUN_144b3d300(&DAT_14ca85588), DAT_14ca85588 == -1)) {
            FUN_14692a590(&DAT_14ca85578);
            _Init_thread_footer(&DAT_14ca85588);
          }
          uVar4 = DAT_14ca8557c;
          if (((int)uVar23 != 1) || (iVar25 != 4)) {
            if (((int)uVar23 == 1) && (3 < iVar25)) goto LAB_1408be659;
LAB_1408be78a:
            if ((bVar8 & 1) != 0) goto LAB_1408be48a;
            break;
          }
          local_e8 = (wchar_t *)0x0;
          uStack_e0 = 0;
          local_2d8 = (longlong ****)&DAT_14c872ce8;
          FUN_14105aa76(DAT_14c872ce0,L"D3D12_SM6",L"SM6PreferredGPUDeviceIDs",&local_e8);
          pppplVar22 = (longlong ****)local_e8;
          lVar26 = (longlong)(int)uStack_e0;
          if (lVar26 == 0) {
            bVar39 = true;
          }
          else {
            lVar30 = 0;
            do {
              pwVar27 = L"";
              if (*(int *)((longlong)pppplVar22 + lVar30 + 8) != 0) {
                pwVar27 = *(wchar_t **)((longlong)pppplVar22 + lVar30);
              }
              bVar39 = false;
              uVar12 = wcstoul(pwVar27,(wchar_t **)0x0,10);
              if (uVar12 == uVar4) goto LAB_1408be623;
              pwVar27 = L"";
              if (*(int *)((longlong)pppplVar22 + lVar30 + 8) != 0) {
                pwVar27 = *(wchar_t **)((longlong)pppplVar22 + lVar30);
              }
              bVar39 = false;
              uVar12 = wcstoul(pwVar27,(wchar_t **)0x0,0x10);
              if (uVar12 == uVar4) goto LAB_1408be623;
              lVar30 = lVar30 + 0x10;
            } while (lVar26 * 0x10 != lVar30);
            bVar39 = true;
          }
LAB_1408be623:
          unaff_RDI = (longlong ****)local_e8;
          FUN_1447a1747(local_e8);
          if ((longlong ****)local_e8 != (longlong ****)0x0) {
            FUN_1400020a8();
          }
          uVar23 = local_2b8;
          if (!bVar39) goto LAB_1408be78a;
LAB_1408be659:
          local_e8 = (wchar_t *)((ulonglong)local_e8 & 0xffffffff00000000);
          local_2d8 = (longlong ****)&DAT_14c872ce8;
          cVar7 = FUN_1414d73b6(DAT_14c872ce0,L"D3D12_SM6",L"MinDedicatedMemory",&local_e8);
          uVar34 = (undefined7)((ulonglong)unaff_RDI >> 8);
          unaff_RDI = (longlong ****)CONCAT71(uVar34,1);
          if (cVar7 != '\0') {
            unaff_RDI = (longlong ****)
                        CONCAT71(uVar34,(ulonglong)((longlong)(int)local_e8 << 0x14) <=
                                        DAT_14ca85580);
          }
          local_1a8 = (longlong ***)CONCAT71(local_1a8._1_7_,1);
          local_2d8 = (longlong ****)&DAT_14c872ce8;
          FUN_14052bb08(DAT_14c872ce0,L"D3D12_SM6",L"bUseSM5PreferredGPUList",&local_1a8);
          if ((byte)local_1a8 == '\x01') {
            if (DAT_14ca8557c == 0x1b80) {
              bVar39 = false;
            }
            else {
              uVar20 = 0;
              do {
                uVar24 = uVar20;
                if (uVar24 == 0xe) break;
                uVar20 = uVar24 + 1;
              } while ((&DAT_14a381664)[uVar24] != DAT_14ca8557c);
              bVar39 = 0xd < uVar24;
            }
            unaff_RDI = (longlong ****)
                        CONCAT71((int7)((ulonglong)unaff_RDI >> 8),(char)unaff_RDI != '\0' & bVar39)
            ;
          }
          if ((char)unaff_RDI != '\0') goto LAB_1408be78a;
          FUN_1474147e2(&local_190,&local_e8,uVar23 & 0xffffffff,iVar25);
          bVar8 = local_e8._4_1_;
          iVar25 = (int)local_e8;
        } while (local_e8._4_1_ != 0);
      }
      lVar19 = lVar19 + 4;
    } while (lVar19 != 0x10);
    uVar23 = 0;
LAB_1408be7a4:
    unaff_RDI = (longlong ****)&DAT_14c872b08;
    local_1a8 = (longlong ***)((ulonglong)local_1a8 & 0xffffffffffffff00);
    local_1c8 = (longlong ****)((ulonglong)local_1c8 & 0xffffffffffffff00);
    local_e8 = (wchar_t *)0x0;
    uStack_e0 = 0;
    local_2d8 = (longlong ****)&DAT_14c872b08;
    cVar7 = FUN_1449da20c(DAT_14c872ce0,L"D3DRHIPreference",L"PreferredRHI");
    if (cVar7 == '\0') {
      local_2d8 = (longlong ****)&DAT_14c872b08;
      cVar7 = FUN_14052bb08(DAT_14c872ce0,L"D3DRHIPreference",L"bUseD3D12InGame",&local_1a8);
      if (cVar7 != '\0') {
        local_2d8 = (longlong ****)&DAT_14c872b08;
        cVar7 = FUN_14052bb08(DAT_14c872ce0,L"D3DRHIPreference",L"bPreferFeatureLevelES31",
                              &local_1c8);
        if (cVar7 != '\0') {
          local_2bc = (uint)(byte)local_1a8;
          uVar13 = 1;
          if (local_2bc == 0) {
            uVar13 = (uint)(byte)local_1c8;
          }
          local_2b0 = (longlong *****)CONCAT44(local_2b0._4_4_,uVar13);
          goto LAB_1408be9f7;
        }
      }
      local_2b0 = (longlong *****)((ulonglong)local_2b0._4_4_ << 0x20);
    }
    else {
      pppplVar22 = (longlong ****)local_e8;
      if ((int)uStack_e0 == 0) {
        pppplVar22 = (longlong ****)&DAT_149dfb77a;
      }
      lVar19 = 0;
      while( true ) {
        uVar35 = *(ushort *)((longlong)pppplVar22 + lVar19);
        uVar20 = (ulonglong)uVar35;
        uVar37 = *(ushort *)((longlong)&DAT_14a3816b6 + lVar19);
        uVar34 = (undefined7)((ulonglong)pppplVar22 >> 8);
        if (uVar35 != uVar37) {
          if ((uVar37 | uVar35) < 0x80) {
            uVar35 = (ushort)(byte)(&DAT_149e05da0)[uVar20];
            uVar24 = (ulonglong)uVar37;
            uVar37 = (ushort)(byte)(&DAT_149e05da0)[uVar24];
            if ((&DAT_149e05da0)[uVar20] == (&DAT_149e05da0)[uVar24]) goto LAB_1408be8c2;
          }
          local_2b0 = (longlong *****)
                      CONCAT44(local_2b0._4_4_,(int)CONCAT71((int7)((ulonglong)lVar19 >> 8),1));
          if (uVar35 == uVar37) goto LAB_1408be9ef;
          lVar19 = 0;
          goto LAB_1408be901;
        }
        if (uVar35 == 0) break;
LAB_1408be8c2:
        lVar19 = lVar19 + 2;
      }
      local_2b0 = (longlong *****)CONCAT44(local_2b0._4_4_,(int)CONCAT71(uVar34,1));
LAB_1408be9ef:
      local_2bc = 1;
    }
    goto LAB_1408be9f7;
  }
  uVar23 = (ulonglong)local_190;
LAB_1408be48a:
  if ((uint)uVar23 < 2) goto LAB_1408be7a4;
  local_2b0 = (longlong *****)((ulonglong)local_2b0 & 0xffffffff00000000);
  goto LAB_1408bea09;
LAB_1408be901:
  uVar35 = *(ushort *)((longlong)pppplVar22 + lVar19);
  uVar20 = (ulonglong)uVar35;
  uVar37 = *(ushort *)((longlong)&DAT_14a3816c0 + lVar19);
  if (uVar35 == uVar37) {
    if (uVar35 == 0) goto LAB_1408bffc2;
LAB_1408be91a:
    lVar19 = lVar19 + 2;
    goto LAB_1408be901;
  }
  if ((uVar37 | uVar35) < 0x80) {
    uVar35 = (ushort)(byte)(&DAT_149e05da0)[uVar20];
    uVar24 = (ulonglong)uVar37;
    uVar37 = (ushort)(byte)(&DAT_149e05da0)[uVar24];
    if ((&DAT_149e05da0)[uVar20] == (&DAT_149e05da0)[uVar24]) goto LAB_1408be91a;
  }
  if (uVar35 != uVar37) {
    lVar19 = 0;
    goto LAB_1408be953;
  }
LAB_1408bffc2:
  local_2bc = 0;
  goto LAB_1408be9f7;
LAB_1408be953:
  uVar35 = *(ushort *)((longlong)pppplVar22 + lVar19);
  uVar20 = (ulonglong)uVar35;
  uVar37 = *(ushort *)((longlong)&DAT_14a3816ca + lVar19);
  if (uVar35 == uVar37) {
    if (uVar35 == 0) goto LAB_1408c05cc;
LAB_1408be96c:
    lVar19 = lVar19 + 2;
    goto LAB_1408be953;
  }
  if ((uVar37 | uVar35) < 0x80) {
    uVar35 = (ushort)(byte)(&DAT_149e05da0)[uVar20];
    uVar24 = (ulonglong)uVar37;
    uVar37 = (ushort)(byte)(&DAT_149e05da0)[uVar24];
    if ((&DAT_149e05da0)[uVar20] == (&DAT_149e05da0)[uVar24]) goto LAB_1408be96c;
  }
  if (uVar35 != uVar37) {
    lVar19 = 0;
    goto LAB_1408be9a6;
  }
LAB_1408c05cc:
  local_2bc = 2;
  goto LAB_1408be9f7;
LAB_1408be9a6:
  uVar35 = *(ushort *)((longlong)pppplVar22 + lVar19);
  uVar13 = (uint)uVar35;
  uVar37 = *(ushort *)((longlong)L"opengl" + lVar19);
  uVar29 = (uint)uVar37;
  if (uVar35 != uVar37) {
    if ((uVar37 | uVar35) < 0x80) {
      uVar13 = (uint)(byte)(&DAT_149e05da0)[uVar35];
      uVar29 = (uint)(byte)(&DAT_149e05da0)[uVar37];
      if ((&DAT_149e05da0)[uVar35] == (&DAT_149e05da0)[uVar37]) goto LAB_1408be9be;
    }
    iVar25 = uVar13 - uVar29;
    goto LAB_1408c062a;
  }
  if (uVar35 == 0) goto LAB_1408c0628;
LAB_1408be9be:
  lVar19 = lVar19 + 2;
  goto LAB_1408be9a6;
LAB_1408c0628:
  iVar25 = 0;
LAB_1408c062a:
  local_2b0 = (longlong *****)CONCAT44(local_2b0._4_4_,(int)CONCAT71(uVar34,iVar25 == 0));
  local_2bc = 3;
LAB_1408be9f7:
  if ((longlong ****)local_e8 != (longlong ****)0x0) {
    FUN_1400020a8();
  }
LAB_1408bea09:
  if (DAT_14ca8558c == '\0') {
    DAT_14ca8558c = '\x01';
  }
  if (DAT_14c846b14 == '\0') {
    FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                  L"Attempting to get the command line but it hasn\'t been initialized yet.");
  }
  cVar7 = FUN_14054d46e(&DAT_14c846b20,&DAT_14a381736);
  if (cVar7 == '\0') {
    if (DAT_14c846b14 == '\0') {
      FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                    L"Attempting to get the command line but it hasn\'t been initialized yet.");
    }
    cVar7 = FUN_14054d46e(&DAT_14c846b20,L"FeatureLevelES31");
    if (cVar7 != '\0') goto LAB_1408bea89;
    if (DAT_14c846b14 == '\0') {
      FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                    L"Attempting to get the command line but it hasn\'t been initialized yet.");
    }
    cVar7 = FUN_14054d46e(&DAT_14c846b20,L"FeatureLevelES3_1");
    if (cVar7 != '\0') goto LAB_1408bea89;
    uVar31 = 0;
  }
  else {
LAB_1408bea89:
    uVar31 = (undefined4)CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
  }
  if (DAT_14c846b14 == '\0') {
    FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                  L"Attempting to get the command line but it hasn\'t been initialized yet.");
  }
  local_2b8 = uVar23;
  uVar13 = FUN_14054d46e(&DAT_14c846b20,&DAT_149e047b6);
  ppppplVar38 = (longlong *****)(ulonglong)uVar13;
  uVar23 = (ulonglong)((uVar13 & 0xff) * 2 + 1);
  if (DAT_14c846b14 == '\0') {
    FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                  L"Attempting to get the command line but it hasn\'t been initialized yet.");
  }
  bVar8 = FUN_14054d46e(&DAT_14c846b20,&DAT_14a381740);
  if (bVar8 != 0) {
    uVar23 = 4;
  }
  iVar25 = (int)uVar23;
  if (DAT_14c846b14 == '\0') {
    FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                  L"Attempting to get the command line but it hasn\'t been initialized yet.");
  }
  bVar9 = FUN_14054d46e(&DAT_14c846b20,&DAT_14a3816ca);
  if (DAT_14c846b14 == '\0') {
    FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                  L"Attempting to get the command line but it hasn\'t been initialized yet.");
  }
  bVar10 = FUN_14054d46e(&DAT_14c846b20,L"opengl");
  uVar29 = bVar9 + 1;
  if (bVar10 == 0) {
    uVar29 = (uint)bVar9;
  }
  if (DAT_14c846b14 == '\0') {
    FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                  L"Attempting to get the command line but it hasn\'t been initialized yet.");
  }
  cVar7 = FUN_14054d46e(&DAT_14c846b20,L"d3d11");
  if (cVar7 == '\0') {
    if (DAT_14c846b14 == '\0') {
      FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                    L"Attempting to get the command line but it hasn\'t been initialized yet.");
    }
    cVar7 = FUN_14054d46e(&DAT_14c846b20,&DAT_14a3816c0);
    if (cVar7 != '\0') goto LAB_1408beb8a;
    uVar32 = bVar10 | 2;
    bVar9 = bVar9 | bVar10;
  }
  else {
LAB_1408beb8a:
    uVar29 = uVar29 + 1;
    uVar32 = 0;
    bVar9 = 1;
  }
  if (DAT_14c846b14 == '\0') {
    FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                  L"Attempting to get the command line but it hasn\'t been initialized yet.");
  }
  cVar7 = FUN_14054d46e(&DAT_14c846b20);
  if (cVar7 == '\0') {
    if (DAT_14c846b14 == '\0') {
      FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                    L"Attempting to get the command line but it hasn\'t been initialized yet.");
    }
    cVar7 = FUN_14054d46e(&DAT_14c846b20);
    if (cVar7 != '\0') goto LAB_1408bebe5;
  }
  else {
LAB_1408bebe5:
    uVar29 = uVar29 + 1;
    uVar32 = 1;
    bVar9 = 1;
  }
  if (DAT_14ca8558c == '\0') {
    DAT_14ca8558c = '\x01';
  }
  bVar8 = (byte)uVar31 | (byte)uVar13 | bVar8;
  uVar31 = CONCAT31((int3)((uint)uVar31 >> 8),bVar8);
  if (1 < uVar29) {
    local_e8 = L"RHIOptionsError";
    uStack_e0._0_4_ = 0xf;
    FUN_1446e940c(&local_1c8,&local_e8);
    local_e8 = L"WindowsDynamicRHI";
    uStack_e0._0_4_ = 0x11;
    FUN_1446e940c(&local_1d8,&local_e8);
    local_e8 = 
    L"-d3d12/dx12, -d3d11/dx11, -vulkan, -opengl, and -platformrhi are mutually exclusive options, but more than one was specified on the command-line."
    ;
    uStack_e0 = CONCAT44(uStack_e0._4_4_,0x91);
    ppppplVar38 = (longlong *****)&local_1a8;
    FUN_140208c1e(ppppplVar38,&local_1d8,&local_1c8,&local_e8);
    FUN_1427863e0();
    FUN_1427864dc(0,0,ppppplVar38,&DAT_14c873210);
    if ((longlong ****)local_1a8 != (longlong ****)0x0) {
      (*(code *)(*local_1a8)[2])();
    }
    FUN_140033559(".\\Runtime/RHI/Private/Windows/WindowsDynamicRHI.cpp",0x317,
                  L"-d3d12, -d3d11, -vulkan, -opengl, and -platformrhi are mutually exclusive options, but more than one was specified on the command-line."
                 );
  }
  local_29c = uVar31;
  if (bVar8 == 0) {
    uVar23 = local_2b8 & 0xffffffff;
    if (((ulonglong)local_2b0 & 1) != 0) {
      uVar23 = (ulonglong)local_2bc;
    }
    if (bVar9 != 0) {
      uVar23 = (ulonglong)uVar32;
    }
  }
  else {
    if (bVar9 == 0) {
      lVar19 = 0;
      do {
        uVar13 = *(uint *)((longlong)&DAT_14a3813e0 + lVar19);
        if ((longlong)(int)local_170[(ulonglong)uVar13 * 4] != 0) {
          lVar26 = 0;
          do {
            if (*(int *)(local_170[(ulonglong)uVar13 * 4 + -1] + lVar26) == iVar25) {
              bVar9 = 1;
              uVar32 = uVar13;
              goto LAB_1408bf007;
            }
            lVar26 = lVar26 + 4;
          } while ((longlong)(int)local_170[(ulonglong)uVar13 * 4] * 4 != lVar26);
        }
        lVar19 = lVar19 + 4;
      } while (lVar19 != 0x10);
    }
    else {
      lVar19 = (longlong)*(int *)((longlong)local_170 + (ulonglong)(uVar32 << 5));
      if (lVar19 != 0) {
        lVar26 = 0;
        do {
          if (*(int *)(*(longlong *)((longlong)local_170 + ((ulonglong)(uVar32 << 5) - 8)) + lVar26)
              == iVar25) goto LAB_1408bf007;
          lVar26 = lVar26 + 4;
        } while (lVar19 * 4 != lVar26);
      }
      FUN_147414a89(&local_1f8,uVar23);
      FUN_147414c35(&local_208,uVar32);
      local_e8 = L"RHINotSupported";
      uStack_e0._0_4_ = 0xf;
      FUN_1446e940c(&local_238,&local_e8);
      local_e8 = L"WindowsDynamicRHI";
      uStack_e0._0_4_ = 0x11;
      FUN_1446e940c(&local_248,&local_e8);
      local_e8 = L"{0} does not support {1}.";
      uStack_e0 = CONCAT44(uStack_e0._4_4_,0x19);
      ppppplVar38 = (longlong *****)&local_e8;
      FUN_140208c1e(&local_228,&local_248,&local_238);
      FUN_14023409e(&local_218,&local_228,1);
      local_e8 = (wchar_t *)CONCAT44(local_e8._4_4_,4);
      FUN_14023423e(local_d8,&local_208);
      local_c8[0] = 4;
      FUN_14023423e(local_b8,&local_1f8);
      puStack_1c0 = local_a8;
      local_1c8 = (longlong ****)ppppplVar38;
      FUN_14010d304(&local_1a8);
      local_1d8 = local_218;
      plStack_1d0 = plStack_210;
      if (plStack_210 != (longlong *)0x0) {
        LOCK();
        *(int *)(plStack_210 + 1) = (int)plStack_210[1] + 1;
        UNLOCK();
      }
      FUN_14010c016(&local_1e8,&local_1d8,&local_1a8);
      FUN_14007f2db(local_1a8,uStack_1a0 & 0xffffffff);
      if ((longlong ****)local_1a8 != (longlong ****)0x0) {
        FUN_1400020a8();
      }
      lVar19 = 0x30;
      do {
        if (*(longlong **)((longlong)&local_e8 + lVar19) != (longlong *)0x0) {
          (**(code **)(**(longlong **)((longlong)&local_e8 + lVar19) + 0x10))();
          *(undefined8 *)((longlong)&local_e8 + lVar19) = 0;
          *(undefined4 *)((longlong)local_d8 + lVar19 + -8) = 0;
        }
        plVar17 = plStack_210;
        lVar19 = lVar19 + -0x20;
      } while (lVar19 != -0x10);
      if (plStack_210 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_210 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plStack_210)(plStack_210);
          LOCK();
          piVar2 = (int *)((longlong)plVar17 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar17 + 0x10))(plVar17);
          }
        }
      }
      if ((longlong *****)local_208 != (longlong *****)0x0) {
        (*(code *)(*local_208)[2])();
      }
      if ((longlong *****)local_1f8 != (longlong *****)0x0) {
        (*(code *)(*local_1f8)[2])();
      }
      FUN_1427863e0();
      FUN_1427864dc(0,0,&local_1e8,&DAT_14c873210);
      if ((longlong *****)local_1e8 != (longlong *****)0x0) {
        (*(code *)(*local_1e8)[2])();
      }
      if ((longlong *****)local_228 != (longlong *****)0x0) {
        (*(code *)(*local_228)[2])();
      }
      local_2d8 = *(longlong *****)
                   (L"/Script/WindowsTargetPlatform.WindowsTargetSettings" + uVar23 * 4 + 0x31);
      FUN_140033559(".\\Runtime/RHI/Private/Windows/WindowsDynamicRHI.cpp",0x323,
                    L"%s does not support %s.",(&PTR_DAT_14a3822a0)[uVar32]);
    }
LAB_1408bf007:
    uVar23 = local_2b8 & 0xffffffff;
    if (((ulonglong)local_2b0 & 1) != 0) {
      uVar23 = (ulonglong)local_2bc;
    }
    if (bVar9 != 0) {
      uVar23 = (ulonglong)uVar32;
    }
    if ((longlong)(int)local_170[uVar23 * 4] != 0) {
      lVar19 = 0;
      do {
        if (*(int *)(local_170[uVar23 * 4 + -1] + lVar19) == iVar25) goto LAB_1408bf3f3;
        lVar19 = lVar19 + 4;
      } while ((longlong)(int)local_170[uVar23 * 4] * 4 != lVar19);
    }
  }
  local_248 = (undefined2 *)0x0;
  uStack_240 = 0;
  iVar25 = 0x4c872b08;
  local_2d8 = (longlong ****)&DAT_14c872b08;
  cVar7 = FUN_1449da20c(DAT_14c872ce0,L"D3DRHIPreference",L"PreferredFeatureLevel");
  if (cVar7 == '\0') {
    if ((longlong)(int)local_170[uVar23 * 4] != 0) {
      lVar19 = 0;
      do {
        if (*(int *)(local_170[uVar23 * 4 + -1] + lVar19) == 1) {
          local_249 = '\0';
          local_2d8 = (longlong ****)&DAT_14c872b08;
          cVar11 = FUN_14052bb08(DAT_14c872ce0,L"D3DRHIPreference",L"bPreferFeatureLevelES31");
          lVar19 = DAT_14ca85568;
          cVar7 = local_249;
          if (cVar11 != '\0') goto LAB_1408bf357;
          local_2b8 = CONCAT44(local_2b8._4_4_,uVar32);
          iVar25 = *(int *)(*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0xc60);
          if (iVar25 == 0x40000002) {
            uVar20 = 0;
          }
          else {
            bVar39 = true;
            if ((DAT_14c86a9f8 == '\x01') && (iVar25 != 2)) {
              if (iVar25 == 1) {
                DVar15 = FUN_140ad26c0();
                DVar16 = GetCurrentThreadId();
                bVar39 = DVar15 == DVar16;
              }
              else {
                bVar39 = false;
              }
            }
            uVar20 = (ulonglong)(bVar39 ^ 1);
          }
          uVar32 = (uint)local_2b8;
          if (*(char *)(lVar19 + uVar20) != '\0') {
            bVar8 = 0;
            goto LAB_1408bf33d;
          }
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110)
               < DAT_14ca85590) && (FUN_144b3d300(&DAT_14ca85590), DAT_14ca85590 == -1)) {
            DAT_14ca8558e = '\0';
            atexit((_func_5014 *)&LAB_1431f0a65);
            _Init_thread_footer(&DAT_14ca85590);
          }
          bVar8 = DAT_14ca8558d;
          if (DAT_14ca8558e == '\x01') goto LAB_1408bf33d;
          local_1ac = 0;
          local_2d8 = (longlong ****)&DAT_14c872ce8;
          cVar7 = FUN_1414d73b6(DAT_14c872ce0,L"PerformanceMode",L"MinCoreCount");
          if (cVar7 != '\0') {
            if (DAT_14c8c27ac < 1) {
              ppppplVar38 = (longlong *****)0x0;
              memset(&local_e8,0,0x82);
              local_1a8 = (longlong ***)((ulonglong)local_1a8 & 0xffffffff00000000);
              local_1c8 = (longlong ****)((ulonglong)local_1c8 & 0xffffffff00000000);
              local_1d8 = (longlong ****)((ulonglong)local_1d8 & 0xffffffff00000000);
              FUN_140e55932(&local_e8,&local_1a8,&local_1c8,&local_1d8);
              iVar25 = (int)local_1d8;
              local_2d0 = (longlong ****)&local_218;
              local_2d8 = (longlong ****)&local_1f8;
              FUN_1457b80ec((ulonglong)local_1c8 & 0xffffffff,(ulonglong)local_1d8 & 0xffffffff,
                            &local_208);
              DAT_14c8c27ac = iVar25;
              if ((0 < (int)local_1f8) && ((int)local_1f8 <= iVar25)) {
                DAT_14c8c27ac = (int)local_1f8;
              }
              uVar32 = (uint)local_2b8;
            }
            if (DAT_14c8c27ac < local_1ac) {
              DAT_14ca8558d = 1;
              DAT_14ca8558e = '\x01';
              bVar8 = 1;
              goto LAB_1408bf33d;
            }
          }
          FUN_14692a590(&local_e8);
          local_1a8 = (longlong ***)0x0;
          uStack_1a0 = 0;
          local_1c8 = (longlong ****)0x0;
          puStack_1c0 = (undefined4 *)0x0;
          local_2d8 = (longlong ****)&DAT_14c872ce8;
          cVar7 = FUN_1449da20c(DAT_14c872ce0,L"PerformanceMode",L"MinMemorySizeBucket");
          if (cVar7 == '\0') goto LAB_1408c017b;
          local_2d8 = (longlong ****)&DAT_14c872ce8;
          cVar7 = FUN_1449da20c(DAT_14c872ce0,L"PerformanceMode",L"MinIntegratedMemorySizeBucket");
          uVar20 = uStack_e0;
          if (cVar7 == '\0') goto LAB_1408c017b;
          uVar24 = 0;
          goto LAB_1408c0094;
        }
        lVar19 = lVar19 + 4;
      } while ((longlong)(int)local_170[uVar23 * 4] * 4 != lVar19);
    }
    cVar7 = '\0';
  }
  else {
    puVar33 = local_248;
    if ((int)uStack_240 == 0) {
      puVar33 = &DAT_149dfb77a;
    }
    lVar19 = 0;
    while( true ) {
      uVar35 = *(ushort *)((longlong)puVar33 + lVar19);
      uVar20 = (ulonglong)uVar35;
      uVar37 = *(ushort *)((longlong)&DAT_149e047b6 + lVar19);
      if (uVar35 != uVar37) break;
      if (uVar35 == 0) goto LAB_1408bf1e2;
LAB_1408bf10d:
      lVar19 = lVar19 + 2;
    }
    if ((uVar37 | uVar35) < 0x80) {
      uVar35 = (ushort)(byte)(&DAT_149e05da0)[uVar20];
      uVar24 = (ulonglong)uVar37;
      uVar37 = (ushort)(byte)(&DAT_149e05da0)[uVar24];
      if ((&DAT_149e05da0)[uVar20] == (&DAT_149e05da0)[uVar24]) goto LAB_1408bf10d;
    }
    cVar7 = '\x01';
    if (uVar35 != uVar37) {
      lVar19 = 0;
      goto LAB_1408bf142;
    }
LAB_1408bf1e2:
    cVar7 = '\x01';
    iVar25 = 3;
  }
LAB_1408bf35d:
  if (local_248 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (cVar7 == '\0') {
    iVar14 = (int)local_170[uVar23 * 4];
LAB_1408bf3bc:
    if (iVar14 != 0) {
      lVar19 = 0;
      iVar25 = 0;
      do {
        iVar6 = *(int *)(local_170[uVar23 * 4 + -1] + lVar19);
        if (*(int *)(local_170[uVar23 * 4 + -1] + lVar19) < iVar25) {
          iVar6 = iVar25;
        }
        iVar25 = iVar6;
        lVar19 = lVar19 + 4;
      } while ((longlong)iVar14 * 4 != lVar19);
      goto LAB_1408bf3f3;
    }
  }
  else {
    iVar14 = (int)local_170[uVar23 * 4];
    if ((longlong)iVar14 != 0) {
      lVar19 = 0;
      do {
        if (*(int *)(local_170[uVar23 * 4 + -1] + lVar19) == iVar25) goto LAB_1408bf3f3;
        lVar19 = lVar19 + 4;
      } while ((longlong)iVar14 << 2 != lVar19);
      goto LAB_1408bf3bc;
    }
  }
  local_2b8 = CONCAT44(local_2b8._4_4_,uVar32);
  if ((int)uVar23 == 4) {
    iVar25 = _DAT_00000020;
    if (DAT_14ca8558c == '\0') {
      DAT_14ca8558c = '\x01';
    }
  }
  else {
    iVar25 = 3;
    if ((int)uVar23 == 3) {
      iVar25 = 1;
    }
  }
  FUN_147414c35(local_260,uVar23);
  local_e8 = L"MissingTargetedShaderFormats";
  uStack_e0._0_4_ = 0x1c;
  FUN_1446e940c(&local_208,&local_e8);
  local_e8 = L"WindowsDynamicRHI";
  uStack_e0._0_4_ = 0x11;
  FUN_1446e940c(&local_218,&local_e8);
  local_e8 = L"Unable to launch with RHI \'{0}\' since the project is not configured to support it."
  ;
  uStack_e0 = CONCAT44(uStack_e0._4_4_,0x52);
  ppppplVar38 = &local_1f8;
  FUN_140208c1e(ppppplVar38,&local_218,&local_208,&local_e8);
  FUN_14023409e(&local_270,ppppplVar38,1);
  local_e8 = (wchar_t *)CONCAT44(local_e8._4_4_,4);
  FUN_14023423e(local_d8,local_260);
  puStack_1c0 = local_c8;
  local_1c8 = (longlong ****)&local_e8;
  FUN_14010d304(&local_1a8);
  local_1d8 = local_270;
  plStack_1d0 = local_268;
  if (local_268 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_268 + 1) = (int)local_268[1] + 1;
    UNLOCK();
  }
  FUN_14010c016(&local_1e8,&local_1d8,&local_1a8);
  FUN_14007f2db(local_1a8,uStack_1a0 & 0xffffffff);
  if ((longlong ****)local_1a8 != (longlong ****)0x0) {
    FUN_1400020a8();
  }
  uVar32 = (uint)local_2b8;
  if (local_d8[0] != (longlong *)0x0) {
    (**(code **)(*local_d8[0] + 0x10))();
  }
  if (local_268 != (longlong *)0x0) {
    LOCK();
    plVar17 = local_268 + 1;
    *(int *)plVar17 = (int)*plVar17 + -1;
    UNLOCK();
    if ((int)*plVar17 == 0) {
      (**(code **)*local_268)(local_268);
      LOCK();
      piVar2 = (int *)((longlong)local_268 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_268 + 0x10))(local_268);
      }
    }
  }
  if (local_260[0] != (longlong *)0x0) {
    (**(code **)(*local_260[0] + 0x10))();
  }
  FUN_1427863e0();
  FUN_1427864dc(0,0,&local_1e8,&DAT_14c873210);
  if ((longlong *****)local_1e8 != (longlong *****)0x0) {
    (*(code *)(*local_1e8)[2])();
  }
  if ((longlong *****)local_1f8 != (longlong *****)0x0) {
    (*(code *)(*local_1f8)[2])();
  }
  switch(uVar23) {
  case 0:
    pwVar27 = L"D3D11";
    break;
  case 1:
    pwVar27 = L"D3D12";
    break;
  case 2:
    pwVar27 = L"Vulkan";
    break;
  case 3:
    pwVar27 = L"OpenGL";
    break;
  case 4:
    if (DAT_14ca8558c == '\0') {
      DAT_14ca8558c = '\x01';
    }
    pwVar27 = _DAT_00000010;
    if (_DAT_00000018 == 0) {
      pwVar27 = L"";
    }
    break;
  default:
    pwVar27 = L"<unknown>";
  }
  FUN_140033559(".\\Runtime/RHI/Private/Windows/WindowsDynamicRHI.cpp",0x374,
                L"Unable to launch with RHI \'%s\' since the project is not configured to support it."
                ,pwVar27);
LAB_1408bf3f3:
  *local_2a8 = iVar25;
  bVar8 = 0;
  do {
    iVar25 = (int)uVar23;
    if (iVar25 == 0) {
      pwVar27 = L"DirectX 11";
LAB_1408bf49d:
      FUN_140056680(&local_1c8,pwVar27);
    }
    else {
      if (iVar25 == 2) {
        local_e8 = (wchar_t *)0x0;
        uStack_e0 = 0;
        FUN_14631b754(*local_2a8,&local_e8);
        pppplVar22 = (longlong ****)&DAT_149dfb77a;
        if ((int)uStack_e0 != 0) {
          pppplVar22 = (longlong ****)local_e8;
        }
        FUN_140002266(&local_1c8,L"Vulkan (%s)",pppplVar22);
      }
      else {
        if (iVar25 == 3) {
          pwVar27 = L"OpenGL";
          goto LAB_1408bf49d;
        }
        local_e8 = (wchar_t *)0x0;
        uStack_e0 = 0;
        FUN_14631b754(*local_2a8,&local_e8);
        pppplVar22 = (longlong ****)&DAT_149dfb77a;
        if ((int)uStack_e0 != 0) {
          pppplVar22 = (longlong ****)local_e8;
        }
        pwVar27 = L"D3D12";
        if (iVar25 != 1) {
          if (iVar25 == 4) {
            if (DAT_14ca8558c == '\0') {
              DAT_14ca8558c = '\x01';
            }
            pwVar27 = L"";
            if (_DAT_00000018 != 0) {
              pwVar27 = _DAT_00000010;
            }
          }
          else {
            pwVar27 = L"<unknown>";
          }
        }
        FUN_140002266(&local_1c8,L"%s (%s)",pwVar27,pppplVar22);
      }
      if ((longlong ****)local_e8 != (longlong ****)0x0) {
        FUN_1400020a8();
      }
    }
    pppplVar22 = local_1c8;
    local_288 = (void *)0x0;
    lVar19 = (longlong)(int)puStack_1c0;
    local_280 = (int)puStack_1c0;
    if (lVar19 == 0) {
      local_27c = 0;
    }
    else {
      FUN_1446dd670(&local_288,(ulonglong)puStack_1c0 & 0xffffffff,0);
      memcpy(local_288,pppplVar22,lVar19 * 2);
    }
    FUN_14626aa72(&local_288);
    pwVar27 = L"D3D11RHI";
    switch(iVar25) {
    case 1:
      pwVar27 = L"D3D12RHI";
      break;
    case 2:
      pwVar27 = L"VulkanRHI";
      break;
    case 3:
      pwVar27 = L"OpenGLDrv";
      break;
    case 4:
      if (DAT_14ca8558c == '\0') {
        DAT_14ca8558c = '\x01';
      }
      pwVar27 = L"";
      if (_DAT_00000008 != 0) {
        pwVar27 = _DAT_00000000;
      }
    }
    FUN_1446f470e(&local_290,pwVar27,1);
    uVar5 = local_290;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c874a20) && (FUN_144b3d300(&DAT_14c874a20), DAT_14c874a20 == -1)) {
      FUN_145762954(&DAT_14c874628);
      DAT_14c874a18 = 1;
      atexit(FUN_14278de47);
      _Init_thread_footer(&DAT_14c874a20);
    }
    ppppplVar21 = (longlong *****)FUN_1402c9134(&DAT_14c874628,uVar5,&local_e8,0);
    if ((ppppplVar21 == (longlong *****)0x0) ||
       (cVar7 = (*(code *)(*ppppplVar21)[8])(ppppplVar21), cVar7 == '\0')) {
      piVar2 = local_2a8;
      if ((char)local_29c == '\0') {
        FUN_1474147e2(&local_190);
        if (local_e8._4_1_ != '\x01') goto LAB_1408bf76a;
        *piVar2 = (int)local_e8;
LAB_1408bfb9b:
        bVar39 = true;
        bVar8 = 1;
      }
      else {
        if ((iVar25 == 1) && (*local_2a8 == 4)) {
          local_e8 = L"RequiredDX12SM6";
          uStack_e0._0_4_ = 0xf;
          FUN_1446e940c(&local_1d8,&local_e8);
          local_e8 = L"WindowsDynamicRHI";
          uStack_e0._0_4_ = 0x11;
          FUN_1446e940c(&local_1e8,&local_e8);
          local_e8 = 
          L"DirectX 12 with Feature Level SM6 is not supported on your system. Try running without the -sm6 command line argument."
          ;
          uStack_e0 = CONCAT44(uStack_e0._4_4_,0x76);
          FUN_140208c1e(&local_1a8,&local_1e8,&local_1d8,&local_e8);
          FUN_1427863e0();
          FUN_1427864dc(0,0);
          if ((longlong ****)local_1a8 != (longlong ****)0x0) {
            (*(code *)(*local_1a8)[2])();
          }
          FUN_142797bc0(1);
        }
LAB_1408bf76a:
        if (((uVar32 == 1 && bVar9 != 0) & bVar9) == 0) {
          switch(uVar23) {
          case 0:
            local_e8 = L"RequiredDX11Feature_11_SM5";
            uStack_e0._0_4_ = 0x1a;
            FUN_1446e940c(&local_1d8,&local_e8);
            local_e8 = L"WindowsDynamicRHI";
            uStack_e0._0_4_ = 0x11;
            FUN_1446e940c(&local_1e8,&local_e8);
            local_e8 = 
            L"A D3D11-compatible GPU (Feature Level 11.0, Shader Model 5.0) is required to run the engine."
            ;
            uStack_e0 = CONCAT44(uStack_e0._4_4_,0x5c);
            FUN_140208c1e(&local_1a8,&local_1e8,&local_1d8,&local_e8);
            FUN_1427863e0();
            FUN_1427864dc(0,0);
            if ((longlong ****)local_1a8 != (longlong ****)0x0) {
              (*(code *)(*local_1a8)[2])();
            }
            FUN_142797bc0(1,(DAT_14c868880 != '\0') * '\x03');
            uVar23 = 0;
            break;
          case 1:
            if ((longlong)(int)local_170[0] != 0) {
              lVar19 = 0;
              iVar25 = 0;
              do {
                iVar14 = *(int *)(local_178 + lVar19);
                if (*(int *)(local_178 + lVar19) < iVar25) {
                  iVar14 = iVar25;
                }
                iVar25 = iVar14;
                lVar19 = lVar19 + 4;
              } while ((longlong)(int)local_170[0] * 4 != lVar19);
              *local_2a8 = iVar25;
              uVar23 = 0;
              goto LAB_1408bfb9b;
            }
            local_e8 = L"RequiredDX12";
            uStack_e0._0_4_ = 0xc;
            FUN_1446e940c(&local_1d8,&local_e8);
            local_e8 = L"WindowsDynamicRHI";
            uStack_e0._0_4_ = 0x11;
            FUN_1446e940c(&local_1e8,&local_e8);
            local_e8 = 
            L"DirectX 12 is not supported on your system. Try running without the -dx12 or -d3d12 command line argument."
            ;
            uStack_e0 = CONCAT44(uStack_e0._4_4_,0x6a);
            FUN_140208c1e(&local_1a8,&local_1e8,&local_1d8,&local_e8);
            FUN_1427863e0();
            FUN_1427864dc(0,0);
            if ((longlong ****)local_1a8 != (longlong ****)0x0) {
              (*(code *)(*local_1a8)[2])();
            }
            FUN_142797bc0(1,(DAT_14c868880 != '\0') * '\x03');
            uVar23 = 1;
            break;
          case 2:
            local_e8 = L"RequiredVulkan";
            uStack_e0._0_4_ = 0xe;
            FUN_1446e940c(&local_1d8,&local_e8);
            local_e8 = L"WindowsDynamicRHI";
            uStack_e0._0_4_ = 0x11;
            FUN_1446e940c(&local_1e8,&local_e8);
            local_e8 = L"Vulkan Driver is required to run the engine.";
            uStack_e0 = CONCAT44(uStack_e0._4_4_,0x2c);
            FUN_140208c1e(&local_1a8,&local_1e8,&local_1d8,&local_e8);
            FUN_1427863e0();
            FUN_1427864dc(0,0);
            if ((longlong ****)local_1a8 != (longlong ****)0x0) {
              (*(code *)(*local_1a8)[2])();
            }
            FUN_142797bc0(1,(DAT_14c868880 != '\0') * '\x03');
            uVar23 = 2;
            break;
          case 3:
            local_e8 = L"RequiredOpenGL";
            uStack_e0._0_4_ = 0xe;
            FUN_1446e940c(&local_1d8,&local_e8);
            local_e8 = L"WindowsDynamicRHI";
            uStack_e0._0_4_ = 0x11;
            FUN_1446e940c(&local_1e8,&local_e8);
            local_e8 = L"OpenGL 4.3 is required to run the engine.";
            uStack_e0 = CONCAT44(uStack_e0._4_4_,0x29);
            FUN_140208c1e(&local_1a8,&local_1e8,&local_1d8,&local_e8);
            FUN_1427863e0();
            FUN_1427864dc(0,0);
            if ((longlong ****)local_1a8 != (longlong ****)0x0) {
              (*(code *)(*local_1a8)[2])();
            }
            FUN_142797bc0(1,(DAT_14c868880 != '\0') * '\x03');
            uVar23 = 3;
          }
        }
        else {
          local_e8 = L"RequiredDX12";
          uStack_e0._0_4_ = 0xc;
          FUN_1446e940c(&local_1d8,&local_e8);
          local_e8 = L"WindowsDynamicRHI";
          uStack_e0._0_4_ = 0x11;
          FUN_1446e940c(&local_1e8,&local_e8);
          local_e8 = 
          L"DirectX 12 is not supported on your system. Try running without the -dx12 or -d3d12 command line argument."
          ;
          uStack_e0 = CONCAT44(uStack_e0._4_4_,0x6a);
          FUN_140208c1e(&local_1a8,&local_1e8,&local_1d8,&local_e8);
          FUN_1427863e0();
          FUN_1427864dc(0,0);
          if ((longlong ****)local_1a8 != (longlong ****)0x0) {
            (*(code *)(*local_1a8)[2])();
          }
          FUN_142797bc0(1,(DAT_14c868880 != '\0') * '\x03');
        }
        bVar39 = true;
        bVar8 = 0;
      }
    }
    else {
      *local_298 = pwVar27;
      bVar39 = false;
      ppppplVar38 = ppppplVar21;
    }
    if ((longlong *****)local_1c8 != (longlong *****)0x0) {
      FUN_1400020a8();
    }
    bVar3 = (bool)(bVar39 & bVar8);
    bVar8 = 1;
    if (!bVar3) {
      FUN_14178e320(local_188);
      if (bVar39) {
        ppppplVar38 = (longlong *****)0x0;
      }
      if ((local_60 ^ (ulonglong)auStack_2f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return ppppplVar38;
    }
  } while( true );
LAB_1408c0094:
  do {
    pppplVar22 = (longlong ****)&DAT_149dfb77a;
    if ((int)uStack_1a0 != 0) {
      pppplVar22 = (longlong ****)local_1a8;
    }
    iVar25 = (int)uVar24;
    ppppplVar38 = (longlong *****)(&PTR_u_Largest_14a3822c0)[uVar24];
    lVar19 = 0;
    while( true ) {
      uVar35 = *(ushort *)((longlong)pppplVar22 + lVar19);
      uVar24 = (ulonglong)uVar35;
      uVar37 = *(ushort *)((longlong)ppppplVar38 + lVar19);
      if (uVar35 != uVar37) break;
      if (uVar35 == 0) goto LAB_1408c00f7;
LAB_1408c00cc:
      lVar19 = lVar19 + 2;
    }
    if ((uVar37 | uVar35) < 0x80) {
      uVar35 = (ushort)(byte)(&DAT_149e05da0)[uVar24];
      uVar36 = (ulonglong)uVar37;
      uVar37 = (ushort)(byte)(&DAT_149e05da0)[uVar36];
      if ((&DAT_149e05da0)[uVar24] == (&DAT_149e05da0)[uVar36]) goto LAB_1408c00cc;
    }
    if (uVar35 != uVar37) goto LAB_1408c0104;
LAB_1408c00f7:
    iVar14 = FUN_140efda56();
    if (iVar25 <= iVar14) {
LAB_1408c0576:
      bVar8 = 1;
      DAT_14ca8558d = 1;
      DAT_14ca8558e = '\x01';
      uVar32 = (uint)local_2b8;
      goto LAB_1408c0592;
    }
LAB_1408c0104:
    ppppplVar21 = (longlong *****)&DAT_149dfb77a;
    if ((int)puStack_1c0 != 0) {
      ppppplVar21 = (longlong *****)local_1c8;
    }
    lVar19 = 0;
    while( true ) {
      uVar35 = *(ushort *)((longlong)ppppplVar21 + lVar19);
      uVar24 = (ulonglong)uVar35;
      uVar37 = *(ushort *)((longlong)ppppplVar38 + lVar19);
      if (uVar35 != uVar37) break;
      if (uVar35 == 0) goto LAB_1408c015a;
LAB_1408c012f:
      lVar19 = lVar19 + 2;
    }
    if ((uVar37 | uVar35) < 0x80) {
      uVar35 = (ushort)(byte)(&DAT_149e05da0)[uVar24];
      uVar36 = (ulonglong)uVar37;
      uVar37 = (ushort)(byte)(&DAT_149e05da0)[uVar36];
      if ((&DAT_149e05da0)[uVar24] == (&DAT_149e05da0)[uVar36]) goto LAB_1408c012f;
    }
    if (uVar35 != uVar37) goto LAB_1408c0170;
LAB_1408c015a:
    iVar14 = FUN_140efda56();
    if ((iVar25 <= iVar14) && (uVar20 < 0x20000000)) goto LAB_1408c0576;
LAB_1408c0170:
    uVar24 = (ulonglong)(iVar25 + 1U);
  } while (iVar25 + 1U != 6);
LAB_1408c017b:
  local_1d8 = (longlong ****)0x0;
  plStack_1d0 = (longlong *)0x0;
  local_2d8 = (longlong ****)&DAT_14c872ad8;
  FUN_14105aa76(DAT_14c872ce0,L"Devices",L"DeviceDefaultRHIList");
  FUN_1461924c8(&local_1e8);
  if ((longlong)(int)plStack_1d0 != 0) {
    local_2b0 = (longlong *****)(local_1d8 + (longlong)(int)plStack_1d0 * 2);
    ppppplVar38 = (longlong *****)local_1d8;
    do {
      ppppplVar21 = (longlong *****)&DAT_149dfb77a;
      if (*(int *)(ppppplVar38 + 1) != 0) {
        ppppplVar21 = (longlong *****)*ppppplVar38;
      }
      puVar33 = (undefined2 *)((longlong)ppppplVar21 + 2);
      local_1f8 = (longlong ****)0x0;
      uStack_1f0 = 0;
      local_2d8 = (longlong ****)0x0;
      FUN_14063337c(puVar33,L"RHI=",&local_1f8,1);
      local_208 = (longlong ****)0x0;
      uStack_200 = 0;
      local_2d8 = (longlong ****)0x0;
      FUN_14063337c(puVar33,L"DeviceName=",&local_208);
      FUN_1400b22c2(&local_218,"D3D11_ES31");
      ppppplVar21 = (longlong *****)local_218;
      if ((int)plStack_210 == 0) {
        ppppplVar21 = (longlong *****)&DAT_149dfb77a;
      }
      ppppplVar28 = (longlong *****)&DAT_149dfb77a;
      if ((int)uStack_1f0 != 0) {
        ppppplVar28 = (longlong *****)local_1f8;
      }
      lVar19 = 0;
      while( true ) {
        uVar35 = *(ushort *)((longlong)ppppplVar28 + lVar19);
        uVar20 = (ulonglong)uVar35;
        uVar37 = *(ushort *)((longlong)ppppplVar21 + lVar19);
        if (uVar35 != uVar37) break;
        if (uVar35 == 0) goto LAB_1408c02ed;
LAB_1408c02a7:
        lVar19 = lVar19 + 2;
      }
      if ((uVar37 | uVar35) < 0x80) {
        uVar35 = (ushort)(byte)(&DAT_149e05da0)[uVar20];
        uVar24 = (ulonglong)uVar37;
        uVar37 = (ushort)(byte)(&DAT_149e05da0)[uVar24];
        if ((&DAT_149e05da0)[uVar20] == (&DAT_149e05da0)[uVar24]) goto LAB_1408c02a7;
      }
      if (uVar35 != uVar37) {
        if ((longlong *****)local_218 != (longlong *****)0x0) {
          FUN_1400020a8();
        }
        goto LAB_1408c0372;
      }
LAB_1408c02ed:
      ppppplVar21 = (longlong *****)&DAT_149dfb77a;
      if ((int)uStack_200 != 0) {
        ppppplVar21 = (longlong *****)local_208;
      }
      ppppplVar28 = (longlong *****)&DAT_149dfb77a;
      if (local_1e0 != 0) {
        ppppplVar28 = (longlong *****)local_1e8;
      }
      lVar19 = 0;
      while( true ) {
        uVar35 = *(ushort *)((longlong)ppppplVar28 + lVar19);
        uVar13 = (uint)uVar35;
        uVar37 = *(ushort *)((longlong)ppppplVar21 + lVar19);
        uVar29 = (uint)uVar37;
        if (uVar35 != uVar37) {
          if ((uVar37 | uVar35) < 0x80) {
            uVar13 = (uint)(byte)(&DAT_149e05da0)[uVar35];
            uVar29 = (uint)(byte)(&DAT_149e05da0)[uVar37];
            if ((&DAT_149e05da0)[uVar35] == (&DAT_149e05da0)[uVar37]) goto LAB_1408c032e;
          }
          iVar25 = uVar13 - uVar29;
          goto LAB_1408c0360;
        }
        if (uVar35 == 0) break;
LAB_1408c032e:
        lVar19 = lVar19 + 2;
      }
      iVar25 = 0;
LAB_1408c0360:
      if ((longlong *****)local_218 != (longlong *****)0x0) {
        FUN_1400020a8();
      }
      if (iVar25 == 0) {
        DAT_14ca8558d = 1;
        DAT_14ca8558e = '\x01';
        bVar39 = true;
      }
      else {
LAB_1408c0372:
        local_218 = (longlong ****)0x0;
        plStack_210 = (longlong *)0x0;
        local_2d8 = (longlong ****)0x0;
        FUN_14063337c(puVar33,L"VendorId=",&local_218,1);
        ppppplVar21 = (longlong *****)&DAT_149dfb77a;
        if ((int)plStack_210 != 0) {
          ppppplVar21 = (longlong *****)local_218;
        }
        iVar25 = FUN_140b11ae0(ppppplVar21);
        local_228 = (longlong ****)0x0;
        uStack_220 = 0;
        local_2d8 = (longlong ****)0x0;
        FUN_14063337c(puVar33,L"DeviceId=");
        ppppplVar21 = (longlong *****)&DAT_149dfb77a;
        if ((int)uStack_220 != 0) {
          ppppplVar21 = (longlong *****)local_228;
        }
        iVar14 = FUN_140b11ae0(ppppplVar21);
        if ((((int)local_e8 == iVar25) && ((int)local_e8 != 0)) && (local_e8._4_4_ != 0)) {
          bVar39 = false;
          if (local_e8._4_4_ == iVar14) {
            FUN_1400b22c2(&local_238,"D3D11_ES31");
            ppppplVar21 = (longlong *****)local_238;
            if (local_230 == 0) {
              ppppplVar21 = (longlong *****)&DAT_149dfb77a;
            }
            ppppplVar28 = (longlong *****)&DAT_149dfb77a;
            if ((int)uStack_1f0 != 0) {
              ppppplVar28 = (longlong *****)local_1f8;
            }
            lVar19 = 0;
            while( true ) {
              uVar35 = *(ushort *)((longlong)ppppplVar28 + lVar19);
              uVar13 = (uint)uVar35;
              uVar37 = *(ushort *)((longlong)ppppplVar21 + lVar19);
              uVar29 = (uint)uVar37;
              if (uVar35 != uVar37) {
                if ((uVar37 | uVar35) < 0x80) {
                  uVar13 = (uint)(byte)(&DAT_149e05da0)[uVar35];
                  uVar29 = (uint)(byte)(&DAT_149e05da0)[uVar37];
                  if ((&DAT_149e05da0)[uVar35] == (&DAT_149e05da0)[uVar37]) goto LAB_1408c048f;
                }
                iVar25 = uVar13 - uVar29;
                goto LAB_1408c04d6;
              }
              if (uVar35 == 0) break;
LAB_1408c048f:
              lVar19 = lVar19 + 2;
            }
            iVar25 = 0;
LAB_1408c04d6:
            if ((longlong *****)local_238 != (longlong *****)0x0) {
              FUN_1400020a8();
            }
            if (iVar25 == 0) {
              DAT_14ca8558d = 1;
              DAT_14ca8558e = '\x01';
              bVar39 = true;
            }
          }
        }
        else {
          bVar39 = false;
        }
        if ((longlong *****)local_228 != (longlong *****)0x0) {
          FUN_1400020a8();
        }
        if ((longlong *****)local_218 != (longlong *****)0x0) {
          FUN_1400020a8();
        }
      }
      if ((longlong *****)local_208 != (longlong *****)0x0) {
        FUN_1400020a8();
      }
      if ((longlong *****)local_1f8 != (longlong *****)0x0) {
        FUN_1400020a8();
      }
      if (bVar39) {
        bVar8 = 1;
        goto LAB_1408c05dc;
      }
      ppppplVar38 = ppppplVar38 + 2;
    } while (ppppplVar38 != local_2b0);
  }
  DAT_14ca8558d = 0;
  DAT_14ca8558e = '\x01';
  bVar8 = 0;
LAB_1408c05dc:
  if ((longlong *****)local_1e8 != (longlong *****)0x0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(local_1d8);
  uVar32 = (uint)local_2b8;
  if ((longlong *****)local_1d8 != (longlong *****)0x0) {
    FUN_1400020a8();
  }
LAB_1408c0592:
  if ((longlong *****)local_1c8 != (longlong *****)0x0) {
    FUN_1400020a8();
  }
  if ((longlong ****)local_1a8 != (longlong ****)0x0) {
    FUN_1400020a8();
  }
LAB_1408bf33d:
  if (((bVar8 & 1) == 0) && (local_249 == '\0')) {
    cVar7 = '\0';
  }
  else {
    local_2d8 = (longlong ****)&DAT_14c872b08;
    FUN_14593bea2(DAT_14c872ce0,L"D3DRHIPreference",L"bPreferFeatureLevelES31");
    cVar7 = '\x01';
  }
  goto LAB_1408bf357;
LAB_1408bf142:
  uVar35 = *(ushort *)((longlong)puVar33 + lVar19);
  uVar20 = (ulonglong)uVar35;
  uVar37 = *(ushort *)((longlong)&DAT_14a381740 + lVar19);
  if (uVar35 == uVar37) {
    if (uVar35 == 0) goto LAB_1408bff4a;
LAB_1408bf162:
    lVar19 = lVar19 + 2;
    goto LAB_1408bf142;
  }
  if ((uVar37 | uVar35) < 0x80) {
    uVar35 = (ushort)(byte)(&DAT_149e05da0)[uVar20];
    uVar24 = (ulonglong)uVar37;
    uVar37 = (ushort)(byte)(&DAT_149e05da0)[uVar24];
    if ((&DAT_149e05da0)[uVar20] == (&DAT_149e05da0)[uVar24]) goto LAB_1408bf162;
  }
  if (uVar35 != uVar37) {
    lVar19 = 0;
    goto LAB_1408bf19c;
  }
LAB_1408bff4a:
  iVar25 = 4;
  goto LAB_1408bf35d;
LAB_1408bf19c:
  uVar35 = *(ushort *)((longlong)puVar33 + lVar19);
  uVar13 = (uint)uVar35;
  uVar37 = *(ushort *)((longlong)&DAT_14a381736 + lVar19);
  uVar29 = (uint)uVar37;
  if (uVar35 != uVar37) {
    if ((uVar37 | uVar35) < 0x80) {
      uVar13 = (uint)(byte)(&DAT_149e05da0)[uVar35];
      uVar29 = (uint)(byte)(&DAT_149e05da0)[uVar37];
      if ((&DAT_149e05da0)[uVar35] == (&DAT_149e05da0)[uVar37]) goto LAB_1408bf1b4;
    }
    iVar25 = uVar13 - uVar29;
    goto LAB_1408c05c1;
  }
  if (uVar35 == 0) goto LAB_1408c05bf;
LAB_1408bf1b4:
  lVar19 = lVar19 + 2;
  goto LAB_1408bf19c;
LAB_1408c05bf:
  iVar25 = 0;
LAB_1408c05c1:
  cVar7 = iVar25 == 0;
LAB_1408bf357:
  iVar25 = 1;
  goto LAB_1408bf35d;
}



// FUNCTION 1408c0882 FUN_1408c0882 body=164 status=ok
// SIG undefined FUN_1408c0882(void)

undefined8 *
FUN_1408c0882(undefined8 param_1,undefined8 *param_2,undefined4 param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined4 uVar2;
  
  plVar1 = (longlong *)FUN_1408c0926(param_1,param_4);
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



// FUNCTION 1408c0926 FUN_1408c0926 body=178 status=ok
// SIG undefined FUN_1408c0926(void)

void FUN_1408c0926(longlong param_1,longlong param_2)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  
  if ((((param_2 != 0) && (lVar1 = *(longlong *)(param_2 + 8), lVar1 != 0)) &&
      (lVar4 = FUN_144a43c10(lVar1), lVar4 != 0)) && (lVar4 = FUN_14022af78(lVar4,0), lVar4 != 0)) {
    iVar3 = FUN_140159b42(lVar4,*(undefined4 *)(lVar1 + 0x38),param_2 + 0x100,0xffffffff);
    if (-1 < iVar3) {
      do {
        puVar5 = (undefined8 *)FUN_14022aa2e(lVar4,iVar3,2);
        if (puVar5 != (undefined8 *)0x0) {
          if ((*(int *)(puVar5 + 1) != 0) && (*(longlong *)*puVar5 != 0)) {
            return;
          }
          break;
        }
        bVar2 = 0 < iVar3;
        iVar3 = iVar3 + -1;
      } while (bVar2);
    }
  }
  FUN_140257578(param_1 + 0x20);
  return;
}



// FUNCTION 1408c09de FUN_1408c09de body=186 status=ok
// SIG undefined FUN_1408c09de(void)

undefined8 * FUN_1408c09de(void)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [8];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9904d8) {
    FUN_144b3d300(&DAT_14c9904d8);
    if (DAT_14c9904d8 == -1) {
      FUN_1446ddc76(local_18,"STextBlock",1);
      FUN_145766b7c(&DAT_14c9904a0);
      atexit(FUN_14290b982);
      _Init_thread_footer(&DAT_14c9904d8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return &DAT_14c9904a0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1408c0a9a FUN_1408c0a9a body=88 status=ok
// SIG undefined FUN_1408c0a9a(void)

void FUN_1408c0a9a(longlong param_1,longlong *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  lVar2 = *param_2;
  uVar1 = *(undefined4 *)(param_1 + 0x30);
  uVar4 = FUN_1408c0af2();
  lVar3 = *(longlong *)(lVar2 + 0x200);
  if (lVar3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_1403f69f4(lVar3,uVar4,0);
  }
  FUN_14083c276(lVar2,uVar4,uVar1,param_3,0);
  return;
}



// FUNCTION 1408c0af2 FUN_1408c0af2 body=57 status=ok
// SIG undefined FUN_1408c0af2(void)

void FUN_1408c0af2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb93c78 == 0) {
    uVar1 = FUN_140cbe2a3();
    DAT_14cb93c78 = FUN_14171c317(FUN_146573f5c,uVar1,L"EAtt_WeaponBehaviorDamageModifier");
  }
  return;
}



// FUNCTION 1408c0b2c FUN_1408c0b2c body=1573 status=ok
// SIG undefined FUN_1408c0b2c(void)

void FUN_1408c0b2c(longlong param_1,longlong *param_2)

{
  byte bVar1;
  undefined8 uVar2;
  bool bVar3;
  ulonglong uVar4;
  char cVar5;
  char cVar6;
  undefined1 *puVar7;
  longlong lVar8;
  byte *pbVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  int iVar13;
  int iVar14;
  float fVar15;
  undefined1 auStack_1a8 [32];
  longlong local_188;
  longlong local_180;
  byte *local_178;
  undefined1 local_170 [168];
  undefined1 *local_c8;
  undefined1 *local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined1 local_90;
  undefined8 local_8c;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  if (*(int *)(param_1 + 0x578) != 0) {
    iVar13 = (*(int *)(param_1 + 0x2fc) - *(int *)(param_1 + 0x2f8)) + 1;
    if (*(longlong *)(param_1 + 0x568) != 0) {
      iVar13 = iVar13 + ((*(int *)(param_1 + 0x304) - *(int *)(param_1 + 0x300)) + 1) *
                        *(int *)(param_1 + 0xe0) + 2;
    }
    local_180 = param_1 + 0x3d0;
    FUN_1408c13d0(local_180,iVar13);
    (**(code **)(*param_2 + 0x10))(param_2,iVar13);
    if (*(longlong *)(param_1 + 0x568) != 0) {
      if ((longlong)*(int *)(param_1 + 0xe0) != 0) {
        pbVar9 = *(byte **)(param_1 + 0xd8);
        local_178 = pbVar9 + *(int *)(param_1 + 0xe0);
        iVar13 = *(int *)(param_1 + 0x304);
        do {
          if (*(int *)(param_1 + 0x300) <= iVar13) {
            cVar6 = *(char *)(*(longlong *)(param_1 + 0x588) + (longlong)*(int *)(param_1 + 0x2f8));
            bVar1 = *pbVar9;
            iVar14 = *(int *)(param_1 + 0x300);
            do {
              local_c8 = (undefined1 *)0x0;
              local_a8 = 0;
              local_b8 = 0;
              uStack_b0 = 0;
              local_a0 = 0xffffffff;
              local_98 = 0xff0000ffffffff;
              local_90 = 0;
              local_8c = CONCAT35(local_8c._5_3_,CONCAT14(local_8c._4_1_,0x40c00f07)) &
                         0xfffffffcffffffff;
              local_c0 = &DAT_100000001;
              FUN_14470b9e0(local_170,1);
              local_188 = local_180;
              cVar5 = FUN_1408c1152(param_1,iVar14,
                                    *(undefined8 *)
                                     (*(longlong *)(param_1 + 0x570) + (longlong)cVar6 * 8),
                                    local_170);
              if (cVar5 != '\0') {
                local_8c = CONCAT44(local_8c._4_4_,
                                    ((uint)local_8c & 0xe1ffffff) + (bVar1 & 7) * 0x4000000 +
                                    0x2000000);
                (**(code **)(*param_2 + 0x18))(param_2,local_170,0x7f7fffff);
              }
              puVar7 = local_c8;
              if (local_c8 == (undefined1 *)0x0) {
                puVar7 = local_170;
              }
              FUN_1446fc26f(puVar7,(ulonglong)local_c0 & 0xffffffff);
              if (local_c8 != (undefined1 *)0x0) {
                FUN_1400020a8();
              }
              iVar13 = *(int *)(param_1 + 0x304);
              bVar3 = iVar14 < iVar13;
              iVar14 = iVar14 + 1;
            } while (bVar3);
          }
          pbVar9 = pbVar9 + 1;
        } while (pbVar9 != local_178);
      }
      cVar6 = **(char **)(param_1 + 0x588);
      local_c8 = (undefined1 *)0x0;
      local_b8 = 0;
      uStack_b0 = 0;
      local_a8 = 0;
      local_a0 = 0xffffffff;
      local_98 = 0xff0000ffffffff;
      local_90 = 0;
      local_8c = 0x40c00f07;
      local_c0 = &DAT_100000001;
      FUN_14470b9e0(local_170,1);
      local_188 = local_180;
      cVar6 = FUN_1408c1152(param_1,0,
                            *(undefined8 *)(*(longlong *)(param_1 + 0x570) + (longlong)cVar6 * 8),
                            local_170);
      if (cVar6 != '\0') {
        local_8c = local_8c | 0x100000000;
        (**(code **)(*param_2 + 0x18))(param_2,local_170,0x7f7fffff);
      }
      puVar7 = local_170;
      if (local_c8 != (undefined1 *)0x0) {
        puVar7 = local_c8;
      }
      FUN_1446fc26f(puVar7,(ulonglong)local_c0 & 0xffffffff);
      if (local_c8 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
      local_c8 = (undefined1 *)0x0;
      local_b8 = 0;
      uStack_b0 = 0;
      local_a8 = 0;
      local_a0 = 0xffffffff;
      local_98 = 0xff0000ffffffff;
      local_90 = 0;
      local_8c = 0x40c00f07;
      local_c0 = &DAT_100000001;
      FUN_14470b9e0(local_170,1);
      cVar6 = FUN_1408c1416(param_1,0,local_170);
      if (cVar6 != '\0') {
        local_b8 = *(undefined8 *)(param_1 + 0x568);
        local_8c = local_8c & 0xfffffffffcfff0ff;
        local_8c = local_8c | 0x200000000;
        (**(code **)(*param_2 + 0x18))(param_2,local_170,0x7f7fffff);
      }
      puVar7 = local_170;
      if (local_c8 != (undefined1 *)0x0) {
        puVar7 = local_c8;
      }
      FUN_1446fc26f(puVar7,(ulonglong)local_c0 & 0xffffffff);
      if (local_c8 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
    }
    if ((*(longlong *)(*(longlong *)(param_1 + 0x558) + 0x70) != 0) &&
       ((*(byte *)(param_1 + 0x74) & 1) != 0)) {
      uVar10 = (ulonglong)(*(int *)(param_1 + 0x330) + -1 + (uint)(*(int *)(param_1 + 0x330) == 0))
               * 2 + 1;
      uVar4 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> uVar4 == 0; uVar4 = uVar4 - 1) {
        }
      }
      if ((uVar4 ^ 0x3f) != 0x3f) {
        uVar2 = *(undefined8 *)(param_1 + 0x250);
        uVar10 = 1;
        lVar8 = 0;
        do {
          lVar11 = *(longlong *)(param_1 + 0x490);
          if (*(longlong *)(param_1 + 0x490) == 0) {
            lVar11 = param_1 + 1000;
          }
          *(undefined8 *)(lVar11 + lVar8) = uVar2;
          uVar12 = uVar10 ^ uVar4 ^ 0x3f;
          uVar10 = uVar10 + 1;
          lVar8 = lVar8 + 0xa8;
        } while (uVar12 != 0x3f);
      }
    }
    iVar13 = *(int *)(param_1 + 0x2f8);
    if (iVar13 <= *(int *)(param_1 + 0x2fc)) {
      lVar8 = (longlong)iVar13 + -1;
      do {
        local_c8 = (undefined1 *)0x0;
        local_a8 = 0;
        local_b8 = 0;
        uStack_b0 = 0;
        local_a0 = 0xffffffff;
        local_98 = 0xff0000ffffffff;
        local_90 = 0;
        local_8c = CONCAT35(local_8c._5_3_,CONCAT14(local_8c._4_1_,0x40c00f07)) & 0xfffffffcffffffff
        ;
        local_c0 = &DAT_100000001;
        FUN_14470b9e0(local_170,1);
        cVar6 = FUN_1408c1416(param_1,iVar13,local_170,local_180);
        if (cVar6 != '\0') {
          fVar15 = 3.4028235e+38;
          if (iVar13 != *(int *)(param_1 + 0x2f8)) {
            fVar15 = *(float *)(*(longlong *)(param_1 + 0x2e8) + 4 + lVar8 * 4);
            if (fVar15 < 0.0) {
              fVar15 = sqrtf(fVar15);
            }
            else {
              fVar15 = SQRT(fVar15);
            }
            fVar15 = fVar15 + fVar15;
          }
          (**(code **)(*param_2 + 0x18))(param_2,local_170,fVar15);
        }
        puVar7 = local_c8;
        if (local_c8 == (undefined1 *)0x0) {
          puVar7 = local_170;
        }
        FUN_1446fc26f(puVar7,(ulonglong)local_c0 & 0xffffffff);
        if (local_c8 != (undefined1 *)0x0) {
          FUN_1400020a8();
        }
        lVar8 = lVar8 + 1;
        iVar13 = iVar13 + 1;
      } while (lVar8 < *(int *)(param_1 + 0x2fc));
    }
  }
  if ((local_80 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1408c1152 FUN_1408c1152 body=637 status=ok
// SIG undefined FUN_1408c1152(void)

bool FUN_1408c1152(longlong param_1,int param_2,longlong param_3,longlong param_4,longlong *param_5)

{
  longlong lVar1;
  undefined8 *puVar2;
  byte bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  uint *puVar13;
  undefined *puVar14;
  int iVar15;
  
  if (param_3 != 0) {
    *(undefined8 *)(param_4 + 0xb8) = *(undefined8 *)(param_1 + 0x568);
    *(longlong *)(param_4 + 0xc0) = param_3;
    bVar3 = *(byte *)(param_1 + 0x6b);
    *(byte *)(param_4 + 0xde) = (byte)param_2;
    *(uint *)(param_4 + 0xe4) = *(uint *)(param_4 + 0xe4) & 0xfef030bf | (bVar3 & 1) << 6;
    FUN_1400ccf58(param_4,1);
    if (DAT_14caa7238 != DAT_14caa7264) {
      puVar14 = &DAT_14caa7268;
      if (DAT_14caa7270 != (undefined *)0x0) {
        puVar14 = DAT_14caa7270;
      }
      uVar9 = *(uint *)(puVar14 + (ulonglong)(DAT_14caa7278 - 1U & *(uint *)(param_1 + 0x2b0)) * 4);
      while (uVar9 != 0xffffffff) {
        puVar13 = (uint *)(DAT_14caa7230 + (longlong)(int)uVar9 * 0x18);
        if (*puVar13 == *(uint *)(param_1 + 0x2b0)) goto LAB_1408c1228;
        uVar9 = puVar13[4];
      }
    }
    puVar13 = (uint *)0x0;
LAB_1408c1228:
    lVar10 = *(longlong *)(puVar13 + 2);
    iVar6 = (int)param_5[1];
    *(uint *)(param_5 + 1) = iVar6 + 1U;
    if (*(uint *)((longlong)param_5 + 0xc) < iVar6 + 1U) {
      FUN_147471bde(param_5,iVar6);
    }
    lVar12 = *param_5;
    lVar11 = (longlong)iVar6 * 0x30;
    lVar1 = lVar12 + lVar11;
    *(undefined8 *)(lVar12 + 0x18 + lVar11) = 0;
    *(longlong *)(lVar12 + 0x20 + lVar11) = param_1;
    *(longlong *)(lVar12 + 8 + lVar11) = param_1 + 0x5d8;
    *(longlong *)(lVar12 + 0x10 + lVar11) = param_1 + 0x600;
    lVar10 = *(longlong *)(lVar10 + 0x60);
    if (lVar10 != 0) {
      *(longlong *)(lVar1 + 0x18) = lVar10;
      LOCK();
      *(int *)(lVar10 + 8) = *(int *)(lVar10 + 8) + 1;
      UNLOCK();
    }
    *(int *)(lVar1 + 0x28) = param_2;
    uVar7 = *(undefined8 *)(param_1 + 0x250);
    lVar12 = (longlong)param_2;
    lVar10 = *(longlong *)(*(longlong *)(param_1 + 0x558) + 0x60);
    uVar8 = *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x558) + 0x58) + lVar12 * 8);
    iVar15 = ((*(int *)(param_1 + 0x330) >> ((byte)param_2 & 0x1f)) + -1) *
             *(int *)(param_1 + 0x328);
    uVar4 = *(undefined4 *)(lVar10 + 0x20 + lVar12 * 0x28);
    uVar5 = *(undefined4 *)(lVar10 + 0x24 + lVar12 * 0x28);
    iVar6 = *(int *)(param_4 + 0xb0);
    uVar9 = iVar6 + 1;
    *(uint *)(param_4 + 0xb0) = uVar9;
    if (*(uint *)(param_4 + 0xb4) < uVar9) {
      FUN_1400cd0f8(param_4);
    }
    lVar10 = *(longlong *)(param_4 + 0xa8);
    if (*(longlong *)(param_4 + 0xa8) == 0) {
      lVar10 = param_4;
    }
    lVar12 = (longlong)iVar6 * 0xa8;
    *(undefined8 *)(lVar10 + lVar12) = uVar7;
    puVar2 = (undefined8 *)(lVar10 + 8 + lVar12);
    *puVar2 = 0;
    puVar2[1] = 0;
    *(undefined8 *)(lVar10 + 0x18 + lVar12) = uVar8;
    *(undefined8 *)(lVar10 + 0x20 + lVar12) = 0;
    *(undefined8 *)(lVar10 + 0x30 + lVar12) = 0;
    *(longlong *)(lVar10 + 0x38 + lVar12) = lVar1;
    puVar2 = (undefined8 *)(lVar10 + 0x40 + lVar12);
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2 = (undefined8 *)(lVar10 + 0x4c + lVar12);
    *puVar2 = 0;
    puVar2[1] = 0;
    *(int *)(lVar10 + 0x5c + lVar12) = iVar15 * iVar15 * 2;
    *(undefined8 *)(lVar10 + 0x60 + lVar12) = 1;
    *(undefined4 *)(lVar10 + 0x68 + lVar12) = uVar4;
    *(undefined4 *)(lVar10 + 0x6c + lVar12) = uVar5;
    puVar2 = (undefined8 *)(lVar10 + 0x70 + lVar12);
    *puVar2 = 0xffffffff;
    puVar2[1] = 0x3f800000;
    *(undefined1 *)(lVar10 + 0x80 + lVar12) = 0;
    *(undefined8 *)(lVar10 + 0x88 + lVar12) = 0;
    *(undefined4 *)(lVar10 + 0x90 + lVar12) = 0xffffffff;
    *(undefined8 *)(lVar10 + 0x98 + lVar12) = 0;
    *(undefined8 *)(lVar10 + 0xa0 + lVar12) = 0xffffffffffffffff;
  }
  return param_3 != 0;
}



// FUNCTION 1408c13d0 FUN_1408c13d0 body=69 status=ok
// SIG undefined FUN_1408c13d0(void)

void FUN_1408c13d0(undefined8 *param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  FUN_14097e147(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_1408c1674(param_1,param_2);
    return;
  }
  return;
}



// FUNCTION 1408c1416 FUN_1408c1416 body=605 status=ok
// SIG undefined FUN_1408c1416(void)

bool FUN_1408c1416(longlong param_1,int param_2,undefined8 *param_3,longlong *param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  undefined8 *puVar6;
  uint uVar7;
  uint *puVar8;
  int iVar9;
  undefined *puVar10;
  longlong lVar11;
  longlong lVar12;
  
  lVar12 = (longlong)param_2;
  lVar2 = *(longlong *)
           (*(longlong *)(param_1 + 0x570) +
           (longlong)*(char *)(*(longlong *)(param_1 + 0x588) + lVar12) * 8);
  if (lVar2 != 0) {
    param_3[0x17] = *(undefined8 *)(param_1 + 0x560);
    param_3[0x18] = lVar2;
    param_3[0x19] = *(undefined8 *)(param_1 + 0x580);
    uVar5 = (*(byte *)(param_1 + 0x6b) & 1) * 0x40 +
            (*(uint *)((longlong)param_3 + 0xe4) & 0xfffffabf) + 0x500;
    *(uint *)((longlong)param_3 + 0xe4) = uVar5;
    uVar7 = 0x200;
    if (((*(byte *)(param_1 + 0x78) & 1) != 0) && (2 < *(int *)(*(longlong *)(param_1 + 0x210) + 8))
       ) {
      uVar7 = (uint)(1 < (byte)(*(char *)(param_1 + 0x68) - 1U)) << 0xb | 0x200;
    }
    *(byte *)((longlong)param_3 + 0xde) = (byte)param_2;
    *(uint *)((longlong)param_3 + 0xe4) = uVar5 & 0xfef035ff | uVar7;
    if (DAT_14caa7238 != DAT_14caa7264) {
      puVar10 = &DAT_14caa7268;
      if (DAT_14caa7270 != (undefined *)0x0) {
        puVar10 = DAT_14caa7270;
      }
      uVar5 = *(uint *)(puVar10 + (ulonglong)(DAT_14caa7278 - 1U & *(uint *)(param_1 + 0x2b0)) * 4);
      while (uVar5 != 0xffffffff) {
        puVar8 = (uint *)(DAT_14caa7230 + (longlong)(int)uVar5 * 0x18);
        if (*puVar8 == *(uint *)(param_1 + 0x2b0)) goto LAB_1408c1539;
        uVar5 = puVar8[4];
      }
    }
    puVar8 = (uint *)0x0;
LAB_1408c1539:
    lVar3 = *(longlong *)(puVar8 + 2);
    iVar9 = (int)param_4[1];
    *(uint *)(param_4 + 1) = iVar9 + 1U;
    if (*(uint *)((longlong)param_4 + 0xc) < iVar9 + 1U) {
      FUN_147471bde(param_4,iVar9);
    }
    lVar4 = *param_4;
    lVar11 = (longlong)iVar9 * 0x30;
    lVar1 = lVar4 + lVar11;
    *(undefined8 *)(lVar4 + 0x18 + lVar11) = 0;
    *(longlong *)(lVar4 + 8 + lVar11) = param_1 + 0x5d8;
    *(longlong *)(lVar4 + 0x10 + lVar11) = param_1 + 0x600;
    lVar3 = *(longlong *)(lVar3 + 0x60);
    if (lVar3 != 0) {
      *(longlong *)(lVar1 + 0x18) = lVar3;
      LOCK();
      *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
      UNLOCK();
    }
    *(longlong *)(lVar1 + 0x20) = param_1;
    *(int *)(lVar1 + 0x28) = param_2;
    puVar6 = (undefined8 *)param_3[0x15];
    if ((undefined8 *)param_3[0x15] == (undefined8 *)0x0) {
      puVar6 = param_3;
    }
    puVar6[7] = lVar1;
    *puVar6 = *(undefined8 *)(param_1 + 0x250);
    puVar6[3] = *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x558) + 0x58) + lVar12 * 8);
    iVar9 = ((*(int *)(param_1 + 0x330) >> ((byte)param_2 & 0x1f)) + -1) * *(int *)(param_1 + 0x328)
    ;
    *(int *)((longlong)puVar6 + 0x5c) = iVar9 * iVar9 * 2;
    *(undefined4 *)(puVar6 + 0xb) = 0;
    *(undefined4 *)(puVar6 + 0xd) =
         *(undefined4 *)
          (*(longlong *)(*(longlong *)(param_1 + 0x558) + 0x60) + 0x20 + lVar12 * 0x28);
    *(undefined4 *)((longlong)puVar6 + 0x6c) =
         *(undefined4 *)
          (*(longlong *)(*(longlong *)(param_1 + 0x558) + 0x60) + 0x24 + lVar12 * 0x28);
    if (*(char *)(param_1 + 0x3e1) == '\x01') {
      FUN_14745bf82(*(undefined8 *)(param_1 + 0x558),param_3);
    }
  }
  return lVar2 != 0;
}



// FUNCTION 1408c1674 FUN_1408c1674 body=230 status=ok
// SIG undefined FUN_1408c1674(void)

void FUN_1408c1674(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = (ulonglong)param_2 * 0x30;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (param_2 < 0x2ab) {
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
    if ((int)param_2 <= (int)(uVar1 / 0x30)) {
      uVar2 = uVar1 / 0x30 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x30,8);
  }
  return;
}



// FUNCTION 1408c175a FUN_1408c175a body=617 status=ok
// SIG undefined FUN_1408c175a(void)

undefined8 FUN_1408c175a(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  longlong lVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  char cVar5;
  undefined1 auStack_168 [32];
  int local_148;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  longlong *local_128;
  undefined1 local_119;
  undefined8 local_118;
  undefined8 uStack_110;
  longlong *local_108;
  undefined1 local_fc [4];
  undefined8 local_f8;
  undefined1 *local_f0;
  undefined8 uStack_e8;
  undefined1 local_d8;
  undefined7 uStack_d7;
  undefined1 local_d0 [136];
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_f8 = (undefined8 *)CONCAT71(local_f8._1_7_,1);
  local_d8 = 0;
  local_f0 = (undefined1 *)0x0;
  uStack_e8 = 0;
  memset(local_d0,0,0x88);
  local_48 = 0x20702;
  lVar1 = param_1 + 8;
  FUN_1403d4924(lVar1);
  FUN_14493db24(&local_f8);
  local_118 = *(undefined8 *)(param_4 + 0x20);
  uStack_110 = *(undefined8 *)(param_4 + 0x28);
  local_108 = *(longlong **)(param_4 + 0x30);
  if (local_108 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_108 + 1) = (int)local_108[1] + 1;
    UNLOCK();
  }
  cVar5 = FUN_1403e7f2a(&local_118);
  if (cVar5 != '\0') {
    local_f0 = &local_119;
    local_119 = 1;
    local_f8 = &local_118;
    FUN_1403d4e02(param_1 + 0xc0,local_fc);
    if (*(longlong *)(param_1 + -0x90) == 0) goto LAB_1408c18de;
    plVar3 = (longlong *)(param_1 + -0xc0);
    (**(code **)(*plVar3 + 0x28))(plVar3,&local_f8);
    if (((int)local_f8 == (int)DAT_14c967818) && (local_f8._4_4_ == DAT_14c967818._4_4_))
    goto LAB_1408c18de;
    plVar4 = *(longlong **)(param_1 + -0x90);
    local_148 = (uint)*(byte *)(param_4 + 10) * 2;
    local_138 = (undefined4)local_118;
    uStack_134 = local_118._4_4_;
    uStack_130 = (undefined4)uStack_110;
    uStack_12c = uStack_110._4_4_;
    local_128 = local_108;
    if (local_108 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_108 + 1) = (int)local_108[1] + 1;
      UNLOCK();
    }
    FUN_1408c19c4(&local_f8,plVar3,*(undefined4 *)(param_4 + 0x10),&local_138);
    cVar5 = (**(code **)(*plVar4 + 0x48))(plVar4);
    plVar3 = (longlong *)CONCAT71(uStack_d7,local_d8);
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar4 = plVar3 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
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
    if (cVar5 != '\0') goto LAB_1408c18de;
  }
  local_f8 = (undefined8 *)((ulonglong)local_f8 & 0xffffffffffffff00);
  local_d8 = 0;
  local_f0 = (undefined1 *)0x0;
  uStack_e8 = 0;
  memset(local_d0,0,0x88);
  local_48 = CONCAT35(local_48._5_3_,0x20702);
  FUN_1403d4924(lVar1,&local_f8);
  FUN_14493db24(&local_f8);
LAB_1408c18de:
  FUN_1403d4c6e(param_2,lVar1);
  plVar3 = local_108;
  if (local_108 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_108 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_108)(local_108);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1408c19c4 FUN_1408c19c4 body=250 status=ok
// SIG undefined FUN_1408c19c4(void)

undefined8 *
FUN_1408c19c4(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined8 *param_4,
             undefined4 param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_58 [36];
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = param_2;
  *(undefined4 *)((longlong)param_1 + 0xc) = param_3;
  param_1[2] = *param_4;
  param_1[3] = param_4[1];
  lVar3 = param_4[2];
  param_1[4] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  *(undefined4 *)(param_1 + 5) = param_5;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0x3f800000;
  *(undefined1 *)(param_1 + 6) = 0;
  if (DAT_14c9670a0 == (longlong *)0x0) {
    plVar4 = (longlong *)FUN_14001cc68(0x78,0x10);
    FUN_14593912e(plVar4,1,1);
    DAT_14c9670a0 = plVar4;
  }
  (**(code **)(*DAT_14c9670a0 + 0x58))(DAT_14c9670a0,&local_34,param_3);
  *(undefined4 *)(param_1 + 1) = local_34;
  plVar4 = (longlong *)param_4[2];
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
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1408c1ac0 FUN_1408c1ac0 body=613 status=ok
// SIG undefined FUN_1408c1ac0(void)

void FUN_1408c1ac0(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  bool bVar12;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1404857c6(param_1 + 0x660,0);
  FUN_1447c0e7a(param_1);
  for (lVar9 = param_1; lVar9 != 0; lVar9 = *(longlong *)(lVar9 + 0x20)) {
    if ((*(uint *)(lVar9 + 8) & 0x30) != 0) goto LAB_1408c1b1a;
  }
  FUN_1408c1d26(param_1 + 0x698,0);
LAB_1408c1b1a:
  lVar9 = *(longlong *)(param_1 + 0xb0);
  if (lVar9 == 0) {
    lVar9 = FUN_1448abda6(param_1);
  }
  lVar2 = *(longlong *)(param_1 + 0x6e8);
  if (lVar9 == 0 || lVar2 == 0) {
    if (lVar9 == 0) goto LAB_1408c1c08;
  }
  else {
    if (*(longlong *)(lVar9 + 0x1f0) == 0) {
      puVar7 = (undefined8 *)(lVar9 + 0x458);
    }
    else {
      puVar7 = (undefined8 *)(*(longlong *)(lVar9 + 0x1f0) + 0xf0);
    }
    uVar3 = *puVar7;
    lVar8 = FUN_144a61814(uVar3,(undefined8 *)(param_1 + 0x6e8));
    if (lVar8 != 0) {
      FUN_1405a424c(uVar3,lVar2);
    }
    *(undefined8 *)(param_1 + 0x6e8) = 0;
  }
  uVar4 = DAT_14cb1c840;
  if (DAT_14c9a7d10 == (undefined8 *)0x0) {
    DAT_14c9a7d10 = (undefined8 *)FUN_14001cc68(0x20,0x10);
    *DAT_14c9a7d10 = 0;
    DAT_14c9a7d10[1] = 0;
    DAT_14c9a7d10[2] = 0;
    DAT_14c9a7d10[3] = 0;
  }
  FUN_14005915a(DAT_14c9a7d10,&local_40,uVar4,lVar9);
  plVar10 = local_38;
  if ((local_40 == 0) || (local_38 == (longlong *)0x0)) {
    plVar10 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(local_38 + 1) = (int)local_38[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)((longlong)local_38 + 0xc) = *(int *)((longlong)local_38 + 0xc) + 1;
    UNLOCK();
    LOCK();
    plVar11 = local_38 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
    }
  }
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar11 = local_38 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar1 = (int *)((longlong)local_38 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_38 + 0x10))(local_38);
      }
    }
  }
  if (plVar10 != (longlong *)0x0) {
    iVar6 = (int)plVar10[1];
    do {
      plVar11 = (longlong *)0x0;
      if (iVar6 == 0) break;
      LOCK();
      iVar5 = (int)plVar10[1];
      bVar12 = iVar6 == iVar5;
      if (bVar12) {
        *(int *)(plVar10 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
      plVar11 = plVar10;
    } while (!bVar12);
    LOCK();
    piVar1 = (int *)((longlong)plVar10 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar10 + 0x10))(plVar10);
    }
    if (plVar11 != (longlong *)0x0) {
      if (local_40 != 0) {
        FUN_1408c1da2(local_40 + 0x2f0,param_1,1);
      }
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
  }
LAB_1408c1c08:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1408c1d26 FUN_1408c1d26 body=124 status=ok
// SIG undefined FUN_1408c1d26(void)

void FUN_1408c1d26(longlong *param_1)

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



// FUNCTION 1408c1da2 FUN_1408c1da2 body=895 status=ok
// SIG undefined FUN_1408c1da2(void)

void FUN_1408c1da2(longlong param_1,ulonglong param_2,char param_3)

{
  longlong *plVar1;
  ulonglong *puVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  bool bVar10;
  
  if (*(char *)(param_2 + 0x683) != '\x01') {
    plVar1 = (longlong *)(param_1 + 0x78);
    iVar5 = *(int *)(param_1 + 0x80);
    if (0 < iVar5) {
      uVar8 = 0;
      do {
        lVar9 = *plVar1;
        if (*(ulonglong *)(lVar9 + 8 + (longlong)(int)uVar8 * 0x18) == param_2) {
          iVar7 = ~uVar8 + iVar5;
          if (iVar7 != 0) {
            if (0 < iVar7) {
              iVar7 = 1;
            }
            memmove((void *)(lVar9 + (longlong)(int)uVar8 * 0x18),
                    (void *)(lVar9 + (longlong)(iVar5 - iVar7) * 0x18),(longlong)iVar7 * 0x18);
            iVar5 = *(int *)(param_1 + 0x80);
          }
          iVar5 = iVar5 + -1;
          *(int *)(param_1 + 0x80) = iVar5;
        }
        else {
          uVar8 = uVar8 + 1;
        }
      } while ((int)uVar8 < iVar5);
    }
    if ((param_3 == '\0') && (*(char *)(param_2 + 0x680) != '\0')) {
      if (*(int *)(param_1 + 0x30) != *(int *)(param_1 + 0x5c)) {
        uVar8 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        lVar9 = param_1 + 0x60;
        if (*(longlong *)(param_1 + 0x68) != 0) {
          lVar9 = *(longlong *)(param_1 + 0x68);
        }
        iVar7 = *(int *)(lVar9 + (ulonglong)
                                 (*(int *)(param_1 + 0x70) - 1U & (uVar8 >> 0x10 ^ uVar8)) * 4);
        if (iVar7 != -1) {
          do {
            if (*(ulonglong *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar7 * 0x18) == param_2) {
              return;
            }
            iVar7 = *(int *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar7 * 0x18 + 0x10);
          } while (iVar7 != -1);
        }
      }
      *(uint *)(param_1 + 0x80) = iVar5 + 1U;
      if (*(uint *)(param_1 + 0x84) < iVar5 + 1U) {
        FUN_1408c2122(plVar1,iVar5);
      }
      puVar2 = (ulonglong *)(*plVar1 + (longlong)iVar5 * 0x18);
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      if (param_2 == 0) {
        uVar8 = 0;
        uVar4 = 0;
      }
      else {
        uVar8 = *(uint *)(param_2 + 0xc);
        if ((int)uVar8 < DAT_14c9647dc) {
          lVar9 = (ulonglong)((uVar8 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8);
        }
        else {
          lVar9 = 0;
        }
        uVar4 = (ulonglong)*(uint *)(lVar9 + 0x10);
        if (*(uint *)(lVar9 + 0x10) == 0) {
          LOCK();
          iVar5 = DAT_14c964868 + 1;
          UNLOCK();
          uVar6 = DAT_14c964868 + 1;
          bVar10 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar5;
          if (bVar10) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,uVar6);
          }
          LOCK();
          uVar3 = *(uint *)(lVar9 + 0x10);
          bVar10 = uVar3 == 0;
          if (bVar10) {
            *(uint *)(lVar9 + 0x10) = uVar6;
            uVar3 = 0;
          }
          UNLOCK();
          if (bVar10) {
            uVar3 = uVar6;
          }
          uVar4 = (ulonglong)uVar3;
        }
      }
      *puVar2 = (ulonglong)uVar8 | uVar4 << 0x20;
      puVar2[1] = param_2;
      *(undefined1 *)(puVar2 + 2) = 1;
    }
    else if (*(int *)(param_1 + 0x30) != *(int *)(param_1 + 0x5c)) {
      uVar8 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
      uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
      lVar9 = param_1 + 0x60;
      if (*(longlong *)(param_1 + 0x68) != 0) {
        lVar9 = *(longlong *)(param_1 + 0x68);
      }
      iVar7 = *(int *)(lVar9 + (ulonglong)(*(int *)(param_1 + 0x70) - 1U & (uVar8 >> 0x10 ^ uVar8))
                               * 4);
      if (iVar7 != -1) {
        do {
          if (*(ulonglong *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar7 * 0x18) == param_2) {
            *(uint *)(param_1 + 0x80) = iVar5 + 1U;
            if (*(uint *)(param_1 + 0x84) < iVar5 + 1U) {
              FUN_1408c2122(plVar1,iVar5);
            }
            puVar2 = (ulonglong *)(*plVar1 + (longlong)iVar5 * 0x18);
            *puVar2 = 0;
            puVar2[1] = 0;
            puVar2[2] = 0;
            if (param_2 == 0) {
              uVar8 = 0;
              uVar4 = 0;
            }
            else {
              uVar8 = *(uint *)(param_2 + 0xc);
              if ((int)uVar8 < DAT_14c9647dc) {
                lVar9 = (ulonglong)((uVar8 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8);
              }
              else {
                lVar9 = 0;
              }
              uVar4 = (ulonglong)*(uint *)(lVar9 + 0x10);
              if (*(uint *)(lVar9 + 0x10) == 0) {
                LOCK();
                iVar5 = DAT_14c964868 + 1;
                UNLOCK();
                uVar6 = DAT_14c964868 + 1;
                bVar10 = DAT_14c964868 < 1000;
                DAT_14c964868 = iVar5;
                if (bVar10) {
                  FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                ,uVar6);
                }
                LOCK();
                uVar3 = *(uint *)(lVar9 + 0x10);
                bVar10 = uVar3 == 0;
                if (bVar10) {
                  *(uint *)(lVar9 + 0x10) = uVar6;
                  uVar3 = 0;
                }
                UNLOCK();
                if (bVar10) {
                  uVar3 = uVar6;
                }
                uVar4 = (ulonglong)uVar3;
              }
            }
            *puVar2 = (ulonglong)uVar8 | uVar4 << 0x20;
            puVar2[1] = param_2;
            *(undefined1 *)(puVar2 + 2) = 0;
            return;
          }
          iVar7 = *(int *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar7 * 0x18 + 0x10);
        } while (iVar7 != -1);
      }
    }
  }
  return;
}



// FUNCTION 1408c2122 FUN_1408c2122 body=373 status=ok
// SIG undefined FUN_1408c2122(void)

void FUN_1408c2122(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1408c21ab;
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
LAB_1408c21ab:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x18)) {
    uVar7 = uVar5 / 0x18 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x18,8);
  return;
}



// FUNCTION 1408c22a6 FUN_1408c22a6 body=40 status=ok
// SIG undefined FUN_1408c22a6(void)

undefined8 FUN_1408c22a6(undefined8 param_1,int param_2)

{
  FUN_1408c22ce();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1408c22ce FUN_1408c22ce body=538 status=ok
// SIG undefined FUN_1408c22ce(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1408c22ce(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  *param_1 = &PTR_FUN_14b2f9270;
  FUN_1408c24e8(param_1[0x37],*(undefined4 *)(param_1 + 0x38));
  if (param_1[0x37] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0x35];
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
  plVar3 = (longlong *)param_1[0x32];
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
  FUN_1408c24e8(param_1[0x2f],*(undefined4 *)(param_1 + 0x30));
  if (param_1[0x2f] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0x2d];
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
  plVar3 = (longlong *)param_1[0x2a];
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
  if (param_1[0x27] != 0) {
    FUN_1400020a8();
  }
  if ((param_1[0x22] != 0) && ((DAT_14cb26569 & 1) != 0)) {
    FUN_1400848c0(*(undefined8 *)(param_1[0x22] + 0x50));
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  if ((*(char *)(param_1 + 2) != '\0') &&
     (puVar4 = (undefined8 *)param_1[1], puVar4 != (undefined8 *)0x0)) {
    if (puVar4[3] != 0) {
      FUN_1400020a8();
    }
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    _DAT_14c9a0eac = _DAT_14c9a0eac + -1;
    *puVar4 = DAT_14c9a0ea0;
    DAT_14c9a0ea0 = puVar4;
                    /* WARNING: Could not recover jumptable at 0x0001408c241c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    return;
  }
  return;
}



// FUNCTION 1408c24e8 FUN_1408c24e8 body=91 status=ok
// SIG undefined FUN_1408c24e8(void)

void FUN_1408c24e8(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 0x30);
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
      if (plVar4[-3] != 0) {
        FUN_1400020a8();
      }
      plVar4 = plVar4 + 8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1408c2550 FUN_1408c2550 body=139 status=ok
// SIG undefined FUN_1408c2550(void)

ulonglong FUN_1408c2550(longlong *param_1,ulonglong *param_2,ulonglong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  longlong *plVar4;
  
  uVar2 = *param_2;
  if (uVar2 < 2) {
    param_3 = 0;
  }
  else {
    param_3 = param_3 & 0xffffffff;
    if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
      plVar4 = param_1 + 7;
      if ((longlong *)param_1[8] != (longlong *)0x0) {
        plVar4 = (longlong *)param_1[8];
      }
      iVar3 = *(int *)((longlong)plVar4 +
                      (ulonglong)((int)param_1[9] - 1U & (int)uVar2 + (int)(uVar2 >> 0x20) * 0x17) *
                      4);
      if (iVar3 != -1) {
        do {
          lVar1 = *param_1 + (longlong)iVar3 * 0x40;
          if (*(ulonglong *)(*param_1 + (longlong)iVar3 * 0x40) == uVar2) {
            if (lVar1 == 0) {
              return param_3;
            }
            if (lVar1 == -8) {
              return param_3;
            }
            uVar2 = CONCAT71((int7)(param_3 >> 8),*(undefined1 *)(lVar1 + 0x30)) &
                    0xffffffffffffff08;
            return CONCAT71((int7)(uVar2 >> 8),(byte)uVar2 >> 3);
          }
          iVar3 = *(int *)(lVar1 + 0x38);
        } while (iVar3 != -1);
      }
    }
  }
  return param_3;
}



// FUNCTION 1408c25db FUN_1408c25db body=49 status=ok
// SIG undefined FUN_1408c25db(void)

longlong FUN_1408c25db(void)

{
  if (DAT_14cc05c80 == 0) {
    FUN_140f50038(&DAT_14cc05c80,&PTR_s__Script_ControlRig_14bb46cd8);
  }
  return DAT_14cc05c80;
}



// FUNCTION 1408c261a FUN_1408c261a body=40 status=ok
// SIG undefined FUN_1408c261a(void)

undefined8 FUN_1408c261a(undefined8 param_1,int param_2)

{
  FUN_1408c2642();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1408c2642 FUN_1408c2642 body=618 status=ok
// SIG undefined FUN_1408c2642(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1408c2642(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  *param_1 = &PTR_FUN_14b036160;
  plVar3 = (longlong *)param_1[0x6a];
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
  if (param_1[0x66] != 0) {
    FUN_1400020a8();
  }
  param_1[0x56] = &DAT_14a171d50;
  *(undefined4 *)(param_1 + 0x59) = 0;
  if (*(int *)((longlong)param_1 + 0x2cc) != 0) {
    FUN_140115c12(param_1 + 0x58,0);
  }
  param_1[0x57] = 0;
  if (param_1[0x58] != 0) {
    FUN_1400020a8();
  }
  FUN_1408c28ac(param_1[0x53],*(undefined4 *)(param_1 + 0x54));
  if (param_1[0x53] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x51] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x43] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x41] != 0) {
    FUN_1400020a8();
  }
  param_1[0x31] = &DAT_14a171d50;
  *(undefined4 *)(param_1 + 0x34) = 0;
  if (*(int *)((longlong)param_1 + 0x1a4) != 0) {
    FUN_140115c12(param_1 + 0x33,0);
  }
  param_1[0x32] = 0;
  if (param_1[0x33] != 0) {
    FUN_1400020a8();
  }
  param_1[0x11] = &DAT_14a171d50;
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (*(int *)((longlong)param_1 + 0xa4) != 0) {
    FUN_140115c12(param_1 + 0x13,0);
  }
  param_1[0x12] = 0;
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  if ((*(char *)(param_1 + 2) != '\0') &&
     (puVar4 = (undefined8 *)param_1[1], puVar4 != (undefined8 *)0x0)) {
    if (puVar4[3] != 0) {
      FUN_1400020a8();
    }
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    _DAT_14c9a0eac = _DAT_14c9a0eac + -1;
    *puVar4 = DAT_14c9a0ea0;
    DAT_14c9a0ea0 = puVar4;
                    /* WARNING: Could not recover jumptable at 0x0001408c283a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    return;
  }
  return;
}



// FUNCTION 1408c28ac FUN_1408c28ac body=54 status=ok
// SIG undefined FUN_1408c28ac(void)

void FUN_1408c28ac(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x78);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 0x11;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1408c28e2 FUN_1408c28e2 body=3728 status=ok
// SIG undefined FUN_1408c28e2(void)

longlong * FUN_1408c28e2(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 uVar9;
  int iVar10;
  uint uVar11;
  longlong *plVar12;
  code *pcVar13;
  code *pcVar14;
  longlong lVar15;
  longlong lVar16;
  int iVar17;
  undefined1 auStack_158 [32];
  undefined4 local_138;
  undefined4 local_130;
  undefined4 local_128;
  undefined8 local_120;
  wchar_t *local_118;
  code *local_110;
  undefined1 *local_108;
  code **local_100;
  code *local_f8;
  code *local_f0;
  longlong *local_e0;
  longlong *local_d8;
  longlong local_d0;
  undefined8 local_c8;
  code *pcStack_c0;
  longlong *local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  longlong local_a0;
  code *local_98;
  int local_90;
  undefined1 local_84 [4];
  code *local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_158;
  if ((*(uint *)(param_1 + -0x20) & 0x10) != 0) {
    local_e0 = (longlong *)(param_1 + 0x200);
    goto LAB_1408c2c88;
  }
  local_e0 = (longlong *)(param_1 + 0x730);
  *(undefined4 *)(param_1 + 0x738) = 0;
  if (*(int *)(param_1 + 0x73c) < 0) {
    FUN_1491cc0a4(local_e0);
  }
  lVar7 = *(longlong *)(*(longlong *)(param_1 + -0x18) + 0x110);
  if (lVar7 == 0) {
LAB_1408c2fc6:
    FUN_1491a0dea(local_e0,param_1 + 0x200);
  }
  else {
    lVar5 = FUN_1401242c6();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x38) < *(int *)(lVar5 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8)
        != lVar5 + 0x30)) goto LAB_1408c2fc6;
    puVar6 = (undefined8 *)(**(code **)(*(longlong *)(lVar7 + 0x28) + 0x30))(lVar7 + 0x28);
    uVar1 = *(uint *)(puVar6 + 1);
    if (uVar1 != 0) {
      iVar4 = *(int *)(param_1 + 0x738);
      *(uint *)(param_1 + 0x738) = iVar4 + uVar1;
      if ((uint)(*(int *)(param_1 + 0x73c) - iVar4) < uVar1) {
        FUN_140730f78(local_e0,iVar4);
      }
      FUN_1491cc0d4((longlong)iVar4 * 8 + *local_e0,*puVar6,uVar1);
    }
  }
  if (((*(int *)(param_1 + 0x798) != 0) && (*(longlong **)(param_1 + 0x790) != (longlong *)0x0)) &&
     (cVar3 = (**(code **)(**(longlong **)(param_1 + 0x790) + 0x30))(), cVar3 != '\0')) {
    if (*(int *)(param_1 + 0x798) == 0) {
      plVar12 = (longlong *)0x0;
    }
    else {
      plVar12 = *(longlong **)(param_1 + 0x790);
    }
    (**(code **)(*plVar12 + 0x58))(plVar12,&local_80);
    lVar7 = (longlong)(int)(uint)uStack_78;
    if (lVar7 != 0) {
      iVar4 = *(int *)(param_1 + 0x738);
      *(uint *)(param_1 + 0x738) = iVar4 + (uint)uStack_78;
      if ((uint)(*(int *)(param_1 + 0x73c) - iVar4) < (uint)uStack_78) {
        FUN_140730f78(local_e0,iVar4);
      }
      memmove((void *)((longlong)iVar4 * 8 + *local_e0),local_80,lVar7 << 3);
      uStack_78 = (longlong *)((ulonglong)uStack_78._4_4_ << 0x20);
    }
    if (local_80 != (code *)0x0) {
      FUN_1400020a8();
    }
  }
  (**(code **)(*(longlong *)(param_1 + -0x28) + 0x360))((longlong *)(param_1 + -0x28),&local_98,0);
  if ((longlong)local_90 != 0) {
    pcVar14 = local_98 + (longlong)local_90 * 0x30;
    plVar12 = (longlong *)(param_1 + 0x740);
    lVar7 = param_1 + 0x778;
    pcVar13 = local_98;
    do {
      if ((*(longlong *)(pcVar13 + 0x28) != 0) &&
         (lVar5 = *(longlong *)(pcVar13 + 0x18), lVar5 != 0)) {
        lVar16 = FUN_144a797b2();
        if (((*(int *)(lVar16 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
            ((*(longlong *)
               (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar16 + 0x38) * 8) == lVar16 + 0x30 &&
             (lVar16 = FUN_140e9e504(), lVar16 != 0)))) &&
           ((*(int *)(lVar16 + 0x38) <= *(int *)(lVar5 + 0x38) &&
            (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar16 + 0x38) * 8) ==
             lVar16 + 0x30)))) {
          local_d8 = *(longlong **)(pcVar13 + 0x28);
          lVar5 = *local_d8;
          if (((lVar5 != 0) && ((*(uint *)(lVar5 + 8) >> 0x1e & 1) == 0)) &&
             (*(longlong *)(lVar5 + 0x18) != 0)) {
            iVar4 = *(int *)(param_1 + 0x748);
            iVar10 = *(int *)(param_1 + 0x774);
            if (iVar4 != iVar10) {
              lVar5 = *(longlong *)pcVar13;
              uVar1 = (uint)((ulonglong)lVar5 >> 0x10);
              uVar11 = (uint)lVar5 & 0xffff;
              lVar16 = *(longlong *)(param_1 + 0x780);
              if (*(longlong *)(param_1 + 0x780) == 0) {
                lVar16 = lVar7;
              }
              iVar17 = *(int *)(lVar16 + (ulonglong)
                                         (*(int *)(param_1 + 0x788) - 1U &
                                         (int)((ulonglong)lVar5 >> 0x20) +
                                         ((uint)lVar5 << 0x10 | uVar11) +
                                         (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar11 >> 4)) * 4);
              if (iVar17 != -1) {
                do {
                  plVar8 = (longlong *)(*plVar12 + (longlong)iVar17 * 0x18);
                  if (*plVar8 == lVar5) {
                    if ((plVar8 + 1 != (longlong *)0x0 && plVar8 != (longlong *)0x0) &&
                       (((lVar16 = plVar8[1], lVar16 == 0 ||
                         ((*(uint *)(lVar16 + 8) >> 0x1e & 1) != 0)) ||
                        ((short)*(undefined4 *)(lVar16 + 8) < 0)))) {
                      FUN_1491cc122(plVar12);
                      lVar5 = *(longlong *)pcVar13;
                      iVar4 = *(int *)(param_1 + 0x748);
                      iVar10 = *(int *)(param_1 + 0x774);
                    }
                    break;
                  }
                  iVar17 = (int)plVar8[2];
                } while (iVar17 != -1);
              }
              if (iVar4 != iVar10) {
                uVar1 = (uint)((ulonglong)lVar5 >> 0x10);
                uVar11 = (uint)lVar5 & 0xffff;
                lVar16 = *(longlong *)(param_1 + 0x780);
                if (*(longlong *)(param_1 + 0x780) == 0) {
                  lVar16 = lVar7;
                }
                iVar17 = *(int *)(lVar16 + (ulonglong)
                                           (*(int *)(param_1 + 0x788) - 1U &
                                           (int)((ulonglong)lVar5 >> 0x20) +
                                           ((uint)lVar5 << 0x10 | uVar11) +
                                           (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar11 >> 4)) * 4);
                if (iVar17 != -1) {
                  do {
                    if (*(longlong *)(*plVar12 + (longlong)iVar17 * 0x18) == lVar5)
                    goto LAB_1408c33df;
                    iVar17 = *(int *)(*plVar12 + (longlong)iVar17 * 0x18 + 0x10);
                  } while (iVar17 != -1);
                }
              }
            }
            uVar9 = FUN_14599ad8a();
            local_a0 = FUN_1491a0e48(DAT_14c951640,uVar9);
            if ((local_a0 != 0) && (DAT_14c950c29 != 0)) {
              FUN_1456cec3c(local_a0);
            }
            uStack_78 = &local_a0;
            local_80 = pcVar13;
            FUN_1491cc270(plVar12,local_84,&local_80);
            lVar5 = *(longlong *)pcVar13;
            iVar4 = *(int *)(param_1 + 0x748);
            iVar10 = *(int *)(param_1 + 0x774);
LAB_1408c33df:
            if (iVar4 != iVar10) {
              uVar1 = (uint)((ulonglong)lVar5 >> 0x10);
              uVar11 = (uint)lVar5 & 0xffff;
              lVar16 = *(longlong *)(param_1 + 0x780);
              if (*(longlong *)(param_1 + 0x780) == 0) {
                lVar16 = lVar7;
              }
              iVar4 = *(int *)(lVar16 + (ulonglong)
                                        (*(int *)(param_1 + 0x788) - 1U &
                                        (int)((ulonglong)lVar5 >> 0x20) +
                                        ((uint)lVar5 << 0x10 | uVar11) +
                                        (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar11 >> 4)) * 4);
              if (iVar4 != -1) {
                do {
                  plVar8 = (longlong *)(*plVar12 + (longlong)iVar4 * 0x18);
                  if (*plVar8 == lVar5) goto LAB_1408c33e9;
                  iVar4 = (int)plVar8[2];
                } while (iVar4 != -1);
              }
            }
            plVar8 = (longlong *)0x0;
LAB_1408c33e9:
            FUN_1400021e4(pcVar13,&local_80);
            local_d0 = plVar8[1];
            if ((code **)(local_d0 + 0x28) == &local_80) {
              if (local_80 != (code *)0x0) {
                FUN_1400020a8();
              }
            }
            else {
              if (*(longlong *)(local_d0 + 0x28) != 0) {
                FUN_1400020a8();
              }
              *(code **)(local_d0 + 0x28) = local_80;
              local_80 = (code *)0x0;
              *(uint *)(local_d0 + 0x30) = (uint)uStack_78;
              *(uint *)(local_d0 + 0x34) = uStack_78._4_4_;
            }
            local_d0 = plVar8[1];
            local_d8 = (longlong *)*local_d8;
            if ((DAT_14c950c29 == 1) && (local_d8 != (longlong *)0x0)) {
              FUN_1456cec3c(local_d8);
LAB_1408c34b9:
              local_a8 = 0;
              uStack_b0 = 0;
              local_b8 = (longlong *)0x0;
              pcStack_c0 = (code *)0x0;
              local_c8 = 0;
              FUN_1400bbfc4(&local_80,local_d8);
              pcStack_c0 = local_80;
              local_b8 = uStack_78;
              if (uStack_b0 != 0) {
                FUN_1400020a8();
              }
              uStack_b0 = CONCAT44(uStack_6c,local_70);
              local_a8 = CONCAT44(uStack_64,uStack_68);
              cVar3 = (*(code *)PTR_FUN_14c758760)();
              if (cVar3 != '\0') {
                uVar1 = *(uint *)((longlong)local_d8 + 0xc);
                if ((int)uVar1 < DAT_14c9647dc) {
                  lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
                }
                else {
                  lVar5 = 0;
                }
                if ((*(uint *)(lVar5 + 8) & 0x8400000) != 0) {
                  local_c8 = 0;
                  goto LAB_1408c3697;
                }
              }
              FUN_14485c47a(&local_c8,local_d8);
            }
            else {
              uStack_b0 = 0;
              local_a8 = 0;
              if (local_d8 != (longlong *)0x0) goto LAB_1408c34b9;
              local_c8 = 0;
              pcStack_c0 = (code *)0x0;
              local_b8 = (longlong *)0x0;
            }
LAB_1408c3697:
            FUN_1490dadc0(local_d0,&local_c8);
            local_d8 = (longlong *)plVar8[1];
            if ((DAT_14c950c29 == 1) && (local_d8 != (longlong *)0x0)) {
              FUN_1456cec3c(local_d8);
            }
            iVar4 = *(int *)(param_1 + 0x738);
            *(uint *)(param_1 + 0x738) = iVar4 + 1U;
            if (*(uint *)(param_1 + 0x73c) < iVar4 + 1U) {
              FUN_140730f78(local_e0,iVar4);
            }
            *(longlong **)(*local_e0 + (longlong)iVar4 * 8) = local_d8;
            if ((DAT_14c950c29 == 1) && (local_d8 != (longlong *)0x0)) {
              FUN_1456cec3c(local_d8);
            }
          }
        }
      }
      pcVar13 = pcVar13 + 0x30;
    } while (pcVar13 != pcVar14);
  }
  lVar7 = FUN_1401242c6();
  if (DAT_14c951858 == 0) {
    local_100 = &local_80;
    local_80 = FUN_1449e2820;
    local_f0 = FUN_14081d0ea;
    local_f8 = FUN_14081d0ea;
    local_108 = &LAB_1468c5283;
    local_110 = FUN_142809da0;
    local_118 = L"Engine";
    local_120 = 0x400000000;
    local_128 = 0x10000000;
    local_130 = 8;
    local_138 = 0x50;
    FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
  }
  lVar5 = *(longlong *)(param_1 + -8);
  if (lVar5 != 0) {
    do {
      if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x38) < *(int *)(lVar7 + 0x38)) ||
         (lVar16 = lVar5,
         *(longlong *)
          (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8)
         != lVar7 + 0x30)) {
        lVar16 = 0;
      }
    } while ((lVar16 == 0) && (lVar5 = *(longlong *)(lVar5 + 0x20), lVar5 != 0));
    if ((lVar16 != 0) &&
       ((plVar12 = (longlong *)(**(code **)(*(longlong *)(lVar16 + 0x28) + 0x30))(lVar16 + 0x28),
        plVar12 != (longlong *)0x0 && (lVar7 = plVar12[1], (longlong)(int)lVar7 != 0)))) {
      lVar5 = *plVar12;
      lVar16 = 0;
      do {
        lVar15 = *(longlong *)(lVar5 + lVar16);
        if ((lVar15 != 0) && ((DAT_14c950c29 & 1) != 0)) {
          FUN_1456cec3c(lVar15);
        }
        iVar4 = *(int *)(param_1 + 0x738);
        *(uint *)(param_1 + 0x738) = iVar4 + 1U;
        if (*(uint *)(param_1 + 0x73c) < iVar4 + 1U) {
          FUN_140730f78(local_e0,iVar4);
        }
        *(longlong *)(*local_e0 + (longlong)iVar4 * 8) = lVar15;
        if (DAT_14c950c29 == 1 && lVar15 != 0) {
          FUN_1456cec3c(lVar15);
        }
        lVar16 = lVar16 + 8;
      } while ((longlong)(int)lVar7 * 8 != lVar16);
    }
  }
  if (((((*(int *)(param_1 + 0x7e0) != 0) && (uVar1 = *(uint *)(param_1 + 0x7dc), -1 < (int)uVar1))
       && ((int)uVar1 < DAT_14c9647dc)) &&
      ((plVar12 = (longlong *)
                  ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
       plVar12 != (longlong *)0x0 && ((int)plVar12[2] == *(int *)(param_1 + 0x7e0))))) &&
     (((*(uint *)(plVar12 + 1) & 0x10200000) == 0 &&
      (((*(uint *)(plVar12 + 1) & 0x10200000) == 0 && (lVar7 = *plVar12, lVar7 != 0)))))) {
    if (DAT_14cad2858 == 0) {
      local_100 = &local_80;
      local_80 = FUN_144a7958c;
      local_f0 = FUN_14081d0ea;
      local_f8 = (code *)&LAB_146395584;
      local_108 = &LAB_147a0ba80;
      local_110 = (code *)&LAB_14575ccce;
      local_118 = L"Engine";
      local_120 = 0x40000000000;
      local_128 = 0x10000004;
      local_130 = 0x10;
      local_138 = 0x1180;
      FUN_14081cfa3(L"/Script/Engine",L"SkeletalMeshComponent",&DAT_14cad2858,FUN_1463bcebe);
    }
    if ((*(int *)(DAT_14cad2858 + 0x38) <= *(int *)(*(longlong *)(lVar7 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cad2858 + 0x38) * 8) == DAT_14cad2858 + 0x30)) {
      plVar12 = *(longlong **)(lVar7 + 0x658);
      if (plVar12 == (longlong *)0x0) {
        plVar12 = *(longlong **)(lVar7 + 0x660);
        if ((DAT_14c950c29 == 1) && (plVar12 != (longlong *)0x0)) goto LAB_1408c31cb;
        if (plVar12 != (longlong *)0x0) goto LAB_1408c2aea;
      }
      else {
        if (DAT_14c950c29 == 1) {
LAB_1408c31cb:
          FUN_1456cec3c(plVar12);
        }
LAB_1408c2aea:
        if (DAT_14cb06da8 == 0) {
          local_100 = &local_80;
          local_80 = FUN_1449e2820;
          local_f0 = FUN_14081d0ea;
          local_f8 = (code *)&LAB_1464003b0;
          local_108 = &LAB_147d17bdf;
          local_110 = (code *)&LAB_1417edf22;
          local_118 = L"Engine";
          local_120 = 0;
          local_128 = 0x10000000;
          local_130 = 8;
          local_138 = 0x588;
          FUN_14081cfa3(L"/Script/Engine",L"SkeletalMesh",&DAT_14cb06da8,FUN_14640038e);
        }
        if ((*(int *)(DAT_14cb06da8 + 0x38) <= *(int *)(plVar12[2] + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(plVar12[2] + 0x30) + (longlong)*(int *)(DAT_14cb06da8 + 0x38) * 8) ==
            DAT_14cb06da8 + 0x30)) {
          lVar5 = (**(code **)(*plVar12 + 0x3f8))(plVar12);
          if ((lVar5 != 0) &&
             ((plVar8 = (longlong *)(**(code **)(*(longlong *)(lVar5 + 0x28) + 0x30))(lVar5 + 0x28),
              plVar8 != (longlong *)0x0 && (lVar5 = plVar8[1], (longlong)(int)lVar5 != 0)))) {
            lVar16 = *plVar8;
            lVar15 = 0;
            do {
              lVar2 = *(longlong *)(lVar16 + lVar15);
              if ((lVar2 != 0) && ((DAT_14c950c29 & 1) != 0)) {
                FUN_1456cec3c(lVar2);
              }
              iVar4 = *(int *)(param_1 + 0x738);
              *(uint *)(param_1 + 0x738) = iVar4 + 1U;
              if (*(uint *)(param_1 + 0x73c) < iVar4 + 1U) {
                FUN_140730f78(local_e0,iVar4);
              }
              *(longlong *)(*local_e0 + (longlong)iVar4 * 8) = lVar2;
              if (DAT_14c950c29 == 1 && lVar2 != 0) {
                FUN_1456cec3c(lVar2);
              }
              lVar15 = lVar15 + 8;
            } while ((longlong)(int)lVar5 * 8 != lVar15);
          }
          plVar12 = (longlong *)(**(code **)(plVar12[0x1b] + 0x30))(plVar12 + 0x1b);
          if ((plVar12 != (longlong *)0x0) && (lVar5 = plVar12[1], (longlong)(int)lVar5 != 0)) {
            lVar16 = *plVar12;
            lVar15 = 0;
            do {
              lVar2 = *(longlong *)(lVar16 + lVar15);
              if ((lVar2 != 0) && ((DAT_14c950c29 & 1) != 0)) {
                FUN_1456cec3c(lVar2);
              }
              iVar4 = *(int *)(param_1 + 0x738);
              *(uint *)(param_1 + 0x738) = iVar4 + 1U;
              if (*(uint *)(param_1 + 0x73c) < iVar4 + 1U) {
                FUN_140730f78(local_e0,iVar4);
              }
              *(longlong *)(*local_e0 + (longlong)iVar4 * 8) = lVar2;
              if (DAT_14c950c29 == 1 && lVar2 != 0) {
                FUN_1456cec3c(lVar2);
              }
              lVar15 = lVar15 + 8;
            } while ((longlong)(int)lVar5 * 8 != lVar15);
          }
        }
      }
      plVar12 = (longlong *)(**(code **)(*(longlong *)(lVar7 + 0x28) + 0x30))(lVar7 + 0x28);
      if ((plVar12 != (longlong *)0x0) && (lVar7 = plVar12[1], (longlong)(int)lVar7 != 0)) {
        lVar5 = *plVar12;
        lVar16 = 0;
        do {
          lVar15 = *(longlong *)(lVar5 + lVar16);
          if ((lVar15 != 0) && ((DAT_14c950c29 & 1) != 0)) {
            FUN_1456cec3c(lVar15);
          }
          iVar4 = *(int *)(param_1 + 0x738);
          *(uint *)(param_1 + 0x738) = iVar4 + 1U;
          if (*(uint *)(param_1 + 0x73c) < iVar4 + 1U) {
            FUN_140730f78(local_e0,iVar4);
          }
          *(longlong *)(*local_e0 + (longlong)iVar4 * 8) = lVar15;
          if (DAT_14c950c29 == 1 && lVar15 != 0) {
            FUN_1456cec3c(lVar15);
          }
          lVar16 = lVar16 + 8;
        } while ((longlong)(int)lVar7 * 8 != lVar16);
      }
    }
  }
  if (local_98 != (code *)0x0) {
    FUN_1400020a8();
  }
LAB_1408c2c88:
  if ((local_60 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return local_e0;
}



// FUNCTION 1408c3774 FUN_1408c3774 body=514 status=ok
// SIG undefined FUN_1408c3774(void)

longlong * FUN_1408c3774(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined2 local_70;
  ushort uStack_6e;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined2 local_60;
  ushort uStack_5e;
  undefined4 uStack_5c;
  undefined8 uStack_58;
  undefined8 local_50;
  longlong lStack_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *param_2 = 0;
  param_2[1] = 0;
  plVar5 = *(longlong **)(param_1 + 0x10);
  do {
    if (plVar5 == (longlong *)0x0) {
LAB_1408c37da:
      if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
        return param_2;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    for (lVar10 = plVar5[10]; lVar10 != 0; lVar10 = *(longlong *)(lVar10 + 0x18)) {
      if ((~*(uint *)(*(longlong *)(lVar10 + 8) + 0x18) & 0x8001) == 0) {
LAB_1408c380c:
        uVar8 = *(ulonglong *)(lVar10 + 0x10);
        if ((uVar8 & 1) == 0) {
          while (1 < uVar8) {
            uVar8 = *(ulonglong *)(uVar8 + 0x10);
            if ((uVar8 & 1) != 0) goto LAB_1408c381a;
          }
        }
        else {
LAB_1408c381a:
          if ((uVar8 & 0xfffffffffffffffe) != 0) {
            if (DAT_14c950c29 != '\0') {
              FUN_1456cec3c();
            }
            uVar3 = *(uint *)((uVar8 & 0xfffffffffffffffe) + 0xc);
            if ((int)uVar3 < DAT_14c9647dc) {
              lVar6 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
            }
            else {
              lVar6 = 0;
            }
            if ((*(uint *)(lVar6 + 8) >> 0x19 & 1) == 0) {
              local_78 = 0;
              FUN_1409a6b0a(&local_70,lVar10,param_1,&local_78);
              if (((((uint)uStack_6e < DAT_14c87eb08 + 1U) &&
                   (CONCAT44(uStack_6c,CONCAT22(uStack_6e,local_70)) != 0)) &&
                  ((uint)uStack_5e < DAT_14c87eb08 + 1U)) &&
                 ((CONCAT44(uStack_5c,CONCAT22(uStack_5e,local_60)) != 0 && (lStack_48 != 0)))) {
                iVar4 = (int)param_2[1];
                *(uint *)(param_2 + 1) = iVar4 + 1U;
                if (*(uint *)((longlong)param_2 + 0xc) < iVar4 + 1U) {
                  FUN_1466843f6(param_2,iVar4);
                }
                lVar6 = *param_2;
                lVar7 = (longlong)iVar4 * 0x30;
                puVar2 = (undefined8 *)(lVar6 + 0x20 + lVar7);
                *puVar2 = local_50;
                puVar2[1] = lStack_48;
                puVar2 = (undefined8 *)(lVar6 + 0x10 + lVar7);
                *puVar2 = CONCAT44(uStack_5c,CONCAT22(uStack_5e,local_60));
                puVar2[1] = uStack_58;
                puVar1 = (undefined4 *)(lVar6 + lVar7);
                *puVar1 = CONCAT22(uStack_6e,local_70);
                puVar1[1] = uStack_6c;
                puVar1[2] = uStack_68;
                puVar1[3] = uStack_64;
              }
            }
          }
        }
        plVar9 = (longlong *)(lVar10 + 0x18);
        do {
          for (lVar10 = *plVar9; lVar10 != 0; lVar10 = *(longlong *)(lVar10 + 0x18)) {
            if ((~*(uint *)(*(longlong *)(lVar10 + 8) + 0x18) & 0x8001) == 0) goto LAB_1408c380c;
          }
          plVar5 = (longlong *)(**(code **)(*plVar5 + 0x2b0))();
          plVar9 = plVar5 + 10;
        } while (plVar5 != (longlong *)0x0);
        goto LAB_1408c37da;
      }
    }
    plVar5 = (longlong *)(**(code **)(*plVar5 + 0x2b0))();
  } while( true );
}



// FUNCTION 1408c3978 FUN_1408c3978 body=199 status=ok
// SIG undefined FUN_1408c3978(void)

undefined8 FUN_1408c3978(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  DWORD DVar4;
  DWORD DVar5;
  undefined8 uVar6;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar3 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar3 != 2) {
      if (iVar3 == 1) {
        DVar4 = FUN_140ad26c0();
        DVar5 = GetCurrentThreadId();
        if (DVar4 == DVar5) goto LAB_1408c39f0;
      }
      uVar6 = 0;
      goto LAB_1408c39be;
    }
  }
LAB_1408c39f0:
  FUN_14076964e(param_1,&local_28);
  if (local_28 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = FUN_1408c3a40(local_28,param_1);
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
LAB_1408c39be:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1408c3a40 FUN_1408c3a40 body=530 status=ok
// SIG undefined FUN_1408c3a40(void)

undefined8 FUN_1408c3a40(longlong param_1,longlong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined1 *puVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 auStack_178 [32];
  undefined8 local_158;
  undefined1 local_150 [256];
  undefined1 *local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_178;
  bVar4 = *(byte *)(param_1 + 0x70);
  if (bVar4 == 0) {
    local_50 = (undefined1 *)0x0;
    local_48 = 0x2000000000;
    lVar10 = *(longlong *)(param_2 + 0x40);
    if (lVar10 != 0) {
      uVar6 = FUN_1408c3c54();
      plVar7 = (longlong *)FUN_1403566f4(lVar10,uVar6);
      lVar10 = plVar7[1];
      if ((longlong)(int)lVar10 != 0) {
        lVar13 = *plVar7;
        lVar11 = 0;
        do {
          lVar1 = *(longlong *)(lVar13 + lVar11);
          uVar6 = FUN_1408c3c54();
          if (lVar1 != 0) {
            cVar3 = FUN_1448093f4(lVar1,uVar6);
            uVar2 = local_48;
            if (cVar3 != '\0') {
              lVar12 = (longlong)(int)local_48;
              uVar5 = (int)local_48 + 1;
              local_48 = CONCAT44(local_48._4_4_,uVar5);
              if (local_48._4_4_ < uVar5) {
                FUN_145753ed4(local_150,uVar2 & 0xffffffff);
              }
              puVar8 = local_50;
              if (local_50 == (undefined1 *)0x0) {
                puVar8 = local_150;
              }
              *(longlong *)(puVar8 + lVar12 * 8) = lVar1;
            }
          }
          lVar11 = lVar11 + 8;
        } while ((longlong)(int)lVar10 * 8 != lVar11);
        lVar10 = (longlong)(int)local_48;
        puVar8 = local_150;
        if (local_50 != (undefined1 *)0x0) {
          puVar8 = local_50;
        }
        if (lVar10 != 0) {
          lVar13 = 0;
          do {
            lVar11 = FUN_1408c3c8e(*(longlong *)(puVar8 + lVar13) + 0xf8);
            if (lVar11 != 0) {
              local_158 = 0;
              FUN_14485c47a(&local_158,lVar11);
              *(undefined8 *)(param_1 + 0x68) = local_158;
              *(undefined1 *)(param_1 + 0x70) = 1;
              break;
            }
            lVar13 = lVar13 + 8;
          } while (lVar10 * 8 != lVar13);
        }
      }
    }
    bVar4 = *(byte *)(param_1 + 0x70);
    if (bVar4 == 0) {
      *(undefined8 *)(param_1 + 0x68) = 0;
      *(undefined1 *)(param_1 + 0x70) = 1;
      bVar4 = 1;
    }
    if (local_50 != (undefined1 *)0x0) {
      FUN_1400020a8();
      bVar4 = *(byte *)(param_1 + 0x70);
    }
  }
  if (((bVar4 & 1) != 0) && (*(int *)(param_1 + 0x6c) != 0)) {
    uVar5 = *(uint *)(param_1 + 0x68);
    uVar6 = 0;
    if (((int)uVar5 < 0) || (DAT_14c9647dc <= (int)uVar5)) goto LAB_1408c3be2;
    puVar9 = (undefined8 *)
             ((ulonglong)((uVar5 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8));
    if ((((puVar9 != (undefined8 *)0x0) && (*(int *)(puVar9 + 2) == *(int *)(param_1 + 0x6c))) &&
        ((*(uint *)(puVar9 + 1) & 0x10200000) == 0)) && ((*(uint *)(puVar9 + 1) & 0x10200000) == 0))
    {
      uVar6 = *puVar9;
      goto LAB_1408c3be2;
    }
  }
  uVar6 = 0;
LAB_1408c3be2:
  if ((local_40 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1408c3c54 FUN_1408c3c54 body=57 status=ok
// SIG undefined FUN_1408c3c54(void)

void FUN_1408c3c54(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb58748 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb58748 = FUN_140002ddd(FUN_1464c20b8,uVar1,L"GbxActorPartDef_Gestalt");
  }
  return;
}



// FUNCTION 1408c3c8e FUN_1408c3c8e body=246 status=ok
// SIG undefined FUN_1408c3c8e(void)

longlong FUN_1408c3c8e(uint *param_1)

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
     (((*(uint *)(plVar5 + 1) & 0x10200000) != 0 || (lVar3 = *plVar5, lVar3 == 0)))) {
    if (*(longlong *)(param_1 + 2) == 0) {
      return 0;
    }
    lVar3 = FUN_140007850();
    cVar2 = (*(code *)PTR_FUN_14c758760)();
    if ((lVar3 == 0) || (cVar2 == '\0')) {
      FUN_14485c47a(param_1,lVar3);
      if (lVar3 == 0) {
        return 0;
      }
    }
    else {
      uVar1 = *(uint *)(lVar3 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar4 = 0;
      }
      if ((*(uint *)(lVar4 + 8) & 0x8400000) == 0) {
        FUN_14485c47a(param_1,lVar3);
      }
    }
    if ((*(uint *)(lVar3 + 8) >> 0x1e & 1) != 0) {
      return 0;
    }
  }
  lVar4 = FUN_140f5e1c2();
  if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
      lVar4 + 0x30)) {
    return lVar3;
  }
  return 0;
}



// FUNCTION 1408c3d84 FUN_1408c3d84 body=225 status=ok
// SIG undefined FUN_1408c3d84(void)

uint FUN_1408c3d84(longlong *param_1,ulonglong *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 8))(param_1,local_20);
  uVar1 = (uint)param_2[1];
  uVar2 = ((uint)(*param_2 >> 0x14) & 0xffff ^ (uint)(*param_2 >> 4)) * -0x7a143595;
  uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
  uVar2 = uVar1 >> 0xd ^ (uVar2 >> 0x10 ^ uVar2) - uVar1;
  uVar3 = uVar2 << 8 ^ (-0x61c88647 - uVar1) - uVar2;
  uVar4 = uVar3 >> 0xd ^ (uVar1 - uVar2) - uVar3;
  uVar1 = uVar4 >> 0xc ^ (uVar2 - uVar3) - uVar4;
  uVar2 = uVar1 << 0x10 ^ (uVar3 - uVar4) - uVar1;
  uVar3 = uVar2 >> 5 ^ (uVar4 - uVar1) - uVar2;
  uVar4 = uVar3 >> 3 ^ (uVar1 - uVar2) - uVar3;
  uVar1 = uVar4 << 10 ^ (uVar2 - uVar3) - uVar4;
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar1 >> 0xf ^ uVar3 - (uVar4 + uVar1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1408c3e74 FUN_1408c3e74 body=99 status=ok
// SIG undefined FUN_1408c3e74(void)

void FUN_1408c3e74(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1408c3ed8(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b0fc590;
  puVar1[5] = &PTR_FUN_14b0fcf90;
  puVar1[6] = &PTR_LAB_14b0fcfd0;
  puVar1[0x55] = &PTR_FUN_14b0fd020;
  puVar1[0x56] = &PTR_FUN_14b0fd0a0;
  puVar1[0x57] = &PTR_FUN_14b0fd0b0;
  return;
}



// FUNCTION 1408c3ed8 FUN_1408c3ed8 body=224 status=ok
// SIG undefined FUN_1408c3ed8(void)

undefined8 * FUN_1408c3ed8(undefined8 *param_1)

{
  FUN_14480568a();
  *param_1 = &PTR_FUN_14ac287f0;
  param_1[5] = &PTR_FUN_14ac291f0;
  param_1[6] = &PTR_LAB_14ac29230;
  param_1[0x55] = &PTR_FUN_14ac29280;
  param_1[0x56] = &PTR_FUN_14ac29300;
  param_1[0x57] = &PTR_FUN_14ac29310;
  param_1[0xc4] = 0;
  param_1[0xd6] = 0;
  *(undefined4 *)(param_1 + 0xd7) = 0;
  param_1[0xc6] = 0;
  param_1[199] = 0;
  param_1[200] = 0;
  param_1[0xc9] = 0;
  param_1[0xca] = 0;
  param_1[0xcb] = 0;
  param_1[0xcc] = 0;
  param_1[0xce] = 0;
  param_1[0xcf] = 0;
  param_1[0xd0] = 0;
  param_1[0xd1] = 0;
  param_1[0xd2] = 0;
  param_1[0xd3] = 0;
  *(undefined8 *)((longlong)param_1 + 0x6bc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x6c4) = 0;
  param_1[0xda] = 0;
  *(undefined4 *)(param_1 + 0xdb) = 0;
  param_1[0xdc] = 0xffffffffffffffff;
  *(undefined1 *)(param_1 + 0xc5) = 1;
  return param_1;
}



// FUNCTION 1408c3fb8 FUN_1408c3fb8 body=605 status=ok
// SIG undefined FUN_1408c3fb8(void)

undefined8 FUN_1408c3fb8(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined1 auStack_68 [32];
  wchar_t local_48 [16];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    lVar1 = (**(code **)(*(longlong *)(param_1 + 0x28) + 0x78))(param_1 + 0x28);
    if ((*(longlong *)(lVar1 + 0x30) == 0) ||
       (lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0x30) + 0x2b0), lVar1 == 0)) {
      lVar1 = 0;
    }
    else {
      lVar1 = *(longlong *)(lVar1 + 0x3f0);
    }
    lVar2 = (**(code **)(*(longlong *)(param_1 + 0x28) + 0x70))();
    plVar7 = *(longlong **)(param_1 + 0xc0);
    if (plVar7 != (longlong *)0x0) {
      lVar4 = 0;
      plVar5 = plVar7;
      do {
        if ((*(uint *)(plVar5 + 1) & 0x30) != 0) goto LAB_1408c4045;
        plVar5 = (longlong *)plVar5[4];
      } while (plVar5 != (longlong *)0x0);
    }
    lVar4 = plVar7[4];
LAB_1408c4045:
    if (lVar4 != lVar2) {
      (**(code **)(*plVar7 + 0x170))(plVar7,0,lVar2,0);
      plVar7 = *(longlong **)(param_1 + 0xc0);
    }
    if (*(char *)((longlong)plVar7 + 0x1c1) == '\0') {
      plVar5 = &DAT_14c846480;
      if (*(char *)(lVar1 + 0xb0) != '\0') {
        plVar5 = (longlong *)(lVar1 + 0x50);
      }
      plVar6 = plVar7 + 0x10;
      for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
        *plVar6 = *plVar5;
        plVar5 = plVar5 + 1;
        plVar6 = plVar6 + 1;
      }
      *(undefined1 *)((longlong)plVar7 + 0x1c1) = 1;
      plVar7 = *(longlong **)(param_1 + 0xc0);
    }
    if (plVar7 != (longlong *)0x0) {
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x110) < DAT_14cb122d0) {
        FUN_144b3d300(&DAT_14cb122d0);
        if (DAT_14cb122d0 == -1) {
          builtin_wcsncpy(local_48,L"OnLevelShown",0xd);
          FUN_1446f470e(&DAT_14cb122c8,local_48,1);
          _Init_thread_footer(&DAT_14cb122d0);
        }
      }
      FUN_1408c4216(plVar7 + 0x2b,param_1,DAT_14cb122c8);
      lVar1 = *(longlong *)(param_1 + 0xc0);
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x110) < DAT_14cb122e0) {
        FUN_144b3d300(&DAT_14cb122e0);
        if (DAT_14cb122e0 == -1) {
          builtin_wcsncpy(local_48,L"OnLevelHidden",0xe);
          FUN_1446f470e(&DAT_14cb122d8,local_48,1);
          _Init_thread_footer(&DAT_14cb122e0);
        }
      }
      FUN_1408c4216(lVar1 + 0x168,param_1,DAT_14cb122d8);
      uVar3 = *(undefined8 *)(param_1 + 0xc0);
      goto LAB_1408c411d;
    }
  }
  uVar3 = 0;
LAB_1408c411d:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1408c4216 FUN_1408c4216 body=595 status=ok
// SIG undefined FUN_1408c4216(void)

void FUN_1408c4216(longlong *param_1,longlong param_2,longlong param_3)

{
  uint *_Dst;
  longlong lVar1;
  int iVar2;
  uint uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_68 [32];
  ulonglong local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 == 0) {
    uVar5 = 0;
    uVar8 = 0;
  }
  else {
    uVar8 = *(uint *)(param_2 + 0xc);
    if ((int)uVar8 < DAT_14c9647dc) {
      lVar9 = (ulonglong)((uVar8 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8);
    }
    else {
      lVar9 = 0;
    }
    uVar3 = *(uint *)(lVar9 + 0x10);
    if (*(uint *)(lVar9 + 0x10) == 0) {
      LOCK();
      iVar2 = DAT_14c964868 + 1;
      UNLOCK();
      uVar6 = DAT_14c964868 + 1;
      bVar10 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar2;
      if (bVar10) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar6);
      }
      LOCK();
      uVar3 = *(uint *)(lVar9 + 0x10);
      bVar10 = uVar3 == 0;
      if (bVar10) {
        *(uint *)(lVar9 + 0x10) = uVar6;
        uVar3 = 0;
      }
      UNLOCK();
      if (bVar10) {
        uVar3 = uVar6;
      }
    }
    uVar5 = (ulonglong)uVar3;
    if (param_3 == 0) {
      param_3 = 0;
    }
    else if (uVar3 == 0) {
      uVar5 = 0;
    }
    else if ((((-1 < (int)uVar8) && ((int)uVar8 < DAT_14c9647dc)) &&
             (plVar4 = (longlong *)
                       ((ulonglong)((uVar8 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8)),
             plVar4 != (longlong *)0x0)) &&
            (((*(uint *)(plVar4 + 2) == uVar3 && ((*(uint *)(plVar4 + 1) & 0x10200000) == 0)) &&
             (*plVar4 != 0)))) {
      FUN_1400796d0(*(undefined8 *)(*plVar4 + 0x10),param_3);
    }
  }
  local_48 = (ulonglong)uVar8 | uVar5 << 0x20;
  local_40 = param_3;
  FUN_1403350f6(param_1);
  iVar2 = (int)param_1[1];
  if (0 < iVar2) {
    lVar9 = 0;
    bVar10 = false;
    do {
      while( true ) {
        lVar1 = *param_1;
        _Dst = (uint *)(lVar1 + lVar9 * 0x10);
        if (((*(longlong *)(lVar1 + 8 + lVar9 * 0x10) != 0) && (_Dst[1] != 0)) &&
           ((uVar8 = *_Dst, -1 < (int)uVar8 &&
            (((((int)uVar8 < DAT_14c9647dc &&
               (plVar4 = (longlong *)
                         ((ulonglong)((uVar8 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8)),
               plVar4 != (longlong *)0x0)) && (*(uint *)(plVar4 + 2) == _Dst[1])) &&
             (((*(uint *)(plVar4 + 1) >> 0x1c & 1) == 0 && (*plVar4 != 0)))))))) break;
        iVar7 = ~(uint)lVar9 + iVar2;
        if (iVar7 != 0) {
          if (0 < iVar7) {
            iVar7 = 1;
          }
          memmove(_Dst,(void *)(lVar1 + (longlong)(iVar2 - iVar7) * 0x10),(longlong)iVar7 << 4);
          iVar2 = (int)param_1[1];
        }
        iVar2 = iVar2 + -1;
        *(int *)(param_1 + 1) = iVar2;
        bVar10 = true;
        if (iVar2 <= lVar9) goto LAB_1408c440b;
      }
      lVar9 = lVar9 + 1;
    } while (lVar9 < iVar2);
    if (bVar10) {
LAB_1408c440b:
      FUN_1400bbcfc(param_1);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1408c446a FUN_1408c446a body=731 status=ok
// SIG undefined FUN_1408c446a(void)

void FUN_1408c446a(longlong param_1)

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
  if (DAT_14cb11c78 == 0) {
    local_40 = &local_20;
    local_20 = FUN_1449e2820;
    local_30 = FUN_14081d0ea;
    local_38 = FUN_14081d0ea;
    local_48 = &LAB_147dccd5f;
    local_50 = (code *)&LAB_146412370;
    local_58 = L"Engine";
    local_60 = 0;
    local_68 = 0x10000001;
    local_70 = 8;
    local_78 = 0x1c0;
    FUN_14081cfa3(L"/Script/Engine",L"RuntimeHashExternalStreamingObjectBase",&DAT_14cb11c78,
                  &DAT_147dccd5e);
  }
  lVar2 = DAT_14cb11c78;
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
  lVar3 = *(longlong *)(param_1 + -8);
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
    if (lVar4 != 0) {
      FUN_147dcc27a();
      goto LAB_1408c4544;
    }
  }
  lVar2 = FUN_140183dc6();
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
  lVar3 = *(longlong *)(param_1 + -8);
  if (lVar3 == 0) {
    lVar4 = 0;
  }
  else {
    do {
      if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x38) < *(int *)(lVar2 + 0x38)) ||
         (lVar4 = lVar3,
         *(longlong *)
          (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
         != lVar2 + 0x30)) {
        lVar4 = 0;
      }
    } while ((lVar4 == 0) && (lVar3 = *(longlong *)(lVar3 + 0x20), lVar3 != 0));
  }
  if (*(longlong *)(lVar4 + 0x40) == 0) {
    FUN_14475ec7e();
  }
LAB_1408c4544:
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1408c4746 FUN_1408c4746 body=944 status=ok
// SIG undefined FUN_1408c4746(void)

ulonglong FUN_1408c4746(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  byte bVar6;
  int iVar7;
  byte bVar8;
  uint uVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  ulonglong *puVar12;
  longlong lVar13;
  undefined8 *puVar14;
  ulonglong uVar15;
  int iVar16;
  undefined8 *puVar17;
  byte bVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  longlong lVar22;
  undefined1 auStack_c8 [43];
  byte local_9d;
  int local_9c;
  longlong local_98;
  undefined8 *local_90;
  undefined8 local_88 [4];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (param_1[9] == 0) {
    uVar15 = 0;
  }
  else {
    uVar9 = FUN_1408c4746(param_1[9],0);
    uVar15 = (ulonglong)uVar9;
  }
  lVar4 = param_1[8];
  if (*(char *)((longlong)param_1 + 0x61) == '\x01') {
    puVar1 = param_1 + 1;
    if (1 < (ulonglong)param_1[3]) {
      lVar13 = param_1[3] - 1;
      if ((ulonglong)param_1[4] < 0x10) {
        cVar2 = *(char *)((longlong)puVar1 + lVar13);
        puVar17 = puVar1;
      }
      else {
        puVar17 = (undefined8 *)*puVar1;
        cVar2 = *(char *)((longlong)puVar17 + lVar13);
      }
      if (cVar2 == '.') {
        param_1[3] = lVar13;
        *(undefined1 *)((longlong)puVar17 + lVar13) = 0;
      }
    }
    if ((undefined8 *)param_1[9] == (undefined8 *)0x0) {
      *(undefined1 *)((longlong)param_1 + 0x61) = 0;
      uVar15 = CONCAT71((int7)(uVar15 >> 8),1);
    }
    else {
      puVar17 = (undefined8 *)(param_2 + 0x40);
      puVar14 = (undefined8 *)param_1[9];
      do {
        puVar10 = puVar14;
        local_90 = puVar10;
        FUN_1408c4af8(puVar10,0xffff);
        *(undefined1 *)(puVar10 + 0xc) = *(undefined1 *)(param_1 + 0xc);
        plVar5 = puVar10 + 1;
        if (puVar10[3] == 0) {
          FUN_1401d7e14(plVar5,puVar1);
        }
        else {
          plVar11 = plVar5;
          if (0xf < (ulonglong)puVar10[4]) {
            plVar11 = (longlong *)*plVar5;
          }
          if (*(char *)plVar11 == '.') {
            FUN_1456dba66(&local_68,puVar1);
            if (plVar5 != &local_68) {
              FUN_1401d9a90(plVar5);
              puVar10[3] = local_58;
              puVar10[4] = uStack_50;
              *(undefined4 *)plVar5 = (undefined4)local_68;
              *(undefined4 *)((longlong)puVar10 + 0xc) = local_68._4_4_;
              *(undefined4 *)(puVar10 + 2) = (undefined4)uStack_60;
              *(undefined4 *)((longlong)puVar10 + 0x14) = uStack_60._4_4_;
              local_58 = 0;
              uStack_50 = 0xf;
              local_68 = local_68 & 0xffffffffffffff00;
            }
            puVar14 = &local_68;
          }
          else {
            FUN_14895e1c3(local_88,puVar1,L".Preview");
            plVar11 = plVar5;
            if (0xf < (ulonglong)puVar10[4]) {
              plVar11 = (longlong *)puVar10[1];
            }
            puVar12 = (ulonglong *)FUN_144a6594a(local_88,plVar11);
            local_68 = *puVar12;
            uStack_60 = puVar12[1];
            local_58 = puVar12[2];
            uStack_50 = puVar12[3];
            puVar12[2] = 0;
            puVar12[3] = 0xf;
            *(undefined1 *)puVar12 = 0;
            if (plVar5 != &local_68) {
              FUN_1401d9a90(plVar5);
              *(undefined4 *)(puVar10 + 3) = (undefined4)local_58;
              *(undefined4 *)((longlong)puVar10 + 0x1c) = local_58._4_4_;
              *(undefined4 *)(puVar10 + 4) = (undefined4)uStack_50;
              *(undefined4 *)((longlong)puVar10 + 0x24) = uStack_50._4_4_;
              *(undefined4 *)plVar5 = (undefined4)local_68;
              *(undefined4 *)((longlong)puVar10 + 0xc) = local_68._4_4_;
              *(undefined4 *)(puVar10 + 2) = (undefined4)uStack_60;
              *(undefined4 *)((longlong)puVar10 + 0x14) = uStack_60._4_4_;
              local_58 = 0;
              uStack_50 = 0xf;
              local_68 = local_68 & 0xffffffffffffff00;
            }
            FUN_1401d9a90(&local_68);
            puVar14 = local_88;
          }
          FUN_1401d9a90(puVar14);
        }
        if (*(int *)(param_1 + 6) != 0) {
          FUN_14066b2a0(puVar10 + 5,param_1 + 5);
        }
        if (puVar10 == (undefined8 *)param_1[9]) {
          puVar14 = puVar17;
          if (param_2 == 0) {
            if (param_1[10] == 0) {
              FUN_14895e102(param_1[0xb] + 0xb8,&local_90);
              puVar14 = (undefined8 *)(param_1[0xb] + 0x68);
            }
            else {
              puVar14 = (undefined8 *)(param_1[10] + 0x48);
            }
          }
          *puVar14 = puVar10;
        }
        puVar10[10] = param_1[10];
        puVar14 = (undefined8 *)puVar10[8];
      } while ((undefined8 *)puVar10[8] != (undefined8 *)0x0);
      puVar10[8] = lVar4;
      lVar13 = param_1[0xb];
      iVar3 = *(int *)(lVar13 + 0xc0);
      lVar22 = (longlong)iVar3;
      local_90 = (undefined8 *)0x0;
      if (lVar22 != 0) {
        plVar5 = *(longlong **)(lVar13 + 0xb8);
        bVar8 = (undefined8 *)*plVar5 == param_1;
        iVar16 = 0;
        iVar19 = 0;
        local_98 = lVar13;
        do {
          bVar18 = bVar8 ^ 1;
          iVar7 = iVar19 + 1;
          if (iVar19 + 1 < iVar3) {
            iVar7 = iVar3;
          }
          iVar20 = iVar19;
          puVar17 = (undefined8 *)(longlong)iVar19;
          do {
            puVar17 = (undefined8 *)((longlong)puVar17 + 1);
            iVar21 = iVar7;
            if (lVar22 <= (longlong)puVar17) break;
            iVar20 = iVar20 + 1;
            iVar21 = iVar20;
          } while ((bool)(bVar8 & 1) == ((undefined8 *)plVar5[(longlong)puVar17] == param_1));
          bVar6 = bVar8 & 1;
          bVar8 = bVar18;
          local_9c = iVar16;
          if (bVar6 == 0) {
            local_9d = bVar18;
            if (iVar16 != iVar19) {
              memmove(plVar5 + iVar16,plVar5 + iVar19,(longlong)(iVar21 - iVar19) << 3);
            }
            iVar16 = local_9c + (iVar21 - iVar19);
            bVar8 = local_9d;
          }
          iVar19 = iVar21;
        } while ((longlong)puVar17 < lVar22);
        *(int *)(local_98 + 0xc0) = iVar16;
      }
      if (param_1 != (undefined8 *)0x0) {
        (**(code **)*param_1)(param_1,1);
      }
      uVar15 = CONCAT71((int7)((ulonglong)puVar17 >> 8),1);
      param_1 = puVar10;
    }
  }
  if (lVar4 != 0) {
    bVar8 = FUN_1408c4746(lVar4,param_1);
    uVar15 = CONCAT71((int7)(uVar15 >> 8),(byte)uVar15 | bVar8);
  }
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar15 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1408c4af8 FUN_1408c4af8 body=49 status=ok
// SIG undefined FUN_1408c4af8(void)

void FUN_1408c4af8(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  
  *(short *)(param_1 + 0x3a) = *(short *)(param_1 + 0x3a) + (short)param_2;
  for (lVar1 = *(longlong *)(param_1 + 0x48); lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x48)) {
    FUN_1408c4af8(lVar1,param_2);
  }
  return;
}



// FUNCTION 1408c4b2a FUN_1408c4b2a body=66 status=ok
// SIG undefined FUN_1408c4b2a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_1408c4b2a(longlong *param_1)

{
  longlong lVar1;
  
  FUN_1408c4b6c();
  lVar1 = DAT_14cb43d50;
  *param_1 = DAT_14cb43d50;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  param_1[1] = _DAT_14cb43d58;
  return param_1;
}



// FUNCTION 1408c4b6c FUN_1408c4b6c body=662 status=ok
// SIG undefined FUN_1408c4b6c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1408c4b6c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (DAT_14cb43d40 == 0) {
    uVar1 = FUN_144a7a812();
    uVar1 = thunk_FUN_140277b32(uVar1,0,L"/Script/CoreUObject",0);
    uVar2 = FUN_1446f4bba();
    lVar3 = thunk_FUN_140277b32(uVar2,uVar1,L"Vector2D",0);
    if (lVar3 != 0 && DAT_14c950c29 == 1) {
      FUN_1456cec3c(lVar3);
    }
    if ((lVar3 != 0) && ((DAT_14c950c29 & 1) != 0)) {
      FUN_1456cec3c(lVar3);
    }
    _DAT_14cb43d48 = 0xffffffff00000002;
    DAT_14cb43d40 = lVar3;
    uVar2 = FUN_1446f4bba();
    lVar3 = thunk_FUN_140277b32(uVar2,uVar1,L"Vector",0);
    if (lVar3 != 0 && DAT_14c950c29 == 1) {
      FUN_1456cec3c(lVar3);
    }
    if ((lVar3 != 0) && ((DAT_14c950c29 & 1) != 0)) {
      FUN_1456cec3c(lVar3);
    }
    _DAT_14cb43d58 = 0xffffffff00000002;
    DAT_14cb43d50 = lVar3;
    uVar2 = FUN_1446f4bba();
    lVar3 = thunk_FUN_140277b32(uVar2,uVar1,L"Vector4",0);
    if (lVar3 != 0 && DAT_14c950c29 == 1) {
      FUN_1456cec3c(lVar3);
    }
    if ((lVar3 != 0) && ((DAT_14c950c29 & 1) != 0)) {
      FUN_1456cec3c(lVar3);
    }
    _DAT_14cb43d68 = 0xffffffff00000002;
    DAT_14cb43d60 = lVar3;
    uVar2 = FUN_1446f4bba();
    lVar3 = thunk_FUN_140277b32(uVar2,uVar1,L"Quat",0);
    if (lVar3 != 0 && DAT_14c950c29 == 1) {
      FUN_1456cec3c(lVar3);
    }
    if ((lVar3 != 0) && ((DAT_14c950c29 & 1) != 0)) {
      FUN_1456cec3c(lVar3);
    }
    _DAT_14cb43d78 = 0xffffffff00000002;
    DAT_14cb43d70 = lVar3;
    if (DAT_14cb43b10 == 0) {
      uVar1 = FUN_140aec9fd();
      DAT_14cb43b10 = FUN_140002ddd(FUN_14647ad65,uVar1,L"NiagaraDouble");
    }
    lVar3 = DAT_14cb43b10;
    if (DAT_14cb43b10 != 0 && DAT_14c950c29 == 1) {
      FUN_1456cec3c(DAT_14cb43b10);
    }
    if ((lVar3 != 0) && ((DAT_14c950c29 & 1) != 0)) {
      FUN_1456cec3c(lVar3);
    }
    DAT_14cb43d88 = 0xffffffff00000002;
    DAT_14cb43d80 = lVar3;
  }
  return;
}



// FUNCTION 1408c4e1c FUN_1408c4e1c body=59 status=ok
// SIG undefined FUN_1408c4e1c(void)

undefined8 * FUN_1408c4e1c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_149f62cf0;
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1408c4e6e FUN_1408c4e6e body=121 status=ok
// SIG undefined FUN_1408c4e6e(void)

void FUN_1408c4e6e(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if ((longlong)*(int *)(param_1 + 0x28) != 0) {
    plVar3 = *(longlong **)(param_1 + 0x20);
    lVar2 = (longlong)*(int *)(param_1 + 0x28) * 0x88;
    do {
      if ((*(byte *)(plVar3 + 0x10) & 1) != 0) {
        plVar1 = plVar3;
        if ((*(byte *)(plVar3 + 0x10) & 2) == 0) {
          plVar1 = (longlong *)*plVar3;
        }
        (**(code **)(*plVar1 + 8))();
      }
      plVar3 = plVar3 + 0x11;
      lVar2 = lVar2 + -0x88;
    } while (lVar2 != 0);
  }
  if ((*(byte *)(param_1 + 0x60) & 1) == 0) {
    return;
  }
  plVar3 = (longlong *)(param_1 + 0x30);
  if ((*(byte *)(param_1 + 0x60) & 2) == 0) {
    plVar3 = (longlong *)*plVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x0001408c4ede. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 8))(plVar3);
  return;
}



// FUNCTION 1408c4ee8 FUN_1408c4ee8 body=108 status=ok
// SIG undefined FUN_1408c4ee8(void)

longlong FUN_1408c4ee8(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  
  if ((DAT_14c86a9f8 == '\x01') &&
     (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0xc60) == 1)) {
    FUN_140ad26c0();
    GetCurrentThreadId();
  }
  iVar1 = FUN_1408c4f54(DAT_14c967810,param_1,param_2,param_3,param_4);
  return (longlong)iVar1;
}



// FUNCTION 1408c4f54 FUN_1408c4f54 body=10975 status=ok
// SIG undefined FUN_1408c4f54(void)

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1408c4f54(longlong param_1,HWND param_2,UINT param_3,ulonglong param_4,LPRECT param_5)

{
  longlong *plVar1;
  LONG *pLVar2;
  longlong *plVar3;
  bool bVar4;
  double dVar5;
  LARGE_INTEGER *pLVar6;
  LARGE_INTEGER *pLVar7;
  uint uVar8;
  LARGE_INTEGER LVar9;
  LARGE_INTEGER LVar10;
  char cVar11;
  UINT UVar12;
  int iVar13;
  uint uVar14;
  BOOL BVar15;
  DWORD DVar16;
  DWORD DVar17;
  HRESULT HVar18;
  int iVar19;
  int iVar20;
  int *piVar21;
  LPARAM LVar22;
  ulonglong uVar23;
  undefined1 *puVar24;
  longlong lVar25;
  HANDLE hTimer;
  longlong *plVar26;
  int iVar27;
  byte bVar28;
  bool bVar29;
  int iVar30;
  int iVar31;
  longlong lVar32;
  int iVar33;
  int iVar34;
  LARGE_INTEGER *pLVar35;
  LPRECT ptVar36;
  undefined8 uVar37;
  IRawElementProviderSimple *el;
  int iVar38;
  ulonglong uVar39;
  longlong *plVar40;
  int iVar41;
  undefined1 *puVar42;
  float fVar43;
  float fVar44;
  undefined1 auStackY_288 [32];
  int local_220;
  LARGE_INTEGER local_208;
  longlong *local_200;
  undefined8 local_1f8;
  LARGE_INTEGER local_1f0;
  longlong *local_1e8;
  LARGE_INTEGER local_1e0;
  LARGE_INTEGER local_1d8;
  longlong *local_1d0;
  _struct_19 local_1c8;
  longlong *local_1c0;
  LARGE_INTEGER local_1b8;
  undefined8 uStack_1b0;
  undefined1 local_198 [16];
  float fStack_188;
  UINT32 UStack_184;
  float fStack_180;
  LONG LStack_17c;
  LONG LStack_178;
  DWORD local_174;
  DWORD DStack_170;
  DWORD DStack_16c;
  UINT UStack_168;
  UINT local_164;
  undefined4 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  DWM_FRAME_COUNT DStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  DWM_FRAME_COUNT local_128;
  undefined8 uStack_120;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStackY_288;
  FUN_1428503e2(&local_1c8,param_1 + 0x100);
  if (local_1c8 == (_struct_19)0x0 || *(int *)(param_1 + 0x108) == 0) goto LAB_1408c607d;
  local_1d8.s.LowPart = local_1c8.LowPart;
  local_1d8.s.HighPart = local_1c8.HighPart;
  local_1d0 = local_1c0;
  if (local_1c0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_1c0 + 1) = (int)local_1c0[1] + 1;
    UNLOCK();
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c967298) {
    FUN_144b3d300(&DAT_14c967298);
    if (DAT_14c967298 == -1) {
      _DAT_14c967268 = 0;
      _DAT_14c967270 = 0;
      _DAT_14c967248 = 0;
      uRam000000014c967250 = 0;
      _DAT_14c967274 = 0xffffffff00000080;
      _DAT_14c96727c = 0;
      DAT_14c967288 = 0;
      _DAT_14c967290 = 0;
      FUN_140056680(&local_1b8,L"WM_INPUTLANGCHANGEREQUEST");
      local_1e0.s.LowPart = 0x50;
      local_198._0_8_ = &local_1e0;
      local_198._8_8_ = &local_1b8;
      FUN_1412e64f4(&DAT_14c967248,&local_1f0);
      if ((_struct_19)local_1b8.QuadPart != (_struct_19)0x0) {
        FUN_1400020a8();
      }
      FUN_140056680(&local_1b8,L"WM_INPUTLANGCHANGE");
      local_1e0.s.LowPart = 0x51;
      local_198._0_8_ = &local_1e0;
      local_198._8_8_ = &local_1b8;
      FUN_1412e64f4(&DAT_14c967248,&local_1f0);
      if ((_struct_19)local_1b8.QuadPart != (_struct_19)0x0) {
        FUN_1400020a8();
      }
      FUN_140056680(&local_1b8,L"WM_IME_SETCONTEXT");
      local_1e0.s.LowPart = 0x281;
      local_198._0_8_ = &local_1e0;
      local_198._8_8_ = &local_1b8;
      FUN_1412e64f4(&DAT_14c967248,&local_1f0);
      if ((_struct_19)local_1b8.QuadPart != (_struct_19)0x0) {
        FUN_1400020a8();
      }
      FUN_140056680(&local_1b8,L"WM_IME_NOTIFY");
      local_1e0.s.LowPart = 0x282;
      local_198._0_8_ = &local_1e0;
      local_198._8_8_ = &local_1b8;
      FUN_1412e64f4(&DAT_14c967248,&local_1f0);
      if ((_struct_19)local_1b8.QuadPart != (_struct_19)0x0) {
        FUN_1400020a8();
      }
      FUN_140056680(&local_1b8,L"WM_IME_REQUEST");
      local_1e0.s.LowPart = 0x288;
      local_198._0_8_ = &local_1e0;
      local_198._8_8_ = &local_1b8;
      FUN_1412e64f4(&DAT_14c967248,&local_1f0);
      if ((_struct_19)local_1b8.QuadPart != (_struct_19)0x0) {
        FUN_1400020a8();
      }
      FUN_140056680(&local_1b8,L"WM_IME_STARTCOMPOSITION");
      local_1e0.s.LowPart = 0x10d;
      local_198._0_8_ = &local_1e0;
      local_198._8_8_ = &local_1b8;
      FUN_1412e64f4(&DAT_14c967248,&local_1f0);
      if ((_struct_19)local_1b8.QuadPart != (_struct_19)0x0) {
        FUN_1400020a8();
      }
      FUN_140056680(&local_1b8,L"WM_IME_COMPOSITION");
      local_1e0.s.LowPart = 0x10f;
      local_198._0_8_ = &local_1e0;
      local_198._8_8_ = &local_1b8;
      FUN_1412e64f4(&DAT_14c967248,&local_1f0);
      if ((_struct_19)local_1b8.QuadPart != (_struct_19)0x0) {
        FUN_1400020a8();
      }
      FUN_140056680(&local_1b8,L"WM_IME_ENDCOMPOSITION");
      local_1e0.s.LowPart = 0x10e;
      local_198._0_8_ = &local_1e0;
      local_198._8_8_ = &local_1b8;
      FUN_1412e64f4(&DAT_14c967248,&local_1f0);
      if ((_struct_19)local_1b8.QuadPart != (_struct_19)0x0) {
        FUN_1400020a8();
      }
      FUN_140056680(&local_1b8,L"WM_IME_CHAR");
      local_1e0.s.LowPart = 0x286;
      local_198._0_8_ = &local_1e0;
      local_198._8_8_ = &local_1b8;
      FUN_1412e64f4(&DAT_14c967248,&local_1f0);
      if ((_struct_19)local_1b8.QuadPart != (_struct_19)0x0) {
        FUN_1400020a8();
      }
      atexit(FUN_142850629);
      _Init_thread_footer(&DAT_14c967298);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9672f0) {
    FUN_144b3d300(&DAT_14c9672f0);
    if (DAT_14c9672f0 == -1) {
      _DAT_14c9672c0 = 0;
      _DAT_14c9672c8 = 0;
      _DAT_14c9672a0 = 0;
      uRam000000014c9672a8 = 0;
      _DAT_14c9672cc = 0xffffffff00000080;
      _DAT_14c9672d4 = 0;
      DAT_14c9672e0 = 0;
      _DAT_14c9672e8 = 0;
      FUN_140056680(&local_1b8,L"IMN_CLOSESTATUSWINDOW");
      local_1e0.s.LowPart = 1;
      local_198._0_8_ = &local_1e0;
      local_198._8_8_ = &local_1b8;
      FUN_1412e64f4(&DAT_14c9672a0,&local_1f0);
      if ((_struct_19)local_1b8.QuadPart != (_struct_19)0x0) {
        FUN_1400020a8();
      }
      FUN_140056680(&local_1b8,L"IMN_OPENSTATUSWINDOW");
      local_1e0.s.LowPart = 2;
      local_198._0_8_ = &local_1e0;
      local_198._8_8_ = &local_1b8;
      FUN_1412e64f4(&DAT_14c9672a0,&local_1f0);
      if ((_struct_19)local_1b8.QuadPart != (_struct_19)0x0) {
        FUN_1400020a8();
      }
      FUN_140056680(&local_1b8,L"IMN_CHANGECANDIDATE");
      local_1e0.s.LowPart = 3;
      local_198._0_8_ = &local_1e0;
      local_198._8_8_ = &local_1b8;
      FUN_1412e64f4(&DAT_14c9672a0,&local_1f0);
      if ((_struct_19)local_1b8.QuadPart != (_struct_19)0x0) {
        FUN_1400020a8();
      }
      FUN_140056680(&local_1b8,L"IMN_CLOSECANDIDATE");
      local_1e0.s.LowPart = 4;
      local_198._0_8_ = &local_1e0;
      local_198._8_8_ = &local_1b8;
      FUN_1412e64f4(&DAT_14c9672a0,&local_1f0);
      if ((_struct_19)local_1b8.QuadPart != (_struct_19)0x0) {
        FUN_1400020a8();
      }
      FUN_140056680(&local_1b8,L"IMN_OPENCANDIDATE");
      local_1e0.s.LowPart = 5;
      local_198._0_8_ = &local_1e0;
      local_198._8_8_ = &local_1b8;
      FUN_1412e64f4(&DAT_14c9672a0,&local_1f0);
      if ((_struct_19)local_1b8.QuadPart != (_struct_19)0x0) {
        FUN_1400020a8();
      }
      FUN_140056680(&local_1b8,L"IMN_SETCONVERSIONMODE");
      local_1e0.s.LowPart = 6;
      local_198._0_8_ = &local_1e0;
      local_198._8_8_ = &local_1b8;
      FUN_1412e64f4(&DAT_14c9672a0,&local_1f0);
      if ((_struct_19)local_1b8.QuadPart != (_struct_19)0x0) {
        FUN_1400020a8();
      }
      FUN_140056680(&local_1b8,L"IMN_SETSENTENCEMODE");
      local_1e0.s.LowPart = 7;
      local_198._0_8_ = &local_1e0;
      local_198._8_8_ = &local_1b8;
      FUN_1412e64f4(&DAT_14c9672a0,&local_1f0);
      if ((_struct_19)local_1b8.QuadPart != (_struct_19)0x0) {
        FUN_1400020a8();
      }
      FUN_140056680(&local_1b8,L"IMN_SETOPENSTATUS");
      local_1e0.s.LowPart = 8;
      local_198._0_8_ = &local_1e0;
      local_198._8_8_ = &local_1b8;
      FUN_1412e64f4(&DAT_14c9672a0,&local_1f0);
      if ((_struct_19)local_1b8.QuadPart != (_struct_19)0x0) {
        FUN_1400020a8();
      }
      FUN_140056680(&local_1b8,L"IMN_SETCANDIDATEPOS");
      local_1e0.s.LowPart = 9;
      local_198._0_8_ = &local_1e0;
      local_198._8_8_ = &local_1b8;
      FUN_1412e64f4(&DAT_14c9672a0,&local_1f0);
      if ((_struct_19)local_1b8.QuadPart != (_struct_19)0x0) {
        FUN_1400020a8();
      }
      FUN_140056680(&local_1b8,L"IMN_SETCOMPOSITIONFONT");
      local_1e0.s.LowPart = 10;
      local_198._0_8_ = &local_1e0;
      local_198._8_8_ = &local_1b8;
      FUN_1412e64f4(&DAT_14c9672a0,&local_1f0);
      if ((_struct_19)local_1b8.QuadPart != (_struct_19)0x0) {
        FUN_1400020a8();
      }
      FUN_140056680(&local_1b8,L"IMN_SETCOMPOSITIONWINDOW");
      local_1e0.s.LowPart = 0xb;
      local_198._0_8_ = &local_1e0;
      local_198._8_8_ = &local_1b8;
      FUN_1412e64f4(&DAT_14c9672a0,&local_1f0);
      if ((_struct_19)local_1b8.QuadPart != (_struct_19)0x0) {
        FUN_1400020a8();
      }
      FUN_140056680(&local_1b8,L"IMN_SETSTATUSWINDOWPOS");
      local_1e0.s.LowPart = 0xc;
      local_198._0_8_ = &local_1e0;
      local_198._8_8_ = &local_1b8;
      FUN_1412e64f4(&DAT_14c9672a0,&local_1f0);
      if ((_struct_19)local_1b8.QuadPart != (_struct_19)0x0) {
        FUN_1400020a8();
      }
      FUN_140056680(&local_1b8,L"IMN_GUIDELINE");
      local_1e0.s.LowPart = 0xd;
      local_198._0_8_ = &local_1e0;
      local_198._8_8_ = &local_1b8;
      FUN_1412e64f4(&DAT_14c9672a0,&local_1f0);
      if ((_struct_19)local_1b8.QuadPart != (_struct_19)0x0) {
        FUN_1400020a8();
      }
      FUN_140056680(&local_1b8,L"IMN_PRIVATE");
      local_1e0.s.LowPart = 0xe;
      local_198._0_8_ = &local_1e0;
      local_198._8_8_ = &local_1b8;
      FUN_1412e64f4(&DAT_14c9672a0,&local_1f0);
      if ((_struct_19)local_1b8.QuadPart != (_struct_19)0x0) {
        FUN_1400020a8();
      }
      atexit(FUN_142850658);
      _Init_thread_footer(&DAT_14c9672f0);
    }
  }
  pLVar6 = (LARGE_INTEGER *)local_198._0_8_;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c967348) {
    FUN_144b3d300(&DAT_14c967348);
    pLVar6 = (LARGE_INTEGER *)local_198._0_8_;
    if (DAT_14c967348 == -1) {
      _DAT_14c967318 = 0;
      _DAT_14c967320 = 0;
      _DAT_14c9672f8 = 0;
      uRam000000014c967300 = 0;
      _DAT_14c967324 = 0xffffffff00000080;
      _DAT_14c96732c = 0;
      DAT_14c967338 = 0;
      _DAT_14c967340 = 0;
      FUN_140056680(&local_1b8,L"IMR_CANDIDATEWINDOW");
      local_1e0.s.LowPart = 2;
      local_198._0_8_ = &local_1e0;
      local_198._8_8_ = &local_1b8;
      FUN_1412e64f4(&DAT_14c9672f8,&local_1f0);
      if ((_struct_19)local_1b8.QuadPart != (_struct_19)0x0) {
        FUN_1400020a8();
      }
      FUN_140056680(&local_1b8,L"IMR_COMPOSITIONFONT");
      local_1e0.s.LowPart = 3;
      local_198._0_8_ = &local_1e0;
      local_198._8_8_ = &local_1b8;
      FUN_1412e64f4(&DAT_14c9672f8,&local_1f0);
      if ((_struct_19)local_1b8.QuadPart != (_struct_19)0x0) {
        FUN_1400020a8();
      }
      FUN_140056680(&local_1b8,L"IMR_COMPOSITIONWINDOW");
      local_1e0.s.LowPart = 1;
      local_198._0_8_ = &local_1e0;
      local_198._8_8_ = &local_1b8;
      FUN_1412e64f4(&DAT_14c9672f8,&local_1f0);
      if ((_struct_19)local_1b8.QuadPart != (_struct_19)0x0) {
        FUN_1400020a8();
      }
      FUN_140056680(&local_1b8,L"IMR_CONFIRMRECONVERTSTRING");
      local_1e0.s.LowPart = 5;
      local_198._0_8_ = &local_1e0;
      local_198._8_8_ = &local_1b8;
      FUN_1412e64f4(&DAT_14c9672f8,&local_1f0);
      if ((_struct_19)local_1b8.QuadPart != (_struct_19)0x0) {
        FUN_1400020a8();
      }
      FUN_140056680(&local_1b8,L"IMR_DOCUMENTFEED");
      local_1e0.s.LowPart = 7;
      local_198._0_8_ = &local_1e0;
      local_198._8_8_ = &local_1b8;
      FUN_1412e64f4(&DAT_14c9672f8,&local_1f0);
      if ((_struct_19)local_1b8.QuadPart != (_struct_19)0x0) {
        FUN_1400020a8();
      }
      FUN_140056680(&local_1b8,L"IMR_QUERYCHARPOSITION");
      local_1e0.s.LowPart = 6;
      local_198._0_8_ = &local_1e0;
      local_198._8_8_ = &local_1b8;
      FUN_1412e64f4(&DAT_14c9672f8,&local_1f0);
      if ((_struct_19)local_1b8.QuadPart != (_struct_19)0x0) {
        FUN_1400020a8();
      }
      FUN_140056680(&local_1b8,L"IMR_RECONVERTSTRING");
      local_1e0.s.LowPart = 4;
      local_198._0_8_ = &local_1e0;
      local_198._8_8_ = &local_1b8;
      FUN_1412e64f4(&DAT_14c9672f8);
      if ((_struct_19)local_1b8.QuadPart != (_struct_19)0x0) {
        FUN_1400020a8();
      }
      atexit(FUN_142850687);
      _Init_thread_footer(&DAT_14c967348);
      pLVar6 = (LARGE_INTEGER *)local_198._0_8_;
    }
  }
  local_198._4_4_ = (undefined4)((ulonglong)pLVar6 >> 0x20);
  if ((longlong)*(int *)(param_1 + 0xf8) == 0) {
    uVar14 = 0;
    bVar29 = false;
    puVar42 = (undefined1 *)0x0;
  }
  else {
    lVar25 = *(longlong *)(param_1 + 0xf0);
    puVar42 = (undefined1 *)((longlong)*(int *)(param_1 + 0xf8) * 8);
    puVar24 = (undefined1 *)0x0;
    bVar29 = false;
    uVar14 = 0;
    do {
      local_198._0_4_ = 0;
      cVar11 = (**(code **)**(undefined8 **)(puVar24 + lVar25))
                         (*(undefined8 **)(puVar24 + lVar25),param_2);
      pLVar6 = (LARGE_INTEGER *)CONCAT44(local_198._4_4_,local_198._0_4_);
      bVar4 = bVar29;
      uVar8 = uVar14;
      if (!bVar29) {
        bVar4 = true;
        uVar8 = local_198._0_4_;
      }
      if (cVar11 != '\0') {
        uVar14 = uVar8;
        bVar29 = bVar4;
      }
      puVar24 = puVar24 + 8;
    } while (puVar42 != puVar24);
  }
  local_198._0_8_ = pLVar6;
  if (DAT_14c9671e0 != 0) {
    cVar11 = FUN_14691a654(param_3);
    if (cVar11 == '\0') goto LAB_1408c5118;
    LVar22 = GetMessageExtraInfo();
    bVar4 = false;
    puVar24 = (undefined1 *)0x0;
    if ((~(uint)LVar22 & 0xff515700) != 0) goto LAB_1408c5118;
    goto LAB_1408c603f;
  }
LAB_1408c5118:
  if (DAT_14c9671f8 == '\x01') {
    FUN_140002266(local_198,L"Window Message %u",param_3);
    pLVar35 = (LARGE_INTEGER *)local_198._0_8_;
    puVar24 = local_198;
    pLVar6 = (LARGE_INTEGER *)local_198._0_8_;
    pLVar7 = (LARGE_INTEGER *)local_198._8_8_;
  }
  else {
    pLVar35 = (LARGE_INTEGER *)0x0;
    puVar24 = puVar42;
    pLVar6 = (LARGE_INTEGER *)local_198._0_8_;
    pLVar7 = (LARGE_INTEGER *)local_198._8_8_;
  }
  LVar10 = local_1d8;
  LVar9 = local_208;
  plVar26 = local_200;
  local_198._0_8_ = pLVar6;
  local_198._8_8_ = pLVar7;
  if (0x1ff < (int)param_3) {
    if (0x231 < (int)param_3) {
      if (0x2df < (int)param_3) {
        if (param_3 == 0x2e0) {
          uVar37 = 0x2e0;
        }
        else {
          if (param_3 == 0x31d) {
            iVar13 = *(int *)(param_1 + 0x94);
            *(int *)(param_1 + 0x94) = iVar13 + 1;
            uVar23 = (ulonglong)*(int *)(param_1 + 0x88);
            if ((longlong)uVar23 < 1) {
              *(int *)(param_1 + 0x94) = iVar13;
            }
            else {
              plVar40 = (longlong *)(param_1 + 0x80);
              bVar29 = false;
              do {
                lVar25 = uVar23 * 0x10 + -8;
                uVar39 = uVar23;
                local_198._0_8_ = pLVar6;
                local_198._8_8_ = pLVar7;
                while ((pLVar6 = (LARGE_INTEGER *)local_198._0_8_,
                       pLVar7 = (LARGE_INTEGER *)local_198._8_8_, *(int *)(*plVar40 + lVar25) != 0
                       && (plVar26 = *(longlong **)(*plVar40 + -8 + lVar25),
                          plVar26 != (longlong *)0x0))) {
                  cVar11 = (**(code **)(*plVar26 + 0x60))();
                  pLVar6 = (LARGE_INTEGER *)local_198._0_8_;
                  pLVar7 = (LARGE_INTEGER *)local_198._8_8_;
                  if (cVar11 == '\0') break;
                  lVar25 = lVar25 + -0x10;
                  bVar4 = uVar39 < 2;
                  uVar39 = uVar39 - 1;
                  if (bVar4) {
                    iVar13 = *(int *)(param_1 + 0x94) + -1;
                    *(int *)(param_1 + 0x94) = iVar13;
                    LVar9 = local_208;
                    plVar26 = local_200;
                    if (bVar29) goto LAB_1408c578a;
                    goto LAB_1408c5ffd;
                  }
                }
                uVar23 = uVar39 - 1;
                bVar29 = true;
              } while (1 < uVar39);
              iVar13 = *(int *)(param_1 + 0x94) + -1;
              *(int *)(param_1 + 0x94) = iVar13;
              local_198._0_8_ = pLVar6;
              local_198._8_8_ = pLVar7;
LAB_1408c578a:
              LVar9 = local_208;
              plVar26 = local_200;
              pLVar6 = (LARGE_INTEGER *)local_198._0_8_;
              pLVar7 = (LARGE_INTEGER *)local_198._8_8_;
              if (iVar13 < 1) {
                iVar13 = *(int *)(param_1 + 0x88);
                iVar38 = iVar13;
                if (0 < iVar13) {
                  iVar33 = 0;
                  do {
                    if ((*(int *)(*plVar40 + 8 + (longlong)iVar33 * 0x10) == 0) ||
                       (plVar26 = *(longlong **)(*plVar40 + (longlong)iVar33 * 0x10),
                       plVar26 == (longlong *)0x0)) {
LAB_1408c57de:
                      FUN_14005b288(plVar40,iVar33);
                      FUN_14005b248(plVar40);
                    }
                    else {
                      cVar11 = (**(code **)(*plVar26 + 0x28))();
                      if (cVar11 != '\0') goto LAB_1408c57de;
                      iVar33 = iVar33 + 1;
                    }
                    iVar38 = *(int *)(param_1 + 0x88);
                  } while (iVar33 < iVar38);
                }
                iVar33 = 2;
                if (2 < iVar38 * 2) {
                  iVar33 = iVar38 * 2;
                }
                *(int *)(param_1 + 0x90) = iVar33;
                LVar9 = local_208;
                plVar26 = local_200;
                pLVar6 = (LARGE_INTEGER *)local_198._0_8_;
                pLVar7 = (LARGE_INTEGER *)local_198._8_8_;
                if ((iVar33 < iVar13) && (*(int *)(param_1 + 0x8c) != iVar38)) {
                  FUN_14045812c(plVar40);
                  LVar9 = local_208;
                  plVar26 = local_200;
                  pLVar6 = (LARGE_INTEGER *)local_198._0_8_;
                  pLVar7 = (LARGE_INTEGER *)local_198._8_8_;
                }
              }
            }
            goto LAB_1408c5ffd;
          }
          if (param_3 != 0x31e) goto switchD_1408c517a_caseD_103;
          uVar37 = 0x31e;
        }
        goto LAB_1408c5ff8;
      }
      switch(param_3) {
      case 0x281:
      case 0x286:
        goto switchD_1408c517a_caseD_100;
      case 0x282:
        UVar12 = 0x282;
        goto LAB_1408c5285;
      case 0x283:
      case 0x284:
      case 0x285:
      case 0x287:
        break;
      case 0x288:
        UVar12 = 0x288;
        goto LAB_1408c5285;
      default:
        if (param_3 == 0x232) {
          *(undefined1 *)(param_1 + 0x140) = 0;
          uVar37 = 0x232;
          goto LAB_1408c5ff8;
        }
        if (param_3 == 0x240) goto switchD_1408c517a_caseD_100;
      }
      goto switchD_1408c517a_caseD_103;
    }
    switch(param_3) {
    case 0x200:
    case 0x201:
    case 0x202:
    case 0x203:
    case 0x204:
    case 0x205:
    case 0x206:
    case 0x207:
    case 0x208:
    case 0x209:
    case 0x20a:
    case 0x20b:
    case 0x20c:
    case 0x20d:
      goto switchD_1408c517a_caseD_100;
    case 0x20e:
    case 0x20f:
    case 0x210:
    case 0x211:
    case 0x212:
    case 0x213:
    case 0x216:
    case 0x217:
    case 0x218:
      goto switchD_1408c517a_caseD_103;
    case 0x214:
      puVar24 = &DAT_00000001;
      FUN_14095a128(param_1,&local_1c8,param_2,0x214);
      lVar25 = (**(code **)(*(longlong *)local_1c8 + 0xe0))(local_1c8);
      LVar9 = local_208;
      plVar26 = local_200;
      pLVar6 = (LARGE_INTEGER *)local_198._0_8_;
      pLVar7 = (LARGE_INTEGER *)local_198._8_8_;
      if (*(char *)(lVar25 + 0x28) == '\x01') {
        local_174 = 0;
        DStack_170 = 0;
        DStack_16c = 0;
        UStack_168 = 0;
        UStack_184 = 0;
        fStack_180 = 0.0;
        LStack_17c = 0;
        LStack_178 = 0;
        local_198._4_4_ = 0;
        local_198._8_4_ = 0;
        local_198._12_4_ = 0;
        fStack_188 = 0.0;
        local_164 = 0;
        uStack_160._0_2_ = 0;
        uStack_160._2_2_ = 0;
        local_198._0_4_ = 0x3c;
        GetWindowInfo(param_2,(PWINDOWINFO)local_198);
        LVar9 = local_1d8;
        lVar25 = (**(code **)(*(longlong *)local_1d8 + 0xe0))(local_1d8.QuadPart);
        if (*(char *)(lVar25 + 0x18) == '\x01') {
          local_1b8.s.LowPart = 0;
          local_1b8.s.HighPart = 0;
          uStack_1b0 = (longlong *)0x0;
          AdjustWindowRectEx((LPRECT)&local_1b8.s,local_174,0,DStack_170);
          param_5->left = param_5->left - local_1b8._0_4_;
          param_5->right = param_5->right - (int)(float)uStack_1b0;
          param_5->top = param_5->top - local_1b8._4_4_;
          param_5->bottom = param_5->bottom - uStack_1b0._4_4_;
        }
        fVar43 = *(float *)((longlong)local_1c8 + 0xa0);
        iVar38 = param_5->right - param_5->left;
        iVar13 = param_5->bottom - param_5->top;
        plVar26 = *(longlong **)(param_1 + 0x18);
        local_1f0.s = LVar9.s;
        local_1e8 = local_1d0;
        if (local_1d0 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_1d0 + 1) = (int)local_1d0[1] + 1;
          UNLOCK();
        }
        (**(code **)(*plVar26 + 0x150))(plVar26,&local_1b8,&local_1f0);
        plVar26 = local_1e8;
        if (local_1e8 != (longlong *)0x0) {
          LOCK();
          plVar40 = local_1e8 + 1;
          *(int *)plVar40 = (int)*plVar40 + -1;
          UNLOCK();
          if ((int)*plVar40 == 0) {
            (**(code **)*local_1e8)(local_1e8);
            LOCK();
            piVar21 = (int *)((longlong)plVar26 + 0xc);
            *piVar21 = *piVar21 + -1;
            UNLOCK();
            if (*piVar21 == 0) {
              (**(code **)(*plVar26 + 0x10))(plVar26);
            }
          }
        }
        pLVar2 = &param_5->bottom;
        iVar33 = iVar38;
        if (param_4 < 9) {
          if ((0x1b6UL >> (param_4 & 0x3f) & 1) != 0) {
            iVar19 = (int)(float)(~-(uint)((float)uStack_1b0 < (float)local_1b8.s.LowPart) &
                                  local_1b8.s.LowPart |
                                 (uint)(fVar43 * (float)uStack_1b0) &
                                 -(uint)((float)uStack_1b0 < (float)local_1b8.s.LowPart));
            iVar27 = iVar38 - iVar19;
            if ((iVar38 < iVar19) && (iVar33 = iVar19, param_4 < 9)) {
              ptVar36 = param_5;
              if ((0x92UL >> (param_4 & 0x3f) & 1) == 0) {
                if ((0x124UL >> (param_4 & 0x3f) & 1) == 0) goto LAB_1408c6a7c;
                iVar27 = iVar19 - iVar38;
                ptVar36 = (LPRECT)&param_5->right;
              }
LAB_1408c6a77:
              ptVar36->left = ptVar36->left + iVar27;
            }
            goto LAB_1408c6a7c;
          }
          if ((0x48UL >> (param_4 & 0x3f) & 1) == 0) goto LAB_1408c6a7c;
          iVar38 = (int)(float)(~-(uint)((float)local_1b8.s.LowPart < (float)uStack_1b0) &
                                (uint)(float)uStack_1b0 |
                               (uint)((float)local_1b8.s.LowPart / fVar43) &
                               -(uint)((float)local_1b8.s.LowPart < (float)uStack_1b0));
          if (iVar38 <= iVar13) goto LAB_1408c6a7c;
          if (param_4 != 3) {
            iVar27 = iVar38 - iVar13;
            ptVar36 = (LPRECT)pLVar2;
            iVar13 = iVar38;
            goto LAB_1408c6a77;
          }
          param_5->top = param_5->top + (iVar13 - iVar38);
          iVar13 = iVar38;
LAB_1408c6aec:
          iVar13 = ((int)(fVar43 * (float)iVar13) - iVar33) / 2;
          param_5->left = param_5->left - iVar13;
          param_5->right = param_5->right + iVar13;
        }
        else {
LAB_1408c6a7c:
          switch(param_4) {
          case 1:
          case 2:
            iVar13 = ((int)((float)iVar33 / fVar43) - iVar13) / 2;
            param_5->top = param_5->top - iVar13;
            param_5->bottom = param_5->bottom + iVar13;
            break;
          case 3:
          case 6:
            goto LAB_1408c6aec;
          case 4:
          case 5:
            param_5->top = param_5->top + (iVar13 - (int)((float)iVar33 / fVar43));
            break;
          case 7:
          case 8:
            *pLVar2 = *pLVar2 + ((int)((float)iVar33 / fVar43) - iVar13);
          }
        }
        lVar25 = (**(code **)(*(longlong *)local_1d8 + 0xe0))();
        pLVar7 = (LARGE_INTEGER *)CONCAT44(local_198._12_4_,local_198._8_4_);
        pLVar6 = (LARGE_INTEGER *)CONCAT44(local_198._4_4_,local_198._0_4_);
        if (*(char *)(lVar25 + 0x18) == '\x01') {
          AdjustWindowRectEx(param_5,local_174,0,DStack_170);
          pLVar7 = (LARGE_INTEGER *)CONCAT44(local_198._12_4_,local_198._8_4_);
          pLVar6 = (LARGE_INTEGER *)CONCAT44(local_198._4_4_,local_198._0_4_);
        }
        goto LAB_1408c602a;
      }
      break;
    case 0x215:
      *(LPRECT *)(param_1 + 0xc0) = param_5;
      break;
    case 0x219:
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x110) < DAT_14c967358) {
        FUN_144b3d300(&DAT_14c967358);
        if (DAT_14c967358 == -1) {
          FUN_1446f470e(&local_1f8,L"Request_Device_Update",1);
          _DAT_14c967350 = local_1f8;
          _Init_thread_footer(&DAT_14c967358);
        }
      }
      if (0 < *(int *)(param_1 + 0x118)) {
        lVar25 = 0;
        iVar13 = 0;
        do {
          plVar26 = *(longlong **)(*(longlong *)(param_1 + 0x110) + lVar25);
          (**(code **)(*plVar26 + 0x50))(plVar26,0xffffffff,&DAT_14c967350);
          iVar13 = iVar13 + 1;
          lVar25 = lVar25 + 0x10;
        } while (iVar13 < *(int *)(param_1 + 0x118));
      }
      FUN_141371036(param_1);
      LVar9 = local_208;
      plVar26 = local_200;
      pLVar6 = (LARGE_INTEGER *)local_198._0_8_;
      pLVar7 = (LARGE_INTEGER *)local_198._8_8_;
      break;
    default:
      if (param_3 == 0x231) {
        *(undefined1 *)(param_1 + 0x140) = 1;
        uVar37 = 0x231;
        goto LAB_1408c5ff8;
      }
      goto switchD_1408c517a_caseD_103;
    }
    goto LAB_1408c5ffd;
  }
  iVar13 = (int)param_5 >> 0x10;
  local_198._0_4_ = local_1d8.s.LowPart;
  local_198._4_4_ = local_1d8.s.HighPart;
  local_198._8_4_ = SUB84(local_1d0,0);
  local_198._12_4_ = (undefined4)((ulonglong)local_1d0 >> 0x20);
  if (0x7d < (int)param_3) {
    switch(param_3) {
    case 0xff:
      puVar24 = &DAT_00000001;
      local_1b8.QuadPart = local_1b8.QuadPart & 0xffffffff00000000;
      GetRawInputData((HRAWINPUT)param_5,0x10000003,(LPVOID)0x0,(PUINT)&local_1b8.QuadPart,0x18);
      uVar23 = local_1b8.QuadPart & 0xffffffff;
      piVar21 = (int *)FUN_14001cc68(uVar23 + (uVar23 == 0));
      memset(piVar21,0,uVar23);
      UVar12 = GetRawInputData((HRAWINPUT)param_5,0x10000003,piVar21,(PUINT)&local_1b8.QuadPart,0x18
                              );
      if ((UVar12 == local_1b8.s.LowPart) && (*piVar21 == 0)) {
        if (((*(ushort *)(piVar21 + 6) & 1) == 0) || (*(char *)(param_1 + 0x230) != '\x01')) {
LAB_1408c69d0:
          FUN_14095a128(param_1,&local_1c8,param_2,0xff);
        }
        else {
          if ((*(ushort *)(piVar21 + 6) & 2) == 0) {
            local_220 = 1;
            iVar38 = 0;
            iVar33 = 0;
            iVar13 = 0;
          }
          else {
            iVar38 = GetSystemMetrics(0x4c);
            iVar13 = GetSystemMetrics(0x4d);
            iVar33 = 0x4e;
            local_220 = 0x4f;
          }
          iVar33 = GetSystemMetrics(iVar33);
          iVar19 = GetSystemMetrics(local_220);
          iVar38 = (int)((float)iVar33 * ((float)piVar21[9] / 65535.0)) + iVar38;
          iVar13 = (int)((float)iVar19 * ((float)piVar21[10] / 65535.0)) + iVar13;
          iVar33 = *(int *)(param_1 + 0x24c);
          iVar19 = *(int *)(param_1 + 0x250);
          iVar27 = *(int *)(param_1 + 0x254);
          fVar44 = (float)(*(int *)(param_1 + 600) - iVar19);
          fVar43 = (float)(*(int *)(param_1 + 0x25c) - iVar27);
          iVar30 = iVar38 - *(int *)(param_1 + 0x23c);
          iVar31 = iVar13 - *(int *)(param_1 + 0x240);
          bVar29 = iVar30 == 0;
          bVar4 = iVar31 == 0;
          *(int *)(param_1 + 0x24c) = iVar33 + -1;
          if ((iVar33 < 1) || (bVar29 && bVar4)) {
            if (0 < iVar33) {
              iVar31 = 0;
              iVar30 = 0;
            }
            if (!bVar29 || !bVar4) goto LAB_1408c6cb0;
          }
          else {
            iVar33 = iVar38 - *(int *)(param_1 + 0x244);
            iVar34 = iVar13 - *(int *)(param_1 + 0x248);
            if ((uint)(iVar34 * iVar34 + iVar33 * iVar33) <
                (uint)(iVar31 * iVar31 + iVar30 * iVar30)) {
              *(int *)(param_1 + 0x244) = iVar38;
              *(int *)(param_1 + 0x248) = iVar13;
              iVar30 = iVar33;
              iVar31 = iVar34;
            }
            else {
LAB_1408c6cb0:
              iVar33 = iVar27 + (int)(fVar43 * 0.1);
              iVar41 = (int)(fVar44 * 0.1) + iVar19;
              iVar19 = (int)(fVar44 * 0.9) + iVar19;
              iVar20 = iVar27 + (int)(fVar43 * 0.9);
              iVar34 = iVar27 + 0x32 + (int)(fVar43 * 0.1);
              if (iVar13 <= iVar20) {
                iVar34 = iVar13;
              }
              iVar27 = iVar27 + -0x32 + (int)(fVar43 * 0.9);
              if (iVar33 <= iVar13) {
                iVar27 = iVar34;
              }
              if (iVar38 < iVar41) {
                iVar34 = iVar19 + -0x32;
LAB_1408c6d30:
                local_198._8_8_ = (undefined8)iVar27;
                local_198._0_8_ = (undefined8)iVar34;
                (**(code **)(**(longlong **)(param_1 + 0x18) + 0x1e8))();
                *(undefined4 *)(param_1 + 0x24c) = 10;
                *(int *)(param_1 + 0x244) = iVar38;
                *(int *)(param_1 + 0x248) = iVar13;
                iVar38 = iVar34;
              }
              else {
                iVar34 = iVar41 + 0x32;
                if (((iVar19 < iVar38) || (iVar34 = iVar38, iVar13 < iVar33)) || (iVar20 < iVar13))
                goto LAB_1408c6d30;
              }
              *(int *)(param_1 + 0x23c) = iVar38;
              *(int *)(param_1 + 0x240) = iVar27;
            }
          }
          iVar13 = -iVar30;
          if (-iVar30 < 0) {
            iVar13 = iVar30;
          }
          iVar38 = -iVar31;
          if (-iVar31 < 0) {
            iVar38 = iVar31;
          }
          if (((iVar30 != 0 || iVar31 != 0) && (iVar13 < (int)(fVar44 * 0.4))) &&
             (iVar38 < (int)(fVar43 * 0.4))) goto LAB_1408c69d0;
        }
        pLVar6 = (LARGE_INTEGER *)local_198._0_8_;
        pLVar7 = (LARGE_INTEGER *)local_198._8_8_;
        if (piVar21 != (int *)0x0) {
          FUN_1400020a8(piVar21);
          pLVar6 = (LARGE_INTEGER *)local_198._0_8_;
          pLVar7 = (LARGE_INTEGER *)local_198._8_8_;
        }
        goto LAB_1408c602a;
      }
      if (piVar21 != (int *)0x0) {
        FUN_1400020a8(piVar21);
      }
      puVar24 = &DAT_00000001;
      LVar9 = local_208;
      plVar26 = local_200;
      pLVar6 = (LARGE_INTEGER *)local_198._0_8_;
      pLVar7 = (LARGE_INTEGER *)local_198._8_8_;
      break;
    case 0x100:
    case 0x101:
    case 0x105:
    case 0x10d:
    case 0x10e:
    case 0x10f:
switchD_1408c517a_caseD_100:
      UVar12 = param_3;
      goto LAB_1408c5285;
    case 0x102:
      UVar12 = 0x102;
LAB_1408c5285:
      FUN_14095a128(param_1,&local_1c8,param_2,UVar12);
      goto LAB_1408c528a;
    case 0x103:
    case 0x107:
    case 0x108:
    case 0x109:
    case 0x10a:
    case 0x10b:
    case 0x10c:
    case 0x110:
    case 0x111:
      goto switchD_1408c517a_caseD_103;
    case 0x104:
      if ((param_4 != 0x73) && ((param_4 != 0x20 || (*(char *)(param_1 + 0xcc) != '\0')))) {
        uVar37 = 0x104;
        goto LAB_1408c5ff8;
      }
      break;
    case 0x106:
      bVar4 = false;
      puVar24 = (undefined1 *)0x0;
      if (*(char *)(param_1 + 0xcc) == '\0') {
        bVar4 = false;
        puVar24 = (undefined1 *)0x0;
        if ((param_4 == 0x20 & (byte)((ulonglong)param_5 >> 0x1d) & 1) != 0) break;
      }
      goto LAB_1408c602d;
    case 0x112:
      uVar14 = (uint)param_4 & 0xfff0;
      if (uVar14 != 0xf030) {
        if (uVar14 == 0xf060) {
          bVar4 = false;
          puVar24 = &DAT_00000001;
          if ((DAT_14c872a70 == '\0') && (DAT_14c867d18 == 0)) {
            bVar4 = false;
            FUN_14095a128(param_1,&local_1c8,param_2,0x10);
            pLVar6 = (LARGE_INTEGER *)local_198._0_8_;
            pLVar7 = (LARGE_INTEGER *)local_198._8_8_;
          }
          goto LAB_1408c602d;
        }
        if (uVar14 == 0xf120) {
          BVar15 = IsIconic(param_2);
          if (BVar15 != 0) {
            ShowWindow(param_2,9);
            pLVar6 = (LARGE_INTEGER *)local_198._0_8_;
            pLVar7 = (LARGE_INTEGER *)local_198._8_8_;
            goto switchD_1408c52ac_caseD_1;
          }
          plVar26 = *(longlong **)(param_1 + 0x18);
          local_198._0_4_ = local_1d8.s.LowPart;
          local_198._4_4_ = local_1d8.s.HighPart;
          local_198._8_4_ = SUB84(local_1d0,0);
          local_198._12_4_ = (undefined4)((ulonglong)local_1d0 >> 0x20);
          if (local_1d0 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_1d0 + 1) = (int)local_1d0[1] + 1;
            UNLOCK();
          }
          lVar25 = *plVar26;
          uVar37 = 3;
          goto LAB_1408c5675;
        }
        plVar26 = *(longlong **)(param_1 + 0x18);
        if (local_1d0 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_1d0 + 1) = (int)local_1d0[1] + 1;
          UNLOCK();
        }
        cVar11 = (**(code **)(*plVar26 + 8))(plVar26,local_198);
        plVar40 = (longlong *)CONCAT44(local_198._12_4_,local_198._8_4_);
        if (cVar11 != '\0') goto LAB_1408c6679;
        goto LAB_1408c6550;
      }
      plVar26 = *(longlong **)(param_1 + 0x18);
      if (local_1d0 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_1d0 + 1) = (int)local_1d0[1] + 1;
        UNLOCK();
      }
      lVar25 = *plVar26;
      uVar37 = 2;
LAB_1408c5675:
      cVar11 = (**(code **)(lVar25 + 0x1e0))(plVar26,local_198,uVar37);
      plVar26 = (longlong *)CONCAT44(local_198._12_4_,local_198._8_4_);
      if (plVar26 != (longlong *)0x0) {
        LOCK();
        plVar40 = plVar26 + 1;
        *(int *)plVar40 = (int)*plVar40 + -1;
        UNLOCK();
        if ((int)*plVar40 == 0) {
          (**(code **)*plVar26)(plVar26);
          LOCK();
          piVar21 = (int *)((longlong)plVar26 + 0xc);
          *piVar21 = *piVar21 + -1;
          UNLOCK();
          if (*piVar21 == 0) {
            (**(code **)(*plVar26 + 0x10))(plVar26);
          }
        }
      }
      pLVar7 = (LARGE_INTEGER *)CONCAT44(local_198._12_4_,local_198._8_4_);
      pLVar6 = (LARGE_INTEGER *)CONCAT44(local_198._4_4_,local_198._0_4_);
joined_r0x0001408c5a3b:
      puVar24 = &DAT_00000001;
      LVar9 = local_208;
      plVar26 = local_200;
      if (cVar11 == '\0') goto LAB_1408c602a;
      break;
    default:
      switch(param_3) {
      case 0x7e:
        DStack_170 = 0;
        DStack_16c = 0;
        UStack_168 = 0;
        local_164 = 0;
        fStack_180 = 0.0;
        LStack_17c = 0;
        LStack_178 = 0;
        local_174 = 0;
        local_198._8_4_ = 0;
        local_198._12_4_ = 0;
        fStack_188 = 0.0;
        UStack_184 = 0;
        local_158 = 0;
        uStack_150 = 0;
        local_148 = 0;
        DStack_140 = 0;
        local_138 = 0;
        uStack_130 = 0;
        local_128 = 0;
        uStack_120 = 0;
        FUN_140c2d49a(local_198);
        FUN_14691d94c(param_1 + 0x38,local_198);
        FUN_140ecb711(CONCAT44(local_198._12_4_,local_198._8_4_),fStack_188);
        LVar9 = local_208;
        plVar26 = local_200;
        pLVar6 = (LARGE_INTEGER *)local_198._0_8_;
        pLVar7 = (LARGE_INTEGER *)0x0;
        if (CONCAT44(local_198._12_4_,local_198._8_4_) != 0) {
          FUN_1400020a8();
          LVar9 = local_208;
          plVar26 = local_200;
          pLVar6 = (LARGE_INTEGER *)local_198._0_8_;
          pLVar7 = (LARGE_INTEGER *)CONCAT44(local_198._12_4_,local_198._8_4_);
        }
        break;
      case 0x7f:
      case 0x80:
      case 0x81:
      case 0x82:
        goto switchD_1408c517a_caseD_103;
      case 0x83:
        if (param_4 != 0) {
          lVar25 = (**(code **)(*(longlong *)local_1d8 + 0xe0))(local_1d8.QuadPart);
          LVar9 = local_208;
          plVar26 = local_200;
          pLVar6 = (LARGE_INTEGER *)local_198._0_8_;
          pLVar7 = (LARGE_INTEGER *)local_198._8_8_;
          if (*(char *)(lVar25 + 0x18) == '\0') {
            piVar21 = (int *)(**(code **)(*(longlong *)LVar10 + 0xe0))(LVar10.QuadPart);
            if (*piVar21 == 5) {
              cVar11 = (**(code **)(*(longlong *)LVar10 + 0x70))(LVar10.QuadPart);
              if (cVar11 != '\0') {
                local_174 = 0;
                DStack_170 = 0;
                DStack_16c = 0;
                UStack_168 = 0;
                UStack_184 = 0;
                fStack_180 = 0.0;
                LStack_17c = 0;
                LStack_178 = 0;
                local_198._4_4_ = 0;
                local_198._8_4_ = 0;
                local_198._12_4_ = 0;
                fStack_188 = 0.0;
                local_164 = 0;
                uStack_160._0_2_ = 0;
                uStack_160._2_2_ = 0;
                local_198._0_4_ = 0x3c;
                GetWindowInfo(param_2,(PWINDOWINFO)local_198);
                iVar13 = param_5->left + UStack_168;
                param_5->left = iVar13;
                iVar38 = param_5->top + UStack_168;
                param_5->top = iVar38;
                iVar33 = param_5->right - UStack_168;
                param_5->right = iVar33;
                iVar19 = param_5->bottom - UStack_168;
                param_5->bottom = iVar19;
                param_5[1].left = iVar13;
                param_5[1].top = iVar38;
                param_5[1].right = iVar33;
                param_5[1].bottom = iVar19;
                *(int *)(*(longlong *)(param_5 + 3) + 0x10) =
                     *(int *)(*(longlong *)(param_5 + 3) + 0x10) + UStack_168;
                *(int *)(*(longlong *)(param_5 + 3) + 0x14) =
                     *(int *)(*(longlong *)(param_5 + 3) + 0x14) + UStack_168;
                *(int *)(*(longlong *)(param_5 + 3) + 0x18) =
                     *(int *)(*(longlong *)(param_5 + 3) + 0x18) + UStack_168 * -2;
                *(int *)(*(longlong *)(param_5 + 3) + 0x1c) =
                     *(int *)(*(longlong *)(param_5 + 3) + 0x1c) + UStack_168 * -2;
                puVar24 = &DAT_00000400;
                pLVar6 = (LARGE_INTEGER *)CONCAT44(local_198._4_4_,local_198._0_4_);
                pLVar7 = (LARGE_INTEGER *)CONCAT44(local_198._12_4_,local_198._8_4_);
                goto LAB_1408c602a;
              }
            }
            QueryPerformanceFrequency(&local_1b8);
            puVar24 = (undefined1 *)0x0;
            memset(local_198 + 4,0,0x120);
            local_198._0_4_ = 0x124;
            HVar18 = DwmGetCompositionTimingInfo((HWND)0x0,(DWM_TIMING_INFO *)local_198);
            pLVar6 = (LARGE_INTEGER *)CONCAT44(local_198._4_4_,local_198._0_4_);
            pLVar7 = (LARGE_INTEGER *)local_198._8_8_;
            if (-1 < HVar18) {
              QueryPerformanceCounter(&local_1f0);
              LVar9 = local_1f0;
              lVar25 = CONCAT44(fStack_188,local_198._12_4_);
              lVar32 = CONCAT44(LStack_178,LStack_17c);
              hTimer = CreateWaitableTimerW((LPSECURITY_ATTRIBUTES)0x0,1,(LPCWSTR)0x0);
              if (hTimer != (HANDLE)0x0) {
                lVar32 = lVar32 - (longlong)LVar9;
                lVar32 = lVar32 - ((lVar32 >> 0x3f) + lVar32 / lVar25) * lVar25;
                if (lVar32 == lVar25) {
                  lVar32 = 0;
                }
                if ((longlong)local_1b8 < 1) {
                  dVar5 = 0.0;
                }
                else {
                  dVar5 = ((double)lVar32 * 1000.0) / (double)local_1b8.QuadPart;
                }
                local_1e0.QuadPart = -(longlong)(dVar5 * 10000.0);
                BVar15 = SetWaitableTimer(hTimer,&local_1e0,0,(PTIMERAPCROUTINE)0x0,(LPVOID)0x0,0);
                if (BVar15 != 0) {
                  WaitForSingleObject(hTimer,(int)(longlong)dVar5 + 10);
                }
                CloseHandle(hTimer);
              }
              pLVar6 = (LARGE_INTEGER *)CONCAT44(local_198._4_4_,local_198._0_4_);
              pLVar7 = (LARGE_INTEGER *)local_198._8_8_;
            }
            goto LAB_1408c602a;
          }
        }
        break;
      case 0x84:
        lVar25 = (**(code **)(*(longlong *)local_1d8 + 0xe0))(local_1d8.QuadPart);
        LVar9 = local_208;
        plVar26 = local_200;
        pLVar6 = (LARGE_INTEGER *)local_198._0_8_;
        pLVar7 = (LARGE_INTEGER *)local_198._8_8_;
        if (*(char *)(lVar25 + 0x18) == '\0') {
          GetWindowRect(param_2,(LPRECT)local_198);
          LVar9 = local_208;
          plVar26 = local_200;
          pLVar6 = (LARGE_INTEGER *)local_198._0_8_;
          pLVar7 = (LARGE_INTEGER *)local_198._8_8_;
          if (*(char *)(*(longlong *)(LVar10.QuadPart + 8) + 0x25) == '\x01') {
            iVar38 = (int)(short)param_5 - local_198._0_4_;
            iVar13 = iVar13 - local_198._4_4_;
            plVar26 = *(longlong **)(param_1 + 0x18);
            local_1b8.s = local_1c8;
            uStack_1b0 = local_1c0;
            if (local_1c0 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_1c0 + 1) = (int)local_1c0[1] + 1;
              UNLOCK();
            }
            cVar11 = (**(code **)(*plVar26 + 8))(plVar26,&local_1b8);
            plVar26 = uStack_1b0;
            if (uStack_1b0 != (longlong *)0x0) {
              LOCK();
              plVar40 = uStack_1b0 + 1;
              *(int *)plVar40 = (int)*plVar40 + -1;
              UNLOCK();
              if ((int)*plVar40 == 0) {
                (**(code **)*uStack_1b0)(uStack_1b0);
                LOCK();
                piVar21 = (int *)((longlong)plVar26 + 0xc);
                *piVar21 = *piVar21 + -1;
                UNLOCK();
                if (*piVar21 == 0) {
                  (**(code **)(*plVar26 + 0x10))(plVar26);
                }
              }
            }
            lVar25 = 5;
            if (cVar11 != '\0') {
              plVar26 = *(longlong **)(param_1 + 0x18);
              local_1b8.s = local_1d8.s;
              uStack_1b0 = local_1d0;
              if (local_1d0 != (longlong *)0x0) {
                LOCK();
                *(int *)(local_1d0 + 1) = (int)local_1d0[1] + 1;
                UNLOCK();
              }
              iVar13 = (**(code **)(*plVar26 + 0x1a0))(plVar26,&local_1b8,iVar38,iVar13);
              plVar26 = uStack_1b0;
              if (uStack_1b0 != (longlong *)0x0) {
                LOCK();
                plVar40 = uStack_1b0 + 1;
                *(int *)plVar40 = (int)*plVar40 + -1;
                UNLOCK();
                if ((int)*plVar40 == 0) {
                  (**(code **)*uStack_1b0)(uStack_1b0);
                  LOCK();
                  piVar21 = (int *)((longlong)plVar26 + 0xc);
                  *piVar21 = *piVar21 + -1;
                  UNLOCK();
                  if (*piVar21 == 0) {
                    (**(code **)(*plVar26 + 0x10))(plVar26);
                  }
                }
              }
              lVar25 = (longlong)iVar13;
            }
            puVar24 = (undefined1 *)(ulonglong)*(uint *)(&DAT_149ec76e0 + lVar25 * 8);
            pLVar6 = (LARGE_INTEGER *)local_198._0_8_;
            pLVar7 = (LARGE_INTEGER *)local_198._8_8_;
            goto LAB_1408c602a;
          }
        }
        break;
      case 0x85:
        lVar25 = (**(code **)(*(longlong *)local_1d8 + 0xe0))();
        pLVar6 = (LARGE_INTEGER *)local_198._0_8_;
        pLVar7 = (LARGE_INTEGER *)local_198._8_8_;
        goto LAB_1408c5f30;
      case 0x86:
        lVar25 = (**(code **)(*(longlong *)local_1d8 + 0xe0))();
        cVar11 = *(char *)(lVar25 + 0x18);
        pLVar6 = (LARGE_INTEGER *)local_198._0_8_;
        pLVar7 = (LARGE_INTEGER *)local_198._8_8_;
        goto joined_r0x0001408c5a3b;
      case 0x87:
        puVar24 = &DAT_00000004;
        goto LAB_1408c602a;
      default:
        switch(param_3) {
        case 0xa0:
          goto switchD_1408c517a_caseD_100;
        case 0xa1:
        case 0xa4:
        case 0xa7:
          if ((longlong)param_4 < 9) {
            if ((param_4 == 2) || (param_4 == 8)) {
LAB_1408c5629:
              plVar26 = *(longlong **)(param_1 + 0x18);
              if (local_1d0 != (longlong *)0x0) {
                LOCK();
                *(int *)(local_1d0 + 1) = (int)local_1d0[1] + 1;
                UNLOCK();
              }
              lVar25 = *plVar26;
              uVar37 = 1;
              goto LAB_1408c5675;
            }
          }
          else if ((param_4 == 9) || (param_4 == 0x14)) goto LAB_1408c5629;
          break;
        default:
          goto switchD_1408c517a_caseD_103;
        }
      }
    }
    goto LAB_1408c5ffd;
  }
  switch(param_3) {
  case 1:
    goto switchD_1408c52ac_caseD_1;
  case 2:
    local_198._0_8_ = &local_1d8;
    FUN_14627826e(param_1 + 0x100);
    lVar25 = *(longlong *)(param_1 + 0x28);
    plVar26 = *(longlong **)(param_1 + 0x30);
    pLVar6 = (LARGE_INTEGER *)local_198._0_8_;
    pLVar7 = (LARGE_INTEGER *)local_198._8_8_;
    if (plVar26 == (longlong *)0x0) {
      if (*(char *)(lVar25 + 8) == '\x01') {
        bVar28 = DAT_14c966fe9 & 1;
        goto joined_r0x0001408c6987;
      }
    }
    else {
      LOCK();
      *(int *)(plVar26 + 1) = (int)plVar26[1] + 1;
      UNLOCK();
      bVar28 = DAT_14c966fe9 & *(byte *)(lVar25 + 8);
      LOCK();
      plVar40 = plVar26 + 1;
      *(int *)plVar40 = (int)*plVar40 + -1;
      UNLOCK();
      if ((int)*plVar40 == 0) {
        (**(code **)*plVar26)(plVar26);
        LOCK();
        piVar21 = (int *)((longlong)plVar26 + 0xc);
        *piVar21 = *piVar21 + -1;
        UNLOCK();
        pLVar6 = (LARGE_INTEGER *)local_198._0_8_;
        pLVar7 = (LARGE_INTEGER *)local_198._8_8_;
        if (*piVar21 == 0) {
          (**(code **)(*plVar26 + 0x10))(plVar26);
          pLVar6 = (LARGE_INTEGER *)local_198._0_8_;
          pLVar7 = (LARGE_INTEGER *)local_198._8_8_;
        }
      }
joined_r0x0001408c6987:
      bVar4 = false;
      puVar24 = (undefined1 *)0x0;
      if (bVar28 == 0) goto LAB_1408c602d;
      local_198._0_8_ = pLVar6;
      local_198._8_8_ = pLVar7;
      UiaReturnRawElementProvider(param_2,0,0,(IRawElementProviderSimple *)0x0);
    }
    goto LAB_1408c528a;
  case 3:
    if ((DAT_14c967214 != (short)param_5) || (puVar24 = (undefined1 *)0x0, DAT_14c967218 != iVar13))
    {
      plVar26 = *(longlong **)(param_1 + 0x18);
      if (local_1d0 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_1d0 + 1) = (int)local_1d0[1] + 1;
        UNLOCK();
      }
      (**(code **)(*plVar26 + 0x180))(plVar26,local_198);
      goto LAB_1408c654b;
    }
    break;
  case 4:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x15:
  case 0x17:
  case 0x19:
  case 0x1b:
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x22:
  case 0x23:
    goto switchD_1408c517a_caseD_103;
  case 5:
    FUN_14095a128(param_1,&local_1c8,param_2,5);
    if (param_4 == 2) {
      uVar37 = 2;
    }
    else {
      puVar24 = (undefined1 *)0x0;
      bVar4 = false;
      pLVar6 = (LARGE_INTEGER *)local_198._0_8_;
      pLVar7 = (LARGE_INTEGER *)local_198._8_8_;
      if (param_4 != 0) goto LAB_1408c602d;
      uVar37 = 3;
    }
    plVar26 = *(longlong **)(param_1 + 0x18);
    local_198._0_4_ = local_1d8.s.LowPart;
    local_198._4_4_ = local_1d8.s.HighPart;
    local_198._8_4_ = SUB84(local_1d0,0);
    local_198._12_4_ = (undefined4)((ulonglong)local_1d0 >> 0x20);
    if (local_1d0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_1d0 + 1) = (int)local_1d0[1] + 1;
      UNLOCK();
    }
    (**(code **)(*plVar26 + 0x1e0))(plVar26,local_198,uVar37);
LAB_1408c654b:
    plVar40 = (longlong *)CONCAT44(local_198._12_4_,local_198._8_4_);
LAB_1408c6550:
    pLVar6 = (LARGE_INTEGER *)CONCAT44(local_198._4_4_,local_198._0_4_);
    pLVar7 = (LARGE_INTEGER *)CONCAT44(local_198._12_4_,local_198._8_4_);
    if (plVar40 != (longlong *)0x0) {
      LOCK();
      plVar26 = plVar40 + 1;
      *(int *)plVar26 = (int)*plVar26 + -1;
      UNLOCK();
      pLVar6 = (LARGE_INTEGER *)CONCAT44(local_198._4_4_,local_198._0_4_);
      pLVar7 = (LARGE_INTEGER *)CONCAT44(local_198._12_4_,local_198._8_4_);
      if ((int)*plVar26 == 0) {
        (**(code **)*plVar40)(plVar40);
        LOCK();
        piVar21 = (int *)((longlong)plVar40 + 0xc);
        *piVar21 = *piVar21 + -1;
        UNLOCK();
        pLVar6 = (LARGE_INTEGER *)CONCAT44(local_198._4_4_,local_198._0_4_);
        pLVar7 = (LARGE_INTEGER *)CONCAT44(local_198._12_4_,local_198._8_4_);
        if (*piVar21 == 0) {
          (**(code **)(*plVar40 + 0x10))(plVar40);
          pLVar6 = (LARGE_INTEGER *)CONCAT44(local_198._4_4_,local_198._0_4_);
          pLVar7 = (LARGE_INTEGER *)CONCAT44(local_198._12_4_,local_198._8_4_);
        }
      }
    }
    goto switchD_1408c52ac_caseD_1;
  case 6:
    uVar37 = 6;
    goto LAB_1408c5ff8;
  case 0xf:
    if (*(char *)(param_1 + 0x140) == '\x01') {
      if ((DAT_14c86a9f8 == '\x01') &&
         (iVar13 = *(int *)(*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0xc60), iVar13 != 2)) {
        if (iVar13 == 1) {
          DVar16 = FUN_140ad26c0();
          DVar17 = GetCurrentThreadId();
          LVar9 = local_208;
          plVar26 = local_200;
          pLVar6 = (LARGE_INTEGER *)local_198._0_8_;
          pLVar7 = (LARGE_INTEGER *)local_198._8_8_;
          if (DVar16 == DVar17) goto LAB_1408c5df7;
        }
      }
      else {
LAB_1408c5df7:
        plVar40 = local_1c0;
        plVar26 = *(longlong **)(param_1 + 0x18);
        local_198._4_4_ = local_1c8.HighPart;
        if (local_1c0 == (longlong *)0x0) {
          local_198._8_4_ = 0;
          local_198._12_4_ = 0;
        }
        else {
          LOCK();
          *(int *)(local_1c0 + 1) = (int)local_1c0[1] + 1;
          UNLOCK();
          local_198._8_4_ = SUB84(local_1c0,0);
          local_198._12_4_ = (undefined4)((ulonglong)local_1c0 >> 0x20);
          LOCK();
          *(int *)(local_1c0 + 1) = (int)local_1c0[1] + 1;
          UNLOCK();
        }
        local_198._0_4_ = local_1c8.LowPart;
        (**(code **)(*plVar26 + 0x148))(plVar26,local_198);
        plVar26 = (longlong *)CONCAT44(local_198._12_4_,local_198._8_4_);
        if (plVar26 != (longlong *)0x0) {
          LOCK();
          plVar3 = plVar26 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
            (**(code **)*plVar26)(plVar26);
            LOCK();
            piVar21 = (int *)((longlong)plVar26 + 0xc);
            *piVar21 = *piVar21 + -1;
            UNLOCK();
            if (*piVar21 == 0) {
              (**(code **)(*plVar26 + 0x10))(plVar26);
            }
          }
        }
LAB_1408c6679:
        LVar9 = local_208;
        plVar26 = local_200;
        pLVar6 = (LARGE_INTEGER *)CONCAT44(local_198._4_4_,local_198._0_4_);
        pLVar7 = (LARGE_INTEGER *)CONCAT44(local_198._12_4_,local_198._8_4_);
        if (plVar40 != (longlong *)0x0) {
          LOCK();
          plVar3 = plVar40 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          pLVar6 = (LARGE_INTEGER *)CONCAT44(local_198._4_4_,local_198._0_4_);
          pLVar7 = (LARGE_INTEGER *)CONCAT44(local_198._12_4_,local_198._8_4_);
          if ((int)*plVar3 == 0) {
            (**(code **)*plVar40)(plVar40);
            LOCK();
            piVar21 = (int *)((longlong)plVar40 + 0xc);
            *piVar21 = *piVar21 + -1;
            UNLOCK();
            LVar9 = local_208;
            plVar26 = local_200;
            pLVar6 = (LARGE_INTEGER *)CONCAT44(local_198._4_4_,local_198._0_4_);
            pLVar7 = (LARGE_INTEGER *)CONCAT44(local_198._12_4_,local_198._8_4_);
            if (*piVar21 == 0) {
              (**(code **)(*plVar40 + 0x10))(plVar40);
              LVar9 = local_208;
              plVar26 = local_200;
              pLVar6 = (LARGE_INTEGER *)CONCAT44(local_198._4_4_,local_198._0_4_);
              pLVar7 = (LARGE_INTEGER *)CONCAT44(local_198._12_4_,local_198._8_4_);
            }
          }
        }
      }
    }
    break;
  case 0x10:
    UVar12 = 0x10;
    goto LAB_1408c5285;
  case 0x14:
    puVar24 = &DAT_00000001;
    goto LAB_1408c602a;
  case 0x16:
    if (param_4 == 1) {
      FUN_14692a07e();
    }
    puVar24 = (undefined1 *)DefWindowProcW(param_2,0x16,param_4,(LPARAM)param_5);
    pLVar6 = (LARGE_INTEGER *)local_198._0_8_;
    pLVar7 = (LARGE_INTEGER *)local_198._8_8_;
LAB_1408c602a:
    bVar4 = false;
    goto LAB_1408c602d;
  case 0x18:
    uVar37 = 0x18;
    goto LAB_1408c5ff8;
  case 0x1a:
    if (param_5 != (LPRECT)0x0) {
      iVar13 = wcscmp(L"ConvertibleSlateMode",(wchar_t *)param_5);
      LVar9 = local_208;
      plVar26 = local_200;
      pLVar6 = (LARGE_INTEGER *)local_198._0_8_;
      pLVar7 = (LARGE_INTEGER *)local_198._8_8_;
      if (iVar13 == 0) {
        uVar37 = 0x1a;
        goto LAB_1408c5ff8;
      }
    }
    break;
  case 0x1c:
    *(undefined1 *)(param_1 + 0x140) = 0;
    uVar37 = 0x1c;
    goto LAB_1408c5ff8;
  case 0x20:
    FUN_14095a128(param_1,&local_1c8,param_2,0x20);
    lVar25 = (**(code **)(*(longlong *)local_1d8 + 0xe0))();
    pLVar6 = (LARGE_INTEGER *)local_198._0_8_;
    pLVar7 = (LARGE_INTEGER *)local_198._8_8_;
LAB_1408c5f30:
    bVar4 = false;
    puVar24 = (undefined1 *)0x0;
    LVar9 = local_208;
    plVar26 = local_200;
    if (*(char *)(lVar25 + 0x18) == '\0') goto LAB_1408c602d;
    break;
  case 0x21:
    uVar37 = 0x21;
LAB_1408c5ff8:
    local_198._0_8_ = pLVar6;
    local_198._8_8_ = pLVar7;
    FUN_14095a128(param_1,&local_1c8,param_2,uVar37);
    LVar9 = local_208;
    plVar26 = local_200;
    pLVar6 = (LARGE_INTEGER *)local_198._0_8_;
    pLVar7 = (LARGE_INTEGER *)local_198._8_8_;
    break;
  case 0x24:
    plVar26 = *(longlong **)(param_1 + 0x18);
    local_1b8.s = local_1d8.s;
    uStack_1b0 = local_1d0;
    if (local_1d0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_1d0 + 1) = (int)local_1d0[1] + 1;
      UNLOCK();
    }
    (**(code **)(*plVar26 + 0x150))(plVar26,local_198,&local_1b8);
    plVar26 = uStack_1b0;
    if (uStack_1b0 != (longlong *)0x0) {
      LOCK();
      plVar40 = uStack_1b0 + 1;
      *(int *)plVar40 = (int)*plVar40 + -1;
      UNLOCK();
      if ((int)*plVar40 == 0) {
        (**(code **)*uStack_1b0)(uStack_1b0);
        LOCK();
        piVar21 = (int *)((longlong)plVar26 + 0xc);
        *piVar21 = *piVar21 + -1;
        UNLOCK();
        if (*piVar21 == 0) {
          (**(code **)(*plVar26 + 0x10))(plVar26);
        }
      }
    }
    LVar9 = local_1d8;
    lVar25 = (**(code **)(*(longlong *)local_1d8 + 0xe0))(local_1d8.QuadPart);
    iVar38 = 0;
    iVar13 = 0;
    if (*(char *)(lVar25 + 0x18) == '\x01') {
      DVar16 = GetWindowLongW(param_2,-0x10);
      DVar17 = GetWindowLongW(param_2,-0x14);
      local_1b8.s.LowPart = 0;
      local_1b8.s.HighPart = 0;
      uStack_1b0 = (longlong *)0x0;
      AdjustWindowRectEx((LPRECT)&local_1b8.s,DVar16,0,DVar17);
      iVar38 = (int)(float)uStack_1b0 - local_1b8._0_4_;
      iVar13 = uStack_1b0._4_4_ - local_1b8._4_4_;
    }
    fVar44 = (float)(**(code **)(*(longlong *)LVar9 + 0xf8))(LVar9.QuadPart);
    fVar43 = (float)local_198._0_4_;
    if (local_198[4] == '\0') {
      fVar43 = (float)param_5[1].right;
    }
    param_5[1].right = (int)ROUND(fVar43 * fVar44 + fVar43 * fVar44 + 0.5) >> 1;
    fVar43 = (float)local_198._8_4_;
    if (local_198[0xc] == '\0') {
      fVar43 = (float)param_5[1].bottom;
    }
    param_5[1].bottom = (int)ROUND(fVar43 * fVar44 + fVar43 * fVar44 + 0.5) >> 1;
    fVar43 = fStack_188;
    if ((char)UStack_184 == '\0') {
      fVar43 = (float)param_5[2].left;
    }
    param_5[2].left = ((int)ROUND(fVar43 * fVar44 + fVar43 * fVar44 + 0.5) >> 1) + iVar38;
    fVar43 = fStack_180;
    if ((char)LStack_17c == '\0') {
      fVar43 = (float)param_5[2].top;
    }
    param_5[2].top = ((int)ROUND(fVar44 * fVar43 + fVar44 * fVar43 + 0.5) >> 1) + iVar13;
    pLVar6 = (LARGE_INTEGER *)local_198._0_8_;
    pLVar7 = (LARGE_INTEGER *)local_198._8_8_;
switchD_1408c52ac_caseD_1:
    local_198._0_8_ = pLVar6;
    local_198._8_8_ = pLVar7;
LAB_1408c528a:
    bVar4 = false;
    puVar24 = (undefined1 *)0x0;
    pLVar6 = (LARGE_INTEGER *)local_198._0_8_;
    pLVar7 = (LARGE_INTEGER *)local_198._8_8_;
    goto LAB_1408c602d;
  default:
    if (param_3 - 0x50 < 2) goto switchD_1408c517a_caseD_100;
    if (param_3 == 0x3d) {
      lVar25 = *(longlong *)(param_1 + 0x28);
      plVar40 = *(longlong **)(param_1 + 0x30);
      if (plVar40 == (longlong *)0x0) {
        if (*(char *)(lVar25 + 8) != '\x01') break;
        bVar28 = DAT_14c966fe9 & 1;
        LVar10 = local_1d8;
        plVar3 = local_1d0;
      }
      else {
        LOCK();
        *(int *)(plVar40 + 1) = (int)plVar40[1] + 1;
        UNLOCK();
        bVar28 = DAT_14c966fe9 & *(byte *)(lVar25 + 8);
        LOCK();
        plVar1 = plVar40 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        LVar10 = local_1d8;
        plVar3 = local_1d0;
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar40)(plVar40);
          LOCK();
          piVar21 = (int *)((longlong)plVar40 + 0xc);
          *piVar21 = *piVar21 + -1;
          UNLOCK();
          LVar9 = local_208;
          plVar26 = local_200;
          LVar10 = local_1d8;
          plVar3 = local_1d0;
          if (*piVar21 == 0) {
            (**(code **)(*plVar40 + 0x10))(plVar40);
            LVar9 = local_208;
            plVar26 = local_200;
            LVar10 = local_1d8;
            plVar3 = local_1d0;
          }
        }
      }
      local_200 = plVar3;
      local_208 = LVar10;
      local_1d8 = local_208;
      local_1d0 = local_200;
      pLVar6 = (LARGE_INTEGER *)local_198._0_8_;
      pLVar7 = (LARGE_INTEGER *)local_198._8_8_;
      if (bVar28 == 0) break;
      uVar37 = *(undefined8 *)(param_1 + 0x1f0);
      if (local_200 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_200 + 1) = (int)local_200[1] + 1;
        UNLOCK();
      }
      lVar25 = FUN_1469182a6(uVar37,&local_208);
      el = (IRawElementProviderSimple *)(lVar25 + 0x28);
      if (lVar25 == 0) {
        el = (IRawElementProviderSimple *)0x0;
      }
      puVar24 = (undefined1 *)UiaReturnRawElementProvider(param_2,param_4,(LPARAM)param_5,el);
      (**(code **)(*(longlong *)(lVar25 + 0x28) + 0x10))
                ((IRawElementProviderSimple *)(lVar25 + 0x28));
      pLVar6 = (LARGE_INTEGER *)local_198._0_8_;
      pLVar7 = (LARGE_INTEGER *)local_198._8_8_;
      goto LAB_1408c602a;
    }
switchD_1408c517a_caseD_103:
    if (!bVar29) break;
    bVar4 = false;
    puVar24 = (undefined1 *)(ulonglong)uVar14;
    goto LAB_1408c602d;
  }
LAB_1408c5ffd:
  local_200 = plVar26;
  local_208 = LVar9;
  bVar4 = true;
LAB_1408c602d:
  local_198._0_8_ = pLVar6;
  local_198._8_8_ = pLVar7;
  if (pLVar35 != (LARGE_INTEGER *)0x0) {
    FUN_1400020a8();
  }
LAB_1408c603f:
  plVar26 = local_1d0;
  if (local_1d0 != (longlong *)0x0) {
    LOCK();
    plVar40 = local_1d0 + 1;
    *(int *)plVar40 = (int)*plVar40 + -1;
    UNLOCK();
    if ((int)*plVar40 == 0) {
      (**(code **)*local_1d0)(local_1d0);
      LOCK();
      piVar21 = (int *)((longlong)plVar26 + 0xc);
      *piVar21 = *piVar21 + -1;
      UNLOCK();
      if (*piVar21 == 0) {
        (**(code **)(*plVar26 + 0x10))(plVar26);
      }
    }
  }
  if (bVar4) {
LAB_1408c607d:
    puVar24 = (undefined1 *)DefWindowProcW(param_2,param_3,param_4,(LPARAM)param_5);
  }
  if (local_1c0 != (longlong *)0x0) {
    LOCK();
    plVar26 = local_1c0 + 1;
    *(int *)plVar26 = (int)*plVar26 + -1;
    UNLOCK();
    if ((int)*plVar26 == 0) {
      (**(code **)*local_1c0)(local_1c0);
      LOCK();
      piVar21 = (int *)((longlong)local_1c0 + 0xc);
      *piVar21 = *piVar21 + -1;
      UNLOCK();
      if (*piVar21 == 0) {
        (**(code **)(*local_1c0 + 0x10))(local_1c0);
      }
    }
  }
  if ((local_70 ^ (ulonglong)auStackY_288) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return (ulonglong)puVar24 & 0xffffffff;
}



// FUNCTION 1408c7a34 FUN_1408c7a34 body=21 status=ok
// SIG undefined FUN_1408c7a34(void)

undefined8 FUN_1408c7a34(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1408c7a4a FUN_1408c7a4a body=92 status=ok
// SIG undefined FUN_1408c7a4a(void)

void FUN_1408c7a4a(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (*(longlong *)(param_2 + 0x68) == DAT_14cbc8e58) {
    local_10 = *(undefined4 *)(param_2 + 0x80);
    local_18 = *(undefined8 *)(param_2 + 0x78);
    FUN_1408c7aa8(param_1,&local_18);
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1408c7aa8 FUN_1408c7aa8 body=340 status=ok
// SIG undefined FUN_1408c7aa8(void)

void FUN_1408c7aa8(longlong param_1,longlong *param_2)

{
  byte bVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*param_2 == 0) {
LAB_1408c7bde:
    if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  bVar1 = *(byte *)(param_2 + 1);
  if (5 < bVar1) goto LAB_1408c7bde;
  *(byte *)(param_1 + 0x57) = bVar1;
  if (((bVar1 == 0) && (*(char *)(param_1 + 0x58) == '\0')) || (*(char *)(param_1 + 0x49) != '\x01')
     ) goto LAB_1408c7b47;
  if (*(int *)(param_1 + 0x3c) == 0) {
LAB_1408c7c06:
    uVar4 = 0;
  }
  else {
    uVar2 = *(uint *)(param_1 + 0x38);
    uVar4 = 0;
    if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
      puVar5 = (undefined8 *)
               ((ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
      if ((puVar5 == (undefined8 *)0x0) ||
         ((*(int *)(puVar5 + 2) != *(int *)(param_1 + 0x3c) ||
          ((*(uint *)(puVar5 + 1) & 0x10200000) != 0)))) goto LAB_1408c7c06;
      uVar4 = *puVar5;
    }
  }
  FUN_140ee6060(bVar1,uVar4);
LAB_1408c7b47:
  FUN_14108fdc2(param_1);
  if (((*(int *)(param_1 + 0x3c) != 0) && (uVar2 = *(uint *)(param_1 + 0x38), -1 < (int)uVar2)) &&
     ((int)uVar2 < DAT_14c9647dc)) {
    plVar6 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((((plVar6 != (longlong *)0x0) && ((int)plVar6[2] == *(int *)(param_1 + 0x3c))) &&
        (((*(uint *)(plVar6 + 1) & 0x10200000) == 0 &&
         ((lVar3 = *plVar6, lVar3 != 0 && (*(longlong *)(lVar3 + 0x10) != 0)))))) &&
       ((*(byte *)(*(longlong *)(lVar3 + 0x10) + 0xd6) & 4) != 0)) {
      FUN_148c25128(lVar3,CONCAT71((int7)((ulonglong)plVar6 >> 8),*(undefined1 *)(param_1 + 0x57)));
    }
  }
  local_19 = *(undefined1 *)(param_1 + 0x57);
  FUN_1447cd2ec(param_1);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
}



// FUNCTION 1408c7c0e FUN_1408c7c0e body=12 status=ok
// SIG undefined FUN_1408c7c0e(void)

void FUN_1408c7c0e(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001408c7c17. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1408c7c1a FUN_1408c7c1a body=31 status=ok
// SIG undefined FUN_1408c7c1a(void)

undefined8 FUN_1408c7c1a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1408c7c3a FUN_1408c7c3a body=206 status=ok
// SIG undefined FUN_1408c7c3a(void)

void FUN_1408c7c3a(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  bool bVar4;
  char cVar5;
  ulonglong uVar6;
  longlong lVar7;
  bool bVar8;
  longlong lVar9;
  ulonglong uVar10;
  
  *(undefined1 *)((longlong)param_1 + 0x69) = 0;
  lVar7 = param_1[7];
  if ((longlong)(int)lVar7 != 0) {
    lVar2 = param_1[6];
    lVar9 = 0;
    do {
      if (*(longlong **)(lVar2 + lVar9) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(lVar2 + lVar9) + 0x2d8))();
      }
      lVar9 = lVar9 + 8;
    } while ((longlong)(int)lVar7 * 8 != lVar9);
  }
  *(undefined1 *)((longlong)param_1 + 0x6a) = 1;
  iVar1 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar1 + 1;
  uVar6 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar6 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar1;
  }
  else {
    bVar8 = false;
    do {
      lVar7 = uVar6 * 0x10 + -8;
      uVar10 = uVar6;
      while ((*(int *)(*param_1 + lVar7) != 0 &&
             (plVar3 = *(longlong **)(*param_1 + -8 + lVar7), plVar3 != (longlong *)0x0))) {
        cVar5 = (**(code **)(*plVar3 + 0x60))();
        if (cVar5 == '\0') break;
        lVar7 = lVar7 + -0x10;
        bVar4 = uVar10 < 2;
        uVar10 = uVar10 - 1;
        if (bVar4) {
          *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
          if (!bVar8) goto LAB_1408c7cd6;
          goto LAB_1408c7cf7;
        }
      }
      uVar6 = uVar10 - 1;
      bVar8 = true;
    } while (1 < uVar10);
    *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_1408c7cf7:
    FUN_14474d06a(param_1,0);
  }
LAB_1408c7cd6:
  FUN_1448a8284(param_1);
  return;
}



// FUNCTION 1408c7d08 FUN_1408c7d08 body=165 status=ok
// SIG undefined FUN_1408c7d08(void)

void FUN_1408c7d08(longlong *param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  FUN_1408c83c6();
  uVar2 = FUN_14477b072(param_1,DAT_14cb58b10);
  (**(code **)(*param_1 + 0x248))(param_1,uVar2,0);
  *(undefined1 *)((longlong)param_1 + 0x6a) = 1;
  (**(code **)(*param_1 + 0x2f0))(param_1);
  cVar1 = FUN_1408c7dae(param_1[2]);
  if (cVar1 != '\0') {
    lVar3 = (**(code **)(*param_1 + 0x2b8))(param_1);
    if ((lVar3 != 0) && (*(longlong *)(lVar3 + 0x188) != 0)) {
      FUN_1408c9530(param_1[2],*(longlong *)(lVar3 + 0x188),param_1);
    }
  }
  *(undefined1 *)((longlong)param_1 + 0x69) = 1;
  uVar2 = FUN_14477b072(param_1,DAT_14cb58af0);
                    /* WARNING: Could not recover jumptable at 0x0001408c7d9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x248))(param_1,uVar2,0,*(code **)(*param_1 + 0x248));
  return;
}



// FUNCTION 1408c7dae FUN_1408c7dae body=59 status=ok
// SIG undefined FUN_1408c7dae(void)

ulonglong FUN_1408c7dae(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  if (param_1 != 0) {
    lVar2 = FUN_14043ab18();
    lVar1 = *(longlong *)(param_1 + 0x10);
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38)) &&
       (uVar3 = CONCAT71((int7)((ulonglong)lVar1 >> 8),1),
       *(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
       lVar2 + 0x30)) goto LAB_1408c7ddd;
  }
  uVar3 = 0;
LAB_1408c7ddd:
  return uVar3 & 0xffffffff;
}



// FUNCTION 1408c7dea FUN_1408c7dea body=436 status=ok
// SIG undefined FUN_1408c7dea(void)

void FUN_1408c7dea(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 uVar8;
  longlong lVar9;
  bool bVar10;
  
  lVar4 = (**(code **)(*param_1 + 0x180))();
  if (((((lVar4 != 0) && ((*(byte *)(lVar4 + 0x155) & 0x20) == 0)) &&
       ((longlong *)param_1[0xc] != (longlong *)0x0)) &&
      (((*(int *)((longlong)param_1 + 0x5c) != 0 &&
        (uVar1 = *(uint *)(param_1 + 0xb), -1 < (int)uVar1)) &&
       (((int)uVar1 < DAT_14c9647dc &&
        ((lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar4 != 0 &&
         (*(int *)(lVar4 + 0x10) == *(int *)((longlong)param_1 + 0x5c))))))))) &&
     ((*(uint *)(lVar4 + 8) & 0x10200000) == 0)) {
    plVar5 = (longlong *)(**(code **)(*(longlong *)param_1[0xc] + 0x18))();
    lVar4 = param_1[0xf];
    if ((longlong)(int)lVar4 != 0) {
      lVar7 = param_1[0xe];
      lVar9 = 0;
      do {
        lVar2 = *(longlong *)(lVar7 + lVar9);
        if ((((lVar2 != 0) && (*(longlong *)(lVar2 + 8) != 0)) && (0 < (int)*(uint *)(plVar5 + 1)))
           && (uVar1 = *(uint *)(lVar7 + 0x1c + lVar9), uVar1 < *(uint *)(plVar5 + 1))) {
          lVar6 = (ulonglong)uVar1 * 0x88 + *plVar5;
          if (*(longlong *)(lVar2 + 0x24) == 0) {
            bVar10 = 0 < *(int *)(lVar6 + 0x80);
          }
          else {
            cVar3 = FUN_1408c826c(lVar6,*(undefined4 *)(lVar7 + 0x20 + lVar9));
            if (cVar3 == '\0') goto LAB_1408c7eff;
            bVar10 = *(int *)(lVar6 + 0x80) == *(int *)(lVar7 + 0x20 + lVar9);
          }
          *(bool *)(lVar7 + 0x19 + lVar9) = bVar10;
        }
LAB_1408c7eff:
        lVar9 = lVar9 + 0x28;
      } while ((longlong)(int)lVar4 * 0x28 != lVar9);
      if ((longlong)(int)param_1[0xf] != 0) {
        lVar4 = param_1[0xe];
        lVar7 = (longlong)(int)param_1[0xf] * 0x28;
        do {
          if (*(char *)(lVar4 + 0x19) == '\0') {
            FUN_1408c7ffa(param_1,lVar4,0,0);
          }
          lVar4 = lVar4 + 0x28;
          lVar7 = lVar7 + -0x28;
        } while (lVar7 != 0);
        if ((longlong)(int)param_1[0xf] != 0) {
          lVar4 = param_1[0xe];
          lVar7 = (longlong)(int)param_1[0xf] * 0x28;
          do {
            if (*(char *)(lVar4 + 0x19) == '\x01') {
              if (*(char *)((longlong)param_1 + 0x69) == '\0') {
                uVar8 = *(undefined1 *)((longlong)param_1 + 0x41);
              }
              else {
                uVar8 = 0;
              }
              FUN_1408c7ffa(param_1,lVar4,uVar8,0);
            }
            lVar4 = lVar4 + 0x28;
            lVar7 = lVar7 + -0x28;
          } while (lVar7 != 0);
        }
      }
    }
  }
  return;
}



// FUNCTION 1408c7ffa FUN_1408c7ffa body=624 status=ok
// SIG undefined FUN_1408c7ffa(void)

void FUN_1408c7ffa(longlong *param_1,longlong *param_2,char param_3,longlong *param_4)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  int iVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined4 local_40;
  byte local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((((*(char *)((longlong)param_1 + 0x6a) == '\x01') && (*param_2 != 0)) &&
      (((char)param_2[3] != *(char *)((longlong)param_2 + 0x19) || (param_3 != '\0')))) &&
     ((lVar4 = (**(code **)(*param_1 + 0x180))(param_1), lVar4 != 0 &&
      ((*(byte *)(lVar4 + 0x155) & 0x20) == 0)))) {
    *(char *)(param_2 + 3) = *(char *)((longlong)param_2 + 0x19);
    if (*(char *)((longlong)param_2 + 0x19) == '\x01') {
      *(undefined1 *)((longlong)param_2 + 0x1a) = 1;
      if (*(longlong *)(*param_2 + 0x10) != 0) {
        local_48 = 0;
        local_40 = 0xffffffff;
        local_3c = *(byte *)((longlong)param_1 + 0x69) ^ 1;
        if (param_4 != (longlong *)0x0) {
          local_40 = (undefined4)param_4[4];
          if ((undefined8 *)*param_4 == (undefined8 *)0x0) {
            local_48 = 0;
          }
          else {
            local_48 = *(undefined8 *)*param_4;
          }
        }
        (**(code **)(*param_1 + 0x248))(param_1,*(longlong *)(*param_2 + 0x10),&local_48);
      }
      *(undefined1 *)((longlong)param_2 + 0x1a) = 0;
    }
    else {
      *(undefined1 *)((longlong)param_2 + 0x1b) = 1;
      if (*(longlong *)(*param_2 + 0x18) != 0) {
        (**(code **)(*param_1 + 0x248))(param_1,*(longlong *)(*param_2 + 0x18),0);
      }
      if (*(longlong *)(lVar4 + 0x1f0) == 0) {
        lVar4 = lVar4 + 0x460;
      }
      else {
        lVar4 = *(longlong *)(*(longlong *)(lVar4 + 0x1f0) + 0xf8);
      }
      lVar2 = *param_2;
      if (param_1 == (longlong *)0x0) {
        local_48._0_4_ = 0;
        iVar3 = 0;
        uVar1 = (uint)local_48;
      }
      else {
        uVar1 = *(uint *)((longlong)param_1 + 0xc);
        local_48 = (ulonglong)uVar1;
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
          iVar7 = DAT_14c964868 + 1;
          bVar9 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar3;
          if (bVar9) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar7);
          }
          LOCK();
          iVar3 = *(int *)(lVar8 + 0x10);
          bVar9 = iVar3 == 0;
          if (bVar9) {
            *(int *)(lVar8 + 0x10) = iVar7;
            iVar3 = 0;
          }
          UNLOCK();
          uVar1 = (uint)local_48;
          if (bVar9) {
            iVar3 = iVar7;
          }
        }
      }
      local_48._0_4_ = uVar1;
      local_48 = CONCAT44(iVar3,(uint)local_48);
      FUN_1408c8a22(lVar4,&local_48,lVar2);
      *(undefined1 *)((longlong)param_2 + 0x1b) = 0;
    }
    if (((*(longlong *)(*param_2 + 0x24) != 0) && (*(char *)((longlong)param_2 + 0x19) == '\0')) &&
       ((longlong)(int)param_1[0xf] != 0)) {
      plVar5 = (longlong *)param_1[0xe];
      lVar4 = (longlong)(int)param_1[0xf] * 0x28;
      plVar6 = (longlong *)0x0;
      do {
        if (((plVar5 != param_2) && (lVar2 = *plVar5, lVar2 != 0)) &&
           (*(longlong *)(lVar2 + 0x24) == *(longlong *)(*param_2 + 0x24))) {
          if (*(char *)((longlong)plVar5 + 0x19) != '\0') goto LAB_1408c8037;
          if (*(char *)(lVar2 + 0x2c) != '\0') {
            plVar6 = plVar5;
          }
        }
        plVar5 = plVar5 + 5;
        lVar4 = lVar4 + -0x28;
      } while (lVar4 != 0);
      if (plVar6 != (longlong *)0x0) {
        FUN_1409d1d6a(param_1,plVar6,1);
      }
    }
  }
LAB_1408c8037:
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1408c826c FUN_1408c826c body=345 status=ok
// SIG undefined FUN_1408c826c(void)

bool FUN_1408c826c(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  bool bVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1448ec792(param_1 + 0x18,&local_30);
  if (local_30 != 0) {
    iVar7 = *(int *)(param_1 + 0x70);
    if ((longlong)iVar7 < 0) {
      lVar6 = *(longlong *)(local_30 + 0x78);
      uVar9 = *(uint *)(local_30 + 0x80);
LAB_1408c837f:
      if (uVar9 != 0) {
        lVar8 = (longlong)(int)uVar9 * 0x90 + lVar6;
        lVar5 = *(longlong *)(param_1 + 0x68);
        goto LAB_1408c8334;
      }
    }
    else {
      uVar9 = *(uint *)(local_30 + 0x80);
      lVar6 = *(longlong *)(local_30 + 0x78);
      if ((int)uVar9 <= iVar7) goto LAB_1408c837f;
      lVar5 = *(longlong *)(param_1 + 0x68);
      if (*(longlong *)(lVar6 + (longlong)iVar7 * 0x90) == lVar5) {
LAB_1408c82d7:
        lVar6 = (longlong)iVar7 * 0x90 + lVar6;
        goto LAB_1408c82e5;
      }
      lVar8 = (ulonglong)uVar9 * 0x90 + lVar6;
LAB_1408c8334:
      uVar10 = 0;
      do {
        if (*(longlong *)(lVar6 + uVar10) == lVar5) {
          iVar7 = (int)(uVar10 >> 4) * 0x38e38e39;
          *(int *)(param_1 + 0x70) = iVar7;
          if (iVar7 == -1) goto LAB_1408c83bf;
          lVar6 = *(longlong *)(local_30 + 0x78);
          goto LAB_1408c82d7;
        }
        lVar3 = lVar6 + uVar10;
        uVar10 = uVar10 + 0x90;
      } while (lVar3 + 0x90 != lVar8);
    }
    *(undefined4 *)(param_1 + 0x70) = 0xffffffff;
  }
LAB_1408c83bf:
  lVar6 = 0;
LAB_1408c82e5:
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
      }
    }
  }
  bVar4 = false;
  if ((-1 < param_2) && (lVar6 != 0)) {
    bVar4 = param_2 < *(int *)(lVar6 + 0x10);
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar4;
}



// FUNCTION 1408c83c6 FUN_1408c83c6 body=1611 status=ok
// SIG undefined FUN_1408c83c6(void)

void FUN_1408c83c6(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong *plVar13;
  undefined2 *puVar14;
  longlong *plVar15;
  longlong *plVar16;
  longlong lVar17;
  undefined1 auStack_148 [32];
  ulonglong local_128;
  undefined8 local_120;
  longlong local_118;
  longlong *local_110;
  longlong *local_108;
  longlong *local_100;
  longlong *local_f8;
  undefined8 local_f0;
  undefined2 *local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined2 *local_a8;
  undefined8 local_a0;
  longlong *local_98;
  undefined8 local_90;
  undefined2 *local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_148;
  plVar1 = param_1 + 0x12;
  *(undefined4 *)(param_1 + 0x13) = 0;
  if (*(int *)((longlong)param_1 + 0x9c) < 0) {
    FUN_1487c0488(plVar1,0);
  }
  lVar2 = param_1[2];
  if (lVar2 != 0) {
    lVar8 = FUN_14043ab18();
    if (((*(int *)(lVar8 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8)
         == lVar8 + 0x30)) &&
       (lVar9 = (**(code **)(*param_1 + 0x2b8))(param_1), lVar8 = lVar9, lVar9 != 0)) {
      do {
        if ((*(uint *)(lVar8 + 8) & 0x30) != 0) goto LAB_1408c8480;
        plVar13 = (longlong *)(lVar8 + 0x20);
        lVar8 = *plVar13;
      } while (*plVar13 != 0);
      if (((*(uint *)(lVar9 + 8) >> 0x1e & 1) == 0) && ((longlong)*(int *)(lVar2 + 0x288) != 0)) {
        plVar15 = *(longlong **)(lVar2 + 0x280);
        plVar13 = plVar15 + *(int *)(lVar2 + 0x288);
        plVar16 = (longlong *)(lVar9 + 0x2a0);
        do {
          lVar8 = *plVar15;
          if (lVar8 != 0) {
            uVar3 = *(undefined8 *)(lVar8 + 0x94);
            local_108 = plVar13;
            local_100 = plVar15;
            local_78 = uVar3;
            FUN_1400021e4(&local_78,&local_88);
            puVar14 = &DAT_149dfb77a;
            if ((int)uStack_80 != 0) {
              puVar14 = local_88;
            }
            uVar10 = FUN_1408c9060();
            lVar11 = FUN_140277b32(uVar10,lVar9,puVar14,0);
            if (local_88 != (undefined2 *)0x0) {
              FUN_1400020a8();
            }
            if (lVar11 == 0) {
              local_120 = 0;
              local_128 = local_128 & 0xffffffffffffff00;
              lVar11 = FUN_145754019(lVar9,uVar3,*(uint *)(lVar9 + 8) & 0x29 | 0x900040);
            }
            local_88 = (undefined2 *)0x0;
            FUN_14485c47a(&local_88,lVar11);
            iVar6 = (int)param_1[0x13];
            *(uint *)(param_1 + 0x13) = iVar6 + 1U;
            if (*(uint *)((longlong)param_1 + 0x9c) < iVar6 + 1U) {
              FUN_1457540f8(plVar1,iVar6);
            }
            *(undefined2 **)(*plVar1 + (longlong)iVar6 * 8) = local_88;
            *(undefined1 *)(lVar11 + 0xb9) = 2;
            if ((lVar11 != 0) && (DAT_14c950c29 != '\0')) {
              FUN_1456cec3c(lVar11);
            }
            iVar6 = *(int *)(lVar9 + 0x2a8);
            *(uint *)(lVar9 + 0x2a8) = iVar6 + 1U;
            if (*(uint *)(lVar9 + 0x2ac) < iVar6 + 1U) {
              FUN_14092ecf6(plVar16,iVar6);
            }
            *(longlong *)(*plVar16 + (longlong)iVar6 * 8) = lVar11;
            if ((lVar11 != 0) && (DAT_14c950c29 != '\0')) {
              FUN_1456cec3c(lVar11);
            }
            FUN_1408c8a1a(lVar11);
            FUN_145753ffc(lVar11,param_1);
            FUN_145753fdc(lVar11,*(undefined8 *)(lVar8 + 0x9c));
            FUN_1408c8fc2(lVar11,*(undefined4 *)(lVar8 + 0x28));
            FUN_1408c8a12(lVar11,*(undefined1 *)(lVar8 + 0x2c));
            *(undefined1 *)(lVar11 + 0x48) = *(undefined1 *)(lVar8 + 0x90);
            lVar12 = FUN_1408c92bc(lVar2,local_78,3);
            if (lVar12 != 0) {
              FUN_1408c8fa8(lVar12,param_1,lVar11);
            }
            iVar6 = *(int *)(lVar8 + 0x38);
            local_110 = plVar16;
            if (0 < iVar6) {
              local_118 = 0;
              do {
                if (*(longlong *)(*(longlong *)(lVar8 + 0x30) + 0x20 + local_118 * 0x28) != 0) {
                  lVar12 = *(longlong *)(lVar8 + 0x30) + local_118 * 0x28;
                  local_88 = (undefined2 *)0x0;
                  uStack_80 = 0;
                  uVar3 = *(undefined8 *)(lVar12 + 0x18);
                  FUN_14485c47a(&local_88,param_1);
                  FUN_147a410da(*(longlong *)(lVar12 + 0x20) + 0x30,&local_98);
                  puVar14 = local_88;
                  uVar7 = (uint)local_90;
                  if (-1 < (int)(uint)local_90) {
                    do {
                      if ((int)local_98[1] <= (int)uVar7) break;
                      local_a8 = puVar14;
                      local_a0 = uVar3;
                      FUN_147d73806(lVar11,*(undefined4 *)(*local_98 + 4 + (ulonglong)uVar7 * 0x1c),
                                    &local_a8);
                      iVar6 = (uint)local_90;
                      uVar7 = (uint)local_90 + 1;
                      local_90 = CONCAT44(local_90._4_4_,uVar7);
                    } while (-2 < iVar6);
                  }
                  iVar6 = *(int *)(lVar8 + 0x38);
                }
                local_118 = local_118 + 1;
              } while (local_118 < iVar6);
            }
            iVar6 = *(int *)(lVar8 + 0x48);
            if (0 < iVar6) {
              lVar12 = 0x20;
              lVar17 = 0;
              do {
                lVar4 = *(longlong *)(lVar8 + 0x40);
                if (*(longlong *)(lVar4 + lVar12) != 0) {
                  local_128 = *(ulonglong *)(lVar4 + -0x18 + lVar12);
                  local_b8 = 0;
                  uStack_b0 = 0;
                  FUN_1408c9004(lVar11,*(undefined8 *)(lVar4 + lVar12),&local_b8);
                  iVar6 = *(int *)(lVar8 + 0x48);
                }
                lVar17 = lVar17 + 1;
                lVar12 = lVar12 + 0x28;
              } while (lVar17 < iVar6);
            }
            iVar6 = *(int *)(lVar8 + 0x58);
            if (0 < iVar6) {
              lVar12 = 0x20;
              lVar17 = 0;
              do {
                lVar4 = *(longlong *)(lVar8 + 0x50);
                if (*(longlong *)(lVar4 + lVar12) != 0) {
                  local_128 = *(ulonglong *)(lVar4 + -0x18 + lVar12);
                  local_c8 = 0;
                  uStack_c0 = 0;
                  FUN_147d7386e(lVar11,*(undefined8 *)(lVar4 + lVar12),&local_c8);
                  iVar6 = *(int *)(lVar8 + 0x58);
                }
                lVar17 = lVar17 + 1;
                lVar12 = lVar12 + 0x28;
              } while (lVar17 < iVar6);
            }
            iVar6 = *(int *)(lVar8 + 0x68);
            if (0 < iVar6) {
              lVar12 = 0x20;
              lVar17 = 0;
              do {
                lVar4 = *(longlong *)(lVar8 + 0x60);
                if (*(longlong *)(lVar4 + lVar12) != 0) {
                  local_128 = *(ulonglong *)(lVar4 + -0x18 + lVar12);
                  local_d8 = 0;
                  uStack_d0 = 0;
                  FUN_147d738ca(lVar11,*(undefined8 *)(lVar4 + lVar12),&local_d8);
                  iVar6 = *(int *)(lVar8 + 0x68);
                }
                lVar17 = lVar17 + 1;
                lVar12 = lVar12 + 0x28;
              } while (lVar17 < iVar6);
            }
            local_88 = (undefined2 *)0x0;
            uVar3 = *(undefined8 *)(lVar8 + 0xa4);
            FUN_14485c47a(&local_88,param_1);
            local_e8 = local_88;
            local_e0 = uVar3;
            uStack_80 = uVar3;
            FUN_145753fe4(lVar11,&local_e8);
            local_98 = (longlong *)0x0;
            uVar3 = *(undefined8 *)(lVar8 + 0xac);
            FUN_14485c47a(&local_98,param_1);
            local_f8 = local_98;
            local_f0 = uVar3;
            local_90 = uVar3;
            FUN_145753ff0(lVar11,&local_f8);
            FUN_140b506a4(lVar11);
            bVar5 = *(byte *)(lVar8 + 0x2d);
            if ((bVar5 & 1) != 0) {
              *(byte *)(lVar11 + 0x9e) = *(byte *)(lVar11 + 0x9e) | 8;
              FUN_145982b8c(lVar11);
              bVar5 = *(byte *)(lVar8 + 0x2d);
            }
            plVar15 = local_100;
            plVar16 = local_110;
            if ((bVar5 & 2) != 0) {
              FUN_145754008(lVar11,1);
              bVar5 = *(byte *)(lVar8 + 0x2d);
            }
            if ((bVar5 & 4) != 0) {
              FUN_140b361ee(lVar11,1);
              bVar5 = *(byte *)(lVar8 + 0x2d);
            }
            plVar13 = local_108;
            if ((bVar5 & 8) != 0) {
              FUN_147d7398a(lVar11,1);
              plVar13 = local_108;
            }
          }
          plVar15 = plVar15 + 1;
        } while (plVar15 != plVar13);
      }
    }
  }
LAB_1408c8480:
  if ((local_70 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1408c8a12 FUN_1408c8a12 body=7 status=ok
// SIG undefined FUN_1408c8a12(void)

void FUN_1408c8a12(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x110) = param_2;
  return;
}



// FUNCTION 1408c8a1a FUN_1408c8a1a body=8 status=ok
// SIG undefined FUN_1408c8a1a(void)

void FUN_1408c8a1a(longlong param_1)

{
  *(byte *)(param_1 + 0x9c) = *(byte *)(param_1 + 0x9c) | 0x20;
  return;
}



// FUNCTION 1408c8a22 FUN_1408c8a22 body=1142 status=ok
// SIG undefined FUN_1408c8a22(void)

void FUN_1408c8a22(longlong param_1,uint *param_2,longlong *param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  char cVar10;
  int iVar11;
  longlong *plVar12;
  longlong *plVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  uint *puVar18;
  longlong *plVar19;
  longlong lVar20;
  ulonglong uVar21;
  longlong lVar22;
  longlong *plVar23;
  ulonglong uVar24;
  int iVar25;
  longlong lVar26;
  uint uVar27;
  undefined1 auStack_98 [32];
  longlong *local_78;
  uint local_6c;
  longlong local_68;
  longlong *local_60;
  longlong *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar12 = (longlong *)FUN_140633c48();
  if (((((plVar12 != (longlong *)0x0) && (param_2[1] != 0)) && (uVar27 = *param_2, -1 < (int)uVar27)
       ) && (((((int)uVar27 < DAT_14c9647dc &&
               (plVar19 = (longlong *)
                          ((ulonglong)((uVar27 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar27 >> 0x10) * 8)),
               plVar19 != (longlong *)0x0)) &&
              ((*(uint *)(plVar19 + 2) == param_2[1] &&
               (((*(uint *)(plVar19 + 1) & 0x10200000) == 0 && (*plVar19 != 0)))))) &&
             (lVar22 = *(longlong *)(*plVar19 + 0x10), lVar22 != 0)))) &&
     (*(int *)(lVar22 + 0x208) != *(int *)(lVar22 + 0x234))) {
    local_50 = *(undefined8 *)param_2;
    local_78 = plVar12;
    local_58 = param_3;
    if ((longlong)*(int *)(param_1 + 0x58) != 0) {
      lVar26 = *(longlong *)(param_1 + 0x50);
      lVar20 = (longlong)*(int *)(param_1 + 0x58) * 0x18;
      do {
        cVar10 = FUN_1401246e4(lVar26,&local_50);
        if (cVar10 != '\0') {
          if (lVar26 != 0) {
            plVar19 = *(longlong **)(lVar26 + 8);
            plVar13 = *(longlong **)(lVar26 + 0x10);
            if (plVar13 == (longlong *)0x0) {
              plVar13 = (longlong *)0x0;
            }
            else {
              LOCK();
              *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
              UNLOCK();
            }
            goto LAB_1408c8b8a;
          }
          break;
        }
        lVar26 = lVar26 + 0x18;
        lVar20 = lVar20 + -0x18;
      } while (lVar20 != 0);
    }
    plVar19 = (longlong *)FUN_14001cc68(0x10,0x10);
    *plVar19 = 0;
    plVar19[1] = 0;
    plVar13 = (longlong *)FUN_14001cc68(0x18,0x10);
    plVar13[1] = (longlong)&DAT_100000001;
    *plVar13 = (longlong)&PTR_FUN_14a9b2000;
    plVar13[2] = (longlong)plVar19;
    uVar6 = *(undefined8 *)param_2;
    if (plVar13 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
      UNLOCK();
    }
    iVar11 = *(int *)(param_1 + 0x58);
    lVar26 = (longlong)iVar11;
    *(uint *)(param_1 + 0x58) = iVar11 + 1U;
    if (*(uint *)(param_1 + 0x5c) < iVar11 + 1U) {
      FUN_14572ffc6((longlong *)(param_1 + 0x50),iVar11);
    }
    lVar20 = *(longlong *)(param_1 + 0x50);
    *(undefined8 *)(lVar20 + lVar26 * 0x18) = uVar6;
    *(longlong **)(lVar20 + 8 + lVar26 * 0x18) = plVar19;
    *(longlong **)(lVar20 + 0x10 + lVar26 * 0x18) = plVar13;
LAB_1408c8b8a:
    iVar11 = (int)local_78[5];
    if (iVar11 == 0) {
      uVar21 = 1;
      uVar24 = 0;
      iVar14 = 0;
      iVar25 = 0;
    }
    else {
      puVar18 = (uint *)local_78[4];
      if ((uint *)local_78[4] == (uint *)0x0) {
        puVar18 = (uint *)(plVar12 + 2);
      }
      uVar27 = *puVar18;
      if (uVar27 == 0) {
        iVar14 = iVar11 + 0x1e;
        if (-1 < iVar11 + -1) {
          iVar14 = iVar11 + -1;
        }
        uVar24 = 0;
        uVar21 = (ulonglong)(uint)(iVar14 >> 5);
        if (iVar14 >> 5 < 1) {
          uVar21 = uVar24;
        }
        iVar25 = 0;
        do {
          if (uVar21 == uVar24) goto LAB_1408c8c11;
          iVar25 = iVar25 + 0x20;
          uVar27 = puVar18[uVar24 + 1];
          uVar24 = uVar24 + 1;
        } while (uVar27 == 0);
      }
      else {
        uVar24 = 0;
        iVar25 = 0;
      }
      uVar21 = (ulonglong)(-uVar27 & uVar27);
      uVar4 = uVar21 * 2 + 1;
      lVar26 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar26 == 0; lVar26 = lVar26 + -1) {
        }
      }
      iVar14 = (iVar25 - ((uint)lVar26 ^ 0x3f)) + 0x3e;
      if (iVar11 <= iVar14) {
        iVar14 = iVar11;
      }
    }
    if (iVar14 < iVar11) {
      uVar27 = 0xffffffff;
      plVar23 = local_78;
      local_68 = lVar22;
      local_60 = plVar19;
      do {
        plVar19 = local_60;
        if (*(int *)(local_68 + 0x208) != *(int *)(local_68 + 0x234)) {
          uVar15 = *(uint *)(*plVar23 + (longlong)iVar14 * 0x18);
          lVar22 = local_68 + 0x238;
          if (*(longlong *)(local_68 + 0x240) != 0) {
            lVar22 = *(longlong *)(local_68 + 0x240);
          }
          uVar5 = *(uint *)(lVar22 + (ulonglong)(*(int *)(local_68 + 0x248) - 1U & uVar15) * 4);
          if (uVar5 != 0xffffffff) {
            puVar2 = (undefined4 *)(*plVar23 + (longlong)iVar14 * 0x18);
            do {
              puVar18 = (uint *)(*(longlong *)(local_68 + 0x200) + (longlong)(int)uVar5 * 0x14);
              if (*puVar18 == uVar15) {
                if (((puVar18 != (uint *)0x0) && (puVar18 + 1 != (uint *)0x0)) &&
                   (*(longlong *)(puVar18 + 1) == *local_58)) {
                  iVar11 = (int)local_60[1];
                  *(uint *)(local_60 + 1) = iVar11 + 1U;
                  local_6c = uVar27;
                  if (*(uint *)((longlong)local_60 + 0xc) < iVar11 + 1U) {
                    FUN_1408c8e9a(local_60,iVar11);
                  }
                  uVar7 = puVar2[1];
                  uVar8 = puVar2[2];
                  uVar9 = puVar2[3];
                  puVar3 = (undefined4 *)(*plVar19 + (longlong)iVar11 * 0x10);
                  *puVar3 = *puVar2;
                  puVar3[1] = uVar7;
                  puVar3[2] = uVar8;
                  puVar3[3] = uVar9;
                  iVar11 = (int)local_78[5];
                  plVar23 = local_78;
                  uVar27 = local_6c;
                }
                break;
              }
              uVar5 = puVar18[3];
            } while (uVar5 != 0xffffffff);
          }
        }
        uVar27 = uVar27 & ~(uint)uVar21;
        puVar18 = (uint *)plVar23[4];
        if ((uint *)plVar23[4] == (uint *)0x0) {
          puVar18 = (uint *)(plVar12 + 2);
        }
        iVar14 = (int)uVar24;
        lVar22 = (longlong)iVar14;
        uVar15 = puVar18[lVar22] & uVar27;
        if (uVar15 == 0) {
          iVar16 = iVar11 + 0x1e;
          if (-1 < iVar11 + -1) {
            iVar16 = iVar11 + -1;
          }
          iVar16 = iVar16 >> 5;
          iVar17 = iVar16;
          if (iVar16 < iVar14) {
            iVar17 = iVar14;
          }
          if (iVar16 <= iVar14) break;
          lVar26 = 0;
          while( true ) {
            iVar25 = iVar25 + 0x20;
            uVar15 = puVar18[lVar22 + lVar26 + 1];
            if (uVar15 != 0) break;
            lVar26 = lVar26 + 1;
            if (iVar17 - lVar22 == lVar26) goto LAB_1408c8c11;
          }
          uVar24 = (ulonglong)(iVar14 + (int)lVar26 + 1);
          uVar27 = 0xffffffff;
        }
        uVar21 = (ulonglong)(-uVar15 & uVar15);
        uVar4 = uVar21 * 2 + 1;
        lVar22 = 0x3f;
        if (uVar4 != 0) {
          for (; uVar4 >> lVar22 == 0; lVar22 = lVar22 + -1) {
          }
        }
        iVar14 = (iVar25 - ((uint)lVar22 ^ 0x3f)) + 0x3e;
      } while (iVar14 < iVar11);
    }
LAB_1408c8c11:
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
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1408c8e9a FUN_1408c8e9a body=269 status=ok
// SIG undefined FUN_1408c8e9a(void)

void FUN_1408c8e9a(longlong param_1,int param_2)

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



// FUNCTION 1408c8fa8 FUN_1408c8fa8 body=25 status=ok
// SIG undefined FUN_1408c8fa8(void)

void FUN_1408c8fa8(longlong *param_1,undefined8 param_2,longlong param_3)

{
  if ((param_3 == 0) && ((*(byte *)((longlong)param_1 + 0x39) & 0x10) != 0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001408c8fbd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x200))();
  return;
}



// FUNCTION 1408c8fc2 FUN_1408c8fc2 body=66 status=ok
// SIG undefined FUN_1408c8fc2(void)

void FUN_1408c8fc2(longlong param_1,float param_2)

{
  float fVar1;
  
  *(float *)(param_1 + 0x114) = param_2;
  if (*(float *)(param_1 + 0x11c) <= param_2) {
    return;
  }
  fVar1 = param_2 + -0.0001;
  if (param_2 <= param_2 + -0.0001) {
    fVar1 = param_2;
  }
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  FUN_143741180(param_1 + 0x110,fVar1,0,1);
  return;
}



// FUNCTION 1408c9004 FUN_1408c9004 body=90 status=ok
// SIG undefined FUN_1408c9004(void)

void FUN_1408c9004(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = *param_3;
  local_10 = param_3[1];
  local_28 = param_5;
  FUN_1408c9146(param_1 + 0x110,param_2,&local_18);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1408c9060 FUN_1408c9060 body=228 status=ok
// SIG undefined FUN_1408c9060(void)

longlong FUN_1408c9060(void)

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
  if (DAT_14cac8d60 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_143242436;
    local_38 = &LAB_1478aad01;
    local_40 = &LAB_1411b11c2;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0x1b0;
    FUN_14081cfa3(L"/Script/Engine",L"TimelineComponent",&DAT_14cac8d60,FUN_146399afc);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cac8d60;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1408c9146 FUN_1408c9146 body=373 status=ok
// SIG undefined FUN_1408c9146(void)

void FUN_1408c9146(longlong param_1,longlong param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_a8 [40];
  longlong local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 *puStack_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_2 != 0) {
    local_58 = 0;
    puStack_50 = (undefined8 *)0x0;
    local_48 = 0;
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(param_2);
    }
    uVar3 = *param_3;
    uVar4 = param_3[1];
    local_68 = param_5;
    iVar2 = *(int *)(param_1 + 0x38);
    *(uint *)(param_1 + 0x38) = iVar2 + 1U;
    local_80 = param_2;
    local_78 = uVar3;
    local_70 = uVar4;
    uStack_60 = param_4;
    if (*(uint *)(param_1 + 0x3c) < iVar2 + 1U) {
      FUN_1417f5500((longlong *)(param_1 + 0x30),iVar2);
    }
    lVar5 = *(longlong *)(param_1 + 0x30);
    lVar1 = lVar5 + (longlong)iVar2 * 0x40;
    *(longlong *)(lVar5 + (longlong)iVar2 * 0x40) = param_2;
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(param_2);
    }
    *(undefined8 *)(lVar1 + 8) = uVar3;
    *(undefined8 *)(lVar1 + 0x10) = uVar4;
    *(undefined4 *)(lVar1 + 0x18) = (undefined4)local_68;
    *(undefined4 *)(lVar1 + 0x1c) = local_68._4_4_;
    *(undefined4 *)(lVar1 + 0x20) = (undefined4)uStack_60;
    *(undefined4 *)(lVar1 + 0x24) = uStack_60._4_4_;
    *(undefined8 *)(lVar1 + 0x28) = local_58;
    *(undefined8 *)(lVar1 + 0x30) = 0;
    *(undefined4 *)(lVar1 + 0x38) = 0;
    FUN_140328a42(lVar1 + 0x30,&puStack_50);
    if (local_48 != 0) {
      if (puStack_50 == (undefined8 *)0x0) goto LAB_1408c9274;
      (**(code **)*puStack_50)(puStack_50,0);
      FUN_1446efa72(&puStack_50,0,0,0x10);
      local_48 = 0;
    }
    if (puStack_50 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_1408c9274:
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1408c92bc FUN_1408c92bc body=311 status=ok
// SIG undefined FUN_1408c92bc(void)

longlong FUN_1408c92bc(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [40];
  longlong *local_30;
  longlong local_28;
  int local_20;
  char local_1c;
  byte local_1b;
  byte local_1a;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 != 0) {
    FUN_1408c93f4(&local_30,param_1);
    plVar2 = local_30;
    lVar3 = local_28;
LAB_1408c92f1:
    local_28 = lVar3;
    local_30 = plVar2;
    if (local_28 != 0) {
      lVar3 = local_28;
      if (*(longlong *)(local_28 + 0x20) == param_2) goto LAB_1408c9390;
      lVar3 = *(longlong *)(local_28 + 0x18);
      plVar2 = local_30;
      local_28 = lVar3;
      if (local_30 != (longlong *)0x0) {
        do {
          lVar4 = (longlong)local_20;
          while( true ) {
            for (; lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 0x18)) {
              if (((~*(uint *)(*(longlong *)(lVar3 + 8) + 0x18) & 0x4008001) == 0) &&
                 (((local_1b & 1) != 0 || ((*(byte *)(lVar3 + 0x3b) & 0x20) == 0))))
              goto LAB_1408c92f1;
            }
            if ((local_1a & 1) == 0) break;
            lVar4 = lVar4 + 1;
            local_20 = (int)lVar4;
            if ((int)plVar2[0x3c] <= lVar4) break;
            lVar1 = *(longlong *)(plVar2[0x3b] + lVar4 * 0x10);
            lVar3 = 0;
            if (lVar1 != 0) {
              lVar3 = *(longlong *)(lVar1 + 0x50);
            }
          }
          if ((local_1c != '\x01') ||
             (plVar2 = (longlong *)(**(code **)(*plVar2 + 0x2b0))(), plVar2 == (longlong *)0x0))
          goto LAB_1408c938e;
          lVar3 = plVar2[10];
          local_20 = -1;
        } while( true );
      }
      plVar2 = (longlong *)0x0;
      goto LAB_1408c92f1;
    }
  }
LAB_1408c938e:
  lVar3 = 0;
LAB_1408c9390:
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3;
}



// FUNCTION 1408c93f4 FUN_1408c93f4 body=315 status=ok
// SIG undefined FUN_1408c93f4(void)

longlong * FUN_1408c93f4(longlong *param_1,longlong param_2,byte param_3)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  bool bVar5;
  
  *param_1 = param_2;
  if (param_2 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = *(longlong *)(param_2 + 0x50);
  }
  param_1[1] = lVar4;
  *(undefined4 *)(param_1 + 2) = 0xffffffff;
  *(byte *)((longlong)param_1 + 0x14) = param_3 & 1;
  *(byte *)((longlong)param_1 + 0x15) = param_3 >> 1 & 1;
  if ((param_3 & 4) != 0 && param_2 != 0) {
    lVar4 = FUN_144a797b2();
    if (*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) {
      bVar5 = *(longlong *)
               (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30;
      goto LAB_1408c9440;
    }
  }
  bVar5 = false;
LAB_1408c9440:
  *(bool *)((longlong)param_1 + 0x16) = bVar5;
  plVar2 = (longlong *)*param_1;
  lVar4 = param_1[1];
  if (plVar2 == (longlong *)0x0) {
    plVar2 = (longlong *)0x0;
  }
  else {
LAB_1408c9453:
    for (; lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0x18)) {
      if (((~*(uint *)(*(longlong *)(lVar4 + 8) + 0x18) & 0x4008001) == 0) &&
         ((*(char *)((longlong)param_1 + 0x15) != '\0' || ((*(byte *)(lVar4 + 0x3b) & 0x20) == 0))))
      goto LAB_1408c9475;
    }
    if (*(char *)((longlong)param_1 + 0x16) == '\x01') {
      lVar4 = (longlong)(int)param_1[2] + 1;
      iVar3 = (int)lVar4;
      *(int *)(param_1 + 2) = iVar3;
      if (iVar3 < (int)plVar2[0x3c]) {
        lVar1 = *(longlong *)(plVar2[0x3b] + lVar4 * 0x10);
        lVar4 = 0;
        if (lVar1 != 0) {
          lVar4 = *(longlong *)(lVar1 + 0x50);
        }
        goto LAB_1408c9453;
      }
    }
    if (*(char *)((longlong)param_1 + 0x14) == '\x01') {
      plVar2 = (longlong *)(**(code **)(*plVar2 + 0x2b0))();
      if (plVar2 != (longlong *)0x0) {
        lVar4 = plVar2[10];
        *(undefined4 *)(param_1 + 2) = 0xffffffff;
        goto LAB_1408c9453;
      }
      plVar2 = (longlong *)0x0;
    }
    lVar4 = 0;
  }
LAB_1408c9475:
  *param_1 = (longlong)plVar2;
  param_1[1] = lVar4;
  return param_1;
}



// FUNCTION 1408c9530 FUN_1408c9530 body=630 status=ok
// SIG undefined FUN_1408c9530(void)

void FUN_1408c9530(longlong param_1,longlong param_2,longlong param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  undefined *puVar11;
  ulonglong uVar12;
  int iVar13;
  int iVar14;
  undefined1 auStack_98 [36];
  uint local_74;
  undefined *local_70;
  ulonglong local_68;
  undefined *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((param_1 != 0) && (param_2 != 0)) {
    lVar5 = FUN_14043ab18();
    if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8
         ) == lVar5 + 0x30)) {
      if (param_3 == 0) {
        param_3 = *(longlong *)(param_2 + 0xa8);
      }
      FUN_1408c9530(*(undefined8 *)(param_1 + 0x40),param_2,param_3);
      local_68 = 0x100000000;
      local_60 = &DAT_14cae4990;
      local_58 = 0xffffffff;
      local_50 = 0;
      if (DAT_14cae49a8 == 0) {
        uVar12 = 1;
        local_74 = 0xffffffff;
        iVar13 = 0;
        local_58._4_4_ = 0;
        local_68._0_4_ = 0;
      }
      else {
        FUN_1449c0562(&local_68);
        uVar12 = local_68 >> 0x20;
        local_74 = (uint)local_58;
        iVar13 = DAT_14cae49a8;
      }
      puVar4 = local_60;
      if (local_58._4_4_ != iVar13 || local_60 != &DAT_14cae4990) {
        local_70 = &DAT_14cae4990;
        iVar8 = (int)local_68;
        iVar7 = local_58._4_4_;
        iVar14 = local_50;
        do {
          plVar6 = (longlong *)
                   FUN_1408c97a8(param_1,*(undefined8 *)(DAT_14cae4980 + (longlong)iVar7 * 0x10));
          if (plVar6 != (longlong *)0x0) {
            (**(code **)(*plVar6 + 0x2b8))(plVar6,param_2,param_3);
          }
          local_74 = local_74 & ~(uint)uVar12;
          puVar11 = *(undefined **)(puVar4 + 0x10);
          if (*(undefined **)(puVar4 + 0x10) == (undefined *)0x0) {
            puVar11 = puVar4;
          }
          iVar2 = *(int *)(puVar4 + 0x18);
          lVar5 = (longlong)iVar8;
          uVar9 = *(uint *)(puVar11 + lVar5 * 4) & local_74;
          if (uVar9 == 0) {
            iVar7 = iVar2 + 0x1e;
            if (-1 < iVar2 + -1) {
              iVar7 = iVar2 + -1;
            }
            iVar7 = iVar7 >> 5;
            iVar14 = iVar14 + 0x20;
            iVar3 = iVar7;
            if (iVar7 < iVar8) {
              iVar3 = iVar8;
            }
            if (iVar8 < iVar7) {
              lVar10 = 0;
              do {
                uVar9 = *(uint *)(puVar11 + lVar10 * 4 + lVar5 * 4 + 4);
                if (uVar9 != 0) {
                  iVar8 = iVar8 + (int)lVar10 + 1;
                  local_74 = 0xffffffff;
                  goto LAB_1408c96f8;
                }
                iVar14 = iVar14 + 0x20;
                lVar10 = lVar10 + 1;
              } while (iVar3 - lVar5 != lVar10);
              local_74 = 0xffffffff;
              iVar8 = iVar3;
            }
            iVar8 = iVar8 + 1;
            iVar7 = iVar2;
          }
          else {
LAB_1408c96f8:
            uVar12 = (ulonglong)(-uVar9 & uVar9);
            uVar1 = uVar12 * 2 + 1;
            lVar5 = 0x3f;
            if (uVar1 != 0) {
              for (; uVar1 >> lVar5 == 0; lVar5 = lVar5 + -1) {
              }
            }
            iVar7 = (iVar14 - ((uint)lVar5 ^ 0x3f)) + 0x3e;
            if (iVar2 <= iVar7) {
              iVar7 = iVar2;
            }
          }
        } while (iVar7 != iVar13 || puVar4 != local_70);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1408c97a8 FUN_1408c97a8 body=115 status=ok
// SIG undefined FUN_1408c97a8(void)

longlong FUN_1408c97a8(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_1 != 0) {
    lVar2 = FUN_14043ab18();
    if (((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) +
          (longlong)*(int *)(lVar2 + 0x38) * 8) == lVar2 + 0x30)) &&
       ((longlong)*(int *)(param_1 + 0x268) != 0)) {
      lVar2 = 0;
      while ((lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x260) + lVar2), lVar1 == 0 ||
             (*(longlong *)(lVar1 + 0x10) != param_2))) {
        lVar2 = lVar2 + 8;
        if ((longlong)*(int *)(param_1 + 0x268) * 8 == lVar2) {
          return 0;
        }
      }
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 1408c981c FUN_1408c981c body=91 status=ok
// SIG undefined FUN_1408c981c(void)

undefined8 * FUN_1408c981c(undefined8 param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  uVar1 = FUN_1408c9877(param_3);
  puVar2 = (undefined8 *)FUN_14001cc68(0x20,0x10);
  puVar2[1] = &DAT_100000001;
  *puVar2 = &PTR_LAB_14b9e2ad0;
  puVar2[2] = &LAB_1406c99f7;
  puVar2[3] = uVar1;
  *param_2 = uVar1;
  param_2[1] = puVar2;
  return param_2;
}



// FUNCTION 1408c9877 FUN_1408c9877 body=89 status=ok
// SIG undefined FUN_1408c9877(void)

undefined8 FUN_1408c9877(uint param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  bool bVar5;
  
  lVar2 = *(longlong *)(DAT_14cbe8328 + 8);
  cVar1 = *(char *)(lVar2 + 0x19);
  lVar3 = DAT_14cbe8328;
  while (cVar1 == '\0') {
    bVar5 = *(uint *)(lVar2 + 0x20) < param_1;
    if (!bVar5) {
      lVar3 = lVar2;
    }
    lVar2 = *(longlong *)(lVar2 + (ulonglong)bVar5 * 0x10);
    cVar1 = *(char *)(lVar2 + 0x19);
  }
  if ((((*(char *)(lVar3 + 0x19) == '\0') && (lVar3 != DAT_14cbe8328)) &&
      (*(uint *)(lVar3 + 0x20) <= param_1)) && (*(longlong **)(lVar3 + 0x60) != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0001408c98c9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (**(code **)(**(longlong **)(lVar3 + 0x60) + 0x10))();
    return uVar4;
  }
  return 0;
}



// FUNCTION 1408c98d0 FUN_1408c98d0 body=34 status=ok
// SIG undefined FUN_1408c98d0(void)

void FUN_1408c98d0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x20e0,0x10);
  *puVar1 = &PTR_FUN_14b9e27a0;
  return;
}



// FUNCTION 1408c98f2 FUN_1408c98f2 body=34 status=ok
// SIG undefined FUN_1408c98f2(void)

void FUN_1408c98f2(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x8f3a8,0x10);
  *puVar1 = &PTR_FUN_14b9e2250;
  return;
}



// FUNCTION 1408c9914 FUN_1408c9914 body=34 status=ok
// SIG undefined FUN_1408c9914(void)

void FUN_1408c9914(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x8f3a8,0x10);
  *puVar1 = &PTR_FUN_14b9e2440;
  return;
}



// FUNCTION 1408c993e FUN_1408c993e body=69 status=ok
// SIG undefined FUN_1408c993e(void)

undefined1 FUN_1408c993e(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1408c9984();
  FUN_1402057ac(param_2,param_1,uVar1,0);
  if (*param_1 != 0) {
    uVar1 = FUN_1408c99be();
    FUN_1405593a8(uVar1,param_1 + 0xb,param_1);
  }
  return 1;
}



// FUNCTION 1408c9984 FUN_1408c9984 body=57 status=ok
// SIG undefined FUN_1408c9984(void)

void FUN_1408c9984(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6f4b0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6f4b0 = FUN_140002ddd(FUN_1465406a6,uVar1,L"InventoryStatModifierData");
  }
  return;
}



// FUNCTION 1408c99be FUN_1408c99be body=188 status=ok
// SIG undefined FUN_1408c99be(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1408c99be(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb83300) {
    FUN_144b3d300(&DAT_14cb83300);
    if (DAT_14cb83300 == -1) {
      _DAT_14cb832b0 = 0;
      _DAT_14cb832b8 = 0;
      _DAT_14cb83290 = 0;
      uRam000000014cb83298 = 0;
      _DAT_14cb832bc = 0xffffffff00000080;
      _DAT_14cb832c4 = 0;
      DAT_14cb832d0 = 0;
      _DAT_14cb832d8 = 0;
      DAT_14cb832e0 = 0;
      uRam000000014cb832e8 = 0;
      _DAT_14cb832f0 = 0;
      InitializeSRWLock((PSRWLOCK)&DAT_14cb832f8);
      atexit(FUN_143daadad);
      _Init_thread_footer(&DAT_14cb83300);
    }
  }
  return &DAT_14cb83290;
}



// FUNCTION 1408c9a80 FUN_1408c9a80 body=285 status=ok
// SIG undefined FUN_1408c9a80(void)

void FUN_1408c9a80(longlong param_1,undefined8 param_2,uint param_3)

{
  longlong lVar1;
  int *piVar2;
  undefined1 auStack_78 [32];
  int *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  longlong local_40;
  undefined8 uStack_38;
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = param_2;
  local_48[0] = FUN_144830b78(local_48,&DAT_14cb420e0);
  local_40 = 0;
  uStack_38 = 0;
  if (*(longlong *)(param_1 + 0x760) == 0) {
    lVar1 = param_1 + 0x678;
    piVar2 = (int *)(**(code **)(*(longlong *)(param_1 + 0x678) + 0x58))(lVar1,&local_50,0);
    if (piVar2 == (int *)0x0) {
      local_2c = -1;
    }
    else {
      local_2c = *piVar2;
      if ((longlong)local_2c != -1) {
        *(uint *)(*(longlong *)(param_1 + 0x698) + (longlong)local_2c) = -(param_3 & 0xff);
        *(byte *)(param_1 + 0x6f8) = *(byte *)(param_1 + 0x6f8) | 1;
        goto LAB_1408c9adb;
      }
    }
    local_58 = &local_2c;
    (**(code **)(*(longlong *)(param_1 + 0x678) + 0x10))(lVar1,&local_50,0,0);
    *(uint *)(*(longlong *)(param_1 + 0x698) + (longlong)local_2c) = -(param_3 & 0xff);
    FUN_140219f72(lVar1);
  }
  else {
    FUN_1408c9b9e(*(longlong *)(param_1 + 0x760),param_2,param_3);
  }
LAB_1408c9adb:
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1408c9b9e FUN_1408c9b9e body=231 status=ok
// SIG undefined FUN_1408c9b9e(void)

void FUN_1408c9b9e(longlong param_1,undefined8 param_2,uint param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_78 [32];
  int *local_58;
  undefined8 local_48;
  undefined4 local_40 [2];
  longlong local_38;
  undefined8 uStack_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(longlong *)(param_1 + 0x28) == 0) goto LAB_1408c9c26;
  local_48 = param_2;
  local_40[0] = FUN_144830b78(local_40,&DAT_14cb420e0);
  local_38 = 0;
  uStack_30 = 0;
  plVar1 = *(longlong **)(param_1 + 0x28);
  piVar2 = (int *)(**(code **)(*plVar1 + 0x58))(plVar1,&local_48,0);
  if (piVar2 == (int *)0x0) {
    local_24 = -1;
LAB_1408c9c4d:
    local_58 = &local_24;
    (**(code **)(*plVar1 + 0x10))(plVar1,&local_48,0,0);
    *(uint *)(plVar1[4] + (longlong)local_24) = -(param_3 & 0xff);
    FUN_140219f72(plVar1);
  }
  else {
    local_24 = *piVar2;
    if ((longlong)local_24 == -1) goto LAB_1408c9c4d;
    *(uint *)(plVar1[4] + (longlong)local_24) = -(param_3 & 0xff);
    *(byte *)(plVar1 + 0x10) = *(byte *)(plVar1 + 0x10) | 1;
  }
  if (local_38 != 0) {
    FUN_1400020a8();
  }
LAB_1408c9c26:
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1408c9c86 FUN_1408c9c86 body=569 status=ok
// SIG undefined FUN_1408c9c86(void)

undefined8 FUN_1408c9c86(longlong param_1,longlong *param_2,void *param_3)

{
  longlong *plVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong lVar10;
  
  *(undefined1 *)(param_1 + 0x129) = 1;
  iVar3 = *(int *)(param_1 + 0x120);
  lVar10 = (longlong)iVar3;
  puVar8 = (undefined8 *)FUN_14001cc68(0x28,0x10);
  puVar8[1] = param_1;
  puVar8[2] = 0;
  *(int *)(puVar8 + 3) = iVar3;
  *puVar8 = &PTR_FUN_149f58360;
  *(undefined2 *)(puVar8 + 4) = 0;
  *(uint *)(param_1 + 0x120) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x124) < iVar3 + 1U) {
    FUN_1408ca1f0(param_1 + 0x118,iVar3);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x118) + lVar10 * 8) = puVar8;
  iVar3 = *(int *)(param_1 + 0x100);
  *(uint *)(param_1 + 0x100) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x104) < iVar3 + 1U) {
    FUN_1408ca0e2(param_1 + 0xf8,iVar3);
  }
  uVar5 = *(undefined4 *)((longlong)param_2 + 4);
  lVar4 = param_2[1];
  uVar6 = *(undefined4 *)((longlong)param_2 + 0xc);
  puVar2 = (undefined4 *)(*(longlong *)(param_1 + 0xf8) + (longlong)iVar3 * 0x10);
  *puVar2 = (int)*param_2;
  puVar2[1] = uVar5;
  puVar2[2] = (int)lVar4;
  puVar2[3] = uVar6;
  iVar3 = *(int *)(param_1 + 0x110);
  *(uint *)(param_1 + 0x110) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x114) < iVar3 + 1U) {
    FUN_1408ca352(param_1 + 0x108,iVar3);
  }
  lVar4 = *(longlong *)(param_1 + 0x108);
  lVar9 = (longlong)iVar3 * 0x58;
  *(undefined8 *)(lVar4 + lVar9) = 0xffffffffffffffff;
  ((undefined8 *)(lVar4 + lVar9))[1] = 0xffffffff;
  *(undefined1 *)(lVar4 + 0x14 + lVar9) = 0;
  *(undefined4 *)(lVar4 + 0xf + lVar9) = 0;
  *(undefined2 *)(lVar4 + 0x50 + lVar9) = 0;
  puVar8 = (undefined8 *)(lVar4 + 0x18 + lVar9);
  *puVar8 = 0;
  puVar8[1] = 0;
  puVar8 = (undefined8 *)(lVar4 + 0x28 + lVar9);
  *puVar8 = 0;
  puVar8[1] = 0;
  puVar8 = (undefined8 *)(lVar4 + 0x38 + lVar9);
  *puVar8 = 0;
  puVar8[1] = 0;
  *(undefined1 *)(lVar4 + 0x52 + lVar9) = 1;
  plVar1 = (longlong *)(param_1 + 0xe8);
  iVar3 = *(int *)(param_1 + 0xf0);
  *(uint *)(param_1 + 0xf0) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0xf4) < iVar3 + 1U) {
    FUN_14033361a(plVar1,iVar3);
  }
  FUN_1408c9ebf((longlong)iVar3 * 0x310 + *plVar1,1);
  memcpy((void *)(*plVar1 + lVar10 * 0x310),param_3,0x310);
  FUN_140baa8d8(lVar10 * 0x310 + *plVar1);
  plVar1 = (longlong *)*param_2;
  if (((plVar1 == (longlong *)0x0) || (*(byte *)((longlong)plVar1 + 0xc) < 2)) ||
     (*(char *)(*(longlong *)(*plVar1 + 0x2c0) + 0xd + (longlong)(int)plVar1[1] * 0x10) == '\0')) {
    plVar1 = (longlong *)param_2[1];
    uVar7 = 0;
    if ((plVar1 != (longlong *)0x0) && (uVar7 = 0, 1 < *(byte *)((longlong)plVar1 + 0xc))) {
      uVar7 = *(undefined1 *)
               (*(longlong *)(*plVar1 + 0x2c0) + 0xd + (longlong)(int)plVar1[1] * 0x10);
    }
  }
  else {
    uVar7 = 1;
  }
  *(undefined1 *)(*(longlong *)(param_1 + 0x108) + 0x10 + lVar10 * 0x58) = uVar7;
  return *(undefined8 *)
          (*(longlong *)(param_1 + 0x118) + (longlong)(*(int *)(param_1 + 0x120) + -1) * 8);
}



// FUNCTION 1408c9ebf FUN_1408c9ebf body=41 status=ok
// SIG undefined FUN_1408c9ebf(void)

void FUN_1408c9ebf(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1408c9ee8(param_1);
    param_1 = param_1 + 0x310;
  }
  return;
}



// FUNCTION 1408c9ee8 FUN_1408c9ee8 body=506 status=ok
// SIG undefined FUN_1408c9ee8(void)

longlong FUN_1408c9ee8(longlong param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  
  lVar3 = 0x50;
  do {
    puVar1 = (undefined8 *)(param_1 + -0x50 + lVar3);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar2 = (undefined4 *)(param_1 + -0x40 + lVar3);
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0x3ff00000;
    puVar1 = (undefined8 *)(param_1 + -0x30 + lVar3);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(param_1 + -0x20 + lVar3);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(param_1 + -0x10 + lVar3);
    *puVar1 = 0x3ff0000000000000;
    puVar1[1] = 0x3ff0000000000000;
    *(undefined8 *)(param_1 + lVar3) = 0x3ff0000000000000;
    ((undefined8 *)(param_1 + lVar3))[1] = 0;
    lVar3 = lVar3 + 0x60;
  } while (lVar3 != 0x110);
  *(undefined8 *)(param_1 + 0xc0) = 0x3ff0000000000000;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0x3ff0000000000000;
  *(undefined1 *)(param_1 + 0xf8) = 1;
  *(undefined1 *)(param_1 + 0xf9) = 0;
  *(undefined1 *)(param_1 + 0xfa) = 0;
  *(undefined1 *)(param_1 + 0xfb) = 1;
  *(undefined1 **)(param_1 + 0xfc) = &DAT_200000002;
  *(undefined4 *)(param_1 + 0x104) = 2;
  *(undefined8 *)(param_1 + 0x108) = 0x47efffffe0000000;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined4 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0x47efffffe0000000;
  *(undefined8 *)(param_1 + 0x128) = 0x47efffffe0000000;
  *(undefined8 *)(param_1 + 0x130) = 0x47efffffe0000000;
  *(undefined1 *)(param_1 + 0x138) = 0;
  *(undefined1 *)(param_1 + 0x139) = 0;
  *(undefined1 *)(param_1 + 0x13a) = 0;
  *(undefined8 *)(param_1 + 0x13c) = 0;
  *(undefined4 *)(param_1 + 0x1e0) = 0;
  memset((void *)(param_1 + 0x148),0,0x96);
  *(undefined8 *)(param_1 + 0x1e8) = 0;
  *(undefined8 *)(param_1 + 0x1f0) = 0;
  *(undefined8 *)(param_1 + 0x1f8) = 0;
  *(undefined8 *)(param_1 + 0x200) = 0;
  *(undefined8 *)(param_1 + 0x208) = 0;
  *(undefined8 *)(param_1 + 0x210) = 0;
  *(undefined8 *)(param_1 + 0x218) = 0x47efffffe0000000;
  *(undefined8 *)(param_1 + 0x220) = 0x47efffffe0000000;
  *(undefined8 *)(param_1 + 0x228) = 0x47efffffe0000000;
  *(undefined8 *)(param_1 + 0x230) = 0;
  *(undefined8 *)(param_1 + 0x238) = 0;
  *(undefined8 *)(param_1 + 0x240) = 0;
  *(undefined8 *)(param_1 + 0x248) = 0x3ff0000000000000;
  *(undefined4 *)(param_1 + 0x270) = 0;
  *(undefined8 *)(param_1 + 0x250) = 0;
  *(undefined8 *)(param_1 + 600) = 0;
  *(undefined8 *)(param_1 + 0x25e) = 0;
  *(undefined8 *)(param_1 + 0x266) = 0;
  *(undefined8 *)(param_1 + 0x278) = 0;
  *(undefined8 *)(param_1 + 0x280) = 0;
  *(undefined8 *)(param_1 + 0x288) = 0;
  *(undefined8 *)(param_1 + 0x290) = 0;
  *(undefined8 *)(param_1 + 0x298) = 0;
  *(undefined8 *)(param_1 + 0x2a0) = 0;
  *(undefined8 *)(param_1 + 0x2a8) = 0x47efffffe0000000;
  *(undefined8 *)(param_1 + 0x2b0) = 0x47efffffe0000000;
  *(undefined8 *)(param_1 + 0x2b8) = 0x47efffffe0000000;
  *(undefined8 *)(param_1 + 0x2c0) = 0x47efffffe0000000;
  *(undefined8 *)(param_1 + 0x2c8) = 0x47efffffe0000000;
  *(undefined8 *)(param_1 + 0x2d0) = 0x47efffffe0000000;
  *(undefined4 *)(param_1 + 0x2d8) = 0;
  *(undefined8 *)(param_1 + 0x2e0) = 0x47efffffe0000000;
  *(undefined8 *)(param_1 + 0x2e8) = 0x47efffffe0000000;
  *(undefined8 *)(param_1 + 0x2f0) = 0x47efffffe0000000;
  *(undefined8 *)(param_1 + 0x2f8) = 0x47efffffe0000000;
  *(undefined8 *)(param_1 + 0x300) = 0;
  *(undefined8 *)(param_1 + 0x308) = 0;
  return param_1;
}



// FUNCTION 1408ca0e2 FUN_1408ca0e2 body=269 status=ok
// SIG undefined FUN_1408ca0e2(void)

void FUN_1408ca0e2(longlong param_1,int param_2)

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



// FUNCTION 1408ca1f0 FUN_1408ca1f0 body=353 status=ok
// SIG undefined FUN_1408ca1f0(void)

void FUN_1408ca1f0(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1408ca277;
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
LAB_1408ca277:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 1408ca352 FUN_1408ca352 body=369 status=ok
// SIG undefined FUN_1408ca352(void)

void FUN_1408ca352(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1408ca3d9;
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
LAB_1408ca3d9:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x58)) {
    uVar7 = uVar5 / 0x58 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x58,8);
  return;
}



// FUNCTION 1408ca4d0 FUN_1408ca4d0 body=396 status=ok
// SIG undefined FUN_1408ca4d0(void)

void FUN_1408ca4d0(longlong *param_1,longlong *param_2)

{
  int iVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  longlong *plVar5;
  undefined1 auStack_58 [36];
  undefined1 local_34 [4];
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = param_2;
  if (param_2 != (longlong *)0x0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c(param_2);
  }
  if ((param_2 != (longlong *)0x0) && ((DAT_14c950c29 & 1) != 0)) {
    FUN_1456cec3c(param_2);
  }
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar4 = ((uint)((ulonglong)param_2 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_2 >> 4)) *
            -0x7a143595;
    uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    bVar2 = DAT_14c950c29;
    for (iVar1 = *(int *)((longlong)plVar5 +
                         (ulonglong)((int)param_1[9] - 1U & (uVar4 >> 0x10 ^ uVar4)) * 4);
        iVar1 != -1; iVar1 = *(int *)(*param_1 + 8 + (longlong)iVar1 * 0x10)) {
      if ((param_2 != (longlong *)0x0) && ((bVar2 & 1) != 0)) {
        FUN_1456cec3c(param_2);
        bVar2 = DAT_14c950c29;
      }
      plVar5 = *(longlong **)(*param_1 + (longlong)iVar1 * 0x10);
      if (((bVar2 & 1) != 0) && (plVar5 != (longlong *)0x0)) {
        FUN_1456cec3c(plVar5);
        bVar2 = DAT_14c950c29;
      }
      if ((param_2 != (longlong *)0x0) && ((bVar2 & 1) != 0)) {
        FUN_1456cec3c(param_2);
        bVar2 = DAT_14c950c29;
      }
      if (plVar5 == param_2) {
        cVar3 = (**(code **)(*param_2 + 0x2e0))(param_2);
        if (cVar3 == '\0') {
          FUN_1456bc98a(param_1 + 10,local_34,&local_30,0);
        }
        break;
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1408ca65e FUN_1408ca65e body=124 status=ok
// SIG undefined FUN_1408ca65e(void)

void FUN_1408ca65e(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  uint uVar10;
  longlong lVar11;
  
  (**(code **)(*param_2 + 0x78))(param_2);
  (**(code **)(*param_1 + 0x78))(param_1);
  uVar10 = (**(code **)(*param_2 + 0x60))(param_2);
  (**(code **)*param_1)(param_1,uVar10);
  if (0 < (int)uVar10) {
    lVar11 = 0;
    do {
      lVar3 = param_2[2];
      lVar4 = param_1[2];
      uVar5 = *(undefined8 *)(lVar3 + lVar11);
      uVar6 = ((undefined8 *)(lVar3 + lVar11))[1];
      puVar1 = (undefined8 *)(lVar3 + 0x10 + lVar11);
      uVar7 = *puVar1;
      uVar8 = puVar1[1];
      puVar1 = (undefined8 *)(lVar3 + 0x20 + lVar11);
      uVar9 = puVar1[1];
      puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar11);
      *puVar2 = *puVar1;
      puVar2[1] = uVar9;
      puVar1 = (undefined8 *)(lVar4 + 0x10 + lVar11);
      *puVar1 = uVar7;
      puVar1[1] = uVar8;
      *(undefined8 *)(lVar4 + lVar11) = uVar5;
      ((undefined8 *)(lVar4 + lVar11))[1] = uVar6;
      lVar11 = lVar11 + 0x30;
    } while ((ulonglong)uVar10 * 0x30 != lVar11);
  }
  return;
}



// FUNCTION 1408ca6e4 FUN_1408ca6e4 body=103 status=ok
// SIG undefined FUN_1408ca6e4(void)

ulonglong FUN_1408ca6e4(longlong param_1)

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
LAB_1408ca72e:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_1408ca72e;
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



// FUNCTION 1408ca758 FUN_1408ca758 body=422 status=ok
// SIG undefined FUN_1408ca758(void)

void FUN_1408ca758(longlong param_1,longlong param_2)

{
  uint uVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  bool bVar8;
  undefined1 auStack_a8 [32];
  uint local_88;
  int local_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined1 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(longlong *)(param_1 + 0x5d0) == 0) goto LAB_1408ca883;
  lVar4 = *(longlong *)(param_2 + 0xb0);
  if (lVar4 == 0) {
    lVar4 = FUN_1448abda6(param_2);
  }
  if (*(int *)(param_1 + 0xc) == 0) {
LAB_1408ca8b4:
    lVar5 = 0;
  }
  else {
    uVar1 = *(uint *)(param_1 + 8);
    lVar5 = 0;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      plVar6 = (longlong *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((plVar6 == (longlong *)0x0) ||
         (((int)plVar6[2] != *(int *)(param_1 + 0xc) || ((*(uint *)(plVar6 + 1) & 0x10200000) != 0))
         )) goto LAB_1408ca8b4;
      lVar5 = *plVar6;
    }
  }
  if (lVar4 == lVar5) {
    FUN_140b03ca2(param_2,&local_58);
    local_80 = local_58;
    uStack_7c = uStack_54;
    uStack_78 = uStack_50;
    uStack_74 = uStack_4c;
    local_70 = local_40;
    uStack_6c = uStack_3c;
    uStack_68 = uStack_38;
    uStack_64 = uStack_34;
    local_60 = 1;
    uVar2 = *(undefined8 *)(param_1 + 0x5d0);
    local_84 = 0;
    if (param_2 == 0) {
      local_88 = 0;
      iVar3 = 0;
    }
    else {
      local_88 = *(uint *)(param_2 + 0xc);
      if ((int)local_88 < DAT_14c9647dc) {
        lVar4 = (ulonglong)((local_88 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_88 >> 0x10) * 8);
      }
      else {
        lVar4 = 0;
      }
      iVar3 = *(int *)(lVar4 + 0x10);
      if (*(int *)(lVar4 + 0x10) == 0) {
        LOCK();
        iVar3 = DAT_14c964868 + 1;
        UNLOCK();
        iVar7 = DAT_14c964868 + 1;
        bVar8 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar3;
        if (bVar8) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar7);
        }
        LOCK();
        iVar3 = *(int *)(lVar4 + 0x10);
        bVar8 = iVar3 == 0;
        if (bVar8) {
          *(int *)(lVar4 + 0x10) = iVar7;
          iVar3 = 0;
        }
        UNLOCK();
        if (bVar8) {
          iVar3 = iVar7;
        }
      }
    }
    local_84 = iVar3;
    FUN_143804792(uVar2,&local_88,&local_80,0);
  }
LAB_1408ca883:
  if ((local_20 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1408ca900 FUN_1408ca900 body=431 status=ok
// SIG undefined FUN_1408ca900(void)

void FUN_1408ca900(longlong param_1,longlong param_2)

{
  uint uVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  bool bVar8;
  undefined1 auStack_a8 [32];
  uint local_88;
  int local_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined1 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(longlong *)(param_1 + 0x5d0) == 0) goto LAB_1408caa24;
  lVar6 = *(longlong *)(param_2 + 0xb0);
  if (lVar6 == 0) {
    lVar6 = FUN_1448abda6(param_2);
  }
  if (*(int *)(param_1 + 0xc) == 0) {
LAB_1408caa55:
    lVar4 = 0;
  }
  else {
    uVar1 = *(uint *)(param_1 + 8);
    lVar4 = 0;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      plVar5 = (longlong *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((plVar5 == (longlong *)0x0) ||
         (((int)plVar5[2] != *(int *)(param_1 + 0xc) || ((*(uint *)(plVar5 + 1) & 0x10200000) != 0))
         )) goto LAB_1408caa55;
      lVar4 = *plVar5;
    }
  }
  if (lVar6 == lVar4) {
    FUN_140b03ca2(param_2,&local_58);
    local_80 = local_58;
    uStack_7c = uStack_54;
    uStack_78 = uStack_50;
    uStack_74 = uStack_4c;
    local_70 = local_40;
    uStack_6c = uStack_3c;
    uStack_68 = uStack_38;
    uStack_64 = uStack_34;
    local_60 = 1;
    uVar2 = *(undefined8 *)(param_1 + 0x5d0);
    local_84 = 0;
    if (param_2 == 0) {
      local_88 = 0;
      iVar3 = 0;
    }
    else {
      local_88 = *(uint *)(param_2 + 0xc);
      if ((int)local_88 < DAT_14c9647dc) {
        lVar6 = (ulonglong)((local_88 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_88 >> 0x10) * 8);
      }
      else {
        lVar6 = 0;
      }
      iVar3 = *(int *)(lVar6 + 0x10);
      if (*(int *)(lVar6 + 0x10) == 0) {
        LOCK();
        iVar3 = DAT_14c964868 + 1;
        UNLOCK();
        iVar7 = DAT_14c964868 + 1;
        bVar8 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar3;
        if (bVar8) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar7);
        }
        LOCK();
        iVar3 = *(int *)(lVar6 + 0x10);
        bVar8 = iVar3 == 0;
        if (bVar8) {
          *(int *)(lVar6 + 0x10) = iVar7;
          iVar3 = 0;
        }
        UNLOCK();
        if (bVar8) {
          iVar3 = iVar7;
        }
      }
    }
    local_84 = iVar3;
    FUN_1408caab0(uVar2,&local_88,&local_80);
  }
LAB_1408caa24:
  if ((local_20 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1408caab0 FUN_1408caab0 body=139 status=ok
// SIG undefined FUN_1408caab0(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_1408caab0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  bool bVar4;
  undefined1 auStack_68 [24];
  undefined8 auStack_50 [5];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar2 = FUN_1405e5186(param_1,param_3,auStack_50 + 1);
  cVar1 = FUN_1408cab3c(param_1,param_2);
  if (0 < (int)uVar2 && cVar1 == '\0') {
    uVar3 = 1;
    do {
      cVar1 = FUN_1408caab0(auStack_50[uVar3],param_2,param_3);
      bVar4 = uVar3 < uVar2;
      uVar3 = uVar3 + 1;
    } while (bVar4 && cVar1 == '\0');
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1408cab3c FUN_1408cab3c body=207 status=ok
// SIG undefined FUN_1408cab3c(void)

ulonglong FUN_1408cab3c(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  bool bVar8;
  
  uVar7 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar7 < 1) {
LAB_1408cabf2:
    uVar7 = 0;
  }
  else {
    cVar1 = FUN_1408cac0c(*param_1 + 0x28);
    if (cVar1 == '\0') {
      lVar6 = 0x58;
      uVar4 = 0;
      do {
        if (uVar7 - 1 == uVar4) goto LAB_1408cabf2;
        cVar1 = FUN_1408cac0c(*param_1 + lVar6,param_2);
        lVar6 = lVar6 + 0x30;
        uVar4 = uVar4 + 1;
      } while (cVar1 == '\0');
      bVar8 = uVar4 < uVar7;
    }
    else {
      bVar8 = true;
      uVar4 = 0;
    }
    uVar7 = CONCAT71((int7)((ulonglong)param_2 >> 8),bVar8);
    iVar2 = (int)param_1[1];
    iVar3 = ~(uint)uVar4 + iVar2;
    if (iVar3 != 0) {
      iVar5 = 1;
      if (iVar3 < 1) {
        iVar5 = iVar3;
      }
      memmove((void *)((uVar4 & 0xffffffff) * 0x30 + *param_1),
              (void *)((longlong)(iVar2 - iVar5) * 0x30 + *param_1),(longlong)iVar5 * 0x30);
      iVar2 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar2 + -1;
  }
  return uVar7 & 0xffffffff;
}



// FUNCTION 1408cac0c FUN_1408cac0c body=163 status=ok
// SIG undefined FUN_1408cac0c(void)

bool FUN_1408cac0c(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  bool bVar5;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = *param_2;
  bVar5 = true;
  if ((uVar1 != uVar3) || (uVar2 != param_2[1])) {
    if ((uVar2 == 0) ||
       (((((int)uVar1 < 0 || (DAT_14c9647dc <= (int)uVar1)) ||
         (lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar4 == 0)) ||
        ((*(uint *)(lVar4 + 0x10) != uVar2 || ((*(uint *)(lVar4 + 8) & 0x10200000) != 0)))))) {
      if (((param_2[1] != 0) && (-1 < (int)uVar3)) &&
         (((int)uVar3 < DAT_14c9647dc &&
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



// FUNCTION 1408cacb0 FUN_1408cacb0 body=103 status=ok
// SIG undefined FUN_1408cacb0(void)

ulonglong FUN_1408cacb0(longlong param_1)

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
LAB_1408cacfa:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_1408cacfa;
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



// FUNCTION 1408cad18 FUN_1408cad18 body=609 status=ok
// SIG undefined FUN_1408cad18(void)

void FUN_1408cad18(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  undefined1 auStack_d8 [32];
  ulonglong local_b8;
  undefined4 local_b0;
  undefined1 local_ac [4];
  ulonglong *local_a8;
  undefined4 *local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_2 != 0) {
    local_78 = 0;
    local_70 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_6c = 0xffffffff00000080;
    local_64 = 0;
    local_58 = 0;
    local_50 = 0;
    local_b0 = 0;
    local_a8 = (ulonglong *)0x14b9cf3b2;
    local_a0 = (undefined4 *)CONCAT35(local_a0._5_3_,0xe);
    uVar1 = FUN_14001a6c0(&local_a8,1);
    local_b8 = (ulonglong)uVar1;
    local_a8 = &local_b8;
    local_a0 = &local_b0;
    FUN_1408cb006(&local_98,local_ac,&local_a8);
    local_a8 = (ulonglong *)0x14b9cf3c1;
    local_a0 = (undefined4 *)CONCAT35(local_a0._5_3_,0x10);
    uVar1 = FUN_14001a6c0(&local_a8,1);
    local_b8 = (ulonglong)uVar1;
    local_a8 = &local_b8;
    local_a0 = (undefined4 *)(param_2 + 0xc);
    FUN_1408cb452(&local_98,local_ac,&local_a8,0);
    local_a8 = (ulonglong *)0x14b9cf3d2;
    local_a0 = (undefined4 *)CONCAT35(local_a0._5_3_,0xf);
    uVar1 = FUN_14001a6c0(&local_a8,1);
    local_b8 = (ulonglong)uVar1;
    local_a8 = &local_b8;
    local_a0 = (undefined4 *)(param_2 + 0x10);
    FUN_1408cb452(&local_98,local_ac,&local_a8,0);
    if ((*(uint *)(param_2 + 8) & 0x10) == 0) {
      if ((*(uint *)(param_2 + 8) & 0x20) == 0) {
        local_b0 = 0;
      }
      else {
        local_b0 = 0x40000000;
      }
    }
    else {
      local_b0 = 0x3f800000;
    }
    local_a8 = (ulonglong *)0x14b9cf3e2;
    local_a0 = (undefined4 *)CONCAT35(local_a0._5_3_,0xb);
    uVar1 = FUN_14001a6c0(&local_a8,1);
    local_b8 = (ulonglong)uVar1;
    local_a8 = &local_b8;
    local_a0 = &local_b0;
    FUN_1408cb006(&local_98,local_ac,&local_a8);
    local_a8 = (ulonglong *)0x14a3a2361;
    local_a0 = (undefined4 *)CONCAT35(local_a0._5_3_,6);
    uVar1 = FUN_14001a6c0(&local_a8,1);
    local_a8 = (ulonglong *)(ulonglong)uVar1;
    FUN_1408caf7a(param_1,&local_a8,&local_98,1);
    local_50 = 0;
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    FUN_14064e7da(&local_98);
  }
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1408caf7a FUN_1408caf7a body=140 status=ok
// SIG undefined FUN_1408caf7a(void)

void FUN_1408caf7a(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (*(int *)(param_1 + 0x34) != 0) {
    uVar1 = *(uint *)(param_1 + 0x30);
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      if ((lVar3 != 0) &&
         (((*(int *)(lVar3 + 0x10) == *(int *)(param_1 + 0x34) &&
           ((*(uint *)(lVar3 + 8) & 0x10200000) == 0)) && ((*(byte *)(param_1 + 0x8c) & 0x80) != 0))
         )) {
        uVar2 = FUN_14479d2ce();
        FUN_140e4d8e8(uVar2,param_2,param_3,param_4);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1408cb006 FUN_1408cb006 body=410 status=ok
// SIG undefined FUN_1408cb006(void)

int * FUN_1408cb006(longlong *param_1,int *param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined1 auStack_68 [40];
  int local_40 [2];
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1408cb62c(param_1,local_40);
  puVar1 = (undefined4 *)param_3[1];
  lVar2 = *(longlong *)*param_3;
  *local_38 = lVar2;
  *(undefined4 *)(local_38 + 1) = *puVar1;
  *(undefined4 *)((longlong)local_38 + 0xc) = 0xffffffff;
  uVar5 = (uint)((ulonglong)lVar2 >> 0x10);
  uVar7 = (uint)lVar2 & 0xffff;
  uVar5 = ((uint)lVar2 << 0x10 | uVar7) + (int)((ulonglong)lVar2 >> 0x20) +
          (uVar5 << 0x13 | uVar5 & 0xffff) + (uVar7 >> 4);
  uVar7 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if ((uVar7 != 0) && (uVar7 != 1)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar6 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & uVar5) * 4);
    if (iVar6 != -1) {
      do {
        plVar3 = (longlong *)(*param_1 + (longlong)iVar6 * 0x14);
        if (*plVar3 == lVar2) {
          lVar2 = *local_38;
          *(int *)(plVar3 + 1) = (int)local_38[1];
          *plVar3 = lVar2;
          FUN_14064cf78(param_1,local_40[0],1);
          goto LAB_1408cb0f0;
        }
        iVar6 = *(int *)((longlong)plVar3 + 0xc);
      } while (iVar6 != -1);
    }
  }
  iVar8 = 1;
  if (3 < uVar7) {
    uVar4 = (ulonglong)(uVar7 & 0xfffffffe) + 0xf;
    lVar2 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    iVar8 = 1 << ((byte)lVar2 & 0x1f);
  }
  iVar6 = local_40[0];
  if (((int)uVar7 < 1) || (iVar8 <= (int)param_1[9])) {
    uVar5 = (int)param_1[9] - 1U & uVar5;
    *(uint *)(local_38 + 2) = uVar5;
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    *(undefined4 *)((longlong)local_38 + 0xc) =
         *(undefined4 *)
          ((longlong)plVar3 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar5) * 4);
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    *(int *)((longlong)plVar3 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar5) * 4) =
         local_40[0];
  }
  else {
    *(int *)(param_1 + 9) = iVar8;
    FUN_1408cb1a2(param_1);
  }
LAB_1408cb0f0:
  *param_2 = iVar6;
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1408cb1a2 FUN_1408cb1a2 body=688 status=ok
// SIG undefined FUN_1408cb1a2(void)

void FUN_1408cb1a2(longlong *param_1)

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
    if ((int)uVar10 < 1) goto LAB_1408cb208;
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
LAB_1408cb208:
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
      uVar2 = *(undefined8 *)(lVar9 + lVar15 * 0x14);
      uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
      uVar17 = (uint)uVar2 & 0xffff;
      uVar8 = (longlong)
              (int)(((uint)uVar2 << 0x10 | uVar17) + (int)((ulonglong)uVar2 >> 0x20) +
                    (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar17 >> 4)) &
              (longlong)(int)param_1[9] - 1U;
      iVar7 = (int)uVar8;
      *(int *)(lVar9 + 0x10 + lVar15 * 0x14) = iVar7;
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = plVar1;
      }
      *(undefined4 *)(lVar9 + 0xc + lVar15 * 0x14) =
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



// FUNCTION 1408cb452 FUN_1408cb452 body=473 status=ok
// SIG undefined FUN_1408cb452(void)

int * FUN_1408cb452(longlong *param_1,int *param_2,undefined8 *param_3,char *param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  uint uVar3;
  char cVar4;
  longlong *plVar5;
  ulonglong uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined1 auStack_78 [40];
  int local_50 [2];
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1408cb62c(param_1,local_50);
  puVar1 = (undefined4 *)param_3[1];
  lVar2 = *(longlong *)*param_3;
  *local_48 = lVar2;
  *(undefined4 *)(local_48 + 1) = *puVar1;
  *(undefined4 *)((longlong)local_48 + 0xc) = 0xffffffff;
  uVar9 = (uint)((ulonglong)lVar2 >> 0x10);
  uVar3 = (uint)lVar2 & 0xffff;
  uVar9 = ((uint)lVar2 << 0x10 | uVar3) + (int)((ulonglong)lVar2 >> 0x20) +
          (uVar9 << 0x13 | uVar9 & 0xffff) + (uVar3 >> 4);
  cVar4 = '\0';
  iVar8 = local_50[0];
  if (((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) &&
     ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar7 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & uVar9) * 4);
    if (iVar7 == -1) {
      cVar4 = '\0';
    }
    else {
      do {
        iVar8 = iVar7;
        plVar5 = (longlong *)(*param_1 + (longlong)iVar8 * 0x14);
        if (*plVar5 == lVar2) {
          lVar2 = *local_48;
          *(int *)(plVar5 + 1) = (int)local_48[1];
          *plVar5 = lVar2;
          FUN_14064cf78(param_1,local_50[0],1);
          cVar4 = '\x01';
          break;
        }
        cVar4 = '\0';
        iVar8 = local_50[0];
        iVar7 = *(int *)((longlong)plVar5 + 0xc);
      } while (*(int *)((longlong)plVar5 + 0xc) != -1);
    }
  }
  if (param_4 != (char *)0x0) {
    *param_4 = cVar4;
  }
  if (cVar4 == '\0') {
    uVar3 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar3) {
      uVar6 = (ulonglong)(uVar3 & 0xfffffffe) + 0xf;
      lVar2 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar2 & 0x1f);
    }
    if (((int)uVar3 < 1) || (iVar7 <= (int)param_1[9])) {
      uVar9 = (int)param_1[9] - 1U & uVar9;
      *(uint *)(local_48 + 2) = uVar9;
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = param_1 + 7;
      }
      *(undefined4 *)((longlong)local_48 + 0xc) =
           *(undefined4 *)
            ((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar9) * 4);
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = param_1 + 7;
      }
      *(int *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar9) * 4) =
           iVar8;
    }
    else {
      *(int *)(param_1 + 9) = iVar7;
      FUN_1408cb1a2(param_1);
    }
  }
  *param_2 = iVar8;
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1408cb62c FUN_1408cb62c body=492 status=ok
// SIG undefined FUN_1408cb62c(void)

int * FUN_1408cb62c(longlong *param_1,int *param_2)

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



// FUNCTION 1408cb818 FUN_1408cb818 body=419 status=ok
// SIG undefined FUN_1408cb818(void)

void FUN_1408cb818(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  undefined1 auStack_d8 [32];
  ulonglong local_b8;
  float local_b0;
  undefined1 local_ac [4];
  ulonglong *local_a8;
  float *local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_2 != 0) {
    local_78 = 0;
    local_70 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_6c = 0xffffffff00000080;
    local_64 = 0;
    local_58 = 0;
    local_50 = 0;
    local_b0 = 1.0;
    local_a8 = (ulonglong *)0x14b9cf3b2;
    local_a0 = (float *)CONCAT35(local_a0._5_3_,0xe);
    uVar1 = FUN_14001a6c0(&local_a8,1);
    local_b8 = (ulonglong)uVar1;
    local_a8 = &local_b8;
    local_a0 = &local_b0;
    FUN_1408cb006(&local_98,local_ac,&local_a8);
    local_b0 = (float)*(byte *)(param_2 + 8);
    local_a8 = (ulonglong *)0x14b9cf3e2;
    local_a0 = (float *)CONCAT35(local_a0._5_3_,0xb);
    uVar1 = FUN_14001a6c0(&local_a8,1);
    local_b8 = (ulonglong)uVar1;
    local_a8 = &local_b8;
    local_a0 = &local_b0;
    FUN_1408cb006(&local_98,local_ac,&local_a8);
    local_a8 = (ulonglong *)0x14b9cf3ee;
    local_a0 = (float *)CONCAT35(local_a0._5_3_,5);
    uVar1 = FUN_14001a6c0(&local_a8,1);
    local_a8 = (ulonglong *)(ulonglong)uVar1;
    FUN_1408caf7a(param_1,&local_a8,&local_98,1);
    local_50 = 0;
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    FUN_14064e7da(&local_98);
  }
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1408cb9bc FUN_1408cb9bc body=294 status=ok
// SIG undefined FUN_1408cb9bc(void)

void FUN_1408cb9bc(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  char cVar3;
  longlong *plVar4;
  
  plVar4 = (longlong *)FUN_1408cbae2();
  lVar2 = *plVar4;
  AcquireSRWLockShared((PSRWLOCK)(lVar2 + 0xb0));
  if (*(int *)(param_1 + 0x364) != *(int *)(lVar2 + 0x14)) {
    *(undefined4 *)(param_1 + 0x360) = *(undefined4 *)(lVar2 + 0x10);
    *(undefined4 *)(param_1 + 0x364) = *(undefined4 *)(lVar2 + 0x14);
  }
  ReleaseSRWLockShared((PSRWLOCK)(lVar2 + 0xb0));
  plVar4 = (longlong *)FUN_1408cbae2(param_1);
  lVar2 = *plVar4;
  AcquireSRWLockShared((PSRWLOCK)(lVar2 + 0xb0));
  if (*(int *)(param_1 + 0x36c) != *(int *)(lVar2 + 0xc)) {
    *(undefined4 *)(param_1 + 0x368) = *(undefined4 *)(lVar2 + 8);
    *(undefined4 *)(param_1 + 0x36c) = *(undefined4 *)(lVar2 + 0xc);
  }
  ReleaseSRWLockShared((PSRWLOCK)(lVar2 + 0xb0));
  uVar1 = *(uint *)(param_1 + 0x8c);
  *(uint *)(param_1 + 0x8c) = uVar1 & 0xfffdffff | (uint)(*(int *)(param_1 + 0x360) == 5) << 0x11;
  if (-1 < (char)uVar1) {
    return;
  }
  lVar2 = *(longlong *)(param_1 + 0x288);
  if (lVar2 == 0) {
    return;
  }
  cVar3 = FUN_14431d02c(lVar2);
  if (cVar3 == '\0') {
    cVar3 = FUN_148ee9164(lVar2);
    if (cVar3 == '\0') goto LAB_1408cba9e;
  }
  else {
    FUN_148ee6316();
  }
  FUN_148ee8f4e(lVar2);
LAB_1408cba9e:
  FUN_140714c1e(lVar2 + 0x2c0,*(undefined4 *)(param_1 + 0x208));
  *(uint *)(param_1 + 0x8c) =
       *(uint *)(param_1 + 0x8c) & 0xfffdffff | (uint)(*(int *)(param_1 + 0x360) == 5) << 0x11;
  return;
}



// FUNCTION 1408cbae2 FUN_1408cbae2 body=123 status=ok
// SIG undefined FUN_1408cbae2(void)

longlong FUN_1408cbae2(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1448d5e3c(&local_28,param_1 + 0x208);
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
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return local_28 + 0x200;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1408cbb5e FUN_1408cbb5e body=144 status=ok
// SIG undefined FUN_1408cbb5e(void)

undefined8 FUN_1408cbb5e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_4 != 0) {
    lVar2 = 0;
    do {
      lVar1 = param_2 + 0x18 + lVar2;
      *(undefined2 *)(lVar1 + -8) = *(undefined2 *)(param_3 + lVar2 + 0x10);
      *(undefined8 *)(lVar1 + -0x10) = *(undefined8 *)(param_3 + lVar2 + 8);
      FUN_1404306dc();
      FUN_1408cbbee(param_2 + lVar2 + 0x28,param_3 + lVar2 + 0x28);
      FUN_140472cde(param_2 + lVar2 + 0x38,param_3 + lVar2 + 0x38);
      *(undefined4 *)(param_2 + lVar2 + 0x48) = *(undefined4 *)(param_3 + lVar2 + 0x48);
      lVar2 = lVar2 + 0x50;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1408cbbee FUN_1408cbbee body=79 status=ok
// SIG undefined FUN_1408cbbee(void)

undefined8 * FUN_1408cbbee(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1474d3064(param_1,iVar1);
      FUN_1474d30c6(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1408cbc4c FUN_1408cbc4c body=101 status=ok
// SIG undefined FUN_1408cbc4c(void)

undefined8 * FUN_1408cbc4c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ac47960;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  FUN_140820740(param_1 + 7);
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1408cbcb2 FUN_1408cbcb2 body=95 status=ok
// SIG undefined FUN_1408cbcb2(void)

void FUN_1408cbcb2(longlong *param_1,int param_2)

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
  FUN_1408cbd12(param_1,param_2,1);
  return;
}



// FUNCTION 1408cbd12 FUN_1408cbd12 body=136 status=ok
// SIG undefined FUN_1408cbd12(void)

void FUN_1408cbd12(longlong *param_1,int param_2,int param_3)

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



// FUNCTION 1408cbd9a FUN_1408cbd9a body=2020 status=ok
// SIG undefined FUN_1408cbd9a(void)

void FUN_1408cbd9a(longlong *param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  int iVar3;
  void *_Src;
  undefined8 uVar4;
  int iVar5;
  longlong *plVar6;
  char cVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  ulonglong uVar11;
  int iVar12;
  uint uVar13;
  undefined2 *puVar14;
  int iVar15;
  ulonglong uVar16;
  longlong *plVar17;
  longlong lVar18;
  undefined1 auStack_f8 [47];
  undefined1 local_c9;
  longlong local_c8;
  longlong local_c0;
  longlong local_b8;
  ulonglong local_b0;
  undefined1 local_a8 [8];
  undefined8 local_a0 [2];
  ulonglong local_90;
  undefined2 *local_88;
  ulonglong uStack_80;
  longlong local_78;
  undefined8 uStack_70;
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_c9 = (undefined1)param_1[0x73];
  *(undefined1 *)(param_1 + 0x73) = 1;
  local_c8 = CONCAT44(local_c8._4_4_,(int)param_1[3]);
  local_78 = 0;
  uStack_70 = 0;
  FUN_14575436e(&local_78,0x20);
  FUN_1457538dc(&local_68,0x10,1,0);
  uVar16 = local_58 & 0xffffffff;
  if ((-1 < (int)(uint)local_58) && ((int)(uint)local_58 < (int)local_60)) {
    do {
      uVar16 = *(ulonglong *)(local_68 + (uVar16 & 0xffffffff) * 8);
      lVar10 = FUN_1408cc5f4();
      if (((*(int *)(*(longlong *)(uVar16 + 0x10) + 0x38) < *(int *)(lVar10 + 0x38)) ||
          (*(longlong *)
            (*(longlong *)(*(longlong *)(uVar16 + 0x10) + 0x30) +
            (longlong)*(int *)(lVar10 + 0x38) * 8) != lVar10 + 0x30)) &&
         ((lVar10 = FUN_1408cc5ba(), lVar10 == 0 ||
          ((*(int *)(uVar16 + 0x38) < *(int *)(lVar10 + 0x38) ||
           (*(longlong *)(*(longlong *)(uVar16 + 0x30) + (longlong)*(int *)(lVar10 + 0x38) * 8) !=
            lVar10 + 0x30)))))) {
        uVar11 = FUN_1408cc580();
        if ((uVar16 == uVar11) ||
           (((lVar10 = FUN_1408cc580(), uVar11 = uStack_70, lVar10 == 0 ||
             (*(int *)(uVar16 + 0x38) < *(int *)(lVar10 + 0x38))) ||
            (*(longlong *)(*(longlong *)(uVar16 + 0x30) + (longlong)*(int *)(lVar10 + 0x38) * 8) !=
             lVar10 + 0x30)))) {
          local_90 = uVar16;
          if (uVar16 != 0 && DAT_14c950c29 == 1) {
            FUN_1456cec3c(uVar16);
          }
          if ((uVar16 != 0) && ((DAT_14c950c29 & 1) != 0)) {
            FUN_1456cec3c(uVar16);
          }
          uVar8 = ((uint)(uVar16 >> 0x14) & 0xffff ^ (uint)(uVar16 >> 4)) * -0x7a143595;
          uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
          iVar9 = FUN_1408cc6da(param_1 + 0x69,uVar8 >> 0x10 ^ uVar8,&local_90);
          if (iVar9 != -1) {
            FUN_1408ccbd2(&local_88,uVar16);
            lVar10 = *param_1;
            goto LAB_1408cbfa3;
          }
        }
        else {
          lVar10 = (longlong)(int)uStack_70;
          uVar8 = (int)uStack_70 + 1;
          uStack_70 = CONCAT44(uStack_70._4_4_,uVar8);
          if (uStack_70._4_4_ < uVar8) {
            FUN_1408ccdda(&local_78,uVar11 & 0xffffffff);
          }
          *(ulonglong *)(local_78 + lVar10 * 8) = uVar16;
        }
      }
      else {
        cVar7 = FUN_14093db12(param_1,uVar16);
        if (cVar7 != '\0') {
          FUN_1408ccbd2(&local_88,uVar16);
          lVar10 = *param_1;
LAB_1408cbfa3:
          (**(code **)(lVar10 + 0x80))(param_1,&local_88,0);
        }
      }
      uVar16 = (longlong)(int)(uint)local_58;
      do {
        uVar11 = uVar16;
        uVar16 = uVar11 + 1;
        local_58 = CONCAT44(local_58._4_4_,(int)uVar16);
        if ((longlong)(int)local_60 <= (longlong)uVar16) break;
      } while (*(longlong *)(local_68 + uVar16 * 8) == 0);
    } while ((-2 < (longlong)uVar11) && ((int)uVar16 < (int)local_60));
  }
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  FUN_1457543ce(&local_68);
  uVar16 = local_58 & 0xffffffff;
  if ((-1 < (int)(uint)local_58) && ((int)(uint)local_58 < (int)local_60)) {
    do {
      lVar10 = *(longlong *)(local_68 + (uVar16 & 0xffffffff) * 8);
      cVar7 = FUN_1408cca6c(lVar10);
      if (cVar7 != '\0') {
        uVar8 = *(uint *)(lVar10 + 0x38);
        if ((int)uVar8 < 2) {
          local_a0[0] = *(undefined8 *)(lVar10 + 0x18);
          FUN_1400021e4(local_a0,&local_88);
        }
        else {
          local_88 = (undefined2 *)0x0;
          _Src = *(void **)(lVar10 + 0x30);
          uStack_80 = CONCAT44(uStack_80._4_4_,uVar8);
          FUN_1446dd670(&local_88,(ulonglong)uVar8,0);
          memcpy(local_88,_Src,(ulonglong)uVar8 * 2);
        }
        puVar14 = &DAT_149dfb77a;
        if ((int)uStack_80 != 0) {
          puVar14 = local_88;
        }
        FUN_1446f470e(local_a8,puVar14,1);
        FUN_14575417c(local_a0,local_a8,lVar10);
        (**(code **)(*param_1 + 0x80))(param_1,local_a0,0);
        if (local_88 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
      }
      uVar16 = (longlong)(int)(uint)local_58;
      do {
        uVar11 = uVar16;
        uVar16 = uVar11 + 1;
        local_58 = CONCAT44(local_58._4_4_,(int)uVar16);
        if ((longlong)(int)local_60 <= (longlong)uVar16) break;
      } while (*(longlong *)(local_68 + uVar16 * 8) == 0);
    } while ((-2 < (longlong)uVar11) && ((int)uVar16 < (int)local_60));
  }
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  FUN_1457a9e34(&local_68,0x10,1,0);
  uVar16 = local_58 & 0xffffffff;
  if ((-1 < (int)(uint)local_58) && ((int)(uint)local_58 < (int)local_60)) {
    do {
      uVar4 = *(undefined8 *)(local_68 + (uVar16 & 0xffffffff) * 8);
      cVar7 = FUN_1408cc7aa(param_1,uVar4);
      if (cVar7 != '\0') {
        FUN_1457542d6(&local_88,uVar4,0);
        (**(code **)(*param_1 + 0x80))(param_1,&local_88,0);
        FUN_1457542d6(&local_88,uVar4,1);
        (**(code **)(*param_1 + 0x80))(param_1,&local_88,0);
      }
      uVar16 = (longlong)(int)(uint)local_58;
      do {
        uVar11 = uVar16;
        uVar16 = uVar11 + 1;
        local_58 = CONCAT44(local_58._4_4_,(int)uVar16);
        if ((longlong)(int)local_60 <= (longlong)uVar16) break;
      } while (*(longlong *)(local_68 + uVar16 * 8) == 0);
    } while ((-2 < (longlong)uVar11) && ((int)uVar16 < (int)local_60));
  }
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  lVar10 = (longlong)(int)uStack_70;
  if (lVar10 != 0) {
    lVar18 = 0;
    do {
      (**(code **)(*param_1 + 0x28))();
      lVar18 = lVar18 + 8;
    } while (lVar10 * 8 != lVar18);
  }
  if ((int)local_c8 != (int)param_1[3]) {
    local_88 = (undefined2 *)0x0;
    uVar8 = *(uint *)(param_1 + 0x13);
    uStack_80 = (ulonglong)uVar8;
    if ((longlong)(int)uVar8 != 0) {
      FUN_1401c3474(&local_88);
    }
    memset(local_88,0,(longlong)(int)uVar8);
    plVar1 = param_1 + 0x4d;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    local_60 = plVar1;
    if ((int)param_1[0x50] == 0) {
      uVar16 = 1;
      local_58._0_4_ = 0xffffffff;
      local_58._4_4_ = 0;
      local_68._0_4_ = 0;
      uVar11 = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      uVar16 = local_68 >> 0x20;
      uVar11 = (ulonglong)*(uint *)(param_1 + 0x50);
    }
    plVar6 = local_60;
    iVar9 = (int)local_68;
    uVar8 = (uint)local_58;
    iVar12 = local_58._4_4_;
    iVar15 = local_50;
    if (local_58._4_4_ != (int)uVar11 || local_60 != plVar1) {
      do {
        lVar10 = (longlong)*(int *)(param_1[0x4b] + 0x10 + (longlong)iVar12 * 0x20);
        if (lVar10 != 0) {
          local_b8 = *(longlong *)(param_1[0x4b] + 8 + (longlong)iVar12 * 0x20);
          local_c8 = 0;
          local_b0 = uVar11;
          do {
            iVar12 = *(int *)(local_b8 + local_c8);
            if (*(char *)((longlong)local_88 + (longlong)iVar12) == '\0') {
              local_c0 = (longlong)iVar12;
              FUN_1490f82fa((ulonglong)(uint)(iVar12 % 0x59) * 0xb8 +
                            *(longlong *)(param_1[0x11] + (longlong)(iVar12 / 0x59) * 8));
              *(undefined1 *)((longlong)local_88 + local_c0) = 1;
            }
            local_c8 = local_c8 + 4;
            uVar11 = local_b0;
          } while (lVar10 * 4 != local_c8);
        }
        uVar8 = uVar8 & ~(uint)uVar16;
        plVar17 = (longlong *)plVar6[2];
        if ((longlong *)plVar6[2] == (longlong *)0x0) {
          plVar17 = plVar6;
        }
        iVar3 = (int)plVar6[3];
        lVar10 = (longlong)iVar9;
        uVar13 = *(uint *)((longlong)plVar17 + lVar10 * 4) & uVar8;
        if (uVar13 == 0) {
          iVar12 = iVar3 + 0x1e;
          if (-1 < iVar3 + -1) {
            iVar12 = iVar3 + -1;
          }
          iVar12 = iVar12 >> 5;
          iVar15 = iVar15 + 0x20;
          iVar5 = iVar12;
          if (iVar12 < iVar9) {
            iVar5 = iVar9;
          }
          if (iVar9 < iVar12) {
            lVar18 = 0;
            do {
              uVar13 = *(uint *)((longlong)plVar17 + lVar18 * 4 + lVar10 * 4 + 4);
              if (uVar13 != 0) {
                iVar9 = iVar9 + (int)lVar18 + 1;
                uVar8 = 0xffffffff;
                goto LAB_1408cc3a3;
              }
              iVar15 = iVar15 + 0x20;
              lVar18 = lVar18 + 1;
            } while (iVar5 - lVar10 != lVar18);
            uVar8 = 0xffffffff;
            iVar9 = iVar5;
          }
          iVar9 = iVar9 + 1;
          iVar12 = iVar3;
        }
        else {
LAB_1408cc3a3:
          uVar16 = (ulonglong)(-uVar13 & uVar13);
          uVar2 = uVar16 * 2 + 1;
          lVar10 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
            }
          }
          iVar12 = (iVar15 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
          if (iVar3 <= iVar12) {
            iVar12 = iVar3;
          }
        }
      } while (iVar12 != (int)uVar11 || plVar6 != plVar1);
    }
    if (local_88 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  *(undefined1 *)((longlong)param_1 + 0x399) = 1;
  if (local_78 != 0) {
    FUN_1400020a8();
  }
  *(undefined1 *)(param_1 + 0x73) = local_c9;
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1408cc580 FUN_1408cc580 body=57 status=ok
// SIG undefined FUN_1408cc580(void)

void FUN_1408cc580(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc00810 == 0) {
    uVar1 = FUN_1408ed7fc();
    DAT_14cc00810 = FUN_140002ddd(FUN_146680850,uVar1,L"RigVMDispatchFactory");
  }
  return;
}



// FUNCTION 1408cc5ba FUN_1408cc5ba body=57 status=ok
// SIG undefined FUN_1408cc5ba(void)

void FUN_1408cc5ba(void)

{
  undefined8 uVar1;
  
  if (DAT_14cc00940 == 0) {
    uVar1 = FUN_1408ed7fc();
    DAT_14cc00940 = FUN_140002ddd(FUN_141905ec2,uVar1,L"RigVMExecuteContext");
  }
  return;
}



// FUNCTION 1408cc5f4 FUN_1408cc5f4 body=228 status=ok
// SIG undefined FUN_1408cc5f4(void)

longlong FUN_1408cc5f4(void)

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
  if (DAT_14c927898 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1417139d8;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_146271292;
    local_38 = &LAB_146856a51;
    local_40 = &LAB_140ee2f45;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x108;
    FUN_14081cfa3(L"/Script/CoreUObject",L"UserDefinedStruct",&DAT_14c927898,&DAT_146856a50);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c927898;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1408cc6da FUN_1408cc6da body=207 status=ok
// SIG undefined FUN_1408cc6da(void)

int FUN_1408cc6da(longlong *param_1,uint param_2,longlong *param_3)

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
        iVar1 != -1; iVar1 = *(int *)(*param_1 + 8 + (longlong)iVar1 * 0x10)) {
      lVar2 = *param_3;
      if ((lVar2 != 0 & bVar4) == 1) {
        FUN_1456cec3c(lVar2);
        bVar4 = DAT_14c950c29;
      }
      lVar3 = *(longlong *)(*param_1 + (longlong)iVar1 * 0x10);
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



// FUNCTION 1408cc7aa FUN_1408cc7aa body=502 status=ok
// SIG undefined FUN_1408cc7aa(void)

bool FUN_1408cc7aa(longlong param_1,ulonglong param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  bool bVar7;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  longlong local_50;
  int local_48;
  longlong local_40;
  int local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((param_2 != 0) && (uVar4 = param_2, (*(uint *)(param_2 + 0xd4) & 0x1000080) == 0x80)) {
LAB_1408cc7ea:
    uVar5 = uVar4;
    uVar4 = uVar5;
    if (*(ulonglong *)(uVar5 + 0x20) != 0) goto code_r0x0001408cc7f9;
    goto LAB_1408cc807;
  }
LAB_1408cc924:
  bVar7 = false;
LAB_1408cc903:
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar7;
code_r0x0001408cc7f9:
  uVar4 = *(ulonglong *)(uVar5 + 0x20);
  if ((*(uint *)(uVar5 + 8) >> 0x1c & 1) == 0) goto LAB_1408cc7ea;
  uVar4 = FUN_142840154(uVar5);
LAB_1408cc807:
  if (uVar4 == 0) {
    uVar4 = *(ulonglong *)(uVar5 + 0x20);
    goto LAB_1408cc7ea;
  }
  local_30 = *(undefined8 *)(uVar4 + 0x18);
  FUN_1400021e4();
  local_40 = local_50;
  local_38 = local_48 + -1;
  if (local_48 == 0) {
    local_38 = 0;
  }
  cVar1 = FUN_144a427d4();
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  if (cVar1 == '\0') {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14cc01770) && (FUN_144b3d300(&DAT_14cc01770), DAT_14cc01770 == -1)) {
      FUN_1446f470e(&DAT_14cc01768,L"VerseClass",1);
      _Init_thread_footer(&DAT_14cc01770);
    }
    if (DAT_14cc01768 != 0) {
      for (lVar6 = *(longlong *)(param_2 + 0x10); lVar6 != 0; lVar6 = *(longlong *)(lVar6 + 0x40)) {
        if (DAT_14cc01768 == *(longlong *)(lVar6 + 0x18)) goto LAB_1408cc924;
      }
    }
    local_58 = param_2;
    if (DAT_14c950c29 == 1) {
      FUN_1456cec3c(param_2);
    }
    if ((DAT_14c950c29 & 1) != 0) {
      FUN_1456cec3c(param_2);
    }
    uVar2 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    iVar3 = FUN_1408cc9a2(param_1 + 0x2f8,uVar2 >> 0x10 ^ uVar2,&local_58);
    bVar7 = iVar3 != -1;
    goto LAB_1408cc903;
  }
  goto LAB_1408cc924;
}



// FUNCTION 1408cc9a2 FUN_1408cc9a2 body=202 status=ok
// SIG undefined FUN_1408cc9a2(void)

int FUN_1408cc9a2(longlong *param_1,uint param_2,longlong *param_3)

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
        iVar1 != -1; iVar1 = *(int *)(*param_1 + 8 + (longlong)iVar1 * 0x10)) {
      lVar2 = *param_3;
      if ((lVar2 != 0 & bVar4) == 1) {
        FUN_1456cec3c(lVar2);
        bVar4 = DAT_14c950c29;
      }
      lVar3 = *(longlong *)(*param_1 + (longlong)iVar1 * 0x10);
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



// FUNCTION 1408cca6c FUN_1408cca6c body=350 status=ok
// SIG undefined FUN_1408cca6c(void)

uint FUN_1408cca6c(longlong param_1)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  longlong local_48;
  int local_40;
  longlong local_38;
  int local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar3 = param_1;
  if (param_1 != 0) {
LAB_1408cca8e:
    lVar4 = lVar3;
    lVar3 = lVar4;
    if (*(longlong *)(lVar4 + 0x20) != 0) goto code_r0x0001408cca9d;
    goto LAB_1408ccaab;
  }
LAB_1408ccbb1:
  uVar2 = 0;
LAB_1408ccb53:
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
code_r0x0001408cca9d:
  lVar3 = *(longlong *)(lVar4 + 0x20);
  if ((*(uint *)(lVar4 + 8) >> 0x1c & 1) == 0) goto LAB_1408cca8e;
  lVar3 = FUN_142840154(lVar4);
LAB_1408ccaab:
  if (lVar3 == 0) {
    lVar3 = *(longlong *)(lVar4 + 0x20);
    goto LAB_1408cca8e;
  }
  local_28 = *(undefined8 *)(lVar3 + 0x18);
  FUN_1400021e4();
  local_38 = local_48;
  local_30 = local_40 + -1;
  if (local_40 == 0) {
    local_30 = 0;
  }
  cVar1 = FUN_144a427d4();
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if (cVar1 == '\0') {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14cc01750) && (FUN_144b3d300(&DAT_14cc01750), DAT_14cc01750 == -1)) {
      FUN_1446f470e(&DAT_14cc01748,L"VerseEnum",1);
      _Init_thread_footer(&DAT_14cc01750);
    }
    if (DAT_14cc01748 != 0) {
      for (lVar3 = *(longlong *)(param_1 + 0x10); lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 0x40)) {
        if (DAT_14cc01748 == *(longlong *)(lVar3 + 0x18)) goto LAB_1408ccbb1;
      }
    }
    if ((*(uint *)(param_1 + 8) & 0x18000) == 0) {
      uVar2 = *(uint *)(param_1 + 8) & 0xffffff01;
      goto LAB_1408ccb53;
    }
  }
  goto LAB_1408ccbb1;
}



// FUNCTION 1408ccbd2 FUN_1408ccbd2 body=323 status=ok
// SIG undefined FUN_1408ccbd2(void)

longlong FUN_1408ccbd2(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined2 *puVar2;
  undefined1 auStack_78 [32];
  undefined2 *local_58;
  int local_50;
  undefined1 local_48 [16];
  undefined2 *local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_2 != (longlong *)0x0) {
    lVar1 = FUN_1408cc5f4();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(param_2[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(param_2[2] + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      (**(code **)(*param_2 + 0x370))(param_2,local_48);
      local_38 = (undefined2 *)0x0;
      uStack_30 = 0;
      FUN_1407c869a(local_48,&local_38,0);
      puVar2 = local_38;
      if ((int)uStack_30 == 0) {
        puVar2 = &DAT_149dfb77a;
      }
      FUN_140002266(&local_58,L"FUserDefinedStruct_%s",puVar2);
      if (local_38 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      goto LAB_1408ccc1f;
    }
  }
  (**(code **)(*param_2 + 0x378))(param_2,&local_58,0);
LAB_1408ccc1f:
  puVar2 = local_58;
  if (local_50 == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  FUN_1446f470e(param_1,puVar2,1);
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  *(longlong **)(param_1 + 8) = param_2;
  if ((param_2 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1408ccd16 FUN_1408ccd16 body=196 status=ok
// SIG undefined FUN_1408ccd16(void)

longlong * FUN_1408ccd16(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if ((longlong)*(int *)(param_1 + 0xc0) != 0) {
    plVar3 = *(longlong **)(param_1 + 0xb8);
    lVar2 = (longlong)*(int *)(param_1 + 0xc0) << 3;
    do {
      if ((longlong *)((longlong *)*plVar3)[1] == param_2) {
        if (plVar3 != (longlong *)0x0) {
          return (longlong *)*plVar3;
        }
        break;
      }
      plVar3 = plVar3 + 1;
      lVar2 = lVar2 + -8;
    } while (lVar2 != 0);
  }
  plVar3 = (longlong *)
           FUN_14001cc68((longlong)
                         (int)(-*(int *)((longlong)param_2 + 0x5c) &
                              ((int)param_2[0xb] + *(int *)((longlong)param_2 + 0x5c)) - 1U),0);
  (**(code **)(*param_2 + 0x2e8))(param_2,plVar3,1);
  plVar3[1] = (longlong)param_2;
  iVar1 = *(int *)(param_1 + 0xc0);
  *(uint *)(param_1 + 0xc0) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0xc4) < iVar1 + 1U) {
    FUN_145754250(param_1 + 0xb8,iVar1);
  }
  *(longlong **)(*(longlong *)(param_1 + 0xb8) + (longlong)iVar1 * 8) = plVar3;
  (**(code **)(*plVar3 + 0x20))(plVar3,param_1);
  return plVar3;
}



// FUNCTION 1408ccdda FUN_1408ccdda body=353 status=ok
// SIG undefined FUN_1408ccdda(void)

void FUN_1408ccdda(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1408cce5f;
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
LAB_1408cce5f:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 1408ccf3c FUN_1408ccf3c body=2504 status=ok
// SIG undefined FUN_1408ccf3c(void)

undefined8 * FUN_1408ccf3c(undefined8 *param_1,longlong *param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined *puVar5;
  longlong lVar6;
  undefined8 uVar7;
  wchar_t *pwVar8;
  code *pcVar9;
  undefined1 auStack_108 [32];
  wchar_t *local_e8;
  undefined4 local_e0;
  undefined8 local_d8;
  wchar_t *local_d0;
  wchar_t *local_c8;
  code *local_c0;
  undefined1 *local_b8;
  code **local_b0;
  code *local_a8;
  code *local_a0;
  longlong local_90;
  longlong local_88 [2];
  code *local_78;
  undefined8 uStack_70;
  code *local_60;
  undefined1 local_58 [8];
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (param_2 == (longlong *)0x0) {
LAB_1408ccff0:
    *param_1 = 0;
    param_1[1] = 0;
    goto LAB_1408ccff6;
  }
  if (DAT_14c949118 == 0) {
    local_60 = FUN_140631fbe;
    lVar4 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
    DAT_14c949118 = lVar4;
    FUN_1446f470e(local_58,L"Class",1);
    local_b8 = &LAB_146891e90;
    local_c0 = (code *)&LAB_146273097;
    local_d0 = L"Engine";
    local_c8 = (wchar_t *)CONCAT44(local_c8._4_4_,199);
    local_d8 = 0x20;
    local_e0 = 0x10000000;
    local_e8._0_4_ = 8;
    local_b0 = &local_60;
    FUN_14574b4b2(lVar4);
    DAT_14c949118 = lVar4;
    if (DAT_14c951858 == 0) {
      local_b0 = &local_78;
      local_78 = FUN_1449e2820;
      local_a0 = FUN_14081d0ea;
      local_a8 = FUN_14081d0ea;
      local_b8 = &LAB_1468c5283;
      local_c0 = FUN_142809da0;
      local_c8 = L"Engine";
      local_d0 = (wchar_t *)0x400000000;
      local_d8 = CONCAT44(local_d8._4_4_,0x10000000);
      local_e0 = 8;
      local_e8._0_4_ = 0x50;
      FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
    }
    lVar3 = DAT_14c951858;
    lVar4 = DAT_14c949118;
    if (DAT_14c948f88 == 0) {
      local_50 = (code *)&DAT_1427db2a2;
      lVar6 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
      DAT_14c948f88 = lVar6;
      FUN_1446f470e(local_88,L"Struct",1);
      local_b0 = &local_50;
      local_b8 = &LAB_146891313;
      local_c0 = FUN_146272f63;
      local_d0 = L"Engine";
      local_c8 = (wchar_t *)CONCAT44(local_c8._4_4_,199);
      local_d8 = 8;
      local_e0 = 0x10000020;
      local_e8._0_4_ = 8;
      FUN_14574b4b2(lVar6);
      local_90 = DAT_14c927740;
      DAT_14c948f88 = lVar6;
      if (DAT_14c927740 == 0) {
        local_b0 = &local_78;
        local_78 = FUN_1449e2820;
        local_a0 = FUN_14081d0ea;
        local_a8 = FUN_14081d0ea;
        local_b8 = &LAB_146856450;
        local_c0 = FUN_1427b121c;
        local_c8 = L"Engine";
        local_d0 = (wchar_t *)0x0;
        local_d8 = CONCAT44(local_d8._4_4_,0x10000021);
        local_e0 = 8;
        local_e8._0_4_ = 0x28;
        FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456);
      }
      lVar6 = DAT_14c948f88;
      local_90 = DAT_14c927740;
      uVar7 = FUN_1400163b0();
      local_e8 = L"Struct";
      FUN_14574b446(uVar7,lVar6,local_90,L"/Script/CoreUObject");
    }
    local_e8 = L"Class";
    FUN_14574b446(DAT_14c948f88,lVar4,lVar3,L"/Script/CoreUObject");
  }
  lVar4 = param_2[2];
  iVar1 = *(int *)(lVar4 + 0x38);
  if ((iVar1 < *(int *)(DAT_14c949118 + 0x38)) ||
     (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(DAT_14c949118 + 0x38) * 8) !=
      DAT_14c949118 + 0x30)) {
    if (DAT_14c948fa0 == 0) {
      local_60 = (code *)&DAT_1427db2a2;
      lVar4 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
      DAT_14c948fa0 = lVar4;
      FUN_1446f470e(local_58,L"ScriptStruct",1);
      local_b8 = &LAB_1468915ce;
      local_c0 = FUN_1427dc742;
      local_d0 = L"Engine";
      local_c8 = (wchar_t *)CONCAT44(local_c8._4_4_,199);
      local_d8 = 0x10;
      local_e0 = 0x10000020;
      local_e8._0_4_ = 8;
      local_b0 = &local_60;
      FUN_14574b4b2(lVar4);
      DAT_14c948fa0 = lVar4;
      if (DAT_14c927740 == 0) {
        local_b0 = &local_78;
        local_78 = FUN_1449e2820;
        local_a0 = FUN_14081d0ea;
        local_a8 = FUN_14081d0ea;
        local_b8 = &LAB_146856450;
        local_c0 = FUN_1427b121c;
        local_c8 = L"Engine";
        local_d0 = (wchar_t *)0x0;
        local_d8 = CONCAT44(local_d8._4_4_,0x10000021);
        local_e0 = 8;
        local_e8._0_4_ = 0x28;
        FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456);
      }
      lVar3 = DAT_14c948fa0;
      lVar4 = DAT_14c927740;
      if (DAT_14c948f88 == 0) {
        local_50 = (code *)&DAT_1427db2a2;
        lVar6 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
        DAT_14c948f88 = lVar6;
        FUN_1446f470e(local_88,L"Struct",1);
        local_b8 = &LAB_146891313;
        local_c0 = FUN_146272f63;
        local_d0 = L"Engine";
        local_c8 = (wchar_t *)CONCAT44(local_c8._4_4_,199);
        local_d8 = 8;
        local_e0 = 0x10000020;
        local_e8._0_4_ = 8;
        local_b0 = &local_50;
        FUN_14574b4b2(lVar6);
        DAT_14c948f88 = lVar6;
        if (DAT_14c927740 == 0) {
          local_b0 = &local_78;
          local_78 = FUN_1449e2820;
          local_a0 = FUN_14081d0ea;
          local_a8 = FUN_14081d0ea;
          local_b8 = &LAB_146856450;
          local_c0 = FUN_1427b121c;
          local_c8 = L"Engine";
          local_d0 = (wchar_t *)0x0;
          local_d8 = CONCAT44(local_d8._4_4_,0x10000021);
          local_e0 = 8;
          local_e8._0_4_ = 0x28;
          FUN_14081cfa3(L"/Script/CoreUObject",L"Object",&DAT_14c927740,&DAT_146856456);
        }
        lVar2 = DAT_14c948f88;
        lVar6 = DAT_14c927740;
        uVar7 = FUN_1400163b0();
        local_e8 = L"Struct";
        FUN_14574b446(uVar7,lVar2,lVar6,L"/Script/CoreUObject");
      }
      local_e8 = L"ScriptStruct";
      FUN_14574b446(DAT_14c948f88,lVar3,lVar4,L"/Script/CoreUObject");
      lVar4 = param_2[2];
      iVar1 = *(int *)(lVar4 + 0x38);
    }
    if ((iVar1 < *(int *)(DAT_14c948fa0 + 0x38)) ||
       (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(DAT_14c948fa0 + 0x38) * 8) !=
        DAT_14c948fa0 + 0x30)) {
      lVar4 = FUN_140851d9a();
      if ((*(int *)(lVar4 + 0x38) <= *(int *)(param_2[2] + 0x38)) &&
         (*(longlong *)(*(longlong *)(param_2[2] + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
          lVar4 + 0x30)) {
        FUN_141906362(param_1,param_2);
        goto LAB_1408cd0b2;
      }
      goto LAB_1408ccff0;
    }
    lVar4 = FUN_1408cc5f4();
    if ((*(int *)(param_2[2] + 0x38) < *(int *)(lVar4 + 0x38)) ||
       (*(longlong *)(*(longlong *)(param_2[2] + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) !=
        lVar4 + 0x30)) {
      (**(code **)(*param_2 + 0x378))(param_2,param_1,0);
LAB_1408cd0b2:
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_108);
    }
    (**(code **)(*param_2 + 0x370))(param_2,local_88);
    local_78 = (code *)0x0;
    uStack_70 = 0;
    FUN_1407c869a(local_88,&local_78,0);
    pcVar9 = local_78;
    if ((int)uStack_70 == 0) {
      pcVar9 = (code *)&DAT_149dfb77a;
    }
    FUN_140002266(param_1,L"FUserDefinedStruct_%s",pcVar9);
  }
  else {
    if (param_3 == 0) {
      local_88[0] = param_2[3];
      FUN_1400021e4(local_88,&local_78);
      pcVar9 = local_78;
      if ((int)uStack_70 == 0) {
        pcVar9 = (code *)&DAT_149dfb77a;
      }
      puVar5 = (undefined *)(**(code **)(*param_2 + 0x308))(param_2);
      pwVar8 = L"TSubclassOf<%s%s>";
    }
    else {
      if (DAT_14c950d78 == 0) {
        local_b0 = &local_78;
        local_78 = FUN_1449e2820;
        local_a0 = FUN_14081d0ea;
        local_a8 = FUN_14081d0ea;
        local_b8 = &LAB_1468b50ee;
        local_c0 = FUN_1427f23a3;
        local_c8 = L"Engine";
        local_d0 = (wchar_t *)0x0;
        local_d8 = CONCAT44(local_d8._4_4_,0x10004001);
        local_e0 = 8;
        local_e8 = (wchar_t *)CONCAT44(local_e8._4_4_,0x28);
        FUN_14081cfa3(L"/Script/CoreUObject",L"Interface",&DAT_14c950d78,&DAT_1468b50f4);
        if (DAT_14c950d78 != 0) goto LAB_1408cd02c;
      }
      else {
LAB_1408cd02c:
        if ((*(int *)(DAT_14c950d78 + 0x38) <= (int)param_2[7]) &&
           (*(longlong *)(param_2[6] + (longlong)*(int *)(DAT_14c950d78 + 0x38) * 8) ==
            DAT_14c950d78 + 0x30)) {
          local_88[0] = param_2[3];
          FUN_1400021e4(local_88,&local_78);
          pcVar9 = local_78;
          if ((int)uStack_70 == 0) {
            pcVar9 = (code *)&DAT_149dfb77a;
          }
          pwVar8 = L"TScriptInterface<%s%s>";
          puVar5 = &DAT_149ebbbf2;
          goto LAB_1408cd147;
        }
      }
      local_88[0] = param_2[3];
      FUN_1400021e4(local_88,&local_78);
      pcVar9 = local_78;
      if ((int)uStack_70 == 0) {
        pcVar9 = (code *)&DAT_149dfb77a;
      }
      puVar5 = (undefined *)(**(code **)(*param_2 + 0x308))(param_2);
      pwVar8 = L"TObjectPtr<%s%s>";
    }
LAB_1408cd147:
    FUN_140002266(param_1,pwVar8,puVar5,pcVar9);
  }
  if (local_78 != (code *)0x0) {
    FUN_1400020a8();
  }
LAB_1408ccff6:
  if ((local_48 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1408cd906 FUN_1408cd906 body=149 status=ok
// SIG undefined FUN_1408cd906(void)

undefined8 FUN_1408cd906(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  
  uVar1 = FUN_1408cd99c();
  if ((((*(byte *)(param_1 + 0x180) & 4) == 0) && ((int)uVar1 == 0)) &&
     ((*(byte *)(param_1 + 0x360) & 1) != 0)) {
    lVar2 = FUN_14485cccc(param_2 + 0xb8);
    if (lVar2 != 0) {
      lVar3 = FUN_140d12354();
      if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8
           ) == lVar3 + 0x30)) {
        uVar1 = 1;
        goto LAB_1408cd92a;
      }
    }
    uVar1 = 0;
  }
LAB_1408cd92a:
  if (*(char *)(param_1 + 0x4c4) == '\x01') {
    *(byte *)(param_1 + 0x360) = *(byte *)(param_1 + 0x360) & 0xfe;
    *(undefined1 *)(param_1 + 0x4c4) = 0;
  }
  return uVar1;
}



// FUNCTION 1408cd99c FUN_1408cd99c body=197 status=ok
// SIG undefined FUN_1408cd99c(void)

undefined8
FUN_1408cd99c(longlong *param_1,longlong param_2,float param_3,undefined8 param_4,float *param_5)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (param_1[0x22] == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = *(longlong *)(param_1[0x22] + 0xa8);
  }
  cVar1 = (**(code **)(*param_1 + 0x580))(param_1);
  uVar2 = 2;
  if (((cVar1 != '\0') && (lVar3 != 0)) && ((*(uint *)(lVar3 + 8) >> 0x1e & 1) == 0)) {
    (**(code **)(*param_1 + 0x4c8))(param_1,param_2,param_3,param_4);
    if ((((*(uint *)(lVar3 + 8) >> 0x1e & 1) == 0) && (param_1[0x22] != 0)) &&
       (((*(byte *)((longlong)param_1 + 0x9e) & 0x10) != 0 && ((*(byte *)(param_2 + 0xad) & 2) == 0)
        ))) {
      *param_5 = (1.0 - *(float *)(param_2 + 4)) * param_3;
      uVar2 = 0;
    }
  }
  return uVar2;
}



// FUNCTION 1408cda62 FUN_1408cda62 body=92 status=ok
// SIG undefined FUN_1408cda62(void)

undefined8 * FUN_1408cda62(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  uVar2 = *param_2;
  *(int *)(param_1 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1408cdb42(param_1,iVar1,0);
    FUN_1408cdabe(*param_1,uVar2,iVar1);
  }
  uVar2 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar2;
  return param_1;
}



// FUNCTION 1408cdabe FUN_1408cdabe body=132 status=ok
// SIG undefined FUN_1408cdabe(void)

void FUN_1408cdabe(longlong param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  
  if (param_3 != 0) {
    puVar5 = (undefined8 *)(param_1 + 0x18);
    do {
      puVar5[-3] = *param_2;
      uVar2 = *(undefined4 *)((longlong)param_2 + 0xc);
      uVar3 = *(undefined4 *)(param_2 + 2);
      uVar4 = *(undefined4 *)((longlong)param_2 + 0x14);
      *(undefined4 *)(puVar5 + -2) = *(undefined4 *)(param_2 + 1);
      *(undefined4 *)((longlong)puVar5 + -0xc) = uVar2;
      *(undefined4 *)(puVar5 + -1) = uVar3;
      *(undefined4 *)((longlong)puVar5 + -4) = uVar4;
      *puVar5 = 0;
      iVar1 = *(int *)(param_2 + 4);
      _Src = (void *)param_2[3];
      *(int *)(puVar5 + 1) = iVar1;
      if ((longlong)iVar1 == 0) {
        *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
      }
      else {
        FUN_1446dd670(puVar5,iVar1,0);
        memcpy((void *)*puVar5,_Src,(longlong)iVar1 * 2);
      }
      param_2 = param_2 + 5;
      puVar5 = puVar5 + 5;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1408cdb42 FUN_1408cdb42 body=334 status=ok
// SIG undefined FUN_1408cdb42(void)

void FUN_1408cdb42(longlong param_1,int param_2,int param_3)

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
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1408cdbb4;
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
LAB_1408cdbb4:
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



// FUNCTION 1408cdc90 FUN_1408cdc90 body=21 status=ok
// SIG undefined FUN_1408cdc90(void)

undefined8 FUN_1408cdc90(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1408cdca6 FUN_1408cdca6 body=420 status=ok
// SIG undefined FUN_1408cdca6(void)

void FUN_1408cdca6(longlong param_1,char param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  longlong *local_e0;
  longlong *local_d0;
  undefined8 local_c8;
  longlong local_c0;
  uint local_b8;
  int iStack_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  longlong local_a0;
  uint local_98;
  int iStack_94;
  undefined4 local_90;
  undefined4 local_8c;
  longlong local_88 [2];
  undefined8 local_78 [6];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_a0 = param_1 + 0x38;
  local_a8 = 0x100000000;
  local_98 = 0xffffffff;
  iStack_94 = 0;
  local_90 = 0;
  if (*(int *)(param_1 + 0x50) != 0) {
    FUN_1449c0562(&local_a8);
  }
  local_b8 = local_98;
  iStack_b4 = iStack_94;
  local_b0 = local_90;
  local_ac = local_8c;
  local_c8 = local_a8;
  local_c0 = local_a0;
  local_d0 = (longlong *)(param_1 + 0x28);
  if (iStack_94 < *(int *)(local_a0 + 0x18)) {
    do {
      lVar1 = *local_d0;
      lVar3 = (longlong)iStack_b4 * 0x40;
      if (*(char *)(lVar1 + 0x10 + lVar3) == param_2) {
        local_88[0] = DAT_14cb985c0;
        local_78[0] = 0;
        if (DAT_14cb985c0 != 0) {
          puVar2 = DAT_14cb985d0;
          if (DAT_14cb985d0 == (undefined8 *)0x0) {
            puVar2 = &DAT_14cb985e0;
          }
          (**(code **)*puVar2)(puVar2,local_78);
        }
        puVar5 = &DAT_149dfb77a;
        if (*(int *)(lVar1 + 0x30 + lVar3) != 0) {
          puVar5 = *(undefined2 **)(lVar1 + 0x28 + lVar3);
        }
        puVar4 = &DAT_149dfb77a;
        if (*(int *)(lVar1 + 0x20 + lVar3) != 0) {
          puVar4 = *(undefined2 **)(lVar1 + 0x18 + lVar3);
        }
        local_e8 = param_3;
        local_e0 = local_88;
        FUN_143f596f6(param_1,0,puVar4,puVar5);
      }
      local_b8 = local_b8 & ~local_c8._4_4_;
      FUN_1449c0562(&local_c8);
    } while (iStack_b4 < *(int *)(local_c0 + 0x18));
  }
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}


