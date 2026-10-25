// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 140f05a26 FUN_140f05a26 body=938 status=ok
// SIG undefined FUN_140f05a26(void)

void FUN_140f05a26(longlong param_1,longlong param_2)

{
  int *piVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  code *pcVar7;
  char cVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined8 uVar11;
  undefined ***pppuVar12;
  int iVar13;
  int iVar14;
  longlong *plVar15;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  longlong local_a0;
  undefined8 local_90;
  code *local_88 [2];
  undefined ***local_78;
  undefined **local_68;
  longlong local_60;
  longlong *local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  plVar15 = *(longlong **)(param_2 + 8);
  if (plVar15 != (longlong *)0x0) {
    do {
      plVar3 = (longlong *)*plVar15;
      uVar2 = *(uint *)(plVar3 + 3);
      if (*(int *)(param_1 + 0x38) != *(int *)(param_1 + 100)) {
        lVar9 = *(longlong *)(param_1 + 0x70);
        if (*(longlong *)(param_1 + 0x70) == 0) {
          lVar9 = param_1 + 0x68;
        }
        iVar13 = *(int *)(lVar9 + (ulonglong)(*(int *)(param_1 + 0x78) - 1U & uVar2) * 4);
        if (iVar13 != -1) {
          do {
            lVar9 = *(longlong *)(param_1 + 0x30) + (longlong)iVar13 * 0xc0;
            if (*(uint *)(*(longlong *)(param_1 + 0x30) + (longlong)iVar13 * 0xc0) == uVar2)
            goto LAB_140f05ac3;
            iVar13 = *(int *)(lVar9 + 0xb8);
          } while (iVar13 != -1);
        }
      }
      lVar9 = 0;
LAB_140f05ac3:
      if ((((((*(byte *)(lVar9 + 0xb0) & 1) == 0) &&
            (*(int *)(lVar9 + 0x18) == *(int *)(param_1 + 0x80))) &&
           (*(int *)(lVar9 + 0x1c) == *(int *)(param_1 + 0x84))) &&
          ((*(int *)(lVar9 + 0x20) == *(int *)(param_1 + 0x88) &&
           (*(int *)(lVar9 + 0x24) == *(int *)(param_1 + 0x8c))))) &&
         (*(int *)(param_1 + 0x38) != *(int *)(param_1 + 100))) {
        lVar9 = *(longlong *)(param_1 + 0x70);
        if (*(longlong *)(param_1 + 0x70) == 0) {
          lVar9 = param_1 + 0x68;
        }
        iVar13 = *(int *)(lVar9 + (ulonglong)(*(int *)(param_1 + 0x78) - 1U & uVar2) * 4);
        if (iVar13 != -1) {
          do {
            lVar9 = *(longlong *)(param_1 + 0x30) + (longlong)iVar13 * 0xc0;
            if (*(uint *)(*(longlong *)(param_1 + 0x30) + (longlong)iVar13 * 0xc0) == uVar2) {
              if (((lVar9 + 8U & 0xfffffffffffffff7) != 0) && (*(longlong *)(param_1 + 0xa0) != 0))
              {
                iVar13 = (int)plVar3[1];
                iVar14 = (int)*(ulonglong *)(lVar9 + 0x10);
                if (iVar13 < iVar14) {
                  *(int *)(plVar3 + 1) = iVar14;
                  if ((uint)(*(int *)((longlong)plVar3 + 0xc) - iVar13) < (uint)(iVar14 - iVar13)) {
                    FUN_1447403be(plVar3);
                  }
                  memset((void *)((longlong)iVar13 + *plVar3),0,(longlong)(iVar14 - iVar13));
                }
                else {
                  if (iVar14 < 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_1456afac4(*(ulonglong *)(lVar9 + 0x10) & 0xffffffff);
                  }
                  if (iVar14 < iVar13) {
                    *(int *)(plVar3 + 1) = iVar14;
                    FUN_140b3f66e(plVar3);
                  }
                }
                lVar4 = *(longlong *)(param_1 + 0xa0);
                lVar5 = *(longlong *)(param_1 + 0xa8);
                if (lVar5 != 0) {
                  LOCK();
                  *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
                  UNLOCK();
                }
                plVar6 = (longlong *)plVar3[5];
                plVar3[4] = lVar4;
                plVar3[5] = lVar5;
                if (plVar6 != (longlong *)0x0) {
                  LOCK();
                  plVar10 = plVar6 + 1;
                  *(int *)plVar10 = (int)*plVar10 + -1;
                  UNLOCK();
                  if ((int)*plVar10 == 0) {
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
                local_a0 = *plVar3;
                local_a8 = 0;
                lVar9 = (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x10))
                                  (*(longlong **)(param_1 + 0xa0),*(undefined8 *)(lVar9 + 8),
                                   *(undefined8 *)(lVar9 + 0x10),3);
                plVar10 = (longlong *)FUN_14001cc68(0x18,0x10);
                plVar10[1] = (longlong)&DAT_100000001;
                *plVar10 = (longlong)&DAT_14a37d300;
                plVar10[2] = lVar9;
                plVar3[6] = lVar9;
                plVar6 = (longlong *)plVar3[7];
                if (plVar10 == plVar6) {
                  if (plVar10 != (longlong *)0x0) {
                    LOCK();
                    plVar6 = plVar10 + 1;
                    *(int *)plVar6 = (int)*plVar6 + -1;
                    UNLOCK();
                    if ((int)*plVar6 == 0) {
                      (**(code **)*plVar10)(plVar10);
                      LOCK();
                      piVar1 = (int *)((longlong)plVar10 + 0xc);
                      *piVar1 = *piVar1 + -1;
                      iVar13 = *piVar1;
                      UNLOCK();
                      plVar6 = plVar10;
                      goto joined_r0x000140f05ccc;
                    }
                  }
                }
                else {
                  plVar3[7] = (longlong)plVar10;
                  if (plVar6 != (longlong *)0x0) {
                    LOCK();
                    plVar10 = plVar6 + 1;
                    *(int *)plVar10 = (int)*plVar10 + -1;
                    UNLOCK();
                    if ((int)*plVar10 == 0) {
                      (**(code **)*plVar6)(plVar6);
                      LOCK();
                      piVar1 = (int *)((longlong)plVar6 + 0xc);
                      *piVar1 = *piVar1 + -1;
                      iVar13 = *piVar1;
                      UNLOCK();
joined_r0x000140f05ccc:
                      if (iVar13 == 0) {
                        (**(code **)(*plVar6 + 0x10))(plVar6);
                      }
                    }
                  }
                }
                *(undefined1 *)((longlong)plVar3 + 0x1d) = 1;
                local_78 = (undefined ***)0x0;
                local_68 = &PTR_LAB_14a37d320;
                local_60 = param_1;
                local_58 = plVar3;
                local_88[0] = FUN_1404988f6;
                plVar3 = (longlong *)plVar3[2];
                if ((plVar3 == (longlong *)0x0) ||
                   (cVar8 = (**(code **)(*plVar3 + 0x238))(plVar3,local_88), cVar8 == '\0')) {
                  pcVar7 = local_88[0];
                  local_90 = 0;
                  pppuVar12 = local_78;
                  if (local_78 == (undefined ***)0x0) {
                    pppuVar12 = &local_68;
                  }
                  uVar11 = (*(code *)(*pppuVar12)[1])();
                  (*pcVar7)(uVar11,&local_90);
                }
                if (local_88[0] != (code *)0x0) {
                  pppuVar12 = local_78;
                  if (local_78 == (undefined ***)0x0) {
                    pppuVar12 = &local_68;
                  }
                  (*(code *)(*pppuVar12)[2])();
                }
                goto LAB_140f05bba;
              }
              break;
            }
            iVar13 = *(int *)(lVar9 + 0xb8);
          } while (iVar13 != -1);
        }
      }
      *(undefined1 *)((longlong)plVar3 + 0x1d) = 0;
LAB_140f05bba:
      plVar15 = (longlong *)plVar15[1];
    } while (plVar15 != (longlong *)0x0);
  }
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f05dd8 FUN_140f05dd8 body=1448 status=ok
// SIG undefined FUN_140f05dd8(void)

void FUN_140f05dd8(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  ulonglong uVar12;
  uint uVar13;
  longlong lVar14;
  bool bVar15;
  undefined1 auStack_88 [40];
  ulonglong local_60;
  undefined8 local_58;
  longlong *local_50;
  ulonglong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1409b4ce6();
  if (*(char *)(param_1 + 0x178) != '\x03') goto LAB_140f0601e;
  local_50 = (longlong *)0x0;
  local_48 = local_48 & 0xffffffff00000000;
  FUN_1446efa72(&local_50,0,3,0x10);
  plVar6 = local_50;
  local_48 = CONCAT44(local_48._4_4_,3);
  *local_50 = (longlong)&PTR_LAB_14b42c920;
  LOCK();
  UNLOCK();
  lVar8 = DAT_14c758608 + 1;
  lVar14 = DAT_14c758608 + 1;
  if (lVar8 == 0) {
    LOCK();
    UNLOCK();
    lVar8 = DAT_14c758608 + 2;
    lVar14 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar14;
  local_50[2] = lVar8;
  *local_50 = (longlong)&PTR_FUN_14b95efb0;
  local_50[3] = 0;
  iVar11 = 0;
  if (param_1 != 0) {
    uVar13 = *(uint *)(param_1 + 0xc);
    *(uint *)(local_50 + 3) = uVar13;
    if ((int)uVar13 < DAT_14c9647dc) {
      lVar14 = (ulonglong)((uVar13 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar13 >> 0x10) * 8);
    }
    else {
      lVar14 = 0;
    }
    iVar11 = *(int *)(lVar14 + 0x10);
    if (*(int *)(lVar14 + 0x10) == 0) {
      LOCK();
      iVar11 = DAT_14c964868 + 1;
      UNLOCK();
      iVar4 = DAT_14c964868 + 1;
      bVar15 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar11;
      if (bVar15) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar4);
      }
      LOCK();
      iVar11 = *(int *)(lVar14 + 0x10);
      bVar15 = iVar11 == 0;
      if (bVar15) {
        *(int *)(lVar14 + 0x10) = iVar4;
        iVar11 = 0;
      }
      UNLOCK();
      if (bVar15) {
        iVar11 = iVar4;
      }
    }
  }
  *(int *)((longlong)plVar6 + 0x1c) = iVar11;
  plVar6[4] = (longlong)&LAB_140e1482e;
  *(undefined4 *)(plVar6 + 5) = 0;
  if (((int)local_48 == 0) || (local_50 == (longlong *)0x0)) {
LAB_140f062da:
    if ((int)local_48 == 0) {
      uVar7 = 0;
      goto LAB_140f0600e;
    }
    if (local_50 != (longlong *)0x0) {
      uVar7 = 0;
      (**(code **)*local_50)(local_50,0);
      FUN_1446efa72(&local_50,0,0,0x10);
      goto LAB_140f06001;
    }
    uVar7 = 0;
  }
  else {
    cVar2 = (**(code **)(*local_50 + 0x30))();
    if (cVar2 == '\0') {
      goto LAB_140f062da;
    }
    plVar6 = (longlong *)(param_1 + 0x1a60);
    if (*(int *)(param_1 + 0x1a74) < 1) {
      iVar11 = *(int *)(param_1 + 0x1a68);
      iVar4 = *(int *)(param_1 + 0x1a70) + -1;
      *(int *)(param_1 + 0x1a70) = iVar4;
      if (iVar4 <= iVar11) {
        iVar4 = iVar11;
        if (0 < iVar11) {
          iVar9 = 0;
          do {
            if (((*(int *)(*plVar6 + 8 + (longlong)iVar9 * 0x10) == 0) ||
                (plVar1 = *(longlong **)(*plVar6 + (longlong)iVar9 * 0x10),
                plVar1 == (longlong *)0x0)) ||
               (cVar2 = (**(code **)(*plVar1 + 0x28))(), cVar2 != '\0')) {
              FUN_14005b288(plVar6,iVar9);
              FUN_14005b248(plVar6);
            }
            else {
              iVar9 = iVar9 + 1;
            }
            iVar4 = *(int *)(param_1 + 0x1a68);
          } while (iVar9 < iVar4);
        }
        iVar9 = 2;
        if (2 < iVar4 * 2) {
          iVar9 = iVar4 * 2;
        }
        *(int *)(param_1 + 0x1a70) = iVar9;
        if ((iVar9 < iVar11) && (*(int *)(param_1 + 0x1a6c) != iVar4)) {
          FUN_14045812c();
        }
      }
    }
    uVar7 = 0;
    if (((int)local_48 != 0) && (local_50 != (longlong *)0x0)) {
      (**(code **)(*local_50 + 0x38))(local_50,&local_58);
      uVar7 = local_58;
    }
    iVar11 = *(int *)(param_1 + 0x1a68);
    *(uint *)(param_1 + 0x1a68) = iVar11 + 1U;
    if (*(uint *)(param_1 + 0x1a6c) < iVar11 + 1U) {
      FUN_1447a71f6(plVar6,iVar11);
    }
    lVar14 = *plVar6;
    lVar8 = (longlong)iVar11 * 0x10;
    *(undefined8 *)(lVar14 + lVar8) = 0;
    *(undefined4 *)(lVar14 + 8 + lVar8) = 0;
    *(longlong **)(lVar14 + lVar8) = local_50;
    local_50 = (longlong *)0x0;
    *(int *)(lVar14 + 8 + lVar8) = (int)local_48;
LAB_140f06001:
    local_48 = local_48 & 0xffffffff00000000;
LAB_140f0600e:
    if (local_50 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  *(undefined8 *)(param_1 + 0x2590) = uVar7;
LAB_140f0601e:
  lVar14 = *(longlong *)(param_1 + 0x1da0);
  if (lVar14 != 0) {
    if ((*(int *)(lVar14 + 0x43c) < *(int *)(lVar14 + 0x410)) &&
       (*(longlong *)(param_1 + 0x2460) != 0)) {
      FUN_14037b28e(*(longlong *)(param_1 + 0x2460),param_1);
      lVar14 = *(longlong *)(param_1 + 0x1da0);
    }
    if ((*(char *)(lVar14 + 0x3a8) == '\x01') && (*(char *)(lVar14 + 0x31a) == '\x01')) {
      FUN_140c7d22e(param_1 + 0x1eb8,param_1);
      lVar14 = *(longlong *)(param_1 + 0x1da0);
    }
    if (*(char *)(lVar14 + 0x368) == '\x01') {
      FUN_1418e2454(param_1 + 0x1d40,param_1,lVar14 + 0x369);
      lVar14 = *(longlong *)(param_1 + 0x1da0);
    }
    if (*(char *)(lVar14 + 0x36b) == '\x01') {
      FUN_140e15d6e(&local_60);
      if (param_1 == 0) {
        uVar12 = 0;
        uVar13 = 0;
      }
      else {
        uVar13 = *(uint *)(param_1 + 0xc);
        if ((int)uVar13 < DAT_14c9647dc) {
          lVar14 = (ulonglong)((uVar13 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar13 >> 0x10) * 8);
        }
        else {
          lVar14 = 0;
        }
        uVar5 = *(uint *)(lVar14 + 0x10);
        if (*(uint *)(lVar14 + 0x10) == 0) {
          LOCK();
          iVar11 = DAT_14c964868 + 1;
          UNLOCK();
          uVar10 = DAT_14c964868 + 1;
          bVar15 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar11;
          if (bVar15) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,uVar10);
          }
          LOCK();
          uVar5 = *(uint *)(lVar14 + 0x10);
          bVar15 = uVar5 == 0;
          if (bVar15) {
            *(uint *)(lVar14 + 0x10) = uVar10;
            uVar5 = 0;
          }
          UNLOCK();
          if (bVar15) {
            uVar5 = uVar10;
          }
        }
        uVar12 = (ulonglong)uVar5;
        if (local_60 == 0) {
          local_60 = 0;
        }
        else if (uVar5 == 0) {
          uVar12 = 0;
        }
        else if (((((-1 < (int)uVar13) && ((int)uVar13 < DAT_14c9647dc)) &&
                  (plVar6 = (longlong *)
                            ((ulonglong)((uVar13 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar13 >> 0x10) * 8)),
                  plVar6 != (longlong *)0x0)) &&
                 ((*(uint *)(plVar6 + 2) == uVar5 && ((*(uint *)(plVar6 + 1) & 0x10200000) == 0))))
                && (*plVar6 != 0)) {
          FUN_1400796d0(*(undefined8 *)(*plVar6 + 0x10),local_60,1);
        }
      }
      FUN_140649f3e(param_1 + 0x203,&local_58);
      local_50 = (longlong *)((ulonglong)uVar13 | uVar12 << 0x20);
      local_48 = local_60;
      bVar3 = FUN_140a28ca8(param_1,local_58);
      *(byte *)(param_1 + 0x203) = *(byte *)(param_1 + 0x203) | bVar3;
      lVar14 = *(longlong *)(param_1 + 0x1da0);
    }
    *(undefined1 *)(param_1 + 0x258a) = *(undefined1 *)(lVar14 + 0x388);
  }
  plVar6 = (longlong *)(param_1 + 0x1aa0);
  cVar2 = (**(code **)(*(longlong *)(param_1 + 0x1aa0) + 0x10))(plVar6);
  if (cVar2 != '\0') {
    uVar7 = (**(code **)(*plVar6 + 0x20))(plVar6);
    FUN_140fd702a(uVar7);
  }
  FUN_140c7c762(param_1 + 0x24f0,param_1);
  FUN_140917a9a(param_1 + 0x1ae8,param_1);
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140f06382 FUN_140f06382 body=82 status=ok
// SIG undefined FUN_140f06382(void)

void FUN_140f06382(longlong *param_1)

{
  int iVar1;
  longlong *plVar2;
  
  iVar1 = FUN_144b46fa0();
  if (*param_1 == 0) {
    plVar2 = (longlong *)FUN_14001cc68(0x30,0x10);
    *plVar2 = 0;
    plVar2[1] = 0;
    plVar2[2] = 0;
    plVar2[3] = 0;
    plVar2[4] = 0;
    plVar2[5] = 0;
    *plVar2 = (longlong)iVar1;
    *param_1 = (longlong)plVar2;
  }
  FUN_140f063d4(&DAT_14cb1b380,param_1);
  return;
}



// FUNCTION 140f063d4 FUN_140f063d4 body=189 status=ok
// SIG undefined FUN_140f063d4(void)

void FUN_140f063d4(LPCRITICAL_SECTION param_1,undefined8 param_2)

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
             (cVar5 = (**(code **)(*plVar3 + 0x60))(plVar3,param_2), cVar5 != '\0'))) {
        lVar8 = lVar8 + -0x10;
        bVar4 = uVar9 < 2;
        uVar9 = uVar9 - 1;
        if (bVar4) {
          piVar1 = (int *)((longlong)&param_1[1].OwningThread + 4);
          *piVar1 = *piVar1 + -1;
          if (bVar7) goto LAB_140f06482;
          goto LAB_140f06400;
        }
      }
      uVar6 = uVar9 - 1;
      bVar7 = true;
    } while (1 < uVar9);
    piVar1 = (int *)((longlong)&param_1[1].OwningThread + 4);
    *piVar1 = *piVar1 + -1;
LAB_140f06482:
    FUN_14109be94(param_1,0);
  }
LAB_140f06400:
  if (param_1 == (LPCRITICAL_SECTION)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000140f06413. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(param_1);
  return;
}



// FUNCTION 140f06492 FUN_140f06492 body=251 status=ok
// SIG undefined FUN_140f06492(void)

void FUN_140f06492(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (*(longlong *)(param_1 + 0xf60) != 0) {
    puVar1 = (undefined8 *)(param_1 + 0xf60);
    uVar2 = FUN_1401b4c98(param_1);
    lVar3 = FUN_144a61814(uVar2,puVar1);
    if (lVar3 != 0) {
      FUN_1405a424c(uVar2,*puVar1);
    }
    *puVar1 = 0;
  }
  if ((param_2 == 0 && *(char *)(param_1 + 0xe28) != -1) && (*(longlong *)(param_1 + 0xe10) != 0)) {
    (**(code **)(*(longlong *)(param_1 + 0xdd8) + 0x18))(param_1 + 0xdd8);
  }
  *(undefined1 *)(param_1 + 0xfb1) = 1;
  FUN_14067171c(param_1 + 0xf78);
  *(undefined8 *)(param_1 + 0xf78) = 0;
  FUN_140f0670c(param_1,param_2);
  FUN_140ef6a7a(*(undefined8 *)(param_1 + 0xe18),*(undefined4 *)(param_1 + 0xe20));
  *(undefined4 *)(param_1 + 0xe20) = 0;
  if (*(int *)(param_1 + 0xe24) == 0) {
    return;
  }
  FUN_1460651de(param_1 + 0xe18,0);
  return;
}



// FUNCTION 140f0658e FUN_140f0658e body=103 status=ok
// SIG undefined FUN_140f0658e(void)

void FUN_140f0658e(longlong param_1,longlong param_2,int param_3)

{
  if (*(char *)(param_1 + 0x50) == param_3) {
    if ((*(int *)(param_1 + -0x28c) != -1) && (*(char *)(param_1 + -0xc60) == '\x03')) {
      FUN_140f07512(param_1 + -0xdd8);
    }
    *(undefined1 *)(param_1 + 0x50) = 0xff;
    if ((param_2 != 0) && (*(longlong *)(param_1 + 0x38) != 0)) {
      FUN_140f065f6(param_2,param_1,param_3);
      *(undefined8 *)(param_1 + 0x38) = 0;
    }
  }
  return;
}



// FUNCTION 140f065f6 FUN_140f065f6 body=104 status=ok
// SIG undefined FUN_140f065f6(void)

void FUN_140f065f6(longlong param_1,longlong param_2,uint param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if (((-1 < (int)param_3) && (*(char *)(param_1 + 0x178) != '\x03')) &&
     ((int)param_3 < *(int *)(param_1 + 0x78f0))) {
    lVar1 = *(longlong *)(param_1 + 0x78e8) + (ulonglong)param_3 * 0x48;
    if (*(longlong *)(lVar1 + 0x20) == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = *(longlong *)(lVar1 + 0x28);
    }
    if (lVar2 == param_2) {
      lVar2 = *(longlong *)(param_1 + 0x78e8) + (ulonglong)param_3 * 0x48;
      *(undefined8 *)(lVar1 + 0x38) = 0;
      *(undefined8 *)(lVar2 + 0x20) = 0;
      *(undefined8 *)(lVar2 + 0x28) = 0;
      *(undefined4 *)(lVar1 + 0x40) = 0xffffffff;
    }
  }
  FUN_140f0665e(param_1 + 0x77a8);
  return;
}



// FUNCTION 140f0665e FUN_140f0665e body=173 status=ok
// SIG undefined FUN_140f0665e(void)

void FUN_140f0665e(longlong *param_1,undefined8 param_2,undefined4 param_3)

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
        goto LAB_140f066f5;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_140f066f5:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 140f0670c FUN_140f0670c body=590 status=ok
// SIG undefined FUN_140f0670c(void)

ulonglong FUN_140f0670c(longlong *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong *plVar7;
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
  if ((longlong *)param_1[0x120] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x120] + 0xa8))();
  }
  FUN_140f0695c(param_1,param_2);
  if ((param_2 == 0) && (param_1[0x1a9] != 0)) {
    if ((param_1[0x1ac] == DAT_14cb94e30) || ((*(byte *)(param_1 + 0x172) & 0x10) != 0)) {
      FUN_140fb6342(param_1,0);
    }
    if (((char)param_1[0x2f] == '\x03') || (*(char *)((longlong)param_1 + 0xd44) == -1)) {
      (**(code **)(*param_1 + 0x870))(param_1);
    }
    else {
      param_1[0x1a7] = 0;
      *(undefined1 *)((longlong)param_1 + 0xd34) = 0xff;
      *(undefined1 *)((longlong)param_1 + 0xd36) = 1;
      lVar6 = param_1[0x1a9];
      if (lVar6 != 0) {
        if (DAT_14cb94538 == 0) {
          local_40 = &local_28;
          local_28 = FUN_1449e2820;
          local_30 = FUN_14081d0ea;
          local_38 = FUN_1427b09ee;
          local_48 = &LAB_148a18249;
          local_50 = FUN_14657713c;
          local_58 = L"Engine";
          local_60 = 0;
          local_68 = 0x10004001;
          local_70 = 8;
          local_78 = 0x28;
          FUN_14081cfa3(L"/Script/GbxWeapon",L"WeaponUserInterface",&DAT_14cb94538,&DAT_148a18248);
        }
        plVar3 = (longlong *)FUN_144718840(lVar6,DAT_14cb94538);
        if (plVar3 != (longlong *)0x0) {
          uVar4 = (**(code **)(*plVar3 + 0x18))(plVar3);
          FUN_140f07252(uVar4,param_1,*(undefined1 *)((longlong)param_1 + 0xd44));
        }
      }
      FUN_140f069cc(param_1);
    }
  }
  uVar5 = (ulonglong)(int)param_1[0x1ae];
  if (uVar5 != 0) {
    plVar7 = (longlong *)param_1[0x1ad];
    plVar3 = plVar7 + uVar5;
    do {
      lVar6 = *plVar7;
      if (lVar6 != 0) {
        FUN_144757f48(lVar6,0x40000000);
        uVar2 = *(uint *)(lVar6 + 0xc);
        if ((int)uVar2 < DAT_14c9647dc) {
          lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
        }
        else {
          lVar6 = 0;
        }
        do {
          uVar2 = *(uint *)(lVar6 + 8);
          uVar5 = (ulonglong)uVar2;
          if ((uVar2 >> 0x15 & 1) != 0) break;
          LOCK();
          uVar1 = *(uint *)(lVar6 + 8);
          if (uVar2 == uVar1) {
            *(uint *)(lVar6 + 8) = uVar2 | 0x200000;
          }
          else {
            uVar5 = (ulonglong)uVar1;
          }
          UNLOCK();
        } while (uVar2 != uVar1);
      }
      plVar7 = plVar7 + 1;
    } while (plVar7 != plVar3);
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f0695c FUN_140f0695c body=111 status=ok
// SIG undefined FUN_140f0695c(void)

void FUN_140f0695c(longlong param_1,undefined4 param_2)

{
  if (*(longlong *)(param_1 + 0x820) != 0) {
    FUN_140521208();
  }
  FUN_1407c83f0(*(undefined8 *)(param_1 + 0x830),*(undefined4 *)(param_1 + 0x838));
  *(undefined4 *)(param_1 + 0x838) = 0;
  if (*(int *)(param_1 + 0x83c) != 0) {
    FUN_1470e9830(param_1 + 0x830,0);
  }
  FUN_1406335ea(param_1 + 0x578,param_2);
  FUN_140d4f94c(param_1,param_2);
  return;
}



// FUNCTION 140f069cc FUN_140f069cc body=437 status=ok
// SIG undefined FUN_140f069cc(void)

void FUN_140f069cc(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (param_1[0x1ac] != DAT_14cb95120) {
    (**(code **)(*param_1 + 0x800))(param_1,1);
  }
  if ((param_1 != (longlong *)0x0) && ((*(uint *)(param_1 + 1) >> 0x1e & 1) == 0)) {
    if ((char)param_1[0x2f] == '\x03') {
      param_1[0x1a7] = 0;
      FUN_144a62f0c(param_1,param_1[5],0x18);
      if (param_1[0x2d] == param_1[0x36]) {
        (**(code **)(*param_1 + 0x440))(param_1,0);
      }
      FUN_140eeb8c0(param_1,0);
    }
    *(undefined1 *)((longlong)param_1 + 0xd44) = 0xff;
    param_1[0x1a9] = 0;
    *(undefined1 *)((longlong)param_1 + 0xba9) = 0;
    param_1[0x163] = 0;
    param_1[0x164] = 0;
    param_1[0x165] = 0;
    param_1[0x166] = 0;
    param_1[0x167] = 0;
    param_1[0x168] = 0;
    if (*(char *)((longlong)param_1 + 0xbc2) != '\0') {
      *(undefined1 *)((longlong)param_1 + 0xbc2) = 0;
      FUN_144a62f0c(param_1,param_1[5],0x11);
    }
    if (0 < (int)param_1[0x181]) {
      plVar4 = param_1 + 0x17f;
      if ((longlong *)param_1[0x180] != (longlong *)0x0) {
        plVar4 = (longlong *)param_1[0x180];
      }
      *(undefined1 *)plVar4 = 0;
    }
    FUN_140c06afe(param_1,0);
    lVar3 = param_1[0x1a2];
    if ((longlong)(int)lVar3 != 0) {
      lVar1 = param_1[0x1a1];
      lVar5 = 0;
      do {
        lVar2 = *(longlong *)(lVar1 + lVar5);
        *(byte *)(lVar2 + 0x78) = *(byte *)(lVar2 + 0x78) & 0xf7;
        FUN_140cf5864(lVar2);
        FUN_140cf57c4(lVar2);
        lVar5 = lVar5 + 8;
      } while ((longlong)(int)lVar3 * 8 != lVar5);
    }
    lVar3 = param_1[0x1a4];
    if ((longlong)(int)lVar3 != 0) {
      lVar1 = param_1[0x1a3];
      lVar5 = 0;
      do {
        FUN_140cf579c(*(undefined8 *)(lVar1 + lVar5),0);
        lVar5 = lVar5 + 8;
      } while ((longlong)(int)lVar3 * 8 != lVar5);
    }
    FUN_140ee9156(param_1,0);
    return;
  }
  return;
}



// FUNCTION 140f06b82 FUN_140f06b82 body=486 status=ok
// SIG undefined FUN_140f06b82(void)

void FUN_140f06b82(longlong *param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_48 [40];
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined1 *)(param_1 + 0x175) = 0;
  if (param_1[0x174] != 0) {
    lVar5 = FUN_1447210f0(param_1);
    if (lVar5 != 0) {
      lVar6 = FUN_1401b4c98(param_1);
      lVar5 = param_1[0x174];
      if (lVar5 != 0) {
        uVar7 = (uint)lVar5;
        if ((int)(uVar7 & 0xffffff) < *(int *)(lVar6 + 0x10)) {
          lVar8 = lVar6 + 0x18;
          if (*(longlong *)(lVar6 + 0x28) != 0) {
            lVar8 = *(longlong *)(lVar6 + 0x28);
          }
          if ((*(uint *)(lVar8 + (ulonglong)((uVar7 & 0xffffff) >> 5) * 4) >> (uVar7 & 0x1f) & 1) !=
              0) {
            lVar8 = *(longlong *)(lVar6 + 8);
            lVar9 = (ulonglong)(uVar7 & 0xffffff) * 0x70;
            if (((lVar8 + lVar9 != 0) && (*(longlong *)(lVar8 + 0x60 + lVar9) == lVar5)) &&
               (*(char *)(lVar8 + 1 + lVar9) != '\x04')) {
              FUN_1405a424c(lVar6);
            }
          }
        }
      }
      param_1[0x174] = 0;
    }
  }
  if (param_1[0x1ac] != DAT_14cb95120) {
    if ((param_1[0x1ac] != DAT_14cb94e38) && (param_1[0x174] == 0)) {
      plVar4 = (longlong *)FUN_1401654a2(param_1);
      if (plVar4 != (longlong *)0x0) {
        cVar2 = (**(code **)(*plVar4 + 0x48))(plVar4,1);
        if (cVar2 != '\0') {
          uVar3 = (**(code **)(*plVar4 + 0x38))(plVar4);
          (**(code **)(*plVar4 + 0x80))(plVar4,1,uVar3);
        }
      }
    }
    bVar1 = *(byte *)(param_1 + 0x17b);
    if ((int)(uint)bVar1 < (int)param_1[0x17e]) {
      plVar4 = *(longlong **)(param_1[0x17d] + 8 + (ulonglong)bVar1 * 0x80 + (ulonglong)bVar1 * 8);
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x378))();
      }
    }
  }
  (**(code **)(*param_1 + 0x6a0))(param_1,param_1[0x1a9]);
  (**(code **)(*param_1 + 0x858))(param_1);
  local_20 = param_1;
  FUN_1447cd2ec(param_1 + 0x13b);
  FUN_14054d5aa(param_1 + 0x13d,param_1);
  if (param_1[0x1ac] != DAT_14cb95120) {
    FUN_1408bd412(param_1,&DAT_14cb95120);
  }
  param_1[0x1a9] = 0;
  *(undefined1 *)((longlong)param_1 + 0xd44) = 0xff;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f06d6a FUN_140f06d6a body=414 status=ok
// SIG undefined FUN_140f06d6a(void)

void FUN_140f06d6a(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  FUN_140cf596e(param_1,0);
  if ((char)param_1[0x19f] != '\x01') {
    return;
  }
  *(undefined1 *)(param_1 + 0x19f) = 0;
  lVar4 = param_1[0x17e];
  if ((longlong)(int)lVar4 != 0) {
    lVar1 = param_1[0x17d];
    lVar5 = 0;
    do {
      plVar2 = *(longlong **)(lVar1 + 8 + lVar5);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x390))();
      }
      lVar5 = lVar5 + 0x88;
    } while ((longlong)(int)lVar4 * 0x88 != lVar5);
  }
  FUN_1447cd2ec(param_1 + 0x133,0);
  lVar4 = param_1[0x1a2];
  if ((longlong)(int)lVar4 != 0) {
    lVar1 = param_1[0x1a1];
    lVar5 = 0;
    do {
      FUN_140f06f08(*(undefined8 *)(lVar1 + lVar5),0);
      lVar5 = lVar5 + 8;
    } while ((longlong)(int)lVar4 * 8 != lVar5);
  }
  lVar4 = param_1[0x1a4];
  if (0 < (longlong)(int)lVar4) {
    lVar1 = param_1[0x1a3];
    lVar5 = 0;
    do {
      FUN_140f06f08(*(undefined8 *)(lVar1 + lVar5),0);
      lVar5 = lVar5 + 8;
    } while ((longlong)(int)lVar4 * 8 != lVar5);
    lVar4 = param_1[0x1a4];
    if ((longlong)(int)lVar4 != 0) {
      lVar1 = param_1[0x1a3];
      lVar5 = 0;
      do {
        FUN_140cf579c(*(undefined8 *)(lVar1 + lVar5),0);
        lVar5 = lVar5 + 8;
      } while ((longlong)(int)lVar4 * 8 != lVar5);
    }
  }
  if ((longlong *)param_1[0x120] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x120] + 0xa8))();
    FUN_140521208(param_1[0x120]);
  }
  lVar4 = param_1[0x1a2];
  if ((longlong)(int)lVar4 != 0) {
    lVar1 = param_1[0x1a1];
    lVar5 = 0;
    do {
      lVar3 = *(longlong *)(lVar1 + lVar5);
      *(byte *)(lVar3 + 0x78) = *(byte *)(lVar3 + 0x78) & 0xf7;
      FUN_140cf5864(lVar3);
      FUN_140cf57c4(lVar3);
      lVar5 = lVar5 + 8;
    } while ((longlong)(int)lVar4 * 8 != lVar5);
  }
  FUN_140e17250(param_1,0);
                    /* WARNING: Could not recover jumptable at 0x000140f06e9f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x400))(param_1,0);
  return;
}



// FUNCTION 140f06f08 FUN_140f06f08 body=466 status=ok
// SIG undefined FUN_140f06f08(void)

void FUN_140f06f08(longlong param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined4 *puVar4;
  longlong lVar5;
  undefined1 auStack_78 [40];
  double local_50;
  double local_48;
  double local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar1 = *(int *)(param_1 + 0x98);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x90);
    lVar5 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + 0xe8 + lVar5);
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x420))(plVar3,0);
        *(undefined8 *)(lVar2 + 0xe8 + lVar5) = 0;
      }
      lVar5 = lVar5 + 0xf0;
    } while ((longlong)iVar1 * 0xf0 - lVar5 != 0);
  }
  iVar1 = *(int *)(param_1 + 0xa8);
  if (0 < (longlong)iVar1) {
    lVar2 = *(longlong *)(param_1 + 0xa0);
    lVar5 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar5);
      (**(code **)(*plVar3 + 0x28))(plVar3,param_1);
      (**(code **)(*plVar3 + 0x18))(plVar3);
      lVar5 = lVar5 + 8;
    } while ((longlong)iVar1 * 8 != lVar5);
    *(byte *)(param_1 + 0x79) = *(byte *)(param_1 + 0x79) & 0xfd;
  }
  *(byte *)(param_1 + 0x78) = *(byte *)(param_1 + 0x78) & 0x7f;
  FUN_1409d56ca(param_1);
  if ((*(byte *)(param_1 + 0x78) & 1) == 0) {
    plVar3 = *(longlong **)(param_1 + 0x48);
    if (plVar3 != (longlong *)0x0) {
      if ((*(char *)(param_1 + 8) == '\x01') && (plVar3[0x24] != 0)) {
        FUN_1401c4d5c(plVar3[0x24] + 0x40,plVar3,plVar3 + 8);
        plVar3 = *(longlong **)(param_1 + 0x48);
      }
      puVar4 = &DAT_14cadad64;
      if ((char)param_2 != '\0') {
        puVar4 = (undefined4 *)&DAT_14cadad9c;
      }
      (**(code **)(*plVar3 + 0x4a0))(plVar3,puVar4);
      local_50 = (double)*(float *)(param_1 + 0x60);
      local_48 = local_50;
      local_40 = local_50;
      (**(code **)(**(longlong **)(param_1 + 0x48) + 0x478))();
      FUN_140f070dc(param_1,*(undefined8 *)(param_1 + 0x48),param_2 ^ 1);
      iVar1 = *(int *)(param_1 + 0x58);
      if ((longlong)iVar1 != 0) {
        lVar2 = *(longlong *)(param_1 + 0x50);
        lVar5 = 0;
        do {
          FUN_140f070dc(param_1,*(undefined8 *)(lVar2 + lVar5),param_2 ^ 1);
          lVar5 = lVar5 + 8;
        } while ((longlong)iVar1 * 8 != lVar5);
      }
    }
  }
  else {
    *(undefined8 *)(param_1 + 0x48) = 0;
  }
  *(byte *)(param_1 + 0x78) = *(byte *)(param_1 + 0x78) & 0x98 | 0x40;
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140f070dc FUN_140f070dc body=353 status=ok
// SIG undefined FUN_140f070dc(void)

void FUN_140f070dc(longlong param_1,longlong param_2,char param_3)

{
  longlong lVar1;
  longlong *plVar2;
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
  if (param_2 == 0) {
    if ((local_18 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
  if ((param_3 != '\0') && (plVar2 = *(longlong **)(param_1 + 0x48), plVar2 != (longlong *)0x0)) {
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
      plVar2 = *(longlong **)(param_1 + 0x48);
      if (plVar2 == (longlong *)0x0) goto LAB_140f0714f;
    }
    if ((((DAT_14cad2858 != 0) && (lVar1 = plVar2[2], lVar1 != 0)) &&
        (*(int *)(DAT_14cad2858 + 0x38) <= *(int *)(lVar1 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(DAT_14cad2858 + 0x38) * 8) ==
        DAT_14cad2858 + 0x30)) {
      (**(code **)(*plVar2 + 0xcb0))();
    }
  }
LAB_140f0714f:
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_98);
}



// FUNCTION 140f07252 FUN_140f07252 body=704 status=ok
// SIG undefined FUN_140f07252(void)

void FUN_140f07252(longlong param_1,longlong *param_2,uint param_3)

{
  undefined8 *puVar1;
  byte bVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  
  if (((*(longlong *)(param_1 + 0x150) == 0) ||
      (*(char *)(*(longlong *)(param_1 + 0x150) + 0x178) != '\x03')) &&
     (((int)param_3 < 0 || (*(int *)(param_1 + 0xa8) <= (int)param_3)))) {
    if (0 < *(int *)(param_1 + 0xa8)) {
      lVar5 = 0;
      lVar7 = 0;
      bVar2 = DAT_14c950c29;
      do {
        plVar6 = *(longlong **)(*(longlong *)(param_1 + 0xa0) + 0x28 + lVar5);
        if (((bVar2 & 1) != 0) && (plVar6 != (longlong *)0x0)) {
          FUN_1456cec3c(plVar6);
          bVar2 = DAT_14c950c29;
        }
        if (plVar6 == param_2) {
          if (*(int *)(param_1 + 0xa8) <= (int)lVar7) {
            return;
          }
          FUN_140e7ecae(param_1,*(longlong *)(param_1 + 0xa0) + lVar5);
          *(undefined8 *)(*(longlong *)(param_1 + 0xa0) + 0x28 + lVar5) = 0;
          *(undefined8 *)(*(longlong *)(param_1 + 0xa0) + 0x30 + lVar5) = 0;
          return;
        }
        lVar7 = lVar7 + 1;
        lVar5 = lVar5 + 0x170;
      } while (lVar7 < *(int *)(param_1 + 0xa8));
    }
  }
  else {
    if (param_3 == 0) {
      if ((*(longlong *)(param_1 + 0x160) != 0) && (lVar5 = FUN_1447210f0(), lVar5 != 0)) {
        puVar1 = (undefined8 *)(param_1 + 0x160);
        uVar4 = FUN_1401b4c98(*(undefined8 *)(param_1 + 0x150));
        lVar5 = FUN_144a61814(uVar4,puVar1);
        if (lVar5 != 0) {
          FUN_1405a424c(uVar4,*puVar1);
        }
        *puVar1 = 0;
      }
    }
    else if ((int)param_3 < 0) {
      return;
    }
    iVar3 = *(int *)(param_1 + 0xa8);
    if ((int)param_3 < iVar3) {
      plVar6 = *(longlong **)(*(longlong *)(param_1 + 0xa0) + 0x20 + (ulonglong)param_3 * 0x170);
      if ((plVar6 != (longlong *)0x0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(plVar6);
      }
      if ((plVar6 != (longlong *)0x0) && (plVar6 == param_2)) {
        if ((*(byte *)((longlong)plVar6 + 0x65) & 2) == 0) {
          lVar5 = *(longlong *)(param_1 + 0x150);
          if ((*(uint *)(plVar6 + 1) >> 0x1e & 1) == 0) {
            FUN_1401073f6(plVar6 + 0x135);
                    /* WARNING: Could not recover jumptable at 0x000140f0737d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar6 + 0x800))(plVar6,*(undefined1 *)((longlong)plVar6 + 0xd36));
            return;
          }
        }
        else {
          lVar5 = *(longlong *)(param_1 + 0x150);
        }
        if (lVar5 == 0) {
          return;
        }
        if ((*(byte *)(lVar5 + 0x65) & 2) != 0) {
          return;
        }
        if ((*(uint *)(lVar5 + 8) >> 0x1e & 1) != 0) {
          return;
        }
        FUN_140e7e2ce(param_1,param_3);
        return;
      }
      iVar3 = *(int *)(param_1 + 0xa8);
    }
    if ((int)param_3 < iVar3) {
      plVar6 = *(longlong **)(*(longlong *)(param_1 + 0xa0) + 0x28 + (ulonglong)param_3 * 0x170);
      if ((plVar6 != (longlong *)0x0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(plVar6);
      }
    }
    else {
      plVar6 = (longlong *)0x0;
    }
    if ((plVar6 == param_2) && ((int)param_3 < *(int *)(param_1 + 0xa8))) {
      lVar5 = (ulonglong)param_3 * 0x170;
      FUN_140e7ecae(param_1,*(longlong *)(param_1 + 0xa0) + lVar5);
      *(undefined8 *)(*(longlong *)(param_1 + 0xa0) + 0x28 + lVar5) = 0;
      *(undefined8 *)(*(longlong *)(param_1 + 0xa0) + 0x30 + lVar5) = 0;
    }
  }
  return;
}



// FUNCTION 140f07512 FUN_140f07512 body=137 status=ok
// SIG undefined FUN_140f07512(void)

void FUN_140f07512(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  
  iVar1 = *(int *)(param_1 + 0xd70);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0xd68);
    lVar5 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar5);
      if ((plVar3 != (longlong *)0x0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(plVar3);
LAB_140f0754e:
        lVar4 = FUN_1403e5dae();
        if ((*(int *)(lVar4 + 0x38) <= *(int *)(plVar3[2] + 0x38)) &&
           (*(longlong *)(*(longlong *)(plVar3[2] + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
            lVar4 + 0x30)) {
          (**(code **)(*plVar3 + 0x3a8))(plVar3);
        }
      }
      else if (plVar3 != (longlong *)0x0) goto LAB_140f0754e;
      lVar5 = lVar5 + 8;
    } while ((longlong)iVar1 * 8 != lVar5);
  }
  return;
}



// FUNCTION 140f0759c FUN_140f0759c body=337 status=ok
// SIG undefined FUN_140f0759c(void)

undefined8 FUN_140f0759c(longlong *param_1,char param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if ((param_1[0x1a9] == 0) && (param_1[0x1ac] == DAT_14cb95120)) {
    uVar1 = 0;
  }
  else {
    if ((char)param_1[0x2f] == '\x03') {
      (**(code **)(*param_1 + 0x578))(param_1);
      *(undefined1 *)((longlong)param_1 + 0xd34) = 0xff;
      *(char *)((longlong)param_1 + 0xd36) = param_2;
      FUN_144a62f0c(param_1,param_1[5],0x18);
    }
    if (((((*(byte *)(param_1 + 0x172) & 0x20) != 0) && ((*(byte *)(param_1 + 0x172) & 0x10) == 0))
        && (param_1[0x1ac] != DAT_14cb94e30)) && (*(char *)((longlong)param_1 + 0xb91) != '\0')) {
      if ((param_1[0x167] != 0) && ((longlong *)param_1[0x168] != (longlong *)0x0)) {
        (**(code **)(*(longlong *)param_1[0x168] + 0x38))();
      }
      *(undefined1 *)((longlong)param_1 + 0xb91) = 0;
      uVar1 = FUN_1401b4c98(param_1);
      lVar2 = FUN_144a61814(uVar1,param_1 + 0x16f);
      if (lVar2 != 0) {
        FUN_1405a424c(uVar1,param_1[0x16f]);
      }
      *(byte *)(param_1 + 0x172) = *(byte *)(param_1 + 0x172) & 0xdf;
      param_1[0x16f] = 0;
    }
    *(char *)((longlong)param_1 + 0xd46) = param_2;
    if ((param_2 == '\x01') && (param_1[0x1ac] == DAT_14cb94e38)) {
      (**(code **)(*param_1 + 0x870))(param_1);
    }
    else if (param_1[0x1ac] == DAT_14cb95120) {
      FUN_1457c5a2a(param_1);
    }
    else {
      FUN_1408bd412(param_1,&DAT_14cb94e38);
    }
    uVar1 = 1;
  }
  return uVar1;
}



// FUNCTION 140f076ee FUN_140f076ee body=7 status=ok
// SIG undefined FUN_140f076ee(void)

undefined1 FUN_140f076ee(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x1b8);
}



// FUNCTION 140f076f6 FUN_140f076f6 body=801 status=ok
// SIG undefined FUN_140f076f6(void)

void FUN_140f076f6(longlong param_1,float param_2)

{
  float fVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  
  lVar11 = *(longlong *)(param_1 + 0x10);
  uVar9 = 0;
  uVar10 = 0;
  if (lVar11 == 0) goto LAB_140f0779e;
  lVar4 = *(longlong *)(lVar11 + 0xd0);
  if (lVar4 == 0) {
    uVar5 = FUN_145d82412();
    lVar4 = FUN_14477b664(uVar5);
    *(longlong *)(lVar11 + 0xd0) = lVar4;
  }
  if (*(longlong *)(lVar11 + 0xd8) == 0) {
    if ((lVar4 == 0) || (uVar10 = uVar9, *(longlong *)(lVar11 + 200) == 0)) goto LAB_140f0779e;
    plVar2 = *(longlong **)(lVar4 + 0xb8);
    if ((plVar2 == (longlong *)0x0) ||
       (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
      *(undefined8 *)(lVar11 + 0xd8) = 0;
      goto LAB_140f0779e;
    }
    uVar5 = (**(code **)(*plVar2 + 0x110))(plVar2);
    lVar4 = FUN_144aff482(uVar5,(longlong *)(lVar11 + 200));
    *(longlong *)(lVar11 + 0xd8) = lVar4;
    if (lVar4 == 0) goto LAB_140f0779e;
  }
  lVar11 = *(longlong *)(param_1 + 0x10);
  lVar4 = *(longlong *)(lVar11 + 0xd0);
  if (lVar4 == 0) {
    uVar5 = FUN_145d82412();
    lVar4 = FUN_14477b664(uVar5);
    *(longlong *)(lVar11 + 0xd0) = lVar4;
  }
  lVar6 = *(longlong *)(lVar11 + 0xd8);
  if (((lVar6 == 0) && (lVar6 = 0, lVar4 != 0)) && (*(longlong *)(lVar11 + 200) != 0)) {
    plVar2 = *(longlong **)(lVar4 + 0xb8);
    if ((plVar2 == (longlong *)0x0) ||
       (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
      lVar6 = 0;
    }
    else {
      uVar5 = (**(code **)(*plVar2 + 0x110))(plVar2);
      lVar6 = FUN_144aff482(uVar5,(longlong *)(lVar11 + 200));
    }
    *(longlong *)(lVar11 + 0xd8) = lVar6;
  }
  fVar1 = *(float *)(lVar6 + 0x24);
  lVar11 = *(longlong *)(param_1 + 0x10);
  lVar4 = *(longlong *)(lVar11 + 0xd0);
  if (lVar4 == 0) {
    uVar5 = FUN_145d82412();
    lVar4 = FUN_14477b664(uVar5);
    *(longlong *)(lVar11 + 0xd0) = lVar4;
  }
  lVar6 = *(longlong *)(lVar11 + 0xd8);
  if (((lVar6 == 0) && (lVar6 = 0, lVar4 != 0)) && (*(longlong *)(lVar11 + 200) != 0)) {
    plVar2 = *(longlong **)(lVar4 + 0xb8);
    if ((plVar2 == (longlong *)0x0) ||
       (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
      lVar6 = 0;
    }
    else {
      uVar5 = (**(code **)(*plVar2 + 0x110))(plVar2);
      lVar6 = FUN_144aff482(uVar5,(longlong *)(lVar11 + 200));
    }
    *(longlong *)(lVar11 + 0xd8) = lVar6;
  }
  uVar10 = (uint)(param_2 < fVar1);
  if (param_2 < *(float *)(lVar6 + 0x28)) {
    uVar10 = 2;
  }
LAB_140f0779e:
  if ((*(char *)(param_1 + 0xec) != '\x01') || (*(uint *)(param_1 + 0xe8) != uVar10)) {
    *(uint *)(param_1 + 0xe8) = uVar10;
    *(undefined1 *)(param_1 + 0xec) = 1;
    if ((*(int *)(param_1 + 0xe0) != 0) &&
       ((((uVar10 = *(uint *)(param_1 + 0xdc), -1 < (int)uVar10 && ((int)uVar10 < DAT_14c9647dc)) &&
         (lVar11 = (ulonglong)((uVar10 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8), lVar11 != 0)) &&
        ((*(int *)(lVar11 + 0x10) == *(int *)(param_1 + 0xe0) &&
         ((*(uint *)(lVar11 + 8) & 0x10200000) == 0)))))) {
      lVar11 = FUN_14479d2ce();
      uVar7 = 0;
      uVar8 = 0;
      if ((*(char *)(param_1 + 0x85) == '\0') &&
         (((uVar8 = uVar7, *(char *)(param_1 + 0x84) == '\0' && (*(char *)(param_1 + 0x82) == '\0'))
          && (*(char *)(param_1 + 0xec) == '\x01')))) {
        uVar8 = *(undefined4 *)(param_1 + 0xe8);
      }
      *(undefined4 *)(lVar11 + 0x3b0) = uVar8;
      FUN_1411e3072(lVar11);
    }
  }
  FUN_140f07a18(param_1);
  return;
}



// FUNCTION 140f07a18 FUN_140f07a18 body=263 status=ok
// SIG undefined FUN_140f07a18(void)

void FUN_140f07a18(longlong param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  if ((((*(char *)(param_1 + 0x85) == '\0') && (*(char *)(param_1 + 0x84) == '\0')) &&
      (*(char *)(param_1 + 0x82) == '\0')) &&
     ((*(char *)(param_1 + 0xec) == '\x01' && (iVar2 = *(int *)(param_1 + 0xe8), iVar2 != 0)))) {
    if (iVar2 == 1) {
      uVar4 = 1;
    }
    else if (iVar2 == 2) {
      uVar4 = 3;
    }
    else {
      uVar4 = 0;
    }
    iVar2 = FUN_1457c5e5a(uVar4);
  }
  else {
    iVar2 = FUN_140f07b20(param_1);
  }
  uVar3 = FUN_140f07b20(param_1);
  *(undefined4 *)(param_1 + 0xa4) = uVar3;
  if (*(char *)(param_1 + 0x84) == '\x01') {
    iVar2 = FUN_1457c5e5a(5);
  }
  if (iVar2 != *(int *)(param_1 + 0xa0)) {
    *(int *)(param_1 + 0xa0) = iVar2;
    if (*(int *)(param_1 + 0xe0) != 0) {
      uVar1 = *(uint *)(param_1 + 0xdc);
      if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
        lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
        if ((lVar5 != 0) &&
           ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0xe0) &&
            ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
          lVar5 = FUN_14479d2ce((uint *)(param_1 + 0xdc));
          *(int *)(lVar5 + 0x3b4) = iVar2;
          FUN_1411e3072(lVar5);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 140f07b20 FUN_140f07b20 body=145 status=ok
// SIG undefined FUN_140f07b20(void)

void FUN_140f07b20(longlong param_1)

{
  uint uVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  if (((*(int *)(param_1 + 0xc) != 0) && (uVar1 = *(uint *)(param_1 + 8), -1 < (int)uVar1)) &&
     ((int)uVar1 < DAT_14c9647dc)) {
    plVar5 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar5 != (longlong *)0x0) && ((int)plVar5[2] == *(int *)(param_1 + 0xc))) &&
       ((*(uint *)(plVar5 + 1) & 0x10200000) == 0)) {
      if ((*(uint *)(plVar5 + 1) & 0x10200000) == 0) {
        lVar4 = *plVar5;
      }
      else {
        lVar4 = 0;
      }
      if ((*(char *)(lVar4 + 0x60) == '\x01') && (lVar4 = *(longlong *)(lVar4 + 0x50), lVar4 != 0))
      {
        uVar3 = FUN_140390f40();
        cVar2 = FUN_1448093f4(lVar4,uVar3);
        if (cVar2 != '\0') {
          FUN_140f07bb2(lVar4);
          return;
        }
      }
    }
  }
  FUN_1457c5e5a(0);
  return;
}



// FUNCTION 140f07bb2 FUN_140f07bb2 body=348 status=ok
// SIG undefined FUN_140f07bb2(void)

ulonglong FUN_140f07bb2(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  lVar5 = *(longlong *)(param_1 + 0x150);
  if (lVar5 == 0) {
    uVar4 = FUN_145cd6228();
    lVar5 = FUN_14477b664(uVar4);
    *(longlong *)(param_1 + 0x150) = lVar5;
  }
  plVar1 = (longlong *)(param_1 + 0x148);
  lVar6 = *(longlong *)(param_1 + 0x158);
  if (lVar6 == 0) {
    if ((lVar5 == 0) || (*plVar1 == 0)) goto LAB_140f07cfc;
    plVar2 = *(longlong **)(lVar5 + 0xb8);
    if (plVar2 != (longlong *)0x0) {
      cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2);
      if (cVar3 != '\0') {
        uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
        lVar6 = FUN_144aff482(uVar4,plVar1);
        *(longlong *)(param_1 + 0x158) = lVar6;
        if (lVar6 == 0) goto LAB_140f07cfc;
        lVar5 = *(longlong *)(param_1 + 0x150);
        goto LAB_140f07bdf;
      }
    }
    *(undefined8 *)(param_1 + 0x158) = 0;
LAB_140f07cfc:
    uVar7 = FUN_1457c5e5a(0);
    return uVar7;
  }
LAB_140f07bdf:
  if (lVar5 != 0) goto LAB_140f07be8;
  uVar4 = FUN_145cd6228();
  lVar5 = FUN_14477b664(uVar4);
  *(longlong *)(param_1 + 0x150) = lVar5;
  lVar6 = *(longlong *)(param_1 + 0x158);
  if (((lVar6 != 0) || (lVar6 = 0, lVar5 == 0)) || (*plVar1 == 0)) goto LAB_140f07be8;
  plVar2 = *(longlong **)(lVar5 + 0xb8);
  if (plVar2 == (longlong *)0x0) {
LAB_140f07d0a:
    lVar6 = 0;
  }
  else {
    cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2);
    if (cVar3 == '\0') goto LAB_140f07d0a;
    uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
    lVar6 = FUN_144aff482(uVar4,plVar1);
  }
  *(longlong *)(param_1 + 0x158) = lVar6;
LAB_140f07be8:
  return (ulonglong)*(uint *)(lVar6 + 0x18);
}



// FUNCTION 140f07d0e FUN_140f07d0e body=600 status=ok
// SIG undefined FUN_140f07d0e(void)

void FUN_140f07d0e(longlong param_1)

{
  int *piVar1;
  uint uVar2;
  uint *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong lVar12;
  bool bVar13;
  undefined1 auStack_78 [40];
  longlong local_50;
  longlong *local_48;
  ulonglong local_40;
  
  uVar6 = DAT_14cb1c840;
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  puVar3 = *(uint **)(param_1 + 0x28);
  if ((((((puVar3[1] != 0) && (uVar2 = *puVar3, -1 < (int)uVar2)) && ((int)uVar2 < DAT_14c9647dc))
       && ((plVar10 = (longlong *)
                      ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
           plVar10 != (longlong *)0x0 && (*(uint *)(plVar10 + 2) == puVar3[1])))) &&
      (((*(uint *)(plVar10 + 1) & 0x10200000) == 0 &&
       ((lVar4 = *plVar10, lVar4 != 0 && (*(longlong *)(lVar4 + 0x30) != 0)))))) &&
     ((lVar5 = *(longlong *)(*(longlong *)(lVar4 + 0x30) + 0x2b0), lVar5 != 0 &&
      ((*(uint *)(plVar10 + 1) & 0x10200000) == 0)))) {
    if (DAT_14c9a7d10 == (undefined8 *)0x0) {
      DAT_14c9a7d10 = (undefined8 *)FUN_14001cc68(0x20,0x10);
      *DAT_14c9a7d10 = 0;
      DAT_14c9a7d10[1] = 0;
      DAT_14c9a7d10[2] = 0;
      DAT_14c9a7d10[3] = 0;
    }
    FUN_14005915a(DAT_14c9a7d10,&local_50,uVar6,lVar4);
    plVar10 = local_48;
    if ((local_50 == 0) || (local_48 == (longlong *)0x0)) {
      plVar10 = (longlong *)0x0;
    }
    else {
      LOCK();
      *(int *)(local_48 + 1) = (int)local_48[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)((longlong)local_48 + 0xc) = *(int *)((longlong)local_48 + 0xc) + 1;
      UNLOCK();
      LOCK();
      plVar11 = local_48 + 1;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)*plVar11 == 0) {
        (**(code **)*local_48)(local_48);
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
        }
      }
    }
    if (local_48 != (longlong *)0x0) {
      LOCK();
      plVar11 = local_48 + 1;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)*plVar11 == 0) {
        (**(code **)*local_48)(local_48);
        LOCK();
        piVar1 = (int *)((longlong)local_48 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_48 + 0x10))(local_48);
        }
      }
    }
    if (plVar10 != (longlong *)0x0) {
      iVar8 = (int)plVar10[1];
      do {
        plVar11 = (longlong *)0x0;
        if (iVar8 == 0) break;
        LOCK();
        iVar7 = (int)plVar10[1];
        bVar13 = iVar8 == iVar7;
        if (bVar13) {
          *(int *)(plVar10 + 1) = iVar8 + 1;
          iVar7 = iVar8;
        }
        iVar8 = iVar7;
        UNLOCK();
        plVar11 = plVar10;
      } while (!bVar13);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
      if (plVar11 != (longlong *)0x0) {
        if (local_50 != 0) {
          *(uint *)(lVar5 + 0x648) = *(uint *)(lVar5 + 0x648) & 0x801fffff;
          uVar2 = puVar3[8];
          if ((longlong)(int)uVar2 != 0) {
            lVar4 = *(longlong *)(puVar3 + 6);
            lVar12 = 0;
            do {
              uVar9 = FUN_14022c0ba(*(undefined8 *)(lVar4 + lVar12));
              *(uint *)(lVar5 + 0x648) = *(uint *)(lVar5 + 0x648) | uVar9;
              lVar12 = lVar12 + 0x28;
            } while ((longlong)(int)uVar2 * 0x28 != lVar12);
          }
          FUN_140f07f68(local_50);
          *(undefined1 *)(puVar3 + 0x28) = 1;
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
  }
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140f07f68 FUN_140f07f68 body=156 status=ok
// SIG undefined FUN_140f07f68(void)

void FUN_140f07f68(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  
  if (((*(int *)(param_1 + 0xc) != 0) && (uVar1 = *(uint *)(param_1 + 8), -1 < (int)uVar1)) &&
     ((int)uVar1 < DAT_14c9647dc)) {
    plVar4 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if ((((plVar4 != (longlong *)0x0) && ((int)plVar4[2] == *(int *)(param_1 + 0xc))) &&
        (((*(uint *)(plVar4 + 1) & 0x10200000) == 0 &&
         ((*plVar4 != 0 && (lVar2 = *(longlong *)(*plVar4 + 0x30), lVar2 != 0)))))) &&
       (lVar2 = *(longlong *)(lVar2 + 0x2b0), lVar2 != 0)) {
      lVar3 = FUN_140f08004();
      if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8
           ) == lVar3 + 0x30)) {
        *(undefined4 *)(param_1 + 0x5c8) = *(undefined4 *)(lVar2 + 0x648);
      }
    }
  }
  return;
}



// FUNCTION 140f08004 FUN_140f08004 body=228 status=ok
// SIG undefined FUN_140f08004(void)

longlong FUN_140f08004(void)

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
  if (DAT_14cb1c2f0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_141030f22;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1462af7e4;
    local_38 = &LAB_147e35f95;
    local_40 = &LAB_14574be6c;
    local_48 = L"game";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0x660;
    FUN_14081cfa3(L"/Script/GbxNav",L"GbxNavWorldSettings",&DAT_14cb1c2f0,FUN_14641fe0c);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb1c2f0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f080ea FUN_140f080ea body=202 status=ok
// SIG undefined FUN_140f080ea(void)

void FUN_140f080ea(longlong *param_1,undefined8 *param_2,longlong param_3)

{
  uint *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_88 [32];
  longlong local_68;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  puVar1 = (uint *)*param_2;
  lVar2 = *(longlong *)(*(longlong *)(*param_1 + 0x60) + (longlong)(int)param_1[1] * 8);
  lVar3 = *(longlong *)(lVar2 + 0x20);
  lVar5 = 0;
  local_58 = lVar3 + (ulonglong)puVar1[1];
  if ((ulonglong)puVar1[1] == 0xffffffff) {
    local_58 = lVar5;
  }
  local_50 = lVar3 + (ulonglong)puVar1[2];
  if ((ulonglong)puVar1[2] == 0xffffffff) {
    local_50 = lVar5;
  }
  local_48 = lVar3 + (ulonglong)puVar1[3];
  if ((ulonglong)puVar1[3] == 0xffffffff) {
    local_48 = lVar5;
  }
  lVar4 = lVar3 + (ulonglong)*puVar1;
  if ((ulonglong)*puVar1 == 0xffffffff) {
    lVar4 = lVar5;
  }
  local_68 = lVar3 + (ulonglong)puVar1[4];
  if ((ulonglong)puVar1[4] == 0xffffffff) {
    local_68 = lVar5;
  }
  FUN_140f081b6(param_3 + 8,lVar2,lVar4);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f081b6 FUN_140f081b6 body=195 status=ok
// SIG undefined FUN_140f081b6(void)

void FUN_140f081b6(longlong param_1,longlong param_2,longlong param_3,longlong *param_4,
                  longlong param_5)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar4 = (ulonglong)*(ushort *)(param_2 + 0xe);
  lVar1 = *param_4;
  if (lVar1 == 0) {
    lVar1 = param_4[1];
    if (lVar1 == 0) {
      puVar3 = (undefined8 *)param_4[2];
      if ((puVar3 != (undefined8 *)0x0) && (*(ushort *)(param_2 + 0xe) != 0)) {
        uVar5 = 0;
        do {
          FUN_140f0827a(*puVar3,*(undefined8 *)(param_3 + uVar5 * 8),
                        *(undefined1 *)(param_5 + uVar5));
          uVar5 = uVar5 + 1;
          puVar3 = puVar3 + 2;
        } while (uVar4 != uVar5);
      }
    }
    else if (uVar4 != 0) {
      uVar5 = 0;
      do {
        uVar2 = (ulonglong)*(ushort *)(lVar1 + uVar5 * 2);
        if (uVar2 != 0) {
          *(undefined1 *)(*(longlong *)(param_3 + uVar5 * 8) + uVar2) =
               *(undefined1 *)(param_5 + uVar5);
        }
        uVar5 = uVar5 + 1;
      } while (uVar4 != uVar5);
    }
  }
  else if (uVar4 != 0) {
    uVar5 = 0;
    do {
      (**(code **)(*(longlong *)(param_1 + 8) + 0x20 +
                  (longlong)*(int *)(param_1 + 0x14) * (ulonglong)*(ushort *)(lVar1 + uVar5 * 2)))
                (*(undefined8 *)(param_3 + uVar5 * 8),*(undefined1 *)(param_5 + uVar5));
      uVar5 = uVar5 + 1;
    } while (uVar4 != uVar5);
  }
  return;
}



// FUNCTION 140f0827a FUN_140f0827a body=405 status=ok
// SIG undefined FUN_140f0827a(void)

void FUN_140f0827a(undefined8 param_1,longlong *param_2,undefined1 param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 *puVar4;
  undefined1 auStack_88 [40];
  undefined1 local_60 [24];
  longlong local_48;
  longlong local_38;
  uint local_30;
  int local_2c;
  uint local_28;
  int local_24;
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_19 = param_3;
  FUN_1406f9c46(param_1,local_60,param_2);
  plVar2 = (longlong *)FUN_1406f9508(param_1,param_2);
  if (plVar2 != (longlong *)0x0) {
    cVar1 = (**(code **)(*plVar2 + 0x80))(plVar2);
    if (cVar1 != '\0') {
      (**(code **)(*plVar2 + 0x98))(plVar2,param_2,&local_19);
      goto LAB_140f08340;
    }
  }
  if ((((local_2c == 0) || ((int)local_30 < 0)) || (DAT_14c9647dc <= (int)local_30)) ||
     (((plVar2 = (longlong *)
                 ((ulonglong)((local_30 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_30 >> 0x10) * 8)),
       plVar2 == (longlong *)0x0 || ((int)plVar2[2] != local_2c)) ||
      (((*(uint *)(plVar2 + 1) & 0x10200000) != 0 || (*plVar2 == 0)))))) {
    lVar3 = FUN_1406f977c(local_60);
    if ((lVar3 != 0) &&
       (puVar4 = (undefined1 *)(*(int *)(lVar3 + 0x44) + local_38), puVar4 != (undefined1 *)0x0)) {
      *puVar4 = local_19;
    }
  }
  else {
    FUN_140f08410(param_2,*plVar2,&local_19);
  }
LAB_140f08340:
  if (((((local_24 != 0) && (-1 < (int)local_28)) && ((int)local_28 < DAT_14c9647dc)) &&
      ((plVar2 = (longlong *)
                 ((ulonglong)((local_28 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_28 >> 0x10) * 8)),
       plVar2 != (longlong *)0x0 && ((int)plVar2[2] == local_24)))) &&
     (((*(uint *)(plVar2 + 1) & 0x10200000) == 0 && (*plVar2 != 0)))) {
    (**(code **)(*param_2 + 0x248))(param_2,*plVar2,0);
  }
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f08410 FUN_140f08410 body=401 status=ok
// SIG undefined FUN_140f08410(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_140f08410(longlong *param_1,longlong param_2,undefined1 *param_3)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  byte bVar5;
  longlong lVar6;
  undefined1 *_Dst;
  ulonglong *puVar7;
  undefined1 *puVar8;
  longlong *plVar9;
  ulonglong local_48;
  
  puVar7 = &local_48;
  local_48 = DAT_14c707940 ^ (ulonglong)&local_48;
  uVar1 = *(ushort *)(param_2 + 0xb6);
  if ((*(short *)(param_2 + 0xb8) != -1) || (puVar8 = param_3, *(char *)(param_2 + 0xb4) != '\0')) {
    if (uVar1 == 0) {
      puVar8 = (undefined1 *)0x0;
      puVar7 = &local_48;
    }
    else {
      lVar6 = -(ulonglong)(uVar1 + 0x1e & 0xfffffff0);
      puVar8 = (undefined1 *)((longlong)&local_48 + lVar6);
      puVar7 = (ulonglong *)((longlong)&local_48 + lVar6);
    }
    plVar9 = *(longlong **)(param_2 + 0x70);
    if (plVar9 != (longlong *)0x0) {
      bVar5 = 1;
      do {
        iVar2 = *(int *)((longlong)plVar9 + 0x44);
        lVar6 = plVar9[6];
        iVar3 = *(int *)((longlong)plVar9 + 0x34);
        if (iVar3 * (int)lVar6 + iVar2 <= (int)(uint)uVar1) {
          if ((*(byte *)((longlong)plVar9 + 0x39) & 2) == 0) {
            pcVar4 = *(code **)(*plVar9 + 0x160);
            *(undefined8 *)((longlong)puVar7 + -0x28) = 0x140f08589;
            (*pcVar4)(plVar9,puVar8 + iVar2);
          }
          else {
            *(undefined8 *)((longlong)puVar7 + -0x28) = 0x140f084ba;
            memset(puVar8 + iVar2,0,(longlong)iVar3 * (longlong)(int)lVar6);
          }
          if ((bool)(((uint)plVar9[7] & 0x480) == 0x80 & bVar5)) {
            if (*(int *)((longlong)plVar9 + 0x34) != 1) goto LAB_140f0853f;
            _Dst = puVar8 + *(int *)((longlong)plVar9 + 0x44);
            if (_Dst != param_3) {
              lVar6 = plVar9[6];
              if (((uint)plVar9[7] >> 0x1e & 1) == 0) {
                pcVar4 = *(code **)(*plVar9 + 0x100);
                *(undefined8 *)((longlong)puVar7 + -0x28) = 0x140f085a1;
                (*pcVar4)(plVar9,_Dst,param_3);
              }
              else {
                *(undefined8 *)((longlong)puVar7 + -0x28) = 0x140f0850e;
                memcpy(_Dst,param_3,(longlong)(int)lVar6);
              }
            }
          }
          bVar5 = 0;
        }
        plVar9 = (longlong *)plVar9[9];
      } while (plVar9 != (longlong *)0x0);
    }
  }
  pcVar4 = *(code **)(*param_1 + 0x248);
  *(undefined8 *)((longlong)puVar7 + -0x28) = 0x140f0853b;
  (*pcVar4)(param_1,param_2,puVar8);
LAB_140f0853f:
  if ((local_48 ^ (ulonglong)&local_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)((longlong)puVar7 + -0x28) = &UNK_140f08569;
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140f085a6 FUN_140f085a6 body=530 status=ok
// SIG undefined FUN_140f085a6(void)

void FUN_140f085a6(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined1 *puVar2;
  char cVar3;
  size_t sVar4;
  longlong *plVar5;
  wchar_t *_Str;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_108 [32];
  undefined1 *local_e8;
  undefined1 *local_e0;
  undefined1 local_d8 [128];
  undefined1 *local_58;
  undefined1 *local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_108;
  plVar5 = (longlong *)*param_2;
  if ((int)param_1[1] == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)*param_1;
    local_58 = (undefined1 *)0x0;
    if (_Str == (wchar_t *)0x0) {
      local_50 = (undefined1 *)0x0;
      local_48 = 0;
      goto LAB_140f08659;
    }
  }
  local_58 = (undefined1 *)0x0;
  sVar4 = wcslen(_Str);
  local_48 = FUN_14475aa65(0,_Str,sVar4 & 0xffffffff);
  uVar6 = local_48 + 1;
  local_50 = (undefined1 *)0x0;
  if (0x80 < uVar6) {
    FUN_1446efa72(&local_58,0,uVar6,1);
    local_50 = local_58;
  }
  if (local_50 == (undefined1 *)0x0) {
    local_50 = local_d8;
  }
  FUN_14475a98a(local_50,uVar6,_Str,(int)sVar4 + 1);
LAB_140f08659:
  puVar2 = local_50;
  plVar5 = (longlong *)(**(code **)(*plVar5 + 0x210))(plVar5);
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x50))(plVar5,puVar2,1);
    local_e0 = &LAB_148a03fce;
    local_e8 = &LAB_148a04036;
    cVar3 = (**(code **)(*plVar5 + 0x158))(plVar5,param_1 + 2,FUN_148a03fe1,FUN_148a0403b);
    if (cVar3 == '\0') {
      (**(code **)(*plVar5 + 0x160))(plVar5,(longlong)(int)param_1[3]);
      if (0 < (int)param_1[3]) {
        lVar8 = 0;
        iVar7 = 0;
        do {
          lVar1 = param_1[2];
          (**(code **)(*plVar5 + 0x28))(plVar5);
          FUN_140f087b9(plVar5,lVar1 + lVar8);
          (**(code **)(*plVar5 + 0x48))(plVar5,lVar1 + lVar8);
          iVar7 = iVar7 + 1;
          lVar8 = lVar8 + 0x40;
        } while (iVar7 < (int)param_1[3]);
      }
      (**(code **)(*plVar5 + 0x168))(plVar5);
    }
    (**(code **)(*plVar5 + 0x58))(plVar5);
  }
  if (local_58 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140f087b9 FUN_140f087b9 body=435 status=ok
// SIG undefined FUN_140f087b9(void)

void FUN_140f087b9(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined1 auStack_88 [40];
  longlong *local_60;
  undefined8 local_58;
  undefined **local_50 [3];
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  (**(code **)(*param_1 + 0x10))(param_1,&local_60,"FGbxUIWidgetData_GlyphInfo",param_2);
  plVar1 = local_60;
  if (local_60 != (longlong *)0x0) {
    cohtml::Property::Property((Property *)local_50,"action_name",true);
    local_50[0] = &PTR_FUN_14b477fe0;
    local_38 = 0;
    (**(code **)(*plVar1 + 0x18))(plVar1,local_58,(Property *)local_50);
    cohtml::Property::~Property((Property *)local_50);
    plVar1 = local_60;
    cohtml::Property::Property((Property *)local_50,"km_keys",true);
    local_50[0] = &PTR_FUN_14b478070;
    local_38 = 0x10;
    (**(code **)(*plVar1 + 0x18))(plVar1,local_58,(Property *)local_50);
    cohtml::Property::~Property((Property *)local_50);
    plVar1 = local_60;
    cohtml::Property::Property((Property *)local_50,"gamepad_keys",true);
    local_50[0] = &PTR_FUN_14b478070;
    local_38 = 0x20;
    (**(code **)(*plVar1 + 0x18))(plVar1,local_58,(Property *)local_50);
    cohtml::Property::~Property((Property *)local_50);
    plVar1 = local_60;
    cohtml::Property::Property((Property *)local_50,"is_hold_action",true);
    local_50[0] = &PTR_FUN_14b478100;
    local_38 = 0x30;
    (**(code **)(*plVar1 + 0x18))(plVar1,local_58,(Property *)local_50);
    cohtml::Property::~Property((Property *)local_50);
    cohtml::Property::Property((Property *)local_50,"hold_duration",true);
    local_50[0] = &PTR_FUN_14b478190;
    local_38 = 0x34;
    (**(code **)(*local_60 + 0x18))(local_60,local_58,(Property *)local_50);
    cohtml::Property::~Property((Property *)local_50);
  }
  cohtml::TypeDescription::~TypeDescription((TypeDescription *)&local_60);
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f0896e FUN_140f0896e body=1070 status=ok
// SIG undefined FUN_140f0896e(void)

void FUN_140f0896e(longlong param_1,undefined8 param_2,longlong param_3)

{
  byte bVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
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
  code *local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar6 = *(longlong *)(param_3 + 0x28);
  lVar3 = *(longlong *)(lVar6 + 0xe0);
  if (lVar3 == 0) {
    lVar5 = 0;
  }
  else {
    if (DAT_14cba8288 == 0) {
      local_80 = &local_68;
      local_68 = FUN_141864c34;
      local_70 = FUN_14081d0ea;
      local_78 = &LAB_1464cee30;
      local_88 = &LAB_148bfac22;
      local_90 = &LAB_140f21842;
      local_98 = &DAT_149e063b2;
      local_a0 = 0;
      local_a8 = 0x10000004;
      local_b0 = 0x10;
      local_b8 = 0x9cd0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
      lVar3 = *(longlong *)(lVar6 + 0xe0);
      if (lVar3 != 0) goto LAB_140f089cd;
LAB_140f08d3e:
      lVar5 = 0;
    }
    else {
LAB_140f089cd:
      lVar5 = 0;
      if ((DAT_14cba8288 != 0) && (lVar6 = *(longlong *)(lVar3 + 0x10), lVar6 != 0)) {
        if (*(int *)(lVar6 + 0x38) < *(int *)(DAT_14cba8288 + 0x38)) goto LAB_140f08d3e;
        lVar5 = 0;
        if (*(longlong *)
             (*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) ==
            DAT_14cba8288 + 0x30) {
          lVar5 = lVar3;
        }
      }
    }
    lVar6 = *(longlong *)(param_3 + 0x28);
  }
  plVar4 = *(longlong **)(lVar6 + 0xe8);
  if (plVar4 != (longlong *)0x0) {
    if (DAT_14cbadd90 == 0) {
      local_80 = &local_68;
      local_68 = FUN_141030f22;
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
      plVar4 = *(longlong **)(lVar6 + 0xe8);
      if (plVar4 == (longlong *)0x0) goto LAB_140f08b9d;
    }
    if (((((DAT_14cbadd90 != 0) && (lVar3 = plVar4[2], lVar3 != 0)) &&
         (*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(lVar3 + 0x38))) &&
        ((lVar5 != 0 &&
         (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8)
          == DAT_14cbadd90 + 0x30)))) &&
       (((*(byte *)(plVar4 + 0x84) & 2) != 0 &&
        ((bVar1 = *(byte *)(lVar5 + 0x73eb), cVar2 = (**(code **)(*plVar4 + 0x6c8))(),
         (bVar1 & 0xfd) != 0 && (cVar2 != '\0')))))) {
      lVar3 = FUN_1447e736e(param_1 + 0x968);
      if (lVar3 == 0) {
        lVar3 = param_1 + 0x8e8;
      }
      else {
        lVar3 = FUN_1447e736e(param_1 + 0x968);
        lVar3 = lVar3 + 0x30;
      }
      if (lVar3 != 0) {
        fVar7 = (float)FUN_140f08d9e(lVar5 + 0x71a8);
        if ((longlong)*(int *)(lVar3 + 0x78) == 0) {
          fVar10 = 0.0;
          fVar8 = 0.0;
        }
        else {
          fVar10 = *(float *)(*(longlong *)(lVar3 + 0x70) + 4);
          fVar8 = *(float *)(*(longlong *)(lVar3 + 0x70) + -0x18 +
                            (longlong)*(int *)(lVar3 + 0x78) * 0x1c);
        }
        if ((fVar10 <= fVar7) && (fVar7 <= fVar8)) {
          uVar9 = FUN_1448c9f94(lVar3,fVar7,0);
          FUN_1406a8366(param_3,&DAT_14cbc49e0,param_1 + 0x20,uVar9);
        }
      }
      lVar3 = FUN_1447e736e(param_1 + 0x12d8);
      if (lVar3 == 0) {
        lVar3 = param_1 + 0x1258;
      }
      else {
        lVar3 = FUN_1447e736e(param_1 + 0x12d8);
        lVar3 = lVar3 + 0x30;
      }
      if (lVar3 != 0) {
        fVar7 = 0.0;
        fVar10 = 0.0;
        if ((longlong)*(int *)(lVar3 + 0x78) != 0) {
          fVar7 = *(float *)(*(longlong *)(lVar3 + 0x70) + 4);
          fVar10 = *(float *)(*(longlong *)(lVar3 + 0x70) + -0x18 +
                             (longlong)*(int *)(lVar3 + 0x78) * 0x1c);
        }
        fVar8 = (float)FUN_140264e80(lVar5 + 0x71a8);
        fVar7 = (float)FUN_1448c9f94(lVar3,(1.0 - fVar8) * (fVar10 - fVar7),0);
        if (1.0 <= fVar7) {
          fVar7 = 1.0;
        }
        if (fVar7 <= 0.0) {
          fVar7 = 0.0;
        }
        FUN_1406a8366(param_3,&DAT_14cbc49e8,param_1 + 0x990,fVar7);
      }
    }
  }
LAB_140f08b9d:
  if ((local_60 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140f08d9e FUN_140f08d9e body=91 status=ok
// SIG undefined FUN_140f08d9e(void)

float FUN_140f08d9e(longlong param_1)

{
  longlong lVar1;
  float fVar2;
  
  fVar2 = 0.0;
  if (*(longlong *)(param_1 + 0x238) != 0) {
    lVar1 = FUN_1447210f0();
    if (lVar1 != 0) {
      lVar1 = FUN_1447210f0(*(undefined8 *)(param_1 + 0x238));
      fVar2 = (float)(*(double *)(lVar1 + 0x6d0) - (double)*(float *)(param_1 + 0x2d8));
    }
  }
  return fVar2;
}



// FUNCTION 140f08dfa FUN_140f08dfa body=784 status=ok
// SIG undefined FUN_140f08dfa(void)

void FUN_140f08dfa(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 ****ppppuVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  code *local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 ***local_58 [3];
  ushort local_40;
  byte local_38;
  undefined1 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_60 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_60);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_60);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_60);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_60 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_60);
    }
  }
  puVar5 = *(undefined8 **)(param_2 + 0x38);
  local_68 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c951cc8) && (FUN_144b3d300(&DAT_14c951cc8), DAT_14c951cc8 == -1)) {
    local_78 = FUN_1446ddbd2();
    local_70 = FUN_1468d96f0;
    local_80 = 0;
    local_88 = 0x4008001;
    FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
    atexit(FUN_14281144d);
    _Init_thread_footer(&DAT_14c951cc8);
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_68);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_68);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_68);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_68 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_68);
    }
  }
  if (puVar5 == (undefined8 *)0x0) {
    puVar5 = &local_60;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar6 = FUN_140f0910c(puVar5,local_68);
  *param_3 = uVar6;
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_38 * 0x120));
  if (pcVar3 != (code *)0x0) {
    ppppuVar4 = (undefined8 ****)local_58[0];
    if (local_40 < 0x19) {
      ppppuVar4 = local_58;
    }
    (*pcVar3)(ppppuVar4);
  }
  if (0x18 < local_40) {
    FUN_1400020a8(local_58[0]);
  }
  if ((local_28 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140f0910c FUN_140f0910c body=419 status=ok
// SIG undefined FUN_140f0910c(void)

undefined4 FUN_140f0910c(undefined8 param_1)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined1 auStack_d8 [40];
  char local_b0 [16];
  longlong *local_a0;
  undefined4 local_88 [2];
  undefined4 local_80;
  undefined4 uStack_7c;
  ushort local_68;
  byte local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  ushort local_40;
  byte local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_b0[0] = '\0';
  local_88[0] = 0;
  FUN_1456bb102(local_b0);
  puVar4 = &local_80;
  FUN_1447c3578(param_1,puVar4,local_b0);
  if (local_60 == 3) {
    uVar3 = 3;
    uVar6 = local_80;
  }
  else {
    puVar5 = &local_58;
    FUN_1400b56fe(puVar5,&local_80,3);
    uVar6 = 0;
    if (local_38 != 0) {
      uVar6 = local_58;
    }
    pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_38 * 0x120));
    if (pcVar2 != (code *)0x0) {
      if (0x18 < local_40) {
        puVar5 = (undefined4 *)CONCAT44(uStack_54,local_58);
      }
      (*pcVar2)(puVar5);
    }
    if (0x18 < local_40) {
      FUN_1400020a8(CONCAT44(uStack_54,local_58));
    }
    uVar3 = (uint)local_60;
  }
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar3 * 0x120));
  if (pcVar2 != (code *)0x0) {
    if (0x18 < local_68) {
      puVar4 = (undefined4 *)CONCAT44(uStack_7c,local_80);
    }
    (*pcVar2)(puVar4);
  }
  if (0x18 < local_68) {
    FUN_1400020a8(CONCAT44(uStack_7c,local_80));
  }
  FUN_1448173f8(local_88);
  if ((local_b0[0] == '\x03') && (local_a0 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_a0 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_a0 + 0x10))();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f092b0 FUN_140f092b0 body=973 status=ok
// SIG undefined FUN_140f092b0(void)

void FUN_140f092b0(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  uint *puVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  longlong *plVar11;
  bool bVar12;
  undefined1 auStack_118 [32];
  longlong local_f8;
  longlong **local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  wchar_t *local_d8;
  code *local_d0;
  undefined1 *local_c8;
  code **local_c0;
  code *local_b8;
  code *local_b0;
  longlong *local_a0;
  uint local_98;
  uint local_90;
  uint uStack_8c;
  undefined8 uStack_88;
  longlong local_80;
  undefined8 local_78;
  code *local_70 [3];
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_80 = param_4;
  cVar2 = (**(code **)(*param_1 + 0x28))();
  if (cVar2 != '\0') {
    uStack_8c = 0;
    if (param_3 == 0) {
      local_90 = 0;
      uVar3 = 0;
    }
    else {
      local_90 = *(uint *)(param_3 + 0xc);
      if ((int)local_90 < DAT_14c9647dc) {
        lVar10 = (ulonglong)((local_90 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_90 >> 0x10) * 8);
      }
      else {
        lVar10 = 0;
      }
      uVar3 = *(uint *)(lVar10 + 0x10);
      if (*(uint *)(lVar10 + 0x10) == 0) {
        LOCK();
        iVar9 = DAT_14c964868 + 1;
        UNLOCK();
        uVar8 = DAT_14c964868 + 1;
        bVar12 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar9;
        if (bVar12) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        uVar8);
        }
        LOCK();
        uVar3 = *(uint *)(lVar10 + 0x10);
        bVar12 = uVar3 == 0;
        if (bVar12) {
          *(uint *)(lVar10 + 0x10) = uVar8;
          uVar3 = 0;
        }
        UNLOCK();
        if (bVar12) {
          uVar3 = uVar8;
        }
      }
    }
    plVar11 = param_1 + 0xd;
    plVar5 = (longlong *)param_1[0x1d];
    if ((longlong *)param_1[0x1d] == (longlong *)0x0) {
      plVar5 = plVar11;
    }
    iVar9 = 0;
    uStack_8c = uVar3;
    uStack_88 = param_4;
    if ((longlong)(int)param_1[0x1e] != 0) {
      lVar10 = (longlong)(int)param_1[0x1e] << 4;
      do {
        if ((plVar5[1] == uStack_88) && (cVar2 = FUN_14038330a(plVar5,&local_90), cVar2 != '\0'))
        goto LAB_140f094eb;
        plVar5 = plVar5 + 2;
        lVar10 = lVar10 + -0x10;
      } while (lVar10 != 0);
      iVar9 = (int)param_1[0x1e];
    }
    *(uint *)(param_1 + 0x1e) = iVar9 + 1U;
    if (*(uint *)((longlong)param_1 + 0xf4) < iVar9 + 1U) {
      FUN_1488717ca(plVar11,iVar9);
    }
    plVar5 = (longlong *)param_1[0x1d];
    if ((longlong *)param_1[0x1d] == (longlong *)0x0) {
      plVar5 = plVar11;
    }
    puVar1 = (uint *)(plVar5 + (longlong)iVar9 * 2);
    *puVar1 = local_90;
    puVar1[1] = uStack_8c;
    puVar1[2] = (uint)uStack_88;
    puVar1[3] = uStack_88._4_4_;
    lVar10 = param_1[9];
    local_78 = *(undefined8 *)(lVar10 + 0x38);
    FUN_1446dcdd4(local_70);
    if (DAT_14cb77d08 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = FUN_144837462(DAT_14cb77d08,local_70);
    }
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    if ((param_2 != 0) && (lVar4 != 0)) {
      if (DAT_14cb56270 == 0) {
        local_70[0] = FUN_1449e2820;
        local_b0 = FUN_14081d0ea;
        local_b8 = FUN_1427b09ee;
        local_c8 = &LAB_148630fef;
        local_d0 = FUN_1464b6a91;
        local_d8 = L"Engine";
        local_e0 = 0;
        local_e8 = 0x10004001;
        local_f0 = (longlong **)CONCAT44(local_f0._4_4_,8);
        local_f8 = CONCAT44(local_f8._4_4_,0x28);
        local_c0 = local_70;
        FUN_14081cfa3(L"/Script/GbxGame",L"DamageableInterface",&DAT_14cb56270,&DAT_148630fee);
      }
      plVar5 = (longlong *)FUN_144718840(param_2,DAT_14cb56270);
      if (plVar5 != (longlong *)0x0) {
        lVar6 = (**(code **)(*plVar5 + 0x20))(plVar5);
        lVar7 = (**(code **)(*plVar5 + 0x10))(plVar5);
        if ((lVar6 != 0) && (lVar7 != 0)) {
          if (param_1[0x1f] == 0) {
            if ((longlong *)param_1[0x1d] != (longlong *)0x0) {
              plVar11 = (longlong *)param_1[0x1d];
            }
            FUN_140f0967e(lVar4,local_70,*(undefined8 *)(lVar10 + 0x50),plVar11[1]);
            param_1[0x1f] = (longlong)local_70[0];
          }
          local_a0 = &local_80;
          if (param_4 == 0) {
            local_a0 = (longlong *)0x0;
          }
          local_f0 = &local_a0;
          local_98 = (uint)(param_4 != 0);
          local_e8 = CONCAT31(local_e8._1_3_,*(undefined1 *)(lVar10 + 0x58));
          local_f8 = param_3;
          FUN_140f096fa(lVar6 + 0x270,lVar7,lVar4);
        }
      }
    }
  }
LAB_140f094eb:
  if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140f0967e FUN_140f0967e body=123 status=ok
// SIG undefined FUN_140f0967e(void)

longlong * FUN_140f0967e(longlong param_1,longlong *param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  undefined4 *puVar2;
  
  if (param_3 == 0) {
    if (param_4 == 0) {
      puVar2 = &DAT_14c9485f0;
      if (*(undefined4 **)(param_1 + 8) != (undefined4 *)0x0) {
        puVar2 = *(undefined4 **)(param_1 + 8);
      }
      if (DAT_14c947fe0 == 0) {
        lVar1 = FUN_14001cc68(0x140,0x10);
        FUN_1456b2032(lVar1);
        DAT_14c947fe0 = lVar1;
      }
      FUN_140045924(DAT_14c947fe0,param_2,puVar2,1);
    }
    else {
      *param_2 = param_4;
    }
  }
  else {
    *param_2 = param_3;
  }
  return param_2;
}



// FUNCTION 140f096fa FUN_140f096fa body=3814 status=ok
// SIG undefined FUN_140f096fa(void)

void FUN_140f096fa(undefined8 *param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong *param_5,longlong *param_6,char param_7)

{
  void *_Src;
  void *_Dst;
  int *piVar1;
  uint *puVar2;
  longlong lVar3;
  code *pcVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong *plVar9;
  undefined8 uVar10;
  undefined4 *puVar11;
  byte bVar12;
  int iVar13;
  undefined8 *puVar14;
  longlong lVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  undefined8 *puVar21;
  uint *puVar22;
  ulonglong uVar23;
  longlong lVar24;
  uint uVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  longlong *plVar29;
  longlong *plVar30;
  uint uVar31;
  bool bVar32;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  undefined4 local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  wchar_t *local_d8;
  undefined1 *local_d0;
  undefined1 *local_c8;
  code **local_c0;
  code *local_b8;
  code *local_b0;
  longlong *local_a8;
  longlong local_a0;
  longlong local_98;
  longlong *local_90;
  longlong local_88;
  ulonglong local_80;
  longlong local_78;
  longlong *local_70;
  longlong local_68;
  longlong local_60;
  code *local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_98 = param_3;
  local_68 = param_2;
  if ((param_5 == (longlong *)0x0) &&
     (param_5 = (longlong *)FUN_140717ab6(*param_1), param_5 == (longlong *)0x0))
  goto LAB_140f0a37e;
  plVar29 = param_1 + 1;
  local_a0 = param_4;
  local_90 = param_5;
  if (*(int *)(param_1 + 2) != *(int *)((longlong)param_1 + 0x3c)) {
    uVar5 = (uint)param_4;
    uVar20 = (uint)((ulonglong)param_4 >> 0x10);
    puVar14 = param_1 + 8;
    if ((undefined8 *)param_1[9] != (undefined8 *)0x0) {
      puVar14 = (undefined8 *)param_1[9];
    }
    uVar20 = *(uint *)((longlong)puVar14 +
                      (ulonglong)
                      (*(int *)(param_1 + 10) - 1U &
                      (uVar5 << 0x10 | uVar5 & 0xffff) + ((uVar5 & 0xffff) >> 4) +
                      (uVar20 << 0x13 | uVar20 & 0xffff)) * 4);
    if (uVar20 != 0xffffffff) {
      local_a8 = (longlong *)*plVar29;
      do {
        uVar27 = (ulonglong)uVar20;
        lVar7 = (longlong)(int)uVar20;
        if (*(uint *)((longlong)local_a8 + 0x18 + lVar7 * 0x80) == uVar5) goto LAB_140f09e53;
        uVar20 = *(uint *)(lVar7 * 0x80 + (longlong)local_a8 + 0x78);
      } while (uVar20 != 0xffffffff);
    }
  }
  puVar11 = &DAT_14c9485f0;
  if (*(undefined4 **)(local_98 + 8) != (undefined4 *)0x0) {
    puVar11 = *(undefined4 **)(local_98 + 8);
  }
  if (DAT_14c947fe0 == 0) {
    lVar7 = FUN_14001cc68(0x140,0x10);
    FUN_1456b2032(lVar7);
    DAT_14c947fe0 = lVar7;
  }
  FUN_140045924(DAT_14c947fe0,&local_58,puVar11,1);
  pcVar4 = local_58;
  local_a8 = plVar29;
  if (*(int *)((longlong)param_1 + 0x3c) == 0) {
    uVar20 = *(uint *)(param_1 + 2);
    uVar27 = (ulonglong)uVar20;
    *(uint *)(param_1 + 2) = uVar20 + 1;
    if (*(uint *)((longlong)param_1 + 0x14) == uVar20) {
      FUN_140eca382(plVar29,uVar20);
    }
    iVar19 = *(int *)(param_1 + 6);
    if (iVar19 == 0) {
      iVar16 = -1;
    }
    else {
      iVar16 = iVar19 + 0x1e;
      if (-1 < iVar19 + -1) {
        iVar16 = iVar19 + -1;
      }
      iVar16 = iVar16 >> 5;
    }
    puVar14 = param_1 + 3;
    iVar13 = iVar19 + 1;
    iVar18 = iVar19 + 0x1f;
    if (-1 < iVar19) {
      iVar18 = iVar19;
    }
    if (iVar18 >> 5 == iVar16) {
      *(int *)(param_1 + 6) = iVar13;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x34) <= iVar19) {
        iVar16 = iVar19;
        if (iVar19 + 0x20U < 0xa0) {
          iVar13 = 0x80;
        }
        else {
          uVar5 = iVar19 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x34) + 0x1fU < 0xa0) {
            uVar17 = 4;
            if (4 < uVar5) {
              uVar17 = uVar5;
            }
          }
          else {
            uVar17 = uVar5 + (uVar5 * 3 >> 3) + 0x10;
          }
          uVar8 = (ulonglong)(uVar17 * 4);
          if (DAT_14c872d28 != (longlong *)0x0) {
            if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
              uVar31 = (uint)(uVar8 + 0xf);
              if (uVar17 < 0x1ffd) {
                uVar8 = (ulonglong)
                        (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar8 + 0xf >> 4]];
              }
              else {
                uVar23 = (ulonglong)(uVar31 & 0xfffffff0);
                param_4 = local_a0;
                if (uVar23 < 0x7ff1) {
                  bVar12 = (&DAT_14c841e00)[uVar31 >> 4];
                  uVar26 = 0x32;
                  if (0x32 < bVar12) {
                    uVar26 = (ulonglong)bVar12;
                  }
                  uVar28 = 0x32 - (ulonglong)bVar12;
                  do {
                    uVar8 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar28 & 0xffffffff];
                    if (((&DAT_14c841d90)[uVar28 & 0xffffffff] & 0xf) == 0) goto LAB_140f09d91;
                    lVar7 = uVar26 + 1 + uVar28;
                    uVar28 = uVar28 - 1;
                  } while (lVar7 != 0x33);
                }
                uVar8 = 0x10;
                if (0x10 < DAT_14c841df8) {
                  uVar8 = (ulonglong)DAT_14c841df8;
                }
                uVar8 = -uVar8 & (uVar23 + uVar8) - 1;
              }
            }
            else {
              uVar8 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar8,0);
              iVar16 = *(int *)(param_1 + 6);
            }
          }
LAB_140f09d91:
          iVar6 = (int)(uVar8 >> 2);
          iVar13 = -0x20;
          if ((int)uVar5 <= iVar6) {
            iVar13 = iVar6 << 5;
          }
        }
        *(int *)((longlong)param_1 + 0x34) = iVar13;
        FUN_1446efbd8(puVar14,iVar16);
        iVar13 = *(int *)(param_1 + 6) + 1;
      }
      iVar16 = iVar13 + 0x1f;
      if (-1 < iVar13) {
        iVar16 = iVar13;
      }
      *(int *)(param_1 + 6) = iVar13;
      if (iVar13 % 0x20 != 0) {
        puVar21 = (undefined8 *)param_1[5];
        if ((undefined8 *)param_1[5] == (undefined8 *)0x0) {
          puVar21 = puVar14;
        }
        bVar12 = -(char)(iVar13 % 0x20);
        *(uint *)((longlong)puVar21 + (longlong)(iVar16 >> 5) * 4) =
             (uint)(*(int *)((longlong)puVar21 + (longlong)(iVar16 >> 5) * 4) << (bVar12 & 0x1f)) >>
             (bVar12 & 0x1f);
      }
    }
    lVar7 = (longlong)(int)uVar20;
    if ((undefined8 *)param_1[5] != (undefined8 *)0x0) {
      puVar14 = (undefined8 *)param_1[5];
    }
    bVar12 = (byte)iVar19 & 0x1f;
    puVar2 = (uint *)((longlong)puVar14 + (longlong)(iVar18 >> 5) * 4);
    *puVar2 = *puVar2 & (-2 << bVar12 | 0xfffffffeU >> 0x20 - bVar12);
  }
  else {
    uVar27 = (ulonglong)*(uint *)(param_1 + 7);
    lVar7 = (longlong)(int)*(uint *)(param_1 + 7);
    iVar19 = *(int *)(param_1[1] + 4 + lVar7 * 0x80);
    *(int *)(param_1 + 7) = iVar19;
    iVar16 = *(int *)((longlong)param_1 + 0x3c) + -1;
    *(int *)((longlong)param_1 + 0x3c) = iVar16;
    if (iVar16 != 0) {
      *(undefined4 *)(param_1[1] + (longlong)iVar19 * 0x80) = 0xffffffff;
    }
  }
  puVar2 = (uint *)(param_1 + 3);
  uVar20 = 1;
  iVar19 = (int)uVar27;
  puVar22 = (uint *)param_1[5];
  if ((uint *)param_1[5] == (uint *)0x0) {
    puVar22 = puVar2;
  }
  iVar16 = iVar19 + 0x1f;
  if (-1 < iVar19) {
    iVar16 = iVar19;
  }
  puVar22[iVar16 >> 5] = puVar22[iVar16 >> 5] | 1 << ((byte)uVar27 & 0x1f);
  lVar24 = param_1[1];
  lVar7 = lVar7 * 0x80;
  _Src = (void *)(lVar24 + lVar7);
  *(code **)(lVar24 + lVar7) = pcVar4;
  *(undefined4 *)(lVar24 + 8 + lVar7) = 0x3006;
  *(undefined8 *)(lVar24 + 0x10 + lVar7) = 0;
  *(longlong *)(lVar24 + 0x18 + lVar7) = param_4;
  puVar14 = (undefined8 *)(lVar24 + 0x20 + lVar7);
  *puVar14 = 0;
  puVar14[1] = 0;
  *(undefined4 *)(lVar24 + 0x30 + lVar7) = 0;
  puVar14 = (undefined8 *)(lVar24 + 0x38 + lVar7);
  *puVar14 = 0;
  puVar14[1] = 0;
  puVar14 = (undefined8 *)(lVar24 + 0x44 + lVar7);
  *puVar14 = 0;
  puVar14[1] = 0;
  *(undefined1 *)(lVar24 + 0x54 + lVar7) = 0xff;
  puVar14 = (undefined8 *)(lVar24 + 0x58 + lVar7);
  *puVar14 = 0;
  puVar14[1] = 0;
  puVar14 = (undefined8 *)(lVar24 + 0x68 + lVar7);
  *puVar14 = 0;
  puVar14[1] = 0;
  *(undefined4 *)(lVar24 + 0x78 + lVar7) = 0xffffffff;
  uVar31 = (uint)param_4;
  uVar5 = (uint)((ulonglong)param_4 >> 0x10);
  uVar5 = (uVar31 << 0x10 | uVar31 & 0xffff) + ((uVar31 & 0xffff) >> 4) +
          (uVar5 << 0x13 | uVar5 & 0xffff);
  uVar17 = *(int *)(param_1 + 2) - *(int *)((longlong)param_1 + 0x3c);
  if (1 < uVar17) {
    puVar14 = param_1 + 8;
    if ((undefined8 *)param_1[9] != (undefined8 *)0x0) {
      puVar14 = (undefined8 *)param_1[9];
    }
    uVar25 = *(uint *)((longlong)puVar14 + (ulonglong)(*(int *)(param_1 + 10) - 1U & uVar5) * 4);
    if (uVar25 != 0xffffffff) {
      do {
        _Dst = (void *)(*local_a8 + (longlong)(int)uVar25 * 0x80);
        if (*(uint *)(*local_a8 + 0x18 + (longlong)(int)uVar25 * 0x80) == uVar31) {
          FUN_14095cab0(_Dst);
          memmove(_Dst,_Src,0x78);
          FUN_143d0db7a(local_a8,uVar27);
          uVar27 = (ulonglong)uVar25;
          goto LAB_140f09e37;
        }
        uVar25 = *(uint *)((longlong)_Dst + 0x78);
      } while (uVar25 != 0xffffffff);
    }
  }
  if (3 < uVar17) {
    uVar8 = (ulonglong)(uVar17 & 0xfffffffe) + 0xf;
    lVar7 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    uVar20 = 1 << ((byte)lVar7 & 0x1f);
  }
  if (((int)uVar17 < 1) || ((int)uVar20 <= *(int *)(param_1 + 10))) {
    uVar5 = *(int *)(param_1 + 10) - 1U & uVar5;
    *(uint *)((longlong)_Src + 0x7c) = uVar5;
    puVar14 = (undefined8 *)param_1[9];
    if ((undefined8 *)param_1[9] == (undefined8 *)0x0) {
      puVar14 = param_1 + 8;
    }
    *(undefined4 *)((longlong)_Src + 0x78) =
         *(undefined4 *)
          ((longlong)puVar14 + ((longlong)*(int *)(param_1 + 10) - 1U & (longlong)(int)uVar5) * 4);
    puVar14 = (undefined8 *)param_1[9];
    if ((undefined8 *)param_1[9] == (undefined8 *)0x0) {
      puVar14 = param_1 + 8;
    }
    *(int *)((longlong)puVar14 + ((longlong)*(int *)(param_1 + 10) - 1U & (longlong)(int)uVar5) * 4)
         = iVar19;
  }
  else {
    *(uint *)(param_1 + 10) = uVar20;
    plVar29 = param_1 + 9;
    if (param_1[9] != 0) {
      FUN_1446efa72(plVar29,0,0,4);
      uVar20 = *(uint *)(param_1 + 10);
    }
    puVar14 = param_1 + 8;
    if (uVar20 == 1) {
      if (*plVar29 != 0) {
        FUN_1446efa72(plVar29,0,0,4);
      }
LAB_140f09b03:
      uVar5 = 0;
      do {
        puVar21 = (undefined8 *)param_1[9];
        if ((undefined8 *)param_1[9] == (undefined8 *)0x0) {
          puVar21 = puVar14;
        }
        *(undefined4 *)
         ((longlong)puVar21 + (ulonglong)(*(int *)(param_1 + 10) + 0x7fffffffU & uVar5) * 4) =
             0xffffffff;
        uVar5 = uVar5 + 1;
      } while (uVar20 != uVar5);
    }
    else {
      if (uVar20 == 0) goto LAB_140f09e37;
      FUN_1446efa72(plVar29,0,uVar20,4);
      if (0 < (int)uVar20) goto LAB_140f09b03;
    }
    iVar19 = *(int *)(param_1 + 6);
    if (iVar19 == 0) {
      uVar8 = 0;
      uVar23 = 1;
      iVar16 = 0;
      iVar13 = 0;
    }
    else {
      puVar22 = (uint *)param_1[5];
      if ((uint *)param_1[5] == (uint *)0x0) {
        puVar22 = puVar2;
      }
      uVar20 = *puVar22;
      if (uVar20 == 0) {
        iVar16 = iVar19 + 0x1e;
        if (-1 < iVar19 + -1) {
          iVar16 = iVar19 + -1;
        }
        uVar8 = 0;
        uVar23 = (ulonglong)(uint)(iVar16 >> 5);
        if (iVar16 >> 5 < 1) {
          uVar23 = uVar8;
        }
        iVar13 = 0;
        do {
          if (uVar23 == uVar8) goto LAB_140f09e37;
          iVar13 = iVar13 + 0x20;
          uVar20 = puVar22[uVar8 + 1];
          uVar8 = uVar8 + 1;
        } while (uVar20 == 0);
      }
      else {
        uVar8 = 0;
        iVar13 = 0;
      }
      uVar23 = (ulonglong)(-uVar20 & uVar20);
      uVar26 = uVar23 * 2 + 1;
      lVar7 = 0x3f;
      if (uVar26 != 0) {
        for (; uVar26 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar16 = (iVar13 - ((uint)lVar7 ^ 0x3f)) + 0x3e;
      if (iVar19 <= iVar16) {
        iVar16 = iVar19;
      }
    }
    if (iVar16 < iVar19) {
      uVar20 = 0xffffffff;
      do {
        lVar7 = param_1[1];
        lVar24 = (longlong)iVar16 * 0x80;
        uVar5 = *(uint *)(lVar7 + 0x18 + lVar24);
        uVar26 = (longlong)
                 (int)((uVar5 << 0x10 | uVar5 & 0xffff) + ((uVar5 & 0xffff) >> 4) +
                      ((uVar5 >> 0x10) << 0x13 | uVar5 >> 0x10)) &
                 (longlong)*(int *)(param_1 + 10) - 1U;
        iVar19 = (int)uVar26;
        *(int *)(lVar7 + 0x7c + lVar24) = iVar19;
        puVar21 = (undefined8 *)param_1[9];
        if ((undefined8 *)param_1[9] == (undefined8 *)0x0) {
          puVar21 = puVar14;
        }
        *(undefined4 *)(lVar7 + 0x78 + lVar24) =
             *(undefined4 *)
              ((longlong)puVar21 + ((longlong)*(int *)(param_1 + 10) - 1U & uVar26) * 4);
        puVar21 = (undefined8 *)param_1[9];
        if ((undefined8 *)param_1[9] == (undefined8 *)0x0) {
          puVar21 = puVar14;
        }
        *(int *)((longlong)puVar21 + ((longlong)iVar19 & (longlong)*(int *)(param_1 + 10) - 1U) * 4)
             = iVar16;
        uVar20 = ~(uint)uVar23 & uVar20;
        puVar22 = (uint *)param_1[5];
        if ((uint *)param_1[5] == (uint *)0x0) {
          puVar22 = puVar2;
        }
        iVar19 = *(int *)(param_1 + 6);
        iVar16 = (int)uVar8;
        lVar7 = (longlong)iVar16;
        uVar5 = puVar22[lVar7] & uVar20;
        param_4 = local_a0;
        if (uVar5 == 0) {
          iVar18 = iVar19 + 0x1e;
          if (-1 < iVar19 + -1) {
            iVar18 = iVar19 + -1;
          }
          iVar18 = iVar18 >> 5;
          iVar6 = iVar18;
          if (iVar18 < iVar16) {
            iVar6 = iVar16;
          }
          if (iVar18 <= iVar16) break;
          lVar24 = 0;
          while( true ) {
            iVar13 = iVar13 + 0x20;
            uVar5 = puVar22[lVar7 + lVar24 + 1];
            if (uVar5 != 0) break;
            lVar24 = lVar24 + 1;
            if (iVar6 - lVar7 == lVar24) goto LAB_140f09e37;
          }
          uVar8 = (ulonglong)(iVar16 + (int)lVar24 + 1);
          uVar20 = 0xffffffff;
        }
        uVar23 = (ulonglong)(-uVar5 & uVar5);
        uVar26 = uVar23 * 2 + 1;
        lVar7 = 0x3f;
        if (uVar26 != 0) {
          for (; uVar26 >> lVar7 == 0; lVar7 = lVar7 + -1) {
          }
        }
        iVar16 = (iVar13 - ((uint)lVar7 ^ 0x3f)) + 0x3e;
      } while (iVar16 < iVar19);
    }
  }
LAB_140f09e37:
  FUN_14095cb81(0,0);
  local_a8 = (longlong *)*local_a8;
  lVar7 = (longlong)(int)uVar27;
LAB_140f09e53:
  plVar29 = local_90;
  piVar1 = (int *)((longlong)local_a8 + 0x20 + lVar7 * 0x80);
  *piVar1 = *piVar1 + 1;
  bVar12 = *(byte *)(local_98 + 0x18);
  if ((bVar12 & 1) != 0) {
    *(int *)(param_1 + 0xb) = (int)uVar27;
    bVar12 = *(byte *)(local_98 + 0x18);
  }
  if ((bVar12 & 4) != 0) {
    *(int *)((longlong)param_1 + 0x5c) = *(int *)((longlong)param_1 + 0x5c) + 1;
  }
  plVar9 = (longlong *)param_1[0xc];
  iVar19 = *(int *)(param_1 + 0xd);
  lVar24 = (longlong)iVar19;
  if (lVar24 != 0) {
    lVar15 = lVar24 * 0x68;
    plVar30 = plVar9;
    do {
      if ((longlong *)*plVar30 == local_90) {
        if (plVar30 != (longlong *)0x0) goto LAB_140f09f21;
        break;
      }
      plVar30 = plVar30 + 0xd;
      lVar15 = lVar15 + -0x68;
    } while (lVar15 != 0);
  }
  plVar30 = param_1 + 0xc;
  *(uint *)(param_1 + 0xd) = iVar19 + 1U;
  if (*(uint *)((longlong)param_1 + 0x6c) < iVar19 + 1U) {
    FUN_14187cc5c(plVar30,iVar19);
    plVar9 = (longlong *)*plVar30;
  }
  plVar9[lVar24 * 0xd + 10] = 0;
  (plVar9 + lVar24 * 0xd + 10)[1] = 0;
  plVar9[lVar24 * 0xd + 8] = 0;
  (plVar9 + lVar24 * 0xd + 8)[1] = 0;
  plVar9[lVar24 * 0xd + 6] = 0;
  (plVar9 + lVar24 * 0xd + 6)[1] = 0;
  plVar9[lVar24 * 0xd + 4] = 0;
  (plVar9 + lVar24 * 0xd + 4)[1] = 0;
  plVar9[lVar24 * 0xd + 2] = 0;
  (plVar9 + lVar24 * 0xd + 2)[1] = 0;
  plVar9[lVar24 * 0xd] = 0;
  (plVar9 + lVar24 * 0xd)[1] = 0;
  plVar9[lVar24 * 0xd + 0xc] = 0;
  plVar30 = (longlong *)(lVar24 * 0x68 + *plVar30);
  if (DAT_14c950c29 == '\x01') {
    FUN_1456cec3c(plVar29);
  }
  *plVar30 = (longlong)plVar29;
LAB_140f09f21:
  *(int *)(plVar30 + 0xc) = (int)plVar30[0xc] + 1;
  local_a8 = (longlong *)((longlong)local_a8 + lVar7 * 0x80);
  if ((int)param_6[1] < 1) {
    *(int *)(plVar30 + 1) = (int)uVar27;
    if ((*(byte *)(local_98 + 0x18) & 4) != 0) {
      if (DAT_14cac6e60 == 0) {
        local_c0 = &local_58;
        local_58 = FUN_144a7958c;
        local_b0 = FUN_14081d0ea;
        local_b8 = FUN_142b47bc4;
        local_c8 = &LAB_1478989f1;
        local_d0 = &LAB_146391124;
        local_d8 = L"Engine";
        local_e0 = 0x10000000000;
        local_e8 = 0x10000005;
        local_f0 = 0x10;
        local_f8 = 0x620;
        FUN_14081cfa3(L"/Script/Engine",L"PrimitiveComponent",&DAT_14cac6e60,FUN_146391102);
      }
      if ((*(int *)(DAT_14cac6e60 + 0x38) <= *(int *)(plVar29[2] + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(plVar29[2] + 0x30) + (longlong)*(int *)(DAT_14cac6e60 + 0x38) * 8) ==
          DAT_14cac6e60 + 0x30)) {
        FUN_148821fff((longlong)local_a8 + 0x68,plVar29);
      }
    }
  }
  else {
    if (DAT_14cb63950 == 0) {
      local_c0 = &local_58;
      local_58 = FUN_144a7958c;
      local_b0 = FUN_14081d0ea;
      local_b8 = (code *)&LAB_1464ec72a;
      local_c8 = &LAB_1486f5f75;
      local_d0 = &LAB_140945686;
      local_d8 = L"Engine";
      local_e0 = 0;
      local_e8 = 0x10000004;
      local_f0 = 0x10;
      local_f8 = 0x19d0;
      FUN_14081cfa3(L"/Script/GbxGame",L"GbxSkeletalMeshComponent",&DAT_14cb63950,FUN_1464fe8ee);
    }
    if (((*(int *)(DAT_14cb63950 + 0x38) <= *(int *)(plVar29[2] + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(plVar29[2] + 0x30) + (longlong)*(int *)(DAT_14cb63950 + 0x38) * 8) ==
         DAT_14cb63950 + 0x30)) && (lVar7 = (**(code **)(*plVar29 + 0xb98))(plVar29), lVar7 != 0)) {
      local_58 = (code *)0x0;
      uStack_50 = 0;
      if ((longlong)(int)param_6[1] != 0) {
        plVar29 = (longlong *)*param_6;
        local_70 = plVar29 + (int)param_6[1];
        local_88 = (longlong)local_a8 + 0x68;
        local_78 = lVar7 + 0xd0;
        local_80 = uVar27;
        do {
          plVar9 = local_90;
          lVar24 = *plVar29;
          local_60 = lVar24;
          if (param_7 == '\0') {
            if (*(int *)(lVar7 + 0xa0) != *(int *)(lVar7 + 0xcc)) {
              uVar20 = (uint)((ulonglong)lVar24 >> 0x10);
              uVar5 = (uint)lVar24 & 0xffff;
              uVar20 = (int)((ulonglong)lVar24 >> 0x20) + ((uint)lVar24 << 0x10 | uVar5) +
                       (uVar20 << 0x13 | uVar20 & 0xffff) + (uVar5 >> 4);
              lVar15 = *(longlong *)(lVar7 + 0xd8);
              if (*(longlong *)(lVar7 + 0xd8) == 0) {
                lVar15 = local_78;
              }
              iVar19 = *(int *)(lVar15 + (ulonglong)(*(int *)(lVar7 + 0xe0) - 1U & uVar20) * 4);
              if (iVar19 != -1) {
                do {
                  plVar9 = (longlong *)(*(longlong *)(lVar7 + 0x98) + (longlong)iVar19 * 0x14);
                  if (*plVar9 == lVar24) {
                    if (((plVar9 != (longlong *)0x0) && (plVar9 + 1 != (longlong *)0x0)) &&
                       (iVar19 = (int)plVar9[1], iVar19 != -1)) {
                      puVar11 = (undefined4 *)FUN_14187cdce(plVar30 + 2,uVar20,&local_60);
                      *puVar11 = (int)local_80;
                      if ((*(byte *)(local_98 + 0x18) & 4) != 0) {
                        FUN_148822122(local_88,local_90,lVar7,iVar19);
                      }
                    }
                    break;
                  }
                  iVar19 = *(int *)((longlong)plVar9 + 0xc);
                } while (iVar19 != -1);
              }
            }
          }
          else {
            bVar32 = (longlong)uStack_50 < 0;
            uStack_50 = uStack_50 & 0xffffffff00000000;
            if (bVar32) {
              FUN_14481578e(&local_58,0);
            }
            plVar9 = (longlong *)FUN_140418574(plVar9);
            if (plVar9 != (longlong *)0x0) {
              uVar10 = (**(code **)(*plVar9 + 0x308))(plVar9);
              local_f8 = CONCAT31(local_f8._1_3_,1);
              FUN_1404181c0(lVar7,&local_58,lVar24,uVar10);
            }
            if ((*(byte *)(local_98 + 0x18) & 4) != 0) {
              iVar19 = *(int *)((longlong)local_a8 + 0x70) + (int)uStack_50;
              if (iVar19 < 0) {
                    /* WARNING: Subroutine does not return */
                FUN_1456afac4(iVar19);
              }
              if (*(int *)((longlong)local_a8 + 0x74) < iVar19) {
                FUN_1488240a8(local_88);
              }
            }
            pcVar4 = local_58;
            if ((int)uStack_50 != 0) {
              lVar15 = (longlong)(int)uStack_50;
              lVar24 = 0;
              do {
                iVar19 = *(int *)(pcVar4 + lVar24);
                if (((-1 < (longlong)iVar19) && (iVar19 < *(int *)(lVar7 + 0x48))) &&
                   (lVar3 = *(longlong *)(*(longlong *)(lVar7 + 0x40) + (longlong)iVar19 * 8),
                   lVar3 != 0)) {
                  uVar10 = *(undefined8 *)(lVar3 + 0x28);
                  uVar20 = (uint)((ulonglong)uVar10 >> 0x10);
                  uVar5 = (uint)uVar10 & 0xffff;
                  puVar11 = (undefined4 *)
                            FUN_14187cdce(plVar30 + 2,
                                          ((uint)uVar10 << 0x10 | uVar5) +
                                          (int)((ulonglong)uVar10 >> 0x20) +
                                          (uVar20 << 0x13 | uVar20 & 0xffff) + (uVar5 >> 4),
                                          lVar3 + 0x28);
                  *puVar11 = (int)local_80;
                  if ((*(byte *)(local_98 + 0x18) & 4) != 0) {
                    FUN_148822122(local_88,local_90,lVar7,iVar19);
                  }
                }
                lVar24 = lVar24 + 4;
              } while (lVar15 * 4 != lVar24);
            }
          }
          param_4 = local_a0;
          plVar29 = plVar29 + 1;
        } while (plVar29 != local_70);
        if (local_58 != (code *)0x0) {
          FUN_1400020a8();
        }
      }
    }
  }
  plVar29 = local_a8;
  if ((*(byte *)(local_68 + 0x55) & 1) != 0) {
    FUN_140ecef3c(local_a8);
  }
  uVar27 = (ulonglong)*(int *)(param_1 + 0xf);
  if ((0 < (longlong)uVar27) && (*(int *)((longlong)plVar29 + 0x20) == 1)) {
    plVar9 = param_1 + 0xe;
    lVar7 = uVar27 << 4;
    do {
      lVar7 = lVar7 + -0x10;
      lVar24 = *plVar9;
      if (*(longlong *)(*(longlong *)(lVar24 + lVar7) + 0x50) == param_4) {
        iVar19 = *(int *)((longlong)plVar29 + 0x60);
        *(uint *)((longlong)plVar29 + 0x60) = iVar19 + 1U;
        if (*(uint *)((longlong)plVar29 + 100) < iVar19 + 1U) {
          FUN_14110ea14((longlong *)((longlong)plVar29 + 0x58),iVar19);
        }
        lVar15 = *(longlong *)((longlong)plVar29 + 0x58);
        *(undefined8 *)(lVar15 + (longlong)iVar19 * 0x10) = *(undefined8 *)(lVar24 + lVar7);
        lVar24 = *(longlong *)(lVar24 + 8 + lVar7);
        *(longlong *)(lVar15 + 8 + (longlong)iVar19 * 0x10) = lVar24;
        if (lVar24 != 0) {
          LOCK();
          *(int *)(lVar24 + 8) = *(int *)(lVar24 + 8) + 1;
          UNLOCK();
        }
        FUN_148824108(plVar9,(int)uVar27 + -1);
        FUN_1488236be(plVar9);
        param_4 = local_a0;
      }
      bVar32 = 1 < uVar27;
      uVar27 = uVar27 - 1;
    } while (bVar32);
  }
LAB_140f0a37e:
  if ((local_48 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f0a5e2 FUN_140f0a5e2 body=1169 status=ok
// SIG undefined FUN_140f0a5e2(void)

undefined8 FUN_140f0a5e2(undefined8 param_1,longlong *param_2,longlong *param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  byte bVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_b8 [32];
  longlong local_98;
  longlong local_90;
  undefined8 local_88;
  undefined4 local_80;
  longlong local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  uVar5 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_60 = uVar5;
  for (; param_4 != 0; param_4 = param_4 + -1) {
    if (param_3 == param_2) {
      *(undefined4 *)((longlong)param_2 + 0x27) = *(undefined4 *)((longlong)param_3 + 0x27);
      uVar1 = *(undefined4 *)((longlong)param_3 + 0x1c);
      lVar7 = param_3[4];
      uVar2 = *(undefined4 *)((longlong)param_3 + 0x24);
      *(int *)(param_2 + 3) = (int)param_3[3];
      *(undefined4 *)((longlong)param_2 + 0x1c) = uVar1;
      *(int *)(param_2 + 4) = (int)lVar7;
      *(undefined4 *)((longlong)param_2 + 0x24) = uVar2;
    }
    else {
      local_78 = 0;
      uStack_70 = 0;
      lVar7 = param_3[1];
      if ((longlong)(int)lVar7 != 0) {
        local_90 = *param_3;
        lVar6 = 0;
        do {
          if ((*(int *)(local_90 + 8 + lVar6) != 0) &&
             (*(longlong **)(local_90 + lVar6) != (longlong *)0x0)) {
            local_88 = 0;
            local_80 = 0;
            (**(code **)(**(longlong **)(local_90 + lVar6) + 0x40))();
            local_98 = (longlong)(int)uStack_70;
            uVar4 = (int)uStack_70 + 1;
            uStack_70 = CONCAT44(uStack_70._4_4_,uVar4);
            if (uStack_70._4_4_ < uVar4) {
              FUN_1447a71f6(&local_78);
            }
            lVar8 = local_98 * 0x10;
            *(undefined8 *)(local_78 + lVar8) = 0;
            *(undefined4 *)(local_78 + 8 + lVar8) = 0;
            *(undefined8 *)(local_78 + lVar8) = local_88;
            local_88 = 0;
            *(undefined4 *)(local_78 + 8 + lVar8) = local_80;
            local_80 = 0;
            FUN_1449db362(&local_88);
          }
          lVar6 = lVar6 + 0x10;
        } while ((longlong)(int)lVar7 * 0x10 != lVar6);
      }
      FUN_1448a8284(param_2);
      if (&local_78 == param_2) {
        uVar5 = uStack_70 & 0xffffffff;
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
        uVar5 = 0;
      }
      FUN_144760e21(local_78,uVar5);
      if (local_78 != 0) {
        FUN_1400020a8();
      }
      *(undefined4 *)((longlong)param_2 + 0x27) = *(undefined4 *)((longlong)param_3 + 0x27);
      uVar1 = *(undefined4 *)((longlong)param_3 + 0x1c);
      lVar7 = param_3[4];
      uVar2 = *(undefined4 *)((longlong)param_3 + 0x24);
      *(int *)(param_2 + 3) = (int)param_3[3];
      *(undefined4 *)((longlong)param_2 + 0x1c) = uVar1;
      *(int *)(param_2 + 4) = (int)lVar7;
      *(undefined4 *)((longlong)param_2 + 0x24) = uVar2;
      if ((char)param_3[9] == '\x01') {
        param_2[8] = param_3[8];
        uVar1 = *(undefined4 *)((longlong)param_3 + 0x34);
        lVar7 = param_3[7];
        uVar2 = *(undefined4 *)((longlong)param_3 + 0x3c);
        *(int *)(param_2 + 6) = (int)param_3[6];
        *(undefined4 *)((longlong)param_2 + 0x34) = uVar1;
        *(int *)(param_2 + 7) = (int)lVar7;
        *(undefined4 *)((longlong)param_2 + 0x3c) = uVar2;
        *(undefined1 *)(param_2 + 9) = 1;
      }
      else if ((char)param_2[9] == '\x01') {
        *(undefined1 *)(param_2 + 9) = 0;
      }
    }
    *(undefined1 *)((longlong)param_2 + 0x52) = *(undefined1 *)((longlong)param_3 + 0x52);
    *(short *)(param_2 + 10) = (short)param_3[10];
    lVar7 = param_3[0xb];
    if (DAT_14c950c29 == 1) {
      if (lVar7 == 0) {
        lVar7 = 0;
      }
      else {
        FUN_1456cec3c();
        lVar7 = param_3[0xb];
      }
    }
    param_2[0xb] = lVar7;
    FUN_144983130(param_2 + 0xc,param_3 + 0xc);
    FUN_144983130(param_2 + 0x13,param_3 + 0x13);
    *(short *)(param_2 + 0x1a) = (short)param_3[0x1a];
    *(undefined1 *)((longlong)param_2 + 0xd2) = *(undefined1 *)((longlong)param_3 + 0xd2);
    FUN_144983130(param_2 + 0x1b,param_3 + 0x1b);
    lVar7 = param_3[0x22];
    if (DAT_14c950c29 == 1) {
      if (lVar7 == 0) {
        lVar7 = 0;
      }
      else {
        FUN_1456cec3c();
        lVar7 = param_3[0x22];
      }
    }
    bVar3 = DAT_14c950c29;
    param_2[0x22] = lVar7;
    param_2[0x23] = param_3[0x23];
    lVar7 = param_3[0x24];
    if ((bVar3 & 1) != 0) {
      if (lVar7 == 0) {
        lVar7 = 0;
      }
      else {
        FUN_1456cec3c();
        lVar7 = param_3[0x24];
        bVar3 = DAT_14c950c29;
      }
    }
    param_2[0x24] = lVar7;
    lVar7 = param_3[0x25];
    if ((bVar3 & 1) != 0) {
      if (lVar7 == 0) {
        lVar7 = 0;
      }
      else {
        FUN_1456cec3c();
        lVar7 = param_3[0x25];
        bVar3 = DAT_14c950c29;
      }
    }
    param_2[0x25] = lVar7;
    lVar7 = param_3[0x26];
    if ((bVar3 & 1) != 0) {
      if (lVar7 == 0) {
        lVar7 = 0;
      }
      else {
        FUN_1456cec3c();
        lVar7 = param_3[0x26];
        bVar3 = DAT_14c950c29;
      }
    }
    param_2[0x26] = lVar7;
    lVar7 = param_3[0x27];
    if ((bVar3 & 1) != 0) {
      if (lVar7 == 0) {
        lVar7 = 0;
      }
      else {
        FUN_1456cec3c();
        lVar7 = param_3[0x27];
      }
    }
    param_2[0x27] = lVar7;
    FUN_140f0aa74(param_2 + 0x28,param_3 + 0x28);
    FUN_140f0aa74(param_2 + 0x4d,param_3 + 0x4d);
    lVar7 = param_3[0x72];
    if (DAT_14c950c29 == 1) {
      if (lVar7 == 0) {
        lVar7 = 0;
      }
      else {
        FUN_1456cec3c();
        lVar7 = param_3[0x72];
      }
    }
    param_2[0x72] = lVar7;
    *(int *)(param_2 + 0x73) = (int)param_3[0x73];
    FUN_140f0aa74(param_2 + 0x74,param_3 + 0x74);
    *(char *)(param_2 + 0x99) = (char)param_3[0x99];
    uVar5 = param_3[0x9a];
    param_2[0x9a] = uVar5;
    param_3 = param_3 + 0x9b;
    param_2 = param_2 + 0x9b;
  }
  if ((local_60 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return CONCAT71((int7)(uVar5 >> 8),1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f0aa74 FUN_140f0aa74 body=260 status=ok
// SIG undefined FUN_140f0aa74(void)

longlong * FUN_140f0aa74(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (DAT_14c950c29 == 1) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = *param_2;
    }
  }
  bVar1 = DAT_14c950c29;
  *param_1 = lVar2;
  lVar2 = param_2[1];
  if ((bVar1 & 1) != 0) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = param_2[1];
      bVar1 = DAT_14c950c29;
    }
  }
  param_1[1] = lVar2;
  lVar2 = param_2[2];
  if ((bVar1 & 1) != 0) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = param_2[2];
    }
  }
  param_1[2] = lVar2;
  *(short *)(param_1 + 3) = (short)param_2[3];
  FUN_144983130(param_1 + 4,param_2 + 4);
  FUN_144983130(param_1 + 0xb,param_2 + 0xb);
  FUN_144983130(param_1 + 0x12,param_2 + 0x12);
  FUN_144983130(param_1 + 0x19,param_2 + 0x19);
  FUN_1403de7ba(param_1 + 0x20,param_2 + 0x20);
  *(char *)(param_1 + 0x24) = (char)param_2[0x24];
  return param_1;
}



// FUNCTION 140f0ab84 FUN_140f0ab84 body=337 status=ok
// SIG undefined FUN_140f0ab84(void)

void FUN_140f0ab84(longlong param_1,longlong *param_2)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (((((*(byte *)(*(longlong *)(param_1 + 0x5a8) + 0x65) & 2) == 0) &&
       (*(longlong *)(param_1 + 0x5d0) != 0)) &&
      (*(char *)(*(longlong *)(param_1 + 0x5d0) + 0x19) == '\0')) &&
     (((*(char *)(param_1 + 0x18) != '\x01' && (param_2 != (longlong *)0x0)) &&
      (*(longlong *)(param_1 + 0x1b0) == 0)))) {
    lVar3 = (**(code **)(*param_2 + 0xe0))(param_2);
    if (lVar3 != 0) {
      lVar3 = (**(code **)(*param_2 + 0xe0))(param_2);
      puVar5 = &DAT_14c9485f0;
      if (*(undefined4 **)(lVar3 + 8) != (undefined4 *)0x0) {
        puVar5 = *(undefined4 **)(lVar3 + 8);
      }
      FUN_1447325ac(puVar5,&local_50,1);
      local_48 = local_50;
      local_40 = 0x3002;
      local_38 = 0;
      lVar3 = FUN_1488bbc76(param_1);
      if (lVar3 != 0) {
        cVar1 = (**(code **)(*param_2 + 0x40))(param_2);
        if (cVar1 == '\0') {
          uVar2 = rand();
          if (*(float *)(lVar3 + 0xd4) < (float)(uVar2 & 0x7fff) / 32767.0) goto LAB_140f0abc0;
        }
        uVar4 = (**(code **)(*param_2 + 0x108))(param_2);
        (**(code **)(*param_2 + 0xb0))(param_2,&local_48);
        FUN_143d90fd2(param_1,&local_48,lVar3,uVar4);
      }
    }
  }
LAB_140f0abc0:
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f0acd6 FUN_140f0acd6 body=24 status=ok
// SIG undefined FUN_140f0acd6(void)

void FUN_140f0acd6(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000140f0acea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 140f0acee FUN_140f0acee body=53 status=ok
// SIG undefined FUN_140f0acee(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140f0acee(undefined8 *param_1,int param_2)

{
  FUN_140f0ad24();
  if (param_2 != 0) {
    _DAT_14cb8aa74 = _DAT_14cb8aa74 + -1;
    *param_1 = DAT_14cb8aa68;
    DAT_14cb8aa68 = param_1;
  }
  return param_1;
}



// FUNCTION 140f0ad24 FUN_140f0ad24 body=332 status=ok
// SIG undefined FUN_140f0ad24(void)

void FUN_140f0ad24(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  
  *param_1 = &PTR_FUN_14b4256f8;
  param_1[1] = &PTR_FUN_14b425710;
  param_1[5] = &PTR_FUN_14b425728;
  if (*(char *)((longlong)param_1 + 0x25c) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x25c) = 0;
  }
  puVar5 = param_1 + 0x21;
  if ((undefined8 *)param_1[0x49] != (undefined8 *)0x0) {
    puVar5 = (undefined8 *)param_1[0x49];
  }
  FUN_140f0ae70(puVar5,*(undefined4 *)(param_1 + 0x4a));
  if (param_1[0x49] != 0) {
    FUN_1400020a8();
  }
  FUN_1448173f8(param_1 + 0x14);
  cVar3 = *(char *)(param_1 + 0xf);
  if (cVar3 != '\0') {
    if (cVar3 == '\x01') {
      param_1[0x10] = 0;
    }
    else if ((cVar3 == '\x03') && (plVar4 = (longlong *)param_1[0x11], plVar4 != (longlong *)0x0)) {
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))();
      }
    }
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  FUN_1448173f8(param_1 + 0xe);
  cVar3 = *(char *)(param_1 + 9);
  if (cVar3 != '\0') {
    if (cVar3 == '\x01') {
      param_1[10] = 0;
    }
    else if ((cVar3 == '\x03') && (plVar4 = (longlong *)param_1[0xb], plVar4 != (longlong *)0x0)) {
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))();
      }
    }
    *(undefined1 *)(param_1 + 9) = 0;
  }
  FUN_140d2f728(param_1 + 5);
  param_1[1] = &PTR_LAB_14b242fd0;
  plVar4 = (longlong *)param_1[3];
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
                    /* WARNING: Could not recover jumptable at 0x000140f0ae6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar4 + 0x10))(plVar4);
        return;
      }
    }
  }
  return;
}



// FUNCTION 140f0ae70 FUN_140f0ae70 body=40 status=ok
// SIG undefined FUN_140f0ae70(void)

void FUN_140f0ae70(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_14896ca18(param_1);
    param_1 = param_1 + 0x40;
  }
  return;
}



// FUNCTION 140f0ae98 FUN_140f0ae98 body=300 status=ok
// SIG undefined FUN_140f0ae98(void)

undefined8 FUN_140f0ae98(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

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
    if (iVar1 == 2) goto LAB_140f0afbd;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_140f0afbd;
    }
    FUN_140192332(param_1 + 0x18,&local_40,0);
  }
  else {
LAB_140f0afbd:
    local_40 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_140f0af66;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5,param_2,param_3,param_4);
      uVar6 = 1;
      goto LAB_140f0af66;
    }
  }
  uVar6 = 0;
LAB_140f0af66:
  if ((local_40 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_40);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f0afcc FUN_140f0afcc body=641 status=ok
// SIG undefined FUN_140f0afcc(void)

void FUN_140f0afcc(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  uint uVar2;
  longlong *plVar3;
  undefined1 *puVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_148 [32];
  longlong *local_128;
  undefined8 local_120;
  longlong local_118;
  uint local_110;
  int iStack_10c;
  undefined4 local_108;
  undefined4 local_104;
  longlong *local_100;
  longlong *local_f8;
  undefined2 local_f0;
  undefined8 local_e8;
  longlong local_e0;
  uint local_d8;
  int iStack_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined1 local_c8 [128];
  undefined1 *local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_48 = (undefined1 *)0x0;
  local_40 = 0x1000000000;
  plVar3 = (longlong *)(param_1 + 0x60);
  local_e0 = param_1 + 0x70;
  local_e8 = 0x100000000;
  local_d8 = 0xffffffff;
  iStack_d4 = 0;
  local_d0 = 0;
  if (*(int *)(param_1 + 0x88) != 0) {
    FUN_1449c0562(&local_e8);
  }
  local_110 = local_d8;
  iStack_10c = iStack_d4;
  local_108 = local_d0;
  local_104 = local_cc;
  local_120 = local_e8;
  local_118 = local_e0;
  local_f0 = 0;
  local_128 = plVar3;
  local_100 = plVar3;
  local_f8 = plVar3;
  if (iStack_d4 < *(int *)(local_e0 + 0x18)) {
    do {
      local_e8 = CONCAT44(*(undefined4 *)(*local_128 + 4 + (longlong)iStack_10c * 0x78),
                          *(undefined4 *)(*local_128 + (longlong)iStack_10c * 0x78));
      plVar3 = (longlong *)FUN_14479d2ce(&local_e8);
      if (plVar3 == (longlong *)0x0) {
        FUN_1477022a2(local_100);
        local_f0 = CONCAT11(local_f0._1_1_,1);
      }
      else if ((*(char *)(*local_128 + 0x4c + (longlong)iStack_10c * 0x78) == '\x01') &&
              (lVar6 = (**(code **)(*plVar3 + 0x180))(plVar3), uVar1 = local_40, lVar6 == param_2))
      {
        lVar6 = (longlong)(int)local_40;
        uVar2 = (int)local_40 + 1;
        local_40 = CONCAT44(local_40._4_4_,uVar2);
        if (local_40._4_4_ < uVar2) {
          FUN_1477023da(local_c8,uVar1 & 0xffffffff);
        }
        puVar4 = local_48;
        if (local_48 == (undefined1 *)0x0) {
          puVar4 = local_c8;
        }
        *(longlong **)(puVar4 + lVar6 * 8) = plVar3;
      }
      local_110 = local_110 & ~local_120._4_4_;
      FUN_1449c0562(&local_120);
    } while (iStack_10c < *(int *)(local_118 + 0x18));
    if (((local_f0 & 1) != 0) && (local_f0._1_1_ == '\x01')) {
      FUN_1477020c0(local_f8,(int)local_f8[1] - *(int *)((longlong)local_f8 + 0x34));
    }
  }
  puVar4 = local_48;
  if (local_48 == (undefined1 *)0x0) {
    puVar4 = local_c8;
  }
  lVar6 = (longlong)(int)local_40;
  if (lVar6 != 0) {
    lVar5 = 0;
    do {
      (**(code **)(**(longlong **)(puVar4 + lVar5) + 0x2c0))();
      lVar5 = lVar5 + 8;
    } while (lVar6 * 8 != lVar5);
  }
  if (local_48 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140f0b24e FUN_140f0b24e body=889 status=ok
// SIG undefined FUN_140f0b24e(void)

void FUN_140f0b24e(void)

{
  float *pfVar1;
  float fVar2;
  void *pvVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_78 [40];
  void *local_50;
  int local_48;
  undefined4 local_44;
  int local_40;
  void *local_38;
  int local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (DAT_14c7615b4 != DAT_14c7615b8) {
    DAT_14c7615b8 = DAT_14c7615b4;
    FUN_1457c651a();
    pvVar3 = local_38;
    local_50 = (void *)0x0;
    lVar8 = (longlong)local_30;
    local_48 = local_30;
    if (lVar8 == 0) {
      local_44 = 0;
      local_40 = local_28;
      iVar7 = 0;
    }
    else {
      FUN_14010590e(&local_50,local_30,0);
      memcpy(local_50,pvVar3,lVar8 << 3);
      local_40 = local_28;
      iVar7 = local_30;
    }
joined_r0x000140f0b35e:
    if (local_40 != iVar7) {
      FUN_147ba37ca(*(undefined8 *)((longlong)local_50 + (longlong)local_40 * 8));
      lVar8 = (longlong)local_40;
      do {
        lVar8 = lVar8 + 1;
        local_40 = (int)lVar8;
        if (local_48 <= lVar8) break;
      } while (*(longlong *)((longlong)local_50 + lVar8 * 8) == 0);
      goto joined_r0x000140f0b35e;
    }
    if (local_50 != (void *)0x0) {
      FUN_1400020a8();
    }
    if (local_38 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cae9918) &&
     (FUN_144b3d300(), pvVar3 = DAT_14cae98e0, DAT_14cae9918 == -1)) {
    DAT_14cae9908 = (void *)0x0;
    lVar8 = (longlong)(int)DAT_14cae98e8;
    DAT_14cae9910 = DAT_14cae98e8;
    if (lVar8 == 0) {
      DAT_14cae9914 = 0;
    }
    else {
      FUN_1447c510a(&DAT_14cae9908,DAT_14cae98e8,0);
      memcpy(DAT_14cae9908,pvVar3,lVar8 << 2);
    }
    atexit((_func_5014 *)&LAB_143567864);
    _Init_thread_footer();
  }
  FUN_140f0b5c8();
  uVar4 = DAT_14cae98e8;
  pvVar3 = DAT_14cae98e0;
  if (0 < (int)DAT_14cae9910) {
    uVar5 = 0;
    uVar6 = 0;
    if (0 < (int)DAT_14cae98e8) {
      uVar6 = (ulonglong)DAT_14cae98e8;
    }
    do {
      if (((uVar6 == uVar5) ||
          (fVar2 = *(float *)((longlong)DAT_14cae98e0 + uVar5 * 4),
          pfVar1 = (float *)((longlong)DAT_14cae9908 + uVar5 * 4), fVar2 != *pfVar1)) ||
         (NAN(fVar2) || NAN(*pfVar1))) goto LAB_140f0b3f4;
      uVar5 = uVar5 + 1;
    } while (DAT_14cae9910 != uVar5);
  }
  if (DAT_14cae9910 != DAT_14cae98e8) {
LAB_140f0b3f4:
    DAT_14cae9910 = DAT_14cae98e8;
    if (DAT_14cae9914 == 0 && DAT_14cae98e8 == 0) {
      DAT_14cae9914 = 0;
    }
    else {
      FUN_1447c510a(&DAT_14cae9908,DAT_14cae98e8);
      if (uVar4 != 0) {
        memcpy(DAT_14cae9908,pvVar3,(longlong)(int)uVar4 << 2);
      }
    }
    FUN_1457c651a();
    pvVar3 = local_38;
    local_50 = (void *)0x0;
    lVar8 = (longlong)local_30;
    local_48 = local_30;
    if (lVar8 == 0) {
      local_44 = 0;
      local_40 = local_28;
      local_30 = 0;
    }
    else {
      FUN_14010590e(&local_50,local_30,0);
      memcpy(local_50,pvVar3,lVar8 << 3);
      local_40 = local_28;
    }
joined_r0x000140f0b474:
    if (local_40 != local_30) {
      FUN_147ba3864(*(undefined8 *)((longlong)local_50 + (longlong)local_40 * 8));
      lVar8 = (longlong)local_40;
      do {
        lVar8 = lVar8 + 1;
        local_40 = (int)lVar8;
        if (local_48 <= lVar8) break;
      } while (*(longlong *)((longlong)local_50 + lVar8 * 8) == 0);
      goto joined_r0x000140f0b474;
    }
    if (local_50 != (void *)0x0) {
      FUN_1400020a8();
    }
    if (local_38 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140f0b5c8 FUN_140f0b5c8 body=639 status=ok
// SIG undefined FUN_140f0b5c8(void)

void FUN_140f0b5c8(void)

{
  uint uVar1;
  wchar_t *pwVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  double dVar6;
  double dVar7;
  float fVar8;
  undefined1 auStack_e8 [32];
  undefined1 local_c8;
  longlong local_b8;
  ulonglong uStack_b0;
  longlong local_a8;
  ulonglong uStack_a0;
  longlong local_98;
  int local_90;
  longlong local_88 [2];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_14099d55c(DAT_14cae98a8,local_88,0);
  FUN_14099d55c(DAT_14cae98c0,&local_98,0);
  local_78 = 0x49e06196;
  uStack_74 = 1;
  uStack_70 = 0x49e001d8;
  uStack_6c = 1;
  local_a8 = 0;
  uStack_a0 = 0;
  local_c8 = 1;
  FUN_144a38a52(local_88,&local_a8,&local_78,2);
  local_b8 = 0;
  uStack_b0 = 0;
  if (1 < local_90) {
    local_c8 = 1;
    FUN_144a38a52(&local_98,&local_b8,&local_78,2);
  }
  if ((int)(uint)uStack_a0 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uStack_a0 & 0xffffffff);
  }
  DAT_14cae98e8 = 0;
  if (DAT_14cae98ec != (uint)uStack_a0) {
    FUN_14482f6fa(&DAT_14cae98e0);
  }
  if (0 < (int)(uint)uStack_a0) {
    lVar5 = 8;
    lVar3 = 0;
    do {
      pwVar2 = L"";
      if (*(int *)(local_a8 + lVar5) != 0) {
        pwVar2 = *(wchar_t **)(local_a8 + -8 + lVar5);
      }
      dVar6 = _wtof(pwVar2);
      fVar8 = 1.0;
      if (lVar3 < (int)uStack_b0) {
        if (*(int *)(local_b8 + lVar5) == 0) {
          pwVar2 = L"";
        }
        else {
          pwVar2 = *(wchar_t **)(local_b8 + -8 + lVar5);
        }
        dVar7 = _wtof(pwVar2);
        fVar8 = (float)dVar7;
      }
      uVar1 = DAT_14cae98e8;
      lVar4 = (longlong)(int)DAT_14cae98e8;
      DAT_14cae98e8 = DAT_14cae98e8 + 1;
      if (DAT_14cae98ec < DAT_14cae98e8) {
        FUN_14475e4ac(&DAT_14cae98e0,uVar1);
      }
      *(float *)(DAT_14cae98e0 + lVar4 * 4) = fVar8 * (float)dVar6;
      lVar3 = lVar3 + 1;
      lVar5 = lVar5 + 0x10;
    } while (lVar3 < (int)(uint)uStack_a0);
  }
  FUN_1447a1747(local_b8,uStack_b0 & 0xffffffff);
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(local_a8,uStack_a0 & 0xffffffff);
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if (local_88[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f0b848 FUN_140f0b848 body=307 status=ok
// SIG undefined FUN_140f0b848(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_140f0b848(void)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_38 [37];
  undefined2 local_13;
  undefined1 local_11;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c96b108) {
    FUN_144b3d300(&DAT_14c96b108);
    plVar5 = DAT_14c98ded0;
    uVar4 = DAT_14c98dec8;
    uVar3 = DAT_14c84635c;
    if (DAT_14c96b108 == -1) {
      if (DAT_14c98ded0 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_14c98ded0 + 1) = (int)DAT_14c98ded0[1] + 1;
        UNLOCK();
      }
      _DAT_14c96b0c0 = 0;
      uRam000000014c96b0c8 = 0x3f800000;
      _DAT_14c96b0d0 = 0;
      _DAT_14c96b0d4 = uVar3;
      _DAT_14c96b0dc = 0x3f800000;
      _DAT_14c96b0e0 = 0;
      uRam000000014c96b0e4 = 0;
      uRam000000014c96b0e8 = 0x3f800000;
      _DAT_14c96b0ec = 0;
      DAT_14c96b0f0._4_1_ = 0;
      DAT_14c96b0f0._5_2_ = local_13;
      DAT_14c96b0f0._7_1_ = local_11;
      DAT_14c96b0f8 = uVar4;
      DAT_14c96b100 = plVar5;
      if (plVar5 != (longlong *)0x0) {
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
      }
      atexit(FUN_14286654f);
      _Init_thread_footer(&DAT_14c96b108);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return &DAT_14c96b0c0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f0b97c FUN_140f0b97c body=295 status=ok
// SIG undefined FUN_140f0b97c(void)

undefined8 FUN_140f0b97c(longlong param_1,undefined4 param_2,undefined8 param_3)

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
    if (iVar1 == 2) goto LAB_140f0ba9c;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_140f0ba9c;
    }
    FUN_140192332(param_1 + 0x18,&local_38,0);
  }
  else {
LAB_140f0ba9c:
    local_38 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_140f0ba47;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5 + (longlong)*(int *)(param_1 + 0x28),param_2,param_3);
      uVar6 = 1;
      goto LAB_140f0ba47;
    }
  }
  uVar6 = 0;
LAB_140f0ba47:
  if ((local_38 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_38);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f0baa4 FUN_140f0baa4 body=222 status=ok
// SIG undefined FUN_140f0baa4(void)

void FUN_140f0baa4(longlong param_1,undefined4 param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(longlong *)(param_1 + 0xa8) != 0) &&
     (*(char *)(*(longlong *)(param_1 + 0xa8) + 0x178) == '\x03')) {
    plVar2 = &DAT_14cb7c580;
    if ((char)param_2 != '\0') {
      plVar2 = &DAT_14cb7c588;
    }
    local_30 = *plVar2;
    FUN_140bfca4e(param_1 + 0xd10,&DAT_14cb8c1d0,&local_30,0);
  }
  FUN_1448c1924(param_1,&local_30);
  if (local_30 != 0) {
    *(char *)(local_30 + 0x1f0) = (char)param_2;
    plVar2 = *(longlong **)(local_30 + 0x150);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x78))(plVar2,param_2);
    }
  }
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_28 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
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
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f0bb84 FUN_140f0bb84 body=42 status=ok
// SIG undefined FUN_140f0bb84(void)

undefined1 FUN_140f0bb84(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  FUN_140f0bc06(*(longlong *)(lVar1 + 0x38) + 8);
  FUN_140f0bbae(lVar1 + 0x40);
  return 1;
}



// FUNCTION 140f0bbae FUN_140f0bbae body=87 status=ok
// SIG undefined FUN_140f0bbae(void)

void FUN_140f0bbae(longlong *param_1)

{
  longlong lVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  if ((int)param_1[2] == 0) {
    lVar1 = *param_1;
    while (lVar1 != 0) {
      lVar1 = *(longlong *)(lVar1 + 0x70000);
      FUN_1400020a8();
    }
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined4 *)(param_1 + 2) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x000140f0bbfe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  return;
}



// FUNCTION 140f0bc06 FUN_140f0bc06 body=89 status=ok
// SIG undefined FUN_140f0bc06(void)

void FUN_140f0bc06(longlong *param_1)

{
  longlong lVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  if ((int)param_1[2] == 0) {
    lVar1 = *param_1;
    while (lVar1 != 0) {
      lVar1 = *(longlong *)(lVar1 + 0xd0000);
      FUN_1400020a8();
    }
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined4 *)(param_1 + 2) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x000140f0bc2d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  return;
}



// FUNCTION 140f0bc6a FUN_140f0bc6a body=196 status=ok
// SIG undefined FUN_140f0bc6a(void)

undefined8 * FUN_140f0bc6a(undefined8 *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = &PTR_FUN_149e8f7e0;
  if ((undefined8 *)*param_2 != param_1 && (undefined8 *)*param_2 != (undefined8 *)0x0) {
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectGlobals.cpp",0xe8e,
                  L"UObject(const FObjectInitializer&) constructor called but it\'s not the object that\'s currently being constructed with NewObject. Maybe you are trying to construct it on the stack, which is not supported."
                 );
  }
  *param_2 = (longlong)param_1;
  *(undefined1 *)((longlong)param_2 + 0x12) = 0;
  *param_1 = &PTR_FUN_14a3bc440;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  for (puVar1 = param_1; puVar1 != (undefined8 *)0x0; puVar1 = (undefined8 *)puVar1[4]) {
    if ((*(uint *)(puVar1 + 1) & 0x30) != 0) goto LAB_140f0bcf1;
  }
  FUN_140f0bd30(param_1,&local_28);
  *(undefined4 *)((longlong)param_1 + 0x3c) = local_28;
  *(undefined4 *)(param_1 + 8) = uStack_24;
  *(undefined4 *)((longlong)param_1 + 0x44) = uStack_20;
  *(undefined4 *)(param_1 + 9) = uStack_1c;
LAB_140f0bcf1:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f0bd30 FUN_140f0bd30 body=211 status=ok
// SIG undefined FUN_140f0bd30(void)

float * FUN_140f0bd30(undefined8 param_1,float *param_2)

{
  int iVar1;
  undefined2 *puVar2;
  undefined1 auStack_68 [32];
  undefined2 *local_48;
  undefined8 uStack_40;
  byte local_38;
  byte local_37;
  byte local_36;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_48 = (undefined2 *)0x0;
  uStack_40 = 0;
  FUN_1401031ac(0,0,&local_48);
  iVar1 = (int)uStack_40 + -1;
  if ((int)uStack_40 == 0) {
    iVar1 = 0;
  }
  puVar2 = local_48;
  if ((int)uStack_40 == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  FUN_140f0be04(puVar2,(longlong)iVar1 * 2,&local_38);
  *param_2 = (float)local_38 / 255.0;
  param_2[1] = (float)local_37 / 255.0;
  param_2[2] = (float)local_36 / 255.0;
  param_2[3] = 1.0;
  if (local_48 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 140f0be04 FUN_140f0be04 body=130 status=ok
// SIG undefined FUN_140f0be04(void)

void FUN_140f0be04(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined1 auStack_c8 [40];
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined8 local_88;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_a0 = 0x67452301;
  uStack_9c = 0xefcdab89;
  uStack_98 = 0x98badcfe;
  uStack_94 = 0x10325476;
  local_90 = 0xc3d2e1f0;
  local_88 = 0;
  FUN_140c54e34(&local_a0,param_1,param_2);
  FUN_140c54d7a(&local_a0);
  param_3[4] = local_2c;
  *param_3 = local_3c;
  param_3[1] = uStack_38;
  param_3[2] = uStack_34;
  param_3[3] = uStack_30;
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f0be98 FUN_140f0be98 body=1201 status=ok
// SIG undefined FUN_140f0be98(void)

void FUN_140f0be98(char *param_1,undefined8 param_2)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  byte bVar4;
  ushort uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  ushort *puVar9;
  longlong lVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int *piVar14;
  uint uVar15;
  longlong lVar16;
  int *piVar17;
  int iVar18;
  ulonglong uVar19;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [8];
  longlong local_90;
  uint *local_88;
  uint *puStack_80;
  uint local_78;
  int *local_70;
  int local_68;
  undefined4 *local_60;
  uint local_58;
  undefined4 local_54;
  undefined4 *local_50;
  uint local_48;
  undefined4 local_44 [2];
  undefined1 local_3c [4];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_1447eef60(local_98,param_1);
  if (*param_1 == '\x01') {
    iVar13 = *(int *)(param_1 + 0x30);
    local_78 = (uint)*(byte *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar13);
    *(int *)(param_1 + 0x30) = iVar13 + 1;
    lVar16 = *(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar13 * 8);
    piVar14 = (int *)(param_1 + 0x44);
  }
  else {
    puVar9 = *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10);
    uVar5 = *puVar9;
    *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10) = puVar9 + 1;
    uVar11 = uVar5 & 0x7fff;
    local_78 = (uint)(uVar5 >> 0xf);
    lVar10 = *(longlong *)(param_1 + 0x80);
    if ((short)uVar5 < 0) {
      lVar16 = (ulonglong)(uVar11 * *(int *)(lVar10 + 0x80)) + *(longlong *)(lVar10 + 0x70);
    }
    else {
      iVar13 = **(int **)(lVar10 + 0x20);
      lVar16 = 0;
      if (iVar13 <= (int)uVar11) {
        do {
          uVar11 = uVar11 - iVar13;
          iVar13 = (*(int **)(lVar10 + 0x20))[lVar16 + 1];
          lVar16 = lVar16 + 1;
        } while (iVar13 <= (int)uVar11);
      }
      lVar16 = (longlong)(int)uVar11 + *(longlong *)(*(longlong *)(lVar10 + 0x18) + lVar16 * 8);
    }
    piVar14 = (int *)(lVar10 + 0x4c);
  }
  local_88 = (uint *)(lVar16 + (ulonglong)local_78 * (longlong)*piVar14 * 4);
  puStack_80 = local_88;
  FUN_140126e42(&local_70,param_1);
  if (*param_1 == '\x01') {
    iVar13 = *(int *)(param_1 + 0x30);
    bVar4 = *(byte *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar13);
    local_58 = (uint)bVar4;
    *(int *)(param_1 + 0x30) = iVar13 + 1;
    local_60 = (undefined4 *)
               ((longlong)*(int *)(param_1 + 0x44) * (ulonglong)bVar4 * 4 +
               *(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar13 * 8));
  }
  else {
    puVar9 = *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10);
    uVar5 = *puVar9;
    *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10) = puVar9 + 1;
    uVar11 = uVar5 & 0x7fff;
    if (uVar11 == 0x7fff) {
      local_60 = &local_54;
      local_58 = 0;
    }
    else {
      lVar16 = *(longlong *)(param_1 + 0x80);
      local_58 = 1;
      local_60 = (undefined4 *)
                 ((ulonglong)(uVar11 * *(int *)(lVar16 + 0x80)) + *(longlong *)(lVar16 + 0x70) +
                 (longlong)*(int *)(lVar16 + 0x4c) * 4);
    }
  }
  if (*param_1 == '\x01') {
    iVar13 = *(int *)(param_1 + 0x30);
    bVar4 = *(byte *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar13);
    local_48 = (uint)bVar4;
    *(int *)(param_1 + 0x30) = iVar13 + 1;
    local_50 = (undefined4 *)
               ((longlong)*(int *)(param_1 + 0x44) * (ulonglong)bVar4 * 4 +
               *(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar13 * 8));
  }
  else {
    puVar9 = *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10);
    uVar5 = *puVar9;
    *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10) = puVar9 + 1;
    uVar11 = uVar5 & 0x7fff;
    if (uVar11 == 0x7fff) {
      local_50 = local_44;
      local_48 = 0;
    }
    else {
      lVar16 = *(longlong *)(param_1 + 0x80);
      local_48 = 1;
      local_50 = (undefined4 *)
                 ((ulonglong)(uVar11 * *(int *)(lVar16 + 0x80)) + *(longlong *)(lVar16 + 0x70) +
                 (longlong)*(int *)(lVar16 + 0x4c) * 4);
    }
  }
  lVar16 = *(longlong *)(local_90 + 8);
  if (lVar16 != 0) {
    lVar10 = *(longlong *)(lVar16 + 0x10);
    if (((*(longlong *)(lVar10 + 0x78) != 0) &&
        (iVar13 = *(int *)(*(longlong *)(lVar10 + 0x78) + 0x120), iVar13 != 0)) &&
       (*(longlong *)(lVar16 + 0x18) == 0)) {
      local_3c[0] = 0;
      local_38 = 0xffffffffffffffff;
      FUN_140aa925c(local_3c,*(undefined8 *)(lVar10 + 8),param_2);
      if ((local_38._4_4_ != -1) && (lVar16 = *(longlong *)(lVar10 + 0x78), lVar16 != 0)) {
        piVar14 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar14 = (int *)(param_1 + 0x3c);
        }
        if (0 < *piVar14) {
          lVar10 = *(longlong *)(lVar16 + 0x28);
          iVar6 = *(int *)(lVar16 + 300);
          uVar11 = iVar6 * local_38._4_4_;
          iVar12 = local_38._4_4_ + 1;
          iVar7 = *(int *)(lVar16 + 0x120);
          iVar18 = 0;
          do {
            puVar1 = local_88 + (int)local_78;
            uVar8 = *local_88;
            if ((int)uVar8 < iVar13 && -1 < (int)uVar8) {
              if ((int)uVar8 < iVar7) {
                uVar15 = *(uint *)((ulonglong)uVar11 + lVar10 + (ulonglong)uVar8 * 4);
                uVar19 = (ulonglong)
                         *(uint *)((ulonglong)(uint)(iVar12 * iVar6) + lVar10 + (ulonglong)uVar8 * 4
                                  );
              }
              else {
                uVar19 = 0xffffffff;
                uVar15 = 0xffffffff;
              }
              uVar19 = (ulonglong)uVar15 | uVar19 << 0x20;
            }
            else {
              uVar19 = 0xffffffffffffffff;
            }
            piVar14 = local_70 + local_68;
            *local_70 = -(uint)((int)uVar8 < iVar13 && -1 < (int)uVar8);
            puVar2 = local_60 + (int)local_58;
            *local_60 = (int)uVar19;
            puVar3 = local_50 + (int)local_48;
            *local_50 = (int)(uVar19 >> 0x20);
            iVar18 = iVar18 + 1;
            piVar17 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
            if (*param_1 != '\0') {
              piVar17 = (int *)(param_1 + 0x3c);
            }
            local_88 = puVar1;
            local_70 = piVar14;
            local_60 = puVar2;
            local_50 = puVar3;
          } while (iVar18 < *piVar17);
        }
        goto LAB_140f0c1b2;
      }
    }
  }
  piVar14 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar14 = (int *)(param_1 + 0x3c);
  }
  if (0 < *piVar14) {
    iVar13 = 0;
    do {
      piVar14 = local_70 + local_68;
      *local_70 = 0;
      puVar2 = local_60 + (int)local_58;
      *local_60 = 0xffffffff;
      puVar3 = local_50 + (int)local_48;
      *local_50 = 0xffffffff;
      iVar13 = iVar13 + 1;
      piVar17 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar17 = (int *)(param_1 + 0x3c);
      }
      local_70 = piVar14;
      local_60 = puVar2;
      local_50 = puVar3;
    } while (iVar13 < *piVar17);
  }
LAB_140f0c1b2:
  if ((local_30 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140f0c350 FUN_140f0c350 body=57 status=ok
// SIG undefined FUN_140f0c350(void)

void FUN_140f0c350(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb608c8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb608c8 = FUN_140002ddd(FUN_1464edc78,uVar1,L"GbxMomentNodeState_End");
  }
  return;
}



// FUNCTION 140f0c390 FUN_140f0c390 body=57 status=ok
// SIG undefined FUN_140f0c390(void)

void FUN_140f0c390(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb60fc8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb60fc8 = FUN_140002ddd(FUN_1464f0cd8,uVar1,L"GbxMomentNodeState_Start");
  }
  return;
}



// FUNCTION 140f0c3ca FUN_140f0c3ca body=55 status=ok
// SIG undefined FUN_140f0c3ca(void)

void FUN_140f0c3ca(longlong *param_1)

{
  FUN_140f0c402(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140f0c402 FUN_140f0c402 body=123 status=ok
// SIG undefined FUN_140f0c402(void)

void FUN_140f0c402(longlong param_1,int param_2)

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



// FUNCTION 140f0c47e FUN_140f0c47e body=600 status=ok
// SIG undefined FUN_140f0c47e(void)

ulonglong FUN_140f0c47e(longlong param_1,undefined8 param_2,undefined ***param_3)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined *puVar12;
  bool bVar13;
  undefined1 auStack_78 [32];
  undefined **local_58;
  undefined *local_50;
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140265f12();
  local_50 = &DAT_14cb83310;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = &PTR_FUN_14b1828b0;
  plVar5 = (longlong *)FUN_140f0c6d8(param_3);
  puVar12 = &DAT_14cb83310;
  if (plVar5 == (longlong *)0x0) {
LAB_140f0c4f4:
    lVar8 = local_48;
    uVar2 = (uint)uStack_40;
    if ((longlong)(int)(uint)uStack_40 != 0) {
      lVar10 = (longlong)(int)(uint)uStack_40 * 8;
      lVar7 = 0;
      do {
        if (*(longlong *)(local_48 + lVar7) != 0) {
          if (*(undefined **)(param_1 + 0x40) == (undefined *)0x0) goto LAB_140f0c5e5;
          uVar9 = *(uint *)(param_1 + 0x50);
          if ((longlong)(int)uVar9 == 0) goto LAB_140f0c5e5;
          lVar7 = 0;
          goto LAB_140f0c59b;
        }
        lVar7 = lVar7 + 8;
      } while (lVar10 - lVar7 != 0);
    }
  }
  else {
    uVar6 = (**(code **)(*plVar5 + 0x10))(plVar5);
    param_3 = &local_58;
    FUN_140f0c707(uVar6);
    puVar12 = local_50;
    if (local_50 != (undefined *)0x0) goto LAB_140f0c4f4;
  }
  goto LAB_140f0c51d;
  while (lVar7 = lVar7 + 8, (longlong)(int)uVar9 * 8 - lVar7 != 0) {
LAB_140f0c59b:
    if (*(longlong *)(*(longlong *)(param_1 + 0x48) + lVar7) != 0) {
      if (*(char *)(param_1 + 0x11) == '\x01') {
        cVar3 = FUN_144a8028a(&local_58);
        if (cVar3 != '\0') goto LAB_140f0c51d;
      }
      else if (puVar12 == *(undefined **)(param_1 + 0x40)) {
        if ((int)(uint)uStack_40 < (int)uVar9) {
          uVar9 = (uint)uStack_40;
        }
        if (0 < (int)uVar9) {
          uVar11 = 0;
          goto LAB_140f0c5cf;
        }
      }
      break;
    }
  }
  goto LAB_140f0c5e5;
  while (uVar11 = uVar11 + 1, uVar9 != uVar11) {
LAB_140f0c5cf:
    if ((*(ulonglong *)(local_48 + uVar11 * 8) &
        *(ulonglong *)(*(longlong *)(param_1 + 0x48) + uVar11 * 8)) != 0) goto LAB_140f0c51d;
  }
LAB_140f0c5e5:
  if (*(char *)(param_1 + 0x10) == '\x01') {
    if (puVar12 == *(undefined **)(param_1 + 0x20)) {
      uVar9 = *(uint *)(param_1 + 0x30);
      uVar1 = uVar9;
      if ((int)uVar2 < (int)uVar9) {
        uVar1 = uVar2;
      }
      if (0 < (int)uVar1) {
        uVar11 = 0;
        do {
          if ((*(ulonglong *)(*(longlong *)(param_1 + 0x28) + uVar11 * 8) &
              ~*(ulonglong *)(lVar8 + uVar11 * 8)) != 0) goto LAB_140f0c51d;
          uVar11 = uVar11 + 1;
        } while (uVar1 != uVar11);
      }
      param_3 = (undefined ***)CONCAT71((int7)((ulonglong)param_3 >> 8),1);
      if ((int)uVar2 < (int)uVar9) {
        lVar8 = 0;
        do {
          bVar13 = *(longlong *)(lVar10 + *(longlong *)(param_1 + 0x28) + lVar8 * 8) == 0;
          param_3 = (undefined ***)CONCAT71((int7)((ulonglong)param_3 >> 8),bVar13);
          if (!bVar13) break;
          iVar4 = (int)lVar8;
          lVar8 = lVar8 + 1;
        } while (~uVar2 + uVar9 != iVar4);
      }
      goto LAB_140f0c51f;
    }
  }
  else if (puVar12 == *(undefined **)(param_1 + 0x20)) {
    uVar9 = *(uint *)(param_1 + 0x30);
    if ((int)uVar2 < (int)*(uint *)(param_1 + 0x30)) {
      uVar9 = uVar2;
    }
    if (0 < (int)uVar9) {
      lVar10 = 0;
      do {
        bVar13 = (*(ulonglong *)(lVar8 + lVar10 * 8) &
                 *(ulonglong *)(*(longlong *)(param_1 + 0x28) + lVar10 * 8)) != 0;
        param_3 = (undefined ***)CONCAT71((int7)((ulonglong)param_3 >> 8),bVar13);
        if (bVar13) break;
        bVar13 = (ulonglong)uVar9 - 1 != lVar10;
        lVar10 = lVar10 + 1;
      } while (bVar13);
      goto LAB_140f0c51f;
    }
  }
LAB_140f0c51d:
  param_3 = (undefined ***)0x0;
LAB_140f0c51f:
  uVar2 = uStack_40._4_4_;
  local_58 = (undefined **)&DAT_14a171d50;
  uStack_40 = (ulonglong)uStack_40._4_4_ << 0x20;
  if (uVar2 != 0) {
    FUN_140115c12(&local_48,0);
  }
  local_50 = (undefined *)0x0;
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return (ulonglong)param_3 & 0xffffffff;
}



// FUNCTION 140f0c6d8 FUN_140f0c6d8 body=47 status=ok
// SIG undefined FUN_140f0c6d8(void)

undefined8 FUN_140f0c6d8(void)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_1447262c2();
  if (lVar1 != 0) {
    uVar2 = FUN_140840456();
    uVar2 = FUN_144718840(lVar1,uVar2);
    return uVar2;
  }
  return 0;
}



// FUNCTION 140f0c707 FUN_140f0c707 body=275 status=ok
// SIG undefined FUN_140f0c707(void)

void FUN_140f0c707(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    lVar1 = lVar2;
    if ((longlong)(int)param_1[3] != 0) {
      lVar3 = 0;
      do {
        if (*(longlong *)(param_1[2] + lVar3) == 0) {
          return;
        }
        lVar3 = lVar3 + 8;
      } while ((longlong)(int)param_1[3] * 8 != lVar3);
    }
    do {
      (**(code **)(*param_2 + 8))(param_2,lVar1 + 0x270);
      lVar1 = FUN_14001d26e(lVar1);
    } while (lVar1 != 0);
    lVar1 = FUN_140a2d0dc(lVar2);
    if (lVar1 != 0) {
      lVar2 = FUN_140a2d0dc(lVar2);
      (**(code **)(*param_2 + 8))(param_2,lVar2 + 0xf0);
    }
    lVar2 = param_1[3];
    if ((longlong)(int)lVar2 != 0) {
      lVar1 = param_1[2];
      lVar3 = 0;
      do {
        if (*(longlong *)(lVar1 + lVar3) != 0) {
          FUN_1405dc634(param_2,(ulonglong)*(ushort *)(*(longlong *)(lVar1 + lVar3) + 0x4c) * 0x20 +
                                *(longlong *)(DAT_14cb848c0 + 0x3a8));
        }
        lVar3 = lVar3 + 8;
      } while ((longlong)(int)lVar2 * 8 != lVar3);
    }
    if (param_1[1] != 0) {
      FUN_1405dc634(param_2,(ulonglong)*(ushort *)(param_1[1] + 0x158) * 0x20 +
                            *(longlong *)(DAT_14cb848c0 + 0x3a8));
      return;
    }
  }
  return;
}



// FUNCTION 140f0c81a FUN_140f0c81a body=105 status=ok
// SIG undefined FUN_140f0c81a(void)

void FUN_140f0c81a(longlong param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_140f0c8d0();
  if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_18);
  }
  FUN_140f0c884(param_1 + 0x138,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f0c884 FUN_140f0c884 body=76 status=ok
// SIG undefined FUN_140f0c884(void)

void FUN_140f0c884(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar1 = FUN_140f0c8d0();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar2 = *param_2;
      goto LAB_140f0c8c1;
    }
  }
  lVar2 = 0;
LAB_140f0c8c1:
  FUN_1448a6f9c(param_1,lVar2);
  return;
}



// FUNCTION 140f0c8d0 FUN_140f0c8d0 body=228 status=ok
// SIG undefined FUN_140f0c8d0(void)

longlong FUN_140f0c8d0(void)

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
  if (DAT_14cbaeda8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_143564180;
    local_28 = &LAB_145a86c1c;
    local_38 = &LAB_148c45c45;
    local_40 = FUN_145978fd6;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x38;
    FUN_14081cfa3(L"/Script/OakGame",L"OakSocialSubsystem",&DAT_14cbaeda8,&DAT_148c45c44);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbaeda8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f0c9b6 FUN_140f0c9b6 body=97 status=ok
// SIG undefined FUN_140f0c9b6(void)

void FUN_140f0c9b6(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x180))();
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x1f0) != 0)) {
    lVar1 = FUN_141356fdc();
    if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x30) != 0)) {
      FUN_140f0ca18(*(longlong *)(lVar1 + 0x30),*(undefined4 *)(param_1[4] + 0xe0),param_2,param_3);
      return;
    }
  }
  return;
}



// FUNCTION 140f0ca18 FUN_140f0ca18 body=382 status=ok
// SIG undefined FUN_140f0ca18(void)

void FUN_140f0ca18(longlong param_1,uint param_2,uint param_3,undefined8 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined8 uStack_50;
  longlong *local_48;
  longlong *plStack_40;
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(int *)(param_1 + 0x20) != *(int *)(param_1 + 0x4c)) {
    lVar4 = param_1 + 0x50;
    if (*(longlong *)(param_1 + 0x58) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x58);
    }
    iVar3 = *(int *)(lVar4 + (ulonglong)(*(int *)(param_1 + 0x60) - 1U & param_2) * 4);
    if (iVar3 != -1) {
      do {
        if (*(uint *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar3 * 0xc) == param_2) {
          FUN_140f0cb98(&local_30);
          if (local_30 != 0) {
            plVar5 = (longlong *)FUN_140a68038(1);
            if (plVar5 == (longlong *)0x0) {
              local_48 = (longlong *)0x0;
              plStack_40 = (longlong *)0x0;
            }
            else {
              (**(code **)(*plVar5 + 0xa8))(plVar5,&local_48);
              if (local_48 != (longlong *)0x0) {
                local_58 = 0;
                uStack_50 = 0;
                (**(code **)(*local_48 + 0x28))(local_48,local_30,&local_58);
                if ((-1 < (int)param_3) && ((int)param_3 < (int)uStack_50)) {
                  *param_4 = *(undefined8 *)(local_58 + 0x10 + (ulonglong)param_3 * 0x20);
                }
                FUN_140f5addd();
                if (local_58 != 0) {
                  FUN_1400020a8();
                }
              }
            }
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
          }
          if (local_28 != (longlong *)0x0) {
            LOCK();
            plVar5 = local_28 + 1;
            *(int *)plVar5 = (int)*plVar5 + -1;
            UNLOCK();
            if ((int)*plVar5 == 0) {
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
          break;
        }
        iVar3 = *(int *)(*(longlong *)(param_1 + 0x18) + (longlong)iVar3 * 0xc + 4);
      } while (iVar3 != -1);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140f0cb98 FUN_140f0cb98 body=187 status=ok
// SIG undefined FUN_140f0cb98(void)

undefined8 * FUN_140f0cb98(undefined8 *param_1,undefined4 param_2)

{
  longlong *plVar1;
  int *piVar2;
  bool bVar3;
  longlong *plVar4;
  undefined1 auStack_58 [32];
  longlong *local_38;
  longlong *plStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  bVar3 = true;
  plVar4 = (longlong *)FUN_140a68038(1);
  if (plVar4 == (longlong *)0x0) {
    local_38 = (longlong *)0x0;
    plStack_30 = (longlong *)0x0;
  }
  else {
    (**(code **)(*plVar4 + 0x80))(plVar4,&local_38);
    if (local_38 != (longlong *)0x0) {
      (**(code **)(*local_38 + 0x110))(local_38,param_1,param_2);
      bVar3 = false;
    }
  }
  plVar4 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if (bVar3) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f0cc54 FUN_140f0cc54 body=71 status=ok
// SIG undefined FUN_140f0cc54(void)

undefined8 * FUN_140f0cc54(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b242010;
  FUN_140f0cc9b(param_1[2],*(undefined4 *)(param_1 + 3));
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140f0cc9b FUN_140f0cc9b body=73 status=ok
// SIG undefined FUN_140f0cc9b(void)

void FUN_140f0cc9b(longlong param_1,int param_2)

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



// FUNCTION 140f0cce4 FUN_140f0cce4 body=538 status=ok
// SIG undefined FUN_140f0cce4(void)

undefined8 * FUN_140f0cce4(longlong param_1,undefined8 *param_2,uint param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 uVar9;
  undefined1 auStack_68 [32];
  longlong *local_48;
  int local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *param_2 = 0;
  if (3 < param_3) goto LAB_140f0cdff;
  local_48 = (longlong *)0x0;
  local_40 = 0;
  FUN_140f0cf00(&local_48,param_4);
  if (((local_40 == 0) || (local_48 == (longlong *)0x0)) ||
     (cVar4 = (**(code **)(*local_48 + 0x30))(), cVar4 == '\0')) {
    if (local_40 == 0) {
      uVar9 = 0;
      goto LAB_140f0cdf3;
    }
    if (local_48 != (longlong *)0x0) {
      uVar9 = 0;
      (**(code **)*local_48)(local_48,0);
      FUN_1446efa72(&local_48,0,0,0x10);
      goto LAB_140f0cde6;
    }
    uVar9 = 0;
  }
  else {
    param_1 = param_1 + (ulonglong)param_3 * 0x18;
    plVar8 = (longlong *)(param_1 + 8);
    if (*(int *)(param_1 + 0x1c) < 1) {
      iVar1 = *(int *)(param_1 + 0x10);
      iVar5 = *(int *)(param_1 + 0x18) + -1;
      *(int *)(param_1 + 0x18) = iVar5;
      if (iVar5 <= iVar1) {
        iVar5 = iVar1;
        if (0 < iVar1) {
          iVar6 = 0;
          do {
            if (((*(int *)(*plVar8 + 8 + (longlong)iVar6 * 0x10) == 0) ||
                (plVar3 = *(longlong **)(*plVar8 + (longlong)iVar6 * 0x10),
                plVar3 == (longlong *)0x0)) ||
               (cVar4 = (**(code **)(*plVar3 + 0x28))(), cVar4 != '\0')) {
              FUN_14005b288(plVar8,iVar6);
              FUN_14005b248(plVar8);
            }
            else {
              iVar6 = iVar6 + 1;
            }
            iVar5 = *(int *)(param_1 + 0x10);
          } while (iVar6 < iVar5);
        }
        iVar6 = 2;
        if (2 < iVar5 * 2) {
          iVar6 = iVar5 * 2;
        }
        *(int *)(param_1 + 0x18) = iVar6;
        if ((iVar6 < iVar1) && (*(int *)(param_1 + 0x14) != iVar5)) {
          FUN_14045812c();
        }
      }
    }
    uVar9 = 0;
    if ((local_40 != 0) && (local_48 != (longlong *)0x0)) {
      (**(code **)(*local_48 + 0x38))(local_48,&local_38);
      uVar9 = local_38;
    }
    iVar1 = *(int *)(param_1 + 0x10);
    *(uint *)(param_1 + 0x10) = iVar1 + 1U;
    if (*(uint *)(param_1 + 0x14) < iVar1 + 1U) {
      FUN_1447a71f6(plVar8,iVar1);
    }
    lVar2 = *plVar8;
    lVar7 = (longlong)iVar1 * 0x10;
    *(undefined8 *)(lVar2 + lVar7) = 0;
    *(undefined4 *)(lVar2 + 8 + lVar7) = 0;
    *(longlong **)(lVar2 + lVar7) = local_48;
    local_48 = (longlong *)0x0;
    *(int *)(lVar2 + 8 + lVar7) = local_40;
LAB_140f0cde6:
    local_40 = 0;
LAB_140f0cdf3:
    if (local_48 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  *param_2 = uVar9;
LAB_140f0cdff:
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 140f0cf00 FUN_140f0cf00 body=305 status=ok
// SIG undefined FUN_140f0cf00(void)

void FUN_140f0cf00(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 == param_1) goto LAB_140f0cf9a;
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
LAB_140f0cf73:
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
      goto LAB_140f0cf73;
    }
  }
  *param_1 = (longlong)puVar2;
  *(int *)(param_1 + 1) = iVar3;
  if (local_28 != 0) {
    if (local_30 == (undefined8 *)0x0) goto LAB_140f0cf9a;
    (**(code **)*local_30)(local_30,0);
    FUN_1446efa72(&local_30,0,0,0x10);
    local_28 = 0;
  }
  if (local_30 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_140f0cf9a:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f0d032 FUN_140f0d032 body=49 status=ok
// SIG undefined FUN_140f0d032(void)

longlong FUN_140f0d032(void)

{
  if (DAT_14cc2d850 == 0) {
    FUN_140f50038(&DAT_14cc2d850,&PTR_s__Script_IKRig_14bebc396_2_14bebc378);
  }
  return DAT_14cc2d850;
}



// FUNCTION 140f0d064 FUN_140f0d064 body=218 status=ok
// SIG undefined FUN_140f0d064(void)

void FUN_140f0d064(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  
  FUN_140f0d13e();
  for (lVar4 = param_1; lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0x20)) {
    if ((*(uint *)(lVar4 + 8) & 0x30) != 0) {
      return;
    }
  }
  if (*(longlong *)(param_1 + 0x6e0) == 0) {
    plVar2 = (longlong *)(param_1 + 0x6d0);
    *(undefined8 **)(param_1 + 0x6e8) = &DAT_14cb1cfb0;
    *(longlong *)(param_1 + 0x6e0) = param_1;
    lVar4 = DAT_14cb1cfe0;
    while( true ) {
      *(longlong *)(param_1 + 0x6d0) = lVar4;
      plVar1 = (longlong *)(*(longlong *)(param_1 + 0x6e8) + 0x30);
      LOCK();
      lVar3 = *plVar1;
      bVar5 = lVar4 == lVar3;
      if (bVar5) {
        *plVar1 = (longlong)plVar2;
        lVar3 = lVar4;
      }
      UNLOCK();
      if (bVar5) break;
      *(longlong *)(param_1 + 0x6d0) = lVar3;
      lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x6e8) + 0x30);
    }
    if (*plVar2 != 0) {
      *(longlong **)(*plVar2 + 8) = plVar2;
    }
    plVar2 = *(longlong **)(param_1 + 0x6e8);
    if ((longlong)(int)plVar2[1] != 0) {
      lVar4 = 0;
      do {
        if ((*(int *)(*plVar2 + 8 + lVar4) != 0) && (*(longlong *)(*plVar2 + lVar4) != 0)) {
          FUN_140b00e2e(plVar2,*(undefined8 *)(param_1 + 0x6e0));
          return;
        }
        lVar4 = lVar4 + 0x10;
      } while ((longlong)(int)plVar2[1] * 0x10 != lVar4);
    }
  }
  return;
}



// FUNCTION 140f0d13e FUN_140f0d13e body=58 status=ok
// SIG undefined FUN_140f0d13e(void)

void FUN_140f0d13e(longlong *param_1)

{
  longlong lVar1;
  
  FUN_1448aa298();
  if (((*(byte *)((longlong)param_1 + 0x9c) & 1) == 0) ||
     (lVar1 = 0xa08, (*(byte *)((longlong)param_1 + 0x9f) & 4) == 0)) {
    lVar1 = 0xa10;
  }
                    /* WARNING: Could not recover jumptable at 0x000140f0d16d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + lVar1))(param_1);
  return;
}



// FUNCTION 140f0d178 FUN_140f0d178 body=37 status=ok
// SIG undefined FUN_140f0d178(void)

void FUN_140f0d178(undefined8 param_1)

{
  char cVar1;
  
  cVar1 = FUN_140f0d19d();
  if (cVar1 != '\0') {
    FUN_140f0d1f0(param_1);
    return;
  }
  return;
}



// FUNCTION 140f0d19d FUN_140f0d19d body=83 status=ok
// SIG undefined FUN_140f0d19d(void)

byte FUN_140f0d19d(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  byte bVar3;
  
  if ((longlong)*(int *)(param_1 + 0x688) != 0) {
    lVar2 = 0;
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x680) + lVar2);
      if (((lVar1 != 0) && (*(int *)(lVar1 + 0x20) != 0)) &&
         (bVar3 = 1, *(longlong *)(*(longlong *)(param_1 + 0x680) + 0x28 + lVar2) != 0))
      goto LAB_140f0d1e2;
      lVar2 = lVar2 + 0x30;
    } while ((longlong)*(int *)(param_1 + 0x688) * 0x30 != lVar2);
  }
  bVar3 = 0;
LAB_140f0d1e2:
  return 0 < *(int *)(param_1 + 0x668) & bVar3;
}



// FUNCTION 140f0d1f0 FUN_140f0d1f0 body=166 status=ok
// SIG undefined FUN_140f0d1f0(void)

void FUN_140f0d1f0(undefined8 param_1)

{
  int *piVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined8 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14069cc7b(&local_28,param_1);
  if (local_28 != 0) {
    uVar3 = FUN_140f0d332(local_28 + 0x470,local_28 + 0x508,local_28 + 0x558,param_1);
    bVar2 = FUN_140f0d2a7(uVar3);
    *(byte *)(local_28 + 0x590) = *(byte *)(local_28 + 0x590) | bVar2;
  }
  if (local_20 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_20 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar1 = (int *)((longlong)local_20 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f0d2a7 FUN_140f0d2a7 body=139 status=ok
// SIG undefined FUN_140f0d2a7(void)

undefined8 FUN_140f0d2a7(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 8) == 1) {
    iVar3 = *(int *)(param_1 + 0x28);
    if (iVar3 == 0) {
      *(undefined4 *)(param_1 + 8) = 4;
      return 1;
    }
LAB_140f0d2e4:
    if (*(int *)(*(longlong *)(param_1 + 0x20) + (longlong)(iVar3 + -1) * 4) == 2) {
      uVar2 = 0;
      goto LAB_140f0d328;
    }
  }
  else {
    if (*(int *)(param_1 + 8) - 4U < 5) {
      iVar3 = *(int *)(param_1 + 0x28);
      if (iVar3 == 0) {
        return 0;
      }
      goto LAB_140f0d2e4;
    }
    iVar3 = *(int *)(param_1 + 0x28);
    if (iVar3 != 0) goto LAB_140f0d2e4;
    iVar3 = 0;
  }
  *(uint *)(param_1 + 0x28) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x2c) < iVar3 + 1U) {
    FUN_140b39638((longlong *)(param_1 + 0x20),iVar3);
  }
  lVar1 = *(longlong *)(param_1 + 0x20);
  *(undefined4 *)(lVar1 + (longlong)iVar3 * 4) = 2;
  uVar2 = CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
LAB_140f0d328:
  *(undefined1 *)(param_1 + 0x49) = 1;
  return uVar2;
}



// FUNCTION 140f0d332 FUN_140f0d332 body=1008 status=ok
// SIG undefined FUN_140f0d332(void)

ulonglong FUN_140f0d332(undefined8 param_1,longlong *param_2,longlong *param_3,ulonglong param_4)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  byte bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  uint *puVar8;
  longlong *plVar9;
  int iVar10;
  ulonglong uVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  ulonglong *puVar15;
  bool bVar16;
  
  if ((int)param_2[1] != *(int *)((longlong)param_2 + 0x34)) {
    uVar6 = ((uint)(param_4 >> 0x14) & 0xffff ^ (uint)(param_4 >> 4)) * -0x7a143595;
    uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
    plVar9 = param_2 + 7;
    if ((longlong *)param_2[8] != (longlong *)0x0) {
      plVar9 = (longlong *)param_2[8];
    }
    iVar10 = *(int *)((longlong)plVar9 +
                     (ulonglong)((int)param_2[9] - 1U & (uVar6 >> 0x10 ^ uVar6)) * 4);
    if (iVar10 != -1) {
      do {
        puVar1 = (ulonglong *)(*param_2 + (longlong)iVar10 * 0x18);
        if (*puVar1 == param_4) {
          puVar15 = puVar1 + 1;
          if (puVar15 != (ulonglong *)0x0 && puVar1 != (ulonglong *)0x0) goto LAB_140f0d5af;
          break;
        }
        iVar10 = (int)puVar1[2];
      } while (iVar10 != -1);
    }
  }
  puVar8 = (uint *)FUN_14001cc68(0x70,0x10);
  puVar8[1] = 0;
  puVar8[2] = 1;
  puVar8[4] = 0;
  puVar8[5] = 0;
  puVar8[6] = 0;
  puVar8[7] = 0;
  puVar8[8] = 0;
  puVar8[9] = 0;
  puVar8[10] = 0;
  puVar8[0xb] = 0;
  puVar8[0xc] = 0;
  puVar8[0xe] = 0;
  puVar8[0xf] = 0;
  puVar8[0x10] = 0;
  puVar8[0x11] = 0;
  *(undefined2 *)(puVar8 + 0x12) = 0;
  puVar8[0x1a] = 0xbf800000;
  iVar10 = (int)param_3[1];
  *(uint *)(param_3 + 1) = iVar10 + 1U;
  if (*(uint *)((longlong)param_3 + 0xc) < iVar10 + 1U) {
    FUN_1457c6b6a(param_3,iVar10);
  }
  puVar15 = (ulonglong *)(*param_3 + (longlong)iVar10 * 8);
  *puVar15 = (ulonglong)puVar8;
  if (param_4 == 0) {
    *puVar8 = 0;
    uVar6 = 0;
  }
  else {
    uVar6 = *(uint *)(param_4 + 0xc);
    *puVar8 = uVar6;
    if ((int)uVar6 < DAT_14c9647dc) {
      lVar14 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8);
    }
    else {
      lVar14 = 0;
    }
    uVar6 = *(uint *)(lVar14 + 0x10);
    if (*(uint *)(lVar14 + 0x10) == 0) {
      LOCK();
      iVar10 = DAT_14c964868 + 1;
      UNLOCK();
      uVar13 = DAT_14c964868 + 1;
      bVar16 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar10;
      if (bVar16) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar13);
      }
      LOCK();
      uVar6 = *(uint *)(lVar14 + 0x10);
      bVar16 = uVar6 == 0;
      if (bVar16) {
        *(uint *)(lVar14 + 0x10) = uVar13;
        uVar6 = 0;
      }
      UNLOCK();
      if (bVar16) {
        uVar6 = uVar13;
      }
    }
  }
  puVar8[1] = uVar6;
  *(undefined4 *)(*puVar15 + 8) = 1;
  uVar11 = *puVar15;
  if (*(int *)((longlong)param_2 + 0x34) == 0) {
    iVar10 = (int)param_2[1];
    *(int *)(param_2 + 1) = iVar10 + 1;
    if (*(int *)((longlong)param_2 + 0xc) == iVar10) {
      FUN_14482b872(param_2,iVar10);
    }
    lVar14 = (longlong)iVar10;
    iVar12 = FUN_144a54ea4(param_2 + 2,1);
    plVar9 = (longlong *)param_2[4];
    if ((longlong *)param_2[4] == (longlong *)0x0) {
      plVar9 = param_2 + 2;
    }
    iVar7 = iVar12 + 0x1f;
    if (-1 < iVar12) {
      iVar7 = iVar12;
    }
    bVar3 = (byte)iVar12 & 0x1f;
    puVar8 = (uint *)((longlong)plVar9 + (longlong)(iVar7 >> 5) * 4);
    *puVar8 = *puVar8 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  }
  else {
    iVar10 = (int)param_2[6];
    lVar14 = (longlong)iVar10;
    iVar12 = *(int *)(*param_2 + 4 + lVar14 * 0x18);
    *(int *)(param_2 + 6) = iVar12;
    iVar7 = *(int *)((longlong)param_2 + 0x34) + -1;
    *(int *)((longlong)param_2 + 0x34) = iVar7;
    if (iVar7 != 0) {
      *(undefined4 *)(*param_2 + (longlong)iVar12 * 0x18) = 0xffffffff;
    }
  }
  plVar9 = param_2 + 2;
  if ((longlong *)param_2[4] != (longlong *)0x0) {
    plVar9 = (longlong *)param_2[4];
  }
  iVar12 = iVar10 + 0x1f;
  if (-1 < iVar10) {
    iVar12 = iVar10;
  }
  puVar8 = (uint *)((longlong)plVar9 + (longlong)(iVar12 >> 5) * 4);
  *puVar8 = *puVar8 | 1 << ((byte)iVar10 & 0x1f);
  iVar12 = 1;
  puVar1 = (ulonglong *)(*param_2 + lVar14 * 0x18);
  *puVar1 = param_4;
  puVar1[1] = uVar11;
  *(undefined4 *)(puVar1 + 2) = 0xffffffff;
  uVar6 = ((uint)(param_4 >> 0x14) & 0xffff ^ (uint)(param_4 >> 4)) * -0x7a143595;
  uVar6 = (uVar6 >> 0xd ^ uVar6) * -0x3d4d51cb;
  uVar6 = uVar6 >> 0x10 ^ uVar6;
  uVar13 = (int)param_2[1] - *(int *)((longlong)param_2 + 0x34);
  if ((uVar13 != 0) && (uVar13 != 1)) {
    plVar9 = param_2 + 7;
    if ((longlong *)param_2[8] != (longlong *)0x0) {
      plVar9 = (longlong *)param_2[8];
    }
    iVar7 = *(int *)((longlong)plVar9 + (ulonglong)((int)param_2[9] - 1U & uVar6) * 4);
    if (iVar7 != -1) {
      do {
        puVar2 = (ulonglong *)(*param_2 + (longlong)iVar7 * 0x18);
        if (*puVar2 == param_4) {
          uVar4 = *(undefined4 *)((longlong)puVar1 + 4);
          uVar11 = puVar1[1];
          uVar5 = *(undefined4 *)((longlong)puVar1 + 0xc);
          *(int *)puVar2 = (int)*puVar1;
          *(undefined4 *)((longlong)puVar2 + 4) = uVar4;
          *(int *)(puVar2 + 1) = (int)uVar11;
          *(undefined4 *)((longlong)puVar2 + 0xc) = uVar5;
          FUN_140de7526(param_2,iVar10,1);
          goto LAB_140f0d5af;
        }
        iVar7 = (int)puVar2[2];
      } while (iVar7 != -1);
    }
  }
  if (3 < uVar13) {
    uVar11 = (ulonglong)(uVar13 & 0xfffffffe) + 0xf;
    lVar14 = 0x3f;
    if (uVar11 != 0) {
      for (; uVar11 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    iVar12 = 1 << ((byte)lVar14 & 0x1f);
  }
  if (((int)uVar13 < 1) || (iVar12 <= (int)param_2[9])) {
    uVar6 = (int)param_2[9] - 1U & uVar6;
    *(uint *)((longlong)puVar1 + 0x14) = uVar6;
    plVar9 = (longlong *)param_2[8];
    if ((longlong *)param_2[8] == (longlong *)0x0) {
      plVar9 = param_2 + 7;
    }
    *(undefined4 *)(puVar1 + 2) =
         *(undefined4 *)
          ((longlong)plVar9 + ((longlong)(int)param_2[9] - 1U & (longlong)(int)uVar6) * 4);
    plVar9 = (longlong *)param_2[8];
    if ((longlong *)param_2[8] == (longlong *)0x0) {
      plVar9 = param_2 + 7;
    }
    *(int *)((longlong)plVar9 + ((longlong)(int)param_2[9] - 1U & (longlong)(int)uVar6) * 4) =
         iVar10;
  }
  else {
    *(int *)(param_2 + 9) = iVar12;
    FUN_140f0d722(param_2);
  }
LAB_140f0d5af:
  return *puVar15;
}



// FUNCTION 140f0d722 FUN_140f0d722 body=483 status=ok
// SIG undefined FUN_140f0d722(void)

void FUN_140f0d722(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
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
  uVar8 = *(uint *)(param_1 + 9);
  uVar3 = local_58;
  if (uVar8 != 0) {
    plVar1 = param_1 + 7;
    uVar7 = 0;
    FUN_144a1cbf0(plVar1,0,uVar8,4);
    if (0 < (int)uVar8) {
      do {
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar7) * 4) =
             0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar8 != uVar7);
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
    uVar3 = local_58;
    local_50 = local_30;
    local_4c = local_2c;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_70 = param_1;
    if (local_58._4_4_ < (int)local_40[3]) {
      iVar4 = local_58._4_4_;
      local_58 = uVar3;
      do {
        lVar2 = *local_70;
        lVar5 = (longlong)iVar4;
        uVar10 = *(ulonglong *)(lVar2 + lVar5 * 0x18);
        uVar8 = ((uint)(uVar10 >> 0x14) & 0xffff ^ (uint)(uVar10 >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar2 + 0x14 + lVar5 * 0x18) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x10 + lVar5 * 0x18) =
             *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar4;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_1449c0562(&local_68);
        iVar4 = local_58._4_4_;
        uVar3 = local_58;
      } while (local_58._4_4_ < (int)local_60[3]);
    }
  }
  local_58 = uVar3;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140f0d906 FUN_140f0d906 body=42 status=ok
// SIG undefined FUN_140f0d906(void)

void FUN_140f0d906(longlong *param_1,undefined8 param_2)

{
  FUN_140f0d930();
                    /* WARNING: Could not recover jumptable at 0x000140f0d92d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x660))(param_1,param_2);
  return;
}



// FUNCTION 140f0d930 FUN_140f0d930 body=393 status=ok
// SIG undefined FUN_140f0d930(void)

void FUN_140f0d930(longlong *param_1,longlong param_2)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  bool bVar6;
  
  if ((param_2 == 0) || (DAT_14c950c29 == '\0')) {
    param_1[0x59] = param_2;
    if (param_2 == 0) goto LAB_140f0d9b5;
  }
  else {
    FUN_1456cec3c(param_2);
    param_1[0x59] = param_2;
  }
  if (param_1 == (longlong *)0x0) {
    *(undefined4 *)(param_2 + 0x1e8) = 0;
    iVar3 = 0;
  }
  else {
    uVar1 = *(uint *)((longlong)param_1 + 0xc);
    *(uint *)(param_2 + 0x1e8) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar5 = 0;
    }
    iVar3 = *(int *)(lVar5 + 0x10);
    if (*(int *)(lVar5 + 0x10) == 0) {
      LOCK();
      iVar3 = DAT_14c964868 + 1;
      UNLOCK();
      iVar4 = DAT_14c964868 + 1;
      bVar6 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar3;
      if (bVar6) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar4);
      }
      LOCK();
      iVar3 = *(int *)(lVar5 + 0x10);
      bVar6 = iVar3 == 0;
      if (bVar6) {
        *(int *)(lVar5 + 0x10) = iVar4;
        iVar3 = 0;
      }
      UNLOCK();
      if (bVar6) {
        iVar3 = iVar4;
      }
    }
  }
  *(int *)(param_2 + 0x1ec) = iVar3;
  *(undefined1 *)(param_1 + 0x68) = 0;
  FUN_140e1f77e(param_1);
LAB_140f0d9b5:
  if (((param_1[0x15] != 0) && (*(char *)(param_1[0x15] + 0x178) == '\x03')) &&
     (cVar2 = (**(code **)(*param_1 + 0x610))(param_1), cVar2 != '\0')) {
    *(undefined1 *)(param_1 + 0x5c) = 2;
    lVar5 = param_1[0x5d];
    if (lVar5 != 0) {
      *(undefined1 *)(lVar5 + 0x2c0) = *(undefined1 *)(*(longlong *)(lVar5 + 0x2a8) + 0x2e0);
    }
    FUN_140f0dad2(param_1,param_1[0x59]);
    return;
  }
  *(undefined1 *)(param_1 + 0x5c) = 1;
  lVar5 = param_1[0x5d];
  if (lVar5 != 0) {
    *(undefined1 *)(lVar5 + 0x2c0) = *(undefined1 *)(*(longlong *)(lVar5 + 0x2a8) + 0x2e0);
  }
  return;
}



// FUNCTION 140f0dad2 FUN_140f0dad2 body=115 status=ok
// SIG undefined FUN_140f0dad2(void)

void FUN_140f0dad2(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  *(longlong *)(param_1 + 0x2d0) = param_2;
  lVar1 = *(longlong *)(param_1 + 0x2e8);
  if (lVar1 != 0) {
    lVar2 = *(longlong *)(lVar1 + 0x2a8);
    lVar3 = *(longlong *)(lVar2 + 0x2d0);
    if (DAT_14c950c29 == '\x01') {
      if (lVar3 == 0) {
        lVar3 = 0;
      }
      else {
        FUN_1456cec3c();
        lVar3 = *(longlong *)(lVar2 + 0x2d0);
      }
    }
    *(longlong *)(lVar1 + 0x2b8) = lVar3;
  }
  return;
}



// FUNCTION 140f0db50 FUN_140f0db50 body=387 status=ok
// SIG undefined FUN_140f0db50(void)

undefined8 * FUN_140f0db50(undefined8 *param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  
  FUN_140312256();
  *param_1 = &PTR_FUN_14b2e1050;
  param_1[0x72] = &PTR_LAB_14b2e1690;
  memset(param_1 + 0x73,0,0x108);
  *(undefined4 *)(param_1 + 0x75) = 2;
  *(undefined8 *)((longlong)param_1 + 0x3ac) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3b4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3bc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3cc) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x3d4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3dc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3e4) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x3ec) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3f4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3fc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x404) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x414) = 0;
  *(undefined8 *)((longlong)param_1 + 0x41c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x424) = 0;
  *(undefined8 *)((longlong)param_1 + 0x42c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x434) = 0;
  *(undefined8 *)((longlong)param_1 + 0x43c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x444) = 0;
  *(undefined8 *)((longlong)param_1 + 0x44c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x454) = 0;
  *(undefined8 *)((longlong)param_1 + 0x45c) = 0xffffffff00000000;
  param_1[0x91] = 0;
  param_1[0x92] = 0;
  param_1[0x8f] = 0;
  param_1[0x90] = 0;
  param_1[0x8d] = 0;
  param_1[0x8e] = 0;
  *(undefined1 *)(param_1 + 0x93) = 1;
  param_1[0x94] = 0;
  param_1[0x95] = &PTR_FUN_14b40f028;
  param_1[0x98] = 0;
  param_1[0x96] = 0;
  param_1[0x97] = 0;
  param_1[0x99] = 0x3ecccccd42c80000;
  param_1[0x9a] = 0;
  param_1[0x9b] = 0;
  param_1[0x9c] = 0;
  param_1[0x9d] = 0;
  param_1[0x9e] = 0xbf80000000800000;
  *(undefined4 *)(param_1 + 0x9f) = 0;
  uVar3 = DAT_14c8464e8._4_4_;
  uVar2 = (undefined4)DAT_14c8464e8;
  uVar1 = DAT_14c8464e0._4_4_;
  *(undefined4 *)(param_1 + 0xa0) = (undefined4)DAT_14c8464e0;
  *(undefined4 *)((longlong)param_1 + 0x504) = uVar1;
  *(undefined4 *)(param_1 + 0xa1) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x50c) = uVar3;
  param_1[0xa2] = DAT_14c8464f0;
  param_1[0xa3] = 0;
  FUN_140c7ce82(param_1,0);
  for (lVar4 = *param_2; (lVar4 != 0 && ((*(uint *)(lVar4 + 8) & 0x30) == 0));
      lVar4 = *(longlong *)(lVar4 + 0x20)) {
  }
  return param_1;
}



// FUNCTION 140f0dcd4 FUN_140f0dcd4 body=40 status=ok
// SIG undefined FUN_140f0dcd4(void)

undefined8 FUN_140f0dcd4(undefined8 param_1,int param_2)

{
  FUN_140f0dcfc();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140f0dcfc FUN_140f0dcfc body=281 status=ok
// SIG undefined FUN_140f0dcfc(void)

void FUN_140f0dcfc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a3c1780;
  *(undefined4 *)(param_1 + 0x3f) = 0;
  if (param_1[0x3e] != 0) {
    FUN_1400020a8();
  }
  FUN_140d05b88(param_1 + 0x36);
  *(undefined4 *)(param_1 + 0x33) = 0;
  if (param_1[0x32] != 0) {
    FUN_1400020a8();
  }
  FUN_140f0de16(param_1 + 0x2a);
  *(undefined4 *)(param_1 + 0x29) = 0;
  if (param_1[0x28] != 0) {
    FUN_1400020a8();
  }
  FUN_140f0de16(param_1 + 0x20);
  if (param_1[0x1e] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x1d) = 0;
  if (param_1[0x1c] != 0) {
    FUN_1400020a8();
  }
  FUN_140f0de86(param_1 + 0x14);
  *(undefined4 *)(param_1 + 0x13) = 0;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  FUN_140f0de4e(param_1 + 10);
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 140f0de16 FUN_140f0de16 body=55 status=ok
// SIG undefined FUN_140f0de16(void)

void FUN_140f0de16(longlong *param_1)

{
  FUN_140f0debe(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140f0de4e FUN_140f0de4e body=55 status=ok
// SIG undefined FUN_140f0de4e(void)

void FUN_140f0de4e(longlong *param_1)

{
  FUN_140f0df3a(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140f0de86 FUN_140f0de86 body=55 status=ok
// SIG undefined FUN_140f0de86(void)

void FUN_140f0de86(longlong *param_1)

{
  FUN_140f0dfb6(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140f0debe FUN_140f0debe body=123 status=ok
// SIG undefined FUN_140f0debe(void)

void FUN_140f0debe(longlong param_1,int param_2)

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



// FUNCTION 140f0df3a FUN_140f0df3a body=123 status=ok
// SIG undefined FUN_140f0df3a(void)

void FUN_140f0df3a(longlong param_1,int param_2)

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



// FUNCTION 140f0dfb6 FUN_140f0dfb6 body=123 status=ok
// SIG undefined FUN_140f0dfb6(void)

void FUN_140f0dfb6(longlong param_1,int param_2)

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



// FUNCTION 140f0e032 FUN_140f0e032 body=352 status=ok
// SIG undefined FUN_140f0e032(void)

void FUN_140f0e032(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_108 [44];
  undefined1 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  char local_d0 [16];
  longlong *local_c0;
  undefined4 local_a8 [2];
  char local_a0 [16];
  longlong *local_90;
  undefined4 local_78 [2];
  char local_70;
  longlong *local_60;
  undefined4 local_48 [2];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_70 = '\0';
  local_48[0] = 0;
  uVar2 = FUN_140f0e194(param_2,&DAT_14cbd3258);
  local_a0[0] = '\0';
  local_78[0] = 0;
  uVar3 = FUN_140f0e194(param_2,&DAT_14cbd3260,local_a0);
  local_d0[0] = '\0';
  local_a8[0] = 0;
  local_dc = FUN_140f0e194(param_2,&DAT_14cbd3250,local_d0);
  local_d8 = uVar3;
  local_d4 = uVar2;
  FUN_1447cd2ec(param_1 + 0x98);
  FUN_1448173f8(local_a8);
  if ((local_d0[0] == '\x03') && (local_c0 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_c0 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_c0 + 0x10))();
    }
  }
  FUN_1448173f8(local_78);
  if ((local_a0[0] == '\x03') && (local_90 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_90 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_90 + 0x10))();
    }
  }
  FUN_1448173f8(local_48);
  if ((local_70 == '\x03') && (local_60 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_60 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_60 + 0x10))();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f0e194 FUN_140f0e194 body=264 status=ok
// SIG undefined FUN_140f0e194(void)

undefined4 FUN_140f0e194(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined8 ****ppppuVar3;
  undefined1 auStack_a8 [40];
  undefined1 local_80 [8];
  undefined8 ***local_78 [3];
  ushort local_60;
  byte local_58;
  undefined8 ***local_48 [3];
  ushort local_30;
  byte local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_140f0e29e(param_1,local_80,param_2);
  FUN_1447c3578(local_80,local_48,param_3);
  uVar2 = FUN_1405d5f74(local_48);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_28 * 0x120));
  if (pcVar1 != (code *)0x0) {
    ppppuVar3 = local_48;
    if (0x18 < local_30) {
      ppppuVar3 = (undefined8 ****)local_48[0];
    }
    (*pcVar1)(ppppuVar3);
  }
  if (0x18 < local_30) {
    FUN_1400020a8(local_48[0]);
  }
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_58 * 0x120));
  if (pcVar1 != (code *)0x0) {
    ppppuVar3 = (undefined8 ****)local_78[0];
    if (local_60 < 0x19) {
      ppppuVar3 = local_78;
    }
    (*pcVar1)(ppppuVar3);
  }
  if (0x18 < local_60) {
    FUN_1400020a8(local_78[0]);
  }
  if ((local_20 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 140f0e29e FUN_140f0e29e body=184 status=ok
// SIG undefined FUN_140f0e29e(void)

undefined8 * FUN_140f0e29e(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  longlong *plVar4;
  uint uVar5;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    lVar1 = *param_3;
    uVar2 = (uint)((ulonglong)lVar1 >> 0x10);
    uVar5 = (uint)lVar1 & 0xffff;
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar4 +
                    (ulonglong)
                    ((int)param_1[9] - 1U &
                    (int)((ulonglong)lVar1 >> 0x20) + ((uint)lVar1 << 0x10 | uVar5) +
                    (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar5 >> 4)) * 4);
    if (iVar3 != -1) {
      do {
        plVar4 = (longlong *)(*param_1 + (longlong)iVar3 * 0x48);
        if (*plVar4 == lVar1) {
          if ((plVar4 != (longlong *)0x0) && (plVar4 != (longlong *)&DAT_fffffffffffffff8)) {
            FUN_14034cca6(param_2);
            return param_2;
          }
          break;
        }
        iVar3 = (int)plVar4[8];
      } while (iVar3 != -1);
    }
  }
  *param_2 = 0;
  *(undefined2 *)(param_2 + 4) = 0;
  *(undefined1 *)(param_2 + 5) = 0;
  *(undefined1 *)(param_2 + 6) = 0;
  return param_2;
}



// FUNCTION 140f0e356 FUN_140f0e356 body=315 status=ok
// SIG undefined FUN_140f0e356(void)

byte FUN_140f0e356(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  byte bVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 local_40 [24];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar4 = FUN_140f0e492(*(undefined8 *)(param_1 + 8));
  if ((lVar4 == 0) || (plVar1 = *(longlong **)(lVar4 + 0x160), plVar1 == (longlong *)0x0)) {
LAB_140f0e39d:
    local_48 = *(undefined8 *)(*(longlong *)(param_1 + 0xa0) + 0x4d8);
    FUN_1446dcdd4(local_40);
    if (DAT_14cb86df8 == 0) {
LAB_140f0e47d:
      lVar4 = 0;
    }
    else {
      lVar4 = FUN_144837462(DAT_14cb86df8,local_40);
      if ((lVar4 == 0) || (*(char *)(lVar4 + 0x58) == '\0')) goto LAB_140f0e47d;
    }
    if (local_28 != 0) {
      FUN_1400020a8();
    }
    if (lVar4 == 0) {
      cVar2 = '\0';
    }
    else {
      cVar2 = *(char *)(lVar4 + 0x70);
    }
    if ((*(int *)(param_1 + 0x98) < 1) && (cVar2 == '\0')) {
      bVar3 = 0;
      goto LAB_140f0e412;
    }
    lVar4 = (longlong)*(int *)(*(longlong *)(param_1 + 0xa0) + 0x68);
    if (lVar4 != 0) {
      lVar5 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x60);
      lVar4 = lVar4 * 0xc0;
      do {
        lVar4 = lVar4 + -0xc0;
        bVar3 = FUN_140f0e588(lVar5);
        if (bVar3 != 0) break;
        lVar5 = lVar5 + 0xc0;
      } while (lVar4 != 0);
      bVar3 = bVar3 ^ 1;
      goto LAB_140f0e412;
    }
  }
  else {
    cVar2 = (**(code **)(*plVar1 + 0x10))(plVar1,*(undefined8 *)(param_1 + 0xa0));
    if (cVar2 == '\0') goto LAB_140f0e39d;
  }
  bVar3 = 1;
LAB_140f0e412:
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f0e492 FUN_140f0e492 body=93 status=ok
// SIG undefined FUN_140f0e492(void)

undefined8 FUN_140f0e492(longlong param_1)

{
  uint uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  if (((*(int *)(param_1 + 0x5c) != 0) && (uVar1 = *(uint *)(param_1 + 0x58), -1 < (int)uVar1)) &&
     ((int)uVar1 < DAT_14c9647dc)) {
    puVar4 = (undefined8 *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((puVar4 != (undefined8 *)0x0) && (*(int *)(puVar4 + 2) == *(int *)(param_1 + 0x5c))) &&
       ((*(uint *)(puVar4 + 1) & 0x10200000) == 0)) {
      if ((*(uint *)(puVar4 + 1) & 0x10200000) == 0) {
        plVar3 = (longlong *)*puVar4;
      }
      else {
        plVar3 = (longlong *)0x0;
      }
                    /* WARNING: Could not recover jumptable at 0x000140f0e4e1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(*plVar3 + 0x2b8))();
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 140f0e4f0 FUN_140f0e4f0 body=150 status=ok
// SIG undefined FUN_140f0e4f0(void)

undefined8 FUN_140f0e4f0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined1 local_38 [24];
  longlong local_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = *(undefined8 *)(param_2 + 0x4d8);
  FUN_1446dcdd4(local_38);
  if (DAT_14cb86df8 != 0) {
    lVar1 = FUN_144837462(DAT_14cb86df8,local_38);
    if ((lVar1 != 0) && (*(char *)(lVar1 + 0x58) != '\0')) goto LAB_140f0e541;
  }
  lVar1 = 0;
LAB_140f0e541:
  if (local_20 != 0) {
    FUN_1400020a8();
  }
  if ((lVar1 == 0) || (*(char *)(lVar1 + 0xa8) == '\0')) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f0e588 FUN_140f0e588 body=129 status=ok
// SIG undefined FUN_140f0e588(void)

byte FUN_140f0e588(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  byte unaff_BL;
  
  plVar3 = *(longlong **)(param_1 + 0x70);
  plVar4 = *(longlong **)(param_1 + 0x78);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
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
  if (plVar3 != (longlong *)0x0) {
    unaff_BL = (**(code **)(*plVar3 + 0x28))(plVar3);
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
  return plVar3 != (longlong *)0x0 & unaff_BL;
}



// FUNCTION 140f0e609 thunk_FUN_140f0e60e body=5 status=ok
// SIG undefined thunk_FUN_140f0e60e(void)

undefined8 * thunk_FUN_140f0e60e(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = 0;
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
  param_1[1] = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(undefined4 *)(param_1 + 2) = DAT_14c844848;
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
  param_1[3] = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(undefined4 *)(param_1 + 4) = DAT_14c844848;
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
  param_1[5] = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(undefined4 *)(param_1 + 6) = DAT_14c844848;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined2 *)(param_1 + 0xc) = 0;
  *(byte *)((longlong)param_1 + 0x62) = *(byte *)((longlong)param_1 + 0x62) & 0xc0 | 2;
  param_1[0xd] = 0;
  return param_1;
}



// FUNCTION 140f0e60e FUN_140f0e60e body=660 status=ok
// SIG undefined FUN_140f0e60e(void)

undefined8 * FUN_140f0e60e(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = 0;
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
  param_1[1] = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(undefined4 *)(param_1 + 2) = DAT_14c844848;
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
  param_1[3] = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(undefined4 *)(param_1 + 4) = DAT_14c844848;
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
  param_1[5] = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(undefined4 *)(param_1 + 6) = DAT_14c844848;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined2 *)(param_1 + 0xc) = 0;
  *(byte *)((longlong)param_1 + 0x62) = *(byte *)((longlong)param_1 + 0x62) & 0xc0 | 2;
  param_1[0xd] = 0;
  return param_1;
}



// FUNCTION 140f0e8b0 FUN_140f0e8b0 body=40 status=ok
// SIG undefined FUN_140f0e8b0(void)

undefined8 FUN_140f0e8b0(undefined8 param_1,int param_2)

{
  FUN_140f0e8d8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140f0e8d8 FUN_140f0e8d8 body=179 status=ok
// SIG undefined FUN_140f0e8d8(void)

void FUN_140f0e8d8(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b91b900;
  plVar2 = (longlong *)param_1[0x1c];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if ((param_1[0x19] != 0 & DAT_14cb26569) == 1) {
    FUN_1400848c0(*(undefined8 *)(param_1[0x19] + 0x50));
  }
  if ((param_1[0x13] != 0) && ((DAT_14cb26569 & 1) != 0)) {
    FUN_1400848c0(*(undefined8 *)(param_1[0x13] + 0x50));
  }
  FUN_140f0e98b(param_1[8],*(undefined4 *)(param_1 + 9));
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  FUN_140f0e98b(param_1[6],*(undefined4 *)(param_1 + 7));
  if (param_1[6] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140f0e98b FUN_140f0e98b body=71 status=ok
// SIG undefined FUN_140f0e98b(void)

void FUN_140f0e98b(longlong param_1,int param_2)

{
  byte bVar1;
  longlong *plVar2;
  
  if (param_2 != 0) {
    plVar2 = (longlong *)(param_1 + 0x48);
    bVar1 = DAT_14cb26569;
    do {
      if ((*plVar2 != 0) && ((bVar1 & 1) != 0)) {
        FUN_1400848c0(*(undefined8 *)(*plVar2 + 0x50));
        bVar1 = DAT_14cb26569;
      }
      plVar2 = plVar2 + 0xb;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140f0e9d8 FUN_140f0e9d8 body=57 status=ok
// SIG undefined FUN_140f0e9d8(void)

void FUN_140f0e9d8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba45e0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba45e0 = FUN_140002ddd(FUN_1465be113,uVar1,L"GrenadeBehaviorDef_PayloadShooting");
  }
  return;
}



// FUNCTION 140f0ea20 FUN_140f0ea20 body=168 status=ok
// SIG undefined FUN_140f0ea20(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140f0ea20(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14b0dd3c0;
  FUN_140f0eac8(param_1[5],*(undefined4 *)(param_1 + 6));
  if (param_1[5] != 0) {
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



// FUNCTION 140f0eac8 FUN_140f0eac8 body=73 status=ok
// SIG undefined FUN_140f0eac8(void)

void FUN_140f0eac8(longlong param_1,int param_2)

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



// FUNCTION 140f0eb20 FUN_140f0eb20 body=40 status=ok
// SIG undefined FUN_140f0eb20(void)

undefined8 FUN_140f0eb20(undefined8 param_1,int param_2)

{
  FUN_140595c52();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140f0eb48 FUN_140f0eb48 body=175 status=ok
// SIG undefined FUN_140f0eb48(void)

undefined8 FUN_140f0eb48(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  undefined4 local_50;
  undefined8 *local_48;
  undefined8 uStack_40;
  undefined8 *local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = (undefined8 *)0x0;
  uStack_30 = 0;
  local_48 = (undefined8 *)0x0;
  uStack_40 = 1;
  FUN_140290316(&local_48,0);
  *local_48 = param_1;
  local_58 = local_48;
  local_50 = (undefined4)uStack_40;
  FUN_140f0ebf8(&local_58,param_2,&local_38);
  uVar1 = *local_38;
  if (local_48 != (undefined8 *)0x0) {
    FUN_1400020a8(local_48);
  }
  if (local_38 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f0ebf8 FUN_140f0ebf8 body=1858 status=ok
// SIG undefined FUN_140f0ebf8(void)

void FUN_140f0ebf8(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  void *_Src;
  ulonglong uVar6;
  int iVar7;
  DWORD DVar8;
  DWORD DVar9;
  undefined8 uVar10;
  undefined4 *puVar11;
  uint *puVar12;
  uint uVar13;
  undefined ***pppuVar14;
  uint *puVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined8 *puVar18;
  longlong lVar19;
  ulonglong uVar20;
  longlong lVar21;
  longlong lVar22;
  undefined1 auStack_c8 [32];
  code **local_a8;
  void *local_98;
  undefined8 uStack_90;
  code *local_88 [2];
  undefined ***local_78;
  undefined **local_68;
  void *local_60;
  ulonglong uStack_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  iVar7 = (int)param_1[1];
  if (iVar7 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar7);
  }
  *(undefined4 *)(param_3 + 1) = 0;
  if (*(int *)((longlong)param_3 + 0xc) != iVar7) {
    FUN_14177f3d8(param_3);
  }
  if ((int)param_1[1] == 0) goto LAB_140f0ef13;
  iVar7 = *(int *)(*(longlong *)(*(longlong *)*param_1 + 0x40) + 8);
  if (0 < (int)param_1[1]) {
    uVar20 = 0;
    do {
      lVar21 = *(longlong *)(*param_1 + uVar20 * 8);
      if (iVar7 < 3) {
        uVar10 = FUN_14001cc68(0xfc0,0x10);
        FUN_14724e454(uVar10,lVar21,param_2);
      }
      else {
        uVar10 = FUN_14001cc68(0xea0,0x10);
        FUN_140532e0e(uVar10,lVar21,param_2);
      }
      iVar4 = (int)param_3[1];
      *(uint *)(param_3 + 1) = iVar4 + 1U;
      if (*(uint *)((longlong)param_3 + 0xc) < iVar4 + 1U) {
        FUN_14028f9ee(param_3,iVar4);
      }
      *(undefined8 *)(*param_3 + (longlong)iVar4 * 8) = uVar10;
      *(bool *)(*(longlong *)(*param_3 + (longlong)((int)param_3[1] + -1) * 8) + 0x8b0) =
           uVar20 == 0;
      *(bool *)(*(longlong *)(*param_3 + (longlong)((int)param_3[1] + -1) * 8) + 0x8b1) =
           uVar20 == (int)param_1[1] - 1;
      if (0 < *(int *)(lVar21 + 0x100)) {
        lVar22 = 0;
        lVar19 = 0;
        do {
          plVar5 = *(longlong **)(*(longlong *)(lVar21 + 0xf8) + lVar22);
          (**(code **)(*plVar5 + 0x30))
                    (plVar5,lVar21,*(undefined8 *)(*param_3 + (longlong)((int)param_3[1] + -1) * 8))
          ;
          lVar19 = lVar19 + 1;
          lVar22 = lVar22 + 0x10;
        } while (lVar19 < *(int *)(lVar21 + 0x100));
      }
      uVar20 = uVar20 + 1;
    } while ((longlong)uVar20 < (longlong)(int)param_1[1]);
  }
  if (iVar7 < 3) goto LAB_140f0ef13;
  local_98 = (void *)0x0;
  uVar13 = *(uint *)(param_3 + 1);
  _Src = (void *)*param_3;
  uStack_90 = CONCAT44(uStack_90._4_4_,uVar13);
  if ((longlong)(int)uVar13 == 0) {
    uStack_90 = (ulonglong)uVar13;
  }
  else {
    FUN_1403a4e26(&local_98,uVar13,0);
    memcpy(local_98,_Src,(longlong)(int)uVar13 << 3);
  }
  lVar21 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar7 = *(int *)(lVar21 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar7 != 2) {
      if (iVar7 != 1) goto LAB_140f0edd9;
      DVar8 = FUN_140ad26c0();
      DVar9 = GetCurrentThreadId();
      if (DVar8 == DVar9) goto LAB_140f0edde;
      goto LAB_140f0ee58;
    }
LAB_140f0edde:
    if (0 < (int)uStack_90) {
      iVar7 = *(int *)(DAT_14ca461c8 + 4);
      uVar16 = 1;
      uVar17 = 1;
      lVar21 = 0;
      do {
        lVar19 = *(longlong *)((longlong)local_98 + lVar21 * 8);
        FUN_142bbd988(lVar19);
        if ((*(char *)(lVar19 + 0x8b2) == '\x01') &&
           (*(undefined1 *)(lVar19 + 0xe30) = uVar17, uVar17 = uVar16, iVar7 != 0)) {
          uVar17 = 0;
          uVar16 = 0;
        }
        lVar21 = lVar21 + 1;
      } while (lVar21 < (int)uStack_90);
    }
  }
  else {
LAB_140f0edd9:
    if (iVar7 == 0x10) goto LAB_140f0edde;
LAB_140f0ee58:
    if (DAT_14ca9a438 == '\0') {
      if ((DAT_14c86a9f8 == '\x01') && (iVar7 = *(int *)(lVar21 + 0xc60), iVar7 != 2)) {
        if (iVar7 == 1) {
          DVar8 = FUN_140ad26c0();
          DVar9 = GetCurrentThreadId();
          if (DVar8 == DVar9) goto LAB_140f0f2c0;
        }
        goto LAB_140f0ee89;
      }
LAB_140f0f2c0:
      if (0 < (int)uStack_90) {
        iVar7 = *(int *)(DAT_14ca461c8 + 4);
        uVar16 = 1;
        uVar17 = 1;
        lVar21 = 0;
        do {
          lVar19 = *(longlong *)((longlong)local_98 + lVar21 * 8);
          FUN_142bbd988(lVar19);
          if ((*(char *)(lVar19 + 0x8b2) == '\x01') &&
             (*(undefined1 *)(lVar19 + 0xe30) = uVar17, uVar17 = uVar16, iVar7 != 0)) {
            uVar17 = 0;
            uVar16 = 0;
          }
          lVar21 = lVar21 + 1;
        } while (lVar21 < (int)uStack_90);
      }
    }
    else {
LAB_140f0ee89:
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar12 = (uint *)*puVar2;
        if (puVar12 != (uint *)0x0) goto LAB_140f0efe1;
        while( true ) {
          uVar13 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar13 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar13 | 1;
            __tlregdtor(&LAB_142fe9a45);
          }
          lVar21 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar11 = *(undefined4 **)(lVar21 + 0x310);
          *(undefined8 *)(lVar21 + 0x310) = 0;
          if (puVar11 == (undefined4 *)0x0) {
            puVar11 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar11 = 0xffffffff;
          *(undefined4 **)(puVar11 + 0x10) = puVar11 + 0x16;
          puVar11[0x12] = 0;
          *puVar2 = puVar11;
          FUN_140217a48(puVar2);
          puVar12 = (uint *)*puVar2;
LAB_140f0efe1:
          puVar18 = (undefined8 *)(*(longlong *)(puVar12 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar15 = (uint *)(puVar18 + 0x17);
          uVar13 = puVar12[0x12];
          if (puVar15 <= puVar12 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar12 + 0x10) = puVar12 + 0x4000;
            LOCK();
            uVar3 = *puVar12;
            *puVar12 = *puVar12 + uVar13 + 1;
            UNLOCK();
            if ((uVar3 ^ uVar13) != 0xffffffff) break;
            puVar12 = (uint *)*puVar2;
            *puVar12 = 0xffffffff;
            *(uint **)(puVar12 + 0x10) = puVar12 + 0x16;
            puVar12[0x12] = 0;
            *puVar2 = puVar12;
            puVar18 = (undefined8 *)((longlong)puVar12 + 0x5fU & 0xfffffffffffffff8);
            puVar15 = (uint *)(puVar18 + 0x17);
            uVar13 = 0;
            if (puVar15 <= puVar12 + 0x4000) {
              uVar13 = 1;
              goto LAB_140f0f061;
            }
          }
        }
        uVar13 = uVar13 + 1;
LAB_140f0f061:
        *(uint **)(puVar12 + 0x10) = puVar15;
        puVar12[0x12] = uVar13;
        iVar7 = 0;
        FUN_1447247dc(puVar18,0);
        *puVar18 = &PTR_FUN_14a2f1430;
        puVar18[0x15] = local_98;
        local_98 = (void *)0x0;
        *(int *)(puVar18 + 0x16) = (int)uStack_90;
        *(undefined4 *)((longlong)puVar18 + 0xb4) = uStack_90._4_4_;
        uStack_90 = 0;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar13 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar13 < 2) {
            uVar20 = (ulonglong)(byte)(&DAT_149e38edc)[uVar13];
          }
          else {
            uVar20 = 2;
          }
        }
        else {
          iVar7 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                  *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar20 = 5;
        }
        if (*(code **)(puVar18[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar18[0xe] + 0x18))(puVar18 + 0xe,puVar18 + 9);
        }
        puVar18[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar18[9] = puVar18;
        puVar18[10] = puVar18;
        lVar21 = *(longlong *)
                  (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x2b8);
        if (lVar21 == 0) {
          uVar6 = 1;
          if ((char)uVar20 != '\x06') {
            uVar6 = uVar20;
          }
          uVar20 = uVar6;
          uVar10 = 0;
        }
        else {
          if ((char)uVar20 == '\x06') {
            uVar20 = *(ulonglong *)(lVar21 + 0x38) >> 0x3b;
          }
          uVar10 = *(undefined8 *)(lVar21 + 0x30);
        }
        puVar18[0xf] = uVar10;
        puVar18[0x10] = uVar20 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar18 + 0x1c) = iVar7;
        if (puVar18 == (undefined8 *)0x0) {
          local_88[0] = (code *)CONCAT71(local_88[0]._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar18 + 1) = *(int *)(puVar18 + 1) + 1;
          UNLOCK();
          local_88[0] = (code *)CONCAT71(local_88[0]._1_7_,1);
          FUN_1447439e4(puVar18);
          LOCK();
          piVar1 = (int *)(puVar18 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar18)(puVar18,1);
          }
        }
      }
      else {
        local_a8 = local_88;
        local_78 = (undefined ***)0x0;
        local_68 = &PTR_LAB_14a2f13c0;
        local_60 = local_98;
        uStack_58 = uStack_90;
        local_98 = (void *)0x0;
        uStack_90 = 0;
        local_88[0] = FUN_142ffe29e;
        FUN_14005a792(&DAT_14ca9a440,L"InitializeMultiRendererRayTracingFlags",&DAT_14ca473d4);
        if (local_88[0] != (code *)0x0) {
          pppuVar14 = local_78;
          if (local_78 == (undefined ***)0x0) {
            pppuVar14 = &local_68;
          }
          (*(code *)(*pppuVar14)[2])();
        }
      }
    }
  }
  if (local_98 != (void *)0x0) {
    FUN_1400020a8();
  }
LAB_140f0ef13:
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f0f33c FUN_140f0f33c body=793 status=ok
// SIG undefined FUN_140f0f33c(void)

int * FUN_140f0f33c(longlong *param_1,int *param_2,undefined8 *param_3)

{
  uint *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  byte bVar7;
  int iVar8;
  ulonglong uVar9;
  longlong *plVar10;
  longlong *plVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  longlong lVar18;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar13 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar13 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar13) {
      FUN_144869a3c(param_1,iVar13);
    }
    iVar14 = (int)param_1[5];
    if (iVar14 == 0) {
      iVar5 = -1;
    }
    else {
      iVar5 = iVar14 + 0x1e;
      if (-1 < iVar14 + -1) {
        iVar5 = iVar14 + -1;
      }
      iVar5 = iVar5 >> 5;
    }
    plVar10 = param_1 + 2;
    iVar8 = iVar14 + 1;
    iVar12 = iVar14 + 0x1f;
    if (-1 < iVar14) {
      iVar12 = iVar14;
    }
    if (iVar12 >> 5 == iVar5) {
      *(int *)(param_1 + 5) = iVar8;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar14) {
        if (iVar14 + 0x20U < 0xa0) {
          iVar8 = 0x80;
          iVar5 = iVar14;
        }
        else {
          uVar15 = iVar14 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar16 = 4;
            if (4 < uVar15) {
              uVar16 = uVar15;
            }
          }
          else {
            uVar16 = (uVar15 * 3 >> 3) + uVar15 + 0x10;
          }
          uVar9 = FUN_144a3809e(uVar16 << 2,0);
          iVar5 = (int)(uVar9 >> 2);
          iVar8 = -0x20;
          if ((int)uVar15 <= iVar5) {
            iVar8 = iVar5 << 5;
          }
          iVar5 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar8;
        FUN_1446efbd8(plVar10,iVar5);
        iVar8 = (int)param_1[5] + 1;
      }
      iVar5 = iVar8 + 0x1f;
      if (-1 < iVar8) {
        iVar5 = iVar8;
      }
      *(int *)(param_1 + 5) = iVar8;
      if (iVar8 % 0x20 != 0) {
        plVar11 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar11 = plVar10;
        }
        bVar7 = -(char)(iVar8 % 0x20);
        *(uint *)((longlong)plVar11 + (longlong)(iVar5 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar11 + (longlong)(iVar5 >> 5) * 4) << (bVar7 & 0x1f)) >>
             (bVar7 & 0x1f);
      }
    }
    lVar6 = (longlong)iVar13;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar10 = (longlong *)param_1[4];
    }
    bVar7 = (byte)iVar14 & 0x1f;
    puVar1 = (uint *)((longlong)plVar10 + (longlong)(iVar12 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar7 | 0xfffffffeU >> 0x20 - bVar7);
  }
  else {
    iVar13 = (int)param_1[6];
    lVar6 = (longlong)iVar13;
    iVar14 = *(int *)(*param_1 + 4 + lVar6 * 0x10);
    *(int *)(param_1 + 6) = iVar14;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar14 * 0x10) = 0xffffffff;
    }
  }
  iVar14 = 1;
  plVar10 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar10 = (longlong *)param_1[4];
  }
  iVar5 = iVar13 + 0x1f;
  if (-1 < iVar13) {
    iVar5 = iVar13;
  }
  puVar1 = (uint *)((longlong)plVar10 + (longlong)(iVar5 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar13 & 0x1f);
  lVar2 = *param_1;
  lVar6 = lVar6 * 0x10;
  uVar3 = *param_3;
  *(undefined8 *)(lVar2 + lVar6) = uVar3;
  *(undefined4 *)(lVar2 + 8 + lVar6) = 0xffffffff;
  uVar17 = (uint)((ulonglong)uVar3 >> 0x20);
  uVar15 = uVar17 ^ (uint)uVar3;
  uVar16 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (1 < uVar16) {
    plVar10 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar10 = (longlong *)param_1[8];
    }
    iVar5 = *(int *)((longlong)plVar10 + (ulonglong)((int)param_1[9] - 1U & uVar15) * 4);
    if (iVar5 != -1) {
      lVar4 = *param_1;
      do {
        lVar18 = (longlong)iVar5 * 0x10;
        if ((*(uint *)(lVar4 + lVar18) == (uint)uVar3) && (*(uint *)(lVar4 + 4 + lVar18) == uVar17))
        {
          *(undefined8 *)(lVar4 + lVar18) = uVar3;
          FUN_14096bdba(param_1,iVar13,1);
          goto LAB_140f0f4b5;
        }
        iVar5 = *(int *)((undefined8 *)(lVar4 + lVar18) + 1);
      } while (iVar5 != -1);
    }
  }
  if (3 < uVar16) {
    uVar9 = (ulonglong)(uVar16 & 0xfffffffe) + 0xf;
    lVar4 = 0x3f;
    if (uVar9 != 0) {
      for (; uVar9 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    iVar14 = 1 << ((byte)lVar4 & 0x1f);
  }
  iVar5 = iVar13;
  if (((int)uVar16 < 1) || (iVar14 <= (int)param_1[9])) {
    uVar15 = (int)param_1[9] - 1U & uVar15;
    *(uint *)(lVar2 + lVar6 + 0xc) = uVar15;
    plVar10 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar10 = param_1 + 7;
    }
    *(undefined4 *)(lVar2 + lVar6 + 8) =
         *(undefined4 *)
          ((longlong)plVar10 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar15) * 4);
    plVar10 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar10 = param_1 + 7;
    }
    *(int *)((longlong)plVar10 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar15) * 4) =
         iVar13;
  }
  else {
    *(int *)(param_1 + 9) = iVar14;
    FUN_140f0f656(param_1);
  }
LAB_140f0f4b5:
  *param_2 = iVar5;
  return param_2;
}



// FUNCTION 140f0f656 FUN_140f0f656 body=650 status=ok
// SIG undefined FUN_140f0f656(void)

void FUN_140f0f656(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint *puVar12;
  ulonglong uVar13;
  int iVar14;
  longlong lVar15;
  
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
    if ((int)uVar9 < 1) goto LAB_140f0f6ba;
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
  } while (uVar9 != uVar2);
LAB_140f0f6ba:
  iVar6 = (int)param_1[5];
  if (iVar6 == 0) {
    uVar3 = 0;
    uVar13 = 1;
    iVar14 = 0;
    iVar4 = 0;
  }
  else {
    puVar12 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar12 = (uint *)(param_1 + 2);
    }
    uVar9 = *puVar12;
    if (uVar9 == 0) {
      iVar14 = iVar6 + 0x1e;
      if (-1 < iVar6 + -1) {
        iVar14 = iVar6 + -1;
      }
      uVar3 = 0;
      uVar13 = (ulonglong)(uint)(iVar14 >> 5);
      if (iVar14 >> 5 < 1) {
        uVar13 = uVar3;
      }
      iVar4 = 0;
      do {
        if (uVar13 == uVar3) {
          return;
        }
        iVar4 = iVar4 + 0x20;
        uVar9 = puVar12[uVar3 + 1];
        uVar3 = uVar3 + 1;
      } while (uVar9 == 0);
    }
    else {
      uVar3 = 0;
      iVar4 = 0;
    }
    uVar13 = (ulonglong)(-uVar9 & uVar9);
    uVar7 = uVar13 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar7 != 0) {
      for (; uVar7 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iVar14 = (iVar4 - ((uint)lVar8 ^ 0x3f)) + 0x3e;
    if (iVar6 <= iVar14) {
      iVar14 = iVar6;
    }
  }
  if (iVar14 < iVar6) {
    uVar9 = 0xffffffff;
    do {
      lVar8 = *param_1;
      lVar15 = (longlong)iVar14 * 0x10;
      uVar7 = (longlong)(int)(*(uint *)(lVar8 + 4 + lVar15) ^ *(uint *)(lVar8 + lVar15)) &
              (longlong)(int)param_1[9] - 1U;
      iVar6 = (int)uVar7;
      *(int *)(lVar8 + 0xc + lVar15) = iVar6;
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(undefined4 *)(lVar8 + 8 + lVar15) =
           *(undefined4 *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & uVar7) * 4);
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(int *)((longlong)plVar5 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar14;
      uVar9 = ~(uint)uVar13 & uVar9;
      puVar12 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar12 = (uint *)(param_1 + 2);
      }
      iVar6 = (int)param_1[5];
      iVar14 = (int)uVar3;
      lVar8 = (longlong)iVar14;
      uVar2 = puVar12[lVar8] & uVar9;
      if (uVar2 == 0) {
        iVar10 = iVar6 + 0x1e;
        if (-1 < iVar6 + -1) {
          iVar10 = iVar6 + -1;
        }
        iVar10 = iVar10 >> 5;
        iVar11 = iVar10;
        if (iVar10 < iVar14) {
          iVar11 = iVar14;
        }
        if (iVar10 <= iVar14) {
          return;
        }
        lVar15 = 0;
        while( true ) {
          iVar4 = iVar4 + 0x20;
          uVar2 = puVar12[lVar8 + lVar15 + 1];
          if (uVar2 != 0) break;
          lVar15 = lVar15 + 1;
          if (iVar11 - lVar8 == lVar15) {
            return;
          }
        }
        uVar3 = (ulonglong)(iVar14 + (int)lVar15 + 1);
        uVar9 = 0xffffffff;
      }
      uVar13 = (ulonglong)(-uVar2 & uVar2);
      uVar7 = uVar13 * 2 + 1;
      lVar8 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar14 = (iVar4 - ((uint)lVar8 ^ 0x3f)) + 0x3e;
    } while (iVar14 < iVar6);
  }
  return;
}



// FUNCTION 140f0f8ee FUN_140f0f8ee body=31 status=ok
// SIG undefined FUN_140f0f8ee(void)

undefined8 FUN_140f0f8ee(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140f0f91c FUN_140f0f91c body=31 status=ok
// SIG undefined FUN_140f0f91c(void)

undefined8 FUN_140f0f91c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140f0f93c FUN_140f0f93c body=42 status=ok
// SIG undefined FUN_140f0f93c(void)

void FUN_140f0f93c(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_140f0f97c(param_2);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000140f0f951. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x38))();
    return;
  }
  uVar2 = FUN_1457c6bf8();
  FUN_140fba784(uVar2);
  return;
}



// FUNCTION 140f0f966 FUN_140f0f966 body=21 status=ok
// SIG undefined FUN_140f0f966(void)

void FUN_140f0f966(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1457c6bf8();
  FUN_140fba784(uVar1);
  return;
}



// FUNCTION 140f0f97c FUN_140f0f97c body=191 status=ok
// SIG undefined FUN_140f0f97c(void)

longlong FUN_140f0f97c(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  undefined *puVar7;
  
  FUN_140f0fa3c();
  lVar3 = *param_1;
  if (DAT_14cbe6bb0 != DAT_14cbe6bdc) {
    uVar4 = (uint)((ulonglong)lVar3 >> 0x10);
    uVar6 = (uint)lVar3 & 0xffff;
    puVar7 = &DAT_14cbe6be0;
    if (DAT_14cbe6be8 != (undefined *)0x0) {
      puVar7 = DAT_14cbe6be8;
    }
    iVar2 = *(int *)(puVar7 + (ulonglong)
                              (DAT_14cbe6bf0 - 1U &
                              (int)((ulonglong)lVar3 >> 0x20) + ((uint)lVar3 << 0x10 | uVar6) +
                              (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar6 >> 4)) * 4);
    while (iVar2 != -1) {
      plVar1 = (longlong *)(DAT_14cbe6ba8 + (longlong)iVar2 * 0x18);
      if (*plVar1 == lVar3) {
        if (plVar1 + 1 != (longlong *)0x0 && plVar1 != (longlong *)0x0) {
          return plVar1[1];
        }
        break;
      }
      iVar2 = (int)plVar1[2];
    }
  }
  lVar5 = DAT_14cbe6ba0;
  if (lVar3 != 0) {
    lVar5 = 0;
  }
  return lVar5;
}



// FUNCTION 140f0fa3c FUN_140f0fa3c body=152 status=ok
// SIG undefined FUN_140f0fa3c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140f0fa3c(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbe6bf8) {
    FUN_144b3d300(&DAT_14cbe6bf8);
    if (DAT_14cbe6bf8 == -1) {
      DAT_14cbe6bc8 = 0;
      DAT_14cbe6bd0 = 0;
      DAT_14cbe6ba8 = 0;
      _DAT_14cbe6bb0 = 0;
      _DAT_14cbe6bd4 = 0xffffffff00000080;
      DAT_14cbe6bdc = 0;
      DAT_14cbe6be8 = 0;
      DAT_14cbe6bf0 = 0;
      atexit(FUN_144345445);
      _Init_thread_footer(&DAT_14cbe6bf8);
      return;
    }
  }
  return;
}



// FUNCTION 140f0fad4 FUN_140f0fad4 body=16 status=ok
// SIG undefined FUN_140f0fad4(void)

byte FUN_140f0fad4(void)

{
  byte bVar1;
  
  bVar1 = FUN_140280fd6();
  return bVar1 ^ 1;
}



// FUNCTION 140f0fae4 FUN_140f0fae4 body=58 status=ok
// SIG undefined FUN_140f0fae4(void)

void FUN_140f0fae4(undefined8 *param_1)

{
  char cVar1;
  
  cVar1 = FUN_1403ae288();
  if (cVar1 != '\0') {
    FUN_140d9136e(param_1);
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined1 *)((longlong)param_1 + 0x1c) = 0xff;
    *(undefined4 *)(param_1 + 3) = 0;
    param_1[2] = 0;
  }
  return;
}



// FUNCTION 140f0fb1e FUN_140f0fb1e body=180 status=ok
// SIG undefined FUN_140f0fb1e(void)

void FUN_140f0fb1e(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  undefined8 *puVar2;
  uint uVar3;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    uVar3 = param_2 - iVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < uVar3) {
      FUN_140f0fbd2(param_1,iVar1);
    }
    puVar2 = (undefined8 *)((longlong)iVar1 * 0x58 + *param_1);
    for (; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar2 = 0;
      *(undefined1 *)(puVar2 + 1) = 1;
      puVar2[2] = 0;
      puVar2[3] = 0;
      *(undefined8 *)((longlong)puVar2 + 0x1c) = 0;
      *(undefined8 *)((longlong)puVar2 + 0x24) = 0;
      *(undefined1 *)((longlong)puVar2 + 0x2c) = 0xff;
      puVar2[6] = 0;
      puVar2[7] = 0;
      puVar2[8] = 0;
      puVar2[9] = 0;
      puVar2[10] = 0;
      puVar2 = puVar2 + 0xb;
    }
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (FUN_148e67860(param_1,param_2,iVar1 - param_2), param_3 == '\x01')) {
      FUN_148e678bc(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 140f0fbd2 FUN_140f0fbd2 body=366 status=ok
// SIG undefined FUN_140f0fbd2(void)

void FUN_140f0fbd2(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140f0fc57;
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
LAB_140f0fc57:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x58)) {
    uVar7 = uVar5 / 0x58 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x58,8);
  return;
}



// FUNCTION 140f0fd40 FUN_140f0fd40 body=583 status=ok
// SIG undefined FUN_140f0fd40(void)

void FUN_140f0fd40(longlong param_1,int param_2,longlong param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined8 uStack_64;
  longlong local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined8 *local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar5 = *(longlong *)(param_1 + 0x270);
  iVar6 = -1;
  if ((longlong)*(int *)(param_1 + 0x278) != 0) {
    lVar7 = (longlong)*(int *)(param_1 + 0x278) << 3;
    lVar8 = 0;
    do {
      if (*(int *)(*(longlong *)(lVar5 + lVar8 * 8) + 8) == param_2) {
        iVar6 = (int)lVar8;
        break;
      }
      lVar8 = lVar8 + 1;
      lVar7 = lVar7 + -8;
    } while (lVar7 != 0);
  }
  puVar2 = *(undefined8 **)(lVar5 + (longlong)iVar6 * 8);
  *(undefined8 *)(lVar5 + (longlong)iVar6 * 8) = 0;
  FUN_140f1002a(param_1 + 0x270);
  if (((((*(int *)(puVar2 + 2) != 0) && (uVar1 = *(uint *)((longlong)puVar2 + 0xc), -1 < (int)uVar1)
        ) && ((int)uVar1 < DAT_14c9647dc)) &&
      ((plVar3 = (longlong *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
       plVar3 != (longlong *)0x0 && ((int)plVar3[2] == *(int *)(puVar2 + 2))))) &&
     (((*(uint *)(plVar3 + 1) & 0x10200000) == 0 &&
      (plVar3 = (longlong *)*plVar3, plVar3 != (longlong *)0x0)))) {
    (**(code **)(*plVar3 + 0x2b8))(plVar3,puVar2 + 3,*(undefined4 *)(param_3 + 0x28),puVar2 + 9);
  }
  if ((longlong)*(int *)(puVar2 + 0xe) != 0) {
    lVar5 = 0;
    do {
      if ((*(int *)(puVar2[0xd] + 8 + lVar5) != 0) && (*(longlong *)(puVar2[0xd] + lVar5) != 0))
      goto LAB_140f0fe3c;
      lVar5 = lVar5 + 0x10;
    } while ((longlong)*(int *)(puVar2 + 0xe) * 0x10 != lVar5);
  }
  if ((longlong)*(int *)(param_1 + 0x288) != 0) {
    lVar5 = 0;
    do {
      if ((*(int *)(*(longlong *)(param_1 + 0x280) + 8 + lVar5) != 0) &&
         (*(longlong *)(*(longlong *)(param_1 + 0x280) + lVar5) != 0)) goto LAB_140f0fe3c;
      lVar5 = lVar5 + 0x10;
    } while ((longlong)*(int *)(param_1 + 0x288) * 0x10 != lVar5);
  }
  goto LAB_140f0fef7;
LAB_140f0fe3c:
  local_40 = puVar2 + 0xb;
  local_58 = 0;
  uStack_50 = 0;
  uStack_70 = 0;
  uStack_6c = 0;
  uStack_68 = 0;
  uStack_64 = 0;
  local_48 = 7;
  if (*(int *)(puVar2 + 2) == 0) {
LAB_140f0ff3b:
    local_78 = 0;
  }
  else {
    uVar1 = *(uint *)((longlong)puVar2 + 0xc);
    local_78 = 0;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      puVar4 = (undefined8 *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((puVar4 == (undefined8 *)0x0) ||
         ((*(int *)(puVar4 + 2) != *(int *)(puVar2 + 2) ||
          ((*(uint *)(puVar4 + 1) & 0x10200000) != 0)))) goto LAB_140f0ff3b;
      local_78 = *puVar4;
    }
  }
  FUN_1447715ec(&uStack_70,puVar2 + 3);
  local_48 = *(undefined4 *)(param_3 + 0x28);
  FUN_140f0ff88(puVar2 + 0xd,&local_78);
  FUN_140f0ff88(param_1 + 0x280,&local_78);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
LAB_140f0fef7:
  FUN_140f1049c(param_1);
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140f0ff88 FUN_140f0ff88 body=162 status=ok
// SIG undefined FUN_140f0ff88(void)

void FUN_140f0ff88(longlong *param_1,undefined8 param_2)

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
        goto LAB_140f10015;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_140f10015:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 140f1002a FUN_140f1002a body=101 status=ok
// SIG undefined FUN_140f1002a(void)

void FUN_140f1002a(longlong *param_1,uint param_2)

{
  void *_Dst;
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  lVar1 = *param_1;
  _Dst = (void *)(lVar1 + (longlong)(int)param_2 * 8);
  FUN_140f1008f(_Dst,1);
  iVar2 = (int)param_1[1];
  iVar4 = ~param_2 + iVar2;
  if (iVar4 != 0) {
    iVar3 = 1;
    if (iVar4 < 1) {
      iVar3 = iVar4;
    }
    memmove(_Dst,(void *)(lVar1 + (longlong)(iVar2 - iVar3) * 8),(longlong)iVar3 << 3);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 + -1;
  return;
}



// FUNCTION 140f1008f FUN_140f1008f body=54 status=ok
// SIG undefined FUN_140f1008f(void)

void FUN_140f1008f(longlong param_1,int param_2)

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



// FUNCTION 140f100c6 FUN_140f100c6 body=149 status=ok
// SIG undefined FUN_140f100c6(void)

undefined8 * FUN_140f100c6(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b433ff8;
  FUN_144760e21(param_1[0xd],*(undefined4 *)(param_1 + 0xe));
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[10];
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
  *param_1 = &PTR_FUN_14b433f68;
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140f1015c FUN_140f1015c body=831 status=ok
// SIG undefined FUN_140f1015c(void)

void FUN_140f1015c(longlong *param_1,int *param_2,int param_3,undefined8 param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined1 auStack_f8 [40];
  undefined8 local_d0;
  undefined4 local_c8;
  int local_c0 [6];
  longlong local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  longlong local_80;
  undefined8 uStack_78;
  int local_68;
  undefined4 uStack_64;
  longlong *local_60;
  longlong local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if ((*(uint *)(param_1 + 1) & 0x10) == 0) {
    plVar6 = (longlong *)param_1[4];
  }
  else {
    plVar6 = (longlong *)0x0;
  }
  if (param_3 != 0) goto LAB_140f10445;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_d0 = DAT_14cb8dd60;
  local_c8 = DAT_14cb8dd68;
  FUN_1448075d0(&local_68);
  iVar3 = local_68;
  iVar2 = *param_2;
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  if (iVar2 == iVar3) {
    plVar9 = (longlong *)param_1[0x2c];
    if (plVar9 == (longlong *)0x0) {
      (**(code **)(*param_1 + 0x2d8))(param_1,&local_68,param_2,&DAT_14c9485f0);
      plVar9 = local_60;
      if (local_60 == (longlong *)0x0) {
        param_1[0x2c] = CONCAT44(uStack_64,local_68);
        plVar8 = (longlong *)param_1[0x2d];
        if (plVar8 != (longlong *)0x0) {
          param_1[0x2d] = 0;
LAB_140f103a7:
          LOCK();
          plVar9 = plVar8 + 1;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          if ((int)*plVar9 == 0) {
            (**(code **)*plVar8)(plVar8);
            LOCK();
            piVar1 = (int *)((longlong)plVar8 + 0xc);
            *piVar1 = *piVar1 + -1;
            iVar2 = *piVar1;
            UNLOCK();
joined_r0x000140f103e0:
            if (iVar2 == 0) {
              (**(code **)(*plVar8 + 0x10))(plVar8);
            }
          }
        }
      }
      else {
        LOCK();
        *(int *)(local_60 + 1) = (int)local_60[1] + 1;
        UNLOCK();
        param_1[0x2c] = CONCAT44(uStack_64,local_68);
        plVar8 = (longlong *)param_1[0x2d];
        if (local_60 == plVar8) {
          LOCK();
          plVar8 = local_60 + 1;
          *(int *)plVar8 = (int)*plVar8 + -1;
          UNLOCK();
          if ((int)*plVar8 == 0) {
            (**(code **)*local_60)(local_60);
            LOCK();
            piVar1 = (int *)((longlong)plVar9 + 0xc);
            *piVar1 = *piVar1 + -1;
            iVar2 = *piVar1;
            UNLOCK();
            plVar8 = plVar9;
            goto joined_r0x000140f103e0;
          }
        }
        else {
          param_1[0x2d] = (longlong)local_60;
          if (plVar8 != (longlong *)0x0) goto LAB_140f103a7;
        }
      }
      if (local_60 != (longlong *)0x0) {
        LOCK();
        plVar9 = local_60 + 1;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)*plVar9 == 0) {
          (**(code **)*local_60)(local_60);
          LOCK();
          piVar1 = (int *)((longlong)local_60 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_60 + 0x10))(local_60);
          }
        }
      }
      plVar9 = param_1 + 0x2c;
LAB_140f10421:
      plVar9 = (longlong *)*plVar9;
      if (plVar9 == (longlong *)0x0) goto LAB_140f1043b;
    }
    if ((char)plVar9[0xb] != '\x01') {
      (**(code **)(*plVar9 + 0x10))(plVar9,plVar6,param_4);
    }
  }
  else {
    cVar4 = (**(code **)(*plVar6 + 0x318))(plVar6,param_1,param_2,&local_98);
    if (cVar4 != '\0') {
      FUN_1447a97f4(local_c0,param_2);
      if ((longlong)(int)param_1[0x2f] != 0) {
        plVar9 = (longlong *)param_1[0x2e];
        lVar5 = (longlong)(int)param_1[0x2f] << 4;
        do {
          if (*(int *)(*plVar9 + 8) == local_c0[0]) {
            if (local_a8 != 0) {
              FUN_1400020a8();
            }
            if (plVar9 != (longlong *)0x0) goto LAB_140f10421;
            goto LAB_140f102d2;
          }
          plVar9 = plVar9 + 2;
          lVar5 = lVar5 + -0x10;
        } while (lVar5 != 0);
      }
      if (local_a8 != 0) {
        FUN_1400020a8();
      }
LAB_140f102d2:
      (**(code **)(*param_1 + 0x2d8))(param_1,&local_68,param_2,&local_98);
      iVar2 = (int)param_1[0x2f];
      *(uint *)(param_1 + 0x2f) = iVar2 + 1U;
      if (*(uint *)((longlong)param_1 + 0x17c) < iVar2 + 1U) {
        FUN_146563568(param_1 + 0x2e,iVar2);
      }
      lVar5 = param_1[0x2e];
      lVar7 = (longlong)iVar2 * 0x10;
      *(ulonglong *)(lVar5 + lVar7) = CONCAT44(uStack_64,local_68);
      *(longlong **)(lVar5 + 8 + lVar7) = local_60;
      if (local_60 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_60 + 1) = (int)local_60[1] + 1;
        UNLOCK();
        if (local_60 != (longlong *)0x0) {
          LOCK();
          plVar9 = local_60 + 1;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          if ((int)*plVar9 == 0) {
            (**(code **)*local_60)(local_60);
            LOCK();
            piVar1 = (int *)((longlong)local_60 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*local_60 + 0x10))(local_60);
            }
          }
        }
      }
      plVar9 = (longlong *)(lVar5 + lVar7);
      goto LAB_140f10421;
    }
  }
LAB_140f1043b:
  if (local_80 != 0) {
    FUN_1400020a8();
  }
LAB_140f10445:
  if ((local_40 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f1049c FUN_140f1049c body=5028 status=ok
// SIG undefined FUN_140f1049c(void)

void FUN_140f1049c(longlong *param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  char cVar8;
  byte bVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  int iVar13;
  longlong lVar14;
  longlong *plVar15;
  void *pvVar16;
  int iVar17;
  bool bVar18;
  int iVar19;
  longlong lVar20;
  longlong *plVar21;
  longlong lVar22;
  bool bVar23;
  bool bVar24;
  undefined1 auStack_168 [32];
  undefined8 **local_148;
  int local_134;
  longlong *local_130;
  longlong local_128;
  longlong *local_120;
  longlong local_118;
  undefined8 uStack_110;
  undefined8 *local_108;
  undefined8 uStack_100;
  undefined8 *local_f8;
  undefined8 *puStack_f0;
  undefined8 uStack_e8;
  undefined8 *local_e0;
  ulonglong uStack_d8;
  undefined2 local_d0;
  undefined8 *local_c8;
  int local_c0;
  void *local_b8;
  ulonglong uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_168;
  if ((((param_1[0x36] == 0) || (lVar12 = *(longlong *)(param_1[0x36] + 0x1e0), lVar12 == 0)) ||
      (lVar12 = *(longlong *)(lVar12 + 0x68), lVar12 == 0)) ||
     ((int)param_1[0x4b] <= (int)param_1[0x4f])) goto switchD_140f107f6_default;
  iVar10 = (int)param_1[0x4d];
  lVar22 = (longlong)iVar10;
  if (lVar22 == 0) goto switchD_140f107f6_default;
  plVar15 = (longlong *)param_1[0x4c];
  iVar11 = *(int *)(*plVar15 + 0x10);
  local_134 = 0;
  if (iVar11 == 0) {
LAB_140f10572:
    bVar23 = false;
  }
  else {
    uVar2 = *(uint *)(*plVar15 + 0xc);
    bVar23 = false;
    if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
      lVar14 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      if ((lVar14 == 0) || (*(int *)(lVar14 + 0x10) != iVar11)) goto LAB_140f10572;
      bVar23 = (*(uint *)(lVar14 + 8) & 0x10200000) == 0;
    }
  }
  local_120 = param_1 + 0x4e;
  iVar11 = 0;
  local_130 = param_1;
  local_128 = lVar12;
  do {
    lVar12 = (longlong)iVar11;
    iVar13 = iVar11 + 1;
    iVar17 = iVar13;
    if (iVar13 < iVar10) {
      iVar17 = iVar10;
    }
    if (lVar12 + 1 < lVar22) {
      bVar18 = true;
      lVar14 = lVar12 + 2;
      do {
        iVar3 = *(int *)(plVar15[lVar14 + -1] + 0x10);
        iVar19 = iVar13;
        if (((iVar3 == 0) || (uVar2 = *(uint *)(plVar15[lVar14 + -1] + 0xc), (int)uVar2 < 0)) ||
           ((DAT_14c9647dc <= (int)uVar2 ||
            ((lVar20 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8), lVar20 == 0 ||
             (*(int *)(lVar20 + 0x10) != iVar3)))))) {
          if (bVar23) break;
        }
        else if ((bool)((*(uint *)(lVar20 + 8) & 0x10200000) == 0 ^ bVar23)) break;
        bVar18 = lVar14 < lVar22;
        iVar13 = iVar13 + 1;
        bVar24 = lVar14 != lVar22;
        lVar14 = lVar14 + 1;
        iVar19 = iVar17;
      } while (bVar24);
    }
    else {
      bVar18 = false;
      iVar19 = iVar17;
    }
    iVar17 = iVar19 - iVar11;
    if (bVar23) {
      if (local_134 != iVar11) {
        memmove(plVar15 + local_134,plVar15 + lVar12,(longlong)iVar17 << 3);
      }
      local_134 = local_134 + iVar17;
    }
    else {
      FUN_140f1008f(plVar15 + lVar12,iVar17);
    }
    plVar21 = local_130;
    bVar23 = (bool)(bVar23 ^ 1);
    iVar11 = iVar19;
  } while (bVar18);
  *(int *)(local_130 + 0x4d) = local_134;
  if (0 < local_134) {
    lVar12 = 0;
    do {
      lVar22 = *(longlong *)(plVar21[0x4c] + lVar12 * 8);
      if ((longlong)(int)plVar21[0x4f] == 0) {
LAB_140f1074c:
        lVar14 = plVar21[0x4c];
        iVar10 = (int)plVar21[0x4f];
        *(uint *)(plVar21 + 0x4f) = iVar10 + 1U;
        if (*(uint *)((longlong)plVar21 + 0x27c) < iVar10 + 1U) {
          FUN_145840b16(local_120,iVar10);
        }
        *(undefined8 *)(plVar21[0x4e] + (longlong)iVar10 * 8) = *(undefined8 *)(lVar14 + lVar12 * 8)
        ;
        *(undefined8 *)(lVar14 + lVar12 * 8) = 0;
        pvVar16 = (void *)(lVar12 * 8 + plVar21[0x4c]);
        FUN_140f1008f(pvVar16,1);
        iVar10 = (int)plVar21[0x4d];
        iVar11 = iVar10 - ((int)lVar12 + 1);
        if (iVar11 != 0) {
          memmove(pvVar16,(void *)((longlong)pvVar16 + 8),(longlong)iVar11 << 3);
          iVar10 = (int)plVar21[0x4d];
        }
        *(int *)(plVar21 + 0x4d) = iVar10 + -1;
        switch(*(undefined1 *)(lVar22 + 0x40)) {
        case 1:
          if (*(int *)(lVar22 + 0x10) == 0) {
LAB_140f11537:
            lVar12 = 0;
          }
          else {
            uVar2 = *(uint *)(lVar22 + 0xc);
            lVar12 = 0;
            if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
              plVar15 = (longlong *)
                        ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
              if ((plVar15 == (longlong *)0x0) ||
                 (((int)plVar15[2] != *(int *)(lVar22 + 0x10) ||
                  ((*(uint *)(plVar15 + 1) & 0x10200000) != 0)))) goto LAB_140f11537;
              lVar12 = *plVar15;
            }
          }
          local_c8 = (undefined8 *)0x0;
          local_c0 = 0;
          local_78 = 0;
          local_70 = 0;
          uStack_e8 = uStack_e8 & 0xffffffff00000000;
          local_e0 = (undefined8 *)0x0;
          uStack_d8 = 0;
          local_d0 = 0;
          local_b8 = (void *)0x0;
          uStack_b0 = 0;
          local_a8 = 0;
          uStack_a0 = 0;
          local_98 = 0;
          uStack_90 = 0;
          local_6c = 0xffffffff00000080;
          local_64 = 0;
          local_58 = 0;
          local_50 = 0;
          iVar10 = *(int *)(lVar12 + 0x58);
          if (iVar10 < 2) {
            local_108 = (undefined8 *)0x0;
            uStack_100 = (undefined8 *)0x0;
            FUN_1400b2348(lVar22 + 0x18,&local_108,1);
          }
          else {
            local_118 = 0;
            uStack_110 = 0;
            FUN_1400b2348(lVar22 + 0x18,&local_118,1);
            iVar11 = (int)uStack_110 + -1;
            if ((int)uStack_110 == 0) {
              iVar11 = 0;
            }
            uVar2 = *(uint *)(lVar12 + 0x58);
            iVar17 = iVar11 + 1 + (uint)((longlong)(int)uVar2 == 0);
            local_108 = (undefined8 *)0x0;
            pvVar16 = *(void **)(lVar12 + 0x50);
            uStack_100 = (undefined8 *)CONCAT44(uStack_100._4_4_,uVar2);
            if (iVar17 == 0 && uVar2 == 0) {
              uStack_100 = (undefined8 *)(ulonglong)uVar2;
            }
            else {
              iVar13 = iVar17 + uVar2;
              if (iVar17 < 0) {
LAB_140f11703:
                local_108 = (undefined8 *)0x0;
                    /* WARNING: Subroutine does not return */
                FUN_1456afac4(iVar13);
              }
              FUN_1446dd670(&local_108,iVar13,0);
              if (uVar2 != 0) {
                memcpy(local_108,pvVar16,(longlong)(int)uVar2 * 2);
              }
            }
            FUN_1401aebe8(&local_108,local_118,iVar11);
          }
          local_f8 = local_108;
          puStack_f0 = uStack_100;
          local_108 = (undefined8 *)0x0;
          uStack_100 = (undefined8 *)0x0;
          if ((1 < iVar10) && (local_118 != 0)) {
            FUN_1400020a8();
          }
          if (&local_b8 != (void **)(lVar22 + 0x58)) {
            uVar2 = *(uint *)(lVar22 + 0x60);
            pvVar16 = *(void **)(lVar22 + 0x58);
            uStack_b0 = CONCAT44(uStack_b0._4_4_,uVar2);
            if ((longlong)(int)uVar2 == 0) {
              uStack_b0 = (ulonglong)uVar2;
            }
            else {
              FUN_1447a127e(&local_b8,uVar2,0);
              memcpy(local_b8,pvVar16,(longlong)(int)uVar2);
            }
          }
          plVar15 = local_130;
          local_d0 = CONCAT11(local_d0._1_1_,*(undefined1 *)(lVar12 + 0x90));
          local_148 = &local_e0;
          FUN_143e61aa0(local_130,lVar12,local_128,&uStack_e8);
          (**(code **)(*plVar15 + 0x328))(plVar15,lVar22 + 0x18,lVar22 + 0x48,&local_98);
          if (DAT_14c872bf2 == '\x01') {
            FUN_1400020e8(&local_f8,L".yml",4);
            local_d0 = CONCAT11(1,(undefined1)local_d0);
          }
          else {
            local_d0 = local_d0 & 0xff;
            FUN_140ec5332(&local_a8,plVar15 + 0x47);
          }
          uVar4 = *(undefined4 *)(lVar22 + 8);
          local_108 = (undefined8 *)0x0;
          uStack_100 = (undefined8 *)((ulonglong)uStack_100 & 0xffffffff00000000);
          FUN_1446efa72(&local_108,0,3,0x10);
          puVar5 = local_108;
          uStack_100._0_4_ = 3;
          *local_108 = &PTR_LAB_14b434a40;
          LOCK();
          UNLOCK();
          lVar22 = DAT_14c758608 + 1;
          lVar12 = DAT_14c758608 + 1;
          if (lVar22 == 0) {
            LOCK();
            UNLOCK();
            lVar22 = DAT_14c758608 + 2;
            lVar12 = DAT_14c758608 + 2;
          }
          DAT_14c758608 = lVar12;
          local_108[2] = lVar22;
          *local_108 = &PTR_FUN_14b4349d0;
          local_108[3] = 0;
          iVar10 = 0;
          if (plVar15 != (longlong *)0x0) {
            uVar2 = *(uint *)((longlong)plVar15 + 0xc);
            *(uint *)(local_108 + 3) = uVar2;
            if ((int)uVar2 < DAT_14c9647dc) {
              lVar12 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
            }
            else {
              lVar12 = 0;
            }
            iVar10 = *(int *)(lVar12 + 0x10);
            if (*(int *)(lVar12 + 0x10) == 0) {
              LOCK();
              iVar10 = DAT_14c964868 + 1;
              UNLOCK();
              iVar11 = DAT_14c964868 + 1;
              bVar23 = DAT_14c964868 < 1000;
              DAT_14c964868 = iVar10;
              if (bVar23) {
                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                              ,iVar11);
              }
              LOCK();
              iVar10 = *(int *)(lVar12 + 0x10);
              bVar23 = iVar10 == 0;
              if (bVar23) {
                *(int *)(lVar12 + 0x10) = iVar11;
                iVar10 = 0;
              }
              UNLOCK();
              if (bVar23) {
                iVar10 = iVar11;
              }
            }
          }
          uVar7 = (int)uStack_100;
          puVar6 = local_108;
          *(int *)((longlong)puVar5 + 0x1c) = iVar10;
          puVar5[4] = plVar15;
          *(undefined4 *)(puVar5 + 5) = uVar4;
          local_108 = (undefined8 *)0x0;
          uStack_100 = (undefined8 *)((ulonglong)uStack_100._4_4_ << 0x20);
          if (local_c0 == 0) {
LAB_140f10b7c:
            if (local_c8 != (undefined8 *)0x0) {
              FUN_1400020a8();
            }
          }
          else if (local_c8 != (undefined8 *)0x0) {
            (**(code **)*local_c8)(local_c8,0);
            FUN_1446efa72(&local_c8,0,0,0x10);
            local_c0 = 0;
            goto LAB_140f10b7c;
          }
          local_c8 = puVar6;
          local_c0 = uVar7;
          if ((int)uStack_100 == 0) {
LAB_140f10bd6:
            if (local_108 != (undefined8 *)0x0) {
              FUN_1400020a8();
            }
          }
          else if (local_108 != (undefined8 *)0x0) {
            (**(code **)*local_108)(local_108,0);
            FUN_1446efa72(&local_108,0,0,0x10);
            uStack_100 = (undefined8 *)((ulonglong)uStack_100 & 0xffffffff00000000);
            goto LAB_140f10bd6;
          }
          FUN_140b3ff76(&local_f8);
          FUN_140b40248(&local_f8);
          break;
        case 2:
          if (*(int *)(lVar22 + 0x10) == 0) {
LAB_140f11628:
            lVar12 = 0;
          }
          else {
            uVar2 = *(uint *)(lVar22 + 0xc);
            lVar12 = 0;
            if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
              plVar15 = (longlong *)
                        ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
              if ((plVar15 == (longlong *)0x0) ||
                 (((int)plVar15[2] != *(int *)(lVar22 + 0x10) ||
                  ((*(uint *)(plVar15 + 1) & 0x10200000) != 0)))) goto LAB_140f11628;
              lVar12 = *plVar15;
            }
          }
          local_c8 = (undefined8 *)0x0;
          local_c0 = 0;
          uStack_e8 = (ulonglong)uStack_e8._4_4_ << 0x20;
          local_e0 = (undefined8 *)0x0;
          uStack_d8 = 0;
          local_d0 = local_d0 & 0xff00;
          local_b8 = (void *)0x0;
          uStack_b0 = 0;
          iVar10 = *(int *)(lVar12 + 0x48);
          if (iVar10 < 2) {
            local_108 = (undefined8 *)0x0;
            uStack_100 = (undefined8 *)0x0;
            FUN_1400b2348(lVar22 + 0x18,&local_108,1);
          }
          else {
            local_118 = 0;
            uStack_110 = 0;
            FUN_1400b2348(lVar22 + 0x18,&local_118,1);
            iVar11 = (int)uStack_110 + -1;
            if ((int)uStack_110 == 0) {
              iVar11 = 0;
            }
            uVar2 = *(uint *)(lVar12 + 0x48);
            iVar17 = iVar11 + 1 + (uint)((longlong)(int)uVar2 == 0);
            local_108 = (undefined8 *)0x0;
            pvVar16 = *(void **)(lVar12 + 0x40);
            uStack_100 = (undefined8 *)CONCAT44(uStack_100._4_4_,uVar2);
            if (iVar17 == 0 && uVar2 == 0) {
              uStack_100 = (undefined8 *)(ulonglong)uVar2;
            }
            else {
              iVar13 = iVar17 + uVar2;
              if (iVar17 < 0) goto LAB_140f11703;
              FUN_1446dd670(&local_108,iVar13,0);
              if (uVar2 != 0) {
                memcpy(local_108,pvVar16,(longlong)(int)uVar2 * 2);
              }
            }
            FUN_1401aebe8(&local_108,local_118,iVar11);
          }
          local_f8 = local_108;
          puStack_f0 = uStack_100;
          local_108 = (undefined8 *)0x0;
          uStack_100 = (undefined8 *)0x0;
          if ((1 < iVar10) && (local_118 != 0)) {
            FUN_1400020a8();
          }
          local_148 = &local_e0;
          FUN_143e61aa0(plVar21,lVar12,local_128,&uStack_e8);
          if (DAT_14c872bf2 == '\x01') {
            FUN_1400020e8(&local_f8,L".yml",4);
            local_d0 = CONCAT11(local_d0._1_1_,1);
          }
          else {
            local_d0 = local_d0 & 0xff00;
            FUN_140ec5332(&local_b8,plVar21 + 0x49);
          }
          uVar4 = *(undefined4 *)(lVar22 + 8);
          local_108 = (undefined8 *)0x0;
          uStack_100 = (undefined8 *)((ulonglong)uStack_100 & 0xffffffff00000000);
          FUN_1446efa72(&local_108,0,3,0x10);
          puVar5 = local_108;
          uStack_100._0_4_ = 3;
          *local_108 = &PTR_LAB_14b434b20;
          LOCK();
          UNLOCK();
          lVar22 = DAT_14c758608 + 1;
          lVar12 = DAT_14c758608 + 1;
          if (lVar22 == 0) {
            LOCK();
            UNLOCK();
            lVar22 = DAT_14c758608 + 2;
            lVar12 = DAT_14c758608 + 2;
          }
          DAT_14c758608 = lVar12;
          local_108[2] = lVar22;
          *local_108 = &PTR_FUN_14b434ab0;
          local_108[3] = 0;
          iVar10 = 0;
          if (plVar21 != (longlong *)0x0) {
            uVar2 = *(uint *)((longlong)plVar21 + 0xc);
            *(uint *)(local_108 + 3) = uVar2;
            if ((int)uVar2 < DAT_14c9647dc) {
              lVar12 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
            }
            else {
              lVar12 = 0;
            }
            iVar10 = *(int *)(lVar12 + 0x10);
            if (*(int *)(lVar12 + 0x10) == 0) {
              LOCK();
              iVar10 = DAT_14c964868 + 1;
              UNLOCK();
              iVar11 = DAT_14c964868 + 1;
              bVar23 = DAT_14c964868 < 1000;
              DAT_14c964868 = iVar10;
              if (bVar23) {
                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                              ,iVar11);
              }
              LOCK();
              iVar10 = *(int *)(lVar12 + 0x10);
              bVar23 = iVar10 == 0;
              if (bVar23) {
                *(int *)(lVar12 + 0x10) = iVar11;
                iVar10 = 0;
              }
              UNLOCK();
              plVar21 = local_130;
              if (bVar23) {
                iVar10 = iVar11;
              }
            }
          }
          uVar7 = (int)uStack_100;
          puVar6 = local_108;
          *(int *)((longlong)puVar5 + 0x1c) = iVar10;
          puVar5[4] = plVar21;
          *(undefined4 *)(puVar5 + 5) = uVar4;
          local_108 = (undefined8 *)0x0;
          uStack_100 = (undefined8 *)((ulonglong)uStack_100._4_4_ << 0x20);
          if (local_c0 == 0) {
LAB_140f1124f:
            if (local_c8 != (undefined8 *)0x0) {
              FUN_1400020a8();
            }
          }
          else if (local_c8 != (undefined8 *)0x0) {
            (**(code **)*local_c8)(local_c8,0);
            FUN_1446efa72(&local_c8,0,0,0x10);
            local_c0 = 0;
            goto LAB_140f1124f;
          }
          local_c8 = puVar6;
          local_c0 = uVar7;
          if ((int)uStack_100 == 0) {
LAB_140f112a9:
            if (local_108 != (undefined8 *)0x0) {
              FUN_1400020a8();
            }
          }
          else if (local_108 != (undefined8 *)0x0) {
            (**(code **)*local_108)(local_108,0);
            FUN_1446efa72(&local_108,0,0,0x10);
            uStack_100 = (undefined8 *)((ulonglong)uStack_100 & 0xffffffff00000000);
            goto LAB_140f112a9;
          }
          FUN_1459b3e64(&local_f8);
          FUN_141428114(&local_f8);
          break;
        case 3:
          if (*(int *)(lVar22 + 0x10) == 0) {
LAB_140f11636:
            lVar12 = 0;
          }
          else {
            uVar2 = *(uint *)(lVar22 + 0xc);
            lVar12 = 0;
            if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
              plVar15 = (longlong *)
                        ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
              if ((plVar15 == (longlong *)0x0) ||
                 (((int)plVar15[2] != *(int *)(lVar22 + 0x10) ||
                  ((*(uint *)(plVar15 + 1) & 0x10200000) != 0)))) goto LAB_140f11636;
              lVar12 = *plVar15;
            }
          }
          local_c8 = (undefined8 *)0x0;
          local_c0 = 0;
          uStack_e8 = (ulonglong)uStack_e8._4_4_ << 0x20;
          local_e0 = (undefined8 *)0x0;
          uStack_d8 = 0;
          local_d0 = (ushort)local_d0._1_1_ << 8;
          iVar10 = *(int *)(lVar12 + 0x58);
          if (iVar10 < 2) {
            local_108 = (undefined8 *)0x0;
            uStack_100 = (undefined8 *)0x0;
            FUN_1400b2348(lVar22 + 0x18,&local_108,1);
          }
          else {
            local_118 = 0;
            uStack_110 = 0;
            FUN_1400b2348(lVar22 + 0x18,&local_118,1);
            iVar11 = (int)uStack_110 + -1;
            if ((int)uStack_110 == 0) {
              iVar11 = 0;
            }
            uVar2 = *(uint *)(lVar12 + 0x58);
            iVar17 = iVar11 + 1 + (uint)((longlong)(int)uVar2 == 0);
            local_108 = (undefined8 *)0x0;
            pvVar16 = *(void **)(lVar12 + 0x50);
            uStack_100 = (undefined8 *)CONCAT44(uStack_100._4_4_,uVar2);
            if (iVar17 == 0 && uVar2 == 0) {
              uStack_100 = (undefined8 *)(ulonglong)uVar2;
            }
            else {
              iVar13 = iVar17 + uVar2;
              if (iVar17 < 0) goto LAB_140f11703;
              FUN_1446dd670(&local_108,iVar13,0);
              if (uVar2 != 0) {
                memcpy(local_108,pvVar16,(longlong)(int)uVar2 * 2);
              }
            }
            FUN_1401aebe8(&local_108,local_118,iVar11);
          }
          local_f8 = local_108;
          puStack_f0 = uStack_100;
          local_108 = (undefined8 *)0x0;
          uStack_100 = (undefined8 *)0x0;
          if ((1 < iVar10) && (local_118 != 0)) {
            FUN_1400020a8();
          }
          local_148 = &local_e0;
          FUN_143e61aa0(plVar21,lVar12,local_128,&uStack_e8);
          bVar23 = DAT_14c872bf2 == '\x01';
          if (bVar23) {
            FUN_1400020e8(&local_f8,L".yml",4);
          }
          local_d0 = CONCAT11(local_d0._1_1_,bVar23);
          uVar4 = *(undefined4 *)(lVar22 + 8);
          local_108 = (undefined8 *)0x0;
          uStack_100 = (undefined8 *)((ulonglong)uStack_100 & 0xffffffff00000000);
          FUN_1446efa72(&local_108,0,3,0x10);
          puVar5 = local_108;
          uStack_100._0_4_ = 3;
          *local_108 = &PTR_LAB_14b434c00;
          LOCK();
          UNLOCK();
          lVar22 = DAT_14c758608 + 1;
          lVar12 = DAT_14c758608 + 1;
          if (lVar22 == 0) {
            LOCK();
            UNLOCK();
            lVar22 = DAT_14c758608 + 2;
            lVar12 = DAT_14c758608 + 2;
          }
          DAT_14c758608 = lVar12;
          local_108[2] = lVar22;
          *local_108 = &PTR_FUN_14b434b90;
          local_108[3] = 0;
          iVar10 = 0;
          if (plVar21 != (longlong *)0x0) {
            uVar2 = *(uint *)((longlong)plVar21 + 0xc);
            *(uint *)(local_108 + 3) = uVar2;
            if ((int)uVar2 < DAT_14c9647dc) {
              lVar12 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
            }
            else {
              lVar12 = 0;
            }
            iVar10 = *(int *)(lVar12 + 0x10);
            if (*(int *)(lVar12 + 0x10) == 0) {
              LOCK();
              iVar10 = DAT_14c964868 + 1;
              UNLOCK();
              iVar11 = DAT_14c964868 + 1;
              bVar23 = DAT_14c964868 < 1000;
              DAT_14c964868 = iVar10;
              if (bVar23) {
                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                              ,iVar11);
              }
              LOCK();
              iVar10 = *(int *)(lVar12 + 0x10);
              bVar23 = iVar10 == 0;
              if (bVar23) {
                *(int *)(lVar12 + 0x10) = iVar11;
                iVar10 = 0;
              }
              UNLOCK();
              plVar21 = local_130;
              if (bVar23) {
                iVar10 = iVar11;
              }
            }
          }
          uVar7 = (int)uStack_100;
          puVar6 = local_108;
          *(int *)((longlong)puVar5 + 0x1c) = iVar10;
          puVar5[4] = plVar21;
          *(undefined4 *)(puVar5 + 5) = uVar4;
          local_108 = (undefined8 *)0x0;
          uStack_100 = (undefined8 *)((ulonglong)uStack_100._4_4_ << 0x20);
          if (local_c0 == 0) {
LAB_140f114ba:
            if (local_c8 != (undefined8 *)0x0) {
              FUN_1400020a8();
            }
          }
          else if (local_c8 != (undefined8 *)0x0) {
            (**(code **)*local_c8)(local_c8,0);
            FUN_1446efa72(&local_c8,0,0,0x10);
            local_c0 = 0;
            goto LAB_140f114ba;
          }
          local_c8 = puVar6;
          local_c0 = uVar7;
          if ((int)uStack_100 == 0) {
LAB_140f11514:
            if (local_108 != (undefined8 *)0x0) {
              FUN_1400020a8();
            }
          }
          else if (local_108 != (undefined8 *)0x0) {
            (**(code **)*local_108)(local_108,0);
            FUN_1446efa72(&local_108,0,0,0x10);
            uStack_100 = (undefined8 *)((ulonglong)uStack_100 & 0xffffffff00000000);
            goto LAB_140f11514;
          }
          FUN_148215f50(&local_f8);
          FUN_1482160bc(&local_f8);
          break;
        case 4:
          if (*(int *)(lVar22 + 0x10) == 0) {
LAB_140f1162f:
            lVar12 = 0;
          }
          else {
            uVar2 = *(uint *)(lVar22 + 0xc);
            lVar12 = 0;
            if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
              plVar15 = (longlong *)
                        ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
              if ((plVar15 == (longlong *)0x0) ||
                 (((int)plVar15[2] != *(int *)(lVar22 + 0x10) ||
                  ((*(uint *)(plVar15 + 1) & 0x10200000) != 0)))) goto LAB_140f1162f;
              lVar12 = *plVar15;
            }
          }
          local_148 = &puStack_f0;
          local_f8 = (undefined8 *)((ulonglong)local_f8 & 0xffffffff00000000);
          local_c8 = (undefined8 *)0x0;
          local_c0 = 0;
          puStack_f0 = (undefined8 *)0x0;
          uStack_e8 = 0;
          local_e0 = (undefined8 *)0x0;
          uStack_d8 = 0;
          local_d0 = (ushort)local_d0._1_1_ << 8;
          FUN_143e61aa0(plVar21,lVar12,local_128,&local_f8);
          iVar10 = *(int *)(lVar12 + 0x48);
          lVar14 = (longlong)iVar10;
          local_108 = (undefined8 *)0x0;
          pvVar16 = *(void **)(lVar12 + 0x40);
          uStack_100 = (undefined8 *)CONCAT44(uStack_100._4_4_,iVar10);
          FUN_1446dd670(&local_108,(uint)(lVar14 == 0) + iVar10 + 1,0);
          if (lVar14 != 0) {
            memcpy(local_108,pvVar16,lVar14 * 2);
          }
          FUN_1400020e8(&local_108,&DAT_149e065c6,1);
          if (local_e0 != (undefined8 *)0x0) {
            FUN_1400020a8();
          }
          local_e0 = local_108;
          uStack_d8 = (ulonglong)uStack_100;
          local_d0 = CONCAT11(local_d0._1_1_,DAT_14c872bf2);
          uVar4 = *(undefined4 *)(lVar22 + 8);
          local_108 = (undefined8 *)0x0;
          uStack_100 = (undefined8 *)((ulonglong)uStack_100 & 0xffffffff00000000);
          FUN_1446efa72(&local_108,0,3,0x10);
          puVar5 = local_108;
          uStack_100._0_4_ = 3;
          *local_108 = &PTR_LAB_14b434ce0;
          LOCK();
          UNLOCK();
          lVar22 = DAT_14c758608 + 1;
          lVar12 = DAT_14c758608 + 1;
          if (lVar22 == 0) {
            LOCK();
            UNLOCK();
            lVar22 = DAT_14c758608 + 2;
            lVar12 = DAT_14c758608 + 2;
          }
          DAT_14c758608 = lVar12;
          local_108[2] = lVar22;
          *local_108 = &PTR_FUN_14b434c70;
          local_108[3] = 0;
          iVar10 = 0;
          if (plVar21 != (longlong *)0x0) {
            uVar2 = *(uint *)((longlong)plVar21 + 0xc);
            *(uint *)(local_108 + 3) = uVar2;
            if ((int)uVar2 < DAT_14c9647dc) {
              lVar12 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
            }
            else {
              lVar12 = 0;
            }
            iVar10 = *(int *)(lVar12 + 0x10);
            if (*(int *)(lVar12 + 0x10) == 0) {
              LOCK();
              iVar10 = DAT_14c964868 + 1;
              UNLOCK();
              iVar11 = DAT_14c964868 + 1;
              bVar23 = DAT_14c964868 < 1000;
              DAT_14c964868 = iVar10;
              if (bVar23) {
                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                              ,iVar11);
              }
              LOCK();
              iVar10 = *(int *)(lVar12 + 0x10);
              bVar23 = iVar10 == 0;
              if (bVar23) {
                *(int *)(lVar12 + 0x10) = iVar11;
                iVar10 = 0;
              }
              UNLOCK();
              plVar21 = local_130;
              if (bVar23) {
                iVar10 = iVar11;
              }
            }
          }
          uVar7 = (int)uStack_100;
          puVar6 = local_108;
          *(int *)((longlong)puVar5 + 0x1c) = iVar10;
          puVar5[4] = plVar21;
          *(undefined4 *)(puVar5 + 5) = uVar4;
          local_108 = (undefined8 *)0x0;
          uStack_100 = (undefined8 *)((ulonglong)uStack_100._4_4_ << 0x20);
          if (local_c0 == 0) {
LAB_140f10ee2:
            if (local_c8 != (undefined8 *)0x0) {
              FUN_1400020a8();
            }
          }
          else if (local_c8 != (undefined8 *)0x0) {
            (**(code **)*local_c8)(local_c8,0);
            FUN_1446efa72(&local_c8,0,0,0x10);
            local_c0 = 0;
            goto LAB_140f10ee2;
          }
          local_c8 = puVar6;
          local_c0 = uVar7;
          if ((int)uStack_100 == 0) {
LAB_140f10f3c:
            if (local_108 != (undefined8 *)0x0) {
              FUN_1400020a8();
            }
          }
          else if (local_108 != (undefined8 *)0x0) {
            (**(code **)*local_108)(local_108,0);
            FUN_1446efa72(&local_108,0,0,0x10);
            uStack_100 = (undefined8 *)((ulonglong)uStack_100 & 0xffffffff00000000);
            goto LAB_140f10f3c;
          }
          FUN_145afc612(&local_f8);
          FUN_145afc73e(&local_f8);
        }
        break;
      }
      plVar15 = (longlong *)plVar21[0x4e];
      lVar14 = (longlong)(int)plVar21[0x4f] << 3;
LAB_140f106d3:
      cVar8 = FUN_143e66b40(lVar22 + 0xc,*plVar15 + 0xc);
      if (cVar8 == '\0') goto LAB_140f10723;
      bVar1 = *(byte *)(lVar22 + 0x40);
      bVar9 = *(byte *)(*plVar15 + 0x40);
      if (bVar1 == 4) {
        bVar9 = bVar9 & 0xfd;
joined_r0x000140f10707:
        if (bVar9 == 1) goto LAB_140f1072f;
LAB_140f10723:
        plVar15 = plVar15 + 1;
        lVar14 = lVar14 + -8;
        if (lVar14 == 0) goto LAB_140f1074c;
        goto LAB_140f106d3;
      }
      if (bVar9 == 4) {
        bVar9 = bVar1 & 0xfd;
        goto joined_r0x000140f10707;
      }
      if ((bVar1 == 1) && ((char)plVar21[0x3d] == '\0')) goto joined_r0x000140f10707;
      if (*(int *)(*plVar15 + 0x18) != *(int *)(lVar22 + 0x18)) goto LAB_140f10723;
LAB_140f1072f:
      if (plVar15 == (longlong *)0x0) goto LAB_140f1074c;
      lVar12 = lVar12 + 1;
    } while (lVar12 < (int)plVar21[0x4d]);
  }
switchD_140f107f6_default:
  if ((local_48 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140f11842 FUN_140f11842 body=290 status=ok
// SIG undefined FUN_140f11842(void)

undefined4 FUN_140f11842(undefined8 *param_1,longlong param_2,longlong param_3)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  undefined1 **ppuVar3;
  ulonglong uVar4;
  undefined1 auStack_498 [40];
  undefined8 local_470;
  int local_468;
  undefined1 *local_460;
  undefined1 *local_458;
  undefined1 **local_450;
  char local_448;
  undefined1 local_440 [512];
  undefined1 *local_240;
  undefined1 *local_238;
  ulonglong *local_230;
  char local_228;
  undefined1 local_220 [512];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_498;
  local_240 = local_220;
  local_228 = '\0';
  ppuVar3 = &local_240;
  local_230 = &local_20;
  if (param_3 == 0) {
    ppuVar3 = (undefined1 **)0x0;
  }
  local_460 = local_440;
  local_448 = '\0';
  local_450 = &local_240;
  local_470 = *param_1;
  local_468 = *(int *)(param_1 + 1) + -1;
  if (*(int *)(param_1 + 1) == 0) {
    local_468 = 0;
  }
  local_458 = local_460;
  local_238 = local_240;
  uVar1 = FUN_140f11966(&local_470,&local_460,ppuVar3);
  if ((char)uVar1 == '\0') {
    if (param_3 == 0) goto LAB_140f118f2;
    uVar4 = (longlong)local_238 - (longlong)local_240;
    puVar2 = local_240;
  }
  else {
    uVar4 = (longlong)local_458 - (longlong)local_460;
    param_3 = param_2;
    puVar2 = local_460;
  }
  FUN_1402980a2(param_3,puVar2,uVar4 >> 1);
LAB_140f118f2:
  if (local_448 == '\x01') {
    FUN_1400020a8(local_460);
  }
  if (local_228 == '\x01') {
    FUN_1400020a8(local_240);
  }
  if ((local_20 ^ (ulonglong)auStack_498) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f11966 FUN_140f11966 body=2652 status=ok
// SIG undefined FUN_140f11966(void)

undefined8 FUN_140f11966(longlong *param_1,longlong *param_2,longlong *param_3,uint param_4)

{
  short *psVar1;
  longlong *plVar2;
  short *psVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  short *psVar7;
  longlong *plVar8;
  wchar_t *pwVar9;
  undefined4 *puVar10;
  uint uVar11;
  int iVar12;
  undefined8 uVar13;
  uint uVar14;
  int iVar15;
  undefined2 *puVar16;
  void *pvVar17;
  uint uVar18;
  longlong lVar19;
  ulonglong uVar20;
  bool bVar21;
  undefined1 auStack_578 [32];
  longlong *local_558;
  longlong *local_550;
  uint local_544;
  longlong *local_540;
  undefined2 *local_538;
  int local_530;
  undefined2 *local_528;
  int local_520;
  undefined4 local_518;
  undefined4 uStack_514;
  undefined4 uStack_510;
  undefined4 uStack_50c;
  undefined4 local_508;
  undefined4 uStack_504;
  undefined4 uStack_500;
  undefined4 uStack_4fc;
  undefined2 *local_4f8;
  int local_4f0;
  undefined2 *local_4e8;
  int local_4e0;
  undefined *local_4d8;
  short **local_4d0;
  undefined8 local_4c8;
  int local_4c0;
  longlong local_4b8;
  uint local_4b0;
  undefined2 *local_4a8;
  undefined4 local_4a0;
  undefined2 *local_498;
  int iStack_490;
  undefined4 uStack_48c;
  undefined8 local_488;
  undefined8 uStack_480;
  short **local_478;
  char local_470;
  undefined2 local_468 [16];
  short *local_448 [60];
  short *local_268;
  short *local_260;
  ulonglong *local_258;
  char local_250;
  short local_248 [256];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_578;
  local_268 = local_248;
  local_250 = '\0';
  local_258 = &local_48;
  lVar19 = *param_1;
  uVar14 = *(uint *)(param_1 + 1);
  uVar20 = (ulonglong)uVar14;
  local_558 = param_3;
  local_550 = param_1;
  local_544 = param_4;
  local_260 = local_268;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c948490) && (FUN_144b3d300(&DAT_14c948490), DAT_14c948490 == -1)) {
    FUN_1400684da(&DAT_14c9482f8);
    atexit(FUN_1427b7fa2);
    _Init_thread_footer(&DAT_14c948490);
  }
  FUN_14006620a(&local_488,lVar19,uVar20);
  local_498 = local_488;
  iStack_490 = (int)uStack_480;
  uStack_48c = uStack_480._4_4_;
  FUN_1448097c4(&local_498,&DAT_149e01f64,&DAT_149e065c6,0);
  AcquireSRWLockShared((PSRWLOCK)&DAT_14c9482f8);
  iVar12 = 0;
  iVar15 = iStack_490 + -1;
  if (iStack_490 == 0) {
    iVar15 = iVar12;
  }
  local_488 = local_498;
  uStack_480 = (undefined2 *)CONCAT44(uStack_480._4_4_,iVar15);
  lVar6 = FUN_14022f68a(&DAT_14c948430,&local_488,0);
  ReleaseSRWLockShared((PSRWLOCK)&DAT_14c9482f8);
  if (lVar6 == 0) {
    plVar8 = (longlong *)FUN_14054d1d4();
    puVar16 = local_498;
    if (iStack_490 == 0) {
      puVar16 = &DAT_149dfb77a;
    }
    (**(code **)(*plVar8 + 0xf0))(plVar8,&local_488,puVar16);
    if (local_498 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    local_498 = local_488;
    iStack_490 = (int)uStack_480;
    uStack_48c = uStack_480._4_4_;
    if ((0 < (int)uVar14) && (*(short *)(lVar19 + -2 + uVar20 * 2) == 0x2f)) {
      uVar14 = (int)uStack_480 - 1;
      if ((int)uStack_480 == 0) {
        uVar14 = 0;
      }
      if (((int)uVar14 < 1) || (local_488[(ulonglong)uVar14 - 1] != 0x2f)) {
        FUN_1400020e8(&local_498,&DAT_149e065c6,1);
      }
    }
  }
  local_4a8 = (undefined2 *)0x0;
  local_4a0 = 0;
  local_4b8 = 0;
  local_4b0 = 0;
  local_4c8 = 0;
  local_4c0 = 0;
  local_488 = local_498;
  iVar15 = iStack_490 + -1;
  if (iStack_490 == 0) {
    iVar15 = iVar12;
  }
  uStack_480 = (undefined2 *)CONCAT44(uStack_480._4_4_,iVar15);
  local_540 = param_2;
  FUN_140f123c4(&local_488,&local_4a8,&local_4b8,&local_4c8);
  iVar15 = (int)(((ulonglong)local_4b0 * 2 + local_4b8) - (longlong)local_4a8 >> 1);
  puVar16 = local_4a8;
  if (local_4c0 != 0 && local_4b0 == 0) {
    iVar15 = iVar12;
    puVar16 = (undefined2 *)0x0;
  }
  local_4d8 = &DAT_14c9482f8;
  local_4d0 = &local_268;
  local_4e8 = puVar16;
  local_4e0 = iVar15;
  cVar4 = FUN_140f124f6();
  if (cVar4 == '\0') {
    if (lVar6 == 0) {
      FUN_1402980a2(&local_498,lVar19,uVar20);
      cVar4 = FUN_1401aeb9c(&local_498);
      if (cVar4 == '\0') {
        FUN_1448097c4(&local_498,&DAT_149e01f64,&DAT_149e065c6,0);
        puVar16 = local_498;
        local_4f8 = local_498;
        iVar12 = iStack_490 + -1;
        if (iStack_490 == 0) {
          iVar12 = 0;
        }
        local_4f0 = iVar12;
        FUN_140fede38(&local_488,&local_4f8,1);
        iVar15 = iVar12 - (int)uStack_480;
        if (iVar12 <= iVar12 - (int)uStack_480) {
          iVar15 = iVar12;
        }
        if (iVar15 < 1) {
          iVar15 = 0;
        }
        local_488 = puVar16;
        uStack_480 = (undefined2 *)CONCAT44(uStack_480._4_4_,iVar15);
        cVar4 = FUN_140f124f6(&local_4d8,&local_488);
        if (cVar4 != '\0') goto LAB_140f11b48;
      }
    }
    lVar19 = (longlong)iVar15;
    if (local_258 <= local_260 + lVar19) {
      FUN_140213274(&local_268,lVar19);
    }
    psVar3 = local_260;
    if (iVar15 != 0) {
      memcpy(local_260,puVar16,lVar19 * 2);
      local_260 = psVar3 + lVar19;
    }
  }
LAB_140f11b48:
  if (local_498 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  psVar3 = local_268;
  plVar2 = local_540;
  plVar8 = local_550;
  uVar20 = (ulonglong)((longlong)local_260 - (longlong)local_268) >> 1;
  iVar15 = (int)uVar20;
  if (iVar15 == 0) {
    uVar13 = 0;
    if (local_558 == (longlong *)0x0) goto LAB_140f11c3b;
    FUN_140fede38(&local_488,local_550,1);
    plVar2 = local_558;
    iVar15 = (int)plVar8[1];
    iVar12 = iVar15 - (int)uStack_480;
    if (iVar15 <= iVar15 - (int)uStack_480) {
      iVar12 = iVar15;
    }
    iVar15 = 0;
    if (0 < iVar12) {
      iVar15 = iVar12;
    }
    lVar19 = *plVar8;
    pvVar17 = (void *)*local_558;
    local_558[1] = (longlong)pvVar17;
    if ((ulonglong)local_558[2] <= (longlong)pvVar17 + 0x5aU) {
      FUN_140213274(local_558,0x2d);
      pvVar17 = (void *)plVar2[1];
    }
    memcpy(pvVar17,L"FilenameToLongPackageName failed to convert \'",0x5a);
    local_558[1] = (longlong)pvVar17 + 0x5a;
    lVar6 = FUN_1449668a2(local_558,*local_550,(int)local_550[1]);
    puVar10 = *(undefined4 **)(lVar6 + 8);
    if (*(ulonglong *)(lVar6 + 0x10) <= (longlong)puVar10 + 6U) {
      FUN_140213274(lVar6,3);
      puVar10 = *(undefined4 **)(lVar6 + 8);
    }
    plVar8 = local_558;
    *(undefined2 *)(puVar10 + 1) = 0x20;
    *puVar10 = 0x2e0027;
    *(longlong *)(lVar6 + 8) = (longlong)puVar10 + 6;
    pvVar17 = (void *)local_558[1];
    if ((ulonglong)local_558[2] <= (longlong)pvVar17 + 100U) {
      FUN_140213274(local_558,0x32);
      pvVar17 = (void *)plVar8[1];
    }
    memcpy(pvVar17,L"The Result would be indistinguishable from using \'",100);
    local_558[1] = (longlong)pvVar17 + 100;
    lVar19 = FUN_1449668a2(local_558,lVar19,iVar15);
    pwVar9 = *(wchar_t **)(lVar19 + 8);
    if (*(wchar_t **)(lVar19 + 0x10) <= pwVar9 + 0x14) {
      FUN_140213274(lVar19,0x14);
      pwVar9 = *(wchar_t **)(lVar19 + 8);
    }
    builtin_wcsncpy(pwVar9,L"\' as the InFilename.",0x14);
    *(wchar_t **)(lVar19 + 8) = pwVar9 + 0x14;
  }
  else {
    lVar19 = (longlong)iVar15;
    uVar14 = 0;
    if (iVar15 < 1) {
      bVar21 = true;
      uVar5 = 0xffffffff;
      uVar18 = 0xffffffff;
    }
    else {
      psVar1 = local_268 + lVar19;
      psVar7 = local_268;
      do {
        if (*psVar7 == 0x2e) goto LAB_140f11ba9;
        psVar7 = psVar7 + 1;
        uVar14 = uVar14 + 1;
      } while (psVar7 < psVar1);
      uVar14 = 0xffffffff;
LAB_140f11ba9:
      uVar14 = (uint)(uVar14 != 0xffffffff);
      uVar5 = 0;
      psVar7 = local_268;
      do {
        if (*psVar7 == 0x5c) goto LAB_140f11bcb;
        psVar7 = psVar7 + 1;
        uVar5 = uVar5 + 1;
      } while (psVar7 < psVar1);
      uVar5 = 0xffffffff;
LAB_140f11bcb:
      bVar21 = uVar5 == 0xffffffff;
      uVar11 = 0;
      psVar7 = local_268;
      do {
        uVar18 = uVar11;
        if (*psVar7 == 0x3a) break;
        psVar7 = psVar7 + 1;
        uVar11 = uVar11 + 1;
        uVar18 = 0xffffffff;
      } while (psVar7 < psVar1);
    }
    if ((((local_544 & 1) == 0 & (byte)uVar14) == 0) && ((uVar5 & uVar18) == 0xffffffff)) {
      pvVar17 = (void *)*local_540;
      local_540[1] = (longlong)pvVar17;
      if ((void *)local_540[2] <= (void *)((longlong)pvVar17 + lVar19 * 2)) {
        FUN_140213274(local_540,lVar19);
        pvVar17 = (void *)plVar2[1];
      }
      memcpy(pvVar17,psVar3,lVar19 * 2);
      plVar2[1] = (longlong)((longlong)pvVar17 + lVar19 * 2);
LAB_140f11c39:
      uVar13 = 1;
      goto LAB_140f11c3b;
    }
    local_508 = (undefined4)*local_550;
    uStack_504 = *(undefined4 *)((longlong)local_550 + 4);
    uStack_500 = (undefined4)local_550[1];
    uStack_4fc = *(undefined4 *)((longlong)local_550 + 0xc);
    cVar4 = FUN_1404d40a0();
    if (cVar4 != '\0') {
      local_478 = &local_268;
      local_470 = '\0';
      local_518 = (undefined4)*local_550;
      uStack_514 = *(undefined4 *)((longlong)local_550 + 4);
      uStack_510 = (undefined4)local_550[1];
      uStack_50c = *(undefined4 *)((longlong)local_550 + 0xc);
      local_488 = local_468;
      uStack_480 = local_468;
      FUN_1411bb8fa(&local_518,&local_488);
      puVar16 = local_488;
      local_528 = local_488;
      iVar15 = (int)((ulonglong)((longlong)uStack_480 - (longlong)local_488) >> 1);
      local_520 = iVar15;
      cVar4 = FUN_1404d40a0();
      if ((cVar4 == '\0') && (1 < iVar15)) {
        local_538 = puVar16;
        local_530 = iVar15;
        cVar4 = FUN_140f11966(&local_538,local_540,0,local_544);
        if (cVar4 != '\0') {
          if (local_470 == '\x01') {
            FUN_1400020a8(local_488);
          }
          goto LAB_140f11c39;
        }
      }
      if (local_470 == '\x01') {
        FUN_1400020a8(local_488);
      }
    }
    plVar8 = local_558;
    if (local_558 != (longlong *)0x0) {
      local_478 = local_448;
      local_470 = '\0';
      lVar19 = 0x20;
      uStack_480 = local_468;
      if ((byte)uVar14 != 0) {
        uStack_480 = local_468 + 1;
        local_468[0] = 0x2e;
        lVar19 = 0x22;
      }
      lVar6 = lVar19;
      if (!bVar21) {
        uStack_480 = (undefined2 *)((longlong)&local_488 + lVar19 + 2);
        lVar6 = lVar19 + 2;
        *(undefined2 *)((longlong)&local_488 + lVar19) = 0x5c;
      }
      if (uVar18 != 0xffffffff) {
        uStack_480 = (undefined2 *)((longlong)&local_488 + lVar6 + 2);
        *(undefined2 *)((longlong)&local_488 + lVar6) = 0x3a;
      }
      pvVar17 = (void *)*local_558;
      local_558[1] = (longlong)pvVar17;
      local_488 = local_468;
      if ((ulonglong)local_558[2] <= (longlong)pvVar17 + 0x5aU) {
        FUN_140213274(local_558,0x2d);
        pvVar17 = (void *)plVar8[1];
      }
      memcpy(pvVar17,L"FilenameToLongPackageName failed to convert \'",0x5a);
      local_558[1] = (longlong)pvVar17 + 0x5a;
      lVar19 = FUN_1449668a2(local_558,*local_550,(int)local_550[1]);
      puVar10 = *(undefined4 **)(lVar19 + 8);
      if (*(ulonglong *)(lVar19 + 0x10) <= (longlong)puVar10 + 6U) {
        FUN_140213274(lVar19,3);
        puVar10 = *(undefined4 **)(lVar19 + 8);
      }
      plVar8 = local_558;
      *(undefined2 *)(puVar10 + 1) = 0x20;
      *puVar10 = 0x2e0027;
      *(longlong *)(lVar19 + 8) = (longlong)puVar10 + 6;
      pwVar9 = (wchar_t *)local_558[1];
      if ((wchar_t *)local_558[2] <= pwVar9 + 0x14) {
        FUN_140213274(local_558,0x14);
        pwVar9 = (wchar_t *)plVar8[1];
      }
      builtin_wcsncpy(pwVar9,L"Attempt result was \'",0x14);
      local_558[1] = (longlong)(pwVar9 + 0x14);
      lVar19 = FUN_1449668a2(local_558,psVar3,uVar20 & 0xffffffff);
      pvVar17 = *(void **)(lVar19 + 8);
      if (*(ulonglong *)(lVar19 + 0x10) <= (longlong)pvVar17 + 0x5aU) {
        FUN_140213274(lVar19,0x2d);
        pvVar17 = *(void **)(lVar19 + 8);
      }
      memcpy(pvVar17,L"\', but the path contains illegal characters \'",0x5a);
      *(longlong *)(lVar19 + 8) = (longlong)pvVar17 + 0x5a;
      lVar19 = FUN_1449668a2(lVar19,local_488,
                             (ulonglong)((longlong)uStack_480 - (longlong)local_488) >> 1);
      puVar10 = *(undefined4 **)(lVar19 + 8);
      if (*(undefined4 **)(lVar19 + 0x10) <= puVar10 + 1) {
        FUN_140213274(lVar19,2);
        puVar10 = *(undefined4 **)(lVar19 + 8);
      }
      *puVar10 = 0x2e0027;
      *(undefined4 **)(lVar19 + 8) = puVar10 + 1;
      if (local_470 == '\x01') {
        FUN_1400020a8(local_488);
      }
    }
  }
  uVar13 = 0;
LAB_140f11c3b:
  if (local_250 == '\x01') {
    FUN_1400020a8(local_268);
  }
  if ((local_48 ^ (ulonglong)auStack_578) == DAT_14c707940) {
    return uVar13;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f123c4 FUN_140f123c4 body=304 status=ok
// SIG undefined FUN_140f123c4(void)

void FUN_140f123c4(undefined8 *param_1,undefined8 *param_2,longlong *param_3,longlong *param_4)

{
  longlong lVar1;
  short *psVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_88 [40];
  longlong *local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  uint uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_60 = param_4;
  FUN_140115b7a(&local_58,param_1);
  uVar4 = uStack_50;
  lVar10 = (longlong)(int)uStack_50;
  lVar9 = CONCAT44(uStack_54,local_58);
  lVar8 = 0;
  lVar7 = lVar10 * 2;
  do {
    if (lVar7 == 0) goto LAB_140f1242e;
    lVar1 = lVar7 + -2;
    psVar2 = (short *)(lVar9 + -2 + lVar7);
    lVar7 = lVar1;
  } while (*psVar2 != 0x2e);
  lVar8 = lVar1 + lVar9;
LAB_140f1242e:
  uVar3 = *(uint *)(param_1 + 1);
  uVar6 = ~uStack_50 + uVar3;
  if ((int)uVar3 <= (int)(~uStack_50 + uVar3)) {
    uVar6 = uVar3;
  }
  if ((int)uVar6 < 1) {
    uVar6 = 0;
  }
  *param_2 = *param_1;
  *(uint *)(param_2 + 1) = uVar6;
  uVar6 = (uint)((ulonglong)(lVar8 - lVar9) >> 1);
  uVar3 = uStack_50;
  if (((lVar8 == 0) || (uVar3 = uVar6, uStack_50 != 2)) ||
     (iVar5 = FUN_144a54874(lVar9,&DAT_149e06258,2), iVar5 != 0)) {
    uVar6 = uVar4;
    if ((int)uVar3 < (int)uVar4) {
      uVar6 = uVar3;
    }
    if ((int)uVar6 < 1) {
      uVar6 = 0;
    }
    *param_3 = lVar9;
    *(uint *)(param_3 + 1) = uVar6;
    uVar6 = ~uVar3 + uVar4;
    if ((int)uVar4 <= (int)(~uVar3 + uVar4)) {
      uVar6 = uVar4;
    }
    if ((int)uVar6 < 1) {
      uVar6 = 0;
    }
    lVar9 = (lVar9 + lVar10 * 2) - (ulonglong)(uVar6 * 2);
  }
  else {
    *(undefined4 *)param_3 = local_58;
    *(undefined4 *)((longlong)param_3 + 4) = uStack_54;
    *(uint *)(param_3 + 1) = uStack_50;
    *(undefined4 *)((longlong)param_3 + 0xc) = uStack_4c;
    lVar9 = 0;
    uVar6 = 0;
  }
  *local_60 = lVar9;
  *(uint *)(local_60 + 1) = uVar6;
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f124f6 FUN_140f124f6 body=390 status=ok
// SIG undefined FUN_140f124f6(void)

ulonglong FUN_140f124f6(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  PSRWLOCK SRWLock;
  undefined8 *puVar2;
  longlong lVar3;
  void *_Src;
  void *_Dst;
  char cVar4;
  longlong *plVar5;
  int iVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  int local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  int local_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  SRWLock = (PSRWLOCK)*param_1;
  AcquireSRWLockShared(SRWLock);
  local_58 = *param_2;
  uStack_50 = *(undefined4 *)(param_2 + 1);
  uStack_4c = *(undefined4 *)((longlong)param_2 + 0xc);
  uVar7 = 0;
  plVar5 = (longlong *)FUN_14022f68a(*param_1 + 0x160,&local_58,0);
  if (plVar5 != (longlong *)0x0) {
    puVar2 = (undefined8 *)*plVar5;
    local_58 = 0;
    uStack_50 = 0;
    local_68 = puVar2[2];
    local_60 = *(int *)(puVar2 + 3) + -1;
    if (*(int *)(puVar2 + 3) == 0) {
      local_60 = 0;
    }
    local_78 = *(undefined4 *)param_2;
    uStack_74 = *(undefined4 *)((longlong)param_2 + 4);
    uStack_70 = *(undefined4 *)(param_2 + 1);
    uStack_6c = *(undefined4 *)((longlong)param_2 + 0xc);
    cVar4 = FUN_14022fd12();
    if (cVar4 == '\0') {
      local_88 = puVar2[4];
      uVar7 = 0;
      local_80 = *(int *)(puVar2 + 5) + -1;
      if (*(int *)(puVar2 + 5) == 0) {
        local_80 = 0;
      }
      local_98 = *(undefined4 *)param_2;
      uStack_94 = *(undefined4 *)((longlong)param_2 + 4);
      uStack_90 = *(undefined4 *)(param_2 + 1);
      uStack_8c = *(undefined4 *)((longlong)param_2 + 0xc);
      cVar4 = FUN_14022fd12(&local_98,&local_88,&local_58);
      if (cVar4 == '\0') goto LAB_140f12633;
    }
    lVar3 = param_1[1];
    _Src = (void *)*puVar2;
    uVar1 = *(uint *)(puVar2 + 1);
    iVar6 = uVar1 - 1;
    if (uVar1 == 0) {
      iVar6 = 0;
    }
    lVar8 = (longlong)iVar6;
    if (*(ulonglong *)(lVar3 + 0x10) <= (ulonglong)(*(longlong *)(lVar3 + 8) + lVar8 * 2)) {
      FUN_140213274(lVar3,lVar8);
    }
    if (1 < uVar1) {
      _Dst = *(void **)(lVar3 + 8);
      memcpy(_Dst,_Src,lVar8 * 2);
      *(void **)(lVar3 + 8) = (void *)(lVar8 * 2 + (longlong)_Dst);
    }
    local_a8 = (undefined4)local_58;
    uStack_a4 = local_58._4_4_;
    uStack_a0 = uStack_50;
    uStack_9c = uStack_4c;
    FUN_1404d3f7a(param_1[1]);
    uVar7 = CONCAT71((int7)((ulonglong)_Src >> 8),1);
  }
LAB_140f12633:
  ReleaseSRWLockShared(SRWLock);
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar7 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f1267e FUN_140f1267e body=277 status=ok
// SIG undefined FUN_140f1267e(void)

undefined8 FUN_140f1267e(longlong param_1)

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
    if (iVar1 == 2) goto LAB_140f1278d;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_140f1278d;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_140f1278d:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_140f1273b;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5 + (longlong)*(int *)(param_1 + 0x28));
      uVar6 = 1;
      goto LAB_140f1273b;
    }
  }
  uVar6 = 0;
LAB_140f1273b:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f12794 FUN_140f12794 body=40 status=ok
// SIG undefined FUN_140f12794(void)

void FUN_140f12794(longlong param_1)

{
  FUN_140f127bc(param_1 + 0x2c0);
  FUN_140f127bc(param_1 + 0x2e0);
  return;
}



// FUNCTION 140f127bc FUN_140f127bc body=495 status=ok
// SIG undefined FUN_140f127bc(void)

void FUN_140f127bc(longlong *param_1)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  int iVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  longlong lVar15;
  bool bVar16;
  
  iVar1 = (int)param_1[1];
  lVar11 = (longlong)iVar1;
  if (lVar11 == 0) {
    return;
  }
  plVar3 = (longlong *)*param_1;
  lVar8 = *plVar3;
  if ((lVar8 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  else if (lVar8 == 0) {
    uVar12 = 0;
    goto LAB_140f12831;
  }
  uVar12 = *(uint *)(lVar8 + 0xc);
  if ((int)uVar12 < DAT_14c9647dc) {
    lVar8 = (ulonglong)((uVar12 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8);
  }
  else {
    lVar8 = 0;
  }
  uVar12 = *(uint *)(lVar8 + 8) >> 0x15 & 1;
LAB_140f12831:
  iVar6 = 0;
  iVar13 = 0;
  do {
    bVar5 = DAT_14c950c29;
    if (iVar13 + 1 < iVar1) {
      do {
        lVar8 = (longlong)iVar13 + 2;
        uVar14 = 1;
        lVar15 = -1;
        do {
          lVar10 = plVar3[lVar8 + -1];
          if (((bVar5 & 1) == 0) || (lVar10 == 0)) {
            if (lVar10 != 0) goto LAB_140f1288d;
            if (uVar12 != 0) {
              if ((char)uVar14 == '\0') goto LAB_140f12980;
              iVar7 = iVar13 - (int)lVar15;
              goto LAB_140f12905;
            }
          }
          else {
            FUN_1456cec3c(lVar10);
            bVar5 = DAT_14c950c29;
LAB_140f1288d:
            uVar2 = *(uint *)(lVar10 + 0xc);
            if ((int)uVar2 < DAT_14c9647dc) {
              lVar10 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
            }
            else {
              lVar10 = 0;
            }
            if ((((byte)(*(uint *)(lVar10 + 8) >> 0x15) ^ (byte)uVar12) & 1) != 0) {
              iVar7 = iVar13 - (int)lVar15;
              break;
            }
          }
          uVar14 = (uint)(lVar8 < lVar11);
          lVar15 = lVar15 + -1;
          lVar8 = lVar8 + 1;
          iVar7 = iVar1;
        } while (iVar13 - lVar11 != lVar15);
        bVar16 = uVar12 == 0;
        iVar4 = iVar7;
        iVar9 = iVar13;
        uVar12 = uVar14;
        if (bVar16) break;
        if ((char)uVar14 == '\0') goto LAB_140f12980;
LAB_140f12905:
        uVar12 = 0;
        iVar4 = iVar7 + 1;
        iVar13 = iVar7;
        iVar9 = iVar7;
      } while (iVar7 + 1 < iVar1);
    }
    else {
      if (uVar12 != 0) break;
      iVar4 = iVar13 + 1;
      iVar9 = iVar13;
      uVar12 = 0;
    }
    iVar13 = iVar4;
    if (iVar6 != iVar9) {
      memmove(plVar3 + iVar6,plVar3 + iVar9,(longlong)(iVar13 - iVar9) << 3);
    }
    iVar6 = iVar6 + (iVar13 - iVar9);
    bVar16 = uVar12 != 0;
    uVar12 = 1;
  } while (bVar16);
LAB_140f12980:
  *(int *)(param_1 + 1) = iVar6;
  return;
}



// FUNCTION 140f129ac FUN_140f129ac body=107 status=ok
// SIG undefined FUN_140f129ac(void)

ulonglong FUN_140f129ac(longlong param_1)

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
LAB_140f129fa:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_140f129fa;
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
      (**(code **)(param_1 + 0x28))(lVar4 + *(int *)(param_1 + 0x30),*(undefined1 *)(param_1 + 8));
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



// FUNCTION 140f12a18 FUN_140f12a18 body=109 status=ok
// SIG undefined FUN_140f12a18(void)

void FUN_140f12a18(longlong param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  if (*(int *)(param_1 + 0x44) != 0) {
    uVar1 = *(uint *)(param_1 + 0x40);
    uVar3 = 0;
    if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_140f12a6d;
    puVar4 = (undefined8 *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if ((puVar4 != (undefined8 *)0x0) &&
       ((*(int *)(puVar4 + 2) == *(int *)(param_1 + 0x44) &&
        ((*(uint *)(puVar4 + 1) & 0x10200000) == 0)))) {
      uVar3 = *puVar4;
      goto LAB_140f12a6d;
    }
  }
  uVar3 = 0;
LAB_140f12a6d:
  uVar2 = FUN_140f12a86(*(undefined8 *)(param_1 + 0x30),uVar3);
  FUN_1402a7054(param_1,uVar2);
  return;
}



// FUNCTION 140f12a86 FUN_140f12a86 body=137 status=ok
// SIG undefined FUN_140f12a86(void)

undefined8 FUN_140f12a86(longlong param_1,longlong param_2)

{
  byte bVar1;
  uint uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined7 uVar5;
  longlong lVar6;
  byte bVar7;
  
  if ((param_2 == 0) || (*(char *)(param_1 + 0x10) != '\0')) {
    return 0;
  }
  lVar6 = param_2;
  uVar2 = FUN_1403ae46b();
  bVar7 = (byte)lVar6;
  if (((-1 < (int)uVar2) && ((int)uVar2 < *(int *)(param_2 + 0x78f0))) &&
     (lVar6 = (ulonglong)uVar2 * 0x48 + *(longlong *)(param_2 + 0x78e8), lVar6 != 0)) {
    bVar1 = 0;
    uVar5 = 0;
    if (*(longlong *)(lVar6 + 0x20) != 0) {
      if (*(longlong **)(lVar6 + 0x28) == (longlong *)0x0) goto LAB_140f12aff;
      lVar6 = (**(code **)(**(longlong **)(lVar6 + 0x28) + 8))();
      if (lVar6 != 0) {
        uVar3 = FUN_1403ae386();
        plVar4 = (longlong *)FUN_144718840(lVar6,uVar3);
        bVar7 = (byte)uVar3;
        if (plVar4 != (longlong *)0x0) {
          uVar3 = (**(code **)(*plVar4 + 0x38))(plVar4);
          bVar7 = (byte)uVar3;
          uVar5 = (undefined7)((ulonglong)uVar3 >> 8);
          bVar1 = 1;
          goto LAB_140f12aff;
        }
      }
    }
  }
  bVar1 = 0;
  uVar5 = 0;
LAB_140f12aff:
  return CONCAT71(uVar5,bVar1 & bVar7);
}



// FUNCTION 140f12b10 FUN_140f12b10 body=193 status=ok
// SIG undefined FUN_140f12b10(void)

void FUN_140f12b10(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  
  lVar3 = param_1[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar2 = *param_1;
    uVar6 = 0;
    do {
      cVar4 = FUN_14493b798(lVar2 + uVar6,param_2);
      if (cVar4 != '\0') {
        if ((int)(uVar6 >> 3) * -0x49249249 != -1) {
          return;
        }
        break;
      }
      uVar6 = uVar6 + 0x38;
    } while ((longlong)(int)lVar3 * 0x38 - uVar6 != 0);
  }
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_140f12bd2(param_1,iVar1);
  }
  puVar5 = (undefined8 *)((longlong)iVar1 * 0x38 + *param_1);
  *(undefined2 *)puVar5 = 0;
  *(undefined8 *)((longlong)puVar5 + 4) = 0;
  puVar5[2] = 0;
  puVar5[3] = 0;
  *(undefined4 *)(puVar5 + 4) = 0;
  puVar5[5] = 0;
  puVar5[6] = 0;
  *(undefined4 *)(puVar5 + 1) = *(undefined4 *)(param_2 + 1);
  *puVar5 = *param_2;
  FUN_1447715ec(puVar5 + 2,param_2 + 2);
  return;
}



// FUNCTION 140f12bd2 FUN_140f12bd2 body=369 status=ok
// SIG undefined FUN_140f12bd2(void)

void FUN_140f12bd2(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar11 & 0xffffffff] & 0xf) == 0) goto LAB_140f12c57;
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
LAB_140f12c57:
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



// FUNCTION 140f12d5c FUN_140f12d5c body=3304 status=ok
// SIG undefined FUN_140f12d5c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140f12d5c(longlong param_1,undefined8 param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  byte bVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  double dVar9;
  longlong *plVar10;
  undefined4 *puVar11;
  int iVar12;
  longlong lVar13;
  undefined8 *puVar14;
  int iVar15;
  double *pdVar16;
  double *pdVar17;
  undefined8 uVar18;
  undefined8 *puVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  undefined8 uVar26;
  ulonglong uVar27;
  float fVar28;
  double dVar29;
  double dVar30;
  float fVar31;
  undefined1 auVar32 [16];
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  undefined1 auStack_2e8 [40];
  float local_2c0;
  float local_2bc;
  float local_2b8;
  float local_2b4;
  float local_2b0;
  float local_2ac;
  double local_2a8;
  int local_2a0;
  undefined4 uStack_29c;
  float local_298;
  undefined4 uStack_294;
  double local_290;
  double local_288;
  double local_280;
  float local_278;
  undefined4 local_274;
  undefined4 local_270;
  undefined4 local_26c;
  undefined4 local_268;
  undefined4 local_264;
  undefined4 local_260;
  float local_25c;
  undefined4 local_258;
  undefined4 local_254;
  undefined4 local_250;
  float local_24c;
  undefined4 local_248;
  undefined4 local_244;
  undefined4 local_240;
  uint local_23c;
  undefined4 local_238;
  undefined4 local_234;
  undefined4 local_230;
  undefined4 local_22c;
  float local_228;
  float local_224;
  float local_220;
  float local_21c;
  float local_218;
  float local_214;
  float local_210;
  int local_20c;
  double local_208;
  double local_200;
  undefined8 local_1f8 [16];
  double local_178 [4];
  double local_158;
  double local_150;
  double local_148;
  double local_138;
  double local_130;
  double local_128;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_2e8;
  if (*(char *)(param_1 + 0x2d0) == '\x01') {
    bVar4 = *(byte *)(param_1 + 0x2e2);
    local_20c = *(int *)(param_1 + 0x328);
    iVar5 = *(int *)(param_1 + 0x32c);
    iVar15 = *(int *)(param_1 + 0x334);
    fVar31 = *(float *)(param_1 + 0x33c);
    auVar32 = ZEXT816(0);
    if (fVar31 <= 0.0) {
      iVar25 = 0;
      iVar24 = 0;
    }
    else {
      fVar36 = fVar31;
      if (fVar31 <= 1.0) {
        fVar36 = 1.0;
      }
      iVar24 = (int)((float)_DAT_14c87350c / fVar36) >> (bVar4 & 0x1f);
      if (iVar24 < 2) {
        iVar24 = 1;
      }
      iVar25 = (int)((float)_DAT_14c873510 / fVar36) >> (bVar4 & 0x1f);
      if (iVar25 < 2) {
        iVar25 = 1;
      }
      iVar23 = iVar15 + 1;
      if (fVar31 < 1.0) {
        iVar23 = (iVar5 + 1) * local_20c;
      }
      uVar21 = (uint)((float)iVar23 * fVar31);
      uVar22 = 0x1000;
      if ((int)uVar21 < 0x1000) {
        uVar22 = uVar21;
      }
      iVar12 = (int)((float)(iVar23 + (iVar24 << (bVar4 & 0x1f)) * 2) * fVar31);
      iVar23 = 0x1000;
      if (iVar12 < 0x1000) {
        iVar23 = iVar12;
      }
      if ((int)uVar21 < iVar23) {
        uVar20 = uVar22;
        if (0 < (int)uVar21) {
          do {
            uVar22 = uVar20;
            uVar20 = uVar22 - 1 & uVar22;
          } while (uVar20 != 0);
        }
        uVar22 = uVar22 << ((int)(uVar22 * uVar22 * 2) < iVar23 * iVar23);
      }
      auVar32 = roundps(auVar32,ZEXT416((uint)(((float)(int)uVar22 / (float)iVar23) *
                                              fVar31 * (float)iVar15)),1);
      auVar32._0_4_ =
           ((auVar32._0_4_ / (fVar31 * (float)iVar15)) * (float)iVar23) / (float)(int)uVar22;
    }
    local_2b4 = (float)iVar15;
    iVar15 = *(int *)(param_1 + 0x338) >> (bVar4 & 0x1f);
    local_2b8 = auVar32._0_4_ / (float)(iVar15 + iVar24 * 2);
    fVar31 = auVar32._0_4_ / (float)(iVar15 + iVar25 * 2);
    local_2c0 = (float)(iVar15 + -1);
    pdVar16 = (double *)(param_1 + 0x100);
    pdVar17 = local_178;
    for (lVar13 = 0x10; lVar13 != 0; lVar13 = lVar13 + -1) {
      *pdVar17 = *pdVar16;
      pdVar16 = pdVar16 + 1;
      pdVar17 = pdVar17 + 1;
    }
    if ((((((9.99999993922529e-09 < ABS(local_178[0])) || (9.99999993922529e-09 < ABS(local_178[1]))
           ) || (9.99999993922529e-09 < ABS(local_178[2]))) ||
         ((9.99999993922529e-09 < ABS(local_158) || (9.99999993922529e-09 < ABS(local_150))))) ||
        ((9.99999993922529e-09 < ABS(local_148) ||
         ((9.99999993922529e-09 < ABS(local_138) || (9.99999993922529e-09 < ABS(local_130))))))) ||
       (9.99999993922529e-09 < ABS(local_128))) {
      FUN_14007522e(local_1f8,local_178);
      local_20c = *(int *)(param_1 + 0x328);
    }
    else {
      puVar14 = &DAT_14c846400;
      puVar19 = local_1f8;
      for (lVar13 = 0x10; lVar13 != 0; lVar13 = lVar13 + -1) {
        *puVar19 = *puVar14;
        puVar14 = puVar14 + 1;
        puVar19 = puVar19 + 1;
      }
    }
    puVar14 = local_1f8;
    puVar19 = (undefined8 *)(param_1 + 0x610);
    for (lVar13 = 0x10; lVar13 != 0; lVar13 = lVar13 + -1) {
      *puVar19 = *puVar14;
      puVar14 = puVar14 + 1;
      puVar19 = puVar19 + 1;
    }
    pdVar16 = local_178;
    pdVar17 = (double *)(param_1 + 0x350);
    for (lVar13 = 0x10; lVar13 != 0; lVar13 = lVar13 + -1) {
      *pdVar17 = *pdVar16;
      pdVar16 = pdVar16 + 1;
      pdVar17 = pdVar17 + 1;
    }
    local_2a8 = *(double *)(param_1 + 0x350);
    local_280 = *(double *)(param_1 + 0x358);
    dVar1 = *(double *)(param_1 + 0x360);
    dVar30 = dVar1 * dVar1 + local_2a8 * local_2a8 + local_280 * local_280;
    local_288 = *(double *)(param_1 + 0x370);
    local_290 = *(double *)(param_1 + 0x378);
    dVar2 = *(double *)(param_1 + 0x380);
    dVar9 = dVar2 * dVar2 + local_288 * local_288 + local_290 * local_290;
    local_200 = *(double *)(param_1 + 0x390);
    local_208 = *(double *)(param_1 + 0x398);
    dVar3 = *(double *)(param_1 + 0x3a0);
    dVar29 = dVar3 * dVar3 + local_200 * local_200 + local_208 * local_208;
    uVar27 = -(ulonglong)(0.0 <= dVar30 + -9.99999993922529e-09);
    dVar30 = (double)(~uVar27 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar30)) & uVar27);
    uVar27 = -(ulonglong)(0.0 <= dVar9 + -9.99999993922529e-09);
    dVar9 = (double)(~uVar27 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar9)) & uVar27);
    local_2bc = local_2b8 * local_2c0;
    local_2c0 = local_2c0 * fVar31;
    uVar27 = -(ulonglong)(0.0 <= dVar29 + -9.99999993922529e-09);
    dVar29 = (double)(~uVar27 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar29)) & uVar27);
    local_2a8 = local_2a8 * dVar30;
    *(double *)(param_1 + 0x350) = local_2a8;
    local_280 = local_280 * dVar30;
    *(double *)(param_1 + 0x358) = local_280;
    *(double *)(param_1 + 0x360) = dVar30 * dVar1;
    local_288 = local_288 * dVar9;
    *(double *)(param_1 + 0x370) = local_288;
    local_290 = local_290 * dVar9;
    *(double *)(param_1 + 0x378) = local_290;
    *(double *)(param_1 + 0x380) = dVar9 * dVar2;
    local_200 = local_200 * dVar29;
    *(double *)(param_1 + 0x390) = local_200;
    local_208 = local_208 * dVar29;
    *(double *)(param_1 + 0x398) = local_208;
    *(double *)(param_1 + 0x3a0) = dVar29 * dVar3;
    local_244 = *(undefined4 *)(param_1 + 0x2b8);
    local_248 = *(undefined4 *)(param_1 + 700);
    _local_2a0 = CONCAT44((int)((ulonglong)dVar2 >> 0x20),*(undefined4 *)(param_1 + 0x330));
    local_238 = *(undefined4 *)(param_1 + 0x2fc);
    local_23c = (uint)*(byte *)(param_1 + 0x2e3);
    local_22c = *(undefined4 *)(param_1 + 0x530);
    local_230 = *(undefined4 *)(param_1 + 0x534);
    local_234 = *(undefined4 *)(param_1 + 0x538);
    local_214 = (float)*(double *)(param_1 + 0x368);
    local_240 = *(undefined4 *)(param_1 + 0x53c);
    local_210 = (float)*(double *)(param_1 + 0x388);
    local_218 = (float)*(double *)(param_1 + 0x3a8);
    local_250 = *(undefined4 *)(param_1 + 0x4f0);
    local_21c = (float)*(double *)(param_1 + 0x3b0);
    local_258 = *(undefined4 *)(param_1 + 0x4f4);
    local_220 = (float)*(double *)(param_1 + 0x3b8);
    local_260 = *(undefined4 *)(param_1 + 0x4f8);
    local_224 = (float)*(double *)(param_1 + 0x3c0);
    local_268 = *(undefined4 *)(param_1 + 0x4fc);
    local_228 = (float)*(double *)(param_1 + 0x3c8);
    local_270 = *(undefined4 *)(param_1 + 0x30c);
    local_24c = (float)*(int *)(param_1 + 0x344);
    local_274 = *(undefined4 *)(param_1 + 0x5d0);
    local_25c = (float)*(int *)(param_1 + 0x340);
    _local_298 = CONCAT44((int)((ulonglong)dVar1 >> 0x20),(float)*(int *)(param_1 + 0x32c));
    fVar36 = 1.0;
    local_254 = *(undefined4 *)(param_1 + 0x2e4);
    local_264 = *(undefined4 *)(param_1 + 0x544);
    local_26c = *(undefined4 *)(param_1 + 0x540);
    if ((*(longlong *)(param_1 + 0x520) == 0) ||
       (plVar10 = (longlong *)FUN_1447b4020(), plVar10 == (longlong *)0x0)) {
      uVar18 = *(undefined8 *)(DAT_14ca94dc8 + 0x18);
      local_2b0 = 1.0;
      local_2ac = 1.0;
      lVar13 = DAT_14ca94dc8;
      uVar26 = uVar18;
      fVar38 = fVar36;
    }
    else {
      iVar15 = (**(code **)(*plVar10 + 0x30))(plVar10);
      fVar34 = (float)(iVar15 + (uint)(iVar15 == 0));
      iVar15 = (**(code **)(*plVar10 + 0x38))(plVar10);
      local_2b0 = (float)(iVar15 + (uint)(iVar15 == 0));
      fVar36 = 1.0 / local_2b0;
      lVar13 = *(longlong *)(*(longlong *)(param_1 + 0x520) + 0x128);
      uVar18 = DAT_14c9c0de0;
      uVar26 = DAT_14c9c0d80;
      fVar38 = 1.0 / fVar34;
      local_2ac = fVar34;
    }
    local_2bc = local_2bc / local_2b4;
    fVar34 = (float)iVar5;
    local_2c0 = local_2c0 / local_2b4;
    uVar6 = *(undefined8 *)(lVar13 + 0x10);
    if ((*(longlong *)(param_1 + 0x548) == 0) || (lVar13 = FUN_1447b4020(), lVar13 == 0)) {
      puVar14 = (undefined8 *)(DAT_14ca94dc8 + 0x18);
      lVar13 = DAT_14ca94dc8;
      fVar28 = local_2bc;
    }
    else {
      lVar13 = *(longlong *)(*(longlong *)(param_1 + 0x548) + 0x128);
      puVar14 = &DAT_14c9c0d80;
      fVar28 = local_2bc;
    }
    local_2b8 = local_2b8 * (float)iVar24;
    local_2bc = (float)local_2a8;
    local_278 = (float)local_280;
    local_280 = (double)CONCAT44(local_280._4_4_,(float)local_288);
    local_288 = (double)CONCAT44(local_288._4_4_,(float)local_290);
    local_290 = (double)CONCAT44(local_290._4_4_,(float)(dVar9 * dVar2));
    local_2b4 = (float)local_200;
    local_2a8 = (double)CONCAT44(local_2a8._4_4_,(float)local_208);
    fVar35 = fVar34 * local_2c0;
    fVar37 = 1.0 / local_298;
    fVar33 = (float)local_2a0;
    uVar7 = *puVar14;
    uVar8 = *(undefined8 *)(lVar13 + 0x10);
    puVar11 = *(undefined4 **)(param_1 + 0x5f8);
    if (puVar11 == (undefined4 *)0x0) {
      puVar11 = (undefined4 *)FUN_14001cc68(0x100,0x10);
      *(undefined4 **)(param_1 + 0x5f8) = puVar11;
    }
    *puVar11 = local_244;
    puVar11[1] = local_248;
    puVar11[2] = local_2a0;
    puVar11[3] = local_20c;
    puVar11[4] = local_238;
    puVar11[5] = local_23c;
    puVar11[6] = local_270;
    puVar11[7] = local_274;
    puVar11[8] = local_2ac;
    puVar11[9] = local_2b0;
    puVar11[10] = fVar38;
    puVar11[0xb] = fVar36;
    puVar11[0xc] = local_22c;
    puVar11[0xd] = local_230;
    puVar11[0xe] = local_234;
    puVar11[0xf] = local_240;
    puVar11[0x10] = local_250;
    puVar11[0x11] = local_258;
    puVar11[0x12] = local_260;
    puVar11[0x13] = local_268;
    puVar11[0x14] = fVar28;
    puVar11[0x15] = local_2c0;
    puVar11[0x16] = fVar31 * (float)iVar25;
    puVar11[0x17] = local_2b8;
    puVar11[0x18] = fVar33;
    puVar11[0x19] = fVar37;
    puVar11[0x1a] = local_25c;
    puVar11[0x1b] = local_24c;
    puVar11[0x1c] = local_26c;
    puVar11[0x1d] = local_264;
    puVar11[0x1e] = local_254;
    puVar11[0x1f] = local_298;
    puVar11[0x20] = fVar28 * fVar34;
    puVar11[0x21] = fVar35;
    *(undefined8 *)(puVar11 + 0x22) = 0;
    puVar11[0x24] = local_2bc;
    puVar11[0x25] = local_278;
    puVar11[0x26] = (float)(dVar30 * dVar1);
    puVar11[0x27] = local_214;
    puVar11[0x28] = local_280._0_4_;
    puVar11[0x29] = local_288._0_4_;
    puVar11[0x2a] = local_290._0_4_;
    puVar11[0x2b] = local_210;
    puVar11[0x2c] = local_2b4;
    puVar11[0x2d] = local_2a8._0_4_;
    puVar11[0x2e] = (float)(dVar29 * dVar3);
    puVar11[0x2f] = local_218;
    puVar11[0x30] = local_21c;
    puVar11[0x31] = local_220;
    puVar11[0x32] = local_224;
    puVar11[0x33] = local_228;
    *(undefined8 *)(puVar11 + 0x34) = uVar6;
    *(undefined8 *)(puVar11 + 0x36) = uVar26;
    *(undefined8 *)(puVar11 + 0x38) = uVar6;
    *(undefined8 *)(puVar11 + 0x3a) = uVar18;
    *(undefined8 *)(puVar11 + 0x3c) = uVar8;
    *(undefined8 *)(puVar11 + 0x3e) = uVar7;
    FUN_1447fd100(param_1 + 0x5d8,param_2);
    (**(code **)(**(longlong **)(param_1 + 0x210) + 0x268))(*(longlong **)(param_1 + 0x210),param_1)
    ;
  }
  if ((local_f0 ^ (ulonglong)auStack_2e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140f13a46 FUN_140f13a46 body=97 status=ok
// SIG undefined FUN_140f13a46(void)

void FUN_140f13a46(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (*(int *)(param_1 + 0x14) < 0) {
    FUN_146557146(param_1 + 8,0);
  }
  FUN_140f13b56(param_1,param_1 + 8);
  iVar1 = *(int *)(param_1 + 0x10);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 8);
    lVar3 = 0;
    do {
      FUN_140f13aa8(*(undefined8 *)(lVar2 + lVar3),1);
      lVar3 = lVar3 + 8;
    } while ((longlong)iVar1 * 8 != lVar3);
  }
  return;
}



// FUNCTION 140f13aa8 FUN_140f13aa8 body=59 status=ok
// SIG undefined FUN_140f13aa8(void)

void FUN_140f13aa8(undefined8 param_1,char param_2)

{
  char cVar1;
  longlong lVar2;
  
  if (param_2 == '\0') {
    return;
  }
  lVar2 = FUN_140f42f34();
  if ((lVar2 != 0) && (cVar1 = FUN_1405f61f4(lVar2), cVar1 != '\0')) {
    return;
  }
  FUN_140f13ae4(param_1,1,1);
  return;
}



// FUNCTION 140f13ae4 FUN_140f13ae4 body=113 status=ok
// SIG undefined FUN_140f13ae4(void)

void FUN_140f13ae4(longlong *param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  longlong lVar2;
  
  cVar1 = FUN_140dcc79c();
  if (cVar1 != '\0') {
    lVar2 = FUN_140f42f34(param_1);
    if (lVar2 == 0) {
      cVar1 = '\0';
    }
    else {
      cVar1 = FUN_1405f61f4(lVar2);
    }
    if (cVar1 != (char)param_2) {
      lVar2 = FUN_140f42f34(param_1);
      if (lVar2 != 0) {
        FUN_143d35bac(lVar2,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x000140f13b49. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0xf8))(param_1,param_2);
        return;
      }
    }
  }
  return;
}



// FUNCTION 140f13b56 FUN_140f13b56 body=449 status=ok
// SIG undefined FUN_140f13b56(void)

void FUN_140f13b56(longlong *param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_a8 [36];
  int local_84;
  longlong local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar4 = FUN_140e1935a(*param_1);
  local_84 = 0;
  if ((lVar4 != 0) && (lVar4 = *(longlong *)(*(longlong *)(lVar4 + 8) + 0x58), lVar4 != 0)) {
    local_84 = FUN_140e195fa(lVar4 + 0x38);
  }
  lVar4 = (longlong)*(int *)(*(longlong *)(*param_1 + 0x60) + 0x20);
  if (lVar4 != 0) {
    lVar3 = *(longlong *)(*(longlong *)(*param_1 + 0x60) + 0x18);
    lVar6 = 0;
    do {
      local_60 = *(undefined4 *)(lVar3 + 8 + lVar6);
      local_68 = *(undefined8 *)(lVar3 + lVar6);
      local_58 = local_68;
      local_50 = local_60;
      lVar5 = (**(code **)(**(longlong **)(*param_1 + 8) + 8))
                        (*(longlong **)(*param_1 + 8),&local_58);
      if (lVar5 != 0) {
        iVar1 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
          FUN_140f16476(param_2,iVar1);
        }
        *(longlong *)(*param_2 + (longlong)iVar1 * 8) = lVar5;
      }
      lVar6 = lVar6 + 0xc;
    } while (lVar4 * 0xc != lVar6);
  }
  iVar1 = local_84;
  FUN_140e19940(param_1,local_84,param_2);
  lVar4 = (longlong)*(int *)(*(longlong *)(*param_1 + 0x60) + 0x40);
  if (lVar4 != 0) {
    lVar3 = *(longlong *)(*(longlong *)(*param_1 + 0x60) + 0x38);
    local_80 = lVar4 * 0x14;
    lVar4 = lVar3 + 0x10;
    lVar6 = 0;
    do {
      if ((*(int *)(lVar3 + 0xc + lVar6) <= iVar1) && (iVar1 <= *(int *)(lVar4 + lVar6))) {
        lVar5 = lVar6 + lVar4;
        local_70 = *(undefined4 *)(lVar5 + -8);
        local_78 = *(undefined8 *)(lVar5 + -0x10);
        local_58 = local_78;
        local_50 = local_70;
        lVar5 = (**(code **)(**(longlong **)(*param_1 + 8) + 8))
                          (*(longlong **)(*param_1 + 8),&local_58);
        if (lVar5 != 0) {
          iVar2 = (int)param_2[1];
          *(uint *)(param_2 + 1) = iVar2 + 1U;
          if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
            FUN_140f16476(param_2,iVar2);
          }
          *(longlong *)(*param_2 + (longlong)iVar2 * 8) = lVar5;
        }
      }
      lVar6 = lVar6 + 0x14;
    } while (local_80 != lVar6);
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140f13d18 FUN_140f13d18 body=133 status=ok
// SIG undefined FUN_140f13d18(void)

undefined8 * FUN_140f13d18(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_149ee3280;
  FUN_140ca8d78(param_1 + 2);
  FUN_140ca8f8e(param_1 + 0x70);
  param_1[0x86] = DAT_14c84635c;
  *(undefined4 *)(param_1 + 0x87) = 0;
  *(undefined4 *)((longlong)param_1 + 0x43c) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)((longlong)param_1 + 0x444) = 0x3f800000;
  FUN_140ca8f8e(param_1 + 0x8a);
  param_1[0xa0] = 0;
  param_1[0xa1] = 0;
  param_1[0xa2] = 0x40a0000040a00000;
  param_1[0xa3] = 0x40a0000040a00000;
  param_1[0xa4] = 0x4000000040000000;
  param_1[0xa5] = 0x4000000040000000;
  *(undefined1 *)(param_1 + 0xa6) = 2;
  return param_1;
}



// FUNCTION 140f13d9e FUN_140f13d9e body=230 status=ok
// SIG undefined FUN_140f13d9e(void)

longlong FUN_140f13d9e(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
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
  longlong lVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  
  uVar5 = *(undefined4 *)(param_2 + 8);
  uVar6 = *(undefined4 *)(param_2 + 0xc);
  uVar7 = *(undefined4 *)(param_2 + 0x10);
  uVar8 = *(undefined4 *)(param_2 + 0x14);
  uVar9 = *(undefined4 *)(param_2 + 0x18);
  uVar10 = *(undefined4 *)(param_2 + 0x1c);
  uVar11 = *(undefined4 *)(param_2 + 0x20);
  uVar12 = *(undefined4 *)(param_2 + 0x24);
  uVar13 = *(undefined4 *)(param_2 + 0x2c);
  uVar14 = *(undefined4 *)(param_2 + 0x30);
  uVar15 = *(undefined4 *)(param_2 + 0x34);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x2c) = uVar13;
  *(undefined4 *)(param_1 + 0x30) = uVar14;
  *(undefined4 *)(param_1 + 0x34) = uVar15;
  *(undefined4 *)(param_1 + 0x18) = uVar9;
  *(undefined4 *)(param_1 + 0x1c) = uVar10;
  *(undefined4 *)(param_1 + 0x20) = uVar11;
  *(undefined4 *)(param_1 + 0x24) = uVar12;
  *(undefined4 *)(param_1 + 8) = uVar5;
  *(undefined4 *)(param_1 + 0xc) = uVar6;
  *(undefined4 *)(param_1 + 0x10) = uVar7;
  *(undefined4 *)(param_1 + 0x14) = uVar8;
  lVar16 = *(longlong *)(param_2 + 0x38);
  if (DAT_14c950c29 == '\x01') {
    if (lVar16 == 0) {
      lVar16 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar16 = *(longlong *)(param_2 + 0x38);
    }
  }
  *(longlong *)(param_1 + 0x38) = lVar16;
  puVar17 = (undefined8 *)(param_2 + 0x40);
  puVar18 = (undefined8 *)(param_1 + 0x40);
  for (lVar16 = 10; lVar16 != 0; lVar16 = lVar16 + -1) {
    *puVar18 = *puVar17;
    puVar17 = puVar17 + 1;
    puVar18 = puVar18 + 1;
  }
  *(undefined1 *)(param_1 + 0x94) = *(undefined1 *)(param_2 + 0x94);
  *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_2 + 0x90);
  uVar3 = *(undefined8 *)(param_2 + 0x98);
  lVar16 = *(longlong *)(param_2 + 0xa0);
  if (lVar16 != 0) {
    LOCK();
    *(int *)(lVar16 + 8) = *(int *)(lVar16 + 8) + 1;
    UNLOCK();
  }
  plVar4 = *(longlong **)(param_1 + 0xa0);
  *(undefined8 *)(param_1 + 0x98) = uVar3;
  *(longlong *)(param_1 + 0xa0) = lVar16;
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
  *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(param_2 + 0xa8);
  return param_1;
}



// FUNCTION 140f13e84 FUN_140f13e84 body=40 status=ok
// SIG undefined FUN_140f13e84(void)

undefined8 FUN_140f13e84(undefined8 param_1,int param_2)

{
  FUN_140f13eac();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140f13eac FUN_140f13eac body=318 status=ok
// SIG undefined FUN_140f13eac(void)

void FUN_140f13eac(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b7ab830;
  param_1[5] = &PTR_FUN_14b7ac230;
  param_1[6] = &PTR_LAB_14b7ac270;
  param_1[0x55] = &PTR_FUN_14b7ac2c0;
  param_1[0x56] = &PTR_FUN_14b7ac340;
  param_1[0x57] = &PTR_FUN_14b7ac350;
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
  plVar3 = (longlong *)param_1[0xeb];
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
  plVar3 = (longlong *)param_1[0xe9];
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
  if (param_1[0xe6] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xe1] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xd4] != 0) {
    FUN_1400020a8();
  }
  FUN_14006e5d0(param_1);
  return;
}



// FUNCTION 140f13fea FUN_140f13fea body=127 status=ok
// SIG undefined FUN_140f13fea(void)

void FUN_140f13fea(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xa0));
  iVar1 = *(int *)(param_1 + 0xd0);
  *(uint *)(param_1 + 0xd0) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0xd4) < iVar1 + 1U) {
    FUN_1449031f2((longlong *)(param_1 + 200),iVar1);
  }
  lVar2 = *(longlong *)(param_1 + 200);
  uVar3 = *param_2;
  *(undefined4 *)(lVar2 + (longlong)iVar1 * 0x30) = 2;
  *(undefined8 *)(lVar2 + 8 + (longlong)iVar1 * 0x30) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x000140f14055. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xa0));
  return;
}



// FUNCTION 140f1406a FUN_140f1406a body=155 status=ok
// SIG undefined FUN_140f1406a(void)

void FUN_140f1406a(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  
  iVar1 = *(int *)(param_1 + 0x30);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x28);
    lVar5 = 0;
    do {
      if ((*(char *)(lVar2 + 8 + lVar5) == '\x01') &&
         (lVar3 = *(longlong *)(lVar2 + lVar5), lVar3 != 0)) {
        FUN_140f14106(*param_2,lVar3 + 0x38,lVar3 + 0x98,param_2);
      }
      lVar5 = lVar5 + 0x20;
    } while ((longlong)iVar1 * 0x20 != lVar5);
    iVar1 = *(int *)(param_1 + 0x30);
    if ((longlong)iVar1 != 0) {
      lVar2 = *(longlong *)(param_1 + 0x28);
      lVar5 = 0;
      do {
        if ((*(char *)(lVar2 + 8 + lVar5) == '\x03') &&
           (plVar4 = *(longlong **)(lVar2 + lVar5), plVar4 != (longlong *)0x0)) {
          (**(code **)(*plVar4 + 0x88))(plVar4,param_2);
        }
        lVar5 = lVar5 + 0x20;
      } while ((longlong)iVar1 * 0x20 != lVar5);
    }
  }
  return;
}



// FUNCTION 140f14106 FUN_140f14106 body=151 status=ok
// SIG undefined FUN_140f14106(void)

void FUN_140f14106(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  int *piVar1;
  undefined1 auStack_58 [32];
  longlong *local_38;
  undefined8 *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140f141b2(param_1,&local_38);
  if (local_38 != (longlong *)0x0) {
    (**(code **)(*local_38 + 0x48))(local_38,param_2,param_3 + 0x10,param_4);
  }
  if (local_30 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_30 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar1 = (int *)((longlong)local_30 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f141b2 FUN_140f141b2 body=114 status=ok
// SIG undefined FUN_140f141b2(void)

void FUN_140f141b2(longlong param_1,longlong *param_2,int *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  
  if ((longlong)*(int *)(param_1 + 0x88) != 0) {
    plVar2 = *(longlong **)(param_1 + 0x80);
    lVar3 = (longlong)*(int *)(param_1 + 0x88) << 4;
    do {
      lVar1 = *plVar2;
      if ((((*(int *)(lVar1 + 0x58) == *param_3) && (*(int *)(lVar1 + 0x5c) == param_3[1])) &&
          (*(int *)(lVar1 + 0x60) == param_3[2])) && (*(int *)(lVar1 + 100) == param_3[3])) {
        if (plVar2 != (longlong *)0x0) {
          *param_2 = lVar1;
          lVar3 = plVar2[1];
          param_2[1] = lVar3;
          if (lVar3 == 0) {
            return;
          }
          LOCK();
          *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
          UNLOCK();
          return;
        }
        break;
      }
      plVar2 = plVar2 + 2;
      lVar3 = lVar3 + -0x10;
    } while (lVar3 != 0);
  }
  *param_2 = 0;
  param_2[1] = 0;
  return;
}



// FUNCTION 140f14224 FUN_140f14224 body=301 status=ok
// SIG undefined FUN_140f14224(void)

void FUN_140f14224(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong *plVar1;
  char cVar2;
  undefined1 auStack_c8 [32];
  longlong *local_a8;
  longlong local_98 [2];
  longlong *local_88;
  undefined4 local_80;
  undefined8 local_78;
  float local_6c;
  undefined8 local_68;
  undefined **local_58;
  undefined8 local_50;
  longlong **local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_48 = &local_88;
  local_88 = (longlong *)0x0;
  local_68 = 0;
  local_58 = &PTR_LAB_14b42fbf0;
  local_78 = &LAB_143e4cde6;
  local_50 = param_3;
  (**(code **)(*(longlong *)param_1[0xe] + 0x10))();
  plVar1 = local_88;
  if (local_88 == (longlong *)0x0) goto LAB_140f1428f;
  local_80 = (undefined4)param_1[0x13];
  local_88 = param_1;
  FUN_14899d8ae(&local_78,param_2,*param_4);
  if ((char)local_68 == '\0') {
    if ((local_78._4_4_ != -1) || ((char)local_78 != '\0')) goto LAB_140f142fb;
  }
  else if (0.0 < local_6c) {
LAB_140f142fb:
    local_a8 = local_98;
    local_98[0] = 0;
    local_98[1] = 0;
    cVar2 = (**(code **)(*param_1 + 0xb8))(param_1,&local_78,plVar1,param_4);
    if (cVar2 != '\0') {
      FUN_143e44fcc(param_1,local_98);
    }
    if (local_98[0] != 0) {
      FUN_1400020a8();
    }
  }
  FUN_140ea9bb6(&local_88);
LAB_140f1428f:
  if ((local_30 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140f14360 FUN_140f14360 body=40 status=ok
// SIG undefined FUN_140f14360(void)

undefined8 FUN_140f14360(undefined8 param_1,int param_2)

{
  FUN_140f14388();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140f14388 FUN_140f14388 body=179 status=ok
// SIG undefined FUN_140f14388(void)

void FUN_140f14388(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b8f9ff0;
  FUN_1405b087a(param_1[0x91],*(undefined4 *)(param_1 + 0x92));
  if (param_1[0x91] != 0) {
    FUN_1400020a8();
  }
  FUN_1405b087a(param_1[0x8f],*(undefined4 *)(param_1 + 0x90));
  if (param_1[0x8f] != 0) {
    FUN_1400020a8();
  }
  FUN_1405b087a(param_1[0x8d],*(undefined4 *)(param_1 + 0x8e));
  if (param_1[0x8d] != 0) {
    FUN_1400020a8();
  }
  FUN_1405b087a(param_1[0x8b],*(undefined4 *)(param_1 + 0x8c));
  if (param_1[0x8b] != 0) {
    FUN_1400020a8();
  }
  FUN_140f1443c(param_1);
  return;
}



// FUNCTION 140f1443c FUN_140f1443c body=482 status=ok
// SIG undefined FUN_140f1443c(void)

void FUN_140f1443c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b492450;
  param_1[0x77] = 0;
  param_1[0x78] = 0xffffffffffffffff;
  if ((param_1[0x76] != 0) && ((DAT_14cb26569 & 1) != 0)) {
    FUN_1400848c0(*(undefined8 *)(param_1[0x76] + 0x50));
  }
  FUN_1405b08b0(param_1[0x68],*(undefined4 *)(param_1 + 0x69));
  if (param_1[0x68] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x39] != 0) {
    FUN_1400020a8();
  }
  FUN_1405b087a(param_1[0x37],*(undefined4 *)(param_1 + 0x38));
  if (param_1[0x37] != 0) {
    FUN_1400020a8();
  }
  FUN_1405b087a(param_1[0x35],*(undefined4 *)(param_1 + 0x36));
  if (param_1[0x35] != 0) {
    FUN_1400020a8();
  }
  FUN_1405b087a(param_1[0x33],*(undefined4 *)(param_1 + 0x34));
  if (param_1[0x33] != 0) {
    FUN_1400020a8();
  }
  FUN_1405b087a(param_1[0x31],*(undefined4 *)(param_1 + 0x32));
  if (param_1[0x31] != 0) {
    FUN_1400020a8();
  }
  FUN_1405b087a(param_1[0x2f],*(undefined4 *)(param_1 + 0x30));
  if (param_1[0x2f] != 0) {
    FUN_1400020a8();
  }
  FUN_1405b087a(param_1[0x2d],*(undefined4 *)(param_1 + 0x2e));
  if (param_1[0x2d] != 0) {
    FUN_1400020a8();
  }
  FUN_1405b087a(param_1[0x2b],*(undefined4 *)(param_1 + 0x2c));
  if (param_1[0x2b] != 0) {
    FUN_1400020a8();
  }
  FUN_1405b087a(param_1[0x29],*(undefined4 *)(param_1 + 0x2a));
  if (param_1[0x29] != 0) {
    FUN_1400020a8();
  }
  FUN_1407f61d0(param_1);
  return;
}



// FUNCTION 140f1461e FUN_140f1461e body=42 status=ok
// SIG undefined FUN_140f1461e(void)

void FUN_140f1461e(longlong param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 0x18;
    do {
      FUN_144a75412(param_1);
      param_1 = param_1 + 0x40;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140f14648 FUN_140f14648 body=287 status=ok
// SIG undefined FUN_140f14648(void)

void FUN_140f14648(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  
  if ((longlong)*(int *)(param_1 + 0x10d8) != 0) {
    plVar6 = *(longlong **)(param_1 + 0x10d0);
    plVar1 = plVar6 + *(int *)(param_1 + 0x10d8);
    do {
      plVar3 = (longlong *)*plVar6;
      if (plVar3 != (longlong *)0x0) {
        if ((longlong)(int)plVar3[1] != 0) {
          puVar4 = (undefined8 *)*plVar3;
          lVar5 = (longlong)(int)plVar3[1] << 4;
          do {
            (**(code **)*puVar4)(puVar4);
            puVar4 = puVar4 + 2;
            lVar5 = lVar5 + -0x10;
          } while (lVar5 != 0);
        }
        *(undefined4 *)(plVar3 + 1) = 0;
        if (*(int *)((longlong)plVar3 + 0xc) != 0) {
          FUN_140f14768(plVar3);
        }
        if (*plVar3 != 0) {
          FUN_1400020a8();
        }
        FUN_1400020a8(plVar3);
      }
      plVar6 = plVar6 + 1;
    } while (plVar6 != plVar1);
  }
  TlsFree(*(DWORD *)(param_1 + 0x10f0));
  lVar5 = *(longlong *)(param_1 + 0x10e0);
  iVar2 = *(int *)(param_1 + 0x10e8);
  if ((longlong)iVar2 != 0) {
    lVar7 = 0;
    do {
      if (*(longlong *)(lVar5 + lVar7) != 0) {
        FUN_1400020a8();
      }
      lVar7 = lVar7 + 8;
    } while ((longlong)iVar2 * 8 != lVar7);
    lVar5 = *(longlong *)(param_1 + 0x10e0);
  }
  if (lVar5 != 0) {
    FUN_1400020a8(lVar5);
  }
  if (*(longlong *)(param_1 + 0x10d0) != 0) {
    FUN_1400020a8();
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10a8));
                    /* WARNING: Could not recover jumptable at 0x000140f1475a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1080));
  return;
}



// FUNCTION 140f14768 FUN_140f14768 body=48 status=ok
// SIG undefined FUN_140f14768(void)

void FUN_140f14768(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,8);
  }
  return;
}



// FUNCTION 140f14798 FUN_140f14798 body=218 status=ok
// SIG undefined FUN_140f14798(void)

void FUN_140f14798(longlong param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong *puVar5;
  longlong lVar6;
  
  do {
    if (param_2 == 0) {
      return;
    }
    lVar6 = 0;
    do {
      lVar2 = lVar6 * 0x20100;
      puVar1 = (uint *)(param_1 + lVar2);
      uVar4 = (ulonglong)((*(uint *)(param_1 + lVar2) & 0x3ff) << 7);
      uVar3 = *(ulonglong *)(uVar4 + 0x100 + (longlong)puVar1);
      if (1 < uVar3) {
        lVar2 = param_1 + lVar2 + 0x100;
        puVar5 = (ulonglong *)((longlong)puVar1 + uVar4 + 0x100);
        do {
          LOCK();
          uVar4 = *puVar5;
          if (uVar3 == uVar4) {
            *puVar5 = 0;
          }
          UNLOCK();
          if (uVar3 != uVar4) break;
          *puVar1 = *puVar1 - 1;
          FUN_141700cdc(lVar6 * 0x1200 + *(longlong *)(param_1 + 0xa0550));
          uVar3 = (ulonglong)((*puVar1 & 0x3ff) << 7);
          puVar5 = (ulonglong *)(lVar2 + uVar3);
          uVar3 = *(ulonglong *)(lVar2 + uVar3);
        } while (1 < uVar3);
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 != 5);
    lVar6 = 0xa0548;
    do {
      if (*(undefined8 **)(param_1 + lVar6) != (undefined8 *)0x0) {
        **(undefined8 **)(param_1 + lVar6) = 0xffffffffffffffff;
      }
      lVar6 = lVar6 + -0x10;
    } while (lVar6 != 0xa04f8);
    param_1 = param_1 + 0xa0580;
    param_2 = param_2 + -1;
  } while( true );
}



// FUNCTION 140f14872 FUN_140f14872 body=536 status=ok
// SIG undefined FUN_140f14872(void)

ulonglong FUN_140f14872(longlong param_1,char param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulonglong extraout_RAX;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  
  uVar2 = *(uint *)(param_1 + 0x7bd8);
  uVar4 = (ulonglong)uVar2;
  if (uVar2 != 0) {
    LOCK();
    uVar1 = *(uint *)(param_1 + 0x7bd8);
    if (uVar2 == uVar1) {
      *(uint *)(param_1 + 0x7bd8) = 0;
    }
    else {
      uVar4 = (ulonglong)uVar1;
    }
    UNLOCK();
    if (uVar2 == uVar1) {
      EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x7b80));
      FUN_140f14bca(param_1);
      FUN_140f14bca(param_1 + 0x80);
      iVar3 = *(int *)(param_1 + 0x7bb0);
      if ((longlong)iVar3 != 0) {
        lVar5 = *(longlong *)(param_1 + 0x7ba8);
        lVar6 = 0;
        do {
          if (*(longlong *)(lVar5 + lVar6) != 0) {
            FUN_140f14a8a();
          }
          lVar6 = lVar6 + 8;
        } while ((longlong)iVar3 * 8 != lVar6);
      }
      LOCK();
      *(undefined4 *)(param_1 + 0x7bdc) = 0;
      UNLOCK();
      iVar3 = *(int *)(param_1 + 0x7bb4);
      FUN_1411ee667(*(undefined8 *)(param_1 + 0x7ba8),*(undefined4 *)(param_1 + 0x7bb0));
      *(undefined4 *)(param_1 + 0x7bb0) = 0;
      if ((iVar3 < 0) && (*(int *)(param_1 + 0x7bb4) != 0)) {
        FUN_145a07426(param_1 + 0x7ba8,0);
      }
      iVar3 = *(int *)(param_1 + 0x7bc4);
      FUN_140f14798(*(undefined8 *)(param_1 + 0x7bb8),*(undefined4 *)(param_1 + 0x7bc0));
      *(undefined4 *)(param_1 + 0x7bc0) = 0;
      if ((iVar3 < 0) && (*(int *)(param_1 + 0x7bc4) != 0)) {
        FUN_145a07486(param_1 + 0x7bb8,0);
      }
      iVar3 = *(int *)(param_1 + 0x7bd4);
      FUN_140f1461e(*(undefined8 *)(param_1 + 0x7bc8),*(undefined4 *)(param_1 + 0x7bd0));
      *(undefined4 *)(param_1 + 0x7bd0) = 0;
      if ((iVar3 < 0) && (*(int *)(param_1 + 0x7bd4) != 0)) {
        FUN_1467ab45e();
      }
      if (param_2 != '\0') {
        lVar5 = 0x100;
        do {
          lVar6 = FUN_1457c772a();
          if (lVar6 != 0) {
            do {
              while (lVar6 = FUN_14273228e(param_1,lVar6), lVar6 != 0) {
                LOCK();
                *(ulonglong *)(lVar6 + 0x38) = *(ulonglong *)(lVar6 + 0x38) | 2;
                UNLOCK();
              }
              lVar5 = 0x100;
              while (lVar6 = FUN_1457c772a(), lVar6 == 0) {
                lVar5 = lVar5 + 0x1200;
                if (lVar5 == 0x5b00) goto LAB_140f149ac;
              }
            } while( true );
          }
          lVar5 = lVar5 + 0x1200;
        } while (lVar5 != 0x5b00);
      }
LAB_140f149ac:
      uVar2 = *(uint *)(param_1 + 0x7b00);
      if ((ulonglong)uVar2 != 0) {
        uVar4 = 0;
        do {
          *(undefined8 *)(param_1 + 0x5b00 + uVar4 * 8) = 0;
          uVar4 = uVar4 + 1;
        } while (uVar2 != uVar4);
      }
      *(undefined4 *)(param_1 + 0x7b00) = 0;
                    /* WARNING: Could not recover jumptable at 0x000140f149e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x7b80));
      return extraout_RAX;
    }
  }
  return uVar4;
}



// FUNCTION 140f14a8a FUN_140f14a8a body=127 status=ok
// SIG undefined FUN_140f14a8a(void)

void FUN_140f14a8a(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  
  lVar3 = *param_1;
  (**(code **)(**(longlong **)(lVar3 + 0xb0) + 0x20))();
  plVar4 = *(longlong **)(lVar3 + 0xb0);
  if (plVar4 != (longlong *)0x0) {
    *(undefined8 *)(lVar3 + 0xb0) = 0;
    (**(code **)(*plVar4 + 0x30))(plVar4,1);
  }
  *param_1 = 0;
  plVar4 = (longlong *)param_1[1];
  if (plVar4 != (longlong *)0x0) {
    param_1[1] = 0;
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
                    /* WARNING: Could not recover jumptable at 0x000140f14afd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar4 + 0x10))(plVar4);
        return;
      }
    }
  }
  return;
}



// FUNCTION 140f14b0a FUN_140f14b0a body=148 status=ok
// SIG undefined FUN_140f14b0a(void)

void FUN_140f14b0a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0xc0);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x30))(plVar3,1);
  }
  if (*(longlong *)(param_1 + 0x80) != 0) {
    plVar3 = (longlong *)(param_1 + 0xa0);
    if (*(longlong **)(param_1 + 0x90) != (longlong *)0x0) {
      plVar3 = *(longlong **)(param_1 + 0x90);
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    plVar3 = (longlong *)(param_1 + 0x60);
    if (*(longlong **)(param_1 + 0x50) != (longlong *)0x0) {
      plVar3 = *(longlong **)(param_1 + 0x50);
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  plVar3 = *(longlong **)(param_1 + 0x28);
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
                    /* WARNING: Could not recover jumptable at 0x000140f14b9a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 140f14b9e FUN_140f14b9e body=12 status=ok
// SIG undefined FUN_140f14b9e(void)

void FUN_140f14b9e(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000140f14ba7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 140f14baa FUN_140f14baa body=31 status=ok
// SIG undefined FUN_140f14baa(void)

undefined8 FUN_140f14baa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140f14bca FUN_140f14bca body=88 status=ok
// SIG undefined FUN_140f14bca(void)

void FUN_140f14bca(longlong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  LOCK();
  *(undefined1 *)(param_1 + 0x70) = 1;
  UNLOCK();
  FUN_140031ea8(param_1,*(undefined4 *)(*(longlong *)(param_1 + 0x68) + 8));
  uVar2 = *(ulonglong *)(param_1 + 0x60);
  while ((uVar2 & 0x3fff) != 0x3fff) {
    lVar1 = **(longlong **)(param_1 + 0x68);
    lVar3 = (uVar2 & 0x3fff) * 0x40;
    (**(code **)(**(longlong **)(lVar1 + 0x18 + lVar3) + 0x10))();
    uVar2 = *(ulonglong *)(lVar1 + lVar3);
  }
  LOCK();
  *(undefined8 *)(param_1 + 0x60) = 0x3fff;
  UNLOCK();
  return;
}



// FUNCTION 140f14c22 FUN_140f14c22 body=12 status=ok
// SIG undefined FUN_140f14c22(void)

void FUN_140f14c22(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000140f14c2b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 140f14c2e FUN_140f14c2e body=59 status=ok
// SIG undefined FUN_140f14c2e(void)

undefined8 * FUN_140f14c2e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b9c5490;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140f14c6a FUN_140f14c6a body=91 status=ok
// SIG undefined FUN_140f14c6a(void)

void FUN_140f14c6a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  FUN_140f14cc6();
  *(undefined8 *)(param_1 + 0x568) = 0;
  plVar3 = *(longlong **)(param_1 + 0x570);
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x570) = 0;
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
                    /* WARNING: Could not recover jumptable at 0x000140f14cc1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 140f14cc6 FUN_140f14cc6 body=85 status=ok
// SIG undefined FUN_140f14cc6(void)

void FUN_140f14cc6(longlong param_1,char param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  
  if ((param_2 != '\0') && (iVar2 = *(int *)(param_1 + 0x170), 0 < iVar2)) {
    lVar3 = 0;
    do {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x168) + lVar3 * 8);
      if ((plVar1 != (longlong *)0x0) && (plVar1[6] != 0)) {
        (**(code **)(*plVar1 + 0x2a0))(plVar1,1);
        iVar2 = *(int *)(param_1 + 0x170);
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 < iVar2);
  }
  return;
}



// FUNCTION 140f14d24 FUN_140f14d24 body=1076 status=ok
// SIG undefined FUN_140f14d24(void)

undefined8 * FUN_140f14d24(undefined8 *param_1)

{
  code *pcVar1;
  char cVar2;
  undefined4 *puVar3;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  ushort local_68;
  byte local_60;
  char local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  memset(param_1,0,0x198);
  FUN_140c2310e(param_1);
  *param_1 = &PTR_FUN_14b0dba90;
  FUN_140440628(param_1 + 0x33,&DAT_14cb7e650,0);
  param_1[0x3f] = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  *(undefined8 *)((longlong)param_1 + 0x204) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x20c) = 0;
  param_1[0x43] = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  param_1[0x49] = 0;
  *(undefined4 *)(param_1 + 0x4a) = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  *(undefined8 *)((longlong)param_1 + 0x254) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x25c) = 0;
  param_1[0x4d] = 0;
  *(undefined4 *)(param_1 + 0x4e) = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0xffffffff00000000;
  param_1[0x55] = 0;
  *(undefined4 *)(param_1 + 0x56) = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2b4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 700) = 0;
  param_1[0x59] = 0;
  *(undefined4 *)(param_1 + 0x5a) = 0;
  *(undefined1 *)(param_1 + 0x5b) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0x200000000;
  param_1[0x68] = 0;
  *(undefined4 *)(param_1 + 0x69) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34c) = 0x20;
  *(undefined4 *)(param_1 + 0x6a) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x354) = 0;
  param_1[0x6c] = 0;
  *(undefined4 *)(param_1 + 0x6d) = 0;
  param_1[0x72] = 0;
  param_1[0x73] = 0x200000000;
  param_1[0x75] = 0;
  *(undefined4 *)(param_1 + 0x76) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3b4) = 0x20;
  *(undefined4 *)(param_1 + 0x77) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x3bc) = 0;
  param_1[0x79] = 0;
  *(undefined4 *)(param_1 + 0x7a) = 0;
  param_1[0x7f] = 0;
  param_1[0x80] = 0x200000000;
  param_1[0x82] = 0;
  *(undefined4 *)(param_1 + 0x83) = 0;
  *(undefined4 *)((longlong)param_1 + 0x41c) = 0x20;
  *(undefined4 *)(param_1 + 0x84) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x424) = 0;
  param_1[0x86] = 0;
  *(undefined4 *)(param_1 + 0x87) = 0;
  *(undefined2 *)(param_1 + 0x89) = 0;
  param_1[0x88] = 0;
  param_1[0x8d] = 0;
  param_1[0x8a] = 0;
  param_1[0x8b] = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined2 *)(param_1 + 0x91) = 4;
  *(undefined4 *)(param_1 + 0x8e) = 1;
  *(undefined1 *)(param_1 + 0x92) = 2;
  *(byte *)(param_1 + 0x93) = (byte)~DAT_14c9a8754 >> 4 & 2;
  param_1[0x94] = 0;
  *(undefined2 *)(param_1 + 0x98) = 4;
  *(undefined4 *)(param_1 + 0x95) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x99) = 3;
  cVar2 = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  *(char *)(param_1 + 0x9a) = cVar2;
  *(undefined4 *)(param_1 + 0x9b) = 1;
  *(undefined1 *)((longlong)param_1 + 0x4dc) = 2;
  param_1[0x9c] = 0;
  *(undefined2 *)(param_1 + 0xa0) = 4;
  *(undefined4 *)(param_1 + 0x9d) = 0x42700000;
  *(undefined1 *)(param_1 + 0xa1) = 3;
  *(char *)(param_1 + 0xa2) = cVar2;
  param_1[0xa3] = 0;
  *(undefined2 *)(param_1 + 0xa7) = 4;
  *(undefined4 *)(param_1 + 0xa4) = 0x42b40000;
  *(undefined1 *)(param_1 + 0xa8) = 3;
  *(char *)(param_1 + 0xa9) = cVar2;
  *(undefined1 *)(param_1 + 0xaa) = 0;
  FUN_140440628(param_1 + 0xab,&DAT_14cb7e698,0);
  *(undefined2 *)(param_1 + 0xb2) = 0;
  *(undefined1 *)((longlong)param_1 + 0x592) = 0;
  FUN_1403a4106(param_1 + 0xb3);
  *(undefined1 *)(param_1 + 0xd2) = 0;
  param_1[0xd3] = 0;
  param_1[0xd4] = 0;
  *(undefined1 *)(param_1 + 0xd5) = 0;
  *(undefined4 *)((longlong)param_1 + 0x6ac) = 0x3e4ccccd;
  *(undefined1 *)(param_1 + 0xd6) = 0;
  param_1[0xd7] = 0;
  *(undefined2 *)(param_1 + 0xdb) = 4;
  *(undefined4 *)(param_1 + 0xd8) = 1;
  *(undefined1 *)(param_1 + 0xdc) = 2;
  *(byte *)(param_1 + 0xdd) = (byte)~DAT_14c9a8754 >> 4 & 2;
  *(undefined1 *)(param_1 + 0xde) = 1;
  param_1[0xdf] = 0;
  *(undefined2 *)(param_1 + 0xe3) = 4;
  *(undefined4 *)(param_1 + 0xe0) = 0x42480000;
  *(undefined1 *)(param_1 + 0xe4) = 3;
  local_58 = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  *(char *)(param_1 + 0xe5) = local_58;
  param_1[0xe6] = 0;
  *(undefined2 *)(param_1 + 0xea) = 4;
  *(undefined4 *)(param_1 + 0xe7) = 0x42480000;
  *(undefined1 *)(param_1 + 0xeb) = 3;
  *(char *)(param_1 + 0xec) = local_58;
  *(undefined2 *)(param_1 + 0xed) = 0x100;
  *(undefined1 *)((longlong)param_1 + 0x76a) = 0;
  param_1[0xb3] = DAT_14cb72618;
  local_88 = 0;
  local_68 = 4;
  local_80 = 0x43340000;
  local_60 = 3;
  FUN_1403719a4(param_1 + 0xb4,&local_88);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_60 * 0x120));
  if (pcVar1 != (code *)0x0) {
    if (local_68 < 0x19) {
      puVar3 = &local_80;
    }
    else {
      puVar3 = (undefined4 *)CONCAT44(uStack_7c,local_80);
    }
    (*pcVar1)(puVar3);
  }
  if (0x18 < local_68) {
    FUN_1400020a8(CONCAT44(uStack_7c,local_80));
  }
  if ((local_50 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f1515a FUN_140f1515a body=54 status=ok
// SIG undefined FUN_140f1515a(void)

undefined1 FUN_140f1515a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_140f15190(param_2,param_3);
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 140f15190 FUN_140f15190 body=93 status=ok
// SIG undefined FUN_140f15190(void)

undefined8 * FUN_140f15190(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_140ee7917(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_140f15232(param_1,iVar1);
      FUN_140f151ed(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 140f151ed FUN_140f151ed body=68 status=ok
// SIG undefined FUN_140f151ed(void)

void FUN_140f151ed(longlong param_1,longlong param_2,int param_3)

{
  if (param_3 != 0) {
    param_1 = param_1 + 8;
    param_2 = param_2 + 8;
    do {
      *(undefined8 *)(param_1 + -8) = *(undefined8 *)(param_2 + -8);
      FUN_14034cca6(param_1,param_2);
      param_1 = param_1 + 0x40;
      param_2 = param_2 + 0x40;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 140f15232 FUN_140f15232 body=216 status=ok
// SIG undefined FUN_140f15232(void)

void FUN_140f15232(longlong param_1,int param_2,int param_3)

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
        uVar2 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar2,8);
      }
    }
    iVar1 = (int)(uVar2 >> 6);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar4 = iVar1;
    }
  }
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0x40,8);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 140f15312 FUN_140f15312 body=270 status=ok
// SIG undefined FUN_140f15312(void)

void FUN_140f15312(longlong param_1)

{
  *(undefined **)(param_1 + 0xe8) = &DAT_14a176f00;
  if (*(longlong *)(param_1 + 0x158) != 0) {
    FUN_1400020a8();
  }
  *(undefined ***)(param_1 + 0xe8) = &PTR_FUN_14a177080;
  if (*(longlong *)(param_1 + 0x140) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x138) = 0;
  if (*(longlong *)(param_1 + 0x130) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0xf8) = 0;
  if (*(int *)(param_1 + 0xfc) != 0) {
    FUN_14472eb64((longlong *)(param_1 + 0xf0),0);
  }
  *(undefined8 *)(param_1 + 0x120) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x118) = 0;
  if (0x80 < *(uint *)(param_1 + 0x11c)) {
    *(undefined4 *)(param_1 + 0x11c) = 0x80;
    FUN_1446efbd8(param_1 + 0x100,0);
  }
  if (*(longlong *)(param_1 + 0x110) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xf0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x40) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140f1542c FUN_140f1542c body=36 status=ok
// SIG undefined FUN_140f1542c(void)

void FUN_140f1542c(void)

{
  if (DAT_14c758740 == 0xffffffff) {
    DAT_14c758740 = TlsAlloc();
  }
  FUN_140f15450();
  return;
}



// FUNCTION 140f15450 FUN_140f15450 body=273 status=ok
// SIG undefined FUN_140f15450(void)

void FUN_140f15450(void)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  LPVOID pvVar4;
  ulonglong uVar5;
  char *_Dst;
  longlong lVar6;
  LPCRITICAL_SECTION lpCriticalSection;
  longlong *plVar7;
  
  pvVar4 = TlsGetValue(DAT_14c758740);
  if (pvVar4 == (LPVOID)0x0) {
    uVar5 = (ulonglong)DAT_14c841d40;
    _Dst = VirtualAlloc((LPVOID)0x0,(uVar5 + (uVar5 + 0x677 & -uVar5)) - 1 & -uVar5,0x3000,4);
    memset(_Dst,0,0x678);
    lVar6 = 0x28;
    do {
      pcVar1 = _Dst + lVar6 + -0x18;
      pcVar1[0] = '\0';
      pcVar1[1] = '\0';
      pcVar1[2] = '\0';
      pcVar1[3] = '\0';
      pcVar1[4] = '\0';
      pcVar1[5] = '\0';
      pcVar1[6] = '\0';
      pcVar1[7] = '\0';
      pcVar1 = _Dst + lVar6 + -0x10;
      pcVar1[0] = '\0';
      pcVar1[1] = '\0';
      pcVar1[2] = '\0';
      pcVar1[3] = '\0';
      pcVar1 = _Dst + lVar6 + -8;
      pcVar1[0] = '\0';
      pcVar1[1] = '\0';
      pcVar1[2] = '\0';
      pcVar1[3] = '\0';
      pcVar1[4] = '\0';
      pcVar1[5] = '\0';
      pcVar1[6] = '\0';
      pcVar1[7] = '\0';
      pcVar1 = _Dst + lVar6;
      pcVar1[0] = '\0';
      pcVar1[1] = '\0';
      pcVar1[2] = '\0';
      pcVar1[3] = '\0';
      lVar6 = lVar6 + 0x20;
    } while (lVar6 != 0x688);
    _Dst[0x670] = '\x01';
    LOCK();
    cVar2 = *_Dst;
    if (cVar2 == '\0') {
      *_Dst = '\x01';
    }
    UNLOCK();
    if (cVar2 != '\0') {
      FUN_1447d2058(_Dst);
    }
    TlsSetValue(DAT_14c758740,_Dst);
    lpCriticalSection = (LPCRITICAL_SECTION)FUN_140f155cc();
    EnterCriticalSection(lpCriticalSection);
    plVar7 = (longlong *)FUN_140f15562();
    iVar3 = (int)plVar7[1];
    *(uint *)(plVar7 + 1) = iVar3 + 1U;
    if (*(uint *)((longlong)plVar7 + 0xc) < iVar3 + 1U) {
      FUN_1457c793e(plVar7,iVar3);
    }
    *(char **)(*plVar7 + (longlong)iVar3 * 8) = _Dst;
    if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000140f15539. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      LeaveCriticalSection(lpCriticalSection);
      return;
    }
  }
  return;
}



// FUNCTION 140f15562 FUN_140f15562 body=106 status=ok
// SIG undefined FUN_140f15562(void)

undefined8 * FUN_140f15562(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844250) {
    FUN_144b3d300(&DAT_14c844250);
    if (DAT_14c844250 == -1) {
      DAT_14c844240 = 0;
      uRam000000014c844248 = 0;
      atexit(FUN_14275e67d);
      _Init_thread_footer(&DAT_14c844250);
    }
  }
  return &DAT_14c844240;
}



// FUNCTION 140f155cc FUN_140f155cc body=128 status=ok
// SIG undefined FUN_140f155cc(void)

undefined * FUN_140f155cc(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844238) {
    FUN_144b3d300(&DAT_14c844238);
    if (DAT_14c844238 == -1) {
      InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14c844210);
      SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14c844210,4000);
      atexit((_func_5014 *)&LAB_14275e66f);
      _Init_thread_footer(&DAT_14c844238);
    }
  }
  return &DAT_14c844210;
}



// FUNCTION 140f1564c FUN_140f1564c body=402 status=ok
// SIG undefined FUN_140f1564c(void)

void FUN_140f1564c(longlong param_1)

{
  longlong *_Dst;
  int iVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  char unaff_BL;
  uint uVar7;
  bool bVar8;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  iVar5 = *(int *)(param_1 + 0x100);
  if (0 < iVar5) {
    bVar8 = false;
    uVar7 = 0;
    bVar4 = bVar8;
    do {
      while( true ) {
        _Dst = (longlong *)(*(longlong *)(param_1 + 0xf8) + (longlong)(int)uVar7 * 8);
        lVar3 = *_Dst;
        if ((lVar3 != 0) &&
           (((*(char *)(lVar3 + 0x98) == '\x02' || (*(char *)(lVar3 + 0xa0) == '\x02')) ||
            ((iVar1 = *(int *)(lVar3 + 0xa4), iVar2 = *(int *)(lVar3 + 0x9c),
             iVar2 == iVar1 || iVar2 < iVar1 &&
             ((iVar2 != iVar1 ||
              ((*(char *)(lVar3 + 0x98) != '\0' && (*(char *)(lVar3 + 0xa0) != '\0')))))))))) break;
        if (~uVar7 + iVar5 != 0) {
          memmove(_Dst,_Dst + 1,(longlong)(int)(~uVar7 + iVar5) << 3);
          iVar5 = *(int *)(param_1 + 0x100);
        }
        *(int *)(param_1 + 0x100) = iVar5 + -1;
        FUN_1475915fe((longlong *)(param_1 + 0xf8));
LAB_140f1570e:
        iVar5 = *(int *)(param_1 + 0x100);
        if (iVar5 <= (int)uVar7) {
          if (!(bool)(bVar4 & bVar8)) goto LAB_140f1573e;
          goto LAB_140f15738;
        }
      }
      uVar7 = uVar7 + 1;
      lVar6 = FUN_140f157e0();
      if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x38) < *(int *)(lVar6 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8
           ) != lVar6 + 0x30)) goto LAB_140f1570e;
      if (bVar4) {
        bVar8 = (bool)(bVar8 & unaff_BL == *(char *)(lVar3 + 0x24a));
        goto LAB_140f1570e;
      }
      unaff_BL = *(char *)(lVar3 + 0x24a);
      iVar5 = *(int *)(param_1 + 0x100);
      bVar8 = true;
      bVar4 = bVar8;
    } while ((int)uVar7 < iVar5);
LAB_140f15738:
    *(char *)(param_1 + 0x191) = unaff_BL;
  }
LAB_140f1573e:
  FUN_1409dad52(param_1);
  local_58 = 0xa462b7ea;
  uStack_54 = 0xf4994e3a;
  uStack_50 = 0x99c1ec1f;
  uStack_4c = 0x8224e1b2;
  iVar5 = FUN_1448a256a(param_1);
  if (iVar5 < 2) {
    *(undefined1 *)(param_1 + 0x108) = 1;
  }
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140f157e0 FUN_140f157e0 body=228 status=ok
// SIG undefined FUN_140f157e0(void)

longlong FUN_140f157e0(void)

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
  if (DAT_14cab5380 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14179c8d4;
    local_38 = &LAB_1475cee91;
    local_40 = &LAB_140e7c7d4;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x380;
    FUN_14081cfa3(L"/Script/MovieSceneTracks",L"MovieSceneSkeletalAnimationSection",&DAT_14cab5380,
                  &DAT_1475cee90);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cab5380;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f158c6 FUN_140f158c6 body=1313 status=ok
// SIG undefined FUN_140f158c6(void)

void FUN_140f158c6(longlong param_1)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  char cVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  int iVar17;
  ulonglong uVar18;
  longlong lVar19;
  ulonglong uVar20;
  undefined1 auStack_118 [32];
  longlong local_f8;
  ulonglong local_f0;
  undefined1 *local_e8;
  undefined1 *local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  ulonglong local_b8;
  undefined1 *local_b0;
  undefined8 local_a8;
  int local_a0;
  longlong local_98 [2];
  undefined1 local_88 [16];
  undefined8 local_78;
  uint local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (*(int *)(param_1 + 0xb8) != *(int *)(param_1 + 0xe4)) goto LAB_140f15d02;
  uVar20 = 0;
  local_78 = 0;
  local_70 = 0;
  local_98[0] = 0;
  local_98[1] = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  cVar4 = FUN_144729dda(param_1 + 0x58);
  local_f8 = param_1;
  if (cVar4 == '\0') {
LAB_140f15daa:
    puVar15 = local_88;
    iVar17 = 0;
    iVar10 = 0;
    uVar13 = 0xffffffff;
    uVar18 = 1;
    iVar11 = 0;
    local_e8 = puVar15;
  }
  else {
    plVar5 = (longlong *)FUN_14479d2ce(param_1 + 0x58);
    lVar6 = (**(code **)(*plVar5 + 0x2b8))(plVar5);
    if ((lVar6 == 0) || (plVar5 = (longlong *)FUN_140f17468(lVar6), plVar5 == (longlong *)0x0))
    goto LAB_140f15daa;
    uVar7 = FUN_140d7e454(param_1);
    (**(code **)(*plVar5 + 8))(plVar5,uVar7,local_98);
    local_e8 = local_88;
    local_b8 = 0x100000000;
    local_a8 = 0xffffffff;
    local_a0 = 0;
    local_b0 = local_e8;
    if (local_70 == 0) goto LAB_140f15daa;
    FUN_1449c0562(&local_b8);
    uVar18 = local_b8 >> 0x20;
    uVar20 = (ulonglong)local_70;
    puVar15 = local_b0;
    iVar11 = (int)local_b8;
    uVar13 = (uint)local_a8;
    iVar10 = local_a8._4_4_;
    iVar17 = local_a0;
  }
  if (iVar10 != (int)uVar20 || puVar15 != local_e8) {
    do {
      local_e0 = puVar15;
      local_f0 = uVar20;
      lVar6 = local_98[0];
      lVar8 = (longlong)iVar10;
      local_c8 = *(undefined8 *)(local_98[0] + lVar8 * 0x28);
      local_c0 = *(undefined4 *)(local_98[0] + 8 + lVar8 * 0x28);
      lVar9 = FUN_140f16de6(local_f8,&local_c8);
      if (lVar9 != 0) {
        lVar6 = lVar6 + lVar8 * 0x28;
        lVar8 = (longlong)*(int *)(lVar6 + 0x18);
        if (lVar8 != 0) {
          lVar6 = *(longlong *)(lVar6 + 0x10);
          lVar19 = 0;
          do {
            local_b8 = 0;
            local_d8 = *(undefined8 *)(lVar6 + lVar19);
            local_d0 = *(undefined4 *)(lVar6 + 8 + lVar19);
            FUN_140f15de8(local_f8,&local_d8,lVar9,&local_b8);
            lVar19 = lVar19 + 0xc;
          } while (lVar8 * 0xc != lVar19);
        }
      }
      uVar13 = uVar13 & ~(uint)uVar18;
      puVar15 = *(undefined1 **)(local_e0 + 0x10);
      if (*(undefined1 **)(local_e0 + 0x10) == (undefined1 *)0x0) {
        puVar15 = local_e0;
      }
      iVar14 = *(int *)(local_e0 + 0x18);
      lVar6 = (longlong)iVar11;
      uVar12 = *(uint *)(puVar15 + lVar6 * 4) & uVar13;
      if (uVar12 == 0) {
        iVar10 = iVar14 + 0x1e;
        if (-1 < iVar14 + -1) {
          iVar10 = iVar14 + -1;
        }
        iVar10 = iVar10 >> 5;
        iVar17 = iVar17 + 0x20;
        iVar1 = iVar10;
        if (iVar10 < iVar11) {
          iVar1 = iVar11;
        }
        if (iVar11 < iVar10) {
          lVar8 = 0;
          do {
            uVar12 = *(uint *)(puVar15 + lVar8 * 4 + lVar6 * 4 + 4);
            if (uVar12 != 0) {
              iVar11 = iVar11 + (int)lVar8 + 1;
              uVar13 = 0xffffffff;
              goto LAB_140f15b48;
            }
            iVar17 = iVar17 + 0x20;
            lVar8 = lVar8 + 1;
          } while (iVar1 - lVar6 != lVar8);
          uVar13 = 0xffffffff;
          iVar11 = iVar1;
        }
        iVar11 = iVar11 + 1;
        iVar10 = iVar14;
      }
      else {
LAB_140f15b48:
        uVar18 = (ulonglong)(-uVar12 & uVar12);
        uVar20 = uVar18 * 2 + 1;
        lVar6 = 0x3f;
        if (uVar20 != 0) {
          for (; uVar20 >> lVar6 == 0; lVar6 = lVar6 + -1) {
          }
        }
        iVar10 = (iVar17 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
        if (iVar14 <= iVar10) {
          iVar10 = iVar14;
        }
      }
      uVar20 = local_f0;
      puVar15 = local_e0;
    } while (iVar10 != (int)local_f0 || local_e0 != local_e8);
  }
  lVar6 = local_f8;
  puVar15 = (undefined1 *)(local_f8 + 0xc0);
  local_b8 = 0x100000000;
  local_a8 = 0xffffffff;
  local_a0 = 0;
  local_b0 = puVar15;
  if (*(int *)(local_f8 + 0xd8) == 0) {
    uVar20 = 1;
    local_a8._0_4_ = 0xffffffff;
    iVar11 = 0;
    local_a8._4_4_ = 0;
    local_b8._0_4_ = 0;
  }
  else {
    FUN_1449c0562(&local_b8);
    uVar20 = local_b8 >> 0x20;
    iVar11 = *(int *)(lVar6 + 0xd8);
  }
  puVar3 = local_b0;
  iVar10 = (int)local_b8;
  uVar13 = (uint)local_a8;
  iVar17 = local_a8._4_4_;
  iVar14 = local_a0;
  if (local_a8._4_4_ != iVar11 || local_b0 != puVar15) {
    do {
      FUN_140f167c2(*(undefined8 *)(*(longlong *)(lVar6 + 0xb0) + 0x10 + (longlong)iVar17 * 0x20));
      uVar13 = ~(uint)uVar20 & uVar13;
      puVar16 = *(undefined1 **)(puVar3 + 0x10);
      if (*(undefined1 **)(puVar3 + 0x10) == (undefined1 *)0x0) {
        puVar16 = puVar3;
      }
      iVar1 = *(int *)(puVar3 + 0x18);
      lVar8 = (longlong)iVar10;
      uVar12 = *(uint *)(puVar16 + lVar8 * 4) & uVar13;
      if (uVar12 == 0) {
        iVar17 = iVar1 + 0x1e;
        if (-1 < iVar1 + -1) {
          iVar17 = iVar1 + -1;
        }
        iVar17 = iVar17 >> 5;
        iVar14 = iVar14 + 0x20;
        iVar2 = iVar17;
        if (iVar17 < iVar10) {
          iVar2 = iVar10;
        }
        if (iVar10 < iVar17) {
          lVar9 = 0;
          do {
            uVar12 = *(uint *)(puVar16 + lVar9 * 4 + lVar8 * 4 + 4);
            if (uVar12 != 0) {
              iVar10 = iVar10 + (int)lVar9 + 1;
              uVar13 = 0xffffffff;
              goto LAB_140f15c96;
            }
            iVar14 = iVar14 + 0x20;
            lVar9 = lVar9 + 1;
          } while (iVar2 - lVar8 != lVar9);
          uVar13 = 0xffffffff;
          iVar10 = iVar2;
        }
        iVar10 = iVar10 + 1;
        lVar6 = local_f8;
        iVar17 = iVar1;
      }
      else {
LAB_140f15c96:
        uVar20 = (ulonglong)(-uVar12 & uVar12);
        uVar18 = uVar20 * 2 + 1;
        lVar8 = 0x3f;
        if (uVar18 != 0) {
          for (; uVar18 >> lVar8 == 0; lVar8 = lVar8 + -1) {
          }
        }
        iVar17 = (iVar14 - ((uint)lVar8 ^ 0x3f)) + 0x3e;
        if (iVar1 <= iVar17) {
          iVar17 = iVar1;
        }
      }
    } while (iVar17 != iVar11 || puVar3 != puVar15);
  }
  local_50 = 0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_1457c7a60(local_98);
LAB_140f15d02:
  if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140f15de8 FUN_140f15de8 body=1176 status=ok
// SIG undefined FUN_140f15de8(void)

longlong FUN_140f15de8(longlong *param_1,undefined8 *param_2,longlong param_3,undefined8 param_4)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  longlong *plVar9;
  longlong lVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 local_90;
  uint local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70 [2];
  uint *local_68;
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar2 = (**(code **)(*param_1 + 8))();
  if (lVar2 != 0) goto LAB_140f160a6;
  local_80 = *param_2;
  local_78 = *(undefined4 *)(param_2 + 1);
  FUN_1448075d0(local_70);
  lVar3 = FUN_14060eaf6(local_70);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if (*(int *)((longlong)param_1 + 0x5c) != 0) {
    uVar5 = *(uint *)(param_1 + 0xb);
    lVar2 = 0;
    if (((int)uVar5 < 0) || (DAT_14c9647dc <= (int)uVar5)) goto LAB_140f160a6;
    plVar9 = (longlong *)
             ((ulonglong)((uVar5 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8));
    if ((plVar9 != (longlong *)0x0) &&
       (((int)plVar9[2] == *(int *)((longlong)param_1 + 0x5c) &&
        ((*(uint *)(plVar9 + 1) & 0x10200000) == 0)))) {
      lVar2 = 0;
      if ((lVar3 == 0) || (lVar2 = 0, *plVar9 == 0)) goto LAB_140f160a6;
      cVar1 = FUN_140afa2b5(*plVar9,lVar3);
      if (cVar1 != '\0') {
        local_98 = param_4;
        lVar2 = (**(code **)(*param_1 + 0xe8))(param_1,lVar3,param_3,param_2);
        plVar9 = param_1 + 0xc;
        local_88 = *(uint *)(lVar2 + 0x98);
        local_90 = *(undefined8 *)(lVar2 + 0x90);
        FUN_140f165d8(plVar9,local_70);
        local_68[2] = local_88;
        *(undefined8 *)local_68 = local_90;
        *(longlong *)(local_68 + 4) = lVar2;
        local_68[6] = 0xffffffff;
        local_74 = local_70[0];
        uVar5 = *local_68;
        uVar7 = local_68[2];
        if (uVar7 != 0) {
          uVar5 = uVar7 >> 0xd ^ uVar5 - uVar7;
          uVar8 = uVar5 << 8 ^ (-0x61c88647 - uVar7) - uVar5;
          uVar12 = uVar8 >> 0xd ^ (uVar7 - uVar5) - uVar8;
          uVar7 = uVar12 >> 0xc ^ (uVar5 - uVar8) - uVar12;
          uVar5 = uVar7 << 0x10 ^ (uVar8 - uVar12) - uVar7;
          uVar8 = uVar5 >> 5 ^ (uVar12 - uVar7) - uVar5;
          uVar7 = uVar8 >> 3 ^ (uVar7 - uVar5) - uVar8;
          uVar5 = uVar7 << 10 ^ (uVar5 - uVar8) - uVar7;
          uVar5 = uVar5 >> 0xf ^ uVar8 - (uVar7 + uVar5);
        }
        cVar1 = FUN_140f16282(plVar9,uVar5,local_68,&local_74);
        if (cVar1 == '\0') {
          uVar7 = (int)param_1[0xd] - *(int *)((longlong)param_1 + 0x94);
          if (uVar7 < 4) {
            iVar11 = 1;
          }
          else {
            uVar4 = (ulonglong)(uVar7 & 0xfffffffe) + 0xf;
            lVar10 = 0x3f;
            if (uVar4 != 0) {
              for (; uVar4 >> lVar10 == 0; lVar10 = lVar10 + -1) {
              }
            }
            iVar11 = 1 << ((byte)lVar10 & 0x1f);
          }
          if (((int)uVar7 < 1) || (iVar11 <= (int)param_1[0x15])) {
            uVar5 = (int)param_1[0x15] - 1U & uVar5;
            local_68[7] = uVar5;
            plVar9 = (longlong *)param_1[0x14];
            if ((longlong *)param_1[0x14] == (longlong *)0x0) {
              plVar9 = param_1 + 0x13;
            }
            local_68[6] = *(uint *)((longlong)plVar9 +
                                   ((longlong)(int)param_1[0x15] - 1U & (longlong)(int)uVar5) * 4);
            plVar9 = (longlong *)param_1[0x14];
            if ((longlong *)param_1[0x14] == (longlong *)0x0) {
              plVar9 = param_1 + 0x13;
            }
            *(undefined4 *)
             ((longlong)plVar9 + ((longlong)(int)param_1[0x15] - 1U & (longlong)(int)uVar5) * 4) =
                 local_74;
          }
          else {
            *(int *)(param_1 + 0x15) = iVar11;
            FUN_140f17470(plVar9);
          }
        }
        if (*(int *)(lVar2 + 0x98) < 1) {
          plVar9 = param_1 + 0x20;
          lVar10 = param_1[0x20];
          iVar11 = (int)param_1[0x21];
          lVar13 = (longlong)iVar11;
          if (lVar13 != 0) {
            lVar6 = lVar13 * 8;
            lVar14 = 0;
LAB_140f1603d:
            if (*(int *)(*(longlong *)(*(longlong *)(lVar10 + lVar14 * 8) + 0xa0) + 0x5c) <=
                *(int *)(lVar3 + 0x5c)) goto code_r0x000140f16052;
            if ((int)lVar14 < iVar11 && -1 < (int)lVar14) {
              *(uint *)(param_1 + 0x21) = iVar11 + 1U;
              if (*(uint *)((longlong)param_1 + 0x10c) < iVar11 + 1U) {
LAB_140f16105:
                FUN_140f16476(plVar9,iVar11);
                lVar10 = *plVar9;
              }
LAB_140f16113:
              lVar3 = (ulonglong)((uint)lVar14 & 0x7fffffff) * 8;
              memmove((void *)(lVar10 + lVar3 + 8),(void *)(lVar10 + lVar3),
                      (ulonglong)(iVar11 - (uint)lVar14) << 3);
              plVar9 = (longlong *)(lVar3 + *plVar9);
              goto LAB_140f16080;
            }
          }
LAB_140f1605b:
          *(uint *)(param_1 + 0x21) = iVar11 + 1U;
          if (*(uint *)((longlong)param_1 + 0x10c) < iVar11 + 1U) {
LAB_140f1606e:
            FUN_140f16476(plVar9,iVar11);
            lVar10 = *plVar9;
          }
        }
        else {
          plVar9 = param_1 + 0x22;
          lVar10 = param_1[0x22];
          iVar11 = (int)param_1[0x23];
          lVar13 = (longlong)iVar11;
          if (lVar13 != 0) {
            lVar6 = lVar13 * 8;
            lVar14 = 0;
            do {
              if (*(int *)(lVar3 + 0x5c) <
                  *(int *)(*(longlong *)(*(longlong *)(lVar10 + lVar14 * 8) + 0xa0) + 0x5c)) {
                if ((int)lVar14 < iVar11 && -1 < (int)lVar14) {
                  *(uint *)(param_1 + 0x23) = iVar11 + 1U;
                  if (iVar11 + 1U <= *(uint *)((longlong)param_1 + 0x11c)) goto LAB_140f16113;
                  goto LAB_140f16105;
                }
                break;
              }
              lVar14 = lVar14 + 1;
              lVar6 = lVar6 + -8;
            } while (lVar6 != 0);
          }
          *(uint *)(param_1 + 0x23) = iVar11 + 1U;
          if (*(uint *)((longlong)param_1 + 0x11c) < iVar11 + 1U) goto LAB_140f1606e;
        }
        plVar9 = (longlong *)(lVar10 + lVar13 * 8);
LAB_140f16080:
        *plVar9 = lVar2;
        iVar11 = *(int *)(param_3 + 0x58);
        *(uint *)(param_3 + 0x58) = iVar11 + 1U;
        if (*(uint *)(param_3 + 0x5c) < iVar11 + 1U) {
          FUN_140f16476((longlong *)(param_3 + 0x50),iVar11);
        }
        *(longlong *)(*(longlong *)(param_3 + 0x50) + (longlong)iVar11 * 8) = lVar2;
        FUN_140f162e0(lVar2);
        goto LAB_140f160a6;
      }
    }
  }
  lVar2 = 0;
LAB_140f160a6:
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar2;
code_r0x000140f16052:
  lVar14 = lVar14 + 1;
  lVar6 = lVar6 + -8;
  if (lVar6 == 0) goto LAB_140f1605b;
  goto LAB_140f1603d;
}



// FUNCTION 140f16282 FUN_140f16282 body=93 status=ok
// SIG undefined FUN_140f16282(void)

undefined8 FUN_140f16282(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar7 = FUN_140f16416(), iVar7 != -1)) {
    lVar2 = *param_1;
    uVar3 = *param_3;
    uVar4 = param_3[1];
    uVar5 = param_3[2];
    uVar6 = param_3[3];
    *(undefined8 *)(lVar2 + 0x10 + (longlong)iVar7 * 0x20) = *(undefined8 *)(param_3 + 4);
    puVar1 = (undefined4 *)(lVar2 + (longlong)iVar7 * 0x20);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    FUN_140d58bbe(param_1,*param_4);
    *param_4 = iVar7;
    return 1;
  }
  return 0;
}



// FUNCTION 140f162e0 FUN_140f162e0 body=101 status=ok
// SIG undefined FUN_140f162e0(void)

void FUN_140f162e0(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_38 [32];
  undefined1 local_18 [8];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (0 < *(int *)(param_1 + 0x98)) {
    lVar1 = FUN_140f42f34();
    if (lVar1 != 0) {
      FUN_140f16b78(*(longlong *)(lVar1 + 8) + 0x1d0,local_18,param_1,&LAB_140cf143a);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f16346 FUN_140f16346 body=208 status=ok
// SIG undefined FUN_140f16346(void)

undefined8 FUN_140f16346(longlong param_1,uint *param_2)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined8 *puVar6;
  uint uVar7;
  uint uVar8;
  
  uVar2 = *param_2;
  uVar5 = param_2[2];
  if (uVar5 != 0) {
    uVar2 = uVar5 >> 0xd ^ uVar2 - uVar5;
    uVar7 = uVar2 << 8 ^ (-0x61c88647 - uVar5) - uVar2;
    uVar8 = uVar7 >> 0xd ^ (uVar5 - uVar2) - uVar7;
    uVar5 = uVar8 >> 0xc ^ (uVar2 - uVar7) - uVar8;
    uVar2 = uVar5 << 0x10 ^ (uVar7 - uVar8) - uVar5;
    uVar7 = uVar2 >> 5 ^ (uVar8 - uVar5) - uVar2;
    uVar5 = uVar7 >> 3 ^ (uVar5 - uVar2) - uVar7;
    uVar2 = uVar5 << 10 ^ (uVar2 - uVar7) - uVar5;
    uVar2 = uVar2 >> 0xf ^ uVar7 - (uVar5 + uVar2);
  }
  iVar3 = FUN_140f16416((longlong *)(param_1 + 0x60),uVar2);
  if (iVar3 == -1) {
    uVar4 = 0;
  }
  else {
    lVar1 = *(longlong *)(param_1 + 0x60);
    uVar4 = 0;
    if ((lVar1 + (longlong)iVar3 * 0x20 != 0) &&
       (puVar6 = (undefined8 *)(lVar1 + (longlong)iVar3 * 0x20 + 0x10), puVar6 != (undefined8 *)0x0)
       ) {
      uVar4 = *puVar6;
    }
  }
  return uVar4;
}



// FUNCTION 140f16416 FUN_140f16416 body=95 status=ok
// SIG undefined FUN_140f16416(void)

int FUN_140f16416(longlong *param_1,uint param_2,int *param_3)

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



// FUNCTION 140f16476 FUN_140f16476 body=353 status=ok
// SIG undefined FUN_140f16476(void)

void FUN_140f16476(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140f164fb;
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
LAB_140f164fb:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 140f165d8 FUN_140f165d8 body=489 status=ok
// SIG undefined FUN_140f165d8(void)

int * FUN_140f165d8(longlong *param_1,int *param_2)

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
      FUN_1447711aa(param_1,iVar11);
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
    iVar6 = *(int *)(*param_1 + 4 + lVar3 * 0x20);
    *(int *)(param_1 + 6) = iVar6;
    iVar2 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar6 * 0x20) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar3 * 0x20 + *param_1;
  return param_2;
}



// FUNCTION 140f167c2 FUN_140f167c2 body=430 status=ok
// SIG undefined FUN_140f167c2(void)

void FUN_140f167c2(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  void *_Src;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined4 local_70;
  longlong local_68;
  void *local_60;
  uint local_58;
  undefined4 local_54;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_60 = (void *)0x0;
  local_58 = *(uint *)(param_1 + 0x58);
  lVar5 = (longlong)(int)local_58;
  _Src = *(void **)(param_1 + 0x50);
  if (lVar5 == 0) {
    local_54 = 0;
  }
  else {
    FUN_140f16a46(&local_60,local_58);
    memcpy(local_60,_Src,lVar5 << 3);
  }
  plVar1 = (longlong *)(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0x58) = 0;
  if (*(int *)(param_1 + 0x5c) < 0) {
    FUN_146557146(plVar1,0);
  }
  lVar5 = (longlong)*(int *)(*(longlong *)(param_1 + 0x60) + 0x50);
  if (lVar5 != 0) {
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x60) + 0x48);
    lVar4 = 0;
    do {
      local_78 = *(undefined8 *)(lVar3 + lVar4);
      local_70 = *(undefined4 *)(lVar3 + 8 + lVar4);
      local_68 = (**(code **)(**(longlong **)(param_1 + 8) + 8))
                           (*(longlong **)(param_1 + 8),&local_78);
      if (local_68 != 0) {
        iVar2 = *(int *)(param_1 + 0x58);
        *(uint *)(param_1 + 0x58) = iVar2 + 1U;
        if (*(uint *)(param_1 + 0x5c) < iVar2 + 1U) {
          FUN_140f16476(plVar1,iVar2);
        }
        *(longlong *)(*plVar1 + (longlong)iVar2 * 8) = local_68;
        local_50 = &local_68;
        FUN_140f16972(&local_60,&local_50);
      }
      lVar4 = lVar4 + 0xc;
    } while (lVar5 * 0xc != lVar4);
  }
  lVar5 = (longlong)(int)local_58;
  if (lVar5 != 0) {
    iVar2 = *(int *)(param_1 + 0x58);
    *(uint *)(param_1 + 0x58) = iVar2 + local_58;
    if ((uint)(*(int *)(param_1 + 0x5c) - iVar2) < local_58) {
      FUN_140f16476(plVar1,iVar2);
    }
    memcpy((void *)((longlong)iVar2 * 8 + *plVar1),local_60,lVar5 << 3);
  }
  if (local_60 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f16972 FUN_140f16972 body=211 status=ok
// SIG undefined FUN_140f16972(void)

int FUN_140f16972(longlong *param_1,undefined8 *param_2)

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



// FUNCTION 140f16a46 FUN_140f16a46 body=306 status=ok
// SIG undefined FUN_140f16a46(void)

void FUN_140f16a46(longlong param_1,int param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar3 = (longlong)param_2 * 8;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar6 = uVar3 + 0xf;
      if (uVar3 < 0x7ff1) {
        uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar6 >> 4]];
      }
      else {
        if ((uVar6 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar2 = (&DAT_14c841e00)[uVar6 >> 4];
          uVar4 = 0x32;
          if (0x32 < bVar2) {
            uVar4 = (ulonglong)bVar2;
          }
          uVar7 = 0x32 - (ulonglong)bVar2;
          do {
            uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar7 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar7 & 0xffffffff] & 0xf) == 0) goto LAB_140f16aa8;
            lVar1 = uVar4 + 1 + uVar7;
            uVar7 = uVar7 - 1;
          } while (lVar1 != 0x33);
        }
        uVar3 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar3 = (ulonglong)DAT_14c841df8;
        }
        uVar3 = -uVar3 & ((uVar6 & 0xfffffffffffffff0) + uVar3) - 1;
      }
    }
    else {
      uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
    }
  }
LAB_140f16aa8:
  uVar6 = 0x7fffffff;
  if (param_2 <= (int)(uVar3 >> 3)) {
    uVar6 = uVar3 >> 3 & 0xffffffff;
  }
  iVar5 = (int)uVar6;
  if (iVar5 < 1) {
    iVar5 = 0;
  }
  else {
    FUN_1446f8d3c(param_1,0,uVar6,8,8);
  }
  *(int *)(param_1 + 0xc) = iVar5;
  return;
}



// FUNCTION 140f16b78 FUN_140f16b78 body=604 status=ok
// SIG undefined FUN_140f16b78(void)

undefined8 * FUN_140f16b78(longlong *param_1,undefined8 *param_2,longlong param_3,longlong param_4)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  int iVar8;
  undefined1 auStack_78 [40];
  longlong *local_50;
  int local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = (longlong *)0x0;
  local_48 = 0;
  FUN_1446efa72(&local_50,0,3,0x10);
  local_48 = 3;
  *local_50 = (longlong)&PTR_LAB_14b3e61f0;
  LOCK();
  UNLOCK();
  lVar7 = DAT_14c758608 + 1;
  lVar2 = DAT_14c758608 + 1;
  if (lVar7 == 0) {
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 2;
    lVar2 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar2;
  local_50[2] = lVar7;
  *local_50 = (longlong)&PTR_FUN_14b41b650;
  local_50[3] = param_3;
  local_50[4] = param_4;
  *param_2 = 0;
  if ((local_50 == (longlong *)0x0) || (cVar4 = (**(code **)(*local_50 + 0x30))(), cVar4 == '\0')) {
    if (local_48 != 0) {
      if (local_50 == (longlong *)0x0) goto LAB_140f16cd9;
      (**(code **)*local_50)(local_50,0);
      FUN_1446efa72(&local_50,0,0,0x10);
      goto LAB_140f16cc3;
    }
  }
  else {
    if (*(int *)((longlong)param_1 + 0x14) < 1) {
      iVar1 = (int)param_1[1];
      iVar5 = (int)param_1[2] + -1;
      *(int *)(param_1 + 2) = iVar5;
      if (iVar5 <= iVar1) {
        iVar5 = iVar1;
        if (0 < iVar1) {
          iVar8 = 0;
          do {
            if (((*(int *)(*param_1 + 8 + (longlong)iVar8 * 0x10) == 0) ||
                (plVar3 = *(longlong **)(*param_1 + (longlong)iVar8 * 0x10),
                plVar3 == (longlong *)0x0)) ||
               (cVar4 = (**(code **)(*plVar3 + 0x28))(), cVar4 != '\0')) {
              FUN_14005b288(param_1,iVar8);
              FUN_14005b248(param_1);
            }
            else {
              iVar8 = iVar8 + 1;
            }
            iVar5 = (int)param_1[1];
          } while (iVar8 < iVar5);
        }
        iVar8 = 2;
        if (2 < iVar5 * 2) {
          iVar8 = iVar5 * 2;
        }
        *(int *)(param_1 + 2) = iVar8;
        if ((iVar8 < iVar1) && (*(int *)((longlong)param_1 + 0xc) != iVar5)) {
          FUN_14045812c();
        }
      }
    }
    uVar6 = 0;
    if ((local_48 != 0) && (local_50 != (longlong *)0x0)) {
      (**(code **)(*local_50 + 0x38))(local_50,&local_40);
      uVar6 = local_40;
    }
    *param_2 = uVar6;
    iVar1 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
      FUN_1447a71f6(param_1,iVar1);
    }
    lVar2 = *param_1;
    lVar7 = (longlong)iVar1 * 0x10;
    *(undefined8 *)(lVar2 + lVar7) = 0;
    *(undefined4 *)(lVar2 + 8 + lVar7) = 0;
    *(longlong **)(lVar2 + lVar7) = local_50;
    local_50 = (longlong *)0x0;
    *(int *)(lVar2 + 8 + lVar7) = local_48;
LAB_140f16cc3:
    local_48 = 0;
  }
  if (local_50 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_140f16cd9:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f16de6 FUN_140f16de6 body=1568 status=ok
// SIG undefined FUN_140f16de6(void)

longlong FUN_140f16de6(longlong *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined *puVar7;
  longlong *plVar8;
  longlong lVar9;
  byte bVar10;
  int iVar11;
  longlong lVar12;
  ulonglong uVar13;
  uint *puVar14;
  longlong lVar15;
  int iVar16;
  longlong *plVar17;
  int iVar18;
  uint uVar19;
  longlong lVar20;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined8 local_80;
  uint local_78;
  undefined1 local_70 [24];
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar17 = param_1 + 0x16;
  uVar6 = param_2[2];
  puVar14 = param_2;
  if (uVar6 != 0) {
    uVar19 = FUN_144a78877(*param_2,uVar6);
    puVar14 = (uint *)(ulonglong)uVar19;
  }
  uVar19 = *param_2;
  uVar13 = (ulonglong)puVar14 & 0xffffffff;
  if (uVar6 == 0) {
    uVar13 = (ulonglong)uVar19;
  }
  iVar4 = FUN_140f17408(plVar17,uVar13,param_2);
  if (iVar4 != -1) {
    if (((*plVar17 + (longlong)iVar4 * 0x20 != 0) &&
        (plVar8 = (longlong *)((longlong)iVar4 * 0x20 + *plVar17 + 0x10), plVar8 != (longlong *)0x0)
        ) && (lVar9 = *plVar8, lVar9 != 0)) goto LAB_140f171ff;
  }
  if ((uVar19 != (uint)DAT_14cb887f8) || (param_2[2] != DAT_14cb88800)) {
    local_80 = *(undefined8 *)param_2;
    local_78 = param_2[2];
    FUN_1448075d0(local_70);
    if ((DAT_14cb86df8 == 0) ||
       ((puVar7 = (undefined *)FUN_144837462(DAT_14cb86df8,local_70), puVar7 == (undefined *)0x0 ||
        (puVar7[0x58] == '\0')))) {
      puVar7 = (undefined *)0x0;
    }
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    if ((puVar7 != (undefined *)0x0) && (*(int *)((longlong)param_1 + 0x5c) != 0)) {
      uVar6 = *(uint *)(param_1 + 0xb);
      lVar9 = 0;
      if (((int)uVar6 < 0) || (DAT_14c9647dc <= (int)uVar6)) goto LAB_140f171ff;
      plVar8 = (longlong *)
               ((ulonglong)((uVar6 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8));
      if ((((plVar8 != (longlong *)0x0) && ((int)plVar8[2] == *(int *)((longlong)param_1 + 0x5c)))
          && ((*(uint *)(plVar8 + 1) & 0x10200000) == 0)) &&
         ((*plVar8 != 0 && (cVar3 = FUN_140e693d2(*plVar8,puVar7), cVar3 != '\0'))))
      goto LAB_140f16f1e;
    }
    lVar9 = 0;
    goto LAB_140f171ff;
  }
  puVar7 = &DAT_14cb88728;
LAB_140f16f1e:
  local_88 = plVar17;
  if (*(int *)((longlong)param_1 + 0xe4) == 0) {
    iVar4 = (int)param_1[0x17];
    *(int *)(param_1 + 0x17) = iVar4 + 1;
    if (*(int *)((longlong)param_1 + 0xbc) == iVar4) {
      FUN_1447711aa(plVar17,iVar4);
    }
    iVar18 = (int)param_1[0x1b];
    if (iVar18 == 0) {
      iVar5 = -1;
    }
    else {
      iVar5 = iVar18 + 0x1e;
      if (-1 < iVar18 + -1) {
        iVar5 = iVar18 + -1;
      }
      iVar5 = iVar5 >> 5;
    }
    plVar17 = param_1 + 0x18;
    iVar11 = iVar18 + 1;
    iVar16 = iVar18 + 0x1f;
    if (-1 < iVar18) {
      iVar16 = iVar18;
    }
    if (iVar16 >> 5 == iVar5) {
      *(int *)(param_1 + 0x1b) = iVar11;
    }
    else {
      if (*(int *)((longlong)param_1 + 0xdc) <= iVar18) {
        if (iVar18 + 0x20U < 0xa0) {
          iVar11 = 0x80;
          iVar5 = iVar18;
        }
        else {
          uVar6 = iVar18 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0xdc) + 0x1fU < 0xa0) {
            uVar19 = 4;
            if (4 < uVar6) {
              uVar19 = uVar6;
            }
          }
          else {
            uVar19 = (uVar6 * 3 >> 3) + uVar6 + 0x10;
          }
          uVar13 = FUN_144a3809e(uVar19 << 2,0);
          iVar5 = (int)(uVar13 >> 2);
          iVar11 = -0x20;
          if ((int)uVar6 <= iVar5) {
            iVar11 = iVar5 << 5;
          }
          iVar5 = (int)param_1[0x1b];
        }
        *(int *)((longlong)param_1 + 0xdc) = iVar11;
        FUN_1446efbd8(plVar17,iVar5);
        iVar11 = (int)param_1[0x1b] + 1;
      }
      iVar5 = iVar11 + 0x1f;
      if (-1 < iVar11) {
        iVar5 = iVar11;
      }
      *(int *)(param_1 + 0x1b) = iVar11;
      if (iVar11 % 0x20 != 0) {
        plVar8 = (longlong *)param_1[0x1a];
        if ((longlong *)param_1[0x1a] == (longlong *)0x0) {
          plVar8 = plVar17;
        }
        bVar10 = -(char)(iVar11 % 0x20);
        *(uint *)((longlong)plVar8 + (longlong)(iVar5 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar8 + (longlong)(iVar5 >> 5) * 4) << (bVar10 & 0x1f)) >>
             (bVar10 & 0x1f);
      }
    }
    lVar9 = (longlong)iVar4;
    if ((longlong *)param_1[0x1a] != (longlong *)0x0) {
      plVar17 = (longlong *)param_1[0x1a];
    }
    bVar10 = (byte)iVar18 & 0x1f;
    puVar14 = (uint *)((longlong)plVar17 + (longlong)(iVar16 >> 5) * 4);
    *puVar14 = *puVar14 & (-2 << bVar10 | 0xfffffffeU >> 0x20 - bVar10);
  }
  else {
    iVar4 = (int)param_1[0x1c];
    lVar9 = (longlong)iVar4;
    iVar18 = *(int *)(param_1[0x16] + 4 + lVar9 * 0x20);
    *(int *)(param_1 + 0x1c) = iVar18;
    iVar5 = *(int *)((longlong)param_1 + 0xe4) + -1;
    *(int *)((longlong)param_1 + 0xe4) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(param_1[0x16] + (longlong)iVar18 * 0x20) = 0xffffffff;
    }
  }
  plVar17 = param_1 + 0x18;
  if ((longlong *)param_1[0x1a] != (longlong *)0x0) {
    plVar17 = (longlong *)param_1[0x1a];
  }
  iVar18 = iVar4 + 0x1f;
  if (-1 < iVar4) {
    iVar18 = iVar4;
  }
  puVar14 = (uint *)((longlong)plVar17 + (longlong)(iVar18 >> 5) * 4);
  *puVar14 = *puVar14 | 1 << ((byte)iVar4 & 0x1f);
  lVar20 = param_1[0x16];
  lVar9 = lVar9 * 0x20;
  puVar14 = (uint *)(lVar20 + lVar9);
  uVar6 = param_2[2];
  *(uint *)(lVar20 + 8 + lVar9) = uVar6;
  *(undefined8 *)(lVar20 + lVar9) = *(undefined8 *)param_2;
  *(undefined8 *)(lVar20 + 0x10 + lVar9) = 0;
  *(undefined4 *)(lVar20 + 0x18 + lVar9) = 0xffffffff;
  if (uVar6 == 0) {
    uVar6 = *puVar14;
  }
  else {
    uVar6 = FUN_144a78877(*puVar14,uVar6);
  }
  uVar19 = (int)param_1[0x17] - *(int *)((longlong)param_1 + 0xe4);
  iVar18 = 1;
  if (uVar19 == 1) {
LAB_140f17083:
    iVar5 = iVar4;
    if (((int)uVar19 < 1) || (iVar18 <= (int)param_1[0x1f])) {
      uVar6 = (int)param_1[0x1f] - 1U & uVar6;
      puVar14[7] = uVar6;
      plVar17 = (longlong *)param_1[0x1e];
      if ((longlong *)param_1[0x1e] == (longlong *)0x0) {
        plVar17 = param_1 + 0x1d;
      }
      puVar14[6] = *(uint *)((longlong)plVar17 +
                            ((longlong)(int)param_1[0x1f] - 1U & (longlong)(int)uVar6) * 4);
      plVar17 = (longlong *)param_1[0x1e];
      if ((longlong *)param_1[0x1e] == (longlong *)0x0) {
        plVar17 = param_1 + 0x1d;
      }
      *(int *)((longlong)plVar17 + ((longlong)(int)param_1[0x1f] - 1U & (longlong)(int)uVar6) * 4) =
           iVar4;
    }
    else {
      *(int *)(param_1 + 0x1f) = iVar18;
      FUN_140f176d8(local_88);
    }
  }
  else {
    iVar5 = FUN_140f17408(local_88,uVar6,puVar14);
    if (iVar5 == -1) {
      if (3 < uVar19) {
        uVar13 = (ulonglong)(uVar19 & 0xfffffffe) + 0xf;
        lVar9 = 0x3f;
        if (uVar13 != 0) {
          for (; uVar13 >> lVar9 == 0; lVar9 = lVar9 + -1) {
          }
        }
        iVar18 = 1 << ((byte)lVar9 & 0x1f);
      }
      goto LAB_140f17083;
    }
    lVar9 = *local_88;
    uVar6 = *puVar14;
    uVar19 = puVar14[1];
    uVar1 = puVar14[2];
    uVar2 = puVar14[3];
    *(undefined8 *)(lVar9 + 0x10 + (longlong)iVar5 * 0x20) = *(undefined8 *)(puVar14 + 4);
    puVar14 = (uint *)(lVar9 + (longlong)iVar5 * 0x20);
    *puVar14 = uVar6;
    puVar14[1] = uVar19;
    puVar14[2] = uVar1;
    puVar14[3] = uVar2;
    FUN_14890b1ba(local_88,iVar4);
  }
  plVar8 = (longlong *)(param_1[0x16] + (longlong)iVar5 * 0x20 + 0x10);
  lVar9 = (**(code **)(*param_1 + 0xe0))(param_1,puVar7);
  *plVar8 = lVar9;
  plVar17 = param_1 + 0x24;
  lVar9 = param_1[0x24];
  uVar6 = *(uint *)(param_1 + 0x25);
  lVar20 = (longlong)(int)uVar6;
  if (lVar20 != 0) {
    lVar12 = lVar20 * 8;
    lVar15 = 0;
    do {
      if (*(int *)(puVar7 + 0x5c) <
          *(int *)(*(longlong *)(*(longlong *)(lVar9 + lVar15 * 8) + 0x60) + 0x5c)) {
        uVar19 = (uint)lVar15;
        if ((-1 < (int)uVar19) && ((int)uVar19 < (int)uVar6)) {
          *(uint *)(param_1 + 0x25) = uVar6 + 1;
          if (*(uint *)((longlong)param_1 + 300) <= uVar6) {
            FUN_1457c79da(plVar17,uVar6);
            lVar9 = *plVar17;
          }
          lVar20 = (ulonglong)(uVar19 & 0x7fffffff) * 8;
          memmove((void *)(lVar9 + lVar20 + 8),(void *)(lVar9 + lVar20),
                  (ulonglong)(uVar6 - uVar19) << 3);
          plVar17 = (longlong *)(lVar20 + *plVar17);
          goto LAB_140f171f8;
        }
        break;
      }
      lVar15 = lVar15 + 1;
      lVar12 = lVar12 + -8;
    } while (lVar12 != 0);
  }
  *(uint *)(param_1 + 0x25) = uVar6 + 1;
  if (*(uint *)((longlong)param_1 + 300) < uVar6 + 1) {
    FUN_1457c79da(plVar17,uVar6);
    lVar9 = *plVar17;
  }
  plVar17 = (longlong *)(lVar9 + lVar20 * 8);
LAB_140f171f8:
  lVar9 = *plVar8;
  *plVar17 = lVar9;
LAB_140f171ff:
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return lVar9;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f17408 FUN_140f17408 body=95 status=ok
// SIG undefined FUN_140f17408(void)

int FUN_140f17408(longlong *param_1,uint param_2,int *param_3)

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



// FUNCTION 140f17468 FUN_140f17468 body=8 status=ok
// SIG undefined FUN_140f17468(void)

undefined8 FUN_140f17468(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x160);
}



// FUNCTION 140f17470 FUN_140f17470 body=614 status=ok
// SIG undefined FUN_140f17470(void)

void FUN_140f17470(longlong *param_1)

{
  int *piVar1;
  ulonglong uVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  longlong *plVar13;
  uint uVar14;
  ulonglong uVar15;
  int iVar16;
  undefined1 auStack_98 [32];
  longlong *local_78;
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
  uVar14 = *(uint *)(param_1 + 9);
  if (uVar14 != 0) {
    plVar13 = param_1 + 7;
    FUN_144a1cbf0(plVar13,0,uVar14,4);
    if (0 < (int)uVar14) {
      uVar3 = 0;
      do {
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar13;
        }
        *(undefined4 *)((longlong)plVar9 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar3) * 4) =
             0xffffffff;
        uVar3 = uVar3 + 1;
      } while (uVar14 != uVar3);
    }
    local_60 = param_1 + 2;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    if ((int)param_1[5] == 0) {
      uVar15 = 1;
      local_58._0_4_ = 0xffffffff;
      local_58._4_4_ = 0;
      uVar5 = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      uVar5 = local_68 & 0xffffffff;
      uVar15 = local_68 >> 0x20;
    }
    plVar9 = local_60;
    uVar14 = (uint)local_58;
    iVar11 = local_58._4_4_;
    iVar16 = local_50;
    if (local_58._4_4_ < (int)local_60[3]) {
      do {
        piVar1 = (int *)(*param_1 + (longlong)iVar11 * 0x20);
        iVar4 = *(int *)(*param_1 + 8 + (longlong)iVar11 * 0x20);
        local_70 = uVar5;
        if (iVar4 == 0) {
          iVar4 = *piVar1;
        }
        else {
          local_78 = plVar13;
          iVar4 = FUN_144a78877(*piVar1,iVar4);
          plVar13 = local_78;
        }
        uVar5 = (longlong)iVar4 & (longlong)(int)param_1[9] - 1U;
        iVar4 = (int)uVar5;
        piVar1[7] = iVar4;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar13;
        }
        piVar1[6] = *(int *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar5) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar13;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar4 & (longlong)(int)param_1[9] - 1U) * 4) = iVar11
        ;
        uVar14 = uVar14 & ~(uint)uVar15;
        plVar8 = (longlong *)plVar9[2];
        if ((longlong *)plVar9[2] == (longlong *)0x0) {
          plVar8 = plVar9;
        }
        iVar4 = (int)plVar9[3];
        iVar11 = (int)local_70;
        lVar12 = (longlong)iVar11;
        uVar3 = *(uint *)((longlong)plVar8 + lVar12 * 4) & uVar14;
        uVar5 = local_70;
        if (uVar3 == 0) {
          iVar6 = iVar4 + 0x1e;
          if (-1 < iVar4 + -1) {
            iVar6 = iVar4 + -1;
          }
          iVar6 = iVar6 >> 5;
          iVar7 = iVar6;
          if (iVar6 < iVar11) {
            iVar7 = iVar11;
          }
          if (iVar6 <= iVar11) break;
          lVar10 = 0;
          while( true ) {
            iVar16 = iVar16 + 0x20;
            uVar3 = *(uint *)((longlong)plVar8 + lVar10 * 4 + lVar12 * 4 + 4);
            if (uVar3 != 0) break;
            lVar10 = lVar10 + 1;
            if (iVar7 - lVar12 == lVar10) goto LAB_140f1766c;
          }
          uVar5 = (ulonglong)(iVar11 + (int)lVar10 + 1);
          uVar14 = 0xffffffff;
        }
        uVar15 = (ulonglong)(-uVar3 & uVar3);
        uVar2 = uVar15 * 2 + 1;
        lVar12 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        iVar11 = (iVar16 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
      } while (iVar11 < iVar4);
    }
  }
LAB_140f1766c:
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f176d8 FUN_140f176d8 body=614 status=ok
// SIG undefined FUN_140f176d8(void)

void FUN_140f176d8(longlong *param_1)

{
  int *piVar1;
  ulonglong uVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  longlong *plVar13;
  uint uVar14;
  ulonglong uVar15;
  int iVar16;
  undefined1 auStack_98 [32];
  longlong *local_78;
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
  uVar14 = *(uint *)(param_1 + 9);
  if (uVar14 != 0) {
    plVar13 = param_1 + 7;
    FUN_144a1cbf0(plVar13,0,uVar14,4);
    if (0 < (int)uVar14) {
      uVar3 = 0;
      do {
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar13;
        }
        *(undefined4 *)((longlong)plVar9 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar3) * 4) =
             0xffffffff;
        uVar3 = uVar3 + 1;
      } while (uVar14 != uVar3);
    }
    local_60 = param_1 + 2;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    if ((int)param_1[5] == 0) {
      uVar15 = 1;
      local_58._0_4_ = 0xffffffff;
      local_58._4_4_ = 0;
      uVar5 = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      uVar5 = local_68 & 0xffffffff;
      uVar15 = local_68 >> 0x20;
    }
    plVar9 = local_60;
    uVar14 = (uint)local_58;
    iVar11 = local_58._4_4_;
    iVar16 = local_50;
    if (local_58._4_4_ < (int)local_60[3]) {
      do {
        piVar1 = (int *)(*param_1 + (longlong)iVar11 * 0x20);
        iVar4 = *(int *)(*param_1 + 8 + (longlong)iVar11 * 0x20);
        local_70 = uVar5;
        if (iVar4 == 0) {
          iVar4 = *piVar1;
        }
        else {
          local_78 = plVar13;
          iVar4 = FUN_144a78877(*piVar1,iVar4);
          plVar13 = local_78;
        }
        uVar5 = (longlong)iVar4 & (longlong)(int)param_1[9] - 1U;
        iVar4 = (int)uVar5;
        piVar1[7] = iVar4;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar13;
        }
        piVar1[6] = *(int *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar5) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar13;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar4 & (longlong)(int)param_1[9] - 1U) * 4) = iVar11
        ;
        uVar14 = uVar14 & ~(uint)uVar15;
        plVar8 = (longlong *)plVar9[2];
        if ((longlong *)plVar9[2] == (longlong *)0x0) {
          plVar8 = plVar9;
        }
        iVar4 = (int)plVar9[3];
        iVar11 = (int)local_70;
        lVar12 = (longlong)iVar11;
        uVar3 = *(uint *)((longlong)plVar8 + lVar12 * 4) & uVar14;
        uVar5 = local_70;
        if (uVar3 == 0) {
          iVar6 = iVar4 + 0x1e;
          if (-1 < iVar4 + -1) {
            iVar6 = iVar4 + -1;
          }
          iVar6 = iVar6 >> 5;
          iVar7 = iVar6;
          if (iVar6 < iVar11) {
            iVar7 = iVar11;
          }
          if (iVar6 <= iVar11) break;
          lVar10 = 0;
          while( true ) {
            iVar16 = iVar16 + 0x20;
            uVar3 = *(uint *)((longlong)plVar8 + lVar10 * 4 + lVar12 * 4 + 4);
            if (uVar3 != 0) break;
            lVar10 = lVar10 + 1;
            if (iVar7 - lVar12 == lVar10) goto LAB_140f178d4;
          }
          uVar5 = (ulonglong)(iVar11 + (int)lVar10 + 1);
          uVar14 = 0xffffffff;
        }
        uVar15 = (ulonglong)(-uVar3 & uVar3);
        uVar2 = uVar15 * 2 + 1;
        lVar12 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        iVar11 = (iVar16 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
      } while (iVar11 < iVar4);
    }
  }
LAB_140f178d4:
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f17940 FUN_140f17940 body=497 status=ok
// SIG undefined FUN_140f17940(void)

void FUN_140f17940(longlong *param_1,int param_2)

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
  int iVar13;
  undefined1 auStack_98 [40];
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
    uVar9 = 1;
    local_58._0_4_ = 0xffffffff;
    local_58._4_4_ = 0;
    local_68._0_4_ = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    uVar9 = local_68 >> 0x20;
  }
  plVar3 = local_60;
  iVar4 = (int)local_60[3];
  iVar13 = (int)local_68;
  uVar12 = (uint)local_58;
  iVar6 = local_58._4_4_;
  iVar10 = local_50;
  if (local_58._4_4_ < iVar4) {
    do {
      if (*(longlong *)(*param_1 + 0x10 + (longlong)iVar6 * 0x28) != 0) {
        FUN_1400020a8();
        iVar4 = (int)plVar3[3];
      }
      uVar12 = uVar12 & ~(uint)uVar9;
      plVar7 = (longlong *)plVar3[2];
      if ((longlong *)plVar3[2] == (longlong *)0x0) {
        plVar7 = plVar3;
      }
      lVar11 = (longlong)iVar13;
      uVar5 = *(uint *)((longlong)plVar7 + lVar11 * 4) & uVar12;
      if (uVar5 == 0) {
        iVar6 = iVar4 + 0x1e;
        if (-1 < iVar4 + -1) {
          iVar6 = iVar4 + -1;
        }
        iVar6 = iVar6 >> 5;
        iVar2 = iVar6;
        if (iVar6 < iVar13) {
          iVar2 = iVar13;
        }
        if (iVar6 <= iVar13) break;
        lVar8 = 0;
        while( true ) {
          iVar10 = iVar10 + 0x20;
          uVar5 = *(uint *)((longlong)plVar7 + lVar8 * 4 + lVar11 * 4 + 4);
          if (uVar5 != 0) break;
          lVar8 = lVar8 + 1;
          if (iVar2 - lVar11 == lVar8) goto LAB_140f17a75;
        }
        iVar13 = iVar13 + (int)lVar8 + 1;
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
LAB_140f17a75:
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



// FUNCTION 140f17b34 FUN_140f17b34 body=153 status=ok
// SIG undefined FUN_140f17b34(void)

void FUN_140f17b34(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = param_1 + (longlong)*(int *)(param_2 + 0x28) * 0x10;
  iVar2 = *(int *)(lVar1 + 0x2d0);
  *(int *)(param_2 + 0x10) = iVar2;
  *(uint *)(lVar1 + 0x2d0) = iVar2 + 1U;
  if (*(uint *)(lVar1 + 0x2d4) < iVar2 + 1U) {
    FUN_140f17bce((longlong *)(lVar1 + 0x2c8),iVar2);
  }
  *(longlong *)(*(longlong *)(lVar1 + 0x2c8) + (longlong)iVar2 * 8) = param_2;
  *(int *)(param_1 + 0x2a0) = *(int *)(param_1 + 0x2a0) + (*(uint *)(param_2 + 0x2c) & 1);
  *(int *)(param_1 + 0x2a4) =
       *(int *)(param_1 + 0x2a4) + (uint)((*(uint *)(param_2 + 0x2c) >> 1 & 1) != 0);
  *(int *)(param_1 + 0x2a8) =
       *(int *)(param_1 + 0x2a8) + (uint)((*(uint *)(param_2 + 0x2c) >> 2 & 1) != 0);
  *(int *)(param_1 + 0x2ac) =
       *(int *)(param_1 + 0x2ac) + (uint)((*(uint *)(param_2 + 0x2c) >> 4 & 1) != 0);
  *(int *)(param_1 + 0x2b0) =
       *(int *)(param_1 + 0x2b0) + (uint)((*(uint *)(param_2 + 0x2c) >> 5 & 1) != 0);
  *(int *)(param_1 + 0x2b4) = *(int *)(param_1 + 0x2b4) + *(int *)(param_2 + 0x30);
  return;
}



// FUNCTION 140f17bce FUN_140f17bce body=353 status=ok
// SIG undefined FUN_140f17bce(void)

void FUN_140f17bce(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140f17c55;
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
LAB_140f17c55:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 140f17d30 FUN_140f17d30 body=272 status=ok
// SIG undefined FUN_140f17d30(void)

undefined4 * FUN_140f17d30(undefined4 *param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined1 uVar2;
  longlong lVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined1 auStack_88 [40];
  longlong local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  ushort local_40;
  byte local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_60 = FUN_140f17e42();
  if ((local_60 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_60);
  }
  lVar3 = FUN_140528a12(param_2,&local_60);
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    if (*(char *)(lVar3 + 0x28) == '\x03') {
      uVar5 = *(undefined4 *)(lVar3 + 8);
    }
    else {
      puVar4 = &local_58;
      FUN_1400b56fe(puVar4,(undefined4 *)(lVar3 + 8),3);
      uVar5 = 0;
      if (local_38 != 0) {
        uVar5 = local_58;
      }
      pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_38 * 0x120));
      if (pcVar1 != (code *)0x0) {
        if (0x18 < local_40) {
          puVar4 = (undefined4 *)CONCAT44(uStack_54,local_58);
        }
        (*pcVar1)(puVar4);
      }
      if (0x18 < local_40) {
        FUN_1400020a8(CONCAT44(uStack_54,local_58));
      }
    }
    *param_1 = uVar5;
    uVar2 = 1;
  }
  *(undefined1 *)(param_1 + 1) = uVar2;
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f17e42 FUN_140f17e42 body=228 status=ok
// SIG undefined FUN_140f17e42(void)

longlong FUN_140f17e42(void)

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
  if (DAT_14cb67738 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1458993da;
    local_38 = &LAB_14873c1bd;
    local_40 = &LAB_145beb08b;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x48;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxStatusEffectSignatureParam_Charge",&DAT_14cb67738,
                  FUN_146516cfc);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb67738;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f17f3c FUN_140f17f3c body=137 status=ok
// SIG undefined FUN_140f17f3c(void)

undefined8 * FUN_140f17f3c(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_149e12b60;
  plVar1 = param_1 + 4;
  if (*(int *)(param_1 + 5) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) goto LAB_140f17f64;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 5) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_140f17f64:
  *param_1 = &PTR_LAB_149e12740;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140f17fc6 FUN_140f17fc6 body=342 status=ok
// SIG undefined FUN_140f17fc6(void)

undefined8 * FUN_140f17fc6(ulonglong *param_1,undefined8 param_2,undefined4 param_3)

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
              0x110) < DAT_14c9529b0) {
    FUN_144b3d300(&DAT_14c9529b0);
    if (DAT_14c9529b0 == -1) {
      FUN_1446f4b16();
      local_40 = FUN_140f17fc6;
      local_48 = &DAT_14c951c78;
      local_50 = 0;
      local_58 = 0x24008001;
      FUN_14000176a(&DAT_14c952960,L"FSoftObjectProperty",0x20000000,0);
      atexit(FUN_142818859);
      _Init_thread_footer(&DAT_14c9529b0);
    }
  }
  puVar1[1] = &DAT_14c952960;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x1c) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x24) = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  *puVar1 = &PTR_LAB_149e71910;
  local_30 = *param_1;
  if ((((local_30 & 1) != 0) && ((local_30 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')
     ) {
    FUN_1456cec3c();
  }
  FUN_140f1811e(puVar1,&local_30,param_2,param_3);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f1811e FUN_140f1811e body=205 status=ok
// SIG undefined FUN_140f1811e(void)

undefined8 *
FUN_140f1811e(undefined8 *param_1,ulonglong *param_2,undefined8 param_3,undefined4 param_4)

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
  }
  FUN_1403a6280(param_1,&local_38,param_3,param_4);
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x28;
  param_1[0xe] = 0;
  *param_1 = &PTR_LAB_149e71910;
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 140f181ec FUN_140f181ec body=29 status=ok
// SIG undefined FUN_140f181ec(void)

void FUN_140f181ec(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 140f1820a FUN_140f1820a body=151 status=ok
// SIG undefined FUN_140f1820a(void)

undefined8 * FUN_140f1820a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b9c10e0;
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  if ((longlong *)param_1[7] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[7] + 0x10))();
  }
  if ((longlong *)param_1[5] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[5] + 0x10))();
  }
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



// FUNCTION 140f182a2 FUN_140f182a2 body=1069 status=ok
// SIG undefined FUN_140f182a2(void)

undefined8 FUN_140f182a2(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined8 uVar4;
  void *pvVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  longlong lVar13;
  undefined8 *puVar14;
  longlong lVar15;
  longlong lVar16;
  
  if (param_4 != 0) {
    lVar13 = 0;
    do {
      lVar15 = param_3 + lVar13;
      lVar16 = param_2 + 0x28 + lVar13;
      *(undefined2 *)(lVar16 + -0x18) = *(undefined2 *)(lVar15 + 0x10);
      *(undefined8 *)(lVar16 + -0x20) = *(undefined8 *)(lVar15 + 8);
      uVar6 = *(undefined4 *)(lVar15 + 0x1c);
      uVar7 = *(undefined4 *)(lVar15 + 0x20);
      uVar8 = *(undefined4 *)(lVar15 + 0x24);
      *(undefined4 *)(lVar16 + -0x10) = *(undefined4 *)(lVar15 + 0x18);
      *(undefined4 *)(lVar16 + -0xc) = uVar6;
      *(undefined4 *)(lVar16 + -8) = uVar7;
      *(undefined4 *)(lVar16 + -4) = uVar8;
      FUN_1404306dc();
      FUN_1406fa324(param_2 + lVar13 + 0x38,param_3 + lVar13 + 0x38);
      lVar16 = param_2 + lVar13 + 0x58;
      lVar15 = param_3 + lVar13 + 0x58;
      if (param_2 == param_3) {
        FUN_1403fbf4e(lVar16,lVar15);
      }
      else {
        iVar3 = *(int *)(param_3 + 0x50 + lVar13);
        uVar4 = *(undefined8 *)(param_3 + 0x48 + lVar13);
        *(int *)(param_2 + 0x50 + lVar13) = iVar3;
        if (iVar3 == 0 && *(int *)(param_2 + 0x54 + lVar13) == 0) {
          *(undefined4 *)(param_2 + 0x54 + lVar13) = 0;
        }
        else {
          puVar14 = (undefined8 *)(param_2 + lVar13 + 0x48);
          FUN_140f1877a(puVar14,iVar3);
          FUN_140f18729(*puVar14,uVar4,iVar3);
        }
        FUN_1403fbf4e(lVar16,lVar15);
        iVar3 = *(int *)(param_3 + 0x70 + lVar13);
        pvVar5 = *(void **)(param_3 + 0x68 + lVar13);
        *(int *)(param_2 + 0x70 + lVar13) = iVar3;
        if (iVar3 == 0 && *(int *)(param_2 + 0x74 + lVar13) == 0) {
          *(undefined4 *)(param_2 + 0x74 + lVar13) = 0;
        }
        else {
          puVar14 = (undefined8 *)(param_2 + lVar13 + 0x68);
          FUN_1447c510a(puVar14,iVar3);
          if (iVar3 != 0) {
            memcpy((void *)*puVar14,pvVar5,(longlong)iVar3 << 2);
          }
        }
      }
      lVar15 = param_3 + lVar13;
      lVar16 = param_2 + lVar13;
      *(undefined1 *)(param_2 + 0x7a + lVar13) = *(undefined1 *)(param_3 + 0x7a + lVar13);
      *(undefined2 *)(param_2 + 0x78 + lVar13) = *(undefined2 *)(param_3 + 0x78 + lVar13);
      FUN_140f186d0(lVar16 + 0x80,lVar15 + 0x80);
      puVar1 = (undefined4 *)(param_3 + 0x90 + lVar13);
      uVar6 = puVar1[1];
      uVar7 = puVar1[2];
      uVar8 = puVar1[3];
      puVar2 = (undefined4 *)(param_3 + 0xa0 + lVar13);
      uVar9 = *puVar2;
      uVar10 = puVar2[1];
      uVar11 = puVar2[2];
      uVar12 = puVar2[3];
      puVar2 = (undefined4 *)(param_2 + 0x90 + lVar13);
      *puVar2 = *puVar1;
      puVar2[1] = uVar6;
      puVar2[2] = uVar7;
      puVar2[3] = uVar8;
      puVar1 = (undefined4 *)(param_2 + 0xa0 + lVar13);
      *puVar1 = uVar9;
      puVar1[1] = uVar10;
      puVar1[2] = uVar11;
      puVar1[3] = uVar12;
      FUN_140f186d0(lVar16 + 0xb0,lVar15 + 0xb0);
      FUN_140f186d0(lVar16 + 0xc0,lVar15 + 0xc0);
      FUN_1407f996a(lVar16 + 0xd0,lVar15 + 0xd0);
      *(undefined1 *)(param_2 + 0xe0 + lVar13) = *(undefined1 *)(param_3 + 0xe0 + lVar13);
      *(undefined8 *)(param_2 + 0xe8 + lVar13) = *(undefined8 *)(param_3 + 0xe8 + lVar13);
      *(undefined8 *)(param_2 + 0xf0 + lVar13) = *(undefined8 *)(param_3 + 0xf0 + lVar13);
      if (lVar16 != lVar15) {
        iVar3 = *(int *)(param_3 + 0x100 + lVar13);
        pvVar5 = *(void **)(param_3 + 0xf8 + lVar13);
        *(int *)(param_2 + 0x100 + lVar13) = iVar3;
        if (iVar3 == 0 && *(int *)(param_2 + 0x104 + lVar13) == 0) {
          *(undefined4 *)(param_2 + 0x104 + lVar13) = 0;
        }
        else {
          puVar14 = (undefined8 *)(param_2 + lVar13 + 0xf8);
          FUN_1447cd5fa(puVar14,iVar3);
          if (iVar3 != 0) {
            memcpy((void *)*puVar14,pvVar5,(longlong)iVar3);
          }
        }
        iVar3 = *(int *)(param_3 + 0x110 + lVar13);
        pvVar5 = *(void **)(param_3 + 0x108 + lVar13);
        *(int *)(param_2 + 0x110 + lVar13) = iVar3;
        if (iVar3 == 0 && *(int *)(param_2 + 0x114 + lVar13) == 0) {
          *(undefined4 *)(param_2 + 0x114 + lVar13) = 0;
        }
        else {
          puVar14 = (undefined8 *)(param_2 + lVar13 + 0x108);
          FUN_1447cd5fa(puVar14,iVar3);
          if (iVar3 != 0) {
            memcpy((void *)*puVar14,pvVar5,(longlong)iVar3);
          }
        }
        iVar3 = *(int *)(param_3 + 0x120 + lVar13);
        pvVar5 = *(void **)(param_3 + 0x118 + lVar13);
        *(int *)(param_2 + 0x120 + lVar13) = iVar3;
        if (iVar3 == 0 && *(int *)(param_2 + 0x124 + lVar13) == 0) {
          *(undefined4 *)(param_2 + 0x124 + lVar13) = 0;
        }
        else {
          puVar14 = (undefined8 *)(param_2 + lVar13 + 0x118);
          FUN_1447cd5fa(puVar14,iVar3);
          if (iVar3 != 0) {
            memcpy((void *)*puVar14,pvVar5,(longlong)iVar3);
          }
        }
        iVar3 = *(int *)(param_3 + 0x130 + lVar13);
        pvVar5 = *(void **)(param_3 + 0x128 + lVar13);
        *(int *)(param_2 + 0x130 + lVar13) = iVar3;
        if (iVar3 == 0 && *(int *)(param_2 + 0x134 + lVar13) == 0) {
          *(undefined4 *)(param_2 + 0x134 + lVar13) = 0;
        }
        else {
          puVar14 = (undefined8 *)(param_2 + lVar13 + 0x128);
          FUN_1447c510a(puVar14,iVar3);
          if (iVar3 != 0) {
            memcpy((void *)*puVar14,pvVar5,(longlong)iVar3 << 2);
          }
        }
        iVar3 = *(int *)(param_3 + 0x140 + lVar13);
        pvVar5 = *(void **)(param_3 + 0x138 + lVar13);
        *(int *)(param_2 + 0x140 + lVar13) = iVar3;
        if (iVar3 == 0 && *(int *)(param_2 + 0x144 + lVar13) == 0) {
          *(undefined4 *)(param_2 + 0x144 + lVar13) = 0;
        }
        else {
          puVar14 = (undefined8 *)(param_2 + lVar13 + 0x138);
          FUN_1447cd5fa(puVar14,iVar3);
          if (iVar3 != 0) {
            memcpy((void *)*puVar14,pvVar5,(longlong)iVar3);
          }
        }
      }
      lVar13 = lVar13 + 0x148;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 140f186d0 FUN_140f186d0 body=89 status=ok
// SIG undefined FUN_140f186d0(void)

undefined8 * FUN_140f186d0(undefined8 *param_1,undefined8 *param_2)

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
      FUN_148660ba4(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0xc);
      }
    }
  }
  return param_1;
}



// FUNCTION 140f18729 FUN_140f18729 body=80 status=ok
// SIG undefined FUN_140f18729(void)

void FUN_140f18729(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = 0;
    bVar2 = DAT_14c950c29;
    do {
      lVar1 = *(longlong *)(param_2 + lVar3 * 8);
      *(longlong *)(param_1 + lVar3 * 8) = lVar1;
      if (((bVar2 & 1) != 0) && (lVar1 != 0)) {
        FUN_14689c22e();
        bVar2 = DAT_14c950c29;
      }
      lVar3 = lVar3 + 1;
    } while (param_3 != (int)lVar3);
  }
  return;
}



// FUNCTION 140f1877a FUN_140f1877a body=317 status=ok
// SIG undefined FUN_140f1877a(void)

void FUN_140f1877a(longlong param_1,int param_2,int param_3)

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
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140f187e8;
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
LAB_140f187e8:
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



// FUNCTION 140f188b8 FUN_140f188b8 body=131 status=ok
// SIG undefined FUN_140f188b8(void)

undefined8 * FUN_140f188b8(undefined8 *param_1,longlong *param_2)

{
  *param_1 = &PTR_FUN_149e8f7e0;
  if ((undefined8 *)*param_2 != param_1 && (undefined8 *)*param_2 != (undefined8 *)0x0) {
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectGlobals.cpp",0xe8e,
                  L"UObject(const FObjectInitializer&) constructor called but it\'s not the object that\'s currently being constructed with NewObject. Maybe you are trying to construct it on the stack, which is not supported."
                 );
  }
  *param_2 = (longlong)param_1;
  *(undefined1 *)((longlong)param_2 + 0x12) = 0;
  *param_1 = &PTR_FUN_14a648ae0;
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
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  return param_1;
}



// FUNCTION 140f18942 FUN_140f18942 body=157 status=ok
// SIG undefined FUN_140f18942(void)

void FUN_140f18942(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar3 = param_1[0x19];
  if ((longlong)(int)lVar3 != 0) {
    lVar1 = param_1[0x18];
    lVar5 = 0;
    do {
      lVar2 = *(longlong *)(lVar1 + lVar5);
      if ((lVar2 != 0) && ((*(uint *)(lVar2 + 8) >> 0xc & 1) != 0)) {
        if (((*(uint *)(lVar2 + 8) >> 10 & 1) != 0) && (lVar4 = FUN_144b00dc8(lVar2), lVar4 != 0)) {
          FUN_142800a72(lVar4,1);
        }
        FUN_1400337aa(lVar2);
      }
      lVar5 = lVar5 + 0x40;
    } while ((longlong)(int)lVar3 * 0x40 != lVar5);
  }
  FUN_140d77aa8(param_1);
  (**(code **)(*param_1 + 800))(param_1);
                    /* WARNING: Could not recover jumptable at 0x000140f189bf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 1000))(param_1);
  return;
}



// FUNCTION 140f189f0 FUN_140f189f0 body=260 status=ok
// SIG undefined FUN_140f189f0(void)

void FUN_140f189f0(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 uVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar3 = param_1[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar1 = *param_1;
    lVar7 = 0;
    do {
      plVar2 = *(longlong **)(lVar1 + lVar7);
      if (plVar2 == (longlong *)0x0) {
LAB_140f18a51:
        uVar4 = FUN_140f18af6(param_1,plVar2);
        *(undefined1 *)(lVar1 + 0x1c + lVar7) = uVar4;
      }
      else {
        lVar6 = FUN_140f18b90();
        if ((*(int *)(plVar2[2] + 0x38) < *(int *)(lVar6 + 0x38)) ||
           (*(longlong *)(*(longlong *)(plVar2[2] + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) !=
            lVar6 + 0x30)) goto LAB_140f18a51;
        local_58 = (undefined8 *)0x0;
        uStack_50 = 1;
        uVar4 = 0;
        FUN_1478fac1a(&local_58,0);
        *local_58 = param_2;
        cVar5 = (**(code **)(*plVar2 + 0x3f0))(plVar2,&local_58);
        if (cVar5 == '\0') {
          uVar4 = FUN_140f18af6(param_1,plVar2);
        }
        *(undefined1 *)(lVar1 + 0x1c + lVar7) = uVar4;
        if (local_58 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
      }
      lVar7 = lVar7 + 0x40;
    } while ((longlong)(int)lVar3 * 0x40 != lVar7);
  }
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f18af6 FUN_140f18af6 body=154 status=ok
// SIG undefined FUN_140f18af6(void)

ulonglong FUN_140f18af6(undefined8 *param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 unaff_RSI;
  ulonglong uVar5;
  float fVar6;
  
  uVar5 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if (param_2 != (longlong *)0x0) {
    fVar6 = (float)(**(code **)(*param_2 + 0x2b0))(param_2);
    if (0.0 < fVar6) {
      cVar1 = (**(code **)(*param_2 + 0x3c8))(param_2);
      if (cVar1 != '\0') {
        iVar2 = -1;
        if ((0 < *(int *)(param_1 + 1)) && (*(longlong **)*param_1 != (longlong *)0x0)) {
          iVar2 = (**(code **)(**(longlong **)*param_1 + 0x3c0))();
        }
        iVar3 = (**(code **)(*param_2 + 0x3c0))(param_2);
        if ((iVar2 != -1) && (iVar2 != iVar3)) {
          uVar4 = FUN_140851d9a();
          uVar5 = 0;
          FUN_140277b32(uVar4,0,L"/Script/Engine.EAdditiveAnimationType",0);
        }
        goto LAB_140f18b85;
      }
    }
    uVar5 = 0;
  }
LAB_140f18b85:
  return uVar5 & 0xffffffff;
}



// FUNCTION 140f18b90 FUN_140f18b90 body=228 status=ok
// SIG undefined FUN_140f18b90(void)

longlong FUN_140f18b90(void)

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
  if (DAT_14cacb270 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14636d4f2;
    local_38 = &LAB_1478df6d5;
    local_40 = FUN_1463a1db4;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0xc0;
    FUN_14081cfa3(L"/Script/Engine",L"AnimCompositeBase",&DAT_14cacb270,&DAT_1478df6d4);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cacb270;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f18c76 FUN_140f18c76 body=956 status=ok
// SIG undefined FUN_140f18c76(void)

void FUN_140f18c76(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  bool bVar12;
  undefined1 auStack_78 [40];
  longlong *local_50;
  int local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = (longlong *)0x0;
  local_48 = 0;
  FUN_1446efa72(&local_50,0,4,0x10);
  local_48 = 4;
  plVar2 = *(longlong **)(param_1 + 0x10);
  if (plVar2 == (longlong *)0x0) {
LAB_140f18f09:
    *local_50 = (longlong)&PTR_LAB_14b42a9c0;
    LOCK();
    UNLOCK();
    lVar10 = DAT_14c758608 + 1;
    lVar3 = DAT_14c758608 + 1;
    if (lVar10 == 0) {
      LOCK();
      UNLOCK();
      lVar10 = DAT_14c758608 + 2;
      lVar3 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar3;
    local_50[2] = lVar10;
    *local_50 = (longlong)&PTR_FUN_14b4306a0;
    local_50[3] = 0;
    local_50[4] = 0;
    local_50[5] = (longlong)&LAB_145c6f006;
    *(undefined4 *)(local_50 + 6) = 0;
  }
  else {
    iVar6 = (int)plVar2[1];
    do {
      if (iVar6 == 0) goto LAB_140f18f09;
      LOCK();
      iVar7 = (int)plVar2[1];
      bVar12 = iVar6 == iVar7;
      if (bVar12) {
        *(int *)(plVar2 + 1) = iVar6 + 1;
        iVar7 = iVar6;
      }
      iVar6 = iVar7;
      UNLOCK();
    } while (!bVar12);
    lVar3 = *(longlong *)(param_1 + 8);
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *local_50 = (longlong)&PTR_LAB_14b42a9c0;
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
    *local_50 = (longlong)&PTR_FUN_14b4306a0;
    local_50[3] = lVar3;
    local_50[4] = (longlong)plVar2;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    local_50[5] = (longlong)&LAB_145c6f006;
    *(undefined4 *)(local_50 + 6) = 0;
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
  if (((local_48 == 0) || (local_50 == (longlong *)0x0)) ||
     (cVar5 = (**(code **)(*local_50 + 0x30))(), cVar5 == '\0')) {
    if (local_48 != 0) {
      if (local_50 == (longlong *)0x0) {
        uVar11 = 0;
        goto LAB_140f18e4b;
      }
      uVar11 = 0;
      (**(code **)*local_50)(local_50,0);
      FUN_1446efa72(&local_50,0,0,0x10);
      goto LAB_140f18e35;
    }
    uVar11 = 0;
  }
  else {
    plVar2 = (longlong *)(param_2 + 0x1200);
    if (*(int *)(param_2 + 0x1214) < 1) {
      iVar6 = *(int *)(param_2 + 0x1208);
      iVar7 = *(int *)(param_2 + 0x1210) + -1;
      *(int *)(param_2 + 0x1210) = iVar7;
      if (iVar7 <= iVar6) {
        iVar7 = iVar6;
        if (0 < iVar6) {
          iVar8 = 0;
          do {
            if (((*(int *)(*plVar2 + 8 + (longlong)iVar8 * 0x10) == 0) ||
                (plVar4 = *(longlong **)(*plVar2 + (longlong)iVar8 * 0x10),
                plVar4 == (longlong *)0x0)) ||
               (cVar5 = (**(code **)(*plVar4 + 0x28))(), cVar5 != '\0')) {
              FUN_14005b288(plVar2,iVar8);
              FUN_14005b248(plVar2);
            }
            else {
              iVar8 = iVar8 + 1;
            }
            iVar7 = *(int *)(param_2 + 0x1208);
          } while (iVar8 < iVar7);
        }
        iVar8 = 2;
        if (2 < iVar7 * 2) {
          iVar8 = iVar7 * 2;
        }
        *(int *)(param_2 + 0x1210) = iVar8;
        if ((iVar8 < iVar6) && (*(int *)(param_2 + 0x120c) != iVar7)) {
          FUN_14045812c();
        }
      }
    }
    uVar11 = 0;
    if ((local_48 != 0) && (local_50 != (longlong *)0x0)) {
      (**(code **)(*local_50 + 0x38))(local_50,&local_40);
      uVar11 = local_40;
    }
    iVar6 = *(int *)(param_2 + 0x1208);
    *(uint *)(param_2 + 0x1208) = iVar6 + 1U;
    if (*(uint *)(param_2 + 0x120c) < iVar6 + 1U) {
      FUN_1447a71f6(plVar2,iVar6);
    }
    lVar3 = *plVar2;
    lVar10 = (longlong)iVar6 * 0x10;
    *(undefined8 *)(lVar3 + lVar10) = 0;
    *(undefined4 *)(lVar3 + 8 + lVar10) = 0;
    *(longlong **)(lVar3 + lVar10) = local_50;
    local_50 = (longlong *)0x0;
    *(int *)(lVar3 + 8 + lVar10) = local_48;
LAB_140f18e35:
    local_48 = 0;
  }
  if (local_50 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_140f18e4b:
  *(undefined8 *)(param_1 + 0xd8) = uVar11;
  FUN_140f19034(param_1,param_2);
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140f19034 FUN_140f19034 body=65 status=ok
// SIG undefined FUN_140f19034(void)

void FUN_140f19034(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  
  FUN_140f19092();
  lVar1 = (**(code **)(*param_2 + 0x5d8))(param_2);
  if (lVar1 != 0) {
    FUN_140f1913e(param_1,*(undefined8 *)(lVar1 + 0x448));
  }
  FUN_140ac11f0(param_1);
  return;
}



// FUNCTION 140f19092 FUN_140f19092 body=171 status=ok
// SIG undefined FUN_140f19092(void)

void FUN_140f19092(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  
  if (((*(int *)(param_1 + 0x34) != 0) && (uVar1 = *(uint *)(param_1 + 0x30), -1 < (int)uVar1)) &&
     ((int)uVar1 < DAT_14c9647dc)) {
    plVar4 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar4 != (longlong *)0x0) && ((int)plVar4[2] == *(int *)(param_1 + 0x34))) &&
       (((*(uint *)(plVar4 + 1) & 0x10200000) == 0 &&
        (((*(uint *)(plVar4 + 1) & 0x10200000) == 0 && (lVar2 = *plVar4, lVar2 != 0)))))) {
      lVar3 = FUN_140183ac4();
      if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8
           ) == lVar3 + 0x30)) {
        if (*(longlong *)(param_1 + 0xe0) != 0) {
          FUN_14480f766(lVar2 + 0x2ec8);
        }
        *(undefined8 *)(param_1 + 0xe0) = 0;
      }
    }
  }
  return;
}



// FUNCTION 140f1913e FUN_140f1913e body=788 status=ok
// SIG undefined FUN_140f1913e(void)

void FUN_140f1913e(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_68 [40];
  undefined1 local_40 [8];
  undefined8 *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 != 0) {
    uVar3 = *(uint *)(param_2 + 0xc);
    *(uint *)(param_1 + 0x30) = uVar3;
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar9 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar9 = 0;
    }
    iVar6 = *(int *)(lVar9 + 0x10);
    if (*(int *)(lVar9 + 0x10) == 0) {
      LOCK();
      iVar6 = DAT_14c964868 + 1;
      UNLOCK();
      iVar7 = DAT_14c964868 + 1;
      bVar10 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar6;
      if (bVar10) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar7);
      }
      LOCK();
      iVar6 = *(int *)(lVar9 + 0x10);
      bVar10 = iVar6 == 0;
      if (bVar10) {
        *(int *)(lVar9 + 0x10) = iVar7;
        iVar6 = 0;
      }
      UNLOCK();
      if (bVar10) {
        iVar6 = iVar7;
      }
    }
    *(int *)(param_1 + 0x34) = iVar6;
    lVar9 = FUN_140183ac4();
    if ((*(int *)(lVar9 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8
         ) == lVar9 + 0x30)) {
      local_38 = (undefined8 *)0x0;
      local_30 = 0;
      FUN_1446efa72(&local_38,0,4,0x10);
      local_30 = 4;
      plVar4 = *(longlong **)(param_1 + 0x10);
      if (plVar4 == (longlong *)0x0) {
LAB_140f19347:
        *local_38 = &PTR_LAB_149e020b0;
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
        local_38[2] = lVar8;
        *local_38 = &PTR_FUN_14b430710;
        local_38[3] = 0;
        local_38[4] = 0;
        local_38[5] = &LAB_140ac11ea;
        *(undefined4 *)(local_38 + 6) = 0;
      }
      else {
        iVar6 = (int)plVar4[1];
        do {
          if (iVar6 == 0) goto LAB_140f19347;
          LOCK();
          iVar7 = (int)plVar4[1];
          bVar10 = iVar6 == iVar7;
          if (bVar10) {
            *(int *)(plVar4 + 1) = iVar6 + 1;
            iVar7 = iVar6;
          }
          iVar6 = iVar7;
          UNLOCK();
        } while (!bVar10);
        uVar5 = *(undefined8 *)(param_1 + 8);
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
        *local_38 = &PTR_LAB_149e020b0;
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
        local_38[2] = lVar8;
        *local_38 = &PTR_FUN_14b430710;
        local_38[3] = uVar5;
        local_38[4] = plVar4;
        LOCK();
        *(int *)((longlong)plVar4 + 0xc) = *(int *)((longlong)plVar4 + 0xc) + 1;
        UNLOCK();
        local_38[5] = &LAB_140ac11ea;
        *(undefined4 *)(local_38 + 6) = 0;
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
      FUN_1448b6402(param_2 + 0x2ec8,local_40,&local_38);
      if (local_30 != 0) {
        if (local_38 == (undefined8 *)0x0) goto LAB_140f192c9;
        (**(code **)*local_38)(local_38,0);
        FUN_1446efa72(&local_38,0,0,0x10);
        local_30 = 0;
      }
      if (local_38 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
  }
LAB_140f192c9:
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140f19454 FUN_140f19454 body=284 status=ok
// SIG undefined FUN_140f19454(void)

void FUN_140f19454(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  char cVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14024bdb0();
  plVar6 = *(longlong **)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar6 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar6 + 0x10))();
    }
  }
  if ((longlong)*(int *)(param_1 + 0x30) != 0) {
    plVar6 = *(longlong **)(param_1 + 0x28);
    plVar4 = plVar6 + (longlong)*(int *)(param_1 + 0x30) * 4;
    do {
      while (((char)plVar6[1] == '\x02' && (lVar2 = *plVar6, lVar2 != 0))) {
        uVar5 = FUN_140076f80();
        cVar3 = FUN_1448093f4(lVar2,uVar5);
        if (cVar3 != '\0') {
          FUN_140f19572(lVar2,&local_30);
          *(undefined8 *)(param_1 + 0x60) = local_30;
          local_30 = 0;
          plVar6 = *(longlong **)(param_1 + 0x68);
          *(longlong **)(param_1 + 0x68) = local_28;
          local_28 = (longlong *)0x0;
          if (plVar6 != (longlong *)0x0) {
            LOCK();
            piVar1 = (int *)((longlong)plVar6 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar6 + 0x10))();
            }
            if (local_28 != (longlong *)0x0) {
              LOCK();
              piVar1 = (int *)((longlong)local_28 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*local_28 + 0x10))();
              }
            }
          }
          goto LAB_140f1950a;
        }
        plVar6 = *(longlong **)(lVar2 + 0x28);
        plVar4 = plVar6 + (longlong)*(int *)(lVar2 + 0x30) * 4;
        if ((longlong)*(int *)(lVar2 + 0x30) == 0) goto LAB_140f1950a;
      }
      plVar6 = plVar6 + 4;
    } while (plVar6 != plVar4);
  }
LAB_140f1950a:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140f19572 FUN_140f19572 body=107 status=ok
// SIG undefined FUN_140f19572(void)

longlong * FUN_140f19572(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    plVar3 = *(longlong **)(*(longlong *)(param_1 + 8) + 0xa0);
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



// FUNCTION 140f195dd FUN_140f195dd body=43 status=ok
// SIG undefined FUN_140f195dd(void)

void FUN_140f195dd(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140f19608(puVar1);
  *puVar1 = &PTR_FUN_14b65d1a0;
  puVar1[6] = &PTR_FUN_14b65d490;
  return;
}



// FUNCTION 140f19608 FUN_140f19608 body=186 status=ok
// SIG undefined FUN_140f19608(void)

undefined8 * FUN_140f19608(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_140f196c2();
  *param_1 = &PTR_FUN_14b2be140;
  param_1[6] = &PTR_FUN_14b2be430;
  *(undefined1 *)(param_1 + 0x46) = 1;
  *(undefined4 *)((longlong)param_1 + 0x234) = 10;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0x3f8000003f000000;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  *(undefined4 *)(param_1 + 0x4e) = 0x4fc71eb4;
  param_1[0x4f] = 0;
  *(undefined1 *)(param_1 + 0x50) = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0x3ecccccd42c80000;
  uVar1 = DAT_14c8464e8;
  param_1[0x55] = DAT_14c8464e0;
  param_1[0x56] = uVar1;
  param_1[0x57] = DAT_14c8464f0;
  return param_1;
}



// FUNCTION 140f196c2 FUN_140f196c2 body=157 status=ok
// SIG undefined FUN_140f196c2(void)

undefined8 * FUN_140f196c2(undefined8 *param_1)

{
  FUN_14076ffa2();
  *param_1 = &PTR_FUN_14b2bd500;
  *(undefined2 *)(param_1 + 0x13) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0xf00000d000000000;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0x1ffffffff;
  *(undefined1 *)(param_1 + 0x1a) = 0;
  param_1[0x14] = DAT_14cb8ce08;
  *param_1 = &PTR_FUN_14b2ba5b0;
  param_1[6] = &PTR_LAB_14b2ba8a0;
  FUN_1406d2124(param_1 + 0x1b);
  param_1[0x45] = 0;
  return param_1;
}



// FUNCTION 140f19760 FUN_140f19760 body=2121 status=ok
// SIG undefined FUN_140f19760(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_140f19760(longlong *param_1,uint *param_2,undefined8 param_3,double *param_4,double *param_5,
             float param_6,undefined4 param_7,undefined4 param_8,char param_9)

{
  double dVar1;
  double dVar2;
  double dVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  char cVar10;
  char cVar11;
  float fVar12;
  uint uVar13;
  int iVar14;
  undefined8 uVar15;
  longlong lVar16;
  longlong lVar17;
  longlong *plVar18;
  double dVar19;
  double dVar20;
  float fVar21;
  undefined1 auStack_2d8 [32];
  double *local_2b8;
  float local_2b0;
  undefined4 *local_2a8;
  undefined8 *local_2a0;
  undefined8 *local_298;
  double local_288;
  double local_280;
  double local_278;
  undefined1 local_270 [4];
  float local_26c;
  undefined4 local_1cc;
  undefined4 local_1a0;
  double local_170;
  double local_168;
  double local_160;
  undefined4 local_158;
  float local_154;
  float local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined1 local_110;
  undefined2 local_10f;
  undefined1 local_10d;
  undefined4 local_10c;
  undefined1 local_108;
  undefined4 local_104;
  undefined1 local_100;
  undefined4 local_fc;
  undefined2 local_f8;
  longlong local_d0;
  undefined8 local_c8;
  longlong local_b0;
  undefined8 local_a8;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_2d8;
  cVar11 = (**(code **)(*param_1 + 0x600))();
  if (cVar11 == '\0') {
LAB_140f19f16:
    uVar15 = 0;
    goto LAB_140f19971;
  }
  if (((((((param_6 == 0.0) && (!NAN(param_6))) && (param_9 != '\0')) &&
        ((*param_4 == 0.0 && (!NAN(*param_4))))) && (param_4[1] == 0.0)) &&
      (((!NAN(param_4[1]) && (param_4[2] == 0.0)) &&
       ((!NAN(param_4[2]) &&
        ((((double)param_1[0x71] == 0.0 && (!NAN((double)param_1[0x71]))) &&
         ((double)param_1[0x72] == 0.0)))))))) &&
     (((!NAN((double)param_1[0x72]) && ((double)param_1[0x73] == 0.0)) &&
      ((!NAN((double)param_1[0x73]) && ((~*param_2 & 3) != 0)))))) {
    lVar16 = param_1[0x22];
    if ((*param_5 == *(double *)(lVar16 + 0x260)) &&
       (!NAN(*param_5) && !NAN(*(double *)(lVar16 + 0x260)))) {
      if ((param_5[1] == *(double *)(lVar16 + 0x268)) &&
         (!NAN(param_5[1]) && !NAN(*(double *)(lVar16 + 0x268)))) {
        if (((((param_5[2] == *(double *)(lVar16 + 0x270)) &&
              (!NAN(param_5[2]) && !NAN(*(double *)(lVar16 + 0x270)))) && (param_2[0x3b] != 0)) &&
            (((uVar13 = param_2[0x3a], -1 < (int)uVar13 && ((int)uVar13 < DAT_14c9647dc)) &&
             (plVar18 = (longlong *)
                        ((ulonglong)((uVar13 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar13 >> 0x10) * 8)),
             plVar18 != (longlong *)0x0)))) &&
           (((*(uint *)(plVar18 + 2) == param_2[0x3b] &&
             ((*(uint *)(plVar18 + 1) & 0x10200000) == 0)) &&
            ((plVar18 = (longlong *)*plVar18, plVar18 != (longlong *)0x0 &&
             ((uVar13 = (**(code **)(*plVar18 + 0x570))(plVar18), uVar13 < 6 &&
              ((0x2aU >> (uVar13 & 0x1f) & 1) != 0)))))))) {
          iVar14 = (**(code **)(*plVar18 + 0x578))(plVar18,2);
          uVar15 = 1;
          if (iVar14 == 2) goto LAB_140f19971;
        }
      }
    }
  }
  lVar16 = 1;
  if (param_9 == '\0') {
    if (param_1[0x62e] == 0) {
      if ((char)param_1[0x696] == '\x01') {
        plVar18 = param_1 + 0x642;
        goto LAB_140f199f3;
      }
    }
    else {
      plVar18 = (longlong *)(param_1[0x62e] + 0xd8);
LAB_140f199f3:
      lVar16 = FUN_140153468(plVar18);
      if ((((lVar16 != 0) && ((*(byte *)(plVar18 + 0x53) & 2) == 0)) && (param_1[0x22] != 0)) &&
         (((*param_4 != 0.0 || (NAN(*param_4))) ||
          (((param_4[1] != 0.0 || ((NAN(param_4[1]) || (param_4[2] != 0.0)))) || (NAN(param_4[2]))))
          ))) {
        if (param_1[0x62e] == 0) {
          if ((char)param_1[0x696] == '\x01') {
            plVar18 = param_1 + 0x642;
            goto LAB_140f19a58;
          }
          lVar17 = 0;
        }
        else {
          plVar18 = (longlong *)(param_1[0x62e] + 0xd8);
LAB_140f19a58:
          lVar17 = FUN_140153468(plVar18);
        }
        if (*(char *)(lVar17 + 0x558) != '\0') {
          lVar16 = 0;
          if (*(float *)(lVar17 + 0x55c) <= 0.0) goto LAB_140f19936;
          local_fc = 0;
          local_f8 = 0x101;
          local_d0 = 0;
          local_c8 = 0x800000000;
          local_b0 = 0;
          local_a8 = 0x400000000;
          local_110 = 0;
          local_104 = 0;
          local_120 = 0;
          uStack_118 = 0;
          local_10f = 1;
          local_10d = 0;
          local_100 = 0;
          local_10c = 0x1000000;
          local_108 = 1;
          FUN_144a85a22(&local_120,param_1[0x3e]);
          local_138 = _DAT_14cad0ee0;
          uStack_130 = uRam000000014cad0ee8;
          local_148 = _DAT_14cad0ed0;
          uStack_140 = _DAT_14cad0ed8;
          do {
            cVar11 = *(char *)((longlong)&uStack_140 + lVar16 + 6);
            cVar10 = *(char *)((longlong)&uStack_140 + lVar16 + 7);
            bVar4 = *(char *)((longlong)&local_148 + lVar16) == DAT_149c360b0;
            bVar5 = *(char *)((longlong)&local_148 + lVar16 + 1) == DAT_149c360b0._1_1_;
            bVar6 = *(char *)((longlong)&local_148 + lVar16 + 2) == DAT_149c360b0._2_1_;
            bVar7 = *(char *)((longlong)&local_148 + lVar16 + 3) == DAT_149c360b0._3_1_;
            bVar8 = *(char *)((longlong)&local_148 + lVar16 + 4) == DAT_149c360b0._4_1_;
            bVar9 = *(char *)((longlong)&local_148 + lVar16 + 5) == DAT_149c360b0._5_1_;
            if ((bool)(~bVar4 & 1)) {
              *(undefined1 *)((longlong)&local_148 + lVar16) = 2;
            }
            if ((bool)(~bVar5 & 1)) {
              *(undefined1 *)((longlong)&local_148 + lVar16 + 1) = 2;
            }
            if ((bool)(~bVar6 & 1)) {
              *(undefined1 *)((longlong)&local_148 + lVar16 + 2) = 2;
            }
            if ((bool)(~bVar7 & 1)) {
              *(undefined1 *)((longlong)&local_148 + lVar16 + 3) = 2;
            }
            if ((bool)(~bVar8 & 1)) {
              *(undefined1 *)((longlong)&local_148 + lVar16 + 4) = 2;
            }
            if ((bool)(~bVar9 & 1)) {
              *(undefined1 *)((longlong)&local_148 + lVar16 + 5) = 2;
            }
            if ((bool)(~(*(char *)((longlong)&local_148 + lVar16 + 6) == DAT_149c360b0._6_1_) & 1))
            {
              *(undefined1 *)((longlong)&local_148 + lVar16 + 6) = 2;
            }
            if ((bool)(~(*(char *)((longlong)&local_148 + lVar16 + 7) == DAT_149c360b0._7_1_) & 1))
            {
              *(undefined1 *)((longlong)&local_148 + lVar16 + 7) = 2;
            }
            if ((bool)(~bVar4 & 1)) {
              *(undefined1 *)((longlong)&uStack_140 + lVar16) = 2;
            }
            if ((bool)(~bVar5 & 1)) {
              *(undefined1 *)((longlong)&uStack_140 + lVar16 + 1) = 2;
            }
            if ((bool)(~bVar6 & 1)) {
              *(undefined1 *)((longlong)&uStack_140 + lVar16 + 2) = 2;
            }
            if ((bool)(~bVar7 & 1)) {
              *(undefined1 *)((longlong)&uStack_140 + lVar16 + 3) = 2;
            }
            if ((bool)(~bVar8 & 1)) {
              *(undefined1 *)((longlong)&uStack_140 + lVar16 + 4) = 2;
            }
            if ((bool)(~bVar9 & 1)) {
              *(undefined1 *)((longlong)&uStack_140 + lVar16 + 5) = 2;
            }
            if ((bool)(~(cVar11 == DAT_149c360b0._14_1_) & 1)) {
              *(undefined1 *)((longlong)&uStack_140 + lVar16 + 6) = 2;
            }
            if ((bool)(~(cVar10 == DAT_149c360b0._15_1_) & 1)) {
              *(undefined1 *)((longlong)&uStack_140 + lVar16 + 7) = 2;
            }
            lVar16 = lVar16 + 0x10;
          } while (lVar16 != 0x20);
          (**(code **)(*param_1 + 0x4d8))(param_1,&local_120,&local_148);
          lVar16 = *(longlong *)(param_1[0x3e] + 0x438);
          dVar1 = *(double *)(lVar16 + 0x280);
          if (*(double *)(lVar16 + 0x288) <= *(double *)(lVar16 + 0x280)) {
            dVar1 = *(double *)(lVar16 + 0x288);
          }
          fVar21 = (float)dVar1 * *(float *)(lVar16 + 0x644);
          local_150 = (float)*(double *)(lVar16 + 0x290) * *(float *)(lVar16 + 0x640);
          local_158 = 3;
          local_154 = fVar21;
          fVar12 = (float)(**(code **)(*(longlong *)param_1[0x22] + 0x580))();
          lVar16 = param_1[0x22];
          dVar1 = *param_4;
          dVar2 = param_4[1];
          dVar3 = param_4[2];
          dVar20 = 1.0 / SQRT(dVar3 * dVar3 + dVar1 * dVar1 + dVar2 * dVar2);
          dVar19 = (double)fVar21;
          dVar3 = dVar3 * dVar20 * dVar19 + *(double *)(lVar16 + 0x270);
          dVar2 = dVar2 * dVar20 * dVar19 + *(double *)(lVar16 + 0x268);
          dVar1 = dVar20 * dVar1 * dVar19 + *(double *)(lVar16 + 0x260);
          local_170 = dVar1;
          local_168 = dVar2;
          local_160 = dVar3;
          memset(local_270,0,0x100);
          local_1a0 = 0xffffffff;
          local_1cc = 0xffffffff;
          local_26c = 1.0;
          lVar16 = param_1[0x16];
          if (lVar16 == 0) {
            lVar16 = FUN_1448abda6(param_1);
          }
          dVar20 = (double)(*(float *)((longlong)param_1 + 0x1fc) + *(float *)(lVar17 + 0x55c));
          local_278 = dVar3 - DAT_14c8462d0 * dVar20;
          local_280 = dVar2 - DAT_14c8462c8 * dVar20;
          local_288 = dVar1 - dVar20 * DAT_14c8462c0;
          local_298 = &local_148;
          local_2a0 = &local_120;
          local_2a8 = &local_158;
          local_2b8 = (double *)&DAT_14c8463d0;
          local_2b0 = fVar12;
          FUN_14021655c(lVar16,local_270,&local_170);
          if (param_1[0x62e] == 0) {
            bVar4 = true;
            if ((char)param_1[0x696] == '\x01') {
              plVar18 = param_1 + 0x642;
              goto LAB_140f19eb5;
            }
          }
          else {
            plVar18 = (longlong *)(param_1[0x62e] + 0xd8);
LAB_140f19eb5:
            if (local_26c < 1.0) {
              cVar11 = (**(code **)(*param_1 + 0x878))(param_1,local_270);
              bVar4 = true;
              if (cVar11 != '\0') goto LAB_140f19ee6;
            }
            FUN_143cf50dc(plVar18);
            bVar4 = false;
          }
LAB_140f19ee6:
          if (local_b0 != 0) {
            FUN_1400020a8();
          }
          if (local_d0 != 0) {
            FUN_1400020a8();
          }
          lVar16 = 1;
          if (!bVar4) goto LAB_140f19f16;
          goto LAB_140f19936;
        }
      }
    }
    lVar16 = 0;
  }
LAB_140f19936:
  local_298 = (undefined8 *)CONCAT71(local_298._1_7_,(char)lVar16);
  local_2a0 = (undefined8 *)CONCAT44(local_2a0._4_4_,param_8);
  local_2a8 = (undefined4 *)CONCAT44(local_2a8._4_4_,param_7);
  local_2b0 = param_6;
  local_2b8 = param_5;
  uVar15 = FUN_140f19faa(param_1,param_2,param_3,param_4);
LAB_140f19971:
  if ((local_a0 ^ (ulonglong)auStack_2d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar15;
}



// FUNCTION 140f19faa FUN_140f19faa body=211 status=ok
// SIG undefined FUN_140f19faa(void)

ulonglong FUN_140f19faa(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                       char param_9)

{
  char cVar1;
  ulonglong uVar2;
  undefined8 in_stack_ffffffffffffffb8;
  undefined4 uVar3;
  
  uVar3 = (undefined4)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
  cVar1 = (**(code **)(*param_1 + 0x600))();
  if (cVar1 == '\0') {
LAB_140f1a079:
    uVar2 = 0;
  }
  else {
    if (param_9 == '\0') {
      cVar1 = (**(code **)(*param_1 + 0x870))(param_1);
      if (cVar1 == '\0') goto LAB_140f1a079;
    }
    (**(code **)(*param_1 + 0x628))
              (param_1,param_2 + 0x68,param_2 + 0x50,param_5,CONCAT44(uVar3,param_7));
    cVar1 = (**(code **)(param_1[0x2f] + 0xe0))(param_1 + 0x2f);
    uVar2 = CONCAT71((int7)((ulonglong)(param_2 + 0x68) >> 8),1);
    if (cVar1 != '\0') {
      (**(code **)(*param_1 + 0x618))(param_1,param_8,param_6,param_7,param_4,param_5);
    }
  }
  return uVar2 & 0xffffffff;
}



// FUNCTION 140f1a090 FUN_140f1a090 body=246 status=ok
// SIG undefined FUN_140f1a090(void)

void FUN_140f1a090(longlong *param_1,undefined8 *param_2,undefined8 *param_3,undefined4 *param_4,
                  undefined4 param_5)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar1 = FUN_14477b072(param_1,DAT_14cacf768);
  lVar2 = FUN_14570ab3e(uVar1);
  if ((*(byte *)(lVar2 + 0xd4) & 0x80) == 0) {
    local_88 = param_2[2];
    local_98 = *param_2;
    uStack_90 = param_2[1];
    local_80 = *param_3;
    uStack_78 = param_3[1];
    local_70 = param_3[2];
    local_58 = *(undefined8 *)(param_4 + 4);
    local_68 = *param_4;
    uStack_64 = param_4[1];
    uStack_60 = param_4[2];
    uStack_5c = param_4[3];
    local_50 = param_5;
    (**(code **)(*param_1 + 0x248))(param_1,uVar1);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_b8);
  }
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x000140f1a127. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x850))(param_1,param_2,param_3,param_4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f1a1a0 FUN_140f1a1a0 body=212 status=ok
// SIG undefined FUN_140f1a1a0(void)

void FUN_140f1a1a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6)

{
  undefined1 auStack_138 [32];
  undefined8 *local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined1 local_f8 [96];
  undefined1 local_98 [88];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if ((*(byte *)(param_6 + 0x374) & 4) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_138);
  }
  local_110 = 0x3ff0000000000000;
  local_108 = 0;
  uStack_100 = 0;
  FUN_1449437a2(param_4,local_f8,param_2);
  local_118 = &local_110;
  FUN_146d14316(local_98,param_1,param_3,local_f8);
  FUN_146d0d32b(param_6,local_98);
  if ((local_40 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f1cdb1 FUN_140f1cdb1 body=1914 status=ok
// SIG undefined FUN_140f1cdb1(void)

longlong FUN_140f1cdb1(longlong param_1,longlong param_2,double *param_3,int param_4,int param_5,
                      double *param_6,longlong param_7,longlong param_8,uint *param_9)

{
  double dVar1;
  double dVar2;
  double dVar3;
  char cVar4;
  short sVar5;
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
  short sVar17;
  uint uVar18;
  ulonglong uVar19;
  int iVar20;
  double *pdVar21;
  longlong lVar22;
  longlong lVar23;
  longlong lVar24;
  ulonglong uVar25;
  bool bVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  
  sVar5 = *(short *)(DAT_14c992a40 + 2 + (longlong)param_5 * 4);
  sVar17 = 0x20;
  if (sVar5 < 0x20) {
    sVar17 = sVar5;
  }
  uVar19 = (ulonglong)(uint)(int)sVar17;
  *param_9 = (int)sVar17;
  if (0 < sVar5) {
    pdVar21 = (double *)(param_7 + 0x10);
    lVar15 = 0;
    do {
      dVar27 = *(double *)(param_2 + 0x48) - *(double *)(param_2 + 0x30);
      lVar24 = (longlong)
               *(short *)(DAT_14c992a50 + 2 +
                         (longlong)
                         ((int)*(short *)(DAT_14c992a40 + (longlong)param_5 * 4) + (int)lVar15) * 6)
      ;
      dVar29 = *(double *)(param_2 + 0x40) - *(double *)(param_2 + 0x28);
      dVar34 = *(double *)(param_2 + 0x38) - *(double *)(param_2 + 0x20);
      dVar28 = dVar27 * *(double *)(DAT_14c992a20 + 0x10 + lVar24 * 0x18) * 0.5 +
               dVar27 * 0.5 + *(double *)(param_2 + 0x30);
      dVar30 = dVar29 * *(double *)(DAT_14c992a20 + 8 + lVar24 * 0x18) * 0.5 +
               dVar29 * 0.5 + *(double *)(param_2 + 0x28);
      dVar35 = dVar34 * *(double *)(DAT_14c992a20 + lVar24 * 0x18) * 0.5 +
               dVar34 * 0.5 + *(double *)(param_2 + 0x20);
      dVar7 = *param_3;
      dVar8 = param_3[1];
      dVar9 = param_3[2];
      dVar36 = dVar35 * dVar9 - dVar7 * dVar28;
      dVar31 = dVar30 * dVar7 - dVar8 * dVar35;
      dVar33 = dVar28 * dVar8 - dVar9 * dVar30;
      dVar29 = param_3[3];
      dVar27 = param_3[3];
      dVar33 = dVar33 + dVar33;
      dVar36 = dVar36 + dVar36;
      dVar31 = dVar31 + dVar31;
      dVar3 = param_3[5];
      dVar34 = param_3[6];
      pdVar21[-2] = (dVar31 * dVar8 - dVar36 * dVar9) + dVar29 * dVar33 + dVar35 + param_3[4];
      pdVar21[-1] = (dVar9 * dVar33 - dVar7 * dVar31) + dVar27 * dVar36 + dVar30 + dVar3;
      *pdVar21 = dVar31 * dVar29 + dVar28 + (dVar36 * dVar7 - dVar33 * dVar8) + dVar34;
      lVar15 = lVar15 + 1;
      uVar19 = (ulonglong)(int)*param_9;
      pdVar21 = pdVar21 + 3;
    } while (lVar15 < (longlong)uVar19);
  }
  plVar6 = *(longlong **)(param_1 + 0x58);
  if (plVar6 != (longlong *)0x0) {
    cVar4 = *(char *)(param_1 + 0x60);
    if (cVar4 == '\x01') {
      uVar14 = (ulonglong)*(byte *)(*plVar6 + 1 + (longlong)param_4 * 2);
      uVar18 = (uint)*(byte *)(plVar6[2] + -2 +
                              (*(byte *)(*plVar6 + (longlong)param_4 * 2) + uVar14) * 3);
    }
    else if (cVar4 == '\x02') {
      uVar14 = (ulonglong)*(short *)(*plVar6 + 2 + (longlong)param_4 * 4);
      uVar18 = (uint)*(short *)(plVar6[2] + -4 +
                               ((longlong)*(short *)(*plVar6 + (longlong)param_4 * 4) + uVar14) * 6)
      ;
    }
    else {
      if (cVar4 != '\x03') {
        return param_7;
      }
      uVar14 = (ulonglong)*(int *)(*plVar6 + 4 + (longlong)param_4 * 8);
      uVar18 = *(uint *)(plVar6[2] + -8 +
                        ((longlong)*(int *)(*plVar6 + (longlong)param_4 * 8) + uVar14) * 0xc);
    }
    if ((1 < (uint)uVar19) && (0 < (int)uVar14)) {
      lVar13 = (longlong)(int)uVar18;
      lVar15 = *(longlong *)(param_1 + 0x30);
      lVar22 = (longlong)param_4;
      iVar20 = 0;
      lVar24 = param_8;
      lVar23 = param_7;
      dVar27 = (double)*(float *)(lVar15 + lVar13 * 0xc);
      dVar29 = (double)*(float *)(lVar15 + 4 + lVar13 * 0xc);
      dVar34 = (double)*(float *)(lVar15 + 8 + lVar13 * 0xc);
      do {
        param_7 = lVar24;
        plVar6 = *(longlong **)(param_1 + 0x58);
        uVar18 = 0xffffffff;
        if (plVar6 != (longlong *)0x0) {
          cVar4 = *(char *)(param_1 + 0x60);
          if (cVar4 == '\x01') {
            uVar18 = (uint)*(byte *)(plVar6[2] + 1 +
                                    (ulonglong)((uint)*(byte *)(*plVar6 + lVar22 * 2) + iVar20) * 3)
            ;
          }
          else if (cVar4 == '\x02') {
            uVar18 = (uint)*(short *)(plVar6[2] + 2 +
                                     ((longlong)iVar20 + (longlong)*(short *)(*plVar6 + lVar22 * 4))
                                     * 6);
          }
          else if (cVar4 == '\x03') {
            uVar18 = *(uint *)(plVar6[2] + 4 +
                              ((longlong)iVar20 + (longlong)*(int *)(*plVar6 + lVar22 * 8)) * 0xc);
          }
        }
        lVar15 = *(longlong *)(param_1 + 0x30);
        lVar24 = (longlong)(int)uVar18;
        dVar7 = (double)*(float *)(lVar15 + 8 + lVar24 * 0xc);
        dVar8 = (double)*(float *)(lVar15 + 4 + lVar24 * 0xc);
        dVar9 = (double)*(float *)(lVar15 + lVar24 * 0xc);
        dVar3 = *param_6 * (dVar29 - dVar8) - (dVar27 - dVar9) * param_6[1];
        dVar28 = (dVar27 - dVar9) * param_6[2] - (dVar34 - dVar7) * *param_6;
        dVar34 = param_6[1] * (dVar34 - dVar7) - (dVar29 - dVar8) * param_6[2];
        dVar31 = dVar3 * dVar3 + dVar34 * dVar34 + dVar28 * dVar28;
        dVar30 = SQRT(dVar31);
        dVar29 = 0.0;
        dVar27 = 0.0;
        if (9.999999747378752e-05 <= dVar31) {
          dVar27 = dVar3 / dVar30;
          dVar29 = dVar28 / dVar30;
        }
        dVar33 = (double)(-(ulonglong)(dVar31 < 9.999999747378752e-05) & 0x3ff0000000000000 |
                         ~-(ulonglong)(dVar31 < 9.999999747378752e-05) &
                         (ulonglong)(dVar34 / dVar30));
        dVar30 = dVar7 * dVar27 + dVar9 * dVar33 + dVar29 * dVar8;
        dVar31 = dVar30 * 9.99999993922529e-09 + dVar30;
        uVar16 = (ulonglong)((int)uVar19 - 1);
        dVar34 = *(double *)(lVar23 + 0x10 + uVar16 * 0x18);
        dVar3 = *(double *)(lVar23 + uVar16 * 0x18);
        dVar28 = *(double *)(lVar23 + 8 + uVar16 * 0x18);
        uVar16 = uVar19 & 0xffffffff;
        uVar19 = 0;
        lVar15 = 0;
        dVar36 = dVar34 * dVar27 + dVar33 * dVar3 + dVar28 * dVar29;
LAB_140f1d22e:
        uVar18 = (uint)uVar19;
        dVar35 = *(double *)(lVar23 + lVar15);
        dVar1 = *(double *)(lVar23 + 8 + lVar15);
        dVar2 = *(double *)(lVar23 + 0x10 + lVar15);
        dVar32 = dVar2 * dVar27 + dVar35 * dVar33 + dVar29 * dVar1;
        if (dVar31 < dVar32) {
          if (dVar36 < dVar31) {
            dVar10 = dVar34;
            dVar11 = dVar3;
            dVar12 = dVar28;
            if (9.99999993922529e-09 <= ABS(dVar32 - dVar36)) {
              dVar36 = (dVar30 - dVar36) / (dVar32 - dVar36);
              dVar10 = dVar34 + (dVar2 - dVar34) * dVar36;
              dVar11 = dVar3 + (dVar35 - dVar3) * dVar36;
              dVar12 = dVar28 + (dVar1 - dVar28) * dVar36;
            }
            goto LAB_140f1d286;
          }
          goto LAB_140f1d2a3;
        }
        dVar10 = dVar2;
        dVar11 = dVar35;
        dVar12 = dVar1;
        if (dVar36 <= dVar31) {
LAB_140f1d286:
          uVar25 = (ulonglong)uVar18;
          uVar19 = (ulonglong)(uVar18 + 1);
          *(double *)(param_7 + uVar25 * 0x18) = dVar11;
          *(double *)(param_7 + 8 + uVar25 * 0x18) = dVar12;
          *(double *)(param_7 + 0x10 + uVar25 * 0x18) = dVar10;
LAB_140f1d2a3:
          if ((0x1f < (uint)uVar19) ||
             (bVar26 = uVar16 * 0x18 + -0x18 == lVar15, lVar15 = lVar15 + 0x18, dVar36 = dVar32,
             dVar3 = dVar35, dVar28 = dVar1, dVar34 = dVar2, bVar26)) goto LAB_140f1d3ee;
          goto LAB_140f1d22e;
        }
        if (9.99999993922529e-09 <= ABS(dVar32 - dVar36)) {
          dVar36 = (dVar30 - dVar36) / (dVar32 - dVar36);
          dVar34 = dVar34 + (dVar2 - dVar34) * dVar36;
          dVar28 = dVar28 + (dVar1 - dVar28) * dVar36;
          dVar3 = dVar3 + (dVar35 - dVar3) * dVar36;
        }
        *(double *)(param_7 + uVar19 * 0x18) = dVar3;
        *(double *)(param_7 + 8 + uVar19 * 0x18) = dVar28;
        *(double *)(param_7 + 0x10 + uVar19 * 0x18) = dVar34;
        if (uVar18 < 0x1f) {
          uVar18 = uVar18 + 1;
          goto LAB_140f1d286;
        }
        uVar19 = 0x20;
LAB_140f1d3ee:
        *param_9 = (uint)uVar19;
        iVar20 = iVar20 + 1;
      } while ((iVar20 < (int)uVar14) &&
              (lVar24 = lVar23, lVar23 = param_7, dVar27 = dVar9, dVar29 = dVar8, dVar34 = dVar7,
              1 < (uint)uVar19));
    }
  }
  return param_7;
}



// FUNCTION 140f1d52c FUN_140f1d52c body=288 status=ok
// SIG undefined FUN_140f1d52c(void)

undefined8 FUN_140f1d52c(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

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
    if (iVar1 == 2) goto LAB_140f1d645;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_140f1d645;
    }
    FUN_1400841de(param_1 + 0x18,&local_40);
  }
  else {
LAB_140f1d645:
    local_40 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_140f1d5f7;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5,param_2,param_3,param_4);
      uVar6 = 1;
      goto LAB_140f1d5f7;
    }
  }
  uVar6 = 0;
LAB_140f1d5f7:
  if (local_40 != 0) {
    FUN_140113f3a(local_40);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f1d672 FUN_140f1d672 body=105 status=ok
// SIG undefined FUN_140f1d672(void)

void FUN_140f1d672(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1400021e4(param_3,local_30);
  (**(code **)(*param_1 + 0x88))(param_1,param_2,local_30);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f1d6dc FUN_140f1d6dc body=1657 status=ok
// SIG undefined FUN_140f1d6dc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_140f1d6dc(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined8 *puVar4;
  bool bVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong lVar15;
  undefined1 auStack_98 [40];
  longlong *local_70;
  longlong local_68;
  undefined8 uStack_60;
  longlong *local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar15 = *(longlong *)(param_1 + 0x50);
  if (lVar15 == 0) {
LAB_140f1d723:
    *param_2 = 0;
    param_2[1] = 0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_98);
  }
  puVar4 = (undefined8 *)*param_3;
  lVar6 = FUN_140f1dd56();
  if ((((lVar6 == 0) || (*(int *)(lVar15 + 0x38) < *(int *)(lVar6 + 0x38))) ||
      (*(longlong *)(*(longlong *)(lVar15 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) !=
       lVar6 + 0x30)) || (plVar14 = (longlong *)(param_1 + 0x50), *plVar14 == 0))
  goto LAB_140f1d723;
  lVar15 = (longlong)*(int *)(*(longlong *)*puVar4 + 0x70);
  if (lVar15 != 0) {
    plVar13 = *(longlong **)(*(longlong *)*puVar4 + 0x68);
    lVar15 = lVar15 << 4;
    do {
      lVar6 = *plVar13;
      lVar8 = *(longlong *)(lVar6 + 0x30);
      if (((lVar8 == 0) || (lVar7 = FUN_140f1dd56(), lVar7 == 0)) ||
         ((*(int *)(lVar8 + 0x38) < *(int *)(lVar7 + 0x38) ||
          (*(longlong *)(*(longlong *)(lVar8 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) !=
           lVar7 + 0x30)))) {
        lVar6 = 0;
      }
      else {
        lVar6 = *(longlong *)(lVar6 + 0x30);
      }
      lVar8 = *plVar14;
      if (((lVar8 == 0) || (lVar7 = FUN_140f1dd56(), lVar7 == 0)) ||
         ((*(int *)(lVar8 + 0x38) < *(int *)(lVar7 + 0x38) ||
          (*(longlong *)(*(longlong *)(lVar8 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) !=
           lVar7 + 0x30)))) {
        lVar8 = 0;
      }
      else {
        lVar8 = *plVar14;
      }
      if (lVar6 == lVar8) {
        if (plVar13 != (longlong *)0x0) {
          plVar12 = (longlong *)*plVar13;
          plVar13 = (longlong *)plVar13[1];
          if (plVar13 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
            UNLOCK();
          }
          if (plVar12 != (longlong *)0x0) goto LAB_140f1d9f8;
          goto LAB_140f1d81a;
        }
        break;
      }
      plVar13 = plVar13 + 2;
      lVar15 = lVar15 + -0x10;
    } while (lVar15 != 0);
  }
  plVar13 = (longlong *)0x0;
LAB_140f1d81a:
  iVar2 = *(int *)(*(longlong *)*puVar4 + 0x1c);
  if ((((iVar2 == 0) || (uVar3 = *(uint *)(*(longlong *)*puVar4 + 0x18), (int)uVar3 < 0)) ||
      (DAT_14c9647dc <= (int)uVar3)) ||
     (((plVar12 = (longlong *)
                  ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
       plVar12 == (longlong *)0x0 || ((int)plVar12[2] != iVar2)) ||
      (((*(uint *)(plVar12 + 1) & 0x10200000) != 0 || (lVar15 = *plVar12, lVar15 == 0)))))) {
    local_68 = 0;
    uStack_60 = 0;
  }
  else {
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(lVar15);
    }
    local_68 = lVar15;
    uVar9 = FUN_140eca14a();
    uStack_60 = FUN_144718840(lVar15,uVar9);
  }
  plVar10 = (longlong *)FUN_14001cc68(0x120,0x10);
  plVar10[1] = (longlong)&DAT_100000001;
  *plVar10 = (longlong)&PTR_FUN_14b430d20;
  plVar12 = plVar10 + 2;
  FUN_140f1ded6(plVar12,&local_68,plVar14);
  local_58 = plVar12;
  local_50 = plVar10;
  FUN_140f1de34(&local_58,plVar12);
  lVar15 = *(longlong *)*puVar4;
  iVar2 = *(int *)(lVar15 + 0x70);
  *(uint *)(lVar15 + 0x70) = iVar2 + 1U;
  if (*(uint *)(lVar15 + 0x74) < iVar2 + 1U) {
    FUN_140f1e286((longlong *)(lVar15 + 0x68),iVar2);
  }
  plVar14 = local_50;
  plVar12 = local_58;
  lVar15 = *(longlong *)(lVar15 + 0x68);
  *(longlong **)(lVar15 + (longlong)iVar2 * 0x10) = local_58;
  *(longlong **)(lVar15 + 8 + (longlong)iVar2 * 0x10) = local_50;
  if (local_50 == (longlong *)0x0) {
    plVar10 = (longlong *)0x0;
LAB_140f1d99d:
    if (plVar13 != (longlong *)0x0) {
LAB_140f1d9a2:
      LOCK();
      plVar14 = plVar13 + 1;
      *(int *)plVar14 = (int)*plVar14 + -1;
      UNLOCK();
      if ((int)*plVar14 == 0) {
        (**(code **)*plVar13)(plVar13);
        LOCK();
        piVar1 = (int *)((longlong)plVar13 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        UNLOCK();
        goto joined_r0x000140f1d984;
      }
    }
LAB_140f1d9c5:
    plVar13 = plVar10;
    plVar14 = local_50;
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar10 = local_50 + 1;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)*plVar10 == 0) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar1 = (int *)((longlong)plVar14 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar14 + 0x10))(plVar14);
        }
      }
    }
    if (plVar12 != (longlong *)0x0) {
LAB_140f1d9f8:
      if (plVar13 == (longlong *)0x0) goto LAB_140f1dc0b;
      LOCK();
      *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
      UNLOCK();
      bVar5 = false;
      local_70 = plVar13;
      goto LAB_140f1da0c;
    }
    *param_2 = 0;
    param_2[1] = 0;
    if (plVar13 == (longlong *)0x0) goto LAB_140f1db7e;
  }
  else {
    LOCK();
    *(int *)(local_50 + 1) = (int)local_50[1] + 1;
    UNLOCK();
    if (local_50 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_50 + 1) = (int)local_50[1] + 1;
      UNLOCK();
      plVar10 = local_50;
      if (local_50 != plVar13) goto LAB_140f1d99d;
      LOCK();
      plVar11 = local_50 + 1;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      plVar10 = plVar13;
      if ((int)*plVar11 != 0) goto LAB_140f1d9c5;
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar1 = (int *)((longlong)plVar14 + 0xc);
      *piVar1 = *piVar1 + -1;
      iVar2 = *piVar1;
      UNLOCK();
      plVar13 = plVar14;
joined_r0x000140f1d984:
      if (iVar2 == 0) {
        (**(code **)(*plVar13 + 0x10))();
      }
      goto LAB_140f1d9c5;
    }
    if (plVar13 != (longlong *)0x0) {
      plVar10 = (longlong *)0x0;
      goto LAB_140f1d9a2;
    }
    if (local_58 == (longlong *)0x0) {
      *param_2 = 0;
      param_2[1] = 0;
      goto LAB_140f1db7e;
    }
LAB_140f1dc0b:
    bVar5 = true;
    local_70 = (longlong *)0x0;
LAB_140f1da0c:
    lVar15 = param_3[1];
    plVar14 = *(longlong **)*param_3;
    plVar10 = (longlong *)FUN_14001cc68(0x88,0x10);
    plVar13 = local_70;
    plVar10[1] = (longlong)&DAT_100000001;
    *plVar10 = (longlong)&PTR_FUN_14b430320;
    if (!bVar5) {
      LOCK();
      *(int *)(local_70 + 1) = (int)local_70[1] + 1;
      UNLOCK();
    }
    plVar10[3] = 0;
    plVar10[4] = 0;
    plVar10[2] = (longlong)&PTR_LAB_14b3ef590;
    plVar10[5] = *plVar14;
    lVar6 = plVar14[1];
    plVar10[6] = lVar6;
    if (lVar6 != 0) {
      LOCK();
      *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
      UNLOCK();
    }
    plVar10[7] = param_3[2];
    lVar6 = param_3[3];
    plVar10[8] = lVar6;
    if (lVar6 != 0) {
      LOCK();
      *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
      UNLOCK();
    }
    plVar14 = plVar10 + 2;
    *(byte *)(plVar10 + 9) = *(byte *)(plVar10 + 9) & 0xf9;
    plVar10[2] = (longlong)&PTR_LAB_14b4303a0;
    plVar10[10] = lVar15;
    plVar10[0xb] = (longlong)&PTR_LAB_14b430d60;
    plVar10[0xc] = (longlong)plVar12;
    plVar10[0xd] = (longlong)local_70;
    if (bVar5) {
      plVar10[0xe] = -1;
      *(undefined1 *)((longlong)plVar10 + 0x7c) = 0;
      plVar10[2] = (longlong)&PTR_FUN_14b430340;
      plVar10[0xb] = (longlong)&PTR_FUN_14b430370;
      plVar10[0x10] = 0;
    }
    else {
      LOCK();
      *(int *)(local_70 + 1) = (int)local_70[1] + 1;
      UNLOCK();
      plVar10[0xe] = -1;
      *(undefined1 *)((longlong)plVar10 + 0x7c) = 0;
      plVar10[2] = (longlong)&PTR_FUN_14b430340;
      plVar10[0xb] = (longlong)&PTR_FUN_14b430370;
      plVar10[0x10] = 0;
      LOCK();
      plVar12 = local_70 + 1;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)*plVar12 == 0) {
        (**(code **)*local_70)(local_70);
        LOCK();
        piVar1 = (int *)((longlong)plVar13 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar13 + 0x10))(plVar13);
        }
      }
    }
    if ((plVar14 == (longlong *)0x0) ||
       (((plVar10[3] != 0 && (plVar10[4] != 0)) && (0 < *(int *)(plVar10[4] + 8))))) {
      *param_2 = (longlong)plVar14;
      param_2[1] = (longlong)plVar10;
      if (plVar10 != (longlong *)0x0) goto LAB_140f1db51;
    }
    else if (plVar10 == (longlong *)0x0) {
      _DAT_00000018 = 0x10;
      plVar12 = (longlong *)&DAT_00000020;
      plVar11 = _DAT_00000020;
      if (_DAT_00000020 != (longlong *)0x0) {
LAB_140f1dce3:
        LOCK();
        piVar1 = (int *)((longlong)plVar11 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar11 + 0x10))();
        }
        *plVar12 = (longlong)plVar10;
        plVar13 = local_70;
        if (plVar10 != (longlong *)0x0) goto LAB_140f1db3f;
      }
      *param_2 = (longlong)plVar14;
      param_2[1] = (longlong)plVar10;
    }
    else {
      LOCK();
      *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
      UNLOCK();
      plVar10[3] = (longlong)plVar14;
      if ((longlong *)plVar10[4] != plVar10) {
        LOCK();
        *(int *)((longlong)plVar10 + 0xc) = *(int *)((longlong)plVar10 + 0xc) + 1;
        UNLOCK();
        if ((longlong *)plVar10[4] != (longlong *)0x0) {
          plVar12 = plVar10 + 4;
          plVar11 = (longlong *)plVar10[4];
          goto LAB_140f1dce3;
        }
        plVar10[4] = (longlong)plVar10;
      }
LAB_140f1db3f:
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
      *param_2 = (longlong)plVar14;
      param_2[1] = (longlong)plVar10;
LAB_140f1db51:
      LOCK();
      *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
      UNLOCK();
      LOCK();
      plVar14 = plVar10 + 1;
      *(int *)plVar14 = (int)*plVar14 + -1;
      UNLOCK();
      if ((int)*plVar14 == 0) {
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
    if (bVar5) goto LAB_140f1db7e;
    LOCK();
    plVar14 = plVar13 + 1;
    *(int *)plVar14 = (int)*plVar14 + -1;
    UNLOCK();
    if ((int)*plVar14 == 0) {
      (**(code **)*plVar13)(plVar13);
      LOCK();
      piVar1 = (int *)((longlong)plVar13 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      plVar13 = local_70;
      if (*piVar1 == 0) {
        (**(code **)(*local_70 + 0x10))(local_70);
      }
    }
  }
  LOCK();
  plVar14 = plVar13 + 1;
  *(int *)plVar14 = (int)*plVar14 + -1;
  UNLOCK();
  if ((int)*plVar14 == 0) {
    (**(code **)*plVar13)(plVar13);
    LOCK();
    piVar1 = (int *)((longlong)plVar13 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
    }
  }
LAB_140f1db7e:
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 140f1dd56 FUN_140f1dd56 body=221 status=ok
// SIG undefined FUN_140f1dd56(void)

longlong FUN_140f1dd56(void)

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
  if (DAT_14c9a58c8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1470d1d6b;
    local_40 = FUN_1462aee73;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/GbxEngine",L"GbxSceneComponentResolver",&DAT_14c9a58c8,&DAT_1470d1d6a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c9a58c8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f1de34 FUN_140f1de34 body=162 status=ok
// SIG undefined FUN_140f1de34(void)

void FUN_140f1de34(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == 0) {
    return;
  }
  if (((*(longlong *)(param_2 + 0x10) != 0) && (*(longlong *)(param_2 + 0x18) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_2 + 0x18) + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *(longlong *)(param_2 + 0x10) = param_2;
    plVar3 = *(longlong **)(param_2 + 0x18);
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *(longlong *)(param_2 + 0x10) = param_2;
    if (*(longlong **)(param_2 + 0x18) == plVar2) goto LAB_140f1de73;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x18);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x18) = plVar2;
      goto LAB_140f1de73;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  *(longlong **)(param_2 + 0x18) = plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_140f1de73:
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
                    /* WARNING: Could not recover jumptable at 0x000140f1ded2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 140f1ded6 FUN_140f1ded6 body=435 status=ok
// SIG undefined FUN_140f1ded6(void)

undefined8 * FUN_140f1ded6(undefined8 *param_1,longlong *param_2,longlong *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  bool bVar5;
  
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = &PTR_LAB_149e668b0;
  *(undefined2 *)(param_1 + 1) = 0;
  FUN_1405bceb4();
  *param_1 = &PTR_FUN_14b430d40;
  param_1[4] = 0;
  param_1[5] = 0;
  if (*param_2 == 0) {
    iVar2 = 0;
  }
  else {
    uVar1 = *(uint *)(*param_2 + 0xc);
    *(uint *)(param_1 + 4) = uVar1;
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
  *(int *)((longlong)param_1 + 0x24) = iVar2;
  lVar4 = 0;
  if (*param_2 != 0) {
    lVar4 = param_2[1];
  }
  param_1[5] = lVar4;
  lVar4 = *param_3;
  param_1[6] = lVar4;
  if ((lVar4 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
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
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xac) = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 2;
  param_1[0x1e] = 0x13f800000;
  *(undefined4 *)(param_1 + 0x1f) = 1;
  *(undefined4 *)((longlong)param_1 + 0xfc) = 1;
  *(undefined4 *)(param_1 + 0x20) = 1;
  *(undefined4 *)((longlong)param_1 + 0x104) = 1;
  *(byte *)(param_1 + 0x21) = *(byte *)(param_1 + 0x21) & 0xf8;
  lVar4 = FUN_140f1e089();
  *(undefined4 *)(param_1 + 0x1e) = *(undefined4 *)(lVar4 + 0x20);
  return param_1;
}



// FUNCTION 140f1e089 FUN_140f1e089 body=508 status=ok
// SIG undefined FUN_140f1e089(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_140f1e089(void)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined4 *puVar7;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  longlong local_30;
  undefined8 uStack_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14cb8c2c0 == (longlong *)0x0) {
    _DAT_14cb8c2d8 = 0;
    DAT_14cb8c2d0 = 0;
    plVar4 = &DAT_14cb8c2d0;
    _DAT_14cb8c2e0 = 0xffffffff;
    _DAT_14cb8c2c8 = &PTR_FUN_14b182080;
    _DAT_14cb8c2e8 = 0x3f800000;
    _DAT_14cb8c2f0 = 0;
    uRam000000014cb8c2f8 = 0;
    DAT_14cb8c2c0 = (longlong *)&DAT_14cb8c2c8;
LAB_140f1e0bc:
    bVar1 = true;
    plVar6 = plVar4;
LAB_140f1e0bf:
    plVar5 = DAT_14cb8c2c0;
    if (*plVar4 == 0) goto LAB_140f1e18b;
    plVar4 = plVar6;
    if (!bVar1) {
      plVar4 = (longlong *)(*plVar6 + 0x30);
    }
    if (*plVar4 == 0) {
      if (((DAT_14c9a1ab0 == 0) || (*plVar6 == 0)) ||
         (plVar4 = (longlong *)FUN_140156428(DAT_14c9a1ab0,*(undefined2 *)(*plVar6 + 0x28)),
         plVar4 == (longlong *)0x0)) goto LAB_140f1e0ec;
      puVar7 = &DAT_14c9485f0;
      if ((undefined4 *)*plVar6 != (undefined4 *)0x0) {
        puVar7 = (undefined4 *)*plVar6;
      }
      cVar2 = (**(code **)(*plVar4 + 0x2a0))(plVar4,plVar5,puVar7);
    }
    else {
      if ((((int)DAT_14cb8c2c0[3] == *(int *)(*plVar4 + 0x44)) || (DAT_14c9a1ab0 == 0)) ||
         ((*plVar6 == 0 ||
          (plVar4 = (longlong *)FUN_140156428(DAT_14c9a1ab0,*(undefined2 *)(*plVar6 + 0x28)),
          plVar4 == (longlong *)0x0)))) goto LAB_140f1e0ec;
      cVar2 = (**(code **)(*plVar4 + 0x2a8))(plVar4,plVar5);
    }
    if (cVar2 == '\0') goto LAB_140f1e0ec;
  }
  else {
    plVar6 = DAT_14cb8c2c0 + 1;
    plVar4 = plVar6;
    if ((char)DAT_14cb8c2c0[2] == '\0') goto LAB_140f1e0bc;
    if ((char)DAT_14cb8c2c0[2] == '\x02') {
      plVar4 = (longlong *)(*plVar6 + 0x30);
      bVar1 = false;
      goto LAB_140f1e0bf;
    }
LAB_140f1e18b:
    plVar5 = DAT_14cb8c2c0;
    lVar3 = FUN_140162146();
    if (lVar3 == 0) goto LAB_140f1e0ec;
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    local_30 = 0;
    uStack_28 = 0;
    FUN_1446ddda2(&local_48,"def_globals_statuseffects",0);
    FUN_140024ada(&local_48,plVar5);
    if (local_30 != 0) {
      FUN_1400020a8();
    }
  }
  (**(code **)(*plVar5 + 0x20))(plVar5);
LAB_140f1e0ec:
  if ((local_18 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar5;
}



// FUNCTION 140f1e286 FUN_140f1e286 body=269 status=ok
// SIG undefined FUN_140f1e286(void)

void FUN_140f1e286(longlong param_1,int param_2)

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



// FUNCTION 140f1e398 FUN_140f1e398 body=228 status=ok
// SIG undefined FUN_140f1e398(void)

longlong FUN_140f1e398(void)

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
  undefined1 *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb6b020 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = &LAB_14652a6c2;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_14876e287;
    local_40 = &LAB_14652a6c7;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 0x10;
    local_68 = 0x7b0;
    FUN_14081cfa3(L"/Script/GbxGame",L"LightProjectile",&DAT_14cb6b020,FUN_14652a69a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb6b020;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140f1e47e FUN_140f1e47e body=269 status=ok
// SIG undefined FUN_140f1e47e(void)

void FUN_140f1e47e(longlong param_1,longlong param_2)

{
  int *piVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  
  uVar2 = **(undefined8 **)(param_1 + 0x1c0);
  plVar3 = (longlong *)(*(undefined8 **)(param_1 + 0x1c0))[1];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  iVar6 = *(int *)(param_2 + 0x18);
  if (0 < iVar6) {
    lVar7 = 0;
    lVar8 = 0;
    do {
      plVar4 = *(longlong **)(*(longlong *)(param_2 + 0x10) + lVar7);
      if ((((*plVar4 != 0) && (plVar4[1] != 0)) && (0 < *(int *)(plVar4[1] + 8))) &&
         (((lVar5 = plVar4[2], lVar5 != 0 && (0.0 < *(float *)(lVar5 + 0x390))) &&
          (0.0 < *(float *)(lVar5 + 0x394))))) {
        FUN_140f1e58c(*(undefined8 *)(param_1 + 0x1f0));
        FUN_1448f1142(uVar2);
        lVar5 = *(longlong *)(param_1 + 0x1f0);
        *(undefined4 *)(lVar5 + 0x28) = 0;
        *(undefined4 *)(lVar5 + 0x31) = 0;
        *(undefined1 *)(lVar5 + 0x35) = 0;
        iVar6 = *(int *)(param_2 + 0x18);
      }
      lVar8 = lVar8 + 1;
      lVar7 = lVar7 + 0x10;
    } while (lVar8 < iVar6);
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar4 = plVar3 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000140f1e587. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}


