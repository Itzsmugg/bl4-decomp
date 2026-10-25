// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14122cc1a FUN_14122cc1a body=142 status=ok
// SIG undefined FUN_14122cc1a(void)

void FUN_14122cc1a(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*(longlong *)(param_1 + 0x20) != 0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x10);
    if (lVar2 != 0) {
      do {
        if (*(longlong *)(*(longlong *)(param_1 + 8) + -8 + lVar2 * 8) != 0) {
          FUN_1400020a8();
        }
        lVar2 = lVar2 + -1;
      } while (lVar2 != 0);
      lVar2 = *(longlong *)(param_1 + 8);
      lVar1 = lVar2;
      if (((*(ulonglong *)(param_1 + 0x10) & 0x1ffffffffffffe00) != 0) &&
         (lVar1 = *(longlong *)(lVar2 + -8), 0x1f < (ulonglong)((lVar2 + -8) - lVar1))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
    }
    FUN_1400020a8(lVar1);
  }
  *(longlong *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}



// FUNCTION 14122ccaa FUN_14122ccaa body=9 status=ok
// SIG undefined FUN_14122ccaa(void)

undefined4 FUN_14122ccaa(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x3f8);
}



// FUNCTION 14122ccb4 FUN_14122ccb4 body=1380 status=ok
// SIG undefined FUN_14122ccb4(void)

void FUN_14122ccb4(longlong param_1)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  int *piVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  bool bVar13;
  undefined1 auStack_128 [40];
  longlong *local_100;
  int local_f8;
  uint local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 local_e4;
  undefined1 local_e0 [4];
  undefined8 local_dc;
  undefined4 local_d4;
  longlong *local_d0;
  int local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined1 local_60;
  undefined2 local_5f;
  undefined1 local_5d;
  undefined4 local_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  int local_40;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_128;
  lVar6 = FUN_14122d21a();
  if (lVar6 == 0) goto LAB_14122d03e;
  lVar8 = *(longlong *)(lVar6 + 0x10);
  if (lVar8 == 0) {
    uVar9 = FUN_14060ed7a();
    lVar8 = FUN_14477b664(uVar9);
    *(longlong *)(lVar6 + 0x10) = lVar8;
  }
  lVar11 = *(longlong *)(lVar6 + 0x18);
  if (lVar11 == 0) {
    if ((lVar8 == 0) || (*(longlong *)(lVar6 + 8) == 0)) goto LAB_14122d03e;
    plVar10 = *(longlong **)(lVar8 + 0xb8);
    if ((plVar10 == (longlong *)0x0) ||
       (cVar4 = (**(code **)(*plVar10 + 0x108))(plVar10), cVar4 == '\0')) {
      *(undefined8 *)(lVar6 + 0x18) = 0;
      goto LAB_14122d03e;
    }
    uVar9 = (**(code **)(*plVar10 + 0x110))(plVar10);
    lVar11 = FUN_144aff482(uVar9,(longlong *)(lVar6 + 8));
    *(longlong *)(lVar6 + 0x18) = lVar11;
    if (lVar11 == 0) goto LAB_14122d03e;
  }
  if (*(char *)(lVar11 + 0x750) != '\0') goto LAB_14122d03e;
  lVar6 = param_1 + 0x50;
  *(undefined1 *)(param_1 + 0x50) = 10;
  FUN_140c25b54(lVar6);
  lVar8 = *(longlong *)(lVar11 + 0x4d8);
  if ((*(char *)(lVar11 + 0x750) == '\x01') && (lVar8 == 0)) {
    local_30 = DAT_14cb88800;
    local_38 = DAT_14cb887f8;
  }
  else {
    local_f0 = (uint)lVar8;
    uStack_ec = (undefined4)((ulonglong)lVar8 >> 0x20);
    FUN_1401533ba(&local_38,&local_f0,1);
  }
  lVar8 = param_1 + 0x60;
  FUN_144928d62(lVar8,1,&local_38);
  piVar7 = &DAT_14c9485f0;
  if (*(int **)(lVar11 + 8) != (int *)0x0) {
    piVar7 = *(int **)(lVar11 + 8);
  }
  if (((*piVar7 == 0) || (iVar5 = piVar7[1], iVar5 == 0)) || (*piVar7 == DAT_14c948000)) {
LAB_14122d0d7:
    local_40 = DAT_14c948620;
    local_48 = DAT_14c948618;
  }
  else {
    if ((iVar5 < 2) && (piVar7[9] < 1)) {
      piVar7 = piVar7 + 2;
    }
    else {
      piVar7 = *(int **)(piVar7 + 6);
    }
    if (iVar5 < 1) goto LAB_14122d0d7;
    local_40 = piVar7[2];
    local_48 = *(undefined8 *)piVar7;
  }
  FUN_144928d62(lVar8,2,&local_48);
  local_50 = DAT_14cb88980;
  local_58 = DAT_14cb88978;
  FUN_144928d62(lVar8,4);
  cVar4 = FUN_140114204(lVar6);
  if ((cVar4 != '\0') && (*(longlong *)(param_1 + 0x88) == 0)) {
    local_f0 = local_f0 & 0xffffff00;
    uStack_ec = 0;
    uStack_e8 = 0;
    local_e4 = 0;
    local_e0[0] = 0;
    local_d4 = 0;
    local_dc = 0;
    local_c0 = 0xc69c4000;
    local_70 = 0;
    local_68 = 0;
    local_60 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_a8 = 0;
    uStack_a0 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_78 = 0;
    local_5f = 1;
    local_5d = 0;
    local_5c = 0;
    local_100 = (longlong *)0x0;
    local_f8 = 0;
    FUN_1446efa72(&local_100,0,3,0x10);
    local_f8 = 3;
    plVar10 = *(longlong **)(param_1 + 0x10);
    if (plVar10 == (longlong *)0x0) {
LAB_14122d0f9:
      *local_100 = (longlong)&PTR_LAB_14b3e6310;
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 1;
      lVar8 = DAT_14c758608 + 1;
      if (lVar11 == 0) {
        LOCK();
        UNLOCK();
        lVar11 = DAT_14c758608 + 2;
        lVar8 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar8;
      local_100[2] = lVar11;
      *local_100 = (longlong)&PTR_FUN_14b41aa70;
      local_100[3] = 0;
      local_100[4] = 0;
      local_100[5] = (longlong)&LAB_14890c0cc;
    }
    else {
      iVar5 = (int)plVar10[1];
      do {
        if (iVar5 == 0) goto LAB_14122d0f9;
        LOCK();
        iVar3 = (int)plVar10[1];
        bVar13 = iVar5 == iVar3;
        if (bVar13) {
          *(int *)(plVar10 + 1) = iVar5 + 1;
          iVar3 = iVar5;
        }
        iVar5 = iVar3;
        UNLOCK();
      } while (!bVar13);
      lVar8 = *(longlong *)(param_1 + 8);
      LOCK();
      *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
      UNLOCK();
      *local_100 = (longlong)&PTR_LAB_14b3e6310;
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
      local_100[2] = lVar12;
      *local_100 = (longlong)&PTR_FUN_14b41aa70;
      local_100[3] = lVar8;
      local_100[4] = (longlong)plVar10;
      LOCK();
      *(int *)((longlong)plVar10 + 0xc) = *(int *)((longlong)plVar10 + 0xc) + 1;
      UNLOCK();
      local_100[5] = (longlong)&LAB_14890c0cc;
      LOCK();
      plVar1 = plVar10 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar10)(plVar10);
        LOCK();
        piVar7 = (int *)((longlong)plVar10 + 0xc);
        *piVar7 = *piVar7 + -1;
        UNLOCK();
        if (*piVar7 == 0) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
        }
      }
      LOCK();
      plVar1 = plVar10 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar10)(plVar10);
        LOCK();
        piVar7 = (int *)((longlong)plVar10 + 0xc);
        *piVar7 = *piVar7 + -1;
        UNLOCK();
        if (*piVar7 == 0) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
        }
      }
      LOCK();
      plVar1 = plVar10 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar10)(plVar10);
        LOCK();
        piVar7 = (int *)((longlong)plVar10 + 0xc);
        *piVar7 = *piVar7 + -1;
        UNLOCK();
        if (*piVar7 == 0) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
        }
      }
    }
    local_d0 = local_100;
    local_c8 = local_f8;
    if (((((*(int *)(param_1 + 0x1c) == 0) || (uVar2 = *(uint *)(param_1 + 0x18), (int)uVar2 < 0))
         || (DAT_14c9647dc <= (int)uVar2)) ||
        ((plVar10 = (longlong *)
                    ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
         plVar10 == (longlong *)0x0 || ((int)plVar10[2] != *(int *)(param_1 + 0x1c))))) ||
       (((*(uint *)(plVar10 + 1) & 0x10200000) != 0 ||
        (((longlong *)*plVar10 == (longlong *)0x0 ||
         (lVar8 = (**(code **)(*(longlong *)*plVar10 + 0x2b0))(), lVar8 == 0)))))) {
      local_5c = 2;
    }
    else {
      FUN_140983ba6(lVar6,lVar8,&local_f0);
    }
    plVar10 = (longlong *)0x0;
    if ((local_c8 != 0) && (local_d0 != (longlong *)0x0)) {
      (**(code **)(*local_d0 + 0x38))(local_d0,&local_100);
      plVar10 = local_100;
    }
    *(longlong **)(param_1 + 0x88) = plVar10;
    FUN_14122d2a2(param_1,local_e0);
    FUN_1409838b8(&local_f0);
  }
LAB_14122d03e:
  if ((local_28 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14122d21a FUN_14122d21a body=78 status=ok
// SIG undefined FUN_14122d21a(void)

longlong * FUN_14122d21a(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x40);
  if (plVar1 != (longlong *)0x0) {
    lVar2 = (**(code **)(*plVar1 + 8))(plVar1);
    lVar3 = FUN_14122d268();
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



// FUNCTION 14122d268 FUN_14122d268 body=57 status=ok
// SIG undefined FUN_14122d268(void)

void FUN_14122d268(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6bfa8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6bfa8 = FUN_140002ddd(FUN_14652fcdd,uVar1,L"MissionDependencyCondition_Mission");
  }
  return;
}



// FUNCTION 14122d2a2 FUN_14122d2a2 body=181 status=ok
// SIG undefined FUN_14122d2a2(void)

void FUN_14122d2a2(longlong param_1,undefined8 param_2)

{
  char cVar1;
  byte bVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar3 = FUN_14122d21a();
  if (lVar3 != 0) {
    FUN_1403a0728(param_2);
    bVar2 = FUN_1405f6250(local_30);
    cVar1 = *(char *)(lVar3 + 0x20);
    if (cVar1 == '\0') {
      bVar2 = bVar2 == 6;
      goto LAB_14122d2f6;
    }
    if (cVar1 == '\x02') {
      bVar2 = bVar2 == 3 || (bVar2 & 5) == 4;
      goto LAB_14122d2f6;
    }
    if (cVar1 == '\x01') {
      bVar2 = 0x5c >> (bVar2 & 0x1f);
      goto LAB_14122d2f6;
    }
  }
  bVar2 = 0;
LAB_14122d2f6:
  if (*(byte *)(param_1 + 0x38) != (bVar2 & 1)) {
    *(byte *)(param_1 + 0x38) = bVar2 & 1;
    FUN_1447f69b6(param_1 + 0x20);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14122d38c FUN_14122d38c body=1921 status=ok
// SIG undefined FUN_14122d38c(void)

void FUN_14122d38c(longlong param_1,ushort *param_2)

{
  char cVar1;
  char cVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  code *pcVar7;
  byte bVar8;
  char cVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  longlong *plVar13;
  longlong lVar14;
  byte bVar15;
  uint uVar16;
  uint uVar17;
  byte *pbVar18;
  undefined8 unaff_RBX;
  float fVar19;
  uint uVar20;
  undefined1 auStack_88 [37];
  byte local_63;
  byte local_62;
  char local_61;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar6 = *(longlong **)(param_1 + 0x238);
  pcVar7 = *(code **)(*plVar6 + 0x5e8);
  if (pcVar7 == FUN_140972dde) {
    lVar14 = plVar6[0x76];
    if (lVar14 == 0) {
      pcVar7 = *(code **)(*plVar6 + 0x5f8);
      if (pcVar7 == FUN_144784df4) {
        if (*(code **)(plVar6[0x784] + 0x18) == (code *)&LAB_144904684) {
          if (*(int *)((longlong)plVar6 + 0x75b4) != 0) {
            uVar16 = *(uint *)(plVar6 + 0xeb6);
            lVar14 = 0;
            if (((int)uVar16 < 0) || (DAT_14c9647dc <= (int)uVar16)) goto LAB_14122d46a;
            plVar13 = (longlong *)
                      ((ulonglong)((uVar16 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar16 >> 0x10) * 8));
            if ((plVar13 != (longlong *)0x0) &&
               (((int)plVar13[2] == *(int *)((longlong)plVar6 + 0x75b4) &&
                ((*(uint *)(plVar13 + 1) & 0x10200000) == 0)))) {
              if ((*(uint *)(plVar13 + 1) & 0x10200000) == 0) {
                lVar14 = *plVar13;
              }
              else {
                lVar14 = 0;
              }
              lVar14 = lVar14 + 0x110;
              goto LAB_14122d925;
            }
          }
        }
        else {
          lVar14 = (**(code **)(plVar6[0x784] + 0x18))(plVar6 + 0x784);
LAB_14122d925:
          if (lVar14 != 0) {
            lVar14 = *(longlong *)(lVar14 + 0x20);
            goto LAB_14122d932;
          }
        }
      }
      else {
        lVar14 = (*pcVar7)();
LAB_14122d932:
        if (lVar14 != 0) {
          lVar14 = *(longlong *)(lVar14 + 0x3b0);
          goto LAB_14122d46a;
        }
      }
      lVar14 = 0;
    }
  }
  else {
    lVar14 = (*pcVar7)();
  }
LAB_14122d46a:
  cVar9 = *(char *)(param_1 + 0x243);
  *(byte *)(param_1 + 0x240) = *(byte *)(param_1 + 0x240) & 0xfd | (lVar14 != 0) * '\x02';
  cVar1 = *(char *)(param_1 + 0x244);
  cVar2 = *(char *)(param_1 + 0x245);
  iVar5 = *(int *)(param_1 + 0x2f0);
  bVar3 = *(byte *)(param_1 + 0x241);
  *(byte *)(param_1 + 0x243) = (byte)*param_2 & 3;
  *(byte *)(param_1 + 0x244) = (byte)*param_2 >> 2 & 0xf;
  *(byte *)(param_1 + 0x245) = (byte)*param_2 >> 6;
  *(uint *)(param_1 + 0x2f0) = *(byte *)((longlong)param_2 + 1) & 0xf;
  bVar15 = (byte)(*param_2 >> 0xd) & 1;
  *(byte *)(param_1 + 0x241) = bVar3 & 0xfe | bVar15;
  bVar8 = (byte)(*param_2 >> 8);
  *(byte *)(param_1 + 0x241) = bVar3 & 0xfa | bVar15 | bVar8 >> 5 & 4;
  if ((bool)-((char)bVar8 >> 7) != ((bVar3 >> 2 & 1) != 0)) {
    FUN_1409b52ac(*(longlong *)(param_1 + 0x238) + 0x3a90);
  }
  uVar16 = (uint)param_2[1] << 0xd;
  uVar17 = uVar16 & 0xf800000;
  if (uVar17 == 0xf800000) {
    fVar19 = (float)(uVar16 | 0x70000000);
  }
  else if (uVar17 == 0) {
    fVar19 = (float)(uVar16 | 0x38800000) + -6.1035156e-05;
  }
  else {
    fVar19 = (float)((uVar16 & 0xfffe000) + 0x38000000);
  }
  uVar10 = (int)(short)param_2[1] & 0x80000000;
  if (1e-08 < ABS(*(float *)(param_1 + 0x33c) - (float)((uint)fVar19 | uVar10))) {
LAB_14122d629:
    if (uVar17 == 0xf800000) {
      fVar19 = (float)(uVar16 | 0x70000000);
    }
    else if (uVar17 == 0) {
      fVar19 = (float)(uVar16 | 0x38800000) + -6.1035156e-05;
    }
    else {
      fVar19 = (float)((uVar16 & 0xfffe000) + 0x38000000);
    }
    *(uint *)(param_1 + 0x33c) = (uint)fVar19 | uVar10;
    uVar16 = (uint)param_2[2] << 0xd;
    if ((uVar16 & 0xf800000) == 0xf800000) {
      fVar19 = (float)(uVar16 | 0x70000000);
    }
    else if ((uVar16 & 0xf800000) == 0) {
      fVar19 = (float)(uVar16 | 0x38800000) + -6.1035156e-05;
    }
    else {
      fVar19 = (float)((uVar16 & 0xfffe000) + 0x38000000);
    }
    *(uint *)(param_1 + 0x340) = (int)(short)param_2[2] & 0x80000000U | (uint)fVar19;
    lVar14 = FUN_1447210f0(*(undefined8 *)(param_1 + 0x238));
    *(float *)(param_1 + 0x344) = (float)*(double *)(lVar14 + 0x6d0);
    if (*(char *)(param_1 + 0x245) == '\x01') {
      FUN_1440fd24e(param_1 + 0x1c0,*(undefined4 *)(param_1 + 0x33c));
    }
  }
  else {
    uVar20 = (uint)param_2[2] << 0xd;
    if ((uVar20 & 0xf800000) == 0xf800000) {
      fVar19 = (float)(uVar20 | 0x70000000);
    }
    else if ((uVar20 & 0xf800000) == 0) {
      fVar19 = (float)(uVar20 | 0x38800000) + -6.1035156e-05;
    }
    else {
      fVar19 = (float)((uVar20 & 0xfffe000) + 0x38000000);
    }
    if (1e-08 < ABS(*(float *)(param_1 + 0x340) -
                    (float)((int)(short)param_2[2] & 0x80000000U | (uint)fVar19)))
    goto LAB_14122d629;
  }
  uVar11 = FUN_140843f56(param_1);
  bVar8 = (byte)uVar11;
  bVar3 = *(byte *)(param_1 + 0x241) >> 1;
  if (((bVar3 & 1) == 0 & ~bVar8) == 0 && (*param_2 >> 0xe & 1) != (bVar3 & 1)) {
    FUN_146622ec0(param_1,*param_2 >> 0xe & 1);
  }
  if (cVar9 == *(char *)(param_1 + 0x243)) goto LAB_14122d9ad;
  if (((bVar8 == 0) || ((*(byte *)(param_1 + 0x240) & 1) != 0)) ||
     (cVar9 != '\0' || *(char *)(param_1 + 0x243) == '\0')) {
    if (cVar9 == '\x02') {
      local_63 = *(byte *)(param_1 + 0x240) & 1;
      local_61 = '\0';
      local_62 = bVar8;
      FUN_1447cd2ec(param_1 + 0x138);
    }
  }
  else {
    lVar14 = FUN_140cf8aa6(*(undefined8 *)(param_1 + 0x238));
    if (lVar14 != 0) {
      FUN_1410ef0a8(lVar14);
    }
  }
  if (*(char *)(param_1 + 0x243) == '\x02') {
    local_63 = *(byte *)(param_1 + 0x240);
    if (cVar9 == '\0') {
      local_63 = local_63 & 1;
      pbVar18 = &local_63;
      local_62 = bVar8;
      FUN_1447cd2ec(param_1);
      FUN_1440fd31a(param_1 + 0x10,
                    CONCAT71((int7)((ulonglong)pbVar18 >> 8),*(undefined1 *)(param_1 + 0x240)) &
                    0xffffffffffffff01,uVar11);
      local_63 = *(byte *)(param_1 + 0x240);
    }
    local_63 = local_63 & 1;
    local_61 = '\x01';
    local_62 = bVar8;
    FUN_1447cd2ec(param_1 + 0x138);
LAB_14122d85c:
    cVar4 = *(char *)(param_1 + 0x244);
    if ((cVar4 != '\0') && ((cVar1 != cVar4 || (cVar1 == '\x05' && cVar9 == '\0')))) {
      local_63 = *(byte *)(param_1 + 0x240) & 1;
      pbVar18 = &local_63;
      local_62 = bVar8;
      local_61 = cVar4;
      FUN_1447cd2ec(param_1 + 0x40);
      FUN_1440fd3c6(param_1 + 0x50,
                    CONCAT71((int7)((ulonglong)pbVar18 >> 8),*(undefined1 *)(param_1 + 0x240)) &
                    0xffffffffffffff01,uVar11,*(undefined1 *)(param_1 + 0x244));
    }
    FUN_140843a9c(param_1);
    if (*(char *)(param_1 + 0x243) == '\0') {
      local_61 = *(char *)(param_1 + 0x244);
      local_63 = *(byte *)(param_1 + 0x240) & 1;
      pbVar18 = &local_63;
      local_62 = bVar8;
      FUN_1447cd2ec(param_1 + 0x68);
      FUN_1440fd3c6(param_1 + 0x78,
                    CONCAT71((int7)((ulonglong)pbVar18 >> 8),*(undefined1 *)(param_1 + 0x240)) &
                    0xffffffffffffff01,uVar11,*(undefined1 *)(param_1 + 0x244));
    }
  }
  else {
    if (*(char *)(param_1 + 0x243) != '\x01') goto LAB_14122d85c;
    lVar14 = FUN_1447210f0(*(undefined8 *)(param_1 + 0x238));
    *(float *)(param_1 + 0x2d8) = (float)*(double *)(lVar14 + 0x6d0);
    if (*(longlong *)(param_1 + 0x230) == 0) {
      uVar12 = 1;
    }
    else {
      uVar12 = *(undefined4 *)(*(longlong *)(param_1 + 0x230) + 0x58);
    }
    *(undefined4 *)(param_1 + 0x2f4) = uVar12;
    FUN_140843a9c(param_1);
    local_63 = *(byte *)(param_1 + 0x240) & 1;
    pbVar18 = &local_63;
    local_62 = bVar8;
    FUN_1447cd2ec(param_1);
    FUN_1440fd31a(param_1 + 0x10,
                  CONCAT71((int7)((ulonglong)pbVar18 >> 8),*(undefined1 *)(param_1 + 0x240)) &
                  0xffffffffffffff01,uVar11);
  }
  FUN_1440fd480(param_1 + 0x28,*(undefined1 *)(param_1 + 0x243),
                CONCAT71((int7)((ulonglong)unaff_RBX >> 8),cVar9) & 0xffffffff);
  FUN_1409b52ac(*(longlong *)(param_1 + 0x238) + 0x3a90);
LAB_14122d9ad:
  cVar9 = *(char *)(param_1 + 0x245);
  if (cVar2 != cVar9) {
    if (cVar2 == '\x01') {
      local_63 = *(byte *)(param_1 + 0x240) & 1;
      local_61 = *(char *)(param_1 + 0x243) == '\0';
      pbVar18 = &local_63;
      local_62 = bVar8;
      FUN_1447cd2ec(param_1 + 0xb8);
      FUN_148d0d8dc(param_1 + 200,
                    CONCAT71((int7)((ulonglong)pbVar18 >> 8),*(undefined1 *)(param_1 + 0x240)) &
                    0xffffffffffffff01,uVar11,*(char *)(param_1 + 0x243) == '\0');
      cVar9 = *(char *)(param_1 + 0x245);
    }
    if (cVar9 == '\x01') {
      local_63 = *(byte *)(param_1 + 0x240) & 1;
      pbVar18 = &local_63;
      local_62 = bVar8;
      FUN_1447cd2ec(param_1 + 0x90);
      FUN_1440fd31a(param_1 + 0xa0,
                    CONCAT71((int7)((ulonglong)pbVar18 >> 8),*(undefined1 *)(param_1 + 0x240)) &
                    0xffffffffffffff01,uVar11);
    }
  }
  if (*(int *)(param_1 + 0x2f0) != iVar5) {
    FUN_1409b52ac(*(longlong *)(param_1 + 0x238) + 0x3a90);
  }
  cVar9 = (**(code **)(**(longlong **)(param_1 + 0x238) + 0x700))();
  if (cVar9 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_88);
  }
  if ((local_60 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14122db38 FUN_14122db38 body=43 status=ok
// SIG undefined FUN_14122db38(void)

void FUN_14122db38(uint *param_1,undefined8 *param_2)

{
  *param_2 = *(undefined8 *)
              (*(longlong *)(&DAT_14c952ad0 + (longlong)((int)*param_1 >> 0xd) * 8) +
              (ulonglong)(*param_1 & 0x1fff) * 0xc);
  return;
}



// FUNCTION 14122db64 FUN_14122db64 body=109 status=ok
// SIG undefined FUN_14122db64(void)

void FUN_14122db64(uint *param_1,int *param_2,int param_3)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  
  uVar1 = *param_1;
  lVar2 = (ulonglong)((uVar1 & 0x1fff) * 0xc) +
          *(longlong *)(&DAT_14c952ad0 + (longlong)((int)uVar1 >> 0xd) * 8);
  iVar3 = 0;
  if ((-1 < param_3) && (param_3 < *(int *)(lVar2 + 8))) {
    lVar4 = lVar2 + 0xc;
    if (param_3 != 0) {
      do {
        param_3 = param_3 + *(int *)(lVar4 + 8) + -1;
        lVar4 = lVar4 + 0xc;
      } while (0 < param_3);
    }
    iVar3 = uVar1 + (int)((ulonglong)(lVar4 - lVar2) >> 2) * -0x55555555;
  }
  *param_2 = iVar3;
  return;
}



// FUNCTION 14122dbd2 FUN_14122dbd2 body=170 status=ok
// SIG undefined FUN_14122dbd2(void)

void FUN_14122dbd2(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  bool bVar9;
  
  plVar7 = *(longlong **)(param_1 + 0x20);
  if ((longlong)*(int *)(param_1 + 0x28) == 0) {
    uVar6 = 0;
  }
  else {
    plVar8 = plVar7 + (longlong)*(int *)(param_1 + 0x28) * 2;
    do {
      plVar3 = (longlong *)plVar7[1];
      if (plVar3 != (longlong *)0x0) {
        iVar5 = (int)plVar3[1];
        do {
          if (iVar5 == 0) goto LAB_14122dc20;
          LOCK();
          iVar4 = (int)plVar3[1];
          bVar9 = iVar5 == iVar4;
          if (bVar9) {
            *(int *)(plVar3 + 1) = iVar5 + 1;
            iVar4 = iVar5;
          }
          iVar5 = iVar4;
          UNLOCK();
        } while (!bVar9);
        if ((longlong *)*plVar7 != (longlong *)0x0) {
          (**(code **)(*(longlong *)*plVar7 + 0x20))();
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
LAB_14122dc20:
      plVar7 = plVar7 + 2;
    } while (plVar7 != plVar8);
    uVar6 = *(undefined4 *)(param_1 + 0x28);
    plVar7 = *(longlong **)(param_1 + 0x20);
  }
  FUN_14122dc7c(plVar7,uVar6);
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(int *)(param_1 + 0x2c) != 0) {
    FUN_14584b848(param_1 + 0x20);
  }
  FUN_14584b878(param_1);
  return;
}



// FUNCTION 14122dc7c FUN_14122dc7c body=58 status=ok
// SIG undefined FUN_14122dc7c(void)

void FUN_14122dc7c(longlong param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 != 0) {
    plVar3 = (longlong *)(param_1 + 8);
    do {
      plVar2 = (longlong *)*plVar3;
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar2 + 0x10))();
        }
      }
      plVar3 = plVar3 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14122dcb6 FUN_14122dcb6 body=1019 status=ok
// SIG undefined FUN_14122dcb6(void)

void FUN_14122dcb6(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  undefined1 *puVar7;
  longlong *plVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  bool bVar14;
  undefined1 auStack_a8 [32];
  char local_88 [4];
  longlong local_84;
  uint local_7c;
  undefined1 local_78 [32];
  undefined1 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_58 = (undefined1 *)0x0;
  local_50 = 0x400000000;
  lVar11 = param_1[0x1d];
  if ((longlong)(int)lVar11 != 0) {
    lVar2 = param_1[0x1c];
    lVar13 = 0;
    do {
      uVar12 = local_50;
      iVar1 = *(int *)(lVar2 + 4 + lVar13);
      if (((((iVar1 != 0) && (uVar5 = *(uint *)(lVar2 + lVar13), -1 < (int)uVar5)) &&
           ((int)uVar5 < DAT_14c9647dc)) &&
          ((plVar8 = (longlong *)
                     ((ulonglong)((uVar5 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8)),
           plVar8 != (longlong *)0x0 && ((int)plVar8[2] == iVar1)))) &&
         (((*(uint *)(plVar8 + 1) & 0x10200000) == 0 && (lVar3 = *plVar8, lVar3 != 0)))) {
        lVar10 = (longlong)(int)local_50;
        uVar5 = (int)local_50 + 1;
        local_50 = CONCAT44(local_50._4_4_,uVar5);
        if (local_50._4_4_ < uVar5) {
          FUN_1468740ae(local_78,uVar12 & 0xffffffff);
        }
        puVar7 = local_58;
        if (local_58 == (undefined1 *)0x0) {
          puVar7 = local_78;
        }
        *(longlong *)(puVar7 + lVar10 * 8) = lVar3;
      }
      lVar13 = lVar13 + 8;
    } while ((longlong)(int)lVar11 * 8 != lVar13);
  }
  if (param_1[5] == 0) goto LAB_14122df96;
  uVar12 = local_50 & 0xffffffff;
  uVar9 = 0;
  uVar5 = 0;
  if (0 < (int)local_50) {
    cVar4 = (char)param_1[0x19];
    if (cVar4 == '\0') {
      puVar7 = local_58;
      if (local_58 == (undefined1 *)0x0) {
        puVar7 = local_78;
      }
      uVar5 = 0x80000000;
      lVar11 = 0;
      do {
        (**(code **)(*param_1 + 0x28))(param_1,local_88,*(undefined8 *)(puVar7 + lVar11));
        if (local_88[0] == '\x03') {
          bVar14 = local_84 == 0;
LAB_14122ddfe:
          uVar6 = (uint)!bVar14;
        }
        else {
          uVar6 = local_7c;
          if ((local_88[0] != '\x02') && (uVar6 = 0, local_88[0] == '\x01')) {
            bVar14 = local_7c == 0;
            goto LAB_14122ddfe;
          }
        }
        if ((int)uVar5 < (int)uVar6) {
          uVar5 = uVar6;
        }
        lVar11 = lVar11 + 8;
      } while (uVar12 << 3 != lVar11);
    }
    else if (cVar4 == '\x01') {
      puVar7 = local_58;
      if (local_58 == (undefined1 *)0x0) {
        puVar7 = local_78;
      }
      uVar5 = 0x7fffffff;
      lVar11 = 0;
      do {
        (**(code **)(*param_1 + 0x28))(param_1,local_88,*(undefined8 *)(puVar7 + lVar11));
        if (local_88[0] == '\x03') {
          bVar14 = local_84 == 0;
LAB_14122de8b:
          uVar6 = (uint)!bVar14;
        }
        else {
          uVar6 = local_7c;
          if ((local_88[0] != '\x02') && (uVar6 = 0, local_88[0] == '\x01')) {
            bVar14 = local_7c == 0;
            goto LAB_14122de8b;
          }
        }
        if ((int)uVar6 <= (int)uVar5) {
          uVar5 = uVar6;
        }
        lVar11 = lVar11 + 8;
      } while (uVar12 << 3 != lVar11);
    }
    else if (cVar4 == '\x02') {
      puVar7 = local_58;
      if (local_58 == (undefined1 *)0x0) {
        puVar7 = local_78;
      }
      lVar11 = 0;
      do {
        (**(code **)(*param_1 + 0x28))(param_1,local_88,*(undefined8 *)(puVar7 + lVar11));
        if (local_88[0] == '\x03') {
          bVar14 = local_84 == 0;
LAB_14122df04:
          uVar6 = (uint)!bVar14;
        }
        else {
          uVar6 = local_7c;
          if ((local_88[0] != '\x02') && (uVar6 = 0, local_88[0] == '\x01')) {
            bVar14 = local_7c == 0;
            goto LAB_14122df04;
          }
        }
        uVar5 = uVar5 + uVar6;
        lVar11 = lVar11 + 8;
      } while (uVar12 << 3 != lVar11);
    }
  }
  local_88[0] = '\0';
  local_84 = 0;
  local_7c = 0;
  if (*(char *)((longlong)param_1 + 0xc9) == '\0') {
    local_88[0] = '\x01';
    local_7c = (uint)(uVar5 != 0);
    plVar8 = &DAT_14cb7c580;
    if (uVar5 != 0) {
      plVar8 = &DAT_14cb7c588;
    }
    local_84 = *plVar8;
LAB_14122df81:
    uVar9 = (uint)(local_7c != 0);
    cVar4 = '\x01';
  }
  else if (*(char *)((longlong)param_1 + 0xc9) == '\x01') {
    if (((char)param_1[0x1a] == '\x01') && ((int)*(uint *)((longlong)param_1 + 0xcc) <= (int)uVar5))
    {
      uVar5 = *(uint *)((longlong)param_1 + 0xcc);
    }
    FUN_140e1bd88(local_88,uVar5);
    if (local_88[0] == '\x03') {
      uVar9 = (uint)(local_84 != 0);
      cVar4 = '\x03';
    }
    else if (local_88[0] == '\x02') {
      uVar9 = local_7c;
      cVar4 = '\x02';
    }
    else {
      cVar4 = local_88[0];
      if (local_88[0] == '\x01') goto LAB_14122df81;
    }
  }
  else {
    cVar4 = '\0';
  }
  if (uVar9 == *(uint *)(param_1 + 0x1b)) goto LAB_14122df96;
  if (cVar4 == '\x03') {
    bVar14 = local_84 == 0;
LAB_14122dfd8:
    uVar5 = (uint)!bVar14;
  }
  else {
    uVar5 = local_7c;
    if (cVar4 != '\x02') {
      if (cVar4 == '\x01') {
        bVar14 = local_7c == 0;
        goto LAB_14122dfd8;
      }
      uVar5 = 0;
    }
  }
  *(uint *)(param_1 + 0x1b) = uVar5;
  plVar8 = (longlong *)FUN_14479d2ce(param_1[3] + 0x18);
  if ((plVar8 != (longlong *)0x0) && (lVar11 = (**(code **)(*plVar8 + 0x2b0))(plVar8), lVar11 != 0))
  {
    FUN_140bc53f1(param_1 + 10,local_88,lVar11,0);
  }
LAB_14122df96:
  if (local_58 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14122e0b2 FUN_14122e0b2 body=94 status=ok
// SIG undefined FUN_14122e0b2(void)

void FUN_14122e0b2(longlong *param_1)

{
  FUN_14122e148();
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  FUN_14122e110(param_1 + 7);
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14122e110 FUN_14122e110 body=55 status=ok
// SIG undefined FUN_14122e110(void)

void FUN_14122e110(longlong *param_1)

{
  FUN_14122e1b2(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14122e148 FUN_14122e148 body=105 status=ok
// SIG undefined FUN_14122e148(void)

void FUN_14122e148(longlong param_1)

{
  if (*(int *)(param_1 + 0x1c) < 0) {
    *(undefined4 *)(param_1 + 0x18) = 0;
    FUN_147702ce4(param_1 + 0x10,0);
  }
  else {
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) < 0) {
    FUN_147702ce4(param_1,0);
  }
  if (*(int *)(param_1 + 0x40) == *(int *)(param_1 + 0x6c)) {
    return;
  }
  FUN_147702d44(param_1 + 0x38);
  FUN_147702e88(param_1 + 0x38);
  return;
}



// FUNCTION 14122e1b2 FUN_14122e1b2 body=416 status=ok
// SIG undefined FUN_14122e1b2(void)

void FUN_14122e1b2(longlong *param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  uint uVar5;
  uint uVar6;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  longlong *local_68;
  uint local_60;
  int iStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  longlong *local_48;
  uint local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = param_1 + 2;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  local_38 = 0;
  local_48 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_50);
  }
  local_70 = local_50;
  local_68 = local_48;
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_58 = local_38;
  local_54 = local_34;
  local_78 = param_1;
  if (iStack_3c < (int)local_48[3]) {
    do {
      plVar4 = *(longlong **)(*local_78 + 0x10 + (longlong)iStack_5c * 0x20);
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar4 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar4)(plVar4);
          LOCK();
          piVar3 = (int *)((longlong)plVar4 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
          }
        }
      }
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < (int)local_68[3]);
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
  uVar6 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar6) ||
     (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
    uVar5 = 0x80;
    if (0x80 < (int)uVar6) {
      uVar5 = uVar6;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar5;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14122e354 FUN_14122e354 body=31 status=ok
// SIG undefined FUN_14122e354(void)

undefined8 FUN_14122e354(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14122e37c FUN_14122e37c body=390 status=ok
// SIG undefined FUN_14122e37c(void)

undefined8 * FUN_14122e37c(undefined8 *param_1)

{
  undefined1 uVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0x1c) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0x1e) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *param_1 = &PTR_FUN_14ac3d210;
  FUN_14044066a(param_1 + 7,0x14,1);
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0x1010101;
  *(undefined1 *)((longlong)param_1 + 0x7c) = 1;
  *param_1 = &PTR_FUN_14b0d2e40;
  param_1[0x10] = 0;
  FUN_1446f470e(&local_38,L"ai_target",1);
  param_1[0x11] = 0;
  *(undefined2 *)(param_1 + 0x15) = 0x18;
  param_1[0x12] = local_38;
  *(undefined4 *)(param_1 + 0x13) = 0xf00000d0;
  param_1[0x14] = 0;
  *(undefined1 *)(param_1 + 0x16) = 10;
  uVar1 = 10;
  if ((DAT_14c9a9054 & 0x20) != 0) {
    uVar1 = 0;
  }
  *(undefined1 *)(param_1 + 0x17) = uVar1;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined1 *)((longlong)param_1 + 0xc4) = 0;
  param_1[0x19] = 0xbf80000000000000;
  *(undefined4 *)(param_1 + 0x1a) = 0xc4750000;
  *(undefined1 *)((longlong)param_1 + 0xd4) = 0;
  param_1[0x21] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *(undefined2 *)(param_1 + 0x25) = 4;
  *(undefined4 *)(param_1 + 0x22) = 0x42480000;
  *(undefined1 *)(param_1 + 0x26) = 3;
  *(char *)(param_1 + 0x27) = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  *(undefined1 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0x43fa0000;
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14122e504 FUN_14122e504 body=3311 status=ok
// SIG undefined FUN_14122e504(void)

void FUN_14122e504(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  int iVar5;
  char cVar6;
  int *_Src;
  undefined8 *puVar7;
  undefined4 *_Src_00;
  undefined1 *_Src_01;
  undefined1 auStack_198 [32];
  ulonglong local_178;
  undefined8 local_170;
  undefined1 *local_168;
  code *local_160;
  undefined1 local_158 [4];
  undefined4 local_154;
  undefined4 local_b4;
  undefined4 local_88;
  int local_58;
  undefined4 local_54;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_198;
  local_40 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_168 = (undefined1 *)FUN_1446ddbd2();
      local_160 = FUN_1468d96f0;
      local_170 = 0;
      local_178 = 0x4008001;
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
          cVar6 = (*pcVar3)(plVar1);
          if (cVar6 != '\0') {
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_40);
            goto LAB_14122e601;
          }
        }
        puVar7 = (undefined8 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (puVar7 != &local_40) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_40,puVar7,(int)plVar1[6]);
          }
          else {
            memcpy(&local_40,puVar7,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_170 = CONCAT44(local_170._4_4_,(int)plVar1[6]);
        local_178 = local_178 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,&local_40,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_40,lVar2);
      }
    }
    else {
      puVar7 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar7;
        puVar7 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar1);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
LAB_14122e601:
  local_48 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_168 = (undefined1 *)FUN_1446ddbd2();
      local_160 = FUN_1468d96f0;
      local_170 = 0;
      local_178 = 0x4008001;
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
          cVar6 = (*pcVar3)(plVar1);
          if (cVar6 != '\0') {
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_48);
            goto LAB_14122e6d7;
          }
        }
        puVar7 = (undefined8 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (puVar7 != &local_48) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_48,puVar7,(int)plVar1[6]);
          }
          else {
            memcpy(&local_48,puVar7,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_170 = CONCAT44(local_170._4_4_,(int)plVar1[6]);
        local_178 = local_178 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,&local_48,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_48,lVar2);
      }
    }
    else {
      puVar7 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar7;
        puVar7 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar1);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
LAB_14122e6d7:
  local_50 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_168 = (undefined1 *)FUN_1446ddbd2();
      local_160 = FUN_1468d96f0;
      local_170 = 0;
      local_178 = 0x4008001;
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
          cVar6 = (*pcVar3)(plVar1);
          if (cVar6 != '\0') {
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_50);
            goto LAB_14122e7ad;
          }
        }
        puVar7 = (undefined8 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (puVar7 != &local_50) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_50,puVar7,(int)plVar1[6]);
          }
          else {
            memcpy(&local_50,puVar7,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_170 = CONCAT44(local_170._4_4_,(int)plVar1[6]);
        local_178 = local_178 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,&local_50,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_50,lVar2);
      }
    }
    else {
      puVar7 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar7;
        puVar7 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar1);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
LAB_14122e7ad:
  local_54 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952210) {
    FUN_144b3d300(&DAT_14c952210);
    if (DAT_14c952210 == -1) {
      FUN_14475b26a();
      local_160 = FUN_1405ebbb2;
      local_168 = &DAT_14c9520b8;
      local_170 = 0;
      local_178 = 0x1008081;
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
          cVar6 = (*pcVar3)(plVar1);
          if (cVar6 != '\0') {
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_54);
            goto LAB_14122e882;
          }
        }
        _Src_00 = (undefined4 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (_Src_00 != &local_54) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_54,_Src_00,(int)plVar1[6]);
          }
          else {
            memcpy(&local_54,_Src_00,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_170 = CONCAT44(local_170._4_4_,(int)plVar1[6]);
        local_178 = local_178 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,&local_54,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_54,lVar2);
      }
    }
    else {
      puVar7 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar7;
        puVar7 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar1);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_54);
  }
LAB_14122e882:
  local_58 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951d20) {
    FUN_144b3d300(&DAT_14c951d20);
    if (DAT_14c951d20 == -1) {
      local_168 = (undefined1 *)FUN_1446ddbd2();
      local_160 = FUN_14067a048;
      local_170 = 0;
      local_178 = 0x28001;
      FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0);
      atexit(FUN_142811fe5);
      _Init_thread_footer(&DAT_14c951d20);
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
          cVar6 = (*pcVar3)(plVar1);
          if (cVar6 != '\0') {
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_58);
            goto LAB_14122e955;
          }
        }
        _Src = (int *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (_Src != &local_58) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_58,_Src,(int)plVar1[6]);
          }
          else {
            memcpy(&local_58,_Src,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_170 = CONCAT44(local_170._4_4_,(int)plVar1[6]);
        local_178 = local_178 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,&local_58,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_58,lVar2);
      }
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
LAB_14122e955:
  iVar5 = local_58;
  memset(local_158,0,0x100);
  local_88 = 0xffffffff;
  local_154 = 0x3f800000;
  local_b4 = 0xffffffff;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
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
          cVar6 = (*pcVar3)(plVar1);
          if (cVar6 != '\0') {
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,local_158);
            goto LAB_14122ea2c;
          }
        }
        _Src_01 = (undefined1 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (_Src_01 != local_158) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,local_158,_Src_01,(int)plVar1[6]);
          }
          else {
            memcpy(local_158,_Src_01,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_170 = CONCAT44(local_170._4_4_,(int)plVar1[6]);
        local_178 = local_178 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,local_158,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,local_158,lVar2);
      }
    }
    else {
      puVar7 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar7;
        puVar7 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar1);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_158);
  }
LAB_14122ea2c:
  local_168 = local_158;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    local_168 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_170 = CONCAT71(local_170._1_7_,iVar5 != 0);
  local_178 = CONCAT44(local_178._4_4_,local_54);
  (**(code **)(*param_1 + 0x38))(param_1,local_40,local_48,local_50);
  if ((local_38 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14122f1f4 FUN_14122f1f4 body=45 status=ok
// SIG undefined FUN_14122f1f4(void)

void FUN_14122f1f4(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x10))();
  FUN_14122f222(uVar1,param_2,param_3,param_4);
  return;
}



// FUNCTION 14122f222 FUN_14122f222 body=596 status=ok
// SIG undefined FUN_14122f222(void)

void FUN_14122f222(longlong param_1,undefined8 param_2,undefined8 **param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  ulonglong *puVar3;
  longlong lVar4;
  int iVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  undefined8 uVar9;
  int *piVar10;
  bool bVar11;
  undefined1 auStack_88 [40];
  ulonglong *local_60;
  undefined4 local_54;
  ulonglong *local_50;
  longlong local_48;
  undefined1 local_3c [4];
  undefined8 **local_38;
  undefined4 *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((*(undefined8 ***)(param_1 + 0x5a8) != param_3) &&
     ((*(byte *)((longlong)*(undefined8 ***)(param_1 + 0x5a8) + 0x65) & 2) == 0)) {
    local_50 = (ulonglong *)param_3;
    if ((param_3 == (undefined8 **)0x0) || (DAT_14c950c29 == 0)) {
      if (param_3 == (undefined8 **)0x0) goto LAB_14122f2a7;
    }
    else {
      FUN_1456cec3c(param_3);
    }
    uVar9 = FUN_1405fa766();
    local_48 = FUN_144718840(param_3,uVar9);
    if ((local_48 != 0 && param_3 != (undefined8 **)0x0) &&
       (cVar6 = FUN_143d913d8(param_1,&local_50,param_4), cVar6 != '\0')) {
      if (DAT_14c950c29 == 1) {
        FUN_1456cec3c(param_3);
      }
      local_38 = param_3;
      if ((DAT_14c950c29 & 1) != 0) {
        FUN_1456cec3c(param_3);
      }
      plVar2 = (longlong *)(param_1 + 0x160);
      if ((DAT_14c950c29 & 1) != 0) {
        FUN_1456cec3c(param_3);
      }
      uVar7 = ((uint)((ulonglong)param_3 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_3 >> 4)) *
              -0x7a143595;
      uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
      iVar8 = FUN_1488c0218(plVar2,uVar7 >> 0x10 ^ uVar7,&local_38);
      if (iVar8 != -1) {
        if ((*plVar2 + (longlong)iVar8 * 0x18 != 0) &&
           (piVar10 = (int *)(*plVar2 + (longlong)iVar8 * 0x18 + 8), piVar10 != (int *)0x0)) {
          *piVar10 = *piVar10 + 1;
          goto LAB_14122f2a7;
        }
      }
      local_54 = 1;
      local_60 = (ulonglong *)param_3;
      if (DAT_14c950c29 == 1) {
        FUN_1456cec3c(param_3);
      }
      local_38 = &local_60;
      local_30 = &local_54;
      FUN_1488c02e8(plVar2,local_3c);
      plVar2 = *(longlong **)(param_1 + 0x5e0);
      if (plVar2 != (longlong *)0x0) {
        iVar8 = (int)plVar2[1];
        do {
          if (iVar8 == 0) goto LAB_14122f3c5;
          LOCK();
          iVar5 = (int)plVar2[1];
          bVar11 = iVar8 == iVar5;
          if (bVar11) {
            *(int *)(plVar2 + 1) = iVar8 + 1;
            iVar5 = iVar8;
          }
          iVar8 = iVar5;
          UNLOCK();
        } while (!bVar11);
        if (*(longlong *)(param_1 + 0x5d8) != 0) {
          FUN_1405fac16(*(longlong *)(param_1 + 0x5d8),param_1 + 0x598);
        }
        LOCK();
        plVar1 = plVar2 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar2)(plVar2);
          LOCK();
          piVar10 = (int *)((longlong)plVar2 + 0xc);
          *piVar10 = *piVar10 + -1;
          UNLOCK();
          if (*piVar10 == 0) {
            (**(code **)(*plVar2 + 0x10))(plVar2);
          }
        }
      }
LAB_14122f3c5:
      puVar3 = local_50;
      if (((undefined8 **)local_50 != (undefined8 **)0x0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(local_50);
      }
      lVar4 = local_48;
      local_38 = (undefined8 **)puVar3;
      if (((undefined8 **)puVar3 != (undefined8 **)0x0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(puVar3);
      }
      local_30 = (undefined4 *)lVar4;
      FUN_1488c0514(param_1 + 0x20);
    }
  }
LAB_14122f2a7:
  if ((local_28 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14122f47e FUN_14122f47e body=845 status=ok
// SIG undefined FUN_14122f47e(void)

void FUN_14122f47e(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  uint uVar3;
  undefined4 *puVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  byte bVar9;
  int iVar10;
  ulonglong uVar11;
  uint uVar12;
  byte bVar13;
  ulonglong uVar14;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  uint local_a0;
  uint local_9c;
  uint local_98;
  undefined4 local_94;
  undefined8 local_90;
  undefined8 local_88;
  longlong lStack_80;
  ulonglong local_78;
  undefined1 local_70;
  byte local_6f;
  undefined1 local_6e;
  undefined8 local_6d;
  undefined8 uStack_65;
  undefined8 local_5d;
  undefined1 uStack_55;
  undefined7 uStack_54;
  undefined1 uStack_4d;
  undefined8 uStack_4c;
  byte local_44;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  puVar4 = (undefined4 *)*param_1;
  local_94 = *puVar4;
  lVar2 = *(longlong *)(puVar4 + 2);
  if (lVar2 != 0) {
    plVar5 = (longlong *)FUN_144a7b9cd();
    (**(code **)(*plVar5 + 0x130))(plVar5,lVar2);
    puVar4 = (undefined4 *)*param_1;
  }
  lVar2 = *(longlong *)(puVar4 + 4);
  if (lVar2 != 0) {
    plVar5 = (longlong *)FUN_144a7b9cd();
    (**(code **)(*plVar5 + 0x140))(plVar5,lVar2);
  }
  if (DAT_14cad8310 == (longlong *)0x0) {
    FUN_1446f470e(&local_88,L"Renderer",1);
    uVar6 = local_88;
    uVar7 = FUN_144a52528();
    DAT_14cad8310 = (longlong *)FUN_14493e38c(uVar7,uVar6);
  }
  local_a8 = param_1[1];
  (**(code **)(*DAT_14cad8310 + 0x148))(DAT_14cad8310,&local_88,&DAT_14ca85100,param_1 + 2);
  *(undefined4 *)*param_1 = (undefined4)local_88;
  local_88 = 0;
  local_6e = 0xff;
  local_6d = 0;
  uStack_65 = 0;
  local_5d = 0;
  uStack_55 = 0;
  uStack_54 = 0;
  uStack_4d = 0;
  uStack_4c = 0;
  local_9c = *(uint *)((longlong)param_1 + 0x2c);
  local_a0 = *(uint *)(param_1 + 5);
  uVar8 = local_a0;
  if (local_a0 < local_9c) {
    uVar8 = local_9c;
  }
  uVar11 = (ulonglong)((uVar8 - 1) + (uint)(uVar8 == 0)) * 2 + 1;
  lVar2 = 0x3f;
  if (uVar11 != 0) {
    for (; uVar11 >> lVar2 == 0; lVar2 = lVar2 + -1) {
    }
  }
  uVar8 = (uint)lVar2;
  bVar9 = 10 < uVar8 & *(byte *)((longlong)param_1 + 0xda);
  if (bVar9 == 1) {
    iVar10 = 10;
    if (0xe < uVar8) {
      iVar10 = 0xc - (uint)(uVar8 < 0x12);
    }
    iVar10 = ((uVar8 ^ 0x3f) - 0x41) + iVar10;
    uVar12 = 0x400;
    if (0xe < uVar8) {
      uVar12 = (uint)(uVar8 >= 0x12) * 0x800 + 0x800;
    }
    bVar13 = 1;
  }
  else {
    uVar3 = 1 << ((byte)lVar2 & 0x1f);
    if (0xfff < (int)uVar3) {
      uVar3 = 0x1000;
    }
    uVar12 = 0x20;
    if (0x20 < (int)uVar3) {
      uVar12 = uVar3;
    }
    bVar13 = *(byte *)((longlong)param_1 + 0xd9);
    iVar10 = 0;
  }
  puVar4 = (undefined4 *)*param_1;
  local_70 = (undefined1)param_1[7];
  lStack_80 = param_1[4];
  local_6f = *(byte *)((longlong)param_1 + 0x3a);
  uVar11 = (ulonglong)local_6f;
  local_44 = (char)param_1[0x1b] * '\x02' | bVar13;
  uVar6 = 0;
  if (bVar13 == 0) {
    uVar12 = 0;
  }
  local_78 = (ulonglong)uVar12;
  if (uVar11 == 0) {
    local_98 = iVar10 + uVar8;
    if ((int)(iVar10 + uVar8) < 1) {
      local_98 = 0;
    }
    if (bVar9 == 0) goto LAB_14122f626;
    *(undefined8 *)(puVar4 + 2) = 0;
  }
  else {
    uVar1 = *puVar4;
    uVar14 = 0;
    do {
      *(undefined4 *)((longlong)&local_6d + uVar14 * 4 + 1) = uVar1;
      *(char *)((longlong)&uStack_4c + uVar14) = (char)uVar14;
      uVar14 = uVar14 + 1;
    } while (uVar11 != uVar14);
    local_98 = 0;
    if (0 < (int)(iVar10 + uVar8)) {
      local_98 = iVar10 + uVar8;
    }
    if (bVar9 == 0) {
      plVar5 = (longlong *)FUN_144a7b9cd();
      uVar6 = (**(code **)(*plVar5 + 0x128))(plVar5,param_2,&local_88);
      puVar4 = (undefined4 *)*param_1;
LAB_14122f626:
      *(undefined8 *)(puVar4 + 2) = uVar6;
    }
    else {
      *(undefined8 *)(puVar4 + 2) = 0;
      if (uVar11 != 0) {
        plVar5 = (longlong *)FUN_144a7b9cd();
        uVar6 = (**(code **)(*plVar5 + 0x138))(plVar5,param_2,&local_a0,&local_88);
        goto LAB_14122f62c;
      }
    }
  }
  uVar6 = 0;
LAB_14122f62c:
  *(undefined8 *)(*param_1 + 0x10) = uVar6;
  if (DAT_14cad8310 == (longlong *)0x0) {
    FUN_1446f470e(&local_90,L"Renderer",1);
    uVar6 = FUN_144a52528();
    DAT_14cad8310 = (longlong *)FUN_14493e38c(uVar6,local_90);
  }
  (**(code **)(*DAT_14cad8310 + 0x150))(DAT_14cad8310,&local_94);
  if ((local_38 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14122f7cc FUN_14122f7cc body=316 status=ok
// SIG undefined FUN_14122f7cc(void)

void FUN_14122f7cc(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_c8 [32];
  undefined2 *local_a8;
  undefined8 *local_a0;
  int local_98;
  undefined2 local_90 [2];
  undefined4 local_8c;
  code *local_88;
  undefined4 local_80;
  byte local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if ((*(byte *)(param_1 + 0xf1) & 8) != 0) {
    lVar1 = FUN_140def512();
    if (lVar1 != 0) {
      local_88 = FUN_1457b5ff0;
      local_80 = 0;
      FUN_14122f90a(&local_a0,param_1,&local_88);
      local_88 = (code *)0x0;
      local_80 = 0;
      FUN_14487d8d8(&local_88,&local_a0);
      local_48 = 1;
      local_a8 = local_90;
      local_90[0] = 0;
      local_8c = 0xbf800000;
      FUN_1406f4044(lVar1,param_1 + 200,&local_88,0x42f00000);
      (*(code *)(&PTR_LAB_14a1c87a0)[local_48])(&local_88);
      if (local_98 != 0) {
        if (local_a0 == (undefined8 *)0x0) goto LAB_14122f8a8;
        (**(code **)*local_a0)(local_a0,0);
        FUN_1446efa72(&local_a0,0,0,0x10);
        local_98 = 0;
      }
      if (local_a0 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
  }
LAB_14122f8a8:
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14122f90a FUN_14122f90a body=428 status=ok
// SIG undefined FUN_14122f90a(void)

longlong * FUN_14122f90a(longlong *param_1,longlong param_2,undefined8 *param_3)

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
LAB_14122f9ea:
    *puVar5 = &PTR_LAB_14a1c8830;
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
    *puVar5 = &PTR_FUN_14b430630;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_14122f9ea;
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
    *puVar5 = &PTR_LAB_14a1c8830;
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
    *puVar5 = &PTR_FUN_14b430630;
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



// FUNCTION 14122fab6 FUN_14122fab6 body=410 status=ok
// SIG undefined FUN_14122fab6(void)

undefined8 * FUN_14122fab6(undefined8 *param_1)

{
  undefined1 uVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14077009c();
  *param_1 = &PTR_FUN_14b6c3ef0;
  FUN_1446f470e(&local_20,L"any.charge",1);
  param_1[6] = local_20;
  *(undefined4 *)(param_1 + 7) = 0xc;
  param_1[8] = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined2 *)(param_1 + 0x11) = 8;
  param_1[0xe] = 0x3fe0000000000000;
  *(undefined1 *)(param_1 + 0x12) = 0x15;
  uVar1 = 0x15;
  if ((DAT_14c9a9cb4 & 0x20) != 0) {
    uVar1 = 0;
  }
  *(undefined1 *)(param_1 + 0x13) = uVar1;
  *(undefined8 *)((longlong)param_1 + 0xe9) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf1) = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined4 *)((longlong)param_1 + 0xfc) = 0x43480000;
  *(undefined4 *)(param_1 + 0x20) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0;
  *(undefined4 *)(param_1 + 0x21) = 0x41c80000;
  *(undefined4 *)((longlong)param_1 + 0x10c) = 0x437a0000;
  *(undefined1 *)(param_1 + 0x22) = 1;
  *(undefined8 *)((longlong)param_1 + 0x114) = 0x43fa000000000000;
  *(undefined4 *)((longlong)param_1 + 0x11c) = 0x42c80000;
  *(undefined1 *)(param_1 + 0x24) = 5;
  *(undefined8 *)((longlong)param_1 + 0x124) = 0x3f800000437a0000;
  *(undefined4 *)((longlong)param_1 + 300) = 0x3dcccccd;
  *(undefined1 *)(param_1 + 0x26) = 2;
  *(undefined8 *)((longlong)param_1 + 0x134) = 0;
  *(undefined1 *)((longlong)param_1 + 0x13c) = 5;
  *(undefined4 *)(param_1 + 0x28) = 0x437a0000;
  *(undefined1 *)(param_1 + 0x29) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14c) = 0;
  param_1[0x2b] = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0xf00000d0;
  param_1[0x2d] = 0;
  *(undefined4 *)(param_1 + 0x2e) = 0;
  *(undefined1 *)((longlong)param_1 + 0x174) = 0;
  param_1[0x31] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14122fc52 FUN_14122fc52 body=341 status=ok
// SIG undefined FUN_14122fc52(void)

undefined4 *
FUN_14122fc52(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  char cVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14122feda(param_1,local_48);
  FUN_14122fda8(local_40,*param_3,param_3[1]);
  *(undefined4 *)(local_40 + 6) = 0xffffffff;
  local_4c = local_48[0];
  uVar1 = *local_40;
  uVar7 = (uint)((ulonglong)uVar1 >> 0x10);
  uVar4 = (uint)uVar1 & 0xffff;
  uVar7 = ((uint)uVar1 << 0x10 | uVar4) + (int)((ulonglong)uVar1 >> 0x20) +
          (uVar7 << 0x13 | uVar7 & 0xffff) + (uVar4 >> 4);
  local_58 = param_4;
  cVar2 = FUN_14122fe1a(param_1,uVar7,local_40);
  if (cVar2 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar5 = 1;
    if (3 < uVar4) {
      uVar3 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar6 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar5 = 1 << ((byte)lVar6 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar5 <= *(int *)(param_1 + 0x48))) {
      uVar7 = *(int *)(param_1 + 0x48) - 1U & uVar7;
      *(uint *)((longlong)local_40 + 0x34) = uVar7;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 6) =
           *(undefined4 *)
            (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4);
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_1412300b8(param_1);
    }
  }
  *param_2 = local_4c;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14122fda8 FUN_14122fda8 body=114 status=ok
// SIG undefined FUN_14122fda8(void)

undefined8 * FUN_14122fda8(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  *param_1 = *param_2;
  param_1[1] = *param_3;
  uVar2 = *(undefined4 *)((longlong)param_3 + 0xc);
  uVar3 = *(undefined4 *)(param_3 + 2);
  uVar4 = *(undefined4 *)((longlong)param_3 + 0x14);
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_3 + 1);
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar2;
  *(undefined4 *)(param_1 + 3) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar4;
  param_1[4] = 0;
  iVar1 = *(int *)(param_3 + 4);
  _Src = (void *)param_3[3];
  *(int *)(param_1 + 5) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 4,iVar1,0);
    memcpy((void *)param_1[4],_Src,(longlong)iVar1 * 2);
  }
  return param_1;
}



// FUNCTION 14122fe1a FUN_14122fe1a body=192 status=ok
// SIG undefined FUN_14122fe1a(void)

void FUN_14122fe1a(longlong *param_1,uint param_2,longlong *param_3,int *param_4,undefined1 *param_5
                  )

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
  undefined1 uVar13;
  longlong *plVar14;
  int iVar15;
  
  uVar13 = 0;
  if (((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) &&
     (uVar13 = 0, (int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1)) {
    plVar14 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar14 = (longlong *)param_1[8];
    }
    iVar15 = *(int *)((longlong)plVar14 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar15 != -1) {
      do {
        puVar1 = (undefined4 *)(*param_1 + (longlong)iVar15 * 0x38);
        if (*(longlong *)(*param_1 + (longlong)iVar15 * 0x38) == *param_3) {
          if (*(longlong *)(puVar1 + 8) != 0) {
            FUN_1400020a8();
          }
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
          FUN_1487df8ee(param_1,*param_4,1);
          *param_4 = iVar15;
          uVar13 = 1;
          goto LAB_14122fe86;
        }
        iVar15 = puVar1[0xc];
      } while (iVar15 != -1);
    }
    uVar13 = 0;
  }
LAB_14122fe86:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar13;
  }
  return;
}



// FUNCTION 14122feda FUN_14122feda body=478 status=ok
// SIG undefined FUN_14122feda(void)

int * FUN_14122feda(longlong *param_1,int *param_2)

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



// FUNCTION 1412300b8 FUN_1412300b8 body=688 status=ok
// SIG undefined FUN_1412300b8(void)

void FUN_1412300b8(longlong *param_1)

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
  int iVar15;
  longlong lVar16;
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
    if ((int)uVar10 < 1) goto LAB_14123011e;
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
LAB_14123011e:
  iVar7 = (int)param_1[5];
  if (iVar7 == 0) {
    uVar4 = 0;
    uVar14 = 1;
    iVar15 = 0;
    iVar5 = 0;
  }
  else {
    puVar13 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar13 = (uint *)(param_1 + 2);
    }
    uVar10 = *puVar13;
    if (uVar10 == 0) {
      iVar15 = iVar7 + 0x1e;
      if (-1 < iVar7 + -1) {
        iVar15 = iVar7 + -1;
      }
      uVar4 = 0;
      uVar14 = (ulonglong)(uint)(iVar15 >> 5);
      if (iVar15 >> 5 < 1) {
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
    iVar15 = (iVar5 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
    if (iVar7 <= iVar15) {
      iVar15 = iVar7;
    }
  }
  if (iVar15 < iVar7) {
    uVar10 = 0xffffffff;
    do {
      lVar9 = *param_1;
      lVar16 = (longlong)iVar15 * 0x38;
      uVar2 = *(undefined8 *)(lVar9 + lVar16);
      uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
      uVar17 = (uint)uVar2 & 0xffff;
      uVar8 = (longlong)
              (int)(((uint)uVar2 << 0x10 | uVar17) + (int)((ulonglong)uVar2 >> 0x20) +
                    (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar17 >> 4)) &
              (longlong)(int)param_1[9] - 1U;
      iVar7 = (int)uVar8;
      *(int *)(lVar9 + 0x34 + lVar16) = iVar7;
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = plVar1;
      }
      *(undefined4 *)(lVar9 + 0x30 + lVar16) =
           *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar8) * 4);
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = plVar1;
      }
      *(int *)((longlong)plVar6 + ((longlong)iVar7 & (longlong)(int)param_1[9] - 1U) * 4) = iVar15;
      uVar10 = ~(uint)uVar14 & uVar10;
      puVar13 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar13 = (uint *)(param_1 + 2);
      }
      iVar7 = (int)param_1[5];
      iVar15 = (int)uVar4;
      lVar9 = (longlong)iVar15;
      uVar3 = puVar13[lVar9] & uVar10;
      if (uVar3 == 0) {
        iVar11 = iVar7 + 0x1e;
        if (-1 < iVar7 + -1) {
          iVar11 = iVar7 + -1;
        }
        iVar11 = iVar11 >> 5;
        iVar12 = iVar11;
        if (iVar11 < iVar15) {
          iVar12 = iVar15;
        }
        if (iVar11 <= iVar15) {
          return;
        }
        lVar16 = 0;
        while( true ) {
          iVar5 = iVar5 + 0x20;
          uVar3 = puVar13[lVar9 + lVar16 + 1];
          if (uVar3 != 0) break;
          lVar16 = lVar16 + 1;
          if (iVar12 - lVar9 == lVar16) {
            return;
          }
        }
        uVar4 = (ulonglong)(iVar15 + (int)lVar16 + 1);
        uVar10 = 0xffffffff;
      }
      uVar14 = (ulonglong)(-uVar3 & uVar3);
      uVar8 = uVar14 * 2 + 1;
      lVar9 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar15 = (iVar5 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
    } while (iVar15 < iVar7);
  }
  return;
}



// FUNCTION 141230368 FUN_141230368 body=104 status=ok
// SIG undefined FUN_141230368(void)

undefined8 FUN_141230368(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  
  if (*(int *)(param_1 + 0x14) != 0) {
    uVar1 = *(uint *)(param_1 + 0x10);
    if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) {
      return 0;
    }
    plVar2 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar2 != (longlong *)0x0) && ((int)plVar2[2] == *(int *)(param_1 + 0x14))) &&
       ((*(uint *)(plVar2 + 1) & 0x10200000) == 0)) {
      if ((*(uint *)(plVar2 + 1) & 0x10200000) == 0) {
        lVar3 = *plVar2;
      }
      else {
        lVar3 = 0;
      }
      if (*(longlong *)(lVar3 + 0x30) != 0) {
        return *(undefined8 *)(*(longlong *)(lVar3 + 0x30) + 0x360);
      }
    }
  }
  return 0;
}



// FUNCTION 1412303d0 FUN_1412303d0 body=149 status=ok
// SIG undefined FUN_1412303d0(void)

bool FUN_1412303d0(char *param_1,longlong param_2)

{
  char cVar1;
  short sVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  cVar1 = *param_1;
  if (cVar1 == '\0') {
    return true;
  }
  if (cVar1 == '\x02') {
    lVar4 = FUN_1486dc73a(param_2);
    if (lVar4 != 0) {
      sVar2 = *(short *)(lVar4 + 0x420);
LAB_141230405:
      return *(int *)(param_1 + 4) == (int)sVar2;
    }
  }
  else if ((cVar1 == '\x01') && (*(longlong *)(param_2 + 0x398) != 0)) {
    lVar5 = FUN_140082f10();
    lVar4 = *(longlong *)(param_2 + 0x398);
    if (lVar4 != 0) {
      if (lVar5 == 0) {
        return false;
      }
      lVar3 = *(longlong *)(lVar4 + 0x10);
      if (lVar3 == 0) {
        return false;
      }
      if ((*(int *)(lVar5 + 0x38) <= *(int *)(lVar3 + 0x38)) &&
         (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
          lVar5 + 0x30)) {
        sVar2 = *(short *)(lVar4 + 0x538);
        goto LAB_141230405;
      }
    }
  }
  return false;
}



// FUNCTION 141230466 FUN_141230466 body=370 status=ok
// SIG undefined FUN_141230466(void)

undefined8 * FUN_141230466(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 141230602 FUN_141230602 body=178 status=ok
// SIG undefined FUN_141230602(void)

void FUN_141230602(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b023b08;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  *(undefined2 *)(param_1 + 4) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0x3b9cbb9e;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0xf00000d0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0x3f800000;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0xf00000d0;
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0x3f800000;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x17) = 0x3f800000;
  return;
}



// FUNCTION 1412306b4 FUN_1412306b4 body=244 status=ok
// SIG undefined FUN_1412306b4(void)

void FUN_1412306b4(longlong param_1,longlong *param_2)

{
  int iVar1;
  char cVar2;
  ulonglong uVar3;
  undefined1 auStack_88 [32];
  longlong local_68;
  ulonglong uStack_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  cVar2 = (**(code **)(*param_2 + 0x38))(param_2);
  if (cVar2 == '\0') {
    do {
      local_68 = 0;
      uStack_60 = 0;
      FUN_1410576d6(param_2,&local_68);
      uVar3 = uStack_60;
      if ((uint)uStack_60 == 0) {
        uVar3 = 0;
      }
      else {
        iVar1 = *(int *)(param_1 + 0x70);
        *(uint *)(param_1 + 0x70) = iVar1 + (uint)uStack_60;
        if ((uint)(*(int *)(param_1 + 0x74) - iVar1) < (uint)uStack_60) {
          FUN_1457ecdd8((longlong *)(param_1 + 0x68),iVar1);
        }
        FUN_1412307a9((longlong)iVar1 * 0xa0 + *(longlong *)(param_1 + 0x68),local_68,
                      uVar3 & 0xffffffff);
        uVar3 = uStack_60 & 0xffffffff;
      }
      FUN_14105732d(local_68,uVar3);
      if (local_68 != 0) {
        FUN_1400020a8();
      }
      cVar2 = (**(code **)(*param_2 + 0x38))(param_2);
    } while (cVar2 == '\0');
  }
  if ((local_50 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412307a9 FUN_1412307a9 body=286 status=ok
// SIG undefined FUN_1412307a9(void)

void FUN_1412307a9(longlong param_1,longlong param_2,int param_3)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  void *_Src;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined4 *puVar14;
  
  puVar13 = (undefined8 *)(param_1 + 0x68);
  puVar14 = (undefined4 *)(param_2 + 0x20);
  do {
    uVar4 = puVar14[-8];
    uVar5 = puVar14[-7];
    uVar6 = puVar14[-6];
    uVar7 = puVar14[-5];
    uVar8 = puVar14[-4];
    uVar9 = puVar14[-3];
    uVar10 = puVar14[-2];
    *(undefined4 *)((longlong)puVar13 + -0x5c) = puVar14[-5];
    *(undefined4 *)(puVar13 + -0xb) = uVar8;
    *(undefined4 *)((longlong)puVar13 + -0x54) = uVar9;
    *(undefined4 *)(puVar13 + -10) = uVar10;
    *(undefined4 *)(puVar13 + -0xd) = uVar4;
    *(undefined4 *)((longlong)puVar13 + -100) = uVar5;
    *(undefined4 *)(puVar13 + -0xc) = uVar6;
    *(undefined4 *)((longlong)puVar13 + -0x5c) = uVar7;
    cVar1 = *(char *)(puVar14 + 0xc);
    *(char *)(puVar13 + -3) = cVar1;
    if (cVar1 == '\x01') {
      uVar4 = *puVar14;
      uVar5 = puVar14[1];
      uVar6 = puVar14[2];
      uVar7 = puVar14[3];
      uVar8 = puVar14[4];
      uVar9 = puVar14[5];
      uVar10 = puVar14[6];
      uVar11 = puVar14[7];
      uVar12 = *(undefined8 *)(puVar14 + 10);
      puVar13[-5] = *(undefined8 *)(puVar14 + 8);
      puVar13[-4] = uVar12;
      *(undefined4 *)(puVar13 + -7) = uVar8;
      *(undefined4 *)((longlong)puVar13 + -0x34) = uVar9;
      *(undefined4 *)(puVar13 + -6) = uVar10;
      *(undefined4 *)((longlong)puVar13 + -0x2c) = uVar11;
      *(undefined4 *)(puVar13 + -9) = uVar4;
      *(undefined4 *)((longlong)puVar13 + -0x44) = uVar5;
      *(undefined4 *)(puVar13 + -8) = uVar6;
      *(undefined4 *)((longlong)puVar13 + -0x3c) = uVar7;
    }
    puVar13[-2] = *(undefined8 *)(puVar14 + 0xe);
    lVar3 = *(longlong *)(puVar14 + 0x10);
    puVar13[-1] = lVar3;
    if (lVar3 != 0) {
      LOCK();
      *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
      UNLOCK();
    }
    *puVar13 = 0;
    iVar2 = puVar14[0x14];
    _Src = *(void **)(puVar14 + 0x12);
    *(int *)(puVar13 + 1) = iVar2;
    if ((longlong)iVar2 == 0) {
      *(undefined4 *)((longlong)puVar13 + 0xc) = 0;
    }
    else {
      FUN_1446dd7be(puVar13,iVar2,0);
      memcpy((void *)*puVar13,_Src,(longlong)iVar2 * 0xc);
    }
    *(undefined4 *)(puVar13 + 3) = puVar14[0x18];
    puVar13[2] = *(undefined8 *)(puVar14 + 0x16);
    *(undefined8 *)((longlong)puVar13 + 0x1c) = *(undefined8 *)(puVar14 + 0x19);
    *(undefined4 *)((longlong)puVar13 + 0x24) = puVar14[0x1b];
    puVar13[5] = *(undefined8 *)(puVar14 + 0x1c);
    *(undefined4 *)(puVar13 + 6) = puVar14[0x1e];
    puVar13 = puVar13 + 0x14;
    puVar14 = puVar14 + 0x28;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return;
}



// FUNCTION 1412308c8 FUN_1412308c8 body=228 status=ok
// SIG undefined FUN_1412308c8(void)

longlong FUN_1412308c8(void)

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
  if (DAT_14cb5d788 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1413594aa;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1464ae302;
    local_38 = &LAB_148696d2b;
    local_40 = &LAB_1464dbf9f;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x2c40;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxDrone",&DAT_14cb5d788,FUN_1464dbf78);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb5d788;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412309ae FUN_1412309ae body=48 status=ok
// SIG undefined FUN_1412309ae(void)

void FUN_1412309ae(longlong *param_1)

{
  int iVar1;
  
  iVar1 = FUN_144909502();
  if (iVar1 != -1) {
                    /* WARNING: Could not recover jumptable at 0x0001412309d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xb90))(param_1,iVar1,*(code **)(*param_1 + 0xb90));
    return;
  }
  return;
}



// FUNCTION 1412309de FUN_1412309de body=606 status=ok
// SIG undefined FUN_1412309de(void)

void FUN_1412309de(longlong param_1,int param_2)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  bool bVar6;
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
  FUN_141027222();
  lVar4 = *(longlong *)(param_1 + 0x658);
  if (lVar4 == 0) {
    lVar4 = *(longlong *)(param_1 + 0x660);
    if ((DAT_14c950c29 & lVar4 != 0) != 0) goto LAB_141230bf5;
    if (lVar4 == 0) goto LAB_141230ad8;
  }
  else if (DAT_14c950c29 == 1) {
LAB_141230bf5:
    FUN_1456cec3c(lVar4);
  }
  if (DAT_14cb06da8 == 0) {
    local_40 = &local_28;
    local_28 = FUN_1449e2820;
    local_30 = FUN_14081d0ea;
    local_38 = &LAB_1464003b0;
    local_48 = &LAB_147d17bdf;
    local_50 = &LAB_1417edf22;
    local_58 = L"Engine";
    local_60 = 0;
    local_68 = 0x10000000;
    local_70 = 8;
    local_78 = 0x588;
    FUN_14081cfa3(L"/Script/Engine",L"SkeletalMesh",&DAT_14cb06da8,FUN_14640038e);
  }
  if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < *(int *)(DAT_14cb06da8 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
       (longlong)*(int *)(DAT_14cb06da8 + 0x38) * 8) != DAT_14cb06da8 + 0x30)) goto LAB_141230ad8;
  if (*(int *)(param_1 + 0x66c) == 0) {
LAB_141230a9b:
    bVar6 = false;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x668);
    bVar6 = false;
    if ((-1 < (int)uVar1) && (bVar6 = false, (int)uVar1 < DAT_14c9647dc)) {
      lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      if ((lVar4 == 0) || (*(int *)(lVar4 + 0x10) != *(int *)(param_1 + 0x66c))) goto LAB_141230a9b;
      bVar6 = (*(uint *)(lVar4 + 8) & 0x10200000) == 0;
    }
  }
  if ((param_2 < 0) || (bVar6)) goto LAB_141230ad8;
  plVar5 = *(longlong **)(param_1 + 0x658);
  if (plVar5 == (longlong *)0x0) {
    plVar5 = *(longlong **)(param_1 + 0x660);
    if ((DAT_14c950c29 & plVar5 != (longlong *)0x0) != 0) goto LAB_141230c02;
    if (plVar5 != (longlong *)0x0) goto LAB_141230b3d;
    iVar3 = 0;
  }
  else {
    if (DAT_14c950c29 != 0) {
LAB_141230c02:
      FUN_1456cec3c(plVar5);
      plVar5 = *(longlong **)(param_1 + 0x658);
      if (plVar5 == (longlong *)0x0) {
        plVar5 = *(longlong **)(param_1 + 0x660);
LAB_141230b3d:
        bVar2 = DAT_14c950c29 & plVar5 != (longlong *)0x0;
      }
      else {
        bVar2 = DAT_14c950c29 & 1;
      }
      if (bVar2 != 0) {
        FUN_1456cec3c(plVar5);
      }
    }
    lVar4 = (**(code **)(*plVar5 + 0x310))(plVar5);
    iVar3 = *(int *)(lVar4 + 0x28);
  }
  if (param_2 < iVar3) {
    *(byte *)(param_1 + 0xc71) = *(byte *)(param_1 + 0xc71) & 0xdf;
  }
LAB_141230ad8:
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141230c3e FUN_141230c3e body=2522 status=ok
// SIG undefined FUN_141230c3e(void)

void FUN_141230c3e(longlong param_1,longlong param_2)

{
  ushort uVar1;
  ushort uVar2;
  void *pvVar3;
  char *_Str;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  size_t sVar7;
  void **ppvVar8;
  longlong lVar9;
  uint uVar10;
  bool bVar11;
  undefined1 auStack_228 [40];
  longlong local_200 [2];
  longlong local_1f0;
  undefined8 uStack_1e8;
  void *local_1e0;
  int local_1d8;
  longlong local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  longlong local_c8;
  undefined8 uStack_c0;
  void *local_b8;
  undefined8 local_b0;
  void *local_a8;
  undefined8 local_a0;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_228;
  iVar5 = *(int *)(param_2 + 0x18);
  if (iVar5 < 7) {
    if (iVar5 != 2) {
LAB_141230c77:
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_228);
    }
    if (*(int *)(param_2 + 0x28) == 0) {
      FUN_14588d72e(param_1 + 0xc0,&local_1e0);
      FUN_1400b22c2(&local_a8,*(undefined8 *)(param_2 + 0x30));
      if (local_1d8 == (int)local_a0) {
        if (local_1d8 < 2) {
          bVar11 = true;
        }
        else {
          lVar9 = 0;
          while( true ) {
            uVar1 = *(ushort *)((longlong)local_1e0 + lVar9);
            uVar4 = (uint)uVar1;
            uVar2 = *(ushort *)((longlong)local_a8 + lVar9);
            uVar10 = (uint)uVar2;
            if (uVar1 != uVar2) {
              if ((uVar2 | uVar1) < 0x80) {
                uVar4 = (uint)(byte)(&DAT_149e05da0)[uVar1];
                uVar10 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_141230eca;
              }
              iVar5 = uVar4 - uVar10;
              goto LAB_141230ef5;
            }
            if (uVar1 == 0) break;
LAB_141230eca:
            lVar9 = lVar9 + 2;
          }
          iVar5 = 0;
LAB_141230ef5:
          bVar11 = iVar5 == 0;
        }
      }
      else {
        bVar11 = (int)local_a0 + local_1d8 == 1;
      }
      if (local_a8 != (void *)0x0) {
        FUN_1400020a8();
      }
      if (local_1e0 != (void *)0x0) {
        FUN_1400020a8();
      }
      if (bVar11) {
        if (*(char *)(param_1 + 0x2d0) != '\0') {
          *(undefined1 *)(param_1 + 0x2d0) = 0;
          FUN_14584d7f0(param_1 + 0x38,0);
        }
        FUN_14584d892(param_1);
        FUN_1461588ee(param_1);
      }
    }
  }
  else if (iVar5 < 0x21) {
    if (iVar5 == 7) {
      if (*(char *)(param_1 + 0x2d0) != '\x02') goto LAB_141230e35;
      FUN_14588d72e(param_1 + 0xc0,&local_1e0);
      FUN_1400b22c2(&local_a8,*(undefined8 *)(param_2 + 0x30));
      if (local_1d8 == (int)local_a0) {
        bVar11 = true;
        if (1 < local_1d8) {
          lVar9 = 0;
          while( true ) {
            uVar1 = *(ushort *)((longlong)local_1e0 + lVar9);
            uVar4 = (uint)uVar1;
            uVar2 = *(ushort *)((longlong)local_a8 + lVar9);
            uVar10 = (uint)uVar2;
            if (uVar1 != uVar2) {
              if ((uVar2 | uVar1) < 0x80) {
                uVar4 = (uint)(byte)(&DAT_149e05da0)[uVar1];
                uVar10 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_141230fc9;
              }
              iVar5 = uVar4 - uVar10;
              goto LAB_141231356;
            }
            if (uVar1 == 0) break;
LAB_141230fc9:
            lVar9 = lVar9 + 2;
          }
          iVar5 = 0;
LAB_141231356:
          bVar11 = iVar5 == 0;
        }
      }
      else {
        bVar11 = (int)local_a0 + local_1d8 == 1;
      }
      if (local_a8 != (void *)0x0) {
        FUN_1400020a8();
      }
      if (local_1e0 != (void *)0x0) {
        FUN_1400020a8();
      }
      if (!bVar11) goto LAB_141230e35;
      iVar5 = *(int *)(param_1 + 0x108);
      if ((longlong)iVar5 < 2) {
        local_b8 = (void *)0x0;
        pvVar3 = *(void **)(param_1 + 0x100);
        local_b0 = CONCAT44(local_b0._4_4_,iVar5);
        if (iVar5 == 0) {
          local_b0 = 0;
        }
        else {
          FUN_1446dd670(&local_b8,iVar5,0);
          memcpy(local_b8,pvVar3,(longlong)iVar5 * 2);
        }
      }
      else {
        local_b8 = (void *)0x0;
        local_b0 = 0xffffffff00000000;
      }
      _Str = *(char **)(param_2 + 0x50);
      local_e0 = 0;
      if (_Str == (char *)0x0) {
        local_d8 = 0;
        local_d0 = 0;
      }
      else {
        sVar7 = strlen(_Str);
        FUN_1446e6fe8(&local_1e0,_Str,sVar7 & 0xffffffff,1);
      }
      FUN_140056680(&local_1f0,local_d8);
      local_c8 = local_1f0;
      uStack_c0 = uStack_1e8;
      local_1f0 = 0;
      uStack_1e8 = 0;
      FUN_1400b22c2(local_200,*(undefined8 *)(param_2 + 0x38));
      FUN_140d5f844(&local_a8,local_200,&local_c8,&local_b8);
      if (local_200[0] != 0) {
        FUN_1400020a8();
      }
      if (uStack_c0._4_4_ != -1) {
        if (local_c8 != 0) {
          FUN_1400020a8();
        }
        local_c8 = 0;
        uStack_c0 = 0xffffffff00000000;
      }
      if (local_1f0 != 0) {
        FUN_1400020a8();
      }
      if (local_e0 != 0) {
        FUN_1400020a8();
      }
      if ((local_b0._4_4_ != -1) && (local_b8 != (void *)0x0)) {
        FUN_1400020a8();
      }
      uVar6 = FUN_1414b3267(&local_a8);
      iVar5 = FUN_148aeb27c((longlong *)(param_1 + 400),uVar6,&local_a8);
      if (iVar5 != -1) {
        FUN_148ae3ae8(*(undefined8 *)(*(longlong *)(param_1 + 400) + 0x70 + (longlong)iVar5 * 0x88),
                      param_2);
      }
      ppvVar8 = &local_a8;
    }
    else {
      if (iVar5 != 8) goto LAB_141230c77;
      if (*(char *)(param_1 + 0x2d0) != '\x02') goto LAB_141230e35;
      FUN_14588d72e(param_1 + 0xc0,&local_1e0);
      FUN_1400b22c2(&local_a8,*(undefined8 *)(param_2 + 0x28));
      if (local_1d8 == (int)local_a0) {
        bVar11 = true;
        if (1 < local_1d8) {
          lVar9 = 0;
          while( true ) {
            uVar1 = *(ushort *)((longlong)local_1e0 + lVar9);
            uVar4 = (uint)uVar1;
            uVar2 = *(ushort *)((longlong)local_a8 + lVar9);
            uVar10 = (uint)uVar2;
            if (uVar1 != uVar2) {
              if ((uVar2 | uVar1) < 0x80) {
                uVar4 = (uint)(byte)(&DAT_149e05da0)[uVar1];
                uVar10 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_141230d3e;
              }
              iVar5 = uVar4 - uVar10;
              goto LAB_14123133e;
            }
            if (uVar1 == 0) break;
LAB_141230d3e:
            lVar9 = lVar9 + 2;
          }
          iVar5 = 0;
LAB_14123133e:
          bVar11 = iVar5 == 0;
        }
      }
      else {
        bVar11 = (int)local_a0 + local_1d8 == 1;
      }
      if (local_a8 != (void *)0x0) {
        FUN_1400020a8();
      }
      if (local_1e0 != (void *)0x0) {
        FUN_1400020a8();
      }
      if (!bVar11) goto LAB_141230e35;
      iVar5 = *(int *)(param_1 + 0x108);
      if ((longlong)iVar5 < 2) {
        local_a8 = (void *)0x0;
        pvVar3 = *(void **)(param_1 + 0x100);
        local_a0 = CONCAT44(local_a0._4_4_,iVar5);
        if (iVar5 == 0) {
          local_a0 = 0;
        }
        else {
          FUN_1446dd670(&local_a8,iVar5,0);
          memcpy(local_a8,pvVar3,(longlong)iVar5 * 2);
        }
      }
      else {
        local_a8 = (void *)0x0;
        local_a0 = 0xffffffff00000000;
      }
      local_b8 = (void *)0x0;
      local_b0 = 0xffffffff00000000;
      FUN_1400b22c2(&local_c8,*(undefined8 *)(param_2 + 0x30));
      FUN_140d5f844(&local_1e0,&local_c8,&local_b8,&local_a8);
      if (local_c8 != 0) {
        FUN_1400020a8();
      }
      if ((local_b0._4_4_ != -1) && (local_b8 != (void *)0x0)) {
        FUN_1400020a8();
      }
      if ((local_a0._4_4_ != -1) && (local_a8 != (void *)0x0)) {
        FUN_1400020a8();
      }
      ppvVar8 = &local_1e0;
      FUN_148aeb2f4(param_1 + 8,ppvVar8);
    }
    FUN_140d5fbf2(ppvVar8);
  }
  else if (iVar5 == 0x21) {
    if (*(char *)(param_1 + 0x2d0) == '\x02') {
      FUN_1400b22c2(&local_1e0,*(undefined8 *)(param_2 + 0x28));
      iVar5 = *(int *)(param_1 + 0x138);
      if (iVar5 == local_1d8) {
        bVar11 = true;
        if (1 < iVar5) {
          lVar9 = 0;
          while( true ) {
            uVar1 = *(ushort *)(*(longlong *)(param_1 + 0x130) + lVar9);
            uVar4 = (uint)uVar1;
            uVar2 = *(ushort *)((longlong)local_1e0 + lVar9);
            uVar10 = (uint)uVar2;
            if (uVar1 != uVar2) {
              if ((uVar2 | uVar1) < 0x80) {
                uVar4 = (uint)(byte)(&DAT_149e05da0)[uVar1];
                uVar10 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_14123105d;
              }
              iVar5 = uVar4 - uVar10;
              goto LAB_141231179;
            }
            if (uVar1 == 0) break;
LAB_14123105d:
            lVar9 = lVar9 + 2;
          }
          iVar5 = 0;
LAB_141231179:
          bVar11 = iVar5 == 0;
        }
      }
      else {
        bVar11 = local_1d8 + iVar5 == 1;
      }
      if (local_1e0 != (void *)0x0) {
        FUN_1400020a8();
      }
      if ((bVar11) && (*(int *)(param_2 + 0x30) == 3)) {
        *(undefined1 *)(param_1 + 0x369) = 0;
        FUN_1447f69b6(param_1 + 0x98);
      }
    }
  }
  else if (iVar5 == 0x2a) {
    if (*(char *)(param_1 + 0x2d0) == '\x02') {
      FUN_14588d72e(param_1 + 0xc0,&local_1e0);
      FUN_1400b22c2(&local_a8,*(undefined8 *)(param_2 + 0x28));
      if (local_1d8 == (int)local_a0) {
        bVar11 = true;
        if (1 < local_1d8) {
          lVar9 = 0;
          while( true ) {
            uVar1 = *(ushort *)((longlong)local_1e0 + lVar9);
            uVar4 = (uint)uVar1;
            uVar2 = *(ushort *)((longlong)local_a8 + lVar9);
            uVar10 = (uint)uVar2;
            if (uVar1 != uVar2) {
              if ((uVar2 | uVar1) < 0x80) {
                uVar4 = (uint)(byte)(&DAT_149e05da0)[uVar1];
                uVar10 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_141231107;
              }
              iVar5 = uVar4 - uVar10;
              goto LAB_141231362;
            }
            if (uVar1 == 0) break;
LAB_141231107:
            lVar9 = lVar9 + 2;
          }
          iVar5 = 0;
LAB_141231362:
          bVar11 = iVar5 == 0;
        }
      }
      else {
        bVar11 = (int)local_a0 + local_1d8 == 1;
      }
      if (local_a8 != (void *)0x0) {
        FUN_1400020a8();
      }
      if (local_1e0 != (void *)0x0) {
        FUN_1400020a8();
      }
      if (bVar11) {
        FUN_148ae35c8(&local_1e0,param_1,param_2);
        FUN_148aeb1d8(param_1 + 0x20,&local_1e0);
        FUN_148ae394c(&local_1e0);
      }
    }
  }
  else {
    if (iVar5 != 0x2f) goto LAB_141230c77;
    if (*(char *)(param_1 + 0x2d0) == '\x02') {
      FUN_14588d72e(param_1 + 0xc0,&local_1e0);
      FUN_1400b22c2(&local_a8,*(undefined8 *)(param_2 + 0x28));
      if (local_1d8 == (int)local_a0) {
        bVar11 = true;
        if (1 < local_1d8) {
          lVar9 = 0;
          while( true ) {
            uVar1 = *(ushort *)((longlong)local_1e0 + lVar9);
            uVar4 = (uint)uVar1;
            uVar2 = *(ushort *)((longlong)local_a8 + lVar9);
            uVar10 = (uint)uVar2;
            if (uVar1 != uVar2) {
              if ((uVar2 | uVar1) < 0x80) {
                uVar4 = (uint)(byte)(&DAT_149e05da0)[uVar1];
                uVar10 = (uint)(byte)(&DAT_149e05da0)[uVar2];
                if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_141230e03;
              }
              iVar5 = uVar4 - uVar10;
              goto LAB_14123134a;
            }
            if (uVar1 == 0) break;
LAB_141230e03:
            lVar9 = lVar9 + 2;
          }
          iVar5 = 0;
LAB_14123134a:
          bVar11 = iVar5 == 0;
        }
      }
      else {
        bVar11 = (int)local_a0 + local_1d8 == 1;
      }
      if (local_a8 != (void *)0x0) {
        FUN_1400020a8();
      }
      if (local_1e0 != (void *)0x0) {
        FUN_1400020a8();
      }
      if (bVar11) {
        FUN_1400b22c2(&local_1e0,*(undefined8 *)(param_2 + 0x30));
        FUN_146209706(param_1 + 0x80,*(undefined4 *)(param_2 + 0x38),&local_1e0);
        if (local_1e0 != (void *)0x0) {
          FUN_1400020a8();
        }
      }
    }
  }
LAB_141230e35:
  if ((local_38 ^ (ulonglong)auStack_228) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412319b0 FUN_1412319b0 body=1959 status=ok
// SIG undefined FUN_1412319b0(void)

void FUN_1412319b0(char *param_1,undefined8 param_2)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  byte bVar6;
  ushort uVar7;
  ushort *puVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int *piVar13;
  int *piVar14;
  longlong lVar15;
  uint uVar16;
  float fVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined1 auStack_108 [40];
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined1 local_d0 [8];
  longlong local_c8;
  uint *local_c0;
  uint *puStack_b8;
  uint local_b0;
  int *local_a8;
  int local_a0;
  undefined4 *local_98;
  uint local_90;
  undefined4 local_8c;
  undefined4 *local_88;
  uint local_80;
  undefined4 local_7c;
  undefined4 *local_78;
  uint local_70;
  undefined4 local_6c;
  undefined4 *local_68;
  uint local_60;
  undefined4 local_5c;
  char local_58;
  char local_57;
  int local_54;
  longlong alStack_50 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_108;
  FUN_1447eef60(local_d0,param_1);
  if (*param_1 == '\x01') {
    iVar12 = *(int *)(param_1 + 0x30);
    local_b0 = (uint)*(byte *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar12);
    *(int *)(param_1 + 0x30) = iVar12 + 1;
    lVar15 = *(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar12 * 8);
    piVar13 = (int *)(param_1 + 0x44);
  }
  else {
    puVar8 = *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10);
    uVar7 = *puVar8;
    *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10) = puVar8 + 1;
    uVar10 = uVar7 & 0x7fff;
    local_b0 = (uint)(uVar7 >> 0xf);
    lVar9 = *(longlong *)(param_1 + 0x80);
    if ((short)uVar7 < 0) {
      lVar15 = (ulonglong)(uVar10 * *(int *)(lVar9 + 0x80)) + *(longlong *)(lVar9 + 0x70);
    }
    else {
      iVar12 = **(int **)(lVar9 + 0x20);
      lVar15 = 0;
      if (iVar12 <= (int)uVar10) {
        do {
          uVar10 = uVar10 - iVar12;
          iVar12 = (*(int **)(lVar9 + 0x20))[lVar15 + 1];
          lVar15 = lVar15 + 1;
        } while (iVar12 <= (int)uVar10);
      }
      lVar15 = (longlong)(int)uVar10 + *(longlong *)(*(longlong *)(lVar9 + 0x18) + lVar15 * 8);
    }
    piVar13 = (int *)(lVar9 + 0x4c);
  }
  local_c0 = (uint *)(lVar15 + (ulonglong)local_b0 * (longlong)*piVar13 * 4);
  puStack_b8 = local_c0;
  FUN_140126e42(&local_a8,param_1);
  if (*param_1 == '\x01') {
    iVar12 = *(int *)(param_1 + 0x30);
    bVar6 = *(byte *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar12);
    local_90 = (uint)bVar6;
    *(int *)(param_1 + 0x30) = iVar12 + 1;
    local_98 = (undefined4 *)
               ((longlong)*(int *)(param_1 + 0x44) * (ulonglong)bVar6 * 4 +
               *(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar12 * 8));
  }
  else {
    puVar8 = *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10);
    uVar7 = *puVar8;
    *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10) = puVar8 + 1;
    uVar10 = uVar7 & 0x7fff;
    if (uVar10 == 0x7fff) {
      local_98 = &local_8c;
      local_90 = 0;
    }
    else {
      lVar15 = *(longlong *)(param_1 + 0x80);
      local_90 = 1;
      local_98 = (undefined4 *)
                 ((ulonglong)(uVar10 * *(int *)(lVar15 + 0x80)) + *(longlong *)(lVar15 + 0x70) +
                 (longlong)*(int *)(lVar15 + 0x4c) * 4);
    }
  }
  if (*param_1 == '\x01') {
    iVar12 = *(int *)(param_1 + 0x30);
    bVar6 = *(byte *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar12);
    local_80 = (uint)bVar6;
    *(int *)(param_1 + 0x30) = iVar12 + 1;
    local_88 = (undefined4 *)
               ((longlong)*(int *)(param_1 + 0x44) * (ulonglong)bVar6 * 4 +
               *(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar12 * 8));
  }
  else {
    puVar8 = *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10);
    uVar7 = *puVar8;
    *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10) = puVar8 + 1;
    uVar10 = uVar7 & 0x7fff;
    if (uVar10 == 0x7fff) {
      local_88 = &local_7c;
      local_80 = 0;
    }
    else {
      lVar15 = *(longlong *)(param_1 + 0x80);
      local_80 = 1;
      local_88 = (undefined4 *)
                 ((ulonglong)(uVar10 * *(int *)(lVar15 + 0x80)) + *(longlong *)(lVar15 + 0x70) +
                 (longlong)*(int *)(lVar15 + 0x4c) * 4);
    }
  }
  if (*param_1 == '\x01') {
    iVar12 = *(int *)(param_1 + 0x30);
    bVar6 = *(byte *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar12);
    local_70 = (uint)bVar6;
    *(int *)(param_1 + 0x30) = iVar12 + 1;
    local_78 = (undefined4 *)
               ((longlong)*(int *)(param_1 + 0x44) * (ulonglong)bVar6 * 4 +
               *(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar12 * 8));
  }
  else {
    puVar8 = *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10);
    uVar7 = *puVar8;
    *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10) = puVar8 + 1;
    uVar10 = uVar7 & 0x7fff;
    if (uVar10 == 0x7fff) {
      local_78 = &local_6c;
      local_70 = 0;
    }
    else {
      lVar15 = *(longlong *)(param_1 + 0x80);
      local_70 = 1;
      local_78 = (undefined4 *)
                 ((ulonglong)(uVar10 * *(int *)(lVar15 + 0x80)) + *(longlong *)(lVar15 + 0x70) +
                 (longlong)*(int *)(lVar15 + 0x4c) * 4);
    }
  }
  if (*param_1 == '\x01') {
    iVar12 = *(int *)(param_1 + 0x30);
    bVar6 = *(byte *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar12);
    local_60 = (uint)bVar6;
    *(int *)(param_1 + 0x30) = iVar12 + 1;
    local_68 = (undefined4 *)
               ((longlong)*(int *)(param_1 + 0x44) * (ulonglong)bVar6 * 4 +
               *(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar12 * 8));
  }
  else {
    puVar8 = *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10);
    uVar7 = *puVar8;
    *(ushort **)(*(longlong *)(param_1 + 0x80) + 0x10) = puVar8 + 1;
    uVar10 = uVar7 & 0x7fff;
    if (uVar10 == 0x7fff) {
      local_68 = &local_5c;
      local_60 = 0;
    }
    else {
      lVar15 = *(longlong *)(param_1 + 0x80);
      local_60 = 1;
      local_68 = (undefined4 *)
                 ((ulonglong)(uVar10 * *(int *)(lVar15 + 0x80)) + *(longlong *)(lVar15 + 0x70) +
                 (longlong)*(int *)(lVar15 + 0x4c) * 4);
    }
  }
  lVar15 = *(longlong *)(local_c8 + 8);
  if (lVar15 != 0) {
    lVar9 = *(longlong *)(lVar15 + 0x10);
    if (((*(longlong *)(lVar9 + 0x78) != 0) &&
        (iVar12 = *(int *)(*(longlong *)(lVar9 + 0x78) + 0x120), iVar12 != 0)) &&
       (*(longlong *)(lVar15 + 0x18) == 0)) {
      local_e0 = (undefined1 *)CONCAT71(local_e0._1_7_,1);
      local_e0 = (undefined1 *)CONCAT44(0xffffffff,(undefined4)local_e0);
      FUN_140a6fb6a(&local_e0,*(undefined8 *)(lVar9 + 8),param_2);
      FUN_144a47c00(&local_58,*(undefined8 *)(lVar9 + 0x78),(ulonglong)local_e0 & 0xff,
                    local_e0._4_4_);
      if (local_58 == '\x01') {
        piVar13 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
        if (*param_1 != '\0') {
          piVar13 = (int *)(param_1 + 0x3c);
        }
        if (0 < *piVar13) {
          iVar11 = 0;
          do {
            puVar1 = local_c0 + (int)local_b0;
            uVar10 = *local_c0;
            uVar18 = 0x3f800000;
            uVar20 = 0x3f800000;
            uVar21 = 0x3f800000;
            uVar19 = 0x3f800000;
            if ((int)uVar10 < iVar12 && -1 < (int)uVar10) {
              if ((local_58 == '\x01') && ((int)uVar10 < local_54)) {
                if (local_57 == '\0') {
                  lVar15 = 0;
                  do {
                    uVar7 = *(ushort *)(alStack_50[lVar15] + (ulonglong)uVar10 * 2);
                    uVar16 = (uint)uVar7 << 0xd;
                    if ((uVar16 & 0xf800000) == 0xf800000) {
                      fVar17 = (float)(uVar16 | 0x70000000);
                    }
                    else if ((uVar16 & 0xf800000) == 0) {
                      fVar17 = (float)(uVar16 | 0x38800000) + -6.1035156e-05;
                    }
                    else {
                      fVar17 = (float)((uVar16 & 0xfffe000) + 0x38000000);
                    }
                    *(uint *)((longlong)&local_e0 + lVar15 * 4) =
                         (int)(short)uVar7 & 0x80000000U | (uint)fVar17;
                    lVar15 = lVar15 + 1;
                  } while (lVar15 != 4);
                }
                else {
                  lVar15 = 0;
                  do {
                    *(undefined4 *)((longlong)&local_e0 + lVar15 * 4) =
                         *(undefined4 *)(alStack_50[lVar15] + (ulonglong)uVar10 * 4);
                    lVar15 = lVar15 + 1;
                  } while (lVar15 != 4);
                }
              }
              else {
                local_e0 = &DAT_3f8000003f800000;
                uStack_d8 = &DAT_3f8000003f800000;
              }
              uVar18 = uStack_d8._4_4_;
              uVar20 = local_e0._4_4_;
              uVar21 = (undefined4)local_e0;
              uVar19 = (undefined4)uStack_d8;
            }
            piVar13 = local_a8 + local_a0;
            *local_a8 = -(uint)((int)uVar10 < iVar12 && -1 < (int)uVar10);
            puVar2 = local_98 + (int)local_90;
            *local_98 = uVar21;
            puVar3 = local_88 + (int)local_80;
            *local_88 = uVar20;
            puVar4 = local_78 + (int)local_70;
            *local_78 = uVar19;
            puVar5 = local_68 + (int)local_60;
            *local_68 = uVar18;
            iVar11 = iVar11 + 1;
            piVar14 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
            if (*param_1 != '\0') {
              piVar14 = (int *)(param_1 + 0x3c);
            }
            local_c0 = puVar1;
            local_a8 = piVar13;
            local_98 = puVar2;
            local_88 = puVar3;
            local_78 = puVar4;
            local_68 = puVar5;
          } while (iVar11 < *piVar14);
        }
        goto LAB_141231e49;
      }
    }
  }
  piVar13 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
  if (*param_1 != '\0') {
    piVar13 = (int *)(param_1 + 0x3c);
  }
  if (0 < *piVar13) {
    iVar12 = 0;
    do {
      piVar13 = local_a8 + local_a0;
      *local_a8 = 0;
      puVar2 = local_98 + (int)local_90;
      *local_98 = 0x3f800000;
      puVar3 = local_88 + (int)local_80;
      *local_88 = 0x3f800000;
      puVar4 = local_78 + (int)local_70;
      *local_78 = 0x3f800000;
      puVar5 = local_68 + (int)local_60;
      *local_68 = 0x3f800000;
      iVar12 = iVar12 + 1;
      piVar14 = (int *)(*(longlong *)(param_1 + 0x80) + 0x40);
      if (*param_1 != '\0') {
        piVar14 = (int *)(param_1 + 0x3c);
      }
      local_a8 = piVar13;
      local_98 = puVar2;
      local_88 = puVar3;
      local_78 = puVar4;
      local_68 = puVar5;
    } while (iVar12 < *piVar14);
  }
LAB_141231e49:
  if ((local_30 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141232168 FUN_141232168 body=12639 status=ok
// SIG undefined FUN_141232168(void)

void FUN_141232168(longlong param_1,int param_2,longlong *****param_3)

{
  ulonglong *puVar1;
  byte *pbVar2;
  code *pcVar3;
  DWORD DVar4;
  byte bVar5;
  undefined1 uVar6;
  uint uVar7;
  int iVar8;
  DWORD DVar9;
  DWORD DVar10;
  undefined4 uVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  undefined8 uVar16;
  longlong *plVar17;
  LPVOID pvVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  longlong *****ppppplVar21;
  ulonglong uVar22;
  longlong *plVar23;
  longlong ***ppplVar24;
  undefined1 *puVar25;
  longlong *****ppppplVar26;
  undefined8 *puVar27;
  uint uVar28;
  longlong ****pppplVar29;
  void *pvVar30;
  byte bVar31;
  int iVar32;
  longlong lVar33;
  void *pvVar34;
  longlong *plVar35;
  uint *puVar36;
  bool bVar37;
  undefined1 auStack_228 [32];
  undefined8 local_208;
  undefined8 local_200;
  undefined *local_1f8;
  code *local_1f0;
  wchar_t *local_1e8;
  code *local_1e0;
  undefined1 *local_1d8;
  undefined8 *local_1d0;
  code *local_1c8;
  code *local_1c0;
  void *local_1b8;
  longlong ****local_1b0;
  longlong *local_1a8;
  longlong *local_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  ulonglong local_188;
  uint local_17c;
  uint uStack_178;
  undefined4 uStack_174;
  uint local_170;
  undefined4 local_16c;
  longlong ****local_168;
  ulonglong uStack_160;
  ushort local_150;
  byte local_148;
  int local_140;
  longlong local_138;
  longlong lStack_130;
  int local_128;
  undefined8 local_120;
  longlong *plStack_118;
  longlong local_110;
  undefined8 uStack_108;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined8 local_e4;
  int local_dc;
  undefined1 local_d8 [8];
  undefined1 *local_d0;
  int local_c8;
  char local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  longlong **local_a8;
  ushort local_a0;
  byte local_98;
  undefined8 local_88;
  int iStack_80;
  undefined4 uStack_7c;
  longlong **local_78;
  ushort local_70;
  longlong *local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_228;
  local_138 = 0;
  lStack_130 = 0;
  local_128 = 0x19100;
  local_f0 = 0;
  local_e8 = 0;
  local_120 = 0;
  plStack_118 = (longlong *)0x0;
  local_110 = 0;
  uStack_108 = 0;
  local_e4 = 0xffffffff00000080;
  local_dc = 0;
  local_d0 = (undefined1 *)0x0;
  local_c8 = 0;
  local_17c = 0;
  local_140 = param_2;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c952210) && (FUN_144b3d300(&DAT_14c952210), DAT_14c952210 == -1)) {
    FUN_14475b26a();
    local_1f0 = FUN_1405ebbb2;
    local_1f8 = &DAT_14c9520b8;
    local_200 = 0;
    local_208 = 0x1008081;
    FUN_14000176a(&DAT_14c9521c0,L"FIntProperty",0x80);
    atexit(FUN_142816fad);
    _Init_thread_footer(&DAT_14c952210);
  }
  pbVar2 = *(byte **)(param_1 + 0x20);
  if (pbVar2 == (byte *)0x0) {
    *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(*(longlong *)(param_1 + 0x88) + 0x18);
    FUN_144a5ded6(param_1,&local_17c);
  }
  else {
    uVar16 = *(undefined8 *)(param_1 + 0x18);
    *(byte **)(param_1 + 0x20) = pbVar2 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar2];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar16,param_1,&local_17c);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar16,param_1,&local_17c);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar16 = *(undefined8 *)(pbVar2 + 1);
      *(byte **)(param_1 + 0x20) = pbVar2 + 9;
      local_17c = (uint)uVar16;
      uStack_178 = (uint)((ulonglong)uVar16 >> 0x20);
    }
    else {
      (*pcVar3)(uVar16,param_1,&local_17c);
    }
  }
  local_c0 = (char)local_17c;
  if ((local_17c & 0xff) == 1) {
    local_168 = (longlong ****)0x0;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c951cc8) && (FUN_144b3d300(&DAT_14c951cc8), DAT_14c951cc8 == -1)) {
      local_1f8 = (undefined *)FUN_1446ddbd2();
      local_1f0 = FUN_1468d96f0;
      local_200 = 0;
      local_208 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
    pbVar2 = *(byte **)(param_1 + 0x20);
    if (pbVar2 == (byte *)0x0) {
      *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(*(longlong *)(param_1 + 0x88) + 0x18);
      FUN_144a5ded6(param_1,&local_168);
    }
    else {
      uVar16 = *(undefined8 *)(param_1 + 0x18);
      *(byte **)(param_1 + 0x20) = pbVar2 + 1;
      pcVar3 = (code *)(&DAT_14c962c70)[*pbVar2];
      if (pcVar3 == FUN_14002ddda) {
        FUN_14002ddda(uVar16,param_1,&local_168);
      }
      else if (pcVar3 == FUN_14002dfbe) {
        FUN_14002dfbe(uVar16,param_1,&local_168);
      }
      else if (pcVar3 == (code *)&LAB_1428293cc) {
        local_168 = *(longlong *****)(pbVar2 + 1);
        *(byte **)(param_1 + 0x20) = pbVar2 + 9;
      }
      else {
        (*pcVar3)(uVar16,param_1,&local_168);
      }
    }
    local_88._0_4_ = 0;
    local_88._4_4_ = 0;
    iStack_80 = 0x19100;
    local_78 = (longlong **)0x0;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c947e70) && (FUN_144b3d300(&DAT_14c947e70), DAT_14c947e70 == -1)) {
      local_1f8 = (undefined *)FUN_1446ddbd2();
      local_1f0 = FUN_14170fd90;
      local_200 = 0x8000000000000000;
      local_208 = 0x8001;
      FUN_14000176a(&DAT_14c947e20,L"FGameDataHandleProperty",0);
      atexit(FUN_1427b4416);
      _Init_thread_footer(&DAT_14c947e70);
    }
    pbVar2 = *(byte **)(param_1 + 0x20);
    if (pbVar2 == (byte *)0x0) {
      *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(*(longlong *)(param_1 + 0x88) + 0x18);
      FUN_144a5ded6(param_1,&local_88);
    }
    else {
      uVar16 = *(undefined8 *)(param_1 + 0x18);
      *(byte **)(param_1 + 0x20) = pbVar2 + 1;
      pcVar3 = (code *)(&DAT_14c962c70)[*pbVar2];
      if (pcVar3 == FUN_14002ddda) {
        FUN_14002ddda(uVar16,param_1,&local_88);
      }
      else if (pcVar3 == FUN_14002dfbe) {
        FUN_14002dfbe(uVar16,param_1,&local_88);
      }
      else if (pcVar3 == (code *)&LAB_1428293cc) {
        uVar16 = *(undefined8 *)(pbVar2 + 1);
        *(byte **)(param_1 + 0x20) = pbVar2 + 9;
        local_88._0_4_ = (uint)uVar16;
        local_88._4_4_ = (int)((ulonglong)uVar16 >> 0x20);
      }
      else {
        (*pcVar3)(uVar16,param_1,&local_88);
      }
    }
    pppplVar29 = local_168;
    if ((longlong *****)local_168 == (longlong *****)0x0) {
LAB_141234691:
      plStack_118 = (longlong *)0x0;
    }
    else {
      if (DAT_14cb652c0 == 0) {
        local_1d0 = &local_b8;
        local_b8 = FUN_1449e2820;
        local_1c0 = FUN_14081d0ea;
        local_1c8 = FUN_1427b09ee;
        local_1d8 = &LAB_148715fe1;
        local_1e0 = FUN_146508b0f;
        local_1e8 = L"Engine";
        local_1f0 = (code *)0x0;
        local_1f8 = (undefined *)CONCAT44(local_1f8._4_4_,0x10004001);
        local_200 = CONCAT44(local_200._4_4_,8);
        local_208 = CONCAT44(local_208._4_4_,0x28);
        FUN_14081cfa3(L"/Script/GbxGame",L"GbxSkillOwner",&DAT_14cb652c0);
      }
      plVar12 = (longlong *)(*(code *)(*pppplVar29)[0x51])(pppplVar29,DAT_14cb652c0);
      if (plVar12 == (longlong *)0x0) goto LAB_141234691;
      if (DAT_14cb652c0 == 0) {
        local_1d0 = &local_b8;
        local_b8 = FUN_1449e2820;
        local_1c0 = FUN_14081d0ea;
        local_1c8 = FUN_1427b09ee;
        local_1d8 = &LAB_148715fe1;
        local_1e0 = FUN_146508b0f;
        local_1e8 = L"Engine";
        local_1f0 = (code *)0x0;
        local_1f8 = (undefined *)CONCAT44(local_1f8._4_4_,0x10004001);
        local_200 = CONCAT44(local_200._4_4_,8);
        local_208 = CONCAT44(local_208._4_4_,0x28);
        FUN_14081cfa3(L"/Script/GbxGame",L"GbxSkillOwner",&DAT_14cb652c0);
      }
      plStack_118 = (longlong *)FUN_144718840(plVar12,DAT_14cb652c0);
      if (plVar12 == plStack_118) goto LAB_141234691;
    }
    if ((lStack_130 != CONCAT44(local_88._4_4_,(uint)local_88)) || (local_128 != iStack_80)) {
      local_128 = iStack_80;
      local_120 = 0;
      lStack_130 = CONCAT44(local_88._4_4_,(uint)local_88);
    }
  }
  else if ((local_17c & 0xff) == 2) {
    local_88._0_4_ = 0;
    local_88._4_4_ = 0;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c951cc8) && (FUN_144b3d300(&DAT_14c951cc8), DAT_14c951cc8 == -1)) {
      local_1f8 = (undefined *)FUN_1446ddbd2();
      local_1f0 = FUN_1468d96f0;
      local_200 = 0;
      local_208 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
    pbVar2 = *(byte **)(param_1 + 0x20);
    if (pbVar2 == (byte *)0x0) {
      *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(*(longlong *)(param_1 + 0x88) + 0x18);
      FUN_144a5ded6(param_1,&local_88);
    }
    else {
      uVar16 = *(undefined8 *)(param_1 + 0x18);
      *(byte **)(param_1 + 0x20) = pbVar2 + 1;
      pcVar3 = (code *)(&DAT_14c962c70)[*pbVar2];
      if (pcVar3 == FUN_14002ddda) {
        FUN_14002ddda(uVar16,param_1,&local_88);
      }
      else if (pcVar3 == FUN_14002dfbe) {
        FUN_14002dfbe(uVar16,param_1,&local_88);
      }
      else if (pcVar3 == (code *)&LAB_1428293cc) {
        uVar16 = *(undefined8 *)(pbVar2 + 1);
        *(byte **)(param_1 + 0x20) = pbVar2 + 9;
        local_88._0_4_ = (uint)uVar16;
        local_88._4_4_ = (int)((ulonglong)uVar16 >> 0x20);
      }
      else {
        (*pcVar3)(uVar16,param_1,&local_88);
      }
    }
    local_138 = CONCAT44(local_88._4_4_,(uint)local_88);
  }
  local_188 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c951cc8) && (FUN_144b3d300(&DAT_14c951cc8), DAT_14c951cc8 == -1)) {
    local_1f8 = (undefined *)FUN_1446ddbd2();
    local_1f0 = FUN_1468d96f0;
    local_200 = 0;
    local_208 = 0x4008001;
    FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000);
    atexit(FUN_14281144d);
    _Init_thread_footer(&DAT_14c951cc8);
  }
  pbVar2 = *(byte **)(param_1 + 0x20);
  if (pbVar2 == (byte *)0x0) {
    *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(*(longlong *)(param_1 + 0x88) + 0x18);
    FUN_144a5ded6(param_1,&local_188);
  }
  else {
    uVar16 = *(undefined8 *)(param_1 + 0x18);
    *(byte **)(param_1 + 0x20) = pbVar2 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar2];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar16,param_1,&local_188);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar16,param_1,&local_188);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_188 = *(ulonglong *)(pbVar2 + 1);
      *(byte **)(param_1 + 0x20) = pbVar2 + 9;
    }
    else {
      (*pcVar3)(uVar16,param_1,&local_188);
    }
  }
  local_198 = 0;
  uStack_190 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c952a58) && (FUN_144b3d300(&DAT_14c952a58), DAT_14c952a58 == -1)) {
    local_1f8 = (undefined *)FUN_1446ddbd2();
    local_1f0 = FUN_1403a682c;
    local_200 = 0;
    local_208 = 0x108001;
    FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000);
    atexit(FUN_142818c9e);
    _Init_thread_footer(&DAT_14c952a58);
  }
  pbVar2 = *(byte **)(param_1 + 0x20);
  if (pbVar2 == (byte *)0x0) {
    *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(*(longlong *)(param_1 + 0x88) + 0x18);
    FUN_144a5ded6(param_1,&local_198);
  }
  else {
    uVar16 = *(undefined8 *)(param_1 + 0x18);
    *(byte **)(param_1 + 0x20) = pbVar2 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar2];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar16,param_1,&local_198);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar16,param_1,&local_198);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_198 = *(undefined8 *)(pbVar2 + 1);
      *(byte **)(param_1 + 0x20) = pbVar2 + 9;
    }
    else {
      (*pcVar3)(uVar16,param_1,&local_198);
    }
  }
  if ((((local_188 != 0) && (*(int *)(local_188 + 0x4c) == (int)local_198)) &&
      (*(int *)(local_188 + 0x50) == local_198._4_4_)) &&
     (((*(int *)(local_188 + 0x54) == (int)uStack_190 &&
       (*(int *)(local_188 + 0x58) == uStack_190._4_4_)) &&
      ((longlong)*(int *)(local_188 + 0x40) != 0)))) {
    ppppplVar21 = *(longlong ******)(local_188 + 0x38);
    lVar15 = (longlong)*(int *)(local_188 + 0x40) * 0xc;
    do {
      switch(*(undefined1 *)(ppppplVar21 + 1)) {
      case 1:
        uStack_178 = 0;
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c951d20) &&
           (FUN_144b3d300(&DAT_14c951d20), DAT_14c951d20 == -1)) {
          local_1f8 = (undefined *)FUN_1446ddbd2();
          local_1f0 = FUN_14067a048;
          local_200 = 0;
          local_208 = 0x28001;
          FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000);
          atexit(FUN_142811fe5);
          _Init_thread_footer(&DAT_14c951d20);
        }
        pbVar2 = *(byte **)(param_1 + 0x20);
        if (pbVar2 == (byte *)0x0) {
          *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(*(longlong *)(param_1 + 0x88) + 0x18);
          FUN_144a5ded6(param_1,&uStack_178);
        }
        else {
          uVar16 = *(undefined8 *)(param_1 + 0x18);
          *(byte **)(param_1 + 0x20) = pbVar2 + 1;
          pcVar3 = (code *)(&DAT_14c962c70)[*pbVar2];
          if (pcVar3 == FUN_14002ddda) {
            FUN_14002ddda(uVar16,param_1,&uStack_178);
          }
          else if (pcVar3 == FUN_14002dfbe) {
            FUN_14002dfbe(uVar16,param_1,&uStack_178);
          }
          else if (pcVar3 == (code *)&LAB_1428293cc) {
            uVar16 = *(undefined8 *)(pbVar2 + 1);
            *(byte **)(param_1 + 0x20) = pbVar2 + 9;
            uStack_178 = (uint)uVar16;
            uStack_174 = (undefined4)((ulonglong)uVar16 >> 0x20);
          }
          else {
            (*pcVar3)(uVar16,param_1,&uStack_178);
          }
        }
        local_88._0_4_ = (uint)(uStack_178 != 0);
        local_68 = (longlong *)CONCAT71(local_68._1_7_,1);
        goto LAB_141232809;
      case 2:
        uStack_178 = 0;
        FUN_144a7452c();
        if (*(longlong *)(param_1 + 0x20) == 0) {
          *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(*(longlong *)(param_1 + 0x88) + 0x18);
          FUN_144a5ded6(param_1,&uStack_178);
        }
        else {
          FUN_14470e992(param_1,*(undefined8 *)(param_1 + 0x18),&uStack_178);
        }
        local_88._0_4_ = uStack_178;
        local_68 = (longlong *)CONCAT71(local_68._1_7_,2);
        goto LAB_141232809;
      case 3:
        uStack_178 = 0;
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c9523c8) &&
           (FUN_144b3d300(&DAT_14c9523c8), DAT_14c9523c8 == -1)) {
          FUN_14475b26a();
          local_1f0 = FUN_1408a629c;
          local_1f8 = &DAT_14c9520b8;
          local_200 = 0;
          local_208 = 0x1008101;
          FUN_14000176a(&DAT_14c952378,L"FFloatProperty",0x100);
          atexit(FUN_14281708e);
          _Init_thread_footer(&DAT_14c9523c8);
        }
        pbVar2 = *(byte **)(param_1 + 0x20);
        if (pbVar2 == (byte *)0x0) {
          *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(*(longlong *)(param_1 + 0x88) + 0x18);
          FUN_144a5ded6(param_1,&uStack_178);
        }
        else {
          uVar16 = *(undefined8 *)(param_1 + 0x18);
          *(byte **)(param_1 + 0x20) = pbVar2 + 1;
          pcVar3 = (code *)(&DAT_14c962c70)[*pbVar2];
          if (pcVar3 == FUN_14002ddda) {
            FUN_14002ddda(uVar16,param_1,&uStack_178);
          }
          else if (pcVar3 == FUN_14002dfbe) {
            FUN_14002dfbe(uVar16,param_1,&uStack_178);
          }
          else if (pcVar3 == (code *)&LAB_1428293cc) {
            uVar16 = *(undefined8 *)(pbVar2 + 1);
            *(byte **)(param_1 + 0x20) = pbVar2 + 9;
            uStack_178 = (uint)uVar16;
            uStack_174 = (undefined4)((ulonglong)uVar16 >> 0x20);
          }
          else {
            (*pcVar3)(uVar16,param_1,&uStack_178);
          }
        }
        local_88._0_4_ = uStack_178;
        local_68 = (longlong *)CONCAT71(local_68._1_7_,3);
LAB_141232809:
        local_70 = 4;
        local_b8 = (code *)ppppplVar21;
        uStack_b0 = &local_88;
        FUN_140881f5a(&local_110,&local_168,&local_b8);
        pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)(byte)local_68 * 0x120));
        if (pcVar3 != (code *)0x0) {
          if (local_70 < 0x19) {
            puVar27 = &local_88;
          }
          else {
            puVar27 = (undefined8 *)CONCAT44(local_88._4_4_,(uint)local_88);
          }
          (*pcVar3)(puVar27);
        }
LAB_1412328dc:
        if (0x18 < local_70) {
          FUN_1400020a8(CONCAT44(local_88._4_4_,(uint)local_88));
        }
        break;
      case 4:
        FUN_1446dcc8c();
        if (*(longlong *)(param_1 + 0x20) == 0) {
          *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(*(longlong *)(param_1 + 0x88) + 0x18);
          FUN_144a5ded6(param_1,&local_b8);
        }
        else {
          FUN_14470e992(param_1,*(undefined8 *)(param_1 + 0x18),&local_b8);
        }
        local_88._0_4_ = (uint)local_b8;
        local_88._4_4_ = local_b8._4_4_;
        iStack_80 = (int)uStack_b0;
        uStack_7c = uStack_b0._4_4_;
        local_68 = (longlong *)CONCAT71(local_68._1_7_,4);
        goto LAB_141234b41;
      case 5:
        FUN_1446dcc8c();
        if (*(longlong *)(param_1 + 0x20) == 0) {
          *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(*(longlong *)(param_1 + 0x88) + 0x18);
          FUN_144a5ded6(param_1,&local_b8);
        }
        else {
          FUN_14470e992(param_1,*(undefined8 *)(param_1 + 0x18),&local_b8);
        }
        local_88._0_4_ = (uint)local_b8;
        local_88._4_4_ = local_b8._4_4_;
        iStack_80 = (int)uStack_b0;
        uStack_7c = uStack_b0._4_4_;
        local_68 = (longlong *)CONCAT71(local_68._1_7_,5);
LAB_141234b41:
        local_70 = 0x18;
        ppppplVar26 = &local_168;
        local_78 = local_a8;
        goto LAB_141234a27;
      case 6:
        local_168 = (longlong ****)0x0;
        FUN_1446f4b16();
        if (*(longlong *)(param_1 + 0x20) == 0) {
          *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(*(longlong *)(param_1 + 0x88) + 0x18);
          FUN_144a5ded6(param_1,&local_168);
        }
        else {
          FUN_14470e992(param_1,*(undefined8 *)(param_1 + 0x18),&local_168);
        }
        local_70 = 8;
        local_88._0_4_ = 0;
        local_88._4_4_ = 0;
        FUN_14485c47a(&local_88,local_168);
        local_68 = (longlong *)CONCAT71(local_68._1_7_,6);
        goto LAB_141234a1f;
      case 7:
        local_168 = (longlong ****)0x0;
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c951cc8) &&
           (FUN_144b3d300(&DAT_14c951cc8), DAT_14c951cc8 == -1)) {
          local_1f8 = (undefined *)FUN_1446ddbd2();
          local_1f0 = FUN_1468d96f0;
          local_200 = 0;
          local_208 = 0x4008001;
          FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000);
          atexit(FUN_14281144d);
          _Init_thread_footer(&DAT_14c951cc8);
        }
        pbVar2 = *(byte **)(param_1 + 0x20);
        if (pbVar2 == (byte *)0x0) {
          *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(*(longlong *)(param_1 + 0x88) + 0x18);
          FUN_144a5ded6(param_1,&local_168);
        }
        else {
          uVar16 = *(undefined8 *)(param_1 + 0x18);
          *(byte **)(param_1 + 0x20) = pbVar2 + 1;
          pcVar3 = (code *)(&DAT_14c962c70)[*pbVar2];
          if (pcVar3 == FUN_14002ddda) {
            FUN_14002ddda(uVar16,param_1,&local_168);
          }
          else if (pcVar3 == FUN_14002dfbe) {
            FUN_14002dfbe(uVar16,param_1,&local_168);
          }
          else if (pcVar3 == (code *)&LAB_1428293cc) {
            local_168 = *(longlong *****)(pbVar2 + 1);
            *(byte **)(param_1 + 0x20) = pbVar2 + 9;
          }
          else {
            (*pcVar3)(uVar16,param_1,&local_168);
          }
        }
        local_70 = 8;
        local_88._4_4_ = 0;
        if ((longlong *****)local_168 == (longlong *****)0x0) {
          local_88._0_4_ = 0;
          iVar8 = 0;
        }
        else {
          local_88._0_4_ = *(uint *)((longlong)local_168 + 0xc);
          if ((int)(uint)local_88 < DAT_14c9647dc) {
            lVar13 = (ulonglong)(((uint)local_88 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)((uint)local_88 >> 0x10) * 8);
          }
          else {
            lVar13 = 0;
          }
          iVar8 = *(int *)(lVar13 + 0x10);
          if (*(int *)(lVar13 + 0x10) == 0) {
            LOCK();
            iVar8 = DAT_14c964868 + 1;
            UNLOCK();
            iVar32 = DAT_14c964868 + 1;
            bVar37 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar8;
            if (bVar37) {
              local_1b0 = (longlong ****)CONCAT44(local_1b0._4_4_,iVar32);
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,iVar32);
              iVar32 = (int)local_1b0;
            }
            LOCK();
            iVar8 = *(int *)(lVar13 + 0x10);
            bVar37 = iVar8 == 0;
            if (bVar37) {
              *(int *)(lVar13 + 0x10) = iVar32;
              iVar8 = 0;
            }
            UNLOCK();
            if (bVar37) {
              iVar8 = iVar32;
            }
          }
        }
        local_68 = (longlong *)CONCAT71(local_68._1_7_,7);
        local_b8 = (code *)ppppplVar21;
        uStack_b0 = &local_88;
        local_88._4_4_ = iVar8;
        FUN_140881f5a(&local_110,&uStack_178,&local_b8);
        pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)(byte)local_68 * 0x120));
        if (pcVar3 != (code *)0x0) {
          if (local_70 < 0x19) {
            puVar27 = &local_88;
          }
          else {
            puVar27 = (undefined8 *)CONCAT44(local_88._4_4_,(uint)local_88);
          }
          (*pcVar3)(puVar27);
        }
        if (0x18 < local_70) {
          FUN_1400020a8(CONCAT44(local_88._4_4_,(uint)local_88));
        }
        break;
      case 8:
        local_168 = (longlong ****)0x0;
        uStack_160 = 0;
        FUN_144a49f24();
        if (*(longlong *)(param_1 + 0x20) == 0) {
          *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(*(longlong *)(param_1 + 0x88) + 0x18);
          FUN_144a5ded6(param_1,&local_168);
        }
        else {
          FUN_14470e992(param_1,*(undefined8 *)(param_1 + 0x18),&local_168);
        }
        local_70 = 0x10;
        local_88._0_4_ = 0;
        local_88._4_4_ = 0;
        lVar13 = (longlong)(int)uStack_160;
        local_1b0 = local_168;
        iStack_80 = (int)uStack_160;
        if (lVar13 == 0) {
          uStack_7c = 0;
        }
        else {
          FUN_1446dd670(&local_88,uStack_160 & 0xffffffff,0);
          memcpy((void *)CONCAT44(local_88._4_4_,(uint)local_88),local_1b0,lVar13 * 2);
        }
        puVar27 = &local_88;
        local_68 = (longlong *)CONCAT71(local_68._1_7_,8);
        local_b8 = (code *)ppppplVar21;
        uStack_b0 = puVar27;
        FUN_140881f5a(&local_110,&uStack_178);
        pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)(byte)local_68 * 0x120));
        if (pcVar3 != (code *)0x0) {
          if (0x18 < local_70) {
            puVar27 = (undefined8 *)CONCAT44(local_88._4_4_,(uint)local_88);
          }
          (*pcVar3)(puVar27);
        }
        if (0x18 < local_70) {
          FUN_1400020a8(CONCAT44(local_88._4_4_,(uint)local_88));
        }
        if ((longlong *****)local_168 != (longlong *****)0x0) {
          FUN_1400020a8();
        }
        break;
      case 0xe:
        local_168 = (longlong ****)0x0;
        FUN_1446f4b16();
        if (*(longlong *)(param_1 + 0x20) == 0) {
          *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(*(longlong *)(param_1 + 0x88) + 0x18);
          FUN_144a5ded6(param_1,&local_168);
        }
        else {
          FUN_14470e992(param_1,*(undefined8 *)(param_1 + 0x18),&local_168);
        }
        local_70 = 8;
        local_88._0_4_ = 0;
        local_88._4_4_ = 0;
        FUN_14485c47a(&local_88,local_168);
        local_68 = (longlong *)CONCAT71(local_68._1_7_,0xe);
        goto LAB_141234a1f;
      case 0x12:
        local_168 = (longlong ****)0x0;
        FUN_144a63fc8();
        if (*(longlong *)(param_1 + 0x20) == 0) {
          *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(*(longlong *)(param_1 + 0x88) + 0x18);
          FUN_144a5ded6(param_1,&local_168);
        }
        else {
          FUN_14470e992(param_1,*(undefined8 *)(param_1 + 0x18),&local_168);
        }
        local_70 = 8;
        local_88._0_4_ = (uint)local_168;
        local_88._4_4_ = (int)((ulonglong)local_168 >> 0x20);
        local_68 = (longlong *)CONCAT71(local_68._1_7_,0x12);
LAB_141234a1f:
        ppppplVar26 = (longlong *****)&local_b8;
LAB_141234a27:
        pppplVar29 = (longlong ****)&local_88;
        *ppppplVar26 = (longlong ****)ppppplVar21;
        ppppplVar26[1] = pppplVar29;
        FUN_140881f5a(&local_110,&uStack_178);
        pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)(byte)local_68 * 0x120));
        if (pcVar3 != (code *)0x0) {
          if (0x18 < local_70) {
            pppplVar29 = (longlong ****)CONCAT44(local_88._4_4_,(uint)local_88);
          }
          (*pcVar3)(pppplVar29);
        }
        if (0x18 < local_70) {
          FUN_1400020a8(CONCAT44(local_88._4_4_,(uint)local_88));
        }
        break;
      case 0x15:
        local_168 = (longlong ****)0x0;
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c952420) &&
           (FUN_144b3d300(&DAT_14c952420), DAT_14c952420 == -1)) {
          FUN_14475b26a();
          local_1f0 = FUN_14079c5e4;
          local_1f8 = &DAT_14c9520b8;
          local_208 = 0x101008001;
          local_200 = 0;
          FUN_14000176a(&DAT_14c9523d0,L"FDoubleProperty");
          atexit(FUN_1428170bb);
          _Init_thread_footer(&DAT_14c952420);
        }
        pbVar2 = *(byte **)(param_1 + 0x20);
        if (pbVar2 == (byte *)0x0) {
          *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(*(longlong *)(param_1 + 0x88) + 0x18);
          FUN_144a5ded6(param_1,&local_168);
        }
        else {
          uVar16 = *(undefined8 *)(param_1 + 0x18);
          *(byte **)(param_1 + 0x20) = pbVar2 + 1;
          pcVar3 = (code *)(&DAT_14c962c70)[*pbVar2];
          if (pcVar3 == FUN_14002ddda) {
            FUN_14002ddda(uVar16,param_1,&local_168);
          }
          else if (pcVar3 == FUN_14002dfbe) {
            FUN_14002dfbe(uVar16,param_1,&local_168);
          }
          else if (pcVar3 == (code *)&LAB_1428293cc) {
            local_168 = *(longlong *****)(pbVar2 + 1);
            *(byte **)(param_1 + 0x20) = pbVar2 + 9;
          }
          else {
            (*pcVar3)(uVar16,param_1,&local_168);
          }
        }
        local_70 = 8;
        local_88._0_4_ = (uint)local_168;
        local_88._4_4_ = (int)((ulonglong)local_168 >> 0x20);
        local_68 = (longlong *)CONCAT71(local_68._1_7_,0x15);
        local_b8 = (code *)ppppplVar21;
        uStack_b0 = &local_88;
        FUN_140881f5a(&local_110,&uStack_178,&local_b8);
        pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)(byte)local_68 * 0x120));
        if (pcVar3 != (code *)0x0) {
          puVar27 = &local_88;
          if (0x18 < local_70) {
            puVar27 = (undefined8 *)CONCAT44(local_88._4_4_,(uint)local_88);
          }
          (*pcVar3)(puVar27);
        }
        goto LAB_1412328dc;
      }
      ppppplVar21 = (longlong *****)((longlong)ppppplVar21 + 0xc);
      lVar15 = lVar15 + -0xc;
    } while (lVar15 != 0);
  }
  uVar22 = local_188;
  *(ulonglong *)(param_1 + 0x20) =
       (*(longlong *)(param_1 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_1 + 0x20) == 0);
  if (local_140 == 1) {
    if (local_c0 == '\x01') {
      local_88 = (longlong ***)CONCAT44(local_88._4_4_,(uint)local_88);
      if (plStack_118 != (longlong *)0x0) {
        lVar13 = (**(code **)(*plStack_118 + 0x10))();
        lVar14 = FUN_140a6b362(&lStack_130);
        local_88 = (longlong ***)CONCAT44(local_88._4_4_,(uint)local_88);
        if (((*(byte *)(lVar13 + 0x20c) & 1) == 0) &&
           (local_88 = (longlong ***)CONCAT44(local_88._4_4_,(uint)local_88),
           (longlong)*(int *)(lVar13 + 0x40) != 0)) {
          lVar33 = 0;
          do {
            lVar15 = *(longlong *)(*(longlong *)(lVar13 + 0x38) + lVar33);
            if (((lVar15 != 0) && ((*(uint *)(lVar15 + 8) >> 0x1e & 1) == 0)) &&
               (*(longlong *)(lVar15 + 0xa8) == lVar14)) {
              local_88 = (longlong ***)CONCAT44(local_88._4_4_,(uint)local_88);
              if ((*(byte *)(lVar15 + 0x248) & 2) != 0) goto LAB_14123294a;
              break;
            }
            lVar33 = lVar33 + 8;
            local_88 = (longlong ***)CONCAT44(local_88._4_4_,(uint)local_88);
          } while ((longlong)*(int *)(lVar13 + 0x40) * 8 != lVar33);
        }
      }
    }
    else {
      local_88 = (longlong ***)CONCAT44(local_88._4_4_,(uint)local_88);
      if ((local_c0 == '\x02') &&
         (lVar15 = local_138, local_88 = (longlong ***)CONCAT44(local_88._4_4_,(uint)local_88),
         local_138 != 0)) {
LAB_14123294a:
        local_88._0_4_ = (uint)local_88 & 0xffffff00;
        local_88._4_4_ = 0xffffffff;
        iStack_80 = 0;
        FUN_1412352c8(lVar15,uVar22 + 0x4c,&local_110);
        local_88 = (longlong ***)CONCAT44(local_88._4_4_,(uint)local_88);
      }
    }
    goto LAB_1412326ea;
  }
  local_1b0 = (longlong ****)param_3;
  local_88 = (longlong ***)CONCAT44(local_88._4_4_,(uint)local_88);
  if (local_140 != 2) goto LAB_1412326ea;
  if (local_c0 == '\x02') {
    if ((local_138 != 0) && (*(longlong *)(local_138 + 0x88) != 0)) {
      plVar12 = *(longlong **)(local_138 + 0x90);
      goto LAB_141232b10;
    }
  }
  else {
    plVar12 = plStack_118;
    if (local_c0 == '\x01') {
LAB_141232b10:
      if ((plVar12 != (longlong *)0x0) && (lVar15 = (**(code **)(*plVar12 + 0x10))(), lVar15 != 0))
      {
        if (uVar22 != 0 && DAT_14c950c29 == 1) {
          FUN_1456cec3c(uVar22);
        }
        if ((~DAT_14c950c29 & 1) == 0 && uVar22 != 0) {
          FUN_1456cec3c(uVar22);
        }
        local_88._0_4_ = (uint)uVar22;
        local_88._4_4_ = (int)(uVar22 >> 0x20);
        if ((~DAT_14c950c29 & 1) == 0 && uVar22 != 0) {
          FUN_1456cec3c(uVar22);
        }
        if ((uVar22 != 0) && ((DAT_14c950c29 & 1) != 0)) {
          FUN_1456cec3c(uVar22);
        }
        uVar7 = ((uint)(uVar22 >> 0x14) & 0xffff ^ (uint)(uVar22 >> 4)) * -0x7a143595;
        uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
        iVar8 = FUN_141235384((longlong *)(lVar15 + 0x58),uVar7 >> 0x10 ^ uVar7,&local_88);
        if (iVar8 != -1) {
          lVar15 = (longlong)iVar8 * 0x50 + *(longlong *)(lVar15 + 0x58);
          plVar12 = (longlong *)(lVar15 + 8);
          if (plVar12 != (longlong *)0x0 && lVar15 != 0) {
            uVar16 = FUN_140010bca();
            local_208 = CONCAT71(local_208._1_7_,1);
            plVar17 = (longlong *)FUN_1414c7324(lVar15 + 0x10,0,uVar16,0);
            if ((((plVar17 != (longlong *)0x0) && (*plVar12 != 0)) &&
                ((*(uint *)(*plVar12 + 8) >> 0x1e & 1) == 0)) &&
               (*(int *)(uVar22 + 0x40) + 1U == (uint)*(byte *)((longlong)plVar17 + 0xb4))) {
              DVar10 = DAT_14c7585d0;
              local_1a8 = plVar17;
              if (DAT_14c7585d0 == 0xffffffff) {
                DVar10 = TlsAlloc();
                DVar9 = 0xffffffff;
                LOCK();
                bVar37 = DAT_14c7585d0 != 0xffffffff;
                DVar4 = DVar10;
                if (bVar37) {
                  DVar9 = DAT_14c7585d0;
                  DVar4 = DAT_14c7585d0;
                }
                DAT_14c7585d0 = DVar4;
                UNLOCK();
                if (bVar37) {
                  TlsFree(DVar10);
                  DVar10 = DVar9;
                }
              }
              plVar17 = local_1a8;
              pvVar18 = TlsGetValue(DVar10);
              if (pvVar18 == (LPVOID)0x0) {
                pvVar18 = (LPVOID)FUN_140036a08(&local_88);
                FUN_140fddf04(pvVar18);
                TlsSetValue(DVar10,pvVar18);
              }
              local_88 = (longlong ***)((longlong)pvVar18 + 0x10);
              iStack_80 = (int)*(undefined8 *)((longlong)pvVar18 + 0x10);
              uStack_7c = (undefined4)((ulonglong)*(undefined8 *)((longlong)pvVar18 + 0x10) >> 0x20)
              ;
              local_78 = *(longlong ***)((longlong)pvVar18 + 0x20);
              local_70 = local_70 & 0xff00;
              local_68 = *(longlong **)((longlong)pvVar18 + 0x28);
              *(undefined8 **)((longlong)pvVar18 + 0x28) = &local_88;
              *(int *)((longlong)pvVar18 + 0x30) = *(int *)((longlong)pvVar18 + 0x30) + 1;
              uVar20 = (ulonglong)*(ushort *)((longlong)plVar17 + 0xb6);
              DVar10 = DAT_14c7585d0;
              if (DAT_14c7585d0 == 0xffffffff) {
                DVar10 = TlsAlloc();
                DVar9 = 0xffffffff;
                LOCK();
                bVar37 = DAT_14c7585d0 != 0xffffffff;
                DVar4 = DVar10;
                if (bVar37) {
                  DVar9 = DAT_14c7585d0;
                  DVar4 = DAT_14c7585d0;
                }
                DAT_14c7585d0 = DVar4;
                UNLOCK();
                plVar17 = local_1a8;
                if (bVar37) {
                  TlsFree(DVar10);
                  plVar17 = local_1a8;
                  DVar10 = DVar9;
                }
              }
              pvVar18 = TlsGetValue(DVar10);
              if (pvVar18 == (LPVOID)0x0) {
                pvVar18 = (LPVOID)FUN_140036a08(&local_b8);
                FUN_140fddf04(pvVar18);
                TlsSetValue(DVar10,pvVar18);
              }
              puVar1 = (ulonglong *)((longlong)pvVar18 + 0x10);
              local_1b8 = (void *)(*(longlong *)((longlong)pvVar18 + 0x10) + 0xfU &
                                  0xfffffffffffffff0);
              uVar19 = (longlong)local_1b8 + uVar20;
              if (*(ulonglong *)((longlong)pvVar18 + 0x18) < uVar19) {
                FUN_140023dd8(puVar1);
                local_1b8 = (void *)(*puVar1 + 0xf & 0xfffffffffffffff0);
                uVar19 = (longlong)local_1b8 + uVar20;
              }
              *puVar1 = uVar19;
              memset(local_1b8,0,uVar20);
              plVar23 = plVar17;
LAB_141232d2c:
              plVar35 = (longlong *)plVar17[10];
LAB_141232d30:
              if (plVar35 == (longlong *)0x0) goto LAB_141234f53;
              if ((~*(uint *)(plVar35[1] + 0x18) & 0x8001) != 0) goto LAB_141235040;
              lVar15 = plVar35[7];
              if (-1 < (char)lVar15) goto LAB_141232d59;
              lVar13 = 0;
              bVar31 = 0;
              local_1a0 = plVar17;
LAB_141233366:
              uVar7 = (uint)lVar15;
              if ((uVar7 >> 9 & 1) == 0) {
                (**(code **)(*plVar35 + 0x160))(plVar35);
                uVar7 = (uint)plVar35[7];
              }
              if ((uVar7 >> 8 & 1) != 0) {
LAB_141233564:
                pvVar30 = local_1b8;
                plVar23 = local_1a8;
                if ((bVar31 & 1) == 0) goto LAB_141232d5c;
                goto LAB_141232d6e;
              }
              bVar5 = 1;
              if ((lVar13 < *(int *)(uVar22 + 0x40)) && ((int)uStack_108 != local_dc)) {
                lVar15 = *(longlong *)(*(longlong *)(uVar22 + 0x38) + lVar13 * 0xc);
                uVar7 = (uint)((ulonglong)lVar15 >> 0x10);
                uVar28 = (uint)lVar15 & 0xffff;
                puVar25 = local_d0;
                if (local_d0 == (undefined1 *)0x0) {
                  puVar25 = local_d8;
                }
                iVar8 = *(int *)(puVar25 +
                                (ulonglong)
                                (local_c8 - 1U &
                                (int)((ulonglong)lVar15 >> 0x20) + ((uint)lVar15 << 0x10 | uVar28) +
                                (uVar7 << 0x13 | uVar7 & 0xffff) + (uVar28 >> 4)) * 4);
                while (iVar8 != -1) {
                  lVar14 = local_110 + (longlong)iVar8 * 0x38;
                  if (*(longlong *)(local_110 + (longlong)iVar8 * 0x38) == lVar15) {
                    if (lVar14 + 8 != 0 && lVar14 != 0) {
                      bVar5 = FUN_1470ee80c(lVar14 + 8,plVar35,
                                            (longlong)*(int *)((longlong)plVar35 + 0x44) +
                                            (longlong)local_1b8,0);
                      bVar5 = bVar5 ^ 1 | bVar31;
                    }
                    break;
                  }
                  iVar8 = *(int *)(lVar14 + 0x30);
                }
              }
              plVar35 = plVar35 + 3;
              do {
                for (plVar35 = (longlong *)*plVar35; plVar35 != (longlong *)0x0;
                    plVar35 = (longlong *)plVar35[3]) {
                  if ((~*(uint *)(plVar35[1] + 0x18) & 0x8001) == 0) {
                    lVar13 = lVar13 + 1;
                    lVar15 = plVar35[7];
                    bVar31 = bVar5;
                    if ((char)lVar15 < '\0') goto LAB_141233366;
                    plVar35 = (longlong *)0x0;
                    goto LAB_141233564;
                  }
                }
                if (*(code **)(*local_1a0 + 0x2b0) == (code *)&LAB_1446e8c94) {
                  local_1a0 = (longlong *)local_1a0[8];
                }
                else {
                  local_1a0 = (longlong *)(**(code **)(*local_1a0 + 0x2b0))(local_1a0);
                }
                plVar35 = local_1a0 + 10;
              } while (local_1a0 != (longlong *)0x0);
              plVar23 = local_1a8;
              if ((bVar5 & 1) == 0) {
                plVar35 = (longlong *)0x0;
                goto LAB_141232d5c;
              }
              local_150 = 0;
              local_148 = 0;
              pvVar30 = local_1b8;
              goto LAB_1412338d5;
            }
          }
        }
      }
    }
  }
  local_150 = 0;
  local_148 = 0;
  goto switchD_14123506c_caseD_3;
LAB_141234f53:
  if (*(code **)(*plVar17 + 0x2b0) == (code *)&LAB_1446e8c94) {
    plVar17 = (longlong *)plVar17[8];
  }
  else {
    plVar17 = (longlong *)(**(code **)(*plVar17 + 0x2b0))(plVar17);
  }
  plVar23 = local_1a8;
  if (plVar17 == (longlong *)0x0) goto LAB_141232d59;
  goto LAB_141232d2c;
LAB_141235040:
  plVar35 = (longlong *)plVar35[3];
  goto LAB_141232d30;
LAB_141232d59:
  plVar35 = (longlong *)0x0;
LAB_141232d5c:
  pvVar30 = local_1b8;
  (**(code **)(*(longlong *)*plVar12 + 0x248))((longlong *)*plVar12,plVar23,local_1b8);
LAB_141232d6e:
  local_150 = 0;
  local_148 = 0;
  if (plVar35 != (longlong *)0x0) {
    iVar8 = *(int *)((longlong)plVar35 + 0x44);
    bVar31 = *(byte *)(uVar22 + 0x48);
    uVar20 = (ulonglong)((uint)bVar31 * 0x120);
    local_a0 = (ushort)*(uint *)((longlong)&DAT_14c9a8510 + uVar20);
    if (local_a0 < 0x19) {
      ppppplVar21 = (longlong *****)&local_b8;
    }
    else {
      ppppplVar21 = (longlong *****)
                    FUN_14001cc68(*(uint *)((longlong)&DAT_14c9a8510 + uVar20) & 0xffff);
      local_b8 = (code *)ppppplVar21;
    }
    if (*(code **)((longlong)&DAT_14c9a85a8 + uVar20) == (code *)0x0) {
      memset(ppppplVar21,0,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar20));
    }
    else {
      (**(code **)((longlong)&DAT_14c9a85a8 + uVar20))();
    }
    ppppplVar21 = (longlong *****)local_b8;
    local_98 = bVar31;
    if (*(byte *)(uVar22 + 0x48) - 1 < 0x15) {
      puVar36 = (uint *)((longlong)iVar8 + (longlong)pvVar30);
      switch((uint)*(byte *)(uVar22 + 0x48)) {
      case 1:
        uVar7 = (uint)(byte)*puVar36;
        if (bVar31 == 1) {
LAB_14123366e:
          local_b8 = (code *)CONCAT44(local_b8._4_4_,uVar7);
          pvVar30 = local_1b8;
          ppppplVar21 = (longlong *****)local_b8;
        }
        else {
          if (*(code **)((longlong)&DAT_14c9a85d0 + uVar20) != (code *)0x0) {
            if (local_a0 < 0x19) {
              ppppplVar21 = (longlong *****)&local_b8;
            }
            (**(code **)((longlong)&DAT_14c9a85d0 + uVar20))(ppppplVar21);
          }
          if (0x18 < local_a0) {
            FUN_1400020a8(local_b8);
          }
          local_a0 = 4;
          local_b8 = (code *)CONCAT44(local_b8._4_4_,uVar7);
          local_98 = 1;
          pvVar30 = local_1b8;
          ppppplVar21 = (longlong *****)local_b8;
        }
        break;
      case 2:
        uVar7 = *puVar36;
        if (bVar31 == 2) goto LAB_14123366e;
        if (*(code **)((longlong)&DAT_14c9a85d0 + uVar20) != (code *)0x0) {
          if (local_a0 < 0x19) {
            ppppplVar21 = (longlong *****)&local_b8;
          }
          (**(code **)((longlong)&DAT_14c9a85d0 + uVar20))(ppppplVar21);
        }
        if (0x18 < local_a0) {
          FUN_1400020a8(local_b8);
        }
        local_a0 = 4;
        local_b8 = (code *)CONCAT44(local_b8._4_4_,uVar7);
        local_98 = 2;
        pvVar30 = local_1b8;
        ppppplVar21 = (longlong *****)local_b8;
        break;
      case 3:
        uVar7 = *puVar36;
        if (bVar31 == 3) {
          local_b8 = (code *)CONCAT44(local_b8._4_4_,uVar7);
          pvVar30 = local_1b8;
          ppppplVar21 = (longlong *****)local_b8;
        }
        else {
          if (*(code **)((longlong)&DAT_14c9a85d0 + uVar20) != (code *)0x0) {
            if (local_a0 < 0x19) {
              ppppplVar21 = (longlong *****)&local_b8;
            }
            (**(code **)((longlong)&DAT_14c9a85d0 + uVar20))(ppppplVar21);
          }
          if (0x18 < local_a0) {
            FUN_1400020a8(local_b8);
          }
          local_a0 = 4;
          local_b8 = (code *)CONCAT44(local_b8._4_4_,uVar7);
          local_98 = 3;
          pvVar30 = local_1b8;
          ppppplVar21 = (longlong *****)local_b8;
        }
        break;
      case 4:
        if (bVar31 == 4) {
LAB_141233624:
          local_a8 = *(longlong ***)(puVar36 + 4);
          uStack_b0 = *(undefined8 **)(puVar36 + 2);
          pvVar30 = local_1b8;
          ppppplVar21 = *(longlong ******)puVar36;
        }
        else {
          if (*(code **)((longlong)&DAT_14c9a85d0 + uVar20) != (code *)0x0) {
            if (local_a0 < 0x19) {
              ppppplVar21 = (longlong *****)&local_b8;
            }
            (**(code **)((longlong)&DAT_14c9a85d0 + uVar20))(ppppplVar21);
          }
          if (0x18 < local_a0) {
            FUN_1400020a8(local_b8);
          }
          local_a8 = *(longlong ***)(puVar36 + 4);
          uStack_b0 = *(undefined8 **)(puVar36 + 2);
          local_a0 = 0x18;
          local_98 = 4;
          pvVar30 = local_1b8;
          ppppplVar21 = *(longlong ******)puVar36;
        }
        break;
      case 5:
        if (bVar31 == 5) goto LAB_141233624;
        if (*(code **)((longlong)&DAT_14c9a85d0 + uVar20) != (code *)0x0) {
          if (local_a0 < 0x19) {
            ppppplVar21 = (longlong *****)&local_b8;
          }
          (**(code **)((longlong)&DAT_14c9a85d0 + uVar20))(ppppplVar21);
        }
        if (0x18 < local_a0) {
          FUN_1400020a8(local_b8);
        }
        local_a8 = *(longlong ***)(puVar36 + 4);
        uStack_b0 = *(undefined8 **)(puVar36 + 2);
        local_a0 = 0x18;
        local_98 = 5;
        pvVar30 = local_1b8;
        ppppplVar21 = *(longlong ******)puVar36;
        break;
      case 6:
        lVar15 = *(longlong *)puVar36;
        if (bVar31 == 6) {
LAB_14123374a:
          if (lVar15 == 0) {
            local_b8 = (code *)0x0;
            iVar8 = 0;
          }
          else {
            uVar7 = *(uint *)(lVar15 + 0xc);
            local_b8 = (code *)CONCAT44(local_b8._4_4_,uVar7);
            if ((int)uVar7 < DAT_14c9647dc) {
              lVar15 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8);
            }
            else {
              lVar15 = 0;
            }
            iVar8 = *(int *)(lVar15 + 0x10);
            if (*(int *)(lVar15 + 0x10) == 0) {
              LOCK();
              iVar8 = DAT_14c964868 + 1;
              UNLOCK();
              iVar32 = DAT_14c964868 + 1;
              bVar37 = DAT_14c964868 < 1000;
              DAT_14c964868 = iVar8;
              if (bVar37) {
                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                              ,iVar32);
              }
              LOCK();
              iVar8 = *(int *)(lVar15 + 0x10);
              bVar37 = iVar8 == 0;
              if (bVar37) {
                *(int *)(lVar15 + 0x10) = iVar32;
                iVar8 = 0;
              }
              UNLOCK();
              if (bVar37) {
                iVar8 = iVar32;
              }
            }
          }
          local_b8 = (code *)CONCAT44(iVar8,(uint)local_b8);
          pvVar30 = local_1b8;
          ppppplVar21 = (longlong *****)local_b8;
        }
        else {
          if (*(code **)((longlong)&DAT_14c9a85d0 + uVar20) != (code *)0x0) {
            if (local_a0 < 0x19) {
              ppppplVar21 = (longlong *****)&local_b8;
            }
            (**(code **)((longlong)&DAT_14c9a85d0 + uVar20))(ppppplVar21);
          }
          if (0x18 < local_a0) {
            FUN_1400020a8(local_b8);
          }
          local_a0 = 8;
          local_b8._0_4_ = 0;
          if (lVar15 == 0) {
            iVar8 = 0;
            uVar7 = (uint)local_b8;
          }
          else {
            uVar7 = *(uint *)(lVar15 + 0xc);
            local_b8 = (code *)(ulonglong)uVar7;
            if ((int)uVar7 < DAT_14c9647dc) {
              lVar15 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8);
            }
            else {
              lVar15 = 0;
            }
            iVar8 = *(int *)(lVar15 + 0x10);
            if (*(int *)(lVar15 + 0x10) == 0) {
              LOCK();
              iVar8 = DAT_14c964868 + 1;
              UNLOCK();
              iVar32 = DAT_14c964868 + 1;
              bVar37 = DAT_14c964868 < 1000;
              DAT_14c964868 = iVar8;
              if (bVar37) {
                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                              ,iVar32);
              }
              LOCK();
              iVar8 = *(int *)(lVar15 + 0x10);
              bVar37 = iVar8 == 0;
              if (bVar37) {
                *(int *)(lVar15 + 0x10) = iVar32;
                iVar8 = 0;
              }
              UNLOCK();
              uVar7 = (uint)local_b8;
              if (bVar37) {
                iVar8 = iVar32;
              }
            }
          }
          local_b8._0_4_ = uVar7;
          local_b8 = (code *)CONCAT44(iVar8,(uint)local_b8);
          local_98 = 6;
          pvVar30 = local_1b8;
          ppppplVar21 = (longlong *****)local_b8;
        }
        break;
      case 7:
        lVar15 = *(longlong *)puVar36;
        if (bVar31 == 7) goto LAB_14123374a;
        if (*(code **)((longlong)&DAT_14c9a85d0 + uVar20) != (code *)0x0) {
          if (local_a0 < 0x19) {
            ppppplVar21 = (longlong *****)&local_b8;
          }
          (**(code **)((longlong)&DAT_14c9a85d0 + uVar20))(ppppplVar21);
        }
        if (0x18 < local_a0) {
          FUN_1400020a8(local_b8);
        }
        local_a0 = 8;
        local_b8._0_4_ = 0;
        if (lVar15 == 0) {
          iVar8 = 0;
          uVar7 = (uint)local_b8;
        }
        else {
          uVar7 = *(uint *)(lVar15 + 0xc);
          local_b8 = (code *)(ulonglong)uVar7;
          if ((int)uVar7 < DAT_14c9647dc) {
            lVar15 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8);
          }
          else {
            lVar15 = 0;
          }
          iVar8 = *(int *)(lVar15 + 0x10);
          if (*(int *)(lVar15 + 0x10) == 0) {
            LOCK();
            iVar8 = DAT_14c964868 + 1;
            UNLOCK();
            iVar32 = DAT_14c964868 + 1;
            bVar37 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar8;
            if (bVar37) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,iVar32);
            }
            LOCK();
            iVar8 = *(int *)(lVar15 + 0x10);
            bVar37 = iVar8 == 0;
            if (bVar37) {
              *(int *)(lVar15 + 0x10) = iVar32;
              iVar8 = 0;
            }
            UNLOCK();
            uVar7 = (uint)local_b8;
            if (bVar37) {
              iVar8 = iVar32;
            }
          }
        }
        local_b8._0_4_ = uVar7;
        local_b8 = (code *)CONCAT44(iVar8,(uint)local_b8);
        local_98 = 7;
        pvVar30 = local_1b8;
        ppppplVar21 = (longlong *****)local_b8;
        break;
      case 8:
        if (bVar31 == 8) {
          pvVar30 = local_1b8;
          if ((uint *)&local_b8 != puVar36) {
            uVar7 = puVar36[2];
            pvVar34 = *(void **)puVar36;
            uStack_b0 = (undefined8 *)CONCAT44(uStack_b0._4_4_,uVar7);
            if (uVar7 == 0 && uStack_b0._4_4_ == 0) {
              uStack_b0 = (undefined8 *)(ulonglong)uVar7;
            }
            else {
              FUN_1446dd670(&local_b8,uVar7);
              pvVar30 = local_1b8;
              ppppplVar21 = (longlong *****)local_b8;
              if (uVar7 != 0) {
                memcpy(local_b8,pvVar34,(longlong)(int)uVar7 * 2);
                pvVar30 = local_1b8;
                ppppplVar21 = (longlong *****)local_b8;
              }
            }
          }
        }
        else {
          if (*(code **)((longlong)&DAT_14c9a85d0 + uVar20) != (code *)0x0) {
            if (local_a0 < 0x19) {
              ppppplVar21 = (longlong *****)&local_b8;
            }
            (**(code **)((longlong)&DAT_14c9a85d0 + uVar20))(ppppplVar21);
          }
          if (0x18 < local_a0) {
            FUN_1400020a8(local_b8);
          }
          uStack_178 = 0;
          uStack_174 = 0;
          local_170 = puVar36[2];
          lVar15 = (longlong)(int)local_170;
          pvVar30 = *(void **)puVar36;
          if (lVar15 == 0) {
            pvVar34 = (void *)0x0;
            local_16c = 0;
            uStack_b0 = (undefined8 *)0x0;
LAB_141233f35:
            local_a0 = 0x10;
            local_b8 = (code *)0x0;
            uStack_b0 = (undefined8 *)((ulonglong)uStack_b0 & 0xffffffff);
          }
          else {
            FUN_1446dd670(&uStack_178,local_170,0);
            memcpy((void *)CONCAT44(uStack_174,uStack_178),pvVar30,lVar15 * 2);
            lVar15 = (longlong)(int)local_170;
            local_a0 = 0x10;
            local_b8 = (code *)0x0;
            pvVar34 = (void *)CONCAT44(uStack_174,uStack_178);
            uStack_b0 = (undefined8 *)CONCAT44(uStack_b0._4_4_,local_170);
            if (lVar15 == 0) goto LAB_141233f35;
            FUN_1446dd670(&local_b8,local_170,0);
            memcpy(local_b8,pvVar34,lVar15 * 2);
            pvVar34 = (void *)CONCAT44(uStack_174,uStack_178);
          }
          local_98 = 8;
          pvVar30 = local_1b8;
          ppppplVar21 = (longlong *****)local_b8;
          if (pvVar34 != (void *)0x0) {
            FUN_1400020a8(pvVar34);
            pvVar30 = local_1b8;
            ppppplVar21 = (longlong *****)local_b8;
          }
        }
        break;
      case 0xe:
        lVar15 = *(longlong *)puVar36;
        if (bVar31 == 0xe) goto LAB_14123374a;
        if (*(code **)((longlong)&DAT_14c9a85d0 + uVar20) != (code *)0x0) {
          if (local_a0 < 0x19) {
            ppppplVar21 = (longlong *****)&local_b8;
          }
          (**(code **)((longlong)&DAT_14c9a85d0 + uVar20))(ppppplVar21);
        }
        if (0x18 < local_a0) {
          FUN_1400020a8(local_b8);
        }
        local_a0 = 8;
        local_b8._0_4_ = 0;
        if (lVar15 == 0) {
          iVar8 = 0;
          uVar7 = (uint)local_b8;
        }
        else {
          uVar7 = *(uint *)(lVar15 + 0xc);
          local_b8 = (code *)(ulonglong)uVar7;
          if ((int)uVar7 < DAT_14c9647dc) {
            lVar15 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8);
          }
          else {
            lVar15 = 0;
          }
          iVar8 = *(int *)(lVar15 + 0x10);
          if (*(int *)(lVar15 + 0x10) == 0) {
            LOCK();
            iVar8 = DAT_14c964868 + 1;
            UNLOCK();
            iVar32 = DAT_14c964868 + 1;
            bVar37 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar8;
            if (bVar37) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,iVar32);
            }
            LOCK();
            iVar8 = *(int *)(lVar15 + 0x10);
            bVar37 = iVar8 == 0;
            if (bVar37) {
              *(int *)(lVar15 + 0x10) = iVar32;
              iVar8 = 0;
            }
            UNLOCK();
            uVar7 = (uint)local_b8;
            if (bVar37) {
              iVar8 = iVar32;
            }
          }
        }
        local_b8._0_4_ = uVar7;
        local_b8 = (code *)CONCAT44(iVar8,(uint)local_b8);
        local_98 = 0xe;
        pvVar30 = local_1b8;
        ppppplVar21 = (longlong *****)local_b8;
        break;
      case 0x12:
        if (bVar31 == 0x12) {
          pvVar30 = local_1b8;
          ppppplVar21 = *(longlong ******)puVar36;
        }
        else {
          if (*(code **)((longlong)&DAT_14c9a85d0 + uVar20) != (code *)0x0) {
            if (local_a0 < 0x19) {
              ppppplVar21 = (longlong *****)&local_b8;
            }
            (**(code **)((longlong)&DAT_14c9a85d0 + uVar20))(ppppplVar21);
          }
          if (0x18 < local_a0) {
            FUN_1400020a8(local_b8);
          }
          local_a0 = 8;
          local_98 = 0x12;
          pvVar30 = local_1b8;
          ppppplVar21 = *(longlong ******)puVar36;
        }
        break;
      case 0x15:
        ppppplVar21 = *(longlong ******)puVar36;
        pvVar30 = local_1b8;
        if (bVar31 != 0x15) {
          if (*(code **)((longlong)&DAT_14c9a85d0 + uVar20) != (code *)0x0) {
            ppppplVar26 = (longlong *****)local_b8;
            if (local_a0 < 0x19) {
              ppppplVar26 = (longlong *****)&local_b8;
            }
            (**(code **)((longlong)&DAT_14c9a85d0 + uVar20))(ppppplVar26);
          }
          if (0x18 < local_a0) {
            FUN_1400020a8(local_b8);
          }
          local_a0 = 8;
          local_98 = 0x15;
          pvVar30 = local_1b8;
        }
      }
    }
    local_b8 = (code *)ppppplVar21;
    plVar23 = local_1a8;
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_148 * 0x120));
    if (pcVar3 != (code *)0x0) {
      ppppplVar21 = (longlong *****)local_168;
      if (local_150 < 0x19) {
        ppppplVar21 = &local_168;
      }
      (*pcVar3)(ppppplVar21);
    }
    if (0x18 < local_150) {
      FUN_1400020a8(local_168);
    }
    local_150 = local_a0;
    if (local_a0 < 0x19) {
      uVar22 = (ulonglong)((uint)local_98 * 0x120);
      if (*(code **)((longlong)&DAT_14c9a85b8 + uVar22) == (code *)0x0) {
        if (*(code **)((longlong)&DAT_14c9a85b0 + uVar22) == (code *)0x0) {
          memcpy(&local_168,&local_b8,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar22));
          pvVar30 = local_1b8;
          plVar23 = local_1a8;
        }
        else {
          (**(code **)((longlong)&DAT_14c9a85b0 + uVar22))(&local_168,&local_b8);
          pvVar30 = local_1b8;
          plVar23 = local_1a8;
        }
      }
      else {
        (**(code **)((longlong)&DAT_14c9a85b8 + uVar22))(&local_168,&local_b8);
      }
    }
    else {
      local_168 = (longlong ****)local_b8;
      local_b8 = (code *)0x0;
      local_a0 = 0;
    }
    local_148 = local_98;
    local_98 = 0;
    if (DAT_14c9a85d0 != (code *)0x0) {
      ppppplVar21 = (longlong *****)local_b8;
      if (local_a0 < 0x19) {
        ppppplVar21 = (longlong *****)&local_b8;
      }
      (*DAT_14c9a85d0)(ppppplVar21);
    }
    if (0x18 < local_a0) {
      FUN_1400020a8(local_b8);
    }
  }
LAB_1412338d5:
  do {
    for (plVar12 = (longlong *)plVar23[10]; plVar12 != (longlong *)0x0;
        plVar12 = (longlong *)plVar12[3]) {
      if ((~*(uint *)(plVar12[1] + 0x18) & 0x8001) == 0) {
        uVar22 = plVar12[7];
        if ((char)uVar22 < '\0') {
LAB_141233907:
          if ((uVar22 >> 0x24 & 1) == 0) {
            (**(code **)(*plVar12 + 0x148))
                      (plVar12,(longlong)*(int *)((longlong)plVar12 + 0x44) + (longlong)pvVar30);
          }
          plVar12 = plVar12 + 3;
          do {
            for (plVar12 = (longlong *)*plVar12; plVar12 != (longlong *)0x0;
                plVar12 = (longlong *)plVar12[3]) {
              if ((~*(uint *)(plVar12[1] + 0x18) & 0x8001) == 0) {
                uVar22 = plVar12[7];
                if (-1 < (char)uVar22) goto LAB_141233952;
                goto LAB_141233907;
              }
            }
            if (*(code **)(*plVar23 + 0x2b0) == (code *)&LAB_1446e8c94) {
              plVar23 = (longlong *)plVar23[8];
            }
            else {
              plVar23 = (longlong *)(**(code **)(*plVar23 + 0x2b0))();
            }
            plVar12 = plVar23 + 10;
            pvVar30 = local_1b8;
          } while (plVar23 != (longlong *)0x0);
        }
        goto LAB_141233952;
      }
    }
    if (*(code **)(*plVar23 + 0x2b0) == (code *)&LAB_1446e8c94) {
      plVar23 = (longlong *)plVar23[8];
    }
    else {
      plVar23 = (longlong *)(**(code **)(*plVar23 + 0x2b0))(plVar23);
    }
    pvVar30 = local_1b8;
  } while (plVar23 != (longlong *)0x0);
LAB_141233952:
  pppplVar29 = local_1b0;
  if ((char)local_70 == '\0') {
    local_70 = CONCAT11(local_70._1_1_,1);
    *(int *)(local_88 + 4) = *(int *)(local_88 + 4) + -1;
    if (local_78 != local_88[2]) {
      FUN_14004673c();
    }
    *local_88 = (longlong **)CONCAT44(uStack_7c,iStack_80);
    local_88[3] = (longlong **)local_68;
  }
  if (local_148 == 3) {
    *(undefined4 *)*pppplVar29 = local_168._0_4_;
    goto switchD_14123506c_caseD_3;
  }
  switch(local_148) {
  case 1:
    uVar6 = FUN_144a7fca4(&local_168);
    *(undefined1 *)*local_1b0 = uVar6;
    break;
  case 2:
    uVar11 = FUN_1405d5f74(&local_168);
    *(undefined4 *)*local_1b0 = uVar11;
    break;
  case 4:
    FUN_144a7b7fe(&local_168,&local_88);
    goto LAB_14123511f;
  case 5:
    FUN_142b38d56(&local_168,&local_88);
LAB_14123511f:
    pppplVar29 = (longlong ****)*local_1b0;
    pppplVar29[2] = (longlong ***)local_78;
    *pppplVar29 = local_88;
    pppplVar29[1] = (longlong ***)CONCAT44(uStack_7c,iStack_80);
    break;
  case 6:
    ppplVar24 = (longlong ***)FUN_14070d842(&local_168);
    goto LAB_1412351bf;
  case 7:
    ppplVar24 = (longlong ***)FUN_14030a32e(&local_168);
    goto LAB_1412351bf;
  case 8:
    FUN_1461dc38e(&local_168,&local_88);
    pppplVar29 = (longlong ****)*local_1b0;
    if (pppplVar29 == (longlong ****)&local_88) {
      if (local_88 != (longlong ***)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*pppplVar29 != (longlong ***)0x0) {
        FUN_1400020a8();
      }
      *pppplVar29 = local_88;
      *(int *)(pppplVar29 + 1) = iStack_80;
      *(undefined4 *)((longlong)pppplVar29 + 0xc) = uStack_7c;
    }
    break;
  case 0xe:
    ppplVar24 = (longlong ***)FUN_140593260(&local_168);
LAB_1412351bf:
    **local_1b0 = (longlong **)ppplVar24;
    break;
  case 0x12:
    FUN_1457d43e4(&local_168,&local_88);
    **local_1b0 = (longlong **)local_88;
    break;
  case 0x15:
    ppplVar24 = (longlong ***)FUN_140ee352e(&local_168);
    **local_1b0 = (longlong **)ppplVar24;
  }
switchD_14123506c_caseD_3:
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_148 * 0x120));
  if (pcVar3 != (code *)0x0) {
    ppppplVar21 = (longlong *****)local_168;
    if (local_150 < 0x19) {
      ppppplVar21 = &local_168;
    }
    (*pcVar3)(ppppplVar21);
  }
  if (0x18 < local_150) {
    FUN_1400020a8(local_168);
  }
LAB_1412326ea:
  local_c8 = 0;
  if (local_d0 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_140333f4e(&local_110);
  if ((local_60 ^ (ulonglong)auStack_228) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412352c8 FUN_1412352c8 body=187 status=ok
// SIG undefined FUN_1412352c8(void)

void FUN_1412352c8(longlong param_1,int *param_2,undefined8 param_3,longlong param_4)

{
  longlong lVar1;
  int *piVar2;
  longlong *plVar3;
  
  if ((longlong)*(int *)(param_1 + 0xb8) != 0) {
    piVar2 = *(int **)(param_1 + 0xb0);
    lVar1 = (longlong)*(int *)(param_1 + 0xb8) * 0x60;
    do {
      if ((((*piVar2 == *param_2) && (piVar2[1] == param_2[1])) && (piVar2[2] == param_2[2])) &&
         (piVar2[3] == param_2[3])) {
        if (piVar2 == (int *)0x0) {
          return;
        }
        if ((longlong)piVar2[0x16] == 0) {
          return;
        }
        plVar3 = *(longlong **)(piVar2 + 0x14);
        lVar1 = (longlong)piVar2[0x16] * 0x28;
        do {
          if ((*(int *)(param_4 + 4) == -1) || (*plVar3 == *(longlong *)(param_4 + 4))) {
            FUN_140e5d116(param_1,piVar2,plVar3,param_3,param_4);
          }
          plVar3 = plVar3 + 5;
          lVar1 = lVar1 + -0x28;
        } while (lVar1 != 0);
        return;
      }
      piVar2 = piVar2 + 0x18;
      lVar1 = lVar1 + -0x60;
    } while (lVar1 != 0);
  }
  return;
}



// FUNCTION 141235384 FUN_141235384 body=216 status=ok
// SIG undefined FUN_141235384(void)

int FUN_141235384(longlong *param_1,uint param_2,longlong *param_3)

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
        iVar1 != -1; iVar1 = *(int *)(*param_1 + 0x48 + (longlong)iVar1 * 0x50)) {
      lVar2 = *param_3;
      if ((lVar2 != 0 & bVar4) == 1) {
        FUN_1456cec3c(lVar2);
        bVar4 = DAT_14c950c29;
      }
      lVar3 = *(longlong *)(*param_1 + (longlong)iVar1 * 0x50);
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



// FUNCTION 14123545c FUN_14123545c body=84 status=ok
// SIG undefined FUN_14123545c(void)

void FUN_14123545c(longlong *param_1)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1412354b2(param_1,&local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x0001412354a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xec0))(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48,local_20);
}



// FUNCTION 1412354b2 FUN_1412354b2 body=203 status=ok
// SIG undefined FUN_1412354b2(void)

ulonglong * FUN_1412354b2(longlong param_1,ulonglong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined1 auStack_58 [40];
  ulonglong local_30 [3];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  *param_2 = (ulonglong)DAT_14c892e70;
  uVar4 = *(ulonglong *)(param_1 + 0xbc0);
  if (*(ulonglong *)(param_1 + 0xbc0) == 0) {
    if (*(longlong *)(param_1 + 0x448) == 0) goto LAB_14123555d;
    lVar3 = FUN_140183ac4();
    plVar1 = *(longlong **)(param_1 + 0x448);
    if ((((plVar1 == (longlong *)0x0) || (lVar3 == 0)) || (lVar2 = plVar1[2], lVar2 == 0)) ||
       ((*(int *)(lVar2 + 0x38) < *(int *)(lVar3 + 0x38) ||
        (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
         lVar3 + 0x30)))) goto LAB_14123555d;
    (**(code **)(*plVar1 + 0x890))(plVar1,local_30,*(undefined8 *)(param_1 + 0x3d0));
    uVar4 = local_30[0];
  }
  *param_2 = uVar4;
LAB_14123555d:
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141235584 FUN_141235584 body=228 status=ok
// SIG undefined FUN_141235584(void)

longlong FUN_141235584(void)

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
  if (DAT_14c952528 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_146272f5e;
    local_38 = &LAB_1468e40ea;
    local_40 = FUN_146275546;
    local_48 = L"Engine";
    local_50 = 0x8000;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x70;
    FUN_14081cfa3(L"/Script/CoreUObject",L"Property",&DAT_14c952528,&DAT_1468e40f0);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c952528;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141235669 FUN_141235669 body=49 status=ok
// SIG undefined FUN_141235669(void)

longlong FUN_141235669(void)

{
  if (DAT_14c99c0c0 == 0) {
    FUN_140f50038(&DAT_14c99c0c0,&PTR_s__Script_MeshDescription_149f9fe20);
  }
  return DAT_14c99c0c0;
}



// FUNCTION 1412356a0 FUN_1412356a0 body=228 status=ok
// SIG undefined FUN_1412356a0(void)

longlong FUN_1412356a0(void)

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
  if (DAT_14cac2a78 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140d4fe26;
    local_38 = &LAB_147880b41;
    local_40 = &LAB_14637f840;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000011;
    local_60 = 8;
    local_68 = 0xb0;
    FUN_14081cfa3(L"/Script/Engine",L"MaterialExpressionCustomOutput",&DAT_14cac2a78,&DAT_147880b40)
    ;
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cac2a78;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14123578c FUN_14123578c body=228 status=ok
// SIG undefined FUN_14123578c(void)

longlong FUN_14123578c(void)

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
  if (DAT_14cab7798 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_146351894;
    local_38 = &LAB_14772c425;
    local_40 = FUN_1463532be;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x180;
    FUN_14081cfa3(L"/Script/UMG",L"ContentWidget",&DAT_14cab7798,FUN_14635329c);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cab7798;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141235872 FUN_141235872 body=228 status=ok
// SIG undefined FUN_141235872(void)

longlong FUN_141235872(void)

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
  if (DAT_14cad3588 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144b223ce;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1432411d6;
    local_38 = &LAB_147a2e534;
    local_40 = FUN_1417c23e8;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x850;
    FUN_14081cfa3(L"/Script/Engine",L"SplineMeshComponent",&DAT_14cad3588,FUN_1463bf75a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cad3588;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141235958 FUN_141235958 body=261 status=ok
// SIG undefined FUN_141235958(void)

longlong FUN_141235958(longlong param_1)

{
  FUN_141235a5e();
  *(undefined4 *)(param_1 + 0x534) = 0;
  *(undefined8 *)(param_1 + 0x548) = 0xbff0000000000000;
  *(undefined8 *)(param_1 + 0x550) = 0;
  *(undefined1 *)(param_1 + 0x558) = 1;
  *(undefined8 *)(param_1 + 0x55c) = 0;
  *(undefined8 *)(param_1 + 0x564) = 0;
  *(undefined8 *)(param_1 + 0x56c) = 0;
  *(undefined8 *)(param_1 + 0x574) = 0;
  *(undefined4 *)(param_1 + 0x57c) = 0;
  *(undefined8 *)(param_1 + 0x580) = 0x3ff0000000000000;
  *(undefined8 *)(param_1 + 0x588) = 0;
  *(undefined4 *)(param_1 + 0x590) = 0;
  *(undefined4 *)(param_1 + 0x640) = 0;
  *(undefined1 *)(param_1 + 0x644) = 0;
  *(undefined8 *)(param_1 + 0x598) = 0;
  *(undefined8 *)(param_1 + 0x5a0) = 0;
  *(undefined4 *)(param_1 + 0x5a8) = 0;
  *(undefined8 *)(param_1 + 0x5c8) = 0;
  *(undefined8 *)(param_1 + 0x5d0) = 0;
  *(undefined8 *)(param_1 + 0x5ec) = 0;
  *(undefined8 *)(param_1 + 0x5f4) = 0;
  *(undefined8 *)(param_1 + 0x5fc) = 0;
  *(undefined8 *)(param_1 + 0x604) = 0;
  *(undefined8 *)(param_1 + 0x60c) = 0;
  *(undefined8 *)(param_1 + 0x614) = 0;
  *(undefined8 *)(param_1 + 0x61c) = 0;
  *(undefined8 *)(param_1 + 0x624) = 0;
  *(undefined8 *)(param_1 + 0x62c) = 0;
  *(undefined8 *)(param_1 + 0x538) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x5d8) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x5ac) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x5bc) = 0;
  *(undefined4 *)(param_1 + 0x540) = 0;
  *(undefined8 *)(param_1 + 0x5b4) = 0x3f80000000000000;
  *(undefined4 *)(param_1 + 0x63c) = 0;
  *(undefined8 *)(param_1 + 0x634) = 0;
  *(undefined8 *)(param_1 + 0x5dc) = 0;
  *(undefined8 *)(param_1 + 0x5e4) = 0;
  return param_1;
}



// FUNCTION 141235a5e FUN_141235a5e body=402 status=ok
// SIG undefined FUN_141235a5e(void)

undefined8 * FUN_141235a5e(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  
  *param_1 = 0x4020000040a00000;
  param_1[1] = 0x3f80000000000000;
  param_1[0x34] = 0x4000000042480000;
  puVar2 = param_1 + 0x49;
  lVar3 = 0x1f8;
  do {
    *(undefined8 *)((longlong)param_1 + lVar3 + 0x78) = 0x3f4000003e99999a;
    *(undefined4 *)((longlong)param_1 + lVar3 + 0x80) = 0x3e99999a;
    lVar4 = -0x28;
    do {
      *(undefined4 *)((longlong)puVar2 + lVar4 + -0x28) = 0;
      *(undefined4 *)((longlong)puVar2 + lVar4) = 0;
      *(undefined4 *)((longlong)puVar2 + lVar4 + 0x28) = 0;
      lVar4 = lVar4 + 4;
    } while (lVar4 != 0);
    lVar3 = lVar3 + 0x84;
    puVar2 = (undefined8 *)((longlong)puVar2 + 0x84);
  } while (lVar3 != 0x300);
  puVar2 = param_1 + 0x74;
  lVar3 = 0x300;
  do {
    puVar1 = (undefined8 *)((longlong)param_1 + lVar3 + 200);
    *puVar1 = 0x3f80000041a00000;
    puVar1[1] = 0x3e99999a3f800000;
    *(undefined8 *)((longlong)param_1 + lVar3 + 0xd8) = 0x3f8000003ba3d70a;
    lVar4 = -0x28;
    do {
      *(undefined4 *)((longlong)puVar2 + lVar4 + -0x78) = 0;
      *(undefined4 *)((longlong)puVar2 + lVar4 + -0x50) = 0;
      *(undefined4 *)((longlong)puVar2 + lVar4 + -0x28) = 0;
      *(undefined4 *)((longlong)puVar2 + lVar4) = 0;
      *(undefined4 *)((longlong)puVar2 + lVar4 + 0x28) = 0;
      lVar4 = lVar4 + 4;
    } while (lVar4 != 0);
    lVar3 = lVar3 + 0xe0;
    puVar2 = puVar2 + 0x1c;
  } while (lVar3 != 0x4c0);
  param_1[0x9d] = 0x3f80000041200000;
  param_1[0x9e] = 0x411000003ba3d70a;
  param_1[0x9f] = 0x3ecccccd42000000;
  param_1[0xa0] = 0x3f0000003d4ccccd;
  param_1[0xa1] = 0xbf0000003f000000;
  param_1[0xa2] = 0x3f0000003f000000;
  param_1[0xa3] = 0x3f00000000000000;
  param_1[0xa4] = &DAT_3f8000003f800000;
  param_1[0xa5] = 0x3f80000040800000;
  *(undefined4 *)(param_1 + 0xa6) = 0x3f800000;
  memset(param_1 + 2,0,400);
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x98] = 0;
  param_1[0x99] = 0;
  param_1[0x9a] = 0;
  param_1[0x9b] = 0;
  param_1[0x9c] = 0;
  return param_1;
}



// FUNCTION 141235bf0 FUN_141235bf0 body=228 status=ok
// SIG undefined FUN_141235bf0(void)

longlong FUN_141235bf0(void)

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
  if (DAT_14cb1fb80 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e9e4fe;
    local_38 = &LAB_147eced73;
    local_40 = FUN_14642c25c;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x48;
    FUN_14081cfa3(L"/Script/AIModule",L"EnvQuery",&DAT_14cb1fb80,&DAT_147eced72);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb1fb80;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141235cd6 FUN_141235cd6 body=228 status=ok
// SIG undefined FUN_141235cd6(void)

longlong FUN_141235cd6(void)

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
  if (DAT_14cb20690 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_143242436;
    local_38 = &LAB_147efe3ab;
    local_40 = &LAB_145eea065;
    local_48 = &DAT_149e063b2;
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0x200;
    FUN_14081cfa3(L"/Script/AIModule",L"AIPerceptionComponent",&DAT_14cb20690,FUN_14642f2fa);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb20690;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141235dbb FUN_141235dbb body=49 status=ok
// SIG undefined FUN_141235dbb(void)

longlong FUN_141235dbb(void)

{
  if (DAT_14cb2b700 == 0) {
    FUN_140f50038(&DAT_14cb2b700,&PTR_s__Script_EngineCameras_14ad37090);
  }
  return DAT_14cb2b700;
}



// FUNCTION 141235df2 FUN_141235df2 body=228 status=ok
// SIG undefined FUN_141235df2(void)

longlong FUN_141235df2(void)

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
  if (DAT_14cc1caf8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_146386d96;
    local_38 = &LAB_1494b9d3c;
    local_40 = &LAB_146040857;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x1a8;
    FUN_14081cfa3(L"/Script/OptimusCore",L"OptimusDeformerInstance",&DAT_14cc1caf8,FUN_14673aa06);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cc1caf8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141235ed7 FUN_141235ed7 body=49 status=ok
// SIG undefined FUN_141235ed7(void)

longlong FUN_141235ed7(void)

{
  if (DAT_14cc2d6b8 == 0) {
    FUN_140f50038(&DAT_14cc2d6b8,&PTR_s__Script_PBIK_14beb887f_1_14beb8860);
  }
  return DAT_14cc2d6b8;
}



// FUNCTION 141235f08 FUN_141235f08 body=49 status=ok
// SIG undefined FUN_141235f08(void)

longlong FUN_141235f08(void)

{
  if (DAT_14cc2df70 == 0) {
    FUN_140f50038(&DAT_14cc2df70,&PTR_s__Script_FullBodyIK_14becf7f7_1_14becf7d8);
  }
  return DAT_14cc2df70;
}



// FUNCTION 141235f3a FUN_141235f3a body=1754 status=ok
// SIG undefined FUN_141235f3a(void)

undefined4 FUN_141235f3a(undefined8 ******param_1)

{
  undefined8 ****ppppuVar1;
  int *piVar2;
  uint uVar3;
  undefined8 *****pppppuVar4;
  undefined8 *****pppppuVar5;
  code *pcVar6;
  byte bVar7;
  bool bVar8;
  char cVar9;
  int iVar10;
  float *pfVar11;
  longlong *plVar12;
  undefined *puVar13;
  int iVar14;
  longlong lVar15;
  undefined8 ***pppuVar16;
  longlong lVar17;
  undefined8 ***pppuVar18;
  longlong lVar19;
  undefined8 *****pppppuVar20;
  undefined8 ****ppppuVar21;
  undefined8 ******ppppppuVar22;
  bool bVar23;
  float fVar24;
  float fVar25;
  undefined1 auStack_128 [44];
  undefined4 local_fc;
  int *local_f8;
  undefined8 ***local_f0;
  float local_e8;
  byte local_e1;
  undefined8 *****local_e0;
  char *local_d8;
  byte *local_d0;
  float *local_c8;
  byte local_c0;
  char local_b8 [8];
  undefined8 *****local_b0;
  undefined8 ***local_a8;
  undefined8 local_a0;
  undefined1 local_98;
  int local_90 [2];
  float local_88;
  undefined4 uStack_84;
  ushort local_70;
  byte local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_128;
  pppppuVar4 = param_1[8];
  ppppuVar21 = pppppuVar4[8];
  local_fc = (undefined4)CONCAT71((int7)(local_60 >> 8),1);
  if (ppppuVar21 == (undefined8 ****)0x0) goto LAB_1412362af;
  pppppuVar5 = param_1[9];
  pppppuVar20 = (undefined8 *****)(pppppuVar5[1] + 0x1a);
  if (*(char *)(pppppuVar5 + 7) != '\0') {
    pppppuVar20 = pppppuVar5 + 8;
  }
  if (pppppuVar5[1] == (undefined8 ****)0x0) {
    pppppuVar20 = pppppuVar5 + 8;
  }
  if (*(int *)pppppuVar20 == 2) goto LAB_1412362af;
  local_f0 = ppppuVar21;
  if (pppppuVar4 == (undefined8 *****)0x0) {
    lVar15 = 0;
    local_b0 = (undefined8 ******)0x0;
LAB_1412364e8:
    local_a8 = (undefined8 ****)0x0;
    bVar8 = true;
  }
  else {
    if (*(int *)((longlong)pppppuVar4 + 0x4c) == 0) {
LAB_1412363dc:
      lVar15 = 0;
    }
    else {
      uVar3 = *(uint *)(pppppuVar4 + 9);
      lVar15 = 0;
      if ((-1 < (int)uVar3) && ((int)uVar3 < DAT_14c9647dc)) {
        plVar12 = (longlong *)
                  ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
        if ((plVar12 == (longlong *)0x0) ||
           (((int)plVar12[2] != *(int *)((longlong)pppppuVar4 + 0x4c) ||
            ((*(uint *)(plVar12 + 1) & 0x10200000) != 0)))) goto LAB_1412363dc;
        lVar15 = *plVar12;
      }
    }
    ppppuVar21 = pppppuVar4[0x23];
    local_b0 = param_1;
    if (ppppuVar21 == (undefined8 ****)0x0) goto LAB_1412364e8;
    LOCK();
    *(int *)(ppppuVar21 + 1) = *(int *)(ppppuVar21 + 1) + 1;
    UNLOCK();
    LOCK();
    *(int *)((longlong)ppppuVar21 + 0xc) = *(int *)((longlong)ppppuVar21 + 0xc) + 1;
    UNLOCK();
    LOCK();
    ppppuVar1 = ppppuVar21 + 1;
    *(int *)ppppuVar1 = *(int *)ppppuVar1 + -1;
    UNLOCK();
    if (*(int *)ppppuVar1 == 0) {
      (*(code *)**ppppuVar21)(ppppuVar21);
      LOCK();
      piVar2 = (int *)((longlong)ppppuVar21 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (*(code *)(*ppppuVar21)[2])(ppppuVar21);
      }
    }
    LOCK();
    *(int *)((longlong)ppppuVar21 + 0xc) = *(int *)((longlong)ppppuVar21 + 0xc) + 1;
    UNLOCK();
    bVar8 = false;
    local_a8 = ppppuVar21;
  }
  pppuVar18 = local_a8;
  local_f8 = local_90;
  local_90[0] = 0;
  local_b8[0] = '\x03';
  local_a0._0_4_ = 0;
  if (lVar15 == 0) {
    iVar10 = 0;
    uVar3 = (uint)local_a0;
  }
  else {
    uVar3 = *(uint *)(lVar15 + 0xc);
    local_a0 = (ulonglong)uVar3;
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar15 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar15 = 0;
    }
    iVar10 = *(int *)(lVar15 + 0x10);
    if (*(int *)(lVar15 + 0x10) == 0) {
      LOCK();
      iVar10 = DAT_14c964868 + 1;
      UNLOCK();
      iVar14 = DAT_14c964868 + 1;
      bVar23 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar10;
      if (bVar23) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar14);
      }
      LOCK();
      iVar10 = *(int *)(lVar15 + 0x10);
      bVar23 = iVar10 == 0;
      if (bVar23) {
        *(int *)(lVar15 + 0x10) = iVar14;
        iVar10 = 0;
      }
      UNLOCK();
      uVar3 = (uint)local_a0;
      if (bVar23) {
        iVar10 = iVar14;
      }
    }
  }
  local_a0._0_4_ = uVar3;
  local_a0 = CONCAT44(iVar10,(uint)local_a0);
  local_98 = 2;
  if (local_90[0] != 0) {
    FUN_1417398fc(&DAT_14c9a3da0,local_90[0] + -1);
    local_90[0] = 0;
  }
  if (!bVar8) {
    LOCK();
    piVar2 = (int *)((longlong)pppuVar18 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (*(code *)(*pppuVar18)[2])(pppuVar18);
    }
  }
  local_e1 = *(int *)pppppuVar20 == 0;
  if ((bool)local_e1) {
LAB_141236516:
    local_e8 = 0.0;
  }
  else {
    FUN_1447c3578(pppppuVar20 + 1,&local_e0);
    if (local_c0 == 3) {
      local_c0 = 3;
      fVar25 = local_e0._0_4_;
    }
    else {
      pfVar11 = &local_88;
      FUN_1400b56fe(pfVar11,&local_e0);
      fVar25 = 0.0;
      if (local_68 != 0) {
        fVar25 = local_88;
      }
      pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
      if (pcVar6 != (code *)0x0) {
        if (0x18 < local_70) {
          pfVar11 = (float *)CONCAT44(uStack_84,local_88);
        }
        (*pcVar6)(pfVar11);
      }
      if (0x18 < local_70) {
        FUN_1400020a8(CONCAT44(uStack_84,local_88));
      }
    }
    pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_c0 * 0x120));
    if (pcVar6 != (code *)0x0) {
      ppppppuVar22 = &local_e0;
      if (0x18 < (ushort)local_c8) {
        ppppppuVar22 = (undefined8 ******)local_e0;
      }
      (*pcVar6)(ppppppuVar22);
    }
    if (0x18 < (ushort)local_c8) {
      FUN_1400020a8(local_e0);
    }
    if ((local_e1 & 1) != 0) goto LAB_141236516;
    fVar24 = (float)FUN_141236616(param_1);
    local_e8 = fVar25 - (fVar24 - *(float *)((longlong)param_1 + 0x54));
  }
  local_c8 = &local_e8;
  local_d8 = local_b8;
  local_d0 = &local_e1;
  local_e0 = param_1;
  if ((longlong)*(int *)(pppppuVar4 + 0x13) != 0) {
    ppppuVar21 = pppppuVar4[0x12];
    lVar15 = (longlong)*(int *)(pppppuVar4 + 0x13) * 0x58;
    do {
      if ((((&DAT_14c9a8514)[(uint)*(byte *)(ppppuVar21 + 5) * 0x120] & 0x20) != 0) &&
         (cVar9 = FUN_140c58360(param_1[8],ppppuVar21), cVar9 != '\0')) {
        FUN_1447c3578(ppppuVar21,&local_88);
        bVar7 = local_68;
        pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
        if (pcVar6 != (code *)0x0) {
          pfVar11 = &local_88;
          if (0x18 < local_70) {
            pfVar11 = (float *)CONCAT44(uStack_84,local_88);
          }
          (*pcVar6)(pfVar11);
        }
        if (0x18 < local_70) {
          FUN_1400020a8(CONCAT44(uStack_84,local_88));
        }
        if ((bVar7 == 0) && ((local_e1 != 0 || (0.0 < local_e8)))) {
          FUN_1448173f8(local_f8);
          if ((local_b8[0] == '\x03') && ((undefined8 ****)local_a8 != (undefined8 ****)0x0)) {
            LOCK();
            piVar2 = (int *)((longlong)local_a8 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (*(code *)(*local_a8)[2])();
            }
          }
          goto LAB_14123626f;
        }
      }
      ppppuVar21 = ppppuVar21 + 0xb;
      lVar15 = lVar15 + -0x58;
    } while (lVar15 != 0);
  }
  if ((longlong)*(int *)(local_f0 + 0xc) != 0) {
    pppuVar18 = (undefined8 ***)local_f0[0xb];
    pppuVar16 = pppuVar18 + (longlong)*(int *)(local_f0 + 0xc) * 0xb;
    do {
      if ((longlong)*(int *)(pppppuVar4 + 0x13) != 0) {
        lVar15 = 0;
        do {
          if (*(undefined8 ***)((longlong)pppppuVar4[0x12] + lVar15 + 0x38) == pppuVar18[7])
          goto LAB_1412363cd;
          lVar15 = lVar15 + 0x58;
        } while ((longlong)*(int *)(pppppuVar4 + 0x13) * 0x58 - lVar15 != 0);
      }
      cVar9 = FUN_143d7f7b8(&local_e0,pppuVar18);
      if (cVar9 == '\0') {
        FUN_144a5ac3a(local_b8);
LAB_14123626f:
        local_fc = 0;
        goto LAB_1412362af;
      }
LAB_1412363cd:
      pppuVar18 = pppuVar18 + 0xb;
    } while (pppuVar18 != pppuVar16);
  }
  lVar15 = DAT_14c9a3da0;
  if ((longlong)local_90[0] != 0) {
    lVar19 = (longlong)local_90[0] + -1;
    lVar17 = lVar19 * 0x10;
    FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar17),
                  *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar17));
    if (*(longlong *)(lVar15 + lVar17) != 0) {
      FUN_1400020a8();
    }
    lVar15 = DAT_14c9a3da0;
    iVar10 = (int)lVar19;
    if (DAT_14c9a3dd4 != 0) {
      *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar10;
    }
    *(undefined4 *)(lVar15 + lVar17) = 0xffffffff;
    iVar14 = -1;
    if (0 < DAT_14c9a3dd4) {
      iVar14 = DAT_14c9a3dd0;
    }
    *(int *)(lVar15 + 4 + lVar17) = iVar14;
    DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
    puVar13 = &DAT_14c9a3db0;
    if (DAT_14c9a3dc0 != (undefined *)0x0) {
      puVar13 = DAT_14c9a3dc0;
    }
    iVar14 = iVar10 + 0x1f;
    if (-1 < iVar10) {
      iVar14 = iVar10;
    }
    bVar7 = (byte)lVar19 & 0x1f;
    DAT_14c9a3dd0 = iVar10;
    *(uint *)(puVar13 + (longlong)(iVar14 >> 5) * 4) =
         *(uint *)(puVar13 + (longlong)(iVar14 >> 5) * 4) &
         (-2 << bVar7 | 0xfffffffeU >> 0x20 - bVar7);
    local_90[0] = 0;
  }
  if (local_b8[0] == '\x01') {
    local_b0 = (undefined8 ******)0x0;
  }
  else if ((local_b8[0] == '\x03') && ((undefined8 ****)local_a8 != (undefined8 ****)0x0)) {
    LOCK();
    piVar2 = (int *)((longlong)local_a8 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (*(code *)(*local_a8)[2])();
    }
  }
LAB_1412362af:
  if ((local_60 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return local_fc;
}



// FUNCTION 141236616 FUN_141236616 body=127 status=ok
// SIG undefined FUN_141236616(void)

undefined4 FUN_141236616(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined4 uVar4;
  
  lVar2 = *(longlong *)(param_1 + 0x40);
  uVar4 = 0;
  if ((((lVar2 != 0) && (*(int *)(lVar2 + 0x4c) != 0)) &&
      (uVar1 = *(uint *)(lVar2 + 0x48), -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    plVar3 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar3 != (longlong *)0x0) && ((int)plVar3[2] == *(int *)(lVar2 + 0x4c))) &&
       (((*(uint *)(plVar3 + 1) & 0x10200000) == 0 && ((longlong *)*plVar3 != (longlong *)0x0)))) {
      lVar2 = (**(code **)(*(longlong *)*plVar3 + 0x180))();
      if (lVar2 != 0) {
        uVar4 = *(undefined4 *)(lVar2 + 0x930);
      }
    }
  }
  return uVar4;
}



// FUNCTION 141236696 FUN_141236696 body=316 status=ok
// SIG undefined FUN_141236696(void)

undefined8 FUN_141236696(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_68 [32];
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_1412367cc;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1412367cc;
    }
    FUN_140192332(param_1 + 0x18,&local_48,0);
  }
  else {
LAB_1412367cc:
    local_48 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_141236772;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))
                (*plVar5 + (longlong)*(int *)(param_1 + 0x28),param_2,param_3,param_4);
      uVar6 = 1;
      goto LAB_141236772;
    }
  }
  uVar6 = 0;
LAB_141236772:
  if ((local_48 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_48);
  }
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412367d4 FUN_1412367d4 body=1208 status=ok
// SIG undefined FUN_1412367d4(void)

void FUN_1412367d4(longlong param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  char cVar2;
  uint uVar3;
  int *piVar4;
  longlong lVar5;
  uint *puVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  ulonglong *puVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  int iVar16;
  ulonglong uVar17;
  int iVar18;
  ulonglong uVar19;
  undefined1 uVar20;
  undefined1 auStack_f8 [32];
  longlong local_d8;
  ulonglong *local_d0;
  ulonglong local_c8;
  longlong local_c0;
  uint *local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined4 local_88;
  ulonglong local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if ((char)param_2[7] == '\x01') {
    puVar10 = (ulonglong *)((longlong)&DAT_14c948618 + 4);
    piVar4 = (int *)&DAT_14c948618;
    if ((((int)param_2[2] != 0) && (1 < *(int *)((longlong)param_2 + 0x14))) &&
       ((int)param_2[2] != DAT_14c948000)) {
      piVar4 = (int *)(param_2[5] + 0xc);
      puVar10 = (ulonglong *)(param_2[5] + 0x10);
    }
    uVar19 = *puVar10;
    if ((uVar19 == DAT_14c948034) && (*piVar4 != DAT_14c948030)) {
      FUN_14011791e(&local_80,*piVar4,uVar19 >> 0x20);
      uVar19 = local_80;
    }
    if (*(int *)(param_1 + 0xa8) != *(int *)(param_1 + 0xd4)) {
      uVar11 = (uint)(uVar19 >> 0x10);
      uVar3 = (uint)uVar19 & 0xffff;
      uVar11 = (int)(uVar19 >> 0x20) + ((uint)uVar19 << 0x10 | uVar3) +
               (uVar11 << 0x13 | uVar11 & 0xffff) + (uVar3 >> 4);
      lVar5 = *(longlong *)(param_1 + 0xe0);
      if (*(longlong *)(param_1 + 0xe0) == 0) {
        lVar5 = param_1 + 0xd8;
      }
      iVar18 = *(int *)(lVar5 + (ulonglong)(*(int *)(param_1 + 0xe8) - 1U & uVar11) * 4);
      if (iVar18 != -1) {
        local_d0 = param_2 + 7;
        do {
          if (*(ulonglong *)(*(longlong *)(param_1 + 0xa0) + (longlong)iVar18 * 0x60) == uVar19) {
            local_70 = 0;
            uStack_68 = 0;
            local_60 = 0;
            local_58 = 0;
            uStack_50 = 0;
            local_80 = *param_2;
            local_78 = (undefined4)param_2[1];
            FUN_1447715ec(&local_70,param_2 + 2);
            local_a0 = 0;
            FUN_1401533ba(&local_90,&local_a0,1);
            uVar17 = 0;
            if (*(int *)(param_1 + 0xa8) == *(int *)(param_1 + 0xd4)) goto LAB_141236988;
            lVar5 = param_1 + 0xd8;
            if (*(longlong *)(param_1 + 0xe0) != 0) {
              lVar5 = *(longlong *)(param_1 + 0xe0);
            }
            iVar18 = *(int *)(lVar5 + (ulonglong)(*(int *)(param_1 + 0xe8) - 1U & uVar11) * 4);
            if (iVar18 == -1) goto LAB_141236988;
            goto LAB_14123696a;
          }
          iVar18 = *(int *)((longlong)iVar18 * 0x60 + *(longlong *)(param_1 + 0xa0) + 0x58);
        } while (iVar18 != -1);
      }
    }
  }
  goto LAB_141236a28;
  while (iVar18 = *(int *)(lVar5 + 0x58), iVar18 != -1) {
LAB_14123696a:
    lVar5 = *(longlong *)(param_1 + 0xa0) + (longlong)iVar18 * 0x60;
    if (*(ulonglong *)(*(longlong *)(param_1 + 0xa0) + (longlong)iVar18 * 0x60) == uVar19)
    goto LAB_14123698b;
  }
LAB_141236988:
  lVar5 = 0;
LAB_14123698b:
  uVar11 = *(uint *)(lVar5 + 0x30);
  local_d8 = param_1;
  if (uVar11 == 0) {
    uVar19 = 1;
    iVar18 = 0;
    uVar3 = 0;
  }
  else {
    puVar6 = *(uint **)(lVar5 + 0x28);
    if (*(uint **)(lVar5 + 0x28) == (uint *)0x0) {
      puVar6 = (uint *)(lVar5 + 0x18);
    }
    uVar3 = *puVar6;
    if (uVar3 == 0) {
      iVar18 = uVar11 + 0x1e;
      if (-1 < (int)(uVar11 - 1)) {
        iVar18 = uVar11 - 1;
      }
      uVar17 = 0;
      uVar19 = (ulonglong)(uint)(iVar18 >> 5);
      if (iVar18 >> 5 < 1) {
        uVar19 = uVar17;
      }
      iVar18 = 0;
      do {
        if (uVar19 == uVar17) goto LAB_141236a17;
        iVar18 = iVar18 + 0x20;
        uVar3 = puVar6[uVar17 + 1];
        uVar17 = uVar17 + 1;
      } while (uVar3 == 0);
    }
    else {
      uVar17 = 0;
      iVar18 = 0;
    }
    uVar19 = (ulonglong)(-uVar3 & uVar3);
    uVar1 = uVar19 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    uVar3 = (iVar18 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
    if ((int)uVar11 <= (int)uVar3) {
      uVar3 = uVar11;
    }
  }
  if (uVar3 != uVar11) {
    local_c0 = param_1 + 0x278;
    uVar12 = 0xffffffff;
    local_c8 = (ulonglong)uVar11;
    local_b8 = (uint *)(lVar5 + 0x18);
    do {
      lVar15 = *(longlong *)(lVar5 + 8);
      lVar7 = (longlong)(int)uVar3 * 0x90;
      lVar14 = lVar15 + lVar7;
      iVar16 = *(int *)(lVar15 + 0x28 + lVar7);
      if (((iVar16 == 0) || (iVar8 = *(int *)(lVar14 + 0x2c), iVar8 == 0)) ||
         (iVar16 == DAT_14c948000)) {
LAB_141236c2d:
        local_98 = DAT_14c948620;
        local_b0 = DAT_14c948618;
      }
      else {
        if ((iVar8 < 2) && (*(int *)(lVar14 + 0x4c) < 1)) {
          lVar13 = lVar14 + 0x30;
        }
        else {
          lVar13 = *(longlong *)(lVar14 + 0x40);
        }
        if ((iVar8 == 1) || (iVar8 < 6)) goto LAB_141236c2d;
        local_98 = *(undefined4 *)(lVar13 + 0x44);
        local_b0 = *(undefined8 *)(lVar13 + 0x3c);
      }
      local_88 = local_98;
      local_a8 = local_98;
      local_a0 = local_b0;
      local_90 = local_b0;
      FUN_144928d62(&local_70,5,&local_b0);
      cVar2 = FUN_14493b798(lVar15 + lVar7 + 0x18,&local_80);
      if (cVar2 != '\0') {
        if ((char)*local_d0 == '\x01') {
          uVar20 = *(int *)((longlong)param_2 + 0x44) != 0;
        }
        else {
          uVar20 = FUN_140321d1a(local_d0);
        }
        FUN_140fb8546(local_d8,lVar14,uVar20);
        FUN_1447f69b6(local_c0);
      }
      uVar12 = uVar12 & ~(uint)uVar19;
      puVar6 = *(uint **)(lVar5 + 0x28);
      if (*(uint **)(lVar5 + 0x28) == (uint *)0x0) {
        puVar6 = local_b8;
      }
      uVar11 = *(uint *)(lVar5 + 0x30);
      iVar16 = (int)uVar17;
      lVar14 = (longlong)iVar16;
      uVar3 = puVar6[lVar14] & uVar12;
      if (uVar3 == 0) {
        iVar8 = uVar11 + 0x1e;
        if (-1 < (int)(uVar11 - 1)) {
          iVar8 = uVar11 - 1;
        }
        iVar8 = iVar8 >> 5;
        iVar18 = iVar18 + 0x20;
        iVar9 = iVar8;
        if (iVar8 < iVar16) {
          iVar9 = iVar16;
        }
        if (iVar16 < iVar8) {
          lVar15 = 0;
          do {
            uVar3 = puVar6[lVar14 + lVar15 + 1];
            if (uVar3 != 0) {
              uVar17 = (ulonglong)(iVar16 + (int)lVar15 + 1);
              uVar12 = 0xffffffff;
              goto LAB_141236bd9;
            }
            iVar18 = iVar18 + 0x20;
            lVar15 = lVar15 + 1;
          } while (iVar9 - lVar14 != lVar15);
          uVar12 = 0xffffffff;
          iVar16 = iVar9;
        }
        uVar17 = (ulonglong)(iVar16 + 1);
        uVar3 = uVar11;
      }
      else {
LAB_141236bd9:
        uVar19 = (ulonglong)(-uVar3 & uVar3);
        uVar1 = uVar19 * 2 + 1;
        lVar14 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        uVar3 = (iVar18 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
        if ((int)uVar11 <= (int)uVar3) {
          uVar3 = uVar11;
        }
      }
    } while (uVar3 != (uint)local_c8);
  }
LAB_141236a17:
  if (local_58 != 0) {
    FUN_1400020a8();
  }
LAB_141236a28:
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141236c8e FUN_141236c8e body=2186 status=ok
// SIG undefined FUN_141236c8e(void)

void FUN_141236c8e(longlong *param_1,ulonglong *param_2,undefined8 param_3,float param_4)

{
  ulonglong uVar1;
  char cVar2;
  uint uVar3;
  int *piVar4;
  uint *puVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 *puVar10;
  int iVar11;
  int iVar12;
  ulonglong *puVar13;
  longlong lVar14;
  uint uVar15;
  ulonglong uVar16;
  int iVar17;
  ulonglong uVar18;
  longlong lVar19;
  int iVar20;
  ulonglong *puVar21;
  uint uVar22;
  undefined1 auStack_178 [36];
  int local_154;
  longlong local_150;
  ulonglong *local_148;
  longlong *local_140;
  ulonglong local_138;
  longlong *local_130;
  longlong *local_128;
  longlong *local_120;
  longlong *local_118;
  uint *local_110;
  undefined8 local_108;
  undefined4 local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  uint local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  longlong local_c8;
  undefined8 uStack_c0;
  ulonglong local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  longlong local_90;
  undefined8 uStack_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_178;
  puVar21 = param_2 + 7;
  if ((char)param_2[7] == '\x01') {
    if (*(int *)((longlong)param_2 + 0x44) == 0) goto LAB_141236f0a;
  }
  else {
    cVar2 = FUN_140321d1a(puVar21);
    if (cVar2 == '\0') goto LAB_141236f0a;
  }
  puVar13 = (ulonglong *)((longlong)&DAT_14c948618 + 4);
  piVar4 = (int *)&DAT_14c948618;
  if ((((int)param_2[2] != 0) && (1 < *(int *)((longlong)param_2 + 0x14))) &&
     ((int)param_2[2] != DAT_14c948000)) {
    piVar4 = (int *)(param_2[5] + 0xc);
    puVar13 = (ulonglong *)(param_2[5] + 0x10);
  }
  uVar16 = *puVar13;
  if ((uVar16 == DAT_14c948034) && (*piVar4 != DAT_14c948030)) {
    FUN_14011791e(&local_b8,*piVar4,uVar16 >> 0x20);
    uVar16 = local_b8;
  }
  if ((int)param_1[0x15] != *(int *)((longlong)param_1 + 0xd4)) {
    uVar15 = (uint)(uVar16 >> 0x10);
    uVar3 = (uint)uVar16 & 0xffff;
    uVar15 = (int)(uVar16 >> 0x20) + ((uint)uVar16 << 0x10 | uVar3) +
             (uVar15 << 0x13 | uVar15 & 0xffff) + (uVar3 >> 4);
    plVar7 = (longlong *)param_1[0x1c];
    if ((longlong *)param_1[0x1c] == (longlong *)0x0) {
      plVar7 = param_1 + 0x1b;
    }
    iVar20 = *(int *)((longlong)plVar7 + (ulonglong)((int)param_1[0x1d] - 1U & uVar15) * 4);
    if (iVar20 != -1) {
      do {
        if (*(ulonglong *)(param_1[0x14] + (longlong)iVar20 * 0x60) == uVar16) {
          local_a8 = 0;
          uStack_a0 = 0;
          local_98 = 0;
          local_90 = 0;
          uStack_88 = 0;
          local_b8 = *param_2;
          local_b0 = (undefined4)param_2[1];
          FUN_1447715ec(&local_a8,param_2 + 2);
          local_e8 = 0;
          uStack_e4 = 0;
          FUN_1401533ba(&local_f8,&local_e8,1);
          uVar18 = 0;
          if ((int)param_1[0x15] == *(int *)((longlong)param_1 + 0xd4)) goto LAB_141236e60;
          plVar7 = param_1 + 0x1b;
          if ((longlong *)param_1[0x1c] != (longlong *)0x0) {
            plVar7 = (longlong *)param_1[0x1c];
          }
          iVar20 = *(int *)((longlong)plVar7 + (ulonglong)((int)param_1[0x1d] - 1U & uVar15) * 4);
          if (iVar20 == -1) goto LAB_141236e60;
          goto LAB_141236e43;
        }
        iVar20 = *(int *)((longlong)iVar20 * 0x60 + param_1[0x14] + 0x58);
      } while (iVar20 != -1);
    }
  }
  goto LAB_141236f0a;
  while (iVar20 = *(int *)(lVar14 + 0x58), iVar20 != -1) {
LAB_141236e43:
    lVar14 = param_1[0x14] + (longlong)iVar20 * 0x60;
    if (*(ulonglong *)(param_1[0x14] + (longlong)iVar20 * 0x60) == uVar16) goto LAB_141236e62;
  }
LAB_141236e60:
  lVar14 = 0;
LAB_141236e62:
  uVar15 = *(uint *)(lVar14 + 0x30);
  if (uVar15 == 0) {
    uVar16 = 1;
    iVar20 = 0;
    uVar3 = 0;
  }
  else {
    puVar5 = *(uint **)(lVar14 + 0x28);
    if (*(uint **)(lVar14 + 0x28) == (uint *)0x0) {
      puVar5 = (uint *)(lVar14 + 0x18);
    }
    uVar3 = *puVar5;
    if (uVar3 == 0) {
      iVar20 = uVar15 + 0x1e;
      if (-1 < (int)(uVar15 - 1)) {
        iVar20 = uVar15 - 1;
      }
      uVar18 = 0;
      uVar16 = (ulonglong)(uint)(iVar20 >> 5);
      if (iVar20 >> 5 < 1) {
        uVar16 = uVar18;
      }
      iVar20 = 0;
      do {
        if (uVar16 == uVar18) goto LAB_141236ef9;
        iVar20 = iVar20 + 0x20;
        uVar3 = puVar5[uVar18 + 1];
        uVar18 = uVar18 + 1;
      } while (uVar3 == 0);
    }
    else {
      uVar18 = 0;
      iVar20 = 0;
    }
    uVar16 = (ulonglong)(-uVar3 & uVar3);
    uVar1 = uVar16 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar3 = (iVar20 - ((uint)lVar8 ^ 0x3f)) + 0x3e;
    if ((int)uVar15 <= (int)uVar3) {
      uVar3 = uVar15;
    }
  }
  if (uVar3 != uVar15) {
    local_118 = param_1 + 0x4f;
    local_120 = param_1 + 0x54;
    local_128 = param_1 + 7;
    uVar22 = 0xffffffff;
    local_148 = puVar21;
    local_138 = (ulonglong)uVar15;
    local_110 = (uint *)(lVar14 + 0x18);
    do {
      lVar9 = *(longlong *)(lVar14 + 8);
      lVar6 = (longlong)(int)uVar3 * 0x90;
      lVar8 = lVar9 + lVar6;
      iVar17 = *(int *)(lVar9 + 0x28 + lVar6);
      if (((iVar17 == 0) || (iVar11 = *(int *)(lVar8 + 0x2c), iVar11 == 0)) ||
         (iVar17 == DAT_14c948000)) {
LAB_1412371a4:
        uStack_e0 = DAT_14c948620;
        local_108 = DAT_14c948618;
      }
      else {
        if ((iVar11 < 2) && (*(int *)(lVar8 + 0x4c) < 1)) {
          lVar19 = lVar8 + 0x30;
        }
        else {
          lVar19 = *(longlong *)(lVar8 + 0x40);
        }
        if ((iVar11 == 1) || (iVar11 < 6)) goto LAB_1412371a4;
        uStack_e0 = *(undefined4 *)(lVar19 + 0x44);
        local_108 = *(undefined8 *)(lVar19 + 0x3c);
      }
      local_e8 = (uint)local_108;
      uStack_e4 = (undefined4)((ulonglong)local_108 >> 0x20);
      local_f0 = uStack_e0;
      local_100 = uStack_e0;
      local_154 = iVar20;
      local_f8 = local_108;
      FUN_144928d62(&local_a8,5,&local_108);
      cVar2 = FUN_14493b798(lVar9 + lVar6 + 0x18,&local_b8);
      if (cVar2 != '\0') {
        if ((char)*puVar21 != '\x01') {
          FUN_140321d1a(puVar21);
        }
        plVar7 = (longlong *)FUN_1403a1726(param_1,lVar8);
        if ((plVar7 != (longlong *)0x0) &&
           (lVar8 = (**(code **)(*param_1 + 0x180))(param_1), lVar8 != 0)) {
          lVar9 = FUN_141900771();
          if (-10000.0 < param_4) {
            local_c8 = 0;
            uStack_c0 = 0;
            local_150 = lVar9;
            local_140 = plVar7;
            local_130 = param_1;
            if (0 < *(int *)(lVar8 + 0x238)) {
              local_150 = lVar9 + 0x110;
              lVar9 = 0;
              do {
                uVar1 = uStack_c0;
                iVar20 = *(int *)(*(longlong *)(lVar8 + 0x230) + 4 + lVar9 * 8);
                if ((((iVar20 != 0) &&
                     (uVar15 = *(uint *)(*(longlong *)(lVar8 + 0x230) + lVar9 * 8), -1 < (int)uVar15
                     )) && ((int)uVar15 < DAT_14c9647dc)) &&
                   (((plVar7 = (longlong *)
                               ((ulonglong)((uVar15 & 0xffff) * 0x18) +
                               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar15 >> 0x10) * 8)),
                     plVar7 != (longlong *)0x0 && ((int)plVar7[2] == iVar20)) &&
                    (((*(uint *)(plVar7 + 1) & 0x10200000) == 0 &&
                     (plVar7 = (longlong *)*plVar7, plVar7 != (longlong *)0x0)))))) {
                  lVar6 = (longlong)(int)uStack_c0;
                  uVar15 = (int)uStack_c0 + 1;
                  uStack_c0 = CONCAT44(uStack_c0._4_4_,uVar15);
                  if (uStack_c0._4_4_ < uVar15) {
                    FUN_140cba038(&local_c8,uVar1 & 0xffffffff);
                  }
                  *(longlong **)(local_c8 + lVar6 * 8) = plVar7;
                  lVar6 = plVar7[0x7a];
                  cVar2 = (**(code **)(*plVar7 + 0x6c8))(plVar7);
                  if (cVar2 != '\0') {
                    cVar2 = FUN_14016169c(plVar7,&local_e8);
                    if ((lVar6 != 0) && (cVar2 != '\x01' || local_e8 == 0)) {
                      lVar6 = *(longlong *)(lVar6 + 0x1c8);
                      if (lVar6 == 0) {
                        local_d8 = DAT_14c8464f0;
                        local_e8 = (uint)DAT_14c8464e0;
                        uStack_e4 = DAT_14c8464e0._4_4_;
                        uStack_e0 = (undefined4)DAT_14c8464e8;
                        uStack_dc = DAT_14c8464e8._4_4_;
                      }
                      else {
                        local_e8 = (uint)*(undefined8 *)(lVar6 + 0x260);
                        uStack_e4 = (undefined4)((ulonglong)*(undefined8 *)(lVar6 + 0x260) >> 0x20);
                        uStack_e0 = (undefined4)*(undefined8 *)(lVar6 + 0x268);
                        uStack_dc = (undefined4)((ulonglong)*(undefined8 *)(lVar6 + 0x268) >> 0x20);
                        local_d8 = *(undefined8 *)(lVar6 + 0x270);
                      }
                      FUN_148efebeb(plVar7,local_150,&local_e8,local_120);
                    }
                  }
                }
                lVar9 = lVar9 + 1;
              } while ((int)lVar9 < *(int *)(lVar8 + 0x238));
            }
            plVar7 = local_140;
            FUN_148ef97f6(local_128,&local_c8,local_140);
            param_1 = local_130;
            puVar21 = local_148;
            if (local_c8 != 0) {
              FUN_1400020a8();
              param_1 = local_130;
              puVar21 = local_148;
            }
          }
          *(undefined1 *)((longlong)plVar7 + 0x61) = 1;
          FUN_140fb8846(param_1,lVar8);
          if (((*plVar7 != 0) && (cVar2 = FUN_140114204(*plVar7 + 0x48), cVar2 != '\0')) &&
             ((int)param_1[0x53] != 0)) {
            local_e8 = local_e8 & 0xffffff00;
            uStack_e4 = 0;
            uStack_e0 = 0;
            uStack_dc = 0;
            lVar9 = *plVar7;
            local_140 = plVar7;
            lVar6 = FUN_140149a73(lVar8,0);
            if (lVar6 != 0) {
              FUN_14039fc7b(lVar9 + 0x48,&local_e8,lVar6,0);
            }
            FUN_1403a0728(&local_e8,&local_c8);
            plVar7 = local_140;
            puVar21 = local_148;
            puVar10 = (undefined8 *)param_1[0x52];
            if ((longlong)(int)param_1[0x53] != 0) {
              lVar6 = (longlong)(int)param_1[0x53] << 3;
              lVar9 = 0;
              do {
                if (puVar10[lVar9] == local_c8) {
                  iVar20 = (int)lVar9;
                  if (iVar20 != -1) {
                    if (0 < iVar20) {
                      iVar20 = 1;
                    }
                    puVar10 = puVar10 + (iVar20 + 1) % 3;
                  }
                  break;
                }
                lVar9 = lVar9 + 1;
                lVar6 = lVar6 + -8;
              } while (lVar6 != 0);
            }
            FUN_144976b9c(&local_e8,*puVar10);
            lVar9 = *plVar7;
            lVar8 = FUN_140149a73(lVar8,0);
            if (lVar8 != 0) {
              FUN_140bc53f1(lVar9 + 0x48,&local_e8,lVar8,0);
            }
          }
        }
        if (param_4 <= -10000.0) {
          FUN_1447f69b6(local_118);
        }
      }
      uVar22 = uVar22 & ~(uint)uVar16;
      puVar5 = *(uint **)(lVar14 + 0x28);
      if (*(uint **)(lVar14 + 0x28) == (uint *)0x0) {
        puVar5 = local_110;
      }
      uVar15 = *(uint *)(lVar14 + 0x30);
      iVar17 = (int)uVar18;
      lVar8 = (longlong)iVar17;
      uVar3 = puVar5[lVar8] & uVar22;
      iVar20 = local_154;
      if (uVar3 == 0) {
        iVar11 = uVar15 + 0x1e;
        if (-1 < (int)(uVar15 - 1)) {
          iVar11 = uVar15 - 1;
        }
        iVar11 = iVar11 >> 5;
        iVar20 = local_154 + 0x20;
        iVar12 = iVar11;
        if (iVar11 < iVar17) {
          iVar12 = iVar17;
        }
        if (iVar17 < iVar11) {
          lVar9 = 0;
          do {
            uVar3 = puVar5[lVar8 + lVar9 + 1];
            if (uVar3 != 0) {
              uVar18 = (ulonglong)(iVar17 + (int)lVar9 + 1);
              uVar22 = 0xffffffff;
              goto LAB_1412372ca;
            }
            iVar20 = iVar20 + 0x20;
            lVar9 = lVar9 + 1;
          } while (iVar12 - lVar8 != lVar9);
          uVar22 = 0xffffffff;
          iVar17 = iVar12;
        }
        uVar18 = (ulonglong)(iVar17 + 1);
        uVar3 = uVar15;
      }
      else {
LAB_1412372ca:
        uVar16 = (ulonglong)(-uVar3 & uVar3);
        uVar1 = uVar16 * 2 + 1;
        lVar8 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
          }
        }
        uVar3 = (iVar20 - ((uint)lVar8 ^ 0x3f)) + 0x3e;
        if ((int)uVar15 <= (int)uVar3) {
          uVar3 = uVar15;
        }
      }
    } while (uVar3 != (uint)local_138);
  }
LAB_141236ef9:
  if (local_90 != 0) {
    FUN_1400020a8();
  }
LAB_141236f0a:
  if ((local_80 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14123751a FUN_14123751a body=22 status=ok
// SIG undefined FUN_14123751a(void)

undefined8 FUN_14123751a(int *param_1)

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
  
  plVar4 = DAT_14cb8d398;
  if (DAT_14cb8d398 == (longlong *)0x0) {
    return 0;
  }
  if (*(code **)(*DAT_14cb8d398 + 0x300) == (code *)&LAB_144837a50) {
    if (((*(byte *)((longlong)DAT_14cb8d398 + 0x154) & 1) == 0) ||
       ((int)DAT_14cb8d398[0x3a] <= *(int *)((longlong)DAT_14cb8d398 + 0x1fc))) {
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
    cVar5 = (**(code **)(*DAT_14cb8d398 + 0x300))(DAT_14cb8d398);
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



// FUNCTION 141237530 FUN_141237530 body=103 status=ok
// SIG undefined FUN_141237530(void)

undefined8 * FUN_141237530(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  
  *param_1 = &PTR_FUN_14b464c00;
  lVar4 = 0x48;
  do {
    plVar3 = *(longlong **)((longlong)param_1 + lVar4);
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
    lVar4 = lVar4 + -0x10;
  } while (lVar4 != 8);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141237597 FUN_141237597 body=43 status=ok
// SIG undefined FUN_141237597(void)

void FUN_141237597(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 10;
  }
  return;
}



// FUNCTION 1412375c2 FUN_1412375c2 body=386 status=ok
// SIG undefined FUN_1412375c2(void)

void FUN_1412375c2(longlong param_1)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong *plVar10;
  int iVar11;
  undefined8 *puVar12;
  longlong lVar13;
  undefined1 auStack_d8 [42];
  byte local_ae;
  byte local_ad;
  int local_ac;
  undefined8 *local_a8;
  longlong local_a0;
  longlong *local_98;
  undefined8 *local_90;
  code *local_88;
  undefined8 local_78;
  undefined **local_68;
  longlong local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  plVar10 = (longlong *)(param_1 + 0x40);
  iVar1 = *(int *)(param_1 + 0x48);
  lVar13 = (longlong)iVar1;
  if (lVar13 != 0) {
    puVar12 = (undefined8 *)*plVar10;
    local_a0 = param_1;
    local_98 = plVar10;
    bVar2 = FUN_141237745(*puVar12);
    local_90 = puVar12 + 4;
    iVar6 = 0;
    iVar7 = 0;
    local_a8 = puVar12;
    do {
      local_ae = bVar2;
      local_ad = local_ae ^ 1;
      lVar4 = (longlong)iVar7;
      iVar11 = iVar7 + 1;
      if (iVar7 + 1 < iVar1) {
        iVar11 = iVar1;
      }
      puVar12 = local_90 + lVar4 * 4;
      bVar2 = local_ae & 1;
      iVar8 = iVar7;
      lVar5 = lVar4;
      local_ac = iVar6;
      do {
        lVar5 = lVar5 + 1;
        iVar9 = iVar11;
        if (lVar13 <= lVar5) break;
        bVar3 = FUN_141237745(*puVar12);
        iVar8 = iVar8 + 1;
        puVar12 = puVar12 + 4;
        iVar9 = iVar8;
      } while (bVar2 == bVar3);
      iVar6 = local_ac;
      iVar11 = iVar9 - iVar7;
      if ((local_ae & 1) == 0) {
        FUN_141237848(local_a8 + lVar4 * 4,iVar11);
        iVar6 = local_ac;
      }
      else {
        if (local_ac != iVar7) {
          memmove(local_a8 + (longlong)local_ac * 4,local_a8 + lVar4 * 4,(longlong)iVar11 << 5);
        }
        iVar6 = iVar6 + iVar11;
      }
      iVar7 = iVar9;
      bVar2 = local_ad;
    } while (lVar5 < lVar13);
    *(int *)(local_a0 + 0x48) = iVar6;
    param_1 = local_a0;
    plVar10 = local_98;
  }
  local_78 = 0;
  local_68 = &PTR_LAB_14a185640;
  local_88 = FUN_142b3104e;
  local_60 = param_1;
  FUN_14584ebe9();
  FUN_145c2c9d7(plVar10);
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141237745 FUN_141237745 body=78 status=ok
// SIG undefined FUN_141237745(void)

undefined8 FUN_141237745(longlong param_1)

{
  longlong lVar1;
  
  FUN_141237793();
  if ((longlong)DAT_14c9a3330 != 0) {
    lVar1 = 0;
    do {
      if ((*(longlong *)(DAT_14c9a3328 + lVar1) != 0) &&
         (*(longlong *)(*(longlong *)(DAT_14c9a3328 + lVar1) + 0x3c) == param_1)) {
        return 1;
      }
      lVar1 = lVar1 + 0x18;
    } while ((longlong)DAT_14c9a3330 * 0x18 != lVar1);
  }
  return 0;
}



// FUNCTION 141237793 FUN_141237793 body=181 status=ok
// SIG undefined FUN_141237793(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_141237793(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9a3398) {
    FUN_144b3d300(&DAT_14c9a3398);
    if (DAT_14c9a3398 == -1) {
      DAT_14c9a3320 = 0;
      DAT_14c9a3358 = 0;
      DAT_14c9a3360 = 0;
      DAT_14c9a3328 = 0;
      _DAT_14c9a3330 = 0;
      DAT_14c9a3338 = 0;
      _DAT_14c9a3340 = 0;
      _DAT_14c9a3364 = 0xffffffff00000080;
      DAT_14c9a336c = 0;
      DAT_14c9a3378 = 0;
      DAT_14c9a3380 = 0;
      DAT_14c9a3388 = 0;
      _DAT_14c9a3390 = 0;
      atexit((_func_5014 *)&LAB_142b2bb4b);
      _Init_thread_footer(&DAT_14c9a3398);
    }
  }
  return &DAT_14c9a3320;
}



// FUNCTION 141237848 FUN_141237848 body=47 status=ok
// SIG undefined FUN_141237848(void)

void FUN_141237848(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 8);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 141237878 FUN_141237878 body=169 status=ok
// SIG undefined FUN_141237878(void)

void FUN_141237878(longlong *param_1)

{
  longlong lVar1;
  code *pcVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  
  lVar3 = DAT_14c9a3328;
  lVar4 = (longlong)DAT_14c9a3330;
  if (lVar4 != 0) {
    lVar7 = 0;
    do {
      lVar1 = *(longlong *)(lVar3 + lVar7);
      if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0x3c) != 0)) {
        pcVar2 = (code *)*param_1;
        plVar6 = (longlong *)param_1[2];
        if ((longlong *)param_1[2] == (longlong *)0x0) {
          plVar6 = param_1 + 4;
        }
        uVar5 = (**(code **)(*plVar6 + 8))();
        (*pcVar2)(uVar5,lVar1);
      }
      lVar7 = lVar7 + 0x18;
    } while (lVar4 * 0x18 != lVar7);
  }
  if (*param_1 != 0) {
    plVar6 = param_1 + 4;
    if ((longlong *)param_1[2] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[2];
    }
                    /* WARNING: Could not recover jumptable at 0x00014123790c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar6 + 0x10))(plVar6);
    return;
  }
  return;
}



// FUNCTION 141237922 FUN_141237922 body=326 status=ok
// SIG undefined FUN_141237922(void)

void FUN_141237922(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  wchar_t *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  undefined8 *local_50;
  undefined1 *local_48;
  undefined1 *local_40;
  undefined8 local_30;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar1 = *(longlong *)(param_1 + 0x20);
  if (lVar1 != 0) {
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
    }
    if ((*(int *)(DAT_14cae9568 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cae9568 + 0x38) * 8) == DAT_14cae9568 + 0x30)) goto LAB_14123797d;
  }
  lVar1 = 0;
LAB_14123797d:
  FUN_141237a6a(&local_30,lVar1,0);
  *(undefined4 *)(param_1 + 0x44) = (undefined4)local_30;
  *(undefined4 *)(param_1 + 0x48) = local_30._4_4_;
  *(undefined4 *)(param_1 + 0x4c) = uStack_28;
  *(undefined4 *)(param_1 + 0x50) = uStack_24;
  FUN_141237bb0(param_1);
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141237a6a FUN_141237a6a body=325 status=ok
// SIG undefined FUN_141237a6a(void)

ulonglong * FUN_141237a6a(ulonglong *param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  bool bVar8;
  
  *param_1 = 0;
  param_1[1] = 0;
  uVar6 = 0;
  iVar1 = 0;
  if (param_3 != 0) {
    uVar5 = *(uint *)(param_3 + 0xc);
    *(uint *)(param_1 + 1) = uVar5;
    if ((int)uVar5 < DAT_14c9647dc) {
      lVar7 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8);
    }
    else {
      lVar7 = 0;
    }
    iVar1 = *(int *)(lVar7 + 0x10);
    if (*(int *)(lVar7 + 0x10) == 0) {
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
      iVar1 = *(int *)(lVar7 + 0x10);
      bVar8 = iVar1 == 0;
      if (bVar8) {
        *(int *)(lVar7 + 0x10) = iVar4;
        iVar1 = 0;
      }
      UNLOCK();
      if (bVar8) {
        iVar1 = iVar4;
      }
    }
  }
  *(int *)((longlong)param_1 + 0xc) = iVar1;
  uVar3 = 0;
  if (param_2 != 0) {
    uVar6 = *(uint *)(param_2 + 0xc);
    if ((int)uVar6 < DAT_14c9647dc) {
      lVar7 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8);
    }
    else {
      lVar7 = 0;
    }
    uVar3 = (ulonglong)*(uint *)(lVar7 + 0x10);
    if (*(uint *)(lVar7 + 0x10) == 0) {
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
      uVar2 = *(uint *)(lVar7 + 0x10);
      bVar8 = uVar2 == 0;
      if (bVar8) {
        *(uint *)(lVar7 + 0x10) = uVar5;
        uVar2 = 0;
      }
      UNLOCK();
      if (bVar8) {
        uVar2 = uVar5;
      }
      uVar3 = (ulonglong)uVar2;
    }
  }
  *param_1 = (ulonglong)uVar6 | uVar3 << 0x20;
  return param_1;
}



// FUNCTION 141237bb0 FUN_141237bb0 body=714 status=ok
// SIG undefined FUN_141237bb0(void)

void FUN_141237bb0(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  undefined1 auStack_c8 [40];
  undefined1 local_a0 [8];
  undefined8 *local_98;
  int local_90;
  undefined8 local_88;
  undefined4 local_80;
  byte local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(int *)((longlong)param_1 + 0x54) == 0) {
    uVar6 = FUN_140059518((longlong)param_1 + 0x44);
    uVar4 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
    uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
    *(uint *)((longlong)param_1 + 0x54) = uVar4 >> 0x10 ^ uVar4;
  }
  plVar1 = param_1 + 6;
  cVar3 = (**(code **)(param_1[6] + 0x10))(plVar1);
  if (cVar3 == '\0') {
    lVar5 = (**(code **)(*param_1 + 0x180))(param_1);
    if (lVar5 != 0) {
      if (*(longlong *)(lVar5 + 0x1f0) == 0) {
        puVar7 = (undefined8 *)(lVar5 + 0x458);
      }
      else {
        puVar7 = (undefined8 *)(*(longlong *)(lVar5 + 0x1f0) + 0xf0);
      }
      uVar2 = *puVar7;
      local_98 = (undefined8 *)0x0;
      local_90 = 0;
      FUN_1446efa72(&local_98,0,3,0x10);
      puVar7 = local_98;
      local_90 = 3;
      *local_98 = &PTR_LAB_14a1c8830;
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
      local_98[2] = lVar8;
      *local_98 = &PTR_FUN_14b9a6970;
      local_98[3] = 0;
      iVar9 = 0;
      if (param_1 != (longlong *)0x0) {
        uVar4 = *(uint *)((longlong)param_1 + 0xc);
        *(uint *)(local_98 + 3) = uVar4;
        if ((int)uVar4 < DAT_14c9647dc) {
          lVar5 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
        }
        else {
          lVar5 = 0;
        }
        iVar9 = *(int *)(lVar5 + 0x10);
        if (*(int *)(lVar5 + 0x10) == 0) {
          LOCK();
          iVar9 = DAT_14c964868 + 1;
          UNLOCK();
          iVar10 = DAT_14c964868 + 1;
          bVar11 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar9;
          if (bVar11) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar10);
          }
          LOCK();
          iVar9 = *(int *)(lVar5 + 0x10);
          bVar11 = iVar9 == 0;
          if (bVar11) {
            *(int *)(lVar5 + 0x10) = iVar10;
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
      local_88 = 0;
      local_80 = 0;
      FUN_14487d8d8(&local_88,&local_98);
      local_48 = 1;
      FUN_14016fdb0(uVar2,local_a0,&local_88);
      (*(code *)(&PTR_LAB_14a1c87a0)[local_48])(&local_88);
      if (local_90 != 0) {
        if (local_98 == (undefined8 *)0x0) goto LAB_141237d37;
        (**(code **)*local_98)(local_98,0);
        FUN_1446efa72(&local_98,0,0,0x10);
        local_90 = 0;
      }
      if (local_98 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
  }
  else {
    (**(code **)(param_1[6] + 0x38))(plVar1);
    (**(code **)(param_1[6] + 0x30))(plVar1);
    (**(code **)(param_1[6] + 0x20))(plVar1);
    (**(code **)(param_1[6] + 0x18))(plVar1);
    *(undefined1 *)(param_1 + 8) = 1;
  }
LAB_141237d37:
  if ((local_38 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141237e7c FUN_141237e7c body=1 status=ok
// SIG undefined FUN_141237e7c(void)

void FUN_141237e7c(void)

{
  return;
}



// FUNCTION 141237e7e FUN_141237e7e body=1 status=ok
// SIG undefined FUN_141237e7e(void)

void FUN_141237e7e(void)

{
  return;
}



// FUNCTION 141237e80 FUN_141237e80 body=1 status=ok
// SIG undefined FUN_141237e80(void)

void FUN_141237e80(void)

{
  return;
}



// FUNCTION 141237e82 FUN_141237e82 body=1 status=ok
// SIG undefined FUN_141237e82(void)

void FUN_141237e82(void)

{
  return;
}



// FUNCTION 141237e84 FUN_141237e84 body=487 status=ok
// SIG undefined FUN_141237e84(void)

undefined8 * FUN_141237e84(longlong param_1,undefined8 *param_2,longlong param_3)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 uVar5;
  uint uVar6;
  int iVar7;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong *local_50;
  longlong local_48;
  longlong *local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  FUN_14123806c(param_1);
  if (*(int *)(param_1 + 0x94) < *(int *)(param_1 + 0x68)) {
    uVar3 = (uint)((ulonglong)param_3 >> 0x10);
    uVar6 = (uint)param_3 & 0xffff;
    lVar4 = param_1 + 0x98;
    if (*(longlong *)(param_1 + 0xa0) != 0) {
      lVar4 = *(longlong *)(param_1 + 0xa0);
    }
    iVar7 = *(int *)(lVar4 + (ulonglong)
                             (*(int *)(param_1 + 0xa8) - 1U &
                             (int)((ulonglong)param_3 >> 0x20) + ((uint)param_3 << 0x10 | uVar6) +
                             (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar6 >> 4)) * 4);
    if (iVar7 != -1) {
      do {
        plVar2 = (longlong *)(*(longlong *)(param_1 + 0x60) + (longlong)iVar7 * 0x18);
        if (*plVar2 == param_3) {
          if (plVar2 != (longlong *)0x0) {
            local_38 = plVar2[1];
            goto LAB_141237f8d;
          }
          break;
        }
        iVar7 = (int)plVar2[2];
      } while (iVar7 != -1);
    }
    local_38 = 0;
LAB_141237f8d:
    if (local_38 != 0) {
      uVar5 = FUN_140d5712e();
      FUN_140d570d8(uVar5,&local_48,&local_38);
      FUN_1412fa92c(param_1,&local_58,local_48 + 0x28);
      if (local_58 == 0) {
        *param_2 = 0;
      }
      else {
        FUN_1412380ca(local_58,param_2,param_3);
      }
      if (local_50 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_50 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*local_50)(local_50);
          LOCK();
          piVar1 = (int *)((longlong)local_50 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_50 + 0x10))(local_50);
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
          piVar1 = (int *)((longlong)local_40 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_40 + 0x10))(local_40);
          }
        }
      }
      goto LAB_141237ee1;
    }
  }
  if (*(longlong *)(param_1 + 0x30) == 0) {
    *param_2 = 0;
  }
  else {
    FUN_1412380ca(*(longlong *)(param_1 + 0x30),param_2,param_3);
  }
LAB_141237ee1:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 8));
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14123806c FUN_14123806c body=94 status=ok
// SIG undefined FUN_14123806c(void)

void FUN_14123806c(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((char)param_1[0x16] == '\x01') {
    FUN_14574b114(param_1 + 0xc);
    if ((longlong)(int)param_1[0xb] != 0) {
      lVar2 = param_1[10];
      lVar1 = (longlong)(int)param_1[0xb] * 0x18;
      do {
        (**(code **)(*param_1 + 0x30))(param_1,*(undefined8 *)(lVar2 + 0x10),lVar2);
        lVar2 = lVar2 + 0x18;
        lVar1 = lVar1 + -0x18;
      } while (lVar1 != 0);
    }
    *(undefined1 *)(param_1 + 0x16) = 0;
  }
  return;
}



// FUNCTION 1412380ca FUN_1412380ca body=215 status=ok
// SIG undefined FUN_1412380ca(void)

undefined8 * FUN_1412380ca(LPCRITICAL_SECTION param_1,undefined8 *param_2,longlong param_3)

{
  HANDLE pvVar1;
  uint uVar2;
  PRTL_CRITICAL_SECTION_DEBUG p_Var3;
  undefined8 uVar4;
  uint uVar5;
  int iVar6;
  
  EnterCriticalSection(param_1);
  FUN_14162f59a(param_1);
  if (*(int *)&param_1[4].LockSemaphore != *(int *)((longlong)&param_1[5].LockSemaphore + 4)) {
    uVar2 = (uint)((ulonglong)param_3 >> 0x10);
    uVar5 = (uint)param_3 & 0xffff;
    p_Var3 = (PRTL_CRITICAL_SECTION_DEBUG)&param_1[5].SpinCount;
    if (param_1[6].DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
      p_Var3 = param_1[6].DebugInfo;
    }
    iVar6 = *(int *)((longlong)&p_Var3->Type +
                    (ulonglong)
                    (param_1[6].LockCount - 1U &
                    (int)((ulonglong)param_3 >> 0x20) + ((uint)param_3 << 0x10 | uVar5) +
                    (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar5 >> 4)) * 4);
    if (iVar6 != -1) {
      uVar4 = 0;
      do {
        pvVar1 = (HANDLE)((longlong)param_1[4].OwningThread + (longlong)iVar6 * 0x20);
        if (*(longlong *)((longlong)param_1[4].OwningThread + (longlong)iVar6 * 0x20) == param_3) {
          if ((undefined8 *)((longlong)pvVar1 + 8) == (undefined8 *)0x0 || pvVar1 == (HANDLE)0x0)
          goto LAB_141238180;
          uVar4 = **(undefined8 **)((longlong)pvVar1 + 8);
          break;
        }
        iVar6 = *(int *)((longlong)pvVar1 + 0x18);
      } while (iVar6 != -1);
      goto LAB_141238182;
    }
  }
LAB_141238180:
  uVar4 = 0;
LAB_141238182:
  *param_2 = uVar4;
  LeaveCriticalSection(param_1);
  return param_2;
}



// FUNCTION 1412381a2 FUN_1412381a2 body=1604 status=ok
// SIG undefined FUN_1412381a2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1412381a2(code *param_1,float param_2,longlong param_3)

{
  float fVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined8 uVar6;
  char cVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  double dVar17;
  double dVar18;
  double dVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auStack_168 [32];
  undefined8 local_148;
  code *local_140;
  undefined4 local_138;
  undefined8 local_130;
  undefined2 *local_128;
  undefined1 *local_120;
  undefined1 *local_118;
  code **local_110;
  undefined1 *local_108;
  code *local_100;
  float local_f0;
  undefined4 uStack_ec;
  double local_e8;
  double local_e0;
  code *local_d8;
  float *pfStack_d0;
  double local_c8;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_168;
  lVar8 = *(longlong *)(param_3 + 0x28);
  lVar9 = *(longlong *)(lVar8 + 0xe0);
  if (lVar9 == 0) goto LAB_1412382c1;
  if (DAT_14cba8288 == 0) {
    local_110 = &local_d8;
    local_d8 = FUN_141864c34;
    local_100 = FUN_14081d0ea;
    local_108 = &LAB_1464cee30;
    local_118 = &LAB_148bfac22;
    local_120 = &LAB_140f21842;
    local_128 = &DAT_149e063b2;
    local_130 = 0;
    local_138 = 0x10000004;
    local_140 = (code *)CONCAT44(local_140._4_4_,0x10);
    local_148 = CONCAT44(local_148._4_4_,0x9cd0);
    FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
    lVar9 = *(longlong *)(lVar8 + 0xe0);
    if (lVar9 == 0) goto LAB_1412382c1;
  }
  if ((((DAT_14cba8288 == 0) || (lVar8 = *(longlong *)(lVar9 + 0x10), lVar8 == 0)) ||
      (*(int *)(lVar8 + 0x38) < *(int *)(DAT_14cba8288 + 0x38))) ||
     (*(longlong *)(*(longlong *)(lVar8 + 0x30) + (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) !=
      DAT_14cba8288 + 0x30)) goto LAB_1412382c1;
  lVar8 = (**(code **)(*(longlong *)(lVar9 + 0x3b38) + 0x18))(lVar9 + 0x3b38);
  if (1e-08 < ABS(*(float *)(param_1 + 0x38) - *(float *)(lVar8 + 0x210))) {
    *(undefined8 *)(param_1 + 0x40) = 0;
    fVar1 = *(float *)(lVar8 + 0x210);
    *(float *)(param_1 + 0x38) = fVar1;
    *(float *)(param_1 + 0x3c) = fVar1;
    if (0.0 < fVar1) {
      FUN_14584ee02(lVar8,&local_d8);
      dVar17 = *(double *)(lVar8 + 0x208);
      dVar19 = *(double *)(lVar8 + 0x200);
      dVar5 = *(double *)(lVar8 + 0x1f8) + (double)local_d8;
      FUN_1413618d6(lVar8,&local_f0);
      local_c8 = local_e0 - (dVar17 + local_c8);
      local_d8 = (code *)((double)CONCAT44(uStack_ec,local_f0) - dVar5);
      pfStack_d0 = (float *)(local_e8 - (dVar19 + (double)pfStack_d0));
      dVar17 = local_c8 * local_c8 +
               (double)local_d8 * (double)local_d8 + (double)pfStack_d0 * (double)pfStack_d0;
      if ((dVar17 != 1.0) || (NAN(dVar17))) {
        if (9.99999993922529e-09 <= dVar17) {
          dVar17 = 1.0 / SQRT(dVar17);
          local_c8 = local_c8 * dVar17;
          pfStack_d0 = (float *)((double)pfStack_d0 * dVar17);
          local_d8 = (code *)((double)local_d8 * dVar17);
        }
        else {
          local_c8 = DAT_14c8464f0;
          local_d8 = DAT_14c8464e0;
          pfStack_d0 = DAT_14c8464e8;
        }
      }
      dVar17 = *(double *)(param_3 + 0x48);
      dVar19 = *(double *)(param_3 + 0x50);
      dVar5 = *(double *)(param_3 + 0x58);
      FUN_144a79a9c(&local_d8,&local_f0);
      dVar18 = (double)CONCAT44(uStack_ec,local_f0);
      if (ABS(dVar5 - (local_e0 + 180.0)) +
          ABS(dVar17 - (180.0 - dVar18)) + ABS(dVar19 - (local_e8 + 180.0)) <
          ABS(dVar5 - local_e0) + ABS(dVar17 - dVar18) + ABS(dVar19 - local_e8)) {
        dVar18 = 180.0 - dVar18;
        local_e0 = local_e0 + 180.0;
        local_e8 = local_e8 + 180.0;
      }
      dVar3 = (double)DAT_1499387d0;
      dVar4 = DAT_1499387d0._8_8_;
      auVar13._8_8_ = local_e8 - dVar19;
      auVar13._0_8_ = dVar18 - dVar17;
      auVar14 = divpd(auVar13,_DAT_1499387d0);
      auVar10._0_8_ = (local_e0 - dVar5) / 360.0;
      auVar10._8_8_ = 0;
      auVar15 = roundpd(auVar14,auVar14,3);
      auVar14 = roundpd(auVar10,auVar10,3);
      auVar22._0_8_ = (local_e0 - dVar5) - auVar14._0_8_ * dVar3;
      auVar22._8_8_ = 0.0 - auVar14._8_8_ * dVar4;
      dVar17 = (dVar18 - dVar17) - auVar15._0_8_ * dVar3;
      dVar19 = (local_e8 - dVar19) - auVar15._8_8_ * dVar4;
      auVar21._0_8_ = dVar17 + dVar3;
      auVar21._8_8_ = dVar19 + dVar4;
      auVar20._0_8_ = dVar3 + auVar22._0_8_;
      auVar20._8_8_ = dVar4 + auVar22._8_8_;
      auVar15._8_8_ = -(ulonglong)(0.0 <= dVar19);
      auVar15._0_8_ = -(ulonglong)(0.0 <= dVar17);
      auVar14._8_8_ = dVar19;
      auVar14._0_8_ = dVar17;
      auVar10 = blendvpd(auVar21,auVar14,auVar15);
      auVar11._8_8_ = -(ulonglong)(0.0 <= auVar22._8_8_);
      auVar11._0_8_ = -(ulonglong)(0.0 <= auVar22._0_8_);
      auVar14 = blendvpd(auVar20,auVar22,auVar11);
      auVar16._0_8_ = auVar10._0_8_ + -360.0;
      auVar16._8_8_ = auVar10._8_8_ + -360.0;
      auVar12._8_8_ = -(ulonglong)(180.0 < auVar10._8_8_);
      auVar12._0_8_ = -(ulonglong)(180.0 < auVar10._0_8_);
      auVar10 = blendvpd(auVar10,auVar16,auVar12);
      dVar17 = auVar14._0_8_;
      *(undefined1 (*) [16])(param_1 + 0x48) = auVar10;
      *(ulonglong *)(param_1 + 0x58) =
           ~-(ulonglong)(180.0 < dVar17) & (ulonglong)dVar17 |
           (ulonglong)(dVar17 + -360.0) & -(ulonglong)(180.0 < dVar17);
    }
    else {
      *(undefined8 *)(param_1 + 0x58) = DAT_14c846508;
      uVar6 = DAT_14c846500;
      *(undefined8 *)(param_1 + 0x48) = DAT_14c8464f8;
      *(undefined8 *)(param_1 + 0x50) = uVar6;
    }
  }
  fVar1 = 0.0;
  if (0.0 <= *(float *)(param_1 + 0x3c) - param_2) {
    fVar1 = *(float *)(param_1 + 0x3c) - param_2;
  }
  *(float *)(param_1 + 0x3c) = fVar1;
  if ((fVar1 <= 0.0) || (fVar2 = *(float *)(param_1 + 0x38), fVar2 <= 0.0)) goto LAB_1412382c1;
  local_c8 = (double)(lVar8 + 0x118);
  local_f0 = (fVar2 - fVar1) / fVar2;
  if (1.0 <= local_f0) {
    local_f0 = 1.0;
  }
  if (local_f0 <= 0.0) {
    local_f0 = 0.0;
  }
  pfStack_d0 = &local_f0;
  local_d8 = param_1;
  if ((*(longlong *)(*(longlong *)(param_3 + 0x28) + 0xe8) == 0) ||
     (lVar8 = FUN_144a7ba4c(), lVar8 == 0)) {
LAB_141238411:
    local_140 = param_1 + 0x48;
    local_148 = *(undefined8 *)(*(longlong *)(param_3 + 0x28) + 0x30);
    FUN_1412387e8(&local_d8,param_1 + 0x18,param_1 + 0x40,param_3 + 0x48);
  }
  else {
    lVar9 = FUN_14030d4a0();
    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x38) < *(int *)(lVar9 + 0x38)) ||
       ((*(longlong *)
          (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8)
         != lVar9 + 0x30 || (cVar7 = FUN_14584edfa(lVar8), cVar7 != '\0')))) goto LAB_141238411;
  }
  local_140 = param_1 + 0x50;
  local_148 = *(undefined8 *)(*(longlong *)(param_3 + 0x28) + 0x38);
  FUN_1412387e8(&local_d8,param_1 + 0x28,param_1 + 0x44,param_3 + 0x50);
LAB_1412382c1:
  if ((local_c0 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1412387e8 FUN_1412387e8 body=306 status=ok
// SIG undefined FUN_1412387e8(void)

void FUN_1412387e8(longlong param_1,char *param_2,float *param_3,double *param_4,double param_5,
                  double *param_6)

{
  float fVar1;
  float fVar2;
  double dVar3;
  
  fVar2 = **(float **)(param_1 + 8);
  if (0.5 <= fVar2) {
    fVar2 = powf(1.0 - (fVar2 + fVar2 + -1.0),*(float *)(param_2 + 8));
    fVar2 = (1.0 - fVar2) * 0.5 + 0.5;
  }
  else {
    fVar2 = powf(fVar2 + fVar2,*(float *)(param_2 + 8));
    fVar2 = (fVar2 + 0.0) * 0.5;
  }
  fVar1 = *param_3;
  *param_3 = fVar2 + 0.0;
  if ((*param_2 == '\x02') ||
     ((*param_2 == '\x01' && (*(char *)(*(longlong *)(param_1 + 0x10) + 0x18) == '\x04')))) {
    dVar3 = *param_6;
    if ((param_5 != 0.0) && ((param_2[0xc] != '\0' && (0.0 < dVar3 * param_5)))) {
      dVar3 = dVar3 - param_5;
      *param_6 = dVar3;
      if (param_5 * dVar3 < 0.0) {
        *param_6 = 0.0;
        dVar3 = 0.0;
      }
    }
    *param_4 = (double)*(float *)(param_2 + 4) * (double)((fVar2 + 0.0) - fVar1) * dVar3 + *param_4;
  }
  return;
}



// FUNCTION 14123891a FUN_14123891a body=73 status=ok
// SIG undefined FUN_14123891a(void)

void FUN_14123891a(longlong param_1,int param_2)

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



// FUNCTION 141238963 FUN_141238963 body=171 status=ok
// SIG undefined FUN_141238963(void)

void FUN_141238963(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  code *pcStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_48 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 7;
  pcStack_60 = FUN_142866c86;
  uStack_40 = param_3;
  FUN_144b488a0(param_2,&local_38);
  local_38 = CONCAT44(local_38._4_4_ >> 6,(int)local_38 >> 6);
  uStack_30 = CONCAT44(uStack_30._4_4_ + 0x3f >> 6,(int)uStack_30 + 0x3f >> 6);
  FUN_144b48950(param_1,param_2,&local_78);
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141238a10 FUN_141238a10 body=220 status=ok
// SIG undefined FUN_141238a10(void)

longlong FUN_141238a10(longlong param_1,longlong param_2)

{
  int iVar1;
  ulonglong uVar2;
  void *_Src;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  ulonglong local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_2 != param_1) {
    local_58 = CONCAT71(local_58._1_7_,*(byte *)(param_2 + 0x18));
    (*(code *)(&switchD_1404a0b06::switchdataD_14a1843a0)[*(byte *)(param_2 + 0x18)])
              (&local_68,param_2 + 8);
    local_38 = local_58;
    local_48 = local_68;
    uStack_44 = uStack_64;
    uStack_40 = uStack_60;
    uStack_3c = uStack_5c;
    uVar2 = *(ulonglong *)(param_1 + 0x18);
    uVar3 = *(undefined4 *)(param_1 + 8);
    uVar4 = *(undefined4 *)(param_1 + 0xc);
    uVar5 = *(undefined4 *)(param_1 + 0x10);
    uVar6 = *(undefined4 *)(param_1 + 0x14);
    *(undefined4 *)(param_1 + 8) = local_68;
    *(undefined4 *)(param_1 + 0xc) = uStack_64;
    *(undefined4 *)(param_1 + 0x10) = uStack_60;
    *(undefined4 *)(param_1 + 0x14) = uStack_5c;
    *(ulonglong *)(param_1 + 0x18) = local_58;
    local_68 = uVar3;
    uStack_64 = uVar4;
    uStack_60 = uVar5;
    uStack_5c = uVar6;
    local_58 = uVar2;
    (*(code *)(&switchD_1458da17c::switchdataD_14a184390)[uVar2 & 0xff])(&local_68);
    iVar1 = *(int *)(param_2 + 0x28);
    _Src = *(void **)(param_2 + 0x20);
    *(int *)(param_1 + 0x28) = iVar1;
    if (iVar1 == 0 && *(int *)(param_1 + 0x2c) == 0) {
      *(undefined4 *)(param_1 + 0x2c) = 0;
    }
    else {
      FUN_1447a127e((undefined8 *)(param_1 + 0x20),iVar1);
      if (iVar1 != 0) {
        memcpy(*(void **)(param_1 + 0x20),_Src,(longlong)iVar1);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141238aee FUN_141238aee body=122 status=ok
// SIG undefined FUN_141238aee(void)

void FUN_141238aee(longlong *param_1)

{
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(param_1[9],(int)param_1[10]);
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 141238b68 FUN_141238b68 body=118 status=ok
// SIG undefined FUN_141238b68(void)

void FUN_141238b68(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  longlong lVar5;
  bool bVar6;
  
  FUN_14584f45e();
  bVar6 = false;
  do {
    iVar1 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
      FUN_1469eb534(param_1,iVar1);
    }
    lVar2 = *param_1;
    lVar5 = (longlong)iVar1 * 0x20;
    *(undefined8 *)(lVar2 + lVar5) = *param_2;
    *(undefined8 *)(lVar2 + 8 + lVar5) = param_2[1];
    lVar3 = param_2[2];
    *(longlong *)(lVar2 + 0x10 + lVar5) = lVar3;
    if (lVar3 != 0) {
      LOCK();
      *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
      UNLOCK();
    }
    *(undefined1 *)(lVar2 + lVar5 + 0x18) = *(undefined1 *)(param_2 + 3);
    bVar4 = !bVar6;
    bVar6 = true;
  } while (bVar4);
  return;
}



// FUNCTION 141238bde FUN_141238bde body=438 status=ok
// SIG undefined FUN_141238bde(void)

void FUN_141238bde(longlong param_1,undefined4 param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 auStack_88 [40];
  longlong local_60 [3];
  char local_48;
  longlong local_40;
  longlong *local_38;
  char local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(int *)(param_1 + 0x27c0) < 1) goto LAB_141238c06;
  FUN_14584f588(&local_40,*(longlong *)(param_1 + 0x27b8) + 8);
  local_28 = '\x01';
  FUN_1412446a1(*(undefined8 *)(param_1 + 0x27b8),*(undefined4 *)(param_1 + 0x27c0));
  *(undefined4 *)(param_1 + 0x27c0) = 0;
  if (*(int *)(param_1 + 0x27c4) == 0) {
LAB_141238cf7:
    local_48 = '\0';
  }
  else {
    FUN_14584f682((longlong *)(param_1 + 0x27b8));
    if (*(int *)(param_1 + 0x27c0) < 1) goto LAB_141238cf7;
    FUN_14584f588(local_60,*(longlong *)(param_1 + 0x27b8) + 8);
    local_48 = '\x01';
  }
  FUN_14584f6b2(param_1,local_60,&local_40);
  if ((local_48 == '\x01') && (local_60[0] != 0)) {
    FUN_1400020a8();
  }
  if ((local_28 == '\x01') && (local_40 != 0)) {
    FUN_1400020a8();
  }
LAB_141238c06:
  if (*(char *)(param_1 + 0x178) == '\x03') {
    uVar5 = FUN_1447210f0(param_1);
    FUN_14142d55a(&local_40,uVar5);
    if (local_38 != (longlong *)0x0) {
      iVar4 = (int)local_38[1];
      do {
        if (iVar4 == 0) {
          plVar6 = (longlong *)0x0;
          break;
        }
        LOCK();
        iVar3 = (int)local_38[1];
        bVar7 = iVar4 == iVar3;
        if (bVar7) {
          *(int *)(local_38 + 1) = iVar4 + 1;
          iVar3 = iVar4;
        }
        iVar4 = iVar3;
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
      if (plVar6 != (longlong *)0x0) {
        if (local_40 != 0) {
          FUN_14584f524(local_40,param_1);
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
  }
  FUN_140d6119a(param_1,param_2);
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141238d96 FUN_141238d96 body=264 status=ok
// SIG undefined FUN_141238d96(void)

void FUN_141238d96(longlong *param_1,undefined8 *param_2)

{
  uint uVar1;
  longlong lVar2;
  byte bVar3;
  byte bVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint uVar7;
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
    bVar3 = FUN_141238e9e(lVar2,*param_2);
    uVar7 = 0;
    uVar9 = 0;
    do {
      uVar6 = (ulonglong)uVar9;
      uVar8 = uVar9 + 1;
      if ((int)(uVar9 + 1) < (int)uVar1) {
        uVar8 = uVar1;
      }
      lVar12 = lVar2 + 8 + uVar6 * 8;
      uVar10 = uVar9;
      uVar5 = uVar6;
      do {
        uVar5 = uVar5 + 1;
        uVar11 = uVar8;
        if (lVar13 <= (longlong)uVar5) break;
        bVar4 = FUN_141238e9e(lVar12,*param_2);
        uVar10 = uVar10 + 1;
        lVar12 = lVar12 + 8;
        uVar11 = uVar10;
      } while ((bVar3 & 1) == bVar4);
      if ((bVar3 & 1) == 0) {
        if (uVar7 != uVar9) {
          memmove((void *)(lVar2 + (longlong)(int)uVar7 * 8),(void *)(lVar2 + uVar6 * 8),
                  (longlong)(int)(uVar11 - uVar9) << 3);
        }
        uVar7 = uVar7 + (uVar11 - uVar9);
      }
      uVar9 = uVar11;
      bVar3 = bVar3 ^ 1;
    } while ((longlong)uVar5 < lVar13);
    *(uint *)(param_1 + 1) = uVar7;
  }
  return;
}



// FUNCTION 141238e9e FUN_141238e9e body=104 status=ok
// SIG undefined FUN_141238e9e(void)

ulonglong FUN_141238e9e(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  if ((uVar1 == *param_2) && (uVar2 == param_2[1])) {
    uVar3 = CONCAT71((uint7)(uint3)(uVar2 >> 8),1);
  }
  else {
    if (((uVar2 != 0) &&
        (((-1 < (int)uVar1 && ((int)uVar1 < DAT_14c9647dc)) &&
         (lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar4 != 0)))) &&
       ((*(uint *)(lVar4 + 0x10) == uVar2 && ((*(uint *)(lVar4 + 8) & 0x10200000) == 0)))) {
      return 0;
    }
    uVar3 = FUN_144729dda(param_2);
    uVar3 = uVar3 ^ 1;
  }
  return uVar3;
}



// FUNCTION 141238f06 FUN_141238f06 body=1 status=ok
// SIG undefined FUN_141238f06(void)

void FUN_141238f06(void)

{
  return;
}



// FUNCTION 141238f08 FUN_141238f08 body=109 status=ok
// SIG undefined FUN_141238f08(void)

undefined8 FUN_141238f08(longlong param_1)

{
  uint uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  if ((((*(longlong *)(param_1 + 0xf8) != 0) && (*(int *)(param_1 + 0xf4) != 0)) &&
      (uVar1 = *(uint *)(param_1 + 0xf0), -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    puVar4 = (undefined8 *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((puVar4 != (undefined8 *)0x0) && (*(int *)(puVar4 + 2) == *(int *)(param_1 + 0xf4))) &&
       ((*(uint *)(puVar4 + 1) & 0x10200000) == 0)) {
      if ((*(uint *)(puVar4 + 1) & 0x10200000) == 0) {
        plVar3 = (longlong *)*puVar4;
      }
      else {
        plVar3 = (longlong *)0x0;
      }
                    /* WARNING: Could not recover jumptable at 0x000141238f67. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(*plVar3 + 0x180))();
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 141238f76 FUN_141238f76 body=130 status=ok
// SIG undefined FUN_141238f76(void)

void FUN_141238f76(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b6d6460;
  plVar3 = (longlong *)param_1[0xd5];
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
  *param_1 = &PTR_FUN_14b0a0e90;
  if (param_1[0x1e] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a42dce0;
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 141238ff8 FUN_141238ff8 body=279 status=ok
// SIG undefined FUN_141238ff8(void)

undefined8 FUN_141238ff8(longlong param_1,undefined8 param_2)

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
    if (iVar1 == 2) goto LAB_141239109;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_141239109;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_141239109:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1412390b6;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5,param_2);
      uVar6 = 1;
      goto LAB_1412390b6;
    }
  }
  uVar6 = 0;
LAB_1412390b6:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141239110 FUN_141239110 body=164 status=ok
// SIG undefined FUN_141239110(void)

void FUN_141239110(longlong param_1,undefined4 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  
  if ((*(byte *)(param_1 + 0xd0) & 2) != 0) {
    FUN_1412391b4(param_1,*param_2,param_2[1],*(undefined8 *)(param_2 + 2));
    return;
  }
  iVar1 = *(int *)(param_1 + 200);
  *(uint *)(param_1 + 200) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0xcc) < iVar1 + 1U) {
    FUN_148990718((longlong *)(param_1 + 0xc0),iVar1);
  }
  puVar3 = (undefined4 *)((longlong)iVar1 * 0x58 + *(longlong *)(param_1 + 0xc0));
  *puVar3 = *param_2;
  puVar3[1] = param_2[1];
  uVar2 = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)(puVar3 + 10) = 0;
  puVar3[0xc] = 0;
  *(undefined8 *)(puVar3 + 2) = 0;
  *(undefined8 *)(puVar3 + 4) = 0;
  *(undefined8 *)(puVar3 + 0xd) = 0xffffffff00000080;
  puVar3[0xf] = 0;
  *(undefined8 *)(puVar3 + 0x12) = 0;
  puVar3[0x14] = 0;
  FUN_140725242(puVar3 + 2,uVar2);
  return;
}



// FUNCTION 1412391b4 FUN_1412391b4 body=1090 status=ok
// SIG undefined FUN_1412391b4(void)

void FUN_1412391b4(longlong *param_1,int param_2,int param_3,longlong *param_4)

{
  int *piVar1;
  longlong lVar2;
  byte bVar3;
  code *pcVar4;
  uint uVar5;
  undefined8 ****ppppuVar6;
  ulonglong uVar7;
  longlong *plVar8;
  uint uVar9;
  int iVar10;
  undefined8 *_Src;
  longlong *plVar11;
  longlong lVar12;
  undefined1 auStack_1e8 [40];
  longlong *local_1c0;
  longlong *local_1b8;
  int local_1b0;
  int local_1ac;
  undefined8 ***local_1a8 [3];
  ushort local_190;
  byte local_188;
  longlong local_180;
  ulonglong *local_178;
  byte local_156;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  lVar12 = param_1[0xf];
  if (((lVar12 != 0) && ((*(uint *)(lVar12 + 8) >> 0x1e & 1) == 0)) &&
     ((*(byte *)(param_1 + 6) & 2) == 0)) {
    lVar12 = *(longlong *)(lVar12 + 0xb0);
    FUN_141239620(param_1,&local_180,4,
                  *(undefined1 *)
                   (*(longlong *)(lVar12 + 0x50 + (longlong)param_2 * 0x60) + 0x20 +
                   (longlong)param_3 * 0x28));
    piVar1 = (int *)*local_178 + 1;
    local_1b0 = param_3;
    if ((int *)local_178[1] < piVar1) {
      local_1ac = param_2;
      if ((local_156 & 2) == 0) {
        (**(code **)(local_180 + 0x170))(&local_180,&local_1ac,4);
      }
      else {
        FUN_14572512c(&local_180,&local_1ac);
      }
    }
    else {
      local_1ac = *(int *)*local_178;
      *local_178 = (ulonglong)piVar1;
    }
    lVar12 = lVar12 + (longlong)param_2 * 0x60;
    piVar1 = (int *)*local_178 + 1;
    if ((int *)local_178[1] < piVar1) {
      if ((local_156 & 2) == 0) {
        (**(code **)(local_180 + 0x170))(&local_180,&local_1b0,4);
      }
      else {
        FUN_14572512c(&local_180);
      }
    }
    else {
      local_1b0 = *(int *)*local_178;
      *local_178 = (ulonglong)piVar1;
    }
    plVar11 = (longlong *)(lVar12 + 0x10);
    if (*(longlong **)(lVar12 + 0x38) != (longlong *)0x0) {
      plVar11 = *(longlong **)(lVar12 + 0x38);
    }
    if ((longlong)*(int *)(lVar12 + 0x40) != 0) {
      local_1b8 = (longlong *)((longlong)plVar11 + (longlong)*(int *)(lVar12 + 0x40) * 0xc);
      local_1c0 = param_4 + 7;
      do {
        ppppuVar6 = local_1a8;
        bVar3 = *(byte *)(plVar11 + 1);
        uVar7 = (ulonglong)((uint)bVar3 * 0x120);
        local_190 = (ushort)*(uint *)((longlong)&DAT_14c9a8510 + uVar7);
        if (0x18 < local_190) {
          ppppuVar6 = (undefined8 ****)
                      FUN_14001cc68(*(uint *)((longlong)&DAT_14c9a8510 + uVar7) & 0xffff);
          local_1a8[0] = ppppuVar6;
        }
        if (*(code **)((longlong)&DAT_14c9a85a8 + uVar7) == (code *)0x0) {
          memset(ppppuVar6,0,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar7));
        }
        else {
          (**(code **)((longlong)&DAT_14c9a85a8 + uVar7))(ppppuVar6);
        }
        local_188 = bVar3;
        if ((int)param_4[1] != *(int *)((longlong)param_4 + 0x34)) {
          lVar12 = *plVar11;
          uVar5 = (uint)((ulonglong)lVar12 >> 0x10);
          uVar9 = (uint)lVar12 & 0xffff;
          plVar8 = (longlong *)param_4[8];
          if ((longlong *)param_4[8] == (longlong *)0x0) {
            plVar8 = local_1c0;
          }
          iVar10 = *(int *)((longlong)plVar8 +
                           (ulonglong)
                           ((int)param_4[9] - 1U &
                           (int)((ulonglong)lVar12 >> 0x20) + ((uint)lVar12 << 0x10 | uVar9) +
                           (uVar5 << 0x13 | uVar5 & 0xffff) + (uVar9 >> 4)) * 4);
          if (iVar10 != -1) {
            do {
              lVar2 = *param_4 + (longlong)iVar10 * 0x38;
              if (*(longlong *)(*param_4 + (longlong)iVar10 * 0x38) == lVar12) {
                _Src = (undefined8 *)(lVar2 + 8);
                if (_Src != (undefined8 *)0x0 && lVar2 != 0) {
                  if (bVar3 == *(byte *)(lVar2 + 0x28)) {
                    if (0x18 < *(ushort *)(lVar2 + 0x20)) {
                      _Src = *(undefined8 **)(lVar2 + 8);
                    }
                    ppppuVar6 = local_1a8;
                    if (0x18 < local_190) {
                      ppppuVar6 = (undefined8 ****)local_1a8[0];
                    }
                    if (*(code **)((longlong)&DAT_14c9a85c0 + uVar7) == (code *)0x0) {
                      memcpy(ppppuVar6,_Src,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar7));
                    }
                    else {
                      (**(code **)((longlong)&DAT_14c9a85c0 + uVar7))(ppppuVar6,_Src);
                    }
                  }
                  else {
                    if (*(code **)((longlong)&DAT_14c9a85d0 + uVar7) != (code *)0x0) {
                      ppppuVar6 = (undefined8 ****)local_1a8[0];
                      if (local_190 < 0x19) {
                        ppppuVar6 = local_1a8;
                      }
                      (**(code **)((longlong)&DAT_14c9a85d0 + uVar7))(ppppuVar6);
                    }
                    if (0x18 < local_190) {
                      FUN_1400020a8(local_1a8[0]);
                    }
                    bVar3 = *(byte *)(lVar2 + 0x28);
                    local_190 = *(ushort *)(lVar2 + 0x20);
                    if (local_190 < 0x19) {
                      ppppuVar6 = local_1a8;
                    }
                    else {
                      ppppuVar6 = (undefined8 ****)FUN_14001cc68(local_190,0);
                      _Src = (undefined8 *)*_Src;
                      local_1a8[0] = ppppuVar6;
                    }
                    uVar7 = (ulonglong)((uint)bVar3 * 0x120);
                    pcVar4 = *(code **)((longlong)&DAT_14c9a85b0 + uVar7);
                    if (pcVar4 == (code *)0x0) {
                      memcpy(ppppuVar6,_Src,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar7));
                    }
                    else {
                      (*pcVar4)(ppppuVar6,_Src);
                    }
                    local_188 = *(byte *)(lVar2 + 0x28);
                  }
                }
                break;
              }
              iVar10 = *(int *)(lVar2 + 0x30);
            } while (iVar10 != -1);
          }
        }
        FUN_1403f5866(local_1a8);
        pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_188 * 0x120));
        if (pcVar4 != (code *)0x0) {
          ppppuVar6 = (undefined8 ****)local_1a8[0];
          if (local_190 < 0x19) {
            ppppuVar6 = local_1a8;
          }
          (*pcVar4)(ppppuVar6);
        }
        if (0x18 < local_190) {
          FUN_1400020a8(local_1a8[0]);
        }
        plVar11 = (longlong *)((longlong)plVar11 + 0xc);
      } while (plVar11 != local_1b8);
    }
    (**(code **)(*param_1 + 0x308))(param_1,local_1a8,&local_180,0);
    FUN_1449daebe(&local_180);
  }
  if ((local_48 ^ (ulonglong)auStack_1e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1412395f8 FUN_1412395f8 body=40 status=ok
// SIG undefined FUN_1412395f8(void)

undefined8 * FUN_1412395f8(longlong param_1,undefined8 *param_2)

{
  if ((*(byte *)(param_1 + 0x30) & 2) == 0) {
    FUN_1408f10c6(param_1,param_2);
  }
  else {
    *param_2 = 0xffffffffffffffff;
  }
  return param_2;
}



// FUNCTION 141239620 FUN_141239620 body=141 status=ok
// SIG undefined FUN_141239620(void)

longlong * FUN_141239620(undefined8 param_1,longlong *param_2,undefined1 param_3,char param_4)

{
  ulonglong *puVar1;
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = param_3;
  FUN_1449daf8c(param_2,param_1,0);
  *(byte *)((longlong)param_2 + 0xf4) = *(byte *)((longlong)param_2 + 0xf4) & 0xef | param_4 << 4;
  puVar1 = (ulonglong *)param_2[1];
  if (puVar1[1] < *puVar1 + 1) {
    (**(code **)(*param_2 + 0x170))(param_2,&local_19,1);
  }
  else {
    *puVar1 = *puVar1 + 1;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412396b6 FUN_1412396b6 body=377 status=ok
// SIG undefined FUN_1412396b6(void)

undefined8 * FUN_1412396b6(undefined8 *param_1)

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
  *param_1 = &PTR_FUN_14b1b5300;
  *(undefined1 *)(param_1 + 0x10) = 1;
  FUN_140785382(param_1 + 0x11,0x13);
  *(undefined4 *)((longlong)param_1 + 0xec) = 0;
  *(undefined1 *)(param_1 + 0x1e) = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined8 *)((longlong)param_1 + 0xd9) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe1) = 0;
  *(undefined2 *)((longlong)param_1 + 0xf1) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0xf3) = 1;
  param_1[0x1f] = 0;
  *(undefined2 *)(param_1 + 0x23) = 4;
  *(undefined4 *)(param_1 + 0x20) = 0x41200000;
  *(undefined1 *)(param_1 + 0x24) = 3;
  *(char *)(param_1 + 0x25) = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  param_1[0x2a] = 0;
  *(undefined4 *)(param_1 + 0x2b) = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  *(undefined8 *)((longlong)param_1 + 0x15c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x164) = 0;
  param_1[0x2e] = 0;
  *(undefined4 *)(param_1 + 0x2f) = 0;
  FUN_14044066a(param_1 + 0x30,0x11,7);
  *(undefined1 *)(param_1 + 0x37) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1bc) = DAT_14cb8a538;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  return param_1;
}



// FUNCTION 141239830 FUN_141239830 body=45 status=ok
// SIG undefined FUN_141239830(void)

undefined8 FUN_141239830(undefined8 param_1,int param_2)

{
  FUN_14123985e();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x588);
  }
  return param_1;
}



// FUNCTION 14123985e FUN_14123985e body=436 status=ok
// SIG undefined FUN_14123985e(void)

void FUN_14123985e(undefined8 *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b486ab0;
  param_1[0x62] = 0;
  FUN_14076ba36(param_1 + 99);
  plVar1 = param_1 + 0x58;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x5c) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x5b)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x5b)) {
    FUN_1400020a8(*plVar1);
  }
  FUN_140b970fc(param_1 + 0x33);
  *param_1 = &PTR_FUN_14ac52c60;
  param_1[0x10] = &PTR_FUN_14ac52cf0;
  if (param_1[0x31] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2f] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2d] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x27] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x25] != 0) {
    FUN_1400020a8();
  }
  FUN_14076bd02(param_1 + 0x10);
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



// FUNCTION 141239a12 FUN_141239a12 body=93 status=ok
// SIG undefined FUN_141239a12(void)

void FUN_141239a12(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x68);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-2] != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-5] != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-8] != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 0x10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 141239a70 FUN_141239a70 body=145 status=ok
// SIG undefined FUN_141239a70(void)

void FUN_141239a70(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  ushort uVar3;
  ulonglong uVar4;
  ushort uVar5;
  ulonglong uVar6;
  
  iVar1 = (int)param_2[1];
  if (iVar1 == (int)param_1[1]) {
    if (1 < iVar1) {
      lVar2 = 0;
      while( true ) {
        uVar3 = *(ushort *)(*param_2 + lVar2);
        uVar4 = (ulonglong)uVar3;
        uVar5 = *(ushort *)(*param_1 + lVar2);
        if (uVar3 != uVar5) break;
        if (uVar3 == 0) goto LAB_141239aec;
LAB_141239aad:
        lVar2 = lVar2 + 2;
      }
      if ((uVar5 | uVar3) < 0x80) {
        uVar3 = (ushort)(byte)(&DAT_149e05da0)[uVar4];
        uVar6 = (ulonglong)uVar5;
        uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
        if ((&DAT_149e05da0)[uVar4] == (&DAT_149e05da0)[uVar6]) goto LAB_141239aad;
      }
      if (uVar3 != uVar5) goto LAB_141239ad8;
    }
  }
  else if ((int)param_1[1] + iVar1 != 1) goto LAB_141239ad8;
LAB_141239aec:
  if (((char)param_2[2] == (char)param_1[2]) && ((int)param_1[3] != 0)) {
    return;
  }
LAB_141239ad8:
  FUN_141239b02(param_1);
  *(int *)(param_1 + 3) = (int)param_1[3] + 1;
  return;
}



// FUNCTION 141239b02 FUN_141239b02 body=73 status=ok
// SIG undefined FUN_141239b02(void)

longlong * FUN_141239b02(longlong *param_1,longlong *param_2)

{
  if (param_1 != param_2) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
  }
  *(char *)(param_1 + 2) = (char)param_2[2];
  return param_1;
}



// FUNCTION 141239b4c FUN_141239b4c body=134 status=ok
// SIG undefined FUN_141239b4c(void)

void FUN_141239b4c(uint *param_1,undefined8 param_2,byte param_3)

{
  uint uVar1;
  ulonglong uVar2;
  uint *puVar3;
  
  if ((int)param_1[0x1c] <= (int)(uint)param_3) {
    FUN_1458502aa(param_1 + 2,param_3 + 1,1);
  }
  LOCK();
  param_1[0x1e] = param_1[0x1e] + 1;
  UNLOCK();
  if ((int)(uint)param_3 < (int)*param_1) {
    *param_1 = (uint)param_3;
  }
  puVar3 = param_1 + 2;
  if (*(uint **)(param_1 + 0x1a) != (uint *)0x0) {
    puVar3 = *(uint **)(param_1 + 0x1a);
  }
  uVar2 = (ulonglong)param_3;
  uVar1 = puVar3[uVar2 * 4 + 2];
  puVar3[uVar2 * 4 + 2] = uVar1 + 1;
  if (puVar3[uVar2 * 4 + 3] < uVar1 + 1) {
    FUN_141239bd2(puVar3 + uVar2 * 4,uVar1);
  }
  *(undefined8 *)(*(longlong *)(puVar3 + uVar2 * 4) + (longlong)(int)uVar1 * 8) = param_2;
  return;
}



// FUNCTION 141239bd2 FUN_141239bd2 body=148 status=ok
// SIG undefined FUN_141239bd2(void)

void FUN_141239bd2(longlong param_1,int param_2)

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
    uVar4 = lVar3 << 3;
    if (DAT_14c872d28 != (longlong *)0x0) {
      uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
    }
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 >> 3)) {
      uVar5 = uVar4 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 141239c68 FUN_141239c68 body=38 status=ok
// SIG undefined FUN_141239c68(void)

int FUN_141239c68(longlong param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  
  iVar2 = 0;
  if ((param_2 == 0) && (*(longlong **)(param_1 + 0x188) != (longlong *)0x0)) {
    bVar1 = (**(code **)(**(longlong **)(param_1 + 0x188) + 8))();
    iVar2 = bVar1 + 1;
  }
  return iVar2;
}



// FUNCTION 141239c8e FUN_141239c8e body=45 status=ok
// SIG undefined FUN_141239c8e(void)

undefined8 FUN_141239c8e(undefined8 param_1,int param_2)

{
  FUN_141239cbc();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x2d0);
  }
  return param_1;
}



// FUNCTION 141239cbc FUN_141239cbc body=817 status=ok
// SIG undefined FUN_141239cbc(void)

void FUN_141239cbc(undefined8 *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b0d3180;
  plVar1 = param_1 + 0x53;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x57) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x56)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x56)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = param_1 + 0x4c;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x50) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x4f)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x4f)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = param_1 + 0x42;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x46) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x45)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x45)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = param_1 + 0x3b;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x3f) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x3e)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x3e)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = param_1 + 0x34;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x38) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x37)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x37)) {
    FUN_1400020a8(*plVar1);
  }
  *param_1 = &PTR_FUN_14ac52c60;
  param_1[0x10] = &PTR_FUN_14ac52cf0;
  if (param_1[0x31] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2f] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2d] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x27] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x25] != 0) {
    FUN_1400020a8();
  }
  FUN_14076bd02(param_1 + 0x10);
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



// FUNCTION 141239fee FUN_141239fee body=310 status=ok
// SIG undefined FUN_141239fee(void)

undefined8 FUN_141239fee(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  undefined8 uVar5;
  undefined1 auStack_98 [32];
  undefined1 local_78;
  longlong local_68;
  longlong *plStack_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined1 local_48 [24];
  longlong local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(char *)(param_1 + 0x4dc) == '\x01') {
    cVar4 = FUN_14123a126();
    if (cVar4 != '\0') {
      FUN_14123b3a4(param_1,param_2,param_3,1);
      FUN_14123a2dc(param_1,param_2,param_3);
      local_68 = 0;
      plStack_60 = (longlong *)0x0;
      FUN_14009b010(&local_68,1,0);
      if (local_68 != 0) {
        FUN_1404a8912(local_68,*(undefined4 *)(param_1 + 0xf70));
      }
      local_50 = DAT_14cbd05f0;
      local_58 = DAT_14cbd05e8;
      FUN_1448075d0(local_48);
      if (*param_3 != 0) {
        local_78 = 0;
        FUN_14014191c(*param_3,local_48,&local_68,0);
      }
      if (local_30 != 0) {
        FUN_1400020a8();
      }
      FUN_14123a4ce(param_1,param_3);
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
      uVar5 = 1;
      goto LAB_14123a0df;
    }
  }
  uVar5 = 0;
LAB_14123a0df:
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14123a126 FUN_14123a126 body=437 status=ok
// SIG undefined FUN_14123a126(void)

undefined8 FUN_14123a126(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  int *piVar1;
  longlong *plVar2;
  undefined1 auStack_a8 [32];
  uint local_88;
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
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(char *)(param_1 + 0x4dc) == '\0') {
    local_88 = local_88 & 0xffffff00;
    FUN_1401412e0(param_2,&local_30,1,0);
    FUN_1446dcc2e(param_3,&local_30);
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
  }
  else {
    if (((byte *)*param_3 == (byte *)0x0) || ((*(byte *)*param_3 & 3) == 0)) {
      FUN_14009b010(param_3,3,0);
    }
    plVar2 = *(longlong **)(param_1 + 0x168);
    if (plVar2 != (longlong *)0x0) {
      if (DAT_14cb61cd0 == 0) {
        local_50 = &local_30;
        local_30 = FUN_141030f22;
        local_40 = FUN_14081d0ea;
        local_48 = &LAB_1463b31ae;
        local_58 = &LAB_1486dca4f;
        local_60 = &LAB_1464f50a6;
        local_68 = &DAT_149e063b2;
        local_70 = 0;
        local_78 = 0x10000004;
        local_80 = 8;
        local_88 = 0xd70;
        FUN_14081cfa3(L"/Script/GbxGame",L"GbxPlayerController",&DAT_14cb61cd0,FUN_1464f5084);
      }
      if ((*(int *)(DAT_14cb61cd0 + 0x38) <= *(int *)(plVar2[2] + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(plVar2[2] + 0x30) + (longlong)*(int *)(DAT_14cb61cd0 + 0x38) * 8) ==
          DAT_14cb61cd0 + 0x30)) {
        (**(code **)(*plVar2 + 0x10c8))(plVar2,param_2,param_3);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14123a2dc FUN_14123a2dc body=496 status=ok
// SIG undefined FUN_14123a2dc(void)

void FUN_14123a2dc(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  DWORD DVar4;
  DWORD dwTlsIndex;
  DWORD DVar5;
  LPVOID lpTlsValue;
  bool bVar6;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  undefined8 *local_a0;
  undefined8 local_98;
  longlong local_90;
  char local_88;
  undefined8 local_80;
  undefined8 local_78;
  longlong *plStack_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined1 local_58 [24];
  longlong local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_78 = 0;
  plStack_70 = (longlong *)0x0;
  FUN_14009b010(&local_78,3,0);
  dwTlsIndex = DAT_14c7585d0;
  if (DAT_14c7585d0 == 0xffffffff) {
    dwTlsIndex = TlsAlloc();
    DVar5 = 0xffffffff;
    LOCK();
    bVar6 = DAT_14c7585d0 != 0xffffffff;
    DVar4 = dwTlsIndex;
    if (bVar6) {
      DVar5 = DAT_14c7585d0;
      DVar4 = DAT_14c7585d0;
    }
    DAT_14c7585d0 = DVar4;
    UNLOCK();
    if (bVar6) {
      TlsFree(dwTlsIndex);
      dwTlsIndex = DVar5;
    }
  }
  lpTlsValue = TlsGetValue(dwTlsIndex);
  if (lpTlsValue == (LPVOID)0x0) {
    lpTlsValue = (LPVOID)FUN_140036a08(&local_a0);
    FUN_140fddf04(lpTlsValue);
    TlsSetValue(dwTlsIndex,lpTlsValue);
  }
  local_a0 = (undefined8 *)((longlong)lpTlsValue + 0x10);
  local_98 = *(undefined8 *)((longlong)lpTlsValue + 0x10);
  local_90 = *(longlong *)((longlong)lpTlsValue + 0x20);
  local_88 = '\0';
  local_80 = *(undefined8 *)((longlong)lpTlsValue + 0x28);
  *(undefined8 ***)((longlong)lpTlsValue + 0x28) = &local_a0;
  *(int *)((longlong)lpTlsValue + 0x30) = *(int *)((longlong)lpTlsValue + 0x30) + 1;
  FUN_14123abf2(param_1,param_2,&local_78,0);
  local_60 = DAT_14cbd02f0;
  local_68 = DAT_14cbd02e8;
  FUN_1448075d0(local_58);
  if (*param_3 != 0) {
    local_a8 = 0;
    FUN_14014191c(*param_3,local_58,&local_78,0);
  }
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  if (local_88 == '\0') {
    local_88 = '\x01';
    *(int *)(local_a0 + 4) = *(int *)(local_a0 + 4) + -1;
    if (local_90 != local_a0[2]) {
      FUN_14004673c();
    }
    *local_a0 = local_98;
    local_a0[3] = local_80;
  }
  plVar3 = plStack_70;
  if (plStack_70 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_70 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_70)(plStack_70);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14123a4ce FUN_14123a4ce body=1826 status=ok
// SIG undefined FUN_14123a4ce(void)

void FUN_14123a4ce(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  uint uVar4;
  longlong lVar5;
  char *pcVar6;
  undefined4 *puVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined1 auStack_118 [32];
  undefined1 local_f8;
  longlong local_f0;
  longlong local_e8;
  longlong *plStack_e0;
  longlong local_d8;
  longlong *plStack_d0;
  longlong local_c8;
  longlong *plStack_c0;
  longlong local_b8;
  longlong *plStack_b0;
  longlong local_a8;
  longlong *plStack_a0;
  undefined8 local_98;
  undefined4 local_90;
  longlong local_88;
  longlong *plStack_80;
  longlong local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (((byte *)*param_2 != (byte *)0x0) && ((*(byte *)*param_2 & 0x6b) == 3)) {
    local_a8 = 0;
    plStack_a0 = (longlong *)0x0;
    FUN_14009b010(&local_a8,2,0);
    if ((longlong)*(int *)(param_1 + 0xf38) != 0) {
      lVar10 = *(longlong *)(param_1 + 0xf30);
      local_f0 = (longlong)*(int *)(param_1 + 0xf38) * 0x68;
      lVar8 = 0;
      do {
        local_b8 = 0;
        plStack_b0 = (longlong *)0x0;
        FUN_14009b010(&local_b8,3,0);
        local_c8 = 0;
        plStack_c0 = (longlong *)0x0;
        FUN_14009b010(&local_c8,1);
        lVar5 = *(longlong *)(lVar10 + 8 + lVar8);
        if (lVar5 != 0) {
          puVar7 = *(undefined4 **)(lVar5 + 8);
          if (puVar7 == (undefined4 *)0x0) {
            puVar7 = &DAT_14c9485f0;
          }
          if (DAT_14c947fe0 == 0) {
            lVar5 = FUN_14001cc68(0x140,0x10);
            FUN_1456b2032(lVar5);
            DAT_14c947fe0 = lVar5;
          }
          FUN_140045924(DAT_14c947fe0,&local_88,puVar7,1);
          if (local_c8 != 0) {
            FUN_1401269d0(local_c8,&local_88);
          }
        }
        local_d8 = 0;
        plStack_d0 = (longlong *)0x0;
        FUN_14009b010(&local_d8,1,0);
        lVar5 = *(longlong *)(lVar10 + 0x10 + lVar8);
        if (lVar5 != 0) {
          puVar7 = *(undefined4 **)(lVar5 + 8);
          if (puVar7 == (undefined4 *)0x0) {
            puVar7 = &DAT_14c9485f0;
          }
          if (DAT_14c947fe0 == 0) {
            lVar5 = FUN_14001cc68(0x140,0x10);
            FUN_1456b2032(lVar5);
            DAT_14c947fe0 = lVar5;
          }
          FUN_140045924(DAT_14c947fe0,&local_88,puVar7,1);
          if (local_d8 != 0) {
            FUN_1401269d0(local_d8,&local_88);
          }
        }
        local_e8 = 0;
        plStack_e0 = (longlong *)0x0;
        FUN_14009b010(&local_e8,1,0);
        if (local_e8 != 0) {
          FUN_1404a8912(local_e8,*(undefined4 *)(lVar10 + lVar8));
        }
        local_90 = DAT_14cbd0518;
        local_98 = DAT_14cbd0510;
        FUN_1448075d0(&local_88,&local_98);
        if (local_b8 != 0) {
          local_f8 = 0;
          FUN_14014191c(local_b8,&local_88,&local_c8,0);
        }
        if (local_70 != 0) {
          FUN_1400020a8();
        }
        local_90 = DAT_14cbd0530;
        local_98 = DAT_14cbd0528;
        FUN_1448075d0(&local_88,&local_98);
        if (local_b8 != 0) {
          local_f8 = 0;
          FUN_14014191c(local_b8,&local_88,&local_d8,0);
        }
        if (local_70 != 0) {
          FUN_1400020a8();
        }
        local_90 = DAT_14cbd0548;
        local_98 = DAT_14cbd0540;
        FUN_1448075d0(&local_88,&local_98);
        if (local_b8 != 0) {
          local_f8 = 0;
          FUN_14014191c(local_b8,&local_88,&local_e8,0);
        }
        if (local_70 != 0) {
          FUN_1400020a8();
        }
        if (local_a8 != 0) {
          local_f8 = 0;
          FUN_140141db6(local_a8,&local_b8);
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
        plVar3 = plStack_d0;
        if (plStack_d0 != (longlong *)0x0) {
          LOCK();
          plVar1 = plStack_d0 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*plStack_d0)(plStack_d0);
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
        plVar3 = plStack_b0;
        if (plStack_b0 != (longlong *)0x0) {
          LOCK();
          plVar1 = plStack_b0 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*plStack_b0)(plStack_b0);
            LOCK();
            piVar2 = (int *)((longlong)plVar3 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar3 + 0x10))(plVar3);
            }
          }
        }
        lVar8 = lVar8 + 0x68;
      } while (local_f0 != lVar8);
    }
    plStack_b0 = (longlong *)CONCAT44(plStack_b0._4_4_,DAT_14cbd0500);
    local_b8 = DAT_14cbd04f8;
    FUN_1448075d0(&local_88);
    if (*param_2 != 0) {
      local_f8 = 0;
      FUN_14014191c(*param_2,&local_88,&local_a8,0);
    }
    if (local_70 != 0) {
      FUN_1400020a8();
    }
    local_b8 = 0;
    plStack_b0 = (longlong *)0x0;
    FUN_14009b010(&local_b8,2,0);
    lVar10 = param_1 + 0xf48;
    if (*(longlong *)(param_1 + 0xf58) != 0) {
      lVar10 = *(longlong *)(param_1 + 0xf58);
    }
    uVar4 = *(int *)(param_1 + 0xf60) >> 5;
    if (0 < (int)uVar4) {
      uVar9 = 0;
      do {
        local_88 = 0;
        plStack_80 = (longlong *)0x0;
        FUN_14009b010(&local_88,1,0);
        if (local_88 != 0) {
          FUN_1406114f4(local_88,*(undefined4 *)(lVar10 + uVar9 * 4));
        }
        if (local_b8 != 0) {
          local_f8 = 0;
          FUN_140141db6(local_b8,&local_88,0,0);
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
        uVar9 = uVar9 + 1;
      } while (uVar4 != uVar9);
    }
    plStack_c0 = (longlong *)CONCAT44(plStack_c0._4_4_,DAT_14cbd0578);
    local_c8 = DAT_14cbd0570;
    FUN_1448075d0(&local_88);
    if (*param_2 != 0) {
      local_f8 = 0;
      FUN_14014191c(*param_2,&local_88,&local_b8,0);
    }
    if (local_70 != 0) {
      FUN_1400020a8();
    }
    local_c8 = 0;
    plStack_c0 = (longlong *)0x0;
    FUN_14009b010(&local_c8,1,0);
    if ((local_c8 != 0) && ((*(byte *)(local_c8 + 1) & 2) == 0)) {
      pcVar6 = "false";
      if (*(char *)(param_1 + 0xf28) != '\0') {
        pcVar6 = "true";
      }
      FUN_140126aca(local_c8,pcVar6);
    }
    plStack_d0 = (longlong *)CONCAT44(plStack_d0._4_4_,DAT_14cbd0560);
    local_d8 = DAT_14cbd0558;
    FUN_1448075d0(&local_88);
    if (*param_2 != 0) {
      local_f8 = 0;
      FUN_14014191c(*param_2,&local_88,&local_c8,0);
    }
    if (local_70 != 0) {
      FUN_1400020a8();
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
    plVar3 = plStack_b0;
    if (plStack_b0 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_b0 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_b0)(plStack_b0);
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
  }
  if ((local_60 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14123abf2 FUN_14123abf2 body=1968 status=ok
// SIG undefined FUN_14123abf2(void)

void FUN_14123abf2(longlong param_1,undefined8 *param_2,longlong *param_3,char param_4)

{
  int *piVar1;
  longlong *plVar2;
  byte *pbVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  int iVar12;
  longlong *plVar13;
  undefined1 auStack_188 [32];
  undefined1 local_168;
  char local_151;
  undefined8 *local_150;
  undefined8 *local_148;
  longlong *local_140;
  byte *local_138;
  longlong *plStack_130;
  undefined4 local_11c;
  byte *local_118;
  longlong *plStack_110;
  wchar_t *local_108;
  undefined4 local_100;
  byte *local_f8;
  longlong *plStack_f0;
  undefined1 local_e4 [4];
  byte **local_e0;
  byte **local_d8;
  byte *local_d0;
  longlong *local_c8;
  longlong local_b8;
  code *local_a8 [2];
  undefined8 local_98;
  undefined **local_88;
  undefined8 *local_80;
  undefined4 *local_78;
  wchar_t **local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_188;
  lVar4 = FUN_14011c349();
  local_f8 = (byte *)0x0;
  plStack_f0 = (longlong *)0x0;
  FUN_14009b010(&local_f8,3,0);
  local_150 = &DAT_14c9a1288;
  if ((local_f8 != (byte *)0x0) && ((*local_f8 & 2) != 0)) {
    local_150 = (undefined8 *)(*(longlong *)(local_f8 + 8) + 0x18);
  }
  local_108 = L"slot";
  local_100 = 4;
  local_140 = param_3;
  if ((longlong)*(int *)(lVar4 + 0x40) != 0) {
    plVar10 = *(longlong **)(lVar4 + 0x38);
    plVar13 = plVar10 + (longlong)*(int *)(lVar4 + 0x40) * 3;
    local_151 = param_4;
    local_148 = param_2;
    do {
      local_d0 = (byte *)*plVar10;
      lVar4 = FUN_140255092(param_1,&local_d0);
      if ((lVar4 != 0) && (*(char *)(lVar4 + 0x146) != param_4)) {
        local_118 = (byte *)0x0;
        plStack_110 = (longlong *)0x0;
        FUN_14009b010(&local_118,3,0);
        puVar11 = &DAT_14c9a1288;
        if ((local_118 != (byte *)0x0) && (puVar11 = &DAT_14c9a1288, (*local_118 & 2) != 0)) {
          puVar11 = (undefined8 *)(*(longlong *)(local_118 + 8) + 0x18);
        }
        if ((*(char *)(param_1 + 0x4c1) == '\x01') && (*(char *)(param_1 + 0x178) != '\x03')) {
          *(undefined1 *)(lVar4 + 0x145) = *(undefined1 *)(lVar4 + 0x144);
        }
        local_11c = 0;
        if ((*(char *)(lVar4 + 0x148) == '\0') &&
           ((*(char *)(param_1 + 0x4c1) != '\0' ||
            (*(char *)(lVar4 + 0x145) == *(char *)(lVar4 + 0x144))))) {
          local_d8 = (byte **)CONCAT44(local_d8._4_4_,DAT_14cbd02f0);
          local_e0 = DAT_14cbd02e8;
          FUN_1448075d0(&local_d0,&local_e0);
          pbVar3 = (byte *)*param_2;
          puVar11 = &DAT_14c9a1308;
          if (pbVar3 != (byte *)0x0) {
            plVar6 = &DAT_14c9a1288;
            if ((*pbVar3 & 2) != 0) {
              plVar6 = (longlong *)(*(longlong *)(pbVar3 + 8) + 0x18);
            }
            puVar11 = &DAT_14c9a1308;
            if ((int)plVar6[2] != *(int *)((longlong)plVar6 + 0x3c)) {
              plVar7 = plVar6 + 8;
              if ((longlong *)plVar6[9] != (longlong *)0x0) {
                plVar7 = (longlong *)plVar6[9];
              }
              iVar12 = *(int *)((longlong)plVar7 +
                               (ulonglong)((int)plVar6[10] - 1U & (uint)local_d0) * 4);
              puVar11 = &DAT_14c9a1308;
              if (iVar12 != -1) {
                do {
                  lVar4 = *plVar6 + (longlong)iVar12 * 0x40;
                  if (*(uint *)(*plVar6 + (longlong)iVar12 * 0x40) == (uint)local_d0) {
                    puVar11 = &DAT_14c9a1308;
                    if (lVar4 == 0) goto LAB_14123af60;
                    puVar8 = (undefined8 *)(lVar4 + 0x28);
                    puVar11 = &DAT_14c9a1308;
                    if ((puVar8 == (undefined8 *)0x0) ||
                       (((byte *)*puVar8 != (byte *)0x0 &&
                        (puVar11 = puVar8, (*(byte *)*puVar8 & 0x40) == 0)))) goto LAB_14123af60;
                    break;
                  }
                  iVar12 = *(int *)(lVar4 + 0x38);
                } while (iVar12 != -1);
                puVar11 = &DAT_14c9a1308;
              }
            }
          }
LAB_14123af60:
          pbVar3 = (byte *)*puVar11;
          plVar6 = (longlong *)puVar11[1];
          if (plVar6 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
            UNLOCK();
          }
          if (local_b8 != 0) {
            FUN_1400020a8();
          }
          if ((pbVar3 != (byte *)0x0) && ((*pbVar3 & 0x6b) == 3)) {
            local_d8 = (byte **)CONCAT44(local_d8._4_4_,DAT_14cbd0308);
            local_e0 = DAT_14cbd0300;
            FUN_1448075d0(&local_d0,&local_e0);
            plVar7 = &DAT_14c9a1288;
            if ((*pbVar3 & 2) != 0) {
              plVar7 = (longlong *)(*(longlong *)(pbVar3 + 8) + 0x18);
            }
            puVar11 = &DAT_14c9a1308;
            if ((int)plVar7[2] != *(int *)((longlong)plVar7 + 0x3c)) {
              plVar9 = plVar7 + 8;
              if ((longlong *)plVar7[9] != (longlong *)0x0) {
                plVar9 = (longlong *)plVar7[9];
              }
              iVar12 = *(int *)((longlong)plVar9 +
                               (ulonglong)((int)plVar7[10] - 1U & (uint)local_d0) * 4);
              puVar11 = &DAT_14c9a1308;
              if (iVar12 != -1) {
                do {
                  lVar4 = *plVar7 + (longlong)iVar12 * 0x40;
                  if (*(uint *)(*plVar7 + (longlong)iVar12 * 0x40) == (uint)local_d0) {
                    puVar11 = &DAT_14c9a1308;
                    if (lVar4 == 0) goto LAB_14123b059;
                    puVar8 = (undefined8 *)(lVar4 + 0x28);
                    puVar11 = &DAT_14c9a1308;
                    if ((puVar8 == (undefined8 *)0x0) ||
                       (((byte *)*puVar8 != (byte *)0x0 &&
                        (puVar11 = puVar8, (*(byte *)*puVar8 & 0x40) == 0)))) goto LAB_14123b059;
                    break;
                  }
                  iVar12 = *(int *)(lVar4 + 0x38);
                } while (iVar12 != -1);
                puVar11 = &DAT_14c9a1308;
              }
            }
LAB_14123b059:
            pbVar3 = (byte *)*puVar11;
            plVar7 = (longlong *)puVar11[1];
            if (plVar7 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
              UNLOCK();
            }
            if (local_b8 != 0) {
              FUN_1400020a8();
            }
            if ((pbVar3 != (byte *)0x0) && ((*pbVar3 & 0x6b) == 3)) {
              local_d0 = (byte *)*plVar10;
              puVar11 = (undefined8 *)FUN_1446e60f4(pbVar3,&local_d0);
              if (((byte *)*puVar11 != (byte *)0x0) && ((*(byte *)*puVar11 & 0x6b) == 3)) {
                local_e0 = (byte **)*plVar10;
                uVar5 = FUN_1446e60f4(pbVar3,&local_e0);
                local_168 = 0;
                FUN_1401412e0(uVar5,&local_d0,1,0);
                plVar9 = plStack_110;
                if (local_c8 != (longlong *)0x0) {
                  LOCK();
                  *(int *)(local_c8 + 1) = (int)local_c8[1] + 1;
                  UNLOCK();
                }
                local_118 = local_d0;
                plStack_110 = local_c8;
                if (plVar9 != (longlong *)0x0) {
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
                }
                plVar9 = local_c8;
                if (local_c8 != (longlong *)0x0) {
                  LOCK();
                  plVar2 = local_c8 + 1;
                  *(int *)plVar2 = (int)*plVar2 + -1;
                  UNLOCK();
                  if ((int)*plVar2 == 0) {
                    (**(code **)*local_c8)(local_c8);
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
            param_2 = local_148;
            if (plVar7 != (longlong *)0x0) {
              LOCK();
              plVar9 = plVar7 + 1;
              *(int *)plVar9 = (int)*plVar9 + -1;
              UNLOCK();
              if ((int)*plVar9 == 0) {
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
              UNLOCK();
              if (*piVar1 == 0) {
                lVar4 = *plVar6;
LAB_14123b1aa:
                (**(code **)(lVar4 + 0x10))(plVar6);
              }
            }
          }
        }
        else {
          local_98 = 0;
          local_88 = &PTR_LAB_14b996ce0;
          local_78 = &local_11c;
          local_70 = &local_108;
          local_a8[0] = FUN_1442032ee;
          local_80 = puVar11;
          FUN_14100973a(lVar4,local_a8);
          if (0 < *(int *)(lVar4 + 0xe0)) {
            local_138 = (byte *)0x0;
            plStack_130 = (longlong *)0x0;
            FUN_14009b010(&local_138,2,0);
            puVar8 = &DAT_14c9a1270;
            if ((local_138 != (byte *)0x0) && (puVar8 = &DAT_14c9a1270, (*local_138 & 2) != 0)) {
              puVar8 = *(undefined8 **)(local_138 + 8);
            }
            FUN_148dc105e(puVar8,lVar4 + 0xd8);
            local_d8 = (byte **)CONCAT44(local_d8._4_4_,DAT_14cbd06a8);
            local_e0 = DAT_14cbd06a0;
            FUN_1448075d0(&local_d0,&local_e0);
            local_d8 = &local_138;
            local_e0 = &local_d0;
            FUN_140744482(puVar11,local_e4,&local_e0,0);
            if (local_b8 != 0) {
              FUN_1400020a8();
            }
            plVar6 = plStack_130;
            if (plStack_130 != (longlong *)0x0) {
              LOCK();
              plVar7 = plStack_130 + 1;
              *(int *)plVar7 = (int)*plVar7 + -1;
              UNLOCK();
              if ((int)*plVar7 == 0) {
                (**(code **)*plStack_130)(plStack_130);
                LOCK();
                piVar1 = (int *)((longlong)plVar6 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  lVar4 = *plVar6;
                  goto LAB_14123b1aa;
                }
              }
            }
          }
        }
        local_e0 = (byte **)*plVar10;
        FUN_1446dcdd4(&local_d0,&local_e0);
        local_e0 = &local_d0;
        local_d8 = &local_118;
        FUN_140744482(local_150,&local_138,&local_e0,0);
        if (local_b8 != 0) {
          FUN_1400020a8();
        }
        plVar6 = plStack_110;
        param_4 = local_151;
        if (plStack_110 != (longlong *)0x0) {
          LOCK();
          plVar7 = plStack_110 + 1;
          *(int *)plVar7 = (int)*plVar7 + -1;
          UNLOCK();
          if ((int)*plVar7 == 0) {
            (**(code **)*plStack_110)(plStack_110);
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
      plVar10 = plVar10 + 3;
    } while (plVar10 != plVar13);
  }
  local_d8 = (byte **)CONCAT44(local_d8._4_4_,DAT_14cbd0308);
  local_e0 = DAT_14cbd0300;
  FUN_1448075d0(&local_d0);
  if (*local_140 != 0) {
    local_168 = 0;
    FUN_14014191c(*local_140,&local_d0,&local_f8,0);
  }
  if (local_b8 != 0) {
    FUN_1400020a8();
  }
  plVar10 = plStack_f0;
  if (plStack_f0 != (longlong *)0x0) {
    LOCK();
    plVar13 = plStack_f0 + 1;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)*plVar13 == 0) {
      (**(code **)*plStack_f0)(plStack_f0);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14123b3a4 FUN_14123b3a4 body=2521 status=ok
// SIG undefined FUN_14123b3a4(void)

void FUN_14123b3a4(undefined8 param_1,undefined8 *param_2,longlong *param_3,char param_4)

{
  longlong *plVar1;
  byte *pbVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  int *piVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined4 *puVar11;
  char *pcVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  longlong *plVar15;
  int iVar16;
  ulonglong uVar17;
  longlong lVar18;
  longlong *plVar19;
  undefined1 auStack_158 [32];
  undefined1 local_138;
  char local_129;
  int *local_128;
  undefined8 *local_120;
  longlong *local_118;
  longlong *local_110;
  undefined8 local_108;
  undefined4 local_fc;
  byte *local_f8;
  longlong *plStack_f0;
  longlong *local_e8;
  undefined8 uStack_e0;
  byte *local_d8;
  longlong *plStack_d0;
  undefined8 *local_c0;
  undefined4 local_b8;
  undefined8 *local_b0;
  undefined4 *local_a8;
  longlong local_98;
  int local_88;
  int local_84;
  longlong local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_158;
  local_d8 = (byte *)0x0;
  plStack_d0 = (longlong *)0x0;
  local_108 = param_1;
  FUN_14009b010(&local_d8,2,0);
  if (DAT_14cb758b8 != 0) {
    local_e8 = (longlong *)0x0;
    uStack_e0 = 0;
    FUN_140b1bfcc(DAT_14cb758b8,&local_e8);
    if ((longlong)(int)uStack_e0 != 0) {
      plVar1 = local_e8 + (int)uStack_e0;
      plVar19 = local_e8;
      local_120 = param_2;
      local_110 = param_3;
LAB_14123b451:
      plVar15 = (longlong *)*plVar19;
      if ((plVar15 != (longlong *)0x0) && (*(char *)((longlong)plVar15 + 0x41) == param_4)) {
        puVar11 = (undefined4 *)plVar15[1];
        if (puVar11 == (undefined4 *)0x0) {
          puVar11 = &DAT_14c9485f0;
        }
        FUN_1447a97f4(&local_88,puVar11);
        if (((local_88 != 0) && (local_84 != 0)) && (local_88 != DAT_14c948000)) {
          local_f8 = (byte *)0x0;
          plStack_f0 = (longlong *)0x0;
          FUN_14009b010(&local_f8,3,0);
          local_128 = (int *)FUN_1409e484c(local_108,plVar15);
          local_b8 = DAT_14cbd0aa8;
          local_c0 = DAT_14cbd0aa0;
          FUN_1448075d0(&local_b0,&local_c0);
          pbVar2 = (byte *)*param_2;
          plVar9 = &DAT_14c9a1288;
          puVar8 = &DAT_14c9a1308;
          if (pbVar2 != (byte *)0x0) {
            if ((*pbVar2 & 2) != 0) {
              plVar9 = (longlong *)(*(longlong *)(pbVar2 + 8) + 0x18);
            }
            puVar8 = &DAT_14c9a1308;
            if ((int)plVar9[2] != *(int *)((longlong)plVar9 + 0x3c)) {
              plVar10 = plVar9 + 8;
              if ((longlong *)plVar9[9] != (longlong *)0x0) {
                plVar10 = (longlong *)plVar9[9];
              }
              iVar16 = *(int *)((longlong)plVar10 +
                               (ulonglong)((int)plVar9[10] - 1U & (uint)local_b0) * 4);
              puVar8 = &DAT_14c9a1308;
              if (iVar16 != -1) {
                do {
                  lVar18 = *plVar9 + (longlong)iVar16 * 0x40;
                  if (*(uint *)(*plVar9 + (longlong)iVar16 * 0x40) == (uint)local_b0) {
                    puVar8 = &DAT_14c9a1308;
                    if (lVar18 == 0) goto LAB_14123b59c;
                    puVar14 = (undefined8 *)(lVar18 + 0x28);
                    puVar8 = &DAT_14c9a1308;
                    if ((puVar14 == (undefined8 *)0x0) ||
                       (((byte *)*puVar14 != (byte *)0x0 &&
                        (puVar8 = puVar14, (*(byte *)*puVar14 & 0x40) == 0)))) goto LAB_14123b59c;
                    break;
                  }
                  iVar16 = *(int *)(lVar18 + 0x38);
                } while (iVar16 != -1);
                puVar8 = &DAT_14c9a1308;
              }
            }
          }
LAB_14123b59c:
          pbVar2 = (byte *)*puVar8;
          local_118 = (longlong *)puVar8[1];
          if (local_118 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_118 + 1) = (int)local_118[1] + 1;
            UNLOCK();
          }
          if (local_98 != 0) {
            FUN_1400020a8();
          }
          iVar16 = -1;
          if (pbVar2 == (byte *)0x0) {
            uVar17 = 0;
          }
          else {
            if ((*pbVar2 & 0x6b) == 2) {
              lVar18 = (longlong)*(int *)(*(undefined8 **)(pbVar2 + 8) + 2);
              if (lVar18 != 0) {
                puVar8 = (undefined8 *)**(undefined8 **)(pbVar2 + 8);
                puVar14 = puVar8 + lVar18 * 2;
                local_129 = param_4;
                do {
                  local_b8 = DAT_14cbd0ac0;
                  local_c0 = DAT_14cbd0ab8;
                  FUN_1448075d0(&local_b0,&local_c0);
                  pbVar2 = (byte *)*puVar8;
                  plVar9 = &DAT_14c9a1308;
                  if (pbVar2 != (byte *)0x0) {
                    plVar10 = &DAT_14c9a1288;
                    if ((*pbVar2 & 2) != 0) {
                      plVar10 = (longlong *)(*(longlong *)(pbVar2 + 8) + 0x18);
                    }
                    plVar9 = &DAT_14c9a1308;
                    if ((int)plVar10[2] != *(int *)((longlong)plVar10 + 0x3c)) {
                      plVar9 = plVar10 + 8;
                      if ((longlong *)plVar10[9] != (longlong *)0x0) {
                        plVar9 = (longlong *)plVar10[9];
                      }
                      iVar5 = *(int *)((longlong)plVar9 +
                                      (ulonglong)((int)plVar10[10] - 1U & (uint)local_b0) * 4);
                      plVar9 = &DAT_14c9a1308;
                      if (iVar5 != -1) {
                        do {
                          lVar18 = *plVar10 + (longlong)iVar5 * 0x40;
                          if (*(uint *)(*plVar10 + (longlong)iVar5 * 0x40) == (uint)local_b0) {
                            plVar9 = &DAT_14c9a1308;
                            if (lVar18 == 0) goto LAB_14123b6dc;
                            plVar10 = (longlong *)(lVar18 + 0x28);
                            plVar9 = &DAT_14c9a1308;
                            if ((plVar10 == (longlong *)0x0) ||
                               (((byte *)*plVar10 != (byte *)0x0 &&
                                (plVar9 = plVar10, (*(byte *)*plVar10 & 0x40) == 0))))
                            goto LAB_14123b6dc;
                            break;
                          }
                          iVar5 = *(int *)(lVar18 + 0x38);
                        } while (iVar5 != -1);
                        plVar9 = &DAT_14c9a1308;
                      }
                    }
                  }
LAB_14123b6dc:
                  piVar6 = &DAT_14c9a12e0;
                  if (*plVar9 != 0) {
                    piVar6 = (int *)FUN_140625092();
                  }
                  iVar3 = local_88;
                  iVar5 = *piVar6;
                  if (local_98 != 0) {
                    FUN_1400020a8();
                  }
                  if (iVar5 == iVar3) {
                    local_b8 = DAT_14cbd0ad8;
                    local_c0 = DAT_14cbd0ad0;
                    FUN_1448075d0(&local_b0,&local_c0);
                    pbVar2 = (byte *)*puVar8;
                    plVar9 = &DAT_14c9a1288;
                    puVar14 = &DAT_14c9a1308;
                    if (pbVar2 == (byte *)0x0) goto LAB_14123bb45;
                    if ((*pbVar2 & 2) != 0) {
                      plVar9 = (longlong *)(*(longlong *)(pbVar2 + 8) + 0x18);
                    }
                    puVar14 = &DAT_14c9a1308;
                    if ((int)plVar9[2] == *(int *)((longlong)plVar9 + 0x3c)) goto LAB_14123bb45;
                    plVar10 = plVar9 + 8;
                    if ((longlong *)plVar9[9] != (longlong *)0x0) {
                      plVar10 = (longlong *)plVar9[9];
                    }
                    iVar16 = *(int *)((longlong)plVar10 +
                                     (ulonglong)((int)plVar9[10] - 1U & (uint)local_b0) * 4);
                    puVar14 = &DAT_14c9a1308;
                    if (iVar16 == -1) goto LAB_14123bb45;
                    goto LAB_14123baf3;
                  }
                  puVar8 = puVar8 + 2;
                } while (puVar8 != puVar14);
                uVar17 = 0;
                param_2 = local_120;
                param_4 = local_129;
                goto LAB_14123b734;
              }
            }
            uVar17 = 0;
            iVar16 = -1;
          }
          goto LAB_14123b734;
        }
        goto LAB_14123ba28;
      }
      goto LAB_14123ba35;
    }
LAB_14123bc8d:
    if (local_e8 != (longlong *)0x0) {
      FUN_1400020a8(local_e8);
    }
  }
  puVar8 = &DAT_14c9a1270;
  if ((local_d8 != (byte *)0x0) && ((*local_d8 & 2) != 0)) {
    puVar8 = *(undefined8 **)(local_d8 + 8);
  }
  if (0 < *(int *)(puVar8 + 2)) {
    local_a8 = (undefined4 *)CONCAT44(local_a8._4_4_,DAT_14cbd0aa8);
    local_b0 = DAT_14cbd0aa0;
    FUN_1448075d0(&local_88);
    if (*param_3 != 0) {
      local_138 = 0;
      FUN_14014191c(*param_3,&local_88,&local_d8,0);
    }
    if (local_70 != 0) {
      FUN_1400020a8();
    }
  }
  plVar1 = plStack_d0;
  if (plStack_d0 != (longlong *)0x0) {
    LOCK();
    plVar19 = plStack_d0 + 1;
    *(int *)plVar19 = (int)*plVar19 + -1;
    UNLOCK();
    if ((int)*plVar19 == 0) {
      (**(code **)*plStack_d0)(plStack_d0);
      LOCK();
      piVar6 = (int *)((longlong)plVar1 + 0xc);
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (*piVar6 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
  while (iVar16 = *(int *)(lVar18 + 0x38), iVar16 != -1) {
LAB_14123baf3:
    lVar18 = *plVar9 + (longlong)iVar16 * 0x40;
    if (*(uint *)(*plVar9 + (longlong)iVar16 * 0x40) == (uint)local_b0) {
      puVar14 = &DAT_14c9a1308;
      if (lVar18 == 0) goto LAB_14123bb45;
      puVar13 = (undefined8 *)(lVar18 + 0x28);
      puVar14 = &DAT_14c9a1308;
      if ((puVar13 == (undefined8 *)0x0) ||
         (((byte *)*puVar13 != (byte *)0x0 && (puVar14 = puVar13, (*(byte *)*puVar13 & 0x40) == 0)))
         ) goto LAB_14123bb45;
      break;
    }
  }
  puVar14 = &DAT_14c9a1308;
LAB_14123bb45:
  uVar7 = FUN_140dddb1a(puVar14,0);
  uVar17 = *(ulonglong *)(local_128 + 4);
  if (*(ulonglong *)(local_128 + 4) < uVar7) {
    uVar17 = uVar7;
  }
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  local_b8 = DAT_14cbd02c0;
  local_c0 = DAT_14cbd02b8;
  FUN_1448075d0(&local_b0,&local_c0);
  param_2 = local_120;
  param_4 = local_129;
  pbVar2 = (byte *)*puVar8;
  puVar8 = &DAT_14c9a1308;
  if (pbVar2 != (byte *)0x0) {
    plVar9 = &DAT_14c9a1288;
    if ((*pbVar2 & 2) != 0) {
      plVar9 = (longlong *)(*(longlong *)(pbVar2 + 8) + 0x18);
    }
    puVar8 = &DAT_14c9a1308;
    if ((int)plVar9[2] != *(int *)((longlong)plVar9 + 0x3c)) {
      plVar10 = plVar9 + 8;
      if ((longlong *)plVar9[9] != (longlong *)0x0) {
        plVar10 = (longlong *)plVar9[9];
      }
      iVar16 = *(int *)((longlong)plVar10 + (ulonglong)((int)plVar9[10] - 1U & (uint)local_b0) * 4);
      puVar8 = &DAT_14c9a1308;
      if (iVar16 != -1) {
        do {
          lVar18 = *plVar9 + (longlong)iVar16 * 0x40;
          if (*(uint *)(*plVar9 + (longlong)iVar16 * 0x40) == (uint)local_b0) {
            puVar8 = &DAT_14c9a1308;
            if (lVar18 == 0) goto LAB_14123bc47;
            puVar14 = (undefined8 *)(lVar18 + 0x28);
            puVar8 = &DAT_14c9a1308;
            if ((puVar14 == (undefined8 *)0x0) ||
               (((byte *)*puVar14 != (byte *)0x0 &&
                (puVar8 = puVar14, (*(byte *)*puVar14 & 0x40) == 0)))) goto LAB_14123bc47;
            break;
          }
          iVar16 = *(int *)(lVar18 + 0x38);
        } while (iVar16 != -1);
        puVar8 = &DAT_14c9a1308;
      }
    }
  }
LAB_14123bc47:
  iVar5 = FUN_140e1edd4(puVar8,0);
  iVar16 = local_128[1];
  if (local_128[1] < iVar5) {
    iVar16 = iVar5;
  }
  if (local_98 != 0) {
    FUN_1400020a8();
  }
LAB_14123b734:
  iVar5 = *local_128;
  if (*local_128 < local_128[1]) {
    iVar5 = local_128[1];
  }
  if (iVar5 < iVar16) {
    iVar5 = iVar16;
  }
  if (0 < iVar5) {
    uVar7 = *(ulonglong *)(local_128 + 2);
    if (*(ulonglong *)(local_128 + 2) < *(ulonglong *)(local_128 + 4)) {
      uVar7 = *(ulonglong *)(local_128 + 4);
    }
    if (uVar7 < uVar17) {
      uVar7 = uVar17;
    }
    plVar9 = &DAT_14c9a1288;
    if ((local_f8 != (byte *)0x0) && (plVar9 = &DAT_14c9a1288, (*local_f8 & 2) != 0)) {
      plVar9 = (longlong *)(*(longlong *)(local_f8 + 8) + 0x18);
    }
    local_fc = 1;
    local_b0 = &DAT_14cbd0ab8;
    local_a8 = &local_fc;
    FUN_1418efebe(plVar9,&local_c0,&local_b0);
    lVar18 = *(longlong *)(*plVar9 + 0x28 + (longlong)(int)local_c0 * 0x40);
    if (lVar18 != 0) {
      FUN_1402afb64(lVar18,&local_88);
    }
    plVar9 = &DAT_14c9a1288;
    if ((local_f8 != (byte *)0x0) && (plVar9 = &DAT_14c9a1288, (*local_f8 & 2) != 0)) {
      plVar9 = (longlong *)(*(longlong *)(local_f8 + 8) + 0x18);
    }
    local_fc = 1;
    local_b0 = &DAT_14cbd02b8;
    local_a8 = &local_fc;
    FUN_1418efebe(plVar9,&local_c0,&local_b0);
    lVar18 = *(longlong *)(*plVar9 + 0x28 + (longlong)(int)local_c0 * 0x40);
    if (lVar18 != 0) {
      FUN_1404a8912(lVar18,iVar5);
    }
    plVar9 = &DAT_14c9a1288;
    if ((local_f8 != (byte *)0x0) && (plVar9 = &DAT_14c9a1288, (*local_f8 & 2) != 0)) {
      plVar9 = (longlong *)(*(longlong *)(local_f8 + 8) + 0x18);
    }
    local_fc = 1;
    local_b0 = &DAT_14cbd0ad0;
    local_a8 = &local_fc;
    FUN_1418efebe(plVar9,&local_c0);
    lVar18 = *(longlong *)(*plVar9 + 0x28 + (longlong)(int)local_c0 * 0x40);
    if (lVar18 != 0) {
      FUN_140bc3dfa(lVar18,uVar7);
    }
    cVar4 = (**(code **)(*plVar15 + 0x30))(plVar15);
    param_2 = local_120;
    if ((cVar4 != '\0') && ((char)local_128[0x14] == (char)plVar15[0xc])) {
      plVar15 = &DAT_14c9a1288;
      if ((local_f8 != (byte *)0x0) && (plVar15 = &DAT_14c9a1288, (*local_f8 & 2) != 0)) {
        plVar15 = (longlong *)(*(longlong *)(local_f8 + 8) + 0x18);
      }
      local_fc = 1;
      local_b0 = &DAT_14cbd02d0;
      local_a8 = &local_fc;
      FUN_1418efebe(plVar15,&local_c0);
      lVar18 = *(longlong *)(*plVar15 + 0x28 + (longlong)(int)local_c0 * 0x40);
      if ((lVar18 != 0) && ((*(byte *)(lVar18 + 1) & 2) == 0)) {
        pcVar12 = "false";
        if ((char)local_128[0x14] != '\0') {
          pcVar12 = "true";
        }
        FUN_140126aca(lVar18,pcVar12);
      }
    }
    if (local_d8 != (byte *)0x0) {
      local_138 = 0;
      FUN_140141db6(local_d8,&local_f8,0,0);
    }
  }
  if (local_118 != (longlong *)0x0) {
    LOCK();
    plVar15 = local_118 + 1;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)*plVar15 == 0) {
      (**(code **)*local_118)(local_118);
      LOCK();
      piVar6 = (int *)((longlong)local_118 + 0xc);
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (*piVar6 == 0) {
        (**(code **)(*local_118 + 0x10))();
      }
    }
  }
  plVar15 = plStack_f0;
  if (plStack_f0 != (longlong *)0x0) {
    LOCK();
    plVar9 = plStack_f0 + 1;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)*plVar9 == 0) {
      (**(code **)*plStack_f0)(plStack_f0);
      LOCK();
      piVar6 = (int *)((longlong)plVar15 + 0xc);
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (*piVar6 == 0) {
        (**(code **)(*plVar15 + 0x10))(plVar15);
      }
    }
  }
LAB_14123ba28:
  if (local_70 != 0) {
    FUN_1400020a8();
  }
LAB_14123ba35:
  plVar19 = plVar19 + 1;
  param_3 = local_110;
  if (plVar19 == plVar1) goto LAB_14123bc8d;
  goto LAB_14123b451;
}



// FUNCTION 14123bd7e FUN_14123bd7e body=1 status=ok
// SIG undefined FUN_14123bd7e(void)

void FUN_14123bd7e(void)

{
  return;
}



// FUNCTION 14123bd80 FUN_14123bd80 body=134 status=ok
// SIG undefined FUN_14123bd80(void)

undefined8 * FUN_14123bd80(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  longlong lVar5;
  
  *(undefined2 *)(param_1 + 1) = *(undefined2 *)(param_2 + 1);
  *param_1 = *param_2;
  lVar5 = param_2[2];
  if (DAT_14c950c29 == 1) {
    if (lVar5 == 0) {
      lVar5 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar5 = param_2[2];
    }
  }
  bVar4 = DAT_14c950c29;
  param_1[2] = lVar5;
  lVar5 = param_2[3];
  if ((bVar4 & 1) != 0) {
    if (lVar5 == 0) {
      lVar5 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar5 = param_2[3];
    }
  }
  param_1[3] = lVar5;
  uVar1 = param_2[5];
  uVar2 = param_2[6];
  uVar3 = param_2[7];
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  param_1[6] = uVar2;
  param_1[7] = uVar3;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  return param_1;
}



// FUNCTION 14123be06 FUN_14123be06 body=39 status=ok
// SIG undefined FUN_14123be06(void)

undefined8 FUN_14123be06(undefined8 param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(*(longlong *)(param_2 + 0x198) + 0x38);
  if (iVar1 <= *(int *)(*(longlong *)(param_3 + 0x10) + 0x38)) {
    lVar2 = *(longlong *)(param_2 + 0x198) + 0x30;
    return CONCAT71((int7)((ulonglong)lVar2 >> 8),
                    *(longlong *)
                     (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
                    lVar2);
  }
  return 0;
}



// FUNCTION 14123be2e FUN_14123be2e body=69 status=ok
// SIG undefined FUN_14123be2e(void)

void FUN_14123be2e(longlong param_1,undefined4 param_2,char param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((param_3 != '\0') && (iVar1 = *(int *)(param_1 + 0x68), (longlong)iVar1 != 0)) {
    lVar2 = *(longlong *)(param_1 + 0x60);
    lVar4 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar4);
      (**(code **)(*plVar3 + 0x50))(plVar3,param_2);
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  return;
}



// FUNCTION 14123be74 FUN_14123be74 body=265 status=ok
// SIG undefined FUN_14123be74(void)

undefined * FUN_14123be74(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
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
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9c0c48) {
    FUN_144b3d300(&DAT_14c9c0c48);
    if (DAT_14c9c0c48 == -1) {
      FUN_145850956(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FScreenPassTextureViewportParameters";
      local_38 = 0;
      local_50 = 0x70;
      local_58 = 0xd1;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9c0bc8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142b908dd);
      _Init_thread_footer(&DAT_14c9c0c48);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14c9c0bc8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14123bf7e FUN_14123bf7e body=298 status=ok
// SIG undefined FUN_14123bf7e(void)

void FUN_14123bf7e(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  code *local_40;
  undefined4 local_38;
  undefined8 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((((*(int *)(param_1 + 0x74) == 0) || (uVar1 = *(uint *)(param_1 + 0x70), (int)uVar1 < 0)) ||
      (DAT_14c9647dc <= (int)uVar1)) ||
     (((plVar2 = (longlong *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
       plVar2 == (longlong *)0x0 || ((int)plVar2[2] != *(int *)(param_1 + 0x74))) ||
      ((*(uint *)(plVar2 + 1) & 0x10200000) != 0)))) goto LAB_14123c04a;
  if ((*(uint *)(plVar2 + 1) & 0x10200000) == 0) {
    lVar3 = *plVar2;
  }
  else {
    lVar3 = 0;
  }
  local_40 = FUN_140fde278;
  local_38 = 0;
  FUN_14123c0aa(&local_30,param_1);
  FUN_1403524de(lVar3 + 0x42b8,&local_40,&local_30);
  if (local_28 == 0) {
LAB_14123c037:
    if (local_30 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_30 != (undefined8 *)0x0) {
    (**(code **)*local_30)(local_30,0);
    FUN_1446efa72(&local_30,0,0,0x10);
    local_28 = 0;
    goto LAB_14123c037;
  }
  *(code **)(param_1 + 0x28) = local_40;
LAB_14123c04a:
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14123c0aa FUN_14123c0aa body=428 status=ok
// SIG undefined FUN_14123c0aa(void)

longlong * FUN_14123c0aa(longlong *param_1,longlong param_2,undefined8 *param_3)

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
LAB_14123c18a:
    *puVar5 = &PTR_LAB_14b3e9ef0;
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
    *puVar5 = &PTR_FUN_14b9a2c30;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_14123c18a;
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
    *puVar5 = &PTR_LAB_14b3e9ef0;
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
    *puVar5 = &PTR_FUN_14b9a2c30;
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



// FUNCTION 14123c256 FUN_14123c256 body=86 status=ok
// SIG undefined FUN_14123c256(void)

longlong * FUN_14123c256(longlong *param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (*param_1 != lVar2) {
    param_1[2] = 0;
  }
  *param_1 = lVar2;
  if (param_1[1] != param_2[1]) {
    param_1[2] = 0;
  }
  uVar1 = FUN_14477b664();
  lVar2 = FUN_14477b664(uVar1);
  param_1[1] = lVar2;
  param_1[2] = param_2[2];
  return param_1;
}



// FUNCTION 14123c2ac FUN_14123c2ac body=221 status=ok
// SIG undefined FUN_14123c2ac(void)

longlong FUN_14123c2ac(void)

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
  if (DAT_14c99e7d0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1470441e1;
    local_40 = FUN_146296ee0;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x30;
    FUN_14081cfa3(L"/Script/AudioExtensions",L"SoundModulatorBase",&DAT_14c99e7d0,&DAT_1470441e0);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c99e7d0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14123c38a FUN_14123c38a body=221 status=ok
// SIG undefined FUN_14123c38a(void)

longlong FUN_14123c38a(void)

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
  if (DAT_14caa7eb0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147479777;
    local_40 = FUN_14632779d;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000009;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/GameplayTags",L"EditableGameplayTagQueryExpression",&DAT_14caa7eb0,
                  &DAT_147479776);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14caa7eb0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14123c468 FUN_14123c468 body=221 status=ok
// SIG undefined FUN_14123c468(void)

longlong FUN_14123c468(void)

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
  if (DAT_14caf2130 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1414bb1f4;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147bd47e3;
    local_40 = &LAB_1463ec6d9;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x1000000d;
    local_60 = 8;
    local_68 = 0x8f0;
    FUN_14081cfa3(L"/Script/Engine",L"NetDriver",&DAT_14caf2130,&DAT_147bd47e2);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14caf2130;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14123c546 FUN_14123c546 body=221 status=ok
// SIG undefined FUN_14123c546(void)

longlong FUN_14123c546(void)

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
  if (DAT_14cb088e0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147d34d4d;
    local_40 = &LAB_145d0944f;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x90;
    FUN_14081cfa3(L"/Script/Engine",L"SoundMix",&DAT_14cb088e0,&DAT_147d34d4c);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb088e0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14123c624 FUN_14123c624 body=221 status=ok
// SIG undefined FUN_14123c624(void)

longlong FUN_14123c624(void)

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
  if (DAT_14cb67ca8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_14873f9ff;
    local_40 = FUN_146518fa2;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x38;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxTrickAnimNotify",&DAT_14cb67ca8,&DAT_14873f9fe);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb67ca8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14123c702 FUN_14123c702 body=221 status=ok
// SIG undefined FUN_14123c702(void)

longlong FUN_14123c702(void)

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
  if (DAT_14cb9b198 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_148b13b88;
    local_40 = FUN_14659756b;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x68;
    FUN_14081cfa3(L"/Script/ModelViewViewModel",L"MVVMViewModelBase",&DAT_14cb9b198,FUN_146597544);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb9b198;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14123c7e0 FUN_14123c7e0 body=3506 status=ok
// SIG undefined FUN_14123c7e0(void)

void FUN_14123c7e0(longlong param_1,longlong param_2,undefined1 param_3)

{
  longlong *plVar1;
  int *piVar2;
  float fVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  byte bVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  float *pfVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong lVar14;
  undefined8 ****ppppuVar15;
  bool bVar16;
  float fVar17;
  undefined1 auStack_118 [39];
  undefined1 local_f1;
  char local_f0 [8];
  longlong local_e8;
  longlong *local_e0;
  undefined8 local_d8;
  undefined1 local_d0;
  int local_c8 [2];
  undefined8 ***local_c0 [3];
  ushort local_a8;
  byte local_a0;
  float local_98;
  undefined4 uStack_94;
  longlong *local_90;
  ushort local_80;
  byte local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_118;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xd8) = 0;
  lVar14 = *(longlong *)(param_1 + 0x40);
  lVar4 = *(longlong *)(param_1 + 0x48);
  if (*(longlong *)(lVar4 + 0x20) != 0) {
    iVar8 = *(int *)(*(longlong *)(lVar4 + 0x20) + 0x18);
    if ((((-1 < (longlong)iVar8) && (iVar8 < *(int *)(lVar14 + 0x78))) &&
        (lVar13 = *(longlong *)(*(longlong *)(lVar14 + 0x70) + (longlong)iVar8 * 8), lVar13 != 0))
       && (*(char *)(lVar13 + 0xcd) != '\0')) goto LAB_14123ca52;
  }
  switch(param_3) {
  case 1:
    if (*(char *)(lVar4 + 0x1f8) != '\x01') break;
    fVar3 = *(float *)(param_2 + 8);
    if (lVar14 == 0) {
      lVar13 = 0;
      local_e8 = 0;
LAB_14123d1d5:
      local_e0 = (longlong *)0x0;
      bVar6 = true;
    }
    else {
      if (*(int *)(lVar14 + 0x4c) == 0) {
LAB_14123d005:
        lVar13 = 0;
      }
      else {
        uVar9 = *(uint *)(lVar14 + 0x48);
        lVar13 = 0;
        if ((-1 < (int)uVar9) && ((int)uVar9 < DAT_14c9647dc)) {
          plVar12 = (longlong *)
                    ((ulonglong)((uVar9 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8));
          if ((plVar12 == (longlong *)0x0) ||
             (((int)plVar12[2] != *(int *)(lVar14 + 0x4c) ||
              ((*(uint *)(plVar12 + 1) & 0x10200000) != 0)))) goto LAB_14123d005;
          lVar13 = *plVar12;
        }
      }
      plVar12 = *(longlong **)(lVar14 + 0x118);
      local_e8 = param_1;
      if (plVar12 == (longlong *)0x0) goto LAB_14123d1d5;
      LOCK();
      *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)((longlong)plVar12 + 0xc) = *(int *)((longlong)plVar12 + 0xc) + 1;
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
      LOCK();
      *(int *)((longlong)plVar12 + 0xc) = *(int *)((longlong)plVar12 + 0xc) + 1;
      UNLOCK();
      bVar6 = false;
      local_e0 = plVar12;
    }
    plVar12 = local_e0;
    local_c8[0] = 0;
    local_f0[0] = '\x03';
    local_d8._0_4_ = 0;
    if (lVar13 == 0) {
      iVar8 = 0;
      uVar9 = (uint)local_d8;
    }
    else {
      uVar9 = *(uint *)(lVar13 + 0xc);
      local_d8 = (ulonglong)uVar9;
      if ((int)uVar9 < DAT_14c9647dc) {
        lVar14 = (ulonglong)((uVar9 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8);
      }
      else {
        lVar14 = 0;
      }
      iVar8 = *(int *)(lVar14 + 0x10);
      if (*(int *)(lVar14 + 0x10) == 0) {
        LOCK();
        iVar8 = DAT_14c964868 + 1;
        UNLOCK();
        iVar10 = DAT_14c964868 + 1;
        bVar16 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar8;
        if (bVar16) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar10);
        }
        LOCK();
        iVar8 = *(int *)(lVar14 + 0x10);
        bVar16 = iVar8 == 0;
        if (bVar16) {
          *(int *)(lVar14 + 0x10) = iVar10;
          iVar8 = 0;
        }
        UNLOCK();
        uVar9 = (uint)local_d8;
        if (bVar16) {
          iVar8 = iVar10;
        }
      }
    }
    local_d8._0_4_ = uVar9;
    local_d8 = CONCAT44(iVar8,(uint)local_d8);
    local_d0 = 2;
    if (local_c8[0] != 0) {
      FUN_1417398fc(&DAT_14c9a3da0,local_c8[0] + -1,1);
      local_c8[0] = 0;
    }
    if (!bVar6) {
      LOCK();
      piVar2 = (int *)((longlong)plVar12 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
      }
    }
    FUN_1447c3578(lVar4 + 0x1c0,local_c0,local_f0);
    if (local_a0 == 3) {
      fVar17 = local_c0[0]._0_4_;
      bVar7 = 3;
    }
    else {
      pfVar11 = &local_98;
      FUN_1400b56fe(pfVar11,local_c0,3);
      fVar17 = 0.0;
      if (local_78 != 0) {
        fVar17 = local_98;
      }
      pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_78 * 0x120));
      if (pcVar5 != (code *)0x0) {
        if (0x18 < local_80) {
          pfVar11 = (float *)CONCAT44(uStack_94,local_98);
        }
        (*pcVar5)(pfVar11);
      }
      bVar7 = local_a0;
      if (0x18 < local_80) {
        FUN_1400020a8(CONCAT44(uStack_94,local_98));
        bVar7 = local_a0;
      }
    }
    *(float *)(param_1 + 0xe0) = fVar3 + fVar17;
    pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar7 * 0x120));
    if (pcVar5 != (code *)0x0) {
      ppppuVar15 = local_c0;
      if (0x18 < local_a8) {
        ppppuVar15 = (undefined8 ****)local_c0[0];
      }
      (*pcVar5)(ppppuVar15);
    }
    if (0x18 < local_a8) {
      FUN_1400020a8(local_c0[0]);
    }
    FUN_1448173f8(local_c8);
    if ((local_f0[0] == '\x03') && (local_e0 != (longlong *)0x0)) {
      LOCK();
      piVar2 = (int *)((longlong)local_e0 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_e0 + 0x10))();
      }
    }
    plVar12 = &DAT_14cb23e98;
LAB_14123ca38:
    lVar14 = *plVar12;
    *(longlong *)(param_1 + 0xd8) = lVar14;
    goto LAB_14123ca42;
  case 2:
    if (*(char *)(lVar4 + 0x238) == '\x01') {
      fVar3 = *(float *)(param_2 + 8);
      if (lVar14 == 0) {
        lVar13 = 0;
        local_e8 = 0;
LAB_14123d289:
        local_e0 = (longlong *)0x0;
        bVar6 = true;
      }
      else {
        if (*(int *)(lVar14 + 0x4c) == 0) {
LAB_14123d1fd:
          lVar13 = 0;
        }
        else {
          uVar9 = *(uint *)(lVar14 + 0x48);
          lVar13 = 0;
          if ((-1 < (int)uVar9) && ((int)uVar9 < DAT_14c9647dc)) {
            plVar12 = (longlong *)
                      ((ulonglong)((uVar9 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8));
            if ((plVar12 == (longlong *)0x0) ||
               (((int)plVar12[2] != *(int *)(lVar14 + 0x4c) ||
                ((*(uint *)(plVar12 + 1) & 0x10200000) != 0)))) goto LAB_14123d1fd;
            lVar13 = *plVar12;
          }
        }
        plVar12 = *(longlong **)(lVar14 + 0x118);
        local_e8 = param_1;
        if (plVar12 == (longlong *)0x0) goto LAB_14123d289;
        LOCK();
        *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)((longlong)plVar12 + 0xc) = *(int *)((longlong)plVar12 + 0xc) + 1;
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
        LOCK();
        *(int *)((longlong)plVar12 + 0xc) = *(int *)((longlong)plVar12 + 0xc) + 1;
        UNLOCK();
        bVar6 = false;
        local_e0 = plVar12;
      }
      plVar12 = local_e0;
      local_c8[0] = 0;
      local_f0[0] = '\x03';
      local_d8._0_4_ = 0;
      if (lVar13 == 0) {
        iVar8 = 0;
        uVar9 = (uint)local_d8;
      }
      else {
        uVar9 = *(uint *)(lVar13 + 0xc);
        local_d8 = (ulonglong)uVar9;
        if ((int)uVar9 < DAT_14c9647dc) {
          lVar14 = (ulonglong)((uVar9 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8);
        }
        else {
          lVar14 = 0;
        }
        iVar8 = *(int *)(lVar14 + 0x10);
        if (*(int *)(lVar14 + 0x10) == 0) {
          LOCK();
          iVar8 = DAT_14c964868 + 1;
          UNLOCK();
          iVar10 = DAT_14c964868 + 1;
          bVar16 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar8;
          if (bVar16) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar10);
          }
          LOCK();
          iVar8 = *(int *)(lVar14 + 0x10);
          bVar16 = iVar8 == 0;
          if (bVar16) {
            *(int *)(lVar14 + 0x10) = iVar10;
            iVar8 = 0;
          }
          UNLOCK();
          uVar9 = (uint)local_d8;
          if (bVar16) {
            iVar8 = iVar10;
          }
        }
      }
      local_d8._0_4_ = uVar9;
      local_d8 = CONCAT44(iVar8,(uint)local_d8);
      local_d0 = 2;
      if (local_c8[0] != 0) {
        FUN_1417398fc(&DAT_14c9a3da0,local_c8[0] + -1,1);
        local_c8[0] = 0;
      }
      if (!bVar6) {
        LOCK();
        piVar2 = (int *)((longlong)plVar12 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
        }
      }
      FUN_1447c3578(lVar4 + 0x200,local_c0,local_f0);
      if (local_a0 == 3) {
        fVar17 = local_c0[0]._0_4_;
        bVar7 = 3;
      }
      else {
        pfVar11 = &local_98;
        FUN_1400b56fe(pfVar11,local_c0,3);
        fVar17 = 0.0;
        if (local_78 != 0) {
          fVar17 = local_98;
        }
        pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_78 * 0x120));
        if (pcVar5 != (code *)0x0) {
          if (0x18 < local_80) {
            pfVar11 = (float *)CONCAT44(uStack_94,local_98);
          }
          (*pcVar5)(pfVar11);
        }
        bVar7 = local_a0;
        if (0x18 < local_80) {
          FUN_1400020a8(CONCAT44(uStack_94,local_98));
          bVar7 = local_a0;
        }
      }
      *(float *)(param_1 + 0xe0) = fVar3 + fVar17;
      pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar7 * 0x120));
      if (pcVar5 != (code *)0x0) {
        ppppuVar15 = local_c0;
        if (0x18 < local_a8) {
          ppppuVar15 = (undefined8 ****)local_c0[0];
        }
        (*pcVar5)(ppppuVar15);
      }
      if (0x18 < local_a8) {
        FUN_1400020a8(local_c0[0]);
      }
      FUN_1448173f8(local_c8);
      if ((local_f0[0] == '\x03') && (local_e0 != (longlong *)0x0)) {
        LOCK();
        piVar2 = (int *)((longlong)local_e0 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_e0 + 0x10))();
        }
      }
      plVar12 = &DAT_14cb23ea0;
      goto LAB_14123ca38;
    }
    break;
  case 3:
    if (*(char *)(lVar4 + 0x278) == '\x01') {
      fVar3 = *(float *)(param_2 + 8);
      local_f1 = 2;
      local_c0[0] = (undefined8 ***)FUN_144a7be76(param_1);
      FUN_144a7bec8(param_1,&local_98);
      local_f0[0] = '\0';
      local_c8[0] = 0;
      FUN_144a7bf34(local_f0,&local_98,local_c0,&local_f1);
      if (local_90 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)local_90 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_90 + 0x10))();
        }
      }
      pfVar11 = &local_98;
      FUN_1447c3578(lVar4 + 0x240,pfVar11,local_f0);
      fVar17 = (float)FUN_144a7ecd0(pfVar11);
      *(float *)(param_1 + 0xe0) = fVar3 + fVar17;
      pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_78 * 0x120));
      if (pcVar5 != (code *)0x0) {
        if (0x18 < local_80) {
          pfVar11 = (float *)CONCAT44(uStack_94,local_98);
        }
        (*pcVar5)(pfVar11);
      }
      if (0x18 < local_80) {
        FUN_1400020a8(CONCAT44(uStack_94,local_98));
      }
      FUN_144a5ac3a(local_f0);
      plVar12 = &DAT_14cb23ea8;
      goto LAB_14123ca38;
    }
    break;
  case 4:
    if (*(char *)(lVar4 + 0x2b8) == '\x01') {
      fVar3 = *(float *)(param_2 + 8);
      local_f1 = 2;
      local_c0[0] = (undefined8 ***)FUN_144a7be76(param_1);
      FUN_144a7bec8(param_1,&local_98);
      local_f0[0] = '\0';
      local_c8[0] = 0;
      FUN_144a7bf34(local_f0,&local_98,local_c0,&local_f1);
      if (local_90 != (longlong *)0x0) {
        LOCK();
        piVar2 = (int *)((longlong)local_90 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_90 + 0x10))();
        }
      }
      pfVar11 = &local_98;
      FUN_1447c3578(lVar4 + 0x280,pfVar11,local_f0);
      fVar17 = (float)FUN_144a7ecd0(pfVar11);
      *(float *)(param_1 + 0xe0) = fVar3 + fVar17;
      pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_78 * 0x120));
      if (pcVar5 != (code *)0x0) {
        if (0x18 < local_80) {
          pfVar11 = (float *)CONCAT44(uStack_94,local_98);
        }
        (*pcVar5)(pfVar11);
      }
      if (0x18 < local_80) {
        FUN_1400020a8(CONCAT44(uStack_94,local_98));
      }
      FUN_144a5ac3a(local_f0);
      plVar12 = &DAT_14cb23eb0;
      goto LAB_14123ca38;
    }
  }
  lVar14 = 0;
LAB_14123ca42:
  if ((lVar14 == 0 & *(byte *)(lVar4 + 0x1b8)) != 1) goto LAB_14123ca52;
  fVar3 = *(float *)(param_2 + 8);
  lVar14 = *(longlong *)(param_1 + 0x40);
  if (lVar14 == 0) {
    lVar13 = 0;
    lVar14 = 0;
LAB_14123d234:
    local_e0 = (longlong *)0x0;
    bVar6 = true;
    local_e8 = lVar14;
  }
  else {
    if (*(int *)(lVar14 + 0x4c) == 0) {
LAB_14123d17b:
      lVar13 = 0;
    }
    else {
      uVar9 = *(uint *)(lVar14 + 0x48);
      lVar13 = 0;
      if ((-1 < (int)uVar9) && ((int)uVar9 < DAT_14c9647dc)) {
        plVar12 = (longlong *)
                  ((ulonglong)((uVar9 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8));
        if ((plVar12 == (longlong *)0x0) ||
           (((int)plVar12[2] != *(int *)(lVar14 + 0x4c) ||
            ((*(uint *)(plVar12 + 1) & 0x10200000) != 0)))) goto LAB_14123d17b;
        lVar13 = *plVar12;
      }
    }
    plVar12 = *(longlong **)(lVar14 + 0x118);
    lVar14 = param_1;
    if (plVar12 == (longlong *)0x0) goto LAB_14123d234;
    LOCK();
    *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)((longlong)plVar12 + 0xc) = *(int *)((longlong)plVar12 + 0xc) + 1;
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
    LOCK();
    *(int *)((longlong)plVar12 + 0xc) = *(int *)((longlong)plVar12 + 0xc) + 1;
    UNLOCK();
    bVar6 = false;
    local_e8 = param_1;
    local_e0 = plVar12;
  }
  plVar12 = local_e0;
  local_c8[0] = 0;
  local_f0[0] = '\x03';
  local_d8._0_4_ = 0;
  if (lVar13 == 0) {
    iVar8 = 0;
    uVar9 = (uint)local_d8;
  }
  else {
    uVar9 = *(uint *)(lVar13 + 0xc);
    local_d8 = (ulonglong)uVar9;
    if ((int)uVar9 < DAT_14c9647dc) {
      lVar14 = (ulonglong)((uVar9 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8);
    }
    else {
      lVar14 = 0;
    }
    iVar8 = *(int *)(lVar14 + 0x10);
    if (*(int *)(lVar14 + 0x10) == 0) {
      LOCK();
      iVar8 = DAT_14c964868 + 1;
      UNLOCK();
      iVar10 = DAT_14c964868 + 1;
      bVar16 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar8;
      if (bVar16) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar10);
      }
      LOCK();
      iVar8 = *(int *)(lVar14 + 0x10);
      bVar16 = iVar8 == 0;
      if (bVar16) {
        *(int *)(lVar14 + 0x10) = iVar10;
        iVar8 = 0;
      }
      UNLOCK();
      uVar9 = (uint)local_d8;
      if (bVar16) {
        iVar8 = iVar10;
      }
    }
  }
  local_d8._0_4_ = uVar9;
  local_d8 = CONCAT44(iVar8,(uint)local_d8);
  local_d0 = 2;
  if (local_c8[0] != 0) {
    FUN_1417398fc(&DAT_14c9a3da0,local_c8[0] + -1,1);
    local_c8[0] = 0;
  }
  if (!bVar6) {
    LOCK();
    piVar2 = (int *)((longlong)plVar12 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar12 + 0x10))(plVar12);
    }
  }
  FUN_1447c3578(lVar4 + 0x180,local_c0,local_f0);
  if (local_a0 == 3) {
    uVar9 = 3;
    fVar17 = local_c0[0]._0_4_;
  }
  else {
    pfVar11 = &local_98;
    FUN_1400b56fe(pfVar11,local_c0,3);
    fVar17 = 0.0;
    if (local_78 != 0) {
      fVar17 = local_98;
    }
    pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_78 * 0x120));
    if (pcVar5 != (code *)0x0) {
      if (0x18 < local_80) {
        pfVar11 = (float *)CONCAT44(uStack_94,local_98);
      }
      (*pcVar5)(pfVar11);
    }
    if (0x18 < local_80) {
      FUN_1400020a8(CONCAT44(uStack_94,local_98));
    }
    uVar9 = (uint)local_a0;
  }
  *(float *)(param_1 + 0xe0) = fVar3 + fVar17;
  pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar9 * 0x120));
  if (pcVar5 != (code *)0x0) {
    ppppuVar15 = local_c0;
    if (0x18 < local_a8) {
      ppppuVar15 = (undefined8 ****)local_c0[0];
    }
    (*pcVar5)(ppppuVar15);
  }
  if (0x18 < local_a8) {
    FUN_1400020a8(local_c0[0]);
  }
  FUN_1448173f8(local_c8);
  if ((local_f0[0] == '\x03') && (local_e0 != (longlong *)0x0)) {
    LOCK();
    piVar2 = (int *)((longlong)local_e0 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*local_e0 + 0x10))();
    }
  }
  *(undefined8 *)(param_1 + 0xd8) = DAT_14cb23e90;
LAB_14123ca52:
  if ((local_70 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14123d594 FUN_14123d594 body=438 status=ok
// SIG undefined FUN_14123d594(void)

longlong * FUN_14123d594(longlong *param_1,undefined4 param_2,ulonglong param_3,uint param_4)

{
  code *pcVar1;
  longlong lVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined8 *puVar12;
  longlong lVar13;
  bool bVar14;
  undefined1 auStack_a8 [32];
  uint local_88;
  undefined1 local_79;
  undefined4 local_78;
  uint local_74;
  undefined8 *local_70;
  ulonglong local_68;
  ulonglong uStack_60;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0xffffffff;
  local_68 = 0;
  uStack_60 = 0;
  if ((longlong)DAT_14cad1070 == 0) {
    *(undefined4 *)(param_1 + 2) = 0;
  }
  else {
    uVar10 = param_3 & 0xffffffff;
    local_70 = DAT_14cad1068 + (longlong)DAT_14cad1070 * 10;
    local_79 = (undefined1)param_3;
    puVar12 = DAT_14cad1068;
    local_78 = param_2;
    local_74 = param_4;
    do {
      uVar6 = local_74;
      uVar3 = local_78;
      bVar14 = (longlong)uStack_60 < 0;
      uStack_60 = uStack_60 & 0xffffffff00000000;
      if (bVar14) {
        FUN_14079e7a6(&local_68,0);
      }
      uVar5 = FUN_14482ca40();
      local_88 = uVar5 | uVar6 | 0x90000000;
      FUN_14123d74c(*puVar12,&local_68,uVar10 & 0xffffffff,uVar3);
      iVar9 = (int)param_1[1] + (int)uStack_60;
      if (iVar9 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(iVar9);
      }
      if (*(int *)((longlong)param_1 + 0xc) < iVar9) {
        FUN_14123d7a4(param_1);
      }
      uVar4 = local_68;
      if ((int)uStack_60 != 0) {
        lVar11 = (longlong)(int)uStack_60;
        lVar13 = 0;
        do {
          local_50 = *(undefined8 *)(uVar4 + lVar13);
          pcVar1 = (code *)puVar12[2];
          plVar8 = (longlong *)puVar12[4];
          if ((longlong *)puVar12[4] == (longlong *)0x0) {
            plVar8 = puVar12 + 6;
          }
          uVar7 = (**(code **)(*plVar8 + 8))();
          uVar7 = (*pcVar1)(uVar7);
          lVar2 = param_1[1];
          uVar6 = (int)lVar2 + 1;
          *(uint *)(param_1 + 1) = uVar6;
          if (*(uint *)((longlong)param_1 + 0xc) < uVar6) {
            FUN_1463eeb20(param_1);
          }
          *(undefined8 *)(*param_1 + (longlong)(int)lVar2 * 8) = uVar7;
          lVar13 = lVar13 + 8;
          uVar10 = uVar4;
        } while (lVar11 * 8 != lVar13);
      }
      puVar12 = puVar12 + 10;
      uVar10 = CONCAT71((int7)(uVar10 >> 8),local_79);
    } while (puVar12 != local_70);
    *(undefined4 *)(param_1 + 2) = 0;
    if (local_68 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14123d74c FUN_14123d74c body=86 status=ok
// SIG undefined FUN_14123d74c(void)

void FUN_14123d74c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined8 local_20;
  code *local_18;
  undefined8 *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_10 = &local_20;
  local_18 = FUN_142840874;
  local_28 = param_5;
  local_20 = param_2;
  FUN_140245161();
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14123d7a4 FUN_14123d7a4 body=315 status=ok
// SIG undefined FUN_14123d7a4(void)

void FUN_14123d7a4(longlong param_1,int param_2)

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
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_14123d80e;
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
LAB_14123d80e:
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



// FUNCTION 14123d8e0 FUN_14123d8e0 body=295 status=ok
// SIG undefined FUN_14123d8e0(void)

longlong * FUN_14123d8e0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_58 [40];
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar4 = *(longlong *)(param_1 + 8);
  if (lVar4 != 0) {
    local_28 = (longlong *)FUN_14001cc68(0xa0,0x10);
    local_28[1] = (longlong)&DAT_100000001;
    *local_28 = (longlong)&PTR_FUN_14b99e740;
    local_30 = local_28 + 2;
    uVar3 = *(undefined1 *)(param_1 + 0x10);
    local_28[3] = 0;
    local_28[4] = 0;
    *(undefined1 *)(local_28 + 5) = 0;
    *(undefined8 *)((longlong)local_28 + 0x69) = 0;
    *(undefined8 *)((longlong)local_28 + 0x71) = 0;
    local_28[0xc] = 0;
    local_28[0xd] = 0;
    local_28[10] = 0;
    local_28[0xb] = 0;
    local_28[8] = 0;
    local_28[9] = 0;
    local_28[6] = 0;
    local_28[7] = 0;
    local_28[2] = (longlong)&PTR_FUN_14b99e760;
    local_28[0x10] = lVar4;
    *(undefined1 *)(local_28 + 0x11) = uVar3;
    *(undefined8 *)((longlong)local_28 + 0x8c) = 0;
    *(undefined8 *)((longlong)local_28 + 0x94) = 0;
    *(undefined4 *)((longlong)local_28 + 0x9c) = 0;
    FUN_14123da08(&local_30);
    plVar5 = local_28;
    *param_2 = (longlong)local_30;
    param_2[1] = (longlong)local_28;
    if (local_28 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_28 + 1) = (int)local_28[1] + 1;
      UNLOCK();
      if (local_28 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_28 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_28)(local_28);
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
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
  }
  *param_2 = 0;
  param_2[1] = 0;
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14123da08 FUN_14123da08 body=162 status=ok
// SIG undefined FUN_14123da08(void)

void FUN_14123da08(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == 0) {
    return;
  }
  if (((*(longlong *)(param_2 + 0x20) != 0) && (*(longlong *)(param_2 + 0x28) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_2 + 0x28) + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *(longlong *)(param_2 + 0x20) = param_2;
    plVar3 = *(longlong **)(param_2 + 0x28);
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *(longlong *)(param_2 + 0x20) = param_2;
    if (*(longlong **)(param_2 + 0x28) == plVar2) goto LAB_14123da47;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x28);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x28) = plVar2;
      goto LAB_14123da47;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  *(longlong **)(param_2 + 0x28) = plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_14123da47:
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
                    /* WARNING: Could not recover jumptable at 0x00014123daa6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 14123daaa FUN_14123daaa body=302 status=ok
// SIG undefined FUN_14123daaa(void)

void FUN_14123daaa(float *param_1,ulonglong *param_2)

{
  float *pfVar1;
  ulonglong uVar2;
  uint uVar3;
  float fVar4;
  float *pfVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  
  if (param_1[100] == param_1[0x6d]) {
    return;
  }
  uVar2 = *param_2;
  uVar3 = ((uint)(uVar2 >> 0x14) & 0xffff ^ (uint)(uVar2 >> 4)) * -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  pfVar5 = param_1 + 0x6e;
  if (*(float **)(param_1 + 0x76) != (float *)0x0) {
    pfVar5 = *(float **)(param_1 + 0x76);
  }
  fVar4 = pfVar5[(int)param_1[0x78] - 1U & (uVar3 >> 0x10 ^ uVar3)];
  if (fVar4 == -NAN) {
    return;
  }
  fVar7 = fVar4;
  pfVar6 = *(float **)(param_1 + 0x62);
  if (*(float **)(param_1 + 0x62) == (float *)0x0) {
    pfVar6 = param_1 + 2;
  }
  while (pfVar1 = pfVar6 + (longlong)(int)fVar7 * 6, *(ulonglong *)pfVar1 != uVar2) {
    fVar7 = pfVar1[4];
    if (pfVar1[4] == -NAN) {
      return;
    }
  }
  if (pfVar1 == (float *)0x0) {
    return;
  }
  if (pfVar1 == (float *)&DAT_fffffffffffffff8) {
    return;
  }
  do {
    if (*(ulonglong *)(pfVar6 + (longlong)(int)fVar4 * 6) == uVar2) goto LAB_14123db7b;
    fVar4 = pfVar6[(longlong)(int)fVar4 * 6 + 4];
  } while (fVar4 != -NAN);
  fVar4 = -NAN;
LAB_14123db7b:
  fVar7 = pfVar6[(longlong)(int)fVar4 * 6 + 2];
  fVar8 = pfVar5[(int)pfVar6[(longlong)(int)fVar4 * 6 + 5]];
  if (fVar8 == fVar4) {
    pfVar5 = pfVar5 + (int)pfVar6[(longlong)(int)fVar4 * 6 + 5];
  }
  else {
    do {
      pfVar5 = pfVar6 + (longlong)(int)fVar8 * 6 + 4;
      fVar8 = *pfVar5;
    } while (fVar8 != fVar4);
  }
  *pfVar5 = pfVar6[(longlong)(int)fVar4 * 6 + 4];
  FUN_14123dbd8();
  *param_1 = *param_1 - fVar7;
  return;
}



// FUNCTION 14123dbd8 FUN_14123dbd8 body=146 status=ok
// SIG undefined FUN_14123dbd8(void)

void FUN_14123dbd8(longlong param_1,int param_2)

{
  undefined4 *puVar1;
  uint *puVar2;
  byte bVar3;
  int iVar4;
  longlong lVar5;
  undefined4 uVar6;
  
  lVar5 = *(longlong *)(param_1 + 0x180);
  if (*(longlong *)(param_1 + 0x180) == 0) {
    lVar5 = param_1;
  }
  if (*(int *)(param_1 + 0x1ac) != 0) {
    *(int *)(lVar5 + (longlong)*(int *)(param_1 + 0x1a8) * 0x18) = param_2;
  }
  puVar1 = (undefined4 *)(lVar5 + (longlong)param_2 * 0x18);
  *puVar1 = 0xffffffff;
  uVar6 = 0xffffffff;
  if (0 < *(int *)(param_1 + 0x1ac)) {
    uVar6 = *(undefined4 *)(param_1 + 0x1a8);
  }
  puVar1[1] = uVar6;
  *(int *)(param_1 + 0x1a8) = param_2;
  *(int *)(param_1 + 0x1ac) = *(int *)(param_1 + 0x1ac) + 1;
  lVar5 = param_1 + 400;
  if (*(longlong *)(param_1 + 0x198) != 0) {
    lVar5 = *(longlong *)(param_1 + 0x198);
  }
  iVar4 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar4 = param_2;
  }
  bVar3 = (byte)param_2 & 0x1f;
  puVar2 = (uint *)(lVar5 + (longlong)(iVar4 >> 5) * 4);
  *puVar2 = *puVar2 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 14123dc72 FUN_14123dc72 body=1390 status=ok
// SIG undefined FUN_14123dc72(void)

undefined8 * FUN_14123dc72(undefined8 *param_1)

{
  char cVar1;
  
  FUN_140c2310e();
  *param_1 = &PTR_FUN_14b0d3210;
  *(undefined1 *)(param_1 + 0x33) = 0;
  FUN_140440628(param_1 + 0x34,&DAT_14cb7e528,0);
  *(undefined2 *)(param_1 + 0x3b) = 0x100;
  *(undefined4 *)((longlong)param_1 + 0x1dc) = 0x41200000;
  param_1[0x41] = 0;
  *(undefined4 *)(param_1 + 0x42) = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  *(undefined8 *)((longlong)param_1 + 0x214) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x21c) = 0;
  param_1[0x45] = 0;
  *(undefined4 *)(param_1 + 0x46) = 0;
  param_1[0x4b] = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  *(undefined8 *)((longlong)param_1 + 0x264) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x26c) = 0;
  param_1[0x4f] = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0xffffffff00000000;
  param_1[0x57] = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x2cc) = 0;
  param_1[0x5b] = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined1 *)(param_1 + 0x5d) = 0;
  *(undefined4 *)(param_1 + 0x62) = 0;
  param_1[0x67] = 0;
  param_1[0x68] = 0x200000000;
  param_1[0x6a] = 0;
  *(undefined4 *)(param_1 + 0x6b) = 0;
  *(undefined4 *)((longlong)param_1 + 0x35c) = 0x20;
  *(undefined4 *)(param_1 + 0x6c) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x364) = 0;
  param_1[0x6e] = 0;
  *(undefined4 *)(param_1 + 0x6f) = 0;
  param_1[0x74] = 0;
  param_1[0x75] = 0x200000000;
  param_1[0x77] = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c4) = 0x20;
  *(undefined4 *)(param_1 + 0x79) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x3cc) = 0;
  param_1[0x7b] = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  param_1[0x81] = 0;
  param_1[0x82] = 0x200000000;
  param_1[0x84] = 0;
  *(undefined4 *)(param_1 + 0x85) = 0;
  *(undefined4 *)((longlong)param_1 + 0x42c) = 0x20;
  *(undefined4 *)(param_1 + 0x86) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x434) = 0;
  param_1[0x88] = 0;
  *(undefined4 *)(param_1 + 0x89) = 0;
  param_1[0x90] = 0;
  *(undefined4 *)(param_1 + 0x91) = 0;
  param_1[0x8c] = 0;
  param_1[0x8d] = 0;
  param_1[0x8a] = 0;
  param_1[0x8b] = 0;
  *(undefined8 *)((longlong)param_1 + 0x48c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x494) = 0;
  param_1[0x94] = 0;
  *(undefined4 *)(param_1 + 0x95) = 0;
  param_1[0x9a] = 0;
  *(undefined4 *)(param_1 + 0x9b) = 0;
  param_1[0x96] = 0;
  param_1[0x97] = 0;
  *(undefined8 *)((longlong)param_1 + 0x4dc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x4e4) = 0;
  param_1[0x9e] = 0;
  *(undefined4 *)(param_1 + 0x9f) = 0;
  param_1[0xa0] = 0;
  param_1[0xa1] = 0xffffffff00000000;
  param_1[0xa6] = 0;
  *(undefined4 *)(param_1 + 0xa7) = 0;
  param_1[0xa2] = 0;
  param_1[0xa3] = 0;
  *(undefined8 *)((longlong)param_1 + 0x53c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x544) = 0;
  param_1[0xaa] = 0;
  *(undefined4 *)(param_1 + 0xab) = 0;
  *(undefined1 *)(param_1 + 0xac) = 0;
  *(undefined4 *)(param_1 + 0xb1) = 0;
  param_1[0xb6] = 0;
  param_1[0xb7] = 0x200000000;
  param_1[0xb9] = 0;
  *(undefined4 *)(param_1 + 0xba) = 0;
  *(undefined4 *)((longlong)param_1 + 0x5d4) = 0x20;
  *(undefined4 *)(param_1 + 0xbb) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x5dc) = 0;
  param_1[0xbd] = 0;
  *(undefined4 *)(param_1 + 0xbe) = 0;
  param_1[0xc3] = 0;
  param_1[0xc4] = 0x200000000;
  param_1[0xc6] = 0;
  *(undefined4 *)(param_1 + 199) = 0;
  *(undefined4 *)((longlong)param_1 + 0x63c) = 0x20;
  *(undefined4 *)(param_1 + 200) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x644) = 0;
  param_1[0xca] = 0;
  *(undefined4 *)(param_1 + 0xcb) = 0;
  param_1[0xd0] = 0;
  param_1[0xd1] = 0x200000000;
  param_1[0xd3] = 0;
  *(undefined4 *)(param_1 + 0xd4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x6a4) = 0x20;
  *(undefined4 *)(param_1 + 0xd5) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x6ac) = 0;
  param_1[0xd7] = 0;
  *(undefined4 *)(param_1 + 0xd8) = 0;
  param_1[0xdf] = 0;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  param_1[0xdb] = 0;
  param_1[0xdc] = 0;
  param_1[0xd9] = 0;
  param_1[0xda] = 0;
  *(undefined8 *)((longlong)param_1 + 0x704) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x70c) = 0;
  param_1[0xe3] = 0;
  *(undefined4 *)(param_1 + 0xe4) = 0;
  param_1[0xe9] = 0;
  *(undefined4 *)(param_1 + 0xea) = 0;
  param_1[0xe5] = 0;
  param_1[0xe6] = 0;
  *(undefined8 *)((longlong)param_1 + 0x754) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x75c) = 0;
  param_1[0xed] = 0;
  *(undefined4 *)(param_1 + 0xee) = 0;
  param_1[0xef] = 0;
  param_1[0xf0] = 0xffffffff00000000;
  param_1[0xf5] = 0;
  *(undefined4 *)(param_1 + 0xf6) = 0;
  param_1[0xf1] = 0;
  param_1[0xf2] = 0;
  *(undefined8 *)((longlong)param_1 + 0x7b4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x7bc) = 0;
  param_1[0xf9] = 0;
  *(undefined4 *)(param_1 + 0xfa) = 0;
  *(undefined1 *)(param_1 + 0xfb) = 0;
  *(undefined4 *)(param_1 + 0x100) = 0;
  param_1[0x105] = 0;
  param_1[0x106] = 0x200000000;
  param_1[0x108] = 0;
  *(undefined4 *)(param_1 + 0x109) = 0;
  *(undefined4 *)((longlong)param_1 + 0x84c) = 0x20;
  *(undefined4 *)(param_1 + 0x10a) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x854) = 0;
  param_1[0x10c] = 0;
  *(undefined4 *)(param_1 + 0x10d) = 0;
  param_1[0x112] = 0;
  param_1[0x113] = 0x200000000;
  param_1[0x115] = 0;
  *(undefined4 *)(param_1 + 0x116) = 0;
  *(undefined4 *)((longlong)param_1 + 0x8b4) = 0x20;
  *(undefined4 *)(param_1 + 0x117) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x8bc) = 0;
  param_1[0x119] = 0;
  *(undefined4 *)(param_1 + 0x11a) = 0;
  param_1[0x11f] = 0;
  param_1[0x120] = 0x200000000;
  param_1[0x122] = 0;
  *(undefined4 *)(param_1 + 0x123) = 0;
  *(undefined4 *)((longlong)param_1 + 0x91c) = 0x20;
  *(undefined4 *)(param_1 + 0x124) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x924) = 0;
  param_1[0x126] = 0;
  *(undefined4 *)(param_1 + 0x127) = 0;
  param_1[0x128] = 0;
  param_1[0x129] = 0;
  *(undefined2 *)(param_1 + 0x12a) = 2;
  FUN_140785382(param_1 + 299,0xffffffff00000014);
  param_1[0x132] = 0;
  param_1[0x133] = 0;
  param_1[0x134] = 0;
  *(undefined2 *)(param_1 + 0x138) = 4;
  *(undefined4 *)(param_1 + 0x135) = 0x41f00000;
  *(undefined1 *)(param_1 + 0x139) = 3;
  cVar1 = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  *(char *)(param_1 + 0x13a) = cVar1;
  param_1[0x13b] = 0;
  *(undefined2 *)(param_1 + 0x13f) = 4;
  *(undefined4 *)(param_1 + 0x13c) = 0x42b40000;
  *(undefined1 *)(param_1 + 0x140) = 3;
  *(char *)(param_1 + 0x141) = cVar1;
  *(undefined2 *)(param_1 + 0x142) = 0;
  param_1[0x143] = 0;
  *(undefined2 *)(param_1 + 0x147) = 4;
  *(undefined4 *)(param_1 + 0x144) = 1;
  *(undefined1 *)(param_1 + 0x148) = 2;
  *(byte *)(param_1 + 0x149) = (byte)~DAT_14c9a8754 >> 4 & 2;
  FUN_140440628(param_1 + 0x14a,&DAT_14cb7e518,0);
  *(undefined1 *)(param_1 + 0x151) = 0;
  param_1[0x152] = 0;
  *(undefined2 *)(param_1 + 0x156) = 4;
  *(undefined4 *)(param_1 + 0x153) = 0x42480000;
  *(undefined1 *)(param_1 + 0x157) = 3;
  cVar1 = ((DAT_14c9a8874 & 0x20) == 0) * '\x03';
  *(char *)(param_1 + 0x158) = cVar1;
  *(undefined2 *)(param_1 + 0x159) = 0x100;
  param_1[0x15a] = 0;
  *(undefined2 *)(param_1 + 0x15e) = 4;
  *(undefined4 *)(param_1 + 0x15b) = 0x42480000;
  *(undefined1 *)(param_1 + 0x15f) = 3;
  *(char *)(param_1 + 0x160) = cVar1;
  param_1[0x161] = 0;
  *(undefined2 *)(param_1 + 0x165) = 4;
  *(undefined4 *)(param_1 + 0x162) = 0x42480000;
  *(undefined1 *)(param_1 + 0x166) = 3;
  *(char *)(param_1 + 0x167) = cVar1;
  *(undefined2 *)(param_1 + 0x168) = 0x100;
  *(undefined1 *)((longlong)param_1 + 0xb42) = 0;
  return param_1;
}



// FUNCTION 14123e1e0 FUN_14123e1e0 body=333 status=ok
// SIG undefined FUN_14123e1e0(void)

void FUN_14123e1e0(longlong param_1)

{
  float *pfVar1;
  longlong *plVar2;
  longlong lVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  
  *(undefined4 *)(param_1 + 0x38) = 0;
  if (*(int *)(param_1 + 0x3c) != 0) {
    FUN_1483efd08(param_1 + 0x30);
  }
  *(undefined4 *)(param_1 + 0x40) = 0;
  plVar2 = *(longlong **)(param_1 + 0x28);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x2a0))(plVar2,param_1 + 0x30);
    if ((longlong)*(int *)(param_1 + 0x38) != 0) {
      pfVar4 = *(float **)(param_1 + 0x30);
      pfVar1 = pfVar4 + (longlong)*(int *)(param_1 + 0x38) * 0x12;
      do {
        fVar6 = 6.2831855 / *pfVar4;
        *(double *)(pfVar4 + 10) = (double)fVar6 * *(double *)(pfVar4 + 4);
        *(double *)(pfVar4 + 0xc) = *(double *)(pfVar4 + 6) * (double)fVar6;
        fVar5 = fVar6 * 980.0;
        if (fVar5 < 0.0) {
          fVar5 = sqrtf(fVar5);
        }
        else {
          fVar5 = SQRT(fVar5);
        }
        pfVar4[0xe] = fVar5;
        fVar5 = pfVar4[1];
        pfVar4[0xf] = fVar6 * fVar5;
        pfVar4[0x10] = (pfVar4[2] / (fVar6 * fVar5)) * fVar5;
        *(float *)(param_1 + 0x40) = fVar5 + *(float *)(param_1 + 0x40);
        pfVar4 = pfVar4 + 0x12;
      } while (pfVar4 != pfVar1);
    }
  }
  if (DAT_14cb0d2b0 != 0) {
    lVar3 = FUN_14585114a();
    if (lVar3 != 0) {
      *(undefined1 *)(lVar3 + 0x40) = 1;
    }
  }
  return;
}



// FUNCTION 14123e32e FUN_14123e32e body=228 status=ok
// SIG undefined FUN_14123e32e(void)

longlong FUN_14123e32e(void)

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
  if (DAT_14cb46d60 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1411791a2;
    local_38 = &LAB_1483e1fdf;
    local_40 = FUN_146486256;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x48;
    FUN_14081cfa3(L"/Script/Water",L"GerstnerWaterWaveSubsystem",&DAT_14cb46d60,&DAT_1483e1fde);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb46d60;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14123e414 FUN_14123e414 body=1099 status=ok
// SIG undefined FUN_14123e414(void)

void FUN_14123e414(longlong param_1,longlong *param_2)

{
  float *pfVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  float fVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  
  iVar12 = *(int *)(param_1 + 0x28);
  if (0 < iVar12) {
    uVar13 = *(uint *)(param_1 + 0x2c);
    iVar14 = 0;
    do {
      fVar15 = (float)iVar12;
      dVar3 = (double)((-1.0 / fVar15) * *(float *)(param_1 + 0x30));
      uVar13 = uVar13 * 0xbb38435 + 0x3619636b;
      dVar3 = (double)((float)(uVar13 >> 9 | 0x3f800000) + -1.0) *
              ((double)((1.0 / fVar15) * *(float *)(param_1 + 0x30)) - dVar3) + dVar3 +
              (double)(1.0 - (float)iVar14 / fVar15);
      if (1.0 <= dVar3) {
        dVar3 = 1.0;
      }
      iVar12 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar12 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar12 + 1U) {
        FUN_145851200(param_2,iVar12);
      }
      pfVar1 = (float *)(*param_2 + (longlong)iVar12 * 0x48);
      FUN_14123e85f(pfVar1);
      pfVar1[4] = 0.0;
      pfVar1[5] = 0.0;
      pfVar1[6] = 0.0;
      pfVar1[7] = 0.0;
      pfVar1[8] = 0.0;
      pfVar1[9] = 0.0;
      dVar7 = (double)*(float *)(param_1 + 0x4c) * 0.017453292519943295;
      dVar4 = sin(dVar7);
      *(double *)(pfVar1 + 6) = dVar4;
      dVar4 = cos(dVar7);
      *(double *)(pfVar1 + 4) = dVar4;
      if (iVar14 != 0) {
        dVar4 = (double)-*(float *)(param_1 + 0x50);
        uVar13 = uVar13 * 0xbb38435 + 0x3619636b;
        dVar4 = ((double)((float)(uVar13 >> 9 | 0x3f800000) + -1.0) *
                 ((double)*(float *)(param_1 + 0x50) - dVar4) + dVar4) * 0.017453292519943295;
        dVar5 = sin(dVar4);
        dVar6 = cos(dVar4);
        dVar11 = DAT_14c8462c8 * DAT_14c8462c8;
        dVar10 = dVar5 * DAT_14c8462c0;
        dVar8 = dVar5 * DAT_14c8462c8;
        dVar5 = dVar5 * DAT_14c8462d0;
        dVar19 = DAT_14c8462d0 * DAT_14c8462d0;
        dVar9 = 1.0 - dVar6;
        dVar18 = DAT_14c8462c0 * DAT_14c8462d0 * dVar9;
        dVar16 = DAT_14c8462c8 * DAT_14c8462d0 * dVar9;
        dVar4 = *(double *)(pfVar1 + 4);
        dVar7 = *(double *)(pfVar1 + 6);
        dVar2 = *(double *)(pfVar1 + 8);
        dVar17 = DAT_14c8462c0 * DAT_14c8462c8 * dVar9;
        *(double *)(pfVar1 + 4) =
             (dVar18 + dVar8) * dVar2 +
             (dVar9 * DAT_14c8462c0 * DAT_14c8462c0 + dVar6) * dVar4 + (dVar17 - dVar5) * dVar7;
        *(double *)(pfVar1 + 6) =
             (dVar16 - dVar10) * dVar2 + (dVar17 + dVar5) * dVar4 + (dVar11 * dVar9 + dVar6) * dVar7
        ;
        *(double *)(pfVar1 + 8) =
             (dVar19 * dVar9 + dVar6) * dVar2 + (dVar18 - dVar8) * dVar4 + (dVar16 + dVar10) * dVar7
        ;
      }
      if (dVar3 <= 0.0) {
        dVar3 = 0.0;
      }
      fVar15 = powf((float)dVar3,*(float *)(param_1 + 0x3c));
      *pfVar1 = (*(float *)(param_1 + 0x38) - *(float *)(param_1 + 0x34)) * fVar15 +
                *(float *)(param_1 + 0x34);
      fVar15 = powf((float)dVar3,*(float *)(param_1 + 0x48));
      fVar15 = (*(float *)(param_1 + 0x44) - *(float *)(param_1 + 0x40)) * fVar15 +
               *(float *)(param_1 + 0x40);
      if (fVar15 <= 0.0001) {
        fVar15 = 0.0001;
      }
      pfVar1[1] = fVar15;
      fVar15 = powf((float)iVar14 / (float)*(int *)(param_1 + 0x28),*(float *)(param_1 + 0x5c));
      pfVar1[2] = (*(float *)(param_1 + 0x54) - *(float *)(param_1 + 0x58)) * fVar15 +
                  *(float *)(param_1 + 0x58);
      iVar14 = iVar14 + 1;
      iVar12 = *(int *)(param_1 + 0x28);
    } while (iVar14 < iVar12);
  }
  return;
}



// FUNCTION 14123e85f FUN_14123e85f body=61 status=ok
// SIG undefined FUN_14123e85f(void)

void FUN_14123e85f(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = 0x4120000041c80000;
  *(undefined4 *)(param_1 + 1) = 0;
  uVar1 = DAT_14c8462e0;
  param_1[2] = DAT_14c8462d8;
  param_1[3] = uVar1;
  param_1[4] = DAT_14c8462e8;
  uVar1 = DAT_14c8463f8;
  param_1[5] = DAT_14c8463f0;
  param_1[6] = uVar1;
  param_1[7] = 0;
  param_1[8] = 0;
  return;
}



// FUNCTION 14123e89c FUN_14123e89c body=1351 status=ok
// SIG undefined FUN_14123e89c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14123e89c(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  int *piVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  int iVar10;
  longlong lVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  longlong lVar14;
  longlong *plVar15;
  bool bVar16;
  undefined1 auStack_98 [40];
  undefined8 *local_70;
  undefined8 local_68;
  longlong *local_60;
  int local_58;
  undefined1 local_50 [8];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_70 = param_2;
  plVar6 = (longlong *)FUN_14001cc68(0x58,0x10);
  plVar6[1] = (longlong)&DAT_100000001;
  *plVar6 = (longlong)&PTR_FUN_14b420930;
  plVar6[3] = 0;
  plVar6[4] = 0;
  plVar6[5] = 0;
  plVar6[6] = 0;
  plVar6[7] = 0;
  plVar6[8] = 0;
  plVar15 = plVar6 + 2;
  *plVar15 = (longlong)&PTR_FUN_14b420948;
  plVar6[9] = 0;
  plVar6[10] = 0;
  if (plVar15 != (longlong *)0x0) {
    if (plVar6 == (longlong *)0x0) {
      _DAT_00000018 = 0x10;
      plVar13 = (longlong *)&DAT_00000020;
      plVar9 = _DAT_00000020;
      if (_DAT_00000020 != (longlong *)0x0) {
LAB_14123ecd1:
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar9 + 0x10))();
        }
        *plVar13 = (longlong)plVar6;
        if (plVar6 != (longlong *)0x0) goto LAB_14123e946;
      }
    }
    else {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
      plVar6[3] = (longlong)plVar15;
      if ((longlong *)plVar6[4] != plVar6) {
        LOCK();
        *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
        UNLOCK();
        if ((longlong *)plVar6[4] != (longlong *)0x0) {
          plVar13 = plVar6 + 4;
          plVar9 = (longlong *)plVar6[4];
          goto LAB_14123ecd1;
        }
        plVar6[4] = (longlong)plVar6;
      }
LAB_14123e946:
      LOCK();
      plVar13 = plVar6 + 1;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)*plVar13 == 0) {
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
  local_68 = param_1;
  lVar7 = FUN_140d1142c(param_1);
  if (lVar7 == 0) {
LAB_14123ec27:
    *local_70 = 0;
    local_70[1] = 0;
    puVar12 = local_70;
    if (plVar6 == (longlong *)0x0) goto LAB_14123eb61;
  }
  else {
    local_60 = (longlong *)0x0;
    local_58 = 0;
    FUN_1446efa72(&local_60,0,4,0x10);
    local_58 = 4;
    plVar13 = (longlong *)plVar6[4];
    if (plVar13 == (longlong *)0x0) {
LAB_14123ec60:
      *local_60 = (longlong)&PTR_LAB_14b421670;
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 1;
      lVar2 = DAT_14c758608 + 1;
      if (lVar11 == 0) {
        LOCK();
        UNLOCK();
        lVar11 = DAT_14c758608 + 2;
        lVar2 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar2;
      local_60[2] = lVar11;
      *local_60 = (longlong)&PTR_FUN_14b420960;
      local_60[3] = 0;
      local_60[4] = 0;
      local_60[5] = (longlong)FUN_140d113ce;
      *(undefined4 *)(local_60 + 6) = 0;
    }
    else {
      iVar4 = (int)plVar13[1];
      do {
        if (iVar4 == 0) goto LAB_14123ec60;
        LOCK();
        iVar5 = (int)plVar13[1];
        bVar16 = iVar4 == iVar5;
        if (bVar16) {
          *(int *)(plVar13 + 1) = iVar4 + 1;
          iVar5 = iVar4;
        }
        iVar4 = iVar5;
        UNLOCK();
      } while (!bVar16);
      lVar2 = plVar6[3];
      LOCK();
      *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
      UNLOCK();
      *local_60 = (longlong)&PTR_LAB_14b421670;
      LOCK();
      UNLOCK();
      lVar14 = DAT_14c758608 + 1;
      lVar11 = DAT_14c758608 + 1;
      if (lVar14 == 0) {
        LOCK();
        UNLOCK();
        lVar14 = DAT_14c758608 + 2;
        lVar11 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar11;
      local_60[2] = lVar14;
      *local_60 = (longlong)&PTR_FUN_14b420960;
      local_60[3] = lVar2;
      local_60[4] = (longlong)plVar13;
      LOCK();
      *(int *)((longlong)plVar13 + 0xc) = *(int *)((longlong)plVar13 + 0xc) + 1;
      UNLOCK();
      local_60[5] = (longlong)FUN_140d113ce;
      *(undefined4 *)(local_60 + 6) = 0;
      LOCK();
      plVar9 = plVar13 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
        (**(code **)*plVar13)(plVar13);
        LOCK();
        piVar1 = (int *)((longlong)plVar13 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar13 + 0x10))(plVar13);
        }
      }
      LOCK();
      plVar9 = plVar13 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
        (**(code **)*plVar13)(plVar13);
        LOCK();
        piVar1 = (int *)((longlong)plVar13 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar13 + 0x10))(plVar13);
        }
      }
      LOCK();
      plVar9 = plVar13 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
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
    if (((local_58 == 0) || (local_60 == (longlong *)0x0)) ||
       (cVar3 = (**(code **)(*local_60 + 0x30))(), cVar3 == '\0')) {
      if (local_58 == 0) goto LAB_14123eafc;
      if (local_60 != (longlong *)0x0) {
        (**(code **)*local_60)(local_60,0);
        FUN_1446efa72(&local_60,0,0,0x10);
        goto LAB_14123eaef;
      }
    }
    else {
      plVar13 = (longlong *)(param_3 + 0x18);
      if (*(int *)(param_3 + 0x2c) < 1) {
        iVar4 = *(int *)(param_3 + 0x20);
        iVar5 = *(int *)(param_3 + 0x28) + -1;
        *(int *)(param_3 + 0x28) = iVar5;
        if (iVar5 <= iVar4) {
          iVar5 = iVar4;
          if (0 < iVar4) {
            iVar10 = 0;
            do {
              if (((*(int *)(*plVar13 + 8 + (longlong)iVar10 * 0x10) == 0) ||
                  (plVar9 = *(longlong **)(*plVar13 + (longlong)iVar10 * 0x10),
                  plVar9 == (longlong *)0x0)) ||
                 (cVar3 = (**(code **)(*plVar9 + 0x28))(), cVar3 != '\0')) {
                FUN_14005b288(plVar13,iVar10);
                FUN_14005b248(plVar13);
              }
              else {
                iVar10 = iVar10 + 1;
              }
              iVar5 = *(int *)(param_3 + 0x20);
            } while (iVar10 < iVar5);
          }
          iVar10 = 2;
          if (2 < iVar5 * 2) {
            iVar10 = iVar5 * 2;
          }
          *(int *)(param_3 + 0x28) = iVar10;
          if ((iVar10 < iVar4) && (*(int *)(param_3 + 0x24) != iVar5)) {
            FUN_14045812c();
          }
        }
      }
      if ((local_58 != 0) && (local_60 != (longlong *)0x0)) {
        (**(code **)(*local_60 + 0x38))(local_60,local_50);
      }
      iVar4 = *(int *)(param_3 + 0x20);
      *(uint *)(param_3 + 0x20) = iVar4 + 1U;
      if (*(uint *)(param_3 + 0x24) < iVar4 + 1U) {
        FUN_1447a71f6(plVar13,iVar4);
      }
      lVar2 = *plVar13;
      lVar11 = (longlong)iVar4 * 0x10;
      *(undefined8 *)(lVar2 + lVar11) = 0;
      *(undefined4 *)(lVar2 + 8 + lVar11) = 0;
      *(longlong **)(lVar2 + lVar11) = local_60;
      local_60 = (longlong *)0x0;
      *(int *)(lVar2 + 8 + lVar11) = local_58;
LAB_14123eaef:
      local_58 = 0;
LAB_14123eafc:
      if (local_60 != (longlong *)0x0) {
        FUN_1400020a8();
      }
    }
    iVar4 = *(int *)(param_3 + 0xb8);
    if ((longlong)iVar4 != 0) {
      lVar2 = *(longlong *)(param_3 + 0xb0);
      lVar11 = 0;
      do {
        lVar14 = *(longlong *)(lVar2 + lVar11);
        if ((lVar14 != 0) && (lVar8 = FUN_1401cd362(lVar14), lVar8 == lVar7)) {
          cVar3 = FUN_140d118ce(plVar15,local_68,param_3,lVar14);
          if (cVar3 == '\0') goto LAB_14123ec27;
          break;
        }
        lVar11 = lVar11 + 8;
      } while ((longlong)iVar4 * 8 != lVar11);
    }
    *local_70 = plVar15;
    local_70[1] = plVar6;
    puVar12 = local_70;
    if (plVar6 == (longlong *)0x0) goto LAB_14123eb61;
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
  }
  puVar12 = local_70;
  LOCK();
  plVar15 = plVar6 + 1;
  *(int *)plVar15 = (int)*plVar15 + -1;
  UNLOCK();
  if ((int)*plVar15 == 0) {
    (**(code **)*plVar6)(plVar6);
    LOCK();
    piVar1 = (int *)((longlong)plVar6 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
    }
  }
LAB_14123eb61:
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar12;
}



// FUNCTION 14123ede4 FUN_14123ede4 body=172 status=ok
// SIG undefined FUN_14123ede4(void)

void FUN_14123ede4(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14b420948;
  plVar3 = *(longlong **)(param_1 + 0x50);
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
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14b421658;
  plVar3 = (longlong *)(param_1 + 0x28);
  if (*(int *)(param_1 + 0x30) != 0) {
    puVar4 = (undefined8 *)*plVar3;
    if (puVar4 == (undefined8 *)0x0) goto LAB_14123ee3b;
    (**(code **)*puVar4)(puVar4,0);
    FUN_1446efa72(plVar3,0,0,0x10);
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  if (*plVar3 != 0) {
    FUN_1400020a8();
  }
LAB_14123ee3b:
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014123ee85. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 14123ee90 FUN_14123ee90 body=148 status=ok
// SIG undefined FUN_14123ee90(void)

void FUN_14123ee90(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14b420c08;
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
  }
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14b421658;
  plVar1 = (longlong *)(param_1 + 0x28);
  if (*(int *)(param_1 + 0x30) != 0) {
    puVar3 = (undefined8 *)*plVar1;
    if (puVar3 == (undefined8 *)0x0) goto LAB_14123eecf;
    (**(code **)*puVar3)(puVar3,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_14123eecf:
  plVar1 = *(longlong **)(param_1 + 0x20);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar1 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014123ef19. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 14123ef24 FUN_14123ef24 body=123 status=ok
// SIG undefined FUN_14123ef24(void)

void FUN_14123ef24(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14b421658;
  plVar1 = (longlong *)(param_1 + 0x28);
  if (*(int *)(param_1 + 0x30) != 0) {
    puVar3 = (undefined8 *)*plVar1;
    if (puVar3 == (undefined8 *)0x0) goto LAB_14123ef4a;
    (**(code **)*puVar3)(puVar3,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_14123ef4a:
  plVar1 = *(longlong **)(param_1 + 0x20);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar1 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014123ef94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 14123efa0 FUN_14123efa0 body=377 status=ok
// SIG undefined FUN_14123efa0(void)

undefined4 FUN_14123efa0(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *local_40;
  undefined8 *local_38;
  ulonglong uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar5 = FUN_140358a34();
  if (lVar5 == 0) {
    uVar4 = 0;
  }
  else {
    local_38 = (undefined8 *)0x0;
    uStack_30 = 0;
    local_48 = *(undefined8 *)(lVar5 + 0x30);
    plVar3 = *(longlong **)(lVar5 + 0x38);
    if (plVar3 == (longlong *)0x0) {
      local_40 = (longlong *)0x0;
      uVar4 = FUN_14123f11a(param_1,0,&local_48,&local_38);
    }
    else {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
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
      LOCK();
      *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
      UNLOCK();
      local_40 = plVar3;
      uVar4 = FUN_14123f11a(param_1,0,&local_48,&local_38);
      if (plVar3 != (longlong *)0x0) {
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
    if ((int)uStack_30 != 0) {
      if (local_38 == (undefined8 *)0x0) goto LAB_14123f045;
      (**(code **)*local_38)(local_38,0);
      FUN_1446efa72(&local_38,0,0,0x10);
      uStack_30 = uStack_30 & 0xffffffff00000000;
    }
    if (local_38 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_14123f045:
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14123f11a FUN_14123f11a body=1202 status=ok
// SIG undefined FUN_14123f11a(void)

undefined8 FUN_14123f11a(uint *param_1,ulonglong param_2,longlong *param_3,longlong *param_4)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined7 uVar11;
  longlong lVar9;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  undefined8 uVar10;
  longlong *plVar12;
  longlong *plVar13;
  byte bVar14;
  int iVar15;
  uint *puVar16;
  ulonglong uVar17;
  char *pcVar18;
  undefined1 auStack_88 [40];
  uint *local_60;
  uint local_58;
  undefined4 local_54;
  undefined1 local_50;
  undefined1 local_4f;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar12 = (longlong *)param_3[1];
  if (plVar12 != (longlong *)0x0) {
    uVar8 = (ulonglong)*(uint *)(plVar12 + 1);
    do {
      uVar7 = (uint)uVar8;
      if (uVar7 == 0) goto LAB_14123f227;
      LOCK();
      uVar2 = *(uint *)(plVar12 + 1);
      if (uVar7 == uVar2) {
        *(uint *)(plVar12 + 1) = uVar7 + 1;
      }
      else {
        uVar8 = (ulonglong)uVar2;
      }
      UNLOCK();
    } while (uVar7 != uVar2);
    lVar3 = *param_3;
    LOCK();
    plVar13 = plVar12 + 1;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)*plVar13 == 0) {
      uVar8 = (**(code **)*plVar12)(plVar12);
      LOCK();
      piVar1 = (int *)((longlong)plVar12 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        uVar8 = (**(code **)(*plVar12 + 0x10))(plVar12);
      }
    }
    uVar11 = (undefined7)(uVar8 >> 8);
    bVar14 = (byte)(param_2 & 0xffffffff);
    if (bVar14 < 3 && lVar3 != 0) {
      if ((bVar14 != 0) || (lVar3 != *(longlong *)(param_1 + 0x16))) {
        uVar8 = param_2 & 0xff;
        if (*(char *)((longlong)param_1 + uVar8 * 0x138 + 0x14d) == '\0') {
          FUN_140356f00(param_1,param_2 & 0xffffffff,4);
          if (*(longlong **)(param_1 + 2) != (longlong *)0x0) {
            if (param_1[1] != 0) {
              uVar7 = *param_1;
              uVar10 = 0;
              if (((int)uVar7 < 0) || (DAT_14c9647dc <= (int)uVar7)) goto LAB_14123f229;
              lVar9 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8);
              if ((lVar9 != 0) &&
                 ((*(uint *)(lVar9 + 0x10) == param_1[1] &&
                  ((*(uint *)(lVar9 + 8) & 0x10200000) == 0)))) {
                lVar9 = (**(code **)(**(longlong **)(param_1 + 2) + 0x10))();
                if (lVar9 != 0) {
                  puVar16 = param_1 + uVar8 * 0x4e + 6;
                  (**(code **)(*(longlong *)puVar16 + 0x48))
                            (puVar16,lVar3,lVar9,param_2 & 0xffffffff);
                  if (0 < (int)param_1[0x142]) {
                    FUN_1470e4e7e(puVar16,1);
                  }
                  if ((longlong *)*param_4 != (longlong *)0x0 && (int)param_4[1] != 0) {
                    cVar6 = (**(code **)(*(longlong *)*param_4 + 0x30))();
                    if (((cVar6 != '\0') && (0 < (int)param_1[uVar8 * 0x4e + 0x24])) &&
                       (lVar3 = **(longlong **)(param_1 + uVar8 * 0x4e + 0x22), lVar3 != 0)) {
                      plVar12 = (longlong *)(lVar3 + 0x80);
                      lVar9 = *param_4;
                      *param_4 = 0;
                      iVar15 = (int)param_4[1];
                      *(undefined4 *)(param_4 + 1) = 0;
                      if (*(int *)(lVar3 + 0x88) == 0) {
LAB_14123f2ee:
                        if (*plVar12 != 0) {
                          FUN_1400020a8();
                        }
                      }
                      else {
                        puVar4 = (undefined8 *)*plVar12;
                        if (puVar4 != (undefined8 *)0x0) {
                          (**(code **)*puVar4)(puVar4,0);
                          FUN_1446efa72(plVar12,0,0,0x10);
                          *(undefined4 *)(lVar3 + 0x88) = 0;
                          goto LAB_14123f2ee;
                        }
                      }
                      *(longlong *)(lVar3 + 0x80) = lVar9;
                      *(int *)(lVar3 + 0x88) = iVar15;
                      local_58 = param_1[5];
                      local_54 = 0;
                      local_50 = 0 < (int)param_1[0x142];
                      local_4f = 0;
                      local_60 = param_1;
                      if (((param_1[1] != 0) && (uVar7 = *param_1, -1 < (int)uVar7)) &&
                         ((int)uVar7 < DAT_14c9647dc)) {
                        plVar13 = (longlong *)
                                  ((ulonglong)((uVar7 & 0xffff) * 0x18) +
                                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8));
                        if (((plVar13 != (longlong *)0x0) && (*(uint *)(plVar13 + 2) == param_1[1]))
                           && (((*(uint *)(plVar13 + 1) & 0x10200000) == 0 &&
                               ((longlong *)*plVar13 != (longlong *)0x0)))) {
                          (**(code **)(*(longlong *)*plVar13 + 0x180))();
                          iVar15 = *(int *)(lVar3 + 0x88);
                        }
                      }
                      if (iVar15 == 0) {
                        plVar12 = (longlong *)0x0;
                      }
                      else {
                        plVar12 = (longlong *)*plVar12;
                      }
                      (**(code **)(*plVar12 + 0x58))(plVar12,lVar3,&local_60,0);
                    }
                  }
                  uVar17 = (ulonglong)(byte)param_1[0xf0];
                  if ((byte)param_1[0xf0] < bVar14) {
                    pcVar18 = (char *)((longlong)param_1 + uVar17 * 0x138 + 0x14d);
                    do {
                      if ((0 < *(int *)(pcVar18 + -0xbd)) &&
                         (plVar12 = (longlong *)**(longlong **)(pcVar18 + -0xc5),
                         plVar12 != (longlong *)0x0)) {
                        local_58 = param_1[5];
                        local_54 = 0;
                        local_50 = 0 < (int)param_1[0x142];
                        local_4f = 0;
                        local_60 = param_1;
                        if ((param_1[1] != 0) &&
                           ((uVar7 = *param_1, -1 < (int)uVar7 && ((int)uVar7 < DAT_14c9647dc)))) {
                          plVar13 = (longlong *)
                                    ((ulonglong)((uVar7 & 0xffff) * 0x18) +
                                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8));
                          if ((plVar13 != (longlong *)0x0) &&
                             (((*(uint *)(plVar13 + 2) == param_1[1] &&
                               ((*(uint *)(plVar13 + 1) & 0x10200000) == 0)) &&
                              ((longlong *)*plVar13 != (longlong *)0x0)))) {
                            (**(code **)(*(longlong *)*plVar13 + 0x180))();
                          }
                        }
                        if (*pcVar18 != -1) {
                          *pcVar18 = *pcVar18 + '\x01';
                        }
                        cVar6 = (**(code **)(*plVar12 + 0x28))(plVar12);
                        if (cVar6 == '\0') {
LAB_14123f529:
                          cVar6 = FUN_14065d9ca(plVar12,&local_60,3);
                          if (cVar6 == '\0') goto LAB_14123f54b;
                          (**(code **)(*plVar12 + 0xd0))(plVar12);
                          bVar5 = true;
                        }
                        else {
                          cVar6 = (**(code **)(*plVar12 + 0xa8))(plVar12,&local_60,3);
                          if (cVar6 != '\0') goto LAB_14123f529;
LAB_14123f54b:
                          bVar5 = false;
                        }
                        if (*pcVar18 != '\0') {
                          *pcVar18 = *pcVar18 + -1;
                        }
                        if (!bVar5) break;
                      }
                      uVar17 = uVar17 + 1;
                      *(char *)(param_1 + 0xf0) = (char)uVar17;
                      pcVar18 = pcVar18 + 0x138;
                    } while (uVar8 != uVar17);
                  }
                  FUN_14035a7fc(param_1 + 0x138,param_1);
                  uVar11 = extraout_var_00;
                  goto LAB_14123f586;
                }
              }
            }
          }
          goto LAB_14123f227;
        }
        uVar7 = param_1[0x112];
        param_1[0x112] = uVar7 + 1;
        if (param_1[0x113] < uVar7 + 1) {
          FUN_147f5b43c(param_1 + 0xf2,uVar7);
        }
        puVar16 = param_1 + 0xf2;
        if (*(uint **)(param_1 + 0x110) != (uint *)0x0) {
          puVar16 = *(uint **)(param_1 + 0x110);
        }
        puVar16 = puVar16 + (longlong)(int)uVar7 * 10;
        *(byte *)puVar16 = bVar14;
        *(undefined1 *)((longlong)puVar16 + 1) = 0;
        *(longlong *)(puVar16 + 2) = *param_3;
        lVar3 = param_3[1];
        *(longlong *)(puVar16 + 4) = lVar3;
        if (lVar3 != 0) {
          LOCK();
          *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
          UNLOCK();
        }
        puVar16[6] = 0;
        puVar16[7] = 0;
        puVar16[8] = 0;
        FUN_147f18a4a(puVar16 + 6,param_4);
        uVar11 = extraout_var;
      }
LAB_14123f586:
      uVar10 = CONCAT71(uVar11,1);
      goto LAB_14123f229;
    }
  }
LAB_14123f227:
  uVar10 = 0;
LAB_14123f229:
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14123f5ce FUN_14123f5ce body=289 status=ok
// SIG undefined FUN_14123f5ce(void)

undefined8 FUN_14123f5ce(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,2,0x10);
  local_30 = 2;
  *local_38 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar2 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar2 == 0) {
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_38[2] = lVar2;
  *local_38 = &PTR_FUN_149e062c0;
  local_38[3] = param_3;
  FUN_1448b6402(param_1,param_2,&local_38);
  if (local_30 != 0) {
    if (local_38 == (undefined8 *)0x0) goto LAB_14123f67f;
    (**(code **)*local_38)(local_38,0);
    FUN_1446efa72(&local_38,0,0,0x10);
    local_30 = 0;
  }
  if (local_38 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_14123f67f:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14123f6f0 FUN_14123f6f0 body=375 status=ok
// SIG undefined FUN_14123f6f0(void)

undefined8 * FUN_14123f6f0(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 14123f884 FUN_14123f884 body=42 status=ok
// SIG undefined FUN_14123f884(void)

void FUN_14123f884(longlong param_1)

{
  if (*(char *)(param_1 + 0x135) == '\0') {
    FUN_14123f8ae();
    FUN_14123fa3e(param_1);
    return;
  }
  return;
}



// FUNCTION 14123f8ae FUN_14123f8ae body=399 status=ok
// SIG undefined FUN_14123f8ae(void)

void FUN_14123f8ae(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  PRTL_CRITICAL_SECTION_DEBUG p_Var5;
  bool bVar6;
  int iVar7;
  int iVar8;
  LPCRITICAL_SECTION lpCriticalSection;
  longlong *plVar9;
  longlong lVar10;
  longlong *plVar11;
  bool bVar12;
  undefined1 auStack_78 [40];
  longlong local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (((int)param_1[0x26] == 1) &&
     ((param_1[0x66] != param_1[0x6a] || (param_1[0x68] != param_1[0x69])))) {
    param_1[0x6a] = param_1[0x66];
    param_1[0x69] = param_1[0x68];
    lpCriticalSection = (LPCRITICAL_SECTION)(**(code **)(*param_1 + 0xf8))(param_1);
    lVar3 = param_1[0x69];
    lVar4 = param_1[0x6a];
    plVar9 = (longlong *)param_1[2];
    bVar6 = true;
    if (plVar9 == (longlong *)0x0) {
LAB_14123f97b:
      lVar10 = 0;
      plVar9 = (longlong *)0x0;
    }
    else {
      iVar8 = (int)plVar9[1];
      do {
        if (iVar8 == 0) goto LAB_14123f97b;
        LOCK();
        iVar7 = (int)plVar9[1];
        bVar12 = iVar8 == iVar7;
        if (bVar12) {
          *(int *)(plVar9 + 1) = iVar8 + 1;
          iVar7 = iVar8;
        }
        iVar8 = iVar7;
        UNLOCK();
      } while (!bVar12);
      lVar10 = param_1[1];
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
      LOCK();
      plVar11 = plVar9 + 1;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)*plVar11 == 0) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
      bVar6 = false;
    }
    EnterCriticalSection(lpCriticalSection);
    plVar11 = plVar9;
    if ((lpCriticalSection[1].LockCount != 0) &&
       (p_Var5 = lpCriticalSection[1].DebugInfo, p_Var5 != (PRTL_CRITICAL_SECTION_DEBUG)0x0)) {
      local_50 = lVar10;
      local_48 = plVar9;
      (**(code **)(*(longlong *)p_Var5 + 0x60))(p_Var5,&local_50,lVar4,lVar3);
      plVar11 = (longlong *)0x0;
    }
    if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
      LeaveCriticalSection(lpCriticalSection);
    }
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
    if (!bVar6) {
      LOCK();
      plVar11 = plVar9 + 1;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)*plVar11 == 0) {
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
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14123fa3e FUN_14123fa3e body=576 status=ok
// SIG undefined FUN_14123fa3e(void)

void FUN_14123fa3e(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  bool bVar8;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  longlong *plStack_b0;
  longlong local_a8 [5];
  undefined4 local_80;
  undefined4 local_7c;
  longlong local_78;
  undefined4 local_70;
  undefined4 local_6c;
  byte local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_a8[2] = 0;
  local_a8[3] = 0;
  local_a8[0] = 0;
  local_a8[1] = 0;
  lVar6 = *(longlong *)param_1[0x62];
  if (lVar6 != 0) {
    do {
      local_a8[4] = *(longlong *)(lVar6 + 8);
      *(undefined8 *)(lVar6 + 8) = 0;
      local_80 = *(undefined4 *)(lVar6 + 0x10);
      local_7c = *(undefined4 *)(lVar6 + 0x14);
      *(undefined8 *)(lVar6 + 0x10) = 0;
      local_78 = *(longlong *)(lVar6 + 0x18);
      *(undefined8 *)(lVar6 + 0x18) = 0;
      local_70 = *(undefined4 *)(lVar6 + 0x20);
      local_6c = *(undefined4 *)(lVar6 + 0x24);
      *(undefined8 *)(lVar6 + 0x20) = 0;
      local_68 = 1;
      param_1[0x62] = lVar6;
      FUN_146b2164e(local_a8,local_a8 + 4);
      if ((local_68 & 1) != 0) {
        if (local_78 != 0) {
          FUN_1400020a8();
        }
        if (local_a8[4] != 0) {
          FUN_1400020a8();
        }
      }
      uVar7 = (**(code **)(*param_1 + 0x108))(param_1);
      plVar3 = (longlong *)param_1[2];
      if (plVar3 == (longlong *)0x0) {
LAB_14123fb6d:
        local_b8 = 0;
        plStack_b0 = (longlong *)0x0;
        FUN_146b1b0aa(uVar7,&local_b8,local_a8,local_a8 + 2);
      }
      else {
        iVar5 = (int)plVar3[1];
        do {
          if (iVar5 == 0) goto LAB_14123fb6d;
          LOCK();
          iVar4 = (int)plVar3[1];
          bVar8 = iVar5 == iVar4;
          if (bVar8) {
            *(int *)(plVar3 + 1) = iVar5 + 1;
            iVar4 = iVar5;
          }
          iVar5 = iVar4;
          UNLOCK();
        } while (!bVar8);
        lVar6 = param_1[1];
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
        LOCK();
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        UNLOCK();
        local_b8 = lVar6;
        plStack_b0 = plVar3;
        FUN_146b1b0aa(uVar7,&local_b8,local_a8,local_a8 + 2);
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
      lVar6 = *(longlong *)param_1[0x62];
    } while (lVar6 != 0);
  }
  if (local_a8[2] != 0) {
    FUN_1400020a8();
  }
  if (local_a8[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14123fc80 FUN_14123fc80 body=37 status=ok
// SIG undefined FUN_14123fc80(void)

void FUN_14123fc80(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x640);
  FUN_14123fca6(param_2);
  return;
}



// FUNCTION 14123fca6 FUN_14123fca6 body=1092 status=ok
// SIG undefined FUN_14123fca6(void)

undefined8 * FUN_14123fca6(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_14b7f15e0;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0xf00000d0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0xf00000d0;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x17) = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0xf00000d0;
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x20) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x21) = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0x403e000000000000;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  *(undefined4 *)(param_1 + 0x2b) = 0xc5daac38;
  param_1[0x32] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  *(undefined4 *)(param_1 + 0x33) = 0xc5daac38;
  param_1[0x34] = 0;
  *(undefined1 *)(param_1 + 0x35) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1ac) = 0;
  param_1[0x37] = 0;
  *(undefined4 *)(param_1 + 0x38) = 0xf00000d0;
  param_1[0x39] = 0;
  *(undefined4 *)(param_1 + 0x3a) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1d4) = 0;
  *(undefined8 *)((longlong)param_1 + 500) = 0;
  param_1[0x40] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1e1) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1e9) = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  *(undefined4 *)(param_1 + 0x41) = 0xf00000d0;
  param_1[0x42] = 0;
  *(undefined4 *)(param_1 + 0x43) = 0;
  *(undefined1 *)((longlong)param_1 + 0x21c) = 0;
  param_1[0x46] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x47] = 0x4040000041f00000;
  *(undefined1 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x49) = 0x42480000;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  *(undefined4 *)(param_1 + 0x50) = 0xf00000d0;
  param_1[0x51] = 0;
  *(undefined4 *)(param_1 + 0x52) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x53) = 0x447a0000;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  *(undefined4 *)(param_1 + 0x5a) = 0xf00000d0;
  param_1[0x5b] = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x5d) = 0x3f000000;
  param_1[0x62] = 0;
  param_1[99] = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  *(undefined4 *)(param_1 + 100) = 0xf00000d0;
  param_1[0x65] = 0;
  *(undefined4 *)(param_1 + 0x66) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x67) = 0x3ea8f5c3;
  param_1[0x6c] = 0;
  param_1[0x6d] = 0;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  *(undefined4 *)(param_1 + 0x6e) = 0xf00000d0;
  param_1[0x6f] = 0;
  *(undefined4 *)(param_1 + 0x70) = 0x3f800000;
  param_1[0x73] = DAT_14c8464f0;
  uVar4 = DAT_14c8464e8._4_4_;
  uVar3 = (undefined4)DAT_14c8464e8;
  uVar2 = DAT_14c8464e0._4_4_;
  *(undefined4 *)(param_1 + 0x71) = (undefined4)DAT_14c8464e0;
  *(undefined4 *)((longlong)param_1 + 0x38c) = uVar2;
  *(undefined4 *)(param_1 + 0x72) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x394) = uVar4;
  *(undefined4 *)(param_1 + 0x74) = 0;
  param_1[0x79] = 0;
  param_1[0x7a] = 0;
  param_1[0x77] = 0;
  param_1[0x78] = 0;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  *(undefined4 *)(param_1 + 0x7b) = 0xf00000d0;
  param_1[0x7c] = 0;
  *(undefined4 *)(param_1 + 0x7d) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x7e) = 0x3f000000;
  param_1[0x83] = 0;
  param_1[0x84] = 0;
  param_1[0x81] = 0;
  param_1[0x82] = 0;
  param_1[0x7f] = 0;
  param_1[0x80] = 0;
  *(undefined4 *)(param_1 + 0x85) = 0xf00000d0;
  param_1[0x86] = 0;
  *(undefined4 *)(param_1 + 0x87) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x88) = 0;
  param_1[0x8d] = 0;
  param_1[0x8e] = 0;
  param_1[0x8b] = 0;
  param_1[0x8c] = 0;
  param_1[0x89] = 0;
  param_1[0x8a] = 0;
  *(undefined4 *)(param_1 + 0x8f) = 0xf00000d0;
  param_1[0x90] = 0;
  *(undefined4 *)(param_1 + 0x91) = 0x3f800000;
  param_1[0x92] = 0;
  *(undefined4 *)(param_1 + 0x93) = 0x3002;
  param_1[0x94] = 0;
  param_1[0x9b] = 0;
  param_1[0x9c] = 0x200000000;
  FUN_1405c5fa2();
  param_1[0x9e] = &DAT_14cb769e8;
  param_1[0x9f] = 0;
  param_1[0xa0] = 0;
  param_1[0x9d] = &PTR_FUN_14b0394b0;
  *(undefined4 *)(param_1 + 0xa1) = 0x3f4ccccd;
  param_1[0xa2] = 0;
  param_1[0xa3] = 0;
  param_1[0xa4] = 0;
  param_1[0xa5] = 0;
  param_1[0xa6] = 0;
  param_1[0xa7] = 0;
  *(undefined4 *)(param_1 + 0xa8) = 0xf00000d0;
  param_1[0xa9] = 0;
  *(undefined4 *)(param_1 + 0xaa) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xab) = 0x3dcccccd;
  param_1[0xac] = 0;
  param_1[0xad] = 0;
  param_1[0xae] = 0;
  param_1[0xaf] = 0;
  param_1[0xb0] = 0;
  param_1[0xb1] = 0;
  *(undefined4 *)(param_1 + 0xb2) = 0xf00000d0;
  param_1[0xb3] = 0;
  *(undefined4 *)(param_1 + 0xb4) = 0x3f800000;
  *(undefined1 *)(param_1 + 0xb5) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5ac) = 0x3f80000043480000;
  param_1[0xbb] = 0;
  param_1[0xb9] = 0;
  param_1[0xba] = 0;
  param_1[0xb7] = 0;
  param_1[0xb8] = 0;
  *(undefined4 *)(param_1 + 0xbc) = 0xaaad1010;
  *(undefined4 *)(param_1 + 0xc1) = 0;
  param_1[0xbf] = 0;
  param_1[0xc0] = 0;
  param_1[0xbd] = 0;
  param_1[0xbe] = 0;
  param_1[0xc4] = 0;
  param_1[0xc2] = 0;
  param_1[0xc3] = 0;
  param_1[199] = DAT_14c8464f0;
  uVar1 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  param_1[0xc5] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  param_1[0xc6] = uVar1;
  return param_1;
}



// FUNCTION 1412400ea FUN_1412400ea body=523 status=ok
// SIG undefined FUN_1412400ea(void)

void FUN_1412400ea(longlong param_1,longlong *param_2)

{
  bool bVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  int iVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  longlong *plVar8;
  uint uVar9;
  int iVar10;
  undefined1 auStack_98 [32];
  longlong local_78 [2];
  ulonglong *local_68;
  ulonglong local_60;
  ulonglong *local_58;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_78[0] = 0;
  local_78[1] = 0;
  iVar10 = 0;
  plVar8 = (longlong *)(**(code **)(*param_2 + 8))(param_2,0);
  local_60 = 0;
  local_68 = (ulonglong *)0x0;
  (**(code **)(*plVar8 + 0x1c8))(plVar8,&local_68,&local_60);
  uVar3 = local_60;
  puVar2 = local_68;
  local_4c = (uint)local_60;
  local_58 = local_68;
  if (0 < (int)(uint)local_60) {
    iVar10 = 0;
    uVar9 = 0x7fffffff;
    uVar6 = (uint)local_60;
    do {
      if (uVar9 == 0) {
        iVar10 = -1;
        break;
      }
      iVar4 = iVar10;
      if (((((ulonglong)local_58 & 7) == 0) && (local_4c = uVar6, 7 < uVar6)) &&
         (uVar7 = uVar9, 7 < (int)uVar9)) {
        while (uVar9 = uVar7, iVar4 = iVar10, local_4c = uVar6,
              (*local_58 & 0x8080808080808080) == 0) {
          local_58 = local_58 + 1;
          iVar10 = iVar10 + 8;
          local_4c = uVar6 - 8;
          uVar9 = uVar7 - 8;
          bVar1 = (int)uVar6 < 0x10;
          uVar6 = local_4c;
          iVar4 = iVar10;
          if ((bVar1) || (bVar1 = uVar7 < 0x10, uVar7 = uVar9, bVar1)) break;
        }
      }
LAB_1412401d5:
      do {
        iVar10 = iVar4;
        if (((int)uVar6 < 1) || ((int)uVar9 < 1)) break;
        uVar7 = FUN_14003e942(&local_58,&local_4c);
        uVar6 = local_4c;
        if (uVar7 < 0x10000) {
          uVar9 = uVar9 - 1;
          iVar4 = iVar10 + 1;
          if (0x7f < uVar7) goto LAB_1412401d5;
        }
        else {
          if (1 < uVar9) {
            uVar9 = uVar9 - 2;
            iVar4 = iVar10 + 2;
            goto LAB_1412401d5;
          }
          uVar9 = 0;
        }
        iVar10 = iVar10 + 1;
        iVar4 = iVar10;
      } while (((ulonglong)local_58 & 7) != 0);
    } while (0 < (int)uVar6);
  }
  FUN_1409ee492(local_78,iVar10 + 1,1);
  *(undefined2 *)(local_78[0] + (longlong)iVar10 * 2) = 0;
  FUN_1446e71a3(local_78[0],(longlong)iVar10,puVar2,uVar3 & 0xffffffff);
  plVar8 = (longlong *)(**(code **)(*param_2 + 8))(param_2,1);
  (**(code **)(*plVar8 + 0x220))(plVar8,&local_58);
  cVar5 = (**(code **)(*param_2 + 0x30))(param_2);
  if (cVar5 == '\0') {
    (**(code **)(param_1 + 0x10))
              ((longlong)*(int *)(param_1 + 0x18) + *(longlong *)(param_1 + 8),local_78,
               (ulonglong)local_58 & 0xffffffff);
    (**(code **)(*param_2 + 0x20))(param_2);
  }
  if (local_78[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412402f6 FUN_1412402f6 body=549 status=ok
// SIG undefined FUN_1412402f6(void)

void FUN_1412402f6(undefined8 param_1,longlong *param_2,int param_3)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  ushort uVar7;
  ushort uVar8;
  
  iVar1 = (int)param_2[1];
  if (iVar1 == DAT_14cbdb590) {
    if (1 < iVar1) {
      lVar3 = 0;
      while( true ) {
        uVar7 = *(ushort *)(*param_2 + lVar3);
        uVar6 = (ulonglong)uVar7;
        uVar8 = *(ushort *)(DAT_14cbdb588 + lVar3);
        if (uVar7 != uVar8) break;
        if (uVar7 == 0) goto LAB_141240414;
LAB_1412403ea:
        lVar3 = lVar3 + 2;
      }
      if ((uVar8 | uVar7) < 0x80) {
        uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
        uVar4 = (ulonglong)uVar8;
        uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar4];
        if ((&DAT_149e05da0)[uVar6] == (&DAT_149e05da0)[uVar4]) goto LAB_1412403ea;
      }
      if (uVar7 != uVar8) goto LAB_14124031d;
    }
LAB_141240414:
    if (2 < param_3) {
      puVar5 = &DAT_14cbdb418;
      if (param_3 != 3) goto LAB_141240430;
      puVar2 = &DAT_14cbdb408;
LAB_141240459:
      FUN_140de1078(param_1,puVar2,0,0);
      goto LAB_141240430;
    }
    puVar2 = &DAT_14cbdb428;
    puVar5 = &DAT_14cbdb438;
  }
  else {
    if (DAT_14cbdb590 + iVar1 == 1) goto LAB_141240414;
LAB_14124031d:
    if (iVar1 == DAT_14cbdb5a0) {
      if (1 < iVar1) {
        lVar3 = 0;
        while( true ) {
          uVar7 = *(ushort *)(*param_2 + lVar3);
          uVar6 = (ulonglong)uVar7;
          uVar8 = *(ushort *)(DAT_14cbdb598 + lVar3);
          if (uVar7 != uVar8) break;
          if (uVar7 == 0) goto LAB_1412404d1;
LAB_1412404a7:
          lVar3 = lVar3 + 2;
        }
        if ((uVar8 | uVar7) < 0x80) {
          uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
          uVar4 = (ulonglong)uVar8;
          uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar4];
          if ((&DAT_149e05da0)[uVar6] == (&DAT_149e05da0)[uVar4]) goto LAB_1412404a7;
        }
        if (uVar7 != uVar8) goto LAB_141240336;
      }
LAB_1412404d1:
      if (param_3 < 3) {
        puVar2 = &DAT_14cbdb4a8;
        puVar5 = &DAT_14cbdb4b8;
        goto LAB_14124042c;
      }
      puVar5 = &DAT_14cbdb498;
      if (param_3 != 3) goto LAB_141240430;
      puVar2 = &DAT_14cbdb488;
      goto LAB_141240459;
    }
    if (DAT_14cbdb5a0 + iVar1 == 1) goto LAB_1412404d1;
LAB_141240336:
    if (iVar1 == DAT_14cbdb5b0) {
      if (1 < iVar1) {
        lVar3 = 0;
        while( true ) {
          uVar7 = *(ushort *)(*param_2 + lVar3);
          uVar6 = (ulonglong)uVar7;
          uVar8 = *(ushort *)(DAT_14cbdb5a8 + lVar3);
          if (uVar7 != uVar8) break;
          if (uVar7 == 0) goto LAB_1412403a0;
LAB_141240371:
          lVar3 = lVar3 + 2;
        }
        if ((uVar8 | uVar7) < 0x80) {
          uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
          uVar4 = (ulonglong)uVar8;
          uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar4];
          if ((&DAT_149e05da0)[uVar6] == (&DAT_149e05da0)[uVar4]) goto LAB_141240371;
        }
        if (uVar7 != uVar8) {
          return;
        }
      }
    }
    else if (DAT_14cbdb5b0 + iVar1 != 1) {
      return;
    }
LAB_1412403a0:
    if (2 < param_3) {
      puVar5 = &DAT_14cbdb518;
      if (param_3 != 3) goto LAB_141240430;
      puVar2 = &DAT_14cbdb508;
      goto LAB_141240459;
    }
    puVar2 = &DAT_14cbdb528;
    puVar5 = &DAT_14cbdb538;
  }
LAB_14124042c:
  if (param_3 == 2) {
    puVar5 = puVar2;
  }
LAB_141240430:
  FUN_140de1078(param_1,puVar5,0,0);
  return;
}



// FUNCTION 14124051b FUN_14124051b body=142 status=ok
// SIG undefined FUN_14124051b(void)

void FUN_14124051b(longlong param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  void *_Src;
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
  undefined8 *puVar13;
  
  if (param_3 != 0) {
    puVar13 = (undefined8 *)(param_1 + 0x30);
    do {
      uVar2 = *param_2;
      uVar3 = param_2[1];
      uVar4 = param_2[2];
      uVar5 = param_2[3];
      uVar6 = param_2[4];
      uVar7 = param_2[5];
      uVar8 = param_2[6];
      uVar9 = param_2[7];
      uVar10 = *(undefined4 *)((longlong)param_2 + 0x1d);
      uVar11 = *(undefined4 *)((longlong)param_2 + 0x21);
      uVar12 = *(undefined4 *)((longlong)param_2 + 0x25);
      *(undefined4 *)((longlong)puVar13 + -0x17) = *(undefined4 *)((longlong)param_2 + 0x19);
      *(undefined4 *)((longlong)puVar13 + -0x13) = uVar10;
      *(undefined4 *)((longlong)puVar13 + -0xf) = uVar11;
      *(undefined4 *)((longlong)puVar13 + -0xb) = uVar12;
      *(undefined4 *)(puVar13 + -4) = uVar6;
      *(undefined4 *)((longlong)puVar13 + -0x1c) = uVar7;
      *(undefined4 *)(puVar13 + -3) = uVar8;
      *(undefined4 *)((longlong)puVar13 + -0x14) = uVar9;
      *(undefined4 *)(puVar13 + -6) = uVar2;
      *(undefined4 *)((longlong)puVar13 + -0x2c) = uVar3;
      *(undefined4 *)(puVar13 + -5) = uVar4;
      *(undefined4 *)((longlong)puVar13 + -0x24) = uVar5;
      *puVar13 = 0;
      iVar1 = param_2[0xe];
      _Src = *(void **)(param_2 + 0xc);
      *(int *)(puVar13 + 1) = iVar1;
      if ((longlong)iVar1 == 0) {
        *(undefined4 *)((longlong)puVar13 + 0xc) = 0;
      }
      else {
        FUN_1412405aa(puVar13,iVar1,0);
        memcpy((void *)*puVar13,_Src,(longlong)iVar1 * 0x14);
      }
      param_2 = param_2 + 0x10;
      puVar13 = puVar13 + 8;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1412405aa FUN_1412405aa body=334 status=ok
// SIG undefined FUN_1412405aa(void)

void FUN_1412405aa(longlong param_1,int param_2,int param_3)

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
    uVar4 = (longlong)param_2 * 0x14;
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
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14124061c;
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
LAB_14124061c:
    iVar5 = (int)(uVar4 / 0x14);
    iVar7 = 0x7fffffff;
    if (param_2 <= iVar5) {
      iVar7 = iVar5;
    }
  }
  if (param_3 < iVar7) {
    FUN_1446f8d3c(param_1,0,iVar7,0x14,4);
    param_3 = iVar7;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 1412406f8 FUN_1412406f8 body=364 status=ok
// SIG undefined FUN_1412406f8(void)

undefined4 *
FUN_1412406f8(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  ulonglong uVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14124090c(param_1,local_48);
  puVar1 = (undefined4 *)param_3[1];
  uVar2 = *(undefined8 *)*param_3;
  *local_40 = uVar2;
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  uVar5 = puVar1[3];
  *(undefined4 *)(local_40 + 1) = *puVar1;
  *(undefined4 *)((longlong)local_40 + 0xc) = uVar3;
  *(undefined4 *)(local_40 + 2) = uVar4;
  *(undefined4 *)((longlong)local_40 + 0x14) = uVar5;
  *(undefined4 *)(local_40 + 3) = puVar1[4];
  *(undefined4 *)((longlong)local_40 + 0x1c) = 0xffffffff;
  local_4c = local_48[0];
  uVar11 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar8 = (uint)uVar2 & 0xffff;
  uVar11 = ((uint)uVar2 << 0x10 | uVar8) + (int)((ulonglong)uVar2 >> 0x20) +
           (uVar11 << 0x13 | uVar11 & 0xffff) + (uVar8 >> 4);
  local_58 = param_4;
  cVar6 = FUN_141240866(param_1,uVar11,local_40);
  if (cVar6 == '\0') {
    uVar8 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    if (uVar8 < 4) {
      iVar9 = 1;
    }
    else {
      uVar7 = (ulonglong)(uVar8 & 0xfffffffe) + 0xf;
      lVar10 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar10 & 0x1f);
    }
    if (((int)uVar8 < 1) || (iVar9 <= *(int *)(param_1 + 0x48))) {
      uVar11 = *(int *)(param_1 + 0x48) - 1U & uVar11;
      *(uint *)(local_40 + 4) = uVar11;
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      *(undefined4 *)((longlong)local_40 + 0x1c) =
           *(undefined4 *)
            (lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar11) * 4);
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar11) * 4) = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar9;
      FUN_141240af6(param_1);
    }
  }
  *param_2 = local_4c;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141240866 FUN_141240866 body=166 status=ok
// SIG undefined FUN_141240866(void)

void FUN_141240866(longlong *param_1,uint param_2,longlong *param_3,int *param_4,undefined1 *param_5
                  )

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 uVar6;
  longlong *plVar7;
  int iVar8;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar7 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar7 = (longlong *)param_1[8];
    }
    iVar8 = *(int *)((longlong)plVar7 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar8 != -1) {
      do {
        plVar7 = (longlong *)(*param_1 + (longlong)iVar8 * 0x24);
        if (*plVar7 == *param_3) {
          lVar4 = *param_3;
          uVar2 = *(undefined4 *)((longlong)param_3 + 4);
          lVar5 = param_3[1];
          uVar3 = *(undefined4 *)((longlong)param_3 + 0xc);
          lVar1 = param_3[2];
          *(int *)(plVar7 + 3) = (int)param_3[3];
          plVar7[2] = lVar1;
          *(int *)plVar7 = (int)lVar4;
          *(undefined4 *)((longlong)plVar7 + 4) = uVar2;
          *(int *)(plVar7 + 1) = (int)lVar5;
          *(undefined4 *)((longlong)plVar7 + 0xc) = uVar3;
          FUN_145851eb4((int)lVar4,*param_4,1);
          *param_4 = iVar8;
          uVar6 = 1;
          goto LAB_1412408d0;
        }
        iVar8 = *(int *)((longlong)plVar7 + 0x1c);
      } while (iVar8 != -1);
    }
  }
  uVar6 = 0;
LAB_1412408d0:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar6;
  }
  return;
}



// FUNCTION 14124090c FUN_14124090c body=489 status=ok
// SIG undefined FUN_14124090c(void)

int * FUN_14124090c(longlong *param_1,int *param_2)

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
      FUN_14042c636(param_1,iVar11);
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
    iVar6 = *(int *)(*param_1 + 4 + lVar3 * 0x24);
    *(int *)(param_1 + 6) = iVar6;
    iVar2 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar6 * 0x24) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar3 * 0x24 + *param_1;
  return param_2;
}



// FUNCTION 141240af6 FUN_141240af6 body=594 status=ok
// SIG undefined FUN_141240af6(void)

void FUN_141240af6(longlong *param_1)

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
        uVar2 = *(undefined8 *)(lVar14 + lVar13 * 0x24);
        uVar4 = (uint)((ulonglong)uVar2 >> 0x10);
        uVar15 = (uint)uVar2 & 0xffff;
        uVar11 = (longlong)
                 (int)(((uint)uVar2 << 0x10 | uVar15) + (int)((ulonglong)uVar2 >> 0x20) +
                       (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar15 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar10 = (int)uVar11;
        *(int *)(lVar14 + 0x20 + lVar13 * 0x24) = iVar10;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar14 + 0x1c + lVar13 * 0x24) =
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
            if (iVar3 - lVar14 == lVar13) goto LAB_141240cff;
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
LAB_141240cff:
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141240d4a FUN_141240d4a body=398 status=ok
// SIG undefined FUN_141240d4a(void)

longlong * FUN_141240d4a(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  void *pvVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  plVar2 = (longlong *)*param_2;
  *param_1 = (longlong)plVar2;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  *(int *)(param_1 + 1) = (int)param_2[1];
  param_1[2] = 0;
  iVar1 = (int)param_2[3];
  pvVar3 = (void *)param_2[2];
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],pvVar3,(longlong)iVar1 * 2);
  }
  param_1[4] = 0;
  iVar1 = (int)param_2[5];
  pvVar3 = (void *)param_2[4];
  *(int *)(param_1 + 5) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 4,iVar1,0);
    memcpy((void *)param_1[4],pvVar3,(longlong)iVar1 * 2);
  }
  param_1[6] = 0;
  iVar1 = (int)param_2[7];
  pvVar3 = (void *)param_2[6];
  *(int *)(param_1 + 7) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 6,iVar1,0);
    memcpy((void *)param_1[6],pvVar3,(longlong)iVar1 * 2);
  }
  param_1[8] = 0;
  iVar1 = (int)param_2[9];
  lVar5 = param_2[8];
  *(int *)(param_1 + 9) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  }
  else {
    FUN_141240f04(param_1 + 8,iVar1,0);
    FUN_141240ed8(param_1[8],lVar5,iVar1);
  }
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[10] = param_2[10];
  uVar4 = FUN_14477b664(param_2[0xb]);
  lVar5 = FUN_14477b664(uVar4);
  param_1[0xb] = lVar5;
  param_1[0xc] = param_2[0xc];
  return param_1;
}



// FUNCTION 141240ed8 FUN_141240ed8 body=44 status=ok
// SIG undefined FUN_141240ed8(void)

void FUN_141240ed8(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = 0;
    do {
      *(undefined8 *)(param_1 + lVar1) = *(undefined8 *)(param_2 + lVar1);
      *(undefined4 *)(param_1 + 8 + lVar1) = *(undefined4 *)(param_2 + 8 + lVar1);
      *(undefined8 *)(param_1 + 0x10 + lVar1) = 0;
      lVar1 = lVar1 + 0x18;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 141240f04 FUN_141240f04 body=334 status=ok
// SIG undefined FUN_141240f04(void)

void FUN_141240f04(longlong param_1,int param_2,int param_3)

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
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_141240f76;
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
LAB_141240f76:
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



// FUNCTION 141241052 FUN_141241052 body=45 status=ok
// SIG undefined FUN_141241052(void)

undefined8 FUN_141241052(undefined8 param_1,int param_2)

{
  FUN_141241080();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x1340);
  }
  return param_1;
}



// FUNCTION 141241080 FUN_141241080 body=1574 status=ok
// SIG undefined FUN_141241080(void)

void FUN_141241080(undefined8 *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b486c90;
  param_1[0x219] = 0;
  FUN_14076ba36(param_1 + 0x21a);
  param_1[0x1ca] = 0;
  FUN_14076ba36(param_1 + 0x1cb);
  param_1[0x17b] = 0;
  FUN_14076ba36(param_1 + 0x17c);
  param_1[300] = 0;
  FUN_14076ba36(param_1 + 0x12d);
  plVar1 = param_1 + 0x126;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x12a) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x129)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x129)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = param_1 + 0x11f;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x123) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x122)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x122)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = param_1 + 0x118;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x11c) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x11b)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x11b)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = param_1 + 0x109;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x10d) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x10c)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x10c)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = param_1 + 0x101;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x105) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x104)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x104)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = param_1 + 0xfa;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0xfe) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0xfd)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0xfd)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = param_1 + 0xf1;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0xf5) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0xf4)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0xf4)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = param_1 + 0xea;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0xee) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0xed)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0xed)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = param_1 + 0xe3;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0xe7) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0xe6)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0xe6)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = param_1 + 0xdc;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0xe0) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0xdf)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0xdf)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = param_1 + 0xd5;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0xd9) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0xd8)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0xd8)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = param_1 + 0xce;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0xd2) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0xd1)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0xd1)) {
    FUN_1400020a8(*plVar1);
  }
  *param_1 = &PTR_FUN_14ac52c60;
  param_1[0x10] = &PTR_FUN_14ac52cf0;
  if (param_1[0x31] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2f] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2d] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x27] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x25] != 0) {
    FUN_1400020a8();
  }
  FUN_14076bd02(param_1 + 0x10);
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



// FUNCTION 1412416a6 FUN_1412416a6 body=710 status=ok
// SIG undefined FUN_1412416a6(void)

void FUN_1412416a6(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined1 local_48 [8];
  code *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar8 = *param_2;
  if (lVar8 == 0) goto LAB_14124182b;
  lVar5 = param_2[1];
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
  }
  plVar6 = *(longlong **)(param_1 + 0x3178);
  *(longlong *)(param_1 + 0x3170) = lVar8;
  *(longlong *)(param_1 + 0x3178) = lVar5;
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
    lVar8 = *(longlong *)(param_1 + 0x3170);
    if (lVar8 == 0) goto LAB_14124182b;
  }
  local_40 = FUN_1415dddf8;
  local_38 = 0;
  FUN_141241b12(lVar8 + 0x18,local_48,param_1);
  if (*(char *)(param_1 + 0x3560) == '\x01') {
    lVar8 = *(longlong *)(param_1 + 0x3170);
    local_40 = (code *)0x0;
    local_38 = 0;
    FUN_14867b726(&local_40,param_1 + 0x3550);
    FUN_140ebcfd8(lVar8 + 0x18,local_48,&local_40);
    FUN_1449db362(&local_40);
  }
  *(undefined1 *)(param_1 + 0x3168) = *(undefined1 *)(*(longlong *)(param_1 + 0x3170) + 0x40);
  lVar8 = *(longlong *)(param_1 + 0x3170) + 0xd8;
  if (lVar8 == 0) goto LAB_14124182b;
  FUN_14124196e(lVar8,param_1);
  lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x3170) + 0x378);
  if (lVar5 == 0) goto LAB_14124182b;
  if (lVar5 != *(longlong *)(param_1 + 0x31b8)) goto LAB_14124177f;
  if ((param_1 == 0) || (*(longlong *)(param_1 + 0xa8) == 0)) {
LAB_141241887:
    FUN_141241a02(lVar8,param_1 + 0x3190);
  }
  else {
    cVar3 = *(char *)(*(longlong *)(param_1 + 0xa8) + 0x178);
    if (cVar3 == '\x02') {
      if ((*(byte *)(lVar5 + 0x101) & 0x10) == 0) goto LAB_141241887;
    }
    else if (cVar3 != '\x03') goto LAB_141241887;
LAB_14124177f:
    if (((((*(int *)(param_1 + 0x356c) == 0) ||
          (uVar4 = *(uint *)(param_1 + 0x3568), (int)uVar4 < 0)) || (DAT_14c9647dc <= (int)uVar4))
        || ((lVar7 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8), lVar7 == 0 ||
            (*(int *)(lVar7 + 0x10) != *(int *)(param_1 + 0x356c))))) ||
       ((*(uint *)(lVar7 + 8) & 0x10200000) != 0)) {
      local_58 = *(undefined8 *)(&DAT_00001ce8 + param_1);
    }
    else {
      local_58 = FUN_14479d2ce();
    }
    FUN_141241e66(lVar8,param_1 + 0x3548,lVar5,param_1 + 0x3570);
  }
  if ((((*(byte *)(lVar5 + 0x101) & 0x10) != 0) && ((*(byte *)(lVar5 + 0x104) & 1) != 0)) &&
     ((*(longlong *)(param_1 + 0xa8) != 0 &&
      ((*(char *)(*(longlong *)(param_1 + 0xa8) + 0x178) == '\x03' &&
       (*(int *)(param_1 + 0x354c) == 2)))))) {
    FUN_1407b9c72(param_1,&DAT_14cb760e0);
  }
LAB_14124182b:
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
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14124196e FUN_14124196e body=148 status=ok
// SIG undefined FUN_14124196e(void)

void FUN_14124196e(uint *param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  bool bVar5;
  
  if (param_2 == 0) {
    *param_1 = 0;
    uVar2 = 0;
  }
  else {
    uVar2 = *(uint *)(param_2 + 0xc);
    *param_1 = uVar2;
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar3 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar3 = 0;
    }
    uVar2 = *(uint *)(lVar3 + 0x10);
    if (*(uint *)(lVar3 + 0x10) == 0) {
      LOCK();
      iVar1 = DAT_14c964868 + 1;
      UNLOCK();
      uVar4 = DAT_14c964868 + 1;
      bVar5 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar1;
      if (bVar5) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar4);
      }
      LOCK();
      uVar2 = *(uint *)(lVar3 + 0x10);
      bVar5 = uVar2 == 0;
      if (bVar5) {
        *(uint *)(lVar3 + 0x10) = uVar4;
        uVar2 = 0;
      }
      UNLOCK();
      if (bVar5) {
        uVar2 = uVar4;
      }
    }
  }
  param_1[1] = uVar2;
  return;
}



// FUNCTION 141241a02 FUN_141241a02 body=270 status=ok
// SIG undefined FUN_141241a02(void)

undefined8 FUN_141241a02(uint *param_1,longlong param_2)

{
  uint uVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_68 [32];
  double *local_48;
  undefined8 local_40;
  double local_30;
  double local_28;
  double local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_1[1] != 0) {
    uVar1 = *param_1;
    uVar4 = 0;
    if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_141241aec;
    puVar3 = (undefined8 *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if ((puVar3 != (undefined8 *)0x0) &&
       ((*(uint *)(puVar3 + 2) == param_1[1] && ((*(uint *)(puVar3 + 1) & 0x10200000) == 0)))) {
      if ((*(uint *)(puVar3 + 1) & 0x10200000) == 0) {
        plVar5 = (longlong *)*puVar3;
      }
      else {
        plVar5 = (longlong *)0x0;
      }
      cVar2 = (**(code **)(*plVar5 + 0x600))();
      if (cVar2 != '\0') {
        local_20 = *(double *)(param_2 + 0x70) * 0.01;
        local_28 = *(double *)(param_2 + 0x68) * 0.01;
        local_30 = *(double *)(param_2 + 0x60) * 0.01;
        local_48 = &local_30;
        local_40 = 0;
        uVar4 = FUN_143cec00c(param_1,param_2 + 8,*(undefined8 *)(param_2 + 0x28),param_2 + 0x30);
        goto LAB_141241aec;
      }
    }
  }
  uVar4 = 0;
LAB_141241aec:
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141241b12 FUN_141241b12 body=772 status=ok
// SIG undefined FUN_141241b12(void)

undefined8 * FUN_141241b12(longlong *param_1,undefined8 *param_2,longlong param_3,longlong *param_4)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  undefined1 auStack_88 [40];
  longlong *local_60;
  int local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar9 = param_4[1];
  lVar2 = *param_4;
  local_60 = (longlong *)0x0;
  local_58 = 0;
  FUN_1446efa72(&local_60,0,3,0x10);
  plVar3 = local_60;
  local_58 = 3;
  *local_60 = (longlong)&PTR_LAB_14b3e9c20;
  LOCK();
  UNLOCK();
  lVar7 = DAT_14c758608 + 1;
  lVar11 = DAT_14c758608 + 1;
  if (lVar7 == 0) {
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 2;
    lVar11 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar11;
  local_60[2] = lVar7;
  *local_60 = (longlong)&PTR_FUN_14b3f26e0;
  local_60[3] = 0;
  iVar10 = 0;
  if (param_3 != 0) {
    uVar1 = *(uint *)(param_3 + 0xc);
    *(uint *)(local_60 + 3) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar11 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar11 = 0;
    }
    iVar10 = *(int *)(lVar11 + 0x10);
    if (*(int *)(lVar11 + 0x10) == 0) {
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
      iVar10 = *(int *)(lVar11 + 0x10);
      bVar12 = iVar10 == 0;
      if (bVar12) {
        *(int *)(lVar11 + 0x10) = iVar5;
        iVar10 = 0;
      }
      UNLOCK();
      if (bVar12) {
        iVar10 = iVar5;
      }
    }
  }
  *(int *)((longlong)plVar3 + 0x1c) = iVar10;
  plVar3[4] = lVar2;
  *(int *)(plVar3 + 5) = (int)lVar9;
  *param_2 = 0;
  if (((local_58 == 0) || (local_60 == (longlong *)0x0)) ||
     (cVar4 = (**(code **)(*local_60 + 0x30))(), cVar4 == '\0')) {
    if (local_58 != 0) {
      if (local_60 == (longlong *)0x0) goto LAB_141241cc6;
      (**(code **)*local_60)(local_60,0);
      FUN_1446efa72(&local_60,0,0,0x10);
      goto LAB_141241cb0;
    }
  }
  else {
    if (*(int *)((longlong)param_1 + 0x14) < 1) {
      iVar10 = (int)param_1[1];
      iVar5 = (int)param_1[2] + -1;
      *(int *)(param_1 + 2) = iVar5;
      if (iVar5 <= iVar10) {
        iVar5 = iVar10;
        if (0 < iVar10) {
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
        if ((iVar8 < iVar10) && (*(int *)((longlong)param_1 + 0xc) != iVar5)) {
          FUN_14045812c();
        }
      }
    }
    uVar6 = 0;
    if ((local_58 != 0) && (local_60 != (longlong *)0x0)) {
      (**(code **)(*local_60 + 0x38))(local_60,&local_50);
      uVar6 = local_50;
    }
    *param_2 = uVar6;
    iVar10 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar10 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar10 + 1U) {
      FUN_1447a71f6(param_1,iVar10);
    }
    lVar2 = *param_1;
    lVar9 = (longlong)iVar10 * 0x10;
    *(undefined8 *)(lVar2 + lVar9) = 0;
    *(undefined4 *)(lVar2 + 8 + lVar9) = 0;
    *(longlong **)(lVar2 + lVar9) = local_60;
    local_60 = (longlong *)0x0;
    *(int *)(lVar2 + 8 + lVar9) = local_58;
LAB_141241cb0:
    local_58 = 0;
  }
  if (local_60 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_141241cc6:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 141241e66 FUN_141241e66 body=2698 status=ok
// SIG undefined FUN_141241e66(void)

undefined8
FUN_141241e66(uint *param_1,undefined8 *param_2,longlong param_3,undefined4 *param_4,
             undefined8 param_5)

{
  double *pdVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  undefined1 auVar5 [16];
  double dVar6;
  undefined1 auVar7 [16];
  undefined4 *puVar8;
  uint *puVar9;
  longlong **pplVar10;
  char cVar11;
  uint uVar12;
  int iVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  longlong lVar16;
  double *pdVar17;
  undefined4 uVar18;
  uint uVar19;
  ulonglong uVar20;
  longlong *plVar21;
  longlong lVar22;
  double *pdVar23;
  longlong *plVar24;
  double dVar25;
  undefined1 auStack_1a8 [32];
  double *local_188;
  undefined8 local_180;
  double local_178;
  double dStack_170;
  double local_168;
  double local_160;
  double dStack_158;
  double local_150;
  longlong *local_148;
  longlong local_140;
  double local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  double local_128;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  double *local_f8;
  longlong local_f0;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined8 local_d0;
  undefined8 uStack_c8;
  double local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  double local_a8;
  undefined1 local_a0;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  if (param_1[1] == 0) goto LAB_14124249d;
  uVar19 = *param_1;
  uVar15 = 0;
  if (((int)uVar19 < 0) || (DAT_14c9647dc <= (int)uVar19)) goto LAB_14124249f;
  puVar14 = (undefined8 *)
            ((ulonglong)((uVar19 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar19 >> 0x10) * 8));
  if ((puVar14 != (undefined8 *)0x0) &&
     ((*(uint *)(puVar14 + 2) == param_1[1] && ((*(uint *)(puVar14 + 1) & 0x10200000) == 0)))) {
    if ((*(uint *)(puVar14 + 1) & 0x10200000) == 0) {
      plVar24 = (longlong *)*puVar14;
    }
    else {
      plVar24 = (longlong *)0x0;
    }
    cVar11 = (**(code **)(*plVar24 + 0x600))();
    if (cVar11 != '\0') {
      if (param_1[1] == 0) {
LAB_1412424ef:
        plVar24 = (longlong *)0x0;
      }
      else {
        uVar19 = *param_1;
        plVar24 = (longlong *)0x0;
        if ((-1 < (int)uVar19) && ((int)uVar19 < DAT_14c9647dc)) {
          puVar14 = (undefined8 *)
                    ((ulonglong)((uVar19 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar19 >> 0x10) * 8));
          if ((puVar14 == (undefined8 *)0x0) ||
             ((*(uint *)(puVar14 + 2) != param_1[1] || ((*(uint *)(puVar14 + 1) & 0x10200000) != 0))
             )) goto LAB_1412424ef;
          plVar24 = (longlong *)*puVar14;
        }
      }
      cVar11 = (**(code **)(*plVar24 + 0xe50))();
      uVar15 = 0;
      if ((param_3 == 0) || (cVar11 == '\0')) goto LAB_14124249f;
      uVar19 = param_1[1];
      if (uVar19 == 0) goto LAB_14124249d;
      uVar12 = *param_1;
      uVar15 = 0;
      if (((int)uVar12 < 0) || (DAT_14c9647dc <= (int)uVar12)) goto LAB_14124249f;
      uVar20 = (ulonglong)(uVar12 >> 0x10);
      uVar12 = uVar12 & 0xffff;
      plVar24 = (longlong *)((ulonglong)(uVar12 * 0x18) + *(longlong *)(DAT_14c9647c8 + uVar20 * 8))
      ;
      if ((((plVar24 == (longlong *)0x0) ||
           ((((*(uint *)(plVar24 + 2) != uVar19 || ((*(uint *)(plVar24 + 1) & 0x10200000) != 0)) ||
             (*plVar24 == 0)) || (lVar16 = *(longlong *)(*plVar24 + 0xa8), lVar16 == 0)))) ||
          ((cVar11 = *(char *)(lVar16 + 0x178), cVar11 != '\x03' &&
           ((cVar11 != '\x02' || ((*(byte *)(param_3 + 0x101) & 0x10) == 0)))))) ||
         ((param_1[0xa6] & 8) != 0)) goto LAB_14124249d;
      plVar24 = (longlong *)((ulonglong)(uVar12 * 0x18) + *(longlong *)(DAT_14c9647c8 + uVar20 * 8))
      ;
      if (((plVar24 == (longlong *)0x0) || (*(uint *)(plVar24 + 2) != uVar19)) ||
         ((*(uint *)(plVar24 + 1) & 0x10200000) != 0)) {
        lVar16 = 0;
      }
      else {
        lVar16 = *plVar24;
      }
      plVar24 = *(longlong **)(&DAT_00001ce8 + lVar16);
      lVar16 = *(longlong *)(DAT_14c9647c8 + uVar20 * 8);
      plVar21 = (longlong *)((ulonglong)(uVar12 * 0x18) + lVar16);
      if (((plVar21 == (longlong *)0x0) || (*(uint *)(plVar21 + 2) != uVar19)) ||
         ((*(uint *)(plVar21 + 1) & 0x10200000) != 0)) {
        lVar22 = 0;
      }
      else {
        lVar22 = *plVar21;
      }
      plVar21 = *(longlong **)(*(longlong *)(&DAT_00001ce8 + lVar22) + 0x3c0);
      local_148 = plVar24;
      local_140 = param_3;
      if (plVar21 == (longlong *)0x0) {
        plVar21 = (longlong *)(lVar16 + (ulonglong)(uVar12 * 0x18));
        if (((plVar21 == (longlong *)0x0) || (*(uint *)(plVar21 + 2) != uVar19)) ||
           ((*(uint *)(plVar21 + 1) & 0x10200000) != 0)) {
          lVar16 = 0;
        }
        else {
          lVar16 = *plVar21;
        }
        dVar25 = *(double *)(&DAT_00001ce8 + lVar16);
        lVar16 = *(longlong *)((longlong)dVar25 + 0x1c8);
        if (lVar16 == 0) {
          local_128 = DAT_14c846508;
          uStack_130 = (undefined4)DAT_14c846500;
          uStack_12c = DAT_14c846500._4_4_;
        }
        else {
          puVar8 = *(undefined4 **)(lVar16 + 0x240);
          puVar9 = *(uint **)(lVar16 + 0x248);
          plVar21 = *(longlong **)(lVar16 + 0x250);
          pplVar10 = *(longlong ***)(lVar16 + 600);
          pdVar17 = *(double **)(lVar16 + 0x228);
          uVar18 = 0;
          local_118 = puVar8;
          uStack_110 = puVar9;
          local_108 = plVar21;
          uStack_100 = pplVar10;
          if (pdVar17 == (double *)0x0) {
            uVar18 = 0x40;
            pdVar17 = (double *)FUN_14001cc68(0x40,0x10);
            dVar25 = DAT_14c8463d8;
            *pdVar17 = DAT_14c8463d0;
            pdVar17[1] = dVar25;
            dVar25 = DAT_14c8463e8;
            pdVar17[2] = DAT_14c8463e0;
            pdVar17[3] = dVar25;
            dVar25 = (double)CONCAT44(DAT_14c846500._4_4_,(undefined4)DAT_14c846500);
            pdVar17[4] = (double)CONCAT44(DAT_14c8464f8._4_4_,(undefined4)DAT_14c8464f8);
            pdVar17[5] = dVar25;
            dVar25 = DAT_14c846508;
            pdVar17[6] = DAT_14c846508;
            *(double **)(lVar16 + 0x228) = pdVar17;
          }
          auVar5._8_4_ = (int)-(ulonglong)((double)puVar9 != pdVar17[1]);
          auVar5._0_8_ = -(ulonglong)((double)puVar8 != *pdVar17);
          auVar5._12_4_ = (int)(-(ulonglong)((double)puVar9 != pdVar17[1]) >> 0x20);
          iVar13 = movmskpd(SUB84(dVar25,0),auVar5);
          auVar7._8_4_ = (int)-(ulonglong)((double)pplVar10 != pdVar17[3]);
          auVar7._0_8_ = -(ulonglong)((double)plVar21 != pdVar17[2]);
          auVar7._12_4_ = (int)(-(ulonglong)((double)pplVar10 != pdVar17[3]) >> 0x20);
          uVar19 = movmskpd(uVar18,auVar7);
          if ((uVar19 & 0x3fffffff) != 0 || iVar13 != 0) {
            *(undefined4 *)(pdVar17 + 2) = (undefined4)local_108;
            *(undefined4 *)((longlong)pdVar17 + 0x14) = local_108._4_4_;
            *(int *)(pdVar17 + 3) = (int)uStack_100;
            *(undefined4 *)((longlong)pdVar17 + 0x1c) = uStack_100._4_4_;
            *(undefined4 *)pdVar17 = (undefined4)local_118;
            *(undefined4 *)((longlong)pdVar17 + 4) = local_118._4_4_;
            *(undefined4 *)(pdVar17 + 1) = (undefined4)uStack_110;
            *(undefined4 *)((longlong)pdVar17 + 0xc) = uStack_110._4_4_;
            FUN_1448052ee(&local_118,&local_138);
            pdVar17[6] = local_128;
            pdVar17[4] = local_138;
            pdVar17[5] = (double)CONCAT44(uStack_12c,uStack_130);
          }
          local_128 = pdVar17[6];
          uStack_130 = *(undefined4 *)(pdVar17 + 5);
          uStack_12c = *(undefined4 *)((longlong)pdVar17 + 0x2c);
        }
      }
      else {
        (**(code **)(*plVar21 + 0x680))(plVar21,&local_138);
      }
      local_138 = 0.0;
      dVar6 = (double)FUN_144719204(0,0);
      dVar4 = (double)FUN_144719204(uStack_130);
      dVar25 = sin(dVar6 * 0.017453292519943295);
      dVar6 = cos(dVar6 * 0.017453292519943295);
      dVar3 = sin(dVar4 * 0.017453292519943295);
      local_178 = cos(dVar4 * 0.017453292519943295);
      dStack_170 = dVar3 * dVar6;
      local_178 = local_178 * dVar6;
      local_f8 = &local_160;
      local_108 = &local_140;
      uStack_100 = &local_148;
      lVar16 = param_3;
      local_168 = dVar25;
      local_160 = local_178;
      dStack_158 = dStack_170;
      local_150 = dVar25;
      local_118 = param_4;
      uStack_110 = param_1;
      if ((*(byte *)(param_3 + 0xf9) & 2) == 0) {
LAB_1412421e9:
        FUN_143cf56fe(&local_118,&local_178,lVar16 + 0x9d0);
      }
      else {
        pcVar2 = *(code **)(*plVar24 + 0x5e8);
        if (pcVar2 == FUN_140972dde) {
          lVar16 = plVar24[0x76];
          if (lVar16 == 0) {
            pcVar2 = *(code **)(*plVar24 + 0x5f8);
            if (pcVar2 == FUN_144784df4) {
              if (*(code **)(plVar24[0x784] + 0x18) == (code *)&LAB_144904684) {
                if (*(int *)((longlong)plVar24 + 0x75b4) != 0) {
                  uVar19 = *(uint *)(plVar24 + 0xeb6);
                  lVar16 = 0;
                  if (((int)uVar19 < 0) || (DAT_14c9647dc <= (int)uVar19)) goto LAB_1412426b9;
                  plVar21 = (longlong *)
                            ((ulonglong)((uVar19 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar19 >> 0x10) * 8));
                  if ((plVar21 != (longlong *)0x0) &&
                     (((int)plVar21[2] == *(int *)((longlong)plVar24 + 0x75b4) &&
                      ((*(uint *)(plVar21 + 1) & 0x10200000) == 0)))) {
                    if ((*(uint *)(plVar21 + 1) & 0x10200000) == 0) {
                      lVar16 = *plVar21;
                    }
                    else {
                      lVar16 = 0;
                    }
                    lVar16 = lVar16 + 0x110;
                    goto LAB_14124284e;
                  }
                }
              }
              else {
                lVar16 = (**(code **)(plVar24[0x784] + 0x18))();
LAB_14124284e:
                if (lVar16 != 0) {
                  lVar16 = *(longlong *)(lVar16 + 0x20);
                  goto LAB_14124285b;
                }
              }
            }
            else {
              lVar16 = (*pcVar2)();
LAB_14124285b:
              if (lVar16 != 0) {
                lVar16 = *(longlong *)(lVar16 + 0x3b0);
                goto LAB_1412426b9;
              }
            }
            lVar16 = 0;
          }
        }
        else {
          lVar16 = (*pcVar2)();
        }
LAB_1412426b9:
        if (param_1[1] == 0) {
LAB_141242870:
          lVar22 = 0;
        }
        else {
          uVar19 = *param_1;
          lVar22 = 0;
          if ((-1 < (int)uVar19) && ((int)uVar19 < DAT_14c9647dc)) {
            plVar24 = (longlong *)
                      ((ulonglong)((uVar19 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar19 >> 0x10) * 8));
            if ((plVar24 == (longlong *)0x0) ||
               ((*(uint *)(plVar24 + 2) != param_1[1] ||
                ((*(uint *)(plVar24 + 1) & 0x10200000) != 0)))) goto LAB_141242870;
            lVar22 = *plVar24;
          }
        }
        pdVar17 = (double *)(lVar22 + 0x138);
        pdVar1 = (double *)(lVar22 + 0x130);
        pdVar23 = (double *)(lVar22 + 0x128);
        if (lVar16 != 0) {
          pdVar23 = (double *)(lVar22 + 0x388);
          pdVar1 = (double *)(lVar22 + 0x390);
          pdVar17 = (double *)(lVar22 + 0x398);
        }
        if ((((*pdVar23 == 0.0) && (!NAN(*pdVar23))) && (*pdVar1 == 0.0)) &&
           (((!NAN(*pdVar1) && (*pdVar17 == 0.0)) && (lVar16 = local_140, !NAN(*pdVar17)))))
        goto LAB_1412421e9;
        FUN_143cf56fe(&local_118,&local_178,local_140 + 0xa40);
        if (((local_178 == 0.0) && (!NAN(local_178))) &&
           ((dStack_170 == 0.0 &&
            (((!NAN(dStack_170) && (local_168 == 0.0)) && (lVar16 = local_140, !NAN(local_168)))))))
        goto LAB_1412421e9;
      }
      if (*(char *)(local_140 + 0x168) == '\0') {
        dVar25 = local_178 * local_178 + dStack_170 * dStack_170;
        local_168 = 0.0;
        if ((dVar25 != 1.0) || (NAN(dVar25))) {
          if (dVar25 < 9.99999993922529e-09) {
            local_178 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
            dStack_170 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
            local_168 = DAT_14c8464f0;
          }
          else {
            dVar25 = 1.0 / SQRT(dVar25);
            local_168 = dVar25 * 0.0;
            dStack_170 = dStack_170 * dVar25;
            local_178 = local_178 * dVar25;
          }
        }
      }
      uVar19 = param_1[1];
      if (uVar19 == 0) {
LAB_141242503:
        lVar16 = 0;
      }
      else {
        uVar12 = *param_1;
        lVar16 = 0;
        if ((-1 < (int)uVar12) && ((int)uVar12 < DAT_14c9647dc)) {
          plVar24 = (longlong *)
                    ((ulonglong)((uVar12 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8));
          if ((plVar24 == (longlong *)0x0) ||
             ((*(uint *)(plVar24 + 2) != uVar19 || ((*(uint *)(plVar24 + 1) & 0x10200000) != 0))))
          goto LAB_141242503;
          lVar16 = *plVar24;
        }
      }
      if ((*(longlong *)(lVar16 + 0xa8) != 0) &&
         (*(char *)(*(longlong *)(lVar16 + 0xa8) + 0x178) == '\x03')) {
        if (uVar19 == 0) {
LAB_14124250a:
          uVar15 = 0;
        }
        else {
          uVar12 = *param_1;
          uVar15 = 0;
          if ((-1 < (int)uVar12) && ((int)uVar12 < DAT_14c9647dc)) {
            puVar14 = (undefined8 *)
                      ((ulonglong)((uVar12 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8));
            if ((puVar14 == (undefined8 *)0x0) ||
               ((*(uint *)(puVar14 + 2) != uVar19 || ((*(uint *)(puVar14 + 1) & 0x10200000) != 0))))
            goto LAB_14124250a;
            uVar15 = *puVar14;
          }
        }
        local_118 = (undefined4 *)((ulonglong)local_118 & 0xffffffffffffff00);
        local_f8 = (double *)((ulonglong)local_f8 & 0xffffffffffffff00);
        local_f0 = 0;
        uStack_e8 = 0;
        uStack_e4 = 0;
        uStack_e0 = 0;
        uStack_dc = 0;
        uStack_d8 = 0;
        local_d0 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
        uStack_c8 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
        local_c0 = DAT_14c8464f0;
        local_b8 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
        uStack_b0 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
        local_a8 = DAT_14c8464f0;
        local_a0 = 0;
        uStack_110 = (uint *)*param_2;
        FUN_1403ed422(&local_108,param_2 + 1);
        if (DAT_14c950c29 == '\x01') {
          FUN_1456cec3c(param_3);
        }
        uStack_e8 = *param_4;
        uStack_e4 = param_4[1];
        uStack_e0 = param_4[2];
        uStack_dc = param_4[3];
        local_d0 = *(undefined8 *)(param_4 + 6);
        uStack_c8 = *(undefined8 *)(param_4 + 8);
        local_c0 = *(double *)(param_4 + 10);
        uStack_d8 = (undefined4)*(undefined8 *)(param_4 + 4);
        uStack_d4 = (undefined4)((ulonglong)*(undefined8 *)(param_4 + 4) >> 0x20);
        local_a8 = local_168 * 100.0;
        uStack_b0 = dStack_170 * 100.0;
        local_b8 = local_178 * 100.0;
        local_f0 = param_3;
        FUN_141874cda(uVar15,&local_118);
        if ((char)local_f8 == '\x01') {
          if ((int)uStack_100 != 0) {
            if (local_108 == (longlong *)0x0) goto LAB_14124247b;
            (**(code **)*local_108)(local_108,0);
            FUN_1446efa72(&local_108,0,0,0x10);
            uStack_100 = (longlong **)((ulonglong)uStack_100 & 0xffffffff00000000);
          }
          if (local_108 != (longlong *)0x0) {
            FUN_1400020a8();
          }
        }
      }
LAB_14124247b:
      local_188 = &local_178;
      local_180 = param_5;
      uVar15 = FUN_143cec00c(param_1,param_2,param_3,param_4);
      goto LAB_14124249f;
    }
  }
LAB_14124249d:
  uVar15 = 0;
LAB_14124249f:
  if ((local_90 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return uVar15;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412428f2 FUN_1412428f2 body=25 status=ok
// SIG undefined FUN_1412428f2(void)

undefined8 FUN_1412428f2(longlong param_1)

{
  (**(code **)(param_1 + 0x20))((longlong)*(int *)(param_1 + 0x28) + *(longlong *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 14124290c FUN_14124290c body=1571 status=ok
// SIG undefined FUN_14124290c(void)

void FUN_14124290c(longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  char cVar7;
  int iVar8;
  longlong *plVar9;
  uint *puVar10;
  longlong *plVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  ulonglong uVar15;
  uint uVar16;
  longlong lVar17;
  longlong lVar18;
  ulonglong uVar19;
  int iVar20;
  undefined1 auStack_f8 [40];
  longlong *local_d0;
  longlong *local_c8;
  longlong *local_c0;
  longlong *local_b8;
  undefined8 *local_b0;
  uint *local_a8;
  undefined8 local_a0;
  longlong *local_98;
  undefined8 local_90;
  longlong *local_88;
  longlong *local_80;
  longlong *local_78;
  undefined8 local_70;
  longlong local_68;
  longlong *plStack_60;
  undefined8 local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_b8 = param_2;
  local_b0 = param_3;
  (**(code **)(*param_2 + 0x10))(param_2,&local_70);
  FUN_140b708a0(param_1);
  local_58 = local_70;
  plVar9 = (longlong *)FUN_1401e3228();
  if (plVar9 == (longlong *)0x0) {
    local_68 = 0;
    plStack_60 = (longlong *)0x0;
  }
  else {
    (**(code **)(*plVar9 + 0x28))(plVar9,&local_68);
    if (local_68 != 0) {
      iVar4 = (int)param_1[0x1b];
      if (iVar4 == 0) {
        uVar19 = 1;
        uVar15 = 0;
        iVar8 = 0;
        iVar20 = 0;
      }
      else {
        puVar10 = (uint *)param_1[0x1a];
        if ((uint *)param_1[0x1a] == (uint *)0x0) {
          puVar10 = (uint *)(param_1 + 0x18);
        }
        uVar16 = *puVar10;
        if (uVar16 == 0) {
          iVar8 = iVar4 + 0x1e;
          if (-1 < iVar4 + -1) {
            iVar8 = iVar4 + -1;
          }
          uVar15 = 0;
          uVar19 = (ulonglong)(uint)(iVar8 >> 5);
          if (iVar8 >> 5 < 1) {
            uVar19 = uVar15;
          }
          iVar20 = 0;
          do {
            if (uVar19 == uVar15) goto LAB_141242c97;
            iVar20 = iVar20 + 0x20;
            uVar16 = puVar10[uVar15 + 1];
            uVar15 = uVar15 + 1;
          } while (uVar16 == 0);
        }
        else {
          uVar15 = 0;
          iVar20 = 0;
        }
        uVar19 = (ulonglong)(-uVar16 & uVar16);
        uVar3 = uVar19 * 2 + 1;
        lVar17 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar17 == 0; lVar17 = lVar17 + -1) {
          }
        }
        iVar8 = (iVar20 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
        if (iVar4 <= iVar8) {
          iVar8 = iVar4;
        }
      }
      if (iVar8 != iVar4) {
        uVar16 = 0xffffffff;
        local_a8 = (uint *)(param_1 + 0x18);
        do {
          uVar5 = *(undefined4 *)(param_1[0x16] + (longlong)iVar8 * 0xc);
          FUN_140b6c84e(param_1,&local_80,uVar5,local_b8);
          if (local_80 != (longlong *)0x0) {
            plVar11 = (longlong *)(**(code **)(*local_80 + 0x38))();
            plVar1 = local_80;
            plVar9 = (longlong *)*local_b0;
            lVar17 = *plVar9;
            if ((undefined8 *)*plVar11 == (undefined8 *)0x0) {
              if (lVar17 != 0) {
                local_d0 = (longlong *)(longlong)(int)param_1[0xb7];
                if (local_d0 != (longlong *)0x0) {
                  lVar17 = 0;
                  do {
                    if ((local_80 != (longlong *)0x0) &&
                       (local_80 == *(longlong **)(param_1[0xb6] + lVar17))) goto LAB_141242a94;
                    lVar17 = lVar17 + 0x10;
                  } while ((longlong)local_d0 << 4 != lVar17);
                }
                local_c8 = local_78;
                if (local_78 != (longlong *)0x0) {
                  LOCK();
                  *(int *)(local_78 + 1) = (int)local_78[1] + 1;
                  UNLOCK();
                  local_d0 = (longlong *)(ulonglong)*(uint *)(param_1 + 0xb7);
                }
                local_c0 = param_1 + 0xb6;
                uVar14 = (int)local_d0 + 1;
                *(uint *)(param_1 + 0xb7) = uVar14;
                if (*(uint *)((longlong)param_1 + 0x5bc) < uVar14) {
                  FUN_140b722da(local_c0,local_d0);
                }
                plVar9 = local_c8;
                lVar17 = *local_c0;
                *(longlong **)(lVar17 + (longlong)(int)local_d0 * 0x10) = plVar1;
                *(longlong **)(lVar17 + 8 + (longlong)(int)local_d0 * 0x10) = local_c8;
                if (local_c8 != (longlong *)0x0) {
                  LOCK();
                  *(int *)(local_c8 + 1) = (int)local_c8[1] + 1;
                  UNLOCK();
                  LOCK();
                  plVar1 = local_c8 + 1;
                  *(int *)plVar1 = (int)*plVar1 + -1;
                  UNLOCK();
                  if ((int)*plVar1 == 0) {
                    (**(code **)*local_c8)(local_c8);
                    LOCK();
                    piVar2 = (int *)((longlong)plVar9 + 0xc);
                    *piVar2 = *piVar2 + -1;
                    iVar8 = *piVar2;
                    UNLOCK();
                    plVar9 = local_c8;
joined_r0x000141242c5f:
                    if (iVar8 == 0) {
                      (**(code **)(*plVar9 + 0x10))();
                    }
                  }
                }
              }
            }
            else if (lVar17 == 0) {
              (**(code **)(*local_80 + 8))(local_80,&local_90);
              local_58 = local_90;
              local_50 = local_88;
              if (local_88 != (longlong *)0x0) {
                LOCK();
                *(int *)(local_88 + 1) = (int)local_88[1] + 1;
                UNLOCK();
              }
              FUN_1462222b2(param_1 + 0xac,&local_58);
              local_d0 = local_88;
              if (local_88 != (longlong *)0x0) {
                LOCK();
                plVar1 = local_88 + 1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)*plVar1 == 0) {
                  (**(code **)*local_88)();
                  LOCK();
                  piVar2 = (int *)((longlong)local_d0 + 0xc);
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (*piVar2 == 0) {
                    (**(code **)(*local_d0 + 0x10))();
                  }
                }
              }
              FUN_148a76826(param_1 + 0x12,local_b8,plVar9);
            }
            else {
              cVar7 = (*(code *)**(undefined8 **)*plVar11)();
              if (cVar7 == '\0') {
                if ((longlong)(int)param_1[0xb7] != 0) {
                  lVar17 = 0;
                  do {
                    if ((local_80 != (longlong *)0x0) &&
                       (local_80 == *(longlong **)(param_1[0xb6] + lVar17))) goto LAB_141242a94;
                    lVar17 = lVar17 + 0x10;
                  } while ((longlong)(int)param_1[0xb7] * 0x10 != lVar17);
                }
                (**(code **)(*local_80 + 8))(local_80,&local_a0);
                local_58 = local_a0;
                local_50 = local_98;
                if (local_98 != (longlong *)0x0) {
                  LOCK();
                  *(int *)(local_98 + 1) = (int)local_98[1] + 1;
                  UNLOCK();
                }
                FUN_1462222b2(param_1 + 0xac,&local_58);
                plVar9 = local_98;
                if (local_98 != (longlong *)0x0) {
                  LOCK();
                  plVar1 = local_98 + 1;
                  *(int *)plVar1 = (int)*plVar1 + -1;
                  UNLOCK();
                  if ((int)*plVar1 == 0) {
                    (**(code **)*local_98)(local_98);
                    LOCK();
                    piVar2 = (int *)((longlong)plVar9 + 0xc);
                    *piVar2 = *piVar2 + -1;
                    UNLOCK();
                    if (*piVar2 == 0) {
                      (**(code **)(*plVar9 + 0x10))(plVar9);
                    }
                  }
                }
                local_c0 = local_80;
                local_d0 = local_78;
                if (local_78 != (longlong *)0x0) {
                  LOCK();
                  *(int *)(local_78 + 1) = (int)local_78[1] + 1;
                  UNLOCK();
                }
                local_c8 = param_1 + 0xb6;
                iVar8 = (int)param_1[0xb7];
                *(uint *)(param_1 + 0xb7) = iVar8 + 1U;
                if (*(uint *)((longlong)param_1 + 0x5bc) < iVar8 + 1U) {
                  FUN_140b722da(local_c8,iVar8);
                }
                plVar9 = local_d0;
                lVar17 = *local_c8;
                *(longlong **)(lVar17 + (longlong)iVar8 * 0x10) = local_c0;
                *(longlong **)(lVar17 + 8 + (longlong)iVar8 * 0x10) = local_d0;
                if (local_d0 != (longlong *)0x0) {
                  LOCK();
                  *(int *)(local_d0 + 1) = (int)local_d0[1] + 1;
                  UNLOCK();
                  LOCK();
                  plVar1 = local_d0 + 1;
                  *(int *)plVar1 = (int)*plVar1 + -1;
                  UNLOCK();
                  if ((int)*plVar1 == 0) {
                    (**(code **)*local_d0)(local_d0);
                    LOCK();
                    piVar2 = (int *)((longlong)plVar9 + 0xc);
                    *piVar2 = *piVar2 + -1;
                    iVar8 = *piVar2;
                    UNLOCK();
                    plVar9 = local_d0;
                    goto joined_r0x000141242c5f;
                  }
                }
              }
            }
LAB_141242a94:
            (**(code **)(*param_1 + 0x18))(param_1,uVar5,local_b8,local_b0);
            FUN_141242f30(param_1,uVar5);
          }
          plVar9 = local_78;
          if (local_78 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_78 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*local_78)(local_78);
              LOCK();
              piVar2 = (int *)((longlong)plVar9 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar9 + 0x10))(plVar9);
              }
            }
          }
          uVar16 = uVar16 & ~(uint)uVar19;
          puVar10 = (uint *)param_1[0x1a];
          if ((uint *)param_1[0x1a] == (uint *)0x0) {
            puVar10 = local_a8;
          }
          iVar6 = (int)param_1[0x1b];
          iVar8 = (int)uVar15;
          lVar17 = (longlong)iVar8;
          uVar14 = puVar10[lVar17] & uVar16;
          if (uVar14 == 0) {
            iVar12 = iVar6 + 0x1e;
            if (-1 < iVar6 + -1) {
              iVar12 = iVar6 + -1;
            }
            iVar12 = iVar12 >> 5;
            iVar20 = iVar20 + 0x20;
            iVar13 = iVar12;
            if (iVar12 < iVar8) {
              iVar13 = iVar8;
            }
            if (iVar8 < iVar12) {
              lVar18 = 0;
              do {
                uVar14 = puVar10[lVar17 + lVar18 + 1];
                if (uVar14 != 0) {
                  uVar15 = (ulonglong)(iVar8 + (int)lVar18 + 1);
                  uVar16 = 0xffffffff;
                  goto LAB_141242b3e;
                }
                iVar20 = iVar20 + 0x20;
                lVar18 = lVar18 + 1;
              } while (iVar13 - lVar17 != lVar18);
              uVar16 = 0xffffffff;
              iVar8 = iVar13;
            }
            uVar15 = (ulonglong)(iVar8 + 1);
            iVar8 = iVar6;
          }
          else {
LAB_141242b3e:
            uVar19 = (ulonglong)(-uVar14 & uVar14);
            uVar3 = uVar19 * 2 + 1;
            lVar17 = 0x3f;
            if (uVar3 != 0) {
              for (; uVar3 >> lVar17 == 0; lVar17 = lVar17 + -1) {
              }
            }
            iVar8 = (iVar20 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
            if (iVar6 <= iVar8) {
              iVar8 = iVar6;
            }
          }
        } while (iVar8 != iVar4);
      }
    }
  }
LAB_141242c97:
  plVar9 = plStack_60;
  if (plStack_60 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_60 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_60)(plStack_60);
      LOCK();
      piVar2 = (int *)((longlong)plVar9 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141242f30 FUN_141242f30 body=887 status=ok
// SIG undefined FUN_141242f30(void)

void FUN_141242f30(longlong param_1,uint param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auStack_108 [40];
  longlong *local_e0;
  undefined8 local_d8;
  longlong *local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  longlong local_b8;
  longlong *local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  longlong local_98 [4];
  undefined8 local_78;
  int local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (((*(longlong *)(param_1 + 0x508) == 0) || (*(longlong *)(param_1 + 0x510) == 0)) ||
     (*(int *)(*(longlong *)(param_1 + 0x510) + 8) < 1)) {
    if (*(int *)(param_1 + 0x478) != *(int *)(param_1 + 0x4a4)) {
      lVar7 = param_1 + 0x4a8;
      if (*(longlong *)(param_1 + 0x4b0) != 0) {
        lVar7 = *(longlong *)(param_1 + 0x4b0);
      }
      iVar10 = *(int *)(lVar7 + (ulonglong)(*(int *)(param_1 + 0x4b8) - 1U & param_2) * 4);
      if (iVar10 != -1) {
        do {
          lVar7 = *(longlong *)(param_1 + 0x470) + (longlong)iVar10 * 0x60;
          if (*(uint *)(*(longlong *)(param_1 + 0x470) + (longlong)iVar10 * 0x60) == param_2) {
            lVar12 = lVar7 + 8;
            if ((lVar12 != 0 && lVar7 != 0) && (*(int *)(lVar7 + 0x10) != *(int *)(lVar7 + 0x3c))) {
              cVar5 = FUN_144729dda(param_1 + 0xa8);
              if (cVar5 != '\0') {
                lVar8 = FUN_14479d2ce(param_1 + 0xa8);
                if ((longlong)*(int *)(lVar8 + 0x40) != 0) {
                  lVar11 = 0;
                  goto LAB_141243099;
                }
              }
            }
            break;
          }
          iVar10 = *(int *)(lVar7 + 0x58);
        } while (iVar10 != -1);
      }
    }
  }
  else {
    FUN_148a777cc(param_1 + 0x470);
    local_98[0] = param_1;
    FUN_143f11f7a(local_98,param_1 + 0x380);
    FUN_143f11f7a(local_98,param_1 + 0x3d0);
  }
  goto LAB_141242f72;
  while (lVar11 = lVar11 + 8, (longlong)*(int *)(lVar8 + 0x40) * 8 != lVar11) {
LAB_141243099:
    lVar3 = *(longlong *)(*(longlong *)(lVar8 + 0x38) + lVar11);
    if ((lVar3 != 0) && (*(uint *)(lVar3 + 0xe0) == param_2)) {
      local_78 = 0;
      local_70 = 0;
      local_98[0] = 0;
      local_98[1] = 0;
      local_6c = 0xffffffff00000080;
      local_64 = 0;
      local_58 = 0;
      local_50 = 0;
      FUN_14586fca4(local_98,lVar12);
      if (*(int *)(lVar7 + 0x10) != *(int *)(lVar7 + 0x3c)) {
        FUN_1460227e8(lVar12);
        FUN_148a77958(lVar12);
      }
      local_b0 = local_98 + 2;
      local_b8 = 0x100000000;
      local_a8 = 0xffffffff;
      local_a0 = 0;
      iVar10 = 0;
      if (local_70 != 0) {
        FUN_1449c0562(&local_b8);
        iVar10 = local_70;
      }
      local_c8 = local_a8;
      uVar9 = local_c8;
      local_c0 = local_a0;
      local_bc = local_9c;
      local_d8 = local_b8;
      local_d0 = local_b0;
      local_e0 = local_98;
      local_c8._4_4_ = (int)((ulonglong)local_a8 >> 0x20);
      if ((local_c8._4_4_ != iVar10) || (local_b0 != local_98 + 2)) {
        iVar6 = local_c8._4_4_;
        local_c8 = uVar9;
        do {
          lVar7 = *local_e0;
          uVar9 = FUN_140b6de3c();
          FUN_140b6df48(uVar9,&local_b8,lVar3,*(undefined8 *)(lVar7 + (longlong)iVar6 * 0x18));
          plVar4 = local_b0;
          lVar12 = local_b8;
          if (local_b0 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_b0 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*local_b0)(local_b0);
              LOCK();
              piVar2 = (int *)((longlong)plVar4 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar4 + 0x10))(plVar4);
              }
            }
          }
          if (lVar12 == 0) {
            FUN_1413359f4(param_1,lVar3,(longlong)iVar6 * 0x18 + lVar7);
          }
          local_c8 = CONCAT44(local_c8._4_4_,(uint)local_c8 & ~local_d8._4_4_);
          FUN_1449c0562(&local_d8);
          iVar6 = local_c8._4_4_;
          uVar9 = local_c8;
        } while (local_e0 != local_98 || (local_d0 != local_98 + 2 || local_c8._4_4_ != iVar10));
      }
      local_c8 = uVar9;
      local_50 = 0;
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      FUN_140b6c31a(local_98);
      break;
    }
  }
LAB_141242f72:
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1412432a8 FUN_1412432a8 body=2513 status=ok
// SIG undefined FUN_1412432a8(void)

void FUN_1412432a8(longlong param_1,code *param_2,ulonglong param_3)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  uint uVar10;
  undefined8 *puVar11;
  code *pcVar12;
  uint uVar13;
  byte bVar14;
  longlong lVar15;
  uint uVar16;
  bool bVar17;
  undefined1 auStack_1a8 [32];
  wchar_t *local_188;
  undefined4 local_180;
  undefined8 local_178;
  wchar_t *local_170;
  wchar_t *local_168;
  code *local_160;
  undefined1 *local_158;
  code **local_150;
  code *local_148;
  code *local_140;
  code *local_138;
  code *local_130;
  longlong *local_128;
  longlong local_120;
  longlong local_118;
  code *local_110;
  code *local_108;
  undefined8 local_100;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  longlong local_e0;
  code *local_d8;
  code *local_d0;
  longlong local_c8;
  undefined8 uStack_c0;
  undefined2 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  longlong lStack_98;
  longlong *local_88;
  longlong local_78 [4];
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  if ((((param_3 & 1) != 0) && (param_2 != (code *)0x0)) && (*(longlong *)(param_1 + 0x48) != 0)) {
    if (DAT_14cb939a8 == 0) {
      local_150 = &local_d8;
      local_d8 = FUN_140940982;
      local_140 = FUN_14081d0ea;
      local_148 = (code *)&LAB_146522c26;
      local_158 = &LAB_148a0db91;
      local_160 = (code *)&LAB_146572ba7;
      local_168 = L"Engine";
      local_170 = (wchar_t *)0x0;
      local_178 = CONCAT44(local_178._4_4_,0x10000004);
      local_180 = 8;
      local_188 = (wchar_t *)CONCAT44(local_188._4_4_,0xdd8);
      FUN_14081cfa3(L"/Script/GbxWeapon",L"Weapon",&DAT_14cb939a8,FUN_146572b80);
    }
    if ((*(int *)(DAT_14cb939a8 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cb939a8 + 0x38) * 8) == DAT_14cb939a8 + 0x30)) {
      FUN_140c65a04(param_2 + 0x3f0,&local_110);
      pcVar1 = local_108;
      if (local_108 != (code *)0x0) {
        LOCK();
        *(int *)(local_108 + 8) = *(int *)(local_108 + 8) + 1;
        UNLOCK();
      }
      if (*(byte *)(param_1 + 0x30) != 0) {
        plVar4 = (longlong *)(param_1 + 0x48);
        uVar16 = 0;
        lVar15 = 8;
        uVar13 = 0;
        local_138 = local_110;
        bVar14 = *(byte *)(param_1 + 0x30);
        do {
          if (((((bVar14 & 1) != 0) && ((*(uint *)(local_138 + 0x28c) >> (uVar16 & 0x1f) & 1) == 0))
              && ((*(int *)(param_2 + 0xbf0) <= (int)uVar16 ||
                  (*(longlong *)(*(longlong *)(param_2 + 0xbe8) + lVar15) == 0)))) &&
             (lVar6 = *plVar4, lVar6 != 0)) {
            if (((((*(int *)(lVar6 + 0xc) == 0) || (uVar10 = *(uint *)(lVar6 + 8), (int)uVar10 < 0))
                 || (DAT_14c9647dc <= (int)uVar10)) ||
                ((puVar11 = (undefined8 *)
                            ((ulonglong)((uVar10 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8)),
                 puVar11 == (undefined8 *)0x0 || (*(int *)(puVar11 + 2) != *(int *)(lVar6 + 0xc)))))
               || (((*(uint *)(puVar11 + 1) & 0x10200000) != 0 ||
                   (pcVar12 = (code *)*puVar11, (code *)*puVar11 == (code *)0x0)))) {
              if (*(longlong *)(lVar6 + 0x10) != 0) {
                local_128 = plVar4;
                local_130 = (code *)FUN_140007850();
                cVar2 = (*(code *)PTR_FUN_14c758760)();
                if ((local_130 == (code *)0x0) || (cVar2 == '\0')) {
                  if (local_130 != (code *)0x0) {
                    uVar10 = *(uint *)(local_130 + 0xc);
                    *(uint *)(lVar6 + 8) = uVar10;
                    if ((int)uVar10 < DAT_14c9647dc) {
                      lVar8 = (ulonglong)((uVar10 & 0xffff) * 0x18) +
                              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8);
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
                      bVar17 = DAT_14c964868 < 1000;
                      DAT_14c964868 = iVar3;
                      if (bVar17) {
                        local_120 = CONCAT44(local_120._4_4_,iVar7);
                        local_118 = lVar8;
                        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",
                                      0x23d,
                                      L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                      ,iVar7);
                        lVar8 = local_118;
                        iVar7 = (int)local_120;
                      }
                      LOCK();
                      iVar3 = *(int *)(lVar8 + 0x10);
                      bVar17 = iVar3 == 0;
                      if (bVar17) {
                        *(int *)(lVar8 + 0x10) = iVar7;
                        iVar3 = 0;
                      }
                      UNLOCK();
                      if (bVar17) {
                        iVar3 = iVar7;
                      }
                    }
                    goto LAB_1412435cc;
                  }
                  *(undefined8 *)(lVar6 + 8) = 0;
                  plVar4 = local_128;
                }
                else {
                  uVar10 = *(uint *)(local_130 + 0xc);
                  if ((int)uVar10 < DAT_14c9647dc) {
                    lVar8 = (ulonglong)((uVar10 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8);
                  }
                  else {
                    lVar8 = 0;
                  }
                  if ((*(uint *)(lVar8 + 8) & 0x8400000) == 0) {
                    *(uint *)(lVar6 + 8) = uVar10;
                    if ((int)uVar10 < DAT_14c9647dc) {
                      lVar8 = (ulonglong)((uVar10 & 0xffff) * 0x18) +
                              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8);
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
                      local_118 = CONCAT44(local_118._4_4_,iVar7);
                      bVar17 = DAT_14c964868 < 1000;
                      DAT_14c964868 = iVar3;
                      local_120 = lVar8;
                      if (bVar17) {
                        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",
                                      0x23d,
                                      L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                      ,iVar7);
                      }
                      LOCK();
                      iVar3 = *(int *)(local_120 + 0x10);
                      bVar17 = iVar3 == 0;
                      if (bVar17) {
                        *(int *)(local_120 + 0x10) = (int)local_118;
                        iVar3 = 0;
                      }
                      UNLOCK();
                      if (bVar17) {
                        iVar3 = (int)local_118;
                      }
                    }
LAB_1412435cc:
                    *(int *)(lVar6 + 0xc) = iVar3;
                  }
                  plVar4 = local_128;
                  pcVar12 = local_130;
                  if ((*(uint *)(local_130 + 8) >> 0x1e & 1) == 0) goto LAB_14124341e;
                }
              }
            }
            else {
LAB_14124341e:
              if (DAT_14c949118 == 0) {
                local_100 = FUN_140631fbe;
                local_130 = pcVar12;
                local_128 = plVar4;
                if (DAT_14c963f04 == '\0') {
                  uVar5 = FUN_140011aa6();
                  lVar6 = FUN_140011c0e(uVar5,0x250,8);
                }
                else {
                  lVar6 = FUN_14001cc68(0x250,8);
                }
                DAT_14c949118 = lVar6;
                local_120 = lVar6;
                FUN_1446f470e(&local_f0,L"Class",1);
                local_150 = (code **)&local_100;
                local_158 = &LAB_146891e90;
                local_160 = (code *)&LAB_146273097;
                local_170 = L"Engine";
                local_168 = (wchar_t *)CONCAT44(local_168._4_4_,199);
                local_178 = 0x20;
                local_180 = 0x10000000;
                local_188._0_4_ = 8;
                FUN_14574b4b2(lVar6);
                DAT_14c949118 = lVar6;
                if (DAT_14c951858 == 0) {
                  local_150 = &local_d8;
                  local_d8 = FUN_1449e2820;
                  local_140 = FUN_14081d0ea;
                  local_148 = FUN_14081d0ea;
                  local_158 = &LAB_1468c5283;
                  local_160 = FUN_142809da0;
                  local_168 = L"Engine";
                  local_170 = (wchar_t *)0x400000000;
                  local_178 = CONCAT44(local_178._4_4_,0x10000000);
                  local_180 = 8;
                  local_188._0_4_ = 0x50;
                  FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
                  local_120 = DAT_14c949118;
                }
                lVar6 = DAT_14c951858;
                uVar5 = FUN_1449e2fb2();
                local_188 = L"Class";
                FUN_14574b446(uVar5,local_120,lVar6,L"/Script/CoreUObject");
                plVar4 = local_128;
                pcVar12 = local_130;
              }
              if ((*(int *)(DAT_14c949118 + 0x38) <= *(int *)(*(longlong *)(pcVar12 + 0x10) + 0x38))
                 && (*(longlong *)
                      (*(longlong *)(*(longlong *)(pcVar12 + 0x10) + 0x30) +
                      (longlong)*(int *)(DAT_14c949118 + 0x38) * 8) == DAT_14c949118 + 0x30)) {
                if (DAT_14cb93bd8 == 0) {
                  local_150 = &local_d8;
                  local_d8 = FUN_1449e2820;
                  local_140 = FUN_14081d0ea;
                  local_148 = FUN_14081d0ea;
                  local_158 = &LAB_148a11b2b;
                  local_160 = FUN_146573d7d;
                  local_168 = L"Engine";
                  local_170 = (wchar_t *)0x0;
                  local_178 = CONCAT44(local_178._4_4_,0x10000001);
                  local_180 = 8;
                  local_188 = (wchar_t *)CONCAT44(local_188._4_4_,0x38);
                  local_130 = pcVar12;
                  FUN_14081cfa3(L"/Script/GbxWeapon",L"WeaponBehavior",&DAT_14cb93bd8,&DAT_148a11b2a
                               );
                  pcVar12 = local_130;
                  if (DAT_14cb93bd8 == 0) goto LAB_14124337b;
                }
                if ((*(int *)(DAT_14cb93bd8 + 0x38) <= *(int *)(pcVar12 + 0x38)) &&
                   (*(longlong *)
                     (*(longlong *)(pcVar12 + 0x30) + (longlong)*(int *)(DAT_14cb93bd8 + 0x38) * 8)
                    == DAT_14cb93bd8 + 0x30)) {
                  local_130 = pcVar12;
                  local_128 = plVar4;
                  FUN_140002266(&local_d8,L"UM%d_PC",uVar16);
                  pcVar12 = local_d8;
                  if ((int)local_d0 == 0) {
                    pcVar12 = (code *)&DAT_149dfb77a;
                  }
                  FUN_1446f470e(&local_e0,pcVar12,1);
                  if (local_d8 != (code *)0x0) {
                    FUN_1400020a8();
                  }
                  lVar6 = local_e0;
                  if (local_e0 == 0) {
                    FUN_14058b40c(param_2,
                                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                                 );
                  }
                  local_d8 = local_130;
                  local_88 = (longlong *)0x0;
                  local_58 = 0;
                  local_b8 = 0;
                  local_c8 = lVar6;
                  uStack_c0 = 0x41;
                  local_b0 = 0;
                  uStack_a8 = 0;
                  local_a0 = 0;
                  lStack_98 = 0;
                  local_d0 = param_2;
                  plVar4 = (longlong *)FUN_1402710dd();
                  if (lStack_98 != 0) {
                    plVar9 = local_88;
                    if (local_88 == (longlong *)0x0) {
                      plVar9 = local_78;
                    }
                    (**(code **)(*plVar9 + 0x10))();
                  }
                  uVar10 = uVar16;
                  if (*local_128 != 0) {
                    *(undefined8 *)((longlong)plVar4 + 0x3c) = *(undefined8 *)(param_1 + 0x38);
                    local_d8 = local_138;
                    local_d0 = pcVar1;
                    if (pcVar1 != (code *)0x0) {
                      LOCK();
                      *(int *)(pcVar1 + 8) = *(int *)(pcVar1 + 8) + 1;
                      UNLOCK();
                    }
                    FUN_140c65976(local_128,&local_100);
                    local_f0 = (undefined4)local_100;
                    uStack_ec = local_100._4_4_;
                    uStack_e8 = uStack_f8;
                    uStack_e4 = uStack_f4;
                    (**(code **)(*plVar4 + 0x2a0))(plVar4,&local_f0,&local_d8,uVar16);
                    uVar10 = uVar13;
                    if (local_d0 != (code *)0x0) {
                      LOCK();
                      pcVar12 = local_d0 + 8;
                      *(int *)pcVar12 = *(int *)pcVar12 + -1;
                      UNLOCK();
                      if (*(int *)pcVar12 == 0) {
                        local_130 = local_d0;
                        (*(code *)**(undefined8 **)local_d0)(local_d0);
                        LOCK();
                        pcVar12 = local_130 + 0xc;
                        *(int *)pcVar12 = *(int *)pcVar12 + -1;
                        UNLOCK();
                        if (*(int *)pcVar12 == 0) {
                          (**(code **)(*(longlong *)local_130 + 0x10))();
                        }
                      }
                    }
                  }
                  FUN_141243c7a(param_2,uVar10,plVar4,*(undefined4 *)(param_1 + 0x34));
                  plVar4 = local_128;
                }
              }
            }
          }
LAB_14124337b:
          uVar13 = uVar13 + 1;
          uVar16 = uVar16 + 1;
          lVar15 = lVar15 + 0x88;
          bVar17 = 1 < bVar14;
          bVar14 = bVar14 >> 1;
        } while (bVar17);
      }
      if (pcVar1 != (code *)0x0) {
        LOCK();
        pcVar12 = pcVar1 + 8;
        *(int *)pcVar12 = *(int *)pcVar12 + -1;
        UNLOCK();
        if (*(int *)pcVar12 == 0) {
          (*(code *)**(undefined8 **)pcVar1)(pcVar1);
          LOCK();
          pcVar12 = pcVar1 + 0xc;
          *(int *)pcVar12 = *(int *)pcVar12 + -1;
          UNLOCK();
          if (*(int *)pcVar12 == 0) {
            (**(code **)(*(longlong *)pcVar1 + 0x10))(pcVar1);
          }
        }
      }
      if (local_108 != (code *)0x0) {
        LOCK();
        pcVar1 = local_108 + 8;
        *(int *)pcVar1 = *(int *)pcVar1 + -1;
        UNLOCK();
        if (*(int *)pcVar1 == 0) {
          (*(code *)**(undefined8 **)local_108)(local_108);
          LOCK();
          pcVar1 = local_108 + 0xc;
          *(int *)pcVar1 = *(int *)pcVar1 + -1;
          UNLOCK();
          if (*(int *)pcVar1 == 0) {
            (**(code **)(*(longlong *)local_108 + 0x10))(local_108);
          }
        }
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141243c7a FUN_141243c7a body=1475 status=ok
// SIG undefined FUN_141243c7a(void)

undefined8 FUN_141243c7a(longlong param_1,byte param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  uint *puVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  byte bVar13;
  byte bVar14;
  longlong lVar15;
  bool bVar16;
  undefined1 auStack_a8 [47];
  byte local_79;
  longlong local_78;
  longlong *local_70;
  longlong local_68;
  undefined1 local_60 [8];
  undefined8 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_3 == 0) {
LAB_141244176:
    uVar5 = 0;
    goto LAB_141244178;
  }
  plVar1 = (longlong *)(param_1 + 0xbe8);
  uVar7 = (ulonglong)param_2;
  iVar10 = *(int *)(param_1 + 0xbf0);
  local_70 = plVar1;
  if ((int)(uint)param_2 < iVar10) {
    lVar15 = *plVar1;
    if (*(longlong *)(lVar15 + 8 + (ulonglong)param_2 * 0x80 + uVar7 * 8) != 0) goto LAB_141244176;
  }
  else {
    iVar8 = param_2 + 1;
    *(int *)(param_1 + 0xbf0) = iVar8;
    uVar9 = iVar8 - iVar10;
    if ((uint)(*(int *)(param_1 + 0xbf4) - iVar10) < uVar9) {
      FUN_14124423e(plVar1);
    }
    memset((void *)((longlong)iVar10 * 0x88 + *plVar1),0,(longlong)(int)uVar9 * 0x88);
    lVar15 = *plVar1;
  }
  uVar11 = param_4 + (uint)(param_4 == 0);
  local_68 = (ulonglong)param_2 * 0x80 + uVar7 * 8;
  puVar2 = (uint *)(lVar15 + local_68);
  *(longlong *)(puVar2 + 2) = param_3;
  *puVar2 = uVar11;
  *(undefined1 *)(puVar2 + 1) = 0;
  uVar9 = puVar2[0x14];
  puVar2[0x14] = uVar9 + 1;
  local_78 = lVar15;
  if (puVar2[0x15] < uVar9 + 1) {
    FUN_140a4b488(puVar2 + 0x12,uVar9);
  }
  *(longlong *)(*(longlong *)(puVar2 + 0x12) + (longlong)(int)uVar9 * 8) = param_3;
  *(byte *)(param_3 + 0x38) = param_2;
  local_58 = (undefined8 *)0x0;
  local_50 = 0;
  local_79 = param_2;
  FUN_1446efa72(&local_58,0,3,0x10);
  puVar4 = local_58;
  local_50 = 3;
  *local_58 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar6 = DAT_14c758608 + 1;
  lVar15 = DAT_14c758608 + 1;
  if (lVar6 == 0) {
    LOCK();
    UNLOCK();
    lVar6 = DAT_14c758608 + 2;
    lVar15 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar15;
  local_58[2] = lVar6;
  *local_58 = &PTR_FUN_14b4aba60;
  local_58[3] = 0;
  iVar10 = 0;
  if (param_1 != 0) {
    uVar9 = *(uint *)(param_1 + 0xc);
    *(uint *)(local_58 + 3) = uVar9;
    if ((int)uVar9 < DAT_14c9647dc) {
      lVar15 = (ulonglong)((uVar9 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8);
    }
    else {
      lVar15 = 0;
    }
    iVar10 = *(int *)(lVar15 + 0x10);
    if (*(int *)(lVar15 + 0x10) == 0) {
      LOCK();
      iVar10 = DAT_14c964868 + 1;
      UNLOCK();
      iVar8 = DAT_14c964868 + 1;
      bVar16 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar10;
      if (bVar16) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).");
      }
      LOCK();
      iVar10 = *(int *)(lVar15 + 0x10);
      bVar16 = iVar10 == 0;
      if (bVar16) {
        *(int *)(lVar15 + 0x10) = iVar8;
        iVar10 = 0;
      }
      UNLOCK();
      if (bVar16) {
        iVar10 = iVar8;
      }
    }
  }
  *(int *)((longlong)puVar4 + 0x1c) = iVar10;
  puVar4[4] = &LAB_1408bd3d2;
  *(undefined4 *)(puVar4 + 5) = 0;
  FUN_1448b6402(param_3 + 0x58,local_60,&local_58);
  if (local_50 == 0) {
LAB_141243e6c:
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_58 != (undefined8 *)0x0) {
    (**(code **)*local_58)(local_58,0);
    FUN_1446efa72(&local_58,0,0,0x10);
    local_50 = 0;
    goto LAB_141243e6c;
  }
  local_58 = (undefined8 *)0x0;
  local_50 = 0;
  FUN_1446efa72(&local_58,0,3,0x10);
  puVar4 = local_58;
  local_50 = 3;
  *local_58 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar6 = DAT_14c758608 + 1;
  lVar15 = DAT_14c758608 + 1;
  if (lVar6 == 0) {
    LOCK();
    UNLOCK();
    lVar6 = DAT_14c758608 + 2;
    lVar15 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar15;
  local_58[2] = lVar6;
  *local_58 = &PTR_FUN_14b4aba60;
  local_58[3] = 0;
  iVar10 = 0;
  if (param_1 != 0) {
    uVar9 = *(uint *)(param_1 + 0xc);
    *(uint *)(local_58 + 3) = uVar9;
    if ((int)uVar9 < DAT_14c9647dc) {
      lVar15 = (ulonglong)((uVar9 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8);
    }
    else {
      lVar15 = 0;
    }
    iVar10 = *(int *)(lVar15 + 0x10);
    if (*(int *)(lVar15 + 0x10) == 0) {
      LOCK();
      iVar10 = DAT_14c964868 + 1;
      UNLOCK();
      iVar8 = DAT_14c964868 + 1;
      bVar16 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar10;
      if (bVar16) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar8);
      }
      LOCK();
      iVar10 = *(int *)(lVar15 + 0x10);
      bVar16 = iVar10 == 0;
      if (bVar16) {
        *(int *)(lVar15 + 0x10) = iVar8;
        iVar10 = 0;
      }
      UNLOCK();
      if (bVar16) {
        iVar10 = iVar8;
      }
    }
  }
  *(int *)((longlong)puVar4 + 0x1c) = iVar10;
  puVar4[4] = &LAB_1408bd3c4;
  *(undefined4 *)(puVar4 + 5) = 0;
  FUN_1448b6402(param_3 + 0x70);
  lVar15 = local_78;
  bVar14 = local_79;
  if (local_50 == 0) {
LAB_141243f76:
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_58 != (undefined8 *)0x0) {
    (**(code **)*local_58)();
    FUN_1446efa72(&local_58,0,0,0x10);
    local_50 = 0;
    goto LAB_141243f76;
  }
  lVar15 = lVar15 + local_68;
  local_78 = (ulonglong)param_2 * 0x80 + uVar7 * 8;
  bVar16 = false;
  lVar6 = param_1 + 0xbf8;
  bVar13 = 0;
  do {
    if ((uVar11 & 1) != 0) {
      if (!bVar16) {
        *(byte *)(lVar15 + 4) = bVar13;
      }
      if (bVar14 != 0) {
        lVar12 = 0;
        do {
          bVar16 = true;
          if ((*(uint *)(*local_70 + lVar12) & 1 << (bVar13 & 0x1f)) != 0) goto LAB_141244039;
          lVar12 = lVar12 + 0x88;
        } while (local_78 != lVar12);
      }
      iVar10 = *(int *)(param_1 + 0xc08);
      if (iVar10 <= (int)(uint)bVar13) {
        *(uint *)(param_1 + 0xc08) = bVar13 + 1;
        uVar9 = (bVar13 + 1) - iVar10;
        if ((uint)(*(int *)(param_1 + 0xc0c) - iVar10) < uVar9) {
          FUN_148a27188(lVar6);
        }
        lVar12 = *(longlong *)(param_1 + 0xc00);
        if (*(longlong *)(param_1 + 0xc00) == 0) {
          lVar12 = lVar6;
        }
        memset((void *)(lVar12 + iVar10),0,(longlong)(int)uVar9);
        iVar10 = *(int *)(param_1 + 0xc08);
        bVar14 = local_79;
      }
      bVar16 = true;
      if ((int)(uint)bVar13 < iVar10) {
        lVar12 = *(longlong *)(param_1 + 0xc00);
        if (*(longlong *)(param_1 + 0xc00) == 0) {
          lVar12 = lVar6;
        }
        *(byte *)(lVar12 + (ulonglong)bVar13) = bVar14;
      }
    }
LAB_141244039:
    bVar13 = bVar13 + 1;
    uVar5 = 1;
    bVar3 = 1 < uVar11;
    uVar11 = (int)uVar11 >> 1;
  } while (bVar3);
LAB_141244178:
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 14124423e FUN_14124423e body=373 status=ok
// SIG undefined FUN_14124423e(void)

void FUN_14124423e(longlong param_1,int param_2)

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
  uVar5 = lVar4 * 0x88;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1412442ca;
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
LAB_1412442ca:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x88)) {
    uVar7 = uVar5 / 0x88 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x88,8);
  return;
}



// FUNCTION 1412443b4 FUN_1412443b4 body=40 status=ok
// SIG undefined FUN_1412443b4(void)

undefined8 FUN_1412443b4(undefined8 param_1,int param_2)

{
  FUN_1412443dc();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1412443dc FUN_1412443dc body=709 status=ok
// SIG undefined FUN_1412443dc(void)

void FUN_1412443dc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b5dd7a0;
  param_1[0x72] = &PTR_FUN_14b5dde10;
  param_1[0x73] = &PTR_FUN_14b5dde30;
  param_1[0x74] = &PTR_FUN_14b5dde60;
  param_1[0x75] = &PTR_FUN_14b5dde70;
  param_1[0x76] = &PTR_FUN_14b5ddee0;
  param_1[0x77] = &PTR_FUN_14b5ddf10;
  param_1[0x78] = &PTR_FUN_14b5ddf40;
  param_1[0x7f] = &PTR_FUN_14b5ddff0;
  param_1[0x80] = &PTR_FUN_14b5de060;
  param_1[0x81] = &PTR_FUN_14b5de0d0;
  param_1[0x82] = &PTR_FUN_14b5de100;
  param_1[0x83] = &PTR_FUN_14b5de140;
  param_1[0x84] = &PTR_FUN_14b5de1e0;
  param_1[0x85] = &PTR_FUN_14b5de200;
  param_1[0x89] = &PTR_FUN_14b5de220;
  param_1[0x8a] = &PTR_FUN_14b5de2e0;
  param_1[0x8b] = &PTR_FUN_14b5de360;
  param_1[0x8c] = &PTR_FUN_14b5de3b0;
  param_1[0x8d] = &PTR_FUN_14b5de3f0;
  param_1[0x8e] = &PTR_FUN_14b5de410;
  param_1[0x8f] = &PTR_FUN_14b5de430;
  param_1[0x90] = &PTR_FUN_14b5de450;
  param_1[0x91] = &PTR_FUN_14b5de470;
  param_1[0x92] = &PTR_FUN_14b5de490;
  param_1[0x93] = &PTR_FUN_14b5de4b0;
  param_1[0x94] = &PTR_FUN_14b5de4d0;
  param_1[0x95] = &PTR_FUN_14b5de4f0;
  param_1[0x96] = &PTR_FUN_14b5de510;
  param_1[0x34b] = &PTR_FUN_14b5de530;
  param_1[0x352] = &PTR_FUN_14b5de540;
  param_1[0x353] = &PTR_FUN_14b5de580;
  param_1[0x354] = &PTR_FUN_14b5de5c0;
  param_1[0x355] = &PTR_FUN_14b5de610;
  param_1[0x356] = &PTR_FUN_14b5de640;
  param_1[0x359] = &PTR_FUN_14b5de680;
  param_1[0x35a] = &PTR_FUN_14b5de690;
  param_1[0x35b] = &PTR_FUN_14b5de6c0;
  param_1[0x35c] = &PTR_FUN_14b5de760;
  FUN_1412446a1(param_1[0x4f7],*(undefined4 *)(param_1 + 0x4f8));
  if (param_1[0x4f7] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x4c8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x4c6] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x4c3],*(undefined4 *)(param_1 + 0x4c4));
  if (param_1[0x4c3] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x4c1] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x4bf] != 0) {
    FUN_1400020a8();
  }
  FUN_140639172(param_1);
  return;
}



// FUNCTION 1412446a1 FUN_1412446a1 body=49 status=ok
// SIG undefined FUN_1412446a1(void)

void FUN_1412446a1(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 8);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1412446d2 FUN_1412446d2 body=29 status=ok
// SIG undefined FUN_1412446d2(void)

undefined8 * FUN_1412446d2(undefined8 *param_1)

{
  byte *pbVar1;
  undefined8 *puVar2;
  
  pbVar1 = (byte *)*param_1;
  puVar2 = &DAT_14c9a1288;
  if ((pbVar1 != (byte *)0x0) && ((*pbVar1 & 2) != 0)) {
    puVar2 = (undefined8 *)(*(longlong *)(pbVar1 + 8) + 0x18);
  }
  return puVar2;
}



// FUNCTION 1412446f0 FUN_1412446f0 body=74 status=ok
// SIG undefined FUN_1412446f0(void)

undefined8 FUN_1412446f0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0;
    iVar1 = FUN_1448e5bf4(param_2,param_1,0);
    if (iVar1 != -1) {
      *param_3 = *(undefined8 *)(*(longlong *)(param_2 + 0x40) + 8 + (longlong)iVar1 * 0x10);
      uVar2 = 1;
    }
  }
  return uVar2;
}



// FUNCTION 14124473a FUN_14124473a body=57 status=ok
// SIG undefined FUN_14124473a(void)

void FUN_14124473a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb56e48 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb56e48 = FUN_14171c317(FUN_1464ba651,uVar1,L"EDialogParameterType");
  }
  return;
}



// FUNCTION 141244774 FUN_141244774 body=493 status=ok
// SIG undefined FUN_141244774(void)

void FUN_141244774(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  undefined1 auStack_1a8 [32];
  undefined8 local_188;
  undefined4 local_180;
  undefined1 local_178 [32];
  longlong local_158;
  longlong *local_148;
  longlong local_138 [4];
  longlong local_118;
  longlong *local_108;
  longlong local_f8 [5];
  undefined1 local_d0 [8];
  undefined4 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined4 local_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  undefined1 local_98;
  undefined1 local_90;
  undefined8 local_8c;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_70;
  longlong lStack_68;
  char local_60 [8];
  undefined4 local_58;
  longlong local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  if (*(int *)(param_1 + 0x58) != 0) {
    uVar3 = FUN_141244962();
    FUN_1412449ba(param_1 + 0x30,local_60,uVar3);
    if (local_60[0] != '\0') {
      local_180 = *(undefined4 *)(param_1 + 0x60);
      local_188 = *(undefined8 *)(param_1 + 0x58);
      FUN_1402939f8(local_60);
      cVar2 = FUN_140114204(local_60);
      if (cVar2 != '\0') {
        local_b0 = 0;
        local_c0 = 0;
        uStack_b8 = 0;
        local_90 = 0;
        local_8c = 0;
        local_80 = 0;
        local_78 = 0;
        local_70 = 0;
        lStack_68 = 0;
        local_a8 = 0;
        uStack_a0 = 0;
        local_98 = 0;
        local_c8 = local_58;
        FUN_1447715ec();
        FUN_140427366(param_1 + 0x68);
        local_98 = 0;
        uVar3 = FUN_140612812(*param_2);
        uVar3 = FUN_140149a73(uVar3);
        memset(local_178,0,0xa0);
        FUN_140bc495f(local_d0,uVar3,local_178,0);
        if (local_118 != 0) {
          if (local_108 == (longlong *)0x0) {
            local_108 = local_f8;
          }
          (**(code **)(*local_108 + 0x10))();
        }
        if (local_158 != 0) {
          if (local_148 == (longlong *)0x0) {
            local_148 = local_138;
          }
          (**(code **)(*local_148 + 0x10))();
        }
        lVar1 = lStack_68;
        if (lStack_68 != 0) {
          FUN_144a2da94(lStack_68);
          FUN_1400020a8(lVar1);
        }
        if (local_a8 != 0) {
          FUN_1400020a8();
        }
      }
    }
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141244962 FUN_141244962 body=87 status=ok
// SIG undefined FUN_141244962(void)

longlong FUN_141244962(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  
  plVar4 = *(longlong **)(param_1 + 0x20);
  do {
    if (plVar4 == (longlong *)0x0) {
      return 0;
    }
    uVar1 = FUN_140427846();
    lVar2 = (**(code **)(*plVar4 + 0x288))(plVar4,uVar1);
    if (lVar2 != 0) {
      uVar1 = FUN_140427846();
      lVar3 = FUN_144718840(lVar2,uVar1);
      if ((lVar2 != lVar3) && (lVar3 != 0)) {
        return lVar3;
      }
    }
    plVar4 = (longlong *)plVar4[4];
  } while( true );
}



// FUNCTION 1412449ba FUN_1412449ba body=289 status=ok
// SIG undefined FUN_1412449ba(void)

longlong FUN_1412449ba(char *param_1,longlong param_2,longlong *param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_4c;
  int local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_144928b90(param_2,1);
  uStack_38 = DAT_14cb7bba0;
  uStack_3c = DAT_14cb7bb98._4_4_;
  local_40 = (int)DAT_14cb7bb98;
  FUN_144928d62(param_2 + 0x10,1,&local_40);
  if ((param_3 == (longlong *)0x0) || (*param_1 != '\0')) {
    local_50 = *(undefined4 *)(param_1 + 0xc);
    puVar1 = &local_58;
    local_58 = *(undefined8 *)(param_1 + 4);
  }
  else {
    puVar1 = &local_4c;
    (**(code **)(*param_3 + 0x30))(param_3,puVar1);
  }
  FUN_14013eb2c(param_2,puVar1);
  local_60 = *(undefined4 *)(param_1 + 0x18);
  local_68 = *(undefined8 *)(param_1 + 0x10);
  FUN_14013eb54(param_2);
  local_70 = *(undefined4 *)(param_1 + 0x24);
  local_78 = *(undefined8 *)(param_1 + 0x1c);
  FUN_144928d62(param_2 + 0x10,4);
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141244adc FUN_141244adc body=325 status=ok
// SIG undefined FUN_141244adc(void)

longlong FUN_141244adc(longlong *param_1,uint param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  longlong *plVar7;
  undefined1 auStack_68 [32];
  int local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar4 = FUN_141244c22();
  if (lVar4 == 0) {
    FUN_141244d34(param_1,local_48);
    uVar1 = param_3[1];
    *local_40 = *param_3;
    local_40[1] = uVar1;
    local_40[6] = 0;
    *(undefined4 *)(local_40 + 7) = 0;
    local_40[2] = 0;
    local_40[3] = 0;
    *(undefined8 *)((longlong)local_40 + 0x3c) = 0xffffffff00000080;
    *(undefined4 *)((longlong)local_40 + 0x44) = 0;
    local_40[10] = 0;
    *(undefined4 *)(local_40 + 0xb) = 0;
    *(undefined4 *)(local_40 + 0xc) = 0xffffffff;
    cVar2 = FUN_141244c78(param_1,param_2,local_40,local_48);
    if (cVar2 == '\0') {
      uVar3 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
      iVar6 = 1;
      if (3 < uVar3) {
        uVar5 = (ulonglong)(uVar3 & 0xfffffffe) + 0xf;
        lVar4 = 0x3f;
        if (uVar5 != 0) {
          for (; uVar5 >> lVar4 == 0; lVar4 = lVar4 + -1) {
          }
        }
        iVar6 = 1 << ((byte)lVar4 & 0x1f);
      }
      if (((int)uVar3 < 1) || (iVar6 <= (int)param_1[9])) {
        param_2 = (int)param_1[9] - 1U & param_2;
        *(uint *)((longlong)local_40 + 100) = param_2;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = param_1 + 7;
        }
        *(undefined4 *)(local_40 + 0xc) =
             *(undefined4 *)
              ((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)param_2) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = param_1 + 7;
        }
        *(int *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)param_2) * 4) =
             local_48[0];
      }
      else {
        *(int *)(param_1 + 9) = iVar6;
        FUN_141244f16(param_1);
      }
    }
    lVar4 = *param_1 + (longlong)local_48[0] * 0x68;
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar4 + 0x10;
}



// FUNCTION 141244c22 FUN_141244c22 body=86 status=ok
// SIG undefined FUN_141244c22(void)

longlong FUN_141244c22(longlong *param_1,uint param_2,longlong *param_3)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar2 != -1) {
      lVar1 = *param_1;
      do {
        lVar4 = (longlong)iVar2 * 0x68;
        if ((*(longlong *)(lVar1 + lVar4) == *param_3) &&
           (*(longlong *)(lVar1 + 8 + lVar4) == param_3[1])) {
          return lVar1 + lVar4;
        }
        iVar2 = *(int *)(lVar1 + lVar4 + 0x60);
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 141244c78 FUN_141244c78 body=188 status=ok
// SIG undefined FUN_141244c78(void)

undefined8 FUN_141244c78(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  void *_Dst;
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  
  if (((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) &&
     ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar4 != -1) {
      lVar1 = *param_1;
      do {
        lVar3 = (longlong)iVar4 * 0x68;
        _Dst = (void *)(lVar1 + lVar3);
        if ((*(longlong *)(lVar1 + lVar3) == *param_3) &&
           (*(longlong *)(lVar1 + 8 + lVar3) == param_3[1])) {
          *(undefined4 *)((longlong)_Dst + 0x58) = 0;
          if (*(longlong *)((longlong)_Dst + 0x50) != 0) {
            FUN_1400020a8();
          }
          FUN_14472eaf0((longlong)_Dst + 0x10);
          memmove(_Dst,param_3,0x60);
          FUN_147006b60(param_1,*param_4);
          *param_4 = iVar4;
          return 1;
        }
        iVar4 = *(int *)((longlong)_Dst + 0x60);
      } while (iVar4 != -1);
    }
  }
  return 0;
}



// FUNCTION 141244d34 FUN_141244d34 body=481 status=ok
// SIG undefined FUN_141244d34(void)

int * FUN_141244d34(longlong *param_1,int *param_2)

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
      FUN_1406a7630(param_1,iVar11);
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
    iVar6 = *(int *)(*param_1 + 4 + lVar3 * 0x68);
    *(int *)(param_1 + 6) = iVar6;
    iVar2 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar6 * 0x68) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar3 * 0x68 + *param_1;
  return param_2;
}



// FUNCTION 141244f16 FUN_141244f16 body=715 status=ok
// SIG undefined FUN_141244f16(void)

void FUN_141244f16(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  longlong *plVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  ulonglong uVar16;
  undefined1 auStack_98 [40];
  int local_70;
  uint local_6c;
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
    plVar1 = param_1 + 7;
    FUN_144a1cbf0(plVar1,0,uVar14,4);
    if (0 < (int)uVar14) {
      uVar6 = 0;
      do {
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(undefined4 *)((longlong)plVar9 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar6) * 4) =
             0xffffffff;
        uVar6 = uVar6 + 1;
      } while (uVar14 != uVar6);
    }
    local_60 = param_1 + 2;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    if ((int)param_1[5] == 0) {
      uVar16 = 1;
      local_58._0_4_ = 0xffffffff;
      local_58._4_4_ = 0;
      local_68._0_4_ = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      uVar16 = local_68 >> 0x20;
    }
    iVar7 = (int)local_68;
    uVar14 = (uint)local_58;
    iVar15 = local_58._4_4_;
    iVar13 = local_50;
    if (local_58._4_4_ < (int)local_60[3]) {
      do {
        local_70 = iVar13;
        local_6c = uVar14;
        lVar12 = *param_1;
        lVar11 = (longlong)iVar15 * 0x68;
        uVar3 = *(undefined8 *)(lVar12 + lVar11);
        uVar4 = *(undefined8 *)(lVar12 + 8 + lVar11);
        uVar14 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar6 = (uint)((ulonglong)uVar3 >> 0x10);
        uVar8 = (uint)uVar3 & 0xffff;
        uVar8 = ((uint)uVar3 << 0x10 | uVar8) + (int)((ulonglong)uVar3 >> 0x20) +
                (uVar6 << 0x13 | uVar6 & 0xffff) + (uVar8 >> 4);
        uVar6 = (uint)uVar4 & 0xffff;
        uVar10 = (longlong)
                 (int)((uVar8 >> 2) +
                       ((uint)uVar4 << 0x10 | uVar6) + (int)((ulonglong)uVar4 >> 0x20) +
                       (uVar14 << 0x13 | uVar14 & 0xffff) + (uVar6 >> 4) + uVar8 * 0x40 + 0x9e3779b9
                      ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar13 = (int)uVar10;
        *(int *)(lVar12 + 100 + lVar11) = iVar13;
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(undefined4 *)(lVar12 + 0x60 + lVar11) =
             *(undefined4 *)((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(int *)((longlong)plVar9 + ((longlong)iVar13 & (longlong)(int)param_1[9] - 1U) * 4) =
             iVar15;
        uVar14 = ~(uint)uVar16 & local_6c;
        plVar9 = (longlong *)local_60[2];
        if ((longlong *)local_60[2] == (longlong *)0x0) {
          plVar9 = local_60;
        }
        iVar2 = (int)local_60[3];
        lVar12 = (longlong)iVar7;
        uVar6 = *(uint *)((longlong)plVar9 + lVar12 * 4) & uVar14;
        iVar13 = local_70;
        if (uVar6 == 0) {
          iVar15 = iVar2 + 0x1e;
          if (-1 < iVar2 + -1) {
            iVar15 = iVar2 + -1;
          }
          iVar15 = iVar15 >> 5;
          iVar5 = iVar15;
          if (iVar15 < iVar7) {
            iVar5 = iVar7;
          }
          if (iVar15 <= iVar7) break;
          lVar11 = 0;
          while( true ) {
            iVar13 = iVar13 + 0x20;
            uVar6 = *(uint *)((longlong)plVar9 + lVar11 * 4 + lVar12 * 4 + 4);
            if (uVar6 != 0) break;
            lVar11 = lVar11 + 1;
            if (iVar5 - lVar12 == lVar11) goto LAB_14124518b;
          }
          iVar7 = iVar7 + (int)lVar11 + 1;
          uVar14 = 0xffffffff;
        }
        uVar16 = (ulonglong)(-uVar6 & uVar6);
        uVar10 = uVar16 * 2 + 1;
        lVar12 = 0x3f;
        if (uVar10 != 0) {
          for (; uVar10 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        iVar15 = (iVar13 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
      } while (iVar15 < iVar2);
    }
  }
LAB_14124518b:
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412451e2 FUN_1412451e2 body=180 status=ok
// SIG undefined FUN_1412451e2(void)

void FUN_1412451e2(undefined8 *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  *param_1 = &PTR_FUN_14a2a0410;
  lVar3 = 0;
  do {
    puVar2 = *(undefined8 **)((longlong)param_1 + lVar3 + 0x150);
    if (puVar2 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar2 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(puVar2,1);
      }
    }
    lVar3 = lVar3 + -8;
  } while (lVar3 != -0x28);
  lVar3 = param_1[0x25];
  if (lVar3 != 0) {
    FUN_14726b39c(lVar3);
    FUN_1400020a8(lVar3);
  }
  lVar3 = param_1[0x24];
  if (lVar3 != 0) {
    FUN_145852956(lVar3);
    FUN_1400020a8(lVar3);
  }
  FUN_145852920(param_1 + 0x1d);
  if (param_1[0x1a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xe] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 141245296 FUN_141245296 body=107 status=ok
// SIG undefined FUN_141245296(void)

void FUN_141245296(longlong param_1,uint param_2)

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
  if ((int)param_2 < 1) {
    if (iVar3 < *(int *)(param_1 + 0x48)) {
LAB_1412452e5:
      FUN_14039512e(param_1,param_2);
      *(int *)(param_1 + 0x48) = iVar3;
      FUN_144972968(param_1);
      return;
    }
  }
  else if (*(int *)(param_1 + 0x48) != iVar3) goto LAB_1412452e5;
  FUN_141245302(param_1);
  FUN_14039512e(param_1,param_2);
  return;
}



// FUNCTION 141245302 FUN_141245302 body=335 status=ok
// SIG undefined FUN_141245302(void)

void FUN_141245302(longlong *param_1)

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
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  iVar6 = (int)param_1[9];
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
  else if (0 < iVar6) {
    lVar3 = 0;
    do {
      *(undefined4 *)((longlong)plVar5 + lVar3 * 4) = 0xffffffff;
      lVar3 = lVar3 + 1;
    } while (lVar3 < (int)param_1[9]);
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141245452 FUN_141245452 body=107 status=ok
// SIG undefined FUN_141245452(void)

void FUN_141245452(longlong param_1,uint param_2)

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
  if ((int)param_2 < 1) {
    if (iVar3 < *(int *)(param_1 + 0x48)) {
LAB_1412454a1:
      FUN_1401958ec(param_1,param_2);
      *(int *)(param_1 + 0x48) = iVar3;
      FUN_146862c60(param_1);
      return;
    }
  }
  else if (*(int *)(param_1 + 0x48) != iVar3) goto LAB_1412454a1;
  FUN_1412454be(param_1);
  FUN_1401958ec(param_1,param_2);
  return;
}



// FUNCTION 1412454be FUN_1412454be body=335 status=ok
// SIG undefined FUN_1412454be(void)

void FUN_1412454be(longlong *param_1)

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
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  iVar6 = (int)param_1[9];
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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x1c + (longlong)iVar4 * 0x20) * 4) =
             0xffffffff;
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
        FUN_1449c0562(&local_70);
        iVar4 = local_60._4_4_;
        uVar2 = local_60;
      } while (local_78 != param_1 ||
               ((longlong *)CONCAT44(uStack_64,uStack_68) != plVar1 || local_60._4_4_ != iVar6));
    }
  }
  else if (0 < iVar6) {
    lVar3 = 0;
    do {
      *(undefined4 *)((longlong)plVar5 + lVar3 * 4) = 0xffffffff;
      lVar3 = lVar3 + 1;
    } while (lVar3 < (int)param_1[9]);
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14124560e FUN_14124560e body=107 status=ok
// SIG undefined FUN_14124560e(void)

void FUN_14124560e(longlong param_1,uint param_2)

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
  if ((int)param_2 < 1) {
    if (iVar3 < *(int *)(param_1 + 0x48)) {
LAB_14124565d:
      FUN_140177e76(param_1,param_2);
      *(int *)(param_1 + 0x48) = iVar3;
      FUN_1403afb7e(param_1);
      return;
    }
  }
  else if (*(int *)(param_1 + 0x48) != iVar3) goto LAB_14124565d;
  FUN_14124567a(param_1);
  FUN_140177e76(param_1,param_2);
  return;
}



// FUNCTION 14124567a FUN_14124567a body=335 status=ok
// SIG undefined FUN_14124567a(void)

void FUN_14124567a(longlong *param_1)

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
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  iVar6 = (int)param_1[9];
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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x24 + (longlong)iVar4 * 0x28) * 4) =
             0xffffffff;
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
        FUN_1449c0562(&local_70);
        iVar4 = local_60._4_4_;
        uVar2 = local_60;
      } while (local_78 != param_1 ||
               ((longlong *)CONCAT44(uStack_64,uStack_68) != plVar1 || local_60._4_4_ != iVar6));
    }
  }
  else if (0 < iVar6) {
    lVar3 = 0;
    do {
      *(undefined4 *)((longlong)plVar5 + lVar3 * 4) = 0xffffffff;
      lVar3 = lVar3 + 1;
    } while (lVar3 < (int)param_1[9]);
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1412457ca FUN_1412457ca body=100 status=ok
// SIG undefined FUN_1412457ca(void)

void FUN_1412457ca(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x18);
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
  plVar3 = *(longlong **)(param_1 + 8);
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
                    /* WARNING: Could not recover jumptable at 0x000141245822. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14124582e FUN_14124582e body=83 status=ok
// SIG undefined FUN_14124582e(void)

void FUN_14124582e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14ba4c4d0;
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1400020a8();
  }
  plVar3 = *(longlong **)(param_1 + 0x20);
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
                    /* WARNING: Could not recover jumptable at 0x00014124587d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 141245882 FUN_141245882 body=91 status=ok
// SIG undefined FUN_141245882(void)

void FUN_141245882(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_147046636(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (0x80 < *(uint *)(param_1 + 0x2c)) {
    *(undefined4 *)(param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 1412458de FUN_1412458de body=243 status=ok
// SIG undefined FUN_1412458de(void)

longlong * FUN_1412458de(longlong param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_98 [40];
  longlong local_70 [2];
  longlong *local_60 [2];
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *param_2 = 0;
  param_2[1] = 0;
  iVar1 = *(int *)(param_1 + 0x140);
  if ((longlong)iVar1 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x138);
    lVar4 = 0;
    do {
      local_50 = *(undefined8 *)(lVar3 + lVar4);
      FUN_1400021e4(&local_50,local_70);
      FUN_1412459d2(local_60,local_70);
      iVar2 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar2 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
        FUN_14001d63e(param_2,iVar2);
      }
      FUN_14023423e((longlong)iVar2 * 0x10 + *param_2,local_60);
      if (local_60[0] != (longlong *)0x0) {
        (**(code **)(*local_60[0] + 0x10))();
      }
      if (local_70[0] != 0) {
        FUN_1400020a8();
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412459d2 FUN_1412459d2 body=172 status=ok
// SIG undefined FUN_1412459d2(void)

undefined8 FUN_1412459d2(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_68 [36];
  undefined1 local_44 [4];
  undefined8 local_40;
  int local_38;
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14cb9ad99 == '\x01') {
    FUN_14000bbd8(&local_40,param_2,0);
    FUN_1410d1eba(param_1,&local_40);
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    local_40 = *param_2;
    local_38 = *(int *)(param_2 + 1) + -1;
    if (*(int *)(param_2 + 1) == 0) {
      local_38 = 0;
    }
    FUN_1446e940c(local_44,&local_40);
    FUN_1467d14c4(param_1,DAT_14cb9ad88,local_44,1);
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141245a80 FUN_141245a80 body=40 status=ok
// SIG undefined FUN_141245a80(void)

undefined8 FUN_141245a80(undefined8 param_1,int param_2)

{
  FUN_141245aa8();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141245aa8 FUN_141245aa8 body=717 status=ok
// SIG undefined FUN_141245aa8(void)

void FUN_141245aa8(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b32afe0;
  param_1[5] = &PTR_FUN_14b32b410;
  param_1[6] = &PTR_FUN_14b32b440;
  if ((param_1[0xf1] != 0 & DAT_14cb26569) == 1) {
    FUN_1400848c0(*(undefined8 *)(param_1[0xf1] + 0x50));
  }
  if ((param_1[0xf0] != 0 & DAT_14cb26569) == 1) {
    FUN_1400848c0(*(undefined8 *)(param_1[0xf0] + 0x50));
  }
  if ((param_1[0xef] != 0 & DAT_14cb26569) == 1) {
    FUN_1400848c0(*(undefined8 *)(param_1[0xef] + 0x50));
  }
  if ((param_1[0xee] != 0) && ((DAT_14cb26569 & 1) != 0)) {
    FUN_1400848c0(*(undefined8 *)(param_1[0xee] + 0x50));
  }
  if (param_1[0xe8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xe6] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xe4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xe2] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xd4] != 0) {
    FUN_1400020a8();
  }
  FUN_14068a6c6(param_1[0xca],*(undefined4 *)(param_1 + 0xcb));
  if (param_1[0xca] != 0) {
    FUN_1400020a8();
  }
  FUN_14082b712(param_1 + 0xad,1);
  plVar3 = (longlong *)param_1[0xab];
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
  if (*(char *)(param_1 + 0xa1) == '\x01') {
    *(undefined1 *)(param_1 + 0xa1) = 0;
  }
  param_1[0x78] = &DAT_14a171d50;
  *(undefined4 *)(param_1 + 0x7b) = 0;
  if (*(int *)((longlong)param_1 + 0x3dc) != 0) {
    FUN_140115c12(param_1 + 0x7a,0);
  }
  param_1[0x79] = 0;
  if (param_1[0x7a] != 0) {
    FUN_1400020a8();
  }
  FUN_1403e0ff1(param_1[0x76],*(undefined4 *)(param_1 + 0x77));
  if (param_1[0x76] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x73] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x6f] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x46] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x19] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 141245d76 FUN_141245d76 body=64 status=ok
// SIG undefined FUN_141245d76(void)

void FUN_141245d76(longlong param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 8) = param_2;
    if ((uint)(*(int *)(param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_141245db6();
      return;
    }
  }
  else {
    if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(param_2);
    }
    if (param_2 < iVar1) {
      *(int *)(param_1 + 8) = param_2;
    }
  }
  return;
}



// FUNCTION 141245db6 FUN_141245db6 body=353 status=ok
// SIG undefined FUN_141245db6(void)

void FUN_141245db6(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_141245e3d;
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
LAB_141245e3d:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,4);
  return;
}



// FUNCTION 141245f18 FUN_141245f18 body=150 status=ok
// SIG undefined FUN_141245f18(void)

void FUN_141245f18(longlong param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  bool bVar5;
  
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 8) = 0;
    iVar2 = 0;
  }
  else {
    uVar1 = *(uint *)(param_2 + 0xc);
    *(uint *)(param_1 + 8) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar3 = 0;
    }
    iVar2 = *(int *)(lVar3 + 0x10);
    if (*(int *)(lVar3 + 0x10) == 0) {
      LOCK();
      iVar2 = DAT_14c964868 + 1;
      UNLOCK();
      iVar4 = DAT_14c964868 + 1;
      bVar5 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar2;
      if (bVar5) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar4);
      }
      LOCK();
      iVar2 = *(int *)(lVar3 + 0x10);
      bVar5 = iVar2 == 0;
      if (bVar5) {
        *(int *)(lVar3 + 0x10) = iVar4;
        iVar2 = 0;
      }
      UNLOCK();
      if (bVar5) {
        iVar2 = iVar4;
      }
    }
  }
  *(int *)(param_1 + 0xc) = iVar2;
  return;
}



// FUNCTION 141245fae FUN_141245fae body=1341 status=ok
// SIG undefined FUN_141245fae(void)

void FUN_141245fae(longlong param_1,longlong param_2,char param_3)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined4 uVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  longlong *plVar9;
  longlong *plVar10;
  bool bVar11;
  undefined1 auStack_78 [40];
  longlong local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (((param_3 == '\0') || (param_2 == 0)) || (DAT_14cb71bf8 == '\0')) {
    lVar2 = param_1 + 0x1d0;
    FUN_1412464ec(lVar2);
    lVar3 = param_1 + 0x208;
    FUN_1412464ec(lVar3);
    FUN_1412464ec(param_1 + 0x240);
    FUN_1401c4d5c(lVar3,param_2,lVar2);
    FUN_1401c4d5c(param_1 + 0x240,param_2,lVar3);
    uVar5 = DAT_14cb1c840;
    if (param_2 != 0) {
      if (DAT_14c9a7d10 == (undefined8 *)0x0) {
        DAT_14c9a7d10 = (undefined8 *)FUN_14001cc68(0x20,0x10);
        *DAT_14c9a7d10 = 0;
        DAT_14c9a7d10[1] = 0;
        DAT_14c9a7d10[2] = 0;
        DAT_14c9a7d10[3] = 0;
      }
      FUN_14005915a(DAT_14c9a7d10,&local_50,uVar5,param_2);
      plVar10 = local_48;
      lVar6 = local_50;
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
        plVar9 = local_48 + 1;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)*plVar9 == 0) {
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
      plVar9 = local_48;
      if (local_48 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_48 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
          (**(code **)*local_48)(local_48);
          LOCK();
          piVar1 = (int *)((longlong)plVar9 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar9 + 0x10))(plVar9);
          }
        }
      }
      if (plVar10 != (longlong *)0x0) {
        iVar8 = (int)plVar10[1];
        do {
          plVar9 = (longlong *)0x0;
          if (iVar8 == 0) break;
          LOCK();
          iVar7 = (int)plVar10[1];
          bVar11 = iVar8 == iVar7;
          if (bVar11) {
            *(int *)(plVar10 + 1) = iVar8 + 1;
            iVar7 = iVar8;
          }
          iVar8 = iVar7;
          UNLOCK();
          plVar9 = plVar10;
        } while (!bVar11);
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
        }
        if (plVar9 != (longlong *)0x0) {
          if (lVar6 != 0) {
            FUN_1401c4d5c(lVar2,param_2,lVar6 + 0x20);
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
        }
      }
    }
    FUN_140362812(&local_50,param_2);
    if (local_48 != (longlong *)0x0) {
      iVar8 = (int)local_48[1];
      do {
        if (iVar8 == 0) {
          plVar10 = (longlong *)0x0;
          break;
        }
        LOCK();
        iVar7 = (int)local_48[1];
        bVar11 = iVar8 == iVar7;
        if (bVar11) {
          *(int *)(local_48 + 1) = iVar8 + 1;
          iVar7 = iVar8;
        }
        iVar8 = iVar7;
        UNLOCK();
        plVar10 = local_48;
      } while (!bVar11);
      LOCK();
      piVar1 = (int *)((longlong)local_48 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_48 + 0x10))();
      }
      if (plVar10 != (longlong *)0x0) {
        if (local_50 != 0) {
          FUN_1401c4d5c(lVar2,param_2,local_50 + 0x20);
        }
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
    }
    if ((param_2 != 0) && (DAT_14cadbee0 == '\x01')) {
      FUN_1401c4d5c(param_2 + 0x950,param_2,lVar3);
    }
  }
  else {
    lVar2 = param_1 + 0x1d0;
    FUN_1412465d2(lVar2,param_2);
    lVar3 = param_1 + 0x208;
    FUN_1412465d2(lVar3,param_2);
    FUN_1412465d2(param_1 + 0x240,param_2);
    FUN_14082bc44(lVar3,param_2,lVar2);
    FUN_14082bc44(param_1 + 0x240,param_2,lVar3);
    FUN_141246736(&local_50,param_2);
    if (local_48 != (longlong *)0x0) {
      iVar8 = (int)local_48[1];
      do {
        if (iVar8 == 0) {
          plVar10 = (longlong *)0x0;
          break;
        }
        LOCK();
        iVar7 = (int)local_48[1];
        bVar11 = iVar8 == iVar7;
        if (bVar11) {
          *(int *)(local_48 + 1) = iVar8 + 1;
          iVar7 = iVar8;
        }
        iVar8 = iVar7;
        UNLOCK();
        plVar10 = local_48;
      } while (!bVar11);
      LOCK();
      piVar1 = (int *)((longlong)local_48 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_48 + 0x10))();
      }
      if (plVar10 != (longlong *)0x0) {
        if (local_50 != 0) {
          FUN_14082bc44(lVar2,param_2,local_50 + 0x20);
        }
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
    }
    FUN_140362812(&local_50,param_2);
    if (local_48 != (longlong *)0x0) {
      iVar8 = (int)local_48[1];
      do {
        if (iVar8 == 0) {
          plVar10 = (longlong *)0x0;
          break;
        }
        LOCK();
        iVar7 = (int)local_48[1];
        bVar11 = iVar8 == iVar7;
        if (bVar11) {
          *(int *)(local_48 + 1) = iVar8 + 1;
          iVar7 = iVar8;
        }
        iVar8 = iVar7;
        UNLOCK();
        plVar10 = local_48;
      } while (!bVar11);
      LOCK();
      piVar1 = (int *)((longlong)local_48 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_48 + 0x10))();
      }
      if (plVar10 != (longlong *)0x0) {
        if (local_50 != 0) {
          FUN_14082bc44(lVar2,param_2,local_50 + 0x20);
        }
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
    }
    FUN_140d24d2e(&local_50,param_2);
    if (local_48 != (longlong *)0x0) {
      iVar8 = (int)local_48[1];
      do {
        if (iVar8 == 0) {
          plVar10 = (longlong *)0x0;
          break;
        }
        LOCK();
        iVar7 = (int)local_48[1];
        bVar11 = iVar8 == iVar7;
        if (bVar11) {
          *(int *)(local_48 + 1) = iVar8 + 1;
          iVar7 = iVar8;
        }
        iVar8 = iVar7;
        UNLOCK();
        plVar10 = local_48;
      } while (!bVar11);
      LOCK();
      piVar1 = (int *)((longlong)local_48 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_48 + 0x10))();
      }
      if (plVar10 != (longlong *)0x0) {
        if (local_50 != 0) {
          FUN_14082bc44(lVar2,param_2,local_50 + 0x20);
        }
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
    }
    if (DAT_14cadbee0 == '\x01') {
      FUN_14082bc44(param_2 + 0x950,param_2,lVar3);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1412464ec FUN_1412464ec body=229 status=ok
// SIG undefined FUN_1412464ec(void)

void FUN_1412464ec(longlong param_1)

{
  undefined8 uVar1;
  byte *pbVar2;
  
  pbVar2 = *(byte **)(param_1 + 0x20);
  if ((pbVar2 == (byte *)0x0) || ((*pbVar2 & 1) == 0)) {
    *(undefined1 *)(param_1 + 0xb) = 0;
  }
  else {
    if (*(char *)(param_1 + 0xb) != '\0') {
      uVar1 = *(undefined8 *)(pbVar2 + 0x28);
      FUN_1402eb48e(uVar1,param_1);
      *(undefined1 *)(param_1 + 0xb) = 0;
      FUN_1402eb97e(uVar1,param_1);
      pbVar2 = *(byte **)(param_1 + 0x20);
      if (*(char *)(param_1 + 0xb) != '\0') goto LAB_141246502;
    }
    pbVar2[0x24] = 0;
    pbVar2[0x25] = 0;
    pbVar2[0x26] = 0x80;
    pbVar2[0x27] = 0xbf;
    pbVar2 = *(byte **)(param_1 + 0x20);
  }
LAB_141246502:
  if ((pbVar2 != (byte *)0x0) && ((*pbVar2 & 1) != 0)) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14cb0c040) && (FUN_144b3d300(&DAT_14cb0c040), DAT_14cb0c040 == -1)) {
      FUN_145e17f72(&DAT_14cb0bff0);
      atexit(FUN_14374ca90);
      _Init_thread_footer(&DAT_14cb0c040);
    }
    FUN_1402eb48e(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x28),param_1);
    **(byte **)(param_1 + 0x20) = **(byte **)(param_1 + 0x20) & 0xfe;
  }
  return;
}



// FUNCTION 1412465d2 FUN_1412465d2 body=356 status=ok
// SIG undefined FUN_1412465d2(void)

void FUN_1412465d2(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  byte *pbVar2;
  
  pbVar2 = *(byte **)(param_1 + 0x20);
  if ((pbVar2 == (byte *)0x0) || ((*pbVar2 & 1) == 0)) {
    *(undefined1 *)(param_1 + 0xb) = 0;
  }
  else {
    if (*(char *)(param_1 + 0xb) != '\0') {
      uVar1 = *(undefined8 *)(pbVar2 + 0x28);
      FUN_1402eb48e(uVar1,param_1);
      *(undefined1 *)(param_1 + 0xb) = 0;
      FUN_1402eb97e(uVar1,param_1);
      pbVar2 = *(byte **)(param_1 + 0x20);
      if (*(char *)(param_1 + 0xb) != '\0') goto LAB_1412465ec;
    }
    pbVar2[0x24] = 0;
    pbVar2[0x25] = 0;
    pbVar2[0x26] = 0x80;
    pbVar2[0x27] = 0xbf;
    pbVar2 = *(byte **)(param_1 + 0x20);
  }
LAB_1412465ec:
  if ((pbVar2 != (byte *)0x0) && ((*pbVar2 & 1) != 0)) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14cb0c040) && (FUN_144b3d300(&DAT_14cb0c040), DAT_14cb0c040 == -1)) {
      FUN_145e17f72(&DAT_14cb0bff0);
      atexit(FUN_14374ca90);
      _Init_thread_footer(&DAT_14cb0c040);
    }
    FUN_1402eb48e(*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x28),param_1);
    **(byte **)(param_1 + 0x20) = **(byte **)(param_1 + 0x20) & 0xfe;
  }
  if ((param_2 != 0) && (*(longlong *)(param_2 + 0x30) != 0)) {
    pbVar2 = *(byte **)(param_1 + 0x20);
    if ((pbVar2 == (byte *)0x0) || ((*pbVar2 & 1) == 0)) {
      *(undefined1 *)(param_1 + 0xb) = 1;
    }
    else if (*(char *)(param_1 + 0xb) == '\0') {
      uVar1 = *(undefined8 *)(pbVar2 + 0x28);
      FUN_1402eb48e(uVar1,param_1);
      *(undefined1 *)(param_1 + 0xb) = 1;
      FUN_1402eb97e(uVar1,param_1);
      if (*(char *)(param_1 + 0xb) == '\0') {
        *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x24) = 0xbf800000;
      }
    }
    FUN_1402eb876(param_1,*(undefined8 *)(param_2 + 0x30));
    return;
  }
  return;
}



// FUNCTION 141246736 FUN_141246736 body=318 status=ok
// SIG undefined FUN_141246736(void)

longlong * FUN_141246736(longlong *param_1,longlong param_2)

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
  uVar4 = DAT_14cb1c840;
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



// FUNCTION 14124687e FUN_14124687e body=487 status=ok
// SIG undefined FUN_14124687e(void)

undefined8 * FUN_14124687e(undefined8 *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  uVar2 = FUN_14007ca06();
  FUN_141246b4c(param_1,uVar2);
  *param_1 = &PTR_FUN_14b8597d0;
  param_1[5] = &PTR_LAB_14b85a2b0;
  param_1[6] = &PTR_LAB_14b85a2f0;
  param_1[0x55] = &PTR_LAB_14b85a340;
  param_1[0x56] = &PTR_LAB_14b85a3c0;
  param_1[0x57] = &PTR_LAB_14b85a3d0;
  param_1[0xf3] = 0;
  param_1[0xf4] = 0;
  param_1[0xf5] = 0;
  *(undefined4 *)(param_1 + 0xf6) = 0x41f00000;
  *(undefined4 *)((longlong)param_1 + 0x7b4) = 0x3e3851ec;
  *(undefined4 *)(param_1 + 0xf7) = 0x3f2147ae;
  *(undefined4 *)((longlong)param_1 + 0x7bc) = 0x3f68f5c3;
  param_1[0xf8] = 0x3f8000003f4ccccd;
  *(undefined4 *)(param_1 + 0xf9) = 0;
  *(undefined1 *)((longlong)param_1 + 0x7cc) = 1;
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
  param_1[0xfa] = DAT_14c844840;
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
  *(undefined4 *)(param_1 + 0xfb) = 0;
  lVar3 = FUN_141246a66();
  if ((lVar3 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar3);
  }
  param_1[0xcb] = lVar3;
  *(undefined1 *)((longlong)param_1 + 0x699) = 0;
  param_1[0xcc] = 0x5000000258;
  *(undefined2 *)(param_1 + 0xd0) = 0x100;
  return param_1;
}



// FUNCTION 141246a66 FUN_141246a66 body=228 status=ok
// SIG undefined FUN_141246a66(void)

longlong FUN_141246a66(void)

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
  if (DAT_14cbb3ef0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14634e584;
    local_38 = &LAB_148c61677;
    local_40 = FUN_1418d12c2;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x2e0;
    FUN_14081cfa3(L"/Script/OakGame",L"OakUILabelWidget",&DAT_14cbb3ef0,&DAT_148c61676);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbb3ef0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141246b4c FUN_141246b4c body=1593 status=ok
// SIG undefined FUN_141246b4c(void)

undefined8 * FUN_141246b4c(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  byte bVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1400ea892();
  *param_1 = &PTR_FUN_14a53ddb0;
  param_1[5] = &PTR_FUN_14a53e890;
  param_1[6] = &PTR_LAB_14a53e8d0;
  param_1[0x55] = &PTR_FUN_14a53e920;
  param_1[0x56] = &PTR_FUN_14a53e9a0;
  param_1[0x57] = &PTR_FUN_14a53e9b0;
  param_1[0xcb] = 0;
  param_1[0xcc] = 0x1f4000001f4;
  *(undefined2 *)(param_1 + 0xcd) = 0x100;
  *(undefined1 *)(param_1 + 0xd3) = 0;
  *(undefined8 *)((longlong)param_1 + 0x66c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x674) = 0;
  *(undefined8 *)((longlong)param_1 + 0x679) = 0;
  *(undefined2 *)((longlong)param_1 + 0x699) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0x69b) = 0;
  param_1[0xd4] = 0;
  param_1[0xd5] = 0;
  param_1[0xd6] = 0;
  *(undefined4 *)(param_1 + 0xd7) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x6bc) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xd8) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x6c4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xd9) = 0x3f800000;
  *(undefined2 *)((longlong)param_1 + 0x6cc) = 1;
  *(undefined1 *)((longlong)param_1 + 0x6ce) = 0;
  param_1[0xda] = 0;
  param_1[0xdb] = 0;
  param_1[0xdc] = 0;
  param_1[0xdd] = 0;
  param_1[0xde] = 0;
  param_1[0xdf] = 0;
  param_1[0xe0] = 0;
  param_1[0xe1] = 0;
  param_1[0xe2] = 0;
  FUN_1446f470e((longlong)param_1 + 0x71c,L"WidgetComponentScreenLayer",1);
  *(undefined4 *)((longlong)param_1 + 0x724) = 0xffffff9c;
  *(undefined1 *)(param_1 + 0xe5) = 0;
  param_1[0xe6] = 0x4066800000000000;
  *(char *)(param_1 + 0xe7) = DAT_14cab9000 + '\x01';
  param_1[0xe8] = 0;
  param_1[0xe9] = 0;
  *(undefined8 *)((longlong)param_1 + 0x782) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78a) = 0;
  param_1[0xef] = 0;
  param_1[0xf0] = 0;
  param_1[0xed] = 0;
  param_1[0xee] = 0;
  *(byte *)((longlong)param_1 + 0x4a) = *(byte *)((longlong)param_1 + 0x4a) | 2;
  *(byte *)((longlong)param_1 + 0x9d) = *(byte *)((longlong)param_1 + 0x9d) | 0x80;
  local_38 = DAT_14c846508;
  local_48 = (undefined4)DAT_14c8464f8;
  uStack_44 = DAT_14c8464f8._4_4_;
  uStack_40 = (undefined4)DAT_14c846500;
  uStack_3c = DAT_14c846500._4_4_;
  local_58 = 0;
  FUN_14020f75c(param_1,&local_48,0,0);
  FUN_1446f470e(&local_50,&DAT_149e3cc38,1);
  FUN_140078ec2(param_1 + 0x82,local_50);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cab9020) {
    FUN_144b3d300(&DAT_14cab9020);
    if (DAT_14cab9020 == -1) {
      FUN_1458531b6(&DAT_14cab9008,L"/Engine/EngineMaterials/Widget3DPassThrough_Translucent",0);
      atexit(FUN_143335302);
      _Init_thread_footer(&DAT_14cab9020);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cab9040) {
    FUN_144b3d300(&DAT_14cab9040);
    if (DAT_14cab9040 == -1) {
      FUN_1458531b6(&DAT_14cab9028,
                    L"/Engine/EngineMaterials/Widget3DPassThrough_Translucent_OneSided",0);
      atexit(FUN_143335341);
      _Init_thread_footer(&DAT_14cab9040);
    }
  }
  lVar5 = DAT_14cab9018;
  if (DAT_14c950c29 == 1) {
    if (DAT_14cab9018 == 0) {
      lVar5 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar5 = DAT_14cab9018;
    }
  }
  bVar4 = DAT_14c950c29;
  param_1[0xdb] = lVar5;
  lVar5 = DAT_14cab9038;
  if ((bVar4 & 1) != 0) {
    if (DAT_14cab9038 == 0) {
      lVar5 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar5 = DAT_14cab9038;
    }
  }
  param_1[0xdc] = lVar5;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cab9060) {
    FUN_144b3d300(&DAT_14cab9060);
    if (DAT_14cab9060 == -1) {
      FUN_1458531b6(&DAT_14cab9048,L"/Engine/EngineMaterials/Widget3DPassThrough_Opaque",0);
      atexit(FUN_143335380);
      _Init_thread_footer(&DAT_14cab9060);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cab9080) {
    FUN_144b3d300(&DAT_14cab9080);
    if (DAT_14cab9080 == -1) {
      FUN_1458531b6(&DAT_14cab9068,L"/Engine/EngineMaterials/Widget3DPassThrough_Opaque_OneSided",0)
      ;
      atexit(FUN_1433353bf);
      _Init_thread_footer(&DAT_14cab9080);
    }
  }
  lVar5 = DAT_14cab9058;
  if (DAT_14c950c29 == 1) {
    if (DAT_14cab9058 == 0) {
      lVar5 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar5 = DAT_14cab9058;
    }
  }
  bVar4 = DAT_14c950c29;
  param_1[0xdd] = lVar5;
  lVar5 = DAT_14cab9078;
  if ((bVar4 & 1) != 0) {
    if (DAT_14cab9078 == 0) {
      lVar5 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar5 = DAT_14cab9078;
    }
  }
  param_1[0xde] = lVar5;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cab90a0) {
    FUN_144b3d300(&DAT_14cab90a0);
    if (DAT_14cab90a0 == -1) {
      FUN_1458531b6(&DAT_14cab9088,L"/Engine/EngineMaterials/Widget3DPassThrough_Masked",0);
      atexit(FUN_1433353fe);
      _Init_thread_footer(&DAT_14cab90a0);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cab90c0) {
    FUN_144b3d300(&DAT_14cab90c0);
    if (DAT_14cab90c0 == -1) {
      FUN_1458531b6(&DAT_14cab90a8,L"/Engine/EngineMaterials/Widget3DPassThrough_Masked_OneSided",0)
      ;
      atexit(FUN_14333543d);
      _Init_thread_footer(&DAT_14cab90c0);
    }
  }
  lVar5 = DAT_14cab9098;
  if (DAT_14c950c29 == 1) {
    if (DAT_14cab9098 == 0) {
      lVar5 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar5 = DAT_14cab9098;
    }
  }
  bVar4 = DAT_14c950c29;
  param_1[0xdf] = lVar5;
  lVar5 = DAT_14cab90b8;
  if ((bVar4 & 1) != 0) {
    if (DAT_14cab90b8 == 0) {
      lVar5 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar5 = DAT_14cab90b8;
    }
  }
  param_1[0xe0] = lVar5;
  uVar3 = DAT_14c8463f8._4_4_;
  uVar2 = (undefined4)DAT_14c8463f8;
  uVar1 = DAT_14c8463f0._4_4_;
  *(undefined4 *)(param_1 + 0xea) = (undefined4)DAT_14c8463f0;
  *(undefined4 *)((longlong)param_1 + 0x754) = uVar1;
  *(undefined4 *)(param_1 + 0xeb) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x75c) = uVar3;
  *(byte *)((longlong)param_1 + 0x2de) = *(byte *)((longlong)param_1 + 0x2de) & 0xef;
  *(undefined2 *)(param_1 + 0xca) = 0;
  param_1[0xd1] = 0x3fe0000000000000;
  param_1[0xd2] = 0x3fe0000000000000;
  *(undefined1 *)(param_1 + 0xe3) = 0;
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141247186 FUN_141247186 body=163 status=ok
// SIG undefined FUN_141247186(void)

void FUN_141247186(undefined8 param_1)

{
  DWORD DVar1;
  DWORD dwTlsIndex;
  DWORD DVar2;
  LPVOID lpTlsValue;
  bool bVar3;
  
  dwTlsIndex = DAT_14c75ec34;
  if (DAT_14c75ec34 == 0xffffffff) {
    dwTlsIndex = TlsAlloc();
    DVar2 = 0xffffffff;
    LOCK();
    bVar3 = DAT_14c75ec34 != 0xffffffff;
    DVar1 = dwTlsIndex;
    if (bVar3) {
      DVar2 = DAT_14c75ec34;
      DVar1 = DAT_14c75ec34;
    }
    DAT_14c75ec34 = DVar1;
    UNLOCK();
    if (bVar3) {
      TlsFree(dwTlsIndex);
      dwTlsIndex = DVar2;
    }
  }
  lpTlsValue = TlsGetValue(dwTlsIndex);
  if (lpTlsValue == (LPVOID)0x0) {
    lpTlsValue = (LPVOID)FUN_14001cc68(0x60,0x10);
    FUN_141073f92(lpTlsValue);
    FUN_140fddf04(lpTlsValue);
    TlsSetValue(dwTlsIndex,lpTlsValue);
  }
  if (*(int *)((longlong)lpTlsValue + 0x28) == 0) {
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectGlobals.cpp",0x1242,
                  L"FObjectFinders can\'t be used outside of constructors to find %s",param_1);
  }
  return;
}



// FUNCTION 14124722a FUN_14124722a body=292 status=ok
// SIG undefined FUN_14124722a(void)

void FUN_14124722a(longlong *param_1,char param_2)

{
  ulonglong uVar1;
  short *psVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  ulonglong uVar11;
  
  iVar9 = (int)param_1[1];
  lVar10 = (longlong)iVar9;
  if (lVar10 == 0) {
    return;
  }
  lVar4 = lVar10 * 2;
  lVar5 = 0;
  while (*(short *)(*param_1 + lVar5 * 2) != 0x27) {
    lVar5 = lVar5 + 1;
    lVar4 = lVar4 + -2;
    if (lVar4 == 0) {
      return;
    }
  }
  uVar6 = (uint)lVar5;
  if (uVar6 == 0xffffffff) {
    return;
  }
  uVar11 = lVar10 * 2;
  do {
    if (uVar11 == 0) {
      iVar3 = -1;
      goto LAB_141247289;
    }
    uVar1 = uVar11 - 2;
    psVar2 = (short *)(*param_1 + -2 + uVar11);
    uVar11 = uVar1;
  } while (*psVar2 != 0x27);
  iVar3 = (int)(uVar1 >> 1);
LAB_141247289:
  if ((int)uVar6 < iVar3) {
    uVar7 = uVar6 + 1;
    if ((iVar3 + 0x80000000U != uVar6) &&
       ((longlong)(int)(~uVar6 + iVar3) + (longlong)(int)uVar7 < 0x7fffffff)) {
      iVar8 = iVar9 + -1;
      if (iVar9 == 0) {
        iVar8 = 0;
      }
      if (iVar8 <= iVar3) {
        iVar3 = iVar8;
      }
      if (iVar3 < 1) {
        iVar3 = 0;
      }
      FUN_14496493a(param_1,iVar3,iVar8 - iVar3,0);
      iVar9 = (int)param_1[1];
    }
    uVar6 = iVar9 - 1;
    if (iVar9 == 0) {
      uVar6 = 0;
    }
    if ((int)uVar7 < (int)uVar6) {
      uVar6 = uVar7;
    }
    if (0 < (int)uVar6) {
      if (iVar9 - uVar6 != 0) {
        memmove((void *)*param_1,(void *)(*param_1 + (ulonglong)uVar6 * 2),
                (longlong)(int)(iVar9 - uVar6) * 2);
        iVar9 = (int)param_1[1];
      }
      *(uint *)(param_1 + 1) = iVar9 - uVar6;
    }
  }
  else if (param_2 != '\0') {
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectGlobals.cpp",0x1253,
                  L"Bad path name: %s, missing \' or an incorrect format");
  }
  return;
}



// FUNCTION 14124734e FUN_14124734e body=367 status=ok
// SIG undefined FUN_14124734e(void)

longlong FUN_14124734e(longlong *param_1,undefined4 param_2)

{
  ulonglong uVar1;
  short *psVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined2 *puVar8;
  int iVar9;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined8 local_50;
  undefined1 local_48;
  undefined8 local_40;
  longlong local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar5 = (longlong)(int)param_1[1];
  if (lVar5 != 0) {
    uVar7 = 0;
    do {
      if (*(short *)(*param_1 + uVar7) == 0x2e) {
        if ((int)(~uVar7 >> 1) != 0) goto LAB_1412473f4;
        break;
      }
      uVar7 = uVar7 + 2;
    } while (lVar5 * 2 != uVar7);
  }
  uVar7 = lVar5 * 2;
  do {
    if (uVar7 == 0) goto LAB_1412473f4;
    uVar1 = uVar7 - 2;
    psVar2 = (short *)(*param_1 + -2 + uVar7);
    uVar7 = uVar1;
  } while (*psVar2 != 0x2f);
  iVar9 = (int)(uVar1 >> 1);
  if (iVar9 != -1) {
    FUN_144a49bb4(param_1,&local_30,iVar9 + 1);
    FUN_140002184(param_1,0x2e);
    iVar9 = local_28 + -1;
    if (local_28 == 0) {
      iVar9 = 0;
    }
    FUN_1400020e8(param_1,local_30,iVar9);
    if (local_30 != 0) {
      FUN_1400020a8();
    }
  }
LAB_1412473f4:
  lVar5 = FUN_1402d2740();
  if (*(longlong *)(lVar5 + 0x110) == 0) {
    FUN_140aa6c08();
  }
  if ((int)param_1[1] == 0) {
    puVar8 = &DAT_149dfb77a;
  }
  else {
    puVar8 = (undefined2 *)*param_1;
  }
  uVar4 = FUN_1402d2740();
  local_40 = 0;
  local_50 = 0;
  local_48 = 1;
  local_58 = param_2;
  lVar5 = FUN_1412ecd05(uVar4,0,puVar8,0);
  if (lVar5 != 0) {
    uVar3 = *(uint *)(lVar5 + 0xc);
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar6 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar6 = 0;
    }
    FUN_1447f71cc(lVar6,0x40000000);
  }
  if ((local_20 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar5;
}



// FUNCTION 1412474be FUN_1412474be body=221 status=ok
// SIG undefined FUN_1412474be(void)

longlong FUN_1412474be(void)

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
  if (DAT_14cb1ffb0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147ee7707;
    local_40 = &LAB_1459b8bbc;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x30;
    FUN_14081cfa3(L"/Script/AIModule",L"EnvQueryItemType",&DAT_14cb1ffb0,&DAT_147ee7706);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb1ffb0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412475a2 FUN_1412475a2 body=228 status=ok
// SIG undefined FUN_1412475a2(void)

longlong FUN_1412475a2(void)

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
  if (DAT_14c9a0638 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1459570ce;
    local_38 = &LAB_147088edf;
    local_40 = &LAB_1462a0c18;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x340;
    FUN_14081cfa3(L"/Script/GbxNexus",L"NexusConfigStorePath",&DAT_14c9a0638,&DAT_147088ede);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c9a0638;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141247688 FUN_141247688 body=228 status=ok
// SIG undefined FUN_141247688(void)

longlong FUN_141247688(void)

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
  if (DAT_14c9a4690 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e9e4fe;
    local_38 = &LAB_1470bc4a7;
    local_40 = FUN_1462a8234;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x30;
    FUN_14081cfa3(L"/Script/GbxEngine",L"GbxAnimSetPickerBase",&DAT_14c9a4690,&DAT_1470bc4a6);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c9a4690;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14124776e FUN_14124776e body=228 status=ok
// SIG undefined FUN_14124776e(void)

longlong FUN_14124776e(void)

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
  if (DAT_14caa92c8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_141030f22;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_142b4754c;
    local_38 = &LAB_14749cd37;
    local_40 = &LAB_14632d1f9;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0x3a0;
    FUN_14081cfa3(L"/Script/GeometryCollectionEngine",L"GeometryCollectionActor",&DAT_14caa92c8,
                  FUN_14632d1d2);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14caa92c8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141247854 FUN_141247854 body=228 status=ok
// SIG undefined FUN_141247854(void)

longlong FUN_141247854(void)

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
  if (DAT_14cac79a8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_1478a06cb;
    local_40 = FUN_146394574;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/Engine",L"SkeletonProviderInterface",&DAT_14cac79a8,&DAT_1478a06ca);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cac79a8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14124793a FUN_14124793a body=228 status=ok
// SIG undefined FUN_14124793a(void)

longlong FUN_14124793a(void)

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
  if (DAT_14cae8fa8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = &LAB_1457dfdaa;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147b984c1;
    local_40 = &LAB_1463e884e;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 0x10;
    local_68 = 0x1c0;
    FUN_14081cfa3(L"/Script/Engine",L"LevelStreaming",&DAT_14cae8fa8,FUN_1463e882c);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cae8fa8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141247a20 FUN_141247a20 body=228 status=ok
// SIG undefined FUN_141247a20(void)

longlong FUN_141247a20(void)

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
  if (DAT_14cb1f280 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_146429e70;
    local_38 = &LAB_147ebe795;
    local_40 = &LAB_14642a69c;
    local_48 = &DAT_149e063b2;
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x70;
    FUN_14081cfa3(L"/Script/AIModule",L"BTTaskNode",&DAT_14cb1f280,&DAT_147ebe794);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb1f280;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141247b06 FUN_141247b06 body=228 status=ok
// SIG undefined FUN_141247b06(void)

longlong FUN_141247b06(void)

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
  if (DAT_14cb4af18 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_1484300c4;
    local_40 = FUN_14648ce91;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/InteractiveToolsFramework",L"GizmoAxisSource",&DAT_14cb4af18,
                  FUN_14648ce6a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb4af18;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141247bec FUN_141247bec body=228 status=ok
// SIG undefined FUN_141247bec(void)

longlong FUN_141247bec(void)

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
  if (DAT_14cb4ca38 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1417963e0;
    local_38 = &LAB_1484deb8b;
    local_40 = &LAB_145ef1df1;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x6d0;
    FUN_14081cfa3(L"/Script/ModelingComponents",L"PointSetComponent",&DAT_14cb4ca38,&DAT_1484deb8a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb4ca38;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141247cd2 FUN_141247cd2 body=3188 status=ok
// SIG undefined FUN_141247cd2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong *
FUN_141247cd2(longlong param_1,longlong *param_2,longlong *param_3,longlong param_4,longlong param_5
             )

{
  int *piVar1;
  code *pcVar2;
  longlong lVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 uVar12;
  longlong *plVar13;
  longlong lVar14;
  longlong *plVar15;
  undefined **ppuVar16;
  longlong *plVar17;
  longlong *plVar18;
  bool bVar19;
  float fVar20;
  double dVar21;
  undefined1 auStack_f8 [32];
  undefined1 local_d8;
  longlong local_c8;
  longlong local_c0;
  longlong local_b8;
  longlong local_b0;
  longlong local_a8;
  longlong *local_a0;
  longlong local_98;
  longlong local_90;
  longlong local_88;
  longlong *local_80;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar9 = FUN_1447210f0(param_4);
  if (lVar9 == 0) {
LAB_141248774:
    *param_2 = 0;
    param_2[1] = 0;
LAB_14124877a:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_f8);
  }
  lVar10 = FUN_1402d2278(param_1 + 0x250);
  if ((lVar10 == 0) || (DAT_14c950c29 == 0)) {
    if (lVar10 == 0) goto LAB_141248774;
  }
  else {
    FUN_1456cec3c(lVar10);
  }
  lVar11 = FUN_1402d20ea(param_1 + 0x278);
  if ((lVar11 != 0 & DAT_14c950c29) == 0) {
    if (lVar11 == 0) {
      lVar11 = *(longlong *)(lVar10 + 0x48);
      if ((lVar11 != 0) && (0 < *(int *)(lVar11 + 0x160))) {
        lVar11 = **(longlong **)(lVar11 + 0x158);
        if ((lVar11 != 0 & DAT_14c950c29) != 0) goto LAB_1412487c4;
        if (lVar11 != 0) goto LAB_141247dac;
      }
      goto LAB_141248774;
    }
  }
  else {
LAB_1412487c4:
    FUN_1456cec3c(lVar11);
  }
LAB_141247dac:
  uVar5 = FUN_141248bfa((longlong *)(param_1 + 0x2a0),0,0xbf800000);
  local_b8 = lVar10;
  local_b0 = lVar11;
  local_a8 = param_1;
  local_a0 = param_2;
  local_88 = lVar9;
  local_80 = param_3;
  if ((int)uVar5 < 0) {
    local_c8 = 0;
    local_c0 = 0;
    lVar9 = 0;
  }
  else if ((int)uVar5 < *(int *)(param_1 + 0x2a8)) {
    lVar10 = *(longlong *)(param_1 + 0x2a0);
    lVar11 = (ulonglong)uVar5 * 0x20;
    local_c8 = *(longlong *)(lVar10 + lVar11);
    uVar12 = FUN_14477b664(*(undefined8 *)(lVar10 + 8 + lVar11));
    lVar9 = FUN_14477b664(uVar12);
    local_c0 = *(longlong *)(lVar10 + 0x10 + lVar11);
  }
  else {
    local_c8 = 0;
    lVar9 = 0;
    local_c0 = 0;
  }
  local_90 = (longlong)*(int *)(param_4 + 0x3a0);
  local_98 = param_4;
  if (local_90 != 0) {
    local_70 = *(longlong *)(param_4 + 0x398);
    local_90 = local_90 << 3;
    lVar10 = 0;
    local_78 = lVar9;
    do {
      plVar13 = *(longlong **)(local_70 + lVar10);
      if (plVar13 != (longlong *)0x0) {
        if (DAT_14c950c29 == 1) {
          FUN_1456cec3c(local_b0);
        }
        if (plVar13[0x16c] == local_b0) {
          if (plVar13[0x16e] == 0) {
            uVar12 = FUN_1405bc036();
            lVar11 = FUN_14477b664(uVar12);
            plVar13[0x16e] = lVar11;
          }
          if (lVar9 == 0) {
            lVar9 = FUN_1405bc036(0);
          }
          lVar11 = FUN_14477b664(lVar9);
          iVar6 = 0;
          if ((lVar11 != 0) && (plVar15 = *(longlong **)(lVar11 + 0xb8), plVar15 != (longlong *)0x0)
             ) {
            lVar9 = *plVar15;
            pcVar2 = *(code **)(lVar9 + 0x108);
            if (pcVar2 != (code *)&LAB_14478342e && pcVar2 != (code *)&LAB_144783422) {
              cVar4 = (*pcVar2)(plVar15);
              iVar6 = 0;
              if (cVar4 == '\0') goto LAB_141247f2a;
              lVar9 = *plVar15;
            }
            pcVar2 = *(code **)(lVar9 + 0x110);
            ppuVar16 = &PTR_PTR_14c763408;
            if ((pcVar2 != (code *)&LAB_144783426) &&
               (ppuVar16 = &PTR_PTR_14c75f798, pcVar2 != (code *)&LAB_144783432)) {
              ppuVar16 = (undefined **)(*pcVar2)(plVar15);
            }
            iVar6 = FUN_144aff48c(ppuVar16);
          }
LAB_141247f2a:
          lVar14 = plVar13[0x16d];
          lVar3 = plVar13[0x16e];
          iVar7 = 0;
          if ((lVar3 != 0) && (plVar15 = *(longlong **)(lVar3 + 0xb8), plVar15 != (longlong *)0x0))
          {
            lVar9 = *plVar15;
            pcVar2 = *(code **)(lVar9 + 0x108);
            if (pcVar2 != (code *)&LAB_14478342e && pcVar2 != (code *)&LAB_144783422) {
              cVar4 = (*pcVar2)(plVar15);
              iVar7 = 0;
              if (cVar4 == '\0') goto LAB_141247f9a;
              lVar9 = *plVar15;
            }
            pcVar2 = *(code **)(lVar9 + 0x110);
            ppuVar16 = &PTR_PTR_14c763408;
            if ((pcVar2 != (code *)&LAB_144783426) &&
               (ppuVar16 = &PTR_PTR_14c75f798, pcVar2 != (code *)&LAB_144783432)) {
              ppuVar16 = (undefined **)(*pcVar2)(plVar15);
            }
            iVar7 = FUN_144aff48c(ppuVar16);
          }
LAB_141247f9a:
          lVar9 = local_78;
          if ((iVar7 == iVar6) && (lVar14 == local_c8)) {
            if (lVar3 == lVar11) {
LAB_141248678:
              if (DAT_14c950c29 == 1) {
                FUN_1456cec3c(local_b8);
              }
              lVar11 = local_a8;
              if (plVar13[0x170] == local_b8) goto LAB_1412481df;
            }
            else if ((lVar11 != 0) && (lVar3 != 0)) {
              iVar6 = *(int *)(lVar11 + 0x38);
              iVar7 = *(int *)(lVar3 + 0x38);
              if (((iVar6 <= iVar7) &&
                  (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar6 * 8) == lVar11 + 0x30
                  )) || ((iVar7 <= iVar6 &&
                         (*(longlong *)(*(longlong *)(lVar11 + 0x30) + (longlong)iVar7 * 8) ==
                          lVar3 + 0x30)))) goto LAB_141248678;
            }
          }
        }
      }
      lVar10 = lVar10 + 8;
    } while (local_90 != lVar10);
  }
  lVar10 = local_98;
  lVar11 = FUN_1447210f0(local_98);
  if (lVar11 == 0) {
LAB_1412487d8:
    *local_a0 = 0;
    local_a0[1] = 0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_f8);
  }
  local_68 = FUN_141248a28();
  lVar3 = local_b0;
  lVar14 = local_b8;
  if ((local_68 != 0) && (DAT_14c950c29 != 0)) {
    FUN_1456cec3c(local_68);
  }
  local_d8 = 0;
  plVar13 = (longlong *)FUN_140fae5dc(lVar10,&local_68,0,&DAT_14c846480);
  lVar11 = local_a8;
  if (DAT_14c950c29 == 1) {
    FUN_1456cec3c(lVar3);
  }
  plVar13[0x16c] = lVar3;
  if (plVar13[0x16d] != local_c8) {
    plVar13[0x16f] = 0;
  }
  plVar13[0x16d] = local_c8;
  if (plVar13[0x16e] != lVar9) {
    plVar13[0x16f] = 0;
  }
  uVar12 = FUN_14477b664(lVar9);
  lVar9 = FUN_14477b664(uVar12);
  plVar13[0x16e] = lVar9;
  plVar13[0x16f] = local_c0;
  if (DAT_14c950c29 == 1) {
    FUN_1456cec3c(lVar14);
  }
  plVar13[0x170] = lVar14;
  (**(code **)(*plVar13 + 0x638))(plVar13,0,plVar13[0x16c]);
  FUN_141248b0e(plVar13,plVar13[0x170]);
  lVar9 = plVar13[0x16e];
  if (lVar9 == 0) {
    uVar12 = FUN_1405bc036();
    lVar9 = FUN_14477b664(uVar12);
    plVar13[0x16e] = lVar9;
  }
  lVar14 = plVar13[0x16f];
  if (((lVar14 == 0) && (lVar14 = 0, lVar9 != 0)) && (plVar13[0x16d] != 0)) {
    plVar15 = *(longlong **)(lVar9 + 0xb8);
    if ((plVar15 == (longlong *)0x0) ||
       (cVar4 = (**(code **)(*plVar15 + 0x108))(plVar15), cVar4 == '\0')) {
      lVar14 = 0;
    }
    else {
      uVar12 = (**(code **)(*plVar15 + 0x110))(plVar15);
      lVar14 = FUN_144aff482(uVar12,plVar13 + 0x16d);
    }
    plVar13[0x16f] = lVar14;
  }
  FUN_14035842f(plVar13,lVar14);
  if ((plVar13 != (longlong *)0x0) && (DAT_14c950c29 != 0)) {
    FUN_1456cec3c(plVar13);
  }
  iVar6 = *(int *)(lVar10 + 0x3a0);
  *(uint *)(lVar10 + 0x3a0) = iVar6 + 1U;
  if (*(uint *)(lVar10 + 0x3a4) < iVar6 + 1U) {
    FUN_14585359c((longlong *)(lVar10 + 0x398),iVar6);
  }
  *(longlong **)(*(longlong *)(lVar10 + 0x398) + (longlong)iVar6 * 8) = plVar13;
  if ((plVar13 == (longlong *)0x0) || (DAT_14c950c29 == 0)) {
    if (plVar13 == (longlong *)0x0) goto LAB_1412487d8;
  }
  else {
    FUN_1456cec3c(plVar13);
    lVar11 = local_a8;
  }
LAB_1412481df:
  rand();
  plVar15 = (longlong *)FUN_14001cc68(0x300);
  plVar15[1] = (longlong)&DAT_100000001;
  *plVar15 = (longlong)&PTR_FUN_14b965ec0;
  plVar15[3] = lVar11;
  plVar15[2] = (longlong)&PTR_FUN_14b965580;
  plVar15[4] = 0;
  uVar5 = *(uint *)(local_88 + 0xc);
  *(uint *)(plVar15 + 4) = uVar5;
  if ((int)uVar5 < DAT_14c9647dc) {
    lVar9 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8);
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
    bVar19 = DAT_14c964868 < 1000;
    DAT_14c964868 = iVar6;
    if (bVar19) {
      FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                    L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                    iVar7);
    }
    LOCK();
    iVar6 = *(int *)(lVar9 + 0x10);
    bVar19 = iVar6 == 0;
    if (bVar19) {
      *(int *)(lVar9 + 0x10) = iVar7;
      iVar6 = 0;
    }
    UNLOCK();
    if (bVar19) {
      iVar6 = iVar7;
    }
  }
  *(int *)((longlong)plVar15 + 0x24) = iVar6;
  plVar15[5] = lVar11;
  plVar15[6] = 0xffffffff;
  *(undefined4 *)(plVar15 + 7) = 0;
  uVar5 = *(uint *)((longlong)plVar13 + 0xc);
  *(uint *)((longlong)plVar15 + 0x34) = uVar5;
  if ((int)uVar5 < DAT_14c9647dc) {
    lVar9 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8);
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
    bVar19 = DAT_14c964868 < 1000;
    DAT_14c964868 = iVar6;
    if (bVar19) {
      FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                    L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                    iVar7);
    }
    LOCK();
    iVar6 = *(int *)(lVar9 + 0x10);
    bVar19 = iVar6 == 0;
    if (bVar19) {
      *(int *)(lVar9 + 0x10) = iVar7;
      iVar6 = 0;
    }
    UNLOCK();
    if (bVar19) {
      iVar6 = iVar7;
    }
  }
  *(int *)(plVar15 + 7) = iVar6;
  plVar17 = local_80;
  plVar18 = plVar15 + 8;
  for (lVar9 = 0xc; lVar9 != 0; lVar9 = lVar9 + -1) {
    *plVar18 = *plVar17;
    plVar17 = plVar17 + 1;
    plVar18 = plVar18 + 1;
  }
  *(undefined2 *)(plVar15 + 0x14) = 0;
  *(undefined1 *)((longlong)plVar15 + 0xa2) = 0;
  *(undefined4 *)((longlong)plVar15 + 0xa4) = 0;
  *(undefined1 *)((longlong)plVar15 + 0xac) = 0;
  *(undefined1 *)((longlong)plVar15 + 0xb4) = 0;
  plVar15[0x17] = 0;
  *(undefined1 *)(plVar15 + 0x1b) = 0;
  plVar15[0x1c] = 0x3f80000000000000;
  *(undefined4 *)(plVar15 + 0x1d) = 0xffffffff;
  *(undefined2 *)((longlong)plVar15 + 0xec) = 1;
  plVar15[0x1e] = 0;
  plVar15[0x1f] = 0;
  plVar15[0x20] = 0;
  plVar15[0x21] = 0;
  plVar15[0x22] = 0;
  plVar15[0x23] = -1;
  plVar15[0x24] = 0;
  *(undefined1 *)(plVar15 + 0x25) = 0;
  *(undefined1 *)(plVar15 + 0x26) = 0;
  *(undefined8 *)((longlong)plVar15 + 0x134) = 0;
  plVar15[0x28] = -1;
  *(undefined4 *)(plVar15 + 0x29) = 0;
  plVar15[0x2c] = DAT_14cbc5fe8;
  lVar9 = _DAT_14cbc5fe0;
  plVar15[0x2a] = _DAT_14cbc5fd8;
  plVar15[0x2b] = lVar9;
  lVar9 = _DAT_14cbc5fe0;
  plVar15[0x2d] = _DAT_14cbc5fd8;
  plVar15[0x2e] = lVar9;
  plVar15[0x2f] = DAT_14cbc5fe8;
  plVar15[0x30] = 0;
  plVar15[0x31] = 0;
  *(undefined4 *)(plVar15 + 0x32) = 0xffffffff;
  memset(plVar15 + 0x33,0,0x100);
  *(undefined4 *)(plVar15 + 0x4d) = 0xffffffff;
  *(undefined4 *)((longlong)plVar15 + 0x19c) = 0x3f800000;
  *(undefined4 *)((longlong)plVar15 + 0x23c) = 0xffffffff;
  *(undefined4 *)(plVar15 + 0x53) = 0;
  *(undefined2 *)(plVar15 + 0x54) = 0;
  *(undefined1 *)((longlong)plVar15 + 0x2a2) = 0;
  *(undefined8 *)((longlong)plVar15 + 0x2a4) = 0;
  *(undefined8 *)((longlong)plVar15 + 0x2ac) = 0;
  *(undefined8 *)((longlong)plVar15 + 0x2ad) = 0;
  *(undefined8 *)((longlong)plVar15 + 0x2b5) = 0;
  plVar15[0x58] = 0x42c80000;
  *(undefined4 *)(plVar15 + 0x59) = 0x43340000;
  *(undefined1 *)((longlong)plVar15 + 0x2cc) = 0;
  plVar15[0x5a] = 0x3f800000;
  *(undefined1 *)(plVar15 + 0x5b) = 0;
  *(undefined8 *)((longlong)plVar15 + 0x2dc) = 0x3f800000;
  *(undefined1 *)((longlong)plVar15 + 0x2e4) = 0;
  *(undefined8 *)((longlong)plVar15 + 0x2ec) = 0;
  fVar20 = (float)FUN_14085b07e(plVar15[5] + 0x1d0);
  dVar21 = (double)fVar20;
  plVar15[0x10] = (longlong)dVar21;
  plVar15[0x11] = (longlong)dVar21;
  plVar15[0x12] = (longlong)dVar21;
  plVar15[0x13] = 0;
  lVar9 = plVar15[5];
  *(float *)((longlong)plVar15 + 0xbc) = *(float *)(lVar9 + 0x58) * *(float *)(lVar9 + 0x58);
  *(float *)(plVar15 + 0x17) = *(float *)(lVar9 + 0x5c) * *(float *)(lVar9 + 0x5c);
  if (*(char *)(lVar9 + 0x50) == '\x01') {
    param_5 = lVar9 + 0x28;
  }
  else if (*(char *)(param_5 + 0xa0) == '\x01') {
    param_5 = param_5 + 0x78;
  }
  else {
    param_5 = FUN_1408710a5();
    param_5 = param_5 + 0x40;
  }
  lVar9 = FUN_1402d24da(param_5);
  if (lVar9 == 0) {
    *(undefined4 *)((longlong)plVar15 + 0x2ec) = 0;
    iVar6 = 0;
  }
  else {
    uVar5 = *(uint *)(lVar9 + 0xc);
    *(uint *)((longlong)plVar15 + 0x2ec) = uVar5;
    if ((int)uVar5 < DAT_14c9647dc) {
      lVar9 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8);
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
      bVar19 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar6;
      if (bVar19) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar7);
      }
      LOCK();
      iVar6 = *(int *)(lVar9 + 0x10);
      bVar19 = iVar6 == 0;
      if (bVar19) {
        *(int *)(lVar9 + 0x10) = iVar7;
        iVar6 = 0;
      }
      UNLOCK();
      if (bVar19) {
        iVar6 = iVar7;
      }
    }
  }
  *(int *)(plVar15 + 0x5e) = iVar6;
  FUN_14038c772(plVar15 + 2);
  *(undefined1 *)((longlong)plVar15 + 0xed) = 0;
  *(undefined1 *)(plVar15 + 0x14) = 0;
  local_d8 = *(undefined1 *)((longlong)plVar15 + 0xec);
  uVar8 = FUN_141248954(plVar13,plVar15 + 8,(int)plVar15[0x1d],
                        *(undefined4 *)((longlong)plVar15 + 0xe4));
  plVar13 = local_a0;
  *(undefined4 *)(plVar15 + 6) = uVar8;
  *local_a0 = (longlong)(plVar15 + 2);
  local_a0[1] = (longlong)plVar15;
  if (plVar15 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
    UNLOCK();
    LOCK();
    plVar17 = plVar15 + 1;
    *(int *)plVar17 = (int)*plVar17 + -1;
    UNLOCK();
    if ((int)*plVar17 == 0) {
      (**(code **)*plVar15)(plVar15);
      LOCK();
      piVar1 = (int *)((longlong)plVar15 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar15 + 0x10))(plVar15);
        goto LAB_14124877a;
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar13;
}



// FUNCTION 141248954 FUN_141248954 body=212 status=ok
// SIG undefined FUN_141248954(void)

int FUN_141248954(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                 undefined1 param_5)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  
  iVar4 = *(int *)(param_1 + 0x728);
  FUN_141048e2e(param_1,iVar4,0,param_2,1);
  if (*(int *)(param_1 + 0x8c8) != 0) {
    iVar4 = *(int *)(*(longlong *)(param_1 + 0x8c0) + (longlong)iVar4 * 4);
  }
  if (iVar4 != -1) {
    uVar1 = *(undefined4 *)(param_1 + 0xb20);
    iVar2 = *(int *)(param_1 + 0xb38);
    *(uint *)(param_1 + 0xb38) = iVar2 + 1U;
    if (*(uint *)(param_1 + 0xb3c) < iVar2 + 1U) {
      FUN_1418c1fda(param_1 + 0xb30,iVar2);
    }
    lVar3 = *(longlong *)(param_1 + 0xb30);
    lVar5 = (longlong)iVar2 * 0x10;
    *(undefined4 *)(lVar3 + lVar5) = param_3;
    *(undefined4 *)(lVar3 + 4 + lVar5) = uVar1;
    *(undefined4 *)(lVar3 + 8 + lVar5) = param_4;
    *(undefined1 *)(lVar3 + 0xc + lVar5) = param_5;
    FUN_1402d2dd6(param_1,iVar4);
  }
  return iVar4;
}



// FUNCTION 141248a28 FUN_141248a28 body=228 status=ok
// SIG undefined FUN_141248a28(void)

longlong FUN_141248a28(void)

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
  if (DAT_14cba9348 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144b223ce;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14595d144;
    local_38 = &LAB_148c06011;
    local_40 = &LAB_141120610;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0xb90;
    FUN_14081cfa3(L"/Script/OakGame",L"OakCritterInstancedStaticMeshComponent",&DAT_14cba9348,
                  &DAT_148c06010);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cba9348;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141248b0e FUN_141248b0e body=236 status=ok
// SIG undefined FUN_141248b0e(void)

void FUN_141248b0e(longlong *param_1,longlong param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  float fVar3;
  
  if ((param_2 == 0) || (*(int *)(param_2 + 0x40) == 0)) {
    return;
  }
  if (DAT_14c950c29 == '\x01') {
    FUN_14689c22e(param_2);
  }
  param_1[0x165] = param_2;
  lVar2 = param_1[0x16];
  if (lVar2 == 0) {
    lVar2 = FUN_1448abda6(param_1);
    fVar3 = 0.0;
    if (lVar2 == 0) goto LAB_141248b58;
  }
  fVar3 = (float)*(double *)(lVar2 + 0x6d0);
LAB_141248b58:
  *(float *)(param_1 + 0x164) = fVar3;
  (**(code **)(*param_1 + 0xb80))(param_1);
  if (*(int *)((longlong)param_1 + 0x73c) < 0) {
    *(undefined4 *)(param_1 + 0xe7) = 0;
    FUN_144920e50(param_1 + 0xe6,0);
  }
  else {
    *(undefined4 *)(param_1 + 0xe7) = 0;
  }
  uVar1 = (**(code **)(*param_1 + 0xbf0))(param_1);
  *(undefined4 *)(param_1 + 0xf4) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x000141248baf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa78))(param_1,*(undefined8 *)(param_1[0x165] + 0x48));
  return;
}



// FUNCTION 141248bfa FUN_141248bfa body=369 status=ok
// SIG undefined FUN_141248bfa(void)

ulonglong FUN_141248bfa(longlong *param_1,undefined8 param_2,float param_3)

{
  bool bVar1;
  uint uVar2;
  undefined1 *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  float fVar8;
  float fVar9;
  undefined1 auStack_e8 [40];
  undefined1 local_c0 [128];
  undefined1 *local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (param_3 < 0.0) {
    uVar2 = rand();
    param_3 = (float)(uVar2 & 0x7fff) / 32767.0;
  }
  local_40 = (undefined1 *)0x0;
  local_34 = 0x20;
  local_38 = (int)param_1[1];
  uVar5 = (ulonglong)local_38;
  if (0x20 < uVar5) {
    FUN_140fb08bc(local_c0);
  }
  puVar3 = local_40;
  if (local_40 == (undefined1 *)0x0) {
    puVar3 = local_c0;
  }
  memset(puVar3,0,uVar5 << 2);
  uVar5 = 0xffffffff;
  if (0 < (int)param_1[1]) {
    fVar8 = 0.0;
    lVar4 = 0x18;
    lVar6 = 0;
    do {
      puVar3 = local_40;
      if (local_40 == (undefined1 *)0x0) {
        puVar3 = local_c0;
      }
      *(undefined4 *)(puVar3 + lVar6 * 4) = *(undefined4 *)(*param_1 + lVar4);
      puVar3 = local_40;
      if (local_40 == (undefined1 *)0x0) {
        puVar3 = local_c0;
      }
      fVar8 = fVar8 + *(float *)(puVar3 + lVar6 * 4);
      lVar6 = lVar6 + 1;
      uVar2 = *(uint *)(param_1 + 1);
      lVar4 = lVar4 + 0x20;
    } while (lVar6 < (int)uVar2);
    if (0 < (int)uVar2) {
      fVar9 = 0.0;
      uVar7 = 0;
      do {
        bVar1 = fVar9 <= param_3 * fVar8;
        fVar9 = fVar9 + *(float *)(puVar3 + uVar7 * 4);
        if ((bVar1) && (param_3 * fVar8 <= fVar9)) {
          uVar5 = uVar7 & 0xffffffff;
          break;
        }
        uVar7 = uVar7 + 1;
      } while (uVar2 != uVar7);
    }
  }
  if (local_40 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 141248d6c FUN_141248d6c body=508 status=ok
// SIG undefined FUN_141248d6c(void)

void FUN_141248d6c(longlong *param_1)

{
  bool bVar1;
  longlong lVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_68 [44];
  undefined1 local_3c [4];
  int local_38;
  undefined4 local_34;
  undefined1 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  bVar1 = false;
  *(undefined1 *)(param_1 + 0x14a) = 0;
  *(undefined1 *)(param_1 + 0x152) = 0;
  *(undefined1 *)(param_1 + 0x15a) = 0;
  lVar2 = param_1[0xe5];
  if ((*(byte *)((longlong)param_1 + 0x9e) & 0x40) != 0) {
    if ((*(byte *)((longlong)param_1 + 0x9c) & 1) == 0) {
      bVar1 = false;
    }
    else {
      cVar3 = (**(code **)(*param_1 + 0xbd0))(param_1);
      bVar1 = true;
      if (cVar3 != '\0') {
        FUN_1401a1c0e(param_1);
      }
    }
  }
  *(undefined4 *)(param_1 + 0xe5) = 0;
  if (*(int *)((longlong)param_1 + 0x72c) != 0) {
    FUN_1401989ec(param_1 + 0xe4,0);
  }
  *(undefined4 *)(param_1 + 0xf6) = 0;
  if (*(int *)((longlong)param_1 + 0x7b4) != 0) {
    FUN_14482f6fa(param_1 + 0xf5,0);
  }
  *(undefined4 *)(param_1 + 0xfc) = 0;
  if (*(int *)((longlong)param_1 + 0x7e4) != 0) {
    FUN_14481578e(param_1 + 0xfb,0);
  }
  *(undefined4 *)(param_1 + 0x10a) = 0;
  if (*(int *)((longlong)param_1 + 0x854) != 0) {
    FUN_147b4eb80(param_1 + 0x109);
  }
  param_1[0xfd] = 0;
  FUN_1402b6cf0(param_1);
  FUN_14062aa18();
  if ((longlong)DAT_14cae4f40 != 0) {
    lVar5 = 0;
    do {
      if ((*(int *)(DAT_14cae4f38 + 8 + lVar5) != 0) && (*(longlong *)(DAT_14cae4f38 + lVar5) != 0))
      {
        local_30 = local_3c;
        local_3c[0] = 3;
        local_38 = (int)lVar2 + -1;
        local_34 = 0xffffffff;
        local_28 = 1;
        FUN_147b4e6d4();
        break;
      }
      lVar5 = lVar5 + 0x10;
    } while ((longlong)DAT_14cae4f40 * 0x10 != lVar5);
  }
  if (bVar1) {
    plVar4 = DAT_14caca2b8;
    if (DAT_14caca2c0 == 0) {
      plVar4 = (longlong *)0x0;
    }
    (**(code **)(*plVar4 + 0x58))(plVar4,param_1);
    *(byte *)((longlong)param_1 + 0x9e) = *(byte *)((longlong)param_1 + 0x9e) & 0xbf;
  }
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141248f6a FUN_141248f6a body=1413 status=ok
// SIG undefined FUN_141248f6a(void)

undefined8 FUN_141248f6a(longlong *param_1,longlong param_2)

{
  int *piVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined1 auStack_148 [40];
  undefined1 local_120 [4];
  undefined1 local_11c [4];
  longlong *local_118 [2];
  undefined8 local_108;
  longlong *local_100;
  longlong local_f8 [2];
  longlong *local_e8 [2];
  longlong *local_d8 [2];
  ulonglong local_c8;
  undefined *local_c0;
  undefined4 local_b8;
  undefined1 local_b4;
  undefined1 local_90 [8];
  longlong *local_88;
  undefined8 local_80;
  longlong *local_78;
  wchar_t **local_70;
  ulonglong *local_68;
  longlong local_60;
  undefined4 local_58;
  wchar_t *local_50;
  undefined4 local_48;
  longlong *local_40 [2];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_148;
  lVar6 = param_1[0xcc];
  if ((lVar6 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar6);
  }
  if (lVar6 != param_2) {
    lVar6 = param_1[0x15];
    lVar5 = param_1[0x16];
    if ((((((lVar5 == 0) && (lVar5 = FUN_1448abda6(param_1), lVar5 == 0)) ||
          ((*(byte *)(lVar5 + 0x155) & 1) == 0)) ||
         (((*(longlong *)(lVar5 + 0x30) == 0 || (*(int *)(*(longlong *)(lVar5 + 0x30) + 0xa8) == 0))
          || ((param_1[0x15] != 0 && ((*(byte *)(param_1[0x15] + 100) & 0x20) != 0)))))) ||
        (((*(byte *)((longlong)param_1 + 0x9c) & 1) == 0 || (lVar6 == 0)))) ||
       (*(char *)((longlong)param_1 + 0x1fb) != '\0')) {
      bVar2 = DAT_14c950c29;
      if (param_2 == 0 || DAT_14c950c29 != 1) {
        param_1[0xcc] = param_2;
        if (param_2 != 0) goto LAB_141249033;
      }
      else {
        FUN_1456cec3c(param_2);
        param_1[0xcc] = param_2;
        bVar2 = DAT_14c950c29;
LAB_141249033:
        if ((bVar2 & 1) != 0) {
          FUN_1456cec3c(param_2);
          param_2 = param_1[0xcc];
        }
        if (((*(longlong *)(param_2 + 0xe0) != 0) &&
            (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c8442bc)) &&
           (FUN_144b3d300(&DAT_14c8442bc), DAT_14c8442bc == -1)) {
          if (DAT_14c846b14 == '\0') {
            FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                          L"Attempting to get the command line but it hasn\'t been initialized yet."
                         );
          }
          DAT_14c8442b8 = FUN_14054d46e(&DAT_14c846b20,L"nullrhi");
          _Init_thread_footer(&DAT_14c8442bc);
        }
      }
      (**(code **)(*param_1 + 0x310))(param_1);
      if ((*(byte *)((longlong)param_1 + 0x9c) & 2) == 0) {
        cVar3 = (**(code **)(*param_1 + 0x318))(param_1);
        if (cVar3 != '\0') {
          FUN_1400ed49e(param_1);
        }
      }
      else if ((~*(byte *)((longlong)param_1 + 0x9c) & 3) == 0) {
        bVar2 = *(byte *)((longlong)param_1 + 0x9d);
        if ((bVar2 & 1) != 0) {
          if ((param_1[0x16] != 0) || (lVar6 = FUN_1448abda6(param_1), lVar6 != 0))
          goto LAB_141249116;
          bVar2 = *(byte *)((longlong)param_1 + 0x9d);
        }
        *(byte *)((longlong)param_1 + 0x9d) = bVar2 | 1;
        FUN_1401057d4(param_1);
        FUN_14010586c(&DAT_14cad0140,param_1);
      }
LAB_141249116:
      FUN_1406cc378(param_1);
      cVar3 = (**(code **)(*param_1 + 0x460))(param_1);
      *(byte *)((longlong)param_1 + 0x9e) = *(byte *)((longlong)param_1 + 0x9e) & 0xbf | cVar3 << 6;
      if (DAT_14cad39b0 == (longlong *)0x0) {
        plVar8 = (longlong *)FUN_14001cc68(0x60,0x10);
        FUN_1461a8102(plVar8);
        DAT_14cad39b0 = plVar8;
      }
      (**(code **)(*DAT_14cad39b0 + 0x70))(DAT_14cad39b0,param_1);
      (**(code **)(*param_1 + 0x540))();
      plVar8 = DAT_14caca218;
      if (DAT_14caca220 == 0) {
        plVar8 = (longlong *)0x0;
      }
      (**(code **)(*plVar8 + 0x58))(plVar8,param_1);
      *(byte *)((longlong)param_1 + 0x63c) = *(byte *)((longlong)param_1 + 0x63c) | 2;
      uVar7 = 1;
      goto LAB_141249400;
    }
    local_c0 = &DAT_14a492018;
    local_b8 = 3;
    local_b4 = 0;
    uVar4 = FUN_14001a6c0(&local_c0,1);
    local_c8 = (ulonglong)uVar4;
    FUN_14276766e(&local_c0);
    local_f8[0] = 0;
    local_f8[1] = 0;
    FUN_1401031ac(param_1,0,local_f8);
    FUN_140233b1a(local_e8,local_f8);
    local_50 = L"SetMeshOnStatic";
    local_48 = 0xf;
    FUN_1446e940c(local_11c,&local_50);
    local_50 = L"StaticMeshComponent";
    local_48 = 0x13;
    FUN_1446e940c(local_120,&local_50);
    local_50 = L"Calling SetStaticMesh on \'{0}\' but Mobility is Static.";
    local_48 = 0x36;
    FUN_140208c1e(local_118,local_120,local_11c,&local_50);
    FUN_14023409e(&local_108,local_118,1);
    local_50 = (wchar_t *)CONCAT44(local_50._4_4_,4);
    FUN_14023423e(local_40,local_e8);
    local_68 = &local_30;
    local_70 = &local_50;
    FUN_14010d304(&local_60);
    local_80 = local_108;
    local_78 = local_100;
    if (local_100 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_100 + 1) = (int)local_100[1] + 1;
      UNLOCK();
    }
    FUN_14010c016(local_d8,&local_80,&local_60);
    FUN_14007f2db(local_60,local_58);
    if (local_60 != 0) {
      FUN_1400020a8();
    }
    if (local_40[0] != (longlong *)0x0) {
      (**(code **)(*local_40[0] + 0x10))();
    }
    if (local_100 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_100 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
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
    if (local_e8[0] != (longlong *)0x0) {
      (**(code **)(*local_e8[0] + 0x10))();
    }
    FUN_1427679d4(&local_c0,local_90,local_d8);
    if (local_88 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_88 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
        (**(code **)*local_88)(local_88);
        LOCK();
        piVar1 = (int *)((longlong)local_88 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_88 + 0x10))(local_88);
        }
      }
    }
    if (local_d8[0] != (longlong *)0x0) {
      (**(code **)(*local_d8[0] + 0x10))();
    }
    if (local_118[0] != (longlong *)0x0) {
      (**(code **)(*local_118[0] + 0x10))();
    }
    if (local_f8[0] != 0) {
      FUN_1400020a8();
    }
    FUN_1427678c0(&local_c0);
  }
  uVar7 = 0;
LAB_141249400:
  if ((local_30 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412494f0 FUN_1412494f0 body=64 status=ok
// SIG undefined FUN_1412494f0(void)

void FUN_1412494f0(longlong param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar2 = 0;
    do {
      lVar1 = *(longlong *)(param_1 + lVar2 * 8);
      if (lVar1 != 0) {
        FUN_141249530(lVar1);
        FUN_1400020a8(lVar1);
      }
      lVar2 = lVar2 + 1;
    } while (param_2 != (int)lVar2);
  }
  return;
}



// FUNCTION 141249530 FUN_141249530 body=1161 status=ok
// SIG undefined FUN_141249530(void)

void FUN_141249530(undefined8 *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined1 auStack_b8 [32];
  longlong *local_98;
  undefined4 local_90;
  uint uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(char *)((longlong)param_1 + 0x134) == '\0') {
    iVar7 = *(int *)(param_1 + 0x23);
    if ((longlong)iVar7 != 0) {
      lVar5 = param_1[0x22];
      lVar8 = 0;
      do {
        (**(code **)(*(longlong *)*param_1 + 0x18))
                  ((longlong *)*param_1,*(undefined8 *)(lVar5 + lVar8));
        lVar8 = lVar8 + 0x38;
      } while ((longlong)iVar7 * 0x38 - lVar8 != 0);
    }
    *(undefined4 *)(param_1 + 3) = 0;
    if (*(int *)((longlong)param_1 + 0x1c) != 0) {
      FUN_14481578e(param_1 + 2,0);
    }
    *(undefined4 *)(param_1 + 5) = 0;
    if (*(int *)((longlong)param_1 + 0x2c) != 0) {
      FUN_141249aa2(param_1 + 4,0);
    }
    *(undefined4 *)(param_1 + 7) = 0;
    if (*(int *)((longlong)param_1 + 0x3c) != 0) {
      FUN_141249a72(param_1 + 6);
    }
    plVar3 = param_1 + 8;
    iVar7 = *(int *)(param_1 + 0x11);
    if (iVar7 < 2) {
      puVar9 = param_1 + 0xf;
      if ((undefined8 *)param_1[0x10] != (undefined8 *)0x0) {
        puVar9 = (undefined8 *)param_1[0x10];
      }
      iVar6 = iVar7 + 3;
      if (-1 < iVar7) {
        iVar6 = iVar7;
      }
      if (*(int *)(param_1 + 9) - *(int *)((longlong)param_1 + 0x74) < iVar6 >> 2) {
        puVar2 = param_1 + 10;
        local_70 = 0x100000000;
        local_60 = 0xffffffff;
        uStack_58 = 0;
        uStack_68 = puVar2;
        if (*(int *)(param_1 + 0xd) == 0) {
          iVar7 = 0;
        }
        else {
          FUN_1449c0562(&local_70);
          iVar7 = *(int *)(param_1 + 0xd);
        }
        local_90 = (undefined4)local_70;
        uStack_8c = local_70._4_4_;
        uStack_88 = (undefined4)uStack_68;
        uStack_84 = uStack_68._4_4_;
        uStack_78 = CONCAT44(uStack_54,uStack_58);
        local_80 = local_60;
        uVar4 = local_80;
        local_80._4_4_ = (int)((ulonglong)local_60 >> 0x20);
        iVar6 = local_80._4_4_;
        local_98 = plVar3;
        if ((local_80._4_4_ != iVar7) || (local_80 = local_60, uStack_68 != puVar2)) {
          do {
            local_80 = uVar4;
            *(undefined4 *)
             ((longlong)puVar9 + (longlong)*(int *)(*local_98 + 0x1c + (longlong)iVar6 * 0x20) * 4)
                 = 0xffffffff;
            local_80 = CONCAT44(local_80._4_4_,(uint)local_80 & ~uStack_8c);
            FUN_1449c0562(&local_90);
            iVar6 = local_80._4_4_;
            uVar4 = local_80;
          } while (local_98 != plVar3 ||
                   ((undefined8 *)CONCAT44(uStack_84,uStack_88) != puVar2 || local_80._4_4_ != iVar7
                   ));
        }
      }
      else if (iVar7 == 1) {
        lVar5 = 0;
        do {
          *(undefined4 *)((longlong)puVar9 + lVar5 * 4) = 0xffffffff;
          lVar5 = lVar5 + 1;
        } while (lVar5 < *(int *)(param_1 + 0x11));
      }
      FUN_141249a18(plVar3);
    }
    else {
      FUN_141249a18(plVar3);
      *(undefined4 *)(param_1 + 0x11) = 1;
      FUN_14619cf1c(plVar3);
    }
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    if (param_1[0x14] != 0) {
      FUN_1400020a8();
    }
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    if (param_1[0x16] != 0) {
      FUN_1400020a8();
    }
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    if (param_1[0x18] != 0) {
      FUN_1400020a8();
    }
    param_1[0x1e] = 0;
    param_1[0x1f] = 0;
    param_1[0x1c] = 0;
    param_1[0x1d] = 0;
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    *(undefined1 *)(param_1 + 0x20) = 0;
    plVar3 = (longlong *)param_1[0x21];
    param_1[0x21] = 0;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar3 + 2;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        if (*plVar3 != 0) {
          FUN_1400020a8();
        }
        FUN_1400020a8(plVar3);
      }
    }
    FUN_1412499d1(param_1[0x22],*(undefined4 *)(param_1 + 0x23));
    if (param_1[0x22] != 0) {
      FUN_1400020a8();
    }
    param_1[0x22] = 0;
    param_1[0x23] = 0;
    *(undefined4 *)(param_1 + 0x24) = 0;
    FUN_1412499d1(0,0);
    param_1[0x25] = 0xffffffffffffffff;
    *(undefined4 *)(param_1 + 0x26) = 0xffffffff;
    *(undefined1 *)((longlong)param_1 + 0x134) = 1;
  }
  FUN_1412499d1(param_1[0x22],*(undefined4 *)(param_1 + 0x23));
  if (param_1[0x22] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0x21];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar3 + 2;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      if (*plVar3 != 0) {
        FUN_1400020a8();
      }
      FUN_1400020a8(plVar3);
    }
  }
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x11) = 0;
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  FUN_141249a18(param_1 + 8);
  if (param_1[0xc] != 0) {
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
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1412499d1 FUN_1412499d1 body=70 status=ok
// SIG undefined FUN_1412499d1(void)

void FUN_1412499d1(longlong param_1,int param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  
  if (param_2 != 0) {
    plVar2 = (longlong *)(param_1 + 0x28);
    do {
      puVar1 = (undefined8 *)*plVar2;
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
      }
      if (plVar2[-2] != 0) {
        FUN_1400020a8();
      }
      plVar2 = plVar2 + 7;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 141249a18 FUN_141249a18 body=90 status=ok
// SIG undefined FUN_141249a18(void)

void FUN_141249a18(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_1405b3ec2(param_1,0);
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



// FUNCTION 141249a72 FUN_141249a72 body=48 status=ok
// SIG undefined FUN_141249a72(void)

void FUN_141249a72(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,10,1);
  }
  return;
}



// FUNCTION 141249aa2 FUN_141249aa2 body=111 status=ok
// SIG undefined FUN_141249aa2(void)

void FUN_141249aa2(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0xc,1);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0xc)) {
      uVar2 = uVar1 / 0xc & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0xc,1);
  }
  return;
}



// FUNCTION 141249b12 FUN_141249b12 body=70 status=ok
// SIG undefined FUN_141249b12(void)

void FUN_141249b12(longlong param_1)

{
  FUN_1417366bc(*(undefined8 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x48));
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 141249b58 FUN_141249b58 body=92 status=ok
// SIG undefined FUN_141249b58(void)

void FUN_141249b58(longlong *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  bool bVar5;
  
  puVar2 = (undefined8 *)*param_1;
  puVar4 = (undefined8 *)param_1[2];
  do {
    puVar3 = (undefined8 *)*puVar4;
    FUN_1400020a8(puVar4);
    bVar5 = puVar4 != puVar2;
    puVar4 = puVar3;
  } while (bVar5);
  while (puVar3 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*puVar3;
    puVar4 = (undefined8 *)puVar3[1];
    if (puVar4 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar4 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar4)(puVar4,1);
      }
    }
    FUN_1400020a8(puVar3);
    puVar3 = puVar2;
  }
  return;
}



// FUNCTION 141249bb4 FUN_141249bb4 body=180 status=ok
// SIG undefined FUN_141249bb4(void)

int FUN_141249bb4(longlong *param_1,uint param_2,undefined8 *param_3)

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
        local_40 = *(undefined8 *)(lVar3 + (longlong)iVar4 * 0x20);
        cVar1 = FUN_141249c6a(&local_40,&local_48);
        if (cVar1 != '\0') goto LAB_141249c42;
        lVar3 = *param_1;
        iVar4 = *(int *)(lVar3 + 0x18 + (longlong)iVar4 * 0x20);
      } while (iVar4 != -1);
    }
  }
  iVar4 = -1;
LAB_141249c42:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141249c6a FUN_141249c6a body=102 status=ok
// SIG undefined FUN_141249c6a(void)

ulonglong FUN_141249c6a(uint *param_1,uint *param_2)

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



// FUNCTION 141249cd0 FUN_141249cd0 body=330 status=ok
// SIG undefined FUN_141249cd0(void)

void FUN_141249cd0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_141249e1a();
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400337aa();
  }
  iVar1 = *(int *)(param_1 + 0x88);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x80);
    lVar3 = 0;
    do {
      if (*(longlong *)(lVar2 + 0x10 + lVar3) != 0) {
        FUN_1400337aa();
      }
      lVar3 = lVar3 + 0x28;
    } while ((longlong)iVar1 * 0x28 != lVar3);
  }
  iVar1 = *(int *)(param_1 + 0x98);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x90);
    lVar3 = 0;
    do {
      if (*(longlong *)(lVar2 + 0x10 + lVar3) != 0) {
        FUN_1400337aa();
      }
      lVar3 = lVar3 + 0x28;
    } while ((longlong)iVar1 * 0x28 != lVar3);
  }
  iVar1 = *(int *)(param_1 + 0xa8);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0xa0);
    lVar3 = 0;
    do {
      if (*(longlong *)(lVar2 + 0x10 + lVar3) != 0) {
        FUN_1400337aa();
      }
      lVar3 = lVar3 + 0x30;
    } while ((longlong)iVar1 * 0x30 != lVar3);
  }
  iVar1 = *(int *)(param_1 + 0xd8);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0xd0);
    lVar3 = 0;
    do {
      if (*(longlong *)(lVar2 + 0x10 + lVar3) != 0) {
        FUN_1400337aa();
      }
      lVar3 = lVar3 + 0x28;
    } while ((longlong)iVar1 * 0x28 != lVar3);
  }
  iVar1 = *(int *)(param_1 + 0xe8);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0xe0);
    lVar3 = 0;
    do {
      if (*(longlong *)(lVar2 + 0x10 + lVar3) != 0) {
        FUN_1400337aa();
      }
      lVar3 = lVar3 + 0x28;
    } while ((longlong)iVar1 * 0x28 != lVar3);
  }
  return;
}



// FUNCTION 141249e1a FUN_141249e1a body=171 status=ok
// SIG undefined FUN_141249e1a(void)

void FUN_141249e1a(longlong *param_1)

{
  char cVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  GUID local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(byte *)(param_1[2] + 0xd5) & 4) != 0) {
    local_38 = 0;
    uStack_30 = 0;
    FUN_1400033ba(param_1,0,0,0);
  }
  cVar1 = FUN_1400439fc(param_1,0,&local_28);
  if (cVar1 != '\0') {
    (**(code **)(*param_1 + 0x268))(param_1);
  }
  if (((*(int *)((longlong)param_1 + 0x2c) == 0 && (int)param_1[5] == 0) && (int)param_1[6] == 0) &&
      *(int *)((longlong)param_1 + 0x34) == 0) {
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
    *(ulong *)(param_1 + 5) = local_28.Data1;
    *(undefined4 *)((longlong)param_1 + 0x2c) = local_28._4_4_;
    *(undefined4 *)(param_1 + 6) = local_28.Data4._0_4_;
    *(undefined4 *)((longlong)param_1 + 0x34) = local_28.Data4._4_4_;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


