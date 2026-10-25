// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1410d53f0 FUN_1410d53f0 body=310 status=ok
// SIG undefined FUN_1410d53f0(void)

longlong * FUN_1410d53f0(longlong *param_1,longlong param_2)

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
  uVar4 = DAT_14cbc8e78;
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



// FUNCTION 1410d5528 FUN_1410d5528 body=1804 status=ok
// SIG undefined FUN_1410d5528(void)

void FUN_1410d5528(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  uint *puVar2;
  longlong *plVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  byte bVar12;
  int iVar13;
  int iVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  int iVar17;
  uint uVar18;
  longlong *plVar19;
  ulonglong uVar20;
  int iVar21;
  uint uVar22;
  ulonglong uVar23;
  uint uVar24;
  int iVar25;
  longlong lVar26;
  int iVar27;
  int iVar28;
  bool bVar29;
  
  if (param_2 == 0) {
    return;
  }
  lVar11 = *(longlong *)(param_2 + 0x2640);
  iVar25 = *(int *)(param_2 + 0x2648);
  if (0xfffffffd < iVar25 - 1U || lVar11 == 0) {
    return;
  }
  plVar1 = (longlong *)(param_1 + 0x168);
  uVar24 = (uint)lVar11;
  iVar21 = (int)((ulonglong)lVar11 >> 0x20);
  uVar22 = (uint)((ulonglong)lVar11 >> 0x10);
  if (*(int *)(param_1 + 0x170) != *(int *)(param_1 + 0x19c)) {
    lVar26 = param_1 + 0x1a0;
    if (*(longlong *)(param_1 + 0x1a8) != 0) {
      lVar26 = *(longlong *)(param_1 + 0x1a8);
    }
    iVar28 = *(int *)(lVar26 + (ulonglong)
                               (*(int *)(param_1 + 0x1b0) - 1U &
                               iVar21 + (uVar24 << 0x10 | uVar24 & 0xffff) +
                               (uVar22 << 0x13 | uVar22 & 0xffff) + ((uVar24 & 0xffff) >> 4)) * 4);
    if (iVar28 != -1) {
      lVar26 = *plVar1;
      iVar17 = iVar28;
      do {
        iVar13 = iVar28;
        if (*(longlong *)(lVar26 + (longlong)iVar17 * 0x18) == lVar11) goto LAB_1410d5600;
        iVar17 = *(int *)(lVar26 + (longlong)iVar17 * 0x18 + 0x10);
      } while (iVar17 != -1);
    }
  }
  goto LAB_1410d5677;
  while (iVar13 = (int)plVar19[2], (int)plVar19[2] != -1) {
LAB_1410d5600:
    plVar19 = (longlong *)(lVar26 + (longlong)iVar13 * 0x18);
    if (*plVar19 == lVar11) goto LAB_1410d561a;
  }
  plVar19 = (longlong *)0x0;
LAB_1410d561a:
  if (((((*(int *)((longlong)plVar19 + 0xc) != 0) &&
        (uVar4 = *(uint *)(plVar19 + 1), -1 < (int)uVar4)) && ((int)uVar4 < DAT_14c9647dc)) &&
      ((lVar10 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8), lVar10 != 0 &&
       (*(int *)(lVar10 + 0x10) == *(int *)((longlong)plVar19 + 0xc))))) &&
     ((*(uint *)(lVar10 + 8) & 0x10200000) == 0)) {
    do {
      plVar1 = (longlong *)(lVar26 + (longlong)iVar28 * 0x18);
      if (*plVar1 == lVar11) {
        return;
      }
      iVar28 = (int)plVar1[2];
    } while (iVar28 != -1);
    return;
  }
  FUN_140e02e2e(plVar1,lVar11);
LAB_1410d5677:
  if ((lVar11 == *(longlong *)(param_1 + 0x1b8)) && (iVar25 == *(int *)(param_1 + 0x1c0))) {
    FUN_1457fd84a(param_2,1);
  }
  uVar4 = *(uint *)(param_2 + 0xc);
  if ((int)uVar4 < DAT_14c9647dc) {
    lVar26 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
  }
  else {
    lVar26 = 0;
  }
  iVar25 = *(int *)(lVar26 + 0x10);
  if (*(int *)(lVar26 + 0x10) == 0) {
    LOCK();
    iVar25 = DAT_14c964868 + 1;
    UNLOCK();
    iVar28 = DAT_14c964868 + 1;
    bVar29 = DAT_14c964868 < 1000;
    DAT_14c964868 = iVar25;
    if (bVar29) {
      FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                    L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                    iVar28);
    }
    LOCK();
    iVar25 = *(int *)(lVar26 + 0x10);
    bVar29 = iVar25 == 0;
    if (bVar29) {
      *(int *)(lVar26 + 0x10) = iVar28;
      iVar25 = 0;
    }
    UNLOCK();
    if (bVar29) {
      iVar25 = iVar28;
    }
  }
  if (*(int *)(param_1 + 0x19c) == 0) {
    iVar28 = *(int *)(param_1 + 0x170);
    *(int *)(param_1 + 0x170) = iVar28 + 1;
    if (*(int *)(param_1 + 0x174) == iVar28) {
      FUN_1403951a8(plVar1,iVar28);
    }
    iVar17 = *(int *)(param_1 + 400);
    if (iVar17 == 0) {
      iVar13 = -1;
    }
    else {
      iVar13 = iVar17 + 0x1e;
      if (-1 < iVar17 + -1) {
        iVar13 = iVar17 + -1;
      }
      iVar13 = iVar13 >> 5;
    }
    lVar26 = param_1 + 0x178;
    iVar14 = iVar17 + 1;
    iVar27 = iVar17 + 0x1f;
    if (-1 < iVar17) {
      iVar27 = iVar17;
    }
    if (iVar27 >> 5 == iVar13) {
      *(int *)(param_1 + 400) = iVar14;
    }
    else {
      if (*(int *)(param_1 + 0x194) <= iVar17) {
        iVar13 = iVar17;
        if (iVar17 + 0x20U < 0xa0) {
          iVar14 = 0x80;
        }
        else {
          uVar7 = iVar17 + 0x20U >> 5;
          if (*(int *)(param_1 + 0x194) + 0x1fU < 0xa0) {
            uVar18 = 4;
            if (4 < uVar7) {
              uVar18 = uVar7;
            }
          }
          else {
            uVar18 = uVar7 + (uVar7 * 3 >> 3) + 0x10;
          }
          uVar15 = (ulonglong)(uVar18 * 4);
          if (DAT_14c872d28 != (longlong *)0x0) {
            if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
              uVar8 = (uint)(uVar15 + 0xf);
              if (uVar18 < 0x1ffd) {
                uVar15 = (ulonglong)
                         (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar15 + 0xf >> 4]];
              }
              else {
                uVar16 = (ulonglong)(uVar8 & 0xfffffff0);
                if (uVar16 < 0x7ff1) {
                  bVar12 = (&DAT_14c841e00)[uVar8 >> 4];
                  uVar20 = 0x32;
                  if (0x32 < bVar12) {
                    uVar20 = (ulonglong)bVar12;
                  }
                  uVar23 = 0x32 - (ulonglong)bVar12;
                  do {
                    uVar15 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar23 & 0xffffffff];
                    if (((&DAT_14c841d90)[uVar23 & 0xffffffff] & 0xf) == 0) goto LAB_1410d5af5;
                    lVar10 = uVar20 + 1 + uVar23;
                    uVar23 = uVar23 - 1;
                  } while (lVar10 != 0x33);
                }
                uVar15 = 0x10;
                if (0x10 < DAT_14c841df8) {
                  uVar15 = (ulonglong)DAT_14c841df8;
                }
                uVar15 = -uVar15 & (uVar16 + uVar15) - 1;
              }
            }
            else {
              uVar15 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar15,0);
              iVar13 = *(int *)(param_1 + 400);
            }
          }
LAB_1410d5af5:
          iVar9 = (int)(uVar15 >> 2);
          iVar14 = -0x20;
          if ((int)uVar7 <= iVar9) {
            iVar14 = iVar9 << 5;
          }
        }
        *(int *)(param_1 + 0x194) = iVar14;
        FUN_1446efbd8(lVar26,iVar13);
        iVar14 = *(int *)(param_1 + 400) + 1;
      }
      iVar13 = iVar14 + 0x1f;
      if (-1 < iVar14) {
        iVar13 = iVar14;
      }
      *(int *)(param_1 + 400) = iVar14;
      if (iVar14 % 0x20 != 0) {
        lVar10 = *(longlong *)(param_1 + 0x188);
        if (*(longlong *)(param_1 + 0x188) == 0) {
          lVar10 = lVar26;
        }
        bVar12 = -(char)(iVar14 % 0x20);
        *(uint *)(lVar10 + (longlong)(iVar13 >> 5) * 4) =
             (uint)(*(int *)(lVar10 + (longlong)(iVar13 >> 5) * 4) << (bVar12 & 0x1f)) >>
             (bVar12 & 0x1f);
      }
    }
    lVar10 = (longlong)iVar28;
    if (*(longlong *)(param_1 + 0x188) != 0) {
      lVar26 = *(longlong *)(param_1 + 0x188);
    }
    bVar12 = (byte)iVar17 & 0x1f;
    puVar2 = (uint *)(lVar26 + (longlong)(iVar27 >> 5) * 4);
    *puVar2 = *puVar2 & (-2 << bVar12 | 0xfffffffeU >> 0x20 - bVar12);
  }
  else {
    iVar28 = *(int *)(param_1 + 0x198);
    lVar10 = (longlong)iVar28;
    iVar17 = *(int *)(*(longlong *)(param_1 + 0x168) + 4 + lVar10 * 0x18);
    *(int *)(param_1 + 0x198) = iVar17;
    iVar13 = *(int *)(param_1 + 0x19c) + -1;
    *(int *)(param_1 + 0x19c) = iVar13;
    if (iVar13 != 0) {
      *(undefined4 *)(*(longlong *)(param_1 + 0x168) + (longlong)iVar17 * 0x18) = 0xffffffff;
    }
  }
  lVar26 = param_1 + 0x178;
  if (*(longlong *)(param_1 + 0x188) != 0) {
    lVar26 = *(longlong *)(param_1 + 0x188);
  }
  iVar17 = iVar28 + 0x1f;
  if (-1 < iVar28) {
    iVar17 = iVar28;
  }
  puVar2 = (uint *)(lVar26 + (longlong)(iVar17 >> 5) * 4);
  *puVar2 = *puVar2 | 1 << ((byte)iVar28 & 0x1f);
  iVar17 = 1;
  plVar19 = (longlong *)(*(longlong *)(param_1 + 0x168) + lVar10 * 0x18);
  *plVar19 = lVar11;
  plVar19[1] = CONCAT44(iVar25,uVar4);
  *(undefined4 *)(plVar19 + 2) = 0xffffffff;
  uVar22 = (uVar24 << 0x10 | uVar24 & 0xffff) + iVar21 + (uVar22 << 0x13 | uVar22 & 0xffff) +
           ((uVar24 & 0xffff) >> 4);
  uVar24 = *(int *)(param_1 + 0x170) - *(int *)(param_1 + 0x19c);
  if ((uVar24 != 0) && (uVar24 != 1)) {
    lVar26 = param_1 + 0x1a0;
    if (*(longlong *)(param_1 + 0x1a8) != 0) {
      lVar26 = *(longlong *)(param_1 + 0x1a8);
    }
    iVar25 = *(int *)(lVar26 + (ulonglong)(*(int *)(param_1 + 0x1b0) - 1U & uVar22) * 4);
    if (iVar25 != -1) {
      do {
        plVar3 = (longlong *)(*plVar1 + (longlong)iVar25 * 0x18);
        if (*plVar3 == lVar11) {
          uVar5 = *(undefined4 *)((longlong)plVar19 + 4);
          lVar11 = plVar19[1];
          uVar6 = *(undefined4 *)((longlong)plVar19 + 0xc);
          *(int *)plVar3 = (int)*plVar19;
          *(undefined4 *)((longlong)plVar3 + 4) = uVar5;
          *(int *)(plVar3 + 1) = (int)lVar11;
          *(undefined4 *)((longlong)plVar3 + 0xc) = uVar6;
          FUN_140e02f2a(plVar1,iVar28,1);
          return;
        }
        iVar25 = (int)plVar3[2];
      } while (iVar25 != -1);
    }
  }
  if (3 < uVar24) {
    uVar15 = (ulonglong)(uVar24 & 0xfffffffe) + 0xf;
    lVar11 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    iVar17 = 1 << ((byte)lVar11 & 0x1f);
  }
  if ((0 < (int)uVar24) && (*(int *)(param_1 + 0x1b0) < iVar17)) {
    *(int *)(param_1 + 0x1b0) = iVar17;
    FUN_1418f3112(plVar1);
    return;
  }
  uVar22 = *(int *)(param_1 + 0x1b0) - 1U & uVar22;
  *(uint *)((longlong)plVar19 + 0x14) = uVar22;
  lVar11 = *(longlong *)(param_1 + 0x1a8);
  if (*(longlong *)(param_1 + 0x1a8) == 0) {
    lVar11 = param_1 + 0x1a0;
  }
  *(undefined4 *)(plVar19 + 2) =
       *(undefined4 *)
        (lVar11 + ((longlong)*(int *)(param_1 + 0x1b0) - 1U & (longlong)(int)uVar22) * 4);
  lVar11 = *(longlong *)(param_1 + 0x1a8);
  if (*(longlong *)(param_1 + 0x1a8) == 0) {
    lVar11 = param_1 + 0x1a0;
  }
  *(int *)(lVar11 + ((longlong)*(int *)(param_1 + 0x1b0) - 1U & (longlong)(int)uVar22) * 4) = iVar28
  ;
  return;
}



// FUNCTION 1410d5c34 FUN_1410d5c34 body=36 status=ok
// SIG undefined FUN_1410d5c34(void)

undefined8 FUN_1410d5c34(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 1410d5c58 FUN_1410d5c58 body=36 status=ok
// SIG undefined FUN_1410d5c58(void)

undefined8 FUN_1410d5c58(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 1410d5c7c FUN_1410d5c7c body=36 status=ok
// SIG undefined FUN_1410d5c7c(void)

undefined8 FUN_1410d5c7c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 1410d5ca0 FUN_1410d5ca0 body=40 status=ok
// SIG undefined FUN_1410d5ca0(void)

undefined8 FUN_1410d5ca0(undefined8 param_1,int param_2)

{
  FUN_1410d5cc8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1410d5cc8 FUN_1410d5cc8 body=138 status=ok
// SIG undefined FUN_1410d5cc8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1410d5cc8(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14b3d99a0;
  if (param_1[0xc] != 0) {
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
                    /* WARNING: Could not recover jumptable at 0x0001410d5d3d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    return;
  }
  return;
}



// FUNCTION 1410d5d52 FUN_1410d5d52 body=113 status=ok
// SIG undefined FUN_1410d5d52(void)

ulonglong FUN_1410d5d52(longlong param_1)

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
LAB_1410d5da6:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_1410d5da6;
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



// FUNCTION 1410d5dc4 FUN_1410d5dc4 body=275 status=ok
// SIG undefined FUN_1410d5dc4(void)

void FUN_1410d5dc4(longlong param_1,longlong param_2,undefined8 param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  
  if (((((*(int *)(param_1 + 0x3c) == 0) || (uVar1 = *(uint *)(param_1 + 0x38), (int)uVar1 < 0)) ||
       (DAT_14c9647dc <= (int)uVar1)) ||
      ((puVar6 = (undefined8 *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
       puVar6 == (undefined8 *)0x0 || (*(int *)(puVar6 + 2) != *(int *)(param_1 + 0x3c))))) ||
     ((*(uint *)(puVar6 + 1) & 0x10200000) != 0)) goto LAB_1410d5ea1;
  if ((*(uint *)(puVar6 + 1) & 0x10200000) == 0) {
    uVar5 = *puVar6;
  }
  else {
    uVar5 = 0;
  }
  lVar2 = FUN_1447210f0(uVar5);
  lVar3 = FUN_1447210f0();
  if (lVar2 != lVar3) {
    return;
  }
  if (*(int *)(param_1 + 0x3c) == 0) {
LAB_1410d5ecc:
    lVar2 = 0;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x38);
    lVar2 = 0;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      plVar4 = (longlong *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((plVar4 == (longlong *)0x0) ||
         (((int)plVar4[2] != *(int *)(param_1 + 0x3c) || ((*(uint *)(plVar4 + 1) & 0x10200000) != 0)
          ))) goto LAB_1410d5ecc;
      lVar2 = *plVar4;
    }
  }
  if (*(int *)(lVar2 + 0x394) != *(int *)(param_2 + 0x394)) {
    return;
  }
LAB_1410d5ea1:
  if (*(longlong *)(param_1 + 0x28) == 0) {
    return;
  }
  FUN_1410d5ed8(param_1,*(longlong *)(param_1 + 0x28),param_2,param_3);
  return;
}



// FUNCTION 1410d5ed8 FUN_1410d5ed8 body=228 status=ok
// SIG undefined FUN_1410d5ed8(void)

void FUN_1410d5ed8(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4,
                  ulonglong param_5)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 auStack_88 [40];
  char local_60 [16];
  longlong *local_50;
  undefined4 local_38 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar4 = FUN_1410d5fbe(param_2);
  if (lVar4 == param_4) {
    uVar5 = FUN_1401b2ade(param_3);
    local_60[0] = '\0';
    local_38[0] = 0;
    FUN_1456bb102(local_60,uVar5);
    iVar3 = FUN_1410d6046(param_2,param_2 + 0x20,local_60);
    if ((((bool)*(char *)(param_1 + 0x30) != (ulonglong)(longlong)iVar3 <= param_5) &&
        (*(bool *)(param_1 + 0x30) = (ulonglong)(longlong)iVar3 <= param_5,
        *(int *)(param_1 + 0x20) != 0)) &&
       (plVar2 = *(longlong **)(param_1 + 0x18), plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x60))(plVar2,param_1);
    }
    FUN_1448173f8(local_38);
    if ((local_60[0] == '\x03') && (local_50 != (longlong *)0x0)) {
      LOCK();
      piVar1 = (int *)((longlong)local_50 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_50 + 0x10))();
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410d5fbe FUN_1410d5fbe body=136 status=ok
// SIG undefined FUN_1410d5fbe(void)

void FUN_1410d5fbe(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  lVar3 = *(longlong *)(param_1 + 0x10);
  if (lVar3 == 0) {
    uVar4 = FUN_140b1c3dc();
    lVar3 = FUN_14477b664(uVar4);
    *(longlong *)(param_1 + 0x10) = lVar3;
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    return;
  }
  if (lVar3 == 0) {
    return;
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    plVar1 = *(longlong **)(lVar3 + 0xb8);
    if ((plVar1 == (longlong *)0x0) ||
       (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
      uVar4 = 0;
    }
    else {
      uVar4 = (**(code **)(*plVar1 + 0x110))(plVar1);
      uVar4 = FUN_144aff482(uVar4,(longlong *)(param_1 + 8));
    }
    *(undefined8 *)(param_1 + 0x18) = uVar4;
    return;
  }
  return;
}



// FUNCTION 1410d6046 FUN_1410d6046 body=149 status=ok
// SIG undefined FUN_1410d6046(void)

undefined4 FUN_1410d6046(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined8 ***pppuVar3;
  undefined1 auStack_68 [40];
  undefined8 **local_40 [3];
  ushort local_28;
  byte local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1448729ea(param_2,local_40);
  uVar2 = FUN_1405d5f74(local_40);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_20 * 0x120));
  if (pcVar1 != (code *)0x0) {
    pppuVar3 = local_40;
    if (0x18 < local_28) {
      pppuVar3 = (undefined8 ***)local_40[0];
    }
    (*pcVar1)(pppuVar3);
  }
  if (0x18 < local_28) {
    FUN_1400020a8(local_40[0]);
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410d60ee FUN_1410d60ee body=289 status=ok
// SIG undefined FUN_1410d60ee(void)

void FUN_1410d60ee(longlong param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  LARGE_INTEGER local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(uint *)(param_2 + 1);
  if ((uVar1 & 0x3e) != 0) {
    puVar3 = (undefined8 *)FUN_14001cc68(0x28,0x10);
    local_48 = *param_2;
    uVar2 = *(undefined8 *)(param_1 + 0x588);
    QueryPerformanceCounter(&local_40);
    puVar3[1] = (double)local_40.QuadPart * DAT_14c83f420 + 16777216.0;
    puVar3[2] = uVar2;
    *puVar3 = &PTR_FUN_14ba44510;
    FUN_141904fbe(puVar3 + 3,&local_48);
    FUN_143e6b0f2(param_1,puVar3);
  }
  if ((uVar1 >> 9 & 1) != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x588);
    puVar3 = (undefined8 *)FUN_14001cc68(0x18,0x10);
    QueryPerformanceCounter(&local_40);
    puVar3[1] = (double)local_40.QuadPart * DAT_14c83f420 + 16777216.0;
    *puVar3 = &PTR_FUN_14ba458b0;
    puVar3[2] = uVar2;
    FUN_143e6b0f2(param_1,puVar3);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410d6210 FUN_1410d6210 body=301 status=ok
// SIG undefined FUN_1410d6210(void)

void FUN_1410d6210(longlong param_1)

{
  uint uVar1;
  char cVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined1 auStack_48 [40];
  char *local_20;
  undefined4 local_18;
  undefined1 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14011ff66();
  if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
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
    local_20 = "Niagara";
    local_18 = 7;
    local_14 = 0;
    uVar3 = FUN_14001a6c0(&local_20,1);
    cVar2 = FUN_14011feae(&DAT_14c874628,uVar3);
    if (cVar2 == '\0') {
      local_20 = (char *)0x0;
      FUN_14485c47a(&local_20,param_1);
      uVar1 = DAT_14cb42dd0;
      lVar4 = (longlong)(int)DAT_14cb42dd0;
      DAT_14cb42dd0 = DAT_14cb42dd0 + 1;
      if (DAT_14cb42dd4 < DAT_14cb42dd0) {
        FUN_1481f1e2c(uVar1);
      }
      *(char **)(DAT_14cb42dc8 + lVar4 * 8) = local_20;
    }
    else {
      FUN_1410d633e(param_1);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410d633e FUN_1410d633e body=3895 status=ok
// SIG undefined FUN_1410d633e(void)

void FUN_1410d633e(longlong param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  longlong local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined1 local_24;
  undefined1 local_23;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  puVar1 = (undefined8 *)(param_1 + 0x170);
  if ((*(longlong *)(param_1 + 0x19c) == 0) ||
     (plVar2 = (longlong *)FUN_144741050(param_1 + 0x198), *plVar2 == 0)) {
    FUN_140120ed2(&local_58,&DAT_14cb41b58);
    *(undefined4 *)(param_1 + 0x178) = (undefined4)uStack_50;
    *puVar1 = local_58;
    if (puVar1 != &local_58) {
      if (*(longlong *)(param_1 + 0x180) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_1 + 0x180) = local_48;
      local_48 = 0;
      *(undefined4 *)(param_1 + 0x188) = (undefined4)local_40;
      *(undefined4 *)(param_1 + 0x18c) = local_40._4_4_;
      local_40 = 0;
    }
    *(undefined4 *)(param_1 + 0x1a0) = local_28;
    *(undefined4 *)(param_1 + 400) = local_38;
    *(undefined4 *)(param_1 + 0x194) = uStack_34;
    *(undefined4 *)(param_1 + 0x198) = uStack_30;
    *(undefined4 *)(param_1 + 0x19c) = uStack_2c;
    *(undefined1 *)(param_1 + 0x1a4) = local_24;
    *(undefined1 *)(param_1 + 0x1a5) = local_23;
    if (local_48 != 0) {
      FUN_1400020a8();
    }
    FUN_140120ed2(&local_58,&DAT_14cb41c38);
    *(undefined4 *)(param_1 + 0x1b0) = (undefined4)uStack_50;
    *(undefined8 *)(param_1 + 0x1a8) = local_58;
    if ((undefined8 *)(param_1 + 0x1a8) != &local_58) {
      if (*(longlong *)(param_1 + 0x1b8) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_1 + 0x1b8) = local_48;
      local_48 = 0;
      *(undefined4 *)(param_1 + 0x1c0) = (undefined4)local_40;
      *(undefined4 *)(param_1 + 0x1c4) = local_40._4_4_;
      local_40 = 0;
    }
    *(undefined4 *)(param_1 + 0x1d8) = local_28;
    *(undefined4 *)(param_1 + 0x1c8) = local_38;
    *(undefined4 *)(param_1 + 0x1cc) = uStack_34;
    *(undefined4 *)(param_1 + 0x1d0) = uStack_30;
    *(undefined4 *)(param_1 + 0x1d4) = uStack_2c;
    *(undefined1 *)(param_1 + 0x1dc) = local_24;
    *(undefined1 *)(param_1 + 0x1dd) = local_23;
    if (local_48 != 0) {
      FUN_1400020a8();
    }
    FUN_140120ed2(&local_58,&DAT_14cb41c18);
    *(undefined4 *)(param_1 + 0x1e8) = (undefined4)uStack_50;
    *(undefined8 *)(param_1 + 0x1e0) = local_58;
    if ((undefined8 *)(param_1 + 0x1e0) != &local_58) {
      if (*(longlong *)(param_1 + 0x1f0) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_1 + 0x1f0) = local_48;
      local_48 = 0;
      *(undefined4 *)(param_1 + 0x1f8) = (undefined4)local_40;
      *(undefined4 *)(param_1 + 0x1fc) = local_40._4_4_;
      local_40 = 0;
    }
    *(undefined4 *)(param_1 + 0x210) = local_28;
    *(undefined4 *)(param_1 + 0x200) = local_38;
    *(undefined4 *)(param_1 + 0x204) = uStack_34;
    *(undefined4 *)(param_1 + 0x208) = uStack_30;
    *(undefined4 *)(param_1 + 0x20c) = uStack_2c;
    *(undefined1 *)(param_1 + 0x214) = local_24;
    *(undefined1 *)(param_1 + 0x215) = local_23;
    if (local_48 != 0) {
      FUN_1400020a8();
    }
    FUN_140120ed2(&local_58,&DAT_14cb41d18);
    *(undefined4 *)(param_1 + 0x3a8) = (undefined4)uStack_50;
    *(undefined8 *)(param_1 + 0x3a0) = local_58;
    if ((undefined8 *)(param_1 + 0x3a0) != &local_58) {
      if (*(longlong *)(param_1 + 0x3b0) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_1 + 0x3b0) = local_48;
      local_48 = 0;
      *(undefined4 *)(param_1 + 0x3b8) = (undefined4)local_40;
      *(undefined4 *)(param_1 + 0x3bc) = local_40._4_4_;
      local_40 = 0;
    }
    *(undefined4 *)(param_1 + 0x3d0) = local_28;
    *(undefined4 *)(param_1 + 0x3c0) = local_38;
    *(undefined4 *)(param_1 + 0x3c4) = uStack_34;
    *(undefined4 *)(param_1 + 0x3c8) = uStack_30;
    *(undefined4 *)(param_1 + 0x3cc) = uStack_2c;
    *(undefined1 *)(param_1 + 0x3d4) = local_24;
    *(undefined1 *)(param_1 + 0x3d5) = local_23;
    if (local_48 != 0) {
      FUN_1400020a8();
    }
    FUN_140120ed2(&local_58,&DAT_14cb41d38);
    *(undefined4 *)(param_1 + 0x3e0) = (undefined4)uStack_50;
    *(undefined8 *)(param_1 + 0x3d8) = local_58;
    if ((undefined8 *)(param_1 + 0x3d8) != &local_58) {
      if (*(longlong *)(param_1 + 1000) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_1 + 1000) = local_48;
      local_48 = 0;
      *(undefined4 *)(param_1 + 0x3f0) = (undefined4)local_40;
      *(undefined4 *)(param_1 + 0x3f4) = local_40._4_4_;
      local_40 = 0;
    }
    *(undefined4 *)(param_1 + 0x408) = local_28;
    *(undefined4 *)(param_1 + 0x3f8) = local_38;
    *(undefined4 *)(param_1 + 0x3fc) = uStack_34;
    *(undefined4 *)(param_1 + 0x400) = uStack_30;
    *(undefined4 *)(param_1 + 0x404) = uStack_2c;
    *(undefined1 *)(param_1 + 0x40c) = local_24;
    *(undefined1 *)(param_1 + 0x40d) = local_23;
    if (local_48 != 0) {
      FUN_1400020a8();
    }
    FUN_140120ed2(&local_58,&DAT_14cb41d58);
    *(undefined4 *)(param_1 + 0x418) = (undefined4)uStack_50;
    *(undefined8 *)(param_1 + 0x410) = local_58;
    if ((undefined8 *)(param_1 + 0x410) != &local_58) {
      if (*(longlong *)(param_1 + 0x420) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_1 + 0x420) = local_48;
      local_48 = 0;
      *(undefined4 *)(param_1 + 0x428) = (undefined4)local_40;
      *(undefined4 *)(param_1 + 0x42c) = local_40._4_4_;
      local_40 = 0;
    }
    *(undefined4 *)(param_1 + 0x440) = local_28;
    *(undefined4 *)(param_1 + 0x430) = local_38;
    *(undefined4 *)(param_1 + 0x434) = uStack_34;
    *(undefined4 *)(param_1 + 0x438) = uStack_30;
    *(undefined4 *)(param_1 + 0x43c) = uStack_2c;
    *(undefined1 *)(param_1 + 0x444) = local_24;
    *(undefined1 *)(param_1 + 0x445) = local_23;
    if (local_48 != 0) {
      FUN_1400020a8();
    }
    FUN_140120ed2(&local_58,&DAT_14cb41d78);
    *(undefined4 *)(param_1 + 0x450) = (undefined4)uStack_50;
    *(undefined8 *)(param_1 + 0x448) = local_58;
    if ((undefined8 *)(param_1 + 0x448) != &local_58) {
      if (*(longlong *)(param_1 + 0x458) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_1 + 0x458) = local_48;
      local_48 = 0;
      *(undefined4 *)(param_1 + 0x460) = (undefined4)local_40;
      *(undefined4 *)(param_1 + 0x464) = local_40._4_4_;
      local_40 = 0;
    }
    *(undefined4 *)(param_1 + 0x478) = local_28;
    *(undefined4 *)(param_1 + 0x468) = local_38;
    *(undefined4 *)(param_1 + 0x46c) = uStack_34;
    *(undefined4 *)(param_1 + 0x470) = uStack_30;
    *(undefined4 *)(param_1 + 0x474) = uStack_2c;
    *(undefined1 *)(param_1 + 0x47c) = local_24;
    *(undefined1 *)(param_1 + 0x47d) = local_23;
    if (local_48 != 0) {
      FUN_1400020a8();
    }
    FUN_140120ed2(&local_58,&DAT_14cb41c78);
    *(undefined4 *)(param_1 + 0x220) = (undefined4)uStack_50;
    *(undefined8 *)(param_1 + 0x218) = local_58;
    if ((undefined8 *)(param_1 + 0x218) != &local_58) {
      if (*(longlong *)(param_1 + 0x228) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_1 + 0x228) = local_48;
      local_48 = 0;
      *(undefined4 *)(param_1 + 0x230) = (undefined4)local_40;
      *(undefined4 *)(param_1 + 0x234) = local_40._4_4_;
      local_40 = 0;
    }
    *(undefined4 *)(param_1 + 0x248) = local_28;
    *(undefined4 *)(param_1 + 0x238) = local_38;
    *(undefined4 *)(param_1 + 0x23c) = uStack_34;
    *(undefined4 *)(param_1 + 0x240) = uStack_30;
    *(undefined4 *)(param_1 + 0x244) = uStack_2c;
    *(undefined1 *)(param_1 + 0x24c) = local_24;
    *(undefined1 *)(param_1 + 0x24d) = local_23;
    if (local_48 != 0) {
      FUN_1400020a8();
    }
    FUN_140120ed2(&local_58,&DAT_14cb41f18);
    *(undefined4 *)(param_1 + 600) = (undefined4)uStack_50;
    *(undefined8 *)(param_1 + 0x250) = local_58;
    if ((undefined8 *)(param_1 + 0x250) != &local_58) {
      if (*(longlong *)(param_1 + 0x260) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_1 + 0x260) = local_48;
      local_48 = 0;
      *(undefined4 *)(param_1 + 0x268) = (undefined4)local_40;
      *(undefined4 *)(param_1 + 0x26c) = local_40._4_4_;
      local_40 = 0;
    }
    *(undefined4 *)(param_1 + 0x280) = local_28;
    *(undefined4 *)(param_1 + 0x270) = local_38;
    *(undefined4 *)(param_1 + 0x274) = uStack_34;
    *(undefined4 *)(param_1 + 0x278) = uStack_30;
    *(undefined4 *)(param_1 + 0x27c) = uStack_2c;
    *(undefined1 *)(param_1 + 0x284) = local_24;
    *(undefined1 *)(param_1 + 0x285) = local_23;
    if (local_48 != 0) {
      FUN_1400020a8();
    }
    FUN_140120ed2(&local_58,&DAT_14cb41ef8);
    *(undefined4 *)(param_1 + 0x290) = (undefined4)uStack_50;
    *(undefined8 *)(param_1 + 0x288) = local_58;
    if ((undefined8 *)(param_1 + 0x288) != &local_58) {
      if (*(longlong *)(param_1 + 0x298) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_1 + 0x298) = local_48;
      local_48 = 0;
      *(undefined4 *)(param_1 + 0x2a0) = (undefined4)local_40;
      *(undefined4 *)(param_1 + 0x2a4) = local_40._4_4_;
      local_40 = 0;
    }
    *(undefined4 *)(param_1 + 0x2b8) = local_28;
    *(undefined4 *)(param_1 + 0x2a8) = local_38;
    *(undefined4 *)(param_1 + 0x2ac) = uStack_34;
    *(undefined4 *)(param_1 + 0x2b0) = uStack_30;
    *(undefined4 *)(param_1 + 0x2b4) = uStack_2c;
    *(undefined1 *)(param_1 + 700) = local_24;
    *(undefined1 *)(param_1 + 0x2bd) = local_23;
    if (local_48 != 0) {
      FUN_1400020a8();
    }
    FUN_140120ed2(&local_58,&DAT_14cb41f38);
    *(undefined4 *)(param_1 + 0x2c8) = (undefined4)uStack_50;
    *(undefined8 *)(param_1 + 0x2c0) = local_58;
    if ((undefined8 *)(param_1 + 0x2c0) != &local_58) {
      if (*(longlong *)(param_1 + 0x2d0) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_1 + 0x2d0) = local_48;
      local_48 = 0;
      *(undefined4 *)(param_1 + 0x2d8) = (undefined4)local_40;
      *(undefined4 *)(param_1 + 0x2dc) = local_40._4_4_;
      local_40 = 0;
    }
    *(undefined4 *)(param_1 + 0x2f0) = local_28;
    *(undefined4 *)(param_1 + 0x2e0) = local_38;
    *(undefined4 *)(param_1 + 0x2e4) = uStack_34;
    *(undefined4 *)(param_1 + 0x2e8) = uStack_30;
    *(undefined4 *)(param_1 + 0x2ec) = uStack_2c;
    *(undefined1 *)(param_1 + 0x2f4) = local_24;
    *(undefined1 *)(param_1 + 0x2f5) = local_23;
    if (local_48 != 0) {
      FUN_1400020a8();
    }
    FUN_140120ed2(&local_58,&DAT_14cb41ed8);
    *(undefined4 *)(param_1 + 0x300) = (undefined4)uStack_50;
    *(undefined8 *)(param_1 + 0x2f8) = local_58;
    if ((undefined8 *)(param_1 + 0x2f8) != &local_58) {
      if (*(longlong *)(param_1 + 0x308) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_1 + 0x308) = local_48;
      local_48 = 0;
      *(undefined4 *)(param_1 + 0x310) = (undefined4)local_40;
      *(undefined4 *)(param_1 + 0x314) = local_40._4_4_;
      local_40 = 0;
    }
    *(undefined4 *)(param_1 + 0x328) = local_28;
    *(undefined4 *)(param_1 + 0x318) = local_38;
    *(undefined4 *)(param_1 + 0x31c) = uStack_34;
    *(undefined4 *)(param_1 + 800) = uStack_30;
    *(undefined4 *)(param_1 + 0x324) = uStack_2c;
    *(undefined1 *)(param_1 + 0x32c) = local_24;
    *(undefined1 *)(param_1 + 0x32d) = local_23;
    if (local_48 != 0) {
      FUN_1400020a8();
    }
    FUN_140120ed2(&local_58,&DAT_14cb41f58);
    *(undefined4 *)(param_1 + 0x338) = (undefined4)uStack_50;
    *(undefined8 *)(param_1 + 0x330) = local_58;
    if ((undefined8 *)(param_1 + 0x330) != &local_58) {
      if (*(longlong *)(param_1 + 0x340) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_1 + 0x340) = local_48;
      local_48 = 0;
      *(undefined4 *)(param_1 + 0x348) = (undefined4)local_40;
      *(undefined4 *)(param_1 + 0x34c) = local_40._4_4_;
      local_40 = 0;
    }
    *(undefined4 *)(param_1 + 0x360) = local_28;
    *(undefined4 *)(param_1 + 0x350) = local_38;
    *(undefined4 *)(param_1 + 0x354) = uStack_34;
    *(undefined4 *)(param_1 + 0x358) = uStack_30;
    *(undefined4 *)(param_1 + 0x35c) = uStack_2c;
    *(undefined1 *)(param_1 + 0x364) = local_24;
    *(undefined1 *)(param_1 + 0x365) = local_23;
    if (local_48 != 0) {
      FUN_1400020a8();
    }
    FUN_140120ed2(&local_58,&DAT_14cb41e78);
    *(undefined4 *)(param_1 + 0x370) = (undefined4)uStack_50;
    *(undefined8 *)(param_1 + 0x368) = local_58;
    if ((undefined8 *)(param_1 + 0x368) != &local_58) {
      if (*(longlong *)(param_1 + 0x378) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_1 + 0x378) = local_48;
      local_48 = 0;
      *(undefined4 *)(param_1 + 0x380) = (undefined4)local_40;
      *(undefined4 *)(param_1 + 900) = local_40._4_4_;
      local_40 = 0;
    }
    *(undefined4 *)(param_1 + 0x398) = local_28;
    *(undefined4 *)(param_1 + 0x388) = local_38;
    *(undefined4 *)(param_1 + 0x38c) = uStack_34;
    *(undefined4 *)(param_1 + 0x390) = uStack_30;
    *(undefined4 *)(param_1 + 0x394) = uStack_2c;
    *(undefined1 *)(param_1 + 0x39c) = local_24;
    *(undefined1 *)(param_1 + 0x39d) = local_23;
    if (local_48 != 0) {
      FUN_1400020a8();
    }
    FUN_140120ed2(&local_58,&DAT_14cb41f78);
    *(undefined4 *)(param_1 + 0x488) = (undefined4)uStack_50;
    *(undefined8 *)(param_1 + 0x480) = local_58;
    if ((undefined8 *)(param_1 + 0x480) != &local_58) {
      if (*(longlong *)(param_1 + 0x490) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_1 + 0x490) = local_48;
      local_48 = 0;
      *(undefined4 *)(param_1 + 0x498) = (undefined4)local_40;
      *(undefined4 *)(param_1 + 0x49c) = local_40._4_4_;
      local_40 = 0;
    }
    *(undefined4 *)(param_1 + 0x4b0) = local_28;
    *(undefined4 *)(param_1 + 0x4a0) = local_38;
    *(undefined4 *)(param_1 + 0x4a4) = uStack_34;
    *(undefined4 *)(param_1 + 0x4a8) = uStack_30;
    *(undefined4 *)(param_1 + 0x4ac) = uStack_2c;
    *(undefined1 *)(param_1 + 0x4b4) = local_24;
    *(undefined1 *)(param_1 + 0x4b5) = local_23;
    if (local_48 != 0) {
      FUN_1400020a8();
    }
    FUN_140120ed2(&local_58,&DAT_14cb41f98);
    *(undefined4 *)(param_1 + 0x4c0) = (undefined4)uStack_50;
    *(undefined8 *)(param_1 + 0x4b8) = local_58;
    if ((undefined8 *)(param_1 + 0x4b8) != &local_58) {
      if (*(longlong *)(param_1 + 0x4c8) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_1 + 0x4c8) = local_48;
      local_48 = 0;
      *(undefined4 *)(param_1 + 0x4d0) = (undefined4)local_40;
      *(undefined4 *)(param_1 + 0x4d4) = local_40._4_4_;
      local_40 = 0;
    }
    *(undefined4 *)(param_1 + 0x4e8) = local_28;
    *(undefined4 *)(param_1 + 0x4d8) = local_38;
    *(undefined4 *)(param_1 + 0x4dc) = uStack_34;
    *(undefined4 *)(param_1 + 0x4e0) = uStack_30;
    *(undefined4 *)(param_1 + 0x4e4) = uStack_2c;
    *(undefined1 *)(param_1 + 0x4ec) = local_24;
    *(undefined1 *)(param_1 + 0x4ed) = local_23;
    if (local_48 != 0) {
      FUN_1400020a8();
    }
    FUN_140120ed2(&local_58,&DAT_14cb41fb8);
    *(undefined4 *)(param_1 + 0x4f8) = (undefined4)uStack_50;
    *(undefined8 *)(param_1 + 0x4f0) = local_58;
    if ((undefined8 *)(param_1 + 0x4f0) != &local_58) {
      if (*(longlong *)(param_1 + 0x500) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_1 + 0x500) = local_48;
      local_48 = 0;
      *(undefined4 *)(param_1 + 0x508) = (undefined4)local_40;
      *(undefined4 *)(param_1 + 0x50c) = local_40._4_4_;
      local_40 = 0;
    }
    *(undefined4 *)(param_1 + 0x520) = local_28;
    *(undefined4 *)(param_1 + 0x510) = local_38;
    *(undefined4 *)(param_1 + 0x514) = uStack_34;
    *(undefined4 *)(param_1 + 0x518) = uStack_30;
    *(undefined4 *)(param_1 + 0x51c) = uStack_2c;
    *(undefined1 *)(param_1 + 0x524) = local_24;
    *(undefined1 *)(param_1 + 0x525) = local_23;
    if (local_48 != 0) {
      FUN_1400020a8();
    }
    FUN_140120ed2(&local_58,&DAT_14cb41fd8);
    *(undefined4 *)(param_1 + 0x530) = (undefined4)uStack_50;
    *(undefined8 *)(param_1 + 0x528) = local_58;
    if ((undefined8 *)(param_1 + 0x528) != &local_58) {
      if (*(longlong *)(param_1 + 0x538) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_1 + 0x538) = local_48;
      local_48 = 0;
      *(undefined4 *)(param_1 + 0x540) = (undefined4)local_40;
      *(undefined4 *)(param_1 + 0x544) = local_40._4_4_;
      local_40 = 0;
    }
    *(undefined4 *)(param_1 + 0x558) = local_28;
    *(undefined4 *)(param_1 + 0x548) = local_38;
    *(undefined4 *)(param_1 + 0x54c) = uStack_34;
    *(undefined4 *)(param_1 + 0x550) = uStack_30;
    *(undefined4 *)(param_1 + 0x554) = uStack_2c;
    *(undefined1 *)(param_1 + 0x55c) = local_24;
    *(undefined1 *)(param_1 + 0x55d) = local_23;
    if (local_48 != 0) {
      FUN_1400020a8();
    }
    FUN_140120ed2(&local_58,&DAT_14cb41ff8);
    *(undefined4 *)(param_1 + 0x568) = (undefined4)uStack_50;
    *(undefined8 *)(param_1 + 0x560) = local_58;
    if ((undefined8 *)(param_1 + 0x560) != &local_58) {
      if (*(longlong *)(param_1 + 0x570) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_1 + 0x570) = local_48;
      local_48 = 0;
      *(undefined4 *)(param_1 + 0x578) = (undefined4)local_40;
      *(undefined4 *)(param_1 + 0x57c) = local_40._4_4_;
      local_40 = 0;
    }
    *(undefined4 *)(param_1 + 0x590) = local_28;
    *(undefined4 *)(param_1 + 0x580) = local_38;
    *(undefined4 *)(param_1 + 0x584) = uStack_34;
    *(undefined4 *)(param_1 + 0x588) = uStack_30;
    *(undefined4 *)(param_1 + 0x58c) = uStack_2c;
    *(undefined1 *)(param_1 + 0x594) = local_24;
    *(undefined1 *)(param_1 + 0x595) = local_23;
    if (local_48 != 0) {
      FUN_1400020a8();
    }
  }
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  FUN_1449662d0(param_1 + 0x5e8,puVar1,&local_58,0);
  FUN_1449662d0(param_1 + 0x620,param_1 + 0x288,&local_58,0);
  FUN_1449662d0(param_1 + 0x658,param_1 + 0x2c0,&local_58,0);
  FUN_1449662d0(param_1 + 0x690,param_1 + 0x250,&local_58,0);
  if ((local_20 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1410d7276 FUN_1410d7276 body=64 status=ok
// SIG undefined FUN_1410d7276(void)

void FUN_1410d7276(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0x70);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x68);
    lVar4 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar4);
      (**(code **)(*plVar3 + 0x18))(plVar3,param_2);
      lVar4 = lVar4 + 0x10;
    } while ((longlong)iVar1 * 0x10 != lVar4);
  }
  return;
}



// FUNCTION 1410d72b6 FUN_1410d72b6 body=81 status=ok
// SIG undefined FUN_1410d72b6(void)

void FUN_1410d72b6(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  lVar3 = *(longlong *)(param_1 + 0x38);
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
    UNLOCK();
  }
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_14107fe10(param_2,iVar1);
  }
  lVar4 = *param_2;
  *(undefined8 *)(lVar4 + (longlong)iVar1 * 0x10) = uVar2;
  *(longlong *)(lVar4 + 8 + (longlong)iVar1 * 0x10) = lVar3;
  return;
}



// FUNCTION 1410d7308 FUN_1410d7308 body=453 status=ok
// SIG undefined FUN_1410d7308(void)

ulonglong FUN_1410d7308(longlong param_1,int param_2,char param_3)

{
  undefined4 *puVar1;
  byte *pbVar2;
  uint uVar3;
  bool bVar4;
  char cVar5;
  ulonglong uVar6;
  ulonglong unaff_RBP;
  undefined7 uVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(longlong **)(param_1 + 0xb8) != (longlong *)0x0) {
    cVar5 = (**(code **)(**(longlong **)(param_1 + 0xb8) + 8))();
    unaff_RBP = CONCAT71((int7)(unaff_RBP >> 8),3);
    if (cVar5 == '\0') goto LAB_1410d73b2;
  }
  if (param_3 == '\x01') {
    puVar1 = (undefined4 *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x78);
    local_48 = *puVar1;
    uStack_44 = puVar1[1];
    uStack_40 = puVar1[2];
    uStack_3c = puVar1[3];
    FUN_1410d7556(param_1 + 0x18);
    (*(code *)(&PTR_LAB_14a4c7e10)
              [*(byte *)(*(longlong *)(param_1 + 0x68) + (longlong)param_2 * 0x78 + 0x68)])();
    FUN_1410d74ce(param_1 + 0x68,param_2,1);
    uVar3 = *(uint *)(param_1 + 0xa8);
    uVar6 = 0;
    if (0 < (int)uVar3) {
      uVar6 = 0;
      uVar8 = (ulonglong)uVar3;
      uVar9 = uVar3;
      do {
        uVar8 = uVar8 >> 1;
        uVar10 = (uint)uVar8 + (int)uVar6;
        if (*(int *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)uVar10 * 0x68) < param_2) {
          uVar6 = (ulonglong)(uVar10 + (uVar9 & 1));
        }
        bVar4 = 1 < uVar9;
        uVar9 = (uint)uVar8;
      } while (bVar4);
    }
    if (((int)uVar6 < (int)uVar3) &&
       (*(int *)(*(longlong *)(param_1 + 0xa0) + uVar6 * 0x68) <= param_2)) {
      FUN_147603588(param_1 + 0xa0,uVar6,1);
    }
    unaff_RBP = 0;
  }
  else {
    uVar3 = *(uint *)(param_1 + 0xa8);
    uVar6 = 0;
    if (0 < (int)uVar3) {
      uVar8 = (ulonglong)uVar3;
      uVar9 = uVar3;
      do {
        uVar8 = uVar8 >> 1;
        uVar10 = (uint)uVar8 + (int)uVar6;
        if (*(int *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)uVar10 * 0x68) < param_2) {
          uVar6 = (ulonglong)(uVar10 + (uVar9 & 1));
        }
        bVar4 = 1 < uVar9;
        uVar9 = (uint)uVar8;
      } while (bVar4);
    }
    uVar7 = (undefined7)(unaff_RBP >> 8);
    if (((int)uVar6 < (int)uVar3) &&
       (*(int *)(*(longlong *)(param_1 + 0xa0) + uVar6 * 0x68) <= param_2)) {
      unaff_RBP = CONCAT71(uVar7,1);
      FUN_147603588(param_1 + 0xa0,uVar6,1);
    }
    else {
      pbVar2 = (byte *)(*(longlong *)(param_1 + 0x68) + 0x70 + (longlong)param_2 * 0x78);
      *pbVar2 = *pbVar2 | 2;
      unaff_RBP = CONCAT71(uVar7,1);
    }
  }
LAB_1410d73b2:
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return unaff_RBP & 0xffffffff;
}



// FUNCTION 1410d74ce FUN_1410d74ce body=136 status=ok
// SIG undefined FUN_1410d74ce(void)

void FUN_1410d74ce(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)((longlong)param_2 * 0x78 + lVar2 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x78) = param_2;
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
      puVar7 = puVar7 + 0x1e;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1410d7556 FUN_1410d7556 body=353 status=ok
// SIG undefined FUN_1410d7556(void)

undefined8 FUN_1410d7556(longlong *param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar1 = param_2[1];
    uVar9 = uVar1 >> 0xd ^ *param_2 - uVar1;
    uVar7 = uVar9 << 8 ^ (-0x61c88647 - uVar1) - uVar9;
    uVar8 = uVar7 >> 0xd ^ (uVar1 - uVar9) - uVar7;
    uVar9 = uVar8 >> 0xc ^ (uVar9 - uVar7) - uVar8;
    uVar10 = uVar9 << 0x10 ^ (uVar7 - uVar8) - uVar9;
    uVar8 = uVar10 >> 5 ^ (uVar8 - uVar9) - uVar10;
    uVar7 = uVar8 >> 3 ^ (uVar9 - uVar10) - uVar8;
    uVar9 = uVar7 << 10 ^ (uVar10 - uVar8) - uVar7;
    uVar8 = uVar9 >> 0xf ^ uVar8 - (uVar7 + uVar9);
    lVar3 = *(longlong *)(param_2 + 2);
    uVar9 = (uint)((ulonglong)lVar3 >> 0x10);
    uVar7 = (uint)lVar3 & 0xffff;
    plVar6 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar6 +
                    ((longlong)
                     (int)((uVar8 >> 2) + 0x9e3779b9 +
                           ((uint)lVar3 << 0x10 | uVar7) + (int)((ulonglong)lVar3 >> 0x20) +
                           (uVar9 << 0x13 | uVar9 & 0xffff) + (uVar7 >> 4) + uVar8 * 0x40 ^ uVar8) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar2 != -1) {
      lVar4 = *param_1;
      do {
        lVar5 = (longlong)iVar2 * 0x1c;
        if (((*(int *)(lVar4 + lVar5) == *param_2) && (*(uint *)(lVar4 + 4 + lVar5) == uVar1)) &&
           (*(longlong *)(lVar4 + lVar5 + 8) == lVar3)) {
          FUN_1410d76b8();
          return 1;
        }
        iVar2 = *(int *)(lVar4 + lVar5 + 0x14);
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 1410d76b8 FUN_1410d76b8 body=105 status=ok
// SIG undefined FUN_1410d76b8(void)

void FUN_1410d76b8(longlong *param_1,int param_2)

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
  lVar5 = (longlong)*(int *)(lVar1 + 0x18 + (longlong)param_2 * 0x1c);
  iVar2 = *(int *)((longlong)plVar3 + lVar5 * 4);
  if (iVar2 == param_2) {
    piVar4 = (int *)((longlong)plVar3 + lVar5 * 4);
  }
  else {
    do {
      piVar4 = (int *)((longlong)iVar2 * 0x1c + lVar1 + 0x14);
      iVar2 = *piVar4;
    } while (iVar2 != param_2);
  }
  *piVar4 = *(int *)(lVar1 + (longlong)param_2 * 0x1c + 0x14);
  FUN_1410d7722(param_1,param_2,1);
  return;
}



// FUNCTION 1410d7722 FUN_1410d7722 body=153 status=ok
// SIG undefined FUN_1410d7722(void)

void FUN_1410d7722(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)((longlong)param_2 * 0x1c + lVar2 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x1c) = param_2;
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
      puVar7 = puVar7 + 7;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1410d77ca FUN_1410d77ca body=1827 status=ok
// SIG undefined FUN_1410d77ca(void)

undefined8 FUN_1410d77ca(longlong param_1)

{
  ulonglong *puVar1;
  undefined4 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  bool bVar6;
  bool bVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  uint *puVar11;
  longlong lVar12;
  longlong *plVar13;
  uint uVar14;
  int iVar15;
  LPCRITICAL_SECTION lpCriticalSection;
  longlong lVar16;
  int iVar17;
  int iVar18;
  longlong lVar19;
  uint uVar20;
  longlong *plVar21;
  uint uVar22;
  longlong lVar23;
  uint uVar24;
  uint *puVar25;
  int iVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  int iVar29;
  ulonglong uVar30;
  undefined1 auStack_f8 [40];
  LPCRITICAL_SECTION local_d0;
  longlong *local_c8;
  ulonglong local_c0;
  uint *local_b8;
  undefined1 local_ac [4];
  longlong local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x10);
  EnterCriticalSection(lpCriticalSection);
  local_a8 = 0;
  uStack_a0 = 0;
  uVar30 = 0;
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  uStack_6c = 0x80;
  uStack_68 = 0xffffffff;
  uStack_64 = 0;
  local_58 = 0;
  local_50 = 0;
  puVar25 = (uint *)(param_1 + 0x58);
  uVar14 = *(uint *)(param_1 + 0x70);
  uVar28 = (ulonglong)uVar14;
  if (uVar14 == 0) {
    uVar27 = 1;
    uVar10 = 0;
    iVar18 = 0;
  }
  else {
    puVar11 = *(uint **)(param_1 + 0x68);
    if (*(uint **)(param_1 + 0x68) == (uint *)0x0) {
      puVar11 = puVar25;
    }
    uVar10 = *puVar11;
    if (uVar10 == 0) {
      iVar18 = uVar14 + 0x1e;
      if (-1 < (int)(uVar14 - 1)) {
        iVar18 = uVar14 - 1;
      }
      uVar30 = 0;
      uVar27 = (ulonglong)(uint)(iVar18 >> 5);
      if (iVar18 >> 5 < 1) {
        uVar27 = uVar30;
      }
      iVar18 = 0;
      do {
        if (uVar27 == uVar30) goto LAB_1410d78cd;
        iVar18 = iVar18 + 0x20;
        uVar10 = puVar11[uVar30 + 1];
        uVar30 = uVar30 + 1;
      } while (uVar10 == 0);
    }
    else {
      uVar30 = 0;
      iVar18 = 0;
    }
    uVar27 = (ulonglong)(-uVar10 & uVar10);
    uVar3 = uVar27 * 2 + 1;
    lVar19 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar19 == 0; lVar19 = lVar19 + -1) {
      }
    }
    uVar10 = (iVar18 - ((uint)lVar19 ^ 0x3f)) + 0x3e;
    if ((int)uVar14 <= (int)uVar10) {
      uVar10 = uVar14;
    }
  }
  if (uVar10 != uVar14) {
    local_c8 = (longlong *)(param_1 + 0xe0);
    uVar14 = 0xffffffff;
    local_d0 = lpCriticalSection;
    local_c0 = uVar28;
    do {
      uVar3 = uStack_a0;
      lVar19 = *(longlong *)(param_1 + 0x48);
      lVar23 = *(longlong *)(lVar19 + 0x18 + (longlong)(int)uVar10 * 0x28);
      if ((lVar23 != 0) && (*(int *)(lVar23 + 8) == 1)) {
        puVar1 = (ulonglong *)(lVar19 + (longlong)(int)uVar10 * 0x28);
        if (*(int *)(param_1 + 0xb0) != *(int *)(param_1 + 0xdc)) {
          uVar4 = *puVar1;
          uVar5 = puVar1[1];
          uVar10 = ((uint)(uVar5 >> 0x14) & 0xffff ^ (uint)(uVar5 >> 4)) * -0x7a143595;
          uVar10 = (uVar10 >> 0xd ^ uVar10) * -0x3d4d51cb;
          uVar10 = uVar10 >> 0x10 ^ uVar10;
          uVar20 = ((uint)(uVar4 >> 0x14) & 0xffff ^ (uint)(uVar4 >> 4)) * -0x7a143595;
          uVar20 = (uVar20 >> 0xd ^ uVar20) * -0x3d4d51cb;
          uVar20 = uVar10 >> 0xd ^ (uVar20 >> 0x10 ^ uVar20) - uVar10;
          uVar22 = uVar20 << 8 ^ (-0x61c88647 - uVar10) - uVar20;
          uVar24 = uVar22 >> 0xd ^ (uVar10 - uVar20) - uVar22;
          uVar10 = uVar24 >> 0xc ^ (uVar20 - uVar22) - uVar24;
          uVar20 = uVar10 << 0x10 ^ (uVar22 - uVar24) - uVar10;
          uVar22 = uVar20 >> 5 ^ (uVar24 - uVar10) - uVar20;
          uVar24 = uVar22 >> 3 ^ (uVar10 - uVar20) - uVar22;
          uVar10 = uVar24 << 10 ^ (uVar20 - uVar22) - uVar24;
          plVar21 = *(longlong **)(param_1 + 0xe8);
          if (*(longlong **)(param_1 + 0xe8) == (longlong *)0x0) {
            plVar21 = local_c8;
          }
          iVar29 = *(int *)((longlong)plVar21 +
                           (ulonglong)
                           (*(int *)(param_1 + 0xf0) - 1U &
                           (uVar10 >> 0xf ^ uVar22 - (uVar24 + uVar10))) * 4);
          if (iVar29 != -1) {
            lVar19 = *(longlong *)(param_1 + 0xa8);
            do {
              lVar23 = (longlong)iVar29;
              if ((*(ulonglong *)(lVar19 + lVar23 * 0x18) == uVar4) &&
                 (*(ulonglong *)(lVar19 + 8 + lVar23 * 0x18) == uVar5)) {
                lVar19 = (longlong)(int)uStack_a0;
                uVar10 = (int)uStack_a0 + 1;
                uStack_a0 = CONCAT44(uStack_a0._4_4_,uVar10);
                if (uStack_a0._4_4_ < uVar10) {
                  local_b8 = puVar25;
                  FUN_1457fdb08(&local_a8,uVar3 & 0xffffffff);
                  puVar25 = local_b8;
                }
                uVar8 = *(undefined4 *)((longlong)puVar1 + 4);
                uVar28 = puVar1[1];
                uVar9 = *(undefined4 *)((longlong)puVar1 + 0xc);
                puVar2 = (undefined4 *)(local_a8 + lVar19 * 0x10);
                *puVar2 = (int)*puVar1;
                puVar2[1] = uVar8;
                puVar2[2] = (int)uVar28;
                puVar2[3] = uVar9;
                uVar28 = local_c0;
                goto LAB_1410d7c48;
              }
              iVar29 = *(int *)(lVar19 + lVar23 * 0x18 + 0x10);
            } while (iVar29 != -1);
          }
        }
        FUN_1457fd99e(&local_98,local_ac,puVar1);
      }
LAB_1410d7c48:
      lpCriticalSection = local_d0;
      uVar14 = uVar14 & ~(uint)uVar27;
      puVar11 = *(uint **)(param_1 + 0x68);
      if (*(uint **)(param_1 + 0x68) == (uint *)0x0) {
        puVar11 = puVar25;
      }
      uVar20 = *(uint *)(param_1 + 0x70);
      iVar29 = (int)uVar30;
      lVar19 = (longlong)iVar29;
      uVar10 = puVar11[lVar19] & uVar14;
      if (uVar10 == 0) {
        iVar17 = uVar20 + 0x1e;
        if (-1 < (int)(uVar20 - 1)) {
          iVar17 = uVar20 - 1;
        }
        iVar17 = iVar17 >> 5;
        iVar18 = iVar18 + 0x20;
        iVar26 = iVar17;
        if (iVar17 < iVar29) {
          iVar26 = iVar29;
        }
        if (iVar29 < iVar17) {
          lVar23 = 0;
          do {
            uVar10 = puVar11[lVar19 + lVar23 + 1];
            if (uVar10 != 0) {
              uVar30 = (ulonglong)(iVar29 + (int)lVar23 + 1);
              uVar14 = 0xffffffff;
              goto LAB_1410d7cb2;
            }
            iVar18 = iVar18 + 0x20;
            lVar23 = lVar23 + 1;
          } while (iVar26 - lVar19 != lVar23);
          uVar14 = 0xffffffff;
          iVar29 = iVar26;
        }
        uVar30 = (ulonglong)(iVar29 + 1);
        uVar28 = local_c0;
        uVar10 = uVar20;
      }
      else {
LAB_1410d7cb2:
        uVar27 = (ulonglong)(-uVar10 & uVar10);
        uVar3 = uVar27 * 2 + 1;
        lVar19 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar19 == 0; lVar19 = lVar19 + -1) {
          }
        }
        uVar10 = (iVar18 - ((uint)lVar19 ^ 0x3f)) + 0x3e;
        if ((int)uVar20 <= (int)uVar10) {
          uVar10 = uVar20;
        }
      }
    } while (uVar10 != (uint)uVar28);
    if ((longlong)(int)uStack_a0 != 0) {
      lVar23 = (longlong)(int)uStack_a0 << 4;
      lVar19 = local_a8;
      do {
        FUN_1457fd8ce((longlong *)(param_1 + 0x48),lVar19);
        lVar19 = lVar19 + 0x10;
        lVar23 = lVar23 + -0x10;
      } while (lVar23 != 0);
    }
  }
LAB_1410d78cd:
  iVar18 = *(int *)(param_1 + 0xa0);
  lVar19 = (longlong)iVar18;
  if (lVar19 != 0) {
    plVar21 = *(longlong **)(param_1 + 0x98);
    bVar7 = true;
    if ((*plVar21 != 0) && (plVar21[1] != 0)) {
      bVar7 = *(int *)(plVar21[1] + 8) < 1;
    }
    local_c8 = plVar21 + 3;
    iVar17 = 0;
    iVar29 = 0;
    local_d0 = lpCriticalSection;
LAB_1410d7dbb:
    do {
      if (iVar29 + 1 < iVar18) {
        lVar12 = (longlong)iVar29;
        lVar23 = lVar12 + 2;
        plVar13 = local_c8 + lVar12 * 2;
        bVar6 = true;
        lVar16 = -1;
        do {
          iVar15 = (int)lVar16;
          if ((plVar13[-1] == 0) || (*plVar13 == 0)) {
            if (!bVar7) {
              iVar26 = iVar29 - iVar15;
              iVar15 = -iVar15;
              goto LAB_1410d7e62;
            }
          }
          else if ((bool)(*(int *)(*plVar13 + 8) < 1 ^ bVar7)) {
            iVar26 = iVar29 - iVar15;
            break;
          }
          bVar6 = lVar23 < lVar19;
          lVar16 = lVar16 + -1;
          lVar23 = lVar23 + 1;
          plVar13 = plVar13 + 2;
          iVar26 = iVar18;
        } while (lVar12 - lVar19 != lVar16);
      }
      else {
        bVar6 = false;
        iVar26 = iVar29 + 1;
      }
      iVar15 = iVar26 - iVar29;
      if (bVar7) {
        FUN_145eecc7f(plVar21 + (longlong)iVar29 * 2,iVar15);
        bVar7 = false;
        iVar29 = iVar26;
        if (!bVar6) break;
        goto LAB_1410d7dbb;
      }
LAB_1410d7e62:
      if (iVar17 != iVar29) {
        memmove(plVar21 + (longlong)iVar17 * 2,plVar21 + (longlong)iVar29 * 2,(longlong)iVar15 << 4)
        ;
      }
      iVar17 = iVar17 + iVar15;
      bVar7 = true;
      iVar29 = iVar26;
    } while (bVar6);
    *(int *)(param_1 + 0xa0) = iVar17;
    lpCriticalSection = local_d0;
  }
  if ((undefined8 *)(param_1 + 0xa8) == &local_98) {
    local_50 = 0;
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(param_1 + 0xa8) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0xa8) = local_98;
    local_98 = 0;
    *(undefined4 *)(param_1 + 0xb0) = (undefined4)uStack_90;
    *(undefined4 *)(param_1 + 0xb4) = uStack_90._4_4_;
    uStack_90 = 0;
    if (local_78 == 0) {
      *(undefined4 *)(param_1 + 0xb8) = local_88;
      *(undefined4 *)(param_1 + 0xbc) = uStack_84;
      *(undefined4 *)(param_1 + 0xc0) = uStack_80;
      *(undefined4 *)(param_1 + 0xc4) = uStack_7c;
    }
    if (*(longlong *)(param_1 + 200) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(param_1 + 200) = local_78;
    local_78 = 0;
    *(undefined4 *)(param_1 + 0xd0) = local_70;
    *(undefined4 *)(param_1 + 0xd4) = uStack_6c;
    local_70 = 0;
    uStack_6c = 0;
    *(undefined4 *)(param_1 + 0xd8) = uStack_68;
    *(undefined4 *)(param_1 + 0xdc) = uStack_64;
    uStack_68 = 0xffffffff;
    uStack_64 = 0;
    if (local_58 == 0) {
      *(undefined4 *)(param_1 + 0xe0) = local_60;
    }
    if (*(longlong *)(param_1 + 0xe8) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(param_1 + 0xe8) = local_58;
    local_58 = 0;
    *(undefined4 *)(param_1 + 0xf0) = local_50;
    local_50 = 0;
  }
  FUN_1410d7eee(&local_98);
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  LeaveCriticalSection(lpCriticalSection);
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 1;
}



// FUNCTION 1410d7eee FUN_1410d7eee body=118 status=ok
// SIG undefined FUN_1410d7eee(void)

void FUN_1410d7eee(longlong *param_1)

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



// FUNCTION 1410d7f64 FUN_1410d7f64 body=29 status=ok
// SIG undefined FUN_1410d7f64(void)

void FUN_1410d7f64(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1410d7f82 FUN_1410d7f82 body=73 status=ok
// SIG undefined FUN_1410d7f82(void)

undefined8 * FUN_1410d7f82(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b478d00;
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1410d7fd2 FUN_1410d7fd2 body=350 status=ok
// SIG undefined FUN_1410d7fd2(void)

void FUN_1410d7fd2(longlong *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong local_30;
  longlong *local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = param_1[0x78];
  local_28 = (longlong *)param_1[0x79];
  uVar1 = FUN_14477b072(param_1,DAT_14caf6468);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_28);
  local_30 = param_1[0x78];
  if ((local_30 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  local_38 = param_1[0x79];
  if ((local_38 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  FUN_1410d8132((longlong)param_1 + 0x3d4,param_1,&local_38,&local_30);
  lVar2 = FUN_14497e828(param_1);
  if (lVar2 != 0) {
    local_20 = param_1[0x78];
    local_28 = param_1;
    FUN_1447cd2ec(lVar2 + 0x78);
  }
  FUN_1410d81ce(param_1 + 0x82,param_1,param_1[0x79],param_1[0x78]);
  lVar2 = param_1[0x78];
  if (DAT_14c950c29 == 1) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = param_1[0x78];
    }
  }
  param_1[0x79] = lVar2;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410d8132 FUN_1410d8132 body=154 status=ok
// SIG undefined FUN_1410d8132(void)

void FUN_1410d8132(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_78 [40];
  longlong local_50;
  longlong *local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1410d828a(param_1,&local_50);
  if (local_50 != 0) {
    local_30 = *param_4;
    local_38 = *param_3;
    local_40 = param_2;
    FUN_1447cd2ec();
  }
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_48 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar2 = (int *)((longlong)local_48 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_48 + 0x10))(local_48);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410d81ce FUN_1410d81ce body=187 status=ok
// SIG undefined FUN_1410d81ce(void)

void FUN_1410d81ce(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
        goto LAB_1410d8271;
      }
    }
    uVar5 = uVar7 - 1;
    bVar6 = true;
  } while (1 < uVar7);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_1410d8271:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 1410d828a FUN_1410d828a body=250 status=ok
// SIG undefined FUN_1410d828a(void)

undefined8 * FUN_1410d828a(char *param_1,undefined8 *param_2)

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
  if (*param_1 != '\x01') goto LAB_1410d830d;
  FUN_1410d8386(0,&local_38);
  FUN_14018932e(&local_30,param_1 + -0x3d4,local_38);
  plVar1 = local_28;
  if (local_28 == (longlong *)0x0) {
    *param_2 = local_30;
    goto LAB_1410d830d;
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
joined_r0x0001410d8349:
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
        goto joined_r0x0001410d8349;
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
LAB_1410d830d:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410d8386 FUN_1410d8386 body=120 status=ok
// SIG undefined FUN_1410d8386(void)

undefined8 * FUN_1410d8386(undefined8 param_1,undefined8 *param_2)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caf6ed4) {
    FUN_144b3d300(&DAT_14caf6ed4);
    if (DAT_14caf6ed4 == -1) {
      FUN_1446ddc76(&DAT_14caf6ecc,"ReceiveControllerChangedDelegate",1);
      _Init_thread_footer(&DAT_14caf6ed4);
    }
  }
  *param_2 = DAT_14caf6ecc;
  return param_2;
}



// FUNCTION 1410d83fe FUN_1410d83fe body=1113 status=ok
// SIG undefined FUN_1410d83fe(void)

undefined8 * FUN_1410d83fe(undefined8 *param_1,int param_2)

{
  uint *puVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  longlong lVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  undefined1 auStack_b8 [36];
  int local_94;
  longlong *local_90;
  undefined8 local_88;
  undefined8 *local_80;
  uint local_78;
  int iStack_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  undefined8 *local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  *param_1 = &PTR_FUN_14a4db370;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  local_94 = param_2;
  if (param_1[0x1a] != 0) {
    FUN_1400020a8();
  }
  plVar2 = param_1 + 0x12;
  puVar3 = param_1 + 0x14;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  local_50 = 0;
  local_60 = puVar3;
  if (*(int *)(param_1 + 0x17) != 0) {
    FUN_1449c0562(&local_68);
  }
  local_88 = local_68;
  local_80 = local_60;
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_70 = local_50;
  local_6c = local_4c;
  local_90 = plVar2;
  if (iStack_54 < *(int *)(local_60 + 3)) {
    do {
      lVar14 = *local_90;
      lVar11 = (longlong)iStack_74 * 0x60;
      *(undefined4 *)(lVar14 + 0x50 + lVar11) = 0;
      if (*(longlong *)(lVar14 + 0x48 + lVar11) != 0) {
        FUN_1400020a8();
      }
      FUN_1476a3d68(lVar14 + lVar11 + 8);
      local_78 = local_78 & ~local_88._4_4_;
      FUN_1449c0562(&local_88);
    } while (iStack_74 < *(int *)(local_80 + 3));
  }
  *(undefined4 *)(param_1 + 0x13) = 0;
  if (*(int *)((longlong)param_1 + 0x9c) != 0) {
    FUN_1448fc38a(plVar2,0);
  }
  param_1[0x18] = 0xffffffff;
  *(undefined4 *)(param_1 + 0x17) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0xbc)) {
    *(undefined4 *)((longlong)param_1 + 0xbc) = 0x80;
    FUN_1446efbd8(puVar3,0);
  }
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  if (*plVar2 != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x11) = 0;
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  plVar2 = param_1 + 8;
  puVar1 = (uint *)(param_1 + 10);
  iVar5 = *(int *)(param_1 + 0xd);
  if (iVar5 == 0) {
    uVar15 = 0;
    uVar16 = 1;
    iVar6 = 0;
    iVar12 = 0;
  }
  else {
    puVar10 = (uint *)param_1[0xc];
    if ((uint *)param_1[0xc] == (uint *)0x0) {
      puVar10 = puVar1;
    }
    uVar13 = *puVar10;
    if (uVar13 == 0) {
      iVar6 = iVar5 + 0x1e;
      if (-1 < iVar5 + -1) {
        iVar6 = iVar5 + -1;
      }
      uVar15 = 0;
      uVar16 = (ulonglong)(uint)(iVar6 >> 5);
      if (iVar6 >> 5 < 1) {
        uVar16 = uVar15;
      }
      iVar12 = 0;
      do {
        if (uVar16 == uVar15) goto LAB_1410d8699;
        iVar12 = iVar12 + 0x20;
        uVar13 = puVar10[uVar15 + 1];
        uVar15 = uVar15 + 1;
      } while (uVar13 == 0);
    }
    else {
      uVar15 = 0;
      iVar12 = 0;
    }
    uVar16 = (ulonglong)(-uVar13 & uVar13);
    uVar4 = uVar16 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    iVar6 = (iVar12 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
    if (iVar5 <= iVar6) {
      iVar6 = iVar5;
    }
  }
  if (iVar6 < iVar5) {
    uVar13 = 0xffffffff;
    do {
      lVar14 = *plVar2 + (longlong)iVar6 * 0x3f0;
      if (*(char *)(*plVar2 + 0x3c0 + (longlong)iVar6 * 0x3f0) == '\x01') {
        *(undefined1 *)(lVar14 + 0x3c0) = 0;
      }
      FUN_1406b907e(lVar14 + 0x180);
      FUN_1406b907e(lVar14 + 0x10);
      uVar13 = uVar13 & ~(uint)uVar16;
      puVar10 = (uint *)param_1[0xc];
      if ((uint *)param_1[0xc] == (uint *)0x0) {
        puVar10 = puVar1;
      }
      iVar5 = *(int *)(param_1 + 0xd);
      iVar6 = (int)uVar15;
      lVar14 = (longlong)iVar6;
      uVar7 = puVar10[lVar14] & uVar13;
      if (uVar7 == 0) {
        iVar8 = iVar5 + 0x1e;
        if (-1 < iVar5 + -1) {
          iVar8 = iVar5 + -1;
        }
        iVar8 = iVar8 >> 5;
        iVar9 = iVar8;
        if (iVar8 < iVar6) {
          iVar9 = iVar6;
        }
        if (iVar8 <= iVar6) break;
        lVar11 = 0;
        while( true ) {
          iVar12 = iVar12 + 0x20;
          uVar7 = puVar10[lVar14 + lVar11 + 1];
          if (uVar7 != 0) break;
          lVar11 = lVar11 + 1;
          if (iVar9 - lVar14 == lVar11) goto LAB_1410d8699;
        }
        uVar15 = (ulonglong)(iVar6 + (int)lVar11 + 1);
        uVar13 = 0xffffffff;
      }
      uVar16 = (ulonglong)(-uVar7 & uVar7);
      uVar4 = uVar16 * 2 + 1;
      lVar14 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      iVar6 = (iVar12 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
    } while (iVar6 < iVar5);
  }
LAB_1410d8699:
  *(undefined4 *)(param_1 + 9) = 0;
  if (*(int *)((longlong)param_1 + 0x4c) != 0) {
    FUN_1410d8858(plVar2);
  }
  param_1[0xe] = 0xffffffff;
  *(undefined4 *)(param_1 + 0xd) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x6c)) {
    *(undefined4 *)((longlong)param_1 + 0x6c) = 0x80;
    FUN_1446efbd8(puVar1,0);
  }
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  if (*plVar2 != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  if (local_94 != 0) {
    FUN_1400020a8(param_1);
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410d8858 FUN_1410d8858 body=48 status=ok
// SIG undefined FUN_1410d8858(void)

void FUN_1410d8858(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x3f0,0x10);
  }
  return;
}



// FUNCTION 1410d8888 FUN_1410d8888 body=1 status=ok
// SIG undefined FUN_1410d8888(void)

void FUN_1410d8888(void)

{
  return;
}



// FUNCTION 1410d888a FUN_1410d888a body=374 status=ok
// SIG undefined FUN_1410d888a(void)

undefined8 FUN_1410d888a(longlong *param_1,longlong param_2)

{
  longlong lVar1;
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
  lVar1 = (**(code **)(*param_1 + 0x180))();
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x1f0) != 0)) {
    lVar1 = FUN_1400f6f32(lVar1);
    if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x68) != 0)) {
      lVar1 = FUN_140d1732e(*(longlong *)(lVar1 + 0x68),param_2 + 0x18);
      if (lVar1 != 0) {
        if (DAT_14cbadd90 == 0) {
          local_40 = &local_28;
          local_28 = FUN_141030f22;
          local_30 = FUN_14081d0ea;
          local_38 = &LAB_1459f2e4c;
          local_48 = &LAB_148c39de3;
          local_50 = &LAB_1457a9eb2;
          local_58 = &DAT_149e063b2;
          local_60 = 0;
          local_68 = 0x10000004;
          local_70 = 0x10;
          local_78 = 0x3de0;
          FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
        }
        if ((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
             (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) {
          lVar1 = FUN_1410d8a1a(lVar1);
          if (lVar1 != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_98);
          }
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410d8a1a FUN_1410d8a1a body=105 status=ok
// SIG undefined FUN_1410d8a1a(void)

void FUN_1410d8a1a(longlong param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_1410d8ad0();
  if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_18);
  }
  FUN_1410d8a84(param_1 + 0x3b38,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410d8a84 FUN_1410d8a84 body=76 status=ok
// SIG undefined FUN_1410d8a84(void)

void FUN_1410d8a84(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar1 = FUN_1410d8ad0();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar2 = *param_2;
      goto LAB_1410d8ac1;
    }
  }
  lVar2 = 0;
LAB_1410d8ac1:
  FUN_1448a6f9c(param_1,lVar2);
  return;
}



// FUNCTION 1410d8ad0 FUN_1410d8ad0 body=228 status=ok
// SIG undefined FUN_1410d8ad0(void)

longlong FUN_1410d8ad0(void)

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
  if (DAT_14cbb3058 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_1440263f2;
    local_28 = &LAB_14102785e;
    local_38 = &LAB_148c5ace5;
    local_40 = &LAB_145a2129d;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x100;
    FUN_14081cfa3(L"/Script/OakGame",L"OakUIDataCollector_Progression",&DAT_14cbb3058,FUN_1465f7560)
    ;
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbb3058;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410d8fc4 FUN_1410d8fc4 body=206 status=ok
// SIG undefined FUN_1410d8fc4(void)

void FUN_1410d8fc4(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  ulonglong *puVar2;
  int iVar3;
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
  iVar3 = FUN_1448332aa(param_2,&DAT_149e3cc18);
  if (iVar3 < 8) {
    FUN_146ea30db(param_2,param_1 + 0x10);
  }
  else {
    FUN_1410d9094(param_1 + 0x10,param_2,0);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410d9094 FUN_1410d9094 body=586 status=ok
// SIG undefined FUN_1410d9094(void)

void FUN_1410d9094(undefined8 *param_1,longlong *param_2,char param_3)

{
  int *piVar1;
  uint *puVar2;
  ulonglong *puVar3;
  int iVar4;
  uint uVar5;
  undefined1 auStack_48 [32];
  uint local_28;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0xc;
  puVar3 = (ulonglong *)param_2[1];
  piVar1 = (int *)*puVar3 + 1;
  if ((int *)puVar3[1] < piVar1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_24,4);
    }
    else {
      thunk_FUN_14572512c(param_2,&local_24);
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
    FUN_146ea31e4(param_2,param_1);
    goto LAB_1410d91ce;
  }
  (**(code **)(*param_2 + 0x10))
            (param_2,(longlong)*(int *)(param_1 + 1) * 0xc,
             (longlong)*(int *)((longlong)param_1 + 0xc) * 0xc);
  if ((*(byte *)(param_2 + 5) & 1) == 0) {
    if ((*(byte *)(param_2 + 5) & 4) == 0) goto LAB_1410d91ce;
    local_28 = *(uint *)(param_1 + 1);
    puVar3 = (ulonglong *)param_2[1];
    puVar2 = (uint *)*puVar3 + 1;
    if ((uint *)puVar3[1] < puVar2) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_28,4);
      }
      else {
        thunk_FUN_14572512c(param_2,&local_28);
      }
    }
    else {
      local_28 = *(uint *)*puVar3;
      *puVar3 = (ulonglong)puVar2;
    }
LAB_1410d91b7:
    (**(code **)(*param_2 + 0x170))(param_2,*param_1,(longlong)(int)local_28 * 0xc);
  }
  else {
    if (local_24 == 0xc) {
      local_28 = 0;
      puVar3 = (ulonglong *)param_2[1];
      puVar2 = (uint *)*puVar3 + 1;
      if ((uint *)puVar3[1] < puVar2) {
        if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
          (**(code **)(*param_2 + 0x170))(param_2,&local_28,4);
        }
        else {
          thunk_FUN_14572512c(param_2,&local_28);
        }
      }
      else {
        local_28 = *(uint *)*puVar3;
        *puVar3 = (ulonglong)puVar2;
      }
      if (local_28 < 0xaaaaaab) {
        *(undefined4 *)(param_1 + 1) = 0;
        iVar4 = 0;
        uVar5 = local_28;
        if (*(uint *)((longlong)param_1 + 0xc) != local_28) {
          FUN_146ea3024(param_1);
          iVar4 = *(int *)(param_1 + 1);
          uVar5 = *(uint *)((longlong)param_1 + 0xc);
        }
        *(uint *)(param_1 + 1) = local_28 + iVar4;
        if (uVar5 - iVar4 < local_28) {
          FUN_146ddc768(param_1,iVar4);
        }
        goto LAB_1410d91b7;
      }
    }
    FUN_14572541c(param_2);
  }
LAB_1410d91ce:
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1410d92e0 FUN_1410d92e0 body=102 status=ok
// SIG undefined FUN_1410d92e0(void)

void FUN_1410d92e0(longlong *param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_1410d9348();
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



// FUNCTION 1410d9348 FUN_1410d9348 body=228 status=ok
// SIG undefined FUN_1410d9348(void)

longlong FUN_1410d9348(void)

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
  if (DAT_14cb6f280 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_143242436;
    local_38 = &LAB_1487a20b7;
    local_40 = &LAB_14588363a;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0x150;
    FUN_14081cfa3(L"/Script/GbxGame",L"ScreenParticleManagerComponent",&DAT_14cb6f280,FUN_14653fa0c)
    ;
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb6f280;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410d942e FUN_1410d942e body=593 status=ok
// SIG undefined FUN_1410d942e(void)

void FUN_1410d942e(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98 [5];
  undefined1 local_6c;
  undefined8 *local_68 [3];
  longlong local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar4 = FUN_1410d9680();
  if ((param_2 != 0) && (lVar4 != 0)) {
    lVar5 = FUN_1410d9708(param_2);
    if (lVar5 != 0) {
      FUN_1410d9770(param_1,local_68);
      if (DAT_14c947fe0 == 0) {
        lVar6 = FUN_14001cc68(0x140,0x10);
        FUN_1456b2032(lVar6);
        DAT_14c947fe0 = lVar6;
      }
      FUN_140045924(DAT_14c947fe0,local_98,local_68,1);
      if (local_50 != 0) {
        FUN_1400020a8();
      }
      if ((*(int *)(lVar4 + 0x430) != 0) && (0 < *(int *)(lVar5 + 0xb60))) {
        local_68[0] = local_98;
        FUN_14110bf80(lVar5 + 0xab8);
      }
      if (*(char *)(lVar4 + 0x48) == '\x01') {
        FUN_1400bc8c2(lVar5 + 0xce0,local_98);
      }
      if (*(char *)(lVar4 + 0x49) == '\x01') {
        FUN_1400bc8c2(lVar5 + 0xcb8,local_98);
      }
      if (*(longlong *)(param_1 + 0x84) != 0) {
        FUN_1410d99c0(lVar5,local_98,0);
      }
      if (*(longlong *)(param_1 + 0x90) != 0) {
        local_a8 = 0;
        uStack_a0 = 0;
        FUN_148994192(lVar5);
      }
      if (*(int *)(param_1 + 0x78) != 0) {
        local_6c = 0;
        FUN_1410d991c(lVar5);
      }
      if (*(longlong *)(lVar4 + 0x70) != 0) {
        plVar3 = *(longlong **)(lVar5 + 0xe48);
        *(undefined8 *)(lVar5 + 0xe40) = 0;
        *(undefined8 *)(lVar5 + 0xe48) = 0;
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
      if (*(char *)(lVar4 + 0x3f8) == '\x01') {
        lVar6 = FUN_14035fbb0(param_2);
        if (lVar6 != 0) {
          FUN_147f586bc(lVar6,0);
        }
      }
      if (*(char *)(lVar4 + 0x420) == '\x01') {
        FUN_147e2465c(lVar5,&DAT_14cb8c1b8);
      }
      if (*(char *)(lVar4 + 0x58) == '\x01') {
        FUN_140af95c6(lVar5,1);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410d9680 FUN_1410d9680 body=78 status=ok
// SIG undefined FUN_1410d9680(void)

longlong * FUN_1410d9680(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x28);
  if (plVar1 != (longlong *)0x0) {
    lVar2 = (**(code **)(*plVar1 + 8))(plVar1);
    lVar3 = FUN_1410d96ce();
    if ((lVar3 != 0) && (*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38))) {
      if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
          lVar3 + 0x30) {
        return (longlong *)0x0;
      }
      return plVar1;
    }
  }
  return (longlong *)0x0;
}



// FUNCTION 1410d96ce FUN_1410d96ce body=57 status=ok
// SIG undefined FUN_1410d96ce(void)

void FUN_1410d96ce(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5ee40 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5ee40 = FUN_140002ddd(FUN_1464e425f,uVar1,L"GbxGameSpawnerBehaviorMod");
  }
  return;
}



// FUNCTION 1410d9708 FUN_1410d9708 body=102 status=ok
// SIG undefined FUN_1410d9708(void)

void FUN_1410d9708(longlong *param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_1407fc0e2();
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



// FUNCTION 1410d9770 FUN_1410d9770 body=130 status=ok
// SIG undefined FUN_1410d9770(void)

undefined8 FUN_1410d9770(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  if (((*(longlong *)(param_1 + 0x18) == 0) ||
      (plVar3 = *(longlong **)(param_1 + 0x20), plVar3 == (longlong *)0x0)) || ((int)plVar3[1] < 1))
  {
    FUN_1447a97f4(param_2,&DAT_14c9485f0);
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        FUN_1410d97f2(0,param_2);
        return param_2;
      }
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar6 = iVar5 == iVar4;
      if (bVar6) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar6);
    FUN_1410d97f2(*(undefined8 *)(param_1 + 0x18),param_2);
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
  return param_2;
}



// FUNCTION 1410d97f2 FUN_1410d97f2 body=294 status=ok
// SIG undefined FUN_1410d97f2(void)

undefined8 * FUN_1410d97f2(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (((*(longlong *)(param_1 + 0x10) == 0) ||
      (plVar6 = *(longlong **)(param_1 + 0x18), plVar6 == (longlong *)0x0)) || ((int)plVar6[1] < 1))
  {
    FUN_1447a97f4(param_2,&DAT_14c9485f0);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_68);
  }
  lVar5 = 0;
  iVar4 = (int)plVar6[1];
  do {
    iVar3 = iVar4;
    if (iVar3 == 0) {
      plVar6 = (longlong *)0x0;
      goto LAB_1410d9850;
    }
    LOCK();
    iVar4 = (int)plVar6[1];
    bVar7 = iVar3 == iVar4;
    if (bVar7) {
      *(int *)(plVar6 + 1) = iVar3 + 1;
      iVar4 = iVar3;
    }
    UNLOCK();
  } while (!bVar7);
  lVar5 = *(longlong *)(param_1 + 0x10);
LAB_1410d9850:
  local_30 = *(undefined4 *)(*(longlong *)(lVar5 + 0x18) + 0x20);
  local_38 = *(undefined8 *)(*(longlong *)(lVar5 + 0x18) + 0x18);
  local_40 = *(undefined4 *)(*(longlong *)(lVar5 + 0x10) + 0x98);
  local_48 = *(undefined8 *)(*(longlong *)(lVar5 + 0x10) + 0x90);
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined4 *)(param_2 + 2) = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  FUN_144928d62(param_2,0);
  FUN_144928d62(param_2,1,&local_38);
  if (iVar3 != 0) {
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
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1410d991c FUN_1410d991c body=164 status=ok
// SIG undefined FUN_1410d991c(void)

void FUN_1410d991c(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  byte bVar3;
  char cVar4;
  
  puVar1 = (undefined8 *)(param_1 + 0xe14);
  bVar3 = *(byte *)((longlong)param_2 + 0x24);
  cVar4 = *(byte *)(param_1 + 0xe38) == bVar3;
  if ((*(byte *)(param_1 + 0xe38) & cVar4) == 1) {
    cVar4 = FUN_140ac16b0(puVar1,param_2);
    bVar3 = *(byte *)((longlong)param_2 + 0x24);
  }
  if ((puVar1 != param_2) && (cVar4 == '\0')) {
    if ((bVar3 & 1) == 0) {
      if (*(char *)(param_1 + 0xe38) != '\x01') goto LAB_1410d999f;
      uVar2 = 0;
    }
    else {
      *(undefined4 *)(param_1 + 0xe1c) = *(undefined4 *)(param_2 + 1);
      *puVar1 = *param_2;
      *(undefined4 *)(param_1 + 0xe28) = *(undefined4 *)((longlong)param_2 + 0x14);
      *(undefined8 *)(param_1 + 0xe20) = *(undefined8 *)((longlong)param_2 + 0xc);
      *(undefined8 *)(param_1 + 0xe2c) = param_2[3];
      *(undefined4 *)(param_1 + 0xe34) = *(undefined4 *)(param_2 + 4);
      uVar2 = 1;
    }
    *(undefined1 *)(param_1 + 0xe38) = uVar2;
    bVar3 = *(byte *)((longlong)param_2 + 0x24);
  }
LAB_1410d999f:
  if ((bVar3 & 1) != 0) {
    *(undefined1 *)((longlong)param_2 + 0x24) = 0;
  }
  return;
}



// FUNCTION 1410d99c0 FUN_1410d99c0 body=158 status=ok
// SIG undefined FUN_1410d99c0(void)

void FUN_1410d99c0(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = param_1 + 0x9f0;
  if (0 < *(int *)(param_1 + 0xa90)) {
    local_30 = param_2;
    FUN_1410d9a60(param_1 + 0xa08,&local_30);
    if (0 < (longlong)*(int *)(param_1 + 0xa90)) {
      lVar1 = param_1 + 0xa08;
      if (*(longlong *)(param_1 + 0xa88) != 0) {
        lVar1 = *(longlong *)(param_1 + 0xa88);
      }
      lVar1 = lVar1 + (longlong)*(int *)(param_1 + 0xa90) * 0x20 + -0x20;
    }
  }
  FUN_14052f9ee(param_1,lVar1,param_3);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410d9a60 FUN_1410d9a60 body=275 status=ok
// SIG undefined FUN_1410d9a60(void)

int FUN_1410d9a60(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  bool bVar13;
  
  iVar5 = *(int *)(param_1 + 0x88);
  lVar6 = (longlong)iVar5;
  if (lVar6 == 0) {
    iVar5 = 0;
  }
  else {
    lVar12 = *(longlong *)(param_1 + 0x80);
    if (*(longlong *)(param_1 + 0x80) == 0) {
      lVar12 = param_1;
    }
    iVar4 = 0;
    bVar13 = *(longlong *)(lVar12 + 0x18) == *(longlong *)*param_2;
    iVar9 = 0;
    do {
      lVar8 = (longlong)iVar9;
      iVar2 = iVar9 + 1;
      if (iVar9 + 1 < iVar5) {
        iVar2 = iVar5;
      }
      lVar3 = lVar8 * 0x20;
      plVar7 = (longlong *)(lVar12 + 0x38 + lVar3);
      iVar11 = iVar9;
      do {
        lVar8 = lVar8 + 1;
        iVar10 = iVar2;
        if (lVar6 <= lVar8) break;
        lVar1 = *plVar7;
        iVar11 = iVar11 + 1;
        plVar7 = plVar7 + 4;
        iVar10 = iVar11;
      } while (bVar13 == (lVar1 == *(longlong *)*param_2));
      if (bVar13 == false) {
        if (iVar4 != iVar9) {
          memmove((void *)((longlong)iVar4 * 0x20 + lVar12),(void *)(lVar3 + lVar12),
                  (longlong)(iVar10 - iVar9) << 5);
        }
        iVar4 = iVar4 + (iVar10 - iVar9);
      }
      bVar13 = (bool)(bVar13 ^ 1);
      iVar9 = iVar10;
    } while (lVar8 < lVar6);
    *(int *)(param_1 + 0x88) = iVar4;
    iVar5 = iVar5 - iVar4;
  }
  return iVar5;
}



// FUNCTION 1410d9b74 FUN_1410d9b74 body=86 status=ok
// SIG undefined FUN_1410d9b74(void)

undefined8 FUN_1410d9b74(longlong param_1,longlong param_2)

{
  byte bVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined7 uVar4;
  byte bVar5;
  
  FUN_1410d9bca();
  if (param_2 != 0) {
    lVar2 = FUN_140e85284();
    param_1 = *(longlong *)(param_2 + 0x10);
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(param_1 + 0x38)) &&
       (param_1 = *(longlong *)(param_1 + 0x30),
       *(longlong *)(param_1 + (longlong)*(int *)(lVar2 + 0x38) * 8) == lVar2 + 0x30)) {
      uVar3 = (**(code **)(*(longlong *)(param_2 + 0x2c40) + 0x20))(param_2 + 0x2c40);
      bVar5 = (byte)uVar3;
      uVar4 = (undefined7)((ulonglong)uVar3 >> 8);
      bVar1 = 1;
      goto LAB_1410d9bbe;
    }
  }
  bVar5 = (byte)param_1;
  bVar1 = 0;
  uVar4 = 0;
LAB_1410d9bbe:
  return CONCAT71(uVar4,bVar1 & bVar5);
}



// FUNCTION 1410d9bca FUN_1410d9bca body=85 status=ok
// SIG undefined FUN_1410d9bca(void)

undefined8 FUN_1410d9bca(longlong param_1,longlong param_2)

{
  byte bVar1;
  longlong lVar2;
  undefined7 uVar3;
  byte bVar4;
  
  if (param_2 != 0) {
    lVar2 = FUN_140e85284();
    param_1 = *(longlong *)(param_2 + 0x10);
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(param_1 + 0x38)) &&
       (param_1 = *(longlong *)(param_1 + 0x30),
       *(longlong *)(param_1 + (longlong)*(int *)(lVar2 + 0x38) * 8) == lVar2 + 0x30)) {
      lVar2 = (**(code **)(*(longlong *)(param_2 + 0x3f8) + 0x10))(param_2 + 0x3f8);
      bVar4 = *(byte *)(lVar2 + 0x40) ^ 1;
      uVar3 = (undefined7)((ulonglong)lVar2 >> 8);
      bVar1 = 1;
      goto LAB_1410d9c13;
    }
  }
  bVar4 = (byte)param_1;
  bVar1 = 0;
  uVar3 = 0;
LAB_1410d9c13:
  return CONCAT71(uVar3,bVar1 & bVar4);
}



// FUNCTION 1410d9c20 FUN_1410d9c20 body=1943 status=ok
// SIG undefined FUN_1410d9c20(void)

void FUN_1410d9c20(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_328 [32];
  undefined1 local_308;
  undefined1 local_307;
  undefined8 local_300;
  undefined8 uStack_2f8;
  undefined4 local_2f0;
  undefined1 local_2ec;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined4 local_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined1 local_2c8;
  undefined8 local_2c0;
  undefined4 local_2b8;
  undefined4 local_2a8;
  undefined4 uStack_2a4;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  undefined1 local_298;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined4 local_278;
  undefined4 uStack_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined5 uStack_268;
  undefined8 local_260;
  undefined4 local_258;
  longlong *local_248;
  undefined1 local_240;
  undefined8 local_238;
  undefined8 uStack_230;
  longlong local_228;
  longlong local_220;
  undefined4 uStack_218;
  undefined3 uStack_214;
  longlong local_210;
  longlong local_208;
  longlong lStack_200;
  longlong local_1f8;
  longlong local_1f0;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 local_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined1 local_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  longlong *local_1b0;
  undefined4 local_1a8;
  undefined1 local_1a0;
  undefined8 local_198;
  undefined4 local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined1 local_178;
  undefined8 *local_170;
  ulonglong uStack_168;
  undefined8 local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  uint uStack_148;
  undefined1 uStack_144;
  undefined8 *local_140;
  ulonglong uStack_138;
  longlong *local_130;
  undefined4 local_128;
  undefined1 local_120;
  undefined8 *local_118;
  int local_110;
  undefined1 local_108;
  undefined1 local_107;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined4 local_f0;
  undefined1 local_ec;
  undefined8 local_e8;
  undefined8 uStack_e0;
  longlong local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined1 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined1 local_a8;
  undefined1 local_a7;
  undefined8 local_a0;
  undefined8 uStack_98;
  float local_90;
  undefined1 local_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  byte local_78;
  undefined1 local_77;
  undefined8 local_70;
  undefined8 uStack_68;
  uint local_60;
  undefined1 local_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_42;
  undefined1 local_41;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_328;
  FUN_1412719b8();
  (**(code **)(*param_1 + 0x360))(param_1,&local_130);
  if ((*(longlong *)((longlong)param_1 + 0x1c4) == 0) || ((int)param_1[0x38] == 0)) {
LAB_1410d9cda:
    uStack_148 = *(uint *)(param_1 + 0x37);
    local_158 = param_1[0x35];
    uStack_150 = (undefined4)param_1[0x36];
    uStack_14c = (undefined4)((ulonglong)param_1[0x36] >> 0x20);
    uStack_144 = 1;
    local_140 = (undefined8 *)0x0;
    uStack_138 = 0;
  }
  else {
    uVar1 = *(uint *)((longlong)param_1 + 0x1bc);
    if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_1410d9cda;
    plVar4 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if ((((plVar4 == (longlong *)0x0) || ((int)plVar4[2] != (int)param_1[0x38])) ||
        ((*(uint *)(plVar4 + 1) & 0x10200000) != 0)) || (*plVar4 == 0)) goto LAB_1410d9cda;
    lVar2 = FUN_1400796d0(*(undefined8 *)(*plVar4 + 0x10),*(longlong *)((longlong)param_1 + 0x1c4),1
                         );
    if (lVar2 == 0) goto LAB_1410d9cda;
    local_d8 = *(longlong *)((longlong)param_1 + 0x1c4);
    uVar3 = FUN_14479d2ce((uint *)((longlong)param_1 + 0x1bc));
    local_158 = 0x3f800000;
    uStack_150 = 0x3f800000;
    uStack_14c = 0x3f800000;
    uStack_148 = uStack_148 & 0xffffff00;
    local_140 = (undefined8 *)0x0;
    uStack_138 = 0;
    uStack_144 = 1;
    FUN_1446efa72(&local_140,0,3,0x10);
    uStack_138 = CONCAT44(uStack_138._4_4_,3);
    FUN_1477688f4(local_140,uVar3,&local_d8);
  }
  if ((param_1[0x61] == 0) || (*(int *)((longlong)param_1 + 0x304) == 0)) {
LAB_1410d9d81:
    local_188 = param_1[0x5e];
    uStack_180 = param_1[0x5f];
    local_178 = 1;
    local_170 = (undefined8 *)0x0;
    uStack_168 = 0;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x60);
    if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_1410d9d81;
    plVar4 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if ((((plVar4 == (longlong *)0x0) || ((int)plVar4[2] != *(int *)((longlong)param_1 + 0x304))) ||
        ((*(uint *)(plVar4 + 1) & 0x10200000) != 0)) || (*plVar4 == 0)) goto LAB_1410d9d81;
    lVar2 = FUN_1400796d0(*(undefined8 *)(*plVar4 + 0x10),param_1[0x61],1);
    if (lVar2 == 0) goto LAB_1410d9d81;
    local_d8 = param_1[0x61];
    uVar3 = FUN_14479d2ce(param_1 + 0x60);
    local_188 = 0;
    uStack_180 = 0;
    local_170 = (undefined8 *)0x0;
    uStack_168 = 0;
    local_178 = 1;
    FUN_1446efa72(&local_170,0,3,0x10);
    uStack_168 = CONCAT44(uStack_168._4_4_,3);
    FUN_147703202(local_170,uVar3,&local_d8);
  }
  lVar2 = param_1[99];
  if (lVar2 != 0) {
    local_1b0 = local_130;
    if (local_130 != (longlong *)0x0) {
      (**(code **)(*local_130 + 8))();
    }
    local_1a8 = local_128;
    local_1a0 = local_120;
    local_198 = 0;
    local_190 = 0;
    FUN_1413a4324();
    FUN_140a5cace(lVar2,&local_1b0);
    local_228 = param_1[0x3a];
    lVar2 = param_1[99];
    if ((local_228 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    local_220 = param_1[0x3b];
    if ((local_220 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    uStack_218 = (undefined4)param_1[0x3c];
    uStack_214 = (undefined3)((uint)*(undefined4 *)((longlong)param_1 + 0x1e3) >> 8);
    local_210 = param_1[0x3d];
    if ((local_210 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    local_208 = param_1[0x3e];
    lStack_200 = param_1[0x3f];
    local_1f8 = param_1[0x40];
    local_1f0 = param_1[0x41];
    if (local_1f0 != 0) {
      LOCK();
      *(int *)(local_1f0 + 8) = *(int *)(local_1f0 + 8) + 1;
      UNLOCK();
    }
    uStack_1e8 = (undefined4)param_1[0x42];
    uStack_1e4 = *(undefined4 *)((longlong)param_1 + 0x214);
    uStack_1e0 = (undefined4)param_1[0x43];
    local_1dc = *(undefined4 *)((longlong)param_1 + 0x21c);
    uStack_1d8 = (undefined4)param_1[0x44];
    uStack_1d4 = *(undefined4 *)((longlong)param_1 + 0x224);
    uStack_1d0 = (undefined4)param_1[0x45];
    local_1c8 = 1;
    local_1c0 = 0;
    uStack_1b8 = 0;
    FUN_1410da64c(lVar2);
    local_248 = param_1 + 0x46;
    local_240 = 1;
    local_238 = 0;
    uStack_230 = 0;
    FUN_1410da774(param_1[99]);
    lVar2 = param_1[99];
    uStack_268 = CONCAT14(uStack_144,uStack_148);
    local_278 = (undefined4)local_158;
    uStack_274 = local_158._4_4_;
    uStack_270 = uStack_150;
    uStack_26c = uStack_14c;
    local_260 = 0;
    local_258 = 0;
    FUN_140a5aaa0();
    FUN_1410da5ca(lVar2,&local_278);
    local_2a8 = (undefined4)param_1[0x5c];
    uStack_2a4 = *(undefined4 *)((longlong)param_1 + 0x2e4);
    uStack_2a0 = (undefined4)param_1[0x5d];
    uStack_29c = *(undefined4 *)((longlong)param_1 + 0x2ec);
    local_298 = 1;
    local_290 = 0;
    uStack_288 = 0;
    FUN_1410da7f6(param_1[99]);
    lVar2 = param_1[99];
    local_2c8 = local_178;
    local_2d8 = (undefined4)local_188;
    uStack_2d4 = local_188._4_4_;
    uStack_2d0 = (undefined4)uStack_180;
    uStack_2cc = uStack_180._4_4_;
    local_2c0 = 0;
    local_2b8 = 0;
    FUN_140a5c51c();
    FUN_1410da87a(lVar2,&local_2d8);
    local_2f0 = *(undefined4 *)((longlong)param_1 + 0x1cc);
    local_2ec = 1;
    local_2e8 = 0;
    uStack_2e0 = 0;
    FUN_1410daab2(param_1[99]);
    local_308 = *(undefined1 *)((longlong)param_1 + 0x311);
    local_307 = 1;
    local_300 = 0;
    uStack_2f8 = 0;
    FUN_1410da8fe(param_1[99]);
    local_42 = *(undefined1 *)((longlong)param_1 + 0x312);
    local_41 = 1;
    FUN_1410dab4a(param_1[99]);
    lVar2 = param_1[99];
    FUN_1410da6f6(param_1 + 0x2d,lVar2);
    local_60 = (uint)*(byte *)((longlong)param_1 + 0x16b);
    local_5c = 1;
    local_58 = 0;
    uStack_50 = 0;
    FUN_1410da560(lVar2);
    local_78 = *(byte *)((longlong)param_1 + 0x16d) & 1;
    local_77 = 1;
    local_70 = 0;
    uStack_68 = 0;
    FUN_1410da984(lVar2);
    local_90 = *(float *)(param_1 + 0x2e);
    local_8c = local_90 != 0.0;
    if ((!(bool)local_8c) && (!NAN(local_90))) {
      local_90 = 0.0;
    }
    local_88 = 0;
    uStack_80 = 0;
    FUN_1410daa1a(lVar2);
    local_a8 = *(undefined1 *)((longlong)param_1 + 0x16c);
    local_a7 = 1;
    local_a0 = 0;
    uStack_98 = 0;
    FUN_1410da3b8(lVar2);
    local_d8 = *(longlong *)((longlong)param_1 + 0x174);
    uStack_d0 = *(undefined4 *)((longlong)param_1 + 0x17c);
    uStack_cc = (undefined4)param_1[0x30];
    local_c8 = 1;
    local_c0 = 0;
    uStack_b8 = 0;
    FUN_1410da422(lVar2);
    local_f0 = *(undefined4 *)((longlong)param_1 + 0x184);
    local_ec = 1;
    local_e8 = 0;
    uStack_e0 = 0;
    FUN_1410da48c(lVar2);
    local_108 = *(undefined1 *)((longlong)param_1 + 0x16e);
    local_107 = 1;
    local_100 = 0;
    uStack_f8 = 0;
    FUN_1410da4f6(lVar2);
  }
  if ((int)uStack_168 == 0) {
LAB_1410da151:
    if (local_170 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_170 != (undefined8 *)0x0) {
    (**(code **)*local_170)(local_170,0);
    FUN_1446efa72(&local_170,0,0,0x10);
    uStack_168 = uStack_168 & 0xffffffff00000000;
    goto LAB_1410da151;
  }
  if ((int)uStack_138 == 0) {
LAB_1410da170:
    if (local_140 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_140 != (undefined8 *)0x0) {
    (**(code **)*local_140)(local_140,0);
    FUN_1446efa72(&local_140,0,0,0x10);
    uStack_138 = uStack_138 & 0xffffffff00000000;
    goto LAB_1410da170;
  }
  if (local_110 != 0) {
    if (local_118 == (undefined8 *)0x0) goto LAB_1410da198;
    (**(code **)*local_118)(local_118,0);
    FUN_1446efa72(&local_118,0,0,0x10);
    local_110 = 0;
  }
  if (local_118 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_1410da198:
  if (local_130 != (longlong *)0x0) {
    (**(code **)(*local_130 + 0x10))();
  }
  if ((local_40 ^ (ulonglong)auStack_328) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410da3b8 FUN_1410da3b8 body=106 status=ok
// SIG undefined FUN_1410da3b8(void)

void FUN_1410da3b8(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  FUN_140a5dd48(param_1 + 0x5ad,param_1,param_2);
  plVar1 = (longlong *)(param_2 + 8);
  if (*(int *)(param_2 + 0x10) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_2 + 0x10) = 0;
  }
  if (*plVar1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1410da422 FUN_1410da422 body=106 status=ok
// SIG undefined FUN_1410da422(void)

void FUN_1410da422(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  FUN_140a58e4a(param_1 + 0x5b0,param_1,param_2);
  plVar1 = (longlong *)(param_2 + 0x18);
  if (*(int *)(param_2 + 0x20) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_2 + 0x20) = 0;
  }
  if (*plVar1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1410da48c FUN_1410da48c body=106 status=ok
// SIG undefined FUN_1410da48c(void)

void FUN_1410da48c(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  FUN_140a5e0d2(param_1 + 0x5c4,param_1,param_2);
  plVar1 = (longlong *)(param_2 + 8);
  if (*(int *)(param_2 + 0x10) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_2 + 0x10) = 0;
  }
  if (*plVar1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1410da4f6 FUN_1410da4f6 body=106 status=ok
// SIG undefined FUN_1410da4f6(void)

void FUN_1410da4f6(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  FUN_140a52028(param_1 + 0x5c8,param_1,param_2);
  plVar1 = (longlong *)(param_2 + 8);
  if (*(int *)(param_2 + 0x10) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_2 + 0x10) = 0;
  }
  if (*plVar1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1410da560 FUN_1410da560 body=106 status=ok
// SIG undefined FUN_1410da560(void)

void FUN_1410da560(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  FUN_140a5d9e4(param_1 + 0x5c0,param_1,param_2);
  plVar1 = (longlong *)(param_2 + 8);
  if (*(int *)(param_2 + 0x10) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_2 + 0x10) = 0;
  }
  if (*plVar1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1410da5ca FUN_1410da5ca body=129 status=ok
// SIG undefined FUN_1410da5ca(void)

void FUN_1410da5ca(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  *(ushort *)(param_1 + 0x5dc) =
       ((ushort)*(undefined4 *)(param_1 + 0x5dc) & 0xfff7) + (ushort)*(byte *)(param_2 + 0x14) * 8;
  FUN_140a5c8a2(param_1 + 0x548,param_1,param_2);
  plVar1 = (longlong *)(param_2 + 0x18);
  if (*(int *)(param_2 + 0x20) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_2 + 0x20) = 0;
  }
  if (*plVar1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1410da64c FUN_1410da64c body=170 status=ok
// SIG undefined FUN_1410da64c(void)

void FUN_1410da64c(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  undefined8 *puVar4;
  
  *(ushort *)(param_1 + 0x5dc) =
       ((ushort)*(undefined4 *)(param_1 + 0x5dc) & 0xfffd) + (ushort)*(byte *)(param_2 + 0x60) * 2;
  FUN_140a5cd42(param_1 + 0x4e0,param_1,param_2);
  plVar1 = (longlong *)(param_2 + 0x68);
  if (*(int *)(param_2 + 0x70) != 0) {
    puVar4 = (undefined8 *)*plVar1;
    if (puVar4 == (undefined8 *)0x0) goto LAB_1410da690;
    (**(code **)*puVar4)(puVar4,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_2 + 0x70) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_1410da690:
  plVar1 = *(longlong **)(param_2 + 0x38);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar1 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plVar1)(plVar1);
      LOCK();
      piVar3 = (int *)((longlong)plVar1 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001410da6eb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar1 + 0x10))(plVar1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1410da6f6 FUN_1410da6f6 body=124 status=ok
// SIG undefined FUN_1410da6f6(void)

void FUN_1410da6f6(byte *param_1,undefined8 param_2)

{
  undefined1 auStack_48 [44];
  byte local_1c;
  undefined1 local_1b;
  byte local_1a;
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = (*param_1 & 1) != 0;
  if ((bool)local_19) {
    local_1a = param_1[1];
  }
  FUN_1410dabec(param_2);
  local_1b = (*param_1 & 2) != 0;
  if ((bool)local_1b) {
    local_1c = param_1[2];
  }
  FUN_1410dac96(param_2);
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1410da774 FUN_1410da774 body=129 status=ok
// SIG undefined FUN_1410da774(void)

void FUN_1410da774(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  *(ushort *)(param_1 + 0x5dc) =
       ((ushort)*(undefined4 *)(param_1 + 0x5dc) & 0xfffb) + (ushort)*(byte *)(param_2 + 8) * 4;
  FUN_140a5cfd6(param_1 + 0x540,param_1,param_2);
  plVar1 = (longlong *)(param_2 + 0x10);
  if (*(int *)(param_2 + 0x18) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_2 + 0x18) = 0;
  }
  if (*plVar1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1410da7f6 FUN_1410da7f6 body=131 status=ok
// SIG undefined FUN_1410da7f6(void)

void FUN_1410da7f6(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  *(ushort *)(param_1 + 0x5dc) =
       (ushort)*(undefined4 *)(param_1 + 0x5dc) & 0xffef | (ushort)*(byte *)(param_2 + 0x10) << 4;
  FUN_140a51d16(param_1 + 0x560,param_1,param_2);
  plVar1 = (longlong *)(param_2 + 0x18);
  if (*(int *)(param_2 + 0x20) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_2 + 0x20) = 0;
  }
  if (*plVar1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1410da87a FUN_1410da87a body=131 status=ok
// SIG undefined FUN_1410da87a(void)

void FUN_1410da87a(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  *(ushort *)(param_1 + 0x5dc) =
       (ushort)*(undefined4 *)(param_1 + 0x5dc) & 0xffdf | (ushort)*(byte *)(param_2 + 0x10) << 5;
  FUN_140a5c650(param_1 + 0x570,param_1,param_2);
  plVar1 = (longlong *)(param_2 + 0x18);
  if (*(int *)(param_2 + 0x20) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_2 + 0x20) = 0;
  }
  if (*plVar1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1410da8fe FUN_1410da8fe body=133 status=ok
// SIG undefined FUN_1410da8fe(void)

void FUN_1410da8fe(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  *(ushort *)(param_1 + 0x5dc) =
       (ushort)*(undefined4 *)(param_1 + 0x5dc) & 0xfdff | (ushort)*(byte *)(param_2 + 1) << 9;
  FUN_140a5db94(param_1 + 0x5ae,param_1,param_2);
  plVar1 = (longlong *)(param_2 + 8);
  if (*(int *)(param_2 + 0x10) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_2 + 0x10) = 0;
  }
  if (*plVar1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1410da984 FUN_1410da984 body=148 status=ok
// SIG undefined FUN_1410da984(void)

void FUN_1410da984(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = 0;
  FUN_140a5df06(param_1 + 0x5ac,param_1,param_2);
  plVar1 = (longlong *)(param_2 + 8);
  if (*(int *)(param_2 + 0x10) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) goto LAB_1410da9c9;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_2 + 0x10) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_1410da9c9:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410daa1a FUN_1410daa1a body=151 status=ok
// SIG undefined FUN_1410daa1a(void)

void FUN_1410daa1a(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_140a5d1dc(param_1 + 0x5a8,param_1,param_2);
  plVar1 = (longlong *)(param_2 + 8);
  if (*(int *)(param_2 + 0x10) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) goto LAB_1410daa62;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_2 + 0x10) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_1410daa62:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410daab2 FUN_1410daab2 body=151 status=ok
// SIG undefined FUN_1410daab2(void)

void FUN_1410daab2(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_140a5d1dc(param_1 + 0x5cc,param_1,param_2);
  plVar1 = (longlong *)(param_2 + 8);
  if (*(int *)(param_2 + 0x10) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) goto LAB_1410daafa;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_2 + 0x10) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_1410daafa:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410dab4a FUN_1410dab4a body=161 status=ok
// SIG undefined FUN_1410dab4a(void)

void FUN_1410dab4a(longlong param_1,char *param_2,char param_3)

{
  byte bVar1;
  byte bVar2;
  longlong lVar3;
  bool bVar4;
  undefined1 uVar5;
  undefined7 uVar6;
  
  bVar1 = param_2[1];
  uVar6 = (undefined7)((ulonglong)param_2 >> 8);
  if (bVar1 == 1) {
    param_3 = *param_2;
  }
  lVar3 = **(longlong **)(param_1 + 0x1f0);
  bVar2 = *(byte *)(lVar3 + 0x151);
  bVar4 = *(char *)(lVar3 + 0x150) == param_3;
  if ((bVar2 & 1) == 0) {
    bVar4 = bVar2 == bVar1;
  }
  if ((bool)(bVar2 == bVar1 & bVar4)) goto LAB_1410dabad;
  if (bVar1 == 0) {
    if ((bVar2 & 1) != 0) {
      uVar5 = 0;
      uVar6 = 0;
      goto LAB_1410daba0;
    }
  }
  else {
    *(char *)(lVar3 + 0x150) = param_3;
    uVar5 = 1;
LAB_1410daba0:
    *(undefined1 *)(lVar3 + 0x151) = uVar5;
  }
  *(byte *)(lVar3 + 0x90) = *(byte *)(lVar3 + 0x90) | 1;
LAB_1410dabad:
  if ((*(char *)(param_1 + 0x5de) == '\x01') && (*(char *)(param_1 + 0x5d8) == '\x01')) {
    *(undefined1 *)(param_1 + 0x5d8) = 0;
  }
  FUN_140163244(param_1,CONCAT71(uVar6,1));
  if (param_2[1] == '\x01') {
    param_2[1] = '\0';
  }
  return;
}



// FUNCTION 1410dabec FUN_1410dabec body=169 status=ok
// SIG undefined FUN_1410dabec(void)

void FUN_1410dabec(longlong param_1,char *param_2)

{
  byte *pbVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  char cVar5;
  longlong lVar6;
  
  if (*(char *)(param_1 + 0x5de) != '\0') {
    return;
  }
  lVar3 = **(longlong **)(param_1 + 0x1f0);
  if (param_2[1] == '\x01') {
    cVar5 = *param_2;
  }
  else {
    uVar4 = (**(code **)(*DAT_14c968338 + 0xb0))();
    cVar5 = '\0';
    if (uVar4 < 3) {
      cVar5 = (char)uVar4;
    }
  }
  if (*(char *)(lVar3 + 0x91) != cVar5) {
    *(char *)(lVar3 + 0x91) = cVar5;
    *(byte *)(lVar3 + 0x90) = *(byte *)(lVar3 + 0x90) | 1;
    iVar2 = *(int *)(lVar3 + 0x28);
    if ((longlong)iVar2 != 0) {
      lVar3 = *(longlong *)(lVar3 + 0x20);
      lVar6 = 0;
      do {
        pbVar1 = (byte *)(lVar3 + 0x68 + lVar6);
        *pbVar1 = *pbVar1 | 7;
        lVar6 = lVar6 + 0x70;
      } while ((longlong)iVar2 * 0x70 - lVar6 != 0);
    }
  }
  if ((*(char *)(param_1 + 0x5de) == '\x01') && (*(char *)(param_1 + 0x5d8) == '\x01')) {
    *(undefined1 *)(param_1 + 0x5d8) = 0;
  }
  FUN_140163244(param_1,1);
  return;
}



// FUNCTION 1410dac96 FUN_1410dac96 body=169 status=ok
// SIG undefined FUN_1410dac96(void)

void FUN_1410dac96(longlong param_1,char *param_2)

{
  byte *pbVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  char cVar5;
  longlong lVar6;
  
  if (*(char *)(param_1 + 0x5de) != '\0') {
    return;
  }
  lVar3 = **(longlong **)(param_1 + 0x1f0);
  if (param_2[1] == '\x01') {
    cVar5 = *param_2;
  }
  else {
    uVar4 = (**(code **)(*DAT_14c98eeb0 + 0xb0))();
    cVar5 = '\0';
    if (uVar4 < 3) {
      cVar5 = (char)uVar4;
    }
  }
  if (*(char *)(lVar3 + 0x92) != cVar5) {
    *(char *)(lVar3 + 0x92) = cVar5;
    *(byte *)(lVar3 + 0x90) = *(byte *)(lVar3 + 0x90) | 1;
    iVar2 = *(int *)(lVar3 + 0x28);
    if ((longlong)iVar2 != 0) {
      lVar3 = *(longlong *)(lVar3 + 0x20);
      lVar6 = 0;
      do {
        pbVar1 = (byte *)(lVar3 + 0x68 + lVar6);
        *pbVar1 = *pbVar1 | 7;
        lVar6 = lVar6 + 0x70;
      } while ((longlong)iVar2 * 0x70 - lVar6 != 0);
    }
  }
  if ((*(char *)(param_1 + 0x5de) == '\x01') && (*(char *)(param_1 + 0x5d8) == '\x01')) {
    *(undefined1 *)(param_1 + 0x5d8) = 0;
  }
  FUN_140163244(param_1,1);
  return;
}



// FUNCTION 1410dad40 FUN_1410dad40 body=321 status=ok
// SIG undefined FUN_1410dad40(void)

longlong * FUN_1410dad40(longlong param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(longlong *)(param_1 + 0x1a0) != 0) && (*(int *)(param_1 + 0x19c) != 0)) {
    uVar1 = *(uint *)(param_1 + 0x198);
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      plVar4 = (longlong *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((((plVar4 != (longlong *)0x0) && ((int)plVar4[2] == *(int *)(param_1 + 0x19c))) &&
          ((*(uint *)(plVar4 + 1) & 0x10200000) == 0)) && (*plVar4 != 0)) {
        lVar2 = FUN_1400796d0(*(undefined8 *)(*plVar4 + 0x10),*(longlong *)(param_1 + 0x1a0),1);
        if (lVar2 != 0) {
          local_28 = *(undefined8 *)(param_1 + 0x1a0);
          uVar3 = FUN_14479d2ce((uint *)(param_1 + 0x198));
          FUN_144a5dc74(param_2);
          param_2[3] = 0;
          param_2[4] = 0;
          *(undefined1 *)(param_2 + 2) = 1;
          FUN_1446efa72(param_2 + 3,0,3,0x10);
          *(undefined4 *)(param_2 + 4) = 3;
          FUN_147766644(param_2[3],uVar3,&local_28);
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
        }
      }
    }
  }
  plVar4 = *(longlong **)(param_1 + 0x188);
  *param_2 = (longlong)plVar4;
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 8))();
  }
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 400);
  *(undefined1 *)(param_2 + 2) = 1;
  param_2[3] = 0;
  param_2[4] = 0;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410dae8a FUN_1410dae8a body=57 status=ok
// SIG undefined FUN_1410dae8a(void)

void FUN_1410dae8a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba9850 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba9850 = FUN_140002ddd(FUN_1465d4c9c,uVar1,L"OakDecoCharacterDef");
  }
  return;
}



// FUNCTION 1410daec4 FUN_1410daec4 body=131 status=ok
// SIG undefined FUN_1410daec4(void)

void FUN_1410daec4(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  plVar1 = *(longlong **)(param_1 + 0x1aa8);
  if (plVar1 == (longlong *)0x0) {
    return;
  }
  lVar3 = *(longlong *)(param_1 + 0x1a90);
  uVar4 = 0;
  if ((lVar3 != 0) && ((longlong)*(int *)(lVar3 + 0x368) != 0)) {
    lVar2 = *(longlong *)(lVar3 + 0x360);
    lVar3 = (longlong)*(int *)(lVar3 + 0x368) * 0x60 + lVar2;
    do {
      if ((longlong)*(int *)(lVar2 + 0x20) != 0) {
        lVar5 = 0;
        do {
          if (*(char *)(*(longlong *)(lVar2 + 0x18) + 8 + lVar5) == '\x02') {
            uVar4 = 1;
            goto LAB_1410daf32;
          }
          lVar5 = lVar5 + 0x100;
        } while ((longlong)*(int *)(lVar2 + 0x20) * 0x100 != lVar5);
      }
      lVar2 = lVar2 + 0x60;
    } while (lVar2 != lVar3);
    uVar4 = 0;
  }
LAB_1410daf32:
                    /* WARNING: Could not recover jumptable at 0x0001410daf3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x720))(plVar1,uVar4);
  return;
}



// FUNCTION 1410daf48 FUN_1410daf48 body=119 status=ok
// SIG undefined FUN_1410daf48(void)

longlong FUN_1410daf48(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  
  lVar1 = FUN_14035652c(param_1 + -0x148);
  if (lVar1 == 0) {
    plVar2 = (longlong *)(**(code **)(*(longlong *)(param_1 + -0x16c0) + 0x38))(param_1 + -0x16c0);
    if (plVar2 != (longlong *)0x0) {
      lVar1 = (**(code **)(*plVar2 + 8))(plVar2);
      lVar3 = FUN_1457fe6e6();
      if (((lVar3 != 0) && (*(int *)(lVar3 + 0x38) <= *(int *)(lVar1 + 0x38))) &&
         (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
          lVar3 + 0x30)) {
        return plVar2[0x45];
      }
    }
    lVar1 = 0;
  }
  return lVar1;
}



// FUNCTION 1410dafc0 FUN_1410dafc0 body=842 status=ok
// SIG undefined FUN_1410dafc0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1410dafc0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  double dVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined1 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if ((*(longlong *)(param_1 + 0x1aa0) != 0) &&
     (plVar1 = *(longlong **)(param_1 + 0x1c50), plVar1 != (longlong *)0x0)) {
    lVar2 = *(longlong *)(param_1 + 0x1a90);
    if ((lVar2 != 0) && ((longlong)*(int *)(lVar2 + 0x368) != 0)) {
      lVar8 = *(longlong *)(lVar2 + 0x360);
      lVar10 = (longlong)*(int *)(lVar2 + 0x368) * 0x60 + lVar8;
      do {
        if ((longlong)*(int *)(lVar8 + 0x20) != 0) {
          lVar11 = 0;
          do {
            if (*(char *)(*(longlong *)(lVar8 + 0x18) + 8 + lVar11) == '\x03') {
              FUN_14127095a(plVar1,lVar2 + 0x3b0,CONCAT71((int7)((ulonglong)lVar10 >> 8),1));
              (**(code **)(**(longlong **)(param_1 + 0x1c50) + 0x720))
                        (*(longlong **)(param_1 + 0x1c50),1);
              lVar2 = *(longlong *)(param_1 + 0x1a90);
              lVar8 = *(longlong *)(param_1 + 0x1c50);
              local_98 = *(undefined8 *)(lVar2 + 0x3f8);
              local_a8 = *(undefined8 *)(lVar2 + 1000);
              uStack_a0 = *(undefined8 *)(lVar2 + 0x3f0);
              auVar12 = *(undefined1 (*) [16])(lVar8 + 0x1b0);
              dVar5 = auVar12._0_8_;
              dVar6 = auVar12._8_8_;
              dVar17 = *(double *)(lVar8 + 0x1c0);
              puVar9 = *(undefined8 **)(lVar8 + 0x230);
              if (puVar9 == (undefined8 *)0x0) {
                puVar9 = (undefined8 *)FUN_14001cc68(0x40,0x10);
                uVar7 = DAT_14c8463d8;
                *puVar9 = DAT_14c8463d0;
                puVar9[1] = uVar7;
                uVar7 = DAT_14c8463e8;
                puVar9[2] = DAT_14c8463e0;
                puVar9[3] = uVar7;
                uVar7 = DAT_14c846500;
                puVar9[4] = DAT_14c8464f8;
                puVar9[5] = uVar7;
                puVar9[6] = DAT_14c846508;
                *(undefined8 **)(lVar8 + 0x230) = puVar9;
              }
              if (((((double)puVar9[4] != dVar5) || (NAN((double)puVar9[4]) || NAN(dVar5))) ||
                  ((double)puVar9[5] != dVar6)) ||
                 (((NAN((double)puVar9[5]) || NAN(dVar6) || ((double)puVar9[6] != dVar17)) ||
                  (NAN((double)puVar9[6]) || NAN(dVar17))))) {
                auVar20._8_8_ = 0;
                auVar20._0_8_ = dVar17;
                dVar3 = (double)DAT_1499387d0;
                dVar4 = DAT_1499387d0._8_8_;
                auVar12 = divpd(auVar12,_DAT_1499387d0);
                auVar15 = divpd(auVar20,_DAT_1499387d0);
                auVar12 = roundpd(auVar12,auVar12,3);
                auVar15 = roundpd(auVar15,auVar15,3);
                dVar5 = dVar5 - auVar12._0_8_ * dVar3;
                dVar6 = dVar6 - auVar12._8_8_ * dVar4;
                auVar21._0_8_ = dVar17 - auVar15._0_8_ * dVar3;
                auVar21._8_8_ = 0.0 - auVar15._8_8_ * dVar4;
                auVar19._0_8_ = dVar5 + dVar3;
                auVar19._8_8_ = dVar6 + dVar4;
                auVar18._0_8_ = dVar3 + auVar21._0_8_;
                auVar18._8_8_ = dVar4 + auVar21._8_8_;
                auVar15._8_8_ = -(ulonglong)(0.0 <= dVar6);
                auVar15._0_8_ = -(ulonglong)(0.0 <= dVar5);
                auVar12._8_4_ = SUB84(dVar6,0);
                auVar12._0_8_ = dVar5;
                auVar12._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
                auVar15 = blendvpd(auVar19,auVar12,auVar15);
                auVar13._8_8_ = -(ulonglong)(0.0 <= auVar21._8_8_);
                auVar13._0_8_ = -(ulonglong)(0.0 <= auVar21._0_8_);
                auVar12 = blendvpd(auVar18,auVar21,auVar13);
                auVar16._0_8_ = auVar15._0_8_ + -360.0;
                auVar16._8_8_ = auVar15._8_8_ + -360.0;
                auVar14._8_8_ = -(ulonglong)(180.0 < auVar15._8_8_);
                auVar14._0_8_ = -(ulonglong)(180.0 < auVar15._0_8_);
                auVar15 = blendvpd(auVar15,auVar16,auVar14);
                dVar17 = auVar12._0_8_;
                *(undefined1 (*) [16])(puVar9 + 4) = auVar15;
                puVar9[6] = ~-(ulonglong)(180.0 < dVar17) & (ulonglong)dVar17 |
                            (ulonglong)(dVar17 + -360.0) & -(ulonglong)(180.0 < dVar17);
                FUN_144a7484c(puVar9 + 4,&local_68);
                puVar9[2] = local_58;
                puVar9[3] = uStack_50;
                *puVar9 = local_68;
                puVar9[1] = uStack_60;
              }
              local_68 = *puVar9;
              uStack_60 = puVar9[1];
              local_58 = puVar9[2];
              uStack_50 = puVar9[3];
              local_88 = local_a8;
              uStack_80 = uStack_a0;
              local_78 = local_98;
              local_b0 = 0;
              local_b8 = 0;
              FUN_144927ad4(lVar8,&local_88,&local_68,0);
              goto LAB_1410db1df;
            }
            lVar11 = lVar11 + 0x100;
          } while ((longlong)*(int *)(lVar8 + 0x20) * 0x100 != lVar11);
        }
        lVar8 = lVar8 + 0x60;
      } while (lVar8 != lVar10);
    }
    (**(code **)(*plVar1 + 0x720))(plVar1,0);
    FUN_1457fe5f6();
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_d8);
  }
LAB_1410db1df:
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410db336 FUN_1410db336 body=1327 status=ok
// SIG undefined FUN_1410db336(void)

void FUN_1410db336(longlong param_1)

{
  int *piVar1;
  byte bVar2;
  ulonglong uVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  undefined *puVar14;
  uint *puVar15;
  longlong *plVar16;
  longlong *plVar17;
  uint uVar18;
  bool bVar19;
  undefined1 auStack_c8 [40];
  longlong local_a0;
  longlong local_98;
  longlong lStack_90;
  longlong local_88;
  longlong *local_80;
  longlong *local_78;
  longlong local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  undefined8 local_50;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_1403631dc(&local_58,param_1 + 0x1920);
  local_70 = local_58;
  uVar8 = FUN_14477b664(local_50);
  local_68 = FUN_14477b664(uVar8);
  local_60 = local_48;
  if (*(char *)(param_1 + 0x178) == '\x03') {
    if (local_68 == 0) {
      uVar8 = FUN_14043db3a();
      local_68 = FUN_14477b664(uVar8);
    }
    if (local_60 == 0) {
      local_60 = 0;
      if ((local_68 != 0) && (local_70 != 0)) {
        plVar17 = *(longlong **)(local_68 + 0xb8);
        if ((plVar17 == (longlong *)0x0) ||
           (cVar5 = (**(code **)(*plVar17 + 0x108))(plVar17), cVar5 == '\0')) {
          local_60 = 0;
        }
        else {
          uVar8 = (**(code **)(*plVar17 + 0x110))(plVar17);
          local_60 = FUN_144aff482(uVar8,&local_70);
          if (local_60 != 0) goto LAB_1410db3c9;
        }
      }
    }
    else {
LAB_1410db3c9:
      (**(code **)(*(longlong *)(param_1 + 0x1c60) + 0x30))(param_1 + 0x1c60,&local_70);
    }
  }
  lVar9 = FUN_1447210f0(param_1);
  if (((lVar9 == 0) ||
      (((bVar2 = *(byte *)(lVar9 + 0x152), bVar2 != 1 &&
        ((6 < bVar2 || ((0x68U >> (bVar2 & 0x1f) & 1) == 0)))) ||
       (*(longlong *)(param_1 + 0x1c70) == 0)))) ||
     (*(char *)(*(longlong *)(param_1 + 0x1c70) + 0x318) != '\x01')) goto LAB_1410db777;
  FUN_14036d796(&local_88,param_1 + 0x1920);
  if (*(longlong *)(param_1 + 0x1c80) != local_88) {
    *(undefined8 *)(param_1 + 0x1c90) = 0;
  }
  *(longlong *)(param_1 + 0x1c80) = local_88;
  if (*(longlong **)(param_1 + 0x1c88) != local_80) {
    *(undefined8 *)(param_1 + 0x1c90) = 0;
  }
  uVar8 = FUN_14477b664();
  lVar9 = FUN_14477b664(uVar8);
  *(longlong *)(param_1 + 0x1c88) = lVar9;
  *(longlong **)(param_1 + 0x1c90) = local_78;
  if (lVar9 == 0) {
    uVar8 = FUN_14036a63e();
    lVar9 = FUN_14477b664(uVar8);
    *(longlong *)(param_1 + 0x1c88) = lVar9;
    local_78 = *(longlong **)(param_1 + 0x1c90);
  }
  if (local_78 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x1c90) = 0;
    if ((lVar9 != 0) && (*(longlong *)(param_1 + 0x1c80) != 0)) {
      plVar17 = *(longlong **)(lVar9 + 0xb8);
      if ((plVar17 == (longlong *)0x0) ||
         (cVar5 = (**(code **)(*plVar17 + 0x108))(plVar17), cVar5 == '\0')) {
        *(undefined8 *)(param_1 + 0x1c90) = 0;
      }
      else {
        uVar8 = (**(code **)(*plVar17 + 0x110))(plVar17);
        local_78 = (longlong *)FUN_144aff482(uVar8,param_1 + 0x1c80);
        *(longlong **)(param_1 + 0x1c90) = local_78;
        if (local_78 != (longlong *)0x0) goto LAB_1410db4ad;
      }
    }
  }
  else {
LAB_1410db4ad:
    lVar9 = (**(code **)(*local_78 + 8))();
    lVar10 = FUN_140da11f2();
    if (((lVar10 != 0) && (*(int *)(lVar10 + 0x38) <= *(int *)(lVar9 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar9 + 0x30) + (longlong)*(int *)(lVar10 + 0x38) * 8) ==
        lVar10 + 0x30)) {
      FUN_140c7d22e(param_1 + 0x1ec8,param_1);
      goto LAB_1410db777;
    }
  }
  lVar9 = FUN_1440b8b8e(param_1);
  if ((lVar9 == 0) ||
     (FUN_140c7d22e(param_1 + 0x1ec8,param_1), *(char *)(param_1 + 0x178) != '\x03'))
  goto LAB_1410db777;
  uVar8 = FUN_1447210f0(param_1);
  FUN_14061285c(&local_88,uVar8);
  if (local_80 == (longlong *)0x0) goto LAB_1410db777;
  iVar6 = (int)local_80[1];
  do {
    if (iVar6 == 0) {
      plVar17 = (longlong *)0x0;
      break;
    }
    LOCK();
    iVar4 = (int)local_80[1];
    bVar19 = iVar6 == iVar4;
    if (bVar19) {
      *(int *)(local_80 + 1) = iVar6 + 1;
      iVar4 = iVar6;
    }
    iVar6 = iVar4;
    UNLOCK();
    plVar17 = local_80;
  } while (!bVar19);
  LOCK();
  piVar1 = (int *)((longlong)local_80 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*local_80 + 0x10))();
  }
  lVar10 = local_88;
  if (plVar17 == (longlong *)0x0) goto LAB_1410db777;
  if (local_88 != 0) {
    local_98 = 0;
    lStack_90 = 0;
    uVar8 = FUN_140da11b8();
    lVar11 = FUN_14477b664(uVar8);
    lVar12 = FUN_140da11b8();
    uVar8 = FUN_140da11b8();
    FUN_1402d1bfa(&local_88,uVar8,lVar9);
    if (local_88 != 0) {
      lStack_90 = 0;
    }
    local_a0 = local_88;
    lVar13 = FUN_140da11b8();
    if (lVar12 == 0) {
LAB_1410db6e7:
      lVar13 = lVar12;
    }
    else if (lVar13 == 0) {
      lVar13 = 0;
    }
    else if ((*(int *)(lVar13 + 0x38) <= *(int *)(lVar12 + 0x38)) &&
            (*(longlong *)(*(longlong *)(lVar12 + 0x30) + (longlong)*(int *)(lVar13 + 0x38) * 8) ==
             lVar13 + 0x30)) goto LAB_1410db6e7;
    if (lVar11 != lVar13) {
      lStack_90 = 0;
    }
    uVar8 = FUN_14477b664(lVar13);
    local_98 = FUN_14477b664(uVar8);
    if (local_98 != 0 && local_88 != 0) {
      lStack_90 = lVar9;
    }
    uVar7 = FUN_14037becc(lVar10,&local_a0);
    *(undefined4 *)(param_1 + 0x1c78) = uVar7;
    uVar3 = *(ulonglong *)(param_1 + 0x28);
    if (uVar3 < 0xffffffff00000000) {
      plVar16 = DAT_14c9980d0;
      if (DAT_14c9980d8 == 0) {
        plVar16 = (longlong *)0x0;
      }
      (**(code **)(*plVar16 + 0x58))(plVar16,param_1,uVar3,0x13);
    }
    else {
      uVar18 = (uint)uVar3;
      if ((-1 < (int)uVar18) && ((int)uVar18 < DAT_14c998088)) {
        puVar14 = &DAT_14c998070;
        if (DAT_14c998080 != (undefined *)0x0) {
          puVar14 = DAT_14c998080;
        }
        if ((*(uint *)(puVar14 + ((uint)(uVar3 >> 3) & 0xffffffc)) >> (uVar18 & 0x1f) & 1) != 0) {
          lVar9 = DAT_14c998060 + (ulonglong)(uVar18 & 0x7fffffff) * 0x68;
          puVar15 = *(uint **)(lVar9 + 0x18);
          if (*(uint **)(lVar9 + 0x18) == (uint *)0x0) {
            puVar15 = (uint *)(lVar9 + 8);
          }
          *puVar15 = *puVar15 | 0x80000;
          *(byte *)(lVar9 + 0x60) = *(byte *)(lVar9 + 0x60) | 1;
        }
      }
    }
  }
  LOCK();
  plVar16 = plVar17 + 1;
  *(int *)plVar16 = (int)*plVar16 + -1;
  UNLOCK();
  if ((int)*plVar16 == 0) {
    (**(code **)*plVar17)(plVar17);
    LOCK();
    piVar1 = (int *)((longlong)plVar17 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar17 + 0x10))(plVar17);
    }
  }
LAB_1410db777:
  if ((local_40 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1410db866 FUN_1410db866 body=1897 status=ok
// SIG undefined FUN_1410db866(void)

void FUN_1410db866(longlong param_1)

{
  byte *pbVar1;
  undefined4 *puVar2;
  double dVar3;
  double dVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char cVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 uVar13;
  ulonglong uVar14;
  byte bVar15;
  uint uVar16;
  uint uVar17;
  bool bVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  float fVar25;
  undefined1 auStack_118 [32];
  undefined1 local_f8;
  undefined8 local_f0;
  undefined **local_e8;
  undefined8 uStack_e0;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined ***local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 local_80;
  longlong local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
  lVar11 = FUN_144938c96();
  if (lVar11 != 0) {
    lVar12 = FUN_1410dc03a();
    if (((*(int *)(lVar12 + 0x38) <= *(int *)(*(longlong *)(lVar11 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x30) +
          (longlong)*(int *)(lVar12 + 0x38) * 8) == lVar12 + 0x30)) &&
       (*(int *)(lVar11 + 0x640) != *(int *)(param_1 + 0x640))) {
      *(byte *)(param_1 + 0x62c) = *(byte *)(param_1 + 0x62c) & 0xef;
      lVar11 = *(longlong *)(lVar11 + 0x620);
      if ((lVar11 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar11);
      }
      if (*(longlong *)(param_1 + 0x620) == lVar11) {
        *(undefined8 *)(param_1 + 0x620) = 0;
      }
    }
  }
  if (*(char *)(param_1 + 0x670) == '\x01') {
    iVar9 = *(int *)(param_1 + 0x66c);
    if (*(int *)(param_1 + 0x66c) != *(int *)(param_1 + 0x640)) {
      *(undefined8 *)(param_1 + 0x620) = 0;
      *(undefined1 *)(param_1 + 0x670) = 0;
      iVar9 = *(int *)(param_1 + 0x640);
    }
  }
  else {
    *(undefined8 *)(param_1 + 0x620) = 0;
    iVar9 = *(int *)(param_1 + 0x640);
  }
  if (iVar9 != 0) {
    if (iVar9 == 1) {
      FUN_1457fe71e(param_1);
    }
    else if (iVar9 == 2) {
      FUN_1457feaee(param_1);
    }
    goto LAB_1410dbcc6;
  }
  cVar8 = FUN_1410dbfd0(param_1);
  if (cVar8 == '\0') {
    lVar11 = *(longlong *)(param_1 + 0x620);
  }
  else {
    lVar11 = *(longlong *)(param_1 + 0x620);
    lVar12 = *(longlong *)(lVar11 + 0x48);
    if (lVar12 == 0) {
LAB_1410dbd83:
      *(undefined8 *)(param_1 + 0x620) = 0;
      lVar11 = 0;
      bVar15 = 0;
    }
    else {
      dVar3 = *(double *)(param_1 + 0x650);
      uVar19 = SUB84(dVar3,0);
      uVar20 = (undefined4)((ulonglong)dVar3 >> 0x20);
      dVar4 = *(double *)(param_1 + 0x648);
      uVar21 = SUB84(dVar4,0);
      uVar23 = (undefined4)((ulonglong)dVar4 >> 0x20);
      if (dVar4 < 9.999999747378752e-05) {
        uVar21 = 0;
        uVar23 = 0x3ff00000;
      }
      dVar4 = *(double *)(param_1 + 0x658);
      uVar22 = SUB84(dVar4,0);
      uVar24 = (undefined4)((ulonglong)dVar4 >> 0x20);
      if (dVar3 < 9.999999747378752e-05) {
        uVar19 = 0;
        uVar20 = 0x3ff00000;
      }
      if (dVar4 < 9.999999747378752e-05) {
        uVar22 = 0;
        uVar24 = 0x3ff00000;
      }
      fVar25 = (float)((double)CONCAT44(uVar23,uVar21) + (double)CONCAT44(uVar23,uVar21));
      if ((((*(float *)(lVar12 + 0x60) != fVar25) || (NAN(*(float *)(lVar12 + 0x60)) || NAN(fVar25))
           ) || ((fVar25 = (float)((double)CONCAT44(uVar20,uVar19) + (double)CONCAT44(uVar20,uVar19)
                                  ), *(float *)(lVar12 + 100) != fVar25 ||
                 ((NAN(*(float *)(lVar12 + 100)) || NAN(fVar25) ||
                  (fVar25 = (float)((double)CONCAT44(uVar24,uVar22) +
                                   (double)CONCAT44(uVar24,uVar22)),
                  *(float *)(lVar12 + 0x68) != fVar25)))))) ||
         (NAN(*(float *)(lVar12 + 0x68)) || NAN(fVar25))) goto LAB_1410dbd83;
      bVar15 = *(byte *)(param_1 + 0x62c) & 0x10;
    }
    *(byte *)(param_1 + 0x62c) = *(byte *)(param_1 + 0x62c) & 0xef | bVar15;
  }
  if ((lVar11 == 0) || ((*(uint *)(lVar11 + 8) >> 0x1e & 1) != 0)) {
    local_f0 = 0;
    local_f8 = 0;
    lVar11 = FUN_140c9d4a9(param_1,0,0x40,0);
    if ((lVar11 != 0) && (DAT_14c950c29 != 0)) {
      FUN_1456cec3c(lVar11);
    }
    *(longlong *)(param_1 + 0x620) = lVar11;
    if (*(int *)(param_1 + 0xc) <= DAT_14c9647bc) {
      uVar16 = *(uint *)(lVar11 + 0xc);
      if ((int)uVar16 < DAT_14c9647dc) {
        lVar11 = (ulonglong)((uVar16 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar16 >> 0x10) * 8);
      }
      else {
        lVar11 = 0;
      }
      FUN_1447f71cc(lVar11,0x40000000);
      lVar11 = *(longlong *)(param_1 + 0x620);
    }
    lVar12 = 0;
    FUN_1406555d4(lVar11,param_1,0);
    lVar11 = *(longlong *)(param_1 + 0x620);
    uVar16 = *(uint *)(lVar11 + 0xc);
    if ((int)uVar16 < DAT_14c9647dc) {
      lVar12 = (ulonglong)((uVar16 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar16 >> 0x10) * 8);
    }
    if ((*(uint *)(lVar12 + 8) >> 0x1a & 1) != 0) {
      lVar12 = FUN_14065579a(&DAT_14c9640e8);
      lVar11 = *(longlong *)(param_1 + 0x620);
      if (lVar12 != 0) {
        uVar16 = *(uint *)(lVar11 + 0xc);
        if ((int)uVar16 < DAT_14c9647dc) {
          lVar11 = (ulonglong)((uVar16 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar16 >> 0x10) * 8);
        }
        else {
          lVar11 = 0;
        }
        FUN_14482b126(lVar11,0x4000000);
        lVar11 = *(longlong *)(param_1 + 0x620);
      }
    }
    *(undefined1 *)(lVar11 + 0x31) = 2;
    lVar11 = *(longlong *)(param_1 + 0x620);
    local_c0 = &local_e8;
    uStack_e0._0_4_ = 0;
    uStack_e0._4_4_ = 0;
    uStack_d8 = 0;
    uStack_d4 = 1;
    uStack_d0 = CONCAT22(uStack_d0._2_2_,0x3ff);
    local_c8 = 6;
    local_e8 = &PTR_FUN_14a1e3c70;
    local_b8 = DAT_14c8464e0;
    uStack_b0 = DAT_14c8464e8;
    local_a8 = DAT_14c8464f0;
    uStack_a0 = (undefined4)DAT_14c8464f8;
    uStack_9c = DAT_14c8464f8._4_4_;
    uStack_98 = (undefined4)DAT_14c846500;
    uStack_94 = DAT_14c846500._4_4_;
    uStack_90 = DAT_14c846508;
    uStack_88 = &DAT_3f8000003f800000;
    local_80 = 0x3f800000;
    iVar9 = *(int *)(lVar11 + 0x50);
    *(uint *)(lVar11 + 0x50) = iVar9 + 1U;
    if (*(uint *)(lVar11 + 0x54) < iVar9 + 1U) {
      FUN_140c9d5a2((longlong *)(lVar11 + 0x48),iVar9);
    }
    lVar11 = *(longlong *)(lVar11 + 0x48);
    lVar12 = (longlong)iVar9 * 0x70;
    *(undefined ***)(lVar11 + lVar12) = &PTR_FUN_14a1dee50;
    *(undefined4 *)(lVar11 + 8 + lVar12) = (undefined4)uStack_e0;
    *(ulonglong *)(lVar11 + 0xc + lVar12) = CONCAT44(uStack_d8,uStack_e0._4_4_);
    *(undefined4 *)(lVar11 + 0x14 + lVar12) = uStack_d4;
    *(byte *)(lVar11 + 0x18 + lVar12) =
         *(byte *)(lVar11 + 0x18 + lVar12) & 0xfe | (byte)uStack_d0 & 1;
    *(undefined1 *)(lVar11 + 0x19 + lVar12) = uStack_d0._1_1_;
    *(undefined4 *)(lVar11 + 0x20 + lVar12) = 6;
    *(longlong *)(lVar11 + 0x28 + lVar12) = lVar11 + lVar12;
    *(undefined ***)(lVar11 + lVar12) = &PTR_FUN_14a1e3c70;
    puVar2 = (undefined4 *)(lVar11 + 0x30 + lVar12);
    *puVar2 = (undefined4)local_b8;
    puVar2[1] = local_b8._4_4_;
    puVar2[2] = (undefined4)uStack_b0;
    puVar2[3] = uStack_b0._4_4_;
    puVar2 = (undefined4 *)(lVar11 + 0x40 + lVar12);
    *puVar2 = (undefined4)local_a8;
    puVar2[1] = local_a8._4_4_;
    puVar2[2] = uStack_a0;
    puVar2[3] = uStack_9c;
    puVar2 = (undefined4 *)(lVar11 + 0x50 + lVar12);
    *puVar2 = uStack_98;
    puVar2[1] = uStack_94;
    puVar2[2] = (undefined4)uStack_90;
    puVar2[3] = uStack_90._4_4_;
    puVar2 = (undefined4 *)(lVar11 + 0x5c + lVar12);
    *puVar2 = uStack_90._4_4_;
    puVar2[1] = (undefined4)uStack_88;
    puVar2[2] = uStack_88._4_4_;
    puVar2[3] = local_80;
    pbVar1 = (byte *)(*(longlong *)(param_1 + 0x620) + 0xb9);
    *pbVar1 = *pbVar1 | 8;
    *(byte *)(param_1 + 0x62c) = *(byte *)(param_1 + 0x62c) & 0xef;
    lVar11 = *(longlong *)(param_1 + 0x620);
    if ((lVar11 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar11);
LAB_1410dbb24:
      uVar16 = *(uint *)(lVar11 + 0xc);
      if ((int)uVar16 < DAT_14c9647dc) {
        lVar11 = (ulonglong)((uVar16 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar16 >> 0x10) * 8);
      }
      else {
        lVar11 = 0;
      }
      uVar14 = (ulonglong)*(uint *)(lVar11 + 0x10);
      if (*(uint *)(lVar11 + 0x10) == 0) {
        LOCK();
        iVar9 = DAT_14c964868 + 1;
        UNLOCK();
        uVar17 = DAT_14c964868 + 1;
        bVar18 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar9;
        if (bVar18) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        uVar17);
        }
        LOCK();
        uVar10 = *(uint *)(lVar11 + 0x10);
        bVar18 = uVar10 == 0;
        if (bVar18) {
          *(uint *)(lVar11 + 0x10) = uVar17;
          uVar10 = 0;
        }
        UNLOCK();
        if (bVar18) {
          uVar10 = uVar17;
        }
        uVar14 = (ulonglong)uVar10;
      }
    }
    else {
      if (lVar11 != 0) goto LAB_1410dbb24;
      uVar16 = 0;
      uVar14 = 0;
    }
    *(ulonglong *)(param_1 + 0x410) = (ulonglong)uVar16 | uVar14 << 0x20;
    if (*(longlong *)(param_1 + 0x548) != 0) {
      uStack_e0 = &local_78;
      local_e8 = (undefined **)&LAB_1488137ee;
      local_78 = param_1;
      uVar13 = FUN_1457b57b4(param_1 + 0x410);
      FUN_140e2683c(uVar13,&local_e8);
    }
  }
  if ((*(byte *)(param_1 + 0x62c) & 0x10) == 0) {
    lVar11 = *(longlong *)(*(longlong *)(param_1 + 0x620) + 0x48);
    if (lVar11 == 0) {
      *(undefined8 *)(param_1 + 0x620) = 0;
    }
    else {
      dVar3 = *(double *)(param_1 + 0x650);
      uVar19 = SUB84(dVar3,0);
      uVar20 = (undefined4)((ulonglong)dVar3 >> 0x20);
      dVar4 = *(double *)(param_1 + 0x648);
      uVar21 = SUB84(dVar4,0);
      uVar23 = (undefined4)((ulonglong)dVar4 >> 0x20);
      if (dVar4 < 9.999999747378752e-05) {
        uVar21 = 0;
        uVar23 = 0x3ff00000;
      }
      dVar4 = *(double *)(param_1 + 0x658);
      uVar22 = SUB84(dVar4,0);
      uVar24 = (undefined4)((ulonglong)dVar4 >> 0x20);
      if (dVar3 < 9.999999747378752e-05) {
        uVar19 = 0;
        uVar20 = 0x3ff00000;
      }
      if (dVar4 < 9.999999747378752e-05) {
        uVar22 = 0;
        uVar24 = 0x3ff00000;
      }
      local_e8 = DAT_14c846480;
      uStack_e0._0_4_ = (undefined4)DAT_14c846488;
      uStack_e0._4_4_ = (undefined4)((ulonglong)DAT_14c846488 >> 0x20);
      uStack_d8 = (undefined4)DAT_14c846490;
      uStack_d4 = DAT_14c846490._4_4_;
      uStack_d0 = (undefined4)DAT_14c846498;
      uStack_cc = DAT_14c846498._4_4_;
      FUN_1448052ee(&local_e8,&local_78);
      *(undefined8 *)(lVar11 + 0x58) = local_68;
      *(longlong *)(lVar11 + 0x48) = local_78;
      *(undefined8 *)(lVar11 + 0x50) = uStack_70;
      uVar13 = DAT_14c8464b0;
      uVar7 = DAT_14c8464a8._4_4_;
      uVar6 = (undefined4)DAT_14c8464a8;
      uVar5 = DAT_14c8464a0._4_4_;
      *(undefined4 *)(lVar11 + 0x30) = (undefined4)DAT_14c8464a0;
      *(undefined4 *)(lVar11 + 0x34) = uVar5;
      *(undefined4 *)(lVar11 + 0x38) = uVar6;
      *(undefined4 *)(lVar11 + 0x3c) = uVar7;
      *(undefined8 *)(lVar11 + 0x40) = uVar13;
      *(float *)(lVar11 + 0x60) =
           (float)((double)CONCAT44(uVar23,uVar21) + (double)CONCAT44(uVar23,uVar21));
      *(float *)(lVar11 + 100) =
           (float)((double)CONCAT44(uVar20,uVar19) + (double)CONCAT44(uVar20,uVar19));
      *(float *)(lVar11 + 0x68) =
           (float)((double)CONCAT44(uVar24,uVar22) + (double)CONCAT44(uVar24,uVar22));
    }
  }
LAB_1410dbcc6:
  *(undefined4 *)(param_1 + 0x66c) = *(undefined4 *)(param_1 + 0x640);
  *(undefined1 *)(param_1 + 0x670) = 1;
  if ((local_60 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1410dbfd0 FUN_1410dbfd0 body=106 status=ok
// SIG undefined FUN_1410dbfd0(void)

ulonglong FUN_1410dbfd0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 unaff_RDI;
  undefined7 uVar4;
  ulonglong uVar3;
  
  if ((*(byte *)(param_1 + 0x62c) & 0x10) == 0) {
    uVar3 = 0;
  }
  else {
    uVar4 = (undefined7)((ulonglong)unaff_RDI >> 8);
    if (*(longlong *)(param_1 + 0x620) == 0) {
      plVar1 = (longlong *)FUN_144938c96(param_1);
      lVar2 = (**(code **)(*plVar1 + 0x7a0))(plVar1);
      uVar3 = CONCAT71(uVar4,lVar2 != 0);
      if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(lVar2);
      }
      *(longlong *)(param_1 + 0x620) = lVar2;
    }
    else {
      uVar3 = CONCAT71(uVar4,1);
    }
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 1410dc03a FUN_1410dc03a body=228 status=ok
// SIG undefined FUN_1410dc03a(void)

longlong FUN_1410dc03a(void)

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
  if (DAT_14cb63788 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1463b576a;
    local_38 = &LAB_1486f2950;
    local_40 = &LAB_1410a1816;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x680;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxShapeComponent",&DAT_14cb63788,FUN_1464fdc02);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb63788;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410dc120 FUN_1410dc120 body=1 status=ok
// SIG undefined FUN_1410dc120(void)

void FUN_1410dc120(void)

{
  return;
}



// FUNCTION 1410dc130 FUN_1410dc130 body=234 status=ok
// SIG undefined FUN_1410dc130(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1410dc130(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14b91a3d0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (param_1[0x1f] != 0) {
    FUN_1400020a8();
  }
  FUN_1410dc21a(param_1 + 0x17);
  *(undefined4 *)(param_1 + 0x16) = 0;
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  FUN_1410dc252(param_1 + 0xd);
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



// FUNCTION 1410dc21a FUN_1410dc21a body=55 status=ok
// SIG undefined FUN_1410dc21a(void)

void FUN_1410dc21a(longlong *param_1)

{
  FUN_1410dc418(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1410dc252 FUN_1410dc252 body=55 status=ok
// SIG undefined FUN_1410dc252(void)

void FUN_1410dc252(longlong *param_1)

{
  FUN_1410dc28a(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1410dc28a FUN_1410dc28a body=395 status=ok
// SIG undefined FUN_1410dc28a(void)

void FUN_1410dc28a(longlong *param_1,int param_2)

{
  longlong *plVar1;
  uint uVar2;
  uint uVar3;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong *local_40;
  uint local_38;
  int iStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = param_1 + 2;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  local_30 = 0;
  local_40 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_48);
  }
  local_68 = local_48;
  local_60 = local_40;
  local_58 = local_38;
  iStack_54 = iStack_34;
  local_50 = local_30;
  local_4c = local_2c;
  local_70 = param_1;
  if (iStack_34 < (int)local_40[3]) {
    do {
      if (*(longlong *)(*local_70 + 0x18 + (longlong)iStack_54 * 0x30) != 0) {
        FUN_1400020a8();
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_14494313c(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar3 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar3) ||
     (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
    uVar2 = 0x80;
    if (0x80 < (int)uVar3) {
      uVar2 = uVar3;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar2;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1410dc418 FUN_1410dc418 body=508 status=ok
// SIG undefined FUN_1410dc418(void)

void FUN_1410dc418(longlong *param_1,int param_2)

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
      if (*(longlong *)(*param_1 + 8 + (longlong)iVar6 * 0x20) != 0) {
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
          if (iVar2 - lVar11 == lVar8) goto LAB_1410dc585;
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
LAB_1410dc585:
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_1446f4a44(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar12 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar12) ||
     (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
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



// FUNCTION 1410dc616 FUN_1410dc616 body=501 status=ok
// SIG undefined FUN_1410dc616(void)

void FUN_1410dc616(longlong *param_1,float param_2,longlong param_3)

{
  float fVar1;
  char cVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  
  if (*(longlong *)(*(longlong *)(param_3 + 0x28) + 0xe0) != 0) {
    cVar2 = (**(code **)(*param_1 + 0x78))(param_1,param_3);
    if (cVar2 == '\0') {
      if (((char)param_1[0x1c] == '\0') &&
         (cVar2 = (**(code **)(*param_1 + 0x80))(param_1,param_3), cVar2 == '\0')) {
        fVar5 = *(float *)((longlong)param_1 + 0xec);
      }
      else {
        *(undefined1 *)(param_1 + 0x1e) = 0;
        *(undefined4 *)((longlong)param_1 + 0xe4) = 0;
        fVar5 = 0.0;
        fVar3 = 0.0 - *(float *)((longlong)param_1 + 0xec);
        if (1e-08 <= fVar3 * fVar3) {
          param_2 = (float)(~-(uint)(ABS(*(float *)(param_1 + 0x1b)) <= 1e-08) &
                           (uint)(1.0 / *(float *)(param_1 + 0x1b))) * param_2;
          if (param_2 <= fVar3) {
            fVar3 = param_2;
          }
          if (fVar3 <= -param_2) {
            fVar3 = -param_2;
          }
          fVar5 = *(float *)((longlong)param_1 + 0xec) + fVar3;
        }
        *(float *)((longlong)param_1 + 0xec) = fVar5;
      }
    }
    else {
      *(undefined1 *)(param_1 + 0x1e) = 1;
      fVar3 = *(float *)((longlong)param_1 + 0xe4) + param_2;
      *(float *)((longlong)param_1 + 0xe4) = fVar3;
      fVar5 = *(float *)((longlong)param_1 + 0xec);
      if ((*(float *)((longlong)param_1 + 0xdc) <= fVar3) || (0.0 < fVar5)) {
        fVar3 = 1.0 - fVar5;
        fVar1 = 1.0;
        if (1e-08 <= fVar3 * fVar3) {
          param_2 = (float)(~-(uint)(ABS(*(float *)((longlong)param_1 + 0xd4)) <= 1e-08) &
                           (uint)(1.0 / *(float *)((longlong)param_1 + 0xd4))) * param_2;
          if (param_2 <= fVar3) {
            fVar3 = param_2;
          }
          if (fVar3 <= -param_2) {
            fVar3 = -param_2;
          }
          fVar1 = fVar5 + fVar3;
        }
        fVar5 = fVar1;
        *(float *)((longlong)param_1 + 0xec) = fVar5;
      }
    }
    uVar4 = FUN_1410dc810(param_1,fVar5,*(undefined4 *)(param_3 + 0x60));
    *(undefined4 *)(param_3 + 0x60) = uVar4;
    if ((*(float *)(param_1 + 0x1d) <= 1.0 && *(float *)(param_1 + 0x1d) != 1.0) &&
       (fVar5 = *(float *)(param_3 + 0x68), 0.0 < fVar5)) {
      if (*(float *)(param_1 + 0x1a) <= fVar5) {
        fVar5 = *(float *)(param_1 + 0x1a);
      }
      *(float *)(param_3 + 0x68) = fVar5;
    }
  }
  return;
}



// FUNCTION 1410dc810 FUN_1410dc810 body=151 status=ok
// SIG undefined FUN_1410dc810(void)

float FUN_1410dc810(longlong param_1,undefined4 param_2,float param_3)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  
  lVar1 = FUN_1447e736e(param_1 + 0xa0);
  if (lVar1 == 0) {
    lVar1 = param_1 + 0x20;
  }
  else {
    lVar1 = FUN_1447e736e(param_1 + 0xa0);
    lVar1 = lVar1 + 0x30;
  }
  fVar2 = (float)FUN_1448c9f94(lVar1,param_2,0);
  fVar3 = *(float *)(param_1 + 0xcc);
  if (*(char *)(param_1 + 200) != '\0') {
    fVar3 = (fVar3 + param_3) / param_3;
  }
  return (fVar2 * (fVar3 * *(float *)(param_1 + 0xe8) + -1.0) + 1.0) * param_3;
}



// FUNCTION 1410dc8a8 FUN_1410dc8a8 body=525 status=ok
// SIG undefined FUN_1410dc8a8(void)

void FUN_1410dc8a8(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_78 [32];
  uint local_58;
  int local_54;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = param_1 + 0x80;
  local_54 = 0;
  if (param_3 == 0) {
    local_58 = 0;
    iVar4 = 0;
  }
  else {
    local_58 = *(uint *)(param_3 + 0xc);
    if ((int)local_58 < DAT_14c9647dc) {
      lVar9 = (ulonglong)((local_58 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_58 >> 0x10) * 8);
    }
    else {
      lVar9 = 0;
    }
    iVar4 = *(int *)(lVar9 + 0x10);
    if (*(int *)(lVar9 + 0x10) == 0) {
      LOCK();
      iVar4 = DAT_14c964868 + 1;
      UNLOCK();
      iVar5 = DAT_14c964868 + 1;
      bVar10 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar4;
      if (bVar10) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar5);
      }
      LOCK();
      iVar4 = *(int *)(lVar9 + 0x10);
      bVar10 = iVar4 == 0;
      if (bVar10) {
        *(int *)(lVar9 + 0x10) = iVar5;
        iVar4 = 0;
      }
      UNLOCK();
      if (bVar10) {
        iVar4 = iVar5;
      }
    }
  }
  lVar9 = *(longlong *)(param_1 + 0x100);
  if (*(longlong *)(param_1 + 0x100) == 0) {
    lVar9 = lVar1;
  }
  local_54 = iVar4;
  local_50 = param_4;
  if ((longlong)*(int *)(param_1 + 0x108) != 0) {
    lVar7 = (longlong)*(int *)(param_1 + 0x108) << 4;
    iVar4 = 1;
    lVar8 = 0;
    do {
      if ((*(longlong *)(lVar9 + 8) == local_50) &&
         (cVar2 = FUN_14038330a(lVar9,&local_58), cVar2 != '\0')) {
        if (iVar4 != 0) {
          iVar5 = *(int *)(param_1 + 0x108);
          iVar4 = iVar5 - iVar4;
          if (iVar4 != 0) {
            iVar6 = 1;
            if (iVar4 < 1) {
              iVar6 = iVar4;
            }
            lVar9 = *(longlong *)(param_1 + 0x100);
            if (*(longlong *)(param_1 + 0x100) == 0) {
              lVar9 = lVar1;
            }
            memmove((void *)((lVar8 >> 0x20) * 0x10 + lVar9),
                    (void *)((longlong)(iVar5 - iVar6) * 0x10 + lVar9),(longlong)iVar6 << 4);
            iVar5 = *(int *)(param_1 + 0x108);
          }
          *(int *)(param_1 + 0x108) = iVar5 + -1;
          FUN_1410dcb22(lVar1);
          plVar3 = (longlong *)FUN_1410dcab6(param_2,&DAT_14cb7ece8);
          if (plVar3 != (longlong *)0x0) {
            (**(code **)(*plVar3 + 0x420))(plVar3,0);
          }
        }
        break;
      }
      lVar9 = lVar9 + 0x10;
      lVar8 = lVar8 + 0x100000000;
      iVar4 = iVar4 + 1;
      lVar7 = lVar7 + -0x10;
    } while (lVar7 != 0);
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1410dcab6 FUN_1410dcab6 body=106 status=ok
// SIG undefined FUN_1410dcab6(void)

void FUN_1410dcab6(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = *param_2;
  local_20 = FUN_140b4ce5a();
  if ((local_20 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_20);
  }
  FUN_1410dcbc6(param_1,&local_20,uVar1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410dcb22 FUN_1410dcb22 body=164 status=ok
// SIG undefined FUN_1410dcb22(void)

void FUN_1410dcb22(longlong param_1)

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
  FUN_1486681c4(param_1,*(undefined4 *)(param_1 + 0x88),uVar4,0x10);
  return;
}



// FUNCTION 1410dcbc6 FUN_1410dcbc6 body=902 status=ok
// SIG undefined FUN_1410dcbc6(void)

ulonglong FUN_1410dcbc6(longlong param_1,longlong *param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  uint *puVar12;
  uint uVar13;
  ulonglong uVar14;
  longlong lVar15;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  wchar_t *local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  code **local_80;
  code *local_78;
  code *local_70;
  uint *local_68;
  longlong local_60;
  longlong *local_58;
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  iVar1 = *(int *)(param_1 + 0x268);
  puVar12 = (uint *)(param_1 + 0x250);
  local_58 = param_2;
  if (iVar1 == 0) {
    uVar10 = 0;
    uVar9 = 1;
    iVar3 = 0;
    iVar8 = 0;
  }
  else {
    puVar4 = *(uint **)(param_1 + 0x260);
    if (*(uint **)(param_1 + 0x260) == (uint *)0x0) {
      puVar4 = puVar12;
    }
    uVar13 = *puVar4;
    if (uVar13 == 0) {
      iVar3 = iVar1 + 0x1e;
      if (-1 < iVar1 + -1) {
        iVar3 = iVar1 + -1;
      }
      uVar14 = 0;
      uVar9 = (ulonglong)(uint)(iVar3 >> 5);
      if (iVar3 >> 5 < 1) {
        uVar9 = uVar14;
      }
      uVar10 = 0;
      iVar8 = 0;
      do {
        if (uVar9 == uVar10) goto LAB_1410dce01;
        iVar8 = iVar8 + 0x20;
        uVar13 = puVar4[uVar10 + 1];
        uVar10 = uVar10 + 1;
      } while (uVar13 == 0);
    }
    else {
      uVar10 = 0;
      iVar8 = 0;
    }
    uVar9 = (ulonglong)(-uVar13 & uVar13);
    uVar14 = uVar9 * 2 + 1;
    lVar15 = 0x3f;
    if (uVar14 != 0) {
      for (; uVar14 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    iVar3 = (iVar8 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
    if (iVar1 <= iVar3) {
      iVar3 = iVar1;
    }
  }
  if (iVar3 != iVar1) {
    uVar13 = 0xffffffff;
    do {
      uVar14 = *(ulonglong *)(*(longlong *)(param_1 + 0x240) + (longlong)iVar3 * 0x10);
      if (uVar14 != 0) {
        lVar15 = *local_58;
        if ((lVar15 != 0 & DAT_14c950c29) == 1) {
          local_68 = puVar12;
          local_60 = param_3;
          FUN_1456cec3c(lVar15);
          puVar12 = local_68;
          param_3 = local_60;
LAB_1410dccd2:
          if (DAT_14cad00c8 == 0) {
            local_80 = &local_50;
            local_50 = FUN_144a7958c;
            local_70 = FUN_14081d0ea;
            local_78 = FUN_14081d0ea;
            local_88 = &LAB_1479b7a0c;
            local_90 = &LAB_1463b464e;
            local_98 = L"Engine";
            local_a0 = 0;
            local_a8 = 0x10000005;
            local_b0 = 8;
            local_b8 = 0x110;
            local_68 = puVar12;
            local_60 = param_3;
            FUN_14081cfa3(L"/Script/Engine",L"ActorComponent",&DAT_14cad00c8,FUN_1463b462c);
            puVar12 = local_68;
            param_3 = local_60;
            if (DAT_14cad00c8 == 0) goto LAB_1410dcefd;
          }
          if (*(int *)(lVar15 + 0x38) < *(int *)(DAT_14cad00c8 + 0x38)) goto LAB_1410dcefd;
          if (*(longlong *)
               (*(longlong *)(lVar15 + 0x30) + (longlong)*(int *)(DAT_14cad00c8 + 0x38) * 8) !=
              DAT_14cad00c8 + 0x30) {
            lVar15 = 0;
          }
        }
        else {
          if (lVar15 != 0) goto LAB_1410dccd2;
LAB_1410dcefd:
          lVar15 = 0;
        }
        if (((*(int *)(lVar15 + 0x38) <= *(int *)(*(longlong *)(uVar14 + 0x10) + 0x38)) &&
            (*(longlong *)
              (*(longlong *)(*(longlong *)(uVar14 + 0x10) + 0x30) +
              (longlong)*(int *)(lVar15 + 0x38) * 8) == lVar15 + 0x30 && param_3 != 0)) &&
           ((longlong)*(int *)(uVar14 + 0x78) != 0)) {
          lVar15 = 0;
          do {
            if (*(longlong *)(*(longlong *)(uVar14 + 0x70) + lVar15) == param_3) goto LAB_1410dce01;
            lVar15 = lVar15 + 8;
          } while ((longlong)*(int *)(uVar14 + 0x78) * 8 != lVar15);
        }
      }
      uVar13 = uVar13 & ~(uint)uVar9;
      puVar4 = *(uint **)(param_1 + 0x260);
      if (*(uint **)(param_1 + 0x260) == (uint *)0x0) {
        puVar4 = puVar12;
      }
      iVar2 = *(int *)(param_1 + 0x268);
      iVar3 = (int)uVar10;
      lVar15 = (longlong)iVar3;
      uVar7 = puVar4[lVar15] & uVar13;
      if (uVar7 == 0) {
        iVar5 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar5 = iVar2 + -1;
        }
        iVar5 = iVar5 >> 5;
        iVar8 = iVar8 + 0x20;
        iVar6 = iVar5;
        if (iVar5 < iVar3) {
          iVar6 = iVar3;
        }
        if (iVar3 < iVar5) {
          lVar11 = 0;
          do {
            uVar7 = puVar4[lVar15 + lVar11 + 1];
            if (uVar7 != 0) {
              uVar10 = (ulonglong)(iVar3 + (int)lVar11 + 1);
              uVar13 = 0xffffffff;
              goto LAB_1410dcda4;
            }
            iVar8 = iVar8 + 0x20;
            lVar11 = lVar11 + 1;
          } while (iVar6 - lVar15 != lVar11);
          uVar13 = 0xffffffff;
          iVar3 = iVar6;
        }
        uVar10 = (ulonglong)(iVar3 + 1);
        iVar3 = iVar2;
      }
      else {
LAB_1410dcda4:
        uVar9 = (ulonglong)(-uVar7 & uVar7);
        uVar14 = uVar9 * 2 + 1;
        lVar15 = 0x3f;
        if (uVar14 != 0) {
          for (; uVar14 >> lVar15 == 0; lVar15 = lVar15 + -1) {
          }
        }
        iVar3 = (iVar8 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
        if (iVar2 <= iVar3) {
          iVar3 = iVar2;
        }
      }
    } while (iVar3 != iVar1);
  }
  uVar14 = 0;
LAB_1410dce01:
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar14;
}



// FUNCTION 1410dcf4e FUN_1410dcf4e body=95 status=ok
// SIG undefined FUN_1410dcf4e(void)

ulonglong FUN_1410dcf4e(longlong param_1)

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
LAB_1410dcf90:
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_1410dcf90;
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



// FUNCTION 1410dcfae FUN_1410dcfae body=200 status=ok
// SIG undefined FUN_1410dcfae(void)

void FUN_1410dcfae(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  int local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((*(char *)(param_1 + 0x68) != '\0') || (lVar1 = *(longlong *)(param_1 + 0x50), lVar1 == 0))
  goto LAB_1410dd01d;
  FUN_1410dd078(&local_40,param_1,FUN_140854c86);
  FUN_140df5e42(lVar1,&local_30,&local_40);
  *(undefined8 *)(param_1 + 0x60) = local_30;
  if (local_38 == 0) {
LAB_1410dd00f:
    if (local_40 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_40 != (undefined8 *)0x0) {
    (**(code **)*local_40)(local_40,0);
    FUN_1446efa72(&local_40,0,0,0x10);
    local_38 = 0;
    goto LAB_1410dd00f;
  }
  *(undefined1 *)(param_1 + 0x68) = 1;
LAB_1410dd01d:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410dd078 FUN_1410dd078 body=477 status=ok
// SIG undefined FUN_1410dd078(void)

longlong * FUN_1410dd078(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,3,0x10);
  *(undefined4 *)(param_1 + 1) = 3;
  puVar4 = (undefined8 *)*param_1;
  FUN_141085fe4(param_2,&local_40);
  plVar2 = local_38;
  if (local_38 == (longlong *)0x0) {
    *puVar4 = &PTR_LAB_149e01f80;
    LOCK();
    UNLOCK();
    lVar6 = DAT_14c758608 + 1;
    lVar5 = DAT_14c758608 + 1;
    if (lVar6 == 0) {
      LOCK();
      UNLOCK();
      lVar6 = DAT_14c758608 + 2;
      lVar5 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar5;
    puVar4[2] = lVar6;
    *puVar4 = &PTR_FUN_14b428c20;
    puVar4[3] = local_40;
    puVar4[4] = 0;
    puVar4[5] = param_3;
  }
  else {
    LOCK();
    *(int *)(local_38 + 1) = (int)local_38[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(local_38 + 1) = (int)local_38[1] + 1;
    UNLOCK();
    *puVar4 = &PTR_LAB_149e01f80;
    LOCK();
    UNLOCK();
    lVar6 = DAT_14c758608 + 1;
    lVar5 = DAT_14c758608 + 1;
    if (lVar6 == 0) {
      LOCK();
      UNLOCK();
      lVar6 = DAT_14c758608 + 2;
      lVar5 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar5;
    puVar4[2] = lVar6;
    *puVar4 = &PTR_FUN_14b428c20;
    puVar4[3] = local_40;
    puVar4[4] = local_38;
    LOCK();
    *(int *)((longlong)local_38 + 0xc) = *(int *)((longlong)local_38 + 0xc) + 1;
    UNLOCK();
    puVar4[5] = param_3;
    LOCK();
    plVar1 = local_38 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar3 = (int *)((longlong)plVar2 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
    LOCK();
    plVar1 = plVar2 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar2)(plVar2);
      LOCK();
      piVar3 = (int *)((longlong)plVar2 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_38 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar3 = (int *)((longlong)local_38 + 0xc);
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (*piVar3 == 0) {
        (**(code **)(*local_38 + 0x10))(local_38);
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_68);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410dd35c FUN_1410dd35c body=40 status=ok
// SIG undefined FUN_1410dd35c(void)

undefined8 FUN_1410dd35c(undefined8 param_1,int param_2)

{
  FUN_1410dd384();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1410dd384 FUN_1410dd384 body=90 status=ok
// SIG undefined FUN_1410dd384(void)

void FUN_1410dd384(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14afddb70;
  param_1[0x79] = &PTR_FUN_14afde1e0;
  plVar3 = (longlong *)param_1[0x84];
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
  FUN_1402d9b92(param_1);
  return;
}



// FUNCTION 1410dd3de FUN_1410dd3de body=2955 status=ok
// SIG undefined FUN_1410dd3de(void)

void FUN_1410dd3de(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  longlong *plVar1;
  code *pcVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  byte *pbVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  undefined8 *puVar8;
  undefined1 auStack_258 [32];
  undefined8 *local_238;
  undefined4 *local_230;
  undefined4 *local_228;
  code *local_220;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined4 local_1f0;
  undefined4 local_1e8 [2];
  longlong local_1e0;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  longlong local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined4 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined4 local_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined8 local_180;
  undefined8 local_178;
  undefined7 local_170;
  undefined4 uStack_169;
  undefined4 local_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  longlong local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  longlong lStack_138;
  undefined8 local_130;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined4 local_e0;
  undefined2 uStack_dc;
  undefined1 uStack_da;
  undefined4 uStack_d9;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_c4;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_258;
  local_a0 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_228 = (undefined4 *)FUN_1446ddbd2();
      local_220 = FUN_1468d96f0;
      local_230 = (undefined4 *)0x0;
      local_238 = (undefined8 *)0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  pbVar5 = *(byte **)(param_2 + 0x20);
  if (pbVar5 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_a0);
  }
  else {
    uVar4 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar5 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar5];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar4,param_2,&local_a0);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar4,param_2,&local_a0);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      local_a0 = *(undefined8 *)(pbVar5 + 1);
      *(byte **)(param_2 + 0x20) = pbVar5 + 9;
    }
    else {
      (*pcVar2)(uVar4,param_2,&local_a0);
    }
  }
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c947f70) {
    FUN_144b3d300(&DAT_14c947f70);
    if (DAT_14c947f70 == -1) {
      local_228 = (undefined4 *)FUN_1446ddbd2();
      local_220 = FUN_141710108;
      local_230 = (undefined4 *)0x1000000000000000;
      local_238 = (undefined8 *)0x8001;
      FUN_14000176a(&DAT_14c947f20,L"FGbxDefPtrProperty",0);
      atexit(FUN_1427b4857);
      _Init_thread_footer(&DAT_14c947f70);
    }
  }
  pbVar5 = *(byte **)(param_2 + 0x20);
  if (pbVar5 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_b8);
  }
  else {
    uVar4 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar5 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar5];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar4,param_2,&local_b8);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar4,param_2,&local_b8);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      local_b8 = *(undefined8 *)(pbVar5 + 1);
      *(byte **)(param_2 + 0x20) = pbVar5 + 9;
    }
    else {
      (*pcVar2)(uVar4,param_2,&local_b8);
    }
  }
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  plVar1 = (longlong *)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  pbVar5 = *(byte **)(param_2 + 0x20);
  if (pbVar5 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_98);
  }
  else {
    uVar4 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar5 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar5];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar4,param_2,&local_98);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar4,param_2,&local_98);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      local_98 = *(undefined8 *)(pbVar5 + 1);
      *(byte **)(param_2 + 0x20) = pbVar5 + 9;
    }
    else {
      (*pcVar2)(uVar4,param_2,&local_98);
    }
  }
  puVar6 = &local_98;
  if ((undefined8 *)*plVar1 != (undefined8 *)0x0) {
    puVar6 = (undefined8 *)*plVar1;
  }
  local_c4 = 0;
  local_bc = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a58) {
    FUN_144b3d300(&DAT_14c952a58);
    if (DAT_14c952a58 == -1) {
      local_228 = (undefined4 *)FUN_1446ddbd2();
      local_220 = FUN_1403a682c;
      local_230 = (undefined4 *)0x0;
      local_238 = (undefined8 *)0x108001;
      FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
      atexit(FUN_142818c9e);
      _Init_thread_footer(&DAT_14c952a58);
    }
  }
  pbVar5 = *(byte **)(param_2 + 0x20);
  if (pbVar5 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_c4);
  }
  else {
    uVar4 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar5 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar5];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar4,param_2,&local_c4);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar4,param_2,&local_c4);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      local_c4 = *(undefined8 *)(pbVar5 + 1);
      *(byte **)(param_2 + 0x20) = pbVar5 + 9;
    }
    else {
      (*pcVar2)(uVar4,param_2,&local_c4);
    }
  }
  local_d0 = 0;
  local_c8 = 0;
  *plVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  pbVar5 = *(byte **)(param_2 + 0x20);
  if (pbVar5 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_d0);
  }
  else {
    uVar4 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar5 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar5];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar4,param_2,&local_d0);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar4,param_2,&local_d0);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      local_d0 = *(undefined8 *)(pbVar5 + 1);
      *(byte **)(param_2 + 0x20) = pbVar5 + 9;
    }
    else {
      (*pcVar2)(uVar4,param_2,&local_d0);
    }
  }
  puVar8 = &local_d0;
  if ((undefined8 *)*plVar1 != (undefined8 *)0x0) {
    puVar8 = (undefined8 *)*plVar1;
  }
  uStack_158 = 0;
  local_150 = 0;
  uStack_148 = 0;
  local_140 = 0;
  lStack_138 = 0;
  local_130 = 0;
  uStack_128 = 0;
  uStack_124 = 0;
  local_120 = 0;
  uStack_11c = 0;
  local_118 = 0;
  local_110 = 0;
  uStack_108 = 0;
  local_100 = 0;
  uStack_f8 = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  local_e0 = 0xffffffff;
  uStack_dc = 0;
  uStack_da = 1;
  uStack_d9 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a58) {
    FUN_144b3d300(&DAT_14c952a58);
    if (DAT_14c952a58 == -1) {
      local_228 = (undefined4 *)FUN_1446ddbd2();
      local_220 = FUN_1403a682c;
      local_230 = (undefined4 *)0x0;
      local_238 = (undefined8 *)0x108001;
      FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
      atexit(FUN_142818c9e);
      _Init_thread_footer(&DAT_14c952a58);
    }
  }
  pbVar5 = *(byte **)(param_2 + 0x20);
  if (pbVar5 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&uStack_158);
  }
  else {
    uVar4 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar5 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar5];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar4,param_2,&uStack_158);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar4,param_2,&uStack_158);
    }
    else {
      if (pcVar2 == (code *)&LAB_1428293cc) {
        uVar4 = *(undefined8 *)(pbVar5 + 1);
        pbVar5 = pbVar5 + 9;
        *(byte **)(param_2 + 0x20) = pbVar5;
        uStack_158 = (undefined4)uVar4;
        uStack_154 = (undefined4)((ulonglong)uVar4 >> 0x20);
        goto LAB_1410dd882;
      }
      (*pcVar2)(uVar4,param_2,&uStack_158);
    }
  }
  pbVar5 = *(byte **)(param_2 + 0x20);
LAB_1410dd882:
  local_15c = 0;
  *plVar1 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (pbVar5 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_15c);
  }
  else {
    uVar4 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar5 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar5];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar4,param_2,&local_15c);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar4,param_2,&local_15c);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      uVar4 = *(undefined8 *)(pbVar5 + 1);
      *(byte **)(param_2 + 0x20) = pbVar5 + 9;
      local_15c = (undefined4)uVar4;
      uStack_158 = (undefined4)((ulonglong)uVar4 >> 0x20);
    }
    else {
      (*pcVar2)(uVar4,param_2,&local_15c);
    }
  }
  puVar7 = &local_15c;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar7 = *(undefined4 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_1e8[0] = uStack_158;
  local_1e0 = local_150;
  if ((local_150 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  local_1d8 = (undefined4)uStack_148;
  uStack_1d4 = uStack_148._4_4_;
  uStack_1d0 = (undefined4)local_140;
  uStack_1cc = local_140._4_4_;
  local_1c8 = lStack_138;
  if ((lStack_138 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  local_1c0 = local_130;
  uVar4 = FUN_14477b664(CONCAT44(uStack_124,uStack_128));
  local_1b8 = FUN_14477b664(uVar4);
  local_1b0 = CONCAT44(uStack_11c,local_120);
  local_1a8 = local_118;
  local_1a0 = local_110;
  uVar4 = FUN_14477b664(uStack_108);
  local_198 = FUN_14477b664(uVar4);
  local_190 = (undefined4)local_100;
  uStack_18c = local_100._4_4_;
  uStack_188 = (undefined4)uStack_f8;
  uStack_184 = uStack_f8._4_4_;
  uVar4 = FUN_14477b664(local_f0);
  local_180 = FUN_14477b664(uVar4);
  local_178 = uStack_e8;
  local_170 = CONCAT16(uStack_da,CONCAT24(uStack_dc,local_e0));
  uStack_169 = uStack_d9;
  local_1f8 = local_c4;
  local_1f0 = local_bc;
  local_210 = local_b8;
  uVar4 = FUN_14477b664(uStack_b0);
  local_208 = FUN_14477b664(uVar4);
  local_200 = local_a8;
  local_238 = puVar8;
  local_230 = local_1e8;
  local_228 = puVar7;
  uVar3 = FUN_1410ddf6a(local_a0,&local_210,puVar6,&local_1f8);
  *param_3 = uVar3;
  local_50 = 0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_1406f0462(&local_98);
  if ((local_40 ^ (ulonglong)auStack_258) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410ddf6a FUN_1410ddf6a body=1355 status=ok
// SIG undefined FUN_1410ddf6a(void)

bool FUN_1410ddf6a(longlong *param_1,longlong *param_2,longlong *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 param_6,int *param_7)

{
  ulonglong uVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  uint *puVar9;
  longlong *plVar10;
  uint uVar11;
  longlong *plVar12;
  int iVar13;
  int iVar14;
  uint *puVar15;
  int iVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  uint uVar19;
  int iVar20;
  bool bVar21;
  undefined1 auStack_368 [32];
  undefined8 *local_348;
  longlong local_340;
  undefined8 *local_338;
  uint local_330;
  uint uStack_32c;
  int iStack_328;
  uint local_324;
  undefined8 uStack_320;
  uint local_318;
  int local_314;
  int local_310;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_368;
  if (param_1 == (longlong *)0x0) {
LAB_1410de298:
    puVar9 = (uint *)(param_3 + 2);
    iVar4 = (int)param_3[5];
    local_324 = 1;
    if (iVar4 == 0) {
      local_310 = 0;
      iStack_328 = 0;
      local_314 = 0;
    }
    else {
      puVar15 = (uint *)param_3[4];
      if ((uint *)param_3[4] == (uint *)0x0) {
        puVar15 = puVar9;
      }
      uVar11 = *puVar15;
      if (uVar11 == 0) {
        iVar16 = iVar4 + 0x1e;
        if (-1 < iVar4 + -1) {
          iVar16 = iVar4 + -1;
        }
        uVar17 = 0;
        uVar18 = (ulonglong)(uint)(iVar16 >> 5);
        if (iVar16 >> 5 < 1) {
          uVar18 = uVar17;
        }
        iStack_328 = (int)uVar18 + 1;
        local_310 = (int)uVar18 * 0x20 + 0x20;
        iVar16 = 0;
        do {
          local_314 = iVar4;
          if (uVar18 == uVar17) goto LAB_1410de338;
          iVar16 = iVar16 + 0x20;
          uVar11 = puVar15[uVar17 + 1];
          uVar17 = uVar17 + 1;
        } while (uVar11 == 0);
        iStack_328 = (int)uVar17;
        local_310 = iVar16;
      }
      else {
        local_310 = 0;
        iStack_328 = 0;
      }
      local_324 = -uVar11 & uVar11;
      uVar18 = (ulonglong)local_324 * 2 + 1;
      lVar5 = 0x3f;
      if (uVar18 != 0) {
        for (; uVar18 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      local_314 = (local_310 - ((uint)lVar5 ^ 0x3f)) + 0x3e;
      if (iVar4 <= local_314) {
        local_314 = iVar4;
      }
    }
LAB_1410de338:
    local_330 = (uint)param_3;
    uStack_32c = (uint)((ulonglong)param_3 >> 0x20);
    local_318 = 0xffffffff;
    uStack_320 = puVar9;
    if (local_314 != iVar4) {
      plVar10 = param_3;
      do {
        plVar12 = (longlong *)(*plVar10 + (longlong)local_314 * 0x60 + 0x18);
        if (((plVar12 != (longlong *)0x0) &&
            (*(char *)(*plVar10 + 0x50 + (longlong)local_314 * 0x60) == '\x01')) &&
           (plVar12 = (longlong *)*plVar12, plVar12 != (longlong *)0x0)) {
          lVar5 = (**(code **)(*plVar12 + 0x180))();
          if (lVar5 != 0) goto LAB_1410ddfb6;
        }
        local_318 = local_318 & ~local_324;
        FUN_1449c0562(&iStack_328);
        plVar10 = (longlong *)CONCAT44(uStack_32c,local_330);
      } while (plVar10 != param_3 || (uStack_320 != puVar9 || local_314 != iVar4));
    }
  }
  else {
    lVar5 = (**(code **)(*param_1 + 0x180))();
    if (lVar5 == 0) goto LAB_1410de298;
LAB_1410ddfb6:
    lVar6 = FUN_140115352(lVar5);
    if (lVar6 != 0) {
      *param_7 = 0;
      lVar8 = param_2[1];
      if (lVar8 == 0) {
        uVar7 = FUN_1407ad36c();
        lVar8 = FUN_14477b664(uVar7);
        param_2[1] = lVar8;
      }
      puVar9 = uStack_320;
      if (param_2[2] == 0) {
        if ((lVar8 != 0) && (*param_2 != 0)) {
          plVar10 = *(longlong **)(lVar8 + 0xb8);
          if (plVar10 != (longlong *)0x0) {
            cVar3 = (**(code **)(*plVar10 + 0x108))(plVar10);
            if (cVar3 != '\0') {
              uVar7 = (**(code **)(*plVar10 + 0x110))(plVar10);
              lVar8 = FUN_144aff482(uVar7,param_2);
              param_2[2] = lVar8;
              puVar9 = uStack_320;
              if (lVar8 != 0) goto LAB_1410de049;
              goto LAB_1410de25a;
            }
          }
          param_2[2] = 0;
        }
      }
      else {
LAB_1410de049:
        uStack_320._4_4_ = (undefined4)((ulonglong)puVar9 >> 0x20);
        uVar11 = *(uint *)(lVar5 + 0xc);
        if ((int)uVar11 < DAT_14c9647dc) {
          lVar5 = (ulonglong)((uVar11 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar11 >> 0x10) * 8);
        }
        else {
          lVar5 = 0;
        }
        iVar4 = *(int *)(lVar5 + 0x10);
        local_340 = lVar6;
        if (*(int *)(lVar5 + 0x10) == 0) {
          LOCK();
          iVar4 = DAT_14c964868 + 1;
          UNLOCK();
          iVar16 = DAT_14c964868 + 1;
          bVar21 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar4;
          if (bVar21) {
            uStack_320 = puVar9;
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar16);
          }
          LOCK();
          iVar4 = *(int *)(lVar5 + 0x10);
          bVar21 = iVar4 == 0;
          if (bVar21) {
            *(int *)(lVar5 + 0x10) = iVar16;
            iVar4 = 0;
          }
          UNLOCK();
          if (bVar21) {
            iVar4 = iVar16;
          }
        }
        local_330 = local_330 & 0xffffff00;
        uVar18 = 0;
        local_324 = 0;
        uStack_320._0_4_ = 0;
        local_58 = 0;
        local_50 = 0x800000000;
        iVar16 = (int)param_3[5];
        local_338 = param_4;
        uStack_32c = uVar11;
        iStack_328 = iVar4;
        if (iVar16 == 0) {
          uVar17 = 1;
          iVar4 = 0;
          iVar20 = 0;
        }
        else {
          puVar9 = (uint *)param_3[4];
          if ((uint *)param_3[4] == (uint *)0x0) {
            puVar9 = (uint *)(param_3 + 2);
          }
          uVar11 = *puVar9;
          if (uVar11 == 0) {
            iVar4 = iVar16 + 0x1e;
            if (-1 < iVar16 + -1) {
              iVar4 = iVar16 + -1;
            }
            uVar18 = 0;
            uVar17 = (ulonglong)(uint)(iVar4 >> 5);
            if (iVar4 >> 5 < 1) {
              uVar17 = uVar18;
            }
            iVar20 = 0;
            do {
              if (uVar17 == uVar18) goto LAB_1410de20e;
              iVar20 = iVar20 + 0x20;
              uVar11 = puVar9[uVar18 + 1];
              uVar18 = uVar18 + 1;
            } while (uVar11 == 0);
          }
          else {
            uVar18 = 0;
            iVar20 = 0;
          }
          uVar17 = (ulonglong)(-uVar11 & uVar11);
          uVar1 = uVar17 * 2 + 1;
          lVar5 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar5 == 0; lVar5 = lVar5 + -1) {
            }
          }
          iVar4 = (iVar20 - ((uint)lVar5 ^ 0x3f)) + 0x3e;
          if (iVar16 <= iVar4) {
            iVar4 = iVar16;
          }
        }
        if (iVar4 != iVar16) {
          uVar11 = 0xffffffff;
          do {
            FUN_1410de4b6(&local_330,*param_3 + (longlong)iVar4 * 0x60,
                          *param_3 + (longlong)iVar4 * 0x60 + 0x18);
            uVar11 = ~(uint)uVar17 & uVar11;
            puVar9 = (uint *)param_3[4];
            if ((uint *)param_3[4] == (uint *)0x0) {
              puVar9 = (uint *)(param_3 + 2);
            }
            iVar2 = (int)param_3[5];
            iVar4 = (int)uVar18;
            lVar5 = (longlong)iVar4;
            uVar19 = puVar9[lVar5] & uVar11;
            if (uVar19 == 0) {
              iVar13 = iVar2 + 0x1e;
              if (-1 < iVar2 + -1) {
                iVar13 = iVar2 + -1;
              }
              iVar13 = iVar13 >> 5;
              iVar20 = iVar20 + 0x20;
              iVar14 = iVar13;
              if (iVar13 < iVar4) {
                iVar14 = iVar4;
              }
              if (iVar4 < iVar13) {
                lVar6 = 0;
                do {
                  uVar19 = puVar9[lVar5 + lVar6 + 1];
                  if (uVar19 != 0) {
                    uVar18 = (ulonglong)(iVar4 + (int)lVar6 + 1);
                    uVar11 = 0xffffffff;
                    goto LAB_1410de1d7;
                  }
                  iVar20 = iVar20 + 0x20;
                  lVar6 = lVar6 + 1;
                } while (iVar14 - lVar5 != lVar6);
                uVar11 = 0xffffffff;
                iVar4 = iVar14;
              }
              uVar18 = (ulonglong)(iVar4 + 1);
              iVar4 = iVar2;
            }
            else {
LAB_1410de1d7:
              uVar17 = (ulonglong)(-uVar19 & uVar19);
              uVar1 = uVar17 * 2 + 1;
              lVar5 = 0x3f;
              if (uVar1 != 0) {
                for (; uVar1 >> lVar5 == 0; lVar5 = lVar5 + -1) {
                }
              }
              iVar4 = (iVar20 - ((uint)lVar5 ^ 0x3f)) + 0x3e;
              if (iVar2 <= iVar4) {
                iVar4 = iVar2;
              }
            }
          } while (iVar4 != iVar16);
        }
LAB_1410de20e:
        local_348 = param_5;
        iVar4 = FUN_1407af00a(local_340,param_2,&local_330,param_6);
        *param_7 = iVar4;
        *local_338 = *param_5;
        *(undefined4 *)(local_338 + 1) = *(undefined4 *)(param_5 + 1);
        FUN_1407acd04(&local_318);
      }
LAB_1410de25a:
      bVar21 = *param_7 != 0;
      goto LAB_1410de260;
    }
  }
  bVar21 = false;
LAB_1410de260:
  if ((local_48 ^ (ulonglong)auStack_368) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar21;
}



// FUNCTION 1410de4b6 FUN_1410de4b6 body=1227 status=ok
// SIG undefined FUN_1410de4b6(void)

void FUN_1410de4b6(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  char cVar10;
  int iVar11;
  int iVar12;
  undefined8 uVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  undefined8 *puVar19;
  undefined **ppuVar20;
  longlong lVar21;
  undefined1 auStack_158 [40];
  longlong local_130;
  longlong local_128;
  longlong *local_120;
  undefined8 *local_118;
  longlong local_110;
  longlong local_108;
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
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_158;
  lVar14 = param_2[1];
  if (lVar14 == 0) {
    uVar13 = FUN_140490c9a();
    lVar14 = FUN_14477b664(uVar13);
    param_2[1] = lVar14;
  }
  lVar15 = param_2[2];
  if (lVar15 == 0) {
    if ((lVar14 == 0) || (*param_2 == 0)) goto LAB_1410de933;
    plVar1 = *(longlong **)(lVar14 + 0xb8);
    if ((plVar1 == (longlong *)0x0) ||
       (cVar10 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar10 == '\0')) {
      param_2[2] = 0;
      goto LAB_1410de933;
    }
    uVar13 = (**(code **)(*plVar1 + 0x110))(plVar1);
    lVar15 = FUN_144aff482(uVar13,param_2);
    param_2[2] = lVar15;
    if (lVar15 == 0) goto LAB_1410de933;
    lVar14 = param_2[1];
  }
  if (lVar14 == 0) {
    uVar13 = FUN_140490c9a();
    lVar14 = FUN_14477b664(uVar13);
    param_2[1] = lVar14;
    lVar15 = param_2[2];
    if (((lVar15 == 0) && (lVar15 = 0, lVar14 != 0)) && (*param_2 != 0)) {
      plVar1 = *(longlong **)(lVar14 + 0xb8);
      if ((plVar1 == (longlong *)0x0) ||
         (cVar10 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar10 == '\0')) {
        lVar15 = 0;
      }
      else {
        uVar13 = (**(code **)(*plVar1 + 0x110))(plVar1);
        lVar15 = FUN_144aff482(uVar13,param_2);
      }
      param_2[2] = lVar15;
    }
  }
  if (*(char *)(lVar15 + 0x18) == *(char *)(param_3 + 7)) {
    lVar14 = param_1 + 0x18;
    local_110 = *param_2;
    local_120 = param_2;
    local_118 = param_3;
    uVar13 = FUN_14477b664(param_2[1]);
    local_100 = FUN_14477b664(uVar13);
    lVar15 = *(longlong *)(param_1 + 0x2d8);
    if (*(longlong *)(param_1 + 0x2d8) == 0) {
      lVar15 = lVar14;
    }
    local_128 = lVar14;
    if ((longlong)*(int *)(param_1 + 0x2e0) != 0) {
      local_108 = (longlong)*(int *)(param_1 + 0x2e0) * -0x58;
      lVar21 = 8;
      lVar14 = 0;
      local_130 = lVar15;
      do {
        lVar15 = local_130;
        if (*(longlong *)(local_130 + lVar21) == 0) {
          uVar13 = FUN_140490c9a();
          uVar13 = FUN_14477b664(uVar13);
          *(undefined8 *)(lVar15 + lVar21) = uVar13;
        }
        lVar16 = local_100;
        if (local_100 == 0) {
          lVar16 = FUN_140490c9a(0);
        }
        lVar16 = FUN_14477b664(lVar16);
        iVar11 = 0;
        if ((lVar16 != 0) && (plVar1 = *(longlong **)(lVar16 + 0xb8), plVar1 != (longlong *)0x0)) {
          lVar17 = *plVar1;
          pcVar2 = *(code **)(lVar17 + 0x108);
          if (pcVar2 != (code *)&LAB_14478342e && pcVar2 != (code *)&LAB_144783422) {
            cVar10 = (*pcVar2)(plVar1);
            iVar11 = 0;
            if (cVar10 == '\0') goto LAB_1410de691;
            lVar17 = *plVar1;
          }
          pcVar2 = *(code **)(lVar17 + 0x110);
          ppuVar20 = &PTR_PTR_14c763408;
          if ((pcVar2 != (code *)&LAB_144783426) &&
             (ppuVar20 = &PTR_PTR_14c75f798, pcVar2 != (code *)&LAB_144783432)) {
            ppuVar20 = (undefined **)(*pcVar2)(plVar1);
          }
          iVar11 = FUN_144aff48c(ppuVar20);
        }
LAB_1410de691:
        lVar17 = *(longlong *)(lVar15 + -8 + lVar21);
        lVar15 = *(longlong *)(lVar15 + lVar21);
        iVar12 = 0;
        if ((lVar15 != 0) &&
           (plVar1 = *(longlong **)(lVar15 + 0xb8), iVar12 = 0, plVar1 != (longlong *)0x0)) {
          lVar18 = *plVar1;
          pcVar2 = *(code **)(lVar18 + 0x108);
          if (pcVar2 != (code *)&LAB_14478342e && pcVar2 != (code *)&LAB_144783422) {
            cVar10 = (*pcVar2)(plVar1);
            if (cVar10 == '\0') goto LAB_1410de6fa;
            lVar18 = *plVar1;
          }
          pcVar2 = *(code **)(lVar18 + 0x110);
          ppuVar20 = &PTR_PTR_14c763408;
          if ((pcVar2 != (code *)&LAB_144783426) &&
             (ppuVar20 = &PTR_PTR_14c75f798, pcVar2 != (code *)&LAB_144783432)) {
            ppuVar20 = (undefined **)(*pcVar2)(plVar1);
          }
          iVar12 = FUN_144aff48c(ppuVar20);
        }
LAB_1410de6fa:
        if ((iVar12 == iVar11) && (lVar17 == local_110)) {
          if (lVar15 == lVar16) {
LAB_1410de87c:
            if (local_130 - lVar14 != 0) {
              puVar19 = (undefined8 *)((local_130 - lVar14) + 0x18);
              goto LAB_1410de89e;
            }
            break;
          }
          if ((lVar16 != 0) && (lVar15 != 0)) {
            iVar11 = *(int *)(lVar16 + 0x38);
            iVar12 = *(int *)(lVar15 + 0x38);
            if (((iVar11 <= iVar12) &&
                (*(longlong *)(*(longlong *)(lVar15 + 0x30) + (longlong)iVar11 * 8) == lVar16 + 0x30
                )) || ((iVar12 <= iVar11 &&
                       (*(longlong *)(*(longlong *)(lVar16 + 0x30) + (longlong)iVar12 * 8) ==
                        lVar15 + 0x30)))) goto LAB_1410de87c;
          }
        }
        lVar14 = lVar14 + -0x58;
        lVar21 = lVar21 + 0x58;
      } while (local_108 != lVar14);
    }
    puVar19 = (undefined8 *)FUN_14042880c(local_128,local_120);
LAB_1410de89e:
    if (puVar19 != local_118) {
      uStack_c0 = CONCAT71(uStack_c0._1_7_,*(byte *)(local_118 + 7));
      (*(code *)(&PTR_FUN_14b04c4f0)[*(byte *)(local_118 + 7)])(&local_f8);
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
      uVar13 = *puVar19;
      uVar3 = puVar19[1];
      uVar4 = puVar19[2];
      uVar5 = puVar19[3];
      uVar6 = puVar19[4];
      uVar7 = puVar19[5];
      uVar8 = puVar19[6];
      uVar9 = puVar19[7];
      *(undefined4 *)(puVar19 + 6) = (undefined4)local_c8;
      *(undefined4 *)((longlong)puVar19 + 0x34) = local_c8._4_4_;
      *(undefined4 *)(puVar19 + 7) = (undefined4)uStack_c0;
      *(undefined4 *)((longlong)puVar19 + 0x3c) = uStack_c0._4_4_;
      *(undefined4 *)(puVar19 + 4) = (undefined4)local_d8;
      *(undefined4 *)((longlong)puVar19 + 0x24) = local_d8._4_4_;
      *(undefined4 *)(puVar19 + 5) = (undefined4)uStack_d0;
      *(undefined4 *)((longlong)puVar19 + 0x2c) = uStack_d0._4_4_;
      *(undefined4 *)(puVar19 + 2) = (undefined4)local_e8;
      *(undefined4 *)((longlong)puVar19 + 0x14) = local_e8._4_4_;
      *(undefined4 *)(puVar19 + 3) = (undefined4)uStack_e0;
      *(undefined4 *)((longlong)puVar19 + 0x1c) = uStack_e0._4_4_;
      *(undefined4 *)puVar19 = (undefined4)local_f8;
      *(undefined4 *)((longlong)puVar19 + 4) = local_f8._4_4_;
      *(undefined4 *)(puVar19 + 1) = (undefined4)uStack_f0;
      *(undefined4 *)((longlong)puVar19 + 0xc) = uStack_f0._4_4_;
      local_f8 = uVar13;
      uStack_f0 = uVar3;
      local_e8 = uVar4;
      uStack_e0 = uVar5;
      local_d8 = uVar6;
      uStack_d0 = uVar7;
      local_c8 = uVar8;
      uStack_c0 = uVar9;
      (*(code *)(&switchD_143c3d4dc::switchdataD_14aff4ad0)[uVar9 & 0xff])(&local_f8);
    }
  }
LAB_1410de933:
  if ((local_70 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1410de982 FUN_1410de982 body=118 status=ok
// SIG undefined FUN_1410de982(void)

undefined4 FUN_1410de982(longlong param_1,undefined4 *param_2,uint param_3)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  undefined4 uVar4;
  uint *puVar5;
  
  if (param_2[2] == 0) {
    uVar4 = *param_2;
  }
  else {
    uVar4 = FUN_144a78877(*param_2,param_2[2]);
  }
  iVar3 = FUN_1410af862((longlong *)(param_1 + 0x18),uVar4,param_2);
  if (iVar3 == -1) {
    uVar4 = 0;
  }
  else {
    lVar2 = *(longlong *)(param_1 + 0x18);
    uVar4 = 0;
    if ((lVar2 + (longlong)iVar3 * 0x70 != 0) &&
       (puVar5 = (uint *)(lVar2 + (longlong)iVar3 * 0x70 + 0x10), puVar5 != (uint *)0x0)) {
      uVar1 = *puVar5;
      uVar4 = CONCAT31((int3)(uVar1 >> 8),(uVar1 >> (param_3 & 0x1f) & 1) != 0);
    }
  }
  return uVar4;
}



// FUNCTION 1410de9f8 FUN_1410de9f8 body=76 status=ok
// SIG undefined FUN_1410de9f8(void)

undefined8 FUN_1410de9f8(undefined8 param_1,undefined8 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_1410dea44(param_2);
  if ((lVar1 != 0) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x40), UNRECOVERED_JUMPTABLE != (code *)0x0)) {
    plVar2 = (longlong *)(lVar1 + 0x60);
    if (*(longlong **)(lVar1 + 0x50) != (longlong *)0x0) {
      plVar2 = *(longlong **)(lVar1 + 0x50);
    }
    uVar3 = (**(code **)(*plVar2 + 8))(plVar2);
                    /* WARNING: Could not recover jumptable at 0x0001410dea39. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (*UNRECOVERED_JUMPTABLE)(uVar3);
    return uVar3;
  }
  return 0;
}



// FUNCTION 1410dea44 FUN_1410dea44 body=191 status=ok
// SIG undefined FUN_1410dea44(void)

longlong FUN_1410dea44(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  undefined *puVar7;
  
  FUN_1410deb04();
  lVar3 = *param_1;
  if (DAT_14cb758d8 != DAT_14cb75904) {
    uVar4 = (uint)((ulonglong)lVar3 >> 0x10);
    uVar6 = (uint)lVar3 & 0xffff;
    puVar7 = &DAT_14cb75908;
    if (DAT_14cb75910 != (undefined *)0x0) {
      puVar7 = DAT_14cb75910;
    }
    iVar2 = *(int *)(puVar7 + (ulonglong)
                              (DAT_14cb75918 - 1U &
                              (int)((ulonglong)lVar3 >> 0x20) + ((uint)lVar3 << 0x10 | uVar6) +
                              (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar6 >> 4)) * 4);
    while (iVar2 != -1) {
      plVar1 = (longlong *)(DAT_14cb758d0 + (longlong)iVar2 * 0x18);
      if (*plVar1 == lVar3) {
        if (plVar1 + 1 != (longlong *)0x0 && plVar1 != (longlong *)0x0) {
          return plVar1[1];
        }
        break;
      }
      iVar2 = (int)plVar1[2];
    }
  }
  lVar5 = DAT_14cb758c8;
  if (lVar3 != 0) {
    lVar5 = 0;
  }
  return lVar5;
}



// FUNCTION 1410deb04 FUN_1410deb04 body=152 status=ok
// SIG undefined FUN_1410deb04(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1410deb04(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb75920) {
    FUN_144b3d300(&DAT_14cb75920);
    if (DAT_14cb75920 == -1) {
      DAT_14cb758f0 = 0;
      DAT_14cb758f8 = 0;
      DAT_14cb758d0 = 0;
      _DAT_14cb758d8 = 0;
      _DAT_14cb758fc = 0xffffffff00000080;
      DAT_14cb75904 = 0;
      DAT_14cb75910 = 0;
      DAT_14cb75918 = 0;
      atexit(FUN_143cd948d);
      _Init_thread_footer(&DAT_14cb75920);
      return;
    }
  }
  return;
}



// FUNCTION 1410deb9c FUN_1410deb9c body=150 status=ok
// SIG undefined FUN_1410deb9c(void)

void FUN_1410deb9c(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  code **local_38;
  code *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = FUN_1410dec34();
  if (lVar1 != 0) {
    lVar2 = FUN_1410decb6();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      local_38 = &local_28;
      local_28 = FUN_140c63b3a;
      local_20 = 0;
      lVar1 = FUN_1410ded9c(lVar1,*(undefined8 *)(param_1 + 0x70),*(undefined1 *)(param_1 + 0x78),
                            param_1);
      *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(lVar1 + 8);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410dec34 FUN_1410dec34 body=129 status=ok
// SIG undefined FUN_1410dec34(void)

longlong FUN_1410dec34(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if (*(int *)(param_1 + 0x54) != 0) {
    uVar1 = *(uint *)(param_1 + 0x50);
    if ((int)uVar1 < 0) {
      return 0;
    }
    if (DAT_14c9647dc <= (int)uVar1) {
      return 0;
    }
    plVar3 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar3 != (longlong *)0x0) && ((int)plVar3[2] == *(int *)(param_1 + 0x54))) &&
       ((*(uint *)(plVar3 + 1) & 0x10200000) == 0)) {
      if ((*(uint *)(plVar3 + 1) & 0x10200000) == 0) {
        lVar2 = *plVar3;
      }
      else {
        lVar2 = 0;
      }
      lVar2 = *(longlong *)(lVar2 + 0x188);
      if (DAT_14c950c29 != '\x01') {
        return lVar2;
      }
      if (lVar2 == 0) {
        return 0;
      }
      FUN_1456cec3c(lVar2);
      return lVar2;
    }
  }
  return 0;
}



// FUNCTION 1410decb6 FUN_1410decb6 body=228 status=ok
// SIG undefined FUN_1410decb6(void)

longlong FUN_1410decb6(void)

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
  if (DAT_14cb91448 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14644b404;
    local_38 = &LAB_1489f2055;
    local_40 = FUN_1418b6fb4;
    local_48 = L"Input";
    local_50 = 0;
    local_58 = 0x1000000c;
    local_60 = 8;
    local_68 = 0x1e0;
    FUN_14081cfa3(L"/Script/GbxEnhancedInput",L"GbxEnhancedInputComponent",&DAT_14cb91448,
                  &DAT_1489f2054);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb91448;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410ded9c FUN_1410ded9c body=425 status=ok
// SIG undefined FUN_1410ded9c(void)

undefined8 *
FUN_1410ded9c(longlong param_1,longlong param_2,undefined1 param_3,undefined8 param_4,
             undefined8 *param_5)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong lVar7;
  int iVar8;
  bool bVar9;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar3 = *param_5;
  uVar1 = *(undefined4 *)(param_5 + 1);
  puVar5 = (undefined8 *)FUN_14001cc68(0x38,0x10);
  iVar4 = DAT_14c762760 + 1;
  *(int *)(puVar5 + 1) = DAT_14c762760;
  DAT_14c762760 = iVar4;
  *puVar5 = &PTR_LAB_14acd0ae0;
  *(undefined4 *)((longlong)puVar5 + 0x14) = 0;
  if (param_2 == 0) {
    *(undefined4 *)(puVar5 + 2) = 0;
    iVar4 = 0;
  }
  else {
    uVar2 = *(uint *)(param_2 + 0xc);
    *(uint *)(puVar5 + 2) = uVar2;
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar7 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar7 = 0;
    }
    iVar4 = *(int *)(lVar7 + 0x10);
    if (*(int *)(lVar7 + 0x10) == 0) {
      LOCK();
      iVar4 = DAT_14c964868 + 1;
      UNLOCK();
      iVar8 = DAT_14c964868 + 1;
      bVar9 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar4;
      if (bVar9) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar8);
      }
      LOCK();
      iVar4 = *(int *)(lVar7 + 0x10);
      bVar9 = iVar4 == 0;
      if (bVar9) {
        *(int *)(lVar7 + 0x10) = iVar8;
        iVar4 = 0;
      }
      UNLOCK();
      if (bVar9) {
        iVar4 = iVar8;
      }
    }
  }
  *(int *)((longlong)puVar5 + 0x14) = iVar4;
  *(undefined1 *)(puVar5 + 3) = param_3;
  *puVar5 = &PTR_FUN_14b47b110;
  puVar5[4] = 0;
  puVar5[5] = 0;
  *(undefined1 *)(puVar5 + 6) = 0;
  uVar6 = FUN_14063f168(puVar5 + 4);
  local_58 = uVar3;
  local_50 = uVar1;
  FUN_1410def46(uVar6,param_4);
  iVar4 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar4 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar4 + 1U) {
    FUN_141053524((longlong *)(param_1 + 0x198),iVar4);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar4 * 8) = puVar5;
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar5;
}



// FUNCTION 1410def46 FUN_1410def46 body=423 status=ok
// SIG undefined FUN_1410def46(void)

void FUN_1410def46(longlong *param_1,longlong param_2,undefined8 *param_3)

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
  if ((int)param_1[1] != 4) {
    FUN_1446efa72(param_1,0,4,0x10);
    *(undefined4 *)(param_1 + 1) = 4;
  }
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x28);
  if (plVar6 == (longlong *)0x0) {
LAB_1410df01c:
    *puVar5 = &PTR_LAB_14b47b160;
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
    *puVar5 = &PTR_FUN_14b99e7a0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_1410df01c;
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
    uVar7 = *(undefined8 *)(param_2 + 0x20);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_14b47b160;
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
    *puVar5 = &PTR_FUN_14b99e7a0;
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
                    /* WARNING: Could not recover jumptable at 0x0001410df0d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar6 + 0x10))(plVar6);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1410df16c FUN_1410df16c body=221 status=ok
// SIG undefined FUN_1410df16c(void)

longlong FUN_1410df16c(void)

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
  if (DAT_14cabb9a0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1477e2a1d;
    local_40 = FUN_146361f83;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000008;
    local_60 = 8;
    local_68 = 0x208;
    FUN_14081cfa3(L"/Script/AudioMixer",L"QuartzClockHandle",&DAT_14cabb9a0,FUN_146361f5c);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cabb9a0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410df250 FUN_1410df250 body=221 status=ok
// SIG undefined FUN_1410df250(void)

longlong FUN_1410df250(void)

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
  if (DAT_14cb1e810 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147e9e4b3;
    local_40 = FUN_146427ec1;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x12000001;
    local_60 = 8;
    local_68 = 0x90;
    FUN_14081cfa3(L"/Script/AIModule",L"PawnAction",&DAT_14cb1e810,FUN_146427e9a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb1e810;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410df32e FUN_1410df32e body=96 status=ok
// SIG undefined FUN_1410df32e(void)

void FUN_1410df32e(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0x1c) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0x1e) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *param_1 = &PTR_FUN_14b1b5150;
  *(undefined1 *)(param_1 + 7) = 0;
  *(undefined4 *)(param_1 + 8) = 1;
  param_1[9] = 0;
  *(undefined2 *)(param_1 + 0xd) = 4;
  *(undefined4 *)(param_1 + 10) = 0x41700000;
  *(undefined1 *)(param_1 + 0xe) = 3;
  *(char *)(param_1 + 0xf) = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  return;
}



// FUNCTION 1410df38e FUN_1410df38e body=254 status=ok
// SIG undefined FUN_1410df38e(void)

void FUN_1410df38e(longlong param_1,longlong *param_2)

{
  void *_Src;
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_68 [32];
  void *local_48;
  int local_40;
  undefined4 local_3c;
  undefined1 local_38;
  ulonglong local_30;
  
  _Src = DAT_14cbe56b8;
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = (void *)0x0;
  lVar3 = (longlong)DAT_14cbe56c0;
  local_40 = DAT_14cbe56c0;
  if (lVar3 == 0) {
    local_3c = 0;
  }
  else {
    FUN_1446dd670(&local_48,DAT_14cbe56c0,0);
    memcpy(local_48,_Src,lVar3 * 2);
  }
  local_38 = 0;
  plVar2 = (longlong *)(**(code **)(*param_2 + 8))(param_2,0);
  (**(code **)(*plVar2 + 0x38))(plVar2);
  FUN_1410df48d(plVar2,&local_48);
  (**(code **)(*plVar2 + 0x48))(plVar2,&local_48);
  cVar1 = (**(code **)(*param_2 + 0x30))(param_2);
  if (cVar1 == '\0') {
    (**(code **)(param_1 + 0x10))(*(undefined8 *)(param_1 + 8),&local_48);
    (**(code **)(*param_2 + 0x20))(param_2);
  }
  if (local_48 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410df48d FUN_1410df48d body=243 status=ok
// SIG undefined FUN_1410df48d(void)

void FUN_1410df48d(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined1 auStack_78 [32];
  longlong *local_58;
  undefined8 local_50;
  undefined **local_48 [3];
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  (**(code **)(*param_1 + 0x10))(param_1,&local_58,"FOakUICursorEventObject",param_2);
  plVar1 = local_58;
  if (local_58 != (longlong *)0x0) {
    cohtml::Property::Property((Property *)local_48,"element_type",true);
    local_48[0] = &PTR_FUN_14b9aae40;
    local_30 = 0;
    (**(code **)(*plVar1 + 0x18))(plVar1,local_50,(Property *)local_48);
    cohtml::Property::~Property((Property *)local_48);
    cohtml::Property::Property((Property *)local_48,"has_friction",true);
    local_48[0] = &PTR_FUN_14b9aaed0;
    local_30 = 0x10;
    (**(code **)(*local_58 + 0x18))(local_58,local_50,(Property *)local_48);
    cohtml::Property::~Property((Property *)local_48);
  }
  cohtml::TypeDescription::~TypeDescription((TypeDescription *)&local_58);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410df582 FUN_1410df582 body=414 status=ok
// SIG undefined FUN_1410df582(void)

void FUN_1410df582(undefined8 param_1,undefined8 *param_2)

{
  void *_Src;
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined2 *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  code **local_70;
  undefined1 *local_68;
  code *local_60;
  void *local_50;
  int local_48;
  undefined4 local_44;
  undefined1 local_40;
  code *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar1 = FUN_1407f492e();
  if (lVar1 != 0) {
    if (DAT_14cbadd90 == 0) {
      local_70 = &local_38;
      local_38 = FUN_141030f22;
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
    if ((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) {
      lVar1 = FUN_140e16172(lVar1);
      if (lVar1 != 0) {
        local_50 = (void *)0x0;
        local_48 = *(int *)(param_2 + 1);
        lVar2 = (longlong)local_48;
        _Src = (void *)*param_2;
        if (lVar2 == 0) {
          local_44 = 0;
        }
        else {
          FUN_1446dd670(&local_50,local_48,0);
          memcpy(local_50,_Src,lVar2 * 2);
        }
        local_40 = *(undefined1 *)(param_2 + 2);
        FUN_1410df722(lVar1);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410df722 FUN_1410df722 body=389 status=ok
// SIG undefined FUN_1410df722(void)

void FUN_1410df722(longlong param_1,longlong *param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((((*(char *)(param_1 + 0x9c) == '\x01') && (*(int *)(param_1 + 0xc4) != 0)) &&
      (uVar2 = *(uint *)(param_1 + 0xc0), -1 < (int)uVar2)) &&
     ((((int)uVar2 < DAT_14c9647dc &&
       (plVar5 = (longlong *)
                 ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
       plVar5 != (longlong *)0x0)) &&
      (((int)plVar5[2] == *(int *)(param_1 + 0xc4) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))))
     )) {
    if ((*(uint *)(plVar5 + 1) & 0x10200000) == 0) {
      lVar4 = *plVar5;
    }
    else {
      lVar4 = 0;
    }
    if (*(char *)(lVar4 + 0x170) == '\x01') {
      if ((char)param_2[2] == '\x01') {
        *(undefined4 *)(param_1 + 0x110) = *(undefined4 *)(param_1 + 0x90);
      }
      iVar3 = (int)param_2[1] + -1;
      if ((int)param_2[1] == 0) {
        iVar3 = 0;
      }
      FUN_1402980a2(param_1 + 0x100,*param_2,iVar3);
      FUN_148e36072(param_1 + 0x48,param_2);
      FUN_1449027d0(param_1,&local_40);
      lVar4 = *(longlong *)(local_40 + 0x280);
      AcquireSRWLockExclusive((PSRWLOCK)(lVar4 + 0x20));
      *(int *)(lVar4 + 0x18) = *(int *)(lVar4 + 0x18) + 1;
      if (local_38 != (longlong *)0x0) {
        LOCK();
        plVar5 = local_38 + 1;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)*plVar5 == 0) {
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
      iVar3 = FUN_1412fabe8(lVar4,&DAT_14cbd5b50);
      if (iVar3 != -1) {
        *(int *)(lVar4 + 0x10) = *(int *)(lVar4 + 0x10) + 1;
      }
      FUN_140da76fe(param_1,&DAT_14cbd6108);
      ReleaseSRWLockExclusive((PSRWLOCK)(lVar4 + 0x20));
    }
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410df8a8 FUN_1410df8a8 body=138 status=ok
// SIG undefined FUN_1410df8a8(void)

undefined8 FUN_1410df8a8(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  ulonglong *puVar1;
  undefined1 auStack_48 [36];
  uint local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  puVar1 = (ulonglong *)param_2[1];
  if (puVar1[1] < *puVar1 + 4) {
    local_24 = 0;
    (**(code **)(*param_2 + 0x170))(param_2,&local_24,4);
    if (1 < local_24) {
      FUN_14572541c(param_2);
    }
  }
  else {
    *puVar1 = *puVar1 + 4;
  }
  FUN_1410df933(param_2,param_3);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410df933 FUN_1410df933 body=168 status=ok
// SIG undefined FUN_1410df933(void)

longlong * FUN_1410df933(longlong *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2,4);
    }
    else {
      thunk_FUN_14572512c(param_1,param_2);
    }
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  param_2 = param_2 + 1;
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2,4);
    }
    else {
      thunk_FUN_14572512c(param_1,param_2);
    }
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  return param_1;
}



// FUNCTION 1410df9dc FUN_1410df9dc body=40 status=ok
// SIG undefined FUN_1410df9dc(void)

undefined8 FUN_1410df9dc(undefined8 param_1,int param_2)

{
  FUN_1410dfa04();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1410dfa04 FUN_1410dfa04 body=57 status=ok
// SIG undefined FUN_1410dfa04(void)

void FUN_1410dfa04(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a3b2810;
  FUN_1410dfa3d(param_1[5],*(undefined4 *)(param_1 + 6));
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 1410dfa3d FUN_1410dfa3d body=506 status=ok
// SIG undefined FUN_1410dfa3d(void)

void FUN_1410dfa3d(longlong param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 0xc0;
    do {
      *(undefined4 *)(param_1 + 0xa8) = 0;
      if (*(longlong *)(param_1 + 0xa0) != 0) {
        FUN_1400020a8();
      }
      *(undefined4 *)(param_1 + 0x68) = 0;
      if (*(int *)(param_1 + 0x6c) != 0) {
        FUN_14472eb64((longlong *)(param_1 + 0x60),0);
      }
      *(undefined8 *)(param_1 + 0x90) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x88) = 0;
      if (0x80 < *(uint *)(param_1 + 0x8c)) {
        *(undefined4 *)(param_1 + 0x8c) = 0x80;
        FUN_1446efbd8(param_1 + 0x70);
      }
      if (*(longlong *)(param_1 + 0x80) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(param_1 + 0x60) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(param_1 + 0x48) != 0) {
        FUN_1400020a8();
      }
      *(undefined4 *)(param_1 + 0x38) = 0;
      if (*(longlong *)(param_1 + 0x30) != 0) {
        FUN_1400020a8();
      }
      *(undefined4 *)(param_1 + -8) = 0;
      if (*(int *)(param_1 + -4) != 0) {
        FUN_14472eb64((longlong *)(param_1 + -0x10),0);
      }
      *(undefined8 *)(param_1 + 0x20) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x18) = 0;
      if (0x80 < *(uint *)(param_1 + 0x1c)) {
        *(undefined4 *)(param_1 + 0x1c) = 0x80;
        FUN_1446efbd8(param_1);
      }
      if (*(longlong *)(param_1 + 0x10) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(param_1 + -0x10) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(param_1 + -0x28) != 0) {
        FUN_1400020a8();
      }
      *(undefined4 *)(param_1 + -0x40) = 0;
      if (*(longlong *)(param_1 + -0x48) != 0) {
        FUN_1400020a8();
      }
      FUN_1407b1382(param_1 + -0x88);
      if (*(longlong *)(param_1 + -0xa0) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(param_1 + -0xb8) != 0) {
        FUN_1400020a8();
      }
      param_1 = param_1 + 0x1b8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1410dfc4e FUN_1410dfc4e body=522 status=ok
// SIG undefined FUN_1410dfc4e(void)

void FUN_1410dfc4e(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined1 auStack_c8 [32];
  undefined2 *local_a8;
  undefined8 *local_a0;
  undefined4 local_98;
  undefined2 local_90 [2];
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_80;
  byte local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  iVar2 = *(int *)((longlong)param_1 + 0x10c);
  iVar4 = (**(code **)(*param_1 + 0x2c0))();
  if (iVar2 < iVar4) {
    lVar5 = (**(code **)(*param_1 + 0x180))(param_1);
    if (*(longlong *)(lVar5 + 0x1f0) == 0) {
      puVar7 = (undefined8 *)(lVar5 + 0x458);
    }
    else {
      puVar7 = (undefined8 *)(*(longlong *)(lVar5 + 0x1f0) + 0xf0);
    }
    uVar3 = *puVar7;
    local_a0 = (undefined8 *)0x0;
    local_98 = 0;
    FUN_1446efa72(&local_a0,0,3,0x10);
    puVar7 = local_a0;
    local_98 = 3;
    *local_a0 = &PTR_LAB_14a1c8830;
    LOCK();
    UNLOCK();
    lVar6 = DAT_14c758608 + 1;
    lVar5 = DAT_14c758608 + 1;
    if (lVar6 == 0) {
      LOCK();
      UNLOCK();
      lVar6 = DAT_14c758608 + 2;
      lVar5 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar5;
    local_a0[2] = lVar6;
    *local_a0 = &PTR_FUN_14b9dedf0;
    local_a0[3] = 0;
    FUN_14485c47a(local_a0 + 3,param_1);
    puVar7[4] = FUN_145e0c3c0;
    local_88 = 0;
    local_80 = 0;
    FUN_14487d8d8(&local_88,&local_a0);
    local_48 = 1;
    local_a8 = local_90;
    local_90[0] = 0;
    local_8c = 0xbf800000;
    FUN_1406f4044(uVar3,param_1 + 0x26,&local_88,0x3dcccccd);
    (*(code *)(&PTR_LAB_14a1c87a0)[local_48])(&local_88);
    FUN_1449db362(&local_a0);
  }
  else if (param_1[0x26] != 0) {
    plVar1 = param_1 + 0x26;
    lVar5 = (**(code **)(*param_1 + 0x180))(param_1);
    if (*(longlong *)(lVar5 + 0x1f0) == 0) {
      puVar7 = (undefined8 *)(lVar5 + 0x458);
    }
    else {
      puVar7 = (undefined8 *)(*(longlong *)(lVar5 + 0x1f0) + 0xf0);
    }
    uVar3 = *puVar7;
    lVar5 = FUN_144a61814(uVar3,plVar1);
    if (lVar5 != 0) {
      FUN_1405a424c(uVar3,*plVar1);
    }
    *plVar1 = 0;
  }
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410dfe5a FUN_1410dfe5a body=1378 status=ok
// SIG undefined FUN_1410dfe5a(void)

void FUN_1410dfe5a(longlong param_1,longlong param_2,undefined8 param_3)

{
  int *piVar1;
  code *pcVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 *puVar11;
  longlong lVar12;
  undefined *puVar13;
  undefined8 uVar14;
  longlong *plVar15;
  undefined **ppuVar16;
  longlong *plVar17;
  longlong lVar18;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  undefined8 local_a0;
  longlong local_98;
  longlong local_90;
  longlong local_88;
  longlong lStack_80;
  char local_78;
  undefined7 uStack_77;
  longlong *local_68;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(char *)(param_1 + 0x178) != '\x03') goto LAB_1410e0162;
  FUN_1410e03be();
  local_88 = 0;
  lStack_80 = 0;
  uVar7 = FUN_140b1c3dc();
  lVar8 = FUN_14477b664(uVar7);
  lVar9 = FUN_140b1c3dc();
  uVar7 = FUN_140b1c3dc();
  FUN_1402d1bfa(&local_78,uVar7,param_2);
  lVar18 = CONCAT71(uStack_77,local_78);
  if (lVar18 != 0) {
    lStack_80 = 0;
  }
  local_90 = lVar18;
  lVar10 = FUN_140b1c3dc();
  if (lVar9 == 0) {
LAB_1410dff17:
    lVar10 = lVar9;
  }
  else if (lVar10 == 0) {
    lVar10 = 0;
  }
  else if ((*(int *)(lVar10 + 0x38) <= *(int *)(lVar9 + 0x38)) &&
          (*(longlong *)(*(longlong *)(lVar9 + 0x30) + (longlong)*(int *)(lVar10 + 0x38) * 8) ==
           lVar10 + 0x30)) goto LAB_1410dff17;
  if (lVar8 != lVar10) {
    lStack_80 = 0;
  }
  uVar7 = FUN_14477b664(lVar10);
  local_88 = FUN_14477b664(uVar7);
  if ((lVar18 != 0) && (local_88 != 0)) {
    lStack_80 = param_2;
  }
  uVar7 = FUN_140d72879();
  puVar11 = (undefined8 *)FUN_1410e049c(uVar7,&local_90);
  if (((param_2 != 0) && (puVar11 != (undefined8 *)0x0)) && ((longlong)*(int *)(puVar11 + 1) != 0))
  {
    plVar17 = (longlong *)*puVar11;
    lVar18 = (longlong)*(int *)(puVar11 + 1) * 0x18;
    local_a8 = param_1;
    local_a0 = param_3;
    do {
      if (plVar17[1] == 0) {
        uVar7 = FUN_140b1c3dc();
        lVar8 = FUN_14477b664(uVar7);
        plVar17[1] = lVar8;
      }
      lVar8 = local_88;
      if (local_88 == 0) {
        lVar8 = FUN_140b1c3dc();
      }
      local_98 = local_90;
      lVar8 = FUN_14477b664(lVar8);
      iVar6 = 0;
      iVar5 = 0;
      if ((lVar8 != 0) && (plVar15 = *(longlong **)(lVar8 + 0xb8), plVar15 != (longlong *)0x0)) {
        lVar9 = *plVar15;
        pcVar2 = *(code **)(lVar9 + 0x108);
        if (pcVar2 != (code *)&LAB_14478342e && pcVar2 != (code *)&LAB_144783422) {
          cVar4 = (*pcVar2)(plVar15);
          iVar5 = 0;
          if (cVar4 == '\0') goto LAB_1410e0026;
          lVar9 = *plVar15;
        }
        pcVar2 = *(code **)(lVar9 + 0x110);
        ppuVar16 = &PTR_PTR_14c763408;
        if ((pcVar2 != (code *)&LAB_144783426) &&
           (ppuVar16 = &PTR_PTR_14c75f798, pcVar2 != (code *)&LAB_144783432)) {
          ppuVar16 = (undefined **)(*pcVar2)(plVar15);
        }
        iVar5 = FUN_144aff48c(ppuVar16);
      }
LAB_1410e0026:
      lVar9 = *plVar17;
      lVar10 = plVar17[1];
      if ((lVar10 != 0) && (plVar15 = *(longlong **)(lVar10 + 0xb8), plVar15 != (longlong *)0x0)) {
        lVar12 = *plVar15;
        pcVar2 = *(code **)(lVar12 + 0x108);
        if (pcVar2 != (code *)&LAB_14478342e && pcVar2 != (code *)&LAB_144783422) {
          cVar4 = (*pcVar2)(plVar15);
          if (cVar4 == '\0') goto LAB_1410e0092;
          lVar12 = *plVar15;
        }
        pcVar2 = *(code **)(lVar12 + 0x110);
        ppuVar16 = &PTR_PTR_14c763408;
        if ((pcVar2 != (code *)&LAB_144783426) &&
           (ppuVar16 = &PTR_PTR_14c75f798, pcVar2 != (code *)&LAB_144783432)) {
          ppuVar16 = (undefined **)(*pcVar2)(plVar15);
        }
        iVar6 = FUN_144aff48c(ppuVar16);
      }
LAB_1410e0092:
      uVar7 = local_a0;
      lVar12 = local_a8;
      if ((iVar6 == iVar5) && (lVar9 == local_98)) {
        if (lVar10 != lVar8) {
          if ((lVar8 != 0) && (lVar10 != 0)) {
            iVar5 = *(int *)(lVar8 + 0x38);
            iVar6 = *(int *)(lVar10 + 0x38);
            if (((iVar5 <= iVar6) &&
                (*(longlong *)(*(longlong *)(lVar10 + 0x30) + (longlong)iVar5 * 8) == lVar8 + 0x30))
               || ((iVar6 <= iVar5 &&
                   (*(longlong *)(*(longlong *)(lVar8 + 0x30) + (longlong)iVar6 * 8) ==
                    lVar10 + 0x30)))) goto LAB_1410e0115;
          }
          goto LAB_1410e00ac;
        }
      }
      else {
LAB_1410e00ac:
        lVar8 = plVar17[1];
        if (lVar8 == 0) {
          uVar14 = FUN_140b1c3dc();
          lVar8 = FUN_14477b664(uVar14);
          plVar17[1] = lVar8;
        }
        plVar15 = (longlong *)plVar17[2];
        if (plVar15 == (longlong *)0x0) {
          if ((lVar8 != 0) && (*plVar17 != 0)) {
            plVar15 = *(longlong **)(lVar8 + 0xb8);
            if ((plVar15 == (longlong *)0x0) ||
               (cVar4 = (**(code **)(*plVar15 + 0x108))(plVar15), cVar4 == '\0')) {
              plVar17[2] = 0;
            }
            else {
              uVar14 = (**(code **)(*plVar15 + 0x110))(plVar15);
              plVar15 = (longlong *)FUN_144aff482(uVar14,plVar17);
              plVar17[2] = (longlong)plVar15;
              if (plVar15 != (longlong *)0x0) goto LAB_1410e00c6;
            }
          }
        }
        else {
LAB_1410e00c6:
          local_78 = '\0';
          local_50 = 0;
          FUN_1456bb102(&local_78,lVar12);
          uVar7 = (**(code **)(*plVar15 + 0x28))(plVar15,&local_78,uVar7);
          FUN_1410e03be(lVar12,plVar15,uVar7);
          lVar8 = DAT_14c9a3da0;
          if ((longlong)local_50 != 0) {
            lVar10 = (longlong)local_50 + -1;
            lVar9 = lVar10 * 0x10;
            FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar9),
                          *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar9));
            if (*(longlong *)(lVar8 + lVar9) != 0) {
              FUN_1400020a8();
            }
            lVar8 = DAT_14c9a3da0;
            iVar5 = (int)lVar10;
            if (DAT_14c9a3dd4 != 0) {
              *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar5;
            }
            *(undefined4 *)(lVar8 + lVar9) = 0xffffffff;
            iVar6 = -1;
            if (0 < DAT_14c9a3dd4) {
              iVar6 = DAT_14c9a3dd0;
            }
            *(int *)(lVar8 + 4 + lVar9) = iVar6;
            DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
            puVar13 = DAT_14c9a3dc0;
            if (DAT_14c9a3dc0 == (undefined *)0x0) {
              puVar13 = &DAT_14c9a3db0;
            }
            iVar6 = iVar5 + 0x1f;
            if (-1 < iVar5) {
              iVar6 = iVar5;
            }
            bVar3 = (byte)lVar10 & 0x1f;
            DAT_14c9a3dd0 = iVar5;
            *(uint *)(puVar13 + (longlong)(iVar6 >> 5) * 4) =
                 *(uint *)(puVar13 + (longlong)(iVar6 >> 5) * 4) &
                 (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
            local_50 = 0;
          }
          if ((local_78 == '\x03') && (local_68 != (longlong *)0x0)) {
            LOCK();
            piVar1 = (int *)((longlong)local_68 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*local_68 + 0x10))();
            }
          }
        }
      }
LAB_1410e0115:
      plVar17 = plVar17 + 3;
      lVar18 = lVar18 + -0x18;
    } while (lVar18 != 0);
  }
LAB_1410e0162:
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1410e03be FUN_1410e03be body=221 status=ok
// SIG undefined FUN_1410e03be(void)

void FUN_1410e03be(undefined8 param_1,longlong param_2,ulonglong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  if (param_2 != 0) {
    piVar6 = (int *)FUN_1409e484c();
    uVar8 = ~*(ulonglong *)(piVar6 + 2);
    if (param_3 < ~*(ulonglong *)(piVar6 + 2)) {
      uVar8 = param_3;
    }
    if ((uVar8 != 0) && ((char)piVar6[0x14] == '\x01')) {
      uVar1 = FUN_140d72879();
      uVar2 = FUN_140d72879();
      uVar3 = FUN_140b0af60(uVar2,param_2);
      uVar7 = FUN_140d72a52(uVar1,param_2,uVar3);
      uVar9 = uVar8 + *(longlong *)(piVar6 + 2);
      if (uVar7 <= uVar8 + *(longlong *)(piVar6 + 2)) {
        uVar9 = uVar7;
      }
      iVar5 = *piVar6;
      uVar1 = FUN_140d72879();
      iVar4 = FUN_140b0af60(uVar1,param_2);
      if ((iVar5 < iVar4) && (*(ulonglong *)(piVar6 + 8) <= uVar9)) {
        uVar1 = FUN_140d72879();
        iVar5 = FUN_1440d3f0c(uVar1,param_2,uVar9);
        if (iVar4 < iVar5) {
          iVar5 = iVar4;
        }
      }
      FUN_140d72784(param_1,param_2,uVar9,iVar5,2,1);
    }
  }
  return;
}



// FUNCTION 1410e049c FUN_1410e049c body=312 status=ok
// SIG undefined FUN_1410e049c(void)

longlong FUN_1410e049c(longlong param_1,undefined8 *param_2)

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
    lVar7 = FUN_140b1c3dc();
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
  iVar3 = FUN_1410e05d4((longlong *)(param_1 + 0x118),uVar2 >> 0xf ^ uVar9 - (uVar8 + uVar2),param_2
                       );
  if (iVar3 == -1) {
    lVar7 = 0;
  }
  else {
    lVar7 = (longlong)iVar3 * 0x30 + *(longlong *)(param_1 + 0x118);
  }
  lVar5 = lVar7 + 0x18;
  if (lVar7 == 0) {
    lVar5 = 0;
  }
  return lVar5;
}



// FUNCTION 1410e05d4 FUN_1410e05d4 body=655 status=ok
// SIG undefined FUN_1410e05d4(void)

int FUN_1410e05d4(longlong *param_1,uint param_2,longlong *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  code *pcVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 uVar12;
  undefined **ppuVar13;
  int iVar14;
  longlong lVar15;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar8 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar8 = (longlong *)param_1[8];
    }
    iVar14 = *(int *)((longlong)plVar8 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar14 != -1) {
      lVar9 = *param_1;
      do {
        lVar15 = (longlong)iVar14 * 0x30;
        plVar8 = (longlong *)(lVar9 + lVar15);
        if (*(longlong *)(lVar9 + 8 + lVar15) == 0) {
          uVar12 = FUN_140b1c3dc();
          lVar9 = FUN_14477b664(uVar12);
          plVar8[1] = lVar9;
        }
        lVar9 = param_3[1];
        if (lVar9 == 0) {
          lVar9 = FUN_140b1c3dc();
        }
        lVar1 = *param_3;
        lVar9 = FUN_14477b664(lVar9);
        iVar6 = 0;
        if ((lVar9 != 0) && (plVar2 = *(longlong **)(lVar9 + 0xb8), plVar2 != (longlong *)0x0)) {
          lVar10 = *plVar2;
          pcVar3 = *(code **)(lVar10 + 0x108);
          if (pcVar3 != (code *)&LAB_14478342e && pcVar3 != (code *)&LAB_144783422) {
            cVar5 = (*pcVar3)(plVar2);
            iVar6 = 0;
            if (cVar5 == '\0') goto LAB_1410e06cc;
            lVar10 = *plVar2;
          }
          pcVar3 = *(code **)(lVar10 + 0x110);
          ppuVar13 = &PTR_PTR_14c763408;
          if ((pcVar3 != (code *)&LAB_144783426) &&
             (ppuVar13 = &PTR_PTR_14c75f798, pcVar3 != (code *)&LAB_144783432)) {
            ppuVar13 = (undefined **)(*pcVar3)(plVar2);
          }
          iVar6 = FUN_144aff48c(ppuVar13);
        }
LAB_1410e06cc:
        lVar10 = *plVar8;
        lVar4 = plVar8[1];
        iVar7 = 0;
        if ((lVar4 != 0) &&
           (plVar8 = *(longlong **)(lVar4 + 0xb8), iVar7 = 0, plVar8 != (longlong *)0x0)) {
          lVar11 = *plVar8;
          pcVar3 = *(code **)(lVar11 + 0x108);
          if (pcVar3 != (code *)&LAB_14478342e && pcVar3 != (code *)&LAB_144783422) {
            cVar5 = (*pcVar3)(plVar8);
            if (cVar5 == '\0') goto LAB_1410e0734;
            lVar11 = *plVar8;
          }
          pcVar3 = *(code **)(lVar11 + 0x110);
          ppuVar13 = &PTR_PTR_14c763408;
          if ((pcVar3 != (code *)&LAB_144783426) &&
             (ppuVar13 = &PTR_PTR_14c75f798, pcVar3 != (code *)&LAB_144783432)) {
            ppuVar13 = (undefined **)(*pcVar3)(plVar8);
          }
          iVar7 = FUN_144aff48c(ppuVar13);
        }
LAB_1410e0734:
        if ((iVar7 == iVar6) && (lVar10 == lVar1)) {
          if (lVar4 == lVar9) {
            return iVar14;
          }
          if ((lVar9 != 0) && (lVar4 != 0)) {
            iVar6 = *(int *)(lVar9 + 0x38);
            iVar7 = *(int *)(lVar4 + 0x38);
            if ((iVar6 <= iVar7) &&
               (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar6 * 8) == lVar9 + 0x30)) {
              return iVar14;
            }
            if ((iVar7 <= iVar6) &&
               (*(longlong *)(*(longlong *)(lVar9 + 0x30) + (longlong)iVar7 * 8) == lVar4 + 0x30)) {
              return iVar14;
            }
          }
        }
        lVar9 = *param_1;
        iVar14 = *(int *)(lVar9 + 0x28 + lVar15);
      } while (iVar14 != -1);
    }
  }
  return -1;
}



// FUNCTION 1410e0864 FUN_1410e0864 body=40 status=ok
// SIG undefined FUN_1410e0864(void)

undefined8 FUN_1410e0864(undefined8 param_1,int param_2)

{
  FUN_1410e088c();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1410e088c FUN_1410e088c body=114 status=ok
// SIG undefined FUN_1410e088c(void)

void FUN_1410e088c(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a8d5300;
  param_1[5] = &PTR_FUN_14a8d55a0;
  if (*(char *)((longlong)param_1 + 0x87) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x87) = 0;
  }
  plVar3 = (longlong *)param_1[0xc];
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
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 1410e08fe FUN_1410e08fe body=687 status=ok
// SIG undefined FUN_1410e08fe(void)

ulonglong FUN_1410e08fe(longlong param_1)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  undefined1 uVar5;
  int iVar6;
  uint *puVar7;
  undefined8 uVar8;
  longlong *plVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  undefined8 unaff_RDI;
  undefined7 uVar15;
  ulonglong uVar14;
  longlong lVar16;
  longlong lVar17;
  uint uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  
  iVar2 = *(int *)(param_1 + 0x48);
  uVar15 = (undefined7)((ulonglong)unaff_RDI >> 8);
  if (iVar2 == 0) {
    uVar20 = 1;
    uVar19 = 0;
    iVar6 = 0;
    iVar13 = 0;
  }
  else {
    puVar7 = *(uint **)(param_1 + 0x40);
    if (*(uint **)(param_1 + 0x40) == (uint *)0x0) {
      puVar7 = (uint *)(param_1 + 0x30);
    }
    uVar18 = *puVar7;
    if (uVar18 == 0) {
      iVar6 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar6 = iVar2 + -1;
      }
      uVar19 = 0;
      uVar20 = (ulonglong)(uint)(iVar6 >> 5);
      if (iVar6 >> 5 < 1) {
        uVar20 = uVar19;
      }
      iVar13 = 0;
      do {
        if (uVar20 == uVar19) goto LAB_1410e0b31;
        iVar13 = iVar13 + 0x20;
        uVar18 = puVar7[uVar19 + 1];
        uVar19 = uVar19 + 1;
      } while (uVar18 == 0);
    }
    else {
      uVar19 = 0;
      iVar13 = 0;
    }
    uVar20 = (ulonglong)(-uVar18 & uVar18);
    uVar14 = uVar20 * 2 + 1;
    lVar16 = 0x3f;
    if (uVar14 != 0) {
      for (; uVar14 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    iVar6 = (iVar13 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar6) {
      iVar6 = iVar2;
    }
  }
  if (iVar6 == iVar2) {
LAB_1410e0b31:
    uVar14 = CONCAT71(uVar15,1);
  }
  else {
    uVar18 = 0xffffffff;
    uVar14 = CONCAT71(uVar15,1);
    do {
      lVar16 = *(longlong *)(param_1 + 0x20) + (longlong)iVar6 * 0x28;
      lVar17 = *(longlong *)(lVar16 + 0x10);
      if (lVar17 == 0) {
        uVar8 = FUN_145cd6c5a();
        lVar17 = FUN_14477b664(uVar8);
        *(longlong *)(lVar16 + 0x10) = lVar17;
      }
      plVar9 = *(longlong **)(lVar16 + 0x18);
      if (plVar9 == (longlong *)0x0) {
        if ((lVar17 != 0) && (*(longlong *)(lVar16 + 8) != 0)) {
          plVar9 = *(longlong **)(lVar17 + 0xb8);
          if ((plVar9 == (longlong *)0x0) ||
             (cVar4 = (**(code **)(*plVar9 + 0x108))(plVar9), cVar4 == '\0')) {
            *(undefined8 *)(lVar16 + 0x18) = 0;
          }
          else {
            uVar8 = (**(code **)(*plVar9 + 0x110))(plVar9);
            plVar9 = (longlong *)FUN_144aff482(uVar8,(longlong *)(lVar16 + 8));
            *(longlong **)(lVar16 + 0x18) = plVar9;
            if (plVar9 != (longlong *)0x0) goto LAB_1410e09d3;
          }
        }
      }
      else {
LAB_1410e09d3:
        if ((char)plVar9[3] == '\0') {
          uVar5 = (**(code **)(*plVar9 + 0x70))(plVar9);
          *(undefined1 *)(plVar9 + 3) = uVar5;
        }
        uVar14 = 0;
      }
      uVar18 = uVar18 & ~(uint)uVar20;
      puVar7 = *(uint **)(param_1 + 0x40);
      if (*(uint **)(param_1 + 0x40) == (uint *)0x0) {
        puVar7 = (uint *)(param_1 + 0x30);
      }
      iVar3 = *(int *)(param_1 + 0x48);
      iVar6 = (int)uVar19;
      lVar16 = (longlong)iVar6;
      uVar12 = puVar7[lVar16] & uVar18;
      if (uVar12 == 0) {
        iVar10 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar10 = iVar3 + -1;
        }
        iVar10 = iVar10 >> 5;
        iVar13 = iVar13 + 0x20;
        iVar11 = iVar10;
        if (iVar10 < iVar6) {
          iVar11 = iVar6;
        }
        if (iVar6 < iVar10) {
          lVar17 = 0;
          do {
            uVar12 = puVar7[lVar16 + lVar17 + 1];
            if (uVar12 != 0) {
              uVar19 = (ulonglong)(iVar6 + (int)lVar17 + 1);
              uVar18 = 0xffffffff;
              goto LAB_1410e0a52;
            }
            iVar13 = iVar13 + 0x20;
            lVar17 = lVar17 + 1;
          } while (iVar11 - lVar16 != lVar17);
          uVar18 = 0xffffffff;
          iVar6 = iVar11;
        }
        uVar19 = (ulonglong)(iVar6 + 1);
        iVar6 = iVar3;
      }
      else {
LAB_1410e0a52:
        uVar20 = (ulonglong)(-uVar12 & uVar12);
        uVar1 = uVar20 * 2 + 1;
        lVar16 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar16 == 0; lVar16 = lVar16 + -1) {
          }
        }
        iVar6 = (iVar13 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
        if (iVar3 <= iVar6) {
          iVar6 = iVar3;
        }
      }
    } while (iVar6 != iVar2);
  }
  return uVar14 & 0xffffff01;
}



// FUNCTION 1410e0bae FUN_1410e0bae body=1252 status=ok
// SIG undefined FUN_1410e0bae(void)

bool FUN_1410e0bae(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  float fVar3;
  char cVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong lVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auStack_118 [32];
  undefined1 local_f8;
  int local_f0;
  undefined8 local_e8 [4];
  double local_c8;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_118;
  plVar6 = (longlong *)FUN_140257578(param_1 + 0x128);
  if (plVar6 != (longlong *)0x0) {
    lVar1 = param_1 + 0xa0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    FUN_1410e1094(lVar1);
    uVar7 = FUN_140257578(param_1 + 0x128);
    FUN_1409cd860(uVar7,local_e8,0,0x7f7fffff);
    puVar10 = local_e8;
    puVar12 = (undefined8 *)(param_1 + 0x40);
    for (lVar9 = 0xc; lVar9 != 0; lVar9 = lVar9 + -1) {
      *puVar12 = *puVar10;
      puVar10 = puVar10 + 1;
      puVar12 = puVar12 + 1;
    }
    lVar9 = FUN_140c1dfa2(plVar6,local_e8);
    if (lVar9 == 0) {
      uVar14 = (**(code **)(*plVar6 + 0x2b0))(plVar6);
    }
    else {
      if (*(char *)(lVar9 + 0x19) == '\x02') {
        fVar17 = *(float *)(lVar9 + 0x24) * *(float *)(lVar9 + 0x20) + *(float *)(lVar9 + 0x1c);
      }
      else if (*(char *)(lVar9 + 0x19) == '\x01') {
        fVar17 = *(float *)(lVar9 + 0x1c) + *(float *)(lVar9 + 0x24);
      }
      else {
        fVar17 = *(float *)(lVar9 + 0x24);
      }
      *(float *)(param_1 + 0x28) = fVar17;
      uVar14 = FUN_140c1df26(lVar9);
    }
    *(undefined4 *)(param_1 + 0x2c) = uVar14;
    lVar9 = FUN_1410e1369(plVar6);
    if (lVar9 == 0) {
      fVar15 = (float)(**(code **)(*plVar6 + 0x2b0))(plVar6);
      fVar15 = fVar15 * 0.5;
      *(float *)(param_1 + 0x30) = fVar15;
      fVar17 = fVar15;
    }
    else {
      if (*(char *)(lVar9 + 0x19) == '\x02') {
        fVar17 = *(float *)(lVar9 + 0x24) * *(float *)(lVar9 + 0x20) + *(float *)(lVar9 + 0x1c);
      }
      else if (*(char *)(lVar9 + 0x19) == '\x01') {
        fVar17 = *(float *)(lVar9 + 0x1c) + *(float *)(lVar9 + 0x24);
      }
      else {
        fVar17 = *(float *)(lVar9 + 0x24);
      }
      *(float *)(param_1 + 0x30) = fVar17;
      fVar15 = (float)FUN_140c1df26(lVar9);
      fVar15 = fVar15 + fVar17;
      fVar17 = *(float *)(param_1 + 0x30);
    }
    *(float *)(param_1 + 0x34) = fVar15;
    FUN_1409cd860(plVar6,local_e8,0,fVar17);
    *(float *)(param_1 + 0x20) = (float)local_c8;
    FUN_1409cd860(plVar6,local_e8,*(undefined4 *)(param_1 + 0x34),0x7f7fffff);
    *(float *)(param_1 + 0x24) = (float)local_c8;
    lVar9 = FUN_1402576f0();
    if ((*(int *)(plVar6[2] + 0x38) < *(int *)(lVar9 + 0x38)) ||
       (*(longlong *)(*(longlong *)(plVar6[2] + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) !=
        lVar9 + 0x30)) {
      lVar9 = FUN_1405b04b6();
      if ((*(int *)(lVar9 + 0x38) <= *(int *)(plVar6[2] + 0x38)) &&
         (*(longlong *)(*(longlong *)(plVar6[2] + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) ==
          lVar9 + 0x30)) {
        if ((longlong)(int)plVar6[0x23] != 0) {
          plVar13 = (longlong *)plVar6[0x22];
          plVar2 = plVar13 + (longlong)(int)plVar6[0x23] * 5;
          do {
            lVar9 = *plVar13;
            if ((lVar9 != 0) && ((longlong)*(int *)(lVar9 + 0x90) != 0)) {
              lVar11 = *(longlong *)(lVar9 + 0x88);
              lVar9 = (longlong)*(int *)(lVar9 + 0x90) * 0xb8;
              do {
                if ((*(longlong *)(lVar11 + 0x50) != 0) &&
                   (lVar5 = *(longlong *)(*(longlong *)(lVar11 + 0x50) + 0x10),
                   lVar8 = FUN_1410e10ee(), lVar5 == lVar8)) {
                  if (lVar11 != 0) goto LAB_1410e0db7;
                  break;
                }
                lVar11 = lVar11 + 0xb8;
                lVar9 = lVar9 + -0xb8;
              } while (lVar9 != 0);
            }
            plVar13 = plVar13 + 5;
          } while (plVar13 != plVar2);
        }
      }
    }
    else if ((longlong)(int)plVar6[0x12] != 0) {
      lVar11 = plVar6[0x11];
      lVar9 = (longlong)(int)plVar6[0x12] * 0xb8;
      do {
        if ((*(longlong *)(lVar11 + 0x50) != 0) &&
           (lVar5 = *(longlong *)(*(longlong *)(lVar11 + 0x50) + 0x10), lVar8 = FUN_1410e10ee(),
           lVar5 == lVar8)) {
          if (lVar11 != 0) goto LAB_1410e0db7;
          break;
        }
        lVar11 = lVar11 + 0xb8;
        lVar9 = lVar9 + -0xb8;
      } while (lVar9 != 0);
    }
  }
  goto LAB_1410e0ea8;
LAB_1410e0db7:
  lVar9 = *(longlong *)(lVar11 + 0x50);
  cVar4 = *(char *)(lVar11 + 0x19);
  if (cVar4 == '\0') {
    fVar17 = *(float *)(lVar11 + 0x24);
    fVar18 = *(float *)(lVar9 + 0x30) + fVar17;
    fVar15 = fVar17;
  }
  else {
    if (cVar4 == '\x01') {
      fVar17 = *(float *)(lVar11 + 0x24);
      fVar15 = *(float *)(lVar11 + 0x1c) + fVar17;
    }
    else if (cVar4 == '\x02') {
      fVar17 = *(float *)(lVar11 + 0x24);
      fVar15 = *(float *)(lVar11 + 0x20) * fVar17 + *(float *)(lVar11 + 0x1c);
    }
    else {
      fVar17 = *(float *)(lVar11 + 0x24);
      fVar15 = fVar17;
    }
    fVar18 = *(float *)(lVar9 + 0x30) + fVar15;
    if (cVar4 == '\0') {
      fVar17 = -1.0;
    }
    else {
      if (cVar4 == '\x02') {
        fVar17 = fVar17 * *(float *)(lVar11 + 0x20);
      }
      else if (cVar4 != '\x01') goto LAB_1410e0dda;
      fVar17 = fVar17 + *(float *)(lVar11 + 0x1c);
    }
  }
LAB_1410e0dda:
  fVar16 = (float)FUN_140c1df26(lVar11);
  fVar3 = *(float *)(lVar9 + 0x34);
  LOCK();
  UNLOCK();
  local_f0 = DAT_14c761474 + 1;
  local_f8 = 0;
  DAT_14c761474 = DAT_14c761474 + 1;
  FUN_1410e11d4(lVar1,local_e8,fVar15,0);
  LOCK();
  UNLOCK();
  local_f0 = DAT_14c761474 + 1;
  local_f8 = 0;
  DAT_14c761474 = DAT_14c761474 + 1;
  FUN_1410e11d4(lVar1,local_e8,fVar18,0x3f800000);
  LOCK();
  UNLOCK();
  local_f0 = DAT_14c761474 + 1;
  local_f8 = 0;
  DAT_14c761474 = DAT_14c761474 + 1;
  FUN_1410e11d4(lVar1,local_e8,(fVar17 + fVar16) - fVar3,0x3f800000);
  LOCK();
  UNLOCK();
  local_f0 = DAT_14c761474 + 1;
  local_f8 = 0;
  DAT_14c761474 = DAT_14c761474 + 1;
  FUN_1410e11d4(lVar1,local_e8,fVar17 + fVar16,0);
LAB_1410e0ea8:
  if ((local_80 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar6 != (longlong *)0x0;
}



// FUNCTION 1410e1094 FUN_1410e1094 body=89 status=ok
// SIG undefined FUN_1410e1094(void)

void FUN_1410e1094(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x80) = 0;
  if (*(int *)(param_1 + 0x84) != 0) {
    FUN_147a4e284(param_1 + 0x78,0);
  }
  FUN_14093ce12(param_1 + 8,0);
  *(undefined4 *)(param_1 + 0x60) = 0;
  if (*(int *)(param_1 + 100) == 0) {
    return;
  }
  FUN_1406525c2(param_1 + 0x58,0);
  return;
}



// FUNCTION 1410e10ee FUN_1410e10ee body=228 status=ok
// SIG undefined FUN_1410e10ee(void)

longlong FUN_1410e10ee(void)

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
  if (DAT_14cb1b5d0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_141116c3a;
    local_38 = &LAB_147e2d687;
    local_40 = FUN_141801af6;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x38;
    FUN_14081cfa3(L"/Script/GbxNav",L"AnimNotifyState_GbxNavHeight",&DAT_14cb1b5d0,&DAT_147e2d686);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb1b5d0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410e11d4 FUN_1410e11d4 body=404 status=ok
// SIG undefined FUN_1410e11d4(void)

undefined4 *
FUN_1410e11d4(longlong param_1,undefined4 *param_2,float param_3,undefined4 param_4,char param_5,
             undefined4 param_6)

{
  longlong *plVar1;
  float *pfVar2;
  float fVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  float fVar8;
  float fVar9;
  undefined1 auStack_88 [40];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = (longlong *)(param_1 + 0x78);
  uVar4 = *(uint *)(param_1 + 0x80);
  if ((int)uVar4 < 1) {
    uVar6 = 0;
  }
  else {
    uVar6 = 0;
    do {
      pfVar2 = (float *)(*plVar1 + uVar6 * 8);
      if (param_3 < *pfVar2 || param_3 == *pfVar2) goto LAB_1410e1231;
      uVar6 = uVar6 + 1;
    } while (uVar4 != uVar6);
    uVar6 = (ulonglong)uVar4;
  }
LAB_1410e1231:
  *(uint *)(param_1 + 0x80) = uVar4 + 1;
  if (*(uint *)(param_1 + 0x84) < uVar4 + 1) {
    FUN_1410e1574(plVar1,uVar4);
  }
  uVar7 = uVar6 & 0xffffffff;
  memmove((void *)(*plVar1 + uVar7 * 8 + 8),(void *)(*plVar1 + uVar7 * 8),
          (ulonglong)(uVar4 - (int)uVar6) << 3);
  lVar5 = *plVar1;
  *(float *)(lVar5 + uVar7 * 8) = param_3;
  *(undefined4 *)(lVar5 + 4 + uVar7 * 8) = param_4;
  if (param_5 == '\x01' && (int)uVar6 != 0) {
    lVar5 = *plVar1;
    fVar3 = *(float *)(lVar5 + -4 + uVar7 * 8);
    for (fVar8 = *(float *)(lVar5 + 4 + uVar7 * 8); fVar9 = fVar8 - fVar3, 180.0 < fVar9;
        fVar8 = fVar8 + -360.0) {
    }
    while (fVar9 < -180.0) {
      fVar8 = fVar8 + 360.0;
      fVar9 = fVar8 - fVar3;
    }
    *(float *)(lVar5 + 4 + uVar7 * 8) = fVar8;
  }
  FUN_1406509a6(param_1 + 8,&param_6,uVar6 & 0xffffffff);
  *param_2 = param_6;
  if ((local_60 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1410e1369 FUN_1410e1369 body=293 status=ok
// SIG undefined FUN_1410e1369(void)

longlong FUN_1410e1369(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  
  lVar3 = FUN_1402576f0();
  if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x38) < *(int *)(lVar3 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
      != lVar3 + 0x30)) {
    lVar3 = FUN_1405b04b6();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x38)) &&
       ((*(longlong *)
          (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) +
          (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30 &&
        ((longlong)*(int *)(param_1 + 0x118) != 0)))) {
      plVar6 = *(longlong **)(param_1 + 0x110);
      plVar1 = plVar6 + (longlong)*(int *)(param_1 + 0x118) * 5;
      do {
        lVar3 = *plVar6;
        if ((lVar3 != 0) && ((longlong)*(int *)(lVar3 + 0x90) != 0)) {
          lVar5 = *(longlong *)(lVar3 + 0x88);
          lVar3 = (longlong)*(int *)(lVar3 + 0x90) * 0xb8;
          do {
            if ((*(longlong *)(lVar5 + 0x50) != 0) &&
               (lVar2 = *(longlong *)(*(longlong *)(lVar5 + 0x50) + 0x10), lVar4 = FUN_1410e148e(),
               lVar2 == lVar4)) {
              if (lVar5 != 0) {
                return lVar5;
              }
              break;
            }
            lVar5 = lVar5 + 0xb8;
            lVar3 = lVar3 + -0xb8;
          } while (lVar3 != 0);
        }
        plVar6 = plVar6 + 5;
        if (plVar6 == plVar1) {
          return 0;
        }
      } while( true );
    }
  }
  else if ((longlong)*(int *)(param_1 + 0x90) != 0) {
    lVar3 = *(longlong *)(param_1 + 0x88);
    lVar5 = (longlong)*(int *)(param_1 + 0x90) * 0xb8;
    do {
      if ((*(longlong *)(lVar3 + 0x50) != 0) &&
         (lVar2 = *(longlong *)(*(longlong *)(lVar3 + 0x50) + 0x10), lVar4 = FUN_1410e148e(),
         lVar2 == lVar4)) {
        return lVar3;
      }
      lVar3 = lVar3 + 0xb8;
      lVar5 = lVar5 + -0xb8;
    } while (lVar5 != 0);
  }
  return 0;
}



// FUNCTION 1410e148e FUN_1410e148e body=228 status=ok
// SIG undefined FUN_1410e148e(void)

longlong FUN_1410e148e(void)

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
  if (DAT_14cb1b5b8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_141116c3a;
    local_38 = &LAB_147e2d683;
    local_40 = FUN_141801ad3;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x30;
    FUN_14081cfa3(L"/Script/GbxNav",L"AnimNotifyState_GbxNavEdge",&DAT_14cb1b5b8,&DAT_147e2d682);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb1b5b8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410e1574 FUN_1410e1574 body=353 status=ok
// SIG undefined FUN_1410e1574(void)

void FUN_1410e1574(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1410e15f9;
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
LAB_1410e15f9:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,4);
  return;
}



// FUNCTION 1410e16d6 FUN_1410e16d6 body=399 status=ok
// SIG undefined FUN_1410e16d6(void)

ulonglong FUN_1410e16d6(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong unaff_RDI;
  ulonglong uVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [32];
  double local_a8;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (*(char *)(param_1 + 0xa0) == '\0') {
    unaff_RDI = FUN_140257578(param_1 + 0x20);
    if (unaff_RDI != 0) {
      lVar1 = FUN_1410e1369(unaff_RDI);
      if (lVar1 == 0) {
        uVar5 = 0x7f7fffff;
      }
      else {
        uVar5 = FUN_144b1ffa4(lVar1,0);
      }
      FUN_1409cd860(unaff_RDI,local_c8,0,uVar5);
      *(float *)(param_1 + 0x9c) = (float)local_a8;
      goto LAB_1410e1719;
    }
  }
  else {
LAB_1410e1719:
    uVar4 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
    if (*(char *)(param_1 + 0xa8) != '\0') goto LAB_1410e1729;
    lVar1 = param_1 + 0x70;
    lVar2 = FUN_140257578(lVar1);
    if (lVar2 != 0) {
      lVar2 = FUN_1410e1369(lVar2);
      fVar8 = 0.0;
      fVar7 = 0.0;
      if (lVar2 != 0) {
        fVar6 = (float)FUN_144b1ffa4(lVar2,0);
        fVar7 = (float)FUN_140c1df26(lVar2);
        fVar7 = fVar7 + fVar6;
      }
      lVar2 = FUN_140257578(lVar1);
      if (lVar2 != 0) {
        uVar3 = FUN_140257578(lVar1);
        FUN_1409cd860(uVar3,local_c8,fVar7,0x7f7fffff);
        fVar8 = (float)local_a8;
      }
      *(float *)(param_1 + 0xa4) = fVar8;
      goto LAB_1410e1729;
    }
  }
  uVar4 = 0;
LAB_1410e1729:
  if ((local_60 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return uVar4 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410e186c FUN_1410e186c body=228 status=ok
// SIG undefined FUN_1410e186c(void)

longlong FUN_1410e186c(void)

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
  if (DAT_14cb1d3e8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1463879d0;
    local_38 = &LAB_147e6d6af;
    local_40 = FUN_146422fa5;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000005;
    local_60 = 8;
    local_68 = 0x48;
    FUN_14081cfa3(L"/Script/NavigationSystem",L"NavArea",&DAT_14cb1d3e8,&DAT_147e6d6ae);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb1d3e8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410e1952 FUN_1410e1952 body=23 status=ok
// SIG undefined FUN_1410e1952(void)

undefined8 FUN_1410e1952(longlong *param_1,undefined8 param_2)

{
  (**(code **)(*param_1 + 0x30))();
  return param_2;
}



// FUNCTION 1410e196a FUN_1410e196a body=314 status=ok
// SIG undefined FUN_1410e196a(void)

undefined8 * FUN_1410e196a(longlong param_1,undefined8 *param_2,double *param_3)

{
  double dVar1;
  undefined8 *puVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x50,0x10);
  dVar4 = *param_3;
  dVar5 = param_3[1];
  dVar1 = param_3[2];
  dVar3 = dVar4;
  if ((dVar5 <= dVar4 || dVar1 <= dVar4) && (dVar3 = dVar5, dVar1 <= dVar5)) {
    dVar3 = dVar1;
  }
  dVar3 = dVar3 * *(double *)(param_1 + 0x10);
  dVar6 = *(double *)(param_1 + 0x48) * dVar1;
  dVar8 = *(double *)(param_1 + 0x40) * dVar5;
  dVar7 = *(double *)(param_1 + 0x38) * dVar4;
  dVar5 = dVar5 * *(double *)(param_1 + 0x28);
  dVar4 = dVar4 * *(double *)(param_1 + 0x20);
  dVar1 = *(double *)(param_1 + 0x30) * dVar1;
  puVar2[1] = 0;
  *(undefined2 *)(puVar2 + 3) = 0x101;
  *(undefined1 *)((longlong)puVar2 + 0x1a) = 1;
  *(undefined2 *)((longlong)puVar2 + 0x1c) = 0x101;
  *puVar2 = &PTR_FUN_149f489d0;
  puVar2[4] = dVar4;
  puVar2[5] = dVar5;
  puVar2[6] = dVar1;
  puVar2[7] = dVar7;
  puVar2[8] = dVar8;
  puVar2[9] = dVar6;
  dVar6 = dVar6 - dVar1;
  dVar8 = dVar8 - dVar5;
  dVar7 = dVar7 - dVar4;
  if ((dVar8 <= dVar7 || dVar6 <= dVar7) && (dVar7 = dVar8, dVar6 <= dVar8)) {
    dVar7 = dVar6;
  }
  if (dVar7 * 0.5 <= dVar3) {
    dVar3 = dVar7 * 0.5;
  }
  puVar2[2] = dVar3;
  *param_2 = puVar2;
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar2 + 1) = *(int *)(puVar2 + 1) + 1;
    UNLOCK();
  }
  return param_2;
}



// FUNCTION 1410e1aa4 FUN_1410e1aa4 body=2777 status=ok
// SIG undefined FUN_1410e1aa4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1410e1aa4(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  char cVar5;
  undefined8 *puVar6;
  undefined1 *_Src;
  undefined ***_Src_00;
  undefined1 auStack_1d8 [32];
  undefined ***local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  code *local_1a0;
  undefined **local_190;
  undefined8 *local_188;
  undefined1 local_180;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 local_158;
  undefined8 local_150;
  undefined4 local_148;
  undefined **local_140;
  undefined8 *local_138;
  char local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  undefined8 local_100;
  undefined4 local_f8;
  undefined1 local_f0 [4];
  undefined8 local_ec;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  longlong lStack_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined2 local_50;
  undefined8 local_4c;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  local_c0 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_1a8 = FUN_1446ddbd2();
      local_1a0 = FUN_1468d96f0;
      local_1b0 = 0;
      local_1b8 = (undefined ***)0x4008001;
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
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_c0);
            goto LAB_1410e1ba0;
          }
        }
        puVar6 = (undefined8 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (puVar6 != &local_c0) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_c0,puVar6,(int)plVar1[6]);
          }
          else {
            memcpy(&local_c0,puVar6,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_1b0 = CONCAT44(local_1b0._4_4_,(int)plVar1[6]);
        local_1b8 = (undefined ***)((ulonglong)local_1b8 & 0xffffffff00000000);
        FUN_1400746b0(plVar1,&local_c0,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_c0,lVar2);
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
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_c0);
  }
LAB_1410e1ba0:
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  uStack_a4 = 0;
  uStack_a0 = 0;
  uStack_9c = 0x3ff00000;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_74 = 0x3ff00000;
  uStack_70 = 0;
  uStack_6c = 0x3ff00000;
  local_68 = 0x3ff0000000000000;
  uStack_60 = 0;
  local_58 = 0x3f800000;
  local_50 = 0;
  local_4c = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a58) {
    FUN_144b3d300(&DAT_14c952a58);
    if (DAT_14c952a58 == -1) {
      local_1a8 = FUN_1446ddbd2();
      local_1a0 = FUN_1403a682c;
      local_1b0 = 0;
      local_1b8 = (undefined ***)0x108001;
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
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_b8);
            goto LAB_1410e1cd8;
          }
        }
        puVar6 = (undefined8 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (puVar6 != &local_b8) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_b8,puVar6,(int)plVar1[6]);
          }
          else {
            memcpy(&local_b8,puVar6,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_1b0 = CONCAT44(local_1b0._4_4_,(int)plVar1[6]);
        local_1b8 = (undefined ***)((ulonglong)local_1b8 & 0xffffffff00000000);
        FUN_1400746b0(plVar1,&local_b8,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_b8,lVar2);
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
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_b8);
  }
LAB_1410e1cd8:
  local_f0[0] = 0;
  local_ec = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_d0 = 0;
  lStack_c8 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a58) {
    FUN_144b3d300(&DAT_14c952a58);
    if (DAT_14c952a58 == -1) {
      local_1a8 = FUN_1446ddbd2();
      local_1a0 = FUN_1403a682c;
      local_1b0 = 0;
      local_1b8 = (undefined ***)0x108001;
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
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,local_f0);
            goto LAB_1410e1dc9;
          }
        }
        _Src = (undefined1 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (_Src != local_f0) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,local_f0,_Src,(int)plVar1[6]);
          }
          else {
            memcpy(local_f0,_Src,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_1b0 = CONCAT44(local_1b0._4_4_,(int)plVar1[6]);
        local_1b8 = (undefined ***)((ulonglong)local_1b8 & 0xffffffff00000000);
        FUN_1400746b0(plVar1,local_f0,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,local_f0,lVar2);
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
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_f0);
  }
LAB_1410e1dc9:
  local_138 = (undefined8 *)0x0;
  local_130 = '\0';
  local_128 = 0;
  uStack_120 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_108 = 0;
  local_140 = &PTR_FUN_14acb7da0;
  local_100 = 0;
  local_f8 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a58) {
    FUN_144b3d300(&DAT_14c952a58);
    if (DAT_14c952a58 == -1) {
      local_1a8 = FUN_1446ddbd2();
      local_1a0 = FUN_1403a682c;
      local_1b0 = 0;
      local_1b8 = (undefined ***)0x108001;
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
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_140);
            goto LAB_1410e1edd;
          }
        }
        _Src_00 = (undefined ***)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (_Src_00 != &local_140) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_140,_Src_00,(int)plVar1[6]);
          }
          else {
            memcpy(&local_140,_Src_00,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_1b0 = CONCAT44(local_1b0._4_4_,(int)plVar1[6]);
        local_1b8 = (undefined ***)((ulonglong)local_1b8 & 0xffffffff00000000);
        FUN_1400746b0(plVar1,&local_140,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_140,lVar2);
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
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_140);
  }
LAB_1410e1edd:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_188 = (undefined8 *)0x0;
  local_180 = 0;
  if (local_130 == '\0') {
    local_188 = local_138;
  }
  local_1b8 = &local_190;
  local_158 = local_108;
  local_168 = (undefined4)local_118;
  uStack_164 = local_118._4_4_;
  uStack_160 = (undefined4)uStack_110;
  uStack_15c = uStack_110._4_4_;
  local_178 = (undefined4)local_128;
  uStack_174 = local_128._4_4_;
  uStack_170 = (undefined4)uStack_120;
  uStack_16c = uStack_120._4_4_;
  local_190 = &PTR_FUN_14acb7da0;
  local_150 = local_100;
  local_148 = local_f8;
  (**(code **)(*param_1 + 0x760))(param_1,local_c0,&local_b8,local_f0);
  puVar6 = local_138;
  local_140 = &PTR_FUN_14a171dc0;
  if ((local_130 != '\0') && (local_138 != (undefined8 *)0x0)) {
    if (local_138[3] != 0) {
      FUN_1400020a8();
    }
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    _DAT_14c9a0eac = _DAT_14c9a0eac + -1;
    *puVar6 = DAT_14c9a0ea0;
    DAT_14c9a0ea0 = puVar6;
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
  }
  if ((lStack_c8 != 0) && ((DAT_14cb26569 & 1) != 0)) {
    FUN_1400848c0(*(undefined8 *)(lStack_c8 + 0x50));
  }
  if ((local_30 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410e257e FUN_1410e257e body=217 status=ok
// SIG undefined FUN_1410e257e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1410e257e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 *local_50;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar2 = FUN_1447210f0();
  local_50 = param_5;
  local_58 = param_2;
  FUN_140cb5d65(&local_40,uVar2,param_4,param_3);
  local_40 = 0;
  local_38 = 0xffffffffffffffff;
  *param_5 = &PTR_FUN_14a171dc0;
  if ((*(char *)(param_5 + 2) != '\0') &&
     (plVar1 = (longlong *)param_5[1], plVar1 != (longlong *)0x0)) {
    if (plVar1[3] != 0) {
      FUN_1400020a8();
    }
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    _DAT_14c9a0eac = _DAT_14c9a0eac + -1;
    *plVar1 = (longlong)DAT_14c9a0ea0;
    DAT_14c9a0ea0 = plVar1;
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410e2658 FUN_1410e2658 body=72 status=ok
// SIG undefined FUN_1410e2658(void)

undefined8 * FUN_1410e2658(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b945cf0;
  if (param_1[0x65] != 0) {
    FUN_1400020a8();
  }
  FUN_140ad8262(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1410e26ae FUN_1410e26ae body=168 status=ok
// SIG undefined FUN_1410e26ae(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1410e26ae(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14b6bd510;
  FUN_1410e2756(param_1[3],*(undefined4 *)(param_1 + 4));
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



// FUNCTION 1410e2756 FUN_1410e2756 body=254 status=ok
// SIG undefined FUN_1410e2756(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1410e2756(longlong param_1,int param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  if (param_2 != 0) {
    puVar2 = (undefined8 *)(param_1 + 8);
    do {
      puVar2[-1] = &PTR_FUN_14b6bd390;
      if (puVar2[0xb] != 0) {
        FUN_1400020a8();
      }
      if (puVar2[9] != 0) {
        FUN_1400020a8();
      }
      puVar2[-1] = &PTR_FUN_14b4677d0;
      if ((longlong *)puVar2[4] != (longlong *)0x0) {
        (**(code **)(*(longlong *)puVar2[4] + 0x10))();
      }
      puVar2[-1] = &PTR_FUN_14b4677f0;
      if ((longlong *)puVar2[2] != (longlong *)0x0) {
        (**(code **)(*(longlong *)puVar2[2] + 0x10))();
      }
      puVar2[-1] = &PTR_FUN_14a171dc0;
      if ((*(char *)(puVar2 + 1) != '\0') &&
         (plVar1 = (longlong *)*puVar2, plVar1 != (longlong *)0x0)) {
        if (plVar1[3] != 0) {
          FUN_1400020a8();
        }
        AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
        _DAT_14c9a0eac = _DAT_14c9a0eac + -1;
        *plVar1 = (longlong)DAT_14c9a0ea0;
        DAT_14c9a0ea0 = plVar1;
        ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
      }
      puVar2 = puVar2 + 0xe;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1410e2854 FUN_1410e2854 body=21 status=ok
// SIG undefined FUN_1410e2854(void)

undefined8 * FUN_1410e2854(void)

{
  FUN_1410e286a();
  return &DAT_14c990098;
}



// FUNCTION 1410e286a FUN_1410e286a body=176 status=ok
// SIG undefined FUN_1410e286a(void)

void FUN_1410e286a(void)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [8];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9900d0) {
    FUN_144b3d300(&DAT_14c9900d0);
    if (DAT_14c9900d0 == -1) {
      FUN_1446ddc76(local_18,"SDPIScaler",1);
      FUN_145c2843e(&DAT_14c990098);
      atexit(FUN_142903b47);
      _Init_thread_footer(&DAT_14c9900d0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410e291c FUN_1410e291c body=21 status=ok
// SIG undefined FUN_1410e291c(void)

undefined8 FUN_1410e291c(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1410e2932 FUN_1410e2932 body=81 status=ok
// SIG undefined FUN_1410e2932(void)

void FUN_1410e2932(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar1 = (**(code **)(*param_2 + 0x10))(param_2);
  if (1 < iVar1 + 1U) {
    iVar2 = (**(code **)(*param_2 + 0x28))(param_2);
    if (iVar2 != 0) {
      uVar3 = (**(code **)*param_2)(param_2);
      FUN_1458c85ca(param_1,iVar1,uVar3);
      return;
    }
  }
  return;
}



// FUNCTION 1410e2984 FUN_1410e2984 body=104 status=ok
// SIG undefined FUN_1410e2984(void)

void FUN_1410e2984(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  
  plVar1 = (longlong *)*param_2;
  if (plVar1 != (longlong *)0x0) {
    lVar2 = (**(code **)(*plVar1 + 8))();
    lVar3 = FUN_1410e29ec();
    if ((lVar3 != 0) && (*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38))) {
      plVar4 = (longlong *)0x0;
      if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
          lVar3 + 0x30) {
        plVar4 = plVar1;
      }
      goto LAB_1410e29cd;
    }
  }
  plVar4 = (longlong *)0x0;
LAB_1410e29cd:
  *(longlong **)(param_1 + 0x2258) = plVar4;
  FUN_140655f5e(param_1,param_2);
  return;
}



// FUNCTION 1410e29ec FUN_1410e29ec body=57 status=ok
// SIG undefined FUN_1410e29ec(void)

void FUN_1410e29ec(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb9fb80 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cb9fb80 = FUN_140002ddd(FUN_1465a6b83,uVar1,L"CarryableObjectContainerDef");
  }
  return;
}



// FUNCTION 1410e2a25 FUN_1410e2a25 body=47 status=ok
// SIG undefined FUN_1410e2a25(void)

int FUN_1410e2a25(void)

{
  int iVar1;
  
  iVar1 = 0;
  if ((DAT_14c760d84 != 0) && ((DAT_14ca84f5a & 1) != 0)) {
    iVar1 = *(int *)(DAT_14ca811d0 + 0x90) + *(int *)(DAT_14ca811c8 + 0x90);
  }
  return iVar1;
}



// FUNCTION 1410e2a54 FUN_1410e2a54 body=78 status=ok
// SIG undefined FUN_1410e2a54(void)

void FUN_1410e2a54(longlong param_1,char param_2)

{
  if (*(char *)(param_1 + 0x168) != '\0') {
    if (param_2 == '\0') {
      FUN_148af6e34(param_1 + 0x180);
      FUN_145abd7ea(param_1);
    }
    else {
      FUN_1415808d8(param_1);
    }
    FUN_146592da8(param_1 + 0x180);
    *(undefined1 *)(param_1 + 0x168) = 0;
  }
  return;
}



// FUNCTION 1410e2aa2 FUN_1410e2aa2 body=159 status=ok
// SIG undefined FUN_1410e2aa2(void)

void FUN_1410e2aa2(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  longlong lVar5;
  
  if (*(char *)(param_1 + 0x168) != '\0') {
    return;
  }
  iVar1 = *(int *)(param_1 + 0xa0);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x98);
    lVar5 = 0;
    bVar4 = DAT_14c950c29;
    do {
      lVar3 = *(longlong *)(lVar2 + lVar5);
      if ((lVar3 != 0 & bVar4) == 1) {
        FUN_1456cec3c(lVar3);
LAB_1410e2b1c:
        FUN_1410e5ae4(lVar3,1);
        bVar4 = DAT_14c950c29;
      }
      else if (lVar3 != 0) goto LAB_1410e2b1c;
      lVar5 = lVar5 + 8;
    } while ((longlong)iVar1 * 8 != lVar5);
  }
  *(undefined1 *)(param_1 + 0x168) = 1;
  FUN_145ffc804(param_1 + 0x180,param_1);
  return;
}



// FUNCTION 1410e2b42 FUN_1410e2b42 body=72 status=ok
// SIG undefined FUN_1410e2b42(void)

void FUN_1410e2b42(longlong param_1)

{
  FUN_1401b9920(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20));
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10));
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1410e2b8a FUN_1410e2b8a body=160 status=ok
// SIG undefined FUN_1410e2b8a(void)

undefined1 * FUN_1410e2b8a(undefined1 *param_1,undefined1 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 8) = 0;
  iVar1 = *(int *)(param_2 + 0x10);
  uVar2 = *(undefined8 *)(param_2 + 8);
  *(int *)(param_1 + 0x10) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  else {
    FUN_140b856de(param_1 + 8,iVar1,0);
    FUN_140b8566a(*(undefined8 *)(param_1 + 8),uVar2,iVar1);
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  iVar1 = *(int *)(param_2 + 0x20);
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  *(int *)(param_1 + 0x20) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  else {
    FUN_1406fd828(param_1 + 0x18,iVar1,0);
    FUN_1406fd7df(*(undefined8 *)(param_1 + 0x18),uVar2,iVar1);
  }
  return param_1;
}



// FUNCTION 1410e2c2a FUN_1410e2c2a body=279 status=ok
// SIG undefined FUN_1410e2c2a(void)

void FUN_1410e2c2a(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*(longlong *)*param_2 + 0x2a8))((longlong *)*param_2,&local_38);
  if (0 < local_30) {
    lVar4 = 0;
    do {
      lVar2 = local_38;
      if (*(longlong *)(local_38 + lVar4 * 8) == 0) {
LAB_1410e2d04:
        lVar5 = 0;
LAB_1410e2ca8:
        FUN_140457ffc(lVar5 + 0x40,param_1);
        FUN_140457ffc(*(longlong *)(lVar2 + lVar4 * 8) + 0x28,param_1);
      }
      else {
        lVar3 = FUN_140febe0e();
        lVar5 = *(longlong *)(lVar2 + lVar4 * 8);
        if (lVar5 == 0) goto LAB_1410e2d04;
        if ((((lVar3 == 0) || (lVar1 = *(longlong *)(lVar5 + 0x10), lVar1 == 0)) ||
            (*(int *)(lVar1 + 0x38) < *(int *)(lVar3 + 0x38))) ||
           (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
            lVar3 + 0x30)) goto LAB_1410e2ca8;
        if (DAT_14c950c29 == 1) {
          FUN_1456cec3c(lVar5);
        }
        local_40 = lVar5;
        if ((DAT_14c950c29 & 1) != 0) {
          FUN_1456cec3c(lVar5);
        }
        FUN_1410e2c2a(param_1,&local_40);
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 < local_30);
  }
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410e2d42 FUN_1410e2d42 body=2111 status=ok
// SIG undefined FUN_1410e2d42(void)

void FUN_1410e2d42(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  bool bVar14;
  undefined1 auStack_a8 [40];
  longlong local_80;
  longlong local_78;
  longlong local_70;
  int local_68;
  longlong *local_60;
  int local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  (**(code **)(*(longlong *)*param_2 + 0x2a8))((longlong *)*param_2,&local_70);
  if (0 < local_68) {
    lVar13 = 0;
    do {
      lVar9 = local_70;
      lVar12 = *(longlong *)(local_70 + lVar13 * 8);
      if (*(char *)(param_1 + 200) == '\x01') {
        if (DAT_14cbd7ef0 != 0) {
          if ((longlong)*(int *)(lVar12 + 0xb8) != 0) {
            lVar11 = 0;
            do {
              if (*(longlong *)(*(longlong *)(lVar12 + 0xb0) + lVar11) == DAT_14cbd7ef0)
              goto LAB_1410e2e04;
              lVar11 = lVar11 + 8;
            } while ((longlong)*(int *)(lVar12 + 0xb8) * 8 != lVar11);
          }
          if ((longlong)*(int *)(lVar12 + 200) != 0) {
            lVar11 = 0;
            do {
              if (*(longlong *)(*(longlong *)(lVar12 + 0xc0) + lVar11) == DAT_14cbd7ef0)
              goto LAB_1410e2e04;
              lVar11 = lVar11 + 8;
            } while ((longlong)*(int *)(lVar12 + 200) * 8 != lVar11);
          }
        }
      }
      else {
        if (DAT_14cbd7ef8 != 0) {
          if ((longlong)*(int *)(lVar12 + 0xb8) != 0) {
            lVar11 = 0;
            do {
              if (*(longlong *)(*(longlong *)(lVar12 + 0xb0) + lVar11) == DAT_14cbd7ef8)
              goto LAB_1410e31d8;
              lVar11 = lVar11 + 8;
            } while ((longlong)*(int *)(lVar12 + 0xb8) * 8 != lVar11);
          }
          if ((longlong)*(int *)(lVar12 + 200) != 0) {
            lVar11 = 0;
            do {
              if (*(longlong *)(*(longlong *)(lVar12 + 0xc0) + lVar11) == DAT_14cbd7ef8)
              goto LAB_1410e31d8;
              lVar11 = lVar11 + 8;
            } while ((longlong)*(int *)(lVar12 + 200) * 8 != lVar11);
          }
        }
LAB_1410e2e04:
        *(int *)(param_3 + 3) = (int)param_3[3] + 1;
        *(int *)(param_3 + 2) = (int)param_3[2] + 1;
        iVar5 = (int)param_3[1];
        *(uint *)(param_3 + 1) = iVar5 + 1U;
        if (*(uint *)((longlong)param_3 + 0xc) < iVar5 + 1U) {
          FUN_145800b6a(param_3,iVar5);
        }
        lVar12 = *param_3;
        FUN_1410e361e(lVar12 + (longlong)iVar5 * 0x168,1);
        piVar2 = (int *)(lVar12 + 0x160 + (longlong)iVar5 * 0x168);
        *piVar2 = *piVar2 + 1;
        local_78 = *(longlong *)(lVar9 + lVar13 * 8);
        if ((local_78 != 0) && (DAT_14c950c29 != 0)) {
          FUN_1456cec3c();
        }
        FUN_1410e3a04(&local_78);
        if (*(longlong *)(lVar9 + lVar13 * 8) == 0) {
LAB_1410e33d9:
          lVar12 = 0;
        }
        else {
          lVar11 = FUN_140febe0e();
          lVar12 = *(longlong *)(lVar9 + lVar13 * 8);
          if (lVar12 == 0) goto LAB_1410e33d9;
          if ((((lVar11 != 0) && (lVar8 = *(longlong *)(lVar12 + 0x10), lVar8 != 0)) &&
              (*(int *)(lVar11 + 0x38) <= *(int *)(lVar8 + 0x38))) &&
             (*(longlong *)(*(longlong *)(lVar8 + 0x30) + (longlong)*(int *)(lVar11 + 0x38) * 8) ==
              lVar11 + 0x30)) {
            if (DAT_14c950c29 == 1) {
              FUN_1456cec3c(lVar12);
            }
            local_80 = lVar12;
            if ((DAT_14c950c29 & 1) != 0) {
              FUN_1456cec3c(lVar12);
            }
            FUN_1410e2d42(param_1,&local_80);
            goto LAB_1410e31d8;
          }
        }
        local_60 = (longlong *)0x0;
        local_58 = 0;
        FUN_1446efa72(&local_60,0,3,0x10);
        plVar1 = local_60;
        local_58 = 3;
        *local_60 = (longlong)&PTR_LAB_14b538b00;
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
        *local_60 = (longlong)&PTR_FUN_14b9b5540;
        local_60[3] = 0;
        if (param_1 == 0) {
          iVar5 = 0;
        }
        else {
          uVar7 = *(uint *)(param_1 + 0xc);
          *(uint *)(local_60 + 3) = uVar7;
          if ((int)uVar7 < DAT_14c9647dc) {
            lVar11 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8);
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
            bVar14 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar5;
            if (bVar14) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,iVar6);
            }
            LOCK();
            iVar5 = *(int *)(lVar11 + 0x10);
            bVar14 = iVar5 == 0;
            if (bVar14) {
              *(int *)(lVar11 + 0x10) = iVar6;
              iVar5 = 0;
            }
            UNLOCK();
            if (bVar14) {
              iVar5 = iVar6;
            }
          }
        }
        *(int *)((longlong)plVar1 + 0x1c) = iVar5;
        plVar1[4] = (longlong)FUN_14622e582;
        *(undefined4 *)(plVar1 + 5) = 0;
        if (((local_58 == 0) || (local_60 == (longlong *)0x0)) ||
           (cVar4 = (**(code **)(*local_60 + 0x30))(), cVar4 == '\0')) {
          if (local_58 == 0) goto LAB_1410e3039;
          if (local_60 != (longlong *)0x0) {
            (**(code **)*local_60)();
            FUN_1446efa72(&local_60,0,0,0x10);
            goto LAB_1410e302c;
          }
        }
        else {
          plVar1 = (longlong *)(lVar12 + 0x40);
          if (*(int *)(lVar12 + 0x54) < 1) {
            iVar5 = *(int *)(lVar12 + 0x48);
            iVar6 = *(int *)(lVar12 + 0x50) + -1;
            *(int *)(lVar12 + 0x50) = iVar6;
            if (iVar6 <= iVar5) {
              iVar6 = iVar5;
              if (0 < iVar5) {
                iVar10 = 0;
                do {
                  if (((*(int *)(*plVar1 + 8 + (longlong)iVar10 * 0x10) == 0) ||
                      (plVar3 = *(longlong **)(*plVar1 + (longlong)iVar10 * 0x10),
                      plVar3 == (longlong *)0x0)) ||
                     (cVar4 = (**(code **)(*plVar3 + 0x28))(), cVar4 != '\0')) {
                    FUN_14005b288(plVar1,iVar10);
                    FUN_14005b248(plVar1);
                  }
                  else {
                    iVar10 = iVar10 + 1;
                  }
                  iVar6 = *(int *)(lVar12 + 0x48);
                } while (iVar10 < iVar6);
              }
              iVar10 = iVar6 * 2;
              if (iVar10 < 3) {
                iVar10 = 2;
              }
              *(int *)(lVar12 + 0x50) = iVar10;
              if ((iVar10 < iVar5) && (*(int *)(lVar12 + 0x4c) != iVar6)) {
                FUN_14045812c(plVar1);
              }
            }
          }
          if ((local_58 != 0) && (local_60 != (longlong *)0x0)) {
            (**(code **)(*local_60 + 0x38))();
          }
          iVar5 = *(int *)(lVar12 + 0x48);
          uVar7 = iVar5 + 1;
          *(uint *)(lVar12 + 0x48) = uVar7;
          if (*(uint *)(lVar12 + 0x4c) < uVar7) {
            FUN_1447a71f6(plVar1);
          }
          lVar12 = *plVar1;
          lVar11 = (longlong)iVar5 * 0x10;
          *(undefined8 *)(lVar12 + lVar11) = 0;
          *(undefined4 *)(lVar12 + 8 + lVar11) = 0;
          *(longlong **)(lVar12 + lVar11) = local_60;
          local_60 = (longlong *)0x0;
          *(int *)(lVar12 + 8 + lVar11) = local_58;
LAB_1410e302c:
          local_58 = 0;
LAB_1410e3039:
          if (local_60 != (longlong *)0x0) {
            FUN_1400020a8();
          }
        }
        lVar12 = *(longlong *)(lVar9 + lVar13 * 8);
        local_60 = (longlong *)0x0;
        local_58 = 0;
        FUN_1446efa72(&local_60);
        plVar1 = local_60;
        local_58 = 3;
        *local_60 = (longlong)&PTR_LAB_14b538b70;
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
        local_60[2] = lVar11;
        *local_60 = (longlong)&PTR_FUN_14b9b55b0;
        local_60[3] = 0;
        if (param_1 == 0) {
          iVar5 = 0;
        }
        else {
          uVar7 = *(uint *)(param_1 + 0xc);
          *(uint *)(local_60 + 3) = uVar7;
          if ((int)uVar7 < DAT_14c9647dc) {
            lVar9 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8);
          }
          else {
            lVar9 = 0;
          }
          iVar5 = *(int *)(lVar9 + 0x10);
          if (*(int *)(lVar9 + 0x10) == 0) {
            LOCK();
            iVar5 = DAT_14c964868 + 1;
            UNLOCK();
            iVar6 = DAT_14c964868 + 1;
            bVar14 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar5;
            if (bVar14) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp");
            }
            LOCK();
            iVar5 = *(int *)(lVar9 + 0x10);
            bVar14 = iVar5 == 0;
            if (bVar14) {
              *(int *)(lVar9 + 0x10) = iVar6;
              iVar5 = 0;
            }
            UNLOCK();
            if (bVar14) {
              iVar5 = iVar6;
            }
          }
        }
        *(int *)((longlong)plVar1 + 0x1c) = iVar5;
        plVar1[4] = (longlong)FUN_1462032f0;
        *(undefined4 *)(plVar1 + 5) = 0;
        if (((local_58 == 0) || (local_60 == (longlong *)0x0)) ||
           (cVar4 = (**(code **)(*local_60 + 0x30))(), cVar4 == '\0')) {
          if (local_58 != 0) {
            if (local_60 == (longlong *)0x0) goto LAB_1410e31d8;
            (**(code **)*local_60)(local_60,0);
            FUN_1446efa72(&local_60,0);
            goto LAB_1410e31c2;
          }
        }
        else {
          plVar1 = (longlong *)(lVar12 + 0x28);
          if (*(int *)(lVar12 + 0x3c) < 1) {
            iVar5 = *(int *)(lVar12 + 0x30);
            iVar6 = *(int *)(lVar12 + 0x38) + -1;
            *(int *)(lVar12 + 0x38) = iVar6;
            if (iVar6 <= iVar5) {
              iVar6 = iVar5;
              if (0 < iVar5) {
                iVar10 = 0;
                do {
                  if (((*(int *)(*plVar1 + 8 + (longlong)iVar10 * 0x10) == 0) ||
                      (plVar3 = *(longlong **)(*plVar1 + (longlong)iVar10 * 0x10),
                      plVar3 == (longlong *)0x0)) ||
                     (cVar4 = (**(code **)(*plVar3 + 0x28))(), cVar4 != '\0')) {
                    FUN_14005b288(plVar1,iVar10);
                    FUN_14005b248(plVar1);
                  }
                  else {
                    iVar10 = iVar10 + 1;
                  }
                  iVar6 = *(int *)(lVar12 + 0x30);
                } while (iVar10 < iVar6);
              }
              iVar10 = iVar6 * 2;
              if (iVar10 < 3) {
                iVar10 = 2;
              }
              *(int *)(lVar12 + 0x38) = iVar10;
              if ((iVar10 < iVar5) && (*(int *)(lVar12 + 0x34) != iVar6)) {
                FUN_14045812c(plVar1);
              }
            }
          }
          if ((local_58 != 0) && (local_60 != (longlong *)0x0)) {
            (**(code **)(*local_60 + 0x38))();
          }
          iVar5 = *(int *)(lVar12 + 0x30);
          uVar7 = iVar5 + 1;
          *(uint *)(lVar12 + 0x30) = uVar7;
          if (*(uint *)(lVar12 + 0x34) < uVar7) {
            FUN_1447a71f6(plVar1);
          }
          lVar12 = *plVar1;
          lVar9 = (longlong)iVar5 * 0x10;
          *(undefined8 *)(lVar12 + lVar9) = 0;
          *(undefined4 *)(lVar12 + 8 + lVar9) = 0;
          *(longlong **)(lVar12 + lVar9) = local_60;
          local_60 = (longlong *)0x0;
          *(int *)(lVar12 + 8 + lVar9) = local_58;
LAB_1410e31c2:
          local_58 = 0;
        }
        if (local_60 != (longlong *)0x0) {
          FUN_1400020a8();
        }
      }
LAB_1410e31d8:
      lVar13 = lVar13 + 1;
    } while (lVar13 < local_68);
  }
  if (local_70 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1410e361e FUN_1410e361e body=996 status=ok
// SIG undefined FUN_1410e361e(void)

void FUN_1410e361e(void *param_1,int param_2)

{
  longlong *plVar1;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  do {
    memset(param_1,0,0x160);
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
    *(longlong **)((longlong)param_1 + 0x18) = DAT_14c844840;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    *(undefined4 *)((longlong)param_1 + 0x20) = DAT_14c844848;
    *(undefined4 *)((longlong)param_1 + 0x28) = 0;
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
    *(longlong **)((longlong)param_1 + 0x30) = DAT_14c844840;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    *(undefined4 *)((longlong)param_1 + 0x38) = DAT_14c844848;
    *(undefined4 *)((longlong)param_1 + 0x40) = 0;
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
    *(longlong **)((longlong)param_1 + 0x48) = DAT_14c844840;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    *(undefined4 *)((longlong)param_1 + 0x50) = DAT_14c844848;
    *(undefined4 *)((longlong)param_1 + 0x58) = 0;
    *(undefined8 *)((longlong)param_1 + 0x60) = 0;
    *(undefined4 *)((longlong)param_1 + 0x68) = 0;
    *(undefined8 *)((longlong)param_1 + 0x70) = 0;
    *(undefined4 *)((longlong)param_1 + 0x78) = 0;
    *(undefined8 *)((longlong)param_1 + 0x80) = 0;
    *(undefined4 *)((longlong)param_1 + 0x88) = 0;
    *(undefined8 *)((longlong)param_1 + 0x90) = 0;
    *(undefined4 *)((longlong)param_1 + 0x98) = 0;
    *(undefined8 *)((longlong)param_1 + 0xa0) = 0;
    *(undefined4 *)((longlong)param_1 + 0xa8) = 0;
    *(undefined8 *)((longlong)param_1 + 0xb0) = 0;
    *(undefined4 *)((longlong)param_1 + 0xb8) = 0;
    *(undefined8 *)((longlong)param_1 + 0xc0) = 0;
    *(undefined8 *)((longlong)param_1 + 200) = 0;
    FUN_140056680(&local_60);
    *(undefined8 *)((longlong)param_1 + 0xd0) = local_60;
    *(undefined4 *)((longlong)param_1 + 0xd8) = local_58;
    *(undefined4 *)((longlong)param_1 + 0xdc) = local_54;
    *(undefined4 *)((longlong)param_1 + 0xe0) = 0;
    *(undefined1 *)((longlong)param_1 + 0xe8) = 1;
    *(undefined4 *)((longlong)param_1 + 0xec) = 0;
    *(undefined1 *)((longlong)param_1 + 0xf0) = 1;
    *(undefined4 *)((longlong)param_1 + 0xf4) = 0;
    *(undefined1 *)((longlong)param_1 + 0xf8) = 1;
    *(undefined4 *)((longlong)param_1 + 0xfc) = 0;
    *(undefined1 *)((longlong)param_1 + 0x100) = 0;
    *(undefined4 *)((longlong)param_1 + 0x104) = 0;
    *(undefined1 *)((longlong)param_1 + 0x108) = 0;
    *(undefined4 *)((longlong)param_1 + 0x10c) = 0;
    *(undefined1 *)((longlong)param_1 + 0x110) = 0;
    *(undefined8 *)((longlong)param_1 + 0x114) = 0;
    *(undefined8 *)((longlong)param_1 + 0x11c) = 0;
    *(undefined8 *)((longlong)param_1 + 0x124) = 0;
    *(undefined8 *)((longlong)param_1 + 0x130) = 0;
    *(undefined8 *)((longlong)param_1 + 0x138) = 0;
    *(undefined4 *)((longlong)param_1 + 0x140) = 0;
    *(undefined8 *)((longlong)param_1 + 0x148) = 0;
    *(undefined8 *)((longlong)param_1 + 0x150) = 0;
    *(undefined4 *)((longlong)param_1 + 0x158) = 0;
    *(undefined4 *)((longlong)param_1 + 0x160) = 0;
    param_1 = (void *)((longlong)param_1 + 0x168);
    param_2 = param_2 + -1;
  } while (param_2 != 0);
  if ((local_50 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410e3a04 FUN_1410e3a04 body=4197 status=ok
// SIG undefined FUN_1410e3a04(void)

void FUN_1410e3a04(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  longlong *plVar15;
  double dVar16;
  longlong *plVar17;
  undefined1 auStack_128 [32];
  longlong local_108;
  longlong *local_100;
  longlong *local_f8;
  undefined4 local_f0;
  longlong local_e8;
  longlong *local_e0;
  longlong *local_d8 [2];
  longlong local_c8;
  longlong *local_c0;
  undefined8 *local_b8;
  int *local_b0;
  undefined4 local_a8 [2];
  longlong local_a0;
  longlong *plStack_98;
  undefined8 local_90;
  int local_88 [2];
  longlong *local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  int local_70;
  double local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_128;
  lVar8 = *param_1;
  if (lVar8 == 0) goto LAB_1410e41e2;
  if ((int)param_2[1] == 0 || *(longlong *)(lVar8 + 0x70) != *param_2) {
    *param_2 = *(longlong *)(lVar8 + 0x70);
    *(int *)(param_2 + 1) = (int)param_2[1] + 1;
    lVar8 = *param_1;
  }
  local_f8 = *(longlong **)(lVar8 + 0x78);
  if (local_f8 != (longlong *)0x0) {
    (**(code **)(*local_f8 + 8))();
  }
  local_f0 = *(undefined4 *)(lVar8 + 0x80);
  FUN_14023409e(&local_e8,&local_f8,1);
  local_a8[0] = 0;
  local_a0 = 0;
  plStack_98 = (longlong *)0x0;
  local_90 = (ulonglong)local_90._4_4_ << 0x20;
  local_b8 = (undefined8 *)local_a8;
  local_b0 = local_88;
  FUN_14010d304(&local_80);
  local_c8 = local_e8;
  local_c0 = local_e0;
  if (local_e0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_e0 + 1) = (int)local_e0[1] + 1;
    UNLOCK();
  }
  FUN_14010c016(local_d8,&local_c8,&local_80);
  FUN_14007f2db(local_80,local_78);
  if (local_80 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (plStack_98 != (longlong *)0x0) {
    (**(code **)(*plStack_98 + 0x10))();
  }
  if (local_e0 != (longlong *)0x0) {
    LOCK();
    plVar17 = local_e0 + 1;
    *(int *)plVar17 = (int)*plVar17 + -1;
    UNLOCK();
    if ((int)*plVar17 == 0) {
      (**(code **)*local_e0)(local_e0);
      LOCK();
      piVar1 = (int *)((longlong)local_e0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_e0 + 0x10))(local_e0);
      }
    }
  }
  if (((int)param_2[5] == 0) || (cVar4 = FUN_144722c14(param_2 + 3,local_d8,0), cVar4 == '\0')) {
    FUN_140008f88(param_2 + 3,local_d8);
    *(int *)(param_2 + 5) = (int)param_2[5] + 1;
  }
  if (local_d8[0] != (longlong *)0x0) {
    (**(code **)(*local_d8[0] + 0x10))();
  }
  if (local_f8 != (longlong *)0x0) {
    (**(code **)(*local_f8 + 0x10))();
  }
  lVar8 = *param_1;
  local_f8 = *(longlong **)(lVar8 + 0x90);
  if (local_f8 != (longlong *)0x0) {
    (**(code **)(*local_f8 + 8))();
  }
  local_f0 = *(undefined4 *)(lVar8 + 0x98);
  FUN_14023409e(&local_108,&local_f8,1);
  local_a8[0] = 0;
  local_a0 = 0;
  plStack_98 = (longlong *)0x0;
  local_90 = local_90 & 0xffffffff00000000;
  local_b8 = (undefined8 *)local_a8;
  local_b0 = local_88;
  FUN_14010d304(&local_80);
  local_c8 = local_108;
  local_c0 = local_100;
  if (local_100 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_100 + 1) = (int)local_100[1] + 1;
    UNLOCK();
  }
  FUN_14010c016(local_d8,&local_c8,&local_80);
  FUN_14007f2db(local_80,local_78);
  if (local_80 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (plStack_98 != (longlong *)0x0) {
    (**(code **)(*plStack_98 + 0x10))();
  }
  if (local_100 != (longlong *)0x0) {
    LOCK();
    plVar17 = local_100 + 1;
    *(int *)plVar17 = (int)*plVar17 + -1;
    UNLOCK();
    if ((int)*plVar17 == 0) {
      (**(code **)*local_100)(local_100);
      LOCK();
      piVar1 = (int *)((longlong)local_100 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_100 + 0x10))(local_100);
      }
    }
  }
  if (((int)param_2[0xb] == 0) || (cVar4 = FUN_144722c14(param_2 + 9,local_d8,0), cVar4 == '\0')) {
    FUN_140008f88(param_2 + 9,local_d8);
    *(int *)(param_2 + 0xb) = (int)param_2[0xb] + 1;
  }
  if (local_d8[0] != (longlong *)0x0) {
    (**(code **)(*local_d8[0] + 0x10))();
  }
  if (local_f8 != (longlong *)0x0) {
    (**(code **)(*local_f8 + 0x10))();
  }
  lVar8 = *param_1;
  local_a8[0] = CONCAT31(local_a8[0]._1_3_,*(undefined1 *)(lVar8 + 0x110));
  local_a0 = 0;
  iVar6 = *(int *)(lVar8 + 0x120);
  uVar10 = *(undefined8 *)(lVar8 + 0x118);
  plStack_98 = (longlong *)CONCAT44(plStack_98._4_4_,iVar6);
  if (iVar6 == 0) {
    plStack_98 = (longlong *)0x0;
  }
  else {
    FUN_140b856de(&local_a0,iVar6,0);
    FUN_140b8566a(local_a0,uVar10,iVar6);
  }
  local_90 = 0;
  iVar6 = *(int *)(lVar8 + 0x130);
  uVar10 = *(undefined8 *)(lVar8 + 0x128);
  local_88[0] = iVar6;
  if (iVar6 == 0) {
    local_88[1] = 0;
  }
  else {
    FUN_1406fd828(&local_90,iVar6,0);
    FUN_1406fd7df(local_90,uVar10,iVar6);
  }
  if (*(int *)((longlong)param_2 + 0xf4) == 0 ||
      ((byte)local_a8[0] & 1) != *(byte *)(param_2 + 0x1e)) {
    *(byte *)(param_2 + 0x1e) = (byte)local_a8[0] & 1;
    *(int *)((longlong)param_2 + 0xf4) = *(int *)((longlong)param_2 + 0xf4) + 1;
  }
  bVar5 = (byte)local_a8[0] >> 1 & 1;
  if (*(int *)((longlong)param_2 + 0xfc) == 0 || bVar5 != *(byte *)(param_2 + 0x1f)) {
    *(byte *)(param_2 + 0x1f) = bVar5;
    *(int *)((longlong)param_2 + 0xfc) = *(int *)((longlong)param_2 + 0xfc) + 1;
  }
  FUN_1407b2780(param_2 + 0x29,&local_90);
  *(int *)(param_2 + 0x2b) = (int)param_2[0x2b] + 1;
  plVar17 = param_2 + 0x23;
  iVar6 = *(int *)((longlong)param_2 + 0x124);
  FUN_1410333df(param_2[0x23],(int)param_2[0x24]);
  *(undefined4 *)(param_2 + 0x24) = 0;
  if ((iVar6 < 0) && (*(int *)((longlong)param_2 + 0x124) != 0)) {
    FUN_148e5511e(plVar17);
  }
  *(int *)(param_2 + 0x25) = (int)param_2[0x25] + 1;
  plVar15 = param_2 + 0x26;
  *(undefined4 *)(param_2 + 0x27) = 0;
  if (*(int *)((longlong)param_2 + 0x13c) < 0) {
    FUN_1402191ca(plVar15,0);
  }
  *(int *)(param_2 + 0x28) = (int)param_2[0x28] + 1;
  if ((*(int *)((longlong)param_2 + 0x10c) == 0 | *(byte *)(param_2 + 0x21)) == 1) {
    *(undefined1 *)(param_2 + 0x21) = 0;
    *(int *)((longlong)param_2 + 0x10c) = *(int *)((longlong)param_2 + 0x10c) + 1;
  }
  FUN_140bad112(param_2 + 0x1a,&DAT_149dfb77a);
  if (*param_1 != 0) {
    lVar8 = FUN_1410e4a74();
    plVar2 = (longlong *)*param_1;
    if (plVar2 != (longlong *)0x0) {
      if ((((lVar8 == 0) || (lVar9 = plVar2[2], lVar9 == 0)) ||
          (*(int *)(lVar9 + 0x38) < *(int *)(lVar8 + 0x38))) ||
         (*(longlong *)(*(longlong *)(lVar9 + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) !=
          lVar8 + 0x30)) {
        lVar8 = FUN_140e212f4();
        plVar17 = (longlong *)*param_1;
        if (plVar17 != (longlong *)0x0) {
          if (((lVar8 != 0) && (lVar9 = plVar17[2], lVar9 != 0)) &&
             ((*(int *)(lVar8 + 0x38) <= *(int *)(lVar9 + 0x38) &&
              (*(longlong *)(*(longlong *)(lVar9 + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) ==
               lVar8 + 0x30)))) {
            if (DAT_14c950c29 == 1) {
              FUN_1456cec3c(plVar17);
            }
            if ((int)param_2[2] == 0 || *(char *)((longlong)param_2 + 0xc) != '\x01') {
              *(undefined1 *)((longlong)param_2 + 0xc) = 1;
              *(int *)(param_2 + 2) = (int)param_2[2] + 1;
            }
            (**(code **)(*plVar17 + 0x340))(plVar17,&local_80);
            FUN_14003c038(param_2 + 6,&local_80);
            if (local_80 != (longlong *)0x0) {
              (**(code **)(*local_80 + 0x10))();
            }
            dVar16 = (double)FUN_1458816cc(plVar17);
            if ((int)param_2[0xd] == 0 || dVar16 != (double)param_2[0xc]) {
              param_2[0xc] = (longlong)dVar16;
              *(int *)(param_2 + 0xd) = (int)param_2[0xd] + 1;
            }
            (**(code **)(*plVar17 + 0x330))(plVar17,&local_80);
            dVar16 = (double)(**(code **)(*plVar17 + 0x338))(plVar17);
            dVar16 = dVar16 / ABS(local_68 - (double)CONCAT44(uStack_74,local_78));
            if ((int)param_2[0x13] == 0 || dVar16 != (double)param_2[0x12]) {
              param_2[0x12] = (longlong)dVar16;
              *(int *)(param_2 + 0x13) = (int)param_2[0x13] + 1;
            }
            if ((int)param_2[0x15] == 0 || (double)param_2[0x14] != 0.0) {
              param_2[0x14] = 0;
              *(int *)(param_2 + 0x15) = (int)param_2[0x15] + 1;
            }
            if ((int)param_2[0x17] == 0 || (double)param_2[0x16] != 1.0) {
              param_2[0x16] = 0x3ff0000000000000;
              *(int *)(param_2 + 0x17) = (int)param_2[0x17] + 1;
            }
            FUN_148af92f2(plVar17,&local_80);
            plVar17 = local_80;
            if ((char)local_78 == '\0') goto LAB_1410e4a21;
            goto LAB_1410e4a25;
          }
          lVar9 = FUN_1410e4c40();
          lVar8 = *param_1;
          if (lVar8 != 0) {
            if (((lVar9 == 0) || (lVar3 = *(longlong *)(lVar8 + 0x10), lVar3 == 0)) ||
               ((*(int *)(lVar3 + 0x38) < *(int *)(lVar9 + 0x38) ||
                (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8)
                 != lVar9 + 0x30)))) {
              lVar8 = FUN_140febe0e();
              if (*param_1 != 0) {
                if ((((lVar8 == 0) || (lVar9 = *(longlong *)(*param_1 + 0x10), lVar9 == 0)) ||
                    (*(int *)(lVar9 + 0x38) < *(int *)(lVar8 + 0x38))) ||
                   (*(longlong *)
                     (*(longlong *)(lVar9 + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) !=
                    lVar8 + 0x30)) {
                  lVar8 = FUN_14119b10c();
                  param_1 = (longlong *)*param_1;
                  if (((param_1 != (longlong *)0x0) && (lVar8 != 0)) &&
                     ((lVar9 = param_1[2], lVar9 != 0 &&
                      ((*(int *)(lVar8 + 0x38) <= *(int *)(lVar9 + 0x38) &&
                       (*(longlong *)
                         (*(longlong *)(lVar9 + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) ==
                        lVar8 + 0x30)))))) {
                    if (DAT_14c950c29 == 1) {
                      FUN_1456cec3c(param_1);
                    }
                    if ((int)param_2[2] == 0 || *(char *)((longlong)param_2 + 0xc) != '\x05') {
                      *(undefined1 *)((longlong)param_2 + 0xc) = 5;
                      *(int *)(param_2 + 2) = (int)param_2[2] + 1;
                    }
                    uVar10 = FUN_145800c9e(param_1,0);
                    uVar11 = FUN_145800c9e(param_1,1);
                    FUN_1410e4a6a(uVar10,&local_80);
                    iVar6 = (int)param_2[0x27];
                    *(uint *)(param_2 + 0x27) = iVar6 + 1U;
                    if (*(uint *)((longlong)param_2 + 0x13c) < iVar6 + 1U) {
                      FUN_1446f84a2(plVar15,iVar6);
                      *(longlong **)(*plVar15 + (longlong)iVar6 * 8) = local_80;
LAB_1410e439a:
                      *(int *)(param_2 + 0x28) = (int)param_2[0x28] + 1;
                    }
                    else {
                      *(longlong **)(*plVar15 + (longlong)iVar6 * 8) = local_80;
                      if (iVar6 != -1) goto LAB_1410e439a;
                    }
                    FUN_1410e4a6a(uVar11,&local_80);
                    iVar6 = (int)param_2[0x27];
                    *(uint *)(param_2 + 0x27) = iVar6 + 1U;
                    if (*(uint *)((longlong)param_2 + 0x13c) < iVar6 + 1U) {
                      FUN_1446f84a2(plVar15,iVar6);
                      *(longlong **)(*plVar15 + (longlong)iVar6 * 8) = local_80;
LAB_1410e43e5:
                      *(int *)(param_2 + 0x28) = (int)param_2[0x28] + 1;
                    }
                    else {
                      *(longlong **)(*plVar15 + (longlong)iVar6 * 8) = local_80;
                      if (iVar6 != -1) goto LAB_1410e43e5;
                    }
                    bVar5 = (**(code **)(*param_1 + 0x300))(param_1);
                    if (*(int *)((longlong)param_2 + 0x114) == 0 ||
                        *(byte *)(param_2 + 0x22) != (bVar5 ^ 1)) {
                      *(byte *)(param_2 + 0x22) = bVar5 ^ 1;
                      *(int *)((longlong)param_2 + 0x114) = *(int *)((longlong)param_2 + 0x114) + 1;
                    }
                    cVar4 = FUN_145800bfe(param_1);
                    if (*(int *)((longlong)param_2 + 0x10c) == 0 || (char)param_2[0x21] != cVar4) {
                      *(char *)(param_2 + 0x21) = cVar4;
                      *(int *)((longlong)param_2 + 0x10c) = *(int *)((longlong)param_2 + 0x10c) + 1;
                    }
                    uVar7 = (uint)((char)param_1[0x3b] != '\0');
                    if (*(int *)((longlong)param_2 + 0xc4) == 0 ||
                        *(uint *)(param_2 + 0x18) != uVar7) {
                      *(uint *)(param_2 + 0x18) = uVar7;
                      *(int *)((longlong)param_2 + 0xc4) = *(int *)((longlong)param_2 + 0xc4) + 1;
                    }
                  }
                }
                else {
                  if (DAT_14c950c29 == 1) {
                    FUN_1456cec3c();
                  }
                  if ((int)param_2[2] == 0 || *(char *)((longlong)param_2 + 0xc) != '\x06') {
                    *(undefined1 *)((longlong)param_2 + 0xc) = 6;
                    *(int *)(param_2 + 2) = (int)param_2[2] + 1;
                  }
                }
              }
            }
            else {
              if (DAT_14c950c29 == 1) {
                FUN_1456cec3c(lVar8);
              }
              if ((int)param_2[2] == 0 || *(char *)((longlong)param_2 + 0xc) != '\a') {
                *(undefined1 *)((longlong)param_2 + 0xc) = 7;
                *(int *)(param_2 + 2) = (int)param_2[2] + 1;
              }
              local_80 = *(longlong **)(lVar8 + 0x150);
              if (local_80 != (longlong *)0x0) {
                (**(code **)(*local_80 + 8))();
              }
              local_78 = *(undefined4 *)(lVar8 + 0x158);
              FUN_14003c038(param_2 + 6,&local_80);
              if (local_80 != (longlong *)0x0) {
                (**(code **)(*local_80 + 0x10))();
              }
            }
          }
        }
      }
      else {
        if (DAT_14c950c29 == 1) {
          FUN_1456cec3c(plVar2);
        }
        lVar8 = FUN_140e21422();
        if ((((lVar8 == 0) || (lVar9 = plVar2[2], lVar9 == 0)) ||
            (*(int *)(lVar9 + 0x38) < *(int *)(lVar8 + 0x38))) ||
           (*(longlong *)(*(longlong *)(lVar9 + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) !=
            lVar8 + 0x30)) {
          lVar8 = FUN_1410e4b5a();
          if (((lVar8 != 0) && (lVar9 = plVar2[2], lVar9 != 0)) &&
             ((*(int *)(lVar8 + 0x38) <= *(int *)(lVar9 + 0x38) &&
              (*(longlong *)(*(longlong *)(lVar9 + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) ==
               lVar8 + 0x30)))) {
            if ((DAT_14c950c29 & 1) == 1) {
              FUN_1456cec3c(plVar2);
            }
            FUN_148b05ade(plVar2,&local_80);
            if (*(int *)((longlong)param_2 + 0x10c) == 0 || (char)param_2[0x21] == '\0') {
              *(undefined1 *)(param_2 + 0x21) = 1;
              *(int *)((longlong)param_2 + 0x10c) = *(int *)((longlong)param_2 + 0x10c) + 1;
            }
            FUN_1411ab38a(&local_80,local_d8);
            FUN_1458b729a(local_d8,&local_c8);
            FUN_140002266(&local_b8,&DAT_14b9b5e50);
            FUN_140775538(param_2 + 0x1a,&local_b8);
            if (local_b8 != (undefined8 *)0x0) {
              FUN_1400020a8();
            }
            if (local_c8 != 0) {
              FUN_1400020a8();
            }
          }
          if (DAT_14cbd7ee8 != 0) {
            if ((longlong)(int)plVar2[0x17] != 0) {
              lVar8 = 0;
              do {
                if (*(longlong *)(plVar2[0x16] + lVar8) == DAT_14cbd7ee8) goto LAB_1410e451f;
                lVar8 = lVar8 + 8;
              } while ((longlong)(int)plVar2[0x17] * 8 != lVar8);
            }
            if ((longlong)(int)plVar2[0x19] != 0) {
              lVar8 = 0;
              do {
                if (*(longlong *)(plVar2[0x18] + lVar8) == DAT_14cbd7ee8) goto LAB_1410e451f;
                lVar8 = lVar8 + 8;
              } while ((longlong)(int)plVar2[0x19] * 8 != lVar8);
            }
          }
          iVar6 = (int)param_2[2];
          if (iVar6 == 0 || *(char *)((longlong)param_2 + 0xc) != '\x03') {
            *(undefined1 *)((longlong)param_2 + 0xc) = 3;
            goto LAB_1410e3fb6;
          }
          goto LAB_1410e3fba;
        }
        if ((DAT_14c950c29 & 1) == 1) {
          FUN_1456cec3c(plVar2);
        }
        if ((int)param_2[2] == 0 || *(char *)((longlong)param_2 + 0xc) != '\x02') {
          *(undefined1 *)((longlong)param_2 + 0xc) = 2;
          *(int *)(param_2 + 2) = (int)param_2[2] + 1;
        }
        iVar6 = (**(code **)(*plVar2 + 800))(plVar2);
        if (iVar6 == 1) {
          dVar16 = 1.0;
        }
        else {
          dVar16 = 0.0;
        }
        if ((int)param_2[0xd] == 0 || dVar16 != (double)param_2[0xc]) {
          param_2[0xc] = (longlong)dVar16;
          *(int *)(param_2 + 0xd) = (int)param_2[0xd] + 1;
        }
        iVar6 = (**(code **)(*plVar2 + 0x328))(plVar2);
        if (iVar6 == 1) {
          plVar17 = (longlong *)&DAT_3ff0000000000000;
        }
        else {
LAB_1410e4a21:
          plVar17 = (longlong *)0x0;
        }
LAB_1410e4a25:
        if ((int)param_2[0x11] == 0 || (double)plVar17 != (double)param_2[0x10]) {
          param_2[0x10] = (longlong)plVar17;
          *(int *)(param_2 + 0x11) = (int)param_2[0x11] + 1;
        }
      }
    }
  }
LAB_1410e4196:
  FUN_1401b9920(local_90,local_88[0]);
  if (local_90 != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(local_a0,(ulonglong)plStack_98 & 0xffffffff);
  if (local_a0 != 0) {
    FUN_1400020a8();
  }
LAB_1410e41e2:
  if ((local_60 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_1410e451f:
  iVar6 = (int)param_2[2];
  if (iVar6 == 0 || *(char *)((longlong)param_2 + 0xc) != '\x04') {
    *(undefined1 *)((longlong)param_2 + 0xc) = 4;
LAB_1410e3fb6:
    *(int *)(param_2 + 2) = iVar6 + 1;
  }
LAB_1410e3fba:
  iVar6 = (**(code **)(*plVar2 + 800))(plVar2);
  if (*(int *)((longlong)param_2 + 0xc4) == 0 || iVar6 != (int)param_2[0x18]) {
    *(int *)(param_2 + 0x18) = iVar6;
    *(int *)((longlong)param_2 + 0xc4) = *(int *)((longlong)param_2 + 0xc4) + 1;
  }
  iVar6 = (**(code **)(*plVar2 + 0x328))(plVar2);
  if (*(int *)((longlong)param_2 + 0xcc) == 0 || iVar6 != (int)param_2[0x19]) {
    *(int *)(param_2 + 0x19) = iVar6;
    *(int *)((longlong)param_2 + 0xcc) = *(int *)((longlong)param_2 + 0xcc) + 1;
  }
  (**(code **)(*plVar2 + 0x330))(plVar2,&local_b8);
  if ((longlong)(int)local_b0 == 0) {
    uVar12 = 0;
  }
  else {
    puVar13 = local_b8 + (longlong)(int)local_b0 * 2;
    puVar14 = local_b8;
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
      local_80 = DAT_14c844840;
      if (DAT_14c844840 == (longlong *)0x0) {
        plVar15 = (longlong *)0x0;
      }
      else {
        (**(code **)(*DAT_14c844840 + 8))();
        plVar15 = local_80;
      }
      local_78 = DAT_14c844848;
      local_70 = 0;
      plVar2 = (longlong *)*puVar14;
      if (plVar15 != plVar2) {
        local_80 = plVar2;
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 8))();
        }
        if (plVar15 != (longlong *)0x0) {
          (**(code **)(*plVar15 + 0x10))(plVar15);
        }
      }
      local_78 = *(undefined4 *)(puVar14 + 1);
      local_70 = local_70 + 1;
      iVar6 = (int)param_2[0x24];
      *(uint *)(param_2 + 0x24) = iVar6 + 1U;
      if (*(uint *)((longlong)param_2 + 0x124) < iVar6 + 1U) {
        FUN_145800c0a(plVar17,iVar6);
      }
      FUN_140dd90de((longlong)iVar6 * 0x18 + *plVar17,&local_80);
      if (iVar6 != -1) {
        *(int *)(param_2 + 0x25) = (int)param_2[0x25] + 1;
      }
      if (local_80 != (longlong *)0x0) {
        (**(code **)(*local_80 + 0x10))();
      }
      puVar14 = puVar14 + 2;
    } while (puVar14 != puVar13);
    uVar12 = (ulonglong)local_b0 & 0xffffffff;
  }
  FUN_1401b9920(local_b8,uVar12);
  if (local_b8 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  goto LAB_1410e4196;
}



// FUNCTION 1410e4a6a FUN_1410e4a6a body=10 status=ok
// SIG undefined FUN_1410e4a6a(void)

undefined8 * FUN_1410e4a6a(undefined8 *param_1,undefined8 *param_2)

{
  *param_2 = *param_1;
  return param_2;
}



// FUNCTION 1410e4a74 FUN_1410e4a74 body=228 status=ok
// SIG undefined FUN_1410e4a74(void)

longlong FUN_1410e4a74(void)

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
  if (DAT_14cb9a0a0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_146591a10;
    local_38 = &LAB_148af40ae;
    local_40 = FUN_146591b2b;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x138;
    FUN_14081cfa3(L"/Script/GameSettings",L"GameSettingValueDiscrete",&DAT_14cb9a0a0,FUN_146591b04);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb9a0a0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410e4b5a FUN_1410e4b5a body=228 status=ok
// SIG undefined FUN_1410e4b5a(void)

longlong FUN_1410e4b5a(void)

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
  if (DAT_14cb9a118 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_146591bb0;
    local_38 = &LAB_148af40c3;
    local_40 = FUN_146591d40;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x198;
    FUN_14081cfa3(L"/Script/GameSettings",L"GameSettingValueDiscreteDynamic_Color",&DAT_14cb9a118,
                  &DAT_148af40c2);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb9a118;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410e4c40 FUN_1410e4c40 body=228 status=ok
// SIG undefined FUN_1410e4c40(void)

longlong FUN_1410e4c40(void)

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
  if (DAT_14cb99dc8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_146590f14;
    local_38 = &LAB_148af36df;
    local_40 = FUN_146590f21;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x180;
    FUN_14081cfa3(L"/Script/GameSettings",L"GameSettingAction",&DAT_14cb99dc8,&DAT_148af36de);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb99dc8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410e4d26 FUN_1410e4d26 body=246 status=ok
// SIG undefined FUN_1410e4d26(void)

longlong FUN_1410e4d26(uint *param_1)

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
  lVar4 = FUN_1410e4e1c();
  if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
      lVar4 + 0x30)) {
    return lVar3;
  }
  return 0;
}



// FUNCTION 1410e4e1c FUN_1410e4e1c body=228 status=ok
// SIG undefined FUN_1410e4e1c(void)

longlong FUN_1410e4e1c(void)

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
  if (DAT_14cb9a4e8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e9e4fe;
    local_38 = &LAB_148b019d3;
    local_40 = FUN_146592fec;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0xa8;
    FUN_14081cfa3(L"/Script/GbxGameSettings",L"GbxGameSettingCollectionData",&DAT_14cb9a4e8,
                  &DAT_148b019d2);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb9a4e8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410e4f02 FUN_1410e4f02 body=81 status=ok
// SIG undefined FUN_1410e4f02(void)

void FUN_1410e4f02(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  FUN_1410e4f54();
  iVar1 = *(int *)(param_1 + 0x70);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x68);
    lVar4 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar4);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x28))(plVar3,param_2);
      }
      lVar4 = lVar4 + 0x18;
    } while ((longlong)iVar1 * 0x18 != lVar4);
  }
  return;
}



// FUNCTION 1410e4f54 FUN_1410e4f54 body=2018 status=ok
// SIG undefined FUN_1410e4f54(void)

void FUN_1410e4f54(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  char cVar5;
  int iVar6;
  longlong *plVar7;
  longlong *plVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_188 [40];
  longlong local_160;
  longlong local_158;
  longlong local_150;
  code *local_148;
  longlong *local_140;
  longlong *local_138;
  int local_130;
  longlong *local_128;
  int local_120;
  longlong *local_118;
  longlong *plStack_110;
  undefined8 *local_108;
  int iStack_100;
  undefined4 uStack_fc;
  longlong local_f8;
  ulonglong uStack_f0;
  longlong local_e8 [2];
  longlong local_d8;
  int local_d0;
  uint local_cc;
  undefined4 uStack_c8;
  int local_c4;
  longlong local_b8;
  undefined4 local_b0;
  code *local_a8;
  undefined8 local_a0;
  longlong *plStack_98;
  undefined8 local_90;
  longlong alStack_88 [5];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_188;
  iVar9 = *(int *)(param_1 + 0x38);
  if ((((longlong)iVar9 != 0) || (*(int *)(param_1 + 0x48) != 0)) &&
     ((longlong)*(int *)(param_2 + 0xa0) != 0)) {
    lVar11 = 0;
    do {
      lVar2 = *(longlong *)(*(longlong *)(param_2 + 0x98) + lVar11);
      if (*(longlong *)(lVar2 + 0x70) == *(longlong *)(param_1 + 8)) {
        if (lVar2 != 0) {
          local_d8 = 0;
          local_d0 = 0;
          local_f8 = 0;
          uStack_f0 = 0;
          local_cc = 0x80;
          uStack_c8 = 0xffffffff;
          local_c4 = 0;
          local_b8 = 0;
          local_b0 = 0;
          if (iVar9 == 0) goto LAB_1410e540a;
          lVar11 = *(longlong *)(param_1 + 0x30);
          local_150 = (longlong)iVar9 * 0x30;
          lVar10 = 0;
          local_160 = lVar11;
          local_158 = param_1;
          goto LAB_1410e5045;
        }
        break;
      }
      lVar11 = lVar11 + 8;
    } while ((longlong)*(int *)(param_2 + 0xa0) * 8 != lVar11);
  }
  goto LAB_1410e54cd;
LAB_1410e5045:
  do {
    plVar7 = *(longlong **)(lVar11 + lVar10);
    if ((plVar7 != (longlong *)0x0) && (*(longlong *)(lVar11 + 0x18 + lVar10) != 0)) {
      (**(code **)(*plVar7 + 0x10))(plVar7,&local_128,param_2);
      plVar7 = *(longlong **)(lVar11 + 0x18 + lVar10);
      (**(code **)(*plVar7 + 0x10))(plVar7,&local_138);
      if ((((local_120 != 0) &&
           ((local_128 != (longlong *)0x0 &&
            (cVar5 = (**(code **)(*local_128 + 0x30))(), cVar5 != '\0')))) && (local_130 != 0)) &&
         ((local_138 != (longlong *)0x0 &&
          (cVar5 = (**(code **)(*local_138 + 0x30))(), cVar5 != '\0')))) {
        (**(code **)(**(longlong **)(lVar11 + lVar10) + 0x18))
                  (*(longlong **)(lVar11 + lVar10),&local_f8);
        local_118 = (longlong *)0x0;
        plStack_110 = (longlong *)((ulonglong)plStack_110 & 0xffffffff00000000);
        FUN_1410e5880(&local_118,&local_128);
        local_108 = (undefined8 *)0x0;
        iStack_100 = 0;
        FUN_1410e59b2(&local_108,&local_138);
        plVar7 = (longlong *)FUN_14001cc68(0x80,0x10);
        plVar7[1] = (longlong)&DAT_100000001;
        *plVar7 = (longlong)&PTR_FUN_14b5414b0;
        local_a8 = (code *)0x0;
        plStack_98 = (longlong *)0x0;
        plVar8 = (longlong *)FUN_14001cc68(0x28,8);
        *plVar8 = (longlong)&PTR_FUN_14b540720;
        plVar8[1] = 0;
        *(undefined4 *)(plVar8 + 2) = 0;
        plStack_98 = plVar8;
        FUN_1410e5880(plVar8 + 1,&local_118);
        plVar8[3] = 0;
        *(undefined4 *)(plVar8 + 4) = 0;
        FUN_1410e59b2(plVar8 + 3,&local_108);
        lVar11 = local_160;
        if (plVar8 != (longlong *)&DAT_fffffffffffffff8) {
          local_a8 = FUN_143fa16a8;
        }
        plVar7[5] = 0;
        plVar7[6] = 0;
        plVar7[3] = 0;
        plVar7[4] = 0;
        plVar7[7] = 2;
        plVar7[2] = (longlong)&PTR_FUN_14b5414d0;
        plVar7[8] = (longlong)local_a8;
        plVar7[10] = 0;
        if (local_a8 != (code *)0x0) {
          plVar8 = plStack_98;
          if (plStack_98 == (longlong *)0x0) {
            plVar8 = alStack_88;
          }
          (**(code **)*plVar8)(plVar8,plVar7 + 10);
          if (local_a8 != (code *)0x0) {
            plVar8 = plStack_98;
            if (plStack_98 == (longlong *)0x0) {
              plVar8 = alStack_88;
            }
            (**(code **)(*plVar8 + 0x10))();
          }
        }
        local_148 = (code *)(plVar7 + 2);
        local_140 = plVar7;
        FUN_1410e573a(&local_148);
        plVar7 = local_140;
        param_1 = local_158;
        local_a8 = local_148;
        local_a0 = local_140;
        if (local_140 == (longlong *)0x0) {
          FUN_1410e57dc(lVar2,&local_a8);
        }
        else {
          LOCK();
          *(int *)(local_140 + 1) = (int)local_140[1] + 1;
          UNLOCK();
          FUN_1410e57dc(lVar2,&local_a8);
          if (plVar7 != (longlong *)0x0) {
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
        plVar7 = local_140;
        if (local_140 != (longlong *)0x0) {
          LOCK();
          plVar8 = local_140 + 1;
          *(int *)plVar8 = (int)*plVar8 + -1;
          UNLOCK();
          if ((int)*plVar8 == 0) {
            (**(code **)*local_140)(local_140);
            LOCK();
            piVar1 = (int *)((longlong)plVar7 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar7 + 0x10))(plVar7);
            }
          }
        }
        if (iStack_100 == 0) {
LAB_1410e52cc:
          if (local_108 != (undefined8 *)0x0) {
            FUN_1400020a8();
          }
        }
        else if (local_108 != (undefined8 *)0x0) {
          (**(code **)*local_108)(local_108,0);
          FUN_1446efa72(&local_108,0,0,0x10);
          iStack_100 = 0;
          goto LAB_1410e52cc;
        }
        if ((int)plStack_110 != 0) {
          if (local_118 == (longlong *)0x0) goto LAB_1410e52ff;
          (**(code **)*local_118)(local_118,0);
          FUN_1446efa72(&local_118,0,0,0x10);
          plStack_110 = (longlong *)((ulonglong)plStack_110 & 0xffffffff00000000);
        }
        if (local_118 != (longlong *)0x0) {
          FUN_1400020a8();
        }
      }
LAB_1410e52ff:
      if (local_130 == 0) {
LAB_1410e5303:
        if (local_138 != (longlong *)0x0) {
          FUN_1400020a8();
        }
      }
      else if (local_138 != (longlong *)0x0) {
        (**(code **)*local_138)(local_138,0);
        FUN_1446efa72(&local_138,0,0,0x10);
        local_130 = 0;
        goto LAB_1410e5303;
      }
      if (local_120 != 0) {
        if (local_128 == (longlong *)0x0) goto LAB_1410e5321;
        (**(code **)*local_128)(local_128,0);
        FUN_1446efa72(&local_128,0,0,0x10);
        local_120 = 0;
      }
      if (local_128 != (longlong *)0x0) {
        FUN_1400020a8();
      }
    }
LAB_1410e5321:
    lVar10 = lVar10 + 0x30;
  } while (local_150 != lVar10);
LAB_1410e540a:
  if ((longlong)*(int *)(param_1 + 0x48) != 0) {
    lVar11 = *(longlong *)(param_1 + 0x40);
    lVar10 = (longlong)*(int *)(param_1 + 0x48) << 3;
    do {
      FUN_144a13f80(&local_f8,&local_a8,lVar11,0);
      lVar11 = lVar11 + 8;
      lVar10 = lVar10 + -8;
    } while (lVar10 != 0);
  }
  puVar4 = local_90;
  if (local_c4 < (int)uStack_f0) {
    local_118 = (longlong *)&DAT_100000000;
    local_108 = (undefined8 *)&DAT_ffffffff;
    iStack_100 = 0;
    plStack_110 = local_e8;
    if (local_d0 == 0) {
      iVar9 = 0;
    }
    else {
      FUN_1449c0562(&local_118);
      iVar9 = local_d0;
    }
    local_90 = local_108;
    puVar4 = local_90;
    alStack_88[0] = CONCAT44(uStack_fc,iStack_100);
    local_a0 = local_118;
    plStack_98 = plStack_110;
    local_a8 = (code *)&local_f8;
    local_90._4_4_ = (int)((ulonglong)local_108 >> 0x20);
    if ((local_90._4_4_ != iVar9) || (plStack_110 != local_e8)) {
      iVar6 = local_90._4_4_;
      local_90 = puVar4;
      do {
        if ((longlong)*(int *)(param_2 + 0xa0) != 0) {
          lVar11 = 0;
          do {
            lVar10 = *(longlong *)(*(longlong *)(param_2 + 0x98) + lVar11);
            if (*(longlong *)(lVar10 + 0x70) ==
                *(longlong *)(*(longlong *)local_a8 + (longlong)iVar6 * 0x10)) {
              if (lVar10 != 0) {
                FUN_14580141a(lVar2);
              }
              break;
            }
            lVar11 = lVar11 + 8;
          } while ((longlong)*(int *)(param_2 + 0xa0) * 8 != lVar11);
        }
        local_90 = (undefined8 *)CONCAT44(local_90._4_4_,(uint)local_90 & ~local_a0._4_4_);
        FUN_1449c0562(&local_a0);
        iVar6 = local_90._4_4_;
      } while (((local_90._4_4_ != iVar9) || (plStack_98 != local_e8)) ||
              (puVar4 = local_90, local_a8 != (code *)&local_f8));
    }
  }
  local_90 = puVar4;
  FUN_1410e5ae4(lVar2,1);
  local_b0 = 0;
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  uVar3 = uStack_f0 >> 0x20;
  uStack_f0 = uStack_f0 & 0xffffffff00000000;
  if ((int)uVar3 != 0) {
    FUN_14472eb64(&local_f8,0);
  }
  uStack_c8 = 0xffffffff;
  local_c4 = 0;
  local_d0 = 0;
  if (0x80 < local_cc) {
    local_cc = 0x80;
    FUN_1446efbd8(local_e8,0);
  }
  if (local_d8 != 0) {
    FUN_1400020a8();
  }
  if (local_f8 != 0) {
    FUN_1400020a8();
  }
LAB_1410e54cd:
  if ((local_60 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1410e573a FUN_1410e573a body=162 status=ok
// SIG undefined FUN_1410e573a(void)

void FUN_1410e573a(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_1410e5779;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_1410e5779;
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
LAB_1410e5779:
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
                    /* WARNING: Could not recover jumptable at 0x0001410e57d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1410e57dc FUN_1410e57dc body=162 status=ok
// SIG undefined FUN_1410e57dc(void)

void FUN_1410e57dc(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined1 local_30 [8];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = *(int *)(param_1 + 0xe8);
  *(uint *)(param_1 + 0xe8) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0xec) < iVar1 + 1U) {
    FUN_1410e5ee6((longlong *)(param_1 + 0xe0),iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0xe0);
  *(longlong *)(lVar2 + (longlong)iVar1 * 0x10) = *param_2;
  lVar3 = param_2[1];
  *(longlong *)(lVar2 + 8 + (longlong)iVar1 * 0x10) = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  FUN_1410e630c(*param_2 + 0x18,local_30,param_1,FUN_1410e5ae4);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410e5880 FUN_1410e5880 body=305 status=ok
// SIG undefined FUN_1410e5880(void)

void FUN_1410e5880(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 == param_1) goto LAB_1410e591a;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  iVar3 = 0;
  if ((int)param_2[1] == 0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    param_2 = (longlong *)*param_2;
    puVar2 = (undefined8 *)0x0;
    iVar3 = 0;
    if (param_2 != (longlong *)0x0) {
      (**(code **)(*param_2 + 0x40))(param_2,&local_30);
      puVar2 = local_30;
      iVar3 = local_28;
    }
  }
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  if ((int)param_1[1] == 0) {
LAB_1410e58f3:
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
      goto LAB_1410e58f3;
    }
  }
  *param_1 = (longlong)puVar2;
  *(int *)(param_1 + 1) = iVar3;
  if (local_28 != 0) {
    if (local_30 == (undefined8 *)0x0) goto LAB_1410e591a;
    (**(code **)*local_30)(local_30,0);
    FUN_1446efa72(&local_30,0,0,0x10);
    local_28 = 0;
  }
  if (local_30 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_1410e591a:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410e59b2 FUN_1410e59b2 body=305 status=ok
// SIG undefined FUN_1410e59b2(void)

void FUN_1410e59b2(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 == param_1) goto LAB_1410e5a4c;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  iVar3 = 0;
  if ((int)param_2[1] == 0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    param_2 = (longlong *)*param_2;
    puVar2 = (undefined8 *)0x0;
    iVar3 = 0;
    if (param_2 != (longlong *)0x0) {
      (**(code **)(*param_2 + 0x40))(param_2,&local_30);
      puVar2 = local_30;
      iVar3 = local_28;
    }
  }
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  if ((int)param_1[1] == 0) {
LAB_1410e5a25:
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
      goto LAB_1410e5a25;
    }
  }
  *param_1 = (longlong)puVar2;
  *(int *)(param_1 + 1) = iVar3;
  if (local_28 != 0) {
    if (local_30 == (undefined8 *)0x0) goto LAB_1410e5a4c;
    (**(code **)*local_30)(local_30,0);
    FUN_1446efa72(&local_30,0,0,0x10);
    local_28 = 0;
  }
  if (local_30 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_1410e5a4c:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410e5ae4 FUN_1410e5ae4 body=242 status=ok
// SIG undefined FUN_1410e5ae4(void)

void FUN_1410e5ae4(longlong *param_1,char param_2)

{
  undefined1 auStack_78 [40];
  undefined1 local_50 [8];
  longlong local_48;
  undefined4 local_40;
  longlong local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((param_1[0xb] != 0) && (*(char *)((longlong)param_1 + 0x10b) == '\0')) {
    *(undefined1 *)((longlong)param_1 + 0x10b) = 1;
    FUN_1410e5ccc(param_1,local_50);
    *(undefined1 *)(param_1 + 0x22) = local_50[0];
    FUN_1410e5bda(param_1 + 0x23,&local_48);
    FUN_140a6ab98(param_1 + 0x25,&local_38);
    FUN_1401b9920(local_38,local_30);
    if (local_38 != 0) {
      FUN_1400020a8();
    }
    FUN_1447a1747(local_48,local_40);
    if (local_48 != 0) {
      FUN_1400020a8();
    }
    if (param_2 != '\0') {
      (**(code **)(*param_1 + 0x2e8))(param_1);
      FUN_1410e5c2a(param_1 + 8,param_1);
    }
    *(undefined1 *)((longlong)param_1 + 0x10b) = 0;
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410e5bda FUN_1410e5bda body=80 status=ok
// SIG undefined FUN_1410e5bda(void)

longlong * FUN_1410e5bda(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    FUN_1447a1747(*param_1,(int)param_1[1]);
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



// FUNCTION 1410e5c2a FUN_1410e5c2a body=162 status=ok
// SIG undefined FUN_1410e5c2a(void)

void FUN_1410e5c2a(longlong *param_1,undefined8 param_2)

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
        goto LAB_1410e5cb7;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_1410e5cb7:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 1410e5ccc FUN_1410e5ccc body=112 status=ok
// SIG undefined FUN_1410e5ccc(void)

byte * FUN_1410e5ccc(longlong *param_1,byte *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  *param_2 = *param_2 & 0xf0 | 7;
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  param_2[0x12] = 0;
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  param_2[0x15] = 0;
  param_2[0x16] = 0;
  param_2[0x17] = 0;
  param_2[0x18] = 0;
  param_2[0x19] = 0;
  param_2[0x1a] = 0;
  param_2[0x1b] = 0;
  param_2[0x1c] = 0;
  param_2[0x1d] = 0;
  param_2[0x1e] = 0;
  param_2[0x1f] = 0;
  param_2[0x20] = 0;
  param_2[0x21] = 0;
  param_2[0x22] = 0;
  param_2[0x23] = 0;
  param_2[0x24] = 0;
  param_2[0x25] = 0;
  param_2[0x26] = 0;
  param_2[0x27] = 0;
  (**(code **)(*param_1 + 0x2c8))();
  lVar2 = param_1[0x1d];
  if ((longlong)(int)lVar2 != 0) {
    lVar1 = param_1[0x1c];
    lVar3 = 0;
    do {
      (**(code **)(**(longlong **)(lVar1 + lVar3) + 0x20))
                (*(longlong **)(lVar1 + lVar3),param_1[0xb],param_2);
      lVar3 = lVar3 + 0x10;
    } while ((longlong)(int)lVar2 * 0x10 != lVar3);
  }
  return param_2;
}



// FUNCTION 1410e5d3e FUN_1410e5d3e body=267 status=ok
// SIG undefined FUN_1410e5d3e(void)

undefined8 FUN_1410e5d3e(longlong param_1,undefined8 param_2)

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
    if (iVar1 == 2) goto LAB_1410e5e43;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1410e5e43;
    }
    FUN_1400841de(param_1 + 0x18,&local_30);
  }
  else {
LAB_1410e5e43:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1410e5df9;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5,param_2);
      uVar6 = 1;
      goto LAB_1410e5df9;
    }
  }
  uVar6 = 0;
LAB_1410e5df9:
  if (local_30 != 0) {
    FUN_140113f3a(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410e5e54 FUN_1410e5e54 body=146 status=ok
// SIG undefined FUN_1410e5e54(void)

longlong * FUN_1410e5e54(longlong param_1,longlong *param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  
  uVar1 = *(undefined1 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0xc);
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  FUN_1446efa72(param_2,0,3,0x10);
  *(undefined4 *)(param_2 + 1) = 3;
  puVar3 = (undefined8 *)*param_2;
  *puVar3 = &PTR_LAB_14b5407d0;
  LOCK();
  UNLOCK();
  lVar5 = DAT_14c758608 + 1;
  lVar4 = DAT_14c758608 + 1;
  if (lVar5 == 0) {
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 2;
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  puVar3[2] = lVar5;
  *puVar3 = &PTR_FUN_14b540840;
  *(undefined1 *)(puVar3 + 3) = uVar1;
  *(undefined8 *)((longlong)puVar3 + 0x1c) = uVar2;
  return param_2;
}



// FUNCTION 1410e5ee6 FUN_1410e5ee6 body=269 status=ok
// SIG undefined FUN_1410e5ee6(void)

void FUN_1410e5ee6(longlong param_1,int param_2)

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



// FUNCTION 1410e5ff4 FUN_1410e5ff4 body=136 status=ok
// SIG undefined FUN_1410e5ff4(void)

longlong * FUN_1410e5ff4(longlong param_1,longlong *param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  
  uVar1 = *(undefined1 *)(param_1 + 8);
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  FUN_1446efa72(param_2,0,2,0x10);
  *(undefined4 *)(param_2 + 1) = 2;
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_14b5407d0;
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
  puVar2[2] = lVar4;
  *puVar2 = &PTR_FUN_14b5408b0;
  *(undefined1 *)(puVar2 + 3) = uVar1;
  return param_2;
}



// FUNCTION 1410e607c FUN_1410e607c body=220 status=ok
// SIG undefined FUN_1410e607c(void)

longlong * FUN_1410e607c(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  
  plVar1 = *(longlong **)(param_1 + 8);
  if (plVar1 == (longlong *)0x0) {
    uVar5 = *(undefined4 *)(param_1 + 0x10);
  }
  else {
    (**(code **)(*plVar1 + 8))(plVar1);
    uVar5 = *(undefined4 *)(param_1 + 0x10);
    (**(code **)(*plVar1 + 8))(plVar1);
  }
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  FUN_1446efa72(param_2,0,3,0x10);
  *(undefined4 *)(param_2 + 1) = 3;
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_14b5411e0;
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
  puVar2[2] = lVar4;
  *puVar2 = &PTR_FUN_14b541250;
  puVar2[3] = plVar1;
  if (plVar1 == (longlong *)0x0) {
    *(undefined4 *)(puVar2 + 4) = uVar5;
  }
  else {
    (**(code **)(*plVar1 + 8))(plVar1);
    *(undefined4 *)(puVar2 + 4) = uVar5;
    (**(code **)(*plVar1 + 0x10))(plVar1);
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
  return param_2;
}



// FUNCTION 1410e6158 FUN_1410e6158 body=434 status=ok
// SIG undefined FUN_1410e6158(void)

longlong * FUN_1410e6158(longlong param_1,longlong *param_2)

{
  void *pvVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  void *local_48;
  int local_40;
  undefined4 local_3c;
  void *local_38;
  int local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = (void *)0x0;
  local_30 = *(int *)(param_1 + 0x10);
  lVar4 = (longlong)local_30;
  pvVar1 = *(void **)(param_1 + 8);
  if (lVar4 == 0) {
    local_2c = 0;
    local_40 = 0;
  }
  else {
    FUN_1446dd670(&local_38,local_30,0);
    memcpy(local_38,pvVar1,lVar4 * 2);
    pvVar1 = local_38;
    lVar4 = (longlong)local_30;
    local_48 = (void *)0x0;
    local_40 = local_30;
    if (lVar4 != 0) {
      FUN_1446dd670(&local_48,local_30,0);
      memcpy(local_48,pvVar1,lVar4 * 2);
      goto LAB_1410e6209;
    }
  }
  local_48 = (void *)0x0;
  local_3c = 0;
LAB_1410e6209:
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  FUN_1446efa72(param_2,0,3,0x10);
  pvVar1 = local_48;
  *(undefined4 *)(param_2 + 1) = 3;
  puVar2 = (undefined8 *)*param_2;
  *puVar2 = &PTR_LAB_14b5411e0;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar4 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  puVar2[2] = lVar3;
  *puVar2 = &PTR_FUN_14b541170;
  puVar2[3] = 0;
  lVar4 = (longlong)local_40;
  *(int *)(puVar2 + 4) = local_40;
  if (lVar4 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x24) = 0;
  }
  else {
    FUN_1446dd670(puVar2 + 3,local_40,0);
    memcpy((void *)puVar2[3],pvVar1,lVar4 * 2);
  }
  if (local_48 != (void *)0x0) {
    FUN_1400020a8(local_48);
  }
  if (local_38 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410e630c FUN_1410e630c body=765 status=ok
// SIG undefined FUN_1410e630c(void)

undefined8 * FUN_1410e630c(longlong *param_1,undefined8 *param_2,longlong param_3,longlong param_4)

{
  uint uVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_78 [32];
  longlong *local_58;
  int local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = (longlong *)0x0;
  local_50 = 0;
  FUN_1446efa72(&local_58,0,3,0x10);
  plVar2 = local_58;
  local_50 = 3;
  *local_58 = (longlong)&PTR_LAB_149e06450;
  LOCK();
  UNLOCK();
  lVar6 = DAT_14c758608 + 1;
  lVar9 = DAT_14c758608 + 1;
  if (lVar6 == 0) {
    LOCK();
    UNLOCK();
    lVar6 = DAT_14c758608 + 2;
    lVar9 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar9;
  local_58[2] = lVar6;
  *local_58 = (longlong)&PTR_FUN_14b538540;
  local_58[3] = 0;
  iVar8 = 0;
  if (param_3 != 0) {
    uVar1 = *(uint *)(param_3 + 0xc);
    *(uint *)(local_58 + 3) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar9 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar9 = 0;
    }
    iVar8 = *(int *)(lVar9 + 0x10);
    if (*(int *)(lVar9 + 0x10) == 0) {
      LOCK();
      iVar8 = DAT_14c964868 + 1;
      UNLOCK();
      iVar4 = DAT_14c964868 + 1;
      bVar10 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar8;
      if (bVar10) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar4);
      }
      LOCK();
      iVar8 = *(int *)(lVar9 + 0x10);
      bVar10 = iVar8 == 0;
      if (bVar10) {
        *(int *)(lVar9 + 0x10) = iVar4;
        iVar8 = 0;
      }
      UNLOCK();
      if (bVar10) {
        iVar8 = iVar4;
      }
    }
  }
  *(int *)((longlong)plVar2 + 0x1c) = iVar8;
  plVar2[4] = param_4;
  *param_2 = 0;
  if (((local_50 == 0) || (local_58 == (longlong *)0x0)) ||
     (cVar3 = (**(code **)(*local_58 + 0x30))(), cVar3 == '\0')) {
    if (local_50 != 0) {
      if (local_58 == (longlong *)0x0) goto LAB_1410e64b8;
      (**(code **)*local_58)(local_58,0);
      FUN_1446efa72(&local_58,0,0,0x10);
      goto LAB_1410e64a2;
    }
  }
  else {
    if (*(int *)((longlong)param_1 + 0x14) < 1) {
      iVar8 = (int)param_1[1];
      iVar4 = (int)param_1[2] + -1;
      *(int *)(param_1 + 2) = iVar4;
      if (iVar4 <= iVar8) {
        iVar4 = iVar8;
        if (0 < iVar8) {
          iVar7 = 0;
          do {
            if (((*(int *)(*param_1 + 8 + (longlong)iVar7 * 0x10) == 0) ||
                (plVar2 = *(longlong **)(*param_1 + (longlong)iVar7 * 0x10),
                plVar2 == (longlong *)0x0)) ||
               (cVar3 = (**(code **)(*plVar2 + 0x28))(), cVar3 != '\0')) {
              FUN_14005b288(param_1,iVar7);
              FUN_14005b248(param_1);
            }
            else {
              iVar7 = iVar7 + 1;
            }
            iVar4 = (int)param_1[1];
          } while (iVar7 < iVar4);
        }
        iVar7 = 2;
        if (2 < iVar4 * 2) {
          iVar7 = iVar4 * 2;
        }
        *(int *)(param_1 + 2) = iVar7;
        if ((iVar7 < iVar8) && (*(int *)((longlong)param_1 + 0xc) != iVar4)) {
          FUN_14045812c();
        }
      }
    }
    uVar5 = 0;
    if ((local_50 != 0) && (local_58 != (longlong *)0x0)) {
      (**(code **)(*local_58 + 0x38))(local_58,&local_48);
      uVar5 = local_48;
    }
    *param_2 = uVar5;
    iVar8 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar8 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar8 + 1U) {
      FUN_1447a71f6(param_1,iVar8);
    }
    lVar9 = *param_1;
    lVar6 = (longlong)iVar8 * 0x10;
    *(undefined8 *)(lVar9 + lVar6) = 0;
    *(undefined4 *)(lVar9 + 8 + lVar6) = 0;
    *(longlong **)(lVar9 + lVar6) = local_58;
    local_58 = (longlong *)0x0;
    *(int *)(lVar9 + 8 + lVar6) = local_50;
LAB_1410e64a2:
    local_50 = 0;
  }
  if (local_58 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_1410e64b8:
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1410e660a FUN_1410e660a body=267 status=ok
// SIG undefined FUN_1410e660a(void)

undefined8 FUN_1410e660a(longlong param_1,undefined8 param_2)

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
    if (iVar1 == 2) goto LAB_1410e670f;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1410e670f;
    }
    FUN_1400841de(param_1 + 0x18,&local_30);
  }
  else {
LAB_1410e670f:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1410e66c5;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5,param_2);
      uVar6 = 1;
      goto LAB_1410e66c5;
    }
  }
  uVar6 = 0;
LAB_1410e66c5:
  if (local_30 != 0) {
    FUN_140113f3a(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410e6716 FUN_1410e6716 body=32 status=ok
// SIG undefined FUN_1410e6716(void)

void FUN_1410e6716(longlong *param_1)

{
  (**(code **)(*param_1 + 0x2d0))();
  FUN_1410e5ae4(param_1,1);
  return;
}



// FUNCTION 1410e6738 FUN_1410e6738 body=370 status=ok
// SIG undefined FUN_1410e6738(void)

undefined8 * FUN_1410e6738(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 1410e6906 FUN_1410e6906 body=370 status=ok
// SIG undefined FUN_1410e6906(void)

undefined8 * FUN_1410e6906(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 1410e6a7a FUN_1410e6a7a body=202 status=ok
// SIG undefined FUN_1410e6a7a(void)

int FUN_1410e6a7a(longlong *param_1,uint param_2,longlong *param_3)

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
        iVar1 != -1; iVar1 = *(int *)(*param_1 + 0x10 + (longlong)iVar1 * 0x18)) {
      lVar2 = *param_3;
      if ((lVar2 != 0 & bVar4) == 1) {
        FUN_1456cec3c(lVar2);
        bVar4 = DAT_14c950c29;
      }
      lVar3 = *(longlong *)(*param_1 + (longlong)iVar1 * 0x18);
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



// FUNCTION 1410e6b44 FUN_1410e6b44 body=1076 status=ok
// SIG undefined FUN_1410e6b44(void)

void FUN_1410e6b44(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  uint uVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_78 [40];
  longlong *local_50;
  int local_48;
  undefined1 local_40 [8];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = (longlong *)0x0;
  local_48 = 0;
  FUN_1446efa72(&local_50,0,3,0x10);
  plVar1 = local_50;
  local_48 = 3;
  *local_50 = (longlong)&PTR_LAB_14b538b70;
  LOCK();
  UNLOCK();
  lVar6 = DAT_14c758608 + 1;
  lVar9 = DAT_14c758608 + 1;
  if (lVar6 == 0) {
    LOCK();
    UNLOCK();
    lVar6 = DAT_14c758608 + 2;
    lVar9 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar9;
  local_50[2] = lVar6;
  *local_50 = (longlong)&PTR_FUN_14b5387e0;
  local_50[3] = 0;
  iVar7 = 0;
  if (param_1 != 0) {
    uVar2 = *(uint *)(param_1 + 0xc);
    *(uint *)(local_50 + 3) = uVar2;
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar9 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar9 = 0;
    }
    iVar7 = *(int *)(lVar9 + 0x10);
    if (*(int *)(lVar9 + 0x10) == 0) {
      LOCK();
      iVar7 = DAT_14c964868 + 1;
      UNLOCK();
      iVar5 = DAT_14c964868 + 1;
      bVar10 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar7;
      if (bVar10) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar5);
      }
      LOCK();
      iVar7 = *(int *)(lVar9 + 0x10);
      bVar10 = iVar7 == 0;
      if (bVar10) {
        *(int *)(lVar9 + 0x10) = iVar5;
        iVar7 = 0;
      }
      UNLOCK();
      if (bVar10) {
        iVar7 = iVar5;
      }
    }
  }
  *(int *)((longlong)plVar1 + 0x1c) = iVar7;
  plVar1[4] = (longlong)&LAB_1459ca320;
  if (((local_48 == 0) || (local_50 == (longlong *)0x0)) ||
     (cVar4 = (**(code **)(*local_50 + 0x30))(), cVar4 == '\0')) {
    if (local_48 != 0) {
      if (local_50 == (longlong *)0x0) goto LAB_1410e6d4a;
      (**(code **)*local_50)(local_50,0);
      FUN_1446efa72(&local_50,0,0,0x10);
      goto LAB_1410e6d34;
    }
  }
  else {
    plVar1 = param_2 + 5;
    if (*(int *)((longlong)param_2 + 0x3c) < 1) {
      iVar7 = (int)param_2[6];
      iVar5 = (int)param_2[7] + -1;
      *(int *)(param_2 + 7) = iVar5;
      if (iVar5 <= iVar7) {
        iVar5 = iVar7;
        if (0 < iVar7) {
          iVar8 = 0;
          do {
            if (((*(int *)(*plVar1 + 8 + (longlong)iVar8 * 0x10) == 0) ||
                (plVar3 = *(longlong **)(*plVar1 + (longlong)iVar8 * 0x10),
                plVar3 == (longlong *)0x0)) ||
               (cVar4 = (**(code **)(*plVar3 + 0x28))(), cVar4 != '\0')) {
              FUN_14005b288(plVar1,iVar8);
              FUN_14005b248(plVar1);
            }
            else {
              iVar8 = iVar8 + 1;
            }
            iVar5 = (int)param_2[6];
          } while (iVar8 < iVar5);
        }
        iVar8 = 2;
        if (2 < iVar5 * 2) {
          iVar8 = iVar5 * 2;
        }
        *(int *)(param_2 + 7) = iVar8;
        if ((iVar8 < iVar7) && (*(int *)((longlong)param_2 + 0x34) != iVar5)) {
          FUN_14045812c();
        }
      }
    }
    if ((local_48 != 0) && (local_50 != (longlong *)0x0)) {
      (**(code **)(*local_50 + 0x38))(local_50,local_40);
    }
    iVar7 = (int)param_2[6];
    *(uint *)(param_2 + 6) = iVar7 + 1U;
    if (*(uint *)((longlong)param_2 + 0x34) < iVar7 + 1U) {
      FUN_1447a71f6(plVar1,iVar7);
    }
    lVar9 = *plVar1;
    lVar6 = (longlong)iVar7 * 0x10;
    *(undefined8 *)(lVar9 + lVar6) = 0;
    *(undefined4 *)(lVar9 + 8 + lVar6) = 0;
    *(longlong **)(lVar9 + lVar6) = local_50;
    local_50 = (longlong *)0x0;
    *(int *)(lVar9 + 8 + lVar6) = local_48;
LAB_1410e6d34:
    local_48 = 0;
  }
  if (local_50 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_1410e6d4a:
  FUN_140efe18a(param_2 + 8,&local_50,param_1,&LAB_1410e5e4a);
  if (param_2 != (longlong *)0x0) {
    lVar9 = FUN_1410e4c40();
    if ((*(int *)(param_2[2] + 0x38) < *(int *)(lVar9 + 0x38)) ||
       (*(longlong *)(*(longlong *)(param_2[2] + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) !=
        lVar9 + 0x30)) {
      lVar9 = FUN_14143f53e();
      if ((*(int *)(lVar9 + 0x38) <= *(int *)(param_2[2] + 0x38)) &&
         (*(longlong *)(*(longlong *)(param_2[2] + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) ==
          lVar9 + 0x30)) {
        FUN_140efe18a(param_2 + 0x29,&local_50,param_1,&LAB_148af4fd8);
      }
    }
    else {
      FUN_145ad6498(param_2 + 0x27,&local_50,param_1);
    }
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(param_2);
    }
  }
  iVar7 = *(int *)(param_1 + 0xa0);
  *(uint *)(param_1 + 0xa0) = iVar7 + 1U;
  if (*(uint *)(param_1 + 0xa4) < iVar7 + 1U) {
    FUN_1410e6f7a((longlong *)(param_1 + 0x98),iVar7);
  }
  *(longlong **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar7 * 8) = param_2;
  if ((param_2 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  (**(code **)(*param_2 + 0x2a8))(param_2,&local_50);
  plVar1 = local_50;
  lVar9 = (longlong)local_48;
  if (lVar9 != 0) {
    lVar6 = 0;
    do {
      FUN_1410e6b44(param_1,*(undefined8 *)((longlong)plVar1 + lVar6));
      lVar6 = lVar6 + 8;
    } while (lVar9 * 8 != lVar6);
  }
  if (local_50 != (longlong *)0x0) {
    FUN_1400020a8(local_50);
  }
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1410e6f7a FUN_1410e6f7a body=353 status=ok
// SIG undefined FUN_1410e6f7a(void)

void FUN_1410e6f7a(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1410e6fff;
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
LAB_1410e6fff:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 1410e70dc FUN_1410e70dc body=51 status=ok
// SIG undefined FUN_1410e70dc(void)

longlong FUN_1410e70dc(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((longlong)*(int *)(param_1 + 0xa0) != 0) {
    lVar2 = 0;
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x98) + lVar2);
      if (*(longlong *)(lVar1 + 0x70) == *param_2) {
        return lVar1;
      }
      lVar2 = lVar2 + 8;
    } while ((longlong)*(int *)(param_1 + 0xa0) * 8 != lVar2);
  }
  return 0;
}



// FUNCTION 1410e7110 FUN_1410e7110 body=30 status=ok
// SIG undefined FUN_1410e7110(void)

void FUN_1410e7110(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[3];
  *(undefined8 *)(param_1 + 0x180) = param_2[2];
  *(undefined8 *)(param_1 + 0x188) = uVar3;
  *(undefined8 *)(param_1 + 0x170) = uVar1;
  *(undefined8 *)(param_1 + 0x178) = uVar2;
  *(undefined8 *)(param_1 + 400) = param_3;
  return;
}



// FUNCTION 1410e712e FUN_1410e712e body=142 status=ok
// SIG undefined FUN_1410e712e(void)

uint FUN_1410e712e(void)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  uStack_20 = 0;
  uVar3 = 0;
  (**(code **)(*DAT_14ca83900 + 0x398))(DAT_14ca83900,&local_28,0);
  if ((longlong)(int)uStack_20 != 0) {
    lVar2 = 0;
    uVar3 = 0;
    do {
      uVar1 = *(uint *)(local_28 + 8 + lVar2);
      if (uVar3 < uVar1) {
        uVar3 = uVar1;
      }
      lVar2 = lVar2 + 0xc;
    } while ((longlong)(int)uStack_20 * 0xc != lVar2);
  }
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410e71be FUN_1410e71be body=3151 status=ok
// SIG undefined FUN_1410e71be(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1410e71be(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  int iVar15;
  int iVar16;
  uint *puVar17;
  uint uVar18;
  ulonglong uVar19;
  int iVar20;
  ulonglong uVar21;
  longlong *plVar22;
  longlong *plVar23;
  uint uVar24;
  uint uVar25;
  undefined1 auStack_208 [32];
  int local_1e8;
  uint local_1e4;
  uint *local_1e0;
  ulonglong local_1d8;
  int local_1d0;
  undefined4 local_1cc;
  longlong local_1c8;
  longlong *local_1c0;
  longlong *local_1b8;
  longlong *local_1b0;
  ulonglong local_1a8;
  longlong *local_1a0;
  int local_194;
  longlong local_190;
  undefined8 *local_188;
  uint *local_180;
  ulonglong local_178;
  ulonglong local_170;
  longlong *local_168;
  longlong *local_160;
  longlong local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  longlong *plStack_130;
  undefined1 local_128;
  byte local_127;
  undefined1 local_126;
  undefined4 local_124;
  longlong *local_120;
  undefined4 local_118;
  uint uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  longlong *plStack_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  uint *local_b0;
  undefined8 local_a8;
  uint local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_208;
  local_190 = param_2;
  if ((((param_2 != 0) && (*(char *)(param_1 + 0x111) == '\0')) &&
      (lVar9 = FUN_140059518(param_1 + 0x44), lVar9 != 0)) &&
     (lVar10 = FUN_14120f7e6(lVar9), lVar10 != 0)) {
    local_78 = 0;
    local_70 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_6c = 0xffffffff00000080;
    local_64 = 0;
    local_58 = 0;
    local_50 = 0;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14cbd7fb8) && (FUN_144b3d300(&DAT_14cbd7fb8), DAT_14cbd7fb8 == -1)) {
      DAT_14cbd7f88 = 0;
      _DAT_14cbd7f90 = 0;
      DAT_14cbd7f68 = 0;
      _DAT_14cbd7f70 = 0;
      _DAT_14cbd7f94 = 0xffffffff00000080;
      _DAT_14cbd7f9c = 0;
      DAT_14cbd7fa8 = 0;
      _DAT_14cbd7fb0 = 0;
      atexit(FUN_1442877bc);
      _Init_thread_footer(&DAT_14cbd7fb8);
    }
    FUN_1449ad616(&DAT_14cbd7f68);
    FUN_1446ddc76(&local_c0,"CategoryTitle_Misc",1);
    FUN_1446ddc76(&local_c8,"CategoryTitle_Movement_Gamepad",1);
    lVar10 = local_190;
    FUN_14119b1f2(&local_98,local_190,local_c8,local_c0);
    FUN_1446ddc76(&local_d0,"CategoryTitle_Misc",1);
    FUN_1446ddc76(&local_d8,"CategoryTitle_Combat_Gamepad",1);
    FUN_14119b1f2(&local_98,lVar10,local_d8,local_d0);
    FUN_1446ddc76(&local_e0,"CategoryTitle_Misc",1);
    FUN_1446ddc76(&local_e8,"CategoryTitle_Communication_Gamepad",1);
    FUN_14119b1f2(&local_98,lVar10,local_e8,local_e0);
    FUN_1446ddc76(&local_f0,"CategoryTitle_Misc",1);
    FUN_1446ddc76(&local_f8,"CategoryTitle_Vehicle_Gamepad",1);
    FUN_14119b1f2(&local_98,lVar10,local_f8,local_f0);
    lVar9 = FUN_1400b6e86(lVar9);
    if ((lVar9 != 0) &&
       (lVar9 = (**(code **)(*(longlong *)(lVar9 + 0x30) + 0x18))(lVar9 + 0x30), lVar9 != 0)) {
      local_160 = (longlong *)FUN_145827b52(lVar9);
      local_168 = local_160 + 2;
      local_148 = 0x100000000;
      local_138 = 0xffffffff;
      plStack_130 = (longlong *)((ulonglong)plStack_130 & 0xffffffff00000000);
      uStack_140 = local_168;
      if ((int)local_160[5] == 0) {
        local_194 = 0;
      }
      else {
        FUN_1449c0562(&local_148);
        local_194 = (int)local_160[5];
      }
      local_108 = local_138;
      uVar4 = local_108;
      plStack_100 = plStack_130;
      local_118 = (undefined4)local_148;
      uStack_114 = local_148._4_4_;
      uStack_110 = (undefined4)uStack_140;
      uStack_10c = uStack_140._4_4_;
      local_108._4_4_ = (int)((ulonglong)local_138 >> 0x20);
      iVar20 = local_108._4_4_;
      local_158 = param_1;
      local_120 = local_160;
      if ((local_108._4_4_ != local_194) || (local_108 = uVar4, uStack_140 != local_168)) {
        do {
          local_108 = uVar4;
          lVar9 = *local_120;
          plVar11 = (longlong *)FUN_145827b58(*(undefined8 *)(lVar9 + 8 + (longlong)iVar20 * 0x18));
          local_1c0 = plVar11 + 2;
          local_148 = 0x100000000;
          local_138 = 0xffffffff;
          plStack_130 = (longlong *)((ulonglong)plStack_130 & 0xffffffff00000000);
          uStack_140 = local_1c0;
          if ((int)plVar11[5] == 0) {
            uVar12 = 1;
            local_1e4 = 0xffffffff;
            iVar6 = 0;
            iVar7 = 0;
            local_138._4_4_ = 0;
            local_1a8 = 0;
          }
          else {
            FUN_1449c0562(&local_148);
            local_1a8 = local_148 & 0xffffffff;
            uVar12 = local_148 >> 0x20;
            local_1e4 = (uint)local_138;
            iVar6 = (int)plVar11[5];
            iVar7 = (int)plStack_130;
          }
          if (local_138._4_4_ != iVar6 || uStack_140 != local_1c0) {
            local_188 = (undefined8 *)(lVar9 + (longlong)iVar20 * 0x18 + 8);
            plVar23 = uStack_140;
            iVar20 = local_138._4_4_;
            local_1e8 = iVar6;
            local_1b8 = uStack_140;
            local_1b0 = plVar11;
            do {
              plVar22 = DAT_14c966e90;
              lVar9 = *plVar11;
              lVar10 = (longlong)iVar20 * 0x60;
              local_178 = uVar12;
              if (*(int *)(lVar9 + 0x10 + lVar10) != *(int *)(lVar9 + 0x3c + lVar10)) {
                local_148 = 0;
                if (DAT_14c966e90 != (longlong *)0x0) {
                  LOCK();
                  *(int *)(DAT_14c966e90 + 1) = (int)DAT_14c966e90[1] + 1;
                  UNLOCK();
                }
                plStack_130 = DAT_14c9658b8;
                local_138 = DAT_14c9658b0;
                local_128 = 7;
                local_127 = (local_127 & 0xfc) + 1;
                local_126 = 0;
                local_124 = 0;
                uStack_140 = DAT_14c9658a8;
                if (DAT_14c9658b8 != (longlong *)0x0) {
                  LOCK();
                  *(int *)(DAT_14c9658b8 + 1) = (int)DAT_14c9658b8[1] + 1;
                  UNLOCK();
                }
                if (plVar22 != (longlong *)0x0) {
                  LOCK();
                  plVar11 = plVar22 + 1;
                  *(int *)plVar11 = (int)*plVar11 + -1;
                  UNLOCK();
                  if ((int)*plVar11 == 0) {
                    (**(code **)*plVar22)(plVar22);
                    LOCK();
                    piVar2 = (int *)((longlong)plVar22 + 0xc);
                    *piVar2 = *piVar2 + -1;
                    UNLOCK();
                    if (*piVar2 == 0) {
                      (**(code **)(*plVar22 + 0x10))(plVar22);
                    }
                  }
                }
                lVar14 = lVar9 + lVar10;
                local_127 = local_127 | 1;
                local_b8 = "CategoryTitle_Misc_Gamepad";
                local_b0 = (uint *)CONCAT35(local_b0._5_3_,0x1a);
                uVar12 = FUN_14001a6c0(&local_b8,1);
                local_1e0 = (uint *)(lVar14 + 0x18);
                uVar18 = *(uint *)(lVar14 + 0x30);
                if (uVar18 == 0) {
                  local_1d8 = 0;
                  uVar21 = 1;
                  iVar20 = 0;
                  uVar24 = 0;
                }
                else {
                  puVar17 = *(uint **)(lVar14 + 0x28);
                  if (*(uint **)(lVar14 + 0x28) == (uint *)0x0) {
                    puVar17 = local_1e0;
                  }
                  uVar24 = *puVar17;
                  if (uVar24 == 0) {
                    iVar20 = uVar18 + 0x1e;
                    if (-1 < (int)(uVar18 - 1)) {
                      iVar20 = uVar18 - 1;
                    }
                    local_1d8 = 0;
                    uVar19 = (ulonglong)(uint)(iVar20 >> 5);
                    if (iVar20 >> 5 < 1) {
                      uVar19 = local_1d8;
                    }
                    iVar20 = (int)uVar19 * 0x20 + 0x20;
                    iVar6 = 0;
                    do {
                      if (uVar19 == local_1d8) {
                        uVar21 = 1;
                        local_1d8 = (ulonglong)((int)uVar19 + 1);
                        uVar24 = uVar18;
                        goto LAB_1410e7770;
                      }
                      iVar6 = iVar6 + 0x20;
                      uVar24 = puVar17[local_1d8 + 1];
                      local_1d8 = local_1d8 + 1;
                    } while (uVar24 == 0);
                  }
                  else {
                    local_1d8 = 0;
                    iVar6 = 0;
                  }
                  iVar20 = iVar6;
                  uVar21 = (ulonglong)(-uVar24 & uVar24);
                  uVar19 = uVar21 * 2 + 1;
                  lVar13 = 0x3f;
                  if (uVar19 != 0) {
                    for (; uVar19 >> lVar13 == 0; lVar13 = lVar13 + -1) {
                    }
                  }
                  uVar24 = (iVar20 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
                  if ((int)uVar18 <= (int)uVar24) {
                    uVar24 = uVar18;
                  }
                }
LAB_1410e7770:
                local_b8 = (char *)CONCAT44(1 << ((byte)uVar18 & 0x1f),(int)uVar18 >> 5);
                local_a8 = CONCAT44(uVar18,-1 << ((byte)uVar18 & 0x1f));
                local_a0 = uVar18 & 0xffffffe0;
                local_1d0 = iVar7;
                local_b0 = local_1e0;
                if (*(uint *)(lVar14 + 0x30) != uVar18) {
                  FUN_1449c0562(&local_b8);
                  uVar18 = local_a8._4_4_;
                }
                if ((uVar24 != uVar18) || (local_1e0 != local_b0)) {
                  local_1a0 = (longlong *)(lVar9 + lVar10 + 8);
                  local_170 = uVar12 & 0xffffffff;
                  uVar25 = 0xffffffff;
                  local_1cc = 0;
                  local_1c8 = lVar14;
                  local_180 = local_b0;
                  do {
                    lVar9 = *local_1a0;
                    lVar10 = *(longlong *)(lVar9 + 0x80 + (longlong)(int)uVar24 * 0x90);
                    if (lVar10 == 0) {
LAB_1410e7891:
                      lVar9 = lVar9 + (longlong)(int)uVar24 * 0x90;
                      cVar5 = (**(code **)(*(longlong *)*local_188 + 0x2e8))
                                        ((longlong *)*local_188,lVar9,&local_148);
                      plVar11 = local_1b0;
                      plVar23 = local_1b8;
                      iVar7 = local_1d0;
                      iVar6 = local_1e8;
                      if ((cVar5 != '\0') && (*(longlong *)(lVar9 + 0x30) != DAT_14c964dd0)) {
                        local_b8 = (char *)0x100000000;
                        local_b0 = local_1e0;
                        local_a8 = 0xffffffff;
                        local_a0 = 0;
                        if (*(int *)(lVar14 + 0x30) != 0) {
                          FUN_1449c0562(&local_b8);
                        }
                        FUN_1446ddc76(&local_150,"CategoryTitle_Misc",1);
                        lVar9 = FUN_14119b1f2(&local_98,local_190,local_170,local_150);
                        if (lVar9 != 0) {
                          lVar10 = FUN_14119b059(DAT_14c951640);
                          FUN_14119b5a0(lVar10,*local_188,local_1a0,&local_148);
                          FUN_140608954(lVar10 + 0xb0,&DAT_14cb9a828);
                          *(char *)(lVar10 + 0x1d8) = (char)local_1cc;
                          FUN_14101d6ec(lVar9,lVar10);
                          FUN_144a13f80(&DAT_14cbd7f68,&local_b8,local_1c8,0);
                        }
                        plVar22 = plStack_130;
                        if (plStack_130 != (longlong *)0x0) {
                          LOCK();
                          plVar1 = plStack_130 + 1;
                          *(int *)plVar1 = (int)*plVar1 + -1;
                          UNLOCK();
                          if ((int)*plVar1 == 0) {
                            (**(code **)*plStack_130)(plStack_130);
                            LOCK();
                            piVar2 = (int *)((longlong)plVar22 + 0xc);
                            *piVar2 = *piVar2 + -1;
                            UNLOCK();
                            if (*piVar2 == 0) {
                              (**(code **)(*plVar22 + 0x10))(plVar22);
                            }
                          }
                        }
                        goto LAB_1410e7ae9;
                      }
                    }
                    else {
                      lVar13 = FUN_14119ae8e();
                      if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x38) < *(int *)(lVar13 + 0x38))
                         || (lVar14 = local_1c8,
                            *(longlong *)
                             (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x30) +
                             (longlong)*(int *)(lVar13 + 0x38) * 8) != lVar13 + 0x30))
                      goto LAB_1410e7891;
                      cVar5 = *(char *)(lVar10 + 0x30);
                      lVar14 = FUN_14119af74();
                      if ((*(int *)(lVar14 + 0x38) <= *(int *)(*(longlong *)(lVar10 + 0x10) + 0x38))
                         && (*(longlong *)
                              (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x30) +
                              (longlong)*(int *)(lVar14 + 0x38) * 8) == lVar14 + 0x30)) {
                        local_170 = *(ulonglong *)(lVar10 + 0x48);
                        local_1cc = (undefined4)
                                    CONCAT71((int7)(local_170 >> 8),*(undefined1 *)(lVar10 + 0x50));
                      }
                      lVar14 = local_1c8;
                      if (cVar5 != '\0') goto LAB_1410e7891;
                    }
                    uVar25 = uVar25 & ~(uint)uVar21;
                    puVar17 = *(uint **)(lVar14 + 0x28);
                    if (*(uint **)(lVar14 + 0x28) == (uint *)0x0) {
                      puVar17 = local_1e0;
                    }
                    uVar3 = *(uint *)(lVar14 + 0x30);
                    iVar6 = (int)local_1d8;
                    lVar9 = (longlong)iVar6;
                    uVar24 = puVar17[lVar9] & uVar25;
                    if (uVar24 == 0) {
                      iVar7 = uVar3 + 0x1e;
                      if (-1 < (int)(uVar3 - 1)) {
                        iVar7 = uVar3 - 1;
                      }
                      iVar7 = iVar7 >> 5;
                      iVar20 = iVar20 + 0x20;
                      iVar8 = iVar7;
                      if (iVar7 < iVar6) {
                        iVar8 = iVar6;
                      }
                      if (iVar6 < iVar7) {
                        lVar10 = 0;
                        do {
                          uVar24 = puVar17[lVar9 + lVar10 + 1];
                          if (uVar24 != 0) {
                            local_1d8 = (ulonglong)(iVar6 + (int)lVar10 + 1);
                            uVar25 = 0xffffffff;
                            goto LAB_1410e7933;
                          }
                          iVar20 = iVar20 + 0x20;
                          lVar10 = lVar10 + 1;
                        } while (iVar8 - lVar9 != lVar10);
                        uVar25 = 0xffffffff;
                        lVar9 = (longlong)iVar8;
                      }
                      local_1d8 = lVar9 + 1;
                      lVar14 = local_1c8;
                      uVar24 = uVar3;
                    }
                    else {
LAB_1410e7933:
                      uVar21 = (ulonglong)(-uVar24 & uVar24);
                      uVar12 = uVar21 * 2 + 1;
                      lVar9 = 0x3f;
                      if (uVar12 != 0) {
                        for (; uVar12 >> lVar9 == 0; lVar9 = lVar9 + -1) {
                        }
                      }
                      uVar24 = (iVar20 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
                      if ((int)uVar3 <= (int)uVar24) {
                        uVar24 = uVar3;
                      }
                    }
                  } while ((uVar24 != uVar18) || (local_1e0 != local_180));
                }
                plVar22 = plStack_130;
                plVar23 = local_1b8;
                plVar11 = local_1b0;
                iVar7 = local_1d0;
                iVar6 = local_1e8;
                if (plStack_130 != (longlong *)0x0) {
                  LOCK();
                  plVar1 = plStack_130 + 1;
                  *(int *)plVar1 = (int)*plVar1 + -1;
                  UNLOCK();
                  if ((int)*plVar1 == 0) {
                    (**(code **)*plStack_130)(plStack_130);
                    LOCK();
                    piVar2 = (int *)((longlong)plVar22 + 0xc);
                    *piVar2 = *piVar2 + -1;
                    UNLOCK();
                    plVar23 = local_1b8;
                    plVar11 = local_1b0;
                    iVar7 = local_1d0;
                    iVar6 = local_1e8;
                    if (*piVar2 == 0) {
                      (**(code **)(*plVar22 + 0x10))(plVar22);
                      plVar23 = local_1b8;
                      plVar11 = local_1b0;
                      iVar7 = local_1d0;
                      iVar6 = local_1e8;
                    }
                  }
                }
              }
LAB_1410e7ae9:
              local_1e4 = local_1e4 & ~(uint)local_178;
              plVar22 = (longlong *)plVar23[2];
              if ((longlong *)plVar23[2] == (longlong *)0x0) {
                plVar22 = plVar23;
              }
              iVar8 = (int)plVar23[3];
              iVar20 = (int)local_1a8;
              lVar9 = (longlong)iVar20;
              uVar18 = *(uint *)((longlong)plVar22 + lVar9 * 4) & local_1e4;
              if (uVar18 == 0) {
                iVar15 = iVar8 + 0x1e;
                if (-1 < iVar8 + -1) {
                  iVar15 = iVar8 + -1;
                }
                iVar15 = iVar15 >> 5;
                iVar7 = iVar7 + 0x20;
                iVar16 = iVar15;
                if (iVar15 < iVar20) {
                  iVar16 = iVar20;
                }
                if (iVar20 < iVar15) {
                  lVar10 = 0;
                  do {
                    uVar18 = *(uint *)((longlong)plVar22 + lVar10 * 4 + lVar9 * 4 + 4);
                    if (uVar18 != 0) {
                      local_1a8 = (ulonglong)(iVar20 + (int)lVar10 + 1);
                      local_1e4 = 0xffffffff;
                      goto LAB_1410e7b69;
                    }
                    iVar7 = iVar7 + 0x20;
                    lVar10 = lVar10 + 1;
                  } while (iVar16 - lVar9 != lVar10);
                  local_1e4 = 0xffffffff;
                  iVar20 = iVar16;
                }
                local_1a8 = (ulonglong)(iVar20 + 1);
                uVar12 = local_178;
                plVar23 = local_1b8;
                plVar11 = local_1b0;
                iVar20 = iVar8;
                iVar6 = local_1e8;
              }
              else {
LAB_1410e7b69:
                uVar12 = (ulonglong)(-uVar18 & uVar18);
                uVar21 = uVar12 * 2 + 1;
                lVar9 = 0x3f;
                if (uVar21 != 0) {
                  for (; uVar21 >> lVar9 == 0; lVar9 = lVar9 + -1) {
                  }
                }
                iVar20 = (iVar7 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
                if (iVar8 <= iVar20) {
                  iVar20 = iVar8;
                }
              }
            } while ((iVar20 != iVar6) || (plVar23 != local_1c0));
          }
          local_108 = CONCAT44(local_108._4_4_,(uint)local_108 & ~uStack_114);
          FUN_1449c0562(&local_118);
          iVar20 = local_108._4_4_;
          uVar4 = local_108;
        } while ((local_108._4_4_ != local_194) ||
                (((longlong *)CONCAT44(uStack_10c,uStack_110) != local_168 ||
                 (local_120 != local_160))));
      }
      *(undefined1 *)(local_158 + 0x111) = 1;
      param_1 = local_158;
    }
    local_50 = 0;
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    FUN_145827ea0(&local_98);
    FUN_1410e7e0e(param_1);
  }
  if ((local_48 ^ (ulonglong)auStack_208) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1410e7e0e FUN_1410e7e0e body=2754 status=ok
// SIG undefined FUN_1410e7e0e(void)

void FUN_1410e7e0e(longlong param_1)

{
  PSRWLOCK pRVar1;
  uint uVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  int *piVar11;
  longlong *plVar12;
  longlong *plVar13;
  undefined8 uVar14;
  int iVar15;
  int iVar16;
  uint *puVar17;
  uint uVar18;
  uint uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  uint uVar23;
  undefined1 auStack_178 [44];
  uint local_14c;
  uint local_148;
  uint local_144;
  ulonglong local_140;
  uint *local_138;
  ulonglong local_130;
  longlong *local_128;
  uint *local_120;
  int local_118;
  uint local_114;
  int *local_110;
  longlong local_108;
  longlong local_100;
  int *local_f8;
  uint *local_f0;
  uint *local_e8;
  ulonglong local_e0;
  uint *local_d8;
  longlong *local_d0;
  PSRWLOCK local_c8;
  undefined8 *local_c0;
  longlong *local_b8;
  undefined4 local_b0;
  uint uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 local_a0;
  undefined8 uStack_98;
  longlong local_90;
  longlong *local_88;
  undefined8 uStack_80;
  longlong *local_78;
  undefined1 local_70;
  byte local_6f;
  undefined1 local_6e;
  undefined4 local_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  uint uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  lVar7 = FUN_140059518(param_1 + 0x44);
  if (((lVar7 != 0) && (lVar7 = FUN_1400b6e86(lVar7), lVar7 != 0)) &&
     (lVar7 = (**(code **)(*(longlong *)(lVar7 + 0x30) + 0x18))(lVar7 + 0x30), lVar7 != 0)) {
    FUN_1402815f4(param_1);
    lVar9 = *(longlong *)(local_90 + 0x370);
    pRVar1 = (PSRWLOCK)(lVar9 + 0x48);
    AcquireSRWLockExclusive(pRVar1);
    *(int *)(lVar9 + 0x40) = *(int *)(lVar9 + 0x40) + 1;
    if (local_88 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_88 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
        (**(code **)*local_88)(local_88);
        LOCK();
        piVar11 = (int *)((longlong)local_88 + 0xc);
        *piVar11 = *piVar11 + -1;
        UNLOCK();
        if (*piVar11 == 0) {
          (**(code **)(*local_88 + 0x10))(local_88);
        }
      }
    }
    local_108 = lVar9 + 0x10;
    FUN_14580365a();
    *(int *)(lVar9 + 0x20) = *(int *)(lVar9 + 0x20) + 1;
    local_100 = lVar9 + 0x28;
    FUN_14580365a();
    *(int *)(lVar9 + 0x38) = *(int *)(lVar9 + 0x38) + 1;
    plVar8 = DAT_14c966e90;
    local_90 = 0;
    if (DAT_14c966e90 != (longlong *)0x0) {
      LOCK();
      *(int *)(DAT_14c966e90 + 1) = (int)DAT_14c966e90[1] + 1;
      UNLOCK();
    }
    local_78 = DAT_14c9658b8;
    uStack_80 = DAT_14c9658b0;
    local_70 = 7;
    local_6f = (local_6f & 0xfc) + 1;
    local_6e = 0;
    local_6c = 0;
    local_88 = DAT_14c9658a8;
    if (DAT_14c9658b8 != (longlong *)0x0) {
      LOCK();
      *(int *)(DAT_14c9658b8 + 1) = (int)DAT_14c9658b8[1] + 1;
      UNLOCK();
    }
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      plVar12 = plVar8 + 1;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)*plVar12 == 0) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar11 = (int *)((longlong)plVar8 + 0xc);
        *piVar11 = *piVar11 + -1;
        UNLOCK();
        if (*piVar11 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
      }
    }
    local_6f = local_6f | 1;
    local_d0 = (longlong *)FUN_145827b52(lVar7);
    local_d8 = (uint *)(local_d0 + 2);
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    uStack_50 = 0;
    uStack_60 = local_d8;
    if ((int)local_d0[5] == 0) {
      local_118 = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      local_118 = (int)local_d0[5];
    }
    local_110 = (int *)(lVar9 + 0x20);
    local_f8 = (int *)(lVar9 + 0x38);
    uStack_98 = CONCAT44(uStack_4c,uStack_50);
    local_a0 = local_58;
    uVar14 = local_a0;
    local_b0 = (undefined4)local_68;
    uStack_ac = local_68._4_4_;
    uStack_a8 = (undefined4)uStack_60;
    uStack_a4 = uStack_60._4_4_;
    local_a0._4_4_ = (int)((ulonglong)local_58 >> 0x20);
    iVar15 = local_a0._4_4_;
    local_c8 = pRVar1;
    local_b8 = local_d0;
    if ((local_a0._4_4_ != local_118) || (local_a0 = uVar14, uStack_60 != local_d8)) {
      do {
        local_a0 = uVar14;
        lVar7 = *local_b8;
        plVar8 = (longlong *)FUN_145827b58(*(undefined8 *)(lVar7 + 8 + (longlong)iVar15 * 0x18));
        local_138 = (uint *)(plVar8 + 2);
        local_68 = 0x100000000;
        local_58 = 0xffffffff;
        uStack_50 = 0;
        uStack_60 = local_138;
        if ((int)plVar8[5] == 0) {
          uVar21 = 1;
          local_14c = 0xffffffff;
          uVar19 = 0;
          local_58._4_4_ = 0;
          local_140 = 0;
        }
        else {
          FUN_1449c0562(&local_68);
          local_140 = local_68 & 0xffffffff;
          uVar21 = local_68 >> 0x20;
          local_14c = (uint)local_58;
          uVar19 = *(uint *)(plVar8 + 5);
        }
        if (local_58._4_4_ != uVar19 || uStack_60 != local_138) {
          local_c0 = (undefined8 *)(lVar7 + (longlong)iVar15 * 0x18 + 8);
          uVar23 = local_58._4_4_;
          uVar18 = uStack_50;
          local_148 = uVar19;
          local_128 = plVar8;
          local_f0 = uStack_60;
          do {
            lVar7 = *local_128;
            lVar9 = (longlong)(int)uVar23 * 0x60;
            local_144 = uVar18;
            local_e0 = uVar21;
            if (*(int *)(lVar7 + 0x10 + lVar9) != *(int *)(lVar7 + 0x3c + lVar9)) {
              lVar7 = lVar7 + lVar9;
              local_120 = (uint *)(lVar7 + 0x18);
              uVar19 = *(uint *)(lVar7 + 0x30);
              if (uVar19 == 0) {
                uVar21 = 0;
                uVar22 = 1;
                iVar15 = 0;
                uVar23 = 0;
              }
              else {
                puVar17 = *(uint **)(lVar7 + 0x28);
                if (*(uint **)(lVar7 + 0x28) == (uint *)0x0) {
                  puVar17 = local_120;
                }
                uVar23 = *puVar17;
                if (uVar23 == 0) {
                  iVar15 = uVar19 + 0x1e;
                  if (-1 < (int)(uVar19 - 1)) {
                    iVar15 = uVar19 - 1;
                  }
                  uVar22 = 0;
                  uVar20 = (ulonglong)(uint)(iVar15 >> 5);
                  if (iVar15 >> 5 < 1) {
                    uVar20 = uVar22;
                  }
                  uVar21 = (ulonglong)((int)uVar20 + 1);
                  iVar15 = 0;
                  do {
                    if (uVar20 == uVar22) {
                      uVar22 = 1;
                      iVar15 = (int)uVar20 * 0x20 + 0x20;
                      uVar23 = uVar19;
                      goto LAB_1410e81e5;
                    }
                    iVar15 = iVar15 + 0x20;
                    uVar23 = puVar17[uVar22 + 1];
                    uVar22 = uVar22 + 1;
                  } while (uVar23 == 0);
                  uVar21 = uVar22 & 0xffffffff;
                }
                else {
                  uVar21 = 0;
                  iVar15 = 0;
                }
                uVar22 = (ulonglong)(-uVar23 & uVar23);
                uVar20 = uVar22 * 2 + 1;
                lVar9 = 0x3f;
                if (uVar20 != 0) {
                  for (; uVar20 >> lVar9 == 0; lVar9 = lVar9 + -1) {
                  }
                }
                uVar23 = (iVar15 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
                if ((int)uVar19 <= (int)uVar23) {
                  uVar23 = uVar19;
                }
              }
LAB_1410e81e5:
              local_68 = CONCAT44(1 << ((byte)uVar19 & 0x1f),(int)uVar19 >> 5);
              local_58 = CONCAT44(uVar19,-1 << ((byte)uVar19 & 0x1f));
              uStack_50 = uVar19 & 0xffffffe0;
              uStack_60 = local_120;
              if (*(uint *)(lVar7 + 0x30) != uVar19) {
                FUN_1449c0562(&local_68);
                uVar19 = local_58._4_4_;
              }
              if ((uVar23 != uVar19) || (local_120 != uStack_60)) {
                uVar18 = 0xffffffff;
                local_e8 = uStack_60;
                do {
                  plVar8 = (longlong *)(*(longlong *)(lVar7 + 8) + (longlong)(int)uVar23 * 0x90);
                  lVar9 = *(longlong *)
                           (*(longlong *)(lVar7 + 8) + 0x80 + (longlong)(int)uVar23 * 0x90);
                  local_114 = uVar18;
                  if (lVar9 == 0) {
LAB_1410e87a6:
                    cVar4 = '\0';
LAB_1410e82e0:
                    cVar3 = (**(code **)(*(longlong *)*local_c0 + 0x2e8))
                                      ((longlong *)*local_c0,plVar8,&local_90);
                    if (cVar3 != '\0') {
                      piVar11 = local_f8;
                      lVar7 = local_100;
                      if ((cVar4 == '\x01') ||
                         (piVar11 = local_110, lVar7 = local_108, cVar4 != '\x02')) {
                        *piVar11 = *piVar11 + 1;
                        plVar12 = (longlong *)FUN_14580350a(lVar7);
                        if (plVar12 == (longlong *)0x0) break;
                        iVar15 = (int)plVar12[5];
                        if (*plVar8 == plVar12[4]) {
                          if (iVar15 != 0) goto LAB_1410e8499;
                          iVar15 = 0;
                        }
                        plVar12[4] = *plVar8;
                        *(int *)(plVar12 + 5) = iVar15 + 1;
                      }
                      else {
                        *local_110 = *local_110 + 1;
                        plVar12 = (longlong *)FUN_14580350a(local_108);
                        if (plVar12 != (longlong *)0x0) {
                          if ((*plVar8 != plVar12[4]) || ((int)plVar12[5] == 0)) {
                            plVar12[4] = *plVar8;
                            *(int *)(plVar12 + 5) = (int)plVar12[5] + 1;
                          }
                          plVar13 = (longlong *)FUN_1410e88d8(plVar8);
                          if ((*plVar13 != *plVar12) || ((int)plVar12[3] == 0)) {
                            FUN_1413a517a(plVar12,plVar13);
                            *(int *)(plVar12 + 3) = (int)plVar12[3] + 1;
                          }
                          uVar14 = FUN_1410e88d2(plVar8);
                          FUN_1410e88ee(plVar12 + 6,uVar14);
                        }
                        *local_f8 = *local_f8 + 1;
                        plVar12 = (longlong *)FUN_14580350a(local_100);
                        if (plVar12 == (longlong *)0x0) break;
                        if ((*plVar8 != plVar12[4]) || ((int)plVar12[5] == 0)) {
                          plVar12[4] = *plVar8;
                          *(int *)(plVar12 + 5) = (int)plVar12[5] + 1;
                        }
                      }
LAB_1410e8499:
                      plVar13 = (longlong *)FUN_1410e88d8(plVar8);
                      if ((*plVar13 != *plVar12) || ((int)plVar12[3] == 0)) {
                        FUN_1413a517a(plVar12,plVar13);
                        *(int *)(plVar12 + 3) = (int)plVar12[3] + 1;
                      }
                      uVar14 = FUN_1410e88d2(plVar8);
                      FUN_1410e88ee(plVar12 + 6,uVar14);
                      break;
                    }
                  }
                  else {
                    lVar10 = FUN_14119ae8e();
                    if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x38) < *(int *)(lVar10 + 0x38)) ||
                       (*(longlong *)
                         (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) +
                         (longlong)*(int *)(lVar10 + 0x38) * 8) != lVar10 + 0x30))
                    goto LAB_1410e87a6;
                    cVar4 = '\x01';
                    if ((*(char *)(lVar9 + 0x30) == '\0') &&
                       (((local_130 = uVar21,
                         cVar3 = FUN_14002b5e0(*plVar8,"action_gamepad_look",0x13),
                         uVar21 = local_130, cVar3 == '\0' &&
                         (cVar3 = FUN_14002b5e0(*plVar8,"action_gamepad_move",0x13),
                         uVar21 = local_130, cVar3 == '\0')) &&
                        (cVar3 = FUN_14002b5e0(*plVar8,"action_gamepad_vehicle_look",0x1b),
                        uVar21 = local_130, cVar3 == '\0')))) {
                      cVar4 = FUN_14002b5e0(*plVar8,"action_gamepad_vehicle_move",0x1b);
                    }
                    lVar10 = FUN_14119af74();
                    if ((*(int *)(lVar10 + 0x38) <= *(int *)(*(longlong *)(lVar9 + 0x10) + 0x38)) &&
                       (*(longlong *)
                         (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) +
                         (longlong)*(int *)(lVar10 + 0x38) * 8) == lVar10 + 0x30)) {
                      if (cVar4 == '\0') goto LAB_1410e8307;
                      cVar4 = *(char *)(lVar9 + 0x50);
                      goto LAB_1410e82e0;
                    }
                    if (cVar4 != '\0') goto LAB_1410e87a6;
                  }
LAB_1410e8307:
                  uVar18 = local_114 & ~(uint)uVar22;
                  puVar17 = *(uint **)(lVar7 + 0x28);
                  if (*(uint **)(lVar7 + 0x28) == (uint *)0x0) {
                    puVar17 = local_120;
                  }
                  uVar2 = *(uint *)(lVar7 + 0x30);
                  iVar16 = (int)uVar21;
                  lVar9 = (longlong)iVar16;
                  uVar23 = puVar17[lVar9] & uVar18;
                  if (uVar23 == 0) {
                    iVar5 = uVar2 + 0x1e;
                    if (-1 < (int)(uVar2 - 1)) {
                      iVar5 = uVar2 - 1;
                    }
                    iVar5 = iVar5 >> 5;
                    iVar15 = iVar15 + 0x20;
                    iVar6 = iVar5;
                    if (iVar5 < iVar16) {
                      iVar6 = iVar16;
                    }
                    if (iVar16 < iVar5) {
                      lVar10 = 0;
                      do {
                        uVar23 = puVar17[lVar9 + lVar10 + 1];
                        if (uVar23 != 0) {
                          uVar21 = (ulonglong)(iVar16 + (int)lVar10 + 1);
                          uVar18 = 0xffffffff;
                          goto LAB_1410e837c;
                        }
                        iVar15 = iVar15 + 0x20;
                        lVar10 = lVar10 + 1;
                      } while (iVar6 - lVar9 != lVar10);
                      uVar18 = 0xffffffff;
                      iVar16 = iVar6;
                    }
                    uVar21 = (ulonglong)(iVar16 + 1);
                    uVar23 = uVar2;
                  }
                  else {
LAB_1410e837c:
                    uVar22 = (ulonglong)(-uVar23 & uVar23);
                    uVar20 = uVar22 * 2 + 1;
                    lVar9 = 0x3f;
                    if (uVar20 != 0) {
                      for (; uVar20 >> lVar9 == 0; lVar9 = lVar9 + -1) {
                      }
                    }
                    uVar23 = (iVar15 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
                    if ((int)uVar2 <= (int)uVar23) {
                      uVar23 = uVar2;
                    }
                  }
                } while ((uVar23 != uVar19) || (local_120 != local_e8));
              }
            }
            local_14c = local_14c & ~(uint)local_e0;
            puVar17 = *(uint **)(local_f0 + 4);
            if (*(uint **)(local_f0 + 4) == (uint *)0x0) {
              puVar17 = local_f0;
            }
            uVar19 = local_f0[6];
            iVar15 = (int)local_140;
            lVar7 = (longlong)iVar15;
            uVar23 = puVar17[lVar7] & local_14c;
            uVar18 = local_144;
            if (uVar23 == 0) {
              iVar16 = uVar19 + 0x1e;
              if (-1 < (int)(uVar19 - 1)) {
                iVar16 = uVar19 - 1;
              }
              iVar16 = iVar16 >> 5;
              uVar18 = local_144 + 0x20;
              iVar5 = iVar16;
              if (iVar16 < iVar15) {
                iVar5 = iVar15;
              }
              if (iVar15 < iVar16) {
                lVar9 = 0;
                do {
                  uVar23 = puVar17[lVar7 + lVar9 + 1];
                  if (uVar23 != 0) {
                    local_140 = (ulonglong)(iVar15 + (int)lVar9 + 1);
                    local_14c = 0xffffffff;
                    goto LAB_1410e856a;
                  }
                  uVar18 = uVar18 + 0x20;
                  lVar9 = lVar9 + 1;
                } while (iVar5 - lVar7 != lVar9);
                local_14c = 0xffffffff;
                lVar7 = (longlong)iVar5;
              }
              local_140 = lVar7 + 1;
              uVar21 = local_e0;
              uVar23 = uVar19;
            }
            else {
LAB_1410e856a:
              uVar21 = (ulonglong)(-uVar23 & uVar23);
              uVar22 = uVar21 * 2 + 1;
              lVar7 = 0x3f;
              if (uVar22 != 0) {
                for (; uVar22 >> lVar7 == 0; lVar7 = lVar7 + -1) {
                }
              }
              uVar23 = (uVar18 - ((uint)lVar7 ^ 0x3f)) + 0x3e;
              if ((int)uVar19 <= (int)uVar23) {
                uVar23 = uVar19;
              }
            }
          } while ((uVar23 != local_148) || (local_f0 != local_138));
        }
        local_a0 = CONCAT44(local_a0._4_4_,(uint)local_a0 & ~uStack_ac);
        FUN_1449c0562(&local_b0);
        iVar15 = local_a0._4_4_;
        uVar14 = local_a0;
      } while ((local_a0._4_4_ != local_118) ||
              (((uint *)CONCAT44(uStack_a4,uStack_a8) != local_d8 || (local_b8 != local_d0))));
    }
    plVar8 = local_78;
    pRVar1 = local_c8;
    if (local_78 != (longlong *)0x0) {
      LOCK();
      plVar12 = local_78 + 1;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)*plVar12 == 0) {
        (**(code **)*local_78)(local_78);
        LOCK();
        piVar11 = (int *)((longlong)plVar8 + 0xc);
        *piVar11 = *piVar11 + -1;
        UNLOCK();
        if (*piVar11 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
      }
    }
    ReleaseSRWLockExclusive(pRVar1);
  }
  if ((local_48 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1410e88d2 FUN_1410e88d2 body=5 status=ok
// SIG undefined FUN_1410e88d2(void)

longlong FUN_1410e88d2(longlong param_1)

{
  return param_1 + 8;
}



// FUNCTION 1410e88d8 FUN_1410e88d8 body=21 status=ok
// SIG undefined FUN_1410e88d8(void)

longlong FUN_1410e88d8(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = param_1 + 0x48;
  if (*(longlong *)(param_1 + 0x48) == *(longlong *)(param_1 + 0x30)) {
    lVar1 = param_1 + 0x30;
  }
  return lVar1;
}



// FUNCTION 1410e88ee FUN_1410e88ee body=101 status=ok
// SIG undefined FUN_1410e88ee(void)

ulonglong FUN_1410e88ee(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  ulonglong uVar4;
  
  if ((int)param_1[2] != 0) {
    uVar4 = 0;
    cVar3 = FUN_144722c14(param_1,param_2,0);
    if (cVar3 != '\0') goto LAB_1410e8915;
  }
  plVar1 = (longlong *)*param_2;
  plVar2 = (longlong *)*param_1;
  if (plVar2 != plVar1) {
    *param_1 = (longlong)plVar1;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
    }
  }
  *(int *)(param_1 + 1) = (int)param_2[1];
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  uVar4 = CONCAT71((int7)((ulonglong)plVar2 >> 8),1);
LAB_1410e8915:
  return uVar4 & 0xffffffff;
}



// FUNCTION 1410e896a FUN_1410e896a body=143 status=ok
// SIG undefined FUN_1410e896a(void)

void FUN_1410e896a(longlong *param_1)

{
  char cVar1;
  
  FUN_1447f69b6(param_1 + 0x2b4);
  FUN_1447cd2ec(param_1 + 0x2b2,0);
  cVar1 = *(char *)((longlong)param_1 + 0x1841);
  if (cVar1 == '\x01') {
    if ((((char)param_1[0x2f] == '\x03') || ((*(byte *)(param_1 + 0xc) & 1) != 0)) ||
       ((*(byte *)((longlong)param_1 + 0x61) & 1) != 0)) {
      *(undefined1 *)((longlong)param_1 + 0x1152) = 0;
                    /* WARNING: Could not recover jumptable at 0x0001410e89c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x6c0))(param_1);
      return;
    }
  }
  else {
    if (cVar1 == '\0') {
                    /* WARNING: Could not recover jumptable at 0x0001410e89e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x5c8))(param_1,0);
      return;
    }
    if (cVar1 == '\x02') {
      FUN_1487c26d0(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 1410e89fa FUN_1410e89fa body=39 status=ok
// SIG undefined FUN_1410e89fa(void)

void FUN_1410e89fa(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  FUN_1410e8a22(param_3,param_2,param_4,param_5,param_6);
  return;
}



// FUNCTION 1410e8a22 FUN_1410e8a22 body=377 status=ok
// SIG undefined FUN_1410e8a22(void)

ulonglong FUN_1410e8a22(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  wchar_t *_Str;
  longlong lVar1;
  size_t sVar2;
  undefined2 *puVar3;
  ulonglong uVar4;
  undefined1 auStack_288 [40];
  undefined8 local_260;
  undefined2 *local_258;
  undefined8 uStack_250;
  undefined8 local_240;
  undefined8 local_238;
  ulonglong *local_230;
  char local_228;
  undefined1 local_220 [512];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_288;
  local_258 = (undefined2 *)0x0;
  uStack_250 = 0;
  if ((param_3 & 1) == 0) {
    FUN_14020fad6(&local_258,*param_2);
    _Str = (wchar_t *)*param_2;
    sVar2 = wcslen(_Str);
    *param_2 = (longlong)(_Str + (int)sVar2);
LAB_1410e8ab4:
    if (0x7ffffbff < (int)uStack_250 - 0x401U) {
      puVar3 = local_258;
      if ((int)uStack_250 == 0) {
        puVar3 = &DAT_149dfb77a;
      }
      FUN_1446f470e(&local_260,puVar3,1);
      local_240._4_4_ = 0;
      local_238._0_4_ = 0;
      FUN_1458036cb(&local_240,local_260,0);
      *param_1 = local_240;
      *(undefined4 *)(param_1 + 1) = (undefined4)local_238;
      uVar4 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
      goto LAB_1410e8b19;
    }
  }
  else {
    local_240 = local_220;
    local_228 = '\0';
    local_230 = &local_20;
    local_238 = local_240;
    lVar1 = FUN_1409a0110(*param_2,&local_240,1);
    *param_2 = lVar1;
    if (lVar1 != 0) {
      FUN_1402980a2(&local_258,local_240,(ulonglong)((longlong)local_238 - (longlong)local_240) >> 1
                   );
      if (local_228 == '\x01') {
        FUN_1400020a8(local_240);
      }
      goto LAB_1410e8ab4;
    }
    if (local_228 == '\x01') {
      FUN_1400020a8(local_240);
    }
  }
  uVar4 = 0;
LAB_1410e8b19:
  if (local_258 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_288) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4 & 0xffffffff;
}



// FUNCTION 1410e8b9c FUN_1410e8b9c body=61 status=ok
// SIG undefined FUN_1410e8b9c(void)

undefined8 * FUN_1410e8b9c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14affd700;
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1410e8bda FUN_1410e8bda body=314 status=ok
// SIG undefined FUN_1410e8bda(void)

undefined8 FUN_1410e8bda(longlong param_1,longlong *param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_1410e8d0e;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1410e8d0e;
    }
    FUN_140192332(param_1 + 0x18,&local_40,0);
    lVar7 = local_40;
  }
  else {
LAB_1410e8d0e:
    lVar7 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1410e8cb9;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      local_38 = (undefined4)param_2[1];
      local_40 = *param_2;
      (**(code **)(param_1 + 0x20))(*plVar5,&local_40,param_3);
      uVar6 = 1;
      goto LAB_1410e8cb9;
    }
  }
  uVar6 = 0;
LAB_1410e8cb9:
  if ((lVar7 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar7);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410e8d16 FUN_1410e8d16 body=1124 status=ok
// SIG undefined FUN_1410e8d16(void)

void FUN_1410e8d16(longlong param_1,undefined8 *param_2,undefined1 param_3)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  void *pvVar6;
  undefined1 uVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  undefined1 auStack_118 [32];
  undefined8 *local_f8;
  undefined8 *local_e8;
  int local_e0;
  void *local_d8;
  int local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  longlong local_a8;
  longlong *local_a0;
  longlong *local_98;
  longlong *plStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  void *local_78;
  int local_70;
  undefined4 uStack_6c;
  longlong local_68;
  undefined4 local_60;
  undefined8 local_5c;
  undefined4 local_54;
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_c8 = *param_2;
  local_c0 = *(undefined4 *)(param_2 + 1);
  FUN_1448075d0(&local_88,&local_c8);
  lVar8 = FUN_140fa5e12(&local_88);
  if (CONCAT44(uStack_6c,local_70) != 0) {
    FUN_1400020a8();
  }
  if ((lVar8 == 0) || (*(longlong *)(lVar8 + 0x840) == 0)) goto LAB_1410e8d84;
  uVar7 = FUN_146630386(param_1,lVar8);
  uVar4 = *(undefined8 *)(lVar8 + 0x848);
  FUN_1400021e4(lVar8 + 0x840,&local_d8);
  pvVar6 = local_d8;
  uStack_80._0_2_ = CONCAT11(uVar7,param_3);
  local_78 = (void *)0x0;
  local_70 = local_d0;
  local_88 = uVar4;
  if ((longlong)local_d0 == 0) {
    uStack_6c = 0;
  }
  else {
    FUN_1446dd670(&local_78,local_d0,0);
    memcpy(local_78,pvVar6,(longlong)local_d0 * 2);
  }
  local_e8 = (undefined8 *)0x0;
  local_e0 = 0;
  local_68 = param_1;
  FUN_1446efa72(&local_e8,0,5,0x10);
  puVar5 = local_e8;
  local_e0 = 5;
  *local_e8 = &PTR_LAB_14b4388e0;
  LOCK();
  UNLOCK();
  lVar10 = DAT_14c758608 + 1;
  lVar8 = DAT_14c758608 + 1;
  if (lVar10 == 0) {
    LOCK();
    UNLOCK();
    lVar10 = DAT_14c758608 + 2;
    lVar8 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar8;
  local_e8[2] = lVar10;
  *local_e8 = &PTR_FUN_14b994260;
  local_e8[3] = 0;
  iVar12 = 0;
  if (param_1 != 0) {
    uVar3 = *(uint *)(param_1 + 0xc);
    *(uint *)(local_e8 + 3) = uVar3;
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar8 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar8 = 0;
    }
    iVar12 = *(int *)(lVar8 + 0x10);
    if (*(int *)(lVar8 + 0x10) == 0) {
      LOCK();
      iVar12 = DAT_14c964868 + 1;
      UNLOCK();
      iVar11 = DAT_14c964868 + 1;
      bVar13 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar12;
      if (bVar13) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar11);
      }
      LOCK();
      iVar12 = *(int *)(lVar8 + 0x10);
      bVar13 = iVar12 == 0;
      if (bVar13) {
        *(int *)(lVar8 + 0x10) = iVar11;
        iVar12 = 0;
      }
      UNLOCK();
      if (bVar13) {
        iVar12 = iVar11;
      }
    }
  }
  pvVar6 = local_78;
  *(int *)((longlong)puVar5 + 0x1c) = iVar12;
  puVar5[4] = local_88;
  *(undefined2 *)(puVar5 + 5) = (undefined2)uStack_80;
  puVar5[6] = 0;
  lVar8 = (longlong)local_70;
  *(int *)(puVar5 + 7) = local_70;
  if (lVar8 == 0) {
    *(undefined4 *)((longlong)puVar5 + 0x3c) = 0;
  }
  else {
    FUN_1446dd670(puVar5 + 6,local_70,0);
    memcpy((void *)puVar5[6],pvVar6,lVar8 * 2);
  }
  puVar5[8] = local_68;
  if (local_78 != (void *)0x0) {
    FUN_1400020a8(local_78);
  }
  plVar9 = (longlong *)FUN_140a68038(1);
  if (plVar9 == (longlong *)0x0) {
    local_98 = (longlong *)0x0;
    plStack_90 = (longlong *)0x0;
  }
  else {
    (**(code **)(*plVar9 + 0xe0))(plVar9,&local_98);
    if (local_98 != (longlong *)0x0) {
      FUN_148db679a(param_1,&local_a8);
      plVar9 = local_98;
      if (local_a8 != 0) {
        local_68 = 0;
        local_60 = 0;
        local_88 = 0;
        uStack_80 = 0;
        local_5c = 0xffffffff00000080;
        local_54 = 0;
        local_48 = 0;
        local_b8 = 0;
        local_b0 = 0;
        FUN_148dbc940(&local_b8,&local_e8);
        local_f8 = &local_b8;
        (**(code **)(*plVar9 + 0x28))(plVar9,local_a8,&local_d8,1);
        local_40 = 0;
        FUN_1411632c2(&local_88);
      }
      if (local_a0 != (longlong *)0x0) {
        LOCK();
        plVar9 = local_a0 + 1;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)*plVar9 == 0) {
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
    }
  }
  plVar9 = plStack_90;
  if (plStack_90 != (longlong *)0x0) {
    LOCK();
    plVar2 = plStack_90 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*plStack_90)(plStack_90);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
  }
  if (local_e0 == 0) {
LAB_1410e9066:
    if (local_e8 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_e8 != (undefined8 *)0x0) {
    (**(code **)*local_e8)(local_e8,0);
    FUN_1446efa72(&local_e8,0,0,0x10);
    local_e0 = 0;
    goto LAB_1410e9066;
  }
  if (local_d8 != (void *)0x0) {
    FUN_1400020a8();
  }
LAB_1410e8d84:
  if ((local_38 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1410e917c thunk_FUN_144760e82 body=5 status=ok
// SIG undefined thunk_FUN_144760e82(void)

void thunk_FUN_144760e82(undefined8 *param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined1 auStack_78 [32];
  undefined2 *puStack_58;
  undefined8 uStack_48;
  undefined2 *puStack_40;
  int iStack_38;
  longlong lStack_30;
  undefined2 *puStack_28;
  int iStack_20;
  ulonglong uStack_18;
  
  uStack_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = &PTR_FUN_149ead3f0;
  if ((((DAT_14c963ff1 == '\x01') && (param_1[2] != 0)) && (DAT_14c868880 == '\0')) &&
     (param_1[3] != 0)) {
    lStack_30 = param_1[3];
    FUN_1400021e4(&lStack_30,&puStack_28);
    puVar1 = puStack_28;
    if (iStack_20 == 0) {
      puVar1 = &DAT_149dfb77a;
    }
    if (param_1[2] == 0) {
      FUN_140056680(&puStack_40,&DAT_149e01fe8);
    }
    else {
      uStack_48 = *(undefined8 *)(param_1[2] + 0x18);
      FUN_1400021e4(&uStack_48,&puStack_40);
    }
    puVar2 = puStack_40;
    if (iStack_38 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    puStack_58 = puVar1;
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectBase.cpp",0x99,
                  L"GetFName was not None. Class: %s, Name: %s",puVar2);
    if (puStack_40 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (puStack_28 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((uStack_18 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1410e9182 FUN_1410e9182 body=21 status=ok
// SIG undefined FUN_1410e9182(void)

undefined8 FUN_1410e9182(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1410e9198 FUN_1410e9198 body=372 status=ok
// SIG undefined FUN_1410e9198(void)

void FUN_1410e9198(longlong param_1,undefined4 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined1 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  longlong lVar10;
  undefined1 auStack_118 [36];
  undefined4 local_f4;
  longlong local_f0;
  undefined4 local_e8;
  undefined1 local_e4 [4];
  undefined4 local_e0 [32];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_f4 = param_2;
  local_e8 = param_2;
  puVar3 = (undefined4 *)FUN_14484244a();
  if ((puVar3 != (undefined4 *)0x0) && (iVar1 = *(int *)(param_1 + 0x38), (longlong)iVar1 != 0)) {
    local_f0 = *(longlong *)(param_1 + 0x30);
    lVar10 = 0;
    do {
      lVar2 = *(longlong *)(local_f0 + lVar10);
      puVar8 = puVar3;
      puVar9 = local_e0;
      for (lVar6 = 0x20; lVar6 != 0; lVar6 = lVar6 + -1) {
        *puVar9 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar9 = puVar9 + 1;
      }
      puVar4 = (undefined8 *)FUN_14001cc68(0xe0,0x10);
      puVar5 = (undefined8 *)FUN_14001cc68(0x98,8);
      *puVar5 = &PTR_LAB_149f45a50;
      *(undefined4 *)(puVar5 + 1) = local_f4;
      puVar7 = &LAB_1429877da;
      if (puVar5 + 1 == (undefined8 *)0x0) {
        puVar7 = (undefined1 *)0x0;
      }
      memcpy((void *)((longlong)puVar5 + 0xc),local_e4,0x84);
      puVar5[0x12] = lVar2;
      *(undefined2 *)(puVar4 + 1) = 0;
      puVar4[4] = 0;
      puVar4[5] = 0;
      puVar4[2] = 0;
      puVar4[3] = 0;
      *(undefined2 *)(puVar4 + 8) = 1;
      *puVar4 = &PTR_FUN_149f45dc0;
      puVar4[10] = puVar7;
      puVar4[0xc] = puVar5;
      puVar4[0x12] = 0;
      puVar4[0x14] = 0;
      *(undefined1 *)(puVar4 + 0x1a) = 0;
      FUN_1406e6496(lVar2 + 0x70,puVar4);
      lVar10 = lVar10 + 8;
    } while ((longlong)iVar1 * 8 != lVar10);
  }
  if ((local_60 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410e930e FUN_1410e930e body=266 status=ok
// SIG undefined FUN_1410e930e(void)

void FUN_1410e930e(longlong param_1,undefined4 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined1 auStack_88 [36];
  undefined4 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_64 = param_2;
  lVar3 = FUN_14484244a();
  if ((lVar3 != 0) && (iVar1 = *(int *)(param_1 + 0x38), (longlong)iVar1 != 0)) {
    lVar3 = *(longlong *)(param_1 + 0x30);
    lVar5 = 0;
    do {
      lVar2 = *(longlong *)(lVar3 + lVar5);
      puVar4 = (undefined8 *)FUN_14001cc68(0xe0,0x10);
      *(undefined2 *)(puVar4 + 1) = 0;
      puVar4[2] = 0;
      puVar4[3] = 0;
      puVar4[4] = 0;
      puVar4[5] = 0;
      *(undefined2 *)(puVar4 + 8) = 1;
      *puVar4 = &PTR_FUN_149f45dc0;
      puVar4[10] = FUN_142987966;
      puVar4[0xc] = 0;
      puVar4[0xe] = &PTR_LAB_149f45a90;
      *(undefined4 *)(puVar4 + 0xf) = param_2;
      puVar4[0x10] = lVar2;
      puVar4[0x12] = 0;
      puVar4[0x14] = 0;
      *(undefined1 *)(puVar4 + 0x1a) = 0;
      FUN_1406e6496(lVar2 + 0x70,puVar4);
      lVar5 = lVar5 + 8;
    } while ((longlong)iVar1 * 8 != lVar5);
  }
  if ((local_60 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410e941a FUN_1410e941a body=372 status=ok
// SIG undefined FUN_1410e941a(void)

void FUN_1410e941a(longlong param_1,undefined4 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined1 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  longlong lVar10;
  undefined1 auStack_118 [36];
  undefined4 local_f4;
  longlong local_f0;
  undefined4 local_e8;
  undefined1 local_e4 [4];
  undefined4 local_e0 [32];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_f4 = param_2;
  local_e8 = param_2;
  puVar3 = (undefined4 *)FUN_14484244a();
  if ((puVar3 != (undefined4 *)0x0) && (iVar1 = *(int *)(param_1 + 0x38), (longlong)iVar1 != 0)) {
    local_f0 = *(longlong *)(param_1 + 0x30);
    lVar10 = 0;
    do {
      lVar2 = *(longlong *)(local_f0 + lVar10);
      puVar8 = puVar3;
      puVar9 = local_e0;
      for (lVar6 = 0x20; lVar6 != 0; lVar6 = lVar6 + -1) {
        *puVar9 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar9 = puVar9 + 1;
      }
      puVar4 = (undefined8 *)FUN_14001cc68(0xe0,0x10);
      puVar5 = (undefined8 *)FUN_14001cc68(0x98,8);
      *puVar5 = &PTR_LAB_149f45a70;
      *(undefined4 *)(puVar5 + 1) = local_f4;
      puVar7 = &LAB_14298790a;
      if (puVar5 + 1 == (undefined8 *)0x0) {
        puVar7 = (undefined1 *)0x0;
      }
      memcpy((void *)((longlong)puVar5 + 0xc),local_e4,0x84);
      puVar5[0x12] = lVar2;
      *(undefined2 *)(puVar4 + 1) = 0;
      puVar4[4] = 0;
      puVar4[5] = 0;
      puVar4[2] = 0;
      puVar4[3] = 0;
      *(undefined2 *)(puVar4 + 8) = 1;
      *puVar4 = &PTR_FUN_149f45dc0;
      puVar4[10] = puVar7;
      puVar4[0xc] = puVar5;
      puVar4[0x12] = 0;
      puVar4[0x14] = 0;
      *(undefined1 *)(puVar4 + 0x1a) = 0;
      FUN_1406e6496(lVar2 + 0x70,puVar4);
      lVar10 = lVar10 + 8;
    } while ((longlong)iVar1 * 8 != lVar10);
  }
  if ((local_60 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410e9590 FUN_1410e9590 body=51 status=ok
// SIG undefined FUN_1410e9590(void)

void FUN_1410e9590(longlong param_1,undefined8 param_2,char param_3)

{
  if (param_3 == '\0') {
    FUN_1400bc8c2();
  }
  else {
    FUN_1400bc96c(param_1 + 0x5b0);
  }
  FUN_1410e95c4(param_1,*(undefined1 *)(param_1 + 0x5b0));
  return;
}



// FUNCTION 1410e95c4 FUN_1410e95c4 body=150 status=ok
// SIG undefined FUN_1410e95c4(void)

void FUN_1410e95c4(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  
  if (((*(int *)(param_1 + 0x1c) != 0) && (uVar1 = *(uint *)(param_1 + 0x18), -1 < (int)uVar1)) &&
     ((int)uVar1 < DAT_14c9647dc)) {
    plVar4 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar4 != (longlong *)0x0) && ((int)plVar4[2] == *(int *)(param_1 + 0x1c))) &&
       (((*(uint *)(plVar4 + 1) & 0x10200000) == 0 && (lVar2 = *plVar4, lVar2 != 0)))) {
      if ((*(uint *)(plVar4 + 1) & 0x10200000) == 0) {
        bVar3 = *(byte *)(lVar2 + 0xbd8);
      }
      else {
        bVar3 = 0;
      }
      if ((int)(uint)bVar3 < *(int *)(lVar2 + 0xbf0)) {
        plVar4 = *(longlong **)
                  (*(longlong *)(lVar2 + 0xbe8) + 0x10 +
                  (ulonglong)bVar3 * 0x80 + (ulonglong)bVar3 * 8);
        if (plVar4 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001410e9657. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar4 + 0x310))();
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 1410e965a FUN_1410e965a body=1954 status=ok
// SIG undefined FUN_1410e965a(void)

void FUN_1410e965a(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  ushort uVar6;
  ushort uVar7;
  uint uVar8;
  int iVar9;
  int *piVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 uVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  undefined8 *puVar17;
  longlong lVar18;
  longlong lVar19;
  undefined1 uVar20;
  uint uVar21;
  undefined1 auStack_418 [32];
  undefined4 local_3f8;
  undefined4 local_3f0;
  undefined4 local_3e8;
  undefined8 local_3e0;
  wchar_t *local_3d8;
  code *local_3d0;
  undefined1 *local_3c8;
  undefined8 *local_3c0;
  code *local_3b8;
  code *local_3b0;
  int local_3a8;
  int local_3a4;
  int local_3a0;
  int local_39c;
  undefined8 *local_398;
  undefined8 *local_390;
  undefined4 local_388;
  undefined4 uStack_384;
  undefined4 uStack_380;
  uint uStack_37c;
  undefined8 local_368;
  undefined8 uStack_360;
  undefined **local_358;
  uint local_350;
  int local_34c;
  int local_348;
  int local_344;
  int local_340;
  undefined1 local_33c;
  undefined2 local_338;
  undefined4 local_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  undefined4 uStack_328;
  undefined1 local_324;
  uint local_320;
  longlong local_318;
  undefined1 local_310;
  uint local_308;
  undefined8 *local_300;
  undefined1 local_2f8;
  undefined1 local_2f0;
  undefined1 local_2e8 [136];
  undefined1 local_260 [160];
  undefined1 local_1c0 [2];
  undefined4 local_1be;
  undefined2 uStack_1ba;
  undefined2 uStack_1b8;
  undefined2 uStack_1b6;
  undefined2 uStack_1b4;
  undefined2 uStack_1b2;
  undefined2 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  char local_1a4;
  undefined2 local_1a0;
  undefined4 local_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  char local_18c;
  undefined4 local_188;
  undefined8 local_180;
  char local_178;
  undefined4 local_170;
  undefined8 local_168;
  char local_160;
  undefined4 local_158;
  undefined8 local_150;
  char local_148;
  undefined4 local_140;
  undefined8 local_138;
  char local_130;
  undefined2 local_128;
  undefined4 local_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  char local_114;
  undefined1 local_110;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined2 local_e8;
  undefined2 uStack_e6;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 local_d0;
  undefined8 local_c8;
  char local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  char local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  char local_90;
  undefined4 local_88;
  undefined8 local_80;
  char local_78;
  undefined2 local_70;
  undefined4 local_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  char local_5c;
  uint local_58;
  undefined1 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_418;
  uVar8 = *(uint *)(param_3 + 0x10);
  lVar14 = FUN_14009d2a0();
  lVar15 = FUN_14038fb82();
  piVar10 = *(int **)(param_3 + 8);
  if (piVar10 == (int *)0x0) {
    local_39c = 0;
    local_3a0 = 0;
    local_3a4 = 0;
    local_3a8 = 0;
  }
  else {
    local_3a8 = *piVar10;
    local_3a4 = piVar10[1];
    local_3a0 = piVar10[2];
    local_39c = piVar10[3];
  }
  uStack_380 = 0;
  uStack_37c = uStack_37c & 0xffffff00;
  local_388 = 0;
  uStack_384 = 0;
  lVar16 = FUN_1410e9dfe();
  if (DAT_14c951858 == 0) {
    local_3c0 = &local_108;
    local_108 = (undefined **)FUN_1449e2820;
    local_3b0 = FUN_14081d0ea;
    local_3b8 = FUN_14081d0ea;
    local_3c8 = &LAB_1468c5283;
    local_3d0 = FUN_142809da0;
    local_3d8 = L"Engine";
    local_3e0 = 0x400000000;
    local_3e8 = 0x10000000;
    local_3f0 = 8;
    local_3f8 = 0x50;
    FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
  }
  lVar19 = *(longlong *)(param_1 + -0xd8);
  if (lVar19 != 0) {
    do {
      if ((*(int *)(*(longlong *)(lVar19 + 0x10) + 0x38) < *(int *)(lVar16 + 0x38)) ||
         (lVar18 = lVar19,
         *(longlong *)
          (*(longlong *)(*(longlong *)(lVar19 + 0x10) + 0x30) +
          (longlong)*(int *)(lVar16 + 0x38) * 8) != lVar16 + 0x30)) {
        lVar18 = 0;
      }
    } while ((lVar18 == 0) && (lVar19 = *(longlong *)(lVar19 + 0x20), lVar19 != 0));
    if (lVar18 != 0) {
      local_388 = *(undefined4 *)(lVar18 + 0x120);
      uStack_384 = *(undefined4 *)(lVar18 + 0x124);
      uStack_380 = *(undefined4 *)(lVar18 + 0x128);
      uStack_37c = *(uint *)(lVar18 + 300);
    }
  }
  uVar21 = (uint)CONCAT12(((local_3a0 != 0 || local_39c != 0) || local_3a4 != 0) || local_3a8 != 0,
                          *(undefined2 *)(lVar14 + 100));
  if ((char)(uVar8 >> 0x18) == '\0') {
    lVar16 = *(longlong *)(param_1 + 8);
    lVar19 = (ulonglong)(uVar8 & 0xffffff) * 0x120;
    puVar1 = (undefined4 *)(lVar16 + lVar19);
    if ((*(int *)(lVar16 + 0x70 + lVar19) != 0) || (*(char *)(puVar1 + 0x23) == '\x01')) {
      uVar3 = *(undefined2 *)(lVar15 + 0xe6);
      uVar4 = *(undefined2 *)(lVar15 + 0xf4);
      uVar5 = *(undefined2 *)(lVar14 + 0x7e);
      uVar6 = *(ushort *)(param_1 + -0x1f);
      uVar7 = *(ushort *)(lVar14 + 0x110);
      local_1be = *puVar1;
      uStack_1ba = (undefined2)puVar1[1];
      uStack_1b8 = (undefined2)((uint)puVar1[1] >> 0x10);
      uStack_1b6 = (undefined2)puVar1[2];
      uStack_1b4 = (undefined2)((uint)puVar1[2] >> 0x10);
      uStack_1b2 = (undefined2)puVar1[3];
      uStack_1b0 = (undefined2)((uint)puVar1[3] >> 0x10);
      puVar17 = (undefined8 *)FUN_14001cc68(0x78,8);
      *(uint *)(puVar17 + 1) = uVar21;
      *(undefined1 *)((longlong)puVar17 + 0x1c) = 1;
      *(int *)((longlong)puVar17 + 0xc) = local_3a8;
      *(int *)(puVar17 + 2) = local_3a4;
      *(int *)((longlong)puVar17 + 0x14) = local_3a0;
      *(int *)(puVar17 + 3) = local_39c;
      *(undefined2 *)(puVar17 + 4) = uVar4;
      *(undefined1 *)((longlong)puVar17 + 0x34) = 1;
      *(ulonglong *)((longlong)puVar17 + 0x24) = CONCAT26(uStack_1b8,CONCAT24(uStack_1ba,local_1be))
      ;
      *(ulonglong *)((longlong)puVar17 + 0x2c) =
           CONCAT26(uStack_1b0,CONCAT24(uStack_1b2,CONCAT22(uStack_1b4,uStack_1b6)));
      *(undefined2 *)(puVar17 + 7) = uVar5;
      *(undefined1 *)(puVar17 + 9) = 1;
      puVar17[8] = lVar16 + lVar19 + 0x10;
      *(undefined2 *)(puVar17 + 10) = uVar3;
      *(undefined1 *)((longlong)puVar17 + 100) = 1;
      *(undefined4 *)((longlong)puVar17 + 0x54) = local_388;
      *(undefined4 *)(puVar17 + 0xb) = uStack_384;
      *(undefined4 *)((longlong)puVar17 + 0x5c) = uStack_380;
      *(uint *)(puVar17 + 0xc) = uStack_37c;
      *(uint *)(puVar17 + 0xd) = ((uVar6 & 0x100) << 8 | (uint)uVar7) ^ 0x10000;
      *(undefined1 *)(puVar17 + 0xe) = 0;
      *puVar17 = &PTR_FUN_14a4c73a0;
      iVar9 = *(int *)(param_4 + 0x50);
      *(uint *)(param_4 + 0x50) = iVar9 + 1U;
      if (*(uint *)(param_4 + 0x54) < iVar9 + 1U) {
        FUN_140561fb4(param_4,iVar9);
      }
      lVar14 = *(longlong *)(param_4 + 0x48);
      if (*(longlong *)(param_4 + 0x48) == 0) {
        lVar14 = param_4;
      }
      puVar2 = (undefined8 *)(lVar14 + (longlong)iVar9 * 0x48);
      *(byte *)(puVar2 + 8) = *(byte *)(puVar2 + 8) & 0xfc | 2;
      FUN_14055f024(puVar2);
      *(byte *)(puVar2 + 8) = (*(byte *)(puVar2 + 8) & 0xfc) + 1;
      *puVar2 = puVar17;
      *(undefined4 *)(puVar2 + 1) = (undefined4)local_108;
      *(undefined4 *)((longlong)puVar2 + 0xc) = local_108._4_4_;
      *(undefined4 *)(puVar2 + 2) = uStack_100;
      *(undefined4 *)((longlong)puVar2 + 0x14) = uStack_fc;
      puVar2[3] = CONCAT44(uStack_f4,local_f8);
      puVar2[4] = CONCAT44(uStack_ec,uStack_f0);
      puVar2[5] = CONCAT44(uStack_e4,CONCAT22(uStack_e6,local_e8));
      puVar2[6] = CONCAT44(uStack_dc,uStack_e0);
      puVar2[7] = CONCAT44(uStack_d4,local_d8);
    }
  }
  else if (uVar8 >> 0x18 == 1) {
    lVar16 = *(longlong *)(param_1 + 0x18);
    lVar19 = (ulonglong)(uVar8 & 0xffffff) * 0x450;
    puVar17 = (undefined8 *)(lVar16 + lVar19);
    if ((*(int *)(lVar16 + 0x70 + lVar19) == 0) && (*(char *)((longlong)puVar17 + 0x8c) == '\0')) {
      if (((((*(int *)(puVar17 + 0x30) == 0) && (*(char *)((longlong)puVar17 + 0x19c) == '\0')) &&
           (*(int *)(puVar17 + 0x52) == 0)) &&
          ((*(char *)((longlong)puVar17 + 0x2ac) == '\0' && (*(int *)(puVar17 + 0x74) == 0)))) &&
         (*(char *)((longlong)puVar17 + 0x3bc) == '\0')) goto LAB_1410e98d4;
      local_320 = 0;
    }
    else {
      local_320 = 0x10000;
    }
    local_318 = lVar16 + lVar19 + 0x10;
    local_338 = *(undefined2 *)(lVar15 + 0xf6);
    local_320 = *(ushort *)(lVar14 + 0x7e) | local_320;
    uVar11 = *puVar17;
    uVar12 = puVar17[1];
    local_300 = puVar17 + 0x24;
    local_308 = 0x10000;
    if (*(int *)(puVar17 + 0x30) == 0) {
      local_308 = (uint)*(byte *)((longlong)puVar17 + 0x19c) << 0x10;
    }
    local_308 = *(ushort *)(lVar14 + 0x80) | local_308;
    uVar20 = 1;
    local_33c = 1;
    local_34c = local_3a8;
    local_348 = local_3a4;
    local_344 = local_3a0;
    local_340 = local_39c;
    local_324 = 1;
    local_368._0_4_ = (undefined4)uVar11;
    local_368._4_4_ = (undefined4)((ulonglong)uVar11 >> 0x20);
    uStack_360._0_4_ = (undefined4)uVar12;
    uStack_360._4_4_ = (undefined4)((ulonglong)uVar12 >> 0x20);
    local_334 = (undefined4)local_368;
    uStack_330 = local_368._4_4_;
    uStack_32c = (undefined4)uStack_360;
    uStack_328 = uStack_360._4_4_;
    local_310 = 1;
    local_2f8 = 1;
    local_2f0 = 0;
    local_358 = &PTR_FUN_14a4c73c0;
    local_390 = puVar17 + 0x46;
    uVar13 = 1;
    if (*(int *)(puVar17 + 0x52) == 0) {
      uVar13 = *(undefined1 *)((longlong)puVar17 + 0x2ac);
    }
    local_368 = uVar11;
    uStack_360 = uVar12;
    local_350 = uVar21;
    local_3f8._0_1_ = uVar13;
    FUN_1458037e4(&local_358,local_2e8,*(undefined2 *)(lVar14 + 0x82));
    local_398 = puVar17 + 0x68;
    if (*(int *)(puVar17 + 0x74) == 0) {
      uVar20 = *(undefined1 *)((longlong)puVar17 + 0x3bc);
    }
    local_3f8 = CONCAT31(local_3f8._1_3_,uVar20);
    FUN_145803906(local_2e8,local_260,*(undefined2 *)(lVar14 + 0x84));
    FUN_1458039a2(local_260,local_1c0,*(undefined2 *)(lVar15 + 0xe6),&local_388);
    uStack_ec = CONCAT31(uStack_ec._1_3_,local_1a4);
    if (local_1a4 == '\x01') {
      uStack_f4 = uStack_1ac;
      uStack_f0 = uStack_1a8;
    }
    local_e8 = local_1a0;
    uStack_d4 = CONCAT31(uStack_d4._1_3_,local_18c);
    if (local_18c == '\x01') {
      uStack_e4 = local_19c;
      uStack_e0 = uStack_198;
      uStack_dc = uStack_194;
      local_d8 = uStack_190;
    }
    local_d0 = local_188;
    local_c0 = local_178;
    if (local_178 == '\x01') {
      local_c8 = local_180;
    }
    local_b8 = local_170;
    local_a8 = local_160;
    if (local_160 == '\x01') {
      local_b0 = local_168;
    }
    local_a0 = local_158;
    local_90 = local_148;
    if (local_148 == '\x01') {
      local_98 = local_150;
    }
    local_88 = local_140;
    local_78 = local_130;
    if (local_130 == '\x01') {
      local_80 = local_138;
    }
    local_70 = local_128;
    local_5c = local_114;
    if (local_114 == '\x01') {
      local_6c = local_124;
      uStack_68 = uStack_120;
      uStack_64 = uStack_11c;
      uStack_60 = uStack_118;
    }
    local_58 = ((*(ushort *)(param_1 + -0x1f) & 0x100) << 8 | (uint)*(ushort *)(lVar14 + 0x110)) ^
               0x10000;
    local_50 = local_110;
    local_108 = &PTR_FUN_14a4c7440;
    FUN_145803be0(param_4);
  }
LAB_1410e98d4:
  if ((local_48 ^ (ulonglong)auStack_418) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1410e9dfe FUN_1410e9dfe body=228 status=ok
// SIG undefined FUN_1410e9dfe(void)

longlong FUN_1410e9dfe(void)

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
  if (DAT_14cab6640 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_145957db2;
    local_38 = &LAB_1476bf549;
    local_40 = FUN_1417a8d49;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x130;
    FUN_14081cfa3(L"/Script/MovieSceneTracks",L"MovieSceneComponentMaterialTrack",&DAT_14cab6640,
                  &DAT_1476bf548);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cab6640;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410e9ee4 FUN_1410e9ee4 body=41 status=ok
// SIG undefined FUN_1410e9ee4(void)

void FUN_1410e9ee4(longlong param_1,int param_2)

{
  HCURSOR hCursor;
  
  *(int *)(param_1 + 8) = param_2;
  hCursor = *(HCURSOR *)(param_1 + 0x88 + (longlong)param_2 * 8);
  if (hCursor == (HCURSOR)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001410e9efc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    SetCursor(*(HCURSOR *)(param_1 + 0x10 + (longlong)param_2 * 8));
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001410e9f06. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SetCursor(hCursor);
  return;
}



// FUNCTION 1410e9f0d FUN_1410e9f0d body=79 status=ok
// SIG undefined FUN_1410e9f0d(void)

undefined8 FUN_1410e9f0d(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if (((param_1 != 0) && (*(longlong *)(param_1 + 0x30) != 0)) &&
     (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x30) + 0x2b0), lVar1 != 0)) {
    lVar2 = FUN_1401b1144();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      return CONCAT71((int7)((ulonglong)(lVar2 + 0x30) >> 8),*(undefined1 *)(lVar1 + 0x5d8));
    }
  }
  return 0;
}



// FUNCTION 1410e9f5c FUN_1410e9f5c body=70 status=ok
// SIG undefined FUN_1410e9f5c(void)

void FUN_1410e9f5c(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_1410e9fa2(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b45a610;
  *(undefined4 *)(puVar1 + 0xb) = 0;
  *(undefined1 *)((longlong)puVar1 + 0x5c) = 0;
  puVar1[0xc] = 0;
  *(undefined1 *)(puVar1 + 0xd) = 1;
  *(undefined8 *)((longlong)puVar1 + 0x6c) = 0x3ecccccd00000000;
  *(undefined8 *)((longlong)puVar1 + 0x74) = 0x3dcccccd3d4ccccd;
  *(undefined4 *)((longlong)puVar1 + 0x7c) = 0;
  return;
}



// FUNCTION 1410e9fa2 FUN_1410e9fa2 body=150 status=ok
// SIG undefined FUN_1410e9fa2(void)

undefined8 * FUN_1410e9fa2(undefined8 *param_1,longlong *param_2)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_FUN_149e8f7e0;
  if ((undefined8 *)*param_2 != param_1 && (undefined8 *)*param_2 != (undefined8 *)0x0) {
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectGlobals.cpp",0xe8e,
                  L"UObject(const FObjectInitializer&) constructor called but it\'s not the object that\'s currently being constructed with NewObject. Maybe you are trying to construct it on the stack, which is not supported."
                 );
  }
  *param_2 = (longlong)param_1;
  *(undefined1 *)((longlong)param_2 + 0x12) = 0;
  *param_1 = &PTR_FUN_14acd76e0;
  *(undefined4 *)(param_1 + 5) = 0x3f000000;
  *(undefined1 *)((longlong)param_1 + 0x2c) = 0;
  uVar1 = DAT_14c8464e8;
  param_1[6] = DAT_14c8464e0;
  param_1[7] = uVar1;
  param_1[8] = DAT_14c8464f0;
  *(undefined1 *)(param_1 + 9) = 0;
  *param_1 = &PTR_FUN_14acd7af0;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined1 *)((longlong)param_1 + 0x54) = 0;
  return param_1;
}



// FUNCTION 1410ea038 FUN_1410ea038 body=139 status=ok
// SIG undefined FUN_1410ea038(void)

undefined8 * FUN_1410ea038(undefined8 *param_1,longlong *param_2)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_FUN_149e8f7e0;
  if ((undefined8 *)*param_2 != param_1 && (undefined8 *)*param_2 != (undefined8 *)0x0) {
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectGlobals.cpp",0xe8e,
                  L"UObject(const FObjectInitializer&) constructor called but it\'s not the object that\'s currently being constructed with NewObject. Maybe you are trying to construct it on the stack, which is not supported."
                 );
  }
  *param_2 = (longlong)param_1;
  *(undefined1 *)((longlong)param_2 + 0x12) = 0;
  *param_1 = &PTR_FUN_14aa9f670;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  if (DAT_14c846538 == '\x01') {
    uVar1 = param_1[3];
  }
  else {
    uVar1 = 0;
  }
  FUN_140e70c9e(param_1 + 7,uVar1);
  *(undefined1 *)(param_1 + 8) = 0;
  return param_1;
}



// FUNCTION 1410ea0c4 FUN_1410ea0c4 body=13 status=ok
// SIG undefined FUN_1410ea0c4(void)

undefined4 * FUN_1410ea0c4(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  return param_1;
}



// FUNCTION 1410ea0d2 FUN_1410ea0d2 body=105 status=ok
// SIG undefined FUN_1410ea0d2(void)

ulonglong FUN_1410ea0d2(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  bool bVar8;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 != (longlong *)0x0) {
    iVar5 = (int)plVar3[1];
    while (iVar5 != 0) {
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar8 = iVar5 == iVar4;
      if (bVar8) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
      if (bVar8) {
        uVar6 = (**(code **)(param_1 + 0x28))
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
            (**(code **)(*plVar3 + 0x10))(plVar3);
          }
        }
        return (ulonglong)uVar6;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001410ea12d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar7 = (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return uVar7;
}



// FUNCTION 1410ea13c FUN_1410ea13c body=105 status=ok
// SIG undefined FUN_1410ea13c(void)

void FUN_1410ea13c(longlong param_1)

{
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14b41ccc0;
  *(undefined ***)(param_1 + 0x50) = &PTR_FUN_14b00be10;
  FUN_14487da0a(*(undefined8 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x70));
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FUN_1400020a8();
  }
  FUN_14487da48(*(undefined8 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x60));
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FUN_1400020a8();
  }
  FUN_140cab5ca(param_1 + 0x10);
  return;
}



// FUNCTION 1410ea1a6 FUN_1410ea1a6 body=468 status=ok
// SIG undefined FUN_1410ea1a6(void)

undefined8 FUN_1410ea1a6(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  longlong *plVar11;
  int iVar12;
  longlong *plVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  bool bVar17;
  int local_58;
  
  plVar11 = *(longlong **)(param_1 + 0x10);
  lVar2 = *(longlong *)(param_1 + 0x18);
  bVar5 = true;
  if (plVar11 == (longlong *)0x0) {
LAB_1410ea2e9:
    lVar10 = 0;
    plVar11 = (longlong *)0x0;
  }
  else {
    iVar6 = (int)plVar11[1];
    do {
      if (iVar6 == 0) goto LAB_1410ea2e9;
      LOCK();
      iVar7 = (int)plVar11[1];
      bVar17 = iVar6 == iVar7;
      if (bVar17) {
        *(int *)(plVar11 + 1) = iVar6 + 1;
        iVar7 = iVar6;
      }
      iVar6 = iVar7;
      UNLOCK();
    } while (!bVar17);
    lVar10 = *(longlong *)(param_1 + 8);
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
    LOCK();
    plVar3 = plVar11 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar1 = (int *)((longlong)plVar11 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar11 + 0x10))(plVar11);
      }
    }
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
    bVar5 = false;
  }
  iVar6 = *(int *)(lVar2 + 0x20);
  lVar16 = (longlong)iVar6;
  if (lVar16 != 0) {
    plVar3 = *(longlong **)(lVar2 + 0x18);
    local_58 = 0;
    bVar17 = *plVar3 == lVar10;
    iVar7 = 0;
    do {
      lVar14 = (longlong)iVar7;
      iVar12 = iVar7 + 1;
      if (iVar7 + 1 < iVar6) {
        iVar12 = iVar6;
      }
      plVar13 = plVar3 + lVar14 * 2 + 2;
      iVar9 = iVar7;
      lVar15 = lVar14;
      do {
        lVar15 = lVar15 + 1;
        iVar8 = iVar12;
        if (lVar16 <= lVar15) break;
        lVar4 = *plVar13;
        iVar9 = iVar9 + 1;
        plVar13 = plVar13 + 2;
        iVar8 = iVar9;
      } while (bVar17 == (lVar4 == lVar10));
      iVar12 = iVar8 - iVar7;
      if (bVar17 == false) {
        if (local_58 != iVar7) {
          memmove(plVar3 + (longlong)local_58 * 2,plVar3 + lVar14 * 2,(longlong)iVar12 << 4);
        }
        local_58 = local_58 + iVar12;
      }
      else {
        FUN_140ce26a5(plVar3 + lVar14 * 2,iVar12);
      }
      bVar17 = (bool)(bVar17 ^ 1);
      iVar7 = iVar8;
    } while (lVar15 < lVar16);
    *(int *)(lVar2 + 0x20) = local_58;
  }
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar11 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
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
  if (!bVar5) {
    LOCK();
    plVar3 = plVar11 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
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
  return 0;
}



// FUNCTION 1410ea37a FUN_1410ea37a body=401 status=ok
// SIG undefined FUN_1410ea37a(void)

void FUN_1410ea37a(longlong param_1)

{
  longlong lVar1;
  void *_Src;
  ushort *puVar2;
  int iVar3;
  undefined8 uVar4;
  char cVar5;
  longlong lVar6;
  int iVar7;
  undefined1 auStack_68 [32];
  void *local_48;
  int local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1410ea50c();
  if ((*(char *)(param_1 + 0x298) == '\x01') && (lVar1 = *(longlong *)(param_1 + 0x288), lVar1 != 0)
     ) {
    FUN_14098b788(lVar1,param_1 + 0xd8);
    if (*(longlong *)(lVar1 + 0x120) != 0) {
      FUN_14575b2fa(param_1);
    }
    uVar4 = DAT_14cbd9858;
    lVar1 = *(longlong *)(param_1 + 0x288);
    if ((lVar1 != 0) && (*(int *)(lVar1 + 0x1ec) != -1)) {
      local_48 = (void *)0x0;
      local_40 = *(int *)(lVar1 + 400);
      lVar6 = (longlong)local_40;
      _Src = *(void **)(lVar1 + 0x188);
      if (lVar6 == 0) {
        local_3c = 0;
        iVar7 = 0;
      }
      else {
        FUN_1446dd670(&local_48,local_40,0);
        memcpy(local_48,_Src,lVar6 * 2);
        iVar7 = local_40;
      }
      iVar3 = iVar7 + -1;
      if (iVar7 == 0) {
        iVar3 = 0;
      }
      cVar5 = FUN_1402ca054(uVar4,local_48,iVar3);
      if (local_48 != (void *)0x0) {
        FUN_1400020a8();
      }
      if ((cVar5 == '\0') || (*(char *)(lVar1 + 0x19a) != '\x01')) {
        if ((*(byte *)(lVar1 + 0x1ea) & 1) != 0) {
          *(undefined4 *)(lVar1 + 0x150) = *(undefined4 *)(lVar1 + 0x1f0);
          puVar2 = *(ushort **)(lVar1 + 0x80);
          if (puVar2 != (ushort *)0x0) {
            *puVar2 = *puVar2 | (ushort)(1L << (*(byte *)(lVar1 + 0x78) & 0x3f));
          }
        }
      }
      else {
        FUN_1442ba168(param_1,1);
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410ea50c FUN_1410ea50c body=677 status=ok
// SIG undefined FUN_1410ea50c(void)

void FUN_1410ea50c(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  ushort *puVar3;
  uint uVar4;
  wchar_t *_Str;
  size_t sVar5;
  undefined8 *puVar6;
  uint uVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined1 auStack_218 [32];
  undefined1 *local_1f8;
  undefined1 *local_1f0;
  undefined1 *local_1e8;
  char local_1e0;
  undefined1 local_1d8 [256];
  undefined1 local_d8 [128];
  undefined1 *local_58;
  undefined1 *local_50;
  int local_48;
  ulonglong local_40;
  
  lVar2 = DAT_14c9647c8;
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_218;
  iVar1 = *(int *)(param_1 + 0x34);
  if (((iVar1 != 0) && (uVar7 = *(uint *)(param_1 + 0x30), -1 < (int)uVar7)) &&
     ((int)uVar7 < DAT_14c9647dc)) {
    lVar9 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8);
    if (((lVar9 != 0) && (*(int *)(lVar9 + 0x10) == iVar1)) &&
       ((*(uint *)(lVar9 + 8) & 0x10200000) == 0)) {
      *(byte *)(param_1 + 0x8c) = *(byte *)(param_1 + 0x8c) | 0x80;
      puVar6 = (undefined8 *)
               ((ulonglong)((uVar7 & 0xffff) * 0x18) +
               *(longlong *)(lVar2 + (ulonglong)(uVar7 >> 0x10) * 8));
      if (((puVar6 == (undefined8 *)0x0) || (*(int *)(puVar6 + 2) != iVar1)) ||
         ((*(uint *)(puVar6 + 1) & 0x10200000) != 0)) {
        uVar8 = 0;
      }
      else {
        uVar8 = *puVar6;
      }
      local_1f8 = local_1d8;
      local_1e0 = '\0';
      local_1e8 = local_d8;
      local_1f0 = local_1f8;
      _Str = (wchar_t *)FUN_140c7f682(param_1,L"Activate",&local_1f8);
      local_58 = (undefined1 *)0x0;
      if (_Str == (wchar_t *)0x0) {
        local_50 = (undefined1 *)0x0;
        local_48 = 0;
      }
      else {
        sVar5 = wcslen(_Str);
        local_48 = FUN_14475aa65(0,_Str,sVar5 & 0xffffffff);
        uVar7 = local_48 + 1;
        local_50 = (undefined1 *)0x0;
        if (0x80 < uVar7) {
          FUN_1446efa72(&local_58,0,uVar7,1);
          local_50 = local_58;
        }
        if (local_50 == (undefined1 *)0x0) {
          local_50 = local_d8;
        }
        FUN_14475a98a(local_50,uVar7,_Str,(int)sVar5 + 1);
      }
      FUN_1412a486e(uVar8,local_50);
      if (local_58 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
      if (local_1e0 == '\x01') {
        FUN_1400020a8(local_1f8);
      }
      uVar7 = *(uint *)(param_1 + 0x8c);
      uVar4 = (uVar7 >> 1 & 0x20000 | uVar7 & 0xfffd6bff) + (uVar7 & 0x4a00) * 2 ^ 0x20000;
      *(uint *)(param_1 + 0x8c) = uVar4;
      lVar2 = *(longlong *)(param_1 + 0x288);
      if (lVar2 != 0) {
        if (((uVar7 >> 0x18 & 1) != 0) &&
           (puVar3 = *(ushort **)(lVar2 + 0x80), puVar3 != (ushort *)0x0)) {
          *puVar3 = *puVar3 | (ushort)(1L << (*(byte *)(lVar2 + 0x78) & 0x3f));
          uVar4 = *(uint *)(param_1 + 0x8c);
        }
        if (((uVar4 >> 0x19 & 1) != 0) &&
           (puVar3 = *(ushort **)(lVar2 + 0x90), puVar3 != (ushort *)0x0)) {
          *puVar3 = *puVar3 | (ushort)(1L << (*(byte *)(lVar2 + 0x88) & 0x3f));
          uVar4 = *(uint *)(param_1 + 0x8c);
        }
        uVar4 = uVar4 & 0xfcffffff;
      }
      *(uint *)(param_1 + 0x8c) = uVar4 & 0xfff7ffff;
    }
  }
  if ((local_40 ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410ea7c0 FUN_1410ea7c0 body=40 status=ok
// SIG undefined FUN_1410ea7c0(void)

undefined8 FUN_1410ea7c0(undefined8 param_1,int param_2)

{
  FUN_1410ea7e8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1410ea7e8 FUN_1410ea7e8 body=258 status=ok
// SIG undefined FUN_1410ea7e8(void)

void FUN_1410ea7e8(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b693fb0;
  if ((param_1[0xcd] != 0 & DAT_14cb26569) == 1) {
    FUN_1400848c0(*(undefined8 *)(param_1[0xcd] + 0x50));
  }
  if ((param_1[199] != 0) && ((DAT_14cb26569 & 1) != 0)) {
    FUN_1400848c0(*(undefined8 *)(param_1[199] + 0x50));
  }
  param_1[0xbb] = &DAT_14a171d50;
  *(undefined4 *)(param_1 + 0xbe) = 0;
  if (*(int *)((longlong)param_1 + 0x5f4) != 0) {
    FUN_140115c12(param_1 + 0xbd,0);
  }
  param_1[0xbc] = 0;
  if (param_1[0xbd] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xa4] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0x9c];
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
  FUN_140c09192(param_1);
  return;
}



// FUNCTION 1410ea8ea FUN_1410ea8ea body=157 status=ok
// SIG undefined FUN_1410ea8ea(void)

void FUN_1410ea8ea(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14aa2adf0;
  puVar1 = (undefined8 *)param_1[0x13];
  while (puVar1 != (undefined8 *)0x0) {
    param_1[0x13] = *puVar1;
    FUN_1400020a8();
    puVar1 = (undefined8 *)param_1[0x13];
  }
  FUN_1410eab6a(param_1[0x10],*(undefined4 *)(param_1 + 0x11));
  if (param_1[0x10] != 0) goto LAB_1410ea947;
  while ((undefined8 *)param_1[0xf] != (undefined8 *)0x0) {
    param_1[0xf] = *(undefined8 *)param_1[0xf];
LAB_1410ea947:
    FUN_1400020a8();
  }
  FUN_1410ea987(param_1[0xc],*(undefined4 *)(param_1 + 0xd));
  if (param_1[0xc] != 0) goto LAB_1410ea973;
  while ((undefined8 *)param_1[0xb] != (undefined8 *)0x0) {
    param_1[0xb] = *(undefined8 *)param_1[0xb];
LAB_1410ea973:
    FUN_1400020a8();
  }
  return;
}



// FUNCTION 1410ea987 FUN_1410ea987 body=53 status=ok
// SIG undefined FUN_1410ea987(void)

void FUN_1410ea987(longlong param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar2 = 0;
    do {
      plVar1 = *(longlong **)(param_1 + lVar2 * 8);
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x10))(plVar1,1);
      }
      lVar2 = lVar2 + 1;
    } while (param_2 != (int)lVar2);
  }
  return;
}



// FUNCTION 1410ea9bc FUN_1410ea9bc body=430 status=ok
// SIG undefined FUN_1410ea9bc(void)

undefined8 * FUN_1410ea9bc(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_LAB_14aa2b280;
  FUN_140a83712(param_1[0x13],*(undefined4 *)(param_1 + 0x14));
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  FUN_140a83712(param_1[0x11],*(undefined4 *)(param_1 + 0x12));
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  puVar1 = (undefined8 *)param_1[0x10];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  puVar1 = (undefined8 *)param_1[0xf];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if (*(char *)((longlong)param_1 + 0x73) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x73) = 0;
  }
  if (*(char *)((longlong)param_1 + 0x71) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x71) = 0;
  }
  if (*(char *)(param_1 + 0xd) == '\x01') {
    puVar1 = (undefined8 *)param_1[0xc];
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
    *(undefined1 *)(param_1 + 0xd) = 0;
  }
  if (*(char *)(param_1 + 0xb) == '\x01') {
    puVar1 = (undefined8 *)param_1[10];
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
    *(undefined1 *)(param_1 + 0xb) = 0;
  }
  if (*(int *)((longlong)param_1 + 0x4c) != -1) {
    if (param_1[8] != 0) {
      FUN_1400020a8();
    }
    param_1[8] = 0;
    param_1[9] = 0xffffffff00000000;
  }
  if (*(char *)(param_1 + 7) == '\x01') {
    *(undefined1 *)(param_1 + 7) = 0;
  }
  if (*(char *)((longlong)param_1 + 0x2d) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x2d) = 0;
  }
  if (*(char *)(param_1 + 5) == '\x01') {
    *(undefined1 *)(param_1 + 5) = 0;
  }
  if (*(char *)(param_1 + 4) == '\x01') {
    *(undefined1 *)(param_1 + 4) = 0;
  }
  if (*(char *)(param_1 + 3) == '\x01') {
    *(undefined1 *)(param_1 + 3) = 0;
  }
  if (*(char *)((longlong)param_1 + 0x11) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x11) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1410eab6a FUN_1410eab6a body=154 status=ok
// SIG undefined FUN_1410eab6a(void)

void FUN_1410eab6a(longlong param_1,int param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  if (param_2 != 0) {
    lVar3 = 0;
    do {
      lVar1 = *(longlong *)(param_1 + lVar3 * 8);
      if (lVar1 != 0) {
        FUN_140a83712(*(undefined8 *)(lVar1 + 0x28),*(undefined4 *)(lVar1 + 0x30));
        if (*(longlong *)(lVar1 + 0x28) != 0) {
          FUN_1400020a8();
        }
        FUN_140a83712(*(undefined8 *)(lVar1 + 0x18),*(undefined4 *)(lVar1 + 0x20));
        if (*(longlong *)(lVar1 + 0x18) != 0) {
          FUN_1400020a8();
        }
        puVar2 = *(undefined8 **)(lVar1 + 0x10);
        if (puVar2 != (undefined8 *)0x0) {
          (**(code **)*puVar2)(puVar2,1);
        }
        puVar2 = *(undefined8 **)(lVar1 + 8);
        if (puVar2 != (undefined8 *)0x0) {
          (**(code **)*puVar2)(puVar2,1);
        }
        FUN_1400020a8(lVar1);
      }
      lVar3 = lVar3 + 1;
    } while (param_2 != (int)lVar3);
  }
  return;
}



// FUNCTION 1410eac04 thunk_FUN_144760e82 body=5 status=ok
// SIG undefined thunk_FUN_144760e82(void)

void thunk_FUN_144760e82(undefined8 *param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined1 auStack_78 [32];
  undefined2 *puStack_58;
  undefined8 uStack_48;
  undefined2 *puStack_40;
  int iStack_38;
  longlong lStack_30;
  undefined2 *puStack_28;
  int iStack_20;
  ulonglong uStack_18;
  
  uStack_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = &PTR_FUN_149ead3f0;
  if ((((DAT_14c963ff1 == '\x01') && (param_1[2] != 0)) && (DAT_14c868880 == '\0')) &&
     (param_1[3] != 0)) {
    lStack_30 = param_1[3];
    FUN_1400021e4(&lStack_30,&puStack_28);
    puVar1 = puStack_28;
    if (iStack_20 == 0) {
      puVar1 = &DAT_149dfb77a;
    }
    if (param_1[2] == 0) {
      FUN_140056680(&puStack_40,&DAT_149e01fe8);
    }
    else {
      uStack_48 = *(undefined8 *)(param_1[2] + 0x18);
      FUN_1400021e4(&uStack_48,&puStack_40);
    }
    puVar2 = puStack_40;
    if (iStack_38 == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    puStack_58 = puVar1;
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectBase.cpp",0x99,
                  L"GetFName was not None. Class: %s, Name: %s",puVar2);
    if (puStack_40 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (puStack_28 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((uStack_18 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1410eac18 FUN_1410eac18 body=227 status=ok
// SIG undefined FUN_1410eac18(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1410eac18(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14b075620;
  *(undefined4 *)(param_1 + 0x16) = 0;
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  FUN_140c7ea88(param_1 + 0xd);
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_1408ff272(param_1 + 3);
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
    thunk_FUN_1400020a8(param_1,0xb8);
  }
  return param_1;
}



// FUNCTION 1410ead0a FUN_1410ead0a body=137 status=ok
// SIG undefined FUN_1410ead0a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1410ead0a(undefined8 *param_1,int param_2)

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
    thunk_FUN_1400020a8(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 1410ead94 FUN_1410ead94 body=279 status=ok
// SIG undefined FUN_1410ead94(void)

undefined8 FUN_1410ead94(longlong param_1,undefined8 param_2)

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
    if (iVar1 == 2) goto LAB_1410eaea5;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1410eaea5;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_1410eaea5:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1410eae52;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5,param_2);
      uVar6 = 1;
      goto LAB_1410eae52;
    }
  }
  uVar6 = 0;
LAB_1410eae52:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410eaeac FUN_1410eaeac body=520 status=ok
// SIG undefined FUN_1410eaeac(void)

void FUN_1410eaeac(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined2 *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  code **local_70;
  undefined1 *local_68;
  code *local_60;
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar3 = FUN_14041acbe();
  if (lVar3 != 0) {
    if (DAT_14cbadd90 == 0) {
      local_70 = &local_50;
      local_50 = FUN_141030f22;
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
    if (((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
          (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) &&
       (lVar3 = FUN_1410eb0b6(lVar3), lVar3 != 0)) {
      lVar4 = (**(code **)(*param_1 + 0x2b8))(param_1);
      if (lVar4 == 0) {
        lVar8 = 0;
      }
      else {
        uVar5 = FUN_1406d3bdc();
        cVar2 = FUN_1448093f4(lVar4,uVar5);
        lVar8 = 0;
        if (cVar2 != '\0') {
          lVar8 = lVar4;
        }
      }
      lVar4 = param_2[1];
      if ((longlong)(int)lVar4 != 0) {
        lVar1 = *param_2;
        lVar7 = 0;
        do {
          lVar6 = FUN_148cfce84(lVar3,*(undefined4 *)(lVar1 + lVar7));
          if ((lVar8 != 0) && (lVar6 != 0)) {
            if ((param_1[0x1b] == 0) || (cVar2 = FUN_144729dda(param_1 + 0x1a), cVar2 == '\0')) {
              uVar5 = 0;
            }
            else {
              uVar5 = (**(code **)(*(longlong *)param_1[0x1b] + 0x18))();
            }
            cVar2 = FUN_148d10a5c(lVar8,lVar6,param_1[0x19],uVar5);
            if (cVar2 != '\0') {
              FUN_1402798cc(param_1);
            }
          }
          lVar7 = lVar7 + 4;
        } while ((longlong)(int)lVar4 * 4 != lVar7);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1410eb0b6 FUN_1410eb0b6 body=126 status=ok
// SIG undefined FUN_1410eb0b6(void)

longlong FUN_1410eb0b6(longlong param_1)

{
  byte bVar1;
  longlong lVar2;
  
  if (*(longlong *)(param_1 + 0x3200) != 0) {
    return *(longlong *)(param_1 + 0x3200);
  }
  lVar2 = FUN_1447210f0();
  if (lVar2 == 0) {
LAB_1410eb119:
    lVar2 = 0;
  }
  else {
    lVar2 = FUN_1406f612e(lVar2);
    bVar1 = DAT_14c950c29;
    if (lVar2 == 0 || DAT_14c950c29 != 1) {
      *(longlong *)(param_1 + 0x3200) = lVar2;
      if (lVar2 == 0) goto LAB_1410eb119;
    }
    else {
      FUN_1456cec3c(lVar2);
      *(longlong *)(param_1 + 0x3200) = lVar2;
      bVar1 = DAT_14c950c29;
    }
    if ((bVar1 & 1) != 0) {
      FUN_1456cec3c(lVar2);
    }
  }
  return lVar2;
}



// FUNCTION 1410eb134 FUN_1410eb134 body=1946 status=ok
// SIG undefined FUN_1410eb134(void)

void FUN_1410eb134(longlong *param_1)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  ulonglong uVar4;
  code *pcVar5;
  undefined8 uVar6;
  longlong lVar7;
  byte bVar8;
  char cVar9;
  int iVar10;
  longlong lVar11;
  undefined8 *puVar12;
  longlong lVar13;
  undefined *puVar14;
  uint *puVar15;
  longlong *plVar16;
  longlong *plVar17;
  int iVar18;
  bool bVar19;
  uint uVar20;
  undefined1 auStack_f8 [32];
  undefined2 *local_d8;
  undefined8 *local_d0;
  int local_c8;
  undefined2 local_c0 [2];
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_b0;
  byte local_78;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  iVar10 = *(int *)((longlong)param_1 + 0xc4) + 1;
  *(int *)((longlong)param_1 + 0xc4) = iVar10;
  bVar8 = (char)iVar10 << 3 | *(byte *)(param_1 + 0x18);
  if (*(byte *)((longlong)param_1 + 0xc1) != bVar8) {
    *(byte *)((longlong)param_1 + 0xc1) = bVar8;
    uVar4 = param_1[0xd];
    if (uVar4 < 0xffffffff00000000) {
      plVar16 = DAT_14c9980d0;
      if (DAT_14c9980d8 == 0) {
        plVar16 = (longlong *)0x0;
      }
      (**(code **)(*plVar16 + 0x58))(plVar16,param_1,uVar4,1);
    }
    else {
      uVar20 = (uint)uVar4;
      if ((-1 < (int)uVar20) && ((int)uVar20 < DAT_14c998088)) {
        puVar14 = &DAT_14c998070;
        if (DAT_14c998080 != (undefined *)0x0) {
          puVar14 = DAT_14c998080;
        }
        if ((*(uint *)(puVar14 + ((uint)(uVar4 >> 3) & 0xffffffc)) >> (uVar20 & 0x1f) & 1) != 0) {
          lVar11 = DAT_14c998060 + (ulonglong)(uVar20 & 0x7fffffff) * 0x68;
          puVar15 = *(uint **)(lVar11 + 0x18);
          if (*(uint **)(lVar11 + 0x18) == (uint *)0x0) {
            puVar15 = (uint *)(lVar11 + 8);
          }
          *puVar15 = *puVar15 | 2;
          *(byte *)(lVar11 + 0x60) = *(byte *)(lVar11 + 0x60) | 1;
        }
      }
    }
  }
  (**(code **)(*param_1 + 0x360))(param_1);
  cVar9 = (**(code **)(*param_1 + 0x308))();
  if (cVar9 == '\0') {
    fVar1 = *(float *)((longlong)param_1 + 0x84);
    if (fVar1 <= 0.0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_f8);
    }
    lVar11 = (**(code **)(*param_1 + 0x180))(param_1);
    if (*(longlong *)(lVar11 + 0x1f0) == 0) {
      puVar12 = (undefined8 *)(lVar11 + 0x458);
    }
    else {
      puVar12 = (undefined8 *)(*(longlong *)(lVar11 + 0x1f0) + 0xf0);
    }
    uVar6 = *puVar12;
    lVar11 = param_1[6];
    fVar2 = *(float *)(lVar11 + 0x74);
    uVar20 = -(uint)(0.0001 < fVar2);
    local_d0 = (undefined8 *)0x0;
    local_c8 = 0;
    FUN_1446efa72(&local_d0,0,3,0x10);
    puVar12 = local_d0;
    local_c8 = 3;
    *local_d0 = &PTR_LAB_14a1c8830;
    LOCK();
    UNLOCK();
    lVar13 = DAT_14c758608 + 1;
    lVar7 = DAT_14c758608 + 1;
    if (lVar13 == 0) {
      LOCK();
      UNLOCK();
      lVar13 = DAT_14c758608 + 2;
      lVar7 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar7;
    local_d0[2] = lVar13;
    *local_d0 = &PTR_FUN_14b9df380;
    local_d0[3] = 0;
    iVar10 = 0;
    if (lVar11 != 0) {
      uVar3 = *(uint *)(lVar11 + 0xc);
      *(uint *)(local_d0 + 3) = uVar3;
      if ((int)uVar3 < DAT_14c9647dc) {
        lVar11 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
      }
      else {
        lVar11 = 0;
      }
      iVar10 = *(int *)(lVar11 + 0x10);
      if (*(int *)(lVar11 + 0x10) == 0) {
        LOCK();
        iVar10 = DAT_14c964868 + 1;
        UNLOCK();
        iVar18 = DAT_14c964868 + 1;
        bVar19 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar10;
        if (bVar19) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar18);
        }
        LOCK();
        iVar10 = *(int *)(lVar11 + 0x10);
        bVar19 = iVar10 == 0;
        if (bVar19) {
          *(int *)(lVar11 + 0x10) = iVar18;
          iVar10 = 0;
        }
        UNLOCK();
        if (bVar19) {
          iVar10 = iVar18;
        }
      }
    }
    *(int *)((longlong)puVar12 + 0x1c) = iVar10;
    puVar12[4] = param_1;
    local_b8 = 0;
    local_b0 = 0;
    FUN_14487d8d8(&local_b8,&local_d0);
    local_78 = 1;
    local_d8 = local_c0;
    local_c0[0] = 0;
    local_bc = 0xbf800000;
    FUN_1406f4044(uVar6,param_1 + 0x1e,&local_b8,
                  fVar1 * (float)(~uVar20 & 0x3f800000 | (uint)(1.0 / fVar2) & uVar20));
    (*(code *)(&PTR_LAB_14a1c87a0)[local_78])(&local_b8);
    if (local_c8 != 0) {
      if (local_d0 == (undefined8 *)0x0) goto LAB_1410eb4ce;
      (**(code **)*local_d0)(local_d0,0);
      FUN_1446efa72(&local_d0,0,0,0x10);
      local_c8 = 0;
    }
    if (local_d0 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
    goto LAB_1410eb4ce;
  }
  *(undefined1 *)(param_1 + 0x18) = 3;
  bVar8 = *(char *)((longlong)param_1 + 0xc4) << 3 | 3;
  if (*(byte *)((longlong)param_1 + 0xc1) != bVar8) {
    *(byte *)((longlong)param_1 + 0xc1) = bVar8;
    uVar4 = param_1[0xd];
    if (uVar4 < 0xffffffff00000000) {
      plVar16 = DAT_14c9980d0;
      if (DAT_14c9980d8 == 0) {
        plVar16 = (longlong *)0x0;
      }
      (**(code **)(*plVar16 + 0x58))(plVar16,param_1,uVar4,1);
    }
    else {
      uVar20 = (uint)uVar4;
      if ((-1 < (int)uVar20) && ((int)uVar20 < DAT_14c998088)) {
        puVar14 = &DAT_14c998070;
        if (DAT_14c998080 != (undefined *)0x0) {
          puVar14 = DAT_14c998080;
        }
        if ((*(uint *)(puVar14 + ((uint)(uVar4 >> 3) & 0xffffffc)) >> (uVar20 & 0x1f) & 1) != 0) {
          lVar11 = DAT_14c998060 + (ulonglong)(uVar20 & 0x7fffffff) * 0x68;
          puVar15 = *(uint **)(lVar11 + 0x18);
          if (*(uint **)(lVar11 + 0x18) == (uint *)0x0) {
            puVar15 = (uint *)(lVar11 + 8);
          }
          *puVar15 = *puVar15 | 2;
          *(byte *)(lVar11 + 0x60) = *(byte *)(lVar11 + 0x60) | 1;
        }
      }
    }
  }
  FUN_141074ab4(param_1);
  (**(code **)(*param_1 + 0x358))(param_1);
  plVar16 = *(longlong **)(param_1[6] + 0x1b0);
  if (plVar16 == (longlong *)0x0) goto LAB_1410eb2e9;
  pcVar5 = *(code **)(*plVar16 + 0x5e8);
  if (pcVar5 == FUN_140972dde) {
    lVar11 = plVar16[0x76];
    if (lVar11 == 0) {
      pcVar5 = *(code **)(*plVar16 + 0x5f8);
      if (pcVar5 == FUN_144784df4) {
        if (*(code **)(plVar16[0x784] + 0x18) == (code *)&LAB_144904684) {
          if (((((*(int *)((longlong)plVar16 + 0x75b4) == 0) ||
                (uVar20 = *(uint *)(plVar16 + 0xeb6), (int)uVar20 < 0)) ||
               (DAT_14c9647dc <= (int)uVar20)) ||
              ((plVar17 = (longlong *)
                          ((ulonglong)((uVar20 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar20 >> 0x10) * 8)),
               plVar17 == (longlong *)0x0 ||
               ((int)plVar17[2] != *(int *)((longlong)plVar16 + 0x75b4))))) ||
             ((*(uint *)(plVar17 + 1) & 0x10200000) != 0)) goto LAB_1410eb2e9;
          if ((*(uint *)(plVar17 + 1) & 0x10200000) == 0) {
            lVar11 = *plVar17;
          }
          else {
            lVar11 = 0;
          }
          lVar11 = lVar11 + 0x110;
        }
        else {
          lVar11 = (**(code **)(plVar16[0x784] + 0x18))(plVar16 + 0x784);
        }
        if (lVar11 == 0) goto LAB_1410eb2e9;
        lVar11 = *(longlong *)(lVar11 + 0x20);
      }
      else {
        lVar11 = (*pcVar5)();
      }
      if (lVar11 == 0) goto LAB_1410eb2e9;
      lVar11 = *(longlong *)(lVar11 + 0x3b0);
      goto LAB_1410eb56e;
    }
  }
  else {
    lVar11 = (*pcVar5)();
LAB_1410eb56e:
    if (lVar11 == 0) goto LAB_1410eb2e9;
  }
  if ((((*(byte *)(lVar11 + 0x39a) & 8) == 0) && ((char)param_1[0x1c] == '\0')) &&
     (((*(byte *)(param_1[0xe] + 0x1c8) & 1) == 0 || (0.0 < *(float *)(param_1 + 0x15))))) {
    if (0.0 < *(float *)(param_1 + 0x15)) {
      lVar11 = (**(code **)(*param_1 + 0x180))(param_1);
      if (*(longlong *)(lVar11 + 0x1f0) == 0) {
        puVar12 = (undefined8 *)(lVar11 + 0x458);
      }
      else {
        puVar12 = (undefined8 *)(*(longlong *)(lVar11 + 0x1f0) + 0xf0);
      }
      lVar11 = param_1[6];
      fVar1 = *(float *)(lVar11 + 0x74);
      uVar20 = -(uint)(0.0001 < fVar1);
      fVar2 = *(float *)(param_1 + 0x15);
      uVar6 = *puVar12;
      local_d0 = (undefined8 *)0x0;
      local_c8 = 0;
      FUN_1446efa72(&local_d0,0,3,0x10);
      puVar12 = local_d0;
      local_c8 = 3;
      *local_d0 = &PTR_LAB_14a1c8830;
      LOCK();
      UNLOCK();
      lVar13 = DAT_14c758608 + 1;
      lVar7 = DAT_14c758608 + 1;
      if (lVar13 == 0) {
        LOCK();
        UNLOCK();
        lVar13 = DAT_14c758608 + 2;
        lVar7 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar7;
      local_d0[2] = lVar13;
      *local_d0 = &PTR_FUN_14b9df310;
      local_d0[3] = 0;
      FUN_14485c47a(local_d0 + 3,lVar11);
      puVar12[4] = param_1;
      local_b8 = 0;
      local_b0 = 0;
      FUN_14487d8d8(&local_b8,&local_d0);
      local_78 = 1;
      local_d8 = local_c0;
      local_c0[0] = 0;
      local_bc = 0xbf800000;
      FUN_1406f4044(uVar6,param_1 + 0x1e,&local_b8,
                    (float)(~uVar20 & 0x3f800000 | (uint)(1.0 / fVar1) & uVar20) * fVar2);
      (*(code *)(&PTR_LAB_14a1c87a0)[local_78])(&local_b8);
      FUN_1449db362(&local_d0);
    }
LAB_1410eb4ce:
    if ((local_60 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
LAB_1410eb2e9:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_f8);
}



// FUNCTION 1410eb926 FUN_1410eb926 body=273 status=ok
// SIG undefined FUN_1410eb926(void)

void FUN_1410eb926(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar3 = *(longlong *)(param_1 + 0x30);
  local_30 = DAT_14cbe7748;
  local_38 = lVar3;
  FUN_1447cd2ec(lVar3 + 0xaf0);
  local_48 = 0;
  FUN_140980406(lVar3,DAT_14cbe7730,*(undefined1 *)(param_1 + 0xe6),*(undefined4 *)(param_1 + 0xec))
  ;
  (**(code **)(*(longlong *)(lVar3 + 0x520) + 0x10))(lVar3 + 0x520,&local_38);
  plVar4 = local_30;
  lVar3 = local_38;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_30 + 1) = (int)local_30[1] + 1;
    UNLOCK();
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_30 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_30)(local_30);
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
  if (lVar3 != 0) {
    FUN_1410eba38(lVar3,3,*(undefined1 *)(param_1 + 0xe6));
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
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410eba38 FUN_1410eba38 body=127 status=ok
// SIG undefined FUN_1410eba38(void)

void FUN_1410eba38(longlong param_1,byte param_2,byte param_3)

{
  longlong *plVar1;
  
  if (param_2 != 4) {
    if (((int)(uint)param_3 < *(int *)(param_1 + 0x8d0 + (ulonglong)param_2 * 0x10)) &&
       (plVar1 = (longlong *)(param_1 + (ulonglong)param_2 * 0x10 + 0x8c8),
       0 < *(int *)(*plVar1 + 8 + (ulonglong)param_3 * 0x10))) {
      FUN_140a9d980(param_1);
      *(uint *)(param_1 + 0x908) =
           *(uint *)(param_1 + 0x908) | 1 << (param_2 + param_3 * '\x04' & 0x1f);
      FUN_140a9d838(param_1,plVar1,(uint)param_3,0);
      return;
    }
  }
  return;
}



// FUNCTION 1410ebab8 FUN_1410ebab8 body=714 status=ok
// SIG undefined FUN_1410ebab8(void)

void FUN_1410ebab8(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined1 local_50;
  longlong local_48;
  longlong *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *(undefined4 *)(param_1 + 0xe8) = 0x3f800000;
  *(undefined1 *)(param_1 + 0xe2) = 0;
  lVar3 = *(longlong *)(param_1 + 0x30);
  local_40 = DAT_14cbe7750;
  local_48 = lVar3;
  FUN_1447cd2ec(lVar3 + 0xaf0);
  if ((*(byte *)(*(longlong *)(param_1 + 0x70) + 0x220) & 1) == 0) {
    lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x70) + 0x224);
    if (lVar4 != 0) {
      local_40 = (longlong *)((ulonglong)local_40 & 0xffffff0000000000);
      local_48 = DAT_14cbe7708;
      local_38 = 1 << (*(byte *)(param_1 + 0xe6) & 0x1f);
      (**(code **)(*(longlong *)(lVar3 + 0x8c0) + 0x20))(lVar3 + 0x8c0,lVar4,0x3f800000);
    }
  }
  else {
    FUN_140994e4c(lVar3,DAT_14cbe7708,*(undefined1 *)(param_1 + 0xe6),0);
    (**(code **)(*(longlong *)(lVar3 + 0x520) + 0x10))(lVar3 + 0x520,&local_48);
    plVar5 = local_40;
    lVar4 = local_48;
    if (local_40 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_40 + 1) = (int)local_40[1] + 1;
      UNLOCK();
      if (local_40 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_40 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_40)(local_40);
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
    if (lVar4 != 0) {
      FUN_1408f4152(lVar4,0,*(undefined1 *)(param_1 + 0xe6));
    }
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
    lVar4 = *(longlong *)(param_1 + 0x70);
    if ((*(longlong *)(lVar4 + 0x260) != 0) && (*(int *)(lVar4 + 0x268) - 1U < 0xfffffffe)) {
      FUN_14115ae20(param_1,lVar4 + 0x260);
    }
  }
  local_58 = 0;
  FUN_140980406(lVar3,DAT_14cbe7710,*(undefined1 *)(param_1 + 0xe6),*(undefined4 *)(param_1 + 0xec))
  ;
  (**(code **)(*(longlong *)(lVar3 + 0x520) + 0x10))(lVar3 + 0x520,&local_48);
  plVar5 = local_40;
  lVar4 = local_48;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_40 + 1) = (int)local_40[1] + 1;
    UNLOCK();
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_40 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_40)(local_40);
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
  if (lVar4 != 0) {
    FUN_1410eba38(lVar4,1,*(undefined1 *)(param_1 + 0xe6));
  }
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
  local_50 = 0;
  local_58 = 0;
  cVar6 = FUN_140dd024a(lVar3,DAT_14cbe76f0,0x3f800000,0);
  if (cVar6 != '\0') {
    *(char *)(param_1 + 200) = cVar6;
  }
  *(undefined1 *)(param_1 + 0xe2) = 0;
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410ebd84 FUN_1410ebd84 body=433 status=ok
// SIG undefined FUN_1410ebd84(void)

void FUN_1410ebd84(longlong *param_1,char param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined1 auStack_c8 [40];
  undefined1 local_a0 [8];
  undefined8 *local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined4 local_80;
  byte local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  (**(code **)(*param_1 + 0x2f8))(param_1,0);
  if ((param_2 != '\0') && (1 < *(byte *)(param_1 + 0x18))) {
    lVar3 = (**(code **)(*param_1 + 0x180))(param_1);
    if (1 < *(byte *)(lVar3 + 0x151)) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_c8);
    }
    lVar3 = (**(code **)(*param_1 + 0x180))(param_1);
    if (*(longlong *)(lVar3 + 0x1f0) == 0) {
      puVar4 = (undefined8 *)(lVar3 + 0x458);
    }
    else {
      puVar4 = (undefined8 *)(*(longlong *)(lVar3 + 0x1f0) + 0xf0);
    }
    uVar1 = *puVar4;
    lVar3 = param_1[6];
    local_98 = (undefined8 *)0x0;
    local_90 = 0;
    FUN_1446efa72(&local_98,0,3,0x10);
    puVar4 = local_98;
    local_90 = 3;
    *local_98 = &PTR_LAB_14a1c8830;
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
    local_98[2] = lVar5;
    *local_98 = &PTR_FUN_14b9df460;
    local_98[3] = 0;
    FUN_14485c47a(local_98 + 3,lVar3);
    puVar4[4] = param_1;
    local_88 = 0;
    local_80 = 0;
    FUN_14487d8d8(&local_88,&local_98);
    local_48 = 1;
    FUN_14016fdb0(uVar1,local_a0,&local_88);
    (*(code *)(&PTR_LAB_14a1c87a0)[local_48])(&local_88);
    FUN_1449db362(&local_98);
    *(undefined1 *)((longlong)param_1 + 0xe2) = 0;
  }
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410ebf52 FUN_1410ebf52 body=456 status=ok
// SIG undefined FUN_1410ebf52(void)

void FUN_1410ebf52(longlong *param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  uint uVar6;
  longlong lVar7;
  
  *(undefined1 *)((longlong)param_1 + 0xe1) = 1;
  if (param_1[0x20] != 0) {
    plVar4 = param_1 + 0x20;
    lVar3 = (**(code **)(*param_1 + 0x180))(param_1);
    if (*(longlong *)(lVar3 + 0x1f0) == 0) {
      puVar5 = (undefined8 *)(lVar3 + 0x458);
    }
    else {
      puVar5 = (undefined8 *)(*(longlong *)(lVar3 + 0x1f0) + 0xf0);
    }
    uVar2 = *puVar5;
    lVar3 = FUN_144a61814(uVar2,plVar4);
    if (lVar3 != 0) {
      FUN_1405a424c(uVar2,*plVar4);
    }
    *plVar4 = 0;
  }
  if (param_1[0x1f] != 0) {
    plVar4 = param_1 + 0x1f;
    lVar3 = (**(code **)(*param_1 + 0x180))(param_1);
    if (*(longlong *)(lVar3 + 0x1f0) == 0) {
      puVar5 = (undefined8 *)(lVar3 + 0x458);
    }
    else {
      puVar5 = (undefined8 *)(*(longlong *)(lVar3 + 0x1f0) + 0xf0);
    }
    uVar2 = *puVar5;
    lVar3 = FUN_144a61814(uVar2,plVar4);
    if (lVar3 != 0) {
      FUN_1405a424c(uVar2,*plVar4);
    }
    *plVar4 = 0;
  }
  if (param_1[0x1e] != 0) {
    lVar3 = (**(code **)(*param_1 + 0x180))(param_1);
    if (*(longlong *)(lVar3 + 0x1f0) == 0) {
      plVar4 = (longlong *)(lVar3 + 0x458);
    }
    else {
      plVar4 = (longlong *)(*(longlong *)(lVar3 + 0x1f0) + 0xf0);
    }
    lVar3 = param_1[0x1e];
    if (lVar3 != 0) {
      lVar1 = *plVar4;
      uVar6 = (uint)lVar3;
      if ((int)(uVar6 & 0xffffff) < *(int *)(lVar1 + 0x10)) {
        lVar7 = lVar1 + 0x18;
        if (*(longlong *)(lVar1 + 0x28) != 0) {
          lVar7 = *(longlong *)(lVar1 + 0x28);
        }
        if ((*(uint *)(lVar7 + (ulonglong)((uVar6 & 0xffffff) >> 5) * 4) >> (uVar6 & 0x1f) & 1) != 0
           ) {
          lVar1 = *(longlong *)(lVar1 + 8);
          lVar7 = (ulonglong)(uVar6 & 0xffffff) * 0x70;
          if (((lVar1 + lVar7 != 0) && (*(longlong *)(lVar1 + 0x60 + lVar7) == lVar3)) &&
             (*(char *)(lVar1 + 1 + lVar7) != '\x04')) {
            FUN_1405a424c();
          }
        }
      }
    }
    param_1[0x1e] = 0;
  }
  if (((char)param_2 != '\0') && (1 < *(byte *)(param_1 + 0x18))) {
    (**(code **)(*param_1 + 0x370))(param_1);
  }
  FUN_1410ec11a(param_1,param_2);
  return;
}



// FUNCTION 1410ec11a FUN_1410ec11a body=69 status=ok
// SIG undefined FUN_1410ec11a(void)

void FUN_1410ec11a(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  
  FUN_140898514(param_1 + 0x38);
  lVar1 = *(longlong *)(param_1 + 0x30);
  if ((0 < *(int *)(lVar1 + 0xae8)) && (*(char *)(lVar1 + 0x178) == '\x03')) {
    FUN_148a0cfb8(lVar1 + 0xae0,param_2);
    return;
  }
  return;
}



// FUNCTION 1410ec160 FUN_1410ec160 body=221 status=ok
// SIG undefined FUN_1410ec160(void)

longlong FUN_1410ec160(void)

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
  if (DAT_14cacf190 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147990429;
    local_40 = FUN_1463b09cb;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x48;
    FUN_14081cfa3(L"/Script/Engine",L"CameraModifier",&DAT_14cacf190,FUN_1463b09a4);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cacf190;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410ec244 FUN_1410ec244 body=221 status=ok
// SIG undefined FUN_1410ec244(void)

longlong FUN_1410ec244(void)

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
  if (DAT_14cb99db0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_148af36db;
    local_40 = &LAB_146590f19;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x138;
    FUN_14081cfa3(L"/Script/GameSettings",L"GameSetting",&DAT_14cb99db0,FUN_146590ef2);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb99db0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410ec322 FUN_1410ec322 body=1379 status=ok
// SIG undefined FUN_1410ec322(void)

void FUN_1410ec322(longlong param_1,undefined8 param_2,undefined4 param_3,undefined1 param_4,
                  undefined8 param_5)

{
  int *piVar1;
  ulonglong uVar2;
  undefined1 uVar3;
  int iVar4;
  longlong lVar5;
  byte *pbVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint *puVar11;
  undefined8 *puVar12;
  int iVar13;
  ulonglong uVar14;
  longlong lVar15;
  ulonglong uVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  longlong *plVar20;
  int iVar21;
  uint uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined1 auStack_f8 [32];
  undefined8 **local_d8;
  longlong local_c8;
  longlong *local_c0;
  longlong local_b8;
  longlong local_b0;
  longlong *local_a8;
  undefined8 *local_a0;
  longlong local_98;
  undefined8 uStack_90;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  *(undefined1 *)(param_1 + 0x38) = 1;
  *(undefined1 *)(param_1 + 0x31) = 0;
  *(undefined4 *)(param_1 + 0x28) = param_3;
  *(undefined1 *)(param_1 + 0x30) = param_4;
  *(undefined4 *)(param_1 + 0x2c) = 1;
  *(undefined8 *)(param_1 + 0x20) = param_2;
  FUN_144a79006(param_1,param_5);
  plVar20 = (longlong *)(param_1 + 0x10);
  if (0 < *(int *)(param_1 + 0x18)) {
    lVar19 = 0;
    local_c8 = param_1;
    local_c0 = plVar20;
    do {
      lVar5 = *(longlong *)(*plVar20 + lVar19 * 8);
      local_98 = 0;
      uStack_90 = 0;
      lVar15 = *(longlong *)(lVar5 + 0x58);
      local_b0 = lVar19;
      if (lVar15 != 0) {
        fVar25 = 0.0;
        lVar19 = 0;
        do {
          uVar14 = uStack_90;
          lVar18 = *(longlong *)(lVar15 + 0x20);
          fVar25 = fVar25 + *(float *)(lVar18 + 0x20);
          lVar17 = lVar15;
          if ((*(byte *)(lVar15 + 10) & 1) != 0) {
            *(undefined1 *)(lVar18 + 1) = 0;
            *(undefined8 *)(*(longlong *)(lVar15 + 0x20) + 0x10) = 0;
            fVar23 = *(float *)(param_1 + 0x28);
            fVar24 = fVar25;
            if (fVar25 < fVar23) {
              lVar18 = (longlong)(int)uStack_90;
              uVar22 = (int)uStack_90 + 1;
              uStack_90 = CONCAT44(uStack_90._4_4_,uVar22);
              if (uStack_90._4_4_ < uVar22) {
                FUN_144a79096(&local_98,uVar14 & 0xffffffff);
              }
              *(longlong *)(local_98 + lVar18 * 8) = lVar15;
              fVar23 = *(float *)(local_c8 + 0x28) - fVar25;
              fVar24 = *(float *)(lVar15 + 0xc);
            }
            FUN_1410ec8ba(lVar5,lVar15,fVar24 - fVar23);
            puVar12 = (undefined8 *)(lVar5 + 0x58);
            if (lVar19 != 0) {
              puVar12 = (undefined8 *)(*(longlong *)(lVar19 + 0x20) + 0x18);
            }
            *puVar12 = *(undefined8 *)(*(longlong *)(lVar15 + 0x20) + 0x18);
            lVar18 = *(longlong *)(lVar15 + 0x20);
            lVar17 = lVar19;
            param_1 = local_c8;
            plVar20 = local_c0;
            if (*(longlong *)(lVar18 + 0x18) != 0) {
              lVar19 = *(longlong *)(*(longlong *)(lVar18 + 0x18) + 0x20);
              *(float *)(lVar19 + 0x20) = *(float *)(lVar18 + 0x20) + *(float *)(lVar19 + 0x20);
              lVar18 = *(longlong *)(lVar15 + 0x20);
              fVar25 = fVar25 - *(float *)(lVar18 + 0x20);
            }
          }
          lVar15 = *(longlong *)(lVar18 + 0x18);
          lVar19 = lVar17;
        } while (lVar15 != 0);
      }
      iVar4 = *(int *)(lVar5 + 0x30);
      if (iVar4 == 0) {
        uVar16 = 1;
        uVar14 = 0;
        iVar13 = 0;
        iVar21 = 0;
      }
      else {
        puVar11 = *(uint **)(lVar5 + 0x28);
        if (*(uint **)(lVar5 + 0x28) == (uint *)0x0) {
          puVar11 = (uint *)(lVar5 + 0x18);
        }
        uVar22 = *puVar11;
        if (uVar22 == 0) {
          iVar13 = iVar4 + 0x1e;
          if (-1 < iVar4 + -1) {
            iVar13 = iVar4 + -1;
          }
          uVar14 = 0;
          uVar16 = (ulonglong)(uint)(iVar13 >> 5);
          if (iVar13 >> 5 < 1) {
            uVar16 = uVar14;
          }
          iVar21 = 0;
          do {
            if (uVar16 == uVar14) goto LAB_1410ec526;
            iVar21 = iVar21 + 0x20;
            uVar22 = puVar11[uVar14 + 1];
            uVar14 = uVar14 + 1;
          } while (uVar22 == 0);
        }
        else {
          uVar14 = 0;
          iVar21 = 0;
        }
        uVar16 = (ulonglong)(-uVar22 & uVar22);
        uVar2 = uVar16 * 2 + 1;
        lVar19 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar19 == 0; lVar19 = lVar19 + -1) {
          }
        }
        iVar13 = (iVar21 - ((uint)lVar19 ^ 0x3f)) + 0x3e;
        if (iVar4 <= iVar13) {
          iVar13 = iVar4;
        }
      }
      if (iVar13 < iVar4) {
        local_a8 = (longlong *)(lVar5 + 8);
        uVar22 = 0xffffffff;
        do {
          lVar19 = *(longlong *)(*local_a8 + (longlong)iVar13 * 0x10);
          *(undefined1 *)(*(longlong *)(lVar19 + 0x20) + 1) = 0;
          *(undefined8 *)(*(longlong *)(lVar19 + 0x20) + 0x10) = 0;
          if (((*(byte *)(lVar19 + 10) & 1) != 0) && (*(char *)(lVar19 + 0xb) == '\x01')) {
            lVar15 = (longlong)(int)uStack_90;
            uVar8 = (int)uStack_90 + 1;
            uStack_90 = CONCAT44(uStack_90._4_4_,uVar8);
            if (uStack_90._4_4_ < uVar8) {
              local_b8 = lVar15;
              FUN_144a79096(&local_98,lVar15);
              lVar15 = local_b8;
              param_1 = local_c8;
              plVar20 = local_c0;
            }
            *(longlong *)(local_98 + lVar15 * 8) = lVar19;
            if (0.0 < *(float *)(lVar19 + 0xc)) {
              FUN_1402eb78e(local_a8,iVar13);
              FUN_1410ec8ba(lVar5,lVar19,*(undefined4 *)(lVar19 + 0xc));
              param_1 = local_c8;
              plVar20 = local_c0;
            }
          }
          uVar22 = uVar22 & ~(uint)uVar16;
          puVar11 = *(uint **)(lVar5 + 0x28);
          if (*(uint **)(lVar5 + 0x28) == (uint *)0x0) {
            puVar11 = (uint *)(lVar5 + 0x18);
          }
          iVar4 = *(int *)(lVar5 + 0x30);
          iVar13 = (int)uVar14;
          lVar19 = (longlong)iVar13;
          uVar8 = puVar11[lVar19] & uVar22;
          if (uVar8 == 0) {
            iVar9 = iVar4 + 0x1e;
            if (-1 < iVar4 + -1) {
              iVar9 = iVar4 + -1;
            }
            iVar9 = iVar9 >> 5;
            iVar10 = iVar9;
            if (iVar9 < iVar13) {
              iVar10 = iVar13;
            }
            if (iVar9 <= iVar13) break;
            lVar15 = 0;
            while( true ) {
              iVar21 = iVar21 + 0x20;
              uVar8 = puVar11[lVar19 + lVar15 + 1];
              if (uVar8 != 0) break;
              lVar15 = lVar15 + 1;
              if (iVar10 - lVar19 == lVar15) goto LAB_1410ec526;
            }
            uVar14 = (ulonglong)(iVar13 + (int)lVar15 + 1);
            uVar22 = 0xffffffff;
          }
          uVar16 = (ulonglong)(-uVar8 & uVar8);
          uVar2 = uVar16 * 2 + 1;
          lVar19 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar19 == 0; lVar19 = lVar19 + -1) {
            }
          }
          iVar13 = (iVar21 - ((uint)lVar19 ^ 0x3f)) + 0x3e;
        } while (iVar13 < iVar4);
      }
LAB_1410ec526:
      lVar5 = local_98;
      lVar19 = local_b0;
      lVar15 = (longlong)(int)uStack_90;
      if (lVar15 != 0) {
        lVar18 = 0;
        do {
          uVar7 = (undefined4)DAT_14c872be0;
          plVar20 = *(longlong **)(lVar5 + lVar18);
          *(undefined4 *)(plVar20[4] + 4) = (undefined4)DAT_14c872be0;
          *(undefined4 *)(plVar20[4] + 8) = uVar7;
          local_a0 = (undefined8 *)0x0;
          uVar3 = *(undefined1 *)(param_1 + 0x30);
          uVar22 = *(uint *)(param_1 + 0x28);
          pbVar6 = (byte *)plVar20[4];
          if ((*pbVar6 & 2) == 0) {
            pbVar6[0x24] = 0;
            pbVar6[0x25] = 0;
            pbVar6[0x26] = 0x80;
            pbVar6[0x27] = 0xbf;
          }
          else {
            fVar23 = (float)*(double *)
                             (*(longlong *)(param_1 + 0x20) + 0x6d0 +
                             (ulonglong)(*(byte *)((longlong)plVar20 + 10) & 1) * 8);
            fVar25 = *(float *)(pbVar6 + 0x24);
            *(float *)(pbVar6 + 0x24) = fVar23;
            uVar8 = -(uint)(fVar25 < 0.0);
            uVar22 = uVar8 & uVar22 | ~uVar8 & (uint)(fVar23 - fVar25);
          }
          local_d8 = &local_a0;
          (**(code **)(*plVar20 + 8))(plVar20,uVar22,uVar3,1);
          if (local_a0 != (undefined8 *)0x0) {
            LOCK();
            piVar1 = (int *)(local_a0 + 1);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)*local_a0)(local_a0,1);
            }
          }
          lVar18 = lVar18 + 8;
          param_1 = local_c8;
          plVar20 = local_c0;
        } while (lVar15 * 8 != lVar18);
      }
      if (local_98 != 0) {
        FUN_1400020a8(local_98);
        param_1 = local_c8;
        plVar20 = local_c0;
      }
      lVar19 = lVar19 + 1;
    } while (lVar19 < *(int *)(param_1 + 0x18));
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined1 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (*(int *)(param_1 + 0x1c) < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_80 ^ (ulonglong)auStack_f8);
  }
  if ((local_80 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1410ec8ba FUN_1410ec8ba body=103 status=ok
// SIG undefined FUN_1410ec8ba(void)

void FUN_1410ec8ba(longlong param_1,longlong param_2,undefined4 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  **(byte **)(param_2 + 0x20) = **(byte **)(param_2 + 0x20) | 2;
  iVar1 = *(int *)(param_1 + 0xb8);
  *(uint *)(param_1 + 0xb8) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0xbc) < iVar1 + 1U) {
    FUN_1410ec922((longlong *)(param_1 + 0xb0),iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 0xb0);
  lVar3 = (longlong)iVar1 * 0x10;
  *(longlong *)(lVar2 + lVar3) = param_2;
  *(undefined4 *)(lVar2 + 8 + lVar3) = param_3;
  *(undefined1 *)(lVar2 + 0xc + lVar3) = 0;
  return;
}



// FUNCTION 1410ec922 FUN_1410ec922 body=269 status=ok
// SIG undefined FUN_1410ec922(void)

void FUN_1410ec922(longlong param_1,int param_2)

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



// FUNCTION 1410eca30 FUN_1410eca30 body=388 status=ok
// SIG undefined FUN_1410eca30(void)

void FUN_1410eca30(longlong param_1,char param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [40];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140670e42();
  lVar5 = *(longlong *)(param_1 + 0xd8);
  if (lVar5 == 0) goto LAB_1410ecb75;
  if (param_2 == '\0') {
    if ((*(char *)(lVar5 + 0x290) != '\x05') &&
       ((*(byte *)(*(longlong *)(param_1 + 0xd0) + 0xac) & 4) == 0)) goto LAB_1410ecb65;
    lVar4 = (**(code **)(**(longlong **)(param_1 + 0x98) + 0x50))();
    lVar5 = *(longlong *)(param_1 + 0xd8);
    plVar2 = *(longlong **)(param_1 + 0xd0);
    if ((char)plVar2[8] == '\x01') {
      local_40 = plVar2[7];
    }
    else {
      (**(code **)(*plVar2 + 0x2e8))(plVar2,&local_40);
    }
    if (lVar5 != 0) {
      FUN_140bc32b6(lVar4,&local_40);
      lVar3 = local_40;
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(lVar5);
      }
      iVar1 = *(int *)(lVar4 + 0x30);
      *(uint *)(lVar4 + 0x30) = iVar1 + 1U;
      if (*(uint *)(lVar4 + 0x34) < iVar1 + 1U) {
        FUN_1410ecbb6((longlong *)(lVar4 + 0x28),iVar1);
      }
      lVar4 = *(longlong *)(lVar4 + 0x28);
      *(longlong *)(lVar4 + (longlong)iVar1 * 0x10) = lVar3;
      *(longlong *)(lVar4 + 8 + (longlong)iVar1 * 0x10) = lVar5;
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(lVar5);
      }
    }
  }
  else {
    if (((param_2 == '\x01') &&
        (*(longlong *)(lVar5 + 0x298) == *(longlong *)(*(longlong *)(param_1 + 0xd0) + 0x98))) &&
       (*(char *)(lVar5 + 0x290) == '\x01')) {
      FUN_140c7df0a();
      lVar5 = *(longlong *)(param_1 + 0xd8);
    }
LAB_1410ecb65:
    FUN_140b4f29a(lVar5);
  }
  *(undefined8 *)(param_1 + 0xd8) = 0;
LAB_1410ecb75:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


