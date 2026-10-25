// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1487bafec FUN_1487bafec body=306 status=ok
// SIG undefined FUN_1487bafec(void)

undefined8 FUN_1487bafec(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined2 *puVar7;
  undefined1 auStack_68 [40];
  longlong *local_40 [2];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar4 = *(longlong *)(param_1 + 0x90);
  if (lVar4 == 0) {
    uVar3 = FUN_140c1c194();
    lVar4 = FUN_14477b664(uVar3);
    *(longlong *)(param_1 + 0x90) = lVar4;
  }
  lVar6 = *(longlong *)(param_1 + 0x98);
  if (lVar6 != 0) {
LAB_1487bb036:
    FUN_140fa8a64(lVar6,local_40);
    goto LAB_1487bb040;
  }
  if ((*(longlong *)(param_1 + 0x88) != 0) && (lVar4 != 0)) {
    plVar1 = *(longlong **)(lVar4 + 0xb8);
    if (plVar1 != (longlong *)0x0) {
      cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1);
      if (cVar2 != '\0') {
        uVar3 = (**(code **)(*plVar1 + 0x110))(plVar1);
        lVar6 = FUN_144aff482(uVar3,(longlong *)(param_1 + 0x88));
        *(longlong *)(param_1 + 0x98) = lVar6;
        if (lVar6 != 0) goto LAB_1487bb036;
        goto LAB_1487bb0f7;
      }
    }
    *(undefined8 *)(param_1 + 0x98) = 0;
  }
LAB_1487bb0f7:
  local_30 = 0;
  FUN_145715fae(local_40);
LAB_1487bb040:
  puVar5 = (undefined8 *)FUN_1447a1f4a(local_40);
  if (*(int *)(puVar5 + 1) == 0) {
    puVar7 = &DAT_149dfb77a;
  }
  else {
    puVar7 = (undefined2 *)*puVar5;
  }
  FUN_140002266(param_2,L"Default (%s)",puVar7);
  if (local_40[0] != (longlong *)0x0) {
    (**(code **)(*local_40[0] + 0x10))();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487bb120 FUN_1487bb120 body=32 status=ok
// SIG undefined FUN_1487bb120(void)

undefined8 FUN_1487bb120(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"Random");
  return param_2;
}



// FUNCTION 1487bb140 FUN_1487bb140 body=1153 status=ok
// SIG undefined FUN_1487bb140(void)

void FUN_1487bb140(longlong param_1,longlong *param_2)

{
  undefined1 *puVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 *puVar13;
  ulonglong uVar14;
  longlong *plVar15;
  undefined8 *puVar16;
  longlong lVar17;
  bool bVar18;
  undefined1 auStack_108 [40];
  ulonglong local_e0;
  longlong local_d8;
  longlong local_d0;
  longlong local_c8;
  longlong local_c0;
  undefined1 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 auStack_98 [4];
  undefined2 local_78;
  undefined1 local_70;
  undefined1 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_d8 = param_1;
  if ((longlong)*(int *)(param_1 + 0xa8) != 0) {
    puVar13 = *(undefined8 **)(param_1 + 0xa0);
    puVar16 = puVar13 + (longlong)*(int *)(param_1 + 0xa8) * 6;
    do {
      uVar7 = *puVar13;
      uVar5 = FUN_14477b664(puVar13[1]);
      uVar6 = FUN_14477b664(uVar5);
      uVar5 = puVar13[2];
      local_b8 = 1;
      uStack_a8 = 0;
      uStack_a0 = 0;
      local_b0 = uVar7;
      uVar7 = FUN_14477b664(uVar6);
      uStack_a8 = FUN_14477b664(uVar7);
      auStack_98[0] = 0;
      local_78 = 0;
      local_70 = 0;
      local_68 = 0;
      iVar2 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar2 + 1U;
      uStack_a0 = uVar5;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
        FUN_14095139e(param_2,iVar2);
      }
      lVar17 = *param_2;
      puVar1 = (undefined1 *)((longlong)iVar2 * 0x58 + lVar17);
      *puVar1 = local_b8;
      FUN_145d1462c(puVar1 + 8,&local_b0);
      FUN_140382e86((longlong)iVar2 * 0x58 + lVar17 + 0x20);
      FUN_144a2da94(auStack_98);
      puVar13 = puVar13 + 6;
    } while (puVar13 != puVar16);
  }
  iVar2 = *(int *)(local_d8 + 0x70);
  if ((longlong)iVar2 != 0) {
    lVar17 = *(longlong *)(local_d8 + 0x68);
    lVar11 = 0;
    do {
      uVar7 = *(undefined8 *)(lVar17 + 8 + lVar11);
      uVar5 = FUN_14477b664(*(undefined8 *)(lVar17 + 0x10 + lVar11));
      uVar6 = FUN_14477b664(uVar5);
      uVar5 = *(undefined8 *)(lVar17 + 0x18 + lVar11);
      local_b8 = 1;
      uStack_a8 = 0;
      uStack_a0 = 0;
      local_b0 = uVar7;
      uVar7 = FUN_14477b664(uVar6);
      uStack_a8 = FUN_14477b664(uVar7);
      auStack_98[0] = 0;
      local_78 = 0;
      local_70 = 0;
      local_68 = 0;
      iVar10 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar10 + 1U;
      uStack_a0 = uVar5;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar10 + 1U) {
        FUN_14095139e(param_2,iVar10);
      }
      lVar9 = *param_2;
      puVar1 = (undefined1 *)(lVar9 + (longlong)iVar10 * 0x58);
      *puVar1 = local_b8;
      FUN_145d1462c(puVar1 + 8,&local_b0);
      FUN_140382e86(lVar9 + (longlong)iVar10 * 0x58 + 0x20);
      FUN_144a2da94(auStack_98);
      lVar11 = lVar11 + 0x38;
    } while ((longlong)iVar2 * 0x38 - lVar11 != 0);
  }
  uVar4 = *(uint *)(param_2 + 1);
  lVar17 = (longlong)(int)uVar4;
  if (lVar17 == 0) {
    uVar14 = 0;
  }
  else {
    local_d0 = *param_2;
    bVar18 = *(longlong *)(local_d0 + 8) == 0;
    local_e0 = 0;
    local_c0 = -lVar17;
    local_c8 = local_d0 + 0x68;
    uVar14 = 0;
LAB_1487bb3d1:
    do {
      iVar2 = (int)uVar14;
      if ((int)(iVar2 + 1U) < (int)uVar4) {
        lVar11 = (longlong)iVar2;
        lVar9 = lVar11 + 2;
        plVar15 = (longlong *)(local_c8 + lVar11 * 0x58);
        bVar3 = true;
        lVar12 = -1;
        do {
          if (*plVar15 == 0 && plVar15[-1] != 0) {
            if (bVar18) {
              FUN_14028f43e(lVar11 * 0x58 + local_d0,-(int)lVar12);
              if (!bVar3) goto LAB_1487bb4f8;
              uVar14 = (uVar14 & 0xffffffff) - lVar12;
              bVar18 = false;
              goto LAB_1487bb3d1;
            }
          }
          else if (bVar18 != (plVar15[-1] == 0 || *plVar15 == 0)) {
            uVar14 = (ulonglong)(uint)(iVar2 - (int)lVar12);
            goto LAB_1487bb460;
          }
          bVar3 = lVar9 < lVar17;
          lVar12 = lVar12 + -1;
          lVar9 = lVar9 + 1;
          plVar15 = plVar15 + 0xb;
        } while (local_c0 + lVar11 != lVar12);
        uVar14 = (ulonglong)uVar4;
      }
      else {
        bVar3 = false;
        uVar14 = (ulonglong)(iVar2 + 1U);
      }
LAB_1487bb460:
      iVar10 = (int)uVar14 - iVar2;
      if (bVar18 == false) {
        iVar8 = (int)local_e0;
        if (iVar8 != iVar2) {
          memmove((void *)((longlong)iVar8 * 0x58 + local_d0),
                  (void *)((longlong)iVar2 * 0x58 + local_d0),(longlong)iVar10 * 0x58);
          iVar8 = (int)local_e0;
        }
        local_e0 = (ulonglong)(uint)(iVar8 + iVar10);
        bVar18 = true;
        if (!bVar3) break;
        goto LAB_1487bb3d1;
      }
      FUN_14028f43e((longlong)iVar2 * 0x58 + local_d0,iVar10);
      bVar18 = false;
    } while (bVar3);
LAB_1487bb4f8:
    *(int *)(param_2 + 1) = (int)local_e0;
    uVar14 = local_e0;
  }
  if (*(char *)(local_d8 + 0x88) == '\x01') {
    local_b8 = 1;
    local_78 = 0;
    local_70 = 0;
    local_68 = 0;
    uVar4 = (int)uVar14 + 1;
    local_b0 = 0;
    uStack_a8 = 0;
    uStack_a0 = 0;
    auStack_98[0] = 0;
    *(uint *)(param_2 + 1) = uVar4;
    if (*(uint *)((longlong)param_2 + 0xc) < uVar4) {
      FUN_14095139e(param_2);
    }
    lVar17 = *param_2;
    lVar11 = (longlong)(int)uVar14 * 0x58;
    puVar1 = (undefined1 *)(lVar17 + lVar11);
    *puVar1 = 1;
    FUN_145d1462c(puVar1 + 8,&local_b0);
    FUN_140382e86(lVar17 + lVar11 + 0x20,auStack_98);
    FUN_144a2da94(auStack_98);
  }
  if ((local_60 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487bb5c2 FUN_1487bb5c2 body=208 status=ok
// SIG undefined FUN_1487bb5c2(void)

void FUN_1487bb5c2(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  
  if ((longlong)*(int *)(param_1 + 0x90) != 0) {
    plVar5 = *(longlong **)(param_1 + 0x88);
    lVar6 = (longlong)*(int *)(param_1 + 0x90) * 0x18;
    do {
      lVar6 = lVar6 + -0x18;
      lVar3 = plVar5[1];
      if (lVar3 == 0) {
        uVar2 = FUN_140c1c194();
        lVar3 = FUN_14477b664(uVar2);
        plVar5[1] = lVar3;
      }
      plVar4 = (longlong *)plVar5[2];
      if (plVar4 == (longlong *)0x0) {
        if (lVar3 == 0) {
          plVar4 = (longlong *)0x0;
        }
        else {
          plVar4 = (longlong *)0x0;
          if (*plVar5 != 0) {
            plVar4 = *(longlong **)(lVar3 + 0xb8);
            if ((plVar4 == (longlong *)0x0) ||
               (cVar1 = (**(code **)(*plVar4 + 0x108))(), cVar1 == '\0')) {
              plVar4 = (longlong *)0x0;
            }
            else {
              uVar2 = (**(code **)(*plVar4 + 0x110))(plVar4);
              plVar4 = (longlong *)FUN_144aff482(uVar2,plVar5);
            }
            plVar5[2] = (longlong)plVar4;
          }
        }
      }
      (**(code **)(*plVar4 + 0x70))(plVar4,param_2);
    } while ((param_2 == 0) && (plVar5 = plVar5 + 3, lVar6 != 0));
  }
  return;
}



// FUNCTION 1487bb692 FUN_1487bb692 body=254 status=ok
// SIG undefined FUN_1487bb692(void)

undefined8
FUN_1487bb692(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  puVar3 = local_48;
  local_40 = 3;
  *local_48 = &PTR_LAB_149e020b0;
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
  local_48[2] = lVar5;
  *local_48 = &PTR_FUN_14b3e7350;
  local_48[3] = 0;
  FUN_14485c47a(local_48 + 3,param_3);
  *(undefined4 *)(puVar3 + 5) = uVar1;
  puVar3[4] = uVar2;
  FUN_1448b6402(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487bb798 FUN_1487bb798 body=79 status=ok
// SIG undefined FUN_1487bb798(void)

void FUN_1487bb798(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x1c);
  if (lVar1 != 0) {
    lVar2 = FUN_1447210f0(lVar1);
    if ((lVar2 != 0) && (*(char *)(lVar1 + 0x178) == '\x03')) {
      FUN_1411ea90c(param_1,param_2);
      return;
    }
  }
  return;
}



// FUNCTION 1487bb7e8 FUN_1487bb7e8 body=137 status=ok
// SIG undefined FUN_1487bb7e8(void)

void FUN_1487bb7e8(undefined8 param_1,undefined8 param_2)

{
  int *piVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined8 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_141173a88(&local_28,param_2,0);
  if (local_28 != 0) {
    FUN_1487bb798(param_1,local_28 + 0x28);
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



// FUNCTION 1487bb882 FUN_1487bb882 body=34 status=ok
// SIG undefined FUN_1487bb882(void)

undefined8 FUN_1487bb882(longlong *param_1,longlong *param_2)

{
  undefined8 uVar1;
  
  if ((*param_1 == *param_2) && ((int)param_1[4] == (int)param_2[4])) {
    uVar1 = FUN_1487bfda0(param_1[3],param_2[3]);
    return uVar1;
  }
  return 0;
}



// FUNCTION 1487bb8a4 FUN_1487bb8a4 body=59 status=ok
// SIG undefined FUN_1487bb8a4(void)

longlong FUN_1487bb8a4(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1487c0174(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x70 + *param_1;
  FUN_1487c0154(lVar2);
  return lVar2;
}



// FUNCTION 1487bb8e0 FUN_1487bb8e0 body=302 status=ok
// SIG undefined FUN_1487bb8e0(void)

undefined8 FUN_1487bb8e0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  
  plVar4 = (longlong *)FUN_1487c0298(param_3);
  if (plVar4 != (longlong *)0x0) {
    cVar2 = *(char *)(param_1 + 0x10);
    lVar5 = (**(code **)(*plVar4 + 0x10))(plVar4);
    lVar5 = *(longlong *)(lVar5 + 0x40);
    plVar4 = &DAT_14caa8558;
    if (lVar5 != 0) {
      plVar4 = (longlong *)(lVar5 + 0x18);
    }
    iVar3 = *(int *)(param_1 + 0x20);
    if (cVar2 == '\0') {
      if (iVar3 != 0) {
        plVar7 = *(longlong **)(param_1 + 0x18);
        plVar1 = plVar7 + iVar3;
        do {
          if ((int)plVar4[1] != 0) {
            lVar5 = *plVar7;
            lVar8 = 0;
            do {
              if (*(longlong *)(*plVar4 + lVar8) == lVar5) goto LAB_1487bba0a;
              lVar8 = lVar8 + 8;
            } while ((longlong)(int)plVar4[1] << 3 != lVar8);
          }
          if ((longlong)(int)plVar4[3] != 0) {
            lVar5 = (longlong)(int)plVar4[3] * 8;
            lVar8 = 0;
            do {
              if (*(longlong *)(plVar4[2] + lVar8) == *plVar7) {
LAB_1487bba0a:
                return CONCAT71((int7)((ulonglong)lVar5 >> 8),1);
              }
              lVar8 = lVar8 + 8;
            } while (lVar5 != lVar8);
          }
          plVar7 = plVar7 + 1;
          if (plVar7 == plVar1) {
            return 0;
          }
        } while( true );
      }
    }
    else {
      uVar6 = CONCAT71((int7)((ulonglong)lVar5 >> 8),1);
      if (iVar3 == 0) {
        return uVar6;
      }
      plVar7 = *(longlong **)(param_1 + 0x18);
      plVar1 = plVar7 + iVar3;
      while( true ) {
        if ((int)plVar4[1] != 0) {
          lVar5 = 0;
          do {
            if (*(longlong *)(*plVar4 + lVar5) == *plVar7) goto LAB_1487bb98d;
            lVar5 = lVar5 + 8;
          } while ((longlong)(int)plVar4[1] << 3 != lVar5);
        }
        if ((longlong)(int)plVar4[3] == 0) break;
        lVar5 = 0;
        while (*(longlong *)(plVar4[2] + lVar5) != *plVar7) {
          lVar5 = lVar5 + 8;
          if ((longlong)(int)plVar4[3] * 8 == lVar5) {
            return 0;
          }
        }
LAB_1487bb98d:
        plVar7 = plVar7 + 1;
        if (plVar7 == plVar1) {
          return uVar6;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 1487bba36 FUN_1487bba36 body=48 status=ok
// SIG undefined FUN_1487bba36(void)

void FUN_1487bba36(undefined8 param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_14b3e6790);
  switchD_143c3d4dc::caseD_21(param_1,param_2);
  return;
}



// FUNCTION 1487bba66 FUN_1487bba66 body=264 status=ok
// SIG undefined FUN_1487bba66(void)

undefined8 * FUN_1487bba66(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if ((((lVar1 == 0) || (lVar2 = FUN_144a6c4d8(), lVar2 == 0)) ||
      (*(int *)(lVar1 + 0x38) < *(int *)(lVar2 + 0x38))) ||
     (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
      lVar2 + 0x30)) {
    plVar4 = (longlong *)0x0;
  }
  else {
    plVar4 = *(longlong **)(param_1 + 8);
  }
  plVar7 = (longlong *)plVar4[0x22];
  if (plVar7 == (longlong *)0x0) {
    (**(code **)(*plVar4 + 1000))(plVar4);
    plVar7 = (longlong *)plVar4[0x22];
    if (plVar7 == (longlong *)0x0) goto LAB_1487bbb29;
  }
  uVar3 = FUN_1459204c0();
  plVar4 = (longlong *)(**(code **)(*plVar7 + 0x288))(plVar7,uVar3);
  if (plVar4 != (longlong *)0x0) {
    uVar3 = FUN_1459204c0();
    plVar5 = (longlong *)FUN_144718840(plVar4,uVar3);
    if (plVar4 != plVar5 && plVar5 != (longlong *)0x0) goto LAB_1487bbb37;
  }
  uVar3 = FUN_144a7fd54();
  plVar4 = (longlong *)(**(code **)(*plVar7 + 0x288))(plVar7,uVar3);
  if (plVar4 != (longlong *)0x0) {
    uVar3 = FUN_144a7fd54();
    plVar5 = (longlong *)FUN_144718840(plVar4,uVar3);
    if (plVar5 != (longlong *)0x0 && plVar4 != plVar5) {
LAB_1487bbb37:
                    /* WARNING: Could not recover jumptable at 0x0001487bbb43. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      puVar6 = (undefined8 *)(**(code **)(*plVar5 + 0x10))(plVar5);
      return puVar6;
    }
  }
LAB_1487bbb29:
  return &DAT_14c9a7840;
}



// FUNCTION 1487bbb6e FUN_1487bbb6e body=66 status=ok
// SIG undefined FUN_1487bbb6e(void)

undefined8 FUN_1487bbb6e(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if ((((lVar1 != 0) && (lVar2 = FUN_144a6c4d8(), lVar2 != 0)) &&
      (*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38))) &&
     (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
      lVar2 + 0x30)) {
    return *(undefined8 *)(param_1 + 8);
  }
  return 0;
}



// FUNCTION 1487bbbb6 FUN_1487bbbb6 body=86 status=ok
// SIG undefined FUN_1487bbbb6(void)

longlong * FUN_1487bbbb6(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x48);
  if (lVar1 == 0) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(lVar1);
    }
    *param_2 = lVar1;
    uVar2 = FUN_140d4a144();
    lVar1 = FUN_144718840(lVar1,uVar2);
    param_2[1] = lVar1;
  }
  return param_2;
}



// FUNCTION 1487bbc0c FUN_1487bbc0c body=145 status=ok
// SIG undefined FUN_1487bbc0c(void)

int * FUN_1487bbc0c(longlong *param_1,int *param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  param_2[0] = 0;
  param_2[1] = 0;
  lVar2 = (**(code **)(*param_1 + 0x2b8))();
  if ((lVar2 != 0) && (lVar2 = *(longlong *)(lVar2 + 0x1c8), lVar2 != 0)) {
    local_38 = *(undefined8 *)(lVar2 + 0x260);
    uStack_30 = *(undefined8 *)(lVar2 + 0x268);
    local_28 = *(undefined8 *)(lVar2 + 0x270);
    iVar1 = FUN_1448eb174(&local_38,0x18,0);
    iVar1 = iVar1 + param_3 + -0x21c88688;
    *param_2 = iVar1;
    param_2[1] = iVar1;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487bbc9e FUN_1487bbc9e body=55 status=ok
// SIG undefined FUN_1487bbc9e(void)

void FUN_1487bbc9e(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  
  *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + 1;
  if (*(longlong *)(param_1 + 0x50) != 0) {
    cVar1 = FUN_144729dda(param_1 + 0x48);
    if ((cVar1 != '\0') && (*(longlong **)(param_1 + 0x50) != (longlong *)0x0)) {
      lVar2 = (**(code **)(**(longlong **)(param_1 + 0x50) + 0x20))();
      *(int *)(lVar2 + 0x6c) = *(int *)(lVar2 + 0x6c) + 1;
    }
  }
  return;
}



// FUNCTION 1487bbcf6 FUN_1487bbcf6 body=48 status=ok
// SIG undefined FUN_1487bbcf6(void)

void FUN_1487bbcf6(undefined8 param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_14b3e67a0);
  thunk_FUN_14797ce42(param_1,param_2);
  return;
}



// FUNCTION 1487bbd30 FUN_1487bbd30 body=493 status=ok
// SIG undefined FUN_1487bbd30(void)

undefined8 FUN_1487bbd30(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  lVar2 = *(longlong *)(param_1 + 0x30);
  if (lVar2 == 0) {
    return 0;
  }
  lVar1 = FUN_1446f8646();
  if (lVar1 == 0) {
    return 0;
  }
  if (*(int *)(lVar2 + 0x38) < *(int *)(lVar1 + 0x38)) {
    return 0;
  }
  if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) !=
      lVar1 + 0x30) {
    return 0;
  }
  lVar2 = *(longlong *)(param_1 + 0x30);
  if (lVar2 == 0) {
    return 0;
  }
  lVar1 = FUN_1446f8646();
  if (((lVar1 == 0) || (*(int *)(lVar2 + 0x38) < *(int *)(lVar1 + 0x38))) ||
     (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) !=
      lVar1 + 0x30)) {
    lVar2 = 0;
  }
  else {
    lVar2 = *(longlong *)(param_1 + 0x30);
  }
  lVar1 = FUN_140789e1e();
  if (lVar1 == 0) {
    return 0;
  }
  if (*(int *)(lVar2 + 0x38) < *(int *)(lVar1 + 0x38)) {
    return 0;
  }
  if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) !=
      lVar1 + 0x30) {
    return 0;
  }
  lVar2 = *(longlong *)(param_1 + 0x30);
  if (lVar2 == 0) {
    plVar5 = (longlong *)0x0;
  }
  else {
    lVar1 = FUN_1446f8646();
    if (((lVar1 == 0) || (*(int *)(lVar2 + 0x38) < *(int *)(lVar1 + 0x38))) ||
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) !=
        lVar1 + 0x30)) {
      plVar4 = *(longlong **)(param_1 + 0x30);
      plVar5 = (longlong *)0x0;
    }
    else {
      plVar4 = *(longlong **)(param_1 + 0x30);
      plVar5 = plVar4;
    }
    if (((plVar4 != (longlong *)0x0) && (lVar2 = FUN_1446f8646(), lVar2 != 0)) &&
       ((*(int *)(lVar2 + 0x38) <= (int)plVar4[7] &&
        (*(longlong *)(plVar4[6] + (longlong)*(int *)(lVar2 + 0x38) * 8) == lVar2 + 0x30)))) {
      lVar2 = *(longlong *)(param_1 + 0x30);
      goto LAB_1487bbe2c;
    }
  }
  lVar2 = 0;
LAB_1487bbe2c:
  if (*(char *)(lVar2 + 0xd1) == '\x01') {
    lVar2 = *(longlong *)(param_1 + 0x28);
    if (lVar2 == 0) {
      return 0;
    }
    lVar1 = FUN_1446f8646();
    if (lVar1 == 0) {
      return 0;
    }
    if (*(int *)(lVar2 + 0x38) < *(int *)(lVar1 + 0x38)) {
      return 0;
    }
    if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) !=
        lVar1 + 0x30) {
      return 0;
    }
    lVar2 = *(longlong *)(param_1 + 0x28);
    if (lVar2 == 0) {
      return 0;
    }
    lVar1 = FUN_1446f8646();
    if (((lVar1 == 0) || (*(int *)(lVar2 + 0x38) < *(int *)(lVar1 + 0x38))) ||
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) !=
        lVar1 + 0x30)) {
      plVar5 = (longlong *)0x0;
    }
    else {
      plVar5 = *(longlong **)(param_1 + 0x28);
    }
  }
  lVar2 = plVar5[0x22];
  if (lVar2 == 0) {
    (**(code **)(*plVar5 + 1000))(plVar5);
    lVar2 = plVar5[0x22];
    if (lVar2 == 0) {
      return 0;
    }
  }
  lVar1 = *(longlong *)(lVar2 + 0x38);
  if (((lVar1 != 0) && (lVar3 = FUN_144a6c4d8(), lVar3 != 0)) &&
     ((*(int *)(lVar3 + 0x38) <= *(int *)(lVar1 + 0x38) &&
      (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
       lVar3 + 0x30)))) {
    return *(undefined8 *)(lVar2 + 0x38);
  }
  return 0;
}



// FUNCTION 1487bbf22 FUN_1487bbf22 body=144 status=ok
// SIG undefined FUN_1487bbf22(void)

undefined8 * FUN_1487bbf22(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + -0x80);
  if ((((lVar3 != 0) && (lVar2 = FUN_1446f8646(), lVar2 != 0)) &&
      (*(int *)(lVar2 + 0x38) <= *(int *)(lVar3 + 0x38))) &&
     (lVar1 = *(longlong *)(param_1 + -0x80),
     lVar1 != 0 &&
     *(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
     lVar2 + 0x30)) {
    lVar3 = FUN_1409220ae();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        == lVar3 + 0x30)) {
      (**(code **)(*(longlong *)(lVar1 + 0x3b0) + 0x18))(lVar1 + 0x3b0,param_2);
      return param_2;
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 1487bbfb2 FUN_1487bbfb2 body=144 status=ok
// SIG undefined FUN_1487bbfb2(void)

void FUN_1487bbfb2(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + -0x80);
  if (lVar3 != 0) {
    lVar2 = FUN_1446f8646();
    if (lVar2 != 0) {
      if (*(int *)(lVar2 + 0x38) <= *(int *)(lVar3 + 0x38)) {
        lVar1 = *(longlong *)(param_1 + -0x80);
        if (lVar1 != 0 &&
            *(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
            lVar2 + 0x30) {
          lVar3 = FUN_1409220ae();
          if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30)) {
                    /* WARNING: Could not recover jumptable at 0x0001487bc03f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*(longlong *)(lVar1 + 0x3b0) + 0x10))(lVar1 + 0x3b0,param_2);
            return;
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 1487bc042 FUN_1487bc042 body=144 status=ok
// SIG undefined FUN_1487bc042(void)

void FUN_1487bc042(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + -0x80);
  if (lVar3 != 0) {
    lVar2 = FUN_1446f8646();
    if (lVar2 != 0) {
      if (*(int *)(lVar2 + 0x38) <= *(int *)(lVar3 + 0x38)) {
        lVar1 = *(longlong *)(param_1 + -0x80);
        if (lVar1 != 0 &&
            *(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
            lVar2 + 0x30) {
          lVar3 = FUN_1409220ae();
          if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar3 + 0x38) * 8) == lVar3 + 0x30)) {
                    /* WARNING: Could not recover jumptable at 0x0001487bc0cf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*(longlong *)(lVar1 + 0x3b0) + 0x20))(lVar1 + 0x3b0,param_2);
            return;
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 1487bc0d2 FUN_1487bc0d2 body=172 status=ok
// SIG undefined FUN_1487bc0d2(void)

void FUN_1487bc0d2(longlong param_1)

{
  int *piVar1;
  undefined8 uVar2;
  undefined1 auStack_88 [32];
  undefined1 local_68 [24];
  longlong local_50;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((*(char *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0xc88) == '\0') && (-1 < *(int *)(param_1 + 0xd4))) {
    uVar2 = *(undefined8 *)(param_1 + 0x3c8);
    FUN_1408a7712(local_68,param_1 + 0x3b0);
    FUN_14085123a(uVar2,local_68,0,1);
    if (local_20 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)local_20 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_20 + 0x10))();
      }
    }
    if (local_50 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487bc180 FUN_1487bc180 body=33 status=ok
// SIG undefined FUN_1487bc180(void)

void FUN_1487bc180(longlong param_1)

{
  thunk_FUN_1463f2130();
  FUN_140491244(param_1 + 0x12f0);
  return;
}



// FUNCTION 1487bc1a8 FUN_1487bc1a8 body=26 status=ok
// SIG undefined FUN_1487bc1a8(void)

void FUN_1487bc1a8(longlong param_1)

{
  if (*(longlong **)(param_1 + 0x11e8) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001487bc1be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x11e8) + 0xe98))();
    return;
  }
  return;
}



// FUNCTION 1487bc1c2 FUN_1487bc1c2 body=324 status=ok
// SIG undefined FUN_1487bc1c2(void)

void FUN_1487bc1c2(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined1 auStack_68 [40];
  undefined1 local_40 [24];
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((*(longlong *)(param_1 + 0x13f8) != 0) && ((*(byte *)(param_1 + 0x65) & 0x18) == 0x10)) {
    thunk_FUN_143d2744e(param_1 + 0x31e0);
    FUN_1404596f4(param_1);
  }
  if (*(longlong *)(param_1 + 0x35d0) != 0) {
    uVar4 = FUN_1447210f0(param_1);
    local_28 = *(undefined8 *)(param_1 + 0x35d0);
    plVar3 = *(longlong **)(param_1 + 0x35d8);
    if (plVar3 == (longlong *)0x0) {
      local_20 = (longlong *)0x0;
      FUN_1487bc308(&local_28,uVar4,1);
    }
    else {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
      local_20 = plVar3;
      FUN_1487bc308(&local_28,uVar4,1);
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
  if (*(char *)(param_1 + 0x178) == '\x03') {
    if (*(longlong *)(param_1 + 0x3910) == 0) {
      FUN_1403629b4(param_1,local_40,*(undefined8 *)(param_1 + 0x13f8));
      FUN_14035d9aa(param_1,local_40);
    }
    else {
      FUN_140b3e45e();
    }
  }
  uVar4 = (**(code **)(*(longlong *)(param_1 + 0x10e0) + 0x50))(param_1 + 0x10e0);
  FUN_14067171c(uVar4);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487bc308 FUN_1487bc308 body=193 status=ok
// SIG undefined FUN_1487bc308(void)

void FUN_1487bc308(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_147f7d564(*param_1);
  lVar3 = DAT_14cb259f8;
  if (DAT_14cb259f8 != 0) {
    local_30 = *param_1;
    local_28 = param_1[1];
    if (local_28 != 0) {
      LOCK();
      *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
      UNLOCK();
    }
    FUN_1408f6a5c(lVar3,&local_30);
  }
  plVar4 = (longlong *)*param_1;
  if (((char)param_3 != '\0') && (*(char *)((longlong)plVar4 + 0x3c) == '\0')) {
    *(undefined1 *)((longlong)plVar4 + 0x3c) = 1;
    (**(code **)(*plVar4 + 0x10))();
    plVar4 = (longlong *)*param_1;
  }
  (**(code **)(*plVar4 + 0x50))(plVar4,param_3);
  puVar2 = (undefined8 *)param_1[1];
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2);
      LOCK();
      piVar1 = (int *)((longlong)puVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487bc3dc FUN_1487bc3dc body=975 status=ok
// SIG undefined FUN_1487bc3dc(void)

void FUN_1487bc3dc(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 *local_48;
  undefined4 local_40;
  longlong *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_147f42fa8();
  param_1[0x742] = 0;
  cVar4 = (**(code **)(*param_1 + 0x708))(param_1);
  if (cVar4 != '\0') {
    lVar6 = FUN_144860928();
    lVar8 = *(longlong *)(lVar6 + 0xe90);
    if (lVar8 == 0) {
      uVar7 = FUN_145cd8150();
      lVar8 = FUN_14477b664(uVar7);
      *(longlong *)(lVar6 + 0xe90) = lVar8;
    }
    lVar9 = *(longlong *)(lVar6 + 0xe98);
    if (lVar9 == 0) {
      if ((lVar8 != 0) && (*(longlong *)(lVar6 + 0xe88) != 0)) {
        plVar10 = *(longlong **)(lVar8 + 0xb8);
        if ((plVar10 == (longlong *)0x0) ||
           (cVar4 = (**(code **)(*plVar10 + 0x108))(plVar10), cVar4 == '\0')) {
          *(undefined8 *)(lVar6 + 0xe98) = 0;
        }
        else {
          uVar7 = (**(code **)(*plVar10 + 0x110))(plVar10);
          lVar9 = FUN_144aff482(uVar7,(longlong *)(lVar6 + 0xe88));
          *(longlong *)(lVar6 + 0xe98) = lVar9;
          if (lVar9 != 0) goto LAB_1487bc44f;
        }
      }
    }
    else {
LAB_1487bc44f:
      plVar10 = (longlong *)param_1[0x740];
      if (plVar10 == (longlong *)0x0) {
        uVar7 = FUN_14050fd64();
        local_58 = 0;
        FUN_14088df30(uVar7,&local_38,lVar9,0);
        plVar10 = local_30;
        if ((longlong **)(param_1 + 0x740) != &local_38) {
          param_1[0x740] = (longlong)local_38;
          local_38 = (longlong *)0x0;
          plVar2 = (longlong *)param_1[0x741];
          if (local_30 != plVar2) {
            local_30 = (longlong *)0x0;
            param_1[0x741] = (longlong)plVar10;
            if (plVar2 != (longlong *)0x0) {
              LOCK();
              plVar10 = plVar2 + 1;
              *(int *)plVar10 = (int)*plVar10 + -1;
              UNLOCK();
              if ((int)*plVar10 == 0) {
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
          }
        }
        plVar10 = local_30;
        if (local_30 != (longlong *)0x0) {
          LOCK();
          plVar2 = local_30 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*local_30)(local_30);
            LOCK();
            piVar1 = (int *)((longlong)plVar10 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar10 + 0x10))(plVar10);
            }
          }
        }
        plVar10 = (longlong *)param_1[0x740];
        if (plVar10 == (longlong *)0x0) goto LAB_1487bc594;
      }
      if ((((char)plVar10[6] == '\0') && (*(char *)((longlong)plVar10 + 0x31) == '\0')) &&
         (*(int *)((longlong)plVar10 + 0x6c) == 2)) {
        param_1[0x742] = lVar9;
      }
      else {
        local_48 = (undefined8 *)0x0;
        local_40 = 0;
        FUN_1446efa72(&local_48,0,3,0x10);
        puVar3 = local_48;
        local_40 = 3;
        *local_48 = &PTR_LAB_149e020b0;
        LOCK();
        UNLOCK();
        lVar6 = DAT_14c758608 + 1;
        lVar8 = DAT_14c758608 + 1;
        if (lVar6 == 0) {
          LOCK();
          UNLOCK();
          lVar6 = DAT_14c758608 + 2;
          lVar8 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar8;
        local_48[2] = lVar6;
        *local_48 = &PTR_FUN_14b3e77a0;
        local_48[3] = 0;
        FUN_14485c47a(local_48 + 3,param_1);
        puVar3[4] = &LAB_1487bc7ac;
        *(undefined4 *)(puVar3 + 5) = 0;
        FUN_140844560(plVar10,&local_38,&local_48);
      }
    }
  }
LAB_1487bc594:
  if (param_1[0x27f] != 0) {
    plVar10 = (longlong *)(param_1[0x27f] + 0x90);
    if (*(char *)((longlong)param_1 + 0x3a19) != '\0') {
      plVar10 = param_1 + 0x743;
    }
    FUN_14035b7a0(param_1,(char)*plVar10);
    if (*(char *)((longlong)param_1 + 0x3a19) == '\x01') {
      *(undefined1 *)((longlong)param_1 + 0x3a19) = 0;
    }
    if (param_1[0x27f] != 0) {
      FUN_14035e9a8(param_1,*(undefined1 *)(param_1[0x27f] + 0x90));
    }
  }
  iVar5 = FUN_14487fd02(param_1);
  if (iVar5 == 3) goto LAB_1487bc66f;
  FUN_1403569b4(param_1 + 0x33a);
  cVar4 = FUN_144a783a6(param_1);
  if (cVar4 != '\0') goto LAB_1487bc66f;
  if ((param_1 == (longlong *)0x0) || (DAT_14c950c29 == '\0')) {
    if (param_1 != (longlong *)0x0) goto LAB_1487bc634;
    local_30 = (longlong *)0x0;
  }
  else {
    FUN_1456cec3c(param_1);
LAB_1487bc634:
    local_30 = param_1 + 0x223;
  }
  local_38 = param_1;
  FUN_1403588d0(param_1 + 0x33a);
  if (param_1[0x742] == 0) {
    if (param_1[0x27f] != 0) {
      lVar8 = param_1[0x27f] + 0x4f0;
      goto LAB_1487bc663;
    }
    lVar8 = 0;
  }
  else {
    lVar8 = param_1[0x742] + 200;
LAB_1487bc663:
    lVar8 = FUN_140356e36(lVar8);
  }
  param_1[0x1f2] = lVar8;
LAB_1487bc66f:
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1487bc7ba FUN_1487bc7ba body=123 status=ok
// SIG undefined FUN_1487bc7ba(void)

void FUN_1487bc7ba(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  
  if (*(longlong **)(param_1 + 0x11e8) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x11e8) + 0xd08))();
  }
  if (((((~*(byte *)(param_1 + 0x550) & 10) == 0) &&
       (plVar1 = *(longlong **)(param_1 + 0x430), plVar1 != (longlong *)0x0)) &&
      ((*(byte *)((longlong)plVar1 + 0x5b5) & 0x20) == 0)) &&
     ((*(longlong *)(param_1 + 0x11e8) == 0 ||
      (*(char *)(*(longlong *)(param_1 + 0x11e8) + 0x1c10) == '\0')))) {
    (**(code **)(*plVar1 + 0x7f0))(plVar1,0);
  }
  FUN_147998410(param_1,param_2);
  return;
}



// FUNCTION 1487bc836 FUN_1487bc836 body=310 status=ok
// SIG undefined FUN_1487bc836(void)

bool FUN_1487bc836(longlong *param_1)

{
  float fVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  
  lVar2 = param_1[0x23d];
  if (lVar2 != 0) {
    if (((((&DAT_00001100)[lVar2] == '\n') && (*(longlong *)(lVar2 + 0x110) != 0)) &&
        (cVar3 = (**(code **)(*(longlong *)(lVar2 + 0x178) + 0x118))(lVar2 + 0x178), cVar3 != '\0'))
       && ((*(byte *)(lVar2 + 0x1c8) & 2) != 0)) {
      return true;
    }
    if (((*(byte *)(param_1 + 0xaa) & 2) == 0) &&
       (cVar3 = (**(code **)(*(longlong *)param_1[0x23d] + 0x680))(), cVar3 != '\0')) {
      if (((*(byte *)((longlong)param_1 + 0x551) & 8) == 0) ||
         ((**(code **)(*param_1 + 0x8a8))(param_1), extraout_XMM0_Da <= 0.0)) {
        lVar2 = param_1[0x23d];
        if (*(char *)(lVar2 + 0x2ca8) != '\0') {
          return true;
        }
        iVar4 = (int)param_1[0xad];
        if (iVar4 == 0) {
          cVar3 = (**(code **)(*(longlong *)(lVar2 + 0x178) + 0xd8))(lVar2 + 0x178);
          iVar4 = (int)param_1[0xad];
          if (cVar3 != '\0') {
            iVar4 = iVar4 + 1;
          }
        }
        return iVar4 < *(int *)((longlong)param_1 + 0x564);
      }
      if (((*(byte *)(param_1 + 0xaa) & 8) != 0) &&
         (fVar1 = *(float *)((longlong)param_1 + 0x554), (**(code **)(*param_1 + 0x8a8))(param_1),
         fVar1 < extraout_XMM0_Da_00)) {
        if ((int)param_1[0xad] < *(int *)((longlong)param_1 + 0x564)) {
          return true;
        }
        return (bool)((int)param_1[0xad] == *(int *)((longlong)param_1 + 0x564) &
                     (*(byte *)((longlong)param_1 + 0x551) & 8) >> 3);
      }
    }
  }
  return false;
}



// FUNCTION 1487bc96c FUN_1487bc96c body=231 status=ok
// SIG undefined FUN_1487bc96c(void)

void FUN_1487bc96c(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  undefined1 auStack_58 [40];
  undefined1 local_30 [8];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1478c1b52();
  if (param_2 != 0) {
    lVar2 = FUN_144a78b9e();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
         ) == lVar2 + 0x30)) {
      lVar2 = (**(code **)(*(longlong *)(param_2 + 0x10b0) + 0x28))(param_2 + 0x10b0);
      lVar2 = *(longlong *)(lVar2 + 0xd8);
      if (lVar2 != 0) {
        uVar3 = (**(code **)(*(longlong *)(param_2 + 0x1180) + 0x20))(param_2 + 0x1180);
        FUN_1487f185c(param_1 + 0x3748,uVar3);
        puVar1 = *(undefined4 **)(lVar2 + 8);
        puVar4 = &DAT_14c9485f0;
        if (puVar1 != (undefined4 *)0x0) {
          puVar4 = puVar1;
        }
        FUN_1447325ac(puVar4,local_30,1);
        FUN_1410674bc(param_1 + 0x12f0,local_30,0);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487bca54 FUN_1487bca54 body=145 status=ok
// SIG undefined FUN_1487bca54(void)

void FUN_1487bca54(longlong *param_1,undefined8 param_2,char param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if (param_1 != (longlong *)0x0) {
    uVar1 = FUN_144a7b040();
    plVar2 = (longlong *)(**(code **)(*param_1 + 0x288))(param_1,uVar1);
    if (plVar2 != (longlong *)0x0) {
      uVar1 = FUN_144a7b040();
      plVar3 = (longlong *)FUN_144718840(plVar2,uVar1);
      if (plVar3 != (longlong *)0x0 && plVar2 != plVar3) {
        lVar4 = (**(code **)(*plVar3 + 0x20))(plVar3);
        if (lVar4 != 0) {
          if (param_3 != '\0') {
            FUN_1400bc96c();
            return;
          }
          FUN_1400bc8c2(lVar4 + 0xb8,param_2);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 1487bcae6 FUN_1487bcae6 body=53 status=ok
// SIG undefined FUN_1487bcae6(void)

undefined8 * FUN_1487bcae6(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x18))();
  if (lVar1 == 0) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    (**(code **)(*(longlong *)(lVar1 + 0x50) + 0x18))(lVar1 + 0x50,param_2);
  }
  return param_2;
}



// FUNCTION 1487bcb30 FUN_1487bcb30 body=79 status=ok
// SIG undefined FUN_1487bcb30(void)

longlong FUN_1487bcb30(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x700);
  if (lVar1 == 0) {
    lVar1 = FUN_14895adb6(param_1 + -0x10f0);
    if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar1);
    }
    *(longlong *)(param_1 + 0x700) = lVar1;
  }
  return lVar1;
}



// FUNCTION 1487bcb96 FUN_1487bcb96 body=421 status=ok
// SIG undefined FUN_1487bcb96(void)

void FUN_1487bcb96(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined1 local_58 [24];
  longlong local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar3 = *(longlong *)(param_1 + 0x3c0);
  if (lVar3 != 0) {
    lVar2 = FUN_144a75eb4();
    if (((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
         == lVar2 + 0x30)) && (*(longlong *)(lVar3 + 0x508) != 0)) {
      lVar2 = FUN_1459cbe9a();
      lVar3 = *(longlong *)(lVar3 + 0x508);
      if (lVar3 != 0) {
        lVar4 = 0;
        if ((lVar2 == 0) || (lVar1 = *(longlong *)(lVar3 + 0x10), lVar1 == 0)) goto LAB_1487bcbe8;
        if (*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38)) {
          lVar4 = 0;
          if (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
              lVar2 + 0x30) {
            lVar4 = lVar3;
          }
          goto LAB_1487bcbe8;
        }
      }
    }
  }
  lVar4 = 0;
LAB_1487bcbe8:
  *param_2 = lVar4;
  FUN_1446dcdd4(local_58,param_1 + 0x19c0);
  lVar3 = FUN_14888e23c(local_58);
  param_2[3] = lVar3;
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  iVar5 = *(int *)(param_1 + 0x19b8);
  if (iVar5 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar5);
  }
  if (*(int *)((longlong)param_2 + 0x14) < iVar5) {
    FUN_1487c0f7a(param_2 + 1);
    iVar5 = *(int *)(param_1 + 0x19b8);
  }
  if (iVar5 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x19b0);
    lVar2 = (longlong)iVar5 << 3;
    do {
      FUN_1446dcdd4(local_58,lVar3);
      local_60 = FUN_14888f7cc(local_58);
      FUN_1487c0fda(param_2 + 1,&local_60);
      if (local_40 != 0) {
        FUN_1400020a8();
      }
      lVar3 = lVar3 + 8;
      lVar2 = lVar2 + -8;
    } while (lVar2 != 0);
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1487bcd3e FUN_1487bcd3e body=65 status=ok
// SIG undefined FUN_1487bcd3e(void)

void FUN_1487bcd3e(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  
  if ((*param_2 == 0) || ((longlong *)param_2[1] == (longlong *)0x0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(*(longlong *)param_2[1] + 0x10))();
  }
                    /* WARNING: Could not recover jumptable at 0x0001487bcd7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(param_1 + 0x1130) + 0x10))(param_1 + 0x1130,uVar1);
  return;
}



// FUNCTION 1487bcd80 FUN_1487bcd80 body=93 status=ok
// SIG undefined FUN_1487bcd80(void)

void FUN_1487bcd80(longlong *param_1)

{
  char cVar1;
  int iVar2;
  
  if ((char)param_1[0x2f] == '\x03') {
    (**(code **)(*param_1 + 0x330))(param_1,1);
  }
  iVar2 = FUN_14487fd02(param_1);
  cVar1 = FUN_1449ce97a(param_1);
  if (iVar2 == 3 || cVar1 != '\x01') {
    return;
  }
  FUN_145a4fe48(param_1,&DAT_14cb712e8,1);
  return;
}



// FUNCTION 1487bcdf2 FUN_1487bcdf2 body=1 status=ok
// SIG undefined FUN_1487bcdf2(void)

void FUN_1487bcdf2(void)

{
  return;
}



// FUNCTION 1487bcdf4 FUN_1487bcdf4 body=33 status=ok
// SIG undefined FUN_1487bcdf4(void)

void FUN_1487bcdf4(longlong param_1,byte param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x11e8);
  if (lVar1 != 0) {
    *(uint *)(lVar1 + 0x3ba0) = *(uint *)(lVar1 + 0x3ba0) & 0xfffffffe | (uint)param_2;
  }
  return;
}



// FUNCTION 1487bce16 FUN_1487bce16 body=1 status=ok
// SIG undefined FUN_1487bce16(void)

void FUN_1487bce16(void)

{
  return;
}



// FUNCTION 1487bce18 FUN_1487bce18 body=58 status=ok
// SIG undefined FUN_1487bce18(void)

undefined1 FUN_1487bce18(longlong param_1)

{
  undefined1 uVar1;
  longlong lVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)(param_1 + 0x10a0);
  lVar2 = (**(code **)(*(longlong *)(param_1 + 0x10a0) + 0x20))(plVar3);
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    lVar2 = (**(code **)(*plVar3 + 0x20))(plVar3);
    uVar1 = *(undefined1 *)(lVar2 + 0x90);
  }
  return uVar1;
}



// FUNCTION 1487bce5e FUN_1487bce5e body=1286 status=ok
// SIG undefined FUN_1487bce5e(void)

void FUN_1487bce5e(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 ****ppppuVar9;
  int iVar10;
  longlong *plVar11;
  undefined1 auStack_1b8 [40];
  longlong *local_190;
  undefined8 local_188;
  undefined1 *local_180;
  undefined8 local_178;
  undefined4 local_170;
  undefined4 local_16c;
  longlong local_168;
  longlong local_160;
  longlong *local_158;
  undefined8 uStack_150;
  longlong local_148;
  undefined8 ***local_140;
  undefined1 local_134 [4];
  undefined8 ***local_130;
  undefined1 *local_128;
  undefined8 local_120;
  undefined4 local_118;
  undefined4 local_114;
  byte local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_dc;
  undefined4 local_d4;
  longlong local_c8;
  undefined4 local_c0;
  longlong local_b8 [2];
  undefined1 local_a8 [16];
  undefined8 local_98;
  int local_90;
  undefined8 local_8c;
  undefined4 local_84;
  longlong local_78;
  undefined4 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  if (((param_2 & 1) != 0) &&
     (lVar6 = (**(code **)(*(longlong *)(param_1 + -0xb8) + 0x20))(param_1 + -0xb8), lVar6 != 0)) {
    FUN_143d57a0e(lVar6,param_1);
  }
  local_158 = (longlong *)0x0;
  uStack_150 = 0;
  local_160 = FUN_144a74fb4();
  if ((local_160 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_160);
  }
  FUN_1478ba3d6(param_1 + -0x1180,&local_160,&local_158,0);
  if ((longlong)(int)uStack_150 != 0) {
    plVar1 = local_158 + (int)uStack_150;
    plVar11 = local_158;
    do {
      lVar6 = *plVar11;
      if (lVar6 != 0) {
        lVar7 = FUN_144a74fb4();
        if ((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar7 + 0x38) * 8) == lVar7 + 0x30)) {
          if ((param_2 & 1) != 0) {
            lVar7 = FUN_144a78c84();
            if ((((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) +
                   (longlong)*(int *)(lVar7 + 0x38) * 8) == lVar7 + 0x30)) &&
                (plVar8 = (longlong *)FUN_148810db2(lVar6), *plVar8 != 0)) &&
               (cVar4 = FUN_148811d90(lVar6,param_1), cVar4 == '\0')) {
              FUN_148812522(lVar6);
            }
          }
          if ((param_2 & 2) != 0) {
            if ((*(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110
                         ) < DAT_14cb7130c) && (FUN_144b3d300(&DAT_14cb7130c), DAT_14cb7130c == -1))
            {
              FUN_1446ddc76(&DAT_14cb71304,&DAT_14b3e7af2,1);
              _Init_thread_footer(&DAT_14cb7130c);
            }
            lVar6 = *(longlong *)(lVar6 + 0xae8);
            if (lVar6 != 0) {
              lVar7 = FUN_140a87838();
              if (((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
                  (*(longlong *)
                    (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) +
                    (longlong)*(int *)(lVar7 + 0x38) * 8) == lVar7 + 0x30)) &&
                 (local_168 = *(longlong *)(lVar6 + 0x5d0), local_168 != 0)) {
                local_98 = 0;
                local_90 = 0;
                local_b8[0] = 0;
                local_b8[1] = 0;
                local_8c = 0xffffffff00000080;
                local_84 = 0;
                local_78 = 0;
                local_70 = 0;
                cVar4 = FUN_1487f1044(param_1,&DAT_14cb71304,&local_168,local_b8);
                if (cVar4 == '\x02') {
                  local_e8 = 0;
                  local_e0 = 0;
                  local_108 = 0;
                  uStack_100 = 0;
                  local_dc = 0xffffffff00000080;
                  local_d4 = 0;
                  local_c8 = 0;
                  local_c0 = 0;
                  local_130 = (undefined8 ***)&DAT_100000000;
                  local_128 = local_a8;
                  local_120 = 0xffffffff;
                  local_118 = 0;
                  iVar10 = 0;
                  if (local_90 != 0) {
                    FUN_1449c0562(&local_130);
                    iVar10 = local_90;
                  }
                  local_188 = (undefined8 ****)local_130;
                  local_180 = local_128;
                  local_178 = local_120;
                  uVar3 = local_178;
                  local_170 = local_118;
                  local_16c = local_114;
                  local_178._4_4_ = (int)((ulonglong)local_120 >> 0x20);
                  iVar5 = local_178._4_4_;
                  local_190 = local_b8;
                  if ((local_178._4_4_ != iVar10) || (local_178 = uVar3, local_128 != local_a8)) {
                    do {
                      local_178 = uVar3;
                      local_148 = *local_190 + (longlong)iVar5 * 0x14;
                      local_118 = CONCAT22(local_118._2_2_,4);
                      local_130 = (undefined8 ***)
                                  CONCAT44(local_130._4_4_,*(undefined4 *)(local_148 + 8));
                      local_110 = 3;
                      local_140 = &local_130;
                      FUN_140881f5a(&local_108,local_134,&local_148,0);
                      pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                                         (ulonglong)((uint)local_110 * 0x120));
                      if (pcVar2 != (code *)0x0) {
                        ppppuVar9 = &local_130;
                        if (0x18 < (ushort)local_118) {
                          ppppuVar9 = (undefined8 ****)local_130;
                        }
                        (*pcVar2)(ppppuVar9);
                      }
                      if (0x18 < (ushort)local_118) {
                        FUN_1400020a8(local_130);
                      }
                      local_178 = CONCAT44(local_178._4_4_,(uint)local_178 & ~local_188._4_4_);
                      FUN_1449c0562(&local_188);
                      iVar5 = local_178._4_4_;
                      uVar3 = local_178;
                    } while (local_190 != local_b8 ||
                             (local_180 != local_a8 || local_178._4_4_ != iVar10));
                  }
                  FUN_1487d553e(lVar6,&local_108);
                  local_c0 = 0;
                  if (local_c8 != 0) {
                    FUN_1400020a8();
                  }
                  FUN_140333f4e(&local_108);
                }
                local_70 = 0;
                if (local_78 != 0) {
                  FUN_1400020a8();
                }
                FUN_14064e7da(local_b8);
              }
            }
          }
        }
      }
      plVar11 = plVar11 + 1;
    } while (plVar11 != plVar1);
  }
  if (local_158 != (longlong *)0x0) {
    FUN_1400020a8(local_158);
  }
  if ((local_60 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1487bd366 FUN_1487bd366 body=387 status=ok
// SIG undefined FUN_1487bd366(void)

undefined8 FUN_1487bd366(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  bool bVar6;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar4 = *(longlong *)(param_1 + -0xdc0);
  if (lVar4 == 0) {
LAB_1487bd3af:
    bVar6 = false;
  }
  else {
    lVar3 = FUN_1449f3324();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < *(int *)(lVar3 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        != lVar3 + 0x30)) goto LAB_1487bd3af;
    bVar6 = *(char *)(lVar4 + 0x940) == '\x01';
  }
  if ((!bVar6) && (*(char *)(param_1 + -0x1008) != '\x03')) {
LAB_1487bd3be:
    uVar5 = 0;
    goto LAB_1487bd4bc;
  }
  for (lVar4 = param_1 + -0x1180; lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0x20)) {
    if ((*(uint *)(lVar4 + 8) & 0x30) != 0) goto LAB_1487bd3be;
  }
  FUN_1406c9d00(param_1 + 0x170,&local_38);
  if (local_30 == 0) {
    uVar5 = FUN_140927942();
    local_30 = FUN_14477b664(uVar5);
  }
  if (local_28 == (longlong *)0x0) {
    if ((((local_30 != 0) && (local_38 != 0)) &&
        (plVar1 = *(longlong **)(local_30 + 0xb8), plVar1 != (longlong *)0x0)) &&
       (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 != '\0')) {
      uVar5 = (**(code **)(*plVar1 + 0x110))(plVar1);
      local_28 = (longlong *)FUN_144aff482(uVar5,&local_38);
      if (local_28 != (longlong *)0x0) goto LAB_1487bd41a;
    }
  }
  else {
LAB_1487bd41a:
    plVar1 = local_28;
    lVar4 = (**(code **)(*local_28 + 8))(local_28);
    lVar3 = FUN_140355b7c();
    if (((lVar3 != 0) && (*(int *)(lVar3 + 0x38) <= *(int *)(lVar4 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
        lVar3 + 0x30)) {
      FUN_143ccbf54(param_1,plVar1 + 0xb1,0xffffffff);
    }
  }
  uVar5 = 1;
LAB_1487bd4bc:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 1487bd4ea FUN_1487bd4ea body=282 status=ok
// SIG undefined FUN_1487bd4ea(void)

void FUN_1487bd4ea(longlong param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong lVar9;
  
  if (*(char *)(param_1 + 0x178) != '\x03') {
    return;
  }
  if ((longlong)*(int *)(param_1 + 0x1238) == 0) {
    iVar6 = 0;
  }
  else {
    lVar7 = *(longlong *)(param_1 + 0x1230) + 8;
    lVar9 = (longlong)*(int *)(param_1 + 0x1238) * 0x28;
    do {
      cVar5 = FUN_144a7afa6(lVar7,param_2 + 1);
      if (cVar5 != '\0') {
        return;
      }
      lVar7 = lVar7 + 0x28;
      lVar9 = lVar9 + -0x28;
    } while (lVar9 != 0);
    iVar6 = *(int *)(param_1 + 0x1238);
  }
  *(uint *)(param_1 + 0x1238) = iVar6 + 1U;
  if (*(uint *)(&DAT_0000123c + param_1) < iVar6 + 1U) {
    FUN_1487c1734((longlong *)(param_1 + 0x1230),iVar6);
  }
  lVar9 = *(longlong *)(param_1 + 0x1230);
  lVar7 = (longlong)iVar6;
  *(undefined8 *)(lVar9 + lVar7 * 0x28) = *param_2;
  uVar2 = *(undefined4 *)((longlong)param_2 + 0xc);
  uVar3 = *(undefined4 *)(param_2 + 2);
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x14);
  puVar1 = (undefined4 *)(lVar9 + 8 + lVar7 * 0x28);
  *puVar1 = *(undefined4 *)(param_2 + 1);
  puVar1[1] = uVar2;
  puVar1[2] = uVar3;
  puVar1[3] = uVar4;
  *(undefined8 *)(lVar9 + 0x18 + lVar7 * 0x28) = 0;
  iVar6 = *(int *)(param_2 + 4);
  _Src = (void *)param_2[3];
  *(int *)(lVar9 + 0x20 + lVar7 * 0x28) = iVar6;
  if ((longlong)iVar6 == 0) {
    *(undefined4 *)(lVar9 + lVar7 * 0x28 + 0x24) = 0;
  }
  else {
    puVar8 = (undefined8 *)(lVar9 + lVar7 * 0x28 + 0x18);
    FUN_1446dd670(puVar8,iVar6,0);
    memcpy((void *)*puVar8,_Src,(longlong)iVar6 * 2);
  }
  FUN_144a62f0c(param_1,*(undefined8 *)(param_1 + 0x28),0x1a);
  FUN_1487bd604(param_1);
  return;
}



// FUNCTION 1487bd604 FUN_1487bd604 body=1674 status=ok
// SIG undefined FUN_1487bd604(void)

void FUN_1487bd604(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  int iVar10;
  longlong *plVar11;
  longlong *plVar12;
  ulonglong uVar13;
  ulonglong unaff_R12;
  byte bVar14;
  uint uVar15;
  ulonglong uVar16;
  longlong lVar17;
  int iVar18;
  ulonglong unaff_R15;
  undefined7 uVar20;
  longlong lVar19;
  undefined1 auStack_f8 [32];
  longlong local_d8;
  ulonglong local_d0;
  ulonglong local_c8;
  ulonglong local_c0;
  ulonglong local_b8;
  ulonglong local_b0;
  longlong *local_a8;
  undefined1 local_a0 [8];
  undefined8 *local_98;
  undefined4 local_90;
  longlong *local_88;
  longlong *plStack_80;
  ulonglong local_78;
  ulonglong local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_d8 = param_1;
  if ((longlong)*(int *)(param_1 + 0x1238) != 0) {
    uVar9 = *(ulonglong *)(param_1 + 0x1230);
    local_c0 = uVar9 + (longlong)*(int *)(param_1 + 0x1238) * 0x28;
    local_d0 = param_1 + 0x1250;
    do {
      local_c8 = uVar9;
      lVar5 = FUN_145971716();
      if (lVar5 == 0) {
        if ((longlong)*(int *)(local_d8 + 0x1258) != 0) {
          plVar11 = *(longlong **)(local_d8 + 0x1250);
          plVar12 = plVar11 + (longlong)*(int *)(local_d8 + 0x1258) * 2;
          lVar5 = local_c8 + 8;
          do {
            if (*plVar11 != 0) {
              FUN_147ad56e8(*plVar11,&local_78);
              unaff_R12 = 0;
              iVar4 = -1;
              if ((longlong)(int)local_70 != 0) {
                unaff_R12 = (longlong)(int)local_70 << 5;
                unaff_R15 = 0;
                uVar9 = local_78;
                do {
                  cVar3 = FUN_144a7afa6(uVar9,lVar5);
                  iVar4 = (int)unaff_R15;
                  if (cVar3 != '\0') break;
                  uVar9 = uVar9 + 0x20;
                  unaff_R15 = (ulonglong)((int)unaff_R15 + 1);
                  unaff_R12 = unaff_R12 - 0x20;
                  iVar4 = -1;
                } while (unaff_R12 != 0);
              }
              FUN_140861e20(local_78,local_70 & 0xffffffff);
              if (local_78 != 0) {
                FUN_1400020a8();
              }
              if (iVar4 != -1) goto LAB_1487bd919;
            }
            plVar11 = plVar11 + 2;
          } while (plVar11 != plVar12);
        }
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14cb71318) &&
           (FUN_144b3d300(&DAT_14cb71318), DAT_14cb71318 == -1)) {
          FUN_1446f470e(&DAT_14cb71310,L"GbxCharacterNetAttachBody",1);
          _Init_thread_footer(&DAT_14cb71318);
        }
        uVar9 = local_c8;
        local_78 = *(ulonglong *)(local_c8 + 0x10);
        if (local_78 == 0) {
          local_88 = (longlong *)0x0;
          plStack_80 = (longlong *)0x0;
          plStack_80._0_4_ = 0;
        }
        else {
          FUN_1400021e4(&local_78,&local_88);
        }
        iVar4 = (int)plStack_80 + -1;
        if ((int)plStack_80 == 0) {
          iVar4 = 0;
        }
        FUN_1446f82e2(&local_78,iVar4,local_88,1);
        local_70 = local_78;
        local_78 = DAT_14cb71310;
        local_68 = 0;
        if (local_88 != (longlong *)0x0) {
          FUN_1400020a8();
        }
        uVar6 = FUN_14050fd64();
        FUN_140b0c6f6(uVar6,&local_88);
        if (local_88 != (longlong *)0x0) {
          (**(code **)(*local_88 + 8))(local_88,uVar9 + 8,0);
          plVar11 = local_88;
          local_98 = (undefined8 *)0x0;
          local_90 = 0;
          FUN_1446efa72(&local_98,0,3,0x10);
          puVar2 = local_98;
          local_90 = 3;
          *local_98 = &PTR_LAB_149e020b0;
          LOCK();
          UNLOCK();
          lVar7 = DAT_14c758608 + 1;
          lVar5 = DAT_14c758608 + 1;
          if (lVar7 == 0) {
            LOCK();
            UNLOCK();
            lVar7 = DAT_14c758608 + 2;
            lVar5 = DAT_14c758608 + 2;
          }
          DAT_14c758608 = lVar5;
          local_98[2] = lVar7;
          *local_98 = &PTR_FUN_14b3e77a0;
          local_98[3] = 0;
          FUN_14485c47a(local_98 + 3,local_d8);
          puVar2[4] = FUN_1487bdd6e;
          *(undefined4 *)(puVar2 + 5) = 0;
          FUN_140844560(plVar11,local_a0);
          FUN_1407d097e(local_88);
          FUN_1487c18fe(local_d0,&local_88);
        }
        plVar11 = plStack_80;
        if (plStack_80 != (longlong *)0x0) {
          LOCK();
          plVar12 = plStack_80 + 1;
          *(int *)plVar12 = (int)*plVar12 + -1;
          UNLOCK();
          if ((int)*plVar12 == 0) {
            (**(code **)*plStack_80)(plStack_80);
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
LAB_1487bd919:
      uVar9 = local_c8 + 0x28;
    } while (uVar9 != local_c0);
  }
  lVar5 = local_d8;
  uVar9 = (ulonglong)*(int *)(local_d8 + 0x1258);
  if (uVar9 != 0) {
    plVar11 = *(longlong **)(local_d8 + 0x1250);
    uVar20 = (undefined7)(unaff_R15 >> 8);
    uVar13 = CONCAT71(uVar20,1);
    local_d0 = uVar9;
    if (*plVar11 != 0) {
      FUN_147ad56e8(*plVar11,&local_78);
      uVar13 = CONCAT71(uVar20,1);
      if ((longlong)*(int *)(lVar5 + 0x1238) != 0) {
        lVar19 = *(longlong *)(lVar5 + 0x1230);
        lVar7 = lVar19 + (longlong)*(int *)(lVar5 + 0x1238) * 0x28;
        do {
          uVar9 = local_78;
          lVar17 = (longlong)(int)local_70;
          if (lVar17 != 0) {
            unaff_R12 = 0;
            do {
              cVar3 = FUN_144a7afa6(uVar9 + unaff_R12,lVar19 + 8);
              uVar13 = uVar9;
              if (cVar3 != '\0') {
                unaff_R12 = ~unaff_R12;
                if ((unaff_R12 & 0x1fffffffe0) != 0) {
                  uVar13 = 0;
                  uVar9 = local_d0;
                  goto LAB_1487bdb7f;
                }
                break;
              }
              unaff_R12 = unaff_R12 + 0x20;
            } while (lVar17 * 0x20 != unaff_R12);
          }
          lVar19 = lVar19 + 0x28;
        } while (lVar19 != lVar7);
        uVar13 = CONCAT71((int7)(uVar13 >> 8),1);
        uVar9 = local_d0;
      }
LAB_1487bdb7f:
      FUN_140861e20(local_78,local_70 & 0xffffffff);
      if (local_78 != 0) {
        FUN_1400020a8();
      }
    }
    local_b8 = 0;
    uVar16 = 0;
    local_a8 = plVar11;
LAB_1487bd971:
    do {
      uVar8 = uVar16 & 0xffffffff;
      iVar4 = (int)uVar16;
      uVar15 = iVar4 + 1;
      uVar16 = (ulonglong)uVar15;
      if ((int)uVar15 < (int)uVar9) {
        uVar16 = (longlong)iVar4 + 1;
        unaff_R12 = CONCAT71((int7)(unaff_R12 >> 8),1);
        local_c0 = CONCAT44(local_c0._4_4_,(int)uVar13);
        local_b0 = uVar8;
        do {
          if (plVar11[uVar16 * 2] == 0) {
            if ((uVar13 & 1) == 0) {
              iVar4 = (int)local_b0;
              iVar10 = (int)uVar16 - iVar4;
              goto LAB_1487bdadb;
            }
          }
          else {
            FUN_147ad56e8(plVar11[uVar16 * 2],&local_78);
            bVar14 = 1;
            if ((longlong)*(int *)(lVar5 + 0x1238) != 0) {
              local_c8 = CONCAT44(local_c8._4_4_,(int)unaff_R12);
              lVar7 = *(longlong *)(lVar5 + 0x1230);
              lVar5 = lVar7 + (longlong)*(int *)(lVar5 + 0x1238) * 0x28;
              do {
                uVar9 = local_78;
                lVar19 = (longlong)(int)local_70;
                if (lVar19 != 0) {
                  uVar13 = 0;
                  do {
                    cVar3 = FUN_144a7afa6(uVar13 + uVar9,lVar7 + 8);
                    if (cVar3 != '\0') {
                      if ((~uVar13 & 0x1fffffffe0) != 0) {
                        bVar14 = 0;
                        goto LAB_1487bda2f;
                      }
                      break;
                    }
                    uVar13 = uVar13 + 0x20;
                  } while (lVar19 * 0x20 != uVar13);
                }
                lVar7 = lVar7 + 0x28;
                bVar14 = 1;
              } while (lVar7 != lVar5);
LAB_1487bda2f:
              uVar13 = local_c0 & 0xffffffff;
              unaff_R12 = local_c8 & 0xffffffff;
              lVar5 = local_d8;
              uVar9 = local_d0;
              plVar11 = local_a8;
            }
            FUN_140861e20(local_78,local_70 & 0xffffffff);
            if (local_78 != 0) {
              FUN_1400020a8();
            }
            uVar8 = local_b0;
            if (((bVar14 ^ (byte)uVar13) & 1) != 0) goto LAB_1487bda99;
          }
          uVar16 = uVar16 + 1;
          unaff_R12 = CONCAT71((int7)(unaff_R12 >> 8),(longlong)uVar16 < (longlong)uVar9);
        } while (uVar16 != uVar9);
        uVar16 = uVar9 & 0xffffffff;
        uVar8 = local_b0;
      }
      else {
        unaff_R12 = 0;
      }
LAB_1487bda99:
      iVar4 = (int)uVar8;
      iVar10 = (int)uVar16 - iVar4;
      if ((uVar13 & 1) != 0) {
        FUN_143c4cc76(plVar11 + (longlong)iVar4 * 2,iVar10);
        uVar13 = 0;
        if ((unaff_R12 & 1) == 0) break;
        goto LAB_1487bd971;
      }
LAB_1487bdadb:
      iVar18 = (int)local_b8;
      if (iVar18 != iVar4) {
        memmove(plVar11 + (longlong)iVar18 * 2,plVar11 + (longlong)iVar4 * 2,(longlong)iVar10 << 4);
      }
      local_b8 = (ulonglong)(uint)(iVar18 + iVar10);
      uVar13 = CONCAT71((uint7)(uint3)((uint)(iVar18 + iVar10) >> 8),1);
    } while ((unaff_R12 & 1) != 0);
    *(int *)(lVar5 + 0x1258) = (int)local_b8;
  }
  FUN_1487bdd6e(lVar5);
  if ((local_60 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1487bdc90 FUN_1487bdc90 body=193 status=ok
// SIG undefined FUN_1487bdc90(void)

void FUN_1487bdc90(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((*(char *)(param_1 + 0x178) == '\x03') && ((longlong)*(int *)(param_1 + 0x1238) != 0)) {
    lVar3 = *(longlong *)(param_1 + 0x1230) + 8;
    lVar2 = (longlong)*(int *)(param_1 + 0x1238) * 0x28;
    do {
      cVar1 = FUN_144a7afa6(lVar3,param_2 + 8);
      if (cVar1 != '\0') {
        local_40 = param_2;
        FUN_1487c17c8(param_1 + 0x1230);
        FUN_144a62f0c(param_1,*(undefined8 *)(param_1 + 0x28),0x1a);
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_68);
      }
      lVar3 = lVar3 + 0x28;
      lVar2 = lVar2 + -0x28;
    } while (lVar2 != 0);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487bdd6e FUN_1487bdd6e body=738 status=ok
// SIG undefined FUN_1487bdd6e(void)

void FUN_1487bdd6e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  longlong *plVar6;
  char cVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong *plVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  int iVar16;
  undefined1 auStack_e8 [40];
  longlong *local_c0;
  longlong local_b8;
  longlong *local_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_c0 = (longlong *)(**(code **)(*(longlong *)(param_1 + 0x10c8) + 0x20))(param_1 + 0x10c8);
  if (local_c0 != (longlong *)0x0) {
    plVar12 = (longlong *)(param_1 + 0x1240);
    if (0 < (longlong)*(int *)(param_1 + 0x1248)) {
      uVar14 = (longlong)*(int *)(param_1 + 0x1248);
      local_b8 = param_1;
      local_b0 = plVar12;
      do {
        uVar15 = uVar14 - 1;
        if (*(longlong *)(*plVar12 + uVar15 * 0x10) != 0) {
          lVar8 = FUN_14027347e();
          if (lVar8 == 0) {
LAB_1487bde34:
            local_98 = 0;
            uStack_90 = 0;
            local_a8 = 0;
            uStack_a0 = (longlong *)0x0;
            local_88 = 0;
          }
          else {
            lVar9 = FUN_1411675e0();
            if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x38) < *(int *)(lVar9 + 0x38)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) +
                 (longlong)*(int *)(lVar9 + 0x38) * 8) != lVar9 + 0x30)) goto LAB_1487bde34;
            local_98 = 0;
            uStack_90 = 0;
            local_a8 = 0;
            uStack_a0 = (longlong *)0x0;
            local_88 = 0;
            FUN_1400bbfc4(&local_80,lVar8);
            uStack_a0 = (longlong *)CONCAT44(uStack_7c,local_80);
            local_98 = CONCAT44(uStack_74,uStack_78);
            if (uStack_90 != 0) {
              FUN_1400020a8();
            }
            uStack_90 = CONCAT44(uStack_6c,local_70);
            local_88 = CONCAT44(uStack_64,uStack_68);
            cVar7 = (*(code *)PTR_FUN_14c758760)();
            if (cVar7 == '\0') {
LAB_1487bdf76:
              FUN_14485c47a(&local_a8,lVar8);
            }
            else {
              uVar4 = *(uint *)(lVar8 + 0xc);
              if ((int)uVar4 < DAT_14c9647dc) {
                lVar9 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
              }
              else {
                lVar9 = 0;
              }
              if ((*(uint *)(lVar9 + 8) & 0x8400000) == 0) goto LAB_1487bdf76;
              local_a8 = 0;
            }
          }
          iVar3 = *(int *)(param_1 + 0x1238);
          iVar16 = -1;
          if ((longlong)iVar3 != 0) {
            lVar8 = *(longlong *)(param_1 + 0x1230);
            uVar13 = 0;
            do {
              cVar7 = FUN_144a7afa6(lVar8 + 8 + uVar13,&uStack_a0);
              plVar12 = local_b0;
              param_1 = local_b8;
              if (cVar7 != '\0') {
                iVar16 = (int)(uVar13 >> 3) * -0x33333333;
                break;
              }
              uVar13 = uVar13 + 0x28;
            } while ((longlong)iVar3 * 0x28 != uVar13);
          }
          if (uStack_90 != 0) {
            FUN_1400020a8();
          }
          if (iVar16 == -1) {
            (**(code **)(*local_c0 + 0x80))(local_c0,uVar15 * 0x10 + *plVar12);
            FUN_1487c1a04(plVar12,uVar15 & 0xffffffff);
          }
        }
        bVar5 = 1 < (longlong)uVar14;
        uVar14 = uVar15;
      } while (bVar5);
    }
    if ((longlong)*(int *)(param_1 + 0x1238) != 0) {
      lVar8 = *(longlong *)(param_1 + 0x1230);
      lVar9 = (longlong)*(int *)(param_1 + 0x1238) * 0x28;
      do {
        lVar10 = FUN_145971716(lVar8);
        if (lVar10 != 0) {
          uVar11 = FUN_145971716(lVar8);
          (**(code **)(*local_c0 + 0x78))(local_c0,&local_a8,uVar11);
          if (local_a8 != 0) {
            FUN_1487c1a7a(plVar12,&local_a8);
          }
          plVar6 = uStack_a0;
          if (uStack_a0 != (longlong *)0x0) {
            LOCK();
            plVar1 = uStack_a0 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*uStack_a0)(uStack_a0);
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
        lVar8 = lVar8 + 0x28;
        lVar9 = lVar9 + -0x28;
      } while (lVar9 != 0);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1487be052 FUN_1487be052 body=124 status=ok
// SIG undefined FUN_1487be052(void)

undefined8 * FUN_1487be052(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_14b3e7b10;
  FUN_140a1bd16(param_1 + 0xb);
  *param_1 = &PTR_LAB_14b424db0;
  if (DAT_14cb8a6f8 != (undefined8 *)0x0) {
    puVar1 = DAT_14cb8a6f8;
    if (DAT_14cb8a6f8 == param_1) {
      puVar2 = &DAT_14cb8a6f8;
    }
    else {
      do {
        puVar2 = puVar1;
        puVar1 = (undefined8 *)puVar2[5];
        if (puVar1 == (undefined8 *)0x0) goto LAB_1487be0a1;
      } while (puVar1 != param_1);
      puVar2 = puVar2 + 5;
    }
    *puVar2 = param_1[5];
    param_1[5] = 0;
  }
LAB_1487be0a1:
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1487be0ce FUN_1487be0ce body=38 status=ok
// SIG undefined FUN_1487be0ce(void)

undefined8 FUN_1487be0ce(undefined8 param_1,int param_2)

{
  FUN_144a7fc42();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1487be0f4 FUN_1487be0f4 body=230 status=ok
// SIG undefined FUN_1487be0f4(void)

longlong * FUN_1487be0f4(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong *puVar3;
  undefined4 uVar4;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = *param_2;
  if (lVar1 == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    lVar2 = param_1[0x16];
    if (DAT_14c950c29 == 1) {
      FUN_1456cec3c(lVar1);
    }
    local_28 = lVar1;
    if ((DAT_14c950c29 & 1) != 0) {
      FUN_1456cec3c(lVar1);
    }
    uVar4 = FUN_140bddff2(lVar2 + 0x18,&local_28);
  }
  local_28 = CONCAT44(local_28._4_4_,uVar4);
  puVar3 = (ulonglong *)param_1[1];
  if (puVar3[1] < *puVar3 + 4) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_28,4);
    }
    else {
      thunk_FUN_14572512c(param_1,&local_28);
    }
  }
  else {
    *puVar3 = *puVar3 + 4;
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487be1dc FUN_1487be1dc body=236 status=ok
// SIG undefined FUN_1487be1dc(void)

longlong * FUN_1487be1dc(longlong *param_1,longlong param_2)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = FUN_14479d2ce(param_2);
  if (local_28 != 0) goto LAB_1487be205;
  if (((*(int *)(param_2 + 0xc) == 0 && *(int *)(param_2 + 8) == 0) && *(int *)(param_2 + 0x10) == 0
      ) && *(int *)(param_2 + 0x14) == 0) {
LAB_1487be299:
    local_28 = 0;
  }
  else {
    lVar3 = thunk_FUN_140971090();
    cVar2 = (*(code *)PTR_FUN_14c758760)();
    if ((lVar3 == 0) || (cVar2 == '\0')) {
      FUN_14485c47a(param_2,lVar3);
      if (lVar3 == 0) goto LAB_1487be299;
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
        FUN_14485c47a(param_2,lVar3);
      }
    }
    local_28 = 0;
    if ((*(uint *)(lVar3 + 8) >> 0x1e & 1) == 0) {
      local_28 = lVar3;
    }
  }
LAB_1487be205:
  (**(code **)(*param_1 + 0x150))(param_1);
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1487be2ea FUN_1487be2ea body=38 status=ok
// SIG undefined FUN_1487be2ea(void)

undefined8 FUN_1487be2ea(undefined8 param_1,int param_2)

{
  FUN_144a7fc42();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1487be310 FUN_1487be310 body=226 status=ok
// SIG undefined FUN_1487be310(void)

longlong * FUN_1487be310(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  longlong lVar3;
  undefined1 auStack_48 [36];
  uint local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0xffffffff;
  puVar2 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_24,4);
    }
    else {
      thunk_FUN_14572512c(param_1,&local_24);
    }
  }
  else {
    local_24 = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  if (((int)local_24 < 0) || (*(int *)(param_1[0x14] + 0x20) <= (int)local_24)) {
    lVar3 = 0;
  }
  else {
    lVar3 = *(longlong *)(*(longlong *)(param_1[0x14] + 0x18) + (ulonglong)local_24 * 8);
    if ((DAT_14c950c29 == 1) && (lVar3 != 0)) {
      FUN_1456cec3c(lVar3);
    }
    if ((lVar3 != 0) && ((DAT_14c950c29 & 1) != 0)) {
      FUN_1456cec3c(lVar3);
    }
  }
  *param_2 = lVar3;
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1487be3f4 FUN_1487be3f4 body=236 status=ok
// SIG undefined FUN_1487be3f4(void)

longlong * FUN_1487be3f4(longlong *param_1,longlong param_2)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = FUN_14479d2ce(param_2);
  if (local_28 != 0) goto LAB_1487be41d;
  if (((*(int *)(param_2 + 0xc) == 0 && *(int *)(param_2 + 8) == 0) && *(int *)(param_2 + 0x10) == 0
      ) && *(int *)(param_2 + 0x14) == 0) {
LAB_1487be4b1:
    local_28 = 0;
  }
  else {
    lVar3 = thunk_FUN_140971090();
    cVar2 = (*(code *)PTR_FUN_14c758760)();
    if ((lVar3 == 0) || (cVar2 == '\0')) {
      FUN_14485c47a(param_2,lVar3);
      if (lVar3 == 0) goto LAB_1487be4b1;
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
        FUN_14485c47a(param_2,lVar3);
      }
    }
    local_28 = 0;
    if ((*(uint *)(lVar3 + 8) >> 0x1e & 1) == 0) {
      local_28 = lVar3;
    }
  }
LAB_1487be41d:
  (**(code **)(*param_1 + 0x150))(param_1);
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1487be4e2 FUN_1487be4e2 body=48 status=ok
// SIG undefined FUN_1487be4e2(void)

void FUN_1487be4e2(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0xf8,8);
  }
  return;
}



// FUNCTION 1487be512 FUN_1487be512 body=114 status=ok
// SIG undefined FUN_1487be512(void)

void FUN_1487be512(longlong *param_1,int param_2)

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



// FUNCTION 1487be584 FUN_1487be584 body=114 status=ok
// SIG undefined FUN_1487be584(void)

void FUN_1487be584(longlong *param_1,int param_2)

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
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x18) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x18);
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



// FUNCTION 1487be5f6 FUN_1487be5f6 body=122 status=ok
// SIG undefined FUN_1487be5f6(void)

void FUN_1487be5f6(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x60) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x60) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x60 + 4) = uVar4;
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



// FUNCTION 1487be670 FUN_1487be670 body=90 status=ok
// SIG undefined FUN_1487be670(void)

void FUN_1487be670(void *param_1)

{
  if (*(int *)((longlong)param_1 + 0x10c) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x10c) = 0;
    if (*(void **)((longlong)param_1 + 0x100) != (void *)0x0) {
      memmove(param_1,*(void **)((longlong)param_1 + 0x100),
              (longlong)*(int *)((longlong)param_1 + 0x108) << 3);
      FUN_1446efa72((longlong)param_1 + 0x100,0,0,8);
      return;
    }
  }
  return;
}



// FUNCTION 1487be6ca FUN_1487be6ca body=141 status=ok
// SIG undefined FUN_1487be6ca(void)

void FUN_1487be6ca(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x100);
  if ((uint)param_3 < 0x21) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x100,0,param_3,8);
    memmove(*(void **)((longlong)param_1 + 0x100),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x100,param_2,param_3,8);
  return;
}



// FUNCTION 1487be758 FUN_1487be758 body=119 status=ok
// SIG undefined FUN_1487be758(void)

void FUN_1487be758(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x108);
  if (param_2 <= (int)uVar1) {
    iVar5 = 0x20;
    if (0x20 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (0x20 < *(uint *)(param_1 + 0x10c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 3,0);
      iVar2 = (int)(uVar3 >> 3);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x10c) = iVar5;
    FUN_1487be6ca(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1487be7d0 FUN_1487be7d0 body=92 status=ok
// SIG undefined FUN_1487be7d0(void)

void FUN_1487be7d0(longlong *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((longlong)param_2 * 0x58 + *param_1);
  FUN_14028f43e(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)param_3 * 0x58 + (longlong)_Dst),(longlong)iVar2 * 0x58);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 1487be82c FUN_1487be82c body=63 status=ok
// SIG undefined FUN_1487be82c(void)

void FUN_1487be82c(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1487be86c(param_1,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x58,8);
  }
  return;
}



// FUNCTION 1487be86c FUN_1487be86c body=109 status=ok
// SIG undefined FUN_1487be86c(void)

ulonglong FUN_1487be86c(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_3;
  if (((ulonglong)((longlong)(int)(param_3 - param_2) * 0x58) < 0x4000) &&
     ((int)(param_3 * 2) <= (int)(param_2 * 3))) {
    return uVar1;
  }
  if (param_2 == 0 || 0x40 < (int)(param_3 - param_2)) {
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_2 * 0x58,8);
      uVar1 = uVar1 / 0x58;
    }
  }
  return uVar1;
}



// FUNCTION 1487be8da FUN_1487be8da body=114 status=ok
// SIG undefined FUN_1487be8da(void)

void FUN_1487be8da(longlong *param_1,int param_2)

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



// FUNCTION 1487be94c FUN_1487be94c body=75 status=ok
// SIG undefined FUN_1487be94c(void)

void FUN_1487be94c(void *param_1)

{
  if (*(int *)((longlong)param_1 + 0x1c) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
    if (*(void **)((longlong)param_1 + 0x10) != (void *)0x0) {
      memmove(param_1,*(void **)((longlong)param_1 + 0x10),
              (longlong)*(int *)((longlong)param_1 + 0x18) << 3);
      FUN_1446efa72((longlong)param_1 + 0x10,0,0,8);
      return;
    }
  }
  return;
}



// FUNCTION 1487be998 FUN_1487be998 body=132 status=ok
// SIG undefined FUN_1487be998(void)

void FUN_1487be998(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x10);
  if ((uint)param_3 < 3) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x10,0,param_3,8);
    memmove(*(void **)((longlong)param_1 + 0x10),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x10,param_2,param_3,8);
  return;
}



// FUNCTION 1487bea1c FUN_1487bea1c body=124 status=ok
// SIG undefined FUN_1487bea1c(void)

void FUN_1487bea1c(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  int iVar6;
  
  uVar1 = *(uint *)(param_1 + 0x18);
  if (param_2 <= (int)uVar1) {
    iVar6 = 2;
    if (2 < uVar1) {
      if (*(uint *)(param_1 + 0x1c) < 3) {
        uVar2 = 4;
        if (4 < uVar1) {
          uVar2 = uVar1;
        }
        lVar5 = (longlong)(int)uVar2;
      }
      else {
        lVar5 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
      }
      uVar4 = FUN_144a3809e(lVar5 << 3,0);
      iVar3 = (int)(uVar4 >> 3);
      iVar6 = 0x7fffffff;
      if ((int)uVar1 <= iVar3) {
        iVar6 = iVar3;
      }
    }
    *(int *)(param_1 + 0x1c) = iVar6;
    FUN_1487be998(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1487bea9a FUN_1487bea9a body=147 status=ok
// SIG undefined FUN_1487bea9a(void)

void FUN_1487bea9a(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
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
    uVar4 = FUN_144a3809e(lVar3 * 0x28,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x28)) {
      uVar5 = uVar4 / 0x28 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x28,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1487beb2e FUN_1487beb2e body=114 status=ok
// SIG undefined FUN_1487beb2e(void)

void FUN_1487beb2e(longlong *param_1,int param_2)

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



// FUNCTION 1487beba0 FUN_1487beba0 body=114 status=ok
// SIG undefined FUN_1487beba0(void)

void FUN_1487beba0(longlong *param_1,int param_2)

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
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x24) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x24);
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



// FUNCTION 1487bec12 FUN_1487bec12 body=110 status=ok
// SIG undefined FUN_1487bec12(void)

void FUN_1487bec12(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x28);
  if (param_2 <= (int)uVar1) {
    iVar5 = 4;
    if (4 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (4 < *(uint *)(param_1 + 0x2c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 3,0);
      iVar2 = (int)(uVar3 >> 3);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x2c) = iVar5;
    FUN_1487bec82(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1487bec82 FUN_1487bec82 body=132 status=ok
// SIG undefined FUN_1487bec82(void)

void FUN_1487bec82(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x20);
  if ((uint)param_3 < 5) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x20,0,param_3,8);
    memmove(*(void **)((longlong)param_1 + 0x20),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x20,param_2,param_3,8);
  return;
}



// FUNCTION 1487bed06 FUN_1487bed06 body=141 status=ok
// SIG undefined FUN_1487bed06(void)

void FUN_1487bed06(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x100);
  if ((uint)param_3 < 0x21) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x100,0,param_3,8);
    memmove(*(void **)((longlong)param_1 + 0x100),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x100,param_2,param_3,8);
  return;
}



// FUNCTION 1487bed94 FUN_1487bed94 body=114 status=ok
// SIG undefined FUN_1487bed94(void)

void FUN_1487bed94(longlong *param_1,int param_2)

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



// FUNCTION 1487bee06 FUN_1487bee06 body=114 status=ok
// SIG undefined FUN_1487bee06(void)

void FUN_1487bee06(longlong *param_1,int param_2)

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
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x18) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x18);
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



// FUNCTION 1487bee78 FUN_1487bee78 body=31 status=ok
// SIG undefined FUN_1487bee78(void)

undefined8 FUN_1487bee78(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1487beeba FUN_1487beeba body=101 status=ok
// SIG undefined FUN_1487beeba(void)

void FUN_1487beeba(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e7260;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar2;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  *puVar1 = &PTR_FUN_14b3e71f0;
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  return;
}



// FUNCTION 1487bef20 FUN_1487bef20 body=101 status=ok
// SIG undefined FUN_1487bef20(void)

void FUN_1487bef20(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e7260;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar2;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  *puVar1 = &PTR_FUN_14b3e71f0;
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  return;
}



// FUNCTION 1487bef86 FUN_1487bef86 body=134 status=ok
// SIG undefined FUN_1487bef86(void)

void FUN_1487bef86(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b3e7260;
  uVar3 = *(undefined4 *)(param_1 + 0xc);
  uVar4 = *(undefined4 *)(param_1 + 0x10);
  uVar5 = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)&p_Var1->CriticalSection = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)((longlong)&p_Var1->CriticalSection + 4) = uVar3;
  *(undefined4 *)&(p_Var1->ProcessLocksList).Flink = uVar4;
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Flink + 4) = uVar5;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  *(undefined ***)p_Var1 = &PTR_FUN_14b3e71f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)uVar2;
  p_Var1->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001487beffd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1487bf00c FUN_1487bf00c body=64 status=ok
// SIG undefined FUN_1487bf00c(void)

void FUN_1487bf00c(longlong param_1)

{
  undefined1 auStack_38 [32];
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *(undefined4 *)(param_1 + 8);
  uStack_14 = *(undefined4 *)(param_1 + 0xc);
  uStack_10 = *(undefined4 *)(param_1 + 0x10);
  uStack_c = *(undefined4 *)(param_1 + 0x14);
  (**(code **)(param_1 + 0x20))();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487bf05c FUN_1487bf05c body=189 status=ok
// SIG undefined FUN_1487bf05c(void)

int FUN_1487bf05c(longlong *param_1,uint param_2,undefined8 *param_3)

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
        cVar1 = FUN_140109b12(&local_40,&local_48);
        if (cVar1 != '\0') goto LAB_1487bf085;
        lVar3 = *param_1;
        iVar4 = *(int *)(lVar3 + 0x50 + (longlong)iVar4 * 0x60);
      } while (iVar4 != -1);
    }
  }
  iVar4 = -1;
LAB_1487bf085:
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar4;
}



// FUNCTION 1487bf11a FUN_1487bf11a body=122 status=ok
// SIG undefined FUN_1487bf11a(void)

void FUN_1487bf11a(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x60) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x60) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x60 + 4) = uVar4;
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



// FUNCTION 1487bf194 FUN_1487bf194 body=335 status=ok
// SIG undefined FUN_1487bf194(void)

undefined4 * FUN_1487bf194(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1487bf2e4(param_1,local_48);
  puVar1 = (undefined8 *)param_3[1];
  uVar2 = *(undefined8 *)*param_3;
  *local_40 = uVar2;
  local_40[1] = *puVar1;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar9 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar5 = (uint)uVar2 & 0xffff;
  uVar9 = ((uint)uVar2 << 0x10 | uVar5) + (int)((ulonglong)uVar2 >> 0x20) +
          (uVar9 << 0x13 | uVar9 & 0xffff) + (uVar5 >> 4);
  cVar4 = FUN_1487bf3ca(param_1,uVar9,local_40,&local_4c);
  uVar3 = local_4c;
  if (cVar4 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar5) {
      uVar6 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar9 = *(int *)(param_1 + 0x48) - 1U & uVar9;
      *(uint *)((longlong)local_40 + 0x14) = uVar9;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
           *(undefined4 *)
            (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar9) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar9) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_1487bf4ba(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487bf2e4 FUN_1487bf2e4 body=230 status=ok
// SIG undefined FUN_1487bf2e4(void)

int * FUN_1487bf2e4(longlong *param_1,int *param_2)

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
      FUN_1403951a8(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x18);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x18) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x18 + *param_1;
  return param_2;
}



// FUNCTION 1487bf3ca FUN_1487bf3ca body=125 status=ok
// SIG undefined FUN_1487bf3ca(void)

undefined8 FUN_1487bf3ca(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  
  if (1 < (uint)((int)param_1[1] - *(int *)((longlong)param_1 + 0x34))) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar6 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar6 != -1) {
      do {
        plVar5 = (longlong *)(*param_1 + (longlong)iVar6 * 0x18);
        if (*plVar5 == *param_3) {
          lVar3 = *param_3;
          uVar1 = *(undefined4 *)((longlong)param_3 + 4);
          lVar4 = param_3[1];
          uVar2 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(int *)plVar5 = (int)lVar3;
          *(undefined4 *)((longlong)plVar5 + 4) = uVar1;
          *(int *)(plVar5 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar5 + 0xc) = uVar2;
          FUN_1487bf448((int)lVar3,*param_4);
          *param_4 = iVar6;
          return 1;
        }
        iVar6 = (int)plVar5[2];
      } while (iVar6 != -1);
    }
  }
  return 0;
}



// FUNCTION 1487bf448 FUN_1487bf448 body=114 status=ok
// SIG undefined FUN_1487bf448(void)

void FUN_1487bf448(longlong *param_1,int param_2)

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
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x18) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x18);
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



// FUNCTION 1487bf4ba FUN_1487bf4ba body=473 status=ok
// SIG undefined FUN_1487bf4ba(void)

void FUN_1487bf4ba(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
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
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
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
        lVar6 = (longlong)iVar5;
        uVar4 = *(undefined8 *)(lVar3 + lVar6 * 0x18);
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar8 = (uint)uVar4 & 0xffff;
        uVar10 = (longlong)
                 (int)(((uint)uVar4 << 0x10 | uVar8) + (int)((ulonglong)uVar4 >> 0x20) +
                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x14 + lVar6 * 0x18) = iVar9;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x10 + lVar6 * 0x18) =
             *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
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



// FUNCTION 1487bf694 FUN_1487bf694 body=116 status=ok
// SIG undefined FUN_1487bf694(void)

void FUN_1487bf694(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x68) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x68) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x68 + 4) = uVar5;
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



// FUNCTION 1487bf708 FUN_1487bf708 body=83 status=ok
// SIG undefined FUN_1487bf708(void)

longlong * FUN_1487bf708(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    uVar3 = FUN_1464c2cba();
    cVar2 = FUN_1448093f4(lVar1,uVar3);
    if (cVar2 != '\0') {
      *param_2 = *param_1;
      lVar1 = param_1[1];
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



// FUNCTION 1487bf75c FUN_1487bf75c body=29 status=ok
// SIG undefined FUN_1487bf75c(void)

undefined8 FUN_1487bf75c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1487bf794 FUN_1487bf794 body=29 status=ok
// SIG undefined FUN_1487bf794(void)

bool FUN_1487bf794(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 1487bf7b2 FUN_1487bf7b2 body=26 status=ok
// SIG undefined FUN_1487bf7b2(void)

bool FUN_1487bf7b2(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 1487bf7cc FUN_1487bf7cc body=24 status=ok
// SIG undefined FUN_1487bf7cc(void)

bool FUN_1487bf7cc(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 1487bf7e4 FUN_1487bf7e4 body=101 status=ok
// SIG undefined FUN_1487bf7e4(void)

void FUN_1487bf7e4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3e7350;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1487bf84a FUN_1487bf84a body=101 status=ok
// SIG undefined FUN_1487bf84a(void)

void FUN_1487bf84a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3e7350;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1487bf8b0 FUN_1487bf8b0 body=134 status=ok
// SIG undefined FUN_1487bf8b0(void)

void FUN_1487bf8b0(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b3e7350;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar3;
  p_Var1->EntryCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001487bf927. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1487bf936 FUN_1487bf936 body=39 status=ok
// SIG undefined FUN_1487bf936(void)

void FUN_1487bf936(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001487bf959. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1);
  return;
}



// FUNCTION 1487bf95e FUN_1487bf95e body=146 status=ok
// SIG undefined FUN_1487bf95e(void)

bool FUN_1487bf95e(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_28,0);
    lVar3 = local_28;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487bfa0c FUN_1487bfa0c body=101 status=ok
// SIG undefined FUN_1487bfa0c(void)

void FUN_1487bfa0c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e7b60;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3e73c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1487bfa72 FUN_1487bfa72 body=101 status=ok
// SIG undefined FUN_1487bfa72(void)

void FUN_1487bfa72(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e7b60;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3e73c0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1487bfad8 FUN_1487bfad8 body=134 status=ok
// SIG undefined FUN_1487bfad8(void)

void FUN_1487bfad8(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b3e7b60;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b3e73c0;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar3;
  p_Var1->EntryCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001487bfb4f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1487bfb5e FUN_1487bfb5e body=62 status=ok
// SIG undefined FUN_1487bfb5e(void)

void FUN_1487bfb5e(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001487bfb99. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,param_3,param_4);
  return;
}



// FUNCTION 1487bfb9e FUN_1487bfb9e body=113 status=ok
// SIG undefined FUN_1487bfb9e(void)

void FUN_1487bfb9e(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x28,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x28)) {
      uVar2 = uVar1 / 0x28 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x28,8);
  }
  return;
}



// FUNCTION 1487bfc22 FUN_1487bfc22 body=126 status=ok
// SIG undefined FUN_1487bfc22(void)

void FUN_1487bfc22(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e74e0;
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  lVar2 = *(longlong *)(param_1 + 0x18);
  puVar1[3] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  *puVar1 = &PTR_FUN_14b3e7470;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1487bfca0 FUN_1487bfca0 body=164 status=ok
// SIG undefined FUN_1487bfca0(void)

void FUN_1487bfca0(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  _LIST_ENTRY *p_Var2;
  undefined8 uVar3;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b3e74e0;
  p_Var1->CriticalSection = *(_RTL_CRITICAL_SECTION **)(param_1 + 8);
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  p_Var2 = *(_LIST_ENTRY **)(param_1 + 0x18);
  (p_Var1->ProcessLocksList).Blink = p_Var2;
  if (p_Var2 != (_LIST_ENTRY *)0x0) {
    LOCK();
    *(int *)&p_Var2->Blink = *(int *)&p_Var2->Blink + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)uVar3;
  p_Var1->ContentionCount = (int)((ulonglong)uVar3 >> 0x20);
  *(undefined ***)p_Var1 = &PTR_FUN_14b3e7470;
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar3;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar3 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar3 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001487bfd34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1487bfd44 FUN_1487bfd44 body=88 status=ok
// SIG undefined FUN_1487bfd44(void)

void FUN_1487bfd44(longlong param_1)

{
  code *pcVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *(undefined8 *)(param_1 + 0x10);
  pcVar1 = *(code **)(param_1 + 0x28);
  local_10 = *(longlong *)(param_1 + 0x18);
  if (local_10 != 0) {
    LOCK();
    *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
    UNLOCK();
  }
  (*pcVar1)(*(undefined8 *)(param_1 + 8),&local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487bfda0 FUN_1487bfda0 body=109 status=ok
// SIG undefined FUN_1487bfda0(void)

ulonglong FUN_1487bfda0(longlong param_1,longlong param_2,int param_3)

{
  char cVar1;
  undefined8 unaff_RSI;
  ulonglong uVar2;
  
  uVar2 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if (param_3 != 0) {
    param_1 = param_1 + 0x28;
    param_2 = param_2 + 0x28;
    do {
      cVar1 = *(char *)(param_1 + -0x28);
      if (cVar1 != *(char *)(param_2 + -0x28)) {
LAB_1487bfdff:
        uVar2 = 0;
        break;
      }
      if (cVar1 == '\x02') {
        cVar1 = FUN_144a43716(param_1,param_2);
        if (cVar1 == '\0') goto LAB_1487bfdff;
      }
      else if ((cVar1 == '\x01') &&
              (*(longlong *)(param_1 + -0x20) != *(longlong *)(param_2 + -0x20)))
      goto LAB_1487bfdff;
      param_1 = param_1 + 0x58;
      param_2 = param_2 + 0x58;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return uVar2 & 0xffffffff;
}



// FUNCTION 1487bfe0e FUN_1487bfe0e body=31 status=ok
// SIG undefined FUN_1487bfe0e(void)

undefined8 FUN_1487bfe0e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1487bfe48 FUN_1487bfe48 body=29 status=ok
// SIG undefined FUN_1487bfe48(void)

bool FUN_1487bfe48(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 1487bfe66 FUN_1487bfe66 body=101 status=ok
// SIG undefined FUN_1487bfe66(void)

void FUN_1487bfe66(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3e7570;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1487bfecc FUN_1487bfecc body=101 status=ok
// SIG undefined FUN_1487bfecc(void)

void FUN_1487bfecc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3e7570;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1487bff32 FUN_1487bff32 body=134 status=ok
// SIG undefined FUN_1487bff32(void)

void FUN_1487bff32(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b3e7570;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar3;
  p_Var1->EntryCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001487bffa9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1487bffb8 FUN_1487bffb8 body=39 status=ok
// SIG undefined FUN_1487bffb8(void)

void FUN_1487bffb8(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001487bffdb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1);
  return;
}



// FUNCTION 1487bfffa FUN_1487bfffa body=101 status=ok
// SIG undefined FUN_1487bfffa(void)

void FUN_1487bfffa(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e7b60;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3e75e0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1487c0060 FUN_1487c0060 body=134 status=ok
// SIG undefined FUN_1487c0060(void)

void FUN_1487c0060(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b3e7b60;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b3e75e0;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar3;
  p_Var1->EntryCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001487c00d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1487c00e6 FUN_1487c00e6 body=62 status=ok
// SIG undefined FUN_1487c00e6(void)

void FUN_1487c00e6(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001487c0121. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1,param_2,param_3,param_4);
  return;
}



// FUNCTION 1487c0124 FUN_1487c0124 body=48 status=ok
// SIG undefined FUN_1487c0124(void)

void FUN_1487c0124(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x58,8);
  }
  return;
}



// FUNCTION 1487c0154 FUN_1487c0154 body=31 status=ok
// SIG undefined FUN_1487c0154(void)

void FUN_1487c0154(undefined8 *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x19) = 0;
  *(undefined8 *)((longlong)param_1 + 0x21) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  return;
}



// FUNCTION 1487c0174 FUN_1487c0174 body=143 status=ok
// SIG undefined FUN_1487c0174(void)

void FUN_1487c0174(longlong param_1,int param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  
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
    uVar5 = FUN_144a3809e(lVar4 * 0x70,8);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar5 >> 4;
    iVar6 = SUB164(auVar2 * ZEXT816(0x2492492492492493),8);
    iVar7 = 0x7fffffff;
    if ((int)uVar1 <= iVar6) {
      iVar7 = iVar6;
    }
    *(int *)(param_1 + 0xc) = iVar7;
    FUN_1446f8d3c(param_1,param_2,iVar7,0x70,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1487c0204 FUN_1487c0204 body=147 status=ok
// SIG undefined FUN_1487c0204(void)

void FUN_1487c0204(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
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
    uVar4 = FUN_144a3809e(lVar3 * 0x18,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x18)) {
      uVar5 = uVar4 / 0x18 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x18,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1487c0298 FUN_1487c0298 body=47 status=ok
// SIG undefined FUN_1487c0298(void)

undefined8 FUN_1487c0298(void)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_1447262c2();
  if (lVar1 != 0) {
    uVar2 = FUN_1401fa540();
    uVar2 = FUN_144718840(lVar1,uVar2);
    return uVar2;
  }
  return 0;
}



// FUNCTION 1487c02c8 FUN_1487c02c8 body=48 status=ok
// SIG undefined FUN_1487c02c8(void)

void FUN_1487c02c8(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x38,8);
  }
  return;
}



// FUNCTION 1487c02f8 FUN_1487c02f8 body=128 status=ok
// SIG undefined FUN_1487c02f8(void)

void FUN_1487c02f8(int param_1)

{
  byte bVar1;
  longlong lVar2;
  undefined *puVar3;
  int iVar4;
  
  lVar2 = DAT_14cb71148;
  if (DAT_14cb7117c != 0) {
    *(int *)(DAT_14cb71148 + (longlong)DAT_14cb71178 * 0x20) = param_1;
  }
  *(undefined4 *)(lVar2 + (longlong)param_1 * 0x20) = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14cb7117c) {
    iVar4 = DAT_14cb71178;
  }
  *(int *)(lVar2 + 4 + (longlong)param_1 * 0x20) = iVar4;
  DAT_14cb7117c = DAT_14cb7117c + 1;
  puVar3 = &DAT_14cb71158;
  if (DAT_14cb71168 != (undefined *)0x0) {
    puVar3 = DAT_14cb71168;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar1 = (byte)param_1 & 0x1f;
  DAT_14cb71178 = param_1;
  *(uint *)(puVar3 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar3 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
  return;
}



// FUNCTION 1487c0378 FUN_1487c0378 body=98 status=ok
// SIG undefined FUN_1487c0378(void)

void FUN_1487c0378(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Dst;
  
  _Dst = (void *)((ulonglong)param_2 * 0x28 + *param_1);
  FUN_14042c44f(_Dst,param_3);
  iVar1 = (int)param_1[1];
  iVar2 = iVar1 - (param_2 + param_3);
  if (iVar2 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + (longlong)param_3 * 0x28),(longlong)iVar2 * 0x28);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 - param_3;
  return;
}



// FUNCTION 1487c03da FUN_1487c03da body=62 status=ok
// SIG undefined FUN_1487c03da(void)

void FUN_1487c03da(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1487c0418(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x28,8);
  }
  return;
}



// FUNCTION 1487c0418 FUN_1487c0418 body=112 status=ok
// SIG undefined FUN_1487c0418(void)

ulonglong FUN_1487c0418(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0x28) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_1487c0452;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0x28,8);
      param_2 = param_2 / 0x28;
    }
  }
LAB_1487c0452:
  return param_2 & 0xffffffff;
}



// FUNCTION 1487c0488 FUN_1487c0488 body=96 status=ok
// SIG undefined FUN_1487c0488(void)

void FUN_1487c0488(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 3,4);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,4);
  }
  return;
}



// FUNCTION 1487c04e8 FUN_1487c04e8 body=96 status=ok
// SIG undefined FUN_1487c04e8(void)

void FUN_1487c04e8(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
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



// FUNCTION 1487c0548 FUN_1487c0548 body=48 status=ok
// SIG undefined FUN_1487c0548(void)

void FUN_1487c0548(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x88,8);
  }
  return;
}



// FUNCTION 1487c0578 FUN_1487c0578 body=317 status=ok
// SIG undefined FUN_1487c0578(void)

int FUN_1487c0578(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  
  iVar7 = (int)param_1[1];
  lVar8 = (longlong)iVar7;
  if (lVar8 == 0) {
    iVar7 = 0;
  }
  else {
    plVar1 = (longlong *)*param_1;
    lVar5 = *(longlong *)*param_2;
    if ((lVar5 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar5);
    }
    iVar12 = 0;
    iVar9 = 0;
    bVar3 = *plVar1 == lVar5;
    do {
      lVar6 = (longlong)iVar9;
      iVar10 = iVar9;
      lVar5 = lVar6;
      iVar4 = iVar9 + 1;
      if (iVar9 + 1 < iVar7) {
        iVar4 = iVar7;
      }
      do {
        lVar5 = lVar5 + 1;
        iVar11 = iVar4;
        if (lVar8 <= lVar5) break;
        lVar2 = *(longlong *)*param_2;
        if ((lVar2 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c(lVar2);
        }
        iVar11 = iVar10 + 1;
        iVar10 = iVar11;
      } while (bVar3 == (plVar1[lVar5] == lVar2));
      if (bVar3 == false) {
        if (iVar12 != iVar9) {
          memmove(plVar1 + iVar12,plVar1 + lVar6,(longlong)(iVar11 - iVar9) << 3);
        }
        iVar12 = iVar12 + (iVar11 - iVar9);
      }
      iVar9 = iVar11;
      bVar3 = (bool)(bVar3 ^ 1);
    } while (lVar5 < lVar8);
    *(int *)(param_1 + 1) = iVar12;
    iVar7 = iVar7 - iVar12;
  }
  return iVar7;
}



// FUNCTION 1487c06b6 FUN_1487c06b6 body=164 status=ok
// SIG undefined FUN_1487c06b6(void)

void FUN_1487c06b6(longlong *param_1,undefined8 param_2)

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
        goto LAB_1487c0736;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_1487c0736:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 1487c075a FUN_1487c075a body=114 status=ok
// SIG undefined FUN_1487c075a(void)

void FUN_1487c075a(longlong *param_1,int param_2)

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



// FUNCTION 1487c07cc FUN_1487c07cc body=107 status=ok
// SIG undefined FUN_1487c07cc(void)

/* WARNING: Removing unreachable block (ram,0x0001487c07fe) */
/* WARNING: Removing unreachable block (ram,0x0001487c07da) */
/* WARNING: Removing unreachable block (ram,0x0001487c07f0) */
/* WARNING: Removing unreachable block (ram,0x0001487c0809) */
/* WARNING: Removing unreachable block (ram,0x0001487c07f2) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1487c07cc(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = DAT_14cb71320;
  LOCK();
  UNLOCK();
  DAT_14cb71320 = (undefined8 *)0x0;
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    _DAT_14cb71328 = _DAT_14cb71328 + -1;
    UNLOCK();
    do {
      puVar1 = (undefined8 *)*puVar2;
      if (puVar2[2] != 0) {
        puVar2[2] = 0;
        puVar2[3] = 0;
        *puVar2 = 0;
        puVar2[1] = 0;
      }
      puVar2 = puVar1;
    } while (puVar1 != (undefined8 *)0x0);
    LOCK();
    _DAT_14cb71328 = _DAT_14cb71328 + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 1487c0838 FUN_1487c0838 body=48 status=ok
// SIG undefined FUN_1487c0838(void)

void FUN_1487c0838(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,8);
  }
  return;
}



// FUNCTION 1487c0882 FUN_1487c0882 body=29 status=ok
// SIG undefined FUN_1487c0882(void)

bool FUN_1487c0882(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 1487c08a0 FUN_1487c08a0 body=26 status=ok
// SIG undefined FUN_1487c08a0(void)

bool FUN_1487c08a0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 1487c08ba FUN_1487c08ba body=101 status=ok
// SIG undefined FUN_1487c08ba(void)

void FUN_1487c08ba(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3e77a0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1487c0920 FUN_1487c0920 body=101 status=ok
// SIG undefined FUN_1487c0920(void)

void FUN_1487c0920(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3e77a0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1487c0986 FUN_1487c0986 body=134 status=ok
// SIG undefined FUN_1487c0986(void)

void FUN_1487c0986(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b3e77a0;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar3;
  p_Var1->EntryCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001487c09fd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1487c0a0c FUN_1487c0a0c body=39 status=ok
// SIG undefined FUN_1487c0a0c(void)

void FUN_1487c0a0c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001487c0a2f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar1);
  return;
}



// FUNCTION 1487c0a34 FUN_1487c0a34 body=9 status=ok
// SIG undefined FUN_1487c0a34(void)

void FUN_1487c0a34(longlong param_1)

{
  FUN_14060f31a(param_1 + 0x10);
  return;
}



// FUNCTION 1487c0a3e FUN_1487c0a3e body=29 status=ok
// SIG undefined FUN_1487c0a3e(void)

undefined8 FUN_1487c0a3e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1487c0a5c FUN_1487c0a5c body=167 status=ok
// SIG undefined FUN_1487c0a5c(void)

void FUN_1487c0a5c(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_1487c0ad7;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_1487c0ad7;
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
LAB_1487c0ad7:
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
                    /* WARNING: Could not recover jumptable at 0x0001487c0af7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1487c0b04 FUN_1487c0b04 body=133 status=ok
// SIG undefined FUN_1487c0b04(void)

void FUN_1487c0b04(longlong param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 0x68);
  if (param_2 <= (int)uVar1) {
    uVar4 = 4;
    if (4 < uVar1) {
      lVar2 = (longlong)(int)uVar1;
      if (4 < *(uint *)(param_1 + 0x6c)) {
        lVar2 = lVar2 + ((ulonglong)(lVar2 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar2 * 0x18,0);
      uVar4 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar3 / 0x18)) {
        uVar4 = uVar3 / 0x18 & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0x6c) = (int)uVar4;
    FUN_1486ebce8(param_1,param_2,uVar4,0x18);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1487c0ba4 FUN_1487c0ba4 body=29 status=ok
// SIG undefined FUN_1487c0ba4(void)

bool FUN_1487c0ba4(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 1487c0bc2 FUN_1487c0bc2 body=26 status=ok
// SIG undefined FUN_1487c0bc2(void)

bool FUN_1487c0bc2(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 1487c0be8 FUN_1487c0be8 body=101 status=ok
// SIG undefined FUN_1487c0be8(void)

void FUN_1487c0be8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e7880;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3e7810;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1487c0c4e FUN_1487c0c4e body=134 status=ok
// SIG undefined FUN_1487c0c4e(void)

void FUN_1487c0c4e(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b3e7880;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b3e7810;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar3;
  p_Var1->EntryCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001487c0cc5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1487c0cd4 FUN_1487c0cd4 body=180 status=ok
// SIG undefined FUN_1487c0cd4(void)

bool FUN_1487c0cd4(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_98 [40];
  longlong local_70;
  undefined1 local_68 [32];
  char local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_70,0);
    lVar3 = local_70;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(*(int *)(param_1 + 0x28) + lVar2,local_68,param_2);
    if (local_48 == '\x01') {
      local_48 = '\0';
    }
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487c0da6 FUN_1487c0da6 body=29 status=ok
// SIG undefined FUN_1487c0da6(void)

bool FUN_1487c0da6(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 1487c0dc4 FUN_1487c0dc4 body=101 status=ok
// SIG undefined FUN_1487c0dc4(void)

void FUN_1487c0dc4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e79d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3e78f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1487c0e2a FUN_1487c0e2a body=101 status=ok
// SIG undefined FUN_1487c0e2a(void)

void FUN_1487c0e2a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e79d0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3e78f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1487c0e90 FUN_1487c0e90 body=134 status=ok
// SIG undefined FUN_1487c0e90(void)

void FUN_1487c0e90(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b3e79d0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b3e78f0;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar3;
  p_Var1->EntryCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001487c0f07. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1487c0f16 FUN_1487c0f16 body=96 status=ok
// SIG undefined FUN_1487c0f16(void)

void FUN_1487c0f16(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = FUN_14479d2ce(param_1 + 0x18);
  FUN_145cb98c6(param_1 + 0x20,&local_28,param_2,param_3);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487c0f7a FUN_1487c0f7a body=95 status=ok
// SIG undefined FUN_1487c0f7a(void)

void FUN_1487c0f7a(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,8);
  }
  return;
}



// FUNCTION 1487c0fda FUN_1487c0fda body=105 status=ok
// SIG undefined FUN_1487c0fda(void)

ulonglong FUN_1487c0fda(longlong *param_1,longlong *param_2)

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
          goto LAB_1487c1021;
        }
        break;
      }
      uVar3 = uVar3 + 1;
      lVar5 = lVar5 + -8;
    } while (lVar5 != 0);
  }
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_145d2e7d6(param_1,iVar1);
    lVar2 = *param_1;
  }
  *(longlong *)(lVar2 + uVar4 * 8) = *param_2;
LAB_1487c1021:
  return uVar4 & 0xffffffff;
}



// FUNCTION 1487c1044 FUN_1487c1044 body=96 status=ok
// SIG undefined FUN_1487c1044(void)

void FUN_1487c1044(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
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



// FUNCTION 1487c10a4 FUN_1487c10a4 body=623 status=ok
// SIG undefined FUN_1487c10a4(void)

void FUN_1487c10a4(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  undefined1 *puVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_188 [32];
  longlong local_168;
  longlong *local_160;
  undefined4 local_158;
  uint uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  uint local_148;
  int iStack_144;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  uint local_128;
  int iStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined1 local_118 [192];
  undefined1 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_58 = (undefined1 *)0x0;
  local_50 = 0x1800000000;
  plVar1 = (longlong *)(param_1 + 0x240);
  lVar10 = param_1 + 0x250;
  local_138 = 0x100000000;
  local_128 = 0xffffffff;
  iStack_124 = 0;
  uStack_120 = 0;
  uStack_130 = lVar10;
  if (*(int *)(param_1 + 0x268) == 0) {
    iVar9 = 0;
  }
  else {
    FUN_1449c0562(&local_138);
    iVar9 = *(int *)(param_1 + 0x268);
  }
  uStack_140 = CONCAT44(uStack_11c,uStack_120);
  local_148 = local_128;
  iStack_144 = iStack_124;
  local_158 = (undefined4)local_138;
  uStack_154 = local_138._4_4_;
  uStack_150 = (undefined4)uStack_130;
  uStack_14c = uStack_130._4_4_;
  local_160 = plVar1;
  if ((iStack_124 != iVar9) || (uStack_130 != lVar10)) {
    do {
      plVar3 = *(longlong **)(*local_160 + (longlong)iStack_144 * 0x10);
      if (plVar3 != (longlong *)0x0) {
        iVar2 = (int)param_3[1];
        *(uint *)(param_3 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
          FUN_145c55abc(param_3,iVar2);
        }
        *(longlong **)(*param_3 + (longlong)iVar2 * 8) = plVar3;
        lVar7 = FUN_144a7f016();
        if (((*(int *)(lVar7 + 0x38) <= *(int *)(plVar3[2] + 0x38)) &&
            (*(longlong *)(*(longlong *)(plVar3[2] + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8)
             == lVar7 + 0x30)) &&
           (lVar7 = (**(code **)(*plVar3 + 0x5d8))(plVar3), uVar5 = local_50, lVar7 != 0)) {
          lVar11 = (longlong)(int)local_50;
          uVar6 = (int)local_50 + 1;
          local_50 = CONCAT44(local_50._4_4_,uVar6);
          if (local_50._4_4_ < uVar6) {
            FUN_1470e9d72(local_118,uVar5 & 0xffffffff);
          }
          puVar8 = local_58;
          if (local_58 == (undefined1 *)0x0) {
            puVar8 = local_118;
          }
          *(longlong *)(puVar8 + lVar11 * 8) = lVar7;
        }
      }
      local_148 = local_148 & ~uStack_154;
      FUN_1449c0562(&local_158);
    } while (local_160 != plVar1 ||
             (CONCAT44(uStack_14c,uStack_150) != lVar10 || iStack_144 != iVar9));
    lVar10 = (longlong)(int)local_50;
    puVar8 = local_118;
    if (local_58 != (undefined1 *)0x0) {
      puVar8 = local_58;
    }
    if (lVar10 != 0) {
      lVar7 = 0;
      do {
        uVar4 = *(undefined8 *)(puVar8 + lVar7);
        local_168 = *param_2;
        if ((local_168 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
        }
        FUN_1487c10a4(uVar4,&local_168,param_3);
        lVar7 = lVar7 + 8;
      } while (lVar10 * 8 != lVar7);
    }
    if (local_58 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1487c1314 FUN_1487c1314 body=312 status=ok
// SIG undefined FUN_1487c1314(void)

void FUN_1487c1314(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined4 local_80;
  uint uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  uint local_70;
  int iStack_6c;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  uint local_50;
  int iStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar1 = (longlong *)(param_1 + 0x240);
  lVar2 = param_1 + 0x250;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  iStack_4c = 0;
  uStack_48 = 0;
  uStack_58 = lVar2;
  if (*(int *)(param_1 + 0x268) == 0) {
    iVar5 = 0;
  }
  else {
    FUN_1449c0562(&local_60);
    iVar5 = *(int *)(param_1 + 0x268);
  }
  uStack_68 = CONCAT44(uStack_44,uStack_48);
  local_70 = local_50;
  iStack_6c = iStack_4c;
  local_80 = (undefined4)local_60;
  uStack_7c = local_60._4_4_;
  uStack_78 = (undefined4)uStack_58;
  uStack_74 = uStack_58._4_4_;
  local_88 = plVar1;
  if ((iStack_4c != iVar5) || (uStack_58 != lVar2)) {
    do {
      lVar4 = *(longlong *)(*local_88 + (longlong)iStack_6c * 0x10);
      if (lVar4 != 0) {
        iVar3 = (int)param_3[1];
        *(uint *)(param_3 + 1) = iVar3 + 1U;
        if (*(uint *)((longlong)param_3 + 0xc) < iVar3 + 1U) {
          FUN_145c55abc(param_3,iVar3);
        }
        *(longlong *)(*param_3 + (longlong)iVar3 * 8) = lVar4;
      }
      local_70 = local_70 & ~uStack_7c;
      FUN_1449c0562(&local_80);
    } while (local_88 != plVar1 || (CONCAT44(uStack_74,uStack_78) != lVar2 || iStack_6c != iVar5));
  }
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1487c144e FUN_1487c144e body=741 status=ok
// SIG undefined FUN_1487c144e(void)

void FUN_1487c144e(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 *puVar10;
  int iVar11;
  longlong lVar12;
  undefined1 auStack_188 [32];
  longlong local_168;
  longlong *local_160;
  undefined4 local_158;
  uint uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  uint local_148;
  int iStack_144;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  uint local_128;
  int iStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined1 local_118 [192];
  undefined1 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_58 = (undefined1 *)0x0;
  local_50 = 0x1800000000;
  plVar1 = (longlong *)(param_1 + 0x240);
  lVar12 = param_1 + 0x250;
  local_138 = 0x100000000;
  local_128 = 0xffffffff;
  iStack_124 = 0;
  uStack_120 = 0;
  uStack_130 = lVar12;
  if (*(int *)(param_1 + 0x268) == 0) {
    iVar11 = 0;
  }
  else {
    FUN_1449c0562(&local_138);
    iVar11 = *(int *)(param_1 + 0x268);
  }
  uStack_140 = CONCAT44(uStack_11c,uStack_120);
  local_148 = local_128;
  iStack_144 = iStack_124;
  local_158 = (undefined4)local_138;
  uStack_154 = local_138._4_4_;
  uStack_150 = (undefined4)uStack_130;
  uStack_14c = uStack_130._4_4_;
  local_160 = plVar1;
  if ((iStack_124 != iVar11) || (uStack_130 != lVar12)) {
    do {
      plVar3 = *(longlong **)(*local_160 + (longlong)iStack_144 * 0x10);
      if (plVar3 != (longlong *)0x0) {
        lVar8 = *param_2;
        if ((lVar8 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
LAB_1487c1572:
          lVar7 = FUN_144a78d6a();
          if ((lVar7 == 0) || (*(int *)(lVar8 + 0x38) < *(int *)(lVar7 + 0x38))) goto LAB_1487c1586;
          lVar9 = 0;
          if (*(longlong *)(*(longlong *)(lVar8 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
              lVar7 + 0x30) {
            lVar9 = lVar8;
          }
        }
        else {
          if (lVar8 != 0) goto LAB_1487c1572;
LAB_1487c1586:
          lVar9 = 0;
        }
        if ((*(int *)(lVar9 + 0x38) <= *(int *)(plVar3[2] + 0x38)) &&
           (*(longlong *)(*(longlong *)(plVar3[2] + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) ==
            lVar9 + 0x30)) {
          iVar2 = (int)param_3[1];
          *(uint *)(param_3 + 1) = iVar2 + 1U;
          if (*(uint *)((longlong)param_3 + 0xc) < iVar2 + 1U) {
            FUN_145c55abc(param_3,iVar2);
          }
          *(longlong **)(*param_3 + (longlong)iVar2 * 8) = plVar3;
        }
        lVar8 = FUN_144a7f016();
        if (((*(int *)(lVar8 + 0x38) <= *(int *)(plVar3[2] + 0x38)) &&
            (*(longlong *)(*(longlong *)(plVar3[2] + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8)
             == lVar8 + 0x30)) &&
           (lVar8 = (**(code **)(*plVar3 + 0x5d8))(plVar3), uVar5 = local_50, lVar8 != 0)) {
          lVar7 = (longlong)(int)local_50;
          uVar6 = (int)local_50 + 1;
          local_50 = CONCAT44(local_50._4_4_,uVar6);
          if (local_50._4_4_ < uVar6) {
            FUN_1470e9d72(local_118,uVar5 & 0xffffffff);
          }
          puVar10 = local_58;
          if (local_58 == (undefined1 *)0x0) {
            puVar10 = local_118;
          }
          *(longlong *)(puVar10 + lVar7 * 8) = lVar8;
        }
      }
      local_148 = local_148 & ~uStack_154;
      FUN_1449c0562(&local_158);
    } while (local_160 != plVar1 ||
             (CONCAT44(uStack_14c,uStack_150) != lVar12 || iStack_144 != iVar11));
    lVar12 = (longlong)(int)local_50;
    puVar10 = local_118;
    if (local_58 != (undefined1 *)0x0) {
      puVar10 = local_58;
    }
    if (lVar12 != 0) {
      lVar8 = 0;
      do {
        uVar4 = *(undefined8 *)(puVar10 + lVar8);
        local_168 = *param_2;
        if ((local_168 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
        }
        FUN_1487c144e(uVar4,&local_168,param_3);
        lVar8 = lVar8 + 8;
      } while (lVar12 * 8 != lVar8);
    }
    if (local_58 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1487c1734 FUN_1487c1734 body=147 status=ok
// SIG undefined FUN_1487c1734(void)

void FUN_1487c1734(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
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
    uVar4 = FUN_144a3809e(lVar3 * 0x28,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x28)) {
      uVar5 = uVar4 / 0x28 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x28,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1487c17c8 FUN_1487c17c8 body=310 status=ok
// SIG undefined FUN_1487c17c8(void)

void FUN_1487c17c8(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  byte bVar3;
  byte bVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  
  iVar1 = (int)param_1[1];
  lVar13 = (longlong)iVar1;
  if (lVar13 != 0) {
    lVar2 = *param_1;
    bVar3 = FUN_144a7afa6(lVar2 + 8,*param_2 + 8);
    iVar10 = 0;
    iVar7 = 0;
    do {
      lVar5 = (longlong)iVar7;
      iVar11 = iVar7 + 1;
      if (iVar7 + 1 < iVar1) {
        iVar11 = iVar1;
      }
      lVar12 = lVar2 + 0x30 + lVar5 * 0x28;
      iVar8 = iVar7;
      lVar6 = lVar5;
      do {
        lVar6 = lVar6 + 1;
        iVar9 = iVar11;
        if (lVar13 <= lVar6) break;
        bVar4 = FUN_144a7afa6(lVar12,*param_2 + 8);
        iVar8 = iVar8 + 1;
        lVar12 = lVar12 + 0x28;
        iVar9 = iVar8;
      } while ((bVar3 & 1) == bVar4);
      iVar11 = iVar9 - iVar7;
      if ((bVar3 & 1) == 0) {
        if (iVar10 != iVar7) {
          memmove((void *)(lVar2 + (longlong)iVar10 * 0x28),(void *)(lVar2 + lVar5 * 0x28),
                  (longlong)iVar11 * 0x28);
        }
        iVar10 = iVar10 + iVar11;
      }
      else {
        FUN_14063a2ad(lVar2 + lVar5 * 0x28,iVar11);
      }
      iVar7 = iVar9;
      bVar3 = bVar3 ^ 1;
    } while (lVar6 < lVar13);
    *(int *)(param_1 + 1) = iVar10;
  }
  return;
}



// FUNCTION 1487c18fe FUN_1487c18fe body=128 status=ok
// SIG undefined FUN_1487c18fe(void)

void FUN_1487c18fe(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  lVar3 = *param_1;
  iVar1 = (int)param_1[1];
  lVar5 = (longlong)iVar1;
  if (lVar5 != 0) {
    uVar4 = 0;
    do {
      if (*(longlong *)(lVar3 + uVar4) == *param_2) {
        if ((int)(~uVar4 >> 4) != 0) {
          return;
        }
        break;
      }
      uVar4 = uVar4 + 0x10;
    } while (lVar5 << 4 != uVar4);
  }
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1487c197e(param_1,iVar1);
    lVar3 = *param_1;
  }
  *(longlong *)(lVar3 + lVar5 * 0x10) = *param_2;
  lVar2 = param_2[1];
  *(longlong *)(lVar3 + 8 + lVar5 * 0x10) = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 1487c197e FUN_1487c197e body=132 status=ok
// SIG undefined FUN_1487c197e(void)

void FUN_1487c197e(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar4 = (longlong)(int)uVar2;
    }
    else {
      lVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = FUN_144a3809e(lVar4 << 4,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar5 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x10,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1487c1a04 FUN_1487c1a04 body=118 status=ok
// SIG undefined FUN_1487c1a04(void)

void FUN_1487c1a04(longlong *param_1,uint param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  void *_Dst;
  
  lVar3 = *param_1;
  plVar4 = *(longlong **)(lVar3 + 8 + (longlong)(int)param_2 * 0x10);
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
  iVar5 = (int)param_1[1];
  if (~param_2 + iVar5 != 0) {
    _Dst = (void *)(lVar3 + (longlong)(int)param_2 * 0x10);
    memmove(_Dst,(void *)((longlong)_Dst + 0x10),(longlong)(int)(~param_2 + iVar5) << 4);
    iVar5 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar5 + -1;
  return;
}



// FUNCTION 1487c1a7a FUN_1487c1a7a body=128 status=ok
// SIG undefined FUN_1487c1a7a(void)

void FUN_1487c1a7a(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  lVar3 = *param_1;
  iVar1 = (int)param_1[1];
  lVar5 = (longlong)iVar1;
  if (lVar5 != 0) {
    uVar4 = 0;
    do {
      if (*(longlong *)(lVar3 + uVar4) == *param_2) {
        if ((int)(~uVar4 >> 4) != 0) {
          return;
        }
        break;
      }
      uVar4 = uVar4 + 0x10;
    } while (lVar5 << 4 != uVar4);
  }
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1461a3928(param_1,iVar1);
    lVar3 = *param_1;
  }
  *(longlong *)(lVar3 + lVar5 * 0x10) = *param_2;
  lVar2 = param_2[1];
  *(longlong *)(lVar3 + 8 + lVar5 * 0x10) = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 1487c1afa FUN_1487c1afa body=111 status=ok
// SIG undefined FUN_1487c1afa(void)

undefined8 FUN_1487c1afa(longlong *param_1,double *param_2,float param_3)

{
  longlong lVar1;
  char cVar2;
  double dVar3;
  
  lVar1 = param_1[0xf];
  if ((((lVar1 != 0) && (*(char *)(lVar1 + 0x28) == '\x01')) &&
      (dVar3 = (double)param_3, ABS(*(double *)(lVar1 + 0x10) - *param_2) <= dVar3)) &&
     ((ABS(*(double *)(lVar1 + 0x18) - param_2[1]) <= dVar3 &&
      (ABS(*(double *)(lVar1 + 0x20) - param_2[2]) <= dVar3)))) {
    cVar2 = (**(code **)(*param_1 + 0x50))();
    if (cVar2 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1487c1b72 FUN_1487c1b72 body=50 status=ok
// SIG undefined FUN_1487c1b72(void)

longlong * FUN_1487c1b72(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x238);
  *param_2 = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  return param_2;
}



// FUNCTION 1487c1baa FUN_1487c1baa body=274 status=ok
// SIG undefined FUN_1487c1baa(void)

undefined8 FUN_1487c1baa(longlong param_1,longlong param_2)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined1 uStack_40;
  undefined7 local_3f;
  undefined1 uStack_38;
  undefined8 uStack_37;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar3 = *(longlong *)(param_2 + 0x18);
  if (lVar3 != 0) {
    bVar1 = *(byte *)(lVar3 + 0x152);
    if ((bVar1 != 1) && ((uVar5 = 0, 6 < bVar1 || ((0x68U >> (bVar1 & 0x1f) & 1) == 0))))
    goto LAB_1487c1c0d;
    lVar3 = *(longlong *)(lVar3 + 0x1f0);
    if (lVar3 != 0) {
      lVar2 = FUN_144a79464();
      if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
           ) == lVar2 + 0x30)) {
        uStack_38 = 0;
        uStack_37 = 0;
        local_48 = 0;
        uStack_40 = 0;
        local_3f = 0;
        puVar4 = &DAT_14c9485f0;
        if (*(undefined4 **)(param_1 + 8) != (undefined4 *)0x0) {
          puVar4 = *(undefined4 **)(param_1 + 8);
        }
        FUN_1447325ac(puVar4,&uStack_38,1);
        lVar3 = FUN_14885bd50(lVar3,&local_48);
        if ((lVar3 == 0) ||
           (lVar3 = FUN_140334a94(lVar3,*(undefined8 *)(param_2 + 0x18)), lVar3 == 0)) {
          uVar5 = 0;
        }
        else {
          uVar5 = *(undefined8 *)(lVar3 + 0x3d0);
        }
        if (local_48 != 0) {
          FUN_1400020a8();
        }
        goto LAB_1487c1c0d;
      }
    }
  }
  uVar5 = 0;
LAB_1487c1c0d:
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 1487c1cbe FUN_1487c1cbe body=122 status=ok
// SIG undefined FUN_1487c1cbe(void)

undefined8 * FUN_1487c1cbe(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  *param_2 = *(undefined8 *)(param_1 + 0x1e0);
  uVar2 = *(undefined4 *)(param_1 + 0x1ec);
  uVar3 = *(undefined4 *)(param_1 + 0x1f0);
  uVar4 = *(undefined4 *)(param_1 + 500);
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 0x1e8);
  *(undefined4 *)((longlong)param_2 + 0xc) = uVar2;
  *(undefined4 *)(param_2 + 2) = uVar3;
  *(undefined4 *)((longlong)param_2 + 0x14) = uVar4;
  param_2[3] = 0;
  iVar1 = *(int *)(param_1 + 0x200);
  _Src = *(void **)(param_1 + 0x1f8);
  *(int *)(param_2 + 4) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_2 + 0x24) = 0;
  }
  else {
    FUN_1446dd670(param_2 + 3,iVar1,0);
    memcpy((void *)param_2[3],_Src,(longlong)iVar1 * 2);
  }
  return param_2;
}



// FUNCTION 1487c1d6a FUN_1487c1d6a body=70 status=ok
// SIG undefined FUN_1487c1d6a(void)

void FUN_1487c1d6a(longlong param_1,undefined1 *param_2)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = FUN_14479d2ce(param_1 + 0x30);
  if (lVar2 != 0) {
    lVar2 = FUN_1447210f0(lVar2);
    if (lVar2 != 0) {
      iVar1 = FUN_14490d72a(lVar2);
      if (iVar1 != 3) {
        FUN_14079295e(param_1);
        *param_2 = 1;
      }
    }
  }
  return;
}



// FUNCTION 1487c1db0 FUN_1487c1db0 body=147 status=ok
// SIG undefined FUN_1487c1db0(void)

void FUN_1487c1db0(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_1 != (longlong *)0x0) {
    uStack_28 = param_3[1];
    local_30 = 0;
    local_20 = 0;
    local_38 = 0;
    (**(code **)(*param_1 + 0x4d0))();
    plVar1 = (longlong *)param_1[0x78];
    if (plVar1 != (longlong *)0x0) {
      local_30 = *param_3;
      uStack_28 = param_3[1];
      local_20 = 0;
      (**(code **)(*plVar1 + 0x688))(plVar1,&local_30,1);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487c1e44 FUN_1487c1e44 body=77 status=ok
// SIG undefined FUN_1487c1e44(void)

undefined8 FUN_1487c1e44(longlong param_1)

{
  longlong lVar1;
  
  if (param_1 != 0) {
    lVar1 = FUN_144a78b9e();
    if (((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) +
          (longlong)*(int *)(lVar1 + 0x38) * 8) == lVar1 + 0x30)) &&
       (lVar1 = *(longlong *)(param_1 + 0x11e8), lVar1 != 0)) {
      return CONCAT71((int7)((ulonglong)lVar1 >> 8),0 < *(int *)(&DAT_00002bb0 + lVar1));
    }
  }
  return 0;
}



// FUNCTION 1487c1e92 FUN_1487c1e92 body=77 status=ok
// SIG undefined FUN_1487c1e92(void)

undefined4 FUN_1487c1e92(longlong param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if (param_1 != 0) {
    lVar1 = FUN_144a78b9e();
    if (((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) +
          (longlong)*(int *)(lVar1 + 0x38) * 8) == lVar1 + 0x30)) &&
       (uVar2 = 0, *(longlong *)(param_1 + 0x11e8) != 0)) {
      uVar2 = *(undefined4 *)(&DAT_00002bb0 + *(longlong *)(param_1 + 0x11e8));
    }
  }
  return uVar2;
}



// FUNCTION 1487c1ee0 FUN_1487c1ee0 body=77 status=ok
// SIG undefined FUN_1487c1ee0(void)

undefined8 FUN_1487c1ee0(longlong param_1)

{
  longlong lVar1;
  
  if (param_1 != 0) {
    lVar1 = FUN_144a78b9e();
    if (((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) +
          (longlong)*(int *)(lVar1 + 0x38) * 8) == lVar1 + 0x30)) &&
       (lVar1 = *(longlong *)(param_1 + 0x11e8), lVar1 != 0)) {
      return CONCAT71((int7)((ulonglong)lVar1 >> 8),(&DAT_00001100)[lVar1] == '\x03');
    }
  }
  return 0;
}



// FUNCTION 1487c1f2e FUN_1487c1f2e body=71 status=ok
// SIG undefined FUN_1487c1f2e(void)

void FUN_1487c1f2e(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  
  if (param_1 != 0) {
    lVar1 = FUN_144a78b9e();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      FUN_145ccf238(param_1,param_2);
      return;
    }
  }
  return;
}



// FUNCTION 1487c1f90 FUN_1487c1f90 body=229 status=ok
// SIG undefined FUN_1487c1f90(void)

undefined8 FUN_1487c1f90(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  lVar4 = FUN_1447210f0();
  if ((lVar4 != 0) && (lVar4 = FUN_140115352(lVar4), lVar4 != 0)) {
    lVar6 = *(longlong *)(param_1 + 0x1ac0);
    if (lVar6 == 0) {
      uVar5 = FUN_1407ad36c();
      lVar6 = FUN_14477b664(uVar5);
      *(longlong *)(param_1 + 0x1ac0) = lVar6;
    }
    plVar1 = (longlong *)(param_1 + 0x1ab8);
    if (*(longlong *)(param_1 + 0x1ac8) != 0) {
LAB_1487c1ff4:
      uVar5 = FUN_140e3896e(lVar4,plVar1,param_1,param_2);
      return uVar5;
    }
    if ((lVar6 != 0) && (*plVar1 != 0)) {
      plVar2 = *(longlong **)(lVar6 + 0xb8);
      if ((plVar2 != (longlong *)0x0) &&
         (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 != '\0')) {
        uVar5 = (**(code **)(*plVar2 + 0x110))(plVar2);
        lVar6 = FUN_144aff482(uVar5,plVar1);
        *(longlong *)(param_1 + 0x1ac8) = lVar6;
        if (lVar6 == 0) {
          return 0;
        }
        goto LAB_1487c1ff4;
      }
      *(undefined8 *)(param_1 + 0x1ac8) = 0;
    }
  }
  return 0;
}



// FUNCTION 1487c2076 FUN_1487c2076 body=73 status=ok
// SIG undefined FUN_1487c2076(void)

void FUN_1487c2076(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  if ((longlong)*(int *)(param_1 + 0xe8) != 0) {
    plVar1 = *(longlong **)(param_1 + 0xe0);
    lVar2 = (longlong)*(int *)(param_1 + 0xe8) << 5;
    do {
      if (*plVar1 == *param_2) {
        return;
      }
      plVar1 = plVar1 + 4;
      lVar2 = lVar2 + -0x20;
    } while (lVar2 != 0);
  }
  plVar1 = (longlong *)FUN_1459804ee(param_1 + 0xe0);
  *plVar1 = *param_2;
  return;
}



// FUNCTION 1487c20ec FUN_1487c20ec body=169 status=ok
// SIG undefined FUN_1487c20ec(void)

void FUN_1487c20ec(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  uStack_30 = 0;
  FUN_145e16f8c(0,&local_38,0);
  lVar2 = local_38;
  lVar3 = (longlong)(int)uStack_30;
  if (lVar3 != 0) {
    lVar4 = 0;
    do {
      lVar1 = *(longlong *)(lVar2 + lVar4);
      if (((lVar1 != 0) && ((*(byte *)(lVar1 + 0x9c) & 1) != 0)) &&
         ((*(byte *)(lVar1 + 0x9f) & 0x20) != 0)) {
        FUN_141032122(lVar1,param_1 + 0x1a58);
      }
      lVar4 = lVar4 + 8;
    } while (lVar3 * 8 != lVar4);
  }
  if (local_38 != 0) {
    FUN_1400020a8(local_38);
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1487c21ca FUN_1487c21ca body=173 status=ok
// SIG undefined FUN_1487c21ca(void)

longlong FUN_1487c21ca(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  
  if (*(int *)(param_1 + 0x1bd0) != *(int *)(param_1 + 0x1bfc)) {
    lVar2 = *param_2;
    uVar3 = (uint)((ulonglong)lVar2 >> 0x10);
    uVar5 = (uint)lVar2 & 0xffff;
    lVar4 = param_1 + 0x1c00;
    if (*(longlong *)(param_1 + 0x1c08) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x1c08);
    }
    iVar6 = *(int *)(lVar4 + (ulonglong)
                             (*(int *)(param_1 + 0x1c10) - 1U &
                             (int)((ulonglong)lVar2 >> 0x20) + ((uint)lVar2 << 0x10 | uVar5) +
                             (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar5 >> 4)) * 4);
    if (iVar6 != -1) {
      do {
        plVar1 = (longlong *)(*(longlong *)(param_1 + 0x1bc8) + (longlong)iVar6 * 0x18);
        if (*plVar1 == lVar2) {
          if (plVar1 + 1 != (longlong *)0x0 && plVar1 != (longlong *)0x0) {
            return plVar1[1];
          }
          return 0;
        }
        iVar6 = (int)plVar1[2];
      } while (iVar6 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 1487c2280 FUN_1487c2280 body=68 status=ok
// SIG undefined FUN_1487c2280(void)

undefined8 FUN_1487c2280(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = (**(code **)(*param_1 + 0x18))();
  if (lVar1 != 0) {
    lVar2 = FUN_144a75eb4();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      return *(undefined8 *)(lVar1 + 0x3e0);
    }
  }
  return 0;
}



// FUNCTION 1487c22c4 FUN_1487c22c4 body=113 status=ok
// SIG undefined FUN_1487c22c4(void)

void FUN_1487c22c4(longlong param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = *(longlong *)(param_1 + 0x1a90);
  if ((lVar3 != 0) && (iVar1 = *(int *)(lVar3 + 0x368), (longlong)iVar1 != 0)) {
    lVar3 = *(longlong *)(lVar3 + 0x360);
    lVar4 = 0;
    do {
      iVar2 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar2 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
        FUN_1446f84a2(param_2,iVar2);
      }
      *(undefined8 *)(*param_2 + (longlong)iVar2 * 8) = *(undefined8 *)(lVar3 + lVar4);
      lVar4 = lVar4 + 0x60;
    } while ((longlong)iVar1 * 0x60 != lVar4);
  }
  return;
}



// FUNCTION 1487c23d0 FUN_1487c23d0 body=34 status=ok
// SIG undefined FUN_1487c23d0(void)

undefined8 FUN_1487c23d0(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = (**(code **)(*param_1 + 0x20))();
  if (lVar1 != 0) {
    uVar2 = FUN_140654ab6(lVar1);
    return uVar2;
  }
  return 0;
}



// FUNCTION 1487c242a FUN_1487c242a body=170 status=ok
// SIG undefined FUN_1487c242a(void)

void FUN_1487c242a(longlong *param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  lVar3 = FUN_1407a0dc0(param_2);
  if ((lVar3 != 0) && ((char)param_1[0x2f] == '\x03')) {
    param_1[0x2ce] = *param_2;
    uVar1 = *(undefined4 *)((longlong)param_2 + 0xc);
    lVar3 = param_2[2];
    uVar2 = *(undefined4 *)((longlong)param_2 + 0x14);
    *(int *)(param_1 + 0x2cf) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0x167c) = uVar1;
    *(int *)(param_1 + 0x2d0) = (int)lVar3;
    *(undefined4 *)((longlong)param_1 + 0x1684) = uVar2;
    FUN_144a787a6(param_1 + 0x2d1,param_2 + 3);
    (**(code **)(*param_1 + 0x708))(param_1);
    *(undefined8 *)((longlong)param_1 + 0x16d4) = 0;
    *(undefined8 *)((longlong)param_1 + 0x1704) = 0;
    *(undefined1 *)(param_1 + 0x2df) = 3;
    *(undefined1 *)(param_1 + 0x3bf) = 0;
    *(undefined1 *)(param_1 + 0x2d8) = 1;
    (**(code **)(*param_1 + 0x6e0))(param_1,2);
    FUN_141213548(param_1);
  }
  if (param_2[3] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1487c24d4 FUN_1487c24d4 body=237 status=ok
// SIG undefined FUN_1487c24d4(void)

bool FUN_1487c24d4(longlong *param_1,float param_2)

{
  double dVar1;
  double dVar2;
  longlong lVar3;
  double *pdVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 auStack_88 [32];
  double local_68;
  double local_60;
  double local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar3 = param_1[0x39];
  if (lVar3 == 0) {
    pdVar4 = (double *)&DAT_14c8464e0;
    uVar5 = (undefined4)DAT_14c8464f0;
    uVar6 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
  }
  else {
    uVar5 = (undefined4)*(undefined8 *)(lVar3 + 0x270);
    uVar6 = (undefined4)((ulonglong)*(undefined8 *)(lVar3 + 0x270) >> 0x20);
    pdVar4 = (double *)(lVar3 + 0x260);
  }
  dVar1 = *pdVar4;
  dVar2 = pdVar4[1];
  (**(code **)(*param_1 + 0x6f0))(param_1,&local_68);
  local_58 = (double)CONCAT44(uVar6,uVar5) - local_58;
  if ((local_50 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return SQRT(local_58 * local_58 +
                (dVar2 - local_60) * (dVar2 - local_60) + (dVar1 - local_68) * (dVar1 - local_68))
           <= (double)param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487c25c2 FUN_1487c25c2 body=256 status=ok
// SIG undefined FUN_1487c25c2(void)

undefined8 FUN_1487c25c2(longlong *param_1)

{
  double *pdVar1;
  longlong lVar2;
  undefined8 uVar3;
  double dVar4;
  float fVar5;
  undefined1 auStack_48 [32];
  double local_28;
  double local_20;
  double local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 0x6f0))(param_1,&local_28);
  lVar2 = param_1[0x39];
  if (lVar2 == 0) {
    pdVar1 = (double *)&DAT_14c8464e0;
    dVar4 = DAT_14c8464f0;
  }
  else {
    pdVar1 = (double *)(lVar2 + 0x260);
    dVar4 = *(double *)(lVar2 + 0x270);
  }
  if ((char)param_1[0x2c8] == '\x04') {
    fVar5 = *(float *)((longlong)param_1 + 0x177c) + *(float *)(param_1 + 0x2f0);
    lVar2 = 0x1774;
  }
  else {
    fVar5 = *(float *)((longlong)param_1 + 0x165c) + *(float *)(param_1 + 0x2cc);
    lVar2 = 0x1654;
  }
  if ((float)SQRT((local_20 - pdVar1[1]) * (local_20 - pdVar1[1]) +
                  (local_28 - *pdVar1) * (local_28 - *pdVar1)) <= fVar5) {
    uVar3 = FUN_142b461ae((longlong)param_1 + lVar2,
                          CONCAT44((int)((ulonglong)(local_18 - dVar4) >> 0x20),
                                   (float)(local_18 - dVar4)) & 0x7fffffff7fffffff);
  }
  else {
    uVar3 = 0;
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487c26c4 FUN_1487c26c4 body=11 status=ok
// SIG undefined FUN_1487c26c4(void)

void FUN_1487c26c4(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x1844) = param_2;
  FUN_1412133fc();
  return;
}



// FUNCTION 1487c26d0 FUN_1487c26d0 body=245 status=ok
// SIG undefined FUN_1487c26d0(void)

void FUN_1487c26d0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(byte *)(param_1 + 0x1db) = *(byte *)(param_1 + 0x1db) | 0x78;
  lVar3 = FUN_14479d2ce(param_1 + 0x30a);
  if (lVar3 != 0) {
    *(undefined4 *)(lVar3 + 0x1a8) = 0x3f800000;
  }
  (**(code **)(*param_1 + 0x6e0))(param_1,0);
  (**(code **)(*param_1 + 0x6e8))(param_1,0);
  if (param_1[0x39] != 0) {
    lVar3 = FUN_144a3a302();
    plVar1 = (longlong *)param_1[0x39];
    if ((((plVar1 != (longlong *)0x0) && (lVar3 != 0)) && (lVar2 = plVar1[2], lVar2 != 0)) &&
       ((*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38) &&
        (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
         lVar3 + 0x30)))) {
      FUN_1446f470e(&local_28,L"BlockAllProjectile",1);
      (**(code **)(*plVar1 + 0x728))(plVar1,local_28,1);
    }
  }
  (**(code **)(*param_1 + 0x388))(param_1,0x40400000);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487c27da FUN_1487c27da body=12 status=ok
// SIG undefined FUN_1487c27da(void)

void FUN_1487c27da(longlong param_1)

{
  FUN_1408a1fe2(param_1 + 0x1920);
  return;
}



// FUNCTION 1487c27e6 FUN_1487c27e6 body=72 status=ok
// SIG undefined FUN_1487c27e6(void)

void FUN_1487c27e6(longlong param_1,char param_2)

{
  longlong lVar1;
  
  if ((*(char *)(param_1 + 0x178) == '\x03') &&
     (*(char *)(param_1 + 0x1df8) = param_2, param_2 != '\0')) {
    lVar1 = FUN_1408a1fe2(param_1 + 0x1920);
    if (lVar1 != 0) {
      FUN_14485c47a(param_1 + 0x16d4,lVar1);
      *(undefined1 *)(param_1 + 0x1730) = 0;
    }
  }
  return;
}



// FUNCTION 1487c282e FUN_1487c282e body=74 status=ok
// SIG undefined FUN_1487c282e(void)

void FUN_1487c282e(longlong param_1,char param_2)

{
  longlong lVar1;
  
  if ((*(char *)(param_1 + 0x178) == '\x03') &&
     (*(char *)(param_1 + 0x1df9) = param_2, param_2 != '\0')) {
    lVar1 = FUN_1408a1fe2(param_1 + 0x1920);
    if (lVar1 != 0) {
      FUN_14485c47a(param_1 + 0x16fc,lVar1);
      return;
    }
  }
  return;
}



// FUNCTION 1487c2878 FUN_1487c2878 body=148 status=ok
// SIG undefined FUN_1487c2878(void)

void FUN_1487c2878(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((char)param_1[0x3bf] == '\x01') {
    FUN_14485c47a((longlong)param_1 + 0x16d4,param_3);
    *(undefined1 *)(param_1 + 0x2e6) = 0;
    (**(code **)(*param_1 + 0x6e0))(param_1,3);
  }
  if (*(char *)((longlong)param_1 + 0x1df9) == '\x01') {
    FUN_14485c47a((longlong)param_1 + 0x16fc,param_3);
  }
  local_20 = param_3;
  FUN_1447cd2ec(param_1 + 700);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487c291a FUN_1487c291a body=1290 status=ok
// SIG undefined FUN_1487c291a(void)

void FUN_1487c291a(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 ****ppppuVar9;
  int iVar10;
  longlong *plVar11;
  undefined1 auStack_1b8 [40];
  longlong *local_190;
  undefined8 local_188;
  undefined1 *local_180;
  undefined8 local_178;
  undefined4 local_170;
  undefined4 local_16c;
  longlong local_168;
  longlong local_160;
  longlong *local_158;
  undefined8 uStack_150;
  longlong local_148;
  undefined8 ***local_140;
  undefined1 local_134 [4];
  undefined8 ***local_130;
  undefined1 *local_128;
  undefined8 local_120;
  undefined4 local_118;
  undefined4 local_114;
  byte local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_dc;
  undefined4 local_d4;
  longlong local_c8;
  undefined4 local_c0;
  longlong local_b8 [2];
  undefined1 local_a8 [16];
  undefined8 local_98;
  int local_90;
  undefined8 local_8c;
  undefined4 local_84;
  longlong local_78;
  undefined4 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  if (((param_2 & 1) != 0) &&
     (lVar6 = (**(code **)(*(longlong *)(param_1 + -0x11c0) + 0x20))(param_1 + -0x11c0), lVar6 != 0)
     ) {
    FUN_143d57a0e(lVar6,param_1);
  }
  local_158 = (longlong *)0x0;
  uStack_150 = 0;
  local_160 = FUN_144a74fb4();
  if ((local_160 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_160);
  }
  FUN_1478ba3d6(param_1 + -0x1558,&local_160,&local_158,0);
  if ((longlong)(int)uStack_150 != 0) {
    plVar1 = local_158 + (int)uStack_150;
    plVar11 = local_158;
    do {
      lVar6 = *plVar11;
      if (lVar6 != 0) {
        lVar7 = FUN_144a74fb4();
        if ((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar7 + 0x38) * 8) == lVar7 + 0x30)) {
          if ((param_2 & 1) != 0) {
            lVar7 = FUN_144a78c84();
            if ((((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) +
                   (longlong)*(int *)(lVar7 + 0x38) * 8) == lVar7 + 0x30)) &&
                (plVar8 = (longlong *)FUN_148810db2(lVar6), *plVar8 != 0)) &&
               (cVar4 = FUN_148811d90(lVar6,param_1), cVar4 == '\0')) {
              FUN_148812522(lVar6);
            }
          }
          if ((param_2 & 2) != 0) {
            if ((*(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110
                         ) < DAT_14cb714f0) && (FUN_144b3d300(&DAT_14cb714f0), DAT_14cb714f0 == -1))
            {
              FUN_1446ddc76(&DAT_14cb714e8,&DAT_14b3e7af2,1);
              _Init_thread_footer(&DAT_14cb714f0);
            }
            lVar6 = FUN_144a7a45a(lVar6);
            if (lVar6 != 0) {
              lVar7 = FUN_140a87838();
              if (((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
                  (*(longlong *)
                    (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) +
                    (longlong)*(int *)(lVar7 + 0x38) * 8) == lVar7 + 0x30)) &&
                 (local_168 = *(longlong *)(lVar6 + 0x5d0), local_168 != 0)) {
                local_98 = 0;
                local_90 = 0;
                local_b8[0] = 0;
                local_b8[1] = 0;
                local_8c = 0xffffffff00000080;
                local_84 = 0;
                local_78 = 0;
                local_70 = 0;
                cVar4 = FUN_1487f1044(param_1,&DAT_14cb714e8,&local_168,local_b8);
                if (cVar4 == '\x02') {
                  local_e8 = 0;
                  local_e0 = 0;
                  local_108 = 0;
                  uStack_100 = 0;
                  local_dc = 0xffffffff00000080;
                  local_d4 = 0;
                  local_c8 = 0;
                  local_c0 = 0;
                  local_130 = (undefined8 ***)&DAT_100000000;
                  local_128 = local_a8;
                  local_120 = 0xffffffff;
                  local_118 = 0;
                  iVar10 = 0;
                  if (local_90 != 0) {
                    FUN_1449c0562(&local_130);
                    iVar10 = local_90;
                  }
                  local_188 = (undefined8 ****)local_130;
                  local_180 = local_128;
                  local_178 = local_120;
                  uVar3 = local_178;
                  local_170 = local_118;
                  local_16c = local_114;
                  local_178._4_4_ = (int)((ulonglong)local_120 >> 0x20);
                  iVar5 = local_178._4_4_;
                  local_190 = local_b8;
                  if ((local_178._4_4_ != iVar10) || (local_178 = uVar3, local_128 != local_a8)) {
                    do {
                      local_178 = uVar3;
                      local_148 = *local_190 + (longlong)iVar5 * 0x14;
                      local_118 = CONCAT22(local_118._2_2_,4);
                      local_130 = (undefined8 ***)
                                  CONCAT44(local_130._4_4_,*(undefined4 *)(local_148 + 8));
                      local_110 = 3;
                      local_140 = &local_130;
                      FUN_140881f5a(&local_108,local_134,&local_148,0);
                      pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                                         (ulonglong)((uint)local_110 * 0x120));
                      if (pcVar2 != (code *)0x0) {
                        ppppuVar9 = &local_130;
                        if (0x18 < (ushort)local_118) {
                          ppppuVar9 = (undefined8 ****)local_130;
                        }
                        (*pcVar2)(ppppuVar9);
                      }
                      if (0x18 < (ushort)local_118) {
                        FUN_1400020a8(local_130);
                      }
                      local_178 = CONCAT44(local_178._4_4_,(uint)local_178 & ~local_188._4_4_);
                      FUN_1449c0562(&local_188);
                      iVar5 = local_178._4_4_;
                      uVar3 = local_178;
                    } while (local_190 != local_b8 ||
                             (local_180 != local_a8 || local_178._4_4_ != iVar10));
                  }
                  FUN_1487d553e(lVar6,&local_108);
                  local_c0 = 0;
                  if (local_c8 != 0) {
                    FUN_1400020a8();
                  }
                  FUN_140333f4e(&local_108);
                }
                local_70 = 0;
                if (local_78 != 0) {
                  FUN_1400020a8();
                }
                FUN_14064e7da(local_b8);
              }
            }
          }
        }
      }
      plVar11 = plVar11 + 1;
    } while (plVar11 != plVar1);
  }
  if (local_158 != (longlong *)0x0) {
    FUN_1400020a8(local_158);
  }
  if ((local_60 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1487c2e26 FUN_1487c2e26 body=298 status=ok
// SIG undefined FUN_1487c2e26(void)

bool FUN_1487c2e26(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar1 = *(char *)(param_1 + -0x13e0);
  if (cVar1 != '\x03') goto LAB_1487c2f2a;
  FUN_1406c9d00(param_1 + -0x1118,&local_40);
  if (local_38 == 0) {
    uVar4 = FUN_140927942();
    local_38 = FUN_14477b664(uVar4);
  }
  if (local_30 == (longlong *)0x0) {
    if (((local_38 == 0) || (local_40 == 0)) ||
       (plVar2 = *(longlong **)(local_38 + 0xb8), plVar2 == (longlong *)0x0)) goto LAB_1487c2f2a;
    cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2);
    if (cVar3 == '\0') goto LAB_1487c2f2a;
    uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
    local_30 = (longlong *)FUN_144aff482(uVar4,&local_40);
    if (local_30 == (longlong *)0x0) goto LAB_1487c2f2a;
  }
  plVar2 = local_30;
  lVar5 = (**(code **)(*local_30 + 8))(local_30);
  lVar6 = FUN_1412133c2();
  if (((lVar6 != 0) && (*(int *)(lVar6 + 0x38) <= *(int *)(lVar5 + 0x38))) &&
     (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
      lVar6 + 0x30)) {
    FUN_143ccbf54(param_1,plVar2 + 0x198,0xffffffff);
  }
LAB_1487c2f2a:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return cVar1 == '\x03';
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487c2f52 FUN_1487c2f52 body=119 status=ok
// SIG undefined FUN_1487c2f52(void)

void FUN_1487c2f52(longlong param_1,float param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (param_1 != 0) {
    lVar1 = param_1 + 0x177c;
    FUN_1470ef026(lVar1,(*(float *)(param_1 + 0x177c) - *(float *)(param_1 + 0x1780)) + param_2,1);
    FUN_1470ef062(lVar1,*(float *)(param_1 + 0x177c) + *(float *)(param_1 + 0x1780) + param_2,1);
    uVar2 = FUN_14085b07e(lVar1);
    *(undefined4 *)(param_1 + 0x17d0) = uVar2;
  }
  return;
}



// FUNCTION 1487c2fca FUN_1487c2fca body=69 status=ok
// SIG undefined FUN_1487c2fca(void)

void FUN_1487c2fca(longlong param_1,float param_2,float param_3)

{
  undefined4 uVar1;
  
  if (param_1 != 0) {
    FUN_140acda08(param_1 + 0x177c,param_2 - param_3,param_2 + param_3,1);
    uVar1 = FUN_14085b07e(param_1 + 0x177c);
    *(undefined4 *)(param_1 + 0x17d0) = uVar1;
  }
  return;
}



// FUNCTION 1487c3010 FUN_1487c3010 body=27 status=ok
// SIG undefined FUN_1487c3010(void)

void FUN_1487c3010(undefined8 *param_1,longlong param_2)

{
  if (param_2 != 0) {
    *param_1 = *(undefined8 *)(param_2 + 0x177c);
    return;
  }
  *param_1 = 0;
  return;
}



// FUNCTION 1487c302c FUN_1487c302c body=129 status=ok
// SIG undefined FUN_1487c302c(void)

void FUN_1487c302c(longlong param_1,float param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (param_1 != 0) {
    lVar1 = param_1 + 0x1774;
    FUN_1470ef026(lVar1,(*(float *)(param_1 + 0x1774) - *(float *)(param_1 + 0x1778)) + param_2,1);
    FUN_1470ef062(lVar1,*(float *)(param_1 + 0x1774) + *(float *)(param_1 + 0x1778) + param_2,1);
    uVar2 = FUN_14085b07e(lVar1);
    *(undefined4 *)(param_1 + 0x1774) = uVar2;
    *(undefined4 *)(param_1 + 0x1778) = 0;
  }
  return;
}



// FUNCTION 1487c30ae FUN_1487c30ae body=79 status=ok
// SIG undefined FUN_1487c30ae(void)

void FUN_1487c30ae(longlong param_1,float param_2,float param_3)

{
  undefined4 uVar1;
  
  if (param_1 != 0) {
    FUN_140acda08(param_1 + 0x1774,param_2 - param_3,param_2 + param_3,1);
    uVar1 = FUN_14085b07e(param_1 + 0x1774);
    *(undefined4 *)(param_1 + 0x1774) = uVar1;
    *(undefined4 *)(param_1 + 0x1778) = 0;
  }
  return;
}



// FUNCTION 1487c30fe FUN_1487c30fe body=65 status=ok
// SIG undefined FUN_1487c30fe(void)

void FUN_1487c30fe(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  if (param_1 != 0) {
    FUN_140acda08(param_1 + 0x1774,param_2,param_3,1);
    uVar1 = FUN_14085b07e(param_1 + 0x1774);
    *(undefined4 *)(param_1 + 0x1774) = uVar1;
    *(undefined4 *)(param_1 + 0x1778) = 0;
  }
  return;
}



// FUNCTION 1487c3140 FUN_1487c3140 body=27 status=ok
// SIG undefined FUN_1487c3140(void)

void FUN_1487c3140(undefined8 *param_1,longlong param_2)

{
  if (param_2 != 0) {
    *param_1 = *(undefined8 *)(param_2 + 0x1774);
    return;
  }
  *param_1 = 0;
  return;
}



// FUNCTION 1487c315c FUN_1487c315c body=14 status=ok
// SIG undefined FUN_1487c315c(void)

void FUN_1487c315c(longlong param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x1768) = param_2;
  }
  return;
}



// FUNCTION 1487c316a FUN_1487c316a body=18 status=ok
// SIG undefined FUN_1487c316a(void)

undefined4 FUN_1487c316a(longlong param_1)

{
  if (param_1 != 0) {
    return *(undefined4 *)(param_1 + 0x1768);
  }
  return 0;
}



// FUNCTION 1487c317c FUN_1487c317c body=18 status=ok
// SIG undefined FUN_1487c317c(void)

undefined4 FUN_1487c317c(longlong param_1)

{
  if (param_1 != 0) {
    return *(undefined4 *)(param_1 + 0x17d0);
  }
  return 0;
}



// FUNCTION 1487c318e FUN_1487c318e body=18 status=ok
// SIG undefined FUN_1487c318e(void)

undefined4 FUN_1487c318e(longlong param_1)

{
  if (param_1 != 0) {
    return *(undefined4 *)(param_1 + 0x17c8);
  }
  return 0;
}



// FUNCTION 1487c31a0 FUN_1487c31a0 body=18 status=ok
// SIG undefined FUN_1487c31a0(void)

undefined4 FUN_1487c31a0(longlong param_1)

{
  if (param_1 != 0) {
    return *(undefined4 *)(param_1 + 0x1790);
  }
  return 0;
}



// FUNCTION 1487c31b2 FUN_1487c31b2 body=14 status=ok
// SIG undefined FUN_1487c31b2(void)

void FUN_1487c31b2(longlong param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x1790) = param_2;
  }
  return;
}



// FUNCTION 1487c31c0 FUN_1487c31c0 body=12 status=ok
// SIG undefined FUN_1487c31c0(void)

void FUN_1487c31c0(longlong param_1,undefined1 param_2)

{
  if (param_1 != 0) {
    *(undefined1 *)(param_1 + 0x178d) = param_2;
  }
  return;
}



// FUNCTION 1487c31cc FUN_1487c31cc body=18 status=ok
// SIG undefined FUN_1487c31cc(void)

undefined4 FUN_1487c31cc(longlong param_1)

{
  if (param_1 != 0) {
    return *(undefined4 *)(param_1 + 0x1794);
  }
  return 0;
}



// FUNCTION 1487c31de FUN_1487c31de body=14 status=ok
// SIG undefined FUN_1487c31de(void)

void FUN_1487c31de(longlong param_1,undefined4 param_2)

{
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0x1794) = param_2;
  }
  return;
}



// FUNCTION 1487c31ec FUN_1487c31ec body=12 status=ok
// SIG undefined FUN_1487c31ec(void)

void FUN_1487c31ec(longlong param_1,undefined1 param_2)

{
  if (param_1 != 0) {
    *(undefined1 *)(param_1 + 0x178e) = param_2;
  }
  return;
}



// FUNCTION 1487c3208 FUN_1487c3208 body=217 status=ok
// SIG undefined FUN_1487c3208(void)

undefined8 *
FUN_1487c3208(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  byte bVar2;
  ushort uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  undefined8 *_Dst;
  
  plVar4 = (longlong *)FUN_1487c9352(param_4);
  if (plVar4 != (longlong *)0x0) {
    if ((char)param_1[1] == '\x01') {
      (**(code **)(*plVar4 + 0x6f0))(plVar4,param_2);
      *(undefined2 *)(param_2 + 3) = 0x18;
      bVar2 = 4;
      goto LAB_1487c32ac;
    }
    if ((char)param_1[1] == '\0') {
      uVar5 = FUN_14479d2ce((longlong)plVar4 + 0x16d4);
      *(undefined2 *)(param_2 + 3) = 8;
      *param_2 = 0;
      FUN_14485c47a(param_2,uVar5);
      bVar2 = 7;
      goto LAB_1487c32ac;
    }
  }
  bVar2 = (**(code **)(*param_1 + 0x38))(param_1);
  uVar6 = (ulonglong)((uint)bVar2 * 0x120);
  uVar1 = *(uint *)((longlong)&DAT_14c9a8510 + uVar6);
  uVar3 = (ushort)uVar1;
  *(ushort *)(param_2 + 3) = uVar3;
  _Dst = param_2;
  if (0x18 < uVar3) {
    _Dst = (undefined8 *)FUN_14001cc68(uVar1 & 0xffff);
    *param_2 = _Dst;
  }
  if (*(code **)((longlong)&DAT_14c9a85a8 + uVar6) == (code *)0x0) {
    memset(_Dst,0,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar6));
  }
  else {
    (**(code **)((longlong)&DAT_14c9a85a8 + uVar6))();
  }
LAB_1487c32ac:
  *(byte *)(param_2 + 4) = bVar2;
  return param_2;
}



// FUNCTION 1487c330a FUN_1487c330a body=216 status=ok
// SIG undefined FUN_1487c330a(void)

ulonglong FUN_1487c330a(longlong param_1,float param_2,float param_3)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  ulonglong uVar4;
  undefined1 auStack_68 [32];
  float local_48;
  float local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  fVar2 = (float)(~-(uint)(0.0001 < param_3) & 0x3f800000 |
                 (uint)(param_2 / param_3) & -(uint)(0.0001 < param_3));
  uVar4 = (ulonglong)(uint)fVar2;
  if (1.0 <= fVar2) {
    uVar4 = SUB168(ZEXT416(0x3f800000),0);
  }
  if ((float)uVar4 <= 0.0) {
    uVar4 = 0;
  }
  lVar1 = FUN_1401e2d36(param_1 + 0x30);
  if (lVar1 != 0) {
    local_44 = 0.0;
    local_48 = 0.0;
    FUN_140784c10(lVar1,&local_44,&local_48);
    fVar3 = (float)uVar4;
    fVar2 = fVar3;
    if (1.0 <= fVar3) {
      fVar2 = 1.0;
    }
    if (fVar2 <= 0.0) {
      fVar2 = 0.0;
    }
    uVar4 = FUN_1448c9f94(lVar1,(local_48 - local_44) * fVar2 + local_44,fVar3);
  }
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487c33e4 FUN_1487c33e4 body=22 status=ok
// SIG undefined FUN_1487c33e4(void)

undefined8 FUN_1487c33e4(int *param_1)

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
  
  plVar4 = DAT_14cb71518;
  if (DAT_14cb71518 == (longlong *)0x0) {
    return 0;
  }
  if (*(code **)(*DAT_14cb71518 + 0x300) == (code *)&LAB_144837a50) {
    if (((*(byte *)((longlong)DAT_14cb71518 + 0x154) & 1) == 0) ||
       ((int)DAT_14cb71518[0x3a] <= *(int *)((longlong)DAT_14cb71518 + 0x1fc))) {
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
    cVar5 = (**(code **)(*DAT_14cb71518 + 0x300))(DAT_14cb71518);
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



// FUNCTION 1487c33fa FUN_1487c33fa body=150 status=ok
// SIG undefined FUN_1487c33fa(void)

longlong FUN_1487c33fa(longlong *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  
  if (param_1 != (longlong *)0x0) {
    uVar1 = FUN_145a811ac();
    lVar2 = (**(code **)(*param_1 + 0x288))(param_1,uVar1);
    if (lVar2 != 0) {
      uVar1 = FUN_145a811ac();
      lVar3 = FUN_144718840(lVar2,uVar1);
      if (lVar2 != lVar3 && lVar3 != 0) {
        return lVar3;
      }
    }
  }
  plVar4 = (longlong *)FUN_1414cfaa6(param_1);
  if (plVar4 != (longlong *)0x0) {
    uVar1 = FUN_145a811ac();
    lVar2 = (**(code **)(*plVar4 + 0x288))(plVar4,uVar1);
    if (lVar2 != 0) {
      uVar1 = FUN_145a811ac();
      lVar3 = FUN_144718840(lVar2,uVar1);
      if (lVar2 != lVar3) {
        return lVar3;
      }
    }
  }
  return 0;
}



// FUNCTION 1487c3490 FUN_1487c3490 body=63 status=ok
// SIG undefined FUN_1487c3490(void)

longlong FUN_1487c3490(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1487c939e(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x18 + *param_1;
  FUN_1487c938f(lVar2);
  return lVar2;
}



// FUNCTION 1487c34d0 FUN_1487c34d0 body=319 status=ok
// SIG undefined FUN_1487c34d0(void)

void FUN_1487c34d0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  bool bVar5;
  longlong lVar6;
  longlong lVar7;
  
  if (0 < *(int *)(param_1 + 0x20)) {
    plVar1 = (longlong *)(param_1 + 0x18);
    lVar6 = 0;
    bVar5 = false;
    do {
      lVar7 = lVar6 * 0x18 + 8;
      while (lVar3 = FUN_14479d2ce(*plVar1 + lVar7), lVar3 != param_2) {
        lVar6 = lVar6 + 1;
        lVar7 = lVar7 + 0x18;
        if (*(int *)(param_1 + 0x20) <= lVar6) {
          if (bVar5) goto LAB_1487c3605;
          goto LAB_1487c35ae;
        }
      }
      do {
        iVar2 = *(int *)(param_1 + 0x20);
        if (iVar2 - 1U != (uint)lVar6) {
          iVar4 = ~(uint)lVar6 + iVar2;
          if (0 < iVar4) {
            iVar4 = 1;
          }
          memmove((void *)(*(longlong *)(param_1 + 0x18) + lVar7 + -8),
                  (void *)(*(longlong *)(param_1 + 0x18) + (longlong)(iVar2 - iVar4) * 0x18),
                  (longlong)iVar4 * 0x18);
          iVar2 = *(int *)(param_1 + 0x20);
        }
        *(int *)(param_1 + 0x20) = iVar2 + -1;
        if (iVar2 + -1 <= lVar6) goto LAB_1487c3605;
        lVar3 = FUN_14479d2ce(*plVar1 + lVar7);
      } while (lVar3 == param_2);
      lVar6 = lVar6 + 1;
      bVar5 = true;
    } while (lVar6 < *(int *)(param_1 + 0x20));
LAB_1487c3605:
    FUN_1487c9432(plVar1);
  }
LAB_1487c35ae:
  if ((longlong)*(int *)(param_1 + 0x10) != 0) {
    lVar6 = *(longlong *)(param_1 + 8);
    lVar7 = (longlong)*(int *)(param_1 + 0x10) * 0x120;
    do {
      lVar3 = FUN_14479d2ce(lVar6 + 8);
      if (lVar3 == param_2) {
        FUN_1487c39fc(lVar6,0);
        *(undefined1 *)(lVar6 + 0x113) = 1;
      }
      lVar6 = lVar6 + 0x120;
      lVar7 = lVar7 + -0x120;
    } while (lVar7 != 0);
  }
  return;
}



// FUNCTION 1487c3610 FUN_1487c3610 body=487 status=ok
// SIG undefined FUN_1487c3610(void)

void FUN_1487c3610(longlong param_1,undefined4 param_2)

{
  int iVar1;
  void *pvVar2;
  longlong lVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_188 [32];
  undefined1 local_168 [256];
  char local_68;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_188;
  if ((longlong)*(int *)(param_1 + 0x20) != 0) {
    lVar3 = *(longlong *)(param_1 + 0x18);
    lVar6 = (longlong)*(int *)(param_1 + 0x20) * 0x18;
    do {
      FUN_143c9e032(local_168,lVar3);
      if (local_68 == '\x01') {
        pvVar2 = (void *)FUN_1487c381a(param_1 + 8);
        memcpy(pvVar2,local_168,0x100);
        FUN_1487c39fc(pvVar2,1);
      }
      lVar3 = lVar3 + 0x18;
      lVar6 = lVar6 + -0x18;
    } while (lVar6 != 0);
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (*(int *)(param_1 + 0x24) < 0) {
    FUN_1487c95d8(param_1 + 0x18);
  }
  if ((longlong)*(int *)(param_1 + 0x10) != 0) {
    lVar3 = *(longlong *)(param_1 + 8);
    lVar6 = (longlong)*(int *)(param_1 + 0x10) * 0x120;
    do {
      FUN_143c9ea3a(lVar3,param_2);
      lVar3 = lVar3 + 0x120;
      lVar6 = lVar6 + -0x120;
    } while (lVar6 != 0);
    iVar1 = *(int *)(param_1 + 0x10);
    if (0 < iVar1) {
      lVar3 = 0;
      bVar4 = false;
      do {
        lVar6 = *(longlong *)(param_1 + 8);
        lVar3 = (longlong)(int)lVar3;
        pvVar2 = (void *)(lVar3 * 0x120 + lVar6);
        while (*(char *)((longlong)pvVar2 + 0x113) != '\x01') {
          lVar3 = lVar3 + 1;
          pvVar2 = (void *)((longlong)pvVar2 + 0x120);
          if (iVar1 <= lVar3) {
            if (bVar4) goto LAB_1487c3809;
            goto LAB_1487c3782;
          }
        }
        iVar5 = (iVar1 + -1) - (int)lVar3;
        if (iVar5 != 0) {
          if (0 < iVar5) {
            iVar5 = 1;
          }
          memmove(pvVar2,(void *)(lVar6 + (longlong)(iVar1 - iVar5) * 0x120),(longlong)iVar5 * 0x120
                 );
          iVar1 = *(int *)(param_1 + 0x10);
        }
        iVar1 = iVar1 + -1;
        *(int *)(param_1 + 0x10) = iVar1;
        bVar4 = true;
      } while ((int)lVar3 < iVar1);
LAB_1487c3809:
      FUN_1487c9608((longlong *)(param_1 + 8));
      iVar1 = *(int *)(param_1 + 0x10);
LAB_1487c3782:
      if (0 < iVar1) goto LAB_1487c378c;
    }
  }
  if ((*(int *)(param_1 + 0x20) < 1) && (*(char *)(param_1 + 0x2c) != '\0')) {
    *(undefined1 *)(param_1 + 0x2c) = 0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_50 ^ (ulonglong)auStack_188);
  }
LAB_1487c378c:
  if ((local_50 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1487c381a FUN_1487c381a body=63 status=ok
// SIG undefined FUN_1487c381a(void)

longlong FUN_1487c381a(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1487c9544(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x120 + *param_1;
  FUN_1487c94e0(lVar2);
  return lVar2;
}



// FUNCTION 1487c385a FUN_1487c385a body=180 status=ok
// SIG undefined FUN_1487c385a(void)

longlong * FUN_1487c385a(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar3 = (longlong *)0x0;
  if ((param_1 != 0) && (*param_2 != 0)) {
    local_48 = 0;
    uStack_40 = 0;
    plVar3 = (longlong *)0x0;
    FUN_140611a6c(0,&local_48,0);
    lVar1 = local_48;
    lVar4 = (longlong)(int)uStack_40;
    if (lVar4 != 0) {
      lVar5 = 0;
      do {
        plVar3 = *(longlong **)(lVar1 + lVar5);
        if ((plVar3 != (longlong *)0x0) &&
           (cVar2 = (**(code **)(*plVar3 + 0x4c8))(plVar3,*param_2), cVar2 != '\0'))
        goto LAB_1487c38dc;
        lVar5 = lVar5 + 8;
      } while (lVar4 * 8 != lVar5);
      plVar3 = (longlong *)0x0;
    }
LAB_1487c38dc:
    if (local_48 != 0) {
      FUN_1400020a8(local_48);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar3;
}



// FUNCTION 1487c3910 FUN_1487c3910 body=106 status=ok
// SIG undefined FUN_1487c3910(void)

void FUN_1487c3910(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = *param_2;
  local_20 = FUN_144a799b0();
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



// FUNCTION 1487c397c FUN_1487c397c body=127 status=ok
// SIG undefined FUN_1487c397c(void)

undefined8 FUN_1487c397c(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if (*param_1 != 0) {
    cVar1 = FUN_144729dda(param_1 + 0x10);
    if (cVar1 != '\0') {
      lVar2 = FUN_14479d2ce(param_1 + 0x10);
      if ((*(byte *)(lVar2 + 0x65) & 0x18) == 0x10) {
        cVar1 = FUN_144729dda(param_1 + 0x11);
        if (cVar1 != '\0') {
          cVar1 = FUN_144729dda(param_1 + 1);
          if (cVar1 != '\0') {
            lVar2 = FUN_14479d2ce(param_1 + 1);
            if ((*(byte *)(lVar2 + 0x65) & 0x18) == 0x10) {
              uVar3 = FUN_144729dda(param_1 + 2);
              return uVar3;
            }
          }
        }
      }
    }
  }
  return 0;
}



// FUNCTION 1487c39fc FUN_1487c39fc body=847 status=ok
// SIG undefined FUN_1487c39fc(void)

void FUN_1487c39fc(longlong *param_1,char param_2)

{
  int iVar1;
  char cVar2;
  undefined1 uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  double dVar10;
  double dVar11;
  undefined1 auStack_b8 [32];
  undefined1 local_98;
  undefined1 local_88 [32];
  double local_68;
  double dStack_60;
  double local_58;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_2 != '\0') {
    cVar2 = FUN_1487c397c(param_1);
    if (cVar2 != '\0') {
      plVar7 = param_1 + 2;
      cVar2 = FUN_144729dda(plVar7);
      if (cVar2 != '\0') {
        lVar6 = FUN_14479d2ce(plVar7);
        plVar4 = (longlong *)(lVar6 + 0x240);
        plVar9 = param_1 + 4;
        for (lVar8 = 0xc; lVar8 != 0; lVar8 = lVar8 + -1) {
          *plVar9 = *plVar4;
          plVar4 = plVar4 + 1;
          plVar9 = plVar9 + 1;
        }
        plVar4 = (longlong *)FUN_14479d2ce(plVar7);
        (**(code **)(*plVar4 + 0x4a0))(plVar4,&DAT_14cadad9c);
        lVar6 = FUN_14479d2ce(plVar7);
        *(uint *)((longlong)param_1 + 0x10c) = (uint)*(byte *)(lVar6 + 0x1fb);
        plVar4 = (longlong *)FUN_14479d2ce(plVar7);
        (**(code **)(*plVar4 + 0x588))(plVar4,2);
        lVar6 = FUN_14479d2ce(plVar7);
        *(byte *)(param_1 + 0x22) = *(byte *)(lVar6 + 0x9c) >> 7;
        uVar5 = FUN_14479d2ce(plVar7);
        FUN_140b361ee(uVar5,0);
        plVar7 = (longlong *)FUN_14479d2ce(plVar7);
        if (plVar7 != (longlong *)0x0) {
          lVar6 = FUN_144a3a302();
          if ((*(int *)(lVar6 + 0x38) <= *(int *)(plVar7[2] + 0x38)) &&
             (*(longlong *)(*(longlong *)(plVar7[2] + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8)
              == lVar6 + 0x30)) {
            cVar2 = FUN_144a7c526(plVar7 + 0x82);
            if (cVar2 == '\0') {
              uVar3 = 0;
            }
            else {
              uVar3 = FUN_144727810(plVar7 + 0x82);
            }
            *(undefined1 *)((longlong)param_1 + 0x111) = uVar3;
            (**(code **)(*plVar7 + 0x690))(plVar7,0);
          }
        }
      }
      plVar7 = param_1 + 1;
      cVar2 = FUN_144729dda(plVar7);
      if ((cVar2 != '\0') && (*(char *)(*param_1 + 0xd0) == '\x01')) {
        lVar6 = FUN_14479d2ce(plVar7);
        *(byte *)((longlong)param_1 + 0x112) = *(byte *)(lVar6 + 0x65) & 1;
        uVar5 = FUN_14479d2ce(plVar7);
        FUN_1405e47c6(uVar5,0);
      }
      *(undefined4 *)(param_1 + 0x20) = 0;
      *(undefined1 *)(param_1 + 0x21) = 0;
      FUN_1487c3d62(param_1,local_88);
      lVar6 = *param_1;
      dVar10 = SQRT((local_58 - (double)param_1[10]) * (local_58 - (double)param_1[10]) +
                    (local_68 - (double)param_1[8]) * (local_68 - (double)param_1[8]) +
                    (dStack_60 - (double)param_1[9]) * (dStack_60 - (double)param_1[9])) /
               (double)*(float *)(lVar6 + 0x28);
      if ((double)*(float *)(lVar6 + 0x24) <= dVar10) {
        dVar10 = (double)*(float *)(lVar6 + 0x24);
      }
      if (dVar10 <= (double)*(float *)(lVar6 + 0x1c)) {
        dVar10 = (double)*(float *)(lVar6 + 0x1c);
      }
      dVar11 = 0.0;
      if (0.0 <= dVar10) {
        dVar11 = dVar10;
      }
      *(float *)((longlong)param_1 + 0x104) = (float)dVar11;
      goto LAB_1487c3d3b;
    }
  }
  plVar7 = param_1 + 2;
  cVar2 = FUN_144729dda(plVar7);
  if (cVar2 != '\0') {
    plVar4 = (longlong *)FUN_14479d2ce(plVar7);
    (**(code **)(*plVar4 + 0x4a0))(plVar4,&DAT_14cadad9c);
    plVar4 = (longlong *)FUN_14479d2ce(plVar7);
    (**(code **)(*plVar4 + 0x588))(plVar4,*(undefined4 *)((longlong)param_1 + 0x10c));
    uVar5 = FUN_14479d2ce(plVar7);
    FUN_140b361ee(uVar5,(char)param_1[0x22]);
    plVar4 = (longlong *)FUN_14479d2ce(plVar7);
    if (plVar4 != (longlong *)0x0) {
      lVar6 = FUN_144a3a302();
      iVar1 = *(int *)(lVar6 + 0x38);
      if ((iVar1 <= *(int *)(plVar4[2] + 0x38)) &&
         (*(longlong *)(*(longlong *)(plVar4[2] + 0x30) + (longlong)iVar1 * 8) == lVar6 + 0x30)) {
        (**(code **)(*plVar4 + 0x690))
                  (plVar4,CONCAT71((int7)(int3)((uint)iVar1 >> 8),
                                   *(undefined1 *)((longlong)param_1 + 0x111)));
      }
    }
    uVar5 = FUN_14479d2ce(plVar7);
    local_98 = 2;
    FUN_140613f88(uVar5,param_1 + 4,0,0);
  }
  cVar2 = FUN_144729dda(param_1 + 1);
  if (((cVar2 != '\0') && (*param_1 != 0)) && (*(char *)(*param_1 + 0xd0) == '\x01')) {
    FUN_14479d2ce(param_1 + 1);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_b8);
  }
LAB_1487c3d3b:
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487c3d62 FUN_1487c3d62 body=1938 status=ok
// SIG undefined FUN_1487c3d62(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double * FUN_1487c3d62(longlong param_1,double *param_2)

{
  double dVar1;
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  char cVar18;
  int iVar19;
  longlong *plVar20;
  undefined4 uVar21;
  uint uVar22;
  longlong lVar23;
  ulonglong uVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  double dVar29;
  undefined1 auVar28 [16];
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  double dVar36;
  double dVar37;
  double dVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auStack_298 [32];
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
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined1 local_1d8 [16];
  double local_1c8;
  undefined8 uStack_1c0;
  undefined1 local_1b8 [16];
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
  double local_150;
  double local_148;
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
  longlong *plVar24;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_298;
  lVar23 = param_1 + 0x88;
  plVar20 = (longlong *)FUN_14479d2ce(lVar23);
  cVar18 = (**(code **)(*plVar20 + 0x4c8))(plVar20,*(undefined8 *)(param_1 + 0x90));
  plVar20 = (longlong *)FUN_14479d2ce();
  uVar21 = (undefined4)lVar23;
  if (cVar18 == '\0') {
    dVar3 = (double)plVar20[0x48];
    dVar4 = (double)plVar20[0x49];
    dVar5 = (double)plVar20[0x4a];
    dVar6 = (double)plVar20[0x4b];
    dVar7 = (double)plVar20[0x4c];
    dVar13 = (double)plVar20[0x4d];
    dVar33 = (double)plVar20[0x4f];
    param_2[6] = (double)plVar20[0x4e];
    param_2[7] = dVar33;
    param_2[4] = dVar7;
    param_2[5] = dVar13;
    param_2[2] = dVar5;
    param_2[3] = dVar6;
    *param_2 = dVar3;
    param_2[1] = dVar4;
  }
  else {
    plVar24 = plVar20;
    plVar20 = (longlong *)
              (**(code **)(*plVar20 + 0x4a8))(plVar20,param_2,*(undefined8 *)(param_1 + 0x90),0);
    uVar21 = SUB84(plVar24,0);
  }
  auVar34 = *(undefined1 (*) [16])(param_1 + 0x60);
  dVar3 = auVar34._0_8_;
  dVar6 = auVar34._8_8_;
  dVar13 = *(double *)(param_1 + 0x70);
  auVar41._8_8_ = 0;
  auVar41._0_8_ = dVar13;
  *(undefined1 (*) [16])(param_2 + 8) = auVar34;
  *(undefined1 (*) [16])(param_2 + 10) = auVar41;
  auVar39 = _DAT_149934d80;
  auVar35 = *(undefined1 (*) [16])(param_1 + 0xe0);
  dVar4 = auVar35._0_8_;
  dVar7 = auVar35._8_8_;
  auVar2 = *(undefined1 (*) [16])(param_1 + 0xf0);
  dVar5 = auVar2._0_8_;
  auVar34 = minpd(auVar35,auVar34);
  auVar41 = minpd(auVar2,auVar41);
  auVar35._8_8_ = -(ulonglong)(auVar34._8_8_ < 0.0);
  auVar35._0_8_ = -(ulonglong)(auVar34._0_8_ < 0.0);
  iVar19 = movmskpd((int)plVar20,auVar35);
  auVar34._8_8_ = -(ulonglong)(auVar41._8_8_ < 0.0);
  auVar34._0_8_ = -(ulonglong)(auVar41._0_8_ < 0.0);
  uVar22 = movmskpd(uVar21,auVar34);
  if ((uVar22 & 0x3fffffff) == 0 && iVar19 == 0) {
    dVar37 = *(double *)(param_1 + 0xa0);
    dVar38 = *(double *)(param_1 + 0xa8);
    dVar30 = *(double *)(param_1 + 0xb0);
    dVar36 = *(double *)(param_1 + 0xb8);
    dVar14 = *param_2;
    dVar15 = param_2[1];
    dVar16 = param_2[2];
    dVar17 = param_2[3];
    dVar33 = param_2[3];
    dVar29 = param_2[3];
    dVar10 = param_2[1];
    dVar11 = param_2[1];
    dVar12 = param_2[2];
    dVar1 = param_2[2];
    dVar31 = dVar38 * dVar12 * -1.0 + dVar30 * dVar10 + dVar36 * *param_2 * 1.0 + dVar37 * dVar33;
    dVar32 = dVar37 * dVar1 * 1.0 + dVar36 * dVar11 + dVar30 * *param_2 * -1.0 + dVar38 * dVar29;
    auVar39._0_8_ =
         dVar36 * dVar12 * 1.0 + ((*param_2 * dVar38 * 1.0 + dVar30 * dVar33) - dVar37 * dVar10);
    auVar39._8_8_ =
         dVar30 * dVar1 * -1.0 + ((*param_2 * dVar37 * -1.0 + dVar36 * dVar29) - dVar38 * dVar11);
    dVar30 = *(double *)(param_1 + 0xc0) * dVar3;
    dVar36 = *(double *)(param_1 + 200) * dVar6;
    dVar1 = *(double *)(param_1 + 0xd0) * dVar13;
    dVar37 = *(double *)(param_1 + 0xd8) * 0.0;
    dVar10 = dVar36 * dVar14 - dVar15 * dVar30;
    dVar11 = dVar1 * dVar15 - dVar16 * dVar36;
    dVar12 = dVar30 * dVar16 - dVar14 * dVar1;
    dVar38 = dVar37 * dVar17 - dVar17 * dVar37;
    dVar11 = dVar11 + dVar11;
    dVar12 = dVar12 + dVar12;
    dVar10 = dVar10 + dVar10;
    dVar38 = dVar38 + dVar38;
    local_f8 = (dVar10 * dVar15 - dVar16 * dVar12) + dVar33 * dVar11 + dVar30 + param_2[4];
    dStack_f0 = (dVar11 * dVar16 - dVar10 * dVar14) + dVar29 * dVar12 + dVar36 + param_2[5];
    local_e8 = (dVar12 * dVar14 - dVar15 * dVar11) + dVar33 * dVar10 + dVar1 + param_2[6];
    dVar33 = (dVar38 * dVar17 - dVar38 * dVar17) + dVar29 * dVar38 + dVar37 + param_2[7];
  }
  else {
    dVar1 = *param_2;
    dVar37 = param_2[1];
    dVar38 = param_2[2];
    dVar36 = dVar37 + dVar37;
    dVar29 = dVar38 + dVar38;
    dVar12 = dVar1 * (dVar1 + dVar1);
    local_188 = (1.0 - (dVar12 + dVar37 * dVar36)) * dVar13;
    dVar33 = param_2[3];
    dVar10 = dVar29 * dVar33;
    dVar11 = (dVar1 + dVar1) * param_2[3];
    dVar33 = dVar36 * dVar33;
    local_198 = (dVar33 + *param_2 * dVar29) * dVar13;
    dVar12 = (DAT_149934d80._8_8_ - (dVar38 * dVar29 + dVar12)) * dVar6;
    dVar30 = (dVar36 * dVar1 + dVar10) * dVar3;
    local_1a8 = (dVar29 * dVar37 + dVar11) * dVar6;
    dStack_190 = (dVar29 * dVar37 - dVar11) * dVar13;
    local_1c8 = (*param_2 * dVar29 - dVar33) * dVar3;
    local_1d8._8_4_ = SUB84(dVar30,0);
    local_1d8._0_8_ = ((double)DAT_149934d80 - (dVar38 * dVar29 + dVar37 * dVar36)) * dVar3;
    local_1d8._12_4_ = (int)((ulonglong)dVar30 >> 0x20);
    uStack_1c0 = 0;
    local_1b8._8_4_ = SUB84(dVar12,0);
    local_1b8._0_8_ = (dVar36 * dVar1 - dVar10) * dVar6;
    local_1b8._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
    uStack_1a0 = 0;
    uStack_180 = 0;
    local_178 = param_2[4];
    dStack_170 = param_2[5];
    local_168 = param_2[6];
    uStack_160 = 0x3ff0000000000000;
    dVar11 = *(double *)(param_1 + 0xa0);
    dVar12 = *(double *)(param_1 + 0xa8);
    dVar1 = *(double *)(param_1 + 0xb0);
    dVar37 = dVar12 + dVar12;
    dVar38 = dVar1 + dVar1;
    dVar29 = dVar11 * (dVar11 + dVar11);
    local_208 = (1.0 - (dVar29 + dVar12 * dVar37)) * dVar5;
    dVar10 = *(double *)(param_1 + 0xa0) * dVar38;
    dVar33 = *(double *)(param_1 + 0xb8);
    dVar30 = dVar38 * dVar33;
    dVar36 = (dVar11 + dVar11) * *(double *)(param_1 + 0xb8);
    dVar33 = dVar37 * dVar33;
    local_218 = (dVar33 + dVar10) * dVar5;
    local_238 = (dVar37 * dVar11 - dVar30) * dVar7;
    dStack_210 = (dVar38 * dVar12 - dVar36) * dVar5;
    local_258 = ((double)DAT_149934d80 - (dVar1 * dVar38 + dVar12 * dVar37)) * dVar4;
    dStack_230 = (DAT_149934d80._8_8_ - (dVar1 * dVar38 + dVar29)) * dVar7;
    dStack_250 = (dVar37 * dVar11 + dVar30) * dVar4;
    local_228 = (dVar38 * dVar12 + dVar36) * dVar7;
    local_248 = (dVar10 - dVar33) * dVar4;
    uStack_240 = 0;
    uStack_220 = 0;
    uStack_200 = 0;
    local_1f8 = *(undefined8 *)(param_1 + 0xc0);
    uStack_1f0 = *(undefined8 *)(param_1 + 200);
    local_1e8 = *(undefined8 *)(param_1 + 0xd0);
    uStack_1e0 = 0x3ff0000000000000;
    FUN_1447fea8d(&local_158);
    FUN_144a1c686(&local_158,0x3e45798ee0000000);
    auVar26._8_8_ = -(ulonglong)(0.0 <= dVar6 * dVar7);
    auVar26._0_8_ = -(ulonglong)(0.0 <= dVar3 * dVar4);
    auVar34 = blendvpd(_DAT_149936790,auVar39,auVar26);
    uVar25 = -(ulonglong)(0.0 <= dVar13 * dVar5);
    dVar33 = (double)(~uVar25 & 0xbff0000000000000 | uVar25 & 0x3ff0000000000000);
    dVar29 = auVar34._0_8_;
    local_148 = local_148 * dVar29;
    local_150 = local_150 * dVar29;
    local_158 = local_158 * dVar29;
    dVar29 = auVar34._8_8_;
    local_128 = local_128 * dVar29;
    local_130 = local_130 * dVar29;
    local_138 = dVar29 * local_138;
    local_108 = local_108 * dVar33;
    local_110 = local_110 * dVar33;
    local_118 = dVar33 * local_118;
    FUN_14481fd10(&local_278,&local_158);
    dVar33 = local_268 * local_268 + local_278 * local_278;
    dVar29 = dStack_260 * dStack_260 + dStack_270 * dStack_270;
    auVar28._0_8_ = dVar33 + dVar29;
    auVar28._8_8_ = dVar33 + dVar29;
    auVar27._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar28._8_8_);
    auVar27._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar28._0_8_);
    auVar34 = sqrtpd(auVar28,auVar28);
    auVar34 = divpd(auVar39,auVar34);
    auVar40._0_8_ = auVar34._0_8_ * local_268;
    auVar40._8_8_ = auVar34._8_8_ * dStack_260;
    dVar31 = (double)((ulonglong)(local_278 * auVar34._0_8_) &
                     -(ulonglong)(9.99999993922529e-09 <= auVar28._0_8_));
    dVar32 = (double)((ulonglong)(dStack_270 * auVar34._8_8_) &
                     -(ulonglong)(9.99999993922529e-09 <= auVar28._8_8_));
    auVar39 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar40,auVar27);
    dVar33 = 0.0;
  }
  *param_2 = dVar31;
  param_2[1] = dVar32;
  *(undefined1 (*) [16])(param_2 + 2) = auVar39;
  auVar8._8_4_ = SUB84(dStack_f0,0);
  auVar8._0_8_ = local_f8;
  auVar8._12_4_ = (int)((ulonglong)dStack_f0 >> 0x20);
  *(undefined1 (*) [16])(param_2 + 4) = auVar8;
  param_2[6] = local_e8;
  param_2[7] = dVar33;
  auVar9._8_4_ = SUB84(dVar6 * dVar7,0);
  auVar9._0_8_ = dVar3 * dVar4;
  auVar9._12_4_ = (int)((ulonglong)(dVar6 * dVar7) >> 0x20);
  *(undefined1 (*) [16])(param_2 + 8) = auVar9;
  param_2[10] = dVar13 * dVar5;
  param_2[0xb] = auVar2._8_8_ * 0.0;
  if ((local_d0 ^ (ulonglong)auStack_298) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487c4501 FUN_1487c4501 body=175 status=ok
// SIG undefined FUN_1487c4501(void)

undefined8 FUN_1487c4501(undefined8 param_1)

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
  local_b8 = FUN_145b7a598();
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



// FUNCTION 1487c45b2 FUN_1487c45b2 body=514 status=ok
// SIG undefined FUN_1487c45b2(void)

undefined8 FUN_1487c45b2(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_158 [32];
  longlong local_138;
  double *local_130;
  undefined1 *local_128;
  longlong local_118;
  undefined8 uStack_110;
  double local_108;
  double local_100;
  double local_f8;
  undefined1 local_f0 [24];
  double local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  longlong local_70;
  longlong local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_158;
  lVar2 = FUN_1447210f0();
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    (**(code **)(*param_1 + 0x718))(param_1,&local_d8,local_f0);
    FUN_144a76660(local_f0,&local_c0);
    local_f8 = local_b0 * 10000.0 + local_c8;
    local_100 = local_b8 * 10000.0 + local_d0;
    local_108 = local_c0 * 10000.0 + local_d8;
    if (param_1[0x89] == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = *(longlong *)(param_1[0x89] + 0x430);
      if ((lVar4 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar4);
      }
    }
    uVar3 = 0;
    local_138 = lVar4;
    FUN_144a886e6(&local_c0,0,&local_118,1);
    local_118 = 0;
    uStack_110 = 0;
    local_128 = &DAT_14cad0f10;
    local_138 = CONCAT44(local_138._4_4_,0x12);
    local_130 = &local_c0;
    FUN_1401e24ee(lVar2,&local_118,&local_d8,&local_108);
    if ((longlong)(int)uStack_110 != 0) {
      lVar4 = (longlong)(int)uStack_110 << 8;
      uVar3 = 0;
      lVar2 = local_118;
      do {
        if (1e-08 < *(float *)(lVar2 + 8) || *(float *)(lVar2 + 8) == 1e-08) {
          cVar1 = FUN_144a41512(lVar2 + 0xb8);
          if (cVar1 != '\0') {
            if (lVar2 == 0) {
              uVar3 = 0;
            }
            else {
              uVar3 = FUN_14485cccc(lVar2 + 0xb8);
            }
            break;
          }
        }
        lVar2 = lVar2 + 0x100;
        lVar4 = lVar4 + -0x100;
      } while (lVar4 != 0);
    }
    if (local_118 != 0) {
      FUN_1400020a8(local_118);
    }
    if (local_50 != 0) {
      FUN_1400020a8();
    }
    if (local_70 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 1487c47b6 FUN_1487c47b6 body=90 status=ok
// SIG undefined FUN_1487c47b6(void)

void FUN_1487c47b6(longlong param_1,longlong param_2)

{
  FUN_140cf4cae();
  if (param_2 != 0) {
    if (*(longlong *)(param_1 + 0xd60) == param_2) {
      *(undefined8 *)(param_1 + 0xd60) = 0;
    }
    if (*(longlong *)(param_1 + 0xc30) == param_2) {
      *(undefined8 *)(param_1 + 0xc30) = 0;
      FUN_1448a8284(param_1 + 0xc10);
      return;
    }
  }
  return;
}



// FUNCTION 1487c4810 FUN_1487c4810 body=69 status=ok
// SIG undefined FUN_1487c4810(void)

void FUN_1487c4810(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = FUN_1447210f0();
  lVar2 = FUN_140d5bae2(uVar1);
  if (lVar2 != 0) {
    FUN_1488556ac(lVar2 + 8,param_1 + 0x960,param_3);
    return;
  }
  return;
}



// FUNCTION 1487c4856 FUN_1487c4856 body=59 status=ok
// SIG undefined FUN_1487c4856(void)

int FUN_1487c4856(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_140ef2624(param_1,iVar1);
  }
  FUN_1487c9f08((longlong)iVar1 * 0x48 + *param_1);
  return iVar1;
}



// FUNCTION 1487c4892 FUN_1487c4892 body=76 status=ok
// SIG undefined FUN_1487c4892(void)

void FUN_1487c4892(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  int iVar2;
  
  iVar2 = FUN_14487fd02();
  if (((iVar2 != 3) && (lVar1 = *(longlong *)(param_1 + 0x398), lVar1 != 0)) &&
     ((*(byte *)(lVar1 + 0x39a) & 8) >> 3 != (byte)param_2)) {
    FUN_147ca93de(lVar1,param_2);
    FUN_1487c48de(param_1);
    return;
  }
  return;
}



// FUNCTION 1487c48de FUN_1487c48de body=219 status=ok
// SIG undefined FUN_1487c48de(void)

void FUN_1487c48de(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  
  plVar1 = (longlong *)param_1[0x73];
  if (plVar1 == (longlong *)0x0) {
    bVar4 = 0;
  }
  else {
    bVar4 = (*(byte *)((longlong)plVar1 + 0x39a) & 8) >> 3;
    (**(code **)(*plVar1 + 0x308 + (ulonglong)bVar4 * 0x10))(plVar1,param_1);
    if (param_1[0x73] != 0) {
      lVar3 = FUN_140082f10();
      if ((((param_1[0x73] != 0) && (lVar3 != 0)) &&
          (lVar2 = *(longlong *)(param_1[0x73] + 0x10), lVar2 != 0)) &&
         ((*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38) &&
          (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
           lVar3 + 0x30)))) {
        FUN_14893175e();
      }
    }
  }
  plVar1 = (longlong *)param_1[0x7a];
  if (plVar1 != (longlong *)0x0) {
    lVar3 = FUN_144a78b9e();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(plVar1[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
        lVar3 + 0x30)) {
      (**(code **)(*plVar1 + 0x8d8))(plVar1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001487c49b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x308 + (ulonglong)bVar4 * 0x10))(param_1,param_1);
  return;
}



// FUNCTION 1487c49c0 FUN_1487c49c0 body=809 status=ok
// SIG undefined FUN_1487c49c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1487c49c0(longlong *param_1,float param_2)

{
  double dVar1;
  double dVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  double dVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auStack_148 [32];
  undefined8 local_128;
  undefined8 uStack_120;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  double local_108;
  double dStack_100;
  double local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  double local_c0;
  double dStack_b8;
  double local_b0;
  double local_a8;
  double dStack_a0;
  double local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_148;
  if (((longlong *)param_1[0x157] != (longlong *)0x0) && (*(longlong *)param_1[0x157] != -1)) {
    (**(code **)(*param_1 + 0x718))(param_1,&local_a8,&local_c0);
    if (0.0 < *(float *)(param_1 + 0x15f)) {
      dVar2 = (double)(param_2 / *(float *)(param_1 + 0x15f));
      local_98 = (local_98 - (double)param_1[0x15b]) * dVar2 + (double)param_1[0x15b];
      dStack_a0 = (dStack_a0 - (double)param_1[0x15a]) * dVar2 + (double)param_1[0x15a];
      local_a8 = (local_a8 - (double)param_1[0x159]) * dVar2 + (double)param_1[0x159];
      local_b0 = local_b0 - (double)param_1[0x15e];
      dStack_b8 = dStack_b8 - (double)param_1[0x15d];
      local_c0 = local_c0 - (double)param_1[0x15c];
      dVar11 = (double)DAT_1499387d0;
      dVar1 = DAT_1499387d0._8_8_;
      auVar6._8_8_ = dStack_b8;
      auVar6._0_8_ = local_c0;
      auVar7 = divpd(auVar6,_DAT_1499387d0);
      auVar3._0_8_ = local_b0 / 360.0;
      auVar3._8_8_ = 0;
      auVar8 = roundpd(auVar7,auVar7,3);
      auVar7 = roundpd(auVar3,auVar3,3);
      auVar13._0_8_ = local_b0 - auVar7._0_8_ * dVar11;
      auVar13._8_8_ = 0.0 - auVar7._8_8_ * dVar1;
      local_c0 = local_c0 - auVar8._0_8_ * dVar11;
      dStack_b8 = dStack_b8 - auVar8._8_8_ * dVar1;
      auVar10._0_8_ = local_c0 + dVar11;
      auVar10._8_8_ = dStack_b8 + dVar1;
      auVar12._0_8_ = dVar11 + auVar13._0_8_;
      auVar12._8_8_ = dVar1 + auVar13._8_8_;
      auVar8._8_8_ = -(ulonglong)(0.0 <= dStack_b8);
      auVar8._0_8_ = -(ulonglong)(0.0 <= local_c0);
      auVar7._8_4_ = SUB84(dStack_b8,0);
      auVar7._0_8_ = local_c0;
      auVar7._12_4_ = (int)((ulonglong)dStack_b8 >> 0x20);
      auVar7 = blendvpd(auVar10,auVar7,auVar8);
      auVar4._8_8_ = -(ulonglong)(0.0 <= auVar13._8_8_);
      auVar4._0_8_ = -(ulonglong)(0.0 <= auVar13._0_8_);
      auVar3 = blendvpd(auVar12,auVar13,auVar4);
      auVar9._0_8_ = auVar7._0_8_ + -360.0;
      auVar9._8_8_ = auVar7._8_8_ + -360.0;
      auVar5._8_8_ = -(ulonglong)(180.0 < auVar7._8_8_);
      auVar5._0_8_ = -(ulonglong)(180.0 < auVar7._0_8_);
      auVar7 = blendvpd(auVar7,auVar9,auVar5);
      dVar11 = auVar3._0_8_;
      local_b0 = (double)(~-(ulonglong)(180.0 < dVar11) & (ulonglong)dVar11 |
                         (ulonglong)(dVar11 + -360.0) & -(ulonglong)(180.0 < dVar11)) * dVar2 +
                 (double)param_1[0x15e];
      dStack_b8 = auVar7._8_8_ * dVar2 + (double)param_1[0x15d];
      local_c0 = auVar7._0_8_ * dVar2 + (double)param_1[0x15c];
    }
    FUN_144a7484c(&local_c0,&local_88);
    local_128 = local_88;
    uStack_120 = uStack_80;
    local_118 = local_78;
    uStack_114 = uStack_74;
    uStack_110 = uStack_70;
    uStack_10c = uStack_6c;
    local_108 = local_a8;
    dStack_100 = dStack_a0;
    local_f8 = local_98;
    uStack_f0 = 0;
    local_e8 = 0x3ff0000000000000;
    uStack_e0 = 0x3ff0000000000000;
    local_d8 = 0x3ff0000000000000;
    uStack_d0 = 0;
    FUN_1438a535e(param_1[0x157]);
    param_1[0x15b] = (longlong)local_98;
    param_1[0x159] = (longlong)local_a8;
    param_1[0x15a] = (longlong)dStack_a0;
    param_1[0x15c] = (longlong)local_c0;
    param_1[0x15d] = (longlong)dStack_b8;
    param_1[0x15e] = (longlong)local_b0;
  }
  if ((local_60 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487c4cea FUN_1487c4cea body=1 status=ok
// SIG undefined FUN_1487c4cea(void)

void FUN_1487c4cea(void)

{
  return;
}



// FUNCTION 1487c4cec FUN_1487c4cec body=173 status=ok
// SIG undefined FUN_1487c4cec(void)

void FUN_1487c4cec(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  
  puVar1 = (undefined8 *)(param_1 + 8);
  puVar3 = *(undefined8 **)(param_1 + 0x48);
  puVar4 = puVar3;
  if (puVar3 == (undefined8 *)0x0) {
    puVar4 = puVar1;
  }
  iVar2 = *(int *)(param_1 + 0x50);
  lVar6 = (longlong)iVar2;
  if (lVar6 != 0) {
    lVar5 = lVar6 << 4;
    do {
      if (puVar4[1] == *param_2) {
        if (puVar4 != (undefined8 *)0x0) goto LAB_1487c4d53;
        break;
      }
      puVar4 = puVar4 + 2;
      lVar5 = lVar5 + -0x10;
    } while (lVar5 != 0);
  }
  *(uint *)(param_1 + 0x50) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x54) < iVar2 + 1U) {
    FUN_1487ca098(puVar1,iVar2);
    puVar3 = *(undefined8 **)(param_1 + 0x48);
  }
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = puVar1;
  }
  puVar3[lVar6 * 2] = 0;
  (puVar3 + lVar6 * 2)[1] = 0;
  puVar3 = *(undefined8 **)(param_1 + 0x48);
  if (*(undefined8 **)(param_1 + 0x48) == (undefined8 *)0x0) {
    puVar3 = puVar1;
  }
  puVar4 = puVar3 + lVar6 * 2;
  puVar3[lVar6 * 2 + 1] = *param_2;
LAB_1487c4d53:
  *puVar4 = *param_3;
  return;
}



// FUNCTION 1487c4d9a FUN_1487c4d9a body=82 status=ok
// SIG undefined FUN_1487c4d9a(void)

void FUN_1487c4d9a(longlong param_1)

{
  if (*(char *)(param_1 + 0x178) == '\x03') {
    if (*(int *)(param_1 + 0xb94) < 0) {
      *(undefined4 *)(param_1 + 0xb90) = 0;
      FUN_1487ca194(param_1 + 0xb48,0);
    }
    else {
      *(undefined4 *)(param_1 + 0xb90) = 0;
    }
    FUN_14125a962(param_1);
    return;
  }
  return;
}



// FUNCTION 1487c4dec FUN_1487c4dec body=105 status=ok
// SIG undefined FUN_1487c4dec(void)

void FUN_1487c4dec(longlong *param_1)

{
  char cVar1;
  
  if ((char)param_1[0x151] == '\0') {
    cVar1 = (**(code **)(*param_1 + 0x6c8))();
    if (cVar1 != '\0') {
      if (param_1[0xa1] != 0) {
        (**(code **)(*param_1 + 0xcf8))(param_1);
        (**(code **)(*param_1 + 0xd78))(param_1,0,0);
      }
                    /* WARNING: Could not recover jumptable at 0x0001487c4e4b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0xce0))(param_1,param_1[0x17c]);
      return;
    }
  }
  return;
}



// FUNCTION 1487c4e56 FUN_1487c4e56 body=16 status=ok
// SIG undefined FUN_1487c4e56(void)

undefined8 FUN_1487c4e56(void)

{
  FUN_1487c4dec();
  return 0;
}



// FUNCTION 1487c4e66 thunk_FUN_147ca0668 body=5 status=ok
// SIG undefined thunk_FUN_147ca0668(void)

void thunk_FUN_147ca0668(longlong *param_1,undefined8 param_2,byte param_3,undefined1 param_4,
                        undefined1 param_5,undefined1 param_6)

{
  longlong *plVar1;
  byte bVar2;
  undefined8 uVar4;
  undefined8 unaff_RBP;
  undefined8 unaff_RDI;
  undefined1 auStack_58 [36];
  byte bStack_34;
  undefined1 uStack_33;
  undefined1 uStack_32;
  undefined1 uStack_31;
  ulonglong uStack_30;
  ulonglong uVar3;
  
  uStack_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  bVar2 = (byte)param_2 & param_3;
  uVar3 = (ulonglong)bVar2;
  *(uint *)(param_1 + 0xb4) =
       (*(uint *)(param_1 + 0xb4) & 0xfffffff9) + (uint)bVar2 * 4 + ((uint)param_2 & 0xff) * 2;
  plVar1 = (longlong *)param_1[0x7a];
  if ((byte)((byte)param_2 ^ 1 | param_3) == 1 && plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x330))(plVar1,uVar3);
    uVar3 = CONCAT71((int7)(uVar3 >> 8),(char)param_1[0xb4]) & 0xffffffffffffff02;
    param_2 = CONCAT71((int7)(uVar3 >> 8),(byte)uVar3 >> 1);
  }
  (**(code **)(*param_1 + 0xb68))
            (param_1,param_2,CONCAT71((int7)((ulonglong)unaff_RBP >> 8),param_5) & 0xffffffff,
             CONCAT71((int7)((ulonglong)unaff_RDI >> 8),param_6) & 0xffffffff);
  bStack_34 = *(byte *)(param_1 + 0xb4) >> 1 & 1;
  uStack_33 = param_5;
  uStack_32 = param_6;
  uStack_31 = param_4;
  uVar4 = FUN_14477b072(param_1,DAT_14caf9768);
  (**(code **)(*param_1 + 0x248))(param_1,uVar4,&bStack_34);
  if ((uStack_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487c4e72 FUN_1487c4e72 body=312 status=ok
// SIG undefined FUN_1487c4e72(void)

void FUN_1487c4e72(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined2 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(char *)(param_1 + 0x178) == '\x03') {
    FUN_140d75dba(param_1 + 0xbf0);
    if ((*(short *)(param_1 + 0xbf8) < 0) && (*(longlong *)(param_1 + 0x398) != 0)) {
      lVar3 = FUN_140082f10();
      lVar1 = *(longlong *)(param_1 + 0x398);
      if (((lVar1 != 0) &&
          (((lVar3 != 0 && (lVar2 = *(longlong *)(lVar1 + 0x10), lVar2 != 0)) &&
           (*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38))))) &&
         (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
          lVar3 + 0x30)) {
        uVar4 = FUN_147f5e668();
        FUN_147f5e65e(param_1 + 0xbf0,*(undefined2 *)(lVar1 + 0x538),uVar4);
      }
    }
    lVar1 = *(longlong *)(param_1 + 0x3e0);
    if (lVar1 != 0) {
      lVar3 = FUN_144a7a462();
      if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8
           ) == lVar3 + 0x30)) {
        local_38 = *(undefined8 *)(param_1 + 0xbf0);
        local_30 = *(undefined2 *)(param_1 + 0xbf8);
        local_28 = *(undefined8 *)(param_1 + 0xc00);
        FUN_140365ba6(lVar1 + 0x898,&local_38,1);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487c4fc8 FUN_1487c4fc8 body=24 status=ok
// SIG undefined FUN_1487c4fc8(void)

void FUN_1487c4fc8(longlong *param_1)

{
  (**(code **)(*param_1 + 0x38))();
  return;
}



// FUNCTION 1487c502a FUN_1487c502a body=96 status=ok
// SIG undefined FUN_1487c502a(void)

undefined2 FUN_1487c502a(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (*(longlong *)(param_1 + 0x398) != 0) {
    lVar3 = FUN_140082f10();
    lVar1 = *(longlong *)(param_1 + 0x398);
    if (lVar1 != 0) {
      lVar4 = 0;
      if ((lVar3 == 0) || (lVar2 = *(longlong *)(lVar1 + 0x10), lVar2 == 0)) goto LAB_1487c5079;
      if (*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38)) {
        lVar4 = 0;
        if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
            lVar3 + 0x30) {
          lVar4 = lVar1;
        }
        goto LAB_1487c5079;
      }
    }
  }
  lVar4 = 0;
LAB_1487c5079:
  return *(undefined2 *)(lVar4 + 0x538);
}



// FUNCTION 1487c508a FUN_1487c508a body=64 status=ok
// SIG undefined FUN_1487c508a(void)

void FUN_1487c508a(longlong param_1,longlong param_2)

{
  if (*(longlong *)(param_1 + 0xc38) != 0) {
    FUN_1488d83e4(*(longlong *)(param_1 + 0xc38),param_2);
  }
  if (*(longlong *)(param_2 + 0x150) != 0) {
    FUN_1400020a8();
  }
  FUN_140368b56(param_2 + 0x50);
  return;
}



// FUNCTION 1487c50ca FUN_1487c50ca body=74 status=ok
// SIG undefined FUN_1487c50ca(void)

undefined8 FUN_1487c50ca(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *(undefined8 *)(param_1 + -0x948);
  FUN_1400021e4();
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487c5134 FUN_1487c5134 body=64 status=ok
// SIG undefined FUN_1487c5134(void)

undefined8 * FUN_1487c5134(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = *(longlong **)(param_1 + -0x558);
  if (plVar1 == (longlong *)0x0) {
    param_2[2] = DAT_14c8464f0;
    uVar2 = DAT_14c8464e8;
    *param_2 = DAT_14c8464e0;
    param_2[1] = uVar2;
  }
  else {
    (**(code **)(*plVar1 + 0x730))(plVar1,param_2);
  }
  return param_2;
}



// FUNCTION 1487c5174 FUN_1487c5174 body=63 status=ok
// SIG undefined FUN_1487c5174(void)

void FUN_1487c5174(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0xe0))();
  if (lVar1 != 0) {
    FUN_148855b2c(lVar1,param_2,param_3,param_4);
    return;
  }
  return;
}



// FUNCTION 1487c51b4 FUN_1487c51b4 body=54 status=ok
// SIG undefined FUN_1487c51b4(void)

void FUN_1487c51b4(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0xe0))();
  if (lVar1 != 0) {
    FUN_148855e68(lVar1,param_2,param_3);
    return;
  }
  return;
}



// FUNCTION 1487c51f2 FUN_1487c51f2 body=86 status=ok
// SIG undefined FUN_1487c51f2(void)

ulonglong FUN_1487c51f2(longlong *param_1,char param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 unaff_RDI;
  ulonglong uVar3;
  undefined7 uVar4;
  
  lVar1 = param_1[0x162];
  uVar4 = (undefined7)((ulonglong)unaff_RDI >> 8);
  uVar3 = CONCAT71(uVar4,1);
  if (lVar1 != 0 && param_2 == '\0') {
    if (*(char *)(lVar1 + 0x18) == '\0') {
      uVar3 = CONCAT71(uVar4,*(undefined1 *)(lVar1 + 0x60)) ^ 1;
    }
    else {
      uVar3 = 0;
    }
  }
  cVar2 = (**(code **)(*param_1 + 0x6c8))(param_1);
  if ((cVar2 == '\0') && (param_1[0x87] == 0)) {
    uVar3 = 0;
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 1487c5248 FUN_1487c5248 body=180 status=ok
// SIG undefined FUN_1487c5248(void)

void FUN_1487c5248(undefined8 param_1,undefined8 *param_2)

{
  uint uVar1;
  void *_Src;
  undefined1 auStack_58 [32];
  void *local_38;
  uint local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = *(uint *)(param_2 + 1);
  if (1 < (int)uVar1) {
    if (uVar1 < 0x81) {
      local_38 = (void *)0x0;
      _Src = (void *)*param_2;
      local_30 = uVar1;
      FUN_1446dd670(&local_38,uVar1,0);
      memcpy(local_38,_Src,(ulonglong)uVar1 * 2);
    }
    else {
      FUN_14006620a(&local_38,*param_2,0x80);
    }
    FUN_1486dc8fe(param_1,&local_38);
    if (local_38 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1487c530c FUN_1487c530c body=160 status=ok
// SIG undefined FUN_1487c530c(void)

void FUN_1487c530c(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  
  lVar2 = FUN_1447210f0();
  if (0 < *(int *)(lVar2 + 0x238)) {
    iVar6 = 0;
    lVar5 = 0;
    do {
      lVar3 = FUN_14479d2ce(*(longlong *)(lVar2 + 0x230) + lVar5);
      cVar1 = FUN_141107632(lVar3);
      if (lVar3 != 0 && cVar1 == '\x01') {
        lVar4 = FUN_1449f3324();
        if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) {
          FUN_1486dc3a6(lVar3,*(undefined8 *)(param_1 + 0x398),param_2);
        }
      }
      lVar5 = lVar5 + 8;
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(int *)(lVar2 + 0x238));
  }
  return;
}



// FUNCTION 1487c53d6 FUN_1487c53d6 body=26 status=ok
// SIG undefined FUN_1487c53d6(void)

void FUN_1487c53d6(longlong param_1)

{
  FUN_147ca29a6();
  *(undefined1 *)(param_1 + 0xd69) = 1;
  return;
}


