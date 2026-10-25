// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14048bf30 FUN_14048bf30 body=205 status=ok
// SIG undefined FUN_14048bf30(void)

longlong * FUN_14048bf30(longlong *param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if (param_1 == (longlong *)0x0) {
    return (longlong *)0x0;
  }
  uVar1 = FUN_14048bffe();
  plVar2 = (longlong *)(**(code **)(*param_1 + 0x288))(param_1,uVar1);
  if (plVar2 != (longlong *)0x0) {
    uVar1 = FUN_14048bffe();
    plVar3 = (longlong *)FUN_144718840(plVar2,uVar1);
    if ((plVar2 != plVar3) && (plVar3 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00014048bf85. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      plVar2 = (longlong *)(**(code **)(*plVar3 + 0x10))(plVar3);
      return plVar2;
    }
  }
  lVar4 = FUN_14098eaa0();
  if ((*(int *)(lVar4 + 0x38) <= *(int *)(param_1[2] + 0x38)) &&
     (*(longlong *)(*(longlong *)(param_1[2] + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
      lVar4 + 0x30)) {
    return param_1;
  }
  lVar4 = FUN_144a6c4d8();
  if ((*(int *)(param_1[2] + 0x38) < *(int *)(lVar4 + 0x38)) ||
     (*(longlong *)(*(longlong *)(param_1[2] + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) !=
      lVar4 + 0x30)) {
    uVar1 = FUN_144a6c4d8();
    param_1 = (longlong *)FUN_144a78ede(param_1,uVar1);
    if (param_1 == (longlong *)0x0) {
      return (longlong *)0x0;
    }
  }
  plVar2 = (longlong *)FUN_145717ec0(param_1);
  return plVar2;
}



// FUNCTION 14048bffe FUN_14048bffe body=228 status=ok
// SIG undefined FUN_14048bffe(void)

longlong FUN_14048bffe(void)

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
  if (DAT_14cb1b488 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_147e2d67b;
    local_40 = FUN_14641b6ce;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/GbxNav",L"AINodeOwner",&DAT_14cb1b488,&DAT_147e2d67a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb1b488;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14048c0e4 FUN_14048c0e4 body=265 status=ok
// SIG undefined FUN_14048c0e4(void)

undefined8 FUN_14048c0e4(longlong param_1)

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
    if (iVar1 == 2) goto LAB_14048c1e7;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_14048c1e7;
    }
    FUN_1400841de(param_1 + 0x18,&local_28);
  }
  else {
LAB_14048c1e7:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_14048c19e;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5 + (longlong)*(int *)(param_1 + 0x28));
      uVar6 = 1;
      goto LAB_14048c19e;
    }
  }
  uVar6 = 0;
LAB_14048c19e:
  if (local_28 != 0) {
    FUN_140113f3a(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14048c20a FUN_14048c20a body=162 status=ok
// SIG undefined FUN_14048c20a(void)

void FUN_14048c20a(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  longlong *plVar4;
  
  if ((*(longlong *)(param_1 + 0x840) != 0) &&
     ((*(longlong *)(param_1 + 0xf0) != 0 || (0 < *(int *)(param_1 + 0x100))))) {
    FUN_142a9d134();
  }
  if ((*(longlong *)(param_1 + 0x1a8) != 0) && ((*(byte *)(param_1 + 0x309) & 0x20) == 0)) {
    plVar4 = (longlong *)FUN_140489acc();
    (**(code **)(*plVar4 + 0x380))(plVar4,*(undefined8 *)(param_1 + 0x1a8));
  }
  bVar3 = *(byte *)(param_1 + 0x309);
  if ((bVar3 & 1) != 0) {
    if (*(longlong *)(param_1 + 0x1a8) != 0) {
      uVar1 = *(undefined8 *)(param_1 + 0x200);
      uVar2 = FUN_1405e677a(DAT_14cb0d2b0);
      FUN_14375e49a(uVar2,uVar1);
      bVar3 = *(byte *)(param_1 + 0x309);
    }
    *(byte *)(param_1 + 0x309) = bVar3 & 0xfe;
  }
  return;
}



// FUNCTION 14048c2ac FUN_14048c2ac body=342 status=ok
// SIG undefined FUN_14048c2ac(void)

void FUN_14048c2ac(longlong param_1)

{
  void *pvVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_58 [32];
  void *local_38;
  int local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(longlong *)(param_1 + 0xf0) != 0) &&
     ((*(uint *)(*(longlong *)(param_1 + 0xf0) + 8) >> 0x1e & 1) == 0)) {
    FUN_1402a420a();
  }
  local_38 = (void *)0x0;
  local_30 = *(int *)(param_1 + 0x100);
  lVar5 = (longlong)local_30;
  pvVar1 = *(void **)(param_1 + 0xf8);
  if (lVar5 == 0) {
    local_2c = 0;
  }
  else {
    FUN_1417e45f2(&local_38,local_30,0);
    memcpy(local_38,pvVar1,lVar5 << 3);
    pvVar1 = local_38;
    lVar5 = (longlong)local_30;
    if (lVar5 != 0) {
      lVar6 = 0;
      do {
        if ((*(longlong *)((longlong)pvVar1 + lVar6) != 0) &&
           ((*(uint *)(*(longlong *)((longlong)pvVar1 + lVar6) + 8) >> 0x1e & 1) == 0)) {
          FUN_1402a420a();
        }
        lVar6 = lVar6 + 8;
      } while (lVar5 * 8 != lVar6);
    }
  }
  FUN_143597cb2(param_1);
  if (*(longlong **)(param_1 + 0x830) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x830) + 0x338))();
  }
  if (DAT_14cad58f9 == '\x01') {
    DAT_14cad58f9 = '\0';
  }
  bVar3 = *(byte *)(param_1 + 0x309);
  if ((bVar3 & 1) != 0) {
    if (*(longlong *)(param_1 + 0x1a8) != 0) {
      uVar2 = *(undefined8 *)(param_1 + 0x200);
      uVar4 = FUN_1405e677a(DAT_14cb0d2b0);
      FUN_14375e49a(uVar4,uVar2);
      bVar3 = *(byte *)(param_1 + 0x309);
    }
    *(byte *)(param_1 + 0x309) = bVar3 & 0xfe;
  }
  if (local_38 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14048c404 FUN_14048c404 body=1482 status=ok
// SIG undefined FUN_14048c404(void)

void FUN_14048c404(longlong param_1)

{
  ulonglong uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  uint uVar15;
  int iVar16;
  ulonglong uVar17;
  undefined1 auStack_88 [32];
  ulonglong local_68;
  longlong local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  iVar16 = *(int *)(param_1 + 0x550);
  if (iVar16 == 0) {
    uVar14 = 1;
    uVar17 = 0;
    iVar6 = 0;
    iVar8 = 0;
  }
  else {
    puVar5 = *(uint **)(param_1 + 0x548);
    if (*(uint **)(param_1 + 0x548) == (uint *)0x0) {
      puVar5 = (uint *)(param_1 + 0x538);
    }
    uVar15 = *puVar5;
    if (uVar15 == 0) {
      iVar6 = iVar16 + 0x1e;
      if (-1 < iVar16 + -1) {
        iVar6 = iVar16 + -1;
      }
      uVar17 = 0;
      uVar14 = (ulonglong)(uint)(iVar6 >> 5);
      if (iVar6 >> 5 < 1) {
        uVar14 = uVar17;
      }
      iVar8 = 0;
      do {
        if (uVar14 == uVar17) goto LAB_14048c5fc;
        iVar8 = iVar8 + 0x20;
        uVar15 = puVar5[uVar17 + 1];
        uVar17 = uVar17 + 1;
      } while (uVar15 == 0);
    }
    else {
      uVar17 = 0;
      iVar8 = 0;
    }
    uVar14 = (ulonglong)(-uVar15 & uVar15);
    uVar1 = uVar14 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    iVar6 = (iVar8 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    if (iVar16 <= iVar6) {
      iVar6 = iVar16;
    }
  }
  if (iVar6 < iVar16) {
    uVar15 = 0xffffffff;
    do {
      lVar11 = *(longlong *)(param_1 + 0x528);
      iVar3 = *(int *)(lVar11 + 4 + (longlong)iVar6 * 0x20);
      if (((((iVar3 == 0) || (uVar2 = *(uint *)(lVar11 + (longlong)iVar6 * 0x20), (int)uVar2 < 0))
           || (DAT_14c9647dc <= (int)uVar2)) ||
          ((lVar11 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8), lVar11 == 0 ||
           (*(int *)(lVar11 + 0x10) != iVar3)))) || ((*(uint *)(lVar11 + 8) & 0x10200000) != 0)) {
        FUN_145717f28((longlong *)(param_1 + 0x528));
        iVar16 = *(int *)(param_1 + 0x550);
      }
      uVar15 = uVar15 & ~(uint)uVar14;
      puVar5 = *(uint **)(param_1 + 0x548);
      if (*(uint **)(param_1 + 0x548) == (uint *)0x0) {
        puVar5 = (uint *)(param_1 + 0x538);
      }
      iVar6 = (int)uVar17;
      lVar11 = (longlong)iVar6;
      uVar2 = puVar5[lVar11] & uVar15;
      if (uVar2 == 0) {
        iVar3 = iVar16 + 0x1e;
        if (-1 < iVar16 + -1) {
          iVar3 = iVar16 + -1;
        }
        iVar3 = iVar3 >> 5;
        iVar4 = iVar3;
        if (iVar3 < iVar6) {
          iVar4 = iVar6;
        }
        if (iVar3 <= iVar6) break;
        lVar12 = 0;
        while( true ) {
          iVar8 = iVar8 + 0x20;
          uVar2 = puVar5[lVar11 + lVar12 + 1];
          if (uVar2 != 0) break;
          lVar12 = lVar12 + 1;
          if (iVar4 - lVar11 == lVar12) goto LAB_14048c5fc;
        }
        uVar17 = (ulonglong)(iVar6 + (int)lVar12 + 1);
        uVar15 = 0xffffffff;
      }
      uVar14 = (ulonglong)(-uVar2 & uVar2);
      uVar1 = uVar14 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar6 = (iVar8 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    } while (iVar6 < iVar16);
  }
LAB_14048c5fc:
  local_60 = param_1 + 0x588;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  local_50 = 0;
  if (*(int *)(param_1 + 0x5a0) == 0) {
    uVar17 = 1;
    local_58._4_4_ = 0;
    uVar15 = 0xffffffff;
    iVar16 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    uVar17 = local_68 >> 0x20;
    uVar15 = (uint)local_58;
    iVar16 = (int)local_68;
  }
  lVar11 = local_60;
  iVar6 = *(int *)(local_60 + 0x18);
  if (local_58._4_4_ < iVar6) {
    iVar8 = local_50;
    iVar3 = local_58._4_4_;
    do {
      lVar12 = *(longlong *)(param_1 + 0x578);
      iVar4 = *(int *)(lVar12 + 0x1c + (longlong)iVar3 * 0x28);
      if (((iVar4 == 0) ||
          (uVar2 = *(uint *)(lVar12 + 0x18 + (longlong)iVar3 * 0x28), (int)uVar2 < 0)) ||
         ((DAT_14c9647dc <= (int)uVar2 ||
          (((lVar12 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8), lVar12 == 0 ||
            (*(int *)(lVar12 + 0x10) != iVar4)) || ((*(uint *)(lVar12 + 8) & 0x10200000) != 0))))))
      {
        FUN_14048c9d0((longlong *)(param_1 + 0x578));
        iVar6 = *(int *)(lVar11 + 0x18);
      }
      uVar15 = uVar15 & ~(uint)uVar17;
      lVar12 = *(longlong *)(lVar11 + 0x10);
      if (*(longlong *)(lVar11 + 0x10) == 0) {
        lVar12 = lVar11;
      }
      lVar13 = (longlong)iVar16;
      uVar2 = *(uint *)(lVar12 + lVar13 * 4) & uVar15;
      if (uVar2 == 0) {
        iVar3 = iVar6 + 0x1e;
        if (-1 < iVar6 + -1) {
          iVar3 = iVar6 + -1;
        }
        iVar3 = iVar3 >> 5;
        iVar4 = iVar3;
        if (iVar3 < iVar16) {
          iVar4 = iVar16;
        }
        if (iVar3 <= iVar16) break;
        lVar7 = 0;
        while( true ) {
          iVar8 = iVar8 + 0x20;
          uVar2 = *(uint *)(lVar12 + lVar13 * 4 + 4 + lVar7 * 4);
          if (uVar2 != 0) break;
          lVar7 = lVar7 + 1;
          if (iVar4 - lVar13 == lVar7) goto LAB_14048c79c;
        }
        iVar16 = iVar16 + (int)lVar7 + 1;
        uVar15 = 0xffffffff;
      }
      uVar17 = (ulonglong)(-uVar2 & uVar2);
      uVar14 = uVar17 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar14 != 0) {
        for (; uVar14 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iVar3 = (iVar8 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    } while (iVar3 < iVar6);
  }
LAB_14048c79c:
  iVar6 = DAT_14c9647dc;
  lVar11 = DAT_14c9647c8;
  iVar16 = *(int *)(param_1 + 0x698);
  if (iVar16 == 0) {
    uVar14 = 1;
    uVar17 = 0;
    iVar8 = 0;
    iVar3 = 0;
  }
  else {
    puVar5 = *(uint **)(param_1 + 0x690);
    if (*(uint **)(param_1 + 0x690) == (uint *)0x0) {
      puVar5 = (uint *)(param_1 + 0x680);
    }
    uVar15 = *puVar5;
    if (uVar15 == 0) {
      iVar8 = iVar16 + 0x1e;
      if (-1 < iVar16 + -1) {
        iVar8 = iVar16 + -1;
      }
      uVar17 = 0;
      uVar14 = (ulonglong)(uint)(iVar8 >> 5);
      if (iVar8 >> 5 < 1) {
        uVar14 = uVar17;
      }
      iVar3 = 0;
      do {
        if (uVar14 == uVar17) goto LAB_14048c968;
        iVar3 = iVar3 + 0x20;
        uVar15 = puVar5[uVar17 + 1];
        uVar17 = uVar17 + 1;
      } while (uVar15 == 0);
    }
    else {
      uVar17 = 0;
      iVar3 = 0;
    }
    uVar14 = (ulonglong)(-uVar15 & uVar15);
    uVar1 = uVar14 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iVar8 = (iVar3 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    if (iVar16 <= iVar8) {
      iVar8 = iVar16;
    }
  }
  if (iVar8 != iVar16) {
    uVar15 = 0xffffffff;
    iVar4 = iVar16;
    do {
      lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x670) + (longlong)iVar8 * 0x10);
      uVar1 = *(ulonglong *)(lVar12 + 0xd8);
      if ((((uVar1 >> 0x20 == 0) || (uVar2 = (uint)uVar1, (int)uVar2 < 0)) ||
          ((iVar6 <= (int)uVar2 ||
           ((lVar13 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                      *(longlong *)(lVar11 + (ulonglong)(uVar2 >> 0xd & 0x3fff8)), lVar13 == 0 ||
            (*(int *)(lVar13 + 0x10) != (int)(uVar1 >> 0x20))))))) ||
         ((*(uint *)(lVar13 + 8) & 0x10200000) != 0)) {
        *(undefined8 *)(lVar12 + 0x48) = 0;
        iVar4 = *(int *)(param_1 + 0x698);
      }
      uVar15 = uVar15 & ~(uint)uVar14;
      puVar5 = *(uint **)(param_1 + 0x690);
      if (*(uint **)(param_1 + 0x690) == (uint *)0x0) {
        puVar5 = (uint *)(param_1 + 0x680);
      }
      iVar8 = (int)uVar17;
      lVar12 = (longlong)iVar8;
      uVar2 = puVar5[lVar12] & uVar15;
      if (uVar2 == 0) {
        iVar9 = iVar4 + 0x1e;
        if (-1 < iVar4 + -1) {
          iVar9 = iVar4 + -1;
        }
        iVar9 = iVar9 >> 5;
        iVar3 = iVar3 + 0x20;
        iVar10 = iVar9;
        if (iVar9 < iVar8) {
          iVar10 = iVar8;
        }
        if (iVar8 < iVar9) {
          lVar13 = 0;
          do {
            uVar2 = puVar5[lVar12 + lVar13 + 1];
            if (uVar2 != 0) {
              uVar17 = (ulonglong)(iVar8 + (int)lVar13 + 1);
              uVar15 = 0xffffffff;
              goto LAB_14048c925;
            }
            iVar3 = iVar3 + 0x20;
            lVar13 = lVar13 + 1;
          } while (iVar10 - lVar12 != lVar13);
          uVar15 = 0xffffffff;
          lVar12 = (longlong)iVar10;
        }
        uVar17 = lVar12 + 1U & 0xffffffff;
        iVar8 = iVar4;
      }
      else {
LAB_14048c925:
        uVar14 = (ulonglong)(-uVar2 & uVar2);
        uVar1 = uVar14 * 2 + 1;
        lVar12 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        iVar8 = (iVar3 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
        if (iVar4 <= iVar8) {
          iVar8 = iVar4;
        }
      }
    } while (iVar8 != iVar16);
  }
LAB_14048c968:
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14048c9d0 FUN_14048c9d0 body=148 status=ok
// SIG undefined FUN_14048c9d0(void)

void FUN_14048c9d0(longlong *param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  int *piVar5;
  longlong lVar6;
  
  plVar4 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[8];
  }
  lVar2 = *param_1 + (longlong)param_2 * 0x28;
  lVar6 = (longlong)*(int *)(lVar2 + 0x24);
  iVar3 = *(int *)((longlong)plVar4 + lVar6 * 4);
  if (iVar3 == param_2) {
    piVar5 = (int *)((longlong)plVar4 + lVar6 * 4);
  }
  else {
    do {
      piVar5 = (int *)(*param_1 + (longlong)iVar3 * 0x28 + 0x20);
      iVar3 = *piVar5;
    } while (iVar3 != param_2);
  }
  *piVar5 = *(int *)(lVar2 + 0x20);
  plVar4 = *(longlong **)(*param_1 + 0x10 + (longlong)param_2 * 0x28);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar5 = (int *)((longlong)plVar4 + 0xc);
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (*piVar5 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  FUN_14048ca64(param_1,param_2);
  return;
}



// FUNCTION 14048ca64 FUN_14048ca64 body=114 status=ok
// SIG undefined FUN_14048ca64(void)

void FUN_14048ca64(longlong *param_1,int param_2)

{
  undefined4 *puVar1;
  uint *puVar2;
  longlong lVar3;
  byte bVar4;
  longlong *plVar5;
  undefined4 uVar6;
  int iVar7;
  
  lVar3 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x28) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x28);
  *puVar1 = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar6 = 0xffffffff;
  }
  else {
    uVar6 = (undefined4)param_1[6];
  }
  puVar1[1] = uVar6;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar7 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar7 = param_2;
  }
  bVar4 = (byte)param_2 & 0x1f;
  puVar2 = (uint *)((longlong)plVar5 + (longlong)(iVar7 >> 5) * 4);
  *puVar2 = *puVar2 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
  return;
}



// FUNCTION 14048cbac FUN_14048cbac body=97 status=ok
// SIG undefined FUN_14048cbac(void)

void FUN_14048cbac(longlong *param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  if (((byte *)param_1[0xc] == (byte *)0x0) || ((*(byte *)param_1[0xc] & 1) == 0)) {
    uVar2 = 0;
  }
  else {
    cVar1 = (**(code **)(*param_1 + 0x480))(param_1,0);
    if (cVar1 != '\0') {
      cVar1 = FUN_1401c92a0(param_1,0);
      uVar2 = 1;
      if (cVar1 != '\0') goto LAB_14048cbe2;
    }
    uVar2 = (**(code **)(*param_1 + 0xcb8))(param_1);
  }
LAB_14048cbe2:
                    /* WARNING: Could not recover jumptable at 0x00014048cbf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xc80))(param_1,uVar2);
  return;
}



// FUNCTION 14048cc0e FUN_14048cc0e body=452 status=ok
// SIG undefined FUN_14048cc0e(void)

void FUN_14048cc0e(longlong param_1,byte param_2)

{
  longlong lVar1;
  byte bVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  
  lVar1 = param_1 + 0xf30;
  if (*(byte **)(param_1 + 0xf50) == (byte *)0x0) {
    if (param_2 == 0) {
      return;
    }
  }
  else {
    bVar2 = **(byte **)(param_1 + 0xf50);
    if ((bVar2 & 1) == param_2) {
      return;
    }
    if (param_2 == 0) {
      if ((bVar2 & 1) == 0) {
        return;
      }
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14cb0c040) && (FUN_144b3d300(&DAT_14cb0c040), DAT_14cb0c040 == -1))
      {
        FUN_145e17f72(&DAT_14cb0bff0);
        atexit(FUN_14374ca90);
        _Init_thread_footer(&DAT_14cb0c040);
      }
      FUN_1402eb48e(*(undefined8 *)(*(longlong *)(param_1 + 0xf50) + 0x28),lVar1);
      **(byte **)(param_1 + 0xf50) = **(byte **)(param_1 + 0xf50) & 0xfe;
      return;
    }
  }
  lVar4 = *(longlong *)(param_1 + 0xb0);
  if (lVar4 == 0) {
    lVar4 = FUN_1448abda6(param_1);
  }
  if (((*(byte **)(lVar4 + 0x678) != (byte *)0x0) && ((**(byte **)(lVar4 + 0x678) & 1) != 0)) &&
     (lVar5 = param_1, (*(byte *)(param_1 + 0xf3a) & 2) != 0)) {
    for (; lVar5 != 0; lVar5 = *(longlong *)(lVar5 + 0x20)) {
      if ((*(uint *)(lVar5 + 8) & 0x30) != 0) {
        return;
      }
    }
    lVar5 = *(longlong *)(param_1 + 0xa8);
    if (lVar5 == 0) {
      lVar5 = *(longlong *)(param_1 + 0xb0);
      if (lVar5 == 0) {
        lVar5 = FUN_1448abda6(param_1);
      }
      uVar3 = *(undefined8 *)(lVar5 + 0x30);
    }
    else {
      do {
        if ((*(uint *)(lVar5 + 8) & 0x30) != 0) {
          return;
        }
        lVar5 = *(longlong *)(lVar5 + 0x20);
      } while (lVar5 != 0);
      uVar3 = FUN_144a79cc8();
    }
    if ((*(byte *)(param_1 + 0xf3a) & 4) == 0) {
      bVar6 = *(char *)(param_1 + 0xf3b) != '\0';
    }
    else {
      bVar6 = true;
    }
    FUN_140cbebe8(lVar1,bVar6);
    FUN_1402eb876(lVar1,uVar3);
    *(longlong *)(param_1 + 0xf58) = param_1;
    if (lVar4 != 0) {
      FUN_14082bc44(lVar1,lVar4,lVar4 + 0x658);
      return;
    }
  }
  return;
}



// FUNCTION 14048cdd2 FUN_14048cdd2 body=244 status=ok
// SIG undefined FUN_14048cdd2(void)

void FUN_14048cdd2(longlong param_1,uint param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_118 [32];
  undefined1 local_f8 [96];
  undefined8 local_98 [13];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (param_2 != 0xffffffff) {
    *(uint *)(param_1 + 0xce0) = param_2;
    puVar4 = (undefined8 *)(param_1 + 0xcf0);
    puVar2 = &DAT_14c846480;
    puVar3 = puVar4;
    for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    if (0 < (int)*(uint *)(param_1 + 0xd78)) {
      if (*(uint *)(param_1 + 0xd78) <= param_2) {
        *(undefined4 *)(param_1 + 0xce0) = 0xffffffff;
        puVar2 = &DAT_14c846480;
        for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
          *puVar4 = *puVar2;
          puVar2 = puVar2 + 1;
          puVar4 = puVar4 + 1;
        }
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_118);
      }
      FUN_1447f067c(*(undefined8 *)(*(longlong *)(param_1 + 0xd70) + (ulonglong)param_2 * 8),
                    local_f8,1,0);
      FUN_1449437a2(param_1 + 0x240,local_98,local_f8);
      puVar2 = local_98;
      for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
        *puVar4 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar4 = puVar4 + 1;
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14048ceca FUN_14048ceca body=624 status=ok
// SIG undefined FUN_14048ceca(void)

void FUN_14048ceca(longlong *param_1,void *param_2,undefined4 param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_1e8 [32];
  char *local_1c8;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  longlong local_1a8;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  longlong local_188;
  char local_179;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  longlong local_168;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  local_179 = '\0';
  if ((((*(byte *)(param_1 + 0x30) & 4) == 0) || (param_1[0x99] == 0)) ||
     ((*(byte *)(param_1[0x99] + 0x348) & 2) != 0)) {
    if ((*(byte *)(param_1 + 0x6c) & 1) != 0) {
      lVar3 = FUN_14485cccc((longlong)param_2 + 0xb8);
      if (lVar3 != 0) {
        lVar4 = FUN_140d12354();
        if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) {
          if (param_1[0x23] != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_1e8);
          }
          goto LAB_14048d08b;
        }
      }
    }
LAB_14048d0d1:
    local_179 = '\x01';
  }
  else {
    plVar1 = param_1 + 0x25;
    local_188 = param_1[0x27];
    local_198 = (undefined4)param_1[0x25];
    uStack_194 = *(undefined4 *)((longlong)param_1 + 300);
    uStack_190 = (undefined4)param_1[0x26];
    uStack_18c = *(undefined4 *)((longlong)param_1 + 0x134);
    if (*(char *)((longlong)param_1 + 0x4d4) == '\x01') {
      uVar2 = (**(code **)(*param_1 + 0x610))(param_1,param_2,&local_198);
    }
    else {
      uVar2 = 0;
    }
    local_1c8 = (char *)param_4;
    (**(code **)(*param_1 + 0x5e0))(param_1,&local_178,param_2,param_3);
    param_1[0x27] = local_168;
    *(undefined4 *)plVar1 = local_178;
    *(undefined4 *)((longlong)param_1 + 300) = uStack_174;
    *(undefined4 *)(param_1 + 0x26) = uStack_170;
    *(undefined4 *)((longlong)param_1 + 0x134) = uStack_16c;
    local_1c8 = &local_179;
    (**(code **)(*param_1 + 0x620))(param_1,param_2,&local_198,uVar2);
    memcpy(&local_178,param_2,0x100);
    local_78 = local_198;
    uStack_74 = uStack_194;
    uStack_70 = uStack_190;
    uStack_6c = uStack_18c;
    local_68 = local_188;
    FUN_1447cd2ec(param_1 + 0x38,&local_178);
    local_1b8 = (undefined4)*plVar1;
    uStack_1b4 = *(undefined4 *)((longlong)param_1 + 300);
    uStack_1b0 = (undefined4)param_1[0x26];
    uStack_1ac = *(undefined4 *)((longlong)param_1 + 0x134);
    local_1a8 = param_1[0x27];
    FUN_1401149ea(param_1,&local_178);
    param_1[0x27] = local_168;
    *(undefined4 *)plVar1 = local_178;
    *(undefined4 *)((longlong)param_1 + 300) = uStack_174;
    *(undefined4 *)(param_1 + 0x26) = uStack_170;
    *(undefined4 *)((longlong)param_1 + 0x134) = uStack_16c;
    if (local_179 != '\x01') {
      if ((double)(*(float *)(param_1 + 0x37) * *(float *)(param_1 + 0x37)) <=
          (double)param_1[0x27] * (double)param_1[0x27] +
          (double)param_1[0x25] * (double)param_1[0x25] +
          (double)param_1[0x26] * (double)param_1[0x26]) goto LAB_14048d08b;
      goto LAB_14048d0d1;
    }
  }
  (**(code **)(*param_1 + 0x590))(param_1,param_2);
LAB_14048d08b:
  if ((local_60 ^ (ulonglong)auStack_1e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14048d18e FUN_14048d18e body=75 status=ok
// SIG undefined FUN_14048d18e(void)

void FUN_14048d18e(longlong param_1)

{
  char *in_stack_00000028;
  
  if (*(char *)(param_1 + 0x571) == '\x01') {
    *(undefined1 *)(param_1 + 0x571) = 0;
  }
  else {
    FUN_14048f1c2(param_1);
    if (((*(byte *)(param_1 + 0x180) & 4) == 0) && (*in_stack_00000028 == '\0')) {
      *(byte *)(param_1 + 0x180) = *(byte *)(param_1 + 0x180) | 4;
    }
  }
  return;
}



// FUNCTION 14048d1da FUN_14048d1da body=975 status=ok
// SIG undefined FUN_14048d1da(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_14048d1da(byte *param_1,longlong param_2,undefined8 param_3,undefined8 *param_4)

{
  byte bVar1;
  undefined2 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  byte bVar5;
  int iVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined8 uVar11;
  uint uVar12;
  undefined7 uVar14;
  ulonglong uVar13;
  undefined8 unaff_RBX;
  undefined7 uVar15;
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
  undefined2 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  plVar9 = (longlong *)(param_2 + 0xb8);
  plVar7 = (longlong *)FUN_14485cccc(plVar9);
  if ((plVar7 == (longlong *)0x0) || ((*(byte *)((longlong)plVar7 + 0x62) & 4) == 0)) {
LAB_14048d249:
    plVar8 = plVar9;
    bVar5 = 0;
  }
  else {
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
    plVar9 = plVar7;
    plVar8 = (longlong *)FUN_144718840(plVar7,DAT_14cb56270);
    if (plVar8 == (longlong *)0x0) goto LAB_14048d249;
    bVar5 = (**(code **)(*plVar8 + 0x38))(plVar8);
    bVar5 = bVar5 ^ 1;
  }
  bVar1 = *param_1;
  uVar14 = (undefined7)((ulonglong)plVar8 >> 8);
  uVar15 = (undefined7)((ulonglong)unaff_RBX >> 8);
  if ((bVar1 & 8) == 0) {
    if ((bVar5 & (bVar1 & 0x10) >> 4) != 0) {
LAB_14048d27c:
      uVar13 = CONCAT71(uVar15,1);
      if ((~bVar1 & 0x60) == 0 || plVar7 == (longlong *)0x0) goto LAB_14048d39d;
      if (DAT_14cb223d8 == 0) {
        local_70 = &local_50;
        local_50 = FUN_1449e2820;
        local_60 = FUN_14081d0ea;
        local_68 = FUN_1427b09ee;
        local_78 = &LAB_147f29feb;
        local_80 = FUN_1464384fe;
        local_88 = L"Engine";
        local_90 = 0;
        local_98 = 0x10004001;
        local_a0 = 8;
        local_a8 = 0x28;
        FUN_14081cfa3(L"/Script/GbxAI",L"GbxTeam",&DAT_14cb223d8,&DAT_147f29fea);
      }
      plVar9 = (longlong *)(**(code **)(*plVar7 + 0x288))(plVar7,DAT_14cb223d8);
      if (plVar9 == (longlong *)0x0) goto LAB_14048d39d;
      if (DAT_14cb223d8 == 0) {
        local_70 = &local_50;
        local_50 = FUN_1449e2820;
        local_60 = FUN_14081d0ea;
        local_68 = FUN_1427b09ee;
        local_78 = &LAB_147f29feb;
        local_80 = FUN_1464384fe;
        local_88 = L"Engine";
        local_90 = 0;
        local_98 = 0x10004001;
        local_a0 = 8;
        local_a8 = 0x28;
        FUN_14081cfa3(L"/Script/GbxAI",L"GbxTeam",&DAT_14cb223d8,&DAT_147f29fea);
      }
      plVar7 = (longlong *)FUN_144718840(plVar9,DAT_14cb223d8);
      if (((plVar9 == plVar7) || (plVar7 == (longlong *)0x0)) ||
         (lVar10 = (**(code **)(*plVar7 + 0x10))(plVar7), lVar10 == 0)) goto LAB_14048d39d;
      pcVar3 = (code *)*param_4;
      uVar2 = *(undefined2 *)(param_4 + 1);
      uVar4 = param_4[2];
      if (*(longlong **)(lVar10 + 0x18) == (longlong *)0x0) {
        uVar11 = 0;
      }
      else {
        uVar11 = (**(code **)(**(longlong **)(lVar10 + 0x18) + 0x180))();
      }
      local_50 = pcVar3;
      local_48 = uVar2;
      local_40 = uVar4;
      iVar6 = FUN_1448618b0(lVar10 + 0x20,&local_50,uVar11);
      if (iVar6 == 0) {
        bVar5 = *param_1 & 0x40;
      }
      else {
        if (iVar6 != 2) goto LAB_14048d39d;
        bVar5 = *param_1 & 0x20;
      }
      if (bVar5 != 0) goto LAB_14048d39d;
    }
LAB_14048d26d:
    uVar13 = 0;
  }
  else {
    if ((bVar1 & 0x10) == 0) {
      if (bVar5 != 0) goto LAB_14048d26d;
    }
    else if (bVar5 != 0) goto LAB_14048d27c;
    uVar13 = CONCAT71(uVar15,1);
    if ((~bVar1 & 7) != 0) {
      if ((double)_DAT_14c763a28 <= *(double *)(param_2 + 0x50)) {
        uVar12 = (uint)CONCAT71(uVar14,bVar1) & 0xffffff01;
      }
      else if (*(double *)(param_2 + 0x50) <= (double)_DAT_14c763a2c) {
        uVar13 = CONCAT71(uVar14,bVar1) & 0xffffffffffffff02;
        uVar12 = (uint)CONCAT71((int7)(uVar13 >> 8),(byte)uVar13 >> 1);
      }
      else {
        uVar13 = CONCAT71(uVar14,bVar1) & 0xffffffffffffff04;
        uVar12 = (uint)CONCAT71((int7)(uVar13 >> 8),(byte)uVar13 >> 2);
      }
      uVar13 = (ulonglong)uVar12;
    }
  }
LAB_14048d39d:
  if ((local_38 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar13 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14048d5aa FUN_14048d5aa body=1369 status=ok
// SIG undefined FUN_14048d5aa(void)

longlong * FUN_14048d5aa(longlong *param_1,longlong *param_2,void *param_3)

{
  float fVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  char cVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  double dVar11;
  undefined1 auStack_428 [32];
  undefined1 *local_408;
  undefined1 local_400;
  double local_3f0;
  double local_3e8;
  double local_3e0;
  undefined8 local_3d8;
  undefined8 uStack_3d0;
  double local_3c8;
  double local_3c0;
  double local_3b8;
  double local_3b0;
  undefined8 local_3a8;
  undefined8 uStack_3a0;
  undefined8 local_398;
  undefined8 uStack_390;
  undefined1 local_380 [4];
  float local_37c;
  double local_328;
  double local_320;
  double local_318;
  undefined4 local_2dc;
  byte local_2d3;
  undefined4 local_2b0;
  undefined1 local_280 [4];
  float local_27c;
  undefined4 local_1dc;
  byte local_1d3;
  undefined4 local_1b0;
  undefined1 local_180 [4];
  float local_17c;
  undefined4 local_dc;
  byte local_d3;
  undefined4 local_b0;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_428;
  param_2[2] = param_1[0x27];
  lVar6 = param_1[0x26];
  *param_2 = param_1[0x25];
  param_2[1] = lVar6;
  local_3d8 = *(double *)((longlong)param_3 + 0x40);
  uStack_3d0 = *(double *)((longlong)param_3 + 0x48);
  local_3c8 = *(double *)((longlong)param_3 + 0x50);
  dVar11 = local_3c8 * local_3c8 + local_3d8 * local_3d8 + uStack_3d0 * uStack_3d0;
  if ((dVar11 != 1.0) || (NAN(dVar11))) {
    if (dVar11 < 9.99999993922529e-09) {
      local_3c8 = DAT_14c8464f0;
      uVar7 = (undefined4)DAT_14c8464e0;
      uVar8 = DAT_14c8464e0._4_4_;
      uVar9 = (undefined4)DAT_14c8464e8;
      uVar10 = DAT_14c8464e8._4_4_;
      goto LAB_14048d70b;
    }
    dVar11 = 1.0 / SQRT(dVar11);
    local_3c8 = local_3c8 * dVar11;
    uStack_3d0 = uStack_3d0 * dVar11;
    local_3d8 = local_3d8 * dVar11;
  }
  else {
    local_3c8 = *(double *)((longlong)param_3 + 0x50);
    uVar7 = *(undefined4 *)((longlong)param_3 + 0x40);
    uVar8 = *(undefined4 *)((longlong)param_3 + 0x44);
    uVar9 = *(undefined4 *)((longlong)param_3 + 0x48);
    uVar10 = *(undefined4 *)((longlong)param_3 + 0x4c);
LAB_14048d70b:
    local_3d8 = (double)CONCAT44(uVar8,uVar7);
    uStack_3d0 = (double)CONCAT44(uVar10,uVar9);
  }
  cVar5 = FUN_14048db04(param_1);
  if (cVar5 == '\0') {
    dVar11 = (double)param_1[0x25];
    dVar2 = (double)param_1[0x26];
    dVar3 = (double)param_1[0x27];
    lVar6 = param_1[0x16];
    if (lVar6 == 0) {
      lVar6 = FUN_1448abda6(param_1);
    }
    dVar4 = (double)*(float *)(lVar6 + 0x6f4);
    local_3f0 = (double)(1.0 - *(float *)((longlong)param_3 + 4));
    local_3e0 = dVar3 * dVar4 * local_3f0;
    local_3e8 = dVar2 * dVar4 * local_3f0;
    local_3f0 = dVar11 * dVar4 * local_3f0;
    fVar1 = *(float *)(param_1 + 0xa6);
    if (0.0 < fVar1) {
      memset(local_180,0,0x100);
      local_b0 = 0xffffffff;
      local_dc = 0xffffffff;
      local_17c = 1.0;
      memset(local_280,0,0x100);
      local_1b0 = 0xffffffff;
      local_1dc = 0xffffffff;
      local_27c = 1.0;
      memset(local_380,0,0x100);
      local_2b0 = 0xffffffff;
      local_2dc = 0xffffffff;
      local_37c = 1.0;
      lVar6 = param_1[0x22];
      local_3a8 = *(undefined8 *)(lVar6 + 0x240);
      uStack_3a0 = *(undefined8 *)(lVar6 + 0x248);
      local_398 = *(undefined8 *)(lVar6 + 0x250);
      uStack_390 = *(undefined8 *)(lVar6 + 600);
      local_3b0 = (double)fVar1;
      local_3c0 = local_3b0 * -0.0;
      local_400 = 0;
      local_408 = local_180;
      local_3b8 = local_3c0;
      (**(code **)(*param_1 + 0x4e8))(param_1,&local_3c0,&local_3a8,1);
      if (((local_d3 & 1) == 0) || (0.0 < local_17c)) {
        lVar6 = param_1[0x22];
        local_3a8 = *(undefined8 *)(lVar6 + 0x240);
        uStack_3a0 = *(undefined8 *)(lVar6 + 0x248);
        local_398 = *(undefined8 *)(lVar6 + 0x250);
        uStack_390 = *(undefined8 *)(lVar6 + 600);
        local_400 = 0;
        local_408 = local_280;
        (**(code **)(*param_1 + 0x4e8))(param_1,&local_3f0,&local_3a8,1);
        if (((local_1d3 & 1) == 0) || (0.0 < local_27c)) {
          lVar6 = param_1[0x22];
          local_3a8 = *(undefined8 *)(lVar6 + 0x240);
          uStack_3a0 = *(undefined8 *)(lVar6 + 0x248);
          local_398 = *(undefined8 *)(lVar6 + 0x250);
          uStack_390 = *(undefined8 *)(lVar6 + 600);
          local_3b0 = -(double)*(float *)(param_1 + 0xa6);
          local_3c0 = (double)*(float *)(param_1 + 0xa6) * 0.0;
          local_400 = 0;
          local_408 = local_380;
          local_3b8 = local_3c0;
          (**(code **)(*param_1 + 0x4e8))(param_1,&local_3c0,&local_3a8,1);
          if ((((local_2d3 & 1) != 0) && (local_37c < local_17c)) &&
             (cVar5 = FUN_14048db04(param_1,local_380), cVar5 != '\0')) {
            *(undefined2 *)(param_1 + 0xae) = 0x101;
            param_2[2] = param_1[0xac];
            lVar6 = param_1[0xab];
            *param_2 = param_1[0xaa];
            param_2[1] = lVar6;
            dVar11 = local_318 * local_318 + local_328 * local_328 + local_320 * local_320;
            if ((dVar11 != 1.0) || (NAN(dVar11))) {
              if (dVar11 < 9.99999993922529e-09) {
                local_328 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
                local_320 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
                local_318 = DAT_14c8464f0;
              }
              else {
                dVar11 = 1.0 / SQRT(dVar11);
                local_318 = local_318 * dVar11;
                local_320 = local_320 * dVar11;
                local_328 = local_328 * dVar11;
              }
            }
            local_3d8 = local_328;
            uStack_3d0 = local_320;
            local_3c8 = local_318;
            if (local_318 < (double)*(float *)(param_1 + 0xa9)) goto LAB_14048d6b0;
            goto LAB_14048d6a0;
          }
        }
      }
    }
    memcpy(local_180,param_3,0x100);
    FUN_1447cd2ec(param_1 + 0xb3,local_180);
    FUN_14048ecae(param_1,param_2,param_3);
    param_1[0xac] = param_2[2];
    uVar7 = *(undefined4 *)((longlong)param_2 + 4);
    lVar6 = param_2[1];
    uVar8 = *(undefined4 *)((longlong)param_2 + 0xc);
    *(int *)(param_1 + 0xaa) = (int)*param_2;
    *(undefined4 *)((longlong)param_1 + 0x554) = uVar7;
    *(int *)(param_1 + 0xab) = (int)lVar6;
    *(undefined4 *)((longlong)param_1 + 0x55c) = uVar8;
  }
  else {
    *(undefined1 *)((longlong)param_1 + 0x571) = 1;
LAB_14048d6a0:
    FUN_14048dce4(param_1,&local_3d8,param_2);
  }
LAB_14048d6b0:
  if ((local_80 ^ (ulonglong)auStack_428) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14048db04 FUN_14048db04 body=479 status=ok
// SIG undefined FUN_14048db04(void)

bool FUN_14048db04(longlong param_1,longlong param_2)

{
  char cVar1;
  uint uVar2;
  bool bVar3;
  char *pcVar4;
  longlong lVar5;
  longlong *plVar6;
  float fVar7;
  float fVar8;
  
  if (((*(byte *)(param_2 + 0xad) & 3) != 1) ||
     (*(double *)(param_2 + 0x68) <= 9.999999747378752e-05 &&
      *(double *)(param_2 + 0x68) != 9.999999747378752e-05)) {
    bVar3 = false;
  }
  else {
    fVar8 = *(float *)(param_1 + 0x548);
    if (((((*(int *)(param_2 + 0xdc) != 0) && (uVar2 = *(uint *)(param_2 + 0xd8), -1 < (int)uVar2))
         && ((int)uVar2 < DAT_14c9647dc)) &&
        ((plVar6 = (longlong *)
                   ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
         plVar6 != (longlong *)0x0 && ((int)plVar6[2] == *(int *)(param_2 + 0xdc))))) &&
       (((*(uint *)(plVar6 + 1) & 0x10200000) == 0 && (lVar5 = *plVar6, lVar5 != 0)))) {
      if (((((*(byte *)(lVar5 + 0x44d) & 0x10) == 0) && (*(int *)(lVar5 + 0x414) != 0)) &&
          (uVar2 = *(uint *)(lVar5 + 0x410), -1 < (int)uVar2)) &&
         (((((int)uVar2 < DAT_14c9647dc &&
            (plVar6 = (longlong *)
                      ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
            plVar6 != (longlong *)0x0)) && ((int)plVar6[2] == *(int *)(lVar5 + 0x414))) &&
          ((*(uint *)(plVar6 + 1) & 0x10200000) == 0)))) {
        if ((*(uint *)(plVar6 + 1) & 0x10200000) == 0) {
          lVar5 = *plVar6;
        }
        else {
          lVar5 = 0;
        }
        pcVar4 = (char *)(lVar5 + 200);
      }
      else {
        pcVar4 = (char *)(lVar5 + 0x520);
      }
      cVar1 = *pcVar4;
      if (cVar1 == '\x03') {
        fVar8 = 2.0;
      }
      else if (cVar1 == '\x02') {
        fVar7 = *(float *)(pcVar4 + 4);
        if ((*(float *)(pcVar4 + 8) != fVar7) || (NAN(*(float *)(pcVar4 + 8)) || NAN(fVar7))) {
          fVar7 = cosf(fVar7 * 0.017453292);
          if (1.0 <= fVar7) {
            fVar7 = 1.0;
          }
          if (fVar7 <= 0.0) {
            fVar7 = 0.0;
          }
          *(float *)(pcVar4 + 0xc) = fVar7;
          *(undefined4 *)(pcVar4 + 8) = *(undefined4 *)(pcVar4 + 4);
        }
        else {
          fVar7 = *(float *)(pcVar4 + 0xc);
        }
        if (fVar8 <= fVar7) {
          fVar8 = fVar7;
        }
      }
      else if (cVar1 == '\x01') {
        fVar7 = *(float *)(pcVar4 + 4);
        if ((*(float *)(pcVar4 + 8) != fVar7) || (NAN(*(float *)(pcVar4 + 8)) || NAN(fVar7))) {
          fVar7 = cosf(fVar7 * 0.017453292);
          if (1.0 <= fVar7) {
            fVar7 = 1.0;
          }
          if (fVar7 <= 0.0) {
            fVar7 = 0.0;
          }
          *(float *)(pcVar4 + 0xc) = fVar7;
          *(undefined4 *)(pcVar4 + 8) = *(undefined4 *)(pcVar4 + 4);
        }
        else {
          fVar7 = *(float *)(pcVar4 + 0xc);
        }
        if (fVar7 <= fVar8) {
          fVar8 = fVar7;
        }
      }
    }
    bVar3 = (double)fVar8 < *(double *)(param_2 + 0x68) ||
            (double)fVar8 == *(double *)(param_2 + 0x68);
  }
  return bVar3;
}



// FUNCTION 14048dce4 FUN_14048dce4 body=429 status=ok
// SIG undefined FUN_14048dce4(void)

void FUN_14048dce4(longlong param_1,double *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  if (((*(byte *)(param_1 + 0x181) & 2) == 0) || (*(char *)(param_1 + 0x520) == '\0')) {
    dVar5 = *(double *)(param_1 + 0x550);
    dVar7 = *(double *)(param_1 + 0x558);
    dVar4 = *(double *)(param_1 + 0x560) * *(double *)(param_1 + 0x560) +
            dVar5 * dVar5 + dVar7 * dVar7;
    if (((dVar4 != 1.0) || (dVar1 = dVar5, dVar2 = dVar7, NAN(dVar4))) &&
       (dVar1 = DAT_14c8464e0, dVar2 = DAT_14c8464e8, 9.99999993922529e-09 <= dVar4)) {
      dVar1 = dVar5 * (1.0 / SQRT(dVar4));
      dVar2 = dVar7 * (1.0 / SQRT(dVar4));
    }
    if (ABS(param_2[2]) < 9.999999747378752e-05) {
      dVar5 = 0.0;
    }
    else {
      dVar5 = (double)(float)(((0.0 - *param_2 * dVar1) - param_2[1] * dVar2) / param_2[2]);
    }
    dVar7 = dVar5 * dVar5 + dVar1 * dVar1 + dVar2 * dVar2;
    if (((dVar7 != 1.0) || (dVar4 = dVar1, dVar3 = dVar2, dVar6 = dVar5, NAN(dVar7))) &&
       (dVar4 = DAT_14c8464e0, dVar3 = DAT_14c8464e8, dVar6 = DAT_14c8464f0,
       9.99999993922529e-09 <= dVar7)) {
      dVar7 = 1.0 / SQRT(dVar7);
      dVar4 = dVar1 * dVar7;
      dVar3 = dVar2 * dVar7;
      dVar6 = dVar5 * dVar7;
    }
    dVar5 = SQRT(param_3[2] * param_3[2] + *param_3 * *param_3 + param_3[1] * param_3[1]);
    *param_3 = dVar4 * dVar5;
    param_3[1] = dVar3 * dVar5;
    param_3[2] = dVar6 * dVar5;
  }
  return;
}



// FUNCTION 14048de92 FUN_14048de92 body=259 status=ok
// SIG undefined FUN_14048de92(void)

void FUN_14048de92(longlong *param_1,void *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_148 [32];
  undefined1 local_128 [256];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_148;
  param_1[0x27] = DAT_14c8464f0;
  lVar1 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  param_1[0x25] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  param_1[0x26] = lVar1;
  param_1[0x58] = DAT_14c8464f0;
  lVar1 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  param_1[0x56] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  param_1[0x57] = lVar1;
  param_1[0x45] = DAT_14c8464f0;
  uVar4 = DAT_14c8464e8._4_4_;
  uVar3 = (undefined4)DAT_14c8464e8;
  uVar2 = DAT_14c8464e0._4_4_;
  *(undefined4 *)(param_1 + 0x43) = (undefined4)DAT_14c8464e0;
  *(undefined4 *)((longlong)param_1 + 0x21c) = uVar2;
  *(undefined4 *)(param_1 + 0x44) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x224) = uVar4;
  (**(code **)(*param_1 + 0x4d0))();
  (**(code **)(*param_1 + 0x4b0))(param_1,0);
  memcpy(local_128,param_2,0x100);
  FUN_1447cd2ec(param_1 + 0x3a,local_128);
  if (param_1[0x99] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_148);
  }
  if ((local_28 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14048dfae FUN_14048dfae body=78 status=ok
// SIG undefined FUN_14048dfae(void)

void FUN_14048dfae(longlong param_1)

{
  byte *pbVar1;
  
  if (*(longlong *)(param_1 + 0x118) != 0) {
    pbVar1 = (byte *)(*(longlong *)(param_1 + 0x118) + 0x2e4);
    *pbVar1 = *pbVar1 & 0xf7;
  }
  FUN_14048e05c(param_1);
  if ((0.0 < *(float *)(param_1 + 0x4c0)) && (*(longlong *)(param_1 + 0x118) != 0)) {
    pbVar1 = (byte *)(*(longlong *)(param_1 + 0x118) + 0x2e4);
    *pbVar1 = *pbVar1 | 8;
  }
  return;
}



// FUNCTION 14048dffc FUN_14048dffc body=95 status=ok
// SIG undefined FUN_14048dffc(void)

void FUN_14048dffc(longlong *param_1)

{
  FUN_140bd765a(param_1 + 0x1c3,0,0);
  if ((((*(byte *)((longlong)param_1 + 0x1151) & 0x10) != 0) &&
      ((*(byte *)(param_1 + 0x1db) & 2) == 0)) &&
     (((char)param_1[0x2f] == '\x03' ||
      (((*(byte *)(param_1 + 0xc) & 1) != 0 || ((*(byte *)((longlong)param_1 + 0x61) & 1) != 0))))))
  {
    *(undefined1 *)((longlong)param_1 + 0x1152) = 0;
                    /* WARNING: Could not recover jumptable at 0x00014048e054. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x6c0))(param_1);
    return;
  }
  return;
}



// FUNCTION 14048e05c FUN_14048e05c body=1326 status=ok
// SIG undefined FUN_14048e05c(void)

void FUN_14048e05c(longlong *param_1,longlong param_2)

{
  int iVar1;
  byte bVar2;
  undefined1 uVar3;
  uint uVar4;
  longlong *plVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined4 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  wchar_t *local_a8;
  undefined1 *local_a0;
  undefined1 *local_98;
  code **local_90;
  code *local_88;
  code *local_80;
  longlong local_70;
  undefined8 local_68;
  longlong local_60;
  code *local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  lVar6 = param_1[0x22];
  if (lVar6 != param_2 && lVar6 != 0) {
    if ((*(byte *)(param_1 + 0x2e) & 0x40) != 0) {
      *(byte *)(lVar6 + 0x1f9) = *(byte *)(lVar6 + 0x1f9) & 0xfb;
      lVar6 = param_1[0x22];
      if (lVar6 == 0) {
        lVar6 = 0;
      }
      else if ((*(uint *)(lVar6 + 8) >> 0x1e & 1) == 0) {
        FUN_1449bb556(lVar6,0,1);
        lVar6 = param_1[0x22];
      }
    }
    FUN_14048e58c(&local_68);
    if (*(char *)(lVar6 + 0x1fd) == '\x01') {
      FUN_1400f8004(lVar6 + 0x1fd,&local_58);
      uVar3 = FUN_14048e8dc(lVar6,local_58,param_1,local_68);
      *(undefined1 *)(lVar6 + 0x1fd) = uVar3;
    }
    FUN_1401c4d5c(param_1[0x22] + 0x40,param_1,param_1 + 8);
  }
  if (param_2 == 0) {
    param_1[0x22] = 0;
LAB_14048e2e6:
    param_1[0x23] = 0;
    goto LAB_14048e294;
  }
  if (((*(uint *)(param_2 + 8) >> 0x1e & 1) == 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c();
    param_1[0x22] = param_2;
  }
  else {
    lVar6 = 0;
    if ((*(uint *)(param_2 + 8) >> 0x1e & 1) == 0) {
      lVar6 = param_2;
    }
    param_1[0x22] = lVar6;
    if (lVar6 == 0) goto LAB_14048e2e6;
  }
  if (DAT_14cac6e60 == 0) {
    local_90 = &local_58;
    local_58 = FUN_144a7958c;
    local_80 = FUN_14081d0ea;
    local_88 = FUN_142b47bc4;
    local_98 = &LAB_1478989f1;
    local_a0 = &LAB_146391124;
    local_a8 = L"Engine";
    local_b0 = 0x10000000000;
    local_b8 = 0x10000005;
    local_c0 = 0x10;
    local_c8 = 0x620;
    FUN_14081cfa3(L"/Script/Engine",L"PrimitiveComponent",&DAT_14cac6e60,FUN_146391102);
    param_2 = param_1[0x22];
    if (param_2 == 0) goto LAB_14048e2e6;
  }
  lVar6 = 0;
  if ((DAT_14cac6e60 == 0) || (lVar10 = *(longlong *)(param_2 + 0x10), lVar10 == 0)) {
LAB_14048e12a:
    param_1[0x23] = lVar6;
    lVar6 = param_2;
  }
  else {
    if ((*(int *)(lVar10 + 0x38) < *(int *)(DAT_14cac6e60 + 0x38)) ||
       (*(longlong *)(*(longlong *)(lVar10 + 0x30) + (longlong)*(int *)(DAT_14cac6e60 + 0x38) * 8)
        != DAT_14cac6e60 + 0x30)) {
      lVar6 = 0;
      goto LAB_14048e12a;
    }
    lVar6 = param_2;
    if (DAT_14c950c29 == '\0') goto LAB_14048e12a;
    FUN_1456cec3c(param_2);
    lVar6 = param_1[0x22];
    param_1[0x23] = param_2;
    if (lVar6 == 0) goto LAB_14048e294;
  }
  FUN_14048e58c(&local_70);
  local_50 = local_70;
  if (param_1 == (longlong *)0x0) {
    uVar7 = 0;
    uVar9 = 0;
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
    uVar4 = *(uint *)(lVar10 + 0x10);
    if (*(uint *)(lVar10 + 0x10) == 0) {
      LOCK();
      iVar1 = DAT_14c964868 + 1;
      UNLOCK();
      uVar8 = DAT_14c964868 + 1;
      bVar11 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar1;
      if (bVar11) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar8);
      }
      LOCK();
      uVar4 = *(uint *)(lVar10 + 0x10);
      bVar11 = uVar4 == 0;
      if (bVar11) {
        *(uint *)(lVar10 + 0x10) = uVar8;
        uVar4 = 0;
      }
      UNLOCK();
      if (bVar11) {
        uVar4 = uVar8;
      }
    }
    uVar7 = (ulonglong)uVar4;
    if (local_70 == 0) {
      local_50 = 0;
    }
    else if (uVar4 == 0) {
      uVar7 = 0;
    }
    else if (((((-1 < (int)uVar9) && ((int)uVar9 < DAT_14c9647dc)) &&
              (plVar5 = (longlong *)
                        ((ulonglong)((uVar9 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8)),
              plVar5 != (longlong *)0x0)) &&
             ((*(uint *)(plVar5 + 2) == uVar4 && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0)))) &&
            (*plVar5 != 0)) {
      FUN_1400796d0(*(undefined8 *)(*plVar5 + 0x10),local_70,1);
    }
  }
  FUN_1400f8004(lVar6 + 0x1fd,&local_60);
  local_58 = (code *)((ulonglong)uVar9 | uVar7 << 0x20);
  bVar2 = FUN_140a28ca8(lVar6,local_60);
  *(byte *)(lVar6 + 0x1fd) = *(byte *)(lVar6 + 0x1fd) | bVar2;
  if ((*(byte *)(param_1 + 0x2e) & 0x40) != 0) {
    lVar6 = param_1[0x22];
    if ((char)*(byte *)(param_1 + 0x2e) < '\0') {
      bVar2 = 4;
      lVar10 = lVar6;
      if (DAT_14c76142c == 1) {
        do {
          local_60 = lVar10;
          if ((*(byte *)(lVar10 + 0x1f8) & 2) == 0) break;
          *(byte *)(lVar10 + 0x1f8) = *(byte *)(lVar10 + 0x1f8) & 0xfd;
          local_60 = *(longlong *)(lVar10 + 0x120);
          lVar10 = local_60;
        } while (local_60 != 0);
      }
    }
    else {
      bVar2 = 0;
    }
    uVar7 = CONCAT71((int7)((ulonglong)local_60 >> 8),*(undefined1 *)(lVar6 + 0x1f9)) &
            0xfffffffffffffffb;
    *(byte *)(lVar6 + 0x1f9) = (byte)uVar7 | bVar2;
    if ((char)param_1[0x2e] < '\0') {
      if ((*(char *)((longlong)param_1 + 0x171) == '\0') &&
         (*(char *)((longlong)param_1 + 0x172) == '\0')) {
        (**(code **)(*(longlong *)param_1[0x22] + 0x550))
                  ((longlong *)param_1[0x22],CONCAT71((int7)(uVar7 >> 8),1));
      }
    }
    else {
      FUN_1449bb556(param_1[0x22],0,1);
    }
  }
  FUN_14082bc44(param_1[0x22] + 0x40,param_1,param_1 + 8);
LAB_14048e294:
  (**(code **)(*param_1 + 0x4c0))(param_1);
  if ((*(byte *)(param_1 + 0x2e) & 0x20) != 0) {
    (**(code **)(*param_1 + 0x568))(param_1);
  }
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14048e58c FUN_14048e58c body=190 status=ok
// SIG undefined FUN_14048e58c(void)

undefined8 * FUN_14048e58c(undefined8 *param_1)

{
  undefined1 auStack_68 [32];
  wchar_t local_48 [28];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cad1e50) {
    FUN_144b3d300(&DAT_14cad1e50);
    if (DAT_14cad1e50 == -1) {
      builtin_wcsncpy(local_48 + 0x10,L"nged",5);
      builtin_wcsncpy(local_48 + 8,L"olumeCha",8);
      builtin_wcsncpy(local_48,L"PhysicsV",8);
      FUN_1446f470e(&DAT_14cad1e48,local_48,1);
      _Init_thread_footer(&DAT_14cad1e50);
    }
  }
  *param_1 = DAT_14cad1e48;
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14048e64c FUN_14048e64c body=273 status=ok
// SIG undefined FUN_14048e64c(void)

undefined8 FUN_14048e64c(longlong param_1,longlong param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  undefined8 *lpTlsValue;
  undefined8 uVar2;
  
  uVar2 = 0;
  if ((param_2 != 0) && (*(char *)(param_1 + 0x48) != '\0')) {
    if ((*(uint *)(param_2 + 8) >> 0x1e & 1) == 0) {
      lpTlsValue = TlsGetValue(*(DWORD *)(param_1 + 8));
      if (lpTlsValue == (undefined8 *)0x0) {
        lpTlsValue = (undefined8 *)FUN_14001cc68(0x90,0x10);
        lpTlsValue[6] = 0;
        *(undefined4 *)(lpTlsValue + 7) = 0;
        *lpTlsValue = 0;
        lpTlsValue[1] = 0;
        lpTlsValue[2] = 0;
        lpTlsValue[3] = 0;
        *(undefined8 *)((longlong)lpTlsValue + 0x3c) = 0xffffffff00000080;
        *(undefined4 *)((longlong)lpTlsValue + 0x44) = 0;
        lpTlsValue[10] = 0;
        *(undefined4 *)(lpTlsValue + 0xb) = 0;
        lpTlsValue[0xc] = 0;
        lpTlsValue[0xd] = 0;
        lpTlsValue[0xe] = 0;
        lpTlsValue[0xf] = 0;
        lpTlsValue[0x10] = 0;
        lpTlsValue[0x11] = 0;
        TlsSetValue(*(DWORD *)(param_1 + 8),lpTlsValue);
        EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
        iVar1 = *(int *)(param_1 + 0x40);
        *(uint *)(param_1 + 0x40) = iVar1 + 1U;
        if (*(uint *)(param_1 + 0x44) < iVar1 + 1U) {
          FUN_1463d122a((longlong *)(param_1 + 0x38),iVar1);
        }
        *(undefined8 **)(*(longlong *)(param_1 + 0x38) + (longlong)iVar1 * 8) = lpTlsValue;
        LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
      }
      FUN_1411c9668(lpTlsValue,param_2,param_3,param_4);
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}



// FUNCTION 14048e75e FUN_14048e75e body=128 status=ok
// SIG undefined FUN_14048e75e(void)

void FUN_14048e75e(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14048e7e0(param_1,&local_30);
  if (local_30 != 0) {
    local_20 = param_2;
    FUN_1447cd2ec();
  }
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
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14048e7e0 FUN_14048e7e0 body=250 status=ok
// SIG undefined FUN_14048e7e0(void)

undefined8 * FUN_14048e7e0(char *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  param_2[1] = 0;
  if (*param_1 != '\x01') goto LAB_14048e863;
  FUN_1400f8004(0,&local_38);
  FUN_14018932e(&local_30,param_1 + -0x1fd,local_38);
  plVar1 = local_28;
  if (local_28 == (longlong *)0x0) {
    *param_2 = local_30;
    goto LAB_14048e863;
  }
  LOCK();
  *(int *)(local_28 + 1) = (int)local_28[1] + 1;
  UNLOCK();
  plVar4 = (longlong *)param_2[1];
  *param_2 = local_30;
  if (local_28 == plVar4) {
    LOCK();
    plVar4 = local_28 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      iVar3 = *piVar2;
      UNLOCK();
      plVar4 = plVar1;
joined_r0x00014048e89f:
      if (iVar3 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  else {
    param_2[1] = local_28;
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
        iVar3 = *piVar2;
        UNLOCK();
        goto joined_r0x00014048e89f;
      }
    }
  }
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
LAB_14048e863:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14048e8dc FUN_14048e8dc body=977 status=ok
// SIG undefined FUN_14048e8dc(void)

ulonglong FUN_14048e8dc(ulonglong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  uint *_Dst;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  undefined *puVar7;
  uint uVar8;
  longlong lVar9;
  ulonglong uVar10;
  bool bVar11;
  int iVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong lVar15;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  undefined **local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14c963d60);
  if (DAT_14c963d90 != DAT_14c963dbc) {
    uVar5 = ((uint)(param_1 >> 0x14) & 0xffff ^ (uint)(param_1 >> 4)) * -0x7a143595;
    uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
    uVar5 = uVar5 >> 0x10 ^ uVar5;
    puVar7 = DAT_14c963dc8;
    if (DAT_14c963dc8 == (undefined *)0x0) {
      puVar7 = &DAT_14c963dc0;
    }
    iVar6 = *(int *)(puVar7 + (ulonglong)(DAT_14c963dd0 - 1U & uVar5) * 4);
    while (iVar6 != -1) {
      lVar1 = DAT_14c963d88 + (longlong)iVar6 * 0x60;
      if (*(ulonglong *)(DAT_14c963d88 + (longlong)iVar6 * 0x60) == param_1) {
        uVar10 = 0;
        local_58 = param_1;
        if ((lVar1 == 0) || (plVar14 = (longlong *)(lVar1 + 8), plVar14 == (longlong *)0x0))
        goto LAB_14048eba6;
        if (*(int *)(lVar1 + 0x10) == *(int *)(lVar1 + 0x3c)) goto LAB_14048eb2c;
        uVar2 = (uint)((ulonglong)param_2 >> 0x10);
        uVar8 = (uint)param_2 & 0xffff;
        lVar15 = lVar1 + 0x40;
        if (*(longlong *)(lVar1 + 0x48) != 0) {
          lVar15 = *(longlong *)(lVar1 + 0x48);
        }
        iVar6 = *(int *)(lVar15 + (ulonglong)
                                  (*(int *)(lVar1 + 0x50) - 1U &
                                  (int)((ulonglong)param_2 >> 0x20) +
                                  ((uint)param_2 << 0x10 | uVar8) + (uVar2 << 0x13 | uVar2 & 0xffff)
                                  + (uVar8 >> 4)) * 4);
        if (iVar6 == -1) goto LAB_14048eb2c;
        goto LAB_14048ea15;
      }
      iVar6 = *(int *)(lVar1 + 0x58);
    }
  }
  uVar10 = 0;
  goto LAB_14048eba6;
LAB_14048ea15:
  lVar15 = *plVar14 + (longlong)iVar6 * 0x20;
  if (*(longlong *)(*plVar14 + (longlong)iVar6 * 0x20) != param_2) {
    iVar6 = *(int *)(lVar15 + 0x18);
    if (iVar6 == -1) goto LAB_14048eb2c;
    goto LAB_14048ea15;
  }
  uVar10 = 0;
  if ((lVar15 == 0) || ((longlong *)(lVar15 + 8) == (longlong *)0x0)) goto LAB_14048eb2e;
  plVar3 = *(longlong **)(lVar15 + 8);
  if (plVar3 == (longlong *)0x0) goto LAB_14048eb21;
  FUN_1409ca370(plVar3,param_3,param_4);
  iVar6 = (int)plVar3[1];
  if (iVar6 < 1) goto LAB_14048eb21;
  lVar15 = 0;
  bVar11 = false;
  do {
    lVar9 = lVar15 * 0x10;
    while( true ) {
      lVar4 = *plVar3;
      _Dst = (uint *)(lVar4 + lVar9);
      if (((((*(longlong *)(lVar4 + 8 + lVar9) != 0) && (_Dst[1] != 0)) &&
           (uVar2 = *_Dst, -1 < (int)uVar2)) &&
          (((int)uVar2 < DAT_14c9647dc &&
           (plVar13 = (longlong *)
                      ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
           plVar13 != (longlong *)0x0)))) &&
         ((*(uint *)(plVar13 + 2) == _Dst[1] &&
          (((*(uint *)(plVar13 + 1) >> 0x1c & 1) == 0 && (*plVar13 != 0)))))) break;
      iVar12 = ~(uint)lVar15 + iVar6;
      if (iVar12 != 0) {
        if (0 < iVar12) {
          iVar12 = 1;
        }
        memmove(_Dst,(void *)(lVar4 + (longlong)(iVar6 - iVar12) * 0x10),(longlong)iVar12 << 4);
        iVar6 = (int)plVar3[1];
      }
      iVar6 = iVar6 + -1;
      *(int *)(plVar3 + 1) = iVar6;
      bVar11 = true;
      if (iVar6 <= lVar15) goto LAB_14048ec38;
    }
    lVar15 = lVar15 + 1;
  } while (lVar15 < iVar6);
  if (bVar11) {
LAB_14048ec38:
    FUN_1400bbcfc(plVar3);
    iVar6 = (int)plVar3[1];
  }
  if (iVar6 < 1) {
LAB_14048eb21:
    FUN_140819aae(plVar14,param_2);
LAB_14048eb2c:
    uVar10 = 0;
  }
  else {
    uVar10 = CONCAT71((int7)((ulonglong)lVar9 >> 8),1);
  }
LAB_14048eb2e:
  if (*(int *)(lVar1 + 0x10) == *(int *)(lVar1 + 0x3c)) {
    if (DAT_14c963d90 != DAT_14c963dbc) {
      puVar7 = &DAT_14c963dc0;
      if (DAT_14c963dc8 != (undefined *)0x0) {
        puVar7 = DAT_14c963dc8;
      }
      for (iVar6 = *(int *)(puVar7 + ((longlong)(int)uVar5 & (longlong)DAT_14c963dd0 - 1U) * 4);
          iVar6 != -1; iVar6 = *(int *)((longlong)iVar6 * 0x60 + DAT_14c963d88 + 0x58)) {
        if (*(ulonglong *)(DAT_14c963d88 + (longlong)iVar6 * 0x60) == local_58) {
          FUN_14007eed8(&DAT_14c963d88);
          break;
        }
      }
      if (DAT_14c963d90 != DAT_14c963dbc) goto LAB_14048eba6;
    }
    local_50 = &PTR_PTR_14c75ecc8;
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14c964840);
    FUN_140f933a4(&DAT_14c964830,&local_50,1);
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14c964840);
  }
LAB_14048eba6:
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14c963d60);
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar10 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14048ecae FUN_14048ecae body=1299 status=ok
// SIG undefined FUN_14048ecae(void)

double * FUN_14048ecae(longlong param_1,double *param_2,longlong param_3)

{
  float fVar1;
  double dVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  char cVar8;
  float fVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  double *local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  double local_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  double local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  double local_98;
  double local_88;
  double dStack_80;
  double local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_78 = *(double *)(param_3 + 0x50);
  local_88 = *(double *)(param_3 + 0x40);
  dStack_80 = *(double *)(param_3 + 0x48);
  if (*(char *)(param_1 + 0x4d6) == '\x01') {
    local_78 = 0.0;
    if ((9.999999747378752e-05 < ABS(local_88)) || (9.999999747378752e-05 < ABS(dStack_80))) {
      dVar12 = local_88 * local_88 + dStack_80 * dStack_80;
      if (9.99999993922529e-09 < dVar12) {
        local_78 = 1.0 / SQRT(dVar12);
        local_88 = local_88 * local_78;
        dStack_80 = dStack_80 * local_78;
        local_78 = local_78 * 0.0;
      }
    }
    else {
      local_78 = *(double *)(param_3 + 0x50);
      local_88 = *(double *)(param_3 + 0x40);
      dStack_80 = *(double *)(param_3 + 0x48);
    }
  }
  if ((*(byte *)(param_1 + 0x36c) & 1) == 0) {
    local_98 = *(double *)(param_1 + 0x138);
    local_a8 = *(double *)(param_1 + 0x128);
    uStack_a0 = *(double *)(param_1 + 0x130);
    cVar8 = FUN_1415100ba(param_3);
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x4c8) + 0xe10);
    if (lVar3 == 0) {
      FUN_143e0e200(param_1,&local_c0,param_3,&local_88);
      local_98 = local_b0;
      local_a8 = (double)CONCAT44(uStack_bc,local_c0);
      uStack_a0 = (double)CONCAT44(uStack_b4,uStack_b8);
    }
    else {
      if ((cVar8 == '\x01') && (*(char *)(lVar3 + 0x13c) != '\0')) {
        fVar9 = *(float *)(lVar3 + 0x140);
        if ((fVar9 == 0.0) && (!NAN(fVar9))) {
          fVar9 = (float)SQRT(local_98 * local_98 + local_a8 * local_a8 + uStack_a0 * uStack_a0);
        }
        fVar1 = *(float *)(param_1 + 0x1b0);
        if (*(char *)(lVar3 + 0x13d) != '\0') {
          fVar9 = fVar9 * *(float *)(param_1 + 0x4f4);
        }
        *param_2 = 0.0;
        param_2[1] = 0.0;
        param_2[2] = (double)(fVar1 * fVar9);
        goto LAB_14048f17a;
      }
      if ((*(byte *)(lVar3 + 0x138) & 2) == 0) {
        FUN_143e0e200(param_1,&local_c0,param_3,&local_88);
        local_a8 = (double)CONCAT44(uStack_bc,local_c0);
        uStack_a0 = (double)CONCAT44(uStack_b4,uStack_b8);
      }
      else {
        local_e8 = *(undefined4 *)(param_1 + 0x1b0);
        local_e0 = &local_88;
        FUN_148936eb8(&local_c0,&local_a8,param_3,*(undefined4 *)(param_1 + 0x1b4));
        local_98 = local_b0;
        local_d8 = local_c0;
        uStack_d4 = uStack_bc;
        uStack_d0 = uStack_b8;
        uStack_cc = uStack_b4;
        local_c8 = local_b0;
        FUN_1401149ea(param_1,&local_c0);
        local_a8 = (double)CONCAT44(uStack_bc,local_c0);
        uStack_a0 = (double)CONCAT44(uStack_b4,uStack_b8);
      }
      local_98 = local_b0;
      if ((cVar8 == '\x01') && (*(char *)(lVar3 + 0x144) != '\0')) {
        local_e8 = *(undefined4 *)(param_1 + 0x4f4);
        FUN_148936b10(lVar3 + 0x144,&local_c0,&local_a8,&local_88);
        local_98 = local_b0;
        local_a8 = (double)CONCAT44(uStack_bc,local_c0);
        uStack_a0 = (double)CONCAT44(uStack_b4,uStack_b8);
      }
    }
    param_2[2] = local_98;
    *(undefined4 *)param_2 = (undefined4)local_a8;
    *(undefined4 *)((longlong)param_2 + 4) = local_a8._4_4_;
    *(undefined4 *)(param_2 + 1) = (undefined4)uStack_a0;
    *(undefined4 *)((longlong)param_2 + 0xc) = uStack_a0._4_4_;
  }
  else {
    dVar12 = *(double *)(param_1 + 0x128);
    dVar13 = *(double *)(param_1 + 0x130);
    dVar2 = *(double *)(param_1 + 0x138);
    dVar5 = dVar2 * local_78 + dVar12 * local_88 + dVar13 * dStack_80;
    dVar10 = dVar2 - local_78 * dVar5;
    dVar4 = dVar13 - dStack_80 * dVar5;
    dVar5 = dVar12 - dVar5 * local_88;
    dVar14 = dVar10 * dVar10 + dVar5 * dVar5 + dVar4 * dVar4;
    if (((dVar14 != 1.0) || (dVar11 = dVar10, dVar6 = dVar4, dVar7 = dVar5, NAN(dVar14))) &&
       (dVar11 = DAT_14c8464f0, dVar6 = DAT_14c8464e8, dVar7 = DAT_14c8464e0,
       9.99999993922529e-09 <= dVar14)) {
      dVar14 = 1.0 / SQRT(dVar14);
      dVar11 = dVar10 * dVar14;
      dVar6 = dVar4 * dVar14;
      dVar7 = dVar5 * dVar14;
    }
    dVar12 = (double)(float)SQRT(dVar2 * dVar2 + dVar12 * dVar12 + dVar13 * dVar13);
    fVar9 = 1.0 - *(float *)(param_1 + 0x1b4);
    if (1.0 <= fVar9) {
      fVar9 = 1.0;
    }
    if (fVar9 <= 0.0) {
      fVar9 = 0.0;
    }
    dVar13 = (double)fVar9;
    *param_2 = dVar7 * dVar12 * dVar13;
    param_2[1] = dVar6 * dVar12 * dVar13;
    param_2[2] = dVar11 * dVar12 * dVar13;
    *(byte *)(param_1 + 0x181) = *(byte *)(param_1 + 0x181) | 2;
  }
LAB_14048f17a:
  if ((local_70 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14048f1c2 FUN_14048f1c2 body=1390 status=ok
// SIG undefined FUN_14048f1c2(void)

void FUN_14048f1c2(longlong param_1,void *param_2,double *param_3,char param_4,byte *param_5)

{
  int *piVar1;
  longlong *plVar2;
  byte *pbVar3;
  byte bVar4;
  int iVar5;
  longlong lVar6;
  byte bVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  byte bVar11;
  longlong *plVar12;
  bool bVar13;
  float fVar14;
  float fVar15;
  undefined1 auStack_1a8 [32];
  undefined1 local_188;
  longlong *local_180;
  undefined4 local_178;
  longlong local_168;
  longlong *plStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined4 local_128;
  undefined8 local_118;
  undefined8 local_108;
  undefined8 local_d8;
  undefined8 local_c8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  float fStack_60;
  undefined4 uStack_5c;
  double local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  if (*(char *)(param_1 + 0x4d4) != '\x01') goto LAB_14048f272;
  lVar10 = *(longlong *)(param_1 + 0x4c8);
  if ((*(longlong *)(lVar10 + 0xf58) != 0) && (*(int *)(lVar10 + 0xf60) - 1U < 0xfffffffe)) {
    if ((*(longlong *)(param_1 + 0x4d8) == 0) || (0xfffffffd < *(int *)(param_1 + 0x4e0) - 1U)) {
      FUN_140bd7c84(lVar10,&local_168,lVar10 + 0xf58);
      if ((*(longlong *)(param_1 + 0x4d8) != local_168) ||
         (*(int *)(param_1 + 0x4e0) != (int)plStack_160)) {
        *(longlong *)(param_1 + 0x4d8) = local_168;
        *(int *)(param_1 + 0x4e0) = (int)plStack_160;
        *(undefined8 *)(param_1 + 0x4e8) = 0;
      }
    }
    lVar9 = FUN_1401f6e4a((longlong *)(param_1 + 0x4d8));
    lVar10 = *(longlong *)(param_1 + 0xb0);
    if (lVar10 == 0) {
      lVar10 = FUN_1448abda6(param_1);
    }
    if (((lVar10 != 0 && lVar9 != 0) &&
        ((double)*(float *)(param_1 + 0x4f0) <= *(double *)(lVar10 + 0x6d0))) &&
       (fVar14 = (float)(param_3[2] * param_3[2] + *param_3 * *param_3 + param_3[1] * param_3[1]),
       *(float *)(lVar9 + 0x1c8) * *(float *)(lVar9 + 0x1c8) <= fVar14)) {
      fVar15 = (float)*(double *)(lVar10 + 0x6d0);
      *(float *)(param_1 + 0x4f0) = fVar15;
      *(float *)(param_1 + 0x4f0) = fVar15 + *(float *)(lVar9 + 0x1cc);
      lVar10 = *(longlong *)(param_1 + 0xb0);
      if (lVar10 == 0) {
        lVar10 = FUN_1448abda6(param_1);
      }
      FUN_1407f7f84(&local_168,lVar10);
      if (plStack_160 != (longlong *)0x0) {
        iVar8 = (int)plStack_160[1];
        do {
          if (iVar8 == 0) {
            plVar12 = (longlong *)0x0;
            break;
          }
          LOCK();
          iVar5 = (int)plStack_160[1];
          bVar13 = iVar8 == iVar5;
          if (bVar13) {
            *(int *)(plStack_160 + 1) = iVar8 + 1;
            iVar5 = iVar8;
          }
          iVar8 = iVar5;
          UNLOCK();
          plVar12 = plStack_160;
        } while (!bVar13);
        LOCK();
        piVar1 = (int *)((longlong)plStack_160 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plStack_160 + 0x10))();
        }
        lVar10 = local_168;
        if (plVar12 != (longlong *)0x0) {
          if (local_168 != 0) {
            local_138 = 0;
            uStack_130 = 0;
            local_148 = 0;
            uStack_140 = 0;
            local_158 = 0;
            uStack_150 = 0;
            local_168 = 0;
            plStack_160 = (longlong *)0x0;
            local_128 = 0xc0;
            local_118 = 0;
            local_108 = 0;
            local_d8 = 0;
            local_c8 = 0;
            local_98 = 0;
            uStack_90 = 0;
            local_88 = 0;
            local_80 = 0x3ff0000000000000;
            local_78 = 0x3ff0000000000000;
            local_70 = 0x3ff0000000000000;
            local_68 = 0;
            lVar6 = *(longlong *)(param_1 + 0x4c8);
            uStack_64 = *(undefined4 *)(lVar6 + 0x74);
            fStack_60 = SQRT(fVar14);
            if (lVar6 != 0) {
              local_178 = 0;
              local_188 = 0;
              local_180 = &local_168;
              FUN_1408f2522(lVar10,lVar9,lVar6,param_2);
            }
            FUN_141466e9a(&local_168);
          }
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
      }
    }
  }
  iVar8 = *(int *)(param_1 + 0x364);
  iVar5 = *(int *)(param_1 + 0x4d0);
  if (param_4 == '\0') {
    if (iVar8 <= iVar5 && iVar8 != 0) goto LAB_14048f272;
    param_1 = param_1 + 0x2f0;
  }
  else {
    if (iVar5 < iVar8) {
      *(int *)(param_1 + 0x4d0) = iVar5 + 1;
      *(undefined1 *)(param_1 + 0x4d5) = 1;
      memcpy(&local_168,param_2,0x100);
      local_68 = *(undefined4 *)param_3;
      uStack_64 = *(undefined4 *)((longlong)param_3 + 4);
      fStack_60 = *(float *)(param_3 + 1);
      uStack_5c = *(undefined4 *)((longlong)param_3 + 0xc);
      local_58 = param_3[2];
      FUN_1447cd2ec(param_1 + 0x2e0,&local_168);
      lVar10 = *(longlong *)(*(longlong *)(param_1 + 0x4c8) + 0xe10);
      bVar11 = *(byte *)(lVar10 + 0x174) >> 1;
      if (*(int *)(param_1 + 0x4d0) == *(int *)(param_1 + 0x364)) {
        *(byte *)(param_1 + 0x180) = *(byte *)(param_1 + 0x180) & 0xfb;
        *(undefined1 *)(param_1 + 0x4d4) = 0;
        *param_5 = *(byte *)(lVar10 + 0x174) & 1;
        bVar4 = *(byte *)(lVar10 + 0x174);
        fVar14 = *(float *)(param_1 + 0x1b4);
        if (fVar14 <= 0.75) {
          fVar14 = 0.75;
        }
        *(float *)(param_1 + 0x1b4) = fVar14;
        memcpy(&local_168,param_2,0x100);
        FUN_1447cd2ec(param_1 + 0x300,&local_168);
        bVar7 = *(byte *)(lVar10 + 0x174);
        if ((bVar7 & 0x10) != 0) {
          pbVar3 = (byte *)(*(longlong *)(param_1 + 0x4c8) + 0xed8);
          *pbVar3 = *pbVar3 | 0x10;
          bVar7 = *(byte *)(lVar10 + 0x174);
        }
        if ((bVar7 & 0x20) != 0) {
          pbVar3 = (byte *)(*(longlong *)(param_1 + 0x4c8) + 0xed8);
          *pbVar3 = *pbVar3 | 0x20;
          bVar7 = *(byte *)(lVar10 + 0x174);
        }
        if ((bVar7 & 0x40) != 0) {
          pbVar3 = (byte *)(*(longlong *)(param_1 + 0x4c8) + 0xed8);
          *pbVar3 = *pbVar3 | 0x40;
          bVar7 = *(byte *)(lVar10 + 0x174);
        }
        if ((bVar7 & 0x88) != 0) {
          pbVar3 = (byte *)(*(longlong *)(param_1 + 0x4c8) + 0xed8);
          *pbVar3 = *pbVar3 | 8;
          bVar7 = *(byte *)(lVar10 + 0x174);
        }
        bVar11 = (bVar4 >> 2 | bVar11) & 1;
        if (((bVar7 & 8) != 0) && (bVar11 == 0)) {
          (**(code **)(**(longlong **)(param_1 + 0x4c8) + 0x5c8))(*(longlong **)(param_1 + 0x4c8),0)
          ;
          goto LAB_14048f272;
        }
      }
      if (((bVar11 & 1) != 0) &&
         (((plVar12 = *(longlong **)(param_1 + 0x4c8), (char)plVar12[0x2f] == '\x03' ||
           ((*(byte *)(plVar12 + 0xc) & 1) != 0)) ||
          ((*(byte *)((longlong)plVar12 + 0x61) & 1) != 0)))) {
        *(undefined1 *)((longlong)plVar12 + 0x1152) = 0;
        (**(code **)(*plVar12 + 0x6c0))();
      }
      goto LAB_14048f272;
    }
    if (iVar8 != 0) goto LAB_14048f272;
    param_1 = param_1 + 0x2e0;
  }
  memcpy(&local_168,param_2,0x100);
  local_68 = *(undefined4 *)param_3;
  uStack_64 = *(undefined4 *)((longlong)param_3 + 4);
  fStack_60 = *(float *)(param_3 + 1);
  uStack_5c = *(undefined4 *)((longlong)param_3 + 0xc);
  local_58 = param_3[2];
  FUN_1447cd2ec(param_1,&local_168);
LAB_14048f272:
  if ((local_50 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14048f732 FUN_14048f732 body=982 status=ok
// SIG undefined FUN_14048f732(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14048f732(longlong param_1)

{
  double dVar1;
  double dVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined8 uVar5;
  int iVar6;
  double *pdVar7;
  double dVar8;
  undefined4 uVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  double dVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  double dVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  float fVar28;
  undefined1 auVar29 [16];
  undefined1 auStack_f8 [32];
  undefined1 local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  double dStack_b0;
  double local_a8;
  double dStack_a0;
  double local_98;
  double dStack_90;
  double local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar12 = *(longlong *)(param_1 + 0x110);
  lVar11 = param_1;
  if (lVar12 != 0) {
    lVar11 = *(longlong *)(param_1 + 0x138);
    *(longlong *)(lVar12 + 0x1f0) = lVar11;
    uVar5 = *(undefined8 *)(param_1 + 0x130);
    *(undefined8 *)(lVar12 + 0x1e0) = *(undefined8 *)(param_1 + 0x128);
    *(undefined8 *)(lVar12 + 0x1e8) = uVar5;
  }
  uVar9 = (undefined4)lVar11;
  if (((*(byte *)(param_1 + 0x358) & 2) != 0) &&
     (lVar12 = *(longlong *)(param_1 + 0x110), lVar12 != 0)) {
    dVar8 = *(double *)(param_1 + 0xb0);
    if (dVar8 == 0.0) {
      lVar12 = param_1;
      dVar8 = (double)FUN_1448abda6();
      uVar9 = (undefined4)lVar12;
      lVar12 = *(longlong *)(param_1 + 0x110);
    }
    fVar28 = *(float *)((longlong)dVar8 + 0x6f4);
    dVar1 = *(double *)(lVar12 + 0x240);
    dVar2 = *(double *)(lVar12 + 0x248);
    dVar15 = *(double *)(lVar12 + 0x250);
    dVar25 = *(double *)(lVar12 + 600);
    pdVar7 = *(double **)(lVar12 + 0x228);
    local_b8 = dVar1;
    dStack_b0 = dVar2;
    local_a8 = dVar15;
    dStack_a0 = dVar25;
    if (pdVar7 == (double *)0x0) {
      uVar9 = 0x40;
      pdVar7 = (double *)FUN_14001cc68(0x40,0x10);
      dVar8 = DAT_14c8463d8;
      *pdVar7 = DAT_14c8463d0;
      pdVar7[1] = dVar8;
      dVar8 = DAT_14c8463e8;
      pdVar7[2] = DAT_14c8463e0;
      pdVar7[3] = dVar8;
      dVar8 = DAT_14c846500;
      pdVar7[4] = DAT_14c8464f8;
      pdVar7[5] = dVar8;
      dVar8 = DAT_14c846508;
      pdVar7[6] = DAT_14c846508;
      *(double **)(lVar12 + 0x228) = pdVar7;
    }
    auVar22._8_4_ = (int)-(ulonglong)(dVar2 != pdVar7[1]);
    auVar22._0_8_ = -(ulonglong)(dVar1 != *pdVar7);
    auVar22._12_4_ = (int)(-(ulonglong)(dVar2 != pdVar7[1]) >> 0x20);
    iVar6 = movmskpd(SUB84(dVar8,0),auVar22);
    auVar23._8_4_ = (int)-(ulonglong)(dVar25 != pdVar7[3]);
    auVar23._0_8_ = -(ulonglong)(dVar15 != pdVar7[2]);
    auVar23._12_4_ = (int)(-(ulonglong)(dVar25 != pdVar7[3]) >> 0x20);
    uVar10 = movmskpd(uVar9,auVar23);
    if ((uVar10 & 0x3fffffff) != 0 || iVar6 != 0) {
      pdVar7[2] = local_a8;
      pdVar7[3] = dStack_a0;
      *pdVar7 = local_b8;
      pdVar7[1] = dStack_b0;
      FUN_1448052ee(&local_b8,&local_98);
      pdVar7[6] = local_88;
      pdVar7[4] = local_98;
      pdVar7[5] = dStack_90;
    }
    dVar8 = pdVar7[4];
    dVar1 = pdVar7[5];
    dVar2 = pdVar7[6];
    dVar25 = *(double *)(param_1 + 0x128);
    dVar15 = *(double *)(param_1 + 0x130);
    dVar13 = 0.0;
    if ((((dVar25 != 0.0) || (NAN(dVar25))) || (dVar15 != 0.0)) || (NAN(dVar15))) {
      dVar13 = atan2(dVar15,dVar25);
      dVar13 = dVar13 * 57.29577951308232;
      dVar25 = *(double *)(param_1 + 0x128);
      dVar15 = *(double *)(param_1 + 0x130);
    }
    dVar20 = SQRT(dVar25 * dVar25 + dVar15 * dVar15);
    dVar15 = *(double *)(param_1 + 0x138);
    dVar25 = 0.0;
    if (((dVar15 != 0.0) || (NAN(dVar15))) || ((dVar20 != 0.0 || (NAN(dVar20))))) {
      dVar25 = atan2(dVar15,dVar20);
      dVar25 = dVar25 * 57.29577951308232;
    }
    local_c0 = 0.0;
    dVar14 = 0.0 - dVar2;
    dVar13 = dVar13 - dVar1;
    dVar25 = dVar25 - dVar8;
    dVar15 = (double)DAT_1499387d0;
    dVar20 = DAT_1499387d0._8_8_;
    auVar21._8_8_ = dVar13;
    auVar21._0_8_ = dVar25;
    auVar22 = divpd(auVar21,_DAT_1499387d0);
    auVar16._0_8_ = dVar14 / 360.0;
    auVar16._8_8_ = 0;
    auVar23 = roundpd(auVar22,auVar22,3);
    auVar22 = roundpd(auVar16,auVar16,3);
    auVar29._0_8_ = dVar14 - auVar22._0_8_ * dVar15;
    auVar29._8_8_ = 0.0 - auVar22._8_8_ * dVar20;
    dVar25 = dVar25 - auVar23._0_8_ * dVar15;
    dVar13 = dVar13 - auVar23._8_8_ * dVar20;
    auVar26._0_8_ = dVar25 + dVar15;
    auVar26._8_8_ = dVar13 + dVar20;
    auVar27._0_8_ = dVar15 + auVar29._0_8_;
    auVar27._8_8_ = dVar20 + auVar29._8_8_;
    auVar17._8_8_ = -(ulonglong)(0.0 <= dVar13);
    auVar17._0_8_ = -(ulonglong)(0.0 <= dVar25);
    auVar3._8_8_ = dVar13;
    auVar3._0_8_ = dVar25;
    auVar22 = blendvpd(auVar26,auVar3,auVar17);
    auVar18._8_8_ = -(ulonglong)(0.0 <= auVar29._8_8_);
    auVar18._0_8_ = -(ulonglong)(0.0 <= auVar29._0_8_);
    auVar23 = blendvpd(auVar27,auVar29,auVar18);
    auVar24._0_8_ = auVar22._0_8_ + -360.0;
    auVar24._8_8_ = auVar22._8_8_ + -360.0;
    auVar19._8_8_ = -(ulonglong)(180.0 < auVar22._8_8_);
    auVar19._0_8_ = -(ulonglong)(180.0 < auVar22._0_8_);
    auVar22 = blendvpd(auVar22,auVar24,auVar19);
    if ((*(byte *)(param_1 + 0x180) & 2) == 0) {
      dVar15 = auVar23._0_8_;
      local_c0 = (double)(~-(ulonglong)(180.0 < dVar15) & (ulonglong)dVar15 |
                         (ulonglong)(dVar15 + -360.0) & -(ulonglong)(180.0 < dVar15));
    }
    else {
      auVar4._8_8_ = 0;
      auVar4._0_8_ = auVar22._8_8_;
      auVar22 = auVar4 << 0x40;
    }
    fVar28 = fVar28 * *(float *)(param_1 + 0x35c);
    dVar25 = (double)fVar28;
    dVar15 = (double)-fVar28;
    local_d0 = auVar22._0_8_;
    if (dVar25 <= auVar22._0_8_) {
      local_d0 = dVar25;
    }
    if (local_d0 <= dVar15) {
      local_d0 = dVar15;
    }
    local_c8 = auVar22._8_8_;
    if (dVar25 <= auVar22._8_8_) {
      local_c8 = dVar25;
    }
    if (local_c8 <= dVar15) {
      local_c8 = dVar15;
    }
    if (dVar25 <= local_c0) {
      local_c0 = dVar25;
    }
    if (local_c0 <= dVar15) {
      local_c0 = dVar15;
    }
    local_c0 = dVar2 + local_c0;
    local_c8 = dVar1 + local_c8;
    local_d0 = dVar8 + local_d0;
    local_d8 = 0;
    FUN_14020f670(*(undefined8 *)(param_1 + 0x110),&local_d0,0,0);
  }
  if ((local_80 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14048fb0a FUN_14048fb0a body=572 status=ok
// SIG undefined FUN_14048fb0a(void)

void FUN_14048fb0a(longlong *param_1)

{
  longlong *plVar1;
  undefined1 uVar2;
  char cVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_98 [40];
  longlong local_70;
  undefined1 local_68;
  byte local_67;
  undefined1 *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined1 local_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_38 [24];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar6 = param_1[0x16];
  *(undefined1 *)(param_1 + 0x16) = 0;
  if (*(char *)((longlong)param_1 + 0x79) == '\x01') {
    *(undefined1 *)(param_1 + 0x16) = 1;
  }
  else {
    lVar5 = (**(code **)(*(longlong *)param_1[0x1c] + 0xdc0))();
    if ((lVar5 != 0) &&
       (plVar1 = *(longlong **)(&DAT_00001ce8 + param_1[0x1c]), plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x588))(plVar1,&local_70,local_38);
      uVar2 = (**(code **)(*param_1 + 0x68))(param_1,&local_70);
      *(undefined1 *)(param_1 + 0x16) = uVar2;
    }
  }
  if (*(longlong **)(param_1[0x1c] + 0x1d8) != (longlong *)0x0) {
    cVar3 = (**(code **)(**(longlong **)(param_1[0x1c] + 0x1d8) + 0x700))();
    if ((cVar3 != '\0') && ((char)lVar6 != (char)param_1[0x16])) {
      lVar6 = (**(code **)(*(longlong *)param_1[0x1c] + 0xdc0))();
      if (lVar6 != 0) {
        lVar5 = (**(code **)(*param_1 + 0x150))(param_1);
        if (lVar5 != 0) {
          if ((char)param_1[0x16] == '\x01') {
            local_68 = 0xce;
            local_60 = &DAT_4030000000000000;
            local_58 = 0x4022000000000000;
            local_50 = 0x42c80000;
            local_4c = 4;
            local_48 = 0;
            uStack_40 = 0;
            cVar3 = FUN_140691b73();
            cVar4 = FUN_140691bc1();
            local_67 = cVar4 << 3 | cVar3 << 2;
            local_70 = FUN_1402d1dc0(lVar6 + 0xe0);
            if ((local_70 != 0) && (DAT_14c950c29 != '\0')) {
              FUN_1456cec3c(local_70);
            }
            lVar6 = lVar6 + 0x108;
          }
          else {
            local_68 = 0xce;
            local_60 = &DAT_4030000000000000;
            local_58 = 0x4022000000000000;
            local_50 = 0x42c80000;
            local_4c = 4;
            local_48 = 0;
            uStack_40 = 0;
            cVar3 = FUN_140691b73();
            cVar4 = FUN_140691bc1();
            local_67 = cVar4 << 3 | cVar3 << 2;
            local_70 = FUN_1402d1dc0(lVar6 + 0x148);
            if ((local_70 != 0) && (DAT_14c950c29 != '\0')) {
              FUN_1456cec3c(local_70);
            }
            lVar6 = lVar6 + 0x170;
          }
          FUN_140e99050(lVar5,&local_70,lVar6);
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14048fd48 FUN_14048fd48 body=307 status=ok
// SIG undefined FUN_14048fd48(void)

ulonglong FUN_14048fd48(longlong *param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_78 [47];
  byte local_49;
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = 0;
  uStack_40 = 0;
  (**(code **)(*param_1 + 0x90))(0,&local_48);
  lVar3 = local_48;
  local_49 = 0;
  lVar7 = (longlong)(int)uStack_40;
  if (lVar7 == 0) {
    uVar5 = 0;
  }
  else {
    lVar6 = 0;
    do {
      iVar1 = *(int *)(lVar3 + 4 + lVar6);
      if ((((iVar1 != 0) && (uVar2 = *(uint *)(lVar3 + lVar6), -1 < (int)uVar2)) &&
          ((int)uVar2 < DAT_14c9647dc)) &&
         (((plVar4 = (longlong *)
                     ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
           plVar4 != (longlong *)0x0 && ((int)plVar4[2] == iVar1)) &&
          (((*(uint *)(plVar4 + 1) & 0x10200000) == 0 && (*plVar4 != 0)))))) {
        (**(code **)(*param_1 + 0x140))(param_1,*plVar4,param_2,&local_49);
      }
      lVar6 = lVar6 + 8;
    } while (lVar7 * 8 != lVar6);
    uVar5 = CONCAT71((int7)((ulonglong)&local_49 >> 8),local_49);
    if ((local_49 & 1) != 0) goto LAB_14048fd9d;
  }
  if (*(char *)((longlong)param_1 + 0x79) == '\x01') {
    uVar5 = CONCAT71((int7)(uVar5 >> 8),*(double *)(param_2 + 0x10) <= (double)param_1[0x12]);
  }
LAB_14048fd9d:
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5 & 0xffffff01;
}



// FUNCTION 14048fe7c FUN_14048fe7c body=175 status=ok
// SIG undefined FUN_14048fe7c(void)

void FUN_14048fe7c(longlong *param_1,float param_2)

{
  longlong lVar1;
  undefined1 auStack_78 [40];
  double *local_50;
  double local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = *param_1;
  local_50 = &local_48;
  local_48 = (double)param_2;
  FUN_14048ff2c(&local_50,*(undefined8 *)(lVar1 + 0x40));
  if (ABS(param_2) <= 1e-08) {
    local_48 = 0.0;
  }
  else {
    local_48 = 1.0 / (double)param_2;
  }
  local_50 = &local_48;
  FUN_14049003c(&local_50,*(undefined8 *)(lVar1 + 0x40));
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14048ff2c FUN_14048ff2c body=271 status=ok
// SIG undefined FUN_14048ff2c(void)

void FUN_14048ff2c(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  
  if ((param_2 != 0) && (1 < *(byte *)(param_2 + 0x90))) {
    lVar5 = *(longlong *)(param_2 + 0x10);
    *(undefined8 *)(param_2 + 0x148) = *(undefined8 *)*param_1;
    *(byte *)(param_2 + 0x94) = *(byte *)(param_2 + 0x94) | 0x20;
    if ((lVar5 != 0) && (lVar6 = *(longlong *)(lVar5 + 8), lVar6 != 0)) {
      if (DAT_14c992a90 == '\x01') {
        AcquireSRWLockExclusive((PSRWLOCK)(lVar6 + 0x128));
        if (*(int *)(lVar5 + 0x18) == -1) {
          lVar7 = *(longlong *)(lVar6 + 0x98);
          uVar3 = *(uint *)(lVar5 + 0x1c);
          piVar2 = (int *)(lVar7 + 0x160 + (ulonglong)uVar3 * 4);
          *piVar2 = *piVar2 + 1;
          *(int *)(lVar7 + 0x194) = *(int *)(lVar7 + 0x194) + 1;
          lVar7 = lVar7 + (ulonglong)uVar3 * 0x10;
          iVar4 = *(int *)(lVar7 + 0x1a0);
          *(int *)(lVar5 + 0x18) = iVar4;
          *(uint *)(lVar7 + 0x1a0) = iVar4 + 1U;
          if (*(uint *)(lVar7 + 0x1a4) < iVar4 + 1U) {
            FUN_140431d5c((longlong *)(lVar7 + 0x198),iVar4);
          }
          lVar7 = *(longlong *)(lVar7 + 0x198);
          lVar8 = (longlong)iVar4 * 0x20;
          *(longlong *)(lVar7 + lVar8) = lVar5;
          *(undefined4 *)(lVar7 + 8 + lVar8) = 0;
          puVar1 = (undefined8 *)(lVar7 + 0x10 + lVar8);
          *puVar1 = 0;
          puVar1[1] = 0;
        }
                    /* WARNING: Could not recover jumptable at 0x00014048ffaa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        ReleaseSRWLockExclusive((PSRWLOCK)(lVar6 + 0x128));
        return;
      }
      FUN_144aa3818(*(longlong *)(lVar6 + 0x98) + 0x160,lVar5);
      return;
    }
  }
  return;
}



// FUNCTION 14049003c FUN_14049003c body=271 status=ok
// SIG undefined FUN_14049003c(void)

void FUN_14049003c(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  
  if ((param_2 != 0) && (1 < *(byte *)(param_2 + 0x90))) {
    lVar5 = *(longlong *)(param_2 + 0x10);
    *(undefined8 *)(param_2 + 0x150) = *(undefined8 *)*param_1;
    *(byte *)(param_2 + 0x94) = *(byte *)(param_2 + 0x94) | 0x20;
    if ((lVar5 != 0) && (lVar6 = *(longlong *)(lVar5 + 8), lVar6 != 0)) {
      if (DAT_14c992a90 == '\x01') {
        AcquireSRWLockExclusive((PSRWLOCK)(lVar6 + 0x128));
        if (*(int *)(lVar5 + 0x18) == -1) {
          lVar7 = *(longlong *)(lVar6 + 0x98);
          uVar3 = *(uint *)(lVar5 + 0x1c);
          piVar2 = (int *)(lVar7 + 0x160 + (ulonglong)uVar3 * 4);
          *piVar2 = *piVar2 + 1;
          *(int *)(lVar7 + 0x194) = *(int *)(lVar7 + 0x194) + 1;
          lVar7 = lVar7 + (ulonglong)uVar3 * 0x10;
          iVar4 = *(int *)(lVar7 + 0x1a0);
          *(int *)(lVar5 + 0x18) = iVar4;
          *(uint *)(lVar7 + 0x1a0) = iVar4 + 1U;
          if (*(uint *)(lVar7 + 0x1a4) < iVar4 + 1U) {
            FUN_140431d5c((longlong *)(lVar7 + 0x198),iVar4);
          }
          lVar7 = *(longlong *)(lVar7 + 0x198);
          lVar8 = (longlong)iVar4 * 0x20;
          *(longlong *)(lVar7 + lVar8) = lVar5;
          *(undefined4 *)(lVar7 + 8 + lVar8) = 0;
          puVar1 = (undefined8 *)(lVar7 + 0x10 + lVar8);
          *puVar1 = 0;
          puVar1[1] = 0;
        }
                    /* WARNING: Could not recover jumptable at 0x0001404900ba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        ReleaseSRWLockExclusive((PSRWLOCK)(lVar6 + 0x128));
        return;
      }
      FUN_144aa3818(*(longlong *)(lVar6 + 0x98) + 0x160,lVar5);
      return;
    }
  }
  return;
}



// FUNCTION 14049014b FUN_14049014b body=88 status=ok
// SIG undefined FUN_14049014b(void)

longlong * FUN_14049014b(longlong *param_1,longlong param_2)

{
  int iVar1;
  
  (**(code **)(*param_1 + 0x138))();
  (**(code **)(*param_1 + 0x160))(param_1,param_2 + 8);
  if (((*(byte *)(param_1 + 5) & 1) != 0) &&
     (iVar1 = FUN_1448332aa(param_1,&DAT_149e3cb60), iVar1 < 10)) {
    return param_1;
  }
  FUN_1404901a3(param_1,param_2 + 0x18);
  return param_1;
}



// FUNCTION 1404901a3 FUN_1404901a3 body=346 status=ok
// SIG undefined FUN_1404901a3(void)

longlong * FUN_1404901a3(longlong *param_1,byte *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  longlong lVar3;
  undefined1 auStack_48 [36];
  uint local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  piVar1 = *(int **)param_1[1];
  if ((int *)((undefined8 *)param_1[1])[1] < piVar1 + 1) {
    local_24 = (uint)*param_2;
    (**(code **)(*param_1 + 0x170))(param_1,&local_24,4);
    if (1 < local_24) {
      FUN_14572541c(param_1);
    }
    *param_2 = local_24 != 0;
  }
  else {
    *param_2 = *piVar1 != 0;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  piVar1 = *(int **)param_1[1];
  if ((int *)((undefined8 *)param_1[1])[1] < piVar1 + 1) {
    local_24 = (uint)param_2[1];
    (**(code **)(*param_1 + 0x170))(param_1,&local_24,4);
    if (1 < local_24) {
      FUN_14572541c(param_1);
    }
    param_2[1] = local_24 != 0;
  }
  else {
    param_2[1] = *piVar1 != 0;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  lVar3 = 0;
  do {
    puVar2 = *(undefined4 **)param_1[1];
    if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar2 + 1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,param_2 + lVar3 + 4,4);
      }
      else {
        FUN_14572512c(param_1);
      }
    }
    else {
      *(undefined4 *)(param_2 + lVar3 + 4) = *puVar2;
      *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
    }
    lVar3 = lVar3 + 4;
  } while (lVar3 != 0x10);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1404902fe FUN_1404902fe body=25 status=ok
// SIG undefined FUN_1404902fe(void)

undefined8
FUN_1404902fe(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  FUN_140490318(param_1,param_2,param_4);
  return param_2;
}



// FUNCTION 140490318 FUN_140490318 body=378 status=ok
// SIG undefined FUN_140490318(void)

void FUN_140490318(longlong param_1,double *param_2,int param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  if (param_3 != -1) {
    lVar3 = (longlong)param_3;
    if (*(char *)(param_1 + 0x80) == '\x01') {
      lVar4 = *(longlong *)(param_1 + 0x48);
      lVar1 = *(longlong *)(param_1 + 0x60);
      uVar5 = (ulonglong)*(int *)(lVar1 + lVar3 * 0xc);
      uVar6 = (ulonglong)*(int *)(lVar1 + 4 + lVar3 * 0xc);
      uVar2 = (ulonglong)*(int *)(lVar1 + 8 + lVar3 * 0xc);
    }
    else {
      lVar4 = *(longlong *)(param_1 + 0x48);
      lVar1 = *(longlong *)(param_1 + 0x70);
      uVar5 = (ulonglong)*(ushort *)(lVar1 + lVar3 * 6);
      uVar6 = (ulonglong)*(ushort *)(lVar1 + 2 + lVar3 * 6);
      uVar2 = (ulonglong)*(ushort *)(lVar1 + 4 + lVar3 * 6);
    }
    fVar11 = *(float *)(lVar4 + 8 + uVar5 * 0xc);
    fVar10 = *(float *)(lVar4 + 8 + uVar6 * 0xc) - fVar11;
    fVar12 = *(float *)(lVar4 + uVar5 * 0xc);
    fVar13 = *(float *)(lVar4 + 4 + uVar5 * 0xc);
    fVar9 = *(float *)(lVar4 + 4 + uVar6 * 0xc) - fVar13;
    fVar7 = *(float *)(lVar4 + uVar6 * 0xc) - fVar12;
    fVar11 = *(float *)(lVar4 + 8 + uVar2 * 0xc) - fVar11;
    fVar13 = *(float *)(lVar4 + 4 + uVar2 * 0xc) - fVar13;
    fVar12 = *(float *)(lVar4 + uVar2 * 0xc) - fVar12;
    fVar8 = fVar7 * fVar13 - fVar12 * fVar9;
    fVar12 = fVar10 * fVar12 - fVar11 * fVar7;
    fVar11 = fVar9 * fVar11 - fVar13 * fVar10;
    fVar13 = fVar8 * fVar8 + fVar11 * fVar11 + fVar12 * fVar12;
    if ((1e-08 <= fVar13) && (fVar13 = SQRT(fVar13), 1e-08 <= fVar13)) {
      *param_2 = (double)(fVar11 / fVar13);
      param_2[1] = (double)(fVar12 / fVar13);
      param_2[2] = (double)(fVar8 / fVar13);
      return;
    }
  }
  *param_2 = 0.0;
  param_2[1] = 0.0;
  param_2[2] = 1.0;
  return;
}



// FUNCTION 140490492 FUN_140490492 body=87 status=ok
// SIG undefined FUN_140490492(void)

void FUN_140490492(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  if ((int)uVar1 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar1);
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar1) {
      uVar3 = uVar1;
    }
  }
  else {
    uVar3 = uVar1 + (int)((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
  }
  uVar2 = 0x7fffffff;
  if ((int)uVar1 <= (int)uVar3) {
    uVar2 = uVar3;
  }
  *(uint *)(param_1 + 0xc) = uVar2;
  FUN_1404904ea();
  return;
}



// FUNCTION 1404904ea FUN_1404904ea body=378 status=ok
// SIG undefined FUN_1404904ea(void)

void FUN_1404904ea(undefined8 *param_1,int param_2,int param_3)

{
  longlong lVar1;
  ulonglong *puVar2;
  uint uVar3;
  DWORD DVar4;
  DWORD dwTlsIndex;
  DWORD DVar5;
  LPVOID lpTlsValue;
  void *_Dst;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  bool bVar9;
  undefined1 auStack_78 [32];
  void *local_58;
  undefined1 local_49;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_3 != 0) {
    if (param_3 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_146815189(param_3,0x18);
    }
    local_58 = (void *)*param_1;
    dwTlsIndex = DAT_14c7585d0;
    if (DAT_14c7585d0 == 0xffffffff) {
      dwTlsIndex = TlsAlloc();
      DVar5 = 0xffffffff;
      LOCK();
      bVar9 = DAT_14c7585d0 != 0xffffffff;
      DVar4 = dwTlsIndex;
      if (bVar9) {
        DVar5 = DAT_14c7585d0;
        DVar4 = DAT_14c7585d0;
      }
      DAT_14c7585d0 = DVar4;
      UNLOCK();
      if (bVar9) {
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
    uVar3 = param_3 * 0x18;
    uVar7 = (ulonglong)(uVar3 < 0x10) << 3 | 0xfffffffffffffff0;
    uVar6 = (uint)(uVar3 >= 0x10) * 8;
    lVar1 = (ulonglong)uVar6 + 7;
    _Dst = (void *)(*(longlong *)((longlong)lpTlsValue + 0x10) + lVar1 & uVar7);
    uVar8 = (longlong)_Dst + (longlong)(int)uVar3;
    if (*(ulonglong *)((longlong)lpTlsValue + 0x18) < uVar8) {
      FUN_140023dd8(puVar2,uVar6 + 8 + uVar3);
      _Dst = (void *)(lVar1 + *puVar2 & uVar7);
      uVar8 = (longlong)(int)uVar3 + (longlong)_Dst;
    }
    *puVar2 = uVar8;
    *param_1 = _Dst;
    if (param_2 != 0 && local_58 != (void *)0x0) {
      if (param_3 < param_2) {
        param_2 = param_3;
      }
      memcpy(_Dst,local_58,(longlong)param_2 * 0x18);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140490666 FUN_140490666 body=1586 status=ok
// SIG undefined FUN_140490666(void)

/* WARNING: Type propagation algorithm not settling */

ulonglong FUN_140490666(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  char cVar5;
  uint uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  longlong *unaff_RBX;
  longlong *plVar13;
  undefined1 auStack_128 [32];
  longlong local_108;
  longlong *plStack_100;
  longlong local_f8;
  longlong local_e8;
  longlong lStack_e0;
  longlong local_d8;
  longlong local_d0 [8];
  byte local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  byte local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  lVar11 = *(longlong *)(param_1 + 0x30);
  if (lVar11 == 0) {
    uVar7 = FUN_140490c9a();
    lVar11 = FUN_14477b664(uVar7);
    *(longlong *)(param_1 + 0x30) = lVar11;
  }
  plVar10 = (longlong *)(param_1 + 0x28);
  plVar1 = (longlong *)(param_1 + 0x38);
  if (*(longlong *)(param_1 + 0x38) == 0) {
    if ((lVar11 != 0) && (*plVar10 != 0)) {
      unaff_RBX = *(longlong **)(lVar11 + 0xb8);
      plVar13 = plVar1;
      if ((unaff_RBX == (longlong *)0x0) ||
         (cVar4 = (**(code **)(*unaff_RBX + 0x108))(unaff_RBX), cVar4 == '\0')) {
LAB_140490c70:
        *plVar13 = 0;
      }
      else {
        uVar7 = (**(code **)(*unaff_RBX + 0x110))(unaff_RBX);
        lVar11 = FUN_144aff482(uVar7,plVar10);
        *plVar1 = lVar11;
        if (lVar11 != 0) goto LAB_1404906b1;
      }
    }
  }
  else {
LAB_1404906b1:
    lVar11 = *(longlong *)(param_1 + 0x48);
    if (lVar11 == 0) {
      uVar7 = FUN_140490c9a();
      lVar11 = FUN_14477b664(uVar7);
      *(longlong *)(param_1 + 0x48) = lVar11;
    }
    unaff_RBX = (longlong *)(param_1 + 0x40);
    plVar13 = (longlong *)(param_1 + 0x50);
    if (*(longlong *)(param_1 + 0x50) == 0) {
      if ((lVar11 != 0) && (*unaff_RBX != 0)) {
        plVar2 = *(longlong **)(lVar11 + 0xb8);
        if ((plVar2 == (longlong *)0x0) ||
           (cVar4 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar4 == '\0')) goto LAB_140490c70;
        uVar7 = (**(code **)(*plVar2 + 0x110))(plVar2);
        lVar11 = FUN_144aff482(uVar7,unaff_RBX);
        *plVar13 = lVar11;
        if (lVar11 != 0) goto LAB_1404906d1;
      }
    }
    else {
LAB_1404906d1:
      lVar11 = *(longlong *)(param_1 + 0x30);
      if (lVar11 == 0) {
        uVar7 = FUN_140490c9a();
        lVar11 = FUN_14477b664(uVar7);
        *(longlong *)(param_1 + 0x30) = lVar11;
      }
      lVar12 = *plVar1;
      if (((lVar12 == 0) && (lVar12 = 0, lVar11 != 0)) && (*plVar10 != 0)) {
        plVar2 = *(longlong **)(lVar11 + 0xb8);
        if ((plVar2 == (longlong *)0x0) ||
           (cVar4 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar4 == '\0')) {
          lVar12 = 0;
        }
        else {
          uVar7 = (**(code **)(*plVar2 + 0x110))(plVar2);
          lVar12 = FUN_144aff482(uVar7,plVar10);
        }
        *plVar1 = lVar12;
      }
      cVar4 = *(char *)(lVar12 + 0x18);
      lVar11 = *(longlong *)(param_1 + 0x48);
      if (lVar11 == 0) {
        uVar7 = FUN_140490c9a();
        lVar11 = FUN_14477b664(uVar7);
        *(longlong *)(param_1 + 0x48) = lVar11;
      }
      lVar12 = *plVar13;
      if (((lVar12 == 0) && (lVar12 = 0, lVar11 != 0)) && (*unaff_RBX != 0)) {
        plVar2 = *(longlong **)(lVar11 + 0xb8);
        if ((plVar2 == (longlong *)0x0) ||
           (cVar5 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar5 == '\0')) {
          lVar12 = 0;
        }
        else {
          uVar7 = (**(code **)(*plVar2 + 0x110))(plVar2);
          lVar12 = FUN_144aff482(uVar7,unaff_RBX);
        }
        *plVar13 = lVar12;
      }
      if (cVar4 == *(char *)(lVar12 + 0x18)) {
        local_50 = 0;
        local_88 = 0;
        uStack_80 = 0;
        local_78 = 0;
        local_90 = 0;
        local_d0[1] = 0;
        local_d0[2] = 0;
        local_d0[3] = 0;
        lVar11 = *(longlong *)(param_1 + 0x30);
        if (lVar11 == 0) {
          uVar7 = FUN_140490c9a();
          lVar11 = FUN_14477b664(uVar7);
          *(longlong *)(param_1 + 0x30) = lVar11;
        }
        lVar12 = *plVar1;
        if (((lVar12 == 0) && (lVar12 = 0, lVar11 != 0)) && (*plVar10 != 0)) {
          plVar2 = *(longlong **)(lVar11 + 0xb8);
          if ((plVar2 == (longlong *)0x0) ||
             (cVar4 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar4 == '\0')) {
            lVar12 = 0;
          }
          else {
            uVar7 = (**(code **)(*plVar2 + 0x110))(plVar2);
            lVar12 = FUN_144aff482(uVar7,plVar10);
          }
          *plVar1 = lVar12;
        }
        local_e8 = 0;
        lStack_e0 = 0;
        local_d8 = 0;
        uVar7 = FUN_140490c9a();
        lStack_e0 = FUN_14477b664(uVar7);
        lVar8 = FUN_140490c9a();
        uVar7 = FUN_140490c9a();
        FUN_1402d1bfa(&local_108,uVar7,lVar12);
        lVar11 = local_108;
        if (local_e8 != local_108) {
          local_d8 = 0;
        }
        local_e8 = local_108;
        lVar9 = FUN_140490c9a();
        if (lVar8 == 0) {
LAB_1404907e4:
          lVar9 = lVar8;
        }
        else if (lVar9 == 0) {
          lVar9 = 0;
        }
        else if ((*(int *)(lVar9 + 0x38) <= *(int *)(lVar8 + 0x38)) &&
                (*(longlong *)(*(longlong *)(lVar8 + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8)
                 == lVar9 + 0x30)) goto LAB_1404907e4;
        if (lStack_e0 != lVar9) {
          local_d8 = 0;
        }
        uVar7 = FUN_14477b664(lVar9);
        lStack_e0 = FUN_14477b664(uVar7);
        if ((lVar11 != 0) && (lStack_e0 != 0)) {
          local_d8 = lVar12;
        }
        cVar4 = FUN_140490d6e(param_2,&local_e8,&local_88);
        if (cVar4 == '\0') {
LAB_140490991:
          bVar3 = true;
        }
        else {
          lVar11 = *(longlong *)(param_1 + 0x48);
          if (lVar11 == 0) {
            uVar7 = FUN_140490c9a();
            lVar11 = FUN_14477b664(uVar7);
            *(longlong *)(param_1 + 0x48) = lVar11;
          }
          lVar12 = *plVar13;
          if (((lVar12 == 0) && (lVar12 = 0, lVar11 != 0)) && (*unaff_RBX != 0)) {
            plVar10 = *(longlong **)(lVar11 + 0xb8);
            if ((plVar10 == (longlong *)0x0) ||
               (cVar4 = (**(code **)(*plVar10 + 0x108))(plVar10), cVar4 == '\0')) {
              lVar12 = 0;
            }
            else {
              uVar7 = (**(code **)(*plVar10 + 0x110))(plVar10);
              lVar12 = FUN_144aff482(uVar7,unaff_RBX);
            }
            *plVar13 = lVar12;
          }
          local_108 = 0;
          plStack_100 = (longlong *)0x0;
          local_f8 = 0;
          uVar7 = FUN_140490c9a();
          plStack_100 = (longlong *)FUN_14477b664(uVar7);
          unaff_RBX = (longlong *)FUN_140490c9a();
          uVar7 = FUN_140490c9a();
          FUN_1402d1bfa(local_d0,uVar7,lVar12);
          if (local_108 != local_d0[0]) {
            local_f8 = 0;
          }
          local_108 = local_d0[0];
          plVar10 = (longlong *)FUN_140490c9a();
          if (unaff_RBX == (longlong *)0x0) {
LAB_1404908d5:
            plVar10 = unaff_RBX;
          }
          else if (plVar10 == (longlong *)0x0) {
            plVar10 = (longlong *)0x0;
          }
          else if (((int)plVar10[7] <= (int)unaff_RBX[7]) &&
                  (*(longlong **)(unaff_RBX[6] + (longlong)(int)plVar10[7] * 8) == plVar10 + 6))
          goto LAB_1404908d5;
          if (plStack_100 != plVar10) {
            local_f8 = 0;
          }
          uVar7 = FUN_14477b664(plVar10);
          plStack_100 = (longlong *)FUN_14477b664(uVar7);
          if ((local_d0[0] != 0) && (plStack_100 != (longlong *)0x0)) {
            local_f8 = lVar12;
          }
          cVar4 = FUN_140490d6e(param_2,&local_108,local_d0 + 1);
          if (cVar4 == '\0') goto LAB_140490991;
          uVar6 = FUN_140490cd4(&local_88,local_d0 + 1);
          unaff_RBX = (longlong *)((ulonglong)uVar6 ^ 1);
          bVar3 = false;
        }
        (*(code *)(&switchD_143c3d4dc::switchdataD_14aff4ad0)[local_90])();
        (*(code *)(&switchD_143c3d4dc::switchdataD_14aff4ad0)[local_50])();
        if (!bVar3) goto LAB_140490961;
      }
    }
  }
  unaff_RBX = (longlong *)CONCAT71((int7)((ulonglong)unaff_RBX >> 8),2);
LAB_140490961:
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return (ulonglong)unaff_RBX & 0xffffffff;
}



// FUNCTION 140490c9a FUN_140490c9a body=57 status=ok
// SIG undefined FUN_140490c9a(void)

void FUN_140490c9a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb570e8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb570e8 = FUN_140002ddd(FUN_14184714b,uVar1,L"GbxDialogParameterDef");
  }
  return;
}



// FUNCTION 140490cd4 FUN_140490cd4 body=154 status=ok
// SIG undefined FUN_140490cd4(void)

bool FUN_140490cd4(float *param_1,float *param_2)

{
  char cVar1;
  longlong lVar2;
  undefined1 uVar3;
  bool bVar4;
  
  cVar1 = *(char *)(param_1 + 0xe);
  if (cVar1 == *(char *)(param_2 + 0xe)) {
    if (cVar1 == '\x01') {
      lVar2 = *(longlong *)param_2;
      if ((lVar2 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar2);
      }
      bVar4 = *(longlong *)param_1 == lVar2;
    }
    else {
      bVar4 = false;
      switch(cVar1) {
      case '\0':
        uVar3 = FUN_14887b092(param_1);
        return (bool)uVar3;
      case '\x02':
        bVar4 = (bool)(-(*param_2 == *param_1) & 1);
        break;
      case '\x03':
        bVar4 = *(char *)param_1 == *(char *)param_2;
        break;
      case '\x04':
        uVar3 = FUN_14493b798(param_1);
        return (bool)uVar3;
      case '\x05':
        bVar4 = *(longlong *)param_1 == *(longlong *)param_2;
      }
    }
  }
  else {
    bVar4 = false;
  }
  return bVar4;
}



// FUNCTION 140490d6e FUN_140490d6e body=1202 status=ok
// SIG undefined FUN_140490d6e(void)

ulonglong FUN_140490d6e(longlong param_1,longlong *param_2,longlong *param_3)

{
  byte bVar1;
  longlong *plVar2;
  code *pcVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  char cVar9;
  int iVar10;
  int iVar11;
  undefined8 uVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  undefined **ppuVar17;
  longlong *plVar18;
  ulonglong uVar19;
  undefined1 auStack_138 [32];
  longlong local_118;
  longlong *local_110;
  longlong *local_108;
  longlong local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
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
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_138;
  lVar13 = param_2[1];
  if (lVar13 == 0) {
    uVar12 = FUN_140490c9a();
    lVar13 = FUN_14477b664(uVar12);
    param_2[1] = lVar13;
  }
  lVar14 = *param_2;
  if (param_2[2] == 0) {
    if (lVar13 == 0 || *param_2 == 0) goto LAB_1404911d8;
    plVar18 = *(longlong **)(lVar13 + 0xb8);
    if ((plVar18 == (longlong *)0x0) ||
       (cVar9 = (**(code **)(*plVar18 + 0x108))(plVar18), cVar9 == '\0')) {
      param_2[2] = 0;
      goto LAB_1404911d8;
    }
    uVar12 = (**(code **)(*plVar18 + 0x110))(plVar18);
    lVar13 = FUN_144aff482(uVar12,param_2);
    param_2[2] = lVar13;
    if (lVar13 == 0) goto LAB_1404911d8;
    lVar13 = param_2[1];
    lVar14 = *param_2;
  }
  local_118 = lVar14;
  uVar12 = FUN_14477b664(lVar13);
  local_100 = FUN_14477b664(uVar12);
  plVar18 = (longlong *)(param_1 + 0x18);
  if (*(longlong **)(param_1 + 0x2d8) != (longlong *)0x0) {
    plVar18 = *(longlong **)(param_1 + 0x2d8);
  }
  if ((longlong)*(int *)(param_1 + 0x2e0) != 0) {
    lVar13 = (longlong)*(int *)(param_1 + 0x2e0) * 0x58;
    local_110 = param_3;
    local_108 = param_2;
    do {
      if (plVar18[1] == 0) {
        uVar12 = FUN_140490c9a();
        lVar14 = FUN_14477b664(uVar12);
        plVar18[1] = lVar14;
      }
      lVar14 = local_100;
      if (local_100 == 0) {
        lVar14 = FUN_140490c9a(0);
      }
      lVar14 = FUN_14477b664(lVar14);
      iVar10 = 0;
      if ((lVar14 != 0) && (plVar2 = *(longlong **)(lVar14 + 0xb8), plVar2 != (longlong *)0x0)) {
        lVar16 = *plVar2;
        pcVar3 = *(code **)(lVar16 + 0x108);
        if (pcVar3 != (code *)&LAB_14478342e && pcVar3 != (code *)&LAB_144783422) {
          cVar9 = (*pcVar3)(plVar2);
          iVar10 = 0;
          if (cVar9 == '\0') goto LAB_140490eb0;
          lVar16 = *plVar2;
        }
        pcVar3 = *(code **)(lVar16 + 0x110);
        ppuVar17 = &PTR_PTR_14c763408;
        if ((pcVar3 != (code *)&LAB_144783426) &&
           (ppuVar17 = &PTR_PTR_14c75f798, pcVar3 != (code *)&LAB_144783432)) {
          ppuVar17 = (undefined **)(*pcVar3)(plVar2);
        }
        iVar10 = FUN_144aff48c(ppuVar17);
      }
LAB_140490eb0:
      lVar16 = *plVar18;
      lVar4 = plVar18[1];
      iVar11 = 0;
      if ((lVar4 != 0) &&
         (plVar2 = *(longlong **)(lVar4 + 0xb8), iVar11 = 0, plVar2 != (longlong *)0x0)) {
        lVar15 = *plVar2;
        pcVar3 = *(code **)(lVar15 + 0x108);
        if (pcVar3 != (code *)&LAB_14478342e && pcVar3 != (code *)&LAB_144783422) {
          cVar9 = (*pcVar3)(plVar2);
          if (cVar9 == '\0') goto LAB_140490f18;
          lVar15 = *plVar2;
        }
        pcVar3 = *(code **)(lVar15 + 0x110);
        ppuVar17 = &PTR_PTR_14c763408;
        if ((pcVar3 != (code *)&LAB_144783426) &&
           (ppuVar17 = &PTR_PTR_14c75f798, pcVar3 != (code *)&LAB_144783432)) {
          ppuVar17 = (undefined **)(*pcVar3)(plVar2);
        }
        iVar11 = FUN_144aff48c(ppuVar17);
      }
LAB_140490f18:
      plVar2 = local_108;
      if ((iVar11 == iVar10) && (lVar16 == local_118)) {
        if (lVar4 == lVar14) {
LAB_140491099:
          if (plVar18 != (longlong *)0x0) {
            lVar14 = local_108[1];
            if (lVar14 == 0) {
              uVar12 = FUN_140490c9a();
              lVar14 = FUN_14477b664(uVar12);
              plVar2[1] = lVar14;
            }
            lVar16 = plVar2[2];
            if (((lVar16 == 0) && (lVar16 = 0, lVar14 != 0)) && (*plVar2 != 0)) {
              plVar5 = *(longlong **)(lVar14 + 0xb8);
              if ((plVar5 == (longlong *)0x0) ||
                 (cVar9 = (**(code **)(*plVar5 + 0x108))(plVar5), cVar9 == '\0')) {
                lVar16 = 0;
              }
              else {
                uVar12 = (**(code **)(*plVar5 + 0x110))(plVar5);
                lVar16 = FUN_144aff482(uVar12,plVar2);
              }
              plVar2[2] = lVar16;
            }
            plVar2 = local_110;
            bVar1 = *(byte *)(lVar16 + 0x18);
            if (bVar1 == *(byte *)(plVar18 + 10)) {
              uVar19 = CONCAT71((int7)((ulonglong)lVar13 >> 8),1);
              if (plVar18 + 3 != local_110) {
                uStack_c0 = CONCAT71(uStack_c0._1_7_,bVar1);
                (*(code *)(&PTR_FUN_14b04c4f0)[bVar1])(&local_f8,plVar18 + 3);
                local_88 = (undefined4)local_c8;
                uStack_84 = local_c8._4_4_;
                uStack_80 = (undefined4)uStack_c0;
                uStack_7c = uStack_c0._4_4_;
                local_98 = (undefined4)local_d8;
                uStack_94 = local_d8._4_4_;
                uStack_90 = (undefined4)uStack_d0;
                uStack_8c = uStack_d0._4_4_;
                local_a8 = (undefined4)local_e8;
                uStack_a4 = local_e8._4_4_;
                uStack_a0 = (undefined4)uStack_e0;
                uStack_9c = uStack_e0._4_4_;
                local_b8 = (undefined4)local_f8;
                uStack_b4 = local_f8._4_4_;
                uStack_b0 = (undefined4)uStack_f0;
                uStack_ac = uStack_f0._4_4_;
                lVar13 = *plVar2;
                lVar14 = plVar2[1];
                lVar16 = plVar2[2];
                lVar4 = plVar2[3];
                lVar15 = plVar2[4];
                lVar6 = plVar2[5];
                lVar7 = plVar2[6];
                uVar8 = plVar2[7];
                *(undefined4 *)(plVar2 + 6) = (undefined4)local_c8;
                *(undefined4 *)((longlong)plVar2 + 0x34) = local_c8._4_4_;
                *(undefined4 *)(plVar2 + 7) = (undefined4)uStack_c0;
                *(undefined4 *)((longlong)plVar2 + 0x3c) = uStack_c0._4_4_;
                *(undefined4 *)(plVar2 + 4) = (undefined4)local_d8;
                *(undefined4 *)((longlong)plVar2 + 0x24) = local_d8._4_4_;
                *(undefined4 *)(plVar2 + 5) = (undefined4)uStack_d0;
                *(undefined4 *)((longlong)plVar2 + 0x2c) = uStack_d0._4_4_;
                *(undefined4 *)(plVar2 + 2) = (undefined4)local_e8;
                *(undefined4 *)((longlong)plVar2 + 0x14) = local_e8._4_4_;
                *(undefined4 *)(plVar2 + 3) = (undefined4)uStack_e0;
                *(undefined4 *)((longlong)plVar2 + 0x1c) = uStack_e0._4_4_;
                *(undefined4 *)plVar2 = (undefined4)local_f8;
                *(undefined4 *)((longlong)plVar2 + 4) = local_f8._4_4_;
                *(undefined4 *)(plVar2 + 1) = (undefined4)uStack_f0;
                *(undefined4 *)((longlong)plVar2 + 0xc) = uStack_f0._4_4_;
                local_f8 = lVar13;
                uStack_f0 = lVar14;
                local_e8 = lVar16;
                uStack_e0 = lVar4;
                local_d8 = lVar15;
                uStack_d0 = lVar6;
                local_c8 = lVar7;
                uStack_c0 = uVar8;
                (*(code *)(&switchD_143c3d4dc::switchdataD_14aff4ad0)[uVar8 & 0xff])(&local_f8);
              }
              goto LAB_1404911da;
            }
          }
          break;
        }
        if ((lVar14 != 0) && (lVar4 != 0)) {
          iVar10 = *(int *)(lVar14 + 0x38);
          iVar11 = *(int *)(lVar4 + 0x38);
          if (((iVar10 <= iVar11) &&
              (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar10 * 8) == lVar14 + 0x30))
             || ((iVar11 <= iVar10 &&
                 (*(longlong *)(*(longlong *)(lVar14 + 0x30) + (longlong)iVar11 * 8) == lVar4 + 0x30
                 )))) goto LAB_140491099;
        }
      }
      plVar18 = plVar18 + 0xb;
      lVar13 = lVar13 + -0x58;
    } while (lVar13 != 0);
  }
LAB_1404911d8:
  uVar19 = 0;
LAB_1404911da:
  if ((local_70 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar19 & 0xffffffff;
}



// FUNCTION 140491222 FUN_140491222 body=33 status=ok
// SIG undefined FUN_140491222(void)

void FUN_140491222(longlong param_1)

{
  FUN_1401b2056();
  FUN_140491244(param_1 + 0x408);
  return;
}



// FUNCTION 140491244 FUN_140491244 body=173 status=ok
// SIG undefined FUN_140491244(void)

void FUN_140491244(longlong param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong uVar6;
  
  if (((((*(int *)(param_1 + 0x74) != 0) && (uVar2 = *(uint *)(param_1 + 0x70), -1 < (int)uVar2)) &&
       ((int)uVar2 < DAT_14c9647dc)) &&
      ((plVar5 = (longlong *)
                 ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
       plVar5 != (longlong *)0x0 && ((int)plVar5[2] == *(int *)(param_1 + 0x74))))) &&
     (((*(uint *)(plVar5 + 1) & 0x10200000) == 0 && (lVar4 = *plVar5, lVar3 = lVar4, lVar4 != 0))))
  {
    while ((*(uint *)(lVar3 + 8) & 0x30) == 0) {
      plVar1 = (longlong *)(lVar3 + 0x20);
      lVar3 = *plVar1;
      if (*plVar1 == 0) {
        FUN_14069822a(param_1);
        lVar4 = FUN_1447210f0(lVar4);
        if ((lVar4 == 0) || (6 < *(byte *)(lVar4 + 0x152))) {
          uVar6 = 0;
        }
        else {
          uVar6 = CONCAT71((int7)((ulonglong)plVar5 >> 8),0x6a >> (*(byte *)(lVar4 + 0x152) & 0x1f))
          ;
        }
        FUN_1406965be(param_1,uVar6 & 0xffffffffffffff01);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1404912f2 FUN_1404912f2 body=1272 status=ok
// SIG undefined FUN_1404912f2(void)

void FUN_1404912f2(longlong param_1,ulonglong param_2)

{
  PSRWLOCK SRWLock;
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong lVar9;
  uint uVar10;
  undefined8 *puVar11;
  longlong lVar12;
  longlong *plVar13;
  int iVar14;
  ulonglong uVar15;
  int iVar16;
  longlong lVar17;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  wchar_t *local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  code **local_80;
  undefined1 *local_78;
  code *local_70;
  undefined8 local_60;
  PSRWLOCK local_58;
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  SRWLock = (PSRWLOCK)(param_1 + 8);
  AcquireSRWLockExclusive(SRWLock);
  if (*(int *)(param_1 + 0x14) == 0) {
LAB_1404916ca:
    plVar13 = (longlong *)0x0;
  }
  else {
    uVar10 = *(uint *)(param_1 + 0x10);
    plVar13 = (longlong *)0x0;
    if ((-1 < (int)uVar10) && ((int)uVar10 < DAT_14c9647dc)) {
      puVar11 = (undefined8 *)
                ((ulonglong)((uVar10 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8));
      if ((puVar11 == (undefined8 *)0x0) ||
         ((*(int *)(puVar11 + 2) != *(int *)(param_1 + 0x14) ||
          ((*(uint *)(puVar11 + 1) & 0x10200000) != 0)))) goto LAB_1404916ca;
      plVar13 = (longlong *)*puVar11;
    }
  }
  plVar7 = (longlong *)plVar13[0xcb];
  local_58 = SRWLock;
  if (plVar7 == (longlong *)0x0) {
    plVar7 = (longlong *)plVar13[0xcc];
    if ((DAT_14c950c29 == '\x01') && (plVar7 != (longlong *)0x0)) goto LAB_1404917b8;
    if (plVar7 != (longlong *)0x0) goto LAB_1404913a3;
  }
  else {
    if (DAT_14c950c29 == '\x01') {
LAB_1404917b8:
      FUN_1456cec3c(plVar7);
    }
LAB_1404913a3:
    if (DAT_14cb06da8 == 0) {
      local_80 = &local_50;
      local_50 = FUN_1449e2820;
      local_70 = FUN_14081d0ea;
      local_78 = &LAB_1464003b0;
      local_88 = &LAB_147d17bdf;
      local_90 = &LAB_1417edf22;
      local_98 = L"Engine";
      local_a0 = 0;
      local_a8 = 0x10000000;
      local_b0 = 8;
      local_b8 = CONCAT44(local_b8._4_4_,0x588);
      FUN_14081cfa3(L"/Script/Engine",L"SkeletalMesh",&DAT_14cb06da8,FUN_14640038e);
    }
    if ((*(int *)(DAT_14cb06da8 + 0x38) <= *(int *)(plVar7[2] + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(plVar7[2] + 0x30) + (longlong)*(int *)(DAT_14cb06da8 + 0x38) * 8) ==
        DAT_14cb06da8 + 0x30)) {
      uVar4 = (**(code **)(*plVar7 + 0x3c0))(plVar7);
      iVar16 = (int)uVar4;
      local_60 = CONCAT71((int7)((ulonglong)uVar4 >> 8),1);
      iVar14 = (int)param_2;
      goto LAB_1404913f5;
    }
  }
  local_60 = 0;
  iVar16 = 1;
  plVar7 = (longlong *)0x0;
  iVar14 = 0;
LAB_1404913f5:
  plVar1 = (longlong *)(param_1 + 0x68);
  iVar3 = *(int *)(param_1 + 0x70);
  if (iVar3 < iVar16) {
    *(int *)(param_1 + 0x70) = iVar16;
    if ((uint)(*(int *)(param_1 + 0x74) - iVar3) < (uint)(iVar16 - iVar3)) {
      FUN_140491a86(plVar1,iVar3);
    }
    FUN_1404917eb((longlong)iVar3 * 0x48 + *plVar1,iVar16 - iVar3);
  }
  else {
    if (iVar16 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar16);
    }
    if (iVar16 < iVar3) {
      FUN_14819e29a(plVar1,iVar16,iVar3 - iVar16);
      FUN_14819e2fc(plVar1);
    }
  }
  param_2 = param_2 >> 0x20;
  if ((param_2 & 3) != 0) {
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
  }
  lVar17 = (longlong)iVar14;
  if ((param_2 & 2) != 0) {
    piVar2 = (int *)(*(longlong *)(param_1 + 0x68) + lVar17 * 0x48);
    *piVar2 = *piVar2 + 1;
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
  }
  lVar12 = param_1 + 0x28;
  uVar10 = *(uint *)(param_1 + 0x1c);
  uVar5 = (ulonglong)(int)uVar10;
  if ((*(int *)(param_1 + 0x30 + uVar5 * 0x10) == 0) ||
     (*(int *)(param_1 + 0x50 + uVar5 * 0x10) == 0)) {
    FUN_1449bb7ea(param_1);
    uVar10 = *(uint *)(param_1 + 0x1c);
    uVar5 = (ulonglong)(int)uVar10;
  }
  uVar15 = (ulonglong)(int)(uVar10 ^ 1);
  if (*(int *)(param_1 + 0x30 + uVar15 * 0x10) != *(int *)(param_1 + 0x30 + uVar5 * 0x10)) {
    FUN_140491812(uVar15 * 0x10 + lVar12,uVar5 * 0x10 + lVar12);
    uVar5 = (ulonglong)*(int *)(param_1 + 0x1c);
    uVar15 = uVar5 ^ 1;
  }
  if (*(int *)(param_1 + 0x50 + uVar15 * 0x10) != *(int *)(param_1 + 0x50 + uVar5 * 0x10)) {
    FUN_14049186a(param_1 + uVar15 * 0x10 + 0x48,param_1 + uVar5 * 0x10 + 0x48);
  }
  if ((((param_2 & 2) != 0) &&
      ((char)local_60 == '\x01' &&
       *(int *)((longlong)*(int *)(param_1 + 0x1c) * 0x10 + 0x10 +
               lVar17 * 0x48 + *(longlong *)(param_1 + 0x68)) == 0)) &&
     (lVar6 = (**(code **)(*plVar7 + 800))(plVar7,iVar14), (*(byte *)(lVar6 + 0xd0) & 4) != 0)) {
    plVar7 = (longlong *)(**(code **)(*plVar13 + 0xa90))(plVar13);
    uVar4 = *(undefined8 *)(*plVar7 + lVar17 * 8);
    uVar8 = FUN_1417c143e(plVar13,iVar14,0);
    lVar9 = (longlong)*(int *)(param_1 + 0x1c) * 0x10;
    lVar6 = lVar17 * 0x48;
    local_b8 = uVar8;
    FUN_147d1b444(plVar13,lVar9 + *(longlong *)(param_1 + 0x68) + lVar6 + 8,lVar12 + lVar9,uVar4);
    lVar9 = (longlong)*(int *)(param_1 + 0x1c) * 0x10;
    local_b8 = uVar8;
    FUN_147d1ba60(plVar13,lVar9 + *(longlong *)(param_1 + 0x68) + lVar6 + 0x28,lVar12 + lVar9,uVar4)
    ;
    lVar12 = *(longlong *)(param_1 + 0x68);
    uVar5 = (ulonglong)*(int *)(param_1 + 0x1c);
    uVar15 = uVar5 ^ 1;
    lVar6 = lVar6 + lVar12;
    if (*(int *)(uVar15 * 0x10 + 0x10 + lVar6) != *(int *)(uVar5 * 0x10 + 0x10 + lVar6)) {
      FUN_140de4b5e(uVar15 * 0x10 + lVar6 + 8,uVar5 * 0x10 + lVar6 + 8);
      lVar12 = *(longlong *)(param_1 + 0x68);
      uVar5 = (ulonglong)*(int *)(param_1 + 0x1c);
      uVar15 = uVar5 ^ 1;
    }
    lVar12 = lVar12 + lVar17 * 0x48;
    if (*(int *)(uVar15 * 0x10 + 0x30 + lVar12) != *(int *)(uVar5 * 0x10 + 0x30 + lVar12)) {
      FUN_140de4b5e(uVar15 * 0x10 + lVar12 + 0x28,lVar12 + uVar5 * 0x10 + 0x28);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Could not recover jumptable at 0x0001404914cd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive(local_58);
  return;
}



// FUNCTION 1404917eb FUN_1404917eb body=38 status=ok
// SIG undefined FUN_1404917eb(void)

void FUN_1404917eb(undefined4 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0;
    *(undefined8 *)(param_1 + 2) = 0;
    *(undefined8 *)(param_1 + 4) = 0;
    *(undefined8 *)(param_1 + 6) = 0;
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)(param_1 + 10) = 0;
    *(undefined8 *)(param_1 + 0xc) = 0;
    *(undefined8 *)(param_1 + 0xe) = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    param_1 = param_1 + 0x12;
  }
  return;
}



// FUNCTION 140491812 FUN_140491812 body=88 status=ok
// SIG undefined FUN_140491812(void)

undefined8 * FUN_140491812(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1404918c4(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 6);
      }
    }
  }
  return param_1;
}



// FUNCTION 14049186a FUN_14049186a body=89 status=ok
// SIG undefined FUN_14049186a(void)

undefined8 * FUN_14049186a(undefined8 *param_1,undefined8 *param_2)

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
      FUN_14049199c(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0x30);
      }
    }
  }
  return param_1;
}



// FUNCTION 1404918c4 FUN_1404918c4 body=216 status=ok
// SIG undefined FUN_1404918c4(void)

void FUN_1404918c4(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar2 = (longlong)param_2 * 0x40;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar2 < 0x7ff1) {
          uVar2 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)
                                        [((longlong)param_2 & 0x3ffffffffffffffU) * 4]];
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
        uVar2 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar2,0x10);
      }
    }
    iVar1 = (int)(uVar2 >> 6);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar4 = iVar1;
    }
  }
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0x40,0x10);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14049199c FUN_14049199c body=233 status=ok
// SIG undefined FUN_14049199c(void)

void FUN_14049199c(longlong param_1,int param_2,int param_3)

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
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,0x10);
      }
    }
    iVar1 = (int)(uVar3 / 0x30);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar4 = iVar1;
    }
  }
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0x30,0x10);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 140491a86 FUN_140491a86 body=370 status=ok
// SIG undefined FUN_140491a86(void)

void FUN_140491a86(longlong param_1,int param_2)

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
  uVar5 = lVar4 * 0x48;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140491b0f;
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
LAB_140491b0f:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x48)) {
    uVar7 = uVar5 / 0x48 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x48,8);
  return;
}



// FUNCTION 140491bf8 FUN_140491bf8 body=231 status=ok
// SIG undefined FUN_140491bf8(void)

void FUN_140491bf8(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = (longlong)param_2 * 0x30;
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
    if (param_2 <= (int)(uVar1 / 0x30)) {
      uVar2 = uVar1 / 0x30 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x30,0x10);
  }
  return;
}



// FUNCTION 140491ce0 FUN_140491ce0 body=77 status=ok
// SIG undefined FUN_140491ce0(void)

void FUN_140491ce0(longlong param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 8) = param_2;
    if ((uint)(*(int *)(param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_140491d2e();
      return;
    }
  }
  else {
    if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(param_2);
    }
    if ((param_2 < iVar1) && (*(int *)(param_1 + 8) = param_2, param_3 == '\x01')) {
      FUN_146faaad4();
      return;
    }
  }
  return;
}



// FUNCTION 140491d2e FUN_140491d2e body=255 status=ok
// SIG undefined FUN_140491d2e(void)

void FUN_140491d2e(longlong param_1,int param_2)

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
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,0x10);
      }
    }
    uVar3 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 >> 6)) {
      uVar3 = uVar4 >> 6 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar3;
    FUN_1446f8d3c(param_1,param_2,uVar3,0x40,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 140491e34 FUN_140491e34 body=57 status=ok
// SIG undefined FUN_140491e34(void)

void FUN_140491e34(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb218b0 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb218b0 = FUN_140002ddd(FUN_146434487,uVar1,L"GbxBrainAspectSettings_Stance");
  }
  return;
}



// FUNCTION 140491e6e FUN_140491e6e body=403 status=ok
// SIG undefined FUN_140491e6e(void)

undefined4 *
FUN_140491e6e(undefined4 *param_1,longlong param_2,int *param_3,undefined8 param_4,
             undefined8 param_5,undefined4 param_6,undefined4 param_7,longlong param_8)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  bool bVar5;
  
  *param_1 = param_6;
  param_1[1] = param_7;
  *(undefined8 *)(param_1 + 0xc) = 0;
  param_1[0xe] = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 0xf) = 0xffffffff00000080;
  param_1[0x11] = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  param_1[0x16] = 0;
  FUN_140492002(param_1 + 4,param_4);
  *(undefined8 *)(param_1 + 0x20) = 0;
  param_1[0x22] = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x1a) = 0;
  *(undefined8 *)(param_1 + 0x23) = 0xffffffff00000080;
  param_1[0x25] = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  param_1[0x2a] = 0;
  FUN_140492002(param_1 + 0x18,param_5);
  *(undefined8 *)(param_1 + 0x2c) = 0;
  *(undefined8 *)(param_1 + 0x2e) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x32) = 0;
  iVar2 = 0;
  if (param_8 != 0) {
    uVar1 = *(uint *)(param_8 + 0xc);
    param_1[0x32] = uVar1;
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
  param_1[0x33] = iVar2;
  param_1[2] = *(int *)(param_2 + 0xa8) - *param_3;
  FUN_14049209c(param_3,param_2,param_1 + 0x2c);
  FUN_140492276(param_1);
  return param_1;
}



// FUNCTION 140492002 FUN_140492002 body=154 status=ok
// SIG undefined FUN_140492002(void)

longlong FUN_140492002(longlong param_1,longlong param_2)

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
    if (iVar2 == 0) goto LAB_140492057;
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
LAB_140492057:
  *(int *)(param_1 + 0x48) = iVar2;
  FUN_14049210c(param_1,param_2);
  return param_1;
}



// FUNCTION 14049209c FUN_14049209c body=112 status=ok
// SIG undefined FUN_14049209c(void)

void FUN_14049209c(longlong *param_1,longlong param_2,longlong *param_3)

{
  int iVar1;
  ulonglong uVar2;
  
  uVar2 = (*(longlong *)(param_2 + 0xa8) - *param_1) + 7U >> 3;
  iVar1 = (int)uVar2;
  if (0 < iVar1) {
    FUN_140393c76(param_3,uVar2 & 0xffffffff,1);
    *(undefined1 *)(*param_3 + (longlong)(iVar1 + -1)) = 0;
    FUN_1449bc9dc(*param_3,0,*(undefined8 *)(param_2 + 0x90),(int)*param_1,
                  *(int *)(param_2 + 0xa8) - (int)*param_1);
  }
  return;
}



// FUNCTION 14049210c FUN_14049210c body=361 status=ok
// SIG undefined FUN_14049210c(void)

undefined8 * FUN_14049210c(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 *_Src;
  ulonglong uVar5;
  undefined8 *_Dst;
  
  if (param_1 != param_2) {
    uVar3 = *(uint *)(param_2 + 1);
    uVar5 = (ulonglong)uVar3;
    if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar5);
    }
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(uint *)((longlong)param_1 + 0xc) != uVar3) {
      FUN_14474875a(param_1,uVar3);
    }
    param_1[6] = 0xffffffff;
    uVar2 = uVar3 + 0x1f & 0xffffffe0;
    *(undefined4 *)(param_1 + 5) = 0;
    if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar2) ||
       (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
      uVar4 = 0x80;
      if (0x80 < (int)uVar2) {
        uVar4 = uVar2;
      }
      *(uint *)((longlong)param_1 + 0x2c) = uVar4;
      FUN_1446efbd8(param_1 + 2,0);
    }
    iVar1 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar1 + uVar3;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < uVar3) {
      FUN_1446efaca(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    uVar3 = *(int *)(param_2 + 5) + 0x1fU & 0xffffffe0;
    *(undefined4 *)(param_1 + 5) = 0;
    if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar3) ||
       (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
      uVar2 = 0x80;
      if (0x80 < (int)uVar3) {
        uVar2 = uVar3;
      }
      *(uint *)((longlong)param_1 + 0x2c) = uVar2;
      FUN_1446efbd8(param_1 + 2,0);
    }
    iVar1 = *(int *)(param_2 + 5);
    *(int *)(param_1 + 5) = iVar1;
    if (iVar1 != 0) {
      _Src = param_2 + 2;
      if ((undefined8 *)param_2[4] != (undefined8 *)0x0) {
        _Src = (undefined8 *)param_2[4];
      }
      _Dst = param_1 + 2;
      if ((undefined8 *)param_1[4] != (undefined8 *)0x0) {
        _Dst = (undefined8 *)param_1[4];
      }
      memcpy(_Dst,_Src,(ulonglong)(iVar1 + 0x1fU >> 3 & 0xfffffffc));
    }
    if (uVar5 != 0) {
      memcpy((void *)*param_1,(void *)*param_2,uVar5 << 4);
    }
  }
  return param_1;
}



// FUNCTION 140492276 FUN_140492276 body=507 status=ok
// SIG undefined FUN_140492276(void)

void FUN_140492276(longlong param_1)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  longlong *plVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  
  if (((((DAT_14c75f435 == '\x01') && (*(int *)(param_1 + 0xcc) != 0)) &&
       (uVar4 = *(uint *)(param_1 + 200), -1 < (int)uVar4)) &&
      (((int)uVar4 < DAT_14c9647dc &&
       (plVar8 = (longlong *)
                 ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8)),
       plVar8 != (longlong *)0x0)))) &&
     (((int)plVar8[2] == *(int *)(param_1 + 0xcc) &&
      (((*(uint *)(plVar8 + 1) & 0x10200000) == 0 &&
       (plVar8 = (longlong *)*plVar8, plVar8 != (longlong *)0x0)))))) {
    iVar1 = *(int *)(param_1 + 0x38);
    if (iVar1 == 0) {
      uVar14 = 1;
      uVar15 = 0;
      iVar9 = 0;
      iVar11 = 0;
    }
    else {
      puVar3 = *(uint **)(param_1 + 0x30);
      if (*(uint **)(param_1 + 0x30) == (uint *)0x0) {
        puVar3 = (uint *)(param_1 + 0x20);
      }
      uVar4 = *puVar3;
      if (uVar4 == 0) {
        iVar9 = iVar1 + 0x1e;
        if (-1 < iVar1 + -1) {
          iVar9 = iVar1 + -1;
        }
        uVar15 = 0;
        uVar5 = (ulonglong)(uint)(iVar9 >> 5);
        if (iVar9 >> 5 < 1) {
          uVar5 = uVar15;
        }
        iVar9 = 0;
        do {
          if (uVar5 == uVar15) {
            return;
          }
          iVar9 = iVar9 + 0x20;
          uVar4 = puVar3[uVar15 + 1];
          uVar15 = uVar15 + 1;
        } while (uVar4 == 0);
      }
      else {
        uVar15 = 0;
        iVar9 = 0;
      }
      uVar14 = (ulonglong)(-uVar4 & uVar4);
      uVar5 = uVar14 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iVar11 = (iVar9 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
      if (iVar1 <= iVar11) {
        iVar11 = iVar1;
      }
    }
    if (iVar11 != iVar1) {
      uVar4 = 0xffffffff;
      do {
        (**(code **)(*plVar8 + 0x2f8))
                  (plVar8,*(undefined8 *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar11 * 0x10));
        uVar4 = ~(uint)uVar14 & uVar4;
        puVar3 = *(uint **)(param_1 + 0x30);
        if (*(uint **)(param_1 + 0x30) == (uint *)0x0) {
          puVar3 = (uint *)(param_1 + 0x20);
        }
        iVar2 = *(int *)(param_1 + 0x38);
        iVar11 = (int)uVar15;
        lVar12 = (longlong)iVar11;
        uVar10 = puVar3[lVar12] & uVar4;
        if (uVar10 == 0) {
          iVar6 = iVar2 + 0x1e;
          if (-1 < iVar2 + -1) {
            iVar6 = iVar2 + -1;
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
              uVar10 = puVar3[lVar12 + lVar13 + 1];
              if (uVar10 != 0) {
                uVar15 = (ulonglong)(iVar11 + (int)lVar13 + 1);
                uVar4 = 0xffffffff;
                goto LAB_14049240a;
              }
              iVar9 = iVar9 + 0x20;
              lVar13 = lVar13 + 1;
            } while (iVar7 - lVar12 != lVar13);
            uVar4 = 0xffffffff;
            iVar11 = iVar7;
          }
          uVar15 = (ulonglong)(iVar11 + 1);
          iVar11 = iVar2;
        }
        else {
LAB_14049240a:
          uVar14 = (ulonglong)(-uVar10 & uVar10);
          uVar5 = uVar14 * 2 + 1;
          lVar12 = 0x3f;
          if (uVar5 != 0) {
            for (; uVar5 >> lVar12 == 0; lVar12 = lVar12 + -1) {
            }
          }
          iVar11 = (iVar9 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
          if (iVar2 <= iVar11) {
            iVar11 = iVar2;
          }
        }
      } while (iVar11 != iVar1);
    }
  }
  return;
}



// FUNCTION 140492472 FUN_140492472 body=4079 status=ok
// SIG undefined FUN_140492472(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_140492472(longlong param_1,undefined8 *param_2,undefined1 (*param_3) [16],double *param_4)

{
  double dVar1;
  double dVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined4 extraout_EAX;
  int iVar10;
  byte bVar11;
  undefined4 uVar12;
  uint uVar13;
  double *pdVar14;
  ulonglong uVar15;
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
  double dVar27;
  double dVar30;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  double dVar47;
  double dVar48;
  double dVar49;
  double dVar50;
  undefined1 auStack_338 [32];
  undefined1 local_318 [16];
  undefined1 local_308 [16];
  undefined1 local_2f8 [16];
  double local_2e8;
  undefined8 uStack_2e0;
  double local_2d8;
  double dStack_2d0;
  double local_2c8;
  undefined8 uStack_2c0;
  double local_2b0;
  double local_2a8;
  double local_2a0;
  double local_298;
  double local_290;
  double local_288;
  undefined1 local_280 [4];
  undefined1 local_27c [4];
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
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  undefined8 uStack_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  undefined8 uStack_180;
  double local_178;
  double dStack_170;
  double local_168;
  undefined8 uStack_160;
  double local_158;
  double dStack_150;
  undefined1 local_148 [16];
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
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_338;
  local_2a0 = *(double *)param_3[1] * param_4[10];
  local_2a8 = param_4[9] * *(double *)(*param_3 + 8);
  local_2b0 = param_4[8] * *(double *)*param_3;
  local_2f8 = *param_3;
  local_2c8 = *(double *)param_3[1];
  uStack_2c0 = 0;
  pdVar14 = &local_2b0;
  FUN_140493462(pdVar14,local_27c,local_280,&local_298);
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 8);
  *(undefined8 *)((longlong)param_2 + 0xc) = *(undefined8 *)(param_1 + 0xc);
  *(undefined4 *)((longlong)param_2 + 0x14) = *(undefined4 *)(param_1 + 0x14);
  uVar15 = CONCAT71((int7)((ulonglong)pdVar14 >> 8),*(undefined1 *)(param_2 + 3)) &
           0xfffffffffffffffe;
  bVar11 = (byte)uVar15 | *(byte *)(param_1 + 0x18) & 1;
  uVar12 = (undefined4)CONCAT71((int7)(uVar15 >> 8),bVar11);
  *(byte *)(param_2 + 3) = bVar11;
  *(undefined1 *)((longlong)param_2 + 0x19) = *(undefined1 *)(param_1 + 0x19);
  *(undefined4 *)(param_2 + 4) = 6;
  param_2[5] = param_2;
  *param_2 = &PTR_FUN_14a1e3c70;
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  uVar5 = *(undefined8 *)(param_1 + 0x40);
  uVar6 = *(undefined8 *)(param_1 + 0x48);
  uVar7 = *(undefined8 *)(param_1 + 0x50);
  uVar8 = *(undefined8 *)(param_1 + 0x58);
  uVar9 = *(undefined8 *)(param_1 + 100);
  *(undefined8 *)((longlong)param_2 + 0x5c) = *(undefined8 *)(param_1 + 0x5c);
  *(undefined8 *)((longlong)param_2 + 100) = uVar9;
  param_2[10] = uVar7;
  param_2[0xb] = uVar8;
  param_2[8] = uVar5;
  param_2[9] = uVar6;
  param_2[6] = uVar3;
  param_2[7] = uVar4;
  *(float *)(param_2 + 0xc) = (float)((double)*(float *)(param_2 + 0xc) * local_298);
  *(float *)((longlong)param_2 + 100) =
       (float)((double)*(float *)((longlong)param_2 + 100) * local_290);
  *(float *)(param_2 + 0xd) = (float)((double)*(float *)(param_2 + 0xd) * local_288);
  dVar50 = DAT_14c8463e8;
  dVar49 = DAT_14c8463e0;
  dVar47 = DAT_14c8463d8;
  dVar39 = DAT_14c8463d0;
  local_2d8 = DAT_14c8464e0;
  dStack_2d0 = DAT_14c8464e8;
  local_2e8 = DAT_14c8464f0;
  uStack_2e0 = 0;
  auVar34 = *(undefined1 (*) [16])(param_1 + 0x48);
  auVar23 = divpd(auVar34,_DAT_1499387d0);
  auVar25._8_8_ = 0;
  auVar25._0_8_ = *(double *)(param_1 + 0x58);
  auVar25 = divpd(auVar25,_DAT_1499387d0);
  auVar23 = roundpd(auVar23,auVar23,3);
  auVar25 = roundpd(auVar25,auVar25,3);
  dVar40 = (auVar34._0_8_ - auVar23._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
  dVar42 = (auVar34._8_8_ - auVar23._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
  dVar44 = (*(double *)(param_1 + 0x58) - auVar25._0_8_ * (double)DAT_1499387d0) *
           0.008726646259971648;
  dVar45 = (0.0 - auVar25._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
  dVar16 = sin(dVar40);
  dVar17 = sin(dVar42);
  dVar18 = sin(dVar44);
  sin(dVar45);
  dVar40 = cos(dVar40);
  dVar42 = cos(dVar42);
  dVar44 = cos(dVar44);
  cos(dVar45);
  auVar23 = _DAT_149934d80;
  dVar41 = -(dVar42 * dVar16 * dVar18) + dVar17 * dVar40 * dVar44;
  dVar43 = dVar17 * dVar16 * dVar18 + dVar42 * dVar40 * dVar44;
  dVar45 = dVar16 * dVar17 * dVar44 - dVar40 * dVar42 * dVar18;
  dVar17 = -(dVar16 * dVar42 * dVar44) - dVar40 * dVar17 * dVar18;
  local_318 = *(undefined1 (*) [16])(param_4 + 8);
  auVar34 = *(undefined1 (*) [16])(param_4 + 10);
  dVar16 = auVar34._0_8_;
  auVar25 = minpd(_DAT_149934d80,local_318);
  auVar31 = minpd(ZEXT816(0x3ff0000000000000),auVar34);
  auVar24._8_8_ = -(ulonglong)(auVar25._8_8_ < 0.0);
  auVar24._0_8_ = -(ulonglong)(auVar25._0_8_ < 0.0);
  iVar10 = movmskpd(extraout_EAX,auVar24);
  auVar32._8_8_ = -(ulonglong)(auVar31._8_8_ < 0.0);
  auVar32._0_8_ = -(ulonglong)(auVar31._0_8_ < 0.0);
  uVar13 = movmskpd(uVar12,auVar32);
  if ((uVar13 & 0x3fffffff) == 0 && iVar10 == 0) {
    dVar48 = *param_4;
    dVar1 = param_4[1];
    dVar18 = param_4[3];
    dVar40 = param_4[3];
    dVar27 = param_4[1];
    dVar30 = param_4[1];
    dVar2 = param_4[2];
    dVar46 = param_4[2];
    dVar38 = param_4[2];
    dVar42 = dVar17 * dVar46 * -1.0 + dVar41 * dVar27 + dVar43 * *param_4 * 1.0 + dVar45 * dVar18;
    dVar44 = dVar45 * dVar38 * 1.0 + dVar43 * dVar30 + dVar41 * *param_4 * -1.0 + dVar17 * dVar40;
    auVar23._0_8_ =
         dVar43 * dVar46 * 1.0 + ((*param_4 * dVar17 * 1.0 + dVar41 * dVar18) - dVar45 * dVar27);
    auVar23._8_8_ =
         dVar41 * dVar38 * -1.0 + ((*param_4 * dVar45 * -1.0 + dVar43 * dVar40) - dVar17 * dVar30);
    dVar27 = *(double *)(param_1 + 0x30) * (double)local_318._0_8_;
    dVar30 = *(double *)(param_1 + 0x38) * (double)local_318._8_8_;
    dVar17 = *(double *)(param_1 + 0x40) * dVar16;
    dVar45 = dVar30 * dVar48 - dVar27 * dVar1;
    dVar41 = dVar17 * dVar1 - dVar30 * dVar2;
    dVar43 = dVar27 * dVar2 - dVar17 * dVar48;
    dVar41 = dVar41 + dVar41;
    dVar43 = dVar43 + dVar43;
    dVar45 = dVar45 + dVar45;
    uVar12 = 0;
    dVar17 = (dVar43 * dVar48 - dVar1 * dVar41) + dVar18 * dVar45 + dVar17 + param_4[6];
    dVar18 = (dVar45 * dVar1 - dVar2 * dVar43) + dVar18 * dVar41 + dVar27 + param_4[4];
    dVar40 = (dVar41 * dVar2 - dVar45 * dVar48) + dVar40 * dVar43 + dVar30 + param_4[5];
  }
  else {
    dVar42 = *param_4;
    dVar44 = param_4[1];
    dVar27 = param_4[2];
    dVar38 = dVar44 + dVar44;
    dVar30 = dVar27 + dVar27;
    dVar18 = dVar42 * (dVar42 + dVar42);
    dVar40 = dVar44 * dVar38;
    auVar31._8_4_ = SUB84(dVar40,0);
    auVar31._0_8_ = dVar18;
    auVar31._12_4_ = (int)((ulonglong)dVar40 >> 0x20);
    local_308._0_8_ = 1.0 - (dVar18 + dVar40);
    local_308._8_8_ = 0.0 - (dVar18 + auVar31._8_8_);
    local_1d8 = (1.0 - (dVar27 * dVar30 + dVar40)) * (double)local_318._0_8_;
    dStack_1b0 = (1.0 - (dVar27 * dVar30 + dVar18)) * (double)local_318._8_8_;
    dVar18 = param_4[3];
    dVar40 = dVar30 * dVar18;
    dVar27 = (dVar42 + dVar42) * param_4[3];
    dVar18 = dVar38 * dVar18;
    local_1b8 = (dVar38 * dVar42 - dVar40) * (double)local_318._8_8_;
    dStack_190 = (dVar30 * dVar44 - dVar27) * dVar16;
    local_198 = (dVar18 + *param_4 * dVar30) * dVar16;
    dStack_1d0 = (dVar38 * dVar42 + dVar40) * (double)local_318._0_8_;
    local_1a8 = (dVar30 * dVar44 + dVar27) * (double)local_318._8_8_;
    local_188 = (double)local_308._0_8_ * dVar16;
    local_1c8 = (*param_4 * dVar30 - dVar18) * (double)local_318._0_8_;
    uStack_1c0 = 0;
    uStack_1a0 = 0;
    uStack_180 = 0;
    local_178 = param_4[4];
    dStack_170 = param_4[5];
    local_168 = param_4[6];
    uStack_160 = 0x3ff0000000000000;
    dVar18 = dVar17 + dVar17;
    dVar42 = dVar41 + dVar41;
    dVar40 = dVar45 * (dVar45 + dVar45);
    local_258 = (double)DAT_149934d80 - (dVar41 * dVar42 + dVar17 * dVar18);
    dStack_230 = DAT_149934d80._8_8_ - (dVar41 * dVar42 + dVar40);
    local_208 = 1.0 - (dVar40 + dVar17 * dVar18);
    dStack_210 = (dVar45 + dVar45) * dVar43;
    dStack_250 = dVar18 * dVar45 + dVar42 * dVar43;
    local_228 = dVar42 * dVar17 + dStack_210;
    local_238 = dVar18 * dVar45 - dVar42 * dVar43;
    dStack_210 = dVar42 * dVar17 - dStack_210;
    local_218 = dVar18 * dVar43 + dVar45 * dVar42;
    local_248 = dVar45 * dVar42 - dVar18 * dVar43;
    uStack_240 = 0;
    uStack_220 = 0;
    uStack_200 = 0;
    uStack_1e0 = 0x3ff0000000000000;
    local_1f8 = *(double *)(param_1 + 0x30);
    dStack_1f0 = *(double *)(param_1 + 0x38);
    local_1e8 = *(double *)(param_1 + 0x40);
    FUN_1447fea8d(&local_158);
    FUN_144a1c686(&local_158,0x3e45798ee0000000);
    auVar21._8_8_ = -(ulonglong)(0.0 <= (double)local_318._8_8_);
    auVar21._0_8_ = -(ulonglong)(0.0 <= (double)local_318._0_8_);
    auVar25 = blendvpd(_DAT_149936790,auVar23,auVar21);
    uVar15 = -(ulonglong)(0.0 <= dVar16 * 1.0);
    dVar17 = (double)(~uVar15 & 0xbff0000000000000 | uVar15 & 0x3ff0000000000000);
    dVar18 = auVar25._0_8_;
    dStack_150 = dStack_150 * dVar18;
    local_158 = local_158 * dVar18;
    local_148._0_8_ = (double)local_148._0_8_ * dVar18;
    dVar18 = auVar25._8_8_;
    local_128 = local_128 * dVar18;
    local_130 = local_130 * dVar18;
    local_138 = dVar18 * local_138;
    local_108 = local_108 * dVar17;
    local_110 = local_110 * dVar17;
    local_118 = dVar17 * local_118;
    pdVar14 = &local_278;
    iVar10 = FUN_14481fd10(pdVar14,&local_158);
    uVar12 = SUB84(pdVar14,0);
    dVar17 = local_268 * local_268 + local_278 * local_278;
    dVar18 = dStack_260 * dStack_260 + dStack_270 * dStack_270;
    auVar29._0_8_ = dVar17 + dVar18;
    auVar29._8_8_ = dVar17 + dVar18;
    auVar22._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar29._8_8_);
    auVar22._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar29._0_8_);
    auVar25 = sqrtpd(auVar29,auVar29);
    auVar23 = divpd(auVar23,auVar25);
    auVar37._0_8_ = auVar23._0_8_ * local_268;
    auVar37._8_8_ = auVar23._8_8_ * dStack_260;
    dVar42 = (double)((ulonglong)(local_278 * auVar23._0_8_) &
                     -(ulonglong)(9.99999993922529e-09 <= auVar29._0_8_));
    dVar44 = (double)((ulonglong)(dStack_270 * auVar23._8_8_) &
                     -(ulonglong)(9.99999993922529e-09 <= auVar29._8_8_));
    auVar23 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar37,auVar22);
    dVar17 = local_e8;
    dVar18 = local_f8;
    dVar40 = dStack_f0;
  }
  dVar16 = dVar16 * 1.0;
  dVar43 = auVar34._8_8_ * 0.0;
  dVar45 = local_2f8._0_8_;
  dVar41 = local_2f8._8_8_;
  auVar25 = minpd(local_318,local_2f8);
  auVar33._8_8_ = dVar43;
  auVar33._0_8_ = dVar16;
  auVar34._8_8_ = uStack_2c0;
  auVar34._0_8_ = local_2c8;
  auVar34 = minpd(auVar33,auVar34);
  auVar28._8_8_ = -(ulonglong)(auVar25._8_8_ < 0.0);
  auVar28._0_8_ = -(ulonglong)(auVar25._0_8_ < 0.0);
  iVar10 = movmskpd(iVar10,auVar28);
  auVar35._8_8_ = -(ulonglong)(auVar34._8_8_ < 0.0);
  auVar35._0_8_ = -(ulonglong)(auVar34._0_8_ < 0.0);
  uVar13 = movmskpd(uVar12,auVar35);
  dVar27 = auVar23._0_8_;
  dVar30 = auVar23._8_8_;
  if ((uVar13 & 0x3fffffff) == 0 && iVar10 == 0) {
    local_158 = dVar44 * dVar49 * -1.0 + dVar27 * dVar47 + dVar39 * dVar30 * 1.0 + dVar50 * dVar42;
    dStack_150 = dVar42 * dVar49 * 1.0 + dVar30 * dVar47 + dVar39 * dVar27 * -1.0 + dVar50 * dVar44;
    local_148._0_8_ =
         dVar30 * dVar49 * 1.0 + ((dVar39 * dVar44 * 1.0 + dVar50 * dVar27) - dVar47 * dVar42);
    local_148._8_8_ =
         dVar27 * dVar49 * -1.0 + ((dVar39 * dVar42 * -1.0 + dVar50 * dVar30) - dVar47 * dVar44);
    dVar45 = dVar45 * dVar18;
    dVar41 = dVar41 * dVar40;
    dVar17 = local_2c8 * dVar17;
    dVar16 = dVar41 * dVar39 - dVar47 * dVar45;
    dVar18 = dVar17 * dVar47 - dVar49 * dVar41;
    dVar40 = dVar45 * dVar49 - dVar39 * dVar17;
    dVar18 = dVar18 + dVar18;
    dVar40 = dVar40 + dVar40;
    dVar16 = dVar16 + dVar16;
    local_e8 = local_2e8 + (dVar40 * dVar39 - dVar47 * dVar18) + dVar50 * dVar16 + dVar17;
    local_f8 = local_2d8 + (dVar16 * dVar47 - dVar49 * dVar40) + dVar50 * dVar18 + dVar45;
    dStack_f0 = dStack_2d0 + (dVar18 * dVar49 - dVar16 * dVar39) + dVar50 * dVar40 + dVar41;
  }
  else {
    dVar46 = dVar47 + dVar47;
    dVar48 = dVar49 + dVar49;
    dVar38 = dVar39 * (dVar39 + dVar39);
    local_1d8 = (1.0 - (dVar49 * dVar48 + dVar47 * dVar46)) * dVar45;
    dStack_1b0 = (1.0 - (dVar49 * dVar48 + dVar38)) * dVar41;
    local_308._8_4_ = SUB84(dVar43,0);
    local_308._0_8_ = dVar16;
    local_308._12_4_ = (int)((ulonglong)dVar43 >> 0x20);
    dVar49 = (dVar39 + dVar39) * dVar50;
    local_1b8 = (dVar46 * dVar39 - dVar48 * dVar50) * dVar41;
    dStack_190 = (dVar48 * dVar47 - dVar49) * local_2c8;
    local_198 = (dVar46 * dVar50 + dVar39 * dVar48) * local_2c8;
    dStack_1d0 = (dVar46 * dVar39 + dVar48 * dVar50) * dVar45;
    local_1a8 = (dVar48 * dVar47 + dVar49) * dVar41;
    local_1c8 = (dVar39 * dVar48 - dVar46 * dVar50) * dVar45;
    uStack_1c0 = 0;
    local_188 = (1.0 - (dVar38 + dVar47 * dVar46)) * local_2c8;
    uStack_1a0 = 0;
    uStack_180 = 0;
    local_178 = local_2d8;
    dStack_170 = dStack_2d0;
    local_168 = local_2e8;
    uStack_160 = 0x3ff0000000000000;
    dVar47 = dVar44 + dVar44;
    dVar49 = dVar27 + dVar27;
    dVar39 = dVar42 * (dVar42 + dVar42);
    dVar50 = (dVar42 + dVar42) * dVar30;
    local_238 = (dVar47 * dVar42 - dVar49 * dVar30) * (double)local_318._8_8_;
    dStack_210 = (dVar49 * dVar44 - dVar50) * dVar16;
    local_2f8._8_4_ = SUB84(dVar41 * (double)local_318._8_8_,0);
    local_2f8._0_8_ = dVar45 * (double)local_318._0_8_;
    local_2f8._12_4_ = (int)((ulonglong)(dVar41 * (double)local_318._8_8_) >> 0x20);
    local_258 = (1.0 - (dVar27 * dVar49 + dVar44 * dVar47)) * (double)local_318._0_8_;
    dStack_230 = (1.0 - (dVar27 * dVar49 + dVar39)) * (double)local_318._8_8_;
    dStack_250 = (dVar47 * dVar42 + dVar49 * dVar30) * (double)local_318._0_8_;
    local_228 = (dVar49 * dVar44 + dVar50) * (double)local_318._8_8_;
    local_218 = (dVar42 * dVar49 + dVar47 * dVar30) * dVar16;
    local_248 = (dVar42 * dVar49 - dVar47 * dVar30) * (double)local_318._0_8_;
    uStack_240 = 0;
    uStack_220 = 0;
    local_208 = (1.0 - (dVar39 + dVar44 * dVar47)) * dVar16;
    uStack_200 = 0;
    uStack_1e0 = 0x3ff0000000000000;
    local_1f8 = dVar18;
    dStack_1f0 = dVar40;
    local_1e8 = dVar17;
    FUN_1447fea8d(&local_158);
    auVar34 = _DAT_149934d80;
    local_318._0_8_ = local_148._0_8_;
    dVar39 = (double)local_148._0_8_ * (double)local_148._0_8_ +
             local_158 * local_158 + dStack_150 * dStack_150;
    dVar47 = local_128 * local_128 + local_138 * local_138 + local_130 * local_130;
    dVar16 = local_108 * local_108 + local_118 * local_118 + local_110 * local_110;
    uVar15 = -(ulonglong)(0.0 <= dVar39 + -9.99999993922529e-09);
    dVar39 = (double)(~uVar15 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar39)) & uVar15);
    uVar15 = -(ulonglong)(0.0 <= dVar47 + -9.99999993922529e-09);
    dVar49 = (double)(~uVar15 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar47)) & uVar15);
    uVar15 = -(ulonglong)(0.0 <= dVar16 + -9.99999993922529e-09);
    dVar16 = (double)(~uVar15 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar16)) & uVar15);
    auVar19._8_8_ = -(ulonglong)(0.0 <= (double)local_2f8._8_8_);
    auVar19._0_8_ = -(ulonglong)(0.0 <= (double)local_2f8._0_8_);
    auVar23 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar19);
    uVar15 = -(ulonglong)(0.0 <= local_2c8 * (double)local_308._0_8_);
    dVar47 = (double)(~uVar15 & 0xbff0000000000000 | uVar15 & 0x3ff0000000000000);
    dVar50 = auVar23._0_8_;
    local_158 = local_158 * dVar39 * dVar50;
    dStack_150 = dStack_150 * dVar39 * dVar50;
    local_148._0_8_ = dVar39 * (double)local_148._0_8_ * dVar50;
    dVar39 = auVar23._8_8_;
    local_128 = dVar49 * local_128 * dVar39;
    local_130 = local_130 * dVar49 * dVar39;
    local_138 = dVar39 * local_138 * dVar49;
    local_108 = dVar16 * local_108 * dVar47;
    local_110 = local_110 * dVar16 * dVar47;
    local_118 = dVar47 * local_118 * dVar16;
    FUN_14481fd10(&local_278,&local_158);
    dVar16 = local_268 * local_268 + local_278 * local_278;
    dVar39 = dStack_260 * dStack_260 + dStack_270 * dStack_270;
    auVar26._0_8_ = dVar16 + dVar39;
    auVar26._8_8_ = dVar16 + dVar39;
    auVar20._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar26._8_8_);
    auVar20._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar26._0_8_);
    auVar23 = sqrtpd(auVar26,auVar26);
    auVar34 = divpd(auVar34,auVar23);
    auVar36._0_8_ = auVar34._0_8_ * local_268;
    auVar36._8_8_ = auVar34._8_8_ * dStack_260;
    local_158 = (double)((ulonglong)(local_278 * auVar34._0_8_) &
                        -(ulonglong)(9.99999993922529e-09 <= auVar26._0_8_));
    dStack_150 = (double)((ulonglong)(dStack_270 * auVar34._8_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar26._8_8_));
    local_148 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar36,auVar20);
  }
  FUN_1448052ee(&local_158,&local_1d8);
  param_2[0xb] = local_1c8;
  param_2[9] = local_1d8;
  param_2[10] = dStack_1d0;
  param_2[6] = local_f8;
  param_2[7] = dStack_f0;
  param_2[8] = local_e8;
  if ((local_d0 ^ (ulonglong)auStack_338) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140493462 FUN_140493462 body=292 status=ok
// SIG undefined FUN_140493462(void)

void FUN_140493462(double *param_1,float *param_2,float *param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  dVar2 = *param_1;
  dVar5 = param_1[1];
  dVar4 = param_1[2];
  dVar3 = ABS(dVar2);
  dVar1 = ABS(dVar5);
  dVar6 = ABS(dVar4);
  if (dVar6 <= 9.999999747378752e-05 &&
      (dVar1 <= 9.999999747378752e-05 && dVar3 <= 9.999999747378752e-05)) {
    dVar4 = 0.10000000149011612;
    dVar5 = 0.10000000149011612;
    dVar2 = 0.10000000149011612;
    dVar6 = 0.10000000149011612;
    dVar1 = 0.10000000149011612;
    dVar3 = 0.10000000149011612;
  }
  *param_4 = dVar3;
  param_4[1] = dVar1;
  param_4[2] = dVar6;
  if (dVar1 <= dVar3) {
    dVar3 = dVar1;
  }
  if (dVar6 <= dVar3) {
    dVar3 = dVar6;
  }
  if (1e-08 < dVar3) {
    if (dVar2 <= dVar5) {
      dVar2 = dVar5;
    }
    if (dVar2 <= dVar4) {
      dVar2 = dVar4;
    }
    dVar2 = (double)(~-(ulonglong)(dVar2 < 0.0) & (ulonglong)dVar3 |
                    (ulonglong)-dVar3 & -(ulonglong)(dVar2 < 0.0));
  }
  else {
    dVar2 = 0.10000000149011612;
  }
  *param_2 = (float)dVar2;
  *param_3 = (float)(double)(~-(ulonglong)(1e-08 < dVar3) & 0x3fb99999a0000000 |
                            (ulonglong)dVar3 & -(ulonglong)(1e-08 < dVar3));
  return;
}



// FUNCTION 140493586 FUN_140493586 body=258 status=ok
// SIG undefined FUN_140493586(void)

void FUN_140493586(longlong param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  uint uVar6;
  bool bVar7;
  
  if (param_2 == 0) {
    uVar6 = 0;
    uVar4 = 0;
  }
  else {
    uVar6 = *(uint *)(param_2 + 0xc);
    if ((int)uVar6 < DAT_14c9647dc) {
      lVar5 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8);
    }
    else {
      lVar5 = 0;
    }
    uVar4 = (ulonglong)*(uint *)(lVar5 + 0x10);
    if (*(uint *)(lVar5 + 0x10) == 0) {
      LOCK();
      iVar1 = DAT_14c964868 + 1;
      UNLOCK();
      uVar3 = DAT_14c964868 + 1;
      bVar7 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar1;
      if (bVar7) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar3);
      }
      LOCK();
      uVar2 = *(uint *)(lVar5 + 0x10);
      bVar7 = uVar2 == 0;
      if (bVar7) {
        *(uint *)(lVar5 + 0x10) = uVar3;
        uVar2 = 0;
      }
      UNLOCK();
      if (bVar7) {
        uVar2 = uVar3;
      }
      uVar4 = (ulonglong)uVar2;
    }
  }
  iVar1 = *(int *)(param_1 + 0x10);
  *(uint *)(param_1 + 0x10) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x14) < iVar1 + 1U) {
    FUN_1449bcc2e(param_1 + 8,iVar1);
  }
  *(ulonglong *)(*(longlong *)(param_1 + 8) + (longlong)iVar1 * 8) =
       (ulonglong)uVar6 | uVar4 << 0x20;
  if ((*(int *)(param_1 + 0x10) != 0) && (DAT_14c761230 <= *(int *)(param_1 + 0x10))) {
    FUN_140493688(param_1,param_1 + 8);
    return;
  }
  return;
}



// FUNCTION 140493688 FUN_140493688 body=90 status=ok
// SIG undefined FUN_140493688(void)

void FUN_140493688(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(param_1 + 0x20);
  *(uint *)(param_1 + 0x20) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x24) < iVar1 + 1U) {
    FUN_1404936e2((longlong *)(param_1 + 0x18),iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0x18);
  lVar3 = (longlong)iVar1 * 0x10;
  *(undefined8 *)(lVar2 + lVar3) = 0;
  *(undefined8 *)(lVar2 + lVar3) = *param_2;
  *param_2 = 0;
  *(undefined4 *)(lVar2 + 8 + lVar3) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)(lVar2 + 0xc + lVar3) = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  return;
}



// FUNCTION 1404936e2 FUN_1404936e2 body=269 status=ok
// SIG undefined FUN_1404936e2(void)

void FUN_1404936e2(longlong param_1,int param_2)

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



// FUNCTION 1404937f0 FUN_1404937f0 body=35 status=ok
// SIG undefined FUN_1404937f0(void)

void FUN_1404937f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    FUN_140493814(param_3,iVar1);
    iVar1 = iVar1 + 1;
  } while (iVar1 != 0xe);
  return;
}



// FUNCTION 140493814 FUN_140493814 body=53 status=ok
// SIG undefined FUN_140493814(void)

undefined8 FUN_140493814(uint *param_1,uint param_2)

{
  char cVar1;
  
  if (((*param_1 >> (param_2 & 0x1f) & 1) == 0) && (cVar1 = FUN_14049384a(), cVar1 != '\0')) {
    FUN_148ce84bc(param_1,param_2,0);
    return 1;
  }
  return 0;
}



// FUNCTION 14049384a FUN_14049384a body=152 status=ok
// SIG undefined FUN_14049384a(void)

undefined8 FUN_14049384a(longlong param_1,undefined4 param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  ulonglong *puVar5;
  
  switch(param_2) {
  case 0:
    lVar2 = 0x20;
    break;
  case 1:
    lVar2 = 0x38;
    break;
  case 2:
    lVar2 = 0x50;
    break;
  case 3:
    lVar2 = 0x68;
    break;
  case 4:
    lVar2 = 0x80;
    break;
  case 5:
    lVar2 = 0x98;
    break;
  case 6:
    lVar2 = 0xb0;
    break;
  case 7:
    lVar2 = 200;
    break;
  case 8:
    lVar2 = 0xe0;
    break;
  case 9:
    lVar2 = 0xf8;
    break;
  case 10:
    lVar2 = 0x110;
    break;
  case 0xb:
    lVar2 = 0x128;
    break;
  case 0xc:
    uVar4 = 0x140;
    goto LAB_1404938be;
  case 0xd:
    uVar4 = 0x148;
LAB_1404938be:
    if ((ulonglong *)(param_1 + uVar4) == (ulonglong *)0x0) goto switchD_140493863_default;
    uVar1 = *(ulonglong *)(param_1 + uVar4);
    goto LAB_14049388b;
  default:
    goto switchD_140493863_default;
  }
  puVar5 = (ulonglong *)(param_1 + lVar2);
  if (puVar5 == (ulonglong *)0x0) {
switchD_140493863_default:
    uVar3 = 0;
  }
  else {
    uVar4 = *puVar5 | puVar5[1];
    uVar1 = uVar4;
LAB_14049388b:
    uVar3 = CONCAT71((int7)(uVar4 >> 8),uVar1 != 0);
  }
  return uVar3;
}



// FUNCTION 1404938e2 FUN_1404938e2 body=3643 status=ok
// SIG undefined FUN_1404938e2(void)

undefined8 *
FUN_1404938e2(undefined8 *param_1,undefined8 param_2,longlong param_3,undefined4 param_4,
             undefined4 *param_5,longlong param_6,int param_7,int param_8,int param_9,int param_10,
             undefined4 param_11)

{
  ushort *puVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  char cVar8;
  uint uVar9;
  undefined8 *puVar10;
  char cVar11;
  longlong lVar12;
  int iVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong lVar16;
  undefined4 *puVar17;
  ulonglong uVar18;
  longlong *plVar19;
  int iVar20;
  byte *pbVar21;
  char cVar22;
  uint uVar23;
  byte bVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  ulonglong uVar28;
  undefined8 *puVar29;
  ulonglong uVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  
  *param_1 = &PTR__purecall_14a336f00;
  puVar17 = param_5;
  puVar10 = param_1 + 1;
  for (lVar12 = 0x12; lVar12 != 0; lVar12 = lVar12 + -1) {
    *(undefined4 *)puVar10 = *puVar17;
    puVar17 = puVar17 + 1;
    puVar10 = (undefined8 *)((longlong)puVar10 + 4);
  }
  *(int *)(param_1 + 10) = param_7;
  *(int *)((longlong)param_1 + 0x54) = param_8;
  *(int *)(param_1 + 0xb) = param_9;
  *(int *)((longlong)param_1 + 0x5c) = param_10;
  *(undefined4 *)(param_1 + 0xc) = param_11;
  uVar23 = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0;
  *(undefined2 *)((longlong)param_1 + 0x6c) = 0x100;
  param_1[0xe] = 0xffffffff;
  param_1[0xf] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  *param_1 = &PTR_LAB_14a3343e0;
  *(undefined4 *)(param_1 + 0x11) = param_4;
  plVar19 = param_1 + 0x15;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  uVar9 = 0;
  if (*(char *)((longlong)param_1 + 0x21) != '\0') {
    uVar18 = 0;
    do {
      lVar12 = *(longlong *)(param_6 + uVar18 * 8);
      if (lVar12 == 0) {
        if ((*(byte *)((longlong)param_1 + 0x4c) & 2) == 0) {
          lVar16 = 0;
          uVar9 = FUN_14049486e(param_1,param_5 + uVar18 + 7,0);
          uVar30 = (ulonglong)*(byte *)((longlong)param_5 + uVar18 + 0x3c);
          uVar28 = 0;
          goto LAB_140493a67;
        }
      }
      else {
        uVar9 = FUN_14049486e(param_1,param_5 + uVar18 + 7,lVar12);
        uVar30 = (ulonglong)*(byte *)((longlong)param_5 + uVar18 + 0x3c);
        uVar28 = (ulonglong)*(byte *)(lVar12 + 0xbd + uVar30);
        lVar16 = *(longlong *)(*(longlong *)(lVar12 + 200) + uVar28 * 8);
LAB_140493a67:
        uVar26 = *(uint *)(param_1 + 0x16);
        if ((0 < (int)uVar26 & *(byte *)((longlong)param_1 + 0x4c) >> 1) == 1) {
          pbVar21 = (byte *)(*plVar19 + 9);
          uVar15 = 0;
          do {
            if (((*(longlong *)(pbVar21 + -9) == lVar16) && (uVar9 == pbVar21[-1])) &&
               ((uint)uVar28 == (uint)*pbVar21)) {
              uVar26 = (uint)uVar15;
              goto LAB_140493b51;
            }
            uVar15 = uVar15 + 1;
            pbVar21 = pbVar21 + 0x10;
          } while (uVar26 != uVar15);
        }
        *(uint *)(param_1 + 0x16) = uVar26 + 1;
        if (*(uint *)((longlong)param_1 + 0xb4) < uVar26 + 1) {
          FUN_140494964(plVar19,uVar26);
        }
        uVar15 = (ulonglong)(int)uVar26;
        lVar14 = uVar15 * 0x10;
        FUN_140494724(*plVar19 + lVar14);
        lVar7 = *(longlong *)(*plVar19 + lVar14);
        if (lVar7 != lVar16) {
          *(longlong *)(*plVar19 + lVar14) = lVar16;
          if (lVar16 != 0) {
            *(int *)(lVar16 + 0x24c) = *(int *)(lVar16 + 0x24c) + 1;
          }
          if (lVar7 != 0) {
            *(int *)(lVar7 + 0x24c) = *(int *)(lVar7 + 0x24c) + -1;
          }
        }
        *(char *)(*plVar19 + 8 + lVar14) = (char)uVar9;
        *(char *)(*plVar19 + 9 + lVar14) = (char)uVar28;
        *(undefined2 *)(*plVar19 + 10 + lVar14) = 0;
        *(undefined1 *)(*plVar19 + 0xc + lVar14) = 0;
        if ((lVar16 != 0) &&
           (iVar13 = *(int *)(lVar16 + 0x250), *(int *)(lVar16 + 0x250) = iVar13 + 1, iVar13 == 0))
        {
          FUN_14006bf18(lVar16,param_2);
        }
LAB_140493b51:
        lVar16 = uVar15 * 0x10;
        puVar1 = (ushort *)(param_1[0x15] + 10 + lVar16);
        *puVar1 = *puVar1 | (ushort)(1 << ((byte)uVar30 & 0x1f));
        cVar8 = *(char *)(param_1[0x15] + 0xc + lVar16);
        *(char *)(param_1[0x15] + 0xc + lVar16) = cVar8 + '\x01';
        *(char *)((longlong)param_1 + uVar18 * 2 + 0xb8) = (char)uVar26;
        *(char *)((longlong)param_1 + uVar18 * 2 + 0xb9) = cVar8;
        if (lVar12 != 0) {
          uVar30 = (ulonglong)(uint)((int)uVar30 << 4);
          fVar31 = *(float *)(lVar12 + 0x40 + uVar30);
          if (fVar31 <= 0.0) {
            fVar31 = 0.0;
          }
          if (1.0 <= fVar31) {
            fVar31 = 1.0;
          }
          fVar32 = *(float *)(lVar12 + 0x3c + uVar30);
          if (fVar32 <= 0.0) {
            fVar32 = 0.0;
          }
          if (1.0 <= fVar32) {
            fVar32 = 1.0;
          }
          fVar33 = *(float *)(lVar12 + 0x34 + uVar30);
          fVar34 = *(float *)(lVar12 + 0x38 + uVar30);
          if (fVar34 <= 0.0) {
            fVar34 = 0.0;
          }
          if (1.0 <= fVar34) {
            fVar34 = 1.0;
          }
          if (fVar33 <= 0.0) {
            fVar33 = 0.0;
          }
          if (1.0 <= fVar33) {
            fVar33 = 1.0;
          }
          *(uint *)((longlong)param_1 + uVar18 * 4 + 200) =
               (int)(fVar32 * 255.0 + 0.5) & 0xffU |
               ((int)(fVar34 * 255.0 + 0.5) & 0xffU) << 8 |
               ((int)(fVar33 * 255.0 + 0.5) & 0xffU) << 0x10 | (int)(fVar31 * 255.0 + 0.5) << 0x18;
        }
      }
      uVar18 = uVar18 + 1;
    } while (uVar18 < *(byte *)((longlong)param_1 + 0x21));
    param_7 = *(int *)(param_1 + 10);
    param_8 = *(int *)((longlong)param_1 + 0x54);
    param_10 = *(int *)((longlong)param_1 + 0x5c);
    param_9 = *(int *)(param_1 + 0xb);
    uVar9 = *(uint *)((longlong)param_1 + 0x74);
  }
  uVar26 = param_10 * param_8;
  if ((uint)(param_9 * param_7) < (uint)(param_10 * param_8)) {
    uVar26 = param_9 * param_7;
  }
  uVar18 = (ulonglong)((uVar26 - 1) + (uint)(uVar26 == 0)) * 2 + 1;
  lVar12 = 0x3f;
  if (uVar18 != 0) {
    for (; uVar18 >> lVar12 == 0; lVar12 = lVar12 + -1) {
    }
  }
  uVar26 = (uint)lVar12;
  if (uVar9 < (uint)lVar12) {
    uVar26 = uVar9;
  }
  uVar9 = 0xb;
  if (uVar26 < 0xb) {
    uVar9 = uVar26;
  }
  *(uint *)((longlong)param_1 + 0x74) = uVar9;
  bVar24 = *(byte *)((longlong)param_5 + 0x19);
  if ((ulonglong)bVar24 != 0) {
    uVar18 = 0;
    iVar13 = -0x61c88647;
    uVar23 = 0;
    do {
      lVar12 = *(longlong *)(param_6 + uVar18 * 8);
      if (lVar12 != 0) {
        uVar9 = (uint)(uVar18 >> 0xd) & 0x7ffff ^ iVar13 + uVar23 + 0x61c88647;
        uVar26 = uVar9 << 8 ^ iVar13 - uVar9;
        uVar23 = uVar26 >> 0xd ^ ((int)uVar18 - uVar9) - uVar26;
        uVar9 = uVar23 >> 0xc ^ (uVar9 - uVar26) - uVar23;
        uVar25 = uVar9 << 0x10 ^ (uVar26 - uVar23) - uVar9;
        uVar27 = uVar25 >> 5 ^ (uVar23 - uVar9) - uVar25;
        uVar26 = uVar27 >> 3 ^ (uVar9 - uVar25) - uVar27;
        uVar23 = uVar26 << 10 ^ (uVar25 - uVar27) - uVar26;
        uVar9 = *(uint *)(lVar12 + 8);
        uVar23 = uVar9 >> 0xd ^ (uVar23 >> 0xf ^ uVar27 - (uVar26 + uVar23)) - uVar9;
        uVar26 = uVar23 << 8 ^ (-0x61c88647 - uVar9) - uVar23;
        uVar25 = uVar26 >> 0xd ^ (uVar9 - uVar23) - uVar26;
        uVar9 = uVar25 >> 0xc ^ (uVar23 - uVar26) - uVar25;
        uVar23 = uVar9 << 0x10 ^ (uVar26 - uVar25) - uVar9;
        uVar26 = uVar23 >> 5 ^ (uVar25 - uVar9) - uVar23;
        uVar9 = uVar26 >> 3 ^ (uVar9 - uVar23) - uVar26;
        uVar23 = uVar9 << 10 ^ (uVar23 - uVar26) - uVar9;
        uVar23 = uVar23 >> 0xf ^ uVar26 - (uVar9 + uVar23);
      }
      uVar18 = uVar18 + 1;
      iVar13 = iVar13 + -1;
    } while (bVar24 != uVar18);
  }
  uVar9 = param_5[2];
  uVar26 = param_5[3];
  uVar23 = uVar9 >> 0xd ^ uVar23 - uVar9;
  uVar25 = uVar23 << 8 ^ (-0x61c88647 - uVar9) - uVar23;
  uVar27 = uVar25 >> 0xd ^ (uVar9 - uVar23) - uVar25;
  uVar23 = uVar27 >> 0xc ^ (uVar23 - uVar25) - uVar27;
  uVar9 = uVar23 << 0x10 ^ (uVar25 - uVar27) - uVar23;
  uVar25 = uVar9 >> 5 ^ (uVar27 - uVar23) - uVar9;
  uVar23 = uVar25 >> 3 ^ (uVar23 - uVar9) - uVar25;
  uVar9 = uVar23 << 10 ^ (uVar9 - uVar25) - uVar23;
  uVar9 = uVar26 >> 0xd ^ (uVar9 >> 0xf ^ uVar25 - (uVar23 + uVar9)) - uVar26;
  uVar23 = uVar9 << 8 ^ (-0x61c88647 - uVar26) - uVar9;
  uVar26 = uVar23 >> 0xd ^ (uVar26 - uVar9) - uVar23;
  uVar9 = uVar26 >> 0xc ^ (uVar9 - uVar23) - uVar26;
  uVar23 = uVar9 << 0x10 ^ (uVar23 - uVar26) - uVar9;
  uVar26 = uVar23 >> 5 ^ (uVar26 - uVar9) - uVar23;
  uVar25 = uVar26 >> 3 ^ (uVar9 - uVar23) - uVar26;
  uVar9 = uVar25 << 10 ^ (uVar23 - uVar26) - uVar25;
  uVar9 = uVar9 >> 0xf ^ uVar26 - (uVar25 + uVar9);
  iVar13 = uVar9 - *(byte *)(param_5 + 6);
  uVar26 = iVar13 * 0x100 ^ 0x9e3779b9 - uVar9;
  uVar23 = uVar26 >> 0xd ^ ((uint)*(byte *)(param_5 + 6) - iVar13) - uVar26;
  uVar9 = uVar23 >> 0xc ^ (iVar13 - uVar26) - uVar23;
  uVar25 = uVar9 << 0x10 ^ (uVar26 - uVar23) - uVar9;
  uVar26 = uVar25 >> 5 ^ (uVar23 - uVar9) - uVar25;
  uVar23 = uVar26 >> 3 ^ (uVar9 - uVar25) - uVar26;
  uVar9 = uVar23 << 10 ^ (uVar25 - uVar26) - uVar23;
  uVar9 = uVar9 >> 0xf ^ uVar26 - (uVar23 + uVar9);
  iVar13 = uVar9 - bVar24;
  uVar23 = iVar13 * 0x100 ^ 0x9e3779b9 - uVar9;
  uVar26 = uVar23 >> 0xd ^ ((uint)bVar24 - iVar13) - uVar23;
  uVar9 = uVar26 >> 0xc ^ (iVar13 - uVar23) - uVar26;
  uVar23 = uVar9 << 0x10 ^ (uVar23 - uVar26) - uVar9;
  uVar25 = uVar23 >> 5 ^ (uVar26 - uVar9) - uVar23;
  uVar26 = uVar25 >> 3 ^ (uVar9 - uVar23) - uVar25;
  uVar9 = uVar26 << 10 ^ (uVar23 - uVar25) - uVar26;
  uVar9 = uVar9 >> 0xf ^ uVar25 - (uVar26 + uVar9);
  iVar13 = uVar9 - *(byte *)(param_5 + 0x11);
  uVar9 = iVar13 * 0x100 ^ 0x9e3779b9 - uVar9;
  uVar23 = uVar9 >> 0xd ^ ((uint)*(byte *)(param_5 + 0x11) - iVar13) - uVar9;
  uVar26 = uVar23 >> 0xc ^ (iVar13 - uVar9) - uVar23;
  uVar9 = uVar26 << 0x10 ^ (uVar9 - uVar23) - uVar26;
  uVar25 = uVar9 >> 5 ^ (uVar23 - uVar26) - uVar9;
  uVar23 = uVar25 >> 3 ^ (uVar26 - uVar9) - uVar25;
  uVar9 = uVar23 << 10 ^ (uVar9 - uVar25) - uVar23;
  uVar25 = uVar25 - (uVar23 + uVar9);
  *(uint *)((longlong)param_1 + 0x8c) = uVar9 >> 0xf ^ uVar25;
  FUN_1404953da(param_1,param_3,CONCAT71((uint7)(uint3)(uVar25 >> 8),1));
  uVar9 = *(uint *)(param_1 + 0x16);
  bVar24 = DAT_14c760ae4;
  if (0 < (int)uVar9) {
    lVar12 = 0;
    do {
      if ((*(longlong *)(*plVar19 + lVar12) != 0) &&
         (0x40 < *(uint *)(*(longlong *)(*plVar19 + lVar12) + 0x28))) {
        bVar24 = 0;
        break;
      }
      lVar12 = lVar12 + 0x10;
    } while ((ulonglong)uVar9 << 4 != lVar12);
  }
  bVar2 = *(byte *)(param_5 + 6);
  iVar13 = param_5[2];
  bVar3 = *(byte *)(param_5 + 0x11);
  iVar20 = 0x1000;
  if (param_5[4] != 0) {
    iVar20 = param_5[4];
  }
  iVar5 = param_5[3];
  iVar6 = param_5[5];
  bVar4 = *(byte *)((longlong)param_5 + 0x1a);
  uVar18 = (ulonglong)bVar4;
  cVar8 = (char)uVar9;
  if ((bVar3 & 1 & uVar18 == 0xff) == 0) {
    uVar30 = 0;
    do {
      if ((((((uVar18 == 0xff || uVar18 == uVar30) &&
             (puVar10 = *(undefined8 **)(param_3 + 0x10 + uVar30 * 8), puVar10 != (undefined8 *)0x0)
             ) && (*(byte *)(puVar10 + 3) == bVar2)) &&
           ((*(int *)(puVar10 + 2) == iVar13 && (*(int *)((longlong)puVar10 + 0x14) == iVar5)))) &&
          ((*(char *)((longlong)puVar10 + 0x1a) == cVar8 &&
           ((*(byte *)((longlong)puVar10 + 0x19) == (bVar24 ^ 1) &&
            (*(byte *)((longlong)puVar10 + 0x1b) == (bVar3 & 1))))))) &&
         ((*(int *)((longlong)puVar10 + 0x1c) == iVar20 &&
          ((*(int *)(puVar10 + 4) == iVar6 &&
           (uVar23 = FUN_1449bce3e(puVar10,param_1), uVar23 != 0xffffffff)))))) goto LAB_1404945d3;
      uVar30 = uVar30 + 1;
    } while (uVar30 != 0x10);
    if (bVar4 != 0xff) goto LAB_14049423e;
  }
  lVar12 = 0;
  do {
    if (*(longlong *)(param_3 + 0x10 + lVar12 * 8) == 0) {
      puVar10 = (undefined8 *)FUN_14001cc68(0x700,0x10);
      *(undefined4 *)(puVar10 + 1) = 0xffffffff;
      *(undefined2 *)((longlong)puVar10 + 0xc) = 0x105;
      *(undefined1 *)((longlong)puVar10 + 0xe) = 0;
      *puVar10 = &PTR_FUN_14a335da0;
      *(int *)(puVar10 + 2) = iVar13;
      *(int *)((longlong)puVar10 + 0x14) = iVar5;
      *(byte *)(puVar10 + 3) = bVar2;
      *(byte *)((longlong)puVar10 + 0x19) = bVar24 ^ 1;
      *(char *)((longlong)puVar10 + 0x1a) = cVar8;
      *(byte *)((longlong)puVar10 + 0x1b) = bVar3 & 1;
      *(int *)((longlong)puVar10 + 0x1c) = iVar20;
      *(int *)(puVar10 + 4) = iVar6;
      *(uint *)(puVar10 + 5) = (uint)bVar2;
      *(undefined8 *)((longlong)puVar10 + 0x2c) = 0;
      puVar10[7] = 0;
      puVar10[8] = 0;
      puVar10[9] = 0;
      puVar10[10] = 0;
      puVar10[0xb] = 0;
      puVar10[0xc] = 0;
      puVar10[0x10] = 0;
      puVar10[0x11] = 0;
      puVar10[0xe] = 0;
      puVar10[0xf] = 0;
      puVar10[0x12] = 0x400;
      *(undefined4 *)(puVar10 + 0x13) = 0;
      puVar10[0x14] = &DAT_14c7585e0;
      puVar10[0x15] = 0;
      *(undefined8 *)((longlong)puVar10 + 0xb4) = 0;
      lVar16 = 0x148;
      do {
        puVar29 = (undefined8 *)((longlong)puVar10 + lVar16 + -0x88);
        *puVar29 = 0;
        puVar29[1] = 0;
        *(undefined8 *)((longlong)puVar10 + lVar16 + -0x78) = 0;
        *(undefined8 *)((longlong)puVar10 + lVar16 + -0x70) = 0x1000;
        *(undefined4 *)((longlong)puVar10 + lVar16 + -0x68) = 0;
        *(undefined **)((longlong)puVar10 + lVar16 + -0x60) = &DAT_14c7585e0;
        *(undefined8 *)((longlong)puVar10 + lVar16 + -0x58) = 0;
        *(undefined4 *)((longlong)puVar10 + lVar16 + -0x50) = 0;
        puVar29 = (undefined8 *)((longlong)puVar10 + lVar16 + -0x48);
        *puVar29 = 0;
        puVar29[1] = 0;
        puVar29 = (undefined8 *)((longlong)puVar10 + lVar16 + -0x38);
        *puVar29 = 0;
        puVar29[1] = 0;
        puVar29 = (undefined8 *)((longlong)puVar10 + lVar16 + -0x28);
        *puVar29 = 0;
        puVar29[1] = 0;
        puVar29 = (undefined8 *)((longlong)puVar10 + lVar16 + -0x18);
        *puVar29 = 0;
        puVar29[1] = 0;
        *(undefined1 *)((longlong)puVar10 + lVar16 + -8) = 0;
        *(undefined8 *)((longlong)puVar10 + lVar16) = 0;
        ((undefined8 *)((longlong)puVar10 + lVar16))[1] = 0;
        puVar29 = (undefined8 *)((longlong)puVar10 + lVar16 + 0x10);
        *puVar29 = 0;
        puVar29[1] = 0;
        lVar16 = lVar16 + 0xa8;
      } while (lVar16 != 0x688);
      puVar10[0xc2] = 0;
      puVar10[0xc3] = 0;
      puVar10[0xc0] = 0;
      puVar10[0xc1] = 0;
      memset(puVar10 + 0xc5,0,0xc4);
      *(char *)((longlong)puVar10 + 0x6ec) = (char)lVar12;
      puVar10[0xde] = 0;
      *(undefined4 *)(puVar10 + 0xdf) = 0;
      *(undefined1 *)((longlong)puVar10 + 0x6fc) = 1;
      *(undefined1 *)((longlong)puVar10 + 0x6fe) = 0;
      uVar23 = DAT_14ca84e40 / (uint)(iVar13 + iVar5 * 2);
      if (cVar8 == '\0') {
        *(undefined2 *)(puVar10 + 0xc4) = 0;
      }
      else {
        uVar23 = uVar23 * uVar23;
        uVar26 = uVar23 >> 3;
        uVar18 = (ulonglong)uVar9 & 0xff;
        uVar30 = 0;
        do {
          plVar19 = puVar10 + uVar30 * 0x15 + 0x19;
          *(undefined4 *)(puVar10 + uVar30 * 0x15 + 0x1a) = 0;
          if (*(int *)((longlong)puVar10 + uVar30 * 0xa8 + 0xd4) != uVar26 + 3) {
            FUN_14049472c(plVar19);
          }
          puVar29 = puVar10 + uVar30 * 0x15 + 0x18;
          iVar13 = 0;
          do {
            iVar20 = *(int *)(puVar29 + 2);
            *(uint *)(puVar29 + 2) = iVar20 + 1U;
            if (*(uint *)((longlong)puVar29 + 0x14) < iVar20 + 1U) {
              FUN_14024bb2c(plVar19,iVar20);
            }
            lVar16 = *plVar19 + (longlong)iVar20 * 0x18;
            FUN_14049471d(lVar16);
            *(int *)(lVar16 + 8) = iVar13;
            *(int *)(lVar16 + 4) = iVar13;
            iVar13 = iVar13 + 1;
          } while (iVar13 != 3);
          *(int *)puVar29 = (int)uVar30;
          *(uint *)((longlong)puVar29 + 4) = (uint)bVar2;
          FUN_1404b04e2(puVar29 + 3,uVar23);
          if (*(int *)((longlong)puVar29 + 0x6c) < (int)uVar26) {
            FUN_14480809c(puVar29 + 0xc,uVar26);
          }
          uVar30 = uVar30 + 1;
        } while (uVar30 != uVar18);
        cVar8 = '\"';
        if (bVar24 == 0) {
          cVar8 = '0';
        }
        cVar11 = '1';
        if (bVar24 == 0) {
          cVar11 = 'D';
        }
        *(undefined2 *)(puVar10 + 0xc4) = 0;
        uVar9 = 0;
        do {
          uVar26 = (uint)uVar18;
          uVar23 = 4;
          if (uVar26 < 4) {
            uVar23 = uVar26;
          }
          cVar22 = cVar8;
          if ((1 < uVar23 - 3) && (cVar22 = bVar24 * '\x04' + '\x1c', uVar23 != 1)) {
            cVar22 = cVar11;
          }
          *(char *)((longlong)puVar10 + (ulonglong)uVar9 + 0x620) = cVar22;
          uVar9 = uVar9 + 1;
          uVar18 = (ulonglong)(uVar26 - uVar23);
        } while (uVar26 - uVar23 != 0);
      }
      FUN_140495b4c(puVar10 + 5,*(undefined4 *)((longlong)puVar10 + 0x1c));
      *(bool *)((longlong)puVar10 + 0x6fd) = iVar6 != 0;
      puVar29 = *(undefined8 **)(param_3 + 0x10 + lVar12 * 8);
      if ((puVar29 != puVar10) &&
         (*(undefined8 **)(param_3 + 0x10 + lVar12 * 8) = puVar10, puVar29 != (undefined8 *)0x0)) {
        FUN_14083e62c(puVar29);
        FUN_1400020a8(puVar29);
      }
      *(int *)(param_3 + 0xc) = *(int *)(param_3 + 0xc) + 1;
      FUN_14006bf18(puVar10,param_2);
      uVar23 = FUN_1449bce3e(puVar10,param_1);
LAB_1404945d3:
      *(uint *)(param_1 + 0xf) = uVar23;
      uVar9 = ((uVar23 & 0x55555555) >> 1 | uVar23 & 0x55555555) & 0x33333333;
      uVar9 = (uVar9 >> 2 | uVar9) & 0xf0f0f0f;
      uVar9 = uVar9 >> 4 | uVar9;
      *(uint *)((longlong)param_1 + 0x7c) = uVar9 & 0xff | uVar9 >> 8 & 0xff00;
      uVar9 = uVar23 & 0x22222222 | uVar23 >> 1 & 0x44444444;
      uVar9 = (uVar9 >> 3 | uVar9 >> 1) & 0xf0f0f0f;
      uVar9 = uVar9 >> 4 | uVar9;
      *(uint *)(param_1 + 0x10) = uVar9 & 0xff | uVar9 >> 8 & 0xff00;
      *(int *)(puVar10 + 0xdd) = *(int *)(puVar10 + 0xdd) + 1;
      goto LAB_140494243;
    }
    lVar12 = lVar12 + 1;
  } while (lVar12 != 0x10);
LAB_14049423e:
  puVar10 = (undefined8 *)0x0;
LAB_140494243:
  param_1[0x12] = puVar10;
  *(uint *)(param_1 + 0xe) = (uint)*(byte *)((longlong)puVar10 + 0x6ec);
  *(undefined1 *)((longlong)param_1 + 0x6d) = *(undefined1 *)((longlong)puVar10 + 0x19);
  return param_1;
}



// FUNCTION 14049471d FUN_14049471d body=7 status=ok
// SIG undefined FUN_14049471d(void)

void FUN_14049471d(undefined4 *param_1)

{
  *param_1 = 0xffffffff;
  return;
}



// FUNCTION 140494724 FUN_140494724 body=8 status=ok
// SIG undefined FUN_140494724(void)

void FUN_140494724(undefined8 *param_1)

{
  *param_1 = 0;
  return;
}



// FUNCTION 14049472c FUN_14049472c body=321 status=ok
// SIG undefined FUN_14049472c(void)

undefined8 FUN_14049472c(longlong param_1,uint param_2)

{
  longlong lVar1;
  byte bVar2;
  undefined1 auVar3 [16];
  ulonglong uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar6 = (ulonglong)param_2 * 0x18;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar4 = uVar6 + 0xf;
      if (param_2 < 0x555) {
        uVar6 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
      }
      else {
        if ((uVar4 & 0x1ffffffff0) < 0x7ff1) {
          bVar2 = (&DAT_14c841e00)[uVar4 >> 4];
          uVar7 = 0x32;
          if (0x32 < bVar2) {
            uVar7 = (ulonglong)bVar2;
          }
          uVar8 = 0x32 - (ulonglong)bVar2;
          do {
            uVar6 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140494791;
            lVar1 = uVar7 + 1 + uVar8;
            uVar8 = uVar8 - 1;
          } while (lVar1 != 0x33);
        }
        uVar6 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar6 = (ulonglong)DAT_14c841df8;
        }
        uVar6 = -uVar6 & ((uVar4 & 0x1ffffffff0) + uVar6) - 1;
      }
    }
    else {
      uVar6 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar6,8);
    }
  }
LAB_140494791:
  auVar3._8_8_ = 0;
  auVar3._0_8_ = uVar6;
  uVar5 = SUB168(auVar3 * ZEXT816(0xaaaaaaaaaaaaaaab),0);
  uVar4 = 0x7fffffff;
  if ((int)param_2 <= (int)(uVar6 / 0x18)) {
    uVar4 = uVar6 / 0x18 & 0xffffffff;
  }
  if ((int)uVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar4;
    uVar5 = FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar4,0x18,8);
  }
  return uVar5;
}



// FUNCTION 14049486e FUN_14049486e body=239 status=ok
// SIG undefined FUN_14049486e(void)

ulonglong FUN_14049486e(longlong param_1,int *param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 uVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  plVar1 = (longlong *)(param_1 + 0x98);
  uVar5 = *(uint *)(param_1 + 0xa0);
  uVar7 = (ulonglong)(int)uVar5;
  if (0 < (longlong)uVar7) {
    uVar6 = 0;
    do {
      if (*(int *)(*plVar1 + uVar6 * 8) == *param_2) {
        uVar7 = uVar6 & 0xffffffff;
        goto LAB_140494947;
      }
      uVar6 = uVar6 + 1;
    } while (uVar5 != uVar6);
  }
  *(uint *)(param_1 + 0xa0) = uVar5 + 1;
  if (*(uint *)(param_1 + 0xa4) < uVar5 + 1) {
    FUN_140494a72(plVar1);
  }
  FUN_14049495d(uVar7 * 8 + *plVar1);
  if (param_3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar5 = *(uint *)(param_1 + 0x50) / *(uint *)(param_3 + 0x18);
    uVar6 = (ulonglong)((uVar5 - 1) + (uint)(uVar5 == 0)) * 2 + 1;
    lVar2 = 0x3f;
    if (uVar6 != 0) {
      for (; uVar6 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    uVar5 = *(uint *)(param_1 + 0x54) / *(uint *)(param_3 + 0x1c);
    uVar6 = (ulonglong)((uVar5 - 1) + (uint)(uVar5 == 0)) * 2 + 1;
    lVar3 = 0x3f;
    if (uVar6 != 0) {
      for (; uVar6 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    uVar5 = (uint)lVar3;
    if ((uint)lVar2 < (uint)lVar3) {
      uVar5 = (uint)lVar2;
    }
    uVar4 = (undefined1)uVar5;
    uVar5 = *(byte *)(param_3 + 0x29) + uVar5;
    if (uVar5 <= *(uint *)(param_1 + 0x74)) {
      uVar5 = *(uint *)(param_1 + 0x74);
    }
    *(uint *)(param_1 + 0x74) = uVar5;
  }
  *(int *)(*plVar1 + uVar7 * 8) = *param_2;
  *(undefined1 *)(*plVar1 + 4 + uVar7 * 8) = uVar4;
LAB_140494947:
  return uVar7 & 0xffffffff;
}



// FUNCTION 14049495d FUN_14049495d body=7 status=ok
// SIG undefined FUN_14049495d(void)

void FUN_14049495d(undefined4 *param_1)

{
  *param_1 = 0;
  return;
}



// FUNCTION 140494964 FUN_140494964 body=269 status=ok
// SIG undefined FUN_140494964(void)

void FUN_140494964(longlong param_1,int param_2)

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



// FUNCTION 140494a72 FUN_140494a72 body=353 status=ok
// SIG undefined FUN_140494a72(void)

void FUN_140494a72(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140494af7;
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
LAB_140494af7:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,4);
  return;
}



// FUNCTION 140494bd4 FUN_140494bd4 body=353 status=ok
// SIG undefined FUN_140494bd4(void)

undefined8
FUN_140494bd4(longlong param_1,ulonglong param_2,uint param_3,uint param_4,uint param_5,uint param_6
             )

{
  longlong lVar1;
  char cVar2;
  ushort uVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined8 uVar8;
  uint uVar9;
  uint uVar10;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  lVar4 = (param_2 & 0xffffffff) * 0x20;
  uVar9 = *(uint *)(lVar1 + 8 + lVar4);
  iVar5 = 1 << ((byte)(uVar9 >> 0x18) & 0xf);
  uVar6 = uVar9 & 0x222222 | uVar9 >> 1 & 0x444444;
  uVar6 = uVar6 >> 3 | uVar6 >> 1;
  uVar10 = uVar6 & 0xf0f0f;
  uVar7 = uVar6 >> 8 & 0xf00;
  uVar6 = (uVar10 >> 4 | uVar10) & 0xff | uVar7;
  uVar8 = CONCAT71((uint7)(uint3)(uVar7 >> 8),1);
  if (uVar6 < param_6) {
    uVar7 = ((uVar9 & 0x555555) >> 1 | uVar9 & 0x555555) & 0x333333;
    uVar7 = uVar7 >> 2 | uVar7;
    uVar9 = uVar7 & 0xf0f0f;
    uVar9 = (uVar9 >> 4 | uVar9) & 0xff | uVar7 >> 8 & 0xf00;
    if (((uVar9 < param_5) && (uVar7 = uVar9 + iVar5, param_3 < uVar7)) &&
       (uVar10 = iVar5 + uVar6, param_4 < uVar10)) {
      lVar4 = lVar4 + lVar1;
      if ((*(char *)(lVar4 + 0x18) == '\x04') ||
         (((param_4 <= uVar6 && (param_3 <= uVar9)) && ((uVar7 <= param_5 && (uVar10 <= param_6)))))
         ) {
LAB_140494cde:
        uVar8 = 0;
      }
      else {
        for (uVar3 = *(ushort *)(lVar4 + 0xe); uVar3 != 0xffff;
            uVar3 = *(ushort *)((ulonglong)uVar3 * 0x20 + lVar1 + 0x12)) {
          if (*(char *)(lVar1 + 0x18 + (ulonglong)uVar3 * 0x20) != '\x02') {
            cVar2 = FUN_140494bd4(param_1,uVar3,param_3,param_4,param_5,param_6);
            if (cVar2 == '\0') goto LAB_140494cde;
          }
        }
      }
    }
  }
  return uVar8;
}



// FUNCTION 140494d36 FUN_140494d36 body=1700 status=ok
// SIG undefined FUN_140494d36(void)

void FUN_140494d36(byte *param_1,uint param_2,uint param_3,uint param_4,ulonglong param_5)

{
  byte *pbVar1;
  ulonglong *puVar2;
  undefined8 *puVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  undefined2 uVar7;
  longlong lVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  undefined2 *puVar14;
  int iVar15;
  void *pvVar16;
  longlong lVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  ulonglong uVar21;
  int iVar22;
  uint uVar23;
  short sVar24;
  uint uVar25;
  uint uVar26;
  int iVar27;
  uint uVar28;
  int iVar29;
  undefined2 local_8a;
  
  lVar8 = *(longlong *)(param_1 + 0x10);
  uVar10 = (ulonglong)param_2;
  lVar11 = uVar10 * 0x20;
  uVar20 = *(uint *)(lVar8 + 8 + lVar11);
  uVar25 = uVar20 & 0x222222 | uVar20 >> 1 & 0x444444;
  uVar26 = uVar25 >> 3 | uVar25 >> 1;
  uVar25 = uVar26 & 0xf0f0f;
  uVar26 = (uVar25 >> 4 | uVar25) & 0xff | uVar26 >> 8 & 0xf00;
  uVar25 = uVar20 >> 0x18 & 0xf;
  uVar12 = (ulonglong)uVar25;
  uVar18 = *(int *)(param_5 + 0x5c) * *(int *)(param_5 + 0x54) + param_4;
  iVar27 = 1 << (sbyte)uVar25;
  if (uVar26 < uVar18) {
    uVar9 = *(int *)(param_5 + 0x58) * *(int *)(param_5 + 0x50) + param_3;
    uVar23 = ((uVar20 & 0x555555) >> 1 | uVar20 & 0x555555) & 0x333333;
    uVar23 = uVar23 >> 2 | uVar23;
    uVar20 = uVar23 & 0xf0f0f;
    uVar20 = (uVar20 >> 4 | uVar20) & 0xff | uVar23 >> 8 & 0xf00;
    if (((uVar20 < uVar9) && (uVar23 = uVar20 + iVar27, param_3 < uVar23)) &&
       (uVar28 = iVar27 + uVar26, param_4 < uVar28)) {
      pbVar1 = param_1 + 0x10;
      puVar2 = (ulonglong *)(lVar8 + lVar11);
      sVar24 = (short)param_2;
      if (((param_4 <= uVar26) && (param_3 <= uVar20)) && ((uVar23 <= uVar9 && (uVar28 <= uVar18))))
      {
        lVar17 = *(longlong *)(param_1 + 0x20);
        uVar21 = (ulonglong)((param_2 & 0xffff) << 5);
        lVar11 = lVar8 + uVar21;
        uVar4 = *(ushort *)(lVar8 + 0x16 + uVar21);
        uVar5 = *(ushort *)(lVar8 + 0x14 + uVar21);
        if (uVar4 != 0xffff) {
          *(ushort *)(lVar8 + 0x14 + (ulonglong)uVar4 * 0x20) = uVar5;
          *(undefined2 *)(lVar11 + 0x16) = 0xffff;
        }
        if (uVar5 != 0xffff) {
          *(ushort *)(*(longlong *)pbVar1 + 0x16 + (ulonglong)uVar5 * 0x20) = uVar4;
          *(undefined2 *)(lVar11 + 0x14) = 0xffff;
        }
        if (*(short *)(lVar17 + uVar12 * 2) == sVar24) {
          *(ushort *)(lVar17 + uVar12 * 2) = uVar5;
        }
        *(undefined1 *)(lVar11 + 0x18) = 0;
        *(int *)(param_1 + 0x8c) = *(int *)(param_1 + 0x8c) + 1;
        *(int *)(param_1 + 0x90) =
             *(int *)(param_1 + 0x90) +
             (1 << ((sbyte)uVar25 * (char)*(undefined4 *)param_1 & 0x1fU));
        if (*(uint *)(param_1 + 0x70) <= param_2) {
          uVar12 = uVar10 * 2 + 1;
          lVar8 = 0x3f;
          if (uVar12 != 0) {
            for (; uVar12 >> lVar8 == 0; lVar8 = lVar8 + -1) {
            }
          }
          uVar25 = 1 << ((byte)lVar8 & 0x1f);
          uVar20 = 0x20;
          if (0x20 < uVar25) {
            uVar20 = uVar25;
          }
          FUN_1404b04e2(param_1 + 0x68,uVar20);
        }
        uVar12 = (ulonglong)(((uint)(param_5 >> 4) & 0xffff & *(uint *)(param_1 + 0x6c)) << 2);
        *(undefined4 *)(*(longlong *)(param_1 + 0x80) + uVar10 * 4) =
             *(undefined4 *)(*(longlong *)(param_1 + 0x78) + uVar12);
        *(uint *)(*(longlong *)(param_1 + 0x78) + uVar12) = param_2;
        *puVar2 = param_5;
        *(undefined1 *)(puVar2 + 3) = 4;
        FUN_14083e33e(param_1,*(undefined2 *)((longlong)puVar2 + 0xc));
        return;
      }
      if ((char)puVar2[3] == '\x02') {
        iVar27 = 1 << (*param_1 & 0x1f);
        lVar13 = *(longlong *)(param_1 + 0x20);
        uVar10 = (ulonglong)((param_2 & 0xffff) << 5);
        lVar17 = lVar8 + uVar10;
        uVar4 = *(ushort *)(lVar8 + 0x16 + uVar10);
        uVar5 = *(ushort *)(lVar8 + 0x14 + uVar10);
        if (uVar4 != 0xffff) {
          *(ushort *)(lVar8 + 0x14 + (ulonglong)uVar4 * 0x20) = uVar5;
          *(undefined2 *)(lVar17 + 0x16) = 0xffff;
        }
        if (uVar5 != 0xffff) {
          *(ushort *)(*(longlong *)pbVar1 + 0x16 + (ulonglong)uVar5 * 0x20) = uVar4;
          *(undefined2 *)(lVar17 + 0x14) = 0xffff;
        }
        if (*(short *)(lVar13 + uVar12 * 2) == sVar24) {
          *(ushort *)(lVar13 + uVar12 * 2) = uVar5;
        }
        iVar29 = 0;
        *(undefined1 *)(lVar17 + 0x18) = 0;
        *(undefined1 *)(*(longlong *)(param_1 + 0x10) + 0x19 + lVar11) = 0;
        lVar8 = *(longlong *)(param_1 + 0x10);
        lVar17 = *(longlong *)(param_1 + 0x30);
        uVar10 = (ulonglong)((param_2 & 0xffff) << 5);
        *(undefined1 *)(lVar8 + 0x18 + uVar10) = 3;
        uVar4 = *(ushort *)(lVar17 + uVar12 * 8);
        *(ushort *)(lVar8 + 0x14 + uVar10) = uVar4;
        if (uVar4 != 0xffff) {
          *(short *)(*(longlong *)pbVar1 + 0x16 + (ulonglong)uVar4 * 0x20) = sVar24;
        }
        *(short *)(lVar17 + uVar12 * 8) = sVar24;
        uVar20 = *(uint *)(*(longlong *)(param_1 + 0x10) + 8 + lVar11) & 0xffffff;
        iVar19 = *(int *)(param_1 + 0x50);
        if (iVar19 != 0) {
          iVar15 = 0;
          iVar29 = iVar19;
          do {
            uVar26 = (uint)(iVar29 - iVar15) >> 1;
            iVar22 = uVar26 + iVar15;
            if (uVar20 < *(uint *)(*(longlong *)(param_1 + 0x48) + (longlong)iVar22 * 4)) {
              iVar15 = iVar15 + uVar26 + 1;
              iVar22 = iVar29;
            }
            iVar29 = iVar22;
          } while (iVar15 != iVar29);
        }
        uVar26 = iVar27 - 1;
        *(int *)(param_1 + 0x50) = iVar27 + iVar19 + -1;
        if ((uint)(*(int *)(param_1 + 0x54) - iVar19) < uVar26) {
          FUN_1447808da(param_1 + 0x48,iVar19);
        }
        uVar25 = uVar25 - 1;
        pvVar16 = (void *)((longlong)iVar29 * 4 + *(longlong *)(param_1 + 0x48));
        memmove((void *)((longlong)pvVar16 + (longlong)(int)uVar26 * 4),pvVar16,
                (ulonglong)(uint)(iVar19 - iVar29) << 2);
        iVar19 = *(int *)(param_1 + 0x60);
        *(uint *)(param_1 + 0x60) = iVar19 + uVar26;
        if ((uint)(*(int *)(param_1 + 100) - iVar19) < uVar26) {
          FUN_14488eebe(param_1 + 0x58,iVar19);
        }
        pvVar16 = (void *)((longlong)iVar29 * 2 + *(longlong *)(param_1 + 0x58));
        memmove((void *)((longlong)pvVar16 + (longlong)(int)uVar26 * 2),pvVar16,
                (ulonglong)(uint)(iVar19 - iVar29) * 2);
        iVar29 = uVar26 + iVar29;
        iVar19 = 0;
        local_8a = 0xffff;
        uVar26 = 0xffff;
        do {
          uVar4 = *(ushort *)(param_1 + 0x40);
          uVar18 = (uint)uVar4;
          if (uVar4 == 0xffff) {
            uVar18 = *(uint *)(param_1 + 0x18);
            *(uint *)(param_1 + 0x18) = uVar18 + 1;
            if (*(uint *)(param_1 + 0x1c) < uVar18 + 1) {
              FUN_140495d80(pbVar1,uVar18);
            }
          }
          else {
            lVar17 = *(longlong *)pbVar1;
            lVar13 = (ulonglong)uVar4 * 0x20;
            lVar8 = lVar17 + lVar13;
            uVar5 = *(ushort *)(lVar17 + 0x16 + lVar13);
            uVar6 = *(ushort *)(lVar17 + 0x14 + lVar13);
            if (uVar5 != 0xffff) {
              *(ushort *)(lVar17 + 0x14 + (ulonglong)uVar5 * 0x20) = uVar6;
              *(undefined2 *)(lVar8 + 0x16) = 0xffff;
            }
            if (uVar6 != 0xffff) {
              *(ushort *)(*(longlong *)pbVar1 + 0x16 + (ulonglong)uVar6 * 0x20) = uVar5;
              *(undefined2 *)(lVar8 + 0x14) = 0xffff;
            }
            if (*(ushort *)(param_1 + 0x40) == uVar4) {
              *(ushort *)(param_1 + 0x40) = uVar6;
            }
            *(undefined1 *)(lVar8 + 0x18) = 0;
          }
          lVar8 = *(longlong *)(param_1 + 0x10);
          lVar17 = (longlong)(int)uVar18 * 0x20;
          puVar3 = (undefined8 *)(lVar8 + 0x10 + lVar17);
          *puVar3 = 0xcccccccccccccccc;
          puVar3[1] = 0xcccccccccccccccc;
          puVar3 = (undefined8 *)(lVar8 + lVar17);
          *puVar3 = 0xcccccccccccccccc;
          puVar3[1] = 0xcccccccccccccccc;
          uVar9 = (iVar19 << ((char)*(undefined4 *)param_1 * (char)uVar25 & 0x1fU)) + uVar20;
          *(uint *)(*(longlong *)(param_1 + 0x48) + (longlong)iVar29 * 4) = uVar9;
          uVar7 = (undefined2)uVar18;
          *(undefined2 *)(*(longlong *)(param_1 + 0x58) + (longlong)iVar29 * 2) = uVar7;
          if (iVar19 == 0) {
            puVar14 = (undefined2 *)(*(longlong *)pbVar1 + lVar11 + 0xe);
            local_8a = uVar7;
          }
          else {
            puVar14 = (undefined2 *)
                      ((ulonglong)((uVar26 & 0xffff) << 5) + *(longlong *)pbVar1 + 0x12);
          }
          *puVar14 = uVar7;
          lVar8 = *(longlong *)(param_1 + 0x10);
          *(undefined8 *)(lVar8 + lVar17) = 0;
          *(uint *)(lVar8 + 8 + lVar17) = uVar9 & 0xffffff | (uVar25 & 0xf) << 0x18;
          *(short *)(lVar8 + 0xc + lVar17) = sVar24;
          *(undefined2 *)(lVar8 + 0xe + lVar17) = 0xffff;
          *(undefined2 *)(lVar8 + 0x10 + lVar17) = local_8a;
          *(undefined8 *)(lVar8 + 0x12 + lVar17) = 0xffffffffffff;
          lVar8 = *(longlong *)(param_1 + 0x10);
          lVar17 = *(longlong *)(param_1 + 0x20);
          uVar10 = (ulonglong)((uVar18 & 0xffff) << 5);
          *(undefined1 *)(lVar8 + 0x18 + uVar10) = 2;
          uVar4 = *(ushort *)(lVar17 + (longlong)(int)uVar25 * 2);
          *(ushort *)(lVar8 + 0x14 + uVar10) = uVar4;
          if (uVar4 != 0xffff) {
            *(undefined2 *)(*(longlong *)pbVar1 + 0x16 + (ulonglong)uVar4 * 0x20) = uVar7;
          }
          *(undefined2 *)(lVar17 + (longlong)(int)uVar25 * 2) = uVar7;
          iVar19 = iVar19 + 1;
          iVar29 = iVar29 + -1;
          uVar26 = uVar18;
        } while (iVar27 != iVar19);
        lVar8 = *(longlong *)pbVar1;
      }
      for (uVar4 = *(ushort *)(lVar8 + 0xe + lVar11); uVar4 != 0xffff;
          uVar4 = *(ushort *)(*(longlong *)(param_1 + 0x10) + 0x12 + (ulonglong)uVar4 * 0x20)) {
        FUN_140494d36(param_1,uVar4,param_3,param_4,param_5);
      }
    }
  }
  return;
}



// FUNCTION 1404953da FUN_1404953da body=1896 status=ok
// SIG undefined FUN_1404953da(void)

void FUN_1404953da(longlong param_1,undefined4 *param_2,char param_3)

{
  short *psVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined4 *puVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  uint uVar15;
  uint uVar16;
  longlong lVar17;
  undefined1 auStack_c8 [36];
  uint local_a4;
  longlong *local_a0;
  longlong local_98;
  longlong *local_90;
  longlong *local_88;
  uint local_80;
  uint local_7c;
  uint local_78;
  uint local_74;
  longlong local_70;
  longlong local_68;
  ulonglong local_60;
  uint local_58;
  uint uStack_54;
  uint *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  iVar3 = *(int *)(param_1 + 0xa0);
  if (0 < iVar3) {
    lVar14 = 0;
    local_90 = (longlong *)(param_2 + 0xc4);
    local_a0 = (longlong *)(param_2 + 200);
    local_88 = (longlong *)(param_2 + 0xac);
    do {
      uVar8 = *(uint *)(*(longlong *)(param_1 + 0x98) + lVar14 * 8);
      if ((uVar8 & 0x3fffff) < (uint)param_2[0x2a]) {
        lVar12 = (ulonglong)(uVar8 & 0x3fffff) * 0xf0;
        lVar17 = *(longlong *)(param_2 + 0x28) + lVar12;
        if (((lVar17 != 0) &&
            (uVar8 >> 0x16 == (uint)*(ushort *)(*(longlong *)(param_2 + 0x28) + 0xec + lVar12))) &&
           (*(char *)(lVar17 + 0xc) == '\x01')) {
          uVar7 = *(int *)(param_1 + 0x74) -
                  (uint)*(byte *)(*(longlong *)(param_1 + 0x98) + 4 + lVar14 * 8);
          bVar6 = (byte)uVar7;
          uVar11 = ~(-1 << (bVar6 & 0x1f));
          uVar15 = (uint)*(ushort *)(lVar17 + 0x24) * *(int *)(lVar17 + 0x18) + uVar11 >>
                   (bVar6 & 0x1f);
          uVar11 = (uint)*(ushort *)(lVar17 + 0x26) * *(int *)(lVar17 + 0x1c) + uVar11;
          local_80 = uVar11 >> (bVar6 & 0x1f);
          local_60 = (ulonglong)uVar8;
          if (uVar11 >> (bVar6 & 0x1f) != 0) {
            local_7c = (uVar7 & 0xf) << 0x18;
            uVar8 = 0;
            local_a4 = uVar15;
            local_78 = uVar7;
            local_70 = param_1;
            do {
              if (uVar15 != 0) {
                uVar15 = (uVar8 & 0xff00) << 8 | uVar8 & 0xff;
                uVar15 = (uVar15 << 4 | uVar15) & 0xf0f0f0f;
                uVar7 = (uVar15 * 4 | uVar15) & 0x33333333;
                uVar11 = 0;
                local_74 = uVar8;
LAB_14049555b:
                uVar8 = (uVar11 & 0xff00) << 8 | uVar11 & 0xff;
                uVar8 = (uVar8 << 4 | uVar8) & 0xf0f0f0f;
                uVar8 = (uVar8 * 4 | uVar8) & 0x33333333;
                local_58 = (uint)local_60;
                uStack_54 = ((uVar8 * 2 | uVar8) & 0x55555555 | (uVar7 * 2 | uVar7 * 4) & 0xaaaaaaaa
                            ) & 0xffffff | local_7c;
                iVar3 = (**(code **)(**(longlong **)(lVar17 + 0xd8) + 8))
                                  (*(longlong **)(lVar17 + 0xd8),local_78);
                if (iVar3 != 0) {
                  uStack_54 = iVar3 * 0x1000000 + uStack_54 & 0xf000000 |
                              uStack_54 & 0xf0000000 |
                              (uStack_54 & 0xffffff) >>
                              ((char)*(undefined4 *)(local_70 + 0x20) * (char)iVar3 & 0x1fU);
                }
                uVar5 = CONCAT44(uStack_54,local_58);
                uVar9 = (uStack_54 >> 1 ^ uVar5) * -0xae502812aa7333;
                lVar12 = (uVar9 >> 0x21 ^ uVar9) * -0x3b314601e57a13ad;
                uVar15 = ((uint)((ulonglong)lVar12 >> 0x21) ^ (uint)lVar12) & 0xffff;
                uVar8 = *(uint *)(*(longlong *)(param_2 + 0xb8) +
                                 (ulonglong)(param_2[0xb5] & uVar15) * 4);
                if (param_3 == '\0') {
                  if (uVar8 != 0xffffffff) {
                    do {
                      lVar12 = (longlong)(int)uVar8;
                      if (*(ulonglong *)(*local_90 + lVar12 * 8) == uVar5) {
                        sVar2 = *(short *)(*local_a0 + lVar12 * 2);
                        if (sVar2 == 1) {
                          lVar13 = (longlong)(int)param_2[0xce];
                          uVar4 = param_2[0xce] + 1;
                          param_2[0xce] = uVar4;
                          if ((uint)param_2[0xcf] < uVar4) {
                            local_98 = lVar13;
                            local_68 = lVar12;
                            FUN_1447808da(param_2 + 0xcc,lVar13);
                            lVar13 = local_98;
                            lVar12 = local_68;
                          }
                          *(uint *)(*(longlong *)(param_2 + 0xcc) + lVar13 * 4) = uVar8;
                          if ((uint)param_2[0xb6] <= uVar8) goto LAB_14049592b;
                          uVar4 = *(uint *)(*(longlong *)(param_2 + 0xb8) +
                                           (ulonglong)(uVar15 & param_2[0xb5]) * 4);
                          if (uVar4 != uVar8) goto LAB_140495909;
                          puVar10 = (undefined4 *)
                                    (*(longlong *)(param_2 + 0xb8) +
                                    (ulonglong)(uVar15 & param_2[0xb5]) * 4);
                          lVar13 = *(longlong *)(param_2 + 0xba);
                          goto LAB_140495923;
                        }
                        *(short *)(*local_a0 + lVar12 * 2) = sVar2 + -1;
                        break;
                      }
                      uVar8 = *(uint *)(*(longlong *)(param_2 + 0xba) + (ulonglong)uVar8 * 4);
                    } while (uVar8 != 0xffffffff);
                  }
                }
                else {
                  if (uVar8 != 0xffffffff) {
                    do {
                      if (*(ulonglong *)(*local_90 + (longlong)(int)uVar8 * 8) == uVar5) {
                        psVar1 = (short *)(*local_a0 + (longlong)(int)uVar8 * 2);
                        *psVar1 = *psVar1 + 1;
                        goto LAB_140495761;
                      }
                      uVar8 = *(uint *)(*(longlong *)(param_2 + 0xba) + (ulonglong)uVar8 * 4);
                    } while (uVar8 != 0xffffffff);
                  }
                  iVar3 = param_2[0xce];
                  if ((longlong)iVar3 < 1) {
                    iVar3 = param_2[0xc6];
                    param_2[0xc6] = iVar3 + 1U;
                    if ((uint)param_2[199] < iVar3 + 1U) {
                      FUN_14063e3ec(local_90,iVar3);
                    }
                    FUN_140495b43((longlong)iVar3 * 8 + *(longlong *)(param_2 + 0xc4));
                    uVar8 = param_2[0xca];
                    param_2[0xca] = uVar8 + 1;
                    if ((uint)param_2[0xcb] < uVar8 + 1) {
                      FUN_14488eebe(local_a0,uVar8);
                    }
                    lVar12 = (longlong)(int)uVar8;
                    *(undefined2 *)(*local_a0 + lVar12 * 2) = 0;
                  }
                  else {
                    uVar8 = *(uint *)(*(longlong *)(param_2 + 0xcc) + -4 + (longlong)iVar3 * 4);
                    param_2[0xce] = iVar3 + -1;
                    FUN_144780a3c(param_2 + 0xcc);
                    lVar12 = (longlong)(int)uVar8;
                  }
                  local_98 = CONCAT71(local_98._1_7_,param_3);
                  *(ulonglong *)(*(longlong *)(param_2 + 0xc4) + lVar12 * 8) =
                       CONCAT44(uStack_54,local_58);
                  *(undefined2 *)(*(longlong *)(param_2 + 200) + lVar12 * 2) = 1;
                  if ((uint)param_2[0xb6] <= uVar8) {
                    uVar5 = (ulonglong)(uVar8 + (uVar8 == 0xffffffff)) * 2 + 1;
                    lVar12 = 0x3f;
                    if (uVar5 != 0) {
                      for (; uVar5 >> lVar12 == 0; lVar12 = lVar12 + -1) {
                      }
                    }
                    uVar16 = 1 << ((byte)lVar12 & 0x1f);
                    uVar4 = 0x20;
                    if (0x20 < uVar16) {
                      uVar4 = uVar16;
                    }
                    FUN_1404b04e2(param_2 + 0xb4,uVar4);
                  }
                  uVar4 = local_58;
                  uVar5 = (ulonglong)((uVar15 & param_2[0xb5]) << 2);
                  *(undefined4 *)(*(longlong *)(param_2 + 0xba) + (ulonglong)uVar8 * 4) =
                       *(undefined4 *)(*(longlong *)(param_2 + 0xb8) + uVar5);
                  *(uint *)(*(longlong *)(param_2 + 0xb8) + uVar5) = uVar8;
                  if ((uint)param_2[0xbe] <= uVar8) {
                    uVar5 = (ulonglong)(uVar8 + (uVar8 == 0xffffffff)) * 2 + 1;
                    lVar12 = 0x3f;
                    if (uVar5 != 0) {
                      for (; uVar5 >> lVar12 == 0; lVar12 = lVar12 + -1) {
                      }
                    }
                    uVar16 = 1 << ((byte)lVar12 & 0x1f);
                    uVar15 = 0x20;
                    if (0x20 < uVar16) {
                      uVar15 = uVar16;
                    }
                    FUN_1404b04e2(param_2 + 0xbc,uVar15);
                  }
                  uVar15 = (uVar4 >> 0x10 ^ uVar4) * -0x7a143595;
                  uVar15 = (uVar15 >> 0xd ^ uVar15) * -0x3d4d51cb;
                  uVar5 = (ulonglong)((uVar15 >> 0x10 ^ uVar15) & param_2[0xbd]);
                  *(undefined4 *)(*(longlong *)(param_2 + 0xc2) + (ulonglong)uVar8 * 4) =
                       *(undefined4 *)(*(longlong *)(param_2 + 0xc0) + uVar5 * 4);
                  *(uint *)(*(longlong *)(param_2 + 0xc0) + uVar5 * 4) = uVar8;
                  iVar3 = param_2[0xae];
                  param_2[0xae] = iVar3 + 1U;
                  if ((uint)param_2[0xaf] < iVar3 + 1U) {
                    FUN_14063e3ec(local_88,iVar3);
                  }
                  *(ulonglong *)(*local_88 + (longlong)iVar3 * 8) = CONCAT44(uStack_54,local_58);
                  param_3 = (char)local_98;
                }
                goto LAB_140495761;
              }
LAB_1404957e9:
              uVar8 = uVar8 + 1;
            } while (uVar8 != local_80);
            iVar3 = *(int *)(local_70 + 0xa0);
            param_1 = local_70;
          }
        }
      }
      lVar14 = lVar14 + 1;
    } while (lVar14 < iVar3);
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
  while( true ) {
    lVar13 = *(longlong *)(param_2 + 0xba);
    uVar5 = (ulonglong)uVar4;
    uVar4 = *(uint *)(lVar13 + uVar5 * 4);
    if (uVar4 == uVar8) break;
LAB_140495909:
    if (uVar4 == 0xffffffff) goto LAB_14049592b;
  }
  puVar10 = (undefined4 *)(lVar13 + uVar5 * 4);
LAB_140495923:
  *puVar10 = *(undefined4 *)(lVar13 + (ulonglong)uVar8 * 4);
LAB_14049592b:
  if (uVar8 < (uint)param_2[0xbe]) {
    uVar15 = (local_58 >> 0x10 ^ local_58) * -0x7a143595;
    uVar15 = (uVar15 >> 0xd ^ uVar15) * -0x3d4d51cb;
    uVar5 = (ulonglong)((uVar15 >> 0x10 ^ uVar15) & param_2[0xbd]);
    uVar15 = *(uint *)(*(longlong *)(param_2 + 0xc0) + uVar5 * 4);
    if (uVar15 == uVar8) {
      puVar10 = (undefined4 *)(*(longlong *)(param_2 + 0xc0) + uVar5 * 4);
      lVar13 = *(longlong *)(param_2 + 0xc2);
    }
    else {
      do {
        if (uVar15 == 0xffffffff) goto LAB_140495994;
        lVar13 = *(longlong *)(param_2 + 0xc2);
        uVar5 = (ulonglong)uVar15;
        uVar15 = *(uint *)(lVar13 + uVar5 * 4);
      } while (uVar15 != uVar8);
      puVar10 = (undefined4 *)(lVar13 + uVar5 * 4);
    }
    *puVar10 = *(undefined4 *)(lVar13 + (ulonglong)uVar8 * 4);
  }
LAB_140495994:
  *(undefined2 *)(*local_a0 + lVar12 * 2) = 0;
  *(undefined8 *)(*local_90 + lVar12 * 8) = 0;
  local_50 = &local_58;
  iVar3 = FUN_144a082fe(local_88,&local_50);
  if (iVar3 == 0) {
    local_50 = (uint *)CONCAT44(local_50._4_4_,local_58);
    FUN_14063e54e(&local_50,lVar17,&local_58,*param_2);
  }
LAB_140495761:
  uVar11 = uVar11 + 1;
  uVar8 = local_74;
  uVar15 = local_a4;
  if (uVar11 == local_a4) goto LAB_1404957e9;
  goto LAB_14049555b;
}



// FUNCTION 140495b43 FUN_140495b43 body=8 status=ok
// SIG undefined FUN_140495b43(void)

void FUN_140495b43(undefined8 *param_1)

{
  *param_1 = 0;
  return;
}



// FUNCTION 140495b4c FUN_140495b4c body=563 status=ok
// SIG undefined FUN_140495b4c(void)

void FUN_140495b4c(longlong param_1,int param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  
  uVar5 = (ulonglong)(param_2 + -1 + (uint)(param_2 == 0)) * 2 + 1;
  uVar4 = 0x3f;
  if (uVar5 != 0) {
    for (; uVar5 >> uVar4 == 0; uVar4 = uVar4 - 1) {
    }
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (*(int *)(param_1 + 0x1c) < 1) {
    FUN_145717fd8(param_1 + 0x10);
  }
  *(undefined4 *)(param_1 + 0x50) = 0;
  if (*(int *)(param_1 + 0x54) < 1) {
    FUN_14480809c(param_1 + 0x48,1);
  }
  *(undefined4 *)(param_1 + 0x60) = 0;
  if (*(int *)(param_1 + 100) < 1) {
    FUN_1448759c8(param_1 + 0x58,1);
  }
  plVar1 = (longlong *)(param_1 + 0x20);
  uVar8 = 0x40 - (int)(uVar4 ^ 0x3f);
  FUN_140817d70(plVar1,uVar8);
  *(undefined4 *)(param_1 + 0x38) = 0;
  if (*(int *)(param_1 + 0x3c) < (int)uVar8) {
    FUN_145717f82((longlong *)(param_1 + 0x30),uVar8);
  }
  uVar7 = (uint)uVar4;
  iVar2 = *(int *)(param_1 + 0x18);
  *(uint *)(param_1 + 0x18) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x1c) < iVar2 + 1U) {
    FUN_140495d80(param_1 + 0x10,iVar2);
  }
  lVar3 = *(longlong *)(param_1 + 0x10);
  lVar6 = (longlong)iVar2 * 0x20;
  *(undefined8 *)(lVar3 + lVar6) = 0;
  *(uint *)(lVar3 + 8 + lVar6) = (uVar7 & 0xf) << 0x18;
  *(undefined8 *)(lVar3 + 0xc + lVar6) = 0xffffffffffffffff;
  *(undefined4 *)(lVar3 + 0x14 + lVar6) = 0xffffffff;
  *(undefined2 *)(lVar3 + 0x18 + lVar6) = 2;
  iVar2 = *(int *)(param_1 + 0x50);
  *(uint *)(param_1 + 0x50) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x54) < iVar2 + 1U) {
    FUN_1447808da(param_1 + 0x48,iVar2);
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x48) + (longlong)iVar2 * 4) = 0;
  iVar2 = *(int *)(param_1 + 0x60);
  *(uint *)(param_1 + 0x60) = iVar2 + 1U;
  if (*(uint *)(param_1 + 100) < iVar2 + 1U) {
    FUN_14488eebe(param_1 + 0x58,iVar2);
  }
  *(undefined2 *)(*(longlong *)(param_1 + 0x58) + (longlong)iVar2 * 2) = 0;
  iVar2 = *(int *)(param_1 + 0x28);
  *(uint *)(param_1 + 0x28) = iVar2 + uVar8;
  if ((uint)(*(int *)(param_1 + 0x2c) - iVar2) < uVar8) {
    FUN_14488eebe(plVar1);
  }
  iVar2 = *(int *)(param_1 + 0x38);
  *(uint *)(param_1 + 0x38) = iVar2 + uVar8;
  if ((uint)(*(int *)(param_1 + 0x3c) - iVar2) < uVar8) {
    FUN_147346ef0();
  }
  if ((uVar4 ^ 0x3f) != 0x3f) {
    uVar5 = 0;
    do {
      *(undefined2 *)(*plVar1 + uVar5 * 2) = 0xffff;
      *(undefined8 *)(*(longlong *)(param_1 + 0x30) + uVar5 * 8) = 0xffffffffffffffff;
      uVar5 = uVar5 + 1;
    } while (uVar7 + (uVar7 == 0) != uVar5);
  }
  *(undefined2 *)(*(longlong *)(param_1 + 0x20) + (uVar4 & 0xffffffff) * 2) = 0;
  *(undefined8 *)(*(longlong *)(param_1 + 0x30) + (uVar4 & 0xffffffff) * 8) = 0xffffffffffffffff;
  *(undefined2 *)(param_1 + 0x40) = 0xffff;
  *(undefined2 *)(param_1 + 0x88) = 0;
  return;
}



// FUNCTION 140495d80 FUN_140495d80 body=255 status=ok
// SIG undefined FUN_140495d80(void)

void FUN_140495d80(longlong param_1,int param_2)

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



// FUNCTION 140495e80 FUN_140495e80 body=21 status=ok
// SIG undefined FUN_140495e80(void)

void FUN_140495e80(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_140495e96();
  FUN_1404960a8(uVar1);
  return;
}



// FUNCTION 140495e96 FUN_140495e96 body=529 status=ok
// SIG undefined FUN_140495e96(void)

longlong FUN_140495e96(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
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
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar2 = *(longlong *)(param_1 + -0x10);
  if (lVar2 != 0) {
    if (DAT_14cbadd90 == 0) {
      local_30 = &local_18;
      local_18 = FUN_141030f22;
      local_20 = FUN_14081d0ea;
      local_28 = &LAB_1459f2e4c;
      local_38 = &LAB_148c39de3;
      local_40 = &LAB_1457a9eb2;
      local_48 = L"Game";
      local_50 = 0;
      local_58 = 0x10000004;
      local_60 = 0x10;
      local_68 = 0x3de0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
    }
    if (((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
          (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) &&
       (lVar3 = *(longlong *)(lVar2 + 0x430), lVar3 != 0)) {
      if (DAT_14cae9568 == 0) {
        local_30 = &local_18;
        local_18 = FUN_1417de738;
        local_20 = (code *)&LAB_145893408;
        local_28 = &LAB_1458cbbd2;
        local_38 = &LAB_147ba21f1;
        local_40 = &LAB_1463e9233;
        local_48 = L"Engine";
        local_50 = 0;
        local_58 = 0x1000000c;
        local_60 = 8;
        local_68 = 0x2b8;
        FUN_14081cfa3(L"/Script/Engine",L"LocalPlayer",&DAT_14cae9568,&DAT_147ba21f0);
        lVar3 = *(longlong *)(lVar2 + 0x430);
        if (lVar3 == 0) goto LAB_140496003;
      }
      lVar2 = 0;
      if ((DAT_14cae9568 == 0) || (lVar1 = *(longlong *)(lVar3 + 0x10), lVar1 == 0))
      goto LAB_140495f39;
      if (*(int *)(DAT_14cae9568 + 0x38) <= *(int *)(lVar1 + 0x38)) {
        lVar2 = 0;
        if (*(longlong *)
             (*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(DAT_14cae9568 + 0x38) * 8) ==
            DAT_14cae9568 + 0x30) {
          lVar2 = lVar3;
        }
        goto LAB_140495f39;
      }
    }
  }
LAB_140496003:
  lVar2 = 0;
LAB_140495f39:
  if ((local_10 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar2;
}



// FUNCTION 1404960a8 FUN_1404960a8 body=793 status=ok
// SIG undefined FUN_1404960a8(void)

undefined8 FUN_1404960a8(longlong *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined8 local_80;
  wchar_t *local_78;
  code *local_70;
  undefined1 *local_68;
  code **local_60;
  undefined1 *local_58;
  undefined1 *local_50;
  code *local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (((param_1 == (longlong *)0x0) || (lVar4 = (**(code **)(*param_1 + 0x180))(), lVar4 == 0)) ||
     (lVar4 = *(longlong *)(lVar4 + 0x1f0), lVar4 == 0)) goto LAB_14049624b;
  if (DAT_14cb92088 == 0) {
    local_60 = &local_48;
    local_48 = FUN_1449e2820;
    local_50 = &LAB_1417ad04a;
    local_58 = &LAB_14107a1fc;
    local_68 = &LAB_1489f8be7;
    local_70 = FUN_14656bf51;
    local_78 = L"Engine";
    local_80 = 0;
    local_88 = 0x10000000;
    local_90 = 8;
    local_98 = 0x38;
    FUN_14081cfa3(L"/Script/GbxUICoherent",L"GbxUICoherentSubsystem",&DAT_14cb92088,&DAT_1489f8be6);
  }
  lVar8 = DAT_14cb92088;
  if ((DAT_14cb92088 == 0) || (DAT_14c950c29 == 0)) {
    if (DAT_14cb92088 != 0) goto LAB_14049612c;
LAB_1404963bb:
    lVar7 = 0;
  }
  else {
    FUN_1456cec3c(DAT_14cb92088);
    if (DAT_14cb92088 == 0) {
      local_60 = &local_48;
      local_48 = FUN_1449e2820;
      local_50 = &LAB_1417ad04a;
      local_58 = &LAB_14107a1fc;
      local_68 = &LAB_1489f8be7;
      local_70 = FUN_14656bf51;
      local_78 = L"Engine";
      local_80 = 0;
      local_88 = 0x10000000;
      local_90 = 8;
      local_98 = 0x38;
      FUN_14081cfa3(L"/Script/GbxUICoherent",L"GbxUICoherentSubsystem",&DAT_14cb92088,&DAT_1489f8be6
                   );
      if (DAT_14cb92088 == 0) goto LAB_1404963bb;
    }
LAB_14049612c:
    if (*(int *)(lVar8 + 0x38) < *(int *)(DAT_14cb92088 + 0x38)) goto LAB_1404963bb;
    lVar7 = 0;
    if (*(longlong *)(*(longlong *)(lVar8 + 0x30) + (longlong)*(int *)(DAT_14cb92088 + 0x38) * 8) ==
        DAT_14cb92088 + 0x30) {
      lVar7 = lVar8;
    }
  }
  lVar4 = FUN_1448a6f9c(lVar4 + 0x100,lVar7);
  if ((lVar4 != 0) && (lVar4 = *(longlong *)(lVar4 + 0x30), lVar4 != 0)) {
    FUN_1404963c2(lVar4,&local_48,param_1);
    iVar1 = *(int *)(lVar4 + 0x40);
    if ((longlong)iVar1 != 0) {
      lVar4 = *(longlong *)(lVar4 + 0x38);
      iVar3 = (int)local_48;
      lVar8 = 0;
      do {
        lVar7 = *(longlong *)(lVar4 + lVar8);
        if (*(int *)(lVar7 + 0xb0) == iVar3) {
          if ((local_40 != 0 & DAT_14c950c29) == 1) {
            FUN_1456cec3c(local_40);
          }
          if (*(longlong *)(lVar7 + 0xb8) == local_40) {
            if ((lVar7 != 0) && (*(int *)(lVar7 + 0x3c) != 0)) {
              uVar2 = *(uint *)(lVar7 + 0x38);
              uVar5 = 0;
              if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_140496214;
              puVar6 = (undefined8 *)
                       ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
              if (((puVar6 != (undefined8 *)0x0) && (*(int *)(puVar6 + 2) == *(int *)(lVar7 + 0x3c))
                  ) && ((*(uint *)(puVar6 + 1) & 0x10200000) == 0)) {
                uVar5 = *puVar6;
                goto LAB_140496214;
              }
            }
            break;
          }
        }
        lVar8 = lVar8 + 8;
      } while ((longlong)iVar1 * 8 != lVar8);
    }
  }
LAB_14049624b:
  uVar5 = 0;
LAB_140496214:
  if ((local_38 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 1404963c2 FUN_1404963c2 body=412 status=ok
// SIG undefined FUN_1404963c2(void)

undefined4 * FUN_1404963c2(longlong param_1,undefined4 *param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
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
  code *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_3 != 0) {
    if (DAT_14caf9cd0 == 0) {
      local_50 = &local_30;
      local_30 = FUN_141030f22;
      local_40 = FUN_14081d0ea;
      local_48 = &LAB_1463c0cc2;
      local_58 = &LAB_147c9db5b;
      local_60 = &LAB_1463f9c44;
      local_68 = &DAT_149e063b2;
      local_70 = 0x2000000000;
      local_78 = 0x10000004;
      local_80 = 8;
      local_88 = 0x958;
      FUN_14081cfa3(L"/Script/Engine",L"PlayerController",&DAT_14caf9cd0,FUN_1463f9c22);
    }
    FUN_1400b4698();
  }
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x30));
  if ((longlong)*(int *)(param_1 + 0x40) != 0) {
    lVar2 = 0;
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x38) + lVar2);
      if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0xc0) == param_3)) {
        *param_2 = *(undefined4 *)(lVar1 + 0xb0);
        lVar2 = *(longlong *)(lVar1 + 0xb8);
        *(longlong *)(param_2 + 2) = lVar2;
        if ((DAT_14c950c29 == '\x01') && (lVar2 != 0)) {
          FUN_1456cec3c();
        }
        goto LAB_140496465;
      }
      lVar2 = lVar2 + 8;
    } while ((longlong)*(int *)(param_1 + 0x40) * 8 != lVar2);
  }
  *param_2 = 0;
  *(undefined8 *)(param_2 + 2) = 0;
LAB_140496465:
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x30));
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140496560 FUN_140496560 body=64 status=ok
// SIG undefined FUN_140496560(void)

void FUN_140496560(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1404965a0(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 1404965a0 FUN_1404965a0 body=309 status=ok
// SIG undefined FUN_1404965a0(void)

ulonglong FUN_1404965a0(undefined8 param_1,uint param_2,uint param_3)

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
     (param_2 == 0 || 0x40 < (int)(param_3 - param_2))) {
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
                if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_14049663f;
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
LAB_14049663f:
      uVar3 = uVar3 >> 3;
    }
  }
  return uVar3;
}



// FUNCTION 1404966d6 FUN_1404966d6 body=216 status=ok
// SIG undefined FUN_1404966d6(void)

void FUN_1404966d6(longlong param_1)

{
  FUN_1404967ae(*(undefined8 *)(param_1 + 0xb0),*(undefined4 *)(param_1 + 0xb8));
  *(undefined4 *)(param_1 + 0xb8) = 0;
  if (*(int *)(param_1 + 0xbc) != 0) {
    FUN_1410b9060(param_1 + 0xb0);
  }
  FUN_1404967ae(*(undefined8 *)(param_1 + 0xa0),*(undefined4 *)(param_1 + 0xa8));
  *(undefined4 *)(param_1 + 0xa8) = 0;
  if (*(int *)(param_1 + 0xac) != 0) {
    FUN_1410b9060(param_1 + 0xa0);
  }
  FUN_1404967ae(*(undefined8 *)(param_1 + 0xc0),*(undefined4 *)(param_1 + 200));
  *(undefined4 *)(param_1 + 200) = 0;
  if (*(int *)(param_1 + 0xcc) != 0) {
    FUN_1410b9060(param_1 + 0xc0);
  }
  *(undefined4 *)(param_1 + 0x90) = 0;
  if (*(int *)(param_1 + 0x94) != 0) {
    FUN_140254dde(param_1 + 0x78,0);
  }
  *(undefined1 *)(param_1 + 0x70) = 0;
  *(undefined2 *)(param_1 + 0x98) = 0;
  return;
}



// FUNCTION 1404967ae FUN_1404967ae body=47 status=ok
// SIG undefined FUN_1404967ae(void)

void FUN_1404967ae(longlong param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 8;
    do {
      FUN_1404967de(param_1);
      param_1 = param_1 + 0x1b8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1404967de FUN_1404967de body=263 status=ok
// SIG undefined FUN_1404967de(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1404967de(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  plVar1 = (longlong *)(param_1 + 0x198);
  if (*(int *)(param_1 + 0x1a0) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) goto LAB_140496803;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 0x1a0) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_140496803:
  *(undefined ***)(param_1 + 0x20) = &PTR_FUN_14b023b20;
  *(undefined ***)(param_1 + 0x38) = &PTR_FUN_14b023b40;
  if (*(longlong **)(param_1 + 200) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 200) + 0x10))();
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  *(undefined ***)(param_1 + 0x20) = &PTR_FUN_14a171dc0;
  if ((*(char *)(param_1 + 0x30) != '\0') &&
     (puVar2 = *(undefined8 **)(param_1 + 0x28), puVar2 != (undefined8 *)0x0)) {
    if (puVar2[3] != 0) {
      FUN_1400020a8();
    }
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    _DAT_14c9a0eac = _DAT_14c9a0eac + -1;
    *puVar2 = DAT_14c9a0ea0;
    DAT_14c9a0ea0 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x0001404968c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    return;
  }
  return;
}



// FUNCTION 1404968e6 FUN_1404968e6 body=396 status=ok
// SIG undefined FUN_1404968e6(void)

void FUN_1404968e6(longlong param_1,undefined4 *param_2,undefined8 param_3,int param_4)

{
  char cVar1;
  longlong lVar2;
  uint uVar3;
  double dVar4;
  double dVar5;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined1 local_58 [24];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((*(longlong *)(param_1 + 0x448) != 0) &&
     (((&DAT_00002e59)[*(longlong *)(param_1 + 0x448)] & 1) != 0)) {
    uVar3 = (uint)param_3;
    lVar2 = FUN_1447210f0();
    if (lVar2 != 0) {
      lVar2 = FUN_1405e677a(DAT_14cb0d2b0,lVar2);
      if (*(char *)(lVar2 + 0x88) != '\0') goto LAB_140496993;
    }
    cVar1 = FUN_140496a74(param_1);
    if (cVar1 != '\0') {
      lVar2 = *(longlong *)(param_1 + 0x2500);
      if (lVar2 != 0) {
        if (param_4 != 0) {
          FUN_140496f04(local_58,param_4);
          FUN_1405e7fe8(lVar2 + 0x3b10,local_58);
        }
        if (*(char *)(lVar2 + 0x3bbc) == '\x01') {
          dVar4 = (((double)((uint)((ulonglong)param_3 >> 0x10) & 0xffff) * 360.0 *
                    1.52587890625e-05 + *(double *)(lVar2 + 0x3b68)) * 65536.0) / 360.0;
          dVar5 = (((double)(uVar3 & 0xffff) * 360.0 * 1.52587890625e-05 +
                   *(double *)(lVar2 + 0x3b60)) * 65536.0) / 360.0;
          uVar3 = ((uint)(longlong)ROUND(dVar4 + dVar4 + 0.5) & 0xfffffffe) << 0xf |
                  (uint)((ulonglong)(longlong)ROUND(dVar5 + dVar5 + 0.5) >> 1) & 0xffff;
        }
      }
      local_68 = *(undefined8 *)(param_2 + 4);
      local_78 = *param_2;
      uStack_74 = param_2[1];
      uStack_70 = param_2[2];
      uStack_6c = param_2[3];
      FUN_140496c0a(param_1,&local_78,uVar3);
    }
  }
LAB_140496993:
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140496a74 FUN_140496a74 body=175 status=ok
// SIG undefined FUN_140496a74(void)

bool FUN_140496a74(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*(longlong *)(param_1 + 0x430) != 0) {
    lVar1 = FUN_140496b24();
    lVar3 = *(longlong *)(param_1 + 0x430);
    if ((((lVar3 != 0) && (lVar1 != 0)) && (lVar2 = *(longlong *)(lVar3 + 0x10), lVar2 != 0)) &&
       ((*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38) &&
        (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
         lVar1 + 0x30)))) goto LAB_140496abe;
  }
  if (DAT_14caf20c0 == 0) {
    return true;
  }
  lVar3 = DAT_14caf20c0;
  if (*(longlong *)(DAT_14caf20c0 + 0x30) != param_1) {
    return true;
  }
LAB_140496abe:
  lVar3 = *(longlong *)(lVar3 + 0x1800);
  lVar1 = FUN_1447210f0(param_1);
LAB_140496acd:
  lVar2 = lVar1;
  lVar1 = lVar2;
  if (*(longlong *)(lVar2 + 0x20) != 0) goto code_r0x000140496adc;
  goto LAB_140496ae7;
code_r0x000140496adc:
  lVar1 = *(longlong *)(lVar2 + 0x20);
  if ((*(uint *)(lVar2 + 8) >> 0x1c & 1) != 0) {
    lVar1 = FUN_142840154(lVar2);
LAB_140496ae7:
    if (lVar1 != 0) {
      return lVar3 == *(longlong *)(lVar1 + 0x18);
    }
    lVar1 = *(longlong *)(lVar2 + 0x20);
  }
  goto LAB_140496acd;
}



// FUNCTION 140496b24 FUN_140496b24 body=228 status=ok
// SIG undefined FUN_140496b24(void)

longlong FUN_140496b24(void)

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
  if (DAT_14caf1be8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144ae7c60;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1458cbbd2;
    local_38 = &LAB_147bcbe4b;
    local_40 = &LAB_1463ebdca;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x1000000d;
    local_60 = 8;
    local_68 = 0x1de8;
    FUN_14081cfa3(L"/Script/Engine",L"NetConnection",&DAT_14caf1be8,&DAT_147bcbe4a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14caf1be8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140496c0a FUN_140496c0a body=682 status=ok
// SIG undefined FUN_140496c0a(void)

void FUN_140496c0a(longlong param_1,undefined8 param_2,uint param_3)

{
  void *_Src;
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_ae8 [32];
  undefined1 local_ac8 [24];
  double local_ab0;
  double local_aa8;
  undefined8 local_aa0;
  undefined4 local_a30;
  char local_a2c;
  undefined8 local_a28;
  undefined4 local_a20;
  undefined1 local_a18 [2088];
  longlong local_1f0;
  longlong local_168;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 auStack_138 [12];
  char local_d8;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_ae8;
  if ((*(longlong *)(param_1 + 0x448) != 0) &&
     (((&DAT_00002e59)[*(longlong *)(param_1 + 0x448)] & 1) != 0)) {
    FUN_140496eb6(local_ac8,param_2,param_1);
    _Src = (void *)(**(code **)(**(longlong **)(param_1 + 0x448) + 0x670))();
    memcpy(local_ac8,_Src,0x98);
    local_a2c = *(char *)((longlong)_Src + 0x9c);
    if (local_a2c == '\x01') {
      local_a30 = *(undefined4 *)((longlong)_Src + 0x98);
    }
    local_a20 = *(undefined4 *)((longlong)_Src + 0xa8);
    local_a28 = *(undefined8 *)((longlong)_Src + 0xa0);
    FUN_144903306(local_a18,(longlong)_Src + 0xb0);
    local_158 = *(undefined8 *)((longlong)_Src + 0x970);
    uStack_150 = *(undefined8 *)((longlong)_Src + 0x978);
    local_148 = *(undefined8 *)((longlong)_Src + 0x980);
    uStack_140 = *(undefined8 *)((longlong)_Src + 0x988);
    local_d8 = *(char *)((longlong)_Src + 0x9f0);
    if (local_d8 == '\x01') {
      puVar2 = (undefined8 *)((longlong)_Src + 0x990);
      puVar3 = auStack_138;
      for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
        *puVar3 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar3 = puVar3 + 1;
      }
    }
    local_a8 = *(undefined8 *)((longlong)_Src + 0xa20);
    local_c8 = *(undefined4 *)((longlong)_Src + 0xa00);
    uStack_c4 = *(undefined4 *)((longlong)_Src + 0xa04);
    uStack_c0 = *(undefined4 *)((longlong)_Src + 0xa08);
    uStack_bc = *(undefined4 *)((longlong)_Src + 0xa0c);
    local_b8 = *(undefined4 *)((longlong)_Src + 0xa10);
    uStack_b4 = *(undefined4 *)((longlong)_Src + 0xa14);
    uStack_b0 = *(undefined4 *)((longlong)_Src + 0xa18);
    uStack_ac = *(undefined4 *)((longlong)_Src + 0xa1c);
    local_aa0 = 0;
    local_ab0 = (double)(param_3 & 0xffff) * 360.0 * 1.52587890625e-05;
    local_aa8 = (double)(param_3 >> 0x10) * 360.0 * 1.52587890625e-05;
    FUN_140475e1a(*(undefined8 *)(param_1 + 0x448),local_ac8);
    if (local_d8 == '\x01') {
      local_d8 = '\0';
    }
    if (local_168 != 0) {
      FUN_1400020a8();
    }
    if (local_1f0 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_90 ^ (ulonglong)auStack_ae8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140496eb6 FUN_140496eb6 body=78 status=ok
// SIG undefined FUN_140496eb6(void)

undefined8 * FUN_140496eb6(undefined8 *param_1,undefined8 *param_2,longlong param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if ((param_3 == 0) || (DAT_14cad86e8 < 1)) {
    param_1[2] = param_2[2];
    uVar1 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = uVar1;
  }
  else {
    lVar2 = FUN_1447210f0(param_3);
    FUN_1434e162a(param_1,param_2,lVar2 + 0x710);
  }
  return param_1;
}



// FUNCTION 140496f04 FUN_140496f04 body=299 status=ok
// SIG undefined FUN_140496f04(void)

ulonglong * FUN_140496f04(ulonglong *param_1,uint param_2)

{
  double dVar1;
  
  dVar1 = (double)FUN_144719204((double)(param_2 & 0xffff) * 360.0 * 1.52587890625e-05,
                                0x4076800000000000);
  dVar1 = (double)(~-(ulonglong)(dVar1 < 0.0) & (ulonglong)dVar1 |
                  (ulonglong)(dVar1 + 360.0) & -(ulonglong)(dVar1 < 0.0));
  *param_1 = ~-(ulonglong)(180.0 < dVar1) & (ulonglong)dVar1 |
             (ulonglong)(dVar1 + -360.0) & -(ulonglong)(180.0 < dVar1);
  dVar1 = (double)FUN_144719204((double)(param_2 >> 0x10) * 360.0 * 1.52587890625e-05,
                                0x4076800000000000);
  dVar1 = (double)(~-(ulonglong)(dVar1 < 0.0) & (ulonglong)dVar1 |
                  (ulonglong)(dVar1 + 360.0) & -(ulonglong)(dVar1 < 0.0));
  param_1[1] = ~-(ulonglong)(180.0 < dVar1) & (ulonglong)dVar1 |
               (ulonglong)(dVar1 + -360.0) & -(ulonglong)(180.0 < dVar1);
  param_1[2] = 0;
  return param_1;
}



// FUNCTION 140497036 FUN_140497036 body=57 status=ok
// SIG undefined FUN_140497036(void)

void FUN_140497036(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbaf188 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbaf188 = FUN_140002ddd(FUN_1465ee7b2,uVar1,L"OakStatusEffectMetaData");
  }
  return;
}



// FUNCTION 140497070 FUN_140497070 body=152 status=ok
// SIG undefined FUN_140497070(void)

void FUN_140497070(longlong *param_1,undefined4 *param_2)

{
  longlong lVar1;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 *local_40;
  undefined1 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = *param_1;
  local_68 = param_2[8];
  uStack_64 = param_2[9];
  uStack_60 = param_2[10];
  uStack_5c = param_2[0xb];
  local_58 = *(undefined8 *)(param_2 + 0xc);
  local_38 = 1;
  local_40 = &local_68;
  FUN_14049710a(&local_40,*(undefined8 *)(lVar1 + 0x40));
  local_68 = *param_2;
  uStack_64 = param_2[1];
  uStack_60 = param_2[2];
  uStack_5c = param_2[3];
  local_58 = *(undefined8 *)(param_2 + 4);
  uStack_50 = param_2[6];
  uStack_4c = param_2[7];
  local_38 = 1;
  local_40 = &local_68;
  FUN_14049722e(&local_40,*(undefined8 *)(lVar1 + 0x40));
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14049710a FUN_14049710a body=291 status=ok
// SIG undefined FUN_14049710a(void)

void FUN_14049710a(longlong *param_1,longlong param_2)

{
  undefined8 *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  longlong lVar6;
  longlong lVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  longlong lVar11;
  longlong lVar12;
  
  if ((param_2 != 0) && (1 < *(byte *)(param_2 + 0x90))) {
    lVar11 = param_1[1];
    puVar5 = (undefined4 *)*param_1;
    lVar6 = *(longlong *)(param_2 + 0x10);
    uVar8 = puVar5[1];
    uVar9 = puVar5[2];
    uVar10 = puVar5[3];
    *(undefined4 *)(param_2 + 0xf0) = *puVar5;
    *(undefined4 *)(param_2 + 0xf4) = uVar8;
    *(undefined4 *)(param_2 + 0xf8) = uVar9;
    *(undefined4 *)(param_2 + 0xfc) = uVar10;
    *(undefined8 *)(param_2 + 0x100) = *(undefined8 *)(puVar5 + 4);
    if (((char)lVar11 == '\x01') &&
       ((*(byte *)(param_2 + 0x94) = *(byte *)(param_2 + 0x94) | 0x20, lVar6 != 0 &&
        (lVar11 = *(longlong *)(lVar6 + 8), lVar11 != 0)))) {
      if (DAT_14c992a90 == '\x01') {
        AcquireSRWLockExclusive((PSRWLOCK)(lVar11 + 0x128));
        if (*(int *)(lVar6 + 0x18) == -1) {
          lVar7 = *(longlong *)(lVar11 + 0x98);
          uVar3 = *(uint *)(lVar6 + 0x1c);
          piVar2 = (int *)(lVar7 + 0x160 + (ulonglong)uVar3 * 4);
          *piVar2 = *piVar2 + 1;
          *(int *)(lVar7 + 0x194) = *(int *)(lVar7 + 0x194) + 1;
          lVar7 = lVar7 + (ulonglong)uVar3 * 0x10;
          iVar4 = *(int *)(lVar7 + 0x1a0);
          *(int *)(lVar6 + 0x18) = iVar4;
          *(uint *)(lVar7 + 0x1a0) = iVar4 + 1U;
          if (*(uint *)(lVar7 + 0x1a4) < iVar4 + 1U) {
            FUN_140431d5c((longlong *)(lVar7 + 0x198),iVar4);
          }
          lVar7 = *(longlong *)(lVar7 + 0x198);
          lVar12 = (longlong)iVar4 * 0x20;
          *(longlong *)(lVar7 + lVar12) = lVar6;
          *(undefined4 *)(lVar7 + 8 + lVar12) = 0;
          puVar1 = (undefined8 *)(lVar7 + 0x10 + lVar12);
          *puVar1 = 0;
          puVar1[1] = 0;
        }
                    /* WARNING: Could not recover jumptable at 0x00014049719c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        ReleaseSRWLockExclusive((PSRWLOCK)(lVar11 + 0x128));
        return;
      }
      FUN_144aa3818(*(longlong *)(lVar11 + 0x98) + 0x160,lVar6);
      return;
    }
  }
  return;
}



// FUNCTION 14049722e FUN_14049722e body=291 status=ok
// SIG undefined FUN_14049722e(void)

void FUN_14049722e(longlong *param_1,longlong param_2)

{
  undefined8 *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  longlong lVar6;
  longlong lVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  longlong lVar15;
  longlong lVar16;
  
  if ((param_2 != 0) && (1 < *(byte *)(param_2 + 0x90))) {
    lVar15 = param_1[1];
    puVar5 = (undefined4 *)*param_1;
    lVar6 = *(longlong *)(param_2 + 0x10);
    uVar8 = puVar5[1];
    uVar9 = puVar5[2];
    uVar10 = puVar5[3];
    uVar11 = puVar5[4];
    uVar12 = puVar5[5];
    uVar13 = puVar5[6];
    uVar14 = puVar5[7];
    *(undefined4 *)(param_2 + 0x110) = *puVar5;
    *(undefined4 *)(param_2 + 0x114) = uVar8;
    *(undefined4 *)(param_2 + 0x118) = uVar9;
    *(undefined4 *)(param_2 + 0x11c) = uVar10;
    *(undefined4 *)(param_2 + 0x120) = uVar11;
    *(undefined4 *)(param_2 + 0x124) = uVar12;
    *(undefined4 *)(param_2 + 0x128) = uVar13;
    *(undefined4 *)(param_2 + 300) = uVar14;
    if (((char)lVar15 == '\x01') &&
       ((*(byte *)(param_2 + 0x94) = *(byte *)(param_2 + 0x94) | 0x20, lVar6 != 0 &&
        (lVar15 = *(longlong *)(lVar6 + 8), lVar15 != 0)))) {
      if (DAT_14c992a90 == '\x01') {
        AcquireSRWLockExclusive((PSRWLOCK)(lVar15 + 0x128));
        if (*(int *)(lVar6 + 0x18) == -1) {
          lVar7 = *(longlong *)(lVar15 + 0x98);
          uVar3 = *(uint *)(lVar6 + 0x1c);
          piVar2 = (int *)(lVar7 + 0x160 + (ulonglong)uVar3 * 4);
          *piVar2 = *piVar2 + 1;
          *(int *)(lVar7 + 0x194) = *(int *)(lVar7 + 0x194) + 1;
          lVar7 = lVar7 + (ulonglong)uVar3 * 0x10;
          iVar4 = *(int *)(lVar7 + 0x1a0);
          *(int *)(lVar6 + 0x18) = iVar4;
          *(uint *)(lVar7 + 0x1a0) = iVar4 + 1U;
          if (*(uint *)(lVar7 + 0x1a4) < iVar4 + 1U) {
            FUN_140431d5c((longlong *)(lVar7 + 0x198),iVar4);
          }
          lVar7 = *(longlong *)(lVar7 + 0x198);
          lVar16 = (longlong)iVar4 * 0x20;
          *(longlong *)(lVar7 + lVar16) = lVar6;
          *(undefined4 *)(lVar7 + 8 + lVar16) = 0;
          puVar1 = (undefined8 *)(lVar7 + 0x10 + lVar16);
          *puVar1 = 0;
          puVar1[1] = 0;
        }
                    /* WARNING: Could not recover jumptable at 0x0001404972c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        ReleaseSRWLockExclusive((PSRWLOCK)(lVar15 + 0x128));
        return;
      }
      FUN_144aa3818(*(longlong *)(lVar15 + 0x98) + 0x160,lVar6);
      return;
    }
  }
  return;
}



// FUNCTION 140497351 FUN_140497351 body=292 status=ok
// SIG undefined FUN_140497351(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140497351(undefined8 *param_1,longlong *param_2)

{
  byte bVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if (*(char *)((longlong)param_1 + 0x1e) != -1) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c99e178) {
      FUN_144b3d300(&DAT_14c99e178);
      if (DAT_14c99e178 == -1) {
        _DAT_14c99e148 = &PTR_LAB_149e668b0;
        _DAT_14c99e150 = 0;
        FUN_1405bceb4(&DAT_14c99e148);
        _DAT_14c99e148 = &PTR_FUN_149fcd880;
        DAT_14c99e158 = 0;
        _DAT_14c99e160 = 0;
        _DAT_14c99e168 = 0;
        _DAT_14c99e170 = 0;
        atexit((_func_5014 *)&LAB_142aedb63);
        _Init_thread_footer(&DAT_14c99e178);
      }
    }
    lVar2 = (ulonglong)*(byte *)((longlong)param_1 + 0x1e) * 0x58 + _DAT_14c99e168;
    if (lVar2 != 0) {
      plVar3 = (longlong *)(lVar2 + 0x28);
      (**(code **)(*param_2 + 0x88))(param_2,plVar3,0,0);
      bVar1 = *(byte *)((longlong)param_1 + 0x1f);
      if (((bVar1 & 1) != 0) && (*plVar3 != 0)) {
        if ((bVar1 & 2) == 0) {
          param_1 = (undefined8 *)*param_1;
        }
        FUN_140497476(param_2,plVar3,
                      (ulonglong)((uint)(1L << (bVar1 >> 2)) & 0xfffffffe) + (longlong)param_1,0,0);
      }
    }
  }
  return;
}



// FUNCTION 140497476 FUN_140497476 body=154 status=ok
// SIG undefined FUN_140497476(void)

void FUN_140497476(longlong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  byte bVar1;
  uint uVar2;
  code *pcVar3;
  longlong lVar4;
  
  (**(code **)(*param_1 + 0x88))(param_1,param_2,param_4,param_5);
  lVar4 = *param_2;
  if ((*(byte *)(lVar4 + 0xb0) & 0x40) != 0) {
    pcVar3 = (code *)(**(code **)(**(longlong **)(lVar4 + 0xb8) + 0x88))();
    (*pcVar3)(param_3,param_1);
    lVar4 = *param_2;
  }
  uVar2 = (**(code **)(*param_1 + 0x38))(param_1);
  bVar1 = (**(code **)(*param_1 + 0x48))(param_1);
                    /* WARNING: Could not recover jumptable at 0x0001404974ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)&PTR_FUN_149eb10f0 + (ulonglong)((uVar2 & 0xff) * 0x10 + (uint)bVar1 * 8)))
            (param_1,lVar4,param_3,param_4);
  return;
}



// FUNCTION 140497510 FUN_140497510 body=182 status=ok
// SIG undefined FUN_140497510(void)

void FUN_140497510(longlong param_1,longlong param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined1 auStack_78 [44];
  undefined1 local_4c [12];
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1449bd2b2(param_1 + 0x150);
  if (((*(char *)(param_1 + -600) == '\x03') && (*(longlong *)(param_1 + 0x30) != 0)) &&
     (lVar1 = *(longlong *)(param_1 + 0x30) + 0x858, lVar1 != 0)) {
    local_40 = *(undefined8 *)(param_2 + 0x68);
    FUN_1401533ba(local_4c,&local_40,1);
    FUN_140bfca4e(lVar1,local_4c,param_2 + 0x78,0);
  }
  FUN_1409d1ca6(param_1 + 0x370,param_2,param_3);
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1404975e8 FUN_1404975e8 body=2504 status=ok
// SIG undefined FUN_1404975e8(void)

void FUN_1404975e8(undefined8 ****param_1,undefined8 ****param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *****pppppuVar3;
  byte bVar4;
  undefined1 *puVar5;
  undefined8 ****ppppuVar6;
  longlong *plVar7;
  uint uVar8;
  undefined8 *****pppppuVar9;
  uint uVar10;
  uint uVar11;
  size_t _Size;
  undefined8 ****_Size_00;
  int iVar12;
  longlong lVar13;
  undefined1 auStack_248 [40];
  undefined8 ***local_220;
  undefined8 ***local_218;
  ulonglong local_210;
  undefined8 ***local_208;
  undefined8 ***local_200;
  undefined8 ***local_1f8;
  undefined8 ***local_1f0;
  undefined1 *local_1e8;
  undefined8 ***local_1e0;
  undefined8 ***local_1d8;
  undefined8 ***local_1d0;
  undefined8 ****local_1c8;
  undefined8 ****local_1c0;
  undefined8 **local_1b8;
  undefined8 ***local_1b0;
  code *local_1a8;
  undefined8 ***local_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_178;
  undefined4 local_170;
  undefined8 local_16c;
  undefined4 local_164;
  undefined8 local_158;
  undefined4 local_150;
  undefined8 **local_148;
  undefined8 uStack_140;
  undefined8 local_128;
  undefined4 local_120;
  undefined8 local_11c;
  undefined4 local_114;
  longlong local_108;
  undefined4 local_100;
  undefined8 ****local_f8;
  undefined8 uStack_f0;
  ushort local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined8 local_cc;
  undefined4 local_c4;
  longlong local_b8;
  undefined4 local_b0;
  undefined8 **local_a8 [2];
  undefined8 ***local_98;
  undefined8 local_90;
  undefined1 local_88 [16];
  undefined1 *local_78;
  uint local_70;
  uint local_6c;
  undefined8 ***local_68 [2];
  undefined8 ****local_58;
  uint local_50;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_248;
  local_218 = param_2;
  if (param_1[0xd] == *param_2) goto LAB_140497da5;
  *(undefined1 *)(param_1 + 0x22) = 1;
  if (*(char *)(param_1[9] + 0xe) == '\x01') {
    (*(code *)(*param_1)[8])(param_1,&local_f8,*param_2);
    param_1[0xd] = *param_2;
    (*(code *)(*param_1)[0xc])(param_1,&local_f8,0);
    pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)(byte)local_d8 * 0x120));
    if (pcVar1 != (code *)0x0) {
      pppppuVar3 = &local_f8;
      if (0x18 < local_e0) {
        pppppuVar3 = (undefined8 *****)local_f8;
      }
      (*pcVar1)(pppppuVar3);
    }
    pppppuVar3 = (undefined8 *****)local_f8;
    if (local_e0 < 0x19) goto LAB_140497da5;
  }
  else {
    local_208 = param_1 + 0xd;
    if (*(int *)(param_1 + 0x21) < 1) {
      *local_208 = *param_2;
      goto LAB_140497da5;
    }
    ppppuVar6 = (undefined8 ****)param_1[8];
    if (*(int *)((longlong)ppppuVar6 + 0x4c) == 0) {
LAB_140497f27:
      local_220 = (undefined8 ****)0x0;
    }
    else {
      uVar8 = *(uint *)(ppppuVar6 + 9);
      local_220 = (undefined8 ****)0x0;
      if ((-1 < (int)uVar8) && ((int)uVar8 < DAT_14c9647dc)) {
        plVar7 = (longlong *)
                 ((ulonglong)((uVar8 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8));
        if ((plVar7 == (longlong *)0x0) ||
           (((int)plVar7[2] != *(int *)((longlong)ppppuVar6 + 0x4c) ||
            ((*(uint *)(plVar7 + 1) & 0x10200000) != 0)))) goto LAB_140497f27;
        local_220 = (undefined8 ***)*plVar7;
      }
    }
    local_70 = *(uint *)(ppppuVar6 + 0xf);
    local_210 = (ulonglong)local_70;
    local_58 = (undefined8 *****)0x0;
    local_4c = 0x80;
    uVar10 = local_70 + 0x1f;
    uVar8 = uVar10 >> 5;
    local_50 = local_70;
    if (uVar10 < 0x20) {
      local_78 = (undefined1 *)0x0;
      local_6c = 0x80;
    }
    else {
      if (uVar10 < 0xa0) {
        pppppuVar3 = (undefined8 *****)local_68;
LAB_140497706:
        bVar2 = false;
        memset(pppppuVar3,0,(ulonglong)(uVar10 >> 3 & 0xfffffffc));
      }
      else {
        FUN_1446efa72(&local_58,0,uVar8,4);
        local_4c = uVar10 & 0xffffffe0;
        pppppuVar3 = (undefined8 *****)local_68;
        if ((undefined8 *****)local_58 != (undefined8 *****)0x0) {
          pppppuVar3 = (undefined8 *****)local_58;
        }
        if (uVar10 < 0x120) goto LAB_140497706;
        memset(pppppuVar3,0,(ulonglong)(uVar8 * 4));
        bVar2 = true;
      }
      uVar11 = local_50 + 0x1f;
      if (-1 < (int)local_50) {
        uVar11 = local_50;
      }
      if ((int)local_50 % 0x20 != 0) {
        pppppuVar3 = (undefined8 *****)local_58;
        if ((undefined8 *****)local_58 == (undefined8 *****)0x0) {
          pppppuVar3 = (undefined8 *****)local_68;
        }
        bVar4 = -(char)((int)local_50 % 0x20);
        *(uint *)((longlong)pppppuVar3 + (longlong)((int)uVar11 >> 5) * 4) =
             (uint)(*(int *)((longlong)pppppuVar3 + (longlong)((int)uVar11 >> 5) * 4) <<
                   (bVar4 & 0x1f)) >> (bVar4 & 0x1f);
      }
      local_78 = (undefined1 *)0x0;
      local_6c = 0x80;
      local_70 = (uint)local_210;
      if (0x9f < uVar10) {
        FUN_1446efa72(&local_78,0,uVar8,4);
        local_6c = uVar10 & 0xffffffe0;
      }
      puVar5 = local_78;
      if (local_78 == (undefined1 *)0x0) {
        puVar5 = local_88;
      }
      if (bVar2) {
        uVar11 = uVar8 * 4;
      }
      else {
        uVar11 = uVar10 >> 3 & 0xfffffffc;
      }
      memset(puVar5,0,(ulonglong)uVar11);
      uVar11 = local_70 + 0x1f;
      if (-1 < (int)local_70) {
        uVar11 = local_70;
      }
      if ((int)local_70 % 0x20 != 0) {
        puVar5 = local_88;
        if (local_78 != (undefined1 *)0x0) {
          puVar5 = local_78;
        }
        bVar4 = -(char)((int)local_70 % 0x20);
        *(uint *)(puVar5 + (longlong)((int)uVar11 >> 5) * 4) =
             (uint)(*(int *)(puVar5 + (longlong)((int)uVar11 >> 5) * 4) << (bVar4 & 0x1f)) >>
             (bVar4 & 0x1f);
      }
    }
    local_98 = (undefined8 ****)0x0;
    local_90 = 0x8000000000;
    local_d8 = 0;
    iVar12 = 0;
    local_d0 = 0;
    local_f8 = (undefined8 *****)0x0;
    uStack_f0 = 0;
    local_cc = 0xffffffff00000080;
    local_c4 = 0;
    local_b8 = 0;
    local_b0 = 0;
    local_1d0 = &local_148;
    local_128 = 0;
    local_120 = 0;
    local_148 = (undefined8 ***)0x0;
    uStack_140 = 0;
    local_11c = 0xffffffff00000080;
    local_114 = 0;
    local_108 = 0;
    local_100 = 0;
    local_178 = 0;
    local_170 = 0;
    local_198 = 0;
    uStack_190 = 0;
    local_16c = 0xffffffff00000080;
    local_164 = 0;
    local_158 = 0;
    local_150 = 0;
    local_1a0 = &local_1f8;
    local_1f0 = local_218;
    local_1e8 = local_88;
    local_1d8 = local_68;
    local_1a8 = FUN_143d5e758;
    local_200 = ppppuVar6;
    local_1f8 = ppppuVar6;
    local_1e0 = param_1;
    local_1c8 = &local_f8;
    FUN_14056916e(param_1);
    pppppuVar3 = (undefined8 *****)param_1[0x20];
    pppppuVar9 = pppppuVar3;
    if (pppppuVar3 == (undefined8 *****)0x0) {
      pppppuVar9 = (undefined8 *****)(param_1 + 0x10);
    }
    if ((longlong)*(int *)(param_1 + 0x21) != 0) {
      lVar13 = (longlong)*(int *)(param_1 + 0x21) << 4;
      do {
        if ((((*(uint *)((longlong)pppppuVar9 + 4) != 0) &&
             (uVar11 = *(uint *)pppppuVar9, -1 < (int)uVar11)) && ((int)uVar11 < DAT_14c9647dc)) &&
           (((plVar7 = (longlong *)
                       ((ulonglong)((uVar11 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8)),
             plVar7 != (longlong *)0x0 &&
             (*(uint *)(plVar7 + 2) == *(uint *)((longlong)pppppuVar9 + 4))) &&
            (((*(uint *)(plVar7 + 1) & 0x10200000) == 0 &&
             (local_1b0 = (undefined8 ***)*plVar7,
             (undefined8 ****)local_1b0 != (undefined8 ****)0x0)))))) {
          local_90 = CONCAT44(local_90._4_4_,(int)local_210);
          if (0x1f < uVar10) {
            ppppuVar6 = (undefined8 ****)local_98;
            if (local_90._4_4_ + 0x1fU >> 5 < uVar8) {
              if ((undefined8 ****)local_98 == (undefined8 ****)0x0 && uVar10 < 0xa0) {
                ppppuVar6 = (undefined8 ****)0x0;
              }
              else {
                uVar11 = 0;
                if (0x9f < uVar10) {
                  uVar11 = uVar8;
                }
                FUN_1446efa72(&local_98,0,uVar11,4);
                ppppuVar6 = (undefined8 ****)local_98;
              }
              local_90 = CONCAT44(uVar10,(int)local_90) & 0xffffffe0ffffffff;
            }
            if (ppppuVar6 == (undefined8 ****)0x0) {
              ppppuVar6 = (undefined8 ****)local_a8;
            }
            if (uVar10 < 0x120) {
              _Size = (ulonglong)(uVar8 - 1) * 4 + 4;
            }
            else {
              _Size = (size_t)(uVar8 * 4);
            }
            memset(ppppuVar6,0,_Size);
            iVar12 = (int)local_90 + 0x1f;
            if (-1 < (int)local_90) {
              iVar12 = (int)local_90;
            }
            if ((int)local_90 % 0x20 != 0) {
              ppppuVar6 = (undefined8 ****)local_98;
              if ((undefined8 ****)local_98 == (undefined8 ****)0x0) {
                ppppuVar6 = (undefined8 ****)local_a8;
              }
              bVar4 = -(char)((int)local_90 % 0x20);
              *(uint *)((longlong)ppppuVar6 + (longlong)(iVar12 >> 5) * 4) =
                   (uint)(*(int *)((longlong)ppppuVar6 + (longlong)(iVar12 >> 5) * 4) <<
                         (bVar4 & 0x1f)) >> (bVar4 & 0x1f);
            }
          }
          local_1f8 = local_200;
          local_1f0 = local_68;
          local_1e8 = local_88;
          local_1e0 = local_a8;
          local_1d8 = local_220;
          local_1d0 = &local_1b0;
          local_1a0 = &local_1f8;
          local_1a8 = FUN_143d5e8d2;
          local_1c8 = pppppuVar9;
          local_1c0 = &local_f8;
          FUN_14067478e(param_1,local_208,&local_1a8);
        }
        pppppuVar9 = pppppuVar9 + 2;
        lVar13 = lVar13 + -0x10;
      } while (lVar13 != 0);
      pppppuVar3 = (undefined8 *****)param_1[0x20];
      iVar12 = *(int *)(param_1 + 0x21);
    }
    *local_208 = *local_218;
    pppppuVar9 = (undefined8 *****)(param_1 + 0x10);
    if (pppppuVar3 != (undefined8 *****)0x0) {
      pppppuVar9 = pppppuVar3;
    }
    if (iVar12 != 0) {
      lVar13 = (longlong)iVar12 << 4;
      local_218 = (undefined8 ***)(ulonglong)(uVar8 * 4);
      do {
        if (((*(uint *)((longlong)pppppuVar9 + 4) != 0) &&
            (uVar11 = *(uint *)pppppuVar9, -1 < (int)uVar11)) &&
           ((((int)uVar11 < DAT_14c9647dc &&
             (((plVar7 = (longlong *)
                         ((ulonglong)((uVar11 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8)),
               plVar7 != (longlong *)0x0 &&
               (*(uint *)(plVar7 + 2) == *(uint *)((longlong)pppppuVar9 + 4))) &&
              ((*(uint *)(plVar7 + 1) & 0x10200000) == 0)))) &&
            (local_1b0 = (undefined8 ***)*plVar7, (undefined8 ****)local_1b0 != (undefined8 ****)0x0
            )))) {
          local_90 = CONCAT44(local_90._4_4_,(int)local_210);
          if (0x1f < uVar10) {
            if (local_90._4_4_ + 0x1fU >> 5 < uVar8) {
              FUN_14499171c(local_a8,0,uVar8,4);
              local_90 = CONCAT44(uVar10,(int)local_90) & 0xffffffe0ffffffff;
            }
            ppppuVar6 = (undefined8 ****)local_98;
            if ((undefined8 ****)local_98 == (undefined8 ****)0x0) {
              ppppuVar6 = (undefined8 ****)local_a8;
            }
            _Size_00 = (undefined8 ****)local_218;
            if (uVar10 < 0x120) {
              _Size_00 = (undefined8 ****)((ulonglong)(uVar8 - 1) * 4 + 4);
            }
            memset(ppppuVar6,0,(size_t)_Size_00);
            iVar12 = (int)local_90 + 0x1f;
            if (-1 < (int)local_90) {
              iVar12 = (int)local_90;
            }
            if ((int)local_90 % 0x20 != 0) {
              ppppuVar6 = (undefined8 ****)local_98;
              if ((undefined8 ****)local_98 == (undefined8 ****)0x0) {
                ppppuVar6 = (undefined8 ****)local_a8;
              }
              bVar4 = -(char)((int)local_90 % 0x20);
              *(uint *)((longlong)ppppuVar6 + (longlong)(iVar12 >> 5) * 4) =
                   (uint)(*(int *)((longlong)ppppuVar6 + (longlong)(iVar12 >> 5) * 4) <<
                         (bVar4 & 0x1f)) >> (bVar4 & 0x1f);
            }
          }
          local_1c8 = &local_1b0;
          local_1f0 = local_200;
          local_1e8 = local_88;
          local_1e0 = local_68;
          local_1d0 = local_220;
          local_1b8 = &local_148;
          local_1a0 = &local_1f8;
          local_1a8 = FUN_143d5ea48;
          local_1f8 = param_1;
          local_1d8 = local_a8;
          local_1c0 = pppppuVar9;
          FUN_14067478e(param_1,local_208,&local_1a8);
        }
        pppppuVar9 = pppppuVar9 + 2;
        lVar13 = lVar13 + -0x10;
      } while (lVar13 != 0);
    }
    local_150 = 0;
    FUN_140497fb2();
    local_100 = 0;
    if (local_108 != 0) {
      FUN_1400020a8();
    }
    FUN_140497fb2(&local_148);
    local_b0 = 0;
    if (local_b8 != 0) {
      FUN_1400020a8();
    }
    FUN_140497fb2(&local_f8);
    if ((undefined8 ****)local_98 != (undefined8 ****)0x0) {
      FUN_1400020a8();
    }
    if (local_78 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
    pppppuVar3 = (undefined8 *****)local_58;
    if ((undefined8 *****)local_58 == (undefined8 *****)0x0) goto LAB_140497da5;
  }
  FUN_1400020a8(pppppuVar3);
LAB_140497da5:
  if ((local_48 ^ (ulonglong)auStack_248) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140497fb2 FUN_140497fb2 body=118 status=ok
// SIG undefined FUN_140497fb2(void)

void FUN_140497fb2(longlong *param_1)

{
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_14474875a(param_1,0);
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



// FUNCTION 140498028 FUN_140498028 body=189 status=ok
// SIG undefined FUN_140498028(void)

undefined8 * FUN_140498028(longlong param_1,undefined8 *param_2,longlong param_3)

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
      if (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x48) + 0x50) + lVar5 * 8) == param_3)
      {
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



// FUNCTION 1404980e6 FUN_1404980e6 body=61 status=ok
// SIG undefined FUN_1404980e6(void)

void FUN_1404980e6(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x100);
  if (*(longlong *)(param_1 + 0x100) == 0) {
    lVar1 = param_1;
  }
  FUN_1403d7d42(lVar1,*(undefined4 *)(param_1 + 0x108));
  if (*(longlong *)(param_1 + 0x100) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140498124 FUN_140498124 body=162 status=ok
// SIG undefined FUN_140498124(void)

void FUN_140498124(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  
  uVar6 = *(uint *)(param_2 + 1);
  if (uVar6 != 0) {
    iVar1 = *(int *)(param_1 + 0x108);
    *(uint *)(param_1 + 0x108) = iVar1 + uVar6;
    if ((uint)(*(int *)(param_1 + 0x10c) - iVar1) < uVar6) {
      FUN_1488728b4(param_1,iVar1);
    }
    lVar2 = *param_2;
    lVar5 = *(longlong *)(param_1 + 0x100);
    if (*(longlong *)(param_1 + 0x100) == 0) {
      lVar5 = param_1;
    }
    lVar5 = (longlong)iVar1 * 0x10 + lVar5;
    if (uVar6 != 0) {
      lVar4 = 0;
      do {
        *(undefined8 *)(lVar5 + lVar4) = *(undefined8 *)(lVar2 + lVar4);
        lVar3 = *(longlong *)(lVar2 + 8 + lVar4);
        *(longlong *)(lVar5 + 8 + lVar4) = lVar3;
        if (lVar3 != 0) {
          LOCK();
          *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
          UNLOCK();
        }
        lVar4 = lVar4 + 0x10;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
    return;
  }
  return;
}



// FUNCTION 1404981c6 FUN_1404981c6 body=333 status=ok
// SIG undefined FUN_1404981c6(void)

undefined8
FUN_1404981c6(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined1 param_6)

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
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_14049830c;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_14049830c;
    }
    FUN_140192332(param_1 + 0x18,&local_40,0);
  }
  else {
LAB_14049830c:
    local_40 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1404982b5;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      local_50 = param_6;
      local_58 = param_5;
      (**(code **)(param_1 + 0x20))
                (*plVar5 + (longlong)*(int *)(param_1 + 0x28),param_2,param_3,param_4);
      uVar6 = 1;
      goto LAB_1404982b5;
    }
  }
  uVar6 = 0;
LAB_1404982b5:
  if ((local_40 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_40);
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140498314 FUN_140498314 body=406 status=ok
// SIG undefined FUN_140498314(void)

void FUN_140498314(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  char cVar2;
  char cVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
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
  code *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_3 != 0) {
    if (DAT_14cae8e78 == 0) {
      local_50 = &local_38;
      local_38 = FUN_1449e2820;
      local_40 = &LAB_1457dfdaa;
      local_48 = &LAB_14637debc;
      local_58 = &LAB_147b97a51;
      local_60 = FUN_1417ddfba;
      local_68 = L"Engine";
      local_70 = 0;
      local_78 = 0x10000008;
      local_80 = 0x10;
      local_88 = 0x1f0;
      FUN_14081cfa3(L"/Script/Engine",L"LevelStreamingLevelInstance",&DAT_14cae8e78,&DAT_147b97a50);
    }
    if ((*(int *)(DAT_14cae8e78 + 0x38) <= *(int *)(*(longlong *)(param_3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cae8e78 + 0x38) * 8) == DAT_14cae8e78 + 0x30)) {
      plVar4 = (longlong *)FUN_1448a53de(param_3);
      if (plVar4 != (longlong *)0x0) {
        cVar3 = (**(code **)(*plVar4 + 0x18))(plVar4);
        goto LAB_140498373;
      }
    }
  }
  plVar4 = (longlong *)0x0;
  cVar3 = '\0';
LAB_140498373:
  plVar1 = (longlong *)(param_1 + 0x390);
  cVar2 = (**(code **)(*(longlong *)(param_1 + 0x390) + 0x18))(plVar1);
  if ((cVar3 != '\0') && (cVar2 != '\0')) {
    uVar5 = (**(code **)(*plVar4 + 0x10))(plVar4);
    uVar6 = (**(code **)(*plVar1 + 0x10))(plVar1);
    cVar3 = FUN_144b39676(uVar5,uVar6);
    if (cVar3 != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_a8);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140498822 FUN_140498822 body=162 status=ok
// SIG undefined FUN_140498822(void)

void FUN_140498822(longlong *param_1,undefined8 param_2)

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
        goto LAB_1404988af;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_1404988af:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 1404988d2 FUN_1404988d2 body=36 status=ok
// SIG undefined FUN_1404988d2(void)

undefined8 FUN_1404988d2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 1404988f6 FUN_1404988f6 body=19 status=ok
// SIG undefined FUN_1404988f6(void)

void FUN_1404988f6(undefined8 *param_1,undefined8 *param_2)

{
  FUN_14049890a(*param_1,param_1[1],*param_2);
  return;
}



// FUNCTION 14049890a FUN_14049890a body=131 status=ok
// SIG undefined FUN_14049890a(void)

ulonglong FUN_14049890a(undefined8 param_1,longlong param_2,double param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  ulonglong uVar4;
  
  plVar2 = *(longlong **)(param_2 + 0x30);
  plVar3 = *(longlong **)(param_2 + 0x38);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  if ((0.0 <= param_3) || (*(char *)((longlong)plVar2 + 0x51) == '\x01')) {
    if ((0.0 <= param_3) && (*(char *)((longlong)plVar2 + 0x51) == '\0')) {
      (**(code **)(*plVar2 + 0x10))(plVar2,(float)param_3);
      if (*(char *)((longlong)plVar2 + 0x51) != '\x01') goto LAB_140498989;
    }
    *(undefined1 *)(param_2 + 0x1c) = 1;
    uVar4 = CONCAT71((int7)((ulonglong)param_2 >> 8),1);
  }
  else {
LAB_140498989:
    uVar4 = 0;
  }
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
  return uVar4 & 0xffffffff;
}



// FUNCTION 14049898e FUN_14049898e body=373 status=ok
// SIG undefined FUN_14049898e(void)

void FUN_14049898e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_188 [32];
  undefined1 local_168 [48];
  longlong local_138;
  undefined4 local_130 [56];
  undefined1 local_50 [56];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_188;
  if ((*(byte *)(param_1 + 0x950) & 1) == 0) {
    FUN_1401c0a16(local_50,*(undefined8 *)(param_1 + 0xa48));
    lVar5 = *(longlong *)(param_1 + 0x660);
    if (*(char *)(lVar5 + 0x107) == '\x01') {
      local_130[0] = 0;
      FUN_1406f094e(local_50,local_130,1,0);
      FUN_1401c0d50(local_130,*(undefined8 *)(param_1 + 0xa48));
      FUN_140498b04(local_130);
      FUN_1404999a0(local_130,*(longlong *)(param_1 + 0x660) + 0x108,
                    *(longlong *)(param_1 + 0x660) + 0x118);
      lVar5 = *(longlong *)(param_1 + 0x660);
    }
    uVar3 = *(undefined8 *)(lVar5 + 0x218);
    plVar4 = *(longlong **)(lVar5 + 0x220);
    if (plVar4 == (longlong *)0x0) {
      FUN_1449bd3ca(local_168,uVar3);
    }
    else {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
      FUN_1449bd3ca(local_168,uVar3);
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
    if (local_138 != 0) {
      local_130[0] = 0;
      FUN_1406f094e(local_50,local_130,1,0);
      FUN_1448a161e(local_130,*(undefined8 *)(param_1 + 0xa48));
      FUN_1401c1f10(local_130);
      FUN_1401c1f4e(local_130,local_168);
    }
    *(byte *)(param_1 + 0x950) = *(byte *)(param_1 + 0x950) | 1;
  }
  if ((local_18 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140498b04 FUN_140498b04 body=79 status=ok
// SIG undefined FUN_140498b04(void)

void FUN_140498b04(longlong param_1)

{
  FUN_140498b54(param_1,1,0);
  FUN_140498b54(param_1 + 0x38,1,0);
  FUN_140498b54(param_1 + 0x70,1,0);
  FUN_1404996b6(param_1 + 0xa8,&DAT_14c8464e0,1,0);
  return;
}



// FUNCTION 140498b54 FUN_140498b54 body=313 status=ok
// SIG undefined FUN_140498b54(void)

void FUN_140498b54(undefined8 *param_1,char param_2,longlong param_3)

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
        goto LAB_140498c22;
        iVar7 = *(int *)(*(longlong *)(lVar5 + 0x58) + (longlong)iVar7 * 0x14 + 0xc);
      } while (iVar7 != -1);
    }
  }
  FUN_140b203e2(lVar5,lVar8);
  lVar5 = param_1[1];
  lVar8 = param_1[3];
LAB_140498c22:
  if (param_3 == 0) {
    param_3 = param_1[4];
  }
  local_28 = param_2 == '\x01';
  local_27 = 0;
  local_30 = param_3;
  uVar4 = FUN_140498c8e(lVar5,param_1[2],lVar8);
  param_1[5] = uVar4;
  param_1[6] = uVar4;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140498c8e FUN_140498c8e body=70 status=ok
// SIG undefined FUN_140498c8e(void)

void FUN_140498c8e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  
  cVar1 = FUN_140498cd4();
  if (cVar1 == '\0') {
    FUN_140499372(param_1,param_2,param_3,param_4);
  }
  FUN_140499144(param_1,param_2,param_3);
  return;
}



// FUNCTION 140498cd4 FUN_140498cd4 body=228 status=ok
// SIG undefined FUN_140498cd4(void)

undefined8 FUN_140498cd4(longlong param_1,ulonglong param_2,longlong param_3)

{
  ulonglong uVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  bool bVar8;
  
  uVar4 = (uint)param_3;
  uVar3 = (uint)param_2;
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    uVar3 = (int)(param_2 >> 0x20) + (uVar3 << 0x10 | uVar3 & 0xffff) +
            ((uVar3 & 0xffff) >> 4) + ((uVar3 >> 0x10) << 0x13 | uVar3 >> 0x10);
    lVar6 = param_1 + 0x40;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      lVar6 = *(longlong *)(param_1 + 0x48);
    }
    iVar5 = *(int *)(lVar6 + (ulonglong)
                             (*(int *)(param_1 + 0x50) - 1U &
                             ((uVar3 >> 2) +
                              (int)((ulonglong)param_3 >> 0x20) + uVar4 * 0x10000 + (uVar4 & 0xffff)
                              + ((uVar4 >> 0x10) << 0x13 | uVar4 >> 0x10) + ((uVar4 & 0xffff) >> 4)
                              + uVar3 * 0x40 + 0x9e3779b9 ^ uVar3)) * 4);
    if (iVar5 != -1) {
      lVar6 = *(longlong *)(param_1 + 8);
      do {
        lVar7 = (longlong)iVar5 * 0x40;
        uVar1 = *(ulonglong *)(lVar6 + lVar7) ^ param_2;
        bVar8 = *(longlong *)(lVar6 + 8 + lVar7) == param_3 && uVar1 == 0;
        uVar2 = CONCAT71((int7)(uVar1 >> 8),bVar8);
        if (bVar8) {
          return uVar2;
        }
        iVar5 = *(int *)(lVar7 + lVar6 + 0x38);
      } while (iVar5 != -1);
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 140498db8 FUN_140498db8 body=239 status=ok
// SIG undefined FUN_140498db8(void)

undefined8 FUN_140498db8(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  
  uVar3 = (uint)param_3;
  uVar2 = (uint)param_2;
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    uVar2 = (int)((ulonglong)param_2 >> 0x20) + (uVar2 << 0x10 | uVar2 & 0xffff) +
            ((uVar2 & 0xffff) >> 4) + ((uVar2 >> 0x10) << 0x13 | uVar2 >> 0x10);
    lVar5 = param_1 + 0x40;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x48);
    }
    iVar4 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)(param_1 + 0x50) - 1U &
                             ((uVar2 >> 2) +
                              (int)((ulonglong)param_3 >> 0x20) + uVar3 * 0x10000 + (uVar3 & 0xffff)
                              + ((uVar3 >> 0x10) << 0x13 | uVar3 >> 0x10) + ((uVar3 & 0xffff) >> 4)
                              + uVar2 * 0x40 + 0x9e3779b9 ^ uVar2)) * 4);
    if (iVar4 != -1) {
      lVar5 = *(longlong *)(param_1 + 8);
      while( true ) {
        lVar6 = (longlong)iVar4 * 0x40;
        lVar1 = lVar5 + lVar6;
        if ((*(longlong *)(lVar5 + lVar6) == param_2) &&
           (*(longlong *)(lVar5 + 8 + lVar6) == param_3)) break;
        iVar4 = *(int *)(lVar1 + 0x38);
        if (iVar4 == -1) {
          return 0;
        }
      }
      if ((lVar1 + 0x10U & 0xffffffffffffffef) != 0) {
        return CONCAT71((int7)((ulonglong)lVar1 >> 8),*(undefined1 *)(lVar1 + 0x1c));
      }
    }
  }
  return 0;
}



// FUNCTION 140498ea8 FUN_140498ea8 body=323 status=ok
// SIG undefined FUN_140498ea8(void)

void FUN_140498ea8(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong local_28;
  ulonglong local_20;
  
  uVar5 = (uint)param_3;
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = param_2;
  local_28 = param_3;
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    uVar4 = (uint)((ulonglong)param_2 >> 0x10);
    uVar6 = (uint)param_2 & 0xffff;
    uVar4 = (int)((ulonglong)param_2 >> 0x20) + ((uint)param_2 << 0x10 | uVar6) +
            (uVar6 >> 4) + (uVar4 << 0x13 | uVar4 & 0xffff);
    lVar7 = param_1 + 0x40;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      lVar7 = *(longlong *)(param_1 + 0x48);
    }
    iVar2 = *(int *)(lVar7 + (ulonglong)
                             (*(int *)(param_1 + 0x50) - 1U &
                             ((uVar5 << 0x10 | uVar5 & 0xffff) + (int)((ulonglong)param_3 >> 0x20) +
                              ((uVar5 & 0xffff) >> 4) + ((uVar5 >> 0x10) << 0x13 | uVar5 >> 0x10) +
                              uVar4 * 0x40 + (uVar4 >> 2) + 0x9e3779b9 ^ uVar4)) * 4);
    if (iVar2 != -1) {
      lVar7 = *(longlong *)(param_1 + 8);
      do {
        lVar3 = (longlong)iVar2 * 0x40;
        lVar1 = lVar7 + lVar3;
        if ((*(longlong *)(lVar7 + lVar3) == param_2) &&
           (*(longlong *)(lVar7 + 8 + lVar3) == param_3)) {
          if ((lVar1 != 0) && (lVar1 != -0x10)) {
            FUN_1448c236a();
            (**(code **)(**(longlong **)(lVar1 + 0x30) + 0x88))();
          }
          break;
        }
        iVar2 = *(int *)(lVar1 + 0x38);
      } while (iVar2 != -1);
    }
  }
  FUN_140498fec((longlong *)(param_1 + 8),&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140498fec FUN_140498fec body=248 status=ok
// SIG undefined FUN_140498fec(void)

undefined8 FUN_140498fec(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  longlong *plVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    lVar2 = *param_2;
    lVar3 = param_2[1];
    uVar5 = (uint)((ulonglong)lVar2 >> 0x10);
    uVar7 = (uint)lVar2 & 0xffff;
    uVar7 = ((uint)lVar2 << 0x10 | uVar7) + (int)((ulonglong)lVar2 >> 0x20) +
            (uVar5 << 0x13 | uVar5 & 0xffff) + (uVar7 >> 4);
    uVar5 = (uint)((ulonglong)lVar3 >> 0x10);
    uVar8 = (uint)lVar3 & 0xffff;
    plVar6 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar6 +
                    ((longlong)
                     (int)((uVar7 >> 2) +
                           ((uint)lVar3 << 0x10 | uVar8) + (int)((ulonglong)lVar3 >> 0x20) +
                           (uVar5 << 0x13 | uVar5 & 0xffff) + (uVar8 >> 4) + uVar7 * 0x40 +
                           0x9e3779b9 ^ uVar7) & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      lVar4 = *param_1;
      do {
        lVar9 = (longlong)iVar1 * 0x40;
        if ((*(longlong *)(lVar4 + lVar9) == lVar2) && (*(longlong *)(lVar4 + 8 + lVar9) == lVar3))
        {
          FUN_1404990e4();
          return 1;
        }
        iVar1 = *(int *)(lVar9 + lVar4 + 0x38);
      } while (iVar1 != -1);
    }
  }
  return 0;
}



// FUNCTION 1404990e4 FUN_1404990e4 body=95 status=ok
// SIG undefined FUN_1404990e4(void)

void FUN_1404990e4(longlong *param_1,int param_2)

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
  lVar5 = (longlong)*(int *)(lVar1 + 0x3c + (longlong)param_2 * 0x40);
  iVar2 = *(int *)((longlong)plVar3 + lVar5 * 4);
  if (iVar2 == param_2) {
    piVar4 = (int *)((longlong)plVar3 + lVar5 * 4);
  }
  else {
    do {
      piVar4 = (int *)(lVar1 + (longlong)iVar2 * 0x40 + 0x38);
      iVar2 = *piVar4;
    } while (iVar2 != param_2);
  }
  *piVar4 = *(int *)(lVar1 + (longlong)param_2 * 0x40 + 0x38);
  FUN_140499278(param_1,param_2,1);
  return;
}



// FUNCTION 140499144 FUN_140499144 body=248 status=ok
// SIG undefined FUN_140499144(void)

void FUN_140499144(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  
  uVar4 = (uint)param_3;
  uVar3 = (uint)param_2;
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    uVar3 = (int)((ulonglong)param_2 >> 0x20) + (uVar3 << 0x10 | uVar3 & 0xffff) +
            ((uVar3 & 0xffff) >> 4) + ((uVar3 >> 0x10) << 0x13 | uVar3 >> 0x10);
    lVar6 = param_1 + 0x40;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      lVar6 = *(longlong *)(param_1 + 0x48);
    }
    iVar5 = *(int *)(lVar6 + (ulonglong)
                             (*(int *)(param_1 + 0x50) - 1U &
                             ((uVar3 >> 2) +
                              (int)((ulonglong)param_3 >> 0x20) + uVar4 * 0x10000 + (uVar4 & 0xffff)
                              + ((uVar4 >> 0x10) << 0x13 | uVar4 >> 0x10) + ((uVar4 & 0xffff) >> 4)
                              + uVar3 * 0x40 + 0x9e3779b9 ^ uVar3)) * 4);
    if (iVar5 != -1) {
      lVar6 = *(longlong *)(param_1 + 8);
      do {
        lVar1 = (longlong)iVar5 * 0x40;
        lVar2 = lVar6 + lVar1;
        if ((*(longlong *)(lVar6 + lVar1) == param_2) &&
           (*(longlong *)(lVar6 + 8 + lVar1) == param_3)) break;
        iVar5 = *(int *)(lVar2 + 0x38);
        lVar2 = 0;
      } while (iVar5 != -1);
      goto LAB_140499212;
    }
  }
  lVar2 = 0;
LAB_140499212:
  FUN_1448c236a(lVar2 + 0x10);
  *(undefined1 *)(*(longlong *)(lVar2 + 0x30) + 8) = 1;
  return;
}



// FUNCTION 14049923c FUN_14049923c body=59 status=ok
// SIG undefined FUN_14049923c(void)

void FUN_14049923c(longlong param_1)

{
  FUN_144756766(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18));
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_140836c88(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 140499278 FUN_140499278 body=115 status=ok
// SIG undefined FUN_140499278(void)

void FUN_140499278(longlong *param_1,int param_2,int param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  
  if (param_3 != 0) {
    plVar5 = (longlong *)((longlong)param_2 * 0x40 + *param_1 + 0x28);
    iVar4 = param_3;
    do {
      plVar3 = (longlong *)*plVar5;
      if (plVar3 != (longlong *)0x0) {
        plVar1 = plVar3 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar3)(plVar3);
          piVar2 = (int *)((longlong)plVar3 + 0xc);
          *piVar2 = *piVar2 + -1;
          if (*piVar2 == 0) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
          }
        }
      }
      plVar5 = plVar5 + 8;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  FUN_1404992ec(param_1,param_2,param_3);
  return;
}



// FUNCTION 1404992ec FUN_1404992ec body=134 status=ok
// SIG undefined FUN_1404992ec(void)

void FUN_1404992ec(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)((longlong)param_2 * 0x40 + lVar2 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x40) = param_2;
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
      puVar7 = puVar7 + 0x10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 140499372 FUN_140499372 body=536 status=ok
// SIG undefined FUN_140499372(void)

void FUN_140499372(longlong param_1,undefined8 param_2,longlong param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  uint uVar2;
  char cVar3;
  undefined4 uVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  undefined8 local_98;
  longlong local_90;
  undefined1 local_88 [40];
  longlong *local_60;
  undefined8 *local_58;
  undefined1 *local_50;
  undefined1 local_44 [4];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
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
        goto LAB_14049941a;
        iVar7 = *(int *)(*(longlong *)(param_1 + 0x58) + (longlong)iVar7 * 0x14 + 0xc);
      } while (iVar7 != -1);
    }
  }
  FUN_140b203e2(param_1,param_3);
LAB_14049941a:
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9968f8) {
    FUN_144b3d300(&DAT_14c9968f8);
    if (DAT_14c9968f8 == -1) {
      DAT_14c9968f0 = 0;
      _Init_thread_footer(&DAT_14c9968f8);
    }
  }
  uVar4 = FUN_1401f66f6(param_1,param_3);
  puVar8 = param_4;
  if (*(char *)((longlong)param_4 + 9) == '\0') {
    cVar3 = FUN_1406cda7c(param_1,*param_4,param_3);
    puVar8 = &DAT_14c9968f0;
    if (cVar3 == '\0') {
      puVar8 = param_4;
    }
  }
  uVar1 = *puVar8;
  local_60 = (longlong *)FUN_14001cc68(0x20,0x10);
  *(undefined1 *)(local_60 + 1) = 0;
  local_60[2] = 0;
  local_60[3] = 0;
  *local_60 = (longlong)&PTR_FUN_149f63160;
  local_a8 = *(undefined1 *)(param_4 + 1);
  FUN_14049958c(local_88,&local_60,uVar4,uVar1);
  local_58 = &local_98;
  local_98 = param_2;
  local_90 = param_3;
  local_50 = local_88;
  FUN_1406cd0ac(param_1 + 8,local_44,&local_58,0);
  FUN_1406cd076(local_88);
  if (local_60 != (longlong *)0x0) {
    (**(code **)(*local_60 + 0x48))(local_60,1);
  }
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14049958c FUN_14049958c body=138 status=ok
// SIG undefined FUN_14049958c(void)

undefined1 *
FUN_14049958c(undefined1 *param_1,undefined8 *param_2,undefined4 param_3,undefined8 param_4,
             undefined1 param_5)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  *param_1 = 9;
  *(undefined8 *)(param_1 + 4) = param_4;
  param_1[0xc] = param_5;
  param_1[0xd] = 0;
  uVar1 = *param_2;
  *param_2 = 0;
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  puVar2 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar2[1] = &DAT_100000001;
  *puVar2 = &PTR_LAB_149f63280;
  puVar2[2] = uVar1;
  *(undefined8 **)(param_1 + 0x18) = puVar2;
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  FUN_1448c236a(param_1);
  (**(code **)(**(longlong **)(param_1 + 0x20) + 8))(*(longlong **)(param_1 + 0x20),param_3);
  (**(code **)**(undefined8 **)(param_1 + 0x20))(*(undefined8 **)(param_1 + 0x20),param_3);
  return param_1;
}



// FUNCTION 140499616 FUN_140499616 body=39 status=ok
// SIG undefined FUN_140499616(void)

void FUN_140499616(longlong param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  if (*(int *)(param_1 + 0x1c) < param_2) {
    FUN_14482f6fa(param_1 + 0x10);
    return;
  }
  return;
}



// FUNCTION 14049963e FUN_14049963e body=119 status=ok
// SIG undefined FUN_14049963e(void)

void FUN_14049963e(longlong param_1,int param_2)

{
  longlong *plVar1;
  int iVar2;
  
  plVar1 = (longlong *)(param_1 + 0x10);
  iVar2 = *(int *)(param_1 + 0x18);
  if (iVar2 < param_2) {
    *(int *)(param_1 + 0x18) = param_2;
    if ((uint)(*(int *)(param_1 + 0x1c) - iVar2) < (uint)(param_2 - iVar2)) {
      FUN_14475e4ac(plVar1);
    }
    memset((void *)((longlong)iVar2 * 4 + *plVar1),0,(longlong)(param_2 - iVar2) << 2);
    return;
  }
  if (-1 < param_2) {
    if (iVar2 <= param_2) {
      return;
    }
    *(int *)(param_1 + 0x18) = param_2;
    FUN_1401fef06(plVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1404996b6 FUN_1404996b6 body=114 status=ok
// SIG undefined FUN_1404996b6(void)

void FUN_1404996b6(longlong param_1,undefined8 *param_2,undefined4 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  
  cVar5 = FUN_140498cd4(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),
                        *(undefined8 *)(param_1 + 0x18));
  if (cVar5 == '\0') {
    FUN_140499728(param_1,param_3,param_4);
    lVar2 = *(longlong *)(param_1 + 0x28);
    if (0 < *(int *)(lVar2 + 0x18)) {
      lVar6 = 0;
      lVar7 = 0;
      do {
        lVar3 = *(longlong *)(lVar2 + 0x10);
        *(undefined8 *)(lVar3 + 0x10 + lVar6) = param_2[2];
        uVar4 = param_2[1];
        puVar1 = (undefined8 *)(lVar3 + lVar6);
        *puVar1 = *param_2;
        puVar1[1] = uVar4;
        lVar7 = lVar7 + 1;
        lVar6 = lVar6 + 0x18;
      } while (lVar7 < *(int *)(lVar2 + 0x18));
    }
  }
  return;
}



// FUNCTION 140499728 FUN_140499728 body=313 status=ok
// SIG undefined FUN_140499728(void)

void FUN_140499728(undefined8 *param_1,char param_2,longlong param_3)

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
        goto LAB_1404997f6;
        iVar7 = *(int *)(*(longlong *)(lVar5 + 0x58) + (longlong)iVar7 * 0x14 + 0xc);
      } while (iVar7 != -1);
    }
  }
  FUN_140b203e2(lVar5,lVar8);
  lVar5 = param_1[1];
  lVar8 = param_1[3];
LAB_1404997f6:
  if (param_3 == 0) {
    param_3 = param_1[4];
  }
  local_28 = param_2 == '\x01';
  local_27 = 0;
  local_30 = param_3;
  uVar4 = FUN_140499862(lVar5,param_1[2],lVar8);
  param_1[5] = uVar4;
  param_1[6] = uVar4;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140499862 FUN_140499862 body=70 status=ok
// SIG undefined FUN_140499862(void)

void FUN_140499862(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  
  cVar1 = FUN_140498cd4();
  if (cVar1 == '\0') {
    FUN_140499bba(param_1,param_2,param_3,param_4);
  }
  FUN_1404998a8(param_1,param_2,param_3);
  return;
}



// FUNCTION 1404998a8 FUN_1404998a8 body=248 status=ok
// SIG undefined FUN_1404998a8(void)

void FUN_1404998a8(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  
  uVar4 = (uint)param_3;
  uVar3 = (uint)param_2;
  if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x3c)) {
    uVar3 = (int)((ulonglong)param_2 >> 0x20) + (uVar3 << 0x10 | uVar3 & 0xffff) +
            ((uVar3 & 0xffff) >> 4) + ((uVar3 >> 0x10) << 0x13 | uVar3 >> 0x10);
    lVar6 = param_1 + 0x40;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      lVar6 = *(longlong *)(param_1 + 0x48);
    }
    iVar5 = *(int *)(lVar6 + (ulonglong)
                             (*(int *)(param_1 + 0x50) - 1U &
                             ((uVar3 >> 2) +
                              (int)((ulonglong)param_3 >> 0x20) + uVar4 * 0x10000 + (uVar4 & 0xffff)
                              + ((uVar4 >> 0x10) << 0x13 | uVar4 >> 0x10) + ((uVar4 & 0xffff) >> 4)
                              + uVar3 * 0x40 + 0x9e3779b9 ^ uVar3)) * 4);
    if (iVar5 != -1) {
      lVar6 = *(longlong *)(param_1 + 8);
      do {
        lVar1 = (longlong)iVar5 * 0x40;
        lVar2 = lVar6 + lVar1;
        if ((*(longlong *)(lVar6 + lVar1) == param_2) &&
           (*(longlong *)(lVar6 + 8 + lVar1) == param_3)) break;
        iVar5 = *(int *)(lVar2 + 0x38);
        lVar2 = 0;
      } while (iVar5 != -1);
      goto LAB_140499976;
    }
  }
  lVar2 = 0;
LAB_140499976:
  FUN_1448c236a(lVar2 + 0x10);
  *(undefined1 *)(*(longlong *)(lVar2 + 0x30) + 8) = 1;
  return;
}



// FUNCTION 1404999a0 FUN_1404999a0 body=537 status=ok
// SIG undefined FUN_1404999a0(void)

void FUN_1404999a0(longlong param_1,double *param_2,double *param_3)

{
  undefined4 *puVar1;
  double dVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  float fVar13;
  undefined4 uVar14;
  float fVar15;
  
  if ((((*(longlong *)(param_1 + 0x30) != 0) && (*(longlong *)(param_1 + 0x68) != 0)) &&
      (*(longlong *)(param_1 + 0xa0) != 0)) && (*(longlong *)(param_1 + 0xd8) != 0)) {
    lVar9 = *(longlong *)(param_1 + 0x28);
    if ((lVar9 != 0) && (0 < *(int *)(lVar9 + 0x18))) {
      lVar7 = 0;
      do {
        *(undefined4 *)(*(longlong *)(lVar9 + 0x10) + lVar7 * 4) = 0;
        lVar7 = lVar7 + 1;
      } while (lVar7 < *(int *)(lVar9 + 0x18));
    }
    lVar9 = *(longlong *)(param_1 + 0xd0);
    if ((lVar9 != 0) && (0 < *(int *)(lVar9 + 0x18))) {
      lVar7 = 0;
      lVar8 = 0;
      do {
        lVar3 = *(longlong *)(lVar9 + 0x10);
        *(undefined8 *)(lVar3 + 0x10 + lVar7) = DAT_14c8464f0;
        uVar12 = DAT_14c8464e8._4_4_;
        uVar11 = (undefined4)DAT_14c8464e8;
        uVar10 = DAT_14c8464e0._4_4_;
        puVar1 = (undefined4 *)(lVar3 + lVar7);
        *puVar1 = (undefined4)DAT_14c8464e0;
        puVar1[1] = uVar10;
        puVar1[2] = uVar11;
        puVar1[3] = uVar12;
        lVar8 = lVar8 + 1;
        lVar7 = lVar7 + 0x18;
      } while (lVar8 < *(int *)(lVar9 + 0x18));
    }
    *(undefined1 *)(*(longlong *)(param_1 + 0x60) + 8) = 1;
    plVar4 = *(longlong **)(param_1 + 0x60);
    uVar10 = 0;
    uVar11 = 0;
    uVar12 = 0;
    uVar14 = 0;
    dVar2 = *param_2;
    if (0.0 <= dVar2) {
      uVar12 = SUB84(dVar2,0);
      uVar14 = (undefined4)((ulonglong)dVar2 >> 0x20);
    }
    dVar2 = param_2[1];
    iVar5 = (**(code **)(*plVar4 + 0x60))(plVar4);
    if (0 < iVar5) {
      fVar13 = (float)(double)CONCAT44(uVar14,uVar12);
      fVar15 = fVar13;
      if ((double)fVar13 <= dVar2) {
        fVar15 = (float)dVar2;
      }
      lVar9 = 0;
      do {
        uVar6 = rand();
        *(float *)(plVar4[2] + lVar9 * 4) =
             ((float)(uVar6 & 0x7fff) / 32767.0) * (fVar15 - fVar13) + fVar13;
        lVar9 = lVar9 + 1;
        iVar5 = (**(code **)(*plVar4 + 0x60))(plVar4);
      } while (lVar9 < iVar5);
    }
    *(undefined1 *)(*(longlong *)(param_1 + 0x98) + 8) = 1;
    plVar4 = *(longlong **)(param_1 + 0x98);
    dVar2 = *param_3;
    if (0.0 <= dVar2) {
      uVar10 = SUB84(dVar2,0);
      uVar11 = (undefined4)((ulonglong)dVar2 >> 0x20);
    }
    dVar2 = param_3[1];
    iVar5 = (**(code **)(*plVar4 + 0x60))(plVar4);
    if (0 < iVar5) {
      fVar13 = (float)(double)CONCAT44(uVar11,uVar10);
      fVar15 = fVar13;
      if ((double)fVar13 <= dVar2) {
        fVar15 = (float)dVar2;
      }
      lVar9 = 0;
      do {
        uVar6 = rand();
        *(float *)(plVar4[2] + lVar9 * 4) =
             ((float)(uVar6 & 0x7fff) / 32767.0) * (fVar15 - fVar13) + fVar13;
        lVar9 = lVar9 + 1;
        iVar5 = (**(code **)(*plVar4 + 0x60))(plVar4);
      } while (lVar9 < iVar5);
    }
  }
  return;
}



// FUNCTION 140499bba FUN_140499bba body=536 status=ok
// SIG undefined FUN_140499bba(void)

void FUN_140499bba(longlong param_1,undefined8 param_2,longlong param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  uint uVar2;
  char cVar3;
  undefined4 uVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  undefined8 local_98;
  longlong local_90;
  undefined1 local_88 [40];
  longlong *local_60;
  undefined8 *local_58;
  undefined1 *local_50;
  undefined1 local_44 [4];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
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
        goto LAB_140499c62;
        iVar7 = *(int *)(*(longlong *)(param_1 + 0x58) + (longlong)iVar7 * 0x14 + 0xc);
      } while (iVar7 != -1);
    }
  }
  FUN_140b203e2(param_1,param_3);
LAB_140499c62:
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caa9c08) {
    FUN_144b3d300(&DAT_14caa9c08);
    if (DAT_14caa9c08 == -1) {
      DAT_14caa9c00 = 0;
      _Init_thread_footer(&DAT_14caa9c08);
    }
  }
  uVar4 = FUN_1401f66f6(param_1,param_3);
  puVar8 = param_4;
  if (*(char *)((longlong)param_4 + 9) == '\0') {
    cVar3 = FUN_1406cda7c(param_1,*param_4,param_3);
    puVar8 = &DAT_14caa9c00;
    if (cVar3 == '\0') {
      puVar8 = param_4;
    }
  }
  uVar1 = *puVar8;
  local_60 = (longlong *)FUN_14001cc68(0x20,0x10);
  *(undefined1 *)(local_60 + 1) = 0;
  local_60[2] = 0;
  local_60[3] = 0;
  *local_60 = (longlong)&PTR_LAB_149f69bb0;
  local_a8 = *(undefined1 *)(param_4 + 1);
  FUN_140499dd4(local_88,&local_60,uVar4,uVar1);
  local_58 = &local_98;
  local_98 = param_2;
  local_90 = param_3;
  local_50 = local_88;
  FUN_1406cd0ac(param_1 + 8,local_44,&local_58,0);
  FUN_1406cd076(local_88);
  if (local_60 != (longlong *)0x0) {
    (**(code **)(*local_60 + 0x48))(local_60,1);
  }
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140499dd4 FUN_140499dd4 body=138 status=ok
// SIG undefined FUN_140499dd4(void)

undefined1 *
FUN_140499dd4(undefined1 *param_1,undefined8 *param_2,undefined4 param_3,undefined8 param_4,
             undefined1 param_5)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  *param_1 = 0x22;
  *(undefined8 *)(param_1 + 4) = param_4;
  param_1[0xc] = param_5;
  param_1[0xd] = 0;
  uVar1 = *param_2;
  *param_2 = 0;
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  puVar2 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar2[1] = &DAT_100000001;
  *puVar2 = &PTR_LAB_14a417e70;
  puVar2[2] = uVar1;
  *(undefined8 **)(param_1 + 0x18) = puVar2;
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  FUN_1448c236a(param_1);
  (**(code **)(**(longlong **)(param_1 + 0x20) + 8))(*(longlong **)(param_1 + 0x20),param_3);
  (**(code **)**(undefined8 **)(param_1 + 0x20))(*(undefined8 **)(param_1 + 0x20),param_3);
  return param_1;
}



// FUNCTION 140499e5e FUN_140499e5e body=25 status=ok
// SIG undefined FUN_140499e5e(void)

undefined8 FUN_140499e5e(longlong param_1)

{
  (**(code **)(param_1 + 0x20))((longlong)*(int *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 140499e78 FUN_140499e78 body=143 status=ok
// SIG undefined FUN_140499e78(void)

undefined8
FUN_140499e78(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4,
             undefined4 param_5)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined8 local_60;
  undefined1 local_58;
  undefined4 local_50;
  undefined4 local_48;
  undefined4 local_40;
  undefined1 *local_38;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined1 local_14 [4];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_68 = param_3[2];
  local_28 = *param_3;
  uStack_24 = param_3[1];
  uStack_20 = param_3[2];
  uStack_1c = param_3[3];
  local_38 = local_14;
  local_50 = param_5;
  local_40 = 2;
  local_48 = 0xffffffff;
  local_58 = 0;
  local_60 = param_4;
  FUN_140499f08(param_5,param_2,&local_28,0);
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140499f08 FUN_140499f08 body=3486 status=ok
// SIG undefined FUN_140499f08(void)

float * FUN_140499f08(longlong *param_1,float *param_2,longlong *param_3,uint param_4,uint param_5,
                     longlong param_6,char param_7,undefined4 param_8,int param_9,int param_10,
                     uint *param_11)

{
  uint *puVar1;
  short sVar2;
  char cVar3;
  ushort uVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined8 uVar12;
  longlong *plVar13;
  ulonglong uVar14;
  longlong *plVar15;
  ulonglong uVar16;
  byte bVar17;
  int *piVar18;
  ulonglong uVar19;
  int iVar20;
  ulonglong uVar21;
  int iVar22;
  int iVar23;
  uint uVar24;
  longlong lVar25;
  wchar_t *pwVar26;
  ulonglong uVar27;
  short sVar28;
  uint uVar29;
  uint uVar30;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_198 [32];
  longlong *local_178;
  wchar_t *local_170;
  uint local_164;
  float *local_160;
  longlong *local_158;
  ulonglong local_150;
  undefined8 *local_148;
  uint local_140;
  uint local_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  int iStack_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  int iStack_120;
  undefined4 uStack_11c;
  longlong *local_110;
  longlong *local_108;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  longlong *local_c8;
  undefined4 local_7c;
  undefined4 *local_78;
  longlong **local_70;
  undefined1 local_64 [4];
  ulonglong local_60;
  
  pwVar26 = (wchar_t *)(ulonglong)param_4;
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_198;
  puVar9 = (undefined8 *)FUN_144955c2e(param_1[10],param_6,param_8,&DAT_14c96b1c0);
  uVar4 = *(ushort *)(puVar9 + 0x1c);
  if (uVar4 == 0) {
    uVar4 = FUN_14574f6a4(*(undefined8 *)(puVar9[0x1b] + 0x48),puVar9 + 10,
                          *(undefined4 *)(puVar9 + 0x1a));
    *(ushort *)(puVar9 + 0x1c) = uVar4;
  }
  if ((((*(uint *)(param_3 + 1) == 0) || ((int)param_5 <= (int)param_4)) || ((int)param_4 < 0)) ||
     (((int)param_5 < 1 || ((int)(param_5 - param_4) < 1)))) {
    *param_2 = 0.0;
    param_2[1] = (float)uVar4;
    goto LAB_14049a197;
  }
  local_160 = param_2;
  local_148 = puVar9;
  if (*(uint *)(param_3 + 1) == param_5 && param_4 == 0) {
    if ((param_9 == -1 && param_7 == '\0') && 5 < param_5 - param_4) {
      FUN_144956036(&local_100,param_6,&DAT_14c96b1c0,param_8);
      FUN_1406d8740(param_6);
      iVar5 = FUN_144a8dc10(param_1,local_7c,&local_100);
      if ((iVar5 == -1) || (lVar10 = (longlong)iVar5 * 0xa0 + *param_1, lVar10 == 0)) {
        local_108 = (longlong *)0x0;
LAB_14049aa11:
        plVar13 = local_108;
        plVar11 = (longlong *)FUN_14001cc68(0x68,0x10);
        plVar11[4] = 0;
        *(undefined4 *)(plVar11 + 5) = 0;
        *plVar11 = 0;
        plVar11[1] = 0;
        *(undefined8 *)((longlong)plVar11 + 0x2c) = 0xffffffff00000080;
        *(undefined4 *)((longlong)plVar11 + 0x34) = 0;
        plVar11[8] = 0;
        *(undefined4 *)(plVar11 + 9) = 0;
        plVar11[10] = 0;
        plVar11[0xb] = 0;
        *(undefined4 *)(plVar11 + 0xc) = 500;
        plVar15 = (longlong *)FUN_14001cc68(0x18,0x10);
        plVar15[1] = (longlong)&DAT_100000001;
        *plVar15 = (longlong)&PTR_FUN_149eda3f0;
        plVar15[2] = (longlong)plVar11;
        local_110 = plVar11;
        if (plVar15 == plVar13) {
          if (plVar13 != (longlong *)0x0) {
            LOCK();
            plVar13 = plVar15 + 1;
            *(int *)plVar13 = (int)*plVar13 + -1;
            UNLOCK();
            if ((int)*plVar13 == 0) {
              puVar9 = (undefined8 *)*plVar15;
              plVar13 = plVar15;
              goto LAB_14049ac8d;
            }
          }
        }
        else {
          local_108 = plVar15;
          if (plVar13 != (longlong *)0x0) {
            LOCK();
            plVar11 = plVar13 + 1;
            *(int *)plVar11 = (int)*plVar11 + -1;
            UNLOCK();
            if ((int)*plVar11 == 0) {
              puVar9 = (undefined8 *)*plVar13;
LAB_14049ac8d:
              (*(code *)*puVar9)(plVar13);
              LOCK();
              piVar18 = (int *)((longlong)plVar13 + 0xc);
              *piVar18 = *piVar18 + -1;
              UNLOCK();
              if (*piVar18 == 0) {
                (**(code **)(*plVar13 + 0x10))(plVar13);
              }
            }
          }
        }
        local_78 = &local_100;
        local_70 = &local_110;
        FUN_145d807dc(param_1,local_64);
      }
      else {
        local_110 = *(longlong **)(lVar10 + 0x88);
        local_108 = *(longlong **)(lVar10 + 0x90);
        if (local_108 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_108 + 1) = (int)local_108[1] + 1;
          UNLOCK();
        }
        if (local_110 == (longlong *)0x0) {
          local_110 = (longlong *)0x0;
          goto LAB_14049aa11;
        }
      }
      plVar11 = local_108;
      plVar13 = local_110;
      if (local_108 != (longlong *)0x0) {
        LOCK();
        plVar15 = local_108 + 1;
        *(int *)plVar15 = (int)*plVar15 + -1;
        UNLOCK();
        if ((int)*plVar15 == 0) {
          (**(code **)*local_108)(local_108);
          LOCK();
          piVar18 = (int *)((longlong)plVar11 + 0xc);
          *piVar18 = *piVar18 + -1;
          UNLOCK();
          if (*piVar18 == 0) {
            (**(code **)(*plVar11 + 0x10))(plVar11);
          }
        }
      }
      if (local_c8 != (longlong *)0x0) {
        LOCK();
        plVar11 = local_c8 + 1;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)*plVar11 == 0) {
          (**(code **)*local_c8)(local_c8);
          LOCK();
          piVar18 = (int *)((longlong)local_c8 + 0xc);
          *piVar18 = *piVar18 + -1;
          UNLOCK();
          if (*piVar18 == 0) {
            (**(code **)(*local_c8 + 0x10))(local_c8);
          }
        }
      }
      if (plVar13 == (longlong *)0x0) {
        local_178 = (longlong *)0x0;
        plVar13 = local_178;
      }
      else {
        local_128 = (undefined4)*param_3;
        uStack_124 = *(undefined4 *)((longlong)param_3 + 4);
        iStack_120 = (int)param_3[1];
        uStack_11c = *(undefined4 *)((longlong)param_3 + 0xc);
        uVar6 = FUN_1447053be(*param_3,iStack_120 * 2);
        iVar5 = FUN_144b01108(plVar13,uVar6,&local_128);
        if ((iVar5 != -1) &&
           (plVar11 = (longlong *)((longlong)iVar5 * 0x10 + *plVar13), plVar11 != (longlong *)0x0))
        {
          lVar10 = *plVar11;
          if ((plVar13[0xb] == lVar10) && (lVar25 = *(longlong *)(plVar13[0xb] + 0x20), lVar25 != 0)
             ) {
            plVar13[0xb] = lVar25;
          }
          if (plVar13[10] != lVar10) {
            lVar25 = *(longlong *)(lVar10 + 0x18);
            if (*(longlong *)(lVar10 + 0x20) != 0) {
              *(longlong *)(*(longlong *)(lVar10 + 0x20) + 0x18) = lVar25;
            }
            if (lVar25 != 0) {
              *(undefined8 *)(lVar25 + 0x20) = *(undefined8 *)(lVar10 + 0x20);
            }
            *(longlong *)(lVar10 + 0x18) = 0;
            *(undefined8 *)(lVar10 + 0x20) = 0;
            lVar25 = plVar13[10];
            *(longlong *)(lVar10 + 0x18) = lVar25;
            if (lVar25 != 0) {
              *(longlong *)(lVar25 + 0x20) = lVar10;
            }
            plVar13[10] = lVar10;
          }
          if ((undefined8 *)(*plVar11 + 0x10) != (undefined8 *)0x0) {
            *(undefined8 *)local_160 = *(undefined8 *)(*plVar11 + 0x10);
            param_2 = local_160;
            goto LAB_14049a197;
          }
        }
      }
      local_178 = plVar13;
      sVar28 = 0;
    }
    else {
LAB_14049a1da:
      local_178 = (longlong *)0x0;
      sVar28 = 0;
    }
  }
  else {
    if (param_4 == 0 || param_7 != '\x01') goto LAB_14049a1da;
    sVar28 = *(short *)(*param_3 + -2 + (longlong)pwVar26 * 2);
    local_178 = (longlong *)0x0;
  }
  local_13c = (uint)uVar4;
  uVar24 = 0;
  uVar30 = 0;
  local_158 = param_3;
  local_140 = param_4;
  uVar7 = local_13c;
  do {
    puVar9 = local_148;
    sVar2 = *(short *)(*param_3 + (longlong)pwVar26 * 2);
    if (sVar2 == 10) {
      if ((int)uVar24 <= (int)uVar30) {
        uVar24 = uVar30;
      }
      uVar30 = 0;
      uVar7 = uVar7 + local_13c;
    }
    else {
      local_150 = CONCAT44(local_150._4_4_,uVar7);
      local_170 = pwVar26;
      local_164 = uVar24;
      lVar10 = FUN_1448304f6(local_148,sVar2,
                             CONCAT71((int7)((ulonglong)pwVar26 >> 8),
                                      *(undefined1 *)(param_6 + 0x54)));
      if (sVar28 == 0) {
        iVar5 = 0;
      }
      else {
        uVar12 = FUN_1448304f6(puVar9,sVar28,*(undefined1 *)(param_6 + 0x54));
        cVar3 = FUN_14483063e(extraout_XMM0_Da,uVar12,lVar10);
        iVar5 = (int)cVar3;
      }
      iVar5 = *(short *)(lVar10 + 0x36) + iVar5;
      uVar30 = uVar30 + iVar5;
      param_3 = local_158;
      pwVar26 = local_170;
      uVar7 = (uint)local_150;
      uVar24 = local_164;
      sVar28 = sVar2;
      if (param_9 != -1) {
        if (param_10 == 0) {
          if (param_9 < (int)uVar30) {
            uVar29 = 0xffffffff;
            if ((int)local_140 < (int)param_4) {
              uVar29 = param_4 - 1;
            }
            break;
          }
        }
        else if ((param_10 == 1) &&
                (uVar29 = param_4, param_9 < (int)(uVar30 - (iVar5 + *(short *)(lVar10 + 0x32)) / 2)
                )) break;
      }
    }
    pwVar26 = (wchar_t *)((longlong)pwVar26 + 1);
    param_4 = param_4 + 1;
    uVar29 = param_5;
  } while ((int)param_4 < (int)param_5);
  param_2 = local_160;
  plVar13 = local_178;
  if ((int)uVar30 < (int)uVar24) {
    uVar30 = uVar24;
  }
  uVar24 = param_5 - 1;
  if ((int)uVar29 < (int)param_5) {
    uVar24 = uVar29;
  }
  if (param_10 != 0) {
    uVar24 = uVar29;
  }
  *local_160 = (float)(int)uVar30;
  local_160[1] = (float)(int)uVar7;
  *param_11 = uVar24;
  if ((param_9 == -1) && (local_178 != (longlong *)0x0)) {
    local_138 = (undefined4)*param_3;
    uStack_134 = *(undefined4 *)((longlong)param_3 + 4);
    iStack_130 = (int)param_3[1];
    uStack_12c = *(undefined4 *)((longlong)param_3 + 0xc);
    uVar6 = FUN_1447053be(*param_3,iStack_130 * 2);
    iVar5 = FUN_144b01108(plVar13,uVar6);
    if ((iVar5 == -1) ||
       (plVar11 = (longlong *)((longlong)iVar5 * 0x10 + *plVar13), plVar11 == (longlong *)0x0)) {
      if ((int)plVar13[1] - *(int *)((longlong)plVar13 + 0x34) == (int)plVar13[0xc]) {
        plVar11 = (longlong *)plVar13[0xb];
        if ((int)plVar13[1] != *(int *)((longlong)plVar13 + 0x34)) {
          iVar5 = (int)plVar11[1] + -1;
          if ((int)plVar11[1] == 0) {
            iVar5 = 0;
          }
          iVar5 = FUN_1447053be(*plVar11,iVar5 * 2);
          plVar15 = plVar13 + 7;
          if ((longlong *)plVar13[8] != (longlong *)0x0) {
            plVar15 = (longlong *)plVar13[8];
          }
          iVar5 = *(int *)((longlong)plVar15 +
                          ((longlong)iVar5 & (longlong)(int)plVar13[9] - 1U) * 4);
          if (iVar5 != -1) {
            lVar10 = *plVar13;
            local_170 = (wchar_t *)*plVar11;
            uVar30 = *(uint *)(plVar11 + 1);
            iVar22 = uVar30 - 1;
            if (uVar30 == 0) {
              iVar22 = 0;
            }
LAB_14049a4f7:
            lVar25 = lVar10 + (longlong)iVar5 * 0x10;
            puVar9 = *(undefined8 **)(lVar10 + (longlong)iVar5 * 0x10);
            uVar7 = *(uint *)(puVar9 + 1);
            iVar20 = uVar7 - 1;
            if (uVar7 == 0) {
              iVar20 = 0;
            }
            if ((iVar20 != iVar22) ||
               (((1 < uVar30 && (1 < uVar7)) &&
                (iVar20 = wcsncmp((wchar_t *)*puVar9,local_170,(longlong)iVar22), iVar20 != 0))))
            goto LAB_14049a536;
            plVar13 = local_178;
            iVar22 = *(int *)((longlong)plVar15 + (longlong)*(int *)(lVar25 + 0xc) * 4);
            if (iVar22 == iVar5) {
              piVar18 = (int *)((longlong)plVar15 + (longlong)*(int *)(lVar25 + 0xc) * 4);
            }
            else {
              do {
                piVar18 = (int *)(lVar10 + (longlong)iVar22 * 0x10 + 8);
                iVar22 = *piVar18;
              } while (iVar22 != iVar5);
            }
            *piVar18 = *(int *)(lVar25 + 8);
            FUN_142866a1e(local_178,iVar5);
          }
        }
LAB_14049a587:
        param_2 = local_160;
        plVar13[0xb] = *(longlong *)(plVar13[0xb] + 0x20);
        lVar10 = plVar11[3];
        if (plVar11[4] != 0) {
          *(longlong *)(plVar11[4] + 0x18) = lVar10;
        }
        if (lVar10 != 0) {
          *(longlong *)(lVar10 + 0x20) = plVar11[4];
        }
        plVar11[3] = 0;
        plVar11[4] = 0;
        if (plVar11 != (longlong *)0x0) {
          if (*plVar11 != 0) {
            FUN_1400020a8();
          }
          FUN_1400020a8(plVar11);
        }
      }
      puVar9 = (undefined8 *)FUN_14001cc68(0x28,0x10);
      FUN_14006620a(&local_100,CONCAT44(uStack_134,local_138),iStack_130);
      *(undefined4 *)puVar9 = local_100;
      *(undefined4 *)((longlong)puVar9 + 4) = uStack_fc;
      *(undefined4 *)(puVar9 + 1) = uStack_f8;
      *(undefined4 *)((longlong)puVar9 + 0xc) = uStack_f4;
      puVar9[2] = *(undefined8 *)param_2;
      puVar9[4] = 0;
      lVar10 = plVar13[10];
      puVar9[3] = lVar10;
      if (lVar10 != 0) {
        *(undefined8 **)(lVar10 + 0x20) = puVar9;
      }
      plVar13[10] = (longlong)puVar9;
      if (plVar13[0xb] == 0) {
        plVar13[0xb] = (longlong)puVar9;
      }
      if (*(int *)((longlong)plVar13 + 0x34) == 0) {
        uVar30 = *(uint *)(plVar13 + 1);
        uVar14 = (ulonglong)uVar30;
        *(uint *)(plVar13 + 1) = uVar30 + 1;
        if (*(uint *)((longlong)plVar13 + 0xc) == uVar30) {
          FUN_1446efaca(plVar13,uVar30);
        }
        iVar5 = (int)plVar13[5];
        if (iVar5 == 0) {
          iVar22 = -1;
        }
        else {
          iVar22 = iVar5 + 0x1e;
          if (-1 < iVar5 + -1) {
            iVar22 = iVar5 + -1;
          }
          iVar22 = iVar22 >> 5;
        }
        plVar11 = local_178 + 2;
        iVar20 = iVar5 + 1;
        iVar23 = iVar5 + 0x1f;
        if (-1 < iVar5) {
          iVar23 = iVar5;
        }
        plVar13 = local_178;
        if (iVar23 >> 5 == iVar22) {
          *(int *)(local_178 + 5) = iVar20;
        }
        else {
          if (*(int *)((longlong)local_178 + 0x2c) <= iVar5) {
            iVar22 = iVar5;
            if (iVar5 + 0x20U < 0xa0) {
              iVar20 = 0x80;
            }
            else {
              uVar7 = iVar5 + 0x20U >> 5;
              if (*(int *)((longlong)local_178 + 0x2c) + 0x1fU < 0xa0) {
                uVar24 = 4;
                if (4 < uVar7) {
                  uVar24 = uVar7;
                }
              }
              else {
                uVar24 = uVar7 + (uVar7 * 3 >> 3) + 0x10;
              }
              uVar16 = (ulonglong)(uVar24 * 4);
              if (DAT_14c872d28 != (longlong *)0x0) {
                if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
                  uVar29 = (uint)(uVar16 + 0xf);
                  if (uVar24 < 0x1ffd) {
                    uVar16 = (ulonglong)
                             (ushort)(&DAT_14c841d90)
                                     [0x32 - (byte)(&DAT_14c841e00)[uVar16 + 0xf >> 4]];
                  }
                  else {
                    uVar19 = (ulonglong)(uVar29 & 0xfffffff0);
                    if (uVar19 < 0x7ff1) {
                      bVar17 = (&DAT_14c841e00)[uVar29 >> 4];
                      uVar21 = 0x32;
                      if (0x32 < bVar17) {
                        uVar21 = (ulonglong)bVar17;
                      }
                      uVar27 = 0x32 - (ulonglong)bVar17;
                      do {
                        uVar16 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar27 & 0xffffffff];
                        if (((&DAT_14c841d90)[uVar27 & 0xffffffff] & 0xf) == 0) goto LAB_14049a9e8;
                        lVar10 = uVar21 + 1 + uVar27;
                        uVar27 = uVar27 - 1;
                      } while (lVar10 != 0x33);
                    }
                    uVar16 = 0x10;
                    if (0x10 < DAT_14c841df8) {
                      uVar16 = (ulonglong)DAT_14c841df8;
                    }
                    uVar16 = -uVar16 & (uVar19 + uVar16) - 1;
                  }
                }
                else {
                  uVar16 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar16,0);
                  iVar22 = (int)local_178[5];
                }
              }
LAB_14049a9e8:
              iVar8 = (int)(uVar16 >> 2);
              iVar20 = -0x20;
              if ((int)uVar7 <= iVar8) {
                iVar20 = iVar8 << 5;
              }
            }
            plVar13 = local_178;
            *(int *)((longlong)local_178 + 0x2c) = iVar20;
            FUN_1446efbd8(plVar11,iVar22);
            iVar20 = (int)plVar13[5] + 1;
          }
          iVar22 = iVar20 + 0x1f;
          if (-1 < iVar20) {
            iVar22 = iVar20;
          }
          *(int *)(plVar13 + 5) = iVar20;
          if (iVar20 % 0x20 != 0) {
            plVar15 = (longlong *)plVar13[4];
            if ((longlong *)plVar13[4] == (longlong *)0x0) {
              plVar15 = plVar11;
            }
            bVar17 = -(char)(iVar20 % 0x20);
            *(uint *)((longlong)plVar15 + (longlong)(iVar22 >> 5) * 4) =
                 (uint)(*(int *)((longlong)plVar15 + (longlong)(iVar22 >> 5) * 4) << (bVar17 & 0x1f)
                       ) >> (bVar17 & 0x1f);
          }
        }
        lVar10 = (longlong)(int)uVar30;
        if ((longlong *)plVar13[4] != (longlong *)0x0) {
          plVar11 = (longlong *)plVar13[4];
        }
        bVar17 = (byte)iVar5 & 0x1f;
        puVar1 = (uint *)((longlong)plVar11 + (longlong)(iVar23 >> 5) * 4);
        *puVar1 = *puVar1 & (-2 << bVar17 | 0xfffffffeU >> 0x20 - bVar17);
      }
      else {
        uVar14 = (ulonglong)*(uint *)(plVar13 + 6);
        lVar10 = (longlong)(int)*(uint *)(plVar13 + 6);
        iVar5 = *(int *)(*plVar13 + 4 + lVar10 * 0x10);
        *(int *)(plVar13 + 6) = iVar5;
        iVar22 = *(int *)((longlong)plVar13 + 0x34) + -1;
        *(int *)((longlong)plVar13 + 0x34) = iVar22;
        if (iVar22 != 0) {
          *(undefined4 *)(*plVar13 + (longlong)iVar5 * 0x10) = 0xffffffff;
        }
      }
      iVar5 = (int)uVar14;
      plVar11 = plVar13 + 2;
      if ((longlong *)plVar13[4] != (longlong *)0x0) {
        plVar11 = (longlong *)plVar13[4];
      }
      iVar22 = iVar5 + 0x1f;
      if (-1 < iVar5) {
        iVar22 = iVar5;
      }
      puVar1 = (uint *)((longlong)plVar11 + (longlong)(iVar22 >> 5) * 4);
      *puVar1 = *puVar1 | 1 << ((byte)uVar14 & 0x1f);
      lVar25 = *plVar13;
      lVar10 = lVar10 * 0x10;
      local_170 = (wchar_t *)(lVar25 + lVar10);
      *(undefined8 **)(lVar25 + lVar10) = puVar9;
      *(undefined4 *)(lVar25 + 8 + lVar10) = 0xffffffff;
      iVar5 = *(int *)(puVar9 + 1) + -1;
      if (*(int *)(puVar9 + 1) == 0) {
        iVar5 = 0;
      }
      local_150 = uVar14;
      uVar7 = FUN_1447053be(*puVar9,iVar5 * 2);
      uVar30 = (int)plVar13[1] - *(int *)((longlong)plVar13 + 0x34);
      if (uVar30 == 1) {
        iVar5 = 1;
      }
      else {
        if ((int)plVar13[1] != *(int *)((longlong)plVar13 + 0x34)) {
          plVar13 = local_178 + 7;
          if ((longlong *)local_178[8] != (longlong *)0x0) {
            plVar13 = (longlong *)local_178[8];
          }
          iVar5 = *(int *)((longlong)plVar13 + (ulonglong)((int)local_178[9] - 1U & uVar7) * 4);
          if (iVar5 != -1) {
            local_148 = *(undefined8 **)local_170;
            uVar24 = *(uint *)(local_148 + 1);
            iVar22 = uVar24 - 1;
            if (uVar24 == 0) {
              iVar22 = 0;
            }
            pwVar26 = (wchar_t *)*local_148;
            lVar10 = *local_178;
            do {
              lVar25 = (longlong)iVar5 * 0x10;
              uVar29 = *(uint *)(*(undefined8 **)(lVar10 + lVar25) + 1);
              iVar5 = uVar29 - 1;
              if (uVar29 == 0) {
                iVar5 = 0;
              }
              if ((iVar5 == iVar22) &&
                 (((uVar24 < 2 || (uVar29 < 2)) ||
                  (local_164 = uVar30,
                  iVar5 = wcsncmp((wchar_t *)**(undefined8 **)(lVar10 + lVar25),pwVar26,
                                  (longlong)iVar22), uVar30 = local_164, iVar5 == 0)))) {
                *(undefined8 **)(lVar10 + lVar25) = local_148;
                FUN_142866a1e(local_178,local_150);
                param_2 = local_160;
                goto LAB_14049a197;
              }
              iVar5 = *(int *)(lVar10 + 8 + lVar25);
            } while (iVar5 != -1);
          }
        }
        iVar5 = 1;
        if (3 < uVar30) {
          uVar14 = (ulonglong)(uVar30 & 0xfffffffe) + 0xf;
          lVar10 = 0x3f;
          if (uVar14 != 0) {
            for (; uVar14 >> lVar10 == 0; lVar10 = lVar10 + -1) {
            }
          }
          iVar5 = 1 << ((byte)lVar10 & 0x1f);
        }
      }
      param_2 = local_160;
      if (((int)uVar30 < 1) || (iVar5 <= (int)local_178[9])) {
        uVar7 = (int)local_178[9] - 1U & uVar7;
        *(uint *)(local_170 + 6) = uVar7;
        plVar13 = (longlong *)local_178[8];
        if ((longlong *)local_178[8] == (longlong *)0x0) {
          plVar13 = local_178 + 7;
        }
        *(undefined4 *)(local_170 + 4) =
             *(undefined4 *)
              ((longlong)plVar13 + ((longlong)(int)local_178[9] - 1U & (longlong)(int)uVar7) * 4);
        plVar13 = (longlong *)local_178[8];
        if ((longlong *)local_178[8] == (longlong *)0x0) {
          plVar13 = local_178 + 7;
        }
        *(int *)((longlong)plVar13 + ((longlong)(int)local_178[9] - 1U & (longlong)(int)uVar7) * 4)
             = (int)local_150;
      }
      else {
        *(int *)(local_178 + 9) = iVar5;
        FUN_1414f335a();
      }
    }
    else {
      lVar10 = *plVar11;
      *(undefined8 *)(lVar10 + 0x10) = *(undefined8 *)param_2;
      if ((plVar13[0xb] == lVar10) && (lVar25 = *(longlong *)(plVar13[0xb] + 0x20), lVar25 != 0)) {
        plVar13[0xb] = lVar25;
      }
      if (plVar13[10] != lVar10) {
        lVar25 = *(longlong *)(lVar10 + 0x18);
        if (*(longlong *)(lVar10 + 0x20) != 0) {
          *(longlong *)(*(longlong *)(lVar10 + 0x20) + 0x18) = lVar25;
        }
        if (lVar25 != 0) {
          *(undefined8 *)(lVar25 + 0x20) = *(undefined8 *)(lVar10 + 0x20);
        }
        *(longlong *)(lVar10 + 0x18) = 0;
        *(undefined8 *)(lVar10 + 0x20) = 0;
        lVar25 = plVar13[10];
        *(longlong *)(lVar10 + 0x18) = lVar25;
        if (lVar25 != 0) {
          *(longlong *)(lVar25 + 0x20) = lVar10;
        }
        plVar13[10] = lVar10;
      }
    }
  }
LAB_14049a197:
  if ((local_60 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
LAB_14049a536:
  iVar5 = *(int *)(lVar25 + 8);
  plVar13 = local_178;
  if (iVar5 == -1) goto LAB_14049a587;
  goto LAB_14049a4f7;
}



// FUNCTION 14049aca8 FUN_14049aca8 body=109 status=ok
// SIG undefined FUN_14049aca8(void)

undefined8 FUN_14049aca8(longlong *param_1,longlong param_2,longlong param_3,uint param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if ((param_4 >> 0x16 & 1) == 0) {
    if (param_2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = (**(code **)(*param_1 + 0x210))(param_1);
    }
    if (param_3 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = (**(code **)(*param_1 + 0x210))(param_1,param_3);
    }
    uVar1 = FUN_14049ad16(uVar1,uVar2,param_4);
    return uVar1;
  }
  return 0;
}



// FUNCTION 14049ad16 FUN_14049ad16 body=207 status=ok
// SIG undefined FUN_14049ad16(void)

undefined8 FUN_14049ad16(longlong param_1,longlong param_2,ulonglong param_3)

{
  longlong *plVar1;
  uint *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  if (param_1 == param_2) {
    return 1;
  }
  if (param_2 == 0 || param_1 == 0) {
    return 0;
  }
  if (*(longlong *)(param_1 + 0x10) != *(longlong *)(param_2 + 0x10)) {
    return 0;
  }
  if (*(longlong *)(param_1 + 0x18) != *(longlong *)(param_2 + 0x18)) {
    return 0;
  }
  lVar3 = param_1;
  if (((uint)param_3 & 0x300) == 0x200) {
    do {
      lVar5 = param_2;
      if ((*(uint *)(lVar3 + 8) & 0x30) != 0) goto LAB_14049adc8;
      plVar1 = (longlong *)(lVar3 + 0x20);
      lVar3 = *plVar1;
    } while (*plVar1 != 0);
    uVar6 = 1;
    goto LAB_14049ad92;
  }
  uVar6 = (param_3 & 0xffffffff) >> 8;
  goto LAB_14049ad6f;
  while (plVar1 = (longlong *)(lVar5 + 0x20), lVar5 = *plVar1, *plVar1 != 0) {
LAB_14049adc8:
    puVar2 = (uint *)(lVar5 + 8);
    if ((*puVar2 & 0x30) != 0) break;
  }
  uVar6 = (ulonglong)((*puVar2 & 0x30) == 0);
LAB_14049ad6f:
  if ((uVar6 & 1) == 0) {
    return 0;
  }
LAB_14049ad92:
  if (((uint)param_3 >> 10 & 1) != 0) {
    lVar3 = FUN_1468915d4();
    uVar6 = uVar6 & 0xff;
    if (lVar3 == 0) {
      uVar6 = 0;
    }
  }
  if ((uVar6 & 1) == 0) {
    return 0;
  }
  uVar4 = FUN_1468d9831(param_1,param_2,param_3 & 0xffffffff);
  return uVar4;
}



// FUNCTION 14049ade6 FUN_14049ade6 body=163 status=ok
// SIG undefined FUN_14049ade6(void)

int FUN_14049ade6(longlong *param_1,uint param_2,undefined8 param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_58 [39];
  undefined1 local_31;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar4 != -1) {
      lVar3 = *param_1;
      do {
        cVar1 = FUN_14049ae8a(&local_31,lVar3 + (longlong)iVar4 * 0x310,param_3);
        if (cVar1 != '\0') goto LAB_14049ae65;
        lVar3 = *param_1;
        iVar4 = *(int *)(lVar3 + 0x308 + (longlong)iVar4 * 0x310);
      } while (iVar4 != -1);
    }
  }
  iVar4 = -1;
LAB_14049ae65:
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14049ae8a FUN_14049ae8a body=875 status=ok
// SIG undefined FUN_14049ae8a(void)

undefined8 FUN_14049ae8a(undefined8 param_1,longlong param_2,longlong param_3)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  if (((((((*(longlong *)(param_2 + 0x48) == *(longlong *)(param_3 + 0x48)) &&
          (*(longlong *)(param_2 + 0x18) == *(longlong *)(param_3 + 0x18))) &&
         (*(longlong *)(param_2 + 0x28) == *(longlong *)(param_3 + 0x28))) &&
        (((*(longlong *)(param_2 + 0x38) == *(longlong *)(param_3 + 0x38) &&
          (*(longlong *)(param_2 + 0x58) == *(longlong *)(param_3 + 0x58))) &&
         ((uVar1 = *(uint *)(param_2 + 0x218), uVar1 == *(uint *)(param_3 + 0x218) &&
          ((uVar2 = *(uint *)(param_2 + 0x248), uVar2 == *(uint *)(param_3 + 0x248) &&
           (*(int *)(param_2 + 0x24c) == *(int *)(param_3 + 0x24c))))))))) &&
       ((*(int *)(param_2 + 0x224) == *(int *)(param_3 + 0x224) &&
        (((*(int *)(param_2 + 0x270) == *(int *)(param_3 + 0x270) &&
          (*(longlong *)(param_2 + 8) == *(longlong *)(param_3 + 8))) &&
         (iVar5 = memcmp((void *)(param_2 + 0x60),(void *)(param_3 + 0x60),0x148), iVar5 == 0))))))
      && (((*(int *)(param_2 + 0x1a8) == *(int *)(param_3 + 0x1a8) &&
           (iVar5 = memcmp((void *)(param_2 + 0x1ac),(void *)(param_3 + 0x1ac),0x2c), iVar5 == 0))
          && (((iVar5 = memcmp((void *)(param_2 + 0x1d8),(void *)(param_3 + 0x1d8),0x38), iVar5 == 0
               && ((*(int *)(param_2 + 0x220) == *(int *)(param_3 + 0x220) &&
                   (*(int *)(param_2 + 600) == *(int *)(param_3 + 600))))) &&
              (*(int *)(param_2 + 0x250) == *(int *)(param_3 + 0x250))))))) &&
     (*(int *)(param_2 + 0x254) == *(int *)(param_3 + 0x254))) {
    if ((ulonglong)uVar2 != 0) {
      uVar6 = 0;
      do {
        if (*(int *)(param_2 + 0x228 + uVar6 * 4) != *(int *)(param_3 + 0x228 + uVar6 * 4)) {
          return 0;
        }
        uVar6 = uVar6 + 1;
      } while (uVar2 != uVar6);
    }
    if (*(longlong *)(param_2 + 0x278) != *(longlong *)(param_3 + 0x278)) {
      return 0;
    }
    if (*(longlong *)(param_2 + 0x280) != *(longlong *)(param_3 + 0x280)) {
      return 0;
    }
    if (*(longlong *)(param_2 + 0x288) != *(longlong *)(param_3 + 0x288)) {
      return 0;
    }
    if (*(longlong *)(param_2 + 0x290) != *(longlong *)(param_3 + 0x290)) {
      return 0;
    }
    if (*(longlong *)(param_2 + 0x298) != *(longlong *)(param_3 + 0x298)) {
      return 0;
    }
    if (*(longlong *)(param_2 + 0x2a0) != *(longlong *)(param_3 + 0x2a0)) {
      return 0;
    }
    if (*(longlong *)(param_2 + 0x2b8) != *(longlong *)(param_3 + 0x2b8)) {
      return 0;
    }
    if (*(longlong *)(param_2 + 0x2c0) != *(longlong *)(param_3 + 0x2c0)) {
      return 0;
    }
    if (*(longlong *)(param_2 + 0x2a8) != *(longlong *)(param_3 + 0x2a8)) {
      return 0;
    }
    if (*(longlong *)(param_2 + 0x2b0) != *(longlong *)(param_3 + 0x2b0)) {
      return 0;
    }
    lVar3 = *(longlong *)(param_2 + 0x210);
    lVar4 = *(longlong *)(param_3 + 0x210);
    if ((ulonglong)uVar1 != 0 && lVar3 != lVar4) {
      lVar7 = 0;
      do {
        if (*(int *)(lVar3 + 8 + lVar7) != *(int *)(lVar4 + 8 + lVar7)) {
          return 0;
        }
        if (*(int *)(lVar3 + 0xc + lVar7) != *(int *)(lVar4 + 0xc + lVar7)) {
          return 0;
        }
        if (*(int *)(lVar3 + 0x10 + lVar7) != *(int *)(lVar4 + 0x10 + lVar7)) {
          return 0;
        }
        if (*(int *)(lVar3 + 0x14 + lVar7) != *(int *)(lVar4 + 0x14 + lVar7)) {
          return 0;
        }
        if (*(int *)(lVar3 + 0x18 + lVar7) != *(int *)(lVar4 + 0x18 + lVar7)) {
          return 0;
        }
        if (*(int *)(lVar3 + 0x1c + lVar7) != *(int *)(lVar4 + 0x1c + lVar7)) {
          return 0;
        }
        if ((*(char **)(lVar3 + lVar7) != *(char **)(lVar4 + lVar7)) &&
           (iVar5 = strcmp(*(char **)(lVar3 + lVar7),*(char **)(lVar4 + lVar7)), iVar5 != 0)) {
          return 0;
        }
        lVar7 = lVar7 + 0x20;
      } while ((ulonglong)uVar1 << 5 != lVar7);
    }
    if ((((*(longlong *)(param_2 + 0x2d8) == *(longlong *)(param_3 + 0x2d8)) &&
         (*(longlong *)(param_2 + 0x2e0) == *(longlong *)(param_3 + 0x2e0))) &&
        (*(longlong *)(param_2 + 0x2e8) == *(longlong *)(param_3 + 0x2e8))) &&
       (*(longlong *)(param_2 + 0x2f8) == *(longlong *)(param_3 + 0x2f8))) {
      return CONCAT71((int7)((ulonglong)*(longlong *)(param_2 + 0x2f0) >> 8),
                      *(longlong *)(param_2 + 0x2f0) == *(longlong *)(param_3 + 0x2f0));
    }
  }
  return 0;
}



// FUNCTION 14049b1f6 FUN_14049b1f6 body=380 status=ok
// SIG undefined FUN_14049b1f6(void)

longlong FUN_14049b1f6(uint *param_1)

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
  lVar4 = FUN_14049b372();
  if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
      lVar4 + 0x30)) {
    return lVar5;
  }
  return 0;
}



// FUNCTION 14049b372 FUN_14049b372 body=228 status=ok
// SIG undefined FUN_14049b372(void)

longlong FUN_14049b372(void)

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
  if (DAT_14cb5cb80 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e9e4fe;
    local_38 = &LAB_14868fddd;
    local_40 = FUN_141850e45;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x50;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxDialogFunction",&DAT_14cb5cb80,&DAT_14868fddc);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb5cb80;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14049b458 FUN_14049b458 body=122 status=ok
// SIG undefined FUN_14049b458(void)

void FUN_14049b458(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14049b506(&local_20,param_1);
  puVar2 = (undefined8 *)(param_1 + 0x2f0);
  if (puVar2 != &local_20) {
    uVar1 = *puVar2;
    *puVar2 = local_20;
    local_20 = 0;
    FUN_14049b4d4(puVar2,uVar1);
  }
  FUN_14049b4d4(&local_20,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14049b4d4 FUN_14049b4d4 body=50 status=ok
// SIG undefined FUN_14049b4d4(void)

void FUN_14049b4d4(undefined8 param_1,longlong param_2)

{
  if (param_2 == 0) {
    return;
  }
  FUN_140442dda(param_2 + 0x48);
  FUN_140442e10(param_2 + 8);
  FUN_1400020a8(param_2);
  return;
}



// FUNCTION 14049b506 FUN_14049b506 body=110 status=ok
// SIG undefined FUN_14049b506(void)

longlong * FUN_14049b506(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 *puVar2;
  
  if (DAT_14cac94f0 == '\x01') {
    cVar1 = FUN_1447e0190();
    if (cVar1 != '\0') {
      puVar2 = (undefined8 *)FUN_14001cc68(0x78,0x10);
      *puVar2 = param_2;
      puVar2[1] = puVar2;
      puVar2[2] = 0;
      puVar2[3] = 0;
      puVar2[4] = 0;
      puVar2[5] = 0;
      puVar2[6] = 0;
      puVar2[7] = 0;
      puVar2[8] = 0;
      puVar2[9] = puVar2;
      puVar2[10] = 0;
      puVar2[0xb] = 0;
      puVar2[0xc] = 0;
      puVar2[0xd] = 0;
      *(undefined2 *)(puVar2 + 0xe) = 1;
      goto LAB_14049b563;
    }
  }
  puVar2 = (undefined8 *)0x0;
LAB_14049b563:
  *param_1 = (longlong)puVar2;
  return param_1;
}



// FUNCTION 14049b582 FUN_14049b582 body=73 status=ok
// SIG undefined FUN_14049b582(void)

undefined8 * FUN_14049b582(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b3a4880;
  FUN_1447cd778(param_1[3],*(undefined4 *)(param_1 + 4));
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14049b5cc FUN_14049b5cc body=286 status=ok
// SIG undefined FUN_14049b5cc(void)

undefined8 FUN_14049b5cc(longlong param_1,undefined8 param_2)

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
    if (iVar1 == 2) goto LAB_14049b6e4;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_14049b6e4;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_14049b6e4:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_14049b691;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5 + (longlong)*(int *)(param_1 + 0x28),param_2);
      uVar6 = 1;
      goto LAB_14049b691;
    }
  }
  uVar6 = 0;
LAB_14049b691:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14049b6ec FUN_14049b6ec body=753 status=ok
// SIG undefined FUN_14049b6ec(void)

void FUN_14049b6ec(undefined8 param_1,longlong *param_2)

{
  int *piVar1;
  PSRWLOCK SRWLock;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  char cVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 uVar8;
  int iVar9;
  undefined1 auStack_88 [32];
  longlong *local_68 [2];
  longlong local_58 [3];
  longlong *plStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1449027d0(param_1,local_58 + 2);
  plVar6 = plStack_40;
  lVar2 = *(longlong *)(local_58[2] + 0x180);
  plVar3 = *(longlong **)(local_58[2] + 0x188);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  if (plStack_40 != (longlong *)0x0) {
    LOCK();
    plVar7 = plStack_40 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  SRWLock = (PSRWLOCK)(lVar2 + 0x138);
  AcquireSRWLockShared(SRWLock);
  plVar6 = (longlong *)*param_2;
  if (*(code **)(*plVar6 + 0x50) != FUN_144828418) {
    plVar6 = (longlong *)(**(code **)(*plVar6 + 0x50))();
  }
  FUN_1447a1fc0(plVar6);
  plVar6 = (longlong *)*param_2;
  pcVar4 = *(code **)(*plVar6 + 0x28);
  if (pcVar4 == FUN_14482841c) {
    plVar7 = plVar6 + 3;
    if (plVar6[5] != 0) {
      plVar7 = (longlong *)(plVar6[5] + 8);
    }
  }
  else if (pcVar4 == (code *)&LAB_14010c34c) {
    plVar7 = plVar6 + 2;
  }
  else {
    plVar7 = (longlong *)(*pcVar4)(plVar6);
  }
  if ((int)plVar7[1] < 2) {
    plVar6 = *(longlong **)(lVar2 + 0x80);
    if (*(code **)(*plVar6 + 0x50) != FUN_144828418) {
      plVar6 = (longlong *)(**(code **)(*plVar6 + 0x50))();
    }
    FUN_1447a1fc0(plVar6);
    plVar6 = *(longlong **)(lVar2 + 0x80);
    pcVar4 = *(code **)(*plVar6 + 0x28);
    if (pcVar4 == FUN_14482841c) {
      plVar7 = plVar6 + 3;
      if (plVar6[5] != 0) {
        plVar7 = (longlong *)(plVar6[5] + 8);
      }
    }
    else if (pcVar4 == (code *)&LAB_14010c34c) {
      plVar7 = plVar6 + 2;
    }
    else {
      plVar7 = (longlong *)(*pcVar4)(plVar6);
    }
    if ((int)plVar7[1] < 2) {
      ReleaseSRWLockShared(SRWLock);
      goto LAB_14049b800;
    }
  }
  ReleaseSRWLockShared(SRWLock);
  AcquireSRWLockExclusive(SRWLock);
  cVar5 = FUN_1410e88ee(lVar2 + 0x80,param_2);
  if (cVar5 != '\0') {
    local_58[2] = 0;
    plStack_40 = (longlong *)0x0;
    local_58[0] = 0;
    local_58[1] = 0;
    uVar8 = FUN_1447a1f4a(param_2);
    FUN_148e59aea(uVar8,local_58 + 2,local_58);
    if ((bool)*(char *)(lVar2 + 0x60) == (int)plStack_40 < 2) {
      if (*(int *)(lVar2 + 100) == 0) {
        iVar9 = 1;
        goto LAB_14049b94b;
      }
    }
    else {
      iVar9 = *(int *)(lVar2 + 100) + 1;
LAB_14049b94b:
      *(bool *)(lVar2 + 0x60) = (int)plStack_40 < 2;
      *(int *)(lVar2 + 100) = iVar9;
    }
    FUN_140009b9a(local_68,local_58 + 2);
    FUN_14003c038(lVar2 + 0x48,local_68);
    if (local_68[0] != (longlong *)0x0) {
      (**(code **)(*local_68[0] + 0x10))();
    }
    FUN_140009b9a(local_68,local_58);
    FUN_14003c038(lVar2 + 0x30,local_68);
    if (local_68[0] != (longlong *)0x0) {
      (**(code **)(*local_68[0] + 0x10))();
    }
    *(int *)(lVar2 + 0x130) = *(int *)(lVar2 + 0x130) + 1;
    if (local_58[0] != 0) {
      FUN_1400020a8();
    }
    if (local_58[2] != 0) {
      FUN_1400020a8();
    }
  }
  ReleaseSRWLockExclusive(SRWLock);
LAB_14049b800:
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar3 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
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
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14049b9de FUN_14049b9de body=31 status=ok
// SIG undefined FUN_14049b9de(void)

void FUN_14049b9de(longlong *param_1)

{
  (**(code **)(*param_1 + 8))();
  return;
}



// FUNCTION 14049b9fe FUN_14049b9fe body=388 status=ok
// SIG undefined FUN_14049b9fe(void)

void FUN_14049b9fe(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  longlong *plVar1;
  char cVar2;
  FILE *_File;
  undefined1 auStack_498 [32];
  undefined8 local_478;
  undefined8 local_470;
  undefined8 local_468;
  undefined2 *local_460;
  undefined2 *local_458;
  ulonglong *local_450;
  char local_448;
  undefined2 local_440 [512];
  ulonglong local_40 [3];
  
  local_40[0] = DAT_14c707940 ^ (ulonglong)auStack_498;
  cVar2 = FUN_14049bbfa();
  if (((byte)((char)param_3 - 2U) < 3) && (cVar2 != '\0')) {
    local_460 = local_440;
    local_448 = '\0';
    local_450 = local_40;
    local_470 = param_5;
    local_468 = 0;
    local_478 = param_4;
    local_458 = local_460;
    FUN_14049bc88(param_1,&local_460,param_2,param_3);
    if (local_450 <= local_458 + 1) {
      FUN_140213274(&local_460,1);
    }
    *local_458 = 10;
    local_458[1] = 0;
    local_458 = local_458 + 1;
    FUN_14049bb83(&DAT_149e11938,local_460);
    _File = (FILE *)__acrt_iob_func(1);
    fflush(_File);
    if (local_448 == '\x01') {
      FUN_1400020a8(local_460);
    }
  }
  local_478 = param_5;
  FUN_14049bdf2(param_1,param_2,param_3,param_4);
  plVar1 = *(longlong **)(param_1 + 0x120);
  if (plVar1 != (longlong *)0x0) {
    local_478 = param_5;
    (**(code **)(*plVar1 + 8))(plVar1,param_2,param_3,param_4);
  }
  if ((local_40[0] ^ (ulonglong)auStack_498) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14049bb83 FUN_14049bb83 body=118 status=ok
// SIG undefined FUN_14049bb83(void)

void FUN_14049bb83(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined8 *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  local_28 = &local_res10;
  uVar1 = __acrt_iob_func(1);
  puVar2 = (undefined8 *)FUN_144737586();
  local_38 = &local_res10;
  __stdio_common_vfwprintf(*puVar2,uVar1,param_1,0);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14049bbfa FUN_14049bbfa body=141 status=ok
// SIG undefined FUN_14049bbfa(void)

byte FUN_14049bbfa(void)

{
  char cVar1;
  byte bVar2;
  undefined8 uVar3;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c83ff3c) {
    FUN_144b3d300(&DAT_14c83ff3c);
    if (DAT_14c83ff3c == -1) {
      uVar3 = FUN_14118da1c();
      cVar1 = FUN_14054d46e(uVar3,L"stdout");
      if (cVar1 == '\0') {
        bVar2 = 1;
        if (DAT_14c86a9e8 != (longlong *)0x0) {
          bVar2 = (**(code **)(*DAT_14c86a9e8 + 0x60))();
          bVar2 = bVar2 ^ 1;
        }
      }
      else {
        bVar2 = 0;
      }
      DAT_14c83ff38 = bVar2;
      _Init_thread_footer(&DAT_14c83ff3c);
    }
  }
  return DAT_14c83ff38;
}



// FUNCTION 14049bc88 FUN_14049bc88 body=360 status=ok
// SIG undefined FUN_14049bc88(void)

void FUN_14049bc88(longlong *param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4,
                  undefined8 param_5,undefined8 param_6,undefined1 *param_7)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined4 *puVar4;
  undefined8 unaff_RBX;
  undefined7 uVar6;
  ulonglong uVar5;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined8 local_50;
  undefined8 local_48;
  longlong local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar6 = (undefined7)((ulonglong)unaff_RBX >> 8);
  if ((char)param_4 == '\x03') {
    if ((char)param_1[2] != '\0') {
      uVar5 = CONCAT71(uVar6,2);
      goto LAB_14049bcc7;
    }
  }
  else if (((((uint)param_4 & 0xff) == 2) && (*(char *)((longlong)param_1 + 0x11) == '\x01')) &&
          (uVar5 = CONCAT71(uVar6,3), DAT_14c868880 == '\0')) goto LAB_14049bcc7;
  uVar5 = param_4 & 0xffffffff;
LAB_14049bcc7:
  if (param_7 != (undefined1 *)0x0) {
    *param_7 = (char)uVar5;
  }
  plVar2 = (longlong *)(**(code **)(*param_1 + 0x88))();
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 8))(plVar2,&local_40);
    iVar1 = local_38 + -1;
    if (local_38 == 0) {
      iVar1 = 0;
    }
    lVar3 = FUN_1449668a2(param_2,local_40,iVar1);
    puVar4 = *(undefined4 **)(lVar3 + 8);
    if (*(ulonglong *)(lVar3 + 0x10) <= (longlong)puVar4 + 6U) {
      FUN_140213274(lVar3,3);
      puVar4 = *(undefined4 **)(lVar3 + 8);
    }
    *(undefined2 *)(puVar4 + 1) = 0x20;
    *puVar4 = 0x3a0020;
    *(longlong *)(lVar3 + 8) = (longlong)puVar4 + 6;
    if (local_40 != 0) {
      FUN_1400020a8();
    }
  }
  local_50 = 0xbff0000000000000;
  local_48 = 0;
  local_58 = 0;
  FUN_140212aa8(param_2,uVar5 & 0xffffffff,param_5,param_3);
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14049bdf2 FUN_14049bdf2 body=501 status=ok
// SIG undefined FUN_14049bdf2(void)

void FUN_14049bdf2(longlong param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 unaff_RBX;
  undefined7 uVar4;
  ulonglong uVar3;
  
  uVar4 = (undefined7)((ulonglong)unaff_RBX >> 8);
  if ((char)param_3 == '\x03') {
    if (*(char *)(param_1 + 0x10) != '\0') {
      uVar3 = CONCAT71(uVar4,2);
      goto LAB_14049be21;
    }
  }
  else if (((((uint)param_3 & 0xff) == 2) && (*(char *)(param_1 + 0x11) == '\x01')) &&
          (uVar3 = CONCAT71(uVar4,3), DAT_14c868880 == '\0')) goto LAB_14049be21;
  uVar3 = param_3 & 0xffffffff;
LAB_14049be21:
  if (DAT_14c872bf0 == '\x01') {
    if (((byte)uVar3 & 0xfe) == 2) {
      FUN_1468103b4(param_1,param_2,uVar3 & 0xffffffff,param_4);
    }
    if (DAT_14c86a9e8 != (longlong *)0x0) {
      uVar2 = FUN_144a82cde();
      cVar1 = FUN_14049bfe8(uVar2,DAT_14c86a9e8);
      if (cVar1 == '\0') {
        (**(code **)(*DAT_14c86a9e8 + 8))(DAT_14c86a9e8,param_2,uVar3 & 0xffffffff,param_4,param_5);
      }
    }
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c872ef8) && (FUN_144b3d300(&DAT_14c872ef8), DAT_14c872ef8 == -1)) {
    FUN_1459825b0(&DAT_14c872ee0);
    atexit(FUN_1427868a5);
    _Init_thread_footer(&DAT_14c872ef8);
  }
  cVar1 = FUN_14049bfe8(&DAT_14c872ee0,param_1);
  if (cVar1 != '\0') {
    return;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c872ef8) && (FUN_144b3d300(&DAT_14c872ef8), DAT_14c872ef8 == -1)) {
    FUN_1459825b0(&DAT_14c872ee0);
    atexit(FUN_1427868a5);
    _Init_thread_footer(&DAT_14c872ef8);
  }
  FUN_1449bda34(&DAT_14c872ee0,param_2,uVar3 & 0xffffffff,param_4);
  return;
}



// FUNCTION 14049bfe8 FUN_14049bfe8 body=194 status=ok
// SIG undefined FUN_14049bfe8(void)

longlong FUN_14049bfe8(longlong param_1,longlong param_2)

{
  uint *puVar1;
  int *piVar2;
  longlong *plVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *(longlong *)(param_1 + 0x10);
  LOCK();
  puVar1 = (uint *)(local_20 + 8);
  uVar4 = *puVar1;
  *puVar1 = *puVar1 + 2;
  UNLOCK();
  if ((uVar4 & 1) != 0) {
    FUN_142787bd2(&local_20);
  }
  lVar5 = *(longlong *)(param_1 + 0x10);
  if ((longlong)*(int *)(lVar5 + 0x50) != 0) {
    lVar6 = 0;
    do {
      if (*(longlong *)(*(longlong *)(lVar5 + 0x48) + lVar6) == param_2) {
        lVar5 = CONCAT71((int7)((ulonglong)lVar5 >> 8),1);
        goto LAB_14049c04d;
      }
      lVar6 = lVar6 + 8;
    } while ((longlong)*(int *)(lVar5 + 0x50) * 8 != lVar6);
  }
  piVar2 = (int *)(lVar5 + 0x60);
  if ((longlong)*piVar2 == 0) {
    lVar5 = 0;
  }
  else {
    plVar3 = (longlong *)(lVar5 + 0x58);
    lVar6 = 0;
    do {
      bVar7 = *(longlong *)(*plVar3 + lVar6) == param_2;
      lVar5 = CONCAT71((int7)((ulonglong)lVar5 >> 8),bVar7);
      if (bVar7) break;
      bVar7 = (longlong)*piVar2 * 8 + -8 != lVar6;
      lVar6 = lVar6 + 8;
    } while (bVar7);
  }
LAB_14049c04d:
  LOCK();
  *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + -2;
  UNLOCK();
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar5;
}



// FUNCTION 14049c0ae FUN_14049c0ae body=338 status=ok
// SIG undefined FUN_14049c0ae(void)

void FUN_14049c0ae(undefined8 *param_1)

{
  int iVar1;
  longlong lVar2;
  undefined4 *puVar3;
  code *pcVar4;
  undefined8 uVar5;
  longlong *plVar6;
  
  if (DAT_14c872d28 == (longlong *)0x0) {
    uVar5 = FUN_14001cc68(0,0);
    FUN_1400020a8(uVar5);
  }
  plVar6 = DAT_14c872d28;
  pcVar4 = *(code **)(*DAT_14c872d28 + 0x28);
  if (pcVar4 == FUN_144a981b6) {
    lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    iVar1 = *(int *)(lVar2 + 0xc7c);
    if (iVar1 < 1) {
      if (-1 < iVar1) {
        plVar6 = (longlong *)DAT_14c872d28[0xf];
        pcVar4 = *(code **)(*plVar6 + 0x28);
        if (pcVar4 == FUN_140023078) {
          puVar3 = (undefined4 *)FUN_1400229f8(plVar6,0x10000,0x10);
          goto LAB_14049c12f;
        }
        goto LAB_14049c1d1;
      }
    }
    else {
      *(int *)(lVar2 + 0xc7c) = iVar1 + -1;
    }
    puVar3 = (undefined4 *)FUN_1446fd46e(plVar6,0x10000,8,1);
  }
  else {
LAB_14049c1d1:
    puVar3 = (undefined4 *)(*pcVar4)(plVar6,0x10000,8);
  }
LAB_14049c12f:
  *puVar3 = 0xffffffff;
  *(undefined4 **)(puVar3 + 0x10) = puVar3 + 0x16;
  puVar3[0x12] = 0;
  *param_1 = puVar3;
  if (*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0xca0) == '\0') {
    *(undefined1 *)
     (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xca0) = 1;
    __tlregdtor(&LAB_14278852a);
    puVar3 = (undefined4 *)*param_1;
  }
  *(undefined4 **)
   (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc98) = puVar3
  ;
  return;
}



// FUNCTION 14049c200 FUN_14049c200 body=151 status=ok
// SIG undefined FUN_14049c200(void)

void FUN_14049c200(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x78));
  iVar1 = *(int *)(param_1 + 0x70);
  *(uint *)(param_1 + 0x70) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x74) < iVar1 + 1U) {
    FUN_145718112((longlong *)(param_1 + 0x68),iVar1);
  }
  FUN_14049c298((longlong)iVar1 * 0x28 + *(longlong *)(param_1 + 0x68),param_2,param_4,param_3,
                param_5);
                    /* WARNING: Could not recover jumptable at 0x00014049c283. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x78));
  return;
}



// FUNCTION 14049c298 FUN_14049c298 body=152 status=ok
// SIG undefined FUN_14049c298(void)

undefined8 *
FUN_14049c298(undefined8 *param_1,wchar_t *param_2,ulonglong *param_3,undefined1 param_4,
             undefined8 param_5)

{
  ulonglong uVar1;
  size_t sVar2;
  void *_Dst;
  longlong lVar3;
  longlong lVar4;
  
  *param_1 = 0;
  uVar1 = *param_3;
  param_1[1] = uVar1 & 0xffffffff;
  *(int *)(param_1 + 2) = (int)(uVar1 >> 0x20);
  *(undefined1 *)((longlong)param_1 + 0x14) = 0;
  param_1[3] = param_5;
  *(undefined1 *)(param_1 + 4) = param_4;
  sVar2 = wcslen(param_2);
  lVar4 = (sVar2 << 0x20) + 0x100000000;
  sVar2 = lVar4 >> 0x1f;
  lVar4 = lVar4 >> 0x1e;
  lVar3 = -1;
  if (-1 < (longlong)sVar2) {
    lVar3 = lVar4 + (ulonglong)(lVar4 == 0);
  }
  _Dst = (void *)FUN_14001cc68(lVar3,0x10);
  *param_1 = _Dst;
  memcpy(_Dst,param_2,sVar2);
  return param_1;
}



// FUNCTION 14049c336 FUN_14049c336 body=57 status=ok
// SIG undefined FUN_14049c336(void)

void FUN_14049c336(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb566b8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb566b8 = FUN_140002ddd(FUN_1464b8282,uVar1,L"DamageModifierCriticalDef");
  }
  return;
}



// FUNCTION 14049c370 FUN_14049c370 body=122 status=ok
// SIG undefined FUN_14049c370(void)

void FUN_14049c370(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_14049c3ec(param_1);
    }
    memset((void *)((longlong)iVar1 * 8 + *param_1),0,(longlong)(param_2 - iVar1) << 3);
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (*(int *)(param_1 + 1) = param_2, param_3 == '\x01')) {
      FUN_1481f1bc0(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 14049c3ec FUN_14049c3ec body=353 status=ok
// SIG undefined FUN_14049c3ec(void)

void FUN_14049c3ec(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14049c471;
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
LAB_14049c471:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 14049c54e FUN_14049c54e body=122 status=ok
// SIG undefined FUN_14049c54e(void)

void FUN_14049c54e(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_14049c5ca(param_1);
    }
    memset((void *)((longlong)iVar1 * 8 + *param_1),0,(longlong)(param_2 - iVar1) << 3);
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (*(int *)(param_1 + 1) = param_2, param_3 == '\x01')) {
      FUN_1481f1c5c(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 14049c5ca FUN_14049c5ca body=353 status=ok
// SIG undefined FUN_14049c5ca(void)

void FUN_14049c5ca(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14049c64f;
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
LAB_14049c64f:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 14049c72c FUN_14049c72c body=94 status=ok
// SIG undefined FUN_14049c72c(void)

byte FUN_14049c72c(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  longlong lVar1;
  byte bVar2;
  byte bVar3;
  
  bVar2 = FUN_14049c78a();
  lVar1 = *(longlong *)(param_1 + 0x3db8);
  if (lVar1 != 0) {
    if (((*(uint *)(lVar1 + 8) >> 0x1e & 1) == 0) && (DAT_14cad4be8 == '\0')) {
      bVar3 = FUN_14009cd08(param_2,lVar1,param_3,*param_4);
    }
    else {
      bVar3 = 0;
    }
    bVar2 = bVar2 | bVar3;
  }
  return bVar2;
}



// FUNCTION 14049c78a FUN_14049c78a body=144 status=ok
// SIG undefined FUN_14049c78a(void)

byte FUN_14049c78a(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  longlong lVar1;
  byte bVar2;
  byte bVar3;
  
  bVar2 = FUN_1447b4afa();
  lVar1 = *(longlong *)(param_1 + 0xd60);
  if (lVar1 != 0) {
    if (((*(uint *)(lVar1 + 8) >> 0x1e & 1) == 0) && (DAT_14cad4be8 == '\0')) {
      bVar3 = FUN_14009cd08(param_2,lVar1,param_3,*param_4);
    }
    else {
      bVar3 = 0;
    }
    bVar2 = bVar2 | bVar3;
  }
  lVar1 = *(longlong *)(param_1 + 0xc30);
  if (lVar1 != 0) {
    if (((*(uint *)(lVar1 + 8) >> 0x1e & 1) == 0) && (DAT_14cad4be8 == '\0')) {
      bVar3 = FUN_14009cd08(param_2,lVar1,param_3,*param_4);
    }
    else {
      bVar3 = 0;
    }
    bVar2 = bVar2 | bVar3;
  }
  return bVar2;
}



// FUNCTION 14049c81a FUN_14049c81a body=164 status=ok
// SIG undefined FUN_14049c81a(void)

bool FUN_14049c81a(longlong param_1,int param_2)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  
  if (*(char *)(param_1 + 0x1a0) == '\x01') {
    if (*(int *)(param_1 + 0x19c) != param_2) {
      return false;
    }
    cVar2 = FUN_14049c8be(param_1);
    if (cVar2 != '\0') {
      iVar1 = *(int *)(param_1 + 0x1a8);
      if (*(char *)(param_1 + 0x1b0) != '\x01') {
        return iVar1 != *(int *)(param_1 + 0x1ac);
      }
      *(int *)(param_1 + 0x1ac) = iVar1;
      uVar3 = iVar1 + 1U & 0x7fffffff;
      uVar3 = uVar3 + (uVar3 == 0);
      *(uint *)(param_1 + 0x1a8) = uVar3;
      if (*(char *)(param_1 + 0x199) == '\x01') {
        *(undefined1 *)(param_1 + 0x199) = 0;
      }
      *(undefined1 *)(param_1 + 0x1b0) = 0;
      FUN_14049c950(param_1,param_2 == 0,uVar3 | 0x80000000);
      return true;
    }
  }
  return false;
}



// FUNCTION 14049c8be FUN_14049c8be body=146 status=ok
// SIG undefined FUN_14049c8be(void)

undefined8 FUN_14049c8be(longlong param_1)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (param_1 != 0) {
    lVar4 = 0;
    lVar3 = param_1;
    do {
      if ((*(uint *)(lVar3 + 8) & 0x30) != 0) goto LAB_14049c8e2;
      lVar3 = *(longlong *)(lVar3 + 0x20);
    } while (lVar3 != 0);
  }
  lVar4 = *(longlong *)(param_1 + 0x20);
LAB_14049c8e2:
  if (*(longlong *)(param_1 + 0x178) != 0) {
    if (lVar4 == 0) {
      return 0;
    }
    if ((*(byte *)(*(longlong *)(param_1 + 0x178) + 0x242) & 1) != 0) {
      return 0;
    }
    bVar1 = *(byte *)(lVar4 + 0x152);
    if (bVar1 != 1) {
      if (6 < bVar1) {
        return 0;
      }
      if ((0x68U >> (bVar1 & 0x1f) & 1) == 0) {
        return 0;
      }
    }
    iVar2 = FUN_14490d72a(lVar4);
    if ((iVar2 == 3) && (*(longlong *)(lVar4 + 0x38) != 0)) {
      lVar3 = *(longlong *)(*(longlong *)(lVar4 + 0x38) + 0xf0);
      return CONCAT71((int7)((ulonglong)lVar3 >> 8),*(int *)(lVar3 + 0x134) == 3);
    }
  }
  return 0;
}



// FUNCTION 14049c950 FUN_14049c950 body=395 status=ok
// SIG undefined FUN_14049c950(void)

void FUN_14049c950(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  cVar3 = FUN_14049c8be();
  if (cVar3 != '\0') {
    if (param_1 != 0) {
      lVar8 = 0;
      lVar6 = param_1;
      do {
        if ((*(uint *)(lVar6 + 8) & 0x30) != 0) goto LAB_14049c9a4;
        lVar6 = *(longlong *)(lVar6 + 0x20);
      } while (lVar6 != 0);
    }
    lVar8 = *(longlong *)(param_1 + 0x20);
LAB_14049c9a4:
    iVar4 = *(int *)(lVar8 + 0x238);
    if (0 < iVar4) {
      lVar6 = 0;
      do {
        iVar1 = *(int *)(*(longlong *)(lVar8 + 0x230) + 4 + lVar6 * 8);
        if ((((iVar1 != 0) &&
             (uVar2 = *(uint *)(*(longlong *)(lVar8 + 0x230) + lVar6 * 8), -1 < (int)uVar2)) &&
            ((int)uVar2 < DAT_14c9647dc)) &&
           (((plVar7 = (longlong *)
                       ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
             plVar7 != (longlong *)0x0 && ((int)plVar7[2] == iVar1)) &&
            (((*(uint *)(plVar7 + 1) & 0x10200000) == 0 &&
             (plVar7 = (longlong *)*plVar7, plVar7 != (longlong *)0x0)))))) {
          FUN_14049cadc(&local_80,*(undefined8 *)(param_1 + 0x178),0,param_2);
          FUN_14098f2e8(plVar7,&local_68,local_80,0);
          local_80 = local_68;
          local_58 = CONCAT44(uStack_6c,param_3);
          local_60 = local_78;
          local_70 = param_3;
          uVar5 = FUN_14477b072(plVar7,DAT_14caf9ba0);
          (**(code **)(*plVar7 + 0x248))(plVar7,uVar5,&local_68);
          iVar4 = *(int *)(lVar8 + 0x238);
        }
        lVar6 = lVar6 + 1;
      } while ((int)lVar6 < iVar4);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14049cadc FUN_14049cadc body=135 status=ok
// SIG undefined FUN_14049cadc(void)

longlong * FUN_14049cadc(longlong *param_1,longlong param_2,byte param_3,byte param_4)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong local_18;
  
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *(uint *)((longlong)param_1 + 0x14) =
       (uint)param_3 + (uint)param_4 * 2 | *(uint *)((longlong)param_1 + 0x14) & 0xfffffff8;
LAB_14049cb09:
  lVar3 = param_2;
  lVar1 = lVar3;
  if (*(longlong *)(lVar3 + 0x20) != 0) goto code_r0x00014049cb18;
  goto LAB_14049cb23;
code_r0x00014049cb18:
  param_2 = *(longlong *)(lVar3 + 0x20);
  if ((*(uint *)(lVar3 + 8) >> 0x1c & 1) != 0) {
    lVar1 = FUN_142840154(lVar3);
LAB_14049cb23:
    if (lVar1 != 0) {
      *param_1 = *(longlong *)(lVar1 + 0x18);
      local_18 = *(longlong *)(lVar1 + 0x38);
      plVar2 = &local_18;
      if (*(longlong *)(lVar1 + 0x38) == 0) {
        plVar2 = param_1;
      }
      param_1[1] = *plVar2;
      return param_1;
    }
    param_2 = *(longlong *)(lVar3 + 0x20);
  }
  goto LAB_14049cb09;
}



// FUNCTION 14049cb64 FUN_14049cb64 body=113 status=ok
// SIG undefined FUN_14049cb64(void)

undefined1 *
FUN_14049cb64(undefined8 param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  lVar1 = FUN_14049cbd6(param_4);
  if (lVar1 == 0) {
    *(undefined8 *)(param_2 + 0x30) = 0;
    *(undefined8 *)(param_2 + 0x38) = 0x100000000;
  }
  else {
    lVar1 = *(longlong *)(lVar1 + 0x178);
    *(undefined8 *)(param_2 + 0x30) = 0;
    *(undefined8 *)(param_2 + 0x38) = 0x100000000;
    if (lVar1 != 0) {
      *(undefined4 *)(param_2 + 0x38) = 1;
      *param_2 = 0;
      *(undefined4 *)(param_2 + 0x28) = 0;
      FUN_1456bb102(param_2);
    }
  }
  return param_2;
}



// FUNCTION 14049cbd6 FUN_14049cbd6 body=164 status=ok
// SIG undefined FUN_14049cbd6(void)

undefined8 FUN_14049cbd6(char *param_1)

{
  char cVar1;
  uint uVar2;
  undefined8 uVar3;
  uint *puVar4;
  
  cVar1 = *param_1;
  if ((byte)(cVar1 - 1U) < 2) {
    puVar4 = (uint *)(param_1 + 8);
    if (cVar1 == '\x01') goto LAB_14049cbe8;
    if (*(uint *)(param_1 + 0xc) == 0) {
      return 0;
    }
    uVar2 = *puVar4;
    if ((int)uVar2 < 0) {
      return 0;
    }
    if (DAT_14c9647dc <= (int)uVar2) {
      return 0;
    }
    puVar4 = (uint *)((ulonglong)((uVar2 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if (puVar4 == (uint *)0x0) {
      return 0;
    }
    if (puVar4[4] != *(uint *)(param_1 + 0xc)) {
      return 0;
    }
  }
  else {
    if (cVar1 != '\x03') {
      return 0;
    }
    if (*(uint *)(param_1 + 0x1c) == 0) {
      return 0;
    }
    uVar2 = *(uint *)(param_1 + 0x18);
    if ((int)uVar2 < 0) {
      return 0;
    }
    if (DAT_14c9647dc <= (int)uVar2) {
      return 0;
    }
    puVar4 = (uint *)((ulonglong)((uVar2 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if (puVar4 == (uint *)0x0) {
      return 0;
    }
    if (puVar4[4] != *(uint *)(param_1 + 0x1c)) {
      return 0;
    }
  }
  if ((puVar4[2] & 0x10200000) != 0) {
    return 0;
  }
LAB_14049cbe8:
  if (*(longlong **)puVar4 == (longlong *)0x0) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00014049cbf3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (**(code **)(**(longlong **)puVar4 + 0x180))();
  return uVar3;
}



// FUNCTION 14049cc7a FUN_14049cc7a body=327 status=ok
// SIG undefined FUN_14049cc7a(void)

void FUN_14049cc7a(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar1 = (longlong *)(param_1 + 0x70);
  puVar4 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar3 = puVar4 + 10;
  if (*(undefined8 **)(param_1 + 0x78) < puVar3) {
    FUN_140023dd8(plVar1,0x60);
    puVar4 = (undefined8 *)(*plVar1 + 0xfU & 0xfffffffffffffff0);
    puVar3 = puVar4 + 10;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar3;
  *puVar4 = &PTR_FUN_14a2dbd58;
  puVar4[2] = 0;
  puVar4[3] = 0;
  iVar2 = *(int *)(param_1 + 0xa0);
  *(uint *)(param_1 + 0xa0) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0xa4) < iVar2 + 1U) {
    FUN_1448cfae8(param_1 + 0x98,iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar2 * 8) = puVar4;
  *(undefined4 *)(puVar4 + 9) = 0;
  puVar4[4] = DAT_14c846330;
  *(undefined4 *)(puVar4 + 5) = DAT_14c846338;
  puVar4[6] = DAT_14c846330;
  *(undefined4 *)(puVar4 + 7) = DAT_14c846338;
  FUN_14049d05c(param_1,0,0,puVar4 + 2);
  local_38 = puVar4 + 2;
  FUN_14049cdc2();
  local_40 = DAT_14ca39f58;
  FUN_14049cf6a(param_1 + 0x1a8,plVar1,&local_38);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14049cdc2 FUN_14049cdc2 body=423 status=ok
// SIG undefined FUN_14049cdc2(void)

undefined * FUN_14049cdc2(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  wchar_t *local_70;
  undefined8 local_68;
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
              0x110) < DAT_14ca39fc0) {
    FUN_144b3d300(&DAT_14ca39fc0);
    if (DAT_14ca39fc0 == -1) {
      FUN_1457181a6(local_20);
      local_30 = 0;
      local_38 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_68 = 0;
      local_70 = L"RayTracingDecals";
      local_78 = L"FRayTracingDecals";
      local_50 = 0x40;
      local_58 = 0x12;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca39f40,1,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142f66b71);
      _Init_thread_footer(&DAT_14ca39fc0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14ca39f40;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14049cf6a FUN_14049cf6a body=242 status=ok
// SIG undefined FUN_14049cf6a(void)

undefined8 *
FUN_14049cf6a(longlong *param_1,ulonglong *param_2,undefined8 *param_3,undefined8 *param_4)

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
  FUN_14049cdc2();
  puVar6[3] = uVar3;
  lVar4 = DAT_14ca39f88;
  puVar6[4] = DAT_14ca39f88;
  if (lVar4 != 0) {
    LOCK();
    piVar1 = (int *)(lVar4 + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  puVar6[5] = &DAT_14ca39f40;
  puVar6[6] = 0;
  *(undefined4 *)(puVar6 + 7) = 0xffffffff;
  *(undefined1 *)((longlong)puVar6 + 0x3c) = 0;
  *puVar6 = &PTR_FUN_14a2dbd60;
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



// FUNCTION 14049d05c FUN_14049d05c body=2615 status=ok
// SIG undefined FUN_14049d05c(void)

void FUN_14049d05c(longlong param_1,uint param_2,undefined8 param_3,ulonglong *param_4)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  byte bVar4;
  int iVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  uint uVar14;
  undefined1 uVar15;
  float fVar16;
  undefined1 auStack_e8 [32];
  int *local_c8;
  longlong *local_c0;
  longlong local_b8;
  ulonglong local_b0;
  uint local_a4;
  undefined8 *local_a0;
  ulonglong local_98;
  undefined1 local_8d;
  int local_8c;
  int local_88;
  undefined4 local_84;
  int local_80;
  int iStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 uStack_70;
  undefined4 local_68;
  uint local_64;
  undefined4 local_60;
  uint local_5c;
  uint local_58;
  undefined4 local_54;
  undefined2 local_50;
  undefined1 local_4e;
  undefined2 local_4d;
  undefined1 local_4b;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (param_2 == 0) {
    uStack_70 = 0;
    uVar14 = 4;
    if (DAT_14ca84e48 < 4) {
      uVar14 = DAT_14ca84e48;
    }
    local_80 = uVar14 + (uVar14 == 0);
    iStack_7c = 1;
    uStack_78 = 0x4109;
    plVar1 = (longlong *)(param_1 + 0x70);
    uVar9 = *(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0;
    uVar6 = uVar9 + 0x150;
    if (*(ulonglong *)(param_1 + 0x78) < uVar6) {
      FUN_140023dd8(plVar1,0x160);
      uVar9 = *plVar1 + 0xfU & 0xfffffffffffffff0;
      uVar6 = uVar9 + 0x150;
    }
    *(ulonglong *)(param_1 + 0x70) = uVar6;
    FUN_1456bd266(uVar9,L"PathTracer.DecalGridData",&local_80,0);
    iVar5 = *(int *)(param_1 + 400);
    *(uint *)(param_1 + 400) = iVar5 + 1U;
    if (*(uint *)(param_1 + 0x194) < iVar5 + 1U) {
      FUN_144737178(param_1 + 0x188,iVar5);
    }
    *(ulonglong *)(*(longlong *)(param_1 + 0x188) + (longlong)iVar5 * 8) = uVar9;
    *(int *)(uVar9 + 0x7c) = *(int *)(param_1 + 400) + -1;
    puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar7 = puVar11 + 8;
    if (*(undefined8 **)(param_1 + 0x78) < puVar7) {
      FUN_140023dd8(plVar1,0x48);
      puVar11 = (undefined8 *)(*plVar1 + 7U & 0xfffffffffffffff8);
      puVar7 = puVar11 + 8;
    }
    *(undefined8 **)(param_1 + 0x70) = puVar7;
    puVar11[1] = *(undefined8 *)(uVar9 + 8);
    puVar11[2] = 0;
    *(undefined1 *)(puVar11 + 3) = 2;
    *(undefined8 *)((longlong)puVar11 + 0x1c) = 0xffffffffffffffff;
    *(undefined1 *)(puVar11 + 5) = 0;
    *puVar11 = &PTR_FUN_14a1fb3e8;
    *(undefined2 *)(puVar11 + 6) = 0x1c;
    *(undefined1 *)((longlong)puVar11 + 0x32) = 0;
    puVar11[7] = uVar9;
    iVar5 = *(int *)(param_1 + 0x1a0);
    *(uint *)(param_1 + 0x1a0) = iVar5 + 1U;
    if (*(uint *)(param_1 + 0x1a4) < iVar5 + 1U) {
      FUN_1447568fc(param_1 + 0x198,iVar5);
    }
    *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar5 * 8) = puVar11;
    *(int *)((longlong)puVar11 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
    FUN_1405bfba3(param_1,puVar11,0,2);
    *(undefined8 *)((longlong)param_4 + 0x2c) = 0;
    *(undefined4 *)((longlong)param_4 + 0x34) = 0;
    uVar6 = FUN_14476842e(param_1,&DAT_14ca63b28,L"BlackDummy",2);
    *param_4 = uVar6;
    puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar7 = puVar11 + 9;
    if (*(undefined8 **)(param_1 + 0x78) < puVar7) {
      FUN_140023dd8(plVar1,0x50);
      puVar11 = (undefined8 *)(*plVar1 + 7U & 0xfffffffffffffff8);
      puVar7 = puVar11 + 9;
    }
    *(undefined8 **)(param_1 + 0x70) = puVar7;
    puVar11[1] = *(undefined8 *)(uVar9 + 8);
    puVar11[2] = 0;
    *(undefined1 *)(puVar11 + 3) = 3;
    *(undefined8 *)((longlong)puVar11 + 0x1c) = 0xffffffffffffffff;
    *puVar11 = &PTR_FUN_14a1fb168;
    *(undefined1 *)(puVar11 + 5) = 0x1c;
    *(undefined8 *)((longlong)puVar11 + 0x2c) = 0xffffffff00000000;
    puVar11[7] = 0;
    puVar11[8] = uVar9;
    iVar5 = *(int *)(param_1 + 0x1a0);
    *(uint *)(param_1 + 0x1a0) = iVar5 + 1U;
    if (*(uint *)(param_1 + 0x1a4) < iVar5 + 1U) {
      FUN_1447568fc(param_1 + 0x198,iVar5);
    }
    *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar5 * 8) = puVar11;
    *(int *)((longlong)puVar11 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
    param_4[1] = (ulonglong)puVar11;
  }
  else {
    uVar6 = (ulonglong)(*(int *)(DAT_14ca39f08 + 4) + -1 + (uint)(*(int *)(DAT_14ca39f08 + 4) == 0))
            * 2 + 1;
    lVar3 = 0x3f;
    if (uVar6 != 0) {
      for (; uVar6 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    bVar4 = (byte)lVar3;
    uVar10 = 1 << (bVar4 & 0x1f);
    local_98 = (ulonglong)uVar10;
    uVar14 = *(uint *)(DAT_14ca39f20 + 4);
    if ((int)param_2 < (int)*(uint *)(DAT_14ca39f20 + 4)) {
      uVar14 = param_2;
    }
    if (0xff < (int)uVar14) {
      uVar14 = 0x100;
    }
    if ((int)uVar14 < 2) {
      uVar14 = 1;
    }
    *(uint *)((longlong)param_4 + 0x2c) = uVar10;
    *(uint *)(param_4 + 6) = uVar14;
    uVar8 = *(uint *)(DAT_14ca39f38 + 4);
    *(uint *)((longlong)param_4 + 0x34) = uVar8;
    if (2 < uVar8) {
      fVar16 = *(float *)((longlong)param_4 + 0x24) - *(float *)((longlong)param_4 + 0x14);
      iVar5 = 0;
      if (fVar16 <= *(float *)(param_4 + 4) - *(float *)(param_4 + 2) ||
          *(float *)(param_4 + 5) - *(float *)(param_4 + 3) <=
          *(float *)(param_4 + 4) - *(float *)(param_4 + 2)) {
        iVar5 = (*(float *)(param_4 + 5) - *(float *)(param_4 + 3) <= fVar16) + 1;
      }
      *(int *)((longlong)param_4 + 0x34) = iVar5;
    }
    local_68 = DAT_14ca85098;
    uStack_78 = DAT_14ca85088;
    uStack_74 = DAT_14ca8508c;
    uStack_70 = CONCAT44(DAT_14ca85094,DAT_14ca85090);
    local_64 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
    local_4e = 0;
    local_80 = 0x20008;
    iStack_7c = 0;
    local_4d = 0x1c;
    local_54 = 0x10001;
    local_50 = 0x101;
    local_60 = 0;
    local_4b = 0xff;
    uVar8 = DAT_14ca84e40;
    if ((int)uVar10 < (int)DAT_14ca84e40) {
      uVar8 = uVar10;
    }
    local_5c = 1;
    if (1 < (int)uVar8) {
      local_5c = uVar8;
    }
    plVar1 = (longlong *)(param_1 + 0x70);
    uVar9 = *(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8;
    uVar6 = uVar9 + 0x120;
    local_58 = local_5c;
    if (*(ulonglong *)(param_1 + 0x78) < uVar6) {
      FUN_140023dd8(plVar1,0x128);
      uVar9 = *plVar1 + 7U & 0xfffffffffffffff8;
      uVar6 = uVar9 + 0x120;
    }
    *(ulonglong *)(param_1 + 0x70) = uVar6;
    local_c0 = plVar1;
    FUN_1456bbb8c(uVar9,L"PathTracer.DecalGrid",&local_80,0);
    iVar5 = *(int *)(param_1 + 0x180);
    *(uint *)(param_1 + 0x180) = iVar5 + 1U;
    if (*(uint *)(param_1 + 0x184) < iVar5 + 1U) {
      FUN_14472c0f6(param_1 + 0x178,iVar5);
    }
    plVar1 = local_c0;
    *(ulonglong *)(*(longlong *)(param_1 + 0x178) + (longlong)iVar5 * 8) = uVar9;
    *(int *)(uVar9 + 0x9c) = *(int *)(param_1 + 0x180) + -1;
    uVar10 = 1;
    if (0x100 < param_2) {
      uVar10 = (uint)(param_2 >= 0x10001) * 2 + 2;
    }
    uVar8 = 0x39;
    if (0x100 < param_2) {
      uVar8 = (uint)(byte)((param_2 < 0x10001) * '\x04' + 0x1c);
    }
    uVar14 = (uVar14 << (bVar4 & 0x1f)) << (bVar4 & 0x1f);
    if (DAT_14ca84e48 <= uVar10) {
      uVar10 = DAT_14ca84e48;
    }
    local_80 = uVar10 + (uVar10 == 0);
    uStack_78 = 0x4109;
    if (DAT_14ca84e48 <= uVar14) {
      uVar14 = DAT_14ca84e48;
    }
    uStack_70 = 0;
    iStack_7c = uVar14 + (uVar14 == 0);
    uVar12 = *(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0;
    uVar6 = uVar12 + 0x150;
    local_b0 = uVar9;
    if (*(ulonglong *)(param_1 + 0x78) < uVar6) {
      FUN_140023dd8(local_c0,0x160);
      uVar12 = *plVar1 + 0xfU & 0xfffffffffffffff0;
      uVar6 = uVar12 + 0x150;
    }
    *(ulonglong *)(param_1 + 0x70) = uVar6;
    FUN_1456bd266(uVar12,L"PathTracer.DecalGridData",&local_80,0);
    iVar5 = *(int *)(param_1 + 400);
    *(uint *)(param_1 + 400) = iVar5 + 1U;
    if (*(uint *)(param_1 + 0x194) < iVar5 + 1U) {
      FUN_144737178(param_1 + 0x188,iVar5);
    }
    *(ulonglong *)(*(longlong *)(param_1 + 0x188) + (longlong)iVar5 * 8) = uVar12;
    *(int *)(uVar12 + 0x7c) = *(int *)(param_1 + 400) + -1;
    puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar7 = puVar11 + 0xc;
    if (*(undefined8 **)(param_1 + 0x78) < puVar7) {
      FUN_140023dd8(plVar1,0x70);
      puVar11 = (undefined8 *)(*plVar1 + 0xfU & 0xfffffffffffffff0);
      puVar7 = puVar11 + 0xc;
    }
    *(undefined8 **)(param_1 + 0x70) = puVar7;
    *puVar11 = &PTR_FUN_14a2dbd30;
    puVar11[2] = 0;
    puVar11[9] = 0;
    puVar11[10] = 0;
    iVar5 = *(int *)(param_1 + 0xa0);
    *(uint *)(param_1 + 0xa0) = iVar5 + 1U;
    if (*(uint *)(param_1 + 0xa4) < iVar5 + 1U) {
      FUN_1448cfae8(param_1 + 0x98,iVar5);
    }
    plVar1 = local_c0;
    *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar5 * 8) = puVar11;
    uVar15 = *(undefined1 *)(local_b0 + 0x94);
    puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar7 = puVar13 + 9;
    local_a4 = uVar8;
    if (*(undefined8 **)(param_1 + 0x78) < puVar7) {
      FUN_140023dd8(local_c0,0x50);
      puVar13 = (undefined8 *)(*plVar1 + 7U & 0xfffffffffffffff8);
      puVar7 = puVar13 + 9;
    }
    local_b8 = param_1 + 0x198;
    *(undefined8 **)(param_1 + 0x70) = puVar7;
    puVar13[1] = *(undefined8 *)(local_b0 + 8);
    puVar13[2] = 0;
    *(undefined1 *)(puVar13 + 3) = 0;
    *(undefined8 *)((longlong)puVar13 + 0x1c) = 0xffffffffffffffff;
    *(undefined1 *)(puVar13 + 5) = 0;
    *puVar13 = &PTR_FUN_14a1fb948;
    *(undefined1 *)(puVar13 + 6) = uVar15;
    *(undefined1 *)(puVar13 + 7) = 0;
    *(undefined4 *)((longlong)puVar13 + 0x31) = 0;
    *(undefined2 *)((longlong)puVar13 + 0x35) = 0;
    puVar13[8] = local_b0;
    iVar5 = *(int *)(param_1 + 0x1a0);
    *(uint *)(param_1 + 0x1a0) = iVar5 + 1U;
    if (*(uint *)(param_1 + 0x1a4) < iVar5 + 1U) {
      FUN_1447568fc(local_b8,iVar5);
    }
    plVar1 = local_c0;
    *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar5 * 8) = puVar13;
    *(int *)((longlong)puVar13 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
    puVar11[9] = puVar13;
    puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar7 = puVar13 + 8;
    if (*(undefined8 **)(param_1 + 0x78) < puVar7) {
      FUN_140023dd8(local_c0,0x48);
      puVar13 = (undefined8 *)(*plVar1 + 7U & 0xfffffffffffffff8);
      puVar7 = puVar13 + 8;
    }
    local_a0 = puVar11 + 2;
    *(undefined8 **)(param_1 + 0x70) = puVar7;
    puVar13[1] = *(undefined8 *)(uVar12 + 8);
    puVar13[2] = 0;
    *(undefined1 *)(puVar13 + 3) = 2;
    *(undefined8 *)((longlong)puVar13 + 0x1c) = 0xffffffffffffffff;
    *(undefined1 *)(puVar13 + 5) = 0;
    *puVar13 = &PTR_FUN_14a1fb3e8;
    uVar15 = (undefined1)local_a4;
    *(undefined1 *)(puVar13 + 6) = uVar15;
    *(undefined2 *)((longlong)puVar13 + 0x31) = 0;
    puVar13[7] = uVar12;
    iVar5 = *(int *)(param_1 + 0x1a0);
    *(uint *)(param_1 + 0x1a0) = iVar5 + 1U;
    if (*(uint *)(param_1 + 0x1a4) < iVar5 + 1U) {
      FUN_1447568fc(local_b8,iVar5);
    }
    *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar5 * 8) = puVar13;
    *(int *)((longlong)puVar13 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
    puVar11[10] = puVar13;
    puVar11[2] = param_3;
    *(int *)(puVar11 + 3) = (int)param_4[7];
    *(int *)(puVar11 + 5) = (int)param_4[3];
    puVar11[4] = param_4[2];
    puVar11[6] = param_4[4];
    *(int *)(puVar11 + 7) = (int)param_4[5];
    *(undefined4 *)((longlong)puVar11 + 0x3c) = *(undefined4 *)((longlong)param_4 + 0x2c);
    *(int *)(puVar11 + 8) = (int)param_4[6];
    *(undefined4 *)((longlong)puVar11 + 0x44) = *(undefined4 *)((longlong)param_4 + 0x34);
    uVar2 = *(undefined8 *)
             (&DAT_14ca8c1f0 +
             (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) * 8);
    FUN_145f1aae0();
    FUN_1448e935e(uVar2,&local_80,&DAT_14ca3a0d8,0);
    FUN_145f1aae0();
    iVar5 = (int)local_98 + 7;
    local_8c = (int)local_98 + 0xe;
    if (-1 < iVar5) {
      local_8c = iVar5;
    }
    local_8c = local_8c >> 3;
    local_c8 = &local_8c;
    local_84 = 1;
    local_88 = local_8c;
    FUN_1472b2a79(param_1,&local_8d,&local_80,local_a0);
    plVar1 = local_c0;
    *param_4 = local_b0;
    puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar7 = puVar11 + 9;
    if (*(undefined8 **)(param_1 + 0x78) < puVar7) {
      FUN_140023dd8(local_c0,0x50);
      puVar11 = (undefined8 *)(*plVar1 + 7U & 0xfffffffffffffff8);
      puVar7 = puVar11 + 9;
    }
    *(undefined8 **)(param_1 + 0x70) = puVar7;
    puVar11[1] = *(undefined8 *)(uVar12 + 8);
    puVar11[2] = 0;
    *(undefined1 *)(puVar11 + 3) = 3;
    *(undefined8 *)((longlong)puVar11 + 0x1c) = 0xffffffffffffffff;
    *puVar11 = &PTR_FUN_14a1fb168;
    *(undefined1 *)(puVar11 + 5) = uVar15;
    *(undefined8 *)((longlong)puVar11 + 0x2c) = 0xffffffff00000000;
    puVar11[7] = 0;
    puVar11[8] = uVar12;
    iVar5 = *(int *)(param_1 + 0x1a0);
    *(uint *)(param_1 + 0x1a0) = iVar5 + 1U;
    if (*(uint *)(param_1 + 0x1a4) < iVar5 + 1U) {
      FUN_1447568fc(local_b8,iVar5);
    }
    *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar5 * 8) = puVar11;
    *(int *)((longlong)puVar11 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
    param_4[1] = (ulonglong)puVar11;
  }
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14049da94 FUN_14049da94 body=37 status=ok
// SIG undefined FUN_14049da94(void)

undefined8 FUN_14049da94(byte param_1)

{
  undefined8 *puVar1;
  byte bVar2;
  
  bVar2 = (param_1 & 0x1f) - 1;
  if (bVar2 < 0x1e) {
    puVar1 = (undefined8 *)(&PTR_DAT_14a338688)[bVar2];
  }
  else {
    puVar1 = &DAT_14ca71620;
  }
  return *puVar1;
}



// FUNCTION 14049daba FUN_14049daba body=284 status=ok
// SIG undefined FUN_14049daba(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14049daba(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca6e328) {
    FUN_144b3d300(&DAT_14ca6e328);
    if (DAT_14ca6e328 == -1) {
      FUN_145718426();
      FUN_140db5666(&DAT_14ca6e280,2,&DAT_14ca6e218,L"TVirtualTextureVSBaseColorNormalSpecular",
                    L"/Engine/Private/VirtualTextureMaterial.usf",L"MainVS",0,1,FUN_14733f94e,
                    FUN_14733f926,FUN_141787470,&LAB_14733f922,&LAB_14712ac0c,&LAB_14712ac08,0x108,0
                   );
      _DAT_14ca6e280 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_1431200dc);
      _Init_thread_footer(&DAT_14ca6e328);
    }
  }
  return &DAT_14ca6e280;
}



// FUNCTION 14049dbd6 FUN_14049dbd6 body=284 status=ok
// SIG undefined FUN_14049dbd6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14049dbd6(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca6e450) {
    FUN_144b3d300(&DAT_14ca6e450);
    if (DAT_14ca6e450 == -1) {
      FUN_145718570();
      FUN_140db5666(&DAT_14ca6e3a8,2,&DAT_14ca6e340,L"TVirtualTexturePSBaseColorNormalSpecular",
                    L"/Engine/Private/VirtualTextureMaterial.usf",L"MainPS",3,1,FUN_14733f9f0,
                    FUN_14733f9c8,FUN_1417874ae,&LAB_14733f9c4,&LAB_14712ac0c,&LAB_14712ac08,0x108,0
                   );
      _DAT_14ca6e3a8 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_1431200e8);
      _Init_thread_footer(&DAT_14ca6e450);
    }
  }
  return &DAT_14ca6e3a8;
}



// FUNCTION 14049dcf2 FUN_14049dcf2 body=284 status=ok
// SIG undefined FUN_14049dcf2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14049dcf2(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca6e7c8) {
    FUN_144b3d300(&DAT_14ca6e7c8);
    if (DAT_14ca6e7c8 == -1) {
      FUN_1457186ba();
      FUN_140db5666(&DAT_14ca6e720,2,&DAT_14ca6e6b8,L"TVirtualTextureVSWorldHeight",
                    L"/Engine/Private/VirtualTextureMaterial.usf",L"MainVS",0,1,FUN_14733fbd6,
                    FUN_14733fbae,FUN_141787558,&LAB_14733fbaa,&LAB_14712ac0c,&LAB_14712ac08,0x108,0
                   );
      _DAT_14ca6e720 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_14312010c);
      _Init_thread_footer(&DAT_14ca6e7c8);
    }
  }
  return &DAT_14ca6e720;
}



// FUNCTION 14049de0e FUN_14049de0e body=284 status=ok
// SIG undefined FUN_14049de0e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14049de0e(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca6e8f0) {
    FUN_144b3d300(&DAT_14ca6e8f0);
    if (DAT_14ca6e8f0 == -1) {
      FUN_145718804();
      FUN_140db5666(&DAT_14ca6e848,2,&DAT_14ca6e7e0,L"TVirtualTexturePSWorldHeight",
                    L"/Engine/Private/VirtualTextureMaterial.usf",L"MainPS",3,1,FUN_14733fc78,
                    FUN_14733fc50,FUN_141787596,&LAB_14733fc4c,&LAB_14712ac0c,&LAB_14712ac08,0x108,0
                   );
      _DAT_14ca6e848 = &PTR_FUN_14a1fb500;
      atexit((_func_5014 *)&LAB_143120118);
      _Init_thread_footer(&DAT_14ca6e8f0);
    }
  }
  return &DAT_14ca6e848;
}



// FUNCTION 14049df2a FUN_14049df2a body=198 status=ok
// SIG undefined FUN_14049df2a(void)

void FUN_14049df2a(longlong *param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  bool bVar5;
  
  if (param_2 != 0) {
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
    iVar3 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar3 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar3 + 1U) {
      FUN_140d64866(param_1,iVar3);
    }
    *(ulonglong *)(*param_1 + (longlong)iVar3 * 8) = CONCAT44(iVar2,uVar1);
  }
  return;
}



// FUNCTION 14049dff8 FUN_14049dff8 body=125 status=ok
// SIG undefined FUN_14049dff8(void)

undefined8 FUN_14049dff8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [36];
  undefined8 local_24;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined4 *)(param_1 + 1) = DAT_14c948620;
  *param_1 = DAT_14c948618;
  if (((byte *)*param_2 == (byte *)0x0) || ((*(byte *)*param_2 & 3) != 1)) {
    uVar1 = 0;
  }
  else {
    FUN_14068d188(param_2,&local_24,0);
    *(undefined4 *)(param_1 + 1) = local_1c;
    *param_1 = local_24;
    uVar1 = 1;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14049e076 FUN_14049e076 body=79 status=ok
// SIG undefined FUN_14049e076(void)

void FUN_14049e076(longlong param_1,longlong param_2)

{
  if ((param_2 != 0) && (*(char *)(param_2 + 0x220) == '\0')) {
    FUN_14049e0c6(param_1,param_2,param_1 + 0x100,1);
    FUN_14049e0c6(param_1,param_2,param_1 + 0x110,0);
    return;
  }
  return;
}



// FUNCTION 14049e0c6 FUN_14049e0c6 body=1344 status=ok
// SIG undefined FUN_14049e0c6(void)

void FUN_14049e0c6(longlong param_1,longlong param_2,longlong *param_3,byte param_4)

{
  longlong *plVar1;
  undefined4 *puVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  longlong lVar6;
  ulonglong uVar7;
  char cVar8;
  int iVar9;
  uint uVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong lVar16;
  ulonglong uVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  undefined1 auStack_1b8 [32];
  undefined1 *local_198;
  undefined1 *local_190;
  undefined1 *local_188;
  undefined1 *local_180;
  byte local_169;
  ulonglong local_168;
  longlong local_160;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined1 local_138 [4];
  undefined1 local_134 [4];
  undefined1 local_130 [4];
  undefined1 local_12c [4];
  longlong local_128;
  undefined8 uStack_120;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  longlong *local_f8;
  int local_f0;
  undefined4 local_ec;
  longlong *local_e8;
  int local_e0;
  longlong local_dc [2];
  undefined1 local_c8 [64];
  longlong local_88;
  undefined4 local_80;
  undefined8 *local_78;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  uVar17 = (ulonglong)*(uint *)(param_3 + 1);
  if (param_2 != 0 && uVar17 != 0) {
    local_128 = 0;
    uStack_120 = 0;
    local_169 = param_4;
    if ((int)*(uint *)(param_3 + 1) < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar17);
    }
    FUN_14481578e(&local_128,uVar17);
    plVar1 = (longlong *)(param_1 + 0x80);
    uVar15 = 0;
    local_168 = uVar17;
    local_160 = param_2;
    do {
      lVar21 = *param_3;
      iVar9 = (**(code **)(**(longlong **)(lVar21 + 8 + uVar15 * 200) + 8))();
      if (iVar9 == 4) {
        lVar21 = lVar21 + uVar15 * 200;
        if ((*(int *)(lVar21 + 0x58) == 7) || (*(int *)(lVar21 + 0x58) == 2)) {
          local_180 = local_138;
          local_188 = local_134;
          local_190 = local_130;
          local_198 = local_12c;
          cVar8 = FUN_142a2966c(param_1,param_2,lVar21,param_1);
          if (cVar8 != '\0') {
            FUN_1407225a4(&local_e8,param_1,lVar21 + 0x78,
                          *(double *)(param_2 + 0x1f8) - (double)*(float *)(lVar21 + 0x18));
            iVar9 = (**(code **)(**(longlong **)(lVar21 + 8) + 8))();
            if (iVar9 == 4) {
              local_148 = DAT_14c8464f0;
              local_158 = (undefined4)DAT_14c8464e0;
              uStack_154 = DAT_14c8464e0._4_4_;
              uStack_150 = (undefined4)DAT_14c8464e8;
              uStack_14c = DAT_14c8464e8._4_4_;
              iVar9 = *(int *)(param_1 + 8);
              FUN_14051b394(plVar1,iVar9,0);
              if (0 < (longlong)iVar9) {
                lVar12 = 0;
                do {
                  lVar16 = *plVar1;
                  *(undefined8 *)(lVar16 + 0x10 + lVar12) = local_148;
                  puVar2 = (undefined4 *)(lVar16 + lVar12);
                  *puVar2 = local_158;
                  puVar2[1] = uStack_154;
                  puVar2[2] = uStack_150;
                  puVar2[3] = uStack_14c;
                  lVar12 = lVar12 + 0x18;
                } while ((longlong)iVar9 * 0x18 != lVar12);
              }
              local_ec = *(undefined4 *)(param_1 + 0x88);
              local_f0 = 0;
              local_f8 = plVar1;
              (**(code **)(**(longlong **)(lVar21 + 8) + 0x50))
                        (*(longlong **)(lVar21 + 8),&local_e8,&local_f8);
              param_2 = local_160;
              uVar17 = local_168;
              if (*(int *)(lVar21 + 0x58) == 7) {
                if (*(char *)(local_78 + 1) == '\0') {
                  lVar21 = (longlong)local_e0;
                  plVar13 = local_dc;
                  plVar11 = local_e8;
                }
                else {
                  plVar13 = (longlong *)local_78[2] + 1;
                  lVar21 = 0;
                  plVar11 = (longlong *)local_78[2];
                }
                lVar12 = *plVar13;
                if ((longlong)(int)lVar12 != 0) {
                  lVar21 = *plVar11 + lVar21 * 8;
                  lVar16 = 0;
                  do {
                    plVar13 = *(longlong **)
                               (*(longlong *)(param_1 + 0x30) +
                               (longlong)*(int *)(lVar21 + lVar16) * 8);
                    if ((plVar13 != (longlong *)0x0) && (1 < *(byte *)((longlong)plVar13 + 0xc))) {
                      lVar19 = (longlong)(int)plVar13[1] * 0x10;
                      cVar8 = *(char *)(*(longlong *)(*plVar13 + 0x2c0) + 0xb + lVar19);
                      if (cVar8 != '\x04') {
                        if (cVar8 != '\x01') goto LAB_14049e4e2;
                        FUN_1403f44de(*plVar13,(longlong)(int)plVar13[1],
                                      CONCAT71((int7)((ulonglong)lVar19 >> 8),4));
                      }
                      lVar19 = (longlong)local_f0 + (longlong)*(int *)(lVar21 + 4 + lVar16);
                      local_108 = *(undefined8 *)(*local_f8 + 0x10 + lVar19 * 0x18);
                      puVar2 = (undefined4 *)(*local_f8 + lVar19 * 0x18);
                      local_118 = *puVar2;
                      uStack_114 = puVar2[1];
                      uStack_110 = puVar2[2];
                      uStack_10c = puVar2[3];
                      FUN_1409339b8(plVar13,&local_118,1);
                    }
LAB_14049e4e2:
                    lVar16 = lVar16 + 8;
                    param_2 = local_160;
                    uVar17 = local_168;
                  } while ((longlong)(int)lVar12 * 8 != lVar16);
                }
              }
              else if (*(int *)(lVar21 + 0x58) == 2) {
                if (*(char *)(local_78 + 1) == '\0') {
                  lVar21 = (longlong)local_e0;
                  plVar13 = local_dc;
                  plVar11 = local_e8;
                }
                else {
                  plVar13 = (longlong *)local_78[2] + 1;
                  lVar21 = 0;
                  plVar11 = (longlong *)local_78[2];
                }
                lVar12 = *plVar13;
                if ((longlong)(int)lVar12 != 0) {
                  lVar21 = *plVar11 + lVar21 * 8;
                  lVar16 = 0;
                  do {
                    plVar13 = *(longlong **)
                               (*(longlong *)(param_1 + 0x30) +
                               (longlong)*(int *)(lVar21 + lVar16) * 8);
                    if ((plVar13 != (longlong *)0x0) && (1 < *(byte *)((longlong)plVar13 + 0xc))) {
                      lVar19 = *plVar13;
                      lVar14 = (longlong)(int)plVar13[1];
                      lVar18 = lVar14 * 0x10;
                      if (*(char *)(*(longlong *)(lVar19 + 0x2c0) + 0xd + lVar18) == '\0') {
                        cVar8 = *(char *)(*(longlong *)(lVar19 + 0x2c0) + 0xb + lVar18);
                        if (cVar8 != '\x04') {
                          if (cVar8 != '\x01') goto LAB_14049e401;
                          FUN_1403f44de(lVar19,lVar14,CONCAT71((int7)((ulonglong)lVar18 >> 8),4));
                          lVar19 = *plVar13;
                          lVar14 = (longlong)(int)plVar13[1];
                        }
                        lVar20 = (longlong)local_f0 + (longlong)*(int *)(lVar21 + 4 + lVar16);
                        lVar18 = *local_f8;
                        lVar6 = *(longlong *)(lVar19 + 0x308);
                        dVar3 = *(double *)(*(longlong *)(lVar19 + 0x3c8) + lVar14 * 8);
                        dVar4 = *(double *)(lVar18 + 0x10 + lVar20 * 0x18);
                        dVar5 = *(double *)(lVar18 + 8 + lVar20 * 0x18);
                        *(double *)(lVar6 + lVar14 * 0x18) =
                             dVar3 * *(double *)(lVar18 + lVar20 * 0x18) +
                             *(double *)(lVar6 + lVar14 * 0x18);
                        *(double *)(lVar6 + 8 + lVar14 * 0x18) =
                             dVar5 * dVar3 + *(double *)(lVar6 + 8 + lVar14 * 0x18);
                        *(double *)(lVar6 + 0x10 + lVar14 * 0x18) =
                             dVar4 * dVar3 + *(double *)(lVar6 + 0x10 + lVar14 * 0x18);
                      }
                    }
LAB_14049e401:
                    lVar16 = lVar16 + 8;
                    param_2 = local_160;
                    uVar17 = local_168;
                  } while ((longlong)(int)lVar12 * 8 != lVar16);
                }
              }
            }
            if (local_78 != (undefined8 *)0x0) {
              (**(code **)*local_78)(local_78,1);
            }
            local_80 = 0;
            if (local_88 != 0) {
              FUN_1400020a8();
            }
            FUN_1402a03ba(local_c8);
          }
          uVar7 = uStack_120;
          lVar21 = (longlong)(int)uStack_120;
          uVar10 = (int)uStack_120 + 1;
          uStack_120 = CONCAT44(uStack_120._4_4_,uVar10);
          if (uStack_120._4_4_ < uVar10) {
            FUN_1446f48e2(&local_128,uVar7 & 0xffffffff);
          }
          *(int *)(local_128 + lVar21 * 4) = (int)uVar15;
        }
      }
      uVar15 = uVar15 + 1;
    } while (uVar15 != uVar17);
    if ((local_169 & 0 < (int)uStack_120) == 1) {
      uVar17 = (uStack_120 & 0xffffffff) + 1;
      do {
        FUN_14046b56a(param_3,*(undefined4 *)(local_128 + -8 + uVar17 * 4),1);
        uVar17 = uVar17 - 1;
      } while (1 < uVar17);
    }
    if (local_128 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14049e608 FUN_14049e608 body=72 status=ok
// SIG undefined FUN_14049e608(void)

undefined8 * FUN_14049e608(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14ac4dde0;
  if (param_1[0x23] != 0) {
    FUN_1400020a8();
  }
  FUN_14049e650(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14049e650 FUN_14049e650 body=297 status=ok
// SIG undefined FUN_14049e650(void)

void FUN_14049e650(undefined8 *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_14ac38390;
  if (*(char *)((longlong)param_1 + 0xb7) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0xb7) = 0;
  }
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  plVar1 = param_1 + 0x10;
  if (*(int *)(param_1 + 0x11) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) goto LAB_14049e69c;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 0x11) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_14049e69c:
  FUN_144760e21(param_1[0xd],*(undefined4 *)(param_1 + 0xe));
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[10],*(undefined4 *)(param_1 + 0xb));
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a1b6d20;
  FUN_144760e21(param_1[4],*(undefined4 *)(param_1 + 5));
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14049e780 FUN_14049e780 body=57 status=ok
// SIG undefined FUN_14049e780(void)

void FUN_14049e780(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba95e0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba95e0 = FUN_140002ddd(FUN_1465d40a2,uVar1,L"OakDamageCauserData");
  }
  return;
}



// FUNCTION 14049e7ba FUN_14049e7ba body=634 status=ok
// SIG undefined FUN_14049e7ba(void)

void FUN_14049e7ba(longlong param_1,undefined8 param_2,longlong *param_3,undefined4 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined4 uVar6;
  char cVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_f8 [32];
  uint local_d8;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 local_c0;
  longlong local_b8;
  longlong *plStack_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  longlong local_98;
  longlong *plStack_90;
  undefined1 local_88 [24];
  longlong local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  uVar6 = param_4;
  if (*(int *)(param_1 + 0x168) != 0) {
    local_98 = 0;
    plStack_90 = (longlong *)0x0;
    local_cc = param_4;
    FUN_14009b010(&local_98,2,0);
    iVar3 = *(int *)(param_1 + 0x168);
    if ((longlong)iVar3 != 0) {
      lVar4 = *(longlong *)(param_1 + 0x160);
      lVar9 = 0;
      do {
        local_a0 = *(undefined4 *)(lVar4 + 8 + lVar9);
        local_a8 = *(undefined8 *)(lVar4 + lVar9);
        lVar8 = FUN_140bc5192(param_1,&local_a8);
        if ((lVar8 == 0) || (cVar7 = FUN_14049edd8(lVar8), cVar7 == '\0')) {
          local_a0 = DAT_14c948620;
          local_a8 = DAT_14c948618;
        }
        local_b8 = 0;
        plStack_b0 = (longlong *)0x0;
        FUN_14009b010(&local_b8,1,0);
        local_c8 = local_a8;
        local_c0 = local_a0;
        FUN_1448075d0(local_88,&local_c8);
        if (local_b8 != 0) {
          FUN_1402afb64(local_b8,local_88);
        }
        if (local_70 != 0) {
          FUN_1400020a8();
        }
        if (local_98 != 0) {
          local_d8 = local_d8 & 0xffffff00;
          FUN_140141db6(local_98,&local_b8,0,0);
        }
        plVar5 = plStack_b0;
        if (plStack_b0 != (longlong *)0x0) {
          LOCK();
          plVar1 = plStack_b0 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*plStack_b0)(plStack_b0);
            LOCK();
            piVar2 = (int *)((longlong)plVar5 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar5 + 0x10))(plVar5);
            }
          }
        }
        lVar9 = lVar9 + 0xc;
      } while ((longlong)iVar3 * 0xc != lVar9);
    }
    plStack_b0 = (longlong *)CONCAT44(plStack_b0._4_4_,DAT_14cb7d070);
    local_b8 = DAT_14cb7d068;
    FUN_1448075d0(local_88);
    if (*param_3 != 0) {
      local_d8 = local_d8 & 0xffffff00;
      FUN_14014191c(*param_3,local_88,&local_98,0);
    }
    if (local_70 != 0) {
      FUN_1400020a8();
    }
    plVar5 = plStack_90;
    uVar6 = local_cc;
    if (plStack_90 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_90 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      uVar6 = local_cc;
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_90)(plStack_90);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        uVar6 = local_cc;
        if (*piVar2 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
          uVar6 = local_cc;
        }
      }
    }
  }
  local_d8 = uVar6;
  FUN_14049ea36(param_1);
  if ((local_60 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14049ea36 FUN_14049ea36 body=826 status=ok
// SIG undefined FUN_14049ea36(void)

void FUN_14049ea36(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  char cVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined1 auStack_e8 [32];
  longlong local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  longlong *local_b0;
  undefined8 local_a8;
  longlong *plStack_a0;
  undefined8 local_98;
  longlong *plStack_90;
  undefined8 local_88;
  longlong *plStack_80;
  uint local_78 [6];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_88 = 0;
  plStack_80 = (longlong *)0x0;
  local_c0 = param_4;
  local_b8 = param_3;
  FUN_14009b010(&local_88,3,0);
  local_c8 = param_1;
  if ((longlong)*(int *)(param_1 + 0x1c8) != 0) {
    plVar9 = *(longlong **)(param_1 + 0x1c0);
    local_b0 = plVar9 + *(int *)(param_1 + 0x1c8);
    do {
      lVar4 = *plVar9;
      lVar5 = *(longlong *)(lVar4 + 0x20);
      if (lVar5 != 0) {
        local_78[0] = local_78[0] & 0xffffff00;
        local_78[1] = 0;
        local_78[2] = 0;
        local_78[3] = 0;
        FUN_144976b9c(local_78,DAT_14cb88708);
        cVar8 = FUN_1403218c0(lVar5 + 0x38,local_78);
        if (cVar8 == '\0') {
          local_98 = 0;
          plStack_90 = (longlong *)0x0;
          FUN_14009b010(&local_98,3,0);
          lVar5 = *(longlong *)(lVar4 + 0x20);
          if (lVar5 != 0) {
            local_78[0] = local_78[0] & 0xffffff00;
            local_78[1] = 0;
            local_78[2] = 0;
            local_78[3] = 0;
            FUN_144976b9c(local_78,DAT_14cb88710);
            cVar8 = FUN_1403218c0(lVar5 + 0x38,local_78);
            if (cVar8 == '\0') {
              FUN_14049fd52(*(undefined8 *)(lVar4 + 0x20),&local_98);
            }
          }
          FUN_14049fd52(*(undefined8 *)(lVar4 + 0x58),&local_98);
          FUN_14049fbdb(lVar4 + 0x38,&DAT_14cb7c8c0,&local_98);
          FUN_14049fbdb(lVar4 + 0x48,&DAT_14cb7c8d8,&local_98);
          if (0 < *(int *)(lVar4 + 0x68)) {
            local_78[0] = 0;
            local_78[1] = 0;
            local_78[2] = 0;
            local_78[3] = 0;
            FUN_14009b010(local_78,3,0);
            iVar3 = *(int *)(lVar4 + 0x68);
            if ((longlong)iVar3 != 0) {
              lVar5 = *(longlong *)(lVar4 + 0x60);
              lVar10 = 0;
              do {
                lVar6 = *(longlong *)(lVar5 + lVar10);
                local_a8 = 0;
                plStack_a0 = (longlong *)0x0;
                FUN_14009b010(&local_a8,3,0);
                FUN_14049ed72(lVar6,&local_a8,param_5);
                FUN_14049fca9(local_78,lVar6 + 0x10);
                plVar7 = plStack_a0;
                if (plStack_a0 != (longlong *)0x0) {
                  LOCK();
                  plVar1 = plStack_a0 + 1;
                  *(int *)plVar1 = (int)*plVar1 + -1;
                  UNLOCK();
                  if ((int)*plVar1 == 0) {
                    (**(code **)*plStack_a0)(plStack_a0);
                    LOCK();
                    piVar2 = (int *)((longlong)plVar7 + 0xc);
                    *piVar2 = *piVar2 + -1;
                    UNLOCK();
                    if (*piVar2 == 0) {
                      (**(code **)(*plVar7 + 0x10))(plVar7);
                    }
                  }
                }
                lVar10 = lVar10 + 8;
              } while ((longlong)iVar3 * 8 != lVar10);
            }
            FUN_14049fca9(&local_98,&DAT_14cb7d098,local_78);
            plVar7 = (longlong *)CONCAT44(local_78[3],local_78[2]);
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
          FUN_14049fca9(&local_88,lVar4 + 0x10);
          plVar7 = plStack_90;
          if (plStack_90 != (longlong *)0x0) {
            LOCK();
            plVar1 = plStack_90 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*plStack_90)(plStack_90);
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
      plVar9 = plVar9 + 1;
    } while (plVar9 != local_b0);
  }
  FUN_1404a0208(local_c8,&local_88);
  FUN_14049fca9(local_c0,local_b8,&local_88);
  plVar9 = plStack_80;
  if (plStack_80 != (longlong *)0x0) {
    LOCK();
    plVar7 = plStack_80 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*plStack_80)(plStack_80);
      LOCK();
      piVar2 = (int *)((longlong)plVar9 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14049ed72 FUN_14049ed72 body=102 status=ok
// SIG undefined FUN_14049ed72(void)

void FUN_14049ed72(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  char cVar1;
  
  if (*(longlong *)(param_1 + 0x20) != 0) {
    cVar1 = FUN_14049edd8();
    if (cVar1 == '\x02') {
      FUN_14049fbdb(param_1 + 0x48,&DAT_14cb7c8d8,param_2);
      return;
    }
    if (cVar1 == '\x01') {
      FUN_14049f098(param_1,param_2,0,param_3);
      return;
    }
  }
  return;
}



// FUNCTION 14049edd8 FUN_14049edd8 body=703 status=ok
// SIG undefined FUN_14049edd8(void)

ulonglong FUN_14049edd8(longlong param_1)

{
  undefined8 *puVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined4 local_58;
  undefined1 local_50 [4];
  undefined8 local_4c;
  undefined4 local_44;
  longlong local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  puVar1 = (undefined8 *)(param_1 + 0x10);
  if (0 < *(int *)(param_1 + 0x18)) {
    local_60 = *puVar1;
    local_58 = *(undefined4 *)(param_1 + 0x18);
    FUN_1448075d0(local_50);
    lVar3 = FUN_14060eaf6(local_50);
    if (local_38 != 0) {
      FUN_1400020a8();
    }
    if (lVar3 != 0) {
      local_60 = *puVar1;
      local_58 = *(undefined4 *)(param_1 + 0x18);
      FUN_1448075d0(local_50);
      lVar3 = FUN_14060eaf6(local_50);
      if (local_38 != 0) {
        FUN_1400020a8();
      }
      if ((*(char *)(lVar3 + 0x752) == '\x01') &&
         (plVar4 = (longlong *)CONCAT71((int7)((ulonglong)local_50 >> 8),1),
         *(char *)(lVar3 + 0x751) != '\x02')) goto LAB_14049f04d;
    }
LAB_14049f04b:
    plVar4 = (longlong *)0x0;
    goto LAB_14049f04d;
  }
  local_60 = *puVar1;
  local_58 = *(undefined4 *)(param_1 + 0x18);
  FUN_1448075d0(local_50);
  lVar3 = FUN_14060eaf6(local_50);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  plVar4 = (longlong *)0x0;
  if (lVar3 != 0) {
    local_60 = *puVar1;
    local_58 = *(undefined4 *)(param_1 + 0x18);
    FUN_1448075d0(local_50);
    plVar4 = (longlong *)FUN_14060eaf6(local_50);
    if (local_38 != 0) {
      FUN_1400020a8();
    }
    cVar2 = (**(code **)(*plVar4 + 0x28))(plVar4);
    if (cVar2 == '\0') goto LAB_14049f04b;
  }
  if ((*(int *)(param_1 + 0xa8) == 0) && (*(int *)(param_1 + 0xb8) == *(int *)(param_1 + 0xe4))) {
    lVar3 = *(longlong *)(param_1 + 0x20);
    plVar4 = (longlong *)CONCAT71((int7)((ulonglong)plVar4 >> 8),2);
    if (lVar3 == 0) goto LAB_14049f04d;
    local_50[0] = 0;
    local_4c = 0;
    local_44 = 0;
    FUN_144976b9c(local_50,0);
    cVar2 = FUN_1403218c0(lVar3 + 0x38,local_50);
    if (cVar2 != '\0') goto LAB_14049f04d;
    lVar3 = *(longlong *)(param_1 + 0x20);
    local_50[0] = 0;
    local_4c = 0;
    local_44 = 0;
    FUN_144976b9c(local_50,DAT_14cb888b0);
    cVar2 = FUN_1403218c0(lVar3 + 0x38,local_50);
    if (cVar2 != '\0') goto LAB_14049f04d;
    lVar3 = *(longlong *)(param_1 + 0x20);
    local_50[0] = 0;
    local_4c = 0;
    local_44 = 0;
    FUN_144976b9c(local_50,DAT_14cb888b8);
    cVar2 = FUN_1403218c0(lVar3 + 0x38,local_50);
    if (cVar2 != '\0') goto LAB_14049f04d;
    lVar3 = *(longlong *)(param_1 + 0x20);
    local_50[0] = 0;
    local_4c = 0;
    local_44 = 0;
    FUN_144976b9c(local_50,DAT_14cb888c0);
    cVar2 = FUN_1403218c0(lVar3 + 0x38,local_50);
    if (cVar2 != '\0') goto LAB_14049f04d;
  }
  plVar4 = (longlong *)CONCAT71((int7)((ulonglong)plVar4 >> 8),1);
LAB_14049f04d:
  if ((local_28 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return (ulonglong)plVar4 & 0xffffffff;
}



// FUNCTION 14049f098 FUN_14049f098 body=2882 status=ok
// SIG undefined FUN_14049f098(void)

void FUN_14049f098(longlong param_1,longlong *param_2,char param_3,ulonglong param_4)

{
  longlong *plVar1;
  ulonglong uVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  uint *puVar7;
  longlong *plVar8;
  int *piVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  byte *pbVar14;
  undefined4 *puVar15;
  undefined8 *puVar16;
  longlong lVar17;
  uint uVar18;
  longlong lVar19;
  ulonglong uVar20;
  int iVar21;
  undefined8 *puVar22;
  ulonglong uVar23;
  undefined1 auStack_128 [32];
  undefined1 local_108;
  longlong *local_100;
  uint local_f8;
  undefined1 local_f4 [12];
  undefined **local_e8;
  longlong *plStack_e0;
  undefined8 uStack_d8;
  longlong *local_d0;
  longlong local_c8;
  longlong *plStack_c0;
  byte *local_b8;
  longlong *plStack_b0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_90;
  uint local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  byte *local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if (0 < *(int *)(param_1 + 0x18)) {
    if (param_3 == '\x01') {
      plVar8 = (longlong *)(**(code **)(**(longlong **)(param_1 + 8) + 0xd0))();
      if (0 < (longlong)(int)plVar8[1]) {
        piVar9 = (int *)(*plVar8 + 8);
        lVar17 = 0;
        do {
          if ((piVar9[-2] == *(int *)(param_1 + 0x10)) && (*piVar9 == *(int *)(param_1 + 0x18))) {
            local_b8 = (byte *)CONCAT44(local_b8._4_4_,(int)lVar17);
            plStack_e0 = (longlong *)CONCAT44(plStack_e0._4_4_,DAT_14cb7c940);
            local_e8 = DAT_14cb7c938;
            FUN_1448075d0(&local_88);
            FUN_14884389e(param_2,&local_88,&local_b8);
            pbVar14 = local_70;
            goto LAB_14049f81b;
          }
          lVar17 = lVar17 + 1;
          piVar9 = piVar9 + 3;
        } while ((int)plVar8[1] != lVar17);
      }
    }
    else if (param_3 == '\0') {
      FUN_148843850(&local_b8,param_1 + 0x118);
      local_e8 = *(undefined ***)(param_1 + 0x10);
      plStack_e0 = (longlong *)CONCAT44(plStack_e0._4_4_,*(undefined4 *)(param_1 + 0x18));
      FUN_1448075d0(&local_88);
      lVar17 = FUN_14060eaf6(&local_88);
      if (local_70 != (byte *)0x0) {
        FUN_1400020a8();
      }
      if (lVar17 != 0) {
        FUN_1411cd32a(lVar17,&local_b8);
      }
      local_d0 = &local_c8;
      local_c8 = 0;
      plStack_c0 = (longlong *)0x0;
      local_e8 = &PTR_FUN_14b400280;
      plStack_e0 = (longlong *)0x0;
      uStack_d8 = 0;
      FUN_1488ff468(&local_b8,&local_e8,local_d0,0);
      local_90 = DAT_14cb7c910;
      local_98 = DAT_14cb7c908;
      FUN_1448075d0(&local_88);
      if (*param_2 != 0) {
        local_108 = 0;
        FUN_14014191c(*param_2,&local_88,&local_c8,0);
      }
      if (local_70 != (byte *)0x0) {
        FUN_1400020a8();
      }
      local_e8 = &PTR_FUN_14b400280;
      if (plStack_e0 != (longlong *)0x0) {
        FUN_1400020a8();
      }
      plVar8 = plStack_c0;
      if (plStack_c0 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_c0 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plStack_c0)(plStack_c0);
          LOCK();
          piVar9 = (int *)((longlong)plVar8 + 0xc);
          *piVar9 = *piVar9 + -1;
          UNLOCK();
          if (*piVar9 == 0) {
            (**(code **)(*plVar8 + 0x10))(plVar8);
          }
        }
      }
      FUN_14029e8dd(local_b8,(ulonglong)plStack_b0 & 0xffffffff);
      pbVar14 = local_b8;
LAB_14049f81b:
      if (pbVar14 != (byte *)0x0) {
        FUN_1400020a8();
      }
    }
    local_e8 = (undefined **)0x0;
    plStack_e0 = (longlong *)0x0;
    FUN_1488fc978(param_1 + 0x188,&local_e8);
    if ((local_e8 != (undefined **)0x0) && (((ulonglong)*local_e8 & 3) != 0)) {
      plStack_b0 = (longlong *)CONCAT44(plStack_b0._4_4_,DAT_14cb7c928);
      local_b8 = DAT_14cb7c920;
      FUN_1448075d0(&local_88);
      if (*param_2 != 0) {
        local_108 = 0;
        FUN_14014191c(*param_2,&local_88,&local_e8,0);
      }
      if (local_70 != (byte *)0x0) {
        FUN_1400020a8();
      }
    }
    if (0 < *(int *)(param_1 + 0x1a0)) {
      local_b8 = (byte *)0x0;
      plStack_b0 = (longlong *)0x0;
      FUN_14009b010(&local_b8,3,0);
      if ((longlong)*(int *)(param_1 + 0x1a0) != 0) {
        puVar22 = *(undefined8 **)(param_1 + 0x198);
        puVar16 = puVar22 + (longlong)*(int *)(param_1 + 0x1a0) * 2;
        do {
          local_88 = (uint)*puVar22;
          uStack_84 = (undefined4)((ulonglong)*puVar22 >> 0x20);
          FUN_1401533ba(local_f4,&local_88,1);
          FUN_1448075d0(&local_88,local_f4);
          FUN_14187f5dc(&local_b8,&local_88,puVar22 + 1);
          if (local_70 != (byte *)0x0) {
            FUN_1400020a8();
          }
          puVar22 = puVar22 + 2;
        } while (puVar22 != puVar16);
      }
      plStack_c0 = (longlong *)CONCAT44(plStack_c0._4_4_,DAT_14cb7c958);
      local_c8 = DAT_14cb7c950;
      FUN_1448075d0(&local_88);
      if (*param_2 != 0) {
        local_108 = 0;
        FUN_14014191c(*param_2,&local_88,&local_b8,0);
      }
      if (local_70 != (byte *)0x0) {
        FUN_1400020a8();
      }
      plVar8 = plStack_b0;
      if (plStack_b0 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_b0 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plStack_b0)(plStack_b0);
          LOCK();
          piVar9 = (int *)((longlong)plVar8 + 0xc);
          *piVar9 = *piVar9 + -1;
          UNLOCK();
          if (*piVar9 == 0) {
            (**(code **)(*plVar8 + 0x10))(plVar8);
          }
        }
      }
    }
    if (0 < *(int *)(param_1 + 0x1b0)) {
      local_b8 = (byte *)0x0;
      plStack_b0 = (longlong *)0x0;
      FUN_14009b010(&local_b8,2,0);
      if ((longlong)*(int *)(param_1 + 0x1b0) != 0) {
        lVar17 = *(longlong *)(param_1 + 0x1a8);
        lVar19 = (longlong)*(int *)(param_1 + 0x1b0) * 0xc;
        do {
          FUN_148843936(&local_b8,lVar17);
          lVar17 = lVar17 + 0xc;
          lVar19 = lVar19 + -0xc;
        } while (lVar19 != 0);
      }
      plStack_c0 = (longlong *)CONCAT44(plStack_c0._4_4_,DAT_14cb7c970);
      local_c8 = DAT_14cb7c968;
      FUN_1448075d0(&local_88);
      if (*param_2 != 0) {
        local_108 = 0;
        FUN_14014191c(*param_2,&local_88,&local_b8,0);
      }
      if (local_70 != (byte *)0x0) {
        FUN_1400020a8();
      }
      plVar8 = plStack_b0;
      if (plStack_b0 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_b0 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plStack_b0)(plStack_b0);
          LOCK();
          piVar9 = (int *)((longlong)plVar8 + 0xc);
          *piVar9 = *piVar9 + -1;
          UNLOCK();
          if (*piVar9 == 0) {
            (**(code **)(*plVar8 + 0x10))(plVar8);
          }
        }
      }
    }
    plVar8 = plStack_e0;
    if (plStack_e0 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_e0 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_e0)(plStack_e0);
        LOCK();
        piVar9 = (int *)((longlong)plVar8 + 0xc);
        *piVar9 = *piVar9 + -1;
        UNLOCK();
        if (*piVar9 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
      }
    }
  }
  if ((param_4 & 1) == 0) {
    if (*(int *)(param_1 + 0xa8) != 0) {
      plStack_e0 = (longlong *)CONCAT44(plStack_e0._4_4_,DAT_14cb7c988);
      local_e8 = DAT_14cb7c980;
      FUN_1448075d0(&local_88);
      pbVar14 = (byte *)*param_2;
      if ((pbVar14 != (byte *)0x0) && ((~*pbVar14 & 3) == 0)) {
        lVar17 = *(longlong *)(pbVar14 + 8);
        plStack_e0 = &local_c8;
        local_c8 = CONCAT44(local_c8._4_4_,1);
        local_e8 = (undefined **)&local_88;
        FUN_14049fede(lVar17 + 0x18,&local_b8,&local_e8,0);
        lVar17 = *(longlong *)(*(longlong *)(lVar17 + 0x18) + 0x28 + (longlong)(int)local_b8 * 0x40)
        ;
        if (lVar17 != 0) {
          FUN_1406114f4(lVar17,*(undefined4 *)(param_1 + 0xa8));
        }
      }
      if (local_70 != (byte *)0x0) {
        FUN_1400020a8();
      }
    }
    if (*(int *)(param_1 + 0xe4) < *(int *)(param_1 + 0xb8)) {
      lVar17 = *(longlong *)(param_1 + 0x20);
      local_88 = local_88 & 0xffffff00;
      uStack_84 = 0;
      uStack_80 = 0;
      uStack_7c = 0;
      FUN_144976b9c(&local_88,DAT_14cb888c0);
      cVar5 = FUN_1403218c0(lVar17 + 0x38,&local_88);
      if (cVar5 != '\0') {
        local_b8 = (byte *)0x0;
        plStack_b0 = (longlong *)0x0;
        uVar20 = 0;
        FUN_14009b010(&local_b8,3,0);
        iVar3 = *(int *)(param_1 + 0xd8);
        local_100 = param_2;
        if (iVar3 == 0) {
          uVar23 = 1;
          iVar10 = 0;
          iVar21 = 0;
        }
        else {
          puVar7 = *(uint **)(param_1 + 0xd0);
          if (*(uint **)(param_1 + 0xd0) == (uint *)0x0) {
            puVar7 = (uint *)(param_1 + 0xc0);
          }
          uVar18 = *puVar7;
          if (uVar18 == 0) {
            iVar10 = iVar3 + 0x1e;
            if (-1 < iVar3 + -1) {
              iVar10 = iVar3 + -1;
            }
            uVar20 = 0;
            uVar23 = (ulonglong)(uint)(iVar10 >> 5);
            if (iVar10 >> 5 < 1) {
              uVar23 = uVar20;
            }
            iVar21 = 0;
            do {
              if (uVar23 == uVar20) goto LAB_14049f661;
              iVar21 = iVar21 + 0x20;
              uVar18 = puVar7[uVar20 + 1];
              uVar20 = uVar20 + 1;
            } while (uVar18 == 0);
          }
          else {
            uVar20 = 0;
            iVar21 = 0;
          }
          uVar23 = (ulonglong)(-uVar18 & uVar18);
          uVar2 = uVar23 * 2 + 1;
          lVar17 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar17 == 0; lVar17 = lVar17 + -1) {
            }
          }
          iVar10 = (iVar21 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
          if (iVar3 <= iVar10) {
            iVar10 = iVar3;
          }
        }
        if (iVar10 != iVar3) {
          uVar18 = 0xffffffff;
          iVar6 = iVar3;
          do {
            if (*(int *)(*(longlong *)(param_1 + 0xb0) + 4 + (longlong)iVar10 * 0x10) != 0) {
              puVar15 = (undefined4 *)(*(longlong *)(param_1 + 0xb0) + (longlong)iVar10 * 0x10);
              local_f8 = uVar18;
              FUN_140002266(&local_c8,&DAT_149e063bc,*puVar15);
              FUN_14000bbd8(&local_88,&local_c8,0);
              if ((local_b8 != (byte *)0x0) && ((~*local_b8 & 3) == 0)) {
                lVar17 = *(longlong *)(local_b8 + 8);
                local_9c = 1;
                local_e8 = (undefined **)&local_88;
                plStack_e0 = (longlong *)&local_9c;
                FUN_14049fede(lVar17 + 0x18,&local_98,&local_e8,0);
                lVar17 = *(longlong *)
                          (*(longlong *)(lVar17 + 0x18) + 0x28 + (longlong)(int)local_98 * 0x40);
                if (lVar17 != 0) {
                  FUN_1406114f4(lVar17,puVar15[1]);
                }
              }
              if (local_70 != (byte *)0x0) {
                FUN_1400020a8();
              }
              if (local_c8 != 0) {
                FUN_1400020a8();
              }
              iVar6 = *(int *)(param_1 + 0xd8);
              uVar18 = local_f8;
            }
            uVar18 = uVar18 & ~(uint)uVar23;
            puVar7 = *(uint **)(param_1 + 0xd0);
            if (*(uint **)(param_1 + 0xd0) == (uint *)0x0) {
              puVar7 = (uint *)(param_1 + 0xc0);
            }
            iVar10 = (int)uVar20;
            lVar17 = (longlong)iVar10;
            uVar11 = puVar7[lVar17] & uVar18;
            if (uVar11 == 0) {
              iVar12 = iVar6 + 0x1e;
              if (-1 < iVar6 + -1) {
                iVar12 = iVar6 + -1;
              }
              iVar12 = iVar12 >> 5;
              iVar21 = iVar21 + 0x20;
              iVar13 = iVar12;
              if (iVar12 < iVar10) {
                iVar13 = iVar10;
              }
              if (iVar10 < iVar12) {
                lVar19 = 0;
                do {
                  uVar11 = puVar7[lVar17 + lVar19 + 1];
                  if (uVar11 != 0) {
                    uVar20 = (ulonglong)(iVar10 + (int)lVar19 + 1);
                    uVar18 = 0xffffffff;
                    goto LAB_14049f633;
                  }
                  iVar21 = iVar21 + 0x20;
                  lVar19 = lVar19 + 1;
                } while (iVar13 - lVar17 != lVar19);
                uVar18 = 0xffffffff;
                iVar10 = iVar13;
              }
              uVar20 = (ulonglong)(iVar10 + 1);
              iVar10 = iVar6;
            }
            else {
LAB_14049f633:
              uVar23 = (ulonglong)(-uVar11 & uVar11);
              uVar2 = uVar23 * 2 + 1;
              lVar17 = 0x3f;
              if (uVar2 != 0) {
                for (; uVar2 >> lVar17 == 0; lVar17 = lVar17 + -1) {
                }
              }
              iVar10 = (iVar21 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
              if (iVar6 <= iVar10) {
                iVar10 = iVar6;
              }
            }
          } while (iVar10 != iVar3);
        }
LAB_14049f661:
        param_2 = local_100;
        FUN_14049fca9(local_100,&DAT_14cb7c998,&local_b8);
        plVar8 = plStack_b0;
        if (plStack_b0 != (longlong *)0x0) {
          LOCK();
          plVar1 = plStack_b0 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*plStack_b0)(plStack_b0);
            LOCK();
            piVar9 = (int *)((longlong)plVar8 + 0xc);
            *piVar9 = *piVar9 + -1;
            UNLOCK();
            if (*piVar9 == 0) {
              (**(code **)(*plVar8 + 0x10))(plVar8);
            }
          }
        }
      }
    }
  }
  lVar17 = *(longlong *)(param_1 + 0x20);
  local_88 = local_88 & 0xffffff00;
  uStack_84 = 0;
  uStack_80 = 0;
  uStack_7c = 0;
  FUN_144976b9c(&local_88,DAT_14cb88920);
  cVar5 = FUN_1403218c0(lVar17 + 0x38,&local_88);
  FUN_14049fd52(*(undefined8 *)(param_1 + 0x20),param_2);
  if (cVar5 == '\0') {
    FUN_14049fd52(*(undefined8 *)(param_1 + 0x60),param_2);
    FUN_14049fd52(*(undefined8 *)(param_1 + 0x68),param_2);
    FUN_14049fbdb(param_1 + 0x38,&DAT_14cb7c8c0,param_2);
  }
  else {
    FUN_14049fd52(*(undefined8 *)(param_1 + 0x68),param_2);
  }
  FUN_14049fbdb(param_1 + 0x48,&DAT_14cb7c8d8,param_2);
  if (0 < *(int *)(param_1 + 0x80)) {
    local_88 = 0;
    uStack_84 = 0;
    uStack_80 = 0;
    uStack_7c = 0;
    local_100 = param_2;
    FUN_14009b010(&local_88,3,0);
    iVar3 = *(int *)(param_1 + 0x80);
    if ((longlong)iVar3 != 0) {
      lVar17 = *(longlong *)(param_1 + 0x78);
      lVar19 = 0;
      do {
        lVar4 = *(longlong *)(lVar17 + lVar19);
        local_e8 = (undefined **)0x0;
        plStack_e0 = (longlong *)0x0;
        FUN_14009b010(&local_e8,3,0);
        if (cVar5 == '\0') {
          FUN_14049fd52(*(undefined8 *)(lVar4 + 0x20),&local_e8);
          FUN_14049fd52(*(undefined8 *)(lVar4 + 0x60),&local_e8);
          FUN_14049fd52(*(undefined8 *)(lVar4 + 0x68),&local_e8);
          FUN_14049fbdb(lVar4 + 0x38,&DAT_14cb7c8c0,&local_e8);
        }
        FUN_14049fbdb(lVar4 + 0x48,&DAT_14cb7c8d8,&local_e8);
        FUN_14049fca9(&local_88,lVar4 + 0x10);
        plVar8 = plStack_e0;
        if (plStack_e0 != (longlong *)0x0) {
          LOCK();
          plVar1 = plStack_e0 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*plStack_e0)(plStack_e0);
            LOCK();
            piVar9 = (int *)((longlong)plVar8 + 0xc);
            *piVar9 = *piVar9 + -1;
            UNLOCK();
            if (*piVar9 == 0) {
              (**(code **)(*plVar8 + 0x10))(plVar8);
            }
          }
        }
        lVar19 = lVar19 + 8;
      } while ((longlong)iVar3 * 8 != lVar19);
    }
    FUN_14049fca9(local_100,&DAT_14cb7c8a8,&local_88);
    plVar8 = (longlong *)CONCAT44(uStack_7c,uStack_80);
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar8 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar9 = (int *)((longlong)plVar8 + 0xc);
        *piVar9 = *piVar9 + -1;
        UNLOCK();
        if (*piVar9 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14049fbdb FUN_14049fbdb body=205 status=ok
// SIG undefined FUN_14049fbdb(void)

void FUN_14049fbdb(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *plStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = 0;
  plStack_40 = (longlong *)0x0;
  FUN_14009b010(&local_48,3,0);
  lVar4 = param_1[1];
  if ((longlong)(int)lVar4 != 0) {
    lVar3 = *param_1;
    lVar6 = 0;
    do {
      FUN_14049fd52(*(undefined8 *)(lVar3 + lVar6),&local_48);
      lVar6 = lVar6 + 8;
    } while ((longlong)(int)lVar4 * 8 != lVar6);
  }
  FUN_14049fca9(param_3,param_2,&local_48);
  plVar5 = plStack_40;
  if (plStack_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_40 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14049fca9 FUN_14049fca9 body=168 status=ok
// SIG undefined FUN_14049fca9(void)

void FUN_14049fca9(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  byte *pbVar1;
  undefined8 *puVar2;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined1 local_40 [24];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  pbVar1 = (byte *)*param_3;
  puVar2 = &DAT_14c9a1288;
  if ((pbVar1 != (byte *)0x0) && ((*pbVar1 & 2) != 0)) {
    puVar2 = (undefined8 *)(*(longlong *)(pbVar1 + 8) + 0x18);
  }
  if (*(int *)((longlong)puVar2 + 0x3c) < *(int *)(puVar2 + 2)) {
    local_50 = *param_2;
    local_48 = *(undefined4 *)(param_2 + 1);
    FUN_1448075d0(local_40,&local_50);
    if (*param_1 != 0) {
      local_58 = 0;
      FUN_14014191c(*param_1,local_40,param_3,0);
    }
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14049fd52 FUN_14049fd52 body=394 status=ok
// SIG undefined FUN_14049fd52(void)

void FUN_14049fd52(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  byte *pbVar2;
  char cVar3;
  ulonglong uVar4;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  undefined4 local_78;
  undefined1 local_74 [8];
  undefined4 local_6c;
  uint *local_68;
  undefined4 *local_60;
  int local_54;
  uint local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  longlong local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1 != 0) {
    lVar1 = param_1 + 0x38;
    FUN_1403a0728(lVar1,&local_68);
    if (local_68 != (uint *)0x0) {
      uVar4 = DAT_14cb7c8f4;
      if ((DAT_14cb7c8f4 == DAT_14c948034) &&
         (uVar4 = DAT_14c948034, DAT_14cb7c8f0 != DAT_14c948030)) {
        FUN_14011791e(&local_50,DAT_14cb7c8f0,DAT_14cb7c8f4 >> 0x20);
        uVar4 = CONCAT44(uStack_4c,local_50);
        DAT_14cb7c8f4 = uVar4;
      }
      local_50 = local_50 & 0xffffff00;
      uStack_4c = 0;
      uStack_48 = 0;
      local_44 = 0;
      FUN_144976b9c(&local_50,uVar4);
      cVar3 = FUN_1403218c0(lVar1,&local_50);
      if (cVar3 == '\0') {
        FUN_1403a0728(lVar1,local_74);
        local_80 = *(undefined8 *)(param_1 + 0x20);
        local_78 = *(undefined4 *)(param_1 + 0x28);
        FUN_1448075d0(&local_50);
        pbVar2 = (byte *)*param_2;
        if ((pbVar2 != (byte *)0x0) && ((~*pbVar2 & 3) == 0)) {
          lVar1 = *(longlong *)(pbVar2 + 8);
          local_60 = &local_6c;
          local_6c = 1;
          local_68 = &local_50;
          FUN_14049fede(lVar1 + 0x18,&local_54,&local_68,0);
          lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0x18) + 0x28 + (longlong)local_54 * 0x40);
          if (lVar1 != 0) {
            FUN_1401269d0(lVar1,local_74);
          }
        }
        if (local_38 != 0) {
          FUN_1400020a8();
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14049fede FUN_14049fede body=531 status=ok
// SIG undefined FUN_14049fede(void)

uint * FUN_14049fede(longlong *param_1,uint *param_2,undefined8 *param_3,char *param_4)

{
  longlong *plVar1;
  int *piVar2;
  uint *puVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  longlong *plVar19;
  uint uVar20;
  ulonglong uVar21;
  int iVar22;
  uint uVar23;
  char cVar24;
  undefined1 auStack_88 [40];
  longlong *local_60;
  uint local_58 [2];
  uint *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1449c02b2(param_1,local_58);
  puVar5 = (undefined4 *)param_3[1];
  FUN_1447a97f4(local_50,*param_3);
  uVar4 = *puVar5;
  local_50[10] = 0;
  local_50[0xb] = 0;
  local_50[0xc] = 0;
  local_50[0xd] = 0;
  FUN_14009b010(local_50 + 10,uVar4,0);
  local_50[0xe] = 0xffffffff;
  uVar20 = *local_50;
  if (1 < (uint)((int)param_1[2] - *(int *)((longlong)param_1 + 0x3c))) {
    plVar19 = param_1 + 8;
    if ((longlong *)param_1[9] != (longlong *)0x0) {
      plVar19 = (longlong *)param_1[9];
    }
    uVar23 = *(uint *)((longlong)plVar19 + (ulonglong)((int)param_1[10] - 1U & uVar20) * 4);
    if (uVar23 != 0xffffffff) {
      do {
        puVar3 = (uint *)(*param_1 + (longlong)(int)uVar23 * 0x40);
        if (*(uint *)(*param_1 + (longlong)(int)uVar23 * 0x40) == uVar20) {
          plVar19 = *(longlong **)(puVar3 + 0xc);
          if (plVar19 != (longlong *)0x0) {
            LOCK();
            plVar1 = plVar19 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              local_60 = plVar19;
              (**(code **)*plVar19)(plVar19);
              LOCK();
              piVar2 = (int *)((longlong)local_60 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*local_60 + 0x10))();
              }
            }
          }
          if (*(longlong *)(puVar3 + 6) != 0) {
            FUN_1400020a8();
          }
          uVar18 = *local_50;
          uVar7 = local_50[1];
          uVar8 = local_50[2];
          uVar9 = local_50[3];
          uVar10 = local_50[4];
          uVar11 = local_50[5];
          uVar12 = local_50[6];
          uVar13 = local_50[7];
          uVar14 = local_50[8];
          uVar15 = local_50[9];
          uVar16 = local_50[10];
          uVar17 = local_50[0xb];
          *(undefined8 *)(puVar3 + 0xc) = *(undefined8 *)(local_50 + 0xc);
          puVar3[8] = uVar14;
          puVar3[9] = uVar15;
          puVar3[10] = uVar16;
          puVar3[0xb] = uVar17;
          puVar3[4] = uVar10;
          puVar3[5] = uVar11;
          puVar3[6] = uVar12;
          puVar3[7] = uVar13;
          *puVar3 = uVar18;
          puVar3[1] = uVar7;
          puVar3[2] = uVar8;
          puVar3[3] = uVar9;
          FUN_140458984(param_1,local_58[0],1);
          cVar24 = '\x01';
          goto LAB_14049ffb2;
        }
        uVar23 = puVar3[0xe];
      } while (uVar23 != 0xffffffff);
    }
  }
  cVar24 = '\0';
  uVar23 = local_58[0];
LAB_14049ffb2:
  if (param_4 != (char *)0x0) {
    *param_4 = cVar24;
  }
  if (cVar24 == '\0') {
    uVar18 = (int)param_1[2] - *(int *)((longlong)param_1 + 0x3c);
    iVar22 = 1;
    if (3 < uVar18) {
      uVar21 = (ulonglong)(uVar18 & 0xfffffffe) + 0xf;
      lVar6 = 0x3f;
      if (uVar21 != 0) {
        for (; uVar21 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar22 = 1 << ((byte)lVar6 & 0x1f);
    }
    if (((int)uVar18 < 1) || (iVar22 <= (int)param_1[10])) {
      uVar20 = (int)param_1[10] - 1U & uVar20;
      local_50[0xf] = uVar20;
      plVar19 = (longlong *)param_1[9];
      if ((longlong *)param_1[9] == (longlong *)0x0) {
        plVar19 = param_1 + 8;
      }
      local_50[0xe] =
           *(uint *)((longlong)plVar19 +
                    ((longlong)(int)param_1[10] - 1U & (longlong)(int)uVar20) * 4);
      plVar19 = (longlong *)param_1[9];
      if ((longlong *)param_1[9] == (longlong *)0x0) {
        plVar19 = param_1 + 8;
      }
      *(uint *)((longlong)plVar19 + ((longlong)(int)param_1[10] - 1U & (longlong)(int)uVar20) * 4) =
           uVar23;
    }
    else {
      *(int *)(param_1 + 10) = iVar22;
      FUN_1446eb800(param_1);
    }
  }
  *param_2 = uVar23;
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1404a00f2 FUN_1404a00f2 body=276 status=ok
// SIG undefined FUN_1404a00f2(void)

void FUN_1404a00f2(longlong *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  longlong lVar5;
  int iVar6;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 2);
  if ((int)uVar1 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)((longlong)param_1 + 0x14) == 0) {
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
      uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,0);
    }
  }
  uVar3 = 0x7fffffff;
  if ((int)uVar1 <= (int)(uVar4 >> 6)) {
    uVar3 = uVar4 >> 6 & 0xffffffff;
  }
  iVar6 = (int)uVar3;
  *(int *)((longlong)param_1 + 0x14) = iVar6;
  if ((*param_1 != 0) || (iVar6 != 0)) {
    if (iVar6 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afa99(0x20,(longlong)iVar6,0x40);
    }
    lVar5 = FUN_1456c5272(CONCAT71((int7)(uVar3 >> 8),(char)param_1[1]),*param_1,uVar3 << 6,0);
    *param_1 = lVar5;
  }
  return;
}



// FUNCTION 1404a0208 FUN_1404a0208 body=2082 status=ok
// SIG undefined FUN_1404a0208(void)

void FUN_1404a0208(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  undefined8 *puVar5;
  byte *pbVar6;
  longlong *plVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  undefined1 auStack_178 [32];
  undefined1 local_158;
  undefined8 *local_148;
  longlong *local_140;
  undefined8 *local_138;
  undefined8 *local_130;
  undefined8 local_128;
  undefined4 local_120;
  undefined8 local_118;
  undefined4 local_110;
  undefined8 local_108;
  undefined4 local_100;
  longlong local_f8;
  undefined4 local_f0;
  longlong local_e8;
  undefined4 local_e0;
  longlong *local_d8;
  undefined8 local_d0;
  longlong local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined8 *local_b0;
  undefined8 *local_a8;
  undefined1 local_9c [4];
  undefined8 local_98;
  longlong local_90;
  undefined8 local_88;
  uint local_80;
  undefined4 uStack_7c;
  longlong *local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  plVar1 = (longlong *)(param_1 + 0x360);
  lVar2 = param_1 + 0x370;
  local_70 = (longlong *)0x100000000;
  local_60._0_4_ = 0xffffffff;
  local_60._4_4_ = 0;
  local_58 = local_58 & 0xffffffff00000000;
  iVar8 = 0;
  local_68 = lVar2;
  if (*(int *)(param_1 + 0x388) != 0) {
    FUN_1449c0562(&local_70);
    iVar8 = *(int *)(param_1 + 0x388);
  }
  local_c0._0_4_ = (uint)local_60;
  local_c0._4_4_ = local_60._4_4_;
  local_b8 = (uint)local_58;
  local_b4 = local_58._4_4_;
  local_d0 = local_70;
  local_c8 = local_68;
  local_d8 = plVar1;
  if ((local_60._4_4_ != iVar8) || (local_68 != lVar2)) {
    do {
      pbVar6 = (byte *)*param_2;
      if ((pbVar6 != (byte *)0x0) && ((~*pbVar6 & 3) == 0)) {
        local_140 = (longlong *)((longlong)local_c0._4_4_ * 0x28 + *local_d8);
        lVar3 = *(longlong *)(pbVar6 + 8);
        local_e8 = *local_140;
        local_e0 = (undefined4)local_140[1];
        FUN_1448075d0(&local_70);
        if (*(int *)(lVar3 + 0x28) != *(int *)(lVar3 + 0x54)) {
          lVar10 = lVar3 + 0x58;
          if (*(longlong *)(lVar3 + 0x60) != 0) {
            lVar10 = *(longlong *)(lVar3 + 0x60);
          }
          iVar4 = *(int *)(lVar10 + (ulonglong)(*(int *)(lVar3 + 0x68) - 1U & (uint)local_70) * 4);
          if (iVar4 != -1) {
            do {
              if (*(uint *)(*(longlong *)(lVar3 + 0x18) + (longlong)iVar4 * 0x40) == (uint)local_70)
              goto LAB_1404a09a4;
              iVar4 = *(int *)((longlong)iVar4 * 0x40 + *(longlong *)(lVar3 + 0x18) + 0x38);
            } while (iVar4 != -1);
          }
        }
        if (local_58 != 0) {
          FUN_1400020a8();
        }
        local_f8 = *local_140;
        local_f0 = (undefined4)local_140[1];
        FUN_1448075d0(&local_70);
        if (*param_2 != 0) {
          local_158 = 0;
          FUN_14014191c(*param_2,&local_70,local_140 + 2,0);
        }
LAB_1404a09a4:
        if (local_58 != 0) {
          FUN_1400020a8();
        }
      }
      local_c0._0_4_ = (uint)local_c0 & ~local_d0._4_4_;
      FUN_1449c0562(&local_d0);
    } while (((local_c0._4_4_ != iVar8) || (local_c8 != lVar2)) || (local_d8 != plVar1));
  }
  plVar1 = (longlong *)(param_1 + 0x3b0);
  lVar2 = param_1 + 0x3c0;
  local_70 = (longlong *)&DAT_100000000;
  local_60 = 0xffffffff;
  local_58 = local_58 & 0xffffffff00000000;
  iVar8 = 0;
  local_68 = lVar2;
  if (*(int *)(param_1 + 0x3d8) != 0) {
    FUN_1449c0562(&local_70);
    iVar8 = *(int *)(param_1 + 0x3d8);
  }
  local_c0 = local_60;
  lVar3 = local_c0;
  local_b8 = (uint)local_58;
  local_b4 = local_58._4_4_;
  local_d0 = local_70;
  local_c8 = local_68;
  local_c0._4_4_ = (int)((ulonglong)local_60 >> 0x20);
  iVar4 = local_c0._4_4_;
  local_d8 = plVar1;
  if ((local_c0._4_4_ != iVar8) || (local_c0 = lVar3, local_68 != lVar2)) {
    do {
      local_c0 = lVar3;
      lVar3 = *local_d8;
      lVar10 = (longlong)iVar4 * 0x68;
      lVar11 = lVar3 + lVar10 + 0x20;
      local_98 = 0x100000000;
      local_88 = 0xffffffff;
      local_80 = 0;
      local_90 = lVar11;
      if (*(int *)(lVar3 + lVar10 + 0x38) != 0) {
        FUN_1449c0562(&local_98);
      }
      local_130 = (undefined8 *)(lVar3 + lVar10);
      local_140 = (longlong *)(lVar3 + lVar10 + 0x10);
      local_58 = local_88;
      local_50 = local_80;
      local_4c = uStack_7c;
      local_68 = local_98;
      local_60 = local_90;
      uVar9 = *(uint *)(local_130 + 7);
      local_98 = CONCAT44(1 << ((byte)uVar9 & 0x1f),(int)uVar9 >> 5);
      local_88 = CONCAT44(uVar9,-1 << ((byte)uVar9 & 0x1f));
      local_80 = uVar9 & 0xffffffe0;
      local_90 = lVar11;
      local_70 = local_140;
      if (*(uint *)(local_130 + 7) != uVar9) {
        FUN_1449c0562(&local_98);
        uVar9 = local_88._4_4_;
      }
      lVar3 = local_90;
      if ((local_70 != local_140 || local_60 != local_90) || local_58._4_4_ != uVar9) {
        do {
          pbVar6 = (byte *)*param_2;
          if ((pbVar6 != (byte *)0x0) && ((~*pbVar6 & 3) == 0)) {
            local_138 = (undefined8 *)((longlong)(int)local_58._4_4_ * 0x28 + *local_70);
            lVar10 = *(longlong *)(pbVar6 + 8);
            local_108 = *local_130;
            local_100 = *(undefined4 *)(local_130 + 1);
            FUN_1448075d0(&local_98,&local_108);
            puVar5 = (undefined8 *)FUN_14884daa6(lVar10 + 0x18,local_98 & 0xffffffff,&local_98);
            if (CONCAT44(uStack_7c,local_80) != 0) {
              FUN_1400020a8();
            }
            pbVar6 = (byte *)*puVar5;
            if ((pbVar6 == (byte *)0x0) || ((~*pbVar6 & 3) != 0)) {
              FUN_14009b010(puVar5,3,0);
              pbVar6 = (byte *)*puVar5;
              puVar5 = &DAT_14c9a1288;
              if (pbVar6 != (byte *)0x0) goto LAB_1404a0614;
            }
            else {
LAB_1404a0614:
              puVar5 = &DAT_14c9a1288;
              if ((*pbVar6 & 2) != 0) {
                puVar5 = (undefined8 *)(*(longlong *)(pbVar6 + 8) + 0x18);
              }
            }
            local_a8 = (undefined8 *)CONCAT44(local_a8._4_4_,DAT_14cb7d0a0);
            local_b0 = DAT_14cb7d098;
            FUN_1448075d0(&local_98,&local_b0);
            local_148 = (undefined8 *)FUN_14884daa6(puVar5,local_98 & 0xffffffff,&local_98);
            if (CONCAT44(uStack_7c,local_80) != 0) {
              FUN_1400020a8();
            }
            puVar5 = local_148;
            pbVar6 = (byte *)*local_148;
            if ((pbVar6 == (byte *)0x0) || ((~*pbVar6 & 3) != 0)) {
              FUN_14009b010(local_148,3,0);
              pbVar6 = (byte *)*puVar5;
              plVar12 = &DAT_14c9a1288;
              if (pbVar6 != (byte *)0x0) goto LAB_1404a06c0;
            }
            else {
LAB_1404a06c0:
              plVar12 = &DAT_14c9a1288;
              if ((*pbVar6 & 2) != 0) {
                plVar12 = (longlong *)(*(longlong *)(pbVar6 + 8) + 0x18);
              }
            }
            local_118 = *local_138;
            local_110 = *(undefined4 *)(local_138 + 1);
            FUN_1448075d0(&local_98,&local_118);
            if ((int)plVar12[2] != *(int *)((longlong)plVar12 + 0x3c)) {
              plVar7 = plVar12 + 8;
              if ((longlong *)plVar12[9] != (longlong *)0x0) {
                plVar7 = (longlong *)plVar12[9];
              }
              iVar4 = *(int *)((longlong)plVar7 +
                              (ulonglong)((int)plVar12[10] - 1U & (uint)local_98) * 4);
              if (iVar4 != -1) {
                do {
                  if (*(uint *)(*plVar12 + (longlong)iVar4 * 0x40) == (uint)local_98)
                  goto LAB_1404a07a8;
                  iVar4 = *(int *)((longlong)iVar4 * 0x40 + *plVar12 + 0x38);
                } while (iVar4 != -1);
              }
            }
            if (CONCAT44(uStack_7c,local_80) != 0) {
              FUN_1400020a8();
            }
            pbVar6 = (byte *)*local_148;
            puVar5 = &DAT_14c9a1288;
            if ((pbVar6 != (byte *)0x0) && (puVar5 = &DAT_14c9a1288, (*pbVar6 & 2) != 0)) {
              puVar5 = (undefined8 *)(*(longlong *)(pbVar6 + 8) + 0x18);
            }
            local_148 = local_138 + 2;
            local_128 = *local_138;
            local_120 = *(undefined4 *)(local_138 + 1);
            FUN_1448075d0(&local_98,&local_128);
            local_b0 = &local_98;
            local_a8 = local_148;
            FUN_140744482(puVar5,local_9c,&local_b0,0);
LAB_1404a07a8:
            if (CONCAT44(uStack_7c,local_80) != 0) {
              FUN_1400020a8();
            }
          }
          local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
          FUN_1449c0562(&local_68);
        } while (local_70 != local_140 || (local_60 != lVar3 || local_58._4_4_ != uVar9));
      }
      local_c0 = CONCAT44(local_c0._4_4_,(uint)local_c0 & ~local_d0._4_4_);
      FUN_1449c0562(&local_d0);
      iVar4 = local_c0._4_4_;
      lVar3 = local_c0;
    } while (((local_c0._4_4_ != iVar8) || (local_c8 != lVar2)) || (local_d8 != plVar1));
  }
  if ((local_48 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1404a0a2c FUN_1404a0a2c body=129 status=ok
// SIG undefined FUN_1404a0a2c(void)

longlong FUN_1404a0a2c(longlong param_1,int param_2)

{
  longlong lVar1;
  int *piVar2;
  
  FUN_1404a0aad(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10));
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 != 0) {
    piVar2 = (int *)((lVar1 + -8) - (ulonglong)*(uint *)(lVar1 + -8));
    LOCK();
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      if (*(longlong *)(piVar2 + 0x10) - (longlong)piVar2 == 0x10000) {
        lVar1 = DAT_14c872d30;
        if (DAT_14c872d30 == 0) {
          lVar1 = FUN_145bdc178();
        }
        FUN_140028df4(lVar1,piVar2);
      }
      else {
        FUN_144705e74(piVar2);
      }
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1404a0aad FUN_1404a0aad body=56 status=ok
// SIG undefined FUN_1404a0aad(void)

void FUN_1404a0aad(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_140105a98(param_1 + 0x20);
    FUN_140105afc(param_1 + 0x10);
    FUN_140105b60(param_1);
    param_1 = param_1 + 0x30;
  }
  return;
}



// FUNCTION 1404a0b0a caseD_2 body=24 status=ok
// SIG undefined caseD_2(void)

void switchD_1458da17c::caseD_2(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  *param_1 = *param_2;
  lVar1 = param_2[1];
  param_1[1] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 1404a0b22 FUN_1404a0b22 body=347 status=ok
// SIG undefined FUN_1404a0b22(void)

ulonglong FUN_1404a0b22(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                       int param_5,int param_6)

{
  int iVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined1 auStack_88 [32];
  int local_68;
  int local_60;
  int local_58;
  int local_54;
  undefined4 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar3 = 4;
  if (DAT_14ca84e48 < 4) {
    uVar3 = DAT_14ca84e48;
  }
  local_58 = uVar3 + (uVar3 == 0);
  local_50 = 0x4189;
  uVar3 = param_6 * param_5;
  if (DAT_14ca84e48 <= (uint)(param_6 * param_5)) {
    uVar3 = DAT_14ca84e48;
  }
  local_48 = 0;
  local_54 = uVar3 + (uVar3 == 0);
  uVar4 = *(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0;
  uVar2 = uVar4 + 0x150;
  if (*(ulonglong *)(param_1 + 0x78) < uVar2) {
    FUN_140023dd8((longlong *)(param_1 + 0x70),0x160);
    uVar4 = *(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0;
    uVar2 = uVar4 + 0x150;
  }
  *(ulonglong *)(param_1 + 0x70) = uVar2;
  FUN_1456bd266(uVar4,param_3,&local_58,0);
  iVar1 = *(int *)(param_1 + 400);
  *(uint *)(param_1 + 400) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x194) < iVar1 + 1U) {
    FUN_144737178(param_1 + 0x188,iVar1);
  }
  *(ulonglong *)(*(longlong *)(param_1 + 0x188) + (longlong)iVar1 * 8) = uVar4;
  *(int *)(uVar4 + 0x7c) = *(int *)(param_1 + 400) + -1;
  local_60 = param_6;
  local_68 = param_5;
  FUN_1404a0c7e(param_1,param_2,uVar4,param_4);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1404a0c7e FUN_1404a0c7e body=1810 status=ok
// SIG undefined FUN_1404a0c7e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1404a0c7e(longlong param_1,int param_2,longlong param_3,undefined8 *param_4,int param_5,
                  undefined4 param_6)

{
  ulonglong *puVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined1 auStack_f8 [32];
  wchar_t *local_d8;
  wchar_t *local_d0;
  undefined4 local_c8;
  undefined4 local_c0;
  code *local_b8;
  code *local_b0;
  undefined1 *local_a8;
  undefined1 *local_a0;
  undefined1 *local_98;
  undefined1 *local_90;
  undefined4 local_88;
  undefined *local_80;
  ulonglong *local_78;
  undefined1 local_69;
  undefined8 *local_68;
  longlong lStack_60;
  undefined *local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  puVar1 = (ulonglong *)(param_1 + 0x70);
  puVar9 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar6 = puVar9 + 8;
  if (*(undefined8 **)(param_1 + 0x78) < puVar6) {
    FUN_140023dd8(puVar1,0x50);
    puVar9 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
    puVar6 = puVar9 + 8;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar6;
  *puVar9 = &PTR_FUN_14a2f0d18;
  puVar9[6] = 0;
  iVar3 = *(int *)(param_1 + 0xa0);
  *(uint *)(param_1 + 0xa0) = iVar3 + 1U;
  local_78 = puVar1;
  if (*(uint *)(param_1 + 0xa4) < iVar3 + 1U) {
    FUN_1448cfae8(param_1 + 0x98,iVar3);
  }
  puVar1 = local_78;
  *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar3 * 8) = puVar9;
  *(int *)(puVar9 + 2) = param_5;
  *(undefined4 *)((longlong)puVar9 + 0x14) = param_6;
  *(undefined4 *)(puVar9 + 5) = *(undefined4 *)(param_4 + 1);
  puVar9[4] = *param_4;
  cVar2 = *(char *)(param_3 + 0x68);
  puVar7 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar6 = puVar7 + 8;
  if (*(undefined8 **)(param_1 + 0x78) < puVar6) {
    FUN_140023dd8(local_78,0x48);
    puVar7 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar6 = puVar7 + 8;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar6;
  puVar7[1] = *(undefined8 *)(param_3 + 8);
  puVar7[2] = 0;
  *(undefined1 *)(puVar7 + 3) = 2;
  *(undefined8 *)((longlong)puVar7 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar7 + 5) = 0;
  *puVar7 = &PTR_FUN_14a1fb3e8;
  *(byte *)(puVar7 + 6) = cVar2 >> 7 & 0x1c;
  *(undefined2 *)((longlong)puVar7 + 0x31) = 0;
  puVar7[7] = param_3;
  iVar3 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar3 + 1U) {
    FUN_1447568fc(param_1 + 0x198,iVar3);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar3 * 8) = puVar7;
  *(int *)((longlong)puVar7 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
  puVar9[6] = puVar7;
  uVar4 = *(undefined8 *)
           (&DAT_14ca8c1f0 + (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)param_2 * 2) * 8);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca450f8) {
    FUN_144b3d300(&DAT_14ca450f8);
    if (DAT_14ca450f8 == -1) {
      FUN_1415a842a();
      FUN_14610c90c();
      local_80 = &DAT_14ca46b80;
      local_90 = &LAB_14712ac08;
      local_98 = &LAB_14712ac0c;
      local_a0 = &LAB_1472d9206;
      local_a8 = &LAB_1472d920a;
      local_b0 = FUN_1472d920e;
      local_b8 = FUN_1472d926e;
      local_d0 = L"ClearIndirectDispatchArgsCS";
      local_d8 = L"/Engine/Private/RendererUtils.usf";
      local_88 = 0xe0;
      local_c0 = 1;
      local_c8 = 5;
      FUN_140db5666(&DAT_14ca45050,0,&DAT_14ca44fe8,L"FClearIndirectDispatchArgsCS");
      _DAT_14ca45050 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142fd19a0);
      _Init_thread_footer(&DAT_14ca450f8);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca450f8) {
    FUN_144b3d300(&DAT_14ca450f8);
    if (DAT_14ca450f8 == -1) {
      FUN_1415a842a();
      FUN_14610c90c();
      local_80 = &DAT_14ca46b80;
      local_90 = &LAB_14712ac08;
      local_98 = &LAB_14712ac0c;
      local_a0 = &LAB_1472d9206;
      local_a8 = &LAB_1472d920a;
      local_b0 = FUN_1472d920e;
      local_b8 = FUN_1472d926e;
      local_d0 = L"ClearIndirectDispatchArgsCS";
      local_d8 = L"/Engine/Private/RendererUtils.usf";
      local_88 = 0xe0;
      local_c0 = 1;
      local_c8 = 5;
      FUN_140db5666(&DAT_14ca45050,0,&DAT_14ca44fe8,L"FClearIndirectDispatchArgsCS");
      _DAT_14ca45050 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142fd19a0);
      _Init_thread_footer(&DAT_14ca450f8);
    }
  }
  puVar9 = puVar9 + 2;
  FUN_1448e935e(uVar4,&local_68,&DAT_14ca45050,0);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca450f8) {
    FUN_144b3d300(&DAT_14ca450f8);
    if (DAT_14ca450f8 == -1) {
      FUN_1415a842a();
      FUN_14610c90c();
      local_80 = &DAT_14ca46b80;
      local_90 = &LAB_14712ac08;
      local_98 = &LAB_14712ac0c;
      local_a0 = &LAB_1472d9206;
      local_a8 = &LAB_1472d920a;
      local_b0 = FUN_1472d920e;
      local_b8 = FUN_1472d926e;
      local_d0 = L"ClearIndirectDispatchArgsCS";
      local_d8 = L"/Engine/Private/RendererUtils.usf";
      local_88 = 0xe0;
      local_c0 = 1;
      local_c8 = 5;
      FUN_140db5666(&DAT_14ca45050,0,&DAT_14ca44fe8,L"FClearIndirectDispatchArgsCS");
      _DAT_14ca45050 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142fd19a0);
      _Init_thread_footer(&DAT_14ca450f8);
    }
  }
  lVar5 = lStack_60;
  puVar6 = local_68;
  iVar3 = param_5 + 0x7e;
  if (-1 < param_5 + 0x3f) {
    iVar3 = param_5 + 0x3f;
  }
  FUN_1415a842a();
  local_68 = (undefined8 *)0x0;
  lStack_60 = 0;
  FUN_1448f70da(puVar6,&DAT_14ca46b80,puVar9,&local_68);
  FUN_140069376(param_1);
  puVar1 = local_78;
  uVar8 = 2;
  if ((((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) && (DAT_14c760ddc == 2)) &&
     ((DAT_14ca84e6a != '\0' && ((DAT_14ca84e99 & 1) == 0)))) {
    uVar8 = 4;
  }
  puVar10 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar7 = puVar10 + 0x3d;
  if (*(undefined8 **)(param_1 + 0x78) < puVar7) {
    FUN_140023dd8(local_78,0x1f0);
    puVar10 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar7 = puVar10 + 0x3d;
  }
  *local_78 = (ulonglong)puVar7;
  lStack_60 = DAT_14ca46bc8;
  if (DAT_14ca46bc8 != 0) {
    LOCK();
    *(int *)(DAT_14ca46bc8 + 8) = *(int *)(DAT_14ca46bc8 + 8) + 1;
    UNLOCK();
  }
  local_58 = &DAT_14ca46b80;
  local_d8 = (wchar_t *)CONCAT71(local_d8._1_7_,2);
  local_68 = puVar9;
  FUN_140068f1a(puVar10,&local_69,&local_68,uVar8);
  *puVar10 = &PTR_FUN_14a2f0d20;
  puVar10[0x37] = &DAT_14ca46b80;
  puVar10[0x38] = puVar9;
  puVar10[0x39] = puVar6;
  puVar10[0x3a] = lVar5;
  *(int *)(puVar10 + 0x3b) = iVar3 >> 6;
  *(undefined1 **)((longlong)puVar10 + 0x1dc) = &DAT_100000001;
  iVar3 = *(int *)(param_1 + 0x170);
  *(uint *)(param_1 + 0x170) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x174) < iVar3 + 1U) {
    FUN_14470e57a(param_1 + 0x168,iVar3);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar3 * 8) = puVar10;
  *(int *)((longlong)puVar10 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
  FUN_140069100(param_1,puVar10);
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1404a1392 FUN_1404a1392 body=98 status=ok
// SIG undefined FUN_1404a1392(void)

undefined4 * FUN_1404a1392(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_1 != param_2) {
    if (*(longlong *)(param_2 + 4) == 0) {
      uVar1 = param_2[1];
      uVar2 = param_2[2];
      uVar3 = param_2[3];
      *param_1 = *param_2;
      param_1[1] = uVar1;
      param_1[2] = uVar2;
      param_1[3] = uVar3;
    }
    if (*(longlong *)(param_1 + 4) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
    *(undefined8 *)(param_2 + 4) = 0;
    param_1[6] = param_2[6];
    param_1[7] = param_2[7];
    *(undefined8 *)(param_2 + 6) = 0x400000000;
  }
  return param_1;
}



// FUNCTION 1404a13f4 FUN_1404a13f4 body=207 status=ok
// SIG undefined FUN_1404a13f4(void)

undefined1 * FUN_1404a13f4(longlong param_1,undefined1 *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined1 *puVar4;
  longlong lVar5;
  
  *param_2 = 0;
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0x400000000;
  *(undefined8 *)(param_2 + 4) = 0;
  *(undefined8 *)(param_2 + 0xc) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0x48) = 0;
  *(undefined8 *)(param_2 + 0x50) = 0;
  iVar1 = *(int *)(param_1 + 0x108);
  if (1 < (longlong)iVar1) {
    *param_2 = 1;
    *(undefined4 *)(param_2 + 8) = *(undefined4 *)(param_1 + 0x15c);
    param_2[0x40] = *(undefined1 *)(param_1 + 0x154);
    *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(param_1 + 0x158);
    lVar3 = *(longlong *)(param_1 + 0x100);
    lVar5 = 0;
    do {
      iVar2 = *(int *)(param_2 + 0x38);
      *(uint *)(param_2 + 0x38) = iVar2 + 1U;
      if (*(uint *)(param_2 + 0x3c) < iVar2 + 1U) {
        FUN_147d0add8(param_2 + 0x20,iVar2);
      }
      puVar4 = *(undefined1 **)(param_2 + 0x30);
      if (*(undefined1 **)(param_2 + 0x30) == (undefined1 *)0x0) {
        puVar4 = param_2 + 0x20;
      }
      *(undefined4 *)(puVar4 + (longlong)iVar2 * 4) = *(undefined4 *)(lVar3 + 8 + lVar5);
      lVar5 = lVar5 + 0x28;
    } while ((longlong)iVar1 * 0x28 != lVar5);
  }
  return param_2;
}



// FUNCTION 1404a14c4 FUN_1404a14c4 body=788 status=ok
// SIG undefined FUN_1404a14c4(void)

undefined8 * FUN_1404a14c4(longlong param_1,undefined8 *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auStack_188 [32];
  double local_168;
  double dStack_160;
  double local_158;
  double dStack_150;
  undefined1 local_140 [8];
  double local_138;
  double local_128;
  double dStack_120;
  double local_118;
  double dStack_110;
  double local_108;
  double dStack_100;
  double local_f8;
  double local_e8;
  double dStack_e0;
  double local_d8;
  byte local_c8;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_188;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  uVar7 = DAT_14c8464e8._4_4_;
  uVar6 = (undefined4)DAT_14c8464e8;
  uVar5 = DAT_14c8464e0._4_4_;
  *(undefined4 *)(param_2 + 3) = (undefined4)DAT_14c8464e0;
  *(undefined4 *)((longlong)param_2 + 0x1c) = uVar5;
  *(undefined4 *)(param_2 + 4) = uVar6;
  *(undefined4 *)((longlong)param_2 + 0x24) = uVar7;
  param_2[5] = DAT_14c8464f0;
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FUN_147e49f8e(*(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x598),&local_128,
                  *(undefined4 *)(param_1 + 0x70));
    if ((local_c8 & 1) != 0) {
      dVar1 = *(double *)(param_1 + 8);
      dVar2 = *(double *)(param_1 + 0x18);
      dVar3 = *(double *)(param_1 + 0x20);
      dVar4 = *(double *)(param_1 + 0x28);
      local_168 = local_128;
      dStack_160 = dStack_120;
      local_158 = local_118;
      dStack_150 = dStack_110;
      FUN_1448052ee(&local_168,local_140);
      local_e8 = *(double *)(param_1 + 0x48) * local_e8;
      dStack_e0 = *(double *)(param_1 + 0x50) * dStack_e0;
      local_d8 = *(double *)(param_1 + 0x58) * local_d8;
      dVar8 = dStack_e0 * local_128 - dStack_120 * local_e8;
      dVar9 = local_d8 * dStack_120 - local_118 * dStack_e0;
      dVar10 = local_e8 * local_118 - local_128 * local_d8;
      dVar9 = dVar9 + dVar9;
      dVar10 = dVar10 + dVar10;
      dVar8 = dVar8 + dVar8;
      *(double *)(param_1 + 0x18) =
           (dVar8 * dStack_120 - dVar10 * local_118) + dStack_110 * dVar9 + local_e8 + local_108;
      *(double *)(param_1 + 0x20) =
           (local_118 * dVar9 - local_128 * dVar8) + dStack_110 * dVar10 + dStack_e0 + dStack_100;
      *(double *)(param_1 + 0x28) =
           dVar8 * dStack_110 + local_d8 + (dVar10 * local_128 - dVar9 * dStack_120) + local_f8;
      dVar10 = (double)FUN_144719204(SUB84((double)(float)local_138 + *(double *)(param_1 + 0x38),0)
                                    );
      dVar10 = (double)(~-(ulonglong)(dVar10 < 0.0) & (ulonglong)dVar10 |
                       (ulonglong)(dVar10 + 360.0) & -(ulonglong)(dVar10 < 0.0));
      dVar9 = (double)(~-(ulonglong)(180.0 < dVar10) & (ulonglong)dVar10 |
                      (ulonglong)(dVar10 + -360.0) & -(ulonglong)(180.0 < dVar10));
      *(double *)(param_1 + 8) = dVar9;
      dVar10 = *(double *)(param_1 + 0x28);
      dVar8 = *(double *)(param_1 + 0x20);
      param_2[3] = *(double *)(param_1 + 0x18) - dVar2;
      param_2[4] = dVar8 - dVar3;
      param_2[5] = dVar10 - dVar4;
      param_2[1] = dVar9 - dVar1;
    }
  }
  if ((local_b0 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1404a17da FUN_1404a17da body=167 status=ok
// SIG undefined FUN_1404a17da(void)

undefined8 FUN_1404a17da(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [16];
  longlong *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_3 == (longlong *)0x0) {
    local_38 = (longlong *)0x0;
    local_30 = 0;
  }
  else {
    local_30 = (**(code **)(*param_3 + 0x310))(param_3);
    local_30 = local_30 + -1;
    local_38 = param_3;
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(param_3);
    }
  }
  FUN_1404a739e(param_1 + 0x1b8,local_48);
  FUN_1404a1882(local_48,param_2);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1404a1882 FUN_1404a1882 body=169 status=ok
// SIG undefined FUN_1404a1882(void)

longlong * FUN_1404a1882(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  
  lVar3 = param_1[1];
  plVar1 = (longlong *)*param_1;
  if (plVar1 == (longlong *)0x0) {
    *param_2 = 0;
    fVar6 = 0.0;
  }
  else {
    iVar4 = (**(code **)(*plVar1 + 0x310))(plVar1);
    iVar5 = 2;
    if (2 < iVar4) {
      iVar5 = iVar4;
    }
    fVar6 = (float)(**(code **)(*plVar1 + 0x2b0))(plVar1);
    fVar6 = fVar6 / ((float)iVar5 + -1.0);
    lVar2 = *param_1;
    *param_2 = lVar2;
    if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
  }
  *(float *)(param_2 + 1) = (float)(int)lVar3 * fVar6;
  return param_2;
}



// FUNCTION 1404a192c FUN_1404a192c body=23153 status=ok
// SIG undefined FUN_1404a192c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double * FUN_1404a192c(double *param_1,double *param_2,float *param_3)

{
  int *piVar1;
  float *pfVar2;
  code *pcVar3;
  char *pcVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  longlong *plVar7;
  undefined1 auVar8 [16];
  ulonglong uVar9;
  bool bVar10;
  char cVar11;
  byte bVar12;
  uint uVar13;
  int iVar14;
  byte *pbVar15;
  double *pdVar16;
  longlong lVar17;
  double *pdVar18;
  longlong **pplVar19;
  undefined8 *puVar20;
  byte bVar21;
  ushort uVar22;
  float *pfVar23;
  double *pdVar24;
  undefined1 uVar25;
  undefined1 *puVar26;
  longlong lVar27;
  bool bVar28;
  float fVar29;
  uint uVar30;
  float fVar31;
  float fVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  undefined8 uVar40;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar41 [16];
  undefined8 extraout_XMM0_Qb_00;
  longlong *plVar42;
  double dVar43;
  undefined1 auVar44 [16];
  float fVar45;
  float fVar46;
  float fVar47;
  undefined1 auVar48 [12];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  float fVar51;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  double dVar54;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  double dVar57;
  longlong *plVar58;
  double dVar59;
  double dVar60;
  longlong *plVar61;
  undefined4 uVar62;
  undefined4 uVar63;
  double dVar64;
  double dVar65;
  double dVar66;
  float fVar67;
  double dVar68;
  undefined1 auStack_3f8 [32];
  int local_3d8;
  undefined1 local_3c8 [16];
  double local_3b8;
  double *local_3b0;
  undefined1 local_3a8 [16];
  undefined1 local_398 [16];
  undefined8 local_388;
  undefined8 uStack_380;
  double local_378;
  double local_370;
  double local_368;
  undefined8 local_360;
  double local_358;
  undefined8 local_348;
  undefined8 local_340;
  double *local_330;
  double local_328;
  double local_320;
  double *local_318;
  longlong local_310;
  double local_308;
  float *local_300;
  undefined8 local_2f8;
  double dStack_2f0;
  longlong *local_2e8;
  undefined1 local_2e0 [16];
  undefined1 local_2d0 [16];
  longlong *local_2c0;
  undefined1 local_2b8 [16];
  undefined1 local_2a8 [16];
  longlong **local_298;
  undefined8 local_290;
  byte local_288;
  undefined1 local_278 [16];
  longlong *local_268;
  double dStack_260;
  longlong *plStack_258;
  undefined1 local_250 [16];
  longlong *local_240;
  undefined1 local_238 [16];
  undefined1 local_228 [16];
  longlong **local_218;
  undefined8 local_210;
  byte local_208;
  undefined8 local_1f8;
  longlong *aplStack_1f0 [2];
  double dStack_1e0;
  longlong *plStack_1d8;
  undefined1 auStack_1d0 [16];
  longlong *plStack_1c0;
  longlong *local_1b8;
  double dStack_1b0;
  longlong *plStack_1a8;
  double dStack_1a0;
  longlong **local_198;
  undefined8 local_190;
  longlong *local_188;
  undefined4 local_180;
  undefined8 local_178 [2];
  undefined1 local_168 [16];
  longlong *local_158;
  double dStack_150;
  longlong *local_148;
  double dStack_140;
  undefined8 uStack_138;
  longlong *plStack_130;
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  ulonglong local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_3f8;
  pdVar16 = *(double **)((longlong)*param_1 + 0x18);
  pdVar18 = pdVar16;
  pdVar24 = param_2;
  for (lVar17 = 0xb; lVar17 != 0; lVar17 = lVar17 + -1) {
    *pdVar24 = *pdVar18;
    pdVar18 = pdVar18 + 1;
    pdVar24 = pdVar24 + 1;
  }
  *(undefined1 *)(param_2 + 0xc) = *(undefined1 *)(pdVar16 + 0xc);
  param_2[0xb] = pdVar16[0xb];
  dVar43 = pdVar16[0xd];
  param_2[0xd] = dVar43;
  if ((DAT_14c950c29 == 1) && (dVar43 != 0.0)) {
    FUN_1456cec3c();
  }
  cVar11 = *(char *)(pdVar16 + 0x19);
  *(char *)(param_2 + 0x19) = cVar11;
  if (cVar11 == '\x01') {
    param_2[0x12] = pdVar16[0x12];
    dVar43 = pdVar16[0xe];
    dVar34 = pdVar16[0xf];
    dVar33 = pdVar16[0x11];
    param_2[0x10] = pdVar16[0x10];
    param_2[0x11] = dVar33;
    param_2[0xe] = dVar43;
    param_2[0xf] = dVar34;
    param_2[0x17] = 0.0;
    iVar14 = *(int *)(pdVar16 + 0x18);
    pdVar18 = (double *)pdVar16[0x17];
    *(int *)(param_2 + 0x18) = iVar14;
    if ((longlong)iVar14 == 0) {
      *(undefined4 *)((longlong)param_2 + 0xc4) = 2;
    }
    else {
      pdVar24 = pdVar16 + 0x13;
      if (pdVar18 != (double *)0x0) {
        pdVar24 = pdVar18;
      }
      FUN_144891736(param_2 + 0x13,iVar14,0);
      pdVar18 = (double *)param_2[0x17];
      if ((double *)param_2[0x17] == (double *)0x0) {
        pdVar18 = param_2 + 0x13;
      }
      memcpy(pdVar18,pdVar24,(longlong)iVar14 << 4);
    }
  }
  dVar43 = pdVar16[0x1a];
  dVar34 = pdVar16[0x1b];
  dVar33 = pdVar16[0x1c];
  dVar35 = pdVar16[0x1d];
  *(undefined1 (*) [16])(param_2 + 0x1e) = *(undefined1 (*) [16])(pdVar16 + 0x1e);
  param_2[0x1c] = dVar33;
  param_2[0x1d] = dVar35;
  param_2[0x1a] = dVar43;
  param_2[0x1b] = dVar34;
  param_2[0x20] = pdVar16[0x20];
  dVar43 = pdVar16[0x21];
  param_2[0x21] = dVar43;
  if (dVar43 != 0.0) {
    LOCK();
    *(int *)((longlong)dVar43 + 8) = *(int *)((longlong)dVar43 + 8) + 1;
    UNLOCK();
  }
  *(undefined4 *)(param_2 + 0x22) = *(undefined4 *)(pdVar16 + 0x22);
  param_2[0x23] = pdVar16[0x23];
  *(undefined4 *)((longlong)param_2 + 0x4c) = 0;
  pfVar23 = param_3 + 0x28;
  fVar32 = *(float *)(*(longlong *)((longlong)*param_1 + 0x18) + 0x48);
  auVar50 = ZEXT416((uint)fVar32);
  param_3[0x28] = fVar32;
  if ((*(byte *)(param_1 + 2) < 6) && ((0x32U >> (*(byte *)(param_1 + 2) & 0x1f) & 1) != 0)) {
    param_3[0x28] = 0.0;
    auVar50 = ZEXT816(0);
    if ((1.0 <= ABS(0.0 - param_3[0x2a])) || (0.01 < ABS(param_3[0x2c]))) {
      param_3[0x29] = 0.0;
      param_3[0x2a] = 0.0;
      param_3[0x2b] = 0.0;
      param_3[0x2c] = 0.0;
    }
  }
  else if (*(char *)(param_1 + 9) == '\x01') {
    if (((param_1[8] != 0.0) && (dVar43 = param_1[3], dVar43 != 0.0)) &&
       (lVar17 = FUN_1437fa8b2(param_1[8],dVar43), lVar17 != 0)) {
      fVar32 = *(float *)(lVar17 + 0x20);
      uVar40 = FUN_144867862(*(longlong *)((longlong)*param_1 + 0x18) + 0x50,dVar43);
      auVar53._8_4_ = (int)extraout_XMM0_Qb;
      auVar53._0_8_ = uVar40;
      auVar53._12_4_ = (int)((ulonglong)extraout_XMM0_Qb >> 0x20);
      auVar50._4_12_ = auVar53._4_12_;
      auVar50._0_4_ = (float)uVar40 * fVar32;
      *pfVar23 = auVar50._0_4_;
    }
    fVar32 = auVar50._0_4_;
    if ((1.0 <= ABS(fVar32 - param_3[0x2a])) || (0.01 < ABS(param_3[0x2c]))) {
      param_3[0x29] = 0.0;
      param_3[0x2b] = fVar32;
      param_3[0x2a] = fVar32;
      param_3[0x2c] = 0.0;
    }
  }
  fVar32 = auVar50._0_4_;
  uVar62 = 0x3f800000;
  *(bool *)((longlong)param_3 + 0xe2) = 1.0 < fVar32;
  fVar29 = ABS(*(float *)((longlong)param_1[1] + 0x18));
  *(bool *)((longlong)param_3 + 0xe1) = 1e-08 < fVar29;
  if ((fVar32 <= 1.0) && (1e-08 < fVar29)) {
    cVar11 = *(char *)(*(longlong *)((longlong)*param_1 + 0x10) + 0x50);
    *(char *)(param_3 + 0x38) = cVar11;
    if (cVar11 == '\0') goto LAB_1404a1b6e;
    goto LAB_1404a28a6;
  }
  *(undefined1 *)(param_3 + 0x38) = 0;
LAB_1404a1b6e:
  dVar43 = param_1[1];
  if (*(char *)((longlong)dVar43 + 0x90) == '\x01') {
    if (fVar29 <= 1e-08) goto LAB_1404a25ea;
    if (*(char *)((longlong)dVar43 + 0x9e8) != '\x01') {
LAB_1404a27ba:
      param_3[0x2e] = 0.0;
      param_3[0x2f] = 0.0;
      param_3[0x30] = 0.0;
      param_3[0x32] = 0.0;
      param_3[0x33] = 0.0;
      param_3[0x34] = 0.0;
      param_3[0x35] = 0.0;
      *(undefined8 *)((longlong)param_3 + 0xd6) = 0;
      dVar43 = param_1[1];
      lVar17 = ((undefined8 *)*param_1)[2];
      fVar29 = *(float *)((longlong)dVar43 + 0x18) * *(float *)(lVar17 + 0x44);
      lVar17 = *(longlong *)(lVar17 + 0x48);
      uVar30 = -(uint)(param_3[0x28] < fVar29);
      fVar32 = ABS((param_3[0x28] - fVar29) /
                   (float)(~uVar30 & (*(uint *)(lVar17 + 0x50) ^ 0x80000000) |
                          *(uint *)(lVar17 + 0x4c) & uVar30));
      pcVar3 = *(code **)(**(longlong **)*param_1 + 0x18);
      if ((((pcVar3 != (code *)&LAB_14494a6dc) &&
           ((pcVar3 == (code *)&LAB_1402f53cc || (iVar14 = (*pcVar3)(), iVar14 != 1)))) &&
          (*(char *)((longlong)dVar43 + 0x90) == '\x01')) &&
         ((fVar29 < *pfVar23 &&
          (fVar31 = (float)FUN_140dcf062(*(undefined8 *)
                                          (*(longlong *)((longlong)*param_1 + 0x10) + 0x48)),
          fVar31 <= fVar32)))) {
        fVar32 = fVar31;
      }
      if ((1.0 <= ABS(fVar29 - param_3[0x2a])) || (0.01 < ABS(fVar32) == ABS(param_3[0x2c]) <= 0.01)
         ) {
        param_3[0x29] = 0.0;
        param_3[0x2b] = param_3[0x28];
        param_3[0x2a] = fVar29;
        param_3[0x2c] = fVar32;
      }
      goto LAB_1404a28a6;
    }
    if (1.0 < *(float *)((longlong)dVar43 + 0x88)) {
      lVar17 = ((undefined8 *)*param_1)[3];
      uVar63 = *(undefined4 *)(lVar17 + 0x118);
      iVar14 = (**(code **)(**(longlong **)*param_1 + 0x18))();
      if (iVar14 == 1) {
        puVar20 = (undefined8 *)*param_1;
      }
      else {
        local_3b0 = (double *)CONCAT44(local_3b0._4_4_,uVar63);
        dVar34 = (double)FUN_144719204(*(undefined8 *)(lVar17 + 0x30));
        dVar33 = (double)FUN_144719204(*(undefined8 *)(lVar17 + 0x38));
        dVar35 = sin(dVar34 * 0.017453292519943295);
        dVar36 = cos(dVar34 * 0.017453292519943295);
        dVar37 = sin(dVar33 * 0.017453292519943295);
        dVar38 = cos(dVar33 * 0.017453292519943295);
        puVar20 = (undefined8 *)*param_1;
        dVar59 = (double)(*(float *)(lVar17 + 0x48) * *(float *)((longlong)puVar20 + 0x24));
        dVar34 = *(double *)(lVar17 + 0xe0);
        dVar54 = dVar35 * dVar59 + dVar34;
        dVar33 = *(double *)(lVar17 + 0xd8);
        dVar57 = dVar37 * dVar36 * dVar59 + dVar33;
        dVar35 = *(double *)(lVar17 + 0xd0);
        dVar60 = dVar38 * dVar36 * dVar59 + dVar35;
        dVar36 = *(double *)((longlong)dVar43 + 0x30);
        dVar66 = dVar54 - dVar34;
        dVar59 = dVar57 - dVar33;
        dVar65 = dVar60 - dVar35;
        local_398._0_8_ = dVar36;
        dVar68 = (dVar36 - dVar34) * dVar66 +
                 (*(double *)((longlong)dVar43 + 0x20) - dVar35) * dVar65 +
                 (*(double *)((longlong)dVar43 + 0x28) - dVar33) * dVar59;
        dVar38 = dVar35;
        dVar39 = dVar33;
        dVar37 = dVar34;
        if ((0.0 < dVar68) &&
           (dVar64 = dVar66 * dVar66 + dVar65 * dVar65 + dVar59 * dVar59, dVar38 = dVar60,
           dVar39 = dVar57, dVar37 = dVar54, dVar68 < dVar64)) {
          dVar68 = dVar68 / dVar64;
          dVar37 = dVar34 + dVar66 * dVar68;
          dVar39 = dVar33 + dVar59 * dVar68;
          dVar38 = dVar35 + dVar65 * dVar68;
        }
        dVar38 = dVar38 - *(double *)((longlong)dVar43 + 0x20);
        dVar39 = dVar39 - *(double *)((longlong)dVar43 + 0x28);
        if ((float)((dVar37 - dVar36) * (dVar37 - dVar36) + dVar39 * dVar39 + dVar38 * dVar38) <
            local_3b0._0_4_ * local_3b0._0_4_) goto LAB_1404a25ea;
      }
      fVar32 = 1.0;
      cVar11 = *(char *)(*(longlong *)(puVar20[2] + 0x48) + 0x54);
      if ((cVar11 == '\0') || ((cVar11 == '\x01' && (*(char *)(puVar20[2] + 0x51) == '\0')))) {
        fVar29 = (float)*(double *)(lVar17 + 0x20) * 0.017453292;
        fVar29 = (float)(longlong)
                        (fVar29 * 0.15915494 +
                        *(float *)(&DAT_14a184448 + (ulonglong)(fVar29 < 0.0) * 4)) * -6.2831855 +
                 fVar29;
        if (1.5707964 < fVar29) {
          fVar32 = 3.1415927;
LAB_1404a237b:
          fVar29 = fVar32 - fVar29;
          fVar32 = -1.0;
        }
        else if (fVar29 < -1.5707964) {
          fVar32 = -3.1415927;
          goto LAB_1404a237b;
        }
        dVar34 = (*(double *)((longlong)dVar43 + 0x30) - (double)*(float *)((longlong)dVar43 + 0x6c)
                 ) - (*(double *)(lVar17 + 0xe0) - (double)*(float *)(lVar17 + 0x11c));
        dVar37 = *(double *)((longlong)dVar43 + 0x28) - *(double *)(lVar17 + 0xd8);
        dVar43 = *(double *)((longlong)dVar43 + 0x20) - *(double *)(lVar17 + 0xd0);
        iVar14 = (**(code **)(*(longlong *)*puVar20 + 0x18))();
        dVar36 = dVar43 * dVar43 + dVar37 * dVar37;
        dVar33 = dVar43;
        dVar35 = dVar37;
        if (iVar14 == 1) {
          if ((dVar36 != 1.0) || (NAN(dVar36))) {
            dVar33 = DAT_14c8464e0;
            dVar38 = DAT_14c8464f0;
            dVar35 = DAT_14c8464e8;
            if (9.99999993922529e-09 <= dVar36) {
              dVar33 = dVar43 * (1.0 / SQRT(dVar36));
              dVar38 = 0.0;
              dVar35 = dVar37 * (1.0 / SQRT(dVar36));
            }
          }
          else {
            dVar38 = (double)((ulonglong)dVar34 & -(ulonglong)(dVar34 == 0.0));
          }
        }
        else {
          dVar36 = dVar34 * dVar34 + dVar36;
          if (((dVar36 != 1.0) || (dVar38 = dVar34, NAN(dVar36))) &&
             (dVar38 = DAT_14c8464f0, dVar33 = DAT_14c8464e0, dVar35 = DAT_14c8464e8,
             9.99999993922529e-09 <= dVar36)) {
            dVar35 = 1.0 / SQRT(dVar36);
            dVar38 = dVar34 * dVar35;
            dVar33 = dVar43 * dVar35;
            dVar35 = dVar37 * dVar35;
          }
          if (0.5 <= ABS(dVar38)) goto LAB_1404a27ba;
        }
        fVar31 = fVar29 * fVar29;
        if (dVar38 * 0.0 +
            (double)(fVar32 * (((((fVar31 * -2.6051615e-07 + 2.4760495e-05) * fVar31 + -0.0013888378
                                 ) * fVar31 + 0.041666638) * fVar31 + -0.5) * fVar31 + 1.0)) *
            dVar33 + (double)((((((fVar31 * -2.3889859e-08 + 2.7525562e-06) * fVar31 +
                                 -0.00019840874) * fVar31 + 0.008333331) * fVar31 + -0.16666667) *
                               fVar31 + 1.0) * fVar29) * dVar35 <= 0.9900000095367432)
        goto LAB_1404a27ba;
      }
    }
LAB_1404a25ea:
    FUN_140229baa(pfVar23,param_1,param_3 + 0x2e,0);
    dVar43 = param_1[1];
    fVar32 = *(float *)((longlong)dVar43 + 0x68);
    fVar29 = *(float *)((longlong)dVar43 + 0x88);
    if (param_3[0x33] == 0.0) {
LAB_1404a2677:
      fVar31 = param_3[0x28];
      fVar47 = param_3[0x35];
      puVar20 = (undefined8 *)*param_1;
      lVar17 = *(longlong *)(puVar20[2] + 0x48);
      uVar30 = *(uint *)(lVar17 + 0x4c);
      uVar13 = *(uint *)(lVar17 + 0x50) ^ 0x80000000;
      fVar46 = (float)(~-(uint)(fVar31 < fVar47) & uVar13 | -(uint)(fVar31 < fVar47) & uVar30);
      fVar51 = (fVar31 - fVar47) / fVar46;
      fVar67 = ABS(fVar51);
      fVar45 = 15.0;
      if (fVar32 <= 15.0) {
        fVar45 = fVar32;
      }
      if (fVar29 < param_3[0x36] + fVar31 * fVar67 + fVar51 * fVar51 * fVar46 * 0.5 + fVar45) {
        pcVar3 = *(code **)(*(longlong *)*puVar20 + 0x18);
        if (((pcVar3 != (code *)&LAB_14494a6dc) &&
            ((pcVar3 == (code *)&LAB_1402f53cc || (iVar14 = (*pcVar3)(), iVar14 != 1)))) &&
           ((*(char *)((longlong)dVar43 + 0x90) == '\x01' &&
            ((fVar47 < *pfVar23 &&
             (fVar32 = (float)FUN_140dcf062(*(undefined8 *)
                                             (*(longlong *)((longlong)*param_1 + 0x10) + 0x48)),
             fVar32 <= fVar67)))))) {
          fVar67 = fVar32;
        }
        if ((1.0 <= ABS(fVar47 - param_3[0x2a])) ||
           (0.01 < ABS(fVar67) == ABS(param_3[0x2c]) <= 0.01)) {
          param_3[0x29] = 0.0;
          param_3[0x2b] = param_3[0x28];
          param_3[0x2a] = fVar47;
          param_3[0x2c] = fVar67;
        }
        bVar10 = fVar29 < fVar45 + param_3[0x36];
        goto LAB_1404a27ae;
      }
      fVar32 = *(float *)(puVar20[2] + 0x44);
      fVar29 = ABS((fVar31 - fVar32) /
                   (float)(~-(uint)(fVar31 < fVar32) & uVar13 | uVar30 & -(uint)(fVar31 < fVar32)));
      pcVar3 = *(code **)(*(longlong *)*puVar20 + 0x18);
      if (((pcVar3 != (code *)&LAB_14494a6dc) &&
          (((pcVar3 == (code *)&LAB_1402f53cc || (iVar14 = (*pcVar3)(), iVar14 != 1)) &&
           (*(char *)((longlong)dVar43 + 0x90) == '\x01')))) &&
         ((fVar32 < *pfVar23 &&
          (fVar31 = (float)FUN_140dcf062(*(undefined8 *)
                                          (*(longlong *)((longlong)*param_1 + 0x10) + 0x48)),
          fVar31 <= fVar29)))) {
        fVar29 = fVar31;
      }
      if ((1.0 <= ABS(fVar32 - param_3[0x2a])) || (0.01 < ABS(fVar29) == ABS(param_3[0x2c]) <= 0.01)
         ) {
        param_3[0x29] = 0.0;
        param_3[0x2b] = param_3[0x28];
        param_3[0x2a] = fVar32;
        param_3[0x2c] = fVar29;
      }
    }
    else {
      pfVar2 = param_3 + 0x32;
      fVar31 = *pfVar2;
      if ((((((int)fVar31 < 0) || (DAT_14c9647dc <= (int)fVar31)) ||
           (lVar17 = (ulonglong)(((uint)fVar31 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)((uint)fVar31 >> 0x10) * 8),
           lVar17 == 0)) ||
          ((*(float *)(lVar17 + 0x10) != param_3[0x33] ||
           ((*(uint *)(lVar17 + 8) & 0x10200000) != 0)))) || (param_3[0x36] <= fVar29 + fVar32))
      goto LAB_1404a2677;
      if (fVar29 < fVar32) {
        param_3[0x2e] = 0.0;
        param_3[0x2f] = 0.0;
        param_3[0x30] = 0.0;
        *(undefined8 *)((longlong)param_3 + 0xd6) = 0;
        pfVar2[0] = 0.0;
        pfVar2[1] = 0.0;
        param_3[0x34] = 0.0;
        param_3[0x35] = 0.0;
        *(undefined1 *)(param_3 + 0x34) = 2;
        if ((1.0 <= ABS(0.0 - param_3[0x2a])) || (bVar10 = true, 0.01 < ABS(param_3[0x2c]))) {
          param_3[0x29] = 0.0;
          param_3[0x2a] = 0.0;
          param_3[0x2b] = param_3[0x28];
          param_3[0x2c] = 0.0;
          bVar10 = true;
        }
        goto LAB_1404a27ae;
      }
      lVar17 = ((undefined8 *)*param_1)[2];
      fVar29 = *(float *)((longlong)dVar43 + 0x18) * *(float *)(lVar17 + 0x44);
      lVar17 = *(longlong *)(lVar17 + 0x48);
      uVar30 = -(uint)(*pfVar23 < fVar29);
      fVar32 = ABS((*pfVar23 - fVar29) /
                   (float)(~uVar30 & (*(uint *)(lVar17 + 0x50) ^ 0x80000000) |
                          *(uint *)(lVar17 + 0x4c) & uVar30));
      pcVar3 = *(code **)(**(longlong **)*param_1 + 0x18);
      if (((pcVar3 != (code *)&LAB_14494a6dc) &&
          (((pcVar3 == (code *)&LAB_1402f53cc || (iVar14 = (*pcVar3)(), iVar14 != 1)) &&
           (*(char *)((longlong)dVar43 + 0x90) == '\x01')))) &&
         ((fVar29 < *pfVar23 &&
          (fVar31 = (float)FUN_140dcf062(*(undefined8 *)
                                          (*(longlong *)((longlong)*param_1 + 0x10) + 0x48)),
          fVar31 <= fVar32)))) {
        fVar32 = fVar31;
      }
      if ((1.0 <= ABS(fVar29 - param_3[0x2a])) || (0.01 < ABS(fVar32) == ABS(param_3[0x2c]) <= 0.01)
         ) {
        param_3[0x29] = 0.0;
        param_3[0x2b] = param_3[0x28];
        param_3[0x2a] = fVar29;
        param_3[0x2c] = fVar32;
      }
    }
    bVar10 = false;
LAB_1404a27ae:
    *(bool *)(param_3 + 0x37) = bVar10;
  }
  else if (1e-08 < fVar29) {
    param_3[0x2e] = 0.0;
    param_3[0x2f] = 0.0;
    param_3[0x30] = 0.0;
    param_3[0x32] = 0.0;
    param_3[0x33] = 0.0;
    param_3[0x34] = 0.0;
    param_3[0x35] = 0.0;
    *(undefined8 *)((longlong)param_3 + 0xd6) = 0;
    dVar43 = param_1[1];
    lVar17 = ((undefined8 *)*param_1)[2];
    fVar29 = *(float *)((longlong)dVar43 + 0x18) * *(float *)(lVar17 + 0x44);
    lVar17 = *(longlong *)(lVar17 + 0x48);
    auVar56._0_4_ =
         ABS((fVar32 - fVar29) /
             (float)(~-(uint)(fVar32 < fVar29) & (*(uint *)(lVar17 + 0x50) ^ 0x80000000) |
                    *(uint *)(lVar17 + 0x4c) & -(uint)(fVar32 < fVar29)));
    auVar56._4_4_ = 0;
    auVar56._8_4_ = auVar50._8_4_ & 0x7fffffff;
    auVar56._12_4_ = auVar50._12_4_ & 0x7fffffff;
    pcVar3 = *(code **)(**(longlong **)*param_1 + 0x18);
    if ((pcVar3 != (code *)&LAB_14494a6dc) &&
       ((((pcVar3 == (code *)&LAB_1402f53cc || (iVar14 = (*pcVar3)(), iVar14 != 1)) &&
         (*(char *)((longlong)dVar43 + 0x90) == '\x01')) &&
        ((fVar29 < *pfVar23 &&
         (fVar32 = (float)FUN_140dcf062(*(undefined8 *)
                                         (*(longlong *)((longlong)*param_1 + 0x10) + 0x48)),
         fVar32 <= auVar56._0_4_)))))) {
      auVar56._0_4_ = fVar32;
    }
    fVar32 = auVar56._0_4_;
    if ((1.0 <= ABS(fVar29 - param_3[0x2a])) || (0.01 < ABS(fVar32) == ABS(param_3[0x2c]) <= 0.01))
    {
      param_3[0x29] = 0.0;
      param_3[0x2b] = param_3[0x28];
      param_3[0x2a] = fVar29;
LAB_1404a1de1:
      param_3[0x2c] = fVar32;
    }
  }
  else if (1.0 < fVar32) {
    if (*(char *)((longlong)param_3 + 0xdd) == '\0') {
      if (*(char *)(param_3 + 0x34) == '\0') {
        FUN_140229baa(pfVar23,param_1,param_3 + 0x2e,1);
        fVar32 = *pfVar23;
        dVar43 = param_1[1];
      }
      fVar29 = param_3[0x35];
      lVar17 = *(longlong *)(((undefined8 *)*param_1)[2] + 0x48);
      fVar32 = ABS((fVar32 - fVar29) /
                   (float)(~-(uint)(fVar32 < fVar29) & (*(uint *)(lVar17 + 0x50) ^ 0x80000000) |
                          *(uint *)(lVar17 + 0x4c) & -(uint)(fVar32 < fVar29)));
      pcVar3 = *(code **)(**(longlong **)*param_1 + 0x18);
      if (((pcVar3 != (code *)&LAB_14494a6dc) &&
          (((pcVar3 == (code *)&LAB_1402f53cc || (iVar14 = (*pcVar3)(), iVar14 != 1)) &&
           (*(char *)((longlong)dVar43 + 0x90) == '\x01')))) &&
         ((fVar29 < *pfVar23 &&
          (fVar31 = (float)FUN_140dcf062(*(undefined8 *)
                                          (*(longlong *)((longlong)*param_1 + 0x10) + 0x48)),
          fVar31 <= fVar32)))) {
        fVar32 = fVar31;
      }
      if ((1.0 <= ABS(fVar29 - param_3[0x2a])) || (0.01 < ABS(fVar32) == ABS(param_3[0x2c]) <= 0.01)
         ) {
        param_3[0x29] = 0.0;
        param_3[0x2b] = param_3[0x28];
        param_3[0x2a] = fVar29;
        param_3[0x2c] = fVar32;
        fVar29 = 0.0;
      }
      else {
        fVar29 = param_3[0x29];
        fVar32 = param_3[0x2c];
      }
      bVar10 = (bool)((-(fVar32 < 0.0001) | -(fVar32 < fVar29)) & 1);
      goto LAB_1404a27ae;
    }
    FUN_147e6a58e(pfVar23,param_1);
  }
  else {
    param_3[0x2e] = 0.0;
    param_3[0x2f] = 0.0;
    param_3[0x30] = 0.0;
    param_3[0x32] = 0.0;
    param_3[0x33] = 0.0;
    param_3[0x34] = 0.0;
    param_3[0x35] = 0.0;
    *(undefined8 *)((longlong)param_3 + 0xd6) = 0;
    lVar17 = *(longlong *)(((undefined8 *)*param_1)[2] + 0x48);
    auVar55._0_4_ =
         ABS(fVar32 / (float)(~-(uint)(fVar32 < 0.0) & (*(uint *)(lVar17 + 0x50) ^ 0x80000000) |
                             *(uint *)(lVar17 + 0x4c) & -(uint)(fVar32 < 0.0)));
    auVar55._4_4_ = 0;
    auVar55._8_4_ = auVar50._8_4_ & 0x7fffffff;
    auVar55._12_4_ = auVar50._12_4_ & 0x7fffffff;
    pcVar3 = *(code **)(**(longlong **)*param_1 + 0x18);
    if (((pcVar3 != (code *)&LAB_14494a6dc) &&
        (((dVar43 = param_1[1], pcVar3 == (code *)&LAB_1402f53cc ||
          (iVar14 = (*pcVar3)(), iVar14 != 1)) && (*(char *)((longlong)dVar43 + 0x90) == '\x01'))))
       && ((0.0 < *pfVar23 &&
           (fVar32 = (float)FUN_140dcf062(*(undefined8 *)
                                           (*(longlong *)((longlong)*param_1 + 0x10) + 0x48)),
           fVar32 <= auVar55._0_4_)))) {
      auVar55._0_4_ = fVar32;
    }
    fVar32 = auVar55._0_4_;
    if ((1.0 <= ABS(0.0 - param_3[0x2a])) || (0.01 < ABS(fVar32) == ABS(param_3[0x2c]) <= 0.01)) {
      param_3[0x29] = 0.0;
      param_3[0x2a] = 0.0;
      param_3[0x2b] = param_3[0x28];
      goto LAB_1404a1de1;
    }
  }
LAB_1404a28a6:
  pdVar16 = param_1 + 2;
  local_398._0_8_ = pdVar16;
  if (param_1[8] == 0.0) {
    param_2[0xb] = 0.0078125;
    *(undefined1 *)(param_2 + 0xc) = 1;
    param_2[0xd] = 0.0;
    if (*(char *)(param_2 + 0x19) == '\x01') {
      if (param_2[0x17] != 0.0) {
        FUN_1400020a8();
      }
      *(undefined1 *)(param_2 + 0x19) = 0;
    }
    dVar43 = *param_1;
    bVar21 = 0;
  }
  else {
    if ((*(char *)(param_3 + 0x34) == '\x01') &&
       (dVar43 = *(double *)(param_3 + 0x2e), dVar43 != 0.0)) {
      if (DAT_14c950c29 == 1) {
        FUN_1456cec3c();
        dVar43 = *(double *)(param_3 + 0x2e);
      }
      param_1[5] = dVar43;
      *(float *)(param_1 + 6) = param_3[0x30];
      *(float *)(param_1 + 7) = *(float *)(param_1 + 7) - param_3[0x36];
    }
    local_3b0 = param_2 + 0xb;
    dVar43 = *param_1;
    dVar34 = param_1[1];
    lVar17 = *(longlong *)((longlong)dVar43 + 0x18);
    dVar33 = *(double *)(*(longlong *)((longlong)dVar43 + 0x10) + 0x58);
    bVar21 = *(byte *)(param_1 + 2);
    local_2f8 = (longlong *)0x3f80000000000000;
    dStack_2f0 = (double)CONCAT71(dStack_2f0._1_7_,1);
    local_2e8 = (longlong *)0x0;
    local_288 = 0;
    local_330 = param_1;
    local_328 = dVar43;
    local_320 = dVar34;
    local_318 = pdVar16;
    local_310 = lVar17;
    local_308 = dVar33;
    local_300 = param_3;
    if (*(char *)(*(longlong *)((longlong)dVar43 + 0x10) + 1) == '\0') {
      lVar27 = *(longlong *)(*(longlong *)((longlong)dVar43 + 0x10) + 0x48);
      if (lVar27 == 0) {
        fVar32 = 100.0;
      }
      else {
        fVar32 = *(float *)(lVar27 + 0x60);
      }
      if (fVar32 < ABS(*(float *)(*(longlong *)((longlong)dVar43 + 0x18) + 0x48)))
      goto LAB_1404a2cfb;
LAB_1404a2bf2:
      FUN_1405450d6(local_308,&local_1f8,lVar17 + 0x58);
    }
    else {
      if (*(char *)((longlong)dVar43 + 0x20) == '\0') {
        if (*(int *)((longlong)dVar43 + 0x7c) == 0) {
LAB_1404a4ec5:
          uVar40 = 0;
        }
        else {
          uVar30 = *(uint *)((longlong)dVar43 + 0x78);
          uVar40 = 0;
          if ((-1 < (int)uVar30) && ((int)uVar30 < DAT_14c9647dc)) {
            puVar20 = (undefined8 *)
                      ((ulonglong)((uVar30 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar30 >> 0x10) * 8));
            if ((puVar20 == (undefined8 *)0x0) ||
               ((*(int *)(puVar20 + 2) != *(int *)((longlong)dVar43 + 0x7c) ||
                ((*(uint *)(puVar20 + 1) & 0x10200000) != 0)))) goto LAB_1404a4ec5;
            uVar40 = *puVar20;
          }
        }
        uVar30 = FUN_1449c239e(dVar33,uVar40);
        uVar13 = (uint)bVar21;
        if ((8 < uVar13) || ((0x107U >> (uVar13 & 0x1f) & 1) == 0)) {
          fVar32 = *(float *)((longlong)dVar43 + 0x24);
          local_3c8._0_8_ = (float *)(lVar17 + 0x58);
          if (*(char *)(lVar17 + 200) == '\x01') {
            if (*(float *)(lVar17 + 0x74) * *(float *)(lVar17 + 0x70) + fVar32 <=
                *(float *)(lVar17 + 0x70)) {
LAB_1404a2cbe:
              FUN_1401592de(&local_1f8,local_3c8._0_8_);
              goto LAB_1404a2d10;
            }
          }
          else if ((*(longlong **)(lVar17 + 0x68) == (longlong *)0x0) ||
                  (fVar29 = *(float *)(lVar17 + 0x58),
                  fVar31 = (float)(**(code **)(**(longlong **)(lVar17 + 0x68) + 0x2b0))(),
                  fVar32 + fVar29 < fVar31)) goto LAB_1404a2cbe;
        }
        bVar21 = (byte)uVar30;
        if ((8 < bVar21) || ((0x107U >> (uVar30 & 0x1f) & 1) == 0)) {
          if (*(int *)((longlong)dVar43 + 0x7c) == 0) {
LAB_1404a6193:
            uVar40 = 0;
          }
          else {
            uVar30 = *(uint *)((longlong)dVar43 + 0x78);
            uVar40 = 0;
            if ((-1 < (int)uVar30) && ((int)uVar30 < DAT_14c9647dc)) {
              puVar20 = (undefined8 *)
                        ((ulonglong)((uVar30 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar30 >> 0x10) * 8));
              if ((puVar20 == (undefined8 *)0x0) ||
                 ((*(int *)(puVar20 + 2) != *(int *)((longlong)dVar43 + 0x7c) ||
                  ((*(uint *)(puVar20 + 1) & 0x10200000) != 0)))) goto LAB_1404a6193;
              uVar40 = *puVar20;
            }
          }
          FUN_14022b110(dVar33,&local_1f8,uVar40);
          lVar17 = local_310;
          dVar43 = local_328;
          if ((*(longlong **)(local_310 + 0x68) == (longlong *)0x0 ||
               *(longlong **)(local_310 + 0x68) != local_1f8) ||
             (cVar11 = FUN_14382f0fd(local_310 + 0x58), cVar11 != '\0')) {
            if (bVar21 != 5) {
              if (*(int *)((longlong)local_328 + 0x7c) == 0) {
                aplStack_1f0[1] = (longlong *)0x0;
              }
              else {
                uVar30 = *(uint *)((longlong)local_328 + 0x78);
                aplStack_1f0[1] = (longlong *)0x0;
                if ((-1 < (int)uVar30) && ((int)uVar30 < DAT_14c9647dc)) {
                  puVar20 = (undefined8 *)
                            ((ulonglong)((uVar30 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar30 >> 0x10) * 8));
                  if ((puVar20 == (undefined8 *)0x0) ||
                     ((*(int *)(puVar20 + 2) != *(int *)((longlong)local_328 + 0x7c) ||
                      ((*(uint *)(puVar20 + 1) & 0x10200000) != 0)))) {
                    aplStack_1f0[1] = (longlong *)0x0;
                  }
                  else {
                    aplStack_1f0[1] = (longlong *)*puVar20;
                  }
                }
              }
              local_1f8 = (longlong *)0x3f80000000000000;
              aplStack_1f0[0] = (longlong *)((ulonglong)aplStack_1f0[0] & 0xffffffffffffff00);
              if ((aplStack_1f0[1] != (longlong *)0x0) && (DAT_14c950c29 != 0)) {
                FUN_1456cec3c();
              }
              local_188 = (longlong *)((ulonglong)local_188 & 0xffffffffffffff00);
              goto LAB_1404a2d10;
            }
            goto LAB_1404a2c61;
          }
        }
        if (uVar13 == 4) goto LAB_1404a2bf2;
        if ((uVar13 == 2) && (bVar21 != 2 && local_300[0x2a] < 1.0)) {
          lVar27 = *(longlong *)(*(longlong *)((longlong)dVar43 + 0x10) + 0x48);
          if (lVar27 == 0) {
            fVar32 = 100.0;
          }
          else {
            fVar32 = *(float *)(lVar27 + 0x60);
          }
          if (ABS(*(float *)(*(longlong *)((longlong)dVar43 + 0x18) + 0x48)) <= fVar32)
          goto LAB_1404a2bf2;
        }
        else if (bVar21 != 2 && local_300[0x2a] < 1.0) goto LAB_1404a2bf2;
LAB_1404a2cfb:
        FUN_140158f80(&local_330,&local_1f8);
        goto LAB_1404a2d10;
      }
      switch(bVar21) {
      case 0:
      case 8:
        if ((*(char *)(param_3 + 0x38) == '\0') && (*(char *)((longlong)param_3 + 0xe1) != '\0')) {
          if ((*(char *)((longlong)param_3 + 0xe2) != '\0') || (*(longlong *)(lVar17 + 0x68) != 0))
          goto LAB_1404a2cfb;
LAB_1404a6762:
          FUN_1438305de(&local_330,&local_1f8);
          goto LAB_1404a2d10;
        }
        break;
      case 1:
        if ((*(char *)(param_3 + 0x38) == '\0') && (*(char *)((longlong)param_3 + 0xe1) == '\x01'))
        goto LAB_1404a6762;
        break;
      case 2:
        *(undefined1 *)((longlong)param_3 + 0xdd) = 0;
        if (*(char *)(param_3 + 0x37) == '\x01') {
          if (*(char *)(param_3 + 0x34) != '\x02') {
            if ((((*(char *)(param_3 + 0x34) != '\0') && (param_3[0x33] != 0.0)) &&
                (fVar32 = param_3[0x32], -1 < (int)fVar32)) &&
               ((((int)fVar32 < DAT_14c9647dc &&
                 (puVar20 = (undefined8 *)
                            ((ulonglong)(((uint)fVar32 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)((uint)fVar32 >> 0x10) * 8)),
                 puVar20 != (undefined8 *)0x0)) &&
                ((*(float *)(puVar20 + 2) == param_3[0x33] &&
                 ((*(uint *)(puVar20 + 1) & 0x10200000) == 0)))))) {
              plVar42 = (longlong *)*puVar20;
              if (plVar42 != (longlong *)0x0 && DAT_14c950c29 == 1) {
                FUN_1456cec3c(plVar42);
              }
              if ((DAT_14c950c29 & 1) == 0) {
                if (plVar42 != (longlong *)0x0) {
LAB_1404a5eae:
                  if ((DAT_14c950c29 & 1) != 0) {
                    FUN_1456cec3c(plVar42);
                  }
                  uVar63 = 0;
                  bVar21 = 0;
                  if ((*(longlong **)(lVar17 + 0x68) == plVar42) ||
                     (local_3b8 = dVar33,
                     *(longlong **)(lVar17 + 0x68) != *(longlong **)(param_3 + 0x2e)))
                  goto LAB_1404a68ef;
                  cVar11 = FUN_14382f0fd((float *)(lVar17 + 0x58));
                  if (cVar11 != '\0') {
LAB_1404a68ed:
                    uVar63 = 0;
                    bVar21 = 0;
                    goto LAB_1404a68ef;
                  }
                  bVar21 = *(byte *)(lVar17 + 200);
                  if (bVar21 == 1) {
                    fVar32 = *(float *)(lVar17 + 0x70);
                  }
                  else if (*(longlong **)(lVar17 + 0x68) == (longlong *)0x0) {
                    fVar32 = 0.0;
                  }
                  else {
                    fVar32 = (float)(**(code **)(**(longlong **)(lVar17 + 0x68) + 0x2b0))();
                    bVar21 = *(byte *)(lVar17 + 200);
                  }
                  if ((bVar21 & 1) == 0) {
                    if (*(longlong *)(lVar17 + 0x68) == 0) {
                      fVar29 = 0.0;
                    }
                    else {
                      fVar29 = *(float *)(lVar17 + 0x58);
                    }
                  }
                  else {
                    fVar29 = *(float *)(lVar17 + 0x74) * *(float *)(lVar17 + 0x70);
                  }
                  fVar29 = param_3[0x30] - fVar29;
                  fVar32 = (float)(~-(uint)(fVar29 < 0.0) & (uint)fVar29 |
                                  (uint)(fVar32 + fVar29) & -(uint)(fVar29 < 0.0));
                  if (*(char *)((longlong)dVar34 + 0x90) == '\0') {
                    dVar33 = local_3b8;
                    if (*(float *)((longlong)local_3b8 + 0x164) <= fVar32 &&
                        fVar32 != *(float *)((longlong)local_3b8 + 0x164)) goto LAB_1404a68ed;
                  }
                  else {
                    fVar29 = (float)FUN_144867862(lVar17 + 0x50,*(undefined8 *)(lVar17 + 0x68));
                    dVar33 = local_3b8;
                    if ((*(float *)((longlong)dVar34 + 0x68) <=
                         ABS(*(float *)((longlong)dVar34 + 0x88) -
                             (fVar32 * fVar29 * *(float *)(*(longlong *)(lVar17 + 0x68) + 0x1f8) +
                             param_3[0x36]))) &&
                       (ABS(*(float *)((longlong)dVar34 + 0x88) - param_3[0x36]) <
                        *(float *)((longlong)dVar34 + 0x68))) goto LAB_1404a68ed;
                  }
                }
              }
              else if (plVar42 != (longlong *)0x0) {
                FUN_1456cec3c(plVar42);
                goto LAB_1404a5eae;
              }
            }
            goto LAB_1404a2998;
          }
          FUN_140544c86(&local_330,&local_1f8);
          uVar63 = (undefined4)local_1f8;
          uVar62 = local_1f8._4_4_;
          plVar42 = aplStack_1f0[1];
          if (DAT_14c950c29 == 1) {
            if (aplStack_1f0[1] == (longlong *)0x0) {
              plVar42 = (longlong *)0x0;
            }
            else {
              FUN_1456cec3c(aplStack_1f0[1]);
              plVar42 = aplStack_1f0[1];
            }
          }
          bVar21 = (byte)local_188;
          if ((byte)local_188 == 1) {
            local_148 = plStack_1c0;
            local_168._8_8_ = plStack_1d8;
            local_168._0_8_ = dStack_1e0;
            local_158 = auStack_1d0._0_8_;
            dStack_150 = auStack_1d0._8_8_;
            local_3c8._0_8_ = local_198;
            if (local_198 == (longlong **)0x0) {
              local_278._8_8_ = dStack_1b0;
              local_278._0_8_ = local_1b8;
              local_268 = plStack_1a8;
              dStack_260 = dStack_1a0;
            }
            local_388 = CONCAT44(local_388._4_4_,(undefined4)local_190);
            local_3a8._0_4_ = local_190._4_4_;
          }
LAB_1404a68ef:
          *(undefined1 *)((longlong)param_3 + 0xdd) = 1;
          uVar25 = 0;
        }
        else {
LAB_1404a2998:
          FUN_1438307b8(&local_330,&local_1f8);
          plVar42 = aplStack_1f0[1];
          uVar63 = (undefined4)local_1f8;
          uVar62 = local_1f8._4_4_;
          if (DAT_14c950c29 == 1) {
            if (aplStack_1f0[1] == (longlong *)0x0) {
              plVar42 = (longlong *)0x0;
            }
            else {
              FUN_1456cec3c(aplStack_1f0[1]);
            }
          }
          bVar21 = (byte)local_188;
          if ((byte)local_188 == 1) {
            local_148 = plStack_1c0;
            local_158 = auStack_1d0._0_8_;
            dStack_150 = auStack_1d0._8_8_;
            local_168._8_8_ = plStack_1d8;
            local_168._0_8_ = dStack_1e0;
            local_3c8._0_8_ = local_198;
            if (local_198 == (longlong **)0x0) {
              local_268 = plStack_1a8;
              dStack_260 = dStack_1a0;
              local_278._8_8_ = dStack_1b0;
              local_278._0_8_ = local_1b8;
            }
            local_388 = CONCAT44(local_388._4_4_,(undefined4)local_190);
            local_3a8._0_4_ = local_190._4_4_;
          }
          if ((plVar42 != (longlong *)0x0) &&
             (cVar11 = FUN_141809b6e(lVar17,(longlong)dVar34 + 0x20,plVar42), cVar11 != '\0')) {
            if (*(int *)((longlong)dVar34 + 0x9e0) != 0) {
              local_3d8 = *(int *)(lVar17 + 0x54);
              fVar32 = 0.0;
              FUN_1449432a4(plVar42,&local_1f8);
              dVar43 = (double)*(float *)(lVar17 + 0x50) * (double)plStack_1d8;
              dVar34 = (double)*(float *)(lVar17 + 0x50) * (double)auStack_1d0._0_8_;
              lVar17 = (longlong)local_320 + 0x98;
              if (*(longlong *)((longlong)local_320 + 0x9d8) != 0) {
                lVar17 = *(longlong *)((longlong)local_320 + 0x9d8);
              }
              if ((longlong)*(int *)((longlong)local_320 + 0x9e0) != 0) {
                fVar32 = 0.0;
                lVar27 = 0;
                do {
                  cVar11 = *(char *)(lVar17 + 0x120 + lVar27);
                  if (cVar11 == '\x01') {
                    dVar33 = *(double *)(lVar17 + lVar27) - *(double *)(lVar17 + 0x18 + lVar27);
                    dVar35 = *(double *)(lVar17 + 8 + lVar27) - *(double *)(lVar17 + 0x20 + lVar27);
                    fVar29 = (float)SQRT(dVar35 * dVar35 + dVar33 * dVar33);
                  }
                  else {
                    if (cVar11 == '\x02') break;
                    fVar29 = ((float)(*(uint *)(lVar17 + 0x20 + lVar27) & DAT_1499319a0) / 360.0) *
                             *(float *)(lVar17 + 0x18 + lVar27) * 6.2831855;
                  }
                  fVar32 = fVar32 + fVar29;
                  lVar27 = lVar27 + 0x128;
                } while ((longlong)*(int *)((longlong)local_320 + 0x9e0) * 0x128 - lVar27 != 0);
              }
              dVar33 = local_308;
              if (fVar32 < (float)SQRT(dVar43 * dVar43 + dVar34 * dVar34) * 1.5) goto LAB_1404a29e9;
            }
            FUN_14022b110(dVar33,&local_1f8,plVar42);
            if (((local_1f8 != (longlong *)0x0) && (*(longlong **)(local_310 + 0x68) == local_1f8))
               && (cVar11 = FUN_14382f0fd(local_310 + 0x58), cVar11 != '\0')) {
              uVar25 = 0;
              goto LAB_1404a2a67;
            }
          }
LAB_1404a29e9:
          if ((*(char *)((longlong)local_300 + 0xe2) == '\0') &&
             ((*(char *)(local_300 + 0x38) != '\0' ||
              (*(char *)((longlong)local_300 + 0xe1) == '\0')))) {
            FUN_140544c86(&local_330,&local_1f8);
            uVar63 = (undefined4)local_1f8;
            uVar62 = local_1f8._4_4_;
            uVar25 = aplStack_1f0[0]._0_1_;
            plVar42 = aplStack_1f0[1];
            if (DAT_14c950c29 == 1) {
              if (aplStack_1f0[1] == (longlong *)0x0) {
                plVar42 = (longlong *)0x0;
              }
              else {
                FUN_1456cec3c(aplStack_1f0[1]);
                plVar42 = aplStack_1f0[1];
              }
            }
            bVar12 = (byte)local_188;
            if ((byte)local_188 == 1) {
              if (local_3c8._0_8_ != 0 && bVar21 == 1) {
LAB_1404a6a4c:
                FUN_1400020a8(local_3c8._0_8_);
              }
LAB_1404a4c61:
              local_148 = plStack_1c0;
              local_168._8_8_ = plStack_1d8;
              local_168._0_8_ = dStack_1e0;
              local_158 = auStack_1d0._0_8_;
              dStack_150 = auStack_1d0._8_8_;
              local_3c8._0_8_ = local_198;
              if (local_198 == (longlong **)0x0) {
                local_278._8_8_ = dStack_1b0;
                local_278._0_8_ = local_1b8;
                local_268 = plStack_1a8;
                dStack_260 = dStack_1a0;
              }
              local_198 = (longlong **)0x0;
              local_388 = CONCAT44(local_388._4_4_,(undefined4)local_190);
              local_3a8._0_4_ = local_190._4_4_;
              local_190 = 0x200000000;
            }
            else {
              bVar10 = bVar21 == 0;
              bVar21 = (byte)local_188;
              if (bVar10) goto LAB_1404a2a52;
              if (local_3c8._0_8_ == 0) goto LAB_1404a678a;
LAB_1404a68d0:
              FUN_1400020a8(local_3c8._0_8_);
            }
LAB_1404a4ced:
            bVar21 = bVar12;
          }
          else {
            FUN_140158f80(&local_330,&local_1f8);
            uVar63 = (undefined4)local_1f8;
            uVar62 = local_1f8._4_4_;
            uVar25 = aplStack_1f0[0]._0_1_;
            plVar42 = aplStack_1f0[1];
            if (DAT_14c950c29 == 1) {
              if (aplStack_1f0[1] == (longlong *)0x0) {
                plVar42 = (longlong *)0x0;
              }
              else {
                FUN_1456cec3c(aplStack_1f0[1]);
                plVar42 = aplStack_1f0[1];
              }
            }
            bVar12 = (byte)local_188;
            if ((byte)local_188 == 1) {
              if (local_3c8._0_8_ != 0 && bVar21 == 1) goto LAB_1404a6a4c;
              goto LAB_1404a4c61;
            }
            bVar10 = bVar21 != 0;
            bVar21 = (byte)local_188;
            if (bVar10) {
              if (local_3c8._0_8_ != 0) goto LAB_1404a68d0;
LAB_1404a678a:
              auVar8._8_8_ = 0;
              auVar8._0_8_ = local_3c8._8_8_;
              local_3c8 = auVar8 << 0x40;
              goto LAB_1404a4ced;
            }
          }
LAB_1404a2a52:
          if ((((byte)local_188 & 1) != 0) && (local_198 != (longlong **)0x0)) {
            FUN_1400020a8();
          }
        }
LAB_1404a2a67:
        local_2f8 = (longlong *)CONCAT44(uVar62,uVar63);
        dStack_2f0 = (double)CONCAT71(dStack_2f0._1_7_,uVar25);
        if (DAT_14c950c29 == 1) {
          if (plVar42 == (longlong *)0x0) {
            plVar42 = (longlong *)0x0;
          }
          else {
            FUN_1456cec3c(plVar42);
          }
        }
        local_2e8 = plVar42;
        if (bVar21 == 0) {
          if (local_288 != 0) {
            if (local_298 != (longlong **)0x0) {
              FUN_1400020a8();
            }
            local_288 = 0;
          }
        }
        else {
          if ((local_288 != 0) && (local_298 != (longlong **)0x0)) {
            FUN_1400020a8();
          }
          local_2c0 = local_148;
          local_2d0._8_8_ = dStack_150;
          local_2d0._0_8_ = local_158;
          local_2e0 = local_168;
          if ((longlong **)local_3c8._0_8_ == (longlong **)0x0) {
            local_2a8._8_8_ = dStack_260;
            local_2a8._0_8_ = local_268;
            local_2b8 = local_278;
          }
          local_298 = (longlong **)local_3c8._0_8_;
          local_290 = CONCAT44(local_3a8._0_4_,(int)local_388);
          local_288 = 1;
        }
        goto LAB_1404a2d71;
      default:
        local_3c8._0_8_ = (float *)(lVar17 + 0x58);
        fVar32 = *(float *)((longlong)dVar43 + 0x24);
        if (*(char *)(lVar17 + 200) == '\x01') {
          uVar62 = (undefined4)
                   CONCAT71((int7)((ulonglong)&switchD_1404a2980::switchdataD_14aba57a0 >> 8),
                            *(float *)(lVar17 + 0x70) <
                            fVar32 + *(float *)(lVar17 + 0x74) * *(float *)(lVar17 + 0x70));
        }
        else {
          local_3a8._0_8_ = pfVar23;
          plVar42 = *(longlong **)(lVar17 + 0x68);
          if (plVar42 == (longlong *)0x0) {
            uVar62 = 0;
          }
          else {
            fVar29 = *(float *)(lVar17 + 0x58);
            fVar31 = (float)(**(code **)(*plVar42 + 0x2b0))();
            uVar62 = (undefined4)CONCAT71((int7)((ulonglong)plVar42 >> 8),fVar31 <= fVar32 + fVar29)
            ;
          }
          pfVar23 = (float *)local_3a8._0_8_;
        }
        cVar11 = *(char *)(param_3 + 0x38);
        local_3a8._0_4_ = uVar62;
        if (bVar21 == 5) {
          if ((cVar11 == '\0') && (*(char *)((longlong)param_3 + 0xe1) == '\x01')) {
            FUN_1438305de(&local_330,local_168);
          }
          else {
LAB_1404a4f26:
            FUN_140544c86(&local_330,local_168);
          }
LAB_1404a5487:
          if (local_3a8[0] == '\0') goto LAB_1404a5492;
LAB_1404a6279:
          local_278[8] = local_168[8];
          local_278._0_8_ = local_168._0_8_;
          local_268 = local_158;
          if ((local_158 != (longlong *)0x0 & DAT_14c950c29) == 1) {
            FUN_1456cec3c();
          }
          local_208 = (byte)local_f8;
          if ((byte)local_f8 == 1) {
            local_240 = plStack_130;
            local_250._8_8_ = uStack_138;
            local_250._0_8_ = dStack_140;
            dStack_260 = dStack_150;
            plStack_258 = local_148;
            local_218 = (longlong **)0x0;
            lVar17 = (longlong)(int)local_108._8_4_;
            local_210 = CONCAT44(local_210._4_4_,local_108._8_4_);
            if (lVar17 == 0) {
              local_210 = CONCAT44(2,local_108._8_4_);
            }
            else {
              puVar26 = local_128;
              if ((undefined1 *)local_108._0_8_ != (undefined1 *)0x0) {
                puVar26 = (undefined1 *)local_108._0_8_;
              }
              FUN_144891736(local_238,local_108._8_4_,0);
              pplVar19 = local_218;
              if (local_218 == (longlong **)0x0) {
                pplVar19 = (longlong **)local_238;
              }
              memcpy(pplVar19,puVar26,lVar17 << 4);
            }
          }
        }
        else {
          if ((cVar11 == '\0') && (*(char *)((longlong)param_3 + 0xe1) == '\x01')) {
            local_168[8] = 1;
            local_168._0_8_ = 0x3f80000000000000;
            local_158 = (longlong *)0x0;
            local_f8 = local_f8 & 0xffffffffffffff00;
            if (bVar21 == 4) {
              if (50.0 <= *pfVar23) {
                FUN_1438307b8(&local_330,&local_1f8);
                plVar42 = aplStack_1f0[1];
                local_168[8] = aplStack_1f0[0]._0_1_;
                local_168._0_8_ = local_1f8;
                if (DAT_14c950c29 == 1) {
                  if (aplStack_1f0[1] == (longlong *)0x0) {
                    plVar42 = (longlong *)0x0;
                  }
                  else {
                    FUN_1456cec3c(aplStack_1f0[1]);
                  }
                }
                local_158 = plVar42;
                if ((byte)local_188 == '\x01') {
                  if (((byte)local_f8 != '\0') && (local_108._0_8_ != 0)) {
                    FUN_1400020a8();
                  }
                  local_108._0_8_ = local_198;
                  plStack_130 = plStack_1c0;
                  dStack_140 = auStack_1d0._0_8_;
                  uStack_138 = auStack_1d0._8_8_;
                  dStack_150 = dStack_1e0;
                  local_148 = plStack_1d8;
                  if (local_198 == (longlong **)0x0) {
                    local_128._8_8_ = dStack_1b0;
                    local_128._0_8_ = local_1b8;
                    local_118._8_8_ = dStack_1a0;
                    local_118._0_8_ = plStack_1a8;
                  }
                  local_198 = (longlong **)0x0;
                  local_108._8_8_ = local_190;
                  uVar25 = 1;
LAB_1404a72a3:
                  local_f8 = CONCAT71(local_f8._1_7_,uVar25);
                }
                else if ((byte)local_f8 != '\0') {
                  if (local_108._0_8_ != 0) {
                    FUN_1400020a8();
                  }
                  uVar25 = 0;
                  goto LAB_1404a72a3;
                }
                if (plVar42 != (longlong *)0x0) goto LAB_1404a5487;
              }
              local_3b8 = dVar33;
              FUN_1438305de(&local_330,&local_1f8);
              local_168[8] = aplStack_1f0[0]._0_1_;
              local_168._0_8_ = local_1f8;
              plVar42 = aplStack_1f0[1];
              if (DAT_14c950c29 == 1) {
                if (aplStack_1f0[1] == (longlong *)0x0) {
                  plVar42 = (longlong *)0x0;
                }
                else {
                  FUN_1456cec3c();
                  plVar42 = aplStack_1f0[1];
                }
              }
              local_158 = plVar42;
              if ((byte)local_188 == 1) {
                if (((byte)local_f8 != '\0') && (local_108._0_8_ != 0)) {
                  FUN_1400020a8();
                }
                local_108._0_8_ = local_198;
                plStack_130 = plStack_1c0;
                dStack_140 = auStack_1d0._0_8_;
                uStack_138 = auStack_1d0._8_8_;
                dStack_150 = dStack_1e0;
                local_148 = plStack_1d8;
                if (local_198 == (longlong **)0x0) {
                  local_128._8_8_ = dStack_1b0;
                  local_128._0_8_ = local_1b8;
                  local_118._8_8_ = dStack_1a0;
                  local_118._0_8_ = plStack_1a8;
                }
                local_198 = (longlong **)0x0;
                local_108._8_8_ = local_190;
                local_190 = 0x200000000;
                uVar25 = 1;
LAB_1404a65aa:
                local_f8 = CONCAT71(local_f8._1_7_,uVar25);
              }
              else if ((byte)local_f8 != '\0') {
                if (local_108._0_8_ != 0) {
                  FUN_1400020a8();
                }
                uVar25 = 0;
                goto LAB_1404a65aa;
              }
              if ((((byte)local_188 & 1) != 0) && (local_198 != (longlong **)0x0)) {
                FUN_1400020a8();
              }
              dVar33 = local_3b8;
              if (local_158 != (longlong *)0x0) goto LAB_1404a5487;
            }
            FUN_140158f80(&local_330,&local_1f8);
            local_168[8] = aplStack_1f0[0]._0_1_;
            local_168._0_8_ = local_1f8;
            plVar42 = aplStack_1f0[1];
            if (DAT_14c950c29 == 1) {
              if (aplStack_1f0[1] == (longlong *)0x0) {
                plVar42 = (longlong *)0x0;
              }
              else {
                FUN_1456cec3c();
                plVar42 = aplStack_1f0[1];
              }
            }
            local_158 = plVar42;
            if ((byte)local_188 == 1) {
              if (((byte)local_f8 != '\0') && (local_108._0_8_ != 0)) {
                FUN_1400020a8();
              }
              local_108._0_8_ = local_198;
              plStack_130 = plStack_1c0;
              dStack_140 = auStack_1d0._0_8_;
              uStack_138 = auStack_1d0._8_8_;
              dStack_150 = dStack_1e0;
              local_148 = plStack_1d8;
              if (local_198 == (longlong **)0x0) {
                local_128._8_8_ = dStack_1b0;
                local_128._0_8_ = local_1b8;
                local_118._8_8_ = dStack_1a0;
                local_118._0_8_ = plStack_1a8;
              }
              local_198 = (longlong **)0x0;
              local_108._8_8_ = local_190;
              local_190 = 0x200000000;
              uVar25 = 1;
LAB_1404a5df6:
              local_f8 = CONCAT71(local_f8._1_7_,uVar25);
            }
            else if ((byte)local_f8 != '\0') {
              if (local_108._0_8_ != 0) {
                FUN_1400020a8();
              }
              uVar25 = 0;
              goto LAB_1404a5df6;
            }
            if ((((byte)local_188 & 1) != 0) && (local_198 != (longlong **)0x0)) {
              FUN_1400020a8();
            }
            goto LAB_1404a5487;
          }
          if (bVar21 != 3) {
            if (*(char *)((longlong)param_3 + 0xe2) != '\x01' || (char)uVar62 != '\0')
            goto LAB_1404a4f26;
LAB_1404a4ebe:
            FUN_140158f80(&local_330,local_168);
            goto LAB_1404a5487;
          }
          if (((char)uVar62 != '\0') ||
             ((cVar11 == '\0' && (*(char *)((longlong)param_3 + 0xe1) == '\x01'))))
          goto LAB_1404a4ebe;
          if (*(char *)((longlong)param_3 + 0xe2) == '\x01') {
            if (*(char *)(param_3 + 0x37) == '\x01') {
              if (param_3[0x33] == 0.0) {
LAB_1404a6aaf:
                local_158 = (longlong *)0x0;
              }
              else {
                fVar32 = param_3[0x32];
                local_158 = (longlong *)0x0;
                if ((-1 < (int)fVar32) && ((int)fVar32 < DAT_14c9647dc)) {
                  puVar20 = (undefined8 *)
                            ((ulonglong)(((uint)fVar32 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)((uint)fVar32 >> 0x10) * 8));
                  if ((puVar20 == (undefined8 *)0x0) ||
                     ((*(float *)(puVar20 + 2) != param_3[0x33] ||
                      ((*(uint *)(puVar20 + 1) & 0x10200000) != 0)))) goto LAB_1404a6aaf;
                  local_158 = (longlong *)*puVar20;
                }
              }
              local_168._0_9_ = ZEXT89(0x3f80000000000000);
              if ((local_158 != (longlong *)0x0) && (DAT_14c950c29 != 0)) {
                FUN_1456cec3c();
              }
              local_f8 = local_f8 & 0xffffffffffffff00;
            }
            else {
              local_108 = ZEXT816(0);
              local_118 = local_108;
              local_128 = local_108;
              uStack_138 = 0;
              plStack_130 = (longlong *)0x0;
              local_148 = (longlong *)0x0;
              dStack_140 = 0.0;
              local_158 = (longlong *)0x0;
              dStack_150 = 0.0;
              local_f8 = 0;
              local_168[8] = 1;
              local_168._0_8_ = 0x3f80000000000000;
              local_168._9_7_ = 0;
            }
          }
          else {
            FUN_140544c86(&local_330,local_168);
          }
LAB_1404a5492:
          aplStack_1f0[0] = (longlong *)CONCAT71(aplStack_1f0[0]._1_7_,local_168[8]);
          local_1f8 = (longlong *)local_168._0_8_;
          aplStack_1f0[1] = local_158;
          if ((local_158 != (longlong *)0x0 & DAT_14c950c29) == 1) {
            FUN_1456cec3c();
          }
          local_188 = (longlong *)CONCAT71(local_188._1_7_,(byte)local_f8);
          if ((byte)local_f8 == '\x01') {
            plStack_1c0 = plStack_130;
            auStack_1d0._8_8_ = uStack_138;
            auStack_1d0._0_8_ = dStack_140;
            dStack_1e0 = dStack_150;
            plStack_1d8 = local_148;
            local_198 = (longlong **)0x0;
            lVar27 = (longlong)(int)local_108._8_4_;
            local_190 = CONCAT44(local_190._4_4_,local_108._8_4_);
            local_3b8 = dVar33;
            if (lVar27 == 0) {
              local_190 = CONCAT44(2,local_108._8_4_);
            }
            else {
              puVar26 = local_128;
              if ((undefined1 *)local_108._0_8_ != (undefined1 *)0x0) {
                puVar26 = (undefined1 *)local_108._0_8_;
              }
              FUN_144891736(&local_1b8,local_108._8_4_,0);
              pplVar19 = local_198;
              if (local_198 == (longlong **)0x0) {
                pplVar19 = &local_1b8;
              }
              memcpy(pplVar19,puVar26,lVar27 << 4);
              dVar33 = local_3b8;
            }
          }
          if ((**(char **)((longlong)dVar43 + 0x10) == '\x01') &&
             (aplStack_1f0[1] != (longlong *)0x0)) {
            plVar42 = *(longlong **)(lVar17 + 0x68);
            if ((DAT_14c950c29 == 1) && (plVar42 != (longlong *)0x0)) {
              FUN_1456cec3c(plVar42);
            }
            if (aplStack_1f0[1] == plVar42) goto LAB_1404a54f7;
            switch(bVar21) {
            case 3:
            case 6:
              if ((*(char *)(param_3 + 0x38) == '\0') &&
                 (*(char *)((longlong)param_3 + 0xe1) != '\0')) goto LAB_1404a54f7;
              break;
            case 4:
              if (((*(char *)(param_3 + 0x38) != '\0') ||
                  (*(char *)((longlong)param_3 + 0xe1) == '\0')) &&
                 (*(char *)(*(longlong *)((longlong)dVar43 + 0x10) + 0x40) != '\x01'))
              goto LAB_1404a54f7;
              break;
            case 5:
              if ((*(char *)(param_3 + 0x38) != '\0') ||
                 (*(char *)((longlong)param_3 + 0xe1) == '\0')) goto LAB_1404a54f7;
            }
            if ((((((((*param_3 < 0.0) || (*(longlong *)(param_3 + 0x24) == 0)) ||
                    (3.4028235e+38 <= ABS((float)*(double *)(param_3 + 8)))) ||
                   ((3.4028235e+38 <= ABS((float)*(double *)*(undefined1 (*) [16])(param_3 + 6)) ||
                    (3.4028235e+38 <= ABS((float)*(double *)(param_3 + 10)))))) ||
                  (dVar34 = *(double *)(param_3 + 0xc), dVar34 <= -DAT_14cb1d020)) ||
                 ((DAT_14cb1d020 <= dVar34 || (*(double *)(param_3 + 0xe) <= -(double)DAT_14cb1d028)
                  ))) || (((double)DAT_14cb1d028 <= *(double *)(param_3 + 0xe) ||
                          (((*(double *)(param_3 + 0x10) <= -DAT_14cb1d030 ||
                            (DAT_14cb1d030 <= *(double *)(param_3 + 0x10))) ||
                           (iVar14 = _finite(dVar34), iVar14 == 0)))))) ||
               ((iVar14 = _finite(*(double *)(param_3 + 0xe)), iVar14 == 0 ||
                (iVar14 = _finite(*(double *)(param_3 + 0x10)), iVar14 == 0)))) {
LAB_1404a71b0:
              fVar32 = *(float *)((longlong)dVar33 + 0x164);
              fVar29 = (float)FUN_147e3ce50(local_3c8._0_8_);
              bVar10 = fVar32 < fVar29 - *(float *)((longlong)dVar43 + 0x24);
            }
            else {
              if (*(longlong **)(param_3 + 0x24) == (longlong *)0x0) {
                local_278 = *(undefined1 (*) [16])(param_3 + 6);
                local_268 = *(longlong **)(param_3 + 10);
                dStack_260 = *(double *)(param_3 + 0xc);
                plStack_258 = *(longlong **)(param_3 + 0xe);
                local_250._0_8_ = *(undefined8 *)(param_3 + 0x10);
              }
              else {
                (**(code **)(**(longlong **)(param_3 + 0x24) + 0x2b0))();
                FUN_14180a334(param_3,local_278);
              }
              dVar34 = (double)FUN_144719204((double)((float)(double)local_278._8_8_ -
                                                     *(float *)((longlong)dVar43 + 0x30)));
              dVar34 = (double)(~-(ulonglong)(dVar34 < 0.0) & (ulonglong)dVar34 |
                               (ulonglong)(dVar34 + 360.0) & -(ulonglong)(dVar34 < 0.0));
              fVar32 = ABS((float)(double)(~-(ulonglong)(180.0 < dVar34) & (ulonglong)dVar34 |
                                          (ulonglong)(dVar34 + -360.0) &
                                          -(ulonglong)(180.0 < dVar34)));
              bVar10 = true;
              if (fVar32 < *(float *)((longlong)dVar33 + 0x168) ||
                  fVar32 == *(float *)((longlong)dVar33 + 0x168)) goto LAB_1404a71b0;
            }
          }
          else {
LAB_1404a54f7:
            bVar10 = false;
          }
          if ((byte)local_188 == '\x01') {
            if (local_198 != (longlong **)0x0) {
              FUN_1400020a8();
            }
            local_188 = (longlong *)((ulonglong)local_188 & 0xffffffffffffff00);
          }
          if (bVar10) goto LAB_1404a6279;
          FUN_1401592de(local_278,local_3c8._0_8_);
        }
        if (((byte)local_f8 == '\x01') && (local_108._0_8_ != 0)) {
          FUN_1400020a8();
        }
        local_2f8 = (longlong *)local_278._0_8_;
        dStack_2f0 = (double)CONCAT71(dStack_2f0._1_7_,local_278[8]);
        plVar42 = local_268;
        if (DAT_14c950c29 == 1) {
          if (local_268 == (longlong *)0x0) {
            plVar42 = (longlong *)0x0;
          }
          else {
            FUN_1456cec3c();
            plVar42 = local_268;
          }
        }
        local_2e8 = plVar42;
        if (local_208 == 1) {
          if ((local_288 != 0) && (local_298 != (longlong **)0x0)) {
            FUN_1400020a8();
          }
          local_290 = local_210;
          local_298 = local_218;
          local_2e0._8_8_ = plStack_258;
          local_2e0._0_8_ = dStack_260;
          if (local_218 == (longlong **)0x0) {
            local_2a8 = local_228;
            local_2b8 = local_238;
          }
          local_218 = (longlong **)0x0;
          local_210 = 0x200000000;
          local_2d0 = local_250;
          local_2c0 = local_240;
          bVar12 = 1;
          pplVar19 = local_218;
          bVar21 = local_208;
        }
        else {
          bVar12 = 0;
          pplVar19 = local_218;
          bVar21 = local_208;
          if (local_288 != 0) {
            if (local_298 != (longlong **)0x0) {
              FUN_1400020a8();
            }
            bVar12 = 0;
            pplVar19 = local_218;
            bVar21 = local_208;
          }
        }
        goto joined_r0x0001404a55ae;
      }
LAB_1404a2c61:
      FUN_140544c86(&local_330,&local_1f8);
    }
LAB_1404a2d10:
    dStack_2f0 = (double)CONCAT71(dStack_2f0._1_7_,aplStack_1f0[0]._0_1_);
    local_2f8 = local_1f8;
    plVar42 = aplStack_1f0[1];
    if (DAT_14c950c29 == 1) {
      if (aplStack_1f0[1] == (longlong *)0x0) {
        plVar42 = (longlong *)0x0;
      }
      else {
        FUN_1456cec3c();
        plVar42 = aplStack_1f0[1];
      }
    }
    local_2e8 = plVar42;
    if ((byte)local_188 == 1) {
      if ((local_288 != 0) && (local_298 != (longlong **)0x0)) {
        FUN_1400020a8();
      }
      local_2c0 = plStack_1c0;
      local_2e0._8_8_ = plStack_1d8;
      local_2e0._0_8_ = dStack_1e0;
      local_2d0 = auStack_1d0;
      if (local_198 == (longlong **)0x0) {
        local_2b8._8_8_ = dStack_1b0;
        local_2b8._0_8_ = local_1b8;
        local_2a8._8_8_ = dStack_1a0;
        local_2a8._0_8_ = plStack_1a8;
      }
      local_298 = local_198;
      local_198 = (longlong **)0x0;
      local_290 = local_190;
      local_190 = 0x200000000;
      bVar12 = 1;
LAB_1404a3bce:
      pplVar19 = local_198;
      bVar21 = (byte)local_188;
    }
    else {
      bVar12 = 0;
      pplVar19 = local_198;
      bVar21 = (byte)local_188;
      if (local_288 != 0) {
        if (local_298 != (longlong **)0x0) {
          FUN_1400020a8();
        }
        bVar12 = 0;
        goto LAB_1404a3bce;
      }
    }
joined_r0x0001404a55ae:
    local_288 = bVar12;
    if (((bVar21 & 1) != 0) && (pplVar19 != (longlong **)0x0)) {
      FUN_1400020a8();
    }
LAB_1404a2d71:
    *(undefined1 *)(local_3b0 + 1) = dStack_2f0._0_1_;
    *local_3b0 = (double)local_2f8;
    plVar42 = local_2e8;
    if (DAT_14c950c29 == 1) {
      if (local_2e8 == (longlong *)0x0) {
        plVar42 = (longlong *)0x0;
      }
      else {
        FUN_1456cec3c();
        plVar42 = local_2e8;
      }
    }
    param_2[0xd] = (double)plVar42;
    if ((double *)&local_2f8 != local_3b0) {
      if ((local_288 & 1) == 0) {
        if (*(char *)(param_2 + 0x19) == '\0') goto LAB_1404a2dcc;
        if (param_2[0x17] != 0.0) {
          FUN_1400020a8();
        }
        uVar25 = 0;
      }
      else {
        if ((*(char *)(param_2 + 0x19) != '\0') && (param_2[0x17] != 0.0)) {
          FUN_1400020a8();
        }
        param_2[0x12] = (double)local_2c0;
        *(undefined1 (*) [16])(param_2 + 0x10) = local_2d0;
        *(undefined1 (*) [16])(param_2 + 0xe) = local_2e0;
        if (local_298 == (longlong **)0x0) {
          *(undefined1 (*) [16])(param_2 + 0x15) = local_2a8;
          *(undefined1 (*) [16])(param_2 + 0x13) = local_2b8;
        }
        param_2[0x17] = (double)local_298;
        local_298 = (longlong **)0x0;
        *(undefined4 *)(param_2 + 0x18) = (undefined4)local_290;
        *(undefined4 *)((longlong)param_2 + 0xc4) = local_290._4_4_;
        local_290 = 0x200000000;
        uVar25 = 1;
      }
      *(undefined1 *)(param_2 + 0x19) = uVar25;
    }
LAB_1404a2dcc:
    if (((local_288 & 1) != 0) && (local_298 != (longlong **)0x0)) {
      FUN_1400020a8();
    }
    dVar43 = param_2[0xd];
    if (dVar43 == 0.0) {
      uVar30 = 0;
    }
    else {
      dVar34 = param_1[8];
      if (DAT_14c950c29 == 1) {
        FUN_1456cec3c(dVar43);
      }
      if ((DAT_14c950c29 & 1) != 0) {
        FUN_1456cec3c(dVar43);
      }
      if ((DAT_14c950c29 & 1) != 0) {
        FUN_1456cec3c(dVar43);
      }
      if ((DAT_14c950c29 & 1) != 0) {
        FUN_1456cec3c(dVar43);
      }
      uVar30 = 8;
      if (*(int *)((longlong)dVar34 + 1000) != *(int *)((longlong)dVar34 + 0x414)) {
        uVar13 = ((uint)((ulonglong)dVar43 >> 0x14) & 0xffff ^ (uint)((ulonglong)dVar43 >> 4)) *
                 -0x7a143595;
        uVar13 = (uVar13 >> 0xd ^ uVar13) * -0x3d4d51cb;
        lVar17 = (longlong)dVar34 + 0x418;
        if (*(longlong *)((longlong)dVar34 + 0x420) != 0) {
          lVar17 = *(longlong *)((longlong)dVar34 + 0x420);
        }
        iVar14 = *(int *)(lVar17 + (ulonglong)
                                   (*(int *)((longlong)dVar34 + 0x428) - 1U &
                                   (uVar13 >> 0x10 ^ uVar13)) * 4);
        bVar21 = DAT_14c950c29;
        if (iVar14 != -1) {
LAB_1404a2e81:
          if ((bVar21 & 1) != 0) {
            FUN_1456cec3c(dVar43);
            bVar21 = DAT_14c950c29;
          }
          lVar17 = (longlong)iVar14;
          dVar33 = *(double *)(*(longlong *)((longlong)dVar34 + 0x3e0) + lVar17 * 0x18);
          if (((bVar21 & 1) != 0) && (dVar33 != 0.0)) {
            FUN_1456cec3c(dVar33);
            bVar21 = DAT_14c950c29;
          }
          if ((bVar21 & 1) != 0) {
            FUN_1456cec3c(dVar43);
            bVar21 = DAT_14c950c29;
          }
          lVar27 = *(longlong *)((longlong)dVar34 + 0x3e0);
          if (dVar33 != dVar43) goto code_r0x0001404a2eb2;
          if ((lVar27 + lVar17 * 0x18 != 0) &&
             (pbVar15 = (byte *)(lVar27 + lVar17 * 0x18 + 8), pbVar15 != (byte *)0x0)) {
            bVar21 = *pbVar15;
            uVar30 = (uint)bVar21;
            uVar13 = (uint)bVar21;
            uVar22 = (ushort)bVar21;
            if ((8 < uVar22) || ((0x107U >> (bVar21 & 0x1f) & 1) == 0)) {
              if ((((((*param_3 < 0.0) || (*(longlong *)(param_3 + 0x24) == 0)) ||
                    (3.4028235e+38 <= ABS((float)*(double *)(param_3 + 8)))) ||
                   ((3.4028235e+38 <= ABS((float)*(double *)(param_3 + 6)) ||
                    (3.4028235e+38 <= ABS((float)*(double *)(param_3 + 10)))))) ||
                  ((dVar43 = *(double *)(param_3 + 0xc), dVar43 <= -DAT_14cb1d020 ||
                   (((DAT_14cb1d020 <= dVar43 ||
                     (*(double *)(param_3 + 0xe) <= -(double)DAT_14cb1d028)) ||
                    (((double)DAT_14cb1d028 <= *(double *)(param_3 + 0xe) ||
                     (((*(double *)(param_3 + 0x10) <= -DAT_14cb1d030 ||
                       (DAT_14cb1d030 <= *(double *)(param_3 + 0x10))) ||
                      (iVar14 = _finite(dVar43), iVar14 == 0)))))))))) ||
                 ((iVar14 = _finite(*(double *)(param_3 + 0xe)), iVar14 == 0 ||
                  (iVar14 = _finite(*(double *)(param_3 + 0x10)), iVar14 == 0)))) {
LAB_1404a3073:
                plVar42 = (longlong *)param_2[0xd];
              }
              else {
                plVar42 = (longlong *)param_2[0xd];
                if (plVar42 == *(longlong **)(param_3 + 0x24)) {
                  fVar32 = *(float *)(*(longlong *)((longlong)*param_1 + 0x18) + 0x58);
                  if (*(float *)local_3b0 <= fVar32 && fVar32 != *(float *)local_3b0)
                  goto LAB_1404a3073;
                  goto LAB_1404a33b5;
                }
              }
              if ((plVar42 != (longlong *)0x0) && (param_1[8] != 0.0)) {
                lVar17 = ((longlong *)*param_1)[3];
                local_2e8 = *(longlong **)(lVar17 + 0x28);
                local_2f8 = *(longlong **)(lVar17 + 0x18);
                dStack_2f0 = *(double *)(lVar17 + 0x20);
                local_2e0 = *(undefined1 (*) [16])(lVar17 + 0xd0);
                local_2d0._0_8_ = *(undefined8 *)(lVar17 + 0xe0);
                FUN_140183318(local_168,&local_2f8,*(longlong *)*param_1 + 0x1ad8);
                pdVar16 = (double *)param_1[1];
                fVar32 = *(float *)((longlong)param_1[8] + 0xf8);
                dVar43 = *pdVar16;
                dVar34 = pdVar16[1];
                dVar33 = 0.0;
                if ((dVar43 != 0.0) || (((NAN(dVar43) || (dVar34 != 0.0)) || (NAN(dVar34))))) {
                  dVar33 = atan2(dVar34,dVar43);
                  dVar33 = dVar33 * 57.29577951308232;
                  dVar43 = *pdVar16;
                  dVar34 = pdVar16[1];
                }
                dVar34 = SQRT(dVar43 * dVar43 + dVar34 * dVar34);
                dVar43 = pdVar16[2];
                if (((dVar43 != 0.0) || (NAN(dVar43))) || ((dVar34 != 0.0 || (NAN(dVar34))))) {
                  atan2(dVar43,dVar34);
                }
                local_1f8 = plVar42;
                puVar20 = (undefined8 *)local_168;
                pplVar19 = aplStack_1f0;
                for (lVar27 = 0xc; lVar27 != 0; lVar27 = lVar27 + -1) {
                  *pplVar19 = (longlong *)*puVar20;
                  puVar20 = puVar20 + 1;
                  pplVar19 = pplVar19 + 1;
                }
                local_190 = local_108._0_8_;
                local_188 = (longlong *)local_108._8_8_;
                if ((longlong *)local_108._8_8_ != (longlong *)0x0) {
                  LOCK();
                  *(int *)(local_108._8_8_ + 8) = (int)*(longlong *)(local_108._8_8_ + 8) + 1;
                  UNLOCK();
                }
                local_180 = (undefined4)local_f8;
                local_178[0] = *(undefined8 *)(lVar17 + 0x50);
                if (uVar22 == 6) {
                  local_3d8 = (uint)local_3d8._1_3_ << 8;
                  FUN_140c1dddc(param_3,plVar42,aplStack_1f0,local_178);
                }
                else {
                  if (uVar22 == 4) {
                    dVar43 = param_1[8];
                    dVar34 = *param_1;
                    local_3d8 = (uint)local_3d8._1_3_ << 8;
                    FUN_140c1dddc(param_3,plVar42,aplStack_1f0,local_178);
                    local_3d8 = 0x7f7fffff;
                    FUN_14022ad2a(param_3 + 6,local_278,local_1f8,local_178);
                    uVar40 = (**(code **)(*local_1f8 + 0x2b0))();
                    fVar29 = (float)FUN_14022aac6((longlong)dVar34 + 0x30,&dStack_260,uVar40,
                                                  (longlong)dVar43 + 0x140);
                    dVar43 = (double)FUN_144719204((double)fVar29 - (double)local_278._8_8_);
                    dVar43 = (double)(~-(ulonglong)(dVar43 < 0.0) & (ulonglong)dVar43 |
                                     (ulonglong)(dVar43 + 360.0) & -(ulonglong)(dVar43 < 0.0));
                    dVar43 = (double)(~-(ulonglong)(180.0 < dVar43) & (ulonglong)dVar43 |
                                     (ulonglong)(dVar43 + -360.0) & -(ulonglong)(180.0 < dVar43));
                  }
                  else {
                    if (uVar22 != 3) goto LAB_1404a4e30;
                    local_3d8 = CONCAT31(local_3d8._1_3_,1);
                    FUN_140c1dddc(param_3,plVar42,aplStack_1f0,local_178);
                    fVar29 = *(float *)(local_1f8 + 0x42);
                    dVar43 = (double)local_1f8[0x40];
                    dVar34 = (double)local_1f8[0x41];
                    if (((dVar43 != 0.0) || (NAN(dVar43))) || ((dVar34 != 0.0 || (NAN(dVar34))))) {
                      dVar43 = atan2(dVar34,dVar43);
                      fVar31 = (float)(dVar43 * 57.29577951308232);
                    }
                    else {
                      fVar31 = 0.0;
                    }
                    dVar43 = (double)FUN_144719204((double)(fVar29 - fVar31),0x4076800000000000);
                    dVar43 = (double)(~-(ulonglong)(dVar43 < 0.0) & (ulonglong)dVar43 |
                                     (ulonglong)(dVar43 + 360.0) & -(ulonglong)(dVar43 < 0.0));
                    local_3d8 = 0x7f7fffff;
                    FUN_14022ad2a(param_3 + 6,local_278,local_1f8,local_178);
                    dVar43 = (double)FUN_144719204((double)(float)(double)(~-(ulonglong)
                                                                             (180.0 < dVar43) &
                                                                           (ulonglong)dVar43 |
                                                                          (ulonglong)
                                                                          (dVar43 + -360.0) &
                                                                          -(ulonglong)
                                                                           (180.0 < dVar43)) +
                                                   (dVar33 - (double)local_278._8_8_),
                                                   0x4076800000000000);
                    dVar43 = (double)(~-(ulonglong)(dVar43 < 0.0) & (ulonglong)dVar43 |
                                     (ulonglong)(dVar43 + 360.0) & -(ulonglong)(dVar43 < 0.0));
                    dVar43 = (double)(~-(ulonglong)(180.0 < dVar43) & (ulonglong)dVar43 |
                                     (ulonglong)(dVar43 + -360.0) & -(ulonglong)(180.0 < dVar43));
                  }
                  fVar31 = (float)dVar43;
                  fVar29 = ABS(fVar31);
                  if (fVar32 <= ABS(fVar31)) {
                    fVar29 = fVar32;
                  }
                  param_3[4] = fVar29 * (float)(-(uint)(0.0 < fVar31) & 0x3f800000 |
                                               ~-(uint)(0.0 < fVar31) &
                                               -(uint)(fVar31 < 0.0) & 0xbf800000);
                }
LAB_1404a4e30:
                plVar42 = local_188;
                if (local_188 != (longlong *)0x0) {
                  LOCK();
                  plVar7 = local_188 + 1;
                  *(int *)plVar7 = (int)*plVar7 + -1;
                  UNLOCK();
                  if ((int)*plVar7 == 0) {
                    (**(code **)*local_188)(local_188);
                    LOCK();
                    piVar1 = (int *)((longlong)plVar42 + 0xc);
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (*piVar1 == 0) {
                      (**(code **)(*plVar42 + 0x10))(plVar42);
                    }
                  }
                }
                uVar40 = local_108._8_8_;
                uVar30 = uVar13;
                if ((longlong *)local_108._8_8_ != (longlong *)0x0) {
                  LOCK();
                  plVar42 = (longlong *)(local_108._8_8_ + 8);
                  *(int *)plVar42 = (int)*plVar42 + -1;
                  UNLOCK();
                  if ((int)*plVar42 == 0) {
                    (*(code *)**(undefined8 **)local_108._8_8_)(local_108._8_8_);
                    LOCK();
                    piVar1 = (int *)(uVar40 + 0xc);
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (*piVar1 == 0) {
                      (**(code **)(*(longlong *)uVar40 + 0x10))(uVar40);
                    }
                  }
                }
              }
              goto LAB_1404a33b5;
            }
            uVar30 = (uint)(byte)(&DAT_14aba5708)[uVar22];
          }
        }
      }
    }
LAB_1404a331a:
    aplStack_1f0[1] = DAT_14cb1d018;
    local_1f8 = _DAT_14cb1d008;
    aplStack_1f0[0] = _DAT_14cb1d010;
    dStack_1e0 = DAT_14cb1d020;
    plStack_1d8 = DAT_14cb1d028;
    auStack_1d0._8_8_ = _DAT_14cb1d008;
    auStack_1d0._0_8_ = DAT_14cb1d030;
    plStack_1c0 = _DAT_14cb1d010;
    local_1b8 = DAT_14cb1d018;
    dStack_1b0 = DAT_14cb1d020;
    plStack_1a8 = DAT_14cb1d028;
    dStack_1a0 = DAT_14cb1d030;
    param_3[0] = -1.0;
    param_3[1] = 0.0;
    param_3[2] = 1.0;
    param_3[3] = 0.0;
    param_3[4] = 0.0;
    puVar20 = &local_1f8;
    pfVar23 = param_3 + 6;
    for (lVar17 = 0xc; lVar17 != 0; lVar17 = lVar17 + -1) {
      *(undefined8 *)pfVar23 = *puVar20;
      puVar20 = puVar20 + 1;
      pfVar23 = pfVar23 + 2;
    }
    param_3[0x1e] = 0.0;
    param_3[0x1f] = 0.0;
    plVar42 = *(longlong **)(param_3 + 0x20);
    if (plVar42 != (longlong *)0x0) {
      param_3[0x20] = 0.0;
      param_3[0x21] = 0.0;
      LOCK();
      plVar7 = plVar42 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)*plVar42)(plVar42);
        LOCK();
        piVar1 = (int *)((longlong)plVar42 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar42 + 0x10))(plVar42);
        }
      }
    }
    param_3[0x22] = -NAN;
    param_3[0x24] = 0.0;
    param_3[0x25] = 0.0;
    *(undefined1 *)(param_3 + 0x26) = 0;
LAB_1404a33b5:
    dVar43 = *param_1;
    bVar21 = (byte)uVar30;
    if ((8 < bVar21) || ((0x107U >> (uVar30 & 0x1f) & 1) == 0)) {
      if ((0.0 < *(float *)((longlong)dVar43 + 0x24)) && (dVar34 = param_2[0xd], dVar34 != 0.0)) {
        lVar17 = *(longlong *)((longlong)dVar43 + 0x18);
        if (DAT_14c950c29 == 1) {
          FUN_1456cec3c(dVar34);
        }
        if ((*(double *)(lVar17 + 0x68) == dVar34) &&
           (fVar32 = *(float *)(lVar17 + 0x58),
           fVar32 < *(float *)local_3b0 || fVar32 == *(float *)local_3b0)) {
          if (*(char *)(param_2 + 0x19) == '\x01') {
            uVar30 = *(uint *)(param_2 + 0x18);
            if (((int)uVar30 < 1 || param_2[0xf] == 0.0) ||
               (lVar17 = *(longlong *)((longlong)*param_1 + 0x18), *(char *)(lVar17 + 200) != '\x01'
               )) goto LAB_1404a487b;
            pdVar16 = param_2 + 0x13;
            if ((double *)param_2[0x17] != (double *)0x0) {
              pdVar16 = (double *)param_2[0x17];
            }
            plVar58 = (longlong *)0x0;
            plVar61 = (longlong *)0x0;
            plVar42 = (longlong *)0x0;
            dVar43 = 1.0;
            lVar27 = 0;
            bVar10 = false;
            dVar34 = 0.0;
            dVar33 = 0.0;
            plVar7 = (longlong *)0x0;
            do {
              (**(code **)(**(longlong **)((longlong)pdVar16 + lVar27 + 8) + 0x2b0))();
              (**(code **)(**(longlong **)((longlong)pdVar16 + lVar27 + 8) + 0x2b0))();
              local_3d8 = *(int *)(lVar17 + 0x54);
              FUN_1449432a4(*(undefined8 *)((longlong)pdVar16 + lVar27 + 8),&local_1f8);
              dVar35 = (double)*(float *)((longlong)pdVar16 + lVar27);
              dVar36 = (double)*(float *)((longlong)pdVar16 + lVar27);
              if (bVar10) {
                auVar44._0_8_ = (double)local_1f8 * dVar35;
                auVar44._8_8_ = (double)aplStack_1f0[0] * dVar36;
                dVar37 = (double)aplStack_1f0[1] * dVar35;
                dVar38 = dStack_1e0 * dVar36;
                dVar59 = (double)plVar42 * dVar37 + (double)plVar58 * auVar44._0_8_;
                dVar68 = dVar43 * dVar38 + (double)plVar61 * auVar44._8_8_;
                auVar41._8_8_ = -(ulonglong)(0.0 <= dVar59 + dVar68);
                auVar41._0_8_ = -(ulonglong)(0.0 <= dVar59 + dVar68);
                auVar49._0_8_ = 0.0 - auVar44._0_8_;
                auVar49._8_8_ = 0.0 - auVar44._8_8_;
                auVar50 = blendvpd(auVar49,auVar44,auVar41);
                auVar52._0_8_ = 0.0 - dVar37;
                auVar52._8_8_ = 0.0 - dVar38;
                auVar5._8_4_ = SUB84(dVar38,0);
                auVar5._0_8_ = dVar37;
                auVar5._12_4_ = (int)((ulonglong)dVar38 >> 0x20);
                auVar53 = blendvpd(auVar52,auVar5,auVar41);
                plVar58 = (longlong *)((double)plVar58 + auVar50._0_8_);
                plVar61 = (longlong *)((double)plVar61 + auVar50._8_8_);
                plVar42 = (longlong *)((double)plVar42 + auVar53._0_8_);
                dVar43 = dVar43 + auVar53._8_8_;
                dVar34 = dVar34 + (double)plStack_1d8 * dVar35;
                dVar33 = dVar33 + (double)auStack_1d0._0_8_ * dVar36;
                plVar7 = (longlong *)((double)plVar7 + dVar35 * (double)auStack_1d0._8_8_);
              }
              else {
                dVar34 = (double)plStack_1d8 * dVar35;
                dVar33 = (double)auStack_1d0._0_8_ * dVar36;
                plVar7 = (longlong *)((double)auStack_1d0._8_8_ * dVar35);
                plVar58 = (longlong *)((double)local_1f8 * dVar35);
                plVar61 = (longlong *)((double)aplStack_1f0[0] * dVar36);
                plVar42 = (longlong *)(dVar35 * (double)aplStack_1f0[1]);
                dVar43 = dVar36 * dStack_1e0;
                bVar10 = true;
              }
              lVar27 = lVar27 + 0x10;
            } while ((ulonglong)uVar30 << 4 != lVar27);
            if (!bVar10) goto LAB_1404a487b;
            local_168._8_8_ = dVar33;
            local_168._0_8_ = dVar34;
            local_158 = plVar7;
            FUN_1401c9a0e(lVar17 + 0x18,&local_1f8);
            dVar34 = (double)*(float *)(lVar17 + 0x50);
            local_268 = (longlong *)((double)aplStack_1f0[1] * dVar34);
            local_278._8_8_ = (double)aplStack_1f0[0] * dVar34;
            local_278._0_8_ = dVar34 * (double)local_1f8;
            auVar6._8_4_ = SUB84(dVar43,0);
            auVar6._0_8_ = plVar42;
            auVar6._12_4_ = (int)((ulonglong)dVar43 >> 0x20);
            dStack_1e0 = auVar6._8_8_;
            local_1f8 = plVar58;
            aplStack_1f0[0] = plVar61;
            aplStack_1f0[1] = plVar42;
            FUN_1448052ee(&local_1f8,&local_2f8);
            iVar14 = (**(code **)(**(longlong **)*param_1 + 0x18))();
            plVar42 = (longlong *)0x0;
            if (iVar14 != 1) {
              plVar42 = local_2f8;
            }
            puVar20 = &local_1f8;
            dVar43 = dStack_2f0;
          }
          else {
            if (((((*param_3 < 0.0) || (*(longlong *)(param_3 + 0x24) == 0)) ||
                 (3.4028235e+38 <= ABS((float)*(double *)(param_3 + 8)))) ||
                ((3.4028235e+38 <= ABS((float)*(double *)(param_3 + 6)) ||
                 (3.4028235e+38 <= ABS((float)*(double *)(param_3 + 10)))))) ||
               ((((dVar43 = *(double *)(param_3 + 0xc), dVar43 <= -DAT_14cb1d020 ||
                  ((DAT_14cb1d020 <= dVar43 ||
                   (*(double *)(param_3 + 0xe) <= -(double)DAT_14cb1d028)))) ||
                 ((double)DAT_14cb1d028 <= *(double *)(param_3 + 0xe))) ||
                ((((*(double *)(param_3 + 0x10) <= -DAT_14cb1d030 ||
                   (DAT_14cb1d030 <= *(double *)(param_3 + 0x10))) ||
                  (iVar14 = _finite(dVar43), iVar14 == 0)) ||
                 ((iVar14 = _finite(*(double *)(param_3 + 0xe)), iVar14 == 0 ||
                  (iVar14 = _finite(*(double *)(param_3 + 0x10)), iVar14 == 0))))))))
            goto LAB_1404a487b;
            pcVar4 = *(char **)((longlong)*param_1 + 0x10);
            if (((*(char *)(*(longlong *)(pcVar4 + 0x48) + 0x54) == '\0') ||
                ((*(char *)(*(longlong *)(pcVar4 + 0x48) + 0x54) == '\x01' && (pcVar4[0x51] == '\0')
                 ))) && ((*pcVar4 == '\x01' && ((bVar21 == 6 || (uVar30 == 3)))))) {
              lVar17 = *(longlong *)(param_3 + 0x24);
              if (lVar17 != 0) {
                lVar27 = *(longlong *)((longlong)*param_1 + 0x18);
                local_3d8 = *(undefined4 *)(lVar27 + 0x54);
                FUN_1449432a4(lVar17,&local_1f8);
                local_2f8 = plStack_1d8;
                dStack_2f0 = (double)auStack_1d0._0_8_;
                local_2e8 = (longlong *)auStack_1d0._8_8_;
                FUN_1401c9a0e(lVar27 + 0x18,local_168);
                dVar43 = (double)*(float *)(lVar27 + 0x50);
                local_320 = (double)local_158 * dVar43;
                local_328 = (double)local_168._8_8_ * dVar43;
                local_330 = (double *)(dVar43 * (double)local_168._0_8_);
                local_168._0_8_ = local_1f8;
                local_168._8_8_ = aplStack_1f0[0];
                local_158 = aplStack_1f0[1];
                dStack_150 = dStack_1e0;
                FUN_1448052ee(local_168,&local_348);
                iVar14 = (**(code **)(**(longlong **)*param_1 + 0x18))();
                dVar43 = 0.0;
                local_168._0_8_ = 0;
                if (iVar14 != 1) {
                  local_168._0_8_ = local_348;
                }
                local_168._8_8_ = local_340;
                local_158 = (longlong *)0x0;
                FUN_143830b12(param_1,param_2,&local_330);
                local_3d8 = *(int *)((longlong)param_2 + 0x54);
                FUN_1449432a4(lVar17,local_168);
                iVar14 = (**(code **)(**(longlong **)*param_1 + 0x18))();
                local_278 = local_168;
                local_268 = local_158;
                dStack_260 = dStack_150;
                FUN_1448052ee(local_278,&local_360);
                uVar62 = 0;
                uVar63 = 0;
                if (iVar14 != 1) {
                  uVar62 = (undefined4)local_360;
                  uVar63 = (undefined4)((ulonglong)local_360 >> 0x20);
                }
                pdVar16 = (double *)param_1[1];
                dVar33 = *pdVar16;
                dVar34 = pdVar16[1];
                if ((((dVar33 != 0.0) || (NAN(dVar33))) || (dVar34 != 0.0)) || (NAN(dVar34))) {
                  dVar43 = atan2(dVar34,dVar33);
                  dVar43 = dVar43 * 57.29577951308232;
                  dVar33 = *pdVar16;
                  dVar34 = pdVar16[1];
                }
                dVar35 = SQRT(dVar33 * dVar33 + dVar34 * dVar34);
                dVar34 = pdVar16[2];
                dVar33 = 0.0;
                if (((dVar34 != 0.0) || (NAN(dVar34))) || ((dVar35 != 0.0 || (NAN(dVar35))))) {
                  dVar33 = atan2(dVar34,dVar35);
                  dVar33 = dVar33 * 57.29577951308232;
                }
                dVar43 = (double)FUN_144719204(dVar43 - local_358,0x4076800000000000);
                dVar34 = (double)(~-(ulonglong)(dVar43 < 0.0) & (ulonglong)dVar43 |
                                 (ulonglong)(dVar43 + 360.0) & -(ulonglong)(dVar43 < 0.0));
                FUN_144719204(0,0x4076800000000000);
                dVar43 = (double)FUN_144719204(dVar33 - (double)CONCAT44(uVar63,uVar62),
                                               0x4076800000000000);
                dVar43 = (double)(~-(ulonglong)(dVar43 < 0.0) & (ulonglong)dVar43 |
                                 (ulonglong)(dVar43 + 360.0) & -(ulonglong)(dVar43 < 0.0));
                uVar40 = FUN_14382f2a2(param_1);
                fVar32 = (float)FUN_1407b5b68((float)param_2[4],
                                              (float)(double)(~-(ulonglong)(180.0 < dVar34) &
                                                              (ulonglong)dVar34 |
                                                             (ulonglong)(dVar34 + -360.0) &
                                                             -(ulonglong)(180.0 < dVar34)),uVar40);
                param_2[4] = (double)fVar32;
                fVar32 = (float)FUN_1407b5b68((float)param_2[3],
                                              (float)(double)(~-(ulonglong)(180.0 < dVar43) &
                                                              (ulonglong)dVar43 |
                                                             (ulonglong)(dVar43 + -360.0) &
                                                             -(ulonglong)(180.0 < dVar43)),uVar40);
                param_2[3] = (double)fVar32;
              }
              goto LAB_1404a487b;
            }
            FUN_14180a334(param_3,&local_1f8);
            FUN_14180a334(param_3,local_168);
            local_268 = (longlong *)(dStack_140 - (double)auStack_1d0._0_8_);
            local_278._8_8_ = (double)local_148 - (double)plStack_1d8;
            local_278._0_8_ = dStack_150 - dStack_1e0;
            iVar14 = (**(code **)(**(longlong **)*param_1 + 0x18))();
            plVar42 = (longlong *)0x0;
            if (iVar14 != 1) {
              plVar42 = (longlong *)((double)local_168._0_8_ - (double)local_1f8);
            }
            dVar43 = (double)local_168._8_8_ - (double)aplStack_1f0[0];
            puVar20 = &local_2f8;
          }
          *puVar20 = plVar42;
          puVar20[1] = dVar43;
          puVar20[2] = 0;
          FUN_143830b12(param_1,param_2,local_278);
        }
      }
      goto LAB_1404a487b;
    }
  }
  if (*(char *)(*(longlong *)((longlong)dVar43 + 0x10) + 1) != '\x01') goto LAB_1404a487b;
  if (((bVar21 == 1) && (*(char *)local_398._0_8_ == '\x04')) &&
     ((1.0 <= ABS(0.0 - param_3[0x2a]) || (0.01 < ABS(param_3[0x2c]))))) {
    param_3[0x29] = 0.0;
    param_3[0x2a] = 0.0;
    param_3[0x2b] = param_3[0x28];
    param_3[0x2c] = 0.0;
  }
  fVar32 = param_3[0x28];
  fVar29 = 0.0;
  if (*(char *)(param_3 + 0x38) == '\0') {
    if (param_3[0x2c] <= 0.0001) {
      fVar29 = param_3[0x2a];
    }
    else {
      fVar29 = *(float *)((longlong)*param_1 + 0x24) + param_3[0x29];
      param_3[0x29] = fVar29;
      fVar29 = fVar29 / param_3[0x2c];
      if (1.0 <= fVar29) {
        fVar29 = 1.0;
      }
      if (fVar29 <= 0.0) {
        fVar29 = 0.0;
      }
      fVar29 = (param_3[0x2a] - param_3[0x2b]) * fVar29 + param_3[0x2b];
    }
  }
  *(float *)(param_2 + 9) = fVar29;
  plVar42 = (longlong *)*param_1;
  if (fVar29 <= fVar32) {
    uVar30 = *(uint *)(*(longlong *)(plVar42[2] + 0x48) + 0x50) ^ 0x80000000;
  }
  else {
    uVar30 = *(uint *)(*(longlong *)(plVar42[2] + 0x48) + 0x4c);
  }
  *(uint *)((longlong)param_2 + 0x4c) = uVar30;
  lVar17 = *plVar42;
  if (*(char *)(lVar17 + 0x17a8) == '\x01') {
    bVar10 = true;
    if ((*(int *)(lVar17 + 0x1720) != 6) &&
       ((*(int *)(lVar17 + 0x1720) != 5 ||
        (1.0 < *(float *)(lVar17 + 0x171c) || *(float *)(lVar17 + 0x171c) == 1.0))))
    goto LAB_1404a3804;
  }
  else {
LAB_1404a3804:
    bVar10 = false;
  }
  dVar43 = param_1[8];
  if (dVar43 == 0.0) {
    bVar28 = true;
  }
  else {
    bVar28 = *(longlong *)((longlong)dVar43 + 0x148) == 0;
  }
  if (bVar10) {
    pdVar16 = (double *)param_1[1];
    dVar43 = *pdVar16;
    dVar34 = pdVar16[1];
    uVar62 = SUB84(pdVar16[2],0);
    uVar63 = (undefined4)((ulonglong)pdVar16[2] >> 0x20);
    bVar21 = bVar21 != 1 | bVar28;
  }
  else if ((bool)(bVar21 != 1 | bVar28)) {
    if (fVar29 <= 1.0) {
LAB_1404a3aba:
      fVar31 = *(float *)(plVar42 + 6) * 0.017453292;
      fVar31 = (float)(longlong)
                      (fVar31 * 0.15915494 +
                      *(float *)(&DAT_14a184448 + (ulonglong)(fVar31 < 0.0) * 4)) * -6.2831855 +
               fVar31;
      if (1.5707964 < fVar31) {
        fVar47 = 3.1415927;
LAB_1404a4084:
        fVar31 = fVar47 - fVar31;
        fVar47 = -1.0;
      }
      else {
        if (fVar31 < -1.5707964) {
          fVar47 = -3.1415927;
          goto LAB_1404a4084;
        }
        fVar47 = 1.0;
      }
      fVar45 = fVar31 * fVar31;
      fVar31 = (((((fVar45 * -2.3889859e-08 + 2.7525562e-06) * fVar45 + -0.00019840874) * fVar45 +
                 0.008333331) * fVar45 + -0.16666667) * fVar45 + 1.0) * fVar31;
      fVar47 = (((((fVar45 * -2.6051615e-07 + 2.4760495e-05) * fVar45 + -0.0013888378) * fVar45 +
                 0.041666638) * fVar45 + -0.5) * fVar45 + 1.0) * fVar47;
LAB_1404a412a:
      dVar34 = (double)fVar31;
      dVar43 = (double)fVar47;
      uVar62 = 0;
      uVar63 = 0;
    }
    else {
      cVar11 = *(char *)(*(longlong *)(plVar42[2] + 0x48) + 0x54);
      if ((cVar11 != '\0') && ((cVar11 != '\x01' || (*(char *)(plVar42[2] + 0x51) != '\0')))) {
        if ((dVar43 == 0.0) || (*(char *)(param_3 + 0x3a) != '\x01')) goto LAB_1404a3aba;
        dVar34 = *(double *)param_1[1];
        dVar33 = ((double *)param_1[1])[1];
        if ((((dVar34 != 0.0) || (NAN(dVar34))) || (dVar33 != 0.0)) || (NAN(dVar33))) {
          atan2(dVar33,dVar34);
        }
        fVar31 = (float)FUN_141804412(dVar43);
        fVar31 = fVar31 * 0.017453292;
        fVar31 = (float)(longlong)
                        (fVar31 * 0.15915494 +
                        *(float *)(&DAT_14a184448 + (ulonglong)(fVar31 < 0.0) * 4)) * -6.2831855 +
                 fVar31;
        if (1.5707964 < fVar31) {
          fVar47 = 3.1415927;
LAB_1404a5fff:
          fVar31 = fVar47 - fVar31;
          fVar47 = -1.0;
        }
        else {
          if (fVar31 < -1.5707964) {
            fVar47 = -3.1415927;
            goto LAB_1404a5fff;
          }
          fVar47 = 1.0;
        }
        fVar45 = fVar31 * fVar31;
        fVar31 = (((((fVar45 * -2.3889859e-08 + 2.7525562e-06) * fVar45 + -0.00019840874) * fVar45 +
                   0.008333331) * fVar45 + -0.16666667) * fVar45 + 1.0) * fVar31;
        fVar47 = (((((fVar45 * -2.6051615e-07 + 2.4760495e-05) * fVar45 + -0.0013888378) * fVar45 +
                   0.041666638) * fVar45 + -0.5) * fVar45 + 1.0) * fVar47;
        goto LAB_1404a412a;
      }
      pdVar16 = (double *)param_1[1];
      dVar43 = *pdVar16;
      dVar34 = pdVar16[1];
      uVar62 = SUB84(pdVar16[2],0);
      uVar63 = (undefined4)((ulonglong)pdVar16[2] >> 0x20);
    }
    bVar21 = 1;
  }
  else {
    lVar17 = plVar42[3];
    dVar43 = (double)FUN_144719204(*(undefined8 *)(lVar17 + 0x18));
    dVar33 = (double)FUN_144719204(*(undefined8 *)(lVar17 + 0x20));
    dVar34 = sin(dVar43 * 0.017453292519943295);
    uVar62 = SUB84(dVar34,0);
    uVar63 = (undefined4)((ulonglong)dVar34 >> 0x20);
    dVar35 = cos(dVar43 * 0.017453292519943295);
    dVar34 = sin(dVar33 * 0.017453292519943295);
    dVar43 = cos(dVar33 * 0.017453292519943295);
    dVar34 = dVar34 * dVar35;
    dVar43 = dVar43 * dVar35;
    bVar21 = 0;
  }
  dVar33 = 0.0;
  if (((dVar43 != 0.0) || (NAN(dVar43))) || ((dVar34 != 0.0 || (NAN(dVar34))))) {
    dVar33 = atan2(dVar34,dVar43);
  }
  dVar43 = SQRT(dVar43 * dVar43 + dVar34 * dVar34);
  if (((double)CONCAT44(uVar63,uVar62) != 0.0) || (NAN((double)CONCAT44(uVar63,uVar62)))) {
LAB_1404a419d:
    dVar34 = atan2((double)CONCAT44(uVar63,uVar62),dVar43);
  }
  else {
    dVar34 = 0.0;
    if ((dVar43 != 0.0) || (NAN(dVar43))) goto LAB_1404a419d;
  }
  local_168._0_8_ = dVar33 * 57.29577951308232;
  if ((bool)(bVar10 | bVar21)) {
    FUN_14382f2a2(param_1);
    fVar31 = (float)FUN_1407b5b68((float)*(double *)
                                          (*(longlong *)((longlong)*param_1 + 0x18) + 0x20));
    param_2[3] = 0.0;
    param_2[4] = (double)fVar31;
    param_2[5] = 0.0;
  }
  puVar20 = (undefined8 *)*param_1;
  lVar17 = puVar20[2];
  cVar11 = *(char *)(*(longlong *)(lVar17 + 0x48) + 0x54);
  if ((cVar11 == '\0') || ((cVar11 == '\x01' && (*(char *)(lVar17 + 0x51) == '\0')))) {
    iVar14 = (**(code **)(*(longlong *)*puVar20 + 0x18))();
    if (iVar14 == 1) {
      dVar34 = 0.0;
      pdVar16 = param_2 + 4;
    }
    else {
      dVar34 = dVar34 * 57.29577951308232;
      dVar43 = (double)FUN_144719204(dVar34,0x4076800000000000);
      dVar33 = (double)FUN_144719204(dVar33 * 57.29577951308232,0x4076800000000000);
      dVar35 = sin(dVar43 * 0.017453292519943295);
      cos(dVar43 * 0.017453292519943295);
      sin(dVar33 * 0.017453292519943295);
      cos(dVar33 * 0.017453292519943295);
      if (ABS(dVar35) <= 0.8999999761581421) {
        pdVar16 = (double *)local_168;
        if (*(char *)(*(longlong *)(*(longlong *)((longlong)*param_1 + 0x10) + 0x48) + 0x55) == '\0'
           ) {
          pdVar16 = param_2 + 4;
        }
      }
      else {
        pdVar16 = (double *)local_168;
      }
    }
    dVar43 = *pdVar16;
    dVar33 = 0.0;
  }
  else if (fVar29 <= 1.0) {
    lVar17 = puVar20[3];
    dVar34 = *(double *)(lVar17 + 0x30);
    dVar43 = *(double *)(lVar17 + 0x38);
    dVar33 = *(double *)(lVar17 + 0x40);
  }
  else {
    dVar43 = 0.0;
    if (0.0 < *(float *)(param_2 + 9)) {
      fVar29 = *(float *)(param_2 + 9) / *(float *)(lVar17 + 0x44);
      if (1.0 <= fVar29) {
        fVar29 = 1.0;
      }
      dVar43 = (double)fVar29;
    }
    lVar17 = puVar20[3];
    dVar34 = (double)FUN_144719204(*(undefined8 *)(lVar17 + 0x30));
    dVar33 = (double)FUN_144719204(*(undefined8 *)(lVar17 + 0x38));
    dVar35 = sin(dVar34 * 0.017453292519943295);
    dVar36 = cos(dVar34 * 0.017453292519943295);
    dVar37 = sin(dVar33 * 0.017453292519943295);
    dVar38 = cos(dVar33 * 0.017453292519943295);
    dVar34 = (double)fVar32;
    dVar35 = dVar35 * dVar34;
    dVar59 = dVar37 * dVar36 * dVar34;
    pdVar16 = (double *)param_1[1];
    lVar17 = *(longlong *)(*(longlong *)((longlong)*param_1 + 0x10) + 0x48);
    dVar33 = (double)*(float *)(lVar17 + 0x4c);
    dVar34 = dVar38 * dVar36 * dVar34;
    dVar36 = pdVar16[2] * dVar43 * dVar33;
    dVar37 = pdVar16[1] * dVar43 * dVar33;
    dVar33 = dVar43 * *pdVar16 * dVar33;
    fVar29 = *(float *)(param_2 + 9);
    bVar28 = false;
    bVar10 = false;
    if ((((dVar33 == 0.0) && (bVar10 = bVar28, !NAN(dVar33))) && (dVar37 == 0.0)) && (!NAN(dVar37)))
    {
      bVar10 = dVar36 == 0.0;
    }
    fVar31 = *(float *)(lVar17 + 0x50);
    fVar47 = *(float *)((longlong)*param_1 + 0x24);
    local_3b0 = (double *)CONCAT44(local_3b0._4_4_,fVar47);
    fVar45 = 0.0;
    if (0.0 <= fVar29) {
      fVar45 = fVar29;
    }
    dVar43 = dVar35 * dVar35 + dVar34 * dVar34 + dVar59 * dVar59;
    dVar38 = (double)(fVar45 * fVar45 * 1.01);
    if ((dVar38 < dVar43) || (bVar10)) {
      local_388 = 0;
      if (0.0 <= fVar31) {
        local_388 = (ulonglong)(uint)fVar31;
      }
      fVar45 = (float)local_388;
      uStack_380 = 0;
      dVar60 = dVar59;
      dVar39 = dVar34;
      dVar68 = dVar35;
      fVar31 = fVar47;
      if ((fVar45 != 0.0) || (NAN(fVar45))) {
        if (((dVar43 != 1.0) ||
            (local_378 = dVar35, local_370 = dVar59, local_368 = dVar34, NAN(dVar43))) &&
           (local_378 = DAT_14c8464f0, local_370 = DAT_14c8464e8, local_368 = DAT_14c8464e0,
           9.99999993922529e-09 <= dVar43)) {
          dVar65 = 1.0 / SQRT(dVar43);
          local_378 = dVar35 * dVar65;
          local_370 = dVar59 * dVar65;
          local_368 = dVar65 * dVar34;
        }
        dVar65 = (double)-fVar45;
        local_378 = local_378 * dVar65;
        local_370 = local_370 * dVar65;
        local_368 = local_368 * dVar65;
      }
      else {
        local_368 = DAT_14c8464e0;
        local_370 = DAT_14c8464e8;
        local_378 = DAT_14c8464f0;
      }
      do {
        if (fVar31 < 1e-06) {
          fVar31 = (float)(dVar68 * dVar68 + dVar39 * dVar39 + dVar60 * dVar60);
          local_388 = CONCAT44(0xffffffff,-(uint)(fVar45 == 0.0));
          uVar9 = local_388;
          uStack_380 = 0xffffffffffffffff;
          local_388._0_1_ = (byte)-(uint)(fVar45 == 0.0);
          bVar21 = -(100.0 < fVar31) | (byte)local_388;
          local_398._8_8_ = extraout_XMM0_Qb_00;
          local_398._0_8_ = DAT_14c8464f0;
          local_388 = uVar9;
          if ((0.0001 < fVar31 & bVar21) == 0) {
            dVar60 = DAT_14c8464e8;
            dVar39 = DAT_14c8464e0;
            dVar68 = DAT_14c8464f0;
          }
          goto LAB_1404a5b92;
        }
        auVar48 = ZEXT812(0x3cf83e10);
        if (fVar31 * 0.5 <= 0.030303031) {
          auVar48._4_8_ = 0;
          auVar48._0_4_ = fVar31 * 0.5;
        }
        local_3a8._0_4_ = auVar48._0_4_;
        local_3a8._8_4_ = auVar48._8_4_;
        fVar67 = (float)(-(uint)(fVar31 <= 0.030303031) & (uint)fVar31 |
                        ~-(uint)(fVar31 <= 0.030303031) & local_3a8._0_4_);
        local_3b8 = local_370 - dVar60 * 16.0;
        local_3a8._0_8_ = (undefined8)fVar67;
        local_3a8._12_4_ = 0;
        local_3c8._0_8_ = (local_378 - dVar68 * 16.0) * (double)local_3a8._0_8_;
        local_3c8._8_4_ = local_3a8._8_4_;
        local_3c8._12_4_ = 0;
        dVar68 = dVar68 + (double)local_3c8._0_8_;
        dVar60 = dVar60 + local_3b8 * (double)local_3a8._0_8_;
        dVar39 = dVar39 + (local_368 - dVar39 * 16.0) * (double)local_3a8._0_8_;
        fVar31 = fVar31 - fVar67;
      } while (0.0 < dVar68 * dVar35 + dVar39 * dVar34 + dVar59 * dVar60);
      local_398._8_8_ = 0;
      local_398._0_8_ = DAT_14c8464f0;
      dVar60 = DAT_14c8464e8;
      dVar39 = DAT_14c8464e0;
      dVar68 = DAT_14c8464f0;
LAB_1404a5b92:
      local_3a8._0_8_ = DAT_14c8464e8;
      local_3c8._0_8_ = DAT_14c8464e0;
      if (((dVar38 < dVar43) &&
          (dVar68 * dVar68 + dVar39 * dVar39 + dVar60 * dVar60 < (double)(fVar29 * fVar29))) &&
         (0.0 < dVar36 * dVar35 + dVar33 * dVar34 + dVar59 * dVar37)) {
        if ((dVar43 != 1.0) || (dVar39 = dVar34, NAN(dVar43))) {
          uVar62 = local_398._0_4_;
          uVar63 = local_398._4_4_;
          dVar39 = DAT_14c8464e0;
          dVar60 = DAT_14c8464e8;
          if (9.99999993922529e-09 <= dVar43) {
            dVar39 = 1.0 / SQRT(dVar43);
            dVar35 = dVar35 * dVar39;
            dVar59 = dVar59 * dVar39;
            dVar39 = dVar34 * dVar39;
            goto LAB_1404a5c76;
          }
        }
        else {
LAB_1404a5c76:
          uVar62 = SUB84(dVar35,0);
          uVar63 = (undefined4)((ulonglong)dVar35 >> 0x20);
          dVar60 = dVar59;
        }
        dVar43 = (double)fVar29;
        dVar68 = (double)CONCAT44(uVar63,uVar62) * dVar43;
        dVar60 = dVar60 * dVar43;
        dVar39 = dVar39 * dVar43;
      }
    }
    else {
      dVar68 = dVar36 * dVar36 + dVar33 * dVar33 + dVar37 * dVar37;
      if (((dVar68 != 1.0) || (dVar60 = dVar36, dVar65 = dVar37, dVar39 = dVar33, NAN(dVar68))) &&
         (dVar60 = DAT_14c8464f0, dVar65 = DAT_14c8464e8, dVar39 = DAT_14c8464e0,
         9.99999993922529e-09 <= dVar68)) {
        dVar68 = 1.0 / SQRT(dVar68);
        dVar60 = dVar36 * dVar68;
        dVar65 = dVar37 * dVar68;
        dVar39 = dVar68 * dVar33;
      }
      dVar43 = (double)(float)SQRT(dVar43);
      fVar31 = fVar47 * 8.0;
      if (1.0 <= fVar31) {
        fVar31 = 1.0;
      }
      dVar54 = (double)fVar31;
      dVar68 = dVar35 - (dVar35 - dVar60 * dVar43) * dVar54;
      dVar60 = dVar59 - (dVar59 - dVar65 * dVar43) * dVar54;
      dVar39 = dVar34 - (dVar34 - dVar39 * dVar43) * dVar54;
    }
    dVar34 = dVar60;
    dVar35 = dVar39;
    dVar43 = dVar68;
    if (!bVar10) {
      dVar43 = dVar68 * dVar68 + dVar39 * dVar39 + dVar60 * dVar60;
      if (dVar38 < dVar43) {
        fVar29 = (float)SQRT(dVar43);
      }
      dVar34 = DAT_14c8464e8;
      dVar35 = DAT_14c8464e0;
      dVar43 = DAT_14c8464f0;
      if (0.0001 <= fVar29) {
        dVar43 = (double)fVar47;
        dVar35 = dVar39 + dVar33 * dVar43;
        dVar34 = dVar60 + dVar37 * dVar43;
        dVar43 = dVar68 + dVar36 * dVar43;
        dVar33 = (double)fVar29;
        dVar36 = dVar43 * dVar43 + dVar35 * dVar35 + dVar34 * dVar34;
        if (dVar33 * dVar33 < dVar36) {
          dVar33 = (1.0 / SQRT(dVar36)) * dVar33;
          dVar34 = dVar34 * dVar33;
          dVar35 = dVar35 * dVar33;
          dVar43 = dVar43 * dVar33;
        }
      }
    }
    fVar29 = (float)SQRT(dVar43 * dVar43 + dVar35 * dVar35 + dVar34 * dVar34);
    *(float *)(param_2 + 9) = fVar29;
    dVar33 = DAT_14c8464e8;
    dVar36 = DAT_14c8464f0;
    dVar37 = DAT_14c8464e0;
    if (1e-08 < fVar29) {
      dVar37 = (double)(1.0 / fVar29);
      dVar33 = dVar34 * dVar37;
      dVar36 = dVar43 * dVar37;
      dVar37 = dVar35 * dVar37;
    }
    dVar43 = 0.0;
    if ((((dVar33 != 0.0) || (NAN(dVar33))) || (dVar37 != 0.0)) || (NAN(dVar37))) {
      dVar43 = atan2(dVar33,dVar37);
      dVar43 = dVar43 * 57.29577951308232;
    }
    dVar34 = SQRT(dVar37 * dVar37 + dVar33 * dVar33);
    dVar33 = 0.0;
    if (((dVar36 != 0.0) || (NAN(dVar36))) || ((dVar34 != 0.0 || (NAN(dVar34))))) {
      dVar34 = atan2(dVar36,dVar34);
      dVar34 = dVar34 * 57.29577951308232;
    }
    else {
      dVar34 = 0.0;
    }
  }
  param_2[6] = dVar34;
  param_2[7] = dVar43;
  param_2[8] = dVar33;
  dVar43 = (double)FUN_144719204(dVar34);
  dVar34 = (double)FUN_144719204(param_2[7]);
  dVar33 = sin(dVar43 * 0.017453292519943295);
  dVar43 = cos(dVar43 * 0.017453292519943295);
  dVar35 = sin(dVar34 * 0.017453292519943295);
  dVar34 = cos(dVar34 * 0.017453292519943295);
  dVar36 = (double)(*(float *)((longlong)*param_1 + 0x24) * *(float *)(param_2 + 9));
  aplStack_1f0[1] = (longlong *)(dVar33 * dVar36);
  aplStack_1f0[0] = (longlong *)(dVar35 * dVar43 * dVar36);
  local_1f8 = (longlong *)(dVar34 * dVar43 * dVar36);
  FUN_1402f0636(param_2 + 0x1a);
  if (ABS(fVar32 - *(float *)(param_2 + 9)) <= 0.1) {
    *(undefined4 *)((longlong)param_2 + 0x4c) = 0;
  }
LAB_1404a487b:
  dVar43 = *param_1;
  if (0.0 < *(float *)((longlong)dVar43 + 0x24)) {
    lVar17 = *(longlong *)((longlong)dVar43 + 0x18);
    for (dVar34 = param_2[4] - *(double *)(lVar17 + 0x20); 180.0 < dVar34; dVar34 = dVar34 + -360.0)
    {
    }
    dVar33 = param_2[5] - *(double *)(lVar17 + 0x28);
    for (; dVar34 < -180.0; dVar34 = dVar34 + 360.0) {
    }
    dVar35 = param_2[3] - *(double *)(lVar17 + 0x18);
    param_2[1] = dVar34 / (double)*(float *)((longlong)dVar43 + 0x24);
    for (; 180.0 < dVar33; dVar33 = dVar33 + -360.0) {
    }
    for (; dVar33 < -180.0; dVar33 = dVar33 + 360.0) {
    }
    param_2[2] = dVar33 / (double)*(float *)((longlong)dVar43 + 0x24);
    for (; 180.0 < dVar35; dVar35 = dVar35 + -360.0) {
    }
    for (; dVar35 < -180.0; dVar35 = dVar35 + 360.0) {
    }
    *param_2 = dVar35 / (double)*(float *)((longlong)dVar43 + 0x24);
    dVar43 = (double)FUN_144719204(lVar17,0x4076800000000000);
    dVar34 = (double)(~-(ulonglong)(dVar43 < 0.0) & (ulonglong)dVar43 |
                     (ulonglong)(dVar43 + 360.0) & -(ulonglong)(dVar43 < 0.0));
    dVar43 = (double)FUN_144719204(param_2[5],0x4076800000000000);
    dVar33 = (double)(~-(ulonglong)(dVar43 < 0.0) & (ulonglong)dVar43 |
                     (ulonglong)(dVar43 + 360.0) & -(ulonglong)(dVar43 < 0.0));
    dVar43 = (double)FUN_144719204(param_2[3],0x4076800000000000);
    dVar43 = (double)(~-(ulonglong)(dVar43 < 0.0) & (ulonglong)dVar43 |
                     (ulonglong)(dVar43 + 360.0) & -(ulonglong)(dVar43 < 0.0));
    param_2[3] = (double)(~-(ulonglong)(180.0 < dVar43) & (ulonglong)dVar43 |
                         (ulonglong)(dVar43 + -360.0) & -(ulonglong)(180.0 < dVar43));
    param_2[4] = (double)(~-(ulonglong)(180.0 < dVar34) & (ulonglong)dVar34 |
                         (ulonglong)(dVar34 + -360.0) & -(ulonglong)(180.0 < dVar34));
    param_2[5] = (double)(~-(ulonglong)(180.0 < dVar33) & (ulonglong)dVar33 |
                         (ulonglong)(dVar33 + -360.0) & -(ulonglong)(180.0 < dVar33));
  }
  if ((local_f0 ^ (ulonglong)auStack_3f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
code_r0x0001404a2eb2:
  iVar14 = *(int *)(lVar27 + 0x10 + lVar17 * 0x18);
  if (iVar14 == -1) goto LAB_1404a331a;
  goto LAB_1404a2e81;
}



// FUNCTION 1404a739e FUN_1404a739e body=3042 status=ok
// SIG undefined FUN_1404a739e(void)

ulonglong * FUN_1404a739e(longlong param_1,ulonglong *param_2,ulonglong *param_3)

{
  longlong *plVar1;
  uint *puVar2;
  undefined4 *puVar3;
  LPCRITICAL_SECTION lpCriticalSection;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  DWORD DVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  DWORD dwTlsIndex;
  DWORD DVar15;
  ulonglong *puVar16;
  LPVOID lpTlsValue;
  longlong lVar17;
  byte bVar18;
  uint uVar19;
  ulonglong uVar20;
  uint uVar21;
  uint uVar22;
  ulonglong uVar23;
  int iVar24;
  undefined4 uVar25;
  longlong lVar26;
  ulonglong uVar27;
  bool bVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined1 auStack_178 [32];
  undefined8 local_158;
  undefined8 local_150;
  ulonglong local_140;
  ulonglong local_138;
  longlong *local_130;
  ulonglong *local_128;
  ulonglong *local_120;
  ulonglong *local_118;
  undefined8 *local_110;
  undefined8 local_108;
  longlong local_100;
  char local_f8;
  undefined8 local_f0;
  ulonglong local_e8;
  longlong local_e0;
  undefined8 uStack_d8;
  undefined1 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  ulonglong uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_178;
  if (*param_3 == 0) {
    *param_2 = 0;
    *(undefined4 *)(param_2 + 1) = 0;
    goto LAB_1404a7523;
  }
  lpCriticalSection = *(LPCRITICAL_SECTION *)(param_1 + 0x180);
  EnterCriticalSection(lpCriticalSection);
  plVar1 = (longlong *)(param_1 + 0x1b8);
  uVar11 = (uint)param_3[1];
  uVar19 = ((uint)(*param_3 >> 0x14) & 0xffff ^ (uint)(*param_3 >> 4)) * -0x7a143595;
  uVar19 = (uVar19 >> 0xd ^ uVar19) * -0x3d4d51cb;
  uVar19 = uVar11 >> 0xd ^ (uVar19 >> 0x10 ^ uVar19) - uVar11;
  uVar21 = uVar19 << 8 ^ (-0x61c88647 - uVar11) - uVar19;
  uVar22 = uVar21 >> 0xd ^ (uVar11 - uVar19) - uVar21;
  uVar11 = uVar22 >> 0xc ^ (uVar19 - uVar21) - uVar22;
  uVar19 = uVar11 << 0x10 ^ (uVar21 - uVar22) - uVar11;
  uVar22 = uVar19 >> 5 ^ (uVar22 - uVar11) - uVar19;
  uVar21 = uVar22 >> 3 ^ (uVar11 - uVar19) - uVar22;
  uVar11 = uVar21 << 10 ^ (uVar19 - uVar22) - uVar21;
  iVar12 = FUN_1404a7f82(plVar1,uVar11 >> 0xf ^ uVar22 - (uVar21 + uVar11),param_3);
  if (iVar12 == -1) {
LAB_1404a7576:
    if ((((*(int *)(param_1 + 0x4c) == 0) ||
         ((((uVar11 = *(uint *)(param_1 + 0x48), (int)uVar11 < 0 || (DAT_14c9647dc <= (int)uVar11))
           || (lVar26 = (ulonglong)((uVar11 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8), lVar26 == 0)
           ) || ((*(int *)(lVar26 + 0x10) != *(int *)(param_1 + 0x4c) ||
                 ((*(uint *)(lVar26 + 8) & 0x10200000) != 0)))))) ||
        (*(longlong *)(param_1 + 0x60) == 0)) || (*(int *)(param_1 + 0x20) < 1)) {
      *param_2 = 0;
      *(undefined4 *)(param_2 + 1) = 0;
    }
    else {
      dwTlsIndex = DAT_14c7585d0;
      local_130 = plVar1;
      if (DAT_14c7585d0 == 0xffffffff) {
        dwTlsIndex = TlsAlloc();
        DVar15 = 0xffffffff;
        LOCK();
        bVar28 = DAT_14c7585d0 != 0xffffffff;
        DVar10 = dwTlsIndex;
        if (bVar28) {
          DVar15 = DAT_14c7585d0;
          DVar10 = DAT_14c7585d0;
        }
        DAT_14c7585d0 = DVar10;
        UNLOCK();
        if (bVar28) {
          TlsFree(dwTlsIndex);
          dwTlsIndex = DVar15;
        }
      }
      lpTlsValue = TlsGetValue(dwTlsIndex);
      if (lpTlsValue == (LPVOID)0x0) {
        lpTlsValue = (LPVOID)FUN_140036a08(&local_c8);
        FUN_140fddf04(lpTlsValue);
        TlsSetValue(dwTlsIndex,lpTlsValue);
      }
      local_110 = (undefined8 *)((longlong)lpTlsValue + 0x10);
      local_108 = *(undefined8 *)((longlong)lpTlsValue + 0x10);
      local_100 = *(longlong *)((longlong)lpTlsValue + 0x20);
      local_f8 = '\0';
      local_f0 = *(undefined8 *)((longlong)lpTlsValue + 0x28);
      *(undefined8 ***)((longlong)lpTlsValue + 0x28) = &local_110;
      *(int *)((longlong)lpTlsValue + 0x30) = *(int *)((longlong)lpTlsValue + 0x30) + 1;
      uVar25 = 0;
      if ((((*param_3 == 0) || (*(int *)(param_1 + 0x4c) == 0)) ||
          ((uVar11 = *(uint *)(param_1 + 0x48), (int)uVar11 < 0 ||
           (((DAT_14c9647dc <= (int)uVar11 ||
             (lVar26 = (ulonglong)((uVar11 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8), lVar26 == 0))
            || (*(int *)(lVar26 + 0x10) != *(int *)(param_1 + 0x4c))))))) ||
         ((((*(uint *)(lVar26 + 8) & 0x10200000) != 0 || (*(longlong *)(param_1 + 0x60) == 0)) ||
          (*(int *)(param_1 + 0x20) < 1)))) {
LAB_1404a7ea7:
        *param_2 = 0;
      }
      else {
        lVar26 = param_1 + 8;
        local_a8 = 0;
        uStack_a0 = 0;
        local_b8 = 0;
        uStack_b0 = 0;
        local_c8 = 0;
        uStack_c0 = 0;
        iVar12 = 0;
        FUN_144a08bfc(lVar26,param_3,0);
        local_e8 = *param_3;
        local_120 = param_2;
        if ((local_e8 == 0) || ((int)param_3[1] < 1)) {
          local_e8 = 0;
        }
        else {
          iVar12 = (int)param_3[1] + -1;
          if (DAT_14c950c29 == 1) {
            FUN_1456cec3c();
          }
        }
        local_e0 = CONCAT44(local_e0._4_4_,iVar12);
        iVar12 = 0;
        FUN_144a08bfc(lVar26,&local_e8,0,&local_c8);
        if (((longlong *)*param_3 == (longlong *)0x0) ||
           (uVar27 = param_3[1], iVar13 = (**(code **)(*(longlong *)*param_3 + 0x310))(),
           iVar13 + -1 <= (int)uVar27)) {
          local_e8 = 0;
        }
        else {
          iVar12 = (int)param_3[1] + 1;
          local_e8 = *param_3;
          if ((local_e8 != 0) && (DAT_14c950c29 != 0)) {
            FUN_1456cec3c();
          }
        }
        local_e0 = CONCAT44(local_e0._4_4_,iVar12);
        FUN_144a08bfc(lVar26,&local_e8,0,&local_a8);
        plVar1 = (longlong *)*param_3;
        if (plVar1 == (longlong *)0x0) {
          fVar30 = 0.0;
        }
        else {
          fVar29 = (float)(**(code **)(*plVar1 + 0x2b0))(plVar1);
          fVar30 = 0.0;
          if (0.0 < fVar29) {
            iVar13 = (**(code **)(*plVar1 + 0x310))(plVar1);
            iVar12 = 2;
            if (2 < iVar13) {
              iVar12 = iVar13;
            }
            fVar30 = (float)(**(code **)(*plVar1 + 0x2b0))(plVar1);
            fVar30 = ((float)iVar12 + -1.0) / fVar30;
          }
        }
        local_e8 = CONCAT44(local_e8._4_4_,(undefined4)uStack_b0);
        local_e0 = 0;
        uStack_d8 = 0;
        local_d0 = 0xf;
        local_150 = local_a8;
        local_158 = local_c8;
        FUN_14065fa92(&local_e8,uStack_b0 & 0xffffffff,fVar30,local_b8);
        if ((longlong)*(int *)(param_1 + 0x1a8) == 0) {
          local_140 = 0;
          fVar30 = 3.4028235e+38;
          uVar27 = 0;
        }
        else {
          puVar16 = *(ulonglong **)(param_1 + 0x1a0);
          local_118 = puVar16 + (longlong)*(int *)(param_1 + 0x1a8) * 4;
          uVar27 = 0;
          fVar30 = 3.4028235e+38;
          local_140 = 0;
          do {
            uVar20 = puVar16[3];
            local_138 = uVar27;
            if ((longlong)(int)uVar20 < 1) {
              uVar20 = 0;
              uVar11 = 0;
              fVar29 = 3.4028235e+38;
            }
            else {
              uVar23 = puVar16[2];
              uVar11 = 0xffffffff;
              lVar26 = 0;
              fVar31 = 3.4028235e+38;
              local_128 = puVar16;
              do {
                fVar29 = (float)FUN_1404a801e(&local_e8,uVar23);
                uVar27 = local_138;
                uVar19 = (uint)lVar26;
                if (fVar31 <= fVar29) {
                  fVar29 = fVar31;
                  uVar19 = uVar11;
                }
                uVar11 = uVar19;
                lVar26 = lVar26 + 1;
                uVar23 = uVar23 + 0x20;
                fVar31 = fVar29;
              } while ((int)uVar20 != lVar26);
              puVar16 = local_128;
              if (uVar11 == 0xffffffff) {
                uVar20 = 0;
                uVar11 = 0;
                fVar29 = 3.4028235e+38;
              }
              else {
                uVar20 = *local_128;
                if ((uVar20 != 0) && (DAT_14c950c29 != 0)) {
                  FUN_1456cec3c(uVar20);
                  puVar16 = local_128;
                }
              }
            }
            if (fVar29 < fVar30) {
              fVar30 = fVar29;
              if (DAT_14c950c29 == 1) {
                if (uVar20 == 0) {
                  uVar20 = 0;
                }
                else {
                  FUN_1456cec3c(uVar20);
                }
                local_140 = (ulonglong)uVar11;
                uVar27 = uVar20;
              }
              else {
                local_140 = (ulonglong)uVar11;
                uVar27 = uVar20;
              }
            }
            puVar16 = puVar16 + 4;
          } while (puVar16 != local_118);
        }
        if (local_e0 != 0) {
          FUN_1400020a8();
        }
        if (uVar27 == 0) {
          uVar25 = (undefined4)local_140;
          param_2 = local_120;
          goto LAB_1404a7ea7;
        }
        if (*(int *)(param_1 + 0x1ec) == 0) {
          uVar11 = *(uint *)(param_1 + 0x1c0);
          uVar20 = (ulonglong)uVar11;
          *(uint *)(param_1 + 0x1c0) = uVar11 + 1;
          if (*(uint *)(param_1 + 0x1c4) == uVar11) {
            FUN_140044672(local_130,uVar11);
          }
          iVar12 = *(int *)(param_1 + 0x1e0);
          if (iVar12 == 0) {
            iVar13 = -1;
          }
          else {
            iVar13 = iVar12 + 0x1e;
            if (-1 < iVar12 + -1) {
              iVar13 = iVar12 + -1;
            }
            iVar13 = iVar13 >> 5;
          }
          lVar17 = param_1 + 0x1c8;
          iVar14 = iVar12 + 1;
          iVar24 = iVar12 + 0x1f;
          if (-1 < iVar12) {
            iVar24 = iVar12;
          }
          if (iVar24 >> 5 == iVar13) {
            *(int *)(param_1 + 0x1e0) = iVar14;
          }
          else {
            if (*(int *)(param_1 + 0x1e4) <= iVar12) {
              local_138 = uVar20;
              if (iVar12 + 0x20U < 0xa0) {
                iVar14 = 0x80;
                iVar13 = iVar12;
              }
              else {
                uVar11 = iVar12 + 0x20U >> 5;
                if (*(int *)(param_1 + 0x1e4) + 0x1fU < 0xa0) {
                  uVar19 = 4;
                  if (4 < uVar11) {
                    uVar19 = uVar11;
                  }
                }
                else {
                  uVar19 = (uVar11 * 3 >> 3) + uVar11 + 0x10;
                }
                uVar20 = FUN_144a3809e(uVar19 << 2,0);
                iVar13 = (int)(uVar20 >> 2);
                iVar14 = -0x20;
                if ((int)uVar11 <= iVar13) {
                  iVar14 = iVar13 << 5;
                }
                iVar13 = *(int *)(param_1 + 0x1e0);
              }
              *(int *)(param_1 + 0x1e4) = iVar14;
              FUN_1446efbd8(lVar17,iVar13);
              iVar14 = *(int *)(param_1 + 0x1e0) + 1;
              uVar20 = local_138;
            }
            iVar13 = iVar14 + 0x1f;
            if (-1 < iVar14) {
              iVar13 = iVar14;
            }
            *(int *)(param_1 + 0x1e0) = iVar14;
            if (iVar14 % 0x20 != 0) {
              lVar26 = *(longlong *)(param_1 + 0x1d8);
              if (*(longlong *)(param_1 + 0x1d8) == 0) {
                lVar26 = lVar17;
              }
              bVar18 = -(char)(iVar14 % 0x20);
              *(uint *)(lVar26 + (longlong)(iVar13 >> 5) * 4) =
                   (uint)(*(int *)(lVar26 + (longlong)(iVar13 >> 5) * 4) << (bVar18 & 0x1f)) >>
                   (bVar18 & 0x1f);
            }
          }
          lVar26 = (longlong)(int)uVar20;
          if (*(longlong *)(param_1 + 0x1d8) != 0) {
            lVar17 = *(longlong *)(param_1 + 0x1d8);
          }
          bVar18 = (byte)iVar12 & 0x1f;
          puVar2 = (uint *)(lVar17 + (longlong)(iVar24 >> 5) * 4);
          *puVar2 = *puVar2 & (-2 << bVar18 | 0xfffffffeU >> 0x20 - bVar18);
        }
        else {
          uVar20 = (ulonglong)*(uint *)(param_1 + 0x1e8);
          lVar26 = (longlong)(int)*(uint *)(param_1 + 0x1e8);
          iVar12 = *(int *)(*(longlong *)(param_1 + 0x1b8) + 4 + lVar26 * 0x30);
          *(int *)(param_1 + 0x1e8) = iVar12;
          iVar13 = *(int *)(param_1 + 0x1ec) + -1;
          *(int *)(param_1 + 0x1ec) = iVar13;
          if (iVar13 != 0) {
            *(undefined4 *)(*(longlong *)(param_1 + 0x1b8) + (longlong)iVar12 * 0x30) = 0xffffffff;
          }
        }
        iVar12 = (int)uVar20;
        lVar17 = param_1 + 0x1c8;
        if (*(longlong *)(param_1 + 0x1d8) != 0) {
          lVar17 = *(longlong *)(param_1 + 0x1d8);
        }
        iVar13 = iVar12 + 0x1f;
        if (-1 < iVar12) {
          iVar13 = iVar12;
        }
        puVar2 = (uint *)(lVar17 + (longlong)(iVar13 >> 5) * 4);
        *puVar2 = *puVar2 | 1 << ((byte)uVar20 & 0x1f);
        puVar16 = (ulonglong *)(*(longlong *)(param_1 + 0x1b8) + lVar26 * 0x30);
        uVar23 = *param_3;
        *(ulonglong *)(*(longlong *)(param_1 + 0x1b8) + lVar26 * 0x30) = uVar23;
        if ((uVar23 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
        }
        bVar18 = DAT_14c950c29;
        uVar11 = (uint)param_3[1];
        *(uint *)(puVar16 + 1) = uVar11;
        puVar16[2] = uVar27;
        if ((bVar18 & 1) != 0) {
          FUN_1456cec3c(uVar27);
          uVar11 = (uint)puVar16[1];
        }
        *(int *)(puVar16 + 3) = (int)local_140;
        *(float *)(puVar16 + 4) = fVar30;
        *(undefined4 *)(puVar16 + 5) = 0xffffffff;
        uVar19 = ((uint)(*puVar16 >> 0x14) & 0xffff ^ (uint)(*puVar16 >> 4)) * -0x7a143595;
        uVar19 = (uVar19 >> 0xd ^ uVar19) * -0x3d4d51cb;
        uVar19 = uVar11 >> 0xd ^ (uVar19 >> 0x10 ^ uVar19) - uVar11;
        uVar21 = uVar19 << 8 ^ (-0x61c88647 - uVar11) - uVar19;
        uVar22 = uVar21 >> 0xd ^ (uVar11 - uVar19) - uVar21;
        uVar11 = uVar22 >> 0xc ^ (uVar19 - uVar21) - uVar22;
        uVar19 = uVar11 << 0x10 ^ (uVar21 - uVar22) - uVar11;
        uVar21 = uVar19 >> 5 ^ (uVar22 - uVar11) - uVar19;
        uVar11 = uVar21 >> 3 ^ (uVar11 - uVar19) - uVar21;
        uVar19 = uVar11 << 10 ^ (uVar19 - uVar21) - uVar11;
        uVar11 = uVar19 >> 0xf ^ uVar21 - (uVar11 + uVar19);
        iVar13 = 1;
        if (*(int *)(param_1 + 0x1c0) - *(int *)(param_1 + 0x1ec) == 1) {
          uVar19 = 1;
LAB_1404a7b60:
          if (((int)uVar19 < 1) || (iVar13 <= *(int *)(param_1 + 0x200))) {
            uVar11 = *(int *)(param_1 + 0x200) - 1U & uVar11;
            *(uint *)((longlong)puVar16 + 0x2c) = uVar11;
            lVar26 = *(longlong *)(param_1 + 0x1f8);
            if (*(longlong *)(param_1 + 0x1f8) == 0) {
              lVar26 = param_1 + 0x1f0;
            }
            *(undefined4 *)(puVar16 + 5) =
                 *(undefined4 *)
                  (lVar26 + ((longlong)*(int *)(param_1 + 0x200) - 1U & (longlong)(int)uVar11) * 4);
            lVar26 = *(longlong *)(param_1 + 0x1f8);
            if (*(longlong *)(param_1 + 0x1f8) == 0) {
              lVar26 = param_1 + 0x1f0;
            }
            *(int *)(lVar26 + ((longlong)*(int *)(param_1 + 0x200) - 1U & (longlong)(int)uVar11) * 4
                    ) = iVar12;
          }
          else {
            *(int *)(param_1 + 0x200) = iVar13;
            FUN_1404a84a8(local_130);
          }
        }
        else {
          iVar14 = FUN_1404a7f82(local_130,uVar11,puVar16);
          if (iVar14 == -1) {
            uVar19 = *(int *)(param_1 + 0x1c0) - *(int *)(param_1 + 0x1ec);
            if (3 < uVar19) {
              uVar20 = (ulonglong)(uVar19 & 0xfffffffe) + 0xf;
              lVar26 = 0x3f;
              if (uVar20 != 0) {
                for (; uVar20 >> lVar26 == 0; lVar26 = lVar26 + -1) {
                }
              }
              iVar13 = 1 << ((byte)lVar26 & 0x1f);
            }
            goto LAB_1404a7b60;
          }
          lVar26 = *local_130;
          lVar17 = (longlong)iVar14 * 0x30;
          uVar23 = *puVar16;
          uVar25 = *(undefined4 *)((longlong)puVar16 + 4);
          uVar7 = puVar16[1];
          uVar4 = *(undefined4 *)((longlong)puVar16 + 0xc);
          uVar8 = puVar16[2];
          uVar5 = *(undefined4 *)((longlong)puVar16 + 0x14);
          uVar9 = puVar16[3];
          uVar6 = *(undefined4 *)((longlong)puVar16 + 0x1c);
          *(ulonglong *)(lVar26 + 0x20 + lVar17) = puVar16[4];
          puVar3 = (undefined4 *)(lVar26 + 0x10 + lVar17);
          *puVar3 = (int)uVar8;
          puVar3[1] = uVar5;
          puVar3[2] = (int)uVar9;
          puVar3[3] = uVar6;
          puVar3 = (undefined4 *)(lVar26 + lVar17);
          *puVar3 = (int)uVar23;
          puVar3[1] = uVar25;
          puVar3[2] = (int)uVar7;
          puVar3[3] = uVar4;
          FUN_1470d9fb8(local_130,uVar20 & 0xffffffff);
        }
        param_2 = local_120;
        *local_120 = uVar27;
        uVar25 = (undefined4)local_140;
        if (DAT_14c950c29 == 1) {
          FUN_1456cec3c(uVar27);
        }
      }
      *(undefined4 *)(param_2 + 1) = uVar25;
      if (local_f8 == '\0') {
        local_f8 = '\x01';
        *(int *)(local_110 + 4) = *(int *)(local_110 + 4) + -1;
        if (local_100 != local_110[2]) {
          FUN_14004673c();
        }
        *local_110 = local_108;
        local_110[3] = local_f0;
      }
    }
  }
  else {
    lVar26 = *plVar1 + (longlong)iVar12 * 0x30;
    if ((lVar26 == 0) ||
       (puVar16 = (ulonglong *)((longlong)iVar12 * 0x30 + *plVar1 + 0x10),
       puVar16 == (ulonglong *)0x0)) goto LAB_1404a7576;
    uVar27 = *puVar16;
    *param_2 = uVar27;
    if ((DAT_14c950c29 == 1) && (uVar27 != 0)) {
      FUN_1456cec3c();
    }
    *(undefined4 *)(param_2 + 1) = *(undefined4 *)(lVar26 + 0x18);
  }
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(lpCriticalSection);
  }
LAB_1404a7523:
  if ((local_90 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1404a7f82 FUN_1404a7f82 body=156 status=ok
// SIG undefined FUN_1404a7f82(void)

int FUN_1404a7f82(longlong *param_1,uint param_2,longlong *param_3)

{
  longlong lVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar3 != -1) {
      lVar4 = *param_1;
      bVar2 = DAT_14c950c29;
      do {
        lVar1 = *param_3;
        if ((lVar1 != 0 & bVar2) == 1) {
          FUN_1456cec3c(lVar1);
          bVar2 = DAT_14c950c29;
        }
        plVar5 = (longlong *)(lVar4 + (longlong)iVar3 * 0x30);
        if ((*plVar5 == lVar1) && ((int)plVar5[1] == (int)param_3[1])) {
          return iVar3;
        }
        lVar4 = *param_1;
        iVar3 = *(int *)(lVar4 + 0x28 + (longlong)iVar3 * 0x30);
      } while (iVar3 != -1);
    }
  }
  return -1;
}



// FUNCTION 1404a801e FUN_1404a801e body=760 status=ok
// SIG undefined FUN_1404a801e(void)

undefined8 FUN_1404a801e(uint *param_1,uint *param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  byte bVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  undefined4 uVar13;
  float fVar14;
  
  uVar2 = *param_1;
  if (uVar2 == *param_2) {
    bVar9 = (byte)param_2[6];
    lVar7 = 0;
    uVar3 = param_2[4];
    if (((0 < (int)uVar2) && ((bVar9 & 1) != 0)) && (0 < (int)uVar3)) {
      lVar7 = (ulonglong)(((uint)bVar9 + (uint)bVar9 & 4) * uVar2) * 8 + *(longlong *)(param_2 + 2);
    }
    bVar1 = (byte)param_1[6];
    lVar5 = 0;
    if ((0 < (int)uVar2) && ((bVar1 & 1) != 0)) {
      if ((int)param_1[4] < 1) {
        lVar5 = 0;
      }
      else {
        lVar5 = (ulonglong)(((uint)bVar1 + (uint)bVar1 & 4) * uVar2) * 8 +
                *(longlong *)(param_1 + 2);
      }
    }
    uVar12 = FUN_1404a8316(uVar2,lVar5,lVar7);
    lVar7 = *(longlong *)(param_2 + 2);
    lVar5 = 0;
    if ((bVar9 & 2) != 0) {
      lVar5 = lVar7;
    }
    uVar13 = (undefined4)((ulonglong)uVar12 >> 0x20);
    if ((int)uVar3 < 1) {
      lVar5 = 0;
    }
    fVar14 = 0.0;
    if (((0 < (int)uVar2) && ((bVar1 & 2) != 0)) &&
       ((0 < (int)param_1[4] && (lVar6 = *(longlong *)(param_1 + 2), lVar5 != 0 && lVar6 != 0)))) {
      lVar8 = 0;
      do {
        fVar14 = (float)((double)(float)((double)(float)((double)(float)((double)fVar14 +
                                                                        ABS(*(double *)
                                                                             (lVar6 + lVar8) -
                                                                            *(double *)
                                                                             (lVar5 + lVar8))) +
                                                        ABS(*(double *)(lVar6 + 8 + lVar8) -
                                                            *(double *)(lVar5 + 8 + lVar8))) +
                                        ABS(*(double *)(lVar6 + 0x10 + lVar8) -
                                            *(double *)(lVar5 + 0x10 + lVar8))) +
                        ABS(*(double *)(lVar6 + 0x18 + lVar8) - *(double *)(lVar5 + 0x18 + lVar8)));
        lVar8 = lVar8 + 0x20;
      } while ((ulonglong)uVar2 << 5 != lVar8);
    }
    if (((bVar9 & 4) == 0) || ((int)uVar2 < 1 || (int)uVar3 < 1)) {
      lVar5 = 0;
    }
    else {
      lVar5 = lVar7 + (ulonglong)(((bVar9 & 1) * 3 + (bVar9 & 2) * 2) * uVar2) * 8;
    }
    lVar6 = 0;
    if ((0 < (int)uVar2) && ((bVar1 & 4) != 0)) {
      if ((int)param_1[4] < 1) {
        lVar6 = 0;
      }
      else {
        lVar6 = (ulonglong)(((bVar1 & 1) * 3 + (bVar1 & 2) * 2) * uVar2) * 8 +
                *(longlong *)(param_1 + 2);
      }
    }
    fVar10 = (float)FUN_1404a8316(uVar2,lVar6,lVar5);
    if (((0 < (int)uVar2 && 0 < (int)uVar3) & (bVar9 & 8) >> 3) == 1) {
      bVar4 = (bVar9 & 4) >> 2;
      lVar7 = lVar7 + (ulonglong)
                      (((uint)bVar4 + (uint)bVar4 * 2 + (bVar9 & 1) * 3 + (bVar9 & 2) * 2) * uVar2)
                      * 8;
    }
    else {
      lVar7 = 0;
    }
    lVar5 = 0;
    if ((0 < (int)uVar2) && ((bVar1 & 8) != 0)) {
      if ((int)param_1[4] < 1) {
        lVar5 = 0;
      }
      else {
        bVar9 = (bVar1 & 4) >> 2;
        lVar5 = (ulonglong)
                (((uint)bVar9 + (uint)bVar9 * 2 + (bVar1 & 1) * 3 + (uint)(bVar1 & 2) * 2) * uVar2)
                * 8 + *(longlong *)(param_1 + 2);
      }
    }
    fVar11 = (float)FUN_1404a8316(uVar2,lVar5,lVar7);
    fVar11 = (float)uVar12 + fVar14 + fVar10 + fVar11;
  }
  else {
    fVar11 = 3.4028235e+38;
    uVar13 = 0;
  }
  return CONCAT44(uVar13,fVar11);
}



// FUNCTION 1404a8316 FUN_1404a8316 body=147 status=ok
// SIG undefined FUN_1404a8316(void)

undefined8 FUN_1404a8316(uint param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  double dVar2;
  undefined8 uVar3;
  
  uVar3 = 0;
  if ((param_3 != 0 && param_2 != 0) && 0 < (int)param_1) {
    lVar1 = 0;
    do {
      dVar2 = (double)(float)((double)(float)((double)(float)uVar3 +
                                             ABS(*(double *)(param_2 + lVar1) -
                                                 *(double *)(param_3 + lVar1))) +
                             ABS(*(double *)(param_2 + 8 + lVar1) - *(double *)(param_3 + 8 + lVar1)
                                )) +
              ABS(*(double *)(param_2 + 0x10 + lVar1) - *(double *)(param_3 + 0x10 + lVar1));
      uVar3 = CONCAT44((int)((ulonglong)dVar2 >> 0x20),(float)dVar2);
      lVar1 = lVar1 + 0x18;
    } while ((ulonglong)param_1 * 0x18 != lVar1);
  }
  return uVar3;
}



// FUNCTION 1404a83aa FUN_1404a83aa body=252 status=ok
// SIG undefined FUN_1404a83aa(void)

void FUN_1404a83aa(longlong param_1)

{
  undefined1 uVar1;
  undefined1 auStack_388 [32];
  undefined4 local_368;
  undefined4 uStack_364;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  undefined4 local_358;
  undefined4 uStack_354;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  undefined1 local_40;
  undefined1 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_388;
  if (*(char *)(param_1 + 0x678) == '\x02') {
    *(undefined4 *)(param_1 + 0x340) = 0;
    if (*(char *)(param_1 + 0x338) == '\x01') {
      FUN_1449496c6(param_1 + 0x350,param_1);
      *(undefined1 *)(param_1 + 0x680) = *(undefined1 *)(param_1 + 0x330);
      if (*(char *)(param_1 + 0x338) == '\x01') {
        FUN_1449493b2(param_1);
        *(undefined1 *)(param_1 + 0x338) = 0;
      }
    }
    else {
      uVar1 = *(undefined1 *)(param_1 + 0x680);
      local_40 = 0xff;
      FUN_1449493b2(&local_368);
      local_368 = *(undefined4 *)(param_1 + 0x740);
      uStack_364 = *(undefined4 *)(param_1 + 0x744);
      uStack_360 = *(undefined4 *)(param_1 + 0x748);
      uStack_35c = *(undefined4 *)(param_1 + 0x74c);
      local_358 = *(undefined4 *)(param_1 + 0x750);
      uStack_354 = *(undefined4 *)(param_1 + 0x754);
      uStack_350 = *(undefined4 *)(param_1 + 0x758);
      uStack_34c = *(undefined4 *)(param_1 + 0x75c);
      local_40 = 0;
      local_38 = uVar1;
      FUN_1449496c6(param_1 + 0x350,&local_368);
      *(undefined1 *)(param_1 + 0x680) = local_38;
      FUN_1449493b2(&local_368);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_388) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1404a84a8 FUN_1404a84a8 body=741 status=ok
// SIG undefined FUN_1404a84a8(void)

void FUN_1404a84a8(longlong *param_1)

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
  ulonglong uVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
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
    iVar11 = local_48;
    if (local_50._4_4_ < (int)local_58[3]) {
      do {
        lVar13 = *param_1;
        lVar12 = (longlong)iVar6 * 0x30;
        uVar3 = *(uint *)(lVar13 + 8 + lVar12);
        uVar14 = ((uint)(*(ulonglong *)(lVar13 + lVar12) >> 0x14) & 0xffff ^
                 (uint)(*(ulonglong *)(lVar13 + lVar12) >> 4)) * -0x7a143595;
        uVar14 = (uVar14 >> 0xd ^ uVar14) * -0x3d4d51cb;
        uVar15 = uVar3 >> 0xd ^ (uVar14 >> 0x10 ^ uVar14) - uVar3;
        uVar16 = uVar15 << 8 ^ (-0x61c88647 - uVar3) - uVar15;
        uVar14 = uVar16 >> 0xd ^ (uVar3 - uVar15) - uVar16;
        uVar3 = uVar14 >> 0xc ^ (uVar15 - uVar16) - uVar14;
        uVar15 = uVar3 << 0x10 ^ (uVar16 - uVar14) - uVar3;
        uVar16 = uVar15 >> 5 ^ (uVar14 - uVar3) - uVar15;
        uVar14 = uVar16 >> 3 ^ (uVar3 - uVar15) - uVar16;
        uVar3 = uVar14 << 10 ^ (uVar15 - uVar16) - uVar14;
        uVar10 = (longlong)(int)(uVar3 >> 0xf ^ uVar16 - (uVar14 + uVar3)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar13 + 0x2c + lVar12) = iVar9;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar13 + 0x28 + lVar12) =
             *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar6;
        uVar5 = ~(uint)uVar8 & uVar5;
        plVar7 = (longlong *)local_58[2];
        if ((longlong *)local_58[2] == (longlong *)0x0) {
          plVar7 = local_58;
        }
        iVar9 = (int)local_58[3];
        lVar13 = (longlong)iVar4;
        uVar3 = *(uint *)((longlong)plVar7 + lVar13 * 4) & uVar5;
        if (uVar3 == 0) {
          iVar6 = iVar9 + 0x1e;
          if (-1 < iVar9 + -1) {
            iVar6 = iVar9 + -1;
          }
          iVar6 = iVar6 >> 5;
          iVar2 = iVar6;
          if (iVar6 < iVar4) {
            iVar2 = iVar4;
          }
          if (iVar6 <= iVar4) break;
          lVar12 = 0;
          while( true ) {
            iVar11 = iVar11 + 0x20;
            uVar3 = *(uint *)((longlong)plVar7 + lVar12 * 4 + lVar13 * 4 + 4);
            if (uVar3 != 0) break;
            lVar12 = lVar12 + 1;
            if (iVar2 - lVar13 == lVar12) goto LAB_1404a8746;
          }
          iVar4 = iVar4 + (int)lVar12 + 1;
          uVar5 = 0xffffffff;
        }
        uVar8 = (ulonglong)(-uVar3 & uVar3);
        uVar10 = uVar8 * 2 + 1;
        lVar13 = 0x3f;
        if (uVar10 != 0) {
          for (; uVar10 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        iVar6 = (iVar11 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
      } while (iVar6 < iVar9);
    }
  }
LAB_1404a8746:
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1404a8793 FUN_1404a8793 body=83 status=ok
// SIG undefined FUN_1404a8793(void)

void FUN_1404a8793(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  for (lVar1 = *(longlong *)(param_2 + 0x78); lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x50)) {
    FUN_1449c252b(param_1,lVar1,param_3,param_4);
  }
  return;
}



// FUNCTION 1404a87e6 FUN_1404a87e6 body=56 status=ok
// SIG undefined FUN_1404a87e6(void)

void FUN_1404a87e6(longlong *param_1,undefined8 param_2,longlong *param_3,undefined8 param_4)

{
  if (*param_3 != 0) {
    (**(code **)(*param_1 + 0x88))(param_1,param_3,param_4,param_2);
    if (*param_3 == 0) {
      param_3[1] = 0;
    }
  }
  return;
}



// FUNCTION 1404a881e FUN_1404a881e body=110 status=ok
// SIG undefined FUN_1404a881e(void)

void FUN_1404a881e(longlong *param_1)

{
  undefined8 *puVar1;
  char cVar2;
  undefined8 *puVar3;
  
  cVar2 = (**(code **)(*param_1 + 0x38))();
  puVar3 = (undefined8 *)FUN_14001cc68(0xa8,0x10);
  FUN_1404a888c(puVar3,0,param_1);
  if (cVar2 != '\0') {
    *puVar3 = &PTR_FUN_149eb0920;
  }
  puVar1 = (undefined8 *)param_1[1];
  if ((puVar1 != puVar3) && (param_1[1] = (longlong)puVar3, puVar1 != (undefined8 *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0001404a8889. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 1404a888c FUN_1404a888c body=118 status=ok
// SIG undefined FUN_1404a888c(void)

longlong * FUN_1404a888c(longlong *param_1,longlong param_2,longlong *param_3)

{
  char cVar1;
  undefined4 uVar2;
  
  FUN_144869430();
  *param_1 = (longlong)&PTR_FUN_149eafee0;
  param_1[0x12] = param_2;
  param_1[0x13] = 0;
  param_1[0x14] = (longlong)param_3;
  *(byte *)((longlong)param_1 + 0x2b) = *(byte *)((longlong)param_1 + 0x2b) | 2;
  uVar2 = (**(code **)(*param_3 + 0x48))(param_3);
  (**(code **)(*param_1 + 0xf0))(param_1,uVar2);
  cVar1 = (**(code **)(*param_3 + 0x40))(param_3);
  *(byte *)((longlong)param_1 + 0x2a) = *(byte *)((longlong)param_1 + 0x2a) & 0xfb | cVar1 << 2;
  return param_1;
}



// FUNCTION 1404a8902 FUN_1404a8902 body=15 status=ok
// SIG undefined FUN_1404a8902(void)

undefined4 FUN_1404a8902(longlong *param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  size_t sVar5;
  int iVar6;
  uint uVar7;
  wchar_t *_Str;
  longlong lVar8;
  undefined1 auStack_f8 [32];
  wchar_t *pwStack_d8;
  undefined8 uStack_d0;
  undefined2 auStack_c8 [64];
  longlong lStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  ulonglong uStack_28;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    return 0;
  }
  uStack_28 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if ((*(byte *)(lVar1 + 1) & 2) == 0) {
    pwStack_d8 = (wchar_t *)0x0;
    uStack_d0 = 0;
    lVar8 = 0xf;
    lVar4 = 0x1000000000;
    iVar6 = 0x10;
    iVar2 = param_2;
    do {
      lVar4 = lVar4 + -0x100000000;
      auStack_c8[lVar8] = *(undefined2 *)(&DAT_149e01586 + (longlong)(iVar2 % 10) * 2);
      uVar7 = iVar2 + 9;
      lVar8 = lVar8 + -1;
      iVar6 = iVar6 + -1;
      iVar2 = iVar2 / 10;
    } while (0x12 < uVar7);
    if (param_2 < 0) {
      iVar6 = (int)lVar8;
      lVar4 = (longlong)iVar6;
      auStack_c8[lVar4] = 0x2d;
    }
    else {
      lVar4 = lVar4 >> 0x20;
    }
    FUN_1400020e8(&pwStack_d8,auStack_c8 + lVar4,0x10 - iVar6);
    _Str = pwStack_d8;
    if ((int)uStack_d0 == 0) {
      _Str = L"";
    }
    lStack_48 = 0;
    if (_Str == (wchar_t *)0x0) {
      uStack_40 = 0;
      uStack_38 = 0;
    }
    else {
      sVar5 = wcslen(_Str);
      FUN_1449b853c(auStack_c8,_Str,sVar5 & 0xffffffff,1);
    }
    uVar3 = FUN_140126aca(lVar1,uStack_40);
    if (lStack_48 != 0) {
      FUN_1400020a8();
    }
    if (pwStack_d8 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    uVar3 = 0;
  }
  if ((uStack_28 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 1404a8912 FUN_1404a8912 body=414 status=ok
// SIG undefined FUN_1404a8912(void)

undefined4 FUN_1404a8912(longlong param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  size_t sVar4;
  int iVar5;
  uint uVar6;
  wchar_t *_Str;
  longlong lVar7;
  undefined1 auStack_f8 [32];
  wchar_t *local_d8;
  undefined8 uStack_d0;
  undefined2 local_c8 [64];
  longlong local_48;
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if ((*(byte *)(param_1 + 1) & 2) == 0) {
    local_d8 = (wchar_t *)0x0;
    uStack_d0 = 0;
    lVar7 = 0xf;
    lVar3 = 0x1000000000;
    iVar5 = 0x10;
    iVar1 = param_2;
    do {
      lVar3 = lVar3 + -0x100000000;
      local_c8[lVar7] = *(undefined2 *)(&DAT_149e01586 + (longlong)(iVar1 % 10) * 2);
      uVar6 = iVar1 + 9;
      lVar7 = lVar7 + -1;
      iVar5 = iVar5 + -1;
      iVar1 = iVar1 / 10;
    } while (0x12 < uVar6);
    if (param_2 < 0) {
      iVar5 = (int)lVar7;
      lVar3 = (longlong)iVar5;
      local_c8[lVar3] = 0x2d;
    }
    else {
      lVar3 = lVar3 >> 0x20;
    }
    FUN_1400020e8(&local_d8,local_c8 + lVar3,0x10 - iVar5);
    _Str = local_d8;
    if ((int)uStack_d0 == 0) {
      _Str = L"";
    }
    local_48 = 0;
    if (_Str == (wchar_t *)0x0) {
      local_40 = 0;
      local_38 = 0;
    }
    else {
      sVar4 = wcslen(_Str);
      FUN_1449b853c(local_c8,_Str,sVar4 & 0xffffffff,1);
    }
    uVar2 = FUN_140126aca(param_1,local_40);
    if (local_48 != 0) {
      FUN_1400020a8();
    }
    if (local_d8 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    uVar2 = 0;
  }
  if ((local_28 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 1404a8ab2 FUN_1404a8ab2 body=484 status=ok
// SIG undefined FUN_1404a8ab2(void)

undefined8 FUN_1404a8ab2(longlong param_1)

{
  longlong *plVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  int iVar7;
  bool bVar8;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar6 = *(longlong **)(param_1 + -0xbe8);
  if (plVar6 == (longlong *)0x0) {
    plVar6 = *(longlong **)(param_1 + -0xbe0);
    if ((DAT_14c950c29 & plVar6 != (longlong *)0x0) != 0) goto LAB_1404a8c55;
    bVar8 = plVar6 != (longlong *)0x0;
    plVar6 = (longlong *)0x0;
    if (bVar8) goto LAB_1404a8b52;
  }
  else {
    if (DAT_14c950c29 != 0) {
LAB_1404a8c55:
      FUN_1456cec3c(plVar6);
      plVar6 = *(longlong **)(param_1 + -0xbe8);
      if (plVar6 == (longlong *)0x0) {
LAB_1404a8b52:
        plVar6 = *(longlong **)(param_1 + -0xbe0);
        bVar2 = DAT_14c950c29 & plVar6 != (longlong *)0x0;
      }
      else {
        bVar2 = DAT_14c950c29 & 1;
      }
      if (bVar2 != 0) {
        FUN_1456cec3c(plVar6);
      }
    }
    lVar4 = (**(code **)(*plVar6 + 0x3f8))(plVar6);
    if (lVar4 != 0) {
      lVar4 = *(longlong *)(param_1 + -0xbe8);
      if (lVar4 == 0) {
        lVar4 = *(longlong *)(param_1 + -0xbe0);
        if ((DAT_14c950c29 & lVar4 != 0) == 0) goto LAB_1404a8b0e;
      }
      else if (DAT_14c950c29 != 1) goto LAB_1404a8b0e;
      FUN_1456cec3c(lVar4);
LAB_1404a8b0e:
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
    }
  }
  if ((int)*(uint *)(param_1 + 0x420) < 1) {
    plVar1 = *(longlong **)(param_1 + 0x3f0);
    if (plVar1 != (longlong *)0x0) {
      local_38 = 0;
      uStack_30 = 0;
      LOCK();
      iVar3 = DAT_14cb80fb0 + 1;
      UNLOCK();
      iVar7 = DAT_14cb80fb0 + 1;
      DAT_14cb80fb0 = iVar3;
      if ((int)plVar1[8] != iVar7) {
        *(int *)(plVar1 + 8) = iVar7;
        (**(code **)(*plVar1 + 0x2b0))();
      }
      if ((longlong)(int)uStack_30 == 0) {
        bVar8 = true;
      }
      else {
        lVar4 = 0;
        do {
          plVar6 = *(longlong **)(local_38 + lVar4);
          bVar8 = plVar6 == (longlong *)0x0;
          if (!bVar8) goto LAB_1404a8c45;
          lVar4 = lVar4 + 8;
        } while ((longlong)(int)uStack_30 * 8 != lVar4);
        plVar6 = (longlong *)0x0;
      }
LAB_1404a8c45:
      if (local_38 != 0) {
        FUN_1400020a8();
      }
      if (!bVar8) goto LAB_1404a8be9;
    }
  }
  else {
    lVar4 = 0;
    do {
      plVar6 = *(longlong **)(*(longlong *)(param_1 + 0x418) + lVar4);
      if (plVar6 != (longlong *)0x0) goto LAB_1404a8bab;
      lVar4 = lVar4 + 8;
    } while ((ulonglong)*(uint *)(param_1 + 0x420) << 3 != lVar4);
  }
  plVar6 = *(longlong **)(param_1 + 0x3f8);
LAB_1404a8be9:
  if (plVar6 == (longlong *)0x0) {
    uVar5 = 0;
  }
  else {
LAB_1404a8bab:
    uVar5 = (**(code **)(*plVar6 + 0x3f0))(plVar6);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1404a8cac FUN_1404a8cac body=95 status=ok
// SIG undefined FUN_1404a8cac(void)

ulonglong FUN_1404a8cac(longlong param_1)

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
LAB_1404a8cee:
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_1404a8cee;
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



// FUNCTION 1404a8d0c FUN_1404a8d0c body=65 status=ok
// SIG undefined FUN_1404a8d0c(void)

void FUN_1404a8d0c(longlong param_1)

{
  if (*(char *)(param_1 + 0x68) == '\x01') {
    if ((*(byte *)(param_1 + 0x69) & 1) == 0) {
      *(undefined1 *)(param_1 + 0x68) = 1;
      return;
    }
    *(undefined1 *)(param_1 + 0x68) = 1;
    if (*(char *)(param_1 + 0x6a) != '\0') {
      return;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x68) = 1;
    if ((*(byte *)(param_1 + 0x69) & 1) == 0) {
      return;
    }
  }
  if (((*(char *)(param_1 + 0x6a) == '\x01') && (*(int *)(param_1 + 0x48) != 0)) &&
     (*(longlong **)(param_1 + 0x40) != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0001404a8d44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x40) + 0x60))();
    return;
  }
  return;
}



// FUNCTION 1404a8d78 FUN_1404a8d78 body=170 status=ok
// SIG undefined FUN_1404a8d78(void)

void FUN_1404a8d78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6)

{
  undefined1 auStack_a8 [32];
  longlong local_88;
  double local_80;
  undefined1 local_70 [88];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((*(byte *)(param_6 + 0x374) & 4) != 0) {
    local_88 = param_6;
    FUN_1449c39d8(param_1,param_2,param_3);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_a8);
  }
  local_80 = (double)*(float *)(param_6 + 300);
  local_88 = param_4;
  FUN_146d4c9ab(local_70,param_1,param_2,param_3);
  FUN_146d0d32b(param_6,local_70);
  if ((local_18 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1404a8e23 FUN_1404a8e23 body=241 status=ok
// SIG undefined FUN_1404a8e23(void)

void FUN_1404a8e23(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  char cVar1;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 *local_88;
  undefined8 local_80;
  undefined1 local_78 [96];
  ulonglong local_18;
  
  local_88 = &param_5;
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_80 = param_6;
  cVar1 = *(char *)(param_3 + 0x1c);
  local_98 = param_1;
  local_90 = param_2;
  if (cVar1 == -0x78) {
    local_a0 = param_6;
    local_a8 = param_5;
    FUN_1404a9b70(param_5,param_2,param_3);
  }
  else if (cVar1 == 'H') {
    local_a0 = param_6;
    local_a8 = param_5;
    FUN_1404aa48c(param_5,param_2,param_3);
  }
  else if (cVar1 == '\b') {
    local_a0 = param_6;
    local_a8 = param_5;
    FUN_1404aaa64(param_5,param_2,param_3);
  }
  else if (cVar1 == '\x04') {
    FUN_1447dc19e(param_3 + 0x30,local_78,param_4);
    FUN_14299aba4(*(undefined8 *)(param_3 + 0x20),local_78,&local_98);
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1404a8f15 FUN_1404a8f15 body=170 status=ok
// SIG undefined FUN_1404a8f15(void)

void FUN_1404a8f15(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6)

{
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  double local_80;
  undefined1 local_70 [88];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((*(byte *)(param_6 + 0x374) & 4) != 0) {
    local_80 = (double)param_6;
    FUN_1449caf63(param_1,param_2,param_3);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_a8);
  }
  local_80 = (double)*(float *)(param_6 + 300);
  local_88 = param_4;
  FUN_146d4c5b0(local_70,param_1,param_2,param_3);
  FUN_146d0d32b(param_6,local_70);
  if ((local_18 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1404a8fc0 FUN_1404a8fc0 body=2167 status=ok
// SIG undefined FUN_1404a8fc0(void)

void FUN_1404a8fc0(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  char cVar1;
  byte bVar2;
  undefined1 uVar3;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 *local_b8;
  undefined8 local_b0;
  longlong local_a8;
  undefined8 local_a0;
  longlong local_98;
  undefined8 local_90;
  undefined8 *local_88;
  undefined8 local_80;
  undefined1 local_78 [96];
  ulonglong local_18;
  
  local_b8 = &param_5;
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_b0 = param_6;
  cVar1 = *(char *)(param_1 + 0x1c);
  local_a8 = param_3;
  local_a0 = param_4;
  if (cVar1 == '\b') {
    FUN_1404a9838(&local_b8,param_1);
    goto LAB_1404a9022;
  }
  switch(cVar1) {
  case '\0':
  case '\x02':
switchD_1404a905b_caseD_0:
    FUN_1429983e0(&local_b8,param_1);
    break;
  case '\x01':
    FUN_1404a9d86(&local_b8,param_1);
    break;
  case '\x03':
    FUN_1429985fa(&local_b8,param_1);
    break;
  case '\x04':
    FUN_1447dc19e(param_1 + 0x30,local_78);
    FUN_142998e62(*(undefined8 *)(param_1 + 0x20),local_78,&local_b8);
    break;
  default:
    switch(cVar1) {
    case -0x80:
      FUN_142998814(&local_b8,param_1);
      break;
    case -0x7f:
      FUN_142998a2e(&local_b8,param_1);
      break;
    case -0x7e:
    case -0x7c:
    case -0x7b:
    case -0x7a:
    case -0x79:
      goto switchD_1404a905b_caseD_0;
    case -0x7d:
      FUN_142998c48(&local_b8,param_1);
      break;
    case -0x78:
      FUN_1404aa73a(&local_b8,param_1);
      break;
    default:
      switch(cVar1) {
      case '@':
        local_80 = param_6;
        uVar3 = *(undefined1 *)(param_3 + 0x1c);
        switch(uVar3) {
        case 0:
        case 2:
        case 5:
        case 6:
        case 7:
switchD_1404a9200_caseD_0:
          local_c8 = param_6;
          local_98 = param_1;
          local_90 = param_2;
          local_88 = local_b8;
          FUN_146d2c864(param_1,param_2,param_3);
          break;
        case 1:
          local_c8 = param_6;
          local_98 = param_1;
          local_90 = param_2;
          local_88 = local_b8;
          FUN_146d2cd4a(param_1,param_2,param_3);
          break;
        case 3:
          local_c8 = param_6;
          local_98 = param_1;
          local_90 = param_2;
          local_88 = local_b8;
          FUN_146d2d230(param_1,param_2,param_3);
          break;
        case 4:
          local_98 = param_1;
          local_90 = param_2;
          local_88 = local_b8;
          FUN_1447dc19e(param_3 + 0x30,local_78,param_4);
          FUN_14299a2af(*(undefined8 *)(param_3 + 0x20),local_78,&local_98);
          break;
        case 8:
          local_c8 = param_6;
          local_98 = param_1;
          local_90 = param_2;
          local_88 = local_b8;
          FUN_146d2d716(param_1,param_2,param_3);
          break;
        default:
          switch(uVar3) {
          case 0x40:
            local_c8 = param_6;
            local_98 = param_1;
            local_90 = param_2;
            local_88 = local_b8;
            FUN_146d2ef94(param_1,param_2,param_3);
            break;
          case 0x41:
            local_c8 = param_6;
            local_98 = param_1;
            local_90 = param_2;
            local_88 = local_b8;
            FUN_146d2f474(param_1,param_2,param_3);
            break;
          case 0x42:
          case 0x44:
          case 0x45:
          case 0x46:
          case 0x47:
            goto switchD_1404a9200_caseD_0;
          case 0x43:
            local_c8 = param_6;
            local_98 = param_1;
            local_90 = param_2;
            local_88 = local_b8;
            FUN_146d2f95a(param_1,param_2,param_3);
            break;
          case 0x48:
            local_c8 = param_6;
            local_98 = param_1;
            local_90 = param_2;
            local_88 = local_b8;
            FUN_146d2fe40(param_1,param_2,param_3);
            break;
          default:
            switch(uVar3) {
            case 0x80:
              local_c8 = param_6;
              local_98 = param_1;
              local_90 = param_2;
              local_88 = local_b8;
              FUN_146d2dbfc(param_1,param_2,param_3);
              break;
            case 0x81:
              local_c8 = param_6;
              local_98 = param_1;
              local_90 = param_2;
              local_88 = local_b8;
              FUN_146d2e0e2(param_1,param_2,param_3);
              break;
            default:
              goto switchD_1404a9200_caseD_0;
            case 0x83:
              local_c8 = param_6;
              local_98 = param_1;
              local_90 = param_2;
              local_88 = local_b8;
              FUN_146d2e5c8(param_1,param_2,param_3);
              break;
            case 0x88:
              local_c8 = param_6;
              local_98 = param_1;
              local_90 = param_2;
              local_88 = local_b8;
              FUN_146d2eaae(param_1,param_2,param_3);
            }
          }
        }
        break;
      case 'A':
        local_80 = param_6;
        uVar3 = *(undefined1 *)(param_3 + 0x1c);
        switch(uVar3) {
        case 0:
        case 2:
        case 5:
        case 6:
        case 7:
switchD_1404a925c_caseD_0:
          local_c8 = param_6;
          local_98 = param_1;
          local_90 = param_2;
          local_88 = local_b8;
          FUN_146d30326(param_1,param_2,param_3);
          break;
        case 1:
          local_c8 = param_6;
          local_98 = param_1;
          local_90 = param_2;
          local_88 = local_b8;
          FUN_146d3080c(param_1,param_2,param_3);
          break;
        case 3:
          local_c8 = param_6;
          local_98 = param_1;
          local_90 = param_2;
          local_88 = local_b8;
          FUN_146d30cf2(param_1,param_2,param_3);
          break;
        case 4:
          local_98 = param_1;
          local_90 = param_2;
          local_88 = local_b8;
          FUN_1447dc19e(param_3 + 0x30,local_78,param_4);
          FUN_14299a4dd(*(undefined8 *)(param_3 + 0x20),local_78,&local_98);
          break;
        case 8:
          local_c8 = param_6;
          local_98 = param_1;
          local_90 = param_2;
          local_88 = local_b8;
          FUN_146d311d8(param_1,param_2,param_3);
          break;
        default:
          switch(uVar3) {
          case 0x40:
            local_c8 = param_6;
            local_98 = param_1;
            local_90 = param_2;
            local_88 = local_b8;
            FUN_146d32a56(param_1,param_2,param_3);
            break;
          case 0x41:
            local_c8 = param_6;
            local_98 = param_1;
            local_90 = param_2;
            local_88 = local_b8;
            FUN_146d32f3c(param_1,param_2,param_3);
            break;
          case 0x42:
          case 0x44:
          case 0x45:
          case 0x46:
          case 0x47:
            goto switchD_1404a925c_caseD_0;
          case 0x43:
            local_c8 = param_6;
            local_98 = param_1;
            local_90 = param_2;
            local_88 = local_b8;
            FUN_146d3341c(param_1,param_2,param_3);
            break;
          case 0x48:
            local_c8 = param_6;
            local_98 = param_1;
            local_90 = param_2;
            local_88 = local_b8;
            FUN_146d33902(param_1,param_2,param_3);
            break;
          default:
            switch(uVar3) {
            case 0x80:
              local_c8 = param_6;
              local_98 = param_1;
              local_90 = param_2;
              local_88 = local_b8;
              FUN_146d316be(param_1,param_2,param_3);
              break;
            case 0x81:
              local_c8 = param_6;
              local_98 = param_1;
              local_90 = param_2;
              local_88 = local_b8;
              FUN_146d31ba4(param_1,param_2,param_3);
              break;
            default:
              goto switchD_1404a925c_caseD_0;
            case 0x83:
              local_c8 = param_6;
              local_98 = param_1;
              local_90 = param_2;
              local_88 = local_b8;
              FUN_146d3208a(param_1,param_2,param_3);
              break;
            case 0x88:
              local_c8 = param_6;
              local_98 = param_1;
              local_90 = param_2;
              local_88 = local_b8;
              FUN_146d32570(param_1,param_2,param_3);
            }
          }
        }
        break;
      default:
        goto switchD_1404a905b_caseD_0;
      case 'C':
        local_80 = param_6;
        uVar3 = *(undefined1 *)(param_3 + 0x1c);
        switch(uVar3) {
        case 0:
        case 2:
        case 5:
        case 6:
        case 7:
switchD_1404a92b8_caseD_0:
          local_c8 = param_6;
          local_98 = param_1;
          local_90 = param_2;
          local_88 = local_b8;
          FUN_146d33de8(param_1,param_2,param_3);
          break;
        case 1:
          local_c8 = param_6;
          local_98 = param_1;
          local_90 = param_2;
          local_88 = local_b8;
          FUN_146d342ce(param_1,param_2,param_3);
          break;
        case 3:
          local_c8 = param_6;
          local_98 = param_1;
          local_90 = param_2;
          local_88 = local_b8;
          FUN_146d347b4(param_1,param_2,param_3);
          break;
        case 4:
          local_98 = param_1;
          local_90 = param_2;
          local_88 = local_b8;
          FUN_1447dc19e(param_3 + 0x30,local_78,param_4);
          FUN_14299a70b(*(undefined8 *)(param_3 + 0x20),local_78,&local_98);
          break;
        case 8:
          local_c8 = param_6;
          local_98 = param_1;
          local_90 = param_2;
          local_88 = local_b8;
          FUN_146d34c9a(param_1,param_2,param_3);
          break;
        default:
          switch(uVar3) {
          case 0x40:
            local_c8 = param_6;
            local_98 = param_1;
            local_90 = param_2;
            local_88 = local_b8;
            FUN_146d36518(param_1,param_2,param_3);
            break;
          case 0x41:
            local_c8 = param_6;
            local_98 = param_1;
            local_90 = param_2;
            local_88 = local_b8;
            FUN_146d369fe(param_1,param_2,param_3);
            break;
          case 0x42:
          case 0x44:
          case 0x45:
          case 0x46:
          case 0x47:
            goto switchD_1404a92b8_caseD_0;
          case 0x43:
            local_c8 = param_6;
            local_98 = param_1;
            local_90 = param_2;
            local_88 = local_b8;
            FUN_146d36ee4(param_1,param_2,param_3);
            break;
          case 0x48:
            local_c8 = param_6;
            local_98 = param_1;
            local_90 = param_2;
            local_88 = local_b8;
            FUN_146d373c4(param_1,param_2,param_3);
            break;
          default:
            switch(uVar3) {
            case 0x80:
              local_c8 = param_6;
              local_98 = param_1;
              local_90 = param_2;
              local_88 = local_b8;
              FUN_146d35180(param_1,param_2,param_3);
              break;
            case 0x81:
              local_c8 = param_6;
              local_98 = param_1;
              local_90 = param_2;
              local_88 = local_b8;
              FUN_146d35666(param_1,param_2,param_3);
              break;
            default:
              goto switchD_1404a92b8_caseD_0;
            case 0x83:
              local_c8 = param_6;
              local_98 = param_1;
              local_90 = param_2;
              local_88 = local_b8;
              FUN_146d35b4c(param_1,param_2,param_3);
              break;
            case 0x88:
              local_c8 = param_6;
              local_98 = param_1;
              local_90 = param_2;
              local_88 = local_b8;
              FUN_146d36032(param_1,param_2,param_3);
            }
          }
        }
        break;
      case 'H':
        local_80 = param_6;
        bVar2 = *(byte *)(param_3 + 0x1c);
        if (bVar2 == 0x88) {
          local_c0 = param_6;
          local_c8 = param_5;
          local_98 = param_1;
          local_90 = param_2;
          local_88 = local_b8;
          FUN_1404c5362(param_1,param_2,param_3);
          break;
        }
        if (bVar2 < 0x40) {
          switch(bVar2) {
          default:
            goto switchD_1404a9111_caseD_0;
          case 1:
            local_c0 = param_6;
            local_c8 = param_5;
            local_98 = param_1;
            local_90 = param_2;
            local_88 = local_b8;
            FUN_1404c6fd4(param_1,param_2,param_3);
            break;
          case 3:
            local_c8 = param_6;
            local_98 = param_1;
            local_90 = param_2;
            local_88 = local_b8;
            FUN_146d381ca(param_1,param_2,param_3);
            break;
          case 4:
            local_98 = param_1;
            local_90 = param_2;
            local_88 = local_b8;
            FUN_1447dc19e(param_3 + 0x30,local_78,param_4);
            FUN_14299a939(*(undefined8 *)(param_3 + 0x20),local_78,&local_98);
            break;
          case 8:
            local_c0 = param_6;
            local_c8 = param_5;
            local_98 = param_1;
            local_90 = param_2;
            local_88 = local_b8;
            FUN_145718a88(param_1,param_2,param_3);
          }
          break;
        }
        if (0x80 < bVar2) {
          if (bVar2 == 0x81) {
            local_c8 = param_6;
            local_98 = param_1;
            local_90 = param_2;
            local_88 = local_b8;
            FUN_146d38fd0(param_1,param_2,param_3);
            break;
          }
          if (bVar2 == 0x83) {
            local_c8 = param_6;
            local_98 = param_1;
            local_90 = param_2;
            local_88 = local_b8;
            FUN_146d394b6(param_1,param_2,param_3);
            break;
          }
          goto switchD_1404a9111_caseD_0;
        }
        switch(bVar2) {
        case 0x40:
          local_c8 = param_6;
          local_98 = param_1;
          local_90 = param_2;
          local_88 = local_b8;
          FUN_146d39dd6(param_1,param_2,param_3);
          break;
        case 0x41:
          local_c8 = param_6;
          local_98 = param_1;
          local_90 = param_2;
          local_88 = local_b8;
          FUN_146d3a2bc(param_1,param_2,param_3);
          break;
        case 0x43:
          local_c8 = param_6;
          local_98 = param_1;
          local_90 = param_2;
          local_88 = local_b8;
          FUN_146d3a7a2(param_1,param_2,param_3);
          break;
        case 0x48:
          local_c0 = param_6;
          local_c8 = param_5;
          local_98 = param_1;
          local_90 = param_2;
          local_88 = local_b8;
          FUN_146d3ac88(param_1,param_2,param_3);
          break;
        default:
          if (bVar2 == 0x80) {
            local_c8 = param_6;
            local_98 = param_1;
            local_90 = param_2;
            local_88 = local_b8;
            FUN_146d38aea(param_1,param_2,param_3);
            break;
          }
        case 0x42:
        case 0x44:
        case 0x45:
        case 0x46:
        case 0x47:
switchD_1404a9111_caseD_0:
          local_c8 = param_6;
          local_98 = param_1;
          local_90 = param_2;
          local_88 = local_b8;
          FUN_146d378aa(param_1,param_2,param_3);
        }
      }
    }
  }
LAB_1404a9022:
  if ((local_18 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1404a9838 FUN_1404a9838 body=651 status=ok
// SIG undefined FUN_1404a9838(void)

void FUN_1404a9838(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_158 [32];
  undefined8 *local_138;
  longlong local_130;
  undefined8 local_120;
  undefined8 local_118;
  longlong *local_110;
  longlong local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined1 local_e8 [96];
  undefined1 local_88 [88];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_110 = (longlong *)*param_1;
  lVar2 = param_1[1];
  lVar3 = param_1[2];
  uVar1 = *(undefined1 *)(lVar3 + 0x1c);
  local_120 = param_2;
  local_118 = param_3;
  local_108 = lVar2;
  switch(uVar1) {
  case 0:
  case 2:
  case 5:
  case 6:
  case 7:
switchD_1404a9896_caseD_0:
    local_138 = (undefined8 *)lVar2;
    FUN_146d1a7fe(param_2,param_3,lVar3);
    break;
  case 1:
    local_138 = (undefined8 *)*local_110;
    local_130 = lVar2;
    FUN_140ca4bb6(param_2,param_3,lVar3);
    break;
  case 3:
    local_138 = (undefined8 *)lVar2;
    FUN_146d1b11e(param_2,param_3,lVar3);
    break;
  case 4:
    FUN_1447dc19e(lVar3 + 0x30,local_e8,param_1[3]);
    FUN_142999761(*(undefined8 *)(lVar3 + 0x20),local_e8,&local_120);
LAB_1404a9961:
    if ((local_30 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  case 8:
    local_138 = (undefined8 *)*local_110;
    local_130 = lVar2;
    FUN_140266236(param_2,param_3,lVar3);
    break;
  default:
    switch(uVar1) {
    case 0x40:
      local_138 = (undefined8 *)lVar2;
      FUN_146d1cd22(param_2,param_3,lVar3);
      break;
    case 0x41:
      local_138 = (undefined8 *)lVar2;
      FUN_146d1d208(param_2,param_3,lVar3);
      break;
    case 0x42:
    case 0x44:
    case 0x45:
    case 0x46:
    case 0x47:
      goto switchD_1404a9896_caseD_0;
    case 0x43:
      local_138 = (undefined8 *)lVar2;
      FUN_146d1d6ee(param_2,param_3,lVar3);
      break;
    case 0x48:
      if ((*(byte *)(lVar2 + 0x374) & 4) == 0) {
        local_100 = 0x3ff0000000000000;
        local_f8 = 0;
        uStack_f0 = 0;
        FUN_1449437a2(param_1[3],local_e8);
        local_138 = &local_100;
        FUN_146d1dbd4(local_88,param_2,lVar3,local_e8);
        FUN_146d0d32b(lVar2,local_88);
        goto LAB_1404a9961;
      }
      local_138 = (undefined8 *)*local_110;
      local_130 = lVar2;
      FUN_140a03214(param_2,param_3,lVar3);
      break;
    default:
      switch(uVar1) {
      case 0x80:
        local_138 = (undefined8 *)lVar2;
        FUN_146d1ba36(param_2,param_3,lVar3);
        break;
      case 0x81:
        local_138 = (undefined8 *)lVar2;
        FUN_146d1bf1c(param_2,param_3,lVar3);
        break;
      default:
        goto switchD_1404a9896_caseD_0;
      case 0x83:
        local_138 = (undefined8 *)lVar2;
        FUN_146d1c402(param_2,param_3,lVar3);
        break;
      case 0x88:
        local_138 = (undefined8 *)*local_110;
        local_130 = lVar2;
        FUN_1409cb16e(param_2,param_3,lVar3);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_158);
}



// FUNCTION 1404a9ac4 FUN_1404a9ac4 body=170 status=ok
// SIG undefined FUN_1404a9ac4(void)

void FUN_1404a9ac4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6)

{
  undefined1 auStack_a8 [32];
  longlong local_88;
  double local_80;
  undefined1 local_70 [88];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((*(byte *)(param_6 + 0x374) & 4) != 0) {
    local_88 = param_6;
    FUN_1449c39d8(param_1,param_2,param_3);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_a8);
  }
  local_80 = (double)*(float *)(param_6 + 300);
  local_88 = param_4;
  FUN_146d4bce0(local_70,param_1,param_2,param_3);
  FUN_146d0d32b(param_6,local_70);
  if ((local_18 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1404a9b70 FUN_1404a9b70 body=533 status=ok
// SIG undefined FUN_1404a9b70(void)

void FUN_1404a9b70(undefined8 param_1,undefined8 param_2,undefined8 param_3,double param_4,
                  undefined8 param_5,longlong param_6)

{
  float fVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_1d8 [32];
  undefined1 local_1b8 [8];
  undefined8 local_1b0;
  int local_1a8 [2];
  undefined1 local_1a0 [72];
  double adStack_158 [35];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  if ((*(byte *)(param_6 + 0x374) & 4) == 0) {
    local_1b8 = (undefined1  [8])param_4;
    FUN_146d0e0f0(local_1a8,param_1,param_2,param_3);
    FUN_146d0d32b(param_6,local_1a8);
  }
  else {
    local_1a8[0] = 0;
    lVar3 = 0x5c;
    do {
      *(undefined8 *)(local_1b8 + lVar3 + 4) = 0x7fefffffffffffff;
      *(undefined4 *)((longlong)local_1a8 + lVar3 + -4) = 0xffffffff;
      *(undefined1 *)((longlong)local_1a8 + lVar3) = 0;
      lVar3 = lVar3 + 0x58;
    } while (lVar3 != 0x1bc);
    local_1b8 = (undefined1  [8])(double)*(float *)(param_6 + 300);
    local_1b0 = local_1a8;
    FUN_1404aad12(param_1,param_2,param_3);
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
    *(undefined4 *)(param_6 + 0x230) = 0;
    *(byte *)(param_6 + 0x374) = *(byte *)(param_6 + 0x374) & 0xcf;
    lVar3 = (longlong)local_1a8[0];
    if (lVar3 != 0) {
      lVar5 = 0;
      do {
        if ((*(double *)((longlong)adStack_158 + lVar5) != 1.79769313486232e+308) ||
           (NAN(*(double *)((longlong)adStack_158 + lVar5)))) {
          iVar2 = FUN_1404af45e(param_6,local_1a0 + lVar5);
          lVar4 = *(longlong *)(param_6 + 0x5a8);
          if (*(longlong *)(param_6 + 0x5a8) == 0) {
            lVar4 = param_6 + 0x3f8;
          }
          fVar1 = INFINITY;
          if ((longlong)*(int *)(param_6 + 0x16c) != -1) {
            fVar1 = *(float *)(lVar4 + 0x24 + (longlong)*(int *)(param_6 + 0x16c) * 0x6c);
          }
          if (*(float *)(lVar4 + 0x24 + (longlong)iVar2 * 0x6c) < fVar1) {
            *(int *)(param_6 + 0x16c) = iVar2;
          }
        }
        lVar5 = lVar5 + 0x58;
      } while (lVar3 * 0x58 - lVar5 != 0);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_1d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1404a9d86 FUN_1404a9d86 body=655 status=ok
// SIG undefined FUN_1404a9d86(void)

void FUN_1404a9d86(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_158 [32];
  undefined8 *local_138;
  longlong local_130;
  undefined8 local_120;
  undefined8 local_118;
  longlong *local_110;
  longlong local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined1 local_e8 [96];
  undefined1 local_88 [88];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_110 = (longlong *)*param_1;
  lVar2 = param_1[1];
  lVar3 = param_1[2];
  uVar1 = *(undefined1 *)(lVar3 + 0x1c);
  local_120 = param_2;
  local_118 = param_3;
  local_108 = lVar2;
  switch(uVar1) {
  case 0:
  case 2:
  case 5:
  case 6:
  case 7:
switchD_1404a9dfc_caseD_82:
    local_138 = (undefined8 *)lVar2;
    FUN_146d1384c(param_2,param_3,lVar3);
    break;
  case 1:
    local_138 = (undefined8 *)*local_110;
    local_130 = lVar2;
    FUN_146d13d32(param_2,param_3,lVar3);
    break;
  case 3:
    local_138 = (undefined8 *)lVar2;
    FUN_146d13e30(param_2,param_3,lVar3);
    break;
  case 4:
    FUN_1447dc19e(lVar3 + 0x30,local_e8,param_1[3]);
    FUN_1429992c8(*(undefined8 *)(lVar3 + 0x20),local_e8,&local_120);
LAB_1404a9e55:
    if ((local_30 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  case 8:
    local_138 = (undefined8 *)*local_110;
    local_130 = lVar2;
    FUN_140f1a1a0(param_2,param_3,lVar3);
    break;
  default:
    switch(uVar1) {
    case 0x40:
      local_138 = (undefined8 *)lVar2;
      FUN_146d15a3c(param_2,param_3,lVar3);
      break;
    case 0x41:
      local_138 = (undefined8 *)lVar2;
      FUN_146d15f22(param_2,param_3,lVar3);
      break;
    case 0x42:
    case 0x44:
    case 0x45:
    case 0x46:
    case 0x47:
      goto switchD_1404a9dfc_caseD_82;
    case 0x43:
      local_138 = (undefined8 *)lVar2;
      FUN_146d16408(param_2,param_3,lVar3);
      break;
    case 0x48:
      if ((*(byte *)(lVar2 + 0x374) & 4) == 0) {
        local_100 = 0x3ff0000000000000;
        local_f8 = 0;
        uStack_f0 = 0;
        FUN_1449437a2(param_1[3],local_e8);
        local_138 = &local_100;
        FUN_146d168ee(local_88,param_2,lVar3,local_e8);
        FUN_146d0d32b(lVar2,local_88);
        goto LAB_1404a9e55;
      }
      local_138 = (undefined8 *)*local_110;
      local_130 = lVar2;
      FUN_1411fd357(param_2,param_3,lVar3);
      break;
    default:
      switch(uVar1) {
      case 0x80:
        local_138 = (undefined8 *)lVar2;
        FUN_146d14750(param_2,param_3,lVar3);
        break;
      case 0x81:
        local_138 = (undefined8 *)lVar2;
        FUN_146d14c36(param_2,param_3,lVar3);
        break;
      default:
        goto switchD_1404a9dfc_caseD_82;
      case 0x83:
        local_138 = (undefined8 *)lVar2;
        FUN_146d1511c(param_2,param_3,lVar3);
        break;
      case 0x88:
        local_138 = (undefined8 *)*local_110;
        local_130 = lVar2;
        FUN_140aba258(param_2,param_3,lVar3);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_158);
}



// FUNCTION 1404aa016 FUN_1404aa016 body=559 status=ok
// SIG undefined FUN_1404aa016(void)

void FUN_1404aa016(undefined8 param_1,undefined8 param_2,undefined8 param_3,double param_4,
                  undefined8 param_5,longlong param_6)

{
  float fVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_1f8 [32];
  double local_1d8;
  int *local_1d0;
  int local_1c0 [3];
  undefined1 auStack_1b4 [8];
  undefined4 uStack_1ac;
  int local_1a8 [2];
  undefined1 local_1a0 [72];
  double adStack_158 [35];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  if ((*(byte *)(param_6 + 0x374) & 4) == 0) {
    local_1d0 = local_1c0;
    local_1c0[0] = 0;
    local_1c0[1] = 0x3ff00000;
    stack0xfffffffffffffe48 = 0;
    stack0xfffffffffffffe50 = 0;
    local_1d8 = param_4;
    FUN_146d4d7d1(local_1a8,param_1,param_2,param_3);
    FUN_146d0d32b(param_6,local_1a8);
  }
  else {
    local_1a8[0] = 0;
    lVar3 = 0x5c;
    do {
      *(undefined8 *)(auStack_1b4 + lVar3) = 0x7fefffffffffffff;
      *(undefined4 *)((longlong)local_1a8 + lVar3 + -4) = 0xffffffff;
      *(undefined1 *)((longlong)local_1a8 + lVar3) = 0;
      lVar3 = lVar3 + 0x58;
    } while (lVar3 != 0x1bc);
    local_1d8 = (double)*(float *)(param_6 + 300);
    local_1d0 = local_1a8;
    FUN_1404ac93e(param_1,param_2,param_3);
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
    *(undefined4 *)(param_6 + 0x230) = 0;
    *(byte *)(param_6 + 0x374) = *(byte *)(param_6 + 0x374) & 0xcf;
    lVar3 = (longlong)local_1a8[0];
    if (lVar3 != 0) {
      lVar5 = 0;
      do {
        if ((*(double *)((longlong)adStack_158 + lVar5) != 1.79769313486232e+308) ||
           (NAN(*(double *)((longlong)adStack_158 + lVar5)))) {
          iVar2 = FUN_1404af45e(param_6,local_1a0 + lVar5);
          lVar4 = *(longlong *)(param_6 + 0x5a8);
          if (*(longlong *)(param_6 + 0x5a8) == 0) {
            lVar4 = param_6 + 0x3f8;
          }
          fVar1 = INFINITY;
          if ((longlong)*(int *)(param_6 + 0x16c) != -1) {
            fVar1 = *(float *)(lVar4 + 0x24 + (longlong)*(int *)(param_6 + 0x16c) * 0x6c);
          }
          if (*(float *)(lVar4 + 0x24 + (longlong)iVar2 * 0x6c) < fVar1) {
            *(int *)(param_6 + 0x16c) = iVar2;
          }
        }
        lVar5 = lVar5 + 0x58;
      } while (lVar3 * 0x58 - lVar5 != 0);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_1f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1404aa246 FUN_1404aa246 body=218 status=ok
// SIG undefined FUN_1404aa246(void)

void FUN_1404aa246(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6)

{
  undefined1 auStack_148 [32];
  undefined1 *local_128;
  undefined8 *local_120;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined1 local_f8 [96];
  undefined1 local_98 [88];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_148;
  if ((*(byte *)(param_6 + 0x374) & 4) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_148);
  }
  local_110 = 0x3ff0000000000000;
  local_108 = 0;
  uStack_100 = 0;
  FUN_1449437a2(param_4,local_f8,param_2);
  local_128 = local_f8;
  local_120 = &local_110;
  FUN_146d46950(local_98,param_1,param_3,param_2);
  FUN_146d0d32b(param_6,local_98);
  if ((local_40 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1404aa344 FUN_1404aa344 body=156 status=ok
// SIG undefined FUN_1404aa344(void)

void FUN_1404aa344(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6)

{
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  longlong local_80;
  undefined1 local_70 [88];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((*(byte *)(param_6 + 0x374) & 4) != 0) {
    local_80 = param_6;
    FUN_1404b95cf(param_1,param_2,param_3);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_a8);
  }
  local_88 = param_4;
  FUN_146d4cda6(local_70,param_1,param_2,param_3);
  FUN_146d0d32b(param_6,local_70);
  if ((local_18 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1404aa3e1 FUN_1404aa3e1 body=170 status=ok
// SIG undefined FUN_1404aa3e1(void)

void FUN_1404aa3e1(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6)

{
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  double local_80;
  undefined1 local_70 [88];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((*(byte *)(param_6 + 0x374) & 4) != 0) {
    local_80 = (double)param_6;
    FUN_1449caf63(param_1,param_2,param_3);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_a8);
  }
  local_80 = (double)*(float *)(param_6 + 300);
  local_88 = param_4;
  FUN_146d4c107(local_70,param_1,param_2,param_3);
  FUN_146d0d32b(param_6,local_70);
  if ((local_18 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1404aa48c FUN_1404aa48c body=528 status=ok
// SIG undefined FUN_1404aa48c(void)

void FUN_1404aa48c(undefined8 param_1,undefined8 param_2,undefined8 param_3,double param_4,
                  undefined8 param_5,longlong param_6)

{
  float fVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_1d8 [32];
  undefined1 local_1b8 [8];
  undefined8 local_1b0;
  int local_1a8 [2];
  undefined1 local_1a0 [72];
  double adStack_158 [35];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  if ((*(byte *)(param_6 + 0x374) & 4) == 0) {
    local_1b8 = (undefined1  [8])param_4;
    FUN_146d0e0f0(local_1a8,param_1,param_2,param_3);
    FUN_146d0d32b(param_6,local_1a8);
  }
  else {
    local_1a8[0] = 0;
    lVar3 = 0x5c;
    do {
      *(undefined8 *)(local_1b8 + lVar3 + 4) = 0x7fefffffffffffff;
      *(undefined4 *)((longlong)local_1a8 + lVar3 + -4) = 0xffffffff;
      *(undefined1 *)((longlong)local_1a8 + lVar3) = 0;
      lVar3 = lVar3 + 0x58;
    } while (lVar3 != 0x1bc);
    local_1b8 = (undefined1  [8])(double)*(float *)(param_6 + 300);
    local_1b0 = local_1a8;
    FUN_1404bab26(param_1,param_2,param_3);
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
    *(undefined4 *)(param_6 + 0x230) = 0;
    *(byte *)(param_6 + 0x374) = *(byte *)(param_6 + 0x374) & 0xcf;
    lVar3 = (longlong)local_1a8[0];
    if (lVar3 != 0) {
      lVar5 = 0;
      do {
        if ((*(double *)((longlong)adStack_158 + lVar5) != 1.79769313486232e+308) ||
           (NAN(*(double *)((longlong)adStack_158 + lVar5)))) {
          iVar2 = FUN_1404af45e(param_6,local_1a0 + lVar5);
          lVar4 = *(longlong *)(param_6 + 0x5a8);
          if (*(longlong *)(param_6 + 0x5a8) == 0) {
            lVar4 = param_6 + 0x3f8;
          }
          fVar1 = INFINITY;
          if ((longlong)*(int *)(param_6 + 0x16c) != -1) {
            fVar1 = *(float *)(lVar4 + 0x24 + (longlong)*(int *)(param_6 + 0x16c) * 0x6c);
          }
          if (*(float *)(lVar4 + 0x24 + (longlong)iVar2 * 0x6c) < fVar1) {
            *(int *)(param_6 + 0x16c) = iVar2;
          }
        }
        lVar5 = lVar5 + 0x58;
      } while (lVar3 * 0x58 - lVar5 != 0);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1404aa69d FUN_1404aa69d body=156 status=ok
// SIG undefined FUN_1404aa69d(void)

void FUN_1404aa69d(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6)

{
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  longlong local_80;
  undefined1 local_70 [88];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((*(byte *)(param_6 + 0x374) & 4) != 0) {
    local_80 = param_6;
    FUN_1404c2eb4(param_1,param_2,param_3);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_a8);
  }
  local_88 = param_4;
  FUN_146d719cc(local_70,param_1,param_2,param_3);
  FUN_146d0d32b(param_6,local_70);
  if ((local_18 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1404aa73a FUN_1404aa73a body=651 status=ok
// SIG undefined FUN_1404aa73a(void)

void FUN_1404aa73a(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_158 [32];
  undefined8 *local_138;
  longlong local_130;
  undefined8 local_120;
  undefined8 local_118;
  longlong *local_110;
  longlong local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined1 local_e8 [96];
  undefined1 local_88 [88];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_110 = (longlong *)*param_1;
  lVar2 = param_1[1];
  lVar3 = param_1[2];
  uVar1 = *(undefined1 *)(lVar3 + 0x1c);
  local_120 = param_2;
  local_118 = param_3;
  local_108 = lVar2;
  switch(uVar1) {
  case 0:
  case 2:
  case 5:
  case 6:
  case 7:
switchD_1404aa798_caseD_0:
    local_138 = (undefined8 *)lVar2;
    FUN_146d29054(param_2,param_3,lVar3);
    break;
  case 1:
    local_138 = (undefined8 *)*local_110;
    local_130 = lVar2;
    FUN_14121cc46(param_2,param_3,lVar3);
    break;
  case 3:
    local_138 = (undefined8 *)lVar2;
    FUN_146d29974(param_2,param_3,lVar3);
    break;
  case 4:
    FUN_1447dc19e(lVar3 + 0x30,local_e8,param_1[3]);
    FUN_14299a04d(*(undefined8 *)(lVar3 + 0x20),local_e8,&local_120);
LAB_1404aa863:
    if ((local_30 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  case 8:
    local_138 = (undefined8 *)*local_110;
    local_130 = lVar2;
    FUN_1414d100a(param_2,param_3,lVar3);
    break;
  default:
    switch(uVar1) {
    case 0x40:
      local_138 = (undefined8 *)lVar2;
      FUN_146d2b578(param_2,param_3,lVar3);
      break;
    case 0x41:
      local_138 = (undefined8 *)lVar2;
      FUN_146d2ba5e(param_2,param_3,lVar3);
      break;
    case 0x42:
    case 0x44:
    case 0x45:
    case 0x46:
    case 0x47:
      goto switchD_1404aa798_caseD_0;
    case 0x43:
      local_138 = (undefined8 *)lVar2;
      FUN_146d2bf44(param_2,param_3,lVar3);
      break;
    case 0x48:
      if ((*(byte *)(lVar2 + 0x374) & 4) == 0) {
        local_100 = 0x3ff0000000000000;
        local_f8 = 0;
        uStack_f0 = 0;
        FUN_1449437a2(param_1[3],local_e8);
        local_138 = &local_100;
        FUN_146d2c42a(local_88,param_2,lVar3,local_e8);
        FUN_146d0d32b(lVar2,local_88);
        goto LAB_1404aa863;
      }
      local_138 = (undefined8 *)*local_110;
      local_130 = lVar2;
      FUN_14130e2bd(param_2,param_3,lVar3);
      break;
    default:
      switch(uVar1) {
      case 0x80:
        local_138 = (undefined8 *)lVar2;
        FUN_146d2a294(param_2,param_3,lVar3);
        break;
      case 0x81:
        local_138 = (undefined8 *)lVar2;
        FUN_146d2a77a(param_2,param_3,lVar3);
        break;
      default:
        goto switchD_1404aa798_caseD_0;
      case 0x83:
        local_138 = (undefined8 *)lVar2;
        FUN_146d2ac60(param_2,param_3,lVar3);
        break;
      case 0x88:
        local_138 = (undefined8 *)*local_110;
        local_130 = lVar2;
        FUN_140ea1dc4(param_2,param_3,lVar3);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_158);
}



// FUNCTION 1404aa9c6 FUN_1404aa9c6 body=156 status=ok
// SIG undefined FUN_1404aa9c6(void)

void FUN_1404aa9c6(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6)

{
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  longlong local_80;
  undefined1 local_70 [88];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((*(byte *)(param_6 + 0x374) & 4) != 0) {
    local_80 = param_6;
    FUN_1404c545a(param_1,param_2,param_3);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_a8);
  }
  local_88 = param_4;
  FUN_146d4b42e(local_70,param_1,param_2,param_3);
  FUN_146d0d32b(param_6,local_70);
  if ((local_18 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1404aaa64 FUN_1404aaa64 body=528 status=ok
// SIG undefined FUN_1404aaa64(void)

void FUN_1404aaa64(undefined8 param_1,undefined8 param_2,undefined8 param_3,double param_4,
                  undefined8 param_5,longlong param_6)

{
  float fVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_1d8 [32];
  undefined1 local_1b8 [8];
  undefined8 local_1b0;
  int local_1a8 [2];
  undefined1 local_1a0 [72];
  double adStack_158 [35];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  if ((*(byte *)(param_6 + 0x374) & 4) == 0) {
    local_1b8 = (undefined1  [8])param_4;
    FUN_146d0e0f0(local_1a8,param_1,param_2,param_3);
    FUN_146d0d32b(param_6,local_1a8);
  }
  else {
    local_1a8[0] = 0;
    lVar3 = 0x5c;
    do {
      *(undefined8 *)(local_1b8 + lVar3 + 4) = 0x7fefffffffffffff;
      *(undefined4 *)((longlong)local_1a8 + lVar3 + -4) = 0xffffffff;
      *(undefined1 *)((longlong)local_1a8 + lVar3) = 0;
      lVar3 = lVar3 + 0x58;
    } while (lVar3 != 0x1bc);
    local_1b8 = (undefined1  [8])(double)*(float *)(param_6 + 300);
    local_1b0 = local_1a8;
    FUN_1404be207(param_1,param_2,param_3);
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
    *(undefined4 *)(param_6 + 0x230) = 0;
    *(byte *)(param_6 + 0x374) = *(byte *)(param_6 + 0x374) & 0xcf;
    lVar3 = (longlong)local_1a8[0];
    if (lVar3 != 0) {
      lVar5 = 0;
      do {
        if ((*(double *)((longlong)adStack_158 + lVar5) != 1.79769313486232e+308) ||
           (NAN(*(double *)((longlong)adStack_158 + lVar5)))) {
          iVar2 = FUN_1404af45e(param_6,local_1a0 + lVar5);
          lVar4 = *(longlong *)(param_6 + 0x5a8);
          if (*(longlong *)(param_6 + 0x5a8) == 0) {
            lVar4 = param_6 + 0x3f8;
          }
          fVar1 = INFINITY;
          if ((longlong)*(int *)(param_6 + 0x16c) != -1) {
            fVar1 = *(float *)(lVar4 + 0x24 + (longlong)*(int *)(param_6 + 0x16c) * 0x6c);
          }
          if (*(float *)(lVar4 + 0x24 + (longlong)iVar2 * 0x6c) < fVar1) {
            *(int *)(param_6 + 0x16c) = iVar2;
          }
        }
        lVar5 = lVar5 + 0x58;
      } while (lVar3 * 0x58 - lVar5 != 0);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1404aac75 FUN_1404aac75 body=156 status=ok
// SIG undefined FUN_1404aac75(void)

void FUN_1404aac75(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6)

{
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  longlong local_80;
  undefined1 local_70 [88];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((*(byte *)(param_6 + 0x374) & 4) != 0) {
    local_80 = param_6;
    FUN_1404b926b(param_1,param_2,param_3);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_a8);
  }
  local_88 = param_4;
  FUN_1404bd6e3(local_70,param_1,param_2,param_3);
  FUN_146d0d32b(param_6,local_70);
  if ((local_18 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}


