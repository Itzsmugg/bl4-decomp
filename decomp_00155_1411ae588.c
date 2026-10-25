// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1411ae588 FUN_1411ae588 body=228 status=ok
// SIG undefined FUN_1411ae588(void)

longlong FUN_1411ae588(void)

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
  if (DAT_14cb4a708 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_14840d183;
    local_40 = FUN_14648a675;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/InteractiveToolsFramework",L"InteractiveToolManageGeometrySelectionAPI",
                  &DAT_14cb4a708,&DAT_14840d182);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb4a708;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411ae66e FUN_1411ae66e body=59 status=ok
// SIG undefined FUN_1411ae66e(void)

longlong FUN_1411ae66e(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1411ae852(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x40 + *param_1;
  FUN_1411ae6a9(lVar2);
  return lVar2;
}



// FUNCTION 1411ae6a9 FUN_1411ae6a9 body=55 status=ok
// SIG undefined FUN_1411ae6a9(void)

void FUN_1411ae6a9(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0xffffffff7fffffff;
  uVar1 = DAT_14c8462e0;
  param_1[2] = DAT_14c8462d8;
  param_1[3] = uVar1;
  param_1[4] = DAT_14c8462e8;
  *(undefined1 *)(param_1 + 5) = 1;
  param_1[6] = 0;
  param_1[7] = 0;
  return;
}



// FUNCTION 1411ae6e0 FUN_1411ae6e0 body=370 status=ok
// SIG undefined FUN_1411ae6e0(void)

void FUN_1411ae6e0(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1411ae769;
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
LAB_1411ae769:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x14)) {
    uVar7 = uVar5 / 0x14 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x14,4);
  return;
}



// FUNCTION 1411ae852 FUN_1411ae852 body=248 status=ok
// SIG undefined FUN_1411ae852(void)

void FUN_1411ae852(longlong param_1,int param_2)

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



// FUNCTION 1411ae95a FUN_1411ae95a body=386 status=ok
// SIG undefined FUN_1411ae95a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1411ae95a(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14b745950;
  param_1[9] = &DAT_14a176f00;
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  param_1[9] = &PTR_FUN_14a177080;
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x13) = 0;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (*(int *)((longlong)param_1 + 0x5c) != 0) {
    FUN_14472eb64(param_1 + 10,0);
  }
  param_1[0x10] = 0xffffffff;
  *(undefined4 *)(param_1 + 0xf) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x7c)) {
    *(undefined4 *)((longlong)param_1 + 0x7c) = 0x80;
    FUN_1446efbd8(param_1 + 0xc,0);
  }
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  if (param_1[10] != 0) {
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



// FUNCTION 1411aeadc FUN_1411aeadc body=103 status=ok
// SIG undefined FUN_1411aeadc(void)

ulonglong FUN_1411aeadc(longlong param_1)

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
LAB_1411aeb26:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_1411aeb26;
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



// FUNCTION 1411aeb44 FUN_1411aeb44 body=531 status=ok
// SIG undefined FUN_1411aeb44(void)

void FUN_1411aeb44(longlong param_1,longlong param_2)

{
  uint *puVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  int iVar10;
  bool bVar11;
  
  if (param_2 == 0) {
LAB_1411aeb5a:
    param_2 = 0;
  }
  else {
    lVar6 = FUN_144a7a5f4();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x38) < *(int *)(lVar6 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8
         ) != lVar6 + 0x30)) goto LAB_1411aeb5a;
  }
  puVar1 = (uint *)(param_1 + 0x40);
  cVar3 = FUN_1411aed58(puVar1,param_2);
  if (cVar3 != '\0') {
    return;
  }
  if (((((*(int *)(param_1 + 0x44) != 0) && (uVar2 = *puVar1, -1 < (int)uVar2)) &&
       ((int)uVar2 < DAT_14c9647dc)) &&
      ((plVar7 = (longlong *)
                 ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
       plVar7 != (longlong *)0x0 && ((int)plVar7[2] == *(int *)(param_1 + 0x44))))) &&
     (((*(uint *)(plVar7 + 1) & 0x10200000) == 0 && (lVar6 = *plVar7, lVar6 != 0)))) {
    if (*(longlong *)(param_1 + 0x48) != 0) {
      FUN_14480f766(lVar6 + 0x970);
    }
    plVar7 = (longlong *)FUN_1401654a2(lVar6);
    if (plVar7 != (longlong *)0x0) {
      lVar6 = (**(code **)(*plVar7 + 0x20))(plVar7);
      if (*(longlong *)(param_1 + 0x50) != 0) {
        FUN_14480f766(lVar6 + 0x30);
      }
      *(undefined8 *)(param_1 + 0x50) = 0;
    }
  }
  if (param_2 == 0) {
    *puVar1 = 0;
    iVar4 = 0;
  }
  else {
    uVar2 = *(uint *)(param_2 + 0xc);
    *puVar1 = uVar2;
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar6 = 0;
    }
    iVar4 = *(int *)(lVar6 + 0x10);
    if (*(int *)(lVar6 + 0x10) == 0) {
      LOCK();
      iVar4 = DAT_14c964868 + 1;
      UNLOCK();
      iVar10 = DAT_14c964868 + 1;
      bVar11 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar4;
      if (bVar11) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar10);
      }
      LOCK();
      iVar4 = *(int *)(lVar6 + 0x10);
      bVar11 = iVar4 == 0;
      if (bVar11) {
        *(int *)(lVar6 + 0x10) = iVar10;
        iVar4 = 0;
      }
      UNLOCK();
      if (bVar11) {
        iVar4 = iVar10;
      }
    }
  }
  *(int *)(param_1 + 0x44) = iVar4;
  FUN_1411aee94(param_1,param_2);
  if (*(int *)(param_1 + 0x44) != 0) {
    uVar2 = *puVar1;
    uVar8 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1411aeca6;
    puVar9 = (undefined8 *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((puVar9 != (undefined8 *)0x0) &&
       ((*(int *)(puVar9 + 2) == *(int *)(param_1 + 0x44) &&
        ((*(uint *)(puVar9 + 1) & 0x10200000) == 0)))) {
      uVar8 = *puVar9;
      goto LAB_1411aeca6;
    }
  }
  uVar8 = 0;
LAB_1411aeca6:
  uVar5 = FUN_1409f733c(*(undefined8 *)(param_1 + 0x30),uVar8);
  FUN_1402a7054(param_1,uVar5);
  return;
}



// FUNCTION 1411aed58 FUN_1411aed58 body=316 status=ok
// SIG undefined FUN_1411aed58(void)

bool FUN_1411aed58(uint *param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  bool bVar7;
  
  if (param_2 == 0) {
    uVar4 = 0;
    uVar3 = 0;
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
    uVar3 = *(uint *)(lVar6 + 0x10);
    if (*(uint *)(lVar6 + 0x10) == 0) {
      LOCK();
      iVar2 = DAT_14c964868 + 1;
      UNLOCK();
      uVar5 = DAT_14c964868 + 1;
      bVar7 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar2;
      if (bVar7) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar5);
      }
      LOCK();
      uVar3 = *(uint *)(lVar6 + 0x10);
      bVar7 = uVar3 == 0;
      if (bVar7) {
        *(uint *)(lVar6 + 0x10) = uVar5;
        uVar3 = 0;
      }
      UNLOCK();
      if (bVar7) {
        uVar3 = uVar5;
      }
    }
  }
  uVar5 = *param_1;
  uVar1 = param_1[1];
  bVar7 = true;
  if ((uVar5 != uVar4) || (uVar1 != uVar3)) {
    if ((uVar1 == 0) ||
       (((((int)uVar5 < 0 || (DAT_14c9647dc <= (int)uVar5)) ||
         (lVar6 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8), lVar6 == 0)) ||
        ((*(uint *)(lVar6 + 0x10) != uVar1 || ((*(uint *)(lVar6 + 8) & 0x10200000) != 0)))))) {
      if ((uVar3 != 0) &&
         (((-1 < (int)uVar4 && ((int)uVar4 < DAT_14c9647dc)) &&
          ((lVar6 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8), lVar6 != 0 &&
           (*(uint *)(lVar6 + 0x10) == uVar3)))))) {
        bVar7 = (*(uint *)(lVar6 + 8) & 0x10200000) != 0;
      }
    }
    else {
      bVar7 = false;
    }
  }
  return bVar7;
}



// FUNCTION 1411aee94 FUN_1411aee94 body=254 status=ok
// SIG undefined FUN_1411aee94(void)

void FUN_1411aee94(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auStack_78 [40];
  code *local_50;
  undefined4 local_48;
  undefined1 local_40 [16];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_2 != 0) {
    local_50 = FUN_1409f72ce;
    local_48 = 0;
    FUN_14582e01a(local_40,param_1);
    FUN_1411aefd8(param_2 + 0x970,&local_50,local_40);
    FUN_1449db362(local_40);
    *(code **)(param_1 + 0x48) = local_50;
    plVar1 = (longlong *)FUN_1401654a2(param_2);
    if (plVar1 != (longlong *)0x0) {
      lVar2 = (**(code **)(*plVar1 + 0x20))(plVar1);
      local_50 = FUN_141188c32;
      local_48 = 0;
      FUN_14582e1c6(local_40,param_1);
      FUN_14582df42(lVar2 + 0x30,&local_50,local_40);
      FUN_1449db362(local_40);
      *(code **)(param_1 + 0x50) = local_50;
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411aefd8 FUN_1411aefd8 body=370 status=ok
// SIG undefined FUN_1411aefd8(void)

undefined8 * FUN_1411aefd8(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 1411af174 FUN_1411af174 body=107 status=ok
// SIG undefined FUN_1411af174(void)

ulonglong FUN_1411af174(longlong param_1,undefined8 param_2,undefined8 param_3)

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
LAB_1411af1c2:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_1411af1c2;
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
      (**(code **)(param_1 + 0x28))
                (lVar4 + *(int *)(param_1 + 0x30),param_2,param_3,*(undefined4 *)(param_1 + 8));
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



// FUNCTION 1411af1e0 FUN_1411af1e0 body=95 status=ok
// SIG undefined FUN_1411af1e0(void)

void FUN_1411af1e0(undefined8 param_1,longlong *param_2,char param_3,undefined4 param_4)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_3 == '\0') {
    (**(code **)(*param_2 + 0x10))(param_2,&local_28);
    FUN_14582e38e(param_1,param_4,local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411af240 FUN_1411af240 body=56 status=ok
// SIG undefined FUN_1411af240(void)

void FUN_1411af240(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_1411af278(param_1);
  return;
}



// FUNCTION 1411af278 FUN_1411af278 body=55 status=ok
// SIG undefined FUN_1411af278(void)

void FUN_1411af278(longlong *param_1)

{
  FUN_1411af2b0(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1411af2b0 FUN_1411af2b0 body=121 status=ok
// SIG undefined FUN_1411af2b0(void)

void FUN_1411af2b0(longlong param_1,int param_2)

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



// FUNCTION 1411af338 FUN_1411af338 body=150 status=ok
// SIG undefined FUN_1411af338(void)

undefined8 * FUN_1411af338(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b5f6480;
  param_1[1] = &PTR_FUN_14b3a4a90;
  plVar3 = (longlong *)param_1[0x15];
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
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  FUN_140acec6f(param_1[0xf],*(undefined4 *)(param_1 + 0x10));
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0xb8);
  }
  return param_1;
}



// FUNCTION 1411af3ce FUN_1411af3ce body=45 status=ok
// SIG undefined FUN_1411af3ce(void)

undefined8 FUN_1411af3ce(undefined8 param_1,int param_2)

{
  FUN_1411af3fc();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0xf8);
  }
  return param_1;
}



// FUNCTION 1411af3fc FUN_1411af3fc body=281 status=ok
// SIG undefined FUN_1411af3fc(void)

void FUN_1411af3fc(undefined8 *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b0d2ee0;
  plVar1 = param_1 + 0x18;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x1c) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x1b)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x1b)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = param_1 + 0x11;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x15) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x14)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x14)) {
    FUN_1400020a8(*plVar1);
  }
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
  return;
}



// FUNCTION 1411af516 FUN_1411af516 body=79 status=ok
// SIG undefined FUN_1411af516(void)

undefined8 * FUN_1411af516(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1411af5d6(param_1,iVar1);
      FUN_1411af565(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1411af565 FUN_1411af565 body=112 status=ok
// SIG undefined FUN_1411af565(void)

void FUN_1411af565(longlong param_1,longlong param_2,int param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = 0;
    do {
      *(undefined8 *)(param_1 + lVar2) = 0;
      ((undefined8 *)(param_1 + lVar2))[1] = 0;
      *(undefined8 *)(param_1 + 0x10 + lVar2) = 0;
      *(undefined8 *)(param_1 + lVar2) = *(undefined8 *)(param_2 + lVar2);
      uVar1 = FUN_14477b664(*(undefined8 *)(param_2 + 8 + lVar2));
      uVar1 = FUN_14477b664(uVar1);
      *(undefined8 *)(param_1 + 8 + lVar2) = uVar1;
      *(undefined8 *)(param_1 + 0x10 + lVar2) = *(undefined8 *)(param_2 + 0x10 + lVar2);
      lVar2 = lVar2 + 0x18;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1411af5d6 FUN_1411af5d6 body=334 status=ok
// SIG undefined FUN_1411af5d6(void)

void FUN_1411af5d6(longlong param_1,int param_2,int param_3)

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
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1411af648;
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
LAB_1411af648:
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



// FUNCTION 1411af724 FUN_1411af724 body=4576 status=ok
// SIG undefined FUN_1411af724(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1411af724(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  uint *puVar3;
  longlong lVar4;
  longlong lVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  undefined4 *puVar12;
  uint *puVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  longlong lVar17;
  undefined8 uVar18;
  undefined8 *puVar19;
  longlong lVar20;
  longlong *plVar21;
  int iVar22;
  longlong lVar23;
  int iVar24;
  longlong *plVar25;
  ulonglong uVar26;
  longlong *plVar27;
  ulonglong uVar28;
  longlong lVar29;
  longlong lVar30;
  ulonglong uVar31;
  double dVar32;
  undefined1 auVar33 [16];
  undefined1 auStack_1c8 [32];
  undefined4 local_1a8;
  undefined4 local_1a0;
  undefined4 local_198;
  undefined8 local_190;
  undefined2 *local_188;
  undefined1 *local_180;
  undefined1 *local_178;
  code **local_170;
  undefined1 *local_168;
  code *local_160;
  uint local_150;
  int local_14c;
  longlong local_148;
  longlong *local_140;
  code *local_138;
  ulonglong local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined5 uStack_e8;
  undefined3 uStack_e3;
  undefined5 uStack_e0;
  longlong local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  *(undefined1 *)(param_1 + 0x460) = 0;
  if ((longlong)*(int *)(param_1 + 0x408) == 0) {
    dVar8 = 0.0;
  }
  else {
    plVar21 = *(longlong **)(param_1 + 0x400);
    plVar25 = plVar21 + (longlong)*(int *)(param_1 + 0x408) * 2;
    dVar8 = 0.0;
    do {
      lVar30 = plVar21[1];
      if ((longlong)(int)lVar30 != 0) {
        lVar23 = *plVar21;
        lVar29 = 0;
        do {
          if (((((*(longlong *)(lVar23 + 0x20 + lVar29) != 0) &&
                (lVar20 = *(longlong *)(lVar23 + lVar29), lVar20 != 0)) &&
               ((DAT_14cb26569 & 1) != 0)) &&
              ((iVar9 = _finite((double)*(float *)(lVar20 + 0x48)), iVar9 != 0 &&
               (*(char *)(lVar20 + 0x41) == '\0')))) &&
             (dVar7 = (double)*(float *)(*(longlong *)(lVar23 + lVar29) + 0x48), dVar8 <= dVar7)) {
            dVar8 = dVar7;
          }
          lVar29 = lVar29 + 0x40;
        } while ((longlong)(int)lVar30 * 0x40 != lVar29);
      }
      plVar21 = plVar21 + 2;
    } while (plVar21 != plVar25);
  }
  auVar33._8_4_ = (int)((ulonglong)DAT_14cb262c8 >> 0x20);
  auVar33._0_8_ = DAT_14cb262c8;
  auVar33._12_4_ = 0x45300000;
  dVar32 = (((double)CONCAT44(0x43300000,(int)DAT_14cb262c8) - 4503599627370496.0) +
           (auVar33._8_8_ - 1.9342813113834067e+25)) * _DAT_14cb262c0;
  dVar7 = *(double *)(param_1 + 0x470);
  if (*(int *)(param_1 + 0x34) == 0) {
LAB_1411b0487:
    uVar18 = 0;
  }
  else {
    uVar14 = *(uint *)(param_1 + 0x30);
    uVar18 = 0;
    if ((-1 < (int)uVar14) && ((int)uVar14 < DAT_14c9647dc)) {
      puVar19 = (undefined8 *)
                ((ulonglong)((uVar14 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar14 >> 0x10) * 8));
      if ((puVar19 == (undefined8 *)0x0) ||
         ((*(int *)(puVar19 + 2) != *(int *)(param_1 + 0x34) ||
          ((*(uint *)(puVar19 + 1) & 0x10200000) != 0)))) goto LAB_1411b0487;
      uVar18 = *puVar19;
    }
  }
  FUN_1408f67ec(&local_148,uVar18,1);
  if ((longlong)*(int *)(param_1 + 0x228) != 0) {
    lVar30 = *(longlong *)(param_1 + 0x220);
    lVar23 = (longlong)*(int *)(param_1 + 0x228) * 0x100 + lVar30;
    do {
      if ((longlong)*(int *)(lVar30 + 0x38) != 0) {
        plVar27 = *(longlong **)(lVar30 + 0x30);
        plVar25 = plVar27 + *(int *)(lVar30 + 0x38);
        plVar21 = (longlong *)(lVar30 + 0xa8);
        do {
          if (*(int *)(param_1 + 0x4a0) != *(int *)(param_1 + 0x4cc)) {
            lVar29 = *plVar27;
            uVar14 = (uint)((ulonglong)lVar29 >> 0x10);
            uVar11 = (uint)lVar29 & 0xffff;
            uVar14 = (int)((ulonglong)lVar29 >> 0x20) + ((uint)lVar29 << 0x10 | uVar11) +
                     (uVar14 << 0x13 | uVar14 & 0xffff) + (uVar11 >> 4);
            lVar20 = *(longlong *)(param_1 + 0x4d8);
            if (*(longlong *)(param_1 + 0x4d8) == 0) {
              lVar20 = param_1 + 0x4d0;
            }
            iVar9 = *(int *)(lVar20 + (ulonglong)(*(int *)(param_1 + 0x4e0) - 1U & uVar14) * 4);
            if (iVar9 != -1) {
              do {
                if (*(longlong *)(*(longlong *)(param_1 + 0x498) + (longlong)iVar9 * 0x18) == lVar29
                   ) {
                  if (*(int *)(lVar30 + 0xb0) != *(int *)(lVar30 + 0xdc)) {
                    lVar20 = *(longlong *)(lVar30 + 0xe8);
                    if (*(longlong *)(lVar30 + 0xe8) == 0) {
                      lVar20 = lVar30 + 0xe0;
                    }
                    iVar9 = *(int *)(lVar20 + ((longlong)(int)uVar14 &
                                              (longlong)*(int *)(lVar30 + 0xf0) - 1U) * 4);
                    if (iVar9 != -1) {
                      lVar5 = *plVar21;
                      goto LAB_1411af9a1;
                    }
                  }
                  break;
                }
                iVar9 = *(int *)(*(longlong *)(param_1 + 0x498) + (longlong)iVar9 * 0x18 + 0x10);
              } while (iVar9 != -1);
            }
          }
LAB_1411afa11:
          plVar27 = plVar27 + 1;
        } while (plVar27 != plVar25);
      }
      lVar30 = lVar30 + 0x100;
    } while (lVar30 != lVar23);
  }
  dVar8 = dVar8 - (dVar32 - dVar7);
  if ((longlong)*(int *)(param_1 + 1000) != 0) {
    plVar21 = *(longlong **)(param_1 + 0x3e0);
    plVar25 = plVar21 + (longlong)*(int *)(param_1 + 1000) * 2;
    do {
      if ((longlong)(int)plVar21[1] != 0) {
        lVar23 = (longlong)(int)plVar21[1] << 6;
        lVar30 = *plVar21 + 0x18;
        do {
          pcVar6 = *(code **)(lVar30 + 8);
          if (pcVar6 != (code *)0x0) {
            if ((local_148 != 0) && (0.0 < dVar8)) {
              local_130 = *(ulonglong *)(lVar30 + 0x10);
              if (local_130 != 0) {
                LOCK();
                *(int *)(local_130 + 8) = *(int *)(local_130 + 8) + 1;
                UNLOCK();
              }
              local_138 = pcVar6;
              FUN_14119fb42(local_148,&local_138,dVar8);
            }
            *(undefined8 *)(lVar30 + 8) = 0;
            plVar27 = *(longlong **)(lVar30 + 0x10);
            if (plVar27 != (longlong *)0x0) {
              *(undefined8 *)(lVar30 + 0x10) = 0;
              LOCK();
              plVar1 = plVar27 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
                (**(code **)*plVar27)(plVar27);
                LOCK();
                piVar2 = (int *)((longlong)plVar27 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*plVar27 + 0x10))(plVar27);
                }
              }
            }
          }
          FUN_140b3e76a();
          lVar30 = lVar30 + 0x40;
          lVar23 = lVar23 + -0x40;
        } while (lVar23 != 0);
      }
      plVar21 = plVar21 + 2;
    } while (plVar21 != plVar25);
  }
  if ((longlong)*(int *)(param_1 + 0x3f8) != 0) {
    plVar21 = *(longlong **)(param_1 + 0x3f0);
    plVar25 = plVar21 + (longlong)*(int *)(param_1 + 0x3f8) * 2;
    do {
      if ((longlong)(int)plVar21[1] != 0) {
        lVar23 = (longlong)(int)plVar21[1] << 6;
        lVar30 = *plVar21 + 0x18;
        do {
          pcVar6 = *(code **)(lVar30 + 8);
          if (pcVar6 != (code *)0x0) {
            if ((local_148 != 0) && (0.0 < dVar8)) {
              local_130 = *(ulonglong *)(lVar30 + 0x10);
              if (local_130 != 0) {
                LOCK();
                *(int *)(local_130 + 8) = *(int *)(local_130 + 8) + 1;
                UNLOCK();
              }
              local_138 = pcVar6;
              FUN_14119fb42(local_148,&local_138,dVar8);
            }
            *(undefined8 *)(lVar30 + 8) = 0;
            plVar27 = *(longlong **)(lVar30 + 0x10);
            if (plVar27 != (longlong *)0x0) {
              *(undefined8 *)(lVar30 + 0x10) = 0;
              LOCK();
              plVar1 = plVar27 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
                (**(code **)*plVar27)(plVar27);
                LOCK();
                piVar2 = (int *)((longlong)plVar27 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*plVar27 + 0x10))(plVar27);
                }
              }
            }
          }
          FUN_140b3e76a();
          lVar30 = lVar30 + 0x40;
          lVar23 = lVar23 + -0x40;
        } while (lVar23 != 0);
      }
      plVar21 = plVar21 + 2;
    } while (plVar21 != plVar25);
  }
  if ((longlong)*(int *)(param_1 + 0x408) != 0) {
    plVar21 = *(longlong **)(param_1 + 0x400);
    plVar25 = plVar21 + (longlong)*(int *)(param_1 + 0x408) * 2;
    do {
      if ((longlong)(int)plVar21[1] != 0) {
        lVar23 = (longlong)(int)plVar21[1] << 6;
        lVar30 = *plVar21 + 0x18;
        do {
          pcVar6 = *(code **)(lVar30 + 8);
          if (pcVar6 != (code *)0x0) {
            if ((local_148 != 0) && (0.0 < dVar8)) {
              local_130 = *(ulonglong *)(lVar30 + 0x10);
              if (local_130 != 0) {
                LOCK();
                *(int *)(local_130 + 8) = *(int *)(local_130 + 8) + 1;
                UNLOCK();
              }
              local_138 = pcVar6;
              FUN_14119fb42(local_148,&local_138,dVar8);
            }
            *(undefined8 *)(lVar30 + 8) = 0;
            plVar27 = *(longlong **)(lVar30 + 0x10);
            if (plVar27 != (longlong *)0x0) {
              *(undefined8 *)(lVar30 + 0x10) = 0;
              LOCK();
              plVar1 = plVar27 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
                (**(code **)*plVar27)(plVar27);
                LOCK();
                piVar2 = (int *)((longlong)plVar27 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*plVar27 + 0x10))(plVar27);
                }
              }
            }
          }
          FUN_140b3e76a();
          lVar30 = lVar30 + 0x40;
          lVar23 = lVar23 + -0x40;
        } while (lVar23 != 0);
      }
      plVar21 = plVar21 + 2;
    } while (plVar21 != plVar25);
  }
  if ((longlong)*(int *)(param_1 + 0x418) != 0) {
    plVar21 = *(longlong **)(param_1 + 0x410);
    plVar25 = plVar21 + (longlong)*(int *)(param_1 + 0x418) * 2;
    do {
      if ((longlong)(int)plVar21[1] != 0) {
        lVar23 = (longlong)(int)plVar21[1] << 6;
        lVar30 = *plVar21 + 0x18;
        do {
          pcVar6 = *(code **)(lVar30 + 8);
          if (pcVar6 != (code *)0x0) {
            if ((local_148 != 0) && (0.0 < dVar8)) {
              local_130 = *(ulonglong *)(lVar30 + 0x10);
              if (local_130 != 0) {
                LOCK();
                *(int *)(local_130 + 8) = *(int *)(local_130 + 8) + 1;
                UNLOCK();
              }
              local_138 = pcVar6;
              FUN_14119fb42(local_148,&local_138,dVar8);
            }
            *(undefined8 *)(lVar30 + 8) = 0;
            plVar27 = *(longlong **)(lVar30 + 0x10);
            if (plVar27 != (longlong *)0x0) {
              *(undefined8 *)(lVar30 + 0x10) = 0;
              LOCK();
              plVar1 = plVar27 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
                (**(code **)*plVar27)(plVar27);
                LOCK();
                piVar2 = (int *)((longlong)plVar27 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*plVar27 + 0x10))(plVar27);
                }
              }
            }
          }
          FUN_140b3e76a();
          lVar30 = lVar30 + 0x40;
          lVar23 = lVar23 + -0x40;
        } while (lVar23 != 0);
      }
      plVar21 = plVar21 + 2;
    } while (plVar21 != plVar25);
  }
  if ((longlong)*(int *)(param_1 + 0x428) != 0) {
    plVar21 = *(longlong **)(param_1 + 0x420);
    plVar25 = plVar21 + (longlong)*(int *)(param_1 + 0x428) * 2;
    do {
      if ((longlong)(int)plVar21[1] != 0) {
        lVar23 = (longlong)(int)plVar21[1] << 6;
        lVar30 = *plVar21 + 0x18;
        do {
          pcVar6 = *(code **)(lVar30 + 8);
          if (pcVar6 != (code *)0x0) {
            if ((local_148 != 0) && (0.0 < dVar8)) {
              local_130 = *(ulonglong *)(lVar30 + 0x10);
              if (local_130 != 0) {
                LOCK();
                *(int *)(local_130 + 8) = *(int *)(local_130 + 8) + 1;
                UNLOCK();
              }
              local_138 = pcVar6;
              FUN_14119fb42(local_148,&local_138,dVar8);
            }
            *(undefined8 *)(lVar30 + 8) = 0;
            plVar27 = *(longlong **)(lVar30 + 0x10);
            if (plVar27 != (longlong *)0x0) {
              *(undefined8 *)(lVar30 + 0x10) = 0;
              LOCK();
              plVar1 = plVar27 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
                (**(code **)*plVar27)(plVar27);
                LOCK();
                piVar2 = (int *)((longlong)plVar27 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*plVar27 + 0x10))(plVar27);
                }
              }
            }
          }
          FUN_140b3e76a();
          lVar30 = lVar30 + 0x40;
          lVar23 = lVar23 + -0x40;
        } while (lVar23 != 0);
      }
      plVar21 = plVar21 + 2;
    } while (plVar21 != plVar25);
  }
  if ((longlong)*(int *)(param_1 + 0x438) != 0) {
    plVar21 = *(longlong **)(param_1 + 0x430);
    plVar25 = plVar21 + (longlong)*(int *)(param_1 + 0x438) * 2;
    do {
      if ((longlong)(int)plVar21[1] != 0) {
        lVar23 = (longlong)(int)plVar21[1] << 6;
        lVar30 = *plVar21 + 0x18;
        do {
          pcVar6 = *(code **)(lVar30 + 8);
          if (pcVar6 != (code *)0x0) {
            if ((local_148 != 0) && (0.0 < dVar8)) {
              local_130 = *(ulonglong *)(lVar30 + 0x10);
              if (local_130 != 0) {
                LOCK();
                *(int *)(local_130 + 8) = *(int *)(local_130 + 8) + 1;
                UNLOCK();
              }
              local_138 = pcVar6;
              FUN_14119fb42(local_148,&local_138,dVar8);
            }
            *(undefined8 *)(lVar30 + 8) = 0;
            plVar27 = *(longlong **)(lVar30 + 0x10);
            if (plVar27 != (longlong *)0x0) {
              *(undefined8 *)(lVar30 + 0x10) = 0;
              LOCK();
              plVar1 = plVar27 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
                (**(code **)*plVar27)(plVar27);
                LOCK();
                piVar2 = (int *)((longlong)plVar27 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*plVar27 + 0x10))(plVar27);
                }
              }
            }
          }
          FUN_140b3e76a();
          lVar30 = lVar30 + 0x40;
          lVar23 = lVar23 + -0x40;
        } while (lVar23 != 0);
      }
      plVar21 = plVar21 + 2;
    } while (plVar21 != plVar25);
  }
  if ((longlong)*(int *)(param_1 + 0x458) != 0) {
    plVar21 = *(longlong **)(param_1 + 0x450);
    plVar25 = plVar21 + (longlong)*(int *)(param_1 + 0x458) * 2;
    do {
      if ((longlong)(int)plVar21[1] != 0) {
        lVar23 = (longlong)(int)plVar21[1] << 6;
        lVar30 = *plVar21 + 0x18;
        do {
          pcVar6 = *(code **)(lVar30 + 8);
          if (pcVar6 != (code *)0x0) {
            if ((local_148 != 0) && (0.0 < dVar8)) {
              local_130 = *(ulonglong *)(lVar30 + 0x10);
              if (local_130 != 0) {
                LOCK();
                *(int *)(local_130 + 8) = *(int *)(local_130 + 8) + 1;
                UNLOCK();
              }
              local_138 = pcVar6;
              FUN_14119fb42(local_148,&local_138,dVar8);
            }
            *(undefined8 *)(lVar30 + 8) = 0;
            plVar27 = *(longlong **)(lVar30 + 0x10);
            if (plVar27 != (longlong *)0x0) {
              *(undefined8 *)(lVar30 + 0x10) = 0;
              LOCK();
              plVar1 = plVar27 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)*plVar1 == 0) {
                (**(code **)*plVar27)(plVar27);
                LOCK();
                piVar2 = (int *)((longlong)plVar27 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*plVar27 + 0x10))(plVar27);
                }
              }
            }
          }
          FUN_140b3e76a();
          lVar30 = lVar30 + 0x40;
          lVar23 = lVar23 + -0x40;
        } while (lVar23 != 0);
      }
      plVar21 = plVar21 + 2;
    } while (plVar21 != plVar25);
  }
  plVar21 = (longlong *)(param_1 + 0x498);
  puVar3 = (uint *)(param_1 + 0x4a8);
  iVar9 = *(int *)(param_1 + 0x4c0);
  iVar10 = iVar9;
  if (iVar9 == 0) {
    uVar28 = 1;
    uVar31 = 0;
    iVar24 = 0;
    iVar15 = 0;
  }
  else {
    puVar13 = *(uint **)(param_1 + 0x4b8);
    if (*(uint **)(param_1 + 0x4b8) == (uint *)0x0) {
      puVar13 = puVar3;
    }
    uVar14 = *puVar13;
    if (uVar14 == 0) {
      iVar15 = iVar9 + 0x1e;
      if (-1 < iVar9 + -1) {
        iVar15 = iVar9 + -1;
      }
      uVar31 = 0;
      uVar28 = (ulonglong)(uint)(iVar15 >> 5);
      if (iVar15 >> 5 < 1) {
        uVar28 = uVar31;
      }
      iVar24 = 0;
      do {
        if (uVar28 == uVar31) goto LAB_1411b0108;
        iVar24 = iVar24 + 0x20;
        uVar14 = puVar13[uVar31 + 1];
        uVar31 = uVar31 + 1;
      } while (uVar14 == 0);
    }
    else {
      uVar31 = 0;
      iVar24 = 0;
    }
    uVar28 = (ulonglong)(-uVar14 & uVar14);
    uVar26 = uVar28 * 2 + 1;
    lVar30 = 0x3f;
    if (uVar26 != 0) {
      for (; uVar26 >> lVar30 == 0; lVar30 = lVar30 + -1) {
      }
    }
    iVar15 = (iVar24 - ((uint)lVar30 ^ 0x3f)) + 0x3e;
    if (iVar9 <= iVar15) {
      iVar15 = iVar9;
    }
  }
  if (iVar15 != iVar9) {
    uVar14 = 0xffffffff;
    do {
      if (*(longlong *)(*plVar21 + 8 + (longlong)iVar15 * 0x18) != 0) {
        if (local_148 == 0) {
          FUN_14033a61a(param_1,*plVar21 + (longlong)iVar15 * 0x18 + 8);
        }
        else {
          FUN_14085029e();
        }
      }
      uVar14 = uVar14 & ~(uint)uVar28;
      puVar13 = *(uint **)(param_1 + 0x4b8);
      if (*(uint **)(param_1 + 0x4b8) == (uint *)0x0) {
        puVar13 = puVar3;
      }
      iVar10 = *(int *)(param_1 + 0x4c0);
      iVar15 = (int)uVar31;
      lVar30 = (longlong)iVar15;
      uVar11 = puVar13[lVar30] & uVar14;
      if (uVar11 == 0) {
        iVar22 = iVar10 + 0x1e;
        if (-1 < iVar10 + -1) {
          iVar22 = iVar10 + -1;
        }
        iVar22 = iVar22 >> 5;
        iVar24 = iVar24 + 0x20;
        iVar16 = iVar22;
        if (iVar22 < iVar15) {
          iVar16 = iVar15;
        }
        if (iVar15 < iVar22) {
          lVar23 = 0;
          do {
            uVar11 = puVar13[lVar30 + lVar23 + 1];
            if (uVar11 != 0) {
              uVar31 = (ulonglong)(iVar15 + (int)lVar23 + 1);
              uVar14 = 0xffffffff;
              goto LAB_1411b0434;
            }
            iVar24 = iVar24 + 0x20;
            lVar23 = lVar23 + 1;
          } while (iVar16 - lVar30 != lVar23);
          uVar14 = 0xffffffff;
          iVar15 = iVar16;
        }
        uVar31 = (ulonglong)(iVar15 + 1);
        iVar15 = iVar10;
      }
      else {
LAB_1411b0434:
        uVar28 = (ulonglong)(-uVar11 & uVar11);
        uVar26 = uVar28 * 2 + 1;
        lVar30 = 0x3f;
        if (uVar26 != 0) {
          for (; uVar26 >> lVar30 == 0; lVar30 = lVar30 + -1) {
          }
        }
        iVar15 = (iVar24 - ((uint)lVar30 ^ 0x3f)) + 0x3e;
        if (iVar10 <= iVar15) {
          iVar15 = iVar10;
        }
      }
    } while (iVar15 != iVar9);
  }
LAB_1411b0108:
  if (*(int *)(param_1 + 0x4a0) == *(int *)(param_1 + 0x4cc)) goto LAB_1411b0627;
  lVar30 = param_1 + 0x4d0;
  if (*(longlong *)(param_1 + 0x4d8) != 0) {
    lVar30 = *(longlong *)(param_1 + 0x4d8);
  }
  iVar9 = *(int *)(param_1 + 0x4e0);
  iVar15 = iVar9 + 3;
  if (-1 < iVar9) {
    iVar15 = iVar9;
  }
  iVar24 = iVar10;
  if (*(int *)(param_1 + 0x4a0) - *(int *)(param_1 + 0x4cc) < iVar15 >> 2) {
    if (iVar10 != 0) {
      puVar13 = *(uint **)(param_1 + 0x4b8);
      if (*(uint **)(param_1 + 0x4b8) == (uint *)0x0) {
        puVar13 = puVar3;
      }
      uVar14 = *puVar13;
      if (uVar14 == 0) {
        iVar9 = iVar10 + 0x1e;
        if (-1 < iVar10 + -1) {
          iVar9 = iVar10 + -1;
        }
        uVar28 = 0;
        uVar31 = (ulonglong)(uint)(iVar9 >> 5);
        if (iVar9 >> 5 < 1) {
          uVar31 = uVar28;
        }
        iVar9 = 0;
        do {
          if (uVar31 == uVar28) goto LAB_1411b0173;
          iVar9 = iVar9 + 0x20;
          uVar14 = puVar13[uVar28 + 1];
          uVar28 = uVar28 + 1;
        } while (uVar14 == 0);
      }
      else {
        uVar28 = 0;
        iVar9 = 0;
      }
      uVar26 = (ulonglong)(-uVar14 & uVar14);
      uVar31 = uVar26 * 2 + 1;
      lVar23 = 0x3f;
      if (uVar31 != 0) {
        for (; uVar31 >> lVar23 == 0; lVar23 = lVar23 + -1) {
        }
      }
      iVar15 = (iVar9 - ((uint)lVar23 ^ 0x3f)) + 0x3e;
      if (iVar15 < iVar10) {
        uVar14 = 0xffffffff;
        do {
          *(undefined4 *)
           (lVar30 + (longlong)
                     *(int *)(*(longlong *)(param_1 + 0x498) + 0x14 + (longlong)iVar15 * 0x18) * 4)
               = 0xffffffff;
          uVar14 = ~(uint)uVar26 & uVar14;
          puVar13 = *(uint **)(param_1 + 0x4b8);
          if (*(uint **)(param_1 + 0x4b8) == (uint *)0x0) {
            puVar13 = puVar3;
          }
          iVar24 = *(int *)(param_1 + 0x4c0);
          iVar15 = (int)uVar28;
          lVar23 = (longlong)iVar15;
          uVar11 = puVar13[lVar23] & uVar14;
          if (uVar11 == 0) {
            iVar22 = iVar24 + 0x1e;
            if (-1 < iVar24 + -1) {
              iVar22 = iVar24 + -1;
            }
            iVar22 = iVar22 >> 5;
            iVar9 = iVar9 + 0x20;
            iVar16 = iVar22;
            if (iVar22 < iVar15) {
              iVar16 = iVar15;
            }
            if (iVar15 < iVar22) {
              lVar29 = 0;
              do {
                uVar11 = puVar13[lVar23 + lVar29 + 1];
                if (uVar11 != 0) {
                  uVar28 = (ulonglong)(iVar15 + (int)lVar29 + 1);
                  uVar14 = 0xffffffff;
                  goto LAB_1411b05b3;
                }
                iVar9 = iVar9 + 0x20;
                lVar29 = lVar29 + 1;
              } while (iVar16 - lVar23 != lVar29);
              uVar14 = 0xffffffff;
              lVar23 = (longlong)iVar16;
            }
            uVar28 = lVar23 + 1U & 0xffffffff;
            iVar15 = iVar24;
          }
          else {
LAB_1411b05b3:
            uVar26 = (ulonglong)(-uVar11 & uVar11);
            uVar31 = uVar26 * 2 + 1;
            lVar23 = 0x3f;
            if (uVar31 != 0) {
              for (; uVar31 >> lVar23 == 0; lVar23 = lVar23 + -1) {
              }
            }
            iVar15 = (iVar9 - ((uint)lVar23 ^ 0x3f)) + 0x3e;
            if (iVar24 <= iVar15) {
              iVar15 = iVar24;
            }
          }
        } while (iVar15 != iVar10);
      }
      goto LAB_1411b0173;
    }
  }
  else {
    if (0 < iVar9) {
      lVar23 = 0;
      do {
        *(undefined4 *)(lVar30 + lVar23 * 4) = 0xffffffff;
        lVar23 = lVar23 + 1;
      } while (lVar23 < *(int *)(param_1 + 0x4e0));
      iVar24 = *(int *)(param_1 + 0x4c0);
    }
LAB_1411b0173:
    if (iVar24 == 0) {
      uVar28 = 1;
      iVar24 = 0;
      uVar31 = 0;
      iVar10 = 0;
      iVar9 = 0;
    }
    else {
      puVar13 = *(uint **)(param_1 + 0x4b8);
      if (*(uint **)(param_1 + 0x4b8) == (uint *)0x0) {
        puVar13 = puVar3;
      }
      uVar14 = *puVar13;
      if (uVar14 == 0) {
        iVar9 = iVar24 + 0x1e;
        if (-1 < iVar24 + -1) {
          iVar9 = iVar24 + -1;
        }
        uVar31 = 0;
        uVar28 = (ulonglong)(uint)(iVar9 >> 5);
        if (iVar9 >> 5 < 1) {
          uVar28 = uVar31;
        }
        iVar9 = 0;
        do {
          if (uVar28 == uVar31) goto LAB_1411b05fa;
          iVar9 = iVar9 + 0x20;
          uVar14 = puVar13[uVar31 + 1];
          uVar31 = uVar31 + 1;
        } while (uVar14 == 0);
      }
      else {
        uVar31 = 0;
        iVar9 = 0;
      }
      uVar28 = (ulonglong)(-uVar14 & uVar14);
      uVar26 = uVar28 * 2 + 1;
      lVar30 = 0x3f;
      if (uVar26 != 0) {
        for (; uVar26 >> lVar30 == 0; lVar30 = lVar30 + -1) {
        }
      }
      iVar10 = (iVar9 - ((uint)lVar30 ^ 0x3f)) + 0x3e;
      if (iVar24 <= iVar10) {
        iVar10 = iVar24;
      }
    }
    if (iVar10 < iVar24) {
      uVar14 = 0xffffffff;
      do {
        lVar30 = *plVar21;
        plVar25 = *(longlong **)(lVar30 + 8 + (longlong)iVar10 * 0x18);
        if (plVar25 != (longlong *)0x0) {
          *(int *)(plVar25 + 0x21) = (int)plVar25[0x21] + -1;
          if (((int)plVar25[0x26] < 1) &&
             (local_150 = uVar14, local_14c = iVar9, FUN_1400847bc(plVar25 + 0x17,0),
             iVar9 = local_14c, uVar14 = local_150, (int)plVar25[0x21] == 0)) {
            FUN_140087e46(plVar25);
            if (*plVar25 != -1) {
              iVar9 = local_14c;
              uVar14 = local_150;
              if (DAT_14cb259f8 == 0) goto LAB_1411b0250;
              FUN_14033a6c8(*(undefined8 *)(DAT_14cb259f8 + 0x40),plVar25);
            }
            iVar9 = local_14c;
            uVar14 = local_150;
            if (DAT_14cb259f8 != 0) {
              FUN_14008869e(*(undefined8 *)(DAT_14cb259f8 + 0x30),plVar25);
              iVar9 = local_14c;
              uVar14 = local_150;
            }
          }
LAB_1411b0250:
          *(undefined8 *)((longlong)iVar10 * 0x18 + 8 + lVar30) = 0;
          iVar24 = *(int *)(param_1 + 0x4c0);
        }
        uVar14 = uVar14 & ~(uint)uVar28;
        puVar13 = *(uint **)(param_1 + 0x4b8);
        if (*(uint **)(param_1 + 0x4b8) == (uint *)0x0) {
          puVar13 = puVar3;
        }
        iVar10 = (int)uVar31;
        lVar30 = (longlong)iVar10;
        uVar11 = puVar13[lVar30] & uVar14;
        if (uVar11 == 0) {
          iVar15 = iVar24 + 0x1e;
          if (-1 < iVar24 + -1) {
            iVar15 = iVar24 + -1;
          }
          iVar15 = iVar15 >> 5;
          iVar22 = iVar15;
          if (iVar15 < iVar10) {
            iVar22 = iVar10;
          }
          if (iVar15 <= iVar10) break;
          lVar23 = 0;
          while( true ) {
            iVar9 = iVar9 + 0x20;
            uVar11 = puVar13[lVar30 + lVar23 + 1];
            if (uVar11 != 0) break;
            lVar23 = lVar23 + 1;
            if (iVar22 - lVar30 == lVar23) goto LAB_1411b05fa;
          }
          uVar31 = (ulonglong)(iVar10 + (int)lVar23 + 1);
          uVar14 = 0xffffffff;
        }
        uVar28 = (ulonglong)(-uVar11 & uVar11);
        uVar26 = uVar28 * 2 + 1;
        lVar30 = 0x3f;
        if (uVar26 != 0) {
          for (; uVar26 >> lVar30 == 0; lVar30 = lVar30 + -1) {
          }
        }
        iVar10 = (iVar9 - ((uint)lVar30 ^ 0x3f)) + 0x3e;
      } while (iVar10 < iVar24);
    }
  }
LAB_1411b05fa:
  *(undefined4 *)(param_1 + 0x4a0) = 0;
  if (*(int *)(param_1 + 0x4a4) < 0) {
    FUN_144727cd0(plVar21,0);
  }
  *(undefined8 *)(param_1 + 0x4c8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x4c0) = 0;
LAB_1411b0627:
  if ((((*(int *)(param_1 + 0x4ec) != 0) && (uVar14 = *(uint *)(param_1 + 0x4e8), -1 < (int)uVar14))
      && ((int)uVar14 < DAT_14c9647dc)) &&
     (((plVar21 = (longlong *)
                  ((ulonglong)((uVar14 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar14 >> 0x10) * 8)),
       plVar21 != (longlong *)0x0 && ((int)plVar21[2] == *(int *)(param_1 + 0x4ec))) &&
      (((*(uint *)(plVar21 + 1) & 0x10200000) == 0 && (lVar30 = *plVar21, lVar30 != 0)))))) {
    if (DAT_14cb5b388 == 0) {
      local_170 = &local_138;
      local_138 = FUN_141864c34;
      local_160 = FUN_14081d0ea;
      local_168 = &LAB_146431698;
      local_178 = &LAB_1486775cb;
      local_180 = &LAB_1464cee35;
      local_188 = &DAT_149e063b2;
      local_190 = 0;
      local_198 = 0x10000005;
      local_1a0 = 0x10;
      local_1a8 = 0x3a20;
      FUN_14081cfa3(L"/Script/GbxGame",L"GbxCharacter",&DAT_14cb5b388,FUN_1464cee0e);
    }
    if ((*(int *)(DAT_14cb5b388 + 0x38) <= *(int *)(*(longlong *)(lVar30 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar30 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cb5b388 + 0x38) * 8) == DAT_14cb5b388 + 0x30)) {
      lVar23 = *(longlong *)(lVar30 + 0x35d0);
      plVar21 = *(longlong **)(lVar30 + 0x35d8);
      if (plVar21 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar21 + 1) = (int)plVar21[1] + 1;
        UNLOCK();
      }
      if (lVar23 != 0) {
        local_138 = (code *)0x0;
        local_130 = local_130 & 0xffffffff00000000;
        local_128 = 0;
        uStack_120 = 0;
        local_118 = 0;
        uStack_110 = 0;
        local_108 = 0x40a0000000000000;
        local_100 = 0;
        uStack_f8 = 0;
        local_f0 = 0;
        uStack_e8 = 0;
        uStack_e3 = 0;
        uStack_e0 = 0;
        local_d8 = 0;
        uStack_d0 = 0;
        local_c8 = 0xffffffffffffffff;
        local_c0 = 2;
        local_b8 = DAT_14c8463d0;
        uStack_b0 = DAT_14c8463d8;
        local_a8 = (undefined4)DAT_14c8463e0;
        uStack_a4 = DAT_14c8463e0._4_4_;
        uStack_a0 = (undefined4)DAT_14c8463e8;
        uStack_9c = DAT_14c8463e8._4_4_;
        local_98 = 0;
        uStack_90 = 0;
        local_88 = 0;
        FUN_140ca9024(lVar23 + 0x560,&local_138);
        FUN_140a3ab1e(lVar23);
        FUN_140fe19b0(lVar23,param_1);
        uStack_d0 = 0;
        local_c8 = 0xffffffffffffffff;
        if ((local_d8 != 0) && ((DAT_14cb26569 & 1) != 0)) {
          FUN_1400848c0(*(undefined8 *)(local_d8 + 0x50));
        }
      }
      if (plVar21 != (longlong *)0x0) {
        LOCK();
        plVar25 = plVar21 + 1;
        *(int *)plVar25 = (int)*plVar25 + -1;
        UNLOCK();
        if ((int)*plVar25 == 0) {
          (**(code **)*plVar21)(plVar21);
          LOCK();
          piVar2 = (int *)((longlong)plVar21 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar21 + 0x10))(plVar21);
          }
        }
      }
    }
  }
  *(undefined8 *)(param_1 + 0x4e8) = 0;
  if (local_140 != (longlong *)0x0) {
    LOCK();
    plVar21 = local_140 + 1;
    *(int *)plVar21 = (int)*plVar21 + -1;
    UNLOCK();
    if ((int)*plVar21 == 0) {
      (**(code **)*local_140)(local_140);
      LOCK();
      piVar2 = (int *)((longlong)local_140 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_140 + 0x10))(local_140);
      }
    }
  }
  if ((local_70 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_1411af9a1:
  lVar17 = (longlong)iVar9 * 0x20;
  lVar4 = lVar5 + lVar17;
  if (*(longlong *)(lVar5 + lVar17) != lVar29) goto code_r0x0001411af9b2;
  iVar10 = *(int *)(lVar20 + (longlong)*(int *)(lVar4 + 0x1c) * 4);
  if (iVar10 == iVar9) {
    puVar12 = (undefined4 *)(lVar20 + (longlong)*(int *)(lVar4 + 0x1c) * 4);
  }
  else {
    do {
      lVar29 = (longlong)iVar10;
      iVar10 = *(int *)(lVar5 + 0x18 + lVar29 * 0x20);
    } while (iVar10 != iVar9);
    puVar12 = (undefined4 *)(lVar5 + lVar29 * 0x20 + 0x18);
  }
  *puVar12 = *(undefined4 *)(lVar4 + 0x18);
  lVar29 = *plVar21;
  *(undefined8 *)(lVar29 + 8 + lVar17) = 0;
  *(undefined8 *)(lVar29 + 0x10 + lVar17) = 0xffffffffffffffff;
  FUN_1438a8ba6(plVar21,iVar9,1);
  goto LAB_1411afa11;
code_r0x0001411af9b2:
  iVar9 = *(int *)(lVar4 + 0x18);
  if (iVar9 == -1) goto LAB_1411afa11;
  goto LAB_1411af9a1;
}



// FUNCTION 1411b0906 FUN_1411b0906 body=14 status=ok
// SIG undefined FUN_1411b0906(void)

void FUN_1411b0906(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x60) = param_2;
                    /* WARNING: Could not recover jumptable at 0x0001411b090d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  return;
}



// FUNCTION 1411b0914 FUN_1411b0914 body=16 status=ok
// SIG undefined FUN_1411b0914(void)

void FUN_1411b0914(longlong *param_1)

{
  if ((longlong *)*param_1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001411b091f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)*param_1 + 0x28))();
    return;
  }
  return;
}



// FUNCTION 1411b0924 FUN_1411b0924 body=34 status=ok
// SIG undefined FUN_1411b0924(void)

undefined4 FUN_1411b0924(longlong param_1)

{
  undefined4 uVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  uVar1 = *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)(param_1 + 0x60) = 3;
  return uVar1;
}



// FUNCTION 1411b0946 FUN_1411b0946 body=524 status=ok
// SIG undefined FUN_1411b0946(void)

void FUN_1411b0946(longlong *param_1)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  longlong *plVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong lVar11;
  int iVar12;
  ulonglong uVar13;
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
  local_60 = local_70;
  if ((int)param_1[5] == 0) {
    uVar13 = 1;
    uVar10 = 0xffffffff;
    local_58._4_4_ = 0;
    local_68._0_4_ = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    uVar13 = local_68 >> 0x20;
    uVar10 = local_58 & 0xffffffff;
  }
  plVar4 = local_60;
  iVar7 = (int)local_68;
  iVar5 = local_58._4_4_;
  iVar12 = local_50;
  if (local_58._4_4_ < (int)local_60[3]) {
    do {
      lVar11 = *param_1;
      lVar8 = (longlong)iVar5 * 0x78;
      *(undefined4 *)(lVar11 + 0x68 + lVar8) = 0;
      local_74 = iVar12;
      if (*(longlong *)(lVar11 + 0x60 + lVar8) != 0) {
        FUN_1400020a8();
      }
      FUN_1411b0b54(lVar8 + lVar11 + 0x20);
      if (*(longlong *)(lVar8 + lVar11 + 0x10) != 0) {
        FUN_1400020a8();
      }
      uVar9 = (uint)uVar10 & ~(uint)uVar13;
      uVar10 = (ulonglong)uVar9;
      plVar6 = (longlong *)plVar4[2];
      if ((longlong *)plVar4[2] == (longlong *)0x0) {
        plVar6 = plVar4;
      }
      iVar2 = (int)plVar4[3];
      lVar11 = (longlong)iVar7;
      uVar9 = *(uint *)((longlong)plVar6 + lVar11 * 4) & uVar9;
      iVar12 = local_74;
      if (uVar9 == 0) {
        iVar5 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar5 = iVar2 + -1;
        }
        iVar5 = iVar5 >> 5;
        iVar3 = iVar5;
        if (iVar5 < iVar7) {
          iVar3 = iVar7;
        }
        if (iVar5 <= iVar7) break;
        lVar8 = 0;
        while( true ) {
          iVar12 = iVar12 + 0x20;
          uVar9 = *(uint *)((longlong)plVar6 + lVar8 * 4 + lVar11 * 4 + 4);
          if (uVar9 != 0) break;
          lVar8 = lVar8 + 1;
          if (iVar3 - lVar11 == lVar8) goto LAB_1411b0aca;
        }
        iVar7 = iVar7 + (int)lVar8 + 1;
        uVar10 = 0xffffffff;
      }
      uVar13 = (ulonglong)(-uVar9 & uVar9);
      uVar1 = uVar13 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar5 = (iVar12 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    } while (iVar5 < iVar2);
  }
LAB_1411b0aca:
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1410fd13e(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(local_70,0);
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411b0b54 FUN_1411b0b54 body=55 status=ok
// SIG undefined FUN_1411b0b54(void)

void FUN_1411b0b54(longlong *param_1)

{
  FUN_1411b0b8c(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1411b0b8c FUN_1411b0b8c body=515 status=ok
// SIG undefined FUN_1411b0b8c(void)

void FUN_1411b0b8c(longlong *param_1,int param_2)

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
  uint uVar12;
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
    uVar12 = *puVar7;
    if (uVar12 == 0) {
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
        if (uVar8 == uVar13) goto LAB_1411b0c6d;
        iVar10 = iVar10 + 0x20;
        uVar12 = puVar7[uVar13 + 1];
        uVar13 = uVar13 + 1;
      } while (uVar12 == 0);
    }
    else {
      uVar13 = 0;
      iVar10 = 0;
    }
    uVar14 = (ulonglong)(-uVar12 & uVar12);
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
    uVar12 = 0xffffffff;
    do {
      if (*(longlong *)(*param_1 + 0x20 + (longlong)iVar6 * 0x38) != 0) {
        FUN_1400020a8();
        iVar2 = (int)param_1[5];
      }
      uVar12 = uVar12 & ~(uint)uVar14;
      puVar7 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar7 = puVar1;
      }
      iVar6 = (int)uVar13;
      lVar11 = (longlong)iVar6;
      uVar3 = puVar7[lVar11] & uVar12;
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
          if (iVar5 - lVar11 == lVar9) goto LAB_1411b0c6d;
        }
        uVar13 = (ulonglong)(iVar6 + (int)lVar9 + 1);
        uVar12 = 0xffffffff;
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
LAB_1411b0c6d:
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_144748838(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar12 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (((int)uVar12 <= *(int *)((longlong)param_1 + 0x2c)) &&
     (*(int *)((longlong)param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar3 = 0x80;
  if (0x80 < (int)uVar12) {
    uVar3 = uVar12;
  }
  *(uint *)((longlong)param_1 + 0x2c) = uVar3;
  FUN_1446efbd8(puVar1,0);
  return;
}



// FUNCTION 1411b0d90 FUN_1411b0d90 body=352 status=ok
// SIG undefined FUN_1411b0d90(void)

longlong *
FUN_1411b0d90(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined4 param_5,undefined4 *param_6,undefined4 param_7)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined ***pppuVar4;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 local_b0;
  undefined4 *local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  code *local_88 [2];
  undefined ***local_78;
  undefined **local_68;
  undefined *local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  plVar3 = (longlong *)FUN_14001cc68(0xd0,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_149e16d70;
  local_98 = *param_6;
  uStack_94 = param_6[1];
  uStack_90 = param_6[2];
  uStack_8c = param_6[3];
  local_a8 = &local_98;
  local_78 = (undefined ***)0x0;
  local_68 = &PTR_LAB_149e16f80;
  local_60 = &DAT_14275dcb2;
  local_88[0] = FUN_140d11fbe;
  local_a0 = param_7;
  local_b0 = param_5;
  local_b8 = param_4;
  FUN_1411b0f48(plVar3 + 2,param_2,param_3,local_88);
  if (local_88[0] != (code *)0x0) {
    pppuVar4 = local_78;
    if (local_78 == (undefined ***)0x0) {
      pppuVar4 = &local_68;
    }
    (*(code *)(*pppuVar4)[2])();
  }
  *param_1 = (longlong)(plVar3 + 2);
  param_1[1] = (longlong)plVar3;
  if (plVar3 != (longlong *)0x0) {
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
  FUN_1411b0ef2(*param_1,param_1);
  if ((local_48 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411b0ef2 FUN_1411b0ef2 body=85 status=ok
// SIG undefined FUN_1411b0ef2(void)

undefined1 FUN_1411b0ef2(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  
  uVar4 = *param_2;
  lVar5 = param_2[1];
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
  }
  plVar6 = *(longlong **)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x10) = uVar4;
  *(longlong *)(param_1 + 0x18) = lVar5;
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
  LOCK();
  uVar3 = *(undefined1 *)(param_1 + 0x20);
  *(undefined1 *)(param_1 + 0x20) = 1;
  UNLOCK();
  return uVar3;
}



// FUNCTION 1411b0f48 FUN_1411b0f48 body=265 status=ok
// SIG undefined FUN_1411b0f48(void)

undefined8 *
FUN_1411b0f48(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
             undefined4 param_5,undefined4 param_6,undefined8 *param_7,int param_8)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  longlong *plVar12;
  
  *param_1 = &PTR_FUN_149e16d90;
  param_1[1] = &PTR_FUN_149e16dc0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[6] = *param_3;
  param_1[8] = param_3[2];
  param_3[2] = 0;
  uVar9 = param_3[4];
  uVar10 = param_3[5];
  uVar11 = param_3[7];
  param_1[0xc] = param_3[6];
  param_1[0xd] = uVar11;
  param_1[10] = uVar9;
  param_1[0xb] = uVar10;
  if (param_1[6] != 0) {
    *param_3 = 0;
  }
  param_1[0xe] = *param_4;
  param_1[0x10] = param_4[2];
  param_4[2] = 0;
  uVar1 = *(undefined4 *)(param_4 + 4);
  uVar2 = *(undefined4 *)((longlong)param_4 + 0x24);
  uVar3 = *(undefined4 *)(param_4 + 5);
  uVar4 = *(undefined4 *)((longlong)param_4 + 0x2c);
  uVar5 = *(undefined4 *)(param_4 + 6);
  uVar6 = *(undefined4 *)((longlong)param_4 + 0x34);
  uVar7 = *(undefined4 *)(param_4 + 7);
  uVar8 = *(undefined4 *)((longlong)param_4 + 0x3c);
  *(undefined4 *)(param_1 + 0x14) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0xa4) = uVar6;
  *(undefined4 *)(param_1 + 0x15) = uVar7;
  *(undefined4 *)((longlong)param_1 + 0xac) = uVar8;
  *(undefined4 *)(param_1 + 0x12) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0x94) = uVar2;
  *(undefined4 *)(param_1 + 0x13) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x9c) = uVar4;
  if (param_1[0xe] != 0) {
    *param_4 = 0;
  }
  if (param_8 == 0) {
    plVar12 = (longlong *)FUN_14275bfaa(param_1,uVar5,param_5,param_6,*param_7,0,0);
  }
  else {
    plVar12 = (longlong *)FUN_1411b1052(param_1);
  }
  param_1[0x16] = plVar12;
  (**(code **)(*plVar12 + 8))(plVar12,param_7);
  return param_1;
}



// FUNCTION 1411b1052 FUN_1411b1052 body=368 status=ok
// SIG undefined FUN_1411b1052(void)

longlong *
FUN_1411b1052(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
             undefined8 param_5,undefined1 param_6)

{
  char cVar1;
  byte bVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if (DAT_14c846b14 == '\x01') {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c83f0fc) && (FUN_144b3d300(&DAT_14c83f0fc), DAT_14c83f0fc == -1)) {
      if (DAT_14c846b14 == '\0') {
        FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                      L"Attempting to get the command line but it hasn\'t been initialized yet.");
      }
      bVar2 = FUN_14054d46e(&DAT_14c846b20,L"nothreading");
      DAT_14c83f0f8 = bVar2 ^ 1;
      _Init_thread_footer(&DAT_14c83f0fc);
    }
    if (DAT_14c83f0f8 != 1) {
      lVar4 = (**(code **)(*param_1 + 0x20))(param_1);
      if (lVar4 == 0) {
        return (longlong *)0x0;
      }
      plVar3 = (longlong *)FUN_14001cc68(0x48,0x10);
      FUN_1467c2aaa(plVar3);
      goto LAB_1411b10d3;
    }
  }
  plVar3 = (longlong *)FUN_14001cc68(0x40,0x10);
  plVar3[1] = 0;
  plVar3[2] = 0;
  plVar3[3] = 0;
  plVar3[4] = 0;
  plVar3[5] = -1;
  plVar3[6] = 0;
  plVar3[7] = 0;
  *plVar3 = (longlong)&PTR_FUN_149e416b0;
LAB_1411b10d3:
  if (plVar3 != (longlong *)0x0) {
    cVar1 = (**(code **)(*plVar3 + 0x38))(plVar3,param_1,param_2,param_3,param_4,param_5,param_6);
    if (cVar1 != '\0') {
      return plVar3;
    }
    (**(code **)(*plVar3 + 0x30))(plVar3,1);
  }
  return (longlong *)0x0;
}



// FUNCTION 1411b11ce FUN_1411b11ce body=176 status=ok
// SIG undefined FUN_1411b11ce(void)

undefined8 * FUN_1411b11ce(undefined8 *param_1)

{
  FUN_144805d84();
  *param_1 = &PTR_FUN_14a76bb10;
  param_1[5] = &PTR_LAB_14a76bf90;
  param_1[6] = &PTR_LAB_14a76bfd0;
  *(undefined1 *)(param_1 + 0x22) = 1;
  *(byte *)((longlong)param_1 + 0x111) = *(byte *)((longlong)param_1 + 0x111) & 0xf8;
  *(undefined1 *)((longlong)param_1 + 0x112) = 2;
  *(undefined8 *)((longlong)param_1 + 0x114) = 0x3f80000040a00000;
  param_1[0x34] = 0;
  *(undefined8 *)((longlong)param_1 + 0x11c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x124) = 0;
  *(undefined8 *)((longlong)param_1 + 300) = 0;
  *(undefined8 *)((longlong)param_1 + 0x134) = 0;
  *(undefined8 *)((longlong)param_1 + 0x13c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x144) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x154) = 0;
  *(undefined8 *)((longlong)param_1 + 0x15c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x164) = 0;
  *(undefined8 *)((longlong)param_1 + 0x16c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x174) = 0;
  *(undefined8 *)((longlong)param_1 + 0x17c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x184) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x194) = 0;
  *(byte *)((longlong)param_1 + 0x4a) = *(byte *)((longlong)param_1 + 0x4a) & 0xf9 | 2;
  *(undefined1 *)(param_1 + 9) = 0;
  return param_1;
}



// FUNCTION 1411b1284 FUN_1411b1284 body=228 status=ok
// SIG undefined FUN_1411b1284(void)

longlong FUN_1411b1284(void)

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
  if (DAT_14cbafac0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_143564180;
    local_28 = &LAB_14115fc28;
    local_38 = &LAB_148c4a707;
    local_40 = FUN_1465f0b8b;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x58;
    FUN_14081cfa3(L"/Script/OakGame",L"OakUIBaseDataCollector_LocalPlayer",&DAT_14cbafac0,
                  &DAT_148c4a706);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbafac0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411b136a FUN_1411b136a body=2299 status=ok
// SIG undefined FUN_1411b136a(void)

void FUN_1411b136a(longlong param_1,longlong param_2)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int iVar11;
  longlong *plVar12;
  char *pcVar13;
  char *pcVar14;
  undefined4 uVar15;
  float fVar16;
  float fVar17;
  undefined1 auStack_1f8 [32];
  longlong local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  char *local_1c0;
  int local_1b8;
  char **local_1b0;
  longlong local_1a8;
  longlong *local_1a0;
  int *local_198;
  float *local_190;
  float local_188;
  int local_184;
  char local_180;
  undefined7 uStack_17f;
  longlong local_178;
  longlong local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  ushort local_140;
  byte local_138;
  undefined1 local_130;
  longlong local_128;
  longlong lStack_120;
  longlong local_118;
  longlong *local_a8;
  uint local_a0;
  uint local_9c;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  FUN_14094f6bc();
  if ((*(int *)(param_1 + 0x90) == 0) && (*(int *)(param_1 + 0x70) == 0)) goto LAB_1411b19eb;
  if ((*(byte *)(param_2 + 0x90) & 1) != 0) {
    local_128 = 0;
    lStack_120 = 0;
    local_118 = 0;
    uVar5 = FUN_140c1c194();
    lStack_120 = FUN_14477b664(uVar5);
    lVar6 = FUN_1411b1c66();
    uVar5 = FUN_1411b1c66();
    FUN_1402d1bfa(&local_180,uVar5,param_1);
    if (local_128 != CONCAT71(uStack_17f,local_180)) {
      local_118 = 0;
    }
    local_128 = CONCAT71(uStack_17f,local_180);
    lVar7 = FUN_140c1c194();
    if (lVar6 == 0) {
LAB_1411b1ad5:
      lVar7 = lVar6;
    }
    else if (lVar7 == 0) {
      lVar7 = 0;
    }
    else if ((*(int *)(lVar7 + 0x38) <= *(int *)(lVar6 + 0x38)) &&
            (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
             lVar7 + 0x30)) goto LAB_1411b1ad5;
    if (lStack_120 != lVar7) {
      local_118 = 0;
    }
    uVar5 = FUN_14477b664(lVar7);
    lStack_120 = FUN_14477b664(uVar5);
    if ((lStack_120 != 0) && (local_128 != 0)) {
      local_118 = param_1;
    }
    FUN_14095186a(param_2,&local_128);
  }
  local_128 = 0;
  lStack_120 = 0;
  local_118 = 0;
  uVar5 = FUN_140c1c194();
  lStack_120 = FUN_14477b664(uVar5);
  lVar6 = FUN_1411b1c66();
  uVar5 = FUN_1411b1c66();
  FUN_1402d1bfa(&local_180,uVar5,param_1);
  if (local_128 != CONCAT71(uStack_17f,local_180)) {
    local_118 = 0;
  }
  local_128 = CONCAT71(uStack_17f,local_180);
  lVar7 = FUN_140c1c194();
  if (lVar6 == 0) {
LAB_1411b1470:
    lVar7 = lVar6;
  }
  else if (lVar7 == 0) {
    lVar7 = 0;
  }
  else if ((*(int *)(lVar7 + 0x38) <= *(int *)(lVar6 + 0x38)) &&
          (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
           lVar7 + 0x30)) goto LAB_1411b1470;
  if (lStack_120 != lVar7) {
    local_118 = 0;
  }
  uVar5 = FUN_14477b664(lVar7);
  lStack_120 = FUN_14477b664(uVar5);
  if ((lStack_120 != 0) && (local_128 != 0)) {
    local_118 = param_1;
  }
  lVar6 = FUN_140950860();
  if (lVar6 == 0) {
    pcVar13 = (char *)0x0;
    local_1b8 = 0;
  }
  else {
    pcVar13 = *(char **)(lVar6 + 0x18);
    local_1b8 = *(int *)(lVar6 + 0x20);
  }
  local_1c0 = pcVar13;
  if (((*(byte *)(param_2 + 0x90) & 2) != 0) && (*(char *)(param_1 + 0x9c) == '\x01')) {
    if (local_1b8 == 0) goto LAB_1411b19eb;
    pcVar14 = pcVar13 + (longlong)local_1b8 * 0x58;
    do {
      if (*pcVar13 == '\0') {
        if ((longlong)*(int *)(param_1 + 0x90) == 0) {
          local_1d8 = 0;
          uStack_1d0 = 0;
          local_1c8 = 0;
        }
        else {
          local_a8 = (longlong *)0x0;
          local_9c = 0x20;
          lVar6 = (longlong)*(int *)(param_1 + 0x70) + (longlong)*(int *)(param_1 + 0x90);
          local_a0 = (uint)lVar6;
          if (0x20 < local_a0) {
            FUN_140fb08bc(&local_128);
          }
          plVar9 = local_a8;
          if (local_a8 == (longlong *)0x0) {
            plVar9 = &local_128;
          }
          memset(plVar9,0,lVar6 * 4);
          local_184 = 0;
          local_188 = 0.0;
          local_1b0 = &local_1c0;
          local_198 = &local_184;
          local_190 = &local_188;
          local_1a8 = param_2;
          local_1a0 = &local_128;
          if ((longlong)*(int *)(param_1 + 0x90) != 0) {
            plVar9 = *(longlong **)(param_1 + 0x88);
            lVar6 = (longlong)*(int *)(param_1 + 0x90) * 0x18;
            do {
              lVar7 = plVar9[1];
              if (lVar7 == 0) {
                uVar5 = FUN_140c1c194();
                lVar7 = FUN_14477b664(uVar5);
                plVar9[1] = lVar7;
              }
              lVar8 = plVar9[2];
              if (lVar8 == 0) {
                if ((lVar7 != 0) && (*plVar9 != 0)) {
                  plVar12 = *(longlong **)(lVar7 + 0xb8);
                  if ((plVar12 == (longlong *)0x0) ||
                     (cVar3 = (**(code **)(*plVar12 + 0x108))(plVar12), cVar3 == '\0')) {
                    lVar8 = 0;
                  }
                  else {
                    uVar5 = (**(code **)(*plVar12 + 0x110))(plVar12);
                    lVar8 = FUN_144aff482(uVar5,plVar9);
                  }
                  plVar9[2] = lVar8;
                  goto LAB_1411b1661;
                }
                FUN_1411b1ca0(&local_1c0,plVar9);
LAB_1411b16f2:
                uVar15 = 0;
              }
              else {
LAB_1411b1661:
                cVar3 = FUN_1411b1ca0(&local_1c0,plVar9);
                uVar15 = 0;
                if ((lVar8 != 0) && (cVar3 == '\0')) {
                  cVar3 = FUN_14094f774(param_2,lVar8);
                  uVar15 = 0x3f800000;
                  if (cVar3 == '\0') goto LAB_1411b16f2;
                }
              }
              plVar12 = local_a8;
              if (local_a8 == (longlong *)0x0) {
                plVar12 = &local_128;
              }
              *(undefined4 *)((longlong)plVar12 + (longlong)local_184 * 4) = uVar15;
              plVar12 = local_a8;
              if (local_a8 == (longlong *)0x0) {
                plVar12 = &local_128;
              }
              local_188 = *(float *)((longlong)plVar12 + (longlong)local_184 * 4) + local_188;
              local_184 = local_184 + 1;
              plVar9 = plVar9 + 3;
              lVar6 = lVar6 + -0x18;
            } while (lVar6 != 0);
          }
          if ((longlong)*(int *)(param_1 + 0x70) != 0) {
            lVar7 = (longlong)*(int *)(param_1 + 0x70) * 0x38;
            lVar6 = *(longlong *)(param_1 + 0x68) + 8;
            do {
              FUN_143c95252(&local_1b0,lVar6);
              lVar6 = lVar6 + 0x38;
              lVar7 = lVar7 + -0x38;
            } while (lVar7 != 0);
          }
          uVar4 = local_a0;
          if (*(char *)(param_1 + 0x9d) != '\0') {
            lVar6 = (longlong)(int)local_a0;
            local_a0 = local_a0 + 1;
            if (local_9c < local_a0) {
              FUN_140fb08bc(&local_128,uVar4);
            }
            plVar9 = local_a8;
            if (local_a8 == (longlong *)0x0) {
              plVar9 = &local_128;
            }
            fVar17 = *(float *)(param_1 + 0xa0);
            *(float *)((longlong)plVar9 + lVar6 * 4) = fVar17;
            local_188 = fVar17 + local_188;
          }
          fVar17 = local_188;
          plVar9 = local_a8;
          if (local_a8 == (longlong *)0x0) {
            plVar9 = &local_128;
          }
          lVar6 = (longlong)(int)local_a0;
          uVar4 = rand();
          iVar11 = -1;
          if (0 < lVar6) {
            fVar17 = fVar17 * ((float)(uVar4 & 0x7fff) / 32767.0);
            fVar16 = 0.0;
            lVar8 = 0x10;
            lVar7 = 0;
            do {
              bVar2 = fVar16 <= fVar17;
              fVar16 = fVar16 + *(float *)((longlong)plVar9 + lVar7 * 4);
              if ((bVar2) && (fVar17 <= fVar16)) {
                iVar11 = (int)lVar7;
                if (iVar11 < *(int *)(param_1 + 0x90)) {
                  lVar6 = *(longlong *)(param_1 + 0x88);
                  local_1d8 = *(longlong *)(lVar6 + -0x10 + lVar8);
                  uVar5 = FUN_14477b664(*(undefined8 *)(lVar6 + -8 + lVar8));
                  uStack_1d0 = FUN_14477b664(uVar5);
                  local_1c8 = *(undefined8 *)(lVar6 + lVar8);
                  goto LAB_1411b185c;
                }
                break;
              }
              lVar7 = lVar7 + 1;
              lVar8 = lVar8 + 0x18;
            } while (lVar6 != lVar7);
          }
          uVar4 = iVar11 - *(int *)(param_1 + 0x90);
          if (((int)uVar4 < 0) || (*(int *)(param_1 + 0x70) <= (int)uVar4)) {
            local_1d8 = 0;
            uStack_1d0 = 0;
            local_1c8 = 0;
          }
          else {
            FUN_141845010(&local_1d8,*(longlong *)(param_1 + 0x68) + (ulonglong)uVar4 * 0x38 + 8);
          }
LAB_1411b185c:
          if (local_a8 != (longlong *)0x0) {
            FUN_1400020a8();
          }
        }
        local_180 = '\x01';
        local_170 = 0;
        uStack_168 = 0;
        local_178 = local_1d8;
        uVar5 = FUN_14477b664(uStack_1d0);
        local_170 = FUN_14477b664(uVar5);
        uStack_168 = local_1c8;
        local_160 = 0;
        local_140 = 0;
        local_138 = 0;
        local_130 = 0;
        *pcVar13 = local_180;
        if (*(longlong *)(pcVar13 + 8) != local_178) {
          pcVar13[0x18] = '\0';
          pcVar13[0x19] = '\0';
          pcVar13[0x1a] = '\0';
          pcVar13[0x1b] = '\0';
          pcVar13[0x1c] = '\0';
          pcVar13[0x1d] = '\0';
          pcVar13[0x1e] = '\0';
          pcVar13[0x1f] = '\0';
        }
        *(longlong *)(pcVar13 + 8) = local_178;
        if (*(longlong *)(pcVar13 + 0x10) != local_170) {
          pcVar13[0x18] = '\0';
          pcVar13[0x19] = '\0';
          pcVar13[0x1a] = '\0';
          pcVar13[0x1b] = '\0';
          pcVar13[0x1c] = '\0';
          pcVar13[0x1d] = '\0';
          pcVar13[0x1e] = '\0';
          pcVar13[0x1f] = '\0';
        }
        uVar5 = FUN_14477b664();
        uVar5 = FUN_14477b664(uVar5);
        *(undefined8 *)(pcVar13 + 0x10) = uVar5;
        *(undefined8 *)(pcVar13 + 0x18) = uStack_168;
        FUN_1403719a4(pcVar13 + 0x20);
        pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_138 * 0x120));
        if (pcVar1 != (code *)0x0) {
          (*pcVar1)();
        }
        if (0x18 < local_140) {
          FUN_1400020a8();
        }
      }
      pcVar13 = pcVar13 + 0x58;
    } while (pcVar13 != pcVar14);
  }
  pcVar13 = local_1c0;
  if (local_1b8 != 0) {
    lVar6 = (longlong)local_1b8;
    lVar7 = 0;
    do {
      if (pcVar13[lVar7] == '\x01') {
        lVar8 = *(longlong *)(pcVar13 + lVar7 + 0x10);
        if (lVar8 == 0) {
          uVar5 = FUN_140c1c194();
          lVar8 = FUN_14477b664(uVar5);
          *(longlong *)(pcVar13 + lVar7 + 0x10) = lVar8;
        }
        lVar10 = *(longlong *)(pcVar13 + lVar7 + 0x18);
        if (lVar10 == 0) {
          if ((*(longlong *)(pcVar13 + lVar7 + 8) != 0) && (lVar8 != 0)) {
            plVar9 = *(longlong **)(lVar8 + 0xb8);
            if ((plVar9 == (longlong *)0x0) ||
               (cVar3 = (**(code **)(*plVar9 + 0x108))(plVar9), cVar3 == '\0')) {
              pcVar14 = pcVar13 + lVar7 + 0x18;
              pcVar14[0] = '\0';
              pcVar14[1] = '\0';
              pcVar14[2] = '\0';
              pcVar14[3] = '\0';
              pcVar14[4] = '\0';
              pcVar14[5] = '\0';
              pcVar14[6] = '\0';
              pcVar14[7] = '\0';
            }
            else {
              uVar5 = (**(code **)(*plVar9 + 0x110))(plVar9);
              lVar10 = FUN_144aff482(uVar5,pcVar13 + lVar7 + 8);
              *(longlong *)(pcVar13 + lVar7 + 0x18) = lVar10;
              if (lVar10 != 0) goto LAB_1411b1536;
            }
          }
        }
        else {
LAB_1411b1536:
          FUN_14094eece(param_2,lVar10);
        }
      }
      lVar7 = lVar7 + 0x58;
    } while (lVar6 * 0x58 - lVar7 != 0);
  }
LAB_1411b19eb:
  if ((local_90 ^ (ulonglong)auStack_1f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411b1c66 FUN_1411b1c66 body=57 status=ok
// SIG undefined FUN_1411b1c66(void)

void FUN_1411b1c66(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb58598 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb58598 = FUN_140002ddd(FUN_1464c179e,uVar1,L"GbxActorPartDef_Budget");
  }
  return;
}



// FUNCTION 1411b1ca0 FUN_1411b1ca0 body=418 status=ok
// SIG undefined FUN_1411b1ca0(void)

undefined8 FUN_1411b1ca0(longlong *param_1,longlong *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 ****ppppuVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  undefined1 auStack_c8 [40];
  char local_a0;
  longlong local_98;
  undefined8 local_90;
  longlong local_88;
  undefined8 local_80;
  undefined8 ***local_78 [3];
  ushort local_60;
  byte local_58;
  undefined1 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if ((longlong)(int)param_1[1] != 0) {
    lVar5 = (longlong)(int)param_1[1] * 0x58;
    lVar4 = *param_1 + 0x28;
    do {
      local_a0 = '\x01';
      local_90 = 0;
      local_98 = *param_2;
      local_88 = 0;
      FUN_14477b664(param_2[1]);
      local_90 = FUN_14477b664();
      local_88 = param_2[2];
      local_80 = 0;
      local_60 = 0;
      local_58 = 0;
      local_50 = 0;
      cVar6 = *(char *)(lVar4 + -0x28);
      if (cVar6 == local_a0) {
        if (cVar6 == '\x01') {
          cVar6 = *(longlong *)(lVar4 + -0x20) == local_98;
LAB_1411b1d82:
          pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_58 * 0x120));
          if (pcVar1 != (code *)0x0) {
            ppppuVar3 = local_78;
            if (0x18 < local_60) {
              ppppuVar3 = (undefined8 ****)local_78[0];
            }
            (*pcVar1)(ppppuVar3);
          }
          if (0x18 < local_60) {
            FUN_1400020a8(local_78[0]);
          }
          if (cVar6 == '\0') goto LAB_1411b1da8;
        }
        else {
          if (cVar6 == '\x02') {
            cVar6 = FUN_144a43716(lVar4,local_78);
            goto LAB_1411b1d82;
          }
          FUN_144a2da94(&local_80);
        }
        uVar2 = 1;
        goto LAB_1411b1dd1;
      }
      if ((DAT_14c9a85d0 != (code *)0x0) && ((*DAT_14c9a85d0)(local_78), 0x18 < local_60)) {
        FUN_1400020a8(local_78[0]);
      }
LAB_1411b1da8:
      lVar4 = lVar4 + 0x58;
      lVar5 = lVar5 + -0x58;
    } while (lVar5 != 0);
  }
  uVar2 = 0;
LAB_1411b1dd1:
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 1411b1e44 FUN_1411b1e44 body=822 status=ok
// SIG undefined FUN_1411b1e44(void)

void FUN_1411b1e44(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 *puVar11;
  int iVar12;
  ulonglong uVar13;
  undefined1 auStack_c8 [32];
  undefined2 *local_a8;
  undefined8 *local_a0;
  undefined4 local_98;
  undefined2 local_90 [2];
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_80;
  byte local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar9 = FUN_1400d7050(param_1 + 0x30);
  if (lVar9 != 0) {
    lVar10 = FUN_144a5dd5e();
    if ((*(int *)(lVar10 + 0x38) <= *(int *)(*(longlong *)(lVar9 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) + (longlong)*(int *)(lVar10 + 0x38) * 8)
        == lVar10 + 0x30)) {
      if (*(longlong *)(lVar9 + 0x398) != 0) {
        lVar10 = FUN_144a7b4ca();
        plVar3 = *(longlong **)(lVar9 + 0x398);
        if ((((plVar3 != (longlong *)0x0) && (lVar10 != 0)) && (lVar4 = plVar3[2], lVar4 != 0)) &&
           ((*(int *)(lVar10 + 0x38) <= *(int *)(lVar4 + 0x38) &&
            (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar10 + 0x38) * 8) ==
             lVar10 + 0x30)))) {
          iVar2 = *(int *)(param_1 + 0xd8);
          if (0 < (longlong)iVar2) {
            plVar1 = (longlong *)(param_1 + 0xd0);
            iVar12 = -iVar2;
            uVar13 = (longlong)iVar2;
            do {
              if ((longlong)uVar13 <= (longlong)*(int *)(param_1 + 0xd8)) {
                if (DAT_14cb8d3c0 == 0) {
                  lVar10 = 0;
                }
                else {
                  lVar10 = FUN_1409503e6(DAT_14cb8d3c0,*(undefined8 *)(*plVar1 + -8 + uVar13 * 8));
                }
                lVar10 = (**(code **)(*plVar3 + 0x7e0))(plVar3,lVar10 + 0x1c);
                if ((lVar10 != 0) &&
                   (cVar7 = FUN_1411b2196(lVar10,*(undefined8 *)(*plVar1 + -8 + uVar13 * 8)),
                   cVar7 != '\0')) {
                  uVar8 = *(uint *)(param_1 + 0xd8);
                  if (uVar13 != uVar8) {
                    memmove((void *)(*(longlong *)(param_1 + 0xd0) + uVar13 * 8 + -8),
                            (void *)(*(longlong *)(param_1 + 0xd0) + uVar13 * 8),
                            (longlong)(int)(uVar8 + iVar12) << 3);
                    uVar8 = *(uint *)(param_1 + 0xd8);
                  }
                  *(uint *)(param_1 + 0xd8) = uVar8 - 1;
                  FUN_1411b2468(plVar1);
                }
              }
              iVar12 = iVar12 + 1;
              bVar6 = 1 < uVar13;
              uVar13 = uVar13 - 1;
            } while (bVar6);
          }
        }
      }
      if ((*(int *)(param_1 + 0xd8) == 0) ||
         (*(byte *)(param_1 + 0xe8) <= *(byte *)(param_1 + 0xe9))) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_c8);
      }
      lVar9 = FUN_1447210f0(lVar9);
      if (lVar9 != 0) {
        *(char *)(param_1 + 0xe9) = *(char *)(param_1 + 0xe9) + '\x01';
        if (*(longlong *)(lVar9 + 0x1f0) == 0) {
          puVar11 = (undefined8 *)(lVar9 + 0x458);
        }
        else {
          puVar11 = (undefined8 *)(*(longlong *)(lVar9 + 0x1f0) + 0xf0);
        }
        uVar5 = *puVar11;
        local_a0 = (undefined8 *)0x0;
        local_98 = 0;
        FUN_1446efa72(&local_a0,0,3,0x10);
        puVar11 = local_a0;
        local_98 = 3;
        *local_a0 = &PTR_LAB_14a1c8830;
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
        local_a0[2] = lVar10;
        *local_a0 = &PTR_FUN_14b9b9800;
        local_a0[3] = 0;
        FUN_14485c47a(local_a0 + 3,param_1);
        *(undefined4 *)(puVar11 + 5) = 0;
        puVar11[4] = FUN_1411b1e44;
        local_88 = 0;
        local_80 = 0;
        FUN_14487d8d8(&local_88,&local_a0);
        local_48 = 1;
        local_a8 = local_90;
        local_90[0] = 0;
        local_8c = 0xbf800000;
        FUN_1406f4044(uVar5,param_1 + 0xe0,&local_88,0x3f800000);
        (*(code *)(&PTR_LAB_14a1c87a0)[local_48])(&local_88);
        FUN_1449db362(&local_a0);
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1411b2196 FUN_1411b2196 body=720 status=ok
// SIG undefined FUN_1411b2196(void)

ulonglong FUN_1411b2196(longlong param_1,ulonglong param_2)

{
  uint *puVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  undefined4 *puVar10;
  longlong *plVar11;
  undefined4 *puVar12;
  ulonglong uVar13;
  undefined1 auStack_88 [40];
  uint local_60 [6];
  longlong local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((((param_2 == 0) || (DAT_14cb8d3c0 == 0)) || (lVar5 = FUN_1409503e6(), lVar5 == 0)) ||
     (*(char *)(lVar5 + 0x18) != '\x01')) {
    uVar13 = 0;
    goto LAB_1411b2256;
  }
  puVar10 = *(undefined4 **)(lVar5 + 8);
  puVar12 = &DAT_14c9485f0;
  if (puVar10 == (undefined4 *)0x0) {
    puVar10 = &DAT_14c9485f0;
  }
  FUN_1447a97f4(local_60,puVar10);
  if (*(int *)(param_1 + 0x40) != *(int *)(param_1 + 0x6c)) {
    lVar8 = param_1 + 0x70;
    if (*(longlong *)(param_1 + 0x78) != 0) {
      lVar8 = *(longlong *)(param_1 + 0x78);
    }
    iVar9 = *(int *)(lVar8 + (ulonglong)(*(int *)(param_1 + 0x80) - 1U & local_60[0]) * 4);
    if (iVar9 != -1) {
      do {
        lVar8 = *(longlong *)(param_1 + 0x38) + (longlong)iVar9 * 0x38;
        if (*(uint *)(*(longlong *)(param_1 + 0x38) + (longlong)iVar9 * 0x38) == local_60[0]) {
          if (((longlong *)(lVar8 + 0x28) != (longlong *)0x0 && lVar8 != 0) &&
             (lVar8 = *(longlong *)(lVar8 + 0x28), lVar8 != 0)) {
            if ((*(char *)(lVar5 + 0x24) != '\x01') ||
               (uVar4 = *(uint *)(param_2 + 0x1c), (int)uVar4 < 0)) {
              if (*(int *)(lVar8 + 0x58) == *(int *)(lVar8 + 0x84)) goto LAB_1411b236a;
              uVar4 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
              uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
              lVar5 = lVar8 + 0x88;
              if (*(longlong *)(lVar8 + 0x90) != 0) {
                lVar5 = *(longlong *)(lVar8 + 0x90);
              }
              iVar9 = *(int *)(lVar5 + (ulonglong)
                                       (*(int *)(lVar8 + 0x98) - 1U & (uVar4 >> 0x10 ^ uVar4)) * 4);
              if (iVar9 == -1) goto LAB_1411b236a;
              lVar5 = *(longlong *)(lVar8 + 0x50);
              goto LAB_1411b234e;
            }
            if ((int)uVar4 < *(int *)(lVar8 + 0x48)) {
              lVar5 = lVar8 + 0x30;
              if (*(longlong *)(lVar8 + 0x40) != 0) {
                lVar5 = *(longlong *)(lVar8 + 0x40);
              }
              bVar2 = (byte)uVar4 & 0x1f;
              puVar1 = (uint *)(lVar5 + (ulonglong)(uVar4 >> 5) * 4);
              *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
              goto LAB_1411b236a;
            }
          }
          break;
        }
        iVar9 = *(int *)(lVar8 + 0x30);
      } while (iVar9 != -1);
    }
  }
  uVar13 = 0;
  goto LAB_1411b22d2;
  while (iVar9 = *(int *)((longlong)iVar9 * 0x10 + lVar5 + 8), iVar9 != -1) {
LAB_1411b234e:
    if (*(ulonglong *)(lVar5 + (longlong)iVar9 * 0x10) == param_2) {
      FUN_1489ad8d8((longlong *)(lVar8 + 0x50),param_2);
      break;
    }
  }
LAB_1411b236a:
  if (((((*(int *)(param_1 + 0x8c) != 0) && (uVar4 = *(uint *)(param_1 + 0x88), -1 < (int)uVar4)) &&
       (((int)uVar4 < DAT_14c9647dc &&
        (((plVar11 = (longlong *)
                     ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8)),
          plVar11 != (longlong *)0x0 && ((int)plVar11[2] == *(int *)(param_1 + 0x8c))) &&
         ((*(uint *)(plVar11 + 1) & 0x10200000) == 0)))))) &&
      ((lVar5 = *plVar11, lVar5 != 0 && (lVar6 = FUN_1447210f0(lVar5), lVar6 != 0)))) &&
     (*(longlong *)(lVar6 + 0x170) != 0)) {
    lVar7 = FUN_1411531be();
    plVar11 = *(longlong **)(lVar6 + 0x170);
    if (((plVar11 != (longlong *)0x0) && (lVar7 != 0)) &&
       ((lVar6 = plVar11[2], lVar6 != 0 &&
        (((*(int *)(lVar7 + 0x38) <= *(int *)(lVar6 + 0x38) &&
          (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
           lVar7 + 0x30)) && (cVar3 = (**(code **)(*plVar11 + 0x980))(plVar11,lVar5), cVar3 != '\0')
         ))))) {
      if (*(undefined4 **)(param_2 + 8) != (undefined4 *)0x0) {
        puVar12 = *(undefined4 **)(param_2 + 8);
      }
      FUN_1486dfda6(lVar5,local_60,puVar12);
    }
  }
  uVar13 = CONCAT71((int7)((ulonglong)puVar12 >> 8),1);
  FUN_141068718(param_1,lVar8,param_2,1);
LAB_1411b22d2:
  if (local_48 != 0) {
    FUN_1400020a8();
  }
LAB_1411b2256:
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar13 & 0xffffffff;
}



// FUNCTION 1411b2468 FUN_1411b2468 body=137 status=ok
// SIG undefined FUN_1411b2468(void)

void FUN_1411b2468(longlong param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar3 = (ulonglong)uVar1;
  iVar2 = *(int *)(param_1 + 0xc);
  if (((((longlong)(int)(iVar2 - uVar1) & 0x1ffffffffffff800U) != 0) ||
      ((int)(uVar1 * 3) < iVar2 * 2)) && ((uVar1 == 0 || (0x40 < (int)(iVar2 - uVar1))))) {
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



// FUNCTION 1411b24f2 FUN_1411b24f2 body=1363 status=ok
// SIG undefined FUN_1411b24f2(void)

void FUN_1411b24f2(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  void *_Src;
  undefined8 uVar3;
  undefined8 uVar4;
  char cVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined ***pppuVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined1 auStack_158 [32];
  longlong local_138;
  longlong *local_130;
  undefined4 local_128;
  undefined8 local_120;
  wchar_t *local_118;
  undefined1 *local_110;
  undefined1 *local_108;
  code **local_100;
  undefined1 *local_f8;
  code *local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  longlong local_d0;
  longlong *local_c8;
  undefined8 **local_c0;
  void *local_b8;
  undefined8 uStack_b0;
  undefined8 *local_a8;
  undefined8 uStack_a0;
  code *local_98;
  longlong lStack_90;
  undefined ***local_88;
  undefined **local_78;
  undefined8 **local_70;
  void *local_68;
  int local_60;
  undefined4 local_5c;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_158;
  if ((param_2 == 0) || (*(char *)(param_2 + 0x32b9) != '\x01')) goto LAB_1411b27cb;
  lVar7 = *(longlong *)(param_2 + 0x398);
  if (lVar7 != 0) {
    if (DAT_14cbae3d8 == 0) {
      local_100 = &local_98;
      local_98 = FUN_141030f22;
      local_f0 = FUN_14081d0ea;
      local_f8 = &LAB_1464f5fc4;
      local_108 = &LAB_148c3dd26;
      local_110 = &LAB_1459673ba;
      local_118 = L"Engine";
      local_120 = 0;
      local_128 = 0x10000004;
      local_130 = (longlong *)CONCAT44(local_130._4_4_,0x10);
      local_138 = CONCAT44(local_138._4_4_,0x1360);
      FUN_14081cfa3();
      lVar7 = *(longlong *)(param_2 + 0x398);
      if (lVar7 == 0) goto LAB_1411b257d;
    }
    if ((((DAT_14cbae3d8 != 0) && (lVar10 = *(longlong *)(lVar7 + 0x10), lVar10 != 0)) &&
        (*(int *)(DAT_14cbae3d8 + 0x38) <= *(int *)(lVar10 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar10 + 0x30) + (longlong)*(int *)(DAT_14cbae3d8 + 0x38) * 8)
        == DAT_14cbae3d8 + 0x30)) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14cbc8be0) &&
         (FUN_144b3d300(), uVar4 = DAT_14cbcfbe8, uVar3 = DAT_14cbcfbe0, uVar6 = DAT_14cbcfbd8,
         DAT_14cbc8be0 == -1)) {
        DAT_14cbc8bd0 = (undefined8 *)0x0;
        DAT_14cbc8bd8 = 3;
        FUN_1401b309e(&DAT_14cbc8bd0);
        puVar11 = DAT_14cbc8bd0;
        *DAT_14cbc8bd0 = uVar6;
        puVar11[1] = uVar3;
        puVar11[2] = uVar4;
        atexit((_func_5014 *)&LAB_14410bf57);
        _Init_thread_footer();
      }
      if ((longlong)DAT_14cbc8bd8 != 0) {
        lVar10 = (longlong)DAT_14cbc8bd8 << 3;
        puVar11 = DAT_14cbc8bd0;
        do {
          local_98 = (code *)0x0;
          lStack_90 = 0;
          local_138 = 0;
          FUN_14117274e(lVar7 + 0xd50,puVar11,&local_98,1);
          uVar6 = FUN_1402a1246(param_2);
          cVar5 = FUN_1415839cc(&local_98,uVar6);
          if (cVar5 != '\0') {
            FUN_148db693c(lVar7 + 0xd50,puVar11);
          }
          FUN_14028f404(local_98);
          if (local_98 != (code *)0x0) {
            FUN_1400020a8();
          }
          puVar11 = puVar11 + 1;
          lVar10 = lVar10 + -8;
        } while (lVar10 != 0);
      }
    }
  }
LAB_1411b257d:
  lVar7 = *(longlong *)(param_2 + 0xc38);
  if (lVar7 != 0) {
    plVar1 = (longlong *)(param_2 + 0xe18);
    local_c0 = &local_a8;
    local_a8 = (undefined8 *)0x0;
    uStack_a0 = 0;
    local_b8 = (void *)0x0;
    iVar2 = *(int *)(param_1 + 1);
    _Src = (void *)*param_1;
    if ((longlong)iVar2 == 0) {
      local_68 = (void *)0x0;
      local_60 = 0;
      local_5c = 0;
    }
    else {
      uStack_b0._0_4_ = iVar2;
      FUN_1465417ea(&local_b8,iVar2,0);
      memcpy(local_b8,_Src,(longlong)iVar2 << 3);
      local_68 = local_b8;
      local_60 = (int)uStack_b0;
      local_5c = uStack_b0._4_4_;
    }
    local_88 = (undefined ***)0x0;
    local_78 = &PTR_FUN_14b968920;
    local_b8 = (void *)0x0;
    uStack_b0 = 0;
    local_98 = FUN_144116fd6;
    local_70 = local_c0;
    (**(code **)(*plVar1 + 0x58))(plVar1,&local_98);
    if (local_98 != (code *)0x0) {
      pppuVar8 = local_88;
      if (local_88 == (undefined ***)0x0) {
        pppuVar8 = &local_78;
      }
      (*(code *)(*pppuVar8)[2])();
    }
    if (local_b8 != (void *)0x0) {
      FUN_1400020a8();
    }
    if ((longlong)(int)uStack_a0 != 0) {
      puVar11 = local_a8 + (longlong)(int)uStack_a0 * 3;
      puVar9 = local_a8;
      do {
        if (DAT_14c950c29 == '\x01') {
          FUN_1456cec3c(param_2);
        }
        local_138 = (longlong)puVar9 + 0xc;
        local_130 = &local_d0;
        local_d0 = param_2;
        local_c8 = plVar1;
        FUN_1488d8584(lVar7,2,*puVar9,puVar9 + 1);
        puVar9 = puVar9 + 3;
      } while (puVar9 != puVar11);
    }
    if (local_a8 != (undefined8 *)0x0) {
      FUN_1400020a8(local_a8);
    }
  }
  FUN_140a9b590(param_2 + 0x3910,&local_98,0);
  if (lStack_90 == 0) {
    uVar6 = FUN_14037df6e();
    lStack_90 = FUN_14477b664(uVar6);
  }
  pppuVar8 = local_88;
  if (local_88 == (undefined ***)0x0) {
    if (((local_98 == (code *)0x0) || (lStack_90 == 0)) ||
       ((plVar1 = *(longlong **)(lStack_90 + 0xb8), plVar1 == (longlong *)0x0 ||
        (cVar5 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar5 == '\0')))) goto LAB_1411b27cb;
    uVar6 = (**(code **)(*plVar1 + 0x110))(plVar1);
    pppuVar8 = (undefined ***)FUN_144aff482(uVar6,&local_98);
    if (pppuVar8 == (undefined ***)0x0) goto LAB_1411b27cb;
  }
  lVar7 = FUN_1402a1246(param_2);
  if ((lVar7 != 0) && (cVar5 = FUN_14037567c(pppuVar8,lVar7), cVar5 == '\0')) {
    lVar7 = FUN_1411cfb7f();
    local_e8 = *(undefined8 *)(lVar7 + 0x20);
    uVar6 = FUN_14477b664(*(undefined8 *)(lVar7 + 0x28));
    local_e0 = FUN_14477b664(uVar6);
    local_d8 = *(undefined8 *)(lVar7 + 0x30);
    FUN_14570615e(param_2,&local_e8);
  }
LAB_1411b27cb:
  if ((local_50 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1411b2a4c FUN_1411b2a4c body=221 status=ok
// SIG undefined FUN_1411b2a4c(void)

longlong FUN_1411b2a4c(void)

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
  if (DAT_14cab93f8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_14778ac00;
    local_40 = FUN_14635b88b;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x90;
    FUN_14081cfa3(L"/Script/UMG",L"DragDropOperation",&DAT_14cab93f8,FUN_14635b864);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cab93f8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411b2b2a FUN_1411b2b2a body=221 status=ok
// SIG undefined FUN_1411b2b2a(void)

longlong FUN_1411b2b2a(void)

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
  if (DAT_14cada940 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147aa2fc3;
    local_40 = FUN_1463c9dba;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/Engine",L"SaveGame",&DAT_14cada940,&DAT_147aa2fc2);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cada940;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411b2c08 FUN_1411b2c08 body=221 status=ok
// SIG undefined FUN_1411b2c08(void)

longlong FUN_1411b2c08(void)

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
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb1de30 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147e95610;
    local_40 = &LAB_14584e10a;
    local_48 = &DAT_149e063b2;
    local_50 = 0;
    local_58 = 0x10000005;
    local_60 = 8;
    local_68 = 0x68;
    FUN_14081cfa3(L"/Script/GameplayTasks",L"GameplayTask",&DAT_14cb1de30,FUN_146425478);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb1de30;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411b2cec FUN_1411b2cec body=221 status=ok
// SIG undefined FUN_1411b2cec(void)

longlong FUN_1411b2cec(void)

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
  if (DAT_14cb1fb98 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147eceda5;
    local_40 = FUN_14642c2d9;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/AIModule",L"EnvQueryContext",&DAT_14cb1fb98,&DAT_147eceda4);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb1fb98;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411b2dd0 FUN_1411b2dd0 body=221 status=ok
// SIG undefined FUN_1411b2dd0(void)

longlong FUN_1411b2dd0(void)

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
  if (DAT_14cb29798 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147fe77f3;
    local_40 = FUN_146458c86;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x40;
    FUN_14081cfa3(L"/Script/GameplayCameras",L"CameraVariableAsset",&DAT_14cb29798,&DAT_147fe77f2);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb29798;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411b2ec4 FUN_1411b2ec4 body=210 status=ok
// SIG undefined FUN_1411b2ec4(void)

void FUN_1411b2ec4(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar5 = FUN_1447210f0();
  FUN_1404d1e78(&local_28,uVar5);
  if (((local_28 != 0) && (local_20 != (longlong *)0x0)) && (0 < (int)local_20[1])) {
    iVar4 = (int)local_20[1];
    do {
      if (iVar4 == 0) {
        plVar7 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar3 = (int)local_20[1];
      bVar8 = iVar4 == iVar3;
      if (bVar8) {
        *(int *)(local_20 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
      plVar7 = local_20;
    } while (!bVar8);
    lVar6 = 0;
    if (plVar7 != (longlong *)0x0) {
      lVar6 = local_28;
    }
    FUN_1404d222a(lVar6,*(undefined4 *)(param_1 + 0x428),*(undefined1 *)(param_1 + 0x4f8));
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
  if (local_20 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)local_20 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*local_20 + 0x10))();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1411b2f98 FUN_1411b2f98 body=23 status=ok
// SIG undefined FUN_1411b2f98(void)

undefined8 FUN_1411b2f98(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (*(longlong *)(lVar1 + 0x3c) != 0) {
    return CONCAT71((int7)((ulonglong)lVar1 >> 8),(char)param_1[1] <= *(char *)(lVar1 + 0x38));
  }
  return 0;
}



// FUNCTION 1411b2fb0 FUN_1411b2fb0 body=271 status=ok
// SIG undefined FUN_1411b2fb0(void)

longlong * FUN_1411b2fb0(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  void *_Src;
  uint uVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  void *local_48;
  int local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((*(longlong *)(*param_1 + 0x3c) != 0) && ((char)param_1[1] <= *(char *)(*param_1 + 0x38))) {
    plVar2 = (longlong *)FUN_14027bf48();
    lVar5 = plVar2[1];
    uVar1 = (int)lVar5 + 1;
    *(uint *)(plVar2 + 1) = uVar1;
    if (*(uint *)((longlong)plVar2 + 0xc) < uVar1) {
      FUN_140eed74c();
    }
    puVar4 = (undefined8 *)((longlong)(int)lVar5 * 0x30 + *plVar2);
    local_48 = (void *)0x0;
    local_40 = *(int *)(param_3 + 1);
    lVar5 = (longlong)local_40;
    _Src = (void *)*param_3;
    if (lVar5 == 0) {
      local_3c = 0;
      iVar3 = 0;
    }
    else {
      FUN_1446dd670(&local_48,local_40,0);
      memcpy(local_48,_Src,lVar5 * 2);
      iVar3 = local_40;
    }
    *puVar4 = local_48;
    *(int *)(puVar4 + 1) = iVar3;
    *(undefined4 *)((longlong)puVar4 + 0xc) = local_3c;
    *(undefined1 *)(puVar4 + 4) = 4;
    puVar4[5] = *param_2;
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411b30c0 FUN_1411b30c0 body=132 status=ok
// SIG undefined FUN_1411b30c0(void)

longlong * FUN_1411b30c0(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  
  if ((*(longlong *)(*param_1 + 0x3c) != 0) && ((char)param_1[1] <= *(char *)(*param_1 + 0x38))) {
    plVar5 = (longlong *)FUN_14027bf48(param_1);
    iVar1 = (int)plVar5[1];
    *(uint *)(plVar5 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)plVar5 + 0xc) < iVar1 + 1U) {
      FUN_140eed74c(plVar5,iVar1);
    }
    lVar2 = *plVar5;
    lVar6 = (longlong)iVar1 * 0x30;
    uVar3 = *param_3;
    uVar4 = param_3[1];
    *param_3 = 0;
    param_3[1] = 0;
    *(undefined8 *)(lVar2 + lVar6) = uVar3;
    ((undefined8 *)(lVar2 + lVar6))[1] = uVar4;
    *(undefined1 *)(lVar2 + 0x20 + lVar6) = 4;
    *(undefined8 *)(lVar2 + 0x28 + lVar6) = *param_2;
  }
  return param_1;
}



// FUNCTION 1411b3144 FUN_1411b3144 body=94 status=ok
// SIG undefined FUN_1411b3144(void)

void FUN_1411b3144(longlong param_1,undefined4 param_2)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  FUN_1411b328a(param_1 + 0x18,
                *(int *)(*(longlong *)(param_1 + 0x10) + 0x140) * 0x200 +
                *(int *)(*(longlong *)(param_1 + 0x10) + 0x144));
  iVar1 = *(int *)(param_1 + 0x28);
  if ((longlong)iVar1 != 0) {
    uVar2 = 0;
    do {
      lVar3 = 0;
      do {
        *(undefined4 *)
         (*(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)(int)uVar2 * 8) + lVar3 * 4) =
             param_2;
        lVar3 = lVar3 + 1;
      } while (lVar3 != 0x200);
      uVar2 = (ulonglong)((int)uVar2 + 1);
    } while (uVar2 < (ulonglong)(longlong)iVar1);
  }
  return;
}



// FUNCTION 1411b31a2 FUN_1411b31a2 body=232 status=ok
// SIG undefined FUN_1411b31a2(void)

void FUN_1411b31a2(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong *plVar5;
  longlong lVar6;
  
  if ((longlong)*(int *)(param_1 + 0x28) != 0) {
    plVar5 = *(longlong **)(param_1 + 0x20);
    plVar1 = plVar5 + *(int *)(param_1 + 0x28);
    do {
      lVar3 = *plVar5;
      FUN_1411b328a(lVar3 + 0x70,param_3 * 3);
      iVar2 = *(int *)(lVar3 + 0x80);
      if ((longlong)iVar2 != 0) {
        uVar4 = 0;
        do {
          lVar6 = 0;
          do {
            *(undefined4 *)
             (*(longlong *)(*(longlong *)(lVar3 + 0x78) + (longlong)(int)uVar4 * 8) + lVar6 * 4) =
                 0xffffffff;
            lVar6 = lVar6 + 1;
          } while (lVar6 != 0x200);
          uVar4 = (ulonglong)((int)uVar4 + 1);
        } while (uVar4 < (ulonglong)(longlong)iVar2);
      }
      plVar5 = plVar5 + 1;
    } while (plVar5 != plVar1);
  }
  if ((longlong)*(int *)(param_1 + 0x38) != 0) {
    plVar5 = *(longlong **)(param_1 + 0x30);
    plVar1 = plVar5 + *(int *)(param_1 + 0x38);
    do {
      lVar3 = *plVar5;
      FUN_1411b328a(lVar3 + 0x70,param_3 * 3);
      iVar2 = *(int *)(lVar3 + 0x80);
      if ((longlong)iVar2 != 0) {
        uVar4 = 0;
        do {
          lVar6 = 0;
          do {
            *(undefined4 *)
             (*(longlong *)(*(longlong *)(lVar3 + 0x78) + (longlong)(int)uVar4 * 8) + lVar6 * 4) =
                 0xffffffff;
            lVar6 = lVar6 + 1;
          } while (lVar6 != 0x200);
          uVar4 = (ulonglong)((int)uVar4 + 1);
        } while (uVar4 < (ulonglong)(longlong)iVar2);
      }
      plVar5 = plVar5 + 1;
    } while (plVar5 != plVar1);
  }
  return;
}



// FUNCTION 1411b328a FUN_1411b328a body=215 status=ok
// SIG undefined FUN_1411b328a(void)

void FUN_1411b328a(int *param_1,uint param_2)

{
  longlong *plVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  void *_Dst;
  int iVar5;
  int iVar6;
  
  if (*param_1 * 0x200 + param_1[1] != param_2) {
    uVar3 = param_2 + 0x1ff;
    if (-1 < (int)param_2) {
      uVar3 = param_2;
    }
    uVar4 = (((int)uVar3 >> 9) + 1) - (uint)((param_2 & 0x1ff) == 0);
    uVar3 = 1;
    if (1 < (int)uVar4) {
      uVar3 = uVar4;
    }
    plVar1 = (longlong *)(param_1 + 2);
    puVar2 = (uint *)(param_1 + 4);
    iVar6 = uVar3 - *puVar2;
    if (iVar6 == 0 || (int)uVar3 < (int)*puVar2) {
      if (uVar3 < *puVar2) {
        FUN_1411b4058(plVar1,uVar3,0);
      }
    }
    else {
      do {
        _Dst = (void *)FUN_14001cc68(0x800);
        memset(_Dst,0,0x800);
        iVar5 = param_1[4];
        param_1[4] = iVar5 + 1U;
        if ((uint)param_1[5] < iVar5 + 1U) {
          FUN_1411b3bbe(plVar1,iVar5);
        }
        *(void **)(*plVar1 + (longlong)iVar5 * 8) = _Dst;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    iVar6 = (param_2 - 1 & 0x1ff) + 1;
    if (param_2 == 0) {
      iVar6 = 0;
    }
    iVar5 = (int)(param_2 - 1) >> 9;
    if (param_2 == 0) {
      iVar5 = 0;
    }
    *param_1 = iVar5;
    param_1[1] = iVar6;
  }
  return;
}



// FUNCTION 1411b3362 FUN_1411b3362 body=243 status=ok
// SIG undefined FUN_1411b3362(void)

void FUN_1411b3362(longlong param_1,int param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  
  plVar1 = (longlong *)(param_1 + 0x20);
  iVar5 = *(int *)(param_1 + 0x28);
  if (iVar5 != param_2) {
    if (param_2 <= iVar5) {
      FUN_146c1a082(plVar1,param_2);
      return;
    }
    if (iVar5 < param_2) {
      do {
        lVar3 = FUN_14001cc68(0x88,0x10);
        FUN_14582efcc(lVar3,*(undefined8 *)(param_1 + 0x18));
        FUN_1411b328a(lVar3 + 0x70,
                      (*(int *)(*(longlong *)(param_1 + 0x18) + 0x140) * 0x200 +
                      *(int *)(*(longlong *)(param_1 + 0x18) + 0x144)) * 3);
        iVar2 = *(int *)(lVar3 + 0x80);
        if ((longlong)iVar2 != 0) {
          uVar4 = 0;
          do {
            lVar6 = 0;
            do {
              *(undefined4 *)
               (*(longlong *)(*(longlong *)(lVar3 + 0x78) + (longlong)(int)uVar4 * 8) + lVar6 * 4) =
                   0xffffffff;
              lVar6 = lVar6 + 1;
            } while (lVar6 != 0x200);
            uVar4 = (ulonglong)((int)uVar4 + 1);
          } while (uVar4 < (ulonglong)(longlong)iVar2);
        }
        iVar2 = *(int *)(param_1 + 0x28);
        *(uint *)(param_1 + 0x28) = iVar2 + 1U;
        if (*(uint *)(param_1 + 0x2c) < iVar2 + 1U) {
          FUN_1456bd870(plVar1,iVar2);
        }
        *(longlong *)(*plVar1 + (longlong)iVar2 * 8) = lVar3;
        iVar5 = iVar5 + 1;
      } while (iVar5 != param_2);
    }
  }
  return;
}



// FUNCTION 1411b3456 FUN_1411b3456 body=243 status=ok
// SIG undefined FUN_1411b3456(void)

void FUN_1411b3456(longlong param_1,int param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  
  plVar1 = (longlong *)(param_1 + 0x30);
  iVar5 = *(int *)(param_1 + 0x38);
  if (iVar5 != param_2) {
    if (param_2 <= iVar5) {
      FUN_146c1a196(plVar1,param_2);
      return;
    }
    if (iVar5 < param_2) {
      do {
        lVar3 = FUN_14001cc68(0x88,0x10);
        FUN_14582f100(lVar3,*(undefined8 *)(param_1 + 0x18));
        FUN_1411b328a(lVar3 + 0x70,
                      (*(int *)(*(longlong *)(param_1 + 0x18) + 0x140) * 0x200 +
                      *(int *)(*(longlong *)(param_1 + 0x18) + 0x144)) * 3);
        iVar2 = *(int *)(lVar3 + 0x80);
        if ((longlong)iVar2 != 0) {
          uVar4 = 0;
          do {
            lVar6 = 0;
            do {
              *(undefined4 *)
               (*(longlong *)(*(longlong *)(lVar3 + 0x78) + (longlong)(int)uVar4 * 8) + lVar6 * 4) =
                   0xffffffff;
              lVar6 = lVar6 + 1;
            } while (lVar6 != 0x200);
            uVar4 = (ulonglong)((int)uVar4 + 1);
          } while (uVar4 < (ulonglong)(longlong)iVar2);
        }
        iVar2 = *(int *)(param_1 + 0x38);
        *(uint *)(param_1 + 0x38) = iVar2 + 1U;
        if (*(uint *)(param_1 + 0x3c) < iVar2 + 1U) {
          FUN_1456bd870(plVar1,iVar2);
        }
        *(longlong *)(*plVar1 + (longlong)iVar2 * 8) = lVar3;
        iVar5 = iVar5 + 1;
      } while (iVar5 != param_2);
    }
  }
  return;
}



// FUNCTION 1411b354a FUN_1411b354a body=1651 status=ok
// SIG undefined FUN_1411b354a(void)

undefined8 * FUN_1411b354a(undefined8 *param_1,char param_2,char param_3,char param_4,char param_5)

{
  void *pvVar1;
  undefined8 uVar2;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  longlong local_70 [2];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *param_1 = &PTR_FUN_149f3ae80;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  pvVar1 = (void *)FUN_14001cc68(0x3000);
  memset(pvVar1,0,0x3000);
  *(undefined4 *)(param_1 + 3) = 1;
  FUN_141040c48(param_1 + 2,0);
  *(void **)param_1[2] = pvVar1;
  param_1[10] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  pvVar1 = (void *)FUN_14001cc68(0x400);
  memset(pvVar1,0,0x400);
  *(undefined4 *)(param_1 + 6) = 1;
  FUN_141224966(param_1 + 5,0);
  *(void **)param_1[5] = pvVar1;
  param_1[9] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  pvVar1 = (void *)FUN_14001cc68(0x800);
  memset(pvVar1,0,0x800);
  *(undefined4 *)(param_1 + 9) = 1;
  FUN_1411b3bbe(param_1 + 8,0);
  *(void **)param_1[8] = pvVar1;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  *(undefined1 *)(param_1 + 0x16) = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  pvVar1 = (void *)FUN_14001cc68(0x800);
  memset(pvVar1,0,0x800);
  *(undefined4 *)(param_1 + 0x19) = 1;
  FUN_1411b3bbe(param_1 + 0x18,0);
  *(void **)param_1[0x18] = pvVar1;
  param_1[0x1c] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  pvVar1 = (void *)FUN_14001cc68(0x800);
  memset(pvVar1,0,0x800);
  *(undefined4 *)(param_1 + 0x1c) = 1;
  FUN_1411b3bbe(param_1 + 0x1b,0);
  *(void **)param_1[0x1b] = pvVar1;
  param_1[0x1f] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  pvVar1 = (void *)FUN_14001cc68(0x800);
  memset(pvVar1,0,0x800);
  *(undefined4 *)(param_1 + 0x1f) = 1;
  FUN_1411b3bbe(param_1 + 0x1e,0);
  *(void **)param_1[0x1e] = pvVar1;
  *(undefined4 *)(param_1 + 0x20) = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  pvVar1 = (void *)FUN_14001cc68(0x800);
  memset(pvVar1,0,0x800);
  *(undefined4 *)(param_1 + 0x23) = 1;
  FUN_1411b3bbe(param_1 + 0x22,0);
  *(void **)param_1[0x22] = pvVar1;
  *(undefined4 *)(param_1 + 0x24) = 0xffffffff;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  uVar2 = 0;
  pvVar1 = (void *)FUN_14001cc68(0x1800,0x10);
  memset(pvVar1,(int)CONCAT71((int7)((ulonglong)uVar2 >> 8),0xff),0x1800);
  *(undefined4 *)(param_1 + 0x27) = 1;
  FUN_1411b3d20(param_1 + 0x26,0);
  *(void **)param_1[0x26] = pvVar1;
  param_1[0x2a] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  pvVar1 = (void *)FUN_14001cc68(0x400);
  memset(pvVar1,0,0x400);
  *(undefined4 *)(param_1 + 0x2a) = 1;
  FUN_141224966(param_1 + 0x29,0);
  *(void **)param_1[0x29] = pvVar1;
  param_1[0x2d] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  pvVar1 = (void *)FUN_14001cc68(0x800);
  memset(pvVar1,0,0x800);
  *(undefined4 *)(param_1 + 0x2d) = 1;
  FUN_1411b3bbe(param_1 + 0x2c,0);
  *(void **)param_1[0x2c] = pvVar1;
  *(undefined4 *)(param_1 + 0x2e) = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  uVar2 = 0;
  pvVar1 = (void *)FUN_14001cc68(0x1800,0x10);
  memset(pvVar1,(int)CONCAT71((int7)((ulonglong)uVar2 >> 8),0xff),0x1800);
  *(undefined4 *)(param_1 + 0x31) = 1;
  FUN_1411b3d20(param_1 + 0x30,0);
  *(void **)param_1[0x30] = pvVar1;
  *(undefined1 *)(param_1 + 0x35) = 0;
  *(undefined4 *)(param_1 + 0x36) = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  uVar2 = 0;
  pvVar1 = (void *)FUN_14001cc68(0x2000,0x10);
  memset(pvVar1,(int)CONCAT71((int7)((ulonglong)uVar2 >> 8),0xff),0x2000);
  *(undefined4 *)(param_1 + 0x39) = 1;
  FUN_1411b3e82(param_1 + 0x38,0);
  *(void **)param_1[0x38] = pvVar1;
  param_1[0x3c] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  pvVar1 = (void *)FUN_14001cc68(0x400);
  memset(pvVar1,0,0x400);
  *(undefined4 *)(param_1 + 0x3c) = 1;
  FUN_141224966(param_1 + 0x3b,0);
  *(void **)param_1[0x3b] = pvVar1;
  param_1[0x3f] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  pvVar1 = (void *)FUN_14001cc68(0x800);
  memset(pvVar1,0,0x800);
  *(undefined4 *)(param_1 + 0x3f) = 1;
  FUN_1411b3bbe(param_1 + 0x3e,0);
  *(void **)param_1[0x3e] = pvVar1;
  *(undefined4 *)(param_1 + 0x40) = 0;
  param_1[0x41] = 0;
  *(undefined1 *)(param_1 + 0x42) = 0;
  *(undefined1 **)((longlong)param_1 + 0x214) = &DAT_100000001;
  if (param_2 != '\0') {
    FUN_146bff64e(&local_78);
    if (&local_78 != param_1 + 0xb) {
      FUN_146c4de90(param_1 + 0xb,&local_78);
    }
    FUN_146c40926(local_70,0);
    if (local_70[0] != 0) {
      FUN_1400020a8();
    }
  }
  if (param_3 != '\0') {
    FUN_146bff64e(&local_78);
    if (&local_78 != param_1 + 0xf) {
      FUN_146c4de90(param_1 + 0xf,&local_78);
    }
    FUN_146c40926(local_70,0);
    if (local_70[0] != 0) {
      FUN_1400020a8();
    }
  }
  if (param_4 != '\0') {
    FUN_146bff6b0(&local_78);
    if (&local_78 != param_1 + 0x13) {
      FUN_146c4e040(param_1 + 0x13,&local_78);
    }
    FUN_146c409ee(local_70,0);
    if (local_70[0] != 0) {
      FUN_1400020a8();
    }
  }
  if (param_5 != '\0') {
    FUN_141040b84(&local_78);
    if (&local_78 != param_1 + 0x32) {
      FUN_14582f14e(param_1 + 0x32,&local_78);
    }
    FUN_141082b5c(local_70,0);
    if (local_70[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_60 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411b3bbe FUN_1411b3bbe body=353 status=ok
// SIG undefined FUN_1411b3bbe(void)

void FUN_1411b3bbe(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1411b3c43;
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
LAB_1411b3c43:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 1411b3d20 FUN_1411b3d20 body=353 status=ok
// SIG undefined FUN_1411b3d20(void)

void FUN_1411b3d20(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1411b3da5;
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
LAB_1411b3da5:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 1411b3e82 FUN_1411b3e82 body=353 status=ok
// SIG undefined FUN_1411b3e82(void)

void FUN_1411b3e82(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1411b3f07;
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
LAB_1411b3f07:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 1411b3fe4 FUN_1411b3fe4 body=116 status=ok
// SIG undefined FUN_1411b3fe4(void)

void FUN_1411b3fe4(undefined8 *param_1)

{
  undefined8 *puVar1;
  void *_Dst;
  
  puVar1 = param_1 + 1;
  FUN_1411b4058(puVar1,1,0);
  *param_1 = 0;
  if (*(int *)(param_1 + 2) == 0) {
    _Dst = (void *)FUN_14001cc68(0x800);
    memset(_Dst,0,0x800);
    *(undefined4 *)(param_1 + 2) = 1;
    if (*(int *)((longlong)param_1 + 0x14) == 0) {
      FUN_1411b3bbe(puVar1,0);
    }
    *(void **)*puVar1 = _Dst;
  }
  return;
}



// FUNCTION 1411b4058 FUN_1411b4058 body=108 status=ok
// SIG undefined FUN_1411b4058(void)

void FUN_1411b4058(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_1[1];
  if (param_2 < iVar1) {
    lVar3 = (longlong)param_2;
    do {
      lVar2 = *param_1;
      if (*(longlong *)(lVar2 + lVar3 * 8) != 0) {
        FUN_1400020a8();
        lVar2 = *param_1;
      }
      *(undefined8 *)(lVar2 + lVar3 * 8) = 0;
      lVar3 = lVar3 + 1;
      iVar1 = (int)param_1[1];
    } while (lVar3 < iVar1);
  }
  if ((iVar1 != param_2) && (*(int *)(param_1 + 1) = param_2, param_3 == '\x01')) {
    FUN_146bee3b0(param_1);
    return;
  }
  return;
}



// FUNCTION 1411b40c4 FUN_1411b40c4 body=88 status=ok
// SIG undefined FUN_1411b40c4(void)

void FUN_1411b40c4(longlong *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  if (param_1[1] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[1] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (*param_1 != 0) {
    LOCK();
    puVar1 = (uint *)(*param_1 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
      return;
    }
  }
  return;
}



// FUNCTION 1411b411c FUN_1411b411c body=265 status=ok
// SIG undefined FUN_1411b411c(void)

void FUN_1411b411c(longlong *param_1,longlong param_2)

{
  uint *puVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar8 = *(int *)((longlong)plVar5 +
                    ((longlong)((int)((ulonglong)param_2 >> 0x20) * 0x17 + (int)param_2) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar8 != -1) {
      lVar4 = *param_1;
      do {
        lVar9 = (longlong)iVar8 * 0x50;
        lVar2 = lVar4 + lVar9;
        if (*(longlong *)(lVar4 + lVar9) == param_2) {
          iVar7 = *(int *)((longlong)plVar5 + (longlong)*(int *)(lVar2 + 0x4c) * 4);
          if (iVar7 == iVar8) {
            piVar6 = (int *)((longlong)plVar5 + (longlong)*(int *)(lVar2 + 0x4c) * 4);
          }
          else {
            do {
              piVar6 = (int *)((longlong)iVar7 * 0x50 + lVar4 + 0x48);
              iVar7 = *piVar6;
            } while (iVar7 != iVar8);
          }
          *piVar6 = *(int *)(lVar2 + 0x48);
          lVar4 = *param_1;
          lVar2 = *(longlong *)(lVar4 + lVar9 + 0x28);
          if (lVar2 != 0) {
            LOCK();
            puVar1 = (uint *)(lVar2 + 8);
            uVar3 = *puVar1;
            *puVar1 = *puVar1 - 1;
            UNLOCK();
            if ((uVar3 & 0x3fffffff) == 1) {
              FUN_144a54812();
            }
          }
          lVar4 = *(longlong *)(lVar4 + lVar9 + 0x20);
          if (lVar4 != 0) {
            LOCK();
            puVar1 = (uint *)(lVar4 + 8);
            uVar3 = *puVar1;
            *puVar1 = *puVar1 - 1;
            UNLOCK();
            if ((uVar3 & 0x3fffffff) == 1) {
              FUN_144a54812();
            }
          }
          FUN_1411b4226(param_1,iVar8);
          return;
        }
        iVar8 = *(int *)(lVar2 + 0x48);
      } while (iVar8 != -1);
    }
  }
  return;
}



// FUNCTION 1411b4226 FUN_1411b4226 body=124 status=ok
// SIG undefined FUN_1411b4226(void)

void FUN_1411b4226(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x50) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x50) = 0xffffffff;
  uVar4 = 0xffffffff;
  if (0 < *(int *)((longlong)param_1 + 0x34)) {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x50 + 4) = uVar4;
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



// FUNCTION 1411b42a2 FUN_1411b42a2 body=284 status=ok
// SIG undefined FUN_1411b42a2(void)

undefined8 FUN_1411b42a2(longlong param_1,undefined4 param_2)

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
    if (iVar1 == 2) goto LAB_1411b43b8;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1411b43b8;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_1411b43b8:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1411b4365;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5 + (longlong)*(int *)(param_1 + 0x28),param_2);
      uVar6 = 1;
      goto LAB_1411b4365;
    }
  }
  uVar6 = 0;
LAB_1411b4365:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411b43c6 FUN_1411b43c6 body=839 status=ok
// SIG undefined FUN_1411b43c6(void)

undefined8 FUN_1411b43c6(longlong *param_1,undefined8 param_2,int param_3,double *param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  char cVar4;
  longlong *plVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  undefined1 auStack_158 [32];
  undefined4 local_138;
  undefined4 local_130;
  undefined4 local_128;
  undefined8 local_120;
  float local_114;
  float local_110;
  undefined2 local_10a;
  undefined **local_108;
  undefined2 local_100;
  undefined1 local_fe;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined8 local_f0;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  longlong *local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  longlong *local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined2 local_a4;
  undefined7 local_a0;
  undefined4 uStack_99;
  undefined8 local_90;
  undefined8 local_88;
  longlong *local_80;
  undefined4 local_74;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_158;
  if (*(char *)((longlong)param_1 + 0x37b) == '\x01') {
    if ((char)param_1[0x6f] == '\0') {
      cVar4 = *(char *)((longlong)param_1 + 0x379);
    }
    else {
      cVar4 = '\x01';
    }
    if ((param_3 == 0) && (cVar4 != '\0')) {
      *(undefined1 *)((longlong)param_1 + 0x37a) = 1;
      plVar5 = (longlong *)FUN_144a81a0a();
      (**(code **)(*plVar5 + 0x50))(plVar5,&local_74);
      uVar3 = DAT_14c9680a8;
      (**(code **)(*(longlong *)DAT_14c968088[1] + 0x20))((longlong *)DAT_14c968088[1],&local_108);
      local_128 = local_74;
      local_130 = uVar3;
      local_138 = 0;
      uVar6 = (**(code **)(*param_1 + 0xe0))(param_1,param_2,&local_108,0x3f800000);
      goto LAB_1411b45c3;
    }
  }
  local_120 = param_2;
  FUN_140e6b8b4(&local_90,param_3);
  (**(code **)(*DAT_14c968088 + 0x58))(DAT_14c968088,&local_10a);
  plVar5 = local_80;
  if (local_80 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_80 + 1) = (int)local_80[1] + 1;
    UNLOCK();
  }
  plVar1 = param_1 + 1;
  (**(code **)(param_1[-0x29] + 0x70))(param_1 + -0x29,&local_114);
  fVar7 = (float)param_4[1];
  fVar8 = (float)*param_4;
  local_fc = (*(code *)**(undefined8 **)param_1[0xbb])();
  uVar6 = local_120;
  local_100 = local_10a;
  local_fe = 0;
  local_f0 = 0;
  local_108 = &PTR_FUN_149eda650;
  local_e0 = local_114;
  local_dc = local_110;
  local_d4 = fVar7 - local_110;
  local_d8 = fVar8 - local_114;
  local_c8 = local_90;
  local_c0 = local_88;
  local_b8 = plVar5;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  local_b0 = 10;
  local_a8 = 0x3f800000;
  local_a4 = 0;
  local_a0 = 0;
  uStack_99 = 0;
  local_f8 = local_fc;
  local_e8 = fVar8;
  local_e4 = fVar7;
  local_d0 = plVar1;
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
  FUN_1411b470e(param_1 + -0x29,uVar6,&local_108);
  plVar5 = local_b8;
  local_108 = &PTR_FUN_149eda650;
  if (local_b8 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_b8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_b8)(local_b8);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  if (local_80 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_80 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*local_80)(local_80);
      LOCK();
      piVar2 = (int *)((longlong)local_80 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_80 + 0x10))(local_80);
      }
    }
  }
  uVar6 = 1;
LAB_1411b45c3:
  if ((local_70 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411b470e FUN_1411b470e body=3455 status=ok
// SIG undefined FUN_1411b470e(void)

void FUN_1411b470e(longlong *param_1,longlong *param_2,undefined ***param_3)

{
  undefined **ppuVar1;
  int *piVar2;
  longlong *plVar3;
  double dVar4;
  longlong *plVar5;
  undefined **ppuVar6;
  int iVar7;
  char cVar8;
  int iVar9;
  undefined ***pppuVar10;
  ulonglong uVar11;
  uint uVar12;
  longlong *plVar13;
  longlong lVar14;
  longlong lVar15;
  bool bVar16;
  double dVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined1 auStack_6e8 [32];
  undefined ***local_6c8;
  undefined4 local_6c0;
  undefined1 local_6b8 [8];
  undefined ***local_6b0;
  ulonglong local_6a8;
  undefined8 uStack_6a0;
  undefined8 local_698;
  longlong *plStack_690;
  undefined1 local_688 [8];
  undefined ***local_680;
  ulonglong local_678;
  undefined8 uStack_670;
  undefined8 local_668;
  undefined8 uStack_660;
  undefined **local_650;
  undefined8 local_648;
  undefined8 uStack_640;
  ulonglong local_630;
  undefined8 uStack_628;
  undefined8 local_620;
  longlong *plStack_618;
  longlong *local_600;
  ulonglong local_5f8;
  undefined3 uStack_5f0;
  undefined5 uStack_5ed;
  undefined8 uStack_5e5;
  longlong local_5d8;
  longlong *local_5d0;
  ulonglong uStack_5c8;
  undefined3 uStack_5c0;
  undefined5 local_5bd;
  undefined8 uStack_5b5;
  undefined8 local_5a8;
  undefined8 uStack_5a0;
  undefined **local_590;
  undefined8 local_588;
  undefined8 uStack_580;
  undefined ***local_578;
  ulonglong local_570;
  undefined8 uStack_568;
  undefined4 local_560;
  undefined4 uStack_55c;
  undefined4 uStack_558;
  undefined4 uStack_554;
  longlong *local_540;
  undefined4 uStack_538;
  undefined4 uStack_534;
  undefined4 uStack_530;
  undefined4 uStack_52c;
  undefined8 uStack_525;
  undefined4 local_4e0;
  undefined1 local_4dc;
  undefined8 uStack_4d8;
  undefined4 uStack_4d0;
  undefined4 uStack_4cc;
  undefined8 uStack_4c5;
  undefined8 local_4b8;
  undefined8 uStack_4b0;
  undefined **local_4a8;
  undefined **local_4a0;
  undefined **local_498;
  undefined **local_468;
  undefined **local_460 [28];
  undefined ***local_380;
  int local_378;
  longlong *local_360;
  longlong local_358;
  undefined4 local_350;
  char local_348 [8];
  undefined8 local_340;
  undefined8 uStack_338;
  undefined1 local_328;
  undefined1 local_320 [136];
  undefined4 local_298;
  undefined1 local_294;
  char local_290 [8];
  undefined8 local_288;
  undefined8 uStack_280;
  undefined1 local_270;
  undefined1 local_268 [136];
  undefined4 local_1e0;
  undefined1 local_1dc;
  undefined **local_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined ***local_1c0;
  ulonglong local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  longlong *plStack_1a0;
  longlong *local_198;
  ulonglong local_190;
  longlong *local_188;
  ulonglong local_180;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined8 uStack_16d;
  undefined1 local_160 [56];
  longlong *local_128;
  longlong *local_120;
  ulonglong local_118;
  undefined8 local_110;
  char local_108;
  undefined **local_100;
  undefined **local_f8;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_6e8;
  *(int *)(param_1 + 199) = (int)param_1[199] + 1;
  dVar17 = (double)(**(code **)(*param_1 + 0x60))();
  dVar4 = (double)param_1[0x6e];
  uVar18 = SUB84(dVar4,0);
  uVar19 = (undefined4)((ulonglong)dVar4 >> 0x20);
  if ((dVar4 != dVar17) || (NAN(dVar4) || NAN(dVar17))) {
    param_1[0x6e] = (longlong)dVar17;
    FUN_1402c1cc6(param_1 + 0x70,SUB84(dVar17,0));
    uVar18 = (undefined4)param_1[0x6e];
    uVar19 = (undefined4)((ulonglong)param_1[0x6e] >> 0x20);
  }
  param_1[0x6f] = CONCAT44(uVar19,uVar18);
  if (*param_2 != 0) {
    (**(code **)(*DAT_14c968088 + 0x48))();
  }
  uVar12 = *(uint *)((longlong)param_3 + 0xc);
  if (uVar12 == 0) {
    local_4a8 = param_3[8];
    local_4a0 = param_3[9];
    local_498 = param_3[10];
    if (local_498 != (undefined **)0x0) {
      LOCK();
      *(int *)(local_498 + 1) = *(int *)(local_498 + 1) + 1;
      UNLOCK();
    }
    FUN_14086bd9e(param_1 + 0x2a,&local_100,&local_4a8,0);
    ppuVar6 = local_498;
    if (local_498 != (undefined **)0x0) {
      LOCK();
      ppuVar1 = local_498 + 1;
      *(int *)ppuVar1 = *(int *)ppuVar1 + -1;
      UNLOCK();
      if (*(int *)ppuVar1 == 0) {
        (**(code **)*local_498)(local_498);
        LOCK();
        piVar2 = (int *)((longlong)ppuVar6 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*ppuVar6 + 0x10))(ppuVar6);
        }
      }
    }
    uVar12 = *(uint *)((longlong)param_3 + 0xc);
  }
  if ((-1 < (int)uVar12) && ((int)uVar12 < (int)param_1[99])) {
    lVar15 = *(longlong *)(param_1[0x62] + (ulonglong)uVar12 * 0x10);
    plVar5 = *(longlong **)(param_1[0x62] + 8 + (ulonglong)uVar12 * 0x10);
    if (plVar5 == (longlong *)0x0) {
      if (lVar15 != 0) {
        local_5d0 = (longlong *)0x0;
        local_5d8 = lVar15;
        goto LAB_1411b487b;
      }
    }
    else {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
      if (lVar15 != 0) {
        LOCK();
        *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
        UNLOCK();
        local_5d8 = lVar15;
        local_5d0 = plVar5;
      }
      LOCK();
      plVar13 = plVar5 + 1;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)*plVar13 == 0) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
      if (lVar15 != 0) goto LAB_1411b487b;
    }
  }
  FUN_141370954(param_1,&local_5d8,uVar12,0);
LAB_1411b487b:
  lVar15 = local_5d8;
  if (*(longlong *)(local_5d8 + 0x1e8) == 0) {
    local_348[0] = '\0';
    local_328 = 0;
    local_340 = 0;
    uStack_338 = 0;
    memset(local_320,0,0x88);
    local_298 = 0x20702;
    local_294 = 0;
    uVar18 = *(undefined4 *)(param_3 + 0xb);
    cVar8 = FUN_1408025c4(lVar15,uVar18);
    if (cVar8 == '\0') {
      uVar18 = *(undefined4 *)(lVar15 + 0x18);
      FUN_1401b43e8(param_1,&local_100);
      local_6c8 = (undefined ***)((ulonglong)local_6c8 & 0xffffffffffffff00);
      local_6c0 = uVar18;
      (**(code **)(*param_1 + 0x108))(param_1,&local_4a8,param_3[4],&local_100);
      FUN_1401b439d(local_100,(ulonglong)local_f8 & 0xffffffff);
      if (local_100 != (undefined **)0x0) {
        FUN_1400020a8();
      }
      if (0 < (int)param_1[0x75]) {
        lVar15 = 0;
        do {
          if (*(longlong *)(param_1[0x74] + lVar15 * 0x20) != 0) {
            plVar13 = (longlong *)(param_1[0x74] + lVar15 * 0x20);
            plVar5 = (longlong *)plVar13[1];
            if ((plVar5 != (longlong *)0x0) && (0 < (int)plVar5[1])) {
              iVar9 = (int)plVar5[1];
              do {
                if (iVar9 == 0) {
                  lVar14 = 0;
                  goto LAB_1411b53d7;
                }
                LOCK();
                iVar7 = (int)plVar5[1];
                bVar16 = iVar9 == iVar7;
                if (bVar16) {
                  *(int *)(plVar5 + 1) = iVar9 + 1;
                  iVar7 = iVar9;
                }
                iVar9 = iVar7;
                UNLOCK();
              } while (!bVar16);
              lVar14 = *plVar13;
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
LAB_1411b53d7:
              pppuVar10 = local_380;
              if (local_380 == (undefined ***)0x0) {
                pppuVar10 = &local_4a0;
              }
              if ((longlong)local_378 != 0) {
                uVar11 = 0;
                do {
                  if (lVar14 == *(longlong *)((longlong)pppuVar10 + uVar11 + 0x38)) {
                    if ((int)(uVar11 >> 3) * 0x38e38e39 != -1) goto LAB_1411b5436;
                    break;
                  }
                  uVar11 = uVar11 + 0x48;
                } while ((longlong)local_378 * 0x48 != uVar11);
              }
              if (((int)plVar13[3] != 0) && ((longlong *)plVar13[2] != (longlong *)0x0)) {
                (**(code **)(*(longlong *)plVar13[2] + 0x60))();
              }
            }
          }
LAB_1411b5436:
          lVar15 = lVar15 + 1;
        } while (lVar15 < (int)param_1[0x75]);
      }
      FUN_1411d3bc2(param_1,&local_100,&local_4a8,param_3);
      FUN_1403d4924(local_348,&local_100);
      FUN_14493db24(&local_100);
      FUN_1447fa2ac(local_358,local_350);
      if (local_358 != 0) {
        FUN_1400020a8();
      }
      if (local_360 != (longlong *)0x0) {
        LOCK();
        plVar5 = local_360 + 1;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)*plVar5 == 0) {
          (**(code **)*local_360)(local_360);
          LOCK();
          piVar2 = (int *)((longlong)local_360 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_360 + 0x10))(local_360);
          }
        }
      }
      pppuVar10 = &local_4a0;
      if (local_380 != (undefined ***)0x0) {
        pppuVar10 = local_380;
      }
    }
    else {
      local_6c8 = param_3;
      FUN_1403d06e2(lVar15,&local_4a8,uVar18,0);
      pppuVar10 = &local_468;
      if (local_380 != (undefined ***)0x0) {
        pppuVar10 = local_380 + 7;
      }
      local_100 = *pppuVar10;
      pppuVar10 = local_460;
      if (local_380 != (undefined ***)0x0) {
        pppuVar10 = local_380 + 8;
      }
      ppuVar6 = *pppuVar10;
      if (ppuVar6 == (undefined **)0x0) {
        local_f8 = (undefined **)0x0;
        FUN_1403d09a4(param_1,&local_650,param_3);
      }
      else {
        LOCK();
        *(int *)(ppuVar6 + 1) = *(int *)(ppuVar6 + 1) + 1;
        UNLOCK();
        LOCK();
        *(int *)(ppuVar6 + 1) = *(int *)(ppuVar6 + 1) + 1;
        UNLOCK();
        local_f8 = ppuVar6;
        FUN_1403d09a4(param_1,&local_650,param_3);
        if (ppuVar6 != (undefined **)0x0) {
          LOCK();
          ppuVar1 = ppuVar6 + 1;
          *(int *)ppuVar1 = *(int *)ppuVar1 + -1;
          UNLOCK();
          if (*(int *)ppuVar1 == 0) {
            (**(code **)*ppuVar6)(ppuVar6);
            LOCK();
            piVar2 = (int *)((longlong)ppuVar6 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*ppuVar6 + 0x10))(ppuVar6);
            }
          }
        }
        LOCK();
        ppuVar1 = ppuVar6 + 1;
        *(int *)ppuVar1 = *(int *)ppuVar1 + -1;
        UNLOCK();
        if (*(int *)ppuVar1 == 0) {
          (**(code **)*ppuVar6)(ppuVar6);
          LOCK();
          piVar2 = (int *)((longlong)ppuVar6 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*ppuVar6 + 0x10))(ppuVar6);
          }
        }
      }
      plVar5 = local_600;
      local_4b8 = local_648;
      uStack_4b0 = uStack_640;
      local_678 = local_630;
      uStack_670 = uStack_628;
      local_668 = local_620;
      uStack_660 = plStack_618;
      if (local_600 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_600 + 1) = (int)local_600[1] + 1;
        UNLOCK();
      }
      uStack_4c5 = uStack_5e5;
      uStack_4d8 = local_5f8;
      uStack_4d0 = (undefined4)CONCAT53(uStack_5ed,uStack_5f0);
      uStack_4cc = (undefined4)((uint5)uStack_5ed >> 8);
      local_688[0] = 0;
      local_290[0] = '\0';
      local_270 = 0;
      local_288 = 0;
      uStack_280 = 0;
      local_680 = &local_4a8;
      memset(local_268,0,0x88);
      local_1e0 = 0x20702;
      local_1dc = 0;
      if (0 < local_378) {
        FUN_1403d08d6(local_688,&local_1d8);
        if ((char)local_180 == '\x01') {
          if (plVar5 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
            UNLOCK();
          }
          local_570 = local_190;
          uStack_568 = local_188;
        }
        else {
          local_570 = local_678;
          uStack_568 = uStack_670;
          if (plVar5 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
            UNLOCK();
          }
        }
        uStack_525 = uStack_4c5;
        uStack_52c = uStack_4cc;
        uStack_530 = uStack_4d0;
        uStack_534 = uStack_4d8._4_4_;
        uStack_538 = (undefined4)uStack_4d8;
        local_540 = plVar5;
        uStack_554 = uStack_660._4_4_;
        uStack_558 = (undefined4)uStack_660;
        uStack_55c = local_668._4_4_;
        local_560 = (undefined4)local_668;
        uStack_580 = uStack_4b0;
        local_588 = local_4b8;
        local_590 = &PTR_FUN_149eda650;
        local_578 = &local_4a8;
        (**(code **)(*plStack_1a0 + 0x60))(plStack_1a0,&local_100,&local_1d8,&local_590);
        FUN_1402c173a(&local_100,&plStack_1a0);
        FUN_1402c17c2(local_290,&local_100);
        FUN_14493db24(&local_100);
        local_6c0 = local_588._4_4_;
        local_6c8 = &local_590;
        FUN_1402c1d72(param_1,&local_4a8,local_290,&local_4a8);
        local_590 = &PTR_FUN_149eda650;
        if (local_540 != (longlong *)0x0) {
          LOCK();
          plVar13 = local_540 + 1;
          *(int *)plVar13 = (int)*plVar13 + -1;
          UNLOCK();
          if ((int)*plVar13 == 0) {
            (**(code **)*local_540)(local_540);
            LOCK();
            piVar2 = (int *)((longlong)local_540 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*local_540 + 0x10))(local_540);
            }
          }
        }
        if ((char)local_180 == '\x01') {
          local_180 = local_180 & 0xffffffffffffff00;
        }
        if (local_198 != (longlong *)0x0) {
          LOCK();
          plVar13 = local_198 + 1;
          *(int *)plVar13 = (int)*plVar13 + -1;
          UNLOCK();
          if ((int)*plVar13 == 0) {
            (**(code **)*local_198)(local_198);
            LOCK();
            piVar2 = (int *)((longlong)local_198 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*local_198 + 0x10))(local_198);
            }
          }
        }
        local_688[0] = 1;
      }
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar13 = plVar5 + 1;
        *(int *)plVar13 = (int)*plVar13 + -1;
        UNLOCK();
        if ((int)*plVar13 == 0) {
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
      FUN_1403d4924(local_348);
      FUN_14493db24(local_290);
      plVar5 = local_600;
      if (local_348[0] == '\0') {
        local_5a8 = local_648;
        uStack_5a0 = uStack_640;
        local_6a8 = local_630;
        uStack_6a0 = uStack_628;
        local_698 = local_620;
        plStack_690 = plStack_618;
        if (local_600 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_600 + 1) = (int)local_600[1] + 1;
          UNLOCK();
        }
        uStack_5b5 = uStack_5e5;
        uStack_5c8 = local_5f8;
        uStack_5c0 = uStack_5f0;
        local_5bd = uStack_5ed;
        local_6b8[0] = 0;
        local_590 = (undefined **)((ulonglong)local_590 & 0xffffffffffffff00);
        local_570 = local_570 & 0xffffffffffffff00;
        local_588 = 0;
        uStack_580 = 0;
        local_6b0 = &local_4a8;
        memset(&uStack_568,0,0x88);
        local_4e0 = 0x20702;
        local_4dc = 0;
        if (0 < local_378) {
          FUN_1403d08d6(local_6b8);
          if (local_108 == '\x01') {
            if (plVar5 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
              UNLOCK();
            }
            uStack_178 = (undefined4)CONCAT53(local_5bd,uStack_5c0);
            local_1b8 = local_118;
            uStack_1b0 = local_110;
          }
          else {
            local_1b8 = local_6a8;
            uStack_1b0 = uStack_6a0;
            if (plVar5 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
              UNLOCK();
            }
            uStack_178 = (undefined4)CONCAT53(local_5bd,uStack_5c0);
          }
          uStack_16d = uStack_5b5;
          uStack_174 = (undefined4)((uint5)local_5bd >> 8);
          local_180 = uStack_5c8;
          local_188 = plVar5;
          plStack_1a0 = plStack_690;
          local_1a8 = local_698;
          uStack_1c8 = uStack_5a0;
          local_1d0 = local_5a8;
          local_1d8 = &PTR_FUN_149eda650;
          local_290[0] = '\0';
          local_270 = 0;
          local_288 = 0;
          uStack_280 = 0;
          local_1c0 = &local_4a8;
          memset(local_268,0,0x88);
          local_1e0 = 0x20702;
          local_1dc = 0;
          if ((byte)uStack_174 == 1) {
            (**(code **)(*local_128 + 0xe8))(local_128,&local_100,local_160,&local_1d8);
            FUN_1403d4924(local_290,&local_100);
            FUN_14493db24(&local_100);
          }
          if ((((byte)uStack_174 & 1) == 0) ||
             ((local_290[0] == '\0' && ((char)param_1[0x9d] == '\x01')))) {
            (**(code **)(*local_128 + 0x58))(local_128,&local_100,local_160,&local_1d8);
            FUN_1403d4924(local_290,&local_100);
            FUN_14493db24(&local_100);
          }
          FUN_1402c173a(local_290,&local_128);
          FUN_1402c17c2(&local_590,local_290);
          FUN_14493db24(local_290);
          local_6c8 = &local_1d8;
          local_6c0 = local_1d0._4_4_;
          FUN_1402c1d72(param_1,&local_4a8,&local_590,&local_4a8);
          local_1d8 = &PTR_FUN_149eda650;
          if (local_188 != (longlong *)0x0) {
            LOCK();
            plVar13 = local_188 + 1;
            *(int *)plVar13 = (int)*plVar13 + -1;
            UNLOCK();
            if ((int)*plVar13 == 0) {
              (**(code **)*local_188)(local_188);
              LOCK();
              piVar2 = (int *)((longlong)local_188 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*local_188 + 0x10))(local_188);
              }
            }
          }
          if (local_108 == '\x01') {
            local_108 = '\0';
          }
          if (local_120 != (longlong *)0x0) {
            LOCK();
            plVar13 = local_120 + 1;
            *(int *)plVar13 = (int)*plVar13 + -1;
            UNLOCK();
            if ((int)*plVar13 == 0) {
              (**(code **)*local_120)(local_120);
              LOCK();
              piVar2 = (int *)((longlong)local_120 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*local_120 + 0x10))(local_120);
              }
            }
          }
          local_6b8[0] = 1;
        }
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          plVar13 = plVar5 + 1;
          *(int *)plVar13 = (int)*plVar13 + -1;
          UNLOCK();
          if ((int)*plVar13 == 0) {
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
        FUN_1403d4924(local_348,&local_590);
        FUN_14493db24(&local_590);
      }
      local_650 = &PTR_FUN_149eda650;
      if (local_600 != (longlong *)0x0) {
        LOCK();
        plVar5 = local_600 + 1;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)*plVar5 == 0) {
          (**(code **)*local_600)(local_600);
          LOCK();
          piVar2 = (int *)((longlong)local_600 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_600 + 0x10))(local_600);
          }
        }
      }
      FUN_1447fa2ac(local_358,local_350);
      if (local_358 != 0) {
        FUN_1400020a8();
      }
      if (local_360 != (longlong *)0x0) {
        LOCK();
        plVar5 = local_360 + 1;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)*plVar5 == 0) {
          (**(code **)*local_360)(local_360);
          LOCK();
          piVar2 = (int *)((longlong)local_360 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_360 + 0x10))(local_360);
          }
        }
      }
      pppuVar10 = &local_4a0;
      if (local_380 != (undefined ***)0x0) {
        pppuVar10 = local_380;
      }
    }
    FUN_1447157bd(pppuVar10,local_378);
    if (local_380 != (undefined ***)0x0) {
      FUN_1400020a8();
    }
    FUN_14493db24(local_348);
  }
  plVar5 = local_5d0;
  if (local_5d0 != (longlong *)0x0) {
    LOCK();
    plVar13 = local_5d0 + 1;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)*plVar13 == 0) {
      (**(code **)*local_5d0)(local_5d0);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  *(int *)(param_1 + 199) = (int)param_1[199] + -1;
  if ((local_48 ^ (ulonglong)auStack_6e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1411b548e FUN_1411b548e body=184 status=ok
// SIG undefined FUN_1411b548e(void)

void FUN_1411b548e(longlong param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x70);
  (**(code **)(*plVar4 + 0xb8))(plVar4);
  FUN_140011d52(plVar4);
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x1b8))();
  plVar4 = *(longlong **)(param_1 + 0x70);
  if (cVar1 == '\0') {
    iVar2 = (**(code **)(*plVar4 + 0x178))();
    plVar4 = *(longlong **)(param_1 + 0x70);
    uVar3 = -iVar2 & *(int *)((longlong)plVar4 + 0x34) * (int)plVar4[6] + iVar2;
  }
  else {
    uVar3 = *(int *)((longlong)plVar4 + 0x34) * (int)plVar4[6];
  }
  *(uint *)(param_1 + 0x34) = uVar3;
  cVar1 = (**(code **)(*plVar4 + 0x1b8))();
  uVar5 = *(ulonglong *)(param_1 + 0x38);
  if (cVar1 == '\0') {
    uVar5 = uVar5 | 0x200;
    *(ulonglong *)(param_1 + 0x38) = uVar5;
  }
  uVar5 = *(ulonglong *)(*(longlong *)(param_1 + 0x70) + 0x38) & 0x8001040000000 | uVar5;
  *(ulonglong *)(param_1 + 0x38) = uVar5;
  if ((*(ulonglong *)(*(longlong *)(param_1 + 0x70) + 0x38) & 0x8000080000) != 0) {
    *(ulonglong *)(param_1 + 0x38) = uVar5 | 0x8000000000;
  }
  return;
}



// FUNCTION 1411b5546 FUN_1411b5546 body=90 status=ok
// SIG undefined FUN_1411b5546(void)

undefined8 FUN_1411b5546(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined1 auStack_48 [40];
  undefined1 local_20 [14];
  undefined1 local_12;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x70) + 0xb8);
  if (plVar1 == (longlong *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (**(code **)(*plVar1 + 8))(plVar1,local_20);
    uVar3 = CONCAT71((int7)((ulonglong)uVar2 >> 8),local_12) & 0xffffffffffffff20;
    uVar2 = CONCAT71((int7)(uVar3 >> 8),(byte)uVar3 >> 5);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411b55a2 FUN_1411b55a2 body=185 status=ok
// SIG undefined FUN_1411b55a2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1411b55a2(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14b87d610;
  FUN_1418d1663(param_1[0x13],*(undefined4 *)(param_1 + 0x14));
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xe] != 0) {
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
                    /* WARNING: Could not recover jumptable at 0x0001411b564d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    return;
  }
  return;
}



// FUNCTION 1411b565c FUN_1411b565c body=380 status=ok
// SIG undefined FUN_1411b565c(void)

undefined8 * FUN_1411b565c(undefined8 *param_1)

{
  longlong *plVar1;
  
  FUN_1400841f8();
  *param_1 = &PTR_FUN_14bd17230;
  *(undefined1 *)(param_1 + 5) = 1;
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
  plVar1 = DAT_14c844840;
  param_1[6] = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    if (*(code **)(*plVar1 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*plVar1 + 8))();
    }
  }
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined8 *)((longlong)param_1 + 0x8c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x94) = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  *(undefined2 *)(param_1 + 0x16) = 0;
  *(undefined1 *)((longlong)param_1 + 0xb2) = 0;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(undefined8 *)((longlong)param_1 + 0xe4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xec) = 0;
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  return param_1;
}



// FUNCTION 1411b57d8 FUN_1411b57d8 body=1210 status=ok
// SIG undefined FUN_1411b57d8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1411b57d8(undefined8 param_1,longlong *param_2,undefined8 *param_3)

{
  byte *pbVar1;
  byte bVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 *puVar6;
  longlong lVar7;
  undefined1 auStack_58 [39];
  undefined1 local_31;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(byte *)(param_2 + 5) & 1) == 0) {
    if ((*(byte *)(param_2 + 5) & 4) != 0) {
      if (*(char *)((longlong)param_3 + 0x1e) != -1) {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c99e178) &&
           (FUN_144b3d300(&DAT_14c99e178), DAT_14c99e178 == -1)) {
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
        lVar3 = (ulonglong)*(byte *)((longlong)param_3 + 0x1e) * 0x58 + _DAT_14c99e168;
        if (lVar3 != 0) {
          local_30 = *(longlong *)(lVar3 + 0x40);
          (**(code **)(*param_2 + 0x160))(param_2);
          lVar5 = *(longlong *)(lVar3 + 0x28);
          bVar2 = *(byte *)((longlong)param_3 + 0x1f);
          goto LAB_1411b59a5;
        }
      }
      local_30 = 0;
      (**(code **)(*param_2 + 0x160))(param_2);
      goto LAB_1411b5922;
    }
    if (((*(byte *)((longlong)param_2 + 0x2b) & 4) == 0) ||
       (*(char *)((longlong)param_3 + 0x1e) == -1)) goto LAB_1411b5922;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c99e178) && (FUN_144b3d300(&DAT_14c99e178), DAT_14c99e178 == -1)) {
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
    lVar3 = (ulonglong)*(byte *)((longlong)param_3 + 0x1e) * 0x58 + _DAT_14c99e168;
    if (((lVar3 == 0) || (lVar5 = *(longlong *)(lVar3 + 0x28), lVar5 == 0)) ||
       (bVar2 = *(byte *)((longlong)param_3 + 0x1f), (bVar2 & 1) == 0)) goto LAB_1411b5922;
LAB_1411b59a5:
    if ((bVar2 & 2) == 0) {
      param_3 = (undefined8 *)*param_3;
    }
    puVar6 = (undefined1 *)
             ((ulonglong)((uint)(1L << (bVar2 >> 2)) & 0xfffffffe) + (longlong)param_3);
  }
  else {
    local_30 = 0;
    (**(code **)(*param_2 + 0x160))(param_2,&local_30);
    if (local_30 == 0) {
      FUN_14084385c(param_3);
      *(undefined1 *)((longlong)param_3 + 0x1e) = 0xff;
      goto LAB_1411b5922;
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c99e178) && (FUN_144b3d300(&DAT_14c99e178), DAT_14c99e178 == -1)) {
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
    if ((longlong)DAT_14c99e170 != 0) {
      lVar7 = -_DAT_14c99e168;
      lVar5 = (longlong)DAT_14c99e170 * 0x58;
      lVar3 = _DAT_14c99e168;
      do {
        if (*(longlong *)(lVar3 + 0x40) == local_30) {
          if ((lVar3 != 0) && (*(longlong *)(lVar3 + 0x28) != 0)) {
            if ((*(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110
                         ) < DAT_14c99e178) && (FUN_144b3d300(&DAT_14c99e178), DAT_14c99e178 == -1))
            {
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
            *(char *)((longlong)param_3 + 0x1e) =
                 (char)((uint)-((int)lVar7 + DAT_14c99e168) >> 3) * -0x5d;
            lVar5 = *(longlong *)(lVar3 + 0x28);
            (**(code **)(*param_2 + 0x198))(param_2,lVar5);
            FUN_1411b5c94(param_3,lVar3);
            pbVar1 = (byte *)((longlong)param_3 + 0x1f);
            if ((*pbVar1 & 2) == 0) {
              param_3 = (undefined8 *)*param_3;
            }
            puVar6 = (undefined1 *)
                     ((ulonglong)((uint)(1L << (*pbVar1 >> 2)) & 0xfffffffe) + (longlong)param_3);
            goto LAB_1411b5917;
          }
          break;
        }
        lVar3 = lVar3 + 0x58;
        lVar7 = lVar7 + -0x58;
        lVar5 = lVar5 + -0x58;
      } while (lVar5 != 0);
    }
    FUN_14084385c(param_3);
    *(undefined1 *)((longlong)param_3 + 0x1e) = 0xff;
    if (DAT_14c99e108 == 0) {
      uVar4 = FUN_14582fb07();
      DAT_14c99e108 = FUN_140002ddd(FUN_146295665,uVar4,L"UniversalObjectLocatorEmptyPayload");
    }
    puVar6 = &local_31;
    lVar5 = DAT_14c99e108;
  }
LAB_1411b5917:
  FUN_14047320e(lVar5,param_2,puVar6,0);
LAB_1411b5922:
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 1;
}



// FUNCTION 1411b5c94 FUN_1411b5c94 body=131 status=ok
// SIG undefined FUN_1411b5c94(void)

void FUN_1411b5c94(undefined8 *param_1,longlong param_2)

{
  uint uVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  byte bVar4;
  uint uVar5;
  
  plVar2 = *(longlong **)(param_2 + 0x28);
  uVar1 = *(uint *)((longlong)plVar2 + 0x5c);
  uVar5 = -uVar1 & ((int)plVar2[0xb] + uVar1) - 1;
  *(byte *)((longlong)param_1 + 0x1f) = (*(byte *)((longlong)param_1 + 0x1f) & 2) + 1;
  bVar4 = 3;
  puVar3 = param_1;
  if (8 < uVar1 || 0x1e < uVar5) {
    puVar3 = (undefined8 *)FUN_14001cc68((longlong)(int)uVar5);
    *param_1 = puVar3;
    bVar4 = *(byte *)((longlong)param_1 + 0x1f) & 0xfd;
  }
  *(byte *)((longlong)param_1 + 0x1f) = bVar4;
                    /* WARNING: Could not recover jumptable at 0x0001411b5d14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x2e8))
            (plVar2,(ulonglong)(1 << (bVar4 >> 2 & 0x1f) & 0xfffffffe) + (longlong)puVar3,1);
  return;
}



// FUNCTION 1411b5d18 FUN_1411b5d18 body=91 status=ok
// SIG undefined FUN_1411b5d18(void)

undefined8 * FUN_1411b5d18(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a472840;
  *(undefined4 *)(param_1 + 0x11) = 0;
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  FUN_1411b5d74(param_1 + 8);
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1411b5d74 FUN_1411b5d74 body=485 status=ok
// SIG undefined FUN_1411b5d74(void)

void FUN_1411b5d74(longlong *param_1)

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
  ulonglong uVar10;
  int iVar11;
  longlong lVar12;
  ulonglong uVar13;
  uint uVar14;
  
  puVar1 = (uint *)(param_1 + 2);
  iVar3 = (int)param_1[5];
  if (iVar3 == 0) {
    uVar10 = 0;
    uVar13 = 1;
    iVar4 = 0;
    iVar11 = 0;
  }
  else {
    puVar8 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar8 = puVar1;
    }
    uVar14 = *puVar8;
    if (uVar14 == 0) {
      iVar4 = iVar3 + 0x1e;
      if (-1 < iVar3 + -1) {
        iVar4 = iVar3 + -1;
      }
      uVar10 = 0;
      uVar13 = (ulonglong)(uint)(iVar4 >> 5);
      if (iVar4 >> 5 < 1) {
        uVar13 = uVar10;
      }
      iVar11 = 0;
      do {
        if (uVar13 == uVar10) goto LAB_1411b5eb2;
        iVar11 = iVar11 + 0x20;
        uVar14 = puVar8[uVar10 + 1];
        uVar10 = uVar10 + 1;
      } while (uVar14 == 0);
    }
    else {
      uVar10 = 0;
      iVar11 = 0;
    }
    uVar13 = (ulonglong)(-uVar14 & uVar14);
    uVar2 = uVar13 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iVar4 = (iVar11 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    if (iVar3 <= iVar4) {
      iVar4 = iVar3;
    }
  }
  if (iVar4 < iVar3) {
    uVar14 = 0xffffffff;
    do {
      if (*(longlong *)(*param_1 + 8 + (longlong)iVar4 * 0x20) != 0) {
        FUN_1400020a8();
        iVar3 = (int)param_1[5];
      }
      uVar14 = uVar14 & ~(uint)uVar13;
      puVar8 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar8 = puVar1;
      }
      iVar4 = (int)uVar10;
      lVar12 = (longlong)iVar4;
      uVar5 = puVar8[lVar12] & uVar14;
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
          iVar11 = iVar11 + 0x20;
          uVar5 = puVar8[lVar12 + lVar9 + 1];
          if (uVar5 != 0) break;
          lVar9 = lVar9 + 1;
          if (iVar7 - lVar12 == lVar9) goto LAB_1411b5eb2;
        }
        uVar10 = (ulonglong)(iVar4 + (int)lVar9 + 1);
        uVar14 = 0xffffffff;
      }
      uVar13 = (ulonglong)(-uVar5 & uVar5);
      uVar2 = uVar13 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iVar4 = (iVar11 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    } while (iVar4 < iVar3);
  }
LAB_1411b5eb2:
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1446f4a44(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(puVar1,0);
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



// FUNCTION 1411b5f5a FUN_1411b5f5a body=40 status=ok
// SIG undefined FUN_1411b5f5a(void)

undefined8 FUN_1411b5f5a(undefined8 param_1,int param_2)

{
  FUN_1411b5f82();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1411b5f82 FUN_1411b5f82 body=177 status=ok
// SIG undefined FUN_1411b5f82(void)

void FUN_1411b5f82(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a5566b0;
  param_1[0x4a] = &PTR_FUN_14a556ab0;
  if (param_1[0x82] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x80] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x7e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x7c] != 0) {
    FUN_1400020a8();
  }
  FUN_1413180ee(param_1[0x7a],*(undefined4 *)(param_1 + 0x7b));
  if (param_1[0x7a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x77] != 0) {
    FUN_1400020a8();
  }
  FUN_140731102(param_1);
  return;
}



// FUNCTION 1411b6034 FUN_1411b6034 body=221 status=ok
// SIG undefined FUN_1411b6034(void)

longlong FUN_1411b6034(void)

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
  if (DAT_14cb0dc88 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147d8d2c7;
    local_40 = &LAB_145b286f3;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000008;
    local_60 = 0x10;
    local_68 = 0x390;
    FUN_14081cfa3(L"/Script/Engine",L"Canvas",&DAT_14cb0dc88,FUN_14640af74);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb0dc88;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411b6112 FUN_1411b6112 body=36 status=ok
// SIG undefined FUN_1411b6112(void)

undefined8 FUN_1411b6112(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 1411b6136 FUN_1411b6136 body=150 status=ok
// SIG undefined FUN_1411b6136(void)

void FUN_1411b6136(longlong param_1,char param_2)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  if (param_2 != '\0') {
    *(undefined4 *)(param_1 + 0xa0) = 0;
    if (*(int *)(param_1 + 0xa4) != 0) {
      FUN_140254dde(param_1 + 0x88,0);
    }
    *(undefined1 *)(param_1 + 0x80) = 0;
  }
  lVar5 = param_1 + 0x50;
  if (*(longlong *)(param_1 + 0x58) != 0) {
    lVar5 = *(longlong *)(param_1 + 0x58);
  }
  iVar1 = *(int *)(param_1 + 0x60);
  if ((longlong)iVar1 != 0) {
    lVar6 = 0;
    do {
      iVar2 = *(int *)(lVar5 + lVar6);
      if (((-1 < (longlong)iVar2) &&
          (plVar3 = *(longlong **)(param_1 + 0x40), iVar2 < (int)plVar3[1])) &&
         (lVar4 = (longlong)iVar2 * 0xb0 + *plVar3, lVar4 != 0)) {
        FUN_1411b6136(lVar4,CONCAT71((int7)((ulonglong)plVar3 >> 8),1));
      }
      lVar6 = lVar6 + 4;
    } while ((longlong)iVar1 * 4 != lVar6);
  }
  FUN_140de40cc(param_1);
  return;
}



// FUNCTION 1411b61cc FUN_1411b61cc body=869 status=ok
// SIG undefined FUN_1411b61cc(void)

void FUN_1411b61cc(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  undefined4 uVar10;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  undefined1 auStack_78 [40];
  undefined1 local_50 [8];
  longlong *local_48;
  ulonglong uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar9 = *(longlong *)(param_1 + 8);
  local_48 = (longlong *)0x0;
  uStack_40 = uStack_40 & 0xffffffff00000000;
  FUN_1446efa72(&local_48,0,3,0x10);
  uStack_40._0_4_ = 3;
  lVar5 = *param_3;
  plVar7 = (longlong *)param_3[1];
  if (plVar7 == (longlong *)0x0) {
    *local_48 = (longlong)&PTR_LAB_149e06450;
    LOCK();
    UNLOCK();
    lVar8 = DAT_14c758608 + 1;
    lVar6 = DAT_14c758608 + 1;
    if (lVar8 == 0) {
      LOCK();
      UNLOCK();
      lVar8 = DAT_14c758608 + 2;
      lVar6 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar6;
    local_48[2] = lVar8;
    *local_48 = (longlong)&PTR_FUN_14b42b670;
    local_48[3] = lVar5;
    local_48[4] = 0;
    local_48[5] = (longlong)&LAB_140cbb790;
  }
  else {
    LOCK();
    *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
    UNLOCK();
    *local_48 = (longlong)&PTR_LAB_149e06450;
    LOCK();
    UNLOCK();
    lVar8 = DAT_14c758608 + 1;
    lVar6 = DAT_14c758608 + 1;
    if (lVar8 == 0) {
      LOCK();
      UNLOCK();
      lVar8 = DAT_14c758608 + 2;
      lVar6 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar6;
    local_48[2] = lVar8;
    *local_48 = (longlong)&PTR_FUN_14b42b670;
    local_48[3] = lVar5;
    local_48[4] = (longlong)plVar7;
    LOCK();
    *(int *)((longlong)plVar7 + 0xc) = *(int *)((longlong)plVar7 + 0xc) + 1;
    UNLOCK();
    local_48[5] = (longlong)&LAB_140cbb790;
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
  FUN_140c6314c(lVar9 + 0x28,local_50,&local_48);
  if ((int)uStack_40 != 0) {
    if (local_48 == (longlong *)0x0) goto LAB_1411b62c3;
    (**(code **)*local_48)(local_48,0);
    FUN_1446efa72(&local_48,0,0,0x10);
    uStack_40._0_4_ = 0;
  }
  if (local_48 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_1411b62c3:
  local_48 = (longlong *)0x0;
  uStack_40 = 0;
  uVar10 = (**(code **)(*(longlong *)*param_2 + 0x10))((longlong *)*param_2,&local_48);
  if ((longlong)(int)uStack_40 != 0) {
    lVar9 = (longlong)(int)uStack_40 * 0x18;
    plVar7 = local_48;
    do {
      lVar5 = plVar7[1];
      if (lVar5 == 0) {
        uVar4 = FUN_14110242a();
        lVar5 = FUN_14477b664(uVar4);
        plVar7[1] = lVar5;
        uVar10 = extraout_XMM0_Da;
      }
      lVar6 = plVar7[2];
      if (lVar6 == 0) {
        if ((*plVar7 != 0) && (lVar5 != 0)) {
          plVar2 = *(longlong **)(lVar5 + 0xb8);
          if ((plVar2 == (longlong *)0x0) ||
             (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), uVar10 = extraout_XMM0_Da_00,
             cVar3 == '\0')) {
LAB_1411b6525:
            plVar7[2] = 0;
          }
          else {
            uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
            lVar6 = FUN_144aff482(uVar4,plVar7);
            plVar7[2] = lVar6;
            uVar10 = extraout_XMM0_Da_01;
            if (lVar6 != 0) {
              lVar5 = plVar7[1];
              goto LAB_1411b637d;
            }
          }
        }
      }
      else {
LAB_1411b637d:
        if (lVar5 == 0) {
          uVar4 = FUN_14110242a(uVar10,lVar6);
          lVar5 = FUN_14477b664(uVar4);
          plVar7[1] = lVar5;
          lVar6 = plVar7[2];
          if (lVar6 == 0) {
            uVar10 = extraout_XMM0_Da_02;
            if ((lVar5 != 0) && (*plVar7 != 0)) {
              plVar2 = *(longlong **)(lVar5 + 0xb8);
              if ((plVar2 == (longlong *)0x0) ||
                 (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), uVar10 = extraout_XMM0_Da_03,
                 cVar3 == '\0')) goto LAB_1411b6525;
              uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
              lVar6 = FUN_144aff482(uVar4,plVar7);
              plVar7[2] = lVar6;
              uVar10 = extraout_XMM0_Da_04;
              if (lVar6 != 0) goto LAB_1411b6386;
            }
            goto LAB_1411b6391;
          }
        }
LAB_1411b6386:
        uVar10 = FUN_14115c490(param_1,lVar6,0);
      }
LAB_1411b6391:
      plVar7 = plVar7 + 3;
      lVar9 = lVar9 + -0x18;
    } while (lVar9 != 0);
  }
  if (local_48 != (longlong *)0x0) {
    FUN_1400020a8(local_48);
  }
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1411b6534 FUN_1411b6534 body=285 status=ok
// SIG undefined FUN_1411b6534(void)

void FUN_1411b6534(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  byte local_68;
  byte local_67;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  bVar4 = 0;
  bVar5 = 0;
  do {
    local_78 = 0x3f00000040800000;
    uStack_70 = 0x3f80000040800000;
    bVar6 = local_67 & 0xf0;
    FUN_14003fbd6();
    local_80 = (**(code **)(*DAT_14caea080 + 0x2f0))();
    local_68 = bVar4 & 0x30 | bVar5 & 1;
    local_67 = bVar5 >> 1 & 4 | bVar6;
    FUN_14489d6f2(param_1,&local_88,&local_80);
    uVar2 = local_88;
    iVar1 = *(int *)(param_1 + 0x128);
    *(uint *)(param_1 + 0x128) = iVar1 + 1U;
    if (*(uint *)(param_1 + 300) < iVar1 + 1U) {
      FUN_1411b6652(param_1 + 0xd8,iVar1);
    }
    lVar3 = *(longlong *)(param_1 + 0x120);
    if (*(longlong *)(param_1 + 0x120) == 0) {
      lVar3 = param_1 + 0xd8;
    }
    *(undefined8 *)(lVar3 + (longlong)iVar1 * 0xc) = uVar2;
    *(byte *)(lVar3 + 8 + (longlong)iVar1 * 0xc) = bVar5;
    bVar5 = bVar5 + 1;
    bVar4 = bVar4 + 8;
  } while (bVar5 != 0x10);
  if ((local_60 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411b6652 FUN_1411b6652 body=352 status=ok
// SIG undefined FUN_1411b6652(void)

void FUN_1411b6652(longlong param_1,int param_2)

{
  ulonglong uVar1;
  byte bVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  
  uVar3 = *(uint *)(param_1 + 0x50);
  if ((int)uVar3 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar3);
  }
  if (uVar3 < 7) {
    iVar8 = 6;
  }
  else {
    lVar4 = (longlong)(int)uVar3;
    if (6 < *(uint *)(param_1 + 0x54)) {
      lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
    }
    uVar5 = lVar4 * 0xc;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar1 = uVar5 + 0xf;
        if (uVar5 < 0x7ff1) {
          uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
        }
        else {
          if ((uVar1 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar1 >> 4];
            uVar7 = 0x32;
            if (0x32 < bVar2) {
              uVar7 = (ulonglong)bVar2;
            }
            uVar9 = 0x32 - (ulonglong)bVar2;
            do {
              uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar9 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar9 & 0xffffffff] & 0xf) == 0) goto LAB_1411b66e2;
              lVar4 = uVar7 + 1 + uVar9;
              uVar9 = uVar9 - 1;
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
LAB_1411b66e2:
    iVar6 = (int)(uVar5 / 0xc);
    iVar8 = 0x7fffffff;
    if ((int)uVar3 <= iVar6) {
      iVar8 = iVar6;
    }
  }
  *(int *)(param_1 + 0x54) = iVar8;
  FUN_1411b67b2(param_1,param_2);
  return;
}



// FUNCTION 1411b67b2 FUN_1411b67b2 body=139 status=ok
// SIG undefined FUN_1411b67b2(void)

void FUN_1411b67b2(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x48);
  if ((uint)param_3 < 7) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0xc);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x48,0,param_3,0xc);
    memmove(*(void **)((longlong)param_1 + 0x48),param_1,(longlong)param_2 * 0xc);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x48,param_2,param_3,0xc);
  return;
}



// FUNCTION 1411b683e FUN_1411b683e body=544 status=ok
// SIG undefined FUN_1411b683e(void)

void FUN_1411b683e(longlong param_1,ulonglong param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined1 auStack_98 [40];
  undefined4 local_70 [2];
  undefined4 *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58 [2];
  undefined4 *local_50;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((ulonglong)((longlong)*(int *)(param_1 + 8) - (longlong)*(int *)(param_1 + 0x38)) < param_2) {
    if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(param_2 & 0xffffffff);
    }
    if (*(int *)(param_1 + 0xc) < (int)param_2) {
      FUN_1411b6a60(param_1,param_2 & 0xffffffff);
    }
    uVar1 = *(uint *)(param_1 + 0x70);
    uVar5 = uVar1;
    if ((ulonglong)(uVar1 * 3) <= param_2 * 5) {
      do {
        uVar4 = uVar5;
        uVar5 = uVar4 * 2 + 1;
      } while ((ulonglong)(uVar5 * 3) <= param_2 * 5);
      uVar4 = uVar4 * 2;
      if (uVar1 <= uVar4) {
        puVar8 = (undefined4 *)(param_1 + 0x40);
        puVar2 = *(undefined4 **)(param_1 + 0x48);
        if (puVar2 == (undefined4 *)0x0) {
          local_58[0] = *puVar8;
        }
        *(undefined8 *)(param_1 + 0x48) = 0;
        local_48 = *(undefined4 *)(param_1 + 0x50);
        local_44 = *(undefined4 *)(param_1 + 0x54);
        *(undefined8 *)(param_1 + 0x50) = 0x100000000;
        puVar6 = (undefined4 *)(param_1 + 0x58);
        puVar3 = *(undefined4 **)(param_1 + 0x60);
        if (puVar3 == (undefined4 *)0x0) {
          local_70[0] = *puVar6;
        }
        *(undefined8 *)(param_1 + 0x60) = 0;
        local_60 = *(undefined4 *)(param_1 + 0x68);
        local_5c = *(undefined4 *)(param_1 + 0x6c);
        *(undefined8 *)(param_1 + 0x68) = 0x100000000;
        *(uint *)(param_1 + 0x70) = uVar5;
        *(undefined4 *)(param_1 + 0x74) = 0;
        iVar7 = uVar4 + 2;
        local_68 = puVar3;
        local_50 = puVar2;
        if (iVar7 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(iVar7);
        }
        if (iVar7 == 0) {
          *(undefined4 *)(param_1 + 0x50) = 0;
          uVar5 = 0;
        }
        else {
          FUN_14475fe8c(puVar8);
          iVar7 = *(int *)(param_1 + 0x50);
          uVar5 = *(int *)(param_1 + 0x70) + 1;
          *(int *)(param_1 + 0x50) = iVar7 + *(int *)(param_1 + 0x70) + 1;
          if ((uint)(*(int *)(param_1 + 0x54) - iVar7) < uVar5) {
            FUN_146f3c7b6(puVar8,iVar7);
            uVar5 = *(int *)(param_1 + 0x70) + 1;
          }
          if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
            FUN_1456afac4(uVar5);
          }
          if (*(int *)(param_1 + 0x6c) < (int)uVar5) {
            FUN_14476002c(puVar6);
            uVar5 = *(int *)(param_1 + 0x70) + 1;
          }
        }
        FUN_144a7a6da(puVar6,uVar5);
        puVar8 = local_70;
        if (puVar3 != (undefined4 *)0x0) {
          puVar8 = puVar3;
        }
        uVar5 = 0;
        do {
          if (!SBORROW4(0,puVar8[(int)uVar5])) {
            puVar6 = local_58;
            if (puVar2 != (undefined4 *)0x0) {
              puVar6 = puVar2;
            }
            FUN_14726cb0e(param_1,puVar6[(int)uVar5]);
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 <= uVar1);
        if (puVar3 != (undefined4 *)0x0) {
          FUN_1400020a8(puVar3);
        }
        if (puVar2 != (undefined4 *)0x0) {
          FUN_1400020a8(puVar2);
        }
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1411b6a60 FUN_1411b6a60 body=109 status=ok
// SIG undefined FUN_1411b6a60(void)

void FUN_1411b6a60(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
    uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x98,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0x98)) {
      uVar2 = uVar1 / 0x98 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x98,8);
  }
  return;
}



// FUNCTION 1411b6ace FUN_1411b6ace body=309 status=ok
// SIG undefined FUN_1411b6ace(void)

void FUN_1411b6ace(longlong *param_1,float param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  bool bVar7;
  undefined1 auStack_68 [32];
  float local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x6c8))();
  if (param_1[0x85] != 0) {
    lVar5 = FUN_1411b6c24();
    *(double *)(lVar5 + 0x10) = *(double *)(lVar5 + 0x10) - (double)param_2;
  }
  param_1[0xa2] = (longlong)((double)param_1[0xa2] - (double)param_2);
  if ((char)param_1[0x2f] == '\x03') {
    FUN_1447f69b6(param_1 + 0xacf);
  }
  local_48 = param_2;
  local_44 = param_3;
  uVar6 = FUN_14477b072(param_1,DAT_14cacf6d0);
  (**(code **)(*param_1 + 0x248))(param_1,uVar6,&local_48);
  puVar3 = (undefined8 *)param_1[0xebc];
  if (puVar3 != (undefined8 *)0x0) {
    iVar4 = *(int *)(puVar3 + 1);
    do {
      if (iVar4 == 0) goto LAB_1411b6b8b;
      LOCK();
      iVar2 = *(int *)(puVar3 + 1);
      bVar7 = iVar4 == iVar2;
      if (bVar7) {
        *(int *)(puVar3 + 1) = iVar4 + 1;
        iVar2 = iVar4;
      }
      iVar4 = iVar2;
      UNLOCK();
    } while (!bVar7);
    if (param_1[0xebb] != 0) {
      thunk_FUN_1411b6e1a(param_1[0xebb],0);
    }
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
        FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_68);
      }
    }
  }
LAB_1411b6b8b:
  if ((local_40 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1411b6c1e thunk_FUN_1411b6e1a body=5 status=ok
// SIG undefined thunk_FUN_1411b6e1a(void)

void thunk_FUN_1411b6e1a(longlong param_1)

{
  byte bVar1;
  byte bVar2;
  undefined4 uVar3;
  
  if (*(char *)(param_1 + 0x1b8) != '\x01') {
    return;
  }
  if (*(longlong *)(param_1 + 0x208) == 0) {
    return;
  }
  bVar1 = *(byte *)(param_1 + 0x3d8);
  FUN_1411b6fca(param_1);
  bVar2 = *(byte *)(param_1 + 0x3d8);
  if (bVar2 == bVar1) {
    return;
  }
  *(undefined4 *)(param_1 + 0x3d0) = 0;
  *(undefined8 *)(param_1 + 0x2f8) = *(undefined8 *)(param_1 + 0x2e0);
  *(undefined8 *)(param_1 + 0x300) = *(undefined8 *)(param_1 + 0x2e8);
  *(undefined8 *)(param_1 + 0x308) = *(undefined8 *)(param_1 + 0x2f0);
  if (bVar1 == 0) {
    if ((byte)(bVar2 - 1) < 2) {
      *(double *)(param_1 + 0x308) =
           (double)*(float *)(param_1 + 0x3d4) + *(double *)(param_1 + 0x308);
    }
LAB_1411b6ef0:
    if (bVar2 == 1) {
      *(undefined8 *)(param_1 + 800) = *(undefined8 *)(param_1 + 0x2a8);
      *(undefined8 *)(param_1 + 0x310) = *(undefined8 *)(param_1 + 0x298);
      *(undefined8 *)(param_1 + 0x318) = *(undefined8 *)(param_1 + 0x2a0);
      *(undefined4 *)(param_1 + 0x3c8) = *(undefined4 *)(*(longlong *)(param_1 + 0x208) + 0x1c0);
      uVar3 = *(undefined4 *)(*(longlong *)(param_1 + 0x208) + 0x1c4);
    }
    else if (bVar2 == 2) {
      *(undefined8 *)(param_1 + 800) = *(undefined8 *)(param_1 + 0x2c0);
      *(undefined8 *)(param_1 + 0x310) = *(undefined8 *)(param_1 + 0x2b0);
      *(undefined8 *)(param_1 + 0x318) = *(undefined8 *)(param_1 + 0x2b8);
      *(undefined4 *)(param_1 + 0x3c8) = *(undefined4 *)(*(longlong *)(param_1 + 0x208) + 0x1c8);
      uVar3 = *(undefined4 *)(*(longlong *)(param_1 + 0x208) + 0x1cc);
    }
    else {
      if (bVar2 != 3) goto LAB_1411b6eaf;
      *(undefined8 *)(param_1 + 800) = *(undefined8 *)(param_1 + 0x2d8);
      *(undefined8 *)(param_1 + 0x310) = *(undefined8 *)(param_1 + 0x2c8);
      *(undefined8 *)(param_1 + 0x318) = *(undefined8 *)(param_1 + 0x2d0);
      *(undefined4 *)(param_1 + 0x3c8) = *(undefined4 *)(*(longlong *)(param_1 + 0x208) + 0x1d0);
      uVar3 = *(undefined4 *)(*(longlong *)(param_1 + 0x208) + 0x1d4);
    }
    *(undefined4 *)(param_1 + 0x3cc) = uVar3;
  }
  else {
    if ((2 < bVar1) || (bVar2 != 0)) goto LAB_1411b6ef0;
    *(double *)(param_1 + 0x308) =
         *(double *)(param_1 + 0x308) - (double)*(float *)(param_1 + 0x3d4);
LAB_1411b6eaf:
    *(undefined8 *)(param_1 + 800) = *(undefined8 *)(param_1 + 0x290);
    *(undefined8 *)(param_1 + 0x310) = *(undefined8 *)(param_1 + 0x280);
    *(undefined8 *)(param_1 + 0x318) = *(undefined8 *)(param_1 + 0x288);
  }
  return;
}



// FUNCTION 1411b6c24 FUN_1411b6c24 body=183 status=ok
// SIG undefined FUN_1411b6c24(void)

longlong FUN_1411b6c24(longlong param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined *puVar3;
  uint *puVar4;
  longlong *plVar5;
  uint uVar6;
  
  uVar1 = *(ulonglong *)(param_1 + 0x38);
  if (uVar1 < 0xffffffff00000000) {
    plVar5 = DAT_14c9980d0;
    if (DAT_14c9980d8 == 0) {
      plVar5 = (longlong *)0x0;
    }
    (**(code **)(*plVar5 + 0x58))(plVar5,param_1,uVar1,5);
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
        *puVar4 = *puVar4 | 0x20;
        *(byte *)(lVar2 + 0x60) = *(byte *)(lVar2 + 0x60) | 1;
      }
    }
  }
  return param_1 + 0x198;
}



// FUNCTION 1411b6cdc FUN_1411b6cdc body=317 status=ok
// SIG undefined FUN_1411b6cdc(void)

void FUN_1411b6cdc(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  
  if (*(longlong **)(param_1 + 0x11e8) != (longlong *)0x0) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x11e8) + 0xeb8))();
    if (cVar1 != '\0') {
      plVar2 = (longlong *)(**(code **)(*(longlong *)(param_1 + 0x10c8) + 0x38))(param_1 + 0x10c8);
      if (plVar2 == (longlong *)0x0) goto LAB_1411b6df2;
      lVar3 = (**(code **)(*plVar2 + 8))(plVar2);
      lVar4 = FUN_140458448();
      if (((lVar4 == 0) || (*(int *)(lVar3 + 0x38) < *(int *)(lVar4 + 0x38))) ||
         (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) !=
          lVar4 + 0x30)) goto LAB_1411b6df2;
      puVar5 = (undefined4 *)((longlong)plVar2 + 0x284);
      if ((char)plVar2[0x50] == '\0') {
        puVar5 = (undefined4 *)((longlong)plVar2 + 0x254);
      }
      uVar6 = *puVar5;
      goto LAB_1411b6d7d;
    }
  }
  lVar3 = *(longlong *)(&DAT_00006850 + param_1);
  if (((lVar3 != 0) && ((&DAT_00001100)[lVar3] == '\n')) && (*(longlong *)(lVar3 + 0x110) != 0)) {
    plVar2 = (longlong *)(**(code **)(*(longlong *)(param_1 + 0x10c8) + 0x38))(param_1 + 0x10c8);
    if (plVar2 != (longlong *)0x0) {
      lVar3 = (**(code **)(*plVar2 + 8))(plVar2);
      lVar4 = FUN_140458448();
      if (((lVar4 != 0) && (*(int *)(lVar4 + 0x38) <= *(int *)(lVar3 + 0x38))) &&
         (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
          lVar4 + 0x30)) {
        uVar6 = (undefined4)plVar2[(ulonglong)*(byte *)((longlong)plVar2 + 0x28c) * 8 + 0x4a];
LAB_1411b6d7d:
        *(undefined4 *)(param_1 + 0x39c) = uVar6;
        return;
      }
    }
  }
LAB_1411b6df2:
  FUN_14129728c(param_1);
  return;
}



// FUNCTION 1411b6e1a FUN_1411b6e1a body=432 status=ok
// SIG undefined FUN_1411b6e1a(void)

void FUN_1411b6e1a(longlong param_1)

{
  byte bVar1;
  byte bVar2;
  undefined4 uVar3;
  
  if (*(char *)(param_1 + 0x1b8) != '\x01') {
    return;
  }
  if (*(longlong *)(param_1 + 0x208) == 0) {
    return;
  }
  bVar1 = *(byte *)(param_1 + 0x3d8);
  FUN_1411b6fca(param_1);
  bVar2 = *(byte *)(param_1 + 0x3d8);
  if (bVar2 == bVar1) {
    return;
  }
  *(undefined4 *)(param_1 + 0x3d0) = 0;
  *(undefined8 *)(param_1 + 0x2f8) = *(undefined8 *)(param_1 + 0x2e0);
  *(undefined8 *)(param_1 + 0x300) = *(undefined8 *)(param_1 + 0x2e8);
  *(undefined8 *)(param_1 + 0x308) = *(undefined8 *)(param_1 + 0x2f0);
  if (bVar1 == 0) {
    if ((byte)(bVar2 - 1) < 2) {
      *(double *)(param_1 + 0x308) =
           (double)*(float *)(param_1 + 0x3d4) + *(double *)(param_1 + 0x308);
    }
LAB_1411b6ef0:
    if (bVar2 == 1) {
      *(undefined8 *)(param_1 + 800) = *(undefined8 *)(param_1 + 0x2a8);
      *(undefined8 *)(param_1 + 0x310) = *(undefined8 *)(param_1 + 0x298);
      *(undefined8 *)(param_1 + 0x318) = *(undefined8 *)(param_1 + 0x2a0);
      *(undefined4 *)(param_1 + 0x3c8) = *(undefined4 *)(*(longlong *)(param_1 + 0x208) + 0x1c0);
      uVar3 = *(undefined4 *)(*(longlong *)(param_1 + 0x208) + 0x1c4);
    }
    else if (bVar2 == 2) {
      *(undefined8 *)(param_1 + 800) = *(undefined8 *)(param_1 + 0x2c0);
      *(undefined8 *)(param_1 + 0x310) = *(undefined8 *)(param_1 + 0x2b0);
      *(undefined8 *)(param_1 + 0x318) = *(undefined8 *)(param_1 + 0x2b8);
      *(undefined4 *)(param_1 + 0x3c8) = *(undefined4 *)(*(longlong *)(param_1 + 0x208) + 0x1c8);
      uVar3 = *(undefined4 *)(*(longlong *)(param_1 + 0x208) + 0x1cc);
    }
    else {
      if (bVar2 != 3) goto LAB_1411b6eaf;
      *(undefined8 *)(param_1 + 800) = *(undefined8 *)(param_1 + 0x2d8);
      *(undefined8 *)(param_1 + 0x310) = *(undefined8 *)(param_1 + 0x2c8);
      *(undefined8 *)(param_1 + 0x318) = *(undefined8 *)(param_1 + 0x2d0);
      *(undefined4 *)(param_1 + 0x3c8) = *(undefined4 *)(*(longlong *)(param_1 + 0x208) + 0x1d0);
      uVar3 = *(undefined4 *)(*(longlong *)(param_1 + 0x208) + 0x1d4);
    }
    *(undefined4 *)(param_1 + 0x3cc) = uVar3;
  }
  else {
    if ((2 < bVar1) || (bVar2 != 0)) goto LAB_1411b6ef0;
    *(double *)(param_1 + 0x308) =
         *(double *)(param_1 + 0x308) - (double)*(float *)(param_1 + 0x3d4);
LAB_1411b6eaf:
    *(undefined8 *)(param_1 + 800) = *(undefined8 *)(param_1 + 0x290);
    *(undefined8 *)(param_1 + 0x310) = *(undefined8 *)(param_1 + 0x280);
    *(undefined8 *)(param_1 + 0x318) = *(undefined8 *)(param_1 + 0x288);
  }
  return;
}



// FUNCTION 1411b6fca FUN_1411b6fca body=476 status=ok
// SIG undefined FUN_1411b6fca(void)

void FUN_1411b6fca(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
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
  undefined1 *local_38;
  code *local_30;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar2 = *(longlong *)(param_1 + 0x40);
  if (((((lVar2 != 0) && (*(int *)(lVar2 + 0x4c) != 0)) &&
       (uVar1 = *(uint *)(lVar2 + 0x48), -1 < (int)uVar1)) &&
      (((int)uVar1 < DAT_14c9647dc &&
       (plVar5 = (longlong *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
       plVar5 != (longlong *)0x0)))) &&
     (((int)plVar5[2] == *(int *)(lVar2 + 0x4c) &&
      (((*(uint *)(plVar5 + 1) & 0x10200000) == 0 && (lVar2 = *plVar5, lVar2 != 0)))))) {
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
    if ((*(int *)(DAT_14cba8288 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) == DAT_14cba8288 + 0x30)) {
      lVar3 = *(longlong *)(&DAT_00006850 + lVar2);
      if ((lVar3 == 0) || (((&DAT_00001100)[lVar3] != '\n' || (*(longlong *)(lVar3 + 0x110) == 0))))
      {
        if (*(longlong **)(lVar2 + 0x11e8) != (longlong *)0x0) {
          cVar4 = (**(code **)(**(longlong **)(lVar2 + 0x11e8) + 0xeb8))();
          if (cVar4 != '\0') {
            *(undefined1 *)(param_1 + 0x3d8) = 2;
            goto LAB_1411b70b9;
          }
        }
        if ((*(byte *)(lVar2 + 0x550) & 2) == 0) {
          *(undefined1 *)(param_1 + 0x3d8) = 0;
        }
        else {
          *(undefined1 *)(param_1 + 0x3d8) = 1;
        }
      }
      else {
        *(undefined1 *)(param_1 + 0x3d8) = 3;
      }
    }
  }
LAB_1411b70b9:
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411b71a8 FUN_1411b71a8 body=65 status=ok
// SIG undefined FUN_1411b71a8(void)

undefined8 * FUN_1411b71a8(undefined8 *param_1)

{
  FUN_14086a0da();
  *param_1 = &PTR_FUN_14b2f4fd0;
  param_1[5] = &PTR_FUN_14b2f5280;
  param_1[10] = &PTR_FUN_14b2f52b0;
  param_1[0xb] = &PTR_FUN_14b2f52e0;
  return param_1;
}



// FUNCTION 1411b71ea FUN_1411b71ea body=477 status=ok
// SIG undefined FUN_1411b71ea(void)

void FUN_1411b71ea(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  bool bVar5;
  undefined1 auStack_68 [32];
  uint local_48;
  int local_44;
  uint *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = FUN_1447210f0();
  if ((lVar2 == 0) || (lVar2 = *(longlong *)(lVar2 + 0x1f0), lVar2 == 0)) {
LAB_1411b7375:
    if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
  lVar3 = FUN_1403ca142();
  if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x38) < *(int *)(lVar3 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
      lVar3 + 0x30)) goto LAB_1411b7375;
  lVar3 = param_1[0x50b];
  if (lVar3 == 0) {
    lVar3 = FUN_140704886(lVar2);
    param_1[0x50b] = lVar3;
    if (lVar3 == 0) goto LAB_1411b72dc;
  }
  local_44 = 0;
  if (param_1 == (longlong *)0x0) {
    local_48 = 0;
    iVar1 = 0;
  }
  else {
    local_48 = *(uint *)((longlong)param_1 + 0xc);
    if ((int)local_48 < DAT_14c9647dc) {
      lVar2 = (ulonglong)((local_48 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_48 >> 0x10) * 8);
    }
    else {
      lVar2 = 0;
    }
    iVar1 = *(int *)(lVar2 + 0x10);
    if (*(int *)(lVar2 + 0x10) == 0) {
      LOCK();
      iVar1 = DAT_14c964868 + 1;
      UNLOCK();
      iVar4 = DAT_14c964868 + 1;
      bVar5 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar1;
      if (bVar5) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar4);
      }
      LOCK();
      iVar1 = *(int *)(lVar2 + 0x10);
      bVar5 = iVar1 == 0;
      if (bVar5) {
        *(int *)(lVar2 + 0x10) = iVar4;
        iVar1 = 0;
      }
      UNLOCK();
      if (bVar5) {
        iVar1 = iVar4;
      }
    }
  }
  local_40 = &local_48;
  local_44 = iVar1;
  FUN_1411b73de(lVar3 + 0x128);
  if ((char)param_1[0x2f] == '\x03') {
    FUN_145830868(lVar3,param_1);
  }
LAB_1411b72dc:
  lVar2 = FUN_1447210f0(param_1);
  if (((lVar2 != 0) && (*(longlong *)(lVar2 + 0x1f0) != 0)) && (lVar2 = FUN_1400d6ce6(), lVar2 != 0)
     ) {
    FUN_140457ffc(lVar2 + 0x160,param_1);
  }
  (**(code **)(*param_1 + 0x570))(param_1);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_68);
}



// FUNCTION 1411b73de FUN_1411b73de body=289 status=ok
// SIG undefined FUN_1411b73de(void)

void FUN_1411b73de(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  
  uVar1 = *(uint *)(param_1 + 1);
  lVar13 = (longlong)(int)uVar1;
  if (lVar13 != 0) {
    lVar2 = *param_1;
    bVar4 = FUN_1411b7500(lVar2,*param_2);
    uVar8 = 0;
    uVar9 = 0;
    do {
      uVar7 = (ulonglong)uVar9;
      uVar3 = uVar9 + 1;
      if ((int)(uVar9 + 1) < (int)uVar1) {
        uVar3 = uVar1;
      }
      lVar12 = lVar2 + 8 + uVar7 * 8;
      uVar10 = uVar9;
      uVar6 = uVar7;
      do {
        uVar6 = uVar6 + 1;
        uVar11 = uVar3;
        if (lVar13 <= (longlong)uVar6) break;
        bVar5 = FUN_1411b7500(lVar12,*param_2);
        uVar10 = uVar10 + 1;
        lVar12 = lVar12 + 8;
        uVar11 = uVar10;
      } while ((bVar4 & 1) == bVar5);
      if ((bVar4 & 1) == 0) {
        if (uVar8 != uVar9) {
          memmove((void *)(lVar2 + (longlong)(int)uVar8 * 8),(void *)(lVar2 + uVar7 * 8),
                  (longlong)(int)(uVar11 - uVar9) << 3);
        }
        uVar8 = uVar8 + (uVar11 - uVar9);
      }
      uVar9 = uVar11;
      bVar4 = bVar4 ^ 1;
    } while ((longlong)uVar6 < lVar13);
    *(uint *)(param_1 + 1) = uVar8;
  }
  return;
}



// FUNCTION 1411b7500 FUN_1411b7500 body=104 status=ok
// SIG undefined FUN_1411b7500(void)

ulonglong FUN_1411b7500(uint *param_1,uint *param_2)

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



// FUNCTION 1411b7568 FUN_1411b7568 body=595 status=ok
// SIG undefined FUN_1411b7568(void)

void FUN_1411b7568(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  char cVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined4 local_78;
  uint uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  do {
    cVar3 = FUN_1411b77bc(param_1 + 0x2680);
  } while (cVar3 != '\0');
  do {
    cVar3 = FUN_1411b77bc(param_1 + 0x2690);
  } while (cVar3 != '\0');
  while (lVar7 = **(longlong **)(param_1 + 0x2678), lVar7 != 0) {
    lVar4 = *(longlong *)(param_1 + 0x2678);
    *(longlong *)(param_1 + 0x2678) = lVar7;
    *(undefined8 *)(lVar7 + 8) = 0;
    if (lVar4 != 0) {
      FUN_1400020a8();
    }
  }
  plVar1 = (longlong *)(param_1 + 0x2968);
  iVar6 = *(int *)(param_1 + 0x29b0);
  if (iVar6 < 2) {
    lVar7 = param_1 + 0x29a0;
    if (*(longlong *)(param_1 + 0x29a8) != 0) {
      lVar7 = *(longlong *)(param_1 + 0x29a8);
    }
    iVar5 = iVar6 + 3;
    if (-1 < iVar6) {
      iVar5 = iVar6;
    }
    if (*(int *)(param_1 + 0x2970) - *(int *)(param_1 + 0x299c) < iVar5 >> 2) {
      lVar4 = param_1 + 0x2978;
      local_58 = 0x100000000;
      local_48 = 0xffffffff;
      uStack_40 = 0;
      uStack_50 = lVar4;
      if (*(int *)(param_1 + 0x2990) == 0) {
        iVar6 = 0;
      }
      else {
        FUN_1449c0562(&local_58);
        iVar6 = *(int *)(param_1 + 0x2990);
      }
      local_78 = (undefined4)local_58;
      uStack_74 = local_58._4_4_;
      uStack_70 = (undefined4)uStack_50;
      uStack_6c = uStack_50._4_4_;
      uStack_60 = CONCAT44(uStack_3c,uStack_40);
      local_68 = local_48;
      uVar2 = local_68;
      local_68._4_4_ = (int)((ulonglong)local_48 >> 0x20);
      iVar5 = local_68._4_4_;
      local_80 = plVar1;
      if ((local_68._4_4_ != iVar6) || (local_68 = local_48, uStack_50 != lVar4)) {
        do {
          local_68 = uVar2;
          *(undefined4 *)(lVar7 + (longlong)*(int *)(*local_80 + 0x1c + (longlong)iVar5 * 0x20) * 4)
               = 0xffffffff;
          local_68 = CONCAT44(local_68._4_4_,(uint)local_68 & ~uStack_74);
          FUN_1449c0562(&local_78);
          iVar5 = local_68._4_4_;
          uVar2 = local_68;
        } while (local_80 != plVar1 ||
                 (CONCAT44(uStack_6c,uStack_70) != lVar4 || local_68._4_4_ != iVar6));
      }
    }
    else if (iVar6 == 1) {
      lVar4 = 0;
      do {
        *(undefined4 *)(lVar7 + lVar4 * 4) = 0xffffffff;
        lVar4 = lVar4 + 1;
      } while (lVar4 < *(int *)(param_1 + 0x29b0));
    }
    FUN_1411b7820(plVar1,0);
  }
  else {
    FUN_1411b7820(plVar1,0);
    *(undefined4 *)(param_1 + 0x29b0) = 1;
    FUN_1458c0ada(plVar1);
  }
  if (*(char *)(param_1 + 0x178) == '\x03') {
    FUN_14107c533(*(undefined8 *)(param_1 + 0x2ae8),*(undefined4 *)(param_1 + 0x2af0));
    *(undefined4 *)(param_1 + 0x2af0) = 0;
    if (*(int *)(param_1 + 0x2af4) != 0) {
      FUN_145830838(param_1 + 0x2ae8);
    }
    *(undefined2 *)(param_1 + 0x2ae0) = 0;
  }
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1411b77bc FUN_1411b77bc body=100 status=ok
// SIG undefined FUN_1411b77bc(void)

bool FUN_1411b77bc(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = **(longlong **)(param_1 + 8);
  if (lVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 8);
    *(longlong *)(param_1 + 8) = lVar1;
    if (*(longlong *)(lVar1 + 8) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(lVar1 + 0x18) = 0;
    *(undefined8 *)(lVar1 + 0x20) = 0;
    *(undefined8 *)(lVar1 + 8) = 0;
    *(undefined8 *)(lVar1 + 0x10) = 0;
    if (lVar2 != 0) {
      if (*(longlong *)(lVar2 + 8) != 0) {
        FUN_1400020a8();
      }
      FUN_1400020a8(lVar2);
    }
  }
  return lVar1 != 0;
}



// FUNCTION 1411b7820 FUN_1411b7820 body=415 status=ok
// SIG undefined FUN_1411b7820(void)

void FUN_1411b7820(longlong *param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined8 local_78;
  longlong *local_70;
  uint local_68;
  int iStack_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  longlong *local_50;
  uint local_48;
  int iStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar1 = param_1 + 2;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  local_40 = 0;
  local_50 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_58);
  }
  local_78 = local_58;
  local_70 = local_50;
  local_68 = local_48;
  iStack_64 = iStack_44;
  local_60 = local_40;
  local_5c = local_3c;
  local_80 = param_1;
  if (iStack_44 < (int)local_50[3]) {
    do {
      lVar2 = *local_80;
      lVar5 = (longlong)iStack_64 * 0x20;
      FUN_1411b79c1(*(undefined8 *)(lVar2 + 8 + lVar5),*(undefined4 *)(lVar2 + 0x10 + lVar5));
      if (*(longlong *)(lVar2 + 8 + lVar5) != 0) {
        FUN_1400020a8();
      }
      local_68 = local_68 & ~local_78._4_4_;
      FUN_1449c0562(&local_78);
    } while (iStack_64 < (int)local_70[3]);
  }
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_1446f4a44(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar4 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar4) ||
     (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
    uVar3 = 0x80;
    if (0x80 < (int)uVar4) {
      uVar3 = uVar4;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar3;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1411b79c1 FUN_1411b79c1 body=41 status=ok
// SIG undefined FUN_1411b79c1(void)

void FUN_1411b79c1(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_140368b56(param_1);
    param_1 = param_1 + 0xf0;
  }
  return;
}



// FUNCTION 1411b79ea FUN_1411b79ea body=55 status=ok
// SIG undefined FUN_1411b79ea(void)

void FUN_1411b79ea(longlong *param_1)

{
  FUN_1411b7a22(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1411b7a22 FUN_1411b7a22 body=121 status=ok
// SIG undefined FUN_1411b7a22(void)

void FUN_1411b7a22(longlong param_1,int param_2)

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



// FUNCTION 1411b7a9c FUN_1411b7a9c body=55 status=ok
// SIG undefined FUN_1411b7a9c(void)

void FUN_1411b7a9c(longlong *param_1)

{
  FUN_1411b7ad4(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1411b7ad4 FUN_1411b7ad4 body=123 status=ok
// SIG undefined FUN_1411b7ad4(void)

void FUN_1411b7ad4(longlong param_1,int param_2)

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



// FUNCTION 1411b7b50 FUN_1411b7b50 body=1406 status=ok
// SIG undefined FUN_1411b7b50(void)

void FUN_1411b7b50(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  undefined1 *puVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong lVar13;
  bool bVar14;
  undefined1 auStack_188 [32];
  undefined4 local_168;
  undefined4 local_160;
  undefined4 local_158;
  undefined8 local_150;
  wchar_t *local_148;
  undefined1 *local_140;
  undefined1 *local_138;
  code **local_130;
  undefined1 *local_128;
  code *local_120;
  uint local_10c;
  longlong local_108;
  longlong local_100;
  code **local_f8;
  undefined2 *local_f0;
  undefined1 local_e4 [4];
  code *local_e0 [5];
  longlong local_b8;
  undefined2 local_a8 [2];
  undefined8 local_a4;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  longlong local_70;
  longlong lStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_a8[0] = 0;
  local_a4 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  lStack_68 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  local_100 = param_1;
  FUN_14107c4d6(&lStack_68,param_2 + 0x2ae8);
  if ((int)local_60 != 0) {
    FUN_145830e36(&uStack_58,param_2 + 11000);
    FUN_1411b80d0(param_2,local_e0);
    FUN_1411b8130(local_a8,local_e0);
    if (local_b8 != 0) {
      FUN_1400020a8();
    }
    FUN_140212f8e(&local_f8);
    local_150 = (ulonglong)local_150._4_4_ << 0x20;
    local_158 = 0;
    local_160 = 0;
    local_168 = 0;
    FUN_14021300e(local_e0,0x7b2,1,1);
    lVar13 = (longlong)local_f8 - (longlong)local_e0[0];
    uVar2 = FUN_145830e94(param_2);
    lVar8 = lStack_68;
    local_70 = (ulonglong)uVar2 + lVar13 / 10000000;
    lVar13 = (longlong)(int)local_60;
    if (lVar13 != 0) {
      plVar1 = (longlong *)(local_100 + 0x150);
      lVar11 = 0;
      local_108 = param_2;
      do {
        lVar6 = *(longlong *)(lVar8 + lVar11);
        if ((lVar6 != 0) && (lVar4 = *(longlong *)(lVar6 + 0x398), lVar4 != 0)) {
          if (DAT_14cbae3d8 == 0) {
            local_e0[0] = FUN_141030f22;
            local_120 = FUN_14081d0ea;
            local_128 = &LAB_1464f5fc4;
            local_138 = &LAB_148c3dd26;
            local_140 = &LAB_1459673ba;
            local_148 = L"Engine";
            local_150 = 0;
            local_158 = 0x10000004;
            local_160 = 0x10;
            local_168 = 0x1360;
            local_130 = local_e0;
            FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerState",&DAT_14cbae3d8,FUN_1465eb604);
            lVar4 = *(longlong *)(lVar6 + 0x398);
            if (lVar4 == 0) goto LAB_1411b7e8f;
          }
          if ((((DAT_14cbae3d8 != 0) && (lVar6 = *(longlong *)(lVar4 + 0x10), lVar6 != 0)) &&
              (*(int *)(DAT_14cbae3d8 + 0x38) <= *(int *)(lVar6 + 0x38))) &&
             (*(longlong *)
               (*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(DAT_14cbae3d8 + 0x38) * 8) ==
              DAT_14cbae3d8 + 0x30)) {
            *(undefined4 *)(lVar8 + 0x38 + lVar11) = *(undefined4 *)(lVar4 + 0x394);
            if (param_2 == 0) {
              uVar10 = 0;
              uVar2 = 0;
            }
            else {
              uVar10 = *(uint *)(param_2 + 0xc);
              if ((int)uVar10 < DAT_14c9647dc) {
                lVar6 = (ulonglong)((uVar10 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8);
              }
              else {
                lVar6 = 0;
              }
              uVar2 = *(uint *)(lVar6 + 0x10);
              if (*(uint *)(lVar6 + 0x10) == 0) {
                LOCK();
                iVar3 = DAT_14c964868 + 1;
                UNLOCK();
                uVar9 = DAT_14c964868 + 1;
                bVar14 = DAT_14c964868 < 1000;
                DAT_14c964868 = iVar3;
                if (bVar14) {
                  local_10c = uVar9;
                  FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                ,uVar9);
                  uVar9 = local_10c;
                }
                LOCK();
                uVar2 = *(uint *)(lVar6 + 0x10);
                bVar14 = uVar2 == 0;
                if (bVar14) {
                  *(uint *)(lVar6 + 0x10) = uVar9;
                  uVar2 = 0;
                }
                UNLOCK();
                if (bVar14) {
                  uVar2 = uVar9;
                }
              }
            }
            local_e0[0] = (code *)CONCAT44(uVar2,uVar10);
            iVar3 = FUN_14088c684(plVar1,uVar2 ^ uVar10,local_e0);
            if (iVar3 != -1) {
              lVar6 = *plVar1;
              if ((lVar6 + (longlong)iVar3 * 0x60 != 0) &&
                 (plVar12 = (longlong *)(lVar6 + (longlong)iVar3 * 0x60 + 8),
                 plVar12 != (longlong *)0x0)) {
                lVar6 = *(longlong *)(lVar8 + lVar11);
                if ((DAT_14c950c29 == '\x01') && (lVar6 != 0)) {
                  FUN_1456cec3c(lVar6);
LAB_1411b7df4:
                  uVar2 = *(uint *)(lVar6 + 0xc);
                  uVar7 = (ulonglong)uVar2;
                  if ((int)uVar2 < DAT_14c9647dc) {
                    lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
                  }
                  else {
                    lVar6 = 0;
                  }
                  param_2 = local_108;
                  uVar2 = *(uint *)(lVar6 + 0x10);
                  if (*(uint *)(lVar6 + 0x10) == 0) {
                    LOCK();
                    iVar3 = DAT_14c964868 + 1;
                    UNLOCK();
                    uVar10 = DAT_14c964868 + 1;
                    bVar14 = DAT_14c964868 < 1000;
                    DAT_14c964868 = iVar3;
                    if (bVar14) {
                      local_10c = uVar10;
                      FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                    L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                    ,uVar10);
                      uVar10 = local_10c;
                    }
                    LOCK();
                    uVar2 = *(uint *)(lVar6 + 0x10);
                    bVar14 = uVar2 == 0;
                    if (bVar14) {
                      *(uint *)(lVar6 + 0x10) = uVar10;
                      uVar2 = 0;
                    }
                    UNLOCK();
                    param_2 = local_108;
                    if (bVar14) {
                      uVar2 = uVar10;
                    }
                  }
                }
                else {
                  if (lVar6 != 0) goto LAB_1411b7df4;
                  uVar7 = 0;
                  uVar2 = 0;
                }
                local_e0[0] = (code *)(uVar7 | (ulonglong)uVar2 << 0x20);
                iVar3 = FUN_1411b8176(plVar12,uVar2 ^ (uint)uVar7,local_e0);
                if (iVar3 != -1) {
                  if ((*plVar12 + (longlong)iVar3 * 0x18 != 0) &&
                     (puVar5 = (undefined1 *)(*plVar12 + (longlong)iVar3 * 0x18 + 8),
                     puVar5 != (undefined1 *)0x0)) {
                    *(undefined1 *)(lVar8 + 0x34 + lVar11) = *puVar5;
                  }
                }
              }
            }
          }
        }
LAB_1411b7e8f:
        lVar11 = lVar11 + 0x40;
      } while (lVar13 << 6 != lVar11);
    }
    lVar8 = local_100 + 0x210;
    FUN_1411b80d0(param_2,local_e0);
    local_f0 = local_a8;
    local_f8 = local_e0;
    FUN_1411b82b2(lVar8,local_e4);
    if (local_b8 != 0) {
      FUN_1400020a8();
    }
  }
  FUN_1411b822c(local_a8);
  if ((local_48 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1411b80d0 FUN_1411b80d0 body=95 status=ok
// SIG undefined FUN_1411b80d0(void)

undefined2 * FUN_1411b80d0(longlong param_1,undefined2 *param_2)

{
  char cVar1;
  
  if (param_1 + 0xc20 != 0) {
    FUN_1406f1bc8(param_1 + 0xc20,param_2);
    cVar1 = FUN_1401144ce(param_2);
    if (cVar1 != '\0') {
      return param_2;
    }
    if (*(longlong *)(param_2 + 0x14) != 0) {
      FUN_1400020a8();
    }
  }
  *param_2 = 0;
  *(undefined8 *)(param_2 + 2) = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0xc) = 0;
  *(undefined4 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x14) = 0;
  *(undefined8 *)(param_2 + 0x18) = 0;
  return param_2;
}



// FUNCTION 1411b8130 FUN_1411b8130 body=70 status=ok
// SIG undefined FUN_1411b8130(void)

undefined1 * FUN_1411b8130(undefined1 *param_1,undefined1 *param_2)

{
  *param_1 = *param_2;
  *param_2 = 0;
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_2 + 4) = 0;
  FUN_1404e49fa(param_1 + 0x10,param_2 + 0x10);
  param_1[1] = param_2[1];
  param_2[1] = 0;
  return param_1;
}



// FUNCTION 1411b8176 FUN_1411b8176 body=180 status=ok
// SIG undefined FUN_1411b8176(void)

int FUN_1411b8176(longlong *param_1,uint param_2,undefined8 *param_3)

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
        local_40 = *(undefined8 *)(lVar3 + (longlong)iVar4 * 0x18);
        cVar1 = FUN_1407052fc(&local_40,&local_48);
        if (cVar1 != '\0') goto LAB_1411b8204;
        lVar3 = *param_1;
        iVar4 = *(int *)(lVar3 + 0x10 + (longlong)iVar4 * 0x18);
      } while (iVar4 != -1);
    }
  }
  iVar4 = -1;
LAB_1411b8204:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411b822c FUN_1411b822c body=87 status=ok
// SIG undefined FUN_1411b822c(void)

void FUN_1411b822c(longlong param_1)

{
  FUN_1411b8283(*(undefined8 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x58));
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
  }
  FUN_14107c533(*(undefined8 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x48));
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x28) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1411b8283 FUN_1411b8283 body=47 status=ok
// SIG undefined FUN_1411b8283(void)

void FUN_1411b8283(longlong param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 0x10;
    do {
      FUN_140368b56(param_1);
      param_1 = param_1 + 0xe8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1411b82b2 FUN_1411b82b2 body=845 status=ok
// SIG undefined FUN_1411b82b2(void)

undefined4 * FUN_1411b82b2(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  undefined1 *puVar8;
  longlong lVar9;
  ulonglong uVar10;
  bool bVar11;
  bool bVar12;
  undefined1 auStack_a8 [36];
  undefined4 local_84;
  undefined4 local_80 [2];
  char *local_78;
  uint local_70;
  int local_6c;
  undefined1 local_68 [16];
  undefined1 *local_58;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_1458310e2(param_1,local_80);
  uVar1 = param_3[1];
  FUN_14014e938(local_78,*param_3);
  FUN_14583100c(local_78 + 0x38,uVar1);
  local_78[0x98] = -1;
  local_78[0x99] = -1;
  local_78[0x9a] = -1;
  local_78[0x9b] = -1;
  local_84 = local_80[0];
  if (*local_78 == '\x01') {
    FUN_1447a97f4(&local_70,local_78 + 0x10);
    if (0 < local_6c) {
      lVar9 = 0;
      uVar10 = 0;
      iVar5 = local_6c;
      uVar4 = DAT_14c948000;
      do {
        bVar11 = local_70 != 0;
        bVar12 = local_70 != uVar4;
        piVar6 = &DAT_14c948620;
        piVar7 = (int *)&DAT_14c948618;
        if (bVar12 && bVar11) {
          puVar8 = local_68;
          if (0 < local_4c) {
            puVar8 = local_58;
          }
          if (1 < iVar5) {
            puVar8 = local_58;
          }
          piVar6 = (int *)(puVar8 + lVar9 + 8);
          piVar7 = (int *)(puVar8 + lVar9);
        }
        if ((*piVar7 == DAT_14cb7beb0) && (*piVar6 == DAT_14cb7beb8)) {
LAB_1411b84e4:
          FUN_1402b5374(&local_70,uVar10 & 0xffffffff,0);
          iVar5 = local_6c;
          uVar4 = DAT_14c948000;
        }
        else {
          piVar6 = &DAT_14c948620;
          piVar7 = (int *)&DAT_14c948618;
          if (bVar12 && bVar11) {
            puVar8 = local_68;
            if (0 < local_4c) {
              puVar8 = local_58;
            }
            if (1 < iVar5) {
              puVar8 = local_58;
            }
            piVar6 = (int *)(puVar8 + lVar9 + 8);
            piVar7 = (int *)(puVar8 + lVar9);
          }
          if ((*piVar7 == DAT_14cb7bec8) && (*piVar6 == DAT_14cb7bed0)) goto LAB_1411b84e4;
          piVar6 = &DAT_14c948620;
          piVar7 = (int *)&DAT_14c948618;
          if (bVar12 && bVar11) {
            puVar8 = local_68;
            if (0 < local_4c) {
              puVar8 = local_58;
            }
            if (1 < iVar5) {
              puVar8 = local_58;
            }
            piVar6 = (int *)(puVar8 + lVar9 + 8);
            piVar7 = (int *)(puVar8 + lVar9);
          }
          if ((*piVar7 == DAT_14cb7bee0) && (*piVar6 == DAT_14cb7bee8)) goto LAB_1411b84e4;
          piVar6 = &DAT_14c948620;
          piVar7 = (int *)&DAT_14c948618;
          if (bVar12 && bVar11) {
            puVar8 = local_68;
            if (0 < local_4c) {
              puVar8 = local_58;
            }
            if (1 < iVar5) {
              puVar8 = local_58;
            }
            piVar6 = (int *)(puVar8 + lVar9 + 8);
            piVar7 = (int *)(puVar8 + lVar9);
          }
          if ((*piVar7 == DAT_14cb7bef8) && (*piVar6 == DAT_14cb7bf00)) goto LAB_1411b84e4;
          piVar6 = &DAT_14c948620;
          piVar7 = (int *)&DAT_14c948618;
          if (bVar12 && bVar11) {
            puVar8 = local_68;
            if (0 < local_4c) {
              puVar8 = local_58;
            }
            if (1 < iVar5) {
              puVar8 = local_58;
            }
            piVar6 = (int *)(puVar8 + lVar9 + 8);
            piVar7 = (int *)(puVar8 + lVar9);
          }
          if ((*piVar7 == DAT_14cb7bf10) && (*piVar6 == DAT_14cb7bf18)) goto LAB_1411b84e4;
        }
        uVar10 = uVar10 + 1;
        lVar9 = lVar9 + 0xc;
      } while ((longlong)uVar10 < (longlong)iVar5);
    }
    if (local_58 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    local_70 = *(uint *)(local_78 + 0x10);
  }
  cVar3 = FUN_145830f7e(param_1,local_70,local_78,&local_84);
  uVar2 = local_84;
  if (cVar3 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    if (uVar4 < 4) {
      iVar5 = 1;
    }
    else {
      uVar10 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar9 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar5 = 1 << ((byte)lVar9 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar5 <= *(int *)(param_1 + 0x48))) {
      local_70 = *(int *)(param_1 + 0x48) - 1U & local_70;
      *(uint *)(local_78 + 0x9c) = local_70;
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(local_78 + 0x98) =
           *(undefined4 *)
            (lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)local_70) * 4);
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)local_70) * 4) = local_84;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_1411b8600(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1411b8600 FUN_1411b8600 body=998 status=ok
// SIG undefined FUN_1411b8600(void)

void FUN_1411b8600(longlong *param_1)

{
  longlong lVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  int *piVar11;
  int *piVar12;
  longlong **pplVar13;
  ulonglong uVar14;
  bool bVar15;
  bool bVar16;
  undefined1 auStack_c8 [40];
  longlong *local_a0;
  longlong *local_98;
  undefined8 local_90;
  longlong *local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined8 local_70;
  longlong *local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar2 = *(uint *)(param_1 + 9);
  uVar3 = local_80;
  if (uVar2 != 0) {
    plVar4 = param_1 + 7;
    uVar9 = 0;
    FUN_144a1cbf0(plVar4,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar4;
        }
        *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar9) * 4) =
             0xffffffff;
        uVar9 = uVar9 + 1;
      } while (uVar2 != uVar9);
    }
    local_68 = param_1 + 2;
    local_70 = 0x100000000;
    local_60 = 0xffffffff;
    local_58 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_70);
    }
    local_90 = local_70;
    local_88 = local_68;
    local_80 = local_60;
    uVar3 = local_80;
    local_78 = local_58;
    local_74 = uStack_54;
    local_80._4_4_ = (int)((ulonglong)local_60 >> 0x20);
    local_98 = param_1;
    if (local_80._4_4_ < (int)local_68[3]) {
      iVar8 = local_80._4_4_;
      local_a0 = plVar4;
      local_80 = uVar3;
      do {
        lVar1 = *local_98 + (longlong)iVar8 * 0xa0;
        if (*(char *)(*local_98 + (longlong)iVar8 * 0xa0) == '\x01') {
          FUN_1447a97f4(&local_70,lVar1 + 0x10);
          if (0 < local_70._4_4_) {
            lVar10 = 0;
            uVar14 = 0;
            iVar6 = local_70._4_4_;
            iVar5 = DAT_14c948000;
            do {
              bVar15 = (int)local_70 != 0;
              bVar16 = (int)local_70 != iVar5;
              piVar11 = &DAT_14c948620;
              piVar12 = (int *)&DAT_14c948618;
              if (bVar16 && bVar15) {
                pplVar13 = &local_68;
                if (0 < local_4c) {
                  pplVar13 = (longlong **)CONCAT44(uStack_54,local_58);
                }
                if (1 < iVar6) {
                  pplVar13 = (longlong **)CONCAT44(uStack_54,local_58);
                }
                piVar11 = (int *)((longlong)pplVar13 + lVar10 + 8);
                piVar12 = (int *)((longlong)pplVar13 + lVar10);
              }
              if ((*piVar12 == DAT_14cb7beb0) && (*piVar11 == DAT_14cb7beb8)) {
LAB_1411b88e8:
                FUN_1402b5374(&local_70,uVar14 & 0xffffffff,0);
                iVar6 = local_70._4_4_;
                iVar5 = DAT_14c948000;
              }
              else {
                piVar11 = &DAT_14c948620;
                piVar12 = (int *)&DAT_14c948618;
                if (bVar16 && bVar15) {
                  pplVar13 = &local_68;
                  if (0 < local_4c) {
                    pplVar13 = (longlong **)CONCAT44(uStack_54,local_58);
                  }
                  if (1 < iVar6) {
                    pplVar13 = (longlong **)CONCAT44(uStack_54,local_58);
                  }
                  piVar11 = (int *)((longlong)pplVar13 + lVar10 + 8);
                  piVar12 = (int *)((longlong)pplVar13 + lVar10);
                }
                if ((*piVar12 == DAT_14cb7bec8) && (*piVar11 == DAT_14cb7bed0)) goto LAB_1411b88e8;
                piVar11 = &DAT_14c948620;
                piVar12 = (int *)&DAT_14c948618;
                if (bVar16 && bVar15) {
                  pplVar13 = &local_68;
                  if (0 < local_4c) {
                    pplVar13 = (longlong **)CONCAT44(uStack_54,local_58);
                  }
                  if (1 < iVar6) {
                    pplVar13 = (longlong **)CONCAT44(uStack_54,local_58);
                  }
                  piVar11 = (int *)((longlong)pplVar13 + lVar10 + 8);
                  piVar12 = (int *)((longlong)pplVar13 + lVar10);
                }
                if ((*piVar12 == DAT_14cb7bee0) && (*piVar11 == DAT_14cb7bee8)) goto LAB_1411b88e8;
                piVar11 = &DAT_14c948620;
                piVar12 = (int *)&DAT_14c948618;
                if (bVar16 && bVar15) {
                  pplVar13 = &local_68;
                  if (0 < local_4c) {
                    pplVar13 = (longlong **)CONCAT44(uStack_54,local_58);
                  }
                  if (1 < iVar6) {
                    pplVar13 = (longlong **)CONCAT44(uStack_54,local_58);
                  }
                  piVar11 = (int *)((longlong)pplVar13 + lVar10 + 8);
                  piVar12 = (int *)((longlong)pplVar13 + lVar10);
                }
                if ((*piVar12 == DAT_14cb7bef8) && (*piVar11 == DAT_14cb7bf00)) goto LAB_1411b88e8;
                piVar11 = &DAT_14c948620;
                piVar12 = (int *)&DAT_14c948618;
                if (bVar16 && bVar15) {
                  pplVar13 = &local_68;
                  if (0 < local_4c) {
                    pplVar13 = (longlong **)CONCAT44(uStack_54,local_58);
                  }
                  if (1 < iVar6) {
                    pplVar13 = (longlong **)CONCAT44(uStack_54,local_58);
                  }
                  piVar11 = (int *)((longlong)pplVar13 + lVar10 + 8);
                  piVar12 = (int *)((longlong)pplVar13 + lVar10);
                }
                if ((*piVar12 == DAT_14cb7bf10) && (*piVar11 == DAT_14cb7bf18)) goto LAB_1411b88e8;
              }
              uVar14 = uVar14 + 1;
              lVar10 = lVar10 + 0xc;
            } while ((longlong)uVar14 < (longlong)iVar6);
          }
          iVar6 = (int)local_70;
          if (CONCAT44(uStack_54,local_58) != 0) {
            FUN_1400020a8();
          }
        }
        else {
          iVar6 = *(int *)(lVar1 + 0x10);
        }
        uVar14 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar14;
        *(int *)(lVar1 + 0x9c) = iVar6;
        plVar4 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar4 = local_a0;
        }
        *(undefined4 *)(lVar1 + 0x98) =
             *(undefined4 *)((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & uVar14) * 4);
        plVar4 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar4 = local_a0;
        }
        *(int *)((longlong)plVar4 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar8;
        local_80 = CONCAT44(local_80._4_4_,(uint)local_80 & ~local_90._4_4_);
        FUN_1449c0562(&local_90);
        iVar8 = local_80._4_4_;
        uVar3 = local_80;
      } while (local_80._4_4_ < (int)local_88[3]);
    }
  }
  local_80 = uVar3;
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1411b89e8 FUN_1411b89e8 body=38 status=ok
// SIG undefined FUN_1411b89e8(void)

undefined8 FUN_1411b89e8(undefined8 param_1,int param_2)

{
  FUN_1411b8a0e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1411b8a0e FUN_1411b8a0e body=203 status=ok
// SIG undefined FUN_1411b8a0e(void)

void FUN_1411b8a0e(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  uint *puVar3;
  uint uVar4;
  longlong *plVar5;
  
  *param_1 = &PTR_LAB_14aa96270;
  param_1[2] = &PTR_FUN_14aa962a0;
  param_1[3] = &PTR_FUN_14aa962f0;
  param_1[4] = &PTR_FUN_14aa96300;
  plVar5 = (longlong *)param_1[9];
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
  param_1[4] = &PTR_FUN_14a38cd70;
  *(undefined1 *)((longlong)param_1 + 0x2e) = 2;
  if ((*(int *)(param_1 + 5) != -1) && (DAT_14c868880 == '\0')) {
    FUN_140033559(".\\Runtime/RenderCore/Private/RenderResource.cpp",0xfe,
                  L"A FRenderResource was deleted without being released first!");
  }
  *param_1 = &PTR__purecall_14a453170;
  if (param_1[1] != 0) {
    LOCK();
    puVar3 = (uint *)(param_1[1] + 8);
    uVar4 = *puVar3;
    *puVar3 = *puVar3 - 1;
    UNLOCK();
    if ((uVar4 & 0x3fffffff) == 1) {
      FUN_144a54812();
      return;
    }
  }
  return;
}



// FUNCTION 1411b8ada FUN_1411b8ada body=368 status=ok
// SIG undefined FUN_1411b8ada(void)

void FUN_1411b8ada(longlong param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  double dVar2;
  float fVar3;
  
  FUN_1411b8c4a();
  iVar1 = (*(int *)(param_1 + 0xc) - *(int *)(param_2 + 0xc)) /
          (*(int *)(param_3 + 0xc) - *(int *)(param_2 + 0xc));
  fVar3 = (float)iVar1;
  dVar2 = (double)FUN_144719204((double)(*(float *)(param_3 + 0x48) - *(float *)(param_2 + 0x48)),
                                0x4076800000000000);
  dVar2 = (double)(~-(ulonglong)(dVar2 < 0.0) & (ulonglong)dVar2 |
                  (ulonglong)(dVar2 + 360.0) & -(ulonglong)(dVar2 < 0.0));
  *(float *)(param_1 + 0x48) =
       (float)(double)(~-(ulonglong)(180.0 < dVar2) & (ulonglong)dVar2 |
                      (ulonglong)(dVar2 + -360.0) & -(ulonglong)(180.0 < dVar2)) * fVar3 +
       *(float *)(param_2 + 0x48);
  dVar2 = (double)FUN_144719204((double)(*(float *)(param_3 + 0x4c) - *(float *)(param_2 + 0x4c)),
                                0x4076800000000000);
  dVar2 = (double)(~-(ulonglong)(dVar2 < 0.0) & (ulonglong)dVar2 |
                  (ulonglong)(dVar2 + 360.0) & -(ulonglong)(dVar2 < 0.0));
  *(float *)(param_1 + 0x4c) =
       (float)(double)(~-(ulonglong)(180.0 < dVar2) & (ulonglong)dVar2 |
                      (ulonglong)(dVar2 + -360.0) & -(ulonglong)(180.0 < dVar2)) * fVar3 +
       *(float *)(param_2 + 0x4c);
  if (iVar1 < 1) {
    param_3 = param_2;
  }
  *(undefined1 *)(param_1 + 0x50) = *(undefined1 *)(param_3 + 0x50);
  *(undefined1 *)(param_1 + 0x51) = *(undefined1 *)(param_3 + 0x51);
  *(undefined1 *)(param_1 + 0x52) = *(undefined1 *)(param_3 + 0x52);
  return;
}



// FUNCTION 1411b8c4a FUN_1411b8c4a body=350 status=ok
// SIG undefined FUN_1411b8c4a(void)

void FUN_1411b8c4a(longlong param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  float fVar4;
  
  iVar1 = *(int *)(param_3 + 0xc);
  iVar2 = *(int *)(param_2 + 0xc);
  if (iVar1 == *(int *)(param_1 + 0xc)) {
    fVar4 = 1.0 / (float)((iVar1 - iVar2) + 1);
  }
  else {
    fVar4 = (float)((*(int *)(param_1 + 0xc) - iVar2) / (iVar1 - iVar2));
  }
  lVar3 = param_3;
  if (fVar4 < 0.5) {
    lVar3 = param_2;
  }
  *(float *)(param_1 + 0x38) =
       (*(float *)(param_3 + 0x38) - *(float *)(param_2 + 0x38)) * fVar4 +
       *(float *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(lVar3 + 0x3c);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(lVar3 + 0x40);
  *(float *)(param_1 + 0x20) =
       (*(float *)(param_3 + 0x20) - *(float *)(param_2 + 0x20)) * fVar4 +
       *(float *)(param_2 + 0x20);
  *(float *)(param_1 + 0x30) =
       (*(float *)(param_3 + 0x30) - *(float *)(param_2 + 0x30)) * fVar4 +
       *(float *)(param_2 + 0x30);
  *(float *)(param_1 + 0x24) =
       (*(float *)(param_3 + 0x24) - *(float *)(param_2 + 0x24)) * fVar4 +
       *(float *)(param_2 + 0x24);
  *(float *)(param_1 + 0x28) =
       (*(float *)(param_3 + 0x28) - *(float *)(param_2 + 0x28)) * fVar4 +
       *(float *)(param_2 + 0x28);
  *(float *)(param_1 + 0x1c) =
       (*(float *)(param_3 + 0x1c) - *(float *)(param_2 + 0x1c)) * fVar4 +
       *(float *)(param_2 + 0x1c);
  *(float *)(param_1 + 0x18) =
       (*(float *)(param_3 + 0x18) - *(float *)(param_2 + 0x18)) * fVar4 +
       *(float *)(param_2 + 0x18);
  *(float *)(param_1 + 0x2c) =
       (*(float *)(param_3 + 0x2c) - *(float *)(param_2 + 0x2c)) * fVar4 +
       *(float *)(param_2 + 0x2c);
  *(undefined1 *)(param_1 + 0x34) = *(undefined1 *)(lVar3 + 0x34);
  *(undefined1 *)(param_1 + 0x37) = *(undefined1 *)(lVar3 + 0x37);
  *(undefined1 *)(param_1 + 0x36) = *(undefined1 *)(lVar3 + 0x36);
  *(undefined1 *)(param_1 + 0x35) = *(undefined1 *)(lVar3 + 0x35);
  return;
}



// FUNCTION 1411b8dae FUN_1411b8dae body=381 status=ok
// SIG undefined FUN_1411b8dae(void)

undefined4 FUN_1411b8dae(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint *puVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  ulonglong uVar8;
  uint uVar9;
  undefined1 auStack_98 [40];
  undefined4 local_70 [4];
  ulonglong local_60;
  undefined4 local_58;
  undefined8 local_54;
  undefined8 uStack_4c;
  uint local_44;
  uint local_40;
  undefined8 local_3c;
  undefined2 local_34;
  undefined2 local_32;
  undefined1 local_30;
  undefined2 local_2f;
  byte local_2d;
  undefined2 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  puVar3 = *(uint **)(param_1 + 0x138);
  uVar7 = 0;
  if (((puVar3 != (uint *)0x0) && (bVar1 = (byte)puVar3[3], bVar1 != 0)) &&
     (((&DAT_14c873438)[(uint)bVar1 * 0x30] & 1) != 0)) {
    local_60 = (ulonglong)
               ((*(byte *)(param_1 + 0xfe) & 1) << 4 | (*(byte *)(param_1 + 0x104) & 2) << 0x13 |
               (*(byte *)(param_1 + 0xfe) & 2) << 5) ^ 0x100000;
    iVar5 = puVar3[8] - param_2;
    if ((int)(puVar3[8] - param_2) < 1) {
      iVar5 = 0;
    }
    uVar8 = (ulonglong)((uint)bVar1 * 0x30);
    uVar2 = *(uint *)((longlong)&DAT_14c87341c + uVar8);
    uVar9 = *(uint *)((longlong)&DAT_14c873420 + uVar8);
    uVar6 = puVar3[1] >> ((byte)iVar5 & 0x1f);
    if (uVar6 < uVar9) {
      uVar6 = uVar9;
    }
    uVar9 = *puVar3 >> ((byte)iVar5 & 0x1f);
    if (uVar9 < uVar2) {
      uVar9 = uVar2;
    }
    local_32 = (undefined2)puVar3[2];
    local_3c = CONCAT44(uVar6,uVar9);
    local_30 = 1;
    if (1 < param_2) {
      local_30 = (undefined1)param_2;
    }
    local_44 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
    local_40 = puVar3[4];
    local_2c = 0xff00;
    local_34 = 1;
    local_2f = 0x101;
    local_58 = 1;
    local_54 = 0;
    uStack_4c = 0;
    local_2d = bVar1;
    cVar4 = FUN_14490ad04(&local_60,&DAT_149dfb77a,0);
    uVar7 = 0;
    if (cVar4 != '\0') {
      (**(code **)(*DAT_14ca83900 + 0x180))(DAT_14ca83900,local_70,&local_60,0);
      uVar7 = local_70[0];
    }
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411b8f2c FUN_1411b8f2c body=2233 status=ok
// SIG undefined FUN_1411b8f2c(void)

void FUN_1411b8f2c(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  char cVar5;
  undefined8 *puVar6;
  undefined4 *_Src;
  undefined1 auStack_88 [32];
  ulonglong local_68;
  undefined8 local_60;
  undefined *local_58;
  code *local_50;
  undefined4 local_44;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_30 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_58 = (undefined *)FUN_1446ddbd2();
      local_50 = FUN_1468d96f0;
      local_60 = 0;
      local_68 = 0x4008001;
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
            goto LAB_1411b9017;
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
        local_60 = CONCAT44(local_60._4_4_,(int)plVar1[6]);
        local_68 = local_68 & 0xffffffff00000000;
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
LAB_1411b9017:
  local_38 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_58 = (undefined *)FUN_1446ddbd2();
      local_50 = FUN_1468d96f0;
      local_60 = 0;
      local_68 = 0x4008001;
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
            goto LAB_1411b90e4;
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
        local_60 = CONCAT44(local_60._4_4_,(int)plVar1[6]);
        local_68 = local_68 & 0xffffffff00000000;
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
LAB_1411b90e4:
  local_40 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_58 = (undefined *)FUN_1446ddbd2();
      local_50 = FUN_1468d96f0;
      local_60 = 0;
      local_68 = 0x4008001;
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
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_40);
            goto LAB_1411b91b1;
          }
        }
        puVar6 = (undefined8 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (puVar6 != &local_40) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_40,puVar6,(int)plVar1[6]);
          }
          else {
            memcpy(&local_40,puVar6,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_60 = CONCAT44(local_60._4_4_,(int)plVar1[6]);
        local_68 = local_68 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,&local_40,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_40,lVar2);
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
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
LAB_1411b91b1:
  local_44 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952210) {
    FUN_144b3d300(&DAT_14c952210);
    if (DAT_14c952210 == -1) {
      FUN_14475b26a();
      local_50 = FUN_1405ebbb2;
      local_58 = &DAT_14c9520b8;
      local_60 = 0;
      local_68 = 0x1008081;
      FUN_14000176a(&DAT_14c9521c0,L"FIntProperty",0x80,0);
      atexit(FUN_142816fad);
      _Init_thread_footer(&DAT_14c952210);
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
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_44);
            goto LAB_1411b927d;
          }
        }
        _Src = (undefined4 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (_Src != &local_44) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_44,_Src,(int)plVar1[6]);
          }
          else {
            memcpy(&local_44,_Src,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_60 = CONCAT44(local_60._4_4_,(int)plVar1[6]);
        local_68 = local_68 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,&local_44,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_44,lVar2);
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
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_44);
  }
LAB_1411b927d:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_68 = CONCAT44(local_68._4_4_,local_44);
  (**(code **)(*param_1 + 0x30))(param_1,local_30,local_38,local_40);
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411b97e6 FUN_1411b97e6 body=32 status=ok
// SIG undefined FUN_1411b97e6(void)

void FUN_1411b97e6(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x10))();
  FUN_1411b9806(uVar1,param_2,param_3);
  return;
}



// FUNCTION 1411b9806 FUN_1411b9806 body=1001 status=ok
// SIG undefined FUN_1411b9806(void)

void FUN_1411b9806(longlong param_1,undefined8 param_2,code *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  code *pcVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  int *piVar9;
  ulonglong uVar10;
  int iVar11;
  longlong lVar12;
  ulonglong *puVar13;
  ulonglong *puVar14;
  bool bVar15;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
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
  if ((param_3 != (code *)0x0) && (*(code **)(param_1 + 0x5a8) != param_3)) {
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
      local_a8 = CONCAT44(local_a8._4_4_,0x28);
      FUN_14081cfa3(L"/Script/GbxGame",L"DamageableInterface",&DAT_14cb56270,&DAT_148630fee);
    }
    lVar8 = FUN_144718840(param_3,DAT_14cb56270);
    if (lVar8 != 0) {
      if (DAT_14c950c29 == 1) {
        FUN_1456cec3c(param_3);
      }
      local_50 = param_3;
      if ((DAT_14c950c29 & 1) != 0) {
        FUN_1456cec3c(param_3);
      }
      plVar2 = (longlong *)(param_1 + 0xf8);
      if ((DAT_14c950c29 & 1) != 0) {
        FUN_1456cec3c(param_3);
      }
      uVar6 = ((uint)((ulonglong)param_3 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_3 >> 4)) *
              -0x7a143595;
      uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
      uVar6 = uVar6 >> 0x10 ^ uVar6;
      iVar7 = FUN_143d9870a(plVar2,uVar6,&local_50);
      if (iVar7 != -1) {
        lVar8 = *plVar2 + (longlong)iVar7 * 0x18;
        piVar9 = (int *)(lVar8 + 8);
        if (((piVar9 != (int *)0x0 && lVar8 != 0) &&
            (iVar7 = *piVar9, *piVar9 = iVar7 + -1, iVar7 < 2)) && (*(int *)(lVar8 + 0xc) < 1)) {
          if (DAT_14c950c29 == 1) {
            FUN_1456cec3c(param_3);
          }
          if ((DAT_14c950c29 & 1) != 0) {
            FUN_1456cec3c(param_3);
          }
          if (*(int *)(param_1 + 0x100) != *(int *)(param_1 + 300)) {
            if (DAT_14c950c29 == 1) {
              FUN_1456cec3c(param_3);
            }
            lVar8 = *(longlong *)(param_1 + 0x138);
            if (*(longlong *)(param_1 + 0x138) == 0) {
              lVar8 = param_1 + 0x130;
            }
            uVar10 = (longlong)(int)uVar6 & (longlong)*(int *)(param_1 + 0x140) - 1U;
            iVar7 = *(int *)(lVar8 + uVar10 * 4);
            if (iVar7 != -1) {
              puVar13 = (ulonglong *)(lVar8 + uVar10 * 4);
              bVar5 = DAT_14c950c29;
LAB_1411b99d6:
              puVar14 = (ulonglong *)((longlong)iVar7 * 0x18 + *plVar2);
              if ((bVar5 & 1) != 0) {
                FUN_1456cec3c(param_3);
                bVar5 = DAT_14c950c29;
              }
              pcVar4 = (code *)*puVar14;
              if (((bVar5 & 1) != 0) && (pcVar4 != (code *)0x0)) {
                FUN_1456cec3c(pcVar4);
                bVar5 = DAT_14c950c29;
              }
              if ((bVar5 & 1) != 0) {
                FUN_1456cec3c(param_3);
                bVar5 = DAT_14c950c29;
              }
              if (pcVar4 != param_3) goto code_r0x0001411b99fe;
              iVar7 = (int)*puVar13;
              lVar8 = param_1 + 0x130;
              if (*(longlong *)(param_1 + 0x138) != 0) {
                lVar8 = *(longlong *)(param_1 + 0x138);
              }
              lVar3 = *(longlong *)(param_1 + 0xf8) + (longlong)iVar7 * 0x18;
              lVar12 = (longlong)*(int *)(lVar3 + 0x14);
              iVar11 = *(int *)(lVar8 + lVar12 * 4);
              if (iVar11 == iVar7) {
                piVar9 = (int *)(lVar8 + lVar12 * 4);
              }
              else {
                do {
                  piVar9 = (int *)(*(longlong *)(param_1 + 0xf8) + (longlong)iVar11 * 0x18 + 0x10);
                  iVar11 = *piVar9;
                } while (iVar11 != iVar7);
              }
              *piVar9 = *(int *)(lVar3 + 0x10);
              FUN_143d987d4(plVar2);
            }
          }
LAB_1411b9a84:
          if ((*(longlong *)(param_1 + 0x80) != 0) &&
             (plVar2 = *(longlong **)(param_1 + 0x5e0), plVar2 != (longlong *)0x0)) {
            iVar7 = (int)plVar2[1];
            do {
              if (iVar7 == 0) goto LAB_1411b9905;
              LOCK();
              iVar11 = (int)plVar2[1];
              bVar15 = iVar7 == iVar11;
              if (bVar15) {
                *(int *)(plVar2 + 1) = iVar7 + 1;
                iVar11 = iVar7;
              }
              iVar7 = iVar11;
              UNLOCK();
            } while (!bVar15);
            if (*(longlong *)(param_1 + 0x5d8) != 0) {
              local_a8 = 0;
              FUN_140ec12ee(*(longlong *)(param_1 + 0x5d8),param_3,param_1,
                            *(undefined8 *)(param_1 + 0x80));
            }
            LOCK();
            plVar1 = plVar2 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*plVar2)(plVar2);
              LOCK();
              piVar9 = (int *)((longlong)plVar2 + 0xc);
              *piVar9 = *piVar9 + -1;
              UNLOCK();
              if (*piVar9 == 0) {
                (**(code **)(*plVar2 + 0x10))(plVar2);
              }
            }
          }
        }
      }
    }
  }
LAB_1411b9905:
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
code_r0x0001411b99fe:
  iVar7 = (int)puVar14[2];
  puVar13 = puVar14 + 2;
  if (iVar7 == -1) goto LAB_1411b9a84;
  goto LAB_1411b99d6;
}



// FUNCTION 1411b9bf0 FUN_1411b9bf0 body=109 status=ok
// SIG undefined FUN_1411b9bf0(void)

undefined8 * FUN_1411b9bf0(undefined8 *param_1)

{
  undefined1 auStack_48 [32];
  GUID local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = &PTR_FUN_14b42ad00;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  local_28.Data1 = 0;
  local_28.Data2 = 0;
  local_28.Data3 = 0;
  local_28.Data4[0] = '\0';
  local_28.Data4[1] = '\0';
  local_28.Data4[2] = '\0';
  local_28.Data4[3] = '\0';
  local_28.Data4[4] = '\0';
  local_28.Data4[5] = '\0';
  local_28.Data4[6] = '\0';
  local_28.Data4[7] = '\0';
  CoCreateGuid(&local_28);
  *(ulong *)(param_1 + 4) = local_28.Data1;
  *(undefined4 *)((longlong)param_1 + 0x24) = local_28._4_4_;
  *(undefined4 *)(param_1 + 5) = local_28.Data4._0_4_;
  *(undefined4 *)((longlong)param_1 + 0x2c) = local_28.Data4._4_4_;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411b9c5e FUN_1411b9c5e body=21 status=ok
// SIG undefined FUN_1411b9c5e(void)

undefined8 FUN_1411b9c5e(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1411b9c74 FUN_1411b9c74 body=2946 status=ok
// SIG undefined FUN_1411b9c74(void)

void FUN_1411b9c74(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined1 *puVar10;
  longlong lVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  undefined2 *puVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  longlong lVar20;
  longlong lVar21;
  uint uVar22;
  uint uVar23;
  ulonglong uVar24;
  uint uVar25;
  bool bVar26;
  undefined1 auStack_118 [32];
  longlong local_f8;
  uint *local_f0;
  longlong *local_e8;
  uint local_e0;
  int local_dc;
  longlong *local_d8;
  uint *local_d0;
  ulonglong local_c8;
  undefined1 local_bc [4];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  undefined4 local_84;
  longlong local_78;
  int local_70;
  undefined1 local_68 [16];
  undefined1 *local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_58 = (undefined1 *)0x0;
  local_50 = 0x8000000000;
  plVar1 = (longlong *)(param_1 + 0x10);
  FUN_144a686e6(local_68,*(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x44));
  local_f0 = (uint *)(param_1 + 0x20);
  iVar4 = *(int *)(param_1 + 0x38);
  iVar7 = iVar4;
  if (iVar4 == 0) {
    uVar24 = 1;
    uVar18 = 0;
    iVar15 = 0;
    iVar13 = 0;
  }
  else {
    puVar5 = *(uint **)(param_1 + 0x30);
    if (*(uint **)(param_1 + 0x30) == (uint *)0x0) {
      puVar5 = local_f0;
    }
    uVar16 = *puVar5;
    if (uVar16 == 0) {
      iVar13 = iVar4 + 0x1e;
      if (-1 < iVar4 + -1) {
        iVar13 = iVar4 + -1;
      }
      uVar18 = 0;
      uVar24 = (ulonglong)(uint)(iVar13 >> 5);
      if (iVar13 >> 5 < 1) {
        uVar24 = uVar18;
      }
      iVar15 = 0;
      do {
        if (uVar24 == uVar18) goto LAB_1411b9d71;
        iVar15 = iVar15 + 0x20;
        uVar16 = puVar5[uVar18 + 1];
        uVar18 = uVar18 + 1;
      } while (uVar16 == 0);
    }
    else {
      uVar18 = 0;
      iVar15 = 0;
    }
    uVar24 = (ulonglong)(-uVar16 & uVar16);
    uVar19 = uVar24 * 2 + 1;
    lVar20 = 0x3f;
    if (uVar19 != 0) {
      for (; uVar19 >> lVar20 == 0; lVar20 = lVar20 + -1) {
      }
    }
    iVar13 = (iVar15 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
    if (iVar4 <= iVar13) {
      iVar13 = iVar4;
    }
  }
  if (iVar13 != iVar4) {
    uVar22 = 0xffffffff;
    uVar16 = 0;
    do {
      uVar12 = 1 << ((byte)uVar16 & 0x1f);
      puVar10 = local_58;
      if (local_58 == (undefined1 *)0x0) {
        puVar10 = local_68;
      }
      uVar19 = (ulonglong)(uVar16 >> 5);
      if (*(int *)(*(longlong *)(*plVar1 + 0x20 + (longlong)iVar13 * 0x30) + 0x10) == 0) {
        uVar12 = uVar12 | *(uint *)(puVar10 + uVar19 * 4);
      }
      else {
        uVar12 = ~uVar12 & *(uint *)(puVar10 + uVar19 * 4);
      }
      *(uint *)(puVar10 + uVar19 * 4) = uVar12;
      uVar22 = uVar22 & ~(uint)uVar24;
      puVar5 = *(uint **)(param_1 + 0x30);
      if (*(uint **)(param_1 + 0x30) == (uint *)0x0) {
        puVar5 = local_f0;
      }
      iVar7 = *(int *)(param_1 + 0x38);
      iVar13 = (int)uVar18;
      lVar20 = (longlong)iVar13;
      uVar12 = puVar5[lVar20] & uVar22;
      if (uVar12 == 0) {
        iVar8 = iVar7 + 0x1e;
        if (-1 < iVar7 + -1) {
          iVar8 = iVar7 + -1;
        }
        iVar8 = iVar8 >> 5;
        iVar15 = iVar15 + 0x20;
        iVar14 = iVar8;
        if (iVar8 < iVar13) {
          iVar14 = iVar13;
        }
        if (iVar13 < iVar8) {
          lVar11 = 0;
          do {
            uVar12 = puVar5[lVar20 + lVar11 + 1];
            if (uVar12 != 0) {
              uVar18 = (ulonglong)(iVar13 + (int)lVar11 + 1);
              uVar22 = 0xffffffff;
              goto LAB_1411ba00e;
            }
            iVar15 = iVar15 + 0x20;
            lVar11 = lVar11 + 1;
          } while (iVar14 - lVar20 != lVar11);
          uVar22 = 0xffffffff;
          iVar13 = iVar14;
        }
        uVar18 = (ulonglong)(iVar13 + 1);
        iVar13 = iVar7;
      }
      else {
LAB_1411ba00e:
        uVar24 = (ulonglong)(-uVar12 & uVar12);
        uVar19 = uVar24 * 2 + 1;
        lVar20 = 0x3f;
        if (uVar19 != 0) {
          for (; uVar19 >> lVar20 == 0; lVar20 = lVar20 + -1) {
          }
        }
        iVar13 = (iVar15 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
        if (iVar7 <= iVar13) {
          iVar13 = iVar7;
        }
      }
      uVar16 = uVar16 + 1;
    } while (iVar13 != iVar4);
  }
LAB_1411b9d71:
  puVar10 = local_58;
  if (local_58 == (undefined1 *)0x0) {
    puVar10 = local_68;
  }
  uVar16 = 0xffffffff >> (-(char)((int)(uint)local_50 % 0x20) & 0x1fU);
  if ((int)(uint)local_50 % 0x20 < 1) {
    uVar16 = 0xffffffff;
  }
  local_f8 = param_1;
  local_e8 = plVar1;
  if (0 < (int)(uint)local_50) {
    uVar18 = (local_50 & 0xffffffff) + 0x1f >> 5;
    uVar22 = 0xffffffff;
    if ((uint)local_50 < 0x21) {
      uVar22 = uVar16;
    }
    uVar24 = 0;
    uVar12 = 0;
    do {
      uVar19 = (ulonglong)(uVar22 & *(uint *)(puVar10 + uVar24 * 4)) -
               (ulonglong)((uVar22 & *(uint *)(puVar10 + uVar24 * 4)) >> 1 & 0x55555555);
      uVar19 = (uVar19 >> 2 & 0x3333333333333333) + (uVar19 & 0x3333333333333333);
      uVar12 = uVar12 + (byte)(((uVar19 >> 4) + uVar19 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >>
                              0x38);
      bVar26 = uVar18 - 2 == uVar24;
      uVar24 = uVar24 + 1;
      uVar22 = 0xffffffff;
      if (bVar26) {
        uVar22 = uVar16;
      }
    } while (uVar18 != uVar24);
    if (uVar12 != 0) {
      if (*(int *)(param_1 + 0xa4) < *(int *)(param_1 + 0x78)) {
        local_98 = 0;
        local_90 = 0;
        local_b8 = 0;
        uStack_b0 = 0;
        local_8c = 0xffffffff00000080;
        local_84 = 0;
        local_78 = 0;
        local_70 = 0;
        FUN_1414db28a(&local_b8,uVar12);
        puVar5 = local_f0;
        iVar4 = 1;
        if (3 < uVar12) {
          uVar16 = (uVar12 | 1) + 0xe;
          iVar4 = 0x1f;
          if (uVar16 != 0) {
            for (; uVar16 >> iVar4 == 0; iVar4 = iVar4 + -1) {
            }
          }
          iVar4 = 1 << ((byte)iVar4 & 0x1f);
        }
        if ((local_70 == 0) || (local_70 < iVar4)) {
          local_70 = iVar4;
          FUN_1403afb7e();
        }
        iVar4 = *(int *)(param_1 + 0x38);
        if (iVar4 == 0) {
          uVar24 = 1;
          uVar18 = 0;
          iVar13 = 0;
          iVar7 = 0;
        }
        else {
          puVar6 = *(uint **)(param_1 + 0x30);
          if (*(uint **)(param_1 + 0x30) == (uint *)0x0) {
            puVar6 = puVar5;
          }
          uVar16 = *puVar6;
          if (uVar16 == 0) {
            iVar7 = iVar4 + 0x1e;
            if (-1 < iVar4 + -1) {
              iVar7 = iVar4 + -1;
            }
            uVar18 = 0;
            uVar24 = (ulonglong)(uint)(iVar7 >> 5);
            if (iVar7 >> 5 < 1) {
              uVar24 = uVar18;
            }
            iVar13 = 0;
            do {
              if (uVar24 == uVar18) goto LAB_1411ba073;
              iVar13 = iVar13 + 0x20;
              uVar16 = puVar6[uVar18 + 1];
              uVar18 = uVar18 + 1;
            } while (uVar16 == 0);
          }
          else {
            uVar18 = 0;
            iVar13 = 0;
          }
          uVar24 = (ulonglong)(-uVar16 & uVar16);
          uVar19 = uVar24 * 2 + 1;
          lVar20 = 0x3f;
          if (uVar19 != 0) {
            for (; uVar19 >> lVar20 == 0; lVar20 = lVar20 + -1) {
            }
          }
          iVar7 = (iVar13 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
          if (iVar4 <= iVar7) {
            iVar7 = iVar4;
          }
        }
        if (iVar7 != iVar4) {
          uVar22 = 0xffffffff;
          uVar16 = 0;
          iVar15 = iVar4;
          do {
            puVar10 = local_58;
            if (local_58 == (undefined1 *)0x0) {
              puVar10 = local_68;
            }
            if ((*(uint *)(puVar10 + (ulonglong)(uVar16 >> 5) * 4) >> (uVar16 & 0x1f) & 1) != 0) {
              FUN_1449774fc(&local_b8,local_bc,
                            (longlong)iVar7 * 0x30 + *(longlong *)(param_1 + 0x10),0);
              iVar15 = *(int *)(param_1 + 0x38);
            }
            uVar22 = uVar22 & ~(uint)uVar24;
            puVar5 = *(uint **)(param_1 + 0x30);
            if (*(uint **)(param_1 + 0x30) == (uint *)0x0) {
              puVar5 = local_f0;
            }
            iVar7 = (int)uVar18;
            lVar20 = (longlong)iVar7;
            uVar12 = puVar5[lVar20] & uVar22;
            if (uVar12 == 0) {
              iVar8 = iVar15 + 0x1e;
              if (-1 < iVar15 + -1) {
                iVar8 = iVar15 + -1;
              }
              iVar8 = iVar8 >> 5;
              iVar13 = iVar13 + 0x20;
              iVar14 = iVar8;
              if (iVar8 < iVar7) {
                iVar14 = iVar7;
              }
              if (iVar7 < iVar8) {
                lVar11 = 0;
                do {
                  uVar12 = puVar5[lVar20 + lVar11 + 1];
                  if (uVar12 != 0) {
                    uVar18 = (ulonglong)(iVar7 + (int)lVar11 + 1);
                    uVar22 = 0xffffffff;
                    goto LAB_1411ba1d0;
                  }
                  iVar13 = iVar13 + 0x20;
                  lVar11 = lVar11 + 1;
                } while (iVar14 - lVar20 != lVar11);
                uVar22 = 0xffffffff;
                iVar7 = iVar14;
              }
              uVar18 = (ulonglong)(iVar7 + 1);
              param_1 = local_f8;
              iVar7 = iVar15;
            }
            else {
LAB_1411ba1d0:
              uVar24 = (ulonglong)(-uVar12 & uVar12);
              uVar19 = uVar24 * 2 + 1;
              lVar20 = 0x3f;
              if (uVar19 != 0) {
                for (; uVar19 >> lVar20 == 0; lVar20 = lVar20 + -1) {
                }
              }
              iVar7 = (iVar13 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
              if (iVar15 <= iVar7) {
                iVar7 = iVar15;
              }
            }
            uVar16 = uVar16 + 1;
          } while (iVar7 != iVar4);
        }
LAB_1411ba073:
        iVar4 = *(int *)(param_1 + 0x98);
        if (iVar4 == 0) {
          uVar24 = 1;
          uVar18 = 0;
          iVar7 = 0;
          iVar13 = 0;
        }
        else {
          puVar5 = *(uint **)(param_1 + 0x90);
          if (*(uint **)(param_1 + 0x90) == (uint *)0x0) {
            puVar5 = (uint *)(param_1 + 0x80);
          }
          uVar16 = *puVar5;
          if (uVar16 == 0) {
            iVar7 = iVar4 + 0x1e;
            if (-1 < iVar4 + -1) {
              iVar7 = iVar4 + -1;
            }
            uVar18 = 0;
            uVar24 = (ulonglong)(uint)(iVar7 >> 5);
            if (iVar7 >> 5 < 1) {
              uVar24 = uVar18;
            }
            iVar7 = 0;
            do {
              if (uVar24 == uVar18) goto LAB_1411ba55a;
              iVar7 = iVar7 + 0x20;
              uVar16 = puVar5[uVar18 + 1];
              uVar18 = uVar18 + 1;
            } while (uVar16 == 0);
          }
          else {
            uVar18 = 0;
            iVar7 = 0;
          }
          uVar24 = (ulonglong)(-uVar16 & uVar16);
          uVar19 = uVar24 * 2 + 1;
          lVar20 = 0x3f;
          if (uVar19 != 0) {
            for (; uVar19 >> lVar20 == 0; lVar20 = lVar20 + -1) {
            }
          }
          iVar13 = (iVar7 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
          if (iVar4 <= iVar13) {
            iVar13 = iVar4;
          }
        }
        if (iVar13 < iVar4) {
          local_d8 = (longlong *)(param_1 + 0x70);
          uVar16 = 0xffffffff;
          local_d0 = (uint *)(param_1 + 0x80);
          do {
            lVar20 = *local_d8;
            lVar11 = (longlong)iVar13 * 0x50;
            iVar4 = *(int *)(lVar20 + 0x38 + lVar11);
            iVar15 = iVar4 + -1;
            if (iVar4 == 0) {
              iVar15 = 0;
            }
            uVar22 = 0;
            if (0 < iVar15) {
              puVar17 = &DAT_149dfb77a;
              if (iVar4 != 0) {
                puVar17 = *(undefined2 **)(lVar20 + 0x30 + lVar11);
              }
              lVar21 = 0;
              uVar22 = 0;
              do {
                uVar12 = ((uint)(0x19 < (ushort)puVar17[lVar21] - 0x61) * 0x20 +
                         (uint)(ushort)puVar17[lVar21]) - 0x20;
                uVar22 = uVar22 >> 8 ^
                         *(uint *)(&DAT_14c75d150 + (ulonglong)((uVar22 ^ uVar12) & 0xff) * 4);
                uVar22 = uVar22 >> 8 ^
                         *(uint *)(&DAT_14c75d150 +
                                  (ulonglong)(uVar22 & 0xff ^ uVar12 >> 8 & 0xff) * 4);
                lVar21 = lVar21 + 1;
              } while (iVar15 != (int)lVar21);
            }
            uVar2 = *(undefined8 *)(lVar20 + lVar11 + 0x20);
            uVar3 = *(undefined8 *)(lVar20 + lVar11 + 0x28);
            uVar12 = (uint)((ulonglong)uVar3 >> 0x10);
            uVar23 = (uint)uVar3 & 0xffff;
            uVar9 = (uint)((ulonglong)uVar2 >> 0x10);
            uVar25 = (uint)uVar2 & 0xffff;
            uVar9 = ((uint)uVar2 << 0x10 | uVar25) + (int)((ulonglong)uVar2 >> 0x20) +
                    (uVar9 << 0x13 | uVar9 & 0xffff) + (uVar25 >> 4);
            uVar9 = (uVar9 >> 2) + 0x9e3779b9 +
                    ((uint)uVar3 << 0x10 | uVar23) + (int)((ulonglong)uVar3 >> 0x20) +
                    (uVar12 << 0x13 | uVar12 & 0xffff) + (uVar23 >> 4) + uVar9 * 0x40 ^ uVar9;
            uVar23 = uVar9 >> 0xd ^ -uVar9;
            uVar12 = uVar23 << 8 ^ (-0x61c88647 - uVar9) - uVar23;
            uVar25 = uVar12 >> 0xd ^ (uVar9 - uVar23) - uVar12;
            uVar23 = uVar25 >> 0xc ^ (uVar23 - uVar12) - uVar25;
            uVar9 = uVar23 << 0x10 ^ (uVar12 - uVar25) - uVar23;
            uVar12 = uVar9 >> 5 ^ (uVar25 - uVar23) - uVar9;
            uVar23 = uVar12 >> 3 ^ (uVar23 - uVar9) - uVar12;
            uVar9 = uVar23 << 10 ^ (uVar9 - uVar12) - uVar23;
            uVar12 = uVar22 >> 0xd ^ (uVar9 >> 0xf ^ uVar12 - (uVar23 + uVar9)) - uVar22;
            uVar9 = uVar12 << 8 ^ (-0x61c88647 - uVar22) - uVar12;
            uVar23 = uVar9 >> 0xd ^ (uVar22 - uVar12) - uVar9;
            uVar22 = uVar23 >> 0xc ^ (uVar12 - uVar9) - uVar23;
            uVar12 = uVar22 << 0x10 ^ (uVar9 - uVar23) - uVar22;
            uVar23 = uVar12 >> 5 ^ (uVar23 - uVar22) - uVar12;
            uVar9 = uVar23 >> 3 ^ (uVar22 - uVar12) - uVar23;
            uVar22 = uVar9 << 10 ^ (uVar12 - uVar23) - uVar9;
            local_e0 = uVar16;
            local_dc = iVar7;
            local_c8 = uVar18;
            iVar4 = FUN_1403af82c(&local_b8,uVar22 >> 0xf ^ uVar23 - (uVar9 + uVar22));
            if (iVar4 != -1) {
              FUN_147d61dd0(local_d8,iVar13);
            }
            uVar16 = local_e0 & ~(uint)uVar24;
            puVar5 = *(uint **)(local_f8 + 0x90);
            if (*(uint **)(local_f8 + 0x90) == (uint *)0x0) {
              puVar5 = local_d0;
            }
            iVar4 = *(int *)(local_f8 + 0x98);
            iVar13 = (int)local_c8;
            lVar20 = (longlong)iVar13;
            uVar22 = puVar5[lVar20] & uVar16;
            uVar18 = local_c8;
            iVar7 = local_dc;
            param_1 = local_f8;
            if (uVar22 == 0) {
              iVar15 = iVar4 + 0x1e;
              if (-1 < iVar4 + -1) {
                iVar15 = iVar4 + -1;
              }
              iVar15 = iVar15 >> 5;
              iVar8 = iVar15;
              if (iVar15 < iVar13) {
                iVar8 = iVar13;
              }
              if (iVar15 <= iVar13) break;
              lVar11 = 0;
              while( true ) {
                iVar7 = iVar7 + 0x20;
                uVar22 = puVar5[lVar20 + lVar11 + 1];
                if (uVar22 != 0) break;
                lVar11 = lVar11 + 1;
                if (iVar8 - lVar20 == lVar11) goto LAB_1411ba55a;
              }
              uVar18 = (ulonglong)(iVar13 + (int)lVar11 + 1);
              uVar16 = 0xffffffff;
            }
            uVar24 = (ulonglong)(-uVar22 & uVar22);
            uVar19 = uVar24 * 2 + 1;
            lVar20 = 0x3f;
            if (uVar19 != 0) {
              for (; uVar19 >> lVar20 == 0; lVar20 = lVar20 + -1) {
              }
            }
            iVar13 = (iVar7 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
          } while (iVar13 < iVar4);
        }
LAB_1411ba55a:
        local_70 = 0;
        if (local_78 != 0) {
          FUN_1400020a8();
        }
        FUN_144a1c8ac(&local_b8);
        iVar7 = *(int *)(param_1 + 0x38);
      }
      if (iVar7 == 0) {
        uVar24 = 1;
        uVar18 = 0;
        iVar13 = 0;
        iVar4 = 0;
      }
      else {
        puVar5 = *(uint **)(param_1 + 0x30);
        if (*(uint **)(param_1 + 0x30) == (uint *)0x0) {
          puVar5 = local_f0;
        }
        uVar16 = *puVar5;
        if (uVar16 == 0) {
          iVar4 = iVar7 + 0x1e;
          if (-1 < iVar7 + -1) {
            iVar4 = iVar7 + -1;
          }
          uVar18 = 0;
          uVar24 = (ulonglong)(uint)(iVar4 >> 5);
          if (iVar4 >> 5 < 1) {
            uVar24 = uVar18;
          }
          iVar13 = 0;
          do {
            if (uVar24 == uVar18) goto LAB_1411ba74d;
            iVar13 = iVar13 + 0x20;
            uVar16 = puVar5[uVar18 + 1];
            uVar18 = uVar18 + 1;
          } while (uVar16 == 0);
        }
        else {
          uVar18 = 0;
          iVar13 = 0;
        }
        uVar24 = (ulonglong)(-uVar16 & uVar16);
        uVar19 = uVar24 * 2 + 1;
        lVar20 = 0x3f;
        if (uVar19 != 0) {
          for (; uVar19 >> lVar20 == 0; lVar20 = lVar20 + -1) {
          }
        }
        iVar4 = (iVar13 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
        if (iVar7 <= iVar4) {
          iVar4 = iVar7;
        }
      }
      if (iVar4 < iVar7) {
        uVar16 = 0xffffffff;
        uVar22 = 0;
        do {
          plVar1 = local_e8;
          puVar10 = local_58;
          if (local_58 == (undefined1 *)0x0) {
            puVar10 = local_68;
          }
          if ((*(uint *)(puVar10 + (ulonglong)(uVar22 >> 5) * 4) >> (uVar22 & 0x1f) & 1) != 0) {
            FUN_140f77e50(*(undefined8 *)(*local_e8 + 0x20 + (longlong)iVar4 * 0x30));
            param_1 = local_f8;
            lVar20 = *(longlong *)(*plVar1 + 0x20 + (longlong)iVar4 * 0x30);
            if (lVar20 != 0) {
              FUN_144936a5c(*(undefined8 *)(lVar20 + 0x18),*(undefined4 *)(lVar20 + 0x20));
              if (*(longlong *)(lVar20 + 0x18) != 0) {
                FUN_1400020a8();
              }
              if (*(longlong *)(lVar20 + 8) != 0) {
                FUN_1400020a8();
              }
              FUN_1400020a8(lVar20);
            }
            FUN_140509b6c(local_e8,iVar4);
            iVar7 = *(int *)(param_1 + 0x38);
          }
          uVar16 = uVar16 & ~(uint)uVar24;
          puVar5 = *(uint **)(param_1 + 0x30);
          if (*(uint **)(param_1 + 0x30) == (uint *)0x0) {
            puVar5 = local_f0;
          }
          iVar4 = (int)uVar18;
          lVar20 = (longlong)iVar4;
          uVar12 = puVar5[lVar20] & uVar16;
          if (uVar12 == 0) {
            iVar15 = iVar7 + 0x1e;
            if (-1 < iVar7 + -1) {
              iVar15 = iVar7 + -1;
            }
            iVar15 = iVar15 >> 5;
            iVar8 = iVar15;
            if (iVar15 < iVar4) {
              iVar8 = iVar4;
            }
            if (iVar15 <= iVar4) break;
            lVar11 = 0;
            while( true ) {
              iVar13 = iVar13 + 0x20;
              uVar12 = puVar5[lVar20 + lVar11 + 1];
              if (uVar12 != 0) break;
              lVar11 = lVar11 + 1;
              if (iVar8 - lVar20 == lVar11) goto LAB_1411ba74d;
            }
            uVar18 = (ulonglong)(iVar4 + (int)lVar11 + 1);
            uVar16 = 0xffffffff;
          }
          uVar22 = uVar22 + 1;
          uVar24 = (ulonglong)(-uVar12 & uVar12);
          uVar19 = uVar24 * 2 + 1;
          lVar20 = 0x3f;
          if (uVar19 != 0) {
            for (; uVar19 >> lVar20 == 0; lVar20 = lVar20 + -1) {
            }
          }
          iVar4 = (iVar13 - ((uint)lVar20 ^ 0x3f)) + 0x3e;
        } while (iVar4 < iVar7);
      }
LAB_1411ba74d:
      iVar4 = *(int *)(local_f8 + 0x6c);
      FUN_140f7807b(*(undefined8 *)(local_f8 + 0x60),*(undefined4 *)(local_f8 + 0x68));
      *(undefined4 *)(local_f8 + 0x68) = 0;
      if ((iVar4 < 0) && (*(int *)(local_f8 + 0x6c) != 0)) {
        FUN_14372041c(local_f8 + 0x60);
      }
    }
  }
  if (local_58 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1411ba7f8 FUN_1411ba7f8 body=60 status=ok
// SIG undefined FUN_1411ba7f8(void)

void FUN_1411ba7f8(longlong param_1,longlong param_2)

{
  char cVar1;
  
  cVar1 = FUN_1411ba878(param_1 + 0xe0,*(undefined8 *)(param_2 + 0x48));
  if (cVar1 != '\0') {
    FUN_1411ba834(param_1 + 0xe0,param_2);
    return;
  }
  return;
}



// FUNCTION 1411ba834 FUN_1411ba834 body=68 status=ok
// SIG undefined FUN_1411ba834(void)

void FUN_1411ba834(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  FUN_14019c9f2();
  if ((longlong)*(int *)(param_1 + 0x20) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x18);
    lVar1 = (longlong)*(int *)(param_1 + 0x20) * 0x28;
    do {
      FUN_14019c9f2(lVar2,param_2);
      lVar2 = lVar2 + 0x28;
      lVar1 = lVar1 + -0x28;
    } while (lVar1 != 0);
  }
  return;
}



// FUNCTION 1411ba878 FUN_1411ba878 body=610 status=ok
// SIG undefined FUN_1411ba878(void)

undefined8 FUN_1411ba878(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  ulonglong uVar13;
  longlong lVar14;
  uint uVar15;
  int iVar16;
  
  iVar10 = *(int *)(param_1 + 0x20);
  if (1 < (longlong)iVar10) {
    plVar2 = *(longlong **)(param_1 + 0x18);
    lVar3 = *plVar2;
    if (((lVar3 != 0) && (lVar4 = plVar2[(longlong)iVar10 * 5 + -5], lVar4 != 0)) &&
       (*(int *)(param_2 + 0x98) != *(int *)(param_2 + 0xc4))) {
      uVar6 = (uint)((ulonglong)lVar3 >> 0x10);
      uVar12 = (uint)lVar3 & 0xffff;
      lVar14 = param_2 + 200;
      if (*(longlong *)(param_2 + 0xd0) != 0) {
        lVar14 = *(longlong *)(param_2 + 0xd0);
      }
      uVar15 = *(int *)(param_2 + 0xd8) - 1;
      iVar9 = *(int *)(lVar14 + (ulonglong)
                                ((int)((ulonglong)lVar3 >> 0x20) + ((uint)lVar3 << 0x10 | uVar12) +
                                 (uVar6 << 0x13 | uVar6 & 0xffff) + (uVar12 >> 4) & uVar15) * 4);
      iVar16 = -1;
      if (iVar9 != -1) {
        do {
          plVar1 = (longlong *)(*(longlong *)(param_2 + 0x90) + (longlong)iVar9 * 0x14);
          if (*plVar1 == lVar3) {
            if ((plVar1 != (longlong *)0x0) && (plVar1 + 1 != (longlong *)0x0)) {
              iVar16 = (int)plVar1[1];
            }
            break;
          }
          iVar9 = *(int *)((longlong)plVar1 + 0xc);
        } while (iVar9 != -1);
      }
      uVar6 = (uint)((ulonglong)lVar4 >> 0x10);
      uVar12 = (uint)lVar4 & 0xffff;
      iVar9 = *(int *)(lVar14 + (ulonglong)
                                ((int)((ulonglong)lVar4 >> 0x20) + ((uint)lVar4 << 0x10 | uVar12) +
                                 (uVar6 << 0x13 | uVar6 & 0xffff) + (uVar12 >> 4) & uVar15) * 4);
      if (iVar9 != -1) {
        do {
          plVar1 = (longlong *)(*(longlong *)(param_2 + 0x90) + (longlong)iVar9 * 0x14);
          if (*plVar1 == lVar4) {
            if (plVar1 == (longlong *)0x0) {
              return 0;
            }
            if (plVar1 + 1 == (longlong *)0x0) {
              return 0;
            }
            uVar8 = 0;
            if (iVar16 == -1) {
              return 0;
            }
            iVar9 = (int)plVar1[1];
            if (iVar9 == -1) {
              return 0;
            }
            if (iVar10 != 2) {
              uVar13 = (ulonglong)(iVar10 - 2);
              do {
                lVar3 = plVar2[uVar13 * 5];
                iVar10 = -1;
                if (lVar3 != 0) {
                  uVar6 = (uint)((ulonglong)lVar3 >> 0x10);
                  uVar12 = (uint)lVar3 & 0xffff;
                  iVar7 = *(int *)(lVar14 + (ulonglong)
                                            ((int)((ulonglong)lVar3 >> 0x20) +
                                             ((uint)lVar3 << 0x10 | uVar12) +
                                             (uVar6 << 0x13 | uVar6 & 0xffff) + (uVar12 >> 4) &
                                            uVar15) * 4);
                  while (iVar7 != -1) {
                    plVar1 = (longlong *)(*(longlong *)(param_2 + 0x90) + (longlong)iVar7 * 0x14);
                    if (*plVar1 == lVar3) {
                      if ((plVar1 != (longlong *)0x0) && (plVar1 + 1 != (longlong *)0x0)) {
                        iVar10 = (int)plVar1[1];
                      }
                      break;
                    }
                    iVar7 = *(int *)((longlong)plVar1 + 0xc);
                  }
                }
                iVar11 = 0;
                iVar7 = iVar10;
                if (iVar10 < iVar16) {
                  return 0;
                }
                while (iVar7 != iVar16) {
                  iVar7 = *(int *)(*(longlong *)(param_2 + 0x20) + 8 + (longlong)iVar7 * 0xc);
                  iVar11 = iVar11 + -1;
                  if (iVar7 == -1) {
                    return 0;
                  }
                }
                if (iVar9 < iVar10) {
                  return 0;
                }
                if (iVar11 == 0) {
                  return 0;
                }
                iVar7 = 0;
                while (iVar9 != iVar10) {
                  iVar9 = *(int *)(*(longlong *)(param_2 + 0x20) + 8 + (longlong)iVar9 * 0xc);
                  iVar7 = iVar7 + -1;
                  if (iVar9 == -1) {
                    return 0;
                  }
                }
                if (iVar7 == 0) {
                  return 0;
                }
                uVar8 = uVar13 - 1;
                bVar5 = 1 < (longlong)uVar13;
                uVar13 = uVar8;
                iVar9 = iVar10;
              } while (bVar5);
            }
            return CONCAT71((int7)(uVar8 >> 8),1);
          }
          iVar9 = *(int *)((longlong)plVar1 + 0xc);
        } while (iVar9 != -1);
      }
    }
  }
  return 0;
}



// FUNCTION 1411baada FUN_1411baada body=200 status=ok
// SIG undefined FUN_1411baada(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1411baada(void)

{
  if ((DAT_14ca3fa9f & 2) != 0) {
    return;
  }
  DAT_14ca3fa9f = DAT_14ca3fa9f | 2;
  _DAT_14ca3fa40 = L"FMaterialCHS";
  _DAT_14ca3fa58 = FUN_146826540;
  _DAT_14ca3fa60 = FUN_146825d77;
  _DAT_14ca3fa68 = FUN_146825fd6;
  _DAT_14ca3fa70 = FUN_1407e02ea;
  _DAT_14ca3fa78 = FUN_146826273;
  _DAT_14ca3fa50 = FUN_1472c2e7e;
  _DAT_14ca3fa90 = 0xffffffff00000110;
  _DAT_14ca3fa98 = 8;
  DAT_14ca3fa9c = 0;
  _DAT_14ca3fa80 = &LAB_1472c2eb4;
  FUN_14583122e();
  FUN_1407e00cc(&DAT_14ca3fa38);
  return;
}



// FUNCTION 1411baba2 FUN_1411baba2 body=2032 status=ok
// SIG undefined FUN_1411baba2(void)

undefined8
FUN_1411baba2(longlong *param_1,longlong *param_2,undefined8 *param_3,longlong *param_4,
             undefined8 *param_5,char *param_6,undefined8 *param_7,uint *param_8,int *param_9)

{
  longlong lVar1;
  void *pvVar2;
  uint uVar3;
  undefined1 *puVar4;
  char cVar5;
  undefined8 uVar6;
  undefined2 *puVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  ulonglong uVar12;
  int iVar13;
  undefined1 auStack_378 [32];
  uint *local_358;
  int *local_350;
  undefined8 *local_340;
  undefined1 *local_338;
  uint local_330;
  undefined4 local_328;
  undefined4 uStack_324;
  int iStack_320;
  undefined4 uStack_31c;
  undefined4 local_318;
  undefined4 uStack_314;
  int iStack_310;
  undefined4 uStack_30c;
  undefined1 *local_308;
  undefined4 local_300;
  undefined4 local_2f8;
  undefined4 uStack_2f4;
  int iStack_2f0;
  undefined4 uStack_2ec;
  undefined1 *local_2e8;
  undefined4 local_2e0;
  undefined8 local_2d8;
  int local_2d0;
  undefined8 local_2c8;
  undefined4 local_2c0;
  undefined8 local_2b8;
  int iStack_2b0;
  undefined4 uStack_2ac;
  undefined8 local_2a8;
  int local_2a0;
  longlong local_298;
  undefined4 local_290;
  undefined4 local_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  uint local_26c;
  undefined1 *local_268;
  undefined1 *local_260;
  ulonglong *local_258;
  char local_250;
  undefined1 local_248 [512];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_378;
  local_288 = (undefined4)*param_1;
  uStack_284 = *(undefined4 *)((longlong)param_1 + 4);
  uStack_280 = (undefined4)param_1[1];
  uStack_27c = *(undefined4 *)((longlong)param_1 + 0xc);
  local_350 = param_9;
  local_358 = &local_26c;
  local_340 = param_3;
  cVar5 = FUN_1411bb394();
  if (cVar5 == '\0') {
    if (((param_9 != (int *)0x0) && (*param_9 == 2)) && (0 < (longlong)(int)param_1[1])) {
      lVar11 = *param_1;
      uVar12 = 0;
      do {
        if (*(short *)(lVar11 + uVar12) == 0x20) {
          if ((int)(~uVar12 >> 1) != 0) {
            *param_9 = 4;
          }
          break;
        }
        lVar1 = lVar11 + uVar12;
        uVar12 = uVar12 + 2;
      } while (lVar1 + 2U < (ulonglong)(lVar11 + (longlong)(int)param_1[1] * 2));
    }
    param_2[1] = *param_2;
    local_340[1] = *local_340;
    param_4[1] = *param_4;
    param_5[1] = *param_5;
    *param_6 = '\0';
    param_7[1] = *param_7;
    if (param_8 != (uint *)0x0) {
      *param_8 = 0;
    }
  }
  else {
    param_5[1] = *param_5;
    *param_6 = '\0';
    param_7[1] = *param_7;
    if (local_26c == 3) {
      local_268 = local_248;
      local_250 = '\0';
      local_258 = &local_48;
      local_260 = local_268;
      uVar6 = FUN_1449668a2(&local_268,*param_2,(ulonglong)(param_2[1] - *param_2) >> 1);
      FUN_1449668a2(uVar6,*param_4,(ulonglong)(param_4[1] - *param_4) >> 1);
      local_2a8 = 0;
      local_2a0 = 0;
      local_2b8 = 0;
      iStack_2b0 = 0;
      local_2c8 = 0;
      local_2c0 = 0;
      local_2d8 = 0;
      local_2d0 = 0;
      local_2e8 = local_268;
      local_2e0 = (undefined4)((ulonglong)((longlong)local_260 - (longlong)local_268) >> 1);
      local_350 = (int *)CONCAT71(local_350._1_7_,1);
      local_358 = (uint *)&local_2d8;
      FUN_145831310(&local_2e8,&local_2a8);
      if (local_2a0 < 1) {
LAB_1411baf52:
        local_328 = (undefined4)local_2b8;
        uStack_324 = local_2b8._4_4_;
        iStack_320 = iStack_2b0;
        uStack_31c = uStack_2ac;
        cVar5 = FUN_1449072f6(&local_328,param_9);
        if (cVar5 != '\0') {
          FUN_1449668a2(param_5,local_2c8,local_2c0);
          iVar10 = local_2d0;
          if (local_2d0 != 0) {
            puVar7 = (undefined2 *)param_5[1];
            if ((undefined2 *)param_5[2] <= puVar7 + 1) {
              FUN_140213274(param_5,1);
              puVar7 = (undefined2 *)param_5[1];
            }
            *puVar7 = 0x3a;
            param_5[1] = puVar7 + 1;
            FUN_1449668a2(param_5,local_2d8,iVar10);
          }
          param_4[1] = param_4[1] +
                       (longlong)
                       ((int)((ulonglong)(param_4[1] - *param_4) >> 1) +
                       ((int)((ulonglong)(param_2[1] - *param_2) >> 1) - iStack_2b0)) * -2;
LAB_1411bada4:
          if (local_250 == '\x01') {
            FUN_1400020a8(local_268);
          }
          goto LAB_1411badb2;
        }
        param_2[1] = *param_2;
        local_340[1] = *local_340;
        param_4[1] = *param_4;
        param_5[1] = *param_5;
        *param_6 = '\0';
        param_7[1] = *param_7;
        if (param_8 != (uint *)0x0) {
          *param_8 = 0;
        }
      }
      else {
        local_2f8 = (undefined4)local_2b8;
        uStack_2f4 = local_2b8._4_4_;
        iStack_2f0 = iStack_2b0;
        uStack_2ec = uStack_2ac;
        cVar5 = FUN_1449072f6(&local_2f8,0);
        if (cVar5 == '\0') {
          local_308 = local_268;
          local_300 = (undefined4)((ulonglong)((longlong)local_260 - (longlong)local_268) >> 1);
          local_350 = (int *)((ulonglong)local_350 & 0xffffffffffffff00);
          local_358 = (uint *)&local_2d8;
          FUN_145831310(&local_308,&local_2a8,&local_2b8,&local_2c8);
          local_318 = (undefined4)local_2b8;
          uStack_314 = local_2b8._4_4_;
          iStack_310 = iStack_2b0;
          uStack_30c = uStack_2ac;
          cVar5 = FUN_1449072f6(&local_318,0);
          if (cVar5 != '\0') goto LAB_1411baf52;
        }
        param_2[1] = *param_2;
        local_340[1] = *local_340;
        param_4[1] = *param_4;
        param_5[1] = *param_5;
        *param_6 = '\0';
        param_7[1] = *param_7;
joined_r0x0001411bae56:
        if (param_8 != (uint *)0x0) {
          *param_8 = 0;
        }
        if (param_9 != (int *)0x0) {
          *param_9 = 4;
        }
      }
    }
    else {
      if (local_26c == 2) {
        local_298 = *param_4;
        local_290 = (undefined4)((ulonglong)(param_4[1] - local_298) >> 1);
        cVar5 = FUN_146874e64(&local_298,&local_268);
        *param_6 = cVar5;
        if (cVar5 == '\x05') {
          iVar8 = (int)((ulonglong)(param_4[1] - *param_4) >> 1);
          iVar10 = iVar8 - (int)local_268;
          if (iVar8 <= iVar8 - (int)local_268) {
            iVar10 = iVar8;
          }
          iVar13 = 0;
          if (0 < iVar10) {
            iVar13 = iVar10;
          }
          FUN_1449668a2(param_7,(*param_4 + (longlong)iVar8 * 2) - (ulonglong)(uint)(iVar13 * 2));
        }
        param_4[1] = param_4[1] +
                     ((longlong)(int)((ulonglong)(param_4[1] - *param_4) >> 1) -
                     (longlong)(int)local_268) * -2;
LAB_1411badb2:
        if (param_8 != (uint *)0x0) {
          *param_8 = local_26c;
        }
        uVar6 = 1;
        if (param_9 != (int *)0x0) {
          *param_9 = 0;
        }
        goto LAB_1411badc9;
      }
      local_268 = local_248;
      local_250 = '\0';
      local_258 = &local_48;
      pvVar2 = (void *)*param_2;
      uVar12 = param_2[1] - (longlong)pvVar2;
      lVar11 = (longlong)(int)(uVar12 >> 1);
      local_260 = local_268;
      if (0xff < lVar11) {
        FUN_140213274(&local_268,lVar11);
      }
      puVar4 = local_260;
      if ((uVar12 & 0x1fffffffe) != 0) {
        memcpy(local_260,pvVar2,lVar11 * 2);
        local_260 = puVar4 + lVar11 * 2;
      }
      pvVar2 = (void *)*param_4;
      uVar12 = param_4[1] - (longlong)pvVar2;
      lVar11 = (longlong)(int)(uVar12 >> 1);
      if (local_258 <= local_260 + lVar11 * 2) {
        FUN_140213274(&local_268,lVar11);
      }
      puVar4 = local_260;
      if ((uVar12 & 0x1fffffffe) != 0) {
        memcpy(local_260,pvVar2,lVar11 * 2);
        local_260 = puVar4 + lVar11 * 2;
      }
      uVar9 = (uint)((ulonglong)((longlong)local_260 - (longlong)local_268) >> 1);
      if (0 < (int)uVar9) {
        if ((*(short *)(local_268 +
                       (((longlong)local_260 - (longlong)local_268) * 0x80000000 + -0x100000000 >>
                       0x20) * 2) == 0x2f) ||
           (*(short *)(local_268 +
                      (((longlong)local_260 - (longlong)local_268) * 0x80000000 + -0x100000000 >>
                      0x20) * 2) == 0x5c)) {
          uVar9 = uVar9 - 1;
          uVar3 = uVar9;
          if (uVar9 == 0) {
            uVar9 = 0;
            goto LAB_1411bad81;
          }
        }
        else {
          uVar3 = uVar9 & 0x7fffffff;
        }
        uVar12 = 0;
        do {
          if (*(short *)(local_268 + uVar12) == 0x20) {
            if ((~uVar12 & 0x1fffffffe) != 0) {
              param_2[1] = *param_2;
              local_340[1] = *local_340;
              param_4[1] = *param_4;
              param_5[1] = *param_5;
              *param_6 = '\0';
              param_7[1] = *param_7;
              goto joined_r0x0001411bae56;
            }
            break;
          }
          lVar11 = uVar12 + 2;
          uVar12 = uVar12 + 2;
        } while (local_268 + lVar11 < local_268 + (ulonglong)uVar3 * 2);
      }
LAB_1411bad81:
      local_338 = local_268;
      local_330 = uVar9;
      cVar5 = FUN_1449072f6(&local_338,param_9);
      if (cVar5 != '\0') goto LAB_1411bada4;
      param_2[1] = *param_2;
      local_340[1] = *local_340;
      param_4[1] = *param_4;
      param_5[1] = *param_5;
      *param_6 = '\0';
      param_7[1] = *param_7;
      if (param_8 != (uint *)0x0) {
        *param_8 = 0;
      }
    }
    if (local_250 == '\x01') {
      FUN_1400020a8(local_268);
    }
  }
  uVar6 = 0;
LAB_1411badc9:
  if ((local_48 ^ (ulonglong)auStack_378) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411bb394 FUN_1411bb394 body=1380 status=ok
// SIG undefined FUN_1411bb394(void)

ulonglong FUN_1411bb394(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,
                       undefined8 *param_4,undefined4 *param_5,uint *param_6)

{
  undefined8 *puVar1;
  void *pvVar2;
  void *pvVar3;
  char cVar4;
  byte bVar5;
  undefined4 uVar6;
  longlong *plVar7;
  int iVar8;
  short *psVar9;
  ulonglong uVar10;
  uint uVar11;
  longlong lVar12;
  undefined1 auStack_338 [32];
  undefined4 local_318;
  undefined4 uStack_314;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  undefined8 local_308;
  int local_300;
  undefined1 *local_2f8;
  undefined4 local_2f0;
  undefined8 local_2e8;
  int local_2e0;
  undefined1 *local_2d8;
  undefined4 local_2d0;
  undefined8 local_2c8;
  int local_2c0;
  undefined4 local_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined8 local_2a8;
  int local_2a0;
  short *local_298;
  int local_290;
  undefined4 local_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined1 *local_278;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined1 *local_268;
  undefined1 *local_260;
  ulonglong *local_258;
  char local_250;
  undefined1 local_248 [512];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_338;
  param_2[1] = *param_2;
  param_3[1] = *param_3;
  param_4[1] = *param_4;
  if (*(int *)(param_1 + 1) == 0) {
    if (param_5 != (undefined4 *)0x0) {
      *param_5 = 0;
    }
    if (param_6 != (uint *)0x0) {
      *param_6 = 1;
    }
    uVar10 = 0;
    goto LAB_1411bb633;
  }
  local_268 = local_248;
  local_250 = '\0';
  local_258 = &local_48;
  local_288 = *(undefined4 *)param_1;
  uStack_284 = *(undefined4 *)((longlong)param_1 + 4);
  uStack_280 = *(undefined4 *)(param_1 + 1);
  uStack_27c = *(undefined4 *)((longlong)param_1 + 0xc);
  local_260 = local_268;
  FUN_1411bb8fa(&local_288,&local_268);
  local_298 = (short *)0x0;
  local_290 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c948490) && (FUN_144b3d300(&DAT_14c948490), DAT_14c948490 == -1)) {
    FUN_1400684da(&DAT_14c9482f8);
    atexit(FUN_1427b7fa2);
    _Init_thread_footer(&DAT_14c948490);
  }
  AcquireSRWLockShared((PSRWLOCK)&DAT_14c9482f8);
  local_278 = (undefined1 *)*param_1;
  uStack_270 = *(undefined4 *)(param_1 + 1);
  uStack_26c = *(undefined4 *)((longlong)param_1 + 0xc);
  plVar7 = (longlong *)FUN_14022f68a(&DAT_14c948430,&local_278,0);
  if (plVar7 == (longlong *)0x0) {
    local_278 = local_268;
    uStack_270 = (undefined4)((ulonglong)((longlong)local_260 - (longlong)local_268) >> 1);
    plVar7 = (longlong *)FUN_14022f68a(&DAT_14c948458,&local_278,0);
    if (plVar7 != (longlong *)0x0) {
      puVar1 = (undefined8 *)*plVar7;
      local_2c8 = puVar1[4];
      local_2c0 = *(int *)(puVar1 + 5) + -1;
      if (*(int *)(puVar1 + 5) == 0) {
        local_2c0 = 0;
      }
      local_2d8 = local_268;
      local_2d0 = (undefined4)((ulonglong)((longlong)local_260 - (longlong)local_268) >> 1);
      cVar4 = FUN_14022fd12(&local_2d8,&local_2c8,&local_298);
      if (cVar4 == '\0') {
        local_2e8 = puVar1[2];
        local_2e0 = *(int *)(puVar1 + 3) + -1;
        if (*(int *)(puVar1 + 3) == 0) {
          local_2e0 = 0;
        }
        local_2f8 = local_268;
        local_2f0 = (undefined4)((ulonglong)((longlong)local_260 - (longlong)local_268) >> 1);
        cVar4 = FUN_14022fd12(&local_2f8,&local_2e8,&local_298);
        if (cVar4 == '\0') {
          if (param_5 != (undefined4 *)0x0) {
            *param_5 = 0;
          }
          uVar11 = 2;
          uVar10 = 0;
          goto LAB_1411bb60f;
        }
      }
      iVar8 = *(int *)(puVar1 + 1) + -1;
      if (*(int *)(puVar1 + 1) == 0) {
        iVar8 = 0;
      }
      FUN_1449668a2(param_2,*puVar1,iVar8);
      iVar8 = *(int *)(puVar1 + 3) + -1;
      if (*(int *)(puVar1 + 3) == 0) {
        iVar8 = 0;
      }
      FUN_1449668a2(param_3,puVar1[2],iVar8);
      FUN_1449668a2(param_4,local_298,local_290);
      if (param_5 != (undefined4 *)0x0) {
        *param_5 = 2;
      }
      goto LAB_1411bb60c;
    }
    if (param_5 != (undefined4 *)0x0) {
      *param_5 = 0;
    }
    uVar10 = 0;
    if (param_6 != (uint *)0x0) {
      local_308 = DAT_14c948340;
      local_300 = DAT_14c948348 + -1;
      if (DAT_14c948348 == 0) {
        local_300 = 0;
      }
      local_318 = *(undefined4 *)param_1;
      uStack_314 = *(undefined4 *)((longlong)param_1 + 4);
      uStack_310 = *(undefined4 *)(param_1 + 1);
      uStack_30c = *(undefined4 *)((longlong)param_1 + 0xc);
      bVar5 = FUN_14022fd12(&local_318,&local_308,&local_298);
      uVar11 = bVar5 | 2;
      goto LAB_1411bb614;
    }
  }
  else {
    puVar1 = (undefined8 *)*plVar7;
    local_2a8 = *puVar1;
    local_2a0 = *(int *)(puVar1 + 1) + -1;
    if (*(int *)(puVar1 + 1) == 0) {
      local_2a0 = 0;
    }
    local_2b8 = *(undefined4 *)param_1;
    uStack_2b4 = *(undefined4 *)((longlong)param_1 + 4);
    uStack_2b0 = *(undefined4 *)(param_1 + 1);
    uStack_2ac = *(undefined4 *)((longlong)param_1 + 0xc);
    cVar4 = FUN_14022fd12(&local_2b8,&local_2a8,&local_298);
    if (cVar4 == '\0') {
      if (param_5 != (undefined4 *)0x0) {
        *param_5 = 0;
      }
      uVar11 = 2;
      uVar10 = 0;
    }
    else {
      pvVar2 = (void *)*puVar1;
      uVar11 = *(uint *)(puVar1 + 1);
      iVar8 = uVar11 - 1;
      if (uVar11 == 0) {
        iVar8 = 0;
      }
      lVar12 = (longlong)iVar8;
      if ((ulonglong)param_2[2] <= (ulonglong)(param_2[1] + lVar12 * 2)) {
        FUN_140213274(param_2,lVar12);
      }
      if (1 < uVar11) {
        pvVar3 = (void *)param_2[1];
        memcpy(pvVar3,pvVar2,lVar12 * 2);
        param_2[1] = (void *)(lVar12 * 2 + (longlong)pvVar3);
      }
      pvVar2 = (void *)puVar1[2];
      uVar11 = *(uint *)(puVar1 + 3);
      iVar8 = uVar11 - 1;
      if (uVar11 == 0) {
        iVar8 = 0;
      }
      lVar12 = (longlong)iVar8;
      if ((ulonglong)param_3[2] <= (ulonglong)(param_3[1] + lVar12 * 2)) {
        FUN_140213274(param_3,lVar12);
      }
      if (1 < uVar11) {
        pvVar3 = (void *)param_3[1];
        memcpy(pvVar3,pvVar2,lVar12 * 2);
        param_3[1] = (void *)((longlong)pvVar3 + lVar12 * 2);
      }
      iVar8 = local_290;
      psVar9 = local_298;
      lVar12 = (longlong)local_290;
      if ((ulonglong)param_4[2] <= (ulonglong)(param_4[1] + lVar12 * 2)) {
        FUN_140213274(param_4,lVar12);
      }
      if (iVar8 != 0) {
        pvVar2 = (void *)param_4[1];
        memcpy(pvVar2,psVar9,lVar12 * 2);
        param_4[1] = (void *)((longlong)pvVar2 + lVar12 * 2);
      }
      if (param_5 != (undefined4 *)0x0) {
        if ((longlong)local_290 != 0) {
          lVar12 = (longlong)local_290 * 2;
          psVar9 = local_298;
          do {
            if (*psVar9 == 0x2e) {
              uVar6 = 3;
              if (psVar9 != (short *)0x0) goto LAB_1411bb605;
              break;
            }
            psVar9 = psVar9 + 1;
            lVar12 = lVar12 + -2;
          } while (lVar12 != 0);
        }
        uVar6 = 1;
LAB_1411bb605:
        *param_5 = uVar6;
      }
LAB_1411bb60c:
      uVar11 = 0;
      uVar10 = CONCAT71((int7)((ulonglong)param_4 >> 8),1);
    }
LAB_1411bb60f:
    if (param_6 != (uint *)0x0) {
LAB_1411bb614:
      *param_6 = uVar11;
    }
  }
  ReleaseSRWLockShared((PSRWLOCK)&DAT_14c9482f8);
  if (local_250 == '\x01') {
    FUN_1400020a8(local_268);
  }
LAB_1411bb633:
  if ((local_48 ^ (ulonglong)auStack_338) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar10 & 0xffffffff;
}



// FUNCTION 1411bb8fa FUN_1411bb8fa body=108 status=ok
// SIG undefined FUN_1411bb8fa(void)

void FUN_1411bb8fa(undefined4 *param_1,undefined8 param_2)

{
  size_t sVar1;
  undefined1 auStack_58 [32];
  wchar_t *local_38;
  undefined4 local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = *param_1;
  uStack_24 = param_1[1];
  uStack_20 = param_1[2];
  uStack_1c = param_1[3];
  local_38 = (wchar_t *)FUN_1401aee94();
  if (local_38 == (wchar_t *)0x0) {
    local_30 = 0;
  }
  else {
    sVar1 = wcslen(local_38);
    local_30 = (int)sVar1;
  }
  FUN_1411bb968(&local_38,&local_28,param_2);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411bb968 FUN_1411bb968 body=467 status=ok
// SIG undefined FUN_1411bb968(void)

void FUN_1411bb968(undefined8 *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  void *pvVar2;
  void *_Dst;
  char cVar3;
  undefined2 *_Dst_00;
  longlong lVar4;
  undefined1 auStack_2a8 [32];
  undefined4 local_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined4 local_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined1 *local_258;
  undefined1 *local_250;
  ulonglong *local_248;
  char local_240;
  undefined1 local_238 [512];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_2a8;
  _Dst_00 = (undefined2 *)param_3[1];
  if (((longlong)_Dst_00 - *param_3 & 0x1fffffffeU) != 0) {
    local_258 = local_238;
    local_240 = '\0';
    local_248 = &local_38;
    local_268 = *param_2;
    uStack_260 = param_2[1];
    local_278 = *(undefined4 *)param_1;
    uStack_274 = *(undefined4 *)((longlong)param_1 + 4);
    uStack_270 = *(undefined4 *)(param_1 + 1);
    uStack_26c = *(undefined4 *)((longlong)param_1 + 0xc);
    local_250 = local_258;
    FUN_1411bb968(&local_278,&local_268,&local_258);
    FUN_1449668a2(param_3,local_258,(ulonglong)((longlong)local_250 - (longlong)local_258) >> 1);
    if (local_240 == '\x01') {
      FUN_1400020a8(local_258);
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_2a8);
  }
  local_288 = *(undefined4 *)param_2;
  uStack_284 = *(undefined4 *)((longlong)param_2 + 4);
  uStack_280 = *(undefined4 *)(param_2 + 1);
  uStack_27c = *(undefined4 *)((longlong)param_2 + 0xc);
  cVar3 = FUN_1404d40a0();
  if (cVar3 != '\0') {
    pvVar2 = (void *)*param_1;
    iVar1 = *(int *)(param_1 + 1);
    lVar4 = (longlong)iVar1;
    if ((undefined2 *)param_3[2] <= _Dst_00 + lVar4) {
      FUN_140213274(param_3,lVar4);
      _Dst_00 = (undefined2 *)param_3[1];
    }
    if (iVar1 != 0) {
      memcpy(_Dst_00,pvVar2,lVar4 * 2);
      _Dst_00 = _Dst_00 + lVar4;
      param_3[1] = (longlong)_Dst_00;
    }
  }
  if (((((longlong)_Dst_00 - *param_3 & 0x1fffffffeU) != 0) && (_Dst_00[-1] != 0x2f)) &&
     (_Dst_00[-1] != 0x5c)) {
    if ((undefined2 *)param_3[2] <= _Dst_00 + 1) {
      FUN_140213274(param_3,1);
      _Dst_00 = (undefined2 *)param_3[1];
    }
    param_3[1] = (longlong)(_Dst_00 + 1);
    *_Dst_00 = 0x2f;
    _Dst_00 = (undefined2 *)param_3[1];
  }
  pvVar2 = (void *)*param_2;
  iVar1 = *(int *)(param_2 + 1);
  lVar4 = (longlong)iVar1;
  if ((undefined2 *)param_3[2] <= _Dst_00 + lVar4) {
    FUN_140213274(param_3,lVar4);
  }
  if (iVar1 != 0) {
    _Dst = (void *)param_3[1];
    memcpy(_Dst,pvVar2,lVar4 * 2);
    param_3[1] = (longlong)((longlong)_Dst + lVar4 * 2);
  }
  if ((local_38 ^ (ulonglong)auStack_2a8) == DAT_14c707940) {
    FUN_140659213(param_3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411bbb4e FUN_1411bbb4e body=144 status=ok
// SIG undefined FUN_1411bbb4e(void)

undefined8 FUN_1411bbb4e(longlong *param_1,short param_2,undefined8 *param_3)

{
  int iVar1;
  short *psVar2;
  int iVar3;
  int iVar4;
  short *psVar5;
  
  iVar1 = *(int *)((undefined8 *)*param_1 + 1);
  if (0 < (longlong)iVar1) {
    psVar2 = *(short **)*param_1;
    iVar3 = 1;
    psVar5 = psVar2;
    do {
      if (*psVar5 == param_2) {
        if (iVar3 != 0) {
          iVar4 = iVar3 + -1;
          if (iVar1 <= iVar3 + -1) {
            iVar4 = iVar1;
          }
          if (iVar4 < 1) {
            iVar4 = 0;
          }
          *param_3 = psVar2;
          *(int *)(param_3 + 1) = iVar4;
          param_1 = (longlong *)*param_1;
          iVar1 = (int)param_1[1];
          iVar4 = iVar1 - iVar3;
          if (iVar1 <= iVar1 - iVar3) {
            iVar4 = iVar1;
          }
          if (iVar4 < 1) {
            iVar4 = 0;
          }
          *param_1 = ((longlong)iVar1 * 2 + *param_1) - (ulonglong)(uint)(iVar4 * 2);
          *(int *)(param_1 + 1) = iVar4;
          return CONCAT71((uint7)(uint3)((uint)(iVar4 * 2) >> 8),1);
        }
        break;
      }
      psVar5 = psVar5 + 1;
      iVar3 = iVar3 + 1;
    } while (psVar5 < psVar2 + iVar1);
  }
  *param_3 = 0;
  *(undefined4 *)(param_3 + 1) = 0;
  return 0;
}



// FUNCTION 1411bbbde FUN_1411bbbde body=232 status=ok
// SIG undefined FUN_1411bbbde(void)

ulonglong FUN_1411bbbde(ushort *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  byte bVar7;
  uint uVar8;
  uint uVar9;
  
  uVar1 = *(uint *)(param_1 + 2);
  uVar9 = uVar1 + 3;
  uVar2 = uVar1 + 7;
  uVar3 = uVar1 + 0xf;
  if (-1 < (int)uVar1) {
    uVar9 = uVar1;
    uVar2 = uVar1;
    uVar3 = uVar1;
  }
  uVar8 = (int)uVar1 / 2 & 0x80000001;
  uVar4 = FUN_1411bbcc6(((uVar1 & 0x80000001) == 1) + (uVar8 == 1) * '\x02' +
                        (((int)uVar9 >> 2 & 0x80000001U) == 1) * '\x04' +
                        (((int)uVar2 >> 3 & 0x80000001U) == 1) * '\b');
  uVar5 = (ulonglong)*param_1;
  bVar7 = (byte)uVar4 ^ 1 | (&DAT_14ca814b8)[uVar5 * 0xf] != 1;
  uVar6 = (ulonglong)CONCAT31((int3)((uint)uVar4 >> 8),bVar7) ^ 1;
  if ((((int)uVar3 >> 4 & 0x80000001U) == 1) && (bVar7 == 0)) {
    if (*(longlong *)(&DAT_14ca814b0 + uVar5 * 0x3c) == DAT_14ca838f8) {
      bVar7 = *(byte *)(&DAT_14ca814c8 + uVar5 * 0xf) & 1;
    }
    else {
      bVar7 = 0;
    }
    uVar6 = CONCAT71((int7)((ulonglong)*(longlong *)(&DAT_14ca814b0 + uVar5 * 0x3c) >> 8),
                     uVar8 != 1 & bVar7);
  }
  return uVar6;
}



// FUNCTION 1411bbcc6 FUN_1411bbcc6 body=92 status=ok
// SIG undefined FUN_1411bbcc6(void)

bool FUN_1411bbcc6(int param_1)

{
  uint uVar1;
  longlong lVar2;
  byte bVar3;
  ulonglong uVar4;
  bool bVar5;
  
  lVar2 = DAT_14ca2c870;
  uVar1 = param_1 - 2U >> 1;
  bVar5 = true;
  if (((uVar1 | (uint)((param_1 - 2U & 1) != 0) << 0x1f) < 0xe) &&
     ((0x2a77U >> (uVar1 & 0x1f) & 1) != 0)) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0xc60) == 0x40000002) {
      uVar4 = 0;
    }
    else {
      bVar3 = FUN_144a61b4f();
      uVar4 = (ulonglong)(bVar3 ^ 1);
    }
    bVar5 = *(int *)(lVar2 + uVar4 * 4) != 0;
  }
  return bVar5;
}



// FUNCTION 1411bbd22 FUN_1411bbd22 body=143 status=ok
// SIG undefined FUN_1411bbd22(void)

undefined8 * FUN_1411bbd22(undefined8 *param_1,int param_2)

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



// FUNCTION 1411bbdb2 FUN_1411bbdb2 body=122 status=ok
// SIG undefined FUN_1411bbdb2(void)

void FUN_1411bbdb2(longlong *param_1)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = (**(code **)(*param_1 + 0x2a0))();
  if (*(longlong *)(lVar1 + 0x30) == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0x30) + 0x2b8);
  }
  (**(code **)(*param_1 + 0x310))(param_1,&local_28);
  FUN_1411bbe3a(lVar1 + 0x720,local_28);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411bbe3a FUN_1411bbe3a body=590 status=ok
// SIG undefined FUN_1411bbe3a(void)

undefined8 FUN_1411bbe3a(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar5 = (int)((ulonglong)param_2 >> 0x20);
  uVar4 = (ushort)((ulonglong)param_2 >> 0x10);
  uVar3 = (ushort)param_2;
  iVar7 = (int)param_2;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar1 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[8];
    }
    iVar6 = *(int *)((longlong)plVar1 +
                    (ulonglong)
                    ((int)param_1[9] - 1U &
                    iVar5 + (iVar7 << 0x10 | (uint)uVar3) + ((uint)uVar4 << 0x13 | (uint)uVar4) +
                    (uint)(uVar3 >> 4)) * 4);
    if (iVar6 != -1) {
      lVar2 = *param_1;
      do {
        if (*(longlong *)(lVar2 + (longlong)iVar6 * 0x10) == param_2) goto LAB_1411bbff3;
        iVar6 = *(int *)((longlong)iVar6 * 0x10 + lVar2 + 8);
      } while (iVar6 != -1);
    }
  }
  if ((int)param_1[0xb] != *(int *)((longlong)param_1 + 0x84)) {
    plVar1 = param_1 + 0x11;
    if ((longlong *)param_1[0x12] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x12];
    }
    iVar6 = *(int *)((longlong)plVar1 +
                    (ulonglong)
                    ((int)param_1[0x13] - 1U &
                    iVar5 + (iVar7 << 0x10 | (uint)uVar3) + ((uint)uVar4 << 0x13 | (uint)uVar4) +
                    (uint)(uVar3 >> 4)) * 4);
    if (iVar6 != -1) {
      lVar2 = param_1[10];
      do {
        if (*(longlong *)(lVar2 + (longlong)iVar6 * 0x10) == param_2) goto LAB_1411bc081;
        iVar6 = *(int *)((longlong)iVar6 * 0x10 + lVar2 + 8);
      } while (iVar6 != -1);
    }
  }
  if ((int)param_1[0x15] != *(int *)((longlong)param_1 + 0xd4)) {
    plVar1 = param_1 + 0x1b;
    if ((longlong *)param_1[0x1c] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x1c];
    }
    iVar6 = *(int *)((longlong)plVar1 +
                    (ulonglong)
                    ((int)param_1[0x1d] - 1U &
                    iVar5 + (iVar7 << 0x10 | (uint)uVar3) + ((uint)uVar4 << 0x13 | (uint)uVar4) +
                    (uint)(uVar3 >> 4)) * 4);
    if (iVar6 != -1) {
      lVar2 = param_1[0x14];
      do {
        if (*(longlong *)(lVar2 + (longlong)iVar6 * 0x10) == param_2) {
LAB_1411bbff3:
          return CONCAT71((int7)((ulonglong)lVar2 >> 8),2);
        }
        iVar6 = *(int *)((longlong)iVar6 * 0x10 + lVar2 + 8);
      } while (iVar6 != -1);
    }
  }
  if ((int)param_1[0x1f] != *(int *)((longlong)param_1 + 0x124)) {
    plVar1 = param_1 + 0x25;
    if ((longlong *)param_1[0x26] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[0x26];
    }
    iVar7 = *(int *)((longlong)plVar1 +
                    (ulonglong)
                    ((int)param_1[0x27] - 1U &
                    iVar5 + (iVar7 << 0x10 | (uint)uVar3) + ((uint)uVar4 << 0x13 | (uint)uVar4) +
                    (uint)(uVar3 >> 4)) * 4);
    if (iVar7 != -1) {
      while (lVar2 = (longlong)iVar7 * 0x10, *(longlong *)(param_1[0x1e] + lVar2) != param_2) {
        iVar7 = *(int *)(lVar2 + param_1[0x1e] + 8);
        if (iVar7 == -1) {
          return 0;
        }
      }
LAB_1411bc081:
      return CONCAT71((int7)((ulonglong)lVar2 >> 8),1);
    }
  }
  return 0;
}



// FUNCTION 1411bc088 FUN_1411bc088 body=873 status=ok
// SIG undefined FUN_1411bc088(void)

longlong FUN_1411bc088(longlong param_1)

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
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (DAT_14cb11c78 == 0) {
    local_40 = &local_28;
    local_28 = FUN_1449e2820;
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
    local_40 = &local_28;
    local_28 = FUN_1449e2820;
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
  lVar3 = *(longlong *)(param_1 + 0x20);
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
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_98);
    }
  }
  if (DAT_14cb10130 == 0) {
    local_40 = &local_28;
    local_28 = FUN_140754f84;
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
    local_40 = &local_28;
    local_28 = FUN_1449e2820;
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
  lVar3 = *(longlong *)(param_1 + 0x20);
  if (lVar3 == 0) {
    lVar4 = 0;
  }
  else {
    iVar1 = *(int *)(lVar2 + 0x38);
    do {
      if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x38) < iVar1) ||
         (lVar4 = lVar3,
         *(longlong *)(*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)iVar1 * 8) !=
         lVar2 + 0x30)) {
        lVar4 = 0;
      }
    } while ((lVar4 == 0) && (lVar3 = *(longlong *)(lVar3 + 0x20), lVar3 != 0));
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return lVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411bc404 FUN_1411bc404 body=141 status=ok
// SIG undefined FUN_1411bc404(void)

undefined8 * FUN_1411bc404(undefined8 *param_1,undefined8 param_2)

{
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 local_50;
  undefined8 *local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = &local_18;
  local_18 = DAT_14c84635c;
  local_28 = 0;
  uStack_20 = 0;
  local_50 = 0;
  local_58 = 0;
  local_30 = 0;
  local_38 = 0;
  local_40 = param_2;
  FUN_1411bc492(param_1,3,0);
  *param_1 = &PTR_FUN_149eeb480;
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411bc492 FUN_1411bc492 body=538 status=ok
// SIG undefined FUN_1411bc492(void)

undefined8 *
FUN_1411bc492(undefined8 *param_1,undefined1 param_2,undefined8 param_3,undefined4 *param_4,
             undefined1 param_5,undefined1 param_6,undefined8 *param_7,undefined8 *param_8,
             longlong param_9,byte param_10)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  ulonglong uVar7;
  ushort uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  ushort uVar12;
  undefined1 auStack_78 [32];
  undefined2 *local_58;
  int local_50;
  undefined2 *local_48;
  int local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = &PTR_FUN_149ed05f0;
  uVar4 = param_8[1];
  param_1[1] = *param_8;
  param_1[2] = uVar4;
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_8 + 2);
  *(undefined1 *)((longlong)param_1 + 0x1c) = param_2;
  *(undefined1 *)((longlong)param_1 + 0x1d) = param_5;
  *(undefined1 *)((longlong)param_1 + 0x1e) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1f) = param_6;
  param_1[4] = *param_7;
  uVar1 = param_4[1];
  uVar2 = param_4[2];
  uVar3 = param_4[3];
  *(undefined4 *)(param_1 + 5) = *param_4;
  *(undefined4 *)((longlong)param_1 + 0x2c) = uVar1;
  *(undefined4 *)(param_1 + 6) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x34) = uVar3;
  param_1[7] = param_9;
  local_38 = param_3;
  if ((param_9 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_9);
  }
  *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  uVar7 = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined2 *)(param_1 + 0xf) = 1;
  uVar4 = DAT_14c84635c;
  param_1[0x11] = DAT_14c84635c;
  param_1[0x10] = uVar4;
  *(undefined1 *)(param_1 + 0x12) = 0;
  param_10 = *(byte *)((longlong)param_1 + 0x94) & 0xfa | param_10;
  *(byte *)((longlong)param_1 + 0x94) = param_10 + 4;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = param_3;
  if (param_9 == 0) {
    FUN_1400021e4(&local_38,&local_48);
    FUN_140056680(&local_58,L"texture:/");
    uVar10 = (ulonglong)(local_50 - 1);
    if (local_50 == 0) {
      uVar10 = uVar7;
    }
    if (0 < (int)uVar10) {
      puVar5 = local_58;
      if (local_50 == 0) {
        puVar5 = &DAT_149dfb77a;
      }
      puVar6 = &DAT_149dfb77a;
      if (local_40 != 0) {
        puVar6 = local_48;
      }
      lVar11 = 0;
      while( true ) {
        uVar12 = *(ushort *)((longlong)puVar6 + lVar11);
        uVar7 = (ulonglong)uVar12;
        uVar8 = *(ushort *)((longlong)puVar5 + lVar11);
        if (uVar12 != uVar8) break;
        if (uVar12 == 0) goto LAB_1411bc644;
LAB_1411bc612:
        uVar10 = uVar10 - 1;
        if (uVar10 == 0) goto LAB_1411bc644;
        lVar11 = lVar11 + 2;
      }
      if ((uVar8 | uVar12) < 0x80) {
        uVar12 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
        uVar9 = (ulonglong)uVar8;
        uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
        if ((&DAT_149e05da0)[uVar7] == (&DAT_149e05da0)[uVar9]) goto LAB_1411bc612;
      }
      if (uVar12 != uVar8) {
        uVar7 = 0;
        goto LAB_1411bc647;
      }
LAB_1411bc644:
      uVar7 = 2;
    }
LAB_1411bc647:
    *(byte *)((longlong)param_1 + 0x94) = *(byte *)((longlong)param_1 + 0x94) & 0xfd | (byte)uVar7;
    if (local_58 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_48 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    *(byte *)((longlong)param_1 + 0x94) = param_10 | 6;
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411bc6ae FUN_1411bc6ae body=94 status=ok
// SIG undefined FUN_1411bc6ae(void)

void FUN_1411bc6ae(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  undefined8 *local_20;
  undefined8 *local_18;
  undefined1 local_c [4];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = &local_28;
  local_18 = &local_30;
  local_30 = param_3;
  local_28 = param_2;
  FUN_140e9bc46(param_1 + 0x218,local_c,&local_20,0);
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411bc70e FUN_1411bc70e body=89 status=ok
// SIG undefined FUN_1411bc70e(void)

void FUN_1411bc70e(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 *local_20;
  undefined8 local_18;
  undefined1 local_c [4];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = &local_28;
  local_28 = param_2;
  local_18 = param_3;
  FUN_1412406f8(param_1 + 0x170,local_c,&local_20,0);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411bc768 FUN_1411bc768 body=40 status=ok
// SIG undefined FUN_1411bc768(void)

undefined8 FUN_1411bc768(undefined8 param_1,int param_2)

{
  FUN_1411bc790();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1411bc790 FUN_1411bc790 body=158 status=ok
// SIG undefined FUN_1411bc790(void)

void FUN_1411bc790(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  *param_1 = &PTR_FUN_14b21ffc0;
  plVar3 = (longlong *)param_1[0xd];
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
  if (*(int *)((longlong)param_1 + 0x54) != -1) {
    *(undefined8 *)((longlong)param_1 + 0x54) = 0xffffffff;
  }
  plVar3 = param_1 + 5;
  if (*(int *)(param_1 + 6) != 0) {
    puVar4 = (undefined8 *)*plVar3;
    if (puVar4 == (undefined8 *)0x0) goto LAB_1411bc7c4;
    (**(code **)*puVar4)(puVar4,0);
    FUN_1446efa72(plVar3,0,0,0x10);
    *(undefined4 *)(param_1 + 6) = 0;
  }
  if (*plVar3 != 0) {
    FUN_1400020a8();
  }
LAB_1411bc7c4:
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 1411bc82e FUN_1411bc82e body=297 status=ok
// SIG undefined FUN_1411bc82e(void)

undefined8 FUN_1411bc82e(longlong param_1,undefined8 param_2,undefined4 param_3)

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
    if (iVar1 == 2) goto LAB_1411bc950;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1411bc950;
    }
    FUN_140192332(param_1 + 0x18,&local_38,0);
  }
  else {
LAB_1411bc950:
    local_38 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1411bc8fb;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5 + (longlong)*(int *)(param_1 + 0x28),param_2,param_3);
      uVar6 = 1;
      goto LAB_1411bc8fb;
    }
  }
  uVar6 = 0;
LAB_1411bc8fb:
  if ((local_38 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_38);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411bc964 FUN_1411bc964 body=61 status=ok
// SIG undefined FUN_1411bc964(void)

void FUN_1411bc964(longlong param_1,int param_2)

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



// FUNCTION 1411bc9a6 FUN_1411bc9a6 body=228 status=ok
// SIG undefined FUN_1411bc9a6(void)

longlong FUN_1411bc9a6(void)

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
  if (DAT_14cac1de8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_14787921c;
    local_40 = &LAB_1459be43e;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/Engine",L"Interface_AssetUserData",&DAT_14cac1de8,FUN_14637c512);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cac1de8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411bca8c FUN_1411bca8c body=228 status=ok
// SIG undefined FUN_1411bca8c(void)

longlong FUN_1411bca8c(void)

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
  if (DAT_14cac8908 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_142b4ce0c;
    local_38 = &LAB_1478a9a3b;
    local_40 = &LAB_1403247b1;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x670;
    FUN_14081cfa3(L"/Script/Engine",L"TextRenderComponent",&DAT_14cac8908,FUN_146398ad0);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cac8908;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411bcb78 FUN_1411bcb78 body=228 status=ok
// SIG undefined FUN_1411bcb78(void)

longlong FUN_1411bcb78(void)

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
  if (DAT_14cb4c758 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1458f23b4;
    local_38 = &LAB_1484ca4a3;
    local_40 = FUN_146492f62;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000009;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/ModelingComponents",L"MultiSelectionMeshEditingToolBuilder",
                  &DAT_14cb4c758,&DAT_1484ca4a2);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb4c758;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411bcc5e FUN_1411bcc5e body=228 status=ok
// SIG undefined FUN_1411bcc5e(void)

longlong FUN_1411bcc5e(void)

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
  if (DAT_14cb95a28 == 0) {
    local_30 = &local_10;
    local_10 = FUN_141030f22;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1459f155c;
    local_38 = &LAB_148a39a12;
    local_40 = &LAB_1458aff89;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x1000000c;
    local_60 = 8;
    local_68 = 0x420;
    FUN_14081cfa3(L"/Script/OnlineSubsystemUtils",L"OnlineBeaconClient",&DAT_14cb95a28,FUN_146579a88
                 );
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb95a28;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411bcd44 FUN_1411bcd44 body=228 status=ok
// SIG undefined FUN_1411bcd44(void)

longlong FUN_1411bcd44(void)

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
  if (DAT_14cbabe88 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1459c2cb0;
    local_38 = &LAB_148c28733;
    local_40 = FUN_1465df7dc;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x40;
    FUN_14081cfa3(L"/Script/OakGame",L"OakLevelSequencePlayerCharacterObject",&DAT_14cbabe88,
                  &DAT_148c28732);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbabe88;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411bce2a FUN_1411bce2a body=29 status=ok
// SIG undefined FUN_1411bce2a(void)

undefined8 FUN_1411bce2a(undefined8 param_1,undefined8 param_2)

{
  FUN_1411bce66();
  return param_2;
}



// FUNCTION 1411bce48 FUN_1411bce48 body=29 status=ok
// SIG undefined FUN_1411bce48(void)

undefined8 FUN_1411bce48(undefined8 param_1,undefined8 param_2)

{
  FUN_1411bd35e();
  return param_2;
}



// FUNCTION 1411bce66 FUN_1411bce66 body=291 status=ok
// SIG undefined FUN_1411bce66(void)

longlong * FUN_1411bce66(longlong param_1,longlong *param_2,undefined8 *param_3,undefined8 *param_4)

{
  void *_Src;
  undefined4 uVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_98 [40];
  void *local_70;
  int local_68;
  undefined4 local_64;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined8 uStack_44;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_70 = (void *)0x0;
  local_68 = *(int *)(param_3 + 1);
  lVar4 = (longlong)local_68;
  _Src = (void *)*param_3;
  if (lVar4 == 0) {
    local_64 = 0;
  }
  else {
    FUN_1446dd670(&local_70,local_68,0);
    memcpy(local_70,_Src,lVar4 * 2);
  }
  local_60 = *param_4;
  local_58 = 0;
  uStack_50 = 0;
  uStack_4c = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  uVar1 = FUN_1411bcf8a(&local_70);
  iVar2 = FUN_14132aec2((longlong *)(param_1 + 0x48),uVar1,&local_70);
  if (iVar2 != -1) {
    lVar4 = *(longlong *)(param_1 + 0x48);
    if ((lVar4 + (longlong)iVar2 * 0x48 != 0) &&
       (plVar3 = (longlong *)(lVar4 + (longlong)iVar2 * 0x48 + 0x38), plVar3 != (longlong *)0x0)) {
      lVar4 = *plVar3;
      *param_2 = lVar4;
      if ((DAT_14c950c29 == '\x01') && (lVar4 != 0)) {
        FUN_1456cec3c();
      }
      goto LAB_1411bcf36;
    }
  }
  *param_2 = 0;
LAB_1411bcf36:
  if (local_70 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411bcf8a FUN_1411bcf8a body=980 status=ok
// SIG undefined FUN_1411bcf8a(void)

uint FUN_1411bcf8a(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined2 *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  
  iVar1 = *(int *)(param_1 + 1);
  uVar5 = 0;
  iVar6 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar6 = 0;
  }
  if (0 < iVar6) {
    if (iVar1 == 0) {
      puVar3 = &DAT_149dfb77a;
    }
    else {
      puVar3 = (undefined2 *)*param_1;
    }
    lVar8 = 0;
    do {
      uVar4 = ((uint)(0x19 < (ushort)puVar3[lVar8] - 0x61) * 0x20 + (uint)(ushort)puVar3[lVar8]) -
              0x20;
      uVar5 = uVar5 >> 8 ^ *(uint *)(&DAT_14c75d150 + (ulonglong)((uVar5 ^ uVar4) & 0xff) * 4);
      uVar5 = uVar5 >> 8 ^
              *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar5 & 0xff ^ uVar4 >> 8 & 0xff) * 4);
      lVar8 = lVar8 + 1;
    } while (iVar6 != (int)lVar8);
  }
  uVar4 = *(uint *)((longlong)param_1 + 0x14);
  uVar7 = uVar4 >> 0xd ^ *(int *)(param_1 + 2) - uVar4;
  uVar9 = uVar7 << 8 ^ (-0x61c88647 - uVar4) - uVar7;
  uVar10 = uVar9 >> 0xd ^ (uVar4 - uVar7) - uVar9;
  uVar7 = uVar10 >> 0xc ^ (uVar7 - uVar9) - uVar10;
  uVar4 = uVar7 << 0x10 ^ (uVar9 - uVar10) - uVar7;
  uVar9 = uVar4 >> 5 ^ (uVar10 - uVar7) - uVar4;
  uVar7 = uVar9 >> 3 ^ (uVar7 - uVar4) - uVar9;
  uVar4 = uVar7 << 10 ^ (uVar4 - uVar9) - uVar7;
  uVar4 = uVar4 >> 0xf ^ uVar9 - (uVar7 + uVar4);
  uVar7 = uVar4 >> 0xd ^ uVar5 - uVar4;
  uVar5 = uVar7 << 8 ^ (-0x61c88647 - uVar4) - uVar7;
  uVar9 = uVar5 >> 0xd ^ (uVar4 - uVar7) - uVar5;
  uVar4 = uVar9 >> 0xc ^ (uVar7 - uVar5) - uVar9;
  uVar5 = uVar4 << 0x10 ^ (uVar5 - uVar9) - uVar4;
  uVar9 = uVar5 >> 5 ^ (uVar9 - uVar4) - uVar5;
  uVar7 = uVar9 >> 3 ^ (uVar4 - uVar5) - uVar9;
  uVar5 = uVar7 << 10 ^ (uVar5 - uVar9) - uVar7;
  uVar4 = ((uint)((ulonglong)param_1[3] >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1[3] >> 4)) *
          -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  uVar4 = uVar4 >> 0x10 ^ uVar4;
  uVar7 = uVar4 >> 0xd ^ (uVar5 >> 0xf ^ uVar9 - (uVar7 + uVar5)) - uVar4;
  uVar5 = uVar7 << 8 ^ (-0x61c88647 - uVar4) - uVar7;
  uVar9 = uVar5 >> 0xd ^ (uVar4 - uVar7) - uVar5;
  uVar4 = uVar9 >> 0xc ^ (uVar7 - uVar5) - uVar9;
  uVar5 = uVar4 << 0x10 ^ (uVar5 - uVar9) - uVar4;
  uVar9 = uVar5 >> 5 ^ (uVar9 - uVar4) - uVar5;
  uVar7 = uVar9 >> 3 ^ (uVar4 - uVar5) - uVar9;
  uVar5 = uVar7 << 10 ^ (uVar5 - uVar9) - uVar7;
  uVar4 = ((uint)((ulonglong)param_1[4] >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1[4] >> 4)) *
          -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  uVar4 = uVar4 >> 0x10 ^ uVar4;
  uVar7 = uVar4 >> 0xd ^ (uVar5 >> 0xf ^ uVar9 - (uVar7 + uVar5)) - uVar4;
  uVar5 = uVar7 << 8 ^ (-0x61c88647 - uVar4) - uVar7;
  uVar9 = uVar5 >> 0xd ^ (uVar4 - uVar7) - uVar5;
  uVar4 = uVar9 >> 0xc ^ (uVar7 - uVar5) - uVar9;
  uVar5 = uVar4 << 0x10 ^ (uVar5 - uVar9) - uVar4;
  uVar10 = uVar5 >> 5 ^ (uVar9 - uVar4) - uVar5;
  uVar7 = uVar10 >> 3 ^ (uVar4 - uVar5) - uVar10;
  uVar4 = uVar7 << 10 ^ (uVar5 - uVar10) - uVar7;
  uVar2 = param_1[5];
  uVar5 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar9 = (uint)uVar2 & 0xffff;
  uVar5 = ((uint)uVar2 << 0x10 | uVar9) + (int)((ulonglong)uVar2 >> 0x20) +
          (uVar5 << 0x13 | uVar5 & 0xffff) + (uVar9 >> 4);
  uVar4 = uVar5 >> 0xd ^ (uVar4 >> 0xf ^ uVar10 - (uVar7 + uVar4)) - uVar5;
  uVar7 = uVar4 << 8 ^ (-0x61c88647 - uVar5) - uVar4;
  uVar5 = uVar7 >> 0xd ^ (uVar5 - uVar4) - uVar7;
  uVar4 = uVar5 >> 0xc ^ (uVar4 - uVar7) - uVar5;
  uVar9 = uVar4 << 0x10 ^ (uVar7 - uVar5) - uVar4;
  uVar7 = uVar9 >> 5 ^ (uVar5 - uVar4) - uVar9;
  uVar4 = uVar7 >> 3 ^ (uVar4 - uVar9) - uVar7;
  uVar5 = uVar4 << 10 ^ (uVar9 - uVar7) - uVar4;
  return uVar5 >> 0xf ^ uVar7 - (uVar4 + uVar5);
}



// FUNCTION 1411bd35e FUN_1411bd35e body=788 status=ok
// SIG undefined FUN_1411bd35e(void)

undefined8 *
FUN_1411bd35e(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  int iVar1;
  void *pvVar2;
  char cVar3;
  byte bVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_108 [32];
  void *local_e8;
  int local_e0;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  void *local_b0;
  int local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  void *local_78;
  int local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_108;
  *param_2 = 0;
  iVar1 = *(int *)(param_3 + 1);
  pvVar2 = (void *)*param_3;
  *(int *)(param_2 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_2,iVar1,0);
    memcpy((void *)*param_2,pvVar2,(longlong)iVar1 * 2);
  }
  param_2[2] = *param_4;
  param_2[3] = 0;
  param_2[4] = 0;
  *(undefined8 *)((longlong)param_2 + 0x24) = 0;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0;
  if ((longlong)*(int *)(param_1 + 0x118) != 0) {
    lVar5 = *(longlong *)(param_1 + 0x110);
    lVar7 = (longlong)*(int *)(param_1 + 0x118) * 0x38;
    do {
      cVar3 = FUN_140c3e654(lVar5,param_2);
      if (cVar3 != '\0') goto LAB_1411bd5dd;
      lVar5 = lVar5 + 0x38;
      lVar7 = lVar7 + -0x38;
    } while (lVar7 != 0);
  }
  local_e8 = (void *)0x0;
  local_e0 = *(int *)(param_2 + 1);
  lVar5 = (longlong)local_e0;
  pvVar2 = (void *)*param_2;
  if (lVar5 == 0) {
    local_dc = 0;
    local_d8 = param_2[2];
    uStack_d0 = param_2[3];
    local_c8 = param_2[4];
    uStack_c0 = param_2[5];
    local_b8 = *(undefined4 *)(param_2 + 6);
    local_a8 = 0;
  }
  else {
    FUN_1446dd670(&local_e8,local_e0,0);
    memcpy(local_e8,pvVar2,lVar5 * 2);
    pvVar2 = local_e8;
    lVar5 = (longlong)local_e0;
    local_d8 = param_2[2];
    uStack_d0 = param_2[3];
    local_c8 = param_2[4];
    uStack_c0 = param_2[5];
    local_b8 = *(undefined4 *)(param_2 + 6);
    local_b0 = (void *)0x0;
    local_a8 = local_e0;
    if (lVar5 != 0) {
      FUN_1446dd670(&local_b0,local_e0,0);
      memcpy(local_b0,pvVar2,lVar5 * 2);
      goto LAB_1411bd4b7;
    }
  }
  local_b0 = (void *)0x0;
  local_a4 = 0;
LAB_1411bd4b7:
  pvVar2 = local_b0;
  local_80 = local_b8;
  local_90 = (undefined4)local_c8;
  uStack_8c = local_c8._4_4_;
  uStack_88 = (undefined4)uStack_c0;
  uStack_84 = uStack_c0._4_4_;
  local_a0 = (undefined4)local_d8;
  uStack_9c = local_d8._4_4_;
  uStack_98 = (undefined4)uStack_d0;
  uStack_94 = uStack_d0._4_4_;
  local_78 = (void *)0x0;
  lVar5 = (longlong)local_a8;
  local_70 = local_a8;
  if (lVar5 == 0) {
    local_6c = 0;
  }
  else {
    FUN_1446dd670(&local_78,local_a8,0);
    memcpy(local_78,pvVar2,lVar5 * 2);
  }
  local_48 = local_80;
  local_58 = CONCAT44(uStack_8c,local_90);
  uStack_50 = CONCAT44(uStack_84,uStack_88);
  local_68 = local_a0;
  uStack_64 = uStack_9c;
  uStack_60 = uStack_98;
  uStack_5c = uStack_94;
  lVar5 = *(longlong *)(param_1 + 0x100);
  lVar7 = (longlong)*(int *)(param_1 + 0x108);
  if (lVar7 == 0) {
    bVar4 = 0;
    lVar8 = lVar5;
  }
  else {
    lVar6 = lVar7 * 0x50 + lVar5;
    lVar7 = lVar7 * 0x50;
    do {
      bVar4 = FUN_140c3e654(lVar5 + 0x18,&local_78);
      lVar8 = lVar5;
      if (bVar4 != 0) break;
      lVar5 = lVar5 + 0x50;
      lVar7 = lVar7 + -0x50;
      lVar8 = lVar6;
    } while (lVar7 != 0);
  }
  if (local_78 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_b0 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_e8 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((bVar4 & lVar8 != 0) == 0) {
    FUN_145832e54(param_1,param_2);
  }
LAB_1411bd5dd:
  if ((local_40 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1411bd674 FUN_1411bd674 body=244 status=ok
// SIG undefined FUN_1411bd674(void)

void FUN_1411bd674(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  ushort uVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  ushort uVar8;
  ulonglong uVar9;
  longlong lVar10;
  
  lVar2 = *param_1;
  lVar6 = *param_2;
  *(int *)(param_2 + 2) = (int)param_2[2] + 2;
  if ((longlong)(int)param_2[1] != 0) {
    lVar10 = (longlong)(int)param_2[1] * 0x430 + lVar6;
    do {
      iVar3 = *(int *)(lVar6 + 0x1f8);
      iVar1 = *(int *)(lVar2 + 0x40);
      if (iVar3 == iVar1) {
        if (1 < iVar3) {
          lVar7 = 0;
          while( true ) {
            uVar4 = *(ushort *)(*(longlong *)(lVar6 + 0x1f0) + lVar7);
            uVar5 = (ulonglong)uVar4;
            uVar8 = *(ushort *)(*(longlong *)(lVar2 + 0x38) + lVar7);
            if (uVar4 != uVar8) break;
            if (uVar4 == 0) goto LAB_1411bd712;
LAB_1411bd6de:
            lVar7 = lVar7 + 2;
          }
          if ((uVar8 | uVar4) < 0x80) {
            uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar5];
            uVar9 = (ulonglong)uVar8;
            uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
            if ((&DAT_149e05da0)[uVar5] == (&DAT_149e05da0)[uVar9]) goto LAB_1411bd6de;
          }
          if (uVar4 != uVar8) goto LAB_1411bd746;
        }
LAB_1411bd712:
        iVar3 = *(int *)(lVar6 + 0x1d4);
        if (*(char *)(lVar6 + 0x1d0) == '\0') {
          if (iVar3 == 0) {
            iVar3 = 0;
            goto LAB_1411bd721;
          }
        }
        else {
LAB_1411bd721:
          *(undefined1 *)(lVar6 + 0x1d0) = 0;
          *(int *)(lVar6 + 0x1d4) = iVar3 + 1;
        }
        FUN_1449a0272(lVar6 + 0x1d8,param_1[1]);
      }
      else if (iVar1 + iVar3 == 1) goto LAB_1411bd712;
LAB_1411bd746:
      lVar6 = lVar6 + 0x430;
    } while (lVar6 != lVar10);
  }
  return;
}



// FUNCTION 1411bd768 FUN_1411bd768 body=76 status=ok
// SIG undefined FUN_1411bd768(void)

undefined8 FUN_1411bd768(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (*(char *)(param_1 + 0x110) == '\0') {
    uVar2 = 1;
    if ((longlong)*(int *)(param_1 + 0xf0) != 0) {
      lVar3 = 0;
      do {
        lVar1 = *(longlong *)(*(longlong *)(param_1 + 0xe8) + lVar3);
        if (((*(char *)(lVar1 + 0x30) != '\0') || (*(char *)(lVar1 + 0x31) != '\0')) ||
           (*(int *)(lVar1 + 0x6c) != 2)) goto LAB_1411bd7b0;
        lVar3 = lVar3 + 0x10;
      } while ((longlong)*(int *)(param_1 + 0xf0) * 0x10 != lVar3);
    }
  }
  else {
LAB_1411bd7b0:
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 1411bd7b4 FUN_1411bd7b4 body=729 status=ok
// SIG undefined FUN_1411bd7b4(void)

undefined8 * FUN_1411bd7b4(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  undefined1 auStack_78 [40];
  longlong *local_50;
  int local_48;
  undefined1 local_40 [8];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = (longlong *)0x0;
  local_48 = 0;
  FUN_14009d848(&local_50);
  if (((local_48 == 0) || (local_50 == (longlong *)0x0)) ||
     (cVar3 = (**(code **)(*local_50 + 0x30))(), cVar3 == '\0')) {
    if (local_48 == 0) goto LAB_1411bd8c5;
    if (local_50 != (longlong *)0x0) {
      (**(code **)*local_50)();
      FUN_1446efa72(&local_50,0,0,0x10);
      goto LAB_1411bd8b8;
    }
  }
  else {
    plVar1 = (longlong *)(param_1 + 0xf8);
    if (*(int *)(param_1 + 0x10c) < 1) {
      iVar5 = *(int *)(param_1 + 0x100);
      iVar4 = *(int *)(param_1 + 0x108) + -1;
      *(int *)(param_1 + 0x108) = iVar4;
      if (iVar4 <= iVar5) {
        iVar4 = iVar5;
        if (0 < iVar5) {
          iVar8 = 0;
          do {
            if (((*(int *)(*plVar1 + 8 + (longlong)iVar8 * 0x10) == 0) ||
                (plVar2 = *(longlong **)(*plVar1 + (longlong)iVar8 * 0x10),
                plVar2 == (longlong *)0x0)) ||
               (cVar3 = (**(code **)(*plVar2 + 0x28))(), cVar3 != '\0')) {
              FUN_14005b288(plVar1,iVar8);
              FUN_14005b248(plVar1);
            }
            else {
              iVar8 = iVar8 + 1;
            }
            iVar4 = *(int *)(param_1 + 0x100);
          } while (iVar8 < iVar4);
        }
        iVar8 = 2;
        if (2 < iVar4 * 2) {
          iVar8 = iVar4 * 2;
        }
        *(int *)(param_1 + 0x108) = iVar8;
        if ((iVar8 < iVar5) && (*(int *)(param_1 + 0x104) != iVar4)) {
          FUN_14045812c();
        }
      }
    }
    if ((local_48 != 0) && (local_50 != (longlong *)0x0)) {
      (**(code **)(*local_50 + 0x38))(local_50,local_40);
    }
    iVar5 = *(int *)(param_1 + 0x100);
    *(uint *)(param_1 + 0x100) = iVar5 + 1U;
    if (*(uint *)(param_1 + 0x104) < iVar5 + 1U) {
      FUN_1447a71f6(plVar1,iVar5);
    }
    lVar7 = *plVar1;
    lVar9 = (longlong)iVar5 * 0x10;
    *(undefined8 *)(lVar7 + lVar9) = 0;
    *(undefined4 *)(lVar7 + 8 + lVar9) = 0;
    *(longlong **)(lVar7 + lVar9) = local_50;
    local_50 = (longlong *)0x0;
    *(int *)(lVar7 + 8 + lVar9) = local_48;
LAB_1411bd8b8:
    local_48 = 0;
LAB_1411bd8c5:
    if (local_50 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  if (*(char *)(param_1 + 0x110) == '\0') {
    if ((longlong)*(int *)(param_1 + 0xf0) != 0) {
      lVar7 = 0;
      do {
        lVar9 = *(longlong *)(*(longlong *)(param_1 + 0xe8) + lVar7);
        if (((*(char *)(lVar9 + 0x30) != '\0') || (*(char *)(lVar9 + 0x31) != '\0')) ||
           (*(int *)(lVar9 + 0x6c) != 2)) goto LAB_1411bd926;
        lVar7 = lVar7 + 0x10;
      } while ((longlong)*(int *)(param_1 + 0xf0) * 0x10 != lVar7);
    }
    if (((int)param_3[1] != 0) && ((longlong *)*param_3 != (longlong *)0x0)) {
      (**(code **)(*(longlong *)*param_3 + 0x60))();
    }
  }
LAB_1411bd926:
  iVar5 = (int)param_3[1];
  if ((iVar5 == 0) || (plVar1 = (longlong *)*param_3, plVar1 == (longlong *)0x0)) {
    *param_2 = 0;
  }
  else {
    (**(code **)(*plVar1 + 0x38))(plVar1,param_2);
    iVar5 = (int)param_3[1];
  }
  puVar6 = (undefined8 *)*param_3;
  if (iVar5 != 0) {
    if (puVar6 == (undefined8 *)0x0) goto LAB_1411bd959;
    (**(code **)*puVar6)(puVar6,0);
    FUN_1446efa72(param_3,0,0,0x10);
    *(undefined4 *)(param_3 + 1) = 0;
    puVar6 = (undefined8 *)*param_3;
  }
  if (puVar6 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_1411bd959:
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1411bda8e FUN_1411bda8e body=844 status=ok
// SIG undefined FUN_1411bda8e(void)

void FUN_1411bda8e(longlong param_1,char param_2)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  
  *(undefined1 *)(param_1 + 8) = 0;
  if ((((*(int *)(param_1 + 0x10c) != 0) && (uVar3 = *(uint *)(param_1 + 0x108), -1 < (int)uVar3))
      && ((int)uVar3 < DAT_14c9647dc)) &&
     (((plVar6 = (longlong *)
                 ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
       plVar6 != (longlong *)0x0 && ((int)plVar6[2] == *(int *)(param_1 + 0x10c))) &&
      (((*(uint *)(plVar6 + 1) & 0x10200000) == 0 && (lVar5 = *plVar6, lVar5 != 0)))))) {
    if (*(longlong *)(param_1 + 0x118) != 0) {
      FUN_14480f766(lVar5 + 0x300);
    }
    *(undefined8 *)(param_1 + 0x118) = 0;
    if (*(longlong *)(param_1 + 0x120) != 0) {
      FUN_14480f766(lVar5 + 0x318);
    }
    *(undefined8 *)(param_1 + 0x120) = 0;
    if (*(longlong *)(param_1 + 0x128) != 0) {
      FUN_14480f766(lVar5 + 0x2b8);
    }
    *(undefined8 *)(param_1 + 0x128) = 0;
    if (*(longlong *)(param_1 + 0x130) != 0) {
      FUN_14480f766(lVar5 + 0x330);
      *(undefined8 *)(param_1 + 0x130) = 0;
    }
  }
  if (param_2 == '\0') {
    FUN_140dd9fb4(param_1);
  }
  else {
    *(undefined8 *)(param_1 + 0x108) = 0;
    if (((*(int *)(param_1 + 0x114) != 0) && (uVar3 = *(uint *)(param_1 + 0x110), -1 < (int)uVar3))
       && (((int)uVar3 < DAT_14c9647dc &&
           ((((plVar6 = (longlong *)
                        ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
              plVar6 != (longlong *)0x0 && ((int)plVar6[2] == *(int *)(param_1 + 0x114))) &&
             ((*(uint *)(plVar6 + 1) & 0x10200000) == 0)) &&
            ((lVar5 = *plVar6, lVar5 != 0 && (iVar8 = *(int *)(param_1 + 0x68), 0 < iVar8)))))))) {
      lVar7 = 0x10;
      lVar9 = 0;
      do {
        iVar4 = *(int *)(*(longlong *)(param_1 + 0x60) + lVar7);
        if ((((iVar4 != 0) &&
             (uVar3 = *(uint *)(*(longlong *)(param_1 + 0x60) + -4 + lVar7), -1 < (int)uVar3)) &&
            (((int)uVar3 < DAT_14c9647dc &&
             (((plVar6 = (longlong *)
                         ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
               plVar6 != (longlong *)0x0 && ((int)plVar6[2] == iVar4)) &&
              ((*(uint *)(plVar6 + 1) & 0x10200000) == 0)))))) && (*plVar6 != 0)) {
          FUN_140ddbaba(*plVar6,lVar5);
          iVar8 = *(int *)(param_1 + 0x68);
        }
        lVar9 = lVar9 + 1;
        lVar7 = lVar7 + 0x38;
      } while (lVar9 < iVar8);
    }
  }
  FUN_140dda5bb(*(undefined8 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 0x68));
  *(undefined4 *)(param_1 + 0x68) = 0;
  if (*(int *)(param_1 + 0x6c) != 0) {
    FUN_1407e703e(param_1 + 0x60,0);
  }
  if ((*(longlong *)(param_1 + 0x70) != 0) || (*(int *)(param_1 + 0x78) != 0x7393099c)) {
    *(undefined8 *)(param_1 + 0x70) = 0;
    *(undefined4 *)(param_1 + 0x78) = 0x7393099c;
    *(undefined8 *)(param_1 + 0x80) = 0;
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  plVar6 = *(longlong **)(param_1 + 0x40);
  if (plVar6 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x40) = 0;
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
  *(undefined4 *)(param_1 + 0x58) = 0xbf800000;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined4 *)(param_1 + 0x150) = 0;
  if (*(int *)(param_1 + 0x154) != 0) {
    FUN_1411bddda(param_1 + 0x148);
  }
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xf0) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  if (0 < *(int *)(param_1 + 0x140)) {
    iVar8 = 0;
    do {
      FUN_140dda826(param_1,iVar8);
      iVar8 = iVar8 + 1;
    } while (iVar8 < *(int *)(param_1 + 0x140));
  }
  *(undefined4 *)(param_1 + 0x140) = 0;
  if (*(int *)(param_1 + 0x144) != 0) {
    FUN_1411bde0a(param_1 + 0x138);
    return;
  }
  return;
}



// FUNCTION 1411bddda FUN_1411bddda body=48 status=ok
// SIG undefined FUN_1411bddda(void)

void FUN_1411bddda(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 1411bde0a FUN_1411bde0a body=48 status=ok
// SIG undefined FUN_1411bde0a(void)

void FUN_1411bde0a(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x18,8);
  }
  return;
}



// FUNCTION 1411bde3a FUN_1411bde3a body=92 status=ok
// SIG undefined FUN_1411bde3a(void)

undefined8 FUN_1411bde3a(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [32];
  undefined ***local_18;
  undefined **local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = &PTR_FUN_149fcf6f0;
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    local_18 = &local_10;
    uVar1 = FUN_1411bde97(*(undefined8 *)(param_2 + 0x10),param_2,0,param_1);
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411bde97 FUN_1411bde97 body=4079 status=ok
// SIG undefined FUN_1411bde97(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1411bde97(undefined8 param_1,ulonglong param_2,int param_3,longlong *param_4,
                       longlong *param_5)

{
  undefined4 *puVar1;
  void *_Src;
  char cVar2;
  byte bVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  ulonglong *puVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  undefined *puVar13;
  ulonglong uVar14;
  longlong lVar15;
  bool bVar16;
  undefined1 auStack_d8 [32];
  longlong *local_b8;
  undefined8 local_b0;
  undefined *local_a8;
  code *local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  void *local_80;
  int local_78;
  undefined4 local_74;
  undefined8 local_60;
  longlong local_58;
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar6 = *param_4 + (longlong)param_3 * 0x20;
  uVar4 = *(uint *)(*param_4 + 8 + (longlong)param_3 * 0x20);
  uVar11 = 0;
  if (uVar4 != 0xffffffff) {
    uVar11 = uVar4;
  }
  if (param_3 == 0) {
    param_4[4] = param_2;
    *(undefined1 *)((longlong)param_4 + 0x34) = 1;
  }
  FUN_14105c69e(lVar6,&local_50,param_1);
  if (local_50 < 2) goto LAB_1411be78a;
  lVar5 = param_4[1];
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c951a88) && (FUN_144b3d300(&DAT_14c951a88), DAT_14c951a88 == -1)) {
    local_a8 = (undefined *)FUN_140342cba();
    local_a0 = FUN_1468c7f1e;
    local_b0 = 0;
    local_b8 = (longlong *)0x8001;
    FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0);
    atexit(FUN_14280c819);
    _Init_thread_footer(&DAT_14c951a88);
  }
  iVar10 = (int)lVar5 + -1;
  cVar2 = FUN_1400164de(&local_50,&DAT_14c951a38);
  if (cVar2 == '\0') {
    if (iVar10 != param_3) {
      local_58 = 0;
      local_60 = 0;
      FUN_147029e18(&local_98,lVar6);
      bVar3 = FUN_14702c3fa(param_2,&local_98,&local_60,&local_58);
      bVar3 = local_58 != 0 & bVar3;
      if (bVar3 == 1) {
        *(undefined1 *)((longlong)param_4 + 0x34) = 0;
        param_4[5] = local_58;
        *(int *)(param_4 + 6) = param_3;
        local_b8 = param_5;
        uVar4 = FUN_1411bde97(*(undefined8 *)(local_58 + 0x10),local_58,param_3 + 1,param_4);
        param_2 = (ulonglong)uVar4;
      }
      if (local_98 != 0) {
        FUN_1400020a8();
      }
      if (bVar3 != 0) goto LAB_1411be78d;
      goto LAB_1411be78a;
    }
LAB_1411bdfa0:
    uVar4 = (**(code **)(*param_5 + 8))(param_5,param_2,param_4);
  }
  else {
    if (iVar10 == param_3) goto LAB_1411bdfa0;
    puVar13 = *(undefined **)(local_50 + 8);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c952478) && (FUN_144b3d300(&DAT_14c952478), DAT_14c952478 == -1)) {
      FUN_1446f4b16();
      local_a0 = FUN_1403a5f94;
      local_a8 = &DAT_14c951c78;
      local_b0 = 0;
      local_b8 = (longlong *)0x4018001;
      FUN_14000176a(&DAT_14c952428,L"FObjectProperty",0x10000,0);
      atexit(FUN_1428170e8);
      _Init_thread_footer(&DAT_14c952478);
    }
    if (DAT_14c952430 == 0) {
      bVar16 = puVar13 != (undefined *)0x0;
      if (puVar13 != &DAT_14c952428 && bVar16) {
        do {
          puVar13 = *(undefined **)(puVar13 + 0x30);
          bVar16 = puVar13 != (undefined *)0x0;
          if (puVar13 == &DAT_14c952428) break;
        } while (puVar13 != (undefined *)0x0);
      }
      if (bVar16) goto LAB_1411bdff1;
LAB_1411be014:
      lVar6 = *(longlong *)(local_50 + 8);
      lVar5 = FUN_14010a2ea();
      if (*(ulonglong *)(lVar5 + 8) == 0) {
        bVar16 = lVar6 != 0;
        if (lVar6 != lVar5 && bVar16) {
          do {
            lVar6 = *(longlong *)(lVar6 + 0x30);
            bVar16 = lVar6 != 0;
            if (lVar6 == lVar5) break;
          } while (lVar6 != 0);
        }
        if (!bVar16) goto LAB_1411be118;
LAB_1411be034:
        *(undefined1 *)((longlong)param_4 + 0x34) = 0;
        uVar14 = *(ulonglong *)
                  ((longlong)(int)uVar11 * (longlong)*(int *)(local_50 + 0x34) +
                  param_2 + (longlong)*(int *)(local_50 + 0x44));
        if (uVar14 >> 0x20 != 0) {
          param_2 = 0;
          uVar4 = (uint)uVar14;
          if (((int)uVar4 < 0) || (DAT_14c9647dc <= (int)uVar4)) goto LAB_1411be78d;
          plVar8 = (longlong *)
                   ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0xd & 0x3fff8)));
          if ((plVar8 != (longlong *)0x0) &&
             ((((int)plVar8[2] == (int)(uVar14 >> 0x20) &&
               ((*(uint *)(plVar8 + 1) & 0x10200000) == 0)) && (lVar6 = *plVar8, lVar6 != 0)))) {
            *(undefined1 *)((longlong)param_4 + 0x34) = 0;
            goto LAB_1411be0bd;
          }
        }
      }
      else {
        if ((*(ulonglong *)(lVar6 + 0x18) & *(ulonglong *)(lVar5 + 8)) != 0) goto LAB_1411be034;
LAB_1411be118:
        puVar13 = *(undefined **)(local_50 + 8);
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c9529b0) &&
           (FUN_144b3d300(&DAT_14c9529b0), DAT_14c9529b0 == -1)) {
          FUN_1446f4b16();
          local_a0 = FUN_140f17fc6;
          local_a8 = &DAT_14c951c78;
          local_b0 = 0;
          local_b8 = (longlong *)0x24008001;
          FUN_14000176a(&DAT_14c952960,L"FSoftObjectProperty",0x20000000,0);
          atexit(FUN_142818859);
          _Init_thread_footer(&DAT_14c9529b0);
        }
        if (DAT_14c952968 == 0) {
          bVar16 = puVar13 != (undefined *)0x0;
          if (puVar13 != &DAT_14c952960 && bVar16) {
            do {
              puVar13 = *(undefined **)(puVar13 + 0x30);
              bVar16 = puVar13 != (undefined *)0x0;
              if (puVar13 == &DAT_14c952960) break;
            } while (puVar13 != (undefined *)0x0);
          }
          if (!bVar16) goto LAB_1411be29e;
LAB_1411be15c:
          *(undefined1 *)((longlong)param_4 + 0x34) = 0;
          lVar5 = param_2 + (longlong)*(int *)(local_50 + 0x44);
          lVar6 = (longlong)(int)uVar11 * (longlong)*(int *)(local_50 + 0x34);
          local_98 = *(longlong *)(lVar6 + lVar5);
          puVar1 = (undefined4 *)(lVar6 + 8 + lVar5);
          local_90 = *puVar1;
          uStack_8c = puVar1[1];
          uStack_88 = puVar1[2];
          uStack_84 = puVar1[3];
          local_80 = (void *)0x0;
          local_78 = *(int *)(lVar6 + 0x20 + lVar5);
          lVar15 = (longlong)local_78;
          _Src = *(void **)(lVar6 + 0x18 + lVar5);
          if (lVar15 == 0) {
            iVar10 = (int)((ulonglong)local_98 >> 0x20);
            local_74 = 0;
          }
          else {
            FUN_1446dd670(&local_80,local_78,0);
            memcpy(local_80,_Src,lVar15 * 2);
            iVar10 = local_98._4_4_;
          }
          if (iVar10 == 0) {
LAB_1411be7c2:
            param_2 = 0;
          }
          else {
            param_2 = 0;
            if ((-1 < (int)(uint)local_98) && ((int)(uint)local_98 < DAT_14c9647dc)) {
              puVar9 = (ulonglong *)
                       ((ulonglong)(((uint)local_98 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)((uint)local_98 >> 0x10) * 8));
              if ((puVar9 == (ulonglong *)0x0) ||
                 (((int)puVar9[2] != iVar10 || ((puVar9[1] & 0x10200000) != 0))))
              goto LAB_1411be7c2;
              param_2 = *puVar9;
            }
          }
          if ((param_2 == 0) && (CONCAT44(uStack_8c,local_90) != 0)) {
            param_2 = FUN_140007850(&local_90);
            cVar2 = (*(code *)PTR_FUN_14c758760)();
            if ((param_2 == 0) || (cVar2 == '\0')) {
              if (param_2 != 0) {
                uVar4 = *(uint *)(param_2 + 0xc);
                local_98 = CONCAT44(local_98._4_4_,uVar4);
                if (DAT_14c9647dc <= (int)uVar4) goto LAB_1411be6f5;
                lVar6 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
                goto LAB_1411be50e;
              }
              local_98 = 0;
            }
            else {
              uVar4 = *(uint *)(param_2 + 0xc);
              if ((int)uVar4 < DAT_14c9647dc) {
                if ((*(uint *)(*(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8) + 8 +
                              (ulonglong)(uVar4 & 0xffff) * 0x18) & 0x8400000) == 0) {
                  local_98 = CONCAT44(local_98._4_4_,uVar4);
                  lVar6 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
LAB_1411be50e:
                  iVar10 = *(int *)(lVar6 + 0x10);
                  if (*(int *)(lVar6 + 0x10) == 0) {
                    LOCK();
                    iVar10 = DAT_14c964868 + 1;
                    UNLOCK();
                    iVar12 = DAT_14c964868 + 1;
                    bVar16 = DAT_14c964868 < 1000;
                    DAT_14c964868 = iVar10;
                    if (bVar16) {
                      FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                    L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                    ,iVar12);
                    }
                    LOCK();
                    iVar10 = *(int *)(lVar6 + 0x10);
                    bVar16 = iVar10 == 0;
                    if (bVar16) {
                      *(int *)(lVar6 + 0x10) = iVar12;
                      iVar10 = 0;
                    }
                    UNLOCK();
                    if (bVar16) {
                      iVar10 = iVar12;
                    }
                  }
                  local_98 = CONCAT44(iVar10,(uint)local_98);
                }
              }
              else if ((_DAT_00000008 & 0x8400000) == 0) {
                local_98 = CONCAT44(local_98._4_4_,uVar4);
LAB_1411be6f5:
                lVar6 = 0;
                goto LAB_1411be50e;
              }
              if ((*(uint *)(param_2 + 8) >> 0x1e & 1) == 0) goto LAB_1411be540;
            }
LAB_1411be773:
            bVar16 = true;
          }
          else {
            if (param_2 == 0) {
              param_2 = 0;
              goto LAB_1411be773;
            }
LAB_1411be540:
            *(undefined1 *)((longlong)param_4 + 0x34) = 0;
            param_4[5] = param_2;
            *(int *)(param_4 + 6) = param_3;
            local_b8 = param_5;
            uVar4 = FUN_1411bde97(*(undefined8 *)(param_2 + 0x10),param_2,param_3 + 1,param_4);
            param_2 = (ulonglong)uVar4;
            bVar16 = false;
          }
          if (local_80 != (void *)0x0) {
            FUN_1400020a8();
          }
          if (!bVar16) goto LAB_1411be78d;
        }
        else {
          if ((*(ulonglong *)(puVar13 + 0x18) & DAT_14c952968) != 0) goto LAB_1411be15c;
LAB_1411be29e:
          puVar13 = *(undefined **)(local_50 + 8);
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110)
               < DAT_14c952a58) && (FUN_144b3d300(&DAT_14c952a58), DAT_14c952a58 == -1)) {
            if ((*(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110
                         ) < DAT_14c951a88) && (FUN_144b3d300(&DAT_14c951a88), DAT_14c951a88 == -1))
            {
              local_a8 = (undefined *)FUN_140342cba();
              local_a0 = FUN_1468c7f1e;
              local_b0 = 0;
              local_b8 = (longlong *)0x8001;
              FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0);
              atexit(FUN_14280c819);
              _Init_thread_footer(&DAT_14c951a88);
            }
            local_a0 = FUN_1403a682c;
            local_a8 = &DAT_14c951a38;
            local_b0 = 0;
            local_b8 = (longlong *)0x108001;
            FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
            atexit(FUN_142818c9e);
            _Init_thread_footer(&DAT_14c952a58);
          }
          if (DAT_14c952a10 != 0) {
            if ((*(ulonglong *)(puVar13 + 0x18) & DAT_14c952a10) == 0) goto LAB_1411be43b;
LAB_1411be2e2:
            lVar6 = (longlong)(int)uVar11 * (longlong)*(int *)(local_50 + 0x34) +
                    param_2 + (longlong)*(int *)(local_50 + 0x44);
            uVar7 = *(undefined8 *)(local_50 + 0x70);
LAB_1411be2fd:
            local_b8 = param_5;
            uVar4 = FUN_142aedeac(uVar7,lVar6,param_3 + 1,param_4);
            goto LAB_1411bdfb4;
          }
          bVar16 = puVar13 != (undefined *)0x0;
          if (puVar13 != &DAT_14c952a08 && bVar16) {
            do {
              puVar13 = *(undefined **)(puVar13 + 0x30);
              bVar16 = puVar13 != (undefined *)0x0;
              if (puVar13 == &DAT_14c952a08) break;
            } while (puVar13 != (undefined *)0x0);
          }
          if (bVar16) goto LAB_1411be2e2;
LAB_1411be43b:
          puVar13 = *(undefined **)(local_50 + 8);
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110)
               < DAT_14c951ae0) && (FUN_144b3d300(&DAT_14c951ae0), DAT_14c951ae0 == -1)) {
            if ((*(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110
                         ) < DAT_14c951a88) && (FUN_144b3d300(&DAT_14c951a88), DAT_14c951a88 == -1))
            {
              local_a8 = (undefined *)FUN_140342cba();
              local_a0 = FUN_1468c7f1e;
              local_b0 = 0;
              local_b8 = (longlong *)0x8001;
              FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0);
              atexit(FUN_14280c819);
              _Init_thread_footer(&DAT_14c951a88);
            }
            local_a0 = FUN_140b31576;
            local_a8 = &DAT_14c951a38;
            local_b0 = 0;
            local_b8 = (longlong *)0x208001;
            FUN_14000176a(&DAT_14c951a90,L"FArrayProperty",0x200000,0);
            atexit(FUN_14280cbf7);
            _Init_thread_footer(&DAT_14c951ae0);
          }
          if (DAT_14c951a98 == 0) {
            bVar16 = puVar13 != (undefined *)0x0;
            if (puVar13 != &DAT_14c951a90 && bVar16) {
              do {
                puVar13 = *(undefined **)(puVar13 + 0x30);
                bVar16 = puVar13 != (undefined *)0x0;
                if (puVar13 == &DAT_14c951a90) break;
              } while (puVar13 != (undefined *)0x0);
            }
            if (!bVar16) goto LAB_1411be5af;
LAB_1411be47f:
            *(undefined1 *)((longlong)param_4 + 0x34) = 0;
            lVar5 = *(longlong *)(local_50 + 0x78);
            if (lVar5 != 0) {
              puVar13 = *(undefined **)(lVar5 + 8);
              if ((*(int *)(*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0x110) < DAT_14c952a58) &&
                 (FUN_144b3d300(&DAT_14c952a58), DAT_14c952a58 == -1)) {
                if ((*(int *)(*(longlong *)
                               ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                             0x110) < DAT_14c951a88) &&
                   (FUN_144b3d300(&DAT_14c951a88), DAT_14c951a88 == -1)) {
                  local_a8 = (undefined *)FUN_140342cba();
                  local_a0 = FUN_1468c7f1e;
                  local_b0 = 0;
                  local_b8 = (longlong *)0x8001;
                  FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0);
                  atexit(FUN_14280c819);
                  _Init_thread_footer(&DAT_14c951a88);
                }
                local_a0 = FUN_1403a682c;
                local_a8 = &DAT_14c951a38;
                local_b0 = 0;
                local_b8 = (longlong *)0x108001;
                FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
                atexit(FUN_142818c9e);
                _Init_thread_footer(&DAT_14c952a58);
              }
              if (DAT_14c952a10 == 0) {
                bVar16 = puVar13 != (undefined *)0x0;
                if (puVar13 != &DAT_14c952a08 && bVar16) {
                  do {
                    puVar13 = *(undefined **)(puVar13 + 0x30);
                    bVar16 = puVar13 != (undefined *)0x0;
                    if (puVar13 == &DAT_14c952a08) break;
                  } while (puVar13 != (undefined *)0x0);
                }
                if (bVar16) goto LAB_1411be731;
              }
              else if ((*(ulonglong *)(puVar13 + 0x18) & DAT_14c952a10) != 0) {
LAB_1411be731:
                iVar10 = *(int *)(local_50 + 0x44);
                bVar3 = *(byte *)(local_50 + 0x70);
                (**(code **)(**(longlong **)(local_50 + 0x78) + 0x178))();
                if ((-1 < (int)uVar11) &&
                   (puVar9 = (ulonglong *)(param_2 + (longlong)iVar10), (int)uVar11 < (int)puVar9[1]
                   )) {
                  if ((bVar3 & 1) == 0) {
                    uVar14 = *puVar9;
                  }
                  else {
                    uVar14 = *puVar9;
                    if ((uVar14 & 1) != 0) {
                      uVar14 = (longlong)puVar9 + ((longlong)uVar14 >> 0x18);
                    }
                  }
                  lVar6 = (longlong)*(int *)(*(longlong *)(local_50 + 0x78) + 0x34) *
                          (ulonglong)uVar11 + uVar14;
                  uVar7 = *(undefined8 *)(lVar5 + 0x70);
                  goto LAB_1411be2fd;
                }
              }
            }
          }
          else {
            if ((*(ulonglong *)(puVar13 + 0x18) & DAT_14c951a98) != 0) goto LAB_1411be47f;
LAB_1411be5af:
            puVar13 = *(undefined **)(local_50 + 8);
            if ((*(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110
                         ) < DAT_14c952900) && (FUN_144b3d300(&DAT_14c952900), DAT_14c952900 == -1))
            {
              if ((*(int *)(*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0x110) < DAT_14c951a88) &&
                 (FUN_144b3d300(&DAT_14c951a88), DAT_14c951a88 == -1)) {
                local_a8 = (undefined *)FUN_140342cba();
                local_a0 = FUN_1468c7f1e;
                local_b0 = 0;
                local_b8 = (longlong *)0x8001;
                FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0);
                atexit(FUN_14280c819);
                _Init_thread_footer(&DAT_14c951a88);
              }
              local_a0 = FUN_1468e4cee;
              local_a8 = &DAT_14c951a38;
              local_b8 = (longlong *)0x800000008001;
              local_b0 = 0;
              FUN_14000176a(&DAT_14c9528b0,L"FSetProperty",0x800000000000,0);
              atexit(FUN_142817fb7);
              _Init_thread_footer(&DAT_14c952900);
            }
            if (DAT_14c9528b8 == 0) {
              bVar16 = puVar13 != (undefined *)0x0;
              if (puVar13 != &DAT_14c9528b0 && bVar16) {
                do {
                  puVar13 = *(undefined **)(puVar13 + 0x30);
                  bVar16 = puVar13 != (undefined *)0x0;
                  if (puVar13 == &DAT_14c9528b0) break;
                } while (puVar13 != (undefined *)0x0);
              }
              if (!bVar16) goto LAB_1411be628;
            }
            else if ((*(ulonglong *)(puVar13 + 0x18) & DAT_14c9528b8) == 0) {
LAB_1411be628:
              if ((*(int *)(*(longlong *)
                             ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                           0x110) < DAT_14c951f40) &&
                 (FUN_144b3d300(&DAT_14c951f40), DAT_14c951f40 == -1)) {
                if ((*(int *)(*(longlong *)
                               ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                             0x110) < DAT_14c951a88) &&
                   (FUN_144b3d300(&DAT_14c951a88), DAT_14c951a88 == -1)) {
                  local_a8 = (undefined *)FUN_140342cba();
                  local_a0 = FUN_1468c7f1e;
                  local_b0 = 0;
                  local_b8 = (longlong *)0x8001;
                  FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0);
                  atexit(FUN_14280c819);
                  _Init_thread_footer(&DAT_14c951a88);
                }
                local_a0 = FUN_140eb3340;
                local_a8 = &DAT_14c951a38;
                local_b8 = (longlong *)0x400000008001;
                local_b0 = 0;
                param_2 = 0;
                FUN_14000176a(&DAT_14c951ef0,L"FMapProperty",0x400000000000,0);
                atexit(FUN_142815b60);
                _Init_thread_footer(&DAT_14c951f40);
                goto LAB_1411be78d;
              }
            }
          }
        }
      }
LAB_1411be78a:
      param_2 = 0;
      goto LAB_1411be78d;
    }
    if ((*(ulonglong *)(puVar13 + 0x18) & DAT_14c952430) == 0) goto LAB_1411be014;
LAB_1411bdff1:
    *(undefined1 *)((longlong)param_4 + 0x34) = 0;
    lVar6 = *(longlong *)
             ((longlong)(int)uVar11 * (longlong)*(int *)(local_50 + 0x34) +
             (longlong)*(int *)(local_50 + 0x44) + param_2);
    if (lVar6 == 0) goto LAB_1411be014;
LAB_1411be0bd:
    param_4[5] = lVar6;
    *(int *)(param_4 + 6) = param_3;
    local_b8 = param_5;
    uVar4 = FUN_1411bde97(*(undefined8 *)(lVar6 + 0x10),lVar6,param_3 + 1,param_4);
  }
LAB_1411bdfb4:
  param_2 = (ulonglong)uVar4;
LAB_1411be78d:
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2 & 0xffffff01;
}



// FUNCTION 1411bee87 FUN_1411bee87 body=30 status=ok
// SIG undefined FUN_1411bee87(void)

void FUN_1411bee87(undefined8 *param_1,char param_2)

{
  undefined8 *puVar1;
  
  puVar1 = &DAT_14cb7c580;
  if (param_2 != '\0') {
    puVar1 = &DAT_14cb7c588;
  }
  *param_1 = *puVar1;
  return;
}



// FUNCTION 1411beea6 FUN_1411beea6 body=3609 status=ok
// SIG undefined FUN_1411beea6(void)

void FUN_1411beea6(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  ushort uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  bool bVar7;
  char cVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong lVar13;
  byte bVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  bool bVar20;
  undefined1 auStack_258 [32];
  undefined1 *local_238;
  code **local_230;
  uint *local_228;
  uint *local_220;
  undefined1 *local_218;
  longlong local_208;
  longlong local_200;
  int local_1f4;
  undefined2 *local_1f0;
  undefined2 *local_1e8;
  ushort local_1de;
  int local_1dc;
  longlong *local_1d8;
  longlong *local_1d0;
  code *local_1c8;
  undefined4 **local_1c0;
  undefined4 *local_1b8;
  undefined2 local_1aa;
  undefined2 local_1a8;
  undefined8 local_1a6;
  undefined1 local_19e [11];
  undefined1 local_193;
  undefined4 local_190;
  undefined1 local_18c;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  uint uStack_17c;
  undefined4 local_178;
  undefined4 uStack_174;
  uint uStack_170;
  undefined4 uStack_16c;
  uint local_168 [10];
  uint local_140 [8];
  int local_120;
  int iStack_11c;
  longlong local_118;
  undefined1 local_110 [8];
  undefined1 local_108 [24];
  int local_f0;
  int local_e8 [2];
  undefined1 local_e0 [24];
  int local_c8;
  int local_c0;
  code *local_b8;
  byte local_b0;
  undefined1 local_a8 [8];
  byte local_a0;
  undefined1 local_98 [32];
  longlong local_78;
  uint local_70 [8];
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_258;
  lVar10 = FUN_14009d2a0();
  lVar11 = FUN_14038fb82();
  uVar4 = local_19e._0_8_;
  local_1a8 = *(undefined2 *)(lVar11 + 0xfa);
  local_1a6._0_6_ =
       CONCAT24(*(undefined2 *)(lVar10 + 0xbc),
                CONCAT22(*(undefined2 *)(lVar11 + 0xea),*(undefined2 *)(lVar11 + 0xf4)));
  local_1a6 = local_1a6 & 0xffffffffffffff;
  local_19e._2_4_ = 0x6ff;
  local_19e[7] = SUB81(uVar4,7);
  local_19e[6] = 0;
  local_1aa = *(undefined2 *)(lVar10 + 0x5a);
  local_1f0 = &local_1aa;
  local_1e8 = &local_1a8;
  FUN_1411c002e(&local_1a8,&local_188);
  uStack_17c = *(uint *)(*(longlong *)(param_1 + 0x28) + 0x294);
  uStack_180._0_2_ =
       CONCAT11(uStack_180._1_1_ & 0xfe | (uStack_17c & 0xfffffeff) == 1,(undefined1)uStack_180);
  local_1de = (ushort)uStack_180 & 0xfdff;
  local_b8 = FUN_1406f4834;
  local_b0 = 3;
  if ((((ushort)local_188 != -1) && (uStack_184._2_2_ != -1)) &&
     (cVar8 = FUN_1411bfcfa(&local_188,*(longlong *)(param_1 + 0x28) + 0x28), cVar8 != '\0')) {
    plVar12 = (longlong *)FUN_14001cc68(0x30,0x10);
    plVar12[1] = (longlong)&DAT_100000001;
    *plVar12 = (longlong)&PTR_FUN_14a4d8750;
    plVar12[2] = (longlong)&PTR_FUN_14a4d8768;
    *(uint *)((longlong)plVar12 + 0x1c) = local_188;
    *(undefined4 *)(plVar12 + 4) = uStack_184;
    *(undefined4 *)((longlong)plVar12 + 0x24) = uStack_180;
    *(uint *)(plVar12 + 5) = uStack_17c;
    *(undefined4 *)((longlong)plVar12 + 0x2c) = local_178;
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
      UNLOCK();
      LOCK();
      plVar1 = plVar12 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar12)(plVar12);
        LOCK();
        piVar2 = (int *)((longlong)plVar12 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
        }
      }
    }
    local_50 = 0;
    uVar9 = local_f0 + 0x1fU & 0xffffffe0;
    if (0 < (int)uVar9) {
      uVar16 = 0x100;
      if (0x100 < uVar9) {
        uVar16 = uVar9;
      }
      local_50 = (ulonglong)uVar16 << 0x20;
      FUN_14497ddce(local_70,0);
    }
    local_50 = CONCAT44(local_50._4_4_,local_f0);
    if (local_f0 != 0) {
      memcpy(local_70,local_110,(ulonglong)(local_f0 + 0x1fU >> 3 & 0xfffffffc));
    }
    local_78 = 0;
    uVar9 = local_c8 + 0x1fU & 0xffffffe0;
    local_208 = lVar10;
    if (0 < (int)uVar9) {
      uVar16 = 0x100;
      if (0x100 < uVar9) {
        uVar16 = uVar9;
      }
      local_78 = (ulonglong)uVar16 << 0x20;
      FUN_14497ddce(local_98,0);
    }
    local_78 = CONCAT44(local_78._4_4_,local_c8);
    if (local_c8 != 0) {
      memcpy(local_98,local_e8,(ulonglong)(local_c8 + 0x1fU >> 3 & 0xfffffffc));
    }
    uVar6 = local_50;
    uVar9 = local_188;
    uVar3 = (ushort)local_188;
    iVar15 = (local_188 & 0xffff) + 1;
    iVar18 = iVar15 - (int)local_50;
    if (iVar18 != 0 && (int)local_50 <= iVar15) {
      if ((int)local_50 == 0) {
LAB_1411bf167:
        if (local_50._4_4_ <= (int)(local_188 & 0xffff)) {
          local_50 = CONCAT44(0x100,(int)local_50);
          FUN_14497ddce(local_70,uVar6 & 0xffffffff);
          iVar15 = (int)local_50 + iVar18;
        }
        iVar19 = iVar15 + 0x1f;
        if (-1 < iVar15) {
          iVar19 = iVar15;
        }
        local_50 = CONCAT44(local_50._4_4_,iVar15);
        if (iVar15 % 0x20 != 0) {
          bVar14 = -(char)(iVar15 % 0x20);
          local_70[iVar19 >> 5] = (local_70[iVar19 >> 5] << (bVar14 & 0x1f)) >> (bVar14 & 0x1f);
        }
      }
      else {
        iVar19 = (int)local_50 + 0x1e;
        if (-1 < (int)local_50 + -1) {
          iVar19 = (int)local_50 + -1;
        }
        if (iVar19 >> 5 != (uint)((ushort)local_188 >> 5)) goto LAB_1411bf167;
        local_50 = CONCAT44(local_50._4_4_,iVar15);
      }
      FUN_1447c45ca(local_70,uVar6 & 0xffffffff,iVar18,0);
    }
    local_70[uVar3 >> 5] = local_70[uVar3 >> 5] | 1 << ((byte)uVar9 & 0x1f);
    lVar13 = 0;
    bVar7 = true;
    local_200 = param_1;
    do {
      bVar20 = bVar7;
      uVar6 = local_50;
      uVar3 = *(ushort *)((longlong)&local_188 + lVar13 * 2 + 2);
      if (uVar3 != 0xffff) {
        iVar15 = uVar3 + 1;
        iVar18 = iVar15 - (int)local_50;
        if (iVar18 != 0 && (int)local_50 <= iVar15) {
          if ((int)local_50 == 0) {
LAB_1411bf226:
            if (local_50._4_4_ <= (int)(uint)uVar3) {
              local_50 = CONCAT44(0x100,(int)local_50);
              FUN_14497ddce(local_70,uVar6 & 0xffffffff);
              iVar15 = (int)local_50 + iVar18;
            }
            iVar19 = iVar15 + 0x1f;
            if (-1 < iVar15) {
              iVar19 = iVar15;
            }
            local_50 = CONCAT44(local_50._4_4_,iVar15);
            if (iVar15 % 0x20 != 0) {
              bVar14 = -(char)(iVar15 % 0x20);
              local_70[iVar19 >> 5] = (local_70[iVar19 >> 5] << (bVar14 & 0x1f)) >> (bVar14 & 0x1f);
            }
          }
          else {
            iVar19 = (int)local_50 + 0x1e;
            if (-1 < (int)local_50 + -1) {
              iVar19 = (int)local_50 + -1;
            }
            if (iVar19 >> 5 != (uint)(uVar3 >> 5)) goto LAB_1411bf226;
            local_50 = CONCAT44(local_50._4_4_,iVar15);
          }
          FUN_1447c45ca(local_70,uVar6 & 0xffffffff,iVar18,0);
        }
        local_70[uVar3 >> 5] = local_70[uVar3 >> 5] | 1 << ((byte)uVar3 & 0x1f);
      }
      uVar6 = local_50;
      uVar5 = uStack_184;
      lVar10 = local_208;
      lVar13 = 1;
      bVar7 = false;
    } while (bVar20);
    uVar3 = uStack_184._2_2_;
    iVar15 = uStack_184._2_2_ + 1;
    iVar18 = iVar15 - (int)local_50;
    if (iVar18 != 0 && (int)local_50 <= iVar15) {
      if ((int)local_50 == 0) {
LAB_1411bf2ee:
        if (local_50._4_4_ <= (int)(uint)uStack_184._2_2_) {
          local_50 = CONCAT44(0x100,(int)local_50);
          FUN_14497ddce(local_70,uVar6 & 0xffffffff);
          iVar15 = (int)local_50 + iVar18;
        }
        iVar19 = iVar15 + 0x1f;
        if (-1 < iVar15) {
          iVar19 = iVar15;
        }
        local_50 = CONCAT44(local_50._4_4_,iVar15);
        if (iVar15 % 0x20 != 0) {
          bVar14 = -(char)(iVar15 % 0x20);
          local_70[iVar19 >> 5] = (local_70[iVar19 >> 5] << (bVar14 & 0x1f)) >> (bVar14 & 0x1f);
        }
      }
      else {
        iVar19 = (int)local_50 + 0x1e;
        if (-1 < (int)local_50 + -1) {
          iVar19 = (int)local_50 + -1;
        }
        if (iVar19 >> 5 != (uint)(uStack_184._2_2_ >> 5)) goto LAB_1411bf2ee;
        local_50 = CONCAT44(local_50._4_4_,iVar15);
      }
      FUN_1447c45ca(local_70,uVar6 & 0xffffffff,iVar18,0);
    }
    local_70[uVar3 >> 5] = local_70[uVar3 >> 5] | 1 << ((byte)((uint)uVar5 >> 0x10) & 0x1f);
    local_1c0 = &local_1b8;
    local_1b8 = &local_188;
    local_1c8 = FUN_1417a5cf0;
    local_a0 = local_b0;
    (*(code *)(&PTR_LAB_14a475bc0)[local_b0])(local_a8);
    local_228 = &uStack_170;
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
      UNLOCK();
    }
    local_218 = local_98;
    local_220 = local_70;
    local_230 = &local_1c8;
    local_238 = local_a8;
    local_1d8 = plVar12 + 2;
    local_1d0 = plVar12;
    FUN_1406ac01c(param_2,&local_1f4,&local_1de,&local_1d8);
    param_1 = local_200;
    if (local_1f4 == -1) {
      if ((local_1de & 0x400) != 0) {
        FUN_145c71394(param_2,&local_1dc);
        local_1f4 = local_1dc;
        if (local_1dc != -1) goto LAB_1411bf42d;
      }
    }
    else {
LAB_1411bf42d:
      FUN_1407ce0e2(param_2,local_1f4,0xffffffff);
      FUN_1407cdf34(param_2,local_1f4,0xffffffff);
    }
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar12 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar12)(plVar12);
        LOCK();
        piVar2 = (int *)((longlong)plVar12 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
        }
      }
    }
  }
  if (CONCAT44(iStack_11c,local_120) != 0) {
    FUN_1400020a8();
  }
  local_1a8 = *(undefined2 *)(lVar11 + 0xfa);
  local_1a6 = (ulonglong)*(ushort *)(lVar11 + 0xf6) << 0x10 |
              (ulonglong)*(uint *)(lVar11 + 0xee) << 0x20 | (ulonglong)*(ushort *)(lVar11 + 0xf8);
  local_19e._0_8_ = *(undefined8 *)(lVar10 + 0xbc);
  local_193 = 0;
  local_190 = 0x6ff;
  local_18c = 0;
  uVar3 = *(ushort *)(lVar10 + 0x5a);
  FUN_1411bfd6a(&local_188);
  iVar15 = local_120;
  iVar18 = uVar3 + 1;
  iVar19 = iVar18 - local_120;
  if (iVar19 != 0 && local_120 <= iVar18) {
    if (local_120 == 0) {
LAB_1411bf511:
      if (iStack_11c <= (int)(uint)uVar3) {
        iStack_11c = 0x100;
        FUN_14497ddce(local_140,local_120);
        iVar18 = local_120 + iVar19;
      }
      iVar17 = iVar18 + 0x1f;
      if (-1 < iVar18) {
        iVar17 = iVar18;
      }
      local_120 = iVar18;
      iVar18 = local_120;
      if (iVar18 % 0x20 != 0) {
        bVar14 = -(char)(iVar18 % 0x20);
        local_140[iVar17 >> 5] = (local_140[iVar17 >> 5] << (bVar14 & 0x1f)) >> (bVar14 & 0x1f);
        iVar18 = local_120;
      }
    }
    else {
      iVar17 = local_120 + 0x1e;
      if (-1 < local_120 + -1) {
        iVar17 = local_120 + -1;
      }
      if (iVar17 >> 5 != (uint)(uVar3 >> 5)) goto LAB_1411bf511;
    }
    local_120 = iVar18;
    FUN_1447c45ca(local_140,iVar15,iVar19,0);
  }
  local_140[uVar3 >> 5] = local_140[uVar3 >> 5] | 1 << ((byte)uVar3 & 0x1f);
  uStack_170 = *(uint *)(*(longlong *)(param_1 + 0x28) + 0x294);
  uStack_174._0_2_ =
       CONCAT11(uStack_174._1_1_ & 0xfe | (uStack_170 & 0xfffffeff) == 1,(undefined1)uStack_174);
  local_1de = (ushort)uStack_174 & 0xfdff;
  local_b8 = FUN_140db362a;
  local_b0 = 3;
  if (((ushort)local_188 == -1) ||
     (cVar8 = FUN_1411bfcc4(&local_188,*(longlong *)(param_1 + 0x28) + 0x28), cVar8 == '\0'))
  goto LAB_1411bfa74;
  plVar12 = (longlong *)FUN_14001cc68(0x40,0x10);
  plVar12[1] = (longlong)&DAT_100000001;
  *plVar12 = (longlong)&PTR_FUN_14a4d8770;
  plVar12[2] = (longlong)&PTR_FUN_14a4d8788;
  *(uint *)((longlong)plVar12 + 0x1c) = local_188;
  *(undefined4 *)(plVar12 + 4) = uStack_184;
  *(undefined4 *)((longlong)plVar12 + 0x24) = uStack_180;
  *(uint *)(plVar12 + 5) = uStack_17c;
  *(undefined4 *)((longlong)plVar12 + 0x2c) = local_178;
  *(undefined4 *)(plVar12 + 6) = uStack_174;
  *(uint *)((longlong)plVar12 + 0x34) = uStack_170;
  *(undefined4 *)(plVar12 + 7) = uStack_16c;
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
    UNLOCK();
    LOCK();
    plVar1 = plVar12 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar12)(plVar12);
      LOCK();
      piVar2 = (int *)((longlong)plVar12 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
      }
    }
  }
  local_50 = 0;
  uVar9 = local_e8[0] + 0x1fU & 0xffffffe0;
  if (0 < (int)uVar9) {
    uVar16 = 0x100;
    if (0x100 < uVar9) {
      uVar16 = uVar9;
    }
    local_50 = (ulonglong)uVar16 << 0x20;
    FUN_14497ddce(local_70,0);
  }
  local_50 = CONCAT44(local_50._4_4_,local_e8[0]);
  if (local_e8[0] != 0) {
    memcpy(local_70,local_108,(ulonglong)(local_e8[0] + 0x1fU >> 3 & 0xfffffffc));
  }
  local_78 = 0;
  uVar9 = local_c0 + 0x1fU & 0xffffffe0;
  if (0 < (int)uVar9) {
    uVar16 = 0x100;
    if (0x100 < uVar9) {
      uVar16 = uVar9;
    }
    local_78 = (ulonglong)uVar16 << 0x20;
    FUN_14497ddce(local_98,0);
  }
  local_78 = CONCAT44(local_78._4_4_,local_c0);
  if (local_c0 != 0) {
    memcpy(local_98,local_e0,(ulonglong)(local_c0 + 0x1fU >> 3 & 0xfffffffc));
  }
  uVar6 = local_50;
  iVar15 = (local_188 & 0xffff) + 1;
  iVar18 = iVar15 - (int)local_50;
  if (iVar18 != 0 && (int)local_50 <= iVar15) {
    if ((int)local_50 == 0) {
LAB_1411bf76b:
      if (local_50._4_4_ <= (int)(local_188 & 0xffff)) {
        local_50 = CONCAT44(0x100,(int)local_50);
        FUN_14497ddce(local_70,uVar6 & 0xffffffff);
        iVar15 = (int)local_50 + iVar18;
      }
      iVar19 = iVar15 + 0x1f;
      if (-1 < iVar15) {
        iVar19 = iVar15;
      }
      local_50 = CONCAT44(local_50._4_4_,iVar15);
      if (iVar15 % 0x20 != 0) {
        bVar14 = -(char)(iVar15 % 0x20);
        local_70[iVar19 >> 5] = (local_70[iVar19 >> 5] << (bVar14 & 0x1f)) >> (bVar14 & 0x1f);
      }
    }
    else {
      iVar19 = (int)local_50 + 0x1e;
      if (-1 < (int)local_50 + -1) {
        iVar19 = (int)local_50 + -1;
      }
      if (iVar19 >> 5 != (uint)((ushort)local_188 >> 5)) goto LAB_1411bf76b;
      local_50 = CONCAT44(local_50._4_4_,iVar15);
    }
    FUN_1447c45ca(local_70,uVar6 & 0xffffffff,iVar18,0);
  }
  local_70[(ushort)local_188 >> 5] =
       local_70[(ushort)local_188 >> 5] | 1 << ((byte)local_188 & 0x1f);
  lVar10 = 1;
  do {
    uVar6 = local_50;
    uVar3 = *(ushort *)((longlong)&local_188 + lVar10 * 2);
    if (uVar3 != 0xffff) {
      iVar15 = uVar3 + 1;
      iVar18 = iVar15 - (int)local_50;
      if (iVar18 != 0 && (int)local_50 <= iVar15) {
        if ((int)local_50 == 0) {
LAB_1411bf833:
          if (local_50._4_4_ <= (int)(uint)uVar3) {
            local_50 = CONCAT44(0x100,(int)local_50);
            FUN_14497ddce(local_70,uVar6 & 0xffffffff);
            iVar15 = (int)local_50 + iVar18;
          }
          iVar19 = iVar15 + 0x1f;
          if (-1 < iVar15) {
            iVar19 = iVar15;
          }
          local_50 = CONCAT44(local_50._4_4_,iVar15);
          if (iVar15 % 0x20 != 0) {
            bVar14 = -(char)(iVar15 % 0x20);
            local_70[iVar19 >> 5] = (local_70[iVar19 >> 5] << (bVar14 & 0x1f)) >> (bVar14 & 0x1f);
          }
        }
        else {
          iVar19 = (int)local_50 + 0x1e;
          if (-1 < (int)local_50 + -1) {
            iVar19 = (int)local_50 + -1;
          }
          if (iVar19 >> 5 != (uint)(uVar3 >> 5)) goto LAB_1411bf833;
          local_50 = CONCAT44(local_50._4_4_,iVar15);
        }
        FUN_1447c45ca(local_70,uVar6 & 0xffffffff,iVar18,0);
      }
      local_70[uVar3 >> 5] = local_70[uVar3 >> 5] | 1 << ((byte)uVar3 & 0x1f);
    }
    lVar10 = lVar10 + 1;
  } while (lVar10 != 5);
  lVar10 = 5;
  do {
    uVar6 = local_50;
    uVar3 = *(ushort *)((longlong)&local_188 + lVar10 * 2);
    if (uVar3 != 0xffff) {
      iVar15 = uVar3 + 1;
      iVar18 = iVar15 - (int)local_50;
      if (iVar18 != 0 && (int)local_50 <= iVar15) {
        if ((int)local_50 == 0) {
LAB_1411bf908:
          if (local_50._4_4_ <= (int)(uint)uVar3) {
            local_50 = CONCAT44(0x100,(int)local_50);
            FUN_14497ddce(local_70,uVar6 & 0xffffffff);
            iVar15 = (int)local_50 + iVar18;
          }
          iVar19 = iVar15 + 0x1f;
          if (-1 < iVar15) {
            iVar19 = iVar15;
          }
          local_50 = CONCAT44(local_50._4_4_,iVar15);
          if (iVar15 % 0x20 != 0) {
            bVar14 = -(char)(iVar15 % 0x20);
            local_70[iVar19 >> 5] = (local_70[iVar19 >> 5] << (bVar14 & 0x1f)) >> (bVar14 & 0x1f);
          }
        }
        else {
          iVar19 = (int)local_50 + 0x1e;
          if (-1 < (int)local_50 + -1) {
            iVar19 = (int)local_50 + -1;
          }
          if (iVar19 >> 5 != (uint)(uVar3 >> 5)) goto LAB_1411bf908;
          local_50 = CONCAT44(local_50._4_4_,iVar15);
        }
        FUN_1447c45ca(local_70,uVar6 & 0xffffffff,iVar18,0);
      }
      local_70[uVar3 >> 5] = local_70[uVar3 >> 5] | 1 << ((byte)uVar3 & 0x1f);
    }
    lVar10 = lVar10 + 1;
  } while (lVar10 != 9);
  local_1c0 = &local_1b8;
  local_1b8 = &local_188;
  local_1c8 = (code *)&LAB_14589aa54;
  local_a0 = local_b0;
  (*(code *)(&PTR_LAB_14a475bc0)[local_b0])(local_a8);
  local_228 = local_168;
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
    UNLOCK();
  }
  local_218 = local_98;
  local_230 = &local_1c8;
  local_238 = local_a8;
  local_220 = local_70;
  local_1d8 = plVar12 + 2;
  local_1d0 = plVar12;
  FUN_1406ac01c(param_2,&local_1f4,&local_1de,&local_1d8);
  if (local_1f4 == -1) {
    if ((local_1de & 0x400) != 0) {
      FUN_145c71394(param_2,&local_1dc);
      local_1f4 = local_1dc;
      if (local_1dc != -1) goto LAB_1411bfc9b;
    }
  }
  else {
LAB_1411bfc9b:
    FUN_1407ce0e2(param_2,local_1f4,0xffffffff);
    FUN_1407cdf34(param_2,local_1f4,0xffffffff);
  }
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar12 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar12)(plVar12);
      LOCK();
      piVar2 = (int *)((longlong)plVar12 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
      }
    }
  }
LAB_1411bfa74:
  if (local_118 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_258) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1411bfcc0 FUN_1411bfcc0 body=1 status=ok
// SIG undefined FUN_1411bfcc0(void)

void FUN_1411bfcc0(void)

{
  return;
}



// FUNCTION 1411bfcc2 FUN_1411bfcc2 body=1 status=ok
// SIG undefined FUN_1411bfcc2(void)

void FUN_1411bfcc2(void)

{
  return;
}



// FUNCTION 1411bfcc4 FUN_1411bfcc4 body=53 status=ok
// SIG undefined FUN_1411bfcc4(void)

undefined4 FUN_1411bfcc4(ushort *param_1,undefined8 param_2)

{
  ushort uVar1;
  uint uVar2;
  undefined4 uVar3;
  longlong lVar4;
  
  uVar1 = *param_1;
  lVar4 = FUN_14482820e(param_2);
  if ((uVar1 == 0xffff) ||
     (*(uint *)(lVar4 + 0x20) == (uint)uVar1 || (int)*(uint *)(lVar4 + 0x20) < (int)(uint)uVar1)) {
    uVar3 = 0;
  }
  else {
    uVar2 = *(uint *)(lVar4 + (ulonglong)(uVar1 >> 5) * 4);
    uVar3 = CONCAT31((int3)(uVar2 >> 8),(uVar2 >> (uVar1 & 0x1f) & 1) != 0);
  }
  return uVar3;
}



// FUNCTION 1411bfcfa FUN_1411bfcfa body=112 status=ok
// SIG undefined FUN_1411bfcfa(void)

undefined8 FUN_1411bfcfa(ushort *param_1,undefined8 param_2)

{
  ushort uVar1;
  longlong lVar2;
  ulonglong uVar3;
  bool bVar4;
  
  uVar1 = *param_1;
  lVar2 = FUN_14482820e(param_2);
  if ((uVar1 == 0xffff) ||
     (*(uint *)(lVar2 + 0x20) == (uint)uVar1 || (int)*(uint *)(lVar2 + 0x20) < (int)(uint)uVar1)) {
    uVar3 = 0;
  }
  else {
    uVar3 = (ulonglong)
            CONCAT11((char)(uVar1 >> 8),
                     (*(uint *)(lVar2 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0);
  }
  uVar1 = param_1[3];
  lVar2 = FUN_14482820e(param_2);
  if ((uVar1 == 0xffff) ||
     (*(uint *)(lVar2 + 0x20) == (uint)uVar1 || (int)*(uint *)(lVar2 + 0x20) < (int)(uint)uVar1)) {
    bVar4 = false;
  }
  else {
    bVar4 = (*(uint *)(lVar2 + (ulonglong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0;
  }
  return CONCAT71((int7)(uVar3 >> 8),(byte)uVar3 & bVar4);
}



// FUNCTION 1411bfd6a FUN_1411bfd6a body=707 status=ok
// SIG undefined FUN_1411bfd6a(void)

ushort * FUN_1411bfd6a(ushort *param_1,undefined8 *param_2)

{
  ushort *puVar1;
  ushort uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  int iVar9;
  byte bVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  undefined1 auStack_98 [40];
  uint local_70 [8];
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar7 = param_2[1];
  uVar3 = *(undefined4 *)(param_2 + 2);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x14);
  uVar5 = *(undefined4 *)(param_2 + 3);
  uVar6 = *(undefined4 *)((longlong)param_2 + 0x1c);
  *(undefined8 *)param_1 = *param_2;
  *(undefined8 *)(param_1 + 4) = uVar7;
  *(undefined4 *)(param_1 + 8) = uVar3;
  *(undefined4 *)(param_1 + 10) = uVar4;
  *(undefined4 *)(param_1 + 0xc) = uVar5;
  *(undefined4 *)(param_1 + 0xe) = uVar6;
  puVar1 = param_1 + 0x10;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0x100;
  param_1[0x23] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0x100;
  param_1[0x37] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0x100;
  param_1[0x53] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0x100;
  param_1[0x67] = 0;
  uVar2 = *param_1;
  iVar12 = uVar2 + 1;
  iVar11 = iVar12;
  if (0xff < uVar2) {
    FUN_14497ddce(puVar1,0);
    iVar11 = *(int *)(param_1 + 0x20) + iVar12;
  }
  iVar9 = iVar11 + 0x1f;
  if (-1 < iVar11) {
    iVar9 = iVar11;
  }
  *(int *)(param_1 + 0x20) = iVar11;
  if (iVar11 % 0x20 != 0) {
    bVar10 = -(char)(iVar11 % 0x20);
    *(uint *)(puVar1 + (longlong)(iVar9 >> 5) * 2) =
         (uint)(*(int *)(puVar1 + (longlong)(iVar9 >> 5) * 2) << (bVar10 & 0x1f)) >> (bVar10 & 0x1f)
    ;
  }
  FUN_1447c45ca(puVar1,0,iVar12,0);
  *(uint *)(puVar1 + (ulonglong)(uVar2 >> 5) * 2) =
       *(uint *)(puVar1 + (ulonglong)(uVar2 >> 5) * 2) | 1 << ((byte)uVar2 & 0x1f);
  local_50 = 0x10000000000;
  lVar13 = 1;
  do {
    uVar8 = local_50;
    uVar2 = param_1[lVar13];
    if (uVar2 != 0xffff) {
      iVar11 = uVar2 + 1;
      iVar12 = iVar11 - (int)local_50;
      if (iVar12 != 0 && (int)local_50 <= iVar11) {
        if ((int)local_50 == 0) {
LAB_1411bfe6d:
          if (local_50._4_4_ <= (int)(uint)uVar2) {
            local_50 = CONCAT44(0x100,(int)local_50);
            FUN_14497ddce(local_70,uVar8 & 0xffffffff);
            iVar11 = (int)local_50 + iVar12;
          }
          iVar9 = iVar11 + 0x1f;
          if (-1 < iVar11) {
            iVar9 = iVar11;
          }
          local_50 = CONCAT44(local_50._4_4_,iVar11);
          if (iVar11 % 0x20 != 0) {
            bVar10 = -(char)(iVar11 % 0x20);
            local_70[iVar9 >> 5] = (local_70[iVar9 >> 5] << (bVar10 & 0x1f)) >> (bVar10 & 0x1f);
          }
        }
        else {
          iVar9 = (int)local_50 + 0x1e;
          if (-1 < (int)local_50 + -1) {
            iVar9 = (int)local_50 + -1;
          }
          if (iVar9 >> 5 != (uint)(uVar2 >> 5)) goto LAB_1411bfe6d;
          local_50 = CONCAT44(local_50._4_4_,iVar11);
        }
        FUN_1447c45ca(local_70,uVar8 & 0xffffffff,iVar12,0);
      }
      local_70[uVar2 >> 5] = local_70[uVar2 >> 5] | 1 << ((byte)uVar2 & 0x1f);
    }
    lVar13 = lVar13 + 1;
  } while (lVar13 != 5);
  FUN_140dad9c2(puVar1,local_70,2);
  local_50 = 0x10000000000;
  lVar13 = 5;
  do {
    uVar8 = local_50;
    uVar2 = param_1[lVar13];
    if (uVar2 != 0xffff) {
      iVar11 = uVar2 + 1;
      iVar12 = iVar11 - (int)local_50;
      if (iVar12 != 0 && (int)local_50 <= iVar11) {
        if ((int)local_50 == 0) {
LAB_1411bff37:
          if (local_50._4_4_ <= (int)(uint)uVar2) {
            local_50 = CONCAT44(0x100,(int)local_50);
            FUN_14497ddce(local_70,uVar8 & 0xffffffff);
            iVar11 = (int)local_50 + iVar12;
          }
          iVar9 = iVar11 + 0x1f;
          if (-1 < iVar11) {
            iVar9 = iVar11;
          }
          local_50 = CONCAT44(local_50._4_4_,iVar11);
          if (iVar11 % 0x20 != 0) {
            bVar10 = -(char)(iVar11 % 0x20);
            local_70[iVar9 >> 5] = (local_70[iVar9 >> 5] << (bVar10 & 0x1f)) >> (bVar10 & 0x1f);
          }
        }
        else {
          iVar9 = (int)local_50 + 0x1e;
          if (-1 < (int)local_50 + -1) {
            iVar9 = (int)local_50 + -1;
          }
          if (iVar9 >> 5 != (uint)(uVar2 >> 5)) goto LAB_1411bff37;
          local_50 = CONCAT44(local_50._4_4_,iVar11);
        }
        FUN_1447c45ca(local_70,uVar8 & 0xffffffff,iVar12,0);
      }
      local_70[uVar2 >> 5] = local_70[uVar2 >> 5] | 1 << ((byte)uVar2 & 0x1f);
    }
    lVar13 = lVar13 + 1;
    if (lVar13 == 9) {
      FUN_140dad9c2(puVar1,local_70,2);
      if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
        return param_1;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
  } while( true );
}



// FUNCTION 1411c002e FUN_1411c002e body=860 status=ok
// SIG undefined FUN_1411c002e(void)

ushort * FUN_1411c002e(undefined8 *param_1,ushort *param_2,undefined8 *param_3)

{
  ushort *puVar1;
  ushort uVar2;
  ushort *puVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  bool bVar6;
  longlong lVar7;
  byte bVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  ushort *puVar14;
  undefined1 auStack_98 [40];
  uint local_70 [8];
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar4 = param_1[1];
  *(undefined8 *)param_2 = *param_1;
  *(undefined8 *)(param_2 + 4) = uVar4;
  *(undefined4 *)(param_2 + 8) = *(undefined4 *)(param_1 + 2);
  puVar14 = param_2 + 0xc;
  param_2[0x1c] = 0;
  param_2[0x1d] = 0;
  param_2[0x1e] = 0x100;
  param_2[0x1f] = 0;
  param_2[0x30] = 0;
  param_2[0x31] = 0;
  param_2[0x32] = 0x100;
  param_2[0x33] = 0;
  param_2[0x4c] = 0;
  param_2[0x4d] = 0;
  param_2[0x4e] = 0x100;
  param_2[0x4f] = 0;
  param_2[0x34] = 0;
  param_2[0x35] = 0;
  param_2[0x36] = 0;
  param_2[0x37] = 0;
  param_2[0x38] = 0;
  param_2[0x39] = 0;
  param_2[0x3a] = 0;
  param_2[0x3b] = 0;
  param_2[0x60] = 0;
  param_2[0x61] = 0;
  param_2[0x62] = 0x100;
  param_2[99] = 0;
  uVar2 = *param_2;
  iVar11 = uVar2 + 1;
  iVar9 = iVar11;
  if (0xff < uVar2) {
    FUN_14497ddce(puVar14,0);
    iVar9 = *(int *)(param_2 + 0x1c) + iVar11;
  }
  iVar12 = iVar9 + 0x1f;
  if (-1 < iVar9) {
    iVar12 = iVar9;
  }
  *(int *)(param_2 + 0x1c) = iVar9;
  if (iVar9 % 0x20 != 0) {
    bVar8 = -(char)(iVar9 % 0x20);
    *(uint *)(puVar14 + (longlong)(iVar12 >> 5) * 2) =
         (uint)(*(int *)(puVar14 + (longlong)(iVar12 >> 5) * 2) << (bVar8 & 0x1f)) >> (bVar8 & 0x1f)
    ;
  }
  FUN_1447c45ca(puVar14,0,iVar11,0);
  *(uint *)(param_2 + (ulonglong)(uVar2 >> 5) * 2 + 0xc) =
       *(uint *)(param_2 + (ulonglong)(uVar2 >> 5) * 2 + 0xc) | 1 << ((byte)uVar2 & 0x1f);
  local_50 = 0x10000000000;
  lVar7 = 0;
  bVar6 = true;
  do {
    bVar13 = bVar6;
    uVar5 = local_50;
    uVar2 = param_2[lVar7 + 1];
    if (uVar2 != 0xffff) {
      iVar9 = uVar2 + 1;
      iVar11 = iVar9 - (int)local_50;
      if (iVar11 != 0 && (int)local_50 <= iVar9) {
        if ((int)local_50 == 0) {
LAB_1411c013b:
          if (local_50._4_4_ <= (int)(uint)uVar2) {
            local_50 = CONCAT44(0x100,(int)local_50);
            FUN_14497ddce(local_70,uVar5 & 0xffffffff);
            iVar9 = (int)local_50 + iVar11;
          }
          iVar12 = iVar9 + 0x1f;
          if (-1 < iVar9) {
            iVar12 = iVar9;
          }
          local_50 = CONCAT44(local_50._4_4_,iVar9);
          if (iVar9 % 0x20 != 0) {
            bVar8 = -(char)(iVar9 % 0x20);
            local_70[iVar12 >> 5] = (local_70[iVar12 >> 5] << (bVar8 & 0x1f)) >> (bVar8 & 0x1f);
          }
        }
        else {
          iVar12 = (int)local_50 + 0x1e;
          if (-1 < (int)local_50 + -1) {
            iVar12 = (int)local_50 + -1;
          }
          if (iVar12 >> 5 != (uint)(uVar2 >> 5)) goto LAB_1411c013b;
          local_50 = CONCAT44(local_50._4_4_,iVar9);
        }
        FUN_1447c45ca(local_70,uVar5 & 0xffffffff,iVar11,0);
      }
      local_70[uVar2 >> 5] = local_70[uVar2 >> 5] | 1 << ((byte)uVar2 & 0x1f);
    }
    lVar7 = 1;
    bVar6 = false;
  } while (bVar13);
  FUN_140dad9c2(puVar14,local_70,2);
  uVar2 = param_2[3];
  iVar11 = uVar2 + 1;
  iVar9 = *(int *)(param_2 + 0x1c);
  iVar12 = iVar11 - iVar9;
  if (iVar12 == 0 || iVar11 < iVar9) goto LAB_1411c0236;
  if (iVar9 == 0) {
LAB_1411c01f6:
    if (*(int *)(param_2 + 0x1e) <= (int)(uint)uVar2) {
      param_2[0x1e] = 0x100;
      param_2[0x1f] = 0;
      FUN_14497ddce(puVar14,iVar9);
      iVar11 = *(int *)(param_2 + 0x1c) + iVar12;
    }
    iVar10 = iVar11 + 0x1f;
    if (-1 < iVar11) {
      iVar10 = iVar11;
    }
    *(int *)(param_2 + 0x1c) = iVar11;
    if (iVar11 % 0x20 != 0) {
      bVar8 = -(char)(iVar11 % 0x20);
      *(uint *)(puVar14 + (longlong)(iVar10 >> 5) * 2) =
           (uint)(*(int *)(puVar14 + (longlong)(iVar10 >> 5) * 2) << (bVar8 & 0x1f)) >>
           (bVar8 & 0x1f);
    }
  }
  else {
    iVar10 = iVar9 + 0x1e;
    if (-1 < iVar9 + -1) {
      iVar10 = iVar9 + -1;
    }
    if (iVar10 >> 5 != (uint)(uVar2 >> 5)) goto LAB_1411c01f6;
    *(int *)(param_2 + 0x1c) = iVar11;
  }
  FUN_1447c45ca(puVar14,iVar9,iVar12,0);
LAB_1411c0236:
  *(uint *)(param_2 + (ulonglong)(uVar2 >> 5) * 2 + 0xc) =
       *(uint *)(param_2 + (ulonglong)(uVar2 >> 5) * 2 + 0xc) | 1 << ((byte)uVar2 & 0x1f);
  puVar14 = (ushort *)*param_3;
  puVar3 = (ushort *)param_3[1];
  if (puVar14 != puVar3) {
    puVar1 = param_2 + 0x20;
    do {
      uVar2 = *puVar14;
      iVar11 = uVar2 + 1;
      iVar9 = *(int *)(param_2 + 0x30);
      iVar12 = iVar11 - iVar9;
      if (iVar12 != 0 && iVar9 <= iVar11) {
        if (iVar9 == 0) {
LAB_1411c028d:
          if (*(int *)(param_2 + 0x32) <= (int)(uint)uVar2) {
            param_2[0x32] = 0x100;
            param_2[0x33] = 0;
            FUN_14497ddce(puVar1,iVar9);
            iVar11 = *(int *)(param_2 + 0x30) + iVar12;
          }
          iVar10 = iVar11 + 0x1f;
          if (-1 < iVar11) {
            iVar10 = iVar11;
          }
          *(int *)(param_2 + 0x30) = iVar11;
          if (iVar11 % 0x20 != 0) {
            bVar8 = -(char)(iVar11 % 0x20);
            *(uint *)(puVar1 + (longlong)(iVar10 >> 5) * 2) =
                 (uint)(*(int *)(puVar1 + (longlong)(iVar10 >> 5) * 2) << (bVar8 & 0x1f)) >>
                 (bVar8 & 0x1f);
          }
        }
        else {
          iVar10 = iVar9 + 0x1e;
          if (-1 < iVar9 + -1) {
            iVar10 = iVar9 + -1;
          }
          if (iVar10 >> 5 != (uint)(uVar2 >> 5)) goto LAB_1411c028d;
          *(int *)(param_2 + 0x30) = iVar11;
        }
        FUN_1447c45ca(puVar1,iVar9,iVar12,0);
      }
      *(uint *)(puVar1 + (ulonglong)(uVar2 >> 5) * 2) =
           *(uint *)(puVar1 + (ulonglong)(uVar2 >> 5) * 2) | 1 << ((byte)uVar2 & 0x1f);
      puVar14 = puVar14 + 1;
    } while (puVar14 != puVar3);
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1411c038c FUN_1411c038c body=169 status=ok
// SIG undefined FUN_1411c038c(void)

undefined8 FUN_1411c038c(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  
  cVar2 = (**(code **)(*param_1 + 0x10))();
  if (cVar2 == '\0') {
    cVar2 = (**(code **)(param_1[-7] + 0x260))(param_1 + -7,param_3,param_4,0);
    if (cVar2 == '\0') {
      lVar1 = param_1[9];
      if (lVar1 == 0) {
LAB_1411c0401:
                    /* WARNING: Could not recover jumptable at 0x0001411c0426. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar3 = (**(code **)(*(longlong *)(DAT_14cb0d2b0 + 0x28) + 8))
                          (DAT_14cb0d2b0 + 0x28,param_2,param_3,param_4);
        return uVar3;
      }
      cVar2 = (**(code **)(*(longlong *)(lVar1 + 0x28) + 8))(lVar1 + 0x28,param_2,param_3,param_4);
      if (cVar2 == '\0') {
        cVar2 = (**(code **)(*(longlong *)param_1[9] + 0x260))
                          ((longlong *)param_1[9],param_3,param_4,0);
        if (cVar2 == '\0') goto LAB_1411c0401;
      }
    }
  }
  return 1;
}



// FUNCTION 1411c0436 caseD_52 body=20 status=ok
// SIG undefined caseD_52(void)

void switchD_143c3d4dc::caseD_52(void)

{
  FUN_1411c044a();
  return;
}



// FUNCTION 1411c044a FUN_1411c044a body=3591 status=ok
// SIG undefined FUN_1411c044a(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_1411c044a(longlong *param_1,wchar_t *param_2,undefined8 param_3,longlong param_4,
                       byte param_5)

{
  ushort uVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 uVar8;
  wchar_t *pwVar9;
  ulonglong uVar10;
  longlong *plVar11;
  undefined1 *puVar12;
  undefined8 *puVar13;
  int iVar14;
  longlong lVar15;
  longlong *plVar16;
  undefined2 *puVar17;
  undefined *puVar18;
  wchar_t *pwVar19;
  undefined7 uVar20;
  bool bVar21;
  undefined8 uStack_140;
  undefined8 local_138;
  longlong *local_130;
  longlong *local_128;
  ulonglong local_120;
  undefined1 *local_118;
  longlong *local_110;
  longlong local_108;
  undefined1 local_100 [16];
  longlong local_f0;
  longlong local_e8 [2];
  longlong *local_d8 [2];
  longlong local_c8;
  ulonglong uStack_c0;
  wchar_t *local_b8;
  undefined8 uStack_b0;
  longlong local_a0;
  undefined2 *local_98;
  undefined8 uStack_90;
  wchar_t *local_88;
  wchar_t *local_80;
  undefined8 local_78;
  longlong *local_70;
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)&local_b8;
  local_98 = (undefined2 *)0x0;
  uStack_90 = 0;
  plVar6 = (longlong *)0x0;
  local_88 = param_2;
  cVar3 = FUN_140ffc744(&local_88,&local_98,1,0);
  puVar13 = &local_138;
  if (cVar3 != '\0') {
    puVar17 = local_98;
    if ((int)uStack_90 == 0) {
      puVar17 = &DAT_149dfb77a;
    }
    plVar6 = (longlong *)0x0;
    FUN_1446f470e(&local_a0,puVar17,0);
    puVar13 = &local_138;
    if (local_a0 != 0) {
      plVar5 = (longlong *)FUN_1400796d0(param_1[2],local_a0,1);
      puVar13 = &local_138;
      if ((plVar5 != (longlong *)0x0) &&
         (((*(byte *)((longlong)plVar5 + 0xb1) & 2) == 0 & (param_5 ^ 1)) == 0)) {
        plVar16 = (longlong *)0x0;
        plVar6 = plVar5;
        local_138 = param_3;
        do {
          for (plVar11 = (longlong *)plVar6[10]; plVar11 != (longlong *)0x0;
              plVar11 = (longlong *)plVar11[3]) {
            if ((~*(uint *)(plVar11[1] + 0x18) & 0x8001) == 0) {
              if ((*(uint *)(plVar11 + 7) & 0x480) == 0x80) {
LAB_1411c05c1:
                plVar16 = plVar11;
                plVar11 = plVar16 + 3;
                do {
                  for (plVar11 = (longlong *)*plVar11; plVar11 != (longlong *)0x0;
                      plVar11 = (longlong *)plVar11[3]) {
                    if ((~*(uint *)(plVar11[1] + 0x18) & 0x8001) == 0) {
                      if ((*(uint *)(plVar11 + 7) & 0x480) != 0x80) goto LAB_1411c0617;
                      goto LAB_1411c05c1;
                    }
                  }
                  plVar6 = (longlong *)(**(code **)(*plVar6 + 0x2b0))(plVar6);
                  plVar11 = plVar6 + 10;
                } while (plVar6 != (longlong *)0x0);
              }
              else {
                plVar16 = (longlong *)0x0;
              }
              goto LAB_1411c0617;
            }
          }
          plVar6 = (longlong *)(**(code **)(*plVar6 + 0x2b0))(plVar6);
        } while (plVar6 != (longlong *)0x0);
LAB_1411c0617:
        uVar1 = *(ushort *)((longlong)plVar5 + 0xb6);
        if ((ulonglong)uVar1 == 0) {
          puVar12 = (undefined1 *)0x0;
          puVar13 = &local_138;
        }
        else {
          lVar15 = (longlong)*(int *)((longlong)plVar5 + 0x5c);
          if (lVar15 < 0x11) {
            uStack_140 = 0x1411c0642;
            lVar15 = -(ulonglong)(uVar1 + 0x1e & 0xfffffff0);
            puVar12 = (undefined1 *)((longlong)&local_138 + lVar15);
            puVar13 = (undefined8 *)((longlong)&local_138 + lVar15);
          }
          else {
            uStack_140 = 0x1411c0661;
            lVar7 = -((ulonglong)(((uint)uVar1 + *(int *)((longlong)plVar5 + 0x5c)) - 1) + 0xf &
                     0xfffffffffffffff0);
            puVar12 = (undefined1 *)(-lVar15 & (longlong)&uStack_140 + lVar15 + lVar7 + 7);
            puVar13 = (undefined8 *)((longlong)&local_138 + lVar7);
          }
        }
        local_130 = param_1;
        local_108 = param_4;
        *(undefined8 *)((longlong)puVar13 + -0x28) = 0x1411c0681;
        memset(puVar12,0,(ulonglong)uVar1);
        plVar6 = plVar5;
        do {
          for (plVar11 = (longlong *)plVar6[10]; local_110 = plVar5, plVar11 != (longlong *)0x0;
              plVar11 = (longlong *)plVar11[3]) {
            if ((~*(uint *)(plVar11[1] + 0x18) & 0x8001) == 0) goto LAB_1411c06c7;
          }
          pcVar2 = *(code **)(*plVar6 + 0x2b0);
          *(undefined8 *)((longlong)puVar13 + -0x28) = 0x1411c06b9;
          plVar6 = (longlong *)(*pcVar2)(plVar6);
          lVar15 = local_108;
        } while (plVar6 != (longlong *)0x0);
        goto LAB_1411c0740;
      }
      plVar6 = (longlong *)0x0;
    }
  }
  goto LAB_1411c0563;
LAB_1411c06c7:
  lVar15 = local_108;
  if ((char)plVar11[7] < '\0') {
    if (((uint)plVar11[7] >> 9 & 1) == 0) {
      iVar14 = *(int *)((longlong)plVar11 + 0x44);
      pcVar2 = *(code **)(*plVar11 + 0x160);
      *(undefined8 *)((longlong)puVar13 + -0x28) = 0x1411c06ef;
      (*pcVar2)(plVar11,puVar12 + iVar14);
    }
    plVar11 = plVar11 + 3;
    do {
      for (plVar11 = (longlong *)*plVar11; plVar11 != (longlong *)0x0;
          plVar11 = (longlong *)plVar11[3]) {
        if ((~*(uint *)(plVar11[1] + 0x18) & 0x8001) == 0) goto LAB_1411c06c7;
      }
      pcVar2 = *(code **)(*plVar6 + 0x2b0);
      *(undefined8 *)((longlong)puVar13 + -0x28) = 0x1411c0728;
      plVar6 = (longlong *)(*pcVar2)(plVar6);
      plVar11 = plVar6 + 10;
      lVar15 = local_108;
    } while (plVar6 != (longlong *)0x0);
  }
LAB_1411c0740:
  plVar11 = (longlong *)local_110[10];
  while( true ) {
    if (plVar11 == (longlong *)0x0) goto LAB_1411c0764;
    plVar6 = (longlong *)plVar11[1];
    if ((~*(uint *)(plVar6 + 3) & 0x8001) == 0) break;
    plVar11 = (longlong *)plVar11[3];
  }
  if ((*(uint *)(plVar11 + 7) & 0x480) != 0x80) goto LAB_1411c117a;
  iVar14 = 0;
  local_120 = 0;
  local_128 = plVar5;
  local_118 = puVar12;
LAB_1411c07bb:
  if (iVar14 == 0 && lVar15 != 0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c951cc8) {
      *(undefined8 *)((longlong)puVar13 + -0x28) = 0x1411c0eb4;
      FUN_144b3d300(&DAT_14c951cc8);
      if (DAT_14c951cc8 == -1) {
        if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x110) < DAT_14c951a88) {
          *(undefined8 *)((longlong)puVar13 + -0x28) = 0x1411c105c;
          FUN_144b3d300(&DAT_14c951a88);
          if (DAT_14c951a88 == -1) {
            *(undefined8 *)((longlong)puVar13 + -0x28) = 0x1411c1076;
            uVar8 = FUN_140342cba();
            *(code **)((longlong)puVar13 + -8) = FUN_1468c7f1e;
            *(undefined8 *)((longlong)puVar13 + -0x10) = uVar8;
            *(undefined8 *)((longlong)puVar13 + -0x18) = 0;
            *(undefined8 *)((longlong)puVar13 + -0x20) = 0x8001;
            *(undefined8 *)((longlong)puVar13 + -0x48) = 0x1411c10b9;
            FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0);
            *(undefined8 *)((longlong)puVar13 + -0x28) = 0x1411c10c9;
            atexit(FUN_14280c819);
            *(undefined8 *)((longlong)puVar13 + -0x28) = 0x1411c10d5;
            _Init_thread_footer(&DAT_14c951a88);
          }
        }
        *(code **)((longlong)puVar13 + -8) = FUN_1468d96f0;
        *(undefined **)((longlong)puVar13 + -0x10) = &DAT_14c951a38;
        *(undefined8 *)((longlong)puVar13 + -0x18) = 0;
        *(undefined8 *)((longlong)puVar13 + -0x20) = 0x4008001;
        *(undefined8 *)((longlong)puVar13 + -0x48) = 0x1411c0f3e;
        FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
        *(undefined8 *)((longlong)puVar13 + -0x28) = 0x1411c0f4e;
        atexit(FUN_14281144d);
        *(undefined8 *)((longlong)puVar13 + -0x28) = 0x1411c0f5a;
        _Init_thread_footer(&DAT_14c951cc8);
        lVar15 = local_108;
      }
    }
    if (DAT_14c951c80 == 0) {
      bVar21 = plVar6 != (longlong *)0x0;
      if (plVar6 != (longlong *)&DAT_14c951c78 && bVar21) {
        do {
          plVar6 = (longlong *)plVar6[6];
          bVar21 = plVar6 != (longlong *)0x0;
          if (plVar6 == (longlong *)&DAT_14c951c78) break;
        } while (plVar6 != (longlong *)0x0);
      }
      if (bVar21) goto LAB_1411c0832;
      goto LAB_1411c0867;
    }
    if ((plVar6[3] & DAT_14c951c80) == 0) goto LAB_1411c0867;
LAB_1411c0832:
    lVar7 = plVar11[0xe];
    if ((DAT_14c950c29 == '\x01') && (lVar7 != 0)) {
      *(undefined8 *)((longlong)puVar13 + -0x28) = 0x1411c0e9b;
      FUN_1456cec3c(lVar7);
    }
    if ((*(int *)(*(longlong *)(lVar15 + 0x10) + 0x38) < *(int *)(lVar7 + 0x38)) ||
       (plVar6 = (longlong *)(lVar7 + 0x30),
       *(longlong **)
        (*(longlong *)(*(longlong *)(lVar15 + 0x10) + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8)
       != plVar6)) goto LAB_1411c0867;
    puVar12 = local_118 + *(int *)((longlong)plVar11 + 0x44);
    pcVar2 = *(code **)(*plVar11 + 0x1f0);
    *(undefined8 *)((longlong)puVar13 + -0x28) = 0x1411c09bc;
    (*pcVar2)(plVar11,puVar12,lVar15);
LAB_1411c0a6d:
    plVar11 = plVar11 + 3;
    do {
      for (plVar11 = (longlong *)*plVar11; plVar11 != (longlong *)0x0;
          plVar11 = (longlong *)plVar11[3]) {
        plVar6 = (longlong *)plVar11[1];
        if ((~*(uint *)(plVar6 + 3) & 0x8001) == 0) {
          iVar14 = iVar14 + 1;
          if ((*(uint *)(plVar11 + 7) & 0x480) != 0x80) goto LAB_1411c1170;
          goto LAB_1411c07bb;
        }
      }
      pcVar2 = *(code **)(*local_110 + 0x2b0);
      *(undefined8 *)((longlong)puVar13 + -0x28) = 0x1411c0aa2;
      local_110 = (longlong *)(*pcVar2)();
      plVar11 = local_110 + 10;
    } while (local_110 != (longlong *)0x0);
  }
  else {
LAB_1411c0867:
    pwVar19 = local_88;
    local_b8 = (wchar_t *)0x0;
    uStack_b0 = 0;
    *(undefined8 *)((longlong)puVar13 + -0x28) = 0x1411c0885;
    FUN_140ffc744(&local_88,&local_b8,1,0);
    if (plVar11 == plVar16) {
      puVar18 = (undefined *)plVar11[1];
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x110) < DAT_14c963e88) {
        *(undefined8 *)((longlong)puVar13 + -0x28) = 0x1411c0f80;
        FUN_144b3d300(&DAT_14c963e88);
        if (DAT_14c963e88 == -1) {
          if (*(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110) <
              DAT_14c951a88) {
            *(undefined8 *)((longlong)puVar13 + -0x28) = 0x1411c10ee;
            FUN_144b3d300(&DAT_14c951a88);
            if (DAT_14c951a88 == -1) {
              *(undefined8 *)((longlong)puVar13 + -0x28) = 0x1411c1108;
              uVar8 = FUN_140342cba();
              *(code **)((longlong)puVar13 + -8) = FUN_1468c7f1e;
              *(undefined8 *)((longlong)puVar13 + -0x10) = uVar8;
              *(undefined8 *)((longlong)puVar13 + -0x18) = 0;
              *(undefined8 *)((longlong)puVar13 + -0x20) = 0x8001;
              *(undefined8 *)((longlong)puVar13 + -0x48) = 0x1411c114b;
              FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0);
              *(undefined8 *)((longlong)puVar13 + -0x28) = 0x1411c115b;
              atexit(FUN_14280c819);
              *(undefined8 *)((longlong)puVar13 + -0x28) = 0x1411c1167;
              _Init_thread_footer(&DAT_14c951a88);
            }
          }
          *(code **)((longlong)puVar13 + -8) = FUN_140dafe7a;
          *(undefined **)((longlong)puVar13 + -0x10) = &DAT_14c951a38;
          *(undefined8 *)((longlong)puVar13 + -0x18) = 0;
          *(undefined8 *)((longlong)puVar13 + -0x20) = 0xc001;
          *(undefined8 *)((longlong)puVar13 + -0x48) = 0x1411c1000;
          FUN_14000176a(&DAT_14c963e38,L"FStrProperty",0x4000,0);
          *(undefined8 *)((longlong)puVar13 + -0x28) = 0x1411c1010;
          atexit(FUN_142829758);
          *(undefined8 *)((longlong)puVar13 + -0x28) = 0x1411c101c;
          _Init_thread_footer(&DAT_14c963e88);
        }
      }
      pwVar9 = local_88;
      lVar15 = local_108;
      if (DAT_14c963e40 == 0) {
        bVar21 = puVar18 != (undefined *)0x0;
        if (puVar18 != &DAT_14c963e38 && bVar21) {
          do {
            puVar18 = *(undefined **)(puVar18 + 0x30);
            bVar21 = puVar18 != (undefined *)0x0;
            if (puVar18 == &DAT_14c963e38) break;
          } while (puVar18 != (undefined *)0x0);
        }
        bVar21 = !bVar21;
      }
      else {
        bVar21 = (*(ulonglong *)(puVar18 + 0x18) & DAT_14c963e40) == 0;
      }
      if (!bVar21) {
        *(undefined8 *)((longlong)puVar13 + -0x28) = 0x1411c0924;
        iVar4 = wcscmp(pwVar9,L"");
        if (iVar4 != 0) {
          *(undefined8 *)((longlong)puVar13 + -0x28) = 0x1411c0946;
          FUN_140056680(&local_80,pwVar19);
          *(undefined8 *)((longlong)puVar13 + -0x28) = 0x1411c094e;
          FUN_140ded312(&local_80);
          uVar8 = local_78;
          pwVar19 = local_80;
          local_80 = (wchar_t *)0x0;
          local_78 = 0;
          if (local_b8 == (wchar_t *)0x0) {
            local_b8 = pwVar19;
            uStack_b0 = uVar8;
            lVar15 = local_108;
          }
          else {
            *(undefined8 *)((longlong)puVar13 + -0x28) = 0x1411c0979;
            FUN_1400020a8();
            local_b8 = pwVar19;
            uStack_b0 = uVar8;
            lVar15 = local_108;
            if (local_80 != (wchar_t *)0x0) {
              *(undefined8 *)((longlong)puVar13 + -0x28) = 0x1411c099a;
              FUN_1400020a8();
              lVar15 = local_108;
            }
          }
        }
      }
    }
    pwVar9 = L"";
    if ((int)uStack_b0 != 0) {
      pwVar9 = local_b8;
    }
    if (pwVar9 == (wchar_t *)0x0) {
LAB_1411c0ad8:
      local_c8 = 0;
      uStack_c0 = 0;
      *(undefined8 *)((longlong)puVar13 + -0x28) = 0x1411c0af0;
      FUN_145715fae(local_d8,&local_a0);
      local_80 = (wchar_t *)CONCAT44(local_80._4_4_,4);
      *(undefined8 *)((longlong)puVar13 + -0x28) = 0x1411c0b0b;
      FUN_14023423e(&local_70,local_d8);
      *(undefined8 *)((longlong)puVar13 + -0x28) = 0x1411c0b1e;
      FUN_140056680(local_e8,L"Message");
      *(undefined8 *)((longlong)puVar13 + -0x28) = 0x1411c0b31;
      FUN_140233eec(&local_c8,local_e8,&local_80);
      if (local_e8[0] != 0) {
        *(undefined8 *)((longlong)puVar13 + -0x28) = 0x1411c0b47;
        FUN_1400020a8();
      }
      if (local_70 != (longlong *)0x0) {
        pcVar2 = *(code **)(*local_70 + 0x10);
        *(undefined8 *)((longlong)puVar13 + -0x28) = 0x1411c0b5e;
        (*pcVar2)();
        local_70 = (longlong *)0x0;
        local_68 = 0;
      }
      if (local_d8[0] != (longlong *)0x0) {
        pcVar2 = *(code **)(*local_d8[0] + 0x10);
        *(undefined8 *)((longlong)puVar13 + -0x28) = 0x1411c0b84;
        (*pcVar2)();
      }
      local_f0 = plVar11[4];
      *(undefined8 *)((longlong)puVar13 + -0x28) = 0x1411c0ba4;
      FUN_145715fae(local_d8,&local_f0);
      local_80 = (wchar_t *)CONCAT44(local_80._4_4_,4);
      *(undefined8 *)((longlong)puVar13 + -0x28) = 0x1411c0bbf;
      FUN_14023423e(&local_70,local_d8);
      *(undefined8 *)((longlong)puVar13 + -0x28) = 0x1411c0bd2;
      FUN_140056680(local_e8,L"PropertyName");
      *(undefined8 *)((longlong)puVar13 + -0x28) = 0x1411c0be1;
      FUN_140233eec(&local_c8,local_e8,&local_80);
      if (local_e8[0] != 0) {
        *(undefined8 *)((longlong)puVar13 + -0x28) = 0x1411c0bf7;
        FUN_1400020a8();
      }
      plVar6 = local_128;
      if (local_70 != (longlong *)0x0) {
        pcVar2 = *(code **)(*local_70 + 0x10);
        *(undefined8 *)((longlong)puVar13 + -0x28) = 0x1411c0c12;
        (*pcVar2)();
        local_70 = (longlong *)0x0;
        local_68 = 0;
      }
      if (local_d8[0] != (longlong *)0x0) {
        pcVar2 = *(code **)(*local_d8[0] + 0x10);
        *(undefined8 *)((longlong)puVar13 + -0x28) = 0x1411c0c38;
        (*pcVar2)();
      }
      local_f0 = plVar6[3];
      *(undefined8 *)((longlong)puVar13 + -0x28) = 0x1411c0c58;
      FUN_145715fae(local_d8,&local_f0);
      local_80 = (wchar_t *)CONCAT44(local_80._4_4_,4);
      *(undefined8 *)((longlong)puVar13 + -0x28) = 0x1411c0c73;
      FUN_14023423e(&local_70,local_d8);
      *(undefined8 *)((longlong)puVar13 + -0x28) = 0x1411c0c86;
      FUN_140056680(local_e8,L"FunctionName");
      *(undefined8 *)((longlong)puVar13 + -0x28) = 0x1411c0c95;
      FUN_140233eec(&local_c8,local_e8,&local_80);
      if (local_e8[0] != 0) {
        *(undefined8 *)((longlong)puVar13 + -0x28) = 0x1411c0cab;
        FUN_1400020a8();
      }
      if (local_70 != (longlong *)0x0) {
        pcVar2 = *(code **)(*local_70 + 0x10);
        *(undefined8 *)((longlong)puVar13 + -0x28) = 0x1411c0cc2;
        (*pcVar2)();
        local_70 = (longlong *)0x0;
        local_68 = 0;
      }
      if (local_d8[0] != (longlong *)0x0) {
        pcVar2 = *(code **)(*local_d8[0] + 0x10);
        *(undefined8 *)((longlong)puVar13 + -0x28) = 0x1411c0ce8;
        (*pcVar2)();
      }
      local_80 = L"BadProperty";
      local_78._0_4_ = 0xb;
      *(undefined8 *)((longlong)puVar13 + -0x28) = 0x1411c0d0d;
      FUN_1446e940c(local_e8,&local_80);
      local_80 = L"Core";
      local_78._0_4_ = 4;
      *(undefined8 *)((longlong)puVar13 + -0x28) = 0x1411c0d39;
      FUN_1446e940c(&local_f0,&local_80);
      local_80 = 
      L"\'{Message}\': Bad or missing property \'{PropertyName}\' when trying to call {FunctionName}"
      ;
      local_78 = CONCAT44(local_78._4_4_,0x58);
      *(undefined8 *)((longlong)puVar13 + -0x28) = 0x1411c0d68;
      FUN_140208c1e(local_d8,&local_f0,local_e8);
      *(undefined8 *)((longlong)puVar13 + -0x28) = 0x1411c0d7a;
      FUN_14023409e(local_100,local_d8,1);
      *(undefined8 *)((longlong)puVar13 + -0x28) = 0x1411c0d89;
      FUN_140233c04(&local_80,local_100,&local_c8);
      pwVar19 = local_80;
      pcVar2 = *(code **)(*(longlong *)local_80 + 0x50);
      pwVar9 = local_80;
      if (pcVar2 != FUN_144828418) {
        *(undefined8 *)((longlong)puVar13 + -0x28) = 0x1411c102e;
        pwVar9 = (wchar_t *)(*pcVar2)(pwVar19);
      }
      *(undefined8 *)((longlong)puVar13 + -0x28) = 0x1411c0db4;
      FUN_1447a1fc0(pwVar9);
      lVar15 = local_108;
      plVar5 = local_128;
      pcVar2 = *(code **)(*(longlong *)pwVar19 + 0x28);
      if (pcVar2 == FUN_14482841c) {
        pwVar9 = (wchar_t *)(*(longlong *)(pwVar19 + 0x14) + 8);
        if (*(longlong *)(pwVar19 + 0x14) == 0) {
          pwVar9 = pwVar19 + 0xc;
        }
      }
      else if (pcVar2 == (code *)&LAB_14010c34c) {
        pwVar9 = pwVar19 + 8;
      }
      else {
        *(undefined8 *)((longlong)puVar13 + -0x28) = 0x1411c1043;
        pwVar9 = (wchar_t *)(*pcVar2)(pwVar19);
      }
      uVar8 = local_138;
      puVar17 = &DAT_149dfb77a;
      if (*(int *)(pwVar9 + 4) != 0) {
        puVar17 = *(undefined2 **)pwVar9;
      }
      *(undefined8 *)((longlong)puVar13 + -0x28) = 0x1411c0e26;
      FUN_140047918(uVar8,&DAT_149e0625e,puVar17);
      if (pwVar19 != (wchar_t *)0x0) {
        pcVar2 = *(code **)(*(longlong *)pwVar19 + 0x10);
        *(undefined8 *)((longlong)puVar13 + -0x28) = 0x1411c0e3c;
        (*pcVar2)(pwVar19);
      }
      if (local_d8[0] != (longlong *)0x0) {
        pcVar2 = *(code **)(*local_d8[0] + 0x10);
        *(undefined8 *)((longlong)puVar13 + -0x28) = 0x1411c0e53;
        (*pcVar2)();
      }
      lVar7 = local_c8;
      uVar10 = uStack_c0 & 0xffffffff;
      *(undefined8 *)((longlong)puVar13 + -0x28) = 0x1411c0e67;
      uVar8 = FUN_14010f8af(lVar7,uVar10);
      if (local_c8 != 0) {
        *(undefined8 *)((longlong)puVar13 + -0x28) = 0x1411c0e7d;
        uVar8 = FUN_1400020a8();
      }
      local_120 = CONCAT71((int7)((ulonglong)uVar8 >> 8),1);
      plVar6 = (longlong *)0x0;
    }
    else {
      lVar7 = *plVar11;
      *(undefined8 *)((longlong)puVar13 + -0x10) = DAT_14c872be8;
      *(undefined4 *)((longlong)puVar13 + -0x18) = 0x8000000;
      *(undefined8 *)((longlong)puVar13 + -0x20) = 0;
      puVar12 = local_118;
      pcVar2 = *(code **)(lVar7 + 0xf8);
      *(undefined8 *)((longlong)puVar13 + -0x48) = 0x1411c0a37;
      lVar7 = (*pcVar2)(plVar11,pwVar9,puVar12);
      plVar6 = (longlong *)CONCAT71((int7)((ulonglong)pwVar19 >> 8),1);
      if (lVar7 == 0) goto LAB_1411c0ad8;
    }
    if (local_b8 != (wchar_t *)0x0) {
      *(undefined8 *)((longlong)puVar13 + -0x28) = 0x1411c0a59;
      FUN_1400020a8();
    }
    if ((char)plVar6 != '\0') goto LAB_1411c0a6d;
  }
LAB_1411c1170:
  puVar12 = local_118;
  if ((local_120 & 1) == 0) goto LAB_1411c117a;
  goto LAB_1411c1195;
LAB_1411c0764:
  pcVar2 = *(code **)(*local_110 + 0x2b0);
  *(undefined8 *)((longlong)puVar13 + -0x28) = 0x1411c0775;
  local_110 = (longlong *)(*pcVar2)();
  if (local_110 == (longlong *)0x0) goto LAB_1411c117a;
  goto LAB_1411c0740;
LAB_1411c117a:
  plVar16 = local_130;
  pcVar2 = *(code **)(*local_130 + 0x248);
  *(undefined8 *)((longlong)puVar13 + -0x28) = 0x1411c1191;
  (*pcVar2)(plVar16,plVar5,puVar12);
LAB_1411c1195:
  do {
    for (plVar16 = (longlong *)plVar5[10]; uVar20 = (undefined7)((ulonglong)plVar6 >> 8),
        plVar16 != (longlong *)0x0; plVar16 = (longlong *)plVar16[3]) {
      if ((~*(uint *)(plVar16[1] + 0x18) & 0x8001) == 0) {
        uVar10 = plVar16[7];
        plVar6 = (longlong *)CONCAT71(uVar20,1);
LAB_1411c11df:
        if ((char)uVar10 < '\0') {
          if ((uVar10 >> 0x24 & 1) == 0) {
            iVar14 = *(int *)((longlong)plVar16 + 0x44);
            pcVar2 = *(code **)(*plVar16 + 0x148);
            *(undefined8 *)((longlong)puVar13 + -0x28) = 0x1411c1205;
            (*pcVar2)(plVar16,puVar12 + iVar14);
          }
          plVar16 = plVar16 + 3;
          do {
            for (plVar16 = (longlong *)*plVar16; plVar16 != (longlong *)0x0;
                plVar16 = (longlong *)plVar16[3]) {
              if ((~*(uint *)(plVar16[1] + 0x18) & 0x8001) == 0) {
                uVar10 = plVar16[7];
                goto LAB_1411c11df;
              }
            }
            pcVar2 = *(code **)(*plVar5 + 0x2b0);
            *(undefined8 *)((longlong)puVar13 + -0x28) = 0x1411c123b;
            plVar5 = (longlong *)(*pcVar2)(plVar5);
            plVar16 = plVar5 + 10;
          } while (plVar5 != (longlong *)0x0);
        }
        goto LAB_1411c0563;
      }
    }
    pcVar2 = *(code **)(*plVar5 + 0x2b0);
    *(undefined8 *)((longlong)puVar13 + -0x28) = 0x1411c11c4;
    plVar5 = (longlong *)(*pcVar2)(plVar5);
    plVar6 = (longlong *)CONCAT71(uVar20,1);
  } while (plVar5 != (longlong *)0x0);
LAB_1411c0563:
  if (local_98 != (undefined2 *)0x0) {
    *(undefined8 *)((longlong)puVar13 + -0x28) = 0x1411c0575;
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)&local_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)((longlong)puVar13 + -0x28) = &UNK_1411c05aa;
    FUN_144d8e3a0();
  }
  return (ulonglong)plVar6 & 0xffffffff;
}



// FUNCTION 1411c1256 FUN_1411c1256 body=102 status=ok
// SIG undefined FUN_1411c1256(void)

void FUN_1411c1256(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x10);
    do {
      FUN_1411c12bc(plVar1[4],(int)plVar1[5]);
      if (plVar1[4] != 0) {
        FUN_1400020a8();
      }
      if (plVar1[2] != 0) {
        FUN_1400020a8();
      }
      FUN_140b86e6c(*plVar1,(int)plVar1[1]);
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1411c12bc FUN_1411c12bc body=47 status=ok
// SIG undefined FUN_1411c12bc(void)

void FUN_1411c12bc(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x10);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 6;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1411c12ec FUN_1411c12ec body=284 status=ok
// SIG undefined FUN_1411c12ec(void)

undefined8 FUN_1411c12ec(longlong param_1,undefined4 param_2)

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
    if (iVar1 == 2) goto LAB_1411c1402;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1411c1402;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_1411c1402:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1411c13af;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5 + (longlong)*(int *)(param_1 + 0x28),param_2);
      uVar6 = 1;
      goto LAB_1411c13af;
    }
  }
  uVar6 = 0;
LAB_1411c13af:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411c140a FUN_1411c140a body=875 status=ok
// SIG undefined FUN_1411c140a(void)

void FUN_1411c140a(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
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
  code *local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_1449027d0(param_1,&local_48);
  plVar3 = *(longlong **)(local_48 + 0x4f0);
  AcquireSRWLockExclusive((PSRWLOCK)(plVar3 + 6));
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_40 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar2 = (int *)((longlong)local_40 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_40 + 0x10))(local_40);
      }
    }
  }
  if ((int)plVar3[4] != param_2) {
    *(int *)(plVar3 + 4) = param_2;
    *(int *)(plVar3 + 5) = (int)plVar3[5] + 1;
  }
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  if (*(int *)((longlong)plVar3 + 0xc) < param_2) {
    FUN_145a0e154(plVar3,param_2);
  }
  else {
    FUN_140840ea5(*plVar3,(int)plVar3[1]);
    *(undefined4 *)(plVar3 + 1) = 0;
  }
  *(int *)(plVar3 + 2) = (int)plVar3[2] + 1;
  if ((bool)(char)plVar3[3] == (param_2 != 0)) {
    if (*(int *)((longlong)plVar3 + 0x1c) != 0) goto LAB_1411c14cd;
    iVar5 = 1;
  }
  else {
    iVar5 = *(int *)((longlong)plVar3 + 0x1c) + 1;
  }
  *(bool *)(plVar3 + 3) = param_2 != 0;
  *(int *)((longlong)plVar3 + 0x1c) = iVar5;
LAB_1411c14cd:
  if (param_2 == 0) {
    FUN_146646094(param_1);
  }
  else {
    lVar4 = FUN_1400d7050(param_1 + 0x30);
    if (lVar4 != 0) {
      if (DAT_14cbadd90 == 0) {
        local_48 = FUN_141030f22;
        local_50 = FUN_14081d0ea;
        local_58 = &LAB_1459f2e4c;
        local_68 = &LAB_148c39de3;
        local_70 = &LAB_1457a9eb2;
        local_78 = &DAT_149e063b2;
        local_80 = 0;
        local_88 = 0x10000004;
        local_90 = 0x10;
        local_98 = 0x3de0;
        local_60 = &local_48;
        FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
      }
      if ((((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
             (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) &&
          (*(int *)(lVar4 + 0xd98) != 0)) && (*(longlong *)(lVar4 + 0xda0) != 0)) {
        FUN_1403ca8ec(lVar4 + 0xd98,&DAT_14cbd9660);
      }
    }
  }
  lVar4 = FUN_1400d7050(param_1 + 0x30);
  if (lVar4 != 0) {
    if (DAT_14cbadd90 == 0) {
      local_48 = FUN_141030f22;
      local_50 = FUN_14081d0ea;
      local_58 = &LAB_1459f2e4c;
      local_68 = &LAB_148c39de3;
      local_70 = &LAB_1457a9eb2;
      local_78 = &DAT_149e063b2;
      local_80 = 0;
      local_88 = 0x10000004;
      local_90 = 0x10;
      local_98 = 0x3de0;
      local_60 = &local_48;
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
    }
    if (((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
          (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) &&
       ((longlong)*(int *)(lVar4 + 0x2928) != 0)) {
      lVar6 = *(longlong *)(lVar4 + 0x2920);
      lVar4 = (longlong)*(int *)(lVar4 + 0x2928) * 0x78;
      do {
        if ((*(char *)(lVar6 + 0x10) != '\0') && (*(char *)(lVar6 + 0xc) == '\x01')) {
          *(int *)(plVar3 + 2) = (int)plVar3[2] + 1;
          iVar5 = (int)plVar3[1];
          *(uint *)(plVar3 + 1) = iVar5 + 1U;
          if (*(uint *)((longlong)plVar3 + 0xc) < iVar5 + 1U) {
            FUN_148e5ec58(plVar3,iVar5);
          }
          lVar7 = (longlong)iVar5 * 0x28 + *plVar3;
          FUN_1418f9d86(lVar7);
          FUN_1408fdede(lVar7,lVar6);
        }
        lVar6 = lVar6 + 0x78;
        lVar4 = lVar4 + -0x78;
      } while (lVar4 != 0);
    }
  }
  ReleaseSRWLockExclusive((PSRWLOCK)(plVar3 + 6));
  if ((local_38 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1411c1778 FUN_1411c1778 body=241 status=ok
// SIG undefined FUN_1411c1778(void)

void FUN_1411c1778(longlong param_1,longlong param_2,longlong *param_3,undefined4 *param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((param_2 != 0) && (*param_3 != param_2)) {
    local_38 = *param_4;
    uStack_34 = param_4[1];
    uStack_30 = param_4[2];
    uStack_2c = param_4[3];
    FUN_1411c186a(local_38,param_2,param_3);
    lVar1 = CONCAT44(DAT_14c8463f8._4_4_,(undefined4)DAT_14c8463f8);
    param_3[0x130] = CONCAT44(DAT_14c8463f0._4_4_,(undefined4)DAT_14c8463f0);
    param_3[0x131] = lVar1;
    uVar4 = DAT_14c8463f8._4_4_;
    uVar3 = (undefined4)DAT_14c8463f8;
    uVar2 = DAT_14c8463f0._4_4_;
    *(undefined4 *)(param_3 + 0x132) = (undefined4)DAT_14c8463f0;
    *(undefined4 *)((longlong)param_3 + 0x994) = uVar2;
    *(undefined4 *)(param_3 + 0x133) = uVar3;
    *(undefined4 *)((longlong)param_3 + 0x99c) = uVar4;
    (**(code **)(**(longlong **)(param_1 + 0x39d0) + 0x2a8))
              (*(longlong **)(param_1 + 0x39d0),*(undefined8 *)(param_1 + 0x430),0);
    if (*(longlong *)(param_1 + 0x3a48) != 0) {
      FUN_140e59de8(*(longlong *)(param_1 + 0x3a48),*(undefined8 *)(param_1 + 0x39d8));
      local_50 = *param_4;
      local_58 = param_1 + 0x3968;
      local_48 = 0;
      uStack_40 = 0;
      FUN_140e5a166(*(undefined8 *)(param_1 + 0x3a48),*(undefined8 *)(param_1 + 0x39d8),&local_48,
                    param_1 + 0x2f00);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411c186a FUN_1411c186a body=412 status=ok
// SIG undefined FUN_1411c186a(void)

void FUN_1411c186a(longlong param_1,longlong *param_2,longlong *param_3,undefined4 *param_4)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined1 auStack_78 [40];
  longlong local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((param_2 != (longlong *)0x0) &&
     ((plVar1 = (longlong *)*param_3, plVar1 != param_2 ||
      ((*(longlong *)(param_1 + 0xe80) != 0 && ((*(byte *)(param_1 + 0x18e0) & 1) != 0)))))) {
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(param_2);
    }
    *param_3 = (longlong)param_2;
    *(undefined4 *)((longlong)param_3 + 0xa4) = *(undefined4 *)(param_1 + 0x3bc);
    *(uint *)(param_3 + 0x16) =
         *(uint *)(param_3 + 0x16) & 0xfffffffb | *(uint *)(param_1 + 0x2e58) & 4;
    *(undefined4 *)(param_3 + 8) = *(undefined4 *)(param_1 + 0x3a8);
    *(undefined4 *)(param_3 + 0xf) = *(undefined4 *)(param_1 + 0x3ac);
    plVar6 = param_2;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x558))(plVar1,*(undefined8 *)(param_1 + 0x390));
      plVar6 = (longlong *)*param_3;
    }
    (**(code **)(*plVar6 + 0x550))(plVar6,*(undefined8 *)(param_1 + 0x390));
    if ((((*(byte *)(*(longlong **)(param_1 + 0x390) + 0x84) & 2) == 0) ||
        (cVar2 = (**(code **)(**(longlong **)(param_1 + 0x390) + 0x6c8))(), cVar2 == '\0')) &&
       (iVar3 = FUN_14487fd02(param_1), iVar3 != 3)) {
      plVar6 = *(longlong **)(param_1 + 0x390);
      local_50 = *param_3;
      local_48 = *param_4;
      uStack_44 = param_4[1];
      uStack_40 = param_4[2];
      uStack_3c = param_4[3];
      uVar5 = FUN_14477b072(plVar6,DAT_14caf97b8);
      (**(code **)(*plVar6 + 0x248))(plVar6,uVar5,&local_50);
    }
    lVar4 = FUN_1411c1a08();
    FUN_1411c1a74(lVar4 + 0x90,*(undefined8 *)(param_1 + 0x390),plVar1,param_2);
  }
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1411c1a08 FUN_1411c1a08 body=108 status=ok
// SIG undefined FUN_1411c1a08(void)

undefined8 * FUN_1411c1a08(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cad8c18) {
    FUN_144b3d300(&DAT_14cad8c18);
    if (DAT_14cad8c18 == -1) {
      FUN_145833604(&DAT_14cad8b08);
      atexit((_func_5014 *)&LAB_1434e2409);
      _Init_thread_footer(&DAT_14cad8c18);
    }
  }
  return &DAT_14cad8b08;
}



// FUNCTION 1411c1a74 FUN_1411c1a74 body=191 status=ok
// SIG undefined FUN_1411c1a74(void)

void FUN_1411c1a74(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
        goto LAB_1411c1b16;
      }
    }
    uVar5 = uVar7 - 1;
    bVar6 = true;
  } while (1 < uVar7);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_1411c1b16:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 1411c1b34 FUN_1411c1b34 body=199 status=ok
// SIG undefined FUN_1411c1b34(void)

void FUN_1411c1b34(longlong param_1,longlong *param_2)

{
  uint uVar1;
  int *piVar2;
  longlong lVar3;
  
  if ((((*(longlong *)(param_1 + 0x80) != 0) && (*(int *)(param_1 + 0x7c) != 0)) &&
      (uVar1 = *(uint *)(param_1 + 0x78), -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    if (((lVar3 != 0) && (*(int *)(lVar3 + 0x10) == *(int *)(param_1 + 0x7c))) &&
       ((*(uint *)(lVar3 + 8) & 0x10200000) == 0)) {
      uVar1 = *(uint *)(param_2 + 1);
      if (uVar1 != *(uint *)(param_1 + 200)) {
LAB_1411c1ba6:
        FUN_1411c1bfc(param_1);
                    /* WARNING: Could not recover jumptable at 0x0001411c1bbd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(**(longlong **)(param_1 + 0x80) + 0x70))();
        return;
      }
      if (0 < (int)uVar1) {
        piVar2 = (int *)(*(longlong *)(param_1 + 0xc0) + 8);
        lVar3 = 0;
        do {
          if (*(int *)(*param_2 + lVar3) != *piVar2) goto LAB_1411c1ba6;
          piVar2 = piVar2 + 0x10;
          lVar3 = lVar3 + 0x30;
        } while ((ulonglong)uVar1 * 0x30 != lVar3);
      }
    }
  }
  return;
}



// FUNCTION 1411c1bfc FUN_1411c1bfc body=719 status=ok
// SIG undefined FUN_1411c1bfc(void)

void FUN_1411c1bfc(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  uint *puVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  longlong lVar14;
  bool bVar15;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar8 = (int)param_2[1];
  if (iVar8 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar8);
  }
  plVar3 = (longlong *)(param_1 + 0xc0);
  iVar5 = *(int *)(param_1 + 0xcc);
  FUN_14028f532(*(undefined8 *)(param_1 + 0xc0),*(undefined4 *)(param_1 + 200));
  *(undefined4 *)(param_1 + 200) = 0;
  if ((iVar5 < iVar8) && (*(int *)(param_1 + 0xcc) != iVar8)) {
    FUN_1411c1ecc(plVar3,iVar8);
  }
  if ((longlong)(int)param_2[1] != 0) {
    lVar11 = *param_2;
    lVar12 = (longlong)(int)param_2[1] * 0x30 + lVar11;
    do {
      FUN_1411c1f9a(&local_58,lVar11);
      lVar6 = local_58;
      if (local_58 != 0) {
        if ((*(int *)(lVar11 + 0x2c) == 0) || (uVar7 = *(uint *)(lVar11 + 0x28), (int)uVar7 < 0)) {
LAB_1411c1e25:
          lVar14 = 0;
        }
        else {
          lVar14 = 0;
          if ((int)uVar7 < DAT_14c9647dc) {
            plVar10 = (longlong *)
                      ((ulonglong)((uVar7 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8));
            if (((plVar10 == (longlong *)0x0) || ((int)plVar10[2] != *(int *)(lVar11 + 0x2c))) ||
               ((*(uint *)(plVar10 + 1) & 0x10200000) != 0)) goto LAB_1411c1e25;
            lVar14 = *plVar10;
          }
        }
        iVar8 = *(int *)(param_1 + 200);
        *(uint *)(param_1 + 200) = iVar8 + 1U;
        if (*(uint *)(param_1 + 0xcc) < iVar8 + 1U) {
          FUN_14883f3ee(plVar3,iVar8);
        }
        puVar4 = (uint *)(*plVar3 + (longlong)iVar8 * 0x40);
        *(undefined8 *)(*plVar3 + (longlong)iVar8 * 0x40) = 0;
        if (lVar14 == 0) {
          uVar7 = 0;
        }
        else {
          uVar7 = *(uint *)(lVar14 + 0xc);
          *puVar4 = uVar7;
          if ((int)uVar7 < DAT_14c9647dc) {
            lVar14 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8);
          }
          else {
            lVar14 = 0;
          }
          uVar7 = *(uint *)(lVar14 + 0x10);
          if (*(uint *)(lVar14 + 0x10) == 0) {
            LOCK();
            iVar8 = DAT_14c964868 + 1;
            UNLOCK();
            uVar13 = DAT_14c964868 + 1;
            bVar15 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar8;
            if (bVar15) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,uVar13);
            }
            LOCK();
            uVar7 = *(uint *)(lVar14 + 0x10);
            bVar15 = uVar7 == 0;
            if (bVar15) {
              *(uint *)(lVar14 + 0x10) = uVar13;
              uVar7 = 0;
            }
            UNLOCK();
            if (bVar15) {
              uVar7 = uVar13;
            }
          }
        }
        puVar4[1] = uVar7;
        FUN_1447a97f4(puVar4 + 2,lVar11);
        lVar14 = *(longlong *)(lVar6 + 0x10);
        if (lVar14 == 0) {
          lVar14 = 0;
        }
        else {
          iVar8 = *(int *)(lVar14 + 8);
          do {
            if (iVar8 == 0) {
              lVar14 = 0;
              break;
            }
            LOCK();
            iVar5 = *(int *)(lVar14 + 8);
            bVar15 = iVar8 == iVar5;
            if (bVar15) {
              *(int *)(lVar14 + 8) = iVar8 + 1;
              iVar5 = iVar8;
            }
            iVar8 = iVar5;
            UNLOCK();
          } while (!bVar15);
        }
        uVar9 = 0;
        if (lVar14 != 0) {
          uVar9 = *(undefined8 *)(lVar6 + 8);
        }
        *(undefined8 *)(puVar4 + 0xc) = uVar9;
        *(longlong *)(puVar4 + 0xe) = lVar14;
      }
      plVar10 = local_50;
      if (local_50 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_50 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_50)(local_50);
          LOCK();
          piVar2 = (int *)((longlong)plVar10 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar10 + 0x10))(plVar10);
          }
        }
      }
      lVar11 = lVar11 + 0x30;
    } while (lVar11 != lVar12);
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1411c1ecc FUN_1411c1ecc body=206 status=ok
// SIG undefined FUN_1411c1ecc(void)

void FUN_1411c1ecc(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
    uVar1 = (ulonglong)param_2 * 0x40;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (param_2 < 0x200) {
          uVar1 = (ulonglong)
                  (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[(ulonglong)param_2 * 4]];
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
    if ((int)param_2 <= (int)(uVar1 >> 6)) {
      uVar2 = uVar1 >> 6 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x40,8);
  }
  return;
}



// FUNCTION 1411c1f9a FUN_1411c1f9a body=336 status=ok
// SIG undefined FUN_1411c1f9a(void)

longlong * FUN_1411c1f9a(longlong *param_1,int *param_2)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int *piVar5;
  int iVar6;
  undefined1 auStack_88 [32];
  int local_68;
  int local_64;
  int local_60;
  undefined1 local_5c [12];
  longlong local_50;
  longlong *local_48;
  longlong local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_2[1] == 2) {
    piVar5 = (int *)&DAT_14c948618;
    if (*param_2 != DAT_14c948000) {
      piVar5 = *(int **)(param_2 + 6);
    }
    if (*param_2 == 0) {
      piVar5 = (int *)&DAT_14c948618;
    }
    iVar2 = *piVar5;
    iVar3 = piVar5[1];
    iVar6 = 0;
    if (iVar2 == 0) {
      iVar6 = piVar5[2];
    }
    FUN_1400f0e12(param_2,local_5c,1);
    local_68 = iVar2;
    local_64 = iVar3;
    local_60 = iVar6;
    FUN_1448075d0(&local_50);
    lVar4 = FUN_14060eaf6(&local_50);
    if (local_38 != 0) {
      FUN_1400020a8();
    }
    if (lVar4 != 0) {
      FUN_1411c20ec(lVar4,&local_50,local_5c);
      if (local_50 != 0) {
        *param_1 = local_50;
        param_1[1] = (longlong)local_48;
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
              piVar5 = (int *)((longlong)local_48 + 0xc);
              *piVar5 = *piVar5 + -1;
              UNLOCK();
              if (*piVar5 == 0) {
                (**(code **)(*local_48 + 0x10))(local_48);
              }
            }
          }
        }
        goto LAB_1411c2079;
      }
      if (local_48 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_48 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_48)(local_48);
          LOCK();
          piVar5 = (int *)((longlong)local_48 + 0xc);
          *piVar5 = *piVar5 + -1;
          UNLOCK();
          if (*piVar5 == 0) {
            (**(code **)(*local_48 + 0x10))(local_48);
          }
        }
      }
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
LAB_1411c2079:
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411c20ec FUN_1411c20ec body=241 status=ok
// SIG undefined FUN_1411c20ec(void)

undefined8 * FUN_1411c20ec(longlong param_1,undefined8 *param_2,uint *param_3)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar3 = *param_3;
  uVar5 = param_3[2];
  if (uVar5 != 0) {
    uVar3 = uVar5 >> 0xd ^ uVar3 - uVar5;
    uVar6 = uVar3 << 8 ^ (-0x61c88647 - uVar5) - uVar3;
    uVar7 = uVar6 >> 0xd ^ (uVar5 - uVar3) - uVar6;
    uVar5 = uVar7 >> 0xc ^ (uVar3 - uVar6) - uVar7;
    uVar3 = uVar5 << 0x10 ^ (uVar6 - uVar7) - uVar5;
    uVar6 = uVar3 >> 5 ^ (uVar7 - uVar5) - uVar3;
    uVar5 = uVar6 >> 3 ^ (uVar5 - uVar3) - uVar6;
    uVar3 = uVar5 << 10 ^ (uVar3 - uVar6) - uVar5;
    uVar3 = uVar3 >> 0xf ^ uVar6 - (uVar5 + uVar3);
  }
  iVar4 = FUN_1409c4bfe((longlong *)(param_1 + 0x300),uVar3);
  if (iVar4 != -1) {
    lVar2 = *(longlong *)(param_1 + 0x300);
    lVar1 = lVar2 + (longlong)iVar4 * 0x28;
    if ((lVar1 != 0) && (lVar2 + (longlong)iVar4 * 0x28 != -0x10)) {
      *param_2 = *(undefined8 *)(lVar1 + 0x10);
      lVar1 = *(longlong *)(lVar1 + 0x18);
      param_2[1] = lVar1;
      if (lVar1 == 0) {
        return param_2;
      }
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
      return param_2;
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 1411c21dd FUN_1411c21dd body=914 status=ok
// SIG undefined FUN_1411c21dd(void)

undefined8 * FUN_1411c21dd(undefined8 *param_1,longlong *param_2)

{
  int *piVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong lVar13;
  undefined1 auStack_148 [32];
  longlong *local_128;
  undefined8 *local_120;
  longlong local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  undefined4 local_104;
  undefined8 *local_100;
  longlong local_f8;
  ulonglong uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined1 local_c8;
  undefined1 local_c7;
  undefined8 local_c0;
  undefined8 uStack_b8;
  longlong *local_b0;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 local_78;
  undefined6 uStack_74;
  undefined2 local_6e;
  undefined6 uStack_6c;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_148;
  *param_1 = 0;
  param_1[1] = 0;
  if ((longlong)(int)param_2[1] != 0) {
    plVar12 = (longlong *)*param_2;
    local_128 = plVar12 + (int)param_2[1];
    local_120 = param_1;
    do {
      plVar9 = (longlong *)*plVar12;
      local_118 = 0;
      uStack_110 = 0;
      if (plVar9 != (longlong *)0x0) {
        lVar5 = FUN_14063d1f6();
        if ((*(int *)(plVar9[2] + 0x38) < *(int *)(lVar5 + 0x38)) ||
           (*(longlong *)(*(longlong *)(plVar9[2] + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) !=
            lVar5 + 0x30)) {
          lVar5 = FUN_1405b04b6();
          if ((*(int *)(lVar5 + 0x38) <= *(int *)(plVar9[2] + 0x38)) &&
             ((*(longlong *)(*(longlong *)(plVar9[2] + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8)
               == lVar5 + 0x30 && ((longlong)(int)plVar9[0x23] != 0)))) {
            plVar11 = (longlong *)plVar9[0x22];
            plVar9 = plVar11 + (longlong)(int)plVar9[0x23] * 5;
            do {
              lVar5 = *plVar11;
              if ((lVar5 != 0) && ((longlong)*(int *)(lVar5 + 0x90) != 0)) {
                lVar10 = *(longlong *)(lVar5 + 0x88);
                lVar5 = (longlong)*(int *)(lVar5 + 0x90) * 0xb8;
                do {
                  lVar13 = *(longlong *)(lVar10 + 0x48);
                  if (lVar13 != 0) {
                    lVar7 = FUN_1411c2570();
                    uVar3 = uStack_110;
                    lVar13 = *(longlong *)(lVar13 + 0x10);
                    if ((*(int *)(lVar7 + 0x38) <= *(int *)(lVar13 + 0x38)) &&
                       (*(longlong *)
                         (*(longlong *)(lVar13 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
                        lVar7 + 0x30)) {
                      lVar13 = (longlong)(int)uStack_110;
                      uVar4 = (int)uStack_110 + 1;
                      uStack_110 = CONCAT44(uStack_110._4_4_,uVar4);
                      if (uStack_110._4_4_ < uVar4) {
                        FUN_140ed4548(&local_118,uVar3 & 0xffffffff);
                      }
                      FUN_140ed40b0(lVar13 * 0xb8 + local_118,lVar10);
                    }
                  }
                  lVar10 = lVar10 + 0xb8;
                  lVar5 = lVar5 + -0xb8;
                } while (lVar5 != 0);
              }
              plVar11 = plVar11 + 5;
            } while (plVar11 != plVar9);
          }
        }
        else {
          local_e8 = 0;
          uStack_e0 = 0;
          local_d8 = 0x3f800000;
          local_d0 = 0x3f800000;
          local_c8 = 0;
          local_cc = 0;
          local_c7 = 1;
          local_b0 = (longlong *)0x0;
          local_c0 = 0;
          uStack_b8 = 0;
          local_78 = 0;
          local_88 = 0;
          uStack_80 = 0;
          uStack_6c = 0;
          uStack_74 = 0;
          local_6e = 0;
          local_100 = &local_e8;
          local_f8 = 0;
          uStack_f0 = 0;
          local_104 = 0x7f7fffff;
          local_108 = 0;
          (**(code **)(*plVar9 + 0x2c8))(plVar9,&local_108,&local_104,&local_100);
          uVar3 = uStack_f0;
          lVar5 = local_f8;
          lVar10 = (longlong)(int)uStack_f0;
          local_f8 = 0;
          uStack_f0 = 0;
          if (lVar10 != 0) {
            lVar13 = 0;
            do {
              if (((*(longlong *)(lVar5 + 0x20 + lVar13) != 0) &&
                  (lVar7 = *(longlong *)(lVar5 + 0x10 + lVar13), lVar7 != 0)) &&
                 (lVar8 = *(longlong *)(lVar7 + 0x48), lVar8 != 0)) {
                lVar6 = FUN_1411c2570();
                uVar2 = uStack_110;
                lVar8 = *(longlong *)(lVar8 + 0x10);
                if ((*(int *)(lVar6 + 0x38) <= *(int *)(lVar8 + 0x38)) &&
                   (*(longlong *)
                     (*(longlong *)(lVar8 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
                    lVar6 + 0x30)) {
                  lVar8 = (longlong)(int)uStack_110;
                  uVar4 = (int)uStack_110 + 1;
                  uStack_110 = CONCAT44(uStack_110._4_4_,uVar4);
                  if (uStack_110._4_4_ < uVar4) {
                    FUN_140ed4548(&local_118,uVar2 & 0xffffffff);
                  }
                  FUN_140ed40b0(lVar8 * 0xb8 + local_118,lVar7);
                }
              }
              lVar13 = lVar13 + 0x30;
            } while (lVar10 * 0x30 != lVar13);
          }
          FUN_1448262fc(lVar5,uVar3 & 0xffffffff);
          if (lVar5 != 0) {
            FUN_1400020a8(lVar5);
          }
          FUN_1448262fc(local_f8,uStack_f0 & 0xffffffff);
          if (local_f8 != 0) {
            FUN_1400020a8();
          }
          plVar9 = local_b0;
          if (local_b0 != (longlong *)0x0) {
            LOCK();
            plVar11 = local_b0 + 1;
            *(int *)plVar11 = (int)*plVar11 + -1;
            UNLOCK();
            if ((int)*plVar11 == 0) {
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
      }
      param_1 = local_120;
      FUN_140ed4016(local_120,&local_118);
      FUN_14499183d(local_118,uStack_110 & 0xffffffff);
      if (local_118 != 0) {
        FUN_1400020a8();
      }
      plVar12 = plVar12 + 1;
    } while (plVar12 != local_128);
  }
  if ((local_60 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1411c2570 FUN_1411c2570 body=228 status=ok
// SIG undefined FUN_1411c2570(void)

longlong FUN_1411c2570(void)

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
  if (DAT_14cb9f1d8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14105c5ba;
    local_38 = &LAB_148b7d2c1;
    local_40 = FUN_1418c2af3;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x40;
    FUN_14081cfa3(L"/Script/OakGame",L"AnimNotify_Melee",&DAT_14cb9f1d8,&DAT_148b7d2c0);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb9f1d8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411c2656 FUN_1411c2656 body=159 status=ok
// SIG undefined FUN_1411c2656(void)

undefined8 FUN_1411c2656(longlong *param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  uint uVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar2 = (uint)((ulonglong)param_2 >> 0x10);
    uVar4 = (uint)param_2 & 0xffff;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 +
                    ((longlong)
                     (int)(((uint)param_2 << 0x10 | uVar4) + (int)((ulonglong)param_2 >> 0x20) +
                           (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar4 >> 4)) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0x18) == param_2) {
          FUN_1411c26f6(param_1,iVar1);
          return 1;
        }
        iVar1 = *(int *)(*param_1 + (longlong)iVar1 * 0x18 + 0x10);
      } while (iVar1 != -1);
    }
  }
  return 0;
}



// FUNCTION 1411c26f6 FUN_1411c26f6 body=91 status=ok
// SIG undefined FUN_1411c26f6(void)

void FUN_1411c26f6(longlong *param_1,int param_2)

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
  FUN_1411c2752(param_1,param_2,1);
  return;
}



// FUNCTION 1411c2752 FUN_1411c2752 body=134 status=ok
// SIG undefined FUN_1411c2752(void)

void FUN_1411c2752(longlong *param_1,int param_2,int param_3)

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



// FUNCTION 1411c27d8 FUN_1411c27d8 body=72 status=ok
// SIG undefined FUN_1411c27d8(void)

void FUN_1411c27d8(undefined8 param_1)

{
  FUN_1411c2820();
  FUN_1411c289e(param_1);
  FUN_1410cffc4(param_1);
  FUN_1411c2940(param_1);
  FUN_140457ffc(&DAT_14cadbec8,param_1);
  FUN_140457ffc(&DAT_14cadbeb0,param_1);
  return;
}



// FUNCTION 1411c2820 FUN_1411c2820 body=125 status=ok
// SIG undefined FUN_1411c2820(void)

void FUN_1411c2820(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if (((*(int *)(param_1 + 100) != 0) && (uVar1 = *(uint *)(param_1 + 0x60), -1 < (int)uVar1)) &&
     ((int)uVar1 < DAT_14c9647dc)) {
    plVar3 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar3 != (longlong *)0x0) && ((int)plVar3[2] == *(int *)(param_1 + 100))) &&
       (((*(uint *)(plVar3 + 1) & 0x10200000) == 0 && (lVar2 = *plVar3, lVar2 != 0)))) {
      FUN_1411c29ea(param_1,lVar2 + 0x3a8);
      FUN_140aeefbc(lVar2,0,1);
      *(undefined8 *)(param_1 + 0x60) = 0;
    }
  }
  return;
}



// FUNCTION 1411c289e FUN_1411c289e body=161 status=ok
// SIG undefined FUN_1411c289e(void)

void FUN_1411c289e(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  uint uVar4;
  longlong lVar5;
  
  lVar2 = FUN_1410d0064();
  if (lVar2 != 0) {
    if (*(longlong *)(lVar2 + 0x1f0) == 0) {
      plVar3 = (longlong *)(lVar2 + 0x458);
    }
    else {
      plVar3 = (longlong *)(*(longlong *)(lVar2 + 0x1f0) + 0xf0);
    }
    lVar2 = *(longlong *)(param_1 + 0x78);
    if (lVar2 != 0) {
      lVar1 = *plVar3;
      uVar4 = (uint)lVar2;
      if ((int)(uVar4 & 0xffffff) < *(int *)(lVar1 + 0x10)) {
        lVar5 = lVar1 + 0x18;
        if (*(longlong *)(lVar1 + 0x28) != 0) {
          lVar5 = *(longlong *)(lVar1 + 0x28);
        }
        if ((*(uint *)(lVar5 + (ulonglong)((uVar4 & 0xffffff) >> 5) * 4) >> (uVar4 & 0x1f) & 1) != 0
           ) {
          lVar1 = *(longlong *)(lVar1 + 8);
          lVar5 = (ulonglong)(uVar4 & 0xffffff) * 0x70;
          if (((lVar1 + lVar5 != 0) && (*(longlong *)(lVar1 + 0x60 + lVar5) == lVar2)) &&
             (*(char *)(lVar1 + 1 + lVar5) != '\x04')) {
            FUN_1405a424c();
          }
        }
      }
    }
    *(undefined8 *)(param_1 + 0x78) = 0;
  }
  return;
}



// FUNCTION 1411c2940 FUN_1411c2940 body=169 status=ok
// SIG undefined FUN_1411c2940(void)

void FUN_1411c2940(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  uint uVar4;
  longlong lVar5;
  
  lVar2 = FUN_1410d0064();
  if (lVar2 != 0) {
    if (*(longlong *)(lVar2 + 0x1f0) == 0) {
      plVar3 = (longlong *)(lVar2 + 0x458);
    }
    else {
      plVar3 = (longlong *)(*(longlong *)(lVar2 + 0x1f0) + 0xf0);
    }
    lVar2 = *(longlong *)(param_1 + 0x80);
    if (lVar2 != 0) {
      lVar1 = *plVar3;
      uVar4 = (uint)lVar2;
      if ((int)(uVar4 & 0xffffff) < *(int *)(lVar1 + 0x10)) {
        lVar5 = lVar1 + 0x18;
        if (*(longlong *)(lVar1 + 0x28) != 0) {
          lVar5 = *(longlong *)(lVar1 + 0x28);
        }
        if ((*(uint *)(lVar5 + (ulonglong)((uVar4 & 0xffffff) >> 5) * 4) >> (uVar4 & 0x1f) & 1) != 0
           ) {
          lVar1 = *(longlong *)(lVar1 + 8);
          lVar5 = (ulonglong)(uVar4 & 0xffffff) * 0x70;
          if (((lVar1 + lVar5 != 0) && (*(longlong *)(lVar1 + 0x60 + lVar5) == lVar2)) &&
             (*(char *)(lVar1 + 1 + lVar5) != '\x04')) {
            FUN_1405a424c();
          }
        }
      }
    }
    *(undefined8 *)(param_1 + 0x80) = 0;
  }
  return;
}



// FUNCTION 1411c29ea FUN_1411c29ea body=450 status=ok
// SIG undefined FUN_1411c29ea(void)

void FUN_1411c29ea(longlong *param_1,longlong *param_2)

{
  int iVar1;
  uint uVar2;
  void *pvVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  void *local_58;
  int local_50;
  longlong local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((param_2 != (longlong *)0x0) && (lVar4 = (**(code **)(*param_2 + 0x18))(param_2), lVar4 != 0))
  {
    FUN_140457ffc(lVar4 + 0x30,param_1);
    FUN_140457ffc(lVar4 + 0x48,param_1);
    FUN_1410d9770(param_1,&local_58);
    if (DAT_14c947fe0 == 0) {
      lVar6 = FUN_14001cc68(0x140,0x10);
      FUN_1456b2032(lVar6);
      DAT_14c947fe0 = lVar6;
    }
    FUN_140045924(DAT_14c947fe0,&local_60,&local_58,1);
    FUN_1411f10ec(lVar4,0,local_60);
    if (local_40 != 0) {
      FUN_1400020a8();
    }
    iVar1 = *(int *)(lVar4 + 0xa8);
    if (0 < (longlong)iVar1) {
      local_58 = (void *)0x0;
      pvVar3 = *(void **)(lVar4 + 0xa0);
      local_50 = iVar1;
      FUN_145835afc(&local_58,iVar1,0);
      memcpy(local_58,pvVar3,(longlong)iVar1 << 3);
      pvVar3 = local_58;
      lVar4 = (longlong)local_50;
      if (lVar4 != 0) {
        lVar6 = 0;
        do {
          iVar1 = *(int *)((longlong)pvVar3 + lVar6 + 4);
          if ((((iVar1 != 0) && (uVar2 = *(uint *)((longlong)pvVar3 + lVar6), -1 < (int)uVar2)) &&
              ((int)uVar2 < DAT_14c9647dc)) &&
             (((plVar5 = (longlong *)
                         ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
               plVar5 != (longlong *)0x0 && ((int)plVar5[2] == iVar1)) &&
              (((*(uint *)(plVar5 + 1) & 0x10200000) == 0 && (*plVar5 != 0)))))) {
            (**(code **)(*param_1 + 0x38))(param_1);
          }
          lVar6 = lVar6 + 8;
        } while (lVar4 * 8 != lVar6);
      }
      if (local_58 != (void *)0x0) {
        FUN_1400020a8(local_58);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1411c2bae FUN_1411c2bae body=91 status=ok
// SIG undefined FUN_1411c2bae(void)

undefined8 * FUN_1411c2bae(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  
  if ((((param_2 == 0) || (lVar1 = FUN_140ebc504(), lVar1 == 0)) ||
      (*(int *)(param_2 + 0x38) < *(int *)(lVar1 + 0x38))) ||
     (*(longlong *)(*(longlong *)(param_2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) !=
      lVar1 + 0x30)) {
    param_2 = FUN_140ebc504();
  }
  FUN_140aed1ce(param_1,param_2);
  *param_1 = &PTR_FUN_14b9626a0;
  return param_1;
}



// FUNCTION 1411c2c0a FUN_1411c2c0a body=896 status=ok
// SIG undefined FUN_1411c2c0a(void)

void FUN_1411c2c0a(longlong *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  float fVar5;
  undefined1 auStack_158 [32];
  undefined8 *local_138;
  undefined8 local_128;
  undefined4 local_120;
  undefined1 local_118 [32];
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_98;
  undefined4 local_90;
  longlong local_88;
  undefined8 *local_80;
  undefined4 local_78;
  undefined1 local_70 [4];
  float local_6c;
  undefined4 local_68;
  undefined1 local_64;
  longlong local_60;
  undefined8 uStack_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_158;
  FUN_140ca2e50();
  FUN_1411c2f8c(param_1,1);
  fVar5 = (float)(**(code **)(*param_1 + 0x2c0))(param_1);
  lVar2 = FUN_14050c909();
  if (*(float *)(lVar2 + 0x4d4) <= fVar5) {
    lVar2 = FUN_1410ef012(param_1);
    if ((lVar2 != 0) && (lVar2 = *(longlong *)(lVar2 + 0x3f0), lVar2 != 0)) {
      local_70[0] = 0;
      local_68 = 0x44bb8000;
      local_64 = 0;
      local_60 = 0;
      uStack_58 = 0;
      local_80 = (undefined8 *)0x0;
      local_78 = 0;
      local_6c = fVar5;
      FUN_1446efa72(&local_80,0,3,0x10);
      puVar1 = local_80;
      local_78 = 3;
      *local_80 = &PTR_LAB_14b3f8df0;
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
      local_80[2] = lVar4;
      *local_80 = &PTR_FUN_14b967a60;
      local_80[3] = 0;
      FUN_14485c47a(local_80 + 3,param_1);
      puVar1[4] = &LAB_148d10ede;
      local_98 = 0;
      local_90 = 0;
      FUN_1404ebbc8(&local_98,&local_80);
      (**(code **)(*param_1 + 0x2b0))(param_1,local_118);
      local_b8 = local_f8;
      uStack_b0 = uStack_f0;
      local_a8 = local_e8;
      local_138 = &local_98;
      FUN_1404eb494(lVar2,&local_88,&local_b8,local_70);
      param_1[0x20] = local_88;
      FUN_1449db362(&local_80);
      if (local_60 != 0) {
        FUN_1400020a8();
      }
      local_70[0] = 0;
      local_68 = 0x44bb8000;
      local_64 = 0;
      local_60 = 0;
      uStack_58 = 0;
      lVar3 = FUN_14050c909();
      local_6c = fVar5 + *(float *)(lVar3 + 0x4d8);
      local_80 = (undefined8 *)0x0;
      local_78 = 0;
      FUN_1446efa72(&local_80,0,3,0x10);
      puVar1 = local_80;
      local_78 = 3;
      *local_80 = &PTR_LAB_14b3f8df0;
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
      local_80[2] = lVar4;
      *local_80 = &PTR_FUN_14b967a60;
      local_80[3] = 0;
      FUN_14485c47a(local_80 + 3,param_1);
      puVar1[4] = &LAB_148d10eee;
      local_128 = 0;
      local_120 = 0;
      FUN_1404ebbc8(&local_128,&local_80);
      (**(code **)(*param_1 + 0x2b0))(param_1,local_118);
      local_b8 = local_f8;
      uStack_b0 = uStack_f0;
      local_a8 = local_e8;
      local_138 = &local_128;
      FUN_1404eb494(lVar2,&local_88,&local_b8,local_70);
      param_1[0x21] = local_88;
      FUN_1449db362(&local_80);
      if (local_60 != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_50 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411c2f8c FUN_1411c2f8c body=691 status=ok
// SIG undefined FUN_1411c2f8c(void)

void FUN_1411c2f8c(longlong param_1,char param_2)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  bool bVar11;
  undefined1 auStack_78 [32];
  undefined1 local_58 [8];
  undefined8 *local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_2 == '\0') {
    FUN_1411c3258(param_1);
    puVar6 = *(undefined8 **)(param_1 + 0xd0);
    if (puVar6 != (undefined8 *)0x0) {
      iVar7 = *(int *)(puVar6 + 1);
      do {
        if (iVar7 == 0) goto LAB_1411c30ed;
        LOCK();
        iVar10 = *(int *)(puVar6 + 1);
        bVar11 = iVar7 == iVar10;
        if (bVar11) {
          *(int *)(puVar6 + 1) = iVar7 + 1;
          iVar10 = iVar7;
        }
        iVar7 = iVar10;
        UNLOCK();
      } while (!bVar11);
      if (*(longlong *)(param_1 + 200) != 0) {
        FUN_140457ffc(*(longlong *)(param_1 + 200) + 0x20,param_1);
      }
      LOCK();
      piVar2 = (int *)(puVar6 + 1);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)*puVar6)(puVar6);
        LOCK();
        piVar2 = (int *)((longlong)puVar6 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_78);
        }
      }
    }
    goto LAB_1411c30ed;
  }
  plVar4 = *(longlong **)(param_1 + 0xd0);
  if (plVar4 != (longlong *)0x0) {
    iVar7 = (int)plVar4[1];
    do {
      if (iVar7 == 0) goto LAB_1411c30e5;
      LOCK();
      iVar10 = (int)plVar4[1];
      bVar11 = iVar7 == iVar10;
      if (bVar11) {
        *(int *)(plVar4 + 1) = iVar7 + 1;
        iVar10 = iVar7;
      }
      iVar7 = iVar10;
      UNLOCK();
    } while (!bVar11);
    lVar5 = *(longlong *)(param_1 + 200);
    if (lVar5 != 0) {
      local_50 = (undefined8 *)0x0;
      local_48 = 0;
      FUN_1446efa72(&local_50,0,3,0x10);
      puVar6 = local_50;
      local_48 = 3;
      *local_50 = &PTR_LAB_149e020b0;
      LOCK();
      UNLOCK();
      lVar8 = DAT_14c758608 + 1;
      lVar9 = DAT_14c758608 + 1;
      if (lVar8 == 0) {
        LOCK();
        UNLOCK();
        lVar8 = DAT_14c758608 + 2;
        lVar9 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar9;
      local_50[2] = lVar8;
      *local_50 = &PTR_FUN_14b967b80;
      local_50[3] = 0;
      iVar7 = 0;
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
        iVar7 = *(int *)(lVar9 + 0x10);
        if (*(int *)(lVar9 + 0x10) == 0) {
          LOCK();
          iVar7 = DAT_14c964868 + 1;
          UNLOCK();
          iVar10 = DAT_14c964868 + 1;
          bVar11 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar7;
          if (bVar11) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar10);
          }
          LOCK();
          iVar7 = *(int *)(lVar9 + 0x10);
          bVar11 = iVar7 == 0;
          if (bVar11) {
            *(int *)(lVar9 + 0x10) = iVar10;
            iVar7 = 0;
          }
          UNLOCK();
          if (bVar11) {
            iVar7 = iVar10;
          }
        }
      }
      *(int *)((longlong)puVar6 + 0x1c) = iVar7;
      puVar6[4] = FUN_14587d8e0;
      FUN_1448b6402(lVar5 + 0x20,local_58,&local_50);
      if (local_48 != 0) {
        if (local_50 == (undefined8 *)0x0) goto LAB_1411c30db;
        (**(code **)*local_50)(local_50,0);
        FUN_1446efa72(&local_50,0,0,0x10);
        local_48 = 0;
      }
      if (local_50 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
LAB_1411c30db:
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
LAB_1411c30e5:
  FUN_1411c334a(param_1);
LAB_1411c30ed:
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1411c3258 FUN_1411c3258 body=242 status=ok
// SIG undefined FUN_1411c3258(void)

void FUN_1411c3258(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if (((*(int *)(param_1 + 0xfc) != 0) && (uVar1 = *(uint *)(param_1 + 0xf8), -1 < (int)uVar1)) &&
     ((int)uVar1 < DAT_14c9647dc)) {
    plVar3 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar3 != (longlong *)0x0) && ((int)plVar3[2] == *(int *)(param_1 + 0xfc))) &&
       ((*(uint *)(plVar3 + 1) & 0x10200000) == 0)) {
      if ((*(uint *)(plVar3 + 1) & 0x10200000) == 0) {
        lVar2 = *plVar3;
      }
      else {
        lVar2 = 0;
      }
      FUN_140457ffc(lVar2 + 0x200,param_1);
      *(undefined8 *)(param_1 + 0xf8) = 0;
    }
  }
  if (((*(int *)(param_1 + 0xf4) != 0) && (uVar1 = *(uint *)(param_1 + 0xf0), -1 < (int)uVar1)) &&
     ((int)uVar1 < DAT_14c9647dc)) {
    plVar3 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar3 != (longlong *)0x0) && ((int)plVar3[2] == *(int *)(param_1 + 0xf4))) &&
       ((*(uint *)(plVar3 + 1) & 0x10200000) == 0)) {
      if ((*(uint *)(plVar3 + 1) & 0x10200000) == 0) {
        lVar2 = *plVar3;
      }
      else {
        lVar2 = 0;
      }
      FUN_140457ffc(lVar2 + 0x300,param_1);
      *(undefined8 *)(param_1 + 0xf0) = 0;
    }
  }
  return;
}



// FUNCTION 1411c334a FUN_1411c334a body=2245 status=ok
// SIG undefined FUN_1411c334a(void)

void FUN_1411c334a(longlong *param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  undefined1 auStack_88 [40];
  longlong *local_60;
  int local_58;
  undefined1 local_50 [8];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar7 = (**(code **)(*param_1 + 0x2d0))();
  puVar1 = (uint *)(param_1 + 0x1e);
  cVar4 = FUN_14069eaf4(puVar1,lVar7);
  if (cVar4 != '\0') goto LAB_1411c338e;
  FUN_1411c3258(param_1);
  if (lVar7 == 0) {
    param_1[0x1e] = 0;
    goto LAB_1411c338e;
  }
  uVar2 = *(uint *)(lVar7 + 0xc);
  *puVar1 = uVar2;
  if ((int)uVar2 < DAT_14c9647dc) {
    lVar7 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
  }
  else {
    lVar7 = 0;
  }
  iVar5 = *(int *)(lVar7 + 0x10);
  if (iVar5 == 0) {
    LOCK();
    iVar5 = DAT_14c964868 + 1;
    UNLOCK();
    iVar6 = DAT_14c964868 + 1;
    bVar12 = DAT_14c964868 < 1000;
    DAT_14c964868 = iVar5;
    if (bVar12) {
      FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                    L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                    iVar6);
    }
    LOCK();
    iVar5 = *(int *)(lVar7 + 0x10);
    bVar12 = iVar5 == 0;
    if (bVar12) {
      *(int *)(lVar7 + 0x10) = iVar6;
      iVar5 = 0;
    }
    UNLOCK();
    if (bVar12) {
      iVar5 = iVar6;
    }
    *(int *)((longlong)param_1 + 0xf4) = iVar5;
    if (iVar5 == 0) goto LAB_1411c338e;
  }
  else {
    *(int *)((longlong)param_1 + 0xf4) = iVar5;
  }
  uVar2 = *puVar1;
  if (((((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) ||
      (plVar9 = (longlong *)
                ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
      plVar9 == (longlong *)0x0)) ||
     (((int)plVar9[2] != iVar5 || ((*(uint *)(plVar9 + 1) & 0x10200000) != 0)))) goto LAB_1411c338e;
  if ((*(uint *)(plVar9 + 1) & 0x10200000) == 0) {
    lVar7 = *plVar9;
  }
  else {
    lVar7 = 0;
  }
  local_60 = (longlong *)0x0;
  local_58 = 0;
  FUN_1446efa72(&local_60,0,3,0x10);
  plVar9 = local_60;
  local_58 = 3;
  *local_60 = (longlong)&PTR_LAB_14a915ec0;
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
  local_60[2] = lVar8;
  *local_60 = (longlong)&PTR_FUN_14b967bf0;
  local_60[3] = 0;
  iVar5 = 0;
  if (param_1 != (longlong *)0x0) {
    uVar2 = *(uint *)((longlong)param_1 + 0xc);
    *(uint *)(local_60 + 3) = uVar2;
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar11 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar11 = 0;
    }
    iVar5 = *(int *)(lVar11 + 0x10);
    if (*(int *)(lVar11 + 0x10) == 0) {
      LOCK();
      iVar5 = DAT_14c964868 + 1;
      UNLOCK();
      iVar6 = DAT_14c964868 + 1;
      bVar12 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar5;
      if (bVar12) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar6);
      }
      LOCK();
      iVar5 = *(int *)(lVar11 + 0x10);
      bVar12 = iVar5 == 0;
      if (bVar12) {
        *(int *)(lVar11 + 0x10) = iVar6;
        iVar5 = 0;
      }
      UNLOCK();
      if (bVar12) {
        iVar5 = iVar6;
      }
    }
  }
  *(int *)((longlong)plVar9 + 0x1c) = iVar5;
  plVar9[4] = (longlong)FUN_1411f1292;
  if (((local_58 == 0) || (local_60 == (longlong *)0x0)) ||
     (cVar4 = (**(code **)(*local_60 + 0x30))(), cVar4 == '\0')) {
    if (local_58 == 0) goto LAB_1411c3602;
    if (local_60 != (longlong *)0x0) {
      (**(code **)*local_60)(local_60,0);
      FUN_1446efa72(&local_60,0,0,0x10);
      goto LAB_1411c35f5;
    }
  }
  else {
    plVar9 = (longlong *)(lVar7 + 0x300);
    if (*(int *)(lVar7 + 0x314) < 1) {
      iVar5 = *(int *)(lVar7 + 0x308);
      iVar6 = *(int *)(lVar7 + 0x310) + -1;
      *(int *)(lVar7 + 0x310) = iVar6;
      if (iVar6 <= iVar5) {
        iVar6 = iVar5;
        if (0 < iVar5) {
          iVar10 = 0;
          do {
            if (((*(int *)(*plVar9 + 8 + (longlong)iVar10 * 0x10) == 0) ||
                (plVar3 = *(longlong **)(*plVar9 + (longlong)iVar10 * 0x10),
                plVar3 == (longlong *)0x0)) ||
               (cVar4 = (**(code **)(*plVar3 + 0x28))(), cVar4 != '\0')) {
              FUN_14005b288(plVar9,iVar10);
              FUN_14005b248(plVar9);
            }
            else {
              iVar10 = iVar10 + 1;
            }
            iVar6 = *(int *)(lVar7 + 0x308);
          } while (iVar10 < iVar6);
        }
        iVar10 = 2;
        if (2 < iVar6 * 2) {
          iVar10 = iVar6 * 2;
        }
        *(int *)(lVar7 + 0x310) = iVar10;
        if ((iVar10 < iVar5) && (*(int *)(lVar7 + 0x30c) != iVar6)) {
          FUN_14045812c();
        }
      }
    }
    if ((local_58 != 0) && (local_60 != (longlong *)0x0)) {
      (**(code **)(*local_60 + 0x38))(local_60,local_50);
    }
    iVar5 = *(int *)(lVar7 + 0x308);
    *(uint *)(lVar7 + 0x308) = iVar5 + 1U;
    if (*(uint *)(lVar7 + 0x30c) < iVar5 + 1U) {
      FUN_1447a71f6(plVar9,iVar5);
    }
    lVar7 = *plVar9;
    lVar11 = (longlong)iVar5 * 0x10;
    *(undefined8 *)(lVar7 + lVar11) = 0;
    *(undefined4 *)(lVar7 + 8 + lVar11) = 0;
    *(longlong **)(lVar7 + lVar11) = local_60;
    local_60 = (longlong *)0x0;
    *(int *)(lVar7 + 8 + lVar11) = local_58;
LAB_1411c35f5:
    local_58 = 0;
LAB_1411c3602:
    if (local_60 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  if (*(int *)((longlong)param_1 + 0xf4) == 0) {
LAB_1411c39e0:
    lVar7 = 0;
  }
  else {
    uVar2 = *puVar1;
    lVar7 = 0;
    if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
      plVar9 = (longlong *)
               ((ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
      if ((plVar9 == (longlong *)0x0) ||
         (((int)plVar9[2] != *(int *)((longlong)param_1 + 0xf4) ||
          ((*(uint *)(plVar9 + 1) & 0x10200000) != 0)))) goto LAB_1411c39e0;
      lVar7 = *plVar9;
    }
  }
  if (*(longlong *)(lVar7 + 0x1c8) == 0) {
    param_1[0x1f] = 0;
    goto LAB_1411c338e;
  }
  uVar2 = *(uint *)(*(longlong *)(lVar7 + 0x1c8) + 0xc);
  *(uint *)(param_1 + 0x1f) = uVar2;
  if ((int)uVar2 < DAT_14c9647dc) {
    lVar7 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
  }
  else {
    lVar7 = 0;
  }
  iVar5 = *(int *)(lVar7 + 0x10);
  if (iVar5 == 0) {
    LOCK();
    iVar5 = DAT_14c964868 + 1;
    UNLOCK();
    iVar6 = DAT_14c964868 + 1;
    bVar12 = DAT_14c964868 < 1000;
    DAT_14c964868 = iVar5;
    if (bVar12) {
      FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                    L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                    iVar6);
    }
    LOCK();
    iVar5 = *(int *)(lVar7 + 0x10);
    bVar12 = iVar5 == 0;
    if (bVar12) {
      *(int *)(lVar7 + 0x10) = iVar6;
      iVar5 = 0;
    }
    UNLOCK();
    if (bVar12) {
      iVar5 = iVar6;
    }
    *(int *)((longlong)param_1 + 0xfc) = iVar5;
    if (iVar5 == 0) goto LAB_1411c338e;
  }
  else {
    *(int *)((longlong)param_1 + 0xfc) = iVar5;
  }
  uVar2 = *(uint *)(param_1 + 0x1f);
  if (((((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) ||
      (plVar9 = (longlong *)
                ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
      plVar9 == (longlong *)0x0)) ||
     (((int)plVar9[2] != iVar5 || ((*(uint *)(plVar9 + 1) & 0x10200000) != 0)))) goto LAB_1411c338e;
  if ((*(uint *)(plVar9 + 1) & 0x10200000) == 0) {
    lVar7 = *plVar9;
  }
  else {
    lVar7 = 0;
  }
  local_60 = (longlong *)0x0;
  local_58 = 0;
  FUN_1446efa72(&local_60,0,3,0x10);
  plVar9 = local_60;
  local_58 = 3;
  *local_60 = (longlong)&PTR_LAB_14a7feda0;
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
  local_60[2] = lVar8;
  *local_60 = (longlong)&PTR_FUN_14b967c60;
  local_60[3] = 0;
  iVar5 = 0;
  if (param_1 != (longlong *)0x0) {
    uVar2 = *(uint *)((longlong)param_1 + 0xc);
    *(uint *)(local_60 + 3) = uVar2;
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar11 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar11 = 0;
    }
    iVar5 = *(int *)(lVar11 + 0x10);
    if (*(int *)(lVar11 + 0x10) == 0) {
      LOCK();
      iVar5 = DAT_14c964868 + 1;
      UNLOCK();
      iVar6 = DAT_14c964868 + 1;
      bVar12 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar5;
      if (bVar12) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar6);
      }
      LOCK();
      iVar5 = *(int *)(lVar11 + 0x10);
      bVar12 = iVar5 == 0;
      if (bVar12) {
        *(int *)(lVar11 + 0x10) = iVar6;
        iVar5 = 0;
      }
      UNLOCK();
      if (bVar12) {
        iVar5 = iVar6;
      }
    }
  }
  *(int *)((longlong)plVar9 + 0x1c) = iVar5;
  plVar9[4] = (longlong)FUN_140a19814;
  if (((local_58 == 0) || (local_60 == (longlong *)0x0)) ||
     (cVar4 = (**(code **)(*local_60 + 0x30))(), cVar4 == '\0')) {
    if (local_58 != 0) {
      if (local_60 == (longlong *)0x0) goto LAB_1411c338e;
      (**(code **)*local_60)(local_60,0);
      FUN_1446efa72(&local_60,0,0,0x10);
      goto LAB_1411c388a;
    }
  }
  else {
    plVar9 = (longlong *)(lVar7 + 0x200);
    if (*(int *)(lVar7 + 0x214) < 1) {
      iVar5 = *(int *)(lVar7 + 0x208);
      iVar6 = *(int *)(lVar7 + 0x210) + -1;
      *(int *)(lVar7 + 0x210) = iVar6;
      if (iVar6 <= iVar5) {
        iVar6 = iVar5;
        if (0 < iVar5) {
          iVar10 = 0;
          do {
            if (((*(int *)(*plVar9 + 8 + (longlong)iVar10 * 0x10) == 0) ||
                (plVar3 = *(longlong **)(*plVar9 + (longlong)iVar10 * 0x10),
                plVar3 == (longlong *)0x0)) ||
               (cVar4 = (**(code **)(*plVar3 + 0x28))(), cVar4 != '\0')) {
              FUN_14005b288(plVar9,iVar10);
              FUN_14005b248(plVar9);
            }
            else {
              iVar10 = iVar10 + 1;
            }
            iVar6 = *(int *)(lVar7 + 0x208);
          } while (iVar10 < iVar6);
        }
        iVar10 = 2;
        if (2 < iVar6 * 2) {
          iVar10 = iVar6 * 2;
        }
        *(int *)(lVar7 + 0x210) = iVar10;
        if ((iVar10 < iVar5) && (*(int *)(lVar7 + 0x20c) != iVar6)) {
          FUN_14045812c();
        }
      }
    }
    if ((local_58 != 0) && (local_60 != (longlong *)0x0)) {
      (**(code **)(*local_60 + 0x38))(local_60,local_50);
    }
    iVar5 = *(int *)(lVar7 + 0x208);
    *(uint *)(lVar7 + 0x208) = iVar5 + 1U;
    if (*(uint *)(lVar7 + 0x20c) < iVar5 + 1U) {
      FUN_1447a71f6(plVar9,iVar5);
    }
    lVar7 = *plVar9;
    lVar11 = (longlong)iVar5 * 0x10;
    *(undefined8 *)(lVar7 + lVar11) = 0;
    *(undefined4 *)(lVar7 + 8 + lVar11) = 0;
    *(longlong **)(lVar7 + lVar11) = local_60;
    local_60 = (longlong *)0x0;
    *(int *)(lVar7 + 8 + lVar11) = local_58;
LAB_1411c388a:
    local_58 = 0;
  }
  if (local_60 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_1411c338e:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1411c3c10 FUN_1411c3c10 body=489 status=ok
// SIG undefined FUN_1411c3c10(void)

undefined8 * FUN_1411c3c10(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  bool bVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar3 = *(longlong **)(param_1 + 0xd0);
  if (plVar3 != (longlong *)0x0) {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_1411c3d8a;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar11 = iVar6 == iVar5;
      if (bVar11) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar11);
    lVar7 = *(longlong *)(param_1 + 200);
    if (lVar7 != 0) {
      if ((((*(int *)(lVar7 + 0x44) == 0) || (uVar2 = *(uint *)(lVar7 + 0x40), (int)uVar2 < 0)) ||
          (DAT_14c9647dc <= (int)uVar2)) ||
         (((plVar8 = (longlong *)
                     ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
           plVar8 == (longlong *)0x0 || ((int)plVar8[2] != *(int *)(lVar7 + 0x44))) ||
          (((*(uint *)(plVar8 + 1) & 0x10200000) != 0 ||
           (plVar8 = (longlong *)*plVar8, plVar8 == (longlong *)0x0)))))) {
        if ((((*(int *)(lVar7 + 0x3c) == 0) || (uVar2 = *(uint *)(lVar7 + 0x38), (int)uVar2 < 0)) ||
            ((DAT_14c9647dc <= (int)uVar2 ||
             (((plVar8 = (longlong *)
                         ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
               plVar8 == (longlong *)0x0 || ((int)plVar8[2] != *(int *)(lVar7 + 0x3c))) ||
              ((*(uint *)(plVar8 + 1) & 0x10200000) != 0)))))) || (*plVar8 == 0)) {
          local_28 = *(undefined8 *)(lVar7 + 0x60);
          uVar12 = *(undefined4 *)(lVar7 + 0x50);
          uVar13 = *(undefined4 *)(lVar7 + 0x54);
          uVar14 = *(undefined4 *)(lVar7 + 0x58);
          uVar15 = *(undefined4 *)(lVar7 + 0x5c);
        }
        else {
          lVar4 = *(longlong *)(*plVar8 + 0x1c8);
          if (lVar4 != 0) {
            local_38 = *(undefined8 *)(lVar4 + 0x260);
            uStack_30 = *(undefined8 *)(lVar4 + 0x268);
            local_28 = *(undefined8 *)(lVar4 + 0x270);
            goto LAB_1411c3d06;
          }
          local_28 = DAT_14c8464f0;
          uVar12 = (undefined4)DAT_14c8464e0;
          uVar13 = DAT_14c8464e0._4_4_;
          uVar14 = (undefined4)DAT_14c8464e8;
          uVar15 = DAT_14c8464e8._4_4_;
        }
        local_38 = CONCAT44(uVar13,uVar12);
        uStack_30 = CONCAT44(uVar15,uVar14);
      }
      else {
        (**(code **)(*plVar8 + 0x4b0))(plVar8,&local_38,*(undefined8 *)(lVar7 + 0x48));
      }
LAB_1411c3d06:
      *param_2 = 0;
      param_2[1] = 0;
      *(undefined4 *)(param_2 + 2) = 0;
      *(undefined4 *)((longlong)param_2 + 0x14) = 0;
      *(undefined4 *)(param_2 + 3) = 0;
      *(undefined4 *)((longlong)param_2 + 0x1c) = 0x3ff00000;
      *(undefined4 *)(param_2 + 4) = (undefined4)local_38;
      *(undefined4 *)((longlong)param_2 + 0x24) = local_38._4_4_;
      *(int *)(param_2 + 5) = (int)uStack_30;
      *(int *)((longlong)param_2 + 0x2c) = (int)((ulonglong)uStack_30 >> 0x20);
      param_2[6] = local_28;
      param_2[7] = 0;
      *(undefined4 *)(param_2 + 8) = 0;
      *(undefined4 *)((longlong)param_2 + 0x44) = 0x3ff00000;
      *(undefined4 *)(param_2 + 9) = 0;
      *(undefined4 *)((longlong)param_2 + 0x4c) = 0x3ff00000;
      param_2[10] = 0x3ff0000000000000;
      param_2[0xb] = 0;
    }
    LOCK();
    plVar8 = plVar3 + 1;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)*plVar8 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
    if (lVar7 != 0) goto LAB_1411c3d51;
  }
LAB_1411c3d8a:
  puVar9 = &DAT_14c846480;
  puVar10 = param_2;
  for (lVar7 = 0xc; lVar7 != 0; lVar7 = lVar7 + -1) {
    *puVar10 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar10 = puVar10 + 1;
  }
LAB_1411c3d51:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1411c3dfa FUN_1411c3dfa body=228 status=ok
// SIG undefined FUN_1411c3dfa(void)

void FUN_1411c3dfa(undefined8 *param_1)

{
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 7) = 2;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0;
  *(undefined4 *)((longlong)param_1 + 0xac) = 0;
  *(undefined8 *)((longlong)param_1 + 0xcc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0;
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  *(undefined8 *)((longlong)param_1 + 0xfd) = 0;
  *(undefined8 *)((longlong)param_1 + 0x105) = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  *param_1 = &PTR_FUN_14b023790;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 2;
  *(undefined1 *)(param_1 + 0x3e) = 0;
  *(undefined4 *)((longlong)param_1 + 0x147) = 0;
  param_1[0x30] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  return;
}



// FUNCTION 1411c3ede FUN_1411c3ede body=250 status=ok
// SIG undefined FUN_1411c3ede(void)

undefined4 FUN_1411c3ede(longlong param_1,undefined8 param_2,longlong *param_3)

{
  uint uVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  longlong local_48;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar1 = *(uint *)(param_1 + 0x18);
    uVar4 = 0;
    if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_1411c3f4d;
    puVar5 = (undefined8 *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if ((puVar5 != (undefined8 *)0x0) &&
       ((*(int *)(puVar5 + 2) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(puVar5 + 1) & 0x10200000) == 0)))) {
      uVar4 = *puVar5;
      goto LAB_1411c3f4d;
    }
  }
  uVar4 = 0;
LAB_1411c3f4d:
  pcVar2 = *(code **)(param_1 + 0x20);
  local_58[0] = *param_3;
  local_48 = param_3[2];
  param_3[2] = 0;
  local_38 = (undefined4)param_3[4];
  uStack_34 = *(undefined4 *)((longlong)param_3 + 0x24);
  uStack_30 = (undefined4)param_3[5];
  uStack_2c = *(undefined4 *)((longlong)param_3 + 0x2c);
  local_28 = (undefined4)param_3[6];
  uStack_24 = *(undefined4 *)((longlong)param_3 + 0x34);
  uStack_20 = (undefined4)param_3[7];
  uStack_1c = *(undefined4 *)((longlong)param_3 + 0x3c);
  if (local_58[0] != 0) {
    *param_3 = 0;
  }
  uVar3 = (*pcVar2)(uVar4,local_28,local_58);
  if (*param_3 != 0) {
    plVar6 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar6 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar6 + 0x10))(plVar6);
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411c3fda FUN_1411c3fda body=216 status=ok
// SIG undefined FUN_1411c3fda(void)

undefined4 FUN_1411c3fda(longlong param_1,int param_2,longlong *param_3)

{
  code *pcVar1;
  undefined4 uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong local_40;
  longlong *local_38;
  undefined1 local_30;
  undefined8 local_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((longlong)*(int *)(param_1 + 0x60) != 0) {
    plVar3 = *(longlong **)(param_1 + 0x58);
    lVar6 = (longlong)*(int *)(param_1 + 0x60) << 5;
    do {
      if (*(int *)(*plVar3 + 8) == param_2) {
        if (plVar3 != (longlong *)0x0) {
          if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
            local_48 = *(undefined8 *)(param_1 + 0x20);
          }
          else {
            local_48 = 0;
          }
          local_30 = 5;
          local_2c = 0xffffffff;
          pcVar1 = (code *)*param_3;
          plVar5 = param_3 + 4;
          if ((longlong *)param_3[2] != (longlong *)0x0) {
            plVar5 = (longlong *)param_3[2];
          }
          local_40 = param_1;
          local_38 = plVar3;
          uVar4 = (**(code **)(*plVar5 + 8))();
          uVar2 = (*pcVar1)(uVar4,&local_48);
          goto LAB_1411c402e;
        }
        break;
      }
      plVar3 = plVar3 + 4;
      lVar6 = lVar6 + -0x20;
    } while (lVar6 != 0);
  }
  uVar2 = 0;
LAB_1411c402e:
  if (*param_3 != 0) {
    plVar3 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar3 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 1411c40b4 FUN_1411c40b4 body=321 status=ok
// SIG undefined FUN_1411c40b4(void)

void FUN_1411c40b4(longlong param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  
  lVar1 = param_1 + 0x20;
  uVar2 = *(uint *)(param_1 + 0x10);
  iVar5 = *(int *)(param_1 + 0x118);
  *(uint *)(param_1 + 0x118) = iVar5 + uVar2;
  if ((uint)(*(int *)(param_1 + 0x11c) - iVar5) < uVar2) {
    FUN_147d6b426(lVar1,iVar5);
  }
  lVar7 = *(longlong *)(param_1 + 0x110);
  if (*(longlong *)(param_1 + 0x110) == 0) {
    lVar7 = lVar1;
  }
  FUN_1411c41f5((longlong)iVar5 * 0x10 + lVar7,uVar2);
  if (*(byte *)(param_1 + 10) < *(byte *)(param_1 + 0xb)) {
    iVar5 = *(int *)(param_1 + 0x14);
    if (0 < iVar5 && iVar5 < (int)((uint)*(byte *)(param_1 + 0xb) - (uint)*(byte *)(param_1 + 10)))
    {
      lVar7 = 0;
      lVar8 = 0;
      do {
        uVar4 = FUN_1411c4210(*(longlong *)(*(longlong *)(param_2 + 0x10) + lVar8 * 8) + 0x38);
        lVar6 = *(longlong *)(param_1 + 0x110);
        if (*(longlong *)(param_1 + 0x110) == 0) {
          lVar6 = lVar1;
        }
        *(undefined4 *)(lVar6 + lVar7) = uVar4;
        lVar8 = lVar8 + 1;
        iVar5 = *(int *)(param_1 + 0x14);
        lVar7 = lVar7 + 0x10;
      } while (lVar8 < iVar5);
    }
  }
  else {
    iVar5 = *(int *)(param_1 + 0x14);
  }
  iVar3 = *(int *)(param_1 + 0x10);
  if (iVar5 < iVar3) {
    lVar7 = (longlong)iVar5;
    lVar8 = lVar7 << 4;
    do {
      lVar6 = *(longlong *)(*(longlong *)(param_2 + 0x10) + lVar7 * 8);
      if (((*(byte *)(lVar6 + 0x34) & 2) == 0) &&
         (*(char *)(lVar6 + 0x2c) != '\0' || *(int *)(lVar6 + 0x28) != 0)) {
        uVar4 = FUN_1411c4210(lVar6 + 0x38);
        lVar6 = *(longlong *)(param_1 + 0x110);
        if (*(longlong *)(param_1 + 0x110) == 0) {
          lVar6 = lVar1;
        }
        *(undefined4 *)(lVar6 + lVar8) = uVar4;
        iVar3 = *(int *)(param_1 + 0x10);
      }
      lVar7 = lVar7 + 1;
      lVar8 = lVar8 + 0x10;
    } while (lVar7 < iVar3);
  }
  *(undefined8 *)(param_1 + 0x18) = 1;
  return;
}



// FUNCTION 1411c41f5 FUN_1411c41f5 body=27 status=ok
// SIG undefined FUN_1411c41f5(void)

void FUN_1411c41f5(undefined4 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0;
    *(undefined8 *)(param_1 + 2) = 0;
    param_1 = param_1 + 4;
  }
  return;
}



// FUNCTION 1411c4210 FUN_1411c4210 body=128 status=ok
// SIG undefined FUN_1411c4210(void)

uint FUN_1411c4210(longlong *param_1)

{
  longlong lVar1;
  uint uVar2;
  undefined1 auStack_38 [32];
  longlong local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if ((int)param_1[1] == DAT_14c845dc4 && *param_1 == DAT_14c845dbc) {
    uVar2 = 0;
  }
  else {
    local_10 = (int)param_1[1];
    local_18 = *param_1;
    uVar2 = 0x1505;
    lVar1 = 0;
    do {
      uVar2 = (uint)*(byte *)((longlong)&local_18 + lVar1) + uVar2 * 0x21;
      lVar1 = lVar1 + 1;
    } while (lVar1 != 0xc);
    uVar2 = -(uint)(uVar2 == 0) | uVar2;
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411c4292 FUN_1411c4292 body=178 status=ok
// SIG undefined FUN_1411c4292(void)

void FUN_1411c4292(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_58 [44];
  undefined8 local_2c;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1411c4346();
  if (param_2 != (longlong *)0x0) {
    uVar1 = FUN_140427846();
    plVar2 = (longlong *)(**(code **)(*param_2 + 0x288))(param_2,uVar1);
    if (plVar2 != (longlong *)0x0) {
      uVar1 = FUN_140427846();
      plVar3 = (longlong *)FUN_144718840(plVar2,uVar1);
      if ((plVar2 != plVar3) && (plVar3 != (longlong *)0x0)) {
        lVar4 = (**(code **)(*plVar3 + 0x10))(plVar3);
        if ((lVar4 == 0) || (*(int *)(lVar4 + 0x10) != 1)) {
          (**(code **)(*plVar3 + 0x20))(plVar3,&local_2c);
          *(undefined4 *)(param_1 + 0x50) = local_24;
          *(undefined8 *)(param_1 + 0x48) = local_2c;
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411c4346 FUN_1411c4346 body=506 status=ok
// SIG undefined FUN_1411c4346(void)

void FUN_1411c4346(longlong param_1,longlong *param_2)

{
  uint uVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_68 [40];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  longlong local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 != (longlong *)0x0) {
    uVar3 = FUN_1401b0f18();
    plVar4 = (longlong *)(**(code **)(*param_2 + 0x288))(param_2,uVar3);
    if (plVar4 != (longlong *)0x0) {
      uVar3 = FUN_1401b0f18();
      plVar5 = (longlong *)FUN_144718840(plVar4,uVar3);
      if ((plVar4 != plVar5) && (plVar5 != (longlong *)0x0)) {
        lVar6 = (**(code **)(*plVar5 + 0x28))(plVar5);
        if (lVar6 != 0) {
          FUN_1406c9d00(lVar6,&local_40);
          if (*(longlong *)(param_1 + 8) != CONCAT44(uStack_3c,local_40)) {
            *(undefined8 *)(param_1 + 0x18) = 0;
          }
          *(longlong *)(param_1 + 8) = CONCAT44(uStack_3c,local_40);
          if (*(longlong *)(param_1 + 0x10) != CONCAT44(uStack_34,uStack_38)) {
            *(undefined8 *)(param_1 + 0x18) = 0;
          }
          uVar3 = FUN_14477b664();
          uVar3 = FUN_14477b664(uVar3);
          *(undefined8 *)(param_1 + 0x10) = uVar3;
          *(longlong *)(param_1 + 0x18) = local_30;
          if (((*(int *)(lVar6 + 0xd4) != 0) && (uVar1 = *(uint *)(lVar6 + 0xd0), -1 < (int)uVar1))
             && ((int)uVar1 < DAT_14c9647dc)) {
            plVar4 = (longlong *)
                     ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
            if (((plVar4 != (longlong *)0x0) && ((int)plVar4[2] == *(int *)(lVar6 + 0xd4))) &&
               (((*(uint *)(plVar4 + 1) & 0x10200000) == 0 &&
                ((lVar6 = *plVar4, lVar6 != 0 && (*(char *)(lVar6 + 0x7c0) == '\x01')))))) {
              FUN_1400bbfae(&local_40,lVar6);
              *(undefined4 *)(param_1 + 0x28) = local_40;
              *(undefined4 *)(param_1 + 0x2c) = uStack_3c;
              *(undefined4 *)(param_1 + 0x30) = uStack_38;
              *(undefined4 *)(param_1 + 0x34) = uStack_34;
              if ((undefined4 *)(param_1 + 0x28) == &local_40) {
                if (local_30 != 0) {
                  FUN_1400020a8();
                }
              }
              else {
                if (*(longlong *)(param_1 + 0x38) != 0) {
                  FUN_1400020a8();
                }
                *(longlong *)(param_1 + 0x38) = local_30;
                local_30 = 0;
                *(undefined4 *)(param_1 + 0x40) = local_28;
                *(undefined4 *)(param_1 + 0x44) = local_24;
              }
              cVar2 = (*(code *)PTR_FUN_14c758760)();
              if (cVar2 != '\0') {
                uVar1 = *(uint *)(lVar6 + 0xc);
                if ((int)uVar1 < DAT_14c9647dc) {
                  lVar7 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
                }
                else {
                  lVar7 = 0;
                }
                if ((*(uint *)(lVar7 + 8) & 0x8400000) != 0) {
                  *(undefined8 *)(param_1 + 0x20) = 0;
                  goto LAB_1411c446b;
                }
              }
              FUN_14485c47a(param_1 + 0x20,lVar6);
            }
          }
        }
      }
    }
  }
LAB_1411c446b:
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411c4542 FUN_1411c4542 body=40 status=ok
// SIG undefined FUN_1411c4542(void)

undefined8 FUN_1411c4542(undefined8 param_1,int param_2)

{
  FUN_1411c456a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1411c456a FUN_1411c456a body=3055 status=ok
// SIG undefined FUN_1411c456a(void)

void FUN_1411c456a(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  
  *param_1 = &PTR_FUN_14b711280;
  param_1[5] = &PTR_FUN_14b7121c0;
  param_1[6] = &PTR_LAB_14b712200;
  param_1[0x2f] = &PTR_FUN_14b712250;
  param_1[0x3c] = &PTR_FUN_14b712390;
  param_1[0x3d] = &PTR_FUN_14b712420;
  param_1[0x20b] = &PTR_FUN_14b712478;
  param_1[0x238] = &PTR_FUN_14b712490;
  FUN_144760e21(param_1[0x8fc],*(undefined4 *)(param_1 + 0x8fd));
  if (param_1[0x8fc] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x8fa] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x8df] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x8da] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x8d5] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x8d0] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x8ca],*(undefined4 *)(param_1 + 0x8cb));
  if (param_1[0x8ca] != 0) {
    FUN_1400020a8();
  }
  lVar6 = DAT_14c9a3d60;
  if (*(int *)(param_1 + 0x8c8) != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      iVar7 = *(int *)(param_1 + 0x8c8) + -1;
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
    *(undefined4 *)(param_1 + 0x8c8) = 0;
  }
  lVar6 = DAT_14c9a3d60;
  if (*(int *)((longlong)param_1 + 0x4634) != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      iVar7 = *(int *)((longlong)param_1 + 0x4634) + -1;
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
    *(undefined4 *)((longlong)param_1 + 0x4634) = 0;
  }
  lVar6 = DAT_14c9a3d60;
  if (*(int *)(param_1 + 0x8c5) != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      iVar7 = *(int *)(param_1 + 0x8c5) + -1;
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
    *(undefined4 *)(param_1 + 0x8c5) = 0;
  }
  lVar6 = DAT_14c9a3d60;
  if (*(int *)((longlong)param_1 + 0x461c) != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      iVar7 = *(int *)((longlong)param_1 + 0x461c) + -1;
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
    *(undefined4 *)((longlong)param_1 + 0x461c) = 0;
  }
  lVar6 = DAT_14c9a3d60;
  if (*(int *)(param_1 + 0x8c2) != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      iVar7 = *(int *)(param_1 + 0x8c2) + -1;
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
    *(undefined4 *)(param_1 + 0x8c2) = 0;
  }
  lVar6 = DAT_14c9a3d60;
  if (*(int *)((longlong)param_1 + 0x4604) != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      iVar7 = *(int *)((longlong)param_1 + 0x4604) + -1;
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
    *(undefined4 *)((longlong)param_1 + 0x4604) = 0;
  }
  lVar6 = DAT_14c9a3d60;
  if (*(int *)(param_1 + 0x8bf) != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      iVar7 = *(int *)(param_1 + 0x8bf) + -1;
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
    *(undefined4 *)(param_1 + 0x8bf) = 0;
  }
  lVar6 = DAT_14c9a3d60;
  if (*(int *)((longlong)param_1 + 0x45ec) != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      iVar7 = *(int *)((longlong)param_1 + 0x45ec) + -1;
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
    *(undefined4 *)((longlong)param_1 + 0x45ec) = 0;
  }
  lVar6 = DAT_14c9a3d60;
  if (*(int *)(param_1 + 0x8bc) != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      iVar7 = *(int *)(param_1 + 0x8bc) + -1;
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
    *(undefined4 *)(param_1 + 0x8bc) = 0;
  }
  lVar6 = DAT_14c9a3d60;
  if (*(int *)((longlong)param_1 + 0x45d4) != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      iVar7 = *(int *)((longlong)param_1 + 0x45d4) + -1;
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
    *(undefined4 *)((longlong)param_1 + 0x45d4) = 0;
  }
  lVar6 = DAT_14c9a3d60;
  if (*(int *)(param_1 + 0x8b9) != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      iVar7 = *(int *)(param_1 + 0x8b9) + -1;
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
    *(undefined4 *)(param_1 + 0x8b9) = 0;
  }
  lVar6 = DAT_14c9a3d60;
  if (*(int *)((longlong)param_1 + 0x45bc) != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      iVar7 = *(int *)((longlong)param_1 + 0x45bc) + -1;
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
    *(undefined4 *)((longlong)param_1 + 0x45bc) = 0;
  }
  lVar6 = DAT_14c9a3d60;
  if (*(int *)(param_1 + 0x8b6) != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      iVar7 = *(int *)(param_1 + 0x8b6) + -1;
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
    *(undefined4 *)(param_1 + 0x8b6) = 0;
  }
  lVar6 = DAT_14c9a3d60;
  if (*(int *)((longlong)param_1 + 0x45a4) != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      iVar7 = *(int *)((longlong)param_1 + 0x45a4) + -1;
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
    *(undefined4 *)((longlong)param_1 + 0x45a4) = 0;
  }
  lVar6 = DAT_14c9a3d60;
  if (*(int *)(param_1 + 0x8b3) != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      iVar7 = *(int *)(param_1 + 0x8b3) + -1;
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
    *(undefined4 *)(param_1 + 0x8b3) = 0;
  }
  if (param_1[0x8af] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x8ad] != 0) {
    FUN_1400020a8();
  }
  plVar4 = (longlong *)param_1[0x8a8];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  if (param_1[0x8a5] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x89c] != 0) {
    FUN_1400020a8();
  }
  plVar4 = (longlong *)param_1[0x89a];
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
  if (param_1[0x895] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x88e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x88c] != 0) {
    FUN_1400020a8();
  }
  plVar4 = (longlong *)param_1[0x888];
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
  plVar4 = (longlong *)param_1[0x885];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  if (param_1[0x881] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x87f] != 0) {
    FUN_1400020a8();
  }
  plVar4 = (longlong *)param_1[0x87d];
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
  FUN_140da7f48(param_1 + 0x857);
  if (*(char *)((longlong)param_1 + 0x42b4) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x42b4) = 0;
  }
  if (param_1[0x853] != 0) {
    FUN_1400020a8();
  }
  if (*(char *)((longlong)param_1 + 0x4294) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x4294) = 0;
  }
  plVar4 = (longlong *)param_1[0x84e];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  plVar4 = (longlong *)param_1[0x844];
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
  FUN_144760e21(param_1[0x83d],*(undefined4 *)(param_1 + 0x83e));
  if (param_1[0x83d] != 0) {
    FUN_1400020a8();
  }
  FUN_14169169a(param_1);
  return;
}



// FUNCTION 1411c515e FUN_1411c515e body=221 status=ok
// SIG undefined FUN_1411c515e(void)

longlong FUN_1411c515e(void)

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
  if (DAT_14cab40e8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147592a2d;
    local_40 = FUN_146343f0e;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x90;
    FUN_14081cfa3(L"/Script/Constraints",L"TickableConstraint",&DAT_14cab40e8,&DAT_147592a2c);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cab40e8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411c523c FUN_1411c523c body=221 status=ok
// SIG undefined FUN_1411c523c(void)

longlong FUN_1411c523c(void)

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
  if (DAT_14cac4a88 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147882931;
    local_40 = FUN_146386cc3;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/Engine",L"MeshDeformer",&DAT_14cac4a88,&DAT_147882930);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cac4a88;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411c531a FUN_1411c531a body=221 status=ok
// SIG undefined FUN_1411c531a(void)

longlong FUN_1411c531a(void)

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
  if (DAT_14cac83f8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1478a5c95;
    local_40 = &LAB_1459bea42;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/Engine",L"SparseVolumeTexture",&DAT_14cac83f8,FUN_146396f3e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cac83f8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411c53f8 FUN_1411c53f8 body=221 status=ok
// SIG undefined FUN_1411c53f8(void)

longlong FUN_1411c53f8(void)

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
  if (DAT_14cb1ee68 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147eb0c9f;
    local_40 = FUN_1464294ca;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x30;
    FUN_14081cfa3(L"/Script/AIModule",L"BlackboardKeyType",&DAT_14cb1ee68,&DAT_147eb0c9e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb1ee68;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411c54d6 FUN_1411c54d6 body=221 status=ok
// SIG undefined FUN_1411c54d6(void)

longlong FUN_1411c54d6(void)

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
  if (DAT_14cc0be10 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1492ed3d5;
    local_40 = FUN_14671cd98;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x38;
    FUN_14081cfa3(L"/Script/InterchangeCore",L"InterchangeTranslatorBase",&DAT_14cc0be10,
                  &DAT_1492ed3d4);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cc0be10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411c55ba FUN_1411c55ba body=221 status=ok
// SIG undefined FUN_1411c55ba(void)

longlong FUN_1411c55ba(void)

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
  if (DAT_14cc1c6a8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1494a83cd;
    local_40 = FUN_14673994d;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x50;
    FUN_14081cfa3(L"/Script/OptimusCore",L"OptimusComponentSourceBinding",&DAT_14cc1c6a8,
                  &DAT_1494a83cc);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cc1c6a8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411c5698 FUN_1411c5698 body=326 status=ok
// SIG undefined FUN_1411c5698(void)

undefined8 FUN_1411c5698(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((*(int *)(param_1 + 0x1c) == 0) || (uVar1 = *(uint *)(param_1 + 0x18), (int)uVar1 < 0))
  goto LAB_1411c57ac;
  if (DAT_14c9647dc <= (int)uVar1) goto LAB_1411c57ac;
  plVar5 = (longlong *)
           ((ulonglong)((uVar1 & 0xffff) * 0x18) +
           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
  if (((plVar5 == (longlong *)0x0) || ((int)plVar5[2] != *(int *)(param_1 + 0x1c))) ||
     (uVar2 = *(undefined8 *)(param_1 + 0x20), (*(uint *)(plVar5 + 1) & 0x10200000) != 0))
  goto LAB_1411c57ac;
  if ((*(uint *)(plVar5 + 1) & 0x10200000) == 0) {
    lVar6 = *plVar5;
  }
  else {
    lVar6 = 0;
  }
  if (*(int *)(lVar6 + 0x9bc) == 0) {
LAB_1411c57d3:
    uVar3 = 0;
  }
  else {
    uVar1 = *(uint *)(lVar6 + 0x9b8);
    uVar3 = 0;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      puVar4 = (undefined8 *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((puVar4 == (undefined8 *)0x0) ||
         ((*(int *)(puVar4 + 2) != *(int *)(lVar6 + 0x9bc) ||
          ((*(uint *)(puVar4 + 1) & 0x10200000) != 0)))) goto LAB_1411c57d3;
      uVar3 = *puVar4;
    }
  }
  FUN_140d8b18e(&local_40,uVar3);
  local_50 = local_40;
  local_58 = param_4;
  FUN_1411c57e0(uVar2,lVar6,param_2,param_3);
LAB_1411c57ac:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411c57e0 FUN_1411c57e0 body=279 status=ok
// SIG undefined FUN_1411c57e0(void)

void FUN_1411c57e0(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4,
                  longlong param_5)

{
  undefined1 auStack_e8 [32];
  longlong local_c8;
  longlong *local_c0;
  undefined8 local_b8;
  longlong *local_b0;
  undefined1 *local_a8;
  code *local_a0;
  longlong *local_98;
  longlong local_90;
  longlong local_88;
  code **local_80;
  code *local_78;
  undefined8 **local_70;
  longlong local_68;
  code **local_60;
  code *local_58;
  longlong *local_50;
  undefined1 local_44 [28];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_88 = param_4;
  if ((*(longlong *)(param_2 + 0x398) != 0) && (*(char *)(param_1 + 0x110) == '\x01')) {
    local_90 = param_5 - param_4;
    local_c0 = &local_90;
    local_98 = &local_c8;
    local_b0 = &local_88;
    local_a8 = &stack0x00000030;
    local_80 = &local_a0;
    local_a0 = FUN_140f9f452;
    local_70 = &local_80;
    local_78 = FUN_140f9f270;
    local_c8 = param_1;
    local_b8 = param_3;
    FUN_140d8b592(local_44);
    local_50 = &local_68;
    local_58 = FUN_140c4fac4;
    local_68 = param_1 + 0x50;
    local_60 = &local_78;
    FUN_140d8b39e(param_1 + 0x50,local_44,param_2);
  }
  if ((local_28 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411c5910 FUN_1411c5910 body=591 status=ok
// SIG undefined FUN_1411c5910(void)

undefined8 * FUN_1411c5910(undefined8 *param_1)

{
  FUN_14064ffa8();
  *param_1 = &PTR_FUN_14b6837c0;
  param_1[0x72] = &PTR_FUN_14b683e30;
  param_1[0x73] = &PTR_FUN_14b683e50;
  param_1[0x74] = &PTR_FUN_14b683e80;
  param_1[0x75] = &PTR_FUN_14b683e90;
  param_1[0x76] = &PTR_FUN_14b683f00;
  param_1[0x77] = &PTR_FUN_14b683f30;
  param_1[0x78] = &PTR_FUN_14b683f60;
  param_1[0x7f] = &PTR_FUN_14b684010;
  param_1[0x80] = &PTR_FUN_14b684080;
  param_1[0x81] = &PTR_FUN_14b6840f0;
  param_1[0x82] = &PTR_FUN_14b684120;
  param_1[0x83] = &PTR_FUN_14b684160;
  param_1[0x84] = &PTR_FUN_14b684200;
  param_1[0x85] = &PTR_FUN_14b684220;
  param_1[0x89] = &PTR_FUN_14b684240;
  param_1[0x8a] = &PTR_FUN_14b684300;
  param_1[0x8b] = &PTR_FUN_14b684380;
  param_1[0x8c] = &PTR_FUN_14b6843d0;
  param_1[0x8d] = &PTR_FUN_14b684410;
  param_1[0x8e] = &PTR_FUN_14b684430;
  param_1[0x8f] = &PTR_FUN_14b684450;
  param_1[0x90] = &PTR_FUN_14b684470;
  param_1[0x91] = &PTR_FUN_14b684490;
  param_1[0x92] = &PTR_FUN_14b6844b0;
  param_1[0x93] = &PTR_FUN_14b6844d0;
  param_1[0x94] = &PTR_FUN_14b6844f0;
  param_1[0x95] = &PTR_FUN_14b684510;
  param_1[0x96] = &PTR_FUN_14b684530;
  param_1[0x34b] = &PTR_FUN_14b684550;
  param_1[0x352] = &PTR_FUN_14b684560;
  param_1[0x353] = &PTR_FUN_14b6845a0;
  param_1[0x354] = &PTR_FUN_14b6845e0;
  param_1[0x355] = &PTR_FUN_14b684630;
  param_1[0x356] = &PTR_FUN_14b684660;
  param_1[0x359] = &PTR_FUN_14b6846a0;
  param_1[0x35a] = &PTR_FUN_14b6846b0;
  param_1[0x35b] = &PTR_FUN_14b6846e0;
  param_1[0x35c] = &PTR_FUN_14b684780;
  *(undefined1 *)(param_1 + 0x4bf) = 0;
  *(undefined4 *)((longlong)param_1 + 0x25fc) = 1;
  *(undefined4 *)(param_1 + 0x4c1) = 0;
  return param_1;
}



// FUNCTION 1411c5b60 FUN_1411c5b60 body=369 status=ok
// SIG undefined FUN_1411c5b60(void)

void FUN_1411c5b60(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
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
  if (param_1 + -0x438 == 0) {
    plVar3 = (longlong *)0x0;
  }
  else {
    lVar2 = *(longlong *)(param_1 + -0x418);
    if (lVar2 != 0) {
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
      lVar2 = *(longlong *)(lVar2 + 0x10);
      iVar1 = *(int *)(DAT_14cad2858 + 0x38);
      if ((iVar1 <= *(int *)(lVar2 + 0x38)) &&
         (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) == DAT_14cad2858 + 0x30))
      {
        FUN_14036294a(*(undefined8 *)(param_1 + -0x418),CONCAT71((int7)(int3)((uint)iVar1 >> 8),1),1
                     );
      }
    }
    plVar3 = *(longlong **)(param_1 + -0x58);
    if (plVar3 == (longlong *)0x0) {
      plVar3 = (longlong *)(**(code **)(*(longlong *)(param_1 + -0x438) + 0x350))(param_1 + -0x438);
      *(longlong **)(param_1 + -0x58) = plVar3;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x0001411c5bfb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0xd0))();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_98);
}



// FUNCTION 1411c5ce2 FUN_1411c5ce2 body=1853 status=ok
// SIG undefined FUN_1411c5ce2(void)

undefined8
FUN_1411c5ce2(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
             longlong *param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  char *pcVar7;
  undefined8 uVar8;
  char *pcVar9;
  undefined1 auStack_168 [32];
  undefined1 local_148;
  undefined8 local_138;
  undefined4 local_130;
  longlong local_128;
  longlong *plStack_120;
  undefined8 local_118;
  undefined4 local_110;
  longlong local_108;
  longlong *plStack_100;
  undefined8 local_f8;
  undefined4 local_f0;
  longlong local_e8;
  longlong *plStack_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  longlong local_c8;
  longlong *plStack_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  longlong local_a8;
  longlong *plStack_a0;
  undefined8 local_98;
  undefined4 local_90;
  longlong local_88;
  longlong *plStack_80;
  undefined8 local_78;
  undefined4 local_70;
  longlong local_68;
  longlong *plStack_60;
  longlong local_58;
  longlong *plStack_50;
  longlong local_40;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_168;
  lVar5 = (**(code **)(*param_1 + 0x180))();
  if (lVar5 != 0) {
    lVar6 = FUN_1411c648e(*(undefined8 *)(lVar5 + 0x1f0));
    lVar5 = FUN_1400f6f32(lVar5);
    if (lVar5 != 0) {
      uVar8 = 0;
      if ((lVar6 != 0) && (*(longlong *)(lVar5 + 0x68) != 0)) {
        uVar4 = FUN_140def96c(*(longlong *)(lVar5 + 0x68),param_2 + 0x18);
        local_58 = 0;
        plStack_50 = (longlong *)0x0;
        FUN_14009b010(&local_58,3,0);
        if (param_5 != &DAT_14c9a1308) {
          if (plStack_50 != (longlong *)0x0) {
            LOCK();
            *(int *)(plStack_50 + 1) = (int)plStack_50[1] + 1;
            UNLOCK();
          }
          plVar3 = (longlong *)param_5[1];
          *param_5 = local_58;
          param_5[1] = (longlong)plStack_50;
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
        plVar3 = plStack_50;
        if (plStack_50 != (longlong *)0x0) {
          LOCK();
          plVar1 = plStack_50 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*plStack_50)(plStack_50);
            LOCK();
            piVar2 = (int *)((longlong)plVar3 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar3 + 0x10))(plVar3);
            }
          }
        }
        pcVar7 = (char *)FUN_1411c6420(lVar6,uVar4);
        if (pcVar7 != (char *)0x0) {
          local_68 = 0;
          plStack_60 = (longlong *)0x0;
          FUN_14009b010(&local_68,1,0);
          if ((local_68 != 0) && ((*(byte *)(local_68 + 1) & 2) == 0)) {
            pcVar9 = "false";
            if (*pcVar7 != '\0') {
              pcVar9 = "true";
            }
            FUN_140126aca(local_68,pcVar9);
          }
          local_78 = DAT_14cbe48b4;
          local_70 = DAT_14cbe48bc;
          FUN_1448075d0(&local_58);
          if (*param_5 != 0) {
            local_148 = 0;
            FUN_14014191c(*param_5,&local_58,&local_68,0);
          }
          if (local_40 != 0) {
            FUN_1400020a8();
          }
          local_88 = 0;
          plStack_80 = (longlong *)0x0;
          FUN_14009b010(&local_88,1,0);
          if ((local_88 != 0) && ((*(byte *)(local_88 + 1) & 2) == 0)) {
            pcVar9 = "false";
            if (pcVar7[1] != '\0') {
              pcVar9 = "true";
            }
            FUN_140126aca(local_88,pcVar9);
          }
          local_98 = DAT_14cbe48c0;
          local_90 = DAT_14cbe48c8;
          FUN_1448075d0(&local_58);
          if (*param_5 != 0) {
            local_148 = 0;
            FUN_14014191c(*param_5,&local_58,&local_88,0);
          }
          if (local_40 != 0) {
            FUN_1400020a8();
          }
          local_a8 = 0;
          plStack_a0 = (longlong *)0x0;
          FUN_14009b010(&local_a8,1,0);
          if (local_a8 != 0) {
            FUN_1406111c2(local_a8,*(undefined4 *)(pcVar7 + 4));
          }
          local_b8 = DAT_14cbe48cc;
          local_b0 = DAT_14cbe48d4;
          FUN_1448075d0(&local_58);
          if (*param_5 != 0) {
            local_148 = 0;
            FUN_14014191c(*param_5,&local_58,&local_a8,0);
          }
          if (local_40 != 0) {
            FUN_1400020a8();
          }
          local_c8 = 0;
          plStack_c0 = (longlong *)0x0;
          FUN_14009b010(&local_c8,1,0);
          if (local_c8 != 0) {
            FUN_1406111c2(local_c8,*(undefined4 *)(pcVar7 + 0x18));
          }
          local_d8 = DAT_14cbe48d8;
          local_d0 = DAT_14cbe48e0;
          FUN_1448075d0(&local_58);
          if (*param_5 != 0) {
            local_148 = 0;
            FUN_14014191c(*param_5,&local_58,&local_c8,0);
          }
          if (local_40 != 0) {
            FUN_1400020a8();
          }
          local_e8 = 0;
          plStack_e0 = (longlong *)0x0;
          FUN_14009b010(&local_e8,1,0);
          if ((local_e8 != 0) && ((*(byte *)(local_e8 + 1) & 2) == 0)) {
            pcVar9 = "false";
            if (pcVar7[0x20] != '\0') {
              pcVar9 = "true";
            }
            FUN_140126aca(local_e8,pcVar9);
          }
          lVar5 = *param_5;
          local_f8 = DAT_14cbe48fc;
          local_f0 = DAT_14cbe4904;
          FUN_1448075d0(&local_58);
          local_148 = 0;
          FUN_14014191c(lVar5,&local_58,&local_e8,0);
          if (local_40 != 0) {
            FUN_1400020a8();
          }
          local_108 = 0;
          plStack_100 = (longlong *)0x0;
          FUN_14009b010(&local_108,1,0);
          if (local_108 != 0) {
            FUN_1406111c2(local_108,*(undefined4 *)(pcVar7 + 0x1c));
          }
          lVar5 = *param_5;
          local_118 = DAT_14cbe48f0;
          local_110 = DAT_14cbe48f8;
          FUN_1448075d0(&local_58);
          local_148 = 0;
          FUN_14014191c(lVar5,&local_58,&local_108,0);
          if (local_40 != 0) {
            FUN_1400020a8();
          }
          local_128 = 0;
          plStack_120 = (longlong *)0x0;
          FUN_14009b010(&local_128,1,0);
          if (local_128 != 0) {
            FUN_1404a8912(local_128,*(undefined4 *)(pcVar7 + 0x14));
          }
          local_138 = DAT_14cbe48e4;
          local_130 = DAT_14cbe48ec;
          FUN_1448075d0(&local_58);
          if (*param_5 != 0) {
            local_148 = 0;
            FUN_14014191c(*param_5,&local_58,&local_128,0);
          }
          if (local_40 != 0) {
            FUN_1400020a8();
          }
          plVar3 = plStack_120;
          if (plStack_120 != (longlong *)0x0) {
            LOCK();
            plVar1 = plStack_120 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*plStack_120)(plStack_120);
              LOCK();
              piVar2 = (int *)((longlong)plVar3 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar3 + 0x10))(plVar3);
              }
            }
          }
          plVar3 = plStack_100;
          if (plStack_100 != (longlong *)0x0) {
            LOCK();
            plVar1 = plStack_100 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*plStack_100)(plStack_100);
              LOCK();
              piVar2 = (int *)((longlong)plVar3 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar3 + 0x10))(plVar3);
              }
            }
          }
          plVar3 = plStack_e0;
          if (plStack_e0 != (longlong *)0x0) {
            LOCK();
            plVar1 = plStack_e0 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*plStack_e0)(plStack_e0);
              LOCK();
              piVar2 = (int *)((longlong)plVar3 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar3 + 0x10))(plVar3);
              }
            }
          }
          plVar3 = plStack_c0;
          if (plStack_c0 != (longlong *)0x0) {
            LOCK();
            plVar1 = plStack_c0 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*plStack_c0)(plStack_c0);
              LOCK();
              piVar2 = (int *)((longlong)plVar3 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar3 + 0x10))(plVar3);
              }
            }
          }
          plVar3 = plStack_a0;
          if (plStack_a0 != (longlong *)0x0) {
            LOCK();
            plVar1 = plStack_a0 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*plStack_a0)(plStack_a0);
              LOCK();
              piVar2 = (int *)((longlong)plVar3 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar3 + 0x10))(plVar3);
              }
            }
          }
          plVar3 = plStack_80;
          if (plStack_80 != (longlong *)0x0) {
            LOCK();
            plVar1 = plStack_80 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*plStack_80)(plStack_80);
              LOCK();
              piVar2 = (int *)((longlong)plVar3 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar3 + 0x10))(plVar3);
              }
            }
          }
          plVar3 = plStack_60;
          if (plStack_60 != (longlong *)0x0) {
            LOCK();
            plVar1 = plStack_60 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*plStack_60)(plStack_60);
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
        uVar8 = 1;
      }
      goto LAB_1411c628c;
    }
  }
  uVar8 = 0;
LAB_1411c628c:
  if ((local_28 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411c6420 FUN_1411c6420 body=110 status=ok
// SIG undefined FUN_1411c6420(void)

longlong FUN_1411c6420(longlong param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x68) != *(int *)(param_1 + 0x94)) {
    lVar1 = param_1 + 0x98;
    if (*(longlong *)(param_1 + 0xa0) != 0) {
      lVar1 = *(longlong *)(param_1 + 0xa0);
    }
    iVar3 = *(int *)(lVar1 + (ulonglong)(*(int *)(param_1 + 0xa8) - 1U & param_2) * 4);
    if (iVar3 != -1) {
      do {
        lVar1 = *(longlong *)(param_1 + 0x60) + (longlong)iVar3 * 0x30;
        if (*(uint *)(*(longlong *)(param_1 + 0x60) + (longlong)iVar3 * 0x30) == param_2) break;
        iVar3 = *(int *)(lVar1 + 0x28);
        lVar1 = 0;
      } while (iVar3 != -1);
      goto LAB_1411c6470;
    }
  }
  lVar1 = 0;
LAB_1411c6470:
  lVar2 = lVar1 + 4;
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  return lVar2;
}



// FUNCTION 1411c648e FUN_1411c648e body=557 status=ok
// SIG undefined FUN_1411c648e(void)

undefined8 FUN_1411c648e(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  wchar_t *local_58;
  code *local_50;
  undefined1 *local_48;
  code **local_40;
  undefined1 *local_38;
  undefined1 *local_30;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1 != 0) {
    if (DAT_14cb92088 == 0) {
      local_40 = &local_20;
      local_20 = FUN_1449e2820;
      local_30 = &LAB_1417ad04a;
      local_38 = &LAB_14107a1fc;
      local_48 = &LAB_1489f8be7;
      local_50 = FUN_14656bf51;
      local_58 = L"Engine";
      local_60 = 0;
      local_68 = 0x10000000;
      local_70 = 8;
      local_78 = 0x38;
      FUN_14081cfa3(L"/Script/GbxUICoherent",L"GbxUICoherentSubsystem",&DAT_14cb92088,&DAT_1489f8be6
                   );
    }
    lVar1 = DAT_14cb92088;
    if ((DAT_14cb92088 == 0) || (DAT_14c950c29 == '\0')) {
      if (DAT_14cb92088 != 0) goto LAB_1411c64ea;
LAB_1411c66b5:
      lVar3 = 0;
    }
    else {
      FUN_1456cec3c(DAT_14cb92088);
      if (DAT_14cb92088 == 0) {
        local_40 = &local_20;
        local_20 = FUN_1449e2820;
        local_30 = &LAB_1417ad04a;
        local_38 = &LAB_14107a1fc;
        local_48 = &LAB_1489f8be7;
        local_50 = FUN_14656bf51;
        local_58 = L"Engine";
        local_60 = 0;
        local_68 = 0x10000000;
        local_70 = 8;
        local_78 = 0x38;
        FUN_14081cfa3(L"/Script/GbxUICoherent",L"GbxUICoherentSubsystem",&DAT_14cb92088,
                      &DAT_1489f8be6);
        if (DAT_14cb92088 == 0) goto LAB_1411c66b5;
      }
LAB_1411c64ea:
      if (*(int *)(lVar1 + 0x38) < *(int *)(DAT_14cb92088 + 0x38)) goto LAB_1411c66b5;
      lVar3 = 0;
      if (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(DAT_14cb92088 + 0x38) * 8)
          == DAT_14cb92088 + 0x30) {
        lVar3 = lVar1;
      }
    }
    lVar1 = FUN_1448a6f9c(param_1 + 0x100,lVar3);
    if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x30) != 0)) {
      uVar2 = *(undefined8 *)(*(longlong *)(lVar1 + 0x30) + 0x48);
      goto LAB_1411c652b;
    }
  }
  uVar2 = 0;
LAB_1411c652b:
  if ((local_18 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 1411c66d2 FUN_1411c66d2 body=482 status=ok
// SIG undefined FUN_1411c66d2(void)

void FUN_1411c66d2(longlong param_1)

{
  char *pcVar1;
  float fVar2;
  float fVar3;
  code *pcVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  int iVar8;
  float *pfVar9;
  uint uVar10;
  longlong lVar11;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined4 local_90;
  float local_88;
  undefined4 uStack_84;
  ushort local_70;
  byte local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar11 = 0;
  lVar5 = FUN_1403ca227();
  do {
    fVar2 = *(float *)(param_1 + 0x8a1c + lVar11 * 4);
    fVar3 = *(float *)(param_1 + 0x8a6c + lVar11 * 4);
    if ((fVar3 != fVar2) || (NAN(fVar3) || NAN(fVar2))) {
      *(float *)(param_1 + 0x8a6c + lVar11 * 4) = fVar2;
      uVar10 = (uint)lVar11;
      if (uVar10 == 0x12) {
        *(float *)(param_1 + 0x4bdc) = fVar2;
        lVar6 = param_1 + 0x4bd4;
      }
      else {
        if (uVar10 != 0x13) {
          if (*(int *)(lVar5 + 0x4d0) != *(int *)(lVar5 + 0x4fc)) {
            lVar6 = *(longlong *)(lVar5 + 0x508);
            if (*(longlong *)(lVar5 + 0x508) == 0) {
              lVar6 = lVar5 + 0x500;
            }
            iVar8 = *(int *)(lVar6 + (ulonglong)(*(int *)(lVar5 + 0x510) + 0x1fU & uVar10) * 4);
            if (iVar8 != -1) {
              do {
                pcVar1 = (char *)(*(longlong *)(lVar5 + 0x4c8) + (longlong)iVar8 * 0x14);
                if (*pcVar1 == (char)lVar11) {
                  if ((pcVar1 != (char *)0x0) && (pcVar1 + 4 != (char *)0x0)) {
                    uVar7 = (**(code **)(*(longlong *)(param_1 + 0x1120) + 0x28))(param_1 + 0x1120);
                    local_70 = 4;
                    local_68 = 3;
                    local_98 = *(undefined8 *)(pcVar1 + 4);
                    local_90 = 0xffffffff;
                    local_88 = fVar2;
                    FUN_140af060e(uVar7,&local_98,&local_88);
                    pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 +
                                       (ulonglong)((uint)local_68 * 0x120));
                    if (pcVar4 != (code *)0x0) {
                      pfVar9 = &local_88;
                      if (0x18 < local_70) {
                        pfVar9 = (float *)CONCAT44(uStack_84,local_88);
                      }
                      (*pcVar4)(pfVar9);
                    }
                    if (0x18 < local_70) {
                      FUN_1400020a8(CONCAT44(uStack_84,local_88));
                    }
                  }
                  break;
                }
                iVar8 = *(int *)(pcVar1 + 0xc);
              } while (iVar8 != -1);
            }
          }
          goto LAB_1411c673b;
        }
        *(float *)(param_1 + 0x4188) = fVar2;
        lVar6 = param_1 + 0x4180;
      }
      FUN_14020a6cc(lVar6,1);
    }
LAB_1411c673b:
    lVar11 = lVar11 + 1;
    if (lVar11 == 0x14) {
      if ((local_60 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return;
    }
  } while( true );
}



// FUNCTION 1411c68b6 FUN_1411c68b6 body=426 status=ok
// SIG undefined FUN_1411c68b6(void)

void FUN_1411c68b6(longlong param_1,longlong *param_2)

{
  int iVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  longlong lVar6;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140b50b86();
  if (*(longlong *)(param_1 + 0x1cc8) != 0) {
    FUN_1411c6a62(*(undefined8 *)(*(longlong *)(param_1 + 0x1cc8) + 8),&local_38);
    lVar6 = local_38;
    if (local_38 != 0) {
      lVar4 = FUN_140789e1e();
      if (((lVar4 != 0) && (*(int *)(lVar4 + 0x38) <= *(int *)(lVar6 + 0x38))) &&
         (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
          lVar4 + 0x30)) {
        FUN_1411c6a62(*(undefined8 *)(*(longlong *)(param_1 + 0x1cc8) + 8),&local_38);
        iVar1 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
          FUN_140789f3e(param_2,iVar1);
        }
        *(longlong *)(*param_2 + (longlong)iVar1 * 8) = local_38;
        if ((local_38 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
        }
      }
    }
  }
  lVar6 = 0;
  bVar2 = true;
  do {
    bVar5 = bVar2;
    lVar4 = *(longlong *)(param_1 + 0x1cd0 + lVar6 * 8);
    if (lVar4 != 0) {
      FUN_1411c6a62(*(undefined8 *)(lVar4 + 8),&local_38);
      lVar4 = local_38;
      if (local_38 != 0) {
        lVar3 = FUN_140789e1e();
        if (((lVar3 != 0) && (*(int *)(lVar3 + 0x38) <= *(int *)(lVar4 + 0x38))) &&
           (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
            lVar3 + 0x30)) {
          FUN_1411c6a62(*(undefined8 *)(*(longlong *)(param_1 + 0x1cd0 + lVar6 * 8) + 8),&local_38);
          iVar1 = (int)param_2[1];
          *(uint *)(param_2 + 1) = iVar1 + 1U;
          if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
            FUN_140789f3e(param_2,iVar1);
          }
          *(longlong *)(*param_2 + (longlong)iVar1 * 8) = local_38;
          if ((local_38 != 0 & DAT_14c950c29) == 1) {
            FUN_1456cec3c();
          }
        }
      }
    }
    lVar6 = 1;
    bVar2 = false;
  } while (bVar5);
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411c6a62 FUN_1411c6a62 body=355 status=ok
// SIG undefined FUN_1411c6a62(void)

longlong * FUN_1411c6a62(longlong param_1,longlong *param_2)

{
  uint *puVar1;
  uint uVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  
  puVar1 = (uint *)(param_1 + 0x30);
  if ((((*(int *)(param_1 + 0x34) == 0) || (uVar2 = *puVar1, (int)uVar2 < 0)) ||
      (DAT_14c9647dc <= (int)uVar2)) ||
     (((plVar7 = (longlong *)
                 ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
       plVar7 == (longlong *)0x0 || ((int)plVar7[2] != *(int *)(param_1 + 0x34))) ||
      (((*(uint *)(plVar7 + 1) & 0x10200000) != 0 || (lVar4 = *plVar7, lVar4 == 0)))))) {
    if (*(longlong *)(param_1 + 0x38) == 0) goto LAB_1411c6ac5;
    lVar4 = FUN_140007850();
    cVar3 = (*(code *)PTR_FUN_14c758760)();
    if ((lVar4 == 0) || (cVar3 == '\0')) {
      FUN_14485c47a(puVar1,lVar4);
      if (lVar4 == 0) goto LAB_1411c6ac5;
    }
    else {
      uVar2 = *(uint *)(lVar4 + 0xc);
      if ((int)uVar2 < DAT_14c9647dc) {
        lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      }
      else {
        lVar5 = 0;
      }
      if ((*(uint *)(lVar5 + 8) & 0x8400000) == 0) {
        FUN_14485c47a(puVar1,lVar4);
      }
    }
    if ((*(uint *)(lVar4 + 8) >> 0x1e & 1) != 0) goto LAB_1411c6ac5;
  }
  lVar5 = FUN_144a797b2();
  if ((((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8)
        == lVar5 + 0x30)) && (lVar5 = FUN_140789e1e(), lVar5 != 0)) &&
     (*(int *)(lVar5 + 0x38) <= *(int *)(lVar4 + 0x38))) {
    lVar6 = 0;
    if (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
        lVar5 + 0x30) {
      lVar6 = lVar4;
    }
    *param_2 = lVar6;
    if (lVar6 == 0) {
      return param_2;
    }
    if (DAT_14c950c29 == '\0') {
      return param_2;
    }
    FUN_1456cec3c();
    return param_2;
  }
LAB_1411c6ac5:
  *param_2 = 0;
  return param_2;
}



// FUNCTION 1411c6bc6 FUN_1411c6bc6 body=22 status=ok
// SIG undefined FUN_1411c6bc6(void)

undefined8 FUN_1411c6bc6(int *param_1)

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
  
  plVar4 = DAT_14cb24608;
  if (DAT_14cb24608 == (longlong *)0x0) {
    return 0;
  }
  if (*(code **)(*DAT_14cb24608 + 0x300) == (code *)&LAB_144837a50) {
    if (((*(byte *)((longlong)DAT_14cb24608 + 0x154) & 1) == 0) ||
       ((int)DAT_14cb24608[0x3a] <= *(int *)((longlong)DAT_14cb24608 + 0x1fc))) {
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
    cVar5 = (**(code **)(*DAT_14cb24608 + 0x300))(DAT_14cb24608);
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



// FUNCTION 1411c6bdc FUN_1411c6bdc body=152 status=ok
// SIG undefined FUN_1411c6bdc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1411c6bdc(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb8ca70) {
    FUN_144b3d300(&DAT_14cb8ca70);
    if (DAT_14cb8ca70 == -1) {
      DAT_14cb8ca40 = 0;
      DAT_14cb8ca48 = 0;
      DAT_14cb8ca20 = 0;
      _DAT_14cb8ca28 = 0;
      _DAT_14cb8ca4c = 0xffffffff00000080;
      DAT_14cb8ca54 = 0;
      DAT_14cb8ca60 = 0;
      DAT_14cb8ca68 = 0;
      atexit(FUN_143e4ccf3);
      _Init_thread_footer(&DAT_14cb8ca70);
      return;
    }
  }
  return;
}



// FUNCTION 1411c6c74 FUN_1411c6c74 body=223 status=ok
// SIG undefined FUN_1411c6c74(void)

undefined8 FUN_1411c6c74(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  undefined2 *puVar2;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined2 *local_58;
  int local_50;
  longlong local_48 [2];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48[0] = *(longlong *)(param_1[0xe] + 0x18);
  FUN_1400021e4(local_48,&local_58);
  puVar2 = local_58;
  if (local_50 == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  uVar1 = (**(code **)(*(longlong *)param_1[0xe] + 0x308))();
  FUN_140002266(local_48,L"%s%s",uVar1,puVar2);
  local_68 = local_48;
  (**(code **)(*param_1 + 0x1e0))(param_1,param_2,param_3,param_4);
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1411c6d54 FUN_1411c6d54 body=72 status=ok
// SIG undefined FUN_1411c6d54(void)

undefined8
FUN_1411c6d54(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5)

{
  wchar_t *pwVar1;
  undefined2 *puVar2;
  
  if (*(int *)(param_5 + 1) == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  else {
    puVar2 = (undefined2 *)*param_5;
  }
  pwVar1 = L"TAutoWeakObjectPtr<%s>";
  if ((*(ulonglong *)(param_1 + 0x38) >> 0x26 & 1) == 0) {
    pwVar1 = L"TWeakObjectPtr<%s>";
  }
  FUN_140002266(param_2,pwVar1,puVar2);
  return param_2;
}



// FUNCTION 1411c6d9c FUN_1411c6d9c body=699 status=ok
// SIG undefined FUN_1411c6d9c(void)

void FUN_1411c6d9c(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,longlong *param_10,undefined8 param_11,undefined1 param_12,
                  char param_13)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 auStack_128 [32];
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  longlong *local_e0;
  undefined8 local_d8;
  undefined1 local_d0;
  longlong local_c0;
  longlong local_b8;
  undefined4 local_ac;
  longlong local_a8 [3];
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_a8[0] = 0;
  local_a8[1] = 0;
  if ((0 < (int)param_10[1]) && (FUN_1469886f0(local_a8,(int)param_10[1],1), 0 < (int)param_10[1]))
  {
    local_c0 = 0;
    local_b8 = 0;
    do {
      lVar1 = *param_10;
      if (param_13 == '\0') {
        fVar2 = *(float *)(lVar1 + 0xc + local_c0);
        if (fVar2 <= 0.0) {
          fVar2 = 0.0;
        }
        if (1.0 <= fVar2) {
          fVar2 = 1.0;
        }
        fVar3 = *(float *)(lVar1 + 8 + local_c0);
        if (fVar3 <= 0.0) {
          fVar3 = 0.0;
        }
        if (1.0 <= fVar3) {
          fVar3 = 1.0;
        }
        fVar4 = *(float *)(lVar1 + local_c0);
        fVar5 = *(float *)(lVar1 + 4 + local_c0);
        if (fVar5 <= 0.0) {
          fVar5 = 0.0;
        }
        if (1.0 <= fVar5) {
          fVar5 = 1.0;
        }
        if (fVar4 <= 0.0) {
          fVar4 = 0.0;
        }
        if (1.0 <= fVar4) {
          fVar4 = 1.0;
        }
        local_ac = CONCAT13((char)(int)(fVar2 * 255.0 + 0.5),
                            CONCAT12((char)(int)(fVar4 * 255.0 + 0.5),
                                     CONCAT11((char)(int)(fVar5 * 255.0 + 0.5),
                                              (char)(int)(fVar3 * 255.0 + 0.5))));
      }
      else {
        FUN_1411ab38a(lVar1 + local_c0,&local_ac);
      }
      *(undefined4 *)(local_a8[0] + local_b8 * 4) = local_ac;
      local_b8 = local_b8 + 1;
      local_c0 = local_c0 + 0x10;
    } while (local_b8 < (int)param_10[1]);
  }
  local_d0 = param_12;
  local_d8 = param_11;
  local_e0 = local_a8;
  local_100 = param_6;
  local_108 = param_5;
  local_f8 = param_7;
  local_f0 = param_8;
  local_e8 = param_9;
  FUN_1411c7058(param_1,param_2,param_3,param_4);
  if (local_a8[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_90 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1411c7058 FUN_1411c7058 body=1425 status=ok
// SIG undefined FUN_1411c7058(void)

void FUN_1411c7058(longlong param_1,int param_2,longlong *param_3,longlong *param_4,
                  longlong *param_5,longlong *param_6,longlong *param_7,longlong *param_8,
                  longlong *param_9,longlong *param_10,longlong *param_11,undefined1 param_12)

{
  longlong *plVar1;
  undefined8 *puVar2;
  double dVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 uVar9;
  byte bVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  ulonglong uVar15;
  uint uVar16;
  int iVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  bool bVar21;
  int iVar22;
  longlong *plVar23;
  uint uVar24;
  int iVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  double dVar30;
  undefined8 uVar31;
  undefined1 auStack_b8 [39];
  undefined1 local_91;
  longlong local_90;
  longlong *local_88;
  longlong *local_80;
  longlong local_78;
  longlong *local_70;
  longlong *local_68;
  longlong *local_60;
  longlong *local_58;
  undefined4 uStack_50;
  undefined3 uStack_4c;
  ulonglong local_48;
  
  local_91 = param_12;
  local_58 = param_11;
  local_60 = param_10;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_88 = param_3;
  local_80 = param_4;
  local_78 = param_1;
  if (*(int *)(param_1 + 0x670) <= param_2) {
    FUN_140de94c8((longlong *)(param_1 + 0x668));
  }
  local_90 = *(longlong *)(param_1 + 0x668);
  plVar1 = (longlong *)(local_90 + (longlong)param_2 * 0x60);
  FUN_143add9ca(plVar1);
  uVar4 = *(uint *)(local_88 + 1);
  iVar14 = *(int *)(local_90 + 0xc + (longlong)param_2 * 0x60);
  iVar17 = 0;
  if (iVar14 < 0) {
    *(undefined4 *)(plVar1 + 1) = 0;
    FUN_148214792(plVar1);
    iVar17 = (int)plVar1[1];
    iVar14 = *(int *)((longlong)plVar1 + 0xc);
  }
  *(uint *)(plVar1 + 1) = iVar17 + uVar4;
  if ((uint)(iVar14 - iVar17) < uVar4) {
    FUN_14183c640(plVar1);
  }
  plVar8 = local_80;
  if (0 < (int)uVar4) {
    local_68 = plVar1 + 4;
    local_70 = plVar1 + 7;
    local_90 = (ulonglong)uVar4 * 4;
    lVar18 = 0;
    lVar19 = 0;
    lVar20 = 0;
    do {
      lVar6 = *plVar1;
      lVar7 = *local_88;
      *(undefined8 *)(lVar6 + 0x10 + lVar18) = *(undefined8 *)(lVar7 + 0x10 + lVar19);
      puVar2 = (undefined8 *)(lVar7 + lVar19);
      uVar28 = puVar2[1];
      *(undefined8 *)(lVar6 + lVar18) = *puVar2;
      ((undefined8 *)(lVar6 + lVar18))[1] = uVar28;
      uVar26 = 0;
      uVar27 = 0;
      uVar28 = 0;
      uVar29 = 0;
      uVar31 = 0x3ff0000000000000;
      if (*(uint *)(param_5 + 1) == uVar4) {
        lVar7 = *param_5;
        uVar28 = *(undefined8 *)(lVar7 + lVar19);
        uVar29 = *(undefined8 *)(lVar7 + 8 + lVar19);
        uVar31 = *(undefined8 *)(lVar7 + 0x10 + lVar19);
      }
      *(undefined8 *)(lVar6 + 0x18 + lVar18) = uVar28;
      *(undefined8 *)(lVar6 + 0x20 + lVar18) = uVar29;
      *(undefined8 *)(lVar6 + 0x28 + lVar18) = uVar31;
      uVar28 = 0;
      if (*(uint *)(param_6 + 1) == uVar4) {
        uVar28 = *(undefined8 *)(*param_6 + lVar20 * 4);
        uVar26 = (undefined4)uVar28;
        uVar27 = (undefined4)((ulonglong)uVar28 >> 0x20);
        uVar28 = *(undefined8 *)(*param_6 + 8 + lVar20 * 4);
      }
      *(ulonglong *)(lVar6 + 0x58 + lVar18) = CONCAT44(uVar27,uVar26);
      *(undefined8 *)(lVar6 + 0x60 + lVar18) = uVar28;
      uVar26 = 0;
      uVar27 = 0;
      uVar28 = 0;
      uVar29 = 0;
      if (*(uint *)(param_7 + 1) == uVar4) {
        uVar28 = *(undefined8 *)(*param_7 + lVar20 * 4);
        uVar29 = *(undefined8 *)(*param_7 + 8 + lVar20 * 4);
      }
      *(undefined8 *)(lVar6 + 0x68 + lVar18) = uVar28;
      *(undefined8 *)(lVar6 + 0x70 + lVar18) = uVar29;
      uVar28 = 0;
      if (*(uint *)(param_8 + 1) == uVar4) {
        uVar28 = *(undefined8 *)(*param_8 + lVar20 * 4);
        uVar26 = (undefined4)uVar28;
        uVar27 = (undefined4)((ulonglong)uVar28 >> 0x20);
        uVar28 = *(undefined8 *)(*param_8 + 8 + lVar20 * 4);
      }
      *(ulonglong *)(lVar6 + 0x78 + lVar18) = CONCAT44(uVar27,uVar26);
      *(undefined8 *)(lVar6 + 0x80 + lVar18) = uVar28;
      uVar26 = 0;
      uVar27 = 0;
      uVar28 = 0;
      if (*(uint *)(param_9 + 1) == uVar4) {
        uVar28 = *(undefined8 *)(*param_9 + lVar20 * 4);
        uVar26 = (undefined4)uVar28;
        uVar27 = (undefined4)((ulonglong)uVar28 >> 0x20);
        uVar28 = *(undefined8 *)(*param_9 + 8 + lVar20 * 4);
      }
      *(ulonglong *)(lVar6 + 0x88 + lVar18) = CONCAT44(uVar27,uVar26);
      *(undefined8 *)(lVar6 + 0x90 + lVar18) = uVar28;
      if (*(uint *)(local_60 + 1) == uVar4) {
        uVar16 = *(uint *)(*local_60 + lVar20);
        uVar24 = uVar16 & 0xff000000;
        uVar11 = uVar16;
        uVar13 = uVar16;
      }
      else {
        uVar24 = 0xff000000;
        uVar13 = 0xff0000;
        uVar11 = 0xff00;
        uVar16 = 0xff;
      }
      *(uint *)(lVar6 + 0x50 + lVar18) =
           uVar16 & 0xff | uVar11 & 0xff00 | uVar13 & 0xff0000 | uVar24;
      if (*(uint *)(local_58 + 1) == uVar4) {
        lVar7 = *local_58;
        uVar28 = *(undefined8 *)(lVar7 + lVar20 * 8);
        uVar29 = *(undefined8 *)(lVar7 + 8 + lVar20 * 8);
        uVar31 = *(undefined8 *)(lVar7 + 0x10 + lVar20 * 8);
        uVar26 = (undefined4)uVar31;
        uVar27 = (undefined4)((ulonglong)uVar31 >> 0x20);
        uVar9 = *(undefined1 *)(lVar7 + 0x18 + lVar20 * 8);
        uStack_4c = (undefined3)((uint)*(undefined4 *)(lVar7 + 0x1c + lVar20 * 8) >> 8);
        uStack_50 = *(undefined4 *)(lVar7 + 0x19 + lVar20 * 8);
      }
      else {
        uVar26 = 0;
        uVar27 = 0;
        uVar9 = 0;
        uVar29 = 0;
        uVar28 = 0x3ff0000000000000;
      }
      *(undefined8 *)(lVar6 + 0x30 + lVar18) = uVar28;
      *(undefined8 *)(lVar6 + 0x38 + lVar18) = uVar29;
      *(ulonglong *)(lVar6 + 0x40 + lVar18) = CONCAT44(uVar27,uVar26);
      *(undefined1 *)(lVar6 + 0x48 + lVar18) = uVar9;
      *(undefined4 *)(lVar6 + 0x49 + lVar18) = uStack_50;
      *(uint *)(lVar6 + 0x4c + lVar18) = CONCAT31(uStack_4c,uStack_50._3_1_);
      if ((char)plVar1[10] == '\0') {
        plVar23 = (longlong *)(lVar6 + lVar18);
        plVar1[9] = plVar23[2];
        lVar6 = plVar23[1];
        *local_70 = *plVar23;
        plVar1[8] = lVar6;
        lVar6 = *plVar23;
        lVar7 = plVar23[1];
        plVar1[6] = plVar23[2];
        *local_68 = lVar6;
        plVar1[5] = lVar7;
        *(undefined1 *)(plVar1 + 10) = 1;
      }
      else {
        dVar3 = (double)plVar1[4];
        uVar26 = SUB84(dVar3,0);
        uVar27 = (undefined4)((ulonglong)dVar3 >> 0x20);
        dVar30 = *(double *)(lVar6 + lVar18);
        if (dVar30 <= dVar3) {
          uVar26 = SUB84(dVar30,0);
          uVar27 = (undefined4)((ulonglong)dVar30 >> 0x20);
        }
        plVar1[4] = CONCAT44(uVar27,uVar26);
        dVar3 = *(double *)(lVar6 + 8 + lVar18);
        dVar30 = (double)plVar1[5];
        if (dVar3 <= (double)plVar1[5]) {
          dVar30 = dVar3;
        }
        plVar1[5] = (longlong)dVar30;
        dVar3 = (double)plVar1[6];
        uVar26 = SUB84(dVar3,0);
        uVar27 = (undefined4)((ulonglong)dVar3 >> 0x20);
        dVar30 = *(double *)(lVar6 + 0x10 + lVar18);
        if (dVar30 <= dVar3) {
          uVar26 = SUB84(dVar30,0);
          uVar27 = (undefined4)((ulonglong)dVar30 >> 0x20);
        }
        plVar1[6] = CONCAT44(uVar27,uVar26);
        dVar3 = (double)plVar1[7];
        uVar26 = SUB84(dVar3,0);
        uVar27 = (undefined4)((ulonglong)dVar3 >> 0x20);
        dVar30 = *(double *)(lVar6 + lVar18);
        if (dVar3 <= dVar30) {
          uVar26 = SUB84(dVar30,0);
          uVar27 = (undefined4)((ulonglong)dVar30 >> 0x20);
        }
        plVar1[7] = CONCAT44(uVar27,uVar26);
        dVar3 = (double)plVar1[8];
        uVar26 = SUB84(dVar3,0);
        uVar27 = (undefined4)((ulonglong)dVar3 >> 0x20);
        dVar30 = *(double *)(lVar6 + 8 + lVar18);
        if (dVar3 <= dVar30) {
          uVar26 = SUB84(dVar30,0);
          uVar27 = (undefined4)((ulonglong)dVar30 >> 0x20);
        }
        plVar1[8] = CONCAT44(uVar27,uVar26);
        dVar3 = (double)plVar1[9];
        uVar26 = SUB84(dVar3,0);
        uVar27 = (undefined4)((ulonglong)dVar3 >> 0x20);
        dVar30 = *(double *)(lVar6 + 0x10 + lVar18);
        if (dVar3 <= dVar30) {
          uVar26 = SUB84(dVar30,0);
          uVar27 = (undefined4)((ulonglong)dVar30 >> 0x20);
        }
        plVar1[9] = CONCAT44(uVar27,uVar26);
      }
      lVar20 = lVar20 + 4;
      lVar19 = lVar19 + 0x18;
      lVar18 = lVar18 + 0x98;
    } while (local_90 != lVar20);
  }
  iVar25 = uVar4 - 1;
  uVar4 = ((int)local_80[1] / 3) * 3;
  iVar14 = 0;
  iVar17 = 0;
  if (0 < (int)uVar4) {
    lVar18 = *local_80;
    uVar15 = 0;
    iVar17 = 0;
    do {
      iVar12 = *(int *)(lVar18 + uVar15 * 4);
      iVar5 = *(int *)(lVar18 + 4 + uVar15 * 4);
      if (iVar25 <= iVar5) {
        iVar5 = iVar25;
      }
      if (iVar25 <= iVar12) {
        iVar12 = iVar25;
      }
      bVar21 = true;
      if (iVar12 != iVar5) {
        iVar22 = *(int *)(lVar18 + 8 + uVar15 * 4);
        if (iVar25 <= iVar22) {
          iVar22 = iVar25;
        }
        bVar21 = iVar5 == iVar22 || iVar12 == iVar22;
      }
      iVar17 = iVar17 + (uint)bVar21;
      uVar15 = uVar15 + 3;
    } while (uVar15 < uVar4);
    iVar17 = iVar17 * -3;
  }
  plVar23 = plVar1 + 2;
  iVar12 = *(int *)((longlong)plVar1 + 0x1c);
  if (iVar12 < 0) {
    *(undefined4 *)(plVar1 + 3) = 0;
    FUN_14480809c(plVar23,0);
    iVar14 = (int)plVar1[3];
    iVar12 = *(int *)((longlong)plVar1 + 0x1c);
  }
  *(uint *)(plVar1 + 3) = iVar14 + iVar17 + uVar4;
  if ((uint)(iVar12 - iVar14) < iVar17 + uVar4) {
    FUN_1447808da();
  }
  lVar18 = local_78;
  if (0 < (int)uVar4) {
    uVar15 = 0;
    iVar14 = 0;
    do {
      lVar19 = *plVar8;
      iVar17 = *(int *)(lVar19 + 8 + uVar15 * 4);
      if (iVar25 <= iVar17) {
        iVar17 = iVar25;
      }
      iVar12 = *(int *)(lVar19 + uVar15 * 4);
      iVar5 = *(int *)(lVar19 + 4 + uVar15 * 4);
      if (iVar25 <= iVar5) {
        iVar5 = iVar25;
      }
      if (iVar25 <= iVar12) {
        iVar12 = iVar25;
      }
      if (((iVar12 != iVar5) && (iVar5 != iVar17)) && (iVar12 != iVar17)) {
        lVar19 = (longlong)iVar14;
        *(int *)(*plVar23 + lVar19 * 4) = iVar12;
        *(int *)(*plVar23 + 4 + lVar19 * 4) = iVar5;
        iVar14 = iVar14 + 3;
        *(int *)(*plVar23 + 8 + lVar19 * 4) = iVar17;
      }
      uVar15 = uVar15 + 3;
    } while (uVar15 < uVar4);
  }
  *(undefined1 *)(plVar1 + 0xb) = local_91;
  FUN_14183c194(local_78);
  FUN_143adda40(lVar18);
  if ((~*(byte *)(lVar18 + 0x9c) & 3) == 0) {
    bVar10 = *(byte *)(lVar18 + 0x9d);
    if ((bVar10 & 1) == 0) {
LAB_1411c75c6:
      *(byte *)(lVar18 + 0x9d) = bVar10 | 1;
      FUN_1401057d4(lVar18);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_b8);
    }
    if (*(longlong *)(lVar18 + 0xb0) == 0) {
      lVar19 = FUN_1448abda6(lVar18);
      if (lVar19 == 0) {
        bVar10 = *(byte *)(lVar18 + 0x9d);
        goto LAB_1411c75c6;
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411c7606 FUN_1411c7606 body=2336 status=ok
// SIG undefined FUN_1411c7606(void)

void FUN_1411c7606(longlong param_1,longlong param_2,longlong param_3)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  longlong *plVar6;
  size_t sVar7;
  undefined8 *puVar8;
  uint uVar9;
  undefined *puVar10;
  undefined1 *puVar11;
  undefined2 *puVar12;
  wchar_t *pwVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  longlong lVar17;
  char *pcVar18;
  wchar_t *pwVar19;
  bool bVar20;
  undefined1 auStack_338 [32];
  ulonglong local_318;
  undefined4 local_310;
  undefined8 *local_308;
  int local_2fc;
  longlong local_2f8;
  wchar_t *local_2f0;
  undefined8 uStack_2e8;
  longlong local_2e0;
  undefined2 *local_2d8;
  undefined8 uStack_2d0;
  undefined2 *local_2c8;
  int local_2c0;
  wchar_t *local_2b8;
  int local_2b0;
  undefined8 *local_2a8;
  ulonglong uStack_2a0;
  wchar_t *local_290;
  int local_288;
  longlong local_280;
  char *local_278;
  ulonglong uStack_270;
  undefined1 local_268 [16];
  longlong local_258;
  undefined4 local_250;
  uint local_24c;
  undefined4 uStack_248;
  int local_244;
  undefined1 local_240 [8];
  undefined1 *local_238;
  int local_230;
  wchar_t *local_228;
  int local_220;
  wchar_t *local_218;
  int local_210;
  longlong local_148;
  longlong local_140;
  undefined1 local_a0;
  byte local_9f;
  undefined2 local_9e;
  wchar_t *local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  int local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_338;
  local_280 = param_2;
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14c866f58);
  if (DAT_14c866f88 != DAT_14c866fb4) {
    uVar3 = (uint)((ulonglong)param_2 >> 0x10);
    uVar9 = (uint)param_2 & 0xffff;
    puVar10 = &DAT_14c866fb8;
    if (DAT_14c866fc0 != (undefined *)0x0) {
      puVar10 = DAT_14c866fc0;
    }
    iVar5 = *(int *)(puVar10 +
                    (ulonglong)
                    (DAT_14c866fc8 - 1U &
                    (int)((ulonglong)param_2 >> 0x20) + ((uint)param_2 << 0x10 | uVar9) +
                    (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar9 >> 4)) * 4);
    while (iVar5 != -1) {
      plVar6 = (longlong *)(DAT_14c866f80 + (longlong)iVar5 * 0x18);
      if (*plVar6 == param_2) {
        if (plVar6 != (longlong *)0x0) {
          puVar16 = (undefined8 *)plVar6[1];
          LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14c866f58);
          if (puVar16 != (undefined8 *)0x0) {
            local_2f8 = param_1;
            FUN_1400021e4(param_1 + 0xc,&local_290);
            local_2a8 = (undefined8 *)0x0;
            uStack_2a0 = 0;
            local_228 = (wchar_t *)*puVar16;
            local_220 = *(int *)(puVar16 + 1) + -1;
            if (*(int *)(puVar16 + 1) == 0) {
              local_220 = 0;
            }
            local_218 = L"Config";
            local_210 = 6;
            FUN_140bee87a(&local_2b8,&local_228,2);
            local_228 = local_2b8;
            local_220 = local_2b0 + -1;
            if (local_2b0 == 0) {
              local_220 = 0;
            }
            local_218 = local_290;
            local_210 = local_288 + -1;
            if (local_288 == 0) {
              local_210 = 0;
            }
            FUN_140bee87a(&local_2c8,&local_228,2);
            plVar6 = (longlong *)FUN_14054d1d4();
            pwVar19 = L"";
            if (local_2b0 != 0) {
              pwVar19 = local_2b8;
            }
            (**(code **)(*plVar6 + 0x70))(plVar6,&local_2a8,pwVar19,&DAT_149e27a0c);
            plVar6 = (longlong *)FUN_14054d1d4();
            puVar12 = &DAT_149dfb77a;
            if (local_2c0 != 0) {
              puVar12 = local_2c8;
            }
            (**(code **)(*plVar6 + 0x70))(plVar6,&local_2a8,puVar12,&DAT_149e27a0c);
            local_308 = puVar16;
            if ((longlong)*(int *)(puVar16 + 3) != 0) {
              puVar15 = (undefined8 *)puVar16[2];
              lVar17 = (longlong)*(int *)(puVar16 + 3) << 4;
              do {
                pwVar19 = L"";
                if (local_288 != 0) {
                  pwVar19 = local_290;
                }
                FUN_140002266(&local_228,L"/%s/",pwVar19);
                pwVar19 = local_228;
                if (local_220 == 0) {
                  pwVar19 = L"";
                }
                if (pwVar19 == (wchar_t *)0x0) {
                  bVar20 = false;
                }
                else {
                  sVar7 = wcslen(pwVar19);
                  local_310 = 0xffffffff;
                  local_318 = local_318 & 0xffffffff00000000;
                  iVar5 = FUN_1447ee042(puVar15,pwVar19,sVar7 & 0xffffffff,1);
                  bVar20 = iVar5 != -1;
                }
                if (local_228 != (wchar_t *)0x0) {
                  FUN_1400020a8();
                }
                if (bVar20) {
                  local_228 = (wchar_t *)*puVar15;
                  local_220 = *(int *)(puVar15 + 1) + -1;
                  if (*(int *)(puVar15 + 1) == 0) {
                    local_220 = 0;
                  }
                  local_218 = L"Config";
                  local_210 = 6;
                  FUN_140bee87a(&local_278,&local_228,2);
                  plVar6 = (longlong *)FUN_14054d1d4();
                  pcVar18 = "";
                  if ((int)uStack_270 != 0) {
                    pcVar18 = local_278;
                  }
                  (**(code **)(*plVar6 + 0x70))(plVar6,&local_2a8,pcVar18,&DAT_149e27a0c);
                  if (local_278 != (char *)0x0) {
                    FUN_1400020a8();
                  }
                }
                puVar15 = puVar15 + 2;
                lVar17 = lVar17 + -0x10;
              } while (lVar17 != 0);
            }
            local_318 = 0;
            FUN_140d6a722(&local_228,local_2f8,1,&local_290);
            local_a0 = 1;
            local_9e = *(undefined2 *)(local_308 + 4);
            local_9f = *(byte *)((longlong)local_308 + 0x22) & 1;
            local_148 = param_3;
            if ((*(byte *)((longlong)local_308 + 0x22) & 1) == 0) {
              local_2d8 = (undefined2 *)0x0;
              uStack_2d0 = 0;
            }
            else {
              FUN_1400021e4(&local_280,&local_2d8);
            }
            local_278 = "Windows";
            uStack_270 = CONCAT35(uStack_270._5_3_,7);
            FUN_14001a6c0(&local_278,1);
            local_258 = 0;
            local_250 = 0;
            local_278 = (char *)0x0;
            uStack_270 = 0;
            local_24c = 0x80;
            uStack_248 = 0xffffffff;
            local_244 = 0;
            local_238 = (undefined1 *)0x0;
            local_230 = 0;
            if ((longlong)(int)uStack_2a0 != 0) {
              puVar15 = local_2a8 + (longlong)(int)uStack_2a0 * 2;
              puVar16 = local_2a8;
              do {
                FUN_140c50e9c(&local_2f0,puVar16,1);
                puVar12 = &DAT_149dfb77a;
                if ((int)uStack_2d0 != 0) {
                  puVar12 = local_2d8;
                }
                FUN_1448097c4(&local_2f0,puVar12,&DAT_149dfb77a,1);
                local_88 = local_2f0;
                uStack_80 = uStack_2e8;
                local_2f0 = (wchar_t *)0x0;
                uStack_2e8 = 0;
                pwVar19 = L"";
                if (local_288 != 0) {
                  pwVar19 = local_290;
                }
                FUN_1448097c4(&local_88,pwVar19,&DAT_149dfb77a,1);
                pwVar19 = local_88;
                bVar20 = (int)uStack_80 == 0;
                local_88 = (wchar_t *)0x0;
                uStack_80 = 0;
                pwVar13 = pwVar19;
                if (bVar20) {
                  pwVar13 = L"";
                }
                FUN_1446f470e(&local_2e0,pwVar13,1);
                if (pwVar19 != (wchar_t *)0x0) {
                  FUN_1400020a8(pwVar19);
                }
                if (local_88 != (wchar_t *)0x0) {
                  FUN_1400020a8();
                }
                if (local_2f0 != (wchar_t *)0x0) {
                  FUN_1400020a8();
                }
                if ((int)uStack_270 != local_244) {
                  uVar3 = (uint)((ulonglong)local_2e0 >> 0x10);
                  uVar9 = (uint)local_2e0 & 0xffff;
                  puVar11 = local_238;
                  if (local_238 == (undefined1 *)0x0) {
                    puVar11 = local_240;
                  }
                  for (iVar5 = *(int *)(puVar11 +
                                       (ulonglong)
                                       (local_230 - 1U &
                                       (int)((ulonglong)local_2e0 >> 0x20) +
                                       ((uint)local_2e0 << 0x10 | uVar9) +
                                       (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar9 >> 4)) * 4);
                      iVar5 != -1; iVar5 = *(int *)(local_278 + (longlong)iVar5 * 0x10 + 8)) {
                    if (*(longlong *)(local_278 + (longlong)iVar5 * 0x10) == local_2e0)
                    goto LAB_1411c7d0d;
                  }
                }
                FUN_144a13f80(&local_278,&local_88,&local_2e0,0);
                if ((param_3 == 0) || (*(char *)(param_3 + 1) != '\x01')) {
LAB_1411c7c9f:
                  local_88 = (wchar_t *)0x0;
                  uStack_80 = 0;
                  lVar17 = FUN_142777728(local_2f8,local_2e0,&local_88);
                  if (lVar17 != 0) {
                    local_140 = local_280;
                    FUN_1400021e4(&local_2e0,&local_88);
                    pwVar19 = L"";
                    if ((int)uStack_80 != 0) {
                      pwVar19 = local_88;
                    }
                    FUN_141628e80(&local_228,pwVar19);
                    if (local_88 != (wchar_t *)0x0) {
                      FUN_1400020a8();
                    }
                  }
                }
                else {
                  local_88 = local_2b8;
                  bVar20 = false;
                  iVar5 = local_2b0 + -1;
                  if (local_2b0 == 0) {
                    iVar5 = 0;
                  }
                  uStack_80 = CONCAT44(uStack_80._4_4_,iVar5);
                  local_78 = *puVar16;
                  local_70 = *(int *)(puVar16 + 1) + -1;
                  if (*(int *)(puVar16 + 1) == 0) {
                    local_70 = 0;
                  }
                  FUN_140bee87a(&local_2f0,&local_88,2);
                  if ((longlong)*(int *)(param_3 + 0x60) != 0) {
                    puVar14 = *(undefined8 **)(param_3 + 0x58);
                    puVar8 = puVar14 + (longlong)*(int *)(param_3 + 0x60) * 2;
LAB_1411c7d2f:
                    if (*(int *)(puVar14 + 1) == (int)uStack_2e8) {
                      bVar20 = true;
                      if (1 < (int)uStack_2e8) {
                        local_308 = (undefined8 *)*puVar14;
                        lVar17 = 0;
                        do {
                          uVar1 = *(ushort *)((longlong)local_308 + lVar17);
                          uVar2 = *(ushort *)((longlong)local_2f0 + lVar17);
                          local_2fc = (int)uStack_2e8;
                          if (uVar1 == uVar2) {
                            if (uVar1 == 0) break;
                          }
                          else {
                            if (0x7f < (uVar2 | uVar1)) {
                              iVar5 = (uint)uVar1 - (uint)uVar2;
                              goto LAB_1411c7dc6;
                            }
                            if ((&DAT_149e05da0)[uVar1] != (&DAT_149e05da0)[(uint)uVar2])
                            goto code_r0x0001411c7dc3;
                          }
                          lVar17 = lVar17 + 2;
                        } while( true );
                      }
                    }
                    else {
                      if (*(int *)(puVar14 + 1) + (int)uStack_2e8 != 1) goto LAB_1411c7d45;
                      bVar20 = true;
                    }
                  }
LAB_1411c7c90:
                  if (local_2f0 != (wchar_t *)0x0) {
                    FUN_1400020a8();
                  }
                  if (!bVar20) goto LAB_1411c7c9f;
                }
LAB_1411c7d0d:
                puVar16 = puVar16 + 2;
              } while (puVar16 != puVar15);
              local_230 = 0;
              if (local_238 != (undefined1 *)0x0) {
                FUN_1400020a8();
              }
            }
            uVar4 = uStack_270 >> 0x20;
            uStack_270 = uStack_270 & 0xffffffff00000000;
            if ((int)uVar4 != 0) {
              FUN_14472eb64(&local_278,0);
            }
            uStack_248 = 0xffffffff;
            local_244 = 0;
            local_250 = 0;
            if (0x80 < local_24c) {
              local_24c = 0x80;
              FUN_1446efbd8(local_268,0);
            }
            if (local_258 != 0) {
              FUN_1400020a8();
            }
            if (local_278 != (char *)0x0) {
              FUN_1400020a8();
            }
            if (local_2d8 != (undefined2 *)0x0) {
              FUN_1400020a8();
            }
            FUN_140d6b5be(&local_228);
            if (local_2c8 != (undefined2 *)0x0) {
              FUN_1400020a8();
            }
            if (local_2b8 != (wchar_t *)0x0) {
              FUN_1400020a8();
            }
            FUN_1447a1747(local_2a8,uStack_2a0 & 0xffffffff);
            if (local_2a8 != (undefined8 *)0x0) {
              FUN_1400020a8();
            }
            if (local_290 != (wchar_t *)0x0) {
              FUN_1400020a8();
            }
          }
          if ((local_60 ^ (ulonglong)auStack_338) == DAT_14c707940) {
            return;
          }
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0();
        }
        break;
      }
      iVar5 = (int)plVar6[2];
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_338);
code_r0x0001411c7dc3:
  iVar5 = (uint)(byte)(&DAT_149e05da0)[uVar1] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar2];
LAB_1411c7dc6:
  if (iVar5 == 0) goto LAB_1411c7c90;
LAB_1411c7d45:
  puVar14 = puVar14 + 2;
  bVar20 = false;
  if (puVar14 == puVar8) goto LAB_1411c7c90;
  goto LAB_1411c7d2f;
}



// FUNCTION 1411c7f4c FUN_1411c7f4c body=320 status=ok
// SIG undefined FUN_1411c7f4c(void)

void FUN_1411c7f4c(longlong *param_1,undefined4 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  byte bVar3;
  longlong *plVar4;
  
  *(byte *)((longlong)param_1 + 0x5bc) = *(byte *)((longlong)param_1 + 0x5bc) & 0xef;
  plVar2 = *(longlong **)(param_1[0x3e] + 0x450);
  if ((plVar2 == (longlong *)0x0) ||
     (plVar4 = plVar2, *(char *)((longlong)plVar2 + 0x1fb) != '\x02')) {
    if (*(char *)((longlong)param_1 + 0x7eb) != '\0') {
      FUN_140cbebe8(param_1 + 0xfc,0);
      return;
    }
  }
  else {
    do {
      bVar3 = (**(code **)(*plVar4 + 0x480))(plVar4,0);
      plVar1 = plVar4 + 0x24;
      plVar4 = (longlong *)*plVar1;
    } while ((~bVar3 & (longlong *)*plVar1 != (longlong *)0x0) != 0);
    if (bVar3 == 0) {
      *(byte *)((longlong)param_1 + 0x5bc) = *(byte *)((longlong)param_1 + 0x5bc) & 0xef;
      (**(code **)(*param_1 + 0x640))(param_1,param_2);
      if (*(char *)((longlong)param_1 + 0x7eb) != '\0') {
        FUN_140cbebe8(param_1 + 0xfc,0);
        FUN_1417ba918(param_1 + 8,plVar2);
        return;
      }
    }
    else {
      *(byte *)((longlong)param_1 + 0x5bc) = *(byte *)((longlong)param_1 + 0x5bc) | 0x10;
      if (*(char *)((longlong)param_1 + 0x7eb) == '\0') {
        FUN_140cbebe8(param_1 + 0xfc,1);
        FUN_1417bab5b(param_1 + 8,plVar2);
      }
      if (DAT_14c7613d4 == 2) {
                    /* WARNING: Could not recover jumptable at 0x0001411c8050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x640))(param_1,param_2);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1411c808c FUN_1411c808c body=4288 status=ok
// SIG undefined FUN_1411c808c(void)

void FUN_1411c808c(longlong *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  uint uVar5;
  longlong *plVar6;
  double dVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  double dVar15;
  double dVar16;
  double dVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  bool bVar20;
  bool bVar21;
  undefined8 uVar22;
  char cVar23;
  uint uVar24;
  longlong lVar25;
  undefined8 uVar26;
  longlong lVar27;
  int iVar28;
  uint uVar29;
  longlong *plVar30;
  undefined4 *puVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  undefined4 uVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  undefined4 uVar49;
  undefined4 uVar50;
  undefined4 uVar51;
  undefined1 auStack_448 [32];
  undefined1 *local_428;
  float local_420;
  undefined8 local_418;
  double local_410;
  undefined4 local_408;
  undefined4 uStack_404;
  undefined4 uStack_400;
  undefined4 uStack_3fc;
  undefined1 local_3f8 [16];
  double local_3e0;
  double local_3d8;
  double local_3d0;
  double local_3c8;
  double local_3c0;
  double local_3b8;
  double local_3b0;
  double local_3a8;
  double local_3a0;
  double local_398;
  double local_390;
  double local_388;
  undefined1 local_380 [16];
  double local_370;
  undefined1 local_368 [24];
  undefined1 local_350 [24];
  undefined4 local_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  undefined8 local_328;
  undefined8 local_320;
  undefined4 uStack_318;
  undefined4 uStack_314;
  undefined8 local_310;
  double local_308;
  double dStack_300;
  undefined1 local_2f8 [16];
  undefined1 local_2e8 [16];
  double local_2d8;
  double dStack_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  longlong *local_2b8;
  undefined1 local_2a8 [16];
  double local_298;
  double dStack_290;
  undefined1 local_288 [12];
  undefined4 uStack_27c;
  undefined1 local_278 [16];
  undefined4 local_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  double local_258;
  double local_248;
  double dStack_240;
  double local_238;
  double local_228;
  double dStack_220;
  double local_218;
  undefined4 local_1e4;
  undefined4 local_1d4;
  undefined4 local_1b8;
  undefined4 local_1a8;
  undefined1 local_1a0 [40];
  double local_178;
  double dStack_170;
  double local_168;
  undefined8 local_160;
  double local_158;
  double local_150;
  double local_148;
  undefined8 local_140;
  double local_138;
  double local_130;
  double local_128;
  undefined8 local_120;
  double local_118;
  longlong local_110;
  longlong local_108;
  undefined8 local_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_448;
  cVar23 = (**(code **)(*param_1 + 0x600))();
  if (cVar23 == '\0') goto LAB_1411c8340;
  lVar25 = param_1[0x3e];
  plVar6 = *(longlong **)(lVar25 + 0x450);
  if ((plVar6 == (longlong *)0x0) || (*(char *)((longlong)plVar6 + 0x1fb) != '\x02'))
  goto LAB_1411c8340;
  if (((*(uint *)(plVar6 + 1) >> 0x1e & 1) != 0) ||
     ((plVar6[0x15] == 0 || ((*(uint *)(plVar6[0x15] + 8) >> 0x1e & 1) != 0)))) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_f0 ^ (ulonglong)auStack_448);
  }
  uVar5 = *(uint *)(param_1 + 0x24);
  *(uint *)(param_1 + 0x24) = uVar5 | 1;
  local_298 = DAT_14c8463e0;
  dStack_290 = DAT_14c8463e8;
  local_2a8._8_8_ = DAT_14c8463d8;
  local_2a8._0_8_ = DAT_14c8463d0;
  local_2b8 = DAT_14c8464f0;
  local_2c8 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  uStack_2c0 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  lVar27 = *(longlong *)(lVar25 + 0x444);
  if (lVar27 == 0) {
    uVar33 = (undefined4)plVar6[0x48];
    uVar35 = *(undefined4 *)((longlong)plVar6 + 0x244);
    uVar44 = (undefined4)plVar6[0x49];
    uVar45 = *(undefined4 *)((longlong)plVar6 + 0x24c);
    uVar46 = (undefined4)plVar6[0x4a];
    uVar47 = *(undefined4 *)((longlong)plVar6 + 0x254);
    uVar48 = (undefined4)plVar6[0x4b];
    uVar49 = *(undefined4 *)((longlong)plVar6 + 0x25c);
    uVar32 = (undefined4)plVar6[0x4c];
    uVar34 = *(undefined4 *)((longlong)plVar6 + 0x264);
    uVar50 = (undefined4)plVar6[0x4d];
    uVar51 = *(undefined4 *)((longlong)plVar6 + 0x26c);
    uVar36 = (undefined4)plVar6[0x4e];
    uVar37 = (undefined4)((ulonglong)plVar6[0x4e] >> 0x20);
    plVar30 = DAT_14c8464f0;
LAB_1411c8241:
    auVar4 = *(undefined1 (*) [16])(param_1 + 0x54);
    dVar3 = auVar4._0_8_;
    dVar41 = auVar4._8_8_;
    dVar7 = (double)param_1[0x56];
    dVar43 = (double)param_1[0x57];
    auVar11._8_8_ =
         -(ulonglong)(9.99999993922529e-09 < ABS(dVar41 - (double)CONCAT44(uVar45,uVar44)));
    auVar11._0_8_ =
         -(ulonglong)(9.99999993922529e-09 < ABS(dVar3 - (double)CONCAT44(uVar35,uVar33)));
    uVar24 = movmskpd((int)lVar25,auVar11);
    lVar25 = -(ulonglong)(9.99999993922529e-09 < ABS(dVar43 - (double)CONCAT44(uVar49,uVar48)));
    auVar8._8_4_ = (int)lVar25;
    auVar8._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(dVar7 - (double)CONCAT44(uVar47,uVar46)))
    ;
    auVar8._12_4_ = (int)((ulonglong)lVar25 >> 0x20);
    iVar28 = movmskpd((int)plVar30,auVar8);
    uVar29 = iVar28 << 2 | uVar24;
    dVar1 = (double)param_1[0x55];
    dVar2 = (double)param_1[0x57];
    if (uVar29 == 0) {
LAB_1411c82d1:
      dVar41 = (double)param_1[0x58];
      bVar20 = true;
      if (((((dVar41 != (double)CONCAT44(uVar34,uVar32)) ||
            (NAN(dVar41) || NAN((double)CONCAT44(uVar34,uVar32)))) ||
           ((double)param_1[0x59] != (double)CONCAT44(uVar51,uVar50))) ||
          ((NAN((double)param_1[0x59]) || NAN((double)CONCAT44(uVar51,uVar50)) ||
           ((double)param_1[0x5a] != (double)CONCAT44(uVar37,uVar36))))) ||
         (NAN((double)param_1[0x5a]) || NAN((double)CONCAT44(uVar37,uVar36)))) goto LAB_1411c84df;
    }
    else {
      lVar25 = -(ulonglong)(9.99999993922529e-09 < ABS((double)CONCAT44(uVar45,uVar44) + dVar41));
      auVar14._8_4_ = (int)lVar25;
      auVar14._0_8_ =
           -(ulonglong)(9.99999993922529e-09 < ABS((double)CONCAT44(uVar35,uVar33) + dVar3));
      auVar14._12_4_ = (int)((ulonglong)lVar25 >> 0x20);
      iVar28 = movmskpd(uVar24,auVar14);
      auVar10._8_8_ =
           -(ulonglong)(9.99999993922529e-09 < ABS((double)CONCAT44(uVar49,uVar48) + dVar43));
      auVar10._0_8_ =
           -(ulonglong)(9.99999993922529e-09 < ABS((double)CONCAT44(uVar47,uVar46) + dVar7));
      uVar24 = movmskpd(uVar29,auVar10);
      if ((uVar24 & 0x3fffffff) == 0 && iVar28 == 0) goto LAB_1411c82d1;
      dVar40 = dVar7 * -1.0;
      dVar43 = dVar43 * 1.0;
      dVar15 = (((double)CONCAT44(uVar35,uVar33) * dVar40 * -1.0 -
                dVar41 * (double)CONCAT44(uVar49,uVar48)) + (double)CONCAT44(uVar45,uVar44) * dVar43
               ) - dVar3 * (double)CONCAT44(uVar47,uVar46) * 1.0;
      local_298 = dVar43 * (double)CONCAT44(uVar47,uVar46) * 1.0 +
                  (double)CONCAT44(uVar45,uVar44) * dVar3 +
                  ((double)CONCAT44(uVar49,uVar48) * dVar40 -
                  (double)CONCAT44(uVar35,uVar33) * dVar41 * 1.0);
      dStack_290 = dVar40 * (double)CONCAT44(uVar47,uVar46) * -1.0 +
                   (double)CONCAT44(uVar45,uVar44) * dVar41 +
                   ((double)CONCAT44(uVar49,uVar48) * dVar43 -
                   (double)CONCAT44(uVar35,uVar33) * dVar3 * -1.0);
      local_2a8._8_4_ = SUB84(dVar15,0);
      local_2a8._0_8_ =
           (((double)CONCAT44(uVar35,uVar33) * dVar43 * 1.0 -
            dVar3 * (double)CONCAT44(uVar49,uVar48)) + (double)CONCAT44(uVar45,uVar44) * dVar40) -
           dVar41 * (double)CONCAT44(uVar47,uVar46) * -1.0;
      local_2a8._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
      dVar41 = (double)param_1[0x58];
      bVar20 = false;
LAB_1411c84df:
      local_410 = (double)CONCAT44(uVar37,uVar36);
      dVar40 = dVar1 + dVar1;
      dVar43 = dVar7 + dVar7;
      dVar15 = dVar3 * (dVar3 + dVar3);
      local_3f8._8_4_ = auVar4._8_4_;
      local_3f8._0_8_ = dVar15;
      local_3f8._12_4_ = auVar4._12_4_;
      local_148 = (dVar3 + dVar3) * dVar2;
      local_178 = 1.0 - (dVar1 * dVar40 + dVar7 * dVar43);
      local_158 = dVar3 * dVar40 - dVar43 * dVar2;
      local_138 = dVar40 * dVar2 + dVar3 * dVar43;
      dStack_170 = dVar43 * dVar2 + dVar3 * dVar40;
      local_150 = 1.0 - (dVar7 * dVar43 + dVar15);
      local_130 = dVar1 * dVar43 - local_148;
      local_110 = param_1[0x59];
      local_168 = dVar3 * dVar43 - dVar40 * dVar2;
      local_148 = local_148 + dVar1 * dVar43;
      local_128 = 1.0 - (dVar1 * dVar40 + dVar15);
      local_108 = param_1[0x5a];
      local_160 = 0;
      local_140 = 0;
      local_120 = 0;
      local_100 = 0x3ff0000000000000;
      lVar25 = param_1[0x22];
      dVar3 = *(double *)*(undefined1 (*) [16])(lVar25 + 0x240);
      dVar7 = *(double *)(lVar25 + 0x248);
      local_2e8 = *(undefined1 (*) [16])(lVar25 + 0x240);
      dVar1 = *(double *)(lVar25 + 0x250);
      dVar2 = *(double *)(lVar25 + 600);
      local_408 = uVar32;
      uStack_404 = uVar34;
      uStack_400 = uVar50;
      uStack_3fc = uVar51;
      local_2d8 = dVar1;
      dStack_2d0 = dVar2;
      local_118 = dVar41;
      if ((!bVar20) && (-1 < *(char *)((longlong)param_1 + 0x5b5))) {
        local_308 = dVar7 * local_298 * -1.0 +
                    dVar1 * (double)local_2a8._8_8_ +
                    dVar2 * (double)local_2a8._0_8_ * 1.0 + dVar3 * dStack_290;
        dStack_300 = dVar3 * local_298 * 1.0 +
                     dVar2 * (double)local_2a8._8_8_ +
                     dVar1 * (double)local_2a8._0_8_ * -1.0 + dVar7 * dStack_290;
        dVar41 = dVar1 * local_298 * -1.0 +
                 (((double)local_2a8._0_8_ * dVar3 * -1.0 + dStack_290 * dVar2) -
                 (double)local_2a8._8_8_ * dVar7);
        local_2f8._8_4_ = SUB84(dVar41,0);
        local_2f8._0_8_ =
             dVar2 * local_298 * 1.0 +
             (((double)local_2a8._0_8_ * dVar7 * 1.0 + dStack_290 * dVar1) -
             (double)local_2a8._8_8_ * dVar3);
        local_2f8._12_4_ = (int)((ulonglong)dVar41 >> 0x20);
        FUN_1448052ee(&local_308,&local_320);
        plVar30 = (longlong *)param_1[0x3e];
        puVar31 = &local_338;
        local_328 = local_310;
        local_338 = (undefined4)local_320;
        uStack_334 = local_320._4_4_;
        uStack_330 = uStack_318;
        uStack_32c = uStack_314;
        (**(code **)(*plVar30 + 0x730))(plVar30,puVar31,0);
        lVar25 = param_1[0x22];
        local_2e8 = *(undefined1 (*) [16])(lVar25 + 0x240);
        uVar32 = local_2e8._0_4_;
        uVar34 = local_2e8._4_4_;
        uVar36 = local_2e8._8_4_;
        uVar37 = local_2e8._12_4_;
        local_2d8 = *(double *)(lVar25 + 0x250);
        dStack_2d0 = *(double *)(lVar25 + 600);
        auVar12._8_8_ = -(ulonglong)(9.999999974752427e-07 < ABS(dVar7 - local_2e8._8_8_));
        auVar12._0_8_ = -(ulonglong)(9.999999974752427e-07 < ABS(dVar3 - local_2e8._0_8_));
        uVar24 = movmskpd((int)plVar30,auVar12);
        auVar4._8_8_ = -(ulonglong)(9.999999974752427e-07 < ABS(dVar2 - dStack_2d0));
        auVar4._0_8_ = -(ulonglong)(9.999999974752427e-07 < ABS(dVar1 - local_2d8));
        iVar28 = movmskpd((int)puVar31,auVar4);
        uVar29 = iVar28 << 2 | uVar24;
        if (uVar29 == 0) {
LAB_1411c8d9f:
          if (((*(byte *)(param_1 + 0x69) & 0x10) != 0) ||
             (((*(byte *)(param_1 + 0x69) & 8) != 0 && (*(longlong *)(param_1[0x3e] + 0x3c0) != 0)))
             ) {
            if ((char)param_1[0x52] == '\0') {
              local_320 = 0;
              local_310 = 0;
            }
            FUN_144a7484c(&local_320,local_288);
            local_420 = (float)((uint)local_420 & 0xffffff00);
            local_428 = (undefined1 *)0x0;
            (**(code **)(*param_1 + 0x4e8))(param_1,&DAT_14c8464e0,local_288,0);
            lVar25 = param_1[0x22];
            uVar32 = *(undefined4 *)*(undefined1 (*) [16])(lVar25 + 0x240);
            uVar34 = *(undefined4 *)(lVar25 + 0x244);
            uVar36 = *(undefined4 *)(lVar25 + 0x248);
            uVar37 = *(undefined4 *)(lVar25 + 0x24c);
            local_2e8 = *(undefined1 (*) [16])(lVar25 + 0x240);
            local_2d8 = *(double *)(lVar25 + 0x250);
            dStack_2d0 = *(double *)(lVar25 + 600);
          }
        }
        else {
          auVar13._8_8_ = -(ulonglong)(9.999999974752427e-07 < ABS(dVar7 + local_2e8._8_8_));
          auVar13._0_8_ = -(ulonglong)(9.999999974752427e-07 < ABS(dVar3 + local_2e8._0_8_));
          iVar28 = movmskpd(uVar24,auVar13);
          lVar27 = -(ulonglong)(9.999999974752427e-07 < ABS(dVar2 + dStack_2d0));
          auVar9._8_4_ = (int)lVar27;
          auVar9._0_8_ = -(ulonglong)(9.999999974752427e-07 < ABS(dVar1 + local_2d8));
          auVar9._12_4_ = (int)((ulonglong)lVar27 >> 0x20);
          uVar24 = movmskpd(uVar29,auVar9);
          if ((uVar24 & 0x3fffffff) == 0 && iVar28 == 0) goto LAB_1411c8d9f;
        }
        if (*(longlong *)(param_1[0x3e] + 0x3c0) != 0) {
          dVar1 = dVar1 * -1.0;
          dVar2 = dVar2 * 1.0;
          dVar43 = (dVar2 * (double)CONCAT44(uVar37,uVar36) +
                   (dVar1 * (double)CONCAT44(uVar34,uVar32) * -1.0 - dStack_2d0 * dVar7)) -
                   dVar3 * local_2d8 * 1.0;
          dVar41 = dVar1 * local_2d8 * -1.0 +
                   (double)CONCAT44(uVar37,uVar36) * dVar7 +
                   (dVar2 * dStack_2d0 - (double)CONCAT44(uVar34,uVar32) * dVar3 * -1.0);
          local_288._8_4_ = SUB84(dVar43,0);
          local_288._0_8_ =
               (dVar1 * (double)CONCAT44(uVar37,uVar36) +
               (dVar2 * (double)CONCAT44(uVar34,uVar32) * 1.0 - dStack_2d0 * dVar3)) -
               dVar7 * local_2d8 * -1.0;
          uStack_27c = (int)((ulonglong)dVar43 >> 0x20);
          local_278._8_4_ = SUB84(dVar41,0);
          local_278._0_8_ =
               dVar2 * local_2d8 * 1.0 +
               (double)CONCAT44(uVar37,uVar36) * dVar3 +
               (dVar1 * dStack_2d0 - (double)CONCAT44(uVar34,uVar32) * dVar7 * 1.0);
          local_278._12_4_ = (int)((ulonglong)dVar41 >> 0x20);
          FUN_1448052ee(local_2e8,local_350);
          FUN_1448052ee(local_288,local_368);
          (**(code **)(*param_1 + 0x648))(param_1,local_350,local_368);
          lVar25 = param_1[0x22];
          local_2e8 = *(undefined1 (*) [16])(lVar25 + 0x240);
          local_2d8 = *(double *)(lVar25 + 0x250);
          dStack_2d0 = *(double *)(lVar25 + 600);
        }
      }
      uVar34 = uStack_404;
      uVar32 = local_408;
      dVar1 = local_410;
      if ((char)param_1[0x52] == '\x01') {
        dVar41 = *(double *)(lVar25 + 0x270) - local_410;
        dVar7 = (double)CONCAT44(uStack_404,local_408);
        auVar19._8_4_ = uStack_400;
        auVar19._0_8_ = dVar7;
        auVar19._12_4_ = uStack_3fc;
        dVar2 = *(double *)(lVar25 + 0x260) - dVar7;
        dVar3 = *(double *)(lVar25 + 0x268) - auVar19._8_8_;
        local_380._8_4_ = SUB84(dVar3,0);
        local_380._0_8_ = dVar2;
        local_380._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
        local_370 = dVar41;
        FUN_14276fa40(local_2a8,local_288);
        lVar25 = param_1[0x22];
        local_388 = ((double)local_278._0_8_ - dVar41) + *(double *)(lVar25 + 0x270) +
                    (dVar1 - (double)param_1[0x5a]);
        local_390 = (stack0xfffffffffffffd80 - dVar3) + *(double *)(lVar25 + 0x268) +
                    ((double)CONCAT44(uVar51,uVar50) - (double)param_1[0x59]);
        local_398 = ((double)local_288._0_8_ - dVar2) + *(double *)(lVar25 + 0x260) +
                    (dVar7 - (double)param_1[0x58]);
      }
      else {
        dVar15 = (double)CONCAT44(uVar35,uVar33) + (double)CONCAT44(uVar35,uVar33);
        dVar41 = (double)CONCAT44(uVar45,uVar44) + (double)CONCAT44(uVar45,uVar44);
        dVar39 = (double)CONCAT44(uVar47,uVar46) + (double)CONCAT44(uVar47,uVar46);
        dVar43 = (double)CONCAT44(uVar35,uVar33) * dVar15;
        dVar38 = (double)CONCAT44(uVar45,uVar44) * dVar41;
        dVar16 = (double)CONCAT44(uVar47,uVar46) * dVar39;
        dVar42 = (double)CONCAT44(uVar35,uVar33) * dVar41;
        dVar40 = (double)CONCAT44(uVar35,uVar33) * dVar39;
        dVar17 = (double)CONCAT44(uVar45,uVar44) * dVar39;
        dVar15 = dVar15 * (double)CONCAT44(uVar49,uVar48);
        dVar41 = dVar41 * (double)CONCAT44(uVar49,uVar48);
        dVar39 = dVar39 * (double)CONCAT44(uVar49,uVar48);
        dVar7 = (double)((float)*(double *)(*(longlong *)(param_1[0x3e] + 0x438) + 0x290) *
                        *(float *)(*(longlong *)(param_1[0x3e] + 0x438) + 0x640));
        local_3f8._0_8_ = dVar7;
        dVar1 = *(double *)(lVar25 + 0x260);
        dVar7 = *(double *)(lVar25 + 0x270) - dVar7;
        dVar2 = *(double *)(lVar25 + 0x268);
        dVar3 = *(double *)(lVar25 + 0x268);
        FUN_14007522e(local_288,&local_178);
        local_228 = dVar7 * local_248 +
                    (double)CONCAT44(uStack_264,local_268) * dVar2 + dVar1 * (double)local_288._0_8_
                    + local_228;
        dStack_220 = dVar7 * dStack_240 +
                     (double)CONCAT44(uStack_25c,uStack_260) * dVar3 +
                     dVar1 * stack0xfffffffffffffd80 + dStack_220;
        local_218 = dVar2 * local_258 + dVar1 * (double)local_278._0_8_ + dVar7 * local_238 +
                    local_218;
        auVar18._8_4_ = uStack_400;
        auVar18._0_8_ = CONCAT44(uStack_404,local_408);
        auVar18._12_4_ = uStack_3fc;
        local_3a0 = local_410 +
                    dStack_220 * (dVar15 + dVar17) + (dVar40 - dVar41) * local_228 +
                    local_218 * (1.0 - (dVar38 + dVar43)) + (double)local_3f8._0_8_;
        local_3a8 = (1.0 - (dVar16 + dVar43)) * dStack_220 + local_228 * (dVar39 + dVar42) +
                    local_218 * (dVar17 - dVar15) + auVar18._8_8_ + 0.0;
        local_3b0 = (dVar42 - dVar39) * dStack_220 + local_228 * (1.0 - (dVar38 + dVar16)) +
                    local_218 * (dVar41 + dVar40) + (double)CONCAT44(uStack_404,local_408) + 0.0;
        uVar32 = local_408;
        uVar34 = uStack_404;
      }
      (**(code **)(*param_1 + 0x558))(param_1,local_288);
      uVar26 = local_288._0_8_;
      dVar1 = stack0xfffffffffffffd80;
      uVar22 = local_278._0_8_;
      lVar25 = param_1[0x22];
      local_3b8 = (double)local_278._0_8_ - *(double *)(lVar25 + 0x270);
      local_3c0 = stack0xfffffffffffffd80 - *(double *)(lVar25 + 0x268);
      local_3c8 = (double)local_288._0_8_ - *(double *)(lVar25 + 0x260);
      (**(code **)(*param_1 + 0x550))(param_1);
      if ((*(byte *)((longlong)param_1 + 0x5b6) & 1) == 0) {
        if (((*(byte *)((longlong)param_1 + 0x5bc) & 0x10) == 0) || ((char)param_1[0xf5] != '\x01'))
        {
          bVar21 = false;
          uVar26 = 0;
        }
        else {
          uVar26 = FUN_14348b10e(plVar6);
          bVar21 = true;
          FUN_140b51838(param_1[0x23],uVar26,1);
          *(byte *)(param_1 + 0x24) = *(byte *)(param_1 + 0x24) | 0x16;
        }
        if ((((bool)(bVar20 & (double)CONCAT44(uVar34,uVar32) - (double)param_1[0x58] == 0.0)) &&
            (dVar1 = (double)CONCAT44(uVar51,uVar50) - (double)param_1[0x59], dVar1 == 0.0)) &&
           (!NAN(dVar1))) {
          local_2c8 = 0.0;
          uStack_2c0 = 0.0;
        }
        memset(local_288,0,0x100);
        local_1b8 = 0xffffffff;
        local_1e4 = 0xffffffff;
        local_288._4_4_ = 0x3f800000;
        lVar25 = param_1[0x22];
        dVar3 = *(double *)(lVar25 + 0x260);
        dStack_300 = *(double *)(lVar25 + 0x268);
        dVar1 = *(double *)(lVar25 + 0x268);
        dVar2 = *(double *)(lVar25 + 0x270);
        local_2f8._0_8_ = dVar2;
        local_420 = (float)((uint)local_420 & 0xffffff00);
        local_428 = local_288;
        local_308 = dVar3;
        (**(code **)(*param_1 + 0x4e8))(param_1,&local_2c8,local_2e8,1);
        lVar25 = param_1[0x22];
        if (((9.999999747378752e-05 < ABS(*(double *)(lVar25 + 0x260) - (dVar3 + local_2c8))) ||
            (9.999999747378752e-05 < ABS(*(double *)(lVar25 + 0x268) - (dVar1 + uStack_2c0)))) ||
           (9.999999747378752e-05 < ABS(*(double *)(lVar25 + 0x270) - (dVar2 + (double)local_2b8))))
        {
          (**(code **)(*param_1 + 0x978))(param_1,&local_2c8,&local_308,local_288);
        }
        if (bVar21) {
          *(byte *)(param_1 + 0x24) = *(byte *)(param_1 + 0x24) & 0xe9;
          FUN_140b51838(param_1[0x23],uVar26,0);
        }
      }
      else {
        local_3e0 = (double)uVar26;
        local_3d8 = dVar1;
        local_3d0 = (double)uVar22;
        local_420 = (float)((uint)local_420 & 0xffffff00);
        local_428 = (undefined1 *)0x0;
        FUN_14084f9fc(param_1[0x22],&local_3e0,local_2e8,0);
      }
      cVar23 = (**(code **)(*plVar6 + 0x480))(plVar6);
      if ((cVar23 != '\0') && (*(longlong *)(param_1[0x3e] + 0x428) != 0)) {
        FUN_1411c9292(*(longlong *)(param_1[0x3e] + 0x428),&local_2c8,local_2a8);
      }
    }
    cVar23 = (**(code **)(param_1[0x2f] + 0xd8))(param_1 + 0x2f);
    if ((cVar23 != '\0') && (*(char *)((longlong)param_1 + 0x7aa) == '\x01')) {
      lVar25 = param_1[0x22];
      local_178 = *(double *)(lVar25 + 0x260);
      dStack_170 = *(double *)(lVar25 + 0x268);
      local_168 = *(double *)(lVar25 + 0x270);
      local_288 = ZEXT412(0);
      memset(local_278,0,0x100);
      local_1a8 = 0xffffffff;
      local_1d4 = 0xffffffff;
      local_278._4_4_ = 0x3f800000;
      lVar25 = *(longlong *)(param_1[0x3e] + 0x438);
      dVar1 = *(double *)(lVar25 + 0x280);
      uVar33 = SUB84(dVar1,0);
      uVar35 = (undefined4)((ulonglong)dVar1 >> 0x20);
      dVar2 = *(double *)(lVar25 + 0x288);
      if (dVar2 <= dVar1) {
        uVar33 = SUB84(dVar2,0);
        uVar35 = (undefined4)((ulonglong)dVar2 >> 0x20);
      }
      local_420 = (float)(double)CONCAT44(uVar35,uVar33) * *(float *)(lVar25 + 0x644);
      local_418 = 0;
      local_428 = local_288;
      (**(code **)(*param_1 + 0x910))
                (param_1,&local_178,*param_1,*(undefined4 *)((longlong)param_1 + 0x7ac));
      lVar25 = FUN_14479d2ce(local_1a0);
      if (lVar25 != 0) {
        lVar25 = FUN_147a0442c(lVar25);
        lVar27 = FUN_147a0442c(plVar6);
        if (lVar25 == lVar27) goto LAB_1411c833a;
      }
      (**(code **)(*param_1 + 0x660))(param_1);
      (**(code **)(*param_1 + 0x730))(param_1,0,0,1);
    }
  }
  else {
    cVar23 = (**(code **)(*plVar6 + 0x4c8))(plVar6,lVar27);
    if (cVar23 != '\0') {
      plVar30 = plVar6;
      lVar25 = (**(code **)(*plVar6 + 0x4a8))(plVar6,local_288,lVar27,0);
      uVar36 = SUB84(local_258,0);
      uVar37 = (undefined4)((ulonglong)local_258 >> 0x20);
      uVar33 = local_288._0_4_;
      uVar35 = local_288._4_4_;
      uVar44 = local_288._8_4_;
      uVar45 = uStack_27c;
      uVar46 = local_278._0_4_;
      uVar47 = local_278._4_4_;
      uVar48 = local_278._8_4_;
      uVar49 = local_278._12_4_;
      uVar32 = local_268;
      uVar34 = uStack_264;
      uVar50 = uStack_260;
      uVar51 = uStack_25c;
      goto LAB_1411c8241;
    }
  }
LAB_1411c833a:
  *(uint *)(param_1 + 0x24) = uVar5;
LAB_1411c8340:
  if ((local_f0 ^ (ulonglong)auStack_448) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411c91ca FUN_1411c91ca body=199 status=ok
// SIG undefined FUN_1411c91ca(void)

void FUN_1411c91ca(longlong param_1,double *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  if ((*(byte *)(param_1 + 0x170) & 0x10) != 0) {
    dVar1 = *(double *)(param_1 + 0x148);
    dVar2 = *(double *)(param_1 + 0x150);
    dVar3 = (param_3[2] - *(double *)(param_1 + 0x168)) * dVar2 +
            (*param_3 - *(double *)(param_1 + 0x158)) * *(double *)(param_1 + 0x140) +
            (param_3[1] - *(double *)(param_1 + 0x160)) * dVar1;
    *param_3 = *param_3 - dVar3 * *(double *)(param_1 + 0x140);
    param_3[1] = param_3[1] - dVar1 * dVar3;
    param_3[2] = param_3[2] - dVar2 * dVar3;
  }
  param_2[2] = param_3[2];
  dVar1 = param_3[1];
  *param_2 = *param_3;
  param_2[1] = dVar1;
  return;
}



// FUNCTION 1411c9292 FUN_1411c9292 body=780 status=ok
// SIG undefined FUN_1411c9292(void)

void FUN_1411c9292(longlong param_1,double *param_2,double *param_3)

{
  double dVar1;
  double dVar3;
  double dVar5;
  longlong lVar6;
  undefined8 uVar7;
  int iVar8;
  ulonglong uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 auStack_168 [32];
  double local_148;
  double dStack_140;
  double local_138;
  double dStack_130;
  double local_128;
  double dStack_120;
  double local_118;
  undefined8 uStack_110;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double dStack_c0;
  double local_b8;
  undefined8 uStack_b0;
  ulonglong local_80;
  double dVar2;
  double dVar4;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_168;
  iVar8 = *(int *)(param_1 + 0xce0);
  if ((((longlong)iVar8 != -1) && (iVar8 < *(int *)(param_1 + 0xd78))) &&
     (lVar6 = *(longlong *)(*(longlong *)(param_1 + 0xd70) + (longlong)iVar8 * 8),
     *(longlong *)(lVar6 + 0x138) != 0)) {
    FUN_1447f067c(lVar6,&local_e8,1,0);
    dVar1 = param_3[3];
    dVar2 = param_3[3];
    dVar12 = *param_3 * dStack_e0;
    dVar13 = *param_3 * local_e8;
    dVar3 = param_3[1];
    dVar4 = param_3[1];
    dVar14 = local_e8 * dVar3;
    dVar15 = dStack_e0 * dVar4;
    dVar5 = param_3[2];
    dVar11 = param_3[2];
    dVar10 = local_e8 * dVar11;
    dVar11 = local_d8 * dVar11;
    local_e8 = dStack_e0 * dVar5 * -1.0 +
               local_d8 * dVar3 + dStack_d0 * *param_3 * 1.0 + local_e8 * dVar1;
    dStack_e0 = dVar10 * 1.0 + dStack_d0 * dVar4 + local_d8 * *param_3 * -1.0 + dStack_e0 * dVar2;
    local_d8 = dStack_d0 * dVar5 * 1.0 + ((dVar12 * 1.0 + dVar1 * local_d8) - dVar14);
    dStack_d0 = dVar11 * -1.0 + ((dVar13 * -1.0 + dVar2 * dStack_d0) - dVar15);
    local_b8 = local_b8 + param_2[2];
    dStack_c0 = dStack_c0 + param_2[1];
    local_c8 = local_c8 + *param_2;
    uStack_b0 = 0;
    FUN_140043566(lVar6,&local_e8,1,1);
    iVar8 = *(int *)(param_1 + 0xd78);
    if (0 < iVar8) {
      uVar9 = 0;
      do {
        if (uVar9 != *(uint *)(param_1 + 0xce0)) {
          uVar7 = *(undefined8 *)(*(longlong *)(param_1 + 0xd70) + uVar9 * 8);
          FUN_1447f067c(uVar7,&local_148,1,0);
          dVar2 = param_3[3];
          dVar1 = param_3[3];
          dVar12 = *param_3 * dStack_140;
          dVar13 = *param_3 * local_148;
          dVar3 = param_3[1];
          dVar4 = param_3[1];
          dVar14 = local_148 * dVar3;
          dVar15 = dStack_140 * dVar4;
          dVar5 = param_3[2];
          dVar11 = param_3[2];
          dVar10 = local_148 * dVar11;
          dVar11 = local_138 * dVar11;
          local_148 = dStack_140 * dVar5 * -1.0 +
                      local_138 * dVar3 + dStack_130 * *param_3 * 1.0 + local_148 * dVar2;
          dStack_140 = dVar10 * 1.0 +
                       dStack_130 * dVar4 + local_138 * *param_3 * -1.0 + dStack_140 * dVar1;
          local_138 = dStack_130 * dVar5 * 1.0 + ((dVar12 * 1.0 + dVar2 * local_138) - dVar14);
          dStack_130 = dVar11 * -1.0 + ((dVar13 * -1.0 + dVar1 * dStack_130) - dVar15);
          local_118 = local_118 + param_2[2];
          dStack_120 = dStack_120 + param_2[1];
          local_128 = local_128 + *param_2;
          uStack_110 = 0;
          FUN_140043566(uVar7,&local_148,1);
          iVar8 = *(int *)(param_1 + 0xd78);
        }
        uVar9 = uVar9 + 1;
      } while ((longlong)uVar9 < (longlong)iVar8);
    }
    FUN_1401c9320(param_1);
  }
  if ((local_80 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411c95a0 FUN_1411c95a0 body=200 status=ok
// SIG undefined FUN_1411c95a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1411c95a0(void)

{
  if ((DAT_14ca4ffff & 2) != 0) {
    return;
  }
  DAT_14ca4ffff = DAT_14ca4ffff | 2;
  _DAT_14ca4ffa0 = L"FShadowProjectionPixelShaderInterface";
  _DAT_14ca4ffb8 = FUN_146826540;
  _DAT_14ca4ffc0 = FUN_146825d77;
  _DAT_14ca4ffc8 = FUN_146825fd6;
  _DAT_14ca4ffd0 = FUN_1407e02ea;
  _DAT_14ca4ffd8 = FUN_146826273;
  _DAT_14ca4ffb0 = FUN_1472ee584;
  _DAT_14ca4fff0 = 0xffffffff000000e0;
  _DAT_14ca4fff8 = 8;
  DAT_14ca4fffc = 0;
  _DAT_14ca4ffe0 = &LAB_1472ee5b0;
  FUN_145834204();
  FUN_1407e00cc(&DAT_14ca4ff98);
  return;
}



// FUNCTION 1411c9668 FUN_1411c9668 body=400 status=ok
// SIG undefined FUN_1411c9668(void)

void FUN_1411c9668(longlong param_1,longlong param_2,longlong param_3,undefined1 param_4)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  bool bVar6;
  
  iVar2 = *(int *)(param_1 + 0x88);
  *(uint *)(param_1 + 0x88) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x8c) < iVar2 + 1U) {
    FUN_1411c97f8((longlong *)(param_1 + 0x80),iVar2);
  }
  puVar1 = (uint *)(*(longlong *)(param_1 + 0x80) + (longlong)iVar2 * 0x14);
  puVar1[0] = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  if (param_2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(uint *)(param_2 + 0xc);
    *puVar1 = uVar3;
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar5 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar5 = 0;
    }
    uVar3 = *(uint *)(lVar5 + 0x10);
    if (*(uint *)(lVar5 + 0x10) == 0) {
      LOCK();
      iVar2 = DAT_14c964868 + 1;
      UNLOCK();
      uVar4 = DAT_14c964868 + 1;
      bVar6 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar2;
      if (bVar6) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar4);
      }
      LOCK();
      uVar3 = *(uint *)(lVar5 + 0x10);
      bVar6 = uVar3 == 0;
      if (bVar6) {
        *(uint *)(lVar5 + 0x10) = uVar4;
        uVar3 = 0;
      }
      UNLOCK();
      if (bVar6) {
        uVar3 = uVar4;
      }
    }
  }
  puVar1[1] = uVar3;
  if (param_3 == 0) {
    puVar1[2] = 0;
    uVar3 = 0;
  }
  else {
    uVar3 = *(uint *)(param_3 + 0xc);
    puVar1[2] = uVar3;
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar5 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar5 = 0;
    }
    uVar3 = *(uint *)(lVar5 + 0x10);
    if (*(uint *)(lVar5 + 0x10) == 0) {
      LOCK();
      iVar2 = DAT_14c964868 + 1;
      UNLOCK();
      uVar4 = DAT_14c964868 + 1;
      bVar6 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar2;
      if (bVar6) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar4);
      }
      LOCK();
      uVar3 = *(uint *)(lVar5 + 0x10);
      bVar6 = uVar3 == 0;
      if (bVar6) {
        *(uint *)(lVar5 + 0x10) = uVar4;
        uVar3 = 0;
      }
      UNLOCK();
      if (bVar6) {
        uVar3 = uVar4;
      }
    }
  }
  puVar1[3] = uVar3;
  *(undefined1 *)(puVar1 + 4) = param_4;
  return;
}



// FUNCTION 1411c97f8 FUN_1411c97f8 body=373 status=ok
// SIG undefined FUN_1411c97f8(void)

void FUN_1411c97f8(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1411c9881;
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
LAB_1411c9881:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x14)) {
    uVar7 = uVar5 / 0x14 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x14,4);
  return;
}



// FUNCTION 1411c996e FUN_1411c996e body=329 status=ok
// SIG undefined FUN_1411c996e(void)

longlong FUN_1411c996e(longlong param_1,longlong param_2,undefined4 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  int iStack_50;
  undefined4 uStack_4c;
  undefined1 local_48;
  longlong local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14105c148(param_2,param_1);
  local_48 = *(undefined1 *)(param_3 + 4);
  local_58 = *param_3;
  uStack_54 = param_3[1];
  iStack_50 = param_3[2];
  uStack_4c = param_3[3];
  local_40 = 0;
  iVar1 = param_3[8];
  uVar2 = *(undefined8 *)(param_3 + 6);
  local_38 = iVar1;
  if (iVar1 == 0) {
    local_34 = 0;
  }
  else {
    FUN_1486eab00(&local_40,iVar1,0);
    FUN_1486eab73(local_40,uVar2,iVar1);
  }
  if ((iStack_50 < 0) && (plVar3 = *(longlong **)(param_1 + 0x20), plVar3 != (longlong *)0x0)) {
    uVar2 = FUN_14018b740();
    plVar3 = (longlong *)(**(code **)(*plVar3 + 0x288))(plVar3,uVar2);
    if (plVar3 != (longlong *)0x0) {
      uVar2 = FUN_14018b740();
      plVar4 = (longlong *)FUN_144718840(plVar3,uVar2);
      if ((plVar3 != plVar4) && (plVar4 != (longlong *)0x0)) {
        iStack_50 = (**(code **)(*plVar4 + 0x18))(plVar4);
      }
    }
  }
  *(undefined1 *)(param_2 + 0x20) = local_48;
  *(ulonglong *)(param_2 + 0x10) = CONCAT44(uStack_54,local_58);
  *(int *)(param_2 + 0x18) = iStack_50;
  *(undefined4 *)(param_2 + 0x1c) = uStack_4c;
  FUN_1411c9ab8(param_2 + 0x28,&local_40);
  FUN_140de863f(local_40,local_38);
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1411c9ab8 FUN_1411c9ab8 body=80 status=ok
// SIG undefined FUN_1411c9ab8(void)

longlong * FUN_1411c9ab8(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    FUN_140de863f(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
  }
  return param_1;
}



// FUNCTION 1411c9b08 FUN_1411c9b08 body=68 status=ok
// SIG undefined FUN_1411c9b08(void)

undefined8 FUN_1411c9b08(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1411c9b4c(param_2,param_3);
    *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_3 + 0x10);
    *(undefined2 *)(param_2 + 0x14) = *(undefined2 *)(param_3 + 0x14);
    param_2 = param_2 + 0x18;
    param_3 = param_3 + 0x18;
  }
  return 1;
}



// FUNCTION 1411c9b4c FUN_1411c9b4c body=93 status=ok
// SIG undefined FUN_1411c9b4c(void)

undefined8 * FUN_1411c9b4c(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140cc83f7(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1411c9c2e(param_1,iVar1);
      FUN_1411c9ba9(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 1411c9ba9 FUN_1411c9ba9 body=132 status=ok
// SIG undefined FUN_1411c9ba9(void)

void FUN_1411c9ba9(longlong param_1,undefined8 *param_2,int param_3)

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


