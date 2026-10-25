// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1441a3e8c FUN_1441a3e8c body=146 status=ok
// SIG undefined FUN_1441a3e8c(void)

void FUN_1441a3e8c(longlong param_1,longlong param_2)

{
  uint uVar1;
  bool bVar2;
  undefined8 uVar3;
  int *piVar4;
  longlong lVar5;
  longlong *plVar6;
  
  if (*(int *)(param_1 + 0x58) != 0) {
    uVar1 = *(uint *)(param_1 + 0x54);
    lVar5 = 0;
    if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_1441a3edc;
    plVar6 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if ((plVar6 != (longlong *)0x0) &&
       (((int)plVar6[2] == *(int *)(param_1 + 0x58) && ((*(uint *)(plVar6 + 1) & 0x10200000) == 0)))
       ) {
      lVar5 = *plVar6;
      goto LAB_1441a3edc;
    }
  }
  lVar5 = 0;
LAB_1441a3edc:
  if (lVar5 == param_2) {
    uVar3 = FUN_1401e6c61();
    piVar4 = (int *)FUN_1409e484c(param_2,uVar3);
    bVar2 = *(int *)(param_1 + 0x50) <= *piVar4;
    if ((bool)*(char *)(param_1 + 0x38) != bVar2) {
      *(bool *)(param_1 + 0x38) = bVar2;
      FUN_1447f69b6(param_1 + 0x20);
      return;
    }
  }
  return;
}



// FUNCTION 1441a3f1e FUN_1441a3f1e body=673 status=ok
// SIG undefined FUN_1441a3f1e(void)

void FUN_1441a3f1e(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  char cVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_68 [32];
  undefined1 local_48 [8];
  undefined8 *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 == 0) goto LAB_1441a416e;
  lVar9 = FUN_14041aabe();
  lVar6 = DAT_14cb7df38;
  if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x38) < *(int *)(lVar9 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8)
      != lVar9 + 0x30)) goto LAB_1441a416e;
  lVar9 = (longlong)DAT_14cb7df40;
  if (lVar9 != 0) {
    lVar10 = 0;
    do {
      if (((*(int *)(lVar6 + 8 + lVar10) != 0) &&
          (plVar3 = *(longlong **)(lVar6 + lVar10), plVar3 != (longlong *)0x0)) &&
         (cVar7 = (**(code **)(*plVar3 + 0x20))(plVar3,param_1), cVar7 != '\0')) goto LAB_1441a416e;
      lVar10 = lVar10 + 0x10;
    } while (lVar9 * 0x10 != lVar10);
  }
  local_40 = (undefined8 *)0x0;
  local_38 = 0;
  FUN_1446efa72(&local_40,0,3,0x10);
  local_38 = 3;
  plVar3 = *(longlong **)(param_1 + 0x10);
  if (plVar3 == (longlong *)0x0) {
LAB_1441a40ba:
    *local_40 = &PTR_LAB_14b3fc170;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar6 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar6 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar6;
    local_40[2] = lVar9;
    *local_40 = &PTR_FUN_14b97d1c0;
    local_40[3] = 0;
    local_40[4] = 0;
    local_40[5] = FUN_1441a424c;
  }
  else {
    iVar8 = (int)plVar3[1];
    do {
      if (iVar8 == 0) goto LAB_1441a40ba;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar11 = iVar8 == iVar5;
      if (bVar11) {
        *(int *)(plVar3 + 1) = iVar8 + 1;
        iVar5 = iVar8;
      }
      iVar8 = iVar5;
      UNLOCK();
    } while (!bVar11);
    uVar4 = *(undefined8 *)(param_1 + 8);
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    *local_40 = &PTR_LAB_14b3fc170;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar6 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar6 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar6;
    local_40[2] = lVar9;
    *local_40 = &PTR_FUN_14b97d1c0;
    local_40[3] = uVar4;
    local_40[4] = plVar3;
    LOCK();
    *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
    UNLOCK();
    local_40[5] = FUN_1441a424c;
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
  FUN_1406f6466(&DAT_14cb7df38,local_48,&local_40);
  if (local_38 == 0) {
LAB_1441a414f:
    if (local_40 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_40 != (undefined8 *)0x0) {
    (**(code **)*local_40)(local_40,0);
    FUN_1446efa72(&local_40,0,0,0x10);
    local_38 = 0;
    goto LAB_1441a414f;
  }
  if (*(longlong *)(param_2 + 0x488) != 0) {
    FUN_1441a424c(param_1,param_2);
  }
LAB_1441a416e:
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1441a41c0 FUN_1441a41c0 body=140 status=ok
// SIG undefined FUN_1441a41c0(void)

void FUN_1441a41c0(undefined8 param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_1406f63d6();
  if (lVar1 != 0) {
    FUN_140457ffc(lVar1 + 0x800,param_1);
    if (*(longlong *)(lVar1 + 0x178) != 0) {
      lVar2 = FUN_14041aabe();
      if ((((*(longlong *)(lVar1 + 0x178) != 0) && (lVar2 != 0)) &&
          (lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0x178) + 0x10), lVar1 != 0)) &&
         ((*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38) &&
          (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
           lVar2 + 0x30)))) {
        FUN_140457ffc(&DAT_14cb7df38,param_1);
      }
    }
  }
  FUN_140457ffc(&DAT_14cbd0b78,param_1);
  return;
}



// FUNCTION 1441a424c FUN_1441a424c body=486 status=ok
// SIG undefined FUN_1441a424c(void)

void FUN_1441a424c(longlong param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  int *piVar5;
  int iVar6;
  longlong lVar7;
  bool bVar8;
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
  code *local_40;
  code *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((param_2 != 0) && (lVar2 = *(longlong *)(param_2 + 0x488), lVar2 != 0)) {
    if (DAT_14cbae3d8 == 0) {
      local_50 = &local_30;
      local_30 = FUN_141030f22;
      local_40 = FUN_14081d0ea;
      local_48 = &LAB_1464f5fc4;
      local_58 = &LAB_148c3dd26;
      local_60 = &LAB_1459673ba;
      local_68 = L"Engine";
      local_70 = 0;
      local_78 = 0x10000004;
      local_80 = 0x10;
      local_88 = 0x1360;
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerState",&DAT_14cbae3d8,FUN_1465eb604);
    }
    if ((*(int *)(DAT_14cbae3d8 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cbae3d8 + 0x38) * 8) == DAT_14cbae3d8 + 0x30)) {
      uVar1 = *(uint *)(lVar2 + 0xc);
      *(uint *)(param_1 + 0x54) = uVar1;
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar7 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar7 = 0;
      }
      iVar3 = *(int *)(lVar7 + 0x10);
      if (*(int *)(lVar7 + 0x10) == 0) {
        LOCK();
        iVar3 = DAT_14c964868 + 1;
        UNLOCK();
        iVar6 = DAT_14c964868 + 1;
        bVar8 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar3;
        if (bVar8) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar6);
        }
        LOCK();
        iVar3 = *(int *)(lVar7 + 0x10);
        bVar8 = iVar3 == 0;
        if (bVar8) {
          *(int *)(lVar7 + 0x10) = iVar6;
          iVar3 = 0;
        }
        UNLOCK();
        if (bVar8) {
          iVar3 = iVar6;
        }
      }
      *(int *)(param_1 + 0x58) = iVar3;
      uVar4 = FUN_1401e6c61();
      piVar5 = (int *)FUN_1409e484c(lVar2,uVar4);
      bVar8 = *(int *)(param_1 + 0x50) <= *piVar5;
      if ((bool)*(char *)(param_1 + 0x38) != bVar8) {
        *(bool *)(param_1 + 0x38) = bVar8;
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_a8);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1441a4448 FUN_1441a4448 body=289 status=ok
// SIG undefined FUN_1441a4448(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_1441a4448(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  plVar3 = (longlong *)FUN_14001cc68(0x70,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14b97d230;
  plVar1 = plVar3 + 2;
  plVar3[9] = 0;
  plVar3[10] = 0;
  plVar3[0xb] = 0;
  plVar3[0xc] = 0;
  plVar3[0xd] = 0;
  plVar3[3] = 0;
  plVar3[4] = 0;
  plVar3[5] = 0;
  plVar3[6] = 0;
  plVar3[7] = 0;
  plVar3[8] = 2;
  plVar3[10] = 0;
  plVar3[0xb] = 0;
  plVar3[2] = (longlong)&PTR_FUN_14b6aee60;
  if (plVar3 == (longlong *)0x0) {
    _DAT_00000018 = 0x10;
    plVar5 = (longlong *)&DAT_00000020;
    plVar4 = _DAT_00000020;
    if (_DAT_00000020 != (longlong *)0x0) {
LAB_1441a44f6:
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))();
      }
      *plVar5 = (longlong)plVar3;
      if (plVar3 != (longlong *)0x0) goto LAB_1441a4517;
    }
    *param_2 = (longlong)plVar1;
    param_2[1] = (longlong)plVar3;
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    plVar3[3] = (longlong)plVar1;
    if ((longlong *)plVar3[4] != plVar3) {
      LOCK();
      *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
      UNLOCK();
      if ((longlong *)plVar3[4] != (longlong *)0x0) {
        plVar5 = plVar3 + 4;
        plVar4 = (longlong *)plVar3[4];
        goto LAB_1441a44f6;
      }
      plVar3[4] = (longlong)plVar3;
    }
LAB_1441a4517:
    LOCK();
    plVar5 = plVar3 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
    *param_2 = (longlong)plVar1;
    param_2[1] = (longlong)plVar3;
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
  return param_2;
}



// FUNCTION 1441a456a FUN_1441a456a body=70 status=ok
// SIG undefined FUN_1441a456a(void)

bool FUN_1441a456a(undefined8 param_1)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  cVar1 = FUN_143de851c();
  if (cVar1 == '\0') {
    bVar2 = false;
  }
  else {
    uVar3 = FUN_140ec3d82(param_1);
    lVar4 = FUN_145bd989c(uVar3);
    if (lVar4 == 0) {
      bVar2 = true;
    }
    else {
      bVar2 = *(char *)(lVar4 + 0xb0) == '\0' || *(char *)(lVar4 + 0xb0) == '\t';
    }
  }
  return bVar2;
}



// FUNCTION 1441a45b0 FUN_1441a45b0 body=1000 status=ok
// SIG undefined FUN_1441a45b0(void)

undefined8 * FUN_1441a45b0(longlong param_1,undefined8 *param_2,longlong param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  char cVar6;
  char cVar7;
  int iVar8;
  uint *puVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  undefined8 uVar14;
  uint uVar15;
  int iVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  longlong lVar19;
  int iVar20;
  int iVar21;
  uint *puVar22;
  longlong *plVar23;
  longlong *plVar24;
  uint uVar25;
  undefined1 auStack_c8 [47];
  char local_99;
  uint *local_98;
  longlong local_90;
  undefined8 *local_88;
  longlong local_80;
  int local_74;
  undefined4 uStack_70;
  undefined4 local_6c;
  longlong local_68;
  undefined8 uStack_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  puVar22 = (uint *)(param_1 + 0x70);
  local_58 = 0;
  uStack_50 = 0;
  iVar2 = *(int *)(param_1 + 0x88);
  local_90 = param_1;
  local_88 = param_2;
  if (iVar2 == 0) {
    uVar17 = 1;
    uVar18 = 0;
    iVar16 = 0;
    iVar8 = 0;
  }
  else {
    puVar9 = *(uint **)(param_1 + 0x80);
    if (*(uint **)(param_1 + 0x80) == (uint *)0x0) {
      puVar9 = puVar22;
    }
    uVar25 = *puVar9;
    if (uVar25 == 0) {
      iVar8 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar8 = iVar2 + -1;
      }
      uVar18 = 0;
      uVar17 = (ulonglong)(uint)(iVar8 >> 5);
      if (iVar8 >> 5 < 1) {
        uVar17 = uVar18;
      }
      iVar16 = 0;
      do {
        if (uVar17 == uVar18) goto LAB_1441a466e;
        iVar16 = iVar16 + 0x20;
        uVar25 = puVar9[uVar18 + 1];
        uVar18 = uVar18 + 1;
      } while (uVar25 == 0);
    }
    else {
      uVar18 = 0;
      iVar16 = 0;
    }
    uVar17 = (ulonglong)(-uVar25 & uVar25);
    uVar1 = uVar17 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    iVar8 = (iVar16 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar8) {
      iVar8 = iVar2;
    }
  }
  if (iVar8 == iVar2) {
LAB_1441a466e:
    local_68 = 0;
    uStack_60 = 0;
  }
  else {
    uVar25 = 0xffffffff;
    local_99 = '\x7f';
    local_98 = puVar22;
    local_80 = param_3;
    do {
      lVar10 = *(longlong *)(local_90 + 0x60);
      cVar6 = (**(code **)(**(longlong **)(lVar10 + 0x10 + (longlong)iVar8 * 0x20) + 0xf0))();
      if (cVar6 != '\0') {
        plVar23 = (longlong *)(lVar10 + (longlong)iVar8 * 0x20 + 0x10);
        plVar24 = *(longlong **)(*plVar23 + 0xa0);
        if (plVar24 != (longlong *)0x0) {
          lVar10 = (**(code **)(*plVar24 + 8))(plVar24);
          lVar11 = FUN_140fa5e64();
          puVar22 = local_98;
          if (((lVar11 != 0) && (*(int *)(lVar11 + 0x38) <= *(int *)(lVar10 + 0x38))) &&
             (*(longlong *)(*(longlong *)(lVar10 + 0x30) + (longlong)*(int *)(lVar11 + 0x38) * 8) ==
              lVar11 + 0x30)) {
            local_68 = 0;
            cVar6 = FUN_1441a499a(plVar24,&local_68);
            puVar22 = local_98;
            if (((cVar6 != '\0') && (local_68 == local_80)) &&
               (cVar6 = FUN_1441a4a02(plVar24), uVar1 = uStack_50, puVar22 = local_98,
               cVar6 < local_99)) {
              lVar10 = (longlong)(int)uStack_50;
              uVar15 = (int)uStack_50 + 1;
              uStack_50 = CONCAT44(uStack_50._4_4_,uVar15);
              if (uStack_50._4_4_ < uVar15) {
                FUN_148d88544(&local_58,uVar1 & 0xffffffff);
              }
              *(longlong *)(local_58 + lVar10 * 8) = *plVar23;
              puVar22 = local_98;
              local_99 = cVar6;
            }
          }
        }
      }
      lVar10 = local_58;
      cVar6 = local_99;
      uVar25 = uVar25 & ~(uint)uVar17;
      puVar9 = *(uint **)(local_90 + 0x80);
      if (*(uint **)(local_90 + 0x80) == (uint *)0x0) {
        puVar9 = puVar22;
      }
      iVar3 = *(int *)(local_90 + 0x88);
      iVar8 = (int)uVar18;
      lVar11 = (longlong)iVar8;
      uVar15 = puVar9[lVar11] & uVar25;
      if (uVar15 == 0) {
        iVar20 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar20 = iVar3 + -1;
        }
        iVar20 = iVar20 >> 5;
        iVar16 = iVar16 + 0x20;
        iVar21 = iVar20;
        if (iVar20 < iVar8) {
          iVar21 = iVar8;
        }
        if (iVar8 < iVar20) {
          lVar19 = 0;
          do {
            uVar15 = puVar9[lVar11 + lVar19 + 1];
            if (uVar15 != 0) {
              uVar18 = (ulonglong)(iVar8 + (int)lVar19 + 1);
              uVar25 = 0xffffffff;
              goto LAB_1441a4786;
            }
            iVar16 = iVar16 + 0x20;
            lVar19 = lVar19 + 1;
          } while (iVar21 - lVar11 != lVar19);
          uVar25 = 0xffffffff;
          lVar11 = (longlong)iVar21;
        }
        uVar18 = lVar11 + 1U & 0xffffffff;
        puVar22 = local_98;
        iVar8 = iVar3;
      }
      else {
LAB_1441a4786:
        uVar17 = (ulonglong)(-uVar15 & uVar15);
        uVar1 = uVar17 * 2 + 1;
        lVar11 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        iVar8 = (iVar16 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
        if (iVar3 <= iVar8) {
          iVar8 = iVar3;
        }
      }
    } while (iVar8 != iVar2);
    lVar11 = (longlong)(int)uStack_50;
    local_68 = 0;
    uStack_60 = 0;
    if (lVar11 != 0) {
      lVar19 = 0;
      do {
        lVar4 = *(longlong *)(lVar10 + lVar19);
        plVar24 = *(longlong **)(lVar4 + 0xa0);
        if (plVar24 == (longlong *)0x0) {
LAB_1441a48b6:
          plVar24 = (longlong *)0x0;
        }
        else {
          lVar12 = (**(code **)(*plVar24 + 8))(plVar24);
          lVar13 = FUN_140fa5e64();
          if (((lVar13 == 0) || (*(int *)(lVar12 + 0x38) < *(int *)(lVar13 + 0x38))) ||
             (*(longlong *)(*(longlong *)(lVar12 + 0x30) + (longlong)*(int *)(lVar13 + 0x38) * 8) !=
              lVar13 + 0x30)) goto LAB_1441a48b6;
        }
        cVar7 = FUN_1441a4a02(plVar24);
        uVar17 = uStack_60;
        if (cVar7 == cVar6) {
          lVar12 = (longlong)(int)uStack_60;
          uVar25 = (int)uStack_60 + 1;
          uStack_60 = CONCAT44(uStack_60._4_4_,uVar25);
          if (uStack_60._4_4_ < uVar25) {
            FUN_148d88544(&local_68,uVar17 & 0xffffffff);
          }
          *(longlong *)(local_68 + lVar12 * 8) = lVar4;
        }
        lVar19 = lVar19 + 8;
      } while (lVar11 * 8 != lVar19);
    }
  }
  FUN_1441a4a5c(local_90,&local_74,&local_68);
  puVar5 = local_88;
  if (local_74 == 0) {
    *(undefined4 *)(local_88 + 1) = DAT_14c948620;
    uVar14 = DAT_14c948618;
  }
  else {
    *(undefined4 *)(local_88 + 1) = local_6c;
    uVar14 = CONCAT44(uStack_70,local_74);
  }
  *local_88 = uVar14;
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar5;
}



// FUNCTION 1441a499a FUN_1441a499a body=104 status=ok
// SIG undefined FUN_1441a499a(void)

undefined1 FUN_1441a499a(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  plVar1 = (longlong *)FUN_14050cbd4();
  if (plVar1 != (longlong *)0x0) {
    lVar2 = (**(code **)(*plVar1 + 8))(plVar1);
    lVar3 = FUN_14050caa6();
    if (((lVar3 != 0) && (*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
        lVar3 + 0x30)) {
      uVar4 = FUN_141563480(plVar1 + 0x1b);
      *param_2 = uVar4;
      return (char)plVar1[0x1a];
    }
  }
  return 0;
}



// FUNCTION 1441a4a02 FUN_1441a4a02 body=89 status=ok
// SIG undefined FUN_1441a4a02(void)

ulonglong FUN_1441a4a02(longlong param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong lVar4;
  undefined7 uVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x4f0);
  if ((plVar1 == (longlong *)0x0) || ((longlong)*(int *)(param_1 + 0x4f8) == -1)) {
    lVar4 = 0;
  }
  else {
    plVar1 = *(longlong **)(plVar1[10] + (longlong)*(int *)(param_1 + 0x4f8) * 8);
    lVar4 = *plVar1;
  }
  if (lVar4 == DAT_14cbcdda0) {
    uVar2 = 0;
  }
  else {
    uVar3 = (undefined7)((ulonglong)plVar1 >> 8);
    uVar2 = CONCAT71(uVar3,1);
    if ((lVar4 != DAT_14cbcddb8) && (uVar2 = CONCAT71(uVar3,2), lVar4 != DAT_14cbcddc0)) {
      return CONCAT71(uVar3,-(lVar4 != DAT_14cbcddd0)) | 3;
    }
  }
  return uVar2;
}



// FUNCTION 1441a4a5c FUN_1441a4a5c body=1194 status=ok
// SIG undefined FUN_1441a4a5c(void)

undefined8 * FUN_1441a4a5c(undefined8 param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  double dVar2;
  double dVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  longlong lVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong *plVar15;
  longlong lVar16;
  longlong lVar17;
  undefined8 *puVar18;
  double dVar19;
  double dVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined1 auStack_168 [40];
  int local_140;
  int local_13c;
  undefined8 local_138;
  longlong *local_130;
  longlong *local_128;
  undefined8 *local_120;
  longlong *local_118;
  longlong local_110;
  longlong *local_108;
  undefined8 local_100;
  undefined4 local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  int local_e0;
  undefined4 uStack_dc;
  int local_d8;
  undefined4 uStack_d4;
  double local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  longlong *local_a8;
  undefined8 uStack_a0;
  longlong local_98;
  undefined8 uStack_90;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_98 = 0;
  uStack_90 = 0;
  local_138 = FUN_140672052();
  lVar9 = FUN_140ec3d82(param_1);
  if (lVar9 == 0) {
    local_13c = 0;
    local_140 = 0;
  }
  else {
    iVar7 = *(int *)(lVar9 + 0x238);
    if (0 < iVar7) {
      lVar17 = 0;
      do {
        uVar5 = uStack_90;
        iVar1 = *(int *)(*(longlong *)(lVar9 + 0x230) + 4 + lVar17 * 8);
        if (((((iVar1 != 0) &&
              (uVar8 = *(uint *)(*(longlong *)(lVar9 + 0x230) + lVar17 * 8), -1 < (int)uVar8)) &&
             ((int)uVar8 < DAT_14c9647dc)) &&
            ((plVar15 = (longlong *)
                        ((ulonglong)((uVar8 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8)),
             plVar15 != (longlong *)0x0 && ((int)plVar15[2] == iVar1)))) &&
           (((*(uint *)(plVar15 + 1) & 0x10200000) == 0 &&
            ((*plVar15 != 0 && (lVar16 = *(longlong *)(*plVar15 + 0x3d0), lVar16 != 0)))))) {
          lVar16 = *(longlong *)(lVar16 + 0x1c8);
          if (lVar16 == 0) {
            uVar21 = (undefined4)DAT_14c8464f0;
            uVar22 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
            puVar10 = &DAT_14c8464e0;
          }
          else {
            uVar21 = (undefined4)*(undefined8 *)(lVar16 + 0x270);
            uVar22 = (undefined4)((ulonglong)*(undefined8 *)(lVar16 + 0x270) >> 0x20);
            puVar10 = (undefined8 *)(lVar16 + 0x260);
          }
          uVar11 = *puVar10;
          uVar4 = puVar10[1];
          lVar16 = (longlong)(int)uStack_90;
          uVar8 = (int)uStack_90 + 1;
          uStack_90 = CONCAT44(uStack_90._4_4_,uVar8);
          if (uStack_90._4_4_ < uVar8) {
            FUN_1403e3958(&local_98,uVar5 & 0xffffffff);
          }
          puVar10 = (undefined8 *)(local_98 + lVar16 * 0x18);
          *puVar10 = uVar11;
          puVar10[1] = uVar4;
          *(ulonglong *)(local_98 + 0x10 + lVar16 * 0x18) = CONCAT44(uVar22,uVar21);
          iVar7 = *(int *)(lVar9 + 0x238);
        }
        lVar17 = lVar17 + 1;
      } while ((int)lVar17 < iVar7);
    }
    FUN_140fda471(&local_e0,lVar9);
    local_13c = local_e0;
    local_140 = local_d8;
  }
  uVar8 = *(uint *)(param_3 + 1);
  if ((ulonglong)uVar8 != 1) {
    if ((int)uVar8 < 1) {
      *(undefined4 *)(param_2 + 1) = DAT_14c948620;
      uVar11 = DAT_14c948618;
      goto LAB_1441a4ea7;
    }
    plVar13 = (longlong *)*param_3;
    plVar15 = plVar13 + uVar8;
    dVar2 = 1.79769313486232e+308;
    lVar9 = 0;
    local_130 = plVar15;
    local_128 = param_3;
    local_120 = param_2;
    do {
      lVar17 = *plVar13;
      local_a8 = (longlong *)0x0;
      uStack_a0 = 0;
      FUN_14890ea3e(lVar17,&local_a8);
      if ((longlong)(int)uStack_a0 != 0) {
        local_108 = local_a8 + (int)uStack_a0;
        plVar14 = local_a8;
        local_118 = plVar13;
        do {
          lVar16 = (longlong)*(int *)(*plVar14 + 0x150);
          if (lVar16 != 0) {
            puVar10 = *(undefined8 **)(*plVar14 + 0x148);
            puVar18 = puVar10 + lVar16 * 0xb;
            do {
              local_b8 = *(undefined8 *)(lVar17 + 0x90);
              local_b0 = *(undefined4 *)(lVar17 + 0x98);
              local_c8 = *puVar10;
              local_c0 = *(undefined4 *)(puVar10 + 1);
              FUN_14891b476(&local_e0,&local_c8,&local_b8,local_138);
              lVar16 = local_98;
              if ((local_e0 == local_13c) && (local_d8 == local_140)) {
                if ((longlong)(int)uStack_90 != 0) {
                  local_110 = (longlong)(int)uStack_90 * 0x18;
                  lVar12 = 0;
                  dVar3 = dVar2;
                  do {
                    local_f0 = *(undefined8 *)(lVar17 + 0x90);
                    local_e8 = *(undefined4 *)(lVar17 + 0x98);
                    local_100 = *puVar10;
                    local_f8 = *(undefined4 *)(puVar10 + 1);
                    FUN_14891b28e(&local_e0,&local_100,&local_f0,local_138);
                    dVar2 = *(double *)(lVar16 + 0x10 + lVar12) - local_d0;
                    dVar20 = *(double *)(lVar16 + 8 + lVar12) - (double)CONCAT44(uStack_d4,local_d8)
                    ;
                    dVar19 = *(double *)(lVar16 + lVar12) - (double)CONCAT44(uStack_dc,local_e0);
                    dVar2 = dVar2 * dVar2 + dVar19 * dVar19 + dVar20 * dVar20;
                    lVar6 = lVar17;
                    if (dVar3 <= dVar2) {
                      dVar2 = dVar3;
                      lVar6 = lVar9;
                    }
                    lVar9 = lVar6;
                    lVar12 = lVar12 + 0x18;
                    dVar3 = dVar2;
                  } while (local_110 != lVar12);
                }
              }
              puVar10 = puVar10 + 0xb;
            } while (puVar10 != puVar18);
          }
          plVar14 = plVar14 + 1;
          param_2 = local_120;
          plVar13 = local_118;
          param_3 = local_128;
          plVar15 = local_130;
        } while (plVar14 != local_108);
      }
      if (local_a8 != (longlong *)0x0) {
        FUN_1400020a8(local_a8);
      }
      plVar13 = plVar13 + 1;
    } while (plVar13 != plVar15);
    if (lVar9 != 0) {
      *(undefined4 *)(param_2 + 1) = *(undefined4 *)(lVar9 + 0x98);
      uVar11 = *(undefined8 *)(lVar9 + 0x90);
      goto LAB_1441a4ea7;
    }
  }
  lVar9 = *(longlong *)*param_3;
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(lVar9 + 0x98);
  uVar11 = *(undefined8 *)(lVar9 + 0x90);
LAB_1441a4ea7:
  *param_2 = uVar11;
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if ((local_80 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441a4f08 FUN_1441a4f08 body=1511 status=ok
// SIG undefined FUN_1441a4f08(void)

int * FUN_1441a4f08(longlong param_1,int *param_2,undefined8 *param_3,int param_4)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  longlong *plVar9;
  uint *puVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  ulonglong uVar14;
  int iVar15;
  longlong lVar16;
  longlong *plVar17;
  longlong lVar18;
  ulonglong uVar19;
  longlong lVar20;
  undefined1 auStack_e8 [40];
  longlong local_c0;
  longlong *local_b8;
  int local_ac;
  int *local_a8;
  uint *local_a0;
  longlong local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined4 local_80;
  longlong local_78;
  undefined8 uStack_70;
  longlong local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_88 = *param_3;
  local_80 = *(undefined4 *)(param_3 + 1);
  FUN_1448075d0(&local_78);
  plVar9 = (longlong *)FUN_140fa5e12(&local_78);
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  if (param_4 < 0 || plVar9 == (longlong *)0x0) {
    param_2[2] = DAT_14c948620;
    *(undefined8 *)param_2 = DAT_14c948618;
  }
  else {
    local_78 = 0;
    uStack_70 = 0;
    iVar2 = *(int *)(param_1 + 0x88);
    local_c0 = param_1;
    local_b8 = plVar9;
    local_a8 = param_2;
    if (iVar2 == 0) {
      uVar19 = 1;
      uVar14 = 0;
      iVar15 = 0;
      iVar6 = 0;
    }
    else {
      puVar10 = *(uint **)(param_1 + 0x80);
      if (*(uint **)(param_1 + 0x80) == (uint *)0x0) {
        puVar10 = (uint *)(param_1 + 0x70);
      }
      uVar8 = *puVar10;
      if (uVar8 == 0) {
        iVar6 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar6 = iVar2 + -1;
        }
        uVar14 = 0;
        uVar19 = (ulonglong)(uint)(iVar6 >> 5);
        if (iVar6 >> 5 < 1) {
          uVar19 = uVar14;
        }
        iVar15 = 0;
        do {
          if (uVar19 == uVar14) goto LAB_1441a503b;
          iVar15 = iVar15 + 0x20;
          uVar8 = puVar10[uVar14 + 1];
          uVar14 = uVar14 + 1;
        } while (uVar8 == 0);
      }
      else {
        uVar14 = 0;
        iVar15 = 0;
      }
      uVar19 = (ulonglong)(-uVar8 & uVar8);
      uVar1 = uVar19 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar6 = (iVar15 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
      if (iVar2 <= iVar6) {
        iVar6 = iVar2;
      }
    }
    if (iVar6 == iVar2) {
LAB_1441a503b:
      local_98 = 0;
      uStack_90 = 0;
    }
    else {
      uVar8 = 0xffffffff;
      local_ac = param_4;
      local_a0 = (uint *)(param_1 + 0x70);
      do {
        lVar11 = *(longlong *)(local_c0 + 0x60);
        cVar5 = (**(code **)(**(longlong **)(lVar11 + 0x10 + (longlong)iVar6 * 0x20) + 0xf0))();
        if (cVar5 != '\0') {
          plVar17 = (longlong *)(lVar11 + (longlong)iVar6 * 0x20 + 0x10);
          plVar9 = *(longlong **)(*plVar17 + 0xa0);
          if (plVar9 != (longlong *)0x0) {
            lVar11 = (**(code **)(*plVar9 + 8))(plVar9);
            lVar16 = FUN_140fa5e64();
            if ((lVar16 != 0) && (*(int *)(lVar16 + 0x38) <= *(int *)(lVar11 + 0x38))) {
              if (*(longlong *)
                   (*(longlong *)(lVar11 + 0x30) + (longlong)*(int *)(lVar16 + 0x38) * 8) !=
                  lVar16 + 0x30) {
                plVar9 = (longlong *)0x0;
              }
              if ((plVar9 != local_b8 && plVar9 != (longlong *)0x0) &&
                 ((iVar6 = (**(code **)(*plVar9 + 0x80))(plVar9), iVar6 == local_ac ||
                  (iVar6 = (**(code **)(*plVar9 + 0x80))(plVar9), iVar6 == -2)))) {
                uVar1 = uStack_70;
                lVar11 = (longlong)(int)uStack_70;
                uVar7 = (int)uStack_70 + 1;
                uStack_70 = CONCAT44(uStack_70._4_4_,uVar7);
                if (uStack_70._4_4_ < uVar7) {
                  FUN_148d88544(&local_78,uVar1 & 0xffffffff);
                }
                *(longlong *)(local_78 + lVar11 * 8) = *plVar17;
              }
            }
          }
        }
        lVar11 = local_78;
        param_2 = local_a8;
        plVar9 = local_b8;
        uVar8 = uVar8 & ~(uint)uVar19;
        puVar10 = *(uint **)(local_c0 + 0x80);
        if (*(uint **)(local_c0 + 0x80) == (uint *)0x0) {
          puVar10 = local_a0;
        }
        iVar3 = *(int *)(local_c0 + 0x88);
        iVar6 = (int)uVar14;
        lVar16 = (longlong)iVar6;
        uVar7 = puVar10[lVar16] & uVar8;
        if (uVar7 == 0) {
          iVar12 = iVar3 + 0x1e;
          if (-1 < iVar3 + -1) {
            iVar12 = iVar3 + -1;
          }
          iVar12 = iVar12 >> 5;
          iVar15 = iVar15 + 0x20;
          iVar13 = iVar12;
          if (iVar12 < iVar6) {
            iVar13 = iVar6;
          }
          if (iVar6 < iVar12) {
            lVar18 = 0;
            do {
              uVar7 = puVar10[lVar16 + lVar18 + 1];
              if (uVar7 != 0) {
                uVar14 = (ulonglong)(iVar6 + (int)lVar18 + 1);
                uVar8 = 0xffffffff;
                goto LAB_1441a51ae;
              }
              iVar15 = iVar15 + 0x20;
              lVar18 = lVar18 + 1;
            } while (iVar13 - lVar16 != lVar18);
            uVar8 = 0xffffffff;
            iVar6 = iVar13;
          }
          uVar14 = (ulonglong)(iVar6 + 1);
          iVar6 = iVar3;
        }
        else {
LAB_1441a51ae:
          uVar19 = (ulonglong)(-uVar7 & uVar7);
          uVar1 = uVar19 * 2 + 1;
          lVar16 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar16 == 0; lVar16 = lVar16 + -1) {
            }
          }
          iVar6 = (iVar15 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
          if (iVar3 <= iVar6) {
            iVar6 = iVar3;
          }
        }
      } while (iVar6 != iVar2);
      lVar16 = (longlong)(int)uStack_70;
      local_98 = 0;
      uStack_90 = 0;
      if (lVar16 != 0) {
        lVar18 = 0;
        do {
          uVar14 = uStack_90;
          lVar4 = *(longlong *)(lVar11 + lVar18);
          lVar20 = *(longlong *)(lVar4 + 0xa0);
          if (((((plVar9[0x9e] == *(longlong *)(lVar20 + 0x4f0)) &&
                ((int)plVar9[0x9f] == *(int *)(lVar20 + 0x4f8))) &&
               (*(char *)(lVar20 + 0x550) == (char)plVar9[0xaa])) &&
              ((*(longlong *)(lVar20 + 0x558) == plVar9[0xab] &&
               (*(int *)(lVar20 + 0x560) == (int)plVar9[0xac])))) &&
             ((*(int *)(lVar20 + 0x570) == (int)plVar9[0xae] &&
              (*(int *)(lVar20 + 0x578) == (int)plVar9[0xaf])))) {
            lVar20 = (longlong)(int)uStack_90;
            uVar8 = (int)uStack_90 + 1;
            uStack_90 = CONCAT44(uStack_90._4_4_,uVar8);
            if (uStack_90._4_4_ < uVar8) {
              FUN_148d88544(&local_98,uVar14 & 0xffffffff);
            }
            *(longlong *)(local_98 + lVar20 * 8) = lVar4;
          }
          lVar18 = lVar18 + 8;
        } while (lVar16 * 8 != lVar18);
      }
    }
    FUN_1441a4a5c(local_c0,param_2,&local_98);
    iVar2 = *param_2;
    if (local_98 != 0) {
      FUN_1400020a8();
    }
    lVar11 = local_78;
    if (iVar2 == 0) {
      local_98 = 0;
      uStack_90 = 0;
      lVar16 = (longlong)(int)uStack_70;
      if (lVar16 != 0) {
        lVar18 = 0;
        do {
          uVar14 = uStack_90;
          lVar4 = *(longlong *)(lVar11 + lVar18);
          lVar20 = *(longlong *)(lVar4 + 0xa0);
          if (((*(char *)(lVar20 + 0x550) == (char)plVar9[0xaa]) &&
              (*(longlong *)(lVar20 + 0x558) == plVar9[0xab])) &&
             ((*(int *)(lVar20 + 0x560) == (int)plVar9[0xac] &&
              ((*(int *)(lVar20 + 0x570) == (int)plVar9[0xae] &&
               (*(int *)(lVar20 + 0x578) == (int)plVar9[0xaf])))))) {
            lVar20 = (longlong)(int)uStack_90;
            uVar8 = (int)uStack_90 + 1;
            uStack_90 = CONCAT44(uStack_90._4_4_,uVar8);
            if (uStack_90._4_4_ < uVar8) {
              FUN_148d88544(&local_98,uVar14 & 0xffffffff);
            }
            *(longlong *)(local_98 + lVar20 * 8) = lVar4;
          }
          lVar18 = lVar18 + 8;
        } while (lVar16 * 8 != lVar18);
      }
      FUN_1441a4a5c(local_c0,param_2,&local_98);
      iVar2 = *param_2;
      if (local_98 != 0) {
        FUN_1400020a8();
      }
      lVar11 = local_78;
      if (iVar2 == 0) {
        local_98 = 0;
        uStack_90 = 0;
        lVar16 = (longlong)(int)uStack_70;
        if (lVar16 != 0) {
          lVar18 = 0;
          do {
            uVar14 = uStack_90;
            lVar4 = *(longlong *)(lVar11 + lVar18);
            lVar20 = *(longlong *)(lVar4 + 0xa0);
            if ((plVar9[0x9e] == *(longlong *)(lVar20 + 0x4f0)) &&
               ((int)plVar9[0x9f] == *(int *)(lVar20 + 0x4f8))) {
              lVar20 = (longlong)(int)uStack_90;
              uVar8 = (int)uStack_90 + 1;
              uStack_90 = CONCAT44(uStack_90._4_4_,uVar8);
              if (uStack_90._4_4_ < uVar8) {
                FUN_148d88544(&local_98,uVar14 & 0xffffffff);
              }
              *(longlong *)(local_98 + lVar20 * 8) = lVar4;
            }
            lVar18 = lVar18 + 8;
          } while (lVar16 * 8 != lVar18);
        }
        lVar11 = local_c0;
        FUN_1441a4a5c(local_c0,param_2,&local_98);
        iVar2 = *param_2;
        if (local_98 != 0) {
          FUN_1400020a8();
        }
        if (iVar2 == 0) {
          FUN_1441a4a5c(lVar11,param_2,&local_78);
        }
      }
    }
    if (local_78 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1441a54f0 FUN_1441a54f0 body=463 status=ok
// SIG undefined FUN_1441a54f0(void)

void FUN_1441a54f0(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined1 auStack_88 [40];
  longlong local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = *(longlong **)(param_2 + 0xa0);
  if (plVar1 != (longlong *)0x0) {
    lVar5 = (**(code **)(*plVar1 + 8))(plVar1);
    lVar6 = FUN_140fa5e64();
    if (((lVar6 != 0) && (*(int *)(lVar6 + 0x38) <= *(int *)(lVar5 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
        lVar6 + 0x30)) {
      uVar3 = (**(code **)(*plVar1 + 0x80))(plVar1);
      local_40 = *(undefined4 *)(param_2 + 0x98);
      local_48 = *(undefined8 *)(param_2 + 0x90);
      iVar4 = FUN_143de839a(param_1,&local_48,uVar3);
      if (iVar4 != -1) {
        local_50 = 0;
        local_40 = DAT_14c948620;
        local_48 = DAT_14c948618;
        uVar7 = FUN_140ec3d82(param_1);
        cVar2 = FUN_14410b458(uVar7,&local_50);
        if (cVar2 == '\0') {
          local_58 = *(undefined4 *)(param_2 + 0x98);
          local_60 = *(longlong *)(param_2 + 0x90);
          FUN_1441a4f08(param_1,&local_48,&local_60,iVar4);
        }
        else if (*(longlong *)(param_2 + 0x28) != 0) {
          cVar2 = FUN_14891a50e();
          if (cVar2 == '\x02') {
            FUN_1441a45b0(param_1,&local_48,local_50);
          }
        }
        if ((int)local_48 != 0) {
          (**(code **)(*param_1 + 0x70))(param_1,&local_48);
        }
      }
      if ((plVar1[0x9e] == 0) || ((longlong)(int)plVar1[0x9f] == -1)) {
        lVar5 = 0;
      }
      else {
        lVar5 = **(longlong **)
                  (*(longlong *)(plVar1[0x9e] + 0x50) + (longlong)(int)plVar1[0x9f] * 8);
      }
      if (lVar5 == DAT_14cbcdd98) {
        lVar5 = FUN_140f42f34(param_2);
        if (lVar5 != 0) {
          cVar2 = FUN_1405f61f4(lVar5);
          if (cVar2 == '\x06') {
            lVar5 = *(longlong *)(param_2 + 0x90);
            *(undefined4 *)(param_1 + 0x45) = *(undefined4 *)(param_2 + 0x98);
            param_1[0x44] = lVar5;
          }
        }
      }
    }
  }
  FUN_143de7858(param_1,param_2);
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441a56c0 FUN_1441a56c0 body=176 status=ok
// SIG undefined FUN_1441a56c0(void)

void FUN_1441a56c0(undefined8 param_1,undefined8 *param_2)

{
  char cVar1;
  undefined4 uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined4 local_58;
  undefined1 local_50 [24];
  longlong local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_60 = *param_2;
  local_58 = *(undefined4 *)(param_2 + 1);
  FUN_1448075d0(local_50);
  plVar3 = (longlong *)FUN_140fa5e12(local_50);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if (plVar3 != (longlong *)0x0) {
    uVar4 = FUN_140ec3d82(param_1);
    cVar1 = (**(code **)(*plVar3 + 0x70))(plVar3,uVar4);
    if (cVar1 != '\0') {
      uVar2 = (**(code **)(*plVar3 + 0x80))(plVar3);
      FUN_146253a1c(param_1,uVar2,param_2);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441a5772 FUN_1441a5772 body=174 status=ok
// SIG undefined FUN_1441a5772(void)

void FUN_1441a5772(undefined8 param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  longlong *plVar3;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined4 local_58;
  undefined1 local_50 [24];
  longlong local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_60 = *param_2;
  local_58 = *(undefined4 *)(param_2 + 1);
  FUN_1448075d0(local_50);
  plVar3 = (longlong *)FUN_140fa5e12(local_50);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if (plVar3 != (longlong *)0x0) {
    uVar1 = (**(code **)(*plVar3 + 0x80))(plVar3);
    iVar2 = FUN_143de839a(param_1,param_2,uVar1);
    if (iVar2 != -1) {
      FUN_146253a1c(param_1,iVar2,&DAT_14c948618);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441a5822 FUN_1441a5822 body=593 status=ok
// SIG undefined FUN_1441a5822(void)

void FUN_1441a5822(longlong *param_1,uint param_2,uint param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined1 auStack_a8 [44];
  uint local_7c;
  longlong local_78;
  undefined4 local_70;
  longlong local_68;
  undefined8 uStack_60;
  undefined1 local_54 [12];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_7c = param_2;
  FUN_140d7e3fa(param_1,local_54);
  lVar4 = (**(code **)(*param_1 + 8))(param_1,local_54);
  local_68 = 0;
  uStack_60 = 0;
  uVar9 = *(uint *)(param_1 + 0x21);
  iVar6 = (int)param_1[0x23] + uVar9;
  if (iVar6 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar6);
  }
  iVar7 = 0;
  if (iVar6 != 0) {
    FUN_146557146(&local_68);
    uVar9 = *(uint *)(param_1 + 0x21);
    iVar7 = (int)uStack_60;
  }
  if (uVar9 != 0) {
    uStack_60 = CONCAT44(uStack_60._4_4_,uVar9 + iVar7);
    if ((uint)(uStack_60._4_4_ - iVar7) < uVar9) {
      FUN_140f16476(&local_68,iVar7);
    }
    memcpy((void *)((longlong)iVar7 * 8 + local_68),(void *)param_1[0x20],(longlong)(int)uVar9 << 3)
    ;
    iVar7 = (int)uStack_60;
  }
  uVar9 = *(uint *)(param_1 + 0x23);
  if ((longlong)(int)uVar9 != 0) {
    uStack_60 = CONCAT44(uStack_60._4_4_,uVar9 + iVar7);
    if ((uint)(uStack_60._4_4_ - iVar7) < uVar9) {
      FUN_140f16476(&local_68,iVar7);
    }
    memcpy((void *)((longlong)iVar7 * 8 + local_68),(void *)param_1[0x22],(longlong)(int)uVar9 << 3)
    ;
    iVar7 = (int)uStack_60;
  }
  if (iVar7 != 0) {
    lVar5 = (longlong)iVar7 << 3;
    uVar10 = 0;
    do {
      if (*(longlong *)(local_68 + uVar10 * 8) == lVar4) goto LAB_1441a594f;
      uVar10 = uVar10 + 1;
      lVar5 = lVar5 + -8;
    } while (lVar5 != 0);
    uVar10 = 0xffffffff;
LAB_1441a594f:
    if (0 < iVar7) {
      do {
        uVar9 = (int)uVar10 + (-(param_3 & 0xff) | 1);
        if ((int)uVar9 < 0) {
          uVar9 = (int)uStack_60 - 1;
        }
        uVar8 = 0;
        if ((int)uStack_60 <= (int)uVar9) {
          uVar9 = uVar8;
        }
        uVar10 = (ulonglong)uVar9;
        plVar1 = *(longlong **)(local_68 + (longlong)(int)uVar9 * 8);
        plVar2 = (longlong *)plVar1[0x14];
        if (plVar2 != (longlong *)0x0) {
          lVar4 = (**(code **)(*plVar2 + 8))(plVar2);
          lVar5 = FUN_140fa5e64();
          if (((lVar5 != 0) && (uVar8 = 0, *(int *)(lVar5 + 0x38) <= *(int *)(lVar4 + 0x38))) &&
             (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
              lVar5 + 0x30)) {
            uVar8 = (**(code **)(*plVar2 + 0x80))(plVar2);
          }
        }
        cVar3 = (**(code **)(*plVar1 + 0xf0))(plVar1);
        if ((cVar3 != '\0') && ((uVar8 == local_7c || (uVar8 == 0xfffffffe)))) {
          local_70 = (undefined4)plVar1[0x13];
          local_78 = plVar1[0x12];
          FUN_146253a1c(param_1,local_7c);
          break;
        }
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
  }
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1441a5a76 FUN_1441a5a76 body=125 status=ok
// SIG undefined FUN_1441a5a76(void)

void FUN_1441a5a76(longlong *param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [44];
  int local_2c [3];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = 0;
  uVar2 = FUN_140ec3d82();
  cVar1 = FUN_14410b458(uVar2,&local_20);
  if (cVar1 != '\0') {
    FUN_1441a45b0(param_1,local_2c,local_20);
    if (local_2c[0] != 0) {
      (**(code **)(*param_1 + 0x70))(param_1,local_2c);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441a5af4 FUN_1441a5af4 body=43 status=ok
// SIG undefined FUN_1441a5af4(void)

void FUN_1441a5af4(longlong *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x28))();
  if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x0001441a5b11. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x110))(param_1);
    return;
  }
  return;
}



// FUNCTION 1441a5b20 FUN_1441a5b20 body=249 status=ok
// SIG undefined FUN_1441a5b20(void)

void FUN_1441a5b20(longlong *param_1)

{
  char cVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_4c;
  undefined4 local_44;
  longlong local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_146556af0(param_1,&local_40);
  if (0 < local_38) {
    lVar4 = 0;
    uVar3 = 0;
    do {
      plVar2 = (longlong *)(**(code **)(*param_1 + 8))(param_1,local_40 + lVar4);
      if (plVar2 == (longlong *)0x0) {
LAB_1441a5b8a:
        local_58 = *(undefined8 *)(local_40 + lVar4);
        local_50 = *(undefined4 *)(local_40 + 8 + lVar4);
        FUN_1441a4f08(param_1,&local_4c,&local_58,uVar3 & 0xffffffff);
        *(undefined4 *)(local_40 + 8 + lVar4) = local_44;
        *(undefined8 *)(local_40 + lVar4) = local_4c;
      }
      else {
        cVar1 = (**(code **)(*plVar2 + 0xf0))(plVar2);
        if (cVar1 == '\0') goto LAB_1441a5b8a;
      }
      uVar3 = uVar3 + 1;
      lVar4 = lVar4 + 0xc;
    } while ((longlong)uVar3 < (longlong)local_38);
  }
  FUN_148900790(param_1,&local_40);
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441a5c1a FUN_1441a5c1a body=587 status=ok
// SIG undefined FUN_1441a5c1a(void)

undefined8 FUN_1441a5c1a(longlong *param_1)

{
  uint uVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  bool bVar9;
  undefined1 auStack_78 [32];
  undefined2 *local_58;
  longlong local_50;
  longlong lStack_48;
  ulonglong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  cVar2 = (**(code **)(*param_1 + 0x50))();
  if (cVar2 == '\0') {
    lVar4 = FUN_1406d51c0();
    local_58 = &DAT_14a171d50;
    local_50 = 0;
    lStack_48 = 0;
    local_40 = 0;
    FUN_1401004a0(&local_58,param_1 + 0x9e);
    if (*(longlong *)(lVar4 + 0x78) == local_50) {
      uVar1 = *(uint *)(lVar4 + 0x88);
      uVar7 = (uint)local_40;
      if ((int)uVar1 < (int)(uint)local_40) {
        uVar7 = uVar1;
      }
      if (0 < (int)uVar7) {
        uVar8 = 0;
        do {
          if ((*(ulonglong *)(lStack_48 + uVar8 * 8) &
              ~*(ulonglong *)(*(longlong *)(lVar4 + 0x80) + uVar8 * 8)) != 0) goto LAB_1441a5cff;
          uVar8 = uVar8 + 1;
        } while (uVar7 != uVar8);
      }
      bVar9 = true;
      if ((int)uVar1 < (int)(uint)local_40) {
        lVar6 = 0;
        do {
          bVar9 = *(longlong *)((longlong)(int)uVar1 * 8 + lStack_48 + lVar6 * 8) == 0;
          if (!bVar9) break;
          iVar5 = (int)lVar6;
          lVar6 = lVar6 + 1;
        } while (~uVar1 + (uint)local_40 != iVar5);
      }
    }
    else {
LAB_1441a5cff:
      bVar9 = false;
    }
    local_58 = &DAT_14a171d50;
    uVar8 = local_40 >> 0x20;
    local_40 = local_40 & 0xffffffff00000000;
    if ((int)uVar8 != 0) {
      FUN_140115c12(&lStack_48,0);
    }
    local_50 = 0;
    if (lStack_48 != 0) {
      FUN_1400020a8();
    }
    uVar3 = 0;
    if (bVar9) goto LAB_1441a5e42;
    cVar2 = FUN_1418eb602(param_1);
    uVar3 = 1;
    if (cVar2 != '\0') goto LAB_1441a5e42;
    local_58 = &DAT_14a171d50;
    local_50 = 0;
    lStack_48 = 0;
    local_40 = 0;
    FUN_1401004a0(&local_58,param_1 + 0x9e);
    if (*(longlong *)(lVar4 + 0xd8) == local_50) {
      uVar1 = *(uint *)(lVar4 + 0xe8);
      uVar7 = (uint)local_40;
      if ((int)uVar1 < (int)(uint)local_40) {
        uVar7 = uVar1;
      }
      if (0 < (int)uVar7) {
        uVar8 = 0;
        do {
          if ((*(ulonglong *)(lStack_48 + uVar8 * 8) &
              ~*(ulonglong *)(*(longlong *)(lVar4 + 0xe0) + uVar8 * 8)) != 0) goto LAB_1441a5dfa;
          uVar8 = uVar8 + 1;
        } while (uVar7 != uVar8);
      }
      bVar9 = true;
      if ((int)uVar1 < (int)(uint)local_40) {
        lVar4 = 0;
        do {
          bVar9 = *(longlong *)((longlong)(int)uVar1 * 8 + lStack_48 + lVar4 * 8) == 0;
          if (!bVar9) break;
          iVar5 = (int)lVar4;
          lVar4 = lVar4 + 1;
        } while (~uVar1 + (uint)local_40 != iVar5);
      }
    }
    else {
LAB_1441a5dfa:
      bVar9 = false;
    }
    local_58 = &DAT_14a171d50;
    uVar8 = local_40 >> 0x20;
    local_40 = local_40 & 0xffffffff00000000;
    if ((int)uVar8 != 0) {
      FUN_140115c12(&lStack_48,0);
    }
    local_50 = 0;
    if (lStack_48 != 0) {
      FUN_1400020a8();
    }
    uVar3 = 2;
    if (bVar9) goto LAB_1441a5e42;
  }
  uVar3 = 0xffffffff;
LAB_1441a5e42:
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 1441a5e66 FUN_1441a5e66 body=461 status=ok
// SIG undefined FUN_1441a5e66(void)

undefined4 FUN_1441a5e66(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar4 = FUN_1406d51c0();
  local_38 = 0;
  uStack_30 = 0;
  FUN_140ddec7c(param_1 + 0x4f0);
  if ((longlong)(int)uStack_30 == 0) {
    uVar7 = 0;
  }
  else {
    lVar5 = 0;
    uVar7 = 0;
    do {
      uVar2 = *(undefined8 *)(local_38 + lVar5);
      uVar6 = (uint)((ulonglong)uVar2 >> 0x10);
      uVar9 = (uint)uVar2 & 0xffff;
      uVar6 = ((uint)uVar2 << 0x10 | uVar9) + (int)((ulonglong)uVar2 >> 0x20) +
              (uVar6 << 0x13 | uVar6 & 0xffff) + (uVar9 >> 4);
      uVar7 = uVar6 >> 0xd ^ uVar7 - uVar6;
      uVar9 = uVar7 << 8 ^ (-0x61c88647 - uVar6) - uVar7;
      uVar10 = uVar9 >> 0xd ^ (uVar6 - uVar7) - uVar9;
      uVar7 = uVar10 >> 0xc ^ (uVar7 - uVar9) - uVar10;
      uVar6 = uVar7 << 0x10 ^ (uVar9 - uVar10) - uVar7;
      uVar9 = uVar6 >> 5 ^ (uVar10 - uVar7) - uVar6;
      uVar10 = uVar9 >> 3 ^ (uVar7 - uVar6) - uVar9;
      uVar7 = uVar10 << 10 ^ (uVar6 - uVar9) - uVar10;
      uVar7 = uVar7 >> 0xf ^ uVar9 - (uVar10 + uVar7);
      lVar5 = lVar5 + 8;
    } while ((longlong)(int)uStack_30 * 8 != lVar5);
  }
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  uVar3 = 0;
  if (*(int *)(lVar4 + 0x120) != *(int *)(lVar4 + 0x14c)) {
    lVar5 = lVar4 + 0x150;
    if (*(longlong *)(lVar4 + 0x158) != 0) {
      lVar5 = *(longlong *)(lVar4 + 0x158);
    }
    iVar8 = *(int *)(lVar5 + (ulonglong)(*(int *)(lVar4 + 0x160) - 1U & uVar7) * 4);
    if (iVar8 != -1) {
      lVar4 = *(longlong *)(lVar4 + 0x118);
      do {
        lVar5 = (longlong)iVar8 * 0x20;
        if ((*(longlong *)(param_1 + 0x4f0) == *(longlong *)(lVar4 + lVar5)) &&
           (lVar1 = lVar4 + lVar5, *(int *)(param_1 + 0x4f8) == *(int *)(lVar1 + 8))) {
          uVar3 = 0;
          if (lVar1 != 0) {
            uVar3 = *(undefined4 *)(lVar1 + 0x10);
          }
          break;
        }
        iVar8 = *(int *)(lVar4 + 0x18 + lVar5);
      } while (iVar8 != -1);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 1441a606e FUN_1441a606e body=239 status=ok
// SIG undefined FUN_1441a606e(void)

ulonglong FUN_1441a606e(ulonglong param_1)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined4 local_70;
  undefined1 local_68 [24];
  longlong local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  cVar3 = FUN_146557370();
  if ((cVar3 == '\0') || (0 < *(int *)(param_1 + 0x128))) {
    param_1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0xe8);
    if ((longlong)iVar1 == 0) {
      param_1 = CONCAT71((int7)(param_1 >> 8),1);
    }
    else {
      lVar2 = *(longlong *)(param_1 + 0xe0);
      lVar5 = 0;
      do {
        local_78 = *(undefined8 *)(lVar2 + 8 + lVar5);
        local_70 = *(undefined4 *)(lVar2 + 0x10 + lVar5);
        FUN_1448075d0(local_68,&local_78);
        lVar4 = FUN_1441a615e(local_68);
        param_1 = CONCAT71((int7)(param_1 >> 8),lVar4 == 0);
        if (local_50 != 0) {
          FUN_1400020a8();
        }
      } while ((lVar4 == 0) &&
              (bVar6 = (longlong)iVar1 * 0x30 + -0x30 != lVar5, lVar5 = lVar5 + 0x30, bVar6));
    }
  }
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1 & 0xffffffff;
}



// FUNCTION 1441a615e FUN_1441a615e body=82 status=ok
// SIG undefined FUN_1441a615e(void)

longlong * FUN_1441a615e(void)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  plVar1 = (longlong *)FUN_14060eaf6();
  if (plVar1 != (longlong *)0x0) {
    lVar2 = (**(code **)(*plVar1 + 8))(plVar1);
    lVar3 = FUN_14409b07a();
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



// FUNCTION 1441a6221 FUN_1441a6221 body=47 status=ok
// SIG undefined FUN_1441a6221(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1441a6221(void)

{
  _DAT_14cbcd8f8 = 0;
  if (DAT_14cbcd8f0 != 0) {
    FUN_1400020a8();
  }
  FUN_1401bccca(&DAT_14cbcd8b0);
  return;
}



// FUNCTION 1441a6250 FUN_1441a6250 body=47 status=ok
// SIG undefined FUN_1441a6250(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1441a6250(void)

{
  _DAT_14cbcd948 = 0;
  if (DAT_14cbcd940 != 0) {
    FUN_1400020a8();
  }
  FUN_1401bccca(&DAT_14cbcd900);
  return;
}



// FUNCTION 1441a627f FUN_1441a627f body=41 status=ok
// SIG undefined FUN_1441a627f(void)

void FUN_1441a627f(void)

{
  DAT_14cbcd998 = 0;
  if (DAT_14cbcd990 != 0) {
    FUN_1400020a8();
  }
  FUN_14662dc3a();
  return;
}



// FUNCTION 1441a62a8 FUN_1441a62a8 body=41 status=ok
// SIG undefined FUN_1441a62a8(void)

void FUN_1441a62a8(void)

{
  DAT_14cbcd9e8 = 0;
  if (DAT_14cbcd9e0 != 0) {
    FUN_1400020a8();
  }
  FUN_145d69562();
  return;
}



// FUNCTION 1441a62d1 FUN_1441a62d1 body=47 status=ok
// SIG undefined FUN_1441a62d1(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1441a62d1(void)

{
  _DAT_14cbcda38 = 0;
  if (DAT_14cbcda30 != 0) {
    FUN_1400020a8();
  }
  FUN_140292ea0(&DAT_14cbcd9f0);
  return;
}



// FUNCTION 1441a6300 FUN_1441a6300 body=507 status=ok
// SIG undefined FUN_1441a6300(void)

longlong FUN_1441a6300(undefined8 *param_1)

{
  byte *pbVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  int iVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined1 auStack_b8 [44];
  undefined1 local_8c [12];
  undefined8 local_80;
  undefined4 local_78;
  uint local_70 [6];
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_78 = DAT_14cb7d070;
  local_80 = DAT_14cb7d068;
  FUN_1448075d0(local_70);
  pbVar1 = (byte *)*param_1;
  if (pbVar1 != (byte *)0x0) {
    if ((*pbVar1 & 2) == 0) {
      plVar4 = &DAT_14c9a1288;
    }
    else {
      plVar4 = (longlong *)(*(longlong *)(pbVar1 + 8) + 0x18);
    }
    if ((int)plVar4[2] != *(int *)((longlong)plVar4 + 0x3c)) {
      plVar9 = plVar4 + 8;
      if ((longlong *)plVar4[9] != (longlong *)0x0) {
        plVar9 = (longlong *)plVar4[9];
      }
      iVar8 = *(int *)((longlong)plVar9 + (ulonglong)((int)plVar4[10] - 1U & local_70[0]) * 4);
      if (iVar8 != -1) {
        do {
          lVar7 = *plVar4 + (longlong)iVar8 * 0x40;
          if (*(uint *)(*plVar4 + (longlong)iVar8 * 0x40) == local_70[0]) {
            if ((((lVar7 != 0) &&
                 (puVar6 = (undefined8 *)(lVar7 + 0x28), puVar6 != (undefined8 *)0x0)) &&
                ((byte *)*puVar6 != (byte *)0x0)) && ((*(byte *)*puVar6 & 0x40) == 0))
            goto LAB_1441a63ce;
            break;
          }
          iVar8 = *(int *)(lVar7 + 0x38);
        } while (iVar8 != -1);
      }
    }
  }
  puVar6 = &DAT_14c9a1308;
LAB_1441a63ce:
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  pbVar1 = (byte *)*puVar6;
  plVar4 = &DAT_14c9a1270;
  if ((pbVar1 != (byte *)0x0) && ((*pbVar1 & 2) != 0)) {
    plVar4 = *(longlong **)(pbVar1 + 8);
  }
  if ((longlong)(int)plVar4[2] != 0) {
    lVar7 = *plVar4;
    lVar10 = (longlong)(int)plVar4[2] << 4;
    do {
      FUN_14068d188(lVar7,local_8c,0);
      FUN_1448075d0(local_70,local_8c);
      lVar3 = FUN_14060eaf6(local_70);
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      if (lVar3 != 0) {
        lVar5 = lVar3 + 0x4f0;
        cVar2 = FUN_1407a73f8(lVar5,&DAT_14cbcdd98);
        if (((cVar2 != '\0') || (cVar2 = FUN_1407a73f8(lVar5,&DAT_14cbcdda8), cVar2 != '\0')) ||
           ((cVar2 = FUN_1407a73f8(lVar5,&DAT_14cbcdda0), cVar2 != '\0' ||
            (cVar2 = FUN_1407a73f8(lVar5,&DAT_14cbcddb8), cVar2 != '\0')))) goto LAB_1441a64bb;
      }
      lVar7 = lVar7 + 0x10;
      lVar10 = lVar10 + -0x10;
    } while (lVar10 != 0);
  }
  lVar3 = 0;
LAB_1441a64bb:
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3;
}



// FUNCTION 1441a64fc FUN_1441a64fc body=54 status=ok
// SIG undefined FUN_1441a64fc(void)

undefined8 FUN_1441a64fc(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  plVar1 = (longlong *)FUN_140672052(*(undefined8 *)(param_1 + 8));
  if (plVar1 != (longlong *)0x0) {
    lVar2 = (**(code **)(*plVar1 + 0x2b8))(plVar1);
    if (lVar2 != 0) {
      uVar3 = FUN_14133cf88(lVar2);
      return uVar3;
    }
  }
  return 0;
}



// FUNCTION 1441a6532 FUN_1441a6532 body=209 status=ok
// SIG undefined FUN_1441a6532(void)

undefined8 FUN_1441a6532(longlong param_1)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int *piVar5;
  int *piVar6;
  ulonglong uVar7;
  undefined1 auStack_48 [40];
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar3 = FUN_1441a64fc();
  if (lVar3 != 0) {
    piVar5 = *(int **)(*(longlong *)(param_1 + 0xa0) + 8);
    piVar6 = &DAT_14c9485f0;
    if (piVar5 != (int *)0x0) {
      piVar6 = piVar5;
    }
    piVar5 = (int *)&DAT_14c948618;
    if (((*piVar6 != 0) && (iVar1 = piVar6[1], iVar1 != 0)) && (*piVar6 != DAT_14c948000)) {
      if ((iVar1 < 2) && (piVar6[9] < 1)) {
        piVar6 = piVar6 + 2;
      }
      else {
        piVar6 = *(int **)(piVar6 + 6);
      }
      if (0 < iVar1) {
        piVar5 = piVar6;
      }
    }
    uVar2 = *(ulonglong *)(lVar3 + 0x18);
    uVar7 = *(ulonglong *)(piVar5 + 1);
    if ((uVar7 == DAT_14c948034) && (*piVar5 != DAT_14c948030)) {
      FUN_14011791e(&local_20,*piVar5,uVar7 >> 0x20);
      uVar7 = local_20;
    }
    uVar4 = 1;
    if (uVar2 == uVar7) goto LAB_1441a65c0;
  }
  uVar4 = 0;
LAB_1441a65c0:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441a6604 FUN_1441a6604 body=114 status=ok
// SIG undefined FUN_1441a6604(void)

undefined8 FUN_1441a6604(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  cVar2 = FUN_143df0132();
  if (cVar2 == '\0') {
LAB_1441a666c:
    uVar5 = 0;
  }
  else {
    plVar1 = *(longlong **)(param_1 + 0xa0);
    if (plVar1 != (longlong *)0x0) {
      lVar3 = (**(code **)(*plVar1 + 8))(plVar1);
      lVar4 = FUN_140fa5e64();
      if ((lVar4 != 0) && (*(int *)(lVar4 + 0x38) <= *(int *)(lVar3 + 0x38))) {
        if (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
            lVar4 + 0x30) {
          uVar5 = FUN_140672052(*(undefined8 *)(param_1 + 8));
          cVar2 = FUN_1411d97e6(plVar1,uVar5);
          if (cVar2 == '\0') goto LAB_1441a666c;
        }
      }
    }
    uVar5 = 1;
  }
  return uVar5;
}



// FUNCTION 1441a6676 FUN_1441a6676 body=72 status=ok
// SIG undefined FUN_1441a6676(void)

void FUN_1441a6676(undefined8 param_1)

{
  char cVar1;
  longlong lVar2;
  
  cVar1 = FUN_1441a6532();
  if (cVar1 != '\0') {
    lVar2 = FUN_1441a64fc(param_1);
    if ((lVar2 != 0) && (*(int *)(lVar2 + 0x30) != 0)) {
      FUN_143df03f6(param_1,lVar2 + 0x30,0);
      return;
    }
  }
  FUN_143df0b6c(param_1);
  return;
}



// FUNCTION 1441a66be FUN_1441a66be body=766 status=ok
// SIG undefined FUN_1441a66be(void)

void FUN_1441a66be(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  int local_80;
  undefined4 local_7c;
  longlong *local_78;
  int local_70;
  undefined4 local_6c;
  longlong local_68;
  int local_60;
  undefined4 local_5c;
  longlong local_58;
  ulonglong local_50;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  cVar4 = FUN_1441a6532();
  if (cVar4 == '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_a8);
  }
  plVar5 = (longlong *)FUN_140672052(*(undefined8 *)(param_1 + 8));
  if (((plVar5 != (longlong *)0x0) && (lVar6 = (**(code **)(*plVar5 + 0x2b8))(plVar5), lVar6 != 0))
     && (lVar6 = FUN_14133cf88(lVar6), lVar6 != 0)) {
    local_68 = 0;
    iVar1 = *(int *)(lVar6 + 0x60);
    uVar9 = *(undefined8 *)(lVar6 + 0x58);
    local_60 = iVar1;
    if (iVar1 == 0) {
      local_5c = 0;
    }
    else {
      FUN_1487816c8(&local_68,iVar1,0);
      FUN_148781737(local_68,uVar9,iVar1);
    }
    lVar7 = FUN_140d1d7e4();
    puVar8 = (undefined8 *)FUN_140d19a6c(lVar7 + 0x90);
    local_78 = (longlong *)0x0;
    iVar1 = *(int *)(puVar8 + 1);
    uVar9 = *puVar8;
    local_70 = iVar1;
    if (iVar1 == 0) {
      local_6c = 0;
    }
    else {
      FUN_148c13408(&local_78,iVar1,0);
      FUN_148c1347b(local_78,uVar9,iVar1);
      if ((longlong)local_70 != 0) {
        lVar7 = (longlong)local_70 * 0x18;
        plVar5 = local_78;
        do {
          local_50 = 0;
          local_58 = *plVar5;
          local_48 = 0;
          uVar9 = FUN_14477b664(plVar5[1]);
          local_50 = FUN_14477b664(uVar9);
          local_48 = plVar5[2];
          if (local_50 == 0) {
            uVar9 = FUN_141417e7c();
            local_50 = FUN_14477b664(uVar9);
          }
          lVar10 = local_48;
          if (local_48 == 0) {
            local_48 = 0;
            if (local_50 == 0) {
LAB_1441a692d:
              lVar10 = 0;
            }
            else {
              lVar10 = 0;
              if (local_58 != 0) {
                plVar2 = *(longlong **)(local_50 + 0xb8);
                if ((plVar2 == (longlong *)0x0) ||
                   (cVar4 = (**(code **)(*plVar2 + 0x108))(), cVar4 == '\0')) goto LAB_1441a692d;
                uVar9 = (**(code **)(*plVar2 + 0x110))(plVar2);
                lVar10 = FUN_144aff482(uVar9,&local_58);
              }
            }
          }
          iVar1 = local_60;
          lVar3 = local_68;
          if (lVar10 == lVar6) {
            if (plVar5 != (longlong *)0x0) {
              local_88 = 0;
              local_80 = local_60;
              if (local_60 == 0) {
                local_7c = 0;
              }
              else {
                FUN_1487816c8(&local_88,local_60,0);
                FUN_148781737(local_88,lVar3,iVar1);
              }
              FUN_14435d498(&local_58,&local_88);
              FUN_14878159e(&local_68,&local_58);
              FUN_140741dda(local_58,local_50 & 0xffffffff);
              if (local_58 != 0) {
                FUN_1400020a8();
              }
            }
            break;
          }
          plVar5 = plVar5 + 3;
          lVar7 = lVar7 + -0x18;
        } while (lVar7 != 0);
      }
    }
    if ((longlong)local_60 != 0) {
      lVar7 = (longlong)local_60 * 0x58;
      lVar6 = local_68;
      do {
        FUN_14890e87c(param_1,lVar6,0);
        lVar6 = lVar6 + 0x58;
        lVar7 = lVar7 + -0x58;
      } while (lVar7 != 0);
    }
    if (local_78 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    FUN_140741dda(local_68,local_60);
    if (local_68 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1441a69d4 FUN_1441a69d4 body=1354 status=ok
// SIG undefined FUN_1441a69d4(void)

ulonglong FUN_1441a69d4(longlong *param_1)

{
  ulonglong uVar1;
  longlong *plVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  uint *puVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  int *piVar16;
  uint uVar17;
  undefined8 unaff_RDI;
  ulonglong uVar18;
  longlong lVar19;
  int *piVar20;
  int iVar21;
  longlong *unaff_R15;
  ulonglong uVar22;
  undefined1 auStack_158 [40];
  longlong local_130;
  undefined8 local_128;
  undefined4 local_120;
  undefined8 local_118;
  undefined4 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined4 local_f8;
  undefined8 local_f4;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_bc;
  undefined4 local_b4;
  longlong local_a8;
  undefined4 local_a0;
  longlong local_98 [2];
  uint local_88 [2];
  longlong local_80;
  uint *local_78;
  int local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  plVar2 = (longlong *)param_1[0x14];
  uVar18 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
  if (plVar2 == (longlong *)0x0) goto LAB_1441a6a2a;
  lVar7 = (**(code **)(*plVar2 + 8))(plVar2);
  lVar8 = FUN_140fa5e64();
  if (((lVar8 == 0) || (*(int *)(lVar7 + 0x38) < *(int *)(lVar8 + 0x38))) ||
     (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) !=
      lVar8 + 0x30)) goto LAB_1441a6a2a;
  uVar9 = FUN_140ec3d82(param_1[1]);
  cVar3 = (**(code **)(*plVar2 + 0x70))(plVar2,uVar9);
  if (cVar3 == '\0') goto LAB_1441a6b8c;
  iVar5 = (**(code **)(*plVar2 + 0x80))(plVar2);
  if (iVar5 == -2) goto LAB_1441a6aa1;
  FUN_140d7e3fa(param_1[1],&local_f4,iVar5);
  local_100 = local_f4;
  local_f8 = local_ec;
  FUN_1448075d0(local_98);
  uVar9 = FUN_140fa5e12(local_98);
  if (local_80 != 0) {
    FUN_1400020a8();
  }
  unaff_R15 = local_98;
  FUN_140d7e3fa(param_1[1],unaff_R15,iVar5);
  if ((int)local_98[0] == 0) {
    uVar18 = CONCAT71((int7)((ulonglong)uVar9 >> 8),1);
    goto LAB_1441a6a2a;
  }
  lVar7 = param_1[1];
  local_108 = 0;
  uVar10 = (**(code **)(*param_1 + 0x20))(param_1);
  cVar3 = FUN_14410b458(uVar10,&local_108);
  if (cVar3 == '\0') {
    if ((plVar2[0x9e] == 0) || ((longlong)(int)plVar2[0x9f] == -1)) {
      lVar8 = 0;
    }
    else {
      lVar8 = **(longlong **)(*(longlong *)(plVar2[0x9e] + 0x50) + (longlong)(int)plVar2[0x9f] * 8);
    }
    uVar18 = 0;
    unaff_R15 = (longlong *)0x0;
    if (lVar8 != DAT_14cbcdd98) goto LAB_1441a6a2a;
    local_78 = (uint *)0x0;
    local_70 = 0;
    local_98[0] = 0;
    local_98[1] = 0;
    local_6c = 0xffffffff00000080;
    local_64 = 0;
    local_58 = 0;
    local_50 = 0;
    local_c8 = 0;
    local_c0 = 0;
    local_e8 = 0;
    uStack_e0 = 0;
    local_bc = 0xffffffff00000080;
    local_b4 = 0;
    local_a8 = 0;
    local_a0 = 0;
    FUN_1448bf83d(plVar2,local_98,&local_e8,0);
    iVar5 = local_70;
    if (local_70 == 0) {
      uVar22 = 1;
      iVar21 = 0;
      iVar12 = 0;
    }
    else {
      puVar11 = local_78;
      if (local_78 == (uint *)0x0) {
        puVar11 = local_88;
      }
      uVar17 = *puVar11;
      if (uVar17 == 0) {
        iVar12 = local_70 + 0x1e;
        if (-1 < local_70 + -1) {
          iVar12 = local_70 + -1;
        }
        uVar18 = 0;
        uVar22 = (ulonglong)(uint)(iVar12 >> 5);
        if (iVar12 >> 5 < 1) {
          uVar22 = uVar18;
        }
        iVar21 = 0;
        do {
          if (uVar22 == uVar18) goto LAB_1441a6cc3;
          iVar21 = iVar21 + 0x20;
          uVar17 = puVar11[uVar18 + 1];
          uVar18 = uVar18 + 1;
        } while (uVar17 == 0);
      }
      else {
        uVar18 = 0;
        iVar21 = 0;
      }
      uVar22 = (ulonglong)(-uVar17 & uVar17);
      uVar1 = uVar22 * 2 + 1;
      lVar8 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar12 = (iVar21 - ((uint)lVar8 ^ 0x3f)) + 0x3e;
      if (local_70 <= iVar12) {
        iVar12 = local_70;
      }
    }
    if (iVar12 != local_70) {
      uVar17 = 0xffffffff;
      iVar6 = local_70;
      do {
        lVar8 = *(longlong *)(local_98[0] + (longlong)iVar12 * 0x10);
        if (lVar8 != 0) {
          piVar16 = *(int **)(lVar8 + 8);
          if (piVar16 == (int *)0x0) {
            piVar16 = &DAT_14c9485f0;
          }
          piVar20 = (int *)&DAT_14c948618;
          if (*piVar16 != 0) {
            iVar12 = piVar16[1];
            piVar20 = (int *)&DAT_14c948618;
            if ((iVar12 != 0) && (piVar20 = (int *)&DAT_14c948618, *piVar16 != DAT_14c948000)) {
              if ((iVar12 < 2) && (piVar16[9] < 1)) {
                piVar16 = piVar16 + 2;
              }
              else {
                piVar16 = *(int **)(piVar16 + 6);
              }
              piVar20 = (int *)&DAT_14c948618;
              if (0 < iVar12) {
                piVar20 = piVar16;
              }
            }
          }
          if ((*piVar20 == *(int *)(lVar7 + 0x220)) && (piVar20[2] == *(int *)(lVar7 + 0x228))) {
            local_110 = DAT_14c948620;
            local_118 = DAT_14c948618;
            local_130 = FUN_14189cb90(lVar8,0,&local_118);
            local_128 = DAT_14c948618;
            local_120 = DAT_14c948620;
            lVar8 = FUN_14189cb90(plVar2,0,&local_128);
            iVar6 = local_70;
            if (local_130 == lVar8) {
              uVar18 = CONCAT71((int7)(uVar18 >> 8),1);
              goto LAB_1441a6cc5;
            }
          }
        }
        uVar17 = uVar17 & ~(uint)uVar22;
        puVar11 = local_78;
        if (local_78 == (uint *)0x0) {
          puVar11 = local_88;
        }
        iVar12 = (int)uVar18;
        lVar8 = (longlong)iVar12;
        uVar13 = puVar11[lVar8] & uVar17;
        if (uVar13 == 0) {
          iVar14 = iVar6 + 0x1e;
          if (-1 < iVar6 + -1) {
            iVar14 = iVar6 + -1;
          }
          iVar14 = iVar14 >> 5;
          iVar21 = iVar21 + 0x20;
          iVar15 = iVar14;
          if (iVar14 < iVar12) {
            iVar15 = iVar12;
          }
          if (iVar12 < iVar14) {
            lVar19 = 0;
            do {
              uVar13 = puVar11[lVar8 + lVar19 + 1];
              if (uVar13 != 0) {
                uVar18 = (ulonglong)(iVar12 + (int)lVar19 + 1);
                uVar17 = 0xffffffff;
                goto LAB_1441a6e40;
              }
              iVar21 = iVar21 + 0x20;
              lVar19 = lVar19 + 1;
            } while (iVar15 - lVar8 != lVar19);
            uVar17 = 0xffffffff;
            iVar12 = iVar15;
          }
          uVar18 = (ulonglong)(iVar12 + 1);
          iVar12 = iVar6;
        }
        else {
LAB_1441a6e40:
          uVar22 = (ulonglong)(-uVar13 & uVar13);
          uVar1 = uVar22 * 2 + 1;
          lVar8 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
            }
          }
          iVar12 = (iVar21 - ((uint)lVar8 ^ 0x3f)) + 0x3e;
          if (iVar6 <= iVar12) {
            iVar12 = iVar6;
          }
        }
      } while (iVar12 != iVar5);
    }
LAB_1441a6cc3:
    uVar18 = 0;
LAB_1441a6cc5:
    local_a0 = 0;
    if (local_a8 != 0) {
      FUN_1400020a8();
    }
    FUN_1401bcc92(&local_e8);
    local_50 = 0;
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    FUN_1401bcc5a(local_98);
  }
  else {
    uVar10 = FUN_140ec3d82(lVar7);
    cVar3 = FUN_14410b70e(plVar2,uVar10);
    if (cVar3 != '\0') {
      uVar10 = FUN_140ec3d82(lVar7);
      cVar3 = FUN_14410b70e(uVar9,uVar10);
      if (cVar3 != '\0') {
        cVar3 = FUN_1441a4a02(plVar2);
        cVar4 = FUN_1441a4a02(uVar9);
        if (cVar4 <= cVar3) goto LAB_1441a6b8c;
      }
LAB_1441a6aa1:
      unaff_R15 = (longlong *)&DAT_00000001;
      uVar18 = 0;
      goto LAB_1441a6a2a;
    }
LAB_1441a6b8c:
    uVar18 = 0;
  }
  unaff_R15 = (longlong *)0x0;
LAB_1441a6a2a:
  if ((local_48 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT71((int7)(uVar18 >> 8),(byte)uVar18 | (byte)unaff_R15) & 0xffffff01;
}



// FUNCTION 1441a6f20 FUN_1441a6f20 body=170 status=ok
// SIG undefined FUN_1441a6f20(void)

void FUN_1441a6f20(undefined8 param_1,longlong param_2)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  int *piVar4;
  int *piVar5;
  
  FUN_143df1070();
  cVar2 = FUN_1441a6532(param_1);
  if (cVar2 != '\0') {
    lVar3 = FUN_1441a64fc(param_1);
    if ((lVar3 != 0) && (*(int *)(lVar3 + 0x3c) != 0)) {
      piVar4 = *(int **)(*(longlong *)(param_2 + 0x40) + 8);
      piVar5 = &DAT_14c9485f0;
      if (piVar4 != (int *)0x0) {
        piVar5 = piVar4;
      }
      piVar4 = (int *)&DAT_14c948618;
      if (((*piVar5 != 0) && (iVar1 = piVar5[1], iVar1 != 0)) && (*piVar5 != DAT_14c948000)) {
        if ((iVar1 < 2) && (piVar5[9] < 1)) {
          piVar5 = piVar5 + 2;
        }
        else {
          piVar5 = *(int **)(piVar5 + 6);
        }
        if (0 < iVar1) {
          piVar4 = piVar5;
        }
      }
      if ((*(int *)(lVar3 + 0x3c) == *piVar4) && (*(int *)(lVar3 + 0x44) == piVar4[2])) {
        FUN_1457e9f88(param_1,0);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1441a6fca FUN_1441a6fca body=205 status=ok
// SIG undefined FUN_1441a6fca(void)

undefined8 FUN_1441a6fca(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined1 local_48 [24];
  longlong local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(int *)(param_1 + 0x18) == 0) {
    local_58 = *(undefined8 *)(param_1 + 8);
    local_50 = *(undefined4 *)(param_1 + 0x10);
    FUN_1448075d0(local_48);
    lVar1 = FUN_1441a615e(local_48);
    if (local_30 != 0) {
      FUN_1400020a8();
    }
    if (lVar1 == 0) {
      local_68 = *(undefined8 *)(param_1 + 8);
      local_60 = *(undefined4 *)(param_1 + 0x10);
      FUN_1448075d0(local_48);
      lVar1 = FUN_140fa5e12(local_48);
      if (local_30 != 0) {
        FUN_1400020a8();
      }
      if ((lVar1 == 0) || (*(char *)(lVar1 + 0x851) == '\x01')) {
        uVar2 = 1;
        goto LAB_1441a7023;
      }
    }
  }
  uVar2 = 0;
LAB_1441a7023:
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441a7098 FUN_1441a7098 body=258 status=ok
// SIG undefined FUN_1441a7098(void)

void FUN_1441a7098(longlong param_1)

{
  char cVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 auStack_58 [40];
  undefined1 local_30 [4];
  undefined8 local_2c;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_143df5df6();
  if (*(longlong *)(param_1 + 200) == 0) {
    piVar2 = (int *)&DAT_14c948618;
  }
  else {
    piVar2 = (int *)(*(longlong *)(param_1 + 200) + 8);
  }
  if (*piVar2 != 0) {
    cVar1 = FUN_148d7d5aa(param_1);
    if (cVar1 != '\0') {
      lVar3 = FUN_140c05e56(param_1);
      if (lVar3 != 0) {
        lVar4 = FUN_1411cfb7f();
        cVar1 = FUN_140114204(lVar4 + 0x80);
        if (cVar1 != '\0') {
          local_30[0] = 1;
          local_24 = 1;
          local_2c = DAT_14cb7c588;
          lVar3 = FUN_140149a73(lVar3,0);
          if (lVar3 != 0) {
            FUN_140bc53f1(lVar4 + 0x80,local_30,lVar3,0);
          }
        }
      }
    }
    lVar3 = FUN_14133cf88(param_1);
    if ((lVar3 != 0) && (*(char *)(lVar3 + 0x78) == '\x01')) {
      uVar5 = FUN_140c05e56(param_1);
      FUN_1441204ad(1,uVar5);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441a719c FUN_1441a719c body=91 status=ok
// SIG undefined FUN_1441a719c(void)

void FUN_1441a719c(longlong param_1)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (((*(char *)(param_1 + 0x1b0) == '\0') && (*(longlong *)(param_1 + 0xb8) != 0)) &&
     (*(int *)(*(longlong *)(param_1 + 0xb8) + 8) != 0)) {
    local_18 = 0;
    uStack_10 = 0;
    FUN_1415e0a78();
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441a71f8 FUN_1441a71f8 body=881 status=ok
// SIG undefined FUN_1441a71f8(void)

void FUN_1441a71f8(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong lVar8;
  int iVar9;
  bool bVar10;
  undefined1 auStack_e8 [32];
  undefined2 *local_c8;
  undefined8 *local_c0;
  int local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined2 local_90 [2];
  undefined4 local_8c;
  undefined8 local_88;
  ulonglong uStack_80;
  longlong local_70;
  byte local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_148d7d8e2();
  lVar5 = *(longlong *)(param_1 + 200);
  if (lVar5 == 0) {
    local_98 = DAT_14c948620;
    local_b0 = DAT_14c948618;
  }
  else {
    local_98 = *(undefined4 *)(lVar5 + 0x10);
    local_b0 = *(undefined8 *)(lVar5 + 8);
  }
  local_a8 = local_98;
  local_a0 = local_b0;
  FUN_1448075d0(&local_88);
  lVar5 = FUN_140fa5e12(&local_88);
  if (local_70 != 0) {
    FUN_1400020a8();
  }
  cVar3 = '\x01';
  if ((lVar5 != 0) && (*(char *)(lVar5 + 0x79a) == '\x01')) {
    cVar3 = *(char *)(lVar5 + 0x79b);
  }
  if (*(char *)(param_1 + 0xdc) == '\0') {
    local_88 = 0;
    uStack_80 = 0;
    FUN_1415e0a78(param_1);
  }
  else if ((cVar3 != '\0') && (lVar5 = FUN_140c05e56(param_1), lVar5 != 0)) {
    uVar1 = *(uint *)(lVar5 + 0xc);
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar5 = 0;
    }
    iVar4 = *(int *)(lVar5 + 0x10);
    if (iVar4 == 0) {
      LOCK();
      iVar4 = DAT_14c964868 + 1;
      UNLOCK();
      iVar9 = DAT_14c964868 + 1;
      bVar10 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar4;
      if (bVar10) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar9);
      }
      LOCK();
      iVar4 = *(int *)(lVar5 + 0x10);
      bVar10 = iVar4 == 0;
      if (bVar10) {
        *(int *)(lVar5 + 0x10) = iVar9;
        iVar4 = 0;
      }
      UNLOCK();
      if (bVar10) {
        iVar4 = iVar9;
      }
      if (iVar4 == 0) goto LAB_1441a74bb;
    }
    if ((((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) &&
        (plVar6 = (longlong *)
                  ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
        plVar6 != (longlong *)0x0)) &&
       (((int)plVar6[2] == iVar4 && ((*(uint *)(plVar6 + 1) & 0x10200000) == 0)))) {
      if ((*(uint *)(plVar6 + 1) & 0x10200000) == 0) {
        lVar5 = *plVar6;
      }
      else {
        lVar5 = 0;
      }
      if (*(longlong *)(lVar5 + 0x1f0) == 0) {
        puVar7 = (undefined8 *)(lVar5 + 0x458);
      }
      else {
        puVar7 = (undefined8 *)(*(longlong *)(lVar5 + 0x1f0) + 0xf0);
      }
      uVar2 = *puVar7;
      local_c0 = (undefined8 *)0x0;
      local_b8 = 0;
      FUN_1446efa72(&local_c0,0,3,0x10);
      local_b8 = 3;
      *local_c0 = &PTR_LAB_14a1c8830;
      LOCK();
      UNLOCK();
      lVar8 = DAT_14c758608 + 1;
      lVar5 = DAT_14c758608 + 1;
      if (lVar8 == 0) {
        LOCK();
        UNLOCK();
        lVar8 = DAT_14c758608 + 2;
        lVar5 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar5;
      local_c0[2] = lVar8;
      *local_c0 = &PTR_FUN_14b97d990;
      local_c0[3] = CONCAT44(iVar4,uVar1);
      local_c0[4] = param_3;
      local_88 = 0;
      uStack_80 = uStack_80 & 0xffffffff00000000;
      FUN_14487d8d8(&local_88,&local_c0);
      local_48 = 1;
      local_c8 = local_90;
      local_90[0] = 0;
      local_8c = 0xbf800000;
      FUN_1406f4044(uVar2,param_1 + 0x1a8,&local_88,0x800000);
      (*(code *)(&PTR_LAB_14a1c87a0)[local_48])(&local_88);
      if (local_b8 != 0) {
        if (local_c0 == (undefined8 *)0x0) goto LAB_1441a74bb;
        (**(code **)*local_c0)(local_c0,0);
        FUN_1446efa72(&local_c0,0,0,0x10);
        local_b8 = 0;
      }
      if (local_c0 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
  }
LAB_1441a74bb:
  if ((local_38 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1441a756a FUN_1441a756a body=335 status=ok
// SIG undefined FUN_1441a756a(void)

void FUN_1441a756a(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_50;
  undefined1 local_48 [24];
  longlong local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar2 = *(longlong *)(param_1 + 200);
  if (lVar2 == 0) {
    local_50 = DAT_14c948620;
    local_58 = DAT_14c948618;
  }
  else {
    local_50 = *(undefined4 *)(lVar2 + 0x10);
    local_58 = *(undefined8 *)(lVar2 + 8);
  }
  FUN_1448075d0(local_48);
  lVar2 = FUN_140fa5e12(local_48);
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if ((lVar2 == 0) || (*(char *)(lVar2 + 0x850) != '\x01')) {
    FUN_143df628a(param_1);
  }
  else {
    lVar2 = FUN_14133cf88(param_1);
    *(undefined1 *)(param_1 + 0x1b1) = 1;
    *(undefined8 *)(param_1 + 0x1b4) = local_58;
    *(undefined4 *)(param_1 + 0x1bc) = local_50;
    if (lVar2 == 0) {
      iVar1 = 0;
      iVar4 = 0;
      iVar6 = 0;
    }
    else {
      piVar5 = &DAT_14c9485f0;
      if (*(int **)(lVar2 + 8) != (int *)0x0) {
        piVar5 = *(int **)(lVar2 + 8);
      }
      piVar3 = (int *)&DAT_14c948618;
      if (((*piVar5 != 0) && (iVar6 = piVar5[1], iVar6 != 0)) && (*piVar5 != DAT_14c948000)) {
        if ((iVar6 < 2) && (piVar5[9] < 1)) {
          piVar5 = piVar5 + 2;
        }
        else {
          piVar5 = *(int **)(piVar5 + 6);
        }
        if (0 < iVar6) {
          piVar3 = piVar5;
        }
      }
      iVar6 = *piVar3;
      iVar4 = piVar3[1];
      iVar1 = piVar3[2];
    }
    *(int *)(param_1 + 0x1c0) = iVar6;
    *(int *)(param_1 + 0x1c4) = iVar4;
    *(int *)(param_1 + 0x1c8) = iVar1;
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441a76ba FUN_1441a76ba body=1094 status=ok
// SIG undefined FUN_1441a76ba(void)

void FUN_1441a76ba(longlong *param_1)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  int *piVar9;
  int *piVar10;
  int iVar11;
  longlong *plVar12;
  int iVar13;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  longlong *local_88;
  longlong *plStack_80;
  longlong *local_70;
  longlong *local_68;
  longlong local_60;
  int local_58;
  undefined8 local_50;
  longlong local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(char *)((longlong)param_1 + 0x1b1) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x1b1) = 0;
    local_98 = *(undefined8 *)((longlong)param_1 + 0x1b4);
    local_90 = *(undefined4 *)((longlong)param_1 + 0x1bc);
    FUN_1448075d0(&local_60);
    plVar4 = (longlong *)FUN_14060eaf6(&local_60);
    if (local_48 != 0) {
      FUN_1400020a8();
    }
    local_a8 = param_1[0x38];
    local_a0 = (undefined4)param_1[0x39];
    FUN_1448075d0(&local_60);
    if (DAT_14cbcdc38 == 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = FUN_144837462(DAT_14cbcdc38,&local_60);
    }
    if (local_48 != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)((longlong)param_1 + 0x1b4) = 0;
    *(undefined8 *)((longlong)param_1 + 0x1bc) = 0;
    *(undefined8 *)((longlong)param_1 + 0x1c4) = 0;
    if (((((plVar4 != (longlong *)0x0) && ((int)param_1[0x16] != 0)) &&
         (uVar1 = *(uint *)((longlong)param_1 + 0xac), -1 < (int)uVar1)) &&
        ((((int)uVar1 < DAT_14c9647dc &&
          (plVar12 = (longlong *)
                     ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
          plVar12 != (longlong *)0x0)) &&
         (((int)plVar12[2] == (int)param_1[0x16] &&
          (((*(uint *)(plVar12 + 1) & 0x10200000) == 0 && ((longlong *)*plVar12 != (longlong *)0x0))
          )))))) && (lVar6 = (**(code **)(*(longlong *)*plVar12 + 0x2b0))(), lVar6 != 0)) {
      plVar12 = (longlong *)(**(code **)(*plVar4 + 0x48))(plVar4);
      local_60 = *plVar12;
      local_58 = (int)plVar12[1];
      local_50 = 0;
      if (((local_58 - 1U < 0xfffffffe && local_60 != 0) &&
          (lVar6 = FUN_140c05e56(param_1), lVar6 != 0)) && (*(longlong *)(lVar6 + 0x178) != 0)) {
        lVar7 = FUN_14041aabe();
        lVar6 = *(longlong *)(lVar6 + 0x178);
        if (((lVar6 != 0) && (lVar7 != 0)) &&
           ((((lVar8 = *(longlong *)(lVar6 + 0x10), lVar8 != 0 &&
              ((*(int *)(lVar7 + 0x38) <= *(int *)(lVar8 + 0x38) &&
               (*(longlong *)(*(longlong *)(lVar8 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
                lVar7 + 0x30)))) && (*(longlong *)(lVar6 + 0x488) != 0)) &&
            (lVar6 = FUN_1401b2ade(), lVar6 != 0)))) {
          FUN_14612d492(&local_70);
          if (local_70 != (longlong *)0x0) {
            lVar7 = (**(code **)(*local_70 + 8))(local_70);
            lVar8 = FUN_1465e4892();
            plVar12 = local_68;
            if (((lVar8 != 0) && (*(int *)(lVar8 + 0x38) <= *(int *)(lVar7 + 0x38))) &&
               (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) ==
                lVar8 + 0x30)) {
              piVar9 = (int *)plVar4[1];
              if (piVar9 == (int *)0x0) {
                piVar9 = &DAT_14c9485f0;
              }
              lVar7 = DAT_14c948618;
              iVar13 = DAT_14c948620;
              if (((*piVar9 != 0) && (iVar11 = piVar9[1], iVar11 != 0)) &&
                 (*piVar9 != DAT_14c948000)) {
                if ((iVar11 < 2) && (piVar9[9] < 1)) {
                  plVar4 = (longlong *)(piVar9 + 2);
                }
                else {
                  plVar4 = *(longlong **)(piVar9 + 6);
                }
                if (0 < iVar11) {
                  lVar7 = *plVar4;
                  iVar13 = (int)plVar4[1];
                }
              }
              *(int *)(local_70 + 2) = iVar13;
              local_70[1] = lVar7;
              if (lVar5 == 0) {
                iVar3 = 0;
                iVar11 = 0;
                iVar13 = 0;
              }
              else {
                piVar9 = &DAT_14c9485f0;
                if (*(int **)(lVar5 + 8) != (int *)0x0) {
                  piVar9 = *(int **)(lVar5 + 8);
                }
                piVar10 = (int *)&DAT_14c948618;
                if (((*piVar9 != 0) && (iVar13 = piVar9[1], iVar13 != 0)) &&
                   (*piVar9 != DAT_14c948000)) {
                  if ((iVar13 < 2) && (piVar9[9] < 1)) {
                    piVar9 = piVar9 + 2;
                  }
                  else {
                    piVar9 = *(int **)(piVar9 + 6);
                  }
                  if (0 < iVar13) {
                    piVar10 = piVar9;
                  }
                }
                iVar13 = *piVar10;
                iVar11 = piVar10[1];
                iVar3 = piVar10[2];
              }
              *(int *)(local_70 + 3) = iVar13;
              *(int *)((longlong)local_70 + 0x1c) = iVar11;
              *(int *)(local_70 + 4) = iVar3;
              *(undefined1 *)((longlong)local_70 + 0x14) = 1;
              local_88 = local_70;
              plStack_80 = local_68;
              if (local_68 == (longlong *)0x0) {
                FUN_1415e0a78(param_1,&local_88);
              }
              else {
                LOCK();
                *(int *)(local_68 + 1) = (int)local_68[1] + 1;
                UNLOCK();
                FUN_1415e0a78(param_1);
                if (plVar12 != (longlong *)0x0) {
                  LOCK();
                  plVar4 = plVar12 + 1;
                  *(int *)plVar4 = (int)*plVar4 + -1;
                  UNLOCK();
                  if ((int)*plVar4 == 0) {
                    (**(code **)*plVar12)(plVar12);
                    LOCK();
                    piVar9 = (int *)((longlong)plVar12 + 0xc);
                    *piVar9 = *piVar9 + -1;
                    UNLOCK();
                    if (*piVar9 == 0) {
                      (**(code **)(*plVar12 + 0x10))(plVar12);
                    }
                  }
                }
              }
              cVar2 = (**(code **)(*param_1 + 0x58))(param_1,&local_60,lVar6,1);
              if (cVar2 == '\0') {
                local_88 = (longlong *)0x0;
                plStack_80 = (longlong *)0x0;
                FUN_1415e0a78(param_1);
              }
            }
          }
          if (local_68 != (longlong *)0x0) {
            LOCK();
            plVar4 = local_68 + 1;
            *(int *)plVar4 = (int)*plVar4 + -1;
            UNLOCK();
            if ((int)*plVar4 == 0) {
              (**(code **)*local_68)(local_68);
              LOCK();
              piVar9 = (int *)((longlong)local_68 + 0xc);
              *piVar9 = *piVar9 + -1;
              UNLOCK();
              if (*piVar9 == 0) {
                (**(code **)(*local_68 + 0x10))(local_68);
              }
            }
          }
        }
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1441a7b02 FUN_1441a7b02 body=791 status=ok
// SIG undefined FUN_1441a7b02(void)

ulonglong FUN_1441a7b02(longlong param_1,longlong *param_2,ulonglong param_3,char param_4)

{
  int *piVar1;
  undefined1 uVar2;
  longlong lVar3;
  int iVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined4 uVar10;
  longlong *plVar11;
  undefined4 uVar12;
  longlong *plVar13;
  longlong *plVar14;
  undefined4 uVar15;
  bool bVar16;
  undefined1 auStack_b8 [32];
  ulonglong local_98;
  ulonglong local_90;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  longlong local_70;
  undefined4 local_68;
  undefined8 local_60;
  longlong local_58;
  longlong *plStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar2 = *(undefined1 *)(param_1 + 0x1b0);
  *(undefined1 *)(param_1 + 0x1b0) = 1;
  FUN_140c05e56();
  FUN_1410d53f0(&local_58);
  if (plStack_50 != (longlong *)0x0) {
    iVar6 = (int)plStack_50[1];
    do {
      if (iVar6 == 0) {
        plVar14 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar4 = (int)plStack_50[1];
      bVar16 = iVar6 == iVar4;
      if (bVar16) {
        *(int *)(plStack_50 + 1) = iVar6 + 1;
        iVar4 = iVar6;
      }
      iVar6 = iVar4;
      UNLOCK();
      plVar14 = plStack_50;
    } while (!bVar16);
    LOCK();
    piVar1 = (int *)((longlong)plStack_50 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plStack_50 + 0x10))();
    }
    lVar3 = local_58;
    if (plVar14 != (longlong *)0x0) {
      bVar5 = 0;
      if (((local_58 != 0) && (*param_2 != 0)) &&
         (local_90 = param_3, (int)param_2[1] - 1U < 0xfffffffe)) {
        if (((((*(int *)(param_1 + 0xa8) != 0) &&
              (uVar7 = *(uint *)(param_1 + 0xa4), -1 < (int)uVar7)) &&
             (((int)uVar7 < DAT_14c9647dc &&
              ((plVar13 = (longlong *)
                          ((ulonglong)((uVar7 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8)),
               plVar13 != (longlong *)0x0 && ((int)plVar13[2] == *(int *)(param_1 + 0xa8))))))) &&
            ((*(uint *)(plVar13 + 1) & 0x10200000) == 0)) &&
           (plVar13 = (longlong *)*plVar13, plVar13 != (longlong *)0x0)) {
          lVar8 = FUN_1403ca142();
          if (((*(int *)(lVar8 + 0x38) <= *(int *)(plVar13[2] + 0x38)) &&
              (*(longlong *)
                (*(longlong *)(plVar13[2] + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) ==
               lVar8 + 0x30)) && (bVar5 = (**(code **)(*plVar13 + 0x498))(), bVar5 < 6)) {
            local_58 = 0;
            plStack_50 = (longlong *)0x0;
            local_70 = *param_2;
            local_68 = (undefined4)param_2[1];
            local_60 = 0;
            FUN_14413e254(plVar13,&local_70,&local_58,0);
            if (local_58 != 0) {
              FUN_1400020a8();
            }
            bVar5 = 1;
            param_3 = CONCAT71((int7)((ulonglong)plVar13 >> 8),1);
            goto LAB_1441a7d0e;
          }
        }
        plVar13 = *(longlong **)(param_1 + 0xb8);
        if (plVar13 == (longlong *)0x0) {
          plVar13 = *(longlong **)(param_1 + 200);
          uVar10 = 0;
          uVar12 = 0;
          uVar15 = 0;
          bVar16 = false;
          if (plVar13 != (longlong *)0x0) goto LAB_1441a7d60;
        }
        else {
LAB_1441a7d60:
          lVar8 = (**(code **)(*plVar13 + 8))();
          lVar9 = FUN_1465e4892();
          if (lVar9 == 0) {
            uVar10 = 0;
            uVar12 = 0;
            uVar15 = 0;
            bVar16 = false;
          }
          else {
            uVar10 = 0;
            uVar12 = 0;
            uVar15 = 0;
            bVar16 = false;
            if ((*(int *)(lVar9 + 0x38) <= *(int *)(lVar8 + 0x38)) &&
               (uVar10 = 0,
               *(longlong *)(*(longlong *)(lVar8 + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) ==
               lVar9 + 0x30)) {
              bVar16 = (int)plVar13[3] != 0;
              plVar11 = plVar13 + 1;
              if (bVar16) {
                plVar11 = plVar13 + 3;
              }
              uVar15 = (undefined4)plVar13[(ulonglong)bVar16 * 2 + 1];
              uVar12 = *(undefined4 *)((longlong)plVar11 + 4);
              uVar10 = (undefined4)plVar11[1];
            }
          }
        }
        if (param_4 == '\0') {
          local_98 = local_90;
          local_88 = uVar15;
          local_84 = uVar12;
          local_80 = uVar10;
          uVar7 = FUN_148e0aeee(lVar3,param_2,bVar16);
        }
        else {
          local_98 = local_90;
          local_7c = uVar15;
          local_78 = uVar12;
          local_74 = uVar10;
          uVar7 = FUN_14423175a(lVar3,param_2);
        }
        param_3 = (ulonglong)uVar7;
        bVar5 = 1;
      }
LAB_1441a7d0e:
      LOCK();
      plVar13 = plVar14 + 1;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)*plVar13 == 0) {
        (**(code **)*plVar14)(plVar14);
        LOCK();
        piVar1 = (int *)((longlong)plVar14 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar14 + 0x10))(plVar14);
        }
      }
      goto LAB_1441a7d2b;
    }
  }
  bVar5 = 0;
LAB_1441a7d2b:
  *(undefined1 *)(param_1 + 0x1b0) = uVar2;
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT71((int7)(param_3 >> 8),(byte)param_3 & bVar5) & 0xffffffff;
}



// FUNCTION 1441a7e1a FUN_1441a7e1a body=623 status=ok
// SIG undefined FUN_1441a7e1a(void)

ulonglong FUN_1441a7e1a(longlong param_1,byte param_2,undefined8 param_3,char param_4)

{
  int *piVar1;
  double dVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  ulonglong unaff_R12;
  longlong *plVar10;
  bool bVar11;
  bool bVar12;
  float fVar13;
  undefined1 auStack_d8 [32];
  undefined4 *local_b8;
  undefined8 local_b0;
  byte local_a8;
  ulonglong local_a0;
  longlong local_98;
  longlong *local_90;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  uVar6 = FUN_140c05e56();
  FUN_1410d53f0(&local_98,uVar6);
  if (local_90 != (longlong *)0x0) {
    iVar4 = (int)local_90[1];
    do {
      if (iVar4 == 0) {
        plVar9 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar3 = (int)local_90[1];
      bVar11 = iVar4 == iVar3;
      if (bVar11) {
        *(int *)(local_90 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
      plVar9 = local_90;
    } while (!bVar11);
    LOCK();
    piVar1 = (int *)((longlong)local_90 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_90 + 0x10))();
    }
    if (plVar9 != (longlong *)0x0) {
      bVar11 = local_98 != 0;
      if (bVar11) {
        fVar13 = -1.0;
        if (((param_2 != 0) && (*(char *)(param_1 + 0xdc) == '\x01')) &&
           (lVar7 = FUN_140c05e56(param_1), lVar7 != 0)) {
          fVar13 = *(float *)(param_1 + 0xd8);
          dVar2 = *(double *)(lVar7 + 0x6d0);
          lVar7 = FUN_140cb9f34();
          fVar13 = *(float *)(lVar7 + 0x24) - (float)(dVar2 - (double)fVar13);
          if (fVar13 <= 0.0) {
            fVar13 = 0.0;
          }
        }
        plVar10 = *(longlong **)(param_1 + 200);
        if (plVar10 == (longlong *)0x0) {
          plVar10 = *(longlong **)(param_1 + 0xb8);
          local_74 = 0;
          local_78 = 0;
          local_7c = 0;
          uVar5 = 0;
          if (plVar10 != (longlong *)0x0) goto LAB_1441a7f8d;
        }
        else {
LAB_1441a7f8d:
          local_a0 = (**(code **)(*plVar10 + 8))(plVar10);
          lVar7 = FUN_1465e4892();
          local_74 = 0;
          local_78 = 0;
          local_7c = 0;
          uVar5 = 0;
          if (lVar7 != 0) {
            local_74 = 0;
            if ((*(int *)(lVar7 + 0x38) <= *(int *)(local_a0 + 0x38)) &&
               (local_74 = 0,
               *(longlong *)(*(longlong *)(local_a0 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8)
               == lVar7 + 0x30)) {
              bVar12 = (int)plVar10[3] != 0;
              uVar5 = (uint)bVar12;
              plVar8 = plVar10 + 1;
              if (bVar12) {
                plVar8 = plVar10 + 3;
              }
              local_7c = (undefined4)plVar10[(ulonglong)bVar12 * 2 + 1];
              local_78 = *(undefined4 *)((longlong)plVar8 + 4);
              local_74 = (undefined4)plVar8[1];
            }
          }
        }
        local_a0 = CONCAT44(local_a0._4_4_,uVar5);
        if (param_4 == '\0') {
          local_a8 = param_2 | 2;
        }
        else {
          lVar7 = FUN_1406d51c0();
          fVar13 = *(float *)(lVar7 + 0x2c8);
          local_a8 = 4;
        }
        FUN_148d7d946(param_1,&local_98);
        local_b8 = &local_7c;
        local_b0 = param_3;
        uVar5 = FUN_144231904(local_98,&local_98,local_a0 & 0xffffffff,fVar13);
        unaff_R12 = (ulonglong)uVar5;
      }
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
      goto LAB_1441a7ecd;
    }
  }
  bVar11 = false;
LAB_1441a7ecd:
  if ((local_70 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT71((int7)(unaff_R12 >> 8),(byte)unaff_R12 & bVar11) & 0xffffffff;
}



// FUNCTION 1441a808a FUN_1441a808a body=365 status=ok
// SIG undefined FUN_1441a808a(void)

void FUN_1441a808a(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  undefined8 uVar7;
  bool bVar8;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined4 local_68;
  longlong local_60;
  int local_58;
  undefined8 local_50;
  longlong local_48;
  longlong *local_40;
  longlong local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_60 = 0;
  local_58 = 0x6000;
  local_50 = 0;
  lVar3 = *(longlong *)(param_1 + 200);
  if (lVar3 == 0) {
    local_68 = DAT_14c948620;
    local_70 = DAT_14c948618;
  }
  else {
    local_68 = *(undefined4 *)(lVar3 + 0x10);
    local_70 = *(undefined8 *)(lVar3 + 8);
  }
  FUN_1448075d0(&local_48,&local_70);
  plVar6 = (longlong *)FUN_14060eaf6(&local_48);
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if (plVar6 != (longlong *)0x0) {
    plVar6 = (longlong *)(**(code **)(*plVar6 + 0x48))(plVar6);
    if (*plVar6 != 0 || (int)plVar6[1] != 0x6000) {
      local_50 = 0;
      local_60 = *plVar6;
      local_58 = (int)plVar6[1];
    }
  }
  uVar7 = FUN_140c05e56(param_1);
  FUN_1410d53f0(&local_48,uVar7);
  if (local_40 != (longlong *)0x0) {
    iVar5 = (int)local_40[1];
    do {
      if (iVar5 == 0) {
        plVar6 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar4 = (int)local_40[1];
      bVar8 = iVar5 == iVar4;
      if (bVar8) {
        *(int *)(local_40 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
      plVar6 = local_40;
    } while (!bVar8);
    LOCK();
    piVar1 = (int *)((longlong)local_40 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_40 + 0x10))();
    }
    if (plVar6 != (longlong *)0x0) {
      if (local_48 != 0) {
        FUN_148e0c16e(local_48,&local_60);
      }
      LOCK();
      plVar2 = plVar6 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
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
  }
  if ((local_20 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1441a81f8 FUN_1441a81f8 body=362 status=ok
// SIG undefined FUN_1441a81f8(void)

void FUN_1441a81f8(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_a8 [32];
  longlong local_88;
  undefined4 local_80;
  longlong *local_78;
  longlong *local_70;
  undefined8 local_68;
  longlong local_60;
  undefined4 local_58;
  longlong local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_14612d492(&local_78);
  if (local_78 != (longlong *)0x0) {
    lVar3 = (**(code **)(*local_78 + 8))(local_78);
    lVar4 = FUN_1465e4892();
    if (((lVar4 != 0) && (*(int *)(lVar4 + 0x38) <= *(int *)(lVar3 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
        lVar4 + 0x30)) {
      local_88 = *param_2;
      local_80 = (undefined4)param_2[1];
      FUN_1448075d0(&local_60);
      if (DAT_14cbcdc38 == 0) {
        if (local_48 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        lVar3 = FUN_144837462(DAT_14cbcdc38,&local_60);
        if (local_48 != 0) {
          FUN_1400020a8();
        }
        if (lVar3 != 0) {
          local_68 = *(undefined8 *)(lVar3 + 0x18);
          FUN_1401533ba(&local_60,&local_68,1);
          *(undefined4 *)(local_78 + 2) = local_58;
          local_78[1] = local_60;
          *(int *)(local_78 + 4) = (int)param_2[1];
          local_78[3] = *param_2;
          FUN_143df6318(param_1,&local_78,param_3);
        }
      }
    }
  }
  if (local_70 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_70 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_70)(local_70);
      LOCK();
      piVar2 = (int *)((longlong)local_70 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_70 + 0x10))(local_70);
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441a8364 FUN_1441a8364 body=608 status=ok
// SIG undefined FUN_1441a8364(void)

longlong * FUN_1441a8364(longlong param_1,longlong *param_2)

{
  int *piVar1;
  ulonglong uVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 *local_a8;
  undefined8 uStack_a0;
  longlong local_98;
  undefined8 uStack_90;
  longlong *local_88;
  longlong *local_80;
  longlong local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_98 = 0;
  uStack_90 = 0;
  FUN_1405f62be(0,&local_88);
  if (local_88 != (longlong *)0x0) {
    uVar4 = (**(code **)(*local_88 + 0xd0))();
    FUN_14189db46(&local_98,uVar4);
  }
  if (local_80 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_80 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*local_80)(local_80);
      LOCK();
      piVar1 = (int *)((longlong)local_80 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_80 + 0x10))(local_80);
      }
    }
  }
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FUN_14189db46(&local_98,*(longlong *)(param_1 + 0x90) + 0x68);
  }
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined4 *)(param_2 + 1) = 3;
  FUN_1446dd912(param_2,0);
  FUN_1446dd7a8(*param_2,3);
  lVar8 = local_98;
  local_a8 = (undefined8 *)0x0;
  uStack_a0 = 0;
  lVar5 = (longlong)(int)uStack_90;
  if (lVar5 != 0) {
    lVar9 = 0;
    do {
      local_b8 = *(undefined8 *)(lVar8 + lVar9);
      local_b0 = *(undefined4 *)(lVar8 + 8 + lVar9);
      FUN_1448075d0(&local_88,&local_b8);
      plVar6 = (longlong *)FUN_140fa5e12(&local_88);
      if (local_70 != 0) {
        FUN_1400020a8();
      }
      if (plVar6 != (longlong *)0x0) {
        uVar3 = (**(code **)(*plVar6 + 0x80))(plVar6);
        uVar2 = uStack_a0;
        if (uVar3 == 0xfffffffe) {
          lVar10 = (longlong)(int)uStack_a0;
          uVar3 = (int)uStack_a0 + 1;
          uStack_a0 = CONCAT44(uStack_a0._4_4_,uVar3);
          if (uStack_a0._4_4_ < uVar3) {
            FUN_1446dd912(&local_a8,uVar2 & 0xffffffff);
          }
          puVar7 = (undefined8 *)(lVar10 * 0xc + (longlong)local_a8);
        }
        else {
          if (((int)uVar3 < 0) || ((int)param_2[1] <= (int)uVar3)) goto LAB_1441a84f9;
          puVar7 = (undefined8 *)((ulonglong)uVar3 * 0xc + *param_2);
        }
        *(undefined4 *)(puVar7 + 1) = *(undefined4 *)((undefined8 *)(lVar8 + lVar9) + 1);
        *puVar7 = *(undefined8 *)(lVar8 + lVar9);
      }
LAB_1441a84f9:
      lVar9 = lVar9 + 0xc;
    } while (lVar5 * 0xc != lVar9);
    if ((longlong)(int)uStack_a0 != 0) {
      lVar8 = *param_2;
      puVar7 = local_a8;
      do {
        if ((longlong)(int)param_2[1] != 0) {
          lVar5 = 0;
          do {
            if (*(int *)(lVar8 + lVar5) == 0) {
              *(undefined4 *)(lVar8 + 8 + lVar5) = *(undefined4 *)(puVar7 + 1);
              *(undefined8 *)(lVar8 + lVar5) = *puVar7;
              lVar8 = *param_2;
              break;
            }
            lVar5 = lVar5 + 0xc;
          } while ((longlong)(int)param_2[1] * 0xc != lVar5);
        }
        puVar7 = (undefined8 *)((longlong)puVar7 + 0xc);
      } while (puVar7 != (undefined8 *)((longlong)local_a8 + (longlong)(int)uStack_a0 * 0xc));
    }
    if (local_a8 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if (local_98 != 0) {
    FUN_1400020a8(local_98);
  }
  if ((local_60 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1441a85c6 FUN_1441a85c6 body=559 status=ok
// SIG undefined FUN_1441a85c6(void)

void FUN_1441a85c6(longlong param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  byte bVar9;
  ulonglong uVar10;
  longlong lVar11;
  bool bVar12;
  undefined1 auStack_88 [40];
  uint local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  uint local_54;
  undefined8 local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_14098d69c();
  uVar7 = *(uint *)(param_2 + 4);
  if (((int)uVar7 < 2 && *(int *)(param_2 + 0x24) < 1) || ((int)uVar7 < 3)) goto LAB_1441a862f;
  lVar11 = *(longlong *)(param_2 + 0x18);
  lVar5 = FUN_1406d51c0();
  if ((*(int *)(lVar5 + 0x168) == 0) ||
     ((*(int *)(lVar11 + -0xc + (ulonglong)uVar7 * 0xc) != *(int *)(lVar5 + 0x168) ||
      (*(int *)(lVar11 + (ulonglong)uVar7 * 0xc + -4) != *(int *)(lVar5 + 0x170)))))
  goto LAB_1441a862f;
  local_60 = local_60 & 0xffffff00;
  uStack_5c = 0;
  uStack_58 = 0;
  local_54 = 0;
  FUN_144976b9c(&local_60,*param_3);
  if ((local_60 & 0xff) == 3) {
    bVar12 = CONCAT44(uStack_58,uStack_5c) == 0;
LAB_1441a86a9:
    uVar7 = (uint)!bVar12;
  }
  else {
    uVar7 = local_54;
    if (((local_60 & 0xff) != 2) && (uVar7 = 0, (char)local_60 == '\x01')) {
      bVar12 = local_54 == 0;
      goto LAB_1441a86a9;
    }
  }
  local_48 = *(undefined4 *)(lVar11 + 0x20);
  local_50 = *(undefined8 *)(lVar11 + 0x18);
  iVar2 = *(int *)(param_1 + 0xdc);
  *(int *)(param_1 + 0xdc) = iVar2 + 1;
  lVar11 = (longlong)*(int *)(param_1 + 0xd0);
  if (lVar11 < 1) {
    *(int *)(param_1 + 0xdc) = iVar2;
  }
  else {
    plVar1 = (longlong *)(param_1 + 200);
    uVar10 = lVar11 + 1;
    lVar11 = lVar11 * 0x10 + -8;
    bVar9 = 0;
    do {
      if ((*(int *)(*plVar1 + lVar11) == 0) ||
         (plVar3 = *(longlong **)(*plVar1 + -8 + lVar11), plVar3 == (longlong *)0x0)) {
LAB_1441a8732:
        bVar9 = 1;
      }
      else {
        uStack_58 = local_48;
        local_60 = (uint)local_50;
        uStack_5c = (undefined4)((ulonglong)local_50 >> 0x20);
        cVar4 = (**(code **)(*plVar3 + 0x60))(plVar3,&local_60,uVar7);
        if (cVar4 == '\0') goto LAB_1441a8732;
      }
      uVar10 = uVar10 - 1;
      lVar11 = lVar11 + -0x10;
    } while (1 < uVar10);
    iVar2 = *(int *)(param_1 + 0xdc);
    *(int *)(param_1 + 0xdc) = iVar2 + -1;
    if ((bool)(bVar9 & iVar2 < 2)) {
      iVar2 = *(int *)(param_1 + 0xd0);
      iVar6 = iVar2;
      if (0 < iVar2) {
        iVar8 = 0;
        do {
          if (((*(int *)(*plVar1 + 8 + (longlong)iVar8 * 0x10) == 0) ||
              (plVar3 = *(longlong **)(*plVar1 + (longlong)iVar8 * 0x10), plVar3 == (longlong *)0x0)
              ) || (cVar4 = (**(code **)(*plVar3 + 0x28))(), cVar4 != '\0')) {
            FUN_14005b288(plVar1,iVar8);
            FUN_14005b248(plVar1);
          }
          else {
            iVar8 = iVar8 + 1;
          }
          iVar6 = *(int *)(param_1 + 0xd0);
        } while (iVar8 < iVar6);
      }
      iVar8 = 2;
      if (2 < iVar6 * 2) {
        iVar8 = iVar6 * 2;
      }
      *(int *)(param_1 + 0xd8) = iVar8;
      if ((iVar8 < iVar2) && (*(int *)(param_1 + 0xd4) != iVar6)) {
        FUN_14045812c(plVar1);
      }
    }
  }
LAB_1441a862f:
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1441a87f6 FUN_1441a87f6 body=2651 status=ok
// SIG undefined FUN_1441a87f6(void)

void FUN_1441a87f6(longlong *param_1)

{
  float fVar1;
  bool bVar2;
  double dVar3;
  double dVar4;
  undefined8 *puVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong *plVar13;
  double *pdVar14;
  longlong *plVar15;
  longlong *plVar16;
  int *piVar17;
  int *piVar18;
  undefined4 *puVar19;
  longlong lVar20;
  ulonglong uVar21;
  bool bVar22;
  bool bVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  double dVar26;
  double dVar27;
  undefined1 auStack_1a8 [32];
  undefined4 local_188;
  undefined4 local_180;
  undefined4 local_178;
  undefined8 local_170;
  wchar_t *local_168;
  undefined1 *local_160;
  undefined1 *local_158;
  char *local_150;
  code *local_148;
  code *local_140;
  longlong *local_138;
  longlong local_130;
  longlong *local_128;
  longlong *local_120;
  undefined8 local_118;
  undefined4 local_110;
  longlong local_108;
  undefined4 local_100;
  longlong local_f8;
  undefined4 local_f0;
  char local_e8;
  undefined1 uStack_e7;
  undefined2 uStack_e6;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  ulonglong local_d8;
  longlong lStack_d0;
  undefined4 local_c8;
  longlong local_c0;
  undefined8 uStack_b8;
  undefined8 local_a8;
  undefined4 local_a0 [4];
  undefined4 *local_90;
  int local_84;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  plVar15 = param_1 + -0x15;
  lVar9 = (**(code **)(*param_1 + 0x48))();
  local_138 = plVar15;
  if (((lVar9 != 0) && (lVar9 = FUN_1400f6e0c(lVar9), lVar9 != 0)) &&
     (lVar9 = *(longlong *)(lVar9 + 0xc0), lVar9 != 0)) {
    uVar10 = FUN_143df69ba(plVar15);
    lVar9 = FUN_1406a2138(lVar9,uVar10);
    if ((lVar9 != 0) && (lVar9 + 0x3c0 != 0)) {
      FUN_1406f1bc8(lVar9 + 0x3c0,&local_e8);
      if (local_e8 == '\x01') {
        FUN_1447a97f4(&local_a8,&local_d8);
        if (0 < local_a8._4_4_) {
          lVar9 = 0;
          uVar21 = 0;
          iVar7 = local_a8._4_4_;
          iVar8 = DAT_14c948000;
          do {
            bVar22 = (int)local_a8 != 0;
            bVar23 = (int)local_a8 != iVar8;
            piVar17 = &DAT_14c948620;
            piVar18 = (int *)&DAT_14c948618;
            if (bVar23 && bVar22) {
              puVar19 = local_a0;
              if (0 < local_84) {
                puVar19 = local_90;
              }
              if (1 < iVar7) {
                puVar19 = local_90;
              }
              piVar17 = (int *)((longlong)puVar19 + lVar9 + 8);
              piVar18 = (int *)((longlong)puVar19 + lVar9);
            }
            if ((*piVar18 == DAT_14cb7beb0) && (*piVar17 == DAT_14cb7beb8)) {
LAB_1441a9024:
              FUN_1402b5374(&local_a8,uVar21 & 0xffffffff,0);
              iVar7 = local_a8._4_4_;
              iVar8 = DAT_14c948000;
            }
            else {
              piVar17 = &DAT_14c948620;
              piVar18 = (int *)&DAT_14c948618;
              if (bVar23 && bVar22) {
                puVar19 = local_a0;
                if (0 < local_84) {
                  puVar19 = local_90;
                }
                if (1 < iVar7) {
                  puVar19 = local_90;
                }
                piVar17 = (int *)((longlong)puVar19 + lVar9 + 8);
                piVar18 = (int *)((longlong)puVar19 + lVar9);
              }
              if ((*piVar18 == DAT_14cb7bec8) && (*piVar17 == DAT_14cb7bed0)) goto LAB_1441a9024;
              piVar17 = &DAT_14c948620;
              piVar18 = (int *)&DAT_14c948618;
              if (bVar23 && bVar22) {
                puVar19 = local_a0;
                if (0 < local_84) {
                  puVar19 = local_90;
                }
                if (1 < iVar7) {
                  puVar19 = local_90;
                }
                piVar17 = (int *)((longlong)puVar19 + lVar9 + 8);
                piVar18 = (int *)((longlong)puVar19 + lVar9);
              }
              if ((*piVar18 == DAT_14cb7bee0) && (*piVar17 == DAT_14cb7bee8)) goto LAB_1441a9024;
              piVar17 = &DAT_14c948620;
              piVar18 = (int *)&DAT_14c948618;
              if (bVar23 && bVar22) {
                puVar19 = local_a0;
                if (0 < local_84) {
                  puVar19 = local_90;
                }
                if (1 < iVar7) {
                  puVar19 = local_90;
                }
                piVar17 = (int *)((longlong)puVar19 + lVar9 + 8);
                piVar18 = (int *)((longlong)puVar19 + lVar9);
              }
              if ((*piVar18 == DAT_14cb7bef8) && (*piVar17 == DAT_14cb7bf00)) goto LAB_1441a9024;
              piVar17 = &DAT_14c948620;
              piVar18 = (int *)&DAT_14c948618;
              if (bVar23 && bVar22) {
                puVar19 = local_a0;
                if (0 < local_84) {
                  puVar19 = local_90;
                }
                if (1 < iVar7) {
                  puVar19 = local_90;
                }
                piVar17 = (int *)((longlong)puVar19 + lVar9 + 8);
                piVar18 = (int *)((longlong)puVar19 + lVar9);
              }
              if ((*piVar18 == DAT_14cb7bf10) && (*piVar17 == DAT_14cb7bf18)) goto LAB_1441a9024;
            }
            uVar21 = uVar21 + 1;
            lVar9 = lVar9 + 0xc;
          } while ((longlong)uVar21 < (longlong)iVar7);
        }
        uVar21 = local_a8 & 0xffffffff;
        plVar15 = local_138;
        if (local_90 != (undefined4 *)0x0) {
          FUN_1400020a8();
          plVar15 = local_138;
        }
      }
      else {
        uVar21 = local_d8 & 0xffffffff;
        plVar15 = local_138;
      }
      goto LAB_1441a88ba;
    }
  }
  local_e8 = '\0';
  uStack_e7 = 0;
  uStack_e4 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  lStack_d0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  uVar21 = 0;
LAB_1441a88ba:
  iVar7 = FUN_140b7a4d8(uVar21,&local_e8);
  plVar16 = (longlong *)(DAT_14cbcd950 + (longlong)iVar7 * 0x50 + 0x38);
  if (DAT_14cbcd950 + (longlong)iVar7 * 0x50 == 0) {
    plVar16 = &DAT_14c948618;
  }
  if (iVar7 == -1) {
    plVar16 = &DAT_14c948618;
  }
  local_f8 = *plVar16;
  local_f0 = (undefined4)plVar16[1];
  local_a8 = *plVar16;
  local_a0[0] = (undefined4)plVar16[1];
  cVar6 = FUN_1405f604e(plVar15);
  if (cVar6 == '\0') {
    local_f0 = DAT_14c948620;
    local_f8 = DAT_14c948618;
  }
  *(undefined4 *)(param_1 + 2) = local_f0;
  param_1[1] = local_f8;
  if (local_c0 != 0) {
    FUN_1400020a8();
  }
  plVar16 = param_1 + 1;
  lVar9 = FUN_143df69ba(plVar15);
  if (lVar9 != 0) {
    lVar11 = *(longlong *)(lVar9 + 0x3d0);
    lVar9 = FUN_1447210f0(lVar9);
    local_130 = lVar11;
    if (lVar9 != 0 && lVar11 != 0) {
      if ((int)param_1[0xf] < 1) {
        *(undefined4 *)((longlong)param_1 + 0x1c) = DAT_14c948620;
        *(longlong *)((longlong)param_1 + 0x14) = DAT_14c948618;
        param_1[0x10] = 0xffffffff;
        param_1[0x13] = DAT_14c8464f0;
        lVar9 = DAT_14c8464e8;
        param_1[0x11] = DAT_14c8464e0;
        param_1[0x12] = lVar9;
        param_1[0x14] = 0;
        param_1[0x15] = 0;
        param_1[0x16] = 0x7fefffffffffffff;
        param_1[0x17] = 0x80000000;
      }
      else {
        local_120 = param_1 + 0x11;
        lVar11 = FUN_1406d51c0();
        fVar1 = *(float *)(lVar11 + 0x110);
        local_128 = param_1 + 0x14;
        iVar7 = 0;
        do {
          iVar8 = (int)param_1[0x10];
          *(int *)(param_1 + 0x10) = iVar8 + 1;
          if (((longlong)iVar8 < 0) || ((int)param_1[0xf] <= iVar8)) {
            *(int *)((longlong)param_1 + 0x1c) = (int)local_128[1];
            *(longlong *)((longlong)param_1 + 0x14) = *local_128;
            *(undefined4 *)((longlong)param_1 + 0x84) = 0;
            local_120[2] = DAT_14c8464f0;
            lVar9 = DAT_14c8464e8;
            *local_120 = DAT_14c8464e0;
            local_120[1] = lVar9;
            *local_128 = 0;
            local_128[1] = 0;
            param_1[0x16] = 0x7fefffffffffffff;
            param_1[0x17] = 0x80000000;
            *(undefined4 *)(param_1 + 0x10) = 0;
            lVar9 = *(longlong *)(local_130 + 0x1c8);
            if (lVar9 == 0) {
              plVar15 = &DAT_14c8464e0;
              uVar24 = (undefined4)DAT_14c8464f0;
              uVar25 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
            }
            else {
              uVar24 = (undefined4)*(undefined8 *)(lVar9 + 0x270);
              uVar25 = (undefined4)((ulonglong)*(undefined8 *)(lVar9 + 0x270) >> 0x20);
              plVar15 = (longlong *)(lVar9 + 0x260);
            }
            lVar9 = plVar15[1];
            param_1[0x11] = *plVar15;
            param_1[0x12] = lVar9;
            param_1[0x13] = CONCAT44(uVar25,uVar24);
            break;
          }
          lVar11 = param_1[0xe];
          lVar20 = (longlong)iVar8 * 0x58;
          local_a8 = *(longlong *)(lVar11 + lVar20);
          local_a0[0] = *(undefined4 *)(lVar11 + 8 + lVar20);
          FUN_1448075d0(&local_e8);
          lVar12 = FUN_140fa5e12(&local_e8);
          if (lStack_d0 != 0) {
            FUN_1400020a8();
          }
          plVar15 = (longlong *)(lVar11 + lVar20);
          if (lVar12 == 0) {
            iVar8 = 0;
LAB_1441a8a91:
            cVar6 = FUN_1401144ce(plVar15 + 4);
            if (cVar6 == '\0') {
              if ((longlong)(int)plVar15[3] != 0) {
                lVar11 = plVar15[2];
                lVar12 = 0;
                bVar22 = false;
                dVar26 = 1.79769313486232e+308;
                do {
                  dVar3 = *(double *)(lVar11 + 0x10 + lVar12) - (double)param_1[0x13];
                  dVar27 = *(double *)(lVar11 + lVar12) - (double)param_1[0x11];
                  dVar4 = *(double *)(lVar11 + 8 + lVar12) - (double)param_1[0x12];
                  dVar3 = dVar3 * dVar3 + dVar27 * dVar27 + dVar4 * dVar4;
                  bVar23 = dVar3 < dVar26;
                  bVar2 = dVar3 < (double)(fVar1 * fVar1);
                  if (!bVar2 || !bVar23) {
                    dVar3 = dVar26;
                  }
                  dVar26 = dVar3;
                  bVar22 = (bool)(bVar22 | (bVar2 && bVar23));
                  lVar12 = lVar12 + 0x18;
                } while ((longlong)(int)plVar15[3] * 0x18 != lVar12);
                if (bVar22) goto LAB_1441a8be6;
              }
            }
            else {
              plVar13 = (longlong *)FUN_140ec3c65(lVar9);
              if ((plVar13 != (longlong *)0x0) &&
                 (lVar11 = (**(code **)(*plVar13 + 0x68))(plVar13,plVar15 + 4), lVar11 != 0)) {
                if (DAT_14cac9ca8 == 0) {
                  local_e8 = '\"';
                  uStack_e7 = 0xf;
                  uStack_e6 = 0x4103;
                  uStack_e4 = 1;
                  local_140 = FUN_14081d0ea;
                  local_148 = FUN_14081d0ea;
                  local_158 = &LAB_1478c0a72;
                  local_160 = &LAB_1417b2375;
                  local_168 = L"Engine";
                  local_170 = 0x1000000000;
                  local_178 = 0x10000004;
                  local_180 = 8;
                  local_188 = 0x390;
                  local_150 = &local_e8;
                  FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
                }
                if (((*(int *)(DAT_14cac9ca8 + 0x38) <=
                      *(int *)(*(longlong *)(lVar11 + 0x10) + 0x38)) &&
                    (*(longlong *)
                      (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x30) +
                      (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) == DAT_14cac9ca8 + 0x30)) &&
                   (cVar6 = FUN_14064aef8(lVar11,local_130), cVar6 != '\0')) {
                  lVar11 = *(longlong *)(lVar11 + 0x1c8);
                  if (lVar11 == 0) {
                    uVar24 = (undefined4)DAT_14c8464f0;
                    uVar25 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
                    pdVar14 = (double *)&DAT_14c8464e0;
                  }
                  else {
                    uVar24 = (undefined4)*(undefined8 *)(lVar11 + 0x270);
                    uVar25 = (undefined4)((ulonglong)*(undefined8 *)(lVar11 + 0x270) >> 0x20);
                    pdVar14 = (double *)(lVar11 + 0x260);
                  }
                  dVar26 = (double)CONCAT44(uVar25,uVar24) - (double)param_1[0x13];
                  dVar26 = dVar26 * dVar26 +
                           (*pdVar14 - (double)param_1[0x11]) * (*pdVar14 - (double)param_1[0x11]) +
                           (pdVar14[1] - (double)param_1[0x12]) *
                           (pdVar14[1] - (double)param_1[0x12]);
                  if (dVar26 < 1.79769313486232e+308) goto LAB_1441a8be6;
                }
              }
            }
          }
          else {
            iVar8 = FUN_1441a5e66(lVar12);
            dVar26 = 1.79769313486232e+308;
            if (*(char *)(lVar12 + 0x83c) == '\0') goto LAB_1441a8a91;
LAB_1441a8be6:
            if (((int)param_1[0x17] < iVar8) ||
               ((iVar8 == (int)param_1[0x17] && (dVar26 < (double)param_1[0x16])))) {
              *(int *)(param_1 + 0x17) = iVar8;
              param_1[0x16] = (longlong)dVar26;
              *(int *)(local_128 + 1) = (int)plVar15[1];
              *local_128 = *plVar15;
            }
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 != 10);
      }
    }
  }
  local_108 = *plVar16;
  local_100 = (undefined4)param_1[2];
  FUN_1448075d0(&local_e8);
  lVar9 = FUN_140fa5e12(&local_e8);
  if (lStack_d0 != 0) {
    FUN_1400020a8();
  }
  local_118 = *(undefined8 *)((longlong)param_1 + 0x14);
  local_110 = *(undefined4 *)((longlong)param_1 + 0x1c);
  FUN_1448075d0(&local_e8);
  lVar11 = FUN_140fa5e12(&local_e8);
  if (lStack_d0 != 0) {
    FUN_1400020a8();
  }
  iVar8 = 0;
  iVar7 = 0;
  if (lVar9 != 0) {
    iVar7 = FUN_1441a5e66(lVar9);
  }
  if (lVar11 != 0) {
    iVar8 = FUN_1441a5e66(lVar11);
  }
  plVar15 = local_138;
  local_e8 = '\0';
  uStack_e7 = 0;
  uStack_e6 = 0;
  uStack_e4 = 0;
  uStack_e0 = 0;
  uStack_dc = 0;
  if ((iVar7 < iVar8) || ((int)*plVar16 == 0)) {
    if (*(int *)((longlong)param_1 + 0x14) != 0) {
      uStack_e0 = 1;
      FUN_1446dd912(&local_e8,0);
      puVar5 = (undefined8 *)CONCAT44(uStack_e4,CONCAT22(uStack_e6,CONCAT11(uStack_e7,local_e8)));
      *(undefined4 *)(puVar5 + 1) = *(undefined4 *)((longlong)param_1 + 0x1c);
      *puVar5 = *(undefined8 *)((longlong)param_1 + 0x14);
    }
  }
  else {
    uStack_e0 = 1;
    FUN_1446dd912(&local_e8,0);
    plVar15 = (longlong *)CONCAT44(uStack_e4,CONCAT22(uStack_e6,CONCAT11(uStack_e7,local_e8)));
    *(int *)(plVar15 + 1) = (int)param_1[2];
    *plVar15 = *plVar16;
    plVar15 = local_138;
  }
  FUN_140188d74(plVar15,&local_e8);
  if (CONCAT44(uStack_e4,CONCAT22(uStack_e6,CONCAT11(uStack_e7,local_e8))) != 0) {
    FUN_1400020a8();
  }
  if ((local_80 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1441a92b4 FUN_1441a92b4 body=1156 status=ok
// SIG undefined FUN_1441a92b4(void)

void FUN_1441a92b4(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined4 *puVar3;
  byte *pbVar4;
  undefined8 *puVar5;
  byte bVar6;
  int iVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined2 *puVar12;
  undefined4 uVar13;
  undefined1 auStack_118 [32];
  undefined1 local_f8;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 local_d0;
  uint local_c8;
  undefined4 uStack_c4;
  int iStack_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  longlong local_90;
  undefined1 local_80 [40];
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  uVar13 = FUN_14082167c();
  piVar1 = (int *)(param_1 + 0x78);
  if (*(int *)(param_1 + 0x78) != 0) {
    uVar13 = FUN_141193194(param_1,param_2,piVar1);
  }
  local_f8 = 2;
  FUN_1408234aa(uVar13,local_80,param_2,&DAT_14cb86eb8);
  FUN_14082207e(&local_b8,local_80,0);
  FUN_140822770(param_2 + 0x2c0,&local_b8,1);
  FUN_1447cd778(CONCAT44(uStack_b4,local_b8),local_b0);
  if (CONCAT44(uStack_b4,local_b8) != 0) {
    FUN_1400020a8();
  }
  lVar8 = FUN_1406b2efc(param_2 + 0x2c0);
  if (*piVar1 != 0) {
    local_c8 = CONCAT31(local_c8._1_3_,1);
    local_bc = 1;
    uStack_c4 = (undefined4)DAT_14cb7c588;
    iStack_c0 = (int)((ulonglong)DAT_14cb7c588 >> 0x20);
    local_d0 = *(undefined4 *)(param_1 + 0x80);
    local_d8 = (undefined4)*(undefined8 *)piVar1;
    uStack_d4 = (undefined4)((ulonglong)*(undefined8 *)piVar1 >> 0x20);
    FUN_140fe4afa(param_1,&local_b8,&local_d8,&DAT_14cb7bdc8);
    local_f8 = 0;
    FUN_140641812(lVar8 + 0x58,&local_b8,&local_c8,0);
    if (local_90 != 0) {
      FUN_1400020a8();
    }
    local_c8 = CONCAT31(local_c8._1_3_,1);
    local_bc = 1;
    uStack_c4 = (undefined4)DAT_14cb7c588;
    iStack_c0 = (int)((ulonglong)DAT_14cb7c588 >> 0x20);
    local_d0 = *(undefined4 *)(param_1 + 0x80);
    local_d8 = (undefined4)*(undefined8 *)piVar1;
    uStack_d4 = (undefined4)((ulonglong)*(undefined8 *)piVar1 >> 0x20);
    FUN_140fe4afa(param_1,&local_b8,&local_d8,&DAT_14cbc99b8);
    local_f8 = 0;
    FUN_140641812(lVar8 + 0x170,&local_b8,&local_c8,1);
    if (local_90 != 0) {
      FUN_1400020a8();
    }
  }
  if (*(char *)(param_1 + 0x85) == '\x01') {
    FUN_1400021e4(&DAT_14cbcd4e8,&local_c8);
    uStack_d4 = 0;
    local_d0 = 0;
    if (iStack_c0 == 0) {
      puVar12 = &DAT_149dfb77a;
    }
    else {
      puVar12 = (undefined2 *)CONCAT44(uStack_c4,local_c8);
    }
    FUN_1405f0d29(&local_d8,puVar12,0);
    local_e0 = *(undefined4 *)(param_1 + 0x80);
    local_e8 = *(undefined8 *)piVar1;
    FUN_140fe4afa(param_1,&local_b8,&local_e8,&local_d8);
    if (CONCAT44(uStack_c4,local_c8) != 0) {
      FUN_1400020a8();
    }
    local_c8 = local_c8 & 0xffffff00;
    uStack_c4 = 0;
    iStack_c0 = 0;
    local_bc = 0;
    FUN_144976b9c(&local_c8,DAT_14cbcd4f0);
    local_f8 = 0;
    uVar9 = FUN_140641812(lVar8 + 0x140,&local_b8,&local_c8,0);
    lVar8 = FUN_140c80b38(uVar9);
    *(undefined1 *)(lVar8 + 0x10) = 1;
    if (local_90 != 0) {
      FUN_1400020a8();
    }
  }
  local_b0 = *(undefined4 *)(param_1 + 0x80);
  local_b8 = (undefined4)*(undefined8 *)piVar1;
  uStack_b4 = (undefined4)((ulonglong)*(undefined8 *)piVar1 >> 0x20);
  lVar10 = FUN_140823ef2(param_1,param_2);
  lVar8 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  puVar3 = (undefined4 *)(lVar8 + 0xc7c);
  uVar13 = *puVar3;
  pbVar4 = (byte *)(lVar8 + 0xc80);
  bVar6 = *pbVar4;
  if ((bVar6 & 1) != 0) {
    *pbVar4 = 0;
    *puVar3 = 0xffffffff;
  }
  plVar11 = (longlong *)FUN_14001cc68(0x30,0x10);
  plVar11[1] = (longlong)&DAT_100000001;
  *plVar11 = (longlong)&PTR_FUN_14b97dd40;
  plVar11[3] = 0;
  plVar11[4] = 0;
  plVar11[5] = 0;
  plVar11[2] = (longlong)&PTR_FUN_14b911a50;
  if ((bVar6 & 1) != 0) {
    *puVar3 = uVar13;
    *pbVar4 = 1;
  }
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
  }
  iVar7 = *(int *)(lVar10 + 0x50);
  *(uint *)(lVar10 + 0x50) = iVar7 + 1U;
  if (*(uint *)(lVar10 + 0x54) < iVar7 + 1U) {
    FUN_140822376((longlong *)(lVar10 + 0x48),iVar7);
  }
  lVar8 = *(longlong *)(lVar10 + 0x48);
  *(longlong **)(lVar8 + (longlong)iVar7 * 0x10) = plVar11 + 2;
  *(longlong **)(lVar8 + 8 + (longlong)iVar7 * 0x10) = plVar11;
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
    LOCK();
    plVar2 = plVar11 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
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
  *(undefined1 *)(plVar11 + 5) = *(undefined1 *)(param_1 + 0x84);
  iVar7 = (int)plVar11[4];
  *(uint *)(plVar11 + 4) = iVar7 + 1U;
  if (*(uint *)((longlong)plVar11 + 0x24) < iVar7 + 1U) {
    FUN_140823334(plVar11 + 3,iVar7);
  }
  puVar5 = (undefined8 *)(plVar11[3] + (longlong)iVar7 * 0x28);
  puVar5[3] = 0;
  puVar5[4] = 0;
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = DAT_14cbcdaf8;
  local_b8 = CONCAT31(local_b8._1_3_,1);
  local_ac = 1;
  uStack_b4 = (undefined4)DAT_14cb7c588;
  local_b0 = (undefined4)((ulonglong)DAT_14cb7c588 >> 0x20);
  FUN_140821fec(puVar5,local_80,&local_b8,0);
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar11 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
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
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441a9746 FUN_1441a9746 body=821 status=ok
// SIG undefined FUN_1441a9746(void)

void FUN_1441a9746(longlong param_1,longlong param_2)

{
  byte bVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_118 [32];
  undefined1 local_f8;
  longlong local_f0;
  longlong local_e8;
  longlong local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 local_ac;
  longlong local_90;
  undefined8 local_80 [5];
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  FUN_14082167c();
  lVar4 = FUN_1406b2efc(param_2 + 0x2c0);
  if (*(int *)(param_1 + 0x90) < 1) goto LAB_1441a9a3a;
  lVar7 = 0;
  lVar6 = 0;
  local_f0 = lVar4;
  do {
    local_d0 = *(undefined4 *)(*(longlong *)(param_1 + 0x88) + 8 + lVar7);
    uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x88) + lVar7);
    local_d8 = (undefined4)uVar2;
    uStack_d4 = (undefined4)((ulonglong)uVar2 >> 0x20);
    local_80[0] = DAT_14cbcd1e8;
    FUN_1401533ba(&local_b8,local_80,1);
    FUN_140fe4afa(param_1,local_80,&local_d8,&local_b8);
    local_b8 = CONCAT31(local_b8._1_3_,1);
    local_ac = 1;
    uStack_b4 = (undefined4)DAT_14cb7c588;
    uStack_b0 = (undefined4)((ulonglong)DAT_14cb7c588 >> 0x20);
    local_f8 = 0;
    FUN_140641812(lVar4 + 8,local_80,&local_b8,0);
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    lVar6 = lVar6 + 1;
    uVar5 = (ulonglong)*(int *)(param_1 + 0x90);
    lVar7 = lVar7 + 0xc;
  } while (lVar6 < (longlong)uVar5);
  if (*(int *)(param_1 + 0x90) < 1) goto LAB_1441a9a3a;
  lVar4 = local_f0 + 0x58;
  local_f0 = local_f0 + 0xb0;
  lVar7 = 0;
  lVar6 = 0;
  local_e8 = param_2;
  local_e0 = lVar4;
  do {
    local_c0 = *(undefined4 *)(*(longlong *)(param_1 + 0x88) + 8 + lVar7);
    local_c8 = *(undefined8 *)(*(longlong *)(param_1 + 0x88) + lVar7);
    if ((int)local_c8 != 0) {
      local_80[0] = DAT_14cbcd1e8;
      FUN_1401533ba(&local_b8,local_80,1);
      FUN_140fe4afa(param_1,local_80,&local_c8,&local_b8);
      local_b8 = (undefined4)DAT_14cbcd1e0;
      uStack_b4 = (undefined4)((ulonglong)DAT_14cbcd1e0 >> 0x20);
      FUN_1401533ba(&local_d8,&local_b8,1);
      FUN_140fe4afa(param_1,&local_b8,&local_c8,&local_d8);
      local_d8._0_1_ = 1;
      local_cc = 1;
      uStack_d4 = (undefined4)DAT_14cb7c588;
      local_d0 = (undefined4)((ulonglong)DAT_14cb7c588 >> 0x20);
      local_f8 = 0;
      FUN_140641812(lVar4,local_80,&local_d8,0);
      local_d8._0_1_ = 1;
      local_cc = 0;
      uStack_d4 = (undefined4)DAT_14cb7c580;
      local_d0 = (undefined4)((ulonglong)DAT_14cb7c580 >> 0x20);
      local_f8 = 0;
      FUN_140641812(lVar4,&local_b8,&local_d8,0);
      local_d8 = CONCAT31(local_d8._1_3_,1);
      local_cc = 0;
      uStack_d4 = (undefined4)DAT_14cb7c580;
      local_d0 = (undefined4)((ulonglong)DAT_14cb7c580 >> 0x20);
      local_f8 = 0;
      FUN_140641812(local_f0,local_80,&local_d8,0);
      if (local_90 != 0) {
        FUN_1400020a8();
      }
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      uVar5 = (ulonglong)*(uint *)(param_1 + 0x90);
    }
    lVar6 = lVar6 + 1;
    iVar3 = (int)uVar5;
    lVar7 = lVar7 + 0xc;
  } while (lVar6 < iVar3);
  if (iVar3 == 1) {
    bVar1 = *(byte *)(param_1 + 0x79);
    if (1 < bVar1) {
      if (bVar1 != 2) goto LAB_1441a9a25;
      if (*(char *)(param_1 + 0x78) != '\0') goto LAB_1441a9a3a;
    }
    FUN_1418ebe88(param_1);
  }
  else {
    if (iVar3 < 2) goto LAB_1441a9a3a;
    bVar1 = *(byte *)(param_1 + 0x79);
    if (bVar1 == 2) {
      if (*(char *)(param_1 + 0x78) == '\0') {
        FUN_14662d5ee(param_1,local_e8);
      }
      goto LAB_1441a9a3a;
    }
    if (bVar1 < 2) {
      FUN_145be6e86(param_1);
      goto LAB_1441a9a3a;
    }
LAB_1441a9a25:
    if (bVar1 == 3) {
      FUN_14600cf24(param_1,local_e8);
    }
  }
LAB_1441a9a3a:
  if ((local_48 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441a9b02 FUN_1441a9b02 body=232 status=ok
// SIG undefined FUN_1441a9b02(void)

void FUN_1441a9b02(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar6 = *(longlong *)(param_1 + 0x860);
  if (lVar6 == 0) {
    uVar5 = FUN_14060ed7a();
    lVar6 = FUN_14477b664(uVar5);
    *(longlong *)(param_1 + 0x860) = lVar6;
  }
  lVar7 = *(longlong *)(param_1 + 0x868);
  if (lVar7 == 0) {
    if (lVar6 == 0) {
      return;
    }
    if (*(longlong *)(param_1 + 0x858) == 0) {
      return;
    }
    plVar3 = *(longlong **)(lVar6 + 0xb8);
    if ((plVar3 == (longlong *)0x0) ||
       (cVar4 = (**(code **)(*plVar3 + 0x108))(plVar3), cVar4 == '\0')) {
      *(undefined8 *)(param_1 + 0x868) = 0;
      return;
    }
    uVar5 = (**(code **)(*plVar3 + 0x110))(plVar3);
    lVar7 = FUN_144aff482(uVar5,(longlong *)(param_1 + 0x858));
    *(longlong *)(param_1 + 0x868) = lVar7;
    if (lVar7 == 0) {
      return;
    }
  }
  iVar1 = (int)param_2[1];
  lVar6 = (longlong)iVar1;
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_1441aeb8a(param_2,iVar1);
  }
  lVar2 = *param_2;
  *(longlong *)(lVar2 + lVar6 * 0x18) = lVar7;
  *(undefined8 *)(lVar2 + 8 + lVar6 * 0x18) = *(undefined8 *)(param_1 + 0x870);
  *(undefined4 *)(lVar2 + 0x10 + lVar6 * 0x18) = *(undefined4 *)(param_1 + 0x878);
  return;
}



// FUNCTION 1441a9bea FUN_1441a9bea body=364 status=ok
// SIG undefined FUN_1441a9bea(void)

void FUN_1441a9bea(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined4 *puVar8;
  uint uVar9;
  longlong *plVar10;
  longlong lVar11;
  
  lVar6 = *(longlong *)(param_1 + 0x860);
  if (lVar6 == 0) {
    uVar5 = FUN_14060ed7a();
    lVar6 = FUN_14477b664(uVar5);
    *(longlong *)(param_1 + 0x860) = lVar6;
  }
  uVar7 = *(ulonglong *)(param_1 + 0x868);
  if (uVar7 == 0) {
    if (lVar6 == 0) {
      return;
    }
    if (*(longlong *)(param_1 + 0x858) == 0) {
      return;
    }
    plVar10 = *(longlong **)(lVar6 + 0xb8);
    if ((plVar10 == (longlong *)0x0) ||
       (cVar3 = (**(code **)(*plVar10 + 0x108))(plVar10), cVar3 == '\0')) {
      *(undefined8 *)(param_1 + 0x868) = 0;
      return;
    }
    uVar5 = (**(code **)(*plVar10 + 0x110))(plVar10);
    uVar7 = FUN_144aff482(uVar5,(longlong *)(param_1 + 0x858));
    *(ulonglong *)(param_1 + 0x868) = uVar7;
    if (uVar7 == 0) {
      return;
    }
  }
  if ((int)param_2[1] != *(int *)((longlong)param_2 + 0x34)) {
    uVar9 = ((uint)(uVar7 >> 0x14) & 0xffff ^ (uint)(uVar7 >> 4)) * -0x7a143595;
    uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
    plVar10 = param_2 + 7;
    if ((longlong *)param_2[8] != (longlong *)0x0) {
      plVar10 = (longlong *)param_2[8];
    }
    iVar2 = *(int *)((longlong)plVar10 +
                    ((longlong)(int)(uVar9 >> 0x10 ^ uVar9) & (longlong)(int)param_2[9] - 1U) * 4);
    if (iVar2 != -1) {
      lVar6 = *param_2;
      do {
        lVar1 = lVar6 + (longlong)iVar2 * 0x10;
        if (*(ulonglong *)(lVar6 + (longlong)iVar2 * 0x10) == uVar7) {
          iVar4 = *(int *)((longlong)plVar10 + (longlong)*(int *)(lVar1 + 0xc) * 4);
          if (iVar4 == iVar2) {
            puVar8 = (undefined4 *)((longlong)plVar10 + (longlong)*(int *)(lVar1 + 0xc) * 4);
          }
          else {
            do {
              lVar11 = (longlong)iVar4;
              iVar4 = *(int *)(lVar6 + 8 + lVar11 * 0x10);
            } while (iVar4 != iVar2);
            puVar8 = (undefined4 *)(lVar6 + lVar11 * 0x10 + 8);
          }
          *puVar8 = *(undefined4 *)(lVar1 + 8);
          FUN_148911f62(param_2,iVar2,1);
          return;
        }
        iVar2 = *(int *)(lVar1 + 8);
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 1441a9d56 FUN_1441a9d56 body=278 status=ok
// SIG undefined FUN_1441a9d56(void)

longlong FUN_1441a9d56(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(longlong *)(param_1 + 0x590) == 0) {
    local_28 = *(undefined8 *)(param_1 + 0x580);
    lVar3 = FUN_14050aea0();
    *(longlong *)(param_1 + 0x590) = lVar3;
    if (lVar3 == 0) {
      lVar3 = *(longlong *)(param_1 + 0x860);
      if (lVar3 == 0) {
        uVar4 = FUN_14060ed7a();
        lVar3 = FUN_14477b664(uVar4);
        *(longlong *)(param_1 + 0x860) = lVar3;
      }
      if (*(longlong *)(param_1 + 0x868) != 0) {
        param_1 = *(longlong *)(param_1 + 0x868) + 0x580;
        goto LAB_1441a9da0;
      }
      if ((lVar3 != 0) && (*(longlong *)(param_1 + 0x858) != 0)) {
        plVar1 = *(longlong **)(lVar3 + 0xb8);
        if (plVar1 != (longlong *)0x0) {
          cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1);
          if (cVar2 != '\0') {
            uVar4 = (**(code **)(*plVar1 + 0x110))(plVar1);
            lVar3 = FUN_144aff482(uVar4,(longlong *)(param_1 + 0x858));
            *(longlong *)(param_1 + 0x868) = lVar3;
            if (lVar3 != 0) {
              param_1 = lVar3 + 0x580;
              goto LAB_1441a9da0;
            }
            goto LAB_1441a9d99;
          }
        }
        *(undefined8 *)(param_1 + 0x868) = 0;
      }
    }
  }
LAB_1441a9d99:
  param_1 = param_1 + 0x580;
LAB_1441a9da0:
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441a9e6e FUN_1441a9e6e body=271 status=ok
// SIG undefined FUN_1441a9e6e(void)

undefined8 FUN_1441a9e6e(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (*(char *)(param_1 + 8) == '\x01') {
    if (*(char *)(param_1 + 0x28) != '\0') {
LAB_1441a9e99:
      *param_2 = DAT_14cbcdc40;
      uVar1 = *(undefined8 *)(param_1 + 0x18);
      param_2[1] = *(undefined8 *)(param_1 + 0x10);
      param_2[2] = uVar1;
      param_2[3] = *(undefined8 *)(param_1 + 0x20);
      uVar1 = DAT_14c846500;
      param_2[4] = DAT_14c8464f8;
      param_2[5] = uVar1;
      uVar1 = DAT_14c846508;
      param_2[6] = DAT_14c846508;
      *(undefined2 *)(param_2 + 7) = 1;
      *(undefined1 *)((longlong)param_2 + 0x3a) = 0x80;
      *(undefined4 *)((longlong)param_2 + 0x5c) = 0xff00ff00;
      return CONCAT71((int7)((ulonglong)uVar1 >> 8),1);
    }
    lVar3 = FUN_1447210f0(param_1 + -0x390);
    if ((lVar3 != 0) && (*(longlong *)(lVar3 + 0x1f0) != 0)) {
      lVar4 = FUN_1403ca142();
      if (*(longlong *)(lVar3 + 0x1f0) != 0) {
        if (lVar4 == 0) {
          return 0;
        }
        lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0x1f0) + 0x10);
        if (lVar3 == 0) {
          return 0;
        }
        if (((*(int *)(lVar4 + 0x38) <= *(int *)(lVar3 + 0x38)) &&
            (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
             lVar4 + 0x30)) && (lVar3 = FUN_140d27a2a(), *(char *)(lVar3 + 0x138) == '\x01')) {
          uVar1 = *(undefined8 *)(lVar3 + 0x120);
          uVar2 = *(undefined8 *)(lVar3 + 0x128);
          *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(lVar3 + 0x130);
          *(undefined8 *)(param_1 + 0x10) = uVar1;
          *(undefined8 *)(param_1 + 0x18) = uVar2;
          *(undefined1 *)(param_1 + 0x28) = 1;
          goto LAB_1441a9e99;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 1441a9f7e FUN_1441a9f7e body=581 status=ok
// SIG undefined FUN_1441a9f7e(void)

void FUN_1441a9f7e(longlong *param_1)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined8 *local_58;
  int local_50;
  undefined8 local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar3 = *param_1;
  if (((*(longlong *)(lVar3 + 0x450) == 0) || (*(longlong *)(lVar3 + 0x458) == 0)) ||
     (*(int *)(*(longlong *)(lVar3 + 0x458) + 8) < 1)) {
    uVar6 = FUN_1401cb356();
    local_58 = (undefined8 *)0x0;
    local_50 = 0;
    FUN_1446efa72(&local_58,0,3,0x10);
    puVar5 = local_58;
    local_50 = 3;
    *local_58 = &PTR_LAB_149e02020;
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 1;
    lVar10 = DAT_14c758608 + 1;
    if (lVar7 == 0) {
      LOCK();
      UNLOCK();
      lVar7 = DAT_14c758608 + 2;
      lVar10 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar10;
    local_58[2] = lVar7;
    *local_58 = &PTR_FUN_14b97c1c0;
    local_58[3] = 0;
    iVar9 = 0;
    if (lVar3 != 0) {
      uVar2 = *(uint *)(lVar3 + 0xc);
      *(uint *)(local_58 + 3) = uVar2;
      if ((int)uVar2 < DAT_14c9647dc) {
        lVar10 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      }
      else {
        lVar10 = 0;
      }
      iVar9 = *(int *)(lVar10 + 0x10);
      if (*(int *)(lVar10 + 0x10) == 0) {
        LOCK();
        iVar9 = DAT_14c964868 + 1;
        UNLOCK();
        iVar8 = DAT_14c964868 + 1;
        bVar11 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar9;
        if (bVar11) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar8);
        }
        LOCK();
        iVar9 = *(int *)(lVar10 + 0x10);
        bVar11 = iVar9 == 0;
        if (bVar11) {
          *(int *)(lVar10 + 0x10) = iVar8;
          iVar9 = 0;
        }
        UNLOCK();
        if (bVar11) {
          iVar9 = iVar8;
        }
      }
    }
    *(int *)((longlong)puVar5 + 0x1c) = iVar9;
    puVar5[4] = FUN_145be4e9c;
    *(undefined4 *)(puVar5 + 5) = 0;
    local_68 = 0;
    FUN_1405f67fc(uVar6,&local_48,&local_58,L"AOakNewGameFlow.CheckStartMovie");
    *(undefined8 *)(lVar3 + 0x450) = local_48;
    local_48 = 0;
    plVar4 = *(longlong **)(lVar3 + 0x458);
    *(longlong **)(lVar3 + 0x458) = local_40;
    local_40 = (longlong *)0x0;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))();
      }
      if (local_40 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)local_40 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_40 + 0x10))();
        }
      }
    }
    if (local_50 != 0) {
      if (local_58 == (undefined8 *)0x0) goto LAB_1441aa135;
      (**(code **)*local_58)(local_58,0);
      FUN_1446efa72(&local_58,0,0,0x10);
      local_50 = 0;
    }
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_1441aa135:
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1441aa1c4 FUN_1441aa1c4 body=184 status=ok
// SIG undefined FUN_1441aa1c4(void)

void FUN_1441aa1c4(undefined8 param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  
  lVar2 = FUN_1447210f0();
  if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x1f0) != 0)) {
    lVar3 = FUN_1403ca142();
    lVar2 = *(longlong *)(lVar2 + 0x1f0);
    if (((lVar2 != 0) &&
        (((lVar3 != 0 && (lVar1 = *(longlong *)(lVar2 + 0x10), lVar1 != 0)) &&
         (*(int *)(lVar3 + 0x38) <= *(int *)(lVar1 + 0x38))))) &&
       (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
        lVar3 + 0x30)) {
      plVar4 = (longlong *)FUN_14021f720(lVar2);
      if (plVar4 != (longlong *)0x0) {
        FUN_140457ffc(plVar4 + 0xb,param_1);
        (**(code **)(*plVar4 + 0x2d0))(plVar4);
      }
      lVar2 = FUN_140d27a2a(lVar2);
      if (0xfc < (byte)(*(char *)(lVar2 + 0xb0) - 4U)) {
        FUN_1441aa338(lVar2,5,0);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1441aa27c FUN_1441aa27c body=102 status=ok
// SIG undefined FUN_1441aa27c(void)

void FUN_1441aa27c(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  undefined1 auStack_48 [40];
  code *local_20;
  undefined4 local_18;
  undefined1 local_10 [8];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*param_3 != 0) {
    local_20 = FUN_1441aa2e4;
    local_18 = 0;
    FUN_148d7f48e(*param_3 + 0x130,local_10,param_1);
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441aa2e4 FUN_1441aa2e4 body=66 status=ok
// SIG undefined FUN_1441aa2e4(void)

void FUN_1441aa2e4(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_1403ca102();
  if (lVar1 != 0) {
    lVar1 = FUN_140d27a2a(lVar1);
    if (0xf8 < (byte)(*(char *)(lVar1 + 0xb0) - 8U)) {
      FUN_1441aa338(lVar1,8,0);
    }
  }
  FUN_145be4cfc(param_1);
  return;
}



// FUNCTION 1441aa338 FUN_1441aa338 body=717 status=ok
// SIG undefined FUN_1441aa338(void)

void FUN_1441aa338(longlong param_1,char param_2,char param_3)

{
  uint uVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 == '\0') {
    cVar3 = '\0';
  }
  else {
    uVar5 = FUN_14577a94c(param_1);
    FUN_146010760(param_1 + 0xb8,&local_38,uVar5,0);
    cVar3 = (char)&DAT_00000008;
    if (local_38 == DAT_14cbcd3c0) {
      cVar3 = param_2;
    }
    if (local_38 == 0) {
      cVar3 = param_2;
    }
    if (4 < (byte)(param_2 - 3U)) {
      cVar3 = param_2;
    }
  }
  if (cVar3 == *(char *)(param_1 + 0xb0)) {
LAB_1441aa366:
    if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
  *(char *)(param_1 + 0xb0) = cVar3;
  lVar6 = FUN_14577a94c(param_1);
  if ((lVar6 == 0) || (iVar4 = FUN_14490d72a(lVar6), iVar4 == 3)) {
    FUN_148d7f58e(param_1);
    if (param_3 == '\0') goto LAB_1441aa366;
    FUN_14662d9fa(param_1);
    bVar2 = false;
  }
  else {
    lVar6 = FUN_14662d9fa(param_1);
    bVar2 = true;
    if (lVar6 != 0) {
      *(undefined1 *)(lVar6 + 0x620) = *(undefined1 *)(param_1 + 0xb0);
      FUN_144a62f0c(lVar6,*(undefined8 *)(lVar6 + 0x28),0x24);
    }
  }
  cVar3 = *(char *)(param_1 + 0xb0);
  if ((byte)(cVar3 - 5U) < 2) {
    if ((((*(int *)(param_1 + 0x68) != 0) && (uVar1 = *(uint *)(param_1 + 100), -1 < (int)uVar1)) &&
        ((int)uVar1 < DAT_14c9647dc)) &&
       (((puVar8 = (undefined8 *)
                   ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
         puVar8 != (undefined8 *)0x0 && (*(int *)(puVar8 + 2) == *(int *)(param_1 + 0x68))) &&
        ((*(uint *)(puVar8 + 1) & 0x10200000) == 0)))) {
      if ((*(uint *)(puVar8 + 1) & 0x10200000) == 0) {
        uVar5 = *puVar8;
      }
      else {
        uVar5 = 0;
      }
      FUN_148d2fc94(uVar5);
      cVar3 = *(char *)(param_1 + 0xb0);
    }
    if (cVar3 == '\x06') {
      cVar3 = FUN_148d7f790(param_1);
      if (cVar3 != '\0') {
        plVar7 = (longlong *)FUN_145acdf28();
        lVar6 = plVar7[0x22];
        if (lVar6 == 0) {
          (**(code **)(*plVar7 + 1000))(plVar7);
          lVar6 = plVar7[0x22];
        }
        FUN_148d7f89e(param_1,*(undefined4 *)(lVar6 + 0x28));
      }
      cVar3 = *(char *)(param_1 + 0xb0);
    }
  }
  if (cVar3 == '\a') {
    FUN_146097578(param_1,1);
    cVar3 = FUN_148d7fa46(param_1);
    if (cVar3 != '\0') {
      FUN_14662da60(param_1);
    }
    *(undefined1 *)(param_1 + 0x60) = 1;
    FUN_140898514(param_1,1);
    FUN_1448a8284(param_1);
  }
  else {
    FUN_146097578(param_1,0);
  }
  if (bVar2 && *(char *)(param_1 + 0xb0) == '\b') {
    FUN_148d7fa9e(param_1);
  }
  if (((*(int *)(param_1 + 0x70) != 0) && (uVar1 = *(uint *)(param_1 + 0x6c), -1 < (int)uVar1)) &&
     (((int)uVar1 < DAT_14c9647dc &&
      (((puVar8 = (undefined8 *)
                  ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
        puVar8 != (undefined8 *)0x0 && (*(int *)(puVar8 + 2) == *(int *)(param_1 + 0x70))) &&
       ((*(uint *)(puVar8 + 1) & 0x10200000) == 0)))))) {
    if ((*(uint *)(puVar8 + 1) & 0x10200000) == 0) {
      uVar5 = *puVar8;
    }
    else {
      uVar5 = 0;
    }
    FUN_148d7f182(uVar5,param_1);
  }
  if (*(char *)(param_1 + 0xb0) == '\t') {
    FUN_148d7feda(param_1);
    FUN_140898514(param_1 + 0x18,1);
    FUN_1448a8284(param_1 + 0x18);
    FUN_148d7fdf8(param_1);
    FUN_140628abc(param_1,2);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_58);
}



// FUNCTION 1441aa61c FUN_1441aa61c body=173 status=ok
// SIG undefined FUN_1441aa61c(void)

void FUN_1441aa61c(longlong *param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar2 = *param_1;
  if (((*(longlong *)(lVar2 + 0x98) != 0) && (*(longlong *)(lVar2 + 0xa0) != 0)) &&
     (0 < *(int *)(*(longlong *)(lVar2 + 0xa0) + 8))) {
    FUN_1401cb356();
    local_28 = *(undefined8 *)(lVar2 + 0x98);
    local_20 = *(longlong *)(lVar2 + 0xa0);
    if (local_20 != 0) {
      LOCK();
      *(int *)(local_20 + 0xc) = *(int *)(local_20 + 0xc) + 1;
      UNLOCK();
    }
    FUN_140d61352(&local_28);
    lVar3 = *(longlong *)(lVar2 + 0xa0);
    *(undefined8 *)(lVar2 + 0x98) = 0;
    *(undefined8 *)(lVar2 + 0xa0) = 0;
    if (lVar3 != 0) {
      LOCK();
      piVar1 = (int *)(lVar3 + 0xc);
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



// FUNCTION 1441aa6da FUN_1441aa6da body=151 status=ok
// SIG undefined FUN_1441aa6da(void)

void FUN_1441aa6da(longlong param_1,char param_2)

{
  byte bVar1;
  char cVar2;
  
  bVar1 = *(byte *)(param_1 + 0xb0);
  if (bVar1 - 1 < 2) {
    if (0xfd < (byte)(param_2 - 3U)) goto LAB_1441aa74a;
LAB_1441aa728:
    FUN_1441aa772(param_1);
  }
  else {
    if (bVar1 == 3) {
      bVar1 = 3;
      if (param_2 == '\x03') goto LAB_1441aa74a;
      goto LAB_1441aa728;
    }
    if (bVar1 == 4) {
      if (param_2 == '\0') {
        FUN_1441aa772(param_1);
      }
      *(char *)(param_1 + 0xb0) = param_2;
      return;
    }
  }
  if (param_2 == '\x04') {
    *(undefined1 *)(param_1 + 0xb0) = 4;
    return;
  }
  bVar1 = *(byte *)(param_1 + 0xb0);
LAB_1441aa74a:
  cVar2 = '\t';
  if (7 < (byte)(bVar1 - 1)) {
    cVar2 = param_2;
  }
  if (param_2 != '\0') {
    cVar2 = param_2;
  }
  FUN_1441aa338(param_1,cVar2,1);
  return;
}



// FUNCTION 1441aa772 FUN_1441aa772 body=107 status=ok
// SIG undefined FUN_1441aa772(void)

void FUN_1441aa772(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  if (*(char *)(param_1 + 0xb0) == '\0') {
    return;
  }
  if (*(int *)(param_1 + 0x68) != 0) {
    uVar1 = *(uint *)(param_1 + 100);
    uVar3 = 0;
    if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_1441aa7c3;
    puVar4 = (undefined8 *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if ((puVar4 != (undefined8 *)0x0) &&
       ((*(int *)(puVar4 + 2) == *(int *)(param_1 + 0x68) &&
        ((*(uint *)(puVar4 + 1) & 0x10200000) == 0)))) {
      uVar3 = *puVar4;
      goto LAB_1441aa7c3;
    }
  }
  uVar3 = 0;
LAB_1441aa7c3:
  lVar2 = FUN_14021f720(uVar3);
  if (lVar2 != 0) {
    *(undefined1 *)(lVar2 + 0xa5) = 1;
  }
  return;
}



// FUNCTION 1441aa7de FUN_1441aa7de body=85 status=ok
// SIG undefined FUN_1441aa7de(void)

void FUN_1441aa7de(longlong param_1)

{
  char cVar1;
  
  if (7 < (byte)(*(char *)(param_1 + 0xb0) - 1U)) {
    cVar1 = FUN_14577a842();
    if (cVar1 != '\0') {
      if (*(char *)(param_1 + 0xb0) != '\x01') {
        FUN_140628abc(param_1,1);
        FUN_1441aa338(param_1,1,0);
      }
      FUN_1441aa338(param_1,9,0);
      return;
    }
  }
  return;
}



// FUNCTION 1441aa834 FUN_1441aa834 body=340 status=ok
// SIG undefined FUN_1441aa834(void)

undefined8 FUN_1441aa834(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
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
  code *local_40;
  undefined1 local_30 [16];
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar2 = FUN_14577a94c();
  FUN_141237a6a(local_30,param_2,uVar2);
  cVar1 = FUN_141318136(local_30);
  if (cVar1 != '\0') {
    cVar1 = FUN_1413f6f68();
    if (cVar1 != '\0') {
      lVar3 = FUN_1459afa08(local_30);
      if (lVar3 != 0) {
        if (DAT_14cbae3d8 == 0) {
          local_50 = &local_20;
          local_20 = FUN_141030f22;
          local_40 = FUN_14081d0ea;
          local_48 = &LAB_1464f5fc4;
          local_58 = &LAB_148c3dd26;
          local_60 = &LAB_1459673ba;
          local_68 = L"Engine";
          local_70 = 0;
          local_78 = 0x10000004;
          local_80 = 0x10;
          local_88 = 0x1360;
          FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerState",&DAT_14cbae3d8,FUN_1465eb604);
        }
        if ((*(int *)(DAT_14cbae3d8 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
             (longlong)*(int *)(DAT_14cbae3d8 + 0x38) * 8) == DAT_14cbae3d8 + 0x30)) {
          uVar2 = FUN_146632282(lVar3);
          goto LAB_1441aa881;
        }
      }
    }
  }
  uVar2 = 0;
LAB_1441aa881:
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441aa98a FUN_1441aa98a body=468 status=ok
// SIG undefined FUN_1441aa98a(void)

void FUN_1441aa98a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 uVar8;
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar6 = FUN_14662d9fa();
  if (((lVar6 != 0) && (iVar5 = FUN_14487fd02(lVar6), iVar5 == 3)) ||
     (*(char *)(param_1 + 0xb0) != '\x01')) goto LAB_1441aaa0e;
  FUN_1441aa338(param_1,2,0);
  if ((((*(int *)(param_1 + 0x68) == 0) || (uVar3 = *(uint *)(param_1 + 100), (int)uVar3 < 0)) ||
      ((DAT_14c9647dc <= (int)uVar3 ||
       ((lVar6 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8), lVar6 == 0 ||
        (*(int *)(lVar6 + 0x10) != *(int *)(param_1 + 0x68))))))) ||
     ((*(uint *)(lVar6 + 8) & 0x10200000) != 0)) goto LAB_1441aaa0e;
  lVar6 = FUN_14021f720();
  if (lVar6 != 0) {
    FUN_148d7fbf2(lVar6 + 0x58,local_20,param_1,FUN_1441aab60);
  }
  if (*(int *)(param_1 + 0x68) == 0) {
LAB_1441aab4a:
    lVar6 = 0;
  }
  else {
    uVar3 = *(uint *)(param_1 + 100);
    lVar6 = 0;
    if ((-1 < (int)uVar3) && ((int)uVar3 < DAT_14c9647dc)) {
      plVar7 = (longlong *)
               ((ulonglong)((uVar3 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
      if ((plVar7 == (longlong *)0x0) ||
         (((int)plVar7[2] != *(int *)(param_1 + 0x68) || ((*(uint *)(plVar7 + 1) & 0x10200000) != 0)
          ))) goto LAB_1441aab4a;
      lVar6 = *plVar7;
    }
  }
  if (*(longlong *)(lVar6 + 0x30) == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = *(undefined8 *)(*(longlong *)(lVar6 + 0x30) + 0x360);
  }
  lVar6 = FUN_1406f625c(uVar8);
  if (lVar6 != 0) {
    lVar4 = *(longlong *)(lVar6 + 0x158);
    plVar7 = *(longlong **)(lVar6 + 0x160);
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
    }
    if (lVar4 != 0) {
      FUN_148d7fcd8(lVar4 + 0x10,local_20,param_1,FUN_148d7fdbe);
    }
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
LAB_1441aaa0e:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441aab60 FUN_1441aab60 body=235 status=ok
// SIG undefined FUN_1441aab60(void)

void FUN_1441aab60(longlong param_1)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  
  if (1 < (byte)(*(char *)(param_1 + 0xb0) - 1U)) {
    if (*(char *)(param_1 + 0xc2) == '\x01') {
      lVar3 = FUN_14577a94c(param_1);
      if (lVar3 != 0) {
        lVar4 = FUN_14662d9fa(param_1);
        iVar2 = FUN_14490d72a(lVar3);
        if ((lVar4 != 0) && (iVar2 != 3)) {
          *(undefined1 *)(lVar4 + 0x620) = 0;
          FUN_144a62f0c(lVar4,*(undefined8 *)(lVar4 + 0x28),0x24);
          return;
        }
      }
    }
    return;
  }
  if ((((*(int *)(param_1 + 0x70) != 0) && (uVar1 = *(uint *)(param_1 + 0x6c), -1 < (int)uVar1)) &&
      ((int)uVar1 < DAT_14c9647dc)) &&
     (((plVar5 = (longlong *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
       plVar5 != (longlong *)0x0 && ((int)plVar5[2] == *(int *)(param_1 + 0x70))) &&
      ((*(uint *)(plVar5 + 1) & 0x10200000) == 0)))) {
    if ((*(uint *)(plVar5 + 1) & 0x10200000) == 0) {
      lVar3 = *plVar5;
    }
    else {
      lVar3 = 0;
    }
    if (1 < *(int *)(lVar3 + 0x468)) {
      uVar6 = 3;
      goto LAB_1441aabd3;
    }
  }
  uVar6 = 5;
LAB_1441aabd3:
  FUN_1441aa338(param_1,uVar6,0);
  return;
}



// FUNCTION 1441aac4c FUN_1441aac4c body=564 status=ok
// SIG undefined FUN_1441aac4c(void)

longlong FUN_1441aac4c(longlong param_1)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
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
  undefined4 local_28;
  undefined1 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((byte)(*(char *)(param_1 + 0xb0) - 1U) < 8) {
    uVar2 = FUN_14577a94c();
    FUN_146010760(param_1 + 0xb8,&local_30,uVar2,0);
    if (((local_30 == (code *)0x0) || (local_30 == DAT_14cbcd3c0)) &&
       (*(byte *)(param_1 + 0xb0) < 7)) {
      local_30 = (code *)0x14b97bfe8;
      local_28 = 0x17;
      local_24 = 0;
      uVar1 = FUN_14001a6c0(&local_30,1);
      local_30 = (code *)(ulonglong)uVar1;
      lVar3 = FUN_14050aea0(&local_30);
      goto LAB_1441aac76;
    }
    if (*(int *)(param_1 + 0x68) == 0) {
LAB_1441aade2:
      uVar2 = 0;
    }
    else {
      uVar1 = *(uint *)(param_1 + 100);
      uVar2 = 0;
      if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
        puVar5 = (undefined8 *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
        if ((puVar5 == (undefined8 *)0x0) ||
           ((*(int *)(puVar5 + 2) != *(int *)(param_1 + 0x68) ||
            ((*(uint *)(puVar5 + 1) & 0x10200000) != 0)))) goto LAB_1441aade2;
        uVar2 = *puVar5;
      }
    }
    lVar3 = 0;
    lVar4 = FUN_145725aea(uVar2,0);
    if (lVar4 == 0) goto LAB_1441aac76;
    if (DAT_14cbadd90 == 0) {
      local_30 = FUN_141030f22;
      local_40 = FUN_14081d0ea;
      local_48 = &LAB_1459f2e4c;
      local_58 = &LAB_148c39de3;
      local_60 = &LAB_1457a9eb2;
      local_68 = &DAT_149e063b2;
      local_70 = 0;
      local_78 = 0x10000004;
      local_80 = 0x10;
      local_88 = 0x3de0;
      local_50 = &local_30;
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
    }
    if ((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) {
      lVar3 = *(longlong *)(lVar4 + 0x23e8);
      if (lVar3 == 0) {
        local_30 = *(code **)(lVar4 + 0x23d8);
        lVar3 = FUN_14050aea0();
        *(longlong *)(lVar4 + 0x23e8) = lVar3;
      }
      goto LAB_1441aac76;
    }
  }
  lVar3 = 0;
LAB_1441aac76:
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441aae82 FUN_1441aae82 body=258 status=ok
// SIG undefined FUN_1441aae82(void)

ulonglong FUN_1441aae82(longlong param_1,longlong param_2)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 unaff_RSI;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar5 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if (param_2 != 0) {
    if (*(char *)(param_1 + 0xb0) == '\x01') {
LAB_1441aaeb0:
      uVar5 = 0;
    }
    else {
      uVar4 = FUN_14577a94c(param_1);
      FUN_146010760(param_1 + 0xb8,&local_38,uVar4,0);
      if (((local_38 == 0) || (local_38 == DAT_14cbcd3c0)) &&
         ((longlong)*(int *)(param_1 + 0x150) != 0)) {
        lVar6 = *(longlong *)(param_1 + 0x148);
        lVar7 = (longlong)*(int *)(param_1 + 0x150) << 3;
        do {
          cVar2 = FUN_14600443a(lVar6,param_2);
          if (cVar2 != '\0') {
            cVar2 = *(char *)(param_1 + 0xb0);
            if ((((byte)(cVar2 - 1U) < 4) || (cVar2 == '\x06')) ||
               ((cVar2 == '\x05' &&
                (uVar1 = *(uint *)(param_1 + 0x160), uVar3 = FUN_148d7ff02(param_1), uVar1 < uVar3))
               )) goto LAB_1441aaeb0;
            break;
          }
          lVar6 = lVar6 + 8;
          lVar7 = lVar7 + -8;
        } while (lVar7 != 0);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5 & 0xffffffff;
}



// FUNCTION 1441aaf86 FUN_1441aaf86 body=75 status=ok
// SIG undefined FUN_1441aaf86(void)

void FUN_1441aaf86(longlong param_1)

{
  char cVar1;
  int iVar2;
  
  if (*(byte *)(param_1 + 0xb0) < 6) {
    cVar1 = FUN_148d7f790();
    if (cVar1 != '\0') {
      iVar2 = FUN_148d7ff02(param_1);
      if ((*(char *)(param_1 + 0xb0) == '\x05') && (*(int *)(param_1 + 0x150) == iVar2)) {
        FUN_1441aa338(param_1,6,0);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1441aafd2 FUN_1441aafd2 body=251 status=ok
// SIG undefined FUN_1441aafd2(void)

void FUN_1441aafd2(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  bool bVar4;
  undefined1 auStack_58 [40];
  uint local_30;
  int local_2c;
  uint *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (((param_2 != 0) && ((byte)(*(char *)(param_1 + 0xb0) - 1U) < 8)) &&
     (iVar1 = FUN_14487fd02(param_2), iVar1 != 3)) {
    FUN_148d7ffd0(param_1 + 0x158);
    local_2c = 0;
    local_30 = *(uint *)(param_2 + 0xc);
    if ((int)local_30 < DAT_14c9647dc) {
      lVar2 = (ulonglong)((local_30 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_30 >> 0x10) * 8);
    }
    else {
      lVar2 = 0;
    }
    iVar1 = *(int *)(lVar2 + 0x10);
    if (*(int *)(lVar2 + 0x10) == 0) {
      LOCK();
      iVar1 = DAT_14c964868 + 1;
      UNLOCK();
      iVar3 = DAT_14c964868 + 1;
      bVar4 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar1;
      if (bVar4) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar3);
      }
      LOCK();
      iVar1 = *(int *)(lVar2 + 0x10);
      bVar4 = iVar1 == 0;
      if (bVar4) {
        *(int *)(lVar2 + 0x10) = iVar3;
        iVar1 = 0;
      }
      UNLOCK();
      if (bVar4) {
        iVar1 = iVar3;
      }
    }
    local_28 = &local_30;
    local_2c = iVar1;
    FUN_14615c482(param_1 + 0x158);
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1441ab0ce FUN_1441ab0ce body=68 status=ok
// SIG undefined FUN_1441ab0ce(void)

void FUN_1441ab0ce(longlong param_1)

{
  int iVar1;
  
  if (*(byte *)(param_1 + 0xb0) < 7) {
    iVar1 = FUN_148d7ff02();
    if (((byte)(*(char *)(param_1 + 0xb0) - 5U) < 2) && (*(int *)(param_1 + 0x170) == iVar1)) {
      FUN_1441aa338(param_1,7,0);
      return;
    }
  }
  return;
}



// FUNCTION 1441ab176 FUN_1441ab176 body=655 status=ok
// SIG undefined FUN_1441ab176(void)

undefined8 * FUN_1441ab176(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  undefined2 *puVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  int iVar8;
  bool bVar9;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar6 = FUN_14007ca06();
  FUN_140c6b9f8(param_1,uVar6);
  param_1[0x6a] = 0;
  *(undefined4 *)(param_1 + 0x6b) = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  *(undefined8 *)((longlong)param_1 + 0x35c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x364) = 0;
  param_1[0x6e] = 0;
  *(undefined4 *)(param_1 + 0x6f) = 0;
  param_1[0x70] = 0;
  param_1[0x71] = 0;
  *param_1 = &PTR_FUN_14b800a00;
  *(undefined4 *)(param_1 + 0x16) = 0xdeed;
  param_1[0x17] = "profile_skip_reward_def";
  FUN_1400b22c2(local_58,"NewGame.SkipMissionRewards");
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  puVar1 = (uint *)(param_1 + 0x5a);
  lVar7 = FUN_14405776a();
  if (lVar7 == 0) {
    puVar1[0] = 0;
    puVar1[1] = 0;
    param_1[0x5b] = 0;
    param_1[0x5c] = 0;
    *(undefined4 *)(param_1 + 0x5e) = 0;
    if (*(int *)((longlong)param_1 + 0x2f4) < 0) {
      FUN_1446f8c06(param_1 + 0x5d,0);
    }
    puVar3 = (undefined2 *)param_1[0x5d];
    if (puVar3 != (undefined2 *)0x0) {
      *puVar3 = 0;
    }
  }
  else {
    FUN_1400bbfc4(&local_48,lVar7);
    *(undefined4 *)(param_1 + 0x5b) = local_48;
    *(undefined4 *)((longlong)param_1 + 0x2dc) = uStack_44;
    *(undefined4 *)(param_1 + 0x5c) = uStack_40;
    *(undefined4 *)((longlong)param_1 + 0x2e4) = uStack_3c;
    if (param_1 + 0x5b == (undefined8 *)&local_48) {
      if (local_38 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (param_1[0x5d] != 0) {
        FUN_1400020a8();
      }
      param_1[0x5d] = local_38;
      local_38 = 0;
      *(undefined4 *)(param_1 + 0x5e) = local_30;
      *(undefined4 *)((longlong)param_1 + 0x2f4) = local_2c;
    }
    cVar4 = (*(code *)PTR_FUN_14c758760)();
    iVar5 = DAT_14c9647dc;
    uVar2 = *(uint *)(lVar7 + 0xc);
    if (cVar4 != '\0') {
      if ((int)uVar2 < DAT_14c9647dc) {
        lVar7 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      }
      else {
        lVar7 = 0;
      }
      if ((*(uint *)(lVar7 + 8) & 0x8400000) != 0) {
        param_1[0x5a] = 0;
        goto LAB_1441ab39e;
      }
    }
    *puVar1 = uVar2;
    if ((int)uVar2 < iVar5) {
      lVar7 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar7 = 0;
    }
    iVar5 = *(int *)(lVar7 + 0x10);
    if (*(int *)(lVar7 + 0x10) == 0) {
      LOCK();
      iVar5 = DAT_14c964868 + 1;
      UNLOCK();
      iVar8 = DAT_14c964868 + 1;
      bVar9 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar5;
      if (bVar9) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar8);
      }
      LOCK();
      iVar5 = *(int *)(lVar7 + 0x10);
      bVar9 = iVar5 == 0;
      if (bVar9) {
        *(int *)(lVar7 + 0x10) = iVar8;
        iVar5 = 0;
      }
      UNLOCK();
      if (bVar9) {
        iVar5 = iVar8;
      }
    }
    *(int *)((longlong)param_1 + 0x2d4) = iVar5;
  }
LAB_1441ab39e:
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1441ab406 FUN_1441ab406 body=53 status=ok
// SIG undefined FUN_1441ab406(void)

void FUN_1441ab406(longlong param_1)

{
  longlong *plVar1;
  
  FUN_145af441a();
  plVar1 = *(longlong **)(param_1 + 0x90);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001441ab431. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x2b8))(plVar1,param_1);
    return;
  }
  return;
}



// FUNCTION 1441ab45a FUN_1441ab45a body=68 status=ok
// SIG undefined FUN_1441ab45a(void)

undefined8 * FUN_1441ab45a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b7bcd40;
  if (param_1[0x101] != 0) {
    FUN_1400020a8();
  }
  FUN_140d79878(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1441ab4a4 FUN_1441ab4a4 body=1702 status=ok
// SIG undefined FUN_1441ab4a4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1441ab4a4(longlong param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  int iVar10;
  undefined4 *puVar11;
  bool bVar12;
  undefined1 auStack_2b8 [40];
  undefined1 local_290 [4];
  undefined8 local_28c;
  undefined4 local_284;
  undefined8 local_280;
  undefined4 local_278;
  undefined8 local_270;
  undefined4 local_268;
  undefined8 local_260;
  undefined4 local_258;
  undefined8 local_250;
  undefined4 local_248;
  undefined8 local_240;
  undefined4 local_238;
  undefined8 local_230;
  undefined4 local_228;
  undefined8 local_220;
  undefined4 local_218;
  undefined8 local_210;
  undefined4 local_208;
  undefined8 local_200;
  undefined4 local_1f8;
  undefined8 local_1f0;
  undefined4 local_1e8;
  undefined8 *local_1e0;
  undefined1 *local_1d8;
  undefined1 local_1d0 [16];
  undefined8 local_1c0;
  longlong local_1b8;
  int local_1b0;
  undefined1 local_1a8 [40];
  longlong local_180;
  longlong *local_170;
  undefined8 *local_168;
  longlong local_148;
  undefined1 local_138 [12];
  undefined4 local_12c;
  undefined1 local_128;
  undefined8 local_124;
  undefined4 local_11c;
  longlong *local_118;
  int local_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined1 local_a8;
  undefined2 local_a7;
  undefined1 local_a5;
  int local_a4;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_94;
  undefined4 local_8c;
  undefined1 local_88 [16];
  longlong local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  longlong local_50;
  undefined8 uStack_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_2b8;
  lVar6 = FUN_148d820f2();
  FUN_1488f607e(DAT_14cb85cf0,&local_1b8,
                (longlong)*(int *)(param_1 + 0xf8) * 0x20 + *(longlong *)(lVar6 + 8),1);
  if (local_1b0 == 0) {
    FUN_148d81e82(param_1);
  }
  else {
    if (local_1b0 < 1) {
      lVar6 = 0;
    }
    else {
      uVar4 = rand();
      iVar5 = (int)((float)local_1b0 * ((float)(uVar4 & 0x7fff) / 32767.0));
      iVar10 = local_1b0 + -1;
      if (iVar5 < local_1b0 + -1) {
        iVar10 = iVar5;
      }
      lVar6 = (longlong)iVar10;
    }
    puVar2 = *(undefined4 **)(*(longlong *)(local_1b8 + lVar6 * 8) + 8);
    puVar11 = &DAT_14c9485f0;
    if (puVar2 != (undefined4 *)0x0) {
      puVar11 = puVar2;
    }
    if (DAT_14c947fe0 == 0) {
      lVar6 = FUN_14001cc68(0x140,0x10);
      FUN_1456b2032(lVar6);
      DAT_14c947fe0 = lVar6;
    }
    FUN_140045924(DAT_14c947fe0,&local_1c0,puVar11,1);
    FUN_1488ebfe8(param_1,local_1d0,&DAT_14cb7d0e0);
    local_1e0 = &local_a0;
    local_98 = DAT_14cb7be18;
    local_a0 = _DAT_14cb7be10;
    local_94 = *(undefined8 *)(param_1 + 0x20);
    local_8c = *(undefined4 *)(param_1 + 0x28);
    local_1d8 = local_88;
    FUN_148845822(local_138);
    local_168 = &uStack_f8;
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0;
    local_50 = 0;
    uStack_48 = 0;
    local_170 = (longlong *)local_138;
    FUN_148d821ba();
    if (CONCAT44(uStack_104,local_108) != 0) {
      FUN_1400020a8();
    }
    puVar1 = (undefined8 *)(param_1 + 0x20);
    uVar7 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x180))();
    lVar6 = FUN_140149a73(uVar7,0);
    if (lVar6 == 0) {
      local_1e8 = DAT_14c948620;
      local_1f0 = DAT_14c948618;
    }
    else {
      FUN_14883d5c5(&local_1f0,&local_68,lVar6);
    }
    local_200 = _DAT_14cb7d0b0;
    local_1f8 = DAT_14cb7d0b8;
    local_210 = local_1f0;
    local_208 = local_1e8;
    local_220 = *puVar1;
    local_218 = *(undefined4 *)(param_1 + 0x28);
    FUN_14884572d(&local_a0);
    local_138[0] = 0;
    local_138._4_8_ = 0;
    local_12c = 0;
    local_128 = 0;
    local_124 = 0;
    local_11c = 0;
    local_108 = 0xc69c4000;
    local_b8 = 0;
    local_b0 = 0;
    local_a8 = 0;
    local_100 = 0;
    uStack_f8 = 0;
    local_f0 = 0;
    uStack_e8 = 0;
    local_e0 = 0;
    uStack_d8 = 0;
    local_d0 = 0;
    uStack_c8 = 0;
    local_c0 = 0;
    local_a7 = 1;
    local_a5 = 0;
    local_a4 = 0;
    lVar6 = *(longlong *)(param_1 + 0x18);
    local_170 = (longlong *)0x0;
    local_168 = (undefined8 *)((ulonglong)local_168 & 0xffffffff00000000);
    FUN_1446efa72(&local_170,0,3,0x10);
    plVar8 = local_170;
    local_168 = (undefined8 *)CONCAT44(local_168._4_4_,3);
    *local_170 = (longlong)&PTR_LAB_14b3e6310;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar3 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar3 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar3;
    local_170[2] = lVar9;
    *local_170 = (longlong)&PTR_FUN_14b97c490;
    local_170[3] = 0;
    iVar10 = 0;
    if (lVar6 != 0) {
      uVar4 = *(uint *)(lVar6 + 0xc);
      *(uint *)(local_170 + 3) = uVar4;
      if ((int)uVar4 < DAT_14c9647dc) {
        lVar6 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
      }
      else {
        lVar6 = 0;
      }
      iVar10 = *(int *)(lVar6 + 0x10);
      if (*(int *)(lVar6 + 0x10) == 0) {
        LOCK();
        iVar10 = DAT_14c964868 + 1;
        UNLOCK();
        iVar5 = DAT_14c964868 + 1;
        bVar12 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar10;
        if (bVar12) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar5);
        }
        LOCK();
        iVar10 = *(int *)(lVar6 + 0x10);
        bVar12 = iVar10 == 0;
        if (bVar12) {
          *(int *)(lVar6 + 0x10) = iVar5;
          iVar10 = 0;
        }
        UNLOCK();
        if (bVar12) {
          iVar10 = iVar5;
        }
      }
    }
    *(int *)((longlong)plVar8 + 0x1c) = iVar10;
    plVar8[4] = param_1;
    local_118 = local_170;
    local_110 = (int)local_168;
    uVar7 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x180))();
    lVar6 = FUN_140149a73(uVar7,0);
    if (lVar6 == 0) {
      local_a4 = 2;
    }
    else {
      FUN_140983ba6(&local_a0,lVar6,local_138);
      if (local_a4 == 1) {
        if (local_118 == (longlong *)0x0 || local_110 == 0) {
          plVar8 = (longlong *)0x0;
        }
        else {
          (**(code **)(*local_118 + 0x38))(local_118,&local_170);
          plVar8 = local_170;
        }
        *(longlong **)(param_1 + 0x100) = plVar8;
      }
    }
    local_230 = _DAT_14cb7d0e0;
    local_228 = DAT_14cb7d0e8;
    local_240 = local_1f0;
    local_238 = local_1e8;
    local_250 = *puVar1;
    local_248 = *(undefined4 *)(param_1 + 0x28);
    FUN_14884572d(&local_170);
    uVar7 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x180))();
    lVar6 = FUN_140149a73(uVar7,0);
    if (lVar6 != 0) {
      FUN_140bc53f1(&local_170,local_1d0,lVar6,0);
    }
    local_260 = _DAT_14cb7d0f8;
    local_258 = DAT_14cb7d100;
    local_270 = local_1f0;
    local_268 = local_1e8;
    local_280 = *puVar1;
    local_278 = *(undefined4 *)(param_1 + 0x28);
    FUN_14884572d(local_1a8);
    uVar7 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x180))();
    local_290[0] = 0;
    local_28c = 0;
    local_284 = 0;
    FUN_144976b9c(local_290,local_1c0);
    lVar6 = FUN_140149a73(uVar7,0);
    if (lVar6 != 0) {
      FUN_140bc53f1(local_1a8,local_290,lVar6,0);
    }
    *(undefined4 *)(param_1 + 0x110) = local_1e8;
    *(undefined8 *)(param_1 + 0x108) = local_1f0;
    if (local_180 != 0) {
      FUN_1400020a8();
    }
    if (local_148 != 0) {
      FUN_1400020a8();
    }
    FUN_1409838b8(local_138);
    if (local_78 != 0) {
      FUN_1400020a8();
    }
    if (local_50 != 0) {
      FUN_1400020a8();
    }
  }
  if (local_1b8 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_2b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1441abb4c FUN_1441abb4c body=48 status=ok
// SIG undefined FUN_1441abb4c(void)

void FUN_1441abb4c(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  char cVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  cVar2 = FUN_14883d960(param_2 + 0x38,L"Finished");
  if (cVar2 == '\0') {
    return;
  }
  FUN_148d81e82(uVar1);
  return;
}



// FUNCTION 1441abb7c FUN_1441abb7c body=298 status=ok
// SIG undefined FUN_1441abb7c(void)

undefined8 FUN_1441abb7c(longlong param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  char cVar4;
  DWORD DVar5;
  DWORD DVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_1441abca0;
    if (iVar1 == 1) {
      DVar5 = FUN_140ad26c0();
      DVar6 = GetCurrentThreadId();
      if (DVar5 == DVar6) goto LAB_1441abca0;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
    lVar9 = local_30;
  }
  else {
LAB_1441abca0:
    lVar9 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar8 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1441abc2b;
    lVar7 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar7 != 0) &&
       ((*(int *)(lVar7 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar7 + 8) & 0x10200000) == 0)))) {
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      cVar4 = FUN_14883d960(param_2 + 0x38,L"Finished");
      uVar8 = 1;
      if (cVar4 != '\0') {
        FUN_148d81e82(uVar3);
      }
      goto LAB_1441abc2b;
    }
  }
  uVar8 = 0;
LAB_1441abc2b:
  if ((lVar9 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar9);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441abca8 FUN_1441abca8 body=852 status=ok
// SIG undefined FUN_1441abca8(void)

void FUN_1441abca8(longlong param_1)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined4 local_70;
  undefined8 *local_68;
  int local_60;
  undefined8 *local_58;
  ulonglong uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  iVar9 = *(int *)(*(longlong *)(param_1 + 0x18) + 0x114);
  if (iVar9 == 0) {
LAB_1441abd69:
    uVar6 = 0;
  }
  else {
    uVar1 = *(uint *)(*(longlong *)(param_1 + 0x18) + 0x110);
    uVar6 = 0;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      puVar7 = (undefined8 *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((puVar7 == (undefined8 *)0x0) ||
         ((*(int *)(puVar7 + 2) != iVar9 || ((*(uint *)(puVar7 + 1) & 0x10200000) != 0))))
      goto LAB_1441abd69;
      uVar6 = *puVar7;
    }
  }
  lVar3 = FUN_14040226a(uVar6,0);
  if (((lVar3 == 0) || (plVar4 = (longlong *)FUN_1401499e8(lVar3), plVar4 == (longlong *)0x0)) ||
     (lVar3 = FUN_143dd97c6(param_1), lVar3 == 0)) goto LAB_1441abd43;
  lVar5 = FUN_148d82910(param_1);
  local_58 = (undefined8 *)0x0;
  uStack_50 = 0;
  local_70 = *(undefined4 *)(lVar5 + 0x14);
  local_78 = *(undefined8 *)(lVar5 + 0xc);
  local_68 = (undefined8 *)0x0;
  local_60 = 1;
  FUN_1446dd7be(&local_68,1,0);
  *(undefined4 *)(local_68 + 1) = local_70;
  *local_68 = local_78;
  cVar2 = FUN_143dd9c4e(lVar3,&local_68,&local_58);
  if (local_68 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if (cVar2 != '\0') {
    *(undefined4 *)(param_1 + 0x108) = *(undefined4 *)(local_58 + 1);
    *(undefined8 *)(param_1 + 0x100) = *local_58;
    FUN_1447715ec(param_1 + 0x110,local_58 + 2);
    lVar3 = *(longlong *)(param_1 + 0x18);
    local_68 = (undefined8 *)0x0;
    local_60 = 0;
    FUN_1446efa72(&local_68,0,3,0x10);
    puVar7 = local_68;
    local_60 = 3;
    *local_68 = &PTR_LAB_14b3fc100;
    LOCK();
    UNLOCK();
    lVar8 = DAT_14c758608 + 1;
    lVar5 = DAT_14c758608 + 1;
    if (lVar8 == 0) {
      LOCK();
      UNLOCK();
      lVar8 = DAT_14c758608 + 2;
      lVar5 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar5;
    local_68[2] = lVar8;
    *local_68 = &PTR_FUN_14b97c560;
    local_68[3] = 0;
    iVar9 = 0;
    if (lVar3 != 0) {
      uVar1 = *(uint *)(lVar3 + 0xc);
      *(uint *)(local_68 + 3) = uVar1;
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar3 = 0;
      }
      iVar9 = *(int *)(lVar3 + 0x10);
      if (*(int *)(lVar3 + 0x10) == 0) {
        LOCK();
        iVar9 = DAT_14c964868 + 1;
        UNLOCK();
        iVar10 = DAT_14c964868 + 1;
        bVar11 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar9;
        if (bVar11) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar10);
        }
        LOCK();
        iVar9 = *(int *)(lVar3 + 0x10);
        bVar11 = iVar9 == 0;
        if (bVar11) {
          *(int *)(lVar3 + 0x10) = iVar10;
          iVar9 = 0;
        }
        UNLOCK();
        if (bVar11) {
          iVar9 = iVar10;
        }
      }
    }
    *(int *)((longlong)puVar7 + 0x1c) = iVar9;
    puVar7[4] = param_1;
    (**(code **)(*plVar4 + 0x70))(plVar4,&local_78,param_1 + 0x100,&local_68);
    *(undefined8 *)(param_1 + 0xf8) = local_78;
    uVar6 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x180))();
    uVar6 = FUN_14883d4c2(param_1 + 0x100,uVar6);
    FUN_148d82984(param_1,uVar6);
    if (local_60 != 0) {
      if (local_68 == (undefined8 *)0x0) goto LAB_1441abdeb;
      (**(code **)*local_68)(local_68,0);
      FUN_1446efa72(&local_68,0,0,0x10);
      local_60 = 0;
    }
    if (local_68 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_1441abdeb:
  FUN_1405d7ab2(local_58,uStack_50 & 0xffffffff);
  if (local_58 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_1441abd43:
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1441abffe FUN_1441abffe body=29 status=ok
// SIG undefined FUN_1441abffe(void)

undefined8 FUN_1441abffe(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1441ac19a FUN_1441ac19a body=93 status=ok
// SIG undefined FUN_1441ac19a(void)

void FUN_1441ac19a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b97b250;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b97c5d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1441ac1f8 FUN_1441ac1f8 body=93 status=ok
// SIG undefined FUN_1441ac1f8(void)

void FUN_1441ac1f8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b97b250;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b97c5d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1441ac256 FUN_1441ac256 body=126 status=ok
// SIG undefined FUN_1441ac256(void)

void FUN_1441ac256(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b97b250;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b97c5d0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001441ac2c5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1441ac2d4 FUN_1441ac2d4 body=103 status=ok
// SIG undefined FUN_1441ac2d4(void)

void FUN_1441ac2d4(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  longlong *plVar1;
  undefined1 uVar2;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  int iStack_1c;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_3;
  uStack_24 = param_3[1];
  uStack_20 = param_3[2];
  iStack_1c = param_3[3];
  plVar1 = *(longlong **)(param_1 + 0x20);
  if ((char)local_28 == '\x01') {
    uVar2 = iStack_1c != 0;
  }
  else {
    uVar2 = FUN_140321d1a(&local_28);
  }
  *(undefined1 *)((longlong)plVar1 + 0x124) = uVar2;
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x0001441ac326. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x50))(plVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441ac33c FUN_1441ac33c body=317 status=ok
// SIG undefined FUN_1441ac33c(void)

undefined8 FUN_1441ac33c(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  DWORD DVar4;
  DWORD DVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined1 uVar9;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_1441ac473;
    if (iVar1 == 1) {
      DVar4 = FUN_140ad26c0();
      DVar5 = GetCurrentThreadId();
      if (DVar4 == DVar5) goto LAB_1441ac473;
    }
    FUN_140192332(param_1 + 0x18,&local_38,0);
    lVar8 = CONCAT44(uStack_34,local_38);
  }
  else {
LAB_1441ac473:
    lVar8 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar7 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1441ac41a;
    lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar6 != 0) &&
       ((*(int *)(lVar6 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar6 + 8) & 0x10200000) == 0)))) {
      local_38 = *param_3;
      uStack_34 = param_3[1];
      uStack_30 = param_3[2];
      iStack_2c = param_3[3];
      plVar3 = *(longlong **)(param_1 + 0x20);
      if ((char)local_38 == '\x01') {
        uVar9 = iStack_2c != 0;
      }
      else {
        uVar9 = FUN_140321d1a(&local_38);
      }
      *(undefined1 *)((longlong)plVar3 + 0x124) = uVar9;
      (**(code **)(*plVar3 + 0x50))(plVar3);
      uVar7 = 1;
      goto LAB_1441ac41a;
    }
  }
  uVar7 = 0;
LAB_1441ac41a:
  if ((lVar8 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar8);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441ac47a FUN_1441ac47a body=29 status=ok
// SIG undefined FUN_1441ac47a(void)

undefined8 FUN_1441ac47a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1441ac616 FUN_1441ac616 body=93 status=ok
// SIG undefined FUN_1441ac616(void)

void FUN_1441ac616(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b97b250;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b97c640;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1441ac674 FUN_1441ac674 body=93 status=ok
// SIG undefined FUN_1441ac674(void)

void FUN_1441ac674(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b97b250;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b97c640;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1441ac6d2 FUN_1441ac6d2 body=126 status=ok
// SIG undefined FUN_1441ac6d2(void)

void FUN_1441ac6d2(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b97b250;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b97c640;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001441ac741. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1441ac794 FUN_1441ac794 body=318 status=ok
// SIG undefined FUN_1441ac794(void)

ulonglong FUN_1441ac794(longlong param_1,undefined8 param_2,char *param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  DWORD DVar4;
  DWORD DVar5;
  longlong lVar6;
  ulonglong uVar7;
  bool bVar8;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar2 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar2 == 2) goto LAB_1441ac8cc;
    if (iVar2 == 1) {
      DVar4 = FUN_140ad26c0();
      DVar5 = GetCurrentThreadId();
      if (DVar4 == DVar5) goto LAB_1441ac8cc;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_1441ac8cc:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar3 = *(uint *)(param_1 + 0x18);
    uVar7 = 0;
    if (((int)uVar3 < 0) || (DAT_14c9647dc <= (int)uVar3)) goto LAB_1441ac87f;
    lVar6 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    if ((lVar6 != 0) && (*(int *)(lVar6 + 0x10) == *(int *)(param_1 + 0x1c))) {
      uVar7 = 0;
      if ((*(uint *)(lVar6 + 8) & 0x10200000) != 0) goto LAB_1441ac87f;
      cVar1 = *param_3;
      if (cVar1 == '\x03') {
        bVar8 = *(longlong *)(param_3 + 4) == 0;
LAB_1441ac86d:
        uVar7 = (ulonglong)!bVar8;
      }
      else if (cVar1 == '\x02') {
        uVar7 = (ulonglong)*(uint *)(param_3 + 0xc);
      }
      else if (cVar1 == '\x01') {
        bVar8 = *(uint *)(param_3 + 0xc) == 0;
        goto LAB_1441ac86d;
      }
      FUN_1441a1236(*(undefined8 *)(param_1 + 0x20),uVar7);
      uVar7 = CONCAT71((int7)(uVar7 >> 8),1);
      goto LAB_1441ac87f;
    }
  }
  uVar7 = 0;
LAB_1441ac87f:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441ac8d4 FUN_1441ac8d4 body=29 status=ok
// SIG undefined FUN_1441ac8d4(void)

undefined8 FUN_1441ac8d4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1441aca70 FUN_1441aca70 body=93 status=ok
// SIG undefined FUN_1441aca70(void)

void FUN_1441aca70(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b97b250;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b97c6b0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1441acace FUN_1441acace body=93 status=ok
// SIG undefined FUN_1441acace(void)

void FUN_1441acace(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b97b250;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b97c6b0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1441acb2c FUN_1441acb2c body=126 status=ok
// SIG undefined FUN_1441acb2c(void)

void FUN_1441acb2c(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b97b250;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b97c6b0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001441acb9b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1441acbee FUN_1441acbee body=318 status=ok
// SIG undefined FUN_1441acbee(void)

ulonglong FUN_1441acbee(longlong param_1,undefined8 param_2,char *param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  DWORD DVar4;
  DWORD DVar5;
  longlong lVar6;
  ulonglong uVar7;
  bool bVar8;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar2 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar2 == 2) goto LAB_1441acd26;
    if (iVar2 == 1) {
      DVar4 = FUN_140ad26c0();
      DVar5 = GetCurrentThreadId();
      if (DVar4 == DVar5) goto LAB_1441acd26;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_1441acd26:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar3 = *(uint *)(param_1 + 0x18);
    uVar7 = 0;
    if (((int)uVar3 < 0) || (DAT_14c9647dc <= (int)uVar3)) goto LAB_1441accd9;
    lVar6 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    if ((lVar6 != 0) && (*(int *)(lVar6 + 0x10) == *(int *)(param_1 + 0x1c))) {
      uVar7 = 0;
      if ((*(uint *)(lVar6 + 8) & 0x10200000) != 0) goto LAB_1441accd9;
      cVar1 = *param_3;
      if (cVar1 == '\x03') {
        bVar8 = *(longlong *)(param_3 + 4) == 0;
LAB_1441accc7:
        uVar7 = (ulonglong)!bVar8;
      }
      else if (cVar1 == '\x02') {
        uVar7 = (ulonglong)*(uint *)(param_3 + 0xc);
      }
      else if (cVar1 == '\x01') {
        bVar8 = *(uint *)(param_3 + 0xc) == 0;
        goto LAB_1441accc7;
      }
      FUN_1441a14e2(*(undefined8 *)(param_1 + 0x20),uVar7);
      uVar7 = CONCAT71((int7)(uVar7 >> 8),1);
      goto LAB_1441accd9;
    }
  }
  uVar7 = 0;
LAB_1441accd9:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441acd2e FUN_1441acd2e body=29 status=ok
// SIG undefined FUN_1441acd2e(void)

undefined8 FUN_1441acd2e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1441aceca FUN_1441aceca body=101 status=ok
// SIG undefined FUN_1441aceca(void)

void FUN_1441aceca(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3fc100;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b97c720;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1441acf30 FUN_1441acf30 body=101 status=ok
// SIG undefined FUN_1441acf30(void)

void FUN_1441acf30(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3fc100;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b97c720;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1441acf96 FUN_1441acf96 body=134 status=ok
// SIG undefined FUN_1441acf96(void)

void FUN_1441acf96(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b3fc100;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b97c720;
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
                    /* WARNING: Could not recover jumptable at 0x0001441ad00d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1441ad01c FUN_1441ad01c body=106 status=ok
// SIG undefined FUN_1441ad01c(void)

void FUN_1441ad01c(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_3;
  local_20 = *(undefined4 *)(param_3 + 1);
  lVar1 = *(longlong *)(param_1 + 0x20);
  uVar2 = FUN_140d7fcdc();
  lVar3 = (longlong)*(int *)(param_1 + 0x28) * 0x20 + *(longlong *)(lVar1 + 0x108);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    FUN_148d7ad16(lVar1,lVar3,uVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48,lVar3);
}



// FUNCTION 1441ad088 FUN_1441ad088 body=326 status=ok
// SIG undefined FUN_1441ad088(void)

undefined8 FUN_1441ad088(longlong param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_1441ad1c8;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1441ad1c8;
    }
    FUN_140192332(param_1 + 0x18,&local_40,0);
    lVar7 = local_40;
  }
  else {
LAB_1441ad1c8:
    lVar7 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar5 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1441ad13c;
    lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if ((lVar6 != 0) &&
       ((*(int *)(lVar6 + 0x10) == *(int *)(param_1 + 0x1c) &&
        ((*(uint *)(lVar6 + 8) & 0x10200000) == 0)))) {
      local_40 = *param_3;
      local_38 = (undefined4)param_3[1];
      lVar6 = *(longlong *)(param_1 + 0x20);
      uVar5 = FUN_140d7fcdc(&local_40,param_2);
      FUN_148d7ad16(lVar6,(longlong)*(int *)(param_1 + 0x28) * 0x20 + *(longlong *)(lVar6 + 0x108),
                    uVar5);
      uVar5 = 1;
      goto LAB_1441ad13c;
    }
  }
  uVar5 = 0;
LAB_1441ad13c:
  if ((lVar7 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar7);
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441ad1d0 FUN_1441ad1d0 body=68 status=ok
// SIG undefined FUN_1441ad1d0(void)

undefined8 * FUN_1441ad1d0(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b97cf00;
  plVar2 = (longlong *)param_1[4];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1441ad214 FUN_1441ad214 body=91 status=ok
// SIG undefined FUN_1441ad214(void)

bool FUN_1441ad214(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_1441ad244;
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
    lVar6 = *(longlong *)(param_1 + 0x18);
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
LAB_1441ad244:
  return lVar6 == param_2;
}



// FUNCTION 1441ad270 FUN_1441ad270 body=68 status=ok
// SIG undefined FUN_1441ad270(void)

undefined8 * FUN_1441ad270(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b97cf70;
  plVar2 = (longlong *)param_1[4];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1441ad2b4 FUN_1441ad2b4 body=91 status=ok
// SIG undefined FUN_1441ad2b4(void)

bool FUN_1441ad2b4(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_1441ad2e4;
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
    lVar6 = *(longlong *)(param_1 + 0x18);
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
LAB_1441ad2e4:
  return lVar6 == param_2;
}



// FUNCTION 1441ad310 FUN_1441ad310 body=68 status=ok
// SIG undefined FUN_1441ad310(void)

undefined8 * FUN_1441ad310(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b97cfe0;
  plVar2 = (longlong *)param_1[4];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1441ad354 FUN_1441ad354 body=91 status=ok
// SIG undefined FUN_1441ad354(void)

bool FUN_1441ad354(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_1441ad384;
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
    lVar6 = *(longlong *)(param_1 + 0x18);
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
LAB_1441ad384:
  return lVar6 == param_2;
}



// FUNCTION 1441ad3cc FUN_1441ad3cc body=68 status=ok
// SIG undefined FUN_1441ad3cc(void)

undefined8 * FUN_1441ad3cc(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b97d050;
  plVar2 = (longlong *)param_1[4];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1441ad42c FUN_1441ad42c body=64 status=ok
// SIG undefined FUN_1441ad42c(void)

undefined8 * FUN_1441ad42c(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b97d0e0;
  plVar2 = (longlong *)param_1[4];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1441ad470 FUN_1441ad470 body=81 status=ok
// SIG undefined FUN_1441ad470(void)

undefined8 FUN_1441ad470(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return 0;
      }
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
    uVar6 = *(undefined8 *)(param_1 + 0x18);
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
  return uVar6;
}



// FUNCTION 1441ad4c8 FUN_1441ad4c8 body=89 status=ok
// SIG undefined FUN_1441ad4c8(void)

bool FUN_1441ad4c8(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_1441ad513;
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
    lVar6 = *(longlong *)(param_1 + 0x18);
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
LAB_1441ad513:
  return lVar6 == param_2;
}



// FUNCTION 1441ad53e FUN_1441ad53e body=118 status=ok
// SIG undefined FUN_1441ad53e(void)

void FUN_1441ad53e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b961ce0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b97d0e0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1441ad5b4 FUN_1441ad5b4 body=118 status=ok
// SIG undefined FUN_1441ad5b4(void)

void FUN_1441ad5b4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b961ce0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b97d0e0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1441ad62a FUN_1441ad62a body=156 status=ok
// SIG undefined FUN_1441ad62a(void)

void FUN_1441ad62a(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined8 uVar3;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b961ce0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b97d0e0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar3;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar3 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar3 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001441ad6b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1441ad6c6 FUN_1441ad6c6 body=105 status=ok
// SIG undefined FUN_1441ad6c6(void)

void FUN_1441ad6c6(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_1441ad71d:
    (**(code **)(param_1 + 0x28))(0);
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_1441ad71d;
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
    (**(code **)(param_1 + 0x28))(*(undefined8 *)(param_1 + 0x18));
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
                    /* WARNING: Could not recover jumptable at 0x0001441ad719. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1441ad730 FUN_1441ad730 body=104 status=ok
// SIG undefined FUN_1441ad730(void)

ulonglong FUN_1441ad730(longlong param_1)

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
LAB_1441ad78d:
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_1441ad78d;
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



// FUNCTION 1441ad798 FUN_1441ad798 body=64 status=ok
// SIG undefined FUN_1441ad798(void)

undefined8 * FUN_1441ad798(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b97d150;
  plVar2 = (longlong *)param_1[4];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1441ad7dc FUN_1441ad7dc body=81 status=ok
// SIG undefined FUN_1441ad7dc(void)

undefined8 FUN_1441ad7dc(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return 0;
      }
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
    uVar6 = *(undefined8 *)(param_1 + 0x18);
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
  return uVar6;
}



// FUNCTION 1441ad834 FUN_1441ad834 body=89 status=ok
// SIG undefined FUN_1441ad834(void)

bool FUN_1441ad834(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_1441ad87f;
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
    lVar6 = *(longlong *)(param_1 + 0x18);
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
LAB_1441ad87f:
  return lVar6 == param_2;
}



// FUNCTION 1441ad8aa FUN_1441ad8aa body=118 status=ok
// SIG undefined FUN_1441ad8aa(void)

void FUN_1441ad8aa(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b982140;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b97d150;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1441ad920 FUN_1441ad920 body=118 status=ok
// SIG undefined FUN_1441ad920(void)

void FUN_1441ad920(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b982140;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b97d150;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1441ad996 FUN_1441ad996 body=156 status=ok
// SIG undefined FUN_1441ad996(void)

void FUN_1441ad996(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined8 uVar3;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b982140;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b97d150;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar3;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar3 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar3 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001441ada22. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1441ada32 FUN_1441ada32 body=98 status=ok
// SIG undefined FUN_1441ada32(void)

void FUN_1441ada32(longlong param_1)

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
        (**(code **)(param_1 + 0x28))(*(undefined8 *)(param_1 + 0x18));
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
                    /* WARNING: Could not recover jumptable at 0x0001441ada7b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001441ada8a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))(0);
  return;
}



// FUNCTION 1441ada94 FUN_1441ada94 body=94 status=ok
// SIG undefined FUN_1441ada94(void)

ulonglong FUN_1441ada94(longlong param_1)

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
LAB_1441adae7:
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_1441adae7;
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



// FUNCTION 1441adaf2 FUN_1441adaf2 body=64 status=ok
// SIG undefined FUN_1441adaf2(void)

undefined8 * FUN_1441adaf2(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b97d1c0;
  plVar2 = (longlong *)param_1[4];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1441adb36 FUN_1441adb36 body=81 status=ok
// SIG undefined FUN_1441adb36(void)

undefined8 FUN_1441adb36(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return 0;
      }
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
    uVar6 = *(undefined8 *)(param_1 + 0x18);
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
  return uVar6;
}



// FUNCTION 1441adb8e FUN_1441adb8e body=89 status=ok
// SIG undefined FUN_1441adb8e(void)

bool FUN_1441adb8e(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_1441adbd9;
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
    lVar6 = *(longlong *)(param_1 + 0x18);
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
LAB_1441adbd9:
  return lVar6 == param_2;
}



// FUNCTION 1441adc04 FUN_1441adc04 body=118 status=ok
// SIG undefined FUN_1441adc04(void)

void FUN_1441adc04(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3fc170;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b97d1c0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1441adc7a FUN_1441adc7a body=118 status=ok
// SIG undefined FUN_1441adc7a(void)

void FUN_1441adc7a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3fc170;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b97d1c0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1441adcf0 FUN_1441adcf0 body=156 status=ok
// SIG undefined FUN_1441adcf0(void)

void FUN_1441adcf0(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined8 uVar3;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b3fc170;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b97d1c0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar3;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar3 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar3 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001441add7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1441add8c FUN_1441add8c body=98 status=ok
// SIG undefined FUN_1441add8c(void)

void FUN_1441add8c(longlong param_1)

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
        (**(code **)(param_1 + 0x28))(*(undefined8 *)(param_1 + 0x18));
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
                    /* WARNING: Could not recover jumptable at 0x0001441addd5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001441adde4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))(0);
  return;
}



// FUNCTION 1441addee FUN_1441addee body=94 status=ok
// SIG undefined FUN_1441addee(void)

ulonglong FUN_1441addee(longlong param_1)

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
LAB_1441ade41:
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_1441ade41;
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



// FUNCTION 1441ade4c FUN_1441ade4c body=121 status=ok
// SIG undefined FUN_1441ade4c(void)

void FUN_1441ade4c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14b351f30;
  plVar3 = *(longlong **)(param_1 + 0x58);
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
  FUN_144760e21(*(undefined8 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x38));
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1400020a8();
  }
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001441adec1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 1441adec6 FUN_1441adec6 body=29 status=ok
// SIG undefined FUN_1441adec6(void)

undefined8 FUN_1441adec6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1441adee4 FUN_1441adee4 body=91 status=ok
// SIG undefined FUN_1441adee4(void)

bool FUN_1441adee4(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_1441adf14;
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
    lVar6 = *(longlong *)(param_1 + 0x18);
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
LAB_1441adf14:
  return lVar6 == param_2;
}



// FUNCTION 1441adf5c FUN_1441adf5c body=91 status=ok
// SIG undefined FUN_1441adf5c(void)

bool FUN_1441adf5c(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_1441adf8c;
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
    lVar6 = *(longlong *)(param_1 + 0x18);
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
LAB_1441adf8c:
  return lVar6 == param_2;
}



// FUNCTION 1441adfd4 FUN_1441adfd4 body=68 status=ok
// SIG undefined FUN_1441adfd4(void)

undefined8 * FUN_1441adfd4(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b97d400;
  plVar2 = (longlong *)param_1[4];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1441ae034 FUN_1441ae034 body=64 status=ok
// SIG undefined FUN_1441ae034(void)

undefined8 * FUN_1441ae034(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b97d470;
  plVar2 = (longlong *)param_1[5];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1441ae088 FUN_1441ae088 body=118 status=ok
// SIG undefined FUN_1441ae088(void)

void FUN_1441ae088(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e6310;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b97d470;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  lVar2 = *(longlong *)(param_1 + 0x28);
  puVar1[5] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 1441ae0fe FUN_1441ae0fe body=118 status=ok
// SIG undefined FUN_1441ae0fe(void)

void FUN_1441ae0fe(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e6310;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b97d470;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  lVar2 = *(longlong *)(param_1 + 0x28);
  puVar1[5] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 1441ae174 FUN_1441ae174 body=156 status=ok
// SIG undefined FUN_1441ae174(void)

void FUN_1441ae174(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  longlong lVar3;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b3e6310;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b97d470;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)uVar2;
  p_Var1->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  lVar3 = *(longlong *)(param_1 + 0x28);
  p_Var1->Flags = (int)lVar3;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)lVar3 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)lVar3 >> 0x30);
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
    UNLOCK();
  }
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001441ae200. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1441ae230 FUN_1441ae230 body=42 status=ok
// SIG undefined FUN_1441ae230(void)

undefined8 FUN_1441ae230(longlong param_1)

{
  if (((*(longlong *)(param_1 + 0x20) != 0) && (*(longlong *)(param_1 + 0x28) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_1 + 0x28) + 8))) {
    FUN_140febfe2(*(undefined8 *)(param_1 + 0x18));
  }
  return 1;
}



// FUNCTION 1441ae25e FUN_1441ae25e body=29 status=ok
// SIG undefined FUN_1441ae25e(void)

undefined8 FUN_1441ae25e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1441ae290 FUN_1441ae290 body=85 status=ok
// SIG undefined FUN_1441ae290(void)

void FUN_1441ae290(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b97d6a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b97d630;
  return;
}



// FUNCTION 1441ae2e6 FUN_1441ae2e6 body=85 status=ok
// SIG undefined FUN_1441ae2e6(void)

void FUN_1441ae2e6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b97d6a0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b97d630;
  return;
}



// FUNCTION 1441ae33c FUN_1441ae33c body=118 status=ok
// SIG undefined FUN_1441ae33c(void)

void FUN_1441ae33c(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b97d6a0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b97d630;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001441ae3a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1441ae3b2 FUN_1441ae3b2 body=55 status=ok
// SIG undefined FUN_1441ae3b2(void)

void FUN_1441ae3b2(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x28,0x10);
  puVar1[1] = 0;
  *(undefined8 *)((longlong)puVar1 + 0xd) = 0;
  *puVar1 = &PTR_FUN_14b7bd2c0;
  puVar1[3] = 0;
  *(undefined4 *)(puVar1 + 4) = 0;
  return;
}



// FUNCTION 1441ae3ea FUN_1441ae3ea body=26 status=ok
// SIG undefined FUN_1441ae3ea(void)

undefined1 FUN_1441ae3ea(void)

{
  FUN_14001cc68(0x28,0x10);
  return 1;
}



// FUNCTION 1441ae404 FUN_1441ae404 body=29 status=ok
// SIG undefined FUN_1441ae404(void)

undefined8 FUN_1441ae404(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1441ae436 FUN_1441ae436 body=93 status=ok
// SIG undefined FUN_1441ae436(void)

void FUN_1441ae436(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b97d990;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1441ae494 FUN_1441ae494 body=93 status=ok
// SIG undefined FUN_1441ae494(void)

void FUN_1441ae494(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b97d990;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1441ae4f2 FUN_1441ae4f2 body=126 status=ok
// SIG undefined FUN_1441ae4f2(void)

void FUN_1441ae4f2(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c8830;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b97d990;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001441ae561. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1441ae57a FUN_1441ae57a body=20 status=ok
// SIG undefined FUN_1441ae57a(void)

undefined1 FUN_1441ae57a(longlong param_1)

{
  FUN_1441ae58e(param_1 + 0x18);
  return 1;
}



// FUNCTION 1441ae58e FUN_1441ae58e body=123 status=ok
// SIG undefined FUN_1441ae58e(void)

void FUN_1441ae58e(uint *param_1)

{
  uint uVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  if (param_1[1] != 0) {
    uVar1 = *param_1;
    uVar3 = 0;
    if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_1441ae5d9;
    puVar4 = (undefined8 *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if ((puVar4 != (undefined8 *)0x0) &&
       ((*(uint *)(puVar4 + 2) == param_1[1] && ((*(uint *)(puVar4 + 1) & 0x10200000) == 0)))) {
      uVar3 = *puVar4;
      goto LAB_1441ae5d9;
    }
  }
  uVar3 = 0;
LAB_1441ae5d9:
  plVar2 = (longlong *)FUN_14133cf3b(uVar3);
  if (plVar2 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001441ae5fb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x60))(plVar2,1,*(undefined8 *)(param_1 + 2),0);
    return;
  }
  return;
}



// FUNCTION 1441ae60a FUN_1441ae60a body=29 status=ok
// SIG undefined FUN_1441ae60a(void)

undefined8 FUN_1441ae60a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1441ae644 FUN_1441ae644 body=93 status=ok
// SIG undefined FUN_1441ae644(void)

void FUN_1441ae644(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b968bc0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b97da70;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1441ae6a2 FUN_1441ae6a2 body=93 status=ok
// SIG undefined FUN_1441ae6a2(void)

void FUN_1441ae6a2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b968bc0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b97da70;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1441ae700 FUN_1441ae700 body=126 status=ok
// SIG undefined FUN_1441ae700(void)

void FUN_1441ae700(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b968bc0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b97da70;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001441ae76f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1441ae77e FUN_1441ae77e body=89 status=ok
// SIG undefined FUN_1441ae77e(void)

void FUN_1441ae77e(longlong param_1,undefined8 *param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined4 local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *param_2;
  local_18 = *(undefined4 *)(param_2 + 1);
  local_10 = 0;
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18),&local_20);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441ae7d8 FUN_1441ae7d8 body=91 status=ok
// SIG undefined FUN_1441ae7d8(void)

undefined8 FUN_1441ae7d8(longlong param_1,undefined8 *param_2)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined4 local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = *param_2;
  local_18 = *(undefined4 *)(param_2 + 1);
  local_10 = 0;
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18),&local_20);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441ae834 FUN_1441ae834 body=29 status=ok
// SIG undefined FUN_1441ae834(void)

undefined8 FUN_1441ae834(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1441ae866 FUN_1441ae866 body=93 status=ok
// SIG undefined FUN_1441ae866(void)

void FUN_1441ae866(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b972ed0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b97dae0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1441ae8c4 FUN_1441ae8c4 body=93 status=ok
// SIG undefined FUN_1441ae8c4(void)

void FUN_1441ae8c4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b972ed0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b97dae0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1441ae922 FUN_1441ae922 body=126 status=ok
// SIG undefined FUN_1441ae922(void)

void FUN_1441ae922(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b972ed0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b97dae0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001441ae991. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1441ae9a0 FUN_1441ae9a0 body=52 status=ok
// SIG undefined FUN_1441ae9a0(void)

void FUN_1441ae9a0(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  *(undefined1 *)(lVar1 + 0x174) = 0;
  uVar2 = FUN_1402ca054(*param_2,&DAT_149e06384,3);
  FUN_143df678c(lVar1,uVar2);
  return;
}



// FUNCTION 1441ae9d4 FUN_1441ae9d4 body=55 status=ok
// SIG undefined FUN_1441ae9d4(void)

undefined4 FUN_1441ae9d4(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  *(undefined1 *)(lVar1 + 0x174) = 0;
  uVar2 = FUN_1402ca054(*param_2,&DAT_149e06384,3);
  FUN_143df678c(lVar1,uVar2);
  return 1;
}



// FUNCTION 1441aea0c FUN_1441aea0c body=32 status=ok
// SIG undefined FUN_1441aea0c(void)

undefined8 * FUN_1441aea0c(undefined8 *param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_1406d51c0();
  *param_1 = *(undefined8 *)(lVar1 + 0x1d0);
  return param_1;
}



// FUNCTION 1441aea2c FUN_1441aea2c body=32 status=ok
// SIG undefined FUN_1441aea2c(void)

undefined8 * FUN_1441aea2c(undefined8 *param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_1406d51c0();
  *param_1 = *(undefined8 *)(lVar1 + 0x1d0);
  return param_1;
}



// FUNCTION 1441aea4c FUN_1441aea4c body=108 status=ok
// SIG undefined FUN_1441aea4c(void)

void FUN_1441aea4c(undefined8 *param_1,undefined8 param_2)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = *param_1;
  FUN_1400021e4(&local_30,local_28);
  FUN_143da7610(param_2,&DAT_14cbc8e60,local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441aeaba FUN_1441aeaba body=91 status=ok
// SIG undefined FUN_1441aeaba(void)

longlong FUN_1441aeaba(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  *(undefined ***)(param_2 + 0x10) = &PTR_FUN_14b97e000;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0x20) = 0;
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_1 + 8);
  uVar1 = FUN_14477b664(*(undefined8 *)(param_1 + 0x10));
  uVar1 = FUN_14477b664(uVar1);
  *(undefined8 *)(param_2 + 0x20) = uVar1;
  *(undefined8 *)(param_2 + 0x28) = *(undefined8 *)(param_1 + 0x18);
  return param_2 + 0x18;
}



// FUNCTION 1441aeb28 FUN_1441aeb28 body=29 status=ok
// SIG undefined FUN_1441aeb28(void)

undefined8 FUN_1441aeb28(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1441aeb46 FUN_1441aeb46 body=1 status=ok
// SIG undefined FUN_1441aeb46(void)

void FUN_1441aeb46(void)

{
  return;
}



// FUNCTION 1441aeb48 FUN_1441aeb48 body=1 status=ok
// SIG undefined FUN_1441aeb48(void)

void FUN_1441aeb48(void)

{
  return;
}



// FUNCTION 1441aeb4a FUN_1441aeb4a body=1 status=ok
// SIG undefined FUN_1441aeb4a(void)

void FUN_1441aeb4a(void)

{
  return;
}



// FUNCTION 1441aeb4c FUN_1441aeb4c body=1 status=ok
// SIG undefined FUN_1441aeb4c(void)

void FUN_1441aeb4c(void)

{
  return;
}



// FUNCTION 1441aeb4e FUN_1441aeb4e body=1 status=ok
// SIG undefined FUN_1441aeb4e(void)

void FUN_1441aeb4e(void)

{
  return;
}



// FUNCTION 1441aeb50 FUN_1441aeb50 body=1 status=ok
// SIG undefined FUN_1441aeb50(void)

void FUN_1441aeb50(void)

{
  return;
}



// FUNCTION 1441aeb52 FUN_1441aeb52 body=55 status=ok
// SIG undefined FUN_1441aeb52(void)

void FUN_1441aeb52(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  param_1 = (longlong *)*param_1;
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14662df4e(param_1,iVar1);
  }
  *(undefined8 *)(*param_1 + (longlong)iVar1 * 8) = uVar2;
  return;
}



// FUNCTION 1441aeb8a FUN_1441aeb8a body=363 status=ok
// SIG undefined FUN_1441aeb8a(void)

void FUN_1441aeb8a(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1441aec20;
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
LAB_1441aec20:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x18)) {
    uVar7 = uVar5 / 0x18 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x18,8);
  return;
}



// FUNCTION 1441aecfa FUN_1441aecfa body=29 status=ok
// SIG undefined FUN_1441aecfa(void)

undefined8 FUN_1441aecfa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1441aed2c FUN_1441aed2c body=93 status=ok
// SIG undefined FUN_1441aed2c(void)

void FUN_1441aed2c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e02020;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b97e340;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1441aed8a FUN_1441aed8a body=93 status=ok
// SIG undefined FUN_1441aed8a(void)

void FUN_1441aed8a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e02020;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b97e340;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1441aede8 FUN_1441aede8 body=126 status=ok
// SIG undefined FUN_1441aede8(void)

void FUN_1441aede8(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e02020;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b97e340;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001441aee57. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1441aee66 FUN_1441aee66 body=20 status=ok
// SIG undefined FUN_1441aee66(void)

undefined8 FUN_1441aee66(longlong param_1)

{
  FUN_1441aee8e(param_1 + 0x18);
  return 0;
}



// FUNCTION 1441aee7a FUN_1441aee7a body=20 status=ok
// SIG undefined FUN_1441aee7a(void)

undefined1 FUN_1441aee7a(longlong param_1)

{
  FUN_1441aee8e(param_1 + 0x18);
  return 1;
}



// FUNCTION 1441aee8e FUN_1441aee8e body=743 status=ok
// SIG undefined FUN_1441aee8e(void)

void FUN_1441aee8e(longlong *param_1)

{
  int *piVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  bool bVar12;
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
  code *local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar9 = *param_1;
  *(undefined8 *)(lVar9 + 0x78) = 0;
  plVar11 = *(longlong **)(lVar9 + 0x80);
  *(undefined8 *)(lVar9 + 0x80) = 0;
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar11 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar11 + 0x10))();
    }
  }
  lVar7 = FUN_14577a94c(lVar9);
  if ((lVar7 == 0) || (iVar6 = FUN_14490d72a(lVar7), iVar6 == 3)) goto LAB_1441aeef8;
  FUN_14132b09a(&local_58,lVar7);
  if (local_50 == (longlong *)0x0) {
LAB_1441aef6a:
    bVar12 = true;
    plVar11 = (longlong *)0x0;
  }
  else {
    iVar6 = (int)local_50[1];
    do {
      if (iVar6 == 0) {
        plVar11 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar5 = (int)local_50[1];
      bVar12 = iVar6 == iVar5;
      if (bVar12) {
        *(int *)(local_50 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
      plVar11 = local_50;
    } while (!bVar12);
    LOCK();
    piVar1 = (int *)((longlong)local_50 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_50 + 0x10))();
    }
    if (plVar11 == (longlong *)0x0) goto LAB_1441aef6a;
    if (local_58 != (code *)0x0) {
      FUN_14132cab0();
    }
    bVar12 = false;
  }
  FUN_1441aa338(lVar9,9,0);
  FUN_148d7feda(lVar9);
  uVar8 = FUN_14577a94c(lVar9);
  FUN_146010760(lVar9 + 0xb8,&local_58,uVar8,0);
  if (((local_58 != (code *)0x0) && (local_58 != DAT_14cbcd3c0)) &&
     (plVar3 = *(longlong **)(lVar7 + 0x170), plVar3 != (longlong *)0x0)) {
    lVar9 = FUN_140425b9a();
    if (((*(int *)(lVar9 + 0x38) <= *(int *)(plVar3[2] + 0x38)) &&
        (*(longlong *)(*(longlong *)(plVar3[2] + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) ==
         lVar9 + 0x30)) && (0 < *(int *)(lVar7 + 0x238))) {
      lVar9 = 0;
      do {
        iVar6 = *(int *)(*(longlong *)(lVar7 + 0x230) + 4 + lVar9 * 8);
        if (((iVar6 != 0) &&
            (uVar2 = *(uint *)(*(longlong *)(lVar7 + 0x230) + lVar9 * 8), -1 < (int)uVar2)) &&
           (((int)uVar2 < DAT_14c9647dc &&
            ((((plVar10 = (longlong *)
                          ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
               plVar10 != (longlong *)0x0 && ((int)plVar10[2] == iVar6)) &&
              ((*(uint *)(plVar10 + 1) & 0x10200000) == 0)) && (lVar4 = *plVar10, lVar4 != 0)))))) {
          if (DAT_14cb61cd0 == 0) {
            local_58 = FUN_141030f22;
            local_60 = FUN_14081d0ea;
            local_68 = &LAB_1463b31ae;
            local_78 = &LAB_1486dca4f;
            local_80 = &LAB_1464f50a6;
            local_88 = &DAT_149e063b2;
            local_90 = 0;
            local_98 = 0x10000004;
            local_a0 = 8;
            local_a8 = 0xd70;
            local_70 = &local_58;
            FUN_14081cfa3(L"/Script/GbxGame",L"GbxPlayerController",&DAT_14cb61cd0,FUN_1464f5084);
          }
          if ((*(int *)(DAT_14cb61cd0 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
               (longlong)*(int *)(DAT_14cb61cd0 + 0x38) * 8) == DAT_14cb61cd0 + 0x30)) {
            (**(code **)(*plVar3 + 0x7a0))(plVar3,lVar4);
          }
        }
        lVar9 = lVar9 + 1;
      } while (lVar9 < *(int *)(lVar7 + 0x238));
    }
  }
  if (!bVar12) {
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
LAB_1441aeef8:
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1441af176 FUN_1441af176 body=29 status=ok
// SIG undefined FUN_1441af176(void)

undefined8 FUN_1441af176(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1441af1a8 FUN_1441af1a8 body=93 status=ok
// SIG undefined FUN_1441af1a8(void)

void FUN_1441af1a8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b972ed0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b97e3b0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1441af206 FUN_1441af206 body=93 status=ok
// SIG undefined FUN_1441af206(void)

void FUN_1441af206(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b972ed0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b97e3b0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1441af264 FUN_1441af264 body=126 status=ok
// SIG undefined FUN_1441af264(void)

void FUN_1441af264(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b972ed0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b97e3b0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001441af2d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1441af2ec FUN_1441af2ec body=20 status=ok
// SIG undefined FUN_1441af2ec(void)

undefined1 FUN_1441af2ec(longlong param_1)

{
  FUN_1441af300(param_1 + 0x18);
  return 1;
}



// FUNCTION 1441af300 FUN_1441af300 body=625 status=ok
// SIG undefined FUN_1441af300(void)

void FUN_1441af300(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  char cVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 uVar10;
  longlong lVar11;
  
  lVar3 = *param_1;
  uVar5 = FUN_1402ca054(*param_2,&DAT_149e06384,3);
  if ((char)uVar5 != '\0') {
    iVar1 = *(int *)((longlong)param_1 + 0xc);
    if (iVar1 == 0) {
      uVar6 = 0;
LAB_1441af556:
      uVar10 = 0;
    }
    else {
      uVar2 = *(uint *)(param_1 + 1);
      uVar6 = 0;
      if ((int)uVar2 < 0) goto LAB_1441af556;
      uVar10 = 0;
      if ((int)uVar2 < DAT_14c9647dc) {
        puVar7 = (undefined8 *)
                 ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
        if (((puVar7 == (undefined8 *)0x0) || (*(int *)(puVar7 + 2) != iVar1)) ||
           ((*(uint *)(puVar7 + 1) & 0x10200000) != 0)) {
          uVar6 = 0;
        }
        else {
          uVar6 = *puVar7;
        }
        puVar7 = (undefined8 *)
                 ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
        if (((puVar7 == (undefined8 *)0x0) || (*(int *)(puVar7 + 2) != iVar1)) ||
           ((*(uint *)(puVar7 + 1) & 0x10200000) != 0)) goto LAB_1441af556;
        uVar10 = *puVar7;
      }
    }
    FUN_146228670(lVar3 + 0xb8,DAT_14cbcd3c8,uVar10,uVar6);
    FUN_140628abc(lVar3,2);
  }
  cVar4 = FUN_1402ca054(*param_2,L"Cancel",6);
  lVar8 = DAT_14c9647c8;
  if (cVar4 == '\0') {
    iVar1 = *(int *)(lVar3 + 0x68);
    if (((iVar1 != 0) && (uVar2 = *(uint *)(lVar3 + 100), -1 < (int)uVar2)) &&
       ((int)uVar2 < DAT_14c9647dc)) {
      lVar11 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
      if (((lVar11 != 0) && (*(int *)(lVar11 + 0x10) == iVar1)) &&
         ((*(uint *)(lVar11 + 8) & 0x10200000) == 0)) {
        *(char *)(lVar3 + 0xc1) = (char)uVar5;
        puVar7 = (undefined8 *)
                 ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                 *(longlong *)(lVar8 + (ulonglong)(uVar2 >> 0x10) * 8));
        if (((puVar7 == (undefined8 *)0x0) || (*(int *)(puVar7 + 2) != iVar1)) ||
           ((*(uint *)(puVar7 + 1) & 0x10200000) != 0)) {
          uVar6 = 0;
        }
        else {
          uVar6 = *puVar7;
        }
        FUN_14621ea32(uVar6,uVar5);
        return;
      }
    }
    return;
  }
  if (((*(int *)((longlong)param_1 + 0xc) != 0) && (uVar2 = *(uint *)(param_1 + 1), -1 < (int)uVar2)
      ) && ((int)uVar2 < DAT_14c9647dc)) {
    plVar9 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if (((plVar9 != (longlong *)0x0) && ((int)plVar9[2] == *(int *)((longlong)param_1 + 0xc))) &&
       ((*(uint *)(plVar9 + 1) & 0x10200000) == 0)) {
      if ((*(uint *)(plVar9 + 1) & 0x10200000) == 0) {
        lVar8 = *plVar9;
      }
      else {
        lVar8 = 0;
      }
      FUN_140c125e6(lVar8 + 0x338,&DAT_14cbd9308);
    }
  }
  if (*(int *)(lVar3 + 0x68) != 0) {
    uVar2 = *(uint *)(lVar3 + 100);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1441af510;
    puVar7 = (undefined8 *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((puVar7 != (undefined8 *)0x0) &&
       ((*(int *)(puVar7 + 2) == *(int *)(lVar3 + 0x68) &&
        ((*(uint *)(puVar7 + 1) & 0x10200000) == 0)))) {
      uVar6 = *puVar7;
      goto LAB_1441af510;
    }
  }
  uVar6 = 0;
LAB_1441af510:
  FUN_148d31d08(uVar6);
  return;
}



// FUNCTION 1441af572 FUN_1441af572 body=29 status=ok
// SIG undefined FUN_1441af572(void)

undefined8 FUN_1441af572(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1441af5a4 FUN_1441af5a4 body=93 status=ok
// SIG undefined FUN_1441af5a4(void)

void FUN_1441af5a4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e02020;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b97e570;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1441af602 FUN_1441af602 body=93 status=ok
// SIG undefined FUN_1441af602(void)

void FUN_1441af602(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e02020;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b97e570;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1441af660 FUN_1441af660 body=126 status=ok
// SIG undefined FUN_1441af660(void)

void FUN_1441af660(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e02020;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b97e570;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001441af6cf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1441af6de FUN_1441af6de body=46 status=ok
// SIG undefined FUN_1441af6de(void)

bool FUN_1441af6de(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  FUN_148d80430(lVar1);
  if (*(char *)(lVar1 + 0x11c) == '\x01') {
    bVar2 = 0 < *(int *)(lVar1 + 0x118);
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}



// FUNCTION 1441af70c FUN_1441af70c body=20 status=ok
// SIG undefined FUN_1441af70c(void)

undefined1 FUN_1441af70c(longlong param_1)

{
  FUN_148d80430(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1441af720 FUN_1441af720 body=195 status=ok
// SIG undefined FUN_1441af720(void)

void FUN_1441af720(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  undefined1 auStack_78 [32];
  longlong local_58 [2];
  longlong local_48 [2];
  longlong local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(char *)(param_2 + 0x36) == '\x01') {
    FUN_1400b22c2(local_48,&DAT_149e9807e);
    FUN_1400021e4(param_2,local_58);
    FUN_1401c7f3e(&local_38,local_58,local_48);
    iVar1 = local_30 + -1;
    if (local_30 == 0) {
      iVar1 = 0;
    }
    FUN_1400020e8(*param_1,local_38,iVar1);
    if (local_38 != 0) {
      FUN_1400020a8();
    }
    if (local_58[0] != 0) {
      FUN_1400020a8();
    }
    if (local_48[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441af802 FUN_1441af802 body=12 status=ok
// SIG undefined FUN_1441af802(void)

void FUN_1441af802(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001441af80b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1441af80e FUN_1441af80e body=29 status=ok
// SIG undefined FUN_1441af80e(void)

undefined8 FUN_1441af80e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1441af82c FUN_1441af82c body=11341 status=ok
// SIG undefined FUN_1441af82c(void)

void FUN_1441af82c(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  longlong lVar14;
  undefined2 *puVar15;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  undefined4 local_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  undefined8 *local_98;
  undefined4 local_90;
  undefined8 *local_88;
  undefined4 local_80;
  undefined2 *local_78;
  int local_70;
  longlong *local_68;
  longlong *local_60;
  longlong *local_58;
  longlong *local_50;
  wchar_t *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_146635a34();
  FUN_1466208fc();
  FUN_1466296f4();
  FUN_146629232();
  FUN_14662018a();
  FUN_145779a64();
  FUN_1458851b6();
  FUN_14588e21a();
  PTR_FUN_14c763a90 = FUN_146143b00;
  local_58 = (longlong *)0x0;
  local_50._0_4_ = 0;
  FUN_1446efa72(&local_58,0,2,0x10);
  local_50._0_4_ = 2;
  *local_58 = (longlong)&PTR_LAB_14a1c87c0;
  LOCK();
  UNLOCK();
  lVar14 = DAT_14c758608 + 1;
  lVar9 = DAT_14c758608 + 1;
  if (lVar14 == 0) {
    LOCK();
    UNLOCK();
    lVar14 = DAT_14c758608 + 2;
    lVar9 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar9;
  local_58[2] = lVar14;
  *local_58 = (longlong)&PTR_FUN_14b981710;
  FUN_14106fc56(&DAT_14cb1ae58,&local_58);
  if ((int)local_50 != 0) {
    if (local_58 == (longlong *)0x0) goto LAB_1441af955;
    (**(code **)*local_58)(local_58,0);
    FUN_1446efa72(&local_58,0,0,0x10);
    local_50._0_4_ = 0;
  }
  if (local_58 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_1441af955:
  if (DAT_14cb7fbc0 != 2) {
    FUN_1446efa72(&DAT_14cb7fbb8,0,2,0x10);
    DAT_14cb7fbc0 = 2;
  }
  puVar2 = DAT_14cb7fbb8;
  *DAT_14cb7fbb8 = &PTR_LAB_14b981a30;
  LOCK();
  UNLOCK();
  lVar14 = DAT_14c758608 + 1;
  lVar9 = DAT_14c758608 + 1;
  if (lVar14 == 0) {
    LOCK();
    UNLOCK();
    lVar14 = DAT_14c758608 + 2;
    lVar9 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar9;
  puVar2[2] = lVar14;
  *puVar2 = &PTR_FUN_14b9819c0;
  puVar2[3] = FUN_1441b25a6;
  if (DAT_14cb80c58 != 2) {
    FUN_1446efa72(&DAT_14cb80c50,0,2,0x10);
    DAT_14cb80c58 = 2;
  }
  puVar2 = DAT_14cb80c50;
  *DAT_14cb80c50 = &PTR_LAB_14b981b10;
  LOCK();
  UNLOCK();
  lVar14 = DAT_14c758608 + 1;
  lVar9 = DAT_14c758608 + 1;
  if (lVar14 == 0) {
    LOCK();
    UNLOCK();
    lVar14 = DAT_14c758608 + 2;
    lVar9 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar9;
  puVar2[2] = lVar14;
  *puVar2 = &PTR_FUN_14b981aa0;
  puVar2[3] = FUN_1441b25c5;
  local_58._0_4_ = 0x15;
  FUN_145c9dc5e(&DAT_14cb767f8,&local_58);
  local_58._0_4_ = 0xf;
  FUN_145c9dc5e(&DAT_14cb767f8,&local_58);
  local_58._0_4_ = 1;
  FUN_145c9dc5e(&DAT_14cb767f8,&local_58);
  local_58._0_4_ = 0xe;
  FUN_145c9dc5e(&DAT_14cb76808,&local_58);
  local_58 = (longlong *)CONCAT44(local_58._4_4_,0x16);
  FUN_145c9dc5e(&DAT_14cb76808,&local_58);
  plVar8 = (longlong *)FUN_140cc62c2();
  if ((int)plVar8[1] != 2) {
    FUN_1446efa72(plVar8,0,2,0x10);
    *(undefined4 *)(plVar8 + 1) = 2;
  }
  puVar2 = (undefined8 *)*plVar8;
  *puVar2 = &PTR_LAB_149f0f120;
  LOCK();
  UNLOCK();
  lVar14 = DAT_14c758608 + 1;
  lVar9 = DAT_14c758608 + 1;
  if (lVar14 == 0) {
    LOCK();
    UNLOCK();
    lVar14 = DAT_14c758608 + 2;
    lVar9 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar9;
  puVar2[2] = lVar14;
  *puVar2 = &PTR_FUN_14b981b80;
  puVar2[3] = FUN_140b0af46;
  lVar9 = FUN_140cc62c2();
  if (*(int *)(lVar9 + 0x18) != 2) {
    FUN_1446efa72((longlong *)(lVar9 + 0x10),0,2,0x10);
    *(undefined4 *)(lVar9 + 0x18) = 2;
  }
  puVar2 = *(undefined8 **)(lVar9 + 0x10);
  *puVar2 = &PTR_LAB_14b981c60;
  LOCK();
  UNLOCK();
  lVar14 = DAT_14c758608 + 1;
  lVar9 = DAT_14c758608 + 1;
  if (lVar14 == 0) {
    LOCK();
    UNLOCK();
    lVar14 = DAT_14c758608 + 2;
    lVar9 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar9;
  puVar2[2] = lVar14;
  *puVar2 = &PTR_FUN_14b981bf0;
  puVar2[3] = FUN_146620ffa;
  lVar9 = FUN_140cc62c2();
  if (*(int *)(lVar9 + 0x28) != 2) {
    FUN_1446efa72((longlong *)(lVar9 + 0x20),0,2,0x10);
    *(undefined4 *)(lVar9 + 0x28) = 2;
  }
  puVar2 = *(undefined8 **)(lVar9 + 0x20);
  *puVar2 = &PTR_LAB_149f0f120;
  LOCK();
  UNLOCK();
  lVar14 = DAT_14c758608 + 1;
  lVar9 = DAT_14c758608 + 1;
  if (lVar14 == 0) {
    LOCK();
    UNLOCK();
    lVar14 = DAT_14c758608 + 2;
    lVar9 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar9;
  puVar2[2] = lVar14;
  *puVar2 = &PTR_FUN_14b981b80;
  puVar2[3] = FUN_1411fcbf4;
  lVar9 = FUN_140cc62c2();
  if (*(int *)(lVar9 + 0x38) != 2) {
    FUN_1446efa72((longlong *)(lVar9 + 0x30),0,2,0x10);
    *(undefined4 *)(lVar9 + 0x38) = 2;
  }
  puVar2 = *(undefined8 **)(lVar9 + 0x30);
  *puVar2 = &PTR_LAB_14b981d40;
  LOCK();
  UNLOCK();
  lVar14 = DAT_14c758608 + 1;
  lVar9 = DAT_14c758608 + 1;
  if (lVar14 == 0) {
    LOCK();
    UNLOCK();
    lVar14 = DAT_14c758608 + 2;
    lVar9 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar9;
  puVar2[2] = lVar14;
  *puVar2 = &PTR_FUN_14b981cd0;
  puVar2[3] = FUN_140df7b7f;
  lVar9 = FUN_140cc62c2();
  if (*(int *)(lVar9 + 0x48) != 2) {
    FUN_1446efa72((longlong *)(lVar9 + 0x40),0,2,0x10);
    *(undefined4 *)(lVar9 + 0x48) = 2;
  }
  puVar2 = *(undefined8 **)(lVar9 + 0x40);
  *puVar2 = &PTR_LAB_14b981e20;
  LOCK();
  UNLOCK();
  lVar14 = DAT_14c758608 + 1;
  lVar9 = DAT_14c758608 + 1;
  if (lVar14 == 0) {
    LOCK();
    UNLOCK();
    lVar14 = DAT_14c758608 + 2;
    lVar9 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar9;
  puVar2[2] = lVar14;
  *puVar2 = &PTR_FUN_14b981db0;
  puVar2[3] = FUN_140c59a2c;
  if (DAT_14cb84b58 != 2) {
    FUN_1446efa72(&DAT_14cb84b50,0,2,0x10);
    DAT_14cb84b58 = 2;
  }
  puVar2 = DAT_14cb84b50;
  *DAT_14cb84b50 = &PTR_LAB_14b981f00;
  LOCK();
  UNLOCK();
  lVar14 = DAT_14c758608 + 1;
  lVar9 = DAT_14c758608 + 1;
  if (lVar14 == 0) {
    LOCK();
    UNLOCK();
    lVar14 = DAT_14c758608 + 2;
    lVar9 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar9;
  puVar2[2] = lVar14;
  *puVar2 = &PTR_FUN_14b981e90;
  puVar2[3] = FUN_140fbfb03;
  if (DAT_14cb84b68 != 2) {
    FUN_1446efa72(&DAT_14cb84b60,0,2,0x10);
    DAT_14cb84b68 = 2;
  }
  puVar2 = DAT_14cb84b60;
  *DAT_14cb84b60 = &PTR_LAB_14b981fe0;
  LOCK();
  UNLOCK();
  lVar14 = DAT_14c758608 + 1;
  lVar9 = DAT_14c758608 + 1;
  if (lVar14 == 0) {
    LOCK();
    UNLOCK();
    lVar14 = DAT_14c758608 + 2;
    lVar9 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar9;
  puVar2[2] = lVar14;
  *puVar2 = &PTR_FUN_14b981f70;
  puVar2[3] = FUN_140c8741c;
  if (DAT_14cb84b78 != 2) {
    FUN_1446efa72(&DAT_14cb84b70,0,2,0x10);
    DAT_14cb84b78 = 2;
  }
  puVar2 = DAT_14cb84b70;
  *DAT_14cb84b70 = &PTR_LAB_14b981fe0;
  LOCK();
  UNLOCK();
  lVar14 = DAT_14c758608 + 1;
  lVar9 = DAT_14c758608 + 1;
  if (lVar14 == 0) {
    LOCK();
    UNLOCK();
    lVar14 = DAT_14c758608 + 2;
    lVar9 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar9;
  puVar2[2] = lVar14;
  *puVar2 = &PTR_FUN_14b981f70;
  puVar2[3] = FUN_140c87439;
  uVar10 = FUN_140d6afb0();
  FUN_140056680(&local_68,uVar10);
  local_58 = local_68;
  iVar6 = (int)local_60 + -1;
  if ((int)local_60 == 0) {
    iVar6 = 0;
  }
  local_50 = (longlong *)CONCAT44(local_50._4_4_,iVar6);
  local_48 = L"Shaders";
  local_40 = 7;
  FUN_140bee87a(&local_78,&local_58,2);
  if (local_68 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  plVar8 = (longlong *)FUN_14054d1d4();
  puVar15 = local_78;
  if (local_70 == 0) {
    puVar15 = &DAT_149dfb77a;
  }
  cVar5 = (**(code **)(*plVar8 + 0x50))(plVar8,puVar15);
  if ((cVar5 != '\0') && (FUN_140056680(&local_58,L"/Game"), local_58 != (longlong *)0x0)) {
    FUN_1400020a8();
  }
  if (DAT_14c9a1ab0 != 0) {
    FUN_14577a14c(DAT_14c9a1ab0 + 0x580,&local_58,FUN_1441b267c);
  }
  local_58 = (longlong *)0x14a5a4cc8;
  local_50 = (longlong *)CONCAT35(local_50._5_3_,0xd);
  uVar7 = FUN_14001a6c0(&local_58,1);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c874a20) && (FUN_144b3d300(&DAT_14c874a20), DAT_14c874a20 == -1)) {
    FUN_145762954(&DAT_14c874628);
    DAT_14c874a18 = 1;
    atexit(FUN_14278de47);
    _Init_thread_footer(&DAT_14c874a20);
  }
  plVar8 = (longlong *)FUN_1402c9134(&DAT_14c874628,uVar7,&local_58,1);
  local_88 = (undefined8 *)0x0;
  local_80 = 0;
  FUN_1446efa72(&local_88,0,2,0x10);
  local_80 = 2;
  *local_88 = &PTR_LAB_14a5a4d50;
  LOCK();
  UNLOCK();
  lVar14 = DAT_14c758608 + 1;
  lVar9 = DAT_14c758608 + 1;
  if (lVar14 == 0) {
    LOCK();
    UNLOCK();
    lVar14 = DAT_14c758608 + 2;
    lVar9 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar9;
  local_88[2] = lVar14;
  *local_88 = &PTR_FUN_14a5a4ce0;
  local_88[3] = FUN_1418f05ea;
  (**(code **)(*plVar8 + 0x40))(plVar8,&local_58,&local_88);
  *(longlong **)(param_1 + 8) = local_58;
  local_98 = (undefined8 *)0x0;
  local_90 = 0;
  FUN_1446efa72(&local_98,0,2,0x10);
  local_90 = 2;
  *local_98 = &PTR_LAB_14a5a4d50;
  LOCK();
  UNLOCK();
  lVar14 = DAT_14c758608 + 1;
  lVar9 = DAT_14c758608 + 1;
  if (lVar14 == 0) {
    LOCK();
    UNLOCK();
    lVar14 = DAT_14c758608 + 2;
    lVar9 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar9;
  local_98[2] = lVar14;
  *local_98 = &PTR_FUN_14a5a4ce0;
  local_98[3] = FUN_1418f0588;
  (**(code **)(*plVar8 + 0x40))(plVar8,&local_58,&local_98);
  *(longlong **)(param_1 + 0x10) = local_58;
  local_a8 = 0;
  uStack_a0._0_4_ = 1;
  uStack_a0._4_4_ = 0;
  FUN_141518130(&local_a8,0);
  lVar9 = local_a8;
  FUN_140056680(&local_58,L"OakVehicle.GbxActorData");
  FUN_140056680(&local_68,L"OakVehicle.SpawnableData");
  FUN_141517fc0(lVar9,0x20,&local_68,&local_58);
  iVar6 = (uint)uStack_a0;
  lVar9 = (longlong)(int)(uint)uStack_a0;
  uStack_a0._0_4_ = (uint)uStack_a0 + 1;
  if (uStack_a0._4_4_ < (uint)uStack_a0) {
    FUN_141518130(&local_a8,iVar6);
  }
  lVar9 = lVar9 * 0xa0 + local_a8;
  FUN_140056680(&local_58,L"OakAINodeComponent.GbxActorDef");
  FUN_140056680(&local_68,L"OakAINodeComponent.SpawnDefinition");
  FUN_141517fc0(lVar9,0x20,&local_68,&local_58);
  uVar4 = (uint)uStack_a0;
  lVar9 = (longlong)(int)(uint)uStack_a0;
  uStack_a0._0_4_ = (uint)uStack_a0 + 1;
  if (uStack_a0._4_4_ < (uint)uStack_a0) {
    FUN_141518130(&local_a8,uVar4);
  }
  lVar9 = lVar9 * 0xa0 + local_a8;
  FUN_140056680(&local_58,L"OakCharacterDef.LootToDrop");
  FUN_140056680(&local_68,L"OakCharacterDef.loot_drops");
  FUN_141517fc0(lVar9,0x20,&local_68,&local_58);
  uVar4 = (uint)uStack_a0;
  lVar9 = (longlong)(int)(uint)uStack_a0;
  uStack_a0._0_4_ = (uint)uStack_a0 + 1;
  if (uStack_a0._4_4_ < (uint)uStack_a0) {
    FUN_141518130(&local_a8,uVar4);
  }
  lVar9 = lVar9 * 0xa0 + local_a8;
  FUN_140056680(&local_58,L"OakCharacterDef.BalanceData");
  FUN_140056680(&local_68,L"OakCharacterDef.balance_data");
  FUN_141517fc0(lVar9,0x20,&local_68,&local_58);
  uVar4 = (uint)uStack_a0;
  lVar9 = (longlong)(int)(uint)uStack_a0;
  uStack_a0._0_4_ = (uint)uStack_a0 + 1;
  if (uStack_a0._4_4_ < (uint)uStack_a0) {
    FUN_141518130(&local_a8,uVar4);
  }
  lVar9 = lVar9 * 0xa0 + local_a8;
  FUN_140056680(&local_58,L"/Script/OakGame.OakTriggerBox");
  FUN_140056680(&local_68,L"/Script/GbxGame.GbxTriggerBox");
  FUN_141517fc0(lVar9,0x10002,&local_68,&local_58);
  uVar4 = (uint)uStack_a0;
  lVar9 = (longlong)(int)(uint)uStack_a0;
  uStack_a0._0_4_ = (uint)uStack_a0 + 1;
  if (uStack_a0._4_4_ < (uint)uStack_a0) {
    FUN_141518130(&local_a8,uVar4);
  }
  lVar9 = lVar9 * 0xa0 + local_a8;
  FUN_140056680(&local_58,L"/Script/OakGame.OakTriggerCapsule");
  FUN_140056680(&local_68,L"/Script/GbxGame.GbxTriggerCapsule");
  FUN_141517fc0(lVar9,0x10002,&local_68,&local_58);
  uVar4 = (uint)uStack_a0;
  lVar9 = (longlong)(int)(uint)uStack_a0;
  uStack_a0._0_4_ = (uint)uStack_a0 + 1;
  if (uStack_a0._4_4_ < (uint)uStack_a0) {
    FUN_141518130(&local_a8,uVar4);
  }
  lVar9 = lVar9 * 0xa0 + local_a8;
  FUN_140056680(&local_58,L"/Script/OakGame.OakTriggerSphere");
  FUN_140056680(&local_68,L"/Script/GbxGame.GbxTriggerSphere");
  FUN_141517fc0(lVar9,0x10002,&local_68,&local_58);
  uVar4 = (uint)uStack_a0;
  lVar9 = (longlong)(int)(uint)uStack_a0;
  uStack_a0._0_4_ = (uint)uStack_a0 + 1;
  if (uStack_a0._4_4_ < (uint)uStack_a0) {
    FUN_141518130(&local_a8,uVar4);
  }
  lVar9 = lVar9 * 0xa0 + local_a8;
  FUN_140056680(&local_58,L"/Script/OakGame.OakTriggerVolume");
  FUN_140056680(&local_68,L"/Script/GbxGame.GbxTriggerVolume");
  FUN_141517fc0(lVar9,0x10002,&local_68,&local_58);
  uVar4 = (uint)uStack_a0;
  lVar9 = (longlong)(int)(uint)uStack_a0;
  uStack_a0._0_4_ = (uint)uStack_a0 + 1;
  if (uStack_a0._4_4_ < (uint)uStack_a0) {
    FUN_141518130(&local_a8,uVar4);
  }
  lVar9 = lVar9 * 0xa0 + local_a8;
  FUN_140056680(&local_58,L"/Script/OakGame.OakNavMesh");
  FUN_140056680(&local_68,L"/Script/GbxNav.GbxNavMesh");
  FUN_141517fc0(lVar9,0x10002,&local_68,&local_58);
  uVar4 = (uint)uStack_a0;
  lVar9 = (longlong)(int)(uint)uStack_a0;
  uStack_a0._0_4_ = (uint)uStack_a0 + 1;
  if (uStack_a0._4_4_ < (uint)uStack_a0) {
    FUN_141518130(&local_a8,uVar4);
  }
  lVar9 = lVar9 * 0xa0 + local_a8;
  FUN_140056680(&local_58,L"/Script/OakGame.GbxTrick_OakLeap");
  FUN_140056680(&local_68,L"/Script/GbxGame.GbxTrick_Leap");
  FUN_141517fc0(lVar9,0x10002,&local_68,&local_58);
  uVar4 = (uint)uStack_a0;
  lVar9 = (longlong)(int)(uint)uStack_a0;
  uStack_a0._0_4_ = (uint)uStack_a0 + 1;
  if (uStack_a0._4_4_ < (uint)uStack_a0) {
    FUN_141518130(&local_a8,uVar4);
  }
  lVar9 = lVar9 * 0xa0 + local_a8;
  FUN_140056680(&local_58,L"/Script/OakGame.OakTaggedAnimData");
  FUN_140056680(&local_68,L"/Script/GbxGame.GbxGameTaggedAnimData");
  FUN_141517fc0(lVar9,0x10002,&local_68,&local_58);
  uVar4 = (uint)uStack_a0;
  lVar9 = (longlong)(int)(uint)uStack_a0;
  uStack_a0._0_4_ = (uint)uStack_a0 + 1;
  if (uStack_a0._4_4_ < (uint)uStack_a0) {
    FUN_141518130(&local_a8,uVar4);
  }
  lVar9 = lVar9 * 0xa0 + local_a8;
  FUN_140056680(&local_58,L"/Script/OakGame.OakSpawnEncounter");
  FUN_140056680(&local_68,L"/Script/OakGame.OakSpawnGroup");
  FUN_141517fc0(lVar9,0x10002,&local_68,&local_58);
  uVar4 = (uint)uStack_a0;
  lVar9 = (longlong)(int)(uint)uStack_a0;
  uStack_a0._0_4_ = (uint)uStack_a0 + 1;
  if (uStack_a0._4_4_ < (uint)uStack_a0) {
    FUN_141518130(&local_a8,uVar4);
  }
  lVar9 = lVar9 * 0xa0 + local_a8;
  FUN_140056680(&local_58,L"/Script/OakGame.OakPerch");
  FUN_140056680(&local_68,L"/Script/GbxGame.Perch");
  FUN_141517fc0(lVar9,0x10002,&local_68,&local_58);
  uVar4 = (uint)uStack_a0;
  lVar9 = (longlong)(int)(uint)uStack_a0;
  uStack_a0._0_4_ = (uint)uStack_a0 + 1;
  if (uStack_a0._4_4_ < (uint)uStack_a0) {
    FUN_141518130(&local_a8,uVar4);
  }
  lVar9 = lVar9 * 0xa0 + local_a8;
  FUN_140056680(&local_58,L"/Script/OakGame.OakSpawnLootBehaviorMod");
  FUN_140056680(&local_68,L"/Script/OakGame.OakCharacterDropLootBehaviorMod");
  FUN_141517fc0(lVar9,4,&local_68,&local_58);
  uVar4 = (uint)uStack_a0;
  lVar9 = (longlong)(int)(uint)uStack_a0;
  uStack_a0._0_4_ = (uint)uStack_a0 + 1;
  if (uStack_a0._4_4_ < (uint)uStack_a0) {
    FUN_141518130(&local_a8,uVar4);
  }
  lVar9 = lVar9 * 0xa0 + local_a8;
  FUN_140056680(&local_58,L"/Script/GbxEngine.GbxClosestPlayerValueResolver");
  FUN_140056680(&local_68,L"/Script/OakGame.ClosestPlayerValueResolver");
  FUN_141517fc0(lVar9,4,&local_68,&local_58);
  uVar4 = (uint)uStack_a0;
  lVar9 = (longlong)(int)(uint)uStack_a0;
  uStack_a0._0_4_ = (uint)uStack_a0 + 1;
  if (uStack_a0._4_4_ < (uint)uStack_a0) {
    FUN_141518130(&local_a8,uVar4);
  }
  lVar9 = lVar9 * 0xa0 + local_a8;
  FUN_140056680(&local_58,L"/Script/OakGame.GbxMomentNodeSettings_OakMoveTo");
  FUN_140056680(&local_68,L"/Script/GbxGame.GbxMomentNodeSettings_MoveTo");
  FUN_141517fc0(lVar9,4,&local_68,&local_58);
  uVar4 = (uint)uStack_a0;
  lVar9 = (longlong)(int)(uint)uStack_a0;
  uStack_a0._0_4_ = (uint)uStack_a0 + 1;
  if (uStack_a0._4_4_ < (uint)uStack_a0) {
    FUN_141518130(&local_a8,uVar4);
  }
  lVar9 = lVar9 * 0xa0 + local_a8;
  FUN_140056680(&local_58,L"/Script/OakGame.GbxMomentNodeSettings_OakTravelToAINode");
  FUN_140056680(&local_68,L"/Script/OakGame.GbxMomentNodeSettings_TravelToAINode");
  FUN_141517fc0(lVar9,4,&local_68,&local_58);
  uVar4 = (uint)uStack_a0;
  lVar9 = (longlong)(int)(uint)uStack_a0;
  uStack_a0._0_4_ = (uint)uStack_a0 + 1;
  if (uStack_a0._4_4_ < (uint)uStack_a0) {
    FUN_141518130(&local_a8,uVar4);
  }
  lVar9 = lVar9 * 0xa0 + local_a8;
  FUN_140056680(&local_58,L"/Script/OakGame.GbxMomentNodeState_OakTravelToAINode");
  FUN_140056680(&local_68,L"/Script/OakGame.GbxMomentNodeState_TravelToAINode");
  FUN_141517fc0(lVar9,4,&local_68,&local_58);
  uVar4 = (uint)uStack_a0;
  lVar9 = (longlong)(int)(uint)uStack_a0;
  uStack_a0._0_4_ = (uint)uStack_a0 + 1;
  if (uStack_a0._4_4_ < (uint)uStack_a0) {
    FUN_141518130(&local_a8,uVar4);
  }
  lVar9 = lVar9 * 0xa0 + local_a8;
  FUN_140056680(&local_58,L"/Script/OakGame.GbxMomentNodeSettings_OakPlayCutscene");
  FUN_140056680(&local_68,L"/Script/GbxGame.GbxMomentNodeSettings_PlayCutscene");
  FUN_141517fc0(lVar9,4,&local_68,&local_58);
  uVar4 = (uint)uStack_a0;
  lVar9 = (longlong)(int)(uint)uStack_a0;
  uStack_a0._0_4_ = (uint)uStack_a0 + 1;
  if (uStack_a0._4_4_ < (uint)uStack_a0) {
    FUN_141518130(&local_a8,uVar4);
  }
  lVar9 = lVar9 * 0xa0 + local_a8;
  FUN_140056680(&local_58,L"/Script/GbxGame.EGbxAINodeLastOption");
  FUN_140056680(&local_68,L"EOakAINodeLastOption");
  FUN_141517fc0(lVar9,8,&local_68,&local_58);
  uVar4 = (uint)uStack_a0;
  lVar9 = (longlong)(int)(uint)uStack_a0;
  uStack_a0._0_4_ = (uint)uStack_a0 + 1;
  if (uStack_a0._4_4_ < (uint)uStack_a0) {
    FUN_141518130(&local_a8,uVar4);
  }
  lVar9 = lVar9 * 0xa0 + local_a8;
  FUN_140056680(&local_58,L"/Script/GbxGame.EGbxAINodeStanceRestriction");
  FUN_140056680(&local_68,L"EOakStanceRestriction");
  FUN_141517fc0(lVar9,8,&local_68,&local_58);
  uVar4 = (uint)uStack_a0;
  lVar9 = (longlong)(int)(uint)uStack_a0;
  uStack_a0._0_4_ = (uint)uStack_a0 + 1;
  if (uStack_a0._4_4_ < (uint)uStack_a0) {
    FUN_141518130(&local_a8,uVar4);
  }
  lVar9 = lVar9 * 0xa0 + local_a8;
  FUN_140056680(&local_58,L"/Script/GbxGame.EGbxAINodeStanceStyle");
  FUN_140056680(&local_68,L"EOakStanceStyle");
  FUN_141517fc0(lVar9,8,&local_68,&local_58);
  uVar4 = (uint)uStack_a0;
  lVar9 = (longlong)(int)(uint)uStack_a0;
  uStack_a0._0_4_ = (uint)uStack_a0 + 1;
  if (uStack_a0._4_4_ < (uint)uStack_a0) {
    FUN_141518130(&local_a8,uVar4);
  }
  lVar9 = lVar9 * 0xa0 + local_a8;
  FUN_140056680(&local_58,L"/Script/GbxGame.EGbxAINodeStanceSpeed");
  FUN_140056680(&local_68,L"EOakStanceSpeed");
  FUN_141517fc0(lVar9,8,&local_68,&local_58);
  uVar4 = (uint)uStack_a0;
  lVar9 = (longlong)(int)(uint)uStack_a0;
  uStack_a0._0_4_ = (uint)uStack_a0 + 1;
  if (uStack_a0._4_4_ < (uint)uStack_a0) {
    FUN_141518130(&local_a8,uVar4);
  }
  lVar9 = lVar9 * 0xa0 + local_a8;
  FUN_140056680(&local_58,L"/Script/GbxGame.EGbxAmbientAudioOpportunityType");
  FUN_140056680(&local_68,L"EOakAmbientAudioOpportunityType");
  FUN_141517fc0(lVar9,8,&local_68,&local_58);
  uVar4 = (uint)uStack_a0;
  lVar9 = (longlong)(int)(uint)uStack_a0;
  uStack_a0._0_4_ = (uint)uStack_a0 + 1;
  if (uStack_a0._4_4_ < (uint)uStack_a0) {
    FUN_141518130(&local_a8,uVar4);
  }
  lVar9 = lVar9 * 0xa0 + local_a8;
  FUN_140056680(&local_58,L"/Script/GbxGame.GbxAINodeStanceData");
  FUN_140056680(&local_68,L"/Script/OakGame.OakStanceData");
  FUN_141517fc0(lVar9,4,&local_68,&local_58);
  uVar4 = (uint)uStack_a0;
  lVar9 = (longlong)(int)(uint)uStack_a0;
  uStack_a0._0_4_ = (uint)uStack_a0 + 1;
  if (uStack_a0._4_4_ < (uint)uStack_a0) {
    FUN_141518130(&local_a8,uVar4);
  }
  lVar9 = lVar9 * 0xa0 + local_a8;
  FUN_140056680(&local_58,L"/Script/GbxGame.GbxAINodeStanceData_Default");
  FUN_140056680(&local_68,L"/Script/OakGame.OakStanceData_Default");
  FUN_141517fc0(lVar9,4,&local_68,&local_58);
  uVar4 = (uint)uStack_a0;
  lVar9 = (longlong)(int)(uint)uStack_a0;
  uStack_a0._0_4_ = (uint)uStack_a0 + 1;
  if (uStack_a0._4_4_ < (uint)uStack_a0) {
    FUN_141518130(&local_a8,uVar4);
  }
  lVar9 = lVar9 * 0xa0 + local_a8;
  FUN_140056680(&local_58,L"/Script/GbxGame.GbxAINodeStanceData_Aggro");
  FUN_140056680(&local_68,L"/Script/OakGame.OakStanceData_Aggro");
  FUN_141517fc0(lVar9,4,&local_68,&local_58);
  uVar4 = (uint)uStack_a0;
  lVar9 = (longlong)(int)(uint)uStack_a0;
  uStack_a0._0_4_ = (uint)uStack_a0 + 1;
  if (uStack_a0._4_4_ < (uint)uStack_a0) {
    FUN_141518130(&local_a8,uVar4);
  }
  lVar9 = lVar9 * 0xa0 + local_a8;
  FUN_140056680(&local_58,L"/Script/GbxGame.GbxAINodeStance");
  FUN_140056680(&local_68,L"/Script/OakGame.OakNodeStance");
  FUN_141517fc0(lVar9,4,&local_68,&local_58);
  uVar4 = (uint)uStack_a0;
  lVar9 = (longlong)(int)(uint)uStack_a0;
  uStack_a0._0_4_ = (uint)uStack_a0 + 1;
  if (uStack_a0._4_4_ < (uint)uStack_a0) {
    FUN_141518130(&local_a8,uVar4);
  }
  lVar9 = lVar9 * 0xa0 + local_a8;
  FUN_140056680(&local_58,L"/Script/GbxGame.GbxAINodeGlobals");
  FUN_140056680(&local_68,L"/Script/OakGame.OakAINodeGlobals");
  FUN_141517fc0(lVar9,4,&local_68,&local_58);
  uVar4 = (uint)uStack_a0;
  lVar9 = (longlong)(int)(uint)uStack_a0;
  uStack_a0._0_4_ = (uint)uStack_a0 + 1;
  if (uStack_a0._4_4_ < (uint)uStack_a0) {
    FUN_141518130(&local_a8,uVar4);
  }
  lVar9 = lVar9 * 0xa0 + local_a8;
  FUN_140056680(&local_58,L"/Script/GbxGame.GbxCondition_AIReachedNode");
  FUN_140056680(&local_68,L"/Script/OakGame.GbxCondition_AIReachedNode");
  FUN_141517fc0(lVar9,4,&local_68,&local_58);
  uVar4 = (uint)uStack_a0;
  lVar9 = (longlong)(int)(uint)uStack_a0;
  uStack_a0._0_4_ = (uint)uStack_a0 + 1;
  if (uStack_a0._4_4_ < (uint)uStack_a0) {
    FUN_141518130(&local_a8,uVar4);
  }
  lVar9 = lVar9 * 0xa0 + local_a8;
  FUN_140056680(&local_58,L"/Script/GbxGame.GbxAmbientAudioComponent");
  FUN_140056680(&local_68,L"OakAmbientAudioComponent");
  FUN_141517fc0(lVar9,2,&local_68,&local_58);
  uVar4 = (uint)uStack_a0;
  lVar9 = (longlong)(int)(uint)uStack_a0;
  uStack_a0._0_4_ = (uint)uStack_a0 + 1;
  if (uStack_a0._4_4_ < (uint)uStack_a0) {
    FUN_141518130(&local_a8,uVar4);
  }
  lVar9 = lVar9 * 0xa0 + local_a8;
  FUN_140056680(&local_58,L"/Script/GbxGame.GbxAmbientAudioStaticComponent");
  FUN_140056680(&local_68,L"OakAmbientAudioStaticComponent");
  FUN_141517fc0(lVar9,2,&local_68,&local_58);
  uVar4 = (uint)uStack_a0;
  lVar9 = (longlong)(int)(uint)uStack_a0;
  uStack_a0._0_4_ = (uint)uStack_a0 + 1;
  if (uStack_a0._4_4_ < (uint)uStack_a0) {
    FUN_141518130(&local_a8,uVar4);
  }
  lVar9 = lVar9 * 0xa0 + local_a8;
  FUN_140056680(&local_58,L"/Script/GbxGame.GbxAmbientAudioFinder_Blueprint");
  FUN_140056680(&local_68,L"OakAmbientAudioFinder_Blueprint");
  FUN_141517fc0(lVar9,2,&local_68,&local_58);
  uVar4 = (uint)uStack_a0;
  lVar9 = (longlong)(int)(uint)uStack_a0;
  uStack_a0._0_4_ = (uint)uStack_a0 + 1;
  if (uStack_a0._4_4_ < (uint)uStack_a0) {
    FUN_141518130(&local_a8,uVar4);
  }
  lVar9 = lVar9 * 0xa0 + local_a8;
  FUN_140056680(&local_58,L"/Script/GbxGame.GbxAmbientAudioStaticEmitter");
  FUN_140056680(&local_68,L"OakAmbientAudioStaticEmitter");
  FUN_141517fc0(lVar9,2,&local_68,&local_58);
  uVar4 = (uint)uStack_a0;
  lVar9 = (longlong)(int)(uint)uStack_a0;
  uStack_a0._0_4_ = (uint)uStack_a0 + 1;
  if (uStack_a0._4_4_ < (uint)uStack_a0) {
    FUN_141518130(&local_a8,uVar4);
  }
  lVar9 = lVar9 * 0xa0 + local_a8;
  FUN_140056680(&local_58,L"/Script/GbxGame.GbxProceduralAmbientAudioActor");
  FUN_140056680(&local_68,L"OakProceduralAmbientAudioActor");
  FUN_141517fc0(lVar9,2,&local_68,&local_58);
  uVar4 = (uint)uStack_a0;
  lVar9 = (longlong)(int)(uint)uStack_a0;
  uStack_a0._0_4_ = (uint)uStack_a0 + 1;
  if (uStack_a0._4_4_ < (uint)uStack_a0) {
    FUN_141518130(&local_a8,uVar4);
  }
  lVar9 = lVar9 * 0xa0 + local_a8;
  FUN_140056680(&local_58,L"/Script/GbxGame.GbxAmbientAudioLoader");
  FUN_140056680(&local_68,L"OakAmbientAudioLoader");
  FUN_141517fc0(lVar9,2,&local_68,&local_58);
  uVar4 = (uint)uStack_a0;
  lVar9 = (longlong)(int)(uint)uStack_a0;
  uStack_a0._0_4_ = (uint)uStack_a0 + 1;
  if (uStack_a0._4_4_ < (uint)uStack_a0) {
    FUN_141518130(&local_a8,uVar4);
  }
  lVar9 = lVar9 * 0xa0 + local_a8;
  FUN_140056680(&local_58,L"/Script/GbxGame.GbxOpportunisticAmbientAudioSystem");
  FUN_140056680(&local_68,L"OakOpportunisticAmbientAudioSystem");
  FUN_141517fc0(lVar9,2,&local_68,&local_58);
  uVar4 = (uint)uStack_a0;
  lVar9 = (longlong)(int)(uint)uStack_a0;
  uStack_a0._0_4_ = (uint)uStack_a0 + 1;
  if (uStack_a0._4_4_ < (uint)uStack_a0) {
    FUN_141518130(&local_a8,uVar4);
  }
  lVar9 = lVar9 * 0xa0 + local_a8;
  FUN_140056680(&local_58,L"/Script/OakGame.OakWorldPainterLayer_Critter");
  FUN_140056680(&local_68,L"OakCritterLayer");
  FUN_141517fc0(lVar9,2,&local_68,&local_58);
  uVar4 = (uint)uStack_a0;
  lVar9 = (longlong)(int)(uint)uStack_a0;
  uStack_a0._0_4_ = (uint)uStack_a0 + 1;
  if (uStack_a0._4_4_ < (uint)uStack_a0) {
    FUN_141518130(&local_a8,uVar4);
  }
  lVar9 = lVar9 * 0xa0 + local_a8;
  FUN_140056680(&local_58,L"/Script/OakGame.OakWorldPainterLayer_Difficulty");
  FUN_140056680(&local_68,L"OakDifficultyLayer");
  FUN_141517fc0(lVar9,2,&local_68,&local_58);
  uVar4 = (uint)uStack_a0;
  lVar9 = (longlong)(int)(uint)uStack_a0;
  uStack_a0._0_4_ = (uint)uStack_a0 + 1;
  if (uStack_a0._4_4_ < (uint)uStack_a0) {
    FUN_141518130(&local_a8,uVar4);
  }
  lVar9 = lVar9 * 0xa0 + local_a8;
  FUN_140056680(&local_58,L"/Script/OakGame.OakWorldPainterLayer_Spawn");
  FUN_140056680(&local_68,L"OakSpawnZoneLayer");
  FUN_141517fc0(lVar9,2,&local_68,&local_58);
  uVar4 = (uint)uStack_a0;
  lVar9 = (longlong)(int)(uint)uStack_a0;
  uStack_a0._0_4_ = (uint)uStack_a0 + 1;
  if (uStack_a0._4_4_ < (uint)uStack_a0) {
    FUN_141518130(&local_a8,uVar4);
  }
  lVar9 = lVar9 * 0xa0 + local_a8;
  FUN_140056680(&local_58,L"/Script/GbxGame.GbxAudioOpportunitySet");
  FUN_140056680(&local_68,L"OakAudioOpportunitySet");
  FUN_141517fc0(lVar9,4,&local_68,&local_58);
  uVar4 = (uint)uStack_a0;
  lVar9 = (longlong)(int)(uint)uStack_a0;
  uStack_a0._0_4_ = (uint)uStack_a0 + 1;
  if (uStack_a0._4_4_ < (uint)uStack_a0) {
    FUN_141518130(&local_a8,uVar4);
  }
  lVar9 = lVar9 * 0xa0 + local_a8;
  FUN_140056680(&local_58,L"/Script/GbxGame.GbxAmbientAudioOpportunity");
  FUN_140056680(&local_68,L"OakAmbientAudioOpportunity");
  FUN_141517fc0(lVar9,4,&local_68,&local_58);
  uVar4 = (uint)uStack_a0;
  lVar9 = (longlong)(int)(uint)uStack_a0;
  uStack_a0._0_4_ = (uint)uStack_a0 + 1;
  if (uStack_a0._4_4_ < (uint)uStack_a0) {
    FUN_141518130(&local_a8,uVar4);
  }
  lVar9 = lVar9 * 0xa0 + local_a8;
  FUN_140056680(&local_58,L"GbxAmbientAudioOpportunityLeaf");
  FUN_140056680(&local_68,L"OakAmbientAudioOpportunityLeaf");
  FUN_141517fc0(lVar9,4,&local_68,&local_58);
  uVar4 = (uint)uStack_a0;
  lVar9 = (longlong)(int)(uint)uStack_a0;
  uStack_a0._0_4_ = (uint)uStack_a0 + 1;
  if (uStack_a0._4_4_ < (uint)uStack_a0) {
    FUN_141518130(&local_a8,uVar4);
  }
  lVar9 = lVar9 * 0xa0 + local_a8;
  FUN_140056680(&local_58,L"/Script/OakGame.OakAINode");
  FUN_140056680(&local_68,L"/Script/OakGame.OakActivityAINode");
  FUN_141517fc0(lVar9,2,&local_68,&local_58);
  uVar4 = (uint)uStack_a0;
  lVar9 = (longlong)(int)(uint)uStack_a0;
  uStack_a0._0_4_ = (uint)uStack_a0 + 1;
  if (uStack_a0._4_4_ < (uint)uStack_a0) {
    FUN_141518130(&local_a8,uVar4);
  }
  lVar9 = lVar9 * 0xa0 + local_a8;
  FUN_140056680(&local_58,L"/Script/GbxGame.EGpsValueScore");
  FUN_140056680(&local_68,L"/Script/OakGame.EGpsValueScore");
  FUN_141517fc0(lVar9,8,&local_68,&local_58);
  uVar4 = (uint)uStack_a0;
  lVar9 = (longlong)(int)(uint)uStack_a0;
  uStack_a0._0_4_ = (uint)uStack_a0 + 1;
  if (uStack_a0._4_4_ < (uint)uStack_a0) {
    FUN_141518130(&local_a8,uVar4);
  }
  lVar9 = lVar9 * 0xa0 + local_a8;
  FUN_140056680(&local_58,L"/Script/GbxGame.EHealthAspectCheckType");
  FUN_140056680(&local_68,L"/Script/OakGame.EHealthAspectCheckType");
  FUN_141517fc0(lVar9,8,&local_68,&local_58);
  uVar4 = (uint)uStack_a0;
  lVar9 = (longlong)(int)(uint)uStack_a0;
  uStack_a0._0_4_ = (uint)uStack_a0 + 1;
  if (uStack_a0._4_4_ < (uint)uStack_a0) {
    FUN_141518130(&local_a8,uVar4);
  }
  lVar9 = lVar9 * 0xa0 + local_a8;
  FUN_140056680(&local_58,L"/Script/GbxGame.EHealthPoolType");
  FUN_140056680(&local_68,L"/Script/OakGame.EHealthPoolType");
  FUN_141517fc0(lVar9,8,&local_68,&local_58);
  uVar4 = (uint)uStack_a0;
  lVar9 = (longlong)(int)(uint)uStack_a0;
  uStack_a0._0_4_ = (uint)uStack_a0 + 1;
  if (uStack_a0._4_4_ < (uint)uStack_a0) {
    FUN_141518130(&local_a8,uVar4);
  }
  lVar9 = lVar9 * 0xa0 + local_a8;
  FUN_140056680(&local_58,L"/Script/GbxGame.GpsTestSettings_Health");
  FUN_140056680(&local_68,L"/Script/OakGame.GpsTestSettings_Health");
  FUN_141517fc0(lVar9,4,&local_68,&local_58);
  uVar4 = (uint)uStack_a0;
  lVar9 = (longlong)(int)(uint)uStack_a0;
  uStack_a0._0_4_ = (uint)uStack_a0 + 1;
  if (uStack_a0._4_4_ < (uint)uStack_a0) {
    FUN_141518130(&local_a8,uVar4);
  }
  lVar9 = lVar9 * 0xa0 + local_a8;
  FUN_140056680(&local_58,L"/Script/GbxGame.GpsTest_Health");
  FUN_140056680(&local_68,L"/Script/OakGame.GpsTest_Health");
  FUN_141517fc0(lVar9,4,&local_68,&local_58);
  uVar4 = (uint)uStack_a0;
  lVar9 = (longlong)(int)(uint)uStack_a0;
  uStack_a0._0_4_ = (uint)uStack_a0 + 1;
  if (uStack_a0._4_4_ < (uint)uStack_a0) {
    FUN_141518130(&local_a8,uVar4);
  }
  lVar9 = lVar9 * 0xa0 + local_a8;
  FUN_140056680(&local_58,L"/Script/GbxGame.GbxBrainAspectSettings_MaxChildActors");
  FUN_140056680(&local_68,L"/Script/OakGame.GbxBrainAspectSettings_MaxChildActors");
  FUN_141517fc0(lVar9,4,&local_68,&local_58);
  uVar4 = (uint)uStack_a0;
  lVar9 = (longlong)(int)(uint)uStack_a0;
  uStack_a0._0_4_ = (uint)uStack_a0 + 1;
  if (uStack_a0._4_4_ < (uint)uStack_a0) {
    FUN_141518130(&local_a8,uVar4);
  }
  lVar9 = lVar9 * 0xa0 + local_a8;
  FUN_140056680(&local_58,L"/Script/GbxGame.GbxBrainAspect_MaxChildActors");
  FUN_140056680(&local_68,L"/Script/OakGame.GbxBrainAspect_MaxChildActors");
  FUN_141517fc0(lVar9,4,&local_68,&local_58);
  uVar4 = (uint)uStack_a0;
  lVar9 = (longlong)(int)(uint)uStack_a0;
  uStack_a0._0_4_ = (uint)uStack_a0 + 1;
  if (uStack_a0._4_4_ < (uint)uStack_a0) {
    FUN_141518130(&local_a8,uVar4);
  }
  lVar9 = lVar9 * 0xa0 + local_a8;
  FUN_140056680(&local_58,L"/Script/GbxGame.GbxBrainAspectSettings_Health");
  FUN_140056680(&local_68,L"/Script/OakGame.GbxBrainAspectSettings_Health");
  FUN_141517fc0(lVar9,4,&local_68,&local_58);
  uVar4 = (uint)uStack_a0;
  lVar9 = (longlong)(int)(uint)uStack_a0;
  uStack_a0._0_4_ = (uint)uStack_a0 + 1;
  if (uStack_a0._4_4_ < (uint)uStack_a0) {
    FUN_141518130(&local_a8,uVar4);
  }
  lVar9 = lVar9 * 0xa0 + local_a8;
  FUN_140056680(&local_58,L"/Script/GbxGame.GbxBrainAspect_Health");
  FUN_140056680(&local_68,L"/Script/OakGame.GbxBrainAspect_Health");
  FUN_141517fc0(lVar9,4,&local_68,&local_58);
  uVar4 = (uint)uStack_a0;
  lVar9 = (longlong)(int)(uint)uStack_a0;
  uStack_a0._0_4_ = (uint)uStack_a0 + 1;
  if (uStack_a0._4_4_ < (uint)uStack_a0) {
    FUN_141518130(&local_a8,uVar4);
  }
  lVar9 = lVar9 * 0xa0 + local_a8;
  FUN_140056680(&local_58,L"/Script/GbxWeapon.GpsTestSettings_WeaponTargetLockScoringBoost");
  FUN_140056680(&local_68,L"/Script/OakGame.GpsTestSettings_WeaponTargetLockScoringBoost");
  FUN_141517fc0(lVar9,4,&local_68,&local_58);
  uVar4 = (uint)uStack_a0;
  lVar9 = (longlong)(int)(uint)uStack_a0;
  uStack_a0._0_4_ = (uint)uStack_a0 + 1;
  if (uStack_a0._4_4_ < (uint)uStack_a0) {
    FUN_141518130(&local_a8,uVar4);
  }
  lVar9 = lVar9 * 0xa0 + local_a8;
  FUN_140056680(&local_58,L"/Script/GbxWeapon.GpsTest_WeaponTargetLockScoringBoost");
  FUN_140056680(&local_68,L"/Script/OakGame.GpsTest_WeaponTargetLockScoringBoost");
  FUN_141517fc0(lVar9,4,&local_68,&local_58);
  uVar4 = (uint)uStack_a0;
  lVar9 = (longlong)(int)(uint)uStack_a0;
  uStack_a0._0_4_ = (uint)uStack_a0 + 1;
  if (uStack_a0._4_4_ < (uint)uStack_a0) {
    FUN_141518130(&local_a8,uVar4);
  }
  lVar9 = lVar9 * 0xa0 + local_a8;
  FUN_140056680(&local_58,L"/Script/GbxWeapon.GpsGeneratorSettings_WeaponTargetLocks");
  FUN_140056680(&local_68,L"/Script/OakGame.GpsGeneratorSettings_WeaponTargetLocks");
  FUN_141517fc0(lVar9,4,&local_68,&local_58);
  uVar4 = (uint)uStack_a0;
  lVar9 = (longlong)(int)(uint)uStack_a0;
  uStack_a0._0_4_ = (uint)uStack_a0 + 1;
  if (uStack_a0._4_4_ < (uint)uStack_a0) {
    FUN_141518130(&local_a8,uVar4);
  }
  lVar9 = lVar9 * 0xa0 + local_a8;
  FUN_140056680(&local_58,L"/Script/GbxWeapon.GpsGenerator_WeaponTargetLocks");
  FUN_140056680(&local_68,L"/Script/OakGame.GpsGenerator_WeaponTargetLocks");
  FUN_141517fc0(lVar9,4,&local_68,&local_58);
  uVar4 = (uint)uStack_a0;
  lVar9 = (longlong)(int)(uint)uStack_a0;
  uStack_a0._0_4_ = (uint)uStack_a0 + 1;
  if (uStack_a0._4_4_ < (uint)uStack_a0) {
    FUN_141518130(&local_a8,uVar4);
  }
  lVar9 = lVar9 * 0xa0 + local_a8;
  FUN_140056680(&local_58,L"/Script/GbxWeapon.GpsGeneratorSettings_TargetingOwner");
  FUN_140056680(&local_68,L"/Script/OakGame.GpsGeneratorSettings_TargetingOwner");
  FUN_141517fc0(lVar9,4,&local_68,&local_58);
  uVar4 = (uint)uStack_a0;
  lVar9 = (longlong)(int)(uint)uStack_a0;
  uStack_a0._0_4_ = (uint)uStack_a0 + 1;
  if (uStack_a0._4_4_ < (uint)uStack_a0) {
    FUN_141518130(&local_a8,uVar4);
  }
  lVar9 = lVar9 * 0xa0 + local_a8;
  FUN_140056680(&local_58,L"/Script/GbxWeapon.GpsGenerator_TargetingOwner");
  FUN_140056680(&local_68,L"/Script/OakGame.GpsGenerator_TargetingOwner");
  FUN_141517fc0(lVar9,4,&local_68,&local_58);
  uVar4 = (uint)uStack_a0;
  lVar9 = (longlong)(int)(uint)uStack_a0;
  uStack_a0._0_4_ = (uint)uStack_a0 + 1;
  if (uStack_a0._4_4_ < (uint)uStack_a0) {
    FUN_141518130(&local_a8,uVar4);
  }
  lVar9 = lVar9 * 0xa0 + local_a8;
  FUN_140056680(&local_58,L"/Script/GbxWeapon.GbxBrainTaskSettings_WeaponAttack_v2");
  FUN_140056680(&local_68,L"/Script/OakGame.GbxBrainTaskSettings_WeaponAttack_v2");
  FUN_141517fc0(lVar9,4,&local_68,&local_58);
  uVar4 = (uint)uStack_a0;
  lVar9 = (longlong)(int)(uint)uStack_a0;
  uStack_a0._0_4_ = (uint)uStack_a0 + 1;
  if (uStack_a0._4_4_ < (uint)uStack_a0) {
    FUN_141518130(&local_a8,uVar4);
  }
  lVar9 = lVar9 * 0xa0 + local_a8;
  FUN_140056680(&local_58,L"/Script/GbxWeapon.GbxBrainTaskSettings_WeaponAttack");
  FUN_140056680(&local_68,L"/Script/OakGame.GbxBrainTaskSettings_WeaponAttack");
  FUN_141517fc0(lVar9,4,&local_68,&local_58);
  uVar4 = (uint)uStack_a0;
  lVar9 = (longlong)(int)(uint)uStack_a0;
  uStack_a0._0_4_ = (uint)uStack_a0 + 1;
  if (uStack_a0._4_4_ < (uint)uStack_a0) {
    FUN_141518130(&local_a8,uVar4);
  }
  lVar9 = lVar9 * 0xa0 + local_a8;
  FUN_140056680(&local_58,L"/Script/GbxWeapon.GbxBrainTaskSettings_Wait");
  FUN_140056680(&local_68,L"/Script/OakGame.GbxBrainTaskSettings_Wait");
  FUN_141517fc0(lVar9,4,&local_68,&local_58);
  uVar4 = (uint)uStack_a0;
  lVar9 = (longlong)(int)(uint)uStack_a0;
  uStack_a0._0_4_ = (uint)uStack_a0 + 1;
  if (uStack_a0._4_4_ < (uint)uStack_a0) {
    FUN_141518130(&local_a8,uVar4);
  }
  lVar9 = lVar9 * 0xa0 + local_a8;
  FUN_140056680(&local_58,L"/Script/GbxWeapon.GbxBrainTaskSettings_Hide");
  FUN_140056680(&local_68,L"/Script/OakGame.GbxBrainTaskSettings_Hide");
  FUN_141517fc0(lVar9,4,&local_68,&local_58);
  uVar4 = (uint)uStack_a0;
  lVar9 = (longlong)(int)(uint)uStack_a0;
  uStack_a0._0_4_ = (uint)uStack_a0 + 1;
  if (uStack_a0._4_4_ < (uint)uStack_a0) {
    FUN_141518130(&local_a8,uVar4);
  }
  lVar9 = lVar9 * 0xa0 + local_a8;
  FUN_140056680(&local_58,L"/Script/GbxWeapon.GbxBrainTaskSettings_CoverAttack");
  FUN_140056680(&local_68,L"/Script/OakGame.GbxBrainTaskSettings_CoverAttack");
  FUN_141517fc0(lVar9,4,&local_68,&local_58);
  uVar4 = (uint)uStack_a0;
  lVar9 = (longlong)(int)(uint)uStack_a0;
  uStack_a0._0_4_ = (uint)uStack_a0 + 1;
  if (uStack_a0._4_4_ < (uint)uStack_a0) {
    FUN_141518130(&local_a8,uVar4);
  }
  lVar9 = lVar9 * 0xa0 + local_a8;
  FUN_140056680(&local_58,L"/Script/GbxWeapon.GbxBrainAspectSettings_UseWeapon");
  FUN_140056680(&local_68,L"/Script/OakGame.GbxBrainAspectSettings_UseWeapon");
  FUN_141517fc0(lVar9,4,&local_68,&local_58);
  uVar4 = (uint)uStack_a0;
  lVar9 = (longlong)(int)(uint)uStack_a0;
  uStack_a0._0_4_ = (uint)uStack_a0 + 1;
  if (uStack_a0._4_4_ < (uint)uStack_a0) {
    FUN_141518130(&local_a8,uVar4);
  }
  lVar9 = lVar9 * 0xa0 + local_a8;
  FUN_140056680(&local_58,L"/Script/GbxWeapon.GbxBrainAspect_UseWeapon");
  FUN_140056680(&local_68,L"/Script/OakGame.GbxBrainAspect_UseWeapon");
  FUN_141517fc0(lVar9,4,&local_68,&local_58);
  uVar4 = (uint)uStack_a0;
  lVar9 = (longlong)(int)(uint)uStack_a0;
  uStack_a0._0_4_ = (uint)uStack_a0 + 1;
  if (uStack_a0._4_4_ < (uint)uStack_a0) {
    FUN_141518130(&local_a8,uVar4);
  }
  lVar9 = lVar9 * 0xa0 + local_a8;
  FUN_140056680(&local_58,L"/Script/GbxWeapon.GbxBrainAspectSettings_ReloadWeapon");
  FUN_140056680(&local_68,L"/Script/OakGame.GbxBrainAspectSettings_ReloadWeapon");
  FUN_141517fc0(lVar9,4,&local_68,&local_58);
  uVar4 = (uint)uStack_a0;
  lVar9 = (longlong)(int)(uint)uStack_a0;
  uStack_a0._0_4_ = (uint)uStack_a0 + 1;
  if (uStack_a0._4_4_ < (uint)uStack_a0) {
    FUN_141518130(&local_a8,uVar4);
  }
  lVar9 = lVar9 * 0xa0 + local_a8;
  FUN_140056680(&local_58,L"/Script/GbxWeapon.GbxBrainAspect_ReloadWeapon");
  FUN_140056680(&local_68,L"/Script/OakGame.GbxBrainAspect_ReloadWeapon");
  FUN_141517fc0(lVar9,4,&local_68,&local_58);
  uVar4 = (uint)uStack_a0;
  lVar9 = (longlong)(int)(uint)uStack_a0;
  uStack_a0._0_4_ = (uint)uStack_a0 + 1;
  if (uStack_a0._4_4_ < (uint)uStack_a0) {
    FUN_141518130(&local_a8,uVar4);
  }
  lVar9 = lVar9 * 0xa0 + local_a8;
  FUN_140056680(&local_58,L"/Script/GbxGame.GbxRewardData_InventoryItem");
  FUN_140056680(&local_68,L"/Script/OakGame.GbxRewardData_InventoryItem");
  FUN_141517fc0(lVar9,4,&local_68,&local_58);
  uVar4 = (uint)uStack_a0;
  lVar9 = (longlong)(int)(uint)uStack_a0;
  uStack_a0._0_4_ = (uint)uStack_a0 + 1;
  if (uStack_a0._4_4_ < (uint)uStack_a0) {
    FUN_141518130(&local_a8,uVar4);
  }
  lVar9 = lVar9 * 0xa0 + local_a8;
  FUN_140056680(&local_58,L"/Script/OakGame.OakAIHeldWeaponComponent");
  FUN_140056680(&local_68,L"/Script/GbxWeapon.GbxAIHeldWeaponComponent");
  FUN_141517fc0(lVar9,0x10002,&local_68,&local_58);
  uVar4 = (uint)uStack_a0;
  lVar9 = (longlong)(int)(uint)uStack_a0;
  uStack_a0._0_4_ = (uint)uStack_a0 + 1;
  if (uStack_a0._4_4_ < (uint)uStack_a0) {
    FUN_141518130(&local_a8,uVar4);
  }
  lVar9 = lVar9 * 0xa0 + local_a8;
  FUN_140056680(&local_58,L"/Script/OakGame.OakBossFight.BossFightAwarenessVolumes");
  FUN_140056680(&local_68,L"/Script/OakGame.OakBossFight.BarVisibilityVolumes");
  FUN_141517fc0(lVar9,0x20,&local_68,&local_58);
  uVar4 = (uint)uStack_a0;
  lVar9 = (longlong)(int)(uint)uStack_a0;
  uStack_a0._0_4_ = (uint)uStack_a0 + 1;
  if (uStack_a0._4_4_ < (uint)uStack_a0) {
    FUN_141518130(&local_a8,uVar4);
  }
  lVar9 = lVar9 * 0xa0 + local_a8;
  FUN_140056680(&local_58,L"/Script/OakGame.OakBossFight.ArenaVolumes");
  FUN_140056680(&local_68,L"/Script/OakGame.OakBossFight.ResetVolumes");
  FUN_141517fc0(lVar9,0x20,&local_68,&local_58);
  uVar4 = (uint)uStack_a0;
  lVar9 = (longlong)(int)(uint)uStack_a0;
  uStack_a0._0_4_ = (uint)uStack_a0 + 1;
  if (uStack_a0._4_4_ < (uint)uStack_a0) {
    FUN_141518130(&local_a8,uVar4);
  }
  lVar9 = lVar9 * 0xa0 + local_a8;
  FUN_140056680(&local_58,L"/Script/OakGame.OakArmIKState");
  FUN_140056680(&local_68,L"/Script/OakGame.OakTwoBoneIKState");
  FUN_141517fc0(lVar9,4,&local_68,&local_58);
  uVar4 = (uint)uStack_a0;
  lVar9 = (longlong)(int)(uint)uStack_a0;
  uStack_a0._0_4_ = (uint)uStack_a0 + 1;
  if (uStack_a0._4_4_ < (uint)uStack_a0) {
    FUN_141518130(&local_a8,uVar4);
  }
  lVar9 = lVar9 * 0xa0 + local_a8;
  FUN_140056680(&local_58,L"FGbxWeightedMaterialParameter");
  FUN_140056680(&local_68,L"WeightedOakCritterMaterialParameter");
  FUN_141517fc0(lVar9,4,&local_68,&local_58);
  uVar4 = (uint)uStack_a0;
  lVar9 = (longlong)(int)(uint)uStack_a0;
  uStack_a0._0_4_ = (uint)uStack_a0 + 1;
  if (uStack_a0._4_4_ < (uint)uStack_a0) {
    FUN_141518130(&local_a8,uVar4);
  }
  lVar9 = lVar9 * 0xa0 + local_a8;
  FUN_140056680(&local_58,L"/Script/OakGame.OakLevelSequence");
  FUN_140056680(&local_68,L"/Script/GbxGame.GbxLevelSequence");
  FUN_141517fc0(lVar9,2,&local_68,&local_58);
  uVar4 = (uint)uStack_a0;
  lVar9 = (longlong)(int)(uint)uStack_a0;
  uStack_a0._0_4_ = (uint)uStack_a0 + 1;
  if (uStack_a0._4_4_ < (uint)uStack_a0) {
    FUN_141518130(&local_a8,uVar4);
  }
  lVar9 = lVar9 * 0xa0 + local_a8;
  FUN_140056680(&local_58,L"/Script/OakGame.OakCharacter.GetCharacterEnemyType");
  FUN_140056680(&local_68,L"/Script/OakGame.OakCharacter.GetTag_EnemyType");
  FUN_141517fc0(lVar9,0x10,&local_68,&local_58);
  uVar4 = (uint)uStack_a0;
  lVar9 = (longlong)(int)(uint)uStack_a0;
  uStack_a0._0_4_ = (uint)uStack_a0 + 1;
  if (uStack_a0._4_4_ < (uint)uStack_a0) {
    FUN_141518130(&local_a8,uVar4);
  }
  lVar9 = lVar9 * 0xa0 + local_a8;
  FUN_140056680(&local_58,L"/Script/OakGame.OakCharacter.GetCharacterArmy");
  FUN_140056680(&local_68,L"/Script/OakGame.OakCharacter.GetTag_Army");
  FUN_141517fc0(lVar9,0x10,&local_68,&local_58);
  uVar4 = (uint)uStack_a0;
  lVar9 = (longlong)(int)(uint)uStack_a0;
  uStack_a0._0_4_ = (uint)uStack_a0 + 1;
  if (uStack_a0._4_4_ < (uint)uStack_a0) {
    FUN_141518130(&local_a8,uVar4);
  }
  lVar9 = lVar9 * 0xa0 + local_a8;
  FUN_140056680(&local_58,L"/Script/OakGame.ObjectiveTypeSettings_OakMigration.EventPoint");
  FUN_140056680(&local_68,L"/Script/OakGame.ObjectiveTypeSettings_OakMigration.StartEventPoint");
  FUN_141517fc0(lVar9,0x20,&local_68,&local_58);
  FUN_140056680(&local_58,L"OakGame");
  local_b8 = local_a8;
  local_b0 = (uint)uStack_a0;
  FUN_141071fba(&local_b8,&local_58);
  if (local_58 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  FUN_14662084f();
  FUN_140ceb8b5();
  plVar11 = (longlong *)FUN_1458fd8e2();
  plVar12 = (longlong *)FUN_14001cc68(0x60,0x10);
  plVar12[1] = (longlong)&DAT_100000001;
  *plVar12 = (longlong)&PTR_FUN_14b982050;
  plVar8 = plVar12 + 2;
  plVar12[3] = 0;
  plVar12[4] = 0;
  plVar12[5] = 0;
  plVar12[6] = 0;
  plVar12[7] = 0;
  plVar12[2] = (longlong)&PTR_FUN_14b982070;
  plVar12[8] = 0;
  plVar12[9] = 0;
  plVar12[10] = 0;
  plVar12[0xb] = 0;
  local_68 = plVar8;
  local_60 = plVar12;
  FUN_148d8c8d8(&local_68,plVar8);
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
    UNLOCK();
  }
  local_58 = plVar8;
  local_50 = plVar12;
  if (*plVar11 != 0) {
    FUN_145c6acd0(plVar11 + 3,&local_58);
  }
  plVar8 = local_50;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar12 = local_50 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 == 0) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
  }
  plVar8 = local_60;
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar12 = local_60 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 == 0) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
  }
  plVar12 = (longlong *)FUN_14001cc68(0x48,0x10);
  plVar12[1] = (longlong)&DAT_100000001;
  *plVar12 = (longlong)&PTR_FUN_14b9820a0;
  plVar8 = plVar12 + 2;
  plVar12[3] = 0;
  plVar12[4] = 0;
  plVar12[5] = 0;
  plVar12[6] = 0;
  plVar12[7] = 0;
  plVar12[8] = 0;
  plVar12[2] = (longlong)&PTR_FUN_14b9820c0;
  local_68 = plVar8;
  local_60 = plVar12;
  FUN_148d8c9a0(&local_68,plVar8);
  if (plVar12 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
    UNLOCK();
  }
  local_58 = plVar8;
  local_50 = plVar12;
  if (*plVar11 != 0) {
    FUN_145c6acd0(plVar11 + 3,&local_58);
  }
  plVar8 = local_50;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar11 = local_50 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 == 0) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
  }
  plVar8 = local_60;
  if (local_60 != (longlong *)0x0) {
    LOCK();
    plVar11 = local_60 + 1;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)*plVar11 == 0) {
      (**(code **)*local_60)(local_60);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
  }
  puVar13 = (undefined8 *)FUN_14001cc68(8,0x10);
  *puVar13 = 0;
  FUN_146041d22(puVar13);
  *puVar13 = &PTR_FUN_14b9820f0;
  puVar2 = DAT_14cae3d60;
  if (DAT_14cae3d60 != (undefined8 *)0x0) {
    puVar3 = (undefined8 *)*DAT_14cae3d60;
    DAT_14cae3d60 = puVar13;
    (*(code *)*puVar3)(puVar2,1);
    puVar13 = DAT_14cae3d60;
  }
  DAT_14cae3d60 = puVar13;
  FUN_1407a3a24(local_a8,uStack_a0 & 0xffffffff);
  if (local_a8 != 0) {
    FUN_1400020a8();
  }
  if (local_78 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1441b247a FUN_1441b247a body=299 status=ok
// SIG undefined FUN_1441b247a(void)

void FUN_1441b247a(longlong param_1)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  longlong *plVar3;
  undefined1 auStack_48 [32];
  char *local_28;
  undefined4 local_20;
  undefined1 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_145f85d1e();
  FUN_145f85d76();
  local_28 = "LevelSequence";
  local_20 = 0xd;
  local_1c = 0;
  uVar2 = FUN_14001a6c0(&local_28,1);
  plVar3 = (longlong *)FUN_1447c1074(uVar2);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x50))(plVar3,*(undefined8 *)(param_1 + 8));
    (**(code **)(*plVar3 + 0x50))(plVar3,*(undefined8 *)(param_1 + 0x10));
  }
  FUN_145c4ac7a();
  if (DAT_14cb7fbb8 != (undefined8 *)0x0 && DAT_14cb7fbc0 != 0) {
    (**(code **)*DAT_14cb7fbb8)(DAT_14cb7fbb8,0);
    FUN_1446efa72(&DAT_14cb7fbb8,0,0,0x10);
    DAT_14cb7fbc0 = 0;
  }
  PTR_FUN_14c763a90 = FUN_1489f5ec4;
  FUN_14588e26a(FUN_1486b0df8);
  DAT_14cbaee70 = 0;
  FUN_145885206(FUN_1486a14b0);
  puVar1 = DAT_14cae3d60;
  DAT_14cbaadc0 = 0;
  DAT_14cae3d60 = (undefined8 *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441b25a6 FUN_1441b25a6 body=31 status=ok
// SIG undefined FUN_1441b25a6(void)

void FUN_1441b25a6(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x590,0x10);
  FUN_146623446(uVar1);
  return;
}



// FUNCTION 1441b25c5 FUN_1441b25c5 body=182 status=ok
// SIG undefined FUN_1441b25c5(void)

ulonglong FUN_1441b25c5(void)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 unaff_RBX;
  undefined7 uVar8;
  ulonglong uVar7;
  longlong *plVar9;
  bool bVar10;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar6 = FUN_1405f939e();
  FUN_1410d53f0(&local_28,uVar6);
  uVar8 = (undefined7)((ulonglong)unaff_RBX >> 8);
  if (local_20 != (longlong *)0x0) {
    iVar4 = (int)local_20[1];
    do {
      if (iVar4 == 0) {
        plVar9 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar3 = (int)local_20[1];
      bVar10 = iVar4 == iVar3;
      if (bVar10) {
        *(int *)(local_20 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
      plVar9 = local_20;
    } while (!bVar10);
    LOCK();
    piVar1 = (int *)((longlong)local_20 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_20 + 0x10))();
    }
    if (plVar9 != (longlong *)0x0) {
      if (local_28 == 0) {
        uVar7 = CONCAT71(uVar8,1);
      }
      else {
        uVar5 = FUN_1442341a6();
        uVar7 = (ulonglong)uVar5 ^ 1;
      }
      LOCK();
      plVar2 = plVar9 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
      goto LAB_1441b265c;
    }
  }
  uVar7 = CONCAT71(uVar8,1);
LAB_1441b265c:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7 & 0xffffffff;
}



// FUNCTION 1441b267c FUN_1441b267c body=30 status=ok
// SIG undefined FUN_1441b267c(void)

void FUN_1441b267c(int param_1)

{
  if (param_1 == 3) {
    FUN_14092c0b8();
    FUN_140c4e3ec();
    return;
  }
  return;
}



// FUNCTION 1441b26c3 FUN_1441b26c3 body=7097 status=ok
// SIG undefined FUN_1441b26c3(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1441b26c3(void)

{
  char cVar1;
  uint uVar2;
  undefined1 auStack_98 [32];
  char *local_78;
  undefined4 local_70;
  undefined1 local_6c;
  undefined4 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_78 = "AssetRegistry";
  local_70 = 0xd;
  local_6c = 0;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbcd208 = (ulonglong)uVar2;
  _DAT_14cbcd210 = 0;
  uRam000000014cbcd218 = 0;
  _DAT_14cbcd220 = 0;
  DAT_14cbcd228 = 0;
  uRam000000014cbcd230 = 0;
  FUN_1446ddda2(&DAT_14cbcd210,"allactivities",0);
  atexit((_func_5014 *)&LAB_1441a01bc);
  _DAT_14cbcd238 = 0;
  uRam000000014cbcd240 = 0;
  _DAT_14cbcd248 = 0;
  DAT_14cbcd250 = 0;
  uRam000000014cbcd258 = 0;
  FUN_1446ddda2(&DAT_14cbcd238,"serial",0);
  atexit((_func_5014 *)&LAB_1441a01cd);
  _DAT_14cbcd260 = 0;
  uRam000000014cbcd268 = 0;
  _DAT_14cbcd270 = 0;
  DAT_14cbcd278 = 0;
  uRam000000014cbcd280 = 0;
  FUN_1446ddda2(&DAT_14cbcd260,"missionstate",0);
  atexit((_func_5014 *)&LAB_1441a01de);
  local_78 = "Spawner";
  local_70 = 7;
  local_6c = 0;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbcd288 = (ulonglong)uVar2;
  FUN_1400b22c2(&local_78,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_78,&DAT_14cbcd290);
  if (cVar1 == '\0') {
    _DAT_14cbcd290 = 0;
    uRam000000014cbcd298 = 0;
  }
  if (local_78 != (char *)0x0) {
    FUN_1400020a8();
  }
  _DAT_14cbcd2a0 = 0x47efffffe0000000;
  _DAT_14cbcd2a8 = 0x47efffffe0000000;
  _DAT_14cbcd2b0 = 0x47efffffe0000000;
  _DAT_14cbcd2b8 = 0x47efffffe0000000;
  _DAT_14cbcd2c0 = 0x47efffffe0000000;
  _DAT_14cbcd2c8 = 0x47efffffe0000000;
  _DAT_14cbcd2d0 = 0x47efffffe0000000;
  _DAT_14cbcd2d8 = 0x47efffffe0000000;
  local_78 = "Cash";
  local_70 = 4;
  local_6c = 0;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbcd2e0 = (ulonglong)uVar2;
  FUN_1400b22c2(&DAT_14cbcd2e8,"weapon_dps_estimate");
  atexit((_func_5014 *)&LAB_1441a01ef);
  local_78 = "bone";
  local_70 = 4;
  local_6c = 0;
  FUN_14001a6c0(&local_78,1);
  _DAT_14cbcd2fc = 0;
  FUN_14052b5e0(&DAT_14cbcd2f8,"PlayerAwareness",0);
  _DAT_14cbcd308 = "PlayerAwareness";
  local_78 = "basic";
  local_70 = 5;
  local_6c = 0;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbcd310 = (ulonglong)uVar2;
  local_78 = "challenge";
  local_70 = 9;
  local_6c = 0;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbcd318 = (ulonglong)uVar2;
  local_78 = "online";
  local_70 = 6;
  local_6c = 0;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbcd320 = (ulonglong)uVar2;
  local_78 = "social";
  local_70 = 6;
  local_6c = 0;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbcd328 = (ulonglong)uVar2;
  local_78 = "alert";
  local_70 = 5;
  local_6c = 0;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbcd330 = (ulonglong)uVar2;
  local_78 = "photo_mode";
  local_70 = 10;
  local_6c = 0;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbcd338 = (ulonglong)uVar2;
  local_78 = "generic_task";
  local_70 = 0xc;
  local_6c = 0;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbcd340 = (ulonglong)uVar2;
  local_78 = "mission";
  local_70 = 7;
  local_6c = 0;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbcd348 = (ulonglong)uVar2;
  local_78 = "mail";
  local_70 = 4;
  local_6c = 0;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbcd350 = (ulonglong)uVar2;
  local_78 = "respawn";
  local_70 = 7;
  local_6c = 0;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbcd358 = (ulonglong)uVar2;
  local_78 = "tutorial";
  local_70 = 8;
  local_6c = 0;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbcd360 = (ulonglong)uVar2;
  local_78 = "special_notification";
  local_70 = 0x14;
  local_6c = 0;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbcd368 = (ulonglong)uVar2;
  local_78 = "generic_notification";
  local_70 = 0x14;
  local_6c = 0;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbcd370 = (ulonglong)uVar2;
  local_78 = "vault_card";
  local_70 = 10;
  local_6c = 0;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbcd378 = (ulonglong)uVar2;
  local_78 = "ONLINE_MESSAGE";
  local_70 = 0xe;
  local_6c = 0;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbcd380 = (ulonglong)uVar2;
  local_78 = "INGAME_MESSAGE";
  local_70 = 0xe;
  local_6c = 0;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbcd388 = (ulonglong)uVar2;
  local_78 = "NOTIFICATION_MESSAGE";
  local_70 = 0x14;
  local_6c = 0;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbcd390 = (ulonglong)uVar2;
  local_78 = "MENU_TUTORIAL_MESSAGE";
  local_70 = 0x15;
  local_6c = 0;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbcd398 = (ulonglong)uVar2;
  local_78 = "collectible";
  local_70 = 0xb;
  local_6c = 0;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbcd3a0 = (ulonglong)uVar2;
  FUN_1446f470e(&DAT_14cbcd3a8,L"UNSET",1);
  local_78 = "init";
  local_70 = 4;
  local_6c = 0;
  FUN_14001a6c0(&local_78,1);
  local_78 = "update";
  local_70 = 6;
  local_6c = 0;
  FUN_14001a6c0(&local_78,1);
  local_78 = "config_update";
  local_70 = 0xd;
  local_6c = 0;
  FUN_14001a6c0(&local_78,1);
  local_78 = "deinit";
  local_70 = 6;
  local_6c = 0;
  FUN_14001a6c0(&local_78,1);
  FUN_1446f470e(&DAT_14cbcd3b0,L"Party",1);
  FUN_1446f470e(&DAT_14cbcd3b8,&DAT_149e063b2);
  local_78 = "Standard";
  local_70 = 8;
  local_6c = 0;
  uVar2 = FUN_14001a6c0(&local_78,1);
  DAT_14cbcd3c0 = (ulonglong)uVar2;
  local_78 = "PrologueSkip";
  local_70 = 0xc;
  local_6c = 0;
  uVar2 = FUN_14001a6c0(&local_78,1);
  DAT_14cbcd3c8 = (ulonglong)uVar2;
  local_78 = "UltimateVaultHunterSkip";
  local_70 = 0x17;
  local_6c = 0;
  uVar2 = FUN_14001a6c0(&local_78,1);
  DAT_14cbcd3d0 = (ulonglong)uVar2;
  local_78 = "SkipToDLC_Cowbell";
  local_70 = 0x11;
  local_6c = 0;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbcd3d8 = (ulonglong)uVar2;
  local_78 = "SkipToDLC_Harmonica";
  local_70 = 0x13;
  local_6c = 0;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbcd3e0 = (ulonglong)uVar2;
  ram0x00014cbcd3ec = 0;
  FUN_14052b5e0(&DAT_14cbcd3e8,"enabled",0);
  _DAT_14cbcd3f8 = "enabled";
  DAT_14cbcd400 = 0;
  ram0x00014cbcdd3c = 0;
  FUN_14052b5e0(&DAT_14cbcdd38,"hidewaypoint",0);
  _DAT_14cbcdd48 = "hidewaypoint";
  ram0x00014cbcdd54 = 0;
  FUN_14052b5e0(&DAT_14cbcdd50,"showwaypoint",0);
  _DAT_14cbcdd60 = "showwaypoint";
  local_78 = "Use";
  local_70 = 3;
  local_6c = 0;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbcd408 = (ulonglong)uVar2;
  local_78 = "Sight";
  local_70 = 5;
  local_6c = 0;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbcd410 = (ulonglong)uVar2;
  local_78 = "TargetLock";
  local_70 = 10;
  local_6c = 0;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbcd418 = (ulonglong)uVar2;
  FUN_140056680(&DAT_14cbcd420,L"GoreStump_");
  atexit((_func_5014 *)&LAB_1441a2f39);
  FUN_140056680(&DAT_14cbcd430,L"GoreLimb_");
  atexit((_func_5014 *)&LAB_1441a2f4a);
  FUN_140056680(&DAT_14cbcd440,L"GoreDecal_");
  atexit((_func_5014 *)&LAB_1441a2f5b);
  FUN_140056680(&DAT_14cbcd450,L"GoreFX_");
  atexit((_func_5014 *)&LAB_1441a2f6c);
  FUN_1446f470e(&DAT_14cbcd460,L"LIMB_GORED",1);
  _DAT_14cbcd468 = 0x4072c00000000000;
  _DAT_14cbcd470 = 0x4082c00000000000;
  FUN_1446f470e(&DAT_14cbcd478,L"body",1);
  FUN_1446f470e(&DAT_14cbcd480,L"title_card",1);
  local_78 = "panel_used";
  local_70 = 10;
  local_6c = 0;
  uVar2 = FUN_14001a6c0(&local_78,1);
  DAT_14cbcd488 = (ulonglong)uVar2;
  local_78 = "panel_using";
  local_70 = 0xb;
  local_6c = 0;
  uVar2 = FUN_14001a6c0(&local_78,1);
  DAT_14cbcd490 = (ulonglong)uVar2;
  local_78 = "carryable_placed";
  local_70 = 0x10;
  local_6c = 0;
  uVar2 = FUN_14001a6c0(&local_78,1);
  DAT_14cbcd4e0 = (ulonglong)uVar2;
  FUN_1446f470e(&DAT_14cbcd4e8,L"BossFightState");
  local_78 = "Complete";
  local_70 = 8;
  local_6c = 0;
  uVar2 = FUN_14001a6c0(&local_78,1);
  DAT_14cbcd4f0 = (ulonglong)uVar2;
  local_78 = "grappled";
  local_70 = 8;
  local_6c = 0;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbcd4f8 = (ulonglong)uVar2;
  local_78 = "grappler_attached";
  local_70 = 0x11;
  local_6c = 0;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbcd500 = (ulonglong)uVar2;
  local_78 = "grappler_detached";
  local_70 = 0x11;
  local_6c = 0;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbcd508 = (ulonglong)uVar2;
  local_78 = "item_taken";
  local_70 = 10;
  local_6c = 0;
  uVar2 = FUN_14001a6c0(&local_78,1);
  DAT_14cbcdd20 = (ulonglong)uVar2;
  local_78 = "all_items_taken";
  local_70 = 0xf;
  local_6c = 0;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbcdd28 = (ulonglong)uVar2;
  local_78 = "opened";
  local_70 = 6;
  local_6c = 0;
  uVar2 = FUN_14001a6c0(&local_78,1);
  DAT_14cbcdd30 = (ulonglong)uVar2;
  local_78 = "item_exchanged";
  local_70 = 0xe;
  local_6c = 0;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbcd510 = (ulonglong)uVar2;
  local_78 = "GeneratedMission";
  local_70 = 0x10;
  local_6c = 0;
  uVar2 = FUN_14001a6c0(&local_78,1);
  DAT_14cbcd518 = (ulonglong)uVar2;
  local_78 = "Custom0";
  local_70 = 7;
  local_6c = 0;
  uVar2 = FUN_14001a6c0(&local_78,1);
  DAT_14cbcd520 = (ulonglong)uVar2;
  local_78 = "Custom1";
  local_70 = 7;
  local_6c = 0;
  uVar2 = FUN_14001a6c0(&local_78,1);
  DAT_14cbcd528 = (ulonglong)uVar2;
  local_78 = "Custom2";
  local_70 = 7;
  local_6c = 0;
  uVar2 = FUN_14001a6c0(&local_78,1);
  DAT_14cbcd530 = (ulonglong)uVar2;
  local_78 = "Custom3";
  local_70 = 7;
  local_6c = 0;
  uVar2 = FUN_14001a6c0(&local_78,1);
  DAT_14cbcd538 = (ulonglong)uVar2;
  local_78 = "Custom4";
  local_70 = 7;
  local_6c = 0;
  uVar2 = FUN_14001a6c0(&local_78,1);
  DAT_14cbcd540 = (ulonglong)uVar2;
  local_78 = "Custom5";
  local_70 = 7;
  local_6c = 0;
  uVar2 = FUN_14001a6c0(&local_78,1);
  DAT_14cbcd548 = (ulonglong)uVar2;
  local_78 = "Custom6";
  local_70 = 7;
  local_6c = 0;
  uVar2 = FUN_14001a6c0(&local_78,1);
  DAT_14cbcd550 = (ulonglong)uVar2;
  local_78 = "Custom7";
  local_70 = 7;
  local_6c = 0;
  uVar2 = FUN_14001a6c0(&local_78,1);
  DAT_14cbcd558 = (ulonglong)uVar2;
  local_78 = "Custom8";
  local_70 = 7;
  local_6c = 0;
  uVar2 = FUN_14001a6c0(&local_78,1);
  DAT_14cbcd560 = (ulonglong)uVar2;
  _DAT_14cbcd580 = &LAB_1441a6034;
  _DAT_14cbcd588 = 0x44430000;
  DAT_14cbcd58c = 1;
  DAT_14cbcd578 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cbcd578;
  atexit((_func_5014 *)&LAB_1441a6039);
  _DAT_14cbcd59c = 0;
  _DAT_14cbcd5a0 = 0;
  FUN_14052b5e0(&DAT_14cbcd598,"trait_mission",0);
  _DAT_14cbcd5a8 = "trait_mission";
  _DAT_14cbcd5b4 = 0;
  _DAT_14cbcd5b8 = 0;
  FUN_14052b5e0(&DAT_14cbcd5b0,"weekly_trait_mission",0);
  _DAT_14cbcd5c0 = "weekly_trait_mission";
  DAT_14cbcd5c8 = 0;
  atexit((_func_5014 *)&LAB_1441a6209);
  local_78 = "nexus";
  local_70 = 5;
  local_6c = 0;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbcd8a8 = (ulonglong)uVar2;
  _DAT_14cbcd8d0 = 0;
  _DAT_14cbcd8d8 = 0;
  _DAT_14cbcd8b0 = 0;
  uRam000000014cbcd8b8 = 0;
  _DAT_14cbcd8dc = 0x80;
  _DAT_14cbcd8e0 = 0xffffffff;
  _DAT_14cbcd8e4 = 0;
  DAT_14cbcd8f0 = 0;
  _DAT_14cbcd8f8 = 0;
  atexit(FUN_1441a6221);
  _DAT_14cbcd920 = 0;
  _DAT_14cbcd928 = 0;
  _DAT_14cbcd900 = 0;
  _DAT_14cbcd908 = 0;
  _DAT_14cbcd92c = 0x80;
  _DAT_14cbcd930 = 0xffffffff;
  _DAT_14cbcd934 = 0;
  DAT_14cbcd940 = 0;
  _DAT_14cbcd948 = 0;
  atexit(FUN_1441a6250);
  DAT_14cbcd970 = 0;
  DAT_14cbcd978 = 0;
  DAT_14cbcd950 = 0;
  _DAT_14cbcd958 = 0;
  DAT_14cbcd97c = 0x80;
  DAT_14cbcd980 = 0xffffffff;
  DAT_14cbcd984 = 0;
  DAT_14cbcd990 = 0;
  DAT_14cbcd998 = 0;
  atexit(FUN_1441a627f);
  DAT_14cbcd9c0 = 0;
  DAT_14cbcd9c8 = 0;
  DAT_14cbcd9a0 = 0;
  _DAT_14cbcd9a8 = 0;
  DAT_14cbcd9cc = 0x80;
  DAT_14cbcd9d0 = 0xffffffff;
  DAT_14cbcd9d4 = 0;
  DAT_14cbcd9e0 = 0;
  DAT_14cbcd9e8 = 0;
  atexit(FUN_1441a62a8);
  _DAT_14cbcda10 = 0;
  _DAT_14cbcda18 = 0;
  _DAT_14cbcd9f0 = 0;
  uRam000000014cbcd9f8 = 0;
  _DAT_14cbcda1c = 0x80;
  _DAT_14cbcda20 = 0xffffffff;
  _DAT_14cbcda24 = 0;
  DAT_14cbcda30 = 0;
  _DAT_14cbcda38 = 0;
  atexit(FUN_1441a62d1);
  local_78 = "MainStory";
  local_70 = 9;
  local_6c = 0;
  uVar2 = FUN_14001a6c0(&local_78,1);
  DAT_14cbcdd98 = (ulonglong)uVar2;
  local_78 = "SideMission";
  local_70 = 0xb;
  local_6c = 0;
  uVar2 = FUN_14001a6c0(&local_78,1);
  DAT_14cbcdda8 = (ulonglong)uVar2;
  local_78 = "MicroMission";
  local_70 = 0xc;
  local_6c = 0;
  uVar2 = FUN_14001a6c0(&local_78,1);
  DAT_14cbcddb0 = (ulonglong)uVar2;
  local_78 = "Contract";
  local_70 = 8;
  local_6c = 0;
  uVar2 = FUN_14001a6c0(&local_78,1);
  DAT_14cbcddd8 = (ulonglong)uVar2;
  local_78 = "Safehouse";
  local_70 = 9;
  local_6c = 0;
  uVar2 = FUN_14001a6c0(&local_78,1);
  DAT_14cbcdd68 = (ulonglong)uVar2;
  local_78 = "Crawler";
  local_70 = 7;
  local_6c = 0;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbcdd70 = (ulonglong)uVar2;
  local_78 = "OrderBunker";
  local_70 = 0xb;
  local_6c = 0;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbcdd78 = (ulonglong)uVar2;
  local_78 = "Silo";
  local_70 = 4;
  local_6c = 0;
  uVar2 = FUN_14001a6c0(&local_78,1);
  DAT_14cbcdd80 = (ulonglong)uVar2;
  local_78 = "Test";
  local_70 = 4;
  local_6c = 0;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbcd570 = (ulonglong)uVar2;
  local_78 = "Event";
  local_70 = 5;
  local_6c = 0;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbcd568 = (ulonglong)uVar2;
  local_78 = "Mine";
  local_70 = 4;
  local_6c = 0;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbcdd88 = (ulonglong)uVar2;
  local_78 = "DrillSite";
  local_70 = 9;
  local_6c = 0;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbcdd90 = (ulonglong)uVar2;
  local_78 = "MODU";
  local_70 = 4;
  local_6c = 0;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbcda48 = (ulonglong)uVar2;
  local_78 = "FRA";
  local_70 = 3;
  local_6c = 0;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbcda50 = (ulonglong)uVar2;
  local_78 = "FactionMission";
  local_70 = 0xe;
  local_6c = 0;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbcddc8 = (ulonglong)uVar2;
  local_78 = "TrueMission";
  local_70 = 0xb;
  local_6c = 0;
  uVar2 = FUN_14001a6c0(&local_78,1);
  DAT_14cbcdde0 = (ulonglong)uVar2;
  local_78 = "DLC_MainStory";
  local_70 = 0xd;
  local_6c = 0;
  uVar2 = FUN_14001a6c0(&local_78,1);
  DAT_14cbcdda0 = (ulonglong)uVar2;
  local_78 = "DLC_SideMission";
  local_70 = 0xf;
  local_6c = 0;
  uVar2 = FUN_14001a6c0(&local_78,1);
  DAT_14cbcddb8 = (ulonglong)uVar2;
  local_78 = "DLC_MicroMission";
  local_70 = 0x10;
  local_6c = 0;
  uVar2 = FUN_14001a6c0(&local_78,1);
  DAT_14cbcddc0 = (ulonglong)uVar2;
  local_78 = "DLC_FactionMission";
  local_70 = 0x12;
  local_6c = 0;
  uVar2 = FUN_14001a6c0(&local_78,1);
  DAT_14cbcddd0 = (ulonglong)uVar2;
  local_78 = "Takedown";
  local_70 = 8;
  local_6c = 0;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbcdde8 = (ulonglong)uVar2;
  local_78 = "Takedown_Timer";
  local_70 = 0xe;
  local_6c = 0;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbcddf8 = (ulonglong)uVar2;
  local_78 = "Takedown_Hardcore";
  local_70 = 0x11;
  local_6c = 0;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbcddf0 = (ulonglong)uVar2;
  _DAT_14cbcda5c = 0;
  _DAT_14cbcda60 = 0;
  FUN_14052b5e0(&DAT_14cbcda58,"State",0);
  _DAT_14cbcda68 = "State";
  _DAT_14cbcda74 = 0;
  _DAT_14cbcda78 = 0;
  FUN_14052b5e0(&DAT_14cbcda70,"breadcrumbs_progress",0);
  _DAT_14cbcda80 = "breadcrumbs_progress";
  _DAT_14cbcd49c = 0;
  _DAT_14cbcd4a0 = 0;
  FUN_14052b5e0(&DAT_14cbcd498,"Use_State",0);
  _DAT_14cbcd4a8 = "Use_State";
  DAT_14cbcda8c._0_4_ = 0;
  DAT_14cbcda8c._4_4_ = 0;
  FUN_14052b5e0(&DAT_14cbcda88,&DAT_14a17a0b0,0);
  _DAT_14cbcda98 = &DAT_14a17a0b0;
  DAT_14cbcdaa4._0_4_ = 0;
  DAT_14cbcdaa4._4_4_ = 0;
  FUN_14052b5e0(&DAT_14cbcdaa0,"Usable",0);
  _DAT_14cbcdab0 = "Usable";
  _DAT_14cbcd4cc = 0;
  _DAT_14cbcd4d0 = 0;
  FUN_14052b5e0(&DAT_14cbcd4c8,"Using",0);
  _DAT_14cbcd4d8 = "Using";
  DAT_14cbcd4b4._0_4_ = 0;
  DAT_14cbcd4b4._4_4_ = 0;
  FUN_14052b5e0(&DAT_14cbcd4b0,&DAT_14b434d70,0);
  _DAT_14cbcd4c0 = &DAT_14b434d70;
  _DAT_14cbcdabc = 0;
  _DAT_14cbcdac0 = 0;
  FUN_14052b5e0(&DAT_14cbcdab8,"EchoLogState",0);
  _DAT_14cbcdac8 = "EchoLogState";
  local_78 = "Dormant";
  local_70 = 7;
  local_6c = 0;
  uVar2 = FUN_14001a6c0(&local_78,1);
  DAT_14cbcdad0 = (ulonglong)uVar2;
  local_78 = "Idle";
  local_70 = 4;
  local_6c = 0;
  uVar2 = FUN_14001a6c0(&local_78,1);
  DAT_14cbcdad8 = (ulonglong)uVar2;
  local_78 = "FlyTo";
  local_70 = 5;
  local_6c = 0;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbcdae0 = (ulonglong)uVar2;
  local_78 = "Using";
  local_70 = 5;
  local_6c = 0;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbcdae8 = (ulonglong)uVar2;
  local_78 = "Used";
  local_70 = 4;
  local_6c = 0;
  uVar2 = FUN_14001a6c0(&local_78,1);
  _DAT_14cbcdaf0 = (ulonglong)uVar2;
  local_78 = "completed";
  local_70 = 9;
  local_6c = 0;
  uVar2 = FUN_14001a6c0(&local_78,1);
  DAT_14cbcdaf8 = (ulonglong)uVar2;
  local_78 = "Downed";
  local_70 = 6;
  local_6c = 0;
  uVar2 = FUN_14001a6c0(&local_78,1);
  DAT_14cbcdb00 = (ulonglong)uVar2;
  local_78 = "Placeable";
  local_70 = 9;
  local_6c = 0;
  uVar2 = FUN_14001a6c0(&local_78,1);
  DAT_14cbcdb08 = (ulonglong)uVar2;
  DAT_14cbcdb10._4_4_ = 0;
  DAT_14cbcdb18 = 0;
  FUN_14052b5e0(&DAT_14cbcdb10,"filter",0);
  _DAT_14cbcdb20 = "filter";
  local_78 = "Died";
  local_70 = 4;
  local_6c = 0;
  uVar2 = FUN_14001a6c0(&local_78,1);
  DAT_14cbcdb28 = (ulonglong)uVar2;
  _DAT_14cbcdb34 = 0;
  _DAT_14cbcdb38 = 0;
  FUN_14052b5e0(&DAT_14cbcdb30,"target_lootable",0);
  _DAT_14cbcdb40 = "target_lootable";
  _DAT_14cbcdb4c = 0;
  _DAT_14cbcdb50 = 0;
  FUN_14052b5e0(&DAT_14cbcdb48,"chosen_lootable",0);
  _DAT_14cbcdb58 = "chosen_lootable";
  _DAT_14cbcdb60 = 0;
  uRam000000014cbcdb68 = 0;
  _DAT_14cbcdb70 = 0;
  DAT_14cbcdb78 = 0;
  uRam000000014cbcdb80 = 0;
  FUN_1446ddda2(&DAT_14cbcdb60,"StartNode");
  atexit((_func_5014 *)&LAB_1441a9a7c);
  local_78 = "EnemyDrop";
  local_70 = 9;
  local_6c = 0;
  uVar2 = FUN_14001a6c0(&local_78,1);
  DAT_14cbcdb88 = (ulonglong)uVar2;
  local_78 = "IODrop";
  local_70 = 6;
  local_6c = 0;
  uVar2 = FUN_14001a6c0(&local_78,1);
  DAT_14cbcdb90 = (ulonglong)uVar2;
  DAT_14cbcdb98._4_4_ = 0;
  DAT_14cbcdba0 = 0;
  FUN_14052b5e0(&DAT_14cbcdb98,"PickupSpawner",0);
  _DAT_14cbcdba8 = "PickupSpawner";
  DAT_14cbcdbb0._4_4_ = 0;
  DAT_14cbcdbb8 = 0;
  FUN_14052b5e0(&DAT_14cbcdbb0,"bOverrideDownStateDuration",0);
  _DAT_14cbcdbc0 = "bOverrideDownStateDuration";
  DAT_14cbcdbc8._4_4_ = 0;
  DAT_14cbcdbd0 = 0;
  FUN_14052b5e0(&DAT_14cbcdbc8,"DownStateSettings",0);
  _DAT_14cbcdbd8 = "DownStateSettings";
  DAT_14cbcdbe0._4_4_ = 0;
  DAT_14cbcdbe8 = 0;
  FUN_14052b5e0(&DAT_14cbcdbe0,"dispenser",0);
  _DAT_14cbcdbf0 = "dispenser";
  DAT_14cbcdbf8._4_4_ = 0;
  DAT_14cbcdc00 = 0;
  FUN_14052b5e0(&DAT_14cbcdbf8,"bAutoManageDispenserEnabledState",0);
  _DAT_14cbcdc08 = "bAutoManageDispenserEnabledState";
  local_78 = "WorldRegionDef";
  local_70 = 0xe;
  local_6c = 0;
  uVar2 = FUN_14001a6c0(&local_78,1);
  DAT_14cbcdc10 = (ulonglong)uVar2;
  local_78 = "Zone";
  local_70 = 4;
  local_6c = 0;
  uVar2 = FUN_14001a6c0(&local_78,1);
  DAT_14cbcdc18 = (ulonglong)uVar2;
  _DAT_14cbcdc28 = &LAB_1441a9abe;
  _DAT_14cbcdc30 = 0x44342333;
  DAT_14cbcdc34 = 1;
  DAT_14cbcdc20 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cbcdc20;
  atexit((_func_5014 *)&LAB_1441a9ac3);
  FUN_1446f470e(&DAT_14cbcdc40,L"CharacterSelectArea");
  FUN_140056680(&DAT_14cbcdc48,L"GameplayEnded");
  atexit((_func_5014 *)&LAB_1441aa326);
  DAT_14cbcdc58._4_4_ = 0;
  DAT_14cbcdc60 = 0;
  FUN_14052b5e0(&DAT_14cbcdc58,"SkipPrologueTitleText",0);
  _DAT_14cbcdc68 = "SkipPrologueTitleText";
  DAT_14cbcdc70._4_4_ = 0;
  DAT_14cbcdc78 = 0;
  FUN_14052b5e0(&DAT_14cbcdc70,"SkipPrologueDescText",0);
  _DAT_14cbcdc80 = "SkipPrologueDescText";
  _DAT_14cbcdc8c = 0;
  _DAT_14cbcdc90 = 0;
  FUN_14052b5e0(&DAT_14cbcdc88,"SkipUVHTitleText",0);
  _DAT_14cbcdc98 = "SkipUVHTitleText";
  _DAT_14cbcdca4 = 0;
  _DAT_14cbcdca8 = 0;
  FUN_14052b5e0(&DAT_14cbcdca0,"SkipUVHDescText",0);
  _DAT_14cbcdcb0 = "SkipUVHDescText";
  _DAT_14cbcdcbc = 0;
  _DAT_14cbcdcc0 = 0;
  FUN_14052b5e0(&DAT_14cbcdcb8,"Mission_Main_PrisonPrologue",0);
  _DAT_14cbcdcc8 = "Mission_Main_PrisonPrologue";
  _DAT_14cbcdce0 = &LAB_1441ab112;
  _DAT_14cbcdce8 = 0x447a0000;
  DAT_14cbcdcec = 1;
  DAT_14cbcdcd8 = DAT_14c9a1ab8;
  DAT_14c9a1ab8 = &DAT_14cbcdcd8;
  atexit((_func_5014 *)&LAB_1441ab117);
  _DAT_14cbcdcf8 = 0xffffffff;
  _DAT_14cbcdcfc = 0;
  wcscpy(u_UnrealGame_14c758630,L"OakGame");
  local_78 = (char *)0x800000014b97c150;
  local_64 = 7;
  local_70 = FUN_14577453c(L"OakGame");
  local_6c = 1;
  FUN_14662db4c(&local_78);
  _DAT_14cbcdd08 = &DAT_14c87eb10;
  if ((local_60 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441b4292 FUN_1441b4292 body=396 status=ok
// SIG undefined FUN_1441b4292(void)

void FUN_1441b4292(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
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
  if (param_2 != 0) {
    if (param_3 != 0) {
      lVar2 = FUN_14141a00e();
      if ((*(int *)(*(longlong *)(param_3 + 0x10) + 0x38) < *(int *)(lVar2 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x30) +
           (longlong)*(int *)(lVar2 + 0x38) * 8) != lVar2 + 0x30)) goto LAB_1441b4345;
    }
    lVar2 = *(longlong *)(param_1 + 0x1358);
    if ((lVar2 != 0) && ((longlong)*(int *)(lVar2 + 0x40) != 0)) {
      lVar3 = 0;
      do {
        lVar1 = *(longlong *)(*(longlong *)(lVar2 + 0x38) + lVar3);
        if ((lVar1 != 0) && (lVar1 = *(longlong *)(lVar1 + 0x30), lVar1 != 0)) {
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
          lVar2 = *(longlong *)(lVar1 + 0x10);
          if ((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(lVar2 + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) ==
              DAT_14cbadd90 + 0x30)) {
                    /* WARNING: Subroutine does not return */
            FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_98);
          }
          break;
        }
        lVar3 = lVar3 + 8;
      } while ((longlong)*(int *)(lVar2 + 0x40) * 8 != lVar3);
    }
  }
LAB_1441b4345:
  if ((local_20 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1441b4434 FUN_1441b4434 body=685 status=ok
// SIG undefined FUN_1441b4434(void)

void FUN_1441b4434(longlong *param_1,char param_2)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined2 local_78;
  char local_76;
  undefined1 local_75;
  undefined4 local_74;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [5];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  plVar3 = (longlong *)FUN_1400d690e(param_1 + 4);
  lVar9 = param_1[0x19];
  if ((((((lVar9 == 0) || (*(char *)(lVar9 + 0x68) != '\x01')) ||
        (*(char *)(lVar9 + 0x69) != '\x01')) ||
       (((*(char *)(lVar9 + 0x6a) != '\x01' || (*(int *)((longlong)param_1 + 0xe4) == 0)) ||
        ((uVar1 = *(uint *)(param_1 + 0x1c), (int)uVar1 < 0 ||
         ((DAT_14c9647dc <= (int)uVar1 ||
          (puVar5 = (undefined8 *)
                    ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
          puVar5 == (undefined8 *)0x0)))))))) ||
      (*(int *)(puVar5 + 2) != *(int *)((longlong)param_1 + 0xe4))) ||
     ((*(uint *)(puVar5 + 1) & 0x10200000) != 0)) goto LAB_1441b44cf;
  if (*(int *)((longlong)param_1 + 0xdc) == 0) {
LAB_1441b4541:
    bVar10 = false;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x1b);
    bVar10 = false;
    if ((-1 < (int)uVar1) && (bVar10 = false, (int)uVar1 < DAT_14c9647dc)) {
      lVar9 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      if ((lVar9 == 0) || (*(int *)(lVar9 + 0x10) != *(int *)((longlong)param_1 + 0xdc)))
      goto LAB_1441b4541;
      bVar10 = (*(uint *)(lVar9 + 8) & 0x10200000) == 0;
    }
  }
  if ((plVar3 != (longlong *)0x0) && (!bVar10)) {
    local_88 = 0;
    uStack_80 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    local_78 = 0x100;
    local_75 = 0;
    local_74 = 8;
    local_68 = 0;
    local_58 = (longlong *)0x0;
    local_76 = param_2 << 2;
    if ((*(int *)((longlong)param_1 + 0xec) != 0) &&
       ((((uVar1 = *(uint *)(param_1 + 0x1d), -1 < (int)uVar1 && ((int)uVar1 < DAT_14c9647dc)) &&
         (puVar8 = (undefined8 *)
                   ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
         puVar8 != (undefined8 *)0x0)) &&
        ((*(int *)(puVar8 + 2) == *(int *)((longlong)param_1 + 0xec) &&
         ((*(uint *)(puVar8 + 1) & 0x10200000) == 0)))))) {
      if ((*(uint *)(puVar8 + 1) & 0x10200000) == 0) {
        local_88 = *puVar8;
      }
      else {
        local_88 = 0;
      }
    }
    if ((*(uint *)(puVar5 + 1) & 0x10200000) == 0) {
      uVar7 = *puVar5;
    }
    else {
      uVar7 = 0;
    }
    uVar4 = (**(code **)(*plVar3 + 0x18))(plVar3);
    lVar9 = FUN_141037e38(uVar7,uVar4,param_1 + 8,&local_a8);
    if (lVar9 != 0) {
      uVar1 = *(uint *)(lVar9 + 0xc);
      *(uint *)(param_1 + 0x1b) = uVar1;
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar9 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar9 = 0;
      }
      iVar2 = *(int *)(lVar9 + 0x10);
      if (*(int *)(lVar9 + 0x10) == 0) {
        LOCK();
        iVar2 = DAT_14c964868 + 1;
        UNLOCK();
        iVar6 = DAT_14c964868 + 1;
        bVar10 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar2;
        if (bVar10) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar6);
        }
        LOCK();
        iVar2 = *(int *)(lVar9 + 0x10);
        bVar10 = iVar2 == 0;
        if (bVar10) {
          *(int *)(lVar9 + 0x10) = iVar6;
          iVar2 = 0;
        }
        UNLOCK();
        if (bVar10) {
          iVar2 = iVar6;
        }
      }
      *(int *)((longlong)param_1 + 0xdc) = iVar2;
      *(undefined1 *)(param_1 + 0x18) = 4;
      (**(code **)(*param_1 + 0x10))(param_1);
    }
    if (local_68 != 0) {
      plVar3 = local_58;
      if (local_58 == (longlong *)0x0) {
        plVar3 = local_48;
      }
      (**(code **)(*plVar3 + 0x10))();
    }
  }
LAB_1441b44cf:
  if ((local_20 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1441b46e2 FUN_1441b46e2 body=266 status=ok
// SIG undefined FUN_1441b46e2(void)

void FUN_1441b46e2(longlong param_1)

{
  uint uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (((*(int *)(param_1 + 0xdc) != 0) && (uVar1 = *(uint *)(param_1 + 0xd8), -1 < (int)uVar1)) &&
     ((int)uVar1 < DAT_14c9647dc)) {
    plVar4 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar4 != (longlong *)0x0) && ((int)plVar4[2] == *(int *)(param_1 + 0xdc))) &&
       (((*(uint *)(plVar4 + 1) & 0x10200000) == 0 &&
        (plVar4 = (longlong *)*plVar4, plVar4 != (longlong *)0x0)))) {
      uVar2 = FUN_1401b0f18();
      plVar4 = (longlong *)(**(code **)(*plVar4 + 0x288))(plVar4,uVar2);
      if (plVar4 != (longlong *)0x0) {
        uVar2 = FUN_1401b0f18();
        plVar3 = (longlong *)FUN_144718840(plVar4,uVar2);
        if (plVar3 != (longlong *)0x0 && plVar4 != plVar3) {
          uVar2 = (**(code **)(*plVar3 + 0x28))(plVar3);
          local_28 = *(undefined8 *)(param_1 + 200);
          local_20 = *(longlong *)(param_1 + 0xd0);
          if (local_20 != 0) {
            LOCK();
            *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
            UNLOCK();
          }
          FUN_1405f862c(uVar2,&local_28);
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



// FUNCTION 1441b47f6 FUN_1441b47f6 body=188 status=ok
// SIG undefined FUN_1441b47f6(void)

void FUN_1441b47f6(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  
  if (((*(int *)(param_1 + 0xdc) != 0) && (uVar1 = *(uint *)(param_1 + 0xd8), -1 < (int)uVar1)) &&
     ((int)uVar1 < DAT_14c9647dc)) {
    plVar4 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar4 != (longlong *)0x0) && ((int)plVar4[2] == *(int *)(param_1 + 0xdc))) &&
       (((*(uint *)(plVar4 + 1) & 0x10200000) == 0 && (lVar2 = *plVar4, lVar2 != 0)))) {
      lVar3 = FUN_141068032();
      if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8
           ) == lVar3 + 0x30)) {
        FUN_146636caa(lVar2,param_1 + 0x130);
        FUN_1441b46e2(param_1);
        FUN_14113775c(lVar2,param_1 + 0x40,0,0,0);
        FUN_140d4895a(lVar2);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1441b4900 FUN_1441b4900 body=313 status=ok
// SIG undefined FUN_1441b4900(void)

void FUN_1441b4900(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1418ed216(&local_30,param_3);
  if (local_30 != 0) {
    if (local_28 == (longlong *)0x0) goto LAB_1441b4a08;
    lVar3 = local_28[1];
    LOCK();
    piVar1 = (int *)((longlong)local_28 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_28 + 0x10))();
    }
    if ((int)lVar3 < 1) goto LAB_1441b4a08;
    FUN_1418ed216(&local_30,param_3);
    if (local_28 != (longlong *)0x0) {
      iVar5 = (int)local_28[1];
      do {
        if (iVar5 == 0) {
          plVar6 = (longlong *)0x0;
          break;
        }
        LOCK();
        iVar4 = (int)local_28[1];
        bVar7 = iVar5 == iVar4;
        if (bVar7) {
          *(int *)(local_28 + 1) = iVar5 + 1;
          iVar4 = iVar5;
        }
        iVar5 = iVar4;
        UNLOCK();
        plVar6 = local_28;
      } while (!bVar7);
      LOCK();
      piVar1 = (int *)((longlong)local_28 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_28 + 0x10))();
      }
      lVar3 = local_30;
      local_28 = (longlong *)0x0;
      if (plVar6 != (longlong *)0x0) {
        local_30 = 0;
        FUN_140b74fa6(lVar3,param_3,0,param_2);
        LOCK();
        plVar2 = plVar6 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar6)(plVar6);
          LOCK();
          piVar1 = (int *)((longlong)plVar6 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar6 + 0x10))(plVar6);
          }
        }
        goto LAB_1441b49f7;
      }
    }
    FUN_140b74fa6(0,param_3,0,param_2);
  }
LAB_1441b49f7:
  if (local_28 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_28 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_28 + 0x10))();
    }
  }
LAB_1441b4a08:
  if (DAT_14cbcdfe8 == param_2) {
    FUN_14623734b(param_3);
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1441b4a3c FUN_1441b4a3c body=308 status=ok
// SIG undefined FUN_1441b4a3c(void)

void FUN_1441b4a3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1418ed216(&local_40,param_4);
  if (local_40 != 0) {
    if (local_38 == (longlong *)0x0) goto LAB_1441b4b4f;
    lVar3 = local_38[1];
    LOCK();
    piVar1 = (int *)((longlong)local_38 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_38 + 0x10))();
    }
    if ((int)lVar3 < 1) goto LAB_1441b4b4f;
    FUN_1418ed216(&local_40,param_4);
    if (local_38 != (longlong *)0x0) {
      iVar5 = (int)local_38[1];
      do {
        if (iVar5 == 0) {
          plVar6 = (longlong *)0x0;
          break;
        }
        LOCK();
        iVar4 = (int)local_38[1];
        bVar7 = iVar5 == iVar4;
        if (bVar7) {
          *(int *)(local_38 + 1) = iVar5 + 1;
          iVar4 = iVar5;
        }
        iVar5 = iVar4;
        UNLOCK();
        plVar6 = local_38;
      } while (!bVar7);
      LOCK();
      piVar1 = (int *)((longlong)local_38 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_38 + 0x10))();
      }
      lVar3 = local_40;
      local_38 = (longlong *)0x0;
      if (plVar6 != (longlong *)0x0) {
        local_40 = 0;
        FUN_140b74fa6(lVar3,param_4,param_3,param_2);
        LOCK();
        plVar2 = plVar6 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar6)(plVar6);
          LOCK();
          piVar1 = (int *)((longlong)plVar6 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar6 + 0x10))(plVar6);
          }
        }
        goto LAB_1441b4b3e;
      }
    }
    FUN_140b74fa6(0,param_4,param_3,param_2);
  }
LAB_1441b4b3e:
  if (local_38 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_38 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_38 + 0x10))();
    }
  }
LAB_1441b4b4f:
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1441b4b88 FUN_1441b4b88 body=126 status=ok
// SIG undefined FUN_1441b4b88(void)

uint * FUN_1441b4b88(longlong param_1,uint *param_2,undefined8 param_3,undefined8 param_4)

{
  byte bVar1;
  undefined1 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = FUN_14049cbd6(param_4);
  if (((lVar3 != 0) && (*(longlong *)(lVar3 + 0x30) != 0)) &&
     (lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0x30) + 0x2b0), lVar3 != 0)) {
    lVar4 = FUN_140a99ecc();
    if (((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
         == lVar4 + 0x30)) && (*(char *)(param_1 + 8) == '\0')) {
      bVar1 = *(byte *)(lVar3 + 0x6f8);
      *(undefined2 *)(param_2 + 6) = 4;
      *param_2 = (uint)bVar1;
      uVar2 = 1;
      goto LAB_1441b4be5;
    }
  }
  *(undefined2 *)(param_2 + 6) = 0;
  uVar2 = 0;
LAB_1441b4be5:
  *(undefined1 *)(param_2 + 8) = uVar2;
  return param_2;
}



// FUNCTION 1441b4c06 FUN_1441b4c06 body=464 status=ok
// SIG undefined FUN_1441b4c06(void)

longlong * FUN_1441b4c06(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  void *_Src;
  int iVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  bool bVar10;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,5,0x10);
  *(undefined4 *)(param_1 + 1) = 5;
  puVar3 = (undefined8 *)*param_1;
  plVar9 = (longlong *)param_2[1];
  if (plVar9 == (longlong *)0x0) {
LAB_1441b4caf:
    *puVar3 = &PTR_LAB_14b98cfe0;
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
    puVar3[2] = lVar8;
    *puVar3 = &PTR_FUN_14b9890e0;
    puVar3[3] = 0;
    puVar3[4] = 0;
    bVar10 = true;
    plVar9 = (longlong *)0x0;
  }
  else {
    iVar7 = (int)plVar9[1];
    do {
      if (iVar7 == 0) goto LAB_1441b4caf;
      LOCK();
      iVar5 = (int)plVar9[1];
      bVar10 = iVar7 == iVar5;
      if (bVar10) {
        *(int *)(plVar9 + 1) = iVar7 + 1;
        iVar5 = iVar7;
      }
      iVar7 = iVar5;
      UNLOCK();
    } while (!bVar10);
    uVar4 = *param_2;
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
    UNLOCK();
    *puVar3 = &PTR_LAB_14b98cfe0;
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
    puVar3[2] = lVar8;
    *puVar3 = &PTR_FUN_14b9890e0;
    puVar3[3] = uVar4;
    puVar3[4] = plVar9;
    LOCK();
    *(int *)((longlong)plVar9 + 0xc) = *(int *)((longlong)plVar9 + 0xc) + 1;
    UNLOCK();
    bVar10 = false;
  }
  *(undefined4 *)(puVar3 + 6) = *(undefined4 *)(param_3 + 1);
  puVar3[5] = *param_3;
  puVar3[7] = 0;
  iVar7 = *(int *)(param_3 + 3);
  _Src = (void *)param_3[2];
  *(int *)(puVar3 + 8) = iVar7;
  if ((longlong)iVar7 == 0) {
    *(undefined4 *)((longlong)puVar3 + 0x44) = 0;
  }
  else {
    FUN_1446dd670(puVar3 + 7,iVar7,0);
    memcpy((void *)puVar3[7],_Src,(longlong)iVar7 * 2);
  }
  if (!bVar10) {
    LOCK();
    plVar1 = plVar9 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar2 = (int *)((longlong)plVar9 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
    LOCK();
    plVar1 = plVar9 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar2 = (int *)((longlong)plVar9 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
    LOCK();
    plVar1 = plVar9 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
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
  return param_1;
}



// FUNCTION 1441b4e2b FUN_1441b4e2b body=119 status=ok
// SIG undefined FUN_1441b4e2b(void)

void FUN_1441b4e2b(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  if ((param_2 != 0 && param_1 != 0) && ((longlong)*(int *)(param_1 + 0x40) != 0)) {
    lVar3 = 0;
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x38) + lVar3);
      if ((lVar1 != 0) && (*(int *)(lVar1 + 0xe0) == *(int *)(param_2 + 0x38))) {
        puVar2 = (undefined8 *)FUN_14001cc68(8,0x10);
        *puVar2 = &PTR_FUN_14b9882d8;
        FUN_14113cb0e(lVar1,puVar2);
        return;
      }
      lVar3 = lVar3 + 8;
    } while ((longlong)*(int *)(param_1 + 0x40) * 8 != lVar3);
  }
  return;
}



// FUNCTION 1441b4ea2 FUN_1441b4ea2 body=74 status=ok
// SIG undefined FUN_1441b4ea2(void)

void FUN_1441b4ea2(longlong param_1,longlong param_2,undefined8 param_3)

{
  if ((*(longlong *)(param_1 + 0x70) == param_2) &&
     (*(undefined4 *)(param_1 + 0x188) = 0, *(int *)(param_1 + 0x18c) != 0)) {
    FUN_1441cba32(param_1 + 0x180);
  }
  FUN_143f0631a(param_1,param_2,param_3);
  return;
}



// FUNCTION 1441b4eec FUN_1441b4eec body=220 status=ok
// SIG undefined FUN_1441b4eec(void)

void FUN_1441b4eec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_238 [44];
  undefined1 local_20c [4];
  longlong local_208 [3];
  undefined4 local_1f0 [4];
  undefined1 local_1e0 [8];
  undefined1 local_1d8 [432];
  byte local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_238;
  local_208[0] = 0;
  local_208[1] = 0;
  local_208[2] = 0;
  local_1f0[0] = 0xffff;
  FUN_148a6ad30(0,param_2,local_208);
  lVar2 = local_208[0];
  if (local_208[0] != 0) {
    lVar3 = FUN_14130c5c8();
    lVar1 = *(longlong *)(lVar2 + 0x10);
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(lVar1 + 0x38)) &&
       (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
        lVar3 + 0x30)) {
      FUN_14596ffb6(lVar2,local_1e0,local_1f0);
      if (local_28 == 1) {
        FUN_148a748f4(param_3,local_20c,local_1d8,0);
      }
      if ((local_28 & 1) != 0) {
        FUN_141072d6a(local_1e0);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_238) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441b4fca FUN_1441b4fca body=563 status=ok
// SIG undefined FUN_1441b4fca(void)

ulonglong FUN_1441b4fca(undefined8 param_1,undefined8 param_2,int *param_3,int *param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar10;
  int iVar11;
  bool bVar12;
  undefined1 auStack_a8 [32];
  longlong local_88;
  undefined4 local_80;
  longlong local_78 [3];
  longlong local_60;
  ulonglong local_48;
  undefined7 uVar9;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_88 = DAT_14cb8dd60;
  local_80 = DAT_14cb8dd68;
  FUN_1448075d0(local_78);
  iVar3 = *param_3;
  iVar11 = (int)local_78[0];
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  if (iVar3 == iVar11) {
    FUN_1447715ec(param_4,param_3);
  }
  else {
    local_78[0] = 0;
    local_78[1] = 0;
    FUN_1400b2348(param_3,local_78,1);
    cVar6 = FUN_1405b43cc(local_78);
    if (local_78[0] != 0) {
      FUN_1400020a8();
    }
    uVar9 = (undefined7)((ulonglong)param_3 >> 8);
    uVar8 = CONCAT71(uVar9,10);
    if (cVar6 == '\0') goto LAB_1441b5075;
    lVar7 = FUN_148a6ad30(param_1,param_2,0);
    if (lVar7 == 0) {
      uVar8 = CONCAT71(uVar9,5);
      goto LAB_1441b5075;
    }
    iVar3 = *(int *)(lVar7 + 0x178);
    if (-1 < iVar3) {
      iVar11 = 1;
      do {
        FUN_140002266(&local_88,&DAT_149e063bc);
        FUN_14000bbd8(local_78,&local_88);
        if (local_88 != 0) {
          FUN_1400020a8();
        }
        if ((longlong)*(int *)(lVar7 + 0x178) == 0) {
LAB_1441b51b1:
          FUN_1447715ec(param_4,local_78);
          if (local_60 != 0) {
            FUN_1400020a8();
          }
          break;
        }
        lVar10 = 0;
        while (lVar4 = *(longlong *)(*(longlong *)(lVar7 + 0x170) + lVar10),
              *(int *)(lVar4 + 8) != (int)local_78[0]) {
          lVar10 = lVar10 + 0x10;
          if ((longlong)*(int *)(lVar7 + 0x178) * 0x10 == lVar10) goto LAB_1441b51b1;
        }
        plVar5 = *(longlong **)(*(longlong *)(lVar7 + 0x170) + 8 + lVar10);
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
        if (lVar4 == 0) goto LAB_1441b51b1;
        if (local_60 != 0) {
          FUN_1400020a8();
        }
        bVar12 = iVar11 != iVar3 + 1;
        iVar11 = iVar11 + 1;
      } while (bVar12);
    }
    if (((*param_4 == 0) || (param_4[1] == 0)) || (*param_4 == DAT_14c948000)) goto LAB_1441b5075;
  }
  uVar8 = 0;
LAB_1441b5075:
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8 & 0xffffffff;
}



// FUNCTION 1441b51fe FUN_1441b51fe body=1247 status=ok
// SIG undefined FUN_1441b51fe(void)

ulonglong FUN_1441b51fe(undefined8 param_1,undefined8 param_2,int *param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined7 uVar7;
  undefined1 auStack_258 [32];
  longlong local_238 [2];
  longlong local_228;
  undefined8 uStack_220;
  undefined **local_210 [3];
  longlong local_1f8;
  longlong local_1f0;
  longlong local_1c8;
  int local_188;
  int local_184;
  int local_180;
  char local_170;
  byte local_168;
  undefined1 local_150 [16];
  undefined1 local_140 [8];
  int local_138;
  float local_134;
  float local_128;
  undefined1 local_120 [57];
  undefined1 local_e7;
  undefined1 local_e4 [28];
  undefined1 local_c8 [112];
  byte local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_258;
  uVar3 = FUN_143f0711a();
  uVar6 = (ulonglong)uVar3;
  if ((char)uVar3 == '\0') {
    lVar4 = FUN_148a6ad30(param_1,param_2,0);
    uVar6 = CONCAT71((uint7)(uint3)(uVar3 >> 8),5);
    if (lVar4 != 0) {
      lVar5 = FUN_14130c6ae();
      if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8
           ) == lVar5 + 0x30)) {
        local_228 = DAT_14cb8dd60;
        uStack_220 = CONCAT44(uStack_220._4_4_,DAT_14cb8dd68);
        FUN_1448075d0(local_210);
        iVar1 = *param_3;
        iVar2 = (int)local_210[0];
        if (local_1f8 != 0) {
          FUN_1400020a8();
        }
        uVar7 = (undefined7)((ulonglong)local_210 >> 8);
        if (iVar1 == iVar2) {
          FUN_144344080();
          uVar6 = CONCAT71(uVar7,0xb);
          if (local_168 == 1) {
            FUN_140056680(&local_228,L"locs");
            FUN_14626eb76(param_4,&local_228,(double)local_188);
            if (local_228 != 0) {
              FUN_1400020a8();
            }
            FUN_140056680(&local_228,L"echotoks");
            FUN_14626eb76(param_4,&local_228,(double)local_184);
            if (local_228 != 0) {
              FUN_1400020a8();
            }
            FUN_140056680(&local_228,L"bank");
            FUN_14626eb76(param_4,&local_228,(double)local_180);
            if (local_228 != 0) {
              FUN_1400020a8();
            }
            uVar6 = 0;
          }
          if ((local_168 & 1) != 0) {
            if (local_170 == '\x01') {
              local_170 = '\0';
            }
            local_210[0] = &PTR_FUN_14b0703c0;
            if (local_1c8 != 0) {
              FUN_1400020a8();
            }
            if (local_1f0 != 0) {
              FUN_1400020a8();
            }
          }
        }
        else {
          FUN_148eff59c(lVar4,local_210,param_3);
          uVar6 = CONCAT71(uVar7,0xb);
          if (local_58 == 1) {
            FUN_140056680(&local_228,L"name");
            FUN_145964e64(param_4,&local_228,local_150);
            if (local_228 != 0) {
              FUN_1400020a8();
            }
            FUN_1400021e4(local_140,&local_228);
            FUN_140056680(local_238,L"char");
            FUN_145964f10(param_4,local_238,&local_228);
            if (local_238[0] != 0) {
              FUN_1400020a8();
            }
            if (local_228 != 0) {
              FUN_1400020a8();
            }
            FUN_140056680(&local_228,L"level");
            FUN_14626eb76(param_4,&local_228,(double)local_138);
            if (local_228 != 0) {
              FUN_1400020a8();
            }
            FUN_140056680(&local_228,L"time");
            FUN_14626eb76(param_4,&local_228,(double)local_134);
            if (local_228 != 0) {
              FUN_1400020a8();
            }
            FUN_140056680(&local_228,L"progress");
            FUN_14626eb76(param_4,&local_228,(double)local_128);
            if (local_228 != 0) {
              FUN_1400020a8();
            }
            local_228 = 0;
            uStack_220 = 0;
            FUN_1400b2348(local_120,&local_228,1);
            FUN_140056680(local_238,L"mission");
            FUN_145964f10(param_4,local_238,&local_228);
            if (local_238[0] != 0) {
              FUN_1400020a8();
            }
            if (local_228 != 0) {
              FUN_1400020a8();
            }
            FUN_1400021e4(local_e4,&local_228);
            FUN_140056680(local_238,L"zone");
            FUN_145964f10(param_4,local_238,&local_228);
            if (local_238[0] != 0) {
              FUN_1400020a8();
            }
            if (local_228 != 0) {
              FUN_1400020a8();
            }
            local_228 = 0;
            uStack_220 = 0;
            FUN_1400b2348(local_c8,&local_228,1);
            FUN_140056680(local_238,L"region");
            FUN_145964f10(param_4,local_238,&local_228);
            if (local_238[0] != 0) {
              FUN_1400020a8();
            }
            if (local_228 != 0) {
              FUN_1400020a8();
            }
            FUN_140056680(&local_228,L"sharedprog");
            FUN_14626ec84(param_4,&local_228,
                          CONCAT71((int7)((ulonglong)local_238 >> 8),local_e7) & 0xffffffff);
            if (local_228 != 0) {
              FUN_1400020a8();
            }
            uVar6 = 0;
          }
          if ((local_58 & 1) != 0) {
            FUN_141072d6a(local_210);
          }
        }
      }
    }
  }
  if ((local_50 ^ (ulonglong)auStack_258) == DAT_14c707940) {
    return uVar6 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441b56de FUN_1441b56de body=2833 status=ok
// SIG undefined FUN_1441b56de(void)

ulonglong FUN_1441b56de(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  longlong *plVar2;
  double dVar3;
  int iVar4;
  char cVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  uint uVar8;
  undefined4 uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  int *piVar13;
  longlong *plVar14;
  uint7 uVar16;
  ulonglong uVar15;
  undefined1 auStack_168 [32];
  undefined8 local_148;
  int local_140;
  wchar_t *local_138;
  undefined4 local_130;
  wchar_t *local_128;
  undefined4 local_120;
  wchar_t *local_118;
  undefined4 local_110;
  wchar_t *local_108;
  undefined4 local_100;
  longlong *local_f8;
  undefined4 local_f0;
  wchar_t *local_e8;
  undefined4 local_e0;
  wchar_t *local_d8;
  undefined4 local_d0;
  wchar_t *local_c8;
  undefined4 local_c0;
  wchar_t *local_b8;
  undefined4 local_b0;
  wchar_t *local_a8;
  undefined4 local_a0;
  wchar_t *local_98;
  undefined4 local_90;
  wchar_t *local_88;
  undefined4 local_80;
  wchar_t *local_78;
  undefined4 local_70;
  longlong *local_68;
  int local_60;
  undefined4 local_5c;
  longlong local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_f8 = DAT_14cb8dd60;
  local_f0 = DAT_14cb8dd68;
  FUN_1448075d0(&local_68);
  iVar1 = *(int *)(param_2 + 0x10);
  iVar4 = (int)local_68;
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  plVar12 = *(longlong **)(param_2 + 0x50);
  uVar16 = (uint7)(uint3)((uint)iVar1 >> 8);
  if (iVar1 == iVar4) {
    if (plVar12 == (longlong *)0x0) {
LAB_1441b5786:
      plVar12 = (longlong *)FUN_14001cc68(0xb8,0x10);
      plVar12[1] = (longlong)&DAT_100000001;
      *plVar12 = (longlong)&PTR_FUN_14b9891c0;
      FUN_144344814(plVar12 + 2);
      if (plVar12 == (longlong *)0x0) {
        *(undefined8 *)(param_2 + 0x50) = 0x10;
        plVar14 = *(longlong **)(param_2 + 0x58);
        if (plVar14 != (longlong *)0x0) {
          *(undefined8 *)(param_2 + 0x58) = 0;
LAB_1441b5899:
          LOCK();
          plVar2 = plVar14 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*plVar14)(plVar14);
            LOCK();
            piVar13 = (int *)((longlong)plVar14 + 0xc);
            *piVar13 = *piVar13 + -1;
            UNLOCK();
            if (*piVar13 == 0) {
              (**(code **)(*plVar14 + 0x10))(plVar14);
            }
          }
          if (plVar12 != (longlong *)0x0) goto LAB_1441b592b;
        }
      }
      else {
        LOCK();
        *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
        UNLOCK();
        *(longlong **)(param_2 + 0x50) = plVar12 + 2;
        plVar14 = *(longlong **)(param_2 + 0x58);
        if (plVar12 == plVar14) {
          LOCK();
          plVar14 = plVar12 + 1;
          *(int *)plVar14 = (int)*plVar14 + -1;
          UNLOCK();
          if ((int)*plVar14 == 0) {
            (**(code **)*plVar12)(plVar12);
            LOCK();
            piVar13 = (int *)((longlong)plVar12 + 0xc);
            *piVar13 = *piVar13 + -1;
            UNLOCK();
            if (*piVar13 == 0) {
              (**(code **)(*plVar12 + 0x10))(plVar12);
            }
          }
        }
        else {
          *(longlong **)(param_2 + 0x58) = plVar12;
          if (plVar14 != (longlong *)0x0) goto LAB_1441b5899;
        }
LAB_1441b592b:
        LOCK();
        plVar14 = plVar12 + 1;
        *(int *)plVar14 = (int)*plVar14 + -1;
        UNLOCK();
        if ((int)*plVar14 == 0) {
          (**(code **)*plVar12)(plVar12);
          LOCK();
          piVar13 = (int *)((longlong)plVar12 + 0xc);
          *piVar13 = *piVar13 + -1;
          UNLOCK();
          if (*piVar13 == 0) {
            (**(code **)(*plVar12 + 0x10))(plVar12);
          }
        }
      }
    }
    else {
      lVar10 = (**(code **)(*plVar12 + 8))();
      lVar11 = FUN_144053ffa();
      if (((lVar11 == 0) || (*(int *)(lVar10 + 0x38) < *(int *)(lVar11 + 0x38))) ||
         (*(longlong *)(*(longlong *)(lVar10 + 0x30) + (longlong)*(int *)(lVar11 + 0x38) * 8) !=
          lVar11 + 0x30)) goto LAB_1441b5786;
    }
    uVar8 = FUN_148a6b424(param_1,param_2,param_3);
    if ((char)uVar8 != '\0') {
LAB_1441b5a8a:
      uVar15 = (ulonglong)uVar8;
      goto LAB_1441b5a8c;
    }
    plVar12 = *(longlong **)(param_2 + 0x50);
    uVar15 = CONCAT71(uVar16,0xb);
    if (plVar12 == (longlong *)0x0) goto LAB_1441b5a8c;
    lVar10 = (**(code **)(*plVar12 + 8))(plVar12);
    lVar11 = FUN_144053ffa();
    if (((lVar11 == 0) || (*(int *)(lVar10 + 0x38) < *(int *)(lVar11 + 0x38))) ||
       (*(longlong *)(*(longlong *)(lVar10 + 0x30) + (longlong)*(int *)(lVar11 + 0x38) * 8) !=
        lVar11 + 0x30)) goto LAB_1441b5a8c;
    local_78 = L"locs";
    local_70 = 4;
    dVar3 = (double)FUN_1468393c6(param_3);
    *(int *)(plVar12 + 0x11) = (int)dVar3;
    local_88 = L"echotoks";
    local_80 = 8;
    dVar3 = (double)FUN_1468393c6(param_3);
    *(int *)((longlong)plVar12 + 0x8c) = (int)dVar3;
    local_98 = L"bank";
    local_90 = 4;
    cVar5 = FUN_14047faa2(param_3,&local_98,plVar12 + 0x12);
    if (cVar5 == '\0') {
      *(undefined4 *)(plVar12 + 0x12) = 0xffffffff;
    }
  }
  else {
    if (plVar12 == (longlong *)0x0) {
LAB_1441b5821:
      plVar12 = (longlong *)FUN_14001cc68(0x1c8,0x10);
      plVar12[1] = (longlong)&DAT_100000001;
      *plVar12 = (longlong)&PTR_FUN_14b9891e0;
      FUN_141073488(plVar12 + 2);
      if (plVar12 == (longlong *)0x0) {
        *(undefined8 *)(param_2 + 0x50) = 0x10;
        plVar14 = *(longlong **)(param_2 + 0x58);
        if (plVar14 != (longlong *)0x0) {
          *(undefined8 *)(param_2 + 0x58) = 0;
LAB_1441b58db:
          LOCK();
          plVar2 = plVar14 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*plVar14)(plVar14);
            LOCK();
            piVar13 = (int *)((longlong)plVar14 + 0xc);
            *piVar13 = *piVar13 + -1;
            UNLOCK();
            if (*piVar13 == 0) {
              (**(code **)(*plVar14 + 0x10))(plVar14);
            }
          }
          if (plVar12 != (longlong *)0x0) goto LAB_1441b5a59;
        }
      }
      else {
        LOCK();
        *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
        UNLOCK();
        *(longlong **)(param_2 + 0x50) = plVar12 + 2;
        plVar14 = *(longlong **)(param_2 + 0x58);
        if (plVar12 == plVar14) {
          LOCK();
          plVar14 = plVar12 + 1;
          *(int *)plVar14 = (int)*plVar14 + -1;
          UNLOCK();
          if ((int)*plVar14 == 0) {
            (**(code **)*plVar12)(plVar12);
            LOCK();
            piVar13 = (int *)((longlong)plVar12 + 0xc);
            *piVar13 = *piVar13 + -1;
            UNLOCK();
            if (*piVar13 == 0) {
              (**(code **)(*plVar12 + 0x10))(plVar12);
            }
          }
        }
        else {
          *(longlong **)(param_2 + 0x58) = plVar12;
          if (plVar14 != (longlong *)0x0) goto LAB_1441b58db;
        }
LAB_1441b5a59:
        LOCK();
        plVar14 = plVar12 + 1;
        *(int *)plVar14 = (int)*plVar14 + -1;
        UNLOCK();
        if ((int)*plVar14 == 0) {
          (**(code **)*plVar12)(plVar12);
          LOCK();
          piVar13 = (int *)((longlong)plVar12 + 0xc);
          *piVar13 = *piVar13 + -1;
          UNLOCK();
          if (*piVar13 == 0) {
            (**(code **)(*plVar12 + 0x10))(plVar12);
          }
        }
      }
    }
    else {
      lVar10 = (**(code **)(*plVar12 + 8))();
      lVar11 = FUN_14117daa2();
      if (((lVar11 == 0) || (*(int *)(lVar10 + 0x38) < *(int *)(lVar11 + 0x38))) ||
         (*(longlong *)(*(longlong *)(lVar10 + 0x30) + (longlong)*(int *)(lVar11 + 0x38) * 8) !=
          lVar11 + 0x30)) goto LAB_1441b5821;
    }
    uVar8 = FUN_148a6b424(param_1,param_2,param_3);
    if ((char)uVar8 != '\0') goto LAB_1441b5a8a;
    plVar12 = *(longlong **)(param_2 + 0x50);
    uVar15 = CONCAT71(uVar16,0xb);
    if (plVar12 == (longlong *)0x0) goto LAB_1441b5a8c;
    lVar10 = (**(code **)(*plVar12 + 8))(plVar12);
    lVar11 = FUN_14117daa2();
    if (((lVar11 == 0) || (*(int *)(lVar10 + 0x38) < *(int *)(lVar11 + 0x38))) ||
       (*(longlong *)(*(longlong *)(lVar10 + 0x30) + (longlong)*(int *)(lVar11 + 0x38) * 8) !=
        lVar11 + 0x30)) goto LAB_1441b5a8c;
    local_a8 = L"name";
    local_a0 = 4;
    FUN_14047df9c(param_3,&local_68);
    if ((longlong **)(plVar12 + 0x18) == &local_68) {
      if (local_68 != (longlong *)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      if (plVar12[0x18] != 0) {
        FUN_1400020a8();
      }
      plVar12[0x18] = (longlong)local_68;
      local_68 = (longlong *)0x0;
      *(int *)(plVar12 + 0x19) = local_60;
      *(undefined4 *)((longlong)plVar12 + 0xcc) = local_5c;
    }
    local_b8 = L"char";
    local_b0 = 4;
    FUN_14047df9c(param_3,&local_68);
    iVar1 = local_60 + -1;
    if (local_60 == 0) {
      iVar1 = 0;
    }
    FUN_1446f82e2(&local_f8,iVar1,local_68,1);
    plVar12[0x1a] = (longlong)local_f8;
    if (local_68 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    local_c8 = L"level";
    local_c0 = 5;
    dVar3 = (double)FUN_1468393c6(param_3);
    *(int *)(plVar12 + 0x1b) = (int)dVar3;
    local_d8 = L"time";
    local_d0 = 4;
    dVar3 = (double)FUN_1468393c6(param_3);
    *(float *)((longlong)plVar12 + 0xdc) = (float)dVar3;
    local_e8 = L"progress";
    local_e0 = 8;
    dVar3 = (double)FUN_1468393c6(param_3);
    *(float *)(plVar12 + 0x1d) = (float)dVar3;
    local_108 = L"mission";
    local_100 = 7;
    FUN_14047df9c(param_3,&local_f8);
    FUN_14000bbd8(&local_68,&local_f8,0);
    FUN_1404e49fa(plVar12 + 0x1e,&local_68);
    if (local_50 != 0) {
      FUN_1400020a8();
    }
    if (local_f8 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    local_118 = L"zone";
    local_110 = 4;
    FUN_14047df9c(param_3,&local_68);
    iVar1 = local_60 + -1;
    if (local_60 == 0) {
      iVar1 = 0;
    }
    FUN_1446f82e2(&local_f8,iVar1,local_68,1);
    *(longlong **)((longlong)plVar12 + 300) = local_f8;
    if (local_68 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    local_128 = L"region";
    local_120 = 6;
    FUN_14047df9c(param_3,&local_f8);
    FUN_14000bbd8(&local_68,&local_f8,0);
    FUN_1404e49fa(plVar12 + 0x29,&local_68);
    if (local_50 != 0) {
      FUN_1400020a8();
    }
    if (local_f8 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    local_138 = L"sharedprog";
    local_130 = 10;
    uVar6 = FUN_140b87380(param_3);
    *(undefined1 *)((longlong)plVar12 + 0x129) = uVar6;
    plVar12[0x1c] = *(longlong *)(param_2 + 0x48);
    lVar10 = FUN_140e045c8(*(undefined8 *)((longlong)plVar12 + 300));
    if (lVar10 == 0) {
      if ((DAT_14cb8df08 == 0) ||
         (plVar14 = (longlong *)FUN_144837462(DAT_14cb8df08,plVar12 + 0x29),
         plVar14 == (longlong *)0x0)) {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c844850) &&
           (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1)) {
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
        plVar2 = DAT_14c844840;
        plVar14 = (longlong *)plVar12[0x27];
        uVar9 = DAT_14c844848;
        if (plVar14 != DAT_14c844840) {
          plVar12[0x27] = (longlong)DAT_14c844840;
          if (plVar2 != (longlong *)0x0) {
            (**(code **)(*plVar2 + 8))();
          }
          uVar9 = DAT_14c844848;
          if (plVar14 != (longlong *)0x0) {
            (**(code **)(*plVar14 + 0x10))(plVar14);
            uVar9 = DAT_14c844848;
          }
        }
        goto LAB_1441b5e29;
      }
      (**(code **)(*plVar14 + 0x18))(plVar14,&local_68);
      FUN_140008f88(plVar12 + 0x27,&local_68);
      if (local_68 != (longlong *)0x0) {
        (**(code **)(*local_68 + 0x10))();
      }
    }
    else {
      plVar14 = *(longlong **)(lVar10 + 0x28);
      plVar2 = (longlong *)plVar12[0x27];
      if (plVar2 != plVar14) {
        plVar12[0x27] = (longlong)plVar14;
        if (plVar14 != (longlong *)0x0) {
          (**(code **)(*plVar14 + 8))();
        }
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
      uVar9 = *(undefined4 *)(lVar10 + 0x30);
LAB_1441b5e29:
      *(undefined4 *)(plVar12 + 0x28) = uVar9;
    }
    lVar10 = FUN_14060eaf6(plVar12 + 0x1e);
    if (lVar10 == 0) {
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
      plVar2 = DAT_14c844840;
      plVar14 = (longlong *)plVar12[0x23];
      if (plVar14 != DAT_14c844840) {
        plVar12[0x23] = (longlong)DAT_14c844840;
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 8))();
        }
        if (plVar14 != (longlong *)0x0) {
          (**(code **)(*plVar14 + 0x10))(plVar14);
        }
      }
      *(undefined4 *)(plVar12 + 0x24) = DAT_14c844848;
      uVar15 = 0;
      *(undefined1 *)(plVar12 + 0x25) = 0;
      *(undefined1 *)((longlong)plVar12 + 0x12a) = 0;
      goto LAB_1441b5a8c;
    }
    local_68 = *(longlong **)(lVar10 + 0x4f0);
    local_60 = *(int *)(lVar10 + 0x4f8);
    piVar13 = &DAT_14c9485f0;
    if (*(int **)(lVar10 + 8) != (int *)0x0) {
      piVar13 = *(int **)(lVar10 + 8);
    }
    if (((*piVar13 == 0) || (iVar1 = piVar13[1], iVar1 == 0)) || (*piVar13 == DAT_14c948000)) {
LAB_1441b60cd:
      local_140 = DAT_14c948620;
      local_148 = DAT_14c948618;
    }
    else {
      if ((iVar1 < 2) && (piVar13[9] < 1)) {
        piVar13 = piVar13 + 2;
      }
      else {
        piVar13 = *(int **)(piVar13 + 6);
      }
      if (iVar1 < 1) goto LAB_1441b60cd;
      local_140 = piVar13[2];
      local_148 = *(undefined8 *)piVar13;
    }
    FUN_143deff24((ulonglong)((uint)*(ushort *)(lVar10 + 0x53a) * 0x18) +
                  *(longlong *)(DAT_14cb86da8 + 0x370),&local_f8,&local_148,0);
    FUN_140008f88(plVar12 + 0x23,&local_f8);
    if (local_f8 != (longlong *)0x0) {
      (**(code **)(*local_f8 + 0x10))();
    }
    cVar5 = FUN_1407a73f8(&local_68,&DAT_14cbcdda8);
    uVar7 = 1;
    uVar6 = 1;
    if (cVar5 == '\0') {
      uVar6 = FUN_1407a73f8(&local_68,&DAT_14cbcddb8);
    }
    *(undefined1 *)(plVar12 + 0x25) = uVar6;
    cVar5 = FUN_1407a73f8(&local_68,&DAT_14cbcdda0);
    if (cVar5 == '\0') {
      uVar7 = FUN_1407a73f8(&local_68,&DAT_14cbcddb8);
    }
    *(undefined1 *)((longlong)plVar12 + 0x12a) = uVar7;
  }
  uVar15 = 0;
LAB_1441b5a8c:
  if ((local_40 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar15;
}



// FUNCTION 1441b61f0 FUN_1441b61f0 body=9259 status=ok
// SIG undefined FUN_1441b61f0(void)

void FUN_1441b61f0(undefined **param_1,longlong param_2,longlong param_3,char param_4,
                  longlong *param_5)

{
  ulonglong *puVar1;
  int *piVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulonglong uVar5;
  int iVar6;
  wchar_t *pwVar7;
  char cVar8;
  uint uVar9;
  undefined4 uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong *plVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  undefined1 *puVar17;
  longlong *plVar18;
  longlong lVar19;
  longlong **pplVar20;
  undefined1 auStack_558 [32];
  wchar_t **local_538;
  wchar_t **local_530;
  undefined1 local_528;
  undefined1 local_520;
  undefined4 local_518;
  int local_514;
  int *local_510;
  longlong local_508;
  undefined8 uStack_500;
  longlong *local_4f8 [2];
  wchar_t **local_4e8;
  ulonglong *local_4e0;
  longlong *local_4d8;
  undefined4 local_4d0;
  longlong *local_4c8;
  uint local_4c0;
  longlong *local_4b8;
  undefined4 local_4b0;
  longlong *local_4a8 [2];
  longlong *local_498;
  longlong *local_490;
  longlong *local_488 [2];
  longlong *local_478 [2];
  longlong *local_468 [2];
  longlong *local_458 [2];
  longlong *local_448;
  longlong *local_440;
  longlong *local_438 [2];
  longlong *local_428 [2];
  longlong *local_418 [2];
  longlong *local_408;
  longlong *local_400;
  longlong *local_3f8 [2];
  longlong *local_3e8 [2];
  longlong *local_3d8;
  longlong *local_3d0;
  longlong *local_3c8 [2];
  longlong *local_3b8 [2];
  longlong *local_3a8 [2];
  longlong *local_398 [2];
  longlong *local_388 [2];
  longlong *local_378 [2];
  longlong *local_368;
  longlong *local_360;
  longlong *local_358 [2];
  longlong *local_348 [2];
  longlong *local_338 [2];
  longlong *local_328 [2];
  longlong *local_318 [2];
  longlong *local_308;
  undefined4 local_300;
  longlong *local_2f8;
  uint local_2f0;
  longlong *local_2e8;
  undefined4 local_2e0;
  longlong *local_2d8;
  longlong *local_2d0;
  wchar_t **local_2c8;
  ulonglong *local_2c0;
  wchar_t *local_2b8;
  undefined1 *puStack_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  longlong *local_298;
  uint local_290;
  undefined4 uStack_28c;
  longlong *local_288;
  undefined4 local_280;
  undefined8 local_278;
  undefined4 local_270;
  undefined4 local_268;
  longlong local_260;
  undefined1 local_258 [16];
  undefined4 local_248;
  undefined1 local_238 [16];
  undefined1 local_228 [24];
  undefined1 local_210 [8];
  char local_208;
  char local_200;
  undefined1 local_1e8 [16];
  undefined1 local_1d8 [232];
  char local_f0;
  wchar_t *local_e8;
  ulonglong uStack_e0;
  undefined1 local_d8 [16];
  undefined4 local_c8;
  undefined1 local_b8 [16];
  undefined4 local_a8 [4];
  undefined1 local_98 [16];
  undefined4 local_88 [4];
  undefined1 local_78 [16];
  ulonglong local_68 [2];
  undefined1 local_58 [16];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_558;
  puVar3 = param_1[0xe];
  if (puVar3 == (undefined *)0x0) {
    if ((int)param_5[1] != 0) {
      plVar14 = (longlong *)*param_5;
      if (plVar14 == (longlong *)0x0) goto LAB_1441b62a8;
      lVar19 = *plVar14;
      uVar16 = 2;
LAB_1441b6293:
      (**(code **)(lVar19 + 0x60))(plVar14,uVar16);
    }
  }
  else {
    if ((longlong)*(int *)(puVar3 + 0x40) != 0) {
      lVar19 = 0;
LAB_1441b6246:
      puVar4 = *(undefined **)(*(longlong *)(puVar3 + 0x38) + lVar19);
      if ((puVar4 == (undefined *)0x0) || (*(int *)(puVar4 + 0xe0) != *(int *)(param_2 + 0x38)))
      goto LAB_1441b6257;
      if ((param_4 != '\0') && (lVar19 = FUN_145da44aa(puVar4), lVar19 != 0)) {
        if (((~*(byte *)(param_3 + 0x88) & 3) != 0) ||
           (((*(int *)(param_3 + 0x60) == 0 || (*(int *)(param_3 + 100) == 0)) ||
            (*(int *)(param_3 + 0x60) == DAT_14c948000)))) {
          if ((int)param_5[1] == 0) goto LAB_1441b6296;
          plVar14 = (longlong *)*param_5;
          if (plVar14 == (longlong *)0x0) goto LAB_1441b62a8;
          lVar19 = *plVar14;
          uVar16 = 8;
          goto LAB_1441b6293;
        }
        plVar14 = *(longlong **)(param_3 + 0x50);
        if (plVar14 == (longlong *)0x0) {
          if ((int)param_5[1] == 0) goto LAB_1441b6296;
          plVar14 = (longlong *)*param_5;
          if (plVar14 == (longlong *)0x0) goto LAB_1441b62a8;
          lVar19 = *plVar14;
          uVar16 = 0xb;
          goto LAB_1441b6293;
        }
        lVar11 = FUN_148a6ad30(param_1,param_2,0);
        if (lVar11 == 0) {
LAB_1441b63b9:
          if ((int)param_5[1] == 0) goto LAB_1441b6296;
          plVar14 = (longlong *)*param_5;
          if (plVar14 == (longlong *)0x0) goto LAB_1441b62a8;
          lVar19 = *plVar14;
          uVar16 = 5;
          goto LAB_1441b6293;
        }
        lVar12 = FUN_14130c6ae();
        if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x38) < *(int *)(lVar12 + 0x38)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar12 + 0x38) * 8) != lVar12 + 0x30)) goto LAB_1441b63b9;
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c844850) &&
           (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1)) {
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
        local_2e8 = DAT_14c844840;
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
        local_2e0 = 0;
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c844850) &&
           (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1)) {
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
        local_2f8 = DAT_14c844840;
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
        local_2f0 = 0;
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c844850) &&
           (FUN_144b3d300(&DAT_14c844850), DAT_14c844850 == -1)) {
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
        local_308 = DAT_14c844840;
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
        local_510 = (int *)(param_3 + 0x60);
        local_300 = 0;
        lVar12 = FUN_148a6b25e(param_1,param_2,param_3 + 0x10);
        if ((lVar12 == 0) || (lVar12 = *(longlong *)(lVar12 + 0x50), lVar12 == 0)) {
          local_518 = 0;
        }
        else {
          local_518 = (undefined4)
                      CONCAT71((int7)((ulonglong)lVar12 >> 8),0x4ade3d < *(uint *)(lVar12 + 0x80));
        }
        local_e8 = DAT_14cb8dd60;
        uStack_e0 = CONCAT44(uStack_e0._4_4_,DAT_14cb8dd68);
        FUN_1448075d0(&local_2a8);
        local_514 = *local_510;
        iVar6 = (int)local_2a8;
        if (CONCAT44(uStack_28c,local_290) != 0) {
          FUN_1400020a8();
        }
        lVar12 = (**(code **)(*plVar14 + 8))(plVar14);
        if (local_514 == iVar6) {
          lVar13 = FUN_144053ffa();
          if (((lVar13 == 0) || (*(int *)(lVar12 + 0x38) < *(int *)(lVar13 + 0x38))) ||
             (*(longlong *)(*(longlong *)(lVar12 + 0x30) + (longlong)*(int *)(lVar13 + 0x38) * 8) !=
              lVar13 + 0x30)) {
LAB_1441b6778:
            if (((int)param_5[1] != 0) &&
               (plVar14 = (longlong *)*param_5, plVar14 != (longlong *)0x0)) {
              (**(code **)(*plVar14 + 0x60))(plVar14,0xb);
            }
            goto LAB_1441b678e;
          }
          FUN_144344080(lVar11,&local_2a8);
          cVar8 = local_200;
          if (local_200 == '\0') {
            if (((int)param_5[1] != 0) &&
               (plVar14 = (longlong *)*param_5, plVar14 != (longlong *)0x0)) {
              (**(code **)(*plVar14 + 0x60))(plVar14,0xb);
            }
          }
          else {
            local_e8 = L"SelectProfileSaveBody";
            uStack_e0._0_4_ = 0x15;
            FUN_1446e940c(&local_2c8,&local_e8);
            local_e8 = L"OakCrossSave";
            uStack_e0._0_4_ = 0xc;
            FUN_1446e940c(&local_2d8,&local_e8);
            local_e8 = 
            L"The local and cloud save versions of the [primary]profile[/primary] save are out of sync."
            ;
            uStack_e0 = CONCAT44(uStack_e0._4_4_,0x59);
            FUN_140208c1e(&local_2b8,&local_2d8,&local_2c8,&local_e8);
            FUN_140008f88(&local_2e8,&local_2b8);
            if (local_2b8 != (wchar_t *)0x0) {
              (**(code **)(*(longlong *)local_2b8 + 0x10))();
            }
            FUN_1441b861c(local_328,&local_2a8);
            FUN_1441b8990(local_338,&local_2a8);
            FUN_1441b8d02(local_348,&local_2a8);
            local_e8 = (wchar_t *)0x0;
            uStack_e0 = 0;
            local_2b8 = (wchar_t *)0x0;
            puStack_2b0 = (undefined1 *)0x0;
            puVar17 = local_238;
            if (local_208 != '\0') {
              puVar17 = local_210;
            }
            local_530 = &local_e8;
            local_538 = &local_2b8;
            FUN_1467d09ac(local_358,puVar17,1,2);
            local_e8 = L"SelectProfileSaveLocalBody";
            uStack_e0._0_4_ = 0x1a;
            FUN_1446e940c(local_4f8,&local_e8);
            local_e8 = L"OakCrossSave";
            uStack_e0._0_4_ = 0xc;
            FUN_1446e940c(&local_508,&local_e8);
            local_e8 = L"Local: [secondary]{0}[/secondary][newline]{1}{2}{3}";
            uStack_e0 = CONCAT44(uStack_e0._4_4_,0x33);
            FUN_140208c1e(local_378,&local_508,local_4f8,&local_e8);
            FUN_14023409e(&local_368,local_378,1);
            local_e8 = (wchar_t *)CONCAT44(local_e8._4_4_,4);
            FUN_14023423e(local_d8,local_358);
            local_c8 = 4;
            FUN_14023423e(local_b8,local_348);
            local_a8[0] = 4;
            FUN_14023423e(local_98,local_338);
            local_88[0] = 4;
            FUN_14023423e(local_78,local_328);
            local_2c8 = &local_e8;
            local_2c0 = local_68;
            FUN_14010d304(&local_2b8);
            local_2d8 = local_368;
            local_2d0 = local_360;
            if (local_360 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_360 + 1) = (int)local_360[1] + 1;
              UNLOCK();
            }
            FUN_14010c016(local_318,&local_2d8,&local_2b8);
            FUN_14007f2db(local_2b8,(ulonglong)puStack_2b0 & 0xffffffff);
            if (local_2b8 != (wchar_t *)0x0) {
              FUN_1400020a8();
            }
            lVar11 = 0x70;
            do {
              if (*(longlong **)((longlong)&local_e8 + lVar11) != (longlong *)0x0) {
                (**(code **)(**(longlong **)((longlong)&local_e8 + lVar11) + 0x10))();
                *(undefined8 *)((longlong)&local_e8 + lVar11) = 0;
                *(undefined4 *)(local_d8 + lVar11 + -8) = 0;
              }
              lVar11 = lVar11 + -0x20;
            } while (lVar11 != -0x10);
            if (local_360 != (longlong *)0x0) {
              LOCK();
              plVar18 = local_360 + 1;
              *(int *)plVar18 = (int)*plVar18 + -1;
              UNLOCK();
              if ((int)*plVar18 == 0) {
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
            if (local_358[0] != (longlong *)0x0) {
              (**(code **)(*local_358[0] + 0x10))();
            }
            if (local_348[0] != (longlong *)0x0) {
              (**(code **)(*local_348[0] + 0x10))();
            }
            if (local_338[0] != (longlong *)0x0) {
              (**(code **)(*local_338[0] + 0x10))();
            }
            if (local_328[0] != (longlong *)0x0) {
              (**(code **)(*local_328[0] + 0x10))();
            }
            FUN_140008f88(&local_2f8,local_318);
            if (local_318[0] != (longlong *)0x0) {
              (**(code **)(*local_318[0] + 0x10))();
            }
            if (local_378[0] != (longlong *)0x0) {
              (**(code **)(*local_378[0] + 0x10))();
            }
            FUN_1441b861c(local_388,plVar14);
            FUN_1441b8990(local_398,plVar14);
            FUN_1441b8d02(local_3a8,plVar14);
            local_e8 = (wchar_t *)0x0;
            uStack_e0 = 0;
            local_2b8 = (wchar_t *)0x0;
            puStack_2b0 = (undefined1 *)0x0;
            plVar18 = plVar14 + 0xe;
            if ((char)plVar14[0x14] != '\0') {
              plVar18 = plVar14 + 0x13;
            }
            local_530 = &local_e8;
            local_538 = &local_2b8;
            FUN_1467d09ac(local_3b8,plVar18,1,2);
            if ((char)local_518 == '\0') {
              local_e8 = L"CloudCompatibleLabelText";
              uStack_e0._0_4_ = 0x18;
              FUN_1446e940c(&local_2b8,&local_e8);
              local_e8 = L"OakCrossSave";
              uStack_e0._0_4_ = 0xc;
              FUN_1446e940c(&local_2c8,&local_e8);
              local_e8 = L"Cloud";
              uStack_e0._0_4_ = 5;
            }
            else {
              local_e8 = L"CloudIncompatibleLabelText";
              uStack_e0._0_4_ = 0x1a;
              FUN_1446e940c(&local_2b8,&local_e8);
              local_e8 = L"OakCrossSave";
              uStack_e0._0_4_ = 0xc;
              FUN_1446e940c(&local_2c8,&local_e8);
              local_e8 = L"[cs_incompatible](Incompatible) Cloud[/cs_incompatible]";
              uStack_e0._0_4_ = 0x37;
            }
            FUN_140208c1e(local_3c8,&local_2c8,&local_2b8,&local_e8);
            local_e8 = L"SelectProfileSaveCloudBody";
            uStack_e0._0_4_ = 0x1a;
            FUN_1446e940c(local_4f8,&local_e8);
            local_e8 = L"OakCrossSave";
            uStack_e0._0_4_ = 0xc;
            FUN_1446e940c(&local_508,&local_e8);
            local_e8 = L"{0}: [secondary]{1}[/secondary][newline]{2}{3}{4}";
            uStack_e0 = CONCAT44(uStack_e0._4_4_,0x31);
            FUN_140208c1e(local_378,&local_508,local_4f8);
            FUN_14023409e(&local_3d8,local_378,1);
            local_e8 = (wchar_t *)CONCAT44(local_e8._4_4_,4);
            FUN_14023423e(local_d8,local_3c8);
            local_c8 = 4;
            FUN_14023423e(local_b8,local_3b8);
            local_a8[0] = 4;
            FUN_14023423e(local_98,local_3a8);
            local_88[0] = 4;
            FUN_14023423e(local_78,local_398);
            local_68[0]._0_4_ = 4;
            FUN_14023423e(local_58,local_388);
            local_2c8 = &local_e8;
            local_2c0 = &local_48;
            FUN_14010d304(&local_2b8);
            local_2d8 = local_3d8;
            local_2d0 = local_3d0;
            if (local_3d0 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_3d0 + 1) = (int)local_3d0[1] + 1;
              UNLOCK();
            }
            FUN_14010c016(local_318,&local_2d8,&local_2b8);
            FUN_14007f2db(local_2b8,(ulonglong)puStack_2b0 & 0xffffffff);
            if (local_2b8 != (wchar_t *)0x0) {
              FUN_1400020a8();
            }
            lVar11 = 0x90;
            do {
              if (*(longlong **)((longlong)&local_e8 + lVar11) != (longlong *)0x0) {
                (**(code **)(**(longlong **)((longlong)&local_e8 + lVar11) + 0x10))();
                *(undefined8 *)((longlong)&local_e8 + lVar11) = 0;
                *(undefined4 *)(local_d8 + lVar11 + -8) = 0;
              }
              lVar11 = lVar11 + -0x20;
            } while (lVar11 != -0x10);
            if (local_3d0 != (longlong *)0x0) {
              LOCK();
              plVar14 = local_3d0 + 1;
              *(int *)plVar14 = (int)*plVar14 + -1;
              UNLOCK();
              if ((int)*plVar14 == 0) {
                (**(code **)*local_3d0)(local_3d0);
                LOCK();
                piVar2 = (int *)((longlong)local_3d0 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*local_3d0 + 0x10))(local_3d0);
                }
              }
            }
            if (local_3c8[0] != (longlong *)0x0) {
              (**(code **)(*local_3c8[0] + 0x10))();
            }
            if (local_3b8[0] != (longlong *)0x0) {
              (**(code **)(*local_3b8[0] + 0x10))();
            }
            if (local_3a8[0] != (longlong *)0x0) {
              (**(code **)(*local_3a8[0] + 0x10))();
            }
            if (local_398[0] != (longlong *)0x0) {
              (**(code **)(*local_398[0] + 0x10))();
            }
            if (local_388[0] != (longlong *)0x0) {
              (**(code **)(*local_388[0] + 0x10))();
            }
            FUN_140008f88(&local_308,local_318);
            if (local_318[0] != (longlong *)0x0) {
              (**(code **)(*local_318[0] + 0x10))();
            }
            if (local_378[0] != (longlong *)0x0) {
              (**(code **)(*local_378[0] + 0x10))();
            }
          }
          if (local_200 == '\x01') {
            if (local_208 == '\x01') {
              local_208 = '\0';
            }
            local_2a8 = &PTR_FUN_14b0703c0;
            if (local_260 != 0) {
              FUN_1400020a8();
            }
            if (local_288 != (longlong *)0x0) {
              FUN_1400020a8();
            }
          }
        }
        else {
          lVar13 = FUN_14117daa2();
          if (((lVar13 == 0) || (*(int *)(lVar12 + 0x38) < *(int *)(lVar13 + 0x38))) ||
             (*(longlong *)(*(longlong *)(lVar12 + 0x30) + (longlong)*(int *)(lVar13 + 0x38) * 8) !=
              lVar13 + 0x30)) goto LAB_1441b6778;
          FUN_148eff59c(lVar11,&local_2a8,local_510);
          cVar8 = local_f0;
          if (local_f0 == '\0') {
            if (((int)param_5[1] != 0) &&
               (plVar14 = (longlong *)*param_5, plVar14 != (longlong *)0x0)) {
              (**(code **)(*plVar14 + 0x60))(plVar14,0xb);
            }
          }
          else {
            FUN_140b6da64(&local_e8,local_1d8);
            FUN_140233b1a(local_3e8,&local_e8);
            if (local_e8 != (wchar_t *)0x0) {
              FUN_1400020a8();
            }
            FUN_140009b9a(local_3f8,local_1e8);
            local_e8 = L"SelectCharacterSaveBody";
            uStack_e0._0_4_ = 0x17;
            FUN_1446e940c(local_4f8,&local_e8);
            local_e8 = L"OakCrossSave";
            uStack_e0._0_4_ = 0xc;
            FUN_1446e940c(&local_508,&local_e8);
            local_e8 = 
            L"The local and cloud save versions of the [primary]{0} ({1})[/primary] save are out of sync."
            ;
            uStack_e0 = CONCAT44(uStack_e0._4_4_,0x5b);
            FUN_140208c1e(local_378,&local_508,local_4f8,&local_e8);
            FUN_14023409e(&local_408,local_378,1);
            local_e8 = (wchar_t *)CONCAT44(local_e8._4_4_,4);
            FUN_14023423e(local_d8,local_3f8);
            local_c8 = 4;
            FUN_14023423e(local_b8,local_3e8);
            local_2c8 = &local_e8;
            local_2c0 = (ulonglong *)local_a8;
            FUN_14010d304(&local_2b8);
            local_2d8 = local_408;
            local_2d0 = local_400;
            if (local_400 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_400 + 1) = (int)local_400[1] + 1;
              UNLOCK();
            }
            FUN_14010c016(local_318,&local_2d8,&local_2b8);
            FUN_14007f2db(local_2b8,(ulonglong)puStack_2b0 & 0xffffffff);
            if (local_2b8 != (wchar_t *)0x0) {
              FUN_1400020a8();
            }
            lVar11 = 0x30;
            do {
              if (*(longlong **)((longlong)&local_e8 + lVar11) != (longlong *)0x0) {
                (**(code **)(**(longlong **)((longlong)&local_e8 + lVar11) + 0x10))();
                *(undefined8 *)((longlong)&local_e8 + lVar11) = 0;
                *(undefined4 *)(local_d8 + lVar11 + -8) = 0;
              }
              lVar11 = lVar11 + -0x20;
            } while (lVar11 != -0x10);
            if (local_400 != (longlong *)0x0) {
              LOCK();
              plVar18 = local_400 + 1;
              *(int *)plVar18 = (int)*plVar18 + -1;
              UNLOCK();
              if ((int)*plVar18 == 0) {
                (**(code **)*local_400)(local_400);
                LOCK();
                piVar2 = (int *)((longlong)local_400 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*local_400 + 0x10))(local_400);
                }
              }
            }
            if (local_3f8[0] != (longlong *)0x0) {
              (**(code **)(*local_3f8[0] + 0x10))();
            }
            if (local_3e8[0] != (longlong *)0x0) {
              (**(code **)(*local_3e8[0] + 0x10))();
            }
            FUN_140008f88(&local_2e8,local_318);
            if (local_318[0] != (longlong *)0x0) {
              (**(code **)(*local_318[0] + 0x10))();
            }
            if (local_378[0] != (longlong *)0x0) {
              (**(code **)(*local_378[0] + 0x10))();
            }
            FUN_1441b9074(local_418,&local_2a8);
            FUN_1441b93ee(local_428,&local_2a8);
            local_e8 = (wchar_t *)0x0;
            uStack_e0 = 0;
            local_2b8 = (wchar_t *)0x0;
            puStack_2b0 = (undefined1 *)0x0;
            local_530 = &local_e8;
            local_538 = &local_2b8;
            FUN_1467d09ac(local_438,local_238,1,2);
            local_e8 = L"SelectCharacterSaveLocalBody";
            uStack_e0._0_4_ = 0x1c;
            FUN_1446e940c(local_4f8,&local_e8);
            local_e8 = L"OakCrossSave";
            uStack_e0._0_4_ = 0xc;
            FUN_1446e940c(&local_508,&local_e8);
            local_e8 = L"Local: [secondary]{0}[/secondary][newline]{1} - {2}";
            uStack_e0 = CONCAT44(uStack_e0._4_4_,0x33);
            FUN_140208c1e(local_378,&local_508,local_4f8,&local_e8);
            FUN_14023409e(&local_448,local_378,1);
            local_e8 = (wchar_t *)CONCAT44(local_e8._4_4_,4);
            FUN_14023423e(local_d8,local_438);
            local_c8 = 4;
            FUN_14023423e(local_b8,local_428);
            local_a8[0] = 4;
            FUN_14023423e(local_98,local_418);
            local_2c8 = &local_e8;
            local_2c0 = (ulonglong *)local_88;
            FUN_14010d304(&local_2b8);
            local_2d8 = local_448;
            local_2d0 = local_440;
            if (local_440 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_440 + 1) = (int)local_440[1] + 1;
              UNLOCK();
            }
            FUN_14010c016(local_318,&local_2d8,&local_2b8);
            FUN_14007f2db(local_2b8,(ulonglong)puStack_2b0 & 0xffffffff);
            if (local_2b8 != (wchar_t *)0x0) {
              FUN_1400020a8();
            }
            lVar11 = 0x50;
            do {
              if (*(longlong **)((longlong)&local_e8 + lVar11) != (longlong *)0x0) {
                (**(code **)(**(longlong **)((longlong)&local_e8 + lVar11) + 0x10))();
                *(undefined8 *)((longlong)&local_e8 + lVar11) = 0;
                *(undefined4 *)(local_d8 + lVar11 + -8) = 0;
              }
              lVar11 = lVar11 + -0x20;
            } while (lVar11 != -0x10);
            if (local_440 != (longlong *)0x0) {
              LOCK();
              plVar18 = local_440 + 1;
              *(int *)plVar18 = (int)*plVar18 + -1;
              UNLOCK();
              if ((int)*plVar18 == 0) {
                (**(code **)*local_440)(local_440);
                LOCK();
                piVar2 = (int *)((longlong)local_440 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*local_440 + 0x10))(local_440);
                }
              }
            }
            if (local_438[0] != (longlong *)0x0) {
              (**(code **)(*local_438[0] + 0x10))();
            }
            if (local_428[0] != (longlong *)0x0) {
              (**(code **)(*local_428[0] + 0x10))();
            }
            if (local_418[0] != (longlong *)0x0) {
              (**(code **)(*local_418[0] + 0x10))();
            }
            FUN_140008f88(&local_2f8,local_318);
            if (local_318[0] != (longlong *)0x0) {
              (**(code **)(*local_318[0] + 0x10))();
            }
            if (local_378[0] != (longlong *)0x0) {
              (**(code **)(*local_378[0] + 0x10))();
            }
            FUN_1441b9074(local_458,plVar14);
            FUN_1441b93ee(local_468,plVar14);
            local_e8 = (wchar_t *)0x0;
            uStack_e0 = 0;
            local_2b8 = (wchar_t *)0x0;
            puStack_2b0 = (undefined1 *)0x0;
            local_530 = &local_e8;
            local_538 = &local_2b8;
            FUN_1467d09ac(local_478,plVar14 + 0xe,1,2);
            if ((char)local_518 == '\0') {
              local_e8 = L"CloudCompatibleLabelText";
              uStack_e0._0_4_ = 0x18;
              FUN_1446e940c(&local_2b8,&local_e8);
              local_e8 = L"OakCrossSave";
              uStack_e0._0_4_ = 0xc;
              FUN_1446e940c(&local_2c8,&local_e8);
              local_e8 = L"Cloud";
              uStack_e0._0_4_ = 5;
            }
            else {
              local_e8 = L"CloudIncompatibleLabelText";
              uStack_e0._0_4_ = 0x1a;
              FUN_1446e940c(&local_2b8,&local_e8);
              local_e8 = L"OakCrossSave";
              uStack_e0._0_4_ = 0xc;
              FUN_1446e940c(&local_2c8,&local_e8);
              local_e8 = L"[cs_incompatible](Incompatible) Cloud[/cs_incompatible]";
              uStack_e0._0_4_ = 0x37;
            }
            FUN_140208c1e(local_488,&local_2c8,&local_2b8,&local_e8);
            local_e8 = L"SelectCharacterSaveCloudBody";
            uStack_e0._0_4_ = 0x1c;
            FUN_1446e940c(local_4f8,&local_e8);
            local_e8 = L"OakCrossSave";
            uStack_e0._0_4_ = 0xc;
            FUN_1446e940c(&local_508,&local_e8);
            local_e8 = L"{0}: [secondary]{1}[/secondary][newline]{2} - {3}";
            uStack_e0 = CONCAT44(uStack_e0._4_4_,0x31);
            FUN_140208c1e(local_378,&local_508,local_4f8);
            FUN_14023409e(&local_498,local_378,1);
            local_e8 = (wchar_t *)CONCAT44(local_e8._4_4_,4);
            FUN_14023423e(local_d8,local_488);
            local_c8 = 4;
            FUN_14023423e(local_b8,local_478);
            local_a8[0] = 4;
            FUN_14023423e(local_98,local_468);
            local_88[0] = 4;
            FUN_14023423e(local_78,local_458);
            local_2c8 = &local_e8;
            local_2c0 = local_68;
            FUN_14010d304(&local_2b8);
            local_2d8 = local_498;
            local_2d0 = local_490;
            if (local_490 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_490 + 1) = (int)local_490[1] + 1;
              UNLOCK();
            }
            FUN_14010c016(local_318,&local_2d8,&local_2b8);
            FUN_14007f2db(local_2b8,(ulonglong)puStack_2b0 & 0xffffffff);
            if (local_2b8 != (wchar_t *)0x0) {
              FUN_1400020a8();
            }
            lVar11 = 0x70;
            do {
              if (*(longlong **)((longlong)&local_e8 + lVar11) != (longlong *)0x0) {
                (**(code **)(**(longlong **)((longlong)&local_e8 + lVar11) + 0x10))();
                *(undefined8 *)((longlong)&local_e8 + lVar11) = 0;
                *(undefined4 *)(local_d8 + lVar11 + -8) = 0;
              }
              lVar11 = lVar11 + -0x20;
            } while (lVar11 != -0x10);
            if (local_490 != (longlong *)0x0) {
              LOCK();
              plVar14 = local_490 + 1;
              *(int *)plVar14 = (int)*plVar14 + -1;
              UNLOCK();
              if ((int)*plVar14 == 0) {
                (**(code **)*local_490)(local_490);
                LOCK();
                piVar2 = (int *)((longlong)local_490 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*local_490 + 0x10))(local_490);
                }
              }
            }
            if (local_488[0] != (longlong *)0x0) {
              (**(code **)(*local_488[0] + 0x10))();
            }
            if (local_478[0] != (longlong *)0x0) {
              (**(code **)(*local_478[0] + 0x10))();
            }
            if (local_468[0] != (longlong *)0x0) {
              (**(code **)(*local_468[0] + 0x10))();
            }
            if (local_458[0] != (longlong *)0x0) {
              (**(code **)(*local_458[0] + 0x10))();
            }
            FUN_140008f88(&local_308,local_318);
            if (local_318[0] != (longlong *)0x0) {
              (**(code **)(*local_318[0] + 0x10))();
            }
            if (local_378[0] != (longlong *)0x0) {
              (**(code **)(*local_378[0] + 0x10))();
            }
          }
          if (local_f0 == '\x01') {
            FUN_141072d6a(&local_2a8);
          }
        }
        if (cVar8 != '\0') {
          local_2a8 = (undefined **)0x14b982d26;
          uStack_2a0._0_4_ = 0x10;
          FUN_1446e940c(&local_e8,&local_2a8);
          local_2a8 = (undefined **)0x14b96ec08;
          uStack_2a0._0_4_ = 0xc;
          FUN_1446e940c(&local_2b8,&local_2a8);
          local_2a8 = (undefined **)0x14b982d04;
          uStack_2a0._0_4_ = 0x10;
          FUN_140208c1e(&local_2d8,&local_2b8,&local_e8,&local_2a8);
          if ((char)local_518 == '\0') {
            local_2a8 = (undefined **)0x14b988920;
            uStack_2a0._0_4_ = 0x16;
            FUN_1446e940c(&local_e8,&local_2a8);
            local_2a8 = (undefined **)0x14b96ec08;
            uStack_2a0._0_4_ = 0xc;
            FUN_1446e940c(&local_2b8,&local_2a8);
            local_2a8 = (undefined **)0x14b9888d4;
            uStack_2a0 = CONCAT44(uStack_2a0._4_4_,0x25);
          }
          else {
            local_2a8 = (undefined **)0x14b98888e;
            uStack_2a0._0_4_ = 0x22;
            FUN_1446e940c(&local_e8,&local_2a8);
            local_2a8 = (undefined **)0x14b96ec08;
            uStack_2a0._0_4_ = 0xc;
            FUN_1446e940c(&local_2b8,&local_2a8);
            local_2a8 = (undefined **)0x14b9886b6;
            uStack_2a0 = CONCAT44(uStack_2a0._4_4_,0xeb);
          }
          FUN_140208c1e(local_4a8,&local_2b8,&local_e8,&local_2a8);
          local_4b8 = local_308;
          if (local_308 != (longlong *)0x0) {
            (**(code **)(*local_308 + 8))();
          }
          local_4b0 = local_300;
          local_4c8 = local_2f8;
          if (local_2f8 != (longlong *)0x0) {
            (**(code **)(*local_2f8 + 8))();
          }
          local_4c0 = local_2f0;
          local_4d8 = local_2e8;
          if (local_2e8 != (longlong *)0x0) {
            (**(code **)(*local_2e8 + 8))();
          }
          local_4d0 = local_2e0;
          FUN_140056680(local_4f8,
                        L"{0}[newline][newline]{1}[newline][newline]{2}[newline][newline]{3}");
          FUN_140233b1a(local_378,local_4f8);
          FUN_14023409e(&local_4e8,local_378,1);
          local_2a8 = (undefined **)CONCAT44(local_2a8._4_4_,4);
          FUN_14023423e(&local_298,&local_4d8);
          local_288 = (longlong *)CONCAT44(local_288._4_4_,4);
          FUN_14023423e(&local_278,&local_4c8);
          local_268 = 4;
          FUN_14023423e(local_258,&local_4b8);
          local_248 = 4;
          FUN_14023423e(local_238,local_4a8);
          local_2b8 = (wchar_t *)&local_2a8;
          puStack_2b0 = local_228;
          FUN_14010d304(&local_e8);
          local_2c8 = local_4e8;
          local_2c0 = local_4e0;
          if (local_4e0 != (ulonglong *)0x0) {
            LOCK();
            *(int *)(local_4e0 + 1) = (int)local_4e0[1] + 1;
            UNLOCK();
          }
          FUN_14010c016(local_318,&local_2c8,&local_e8);
          FUN_14007f2db(local_e8,uStack_e0 & 0xffffffff);
          if (local_e8 != (wchar_t *)0x0) {
            FUN_1400020a8();
          }
          lVar11 = 0x70;
          do {
            if (*(longlong **)((longlong)&local_2a8 + lVar11) != (longlong *)0x0) {
              (**(code **)(**(longlong **)((longlong)&local_2a8 + lVar11) + 0x10))();
              *(undefined8 *)((longlong)&local_2a8 + lVar11) = 0;
              *(undefined4 *)((longlong)&uStack_2a0 + lVar11) = 0;
            }
            lVar11 = lVar11 + -0x20;
          } while (lVar11 != -0x10);
          if (local_4e0 != (ulonglong *)0x0) {
            LOCK();
            puVar1 = local_4e0 + 1;
            *(int *)puVar1 = (int)*puVar1 + -1;
            UNLOCK();
            if ((int)*puVar1 == 0) {
              (**(code **)*local_4e0)(local_4e0);
              LOCK();
              piVar2 = (int *)((longlong)local_4e0 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*local_4e0 + 0x10))(local_4e0);
              }
            }
          }
          if (local_4d8 != (longlong *)0x0) {
            (**(code **)(*local_4d8 + 0x10))();
          }
          if (local_4c8 != (longlong *)0x0) {
            (**(code **)(*local_4c8 + 0x10))();
          }
          if (local_4b8 != (longlong *)0x0) {
            (**(code **)(*local_4b8 + 0x10))();
          }
          if (local_4a8[0] != (longlong *)0x0) {
            (**(code **)(*local_4a8[0] + 0x10))();
          }
          if (local_378[0] != (longlong *)0x0) {
            (**(code **)(*local_378[0] + 0x10))();
          }
          if (local_4f8[0] != (longlong *)0x0) {
            FUN_1400020a8();
          }
          local_2a8 = (undefined **)0x14b982de4;
          uStack_2a0._0_4_ = 0x13;
          FUN_1446e940c(&local_e8,&local_2a8);
          local_2a8 = (undefined **)0x14b96ec08;
          uStack_2a0._0_4_ = 0xc;
          FUN_1446e940c(&local_2c8,&local_2a8);
          local_2a8 = (undefined **)0x14b982dce;
          uStack_2a0._0_4_ = 10;
          FUN_140208c1e(&local_2b8,&local_2c8,&local_e8,&local_2a8);
          local_2a8 = (undefined **)0x14b982e22;
          uStack_2a0._0_4_ = 0x13;
          FUN_1446e940c(&local_e8,&local_2a8);
          local_2a8 = (undefined **)0x14b96ec08;
          uStack_2a0._0_4_ = 0xc;
          FUN_1446e940c(local_378,&local_2a8);
          local_2a8 = (undefined **)0x14b982e0c;
          uStack_2a0._0_4_ = 10;
          FUN_140208c1e(&local_2c8,local_378,&local_e8,&local_2a8);
          local_2a8 = (undefined **)0x14b982e4a;
          uStack_2a0._0_4_ = 0x17;
          FUN_1446e940c(&local_e8,&local_2a8);
          local_2a8 = (undefined **)0x14b96ec08;
          uStack_2a0._0_4_ = 0xc;
          FUN_1446e940c(local_4f8,&local_2a8);
          local_2a8 = (undefined **)&DAT_149e1d814;
          uStack_2a0._0_4_ = 2;
          FUN_140208c1e(local_378,local_4f8,&local_e8,&local_2a8);
          local_2a8 = (undefined **)0x14b982e7a;
          uStack_2a0._0_4_ = 0x17;
          FUN_1446e940c(&local_e8,&local_2a8);
          local_2a8 = (undefined **)0x14b96ec08;
          uStack_2a0._0_4_ = 0xc;
          FUN_1446e940c(&local_508,&local_2a8);
          local_2a8 = (undefined **)0x149e0638c;
          uStack_2a0 = CONCAT44(uStack_2a0._4_4_,6);
          FUN_140208c1e(local_4f8,&local_508,&local_e8,&local_2a8);
          local_508 = 0;
          uStack_500 = 0;
          pplVar20 = local_378;
          if ((char)local_518 == '\0') {
            local_2a8 = (undefined **)local_2b8;
            if (local_2b8 != (wchar_t *)0x0) {
              (**(code **)(*(longlong *)local_2b8 + 8))();
            }
            uStack_2a0 = CONCAT44(uStack_2a0._4_4_,puStack_2b0._0_4_);
            local_e8 = L"choose_local";
            uStack_e0 = CONCAT35(uStack_e0._5_3_,0xc);
            uVar9 = FUN_14001a6c0(&local_e8,1);
            uVar5 = uStack_500;
            local_298 = (longlong *)(ulonglong)uVar9;
            local_290 = local_290 & 0xffffff00;
            lVar11 = (longlong)(int)uStack_500;
            uVar9 = (int)uStack_500 + 1;
            uStack_500 = CONCAT44(uStack_500._4_4_,uVar9);
            if (uStack_500._4_4_ < uVar9) {
              FUN_145da4fc8(&local_508,uVar5 & 0xffffffff);
            }
            lVar12 = local_508;
            lVar11 = lVar11 * 0x20;
            FUN_14023423e(local_508 + lVar11,&local_2a8);
            *(undefined1 *)(lVar12 + 0x18 + lVar11) = (undefined1)local_290;
            *(longlong **)(lVar12 + 0x10 + lVar11) = local_298;
            if (local_2a8 != (undefined **)0x0) {
              (**(code **)((longlong)*local_2a8 + 0x10))();
            }
            local_2a8 = (undefined **)local_2c8;
            if (local_2c8 != (wchar_t **)0x0) {
              (**(code **)(*local_2c8 + 4))();
            }
            uStack_2a0 = CONCAT44(uStack_2a0._4_4_,local_2c0._0_4_);
            local_e8 = L"choose_cloud";
            uStack_e0 = CONCAT35(uStack_e0._5_3_,0xc);
            uVar9 = FUN_14001a6c0(&local_e8,1);
            uVar5 = uStack_500;
            local_298 = (longlong *)(ulonglong)uVar9;
            local_290 = local_290 & 0xffffff00;
            lVar11 = (longlong)(int)uStack_500;
            uVar9 = (int)uStack_500 + 1;
            uStack_500 = CONCAT44(uStack_500._4_4_,uVar9);
            if (uStack_500._4_4_ < uVar9) {
              FUN_145da4fc8(&local_508,uVar5 & 0xffffffff);
            }
            lVar12 = local_508;
            lVar11 = lVar11 * 0x20;
            FUN_14023423e(local_508 + lVar11,&local_2a8);
            *(undefined1 *)(lVar12 + 0x18 + lVar11) = (undefined1)local_290;
            *(longlong **)(lVar12 + 0x10 + lVar11) = local_298;
            pplVar20 = local_4f8;
            if ((wchar_t **)local_2a8 != (wchar_t **)0x0) {
              (**(code **)((longlong)*local_2a8 + 0x10))();
            }
          }
          local_2a8 = (undefined **)*pplVar20;
          if (local_2a8 != (undefined **)0x0) {
            (**(code **)((longlong)*local_2a8 + 8))();
          }
          uStack_2a0 = CONCAT44(uStack_2a0._4_4_,*(undefined4 *)(pplVar20 + 1));
          local_e8 = L"cancel";
          uStack_e0 = CONCAT35(uStack_e0._5_3_,6);
          uVar9 = FUN_14001a6c0(&local_e8,1);
          uVar5 = uStack_500;
          local_298 = (longlong *)(ulonglong)uVar9;
          local_290 = CONCAT31(local_290._1_3_,1);
          lVar11 = (longlong)(int)uStack_500;
          uVar9 = (int)uStack_500 + 1;
          uStack_500 = CONCAT44(uStack_500._4_4_,uVar9);
          if (uStack_500._4_4_ < uVar9) {
            FUN_145da4fc8(&local_508,uVar5 & 0xffffffff);
          }
          lVar12 = local_508;
          lVar11 = lVar11 * 0x20;
          FUN_14023423e(lVar11 + local_508,&local_2a8);
          *(undefined1 *)(lVar12 + 0x18 + lVar11) = (undefined1)local_290;
          *(longlong **)(lVar12 + 0x10 + lVar11) = local_298;
          if (local_2a8 != (undefined **)0x0) {
            (**(code **)((longlong)*local_2a8 + 0x10))();
          }
          local_298 = local_2f8;
          local_2a8 = param_1;
          uStack_2a0 = lVar19;
          if (local_2f8 != (longlong *)0x0) {
            (**(code **)(*local_2f8 + 8))();
          }
          local_290 = local_2f0;
          local_288 = local_308;
          if (local_308 != (longlong *)0x0) {
            (**(code **)(*local_308 + 8))();
          }
          local_280 = local_300;
          local_278 = 0;
          local_270 = 0;
          FUN_148a7189c(&local_278,param_5);
          local_e8 = (wchar_t *)0x0;
          uStack_e0 = uStack_e0 & 0xffffffff00000000;
          FUN_1446efa72(&local_e8,0,6,0x10);
          pwVar7 = local_e8;
          uStack_e0 = CONCAT44(uStack_e0._4_4_,6);
          *(undefined ***)local_e8 = &PTR_LAB_14b972ed0;
          LOCK();
          UNLOCK();
          lVar12 = DAT_14c758608 + 1;
          lVar11 = DAT_14c758608 + 1;
          if (lVar12 == 0) {
            LOCK();
            UNLOCK();
            lVar12 = DAT_14c758608 + 2;
            lVar11 = DAT_14c758608 + 2;
          }
          DAT_14c758608 = lVar11;
          *(longlong *)(local_e8 + 8) = lVar12;
          *(undefined ***)local_e8 = &PTR_FUN_14b989200;
          *(int *)(local_e8 + 0xc) = (int)local_2a8;
          *(undefined4 *)(local_e8 + 0xe) = local_2a8._4_4_;
          *(undefined4 *)(local_e8 + 0x10) = (undefined4)uStack_2a0;
          *(undefined4 *)(local_e8 + 0x12) = uStack_2a0._4_4_;
          FUN_14023423e(local_e8 + 0x14,&local_298);
          FUN_14023423e(pwVar7 + 0x1c,&local_288);
          *(undefined8 *)(pwVar7 + 0x24) = local_278;
          local_278 = 0;
          *(undefined4 *)(pwVar7 + 0x28) = local_270;
          local_270 = 0;
          if (local_288 != (longlong *)0x0) {
            (**(code **)(*local_288 + 0x10))();
          }
          if (local_298 != (longlong *)0x0) {
            (**(code **)(*local_298 + 0x10))();
          }
          local_520 = 1;
          local_528 = 0;
          local_530 = (wchar_t **)0x0;
          local_538 = &local_e8;
          uVar10 = FUN_1459dd948(lVar19,&local_2d8,local_318,&local_508);
          *(undefined4 *)(param_1 + 0x2e) = uVar10;
          if (param_1[0xe] != (undefined *)0x0) {
            lVar19 = FUN_1403ca142();
            plVar14 = (longlong *)param_1[0xe];
            if (((((plVar14 != (longlong *)0x0) && (lVar19 != 0)) &&
                 (lVar11 = plVar14[2], lVar11 != 0)) &&
                ((*(int *)(lVar19 + 0x38) <= *(int *)(lVar11 + 0x38) &&
                 (*(longlong *)
                   (*(longlong *)(lVar11 + 0x30) + (longlong)*(int *)(lVar19 + 0x38) * 8) ==
                  lVar19 + 0x30)))) &&
               ((cVar8 = (**(code **)(*plVar14 + 0x498))(plVar14), cVar8 == '\x05' &&
                ((undefined *)plVar14[0x8f] != puVar4)))) {
              FUN_148d30632(plVar14,puVar4);
              if (DAT_14c950c29 == '\x01') {
                FUN_1456cec3c(puVar4);
              }
              param_1[0x2f] = puVar4;
            }
          }
          if ((int)uStack_e0 == 0) {
LAB_1441b76ed:
            if (local_e8 != (wchar_t *)0x0) {
              FUN_1400020a8();
            }
          }
          else if (local_e8 != (wchar_t *)0x0) {
            (*(code *)**(undefined8 **)local_e8)(local_e8,0);
            FUN_1446efa72(&local_e8,0,0,0x10);
            uStack_e0 = uStack_e0 & 0xffffffff00000000;
            goto LAB_1441b76ed;
          }
          FUN_140e0067b(local_508,uStack_500 & 0xffffffff);
          if (local_508 != 0) {
            FUN_1400020a8();
          }
          if (local_4f8[0] != (longlong *)0x0) {
            (**(code **)(*local_4f8[0] + 0x10))();
          }
          if (local_378[0] != (longlong *)0x0) {
            (**(code **)(*local_378[0] + 0x10))();
          }
          if (local_2c8 != (wchar_t **)0x0) {
            (**(code **)(*local_2c8 + 8))();
          }
          if (local_2b8 != (wchar_t *)0x0) {
            (**(code **)(*(longlong *)local_2b8 + 0x10))();
          }
          if (local_318[0] != (longlong *)0x0) {
            (**(code **)(*local_318[0] + 0x10))();
          }
          if (local_2d8 != (longlong *)0x0) {
            (**(code **)(*local_2d8 + 0x10))();
          }
        }
LAB_1441b678e:
        if (local_308 != (longlong *)0x0) {
          (**(code **)(*local_308 + 0x10))();
        }
        if (local_2f8 != (longlong *)0x0) {
          (**(code **)(*local_2f8 + 0x10))();
        }
        if (local_2e8 != (longlong *)0x0) {
          (**(code **)(*local_2e8 + 0x10))();
        }
        goto LAB_1441b6296;
      }
    }
LAB_1441b626b:
    if ((int)param_5[1] != 0) {
      plVar14 = (longlong *)*param_5;
      if (plVar14 == (longlong *)0x0) goto LAB_1441b62a8;
      lVar19 = *plVar14;
      uVar16 = 0x17;
      goto LAB_1441b6293;
    }
  }
LAB_1441b6296:
  puVar15 = (undefined8 *)*param_5;
  if ((int)param_5[1] != 0) {
    if (puVar15 == (undefined8 *)0x0) goto LAB_1441b62a8;
    (**(code **)*puVar15)(puVar15,0);
    FUN_1446efa72(param_5,0,0,0x10);
    *(undefined4 *)(param_5 + 1) = 0;
    puVar15 = (undefined8 *)*param_5;
  }
  if (puVar15 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_1441b62a8:
  if ((local_48 ^ (ulonglong)auStack_558) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_1441b6257:
  lVar19 = lVar19 + 8;
  if ((longlong)*(int *)(puVar3 + 0x40) * 8 == lVar19) goto LAB_1441b626b;
  goto LAB_1441b6246;
}



// FUNCTION 1441b861c FUN_1441b861c body=882 status=ok
// SIG undefined FUN_1441b861c(void)

undefined8 * FUN_1441b861c(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  undefined1 auStack_108 [40];
  undefined1 local_e0 [4];
  undefined1 local_dc [4];
  longlong *local_d8 [2];
  undefined8 local_c8;
  longlong *local_c0;
  undefined8 local_b8;
  longlong *plStack_b0;
  longlong *local_a0 [2];
  undefined8 local_90;
  longlong *local_88;
  wchar_t **local_80;
  ulonglong *local_78;
  longlong local_70;
  undefined4 local_68;
  wchar_t *local_60;
  undefined4 local_58;
  longlong *local_50 [2];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_108;
  iVar4 = *(int *)(param_2 + 0x90);
  if (iVar4 < 0) {
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
    *param_1 = DAT_14c844840;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    *(undefined4 *)(param_1 + 1) = DAT_14c844848;
  }
  else if (iVar4 == 1) {
    local_60 = L"BankItemText";
    local_58 = 0xc;
    FUN_1446e940c(&local_70,&local_60);
    local_60 = L"OakCrossSave";
    local_58 = 0xc;
    FUN_1446e940c(&local_80,&local_60);
    local_60 = L"1 Bank Item";
    local_58 = 0xb;
    FUN_140208c1e(param_1,&local_80,&local_70,&local_60);
  }
  else {
    local_b8 = 0;
    plStack_b0 = (longlong *)0x0;
    FUN_1413a454c(local_a0,iVar4,0);
    local_60 = L"BankItemsText";
    local_58 = 0xd;
    FUN_1446e940c(local_dc,&local_60);
    local_60 = L"OakCrossSave";
    local_58 = 0xc;
    FUN_1446e940c(local_e0,&local_60);
    local_60 = L"{0} Bank Items";
    local_58 = 0xe;
    FUN_140208c1e(local_d8,local_e0,local_dc,&local_60);
    FUN_14023409e(&local_c8,local_d8,1);
    local_60 = (wchar_t *)CONCAT44(local_60._4_4_,4);
    FUN_14023423e(local_50,local_a0);
    local_78 = &local_40;
    local_80 = &local_60;
    FUN_14010d304(&local_70);
    local_90 = local_c8;
    local_88 = local_c0;
    if (local_c0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_c0 + 1) = (int)local_c0[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(param_1,&local_90,&local_70);
    FUN_14007f2db(local_70,local_68);
    if (local_70 != 0) {
      FUN_1400020a8();
    }
    if (local_50[0] != (longlong *)0x0) {
      (**(code **)(*local_50[0] + 0x10))();
    }
    if (local_c0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_c0 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_c0)(local_c0);
        LOCK();
        piVar2 = (int *)((longlong)local_c0 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_c0 + 0x10))(local_c0);
        }
      }
    }
    if (local_a0[0] != (longlong *)0x0) {
      (**(code **)(*local_a0[0] + 0x10))();
    }
    if (local_d8[0] != (longlong *)0x0) {
      (**(code **)(*local_d8[0] + 0x10))();
    }
    plVar1 = plStack_b0;
    if (plStack_b0 != (longlong *)0x0) {
      LOCK();
      plVar3 = plStack_b0 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*plStack_b0)(plStack_b0);
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
  if ((local_40 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441b8990 FUN_1441b8990 body=880 status=ok
// SIG undefined FUN_1441b8990(void)

undefined8 * FUN_1441b8990(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  undefined1 auStack_f8 [40];
  undefined1 local_d0 [4];
  undefined1 local_cc [4];
  longlong *local_c8 [2];
  undefined8 local_b8;
  longlong *local_b0;
  undefined8 local_a8;
  longlong *plStack_a0;
  longlong *local_98 [2];
  undefined8 local_88;
  longlong *local_80;
  wchar_t **local_78;
  ulonglong *local_70;
  longlong local_68;
  undefined4 local_60;
  wchar_t *local_58;
  undefined4 local_50;
  longlong *local_48 [2];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  iVar4 = *(int *)(param_2 + 0x8c);
  if (iVar4 < 1) {
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
    *param_1 = DAT_14c844840;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    *(undefined4 *)(param_1 + 1) = DAT_14c844848;
  }
  else if (iVar4 == 1) {
    local_58 = L"EchoTokenUnlockedText";
    local_50 = 0x15;
    FUN_1446e940c(&local_68,&local_58);
    local_58 = L"OakCrossSave";
    local_50 = 0xc;
    FUN_1446e940c(&local_78,&local_58);
    local_58 = L"1 SDU Token Unlocked - ";
    local_50 = 0x17;
    FUN_140208c1e(param_1,&local_78,&local_68,&local_58);
  }
  else {
    local_a8 = 0;
    plStack_a0 = (longlong *)0x0;
    FUN_1413a454c(local_98,iVar4,0);
    local_58 = L"EchoTokensUnlockedText";
    local_50 = 0x16;
    FUN_1446e940c(local_cc,&local_58);
    local_58 = L"OakCrossSave";
    local_50 = 0xc;
    FUN_1446e940c(local_d0,&local_58);
    local_58 = L"{0} SDU Tokens Unlocked - ";
    local_50 = 0x1a;
    FUN_140208c1e(local_c8,local_d0,local_cc,&local_58);
    FUN_14023409e(&local_b8,local_c8,1);
    local_58 = (wchar_t *)CONCAT44(local_58._4_4_,4);
    FUN_14023423e(local_48,local_98);
    local_70 = &local_38;
    local_78 = &local_58;
    FUN_14010d304(&local_68);
    local_88 = local_b8;
    local_80 = local_b0;
    if (local_b0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_b0 + 1) = (int)local_b0[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(param_1,&local_88,&local_68);
    FUN_14007f2db(local_68,local_60);
    if (local_68 != 0) {
      FUN_1400020a8();
    }
    if (local_48[0] != (longlong *)0x0) {
      (**(code **)(*local_48[0] + 0x10))();
    }
    if (local_b0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_b0 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_b0)(local_b0);
        LOCK();
        piVar2 = (int *)((longlong)local_b0 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_b0 + 0x10))(local_b0);
        }
      }
    }
    if (local_98[0] != (longlong *)0x0) {
      (**(code **)(*local_98[0] + 0x10))();
    }
    if (local_c8[0] != (longlong *)0x0) {
      (**(code **)(*local_c8[0] + 0x10))();
    }
    plVar1 = plStack_a0;
    if (plStack_a0 != (longlong *)0x0) {
      LOCK();
      plVar3 = plStack_a0 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*plStack_a0)(plStack_a0);
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
  if ((local_38 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441b8d02 FUN_1441b8d02 body=880 status=ok
// SIG undefined FUN_1441b8d02(void)

undefined8 * FUN_1441b8d02(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  undefined1 auStack_f8 [40];
  undefined1 local_d0 [4];
  undefined1 local_cc [4];
  longlong *local_c8 [2];
  undefined8 local_b8;
  longlong *local_b0;
  undefined8 local_a8;
  longlong *plStack_a0;
  longlong *local_98 [2];
  undefined8 local_88;
  longlong *local_80;
  wchar_t **local_78;
  ulonglong *local_70;
  longlong local_68;
  undefined4 local_60;
  wchar_t *local_58;
  undefined4 local_50;
  longlong *local_48 [2];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  iVar4 = *(int *)(param_2 + 0x88);
  if (iVar4 < 1) {
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
    *param_1 = DAT_14c844840;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    *(undefined4 *)(param_1 + 1) = DAT_14c844848;
  }
  else if (iVar4 == 1) {
    local_58 = L"LocationDiscoveredText";
    local_50 = 0x16;
    FUN_1446e940c(&local_68,&local_58);
    local_58 = L"OakCrossSave";
    local_50 = 0xc;
    FUN_1446e940c(&local_78,&local_58);
    local_58 = L"1 Location Discovered - ";
    local_50 = 0x18;
    FUN_140208c1e(param_1,&local_78,&local_68,&local_58);
  }
  else {
    local_a8 = 0;
    plStack_a0 = (longlong *)0x0;
    FUN_1413a454c(local_98,iVar4,0);
    local_58 = L"LocationsDiscoveredText";
    local_50 = 0x17;
    FUN_1446e940c(local_cc,&local_58);
    local_58 = L"OakCrossSave";
    local_50 = 0xc;
    FUN_1446e940c(local_d0,&local_58);
    local_58 = L"{0} Locations Discovered - ";
    local_50 = 0x1b;
    FUN_140208c1e(local_c8,local_d0,local_cc,&local_58);
    FUN_14023409e(&local_b8,local_c8,1);
    local_58 = (wchar_t *)CONCAT44(local_58._4_4_,4);
    FUN_14023423e(local_48,local_98);
    local_70 = &local_38;
    local_78 = &local_58;
    FUN_14010d304(&local_68);
    local_88 = local_b8;
    local_80 = local_b0;
    if (local_b0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_b0 + 1) = (int)local_b0[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(param_1,&local_88,&local_68);
    FUN_14007f2db(local_68,local_60);
    if (local_68 != 0) {
      FUN_1400020a8();
    }
    if (local_48[0] != (longlong *)0x0) {
      (**(code **)(*local_48[0] + 0x10))();
    }
    if (local_b0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_b0 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_b0)(local_b0);
        LOCK();
        piVar2 = (int *)((longlong)local_b0 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_b0 + 0x10))(local_b0);
        }
      }
    }
    if (local_98[0] != (longlong *)0x0) {
      (**(code **)(*local_98[0] + 0x10))();
    }
    if (local_c8[0] != (longlong *)0x0) {
      (**(code **)(*local_c8[0] + 0x10))();
    }
    plVar1 = plStack_a0;
    if (plStack_a0 != (longlong *)0x0) {
      LOCK();
      plVar3 = plStack_a0 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*plStack_a0)(plStack_a0);
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
  if ((local_38 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441b9074 FUN_1441b9074 body=888 status=ok
// SIG undefined FUN_1441b9074(void)

undefined8 FUN_1441b9074(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_138 [44];
  undefined1 local_10c [4];
  undefined8 local_108;
  longlong *local_100;
  longlong *local_f8;
  undefined4 local_f0;
  longlong *local_e8 [2];
  undefined8 local_d8;
  longlong *local_d0;
  longlong *local_c8;
  longlong *plStack_c0;
  longlong *local_b0 [2];
  longlong *local_a0;
  undefined4 local_98;
  undefined8 local_90;
  longlong *local_88;
  wchar_t **local_80;
  ulonglong *local_78;
  longlong local_70;
  undefined4 local_68;
  wchar_t *local_60;
  undefined4 local_58;
  longlong *local_50 [2];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_c8 = (longlong *)0x0;
  plStack_c0 = (longlong *)0x0;
  FUN_140407a00(local_b0,*(float *)(param_2 + 0xe8) * 100.0,&DAT_14cbd5988);
  FUN_14663704e(local_e8);
  FUN_14023409e(&local_d8,local_e8,1);
  local_60 = (wchar_t *)CONCAT44(local_60._4_4_,4);
  FUN_14023423e(local_50,local_b0);
  local_80 = &local_60;
  local_78 = &local_40;
  FUN_14010d304(&local_70);
  local_90 = local_d8;
  local_88 = local_d0;
  if (local_d0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_d0 + 1) = (int)local_d0[1] + 1;
    UNLOCK();
  }
  FUN_14010c016(&local_a0,&local_90,&local_70);
  FUN_14007f2db(local_70,local_68);
  if (local_70 != 0) {
    FUN_1400020a8();
  }
  if (local_50[0] != (longlong *)0x0) {
    (**(code **)(*local_50[0] + 0x10))();
  }
  if (local_d0 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_d0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_d0)(local_d0);
      LOCK();
      piVar2 = (int *)((longlong)local_d0 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_d0 + 0x10))(local_d0);
      }
    }
  }
  if (local_b0[0] != (longlong *)0x0) {
    (**(code **)(*local_b0[0] + 0x10))();
  }
  if (local_e8[0] != (longlong *)0x0) {
    (**(code **)(*local_e8[0] + 0x10))();
  }
  plVar1 = plStack_c0;
  if (plStack_c0 != (longlong *)0x0) {
    LOCK();
    plVar3 = plStack_c0 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plStack_c0)(plStack_c0);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  local_f8 = local_a0;
  if (local_a0 != (longlong *)0x0) {
    (**(code **)(*local_a0 + 8))();
  }
  local_f0 = local_98;
  local_60 = L"CampaignProgressText";
  local_58 = 0x14;
  FUN_1446e940c(local_e8,&local_60);
  local_60 = L"OakCrossSave";
  local_58 = 0xc;
  FUN_1446e940c(local_10c,&local_60);
  local_60 = L"{0} Campaign Progress";
  local_58 = 0x15;
  FUN_140208c1e(&local_c8,local_10c,local_e8,&local_60);
  FUN_14023409e(&local_108,&local_c8,1);
  local_60 = (wchar_t *)CONCAT44(local_60._4_4_,4);
  FUN_14023423e(local_50,&local_f8);
  local_80 = &local_60;
  local_78 = &local_40;
  FUN_14010d304(&local_70);
  local_90 = local_108;
  local_88 = local_100;
  if (local_100 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_100 + 1) = (int)local_100[1] + 1;
    UNLOCK();
  }
  FUN_14010c016(param_1,&local_90,&local_70);
  FUN_14007f2db(local_70,local_68);
  if (local_70 != 0) {
    FUN_1400020a8();
  }
  if (local_50[0] != (longlong *)0x0) {
    (**(code **)(*local_50[0] + 0x10))();
  }
  if (local_100 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_100 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_100)(local_100);
      LOCK();
      piVar2 = (int *)((longlong)local_100 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_100 + 0x10))(local_100);
      }
    }
  }
  if (local_f8 != (longlong *)0x0) {
    (**(code **)(*local_f8 + 0x10))();
  }
  if (local_c8 != (longlong *)0x0) {
    (**(code **)(*local_c8 + 0x10))();
  }
  if (local_a0 != (longlong *)0x0) {
    (**(code **)(*local_a0 + 0x10))();
  }
  if ((local_40 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441b93ee FUN_1441b93ee body=528 status=ok
// SIG undefined FUN_1441b93ee(void)

undefined8 FUN_1441b93ee(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_f8 [40];
  undefined1 local_d0 [4];
  undefined1 local_cc [4];
  longlong *local_c8 [2];
  undefined8 local_b8;
  longlong *local_b0;
  undefined8 local_a8;
  longlong *plStack_a0;
  longlong *local_98 [2];
  undefined8 local_88;
  longlong *local_80;
  wchar_t **local_78;
  ulonglong *local_70;
  longlong local_68;
  undefined4 local_60;
  wchar_t *local_58;
  undefined4 local_50;
  longlong *local_48 [2];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_a8 = 0;
  plStack_a0 = (longlong *)0x0;
  FUN_1413a454c(local_98,*(undefined4 *)(param_2 + 0xd8),0);
  local_58 = L"CharacterLevelText";
  local_50 = 0x12;
  FUN_1446e940c(local_cc,&local_58);
  local_58 = L"OakCrossSave";
  local_50 = 0xc;
  FUN_1446e940c(local_d0,&local_58);
  local_58 = L"Level {0}";
  local_50 = 9;
  FUN_140208c1e(local_c8,local_d0,local_cc,&local_58);
  FUN_14023409e(&local_b8,local_c8,1);
  local_58 = (wchar_t *)CONCAT44(local_58._4_4_,4);
  FUN_14023423e(local_48,local_98);
  local_70 = &local_38;
  local_78 = &local_58;
  FUN_14010d304(&local_68);
  local_88 = local_b8;
  local_80 = local_b0;
  if (local_b0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_b0 + 1) = (int)local_b0[1] + 1;
    UNLOCK();
  }
  FUN_14010c016(param_1,&local_88,&local_68);
  FUN_14007f2db(local_68,local_60);
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if (local_48[0] != (longlong *)0x0) {
    (**(code **)(*local_48[0] + 0x10))();
  }
  if (local_b0 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_b0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_b0)(local_b0);
      LOCK();
      piVar2 = (int *)((longlong)local_b0 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_b0 + 0x10))(local_b0);
      }
    }
  }
  if (local_98[0] != (longlong *)0x0) {
    (**(code **)(*local_98[0] + 0x10))();
  }
  if (local_c8[0] != (longlong *)0x0) {
    (**(code **)(*local_c8[0] + 0x10))();
  }
  plVar1 = plStack_a0;
  if (plStack_a0 != (longlong *)0x0) {
    LOCK();
    plVar3 = plStack_a0 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*plStack_a0)(plStack_a0);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441b9600 FUN_1441b9600 body=1488 status=ok
// SIG undefined FUN_1441b9600(void)

void FUN_1441b9600(longlong param_1,longlong param_2,longlong *param_3,undefined1 param_4,
                  longlong *param_5)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined1 auStack_128 [32];
  longlong **local_108;
  longlong **local_100;
  undefined1 local_f8 [4];
  undefined1 local_f4 [4];
  longlong *local_f0 [2];
  undefined8 *local_e0;
  longlong *local_d8;
  longlong *local_d0;
  undefined4 local_c8;
  longlong *local_c0 [2];
  longlong *local_b0 [2];
  undefined8 *local_a0;
  longlong *local_98;
  longlong *local_90;
  undefined1 *local_88;
  longlong *local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  longlong *local_60;
  undefined4 local_58;
  undefined1 local_50 [8];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x170) = 0xffffffff;
    if ((int)param_5[1] != 0) {
      plVar2 = (longlong *)*param_5;
      if (plVar2 == (longlong *)0x0) goto LAB_1441b9694;
      (**(code **)(*plVar2 + 0x60))(plVar2,0x17);
    }
  }
  else {
    local_70 = L"ConfirmSelectCharacterSaveHeader";
    uStack_68._0_4_ = 0x20;
    FUN_1446e940c(&local_80,&local_70);
    local_70 = L"OakCrossSave";
    uStack_68._0_4_ = 0xc;
    FUN_1446e940c(&local_90,&local_70);
    local_70 = L"Overwrite Confirmation";
    uStack_68 = CONCAT44(uStack_68._4_4_,0x16);
    FUN_140208c1e(local_b0,&local_90,&local_80,&local_70);
    local_d0 = (longlong *)*param_3;
    if (local_d0 != (longlong *)0x0) {
      (**(code **)(*local_d0 + 8))();
    }
    local_c8 = (undefined4)param_3[1];
    local_70 = L"ConfirmSelectCharacterSaveBody";
    uStack_68._0_4_ = 0x1e;
    FUN_1446e940c(local_f4,&local_70);
    local_70 = L"OakCrossSave";
    uStack_68._0_4_ = 0xc;
    FUN_1446e940c(local_f8,&local_70);
    local_70 = L"Are you sure you would like to overwrite with:[newline][newline]{0}";
    uStack_68 = CONCAT44(uStack_68._4_4_,0x43);
    FUN_140208c1e(local_f0,local_f8,local_f4,&local_70);
    FUN_14023409e(&local_e0,local_f0,1);
    local_70 = (wchar_t *)CONCAT44(local_70._4_4_,4);
    FUN_14023423e(&local_60,&local_d0);
    local_88 = local_50;
    local_90 = &local_70;
    FUN_14010d304(&local_80);
    local_a0 = local_e0;
    local_98 = local_d8;
    if (local_d8 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_d8 + 1) = (int)local_d8[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(local_c0,&local_a0,&local_80);
    FUN_14007f2db(local_80,local_78);
    if (local_80 != (longlong *)0x0) {
      FUN_1400020a8();
    }
    if (local_60 != (longlong *)0x0) {
      (**(code **)(*local_60 + 0x10))();
    }
    if (local_d8 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_d8 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
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
    if (local_d0 != (longlong *)0x0) {
      (**(code **)(*local_d0 + 0x10))();
    }
    if (local_f0[0] != (longlong *)0x0) {
      (**(code **)(*local_f0[0] + 0x10))();
    }
    local_70 = L"ConfirmSelectCharacterSaveChoiceText";
    uStack_68._0_4_ = 0x24;
    FUN_1446e940c(&local_90,&local_70);
    local_70 = L"OakCrossSave";
    uStack_68._0_4_ = 0xc;
    FUN_1446e940c(&local_a0,&local_70);
    local_70 = L"Confirm";
    uStack_68._0_4_ = 7;
    FUN_140208c1e(&local_80,&local_a0,&local_90,&local_70);
    local_70 = L"CancelSelectCharacterSaveChoiceText";
    uStack_68._0_4_ = 0x23;
    FUN_1446e940c(&local_a0,&local_70);
    local_70 = L"OakCrossSave";
    uStack_68._0_4_ = 0xc;
    FUN_1446e940c(local_f0,&local_70);
    local_70 = L"Cancel";
    uStack_68 = CONCAT44(uStack_68._4_4_,6);
    FUN_140208c1e(&local_90,local_f0,&local_a0,&local_70);
    local_60 = (longlong *)0x0;
    local_58 = 0;
    local_70 = (wchar_t *)param_1;
    uStack_68 = param_2;
    FUN_148a7189c(&local_60,param_5);
    local_a0 = (undefined8 *)0x0;
    local_98 = (longlong *)((ulonglong)local_98 & 0xffffffff00000000);
    local_50[0] = param_4;
    FUN_1446efa72(&local_a0,0,4,0x10);
    local_98 = (longlong *)CONCAT44(local_98._4_4_,4);
    *local_a0 = &PTR_LAB_14b972ed0;
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
    local_a0[2] = lVar6;
    *local_a0 = &PTR_FUN_14b989270;
    *(undefined4 *)(local_a0 + 3) = (undefined4)local_70;
    *(undefined4 *)((longlong)local_a0 + 0x1c) = local_70._4_4_;
    *(undefined4 *)(local_a0 + 4) = (undefined4)uStack_68;
    *(undefined4 *)((longlong)local_a0 + 0x24) = uStack_68._4_4_;
    local_a0[5] = local_60;
    local_60 = (longlong *)0x0;
    *(undefined4 *)(local_a0 + 6) = local_58;
    local_58 = 0;
    *(undefined1 *)(local_a0 + 7) = local_50[0];
    local_108 = &local_80;
    local_100 = &local_90;
    uVar4 = FUN_14615e246(param_2,local_b0,local_c0,&local_a0);
    *(undefined4 *)(param_1 + 400) = uVar4;
    if ((int)local_98 == 0) {
LAB_1441b9b50:
      if (local_a0 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
    else if (local_a0 != (undefined8 *)0x0) {
      (**(code **)*local_a0)(local_a0,0);
      FUN_1446efa72(&local_a0,0,0,0x10);
      local_98 = (longlong *)((ulonglong)local_98 & 0xffffffff00000000);
      goto LAB_1441b9b50;
    }
    if (local_90 != (longlong *)0x0) {
      (**(code **)(*local_90 + 0x10))();
    }
    if (local_80 != (longlong *)0x0) {
      (**(code **)(*local_80 + 0x10))();
    }
    if (local_c0[0] != (longlong *)0x0) {
      (**(code **)(*local_c0[0] + 0x10))();
    }
    if (local_b0[0] != (longlong *)0x0) {
      (**(code **)(*local_b0[0] + 0x10))();
    }
  }
  puVar5 = (undefined8 *)*param_5;
  if ((int)param_5[1] != 0) {
    if (puVar5 == (undefined8 *)0x0) goto LAB_1441b9694;
    (**(code **)*puVar5)(puVar5,0);
    FUN_1446efa72(param_5,0,0,0x10);
    *(undefined4 *)(param_5 + 1) = 0;
    puVar5 = (undefined8 *)*param_5;
  }
  if (puVar5 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_1441b9694:
  if ((local_48 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441b9bd2 FUN_1441b9bd2 body=1808 status=ok
// SIG undefined FUN_1441b9bd2(void)

void FUN_1441b9bd2(wchar_t *param_1,longlong param_2,longlong *param_3)

{
  int *piVar1;
  longlong lVar2;
  char cVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  wchar_t *pwVar8;
  longlong lVar9;
  undefined1 auStack_148 [32];
  wchar_t ***local_128;
  undefined8 local_120;
  undefined1 local_118;
  undefined1 local_110;
  undefined1 local_100 [4];
  undefined1 local_fc [4];
  longlong *local_f8 [2];
  undefined8 local_e8;
  longlong *local_e0;
  longlong *local_d8;
  undefined4 local_d0;
  longlong *local_c8 [2];
  longlong *local_b8;
  undefined4 local_b0;
  longlong *local_a8 [2];
  undefined8 local_98;
  longlong *local_90;
  wchar_t **local_88;
  ulonglong *local_80;
  longlong local_78;
  ulonglong uStack_70;
  wchar_t *local_68;
  wchar_t *local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_148;
  if ((*(longlong **)(param_1 + 0x38) != (longlong *)0x0) &&
     (cVar3 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x498))(), 0xfc < (byte)(cVar3 - 6U)))
  {
    lVar5 = (longlong)*(int *)(*(longlong *)(param_1 + 0x38) + 0x40);
    if (lVar5 != 0) {
      lVar9 = 0;
      do {
        lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x38) + 0x38) + lVar9);
        if ((lVar2 != 0) && (*(int *)(lVar2 + 0xe0) == *(int *)(param_2 + 0x38))) {
          lVar5 = FUN_145da44aa(lVar2);
          if (lVar5 != 0) {
            plVar6 = (longlong *)FUN_140a68038(1);
            local_68 = L"InaccessibleProfileSaveHeader";
            local_60._0_4_ = 0x1d;
            FUN_1446e940c(&local_78,&local_68);
            local_68 = L"OakCrossSave";
            local_60._0_4_ = 0xc;
            FUN_1446e940c(&local_88,&local_68);
            local_68 = L"Cloud Profile Inaccessible";
            local_60._0_4_ = 0x1a;
            FUN_140208c1e(local_a8,&local_88,&local_78,&local_68);
            if (plVar6 == (longlong *)0x0) {
              local_68 = L"InaccessibleProfileSavePlatform";
              local_60._0_4_ = 0x1f;
              FUN_1446e940c(&local_78,&local_68);
              local_68 = L"OakCrossSave";
              local_60._0_4_ = 0xc;
              FUN_1446e940c(&local_88,&local_68);
              local_68 = L"platform";
              local_60._0_4_ = 8;
              FUN_140208c1e(&local_b8,&local_88,&local_78,&local_68);
            }
            else {
              (**(code **)(*plVar6 + 0x1c0))(plVar6,&local_b8);
            }
            local_d8 = local_b8;
            if (local_b8 != (longlong *)0x0) {
              (**(code **)(*local_b8 + 8))();
            }
            local_d0 = local_b0;
            local_68 = L"InaccessibleProfileSaveBody";
            local_60._0_4_ = 0x1b;
            FUN_1446e940c(local_fc,&local_68);
            local_68 = L"OakCrossSave";
            local_60._0_4_ = 0xc;
            FUN_1446e940c(local_100,&local_68);
            local_68 = 
            L"The cloud profile save is associated with a different {0} account and cannot be used."
            ;
            local_60 = (wchar_t *)CONCAT44(local_60._4_4_,0x55);
            FUN_140208c1e(local_f8,local_100,local_fc,&local_68);
            FUN_14023409e(&local_e8,local_f8,1);
            local_68 = (wchar_t *)CONCAT44(local_68._4_4_,4);
            FUN_14023423e(&local_58,&local_d8);
            local_80 = &local_48;
            local_88 = &local_68;
            FUN_14010d304(&local_78);
            local_98 = local_e8;
            local_90 = local_e0;
            if (local_e0 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_e0 + 1) = (int)local_e0[1] + 1;
              UNLOCK();
            }
            FUN_14010c016(local_c8,&local_98,&local_78);
            FUN_14007f2db(local_78,uStack_70 & 0xffffffff);
            if (local_78 != 0) {
              FUN_1400020a8();
            }
            if ((longlong *)CONCAT44(uStack_54,local_58) != (longlong *)0x0) {
              (**(code **)(*(longlong *)CONCAT44(uStack_54,local_58) + 0x10))();
            }
            if (local_e0 != (longlong *)0x0) {
              LOCK();
              plVar6 = local_e0 + 1;
              *(int *)plVar6 = (int)*plVar6 + -1;
              UNLOCK();
              if ((int)*plVar6 == 0) {
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
            if (local_d8 != (longlong *)0x0) {
              (**(code **)(*local_d8 + 0x10))();
            }
            if (local_f8[0] != (longlong *)0x0) {
              (**(code **)(*local_f8[0] + 0x10))();
            }
            local_78 = 0;
            uStack_70 = 0;
            lVar9 = FUN_145da4f3c();
            local_68 = L"InaccessibleProfileChoiceText";
            local_60._0_4_ = 0x1d;
            FUN_1446e940c(&local_98,&local_68);
            local_68 = L"OakCrossSave";
            local_60._0_4_ = 0xc;
            FUN_1446e940c(local_f8,&local_68);
            local_68 = L"OK";
            local_60 = (wchar_t *)CONCAT44(local_60._4_4_,2);
            FUN_140208c1e(&local_88,local_f8,&local_98,&local_68);
            FUN_140008f88(lVar9,&local_88);
            if (local_88 != (wchar_t **)0x0) {
              (**(code **)(*local_88 + 8))();
            }
            *(undefined1 *)(lVar9 + 0x18) = 1;
            local_60 = (wchar_t *)0x0;
            local_58 = 0;
            local_68 = param_1;
            FUN_148a7189c(&local_60,param_3);
            local_88 = (wchar_t **)0x0;
            local_80 = (ulonglong *)((ulonglong)local_80 & 0xffffffff00000000);
            FUN_1446efa72(&local_88,0,3,0x10);
            local_80 = (ulonglong *)CONCAT44(local_80._4_4_,3);
            *local_88 = (wchar_t *)&PTR_LAB_14b972ed0;
            LOCK();
            UNLOCK();
            pwVar8 = (wchar_t *)(DAT_14c758608 + 1);
            lVar9 = DAT_14c758608 + 1;
            if (pwVar8 == (wchar_t *)0x0) {
              LOCK();
              UNLOCK();
              pwVar8 = (wchar_t *)(DAT_14c758608 + 2);
              lVar9 = DAT_14c758608 + 2;
            }
            DAT_14c758608 = lVar9;
            local_88[2] = pwVar8;
            *local_88 = (wchar_t *)&PTR_FUN_14b9892e0;
            local_88[3] = local_68;
            local_88[4] = local_60;
            local_60 = (wchar_t *)0x0;
            *(undefined4 *)(local_88 + 5) = local_58;
            local_120 = 0;
            local_110 = 1;
            local_118 = 0;
            local_128 = &local_88;
            uVar4 = FUN_1459dd948(lVar5,local_a8,local_c8,&local_78);
            *(undefined4 *)(param_1 + 0xca) = uVar4;
            if (*(longlong *)(param_1 + 0x38) != 0) {
              lVar5 = FUN_1403ca142();
              plVar6 = *(longlong **)(param_1 + 0x38);
              if ((((plVar6 != (longlong *)0x0) && (lVar5 != 0)) && (lVar9 = plVar6[2], lVar9 != 0))
                 && (((*(int *)(lVar5 + 0x38) <= *(int *)(lVar9 + 0x38) &&
                      (*(longlong *)
                        (*(longlong *)(lVar9 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
                       lVar5 + 0x30)) &&
                     ((cVar3 = (**(code **)(*plVar6 + 0x498))(plVar6), cVar3 == '\x05' &&
                      (plVar6[0x8f] != lVar2)))))) {
                FUN_148d30632(plVar6,lVar2);
                if (DAT_14c950c29 == '\x01') {
                  FUN_1456cec3c(lVar2);
                }
                *(longlong *)(param_1 + 0xbc) = lVar2;
              }
            }
            if ((int)local_80 == 0) {
LAB_1441ba218:
              if (local_88 != (wchar_t **)0x0) {
                FUN_1400020a8();
              }
            }
            else if (local_88 != (wchar_t **)0x0) {
              (**(code **)*local_88)(local_88,0);
              FUN_1446efa72(&local_88,0,0,0x10);
              local_80 = (ulonglong *)((ulonglong)local_80 & 0xffffffff00000000);
              goto LAB_1441ba218;
            }
            FUN_140e0067b(local_78,uStack_70 & 0xffffffff);
            if (local_78 != 0) {
              FUN_1400020a8();
            }
            if (local_c8[0] != (longlong *)0x0) {
              (**(code **)(*local_c8[0] + 0x10))();
            }
            if (local_b8 != (longlong *)0x0) {
              (**(code **)(*local_b8 + 0x10))();
            }
            if (local_a8[0] != (longlong *)0x0) {
              (**(code **)(*local_a8[0] + 0x10))();
            }
            goto LAB_1441b9c76;
          }
          break;
        }
        lVar9 = lVar9 + 8;
      } while (lVar5 * 8 != lVar9);
    }
  }
  if ((int)param_3[1] != 0) {
    plVar6 = (longlong *)*param_3;
    if (plVar6 == (longlong *)0x0) goto LAB_1441b9c88;
    (**(code **)(*plVar6 + 0x60))(plVar6,0);
  }
LAB_1441b9c76:
  puVar7 = (undefined8 *)*param_3;
  if ((int)param_3[1] != 0) {
    if (puVar7 == (undefined8 *)0x0) goto LAB_1441b9c88;
    (**(code **)*puVar7)(puVar7,0);
    FUN_1446efa72(param_3,0,0,0x10);
    *(undefined4 *)(param_3 + 1) = 0;
    puVar7 = (undefined8 *)*param_3;
  }
  if (puVar7 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_1441b9c88:
  if ((local_48 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1441ba2e4 FUN_1441ba2e4 body=739 status=ok
// SIG undefined FUN_1441ba2e4(void)

void FUN_1441ba2e4(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_f8 [32];
  longlong **local_d8;
  undefined4 local_d0;
  undefined4 local_c8;
  code **local_c0;
  undefined2 *local_b8;
  undefined1 *local_b0;
  undefined1 *local_a8;
  code **local_a0;
  undefined1 *local_98;
  code *local_90;
  undefined1 local_7c [4];
  longlong *local_78 [2];
  undefined1 local_64 [4];
  longlong *local_60 [2];
  code *local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar2 = *(longlong *)(param_1 + 0x70);
  if ((lVar2 != 0) && ((longlong)*(int *)(lVar2 + 0x40) != 0)) {
    lVar3 = 0;
    do {
      lVar1 = *(longlong *)(*(longlong *)(lVar2 + 0x38) + lVar3);
      if ((lVar1 != 0) && (*(int *)(lVar1 + 0xe0) == *(int *)(param_2 + 0x38))) {
        lVar2 = *(longlong *)(lVar1 + 0x30);
        if (lVar2 == 0) break;
        if (DAT_14cbadd90 == 0) {
          local_a0 = &local_50;
          local_50 = FUN_141030f22;
          local_90 = FUN_14081d0ea;
          local_98 = &LAB_1459f2e4c;
          local_a8 = &LAB_148c39de3;
          local_b0 = &LAB_1457a9eb2;
          local_b8 = &DAT_149e063b2;
          local_c0 = (code **)0x0;
          local_c8 = 0x10000004;
          local_d0 = 0x10;
          local_d8 = (longlong **)CONCAT44(local_d8._4_4_,0x3de0);
          FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
          lVar2 = *(longlong *)(lVar1 + 0x30);
          if (lVar2 == 0) break;
        }
        if ((((DAT_14cbadd90 != 0) && (lVar2 = *(longlong *)(lVar2 + 0x10), lVar2 != 0)) &&
            (*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
           ((*(longlong *)
              (*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) ==
             DAT_14cbadd90 + 0x30 && (lVar2 = FUN_1458d973e(), lVar2 != 0)))) {
          local_50 = (code *)0x14b9832a0;
          local_48 = 0x18;
          FUN_1446e940c(local_78,&local_50);
          local_50 = (code *)0x14b96ec08;
          local_48 = 0xc;
          FUN_1446e940c(local_64,&local_50);
          local_50 = (code *)0x14b98325e;
          local_48 = 0x20;
          FUN_140208c1e(local_60,local_64,local_78,&local_50);
          local_50 = (code *)0x14b98330a;
          local_48 = 0x19;
          FUN_1446e940c(local_64,&local_50);
          local_50 = (code *)0x14b96ec08;
          local_48 = 0xc;
          FUN_1446e940c(local_7c,&local_50);
          local_50 = (code *)0x14b9832d2;
          local_48 = 0x1b;
          FUN_140208c1e(local_78,local_7c,local_64,&local_50);
          local_c8 = CONCAT31(local_c8._1_3_,2);
          local_d0 = 0x40a00000;
          local_d8 = local_78;
          local_c0 = &local_50;
          FUN_1458d98da(lVar2,local_64,&DAT_14cbcdea0,local_60);
          if (local_78[0] != (longlong *)0x0) {
            (**(code **)(*local_78[0] + 0x10))();
          }
          if (local_60[0] != (longlong *)0x0) {
            (**(code **)(*local_60[0] + 0x10))();
          }
        }
        break;
      }
      lVar3 = lVar3 + 8;
    } while ((longlong)*(int *)(lVar2 + 0x40) * 8 != lVar3);
  }
  if ((local_40 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1441ba5c8 FUN_1441ba5c8 body=909 status=ok
// SIG undefined FUN_1441ba5c8(void)

void FUN_1441ba5c8(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_f8 [32];
  longlong **local_d8;
  undefined4 local_d0;
  undefined4 local_c8;
  code **local_c0;
  undefined2 *local_b8;
  undefined1 *local_b0;
  undefined1 *local_a8;
  code **local_a0;
  undefined1 *local_98;
  code *local_90;
  undefined1 local_7c [4];
  longlong *local_78 [2];
  undefined1 local_64 [4];
  longlong *local_60 [2];
  code *local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if ((*(longlong **)(param_1 + 0x70) != (longlong *)0x0) &&
     (cVar3 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x498))(), 0xfc < (byte)(cVar3 - 9U)))
  {
    lVar4 = (longlong)*(int *)(*(longlong *)(param_1 + 0x70) + 0x40);
    if (lVar4 != 0) {
      lVar5 = 0;
      do {
        lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + 0x38) + lVar5);
        if ((lVar2 != 0) && (*(int *)(lVar2 + 0xe0) == *(int *)(param_2 + 0x38))) {
          lVar4 = *(longlong *)(lVar2 + 0x30);
          if (lVar4 == 0) break;
          if (DAT_14cbadd90 == 0) {
            local_a0 = &local_50;
            local_50 = FUN_141030f22;
            local_90 = FUN_14081d0ea;
            local_98 = &LAB_1459f2e4c;
            local_a8 = &LAB_148c39de3;
            local_b0 = &LAB_1457a9eb2;
            local_b8 = &DAT_149e063b2;
            local_c0 = (code **)0x0;
            local_c8 = 0x10000004;
            local_d0 = 0x10;
            local_d8 = (longlong **)CONCAT44(local_d8._4_4_,0x3de0);
            FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
            lVar4 = *(longlong *)(lVar2 + 0x30);
            if (lVar4 == 0) break;
          }
          if ((((DAT_14cbadd90 != 0) && (lVar5 = *(longlong *)(lVar4 + 0x10), lVar5 != 0)) &&
              (*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(lVar5 + 0x38))) &&
             (*(longlong *)
               (*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) ==
              DAT_14cbadd90 + 0x30)) {
            if ((*(longlong *)(lVar4 + 0x3c50) != 0) &&
               (cVar3 = FUN_14030d2b6(*(longlong *)(lVar4 + 0x3c50) + 0xd98,&DAT_14cbd96c0),
               cVar3 != '\0')) {
                    /* WARNING: Subroutine does not return */
              FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_f8);
            }
            if (DAT_14c950c29 == '\x01') {
              FUN_1456cec3c(lVar2);
            }
            iVar1 = *(int *)(param_1 + 0x188);
            *(uint *)(param_1 + 0x188) = iVar1 + 1U;
            if (*(uint *)(param_1 + 0x18c) < iVar1 + 1U) {
              FUN_1460b3778((longlong *)(param_1 + 0x180),iVar1);
            }
            *(longlong *)(*(longlong *)(param_1 + 0x180) + (longlong)iVar1 * 8) = lVar2;
            if (DAT_14c950c29 == '\x01') {
              FUN_1456cec3c(lVar2);
            }
            lVar4 = FUN_1458d973e(lVar4);
            if (lVar4 != 0) {
              local_50 = (code *)0x14b98333e;
              local_48 = 0x10;
              FUN_1446e940c(local_78,&local_50);
              local_50 = (code *)0x14b96ec08;
              local_48 = 0xc;
              FUN_1446e940c(local_64,&local_50);
              local_50 = (code *)0x14b98325e;
              local_48 = 0x20;
              FUN_140208c1e(local_60,local_64,local_78,&local_50);
              local_50 = (code *)0x14b9833b4;
              local_48 = 0x11;
              FUN_1446e940c(local_64,&local_50);
              local_50 = (code *)0x14b96ec08;
              local_48 = 0xc;
              FUN_1446e940c(local_7c,&local_50);
              local_50 = (code *)0x14b983360;
              local_48 = 0x29;
              FUN_140208c1e(local_78,local_7c,local_64,&local_50);
              local_c8 = CONCAT31(local_c8._1_3_,2);
              local_d0 = 0x40a00000;
              local_d8 = local_78;
              local_c0 = &local_50;
              FUN_1458d98da(lVar4,local_64,&DAT_14cbcdea0,local_60);
              if (local_78[0] != (longlong *)0x0) {
                (**(code **)(*local_78[0] + 0x10))();
              }
              if (local_60[0] != (longlong *)0x0) {
                (**(code **)(*local_60[0] + 0x10))();
              }
            }
          }
          break;
        }
        lVar5 = lVar5 + 8;
      } while (lVar4 * 8 != lVar5);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1441ba972 FUN_1441ba972 body=109 status=ok
// SIG undefined FUN_1441ba972(void)

void FUN_1441ba972(longlong param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  
  if ((*(longlong **)(param_1 + 0x70) != (longlong *)0x0) &&
     (cVar2 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x498))(), 0xfc < (byte)(cVar2 - 9U)))
  {
    lVar3 = (longlong)*(int *)(*(longlong *)(param_1 + 0x70) + 0x40);
    if (lVar3 != 0) {
      lVar4 = 0;
      do {
        lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + 0x38) + lVar4);
        if ((lVar1 != 0) && (*(int *)(lVar1 + 0xe0) == *(int *)(param_2 + 0x38))) {
          FUN_1441ba9e0();
          return;
        }
        lVar4 = lVar4 + 8;
      } while (lVar3 * 8 != lVar4);
    }
  }
  return;
}



// FUNCTION 1441ba9e0 FUN_1441ba9e0 body=687 status=ok
// SIG undefined FUN_1441ba9e0(void)

void FUN_1441ba9e0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_f8 [32];
  longlong **local_d8;
  undefined4 local_d0;
  undefined4 local_c8;
  code **local_c0;
  undefined2 *local_b8;
  undefined1 *local_b0;
  undefined1 *local_a8;
  code **local_a0;
  undefined1 *local_98;
  code *local_90;
  undefined1 local_7c [4];
  longlong *local_78 [2];
  undefined1 local_64 [4];
  longlong *local_60 [2];
  code *local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if ((param_2 != 0) && (lVar1 = *(longlong *)(param_2 + 0x30), lVar1 != 0)) {
    if (DAT_14cbadd90 == 0) {
      local_a0 = &local_50;
      local_50 = FUN_141030f22;
      local_90 = FUN_14081d0ea;
      local_98 = &LAB_1459f2e4c;
      local_a8 = &LAB_148c39de3;
      local_b0 = &LAB_1457a9eb2;
      local_b8 = &DAT_149e063b2;
      local_c0 = (code **)0x0;
      local_c8 = 0x10000004;
      local_d0 = 0x10;
      local_d8 = (longlong **)CONCAT44(local_d8._4_4_,0x3de0);
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
      lVar1 = *(longlong *)(param_2 + 0x30);
      if (lVar1 == 0) goto LAB_1441baa4a;
    }
    if ((((DAT_14cbadd90 != 0) && (lVar1 = *(longlong *)(lVar1 + 0x10), lVar1 != 0)) &&
        (*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(lVar1 + 0x38))) &&
       ((*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8)
         == DAT_14cbadd90 + 0x30 && (lVar1 = FUN_1458d973e(), lVar1 != 0)))) {
      local_50 = (code *)0x14b98365a;
      local_48 = 0x12;
      FUN_1446e940c(local_78,&local_50);
      local_50 = (code *)0x14b96ec08;
      local_48 = 0xc;
      FUN_1446e940c(local_64,&local_50);
      local_50 = (code *)0x14b983618;
      local_48 = 0x20;
      FUN_140208c1e(local_60,local_64,local_78,&local_50);
      local_50 = (code *)0x14b983680;
      local_48 = 0x13;
      FUN_1446e940c(local_64,&local_50);
      local_50 = (code *)0x14b96ec08;
      local_48 = 0xc;
      FUN_1446e940c(local_7c,&local_50);
      local_50 = (code *)0x14b9832d2;
      local_48 = 0x1b;
      FUN_140208c1e(local_78,local_7c,local_64,&local_50);
      local_c8 = CONCAT31(local_c8._1_3_,2);
      local_d0 = 0x40a00000;
      local_d8 = local_78;
      local_c0 = &local_50;
      FUN_1458d98da(lVar1,local_64,&DAT_14cbcdea0,local_60);
      if (local_78[0] != (longlong *)0x0) {
        (**(code **)(*local_78[0] + 0x10))();
      }
      if (local_60[0] != (longlong *)0x0) {
        (**(code **)(*local_60[0] + 0x10))();
      }
    }
  }
LAB_1441baa4a:
  if ((local_40 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1441bac90 FUN_1441bac90 body=386 status=ok
// SIG undefined FUN_1441bac90(void)

void FUN_1441bac90(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  char cVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  byte bVar9;
  ulonglong uVar10;
  
  if ((longlong)*(int *)(param_1 + 0x160) != 0) {
    plVar1 = (longlong *)(param_1 + 0x158);
    lVar7 = 0;
    do {
      if ((*(int *)(*(longlong *)(param_1 + 0x158) + 8 + lVar7) != 0) &&
         (*(longlong *)(*(longlong *)(param_1 + 0x158) + lVar7) != 0)) {
        uVar5 = FUN_1441bae12(param_1,param_2);
        iVar2 = *(int *)(param_1 + 0x16c);
        *(int *)(param_1 + 0x16c) = iVar2 + 1;
        lVar7 = (longlong)*(int *)(param_1 + 0x160);
        if (lVar7 < 1) {
          *(int *)(param_1 + 0x16c) = iVar2;
          return;
        }
        uVar10 = lVar7 + 1;
        lVar7 = lVar7 * 0x10 + -8;
        bVar9 = 0;
        do {
          if (((*(int *)(*plVar1 + lVar7) == 0) ||
              (plVar3 = *(longlong **)(*plVar1 + -8 + lVar7), plVar3 == (longlong *)0x0)) ||
             (cVar4 = (**(code **)(*plVar3 + 0x60))(plVar3,param_2,uVar5), cVar4 == '\0')) {
            bVar9 = 1;
          }
          uVar10 = uVar10 - 1;
          lVar7 = lVar7 + -0x10;
        } while (1 < uVar10);
        iVar2 = *(int *)(param_1 + 0x16c);
        *(int *)(param_1 + 0x16c) = iVar2 + -1;
        if (!(bool)(bVar9 & iVar2 < 2)) {
          return;
        }
        iVar2 = *(int *)(param_1 + 0x160);
        iVar6 = iVar2;
        if (0 < iVar2) {
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
            iVar6 = *(int *)(param_1 + 0x160);
          } while (iVar8 < iVar6);
        }
        iVar8 = 2;
        if (2 < iVar6 * 2) {
          iVar8 = iVar6 * 2;
        }
        *(int *)(param_1 + 0x168) = iVar8;
        if (iVar2 <= iVar8) {
          return;
        }
        if (*(int *)(param_1 + 0x164) == iVar6) {
          return;
        }
        FUN_14045812c(plVar1);
        return;
      }
      lVar7 = lVar7 + 0x10;
    } while ((longlong)*(int *)(param_1 + 0x160) * 0x10 != lVar7);
  }
  return;
}



// FUNCTION 1441bae12 FUN_1441bae12 body=236 status=ok
// SIG undefined FUN_1441bae12(void)

undefined8 FUN_1441bae12(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_228 [32];
  longlong local_208 [3];
  undefined4 local_1f0 [2];
  undefined1 local_1e8 [8];
  undefined1 local_1e0 [432];
  byte local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_228;
  local_208[0] = 0;
  local_208[1] = 0;
  local_208[2] = 0;
  local_1f0[0] = 0xffff;
  FUN_148a6ad30(0,param_2,local_208);
  lVar2 = local_208[0];
  if (local_208[0] != 0) {
    lVar3 = FUN_14130c5c8();
    lVar1 = *(longlong *)(lVar2 + 0x10);
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(lVar1 + 0x38)) &&
       (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
        lVar3 + 0x30)) {
      FUN_14596ffb6(lVar2,local_1e8,local_1f0);
      if (local_30 == 1) {
        uVar4 = FUN_143f065cc(param_1,param_2,local_1e0,0);
      }
      else {
        uVar4 = 0;
      }
      if ((local_30 & 1) != 0) {
        FUN_141072d6a(local_1e8);
      }
      goto LAB_1441bae82;
    }
  }
  uVar4 = 0;
LAB_1441bae82:
  if ((local_28 ^ (ulonglong)auStack_228) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441baf00 FUN_1441baf00 body=517 status=ok
// SIG undefined FUN_1441baf00(void)

void FUN_1441baf00(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_f8 [32];
  undefined **local_d8 [4];
  longlong local_b8;
  longlong local_90;
  undefined8 local_68;
  undefined1 local_44;
  undefined8 local_40;
  undefined1 local_38;
  char local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar2 = *(longlong *)(param_1 + 0x70);
  if (lVar2 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x178);
    if (lVar3 == 0) {
      if (*(int *)(lVar2 + 0x40) < 1) goto LAB_1441bafcc;
      lVar3 = **(longlong **)(lVar2 + 0x38);
      if ((DAT_14c950c29 == '\x01') && (lVar3 != 0)) {
        FUN_1456cec3c(lVar3);
      }
      else if (lVar3 == 0) goto LAB_1441bafcc;
    }
    lVar2 = FUN_145da44aa(lVar3);
    if (lVar2 != 0) {
      if (*(int *)(param_1 + 0x170) != -1) {
        FUN_146142a30(lVar2);
        *(undefined4 *)(param_1 + 0x170) = 0xffffffff;
      }
      if (*(int *)(param_1 + 400) != -1) {
        FUN_146142a30(lVar2);
        *(undefined4 *)(param_1 + 400) = 0xffffffff;
      }
      if (*(int *)(param_1 + 0x194) != -1) {
        FUN_146142a30(lVar2);
        *(undefined4 *)(param_1 + 0x194) = 0xffffffff;
      }
    }
  }
LAB_1441bafcc:
  if (*(longlong *)(param_1 + 0x178) != 0) {
    if (*(longlong *)(param_1 + 0x70) != 0) {
      lVar3 = FUN_1403ca142();
      lVar2 = *(longlong *)(param_1 + 0x70);
      if ((((lVar2 != 0) && (lVar3 != 0)) && (lVar1 = *(longlong *)(lVar2 + 0x10), lVar1 != 0)) &&
         ((*(int *)(lVar3 + 0x38) <= *(int *)(lVar1 + 0x38) &&
          (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
           lVar3 + 0x30)))) {
        FUN_148d3076c(lVar2,*(undefined8 *)(param_1 + 0x178));
      }
    }
    *(undefined8 *)(param_1 + 0x178) = 0;
  }
  lVar2 = FUN_148a6ad30(param_1,param_2,0);
  if (lVar2 != 0) {
    lVar3 = FUN_14130c6ae();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        == lVar3 + 0x30)) {
      FUN_144344080(lVar2,local_d8);
      if (local_30 == '\x01') {
        local_44 = 1;
        local_40 = local_68;
        local_38 = 0;
        local_d8[0] = &PTR_FUN_14b0703c0;
        if (local_90 != 0) {
          FUN_1400020a8();
        }
        if (local_b8 != 0) {
          FUN_1400020a8();
        }
      }
    }
  }
  FUN_1441b4e2b(*(undefined8 *)(param_1 + 0x70),param_2);
  if ((local_28 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441bb110 FUN_1441bb110 body=424 status=ok
// SIG undefined FUN_1441bb110(void)

void FUN_1441bb110(longlong param_1,longlong param_2,int *param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  int *piVar6;
  longlong lVar7;
  bool bVar8;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 == 0) {
    uVar5 = 0;
    uVar2 = 0;
  }
  else {
    uVar5 = *(uint *)(param_2 + 0xc);
    if ((int)uVar5 < DAT_14c9647dc) {
      lVar7 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8);
    }
    else {
      lVar7 = 0;
    }
    uVar2 = *(uint *)(lVar7 + 0x10);
    if (*(uint *)(lVar7 + 0x10) == 0) {
      LOCK();
      iVar1 = DAT_14c964868 + 1;
      UNLOCK();
      uVar3 = DAT_14c964868 + 1;
      bVar8 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar1;
      if (bVar8) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar3);
      }
      LOCK();
      uVar2 = *(uint *)(lVar7 + 0x10);
      bVar8 = uVar2 == 0;
      if (bVar8) {
        *(uint *)(lVar7 + 0x10) = uVar3;
        uVar2 = 0;
      }
      UNLOCK();
      if (bVar8) {
        uVar2 = uVar3;
      }
    }
  }
  local_40 = CONCAT44(uVar2,uVar5);
  iVar1 = FUN_148a72ae6((longlong *)(param_1 + 0xe8),uVar2 ^ uVar5);
  if (iVar1 != -1) {
    lVar7 = *(longlong *)(param_1 + 0xe8);
    if ((lVar7 + (longlong)iVar1 * 0x48 + 8U & 0xfffffffffffffff7) != 0) {
      lVar7 = lVar7 + (longlong)iVar1 * 0x48;
      lVar4 = (longlong)*(int *)(lVar7 + 0x10);
      if (lVar4 != 0) {
        piVar6 = *(int **)(lVar7 + 8);
        lVar4 = lVar4 * 0x90;
        do {
          if ((((*piVar6 == *param_3) && (piVar6[1] == param_3[1])) && (piVar6[2] == param_3[2])) &&
             (piVar6[3] == param_3[3])) {
            if ((piVar6 != (int *)0x0) && ((*(byte *)(piVar6 + 0x22) & 2) != 0)) {
              FUN_1447715ec(param_4,piVar6 + 4);
              *param_5 = *(undefined8 *)(piVar6 + 0x12);
            }
            break;
          }
          piVar6 = piVar6 + 0x24;
          lVar4 = lVar4 + -0x90;
        } while (lVar4 != 0);
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1441bb2ba FUN_1441bb2ba body=670 status=ok
// SIG undefined FUN_1441bb2ba(void)

undefined8 * FUN_1441bb2ba(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  undefined8 *puVar7;
  int iVar8;
  longlong lVar9;
  undefined1 auStack_78 [40];
  longlong *local_50;
  int local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((((int)param_3[1] == 0) || ((longlong *)*param_3 == (longlong *)0x0)) ||
     (cVar5 = (**(code **)(*(longlong *)*param_3 + 0x30))(), cVar5 == '\0')) {
    *param_2 = 0;
  }
  else {
    local_50 = (longlong *)0x0;
    local_48 = 0;
    FUN_1441cc408(&local_50,param_3);
    *param_2 = 0;
    if ((local_50 == (longlong *)0x0 || local_48 == 0) ||
       (cVar5 = (**(code **)(*local_50 + 0x30))(), cVar5 == '\0')) {
      if (local_48 != 0) {
        if (local_50 == (longlong *)0x0) goto LAB_1441bb3e0;
        (**(code **)*local_50)(local_50,0);
        FUN_1446efa72(&local_50,0,0,0x10);
        goto LAB_1441bb516;
      }
    }
    else {
      plVar1 = (longlong *)(param_1 + 0x158);
      if (*(int *)(param_1 + 0x16c) < 1) {
        iVar2 = *(int *)(param_1 + 0x160);
        iVar6 = *(int *)(param_1 + 0x168) + -1;
        *(int *)(param_1 + 0x168) = iVar6;
        if (iVar6 <= iVar2) {
          iVar6 = iVar2;
          if (0 < iVar2) {
            iVar8 = 0;
            do {
              if (((*(int *)(*plVar1 + 8 + (longlong)iVar8 * 0x10) == 0) ||
                  (plVar3 = *(longlong **)(*plVar1 + (longlong)iVar8 * 0x10),
                  plVar3 == (longlong *)0x0)) ||
                 (cVar5 = (**(code **)(*plVar3 + 0x28))(), cVar5 != '\0')) {
                FUN_14005b288(plVar1,iVar8);
                FUN_14005b248(plVar1);
              }
              else {
                iVar8 = iVar8 + 1;
              }
              iVar6 = *(int *)(param_1 + 0x160);
            } while (iVar8 < iVar6);
          }
          iVar8 = 2;
          if (2 < iVar6 * 2) {
            iVar8 = iVar6 * 2;
          }
          *(int *)(param_1 + 0x168) = iVar8;
          if ((iVar8 < iVar2) && (*(int *)(param_1 + 0x164) != iVar6)) {
            FUN_14045812c(plVar1);
          }
        }
      }
      if (local_50 == (longlong *)0x0 || local_48 == 0) {
        local_40 = 0;
      }
      else {
        (**(code **)(*local_50 + 0x38))(local_50,&local_40);
      }
      *param_2 = local_40;
      iVar2 = *(int *)(param_1 + 0x160);
      *(uint *)(param_1 + 0x160) = iVar2 + 1U;
      if (*(uint *)(param_1 + 0x164) < iVar2 + 1U) {
        FUN_1447a71f6(plVar1,iVar2);
      }
      lVar4 = *plVar1;
      lVar9 = (longlong)iVar2 * 0x10;
      *(undefined8 *)(lVar4 + lVar9) = 0;
      *(undefined4 *)(lVar4 + 8 + lVar9) = 0;
      *(longlong **)(lVar4 + lVar9) = local_50;
      local_50 = (longlong *)0x0;
      *(int *)(lVar4 + 8 + lVar9) = local_48;
LAB_1441bb516:
      local_48 = 0;
    }
    if (local_50 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_1441bb3e0:
  puVar7 = (undefined8 *)*param_3;
  if ((int)param_3[1] != 0) {
    if (puVar7 == (undefined8 *)0x0) goto LAB_1441bb41b;
    (**(code **)*puVar7)(puVar7,0);
    FUN_1446efa72(param_3,0,0,0x10);
    *(undefined4 *)(param_3 + 1) = 0;
    puVar7 = (undefined8 *)*param_3;
  }
  if (puVar7 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_1441bb41b:
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1441bb55a FUN_1441bb55a body=1209 status=ok
// SIG undefined FUN_1441bb55a(void)

void FUN_1441bb55a(longlong param_1,longlong param_2)

{
  uint uVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  byte bVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
  undefined1 auStack_f8 [32];
  longlong **local_d8;
  longlong **local_d0;
  byte local_c5;
  int local_c4;
  longlong local_c0;
  ulonglong local_b8;
  ulonglong local_b0;
  undefined1 local_a4 [4];
  longlong *local_a0 [2];
  undefined1 local_8c [4];
  longlong *local_88 [2];
  longlong *local_78 [2];
  longlong *local_68 [2];
  wchar_t *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (param_2 == 0) goto LAB_1441bb584;
  if (DAT_14c950c29 == '\x01') {
    FUN_1456cec3c(param_2);
  }
  uVar1 = *(uint *)(param_1 + 0x188);
  lVar8 = (longlong)(int)uVar1;
  local_c0 = param_1;
  if (lVar8 != 0) {
    plVar2 = *(longlong **)(param_1 + 0x180);
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(param_2);
    }
    local_c4 = 0;
    uVar11 = 0;
    bVar5 = *plVar2 == param_2;
    do {
      local_c5 = bVar5 ^ 1;
      uVar9 = (int)uVar11 + 1;
      if ((int)uVar9 < (int)uVar1) {
        uVar9 = uVar1;
      }
      uVar6 = uVar11;
      local_b8 = uVar11;
      local_b0 = uVar11;
      do {
        uVar6 = uVar6 + 1;
        if (lVar8 <= (longlong)uVar6) {
          uVar11 = (ulonglong)uVar9;
          break;
        }
        if (DAT_14c950c29 == '\x01') {
          FUN_1456cec3c(param_2);
        }
        uVar11 = (ulonglong)((int)uVar11 + 1);
      } while ((bool)(bVar5 & 1) == (plVar2[uVar6] == param_2));
      iVar3 = local_c4;
      if ((bVar5 & 1) == 0) {
        iVar10 = (int)uVar11 - (int)local_b0;
        if (local_c4 != (int)local_b0) {
          memmove(plVar2 + local_c4,plVar2 + local_b8,(longlong)iVar10 << 3);
        }
        local_c4 = iVar3 + iVar10;
      }
      bVar5 = local_c5;
    } while ((longlong)uVar6 < lVar8);
    *(int *)(local_c0 + 0x188) = local_c4;
  }
  lVar8 = FUN_145da44aa(param_2);
  if (lVar8 == 0) goto LAB_1441bb584;
  local_58 = L"CloudSyncFailureHeader";
  local_50 = 0x16;
  FUN_1446e940c(local_78,&local_58);
  local_58 = L"OakCrossSave";
  local_50 = 0xc;
  FUN_1446e940c(local_88,&local_58);
  local_58 = L"Cloud Synchronization Failed";
  local_50 = 0x1c;
  FUN_140208c1e(local_68,local_88,local_78,&local_58);
  local_58 = L"CloudSyncFailureBody";
  local_50 = 0x14;
  FUN_1446e940c(local_88,&local_58);
  local_58 = L"OakCrossSave";
  local_50 = 0xc;
  FUN_1446e940c(local_a0,&local_58);
  local_58 = 
  L"Failed to synchronize with cloud. Please quit to the Title Screen and login again to perform synchronization."
  ;
  local_50 = 0x6d;
  FUN_140208c1e(local_78,local_a0,local_88,&local_58);
  local_58 = L"ConfirmCloudSyncFailureChoiceText";
  local_50 = 0x21;
  FUN_1446e940c(local_a0,&local_58);
  local_58 = L"OakCrossSave";
  local_50 = 0xc;
  FUN_1446e940c(local_8c,&local_58);
  local_58 = L"Quit to Title Screen";
  local_50 = 0x14;
  FUN_140208c1e(local_88,local_8c,local_a0,&local_58);
  local_58 = L"CancelCloudSyncFailureChoiceText";
  local_50 = 0x20;
  FUN_1446e940c(local_8c,&local_58);
  local_58 = L"OakCrossSave";
  local_50 = 0xc;
  FUN_1446e940c(local_a4,&local_58);
  local_58 = L"Continue Playing";
  local_50 = 0x10;
  FUN_140208c1e(local_a0,local_a4,local_8c,&local_58);
  local_58 = (wchar_t *)0x0;
  local_50 = 0;
  FUN_1446efa72(&local_58,0,2,0x10);
  local_50 = 2;
  *(undefined ***)local_58 = &PTR_LAB_14b972ed0;
  LOCK();
  UNLOCK();
  lVar7 = DAT_14c758608 + 1;
  lVar4 = DAT_14c758608 + 1;
  if (lVar7 == 0) {
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 2;
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  *(longlong *)(local_58 + 8) = lVar7;
  *(undefined ***)local_58 = &PTR_FUN_14b989350;
  *(longlong *)(local_58 + 0xc) = local_c0;
  local_d8 = local_88;
  local_d0 = local_a0;
  FUN_14615e246(lVar8,local_68,local_78,&local_58);
  if (local_50 == 0) {
LAB_1441bb99d:
    if (local_58 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_58 != (wchar_t *)0x0) {
    (*(code *)**(undefined8 **)local_58)(local_58,0);
    FUN_1446efa72(&local_58,0,0,0x10);
    local_50 = 0;
    goto LAB_1441bb99d;
  }
  if (local_a0[0] != (longlong *)0x0) {
    (**(code **)(*local_a0[0] + 0x10))();
  }
  if (local_88[0] != (longlong *)0x0) {
    (**(code **)(*local_88[0] + 0x10))();
  }
  if (local_78[0] != (longlong *)0x0) {
    (**(code **)(*local_78[0] + 0x10))();
  }
  if (local_68[0] != (longlong *)0x0) {
    (**(code **)(*local_68[0] + 0x10))();
  }
LAB_1441bb584:
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1441bba14 FUN_1441bba14 body=739 status=ok
// SIG undefined FUN_1441bba14(void)

void FUN_1441bba14(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_f8 [32];
  longlong **local_d8;
  undefined4 local_d0;
  undefined4 local_c8;
  code **local_c0;
  undefined2 *local_b8;
  undefined1 *local_b0;
  undefined1 *local_a8;
  code **local_a0;
  undefined1 *local_98;
  code *local_90;
  undefined1 local_7c [4];
  longlong *local_78 [2];
  undefined1 local_64 [4];
  longlong *local_60 [2];
  code *local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar2 = *(longlong *)(param_1 + 0x70);
  if ((lVar2 != 0) && ((longlong)*(int *)(lVar2 + 0x40) != 0)) {
    lVar3 = 0;
    do {
      lVar1 = *(longlong *)(*(longlong *)(lVar2 + 0x38) + lVar3);
      if ((lVar1 != 0) && (*(int *)(lVar1 + 0xe0) == *(int *)(param_2 + 0x38))) {
        lVar2 = *(longlong *)(lVar1 + 0x30);
        if (lVar2 == 0) break;
        if (DAT_14cbadd90 == 0) {
          local_a0 = &local_50;
          local_50 = FUN_141030f22;
          local_90 = FUN_14081d0ea;
          local_98 = &LAB_1459f2e4c;
          local_a8 = &LAB_148c39de3;
          local_b0 = &LAB_1457a9eb2;
          local_b8 = &DAT_149e063b2;
          local_c0 = (code **)0x0;
          local_c8 = 0x10000004;
          local_d0 = 0x10;
          local_d8 = (longlong **)CONCAT44(local_d8._4_4_,0x3de0);
          FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
          lVar2 = *(longlong *)(lVar1 + 0x30);
          if (lVar2 == 0) break;
        }
        if ((((DAT_14cbadd90 != 0) && (lVar2 = *(longlong *)(lVar2 + 0x10), lVar2 != 0)) &&
            (*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
           ((*(longlong *)
              (*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) ==
             DAT_14cbadd90 + 0x30 && (lVar2 = FUN_1458d973e(), lVar2 != 0)))) {
          local_50 = (code *)0x14b9836ee;
          local_48 = 0x13;
          FUN_1446e940c(local_78,&local_50);
          local_50 = (code *)0x14b96ec08;
          local_48 = 0xc;
          FUN_1446e940c(local_64,&local_50);
          local_50 = (code *)0x14b9836a8;
          local_48 = 0x22;
          FUN_140208c1e(local_60,local_64,local_78,&local_50);
          local_50 = (code *)0x14b983776;
          local_48 = 0x14;
          FUN_1446e940c(local_64,&local_50);
          local_50 = (code *)0x14b96ec08;
          local_48 = 0xc;
          FUN_1446e940c(local_7c,&local_50);
          local_50 = (code *)0x14b983716;
          local_48 = 0x2f;
          FUN_140208c1e(local_78,local_7c,local_64,&local_50);
          local_c8 = CONCAT31(local_c8._1_3_,2);
          local_d0 = 0x40a00000;
          local_d8 = local_78;
          local_c0 = &local_50;
          FUN_1458d98da(lVar2,local_64,&DAT_14cbcdea0,local_60);
          if (local_78[0] != (longlong *)0x0) {
            (**(code **)(*local_78[0] + 0x10))();
          }
          if (local_60[0] != (longlong *)0x0) {
            (**(code **)(*local_60[0] + 0x10))();
          }
        }
        break;
      }
      lVar3 = lVar3 + 8;
    } while ((longlong)*(int *)(lVar2 + 0x40) * 8 != lVar3);
  }
  if ((local_40 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1441bbdd4 FUN_1441bbdd4 body=205 status=ok
// SIG undefined FUN_1441bbdd4(void)

void FUN_1441bbdd4(undefined8 *param_1,undefined4 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  longlong *local_40;
  longlong *local_38;
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar3 = FUN_140b708a0(*param_1);
  if ((lVar3 != 0) && (*(longlong *)(lVar3 + 0x1f0) != 0)) {
    lVar3 = FUN_14094c9c2();
    if ((lVar3 != 0) && (lVar3 = *(longlong *)(lVar3 + 0x30), lVar3 != 0)) {
      (**(code **)(*(longlong *)*param_3 + 8))((longlong *)*param_3,&local_40);
      (**(code **)(*local_40 + 0x30))(local_40,local_30);
      FUN_148da83ac(lVar3,param_2,local_30);
      if (local_30[0] != 0) {
        FUN_1400020a8();
      }
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
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441bbea2 FUN_1441bbea2 body=47 status=ok
// SIG undefined FUN_1441bbea2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1441bbea2(void)

{
  _DAT_14cbce1e0 = 0;
  if (DAT_14cbce1d8 != 0) {
    FUN_1400020a8();
  }
  FUN_140b6c31a(&DAT_14cbce198);
  return;
}



// FUNCTION 1441bbed8 FUN_1441bbed8 body=16 status=ok
// SIG undefined FUN_1441bbed8(void)

void FUN_1441bbed8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1441c12ac(param_1,0xffffffff,param_2,param_3);
  return;
}



// FUNCTION 1441bbee8 FUN_1441bbee8 body=70 status=ok
// SIG undefined FUN_1441bbee8(void)

longlong FUN_1441bbee8(void)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_148a783be();
  if ((lVar1 != 0) && (lVar1 = *(longlong *)(lVar1 + 0x1f0), lVar1 != 0)) {
    lVar2 = FUN_1403ca142();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 1441bbf2e FUN_1441bbf2e body=1492 status=ok
// SIG undefined FUN_1441bbf2e(void)

void FUN_1441bbf2e(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  int iVar12;
  longlong lVar13;
  undefined8 uVar14;
  bool bVar15;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined4 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined2 *local_b8;
  undefined1 *local_b0;
  undefined1 *local_a8;
  undefined8 *local_a0;
  undefined1 *local_98;
  code *local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_60;
  char local_52;
  char local_51;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (*(char *)(param_1 + 0x1b0) != '\0') goto LAB_1441bbf62;
  lVar7 = FUN_148a783be();
  plVar8 = (longlong *)FUN_1441bbee8(param_1);
  if (lVar7 == 0 || plVar8 == (longlong *)0x0) goto LAB_1441bbf62;
  FUN_1441bc504(param_1,&local_52,param_2);
  if (((local_51 == '\x01') && (local_52 == '\x06')) &&
     (lVar9 = FUN_145725aea(plVar8,1), lVar9 != 0)) {
    if (DAT_14cbadd90 == 0) {
      local_a0 = &local_78;
      local_78 = FUN_141030f22;
      local_90 = FUN_14081d0ea;
      local_98 = &LAB_1459f2e4c;
      local_a8 = &LAB_148c39de3;
      local_b0 = &LAB_1457a9eb2;
      local_b8 = &DAT_149e063b2;
      local_c0 = 0;
      local_c8 = 0x10000004;
      local_d0 = 0x10;
      local_d8 = 0x3de0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
    }
    if ((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar9 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) {
      local_80 = *(undefined4 *)(param_2 + 1);
      local_88 = *param_2;
      FUN_148c39418(lVar9);
      goto LAB_1441bbf62;
    }
  }
  lVar7 = FUN_145838d74(lVar7);
  if (lVar7 == 0) goto LAB_1441bbf62;
  local_78 = (code *)0x0;
  uStack_70 = 0;
  if ((*(char *)(param_1 + 0x1b0) == '\x01') &&
     (plVar11 = *(longlong **)(param_1 + 400), plVar11 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)plVar11 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar11 + 0x10))();
    }
  }
  *(undefined4 *)(param_1 + 0x178) = (undefined4)local_78;
  *(undefined4 *)(param_1 + 0x17c) = local_78._4_4_;
  *(int *)(param_1 + 0x180) = (int)uStack_70;
  *(undefined4 *)(param_1 + 0x184) = uStack_70._4_4_;
  *(undefined8 *)(param_1 + 0x198) = 0;
  *(undefined8 *)(param_1 + 0x1a0) = 0;
  *(undefined8 *)(param_1 + 0x188) = 0;
  *(undefined8 *)(param_1 + 400) = 0;
  *(undefined4 *)(param_1 + 0x1a8) = 0;
  *(undefined1 *)(param_1 + 0x1b0) = 1;
  *(undefined4 *)(param_1 + 0x1a8) = *(undefined4 *)(param_2 + 1);
  *(undefined8 *)(param_1 + 0x1a0) = *param_2;
  bVar3 = (**(code **)(*plVar8 + 0x498))(plVar8);
  if (5 < bVar3) {
    FUN_1441bcb1e(param_1);
    goto LAB_1441bbf62;
  }
  local_78 = (code *)0x0;
  uStack_70 = uStack_70 & 0xffffffff00000000;
  FUN_1446efa72(&local_78,0,4,0x10);
  uStack_70 = CONCAT44(uStack_70._4_4_,4);
  plVar11 = *(longlong **)(param_1 + 0x10);
  if (plVar11 == (longlong *)0x0) {
LAB_1441bc12a:
    *(undefined ***)local_78 = &PTR_LAB_149e020b0;
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
    *(longlong *)(local_78 + 0x10) = lVar10;
    *(undefined ***)local_78 = &PTR_FUN_14b9895c0;
    *(longlong *)(local_78 + 0x18) = 0;
    *(longlong *)(local_78 + 0x20) = 0;
    *(code **)(local_78 + 0x28) = FUN_1441bc6e2;
    *(undefined4 *)(local_78 + 0x30) = 0;
  }
  else {
    iVar6 = (int)plVar11[1];
    do {
      if (iVar6 == 0) goto LAB_1441bc12a;
      LOCK();
      iVar5 = (int)plVar11[1];
      bVar15 = iVar6 == iVar5;
      if (bVar15) {
        *(int *)(plVar11 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar15);
    lVar9 = *(longlong *)(param_1 + 8);
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
    UNLOCK();
    *(undefined ***)local_78 = &PTR_LAB_149e020b0;
    LOCK();
    UNLOCK();
    lVar13 = DAT_14c758608 + 1;
    lVar10 = DAT_14c758608 + 1;
    if (lVar13 == 0) {
      LOCK();
      UNLOCK();
      lVar13 = DAT_14c758608 + 2;
      lVar10 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar10;
    *(longlong *)(local_78 + 0x10) = lVar13;
    *(undefined ***)local_78 = &PTR_FUN_14b9895c0;
    *(longlong *)(local_78 + 0x18) = lVar9;
    *(longlong **)(local_78 + 0x20) = plVar11;
    LOCK();
    *(int *)((longlong)plVar11 + 0xc) = *(int *)((longlong)plVar11 + 0xc) + 1;
    UNLOCK();
    *(code **)(local_78 + 0x28) = FUN_1441bc6e2;
    *(undefined4 *)(local_78 + 0x30) = 0;
    LOCK();
    plVar2 = plVar11 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
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
    plVar2 = plVar11 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
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
    plVar2 = plVar11 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
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
  if (((int)uStack_70 == 0) || (local_78 == (code *)0x0)) {
LAB_1441bc491:
    if ((int)uStack_70 == 0) {
      uVar14 = 0;
      goto LAB_1441bc3b0;
    }
    if (local_78 != (code *)0x0) {
      uVar14 = 0;
      (*(code *)**(undefined8 **)local_78)(local_78,0);
      FUN_1446efa72(&local_78,0,0,0x10);
      goto LAB_1441bc39d;
    }
    uVar14 = 0;
  }
  else {
    cVar4 = (**(code **)(*(longlong *)local_78 + 0x30))();
    if (cVar4 == '\0') {
      goto LAB_1441bc491;
    }
    plVar11 = (longlong *)(lVar7 + 0x20);
    if (*(int *)(lVar7 + 0x34) < 1) {
      iVar6 = *(int *)(lVar7 + 0x28);
      iVar5 = *(int *)(lVar7 + 0x30) + -1;
      *(int *)(lVar7 + 0x30) = iVar5;
      if (iVar5 <= iVar6) {
        iVar5 = iVar6;
        if (0 < iVar6) {
          iVar12 = 0;
          do {
            if (((*(int *)(*plVar11 + 8 + (longlong)iVar12 * 0x10) == 0) ||
                (plVar2 = *(longlong **)(*plVar11 + (longlong)iVar12 * 0x10),
                plVar2 == (longlong *)0x0)) ||
               (cVar4 = (**(code **)(*plVar2 + 0x28))(), cVar4 != '\0')) {
              FUN_14005b288(plVar11,iVar12);
              FUN_14005b248(plVar11);
            }
            else {
              iVar12 = iVar12 + 1;
            }
            iVar5 = *(int *)(lVar7 + 0x28);
          } while (iVar12 < iVar5);
        }
        iVar12 = 2;
        if (2 < iVar5 * 2) {
          iVar12 = iVar5 * 2;
        }
        *(int *)(lVar7 + 0x30) = iVar12;
        if ((iVar12 < iVar6) && (*(int *)(lVar7 + 0x2c) != iVar5)) {
          FUN_14045812c();
        }
      }
    }
    uVar14 = 0;
    if (((int)uStack_70 != 0) && (local_78 != (code *)0x0)) {
      (**(code **)(*(longlong *)local_78 + 0x38))(local_78,&local_60);
      uVar14 = local_60;
    }
    iVar6 = *(int *)(lVar7 + 0x28);
    *(uint *)(lVar7 + 0x28) = iVar6 + 1U;
    if (*(uint *)(lVar7 + 0x2c) < iVar6 + 1U) {
      FUN_1447a71f6(plVar11,iVar6);
    }
    lVar7 = *plVar11;
    lVar9 = (longlong)iVar6 * 0x10;
    *(undefined8 *)(lVar7 + lVar9) = 0;
    *(undefined4 *)(lVar7 + 8 + lVar9) = 0;
    *(code **)(lVar7 + lVar9) = local_78;
    local_78 = (code *)0x0;
    *(int *)(lVar7 + 8 + lVar9) = (int)uStack_70;
LAB_1441bc39d:
    uStack_70 = uStack_70 & 0xffffffff00000000;
LAB_1441bc3b0:
    if (local_78 != (code *)0x0) {
      FUN_1400020a8();
    }
  }
  *(undefined8 *)(param_1 + 0x178) = uVar14;
  FUN_146022004(plVar8,0);
LAB_1441bbf62:
  if ((local_50 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1441bc504 FUN_1441bc504 body=476 status=ok
// SIG undefined FUN_1441bc504(void)

undefined1 * FUN_1441bc504(undefined8 param_1,undefined1 *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 uVar3;
  longlong lVar4;
  longlong *plVar5;
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
  longlong *plStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar4 = FUN_1441bbee8();
  if (lVar4 == 0) {
LAB_1441bc530:
    local_38 = (code *)0x0;
    plStack_30 = (longlong *)0x0;
  }
  else {
    lVar4 = FUN_145725aea(lVar4,1);
    if (lVar4 == 0) goto LAB_1441bc530;
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
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < *(int *)(DAT_14cbadd90 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) != DAT_14cbadd90 + 0x30)) goto LAB_1441bc530;
    plVar5 = (longlong *)(**(code **)(*(longlong *)(lVar4 + 0x958) + 0x10))(lVar4 + 0x958);
    if (plVar5 == (longlong *)0x0) goto LAB_1441bc530;
    lVar4 = (**(code **)(*plVar5 + 0x2b0))(plVar5);
    if (lVar4 == 0) goto LAB_1441bc530;
    plVar5 = (longlong *)FUN_1412d7224(lVar4);
    if (plVar5 == (longlong *)0x0) goto LAB_1441bc530;
    (**(code **)(*plVar5 + 0x78))(plVar5,&local_38,param_3);
    if (local_38 != (code *)0x0) {
      uVar3 = FUN_1405f61f4();
      *param_2 = uVar3;
      uVar3 = 1;
      goto LAB_1441bc53a;
    }
  }
  uVar3 = 0;
LAB_1441bc53a:
  plVar5 = plStack_30;
  param_2[1] = uVar3;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_30 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441bc6e2 FUN_1441bc6e2 body=1061 status=ok
// SIG undefined FUN_1441bc6e2(void)

void FUN_1441bc6e2(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined8 *local_78;
  int local_70;
  undefined8 local_68;
  undefined4 local_60;
  byte local_5a;
  char local_59;
  code *local_58;
  longlong *local_50;
  longlong local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(char *)(param_1 + 0x1b0) == '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_a8);
  }
  lVar6 = FUN_148a783be(param_1);
  if ((lVar6 == 0) || (lVar6 = FUN_145838d74(lVar6), lVar6 == 0)) goto LAB_1441bc73b;
  if (*(longlong *)(param_1 + 0x178) != 0) {
    FUN_14480f766(lVar6 + 0x20);
  }
  *(undefined8 *)(param_1 + 0x178) = 0;
  FUN_1441bc504(param_1,&local_5a,(undefined8 *)(param_1 + 0x1a0));
  if ((local_59 == '\x01') && ((local_5a & 0xf7) != 0)) {
    if (local_5a == 1) {
      uVar8 = FUN_1401cb356();
      local_58 = FUN_1441bd688;
      local_50 = (longlong *)((ulonglong)local_50 & 0xffffffff00000000);
      FUN_1441bd506(&local_78,param_1);
      local_88 = 0;
      FUN_1405f67fc(uVar8,&local_58,&local_78,L"LaunchGameThenActivateMission");
      *(code **)(param_1 + 0x188) = local_58;
      local_58 = (code *)0x0;
      plVar3 = *(longlong **)(param_1 + 400);
      *(longlong **)(param_1 + 400) = local_50;
      local_50 = (longlong *)0x0;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))();
        }
        if (local_50 != (longlong *)0x0) {
          LOCK();
          piVar2 = (int *)((longlong)local_50 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_50 + 0x10))();
          }
        }
      }
      if (local_70 != 0) {
        if (local_78 == (undefined8 *)0x0) goto LAB_1441bc73b;
        (**(code **)*local_78)(local_78,0);
        FUN_1446efa72(&local_78,0,0,0x10);
        local_70 = 0;
      }
      if (local_78 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      FUN_1441bcb1e(param_1);
    }
    goto LAB_1441bc73b;
  }
  local_68 = *(undefined8 *)(param_1 + 0x1a0);
  local_60 = *(undefined4 *)(param_1 + 0x1a8);
  FUN_1448075d0(&local_58);
  lVar7 = FUN_14060eaf6(&local_58);
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  if (lVar7 == 0) {
    FUN_1441bd1c4(param_1);
    goto LAB_1441bc73b;
  }
  local_58 = (code *)0x0;
  local_50 = (longlong *)((ulonglong)local_50 & 0xffffffff00000000);
  FUN_1446efa72(&local_58,0,4,0x10);
  local_50 = (longlong *)CONCAT44(local_50._4_4_,4);
  plVar3 = *(longlong **)(param_1 + 0x10);
  if (plVar3 == (longlong *)0x0) {
LAB_1441bc953:
    *(undefined ***)local_58 = &PTR_LAB_14b403fd0;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar7 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar7 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar7;
    *(longlong *)(local_58 + 0x10) = lVar9;
    *(undefined ***)local_58 = &PTR_FUN_14b989630;
    *(undefined8 *)(local_58 + 0x18) = 0;
    *(undefined8 *)(local_58 + 0x20) = 0;
    *(code **)(local_58 + 0x28) = FUN_1441bd342;
    *(undefined4 *)(local_58 + 0x30) = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_1441bc953;
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar10 = iVar5 == iVar4;
      if (bVar10) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar10);
    uVar8 = *(undefined8 *)(param_1 + 8);
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    *(undefined ***)local_58 = &PTR_LAB_14b403fd0;
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 1;
    lVar7 = DAT_14c758608 + 1;
    if (lVar9 == 0) {
      LOCK();
      UNLOCK();
      lVar9 = DAT_14c758608 + 2;
      lVar7 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar7;
    *(longlong *)(local_58 + 0x10) = lVar9;
    *(undefined ***)local_58 = &PTR_FUN_14b989630;
    *(undefined8 *)(local_58 + 0x18) = uVar8;
    *(longlong **)(local_58 + 0x20) = plVar3;
    LOCK();
    *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
    UNLOCK();
    *(code **)(local_58 + 0x28) = FUN_1441bd342;
    *(undefined4 *)(local_58 + 0x30) = 0;
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
  FUN_1488671b8(lVar6 + 8,&local_78,&local_58);
  if ((int)local_50 == 0) {
LAB_1441bc9eb:
    if (local_58 != (code *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_58 != (code *)0x0) {
    (*(code *)**(undefined8 **)local_58)(local_58,0);
    FUN_1446efa72(&local_58,0,0,0x10);
    local_50 = (longlong *)((ulonglong)local_50 & 0xffffffff00000000);
    goto LAB_1441bc9eb;
  }
  *(undefined8 **)(param_1 + 0x180) = local_78;
LAB_1441bc73b:
  if ((local_30 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1441bcb1e FUN_1441bcb1e body=1676 status=ok
// SIG undefined FUN_1441bcb1e(void)

void FUN_1441bcb1e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  uint uVar4;
  int iVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  int iVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong lVar14;
  bool bVar15;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  code **local_f0;
  undefined4 local_e8;
  ulonglong local_e0;
  undefined2 *local_d8;
  undefined1 *local_d0;
  undefined1 *local_c8;
  code **local_c0;
  undefined1 *local_b8;
  code *local_b0;
  longlong local_a8;
  longlong *local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  char local_6a;
  byte local_69;
  code *local_68;
  ulonglong uStack_60;
  longlong local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (((*(char *)(param_1 + 0x1b0) == '\0') || (lVar7 = FUN_1441bbee8(param_1), lVar7 == 0)) ||
     (lVar7 = FUN_145725aea(lVar7,1), lVar7 == 0)) {
LAB_1441bcb5a:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_118);
  }
  if (DAT_14cbadd90 == 0) {
    local_c0 = &local_68;
    local_68 = FUN_141030f22;
    local_b0 = FUN_14081d0ea;
    local_b8 = &LAB_1459f2e4c;
    local_c8 = &LAB_148c39de3;
    local_d0 = &LAB_1457a9eb2;
    local_d8 = &DAT_149e063b2;
    local_e0 = 0;
    local_e8 = 0x10000004;
    local_f0 = (code **)CONCAT44(local_f0._4_4_,0x10);
    local_f8 = 0x3de0;
    FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
  }
  if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x38) < *(int *)(DAT_14cbadd90 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) +
       (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) != DAT_14cbadd90 + 0x30)) goto LAB_1441bcb5a;
  puVar3 = (undefined8 *)(param_1 + 0x1a0);
  FUN_1441bc504(param_1,&local_6a,puVar3);
  if (local_69 == 0) goto LAB_1441bcb5a;
  if ((local_69 & local_6a == '\x06') == 1) {
    local_80 = *(undefined4 *)(param_1 + 0x1a8);
    local_88 = *puVar3;
    FUN_148c39418(lVar7);
    goto LAB_1441bcb5a;
  }
  if (local_6a == '\x01') goto LAB_1441bcb5a;
  local_98 = *puVar3;
  local_90 = *(undefined4 *)(param_1 + 0x1a8);
  FUN_1448075d0(&local_68);
  lVar8 = FUN_14060eaf6(&local_68);
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  if (lVar8 == 0) {
    FUN_1441bd1c4(param_1);
    goto LAB_1441bcc4e;
  }
  uVar9 = FUN_148a783be(param_1);
  FUN_1410d53f0(&local_a8,uVar9);
  if (((local_a8 != 0) && (local_a0 != (longlong *)0x0)) && (0 < (int)local_a0[1])) {
    local_68 = (code *)0x0;
    uStack_60 = uStack_60 & 0xffffffff00000000;
    FUN_1446efa72(&local_68,0,4,0x10);
    uStack_60 = CONCAT44(uStack_60._4_4_,4);
    plVar12 = *(longlong **)(param_1 + 0x10);
    if (plVar12 == (longlong *)0x0) {
LAB_1441bcdfc:
      *(undefined ***)local_68 = &PTR_LAB_14a1e1a40;
      LOCK();
      UNLOCK();
      lVar10 = DAT_14c758608 + 1;
      lVar14 = DAT_14c758608 + 1;
      if (lVar10 == 0) {
        LOCK();
        UNLOCK();
        lVar10 = DAT_14c758608 + 2;
        lVar14 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar14;
      *(longlong *)(local_68 + 0x10) = lVar10;
      *(undefined ***)local_68 = &PTR_FUN_14b989710;
      *(longlong *)(local_68 + 0x18) = 0;
      *(longlong *)(local_68 + 0x20) = 0;
      *(code **)(local_68 + 0x28) = FUN_1441bd6a8;
      *(undefined4 *)(local_68 + 0x30) = 0;
    }
    else {
      iVar11 = (int)plVar12[1];
      do {
        if (iVar11 == 0) goto LAB_1441bcdfc;
        LOCK();
        iVar5 = (int)plVar12[1];
        bVar15 = iVar11 == iVar5;
        if (bVar15) {
          *(int *)(plVar12 + 1) = iVar11 + 1;
          iVar5 = iVar11;
        }
        iVar11 = iVar5;
        UNLOCK();
      } while (!bVar15);
      lVar14 = *(longlong *)(param_1 + 8);
      LOCK();
      *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
      UNLOCK();
      *(undefined ***)local_68 = &PTR_LAB_14a1e1a40;
      LOCK();
      UNLOCK();
      lVar13 = DAT_14c758608 + 1;
      lVar10 = DAT_14c758608 + 1;
      if (lVar13 == 0) {
        LOCK();
        UNLOCK();
        lVar13 = DAT_14c758608 + 2;
        lVar10 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar10;
      *(longlong *)(local_68 + 0x10) = lVar13;
      *(undefined ***)local_68 = &PTR_FUN_14b989710;
      *(longlong *)(local_68 + 0x18) = lVar14;
      *(longlong **)(local_68 + 0x20) = plVar12;
      LOCK();
      *(int *)((longlong)plVar12 + 0xc) = *(int *)((longlong)plVar12 + 0xc) + 1;
      UNLOCK();
      *(code **)(local_68 + 0x28) = FUN_1441bd6a8;
      *(undefined4 *)(local_68 + 0x30) = 0;
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
    if (((int)uStack_60 == 0) || (local_68 == (code *)0x0)) {
LAB_1441bd152:
      if ((int)uStack_60 == 0) {
        uVar9 = 0;
        goto LAB_1441bcfbb;
      }
      if (local_68 != (code *)0x0) {
        uVar9 = 0;
        (*(code *)**(undefined8 **)local_68)(local_68,0);
        FUN_1446efa72(&local_68,0,0,0x10);
        goto LAB_1441bcfa8;
      }
      uVar9 = 0;
    }
    else {
      cVar6 = (**(code **)(*(longlong *)local_68 + 0x30))();
      uVar4 = DAT_14c9647a8;
      if (cVar6 == '\0') {
        goto LAB_1441bd152;
      }
      if ((DAT_14c9647b4 < 1) &&
         (DAT_14c9647b0 = DAT_14c9647b0 + -1, DAT_14c9647b0 <= (int)DAT_14c9647a8)) {
        if (0 < (int)DAT_14c9647a8) {
          iVar11 = 0;
          do {
            if (((*(int *)(DAT_14c9647a0 + 8 + (longlong)iVar11 * 0x10) == 0) ||
                (plVar12 = *(longlong **)(DAT_14c9647a0 + (longlong)iVar11 * 0x10),
                plVar12 == (longlong *)0x0)) ||
               (cVar6 = (**(code **)(*plVar12 + 0x28))(), cVar6 != '\0')) {
              FUN_14005b288(&DAT_14c9647a0,iVar11);
              FUN_14005b248(&DAT_14c9647a0);
            }
            else {
              iVar11 = iVar11 + 1;
            }
          } while (iVar11 < (int)DAT_14c9647a8);
        }
        DAT_14c9647b0 = 2;
        if (2 < (int)(DAT_14c9647a8 * 2)) {
          DAT_14c9647b0 = DAT_14c9647a8 * 2;
        }
        if ((DAT_14c9647b0 < (int)uVar4) && (DAT_14c9647ac != DAT_14c9647a8)) {
          FUN_14045812c();
        }
      }
      uVar9 = 0;
      if (((int)uStack_60 != 0) && (local_68 != (code *)0x0)) {
        (**(code **)(*(longlong *)local_68 + 0x38))(local_68,&local_78);
        uVar9 = local_78;
      }
      uVar4 = DAT_14c9647a8;
      lVar14 = (longlong)(int)DAT_14c9647a8;
      DAT_14c9647a8 = DAT_14c9647a8 + 1;
      if (DAT_14c9647ac < DAT_14c9647a8) {
        FUN_1447a71f6(&DAT_14c9647a0,uVar4);
      }
      lVar10 = DAT_14c9647a0;
      lVar14 = lVar14 * 0x10;
      *(undefined8 *)(DAT_14c9647a0 + lVar14) = 0;
      *(undefined4 *)(lVar10 + 8 + lVar14) = 0;
      *(code **)(lVar10 + lVar14) = local_68;
      local_68 = (code *)0x0;
      *(int *)(lVar10 + 8 + lVar14) = (int)uStack_60;
LAB_1441bcfa8:
      uStack_60 = uStack_60 & 0xffffffff00000000;
LAB_1441bcfbb:
      if (local_68 != (code *)0x0) {
        FUN_1400020a8();
      }
    }
    *(undefined8 *)(param_1 + 0x198) = uVar9;
    if (local_a0 == (longlong *)0x0) {
LAB_1441bcfe8:
      plVar12 = (longlong *)0x0;
    }
    else {
      iVar11 = (int)local_a0[1];
      do {
        if (iVar11 == 0) goto LAB_1441bcfe8;
        LOCK();
        iVar5 = (int)local_a0[1];
        bVar15 = iVar11 == iVar5;
        if (bVar15) {
          *(int *)(local_a0 + 1) = iVar11 + 1;
          iVar5 = iVar11;
        }
        iVar11 = iVar5;
        UNLOCK();
        plVar12 = local_a0;
      } while (!bVar15);
    }
    lVar14 = 0;
    if (plVar12 != (longlong *)0x0) {
      lVar14 = local_a8;
    }
    local_68 = (code *)0x0;
    uStack_60 = 0;
    local_e0 = local_e0 & 0xffffffffffffff00;
    local_e8 = 0xbf800000;
    local_f8 = CONCAT31(local_f8._1_3_,1);
    local_f0 = &local_68;
    FUN_144230d0e(lVar14,lVar8 + 0x580,lVar7,2);
    if (local_68 != (code *)0x0) {
      FUN_1400020a8();
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
  if (local_a0 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)local_a0 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*local_a0 + 0x10))();
    }
  }
LAB_1441bcc4e:
  if ((local_40 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1441bd1c4 FUN_1441bd1c4 body=380 status=ok
// SIG undefined FUN_1441bd1c4(void)

void FUN_1441bd1c4(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(char *)(param_1 + 0x1b0) != '\x01') goto LAB_1441bd2b1;
  if (*(longlong *)(param_1 + 0x180) != 0) {
    lVar3 = FUN_1441bbee8(param_1);
    if (lVar3 == 0) {
LAB_1441bd2dd:
      uVar4 = 0;
    }
    else {
      lVar3 = FUN_1441bbee8(param_1);
      if (*(longlong *)(lVar3 + 0x30) == 0) goto LAB_1441bd2dd;
      uVar4 = *(undefined8 *)(*(longlong *)(lVar3 + 0x30) + 0x360);
    }
    lVar3 = FUN_145838d74(uVar4);
    if (lVar3 != 0) {
      if (*(longlong *)(param_1 + 0x180) != 0) {
        FUN_14480f766(lVar3 + 8);
      }
      if (*(longlong *)(param_1 + 0x178) != 0) {
        FUN_14480f766(lVar3 + 0x20);
      }
    }
    *(longlong *)(param_1 + 0x178) = 0;
    *(undefined8 *)(param_1 + 0x180) = 0;
  }
  if (((*(longlong *)(param_1 + 0x188) != 0) && (*(longlong *)(param_1 + 400) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_1 + 400) + 8))) {
    FUN_1401cb356();
    local_30 = *(undefined8 *)(param_1 + 0x188);
    local_28 = *(longlong *)(param_1 + 400);
    if (local_28 != 0) {
      LOCK();
      *(int *)(local_28 + 0xc) = *(int *)(local_28 + 0xc) + 1;
      UNLOCK();
    }
    FUN_140d61352(&local_30);
    plVar2 = *(longlong **)(param_1 + 400);
    *(undefined8 *)(param_1 + 0x188) = 0;
    *(undefined8 *)(param_1 + 400) = 0;
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))();
      }
    }
  }
  if (*(longlong *)(param_1 + 0x198) != 0) {
    FUN_14480f766(&DAT_14c9647a0);
    *(undefined8 *)(param_1 + 0x198) = 0;
  }
  if (*(char *)(param_1 + 0x1b0) == '\x01') {
    plVar2 = *(longlong **)(param_1 + 400);
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))();
      }
    }
    *(undefined1 *)(param_1 + 0x1b0) = 0;
  }
LAB_1441bd2b1:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441bd342 FUN_1441bd342 body=432 status=ok
// SIG undefined FUN_1441bd342(void)

void FUN_1441bd342(longlong param_1,byte param_2,int *param_3)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined8 *local_50;
  int local_48;
  code *local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(char *)(param_1 + 0x1b0) == '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_78);
  }
  if (((*param_3 != *(int *)(param_1 + 0x1a0)) || ((param_2 & 0xf7) == 0)) ||
     (param_3[2] != *(int *)(param_1 + 0x1a8))) goto LAB_1441bd384;
  if (param_2 == 1) {
    uVar3 = FUN_1401cb356();
    local_40 = FUN_1441bd688;
    local_38 = (longlong *)((ulonglong)local_38 & 0xffffffff00000000);
    FUN_1441bd506(&local_50,param_1);
    local_58 = 0;
    FUN_1405f67fc(uVar3,&local_40,&local_50,L"LaunchGameThenActivateMission");
    *(code **)(param_1 + 0x188) = local_40;
    local_40 = (code *)0x0;
    plVar2 = *(longlong **)(param_1 + 400);
    *(longlong **)(param_1 + 400) = local_38;
    local_38 = (longlong *)0x0;
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))();
      }
      if (local_38 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)local_38 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_38 + 0x10))();
        }
      }
    }
    if (local_48 != 0) {
      if (local_50 == (undefined8 *)0x0) goto LAB_1441bd4b7;
      (**(code **)*local_50)(local_50,0);
      FUN_1446efa72(&local_50,0,0,0x10);
      local_48 = 0;
    }
    if (local_50 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    FUN_1441bcb1e(param_1);
  }
LAB_1441bd4b7:
  lVar4 = FUN_148a783be(param_1);
  if (lVar4 != 0) {
    lVar4 = FUN_145838d74(lVar4);
    if (lVar4 != 0) {
      if (*(longlong *)(param_1 + 0x180) != 0) {
        FUN_14480f766(lVar4 + 8);
      }
      *(undefined8 *)(param_1 + 0x180) = 0;
      goto LAB_1441bd384;
    }
  }
  FUN_1441bd1c4(param_1);
LAB_1441bd384:
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1441bd506 FUN_1441bd506 body=386 status=ok
// SIG undefined FUN_1441bd506(void)

longlong * FUN_1441bd506(longlong *param_1,longlong param_2,undefined8 *param_3)

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
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_1441bd617:
    *puVar5 = &PTR_LAB_149e02020;
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
    *puVar5 = &PTR_FUN_14b9896a0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_1441bd617;
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
    uVar7 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_149e02020;
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
    *puVar5 = &PTR_FUN_14b9896a0;
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
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  return param_1;
}


