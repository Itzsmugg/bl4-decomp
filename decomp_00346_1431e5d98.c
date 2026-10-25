// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1431e5d98 FUN_1431e5d98 body=434 status=ok
// SIG undefined FUN_1431e5d98(void)

undefined8 FUN_1431e5d98(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  wchar_t *pwVar4;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined4 local_90;
  longlong local_88 [2];
  wchar_t *local_78;
  undefined8 uStack_70;
  wchar_t *local_68;
  undefined8 uStack_60;
  longlong local_58 [2];
  wchar_t *local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_48 = (wchar_t *)0x0;
  uStack_40 = 0;
  local_58[0] = 0;
  local_58[1] = 0;
  local_68 = (wchar_t *)0x0;
  uStack_60 = 0;
  local_78 = (wchar_t *)0x0;
  uStack_70 = 0;
  FUN_140056680(local_88,&DAT_149e1419a);
  local_a0 = 0;
  local_a8 = 1;
  FUN_1407cdbc6(param_2,local_88,&local_48,local_58);
  if (local_88[0] != 0) {
    FUN_1400020a8();
  }
  FUN_140056680(local_88,&DAT_149e1419a);
  local_a0 = 0;
  local_a8 = 1;
  FUN_1407cdbc6(local_58,local_88,&local_68,&local_78);
  if (local_88[0] != 0) {
    FUN_1400020a8();
  }
  pwVar4 = L"";
  if ((int)uStack_60 != 0) {
    pwVar4 = local_68;
  }
  iVar1 = _wtoi(pwVar4);
  pwVar4 = L"";
  if ((int)uStack_40 != 0) {
    pwVar4 = local_48;
  }
  iVar2 = _wtoi(pwVar4);
  pwVar4 = L"";
  if ((int)uStack_70 != 0) {
    pwVar4 = local_78;
  }
  iVar3 = _wtoi(pwVar4);
  local_90 = 0;
  local_98 = 0;
  local_a0 = 0;
  local_a8 = 0;
  FUN_14021300e(param_1,iVar3,iVar2,iVar1);
  if (local_78 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if (local_68 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if (local_48 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431e5f4c FUN_1431e5f4c body=584 status=ok
// SIG undefined FUN_1431e5f4c(void)

byte FUN_1431e5f4c(undefined8 *param_1,ushort param_2,undefined4 *param_3,longlong *param_4,
                  undefined8 param_5,ulonglong *param_6)

{
  int *piVar1;
  int iVar2;
  ulonglong uVar3;
  char cVar4;
  longlong *plVar5;
  ulonglong uVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined2 *puVar9;
  byte bVar10;
  byte bVar11;
  undefined1 auStack_98 [32];
  longlong local_78;
  undefined8 uStack_70;
  byte local_68;
  undefined8 local_64;
  undefined8 uStack_5c;
  ulonglong local_50;
  undefined8 uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar5 = (longlong *)FUN_14054d1d4();
  if (*(int *)(param_1 + 1) == 0) {
    puVar9 = &DAT_149dfb77a;
  }
  else {
    puVar9 = (undefined2 *)*param_1;
  }
  bVar10 = 0;
  plVar5 = (longlong *)(**(code **)(*plVar5 + 0x18))(plVar5,puVar9,0);
  if (plVar5 == (longlong *)0x0) goto LAB_1431e5fa0;
  (**(code **)(*plVar5 + 0x118))(plVar5,0x1c);
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  local_64 = 0;
  uStack_5c = 0;
  local_50 = 0;
  uStack_48 = 0;
  FUN_14631ab44(plVar5,&local_78);
  uVar3 = local_50;
  if ((local_78 == 0x5049504543414348) && ((int)uStack_70 == 0x1c)) {
    bVar11 = 0;
    if (local_68 == param_2) {
      uVar6 = (**(code **)(*plVar5 + 0x30))(plVar5);
      if (uVar6 <= uVar3) goto LAB_1431e6076;
      (**(code **)(*plVar5 + 0x1a0))(plVar5,local_50);
      FUN_140836dc0(plVar5,param_5);
      bVar11 = *(byte *)((longlong)plVar5 + 0x29) >> 1 ^ 1;
    }
  }
  else {
LAB_1431e6076:
    bVar11 = 0;
  }
  cVar4 = (**(code **)(*plVar5 + 0x1f8))(plVar5);
  bVar10 = 0;
  if (cVar4 != '\0') {
    bVar10 = bVar11;
  }
  (**(code **)*plVar5)(plVar5,1);
  if ((bVar10 & 1) == 0) goto LAB_1431e5fa0;
  plVar7 = (longlong *)FUN_1400dbadc();
  plVar5 = (longlong *)*plVar7;
  if (plVar5 == (longlong *)0x0) {
    plVar5 = (longlong *)FUN_140e92164();
    *plVar7 = (longlong)plVar5;
  }
  if (*(int *)(param_1 + 1) == 0) {
    puVar9 = &DAT_149dfb77a;
  }
  else {
    puVar9 = (undefined2 *)*param_1;
  }
  lVar8 = (**(code **)(*plVar5 + 0x178))(plVar5,puVar9);
  plVar7 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar7[1] = (longlong)&DAT_100000001;
  *plVar7 = (longlong)&PTR_FUN_14a37d200;
  plVar7[2] = lVar8;
  *param_4 = lVar8;
  plVar5 = (longlong *)param_4[1];
  if (plVar7 == plVar5) {
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      plVar5 = plVar7 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        UNLOCK();
        plVar5 = plVar7;
        goto joined_r0x0001431e614b;
      }
    }
  }
  else {
    param_4[1] = (longlong)plVar7;
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar7 = plVar5 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1;
        UNLOCK();
joined_r0x0001431e614b:
        if (iVar2 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
  }
  if (*param_4 == 0) {
    bVar10 = 0;
  }
  else {
    *param_3 = (undefined4)local_64;
    param_3[1] = local_64._4_4_;
    param_3[2] = (undefined4)uStack_5c;
    param_3[3] = uStack_5c._4_4_;
    *param_6 = local_50;
  }
LAB_1431e5fa0:
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return bVar10 & 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431e6195 FUN_1431e6195 body=157 status=ok
// SIG undefined FUN_1431e6195(void)

uint FUN_1431e6195(void)

{
  undefined1 uVar1;
  undefined1 extraout_AL;
  undefined4 in_EAX;
  undefined3 uVar3;
  undefined4 uVar2;
  undefined3 extraout_var;
  
  if (DAT_14ca81398 == '\x01') {
    uVar3 = (undefined3)((uint)in_EAX >> 8);
    uVar1 = DAT_14ca81399;
  }
  else {
    DAT_14ca81398 = '\x01';
    if (DAT_14c846b14 == '\0') {
      FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                    L"Attempting to get the command line but it hasn\'t been initialized yet.");
    }
    uVar2 = FUN_14054d46e(&DAT_14c846b20,L"deleteuserpsocache");
    uVar3 = (undefined3)((uint)uVar2 >> 8);
    uVar1 = 1;
    if ((char)uVar2 == '\0') {
      if (DAT_14c846b14 == '\0') {
        FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                      L"Attempting to get the command line but it hasn\'t been initialized yet.");
      }
      FUN_14054d46e(&DAT_14c846b20,L"logPSO");
      uVar3 = extraout_var;
      uVar1 = extraout_AL;
    }
  }
  DAT_14ca81399 = uVar1;
  return CONCAT31(uVar3,DAT_14ca81399) & 0xffffff01;
}



// FUNCTION 1431e6232 FUN_1431e6232 body=408 status=ok
// SIG undefined FUN_1431e6232(void)

void FUN_1431e6232(longlong param_1,int *param_2)

{
  int iVar1;
  undefined1 auStack_68 [32];
  undefined1 local_48 [16];
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar1 = *param_2;
  if (iVar1 == 2) {
    param_2 = param_2 + 0x76;
  }
  else if (iVar1 == 1) {
    local_48 = ZEXT816(0);
    local_38 = 0;
    if (param_2[10] != 0 || *(undefined1 (*) [16])(param_2 + 6) != (undefined1  [16])0x0) {
      FUN_140623ef4(param_1 + 0x48,local_48,param_2 + 6,0);
    }
    local_48 = ZEXT816(0);
    local_38 = 0;
    if (param_2[0xf] != 0 || *(undefined1 (*) [16])(param_2 + 0xb) != (undefined1  [16])0x0) {
      FUN_140623ef4(param_1 + 0x48,local_48,param_2 + 0xb,0);
    }
    local_48 = ZEXT816(0);
    local_38 = 0;
    if (param_2[0x14] != 0 || *(undefined1 (*) [16])(param_2 + 0x10) != (undefined1  [16])0x0) {
      FUN_140623ef4(param_1 + 0x48,local_48,param_2 + 0x10,0);
    }
    local_48 = ZEXT816(0);
    local_38 = 0;
    if (param_2[0x19] != 0 || *(undefined1 (*) [16])(param_2 + 0x15) != (undefined1  [16])0x0) {
      FUN_140623ef4(param_1 + 0x48,local_48,param_2 + 0x15,0);
    }
    local_48 = (undefined1  [16])0x0;
    local_38 = 0;
    if (param_2[0x1e] == 0 && *(undefined1 (*) [16])(param_2 + 0x1a) == (undefined1  [16])0x0)
    goto LAB_1431e63a8;
    param_2 = param_2 + 0x1a;
  }
  else {
    if (iVar1 != 0) goto LAB_1431e63a8;
    param_2 = param_2 + 1;
  }
  FUN_140623ef4(param_1 + 0x48,local_48,param_2,0);
LAB_1431e63a8:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431e63cc FUN_1431e63cc body=112 status=ok
// SIG undefined FUN_1431e63cc(void)

int FUN_1431e63cc(longlong *param_1,uint param_2,int *param_3)

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
        if ((((*(int *)(lVar2 + lVar4) == *param_3) && (*(int *)(lVar2 + 4 + lVar4) == param_3[1]))
            && (*(int *)(lVar2 + 8 + lVar4) == param_3[2])) &&
           (*(int *)(lVar2 + 0xc + lVar4) == param_3[3])) {
          return iVar1;
        }
        iVar1 = *(int *)(lVar4 + lVar2 + 0x18);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 1431e643c FUN_1431e643c body=1928 status=ok
// SIG undefined FUN_1431e643c(void)

void FUN_1431e643c(longlong *param_1,int *param_2,longlong *param_3)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  int iVar10;
  longlong lVar11;
  ulonglong uVar12;
  byte bVar13;
  int iVar14;
  uint *puVar15;
  ulonglong uVar16;
  uint *puVar17;
  int iVar18;
  int iVar19;
  longlong *plVar20;
  longlong *plVar21;
  uint uVar22;
  int iVar23;
  ulonglong uVar24;
  longlong lVar25;
  uint uVar26;
  int iVar27;
  longlong lVar28;
  uint uVar29;
  ulonglong uVar30;
  uint uVar31;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar23 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar23 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar23) {
      FUN_1447711aa(param_1,iVar23);
    }
    iVar27 = (int)param_1[5];
    if (iVar27 == 0) {
      iVar18 = -1;
    }
    else {
      iVar18 = iVar27 + 0x1e;
      if (-1 < iVar27 + -1) {
        iVar18 = iVar27 + -1;
      }
      iVar18 = iVar18 >> 5;
    }
    plVar20 = param_1 + 2;
    iVar14 = iVar27 + 1;
    iVar19 = iVar27 + 0x1f;
    if (-1 < iVar27) {
      iVar19 = iVar27;
    }
    if (iVar19 >> 5 == iVar18) {
      *(int *)(param_1 + 5) = iVar14;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar27) {
        iVar18 = iVar27;
        if (iVar27 + 0x20U < 0xa0) {
          iVar14 = 0x80;
        }
        else {
          uVar31 = iVar27 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar26 = 4;
            if (4 < uVar31) {
              uVar26 = uVar31;
            }
          }
          else {
            uVar26 = uVar31 + (uVar31 * 3 >> 3) + 0x10;
          }
          uVar12 = (ulonglong)(uVar26 * 4);
          if (DAT_14c872d28 != (longlong *)0x0) {
            if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
              uVar29 = (uint)(uVar12 + 0xf);
              if (uVar26 < 0x1ffd) {
                uVar12 = (ulonglong)
                         (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar12 + 0xf >> 4]];
              }
              else {
                uVar16 = (ulonglong)(uVar29 & 0xfffffff0);
                if (uVar16 < 0x7ff1) {
                  bVar13 = (&DAT_14c841e00)[uVar29 >> 4];
                  uVar24 = 0x32;
                  if (0x32 < bVar13) {
                    uVar24 = (ulonglong)bVar13;
                  }
                  uVar30 = 0x32 - (ulonglong)bVar13;
                  do {
                    uVar12 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar30 & 0xffffffff];
                    if (((&DAT_14c841d90)[uVar30 & 0xffffffff] & 0xf) == 0) goto LAB_1431e6abe;
                    lVar11 = uVar24 + 1 + uVar30;
                    uVar30 = uVar30 - 1;
                  } while (lVar11 != 0x33);
                }
                uVar12 = 0x10;
                if (0x10 < DAT_14c841df8) {
                  uVar12 = (ulonglong)DAT_14c841df8;
                }
                uVar12 = -uVar12 & (uVar16 + uVar12) - 1;
              }
            }
            else {
              uVar12 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar12,0);
              iVar18 = (int)param_1[5];
            }
          }
LAB_1431e6abe:
          iVar10 = (int)(uVar12 >> 2);
          iVar14 = -0x20;
          if ((int)uVar31 <= iVar10) {
            iVar14 = iVar10 << 5;
          }
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar14;
        FUN_1446efbd8(plVar20,iVar18);
        iVar14 = (int)param_1[5] + 1;
      }
      iVar18 = iVar14 + 0x1f;
      if (-1 < iVar14) {
        iVar18 = iVar14;
      }
      *(int *)(param_1 + 5) = iVar14;
      if (iVar14 % 0x20 != 0) {
        plVar21 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar21 = plVar20;
        }
        bVar13 = -(char)(iVar14 % 0x20);
        *(uint *)((longlong)plVar21 + (longlong)(iVar18 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar21 + (longlong)(iVar18 >> 5) * 4) << (bVar13 & 0x1f)) >>
             (bVar13 & 0x1f);
      }
    }
    lVar11 = (longlong)iVar23;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar20 = (longlong *)param_1[4];
    }
    bVar13 = (byte)iVar27 & 0x1f;
    puVar17 = (uint *)((longlong)plVar20 + (longlong)(iVar19 >> 5) * 4);
    *puVar17 = *puVar17 & (-2 << bVar13 | 0xfffffffeU >> 0x20 - bVar13);
  }
  else {
    iVar23 = (int)param_1[6];
    lVar11 = (longlong)iVar23;
    iVar27 = *(int *)(*param_1 + 4 + lVar11 * 0x20);
    *(int *)(param_1 + 6) = iVar27;
    iVar18 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar18;
    if (iVar18 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar27 * 0x20) = 0xffffffff;
    }
  }
  puVar17 = (uint *)(param_1 + 2);
  uVar31 = 1 << ((byte)iVar23 & 0x1f);
  puVar15 = (uint *)param_1[4];
  if ((uint *)param_1[4] == (uint *)0x0) {
    puVar15 = puVar17;
  }
  iVar27 = iVar23 + 0x1f;
  if (-1 < iVar23) {
    iVar27 = iVar23;
  }
  puVar15[iVar27 >> 5] = puVar15[iVar27 >> 5] | uVar31;
  uVar26 = 1;
  lVar25 = *param_1;
  lVar11 = lVar11 * 0x20;
  puVar1 = (undefined8 *)(lVar25 + lVar11);
  puVar3 = (undefined4 *)*param_3;
  puVar4 = (undefined8 *)param_3[1];
  uVar9 = puVar3[1];
  uVar5 = puVar3[2];
  uVar6 = puVar3[3];
  puVar2 = (undefined4 *)(lVar25 + lVar11);
  *puVar2 = *puVar3;
  puVar2[1] = uVar9;
  puVar2[2] = uVar5;
  puVar2[3] = uVar6;
  *(undefined8 *)(lVar25 + 0x10 + lVar11) = *puVar4;
  *puVar4 = 0;
  *(undefined4 *)(lVar25 + 0x18 + lVar11) = 0xffffffff;
  uVar12 = *(ulonglong *)(lVar25 + 8 + lVar11);
  uVar16 = *(longlong *)(lVar25 + lVar11) + 0x9ae16a3b2f90404f;
  uVar16 = ((uVar16 << 0x27 | uVar16 >> 0x19) + uVar12) * -0x651e95c4d06fbf91;
  uVar12 = ((uVar12 << 0x1b | uVar12 >> 0x25) * -0x651e95c4d06fbf91 + *(longlong *)(lVar25 + lVar11)
            + 0x9ae16a3b2f90404f ^ uVar16) * -0x651e95c4d06fbf91;
  lVar11 = (uVar12 >> 0x2f ^ uVar16 ^ uVar12) * -0x651e95c4d06fbf91;
  uVar29 = ((uint)((ulonglong)lVar11 >> 0x2f) ^ (uint)lVar11) * 0x2f90406f;
  uVar22 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar22 != 1) {
    iVar18 = FUN_1431e63cc(param_1,uVar29,puVar1);
    if (iVar18 != -1) {
      lVar11 = *param_1;
      lVar25 = (longlong)iVar18 * 0x20;
      FUN_1431e6d44(*(undefined8 *)(lVar11 + 0x10 + lVar25));
      uVar7 = *puVar1;
      uVar8 = puVar1[1];
      *(undefined8 *)(lVar11 + 0x10 + lVar25) = puVar1[2];
      *(undefined8 *)(lVar11 + lVar25) = uVar7;
      ((undefined8 *)(lVar11 + lVar25))[1] = uVar8;
      lVar11 = *param_1;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar11 + (longlong)(int)param_1[6] * 0x20) = iVar23;
      }
      *(undefined4 *)(lVar11 + (longlong)iVar23 * 0x20) = 0xffffffff;
      if (*(int *)((longlong)param_1 + 0x34) < 1) {
        uVar9 = 0xffffffff;
      }
      else {
        uVar9 = (undefined4)param_1[6];
      }
      *(undefined4 *)(lVar11 + (longlong)iVar23 * 0x20 + 4) = uVar9;
      *(int *)(param_1 + 6) = iVar23;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      if ((uint *)param_1[4] != (uint *)0x0) {
        puVar17 = (uint *)param_1[4];
      }
      puVar17[iVar27 >> 5] = puVar17[iVar27 >> 5] & ~uVar31;
      goto LAB_1431e681f;
    }
    if (3 < uVar22) {
      uVar12 = (ulonglong)(uVar22 & 0xfffffffe) + 0xf;
      lVar11 = 0x3f;
      if (uVar12 != 0) {
        for (; uVar12 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      uVar26 = 1 << ((byte)lVar11 & 0x1f);
    }
  }
  iVar18 = iVar23;
  if (((int)uVar22 < 1) || ((int)uVar26 <= (int)param_1[9])) {
    uVar29 = (int)param_1[9] - 1U & uVar29;
    *(uint *)((longlong)puVar1 + 0x1c) = uVar29;
    plVar20 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar20 = param_1 + 7;
    }
    *(undefined4 *)(puVar1 + 3) =
         *(undefined4 *)
          ((longlong)plVar20 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar29) * 4);
    plVar20 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar20 = param_1 + 7;
    }
    *(int *)((longlong)plVar20 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar29) * 4) =
         iVar23;
    goto LAB_1431e681f;
  }
  *(uint *)(param_1 + 9) = uVar26;
  plVar20 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar20,0,0,4);
    uVar26 = *(uint *)(param_1 + 9);
  }
  if (uVar26 == 0) goto LAB_1431e681f;
  plVar21 = param_1 + 7;
  if (uVar26 == 1) {
    if (*plVar20 != 0) {
      FUN_1446efa72(plVar20,0,0,4);
    }
LAB_1431e6647:
    uVar31 = 0;
    do {
      plVar20 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar20 = plVar21;
      }
      *(undefined4 *)((longlong)plVar20 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar31) * 4) =
           0xffffffff;
      uVar31 = uVar31 + 1;
    } while (uVar26 != uVar31);
  }
  else {
    FUN_1446efa72(plVar20,0,uVar26,4);
    if (0 < (int)uVar26) goto LAB_1431e6647;
  }
  iVar23 = (int)param_1[5];
  if (iVar23 == 0) {
    uVar12 = 0;
    uVar16 = 1;
    iVar14 = 0;
    iVar27 = 0;
  }
  else {
    puVar15 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar15 = puVar17;
    }
    uVar31 = *puVar15;
    if (uVar31 == 0) {
      iVar27 = iVar23 + 0x1e;
      if (-1 < iVar23 + -1) {
        iVar27 = iVar23 + -1;
      }
      uVar12 = 0;
      uVar16 = (ulonglong)(uint)(iVar27 >> 5);
      if (iVar27 >> 5 < 1) {
        uVar16 = uVar12;
      }
      iVar14 = 0;
      do {
        if (uVar16 == uVar12) goto LAB_1431e681f;
        iVar14 = iVar14 + 0x20;
        uVar31 = puVar15[uVar12 + 1];
        uVar12 = uVar12 + 1;
      } while (uVar31 == 0);
    }
    else {
      uVar12 = 0;
      iVar14 = 0;
    }
    uVar16 = (ulonglong)(-uVar31 & uVar31);
    uVar24 = uVar16 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar24 != 0) {
      for (; uVar24 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    iVar27 = (iVar14 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    if (iVar23 <= iVar27) {
      iVar27 = iVar23;
    }
  }
  if (iVar27 < iVar23) {
    uVar31 = 0xffffffff;
    do {
      lVar11 = *param_1;
      lVar28 = (longlong)iVar27 * 0x20;
      uVar24 = *(ulonglong *)(lVar11 + 8 + lVar28);
      uVar30 = *(longlong *)(lVar11 + lVar28) + 0x9ae16a3b2f90404f;
      uVar30 = ((uVar30 << 0x27 | uVar30 >> 0x19) + uVar24) * -0x651e95c4d06fbf91;
      uVar24 = (*(longlong *)(lVar11 + lVar28) +
                (uVar24 << 0x1b | uVar24 >> 0x25) * -0x651e95c4d06fbf91 + 0x9ae16a3b2f90404f ^
               uVar30) * -0x651e95c4d06fbf91;
      lVar25 = (uVar24 >> 0x2f ^ uVar30 ^ uVar24) * -0x651e95c4d06fbf91;
      uVar24 = (longlong)(int)(((uint)((ulonglong)lVar25 >> 0x2f) ^ (uint)lVar25) * 0x2f90406f) &
               (longlong)(int)param_1[9] - 1U;
      iVar23 = (int)uVar24;
      *(int *)(lVar11 + 0x1c + lVar28) = iVar23;
      plVar20 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar20 = plVar21;
      }
      *(undefined4 *)(lVar11 + 0x18 + lVar28) =
           *(undefined4 *)((longlong)plVar20 + ((longlong)(int)param_1[9] - 1U & uVar24) * 4);
      plVar20 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar20 = plVar21;
      }
      *(int *)((longlong)plVar20 + ((longlong)iVar23 & (longlong)(int)param_1[9] - 1U) * 4) = iVar27
      ;
      uVar31 = ~(uint)uVar16 & uVar31;
      puVar15 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar15 = puVar17;
      }
      iVar23 = (int)param_1[5];
      iVar27 = (int)uVar12;
      lVar11 = (longlong)iVar27;
      uVar26 = puVar15[lVar11] & uVar31;
      if (uVar26 == 0) {
        iVar19 = iVar23 + 0x1e;
        if (-1 < iVar23 + -1) {
          iVar19 = iVar23 + -1;
        }
        iVar19 = iVar19 >> 5;
        iVar10 = iVar19;
        if (iVar19 < iVar27) {
          iVar10 = iVar27;
        }
        if (iVar19 <= iVar27) break;
        lVar25 = 0;
        while( true ) {
          iVar14 = iVar14 + 0x20;
          uVar26 = puVar15[lVar11 + lVar25 + 1];
          if (uVar26 != 0) break;
          lVar25 = lVar25 + 1;
          if (iVar10 - lVar11 == lVar25) goto LAB_1431e681f;
        }
        uVar12 = (ulonglong)(iVar27 + (int)lVar25 + 1);
        uVar31 = 0xffffffff;
      }
      uVar16 = (ulonglong)(-uVar26 & uVar26);
      uVar24 = uVar16 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar24 != 0) {
        for (; uVar24 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar27 = (iVar14 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    } while (iVar27 < iVar23);
  }
LAB_1431e681f:
  *param_2 = iVar18;
  return;
}



// FUNCTION 1431e6bc4 FUN_1431e6bc4 body=384 status=ok
// SIG undefined FUN_1431e6bc4(void)

undefined8 * FUN_1431e6bc4(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  ulonglong uVar3;
  undefined2 *puVar4;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 != 0) {
    plVar2 = (longlong *)FUN_14054d1d4();
    if (*(int *)(param_2 + 0x98) == 0) {
      puVar4 = &DAT_149dfb77a;
    }
    else {
      puVar4 = *(undefined2 **)(param_2 + 0x90);
    }
    uVar3 = (**(code **)(*plVar2 + 0x108))(plVar2,puVar4);
    if (0 < (longlong)uVar3) {
      FUN_140393c76(param_1,uVar3 & 0xffffffff,1);
      plVar2 = *(longlong **)(param_2 + 0xa0);
      if (plVar2 == (longlong *)0x0) {
        if (*(int *)(param_2 + 0x98) == 0) {
          puVar4 = &DAT_149dfb77a;
        }
        else {
          puVar4 = *(undefined2 **)(param_2 + 0x90);
        }
        FUN_14158b496(param_1,puVar4,0);
      }
      else {
        plVar2 = (longlong *)(**(code **)(*plVar2 + 0x10))(plVar2,0,uVar3,3,0,*param_1);
        if (*(char *)((longlong)plVar2 + 0x51) == '\0') {
          (**(code **)(*plVar2 + 0x10))(plVar2,0);
        }
        if (plVar2 != (longlong *)0x0) {
          (**(code **)*plVar2)(plVar2,1);
        }
      }
      plVar2 = (longlong *)FUN_14001cc68(0xa8);
      memset(plVar2,0,0x90);
      FUN_144869430(plVar2);
      plVar2[0x12] = 0;
      *plVar2 = (longlong)&PTR_FUN_149e1e050;
      plVar2[0x13] = (longlong)param_1;
      plVar2[0x14] = 0x7fffffffffffffff;
      *(byte *)(plVar2 + 5) = *(byte *)(plVar2 + 5) | 1;
      FUN_1449c2eca(plVar2,0);
      puVar1 = (undefined8 *)param_1[2];
      param_1[2] = plVar2;
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
        plVar2 = (longlong *)param_1[2];
      }
      (**(code **)(*plVar2 + 0x118))(plVar2,0x1c);
    }
  }
  return param_1;
}



// FUNCTION 1431e6d44 FUN_1431e6d44 body=65 status=ok
// SIG undefined FUN_1431e6d44(void)

void FUN_1431e6d44(longlong *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 != (longlong *)0x0) {
    puVar1 = (undefined8 *)param_1[2];
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(param_1);
    return;
  }
  return;
}



// FUNCTION 1431e6d86 FUN_1431e6d86 body=24 status=ok
// SIG undefined FUN_1431e6d86(void)

void FUN_1431e6d86(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001431e6d9a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}



// FUNCTION 1431e6db6 FUN_1431e6db6 body=5 status=ok
// SIG undefined FUN_1431e6db6(void)

longlong FUN_1431e6db6(longlong param_1)

{
  return param_1 + 8;
}



// FUNCTION 1431e6dee FUN_1431e6dee body=282 status=ok
// SIG undefined FUN_1431e6dee(void)

undefined8 * FUN_1431e6dee(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_1431e6dc7);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 1431e6f08 FUN_1431e6f08 body=1855 status=ok
// SIG undefined FUN_1431e6f08(void)

void FUN_1431e6f08(longlong param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong *puVar5;
  undefined *puVar6;
  wchar_t *pwVar7;
  uint *puVar8;
  undefined1 auStack_318 [32];
  longlong local_2f8 [3];
  ulonglong local_2e0;
  undefined4 local_2d8;
  ushort local_2d4;
  uint local_2cc;
  uint *local_2c8;
  ulonglong *puStack_2c0;
  undefined1 local_2b4 [4];
  undefined4 local_2b0;
  undefined4 uStack_2ac;
  undefined4 uStack_2a8;
  undefined4 uStack_2a4;
  undefined4 local_2a0;
  undefined8 local_298;
  undefined4 uStack_22e;
  undefined2 uStack_22a;
  undefined4 local_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined4 local_218;
  undefined8 local_214;
  undefined8 uStack_20c;
  undefined8 local_204;
  undefined8 uStack_1fc;
  undefined8 local_1f4;
  undefined8 uStack_1ec;
  undefined8 local_1e4;
  undefined8 uStack_1dc;
  undefined8 local_1d4;
  undefined8 uStack_1cc;
  undefined8 local_1c4;
  undefined8 uStack_1bc;
  undefined8 local_1b4;
  undefined8 local_124;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined2 local_c8;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined1 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_318;
  local_2b0 = 0x67452301;
  uStack_2ac = 0xefcdab89;
  uStack_2a8 = 0x98badcfe;
  uStack_2a4 = 0x10325476;
  local_2a0 = 0xc3d2e1f0;
  local_298 = 0;
  local_2f8[0] = 0;
  local_2f8[1] = 0;
  lVar4 = *(longlong *)(param_1 + 8);
  local_228 = 0;
  uStack_224 = 0;
  uStack_220 = 0;
  uStack_21c = 0;
  local_218 = 0;
  if (lVar4 != 0) {
    local_218 = *(undefined4 *)(lVar4 + 0x98);
    local_228 = *(undefined4 *)(lVar4 + 0x88);
    uStack_224 = *(undefined4 *)(lVar4 + 0x8c);
    uStack_220 = *(undefined4 *)(lVar4 + 0x90);
    uStack_21c = *(undefined4 *)(lVar4 + 0x94);
    local_2c8 = (uint *)0x0;
    puStack_2c0 = (ulonglong *)0x0;
    FUN_1407c8a86(&local_228,0x14,&local_2c8);
    puVar8 = local_2c8;
    if ((int)puStack_2c0 == 0) {
      puVar8 = (uint *)&DAT_149dfb77a;
    }
    if ((ulonglong)*(byte *)(lVar4 + 0x9c) < 0xc) {
      pwVar7 = (wchar_t *)(&PTR_u_SF_Vertex_14a37d7b0)[*(byte *)(lVar4 + 0x9c)];
    }
    else {
      pwVar7 = L"SF_NumFrequencies";
    }
    FUN_1407c8b48(local_2f8,L"%s: %s, ",pwVar7 + 3,puVar8);
    if (local_2c8 != (uint *)0x0) {
      FUN_1400020a8();
    }
  }
  FUN_140c54e34(&local_2b0,&local_228,0x14);
  lVar4 = *(longlong *)(param_1 + 0x18);
  local_228 = 0;
  uStack_224 = 0;
  uStack_220 = 0;
  uStack_21c = 0;
  local_218 = 0;
  if (lVar4 != 0) {
    local_218 = *(undefined4 *)(lVar4 + 0x98);
    local_228 = (undefined4)*(undefined8 *)(lVar4 + 0x88);
    uStack_224 = (undefined4)((ulonglong)*(undefined8 *)(lVar4 + 0x88) >> 0x20);
    uStack_220 = (undefined4)*(undefined8 *)(lVar4 + 0x90);
    uStack_21c = (undefined4)((ulonglong)*(undefined8 *)(lVar4 + 0x90) >> 0x20);
    local_2c8 = (uint *)0x0;
    puStack_2c0 = (ulonglong *)0x0;
    FUN_1407c8a86(&local_228,0x14,&local_2c8);
    puVar8 = local_2c8;
    if ((int)puStack_2c0 == 0) {
      puVar8 = (uint *)&DAT_149dfb77a;
    }
    if ((ulonglong)*(byte *)(lVar4 + 0x9c) < 0xc) {
      pwVar7 = (wchar_t *)(&PTR_u_SF_Vertex_14a37d7b0)[*(byte *)(lVar4 + 0x9c)];
    }
    else {
      pwVar7 = L"SF_NumFrequencies";
    }
    FUN_1407c8b48(local_2f8,L"%s: %s, ",pwVar7 + 3,puVar8);
    if (local_2c8 != (uint *)0x0) {
      FUN_1400020a8();
    }
  }
  FUN_140c54e34(&local_2b0,&local_228,0x14);
  lVar4 = *(longlong *)(param_1 + 0x20);
  local_228 = 0;
  uStack_224 = 0;
  uStack_220 = 0;
  uStack_21c = 0;
  local_218 = 0;
  if (lVar4 != 0) {
    local_218 = *(undefined4 *)(lVar4 + 0x98);
    local_228 = *(undefined4 *)(lVar4 + 0x88);
    uStack_224 = *(undefined4 *)(lVar4 + 0x8c);
    uStack_220 = *(undefined4 *)(lVar4 + 0x90);
    uStack_21c = *(undefined4 *)(lVar4 + 0x94);
    local_2c8 = (uint *)0x0;
    puStack_2c0 = (ulonglong *)0x0;
    FUN_1407c8a86(&local_228,0x14,&local_2c8);
    puVar8 = local_2c8;
    if ((int)puStack_2c0 == 0) {
      puVar8 = (uint *)&DAT_149dfb77a;
    }
    if ((ulonglong)*(byte *)(lVar4 + 0x9c) < 0xc) {
      pwVar7 = (wchar_t *)(&PTR_u_SF_Vertex_14a37d7b0)[*(byte *)(lVar4 + 0x9c)];
    }
    else {
      pwVar7 = L"SF_NumFrequencies";
    }
    FUN_1407c8b48(local_2f8,L"%s: %s, ",pwVar7 + 3,puVar8);
    if (local_2c8 != (uint *)0x0) {
      FUN_1400020a8();
    }
  }
  FUN_140c54e34(&local_2b0,&local_228,0x14);
  lVar4 = *(longlong *)(param_1 + 0x10);
  local_228 = 0;
  uStack_224 = 0;
  uStack_220 = 0;
  uStack_21c = 0;
  local_218 = 0;
  if (lVar4 != 0) {
    local_218 = *(undefined4 *)(lVar4 + 0x98);
    local_228 = (undefined4)*(undefined8 *)(lVar4 + 0x88);
    uStack_224 = (undefined4)((ulonglong)*(undefined8 *)(lVar4 + 0x88) >> 0x20);
    uStack_220 = (undefined4)*(undefined8 *)(lVar4 + 0x90);
    uStack_21c = (undefined4)((ulonglong)*(undefined8 *)(lVar4 + 0x90) >> 0x20);
    local_2c8 = (uint *)0x0;
    puStack_2c0 = (ulonglong *)0x0;
    FUN_1407c8a86(&local_228,0x14,&local_2c8);
    puVar8 = local_2c8;
    if ((int)puStack_2c0 == 0) {
      puVar8 = (uint *)&DAT_149dfb77a;
    }
    if ((ulonglong)*(byte *)(lVar4 + 0x9c) < 0xc) {
      pwVar7 = (wchar_t *)(&PTR_u_SF_Vertex_14a37d7b0)[*(byte *)(lVar4 + 0x9c)];
    }
    else {
      pwVar7 = L"SF_NumFrequencies";
    }
    FUN_1407c8b48(local_2f8,L"%s: %s, ",pwVar7 + 3,puVar8);
    if (local_2c8 != (uint *)0x0) {
      FUN_1400020a8();
    }
  }
  FUN_140c54e34(&local_2b0,&local_228,0x14);
  lVar4 = *(longlong *)(param_1 + 0x28);
  local_228 = 0;
  uStack_224 = 0;
  uStack_220 = 0;
  uStack_21c = 0;
  local_218 = 0;
  if (lVar4 != 0) {
    local_218 = *(undefined4 *)(lVar4 + 0x98);
    local_228 = *(undefined4 *)(lVar4 + 0x88);
    uStack_224 = *(undefined4 *)(lVar4 + 0x8c);
    uStack_220 = *(undefined4 *)(lVar4 + 0x90);
    uStack_21c = *(undefined4 *)(lVar4 + 0x94);
    local_2c8 = (uint *)0x0;
    puStack_2c0 = (ulonglong *)0x0;
    FUN_1407c8a86(&local_228,0x14,&local_2c8);
    puVar8 = local_2c8;
    if ((int)puStack_2c0 == 0) {
      puVar8 = (uint *)&DAT_149dfb77a;
    }
    if ((ulonglong)*(byte *)(lVar4 + 0x9c) < 0xc) {
      pwVar7 = (wchar_t *)(&PTR_u_SF_Vertex_14a37d7b0)[*(byte *)(lVar4 + 0x9c)];
    }
    else {
      pwVar7 = L"SF_NumFrequencies";
    }
    FUN_1407c8b48(local_2f8,L"%s: %s, ",pwVar7 + 3,puVar8);
    if (local_2c8 != (uint *)0x0) {
      FUN_1400020a8();
    }
  }
  FUN_140c54e34(&local_2b0,&local_228,0x14);
  FUN_140c54d7a(&local_2b0);
  if ((*(ushort *)(param_1 + 0xca) >> 0xc & 1) == 0) {
    if ((*(ushort *)(param_1 + 0xca) >> 0xb & 1) == 0) {
      FUN_140033559(".\\Runtime/RHI/Private/PipelineStateCache.cpp",0x26d,
                    L"Shader compilation failures are Fatal.");
    }
  }
  else {
    uVar3 = FUN_140032235(param_1);
    local_2cc = uVar3;
    cVar2 = FUN_1403966e6();
    if ((cVar2 != '\0') &&
       (((cVar2 = FUN_140396614(), cVar2 != '\0' || (cVar2 = FUN_1431dd47e(), cVar2 != '\0')) &&
        ((*(byte *)(param_1 + 0xcb) & 0x10) != 0)))) {
      AcquireSRWLockShared((PSRWLOCK)&DAT_14ca80410);
      if (DAT_14ca804c0 != DAT_14ca804ec) {
        puVar6 = &DAT_14ca804f0;
        if (DAT_14ca804f8 != (undefined *)0x0) {
          puVar6 = DAT_14ca804f8;
        }
        iVar1 = *(int *)(puVar6 + (ulonglong)(DAT_14ca80500 - 1U & uVar3) * 4);
        while (iVar1 != -1) {
          lVar4 = DAT_14ca804b8 + (longlong)iVar1 * 0x20;
          if (*(uint *)(DAT_14ca804b8 + (longlong)iVar1 * 0x20) == uVar3) {
            if (((lVar4 + 8U & 0xfffffffffffffff7) != 0) && ((*(byte *)(lVar4 + 0x14) & 1) != 0)) {
              ReleaseSRWLockShared((PSRWLOCK)&DAT_14ca80410);
              goto LAB_1431e75cb;
            }
            break;
          }
          iVar1 = *(int *)(lVar4 + 0x18);
        }
      }
      ReleaseSRWLockShared((PSRWLOCK)&DAT_14ca80410);
      AcquireSRWLockExclusive((PSRWLOCK)&DAT_14ca80410);
      if (DAT_14ca804c0 != DAT_14ca804ec) {
        puVar6 = &DAT_14ca804f0;
        if (DAT_14ca804f8 != (undefined *)0x0) {
          puVar6 = DAT_14ca804f8;
        }
        iVar1 = *(int *)(puVar6 + (ulonglong)(DAT_14ca80500 - 1U & uVar3) * 4);
        while (iVar1 != -1) {
          lVar4 = DAT_14ca804b8 + (longlong)iVar1 * 0x20;
          if (*(uint *)(DAT_14ca804b8 + (longlong)iVar1 * 0x20) == uVar3) {
            if ((lVar4 + 8U & 0xfffffffffffffff7) != 0) {
              if ((*(ushort *)(lVar4 + 0x14) & 1) == 0) {
                *(ushort *)(lVar4 + 0x14) = *(ushort *)(lVar4 + 0x14) | 1;
                puVar5 = (ulonglong *)FUN_14178cfa2(*(undefined4 *)(lVar4 + 0x10),lVar4 + 0x10);
                *(undefined4 *)(puVar5 + 1) = *(undefined4 *)(lVar4 + 0x10);
                *puVar5 = *puVar5 | *(ulonglong *)(lVar4 + 8);
                *(ushort *)((longlong)puVar5 + 0xc) =
                     *(ushort *)((longlong)puVar5 + 0xc) | *(ushort *)(lVar4 + 0x14);
              }
              goto LAB_1431e75be;
            }
            break;
          }
          iVar1 = *(int *)(lVar4 + 0x18);
        }
      }
      local_124 = 0x1100000000;
      uStack_224 = 0;
      uStack_220 = 0;
      uStack_21c = 0;
      local_218 = 0;
      local_214 = 0;
      uStack_20c = 0;
      local_204 = 0;
      uStack_1fc = 0;
      local_1f4 = 0;
      uStack_1ec = 0;
      local_1e4 = 0;
      uStack_1dc = 0;
      local_1d4 = 0;
      uStack_1cc = 0;
      local_1c4 = 0;
      uStack_1bc = 0;
      local_1b4 = 0;
      lVar4 = 0x112;
      do {
        *(undefined4 *)((longlong)&uStack_22e + lVar4) = 0x100;
        *(undefined2 *)((longlong)&uStack_22a + lVar4) = 1;
        *(undefined1 *)((longlong)&local_228 + lVar4) = 0xf;
        lVar4 = lVar4 + 7;
      } while (lVar4 != 0x14a);
      local_d8 = 0x700010100000000;
      uStack_d0 = 0x700000000;
      local_e0 = 0;
      local_c8 = 0xffff;
      local_50 = 0;
      uStack_48 = 0;
      local_40 = 0;
      local_38 = 6;
      FUN_1431dce1a(&local_228,param_1);
      local_2d8 = FUN_140975dc5(&local_228);
      local_2e0 = 0;
      local_2d4 = 0;
      FUN_140975b7c(&local_228,&local_2e0);
      local_2d4 = local_2d4 | 1;
      puVar5 = (ulonglong *)FUN_14178cfa2(local_2d8,&local_2d8);
      *(undefined4 *)(puVar5 + 1) = local_2d8;
      *puVar5 = *puVar5 | local_2e0;
      *(ushort *)((longlong)puVar5 + 0xc) = *(ushort *)((longlong)puVar5 + 0xc) | local_2d4;
      local_2c8 = &local_2cc;
      puStack_2c0 = &local_2e0;
      FUN_14070eaba(local_2b4);
LAB_1431e75be:
      ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14ca80410);
    }
  }
LAB_1431e75cb:
  if (local_2f8[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_318) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431e7648 FUN_1431e7648 body=453 status=ok
// SIG undefined FUN_1431e7648(void)

void FUN_1431e7648(undefined8 *param_1,uint param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  void *_Src;
  ulonglong uVar3;
  uint *puVar4;
  longlong lVar5;
  uint *puVar6;
  uint uVar7;
  void *_Dst;
  int *piVar8;
  ulonglong _Size;
  
  uVar3 = (ulonglong)param_2;
  if ((int)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456bc5fe(uVar3,0x48);
  }
  _Src = (void *)*param_1;
  if (param_2 == 0) {
    _Dst = (void *)0x0;
    if (_Src != (void *)0x0) {
LAB_1431e7766:
      piVar8 = (int *)((longlong)_Src + (-8 - (ulonglong)*(uint *)((longlong)_Src + -8)));
      LOCK();
      *piVar8 = *piVar8 + -1;
      UNLOCK();
      if (*piVar8 == 0) {
        if (*(longlong *)(piVar8 + 0x10) - (longlong)piVar8 == 0x10000) {
          lVar5 = DAT_14c872d30;
          if (DAT_14c872d30 == 0) {
            lVar5 = FUN_145bdc178();
          }
          FUN_140028df4(lVar5,piVar8);
        }
        else {
          FUN_144705e74(piVar8);
        }
      }
    }
LAB_1431e77a3:
    *param_1 = _Dst;
    return;
  }
  _Size = uVar3 * 0x48;
  puVar1 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xde8);
  puVar4 = (uint *)*puVar1;
  if (puVar4 != (uint *)0x0) goto LAB_1431e76a1;
LAB_1431e7696:
  FUN_144769a66(puVar1);
  puVar4 = (uint *)*puVar1;
LAB_1431e76a1:
  _Dst = (void *)(*(longlong *)(puVar4 + 0x10) + 7U & 0xfffffffffffffff8);
  puVar6 = (uint *)((longlong)_Dst + _Size);
  if (puVar4 + 0x4000 < puVar6) {
    if (param_2 < 0x38d) goto code_r0x0001431e76cd;
    puVar4 = (uint *)FUN_14472e5b2(_Size + 0x60,8);
    *puVar4 = 0xffffffff;
    puVar4[0x12] = 0;
    _Dst = (void *)((longlong)puVar4 + 0x5fU & 0xfffffffffffffff8);
    *(uint **)(puVar4 + 0x10) = puVar4 + uVar3 * 0x12 + 0x18;
    *puVar4 = 1;
  }
  else {
    uVar7 = puVar4[0x12] + 1;
LAB_1431e7723:
    *(uint **)(puVar4 + 0x10) = puVar6 + 2;
    puVar4[0x12] = uVar7;
  }
  *(int *)((longlong)_Dst + -8) = ((int)_Dst + -8) - (int)puVar4;
  *(int *)((longlong)_Dst + -4) = (int)_Size;
  if (_Src == (void *)0x0) goto LAB_1431e77a3;
  uVar3 = (ulonglong)*(uint *)((longlong)_Src + -4);
  if (uVar3 != 0) {
    if (uVar3 < _Size) {
      _Size = uVar3;
    }
    memcpy(_Dst,_Src,_Size);
  }
  goto LAB_1431e7766;
code_r0x0001431e76cd:
  uVar7 = puVar4[0x12];
  while( true ) {
    *(uint **)(puVar4 + 0x10) = puVar4 + 0x4000;
    LOCK();
    uVar2 = *puVar4;
    *puVar4 = *puVar4 + uVar7 + 1;
    UNLOCK();
    if ((uVar2 ^ uVar7) != 0xffffffff) break;
    puVar4 = (uint *)*puVar1;
    *puVar4 = 0xffffffff;
    *(uint **)(puVar4 + 0x10) = puVar4 + 0x16;
    puVar4[0x12] = 0;
    *puVar1 = puVar4;
    _Dst = (void *)((longlong)puVar4 + 0x5fU & 0xfffffffffffffff8);
    puVar6 = (uint *)((longlong)_Dst + _Size);
    uVar7 = 0;
    if (puVar6 <= puVar4 + 0x4000) {
      uVar7 = 1;
      goto LAB_1431e7723;
    }
  }
  goto LAB_1431e7696;
}



// FUNCTION 1431e780e FUN_1431e780e body=99 status=ok
// SIG undefined FUN_1431e780e(void)

void FUN_1431e780e(longlong *param_1)

{
  longlong lVar1;
  int *piVar2;
  
  lVar1 = *param_1;
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
        return;
      }
      FUN_144705e74(piVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1431e7872 FUN_1431e7872 body=158 status=ok
// SIG undefined FUN_1431e7872(void)

undefined8 * FUN_1431e7872(undefined8 *param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  
  param_1[1] = 0;
  *param_1 = &PTR_FUN_149e06640;
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined2 *)(param_1 + 5) = 3;
  param_1[6] = 0xffffffffffffffff;
  param_1[7] = 0;
  *param_1 = &PTR_FUN_14a37d4c0;
  param_1[10] = *param_2;
  param_1[0xc] = param_2[2];
  param_2[2] = 0;
  lVar5 = param_2[4];
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x24);
  lVar6 = param_2[5];
  uVar2 = *(undefined4 *)((longlong)param_2 + 0x2c);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x34);
  lVar7 = param_2[7];
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x3c);
  *(int *)(param_1 + 0x10) = (int)param_2[6];
  *(undefined4 *)((longlong)param_1 + 0x84) = uVar3;
  *(int *)(param_1 + 0x11) = (int)lVar7;
  *(undefined4 *)((longlong)param_1 + 0x8c) = uVar4;
  *(int *)(param_1 + 0xe) = (int)lVar5;
  *(undefined4 *)((longlong)param_1 + 0x74) = uVar1;
  *(int *)(param_1 + 0xf) = (int)lVar6;
  *(undefined4 *)((longlong)param_1 + 0x7c) = uVar2;
  if (param_1[10] == 0) {
    if (*param_2 != 0) {
      plVar8 = param_2 + 4;
      if ((longlong *)param_2[2] != (longlong *)0x0) {
        plVar8 = (longlong *)param_2[2];
      }
      (**(code **)(*plVar8 + 0x10))(plVar8);
    }
  }
  else {
    *param_2 = 0;
  }
  return param_1;
}



// FUNCTION 1431e7910 FUN_1431e7910 body=98 status=ok
// SIG undefined FUN_1431e7910(void)

void FUN_1431e7910(undefined8 *param_1,longlong *param_2)

{
  undefined1 auStack_38 [47];
  undefined1 local_9;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (*(byte *)(*param_2 + 0x28) - 2 < 2) {
    local_9 = 2;
  }
  else if (*(byte *)(*param_2 + 0x28) < 2) {
    local_9 = 3;
  }
  else {
    local_9 = 1;
  }
  FUN_140b76caa(*param_1,&local_9);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431e798a FUN_1431e798a body=52 status=ok
// SIG undefined FUN_1431e798a(void)

undefined8 * FUN_1431e798a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14a37d4a0;
  FUN_14178d214(param_1[1]);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1431e79be FUN_1431e79be body=91 status=ok
// SIG undefined FUN_1431e79be(void)

void FUN_1431e79be(longlong param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  pcVar1 = *(code **)(param_1 + 0x50);
  plVar3 = (longlong *)(param_1 + 0x70);
  if (*(longlong **)(param_1 + 0x60) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_1 + 0x60);
  }
  local_20 = param_1;
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(uVar2,&local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431e7a1a FUN_1431e7a1a body=164 status=ok
// SIG undefined FUN_1431e7a1a(void)

void FUN_1431e7a1a(longlong *param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  bool bVar9;
  
  lVar5 = param_1[1];
  if (param_1[1] == 0) {
    lVar5 = DAT_14ca84b20;
  }
  lVar4 = *(longlong *)(*param_1 + 0x60);
  if (lVar4 != lVar5) {
    *(longlong *)(*param_1 + 0x60) = lVar5;
    if (lVar5 != 0) {
      LOCK();
      *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
      UNLOCK();
    }
    if (lVar4 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar4 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar4 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(lVar4 + 0xd);
          plVar6 = (longlong *)FUN_14001cc68(0x10,8);
          plVar6[1] = lVar4;
          plVar8 = DAT_14ca843c0;
          plVar7 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar6 = (longlong)plVar8;
              LOCK();
              bVar9 = plVar8 != DAT_14ca843c0;
              plVar7 = plVar6;
              if (bVar9) {
                plVar8 = DAT_14ca843c0;
                plVar7 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar7;
              UNLOCK();
            } while (bVar9);
          }
          else {
            do {
              *plVar6 = (longlong)plVar7;
              LOCK();
              bVar9 = plVar7 != DAT_14ca843c8;
              plVar8 = plVar6;
              if (bVar9) {
                plVar7 = DAT_14ca843c8;
                plVar8 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar8;
              UNLOCK();
            } while (bVar9);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 1431e7abe FUN_1431e7abe body=293 status=ok
// SIG undefined FUN_1431e7abe(void)

void FUN_1431e7abe(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  bool bVar10;
  
  lVar9 = *(longlong *)(param_1 + 0x10);
  lVar5 = *(longlong *)(param_1 + 0x18);
  if (*(longlong *)(param_1 + 0x18) == 0) {
    lVar5 = DAT_14ca84b20;
  }
  lVar4 = *(longlong *)(lVar9 + 0x60);
  if (lVar4 != lVar5) {
    *(longlong *)(lVar9 + 0x60) = lVar5;
    if (lVar5 != 0) {
      LOCK();
      *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
      UNLOCK();
    }
    if (lVar4 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar4 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar4 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(lVar4 + 0xd);
          plVar6 = (longlong *)FUN_14001cc68(0x10,8);
          plVar6[1] = lVar4;
          plVar8 = DAT_14ca843c0;
          plVar7 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar6 = (longlong)plVar8;
              LOCK();
              bVar10 = plVar8 != DAT_14ca843c0;
              plVar7 = plVar6;
              if (bVar10) {
                plVar8 = DAT_14ca843c0;
                plVar7 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar7;
              UNLOCK();
            } while (bVar10);
          }
          else {
            do {
              *plVar6 = (longlong)plVar7;
              LOCK();
              bVar10 = plVar7 != DAT_14ca843c8;
              plVar8 = plVar6;
              if (bVar10) {
                plVar7 = DAT_14ca843c8;
                plVar8 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar8;
              UNLOCK();
            } while (bVar10);
          }
        }
      }
    }
    lVar9 = *(longlong *)(param_1 + 0x10);
  }
  if (lVar9 != 0) {
    LOCK();
    puVar1 = (uint *)(lVar9 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar9 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(lVar9 + 0xd);
        plVar6 = (longlong *)FUN_14001cc68(0x10,8);
        plVar6[1] = lVar9;
        plVar8 = DAT_14ca843c0;
        plVar7 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar6 = (longlong)plVar8;
            LOCK();
            bVar10 = plVar8 != DAT_14ca843c0;
            plVar7 = plVar6;
            if (bVar10) {
              plVar8 = DAT_14ca843c0;
              plVar7 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar7;
            UNLOCK();
          } while (bVar10);
        }
        else {
          do {
            *plVar6 = (longlong)plVar7;
            LOCK();
            bVar10 = plVar7 != DAT_14ca843c8;
            plVar8 = plVar6;
            if (bVar10) {
              plVar7 = DAT_14ca843c8;
              plVar8 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar8;
            UNLOCK();
          } while (bVar10);
        }
      }
    }
  }
  return;
}



// FUNCTION 1431e7be4 FUN_1431e7be4 body=110 status=ok
// SIG undefined FUN_1431e7be4(void)

undefined8 FUN_1431e7be4(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((longlong)DAT_14ca80680 != 0) {
    lVar2 = 0;
    do {
      if ((*(int *)(DAT_14ca80678 + 8 + lVar2) != 0) && (*(longlong *)(DAT_14ca80678 + lVar2) != 0))
      {
        if ((longlong)(int)param_1[1] == 0) {
          return 0;
        }
        lVar2 = *param_1;
        lVar1 = (longlong)(int)param_1[1] * 0x1f8;
        do {
          FUN_14740e8ac(lVar2);
          lVar2 = lVar2 + 0x1f8;
          lVar1 = lVar1 + -0x1f8;
        } while (lVar1 != 0);
        return 0;
      }
      lVar2 = lVar2 + 0x10;
    } while ((longlong)DAT_14ca80680 * 0x10 != lVar2);
  }
  return 0;
}



// FUNCTION 1431e7c5c FUN_1431e7c5c body=12 status=ok
// SIG undefined FUN_1431e7c5c(void)

void FUN_1431e7c5c(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001431e7c65. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1431e7c68 FUN_1431e7c68 body=57 status=ok
// SIG undefined FUN_1431e7c68(void)

undefined8 * FUN_1431e7c68(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14a37d530;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1431e7ca8 FUN_1431e7ca8 body=106 status=ok
// SIG undefined FUN_1431e7ca8(void)

void FUN_1431e7ca8(longlong param_1)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = *(longlong *)(param_1 + 0x10);
  iVar1 = *(int *)(param_1 + 0x18);
  if ((longlong)iVar1 != 0) {
    lVar4 = 0;
    do {
      FUN_1402ce13e(*(undefined8 *)(lVar3 + lVar4));
      puVar2 = *(undefined8 **)(lVar3 + lVar4);
      if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)(puVar2,1);
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
    lVar3 = *(longlong *)(param_1 + 0x10);
  }
  if (lVar3 != 0) {
    FUN_1400020a8(lVar3);
    return;
  }
  return;
}



// FUNCTION 1431e7d12 FUN_1431e7d12 body=299 status=ok
// SIG undefined FUN_1431e7d12(void)

void FUN_1431e7d12(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar7 & 0xffffffff] & 0xf) == 0) goto LAB_1431e7d74;
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
LAB_1431e7d74:
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



// FUNCTION 1431e7e3e FUN_1431e7e3e body=242 status=ok
// SIG undefined FUN_1431e7e3e(void)

void FUN_1431e7e3e(longlong *param_1)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  
  lVar3 = *param_1;
  *param_1 = 0;
  iVar1 = (int)param_1[1];
  uVar2 = *(undefined4 *)((longlong)param_1 + 0xc);
  param_1[1] = 0;
  if (DAT_14ca85164 == '\x01') {
    if (iVar1 != 0) {
      lVar6 = 0;
      do {
        FUN_1402ce13e(*(undefined8 *)(lVar3 + lVar6));
        puVar5 = *(undefined8 **)(lVar3 + lVar6);
        if (puVar5 != (undefined8 *)0x0) {
          (**(code **)*puVar5)(puVar5,1);
        }
        lVar6 = lVar6 + 8;
      } while ((longlong)iVar1 * 8 != lVar6);
    }
    if (lVar3 != 0) {
      FUN_1400020a8(lVar3);
      return;
    }
  }
  else {
    puVar4 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
    puVar5 = puVar4 + 4;
    if (DAT_14ca85108 < puVar5) {
      FUN_140023dd8(&DAT_14ca85100,0x28);
      puVar4 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
      puVar5 = puVar4 + 4;
    }
    DAT_14ca85160 = DAT_14ca85160 + 1;
    DAT_14ca85100 = puVar5;
    *DAT_14ca85130 = puVar4;
    DAT_14ca85130 = puVar4 + 1;
    puVar4[1] = 0;
    *puVar4 = &PTR_FUN_14a37d5a0;
    puVar4[2] = lVar3;
    *(int *)(puVar4 + 3) = iVar1;
    *(undefined4 *)((longlong)puVar4 + 0x1c) = uVar2;
  }
  return;
}



// FUNCTION 1431e7f46 FUN_1431e7f46 body=57 status=ok
// SIG undefined FUN_1431e7f46(void)

undefined8 * FUN_1431e7f46(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14a37d580;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1431e7f80 FUN_1431e7f80 body=106 status=ok
// SIG undefined FUN_1431e7f80(void)

void FUN_1431e7f80(longlong param_1)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = *(longlong *)(param_1 + 0x10);
  iVar1 = *(int *)(param_1 + 0x18);
  if ((longlong)iVar1 != 0) {
    lVar4 = 0;
    do {
      FUN_1402ce13e(*(undefined8 *)(lVar3 + lVar4));
      puVar2 = *(undefined8 **)(lVar3 + lVar4);
      if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)(puVar2,1);
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
    lVar3 = *(longlong *)(param_1 + 0x10);
  }
  if (lVar3 != 0) {
    FUN_1400020a8(lVar3);
    return;
  }
  return;
}



// FUNCTION 1431e7fea FUN_1431e7fea body=412 status=ok
// SIG undefined FUN_1431e7fea(void)

void FUN_1431e7fea(longlong *param_1)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  int iVar5;
  uint *puVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  
  iVar2 = (int)param_1[5];
  if (iVar2 == 0) {
    uVar15 = 1;
    uVar14 = 0;
    iVar10 = 0;
    iVar5 = 0;
  }
  else {
    puVar6 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar6 = (uint *)(param_1 + 2);
    }
    uVar13 = *puVar6;
    if (uVar13 == 0) {
      iVar5 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar5 = iVar2 + -1;
      }
      uVar14 = 0;
      uVar15 = (ulonglong)(uint)(iVar5 >> 5);
      if (iVar5 >> 5 < 1) {
        uVar15 = uVar14;
      }
      iVar10 = 0;
      do {
        if (uVar15 == uVar14) {
          return;
        }
        iVar10 = iVar10 + 0x20;
        uVar13 = puVar6[uVar14 + 1];
        uVar14 = uVar14 + 1;
      } while (uVar13 == 0);
    }
    else {
      uVar14 = 0;
      iVar10 = 0;
    }
    uVar15 = (ulonglong)(-uVar13 & uVar13);
    uVar1 = uVar15 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    iVar5 = (iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar5) {
      iVar5 = iVar2;
    }
  }
  if (iVar5 != iVar2) {
    uVar13 = 0xffffffff;
    do {
      lVar11 = *param_1;
      FUN_1402ce13e(*(undefined8 *)(lVar11 + 8 + (longlong)iVar5 * 0x18));
      puVar4 = *(undefined8 **)(lVar11 + 8 + (longlong)iVar5 * 0x18);
      if (puVar4 != (undefined8 *)0x0) {
        (**(code **)*puVar4)(puVar4,1);
      }
      uVar13 = uVar13 & ~(uint)uVar15;
      puVar6 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar6 = (uint *)(param_1 + 2);
      }
      iVar3 = (int)param_1[5];
      iVar5 = (int)uVar14;
      lVar11 = (longlong)iVar5;
      uVar9 = puVar6[lVar11] & uVar13;
      if (uVar9 == 0) {
        iVar7 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar7 = iVar3 + -1;
        }
        iVar7 = iVar7 >> 5;
        iVar10 = iVar10 + 0x20;
        iVar8 = iVar7;
        if (iVar7 < iVar5) {
          iVar8 = iVar5;
        }
        if (iVar5 < iVar7) {
          lVar12 = 0;
          do {
            uVar9 = puVar6[lVar11 + lVar12 + 1];
            if (uVar9 != 0) {
              uVar14 = (ulonglong)(iVar5 + (int)lVar12 + 1);
              uVar13 = 0xffffffff;
              goto LAB_1431e813e;
            }
            iVar10 = iVar10 + 0x20;
            lVar12 = lVar12 + 1;
          } while (iVar8 - lVar11 != lVar12);
          uVar13 = 0xffffffff;
          iVar5 = iVar8;
        }
        uVar14 = (ulonglong)(iVar5 + 1);
        iVar5 = iVar3;
      }
      else {
LAB_1431e813e:
        uVar15 = (ulonglong)(-uVar9 & uVar9);
        uVar1 = uVar15 * 2 + 1;
        lVar11 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        iVar5 = (iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
        if (iVar3 <= iVar5) {
          iVar5 = iVar3;
        }
      }
    } while (iVar5 != iVar2);
  }
  return;
}



// FUNCTION 1431e8186 FUN_1431e8186 body=56 status=ok
// SIG undefined FUN_1431e8186(void)

void FUN_1431e8186(longlong param_1)

{
  FUN_1431e7fea(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x58) = 0;
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
  }
  FUN_140dab95c(param_1 + 0x10);
  return;
}



// FUNCTION 1431e81be FUN_1431e81be body=246 status=ok
// SIG undefined FUN_1431e81be(void)

void FUN_1431e81be(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auStack_78 [32];
  undefined1 local_58 [64];
  longlong local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14740f39e(local_58,param_1);
  if (DAT_14ca85164 == '\x01') {
    FUN_1431e7fea(local_58);
  }
  else {
    puVar2 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
    puVar1 = puVar2 + 0xc;
    if (DAT_14ca85108 < puVar1) {
      FUN_140023dd8(&DAT_14ca85100,0x68);
      puVar2 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
      puVar1 = puVar2 + 0xc;
    }
    DAT_14ca85160 = DAT_14ca85160 + 1;
    DAT_14ca85100 = puVar1;
    *DAT_14ca85130 = puVar2;
    DAT_14ca85130 = puVar2 + 1;
    puVar2[1] = 0;
    *puVar2 = &PTR_FUN_14a37d5d0;
    FUN_14740f39e(puVar2 + 2,local_58);
  }
  local_10 = 0;
  if (local_18 != 0) {
    FUN_1400020a8();
  }
  FUN_140dab95c(local_58);
  if ((local_8 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431e82c0 FUN_1431e82c0 body=29 status=ok
// SIG undefined FUN_1431e82c0(void)

void FUN_1431e82c0(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1431e82de FUN_1431e82de body=73 status=ok
// SIG undefined FUN_1431e82de(void)

undefined8 * FUN_1431e82de(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14a37d5b0;
  *(undefined4 *)(param_1 + 10) = 0;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_140dab95c(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1431e8328 FUN_1431e8328 body=56 status=ok
// SIG undefined FUN_1431e8328(void)

void FUN_1431e8328(longlong param_1)

{
  FUN_1431e7fea(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x58) = 0;
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
  }
  FUN_140dab95c(param_1 + 0x10);
  return;
}



// FUNCTION 1431e8366 FUN_1431e8366 body=106 status=ok
// SIG undefined FUN_1431e8366(void)

void FUN_1431e8366(longlong param_1)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = *(longlong *)(param_1 + 0x10);
  iVar1 = *(int *)(param_1 + 0x18);
  if ((longlong)iVar1 != 0) {
    lVar4 = 0;
    do {
      FUN_1402ce13e(*(undefined8 *)(lVar3 + lVar4));
      puVar2 = *(undefined8 **)(lVar3 + lVar4);
      if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)(puVar2,1);
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
    lVar3 = *(longlong *)(param_1 + 0x10);
  }
  if (lVar3 != 0) {
    FUN_1400020a8(lVar3);
    return;
  }
  return;
}



// FUNCTION 1431e83d0 FUN_1431e83d0 body=299 status=ok
// SIG undefined FUN_1431e83d0(void)

void FUN_1431e83d0(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar7 & 0xffffffff] & 0xf) == 0) goto LAB_1431e8432;
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
LAB_1431e8432:
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



// FUNCTION 1431e84fc FUN_1431e84fc body=242 status=ok
// SIG undefined FUN_1431e84fc(void)

void FUN_1431e84fc(longlong *param_1)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  
  lVar3 = *param_1;
  *param_1 = 0;
  iVar1 = (int)param_1[1];
  uVar2 = *(undefined4 *)((longlong)param_1 + 0xc);
  param_1[1] = 0;
  if (DAT_14ca85164 == '\x01') {
    if (iVar1 != 0) {
      lVar6 = 0;
      do {
        FUN_1402ce13e(*(undefined8 *)(lVar3 + lVar6));
        puVar5 = *(undefined8 **)(lVar3 + lVar6);
        if (puVar5 != (undefined8 *)0x0) {
          (**(code **)*puVar5)(puVar5,1);
        }
        lVar6 = lVar6 + 8;
      } while ((longlong)iVar1 * 8 != lVar6);
    }
    if (lVar3 != 0) {
      FUN_1400020a8(lVar3);
      return;
    }
  }
  else {
    puVar4 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
    puVar5 = puVar4 + 4;
    if (DAT_14ca85108 < puVar5) {
      FUN_140023dd8(&DAT_14ca85100,0x28);
      puVar4 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
      puVar5 = puVar4 + 4;
    }
    DAT_14ca85160 = DAT_14ca85160 + 1;
    DAT_14ca85100 = puVar5;
    *DAT_14ca85130 = puVar4;
    DAT_14ca85130 = puVar4 + 1;
    puVar4[1] = 0;
    *puVar4 = &PTR_FUN_14a37d630;
    puVar4[2] = lVar3;
    *(int *)(puVar4 + 3) = iVar1;
    *(undefined4 *)((longlong)puVar4 + 0x1c) = uVar2;
  }
  return;
}



// FUNCTION 1431e8604 FUN_1431e8604 body=57 status=ok
// SIG undefined FUN_1431e8604(void)

undefined8 * FUN_1431e8604(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14a37d610;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1431e863e FUN_1431e863e body=106 status=ok
// SIG undefined FUN_1431e863e(void)

void FUN_1431e863e(longlong param_1)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = *(longlong *)(param_1 + 0x10);
  iVar1 = *(int *)(param_1 + 0x18);
  if ((longlong)iVar1 != 0) {
    lVar4 = 0;
    do {
      FUN_1402ce13e(*(undefined8 *)(lVar3 + lVar4));
      puVar2 = *(undefined8 **)(lVar3 + lVar4);
      if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)(puVar2,1);
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
    lVar3 = *(longlong *)(param_1 + 0x10);
  }
  if (lVar3 != 0) {
    FUN_1400020a8(lVar3);
    return;
  }
  return;
}



// FUNCTION 1431e86a8 FUN_1431e86a8 body=412 status=ok
// SIG undefined FUN_1431e86a8(void)

void FUN_1431e86a8(longlong *param_1)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  int iVar5;
  uint *puVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  
  iVar2 = (int)param_1[5];
  if (iVar2 == 0) {
    uVar15 = 1;
    uVar14 = 0;
    iVar10 = 0;
    iVar5 = 0;
  }
  else {
    puVar6 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar6 = (uint *)(param_1 + 2);
    }
    uVar13 = *puVar6;
    if (uVar13 == 0) {
      iVar5 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar5 = iVar2 + -1;
      }
      uVar14 = 0;
      uVar15 = (ulonglong)(uint)(iVar5 >> 5);
      if (iVar5 >> 5 < 1) {
        uVar15 = uVar14;
      }
      iVar10 = 0;
      do {
        if (uVar15 == uVar14) {
          return;
        }
        iVar10 = iVar10 + 0x20;
        uVar13 = puVar6[uVar14 + 1];
        uVar14 = uVar14 + 1;
      } while (uVar13 == 0);
    }
    else {
      uVar14 = 0;
      iVar10 = 0;
    }
    uVar15 = (ulonglong)(-uVar13 & uVar13);
    uVar1 = uVar15 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    iVar5 = (iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar5) {
      iVar5 = iVar2;
    }
  }
  if (iVar5 != iVar2) {
    uVar13 = 0xffffffff;
    do {
      lVar11 = *param_1;
      FUN_1402ce13e(*(undefined8 *)(lVar11 + 0x58 + (longlong)iVar5 * 0x68));
      puVar4 = *(undefined8 **)(lVar11 + 0x58 + (longlong)iVar5 * 0x68);
      if (puVar4 != (undefined8 *)0x0) {
        (**(code **)*puVar4)(puVar4,1);
      }
      uVar13 = uVar13 & ~(uint)uVar15;
      puVar6 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar6 = (uint *)(param_1 + 2);
      }
      iVar3 = (int)param_1[5];
      iVar5 = (int)uVar14;
      lVar11 = (longlong)iVar5;
      uVar9 = puVar6[lVar11] & uVar13;
      if (uVar9 == 0) {
        iVar7 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar7 = iVar3 + -1;
        }
        iVar7 = iVar7 >> 5;
        iVar10 = iVar10 + 0x20;
        iVar8 = iVar7;
        if (iVar7 < iVar5) {
          iVar8 = iVar5;
        }
        if (iVar5 < iVar7) {
          lVar12 = 0;
          do {
            uVar9 = puVar6[lVar11 + lVar12 + 1];
            if (uVar9 != 0) {
              uVar14 = (ulonglong)(iVar5 + (int)lVar12 + 1);
              uVar13 = 0xffffffff;
              goto LAB_1431e87fc;
            }
            iVar10 = iVar10 + 0x20;
            lVar12 = lVar12 + 1;
          } while (iVar8 - lVar11 != lVar12);
          uVar13 = 0xffffffff;
          iVar5 = iVar8;
        }
        uVar14 = (ulonglong)(iVar5 + 1);
        iVar5 = iVar3;
      }
      else {
LAB_1431e87fc:
        uVar15 = (ulonglong)(-uVar9 & uVar9);
        uVar1 = uVar15 * 2 + 1;
        lVar11 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        iVar5 = (iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
        if (iVar3 <= iVar5) {
          iVar5 = iVar3;
        }
      }
    } while (iVar5 != iVar2);
  }
  return;
}



// FUNCTION 1431e8844 FUN_1431e8844 body=56 status=ok
// SIG undefined FUN_1431e8844(void)

void FUN_1431e8844(longlong param_1)

{
  FUN_1431e86a8(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x58) = 0;
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
  }
  FUN_145adebb8(param_1 + 0x10);
  return;
}



// FUNCTION 1431e887c FUN_1431e887c body=246 status=ok
// SIG undefined FUN_1431e887c(void)

void FUN_1431e887c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auStack_78 [32];
  undefined1 local_58 [64];
  longlong local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_147410564(local_58,param_1);
  if (DAT_14ca85164 == '\x01') {
    FUN_1431e86a8(local_58);
  }
  else {
    puVar2 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
    puVar1 = puVar2 + 0xc;
    if (DAT_14ca85108 < puVar1) {
      FUN_140023dd8(&DAT_14ca85100,0x68);
      puVar2 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
      puVar1 = puVar2 + 0xc;
    }
    DAT_14ca85160 = DAT_14ca85160 + 1;
    DAT_14ca85100 = puVar1;
    *DAT_14ca85130 = puVar2;
    DAT_14ca85130 = puVar2 + 1;
    puVar2[1] = 0;
    *puVar2 = &PTR_FUN_14a37d660;
    FUN_147410564(puVar2 + 2,local_58);
  }
  local_10 = 0;
  if (local_18 != 0) {
    FUN_1400020a8();
  }
  FUN_145adebb8(local_58);
  if ((local_8 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431e897e FUN_1431e897e body=29 status=ok
// SIG undefined FUN_1431e897e(void)

void FUN_1431e897e(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1431e899c FUN_1431e899c body=73 status=ok
// SIG undefined FUN_1431e899c(void)

undefined8 * FUN_1431e899c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14a37d640;
  *(undefined4 *)(param_1 + 10) = 0;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_145adebb8(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1431e89e6 FUN_1431e89e6 body=56 status=ok
// SIG undefined FUN_1431e89e6(void)

void FUN_1431e89e6(longlong param_1)

{
  FUN_1431e86a8(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x58) = 0;
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
  }
  FUN_145adebb8(param_1 + 0x10);
  return;
}



// FUNCTION 1431e8a24 FUN_1431e8a24 body=106 status=ok
// SIG undefined FUN_1431e8a24(void)

void FUN_1431e8a24(longlong param_1)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = *(longlong *)(param_1 + 0x10);
  iVar1 = *(int *)(param_1 + 0x18);
  if ((longlong)iVar1 != 0) {
    lVar4 = 0;
    do {
      FUN_1402ce13e(*(undefined8 *)(lVar3 + lVar4));
      puVar2 = *(undefined8 **)(lVar3 + lVar4);
      if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)(puVar2,1);
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
    lVar3 = *(longlong *)(param_1 + 0x10);
  }
  if (lVar3 != 0) {
    FUN_1400020a8(lVar3);
    return;
  }
  return;
}



// FUNCTION 1431e8a8e FUN_1431e8a8e body=299 status=ok
// SIG undefined FUN_1431e8a8e(void)

void FUN_1431e8a8e(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar7 & 0xffffffff] & 0xf) == 0) goto LAB_1431e8af0;
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
LAB_1431e8af0:
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



// FUNCTION 1431e8bba FUN_1431e8bba body=242 status=ok
// SIG undefined FUN_1431e8bba(void)

void FUN_1431e8bba(longlong *param_1)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  
  lVar3 = *param_1;
  *param_1 = 0;
  iVar1 = (int)param_1[1];
  uVar2 = *(undefined4 *)((longlong)param_1 + 0xc);
  param_1[1] = 0;
  if (DAT_14ca85164 == '\x01') {
    if (iVar1 != 0) {
      lVar6 = 0;
      do {
        FUN_1402ce13e(*(undefined8 *)(lVar3 + lVar6));
        puVar5 = *(undefined8 **)(lVar3 + lVar6);
        if (puVar5 != (undefined8 *)0x0) {
          (**(code **)*puVar5)(puVar5,1);
        }
        lVar6 = lVar6 + 8;
      } while ((longlong)iVar1 * 8 != lVar6);
    }
    if (lVar3 != 0) {
      FUN_1400020a8(lVar3);
      return;
    }
  }
  else {
    puVar4 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
    puVar5 = puVar4 + 4;
    if (DAT_14ca85108 < puVar5) {
      FUN_140023dd8(&DAT_14ca85100,0x28);
      puVar4 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
      puVar5 = puVar4 + 4;
    }
    DAT_14ca85160 = DAT_14ca85160 + 1;
    DAT_14ca85100 = puVar5;
    *DAT_14ca85130 = puVar4;
    DAT_14ca85130 = puVar4 + 1;
    puVar4[1] = 0;
    *puVar4 = &PTR_FUN_14a37d6c0;
    puVar4[2] = lVar3;
    *(int *)(puVar4 + 3) = iVar1;
    *(undefined4 *)((longlong)puVar4 + 0x1c) = uVar2;
  }
  return;
}



// FUNCTION 1431e8cc2 FUN_1431e8cc2 body=57 status=ok
// SIG undefined FUN_1431e8cc2(void)

undefined8 * FUN_1431e8cc2(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14a37d6a0;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1431e8cfc FUN_1431e8cfc body=106 status=ok
// SIG undefined FUN_1431e8cfc(void)

void FUN_1431e8cfc(longlong param_1)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = *(longlong *)(param_1 + 0x10);
  iVar1 = *(int *)(param_1 + 0x18);
  if ((longlong)iVar1 != 0) {
    lVar4 = 0;
    do {
      FUN_1402ce13e(*(undefined8 *)(lVar3 + lVar4));
      puVar2 = *(undefined8 **)(lVar3 + lVar4);
      if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)(puVar2,1);
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
    lVar3 = *(longlong *)(param_1 + 0x10);
  }
  if (lVar3 != 0) {
    FUN_1400020a8(lVar3);
    return;
  }
  return;
}



// FUNCTION 1431e8d66 FUN_1431e8d66 body=421 status=ok
// SIG undefined FUN_1431e8d66(void)

void FUN_1431e8d66(longlong *param_1)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  int iVar5;
  uint *puVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  
  iVar2 = (int)param_1[5];
  if (iVar2 == 0) {
    uVar15 = 1;
    uVar14 = 0;
    iVar10 = 0;
    iVar5 = 0;
  }
  else {
    puVar6 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar6 = (uint *)(param_1 + 2);
    }
    uVar13 = *puVar6;
    if (uVar13 == 0) {
      iVar5 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar5 = iVar2 + -1;
      }
      uVar14 = 0;
      uVar15 = (ulonglong)(uint)(iVar5 >> 5);
      if (iVar5 >> 5 < 1) {
        uVar15 = uVar14;
      }
      iVar10 = 0;
      do {
        if (uVar15 == uVar14) {
          return;
        }
        iVar10 = iVar10 + 0x20;
        uVar13 = puVar6[uVar14 + 1];
        uVar14 = uVar14 + 1;
      } while (uVar13 == 0);
    }
    else {
      uVar14 = 0;
      iVar10 = 0;
    }
    uVar15 = (ulonglong)(-uVar13 & uVar13);
    uVar1 = uVar15 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    iVar5 = (iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar5) {
      iVar5 = iVar2;
    }
  }
  if (iVar5 != iVar2) {
    uVar13 = 0xffffffff;
    do {
      lVar11 = *param_1;
      FUN_1402ce13e(*(undefined8 *)(lVar11 + 0xd8 + (longlong)iVar5 * 0xe8));
      puVar4 = *(undefined8 **)(lVar11 + 0xd8 + (longlong)iVar5 * 0xe8);
      if (puVar4 != (undefined8 *)0x0) {
        (**(code **)*puVar4)(puVar4,1);
      }
      uVar13 = uVar13 & ~(uint)uVar15;
      puVar6 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar6 = (uint *)(param_1 + 2);
      }
      iVar3 = (int)param_1[5];
      iVar5 = (int)uVar14;
      lVar11 = (longlong)iVar5;
      uVar9 = puVar6[lVar11] & uVar13;
      if (uVar9 == 0) {
        iVar7 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar7 = iVar3 + -1;
        }
        iVar7 = iVar7 >> 5;
        iVar10 = iVar10 + 0x20;
        iVar8 = iVar7;
        if (iVar7 < iVar5) {
          iVar8 = iVar5;
        }
        if (iVar5 < iVar7) {
          lVar12 = 0;
          do {
            uVar9 = puVar6[lVar11 + lVar12 + 1];
            if (uVar9 != 0) {
              uVar14 = (ulonglong)(iVar5 + (int)lVar12 + 1);
              uVar13 = 0xffffffff;
              goto LAB_1431e8ec3;
            }
            iVar10 = iVar10 + 0x20;
            lVar12 = lVar12 + 1;
          } while (iVar8 - lVar11 != lVar12);
          uVar13 = 0xffffffff;
          iVar5 = iVar8;
        }
        uVar14 = (ulonglong)(iVar5 + 1);
        iVar5 = iVar3;
      }
      else {
LAB_1431e8ec3:
        uVar15 = (ulonglong)(-uVar9 & uVar9);
        uVar1 = uVar15 * 2 + 1;
        lVar11 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        iVar5 = (iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
        if (iVar3 <= iVar5) {
          iVar5 = iVar3;
        }
      }
    } while (iVar5 != iVar2);
  }
  return;
}



// FUNCTION 1431e8f0c FUN_1431e8f0c body=56 status=ok
// SIG undefined FUN_1431e8f0c(void)

void FUN_1431e8f0c(longlong param_1)

{
  FUN_1431e8d66(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x58) = 0;
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
  }
  FUN_1400329f4(param_1 + 0x10);
  return;
}



// FUNCTION 1431e8f44 FUN_1431e8f44 body=246 status=ok
// SIG undefined FUN_1431e8f44(void)

void FUN_1431e8f44(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auStack_78 [32];
  undefined1 local_58 [64];
  longlong local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14741104a(local_58,param_1);
  if (DAT_14ca85164 == '\x01') {
    FUN_1431e8d66(local_58);
  }
  else {
    puVar2 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
    puVar1 = puVar2 + 0xc;
    if (DAT_14ca85108 < puVar1) {
      FUN_140023dd8(&DAT_14ca85100,0x68);
      puVar2 = (undefined8 *)((longlong)DAT_14ca85100 + 7U & 0xfffffffffffffff8);
      puVar1 = puVar2 + 0xc;
    }
    DAT_14ca85160 = DAT_14ca85160 + 1;
    DAT_14ca85100 = puVar1;
    *DAT_14ca85130 = puVar2;
    DAT_14ca85130 = puVar2 + 1;
    puVar2[1] = 0;
    *puVar2 = &PTR_FUN_14a37d6f0;
    FUN_14741104a(puVar2 + 2,local_58);
  }
  local_10 = 0;
  if (local_18 != 0) {
    FUN_1400020a8();
  }
  FUN_1400329f4(local_58);
  if ((local_8 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431e9046 FUN_1431e9046 body=29 status=ok
// SIG undefined FUN_1431e9046(void)

void FUN_1431e9046(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1431e9064 FUN_1431e9064 body=73 status=ok
// SIG undefined FUN_1431e9064(void)

undefined8 * FUN_1431e9064(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14a37d6d0;
  *(undefined4 *)(param_1 + 10) = 0;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_1400329f4(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1431e90ae FUN_1431e90ae body=56 status=ok
// SIG undefined FUN_1431e90ae(void)

void FUN_1431e90ae(longlong param_1)

{
  FUN_1431e8d66(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x58) = 0;
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
  }
  FUN_1400329f4(param_1 + 0x10);
  return;
}



// FUNCTION 1431e90e6 FUN_1431e90e6 body=282 status=ok
// SIG undefined FUN_1431e90e6(void)

undefined8 * FUN_1431e90e6(undefined8 *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  int *_Memory;
  int *piVar3;
  
  *param_1 = UE::Tasks::Private::FTaskBase::vftable;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (*(code **)(param_1[0xe] + 0x18) != FUN_144713626) {
    (**(code **)(param_1[0xe] + 0x18))(param_1 + 0xe,param_1 + 9);
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1 != (undefined8 *)0x0 && param_2 != 0) {
    piVar3 = (int *)((ulonglong)param_1 & 0xffffffffffff0000);
    LOCK();
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (*piVar3 == 0) {
      _Memory = piVar3;
      if (*(longlong *)(piVar3 + 0x10) - (longlong)piVar3 == 0x10000) {
        uVar1 = *(uint *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318
                         );
        if ((uVar1 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar1 | 1;
          __tlregdtor(&LAB_1431e6dc7);
        }
        lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        _Memory = *(int **)(lVar2 + 0x310);
        *(int **)(lVar2 + 0x310) = piVar3;
        if (_Memory == (int *)0x0) {
          return param_1;
        }
      }
      _aligned_free(_Memory);
    }
  }
  return param_1;
}



// FUNCTION 1431e9220 FUN_1431e9220 body=52 status=ok
// SIG undefined FUN_1431e9220(void)

undefined8 * FUN_1431e9220(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14a37d710;
  FUN_14178d214(param_1[1]);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1431e9254 FUN_1431e9254 body=275 status=ok
// SIG undefined FUN_1431e9254(void)

bool FUN_1431e9254(longlong param_1,longlong param_2,undefined4 *param_3)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  
  if (*(int *)(param_1 + 0x28) != *(int *)(param_1 + 0x54)) {
    lVar6 = param_1 + 0x58;
    if (*(longlong *)(param_1 + 0x60) != 0) {
      lVar6 = *(longlong *)(param_1 + 0x60);
    }
    iVar4 = *(int *)(lVar6 + (ulonglong)
                             (*(int *)(param_1 + 0x68) - 1U &
                             (int)param_2 + (int)((ulonglong)param_2 >> 0x20) * 0x17) * 4);
    if (iVar4 != -1) {
      do {
        lVar6 = *(longlong *)(param_1 + 0x20) + (longlong)iVar4 * 0x20;
        if (*(longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar4 * 0x20) == param_2)
        goto LAB_1431e92b8;
        iVar4 = *(int *)(lVar6 + 0x18);
      } while (iVar4 != -1);
    }
  }
  lVar6 = 0;
LAB_1431e92b8:
  plVar8 = (longlong *)(lVar6 + 8);
  if (lVar6 == 0) {
    plVar8 = (longlong *)0x0;
  }
  if ((plVar8 == (longlong *)0x0) || ((*(byte *)((longlong)plVar8 + 0xc) & 6) != 0))
  goto LAB_1431e92cf;
  *param_3 = (int)plVar8[1];
  uVar5 = 1;
  if ((*(byte *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0xc60) & 0x20) == 0) {
    uVar5 = DAT_14c760d80 ^ 1;
  }
  plVar2 = *(longlong **)(*plVar8 + 0x18 + (ulonglong)(uVar5 << 4));
  if (plVar2 == (longlong *)0x0) {
    puVar7 = *(undefined8 **)(param_3 + 2);
    if (puVar7 == (undefined8 *)0x0) goto LAB_1431e92cf;
    *(undefined8 *)(param_3 + 2) = 0;
  }
  else {
    puVar3 = (undefined8 *)*plVar2;
    puVar7 = *(undefined8 **)(param_3 + 2);
    if (puVar7 == puVar3) goto LAB_1431e92cf;
    *(undefined8 **)(param_3 + 2) = puVar3;
    if (puVar3 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(puVar3 + 1) = *(int *)(puVar3 + 1) + 1;
      UNLOCK();
    }
    if (puVar7 == (undefined8 *)0x0) goto LAB_1431e92cf;
  }
  LOCK();
  piVar1 = (int *)(puVar7 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)*puVar7)(puVar7,1);
  }
LAB_1431e92cf:
  return plVar8 != (longlong *)0x0;
}



// FUNCTION 1431e9367 FUN_1431e9367 body=5110 status=ok
// SIG undefined FUN_1431e9367(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431e9367(void)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined8 local_50;
  int local_48;
  undefined1 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  DAT_14ca7ff90 = 0;
  DAT_14ca7ff98 = 0;
  DAT_14ca7ff70 = 0;
  _DAT_14ca7ff78 = 0;
  _DAT_14ca7ff9c = 0xffffffff00000080;
  _DAT_14ca7ffa4 = 0;
  DAT_14ca7ffb0 = 0;
  DAT_14ca7ffb8 = 0;
  atexit(FUN_1431d7930);
  DAT_14ca7ffe0 = 0;
  DAT_14ca7ffe8 = 0;
  DAT_14ca7ffc0 = 0;
  _DAT_14ca7ffc8 = 0;
  _DAT_14ca7ffec = 0xffffffff00000080;
  DAT_14ca7fff4 = 0;
  DAT_14ca80000 = 0;
  DAT_14ca80008 = 0;
  atexit(FUN_1431d7959);
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14ca80010);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14ca80010,4000);
  atexit((_func_5014 *)&LAB_1431d7982);
  local_50 = &DAT_14a374db0;
  local_48 = 3;
  local_44 = 0;
  uVar1 = FUN_14001a6c0(&local_50,1);
  DAT_14ca80038 = (ulonglong)uVar1;
  local_50 = "Metal";
  local_48 = 5;
  local_44 = 0;
  uVar1 = FUN_14001a6c0(&local_50,1);
  DAT_14ca838f8 = (ulonglong)uVar1;
  local_50 = "OpenGL";
  local_48 = 6;
  local_44 = 0;
  uVar1 = FUN_14001a6c0(&local_50,1);
  DAT_14ca81490 = (ulonglong)uVar1;
  local_50 = "Vulkan";
  local_48 = 6;
  local_44 = 0;
  uVar1 = FUN_14001a6c0(&local_50,1);
  DAT_14ca81498 = (ulonglong)uVar1;
  local_50 = &DAT_14a374dc8;
  local_48 = 4;
  local_44 = 0;
  uVar1 = FUN_14001a6c0(&local_50,1);
  DAT_14ca80040 = (ulonglong)uVar1;
  local_50 = "Nintendo";
  local_48 = 8;
  local_44 = 0;
  uVar1 = FUN_14001a6c0(&local_50,1);
  _DAT_14ca80048 = (ulonglong)uVar1;
  lVar2 = 0x38;
  do {
    *(undefined8 *)(lVar2 + 0x14ca81478) = 0;
    *(undefined8 *)((longlong)&DAT_14ca81480 + lVar2) = 0;
    *(undefined8 *)((longlong)&DAT_14ca81488 + lVar2) = 0;
    *(undefined8 *)((longlong)&DAT_14ca81490 + lVar2) = 0;
    *(undefined8 *)(lVar2 + 0x14ca81468) = 0;
    *(undefined8 *)(lVar2 + 0x14ca81470) = 0;
    *(undefined8 *)((longlong)&DAT_14ca81498 + lVar2) = 0x8013d00000000000;
    *(undefined4 *)((longlong)&DAT_14ca81480 + lVar2) = 5;
    *(undefined4 *)(&DAT_14ca814a0 + lVar2) = 0x40a00;
    *(undefined4 *)((longlong)&DAT_14ca81490 + lVar2) = 0x40020000;
    lVar2 = lVar2 + 0x3c;
  } while (lVar2 != 0x248c);
  DAT_14ca80070 = 0;
  DAT_14ca80078 = 0;
  DAT_14ca80050 = 0;
  _DAT_14ca80058 = 0;
  _DAT_14ca8007c = 0xffffffff00000080;
  DAT_14ca80084 = 0;
  DAT_14ca80090 = 0;
  DAT_14ca80098 = 0;
  atexit(FUN_1431d7990);
  DAT_14ca81488 = 0;
  atexit((_func_5014 *)&LAB_1431d7ea0);
  local_68 = 0x20;
  FUN_141471170(&DAT_14ca800a8,L"r.WarnOfBadDrivers",&DAT_14c760d50,
                L"Check the current GPU driver on engine startup, warn the user about issues and suggest a specific version.\nThe driver denylist is used to check for bad drivers according to their release date and/or driver versions.\n 0: off\n 1: check the driver and display a pop-up message if the driver is denylisted (default)"
               );
  atexit(FUN_1431d7ebc);
  local_68 = 0x20;
  FUN_14153156c(&DAT_14ca800b8,L"r.BadDriverWarningIsFatal",&DAT_14ca800c8,
                L"If non-zero, trigger a fatal error if a denylisted driver is detected.\nFor the fatal error to occur, r.WarnOfBadDrivers must be non-zero.\n 0: off (default)\n 1: a fatal error occurs after the out-of-date driver message is dismissed (non-Shipping only)\n"
               );
  atexit(FUN_1431d7f01);
  local_68 = 0;
  FUN_141471170(&DAT_14ca800f0,L"r.GPUDefrag.EnableTimeLimits",&DAT_14c760d54,
                L"Limits CPU time spent doing GPU defragmentation.\n");
  atexit(FUN_1431d9ded);
  local_68 = 0;
  FUN_141471170(&DAT_14ca80100,L"r.GPUDefrag.MaxRelocations",&DAT_14c760d58,
                L"Limits the number of total relocations in a frame regardless of number of bytes moved..\n"
               );
  atexit(FUN_1431d9e32);
  local_68 = 0;
  FUN_141471170(&DAT_14ca80110,L"r.GPUDefrag.AllowOverlappedMoves",&DAT_14c760d5c,
                L"Allows defrag relocations that partially overlap themselves.\n");
  atexit(FUN_1431d9e77);
  local_50 = (char *)((ulonglong)local_50 & 0xffffffff00000000);
  local_68 = 0;
  FUN_14078dbce(&DAT_14ca80120,L"r.GPUCsvStatsEnabled",&local_50,
                L"Enables or disables GPU stat recording to CSVs");
  atexit(FUN_1431d9ebc);
  FUN_140056680(&local_50,&DAT_149e060b2);
  local_68 = 0;
  FUN_140f510cc(&DAT_14ca80138,L"r.ProfileGPU.Pattern",&local_50,
                L"Allows to filter the entries when using ProfileGPU, the pattern match is case sensitive.\n\'*\' can be used in the end to get all entries starting with the string.\n    \'*\' without any leading characters disables the pattern matching and uses a time threshold instead (default).\n\'?\' allows to ignore one character.\ne.g. AmbientOcclusionSetup, AmbientOcclusion*, Ambient???lusion*, *"
               );
  if (local_50 != (char *)0x0) {
    FUN_1400020a8();
  }
  atexit(FUN_1431d9f01);
  FUN_140056680(&local_50,&DAT_149e060b2);
  local_68 = 0;
  FUN_140f510cc(&DAT_14ca80150,L"r.ProfileGPU.Root",&local_50,
                L"Allows to filter the tree when using ProfileGPU, the pattern match is case sensitive."
               );
  if (local_50 != (char *)0x0) {
    FUN_1400020a8();
  }
  atexit(FUN_1431d9f46);
  local_50 = (char *)((ulonglong)local_50 & 0xffffffff00000000);
  local_68 = 0;
  FUN_140a6b41e(&DAT_14ca80168,L"r.ProfileGPU.ThresholdPercent",&local_50,
                L"Percent of the total execution duration the event needs to be larger than to be printed."
               );
  atexit(FUN_1431d9f8b);
  local_50 = (char *)((ulonglong)local_50 & 0xffffffff00000000);
  local_68 = 0;
  FUN_14078dbce(&DAT_14ca80180,L"r.ProfileGPU.ShowEventHistogram",&local_50,
                L"Whether the event histogram should be shown.");
  atexit(FUN_1431d9fd0);
  local_50._0_4_ = 1;
  local_68 = 0;
  FUN_14078dbce(&DAT_14ca80198,L"r.ProfileGPU.ShowLeafEvents",&local_50,
                L"Allows profileGPU to display event-only leaf nodes with no draws associated.");
  atexit(FUN_1431da015);
  local_50._0_4_ = 0;
  local_68 = 0;
  FUN_14078dbce(&DAT_14ca801b0,L"r.ProfileGPU.ShowTransitions",&local_50,
                L"Allows profileGPU to display resource transition events.");
  atexit(FUN_1431da05a);
  local_50 = (char *)((ulonglong)local_50._4_4_ << 0x20);
  local_68 = 0;
  FUN_14078dbce(&DAT_14ca801c8,L"r.ProfileGPU.PrintAssetSummary",&local_50,
                L"Should we print a summary split by asset (r.ShowMaterialDrawEvents is strongly recommended as well).\n"
               );
  atexit(FUN_1431da09f);
  FUN_140056680(&local_50,&DAT_149dfb77a);
  local_68 = 0;
  FUN_140f510cc(&DAT_14ca801e0,L"r.ProfileGPU.AssetSummaryCallOuts",&local_50,
                L"Comma separated list of substrings that deserve special mention in the final summary (e.g., \"LOD,HeroName\"\nr.ProfileGPU.PrintAssetSummary must be true to enable this feature"
               );
  if (local_50 != (char *)0x0) {
    FUN_1400020a8();
  }
  atexit(FUN_1431da0e4);
  local_50._0_4_ = 1;
  local_68 = 0x20;
  FUN_14078dbce(&DAT_14ca801f8,L"r.gpucrash.collectionenable",&local_50,
                L"Stores GPU crash data from scoped events when a applicable crash debugging system is available."
               );
  atexit(FUN_1431da129);
  local_50._0_4_ = 0xffffffff;
  local_68 = 0x20;
  FUN_14078dbce(&DAT_14ca80210,L"r.gpucrash.datadepth",&local_50,
                L"Limits the amount of marker scope depth we record for GPU crash debugging to the given scope depth."
               );
  atexit(FUN_1431da16e);
  local_50._0_4_ = 0;
  local_68 = 0;
  FUN_14078dbce(&DAT_14ca80228,L"r.ProfileGPU.Sort",&local_50,
                L"Sorts the TTY Dump independently at each level of the tree in various modes.\n0 : Chronological\n1 : By time elapsed\n2 : By number of prims\n3 : By number of verts\n"
               );
  atexit(FUN_1431da1b3);
  DAT_14ca813c0 = 0;
  uRam000000014ca813c8 = 0;
  _DAT_14ca813d0 = 0;
  uRam000000014ca813d8 = 0;
  _DAT_14ca813e0 = 0;
  uRam000000014ca813e8 = 0;
  _DAT_14ca813f0 = 0;
  uRam000000014ca813f8 = 0;
  local_50._0_4_ = 0;
  local_68 = 0;
  FUN_14078dbce(&DAT_14ca80270,L"gbx.Profile.NamedEventsMaxStack",&local_50,
                L"When set to >0, NamedEvents will not be emitted once stack height exceeds the value of this CVar"
               );
  atexit(FUN_1431dc11f);
  local_50._0_4_ = 1;
  local_68 = 0;
  FUN_14078dbce(&DAT_14ca80288,L"gbx.Profile.AutomaticallyToggleIdealCaptureOptions",&local_50,
                L"1: When an external profiler connects and requests a CPU or GPU capture, ideal capture options are enabled automatically\n2: On platforms that don\'t support detecting when a profiler attaches, Ideal Capture Options are enabled at startup and never disabled. Same as 1 for platforms that support the detection"
               );
  atexit(FUN_1431dc164);
  local_50._0_4_ = 1;
  local_68 = 0;
  FUN_14078dbce(&DAT_14ca802a0,L"gbx.Profile.IdealCaptureOptionsToggleMaterialDrawEvents",&local_50,
                L"1: When ideal capture options are toggled, GShowMaterialDrawEventTypes is set to true"
               );
  atexit(FUN_1431dc1a9);
  local_50._0_4_ = 1;
  local_68 = 0;
  FUN_14078dbce(&DAT_14ca802b8,L"gbx.Profile.IdealCaptureOptionsToggleDrawEvents",&local_50,
                L"1: When ideal capture options are toggled, GEmitDrawEvents is set to true");
  atexit(FUN_1431dc1ee);
  local_50 = (char *)CONCAT44(local_50._4_4_,1);
  local_68 = 0;
  FUN_14078dbce(&DAT_14ca802d0,L"gbx.Profile.IdealCaptureOptionsToggleNamedEvents",&local_50,
                L"1: When ideal capture options are toggled, GCycleStatsShouldEmitNamedEvents is set to INT_MAX (or the value of gbx.Profile.NamedEventsMaxStack if set to > 0)"
               );
  atexit(FUN_1431dc233);
  local_50 = (char *)0x0;
  local_48 = 0;
  FUN_1446efa72(&local_50,0,2,0x10);
  local_48 = 2;
  *(undefined ***)local_50 = &PTR_LAB_149e001f0;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar2 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar2 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar2;
  *(longlong *)((longlong)local_50 + 0x10) = lVar3;
  *(undefined ***)local_50 = &PTR_FUN_149e00260;
  *(undefined **)((longlong)local_50 + 0x18) = &DAT_1431dc278;
  local_68 = 0;
  FUN_1415c7246(&DAT_14ca802e8,L"gbx.Profile.ToggleIdealCaptureOptions",
                L"Toggles ideal options for gpu/cpu captures when no argument is specified. To manually set, use 1 or 0 as argument to force on/off"
                ,&local_50);
  if (local_48 == 0) {
LAB_1431e9ba4:
    if (local_50 != (char *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_50 != (char *)0x0) {
    (*(code *)**(undefined8 **)local_50)(local_50,0);
    FUN_1446efa72(&local_50,0,0,0x10);
    local_48 = 0;
    goto LAB_1431e9ba4;
  }
  atexit(FUN_1431dc279);
  FUN_140056680(&DAT_14ca802f8,L".jnl");
  atexit((_func_5014 *)&LAB_1431dc2be);
  local_50._0_4_ = 1;
  local_68 = 0x20;
  FUN_14078dbce(&DAT_14ca80308,L"r.ShaderPipelineCache.Enabled",&local_50,
                L"1 Enables the PipelineFileCache, 0 disables it.");
  atexit(FUN_1431dc2cf);
  local_50._0_4_ = 1;
  local_68 = 0x20;
  FUN_14078dbce(&DAT_14ca80320,L"r.ShaderPipelineCache.LogPSO",&local_50,
                L"1 Logs new PSO entries into the file cache and allows saving.");
  atexit(FUN_1431dc314);
  local_50._0_4_ = 1;
  local_68 = 0x20;
  FUN_14078dbce(&DAT_14ca80338,L"r.ShaderPipelineCache.ReportPSO",&local_50,
                L"1 reports new PSO entries via a delegate, but does not record or modify any cache file. New PSOs are reported in bulk once per frame."
               );
  atexit(FUN_1431dc359);
  local_68 = 4;
  FUN_141471170(&DAT_14ca80350,L"r.ShaderPipelineCache.ExcludePrecachePSO",&DAT_14ca80360,
                L"1 excludes saving runtime-precached graphics PSOs in the file cache, 0 (default) includes them. Excluding precached PSOs requires PSO precaching to be enabled."
               );
  atexit(FUN_1431dc39e);
  local_68 = 0;
  FUN_141471170(&DAT_14ca80368,L"r.ShaderPipelineCache.PrintNewPSODescriptors",&DAT_14ca80378,
                L"1 prints descriptions for all new PSO entries to the log/console while 0 does not. 2 prints additional details about graphics PSO. Defaults to 0."
               );
  atexit(FUN_1431dc3e3);
  local_50._0_4_ = 1;
  local_68 = 0x20;
  FUN_14078dbce(&DAT_14ca80380,L"r.ShaderPipelineCache.SaveUserCache",&local_50,
                L"If > 0 then any missed PSOs will be saved to a writable user cache file for subsequent runs to load and avoid in-game hitches. Enabled by default on macOS only."
               );
  atexit(FUN_1431dc428);
  local_50._0_4_ = 0x1e;
  local_68 = 0;
  FUN_14078dbce(&DAT_14ca80398,L"r.ShaderPipelineCache.UserCacheUnusedElementRetainDays",&local_50,
                L"The amount of time in days to keep unused PSO entries in the cache.");
  atexit(FUN_1431dc46d);
  local_50._0_4_ = 0xffffffff;
  local_68 = 0;
  FUN_14078dbce(&DAT_14ca803b0,L"r.ShaderPipelineCache.UserCacheUnusedElementCheckPeriod",&local_50,
                L"The amount of time in days between running the garbage collection on unused PSOs in the user cache. Use a negative value to disable."
               );
  atexit(FUN_1431dc4b2);
  local_50._0_4_ = 0;
  local_68 = 0x20;
  FUN_14078dbce(&DAT_14ca803c8,L"r.ShaderPipelineCache.LazyLoadShadersWhenPSOCacheIsPresent",
                &local_50,
                L"Non-Zero: If we load a PSO cache, then lazy load from the shader code library. This assumes the PSO cache is more or less complete. This will only work on RHIs that support the library+Hash CreateShader API (GRHISupportsLazyShaderCodeLoading == true)."
               );
  atexit(FUN_1431dc4f7);
  local_50._0_4_ = 0;
  local_68 = 0x20;
  FUN_14078dbce(&DAT_14ca803e0,L"r.ShaderPipelineCache.ClearOSCache",&local_50,
                L"1 Enables the OS level clear after install, 0 disables it.");
  atexit(FUN_1431dc53c);
  local_50._0_4_ = 1;
  local_68 = 0x20;
  FUN_14078dbce(&DAT_14ca803f8,L"r.ShaderPipelineCache.AlwaysGenerateOSCache",&local_50,
                L"1 generates the cache every run, 0 generates it only when it is missing.");
  atexit(FUN_1431dc581);
  InitializeSRWLock((PSRWLOCK)&DAT_14ca80410);
  DAT_14ca80438 = 0;
  DAT_14ca80440 = 0;
  DAT_14ca80418 = 0;
  _DAT_14ca80420 = 0;
  _DAT_14ca80444 = 0xffffffff00000080;
  DAT_14ca8044c = 0;
  DAT_14ca80458 = 0;
  DAT_14ca80460 = 0;
  atexit(FUN_1431dc5c6);
  DAT_14ca80488 = 0;
  DAT_14ca80490 = 0;
  DAT_14ca80468 = 0;
  _DAT_14ca80470 = 0;
  _DAT_14ca80494 = 0xffffffff00000080;
  DAT_14ca8049c = 0;
  DAT_14ca804a8 = 0;
  DAT_14ca804b0 = 0;
  atexit(FUN_1431dc5ef);
  _DAT_14ca804d8 = 0;
  _DAT_14ca804e0 = 0;
  DAT_14ca804b8 = 0;
  _DAT_14ca804c0 = 0;
  _DAT_14ca804e4 = 0xffffffff00000080;
  DAT_14ca804ec = 0;
  DAT_14ca804f8 = 0;
  DAT_14ca80500 = 0;
  atexit(FUN_1431dc618);
  DAT_14ca80528 = 0;
  DAT_14ca80530 = 0;
  DAT_14ca80508 = 0;
  _DAT_14ca80510 = 0;
  _DAT_14ca80534 = 0xffffffff00000080;
  DAT_14ca8053c = 0;
  DAT_14ca80548 = 0;
  DAT_14ca80550 = 0;
  atexit(FUN_1431dc647);
  DAT_14ca80578 = 0;
  DAT_14ca80580 = 0;
  DAT_14ca80558 = 0;
  _DAT_14ca80560 = 0;
  _DAT_14ca80584 = 0xffffffff00000080;
  DAT_14ca8058c = 0;
  DAT_14ca80598 = 0;
  DAT_14ca805a0 = 0;
  atexit(FUN_1431dc676);
  DAT_14ca805c8 = 0;
  DAT_14ca805d0 = 0;
  DAT_14ca805a8 = 0;
  _DAT_14ca805b0 = 0;
  _DAT_14ca805d4 = 0xffffffff00000080;
  DAT_14ca805dc = 0;
  DAT_14ca805e8 = 0;
  DAT_14ca805f0 = 0;
  atexit(FUN_1431dc69f);
  DAT_14ca805f8 = 0;
  _DAT_14ca80600 = 0;
  atexit((_func_5014 *)&LAB_1431dc6c8);
  _DAT_14ca80628 = 0;
  _DAT_14ca80630 = 0;
  DAT_14ca80608 = 0;
  _DAT_14ca80610 = 0;
  _DAT_14ca80634 = 0xffffffff00000080;
  DAT_14ca8063c = 0;
  DAT_14ca80648 = 0;
  DAT_14ca80650 = 0;
  atexit(FUN_1431dc6d9);
  DAT_14ca80660 = 0;
  _DAT_14ca80668 = 0;
  atexit((_func_5014 *)&LAB_1431dc708);
  DAT_14ca80678 = 0;
  _DAT_14ca80680 = 0;
  _DAT_14ca80688 = 2;
  atexit(FUN_1431dc719);
  local_50._0_4_ = 0;
  local_68 = 0;
  FUN_14078dbce(&DAT_14ca806a8,L"r.pso.GbxEnableBreadcrumbs",&local_50,
                L"If > 0, Breadcrumbs are used to track PSO profiling.");
  atexit(FUN_1431e1c5d);
  local_68 = 0;
  FUN_14153156c(&DAT_14ca806c8,L"r.gbx.pso.PausePSOEviction",&DAT_14ca806c0,
                L"0: System will evict PSO normally.\n1: Pause PSO eviction (used while in menus).")
  ;
  atexit(FUN_1431e1ca2);
  local_68 = 0;
  FUN_141471170(&DAT_14ca806d8,L"r.gbx.pso.KeepAliveCount",&DAT_14c760d70,
                L"Number of unused PSO to keep alive, avoiding hitches when needed later (<0 : Disabled)"
               );
  atexit(FUN_1431e1ce7);
  local_68 = 0;
  FUN_141471170(&DAT_14ca806e8,L"r.gbx.pso.KeepAliveMultiplier",&DAT_14c760d74,
                L"Multiply the amount of PSO kept alive on system with more RAM");
  atexit(FUN_1431e1d2c);
  local_68 = 0;
  FUN_141471170(&DAT_14ca806f8,L"r.gbx.pso.KeepAliveMultiplierMem",&DAT_14c760d78,
                L"RAM amount (in GB) at which we apply the cache count multiplier");
  atexit(FUN_1431e1d71);
  local_68 = 0;
  FUN_141471170(&DAT_14ca80708,L"r.gbx.pso.KeepAliveReleaseMax",&DAT_14c760d7c,
                L"Maximum number of PSO releases per evict frame (avoids hammering nvidia drivers, <0 : Disabled)"
               );
  atexit(FUN_1431e1db6);
  DAT_14ca80718 = 0;
  _DAT_14ca80720 = 0;
  atexit((_func_5014 *)&LAB_1431e1dfb);
  DAT_14ca80728 = 0;
  _DAT_14ca80730 = 0;
  atexit((_func_5014 *)&LAB_1431e1e0c);
  local_50._0_4_ = 1;
  local_68 = 0x24;
  FUN_14078dbce(&DAT_14ca80738,L"r.AsyncPipelineCompile",&local_50,
                L"0 to Create PSOs at the moment they are requested\n1 to Create Pipeline State Objects asynchronously(default)\n2 to Create Only precompile PSOs asynchronously\n3 to Create Only non-precompile PSOs asynchronously"
               );
  atexit(FUN_1431e1e1d);
  local_68 = 0x20;
  FUN_14153156c(&DAT_14ca80758,L"r.pso.CreateOnRHIThread",&DAT_14ca80750,
                L"0: Run PSO creation on task threads\n1: Run PSO creation on RHI thread.");
  atexit(FUN_1431e1e62);
  local_68 = 0x20;
  FUN_14153156c(&DAT_14ca80768,L"r.pso.EnableAsyncCacheConsolidation",&DAT_14c760d80,
                L"0: Require Render Thread and RHI Thread to synchronize before flushing the PSO cache.1: Flush the PSO cache without synchronizing the Render Thread with the RHI Thread.\n"
               );
  atexit(FUN_1431e1ea7);
  local_50._0_4_ = 0x3c;
  local_68 = 0x20;
  FUN_14078dbce(&DAT_14ca80778,L"r.pso.evictiontime",&local_50,
                L"Time between checks to remove stale objects from the cache. 0 = no eviction (which may eventually OOM...)"
               );
  atexit(FUN_1431e1eec);
  local_50._0_4_ = 0x14;
  local_68 = 0x24;
  FUN_14078dbce(&DAT_14ca80790,L"r.PSO.RuntimeCreationHitchThreshold",&local_50,
                L"Threshold for runtime PSO creation to count as a hitch (in msec) (default 20)");
  atexit(FUN_1431e1f31);
  local_50 = (char *)CONCAT44(local_50._4_4_,0x32);
  local_68 = 0x24;
  FUN_14078dbce(&DAT_14ca807a8,L"r.RayTracing.PSOCacheSize",&local_50,
                L"Number of ray tracing pipelines to keep in the cache (default = 50). Set to 0 to disable eviction.\n"
               );
  atexit(FUN_1431e1f76);
  local_68 = 0;
  FUN_141471170(&DAT_14ca807c0,L"r.PSOPrecaching",&DAT_14c760d84,
                L"0 to Disable PSOs precaching\n1 to Enable PSO precaching\n");
  atexit(FUN_1431e1fbb);
  local_68 = 0;
  FUN_141471170(&DAT_14ca807d8,L"r.PSOPrecaching.WaitForHighPriorityRequestsOnly",&DAT_14ca807d0,
                L"0 to wait for all pending PSO precache requests during loading (default)\n1 to only wait for the high priority and above PSO precache requests during loading\n2 to only wait for the highest priority PSO precache requests during loading"
               );
  atexit(FUN_1431e2000);
  local_68 = 0;
  FUN_14153156c(&DAT_14ca807e8,L"r.PSOPrecaching.PermitPriorityEscalation",&DAT_14c760d88,
                L"Whether to permit requests to increase high pri PSO precaching tasks to highest.\n1: High priority tasks can be escalated to highest if requested. (default)\n0: High priority tasks will remain unchanged."
               );
  atexit(FUN_1431e2045);
  local_50 = (char *)0x0;
  local_48 = 0;
  FUN_1446efa72(&local_50,0,2,0x10);
  local_48 = 2;
  *(undefined ***)local_50 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar2 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar2 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar2;
  *(longlong *)((longlong)local_50 + 0x10) = lVar3;
  *(undefined ***)local_50 = &PTR_FUN_149e062c0;
  *(undefined **)((longlong)local_50 + 0x18) = &DAT_1431e208a;
  local_68 = 0;
  FUN_14152bcb8(&DAT_14ca807f8,L"r.DumpPipelineCache",L"Dump current cache stats.",&local_50);
  if (local_48 != 0) {
    if (local_50 == (char *)0x0) goto LAB_1431ea41d;
    (*(code *)**(undefined8 **)local_50)(local_50,0);
    FUN_1446efa72(&local_50,0,0,0x10);
    local_48 = 0;
  }
  if (local_50 != (char *)0x0) {
    FUN_1400020a8();
  }
LAB_1431ea41d:
  atexit(FUN_1431e208b);
  local_68 = 0x24;
  FUN_141471170(&DAT_14ca80808,L"r.pso.PrecompileThreadPoolSize",&DAT_14ca80818,
                L"The number of threads available for concurrent PSO Precompiling.\n0 to disable threadpool usage when precompiling PSOs. (default)"
               );
  atexit(FUN_1431e20d0);
  local_68 = 0x24;
  FUN_141471170(&DAT_14ca80820,L"r.pso.PrecompileThreadPoolPercentOfHardwareThreads",&DAT_14c760d8c,
                L"If > 0, use this percentage of cores (rounded up) for the PSO precompile thread pool\nUse this as an alternative to r.pso.PrecompileThreadPoolSize\n0 to disable threadpool usage when precompiling PSOs. (default 75%)"
               );
  atexit(FUN_1431e2115);
  local_68 = 0x24;
  FUN_141471170(&DAT_14ca80830,L"r.pso.PrecompileThreadPoolSizeMin",&DAT_14c760d90,
                L"The minimum number of threads available for concurrent PSO Precompiling.\nIgnored unless r.pso.PrecompileThreadPoolPercentOfHardwareThreads is specified\n0 = no minimum (default 2)"
               );
  atexit(FUN_1431e215a);
  local_68 = 0x24;
  FUN_141471170(&DAT_14ca80840,L"r.pso.PrecompileThreadPoolSizeMax",&DAT_14c760d94,
                L"The maximum number of threads available for concurrent PSO Precompiling.\nIgnored unless r.pso.PrecompileThreadPoolPercentOfHardwareThreads is specified\nDefault is no maximum (INT_MAX)"
               );
  atexit(FUN_1431e219f);
  local_68 = 0x20;
  FUN_141471170(&DAT_14ca80850,L"r.pso.PrecompileThreadPoolThreadPriority",&DAT_14c760d98,
                L"Thread priority for the PSO precompile pool");
  atexit(FUN_1431e21e4);
  local_68 = 4;
  FUN_141471170(&DAT_14ca80868,L"r.PSOPrecache.KeepInMemoryUntilUsed",&DAT_14ca80860,
                L"If enabled and if the underlying GPU vendor is NVIDIA, precached PSOs will be kept in memory instead of being deleted immediately after creation, and will only be deleted once they are actually used for rendering.\nThis can speed up the re-creation of precached PSOs for NVIDIA drivers and avoid small hitches, at the cost of memory.\nIt\'s recommended to set r.PSOPrecache.KeepInMemoryGraphicsMaxNum and r.PSOPrecache.KeepInMemoryComputeMaxNum to a non-zero value to ensure the number of in-memory PSOs is bounded."
               );
  atexit(FUN_1431e2229);
  local_68 = 4;
  FUN_141471170(&DAT_14ca80878,L"r.PSOPrecache.KeepInMemoryGraphicsMaxNum",&DAT_14c760d9c,
                L"If r.PSOPrecache.KeepInMemoryUntilUsed is enabled, this value will control the maximum number of precached graphics PSOs that are kept in memory at a time.\nIf set to 0, no limit will be applied (not recommended outside of testing, as it can cause unbounded memory usage)."
               );
  atexit(FUN_1431e226e);
  local_68 = 4;
  FUN_141471170(&DAT_14ca80888,L"r.PSOPrecache.KeepInMemoryComputeMaxNum",&DAT_14c760da0,
                L"If r.PSOPrecache.KeepInMemoryUntilUsed is enabled, this value will control the maximum number of precached compute PSOs that are kept in memory at a time.\nIf set to 0, no limit will be applied (not recommended outside of testing, as it can cause unbounded memory usage)."
               );
  atexit(FUN_1431e22b3);
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14ca80898);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14ca80898,4000);
  DAT_14ca808c0 = 0;
  atexit((_func_5014 *)&LAB_1431e22f8);
  FUN_14631ad0c();
  atexit((_func_5014 *)&LAB_1431e23dd);
  FUN_14631af06();
  atexit((_func_5014 *)&LAB_1431e23e2);
  FUN_14631b100();
  atexit((_func_5014 *)&LAB_1431e23e7);
  DAT_14ca811c8 = 0;
  atexit(FUN_1431e23ec);
  DAT_14ca811d0 = 0;
  atexit(FUN_1431e2418);
  local_68 = 0;
  local_60 = 0x200;
  FUN_1412c7f16(&DAT_14ca811d8,L"TaskGraph.TaskPriorities.CompilePipelineStateTask",
                L"Task and thread priority for FCompilePipelineStateTask.",0x400);
  atexit(FUN_1431e2444);
  FUN_147405142();
  atexit((_func_5014 *)&LAB_1431e24ae);
  DAT_14ca81338 = 0;
  DAT_14ca81340 = 0;
  DAT_14ca81318 = 0;
  _DAT_14ca81320 = 0;
  _DAT_14ca81344 = 0xffffffff00000080;
  DAT_14ca8134c = 0;
  DAT_14ca81358 = 0;
  DAT_14ca81360 = 0;
  atexit(FUN_1431e5d61);
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14ca81368);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14ca81368,4000);
  atexit((_func_5014 *)&LAB_1431e5d8a);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431ea760 FUN_1431ea760 body=69 status=ok
// SIG undefined FUN_1431ea760(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431ea760(void)

{
  _DAT_14ca839f0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431ea7a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca839f8,1);
  return;
}



// FUNCTION 1431ea7a5 FUN_1431ea7a5 body=69 status=ok
// SIG undefined FUN_1431ea7a5(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431ea7a5(void)

{
  _DAT_14ca83a08 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431ea7e7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca83a10,1);
  return;
}



// FUNCTION 1431ea7ea FUN_1431ea7ea body=69 status=ok
// SIG undefined FUN_1431ea7ea(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431ea7ea(void)

{
  _DAT_14ca83a20 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431ea82c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca83a28,1);
  return;
}



// FUNCTION 1431ea82f FUN_1431ea82f body=130 status=ok
// SIG undefined FUN_1431ea82f(void)

void FUN_1431ea82f(void)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  lVar4 = DAT_14ca84b20;
  if (DAT_14ca84b20 != 0) {
    LOCK();
    puVar1 = (uint *)(DAT_14ca84b20 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar4 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(lVar4 + 0xd);
        plVar5 = (longlong *)FUN_14001cc68(0x10,8);
        plVar5[1] = lVar4;
        plVar7 = DAT_14ca843c0;
        plVar6 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar5 = (longlong)plVar7;
            LOCK();
            bVar8 = plVar7 != DAT_14ca843c0;
            plVar6 = plVar5;
            if (bVar8) {
              plVar7 = DAT_14ca843c0;
              plVar6 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar6;
            UNLOCK();
          } while (bVar8);
        }
        else {
          do {
            *plVar5 = (longlong)plVar6;
            LOCK();
            bVar8 = plVar6 != DAT_14ca843c8;
            plVar7 = plVar5;
            if (bVar8) {
              plVar6 = DAT_14ca843c8;
              plVar7 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar7;
            UNLOCK();
          } while (bVar8);
        }
      }
    }
  }
  return;
}



// FUNCTION 1431ea8b1 FUN_1431ea8b1 body=69 status=ok
// SIG undefined FUN_1431ea8b1(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431ea8b1(void)

{
  _DAT_14ca83ac0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431ea8f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca83ac8,1);
  return;
}



// FUNCTION 1431ea8f6 FUN_1431ea8f6 body=69 status=ok
// SIG undefined FUN_1431ea8f6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431ea8f6(void)

{
  _DAT_14ca83ad8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431ea938. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca83ae0,1);
  return;
}



// FUNCTION 1431ea93b FUN_1431ea93b body=69 status=ok
// SIG undefined FUN_1431ea93b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431ea93b(void)

{
  _DAT_14ca83af0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431ea97d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca83af8,1);
  return;
}



// FUNCTION 1431ea980 FUN_1431ea980 body=69 status=ok
// SIG undefined FUN_1431ea980(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431ea980(void)

{
  _DAT_14ca83b08 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431ea9c2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca83b10,1);
  return;
}



// FUNCTION 1431ea9c5 FUN_1431ea9c5 body=69 status=ok
// SIG undefined FUN_1431ea9c5(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431ea9c5(void)

{
  _DAT_14ca83b20 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431eaa07. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca83b28,1);
  return;
}



// FUNCTION 1431eaa1b FUN_1431eaa1b body=69 status=ok
// SIG undefined FUN_1431eaa1b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431eaa1b(void)

{
  _DAT_14ca83b48 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431eaa5d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca83b50,1);
  return;
}



// FUNCTION 1431eaa71 FUN_1431eaa71 body=69 status=ok
// SIG undefined FUN_1431eaa71(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431eaa71(void)

{
  _DAT_14ca83b68 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431eaab3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca83b70,1);
  return;
}



// FUNCTION 1431eaab6 FUN_1431eaab6 body=95 status=ok
// SIG undefined FUN_1431eaab6(void)

void FUN_1431eaab6(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  if (DAT_14c760da4 != 0) {
    lVar2 = 0x14;
    uVar3 = 0;
    do {
      piVar1 = (int *)(param_1 + -0x14 + lVar2);
      *piVar1 = *piVar1 + *(int *)(param_2 + -0x14 + lVar2);
      piVar1 = (int *)(param_1 + -0x10 + lVar2);
      *piVar1 = *piVar1 + *(int *)(param_2 + -0x10 + lVar2);
      piVar1 = (int *)(param_1 + -0xc + lVar2);
      *piVar1 = *piVar1 + *(int *)(param_2 + -0xc + lVar2);
      piVar1 = (int *)(param_1 + -8 + lVar2);
      *piVar1 = *piVar1 + *(int *)(param_2 + -8 + lVar2);
      piVar1 = (int *)(param_1 + -4 + lVar2);
      *piVar1 = *piVar1 + *(int *)(param_2 + -4 + lVar2);
      *(int *)(param_1 + lVar2) = *(int *)(param_1 + lVar2) + *(int *)(param_2 + lVar2);
      uVar3 = uVar3 + 1;
      lVar2 = lVar2 + 0x18;
    } while (uVar3 < DAT_14c760da4);
  }
  return;
}



// FUNCTION 1431eab15 FUN_1431eab15 body=14 status=ok
// SIG undefined FUN_1431eab15(void)

bool FUN_1431eab15(void)

{
  return DAT_14ca84df4 == 0x8086;
}



// FUNCTION 1431eab23 FUN_1431eab23 body=7 status=ok
// SIG undefined FUN_1431eab23(void)

undefined1 FUN_1431eab23(void)

{
  return DAT_14ca84e15;
}



// FUNCTION 1431eab2a FUN_1431eab2a body=644 status=ok
// SIG undefined FUN_1431eab2a(void)

longlong FUN_1431eab2a(longlong param_1,uint param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  byte bVar10;
  byte bVar11;
  longlong lVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  ulonglong uVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 in_XMM3 [16];
  undefined1 auVar20 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar21 [16];
  uint uVar22;
  uint uVar24;
  undefined1 auVar23 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  
  uVar17 = 0;
  if (param_2 <= param_3) {
    uVar8 = (ulonglong)((uint)*(byte *)(param_1 + 0x33) * 0x30);
    iVar1 = *(int *)(&DAT_14c873424 + uVar8);
    iVar2 = *(int *)((longlong)&DAT_14c87341c + uVar8);
    iVar3 = *(int *)((longlong)&DAT_14c873420 + uVar8);
    uVar5 = param_3 + 1;
    if (param_3 + 1 <= param_2 + 1) {
      uVar5 = param_2 + 1;
    }
    uVar16 = (uVar5 - param_2) - 1;
    auVar18._4_4_ = uVar16;
    auVar18._0_4_ = uVar16;
    auVar18._8_8_ = 0;
    auVar19._4_4_ = *(undefined4 *)((longlong)&DAT_14c873428 + uVar8);
    auVar19._0_4_ = *(undefined4 *)((longlong)&DAT_14c873428 + uVar8);
    auVar19._8_8_ = 0;
    auVar20 = pmovsxbd(in_XMM3,0x100);
    auVar21 = pmovsxbd(in_XMM4,0x1010101);
    auVar27 = (undefined1  [16])0x0;
    do {
      auVar25 = auVar27;
      bVar10 = (char)param_2 + (char)uVar17;
      bVar11 = (char)param_2 + (char)uVar17 + 1;
      iVar15 = (int)uVar17;
      auVar29._4_4_ = iVar15;
      auVar29._0_4_ = iVar15;
      auVar29._8_8_ = 0;
      auVar26 = auVar29 | auVar20;
      uVar22 = auVar26._0_4_;
      uVar24 = auVar26._4_4_;
      iVar7 = auVar26._8_4_;
      iVar14 = auVar26._12_4_;
      uVar4 = (uint)(*(ushort *)(param_1 + 0x2c) >> (bVar10 & 0x1f));
      auVar23._0_4_ = -(uint)(((uVar16 < uVar22) * uVar16 | (uVar16 >= uVar22) * uVar22) == uVar22);
      auVar23._4_4_ = -(uint)(((uVar16 < uVar24) * uVar16 | (uVar16 >= uVar24) * uVar24) == uVar24);
      auVar23._8_4_ = -(uint)((uint)(iVar7 == 0) * iVar7 == iVar7);
      auVar23._12_4_ = -(uint)((uint)(iVar14 == 0) * iVar14 == iVar14);
      uVar22 = auVar21._0_4_;
      auVar28._0_4_ = (uVar4 < uVar22) * uVar22 | (uVar4 >= uVar22) * uVar4;
      uVar4 = auVar21._4_4_;
      uVar24 = (uint)(*(ushort *)(param_1 + 0x2c) >> (bVar11 & 0x1f));
      auVar28._4_4_ = (uVar24 < uVar4) * uVar4 | (uVar24 >= uVar4) * uVar24;
      iVar7 = auVar21._8_4_;
      auVar28._8_4_ = (uint)(iVar7 != 0) * iVar7;
      iVar14 = auVar21._12_4_;
      auVar28._12_4_ = (uint)(iVar14 != 0) * iVar14;
      if ((auVar23._0_4_ & 1) != 0) {
        auVar26 = ZEXT416((uint)((int)(auVar28._0_4_ + iVar1 + -1) / iVar1));
      }
      if ((auVar23._4_4_ & 1) != 0) {
        auVar26._0_8_ =
             auVar26._0_8_ & 0xffffffff |
             (longlong)(int)(auVar28._4_4_ + iVar1 + -1) / (longlong)iVar1 << 0x20;
      }
      iVar6 = *(int *)(param_1 + 0x28) >> (bVar10 & 0x1f);
      iVar13 = *(int *)(param_1 + 0x28) >> (bVar11 & 0x1f);
      auVar30._0_4_ = (iVar6 < (int)uVar22) * uVar22 | (uint)(iVar6 >= (int)uVar22) * iVar6;
      auVar30._4_4_ = (iVar13 < (int)uVar4) * uVar4 | (uint)(iVar13 >= (int)uVar4) * iVar13;
      auVar30._8_4_ = (uint)(0 < iVar7) * iVar7;
      auVar30._12_4_ = (uint)(0 < iVar14) * iVar14;
      if ((auVar23._0_4_ & 1) != 0) {
        auVar28 = ZEXT416((uint)((int)(auVar30._0_4_ + iVar3 + -1) / iVar3));
      }
      if ((auVar23._4_4_ & 1) != 0) {
        auVar28._0_8_ =
             auVar28._0_8_ & 0xffffffff |
             (longlong)(int)(auVar30._4_4_ + iVar3 + -1) / (longlong)iVar3 << 0x20;
      }
      iVar7 = *(int *)(param_1 + 0x24) >> (bVar10 & 0x1f);
      iVar14 = *(int *)(param_1 + 0x24) >> (bVar11 & 0x1f);
      if ((auVar23._0_4_ & 1) != 0) {
        auVar30 = ZEXT416((uint)((int)(((iVar7 < (int)uVar22) * uVar22 |
                                       (uint)(iVar7 >= (int)uVar22) * iVar7) + iVar2 + -1) / iVar2))
        ;
      }
      if ((auVar23._4_4_ & 1) != 0) {
        auVar30._0_8_ =
             auVar30._0_8_ & 0xffffffff |
             (longlong)
             (int)(((iVar14 < (int)uVar4) * uVar4 | (uint)(iVar14 >= (int)uVar4) * iVar14) +
                  iVar2 + -1) / (longlong)iVar2 << 0x20;
      }
      auVar29 = pmulld(auVar28,auVar30);
      auVar27 = pmulld(auVar26,auVar19);
      auVar27 = pmulld(auVar27,auVar29);
      auVar29 = pmovzxdq(auVar27,auVar27);
      auVar27._0_8_ = auVar29._0_8_ + auVar25._0_8_;
      auVar27._8_8_ = auVar29._8_8_ + auVar25._8_8_;
      uVar17 = (ulonglong)(iVar15 + 2U);
    } while (((uVar5 - param_2) + 1 & 0xfffffffe) != iVar15 + 2U);
    auVar18 = pmovsxdq(auVar18,auVar23);
    auVar27 = blendvpd(auVar25,auVar27,auVar18);
    uVar17 = auVar27._8_8_ + auVar27._0_8_;
  }
  lVar12 = (ulonglong)*(byte *)(param_1 + 0x31) * *(ushort *)(param_1 + 0x2e) * uVar17;
  lVar9 = lVar12 * 6;
  if (1 < (byte)(*(char *)(param_1 + 0x32) - 3U)) {
    lVar9 = lVar12;
  }
  return lVar9;
}



// FUNCTION 1431eadae FUN_1431eadae body=91 status=ok
// SIG undefined FUN_1431eadae(void)

void FUN_1431eadae(void)

{
  if (DAT_14ca83b88 != 0) {
    if (DAT_14ca83b80 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*DAT_14ca83b80)(DAT_14ca83b80,0);
    FUN_1446efa72(&DAT_14ca83b80,0,0,0x10);
    DAT_14ca83b88 = 0;
  }
  if (DAT_14ca83b80 == (undefined8 *)0x0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1431eae0a FUN_1431eae0a body=18 status=ok
// SIG undefined FUN_1431eae0a(void)

undefined8 * FUN_1431eae0a(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  return param_1;
}



// FUNCTION 1431eae1c FUN_1431eae1c body=69 status=ok
// SIG undefined FUN_1431eae1c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431eae1c(void)

{
  _DAT_14ca83b90 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431eae5e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca83b98,1);
  return;
}



// FUNCTION 1431eae61 FUN_1431eae61 body=69 status=ok
// SIG undefined FUN_1431eae61(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431eae61(void)

{
  _DAT_14ca83bc8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431eaea3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca83bd0,1);
  return;
}



// FUNCTION 1431eaea6 FUN_1431eaea6 body=69 status=ok
// SIG undefined FUN_1431eaea6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431eaea6(void)

{
  _DAT_14ca83bf0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431eaee8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca83bf8,1);
  return;
}



// FUNCTION 1431eaeeb FUN_1431eaeeb body=69 status=ok
// SIG undefined FUN_1431eaeeb(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431eaeeb(void)

{
  _DAT_14ca83c00 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431eaf2d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca83c08,1);
  return;
}



// FUNCTION 1431eaf30 FUN_1431eaf30 body=69 status=ok
// SIG undefined FUN_1431eaf30(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431eaf30(void)

{
  _DAT_14ca84d18 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431eaf72. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca84d20,1);
  return;
}



// FUNCTION 1431eaf75 FUN_1431eaf75 body=69 status=ok
// SIG undefined FUN_1431eaf75(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431eaf75(void)

{
  _DAT_14ca83c18 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431eafb7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca83c20,1);
  return;
}



// FUNCTION 1431eafba FUN_1431eafba body=69 status=ok
// SIG undefined FUN_1431eafba(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431eafba(void)

{
  _DAT_14ca83c30 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431eaffc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca83c38,1);
  return;
}



// FUNCTION 1431eafff FUN_1431eafff body=69 status=ok
// SIG undefined FUN_1431eafff(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431eafff(void)

{
  _DAT_14ca83c48 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431eb041. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca83c50,1);
  return;
}



// FUNCTION 1431eb044 FUN_1431eb044 body=69 status=ok
// SIG undefined FUN_1431eb044(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431eb044(void)

{
  _DAT_14ca83c60 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431eb086. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca83c68,1);
  return;
}



// FUNCTION 1431eb089 FUN_1431eb089 body=69 status=ok
// SIG undefined FUN_1431eb089(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431eb089(void)

{
  _DAT_14ca83c78 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431eb0cb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca83c80,1);
  return;
}



// FUNCTION 1431eb0ce FUN_1431eb0ce body=106 status=ok
// SIG undefined FUN_1431eb0ce(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431eb0ce(void)

{
  _DAT_14ca84d68 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca84d70,1);
  if (DAT_14ca84d58 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14ca84d48 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1431eb149 FUN_1431eb149 body=428 status=ok
// SIG undefined FUN_1431eb149(void)

void FUN_1431eb149(void)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined1 auStack_38 [39];
  undefined1 local_11;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  puVar3 = &DAT_14ca85458;
  if (DAT_14ca85478 != (undefined *)0x0) {
    puVar3 = DAT_14ca85478;
  }
  FUN_144717c65(puVar3,DAT_14ca85480);
  if (DAT_14ca85478 != (undefined *)0x0) {
    FUN_1400020a8();
  }
  puVar2 = DAT_14ca85450;
  if (DAT_14ca85450 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(DAT_14ca85450 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  puVar2 = DAT_14ca85448;
  if (DAT_14ca85448 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(DAT_14ca85448 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  puVar2 = DAT_14ca85440;
  if (DAT_14ca85440 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(DAT_14ca85440 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  puVar2 = DAT_14ca85428;
  if (DAT_14ca85434 == '\x01') {
    DAT_14ca85434 = '\0';
  }
  if (DAT_14ca85428 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(DAT_14ca85428 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  puVar2 = DAT_14ca85410;
  if (DAT_14ca8541c == '\x01') {
    DAT_14ca8541c = '\0';
  }
  if (DAT_14ca85410 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(DAT_14ca85410 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  LOCK();
  *(int *)(DAT_14ca85178 + 8) = *(int *)(DAT_14ca85178 + 8) + 1;
  UNLOCK();
  local_11 = 1;
  FUN_1447439e4();
  FUN_1431eb604(&DAT_14ca85100);
  puVar3 = &DAT_14ca850c8;
  if (DAT_14ca850e8 != (undefined *)0x0) {
    puVar3 = DAT_14ca850e8;
  }
  FUN_144717c65(puVar3,(undefined4)DAT_14ca850f0);
  if (DAT_14ca850e8 == (undefined *)0x0) {
    if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
}



// FUNCTION 1431eb31e FUN_1431eb31e body=239 status=ok
// SIG undefined FUN_1431eb31e(void)

undefined8 FUN_1431eb31e(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined4 *puVar1;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  code *local_88 [2];
  undefined8 local_78;
  undefined **local_68;
  undefined8 local_60;
  longlong local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 *local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_28 = *(undefined4 **)(param_3 + 0x60);
  if (local_28 == (undefined4 *)0x0) {
    local_48 = *(undefined4 *)(param_3 + 0x40);
    uStack_44 = *(undefined4 *)(param_3 + 0x44);
    uStack_40 = *(undefined4 *)(param_3 + 0x48);
    uStack_3c = *(undefined4 *)(param_3 + 0x4c);
    local_38 = *(undefined4 *)(param_3 + 0x50);
    uStack_34 = *(undefined4 *)(param_3 + 0x54);
    uStack_30 = *(undefined4 *)(param_3 + 0x58);
    uStack_2c = *(undefined4 *)(param_3 + 0x5c);
  }
  *(undefined8 *)(param_3 + 0x60) = 0;
  local_20 = *(undefined4 *)(param_3 + 0x68);
  local_1c = *(undefined4 *)(param_3 + 0x6c);
  *(undefined8 *)(param_3 + 0x68) = 0x400000000;
  local_98 = *(undefined4 *)(param_3 + 0x80);
  local_78 = 0;
  local_68 = &PTR_LAB_14a380d60;
  local_88[0] = FUN_1431ee70a;
  local_60 = param_1;
  local_58 = param_3;
  FUN_1429b27b2(param_2,local_88,param_3,&local_48);
  puVar1 = local_28;
  if (local_28 == (undefined4 *)0x0) {
    puVar1 = &local_48;
  }
  FUN_144717c65(puVar1,local_20);
  if (local_28 != (undefined4 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431eb40e FUN_1431eb40e body=96 status=ok
// SIG undefined FUN_1431eb40e(void)

void FUN_1431eb40e(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0x3b8);
  *(uint *)(param_1 + 0x3b8) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x3bc) < iVar1 + 1U) {
    FUN_14476a5c8(param_1 + 0x390,iVar1);
  }
  lVar2 = param_1 + 0x390;
  if (*(longlong *)(param_1 + 0x3b0) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x3b0);
  }
  *(undefined8 *)(lVar2 + (longlong)iVar1 * 8) = *param_2;
  *param_2 = 0;
  return;
}



// FUNCTION 1431eb46e FUN_1431eb46e body=168 status=ok
// SIG undefined FUN_1431eb46e(void)

void FUN_1431eb46e(longlong *param_1,char param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  puVar4 = DAT_14ca843c8;
  if (param_2 != '\0') {
    LOCK();
    DAT_14ca843c8 = (undefined8 *)0x0;
    UNLOCK();
    while (puVar4 != (undefined8 *)0x0) {
      puVar2 = (undefined8 *)*puVar4;
      uVar3 = puVar4[1];
      iVar1 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
        FUN_144ada3ec(param_1,iVar1);
      }
      *(undefined8 *)(*param_1 + (longlong)iVar1 * 8) = uVar3;
      FUN_1400020a8(puVar4);
      puVar4 = puVar2;
    }
  }
  puVar4 = DAT_14ca843c0;
  LOCK();
  DAT_14ca843c0 = (undefined8 *)0x0;
  UNLOCK();
  while (puVar4 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*puVar4;
    uVar3 = puVar4[1];
    iVar1 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
      FUN_144ada3ec(param_1,iVar1);
    }
    *(undefined8 *)(*param_1 + (longlong)iVar1 * 8) = uVar3;
    FUN_1400020a8(puVar4);
    puVar4 = puVar2;
  }
  return;
}



// FUNCTION 1431eb516 FUN_1431eb516 body=238 status=ok
// SIG undefined FUN_1431eb516(void)

undefined8 * FUN_1431eb516(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined1 *)((longlong)param_1 + 0x25) = *(undefined1 *)((longlong)param_2 + 0x25);
  *(undefined4 *)(param_2 + 4) = 0;
  *(undefined1 *)((longlong)param_2 + 0x25) = 0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  puVar2 = param_2 + 5;
  puVar3 = param_1 + 5;
  for (lVar1 = 10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  param_1[0xf] = param_2[0xf];
  param_2[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x11] = param_2[0x11];
  param_1[0x10] = param_2[0x10];
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x12] = param_2[0x12];
  param_2[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = *(undefined4 *)(param_2 + 0x13);
  *(undefined4 *)((longlong)param_1 + 0x9c) = *(undefined4 *)((longlong)param_2 + 0x9c);
  param_2[0x13] = 0;
  memcpy(param_1 + 0x14,param_2 + 0x14,0x268);
  return param_1;
}



// FUNCTION 1431eb604 FUN_1431eb604 body=163 status=ok
// SIG undefined FUN_1431eb604(void)

void FUN_1431eb604(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x80) != 0) {
    *(undefined8 *)(param_1 + 0x80) = 0;
  }
  for (puVar2 = *(undefined8 **)(param_1 + 0x88); puVar2 != (undefined8 *)0x0;
      puVar2 = (undefined8 *)*puVar2) {
    FUN_14004673c(puVar2 + 0x11,0);
    FUN_14004673c(puVar2 + 0xc);
    FUN_14004673c(puVar2 + 7);
    FUN_14004673c(puVar2 + 2);
  }
  *(undefined8 *)(param_1 + 0x88) = 0;
  puVar2 = *(undefined8 **)(param_1 + 0x78);
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  FUN_14004673c(param_1,0);
  return;
}



// FUNCTION 1431eb6a8 FUN_1431eb6a8 body=494 status=ok
// SIG undefined FUN_1431eb6a8(void)

void FUN_1431eb6a8(longlong *param_1)

{
  undefined4 uVar1;
  DWORD DVar2;
  char cVar3;
  DWORD DVar4;
  DWORD DVar5;
  undefined8 *puVar6;
  bool bVar7;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  DVar5 = DAT_14c758730;
  if (DAT_14c758730 == 0xffffffff) {
    DVar5 = TlsAlloc();
    DVar4 = 0xffffffff;
    LOCK();
    bVar7 = DAT_14c758730 != 0xffffffff;
    DVar2 = DVar5;
    if (bVar7) {
      DVar4 = DAT_14c758730;
      DVar2 = DAT_14c758730;
    }
    DAT_14c758730 = DVar2;
    UNLOCK();
    if (bVar7) {
      TlsFree(DVar5);
      DVar5 = DVar4;
    }
  }
  puVar6 = TlsGetValue(DVar5);
  if (puVar6 == (undefined8 *)0x0) {
    puVar6 = (undefined8 *)FUN_14001cc68(0x20,0x10);
    DVar4 = GetCurrentThreadId();
    *(DWORD *)(puVar6 + 1) = DVar4;
    *puVar6 = &PTR_FUN_149e06328;
    puVar6[2] = 0;
    *(undefined4 *)(puVar6 + 3) = 1;
    *(undefined1 *)((longlong)puVar6 + 0x1c) = 0;
    FUN_140fddf04(puVar6);
    TlsSetValue(DVar5,puVar6);
  }
  *(int *)(puVar6 + 3) = *(int *)(puVar6 + 3) + -1;
  if ((*param_1 != 0) && ((*(byte *)(*param_1 + 0xa0) & 1) == 0)) {
    local_30 = 0;
    local_28 = 0;
    FUN_14007658c(&DAT_14ca850c8,&local_30,1);
    uVar1 = DAT_14c7585d4;
    cVar3 = (**(code **)(*DAT_14c82b500 + 0x38))(DAT_14c82b500,DAT_14c7585d4);
    if (cVar3 != '\0') {
      FUN_140033559(".\\Runtime/RHI/Private/RHICommandList.cpp",0x63f,
                    L"Deadlock in WaitOnRHIThreadFence.");
    }
    FUN_14009fd82(DAT_14c82b500,param_1,uVar1);
  }
  DVar5 = DAT_14c758730;
  if (DAT_14c758730 == 0xffffffff) {
    DVar5 = TlsAlloc();
    DVar4 = 0xffffffff;
    LOCK();
    bVar7 = DAT_14c758730 != 0xffffffff;
    DVar2 = DVar5;
    if (bVar7) {
      DVar4 = DAT_14c758730;
      DVar2 = DAT_14c758730;
    }
    DAT_14c758730 = DVar2;
    UNLOCK();
    if (bVar7) {
      TlsFree(DVar5);
      DVar5 = DVar4;
    }
  }
  puVar6 = TlsGetValue(DVar5);
  if (puVar6 == (undefined8 *)0x0) {
    puVar6 = (undefined8 *)FUN_14001cc68(0x20,0x10);
    DVar4 = GetCurrentThreadId();
    *(DWORD *)(puVar6 + 1) = DVar4;
    *puVar6 = &PTR_FUN_149e06328;
    puVar6[2] = 0;
    *(undefined4 *)(puVar6 + 3) = 1;
    *(undefined1 *)((longlong)puVar6 + 0x1c) = 0;
    FUN_140fddf04(puVar6);
    TlsSetValue(DVar5,puVar6);
  }
  *(int *)(puVar6 + 3) = *(int *)(puVar6 + 3) + 1;
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1431eb898 FUN_1431eb898 body=143 status=ok
// SIG undefined FUN_1431eb898(void)

void FUN_1431eb898(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_2 + 0x28);
  uVar5 = (ulonglong)uVar1;
  if (uVar1 != 0) {
    if (0 < (int)uVar1) {
      lVar3 = 0;
      do {
        lVar4 = *(longlong *)(param_2 + 0x20);
        if (*(longlong *)(param_2 + 0x20) == 0) {
          lVar4 = param_2;
        }
        if ((*(byte *)(*(longlong *)(lVar4 + lVar3 * 8) + 0xa0) & 1) == 0) {
          (**(code **)(*DAT_14c82b500 + 0x60))(DAT_14c82b500,param_2,DAT_14c7585d4);
          uVar5 = (ulonglong)*(uint *)(param_2 + 0x28);
          break;
        }
        lVar3 = lVar3 + 1;
        uVar5 = (ulonglong)*(int *)(param_2 + 0x28);
      } while (lVar3 < (longlong)uVar5);
    }
    iVar2 = *(int *)(param_2 + 0x2c);
    lVar3 = *(longlong *)(param_2 + 0x20);
    if (*(longlong *)(param_2 + 0x20) == 0) {
      lVar3 = param_2;
    }
    FUN_144717c65(lVar3,uVar5);
    *(undefined4 *)(param_2 + 0x28) = 0;
    if ((iVar2 < 0) && (*(int *)(param_2 + 0x2c) != 0)) {
      FUN_14473dbc4(param_2,0);
      return;
    }
  }
  return;
}



// FUNCTION 1431eb928 FUN_1431eb928 body=125 status=ok
// SIG undefined FUN_1431eb928(void)

ulonglong FUN_1431eb928(void)

{
  bool bVar1;
  int iVar2;
  undefined8 unaff_RSI;
  ulonglong uVar3;
  
  if (((DAT_14ca84aa8 < 1) && (DAT_14ca85450 != 0)) && ((*(byte *)(DAT_14ca85450 + 0xa0) & 1) == 0))
  {
    LOCK();
    iVar2 = DAT_14ca84aa8 + 1;
    UNLOCK();
    uVar3 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
    bVar1 = DAT_14ca84aa8 < 1;
    DAT_14ca84aa8 = iVar2;
    if (bVar1) {
      iVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_14ca83c98);
      while (iVar2 == 0) {
        SwitchToThread();
        iVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_14ca83c98);
      }
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 1431eb9a6 FUN_1431eb9a6 body=203 status=ok
// SIG undefined FUN_1431eb9a6(void)

void FUN_1431eb9a6(ulonglong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar1 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar2 = puVar1 + 4;
  if ((undefined8 *)param_1[1] < puVar2) {
    FUN_140023dd8(param_1,0x28);
    puVar1 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar2 = puVar1 + 4;
  }
  *param_1 = (ulonglong)puVar2;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar1;
  param_1[6] = (ulonglong)(puVar1 + 1);
  puVar1[1] = 0;
  *puVar1 = &PTR_LAB_14a380c10;
  puVar1[2] = param_2;
  puVar1[3] = param_3;
  if (DAT_14c842750 == '\0') {
    local_30 = 0;
    local_28 = 0;
    FUN_14007658c(&DAT_14ca850c8,&local_30,5);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431eba72 FUN_1431eba72 body=261 status=ok
// SIG undefined FUN_1431eba72(void)

void FUN_1431eba72(ulonglong *param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  local_30 = 0;
  FUN_14007658c(&DAT_14ca850c8,&local_38,1);
  puVar1 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar2 = puVar1 + 4;
  if ((undefined8 *)param_1[1] < puVar2) {
    FUN_140023dd8(param_1,0x28);
    puVar1 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar2 = puVar1 + 4;
  }
  *param_1 = (ulonglong)puVar2;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar1;
  param_1[6] = (ulonglong)(puVar1 + 1);
  puVar1[1] = 0;
  *puVar1 = &PTR_LAB_14a380c18;
  puVar1[2] = param_2;
  *(undefined1 *)(puVar1 + 3) = param_3;
  *(undefined1 *)((longlong)puVar1 + 0x19) = param_4;
  local_38 = 0;
  local_30 = 0;
  FUN_14007658c(&DAT_14ca850c8,&local_38,1);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x0001431ebb6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_14ca83900 + 0x310))(DAT_14ca83900,param_2,*(code **)(*DAT_14ca83900 + 0x310));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
}



// FUNCTION 1431ebb78 FUN_1431ebb78 body=1251 status=ok
// SIG undefined FUN_1431ebb78(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431ebb78(ulonglong *param_1,longlong *param_2,byte param_3,byte param_4,undefined4 param_5
                  )

{
  uint uVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  byte bVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  uint *puVar10;
  ulonglong uVar11;
  uint *puVar12;
  longlong *plVar13;
  uint uVar14;
  byte *pbVar15;
  undefined8 *puVar16;
  ulonglong uVar17;
  uint uVar18;
  longlong lVar19;
  longlong lVar20;
  byte bVar21;
  undefined1 auStack_a8 [44];
  uint local_7c;
  longlong *local_78;
  byte local_70;
  char local_6f;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar18 = (uint)param_3;
  if (DAT_14ca84e23 == '\0') {
    uVar18 = 1;
  }
  local_7c = (uint)param_4;
  if (DAT_14ca84e23 == '\0') {
    local_7c = 1;
  }
  local_68 = (undefined4)*param_2;
  uStack_64 = *(undefined4 *)((longlong)param_2 + 4);
  uStack_60 = (undefined4)param_2[1];
  uStack_5c = *(undefined4 *)((longlong)param_2 + 0xc);
  bVar4 = (byte)uVar18;
  local_6f = (char)local_7c;
  local_6c = param_5;
  local_58 = 0;
  uVar5 = DAT_14ca84ab8 + (ulonglong)(DAT_14ca84ab8 == 0);
  local_50 = 0;
  lVar19 = (-uVar5 & uVar5) + _DAT_14ca84ab0;
  uVar17 = 4;
  if (4 < (uint)uVar5) {
    uVar17 = uVar5 & 0xffffffff;
  }
  puVar8 = (undefined8 *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xde8);
  puVar10 = (uint *)*puVar8;
  local_78 = param_2;
  local_70 = bVar4;
  if (puVar10 != (uint *)0x0) goto LAB_1431ebc4d;
  while( true ) {
    FUN_144769a66(puVar8);
    puVar10 = (uint *)*puVar8;
LAB_1431ebc4d:
    uVar5 = -uVar17;
    pbVar15 = (byte *)(*(longlong *)(puVar10 + 0x10) + (uVar17 - 1) & uVar5);
    puVar12 = (uint *)(pbVar15 + lVar19);
    if (puVar12 <= puVar10 + 0x4000) break;
    uVar11 = uVar17 + 0x58 + lVar19;
    if (0x10000 < uVar11) {
      puVar10 = (uint *)FUN_14472e5b2(uVar11,8);
      *puVar10 = 0xffffffff;
      puVar10[0x12] = 0;
      pbVar15 = (byte *)((longlong)puVar10 + uVar17 + 0x57 & uVar5);
      uVar17 = uVar17 + lVar19;
      *(ulonglong *)(puVar10 + 0x10) = (longlong)puVar10 + uVar17 + 0x58;
      *puVar10 = 1;
      goto LAB_1431ebcf4;
    }
    uVar14 = puVar10[0x12];
    while( true ) {
      *(uint **)(puVar10 + 0x10) = puVar10 + 0x4000;
      LOCK();
      uVar1 = *puVar10;
      *puVar10 = *puVar10 + uVar14 + 1;
      UNLOCK();
      if ((uVar1 ^ uVar14) != 0xffffffff) break;
      puVar10 = (uint *)*puVar8;
      *puVar10 = 0xffffffff;
      *(uint **)(puVar10 + 0x10) = puVar10 + 0x16;
      puVar10[0x12] = 0;
      *puVar8 = puVar10;
      pbVar15 = (byte *)((longlong)puVar10 + uVar17 + 0x57 & uVar5);
      puVar12 = (uint *)(pbVar15 + lVar19);
      uVar14 = 0;
      if (puVar12 <= puVar10 + 0x4000) {
        uVar14 = 1;
        goto LAB_1431ebce9;
      }
    }
  }
  uVar14 = puVar10[0x12] + 1;
LAB_1431ebce9:
  *(uint **)(puVar10 + 0x10) = puVar12 + 2;
  puVar10[0x12] = uVar14;
LAB_1431ebcf4:
  uVar14 = local_7c;
  *(int *)(pbVar15 + -8) = ((int)pbVar15 + -8) - (int)puVar10;
  *(int *)(pbVar15 + -4) = (int)lVar19;
  *pbVar15 = local_6f << 2 | local_70;
  (**(code **)(*DAT_14ca83900 + 200))(DAT_14ca83900,pbVar15);
  while (bVar4 != 0) {
    bVar4 = (byte)uVar18;
    uVar17 = CONCAT71((int7)(uVar17 >> 8),*(undefined1 *)((longlong)param_1 + 0x69));
    FUN_14002049c(param_1,CONCAT31((int3)(uVar18 >> 8),-bVar4 & bVar4));
    puVar16 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar8 = puVar16 + 1;
    if ((undefined8 *)param_1[1] < puVar8) {
      FUN_140023dd8(param_1,0x10);
      puVar16 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
      puVar8 = puVar16 + 1;
    }
    *param_1 = (ulonglong)puVar8;
    *puVar16 = pbVar15;
    puVar6 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar8 = puVar6 + 4;
    if ((undefined8 *)param_1[1] < puVar8) {
      FUN_140023dd8(param_1,0x28);
      puVar6 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
      puVar8 = puVar6 + 4;
    }
    *param_1 = (ulonglong)puVar8;
    *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
    *(undefined8 **)param_1[6] = puVar6;
    param_1[6] = (ulonglong)(puVar6 + 1);
    puVar6[1] = 0;
    *puVar6 = &PTR_FUN_14a380c30;
    puVar6[2] = puVar16;
    *(undefined4 *)(puVar6 + 3) = 1;
    FUN_14002049c(param_1,uVar17 & 0xffffffff);
    bVar4 = (byte)(uVar18 - 1) & bVar4;
    uVar18 = CONCAT31((int3)(uVar18 - 1 >> 8),bVar4);
  }
  bVar21 = (byte)uVar14;
  bVar4 = bVar21;
  while (bVar4 != 0) {
    bVar4 = (byte)uVar14;
    uVar17 = CONCAT71((int7)(uVar17 >> 8),*(undefined1 *)((longlong)param_1 + 0x69));
    FUN_14002049c(param_1,-bVar4 & bVar4);
    puVar16 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar8 = puVar16 + 1;
    if ((undefined8 *)param_1[1] < puVar8) {
      FUN_140023dd8(param_1,0x10);
      puVar16 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
      puVar8 = puVar16 + 1;
    }
    *param_1 = (ulonglong)puVar8;
    *puVar16 = pbVar15;
    puVar6 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar8 = puVar6 + 4;
    if ((undefined8 *)param_1[1] < puVar8) {
      FUN_140023dd8(param_1,0x28);
      puVar6 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
      puVar8 = puVar6 + 4;
    }
    *param_1 = (ulonglong)puVar8;
    *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
    *(undefined8 **)param_1[6] = puVar6;
    param_1[6] = (ulonglong)(puVar6 + 1);
    puVar6[1] = 0;
    *puVar6 = &PTR_FUN_14a380c38;
    puVar6[2] = puVar16;
    *(undefined4 *)(puVar6 + 3) = 1;
    FUN_14002049c(param_1,uVar17 & 0xffffffff);
    bVar4 = bVar4 - 1 & bVar4;
    uVar14 = (uint)bVar4;
  }
  uVar2 = *(undefined1 *)((longlong)param_1 + 0x69);
  FUN_14002049c(param_1,(bVar21 == 2) + '\x01');
  if ((longlong)(int)local_78[1] != 0) {
    lVar19 = *local_78;
    lVar20 = (longlong)(int)local_78[1] * 0x38;
    do {
      lVar7 = lVar19;
      if (((*(byte *)(lVar19 + 0x18) - 1 < 2) ||
          ((*(byte *)(lVar19 + 0x18) == 3 && (lVar7 = *(longlong *)(lVar19 + 0x10), lVar7 != 0))))
         && (lVar7 = *(longlong *)(lVar7 + 0x10), lVar7 != 0)) {
        uVar3 = *(undefined4 *)(lVar19 + 0x20);
        *(undefined1 *)((longlong)param_1 + 0x66) = 1;
        puVar16 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
        puVar8 = puVar16 + 4;
        if ((undefined8 *)param_1[1] < puVar8) {
          FUN_140023dd8(param_1,0x28);
          puVar16 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
          puVar8 = puVar16 + 4;
        }
        *param_1 = (ulonglong)puVar8;
        *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
        *(undefined8 **)param_1[6] = puVar16;
        param_1[6] = (ulonglong)(puVar16 + 1);
        plVar9 = (longlong *)(*param_1 + 7 & 0xfffffffffffffff8);
        plVar13 = plVar9 + 2;
        if ((longlong *)param_1[1] < plVar13) {
          FUN_140023dd8(param_1,0x18);
          plVar9 = (longlong *)(*param_1 + 7 & 0xfffffffffffffff8);
          plVar13 = plVar9 + 2;
        }
        *param_1 = (ulonglong)plVar13;
        *plVar9 = lVar7;
        *(undefined4 *)(plVar9 + 1) = uVar3;
        puVar16[1] = 0;
        *puVar16 = &PTR_LAB_14a380c28;
        puVar16[2] = plVar9;
        *(undefined4 *)(puVar16 + 3) = 1;
      }
      lVar19 = lVar19 + 0x38;
      lVar20 = lVar20 + -0x38;
    } while (lVar20 != 0);
  }
  FUN_14002049c(param_1,CONCAT71((int7)((ulonglong)pbVar15 >> 8),uVar2) & 0xffffffff);
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431ec05c FUN_1431ec05c body=39 status=ok
// SIG undefined FUN_1431ec05c(void)

void FUN_1431ec05c(void)

{
  if (DAT_14ca83f70 != 0) {
    FUN_1400020a8();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431ec07c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_14ca83d48);
  return;
}



// FUNCTION 1431ec084 FUN_1431ec084 body=370 status=ok
// SIG undefined FUN_1431ec084(void)

void FUN_1431ec084(undefined8 param_1,longlong param_2,undefined8 param_3,undefined4 param_4,
                  int param_5,int param_6)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined1 auStack_78 [32];
  int local_58;
  int local_50;
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(char *)(param_2 + 100) == '\0') {
    if ((param_6 == 1) && (0 < *(int *)(DAT_14ca83c70 + 4))) {
      uVar2 = FUN_14001cc68(param_5,0x10);
    }
    else {
      local_48 = 0;
      local_40 = 0;
      FUN_14007658c(&DAT_14ca850c8,&local_48,5);
      *(undefined1 *)(param_2 + 100) = 1;
      local_50 = param_6;
      local_58 = param_5;
      uVar2 = (**(code **)(*DAT_14ca83900 + 0x4a0))(DAT_14ca83900,param_2,param_3,param_4);
      *(undefined1 *)(param_2 + 100) = 0;
    }
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14ca83d48);
    iVar1 = DAT_14ca83f78;
    lVar4 = (longlong)(int)DAT_14ca83f78;
    DAT_14ca83f78 = DAT_14ca83f78 + 1;
    if (DAT_14ca83f7c < DAT_14ca83f78) {
      FUN_1474141d4(iVar1);
    }
    puVar3 = &DAT_14ca83d70;
    if (DAT_14ca83f70 != (undefined8 *)0x0) {
      puVar3 = DAT_14ca83f70;
    }
    puVar3[lVar4 * 4] = param_3;
    puVar3[lVar4 * 4 + 1] = uVar2;
    *(int *)(puVar3 + lVar4 * 4 + 2) = param_5;
    *(undefined4 *)((longlong)puVar3 + lVar4 * 0x20 + 0x14) = param_4;
    *(int *)(puVar3 + lVar4 * 4 + 3) = param_6;
    DAT_14ca83f80 = DAT_14ca83f80 + param_5;
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14ca83d48);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_78);
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x0001431ec0f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_14ca83900 + 0x4a0))(DAT_14ca83900,param_2,param_3,param_4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_78);
}



// FUNCTION 1431ec208 FUN_1431ec208 body=704 status=ok
// SIG undefined FUN_1431ec208(void)

void FUN_1431ec208(undefined8 param_1,ulonglong *param_2,longlong param_3)

{
  int *piVar1;
  void *_Dst;
  undefined8 *puVar2;
  longlong *_Dst_00;
  undefined8 *puVar3;
  longlong *plVar4;
  void *_Src;
  undefined4 uVar5;
  int iVar6;
  ulonglong uVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  undefined1 auStack_88 [32];
  uint local_68;
  undefined4 local_60;
  undefined8 *local_58;
  undefined8 local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(char *)((longlong)param_2 + 100) != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_88);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14ca83d48);
  lVar10 = 1;
  if (0 < (int)DAT_14ca83f78) {
    plVar4 = &DAT_14ca83d70;
    if (DAT_14ca83f70 != (longlong *)0x0) {
      plVar4 = DAT_14ca83f70;
    }
    uVar7 = 0;
    _Dst_00 = plVar4;
    do {
      lVar9 = *_Dst_00;
      if (lVar9 == param_3) {
        _Src = (void *)_Dst_00[1];
        uVar11 = *(uint *)(_Dst_00 + 2);
        uVar5 = *(undefined4 *)((longlong)_Dst_00 + 0x14);
        lVar10 = _Dst_00[3];
        if (DAT_14ca83f78 - 1 != (int)uVar7) {
          iVar8 = (DAT_14ca83f78 - 1) - (int)uVar7;
          iVar6 = 1;
          if (iVar8 < 1) {
            iVar6 = iVar8;
          }
          memmove(_Dst_00,plVar4 + (ulonglong)(DAT_14ca83f78 - iVar6) * 4,(longlong)iVar6 << 5);
        }
        DAT_14ca83f78 = DAT_14ca83f78 - 1;
        goto LAB_1431ec310;
      }
      uVar7 = uVar7 + 1;
      _Dst_00 = _Dst_00 + 4;
    } while (DAT_14ca83f78 != uVar7);
  }
  lVar9 = 0;
  _Src = (void *)0x0;
  uVar11 = 0;
  uVar5 = 0;
LAB_1431ec310:
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14ca83d48);
  if ((*(int *)(DAT_14ca83c70 + 4) < 1) || ((int)lVar10 != 1)) {
    local_50 = 0;
    local_48 = 0;
    FUN_14007658c(&DAT_14ca850c8,&local_50,5);
    *(undefined1 *)((longlong)param_2 + 100) = 1;
    (**(code **)(*DAT_14ca83900 + 0x4a8))(DAT_14ca83900,param_2,param_3);
    DAT_14ca83f80 = 0;
    *(undefined1 *)((longlong)param_2 + 100) = 0;
  }
  else {
    if (*(char *)((longlong)param_2 + 100) == '\x01') {
      local_60 = 1;
      local_68 = uVar11;
      _Dst = (void *)(**(code **)(*DAT_14ca83900 + 0x4a0))(DAT_14ca83900,param_2,param_3,uVar5);
      memcpy(_Dst,_Src,(ulonglong)uVar11);
      FUN_1400020a8(_Src);
      (**(code **)(*DAT_14ca83900 + 0x4a8))(DAT_14ca83900,param_2,param_3);
    }
    else {
      puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar3 = puVar2 + 7;
      if ((undefined8 *)param_2[1] < puVar3) {
        FUN_140023dd8(param_2,0x40);
        puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar3 = puVar2 + 7;
      }
      *param_2 = (ulonglong)puVar3;
      *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
      *(undefined8 **)param_2[6] = puVar2;
      param_2[6] = (ulonglong)(puVar2 + 1);
      puVar2[1] = 0;
      *puVar2 = &PTR_FUN_14a380e20;
      puVar2[2] = param_3;
      puVar2[3] = lVar9;
      puVar2[4] = _Src;
      *(uint *)(puVar2 + 5) = uVar11;
      *(undefined4 *)((longlong)puVar2 + 0x2c) = uVar5;
      puVar2[6] = lVar10;
    }
    FUN_14494c7ac(param_2,&local_58,1);
    if (local_58 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(local_58 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*local_58)(local_58,1);
      }
    }
  }
  if (((*(byte *)((longlong)param_2 + 0x17b) & 0x20) != 0) &&
     ((uint)(*(int *)(DAT_14ca83c88 + 4) << 10) < DAT_14ca83f80)) {
    local_50 = 0;
    local_48 = 0;
    FUN_14007658c(&DAT_14ca850c8,&local_50,1);
    DAT_14ca83f80 = 0;
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431ec4e6 FUN_1431ec4e6 body=177 status=ok
// SIG undefined FUN_1431ec4e6(void)

undefined8
FUN_1431ec4e6(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined8 param_8)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = 0;
  local_40 = 0;
  FUN_14007658c(&DAT_14ca850c8,&local_48,5);
  local_58 = param_8;
  local_60 = param_7;
  local_68 = param_6;
  (**(code **)(*DAT_14ca83900 + 0x1d8))(DAT_14ca83900,param_2,param_4,param_5);
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431ec598 FUN_1431ec598 body=113 status=ok
// SIG undefined FUN_1431ec598(void)

undefined4 FUN_1431ec598(undefined8 param_1,longlong param_2,undefined8 param_3,undefined4 param_4)

{
  byte bVar1;
  undefined4 uVar2;
  
  bVar1 = 1;
  if (DAT_14c842750 == '\x01') {
    bVar1 = FUN_1431eb928();
    bVar1 = bVar1 ^ 1 | param_2 == 0;
  }
  uVar2 = (**(code **)(*DAT_14ca83900 + 0x1e0))(DAT_14ca83900,param_3,param_4);
  if (bVar1 == 0) {
    LOCK();
    DAT_14ca84aa8 = DAT_14ca84aa8 + -1;
    UNLOCK();
    if (DAT_14ca84aa8 == 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14ca83c98);
    }
  }
  return uVar2;
}



// FUNCTION 1431ec60a FUN_1431ec60a body=113 status=ok
// SIG undefined FUN_1431ec60a(void)

undefined4 FUN_1431ec60a(undefined8 param_1,longlong param_2,undefined8 param_3,undefined4 param_4)

{
  byte bVar1;
  undefined4 uVar2;
  
  bVar1 = 1;
  if (DAT_14c842750 == '\x01') {
    bVar1 = FUN_1431eb928();
    bVar1 = bVar1 ^ 1 | param_2 == 0;
  }
  uVar2 = (**(code **)(*DAT_14ca83900 + 0x1e8))(DAT_14ca83900,param_3,param_4);
  if (bVar1 == 0) {
    LOCK();
    DAT_14ca84aa8 = DAT_14ca84aa8 + -1;
    UNLOCK();
    if (DAT_14ca84aa8 == 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14ca83c98);
    }
  }
  return uVar2;
}



// FUNCTION 1431ec67c FUN_1431ec67c body=319 status=ok
// SIG undefined FUN_1431ec67c(void)

undefined8
FUN_1431ec67c(undefined8 param_1,longlong param_2,undefined8 param_3,undefined4 param_4,
             undefined4 param_5,undefined8 param_6,undefined1 param_7,char param_8,
             undefined8 param_9)

{
  byte bVar1;
  undefined8 uVar2;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined1 local_70;
  undefined8 local_68;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_8 != '\0') {
    local_58 = 0;
    local_50 = 0;
    FUN_14007658c(&DAT_14ca850c8,&local_58,5);
    local_68 = param_9;
    local_70 = param_7;
    local_78 = param_6;
    (**(code **)(*DAT_14ca83900 + 0x1f0))(DAT_14ca83900,param_3,param_4,param_5);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_98);
  }
  bVar1 = 1;
  if (DAT_14c842750 == '\x01') {
    bVar1 = FUN_1431eb928();
    bVar1 = bVar1 ^ 1 | param_2 == 0;
  }
  local_68 = param_9;
  local_70 = param_7;
  local_78 = param_6;
  uVar2 = (**(code **)(*DAT_14ca83900 + 0x1f0))(DAT_14ca83900,param_3,param_4,param_5);
  if (bVar1 == 0) {
    LOCK();
    DAT_14ca84aa8 = DAT_14ca84aa8 + -1;
    UNLOCK();
    if (DAT_14ca84aa8 == 0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14ca83c98);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431ec7be FUN_1431ec7be body=244 status=ok
// SIG undefined FUN_1431ec7be(void)

void FUN_1431ec7be(undefined8 param_1,longlong param_2,undefined8 param_3,undefined4 param_4,
                  undefined1 param_5,char param_6)

{
  char cVar1;
  undefined8 unaff_RBX;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_6 == '\0') {
    if (DAT_14c842750 == '\x01') {
      cVar1 = FUN_1431eb928();
      (**(code **)(*DAT_14ca83900 + 0x1f8))
                (DAT_14ca83900,param_3,param_4,
                 CONCAT71((int7)((ulonglong)unaff_RBX >> 8),param_5) & 0xffffffff);
      if (param_2 != 0 && cVar1 == '\x01') {
        LOCK();
        DAT_14ca84aa8 = DAT_14ca84aa8 + -1;
        UNLOCK();
        if (DAT_14ca84aa8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_68);
        }
      }
      if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
  }
  else {
    local_48 = 0;
    local_40 = 0;
    FUN_14007658c(&DAT_14ca850c8,&local_48,5);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_68);
}



// FUNCTION 1431ec8e8 FUN_1431ec8e8 body=174 status=ok
// SIG undefined FUN_1431ec8e8(void)

void FUN_1431ec8e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined8 param_7,undefined1 param_8)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined8 local_60;
  undefined1 local_58;
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = 0;
  local_40 = 0;
  FUN_14007658c(&DAT_14ca850c8,&local_48,5);
  local_58 = param_8;
  local_60 = param_7;
  local_68 = param_6;
  (**(code **)(*DAT_14ca83900 + 0x200))(DAT_14ca83900,param_3,param_4,param_5);
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431ec998 FUN_1431ec998 body=142 status=ok
// SIG undefined FUN_1431ec998(void)

void FUN_1431ec998(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 param_5,undefined1 param_6)

{
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0;
  local_30 = 0;
  FUN_14007658c(&DAT_14ca850c8,&local_38,5);
  local_48 = param_6;
  (**(code **)(*DAT_14ca83900 + 0x208))(DAT_14ca83900,param_3,param_4,param_5);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431eca28 FUN_1431eca28 body=191 status=ok
// SIG undefined FUN_1431eca28(void)

void FUN_1431eca28(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined8 param_8,
                  undefined1 param_9)

{
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined1 local_60;
  undefined8 local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_50 = 0;
  local_48 = 0;
  FUN_14007658c(&DAT_14ca850c8,&local_50,5);
  local_60 = param_9;
  local_68 = param_8;
  local_70 = param_7;
  local_78 = param_6;
  (**(code **)(*DAT_14ca83900 + 0x228))(DAT_14ca83900,param_3,param_4,param_5);
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431ecae8 FUN_1431ecae8 body=157 status=ok
// SIG undefined FUN_1431ecae8(void)

void FUN_1431ecae8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined1 param_7)

{
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined1 local_50;
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_40 = 0;
  local_38 = 0;
  FUN_14007658c(&DAT_14ca850c8,&local_40,5);
  local_50 = param_7;
  local_58 = param_6;
  (**(code **)(*DAT_14ca83900 + 0x230))(DAT_14ca83900,param_3,param_4,param_5);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431ecb86 FUN_1431ecb86 body=392 status=ok
// SIG undefined FUN_1431ecb86(void)

void FUN_1431ecb86(undefined8 param_1,longlong param_2,undefined8 param_3,int param_4,
                  longlong *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  char cVar2;
  byte bVar3;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_70;
  int local_68;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (((param_5 == (longlong *)0x0) ||
      (cVar2 = (**(code **)(*param_5 + 0x18))(param_5), cVar2 == '\0')) || ((int)param_5[2] != 0)) {
    local_58 = 0;
    local_50 = 0;
    FUN_14007658c(&DAT_14ca850c8,&local_58,5);
  }
  if ((DAT_14ca84d98 == '\x01') || (DAT_14c842750 != '\x01')) {
    uVar1 = *(uint *)(param_2 + 0x17c);
    if (uVar1 == 0) {
      local_68 = 0x20;
    }
    else {
      local_68 = 0;
      if (uVar1 != 0) {
        for (; (uVar1 >> local_68 & 1) == 0; local_68 = local_68 + 1) {
        }
      }
    }
    if (param_4 != -1) {
      local_68 = param_4;
    }
    local_70 = param_8;
    local_78 = param_7;
    (**(code **)(*DAT_14ca83900 + 0x260))(DAT_14ca83900,param_3,param_5,param_6);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_98);
  }
  bVar3 = FUN_1431eb928();
  uVar1 = *(uint *)(param_2 + 0x17c);
  if (uVar1 == 0) {
    local_68 = 0x20;
  }
  else {
    local_68 = 0;
    if (uVar1 != 0) {
      for (; (uVar1 >> local_68 & 1) == 0; local_68 = local_68 + 1) {
      }
    }
  }
  if (param_4 != -1) {
    local_68 = param_4;
  }
  local_70 = param_8;
  local_78 = param_7;
  (**(code **)(*DAT_14ca83900 + 0x260))(DAT_14ca83900,param_3,param_5,param_6);
  if ((param_2 != 0 & bVar3) != 0) {
    LOCK();
    DAT_14ca84aa8 = DAT_14ca84aa8 + -1;
    UNLOCK();
    if (DAT_14ca84aa8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_98);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431ecd2a FUN_1431ecd2a body=191 status=ok
// SIG undefined FUN_1431ecd2a(void)

void FUN_1431ecd2a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_48 = 0;
  local_40 = 0;
  FUN_14007658c(&DAT_14ca850c8,&local_48,5);
  local_58 = *param_4;
  local_50 = param_4[1];
  local_68 = param_8;
  local_70 = param_7;
  local_78 = param_6;
  (**(code **)(*DAT_14ca83900 + 0x278))(DAT_14ca83900,param_3,&local_58,param_5);
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431ecdea FUN_1431ecdea body=183 status=ok
// SIG undefined FUN_1431ecdea(void)

void FUN_1431ecdea(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 param_5,undefined4 *param_6)

{
  undefined1 auStack_98 [32];
  undefined4 *local_78;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_38 = 0;
  local_30 = 0;
  FUN_14007658c(&DAT_14ca850c8,&local_38,5);
  local_58 = *param_6;
  uStack_54 = param_6[1];
  uStack_50 = param_6[2];
  uStack_4c = param_6[3];
  uStack_48 = param_6[4];
  uStack_44 = param_6[5];
  uStack_40 = param_6[6];
  local_78 = &local_58;
  local_68 = *param_4;
  local_60 = param_4[1];
  (**(code **)(*DAT_14ca83900 + 0x270))(DAT_14ca83900,param_3,&local_68,param_5);
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431ecea2 FUN_1431ecea2 body=349 status=ok
// SIG undefined FUN_1431ecea2(void)

void FUN_1431ecea2(longlong *param_1,undefined8 *param_2,undefined4 param_3)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = param_2[5];
  local_58 = param_2[2];
  (**(code **)(*DAT_14ca83900 + 0x108))(DAT_14ca83900,&local_40,*param_2,param_2[1]);
  (**(code **)(*param_1 + 0x270))(param_1,CONCAT44(uStack_3c,local_40));
  lVar4 = CONCAT44(uStack_3c,local_40);
  if (lVar4 != 0) {
    LOCK();
    puVar1 = (uint *)(lVar4 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar4 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(lVar4 + 0xd);
        plVar5 = (longlong *)FUN_14001cc68(0x10,8);
        plVar5[1] = lVar4;
        plVar7 = DAT_14ca843c0;
        plVar6 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar5 = (longlong)plVar7;
            LOCK();
            bVar8 = plVar7 != DAT_14ca843c0;
            plVar6 = plVar5;
            if (bVar8) {
              plVar7 = DAT_14ca843c0;
              plVar6 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar6;
            UNLOCK();
          } while (bVar8);
        }
        else {
          do {
            *plVar5 = (longlong)plVar6;
            LOCK();
            bVar8 = plVar6 != DAT_14ca843c8;
            plVar7 = plVar5;
            if (bVar8) {
              plVar6 = DAT_14ca843c8;
              plVar7 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar7;
            UNLOCK();
          } while (bVar8);
        }
      }
    }
  }
  (**(code **)(*param_1 + 0x278))(param_1,param_2[8],param_3);
  (**(code **)(*param_1 + 0x280))(param_1,param_2[7]);
  local_40 = 0x3f800000;
  uStack_3c = 0x3f800000;
  uStack_38 = 0x3f800000;
  uStack_34 = 0x3f800000;
  (**(code **)(*param_1 + 0x288))(param_1,param_2[6]);
  if (DAT_14ca84e1e == '\x01') {
    (**(code **)(*param_1 + 0x290))(param_1,*(undefined1 *)((longlong)param_2 + 0xc5));
  }
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1431ed000 FUN_1431ed000 body=31 status=ok
// SIG undefined FUN_1431ed000(void)

void FUN_1431ed000(void)

{
  if (DAT_14ca84ea0 != 0) {
    FUN_1400020a8();
  }
  FUN_14631b6ce();
  return;
}



// FUNCTION 1431ed020 FUN_1431ed020 body=1918 status=ok
// SIG undefined FUN_1431ed020(void)

void FUN_1431ed020(longlong param_1,ulonglong *param_2,longlong *param_3,int *param_4,
                  undefined4 param_5,uint *param_6)

{
  uint *puVar1;
  undefined8 **ppuVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  ushort uVar13;
  undefined8 *puVar14;
  uint uVar15;
  ulonglong uVar16;
  undefined2 *puVar17;
  uint uVar18;
  uint uVar19;
  bool bVar20;
  undefined1 auStack_158 [36];
  uint local_134;
  longlong *local_130;
  longlong local_128;
  int *local_120;
  longlong *local_118;
  longlong local_110;
  undefined8 local_108;
  uint uStack_100;
  undefined8 uStack_fc;
  uint uStack_f4;
  undefined8 uStack_f0;
  uint local_e8;
  undefined8 *local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined8 uStack_b4;
  ulonglong local_ac;
  undefined4 local_a4;
  ushort local_a0;
  char local_9e;
  undefined2 local_9d;
  undefined1 local_9b;
  undefined4 local_98;
  undefined2 *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_158;
  (**(code **)(**(longlong **)(param_1 + 8) + 8))();
  uVar19 = *(uint *)((longlong)param_2 + 0x17c);
  *(uint *)(param_1 + 0x10) = uVar19;
  local_130 = param_3;
  local_128 = param_1;
  if (uVar19 != 0 && param_3 != (longlong *)0x0) {
    uVar15 = 0;
    if (uVar19 != 0) {
      for (; (uVar19 >> uVar15 & 1) == 0; uVar15 = uVar15 + 1) {
      }
    }
    local_110 = param_1 + 0x18;
    local_118 = param_3 + 4;
    local_120 = param_4;
    do {
      uVar18 = 1 << ((byte)uVar15 & 0x1f);
      uVar5 = *(uint *)((longlong)param_2 + 0x17c);
      if (uVar5 != uVar18) {
        *(uint *)((longlong)param_2 + 0x17c) = uVar18;
        puVar7 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar14 = puVar7 + 3;
        if ((undefined8 *)param_2[1] < puVar14) {
          FUN_140023dd8(param_2,0x20);
          puVar7 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
          puVar14 = puVar7 + 3;
        }
        *param_2 = (ulonglong)puVar14;
        *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
        *(undefined8 **)param_2[6] = puVar7;
        param_2[6] = (ulonglong)(puVar7 + 1);
        uVar6 = *(undefined4 *)((longlong)param_2 + 0x17c);
        puVar7[1] = 0;
        *puVar7 = &PTR_FUN_14a1fb2c0;
        *(undefined4 *)(puVar7 + 2) = uVar6;
      }
      ppuVar2 = (undefined8 **)(local_110 + (ulonglong)uVar15 * 8);
      plVar12 = *ppuVar2;
      if (plVar12 == (longlong *)0x0) {
LAB_1431ed239:
        uVar15 = *param_6;
        if (((int)uVar15 < 1) || (uVar16 = (ulonglong)param_6[1], (int)param_6[1] < 1)) {
          plVar12 = local_118;
          if (*(code **)(*local_130 + 8) != FUN_1447d3e98) {
            plVar12 = (longlong *)(**(code **)(*local_130 + 8))(local_130);
          }
          uVar13 = 1;
          switch(*(undefined1 *)((longlong)plVar12 + 0x32)) {
          case 0:
          case 3:
            break;
          case 1:
          case 4:
            uVar13 = *(ushort *)((longlong)plVar12 + 0x2e);
            break;
          case 2:
            uVar13 = *(ushort *)((longlong)plVar12 + 0x2c);
            break;
          default:
            local_134 = 0;
            uVar16 = 0;
            uVar15 = 0;
            goto LAB_1431ed2a6;
          }
          local_134 = (uint)uVar13;
          uVar15 = *(uint *)((longlong)plVar12 + 0x24);
          uVar16 = (ulonglong)*(uint *)(plVar12 + 5);
        }
        else {
          local_134 = param_6[2];
        }
LAB_1431ed2a6:
        FUN_1400021e4(*(longlong *)(local_128 + 8) + 0x14,&local_108);
        puVar17 = &DAT_149dfb77a;
        if (uStack_100 != 0) {
          puVar17 = (undefined2 *)local_108;
        }
        lVar8 = (**(code **)(*local_130 + 8))();
        param_4 = local_120;
        local_9e = *(char *)(lVar8 + 0x32);
        local_9d = *(undefined2 *)(lVar8 + 0x33);
        local_a4 = *(undefined4 *)(lVar8 + 0x2c);
        local_a0 = *(ushort *)(lVar8 + 0x30);
        local_c8 = *(undefined4 *)(lVar8 + 8);
        uStack_bc = *(undefined4 *)(lVar8 + 0x14);
        uStack_b8 = *(undefined4 *)(lVar8 + 0x18);
        uStack_b4 = *(undefined8 *)(lVar8 + 0x1c);
        local_9b = *(undefined1 *)(lVar8 + 0x35);
        local_ac = (ulonglong)uVar15 | uVar16 << 0x20;
        local_d0 = 0x480000;
        uStack_c4 = (undefined4)*(undefined8 *)(lVar8 + 0xc);
        local_c0 = (undefined4)((ulonglong)*(undefined8 *)(lVar8 + 0xc) >> 0x20);
        local_98 = 0x2000;
        local_88 = 0;
        uStack_80 = 0;
        local_78 = 0;
        if (DAT_14ca85080 == '\x01') {
          if (local_9e == '\x04') {
LAB_1431ed3a6:
            local_a4 = CONCAT22(1,(undefined2)local_a4);
          }
          else if (local_9e == '\x02') {
            uVar15 = (uint)local_a4 >> 0x10;
            local_a4 = CONCAT22((short)uVar15,(short)local_134);
          }
          else if (local_9e == '\x01') goto LAB_1431ed3a6;
        }
        else {
          local_a4 = 0x10001;
          local_9e = '\0';
        }
        local_90 = puVar17;
        (**(code **)(*DAT_14ca83900 + 0x1a0))(DAT_14ca83900,&local_e0,param_2,&local_d0);
        if (ppuVar2 == &local_e0) {
LAB_1431ed479:
          puVar14 = local_e0;
          if (local_e0 != (undefined8 *)0x0) {
            LOCK();
            puVar1 = (uint *)(local_e0 + 1);
            uVar15 = *puVar1;
            *puVar1 = *puVar1 - 1;
            UNLOCK();
            if ((uVar15 & 0x3fffffff) == 1) {
              puVar1 = (uint *)(local_e0 + 1);
              LOCK();
              uVar15 = *puVar1;
              *puVar1 = *puVar1 | 0x40000000;
              UNLOCK();
              if ((uVar15 >> 0x1e & 1) == 0) {
                bVar4 = *(byte *)((longlong)local_e0 + 0xd);
                plVar9 = (longlong *)FUN_14001cc68(0x10,8);
                plVar9[1] = (longlong)puVar14;
                plVar12 = DAT_14ca843c0;
                plVar10 = DAT_14ca843c8;
                if ((bVar4 & 2) == 0) {
                  do {
                    *plVar9 = (longlong)plVar12;
                    LOCK();
                    bVar20 = plVar12 != DAT_14ca843c0;
                    plVar10 = plVar9;
                    if (bVar20) {
                      plVar12 = DAT_14ca843c0;
                      plVar10 = DAT_14ca843c0;
                    }
                    DAT_14ca843c0 = plVar10;
                    UNLOCK();
                  } while (bVar20);
                }
                else {
                  do {
                    *plVar9 = (longlong)plVar10;
                    LOCK();
                    bVar20 = plVar10 != DAT_14ca843c8;
                    plVar12 = plVar9;
                    if (bVar20) {
                      plVar10 = DAT_14ca843c8;
                      plVar12 = DAT_14ca843c8;
                    }
                    DAT_14ca843c8 = plVar12;
                    UNLOCK();
                  } while (bVar20);
                }
              }
            }
          }
        }
        else {
          puVar14 = *ppuVar2;
          *ppuVar2 = local_e0;
          local_e0 = (undefined8 *)0x0;
          if (puVar14 != (undefined8 *)0x0) {
            LOCK();
            puVar1 = (uint *)(puVar14 + 1);
            uVar15 = *puVar1;
            *puVar1 = *puVar1 - 1;
            UNLOCK();
            if ((uVar15 & 0x3fffffff) == 1) {
              puVar1 = (uint *)(puVar14 + 1);
              LOCK();
              uVar15 = *puVar1;
              *puVar1 = *puVar1 | 0x40000000;
              UNLOCK();
              if ((uVar15 >> 0x1e & 1) == 0) {
                bVar4 = *(byte *)((longlong)puVar14 + 0xd);
                plVar9 = (longlong *)FUN_14001cc68(0x10,8);
                plVar9[1] = (longlong)puVar14;
                plVar12 = DAT_14ca843c0;
                plVar10 = DAT_14ca843c8;
                if ((bVar4 & 2) == 0) {
                  do {
                    *plVar9 = (longlong)plVar12;
                    LOCK();
                    bVar20 = plVar12 != DAT_14ca843c0;
                    plVar10 = plVar9;
                    if (bVar20) {
                      plVar12 = DAT_14ca843c0;
                      plVar10 = DAT_14ca843c0;
                    }
                    DAT_14ca843c0 = plVar10;
                    UNLOCK();
                  } while (bVar20);
                }
                else {
                  do {
                    *plVar9 = (longlong)plVar10;
                    LOCK();
                    bVar20 = plVar10 != DAT_14ca843c8;
                    plVar12 = plVar9;
                    if (bVar20) {
                      plVar10 = DAT_14ca843c8;
                      plVar12 = DAT_14ca843c8;
                    }
                    DAT_14ca843c8 = plVar12;
                    UNLOCK();
                  } while (bVar20);
                }
              }
            }
            goto LAB_1431ed479;
          }
        }
        if (local_108 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
      }
      else {
        if (DAT_14ca85080 == '\x01') {
          lVar8 = (**(code **)(*plVar12 + 8))();
          cVar3 = *(char *)(lVar8 + 0x32);
          lVar8 = (**(code **)(*local_130 + 8))();
          if (cVar3 != *(char *)(lVar8 + 0x32)) goto LAB_1431ed239;
          plVar12 = *ppuVar2;
        }
        local_d0 = 0xffffffffffffffff;
        local_c8 = 0xffffffff;
        local_c0 = SUB84(plVar12,0);
        uStack_bc = (undefined4)((ulonglong)plVar12 >> 0x20);
        uStack_b8 = CONCAT31(uStack_b8._1_3_,1);
        uStack_b4 = 0x200000000001;
        local_ac = local_ac & 0xffffffff00000000;
        local_a0 = local_a0 & 0xff00;
        local_108 = &local_d0;
        uStack_100 = 1;
        FUN_144760590(param_2,&local_108,0);
      }
      uStack_100 = DAT_14c9a52a0;
      local_108 = (undefined8 *)DAT_14c9a5298;
      uStack_f4 = DAT_14c9a52a0;
      uStack_fc = DAT_14c9a5298;
      local_e8 = DAT_14c9a52a0;
      uStack_f0 = DAT_14c9a5298;
      if ((-1 < *param_4) && (-1 < param_4[1])) {
        uStack_f4 = param_4[2];
        uStack_fc = *(undefined2 **)param_4;
      }
      if ((0 < (int)*param_6) && (0 < (int)param_6[1])) {
        uStack_100 = param_6[2];
        local_108 = *(undefined8 **)param_6;
      }
      puVar7 = *ppuVar2;
      puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar14 = puVar11 + 0xc;
      if ((undefined8 *)param_2[1] < puVar14) {
        FUN_140023dd8(param_2,0x68);
        puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar14 = puVar11 + 0xc;
      }
      *param_2 = (ulonglong)puVar14;
      *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
      *(undefined8 **)param_2[6] = puVar11;
      param_2[6] = (ulonglong)(puVar11 + 1);
      puVar11[1] = 0;
      *puVar11 = &PTR_LAB_14a289d68;
      *(undefined4 *)(puVar11 + 2) = (undefined4)local_108;
      *(undefined4 *)((longlong)puVar11 + 0x14) = local_108._4_4_;
      *(uint *)(puVar11 + 3) = uStack_100;
      *(undefined4 *)((longlong)puVar11 + 0x1c) = (undefined4)uStack_fc;
      *(undefined4 *)(puVar11 + 4) = uStack_fc._4_4_;
      *(uint *)((longlong)puVar11 + 0x24) = uStack_f4;
      *(undefined4 *)(puVar11 + 5) = (undefined4)uStack_f0;
      *(undefined4 *)((longlong)puVar11 + 0x2c) = uStack_f0._4_4_;
      *(uint *)(puVar11 + 6) = local_e8;
      *(undefined4 *)((longlong)puVar11 + 0x34) = param_5;
      puVar11[7] = 0x100000000;
      puVar11[8] = 0;
      *(undefined4 *)(puVar11 + 9) = 1;
      puVar11[10] = local_130;
      puVar11[0xb] = puVar7;
      local_d0 = 0xffffffffffffffff;
      local_c8 = 0xffffffff;
      local_c0 = SUB84(*ppuVar2,0);
      uStack_bc = (undefined4)((ulonglong)*ppuVar2 >> 0x20);
      uStack_b8 = CONCAT31(uStack_b8._1_3_,1);
      uStack_b4 = 0x100002000;
      local_ac = local_ac & 0xffffffff00000000;
      local_a0 = local_a0 & 0xff00;
      local_e0 = &local_d0;
      local_d8 = 1;
      FUN_144760590(param_2,&local_e0,0);
      (**(code **)(*DAT_14ca83900 + 0xc0))(DAT_14ca83900,param_2);
      if (*(uint *)((longlong)param_2 + 0x17c) != uVar5) {
        *(uint *)((longlong)param_2 + 0x17c) = uVar5;
        puVar7 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar14 = puVar7 + 3;
        if ((undefined8 *)param_2[1] < puVar14) {
          FUN_140023dd8(param_2,0x20);
          puVar7 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
          puVar14 = puVar7 + 3;
        }
        *param_2 = (ulonglong)puVar14;
        *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
        *(undefined8 **)param_2[6] = puVar7;
        param_2[6] = (ulonglong)(puVar7 + 1);
        uVar6 = *(undefined4 *)((longlong)param_2 + 0x17c);
        puVar7[1] = 0;
        *puVar7 = &PTR_FUN_14a1fb2c0;
        *(undefined4 *)(puVar7 + 2) = uVar6;
      }
      uVar19 = uVar19 & ~uVar18;
      if (uVar19 == 0) {
        uVar15 = 0x20;
      }
      else {
        uVar15 = 0;
        if (uVar19 != 0) {
          for (; (uVar19 >> uVar15 & 1) == 0; uVar15 = uVar15 + 1) {
          }
        }
      }
    } while (uVar19 != 0);
  }
  if ((local_70 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1431ed7a0 FUN_1431ed7a0 body=164 status=ok
// SIG undefined FUN_1431ed7a0(void)

undefined8 FUN_1431ed7a0(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 *local_40;
  undefined4 *local_38;
  undefined4 *local_30;
  undefined4 local_20;
  undefined4 local_1c;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(uint *)(param_1 + 0x10);
  if (uVar1 == 0) {
    uVar4 = 0x20;
  }
  else {
    uVar2 = 0;
    if (uVar1 != 0) {
      for (; (uVar1 >> uVar2 & 1) == 0; uVar2 = uVar2 + 1) {
      }
    }
    uVar4 = (ulonglong)uVar2;
  }
  uVar3 = 0;
  if (*(longlong *)(param_1 + 0x18 + uVar4 * 8) != 0) {
    *(int *)(param_1 + 0x14) = (int)uVar4;
    local_40 = &local_18;
    local_18 = 0;
    local_38 = &local_1c;
    local_1c = 0;
    local_30 = &local_20;
    local_20 = 0;
    local_48 = *(undefined8 *)(param_1 + 8);
    (**(code **)(*DAT_14ca83900 + 0x480))(DAT_14ca83900,&DAT_14ca85100);
    uVar3 = local_18;
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431ed846 FUN_1431ed846 body=214 status=ok
// SIG undefined FUN_1431ed846(void)

undefined8 FUN_1431ed846(longlong param_1,undefined4 *param_2,undefined4 *param_3)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 *local_50;
  undefined4 *local_48;
  undefined4 *local_40;
  undefined4 local_30;
  undefined4 local_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = *(uint *)(param_1 + 0x10);
  if (uVar1 == 0) {
    uVar4 = 0x20;
  }
  else {
    uVar2 = 0;
    if (uVar1 != 0) {
      for (; (uVar1 >> uVar2 & 1) == 0; uVar2 = uVar2 + 1) {
      }
    }
    uVar4 = (ulonglong)uVar2;
  }
  if (*(longlong *)(param_1 + 0x18 + uVar4 * 8) == 0) {
    *param_2 = 0;
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = 0;
    }
    uVar3 = 0;
  }
  else {
    *(int *)(param_1 + 0x14) = (int)uVar4;
    local_50 = &local_28;
    local_28 = 0;
    local_48 = &local_2c;
    local_2c = 0;
    local_40 = &local_30;
    local_30 = 0;
    local_58 = *(undefined8 *)(param_1 + 8);
    (**(code **)(*DAT_14ca83900 + 0x480))(DAT_14ca83900,&DAT_14ca85100);
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = local_30;
    }
    *param_2 = local_2c;
    uVar3 = local_28;
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431ed91e FUN_1431ed91e body=36 status=ok
// SIG undefined FUN_1431ed91e(void)

void FUN_1431ed91e(longlong param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001431ed93f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14ca83900 + 0x488))
            (DAT_14ca83900,&DAT_14ca85100,
             *(undefined8 *)(param_1 + 0x18 + (ulonglong)*(uint *)(param_1 + 0x14) * 8));
  return;
}



// FUNCTION 1431ed942 FUN_1431ed942 body=36 status=ok
// SIG undefined FUN_1431ed942(void)

void FUN_1431ed942(void)

{
  FUN_145cb32fc();
  if (DAT_14ca84288 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1431ed966 FUN_1431ed966 body=41 status=ok
// SIG undefined FUN_1431ed966(void)

void FUN_1431ed966(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_14ca843c0;
  LOCK();
  DAT_14ca843c0 = (undefined8 *)0x0;
  UNLOCK();
  while (puVar1 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*puVar1;
    FUN_1400020a8();
  }
  return;
}



// FUNCTION 1431ed98f FUN_1431ed98f body=41 status=ok
// SIG undefined FUN_1431ed98f(void)

void FUN_1431ed98f(void)

{
  undefined8 *puVar1;
  
  puVar1 = DAT_14ca843c8;
  LOCK();
  DAT_14ca843c8 = (undefined8 *)0x0;
  UNLOCK();
  while (puVar1 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*puVar1;
    FUN_1400020a8();
  }
  return;
}



// FUNCTION 1431ed9b8 FUN_1431ed9b8 body=8 status=ok
// SIG undefined FUN_1431ed9b8(void)

void FUN_1431ed9b8(longlong param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x10) = *param_2;
  return;
}



// FUNCTION 1431ed9c0 FUN_1431ed9c0 body=26 status=ok
// SIG undefined FUN_1431ed9c0(void)

void FUN_1431ed9c0(undefined8 *param_1,ushort param_2)

{
  *param_1 = *(undefined8 *)(&DAT_14ca814bc + (ulonglong)param_2 * 0x3c);
  return;
}



// FUNCTION 1431ed9da FUN_1431ed9da body=388 status=ok
// SIG undefined FUN_1431ed9da(void)

void FUN_1431ed9da(undefined8 *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6,undefined8 *param_7)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_LAB_14a37fd70;
  param_1[1] = param_2;
  if (param_2 != 0) {
    LOCK();
    *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 1;
    UNLOCK();
  }
  param_1[2] = 0;
  param_1[3] = param_3;
  param_1[4] = param_4;
  param_1[5] = param_5;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined8 *)((longlong)param_1 + 0x95) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9d) = 0;
  *(undefined1 *)((longlong)param_1 + 0xa5) = param_6;
  *(undefined1 *)((longlong)param_1 + 0xa6) = 0;
  *param_1 = &PTR_FUN_14a37fd80;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 1;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xbc) = 0;
  *(int *)((longlong)param_1 + 0xc4) = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  param_1[0x19] = 0x100000000;
  param_1[0x1a] = 0x1000100000001;
  *(undefined4 *)(param_1 + 0x1b) = 0x101;
  *(undefined2 *)((longlong)param_1 + 0xdc) = 0xff00;
  *(undefined1 *)((longlong)param_1 + 0xda) = *(undefined1 *)((longlong)param_7 + 0x32);
  param_1[0x15] = *param_7;
  *(undefined1 *)((longlong)param_1 + 0xdb) = *(undefined1 *)((longlong)param_7 + 0x33);
  *(undefined1 *)((longlong)param_1 + 0xdc) = *(undefined1 *)((longlong)param_7 + 0x34);
  *(undefined8 *)((longlong)param_1 + 0xcc) = *(undefined8 *)((longlong)param_7 + 0x24);
  *(undefined2 *)((longlong)param_1 + 0xd4) = *(undefined2 *)((longlong)param_7 + 0x2c);
  *(undefined2 *)((longlong)param_1 + 0xd6) = *(undefined2 *)((longlong)param_7 + 0x2e);
  *(undefined1 *)(param_1 + 0x1b) = *(undefined1 *)(param_7 + 6);
  *(undefined1 *)((longlong)param_1 + 0xd9) = *(undefined1 *)((longlong)param_7 + 0x31);
  uVar1 = param_7[2];
  param_1[0x16] = param_7[1];
  param_1[0x17] = uVar1;
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_7 + 3);
  *(undefined4 *)(param_1 + 0x19) = *(undefined4 *)(param_7 + 4);
  *(undefined1 *)((longlong)param_1 + 0xdd) = *(undefined1 *)((longlong)param_7 + 0x35);
  *(undefined4 *)((longlong)param_1 + 0xc4) = *(undefined4 *)((longlong)param_7 + 0x1c);
  param_1[0x1f] = 0;
  param_1[0x20] = 0x100000000;
  param_1[0x24] = 0;
  param_1[0x25] = 0x100000000;
  return;
}



// FUNCTION 1431edb5e FUN_1431edb5e body=69 status=ok
// SIG undefined FUN_1431edb5e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431edb5e(void)

{
  _DAT_14ca844b8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431edba0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca844c0,1);
  return;
}



// FUNCTION 1431edba3 FUN_1431edba3 body=310 status=ok
// SIG undefined FUN_1431edba3(void)

void FUN_1431edba3(ulonglong *param_1,float param_2,float param_3,longlong param_4)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  float fVar7;
  
  if (DAT_14ca84e1e == '\x01') {
    dVar5 = *(double *)(param_4 + 0x30) * 0.0 + *(double *)(param_4 + 0x10) * 0.0;
    dVar6 = *(double *)(param_4 + 0x38) * 0.0 + *(double *)(param_4 + 0x18) * 0.0;
    fVar4 = (float)(((double)param_2 * *(double *)(param_4 + 0x50) + dVar5 +
                    *(double *)(param_4 + 0x70)) /
                   ((double)param_2 * *(double *)(param_4 + 0x58) + dVar6 +
                   *(double *)(param_4 + 0x78)));
    fVar7 = (float)(((double)param_3 * *(double *)(param_4 + 0x50) + dVar5 +
                    *(double *)(param_4 + 0x70)) /
                   ((double)param_3 * *(double *)(param_4 + 0x58) + dVar6 +
                   *(double *)(param_4 + 0x78)));
    if (1.0 <= fVar7) {
      fVar7 = 1.0;
    }
    if (fVar7 <= 0.0) {
      fVar7 = 0.0;
    }
    if (1.0 <= fVar4) {
      fVar4 = 1.0;
    }
    if (fVar4 <= 0.0) {
      fVar4 = 0.0;
    }
    bVar1 = fVar7 < fVar4;
    if (fVar4 <= fVar7) {
      fVar7 = 0.0;
    }
    puVar2 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar3 = puVar2 + 3;
    if ((undefined8 *)param_1[1] < puVar3) {
      FUN_140023dd8(param_1,0x20);
      puVar2 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
      puVar3 = puVar2 + 3;
    }
    *param_1 = (ulonglong)puVar3;
    *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
    *(undefined8 **)param_1[6] = puVar2;
    param_1[6] = (ulonglong)(puVar2 + 1);
    puVar2[1] = 0;
    *puVar2 = &PTR_LAB_14a1fbb10;
    *(float *)(puVar2 + 2) = fVar7;
    *(uint *)((longlong)puVar2 + 0x14) = ~-(uint)bVar1 & 0x3f800000 | (uint)fVar4 & -(uint)bVar1;
  }
  return;
}



// FUNCTION 1431edcd9 FUN_1431edcd9 body=69 status=ok
// SIG undefined FUN_1431edcd9(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431edcd9(void)

{
  _DAT_14ca844e8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431edd1b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca844f0,1);
  return;
}



// FUNCTION 1431edd1e FUN_1431edd1e body=69 status=ok
// SIG undefined FUN_1431edd1e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431edd1e(void)

{
  _DAT_14ca84500 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431edd60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca84508,1);
  return;
}



// FUNCTION 1431edd63 FUN_1431edd63 body=69 status=ok
// SIG undefined FUN_1431edd63(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431edd63(void)

{
  _DAT_14ca84518 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431edda5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca84520,1);
  return;
}



// FUNCTION 1431edda8 FUN_1431edda8 body=69 status=ok
// SIG undefined FUN_1431edda8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431edda8(void)

{
  _DAT_14ca84530 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431eddea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca84538,1);
  return;
}



// FUNCTION 1431edded FUN_1431edded body=69 status=ok
// SIG undefined FUN_1431edded(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431edded(void)

{
  _DAT_14ca84548 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431ede2f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca84550,1);
  return;
}



// FUNCTION 1431ede32 FUN_1431ede32 body=69 status=ok
// SIG undefined FUN_1431ede32(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431ede32(void)

{
  _DAT_14ca84560 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431ede74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca84568,1);
  return;
}



// FUNCTION 1431ede77 FUN_1431ede77 body=69 status=ok
// SIG undefined FUN_1431ede77(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431ede77(void)

{
  _DAT_14ca84578 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431edeb9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca84580,1);
  return;
}



// FUNCTION 1431edec7 FUN_1431edec7 body=69 status=ok
// SIG undefined FUN_1431edec7(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431edec7(void)

{
  _DAT_14ca84598 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431edf09. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca845a0,1);
  return;
}



// FUNCTION 1431edf28 FUN_1431edf28 body=93 status=ok
// SIG undefined FUN_1431edf28(void)

void FUN_1431edf28(undefined8 param_1,longlong *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  char cVar3;
  
  cVar3 = FUN_141628ed8();
  if (cVar3 != '\0') {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14ca84600);
    FUN_1400daade(param_2);
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14ca84600);
  }
  puVar2 = (undefined8 *)*param_2;
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001431edf7a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar2)(puVar2,1);
      return;
    }
  }
  return;
}



// FUNCTION 1431edf91 FUN_1431edf91 body=78 status=ok
// SIG undefined FUN_1431edf91(void)

undefined8 FUN_1431edf91(uint param_1,char param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0x70;
  if (param_2 == '\0') {
    if ((param_1 & 1) != 0) {
      return 0x1000;
    }
    if ((param_1 & 4) != 0) {
      return 0x8200;
    }
    if ((param_1 >> 0x11 & 1) != 0) {
      return 0xc00;
    }
    if ((param_1 >> 0x12 & 1) != 0) {
      return 2;
    }
    if (((param_1 & 8) == 0) && (uVar1 = 0x80000, (param_1 >> 10 & 1) == 0)) {
      uVar1 = 0x70;
    }
  }
  return uVar1;
}



// FUNCTION 1431edfe4 FUN_1431edfe4 body=53 status=ok
// SIG undefined FUN_1431edfe4(void)

void FUN_1431edfe4(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined2 *puVar2;
  
  if (0 < *(int *)(param_1 + 1)) {
    if (*(int *)((undefined8 *)*param_1 + 1) == 0) {
      puVar2 = &DAT_149dfb77a;
    }
    else {
      puVar2 = *(undefined2 **)*param_1;
    }
    uVar1 = FUN_14052c20c(puVar2);
    FUN_1431d9992(uVar1);
    return;
  }
  return;
}



// FUNCTION 1431ee040 FUN_1431ee040 body=118 status=ok
// SIG undefined FUN_1431ee040(void)

void FUN_1431ee040(int *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *param_1;
  if ((((char)param_1[2] != '\x01') || (iVar1 == 0x60000000)) || (iVar1 == 0)) {
    *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60)
         = iVar1;
  }
  if (((uint)param_1[1] >> 0x1e & 1) == 0) {
    LOCK();
    DAT_14c844204 = DAT_14c844204 & (~param_1[1] | 0xffffff00U);
    UNLOCK();
    if ((param_1[1] == 2) &&
       (lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8),
       *(int *)(lVar2 + 0xc60) == 1)) {
      *(undefined4 *)(lVar2 + 0xc60) = 2;
      return;
    }
  }
  return;
}



// FUNCTION 1431ee0b6 FUN_1431ee0b6 body=196 status=ok
// SIG undefined FUN_1431ee0b6(void)

void FUN_1431ee0b6(undefined8 *param_1)

{
  int iVar1;
  longlong lVar2;
  
  if (*(char *)((longlong)param_1 + 0x19) == '\x01') {
    if (*(char *)(param_1 + 3) == '\x01') {
      (**(code **)(*DAT_14ca83900 + 800))();
    }
    *(undefined1 *)((longlong)param_1 + 0x19) = 0;
  }
  if (*(char *)((longlong)param_1 + 0x14) == '\x01') {
    iVar1 = *(int *)(param_1 + 1);
    if (((*(char *)(param_1 + 2) != '\x01') || (iVar1 == 0x60000000)) || (iVar1 == 0)) {
      *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0xc60) = iVar1;
    }
    if ((*(uint *)((longlong)param_1 + 0xc) >> 0x1e & 1) == 0) {
      LOCK();
      DAT_14c844204 = DAT_14c844204 & (~*(uint *)((longlong)param_1 + 0xc) | 0xffffff00);
      UNLOCK();
      if ((*(int *)((longlong)param_1 + 0xc) == 2) &&
         (lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8),
         *(int *)(lVar2 + 0xc60) == 1)) {
        *(undefined4 *)(lVar2 + 0xc60) = 2;
      }
    }
    *(undefined1 *)((longlong)param_1 + 0x14) = 0;
  }
  if ((LPCRITICAL_SECTION)*param_1 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)*param_1);
    *param_1 = 0;
  }
  return;
}



// FUNCTION 1431ee17a FUN_1431ee17a body=207 status=ok
// SIG undefined FUN_1431ee17a(void)

void FUN_1431ee17a(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined1 auStack_38 [39];
  undefined1 local_11;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (*(longlong *)(param_1 + 0x10) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_1 + 0x10) + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    local_11 = 1;
    FUN_1447439e4();
    puVar2 = *(undefined8 **)(param_1 + 0x10);
    if (puVar2 != (undefined8 *)0x0) {
      *(undefined8 *)(param_1 + 0x10) = 0;
      LOCK();
      piVar1 = (int *)(puVar2 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar2)(puVar2,1);
      }
      puVar2 = *(undefined8 **)(param_1 + 0x10);
      if (puVar2 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(puVar2 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puVar2)(puVar2,1);
        }
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431ee286 FUN_1431ee286 body=131 status=ok
// SIG undefined FUN_1431ee286(void)

void FUN_1431ee286(longlong param_1,longlong param_2)

{
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined4 local_40;
  longlong local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = 1;
  local_38 = param_1 + 0x10;
  (**(code **)(**(longlong **)(param_2 + 0x40) + 0x38))();
  local_40 = 1;
  local_48 = param_1 + 0x10;
  (**(code **)(**(longlong **)(param_2 + 0x40) + 0x40))();
  (**(code **)(*DAT_14ca83900 + 0xd0))(DAT_14ca83900,*(undefined8 *)(param_1 + 0x10));
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431ee334 FUN_1431ee334 body=146 status=ok
// SIG undefined FUN_1431ee334(void)

void FUN_1431ee334(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  byte bVar2;
  byte bVar3;
  byte *pbVar4;
  byte bVar5;
  undefined8 *puVar6;
  bool bVar7;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = *(undefined4 *)(param_1 + 0x10);
  uStack_34 = *(undefined4 *)(param_1 + 0x14);
  uStack_30 = *(undefined4 *)(param_1 + 0x18);
  uStack_2c = *(undefined4 *)(param_1 + 0x1c);
  (**(code **)(**(longlong **)(param_2 + 0x40) + 0x38))();
  if ((longlong)*(int *)(param_1 + 0x18) != 0) {
    puVar6 = *(undefined8 **)(param_1 + 0x10);
    puVar1 = puVar6 + *(int *)(param_1 + 0x18);
    do {
      pbVar4 = (byte *)*puVar6;
      bVar3 = *(byte *)(param_2 + 0x69);
      bVar5 = *pbVar4;
      do {
        LOCK();
        bVar2 = *pbVar4;
        bVar7 = bVar5 == bVar2;
        if (bVar7) {
          *pbVar4 = bVar5 & ~bVar3;
          bVar2 = bVar5;
        }
        bVar5 = bVar2;
        UNLOCK();
      } while (!bVar7);
      if (bVar5 == bVar3) {
        FUN_1400405d6();
      }
      puVar6 = puVar6 + 1;
    } while (puVar6 != puVar1);
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1431ee3c8 FUN_1431ee3c8 body=145 status=ok
// SIG undefined FUN_1431ee3c8(void)

void FUN_1431ee3c8(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  byte bVar2;
  byte *pbVar3;
  byte bVar4;
  byte bVar5;
  undefined8 *puVar6;
  bool bVar7;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = *(undefined4 *)(param_1 + 0x10);
  uStack_34 = *(undefined4 *)(param_1 + 0x14);
  uStack_30 = *(undefined4 *)(param_1 + 0x18);
  uStack_2c = *(undefined4 *)(param_1 + 0x1c);
  (**(code **)(**(longlong **)(param_2 + 0x40) + 0x40))();
  if ((longlong)*(int *)(param_1 + 0x18) != 0) {
    puVar6 = *(undefined8 **)(param_1 + 0x10);
    puVar1 = puVar6 + *(int *)(param_1 + 0x18);
    do {
      pbVar3 = (byte *)*puVar6;
      bVar5 = *(char *)(param_2 + 0x69) * '\x04';
      bVar4 = *pbVar3;
      do {
        LOCK();
        bVar2 = *pbVar3;
        bVar7 = bVar4 == bVar2;
        if (bVar7) {
          *pbVar3 = bVar4 & ~bVar5;
          bVar2 = bVar4;
        }
        bVar4 = bVar2;
        UNLOCK();
      } while (!bVar7);
      if (bVar4 == bVar5) {
        FUN_1400405d6();
      }
      puVar6 = puVar6 + 1;
    } while (puVar6 != puVar1);
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1431ee45a FUN_1431ee45a body=44 status=ok
// SIG undefined FUN_1431ee45a(void)

void FUN_1431ee45a(longlong param_1,longlong param_2)

{
  int *piVar1;
  
  (**(code **)(**(longlong **)(param_2 + 0x40) + 0xc0))
            (*(longlong **)(param_2 + 0x40),*(undefined8 *)(param_1 + 0x10));
  if (*(longlong *)(param_1 + 0x10) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_1 + 0x10) + 0x10);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  return;
}



// FUNCTION 1431ee4b6 FUN_1431ee4b6 body=42 status=ok
// SIG undefined FUN_1431ee4b6(void)

void FUN_1431ee4b6(longlong param_1)

{
  FUN_1474125f4();
  if (*(longlong *)(param_1 + 0x628) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1431ee4e4 FUN_1431ee4e4 body=53 status=ok
// SIG undefined FUN_1431ee4e4(void)

undefined8 * FUN_1431ee4e4(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a380d20;
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 1));
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1431ee51a FUN_1431ee51a body=25 status=ok
// SIG undefined FUN_1431ee51a(void)

void FUN_1431ee51a(void)

{
  FUN_14578fed8();
  FUN_14170c56a(&DAT_14ca83910);
  return;
}



// FUNCTION 1431ee534 FUN_1431ee534 body=25 status=ok
// SIG undefined FUN_1431ee534(void)

void FUN_1431ee534(void)

{
  FUN_14614309e();
  FUN_14170c56a(&DAT_14ca83980);
  return;
}



// FUNCTION 1431ee54e FUN_1431ee54e body=31 status=ok
// SIG undefined FUN_1431ee54e(void)

undefined8 FUN_1431ee54e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1431ee56e FUN_1431ee56e body=71 status=ok
// SIG undefined FUN_1431ee56e(void)

void FUN_1431ee56e(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  
  if ((*(byte *)(*(longlong *)(param_1 + 0x10) + 0xa0) & 1) == 0) {
    FUN_140082318(*(undefined8 *)(param_1 + 0x10));
  }
  puVar2 = *(undefined8 **)(param_1 + 0x10);
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001431ee5ab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar2)(puVar2,1);
      return;
    }
  }
  return;
}



// FUNCTION 1431ee5b6 FUN_1431ee5b6 body=330 status=ok
// SIG undefined FUN_1431ee5b6(void)

void FUN_1431ee5b6(byte *param_1,longlong param_2)

{
  byte bVar1;
  byte bVar2;
  longlong *plVar3;
  longlong *plVar4;
  ulonglong uVar5;
  
  bVar2 = *param_1;
  *(byte *)(param_2 + 0x69) = bVar2;
  if (param_1[1] == 0) {
    *(undefined8 *)(param_2 + 0x38) = 0;
    *(undefined8 *)(param_2 + 0x40) = 0;
    bVar2 = *param_1;
  }
  do {
    if (bVar2 == 0) {
      return;
    }
    bVar1 = -bVar2 & bVar2;
    uVar5 = (ulonglong)(bVar1 == 2);
    plVar3 = *(longlong **)(param_2 + 0x50 + uVar5 * 8);
    if (bVar1 == 2) {
      plVar4 = plVar3;
      if (plVar3 == (longlong *)0x0) {
        plVar4 = (longlong *)
                 (**(code **)(*DAT_14ca83900 + 0x3f0))
                           (DAT_14ca83900,2,~(-1 << ((byte)DAT_14c760da4 & 0x1f)));
        *(longlong **)(param_2 + 0x58) = plVar4;
      }
      plVar3 = plVar4;
      if (param_1[1] == 1) {
        plVar3 = (longlong *)0x0;
LAB_1431ee683:
        *(longlong **)(param_2 + 0x38) = plVar3;
        *(longlong **)(param_2 + 0x40) = plVar4;
        plVar3 = plVar4;
      }
    }
    else if (bVar1 == 1) {
      if (plVar3 == (longlong *)0x0) {
        if ((((*(char *)(param_2 + 0x65) == '\x01') && ((*(byte *)(param_2 + 0x17b) & 0x20) == 0))
            && (*(char *)(param_2 + 0x68) == '\0')) &&
           ((*(char *)(param_2 + 0x66) == '\0' &&
            ((*(char *)(param_2 + 0x67) != '\x01' || (DAT_14ca84f61 == '\x01')))))) {
          plVar3 = (longlong *)
                   (**(code **)(*DAT_14ca83900 + 0x3f0))
                             (DAT_14ca83900,1,~(-1 << ((byte)DAT_14c760da4 & 0x1f)));
        }
        else {
          plVar3 = (longlong *)(**(code **)(*DAT_14ca83900 + 1000))();
        }
        *(longlong **)(param_2 + 0x50) = plVar3;
      }
      plVar4 = plVar3;
      if (param_1[1] != 0) goto LAB_1431ee683;
    }
    (**(code **)(*plVar3 + 200))(plVar3,*(undefined4 *)(param_2 + 0x17c));
    plVar3 = *(longlong **)(param_2 + 0x50 + uVar5 * 8);
    (**(code **)(*plVar3 + 0x130))(plVar3,param_2);
    bVar2 = bVar2 - 1 & bVar2;
  } while( true );
}



// FUNCTION 1431ee70a FUN_1431ee70a body=673 status=ok
// SIG undefined FUN_1431ee70a(void)

void FUN_1431ee70a(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  int *piVar1;
  undefined8 uVar2;
  code *pcVar3;
  uint uVar4;
  byte bVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined8 *puVar11;
  bool bVar12;
  undefined1 auStack_88 [32];
  undefined8 *local_68;
  undefined8 *local_60;
  undefined8 local_58;
  int local_50;
  int local_4c;
  char local_48;
  undefined1 local_44;
  char local_40;
  char local_3f;
  byte local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar2 = *param_1;
  puVar11 = (undefined8 *)param_1[1];
  local_38 = 0;
  if (*(int *)((longlong)puVar11 + 0x7c) == 0) {
    local_58 = &DAT_14ca83c98;
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14ca83c98);
    local_44 = 0;
    local_3f = '\0';
    bVar5 = 2;
    if (DAT_14c842752 == '\x01') {
      local_4c = 0x20;
      local_48 = '\x01';
      lVar10 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      if (*(int *)(lVar10 + 0xc60) == 1) {
        FUN_140ad26c0();
        GetCurrentThreadId();
      }
      piVar1 = (int *)(lVar10 + 0xc60);
      LOCK();
      uVar4 = DAT_14c844204 >> 5;
      DAT_14c844204 = DAT_14c844204 | 0x20;
      UNLOCK();
      if ((uVar4 & 1) != 0) {
        LOCK();
        DAT_14c844204 = 0;
        UNLOCK();
      }
      local_50 = *piVar1;
      if (((local_48 != '\x01') || (local_50 == 0x60000000)) || (local_50 == 0)) {
        *piVar1 = local_4c;
      }
      local_44 = 1;
      if ((local_3f == '\x01') && (local_40 == '\x01')) {
        (**(code **)(*DAT_14ca83900 + 800))();
      }
      local_40 = '\x01';
      (**(code **)(*DAT_14ca83900 + 0x318))();
      local_3f = '\x01';
    }
  }
  else {
    bVar5 = local_38;
    if (*(int *)((longlong)puVar11 + 0x7c) != DAT_14c7585d4) {
      local_58._4_4_ = 0x40000020;
      local_50 = CONCAT31(local_50._1_3_,1);
      piVar1 = (int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60);
      iVar6 = *piVar1;
      if (iVar6 == 1) {
        FUN_140ad26c0();
        GetCurrentThreadId();
        iVar6 = *piVar1;
      }
      local_58 = (undefined *)CONCAT44(local_58._4_4_,iVar6);
      bVar5 = 1;
      if ((iVar6 == 0x60000000) || (iVar6 == 0)) {
        *piVar1 = 0x40000020;
      }
    }
  }
  do {
    local_38 = bVar5;
    if ((longlong)*(int *)(puVar11 + 0xd) != 0) {
      puVar8 = puVar11 + 8;
      if ((undefined8 *)puVar11[0xc] != (undefined8 *)0x0) {
        puVar8 = (undefined8 *)puVar11[0xc];
      }
      lVar10 = 0;
      do {
        if ((*(longlong *)((longlong)puVar8 + lVar10) != 0) &&
           ((*(byte *)(*(longlong *)((longlong)puVar8 + lVar10) + 0xa0) & 1) == 0)) {
          FUN_1431eb31e(uVar2,&local_60,puVar11);
          uVar2 = *param_3;
          local_68 = local_60;
          if (local_60 != (undefined8 *)0x0) {
            LOCK();
            *(int *)(local_60 + 1) = *(int *)(local_60 + 1) + 1;
            UNLOCK();
          }
          FUN_14002c244(uVar2,&local_68);
          if (local_60 != (undefined8 *)0x0) {
            LOCK();
            piVar1 = (int *)(local_60 + 1);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)*local_60)(local_60,1);
            }
          }
          goto LAB_1431ee93a;
        }
        lVar10 = lVar10 + 8;
      } while ((longlong)*(int *)(puVar11 + 0xd) * 8 != lVar10);
    }
    pcVar3 = (code *)*puVar11;
    plVar9 = puVar11 + 4;
    if ((longlong *)puVar11[2] != (longlong *)0x0) {
      plVar9 = (longlong *)puVar11[2];
    }
    uVar7 = (**(code **)(*plVar9 + 8))();
    (*pcVar3)(uVar7);
    LOCK();
    puVar8 = (undefined8 *)puVar11[0xe];
    bVar12 = puVar8 == (undefined8 *)0x0;
    if (bVar12) {
      puVar11[0xe] = puVar11;
      puVar8 = (undefined8 *)0x0;
    }
    UNLOCK();
    FUN_1447177f6(puVar11);
    puVar11 = puVar8;
    bVar5 = local_38;
  } while (!bVar12);
LAB_1431ee93a:
  (*(code *)(&PTR_FUN_14a380bf0)[local_38])();
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1431ee9c2 FUN_1431ee9c2 body=29 status=ok
// SIG undefined FUN_1431ee9c2(void)

undefined8 FUN_1431ee9c2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1431ee9e0 FUN_1431ee9e0 body=199 status=ok
// SIG undefined FUN_1431ee9e0(void)

void FUN_1431ee9e0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  plVar1 = (longlong *)*param_1;
  lVar2 = param_1[1];
  if (*(longlong *)(lVar2 + 0x50) == 0) {
    *(longlong *)(lVar2 + 0x50) = *plVar1;
  }
  if (*(longlong *)(lVar2 + 0x58) == 0) {
    *(longlong *)(lVar2 + 0x58) = plVar1[2];
  }
  if (*(longlong *)(lVar2 + 0x48) == 0) {
    *(longlong *)(lVar2 + 0x48) = plVar1[4];
  }
  *(undefined1 *)(lVar2 + 0x69) = 0;
  *(undefined1 *)(lVar2 + 100) = 1;
  *(undefined4 *)(lVar2 + 0x17c) = *(undefined4 *)(lVar2 + 0x180);
  puVar4 = *(undefined8 **)(lVar2 + 0x28);
  while (puVar4 != (undefined8 *)0x0) {
    puVar3 = (undefined8 *)puVar4[1];
    (**(code **)*puVar4)(puVar4,lVar2);
    puVar4 = puVar3;
  }
  if (*plVar1 == 0) {
    *plVar1 = *(longlong *)(lVar2 + 0x50);
  }
  if (plVar1[2] == 0) {
    plVar1[2] = *(longlong *)(lVar2 + 0x58);
  }
  plVar1[4] = *(longlong *)(lVar2 + 0x48);
  FUN_1431eaab6(plVar1 + 9,lVar2 + 0x248);
  if (lVar2 == 0) {
    return;
  }
  FUN_1431eb604(lVar2);
  FUN_1400020a8(lVar2);
  return;
}



// FUNCTION 1431eeac6 FUN_1431eeac6 body=12 status=ok
// SIG undefined FUN_1431eeac6(void)

void FUN_1431eeac6(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001431eeacf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1431eead2 FUN_1431eead2 body=29 status=ok
// SIG undefined FUN_1431eead2(void)

undefined8 FUN_1431eead2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1431eeaf0 FUN_1431eeaf0 body=223 status=ok
// SIG undefined FUN_1431eeaf0(void)

void FUN_1431eeaf0(longlong *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined8 uStack_50;
  longlong local_48;
  longlong local_38;
  longlong lStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  param_1 = (longlong *)*param_1;
  local_38 = 0;
  lStack_30 = 0;
  local_58 = 0;
  uStack_50 = 0;
  lVar5 = 0;
  do {
    uVar1 = uStack_50;
    lVar2 = *(longlong *)((longlong)param_1 + lVar5);
    if (lVar2 != 0) {
      lVar4 = (longlong)(int)uStack_50;
      uVar3 = (int)uStack_50 + 1;
      uStack_50 = CONCAT44(uStack_50._4_4_,uVar3);
      if (uStack_50._4_4_ < uVar3) {
        FUN_144ada128(&local_58,uVar1 & 0xffffffff);
        lVar2 = *(longlong *)((longlong)param_1 + lVar5);
      }
      *(longlong *)(local_58 + lVar4 * 8) = lVar2;
    }
    lVar5 = lVar5 + 0x10;
  } while (lVar5 != 0x20);
  if (DAT_14ca83900 != (longlong *)0x0) {
    local_48 = param_1[4];
    (**(code **)(*DAT_14ca83900 + 0x400))(DAT_14ca83900,&local_58,&local_38);
    if (*param_1 != 0) {
      param_1[1] = local_38;
    }
    if (param_1[2] != 0) {
      param_1[3] = lStack_30;
    }
  }
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431eebee FUN_1431eebee body=12 status=ok
// SIG undefined FUN_1431eebee(void)

void FUN_1431eebee(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001431eebf7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1431eebfa FUN_1431eebfa body=29 status=ok
// SIG undefined FUN_1431eebfa(void)

undefined8 FUN_1431eebfa(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1431eec18 FUN_1431eec18 body=1044 status=ok
// SIG undefined FUN_1431eec18(void)

void FUN_1431eec18(longlong *param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  undefined1 uVar7;
  uint uVar8;
  void *_Dst;
  undefined4 *puVar9;
  char cVar10;
  undefined *puVar11;
  undefined ***pppuVar12;
  undefined4 uVar13;
  int iVar14;
  longlong lVar15;
  bool bVar16;
  undefined1 auStack_b8 [32];
  code *local_98 [2];
  undefined ***local_88;
  undefined **local_78;
  longlong local_70;
  longlong local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar2 = *param_1;
  lVar3 = param_1[1];
  cVar10 = *(char *)(lVar2 + 0x55);
  *(char *)(lVar3 + 0x65) = cVar10;
  _Dst = *(void **)(lVar2 + 0x48);
  if (_Dst != (void *)0x0) {
    if (*(char *)(lVar2 + 0x54) == '\x01') {
      if ((*(char *)((longlong)_Dst + 0x44) == '\0') ||
         ((((cVar10 != '\0' && ((*(byte *)(lVar3 + 0x17b) & 0x20) == 0)) &&
           ((*(char *)(lVar3 + 0x68) == '\0' && (*(char *)(lVar3 + 0x66) == '\0')))) &&
          ((*(char *)(lVar3 + 0x67) != '\x01' || (DAT_14ca84f61 != '\0')))))) {
LAB_1431eecb2:
        uVar8 = *(uint *)(lVar2 + 0x50);
        if ((-1 < (int)uVar8) &&
           ((uVar8 == 0 ||
            ((uint)(*(int *)(lVar3 + 0x60) + *(int *)((longlong)_Dst + 0x40)) <= uVar8))))
        goto LAB_1431eed4f;
      }
    }
    else {
      if (((((cVar10 == '\0') || ((*(byte *)(lVar3 + 0x17b) & 0x20) != 0)) ||
           (*(char *)(lVar3 + 0x68) != '\0')) || (*(char *)(lVar3 + 0x66) != '\0')) ||
         ((*(char *)(lVar3 + 0x67) == '\x01' && (DAT_14ca84f61 != '\x01')))) {
        cVar10 = '\0';
      }
      else {
        cVar10 = '\x01';
      }
      if (*(char *)((longlong)_Dst + 0x44) == cVar10) goto LAB_1431eecb2;
    }
    FUN_144769fc2(lVar2);
    _Dst = *(void **)(lVar2 + 0x48);
    if (_Dst != (void *)0x0) goto LAB_1431eed4f;
  }
  _Dst = (void *)FUN_14001cc68(0x108);
  memset(_Dst,0,0x108);
  iVar14 = *(int *)(lVar2 + 0x10);
  *(uint *)(lVar2 + 0x10) = iVar14 + 1U;
  if (*(uint *)(lVar2 + 0x14) < iVar14 + 1U) {
    FUN_144ad9fc6(lVar2 + 8,iVar14);
  }
  *(void **)(*(longlong *)(lVar2 + 8) + (longlong)iVar14 * 8) = _Dst;
  *(void **)(lVar2 + 0x48) = _Dst;
  if ((((*(char *)(lVar3 + 0x65) == '\x01') && ((*(byte *)(lVar3 + 0x17b) & 0x20) == 0)) &&
      (*(char *)(lVar3 + 0x68) == '\0')) &&
     ((*(char *)(lVar3 + 0x66) == '\0' &&
      ((*(char *)(lVar3 + 0x67) != '\x01' || (DAT_14ca84f61 == '\x01')))))) {
    uVar7 = 1;
  }
  else {
    uVar7 = 0;
  }
  *(undefined1 *)((longlong)_Dst + 0x44) = uVar7;
LAB_1431eed4f:
  *(int *)((longlong)_Dst + 0x40) = *(int *)((longlong)_Dst + 0x40) + *(int *)(lVar3 + 0x60);
  local_38 = (undefined4 *)0x0;
  local_30 = 0x400000000;
  if (((((*(char *)(lVar3 + 0x65) == '\x01') && ((*(byte *)(lVar3 + 0x17b) & 0x20) == 0)) &&
       ((*(char *)(lVar3 + 0x68) == '\0' && (*(char *)(lVar3 + 0x66) == '\0')))) &&
      ((*(char *)(lVar3 + 0x67) != '\x01' || (DAT_14ca84f61 != '\0')))) ||
     (&local_58 == (undefined4 *)(lVar2 + 0x18))) {
    uVar8 = 4;
    iVar14 = 0;
  }
  else {
    FUN_144717c65(&local_58,0);
    puVar9 = *(undefined4 **)(lVar2 + 0x38);
    if (puVar9 == (undefined4 *)0x0) {
      local_58 = *(undefined4 *)(lVar2 + 0x18);
      uStack_54 = *(undefined4 *)(lVar2 + 0x1c);
      uStack_50 = *(undefined4 *)(lVar2 + 0x20);
      uStack_4c = *(undefined4 *)(lVar2 + 0x24);
      local_48 = *(undefined8 *)(lVar2 + 0x28);
      uStack_40 = *(undefined8 *)(lVar2 + 0x30);
    }
    if (local_38 != (undefined4 *)0x0) {
      FUN_1400020a8();
      puVar9 = *(undefined4 **)(lVar2 + 0x38);
    }
    *(undefined8 *)(lVar2 + 0x38) = 0;
    iVar14 = *(int *)(lVar2 + 0x40);
    uVar8 = *(uint *)(lVar2 + 0x44);
    local_30 = (ulonglong)uVar8 << 0x20;
    *(undefined8 *)(lVar2 + 0x40) = 0x400000000;
    local_38 = puVar9;
  }
  local_30 = CONCAT44(local_30._4_4_,iVar14 + 1U);
  if (uVar8 < iVar14 + 1U) {
    FUN_14476a5c8(&local_58,iVar14);
  }
  puVar9 = local_38;
  if (local_38 == (undefined4 *)0x0) {
    puVar9 = &local_58;
  }
  *(undefined8 **)(puVar9 + (longlong)iVar14 * 2) = DAT_14ca85440;
  if (DAT_14ca85440 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(DAT_14ca85440 + 1) = *(int *)(DAT_14ca85440 + 1) + 1;
    UNLOCK();
  }
  puVar5 = DAT_14ca85440;
  if ((*(longlong *)(lVar3 + 0x70) != 0) &&
     (puVar4 = *(undefined8 **)(*(longlong *)(lVar3 + 0x70) + 0x10), DAT_14ca85440 != puVar4)) {
    DAT_14ca85440 = puVar4;
    if (puVar4 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(puVar4 + 1) = *(int *)(puVar4 + 1) + 1;
      UNLOCK();
    }
    if (puVar5 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar5 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar5)(puVar5,1);
      }
    }
  }
  uVar6 = local_30;
  lVar15 = (longlong)(int)local_30;
  uVar8 = (int)local_30 + 1;
  local_30 = CONCAT44(local_30._4_4_,uVar8);
  if (local_30._4_4_ < uVar8) {
    FUN_14476a5c8(&local_58,uVar6 & 0xffffffff);
  }
  puVar9 = &local_58;
  if (local_38 != (undefined4 *)0x0) {
    puVar9 = local_38;
  }
  *(longlong *)(puVar9 + lVar15 * 2) = DAT_14ca85448;
  if (DAT_14ca85448 != 0) {
    LOCK();
    *(int *)(DAT_14ca85448 + 8) = *(int *)(DAT_14ca85448 + 8) + 1;
    UNLOCK();
  }
  local_70 = *(longlong *)(lVar2 + 0x48);
  local_88 = (undefined ***)0x0;
  local_78 = &PTR_LAB_14a380d80;
  local_98[0] = FUN_1431ee9e0;
  if (DAT_14c842750 == '\0') {
    puVar11 = &DAT_14ca85420;
    uVar13 = DAT_14c7585d4;
  }
  else {
    bVar16 = *(char *)(local_70 + 0x44) == '\0';
    uVar13 = 0x6ff;
    if (bVar16) {
      uVar13 = 0;
    }
    puVar11 = &DAT_14ca85420;
    if (!bVar16) {
      puVar11 = (undefined *)(local_70 + 0x28);
    }
  }
  local_68 = lVar3;
  FUN_140072b84(puVar11,uVar13,&local_58,local_98);
  if (local_98[0] != (code *)0x0) {
    pppuVar12 = local_88;
    if (local_88 == (undefined ***)0x0) {
      pppuVar12 = &local_78;
    }
    (*(code *)(*pppuVar12)[2])();
  }
  puVar9 = &local_58;
  if (local_38 != (undefined4 *)0x0) {
    puVar9 = local_38;
  }
  FUN_144717c65(puVar9,local_30 & 0xffffffff);
  if (local_38 != (undefined4 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1431ef04c FUN_1431ef04c body=12 status=ok
// SIG undefined FUN_1431ef04c(void)

void FUN_1431ef04c(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001431ef055. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1431ef058 FUN_1431ef058 body=29 status=ok
// SIG undefined FUN_1431ef058(void)

undefined8 FUN_1431ef058(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1431ef076 FUN_1431ef076 body=252 status=ok
// SIG undefined FUN_1431ef076(void)

void FUN_1431ef076(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined ***pppuVar6;
  undefined4 uVar7;
  undefined1 auStack_88 [32];
  code *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  longlong local_40;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar3 = *param_1;
  FUN_144769fc2(param_1[1]);
  local_40 = param_1[1];
  local_58 = (undefined ***)0x0;
  local_48 = &PTR_LAB_14a380e00;
  local_68[0] = FUN_1431ef1bc;
  uVar7 = 0;
  if (DAT_14c842750 == '\0') {
    uVar7 = DAT_14c7585d4;
  }
  plVar2 = (longlong *)(lVar3 + 0x358);
  FUN_140072b84(plVar2,uVar7,local_40 + 0x18,local_68);
  if (local_68[0] != (code *)0x0) {
    pppuVar6 = local_58;
    if (local_58 == (undefined ***)0x0) {
      pppuVar6 = &local_48;
    }
    (*(code *)(*pppuVar6)[2])();
  }
  if (*plVar2 != 0) {
    FUN_1447177f6();
    *plVar2 = 0;
  }
  lVar4 = *(longlong *)(lVar3 + 0x360);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
    UNLOCK();
  }
  puVar5 = *(undefined8 **)(lVar3 + 0x380);
  *(longlong *)(lVar3 + 0x380) = lVar4;
  if (puVar5 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar5 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar5)(puVar5,1);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431ef192 FUN_1431ef192 body=12 status=ok
// SIG undefined FUN_1431ef192(void)

void FUN_1431ef192(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001431ef19b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1431ef19e FUN_1431ef19e body=29 status=ok
// SIG undefined FUN_1431ef19e(void)

undefined8 FUN_1431ef19e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1431ef1bc FUN_1431ef1bc body=1851 status=ok
// SIG undefined FUN_1431ef1bc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431ef1bc(longlong *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  byte bVar8;
  char cVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  int *piVar15;
  longlong *plVar16;
  longlong *plVar17;
  longlong *plVar18;
  longlong lVar19;
  bool bVar20;
  undefined1 auStack_c8 [40];
  longlong local_a0;
  ulonglong uStack_98;
  undefined8 local_90;
  longlong local_88;
  undefined8 uStack_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  param_1 = (longlong *)*param_1;
  local_88 = 0;
  uStack_80 = 0;
  if ((longlong)(int)param_1[2] != 0) {
    plVar18 = (longlong *)param_1[1];
    plVar16 = plVar18 + (int)param_1[2];
    do {
      bVar8 = 3;
      do {
        uVar6 = uStack_80;
        lVar11 = *plVar18;
        lVar12 = (ulonglong)((-bVar8 & bVar8) == 2) * 0x10;
        if (*(longlong *)(lVar11 + 8 + lVar12) != 0) {
          lVar19 = (longlong)(int)uStack_80;
          uVar10 = (int)uStack_80 + 1;
          uStack_80 = CONCAT44(uStack_80._4_4_,uVar10);
          if (uStack_80._4_4_ < uVar10) {
            FUN_144ada28a(&local_88,uVar6 & 0xffffffff);
          }
          *(undefined8 *)(local_88 + lVar19 * 8) = *(undefined8 *)(lVar12 + lVar11 + 8);
        }
        bVar8 = bVar8 - 1 & bVar8;
      } while (bVar8 != 0);
      FUN_1431eaab6(&DAT_14ca85488,*plVar18 + 0x48);
      plVar18 = plVar18 + 1;
    } while (plVar18 != plVar16);
  }
  if (DAT_14ca83900 != (longlong *)0x0) {
    local_a0 = local_88;
    uStack_98 = uStack_80;
    local_88 = 0;
    uStack_80 = 0;
    local_90 = 0;
    (**(code **)(*DAT_14ca83900 + 0x408))(DAT_14ca83900,&local_a0);
    if (local_a0 != 0) {
      FUN_1400020a8();
    }
  }
  DAT_14ca83be8 = 0.0 < DAT_14ca83bec;
  if (0.0 < DAT_14ca83bec) {
    lVar11 = _Query_perf_frequency();
    _DAT_14ca83be0 = _Query_perf_counter();
    if (lVar11 == 10000000) {
      _DAT_14ca83be0 = _DAT_14ca83be0 * 100;
    }
    else if (lVar11 == 24000000) {
      _DAT_14ca83be0 =
           ((_DAT_14ca83be0 % 24000000) * 1000000000) / 24000000 +
           (_DAT_14ca83be0 / 24000000) * 1000000000;
    }
    else {
      _DAT_14ca83be0 =
           ((_DAT_14ca83be0 % lVar11) * 1000000000) / lVar11 +
           (_DAT_14ca83be0 / lVar11) * 1000000000;
    }
  }
  plVar16 = param_1 + 0x24;
  do {
    if (DAT_14ca83be8 == '\x01') {
      lVar11 = _Query_perf_frequency();
      lVar12 = _Query_perf_counter();
      if (lVar11 == 10000000) {
        lVar12 = lVar12 * 100;
      }
      else if (lVar11 == 24000000) {
        lVar12 = ((lVar12 % 24000000) * 1000000000) / 24000000 + (lVar12 / 24000000) * 1000000000;
      }
      else {
        lVar12 = ((lVar12 % lVar11) * 1000000000) / lVar11 + (lVar12 / lVar11) * 1000000000;
      }
      if (DAT_14ca83bec < (float)(longlong)(((float)(lVar12 - _DAT_14ca83be0) / 1e+09) * 1000.0)) {
LAB_1431ef6b5:
        DAT_14ca83be8 = 0;
        uVar10 = *(uint *)(param_1 + 0x23);
        if ((uVar10 & 2) != 0 && DAT_14ca83900 != (longlong *)0x0) {
          (**(code **)(*DAT_14ca83900 + 0x410))();
          uVar10 = *(uint *)(param_1 + 0x23);
        }
        if ((uVar10 & 8) != 0) {
          local_a0 = CONCAT44(local_a0._4_4_,DAT_14ca85548);
          DAT_14ca85548 = DAT_14ca85548 + 1;
          (**(code **)(*DAT_14ca83900 + 0x40))();
          piVar15 = &DAT_14ca8549c;
          lVar11 = 0;
          do {
            iVar1 = piVar15[-3];
            iVar2 = piVar15[-4];
            iVar3 = piVar15[-2];
            iVar4 = piVar15[-1];
            iVar5 = *piVar15;
            *(int *)((longlong)&DAT_14ca84ae0 + lVar11) = piVar15[-5];
            *(int *)((longlong)&DAT_14ca84b00 + lVar11) = iVar1 + iVar2 + iVar3 + iVar4 + iVar5;
            lVar11 = lVar11 + 4;
            piVar15 = piVar15 + 6;
          } while (lVar11 != 0x20);
          memset(&DAT_14ca85488,0,0xc0);
        }
        LOCK();
        *(int *)(*param_1 + 8) = *(int *)(*param_1 + 8) + 1;
        UNLOCK();
        local_a0 = CONCAT71(local_a0._1_7_,1);
        FUN_1447439e4();
        if (param_1 != (longlong *)0x0) {
          if (*plVar16 != 0) {
            FUN_1400020a8();
          }
          plVar16 = param_1 + 3;
          if ((longlong *)param_1[7] != (longlong *)0x0) {
            plVar16 = (longlong *)param_1[7];
          }
          FUN_144717c65(plVar16,(int)param_1[8]);
          if (param_1[7] != 0) {
            FUN_1400020a8();
          }
          FUN_144ad9e3d(param_1[1],(int)param_1[2]);
          if (param_1[1] != 0) {
            FUN_1400020a8();
          }
          puVar14 = (undefined8 *)*param_1;
          if (puVar14 != (undefined8 *)0x0) {
            LOCK();
            piVar15 = (int *)(puVar14 + 1);
            *piVar15 = *piVar15 + -1;
            UNLOCK();
            if (*piVar15 == 0) {
              (**(code **)*puVar14)(puVar14,1);
            }
          }
          FUN_1400020a8(param_1);
        }
        if (local_88 != 0) {
          FUN_1400020a8();
        }
        if ((local_70 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
    }
    if ((~*(uint *)(param_1 + 0x23) & 6) == 0) {
      FUN_1431eb46e(plVar16,(char)param_1[0x26]);
    }
    if ((longlong)(int)param_1[0x25] == 0) goto LAB_1431ef6b5;
    plVar18 = (longlong *)*plVar16;
    plVar17 = plVar18 + (int)param_1[0x25];
    bVar20 = false;
    uVar10 = 0;
    do {
      puVar14 = (undefined8 *)*plVar18;
      if (DAT_14ca83be8 == '\x01') {
        if (!bVar20) {
          if ((uVar10 & 0x1f) == 0) {
            bVar20 = false;
            uVar10 = uVar10 + 1;
          }
          else {
            lVar11 = _Query_perf_frequency();
            lVar12 = _Query_perf_counter();
            if (lVar11 == 10000000) {
              lVar12 = lVar12 * 100;
            }
            else if (lVar11 == 24000000) {
              lVar12 = ((lVar12 % 24000000) * 1000000000) / 24000000 +
                       (lVar12 / 24000000) * 1000000000;
            }
            else {
              lVar12 = ((lVar12 % lVar11) * 1000000000) / lVar11 + (lVar12 / lVar11) * 1000000000;
            }
            bVar20 = DAT_14ca83bec <=
                     (float)(longlong)(((float)(lVar12 - _DAT_14ca83be0) / 1e+09) * 1000.0);
            uVar10 = uVar10 + 1;
          }
          goto LAB_1431ef469;
        }
        puVar13 = (undefined8 *)FUN_14001cc68(0x10,8);
        *puVar13 = 0;
        puVar13[1] = puVar14;
        puVar14 = DAT_14ca843c0;
        do {
          *puVar13 = puVar14;
          LOCK();
          bVar20 = puVar14 != DAT_14ca843c0;
          puVar7 = puVar13;
          if (bVar20) {
            puVar14 = DAT_14ca843c0;
            puVar7 = DAT_14ca843c0;
          }
          DAT_14ca843c0 = puVar7;
          UNLOCK();
        } while (bVar20);
        bVar20 = true;
      }
      else {
LAB_1431ef469:
        if ((*(uint *)(puVar14 + 1) & 0x3fffffff) == 0) {
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110)
               < DAT_14ca843b8) && (FUN_144b3d300(&DAT_14ca843b8), DAT_14ca843b8 == -1)) {
            if (DAT_14c8407a8 == (longlong *)0x0) {
              FUN_1414b00ea();
            }
            DAT_14ca843b0 =
                 (longlong *)
                 (**(code **)(*DAT_14c8407a8 + 200))
                           (DAT_14c8407a8,L"r.Gbx.D3D12.EnableRHIGarbageThread",1);
            _Init_thread_footer(&DAT_14ca843b8);
          }
          if (puVar14 == (undefined8 *)0x0 || DAT_14ca843b0 == (longlong *)0x0) {
LAB_1431ef4f3:
            cVar9 = '\0';
          }
          else {
            bVar8 = *(byte *)((longlong)puVar14 + 0xc);
            cVar9 = (**(code **)(*DAT_14ca843b0 + 0xa8))();
            if (cVar9 == '\0') goto LAB_1431ef4f3;
            cVar9 = '\0';
            if ((bVar8 < 0x15) && ((0x1c0240U >> (bVar8 & 0x1f) & 1) != 0)) {
              if (DAT_14ca81488 == (longlong *)0x0) goto LAB_1431ef4f3;
              cVar9 = (**(code **)(*DAT_14ca81488 + 0x30))(DAT_14ca81488,puVar14);
            }
          }
          if (puVar14 != (undefined8 *)0x0 && cVar9 == '\0') {
            (**(code **)*puVar14)(puVar14,1);
          }
        }
        else {
          LOCK();
          *(uint *)(puVar14 + 1) = *(uint *)(puVar14 + 1) ^ 0x40000000;
          UNLOCK();
        }
      }
      plVar18 = plVar18 + 1;
    } while (plVar18 != plVar17);
    *(undefined4 *)(param_1 + 0x25) = 0;
    if (*(int *)((longlong)param_1 + 300) < 0) {
      FUN_14741461c(plVar16);
    }
  } while( true );
}



// FUNCTION 1431ef916 FUN_1431ef916 body=12 status=ok
// SIG undefined FUN_1431ef916(void)

void FUN_1431ef916(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001431ef91f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1431ef922 FUN_1431ef922 body=29 status=ok
// SIG undefined FUN_1431ef922(void)

undefined8 FUN_1431ef922(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1431ef940 FUN_1431ef940 body=110 status=ok
// SIG undefined FUN_1431ef940(void)

void FUN_1431ef940(longlong param_1,undefined8 param_2)

{
  void *_Dst;
  
  _Dst = (void *)(**(code **)(*DAT_14ca83900 + 0x4a0))
                           (DAT_14ca83900,param_2,*(undefined8 *)(param_1 + 0x10),
                            *(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 0x28),1);
  memcpy(_Dst,*(void **)(param_1 + 0x20),(ulonglong)*(uint *)(param_1 + 0x28));
  FUN_1400020a8(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x0001431ef9ab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14ca83900 + 0x4a8))(DAT_14ca83900,param_2,*(undefined8 *)(param_1 + 0x10));
  return;
}



// FUNCTION 1431ef9ae FUN_1431ef9ae body=4207 status=ok
// SIG undefined FUN_1431ef9ae(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431ef9ae(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_ac;
  code *local_a8;
  int local_a0;
  undefined1 local_9c;
  undefined8 local_98;
  undefined **local_88;
  code *local_80;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_a8 = (code *)0x8000000149e0334a;
  local_ac = 3;
  local_a0 = FUN_14577453c();
  local_9c = 1;
  FUN_14171c728(&DAT_14ca83908,&local_a8);
  local_98 = 0;
  local_88 = &PTR_LAB_149e01e20;
  local_80 = FUN_1431ee51a;
  local_a8 = FUN_140d11fbe;
  FUN_141293f6e(&DAT_14ca83978,6,&local_a8);
  local_98 = 0;
  local_88 = &PTR_LAB_149e01e20;
  local_80 = FUN_1431ee534;
  local_a8 = FUN_140d11fbe;
  FUN_141293f6e(&DAT_14ca839e8,6,&local_a8);
  local_a8 = (code *)((ulonglong)local_a8 & 0xffffffff00000000);
  local_c8._0_4_ = 0;
  FUN_14078dbce(&DAT_14ca839f0,L"r.DisableEngineAndAppRegistration",&local_a8,
                L"If true, disables engine and app registration, to disable GPU driver optimizations during debugging and development\nChanges will only take effect in new game/editor instances - can\'t be changed at runtime.\n"
               );
  atexit(FUN_1431ea760);
  local_a8 = (code *)CONCAT44(local_a8._4_4_,0xffffffff);
  local_c8._0_4_ = 0x24;
  FUN_14078dbce(&DAT_14ca83a08,L"r.GraphicsAdapter",&local_a8,
                L"User request to pick a specific graphics adapter (e.g. when using a integrated graphics card with a discrete one)\nFor Windows D3D, unless a specific adapter is chosen we reject Microsoft adapters because we don\'t want the software emulation.\nThis takes precedence over -prefer{AMD|NVidia|Intel} when the value is >= 0.\n -2: Take the first one that fulfills the criteria\n -1: Favour non integrated because there are usually faster (default)\n  0: Adapter #0\n  1: Adapter #1, ..."
               );
  atexit(FUN_1431ea7a5);
  local_a8 = (code *)0x0;
  local_a0 = 0;
  FUN_1446efa72(&local_a8,0,2,0x10);
  local_a0 = 2;
  *(undefined ***)local_a8 = &PTR_LAB_14a177500;
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
  *(longlong *)(local_a8 + 0x10) = lVar2;
  *(undefined ***)local_a8 = &PTR_FUN_14a380e50;
  *(code **)(local_a8 + 0x18) = FUN_1431edfe4;
  local_c8 = (code **)((ulonglong)local_c8._4_4_ << 0x20);
  FUN_14156bb10(&DAT_14ca83a20,L"r.RHISetGPUCaptureOptions",
                L"Utility function to change multiple CVARs useful when profiling or debugging GPU rendering. Setting to 1 or 0 will guarantee all options are in the appropriate state.\nr.showmaterialdrawevents, toggledrawevents."
                ,&local_a8);
  if (local_a0 == 0) {
LAB_1431efbba:
    if (local_a8 != (code *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_a8 != (code *)0x0) {
    (*(code *)**(undefined8 **)local_a8)(local_a8,0);
    FUN_1446efa72(&local_a8,0,0,0x10);
    local_a0 = 0;
    goto LAB_1431efbba;
  }
  atexit(FUN_1431ea7ea);
  _DAT_14ca85088 = 0;
  _DAT_14ca85090 = 0;
  DAT_14ca85098 = 0;
  DAT_14ca83a30 = 1;
  _DAT_14ca83a34 = 0;
  _DAT_14ca83a3c = 0x3f80000000000000;
  _DAT_14ca83a44 = 1;
  _DAT_14ca83a48 = 0;
  uRam000000014ca83a50 = 0x7f7fffff00000000;
  DAT_14ca84d30 = 1;
  _DAT_14ca84d34 = &DAT_3f8000003f800000;
  puRam000000014ca84d3c = &DAT_3f8000003f800000;
  DAT_14ca83a58 = 1;
  _DAT_14ca83a5c = 0;
  _DAT_14ca83a64 = 0;
  _DAT_14ca8509c = 0x3f80000000000002;
  DAT_14ca850a4 = 0;
  _DAT_14ca83a6c = 2;
  _DAT_14ca83a74 = 0;
  _DAT_14ca83a80 = 0x3f80000000000002;
  _DAT_14ca83a88 = 0;
  _DAT_14ca850b0 = 2;
  _DAT_14ca850b8 = 0;
  DAT_14ca83a94 = 1;
  _DAT_14ca83a98 = 0x3f80000000000000;
  uRam000000014ca83aa0 = 0x3f80000000000000;
  _DAT_14ca83aa8 = 1;
  _DAT_14ca83aac = 0x3f0080813f008081;
  uRam000000014ca83ab4 = 0x3f8000003f008081;
  DAT_14ca84b20 = 0;
  atexit(FUN_1431ea82f);
  local_a8._0_4_ = 1;
  local_c8._0_4_ = 0x20;
  FUN_14078dbce(&DAT_14ca83ac0,L"r.ProfileGPU.Screenshot",&local_a8,
                L"Whether a screenshot should be taken when profiling the GPU. 0:off, 1:on (default)"
               );
  atexit(FUN_1431ea8b1);
  local_a8._0_4_ = 1;
  local_c8._0_4_ = 0x20;
  FUN_14078dbce(&DAT_14ca83ad8,L"r.ProfileGPU.ShowUI",&local_a8,
                L"Whether the user interface profiler should be displayed after profiling the GPU.\nThe results will always go to the log/console\n0:off, 1:on (default)"
               );
  atexit(FUN_1431ea8f6);
  local_a8._0_4_ = 0x42c80000;
  local_c8._0_4_ = 0;
  FUN_140a6b41e(&DAT_14ca83af0,L"RHI.GPUHitchThreshold",&local_a8,
                L"Threshold for detecting hitches on the GPU (in milliseconds).");
  atexit(FUN_1431ea93b);
  local_a8._0_4_ = 0;
  local_c8._0_4_ = 0;
  FUN_14078dbce(&DAT_14ca83b08,L"r.RHIRenderPasses",&local_a8,&DAT_149dfb77a);
  atexit(FUN_1431ea980);
  local_a8._0_4_ = 0;
  local_c8._0_4_ = 4;
  FUN_14078dbce(&DAT_14ca83b20,L"r.GPUCrashOnOutOfMemory",&local_a8,
                L"Enable crash reporting on GPU OOM");
  atexit(FUN_1431ea9c5);
  FUN_140056680(&DAT_14ca83b38,L"Disabled");
  atexit((_func_5014 *)&LAB_1431eaa0a);
  local_c8._0_4_ = 4;
  FUN_141707242(&DAT_14ca83b48,L"rhi.Bindless.Resources",&DAT_14ca83b38,
                L"Set to Enabled to enable for all shader types. Set to RayTracingOnly to restrict to Raytracing shaders."
               );
  atexit(FUN_1431eaa1b);
  FUN_140056680(&DAT_14ca83b58,L"Disabled");
  atexit((_func_5014 *)&LAB_1431eaa60);
  local_c8._0_4_ = 4;
  FUN_141707242(&DAT_14ca83b68,L"rhi.Bindless.Samplers",&DAT_14ca83b58,
                L"Set to Enabled to enable for all shader types. Set to RayTracingOnly to restrict to Raytracing shaders."
               );
  atexit(FUN_1431eaa71);
  DAT_14ca83b80 = 0;
  DAT_14ca83b88 = 0;
  atexit(FUN_1431eadae);
  local_a8._0_4_ = 0;
  local_c8._0_4_ = 4;
  FUN_14078dbce(&DAT_14ca83b90,L"r.GPUCrashDebugging",&local_a8,
                L"Enable vendor specific GPU crash analysis tools");
  atexit(FUN_1431eae1c);
  local_a8._0_4_ = 1;
  local_c8._0_4_ = 4;
  FUN_14078dbce(&DAT_14ca83bc8,L"r.GPUCrashDebugging.Breadcrumbs",&local_a8,
                L"Enable RHI breadcrumbs, a vendor-agnostic method for determining which passes were active when a GPU crash occurs"
               );
  atexit(FUN_1431eae61);
  local_c8._0_4_ = 0;
  FUN_1415c789c(&DAT_14ca83bf0,L"r.gbx.RHI.DeleteTimeSlice",&DAT_14ca83bec,
                L"How many millisecond to allocate for graphics resources deletion on RHI thread, per frame (<= 0: disable)"
               );
  atexit(FUN_1431eaea6);
  local_a8._0_4_ = 0;
  local_c8._0_4_ = 0;
  FUN_14078dbce(&DAT_14ca83c00,L"r.RHICmdBypass",&local_a8,
                L"Whether to bypass the rhi command list and send the rhi commands immediately.\n0: Disable (required for the multithreaded renderer)\n1: Enable (convenient for debugging low level graphics API calls, can suppress artifacts from multithreaded renderer code)"
               );
  atexit(FUN_1431eaeeb);
  local_a8 = (code *)CONCAT44(local_a8._4_4_,8);
  local_c8._0_4_ = 0;
  FUN_14078dbce(&DAT_14ca84d18,L"r.RHICmdWidth",&local_a8,
                L"Controls the task granularity of a great number of things in the parallel renderer."
               );
  atexit(FUN_1431eaf30);
  local_a8 = (code *)CONCAT71(local_a8._1_7_,1);
  local_c8._0_4_ = 0;
  FUN_140bd5914(&DAT_14ca83c18,L"r.RHICmd.ParallelTranslate.Enable",&local_a8,
                L"When true, allows recorded RHI command lists to be translated in parallel, on supported platforms. Setting this to false will make all command lists translate on the RHI thread."
               );
  atexit(FUN_1431eaf75);
  local_a8 = (code *)CONCAT44(local_a8._4_4_,0x100);
  local_c8._0_4_ = 0;
  FUN_14078dbce(&DAT_14ca83c30,L"r.RHICmd.ParallelTranslate.MaxCommandsPerTranslate",&local_a8,
                L"When parallel translation is enabled, specifies the target maximum number of RHI command list commands to allow in a single translation job. If a newly submitted command list would cause an existing translate job to exceed this threshold, a new job will be started. A value of 0 means \'no limit\'. Translate jobs will not be split. A value less than 0 means \'always split\'. Command lists will never be batched together in the same translate job."
               );
  atexit(FUN_1431eafba);
  local_a8 = (code *)((ulonglong)local_a8 & 0xffffffffffffff00);
  local_c8._0_4_ = 0;
  FUN_140bd5914(&DAT_14ca83c48,L"r.RHICmd.ParallelTranslate.CombineSingleAndParallel",&local_a8,
                L"When true, allows the batching of both parallel and single threaded RHI command lists into the same translate job. Any parallel command lists that get batched with a single thread command list will fall back to translating on the RHI thread. Enabling this may trade reduced parallelism for reduced dispatch overhead."
               );
  atexit(FUN_1431eafff);
  local_a8._0_4_ = 1;
  local_c8._0_4_ = 0;
  FUN_14078dbce(&DAT_14ca83c60,L"r.RHICmdBufferWriteLocks",&local_a8,
                L"Only relevant with an RHI thread. Debugging option to diagnose problems with buffered locks."
               );
  atexit(FUN_1431eb044);
  local_a8 = (code *)CONCAT44(local_a8._4_4_,0x100);
  local_c8._0_4_ = 0;
  FUN_14078dbce(&DAT_14ca83c78,L"r.RHICmdMaxOutstandingMemoryBeforeFlush",&local_a8,
                L"In kilobytes. The amount of outstanding memory before the RHI will force a flush. This should generally be set high enough that it doesn\'t happen on typical frames."
               );
  atexit(FUN_1431eb089);
  local_c0 = 0xffffffff;
  local_c8._0_4_ = 0x200;
  FUN_1412c7f16(&DAT_14ca84d48,L"TaskGraph.TaskPriorities.SceneRenderingTask",
                L"Task and thread priority for various scene rendering tasks.",0);
  atexit(FUN_1431eb0ce);
  DAT_14ca83c94 = 0;
  atexit((_func_5014 *)&LAB_1431eb138);
  FUN_1461f337a();
  atexit(FUN_1431eb149);
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14ca83c98);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14ca83c98,4000);
  atexit((_func_5014 *)&LAB_1431eb303);
  DAT_14ca83d00 = 0;
  atexit((_func_5014 *)&LAB_1431eb311);
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14ca83d48);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14ca83d48,4000);
  DAT_14ca83f70 = 0;
  _DAT_14ca83f78 = 0x1000000000;
  DAT_14ca83f80 = 0;
  atexit(FUN_1431ec05c);
  FUN_1474134b2();
  atexit(FUN_1431ed000);
  _DAT_14ca83f90 = 0;
  uRam000000014ca83f98 = 0x3f0000003f000000;
  _DAT_14ca83fa0 = 0xbf000000bf000000;
  uRam000000014ca83fa8 = 0xbf400000be800000;
  _DAT_14ca83fb0 = 0xbe8000003f400000;
  uRam000000014ca83fb8 = 0x3e800000bf400000;
  _DAT_14ca83fc0 = 0x3f4000003e800000;
  uRam000000014ca83fc8 = 0xbec000003e000000;
  _DAT_14ca83fd0 = 0x3ec00000be000000;
  uRam000000014ca83fd8 = 0x3e0000003f200000;
  _DAT_14ca83fe0 = 0xbf200000bec00000;
  uRam000000014ca83fe8 = 0x3f200000bf200000;
  _DAT_14ca83ff0 = 0xbe000000bf600000;
  uRam000000014ca83ff8 = 0x3f6000003ec00000;
  _DAT_14ca84000 = 0xbf6000003f600000;
  uRam000000014ca84008 = 0x3e0000003e000000;
  _DAT_14ca84010 = 0xbec00000be000000;
  uRam000000014ca84018 = 0x3e800000bec00000;
  _DAT_14ca84020 = 0xbe0000003f000000;
  uRam000000014ca84028 = 0xbe800000bf200000;
  _DAT_14ca84030 = 0x3f2000003e800000;
  uRam000000014ca84038 = 0x3ec000003f200000;
  _DAT_14ca84040 = 0xbf2000003ec00000;
  uRam000000014ca84048 = 0x3f400000be800000;
  _DAT_14ca84050 = 0xbf60000000000000;
  uRam000000014ca84058 = 0xbf400000bf000000;
  _DAT_14ca84060 = 0x3f000000bf400000;
  uRam000000014ca84068 = 0xbf800000;
  _DAT_14ca84070 = 0xbf0000003f600000;
  uRam000000014ca84078 = 0x3f6000003f400000;
  _DAT_14ca84080 = 0xbf800000bf600000;
  DAT_14ca84288 = 0;
  _DAT_14ca84290 = 0x1000000000;
  DAT_14ca843a0 = 0;
  _DAT_14ca843a8 = 0x1000000000;
  _DAT_14ca84298 = 0;
  atexit(FUN_1431ed942);
  atexit(FUN_1431ed966);
  atexit(FUN_1431ed98f);
  FUN_1446f470e(&DAT_14ca843d0,L"PCD3D_SM6",1);
  FUN_1446f470e(&DAT_14ca843d8,L"PCD3D_SM5",1);
  FUN_1446f470e(&DAT_14ca843e0,L"PCD3D_ES31",1);
  FUN_1446f470e(&DAT_14ca843e8,L"GLSL_150_ES31",1);
  FUN_1446f470e(&DAT_14ca843f0,L"GLSL_ES3_1_ANDROID",1);
  FUN_1446f470e(&DAT_14ca843f8,L"SF_METAL",1);
  FUN_1446f470e(&DAT_14ca84400,L"SF_METAL_MRT",1);
  FUN_1446f470e(&DAT_14ca84408,L"SF_METAL_TVOS",1);
  FUN_1446f470e(&DAT_14ca84410,L"SF_METAL_MRT_TVOS",1);
  FUN_1446f470e(&DAT_14ca84418,L"SF_METAL_MRT_MAC",1);
  FUN_1446f470e(&DAT_14ca84420,L"SF_METAL_SM5",1);
  FUN_1446f470e(&DAT_14ca84428,L"SF_METAL_SM6",1);
  FUN_1446f470e(&DAT_14ca84430,L"SF_METAL_SIM",1);
  FUN_1446f470e(&DAT_14ca84438,L"SF_METAL_MACES3_1",1);
  FUN_1446f470e(&DAT_14ca84440,L"SF_VULKAN_ES31_ANDROID",1);
  FUN_1446f470e(&DAT_14ca84448,L"SF_VULKAN_ES31",1);
  FUN_1446f470e(&DAT_14ca84450,L"SF_VULKAN_SM5",1);
  FUN_1446f470e(&DAT_14ca84458,L"SF_VULKAN_SM6",1);
  FUN_1446f470e(&DAT_14ca84460,L"SF_VULKAN_SM5_ANDROID",1);
  FUN_1446f470e(&DAT_14ca84468,L"Windows",1);
  FUN_1446f470e(&DAT_14ca84470,L"Android",1);
  FUN_1446f470e(&DAT_14ca84478,&DAT_14a37f8b0,1);
  FUN_1446f470e(&DAT_14ca84480,&DAT_14a37f8b8,1);
  FUN_1446f470e(&DAT_14ca84488,L"TVOS",1);
  FUN_1446f470e(&DAT_14ca84490,L"InvalidFeatureLevel",1);
  FUN_1446f470e(&DAT_14ca84498,L"InvalidShadingPath",1);
  FUN_1446f470e(&DAT_14ca844a0,L"Deferred",1);
  FUN_1446f470e(&DAT_14ca844a8,L"Forward",1);
  FUN_1446f470e(&DAT_14ca844b0,L"Mobile",1);
  FUN_140056680(&local_a8,&DAT_149dfb77a);
  local_c8 = (code **)((ulonglong)local_c8._4_4_ << 0x20);
  FUN_140f510cc(&DAT_14ca844b8,L"r.DumpTransitionsForResource",&local_a8,
                L"Prints callstack when the given resource is transitioned. Only implemented for DX11 at the moment.Name of the resource to dump"
               );
  if (local_a8 != (code *)0x0) {
    FUN_1400020a8();
  }
  atexit(FUN_1431edb5e);
  local_a8 = (code *)0x0;
  local_a0 = 0;
  FUN_1446efa72(&local_a8,0,2,0x10);
  local_a0 = 2;
  *(undefined ***)local_a8 = &PTR_LAB_149e020b0;
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
  *(longlong *)(local_a8 + 0x10) = lVar2;
  *(undefined ***)local_a8 = &PTR_FUN_149e062c0;
  *(code **)(local_a8 + 0x18) = FUN_14178db4e;
  FUN_141253d16(&DAT_14ca844d0,&local_a8);
  if (local_a0 == 0) {
LAB_1431f069e:
    if (local_a8 != (code *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_a8 != (code *)0x0) {
    (*(code *)**(undefined8 **)local_a8)(local_a8,0);
    FUN_1446efa72(&local_a8,0,0,0x10);
    local_a0 = 0;
    goto LAB_1431f069e;
  }
  local_a8._0_4_ = 1;
  local_c8 = (code **)((ulonglong)local_c8 & 0xffffffff00000000);
  FUN_14078dbce(&DAT_14ca844e8,L"rhi.SyncInterval",&local_a8,
                L"Determines the frequency of VSyncs in supported RHIs.\nThis is in multiples of 16.66 on a 60hz display, but some platforms support higher refresh rates.\nAssuming 60fps, the values correspond to:\n  0 - Unlocked (present immediately)\n  1 - Present every vblank interval\n  2 - Present every 2 vblank intervals\n  3 - etc...\n"
               );
  atexit(FUN_1431edcd9);
  local_a8._0_4_ = 0xffffffff;
  local_c8 = (code **)((ulonglong)local_c8 & 0xffffffff00000000);
  FUN_14078dbce(&DAT_14ca84500,L"rhi.gbxSyncIntervalOverride",&local_a8,
                L"By default set to -1, means it will not change the behavior of rhi.SyncInterval\nWhen >= 0, RHIGetSyncInterval() will return override value until this switch back to -1"
               );
  atexit(FUN_1431edd1e);
  local_a8._0_4_ = 0;
  local_c8 = (code **)((ulonglong)local_c8 & 0xffffffff00000000);
  FUN_140a6b41e(&DAT_14ca84518,L"rhi.PresentThreshold.Top",&local_a8,
                L"Specifies the percentage of the screen from the top where tearing is allowed.\nOnly effective on supported platforms.\nRange: 0.0 - 1.0\n"
               );
  atexit(FUN_1431edd63);
  local_a8._0_4_ = 0;
  local_c8 = (code **)((ulonglong)local_c8 & 0xffffffff00000000);
  FUN_140a6b41e(&DAT_14ca84530,L"rhi.PresentThreshold.Bottom",&local_a8,
                L"Specifies the percentage of the screen from the bottom where tearing is allowed.\nOnly effective on supported platforms.\nRange: 0.0 - 1.0\n"
               );
  atexit(FUN_1431edda8);
  local_a8._0_4_ = 1;
  local_c8 = (code **)((ulonglong)local_c8 & 0xffffffff00000000);
  FUN_14078dbce(&DAT_14ca84548,L"rhi.SyncAllowEarlyKick",&local_a8,
                L"When 1, allows the RHI vsync thread to kick off the next frame early if we\'ve missed the vsync."
               );
  atexit(FUN_1431edded);
  local_a8._0_4_ = 0x41200000;
  local_c8 = (code **)((ulonglong)local_c8 & 0xffffffff00000000);
  FUN_140a6b41e(&DAT_14ca84560,L"rhi.SyncSlackMS",&local_a8,
                L"Increases input latency by this many milliseconds, to help performance (trade-off tunable). Gamethread will be kicked off this many milliseconds before the vsync"
               );
  atexit(FUN_1431ede32);
  local_a8 = (code *)CONCAT44(local_a8._4_4_,1);
  local_c8 = (code **)((ulonglong)local_c8 & 0xffffffff00000000);
  FUN_14078dbce(&DAT_14ca84578,L"rhi.SyncAllowVariable",&local_a8,
                L"When 1, allows the RHI to use variable refresh rate, if supported by the output hardware."
               );
  atexit(FUN_1431ede77);
  local_a8 = (code *)0x0;
  local_a0 = 0;
  FUN_1446efa72(&local_a8,0,2,0x10);
  local_a0 = 2;
  *(undefined ***)local_a8 = &PTR_LAB_149e170a0;
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
  *(longlong *)(local_a8 + 0x10) = lVar2;
  *(undefined ***)local_a8 = &PTR_FUN_149e17030;
  *(undefined1 **)(local_a8 + 0x18) = &LAB_1431edebc;
  local_c0 = 0;
  local_c8 = &local_a8;
  FUN_141703554(&DAT_14ca84598,L"rhi.EnableConsole120Fps",&DAT_14ca84590,
                L"Enable Console 120fps if Monitor supports it and Console is properly setup");
  if (local_a0 != 0) {
    if (local_a8 == (code *)0x0) goto LAB_1431f0908;
    (*(code *)**(undefined8 **)local_a8)(local_a8,0);
    FUN_1446efa72(&local_a8,0,0,0x10);
    local_a0 = 0;
  }
  if (local_a8 != (code *)0x0) {
    FUN_1400020a8();
  }
LAB_1431f0908:
  atexit(FUN_1431edec7);
  _DAT_14ca845a8 = &PTR_FUN_14a380d20;
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14ca845b0);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14ca845b0,4000);
  _DAT_14ca845d8 = 0;
  uRam000000014ca845e0 = 0;
  _DAT_14ca845e8 = 0;
  uRam000000014ca845f0 = 0;
  atexit((_func_5014 *)&LAB_1431edf0c);
  _DAT_14ca845f8 = &PTR_FUN_14a380960;
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_14ca84600);
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)&DAT_14ca84600,4000);
  _DAT_14ca84628 = 0;
  uRam000000014ca84630 = 0;
  atexit((_func_5014 *)&LAB_1431edf85);
  if ((local_60 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431f0a20 FUN_1431f0a20 body=69 status=ok
// SIG undefined FUN_1431f0a20(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431f0a20(void)

{
  _DAT_14ca85558 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431f0a62. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca85560,1);
  return;
}



// FUNCTION 1431f0a76 FUN_1431f0a76 body=101 status=ok
// SIG undefined FUN_1431f0a76(void)

void FUN_1431f0a76(void)

{
  undefined1 auStack_38 [32];
  undefined4 local_18;
  undefined1 local_9;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_9 = 0;
  local_18 = 0x20;
  FUN_140bd5914(&DAT_14ca85558,L"r.IgnorePerformanceModeCheck",&local_9,
                L"Ignore performance mode check");
  atexit(FUN_1431f0a20);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431f0adc FUN_1431f0adc body=57 status=ok
// SIG undefined FUN_1431f0adc(void)

void FUN_1431f0adc(void)

{
  undefined8 uVar1;
  
  if (DAT_14ca855b8 == 0) {
    uVar1 = FUN_14631ba4a();
    DAT_14ca855b8 = FUN_14171c317(FUN_14631ba7b,uVar1,L"EVTProducerPriority");
  }
  return;
}



// FUNCTION 1431f0b15 FUN_1431f0b15 body=57 status=ok
// SIG undefined FUN_1431f0b15(void)

void FUN_1431f0b15(void)

{
  undefined8 uVar1;
  
  if (DAT_14ca855d0 == 0) {
    uVar1 = FUN_14631ba4a();
    DAT_14ca855d0 = FUN_14171c317(FUN_14631baac,uVar1,L"EVTInvalidatePriority");
  }
  return;
}



// FUNCTION 1431f0b96 FUN_1431f0b96 body=240 status=ok
// SIG undefined FUN_1431f0b96(void)

void FUN_1431f0b96(void)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  DAT_14ca85cd8 = &PTR_FUN_14a387230;
  FUN_144725486(&DAT_14ca85cd8);
  lVar4 = DAT_14ca85ce8;
  DAT_14ca85cd8 = &PTR_FUN_14a38cff0;
  if (DAT_14ca85ce8 != 0) {
    LOCK();
    puVar1 = (uint *)(DAT_14ca85ce8 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar4 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(lVar4 + 0xd);
        plVar5 = (longlong *)FUN_14001cc68(0x10,8);
        plVar5[1] = lVar4;
        plVar7 = DAT_14ca843c0;
        plVar6 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar5 = (longlong)plVar7;
            LOCK();
            bVar8 = plVar7 != DAT_14ca843c0;
            plVar6 = plVar5;
            if (bVar8) {
              plVar7 = DAT_14ca843c0;
              plVar6 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar6;
            UNLOCK();
          } while (bVar8);
        }
        else {
          do {
            *plVar5 = (longlong)plVar6;
            LOCK();
            bVar8 = plVar6 != DAT_14ca843c8;
            plVar7 = plVar5;
            if (bVar8) {
              plVar6 = DAT_14ca843c8;
              plVar7 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar7;
            UNLOCK();
          } while (bVar8);
        }
      }
    }
  }
  DAT_14ca85cd8 = &PTR_FUN_14a38cd70;
  DAT_14ca85ce6 = 2;
  if ((DAT_14ca85ce0 != -1) && (DAT_14c868880 == '\0')) {
    FUN_140033559(".\\Runtime/RenderCore/Private/RenderResource.cpp",0xfe,
                  L"A FRenderResource was deleted without being released first!");
  }
  return;
}



// FUNCTION 1431f0c86 FUN_1431f0c86 body=2296 status=ok
// SIG undefined FUN_1431f0c86(void)

void FUN_1431f0c86(ulonglong *param_1,undefined4 param_2)

{
  ulonglong *puVar1;
  byte bVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  ulonglong uVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  int iVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  longlong *plVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  uint uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  longlong lVar20;
  longlong lVar21;
  undefined1 auStack_328 [32];
  undefined8 *local_308;
  ulonglong local_300;
  longlong local_2f8;
  undefined4 local_2ec;
  code *local_2e8;
  longlong *local_2d8;
  longlong local_2c8;
  undefined1 auStack_2ba [16];
  undefined1 auStack_2aa [2];
  undefined8 local_2a8;
  undefined4 local_2a0;
  undefined4 local_29c;
  undefined8 auStack_298 [38];
  undefined1 local_168 [16];
  undefined2 local_158;
  undefined4 local_154;
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 local_140;
  undefined2 local_13c;
  undefined8 local_138;
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined4 local_d0;
  undefined1 local_cc [16];
  undefined1 local_bc [16];
  undefined1 local_ac [16];
  undefined1 local_9c [13];
  undefined3 uStack_8f;
  undefined1 auStack_8c [13];
  undefined1 local_78 [16];
  undefined8 local_68;
  uint local_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_328;
  local_2e8 = (code *)0x0;
  local_2d8 = (longlong *)0x0;
  local_2ec = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c8442bc) && (FUN_144b3d300(&DAT_14c8442bc), DAT_14c8442bc == -1)) {
    if (DAT_14c846b14 == '\0') {
      FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                    L"Attempting to get the command line but it hasn\'t been initialized yet.");
    }
    DAT_14c8442b8 = FUN_14054d46e(&DAT_14c846b20,L"nullrhi");
    _Init_thread_footer(&DAT_14c8442bc);
  }
  uVar3 = DAT_14ca90e80;
  uVar8 = DAT_14c9c0d98;
  bVar2 = DAT_14c8442b8;
  if (DAT_14c872bf0 == '\x01') {
    if (DAT_14c872bf1 != '\x01') goto LAB_1431f13ba;
    bVar2 = DAT_14c8442b8 & 1;
  }
  if (bVar2 != 0) goto LAB_1431f13ba;
  uVar6 = 0;
  local_d8 = 0;
  local_e8 = (undefined1  [16])0x0;
  local_f8 = (undefined1  [16])0x0;
  local_108 = (undefined1  [16])0x0;
  local_118 = (undefined1  [16])0x0;
  local_128 = (undefined1  [16])0x0;
  local_cc = (undefined1  [16])0x0;
  local_bc = (undefined1  [16])0x0;
  local_ac = (undefined1  [16])0x0;
  local_9c = SUB1613((undefined1  [16])0x0,0);
  uStack_8f = 0;
  auStack_8c = SUB1613((undefined1  [16])0x0,3);
  local_78 = (undefined1  [16])0x0;
  local_68 = 0;
  local_60 = 1;
  local_58 = 0;
  FUN_144b0e33a(param_1,local_128);
  local_f8._8_8_ = DAT_14c9c0db0;
  local_f8._0_8_ = uVar3;
  local_e8._0_8_ = uVar8;
  plVar12 = *(longlong **)
             (&DAT_14ca8c1f0 +
             (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) * 8);
  FUN_1415e141e();
  uVar19 = 0;
  lVar20 = 0;
  if ((int)plVar12[1] != *(int *)((longlong)plVar12 + 0x34)) {
    plVar13 = plVar12 + 7;
    if ((longlong *)plVar12[8] != (longlong *)0x0) {
      plVar13 = (longlong *)plVar12[8];
    }
    iVar10 = *(int *)((longlong)plVar13 +
                     (ulonglong)
                     ((int)plVar12[9] - 1U &
                     (int)DAT_14ca90940 + (int)((ulonglong)DAT_14ca90940 >> 0x20) * 0x17) * 4);
    if (iVar10 != -1) {
      do {
        plVar13 = (longlong *)(*plVar12 + (longlong)iVar10 * 0x18);
        if (*plVar13 == DAT_14ca90940) {
          uVar19 = 0;
          if (plVar13 != (longlong *)0x0) {
            lVar20 = 0;
            if (plVar13 + 1 == (longlong *)0x0) goto LAB_1431f0f6a;
            lVar20 = plVar13[1];
            puVar1 = *(ulonglong **)(lVar20 + 0x28);
            lVar21 = ((ulonglong)(DAT_14ca90938 * -0x622015f714c7d297) >> 0x2f ^
                     DAT_14ca90938 * -0x622015f714c7d297) * -0x622015f714c7d297;
            uVar19 = puVar1[3];
            if ((uVar19 & 1) != 0) {
              uVar19 = (longlong)puVar1 + ((longlong)uVar19 >> 0x18) + 0x18;
            }
            uVar15 = puVar1[5];
            if ((uVar15 & 1) != 0) {
              uVar15 = (longlong)puVar1 + ((longlong)uVar15 >> 0x18) + 0x28;
            }
            uVar14 = puVar1[1];
            if ((uVar14 & 1) != 0) {
              uVar14 = (longlong)puVar1 + ((longlong)uVar14 >> 0x18) + 8;
            }
            uVar16 = *puVar1;
            if ((uVar16 & 1) != 0) {
              uVar16 = ((longlong)uVar16 >> 0x18) + (longlong)puVar1;
            }
            uVar17 = *(uint *)(uVar16 + (ulonglong)
                                        ((uint)puVar1[2] &
                                         ((uint)((ulonglong)lVar21 >> 0x2f) ^ (uint)lVar21) * 0x2d69
                                        & 0xffff) * 4);
            if (uVar17 != 0xffffffff) {
              goto LAB_1431f0f18;
            }
          }
          break;
        }
        iVar10 = (int)plVar13[2];
      } while (iVar10 != -1);
    }
    goto LAB_1431f0f35;
  }
  goto LAB_1431f0f6a;
  while (uVar17 = *(uint *)(uVar16 + uVar18 * 4), uVar17 != 0xffffffff) {
LAB_1431f10c1:
    uVar18 = (ulonglong)uVar17;
    if ((*(ulonglong *)(uVar15 + uVar18 * 8) == DAT_14ca90b88) &&
       (*(int *)(uVar14 + uVar18 * 4) == (int)uVar6)) {
      uVar6 = puVar1[7];
      if ((uVar6 & 1) != 0) {
        uVar6 = (longlong)(puVar1 + 7) + ((longlong)uVar6 >> 0x18);
      }
      uVar15 = *(ulonglong *)(uVar6 + (longlong)(int)uVar17 * 8);
      if ((uVar15 & 1) != 0) {
        uVar15 = ((longlong)uVar15 >> 0x18) + uVar6 + (longlong)(int)uVar17 * 8;
      }
      if (uVar15 != 0) goto LAB_1431f1111;
      break;
    }
  }
  goto LAB_1431f10dc;
  while (uVar17 = *(uint *)(uVar14 + uVar16 * 4), uVar17 != 0xffffffff) {
LAB_1431f0f18:
    uVar16 = (ulonglong)uVar17;
    if ((*(longlong *)(uVar19 + uVar16 * 8) == DAT_14ca90938) &&
       (*(int *)(uVar15 + uVar16 * 4) == 0)) {
      uVar15 = puVar1[7];
      if ((uVar15 & 1) != 0) {
        uVar15 = (longlong)(puVar1 + 7) + ((longlong)uVar15 >> 0x18);
      }
      uVar19 = *(ulonglong *)(uVar15 + (longlong)(int)uVar17 * 8);
      if ((uVar19 & 1) != 0) {
        uVar19 = ((longlong)uVar19 >> 0x18) + uVar15 + (longlong)(int)uVar17 * 8;
      }
      if (uVar19 != 0) goto LAB_1431f0f6a;
      break;
    }
  }
LAB_1431f0f35:
  uVar19 = 0;
  lVar20 = 0;
LAB_1431f0f6a:
  FUN_1415e141e();
  if ((local_cc[4] < 0x12) && ((0x22002U >> (local_cc[4] & 0x1f) & 1) != 0)) {
    uVar6 = (ulonglong)(*(uint *)(&DAT_14ca814cc + (ulonglong)DAT_14ca85550 * 0x3c) >> 0x1a & 8);
  }
  local_300 = uVar19;
  local_2f8 = lVar20;
  FUN_1415d5bd2();
  if ((int)plVar12[1] != *(int *)((longlong)plVar12 + 0x34)) {
    plVar13 = plVar12 + 7;
    if ((longlong *)plVar12[8] != (longlong *)0x0) {
      plVar13 = (longlong *)plVar12[8];
    }
    iVar10 = *(int *)((longlong)plVar13 +
                     (ulonglong)
                     ((int)plVar12[9] - 1U &
                     (int)DAT_14ca90b90 + (int)((ulonglong)DAT_14ca90b90 >> 0x20) * 0x17) * 4);
    if (iVar10 != -1) {
      do {
        plVar13 = (longlong *)(*plVar12 + (longlong)iVar10 * 0x18);
        if (*plVar13 == DAT_14ca90b90) {
          uVar15 = 0;
          if (plVar13 != (longlong *)0x0) {
            lVar21 = 0;
            if (plVar13 + 1 == (longlong *)0x0) goto LAB_1431f1111;
            lVar21 = plVar13[1];
            puVar1 = *(ulonglong **)(lVar21 + 0x28);
            uVar15 = (DAT_14ca90b88 ^ uVar6) * -0x622015f714c7d297;
            lVar7 = (uVar15 >> 0x2f ^ uVar6 ^ uVar15) * -0x622015f714c7d297;
            uVar15 = puVar1[3];
            if ((uVar15 & 1) != 0) {
              uVar15 = (longlong)puVar1 + ((longlong)uVar15 >> 0x18) + 0x18;
            }
            uVar14 = puVar1[5];
            if ((uVar14 & 1) != 0) {
              uVar14 = (longlong)puVar1 + ((longlong)uVar14 >> 0x18) + 0x28;
            }
            uVar16 = puVar1[1];
            if ((uVar16 & 1) != 0) {
              uVar16 = (longlong)puVar1 + ((longlong)uVar16 >> 0x18) + 8;
            }
            uVar18 = *puVar1;
            if ((uVar18 & 1) != 0) {
              uVar18 = ((longlong)uVar18 >> 0x18) + (longlong)puVar1;
            }
            uVar17 = *(uint *)(uVar18 + (ulonglong)
                                        ((uint)puVar1[2] &
                                         ((uint)((ulonglong)lVar7 >> 0x2f) ^ (uint)lVar7) * 0x2d69 &
                                        0xffff) * 4);
            if (uVar17 != 0xffffffff) {
              goto LAB_1431f10c1;
            }
          }
          break;
        }
        iVar10 = (int)plVar13[2];
      } while (iVar10 != -1);
    }
  }
LAB_1431f10dc:
  uVar15 = 0;
  lVar21 = 0;
LAB_1431f1111:
  FUN_1415d5bd2();
  local_128._0_8_ = DAT_14ca968c0;
  auVar5 = local_128;
  if (uVar19 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = *(longlong *)
             (*(longlong *)(*(longlong *)(lVar20 + 8) + 0x50) +
             (longlong)*(int *)(uVar19 + 0xd4) * 8);
    if (lVar7 == 0) {
      local_128 = auVar5;
      lVar7 = FUN_1400bafc2(*(longlong *)(lVar20 + 8),(longlong)*(int *)(uVar19 + 0xd4),1);
    }
  }
  local_128._8_8_ = lVar7;
  if (uVar15 == 0) {
    lVar20 = 0;
  }
  else {
    lVar20 = *(longlong *)
              (*(longlong *)(*(longlong *)(lVar21 + 8) + 0x50) +
              (longlong)*(int *)(uVar15 + 0xd4) * 8);
    if (lVar20 == 0) {
      lVar20 = FUN_1400bafc2(*(longlong *)(lVar21 + 8),(longlong)*(int *)(uVar15 + 0xd4),1);
    }
  }
  pcVar4 = local_2e8;
  local_118._0_8_ = lVar20;
  local_d0 = 1;
  if (local_2e8 != (code *)0x0) {
    plVar12 = local_2d8;
    if (local_2d8 == (longlong *)0x0) {
      plVar12 = &local_2c8;
    }
    uVar8 = (**(code **)(*plVar12 + 8))();
    (*pcVar4)(uVar8,local_128);
  }
  lVar20 = FUN_140028f18(param_1,local_128);
  if ((lVar20 != 0) && ((local_60 & 0x10000000) == 0)) {
    *(undefined4 *)(param_1 + 0x35) = local_108._0_4_;
    *(undefined4 *)((longlong)param_1 + 0x1ac) = local_108._4_4_;
    *(undefined4 *)(param_1 + 0x36) = local_108._8_4_;
    *(undefined4 *)((longlong)param_1 + 0x1b4) = local_108._12_4_;
    *(undefined4 *)(param_1 + 0x33) = local_118._0_4_;
    *(undefined4 *)((longlong)param_1 + 0x19c) = local_118._4_4_;
    *(undefined4 *)(param_1 + 0x34) = local_118._8_4_;
    *(undefined4 *)((longlong)param_1 + 0x1a4) = local_118._12_4_;
    param_1[0x31] = local_128._0_8_;
    param_1[0x32] = local_128._8_8_;
    puVar9 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar11 = puVar9 + 4;
    if ((undefined8 *)param_1[1] < puVar11) {
      FUN_140023dd8(param_1,0x28);
      puVar9 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
      puVar11 = puVar9 + 4;
    }
    *param_1 = (ulonglong)puVar11;
    *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
    *(undefined8 **)param_1[6] = puVar9;
    param_1[6] = (ulonglong)(puVar9 + 1);
    puVar9[1] = 0;
    *puVar9 = &PTR_LAB_14a37d348;
    puVar9[2] = lVar20;
    *(undefined4 *)(puVar9 + 3) = 0;
    *(undefined1 *)((longlong)puVar9 + 0x1c) = 1;
  }
  if (local_300 == 0) {
    lVar20 = 0;
  }
  else {
    lVar20 = *(longlong *)
              (*(longlong *)(*(longlong *)(local_2f8 + 8) + 0x50) +
              (longlong)*(int *)(local_300 + 0xd4) * 8);
    if (lVar20 == 0) {
      lVar20 = FUN_1400bafc2(*(longlong *)(local_2f8 + 8),(longlong)*(int *)(local_300 + 0xd4),1);
    }
  }
  FUN_14178e44e(param_1,&local_300,lVar20,&local_2ec);
  lVar20 = 0x92;
  do {
    *(undefined1 (*) [16])(auStack_2ba + lVar20) = (undefined1  [16])0x0;
    *(undefined4 *)(auStack_2aa + lVar20) = 0xffff0000;
    lVar20 = lVar20 + 0x18;
  } while (lVar20 != 0x152);
  local_154 = 0;
  local_168 = (undefined1  [16])0x0;
  local_158 = 0;
  local_150 = 0xffffffff;
  uStack_14c = 0xffffffff;
  uStack_148 = 0xffffffff;
  uStack_144 = 0xffffffff;
  local_140 = 0;
  local_13c = 0;
  local_138 = 0;
  local_2a8 = 0;
  local_2a0 = 0;
  lVar20 = 0x10;
  do {
    *(undefined8 *)((longlong)&local_2a8 + lVar20) = 0;
    *(undefined8 *)((longlong)&local_2a0 + lVar20) = 0x3f80000000000000;
    lVar20 = lVar20 + 0x10;
  } while (lVar20 != 0x80);
  local_29c = param_2;
  if (uVar15 == 0) {
    lVar20 = 0;
  }
  else {
    lVar20 = *(longlong *)
              (*(longlong *)(*(longlong *)(lVar21 + 8) + 0x50) +
              (longlong)*(int *)(uVar15 + 0xd4) * 8);
    if (lVar20 == 0) {
      lVar20 = FUN_1400bafc2(*(longlong *)(lVar21 + 8),(longlong)*(int *)(uVar15 + 0xd4),1);
    }
  }
  uVar8 = FUN_141472624();
  local_308 = &local_2a8;
  FUN_1449cc26b(param_1,lVar20,uVar15,uVar8);
  if (local_2e8 != (code *)0x0) {
    plVar12 = local_2d8;
    if (local_2d8 == (longlong *)0x0) {
      plVar12 = &local_2c8;
    }
    (**(code **)(*plVar12 + 0x10))();
  }
LAB_1431f13ba:
  uVar8 = DAT_14ca85ce8;
  puVar9 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar11 = puVar9 + 5;
  if ((undefined8 *)param_1[1] < puVar11) {
    FUN_140023dd8(param_1,0x30);
    puVar9 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar11 = puVar9 + 5;
  }
  *param_1 = (ulonglong)puVar11;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar9;
  param_1[6] = (ulonglong)(puVar9 + 1);
  puVar9[1] = 0;
  *puVar9 = &PTR_LAB_14a1fb5a8;
  *(undefined4 *)(puVar9 + 2) = 0;
  puVar9[3] = uVar8;
  *(undefined4 *)(puVar9 + 4) = 0;
  puVar9 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar11 = puVar9 + 4;
  if ((undefined8 *)param_1[1] < puVar11) {
    FUN_140023dd8(param_1,0x28);
    puVar9 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar11 = puVar9 + 4;
  }
  *param_1 = (ulonglong)puVar11;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar9;
  param_1[6] = (ulonglong)(puVar9 + 1);
  puVar9[1] = 0;
  *puVar9 = &PTR_LAB_14a1fc200;
  puVar9[2] = 0x200000000;
  *(undefined4 *)(puVar9 + 3) = 1;
  if ((local_50 ^ (ulonglong)auStack_328) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1431f157f FUN_1431f157f body=2191 status=ok
// SIG undefined FUN_1431f157f(void)

void FUN_1431f157f(ulonglong *param_1,uint param_2,void *param_3,char param_4,undefined8 param_5,
                  char param_6,undefined4 param_7,longlong *param_8,byte param_9)

{
  undefined8 uVar1;
  ulonglong *puVar2;
  code *pcVar3;
  byte bVar4;
  undefined4 uVar5;
  longlong *plVar6;
  undefined1 auVar7 [16];
  int iVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined8 uVar11;
  int iVar12;
  longlong *plVar13;
  longlong *plVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  ulonglong uVar17;
  uint uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  longlong lVar21;
  uint uVar22;
  longlong lVar23;
  ulonglong uVar24;
  undefined1 auStack_2e8 [32];
  undefined8 *local_2c8;
  undefined8 local_2c0;
  ulonglong local_2b8;
  undefined1 local_2b0 [8];
  undefined8 local_2a8 [40];
  undefined1 local_168 [16];
  undefined2 local_158;
  undefined4 local_154;
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 local_140;
  undefined2 local_13c;
  undefined8 local_138;
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined4 local_d0;
  undefined1 local_cc [16];
  undefined1 local_bc [16];
  undefined1 local_ac [16];
  undefined1 local_9c [13];
  undefined3 uStack_8f;
  undefined1 auStack_8c [13];
  undefined1 local_78 [16];
  undefined8 local_68;
  uint local_60;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_2e8;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c8442bc) && (FUN_144b3d300(&DAT_14c8442bc), DAT_14c8442bc == -1)) {
    if (DAT_14c846b14 == '\0') {
      FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                    L"Attempting to get the command line but it hasn\'t been initialized yet.");
    }
    DAT_14c8442b8 = FUN_14054d46e(&DAT_14c846b20,L"nullrhi");
    _Init_thread_footer(&DAT_14c8442bc);
  }
  plVar6 = param_8;
  uVar11 = DAT_14ca11210;
  bVar4 = DAT_14c8442b8;
  if (DAT_14c872bf0 == '\x01') {
    if (DAT_14c872bf1 != '\x01') goto LAB_1431f1d08;
    bVar4 = DAT_14c8442b8 & 1;
  }
  if (bVar4 != 0) goto LAB_1431f1d08;
  puVar9 = &DAT_14ca007a8;
  if (param_6 == '\0') {
    puVar9 = &DAT_14c9c0c60;
  }
  puVar16 = &DAT_14c9c0d98;
  if (param_6 != '\0') {
    puVar16 = &DAT_14ca90e98;
  }
  if (param_4 == '\0') {
    puVar9 = puVar16;
  }
  uVar1 = *puVar9;
  uVar22 = 0;
  local_d8 = 0;
  local_e8 = (undefined1  [16])0x0;
  local_f8 = (undefined1  [16])0x0;
  local_108 = (undefined1  [16])0x0;
  local_118 = (undefined1  [16])0x0;
  local_128 = (undefined1  [16])0x0;
  local_cc = (undefined1  [16])0x0;
  local_bc = (undefined1  [16])0x0;
  local_ac = (undefined1  [16])0x0;
  local_9c = SUB1613((undefined1  [16])0x0,0);
  uStack_8f = 0;
  auStack_8c = SUB1613((undefined1  [16])0x0,3);
  local_78 = (undefined1  [16])0x0;
  local_68 = 0;
  local_60 = 1;
  local_58 = 0;
  local_2c0 = param_3;
  FUN_144b0e33a(param_1,local_128);
  local_f8._8_8_ = DAT_14c9c0db0;
  local_f8._0_8_ = uVar11;
  local_e8._0_8_ = uVar1;
  plVar13 = *(longlong **)
             (&DAT_14ca8c1f0 +
             (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) * 8);
  FUN_1415e141e();
  uVar15 = 0;
  lVar21 = 0;
  if ((int)plVar13[1] != *(int *)((longlong)plVar13 + 0x34)) {
    plVar14 = plVar13 + 7;
    if ((longlong *)plVar13[8] != (longlong *)0x0) {
      plVar14 = (longlong *)plVar13[8];
    }
    iVar12 = *(int *)((longlong)plVar14 +
                     (ulonglong)
                     ((int)plVar13[9] - 1U &
                     (int)DAT_14ca90940 + (int)((ulonglong)DAT_14ca90940 >> 0x20) * 0x17) * 4);
    if (iVar12 != -1) {
      do {
        plVar14 = (longlong *)(*plVar13 + (longlong)iVar12 * 0x18);
        if (*plVar14 == DAT_14ca90940) {
          uVar15 = 0;
          if (plVar14 != (longlong *)0x0) {
            lVar21 = 0;
            if (plVar14 + 1 == (longlong *)0x0) goto LAB_1431f1899;
            lVar21 = plVar14[1];
            puVar2 = *(ulonglong **)(lVar21 + 0x28);
            lVar23 = ((ulonglong)(DAT_14ca90938 * -0x622015f714c7d297) >> 0x2f ^
                     DAT_14ca90938 * -0x622015f714c7d297) * -0x622015f714c7d297;
            uVar15 = puVar2[3];
            if ((uVar15 & 1) != 0) {
              uVar15 = (longlong)puVar2 + ((longlong)uVar15 >> 0x18) + 0x18;
            }
            uVar19 = puVar2[5];
            if ((uVar19 & 1) != 0) {
              uVar19 = (longlong)puVar2 + ((longlong)uVar19 >> 0x18) + 0x28;
            }
            uVar17 = puVar2[1];
            if ((uVar17 & 1) != 0) {
              uVar17 = (longlong)puVar2 + ((longlong)uVar17 >> 0x18) + 8;
            }
            uVar20 = *puVar2;
            if ((uVar20 & 1) != 0) {
              uVar20 = ((longlong)uVar20 >> 0x18) + (longlong)puVar2;
            }
            uVar18 = *(uint *)(uVar20 + (ulonglong)
                                        ((uint)puVar2[2] &
                                         ((uint)((ulonglong)lVar23 >> 0x2f) ^ (uint)lVar23) * 0x2d69
                                        & 0xffff) * 4);
            if (uVar18 != 0xffffffff) {
              goto LAB_1431f1848;
            }
          }
          break;
        }
        iVar12 = (int)plVar14[2];
      } while (iVar12 != -1);
    }
    goto LAB_1431f1864;
  }
  goto LAB_1431f1899;
  while (uVar22 = *(uint *)(uVar20 + uVar24 * 4), uVar22 != 0xffffffff) {
LAB_1431f1a1e:
    uVar24 = (ulonglong)uVar22;
    if ((*(ulonglong *)(uVar19 + uVar24 * 8) == DAT_14ca90b88) &&
       (*(int *)(uVar17 + uVar24 * 4) == iVar8)) {
      uVar17 = puVar2[7];
      if ((uVar17 & 1) != 0) {
        uVar17 = (longlong)(puVar2 + 7) + ((longlong)uVar17 >> 0x18);
      }
      uVar19 = *(ulonglong *)(uVar17 + (longlong)(int)uVar22 * 8);
      if ((uVar19 & 1) != 0) {
        uVar19 = ((longlong)uVar19 >> 0x18) + uVar17 + (longlong)(int)uVar22 * 8;
      }
      if (uVar19 != 0) goto LAB_1431f1a6e;
      break;
    }
  }
  goto LAB_1431f1a3a;
  while (uVar18 = *(uint *)(uVar17 + uVar20 * 4), uVar18 != 0xffffffff) {
LAB_1431f1848:
    uVar20 = (ulonglong)uVar18;
    if ((*(longlong *)(uVar15 + uVar20 * 8) == DAT_14ca90938) &&
       (*(int *)(uVar19 + uVar20 * 4) == 0)) {
      uVar19 = puVar2[7];
      if ((uVar19 & 1) != 0) {
        uVar19 = (longlong)(puVar2 + 7) + ((longlong)uVar19 >> 0x18);
      }
      uVar15 = *(ulonglong *)(uVar19 + (longlong)(int)uVar18 * 8);
      if ((uVar15 & 1) != 0) {
        uVar15 = ((longlong)uVar15 >> 0x18) + uVar19 + (longlong)(int)uVar18 * 8;
      }
      if (uVar15 != 0) goto LAB_1431f1899;
      break;
    }
  }
LAB_1431f1864:
  uVar15 = 0;
  lVar21 = 0;
LAB_1431f1899:
  FUN_1415e141e();
  if ((local_cc[4] < 0x12) && ((0x22002U >> (local_cc[4] & 0x1f) & 1) != 0)) {
    uVar22 = *(uint *)(&DAT_14ca814cc + (ulonglong)DAT_14ca85550 * 0x3c) >> 0x1a & 8;
  }
  local_2b8 = uVar15;
  local_2b0 = (undefined1  [8])lVar21;
  FUN_1415d5bd2();
  if ((int)plVar13[1] != *(int *)((longlong)plVar13 + 0x34)) {
    plVar14 = plVar13 + 7;
    if ((longlong *)plVar13[8] != (longlong *)0x0) {
      plVar14 = (longlong *)plVar13[8];
    }
    iVar12 = *(int *)((longlong)plVar14 +
                     (ulonglong)
                     ((int)plVar13[9] - 1U &
                     (int)DAT_14ca90b90 + (int)((ulonglong)DAT_14ca90b90 >> 0x20) * 0x17) * 4);
    if (iVar12 != -1) {
      iVar8 = param_2 + (param_2 == 0) + (uint)param_9 * 0x10 + uVar22 + -1;
      do {
        plVar14 = (longlong *)(*plVar13 + (longlong)iVar12 * 0x18);
        if (*plVar14 == DAT_14ca90b90) {
          uVar19 = 0;
          if (plVar14 != (longlong *)0x0) {
            lVar23 = 0;
            if (plVar14 + 1 == (longlong *)0x0) goto LAB_1431f1a6e;
            lVar23 = plVar14[1];
            puVar2 = *(ulonglong **)(lVar23 + 0x28);
            uVar19 = (DAT_14ca90b88 ^ (longlong)iVar8) * -0x622015f714c7d297;
            lVar10 = (uVar19 >> 0x2f ^ (longlong)iVar8 ^ uVar19) * -0x622015f714c7d297;
            uVar19 = puVar2[3];
            if ((uVar19 & 1) != 0) {
              uVar19 = (longlong)puVar2 + ((longlong)uVar19 >> 0x18) + 0x18;
            }
            uVar17 = puVar2[5];
            if ((uVar17 & 1) != 0) {
              uVar17 = (longlong)puVar2 + ((longlong)uVar17 >> 0x18) + 0x28;
            }
            uVar20 = puVar2[1];
            if ((uVar20 & 1) != 0) {
              uVar20 = (longlong)puVar2 + ((longlong)uVar20 >> 0x18) + 8;
            }
            uVar24 = *puVar2;
            if ((uVar24 & 1) != 0) {
              uVar24 = ((longlong)uVar24 >> 0x18) + (longlong)puVar2;
            }
            uVar22 = *(uint *)(uVar24 + (ulonglong)
                                        ((uint)puVar2[2] &
                                         ((uint)((ulonglong)lVar10 >> 0x2f) ^ (uint)lVar10) * 0x2d69
                                        & 0xffff) * 4);
            if (uVar22 != 0xffffffff) {
              goto LAB_1431f1a1e;
            }
          }
          break;
        }
        iVar12 = (int)plVar14[2];
      } while (iVar12 != -1);
    }
  }
LAB_1431f1a3a:
  uVar19 = 0;
  lVar23 = 0;
LAB_1431f1a6e:
  FUN_1415d5bd2();
  local_128._0_8_ = DAT_14ca968c0;
  auVar7 = local_128;
  if (uVar15 == 0) {
    lVar10 = 0;
  }
  else {
    lVar10 = *(longlong *)
              (*(longlong *)(*(longlong *)(lVar21 + 8) + 0x50) +
              (longlong)*(int *)(uVar15 + 0xd4) * 8);
    if (lVar10 == 0) {
      local_128 = auVar7;
      lVar10 = FUN_1400bafc2(*(longlong *)(lVar21 + 8),(longlong)*(int *)(uVar15 + 0xd4),1);
    }
  }
  local_128._8_8_ = lVar10;
  if (uVar19 == 0) {
    lVar21 = 0;
  }
  else {
    lVar21 = *(longlong *)
              (*(longlong *)(*(longlong *)(lVar23 + 8) + 0x50) +
              (longlong)*(int *)(uVar19 + 0xd4) * 8);
    if (lVar21 == 0) {
      lVar21 = FUN_1400bafc2(*(longlong *)(lVar23 + 8),(longlong)*(int *)(uVar19 + 0xd4),1);
    }
  }
  local_118._0_8_ = lVar21;
  local_d0 = 1;
  pcVar3 = (code *)*plVar6;
  if (pcVar3 != (code *)0x0) {
    plVar13 = plVar6 + 4;
    if ((longlong *)plVar6[2] != (longlong *)0x0) {
      plVar13 = (longlong *)plVar6[2];
    }
    uVar11 = (**(code **)(*plVar13 + 8))();
    (*pcVar3)(uVar11,local_128);
  }
  lVar21 = FUN_140028f18(param_1,local_128);
  uVar5 = param_7;
  if ((lVar21 != 0) && ((local_60 & 0x10000000) == 0)) {
    *(undefined4 *)(param_1 + 0x35) = local_108._0_4_;
    *(undefined4 *)((longlong)param_1 + 0x1ac) = local_108._4_4_;
    *(undefined4 *)(param_1 + 0x36) = local_108._8_4_;
    *(undefined4 *)((longlong)param_1 + 0x1b4) = local_108._12_4_;
    *(undefined4 *)(param_1 + 0x33) = local_118._0_4_;
    *(undefined4 *)((longlong)param_1 + 0x19c) = local_118._4_4_;
    *(undefined4 *)(param_1 + 0x34) = local_118._8_4_;
    *(undefined4 *)((longlong)param_1 + 0x1a4) = local_118._12_4_;
    param_1[0x31] = local_128._0_8_;
    param_1[0x32] = local_128._8_8_;
    puVar16 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar9 = puVar16 + 4;
    if ((undefined8 *)param_1[1] < puVar9) {
      FUN_140023dd8(param_1,0x28);
      puVar16 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
      puVar9 = puVar16 + 4;
    }
    *param_1 = (ulonglong)puVar9;
    *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
    *(undefined8 **)param_1[6] = puVar16;
    param_1[6] = (ulonglong)(puVar16 + 1);
    puVar16[1] = 0;
    *puVar16 = &PTR_LAB_14a37d348;
    puVar16[2] = lVar21;
    *(undefined4 *)(puVar16 + 3) = uVar5;
    *(undefined1 *)((longlong)puVar16 + 0x1c) = 1;
  }
  if (local_2b8 == 0) {
    lVar21 = 0;
  }
  else {
    lVar21 = *(longlong *)
              (*(longlong *)(*(longlong *)((longlong)local_2b0 + 8) + 0x50) +
              (longlong)*(int *)(local_2b8 + 0xd4) * 8);
    if (lVar21 == 0) {
      lVar21 = FUN_1400bafc2(*(longlong *)((longlong)local_2b0 + 8),
                             (longlong)*(int *)(local_2b8 + 0xd4),1);
    }
  }
  FUN_14178e44e(param_1,&local_2b8,lVar21,&param_5);
  lVar21 = 0x92;
  do {
    *(undefined1 (*) [16])((longlong)&local_2c0 + lVar21 + 6) = (undefined1  [16])0x0;
    *(undefined4 *)(local_2b0 + lVar21 + 6) = 0xffff0000;
    lVar21 = lVar21 + 0x18;
  } while (lVar21 != 0x152);
  local_154 = 0;
  local_168 = (undefined1  [16])0x0;
  local_158 = 0;
  local_150 = 0xffffffff;
  uStack_14c = 0xffffffff;
  uStack_148 = 0xffffffff;
  uStack_144 = 0xffffffff;
  local_140 = 0;
  local_13c = 0;
  local_138 = 0;
  uVar22 = 0;
  if (((int)param_2 < 1) ||
     (memcpy(local_2a8,local_2c0,(ulonglong)param_2 << 4), uVar22 = param_2, param_2 < 8)) {
    lVar21 = (ulonglong)uVar22 << 4;
    do {
      *(undefined8 *)((longlong)local_2a8 + lVar21) = 0;
      *(undefined8 *)((longlong)local_2a8 + lVar21 + 8) = 0x3f80000000000000;
      lVar21 = lVar21 + 0x10;
    } while (lVar21 != 0x80);
  }
  if (uVar19 == 0) {
    lVar21 = 0;
  }
  else {
    lVar21 = *(longlong *)
              (*(longlong *)(*(longlong *)(lVar23 + 8) + 0x50) +
              (longlong)*(int *)(uVar19 + 0xd4) * 8);
    if (lVar21 == 0) {
      lVar21 = FUN_1400bafc2(*(longlong *)(lVar23 + 8),(longlong)*(int *)(uVar19 + 0xd4),1);
    }
  }
  uVar11 = FUN_141472624();
  local_2c8 = local_2a8;
  FUN_1449cc26b(param_1,lVar21,uVar19,uVar11);
LAB_1431f1d08:
  if (*plVar6 != 0) {
    plVar13 = plVar6 + 4;
    if ((longlong *)plVar6[2] != (longlong *)0x0) {
      plVar13 = (longlong *)plVar6[2];
    }
    (**(code **)(*plVar13 + 0x10))(plVar13);
  }
  if ((local_48 ^ (ulonglong)auStack_2e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431f2037 FUN_1431f2037 body=47 status=ok
// SIG undefined FUN_1431f2037(void)

void FUN_1431f2037(void)

{
  DAT_14ca94de8 = &PTR_FUN_14a3873d0;
  FUN_144725486(&DAT_14ca94de8);
  FUN_14631deea(&DAT_14ca94de8);
  return;
}



// FUNCTION 1431f2066 FUN_1431f2066 body=47 status=ok
// SIG undefined FUN_1431f2066(void)

void FUN_1431f2066(void)

{
  DAT_14ca94dd0 = &PTR_FUN_14a387430;
  FUN_144725486(&DAT_14ca94dd0);
  FUN_14631e008(&DAT_14ca94dd0);
  return;
}



// FUNCTION 1431f2095 FUN_1431f2095 body=240 status=ok
// SIG undefined FUN_1431f2095(void)

void FUN_1431f2095(void)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  DAT_14ca89230 = &PTR_FUN_14a387490;
  FUN_144725486(&DAT_14ca89230);
  lVar4 = DAT_14ca89240;
  DAT_14ca89230 = &PTR_FUN_14a38cff0;
  if (DAT_14ca89240 != 0) {
    LOCK();
    puVar1 = (uint *)(DAT_14ca89240 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar4 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(lVar4 + 0xd);
        plVar5 = (longlong *)FUN_14001cc68(0x10,8);
        plVar5[1] = lVar4;
        plVar7 = DAT_14ca843c0;
        plVar6 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar5 = (longlong)plVar7;
            LOCK();
            bVar8 = plVar7 != DAT_14ca843c0;
            plVar6 = plVar5;
            if (bVar8) {
              plVar7 = DAT_14ca843c0;
              plVar6 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar6;
            UNLOCK();
          } while (bVar8);
        }
        else {
          do {
            *plVar5 = (longlong)plVar6;
            LOCK();
            bVar8 = plVar6 != DAT_14ca843c8;
            plVar7 = plVar5;
            if (bVar8) {
              plVar6 = DAT_14ca843c8;
              plVar7 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar7;
            UNLOCK();
          } while (bVar8);
        }
      }
    }
  }
  DAT_14ca89230 = &PTR_FUN_14a38cd70;
  DAT_14ca8923e = 2;
  if ((DAT_14ca89238 != -1) && (DAT_14c868880 == '\0')) {
    FUN_140033559(".\\Runtime/RenderCore/Private/RenderResource.cpp",0xfe,
                  L"A FRenderResource was deleted without being released first!");
  }
  return;
}



// FUNCTION 1431f2185 FUN_1431f2185 body=47 status=ok
// SIG undefined FUN_1431f2185(void)

void FUN_1431f2185(void)

{
  DAT_14ca89248 = &PTR_FUN_14a3874c0;
  FUN_144725486(&DAT_14ca89248);
  FUN_14003f39a(&DAT_14ca89248);
  return;
}



// FUNCTION 1431f2340 FUN_1431f2340 body=586 status=ok
// SIG undefined FUN_1431f2340(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1431f2340(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca91510) {
    FUN_144b3d300(&DAT_14ca91510);
    if (DAT_14ca91510 == -1) {
      FUN_1431f88a4();
      if ((DAT_14ca91607 & 2) == 0) {
        DAT_14ca91607 = DAT_14ca91607 | 2;
        _DAT_14ca915a8 = L"FDumpTextureCS";
        _DAT_14ca915c0 = FUN_146826540;
        _DAT_14ca915c8 = FUN_146825d77;
        _DAT_14ca915d0 = FUN_146825fd6;
        _DAT_14ca915d8 = FUN_1407e02ea;
        _DAT_14ca915e0 = FUN_146826273;
        _DAT_14ca915b8 = FUN_1431f8b7c;
        _DAT_14ca915f8 = 0xffffffff000000e0;
        _DAT_14ca91600 = 8;
        DAT_14ca91604 = 0;
        _DAT_14ca915e8 = &LAB_1431f8ba8;
        _DAT_14ca91608 = L"BASE";
        DAT_14ca91632 = 4;
        FUN_140b35ae4();
        _DAT_14ca91618 = DAT_14ca915b0;
        _DAT_14ca91610 = &DAT_14ca8c6c8;
        _DAT_14ca91620 = &LAB_14682652b;
        DAT_14ca915b0 = &DAT_14ca91608;
        DAT_14ca91605 = DAT_14ca91605 + '\x01';
        _DAT_14ca91628 = 0x100000000;
        if (DAT_14ca8c72c != '\0') {
          DAT_14ca91606 = DAT_14ca91606 + '\x01';
        }
        FUN_1407e00cc(&DAT_14ca915a0);
      }
      FUN_140db5666(&DAT_14ca91468,0,&DAT_14ca915a0,L"FDumpTextureCS",
                    L"/Engine/Private/Tools/DumpTexture.usf",L"MainCS",5,3,FUN_1431f880e,
                    FUN_1431f87ae,&LAB_1431f87aa,&LAB_1431f87a6,&LAB_14712ac0c,&LAB_14712ac08,0xe0,
                    &DAT_14ca91518);
      _DAT_14ca91468 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1431f8898);
      _Init_thread_footer(&DAT_14ca91510);
    }
  }
  return &DAT_14ca91468;
}



// FUNCTION 1431f258a FUN_1431f258a body=69 status=ok
// SIG undefined FUN_1431f258a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431f258a(void)

{
  _DAT_14ca8b9c8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431f25cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca8b9d0,1);
  return;
}



// FUNCTION 1431f25cf FUN_1431f25cf body=69 status=ok
// SIG undefined FUN_1431f25cf(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431f25cf(void)

{
  _DAT_14ca8b9d8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431f2611. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca8b9e0,1);
  return;
}



// FUNCTION 1431f2614 FUN_1431f2614 body=69 status=ok
// SIG undefined FUN_1431f2614(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431f2614(void)

{
  _DAT_14ca8b9e8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431f2656. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca8b9f0,1);
  return;
}



// FUNCTION 1431f265a FUN_1431f265a body=796 status=ok
// SIG undefined FUN_1431f265a(void)

longlong * FUN_1431f265a(longlong param_1,longlong *param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined1 uVar8;
  undefined8 *puVar9;
  longlong lVar10;
  char *pcVar11;
  uint uVar12;
  longlong lVar13;
  bool bVar14;
  undefined1 auStack_c8 [32];
  undefined4 *local_a8;
  undefined1 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  ulonglong local_88;
  undefined8 *local_80;
  longlong *local_78;
  char *local_70;
  undefined4 local_68;
  uint uStack_64;
  ulonglong uStack_60;
  longlong local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + (ulonglong)param_3;
  plVar3 = *(longlong **)(param_1 + 0x20);
  pcVar11 = (char *)(param_1 + 0x10);
  LOCK();
  bVar14 = *(char *)(param_1 + 0x10) == '\0';
  if (bVar14) {
    *(char *)(param_1 + 0x10) = '\x01';
  }
  UNLOCK();
  if (!bVar14) {
    FUN_1447d2058(pcVar11);
  }
  if (*(longlong *)(param_1 + 0x18) == 0) {
    uVar6 = FUN_14001cc68(0x308,0x10);
    FUN_14009016e(uVar6,~(-1 << ((byte)DAT_14c760da4 & 0x1f)));
    *(undefined8 *)(param_1 + 0x18) = uVar6;
    FUN_14002049c(uVar6,1);
  }
  iVar4 = param_3 * 2;
  puVar7 = (undefined8 *)plVar3[2];
  local_88 = (ulonglong)param_3;
  iVar5 = (**(code **)(*DAT_14ca83900 + 0x188))();
  if ((puVar7 == (undefined8 *)0x0) ||
     (uVar12 = -iVar5 & (*(int *)(puVar7 + 5) + iVar5) - 1U, *(uint *)(puVar7 + 3) < iVar4 + uVar12)
     ) {
    iVar2 = (int)plVar3[1];
    lVar10 = (longlong)iVar2;
    local_70 = pcVar11;
    if (0 < lVar10) {
      lVar13 = 0;
      do {
        puVar7 = *(undefined8 **)(*plVar3 + lVar13 * 8);
        if ((uint)((*(int *)(puVar7 + 5) + iVar5 + -1 & -iVar5) + iVar4) <= *(uint *)(puVar7 + 3)) {
          if (puVar7 != (undefined8 *)0x0) goto LAB_1431f2846;
          break;
        }
        lVar13 = lVar13 + 1;
      } while (lVar10 != lVar13);
    }
    uVar12 = ((int)local_88 + DAT_14c760dc0) - 1;
    uVar12 = uVar12 - uVar12 % DAT_14c760dc0;
    if (uVar12 < DAT_14c760dbc) {
      uVar12 = DAT_14c760dbc;
    }
    local_78 = param_2;
    puVar7 = (undefined8 *)FUN_14001cc68(0x40);
    *puVar7 = 0;
    puVar7[1] = 0;
    puVar7[2] = 0;
    puVar7[3] = 0;
    puVar7[4] = 0;
    *puVar7 = &PTR_FUN_14a3875e0;
    puVar7[5] = 0;
    puVar7[6] = 0;
    puVar7[7] = 0;
    *(uint *)(plVar3 + 1) = iVar2 + 1U;
    puVar9 = puVar7 + 1;
    if (*(uint *)((longlong)plVar3 + 0xc) < iVar2 + 1U) {
      local_80 = puVar7 + 1;
      FUN_1456bd870(plVar3,iVar2);
      puVar9 = local_80;
    }
    *(undefined8 **)(*plVar3 + lVar10 * 8) = puVar7;
    local_a8 = (undefined4 *)CONCAT44(local_a8._4_4_,uVar12);
    local_90 = 0;
    local_98 = 2;
    local_a0 = 0x15;
    FUN_140661c88(puVar9,*(undefined8 *)(param_1 + 0x18),
                  L"FGlobalDynamicReadBuffer_AllocateInternal",2);
    param_2 = local_78;
LAB_1431f2846:
    if (puVar7[4] == 0) {
      FUN_140171566(puVar7,*(undefined8 *)(param_1 + 0x18));
    }
    plVar3[2] = (longlong)puVar7;
    uVar12 = -iVar5 & iVar5 + -1 + *(int *)(puVar7 + 5);
    pcVar11 = local_70;
  }
  *(uint *)(puVar7 + 5) = uVar12;
  *param_2 = (longlong)(int)uVar12 + puVar7[4];
  param_2[1] = (longlong)puVar7;
  local_58 = puVar7[1];
  local_68._0_2_ = 0;
  if ((*(byte *)(local_58 + 0x28) & 0x10) == 0) {
    local_68._0_2_ = 0x1500;
    uVar8 = 1;
  }
  else {
    uVar8 = 4;
  }
  local_a8 = &local_68;
  local_68 = (uint)CONCAT12(uVar8,(undefined2)local_68);
  _local_68 = CONCAT44(uVar12,local_68);
  uStack_60 = local_88 & 0xffffffff;
  (**(code **)(*DAT_14ca83900 + 0x1b8))(DAT_14ca83900,&local_50,*(undefined8 *)(param_1 + 0x18));
  iVar5 = *(int *)(puVar7 + 7);
  *(uint *)(puVar7 + 7) = iVar5 + 1U;
  if (*(uint *)((longlong)puVar7 + 0x3c) < iVar5 + 1U) {
    FUN_14178e592(puVar7 + 6,iVar5);
  }
  *(undefined8 *)(puVar7[6] + (longlong)iVar5 * 8) = local_50;
  param_2[2] = *(longlong *)(puVar7[6] + (longlong)(*(int *)(puVar7 + 7) + -1) * 8);
  *(int *)(puVar7 + 5) = *(int *)(puVar7 + 5) + iVar4;
  LOCK();
  cVar1 = *pcVar11;
  if (cVar1 == '\x01') {
    *pcVar11 = '\0';
  }
  UNLOCK();
  if (cVar1 != '\x01') {
    FUN_14008cdb0(pcVar11);
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1431f2978 FUN_1431f2978 body=802 status=ok
// SIG undefined FUN_1431f2978(void)

longlong * FUN_1431f2978(longlong param_1,longlong *param_2,longlong *param_3,uint param_4)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined1 uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  bool bVar13;
  undefined1 auStack_c8 [32];
  undefined4 *local_a8;
  undefined1 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined8 *local_88;
  ulonglong local_80;
  longlong *local_78;
  char *local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  ulonglong uStack_60;
  longlong local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  pcVar1 = (char *)(param_1 + 0x10);
  LOCK();
  bVar13 = *(char *)(param_1 + 0x10) == '\0';
  if (bVar13) {
    *(char *)(param_1 + 0x10) = '\x01';
  }
  UNLOCK();
  if (!bVar13) {
    FUN_1447d2058(pcVar1);
  }
  *param_2 = 0;
  param_2[1] = 0;
  local_70 = pcVar1;
  if (*(longlong *)(param_1 + 0x18) == 0) {
    uVar5 = FUN_14001cc68(0x308,0x10);
    FUN_14009016e(uVar5,~(-1 << ((byte)DAT_14c760da4 & 0x1f)));
    *(undefined8 *)(param_1 + 0x18) = uVar5;
    FUN_14002049c(uVar5,1);
  }
  iVar10 = param_4 * 4;
  puVar6 = (undefined8 *)param_3[2];
  iVar4 = (**(code **)(*DAT_14ca83900 + 0x188))();
  if ((puVar6 == (undefined8 *)0x0) ||
     (uVar11 = -iVar4 & (*(int *)(puVar6 + 5) + iVar4) - 1U, *(uint *)(puVar6 + 3) < iVar10 + uVar11
     )) {
    iVar3 = (int)param_3[1];
    lVar9 = (longlong)iVar3;
    local_78 = param_2;
    if (0 < lVar9) {
      lVar12 = 0;
      do {
        puVar6 = *(undefined8 **)(*param_3 + lVar12 * 8);
        if ((uint)((*(int *)(puVar6 + 5) + iVar4 + -1 & -iVar4) + iVar10) <= *(uint *)(puVar6 + 3))
        {
          if (puVar6 != (undefined8 *)0x0) goto LAB_1431f2b68;
          break;
        }
        lVar12 = lVar12 + 1;
      } while (lVar9 != lVar12);
    }
    uVar11 = (param_4 + DAT_14c760dc0) - 1;
    uVar11 = uVar11 - uVar11 % DAT_14c760dc0;
    if (uVar11 < DAT_14c760dbc) {
      uVar11 = DAT_14c760dbc;
    }
    local_80 = (ulonglong)param_4;
    puVar6 = (undefined8 *)FUN_14001cc68(0x40);
    *puVar6 = 0;
    puVar6[1] = 0;
    puVar6[2] = 0;
    puVar6[3] = 0;
    puVar6[4] = 0;
    *puVar6 = &PTR_FUN_14a3875e0;
    puVar6[5] = 0;
    puVar6[6] = 0;
    puVar6[7] = 0;
    *(uint *)(param_3 + 1) = iVar3 + 1U;
    puVar8 = puVar6 + 1;
    if (*(uint *)((longlong)param_3 + 0xc) < iVar3 + 1U) {
      local_88 = puVar6 + 1;
      FUN_1456bd870(param_3,iVar3);
      puVar8 = local_88;
    }
    *(undefined8 **)(*param_3 + lVar9 * 8) = puVar6;
    local_a8 = (undefined4 *)CONCAT44(local_a8._4_4_,uVar11);
    local_90 = 0;
    local_98 = 2;
    local_a0 = 0x1c;
    FUN_140661c88(puVar8,*(undefined8 *)(param_1 + 0x18),
                  L"FGlobalDynamicReadBuffer_AllocateInternal",4);
    param_4 = (uint)local_80;
LAB_1431f2b68:
    if (puVar6[4] == 0) {
      FUN_140171566(puVar6,*(undefined8 *)(param_1 + 0x18));
    }
    param_3[2] = (longlong)puVar6;
    uVar11 = -iVar4 & iVar4 + -1 + *(int *)(puVar6 + 5);
    param_2 = local_78;
  }
  *(uint *)(puVar6 + 5) = uVar11;
  *param_2 = (longlong)(int)uVar11 + puVar6[4];
  param_2[1] = (longlong)puVar6;
  local_58 = puVar6[1];
  local_68._0_2_ = 0;
  if ((*(byte *)(local_58 + 0x28) & 0x10) == 0) {
    local_68._0_2_ = 0x1c00;
    uVar7 = 1;
  }
  else {
    uVar7 = 4;
  }
  local_a8 = &local_68;
  local_68 = (uint)CONCAT12(uVar7,(undefined2)local_68);
  _local_68 = CONCAT44(*(undefined4 *)(puVar6 + 5),local_68);
  uStack_60 = (ulonglong)param_4;
  (**(code **)(*DAT_14ca83900 + 0x1b8))(DAT_14ca83900,&local_50,*(undefined8 *)(param_1 + 0x18));
  iVar4 = *(int *)(puVar6 + 7);
  uVar11 = iVar4 + 1;
  *(uint *)(puVar6 + 7) = uVar11;
  if (*(uint *)((longlong)puVar6 + 0x3c) < uVar11) {
    FUN_14178e592(puVar6 + 6);
  }
  *(undefined8 *)(puVar6[6] + (longlong)iVar4 * 8) = local_50;
  param_2[2] = *(longlong *)(puVar6[6] + (longlong)(*(int *)(puVar6 + 7) + -1) * 8);
  *(int *)(puVar6 + 5) = *(int *)(puVar6 + 5) + iVar10;
  LOCK();
  cVar2 = *local_70;
  if (cVar2 == '\x01') {
    *local_70 = '\0';
  }
  UNLOCK();
  if (cVar2 != '\x01') {
    FUN_14008cdb0();
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1431f2c9c FUN_1431f2c9c body=370 status=ok
// SIG undefined FUN_1431f2c9c(void)

undefined8 * FUN_1431f2c9c(undefined8 *param_1,wchar_t *param_2,undefined8 param_3)

{
  size_t sVar1;
  undefined1 auStack_e8 [40];
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  longlong local_40;
  char *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  *param_1 = param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = param_3;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = param_1;
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined1 *)((longlong)param_1 + 0x3c) = 0;
  param_1[8] = 0x3f8000003f000000;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0x3ca3d70a;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0x3d4ccccd;
  *(undefined4 *)(param_1 + 0xb) = 0x3f666666;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  param_1[0xc] = 0;
  sVar1 = wcslen(param_2);
  FUN_14631bc80(param_1 + 1,(int)sVar1 + 1,1);
  local_40 = 0;
  if (param_2 == (wchar_t *)0x0) {
    local_38 = (char *)0x0;
    local_30 = 0;
  }
  else {
    sVar1 = wcslen(param_2);
    FUN_1449b853c(&local_c0,param_2,sVar1 & 0xffffffff,1);
  }
  strcpy((char *)param_1[1],local_38);
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14ca8ba00 != (undefined8 *)0x0) {
    *(undefined8 **)((longlong)DAT_14ca8ba00 + 8) = param_1 + 4;
  }
  param_1[4] = DAT_14ca8ba00;
  param_1[5] = &DAT_14ca8ba00;
  DAT_14ca8ba00 = param_1 + 4;
  *(int *)((longlong)param_1 + 100) = DAT_14ca8b9f8;
  DAT_14ca8b9f8 = DAT_14ca8b9f8 + 1;
  (*(code *)param_1[3])(&local_c0);
  *(undefined4 *)((longlong)param_1 + 0x54) = uStack_a4;
  *(undefined4 *)(param_1 + 0xb) = uStack_a0;
  *(undefined4 *)((longlong)param_1 + 0x5c) = uStack_9c;
  *(undefined4 *)(param_1 + 0xc) = uStack_98;
  *(undefined4 *)(param_1 + 9) = local_b0;
  *(undefined4 *)((longlong)param_1 + 0x4c) = uStack_ac;
  *(undefined4 *)(param_1 + 10) = uStack_a8;
  *(undefined4 *)((longlong)param_1 + 0x54) = uStack_a4;
  *(undefined4 *)(param_1 + 7) = local_c0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = uStack_bc;
  *(undefined4 *)(param_1 + 8) = uStack_b8;
  *(undefined4 *)((longlong)param_1 + 0x44) = uStack_b4;
  if ((local_28 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431f2e4c FUN_1431f2e4c body=1660 status=ok
// SIG undefined FUN_1431f2e4c(void)

void FUN_1431f2e4c(longlong param_1,int param_2,longlong param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  ulonglong *puVar4;
  undefined8 *puVar5;
  byte bVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong uVar14;
  uint uVar15;
  ulonglong uVar16;
  int iVar17;
  ulonglong uVar18;
  undefined8 *puVar19;
  int iVar20;
  bool bVar21;
  undefined1 auStack_128 [32];
  uint *local_108;
  undefined1 local_f1;
  longlong local_f0;
  uint local_e8;
  uint local_e4;
  ulonglong *local_e0;
  uint local_d8;
  int local_d4;
  uint local_d0;
  int local_cc;
  longlong local_c8;
  longlong local_c0;
  undefined8 local_b8;
  undefined1 local_ad;
  uint local_ac;
  uint local_a8;
  undefined4 local_a4;
  ulonglong local_a0;
  longlong local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_128;
  uVar10 = *(uint *)(param_3 + 0x60);
  plVar3 = *(longlong **)
            (&DAT_14ca8c1f0 + (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)param_2 * 2) * 8);
  local_f0 = param_3;
  local_b8 = param_4;
  FUN_1460d4a04();
  if ((int)plVar3[1] != *(int *)((longlong)plVar3 + 0x34)) {
    plVar7 = plVar3 + 7;
    if ((longlong *)plVar3[8] != (longlong *)0x0) {
      plVar7 = (longlong *)plVar3[8];
    }
    iVar17 = *(int *)((longlong)plVar7 +
                     (ulonglong)
                     ((int)plVar3[9] - 1U &
                     (int)DAT_14ca8bab0 + (int)((ulonglong)DAT_14ca8bab0 >> 0x20) * 0x17) * 4);
    if (iVar17 != -1) {
      uVar10 = uVar10 >> 4 & 1;
      do {
        plVar7 = (longlong *)(*plVar3 + (longlong)iVar17 * 0x18);
        if (*plVar7 == DAT_14ca8bab0) {
          lVar9 = 0;
          if (plVar7 != (longlong *)0x0) {
            uVar18 = 0;
            if (plVar7 + 1 == (longlong *)0x0) goto LAB_1431f304e;
            lVar9 = plVar7[1];
            puVar4 = *(ulonglong **)(lVar9 + 0x28);
            uVar18 = (DAT_14ca8baa8 ^ uVar10) * -0x622015f714c7d297;
            lVar13 = (uVar18 >> 0x2f ^ uVar10 ^ uVar18) * -0x622015f714c7d297;
            uVar18 = puVar4[3];
            if ((uVar18 & 1) != 0) {
              uVar18 = (longlong)puVar4 + ((longlong)uVar18 >> 0x18) + 0x18;
            }
            uVar12 = puVar4[5];
            if ((uVar12 & 1) != 0) {
              uVar12 = (longlong)puVar4 + ((longlong)uVar12 >> 0x18) + 0x28;
            }
            uVar14 = puVar4[1];
            if ((uVar14 & 1) != 0) {
              uVar14 = (longlong)puVar4 + ((longlong)uVar14 >> 0x18) + 8;
            }
            uVar16 = *puVar4;
            if ((uVar16 & 1) != 0) {
              uVar16 = ((longlong)uVar16 >> 0x18) + (longlong)puVar4;
            }
            uVar15 = *(uint *)(uVar16 + (ulonglong)
                                        ((uint)puVar4[2] &
                                         ((uint)((ulonglong)lVar13 >> 0x2f) ^ (uint)lVar13) * 0x2d69
                                        & 0xffff) * 4);
            if (uVar15 != 0xffffffff) {
              goto LAB_1431f2ffe;
            }
          }
          break;
        }
        iVar17 = (int)plVar7[2];
      } while (iVar17 != -1);
    }
  }
  goto LAB_1431f3019;
  while (uVar15 = *(uint *)(uVar14 + uVar16 * 4), uVar15 != 0xffffffff) {
LAB_1431f2ffe:
    uVar16 = (ulonglong)uVar15;
    if ((*(ulonglong *)(uVar18 + uVar16 * 8) == DAT_14ca8baa8) &&
       (*(uint *)(uVar12 + uVar16 * 4) == uVar10)) {
      uVar12 = puVar4[7];
      if ((uVar12 & 1) != 0) {
        uVar12 = (longlong)(puVar4 + 7) + ((longlong)uVar12 >> 0x18);
      }
      uVar18 = *(ulonglong *)(uVar12 + (longlong)(int)uVar15 * 8);
      if ((uVar18 & 1) != 0) {
        uVar18 = ((longlong)uVar18 >> 0x18) + uVar12 + (longlong)(int)uVar15 * 8;
      }
      if (uVar18 != 0) goto LAB_1431f304e;
      break;
    }
  }
LAB_1431f3019:
  lVar9 = 0;
  uVar18 = 0;
LAB_1431f304e:
  FUN_1460d4a04();
  cVar1 = *(char *)(local_f0 + 0x92);
  if ((cVar1 == '\x04') || (cVar1 == '\x01')) {
    local_e8 = (uint)*(ushort *)(local_f0 + 0x8e);
  }
  else {
    local_e8 = 0;
  }
  bVar21 = cVar1 != '\x03';
  if (bVar21) {
    local_d4 = 1;
  }
  else {
    local_d4 = 6;
    local_e8 = 1;
  }
  local_d8 = (uint)!bVar21;
  local_e4 = (uint)!bVar21;
  local_d0 = (uint)*(byte *)(local_f0 + 0x90);
  local_a0 = uVar18;
  local_98 = lVar9;
  if (1 < local_d0) {
    local_f1 = *(undefined1 *)(local_f0 + 0x94);
    local_e0 = (ulonglong *)(param_1 + 0x70);
    local_c0 = param_1 + 0x98;
    local_c8 = param_1 + 0x198;
    uVar10 = 1;
    do {
      bVar6 = (byte)uVar10;
      iVar17 = *(int *)(local_f0 + 0x88) >> (bVar6 & 0x1f);
      if (iVar17 < 2) {
        iVar17 = 1;
      }
      iVar11 = *(int *)(local_f0 + 0x84) >> (bVar6 & 0x1f);
      if (iVar11 < 2) {
        iVar11 = 1;
      }
      local_cc = uVar10 - 1;
      iVar20 = 0;
      do {
        puVar4 = local_e0;
        puVar19 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
        puVar5 = puVar19 + 6;
        if (*(undefined8 **)(param_1 + 0x78) < puVar5) {
          FUN_140023dd8(local_e0,0x40);
          puVar19 = (undefined8 *)(*puVar4 + 0xf & 0xfffffffffffffff0);
          puVar5 = puVar19 + 6;
        }
        *(undefined8 **)(param_1 + 0x70) = puVar5;
        *puVar19 = &PTR_FUN_14a387618;
        puVar19[3] = 0;
        puVar19[4] = 0;
        puVar19[5] = 0;
        iVar2 = *(int *)(param_1 + 0xa0);
        *(uint *)(param_1 + 0xa0) = iVar2 + 1U;
        if (*(uint *)(param_1 + 0xa4) < iVar2 + 1U) {
          FUN_1448cfae8(local_c0,iVar2);
        }
        puVar4 = local_e0;
        *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar2 * 8) = puVar19;
        *(float *)(puVar19 + 2) = 1.0 / (float)iVar11;
        *(float *)((longlong)puVar19 + 0x14) = 1.0 / (float)iVar17;
        puVar8 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
        puVar5 = puVar8 + 8;
        if (*(undefined8 **)(param_1 + 0x78) < puVar5) {
          FUN_140023dd8(local_e0,0x48);
          puVar8 = (undefined8 *)(*puVar4 + 7 & 0xfffffffffffffff8);
          puVar5 = puVar8 + 8;
        }
        *local_e0 = (ulonglong)puVar5;
        puVar8[1] = *(undefined8 *)(local_f0 + 8);
        puVar8[2] = 0;
        *(undefined1 *)(puVar8 + 3) = 1;
        *(undefined8 *)((longlong)puVar8 + 0x1c) = 0xffffffffffffffff;
        *puVar8 = &PTR_FUN_14a203858;
        *(undefined1 *)(puVar8 + 5) = 0;
        *(char *)((longlong)puVar8 + 0x29) = (char)local_cc;
        *(undefined2 *)((longlong)puVar8 + 0x2a) = 1;
        *(short *)((longlong)puVar8 + 0x2c) = (short)iVar20;
        *(short *)((longlong)puVar8 + 0x2e) = (short)local_e8;
        *(undefined1 *)(puVar8 + 6) = 0;
        *(char *)((longlong)puVar8 + 0x32) = (char)local_e4;
        if ((char)local_e4 != '\0') {
          *(undefined1 *)((longlong)puVar8 + 0x31) = 1;
        }
        puVar8[7] = local_f0;
        iVar2 = *(int *)(param_1 + 0x1a0);
        *(uint *)(param_1 + 0x1a0) = iVar2 + 1U;
        if (*(uint *)(param_1 + 0x1a4) < iVar2 + 1U) {
          FUN_1447568fc(local_c8,iVar2);
        }
        puVar4 = local_e0;
        *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar2 * 8) = puVar8;
        *(int *)((longlong)puVar8 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
        puVar19[3] = puVar8;
        puVar8 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
        puVar5 = puVar8 + 9;
        if (*(undefined8 **)(param_1 + 0x78) < puVar5) {
          FUN_140023dd8(local_e0,0x50);
          puVar8 = (undefined8 *)(*puVar4 + 7 & 0xfffffffffffffff8);
          puVar5 = puVar8 + 9;
        }
        *local_e0 = (ulonglong)puVar5;
        puVar8[1] = *(undefined8 *)(local_f0 + 8);
        puVar8[2] = 0;
        *(undefined1 *)(puVar8 + 3) = 0;
        *(undefined8 *)((longlong)puVar8 + 0x1c) = 0xffffffffffffffff;
        *(undefined1 *)(puVar8 + 5) = 0;
        *puVar8 = &PTR_FUN_14a1fb948;
        *(undefined1 *)(puVar8 + 6) = local_f1;
        *(byte *)((longlong)puVar8 + 0x31) = bVar6;
        *(short *)((longlong)puVar8 + 0x32) = (short)iVar20;
        *(short *)((longlong)puVar8 + 0x34) = (short)local_d8;
        *(undefined1 *)((longlong)puVar8 + 0x36) = 0;
        *(char *)(puVar8 + 7) = (char)local_e4;
        if ((char)local_e4 != '\0') {
          *(undefined1 *)((longlong)puVar8 + 0x37) = 1;
        }
        puVar8[8] = local_f0;
        iVar2 = *(int *)(param_1 + 0x1a0);
        *(uint *)(param_1 + 0x1a0) = iVar2 + 1U;
        if (*(uint *)(param_1 + 0x1a4) < iVar2 + 1U) {
          FUN_1447568fc(local_c8,iVar2);
        }
        *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar2 * 8) = puVar8;
        *(int *)((longlong)puVar8 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
        puVar19[4] = puVar8;
        puVar19[5] = local_b8;
        local_a4 = 1;
        local_108 = &local_ac;
        local_ac = iVar11 + 7U >> 3;
        local_a8 = iVar17 + 7U >> 3;
        FUN_145a5e4f9(param_1,&local_ad,&local_a0,puVar19 + 2);
        iVar20 = iVar20 + 1;
      } while (local_d4 != iVar20);
      uVar10 = uVar10 + 1;
    } while (uVar10 != local_d0);
  }
  if ((local_90 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1431f34ca FUN_1431f34ca body=4463 status=ok
// SIG undefined FUN_1431f34ca(void)

void FUN_1431f34ca(longlong param_1,int param_2,longlong param_3,undefined8 param_4,longlong param_5
                  ,undefined4 param_6)

{
  ulonglong *puVar1;
  undefined1 uVar2;
  int iVar3;
  uint uVar4;
  undefined8 *puVar5;
  byte bVar6;
  longlong *plVar7;
  uint uVar8;
  longlong *plVar9;
  undefined4 uVar10;
  int iVar11;
  undefined8 *puVar12;
  undefined2 uVar14;
  undefined8 *puVar15;
  undefined8 **ppuVar16;
  int iVar17;
  undefined8 *puVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  longlong lVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  int iVar24;
  undefined1 auStack_208 [32];
  wchar_t *local_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  char *local_1d0;
  undefined4 local_1c8;
  undefined4 local_1c0;
  undefined8 **local_1b8;
  undefined1 local_1b0;
  undefined8 local_1a8;
  undefined1 local_1a0;
  ulonglong *local_190;
  longlong local_188;
  undefined *local_180;
  longlong local_178;
  undefined8 *local_170;
  longlong *local_168;
  uint local_15c;
  longlong local_158;
  ulonglong local_150;
  undefined8 local_148;
  undefined1 local_139;
  longlong local_138 [2];
  longlong *local_128;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  longlong *plStack_f0;
  undefined *local_e8;
  undefined8 *puStack_e0;
  int local_d8;
  longlong local_c8;
  longlong *local_b8;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 *local_88;
  longlong local_80;
  undefined *local_78;
  ulonglong local_70;
  undefined6 uVar13;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_208;
  uVar4 = 2;
  if (2 < (byte)*(uint *)(param_3 + 0x90)) {
    uVar4 = *(uint *)(param_3 + 0x90);
  }
  plVar7 = *(longlong **)
            (&DAT_14ca8c1f0 + (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)param_2 * 2) * 8);
  uVar4 = (uVar4 & 0xff) - 1;
  uVar8 = 0xc;
  if (DAT_14ca84e48 < 0xc) {
    uVar8 = DAT_14ca84e48;
  }
  plStack_f0 = (longlong *)CONCAT44(plStack_f0._4_4_,0x4189);
  local_e8 = (undefined *)0x0;
  if (DAT_14ca84e48 <= uVar4) {
    uVar4 = DAT_14ca84e48;
  }
  local_f8 = (undefined8 **)CONCAT44(uVar4 + (uVar4 == 0),uVar8 + (uVar8 == 0));
  puVar1 = (ulonglong *)(param_1 + 0x70);
  puVar12 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar5 = puVar12 + 0x2a;
  local_190 = puVar1;
  local_188 = param_3;
  local_148 = param_4;
  if (*(undefined8 **)(param_1 + 0x78) < puVar5) {
    FUN_140023dd8(puVar1,0x160);
    puVar12 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
    puVar5 = puVar12 + 0x2a;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar5;
  FUN_1456bd266(puVar12,L"IndirectDispatchArgsBuffer",&local_f8,0);
  iVar24 = *(int *)(param_1 + 400);
  *(uint *)(param_1 + 400) = iVar24 + 1U;
  if (*(uint *)(param_1 + 0x194) < iVar24 + 1U) {
    FUN_144737178(param_1 + 0x188,iVar24);
  }
  puVar1 = local_190;
  *(undefined8 **)(*(longlong *)(param_1 + 0x188) + (longlong)iVar24 * 8) = puVar12;
  *(int *)((longlong)puVar12 + 0x7c) = *(int *)(param_1 + 400) + -1;
  puVar15 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar5 = puVar15 + 6;
  if (*(undefined8 **)(param_1 + 0x78) < puVar5) {
    FUN_140023dd8(local_190,0x40);
    puVar15 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
    puVar5 = puVar15 + 6;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar5;
  *puVar15 = &PTR_FUN_14a387638;
  local_168 = (longlong *)(param_1 + 0x98);
  puVar15[4] = 0;
  puVar15[5] = 0;
  iVar24 = *(int *)(param_1 + 0xa0);
  *(uint *)(param_1 + 0xa0) = iVar24 + 1U;
  if (*(uint *)(param_1 + 0xa4) < iVar24 + 1U) {
    FUN_1448cfae8(local_168,iVar24);
  }
  puVar1 = local_190;
  *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar24 * 8) = puVar15;
  puVar15[2] = *(undefined8 *)(local_188 + 0x84);
  *(undefined4 *)(puVar15 + 3) = param_6;
  *(uint *)((longlong)puVar15 + 0x1c) = (uint)*(byte *)(local_188 + 0x90);
  puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar5 = puVar18 + 9;
  if (*(undefined8 **)(param_1 + 0x78) < puVar5) {
    FUN_140023dd8(local_190,0x50);
    puVar18 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar5 = puVar18 + 9;
  }
  local_178 = param_1 + 0x198;
  *(undefined8 **)(param_1 + 0x70) = puVar5;
  puVar18[1] = *(undefined8 *)(param_5 + 8);
  puVar18[2] = 0;
  *(undefined1 *)(puVar18 + 3) = 3;
  *(undefined8 *)((longlong)puVar18 + 0x1c) = 0xffffffffffffffff;
  *puVar18 = &PTR_FUN_14a1fb168;
  *(undefined1 *)(puVar18 + 5) = 0x1c;
  *(undefined8 *)((longlong)puVar18 + 0x2c) = 0xffffffff00000000;
  puVar18[7] = 0;
  puVar18[8] = param_5;
  iVar24 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar24 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar24 + 1U) {
    FUN_1447568fc(local_178,iVar24);
  }
  puVar1 = local_190;
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar24 * 8) = puVar18;
  *(int *)((longlong)puVar18 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
  puVar15[4] = puVar18;
  puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar5 = puVar18 + 8;
  if (*(undefined8 **)(param_1 + 0x78) < puVar5) {
    FUN_140023dd8(local_190,0x48);
    puVar18 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar5 = puVar18 + 8;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar5;
  puVar18[1] = puVar12[1];
  puVar18[2] = 0;
  *(undefined1 *)(puVar18 + 3) = 2;
  *(undefined8 *)((longlong)puVar18 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar18 + 5) = 0;
  *puVar18 = &PTR_FUN_14a1fb3e8;
  *(undefined2 *)(puVar18 + 6) = 0x1c;
  *(undefined1 *)((longlong)puVar18 + 0x32) = 0;
  puVar18[7] = puVar12;
  iVar24 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar24 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar24 + 1U) {
    FUN_1447568fc(local_178,iVar24);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar24 * 8) = puVar18;
  *(int *)((longlong)puVar18 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
  puVar15[5] = puVar18;
  puVar15 = puVar15 + 2;
  FUN_14157ab72();
  if ((int)plVar7[1] != *(int *)((longlong)plVar7 + 0x34)) {
    plVar9 = plVar7 + 7;
    if ((longlong *)plVar7[8] != (longlong *)0x0) {
      plVar9 = (longlong *)plVar7[8];
    }
    iVar24 = *(int *)((longlong)plVar9 +
                     (ulonglong)
                     ((int)plVar7[9] - 1U &
                     (int)DAT_14ca8be28 + (int)((ulonglong)DAT_14ca8be28 >> 0x20) * 0x17) * 4);
    if (iVar24 != -1) {
      do {
        plVar9 = (longlong *)(*plVar7 + (longlong)iVar24 * 0x18);
        if (*plVar9 == DAT_14ca8be28) {
          local_180 = (undefined *)0x0;
          if (plVar9 != (longlong *)0x0) {
            uVar19 = 0;
            if (plVar9 + 1 == (longlong *)0x0) goto LAB_1431f3989;
            local_180 = (undefined *)plVar9[1];
            puVar1 = *(ulonglong **)((longlong)local_180 + 0x28);
            lVar21 = ((ulonglong)(DAT_14ca8be20 * -0x622015f714c7d297) >> 0x2f ^
                     DAT_14ca8be20 * -0x622015f714c7d297) * -0x622015f714c7d297;
            uVar19 = puVar1[3];
            if ((uVar19 & 1) != 0) {
              uVar19 = (longlong)puVar1 + ((longlong)uVar19 >> 0x18) + 0x18;
            }
            uVar20 = puVar1[5];
            if ((uVar20 & 1) != 0) {
              uVar20 = (longlong)puVar1 + ((longlong)uVar20 >> 0x18) + 0x28;
            }
            uVar22 = puVar1[1];
            if ((uVar22 & 1) != 0) {
              uVar22 = (longlong)puVar1 + ((longlong)uVar22 >> 0x18) + 8;
            }
            uVar23 = *puVar1;
            if ((uVar23 & 1) != 0) {
              uVar23 = ((longlong)uVar23 >> 0x18) + (longlong)puVar1;
            }
            uVar4 = *(uint *)(uVar23 + (ulonglong)
                                       ((uint)puVar1[2] &
                                        ((uint)((ulonglong)lVar21 >> 0x2f) ^ (uint)lVar21) * 0x2d69
                                       & 0xffff) * 4);
            if (uVar4 != 0xffffffff) {
              goto LAB_1431f3937;
            }
          }
          break;
        }
        iVar24 = (int)plVar9[2];
      } while (iVar24 != -1);
    }
  }
  goto LAB_1431f3954;
  while (uVar8 = *(uint *)(uVar22 + uVar23 * 4), uVar8 != 0xffffffff) {
LAB_1431f3c81:
    uVar23 = (ulonglong)uVar8;
    if ((*(ulonglong *)(uVar19 + uVar23 * 8) == DAT_14ca8bf48) &&
       (*(uint *)(uVar20 + uVar23 * 4) == uVar4)) {
      uVar20 = puVar1[7];
      if ((uVar20 & 1) != 0) {
        uVar20 = (longlong)(puVar1 + 7) + ((longlong)uVar20 >> 0x18);
      }
      uVar19 = *(ulonglong *)(uVar20 + (longlong)(int)uVar8 * 8);
      if ((uVar19 & 1) != 0) {
        uVar19 = ((longlong)uVar19 >> 0x18) + uVar20 + (longlong)(int)uVar8 * 8;
      }
      if (uVar19 != 0) goto LAB_1431f3cda;
      break;
    }
  }
  goto LAB_1431f3ca6;
  while (uVar4 = *(uint *)(uVar22 + uVar23 * 4), uVar4 != 0xffffffff) {
LAB_1431f3937:
    uVar23 = (ulonglong)uVar4;
    if ((*(longlong *)(uVar19 + uVar23 * 8) == DAT_14ca8be20) &&
       (*(int *)(uVar20 + uVar23 * 4) == 0)) {
      uVar20 = puVar1[7];
      if ((uVar20 & 1) != 0) {
        uVar20 = (longlong)(puVar1 + 7) + ((longlong)uVar20 >> 0x18);
      }
      uVar19 = *(ulonglong *)(uVar20 + (longlong)(int)uVar4 * 8);
      if ((uVar19 & 1) != 0) {
        uVar19 = ((longlong)uVar19 >> 0x18) + uVar20 + (longlong)(int)uVar4 * 8;
      }
      if (uVar19 != 0) goto LAB_1431f3989;
      break;
    }
  }
LAB_1431f3954:
  local_180 = (undefined *)0x0;
  uVar19 = 0;
LAB_1431f3989:
  local_170 = puVar12;
  FUN_14157ab72();
  bVar6 = *(byte *)(local_188 + 0x90);
  FUN_14157ac94();
  local_f8 = (undefined8 **)0x0;
  plStack_f0 = (longlong *)0x0;
  FUN_1448f70da(uVar19,&DAT_14ca91748,puVar15);
  FUN_140069376(param_1);
  puVar1 = local_190;
  uVar13 = (undefined6)((ulonglong)puVar12 >> 0x10);
  uVar10 = (undefined4)CONCAT62(uVar13,2);
  if ((((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) && (DAT_14c760ddc == 2)) &&
     ((DAT_14ca84e6a != '\0' && ((DAT_14ca84e99 & 1) == 0)))) {
    uVar10 = (undefined4)CONCAT62(uVar13,4);
  }
  puVar12 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar5 = puVar12 + 0x3d;
  if (*(undefined8 **)(param_1 + 0x78) < puVar5) {
    FUN_140023dd8(local_190,0x1f0);
    puVar12 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar5 = puVar12 + 0x3d;
  }
  *local_190 = (ulonglong)puVar5;
  plStack_f0 = (longlong *)DAT_14ca91790;
  if (DAT_14ca91790 != 0) {
    LOCK();
    *(int *)(DAT_14ca91790 + 8) = *(int *)(DAT_14ca91790 + 8) + 1;
    UNLOCK();
  }
  local_e8 = &DAT_14ca91748;
  local_1e8 = (wchar_t *)CONCAT71(local_1e8._1_7_,2);
  local_f8 = (undefined8 **)puVar15;
  FUN_140068f1a(puVar12,local_138,&local_f8,uVar10);
  *puVar12 = &PTR_FUN_14a387640;
  puVar12[0x37] = &DAT_14ca91748;
  puVar12[0x38] = puVar15;
  puVar12[0x39] = uVar19;
  puVar12[0x3a] = local_180;
  *(uint *)(puVar12 + 0x3b) = bVar6 + 6 >> 3;
  *(undefined1 **)((longlong)puVar12 + 0x1dc) = &DAT_100000001;
  local_158 = param_1 + 0x168;
  iVar24 = *(int *)(param_1 + 0x170);
  *(uint *)(param_1 + 0x170) = iVar24 + 1U;
  if (*(uint *)(param_1 + 0x174) < iVar24 + 1U) {
    FUN_14470e57a(local_158,iVar24);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar24 * 8) = puVar12;
  *(int *)((longlong)puVar12 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
  FUN_140069100(param_1,puVar12);
  uVar4 = *(uint *)(local_188 + 0x60);
  FUN_1415a95e8();
  if ((int)plVar7[1] != *(int *)((longlong)plVar7 + 0x34)) {
    plVar9 = plVar7 + 7;
    if ((longlong *)plVar7[8] != (longlong *)0x0) {
      plVar9 = (longlong *)plVar7[8];
    }
    iVar24 = *(int *)((longlong)plVar9 +
                     (ulonglong)
                     ((int)plVar7[9] - 1U &
                     (int)DAT_14ca8bf50 + (int)((ulonglong)DAT_14ca8bf50 >> 0x20) * 0x17) * 4);
    if (iVar24 != -1) {
      uVar4 = uVar4 >> 4 & 1;
      do {
        plVar9 = (longlong *)(*plVar7 + (longlong)iVar24 * 0x18);
        if (*plVar9 == DAT_14ca8bf50) {
          local_180 = (undefined *)0x0;
          if (plVar9 != (longlong *)0x0) {
            uVar19 = 0;
            if (plVar9 + 1 == (longlong *)0x0) goto LAB_1431f3cda;
            local_180 = (undefined *)plVar9[1];
            puVar1 = *(ulonglong **)(local_180 + 0x28);
            uVar19 = (DAT_14ca8bf48 ^ uVar4) * -0x622015f714c7d297;
            lVar21 = (uVar19 >> 0x2f ^ uVar4 ^ uVar19) * -0x622015f714c7d297;
            uVar19 = puVar1[3];
            if ((uVar19 & 1) != 0) {
              uVar19 = (longlong)puVar1 + ((longlong)uVar19 >> 0x18) + 0x18;
            }
            uVar20 = puVar1[5];
            if ((uVar20 & 1) != 0) {
              uVar20 = (longlong)puVar1 + ((longlong)uVar20 >> 0x18) + 0x28;
            }
            uVar22 = puVar1[1];
            if ((uVar22 & 1) != 0) {
              uVar22 = (longlong)puVar1 + ((longlong)uVar22 >> 0x18) + 8;
            }
            uVar23 = *puVar1;
            if ((uVar23 & 1) != 0) {
              uVar23 = ((longlong)uVar23 >> 0x18) + (longlong)puVar1;
            }
            uVar8 = *(uint *)(uVar23 + (ulonglong)
                                       ((uint)puVar1[2] &
                                        ((uint)((ulonglong)lVar21 >> 0x2f) ^ (uint)lVar21) * 0x2d69
                                       & 0xffff) * 4);
            if (uVar8 != 0xffffffff) {
              goto LAB_1431f3c81;
            }
          }
          break;
        }
        iVar24 = (int)plVar9[2];
      } while (iVar24 != -1);
    }
  }
LAB_1431f3ca6:
  local_180 = (undefined *)0x0;
  uVar19 = 0;
LAB_1431f3cda:
  FUN_1415a95e8();
  local_15c = (uint)*(byte *)(local_188 + 0x90);
  if (1 < local_15c) {
    iVar24 = 0;
    uVar4 = 1;
    local_150 = uVar19;
    do {
      puVar1 = local_190;
      bVar6 = (byte)uVar4;
      iVar17 = *(int *)(local_188 + 0x88) >> (bVar6 & 0x1f);
      if (iVar17 < 2) {
        iVar17 = 1;
      }
      iVar11 = *(int *)(local_188 + 0x84) >> (bVar6 & 0x1f);
      if (iVar11 < 2) {
        iVar11 = 1;
      }
      puVar12 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
      puVar5 = puVar12 + 8;
      if (*(undefined8 **)(param_1 + 0x78) < puVar5) {
        FUN_140023dd8(local_190,0x50);
        puVar12 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
        puVar5 = puVar12 + 8;
      }
      *(undefined8 **)(param_1 + 0x70) = puVar5;
      *puVar12 = &PTR_FUN_14a387658;
      puVar12[3] = 0;
      puVar12[4] = 0;
      puVar12[5] = 0;
      puVar12[6] = 0;
      *(undefined4 *)(puVar12 + 7) = 4;
      iVar3 = *(int *)(param_1 + 0xa0);
      *(uint *)(param_1 + 0xa0) = iVar3 + 1U;
      if (*(uint *)(param_1 + 0xa4) < iVar3 + 1U) {
        FUN_1448cfae8(local_168,iVar3);
      }
      puVar5 = local_170;
      puVar1 = local_190;
      *(undefined8 **)(*local_168 + (longlong)iVar3 * 8) = puVar12;
      *(float *)(puVar12 + 2) = 1.0 / (float)iVar11;
      *(float *)((longlong)puVar12 + 0x14) = 1.0 / (float)iVar17;
      if ((*(char *)(local_188 + 0x92) == '\x04') || (*(char *)(local_188 + 0x92) == '\x01')) {
        uVar14 = *(undefined2 *)(local_188 + 0x8e);
      }
      else {
        uVar14 = 0;
      }
      puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar15 = puVar18 + 8;
      if (*(undefined8 **)(param_1 + 0x78) < puVar15) {
        FUN_140023dd8(local_190,0x48);
        puVar18 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
        puVar15 = puVar18 + 8;
      }
      *(undefined8 **)(param_1 + 0x70) = puVar15;
      puVar18[1] = *(undefined8 *)(local_188 + 8);
      puVar18[2] = 0;
      *(undefined1 *)(puVar18 + 3) = 1;
      *(undefined8 *)((longlong)puVar18 + 0x1c) = 0xffffffffffffffff;
      *puVar18 = &PTR_FUN_14a203858;
      *(undefined1 *)(puVar18 + 5) = 0;
      *(byte *)((longlong)puVar18 + 0x29) = bVar6 - 1;
      *(undefined4 *)((longlong)puVar18 + 0x2a) = 1;
      *(undefined2 *)((longlong)puVar18 + 0x2e) = uVar14;
      *(undefined1 *)(puVar18 + 6) = 0;
      *(undefined1 *)((longlong)puVar18 + 0x32) = 0;
      puVar18[7] = local_188;
      iVar17 = *(int *)(param_1 + 0x1a0);
      *(uint *)(param_1 + 0x1a0) = iVar17 + 1U;
      if (*(uint *)(param_1 + 0x1a4) < iVar17 + 1U) {
        FUN_1447568fc(local_178,iVar17);
      }
      puVar1 = local_190;
      *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar17 * 8) = puVar18;
      *(int *)((longlong)puVar18 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
      puVar12[3] = puVar18;
      uVar2 = *(undefined1 *)(local_188 + 0x94);
      puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar15 = puVar18 + 9;
      if (*(undefined8 **)(param_1 + 0x78) < puVar15) {
        FUN_140023dd8(local_190,0x50);
        puVar18 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
        puVar15 = puVar18 + 9;
      }
      *(undefined8 **)(param_1 + 0x70) = puVar15;
      puVar18[1] = *(undefined8 *)(local_188 + 8);
      puVar18[2] = 0;
      *(undefined1 *)(puVar18 + 3) = 0;
      *(undefined8 *)((longlong)puVar18 + 0x1c) = 0xffffffffffffffff;
      *(undefined1 *)(puVar18 + 5) = 0;
      *puVar18 = &PTR_FUN_14a1fb948;
      *(undefined1 *)(puVar18 + 6) = uVar2;
      *(byte *)((longlong)puVar18 + 0x31) = bVar6;
      *(undefined4 *)((longlong)puVar18 + 0x32) = 0;
      *(undefined1 *)((longlong)puVar18 + 0x36) = 0;
      *(undefined1 *)(puVar18 + 7) = 0;
      puVar18[8] = local_188;
      iVar17 = *(int *)(param_1 + 0x1a0);
      ppuVar16 = (undefined8 **)(longlong)iVar17;
      *(uint *)(param_1 + 0x1a0) = iVar17 + 1U;
      if (*(uint *)(param_1 + 0x1a4) < iVar17 + 1U) {
        FUN_1447568fc(local_178,iVar17);
      }
      *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)ppuVar16 * 8) = puVar18;
      *(int *)((longlong)puVar18 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
      puVar12[4] = puVar18;
      puVar12[5] = local_148;
      puVar12[6] = puVar5;
      *(undefined4 *)(puVar12 + 7) = 4;
      local_138[0] = 0;
      local_128 = (longlong *)0x0;
      local_88 = puVar5;
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14ca91850) && (FUN_144b3d300(&DAT_14ca91850), DAT_14ca91850 == -1))
      {
        ppuVar16 = (undefined8 **)&local_f8;
        FUN_145f98bc8(ppuVar16);
        local_1a0 = 0;
        local_1b0 = 0;
        local_1d0 = "Unknown";
        local_1e0 = 0;
        uStack_1d8 = 0;
        local_1e8 = L"FParameters";
        local_1a8 = 0;
        local_1c0 = 0x30;
        local_1c8 = 0x6e;
        local_1b8 = ppuVar16;
        FUN_140b49562(&DAT_14ca917d0,0,1);
        if (local_f8 != (undefined8 **)0x0) {
          FUN_1400020a8();
        }
        atexit((_func_5014 *)&LAB_1431f8c39);
        _Init_thread_footer(&DAT_14ca91850);
        puVar5 = local_170;
      }
      uVar19 = local_150;
      puVar12 = puVar12 + 2;
      local_f8 = &local_88;
      plStack_f0 = &local_80;
      FUN_1448f70da(local_150,&DAT_14ca917d0,puVar12,&local_f8);
      plStack_f0 = (longlong *)uVar19;
      local_e8 = local_180;
      local_c8 = local_138[0];
      local_b8 = local_128;
      local_128 = (longlong *)0x0;
      local_98 = local_108;
      uStack_94 = uStack_104;
      uStack_90 = uStack_100;
      uStack_8c = uStack_fc;
      local_a8 = local_118;
      uStack_a4 = uStack_114;
      uStack_a0 = uStack_110;
      uStack_9c = uStack_10c;
      if (local_138[0] != 0) {
        local_138[0] = 0;
      }
      local_f8 = (undefined8 **)puVar12;
      puStack_e0 = puVar5;
      local_d8 = iVar24;
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14ca91850) && (FUN_144b3d300(&DAT_14ca91850), DAT_14ca91850 == -1))
      {
        ppuVar16 = &local_88;
        FUN_145f98bc8(ppuVar16);
        local_1a0 = 0;
        local_1b0 = 0;
        local_1d0 = "Unknown";
        local_1e0 = 0;
        uStack_1d8 = 0;
        local_1e8 = L"FParameters";
        local_1a8 = 0;
        local_1c0 = 0x30;
        local_1c8 = 0x6e;
        local_1b8 = ppuVar16;
        FUN_140b49562(&DAT_14ca917d0,0,1);
        if (local_88 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
        atexit((_func_5014 *)&LAB_1431f8c39);
        _Init_thread_footer(&DAT_14ca91850);
      }
      FUN_140069376(param_1);
      puVar1 = local_190;
      uVar13 = (undefined6)((ulonglong)ppuVar16 >> 0x10);
      uVar10 = (undefined4)CONCAT62(uVar13,2);
      if ((((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) && (DAT_14c760ddc == 2)) &&
         ((DAT_14ca84e6a != '\0' && ((DAT_14ca84e99 & 1) == 0)))) {
        uVar10 = (undefined4)CONCAT62(uVar13,4);
      }
      puVar15 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
      puVar5 = puVar15 + 0x46;
      if (*(undefined8 **)(param_1 + 0x78) < puVar5) {
        FUN_140023dd8(local_190,0x240);
        puVar15 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
        puVar5 = puVar15 + 0x46;
      }
      *local_190 = (ulonglong)puVar5;
      local_80 = DAT_14ca91818;
      if (DAT_14ca91818 != 0) {
        LOCK();
        *(int *)(DAT_14ca91818 + 8) = *(int *)(DAT_14ca91818 + 8) + 1;
        UNLOCK();
      }
      local_78 = &DAT_14ca917d0;
      local_1e8 = (wchar_t *)CONCAT71(local_1e8._1_7_,2);
      local_88 = puVar12;
      FUN_140068f1a(puVar15,&local_139,&local_88,uVar10);
      *puVar15 = &PTR_FUN_14a387660;
      puVar15[0x38] = local_f8;
      puVar15[0x39] = plStack_f0;
      puVar15[0x3a] = local_e8;
      puVar15[0x3b] = puStack_e0;
      *(int *)(puVar15 + 0x3c) = local_d8;
      puVar15[0x3e] = local_c8;
      puVar15[0x40] = local_b8;
      local_b8 = (longlong *)0x0;
      *(undefined4 *)(puVar15 + 0x44) = local_98;
      *(undefined4 *)((longlong)puVar15 + 0x224) = uStack_94;
      *(undefined4 *)(puVar15 + 0x45) = uStack_90;
      *(undefined4 *)((longlong)puVar15 + 0x22c) = uStack_8c;
      *(undefined4 *)(puVar15 + 0x42) = local_a8;
      *(undefined4 *)((longlong)puVar15 + 0x214) = uStack_a4;
      *(undefined4 *)(puVar15 + 0x43) = uStack_a0;
      *(undefined4 *)((longlong)puVar15 + 0x21c) = uStack_9c;
      if (local_c8 != 0) {
        local_c8 = 0;
      }
      iVar17 = *(int *)(param_1 + 0x170);
      *(uint *)(param_1 + 0x170) = iVar17 + 1U;
      if (*(uint *)(param_1 + 0x174) < iVar17 + 1U) {
        FUN_14470e57a(local_158,iVar17);
      }
      *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar17 * 8) = puVar15;
      *(int *)((longlong)puVar15 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
      FUN_140069100(param_1,puVar15);
      if (local_c8 != 0) {
        plVar7 = local_b8;
        if (local_b8 == (longlong *)0x0) {
          plVar7 = (longlong *)&local_a8;
        }
        (**(code **)(*plVar7 + 0x10))();
      }
      if (local_138[0] != 0) {
        plVar7 = local_128;
        if (local_128 == (longlong *)0x0) {
          plVar7 = (longlong *)&local_118;
        }
        (**(code **)(*plVar7 + 0x10))();
      }
      iVar24 = iVar24 + 0xc;
      uVar4 = uVar4 + 1;
    } while (uVar4 != local_15c);
  }
  if ((local_70 ^ (ulonglong)auStack_208) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1431f463a FUN_1431f463a body=583 status=ok
// SIG undefined FUN_1431f463a(void)

void FUN_1431f463a(longlong param_1,undefined4 param_2,longlong param_3,undefined1 *param_4,
                  undefined4 param_5)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  bool bVar12;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  longlong local_68;
  undefined1 local_5c;
  undefined1 local_5b;
  undefined1 local_5a;
  undefined1 local_59;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_4c;
  undefined1 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (1 < *(byte *)(param_3 + 0x90)) {
    local_59 = param_4[0xc];
    local_5a = param_4[8];
    local_5c = *param_4;
    local_5b = param_4[4];
    local_58 = 0;
    local_50 = 0x7f7fffff;
    local_4c = 0;
    local_44 = 0;
    (**(code **)(*DAT_14ca83900 + 0x48))(DAT_14ca83900,&local_68);
    puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar7 = puVar11 + 2;
    if (*(undefined8 **)(param_1 + 0x78) < puVar7) {
      FUN_140023dd8((longlong *)(param_1 + 0x70),0x20);
      puVar11 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
      puVar7 = puVar11 + 2;
    }
    *(undefined8 **)(param_1 + 0x70) = puVar7;
    *puVar11 = &PTR_FUN_14a387678;
    puVar11[1] = local_68;
    local_68 = 0;
    iVar4 = *(int *)(param_1 + 0xa0);
    *(uint *)(param_1 + 0xa0) = iVar4 + 1U;
    if (*(uint *)(param_1 + 0xa4) < iVar4 + 1U) {
      FUN_1448cfae8((longlong *)(param_1 + 0x98),iVar4);
    }
    lVar6 = local_68;
    *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar4 * 8) = puVar11;
    lVar5 = puVar11[1];
    if (lVar5 != 0) {
      LOCK();
      *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
      UNLOCK();
    }
    if (local_68 != 0) {
      LOCK();
      puVar1 = (uint *)(local_68 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_68 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(local_68 + 0xd);
          plVar8 = (longlong *)FUN_14001cc68(0x10,8);
          plVar8[1] = lVar6;
          plVar10 = DAT_14ca843c0;
          plVar9 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar8 = (longlong)plVar10;
              LOCK();
              bVar12 = plVar10 != DAT_14ca843c0;
              plVar9 = plVar8;
              if (bVar12) {
                plVar10 = DAT_14ca843c0;
                plVar9 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar9;
              UNLOCK();
            } while (bVar12);
          }
          else {
            do {
              *plVar8 = (longlong)plVar9;
              LOCK();
              bVar12 = plVar9 != DAT_14ca843c8;
              plVar10 = plVar8;
              if (bVar12) {
                plVar9 = DAT_14ca843c8;
                plVar10 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar10;
              UNLOCK();
            } while (bVar12);
          }
        }
      }
    }
    local_78 = param_5;
    FUN_1431f4882(param_1,param_2,param_3,lVar5);
    if (lVar5 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar5 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar5 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(lVar5 + 0xd);
          plVar8 = (longlong *)FUN_14001cc68(0x10,8);
          plVar8[1] = lVar5;
          plVar10 = DAT_14ca843c0;
          plVar9 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar8 = (longlong)plVar10;
              LOCK();
              bVar12 = plVar10 != DAT_14ca843c0;
              plVar9 = plVar8;
              if (bVar12) {
                plVar10 = DAT_14ca843c0;
                plVar9 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar9;
              UNLOCK();
            } while (bVar12);
          }
          else {
            do {
              *plVar8 = (longlong)plVar9;
              LOCK();
              bVar12 = plVar9 != DAT_14ca843c8;
              plVar10 = plVar8;
              if (bVar12) {
                plVar9 = DAT_14ca843c8;
                plVar10 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar10;
              UNLOCK();
            } while (bVar12);
          }
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



// FUNCTION 1431f4882 FUN_1431f4882 body=2780 status=ok
// SIG undefined FUN_1431f4882(void)

void FUN_1431f4882(longlong param_1,int param_2,longlong param_3,undefined8 param_4,int param_5)

{
  ulonglong *puVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  byte bVar10;
  longlong *plVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  int iVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  undefined8 *puVar18;
  uint uVar19;
  bool bVar20;
  bool bVar21;
  float fVar22;
  undefined1 auStack_168 [32];
  undefined1 local_148;
  undefined1 local_131;
  longlong local_130;
  uint local_124;
  longlong local_120;
  longlong local_118;
  uint local_110;
  uint local_10c;
  undefined8 local_108;
  longlong local_100;
  longlong local_f8;
  longlong local_f0;
  ulonglong local_e8;
  ulonglong local_e0;
  ulonglong local_d8;
  undefined1 local_c9;
  undefined8 *local_c8;
  longlong local_c0;
  undefined *local_b8;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_130 = param_3;
  local_108 = param_4;
  iVar4 = (**(code **)(*DAT_14ca83900 + 0x28))();
  if (iVar4 == 7) {
    puVar1 = (ulonglong *)(param_1 + 0x70);
    puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
    puVar8 = puVar13 + 6;
    if (*(undefined8 **)(param_1 + 0x78) < puVar8) {
      FUN_140023dd8(puVar1,0x40);
      puVar13 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
      puVar8 = puVar13 + 6;
    }
    *(undefined8 **)(param_1 + 0x70) = puVar8;
    *puVar13 = &PTR_FUN_14a387680;
    puVar13[2] = 0;
    puVar13[3] = 0;
    *(undefined4 *)(puVar13 + 4) = 0;
    iVar4 = *(int *)(param_1 + 0xa0);
    *(uint *)(param_1 + 0xa0) = iVar4 + 1U;
    if (*(uint *)(param_1 + 0xa4) < iVar4 + 1U) {
      FUN_1448cfae8((longlong *)(param_1 + 0x98),iVar4);
    }
    *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar4 * 8) = puVar13;
    if (local_130 == 0) {
      uVar9 = 0;
    }
    else {
      uVar9 = *(undefined8 *)(local_130 + 0xac);
    }
    puVar13[2] = local_130;
    puVar13[3] = uVar9;
    *(undefined4 *)(puVar13 + 4) = 0x2000;
    FUN_147426b94();
    FUN_140069376(param_1);
    puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar8 = puVar18 + 0x38;
    if (*(undefined8 **)(param_1 + 0x78) < puVar8) {
      FUN_140023dd8(puVar1,0x1c8);
      puVar18 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar8 = puVar18 + 0x38;
    }
    *puVar1 = (ulonglong)puVar8;
    local_c0 = DAT_14ca943e8;
    if (DAT_14ca943e8 != 0) {
      LOCK();
      *(int *)(DAT_14ca943e8 + 8) = *(int *)(DAT_14ca943e8 + 8) + 1;
      UNLOCK();
    }
    local_b8 = &DAT_14ca943a0;
    local_148 = 2;
    local_c8 = puVar13 + 2;
    FUN_140068f1a(puVar18,&local_c9,&local_c8,8);
    *puVar18 = &PTR_FUN_14a387690;
    puVar18[0x37] = local_130;
    iVar4 = *(int *)(param_1 + 0x170);
    *(uint *)(param_1 + 0x170) = iVar4 + 1U;
    if (*(uint *)(param_1 + 0x174) < iVar4 + 1U) {
      FUN_14470e57a(param_1 + 0x168,iVar4);
    }
    *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar4 * 8) = puVar18;
    *(int *)((longlong)puVar18 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
    FUN_140069100(param_1,puVar18);
    goto LAB_1431f5341;
  }
  if ((param_5 == 1) ||
     (((param_5 == 0 &&
       ((*(byte *)((longlong)&DAT_14c873430 +
                  (ulonglong)((uint)*(byte *)(local_130 + 0x93) * 0x30) + 2) & 0x40) != 0)) &&
      ((*(byte *)(local_130 + 0x62) & 2) != 0)))) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_b0 ^ (ulonglong)auStack_168);
  }
  plVar3 = *(longlong **)
            (&DAT_14ca8c1f0 + (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)param_2 * 2) * 8);
  FUN_1460d27e2();
  if ((int)plVar3[1] != *(int *)((longlong)plVar3 + 0x34)) {
    plVar11 = plVar3 + 7;
    if ((longlong *)plVar3[8] != (longlong *)0x0) {
      plVar11 = (longlong *)plVar3[8];
    }
    iVar4 = *(int *)((longlong)plVar11 +
                    (ulonglong)
                    ((int)plVar3[9] - 1U &
                    (int)DAT_14ca8bbd8 + (int)((ulonglong)DAT_14ca8bbd8 >> 0x20) * 0x17) * 4);
    if (iVar4 != -1) {
      do {
        plVar11 = (longlong *)(*plVar3 + (longlong)iVar4 * 0x18);
        if (*plVar11 == DAT_14ca8bbd8) {
          local_118 = 0;
          if (plVar11 != (longlong *)0x0) {
            local_e0 = 0;
            if (plVar11 + 1 == (longlong *)0x0) goto LAB_1431f4b65;
            local_118 = plVar11[1];
            puVar1 = *(ulonglong **)(local_118 + 0x28);
            lVar7 = ((ulonglong)(DAT_14ca8bbd0 * -0x622015f714c7d297) >> 0x2f ^
                    DAT_14ca8bbd0 * -0x622015f714c7d297) * -0x622015f714c7d297;
            uVar12 = puVar1[3];
            if ((uVar12 & 1) != 0) {
              uVar12 = (longlong)puVar1 + ((longlong)uVar12 >> 0x18) + 0x18;
            }
            uVar15 = puVar1[5];
            if ((uVar15 & 1) != 0) {
              uVar15 = (longlong)puVar1 + ((longlong)uVar15 >> 0x18) + 0x28;
            }
            uVar16 = puVar1[1];
            if ((uVar16 & 1) != 0) {
              uVar16 = (longlong)puVar1 + ((longlong)uVar16 >> 0x18) + 8;
            }
            uVar17 = *puVar1;
            if ((uVar17 & 1) != 0) {
              uVar17 = ((longlong)uVar17 >> 0x18) + (longlong)puVar1;
            }
            uVar19 = *(uint *)(uVar17 + (ulonglong)
                                        ((uint)puVar1[2] &
                                         ((uint)((ulonglong)lVar7 >> 0x2f) ^ (uint)lVar7) * 0x2d69 &
                                        0xffff) * 4);
            if (uVar19 != 0xffffffff) {
              goto LAB_1431f4b0f;
            }
          }
          break;
        }
        iVar4 = (int)plVar11[2];
      } while (iVar4 != -1);
    }
  }
  goto LAB_1431f4b32;
  while (uVar19 = *(uint *)(uVar16 + uVar17 * 4), uVar19 != 0xffffffff) {
LAB_1431f4cae:
    uVar17 = (ulonglong)uVar19;
    if ((*(longlong *)(uVar12 + uVar17 * 8) == DAT_14ca8bcf8) &&
       (*(int *)(uVar15 + uVar17 * 4) == 0)) {
      uVar12 = puVar1[7];
      if ((uVar12 & 1) != 0) {
        uVar12 = (longlong)(puVar1 + 7) + ((longlong)uVar12 >> 0x18);
      }
      local_e8 = *(ulonglong *)(uVar12 + (longlong)(int)uVar19 * 8);
      if ((local_e8 & 1) != 0) {
        local_e8 = ((longlong)local_e8 >> 0x18) + uVar12 + (longlong)(int)uVar19 * 8;
      }
      if (local_e8 != 0) goto LAB_1431f4d04;
      break;
    }
  }
  goto LAB_1431f4cd1;
  while (uVar19 = *(uint *)(uVar16 + uVar17 * 4), uVar19 != 0xffffffff) {
LAB_1431f4b0f:
    uVar17 = (ulonglong)uVar19;
    if ((*(longlong *)(uVar12 + uVar17 * 8) == DAT_14ca8bbd0) &&
       (*(int *)(uVar15 + uVar17 * 4) == 0)) {
      uVar12 = puVar1[7];
      if ((uVar12 & 1) != 0) {
        uVar12 = (longlong)(puVar1 + 7) + ((longlong)uVar12 >> 0x18);
      }
      local_e0 = *(ulonglong *)(uVar12 + (longlong)(int)uVar19 * 8);
      if ((local_e0 & 1) != 0) {
        local_e0 = ((longlong)local_e0 >> 0x18) + uVar12 + (longlong)(int)uVar19 * 8;
      }
      if (local_e0 != 0) goto LAB_1431f4b65;
      break;
    }
  }
LAB_1431f4b32:
  local_118 = 0;
  local_e0 = 0;
LAB_1431f4b65:
  FUN_1460d27e2();
  FUN_145eb85aa();
  if ((int)plVar3[1] != *(int *)((longlong)plVar3 + 0x34)) {
    plVar11 = plVar3 + 7;
    if ((longlong *)plVar3[8] != (longlong *)0x0) {
      plVar11 = (longlong *)plVar3[8];
    }
    iVar4 = *(int *)((longlong)plVar11 +
                    (ulonglong)
                    ((int)plVar3[9] - 1U &
                    (int)DAT_14ca8bd00 + (int)((ulonglong)DAT_14ca8bd00 >> 0x20) * 0x17) * 4);
    if (iVar4 != -1) {
      do {
        plVar11 = (longlong *)(*plVar3 + (longlong)iVar4 * 0x18);
        if (*plVar11 == DAT_14ca8bd00) {
          local_120 = 0;
          if (plVar11 != (longlong *)0x0) {
            local_e8 = 0;
            if (plVar11 + 1 == (longlong *)0x0) goto LAB_1431f4d04;
            local_120 = plVar11[1];
            puVar1 = *(ulonglong **)(local_120 + 0x28);
            lVar7 = ((ulonglong)(DAT_14ca8bcf8 * -0x622015f714c7d297) >> 0x2f ^
                    DAT_14ca8bcf8 * -0x622015f714c7d297) * -0x622015f714c7d297;
            uVar12 = puVar1[3];
            if ((uVar12 & 1) != 0) {
              uVar12 = (longlong)puVar1 + ((longlong)uVar12 >> 0x18) + 0x18;
            }
            uVar15 = puVar1[5];
            if ((uVar15 & 1) != 0) {
              uVar15 = (longlong)puVar1 + ((longlong)uVar15 >> 0x18) + 0x28;
            }
            uVar16 = puVar1[1];
            if ((uVar16 & 1) != 0) {
              uVar16 = (longlong)puVar1 + ((longlong)uVar16 >> 0x18) + 8;
            }
            uVar17 = *puVar1;
            if ((uVar17 & 1) != 0) {
              uVar17 = ((longlong)uVar17 >> 0x18) + (longlong)puVar1;
            }
            uVar19 = *(uint *)(uVar17 + (ulonglong)
                                        ((uint)puVar1[2] &
                                         ((uint)((ulonglong)lVar7 >> 0x2f) ^ (uint)lVar7) * 0x2d69 &
                                        0xffff) * 4);
            if (uVar19 != 0xffffffff) {
              goto LAB_1431f4cae;
            }
          }
          break;
        }
        iVar4 = (int)plVar11[2];
      } while (iVar4 != -1);
    }
  }
LAB_1431f4cd1:
  local_120 = 0;
  local_e8 = 0;
LAB_1431f4d04:
  FUN_145eb85aa();
  bVar10 = *(byte *)(local_130 + 0x92);
  if ((bVar10 == 4) || (bVar10 == 1)) {
    local_10c = (uint)*(ushort *)(local_130 + 0x8e);
  }
  else {
    local_10c = 0;
  }
  local_124 = (uint)bVar10;
  local_131 = bVar10 == 3;
  if ((bool)local_131) {
    local_10c = 1;
  }
  local_110 = (uint)*(byte *)(local_130 + 0x90);
  if (1 < local_110) {
    puVar1 = (ulonglong *)(param_1 + 0x70);
    local_f0 = param_1 + 0x98;
    local_100 = param_1 + 0x198;
    local_f8 = param_1 + 0x168;
    uVar19 = 1;
    do {
      bVar10 = (byte)uVar19;
      iVar4 = *(int *)(local_130 + 0x88) >> (bVar10 & 0x1f);
      if (iVar4 < 2) {
        iVar4 = 1;
      }
      iVar14 = *(int *)(local_130 + 0x84) >> (bVar10 & 0x1f);
      local_d8 = (ulonglong)(uVar19 - 1);
      if (iVar14 < 2) {
        iVar14 = 1;
      }
      fVar22 = (float)local_d8;
      uVar6 = 0;
      do {
        puVar13 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
        puVar8 = puVar13 + 0x26;
        if (*(undefined8 **)(param_1 + 0x78) < puVar8) {
          FUN_140023dd8(puVar1,0x140);
          puVar13 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
          puVar8 = puVar13 + 0x26;
        }
        *puVar1 = (ulonglong)puVar8;
        *puVar13 = &PTR_FUN_14a3875f0;
        puVar13[4] = 0;
        puVar13[5] = 0;
        lVar7 = 0x42;
        do {
          puVar8 = (undefined8 *)((longlong)puVar13 + lVar7 + -0x12);
          *puVar8 = 0;
          puVar8[1] = 0;
          *(undefined4 *)((longlong)puVar13 + lVar7 + -2) = 0xffff0000;
          lVar7 = lVar7 + 0x18;
        } while (lVar7 != 0x102);
        *(undefined4 *)((longlong)puVar13 + 0x104) = 0;
        puVar13[0x1e] = 0;
        puVar13[0x1f] = 0;
        *(undefined2 *)(puVar13 + 0x20) = 0;
        *(undefined4 *)(puVar13 + 0x21) = 0xffffffff;
        *(undefined4 *)((longlong)puVar13 + 0x10c) = 0xffffffff;
        *(undefined4 *)(puVar13 + 0x22) = 0xffffffff;
        *(undefined4 *)((longlong)puVar13 + 0x114) = 0xffffffff;
        *(undefined4 *)(puVar13 + 0x23) = 0;
        *(undefined2 *)((longlong)puVar13 + 0x11c) = 0;
        puVar13[0x24] = 0;
        iVar2 = *(int *)(param_1 + 0xa0);
        *(uint *)(param_1 + 0xa0) = iVar2 + 1U;
        if (*(uint *)(param_1 + 0xa4) < iVar2 + 1U) {
          FUN_1448cfae8(local_f0,iVar2);
        }
        *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar2 * 8) = puVar13;
        *(float *)(puVar13 + 2) = 0.5 / (float)iVar14;
        *(float *)((longlong)puVar13 + 0x14) = 0.5 / (float)iVar4;
        *(float *)(puVar13 + 3) = fVar22;
        puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
        puVar8 = puVar18 + 8;
        if (*(undefined8 **)(param_1 + 0x78) < puVar8) {
          FUN_140023dd8(puVar1,0x48);
          puVar18 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
          puVar8 = puVar18 + 8;
        }
        *puVar1 = (ulonglong)puVar8;
        puVar18[1] = *(undefined8 *)(local_130 + 8);
        puVar18[2] = 0;
        *(undefined1 *)(puVar18 + 3) = 1;
        *(undefined8 *)((longlong)puVar18 + 0x1c) = 0xffffffffffffffff;
        *puVar18 = &PTR_FUN_14a203858;
        *(undefined1 *)(puVar18 + 5) = 0;
        *(char *)((longlong)puVar18 + 0x29) = (char)local_d8;
        *(undefined2 *)((longlong)puVar18 + 0x2a) = 1;
        *(short *)((longlong)puVar18 + 0x2c) = (short)uVar6;
        *(short *)((longlong)puVar18 + 0x2e) = (short)local_10c;
        *(undefined1 *)(puVar18 + 6) = 0;
        *(undefined1 *)((longlong)puVar18 + 0x32) = local_131;
        if ((char)local_124 == '\x03') {
          *(undefined1 *)((longlong)puVar18 + 0x31) = 1;
        }
        puVar18[7] = local_130;
        iVar2 = *(int *)(param_1 + 0x1a0);
        *(uint *)(param_1 + 0x1a0) = iVar2 + 1U;
        if (*(uint *)(param_1 + 0x1a4) < iVar2 + 1U) {
          FUN_1447568fc(local_100,iVar2);
        }
        *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar2 * 8) = puVar18;
        *(int *)((longlong)puVar18 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
        puVar13[4] = puVar18;
        puVar13[5] = local_108;
        uVar5 = 0xffff;
        if ((char)local_124 == '\x03') {
          uVar5 = uVar6;
        }
        puVar13[6] = local_130;
        puVar13[7] = 0;
        *(undefined1 *)(puVar13 + 8) = 1;
        *(byte *)((longlong)puVar13 + 0x41) = bVar10;
        *(short *)((longlong)puVar13 + 0x42) = (short)uVar5;
        FUN_145eb8822();
        FUN_140069376(param_1);
        puVar18 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
        puVar8 = puVar18 + 0x3d;
        if (*(undefined8 **)(param_1 + 0x78) < puVar8) {
          FUN_140023dd8(puVar1,0x1f0);
          puVar18 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
          puVar8 = puVar18 + 0x3d;
        }
        *puVar1 = (ulonglong)puVar8;
        local_c0 = DAT_14ca91708;
        if (DAT_14ca91708 != 0) {
          LOCK();
          *(int *)(DAT_14ca91708 + 8) = *(int *)(DAT_14ca91708 + 8) + 1;
          UNLOCK();
        }
        local_b8 = &DAT_14ca916c0;
        local_148 = 2;
        local_c8 = puVar13 + 2;
        FUN_140068f1a(puVar18,&local_c9,&local_c8,1);
        *puVar18 = &PTR_FUN_14a387600;
        puVar18[0x37] = local_e0;
        puVar18[0x38] = local_118;
        puVar18[0x39] = local_e8;
        puVar18[0x3a] = local_120;
        puVar18[0x3b] = puVar13 + 2;
        puVar18[0x3c] = CONCAT44(iVar4,iVar14);
        iVar2 = *(int *)(param_1 + 0x170);
        *(uint *)(param_1 + 0x170) = iVar2 + 1U;
        if (*(uint *)(param_1 + 0x174) < iVar2 + 1U) {
          FUN_14470e57a(local_f8,iVar2);
        }
        bVar21 = (char)local_124 == '\x03';
        *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar2 * 8) = puVar18;
        *(int *)((longlong)puVar18 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
        FUN_140069100(param_1,puVar18);
        bVar20 = uVar6 < 5;
        uVar6 = uVar6 + 1;
      } while (bVar21 && bVar20);
      uVar19 = uVar19 + 1;
    } while (uVar19 != local_110);
  }
LAB_1431f5341:
  if ((local_b0 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1431f53ba FUN_1431f53ba body=69 status=ok
// SIG undefined FUN_1431f53ba(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431f53ba(void)

{
  _DAT_14ca8bfe0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431f53fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca8bfe8,1);
  return;
}



// FUNCTION 1431f53ff FUN_1431f53ff body=69 status=ok
// SIG undefined FUN_1431f53ff(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431f53ff(void)

{
  _DAT_14ca8bff0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431f5441. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca8bff8,1);
  return;
}



// FUNCTION 1431f5444 FUN_1431f5444 body=1112 status=ok
// SIG undefined FUN_1431f5444(void)

void FUN_1431f5444(longlong param_1,longlong param_2)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  char cVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined4 *puVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  bool bVar11;
  undefined1 auStack_d8 [32];
  undefined1 *local_b8;
  undefined1 *local_b0;
  longlong local_a0;
  undefined1 local_98 [8];
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined1 local_88 [16];
  undefined4 local_78;
  undefined1 local_74 [16];
  uint local_64;
  undefined1 local_60;
  undefined4 local_5c;
  wchar_t *local_58;
  undefined1 local_50 [16];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_88 = (undefined1  [16])0x0;
  local_78 = 1;
  local_74 = (undefined1  [16])0x0;
  local_64 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_60 = 0;
  local_5c = 0;
  local_58 = L"FNullColorVertexBuffer";
  local_50 = (undefined1  [16])0x0;
  uStack_90 = 0x4101;
  local_98 = (undefined1  [8])0x10;
  if (*(char *)(param_2 + 0x69) == '\0') {
    FUN_14002049c(param_2,1);
    local_b0 = local_88;
    local_b8 = (undefined1 *)CONCAT44(local_b8._4_4_,0x78);
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_a0,param_2,local_98);
    *(undefined4 *)(local_a0 + 0x18) = 0x78;
    FUN_14002049c(param_2,0);
  }
  else {
    local_b0 = local_88;
    local_b8 = (undefined1 *)CONCAT44(local_b8._4_4_,0x78);
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_a0,param_2,local_98);
    *(undefined4 *)(local_a0 + 0x18) = 0x78;
  }
  plVar10 = (longlong *)(param_1 + 0x10);
  if (plVar10 == &local_a0) {
LAB_1431f55dd:
    lVar5 = local_a0;
    if (local_a0 != 0) {
      LOCK();
      puVar1 = (uint *)(local_a0 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_a0 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(local_a0 + 0xd);
          plVar6 = (longlong *)FUN_14001cc68(0x10,8);
          plVar6[1] = lVar5;
          plVar9 = DAT_14ca843c0;
          plVar8 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar6 = (longlong)plVar9;
              LOCK();
              bVar11 = plVar9 != DAT_14ca843c0;
              plVar8 = plVar6;
              if (bVar11) {
                plVar9 = DAT_14ca843c0;
                plVar8 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar8;
              UNLOCK();
            } while (bVar11);
          }
          else {
            do {
              *plVar6 = (longlong)plVar8;
              LOCK();
              bVar11 = plVar8 != DAT_14ca843c8;
              plVar9 = plVar6;
              if (bVar11) {
                plVar8 = DAT_14ca843c8;
                plVar9 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar9;
              UNLOCK();
            } while (bVar11);
          }
        }
      }
    }
  }
  else {
    lVar5 = *plVar10;
    *plVar10 = local_a0;
    local_a0 = 0;
    if (lVar5 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar5 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar5 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(lVar5 + 0xd);
          plVar6 = (longlong *)FUN_14001cc68(0x10,8);
          plVar6[1] = lVar5;
          plVar9 = DAT_14ca843c0;
          plVar8 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar6 = (longlong)plVar9;
              LOCK();
              bVar11 = plVar9 != DAT_14ca843c0;
              plVar8 = plVar6;
              if (bVar11) {
                plVar9 = DAT_14ca843c0;
                plVar8 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar8;
              UNLOCK();
            } while (bVar11);
          }
          else {
            do {
              *plVar6 = (longlong)plVar8;
              LOCK();
              bVar11 = plVar8 != DAT_14ca843c8;
              plVar9 = plVar6;
              if (bVar11) {
                plVar8 = DAT_14ca843c8;
                plVar9 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar9;
              UNLOCK();
            } while (bVar11);
          }
        }
      }
      goto LAB_1431f55dd;
    }
  }
  lVar5 = *plVar10;
  cVar4 = *(char *)(param_2 + 0x69);
  if (cVar4 == '\0') {
    FUN_14002049c(param_2,1);
  }
  local_b0 = (undefined1 *)CONCAT44(local_b0._4_4_,1);
  local_b8 = (undefined1 *)CONCAT44(local_b8._4_4_,0x10);
  puVar7 = (undefined4 *)(**(code **)(*DAT_14ca83900 + 0x158))(DAT_14ca83900,param_2,lVar5,0);
  if (cVar4 == '\0') {
    FUN_14002049c(param_2,0);
  }
  *puVar7 = 0xffffffff;
  puVar7[1] = 0xffffffff;
  puVar7[2] = 0xffffffff;
  puVar7[3] = 0xffffffff;
  lVar5 = *plVar10;
  if (*(char *)(param_2 + 0x69) == '\0') {
    FUN_14002049c(param_2,1);
    (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_2,lVar5);
    FUN_14002049c(param_2,0);
  }
  else {
    (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_2,lVar5);
  }
  if ((*plVar10 == 0) || ((*(byte *)(*plVar10 + 0x28) & 0x10) == 0)) {
    stack0xffffffffffffff6b = SUB1613((undefined1  [16])0x0,3);
    local_98._0_3_ = 0x12500;
  }
  else {
    stack0xffffffffffffff6b = SUB1613((undefined1  [16])0x0,3);
    local_98._0_3_ = 0x40000;
  }
  local_b8 = local_98;
  (**(code **)(*DAT_14ca83900 + 0x1b8))(DAT_14ca83900,&local_a0,param_2);
  plVar10 = (longlong *)(param_1 + 0x18);
  if (plVar10 != &local_a0) {
    lVar5 = *plVar10;
    *plVar10 = local_a0;
    local_a0 = 0;
    if (lVar5 == 0) goto LAB_1431f580e;
    LOCK();
    puVar1 = (uint *)(lVar5 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar5 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(lVar5 + 0xd);
        plVar8 = (longlong *)FUN_14001cc68(0x10,8);
        plVar8[1] = lVar5;
        plVar10 = DAT_14ca843c0;
        plVar9 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar8 = (longlong)plVar10;
            LOCK();
            bVar11 = plVar10 != DAT_14ca843c0;
            plVar9 = plVar8;
            if (bVar11) {
              plVar10 = DAT_14ca843c0;
              plVar9 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar9;
            UNLOCK();
          } while (bVar11);
        }
        else {
          do {
            *plVar8 = (longlong)plVar9;
            LOCK();
            bVar11 = plVar9 != DAT_14ca843c8;
            plVar10 = plVar8;
            if (bVar11) {
              plVar9 = DAT_14ca843c8;
              plVar10 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar10;
            UNLOCK();
          } while (bVar11);
        }
      }
    }
  }
  lVar5 = local_a0;
  if (local_a0 != 0) {
    LOCK();
    puVar1 = (uint *)(local_a0 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(local_a0 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(local_a0 + 0xd);
        plVar8 = (longlong *)FUN_14001cc68(0x10,8);
        plVar8[1] = lVar5;
        plVar10 = DAT_14ca843c0;
        plVar9 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar8 = (longlong)plVar10;
            LOCK();
            bVar11 = plVar10 != DAT_14ca843c0;
            plVar9 = plVar8;
            if (bVar11) {
              plVar10 = DAT_14ca843c0;
              plVar9 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar9;
            UNLOCK();
          } while (bVar11);
        }
        else {
          do {
            *plVar8 = (longlong)plVar9;
            LOCK();
            bVar11 = plVar9 != DAT_14ca843c8;
            plVar10 = plVar8;
            if (bVar11) {
              plVar9 = DAT_14ca843c8;
              plVar10 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar10;
            UNLOCK();
          } while (bVar11);
        }
      }
    }
  }
LAB_1431f580e:
  if ((local_38 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1431f589d FUN_1431f589d body=47 status=ok
// SIG undefined FUN_1431f589d(void)

void FUN_1431f589d(void)

{
  DAT_14ca94d98 = &PTR_FUN_14a387ee0;
  FUN_144725486(&DAT_14ca94d98);
  FUN_14631bd2e(&DAT_14ca94d98);
  return;
}



// FUNCTION 1431f58cc FUN_1431f58cc body=1110 status=ok
// SIG undefined FUN_1431f58cc(void)

void FUN_1431f58cc(longlong param_1,longlong param_2)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  char cVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  bool bVar11;
  undefined1 auStack_d8 [32];
  ulonglong *local_b8;
  undefined8 *local_b0;
  longlong local_a0;
  ulonglong local_98;
  undefined8 uStack_90;
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
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 1;
  local_74 = 0;
  uStack_6c = 0;
  local_64 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_60 = 0;
  local_5c = 0;
  local_58 = L"FNullVertexBuffer";
  local_50 = 0;
  uStack_48 = 0;
  local_98 = 0xc;
  uStack_90 = CONCAT44(uStack_90._4_4_,0x4101);
  if (*(char *)(param_2 + 0x69) == '\0') {
    FUN_14002049c(param_2,1);
    local_b0 = &local_88;
    local_b8 = (ulonglong *)CONCAT44(local_b8._4_4_,0x78);
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_a0,param_2,&local_98);
    *(undefined4 *)(local_a0 + 0x18) = 0x78;
    FUN_14002049c(param_2,0);
  }
  else {
    local_b0 = &local_88;
    local_b8 = (ulonglong *)CONCAT44(local_b8._4_4_,0x78);
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,&local_a0,param_2,&local_98);
    *(undefined4 *)(local_a0 + 0x18) = 0x78;
  }
  plVar10 = (longlong *)(param_1 + 0x10);
  if (plVar10 == &local_a0) {
LAB_1431f5a61:
    lVar5 = local_a0;
    if (local_a0 != 0) {
      LOCK();
      puVar1 = (uint *)(local_a0 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_a0 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(local_a0 + 0xd);
          plVar6 = (longlong *)FUN_14001cc68(0x10,8);
          plVar6[1] = lVar5;
          plVar9 = DAT_14ca843c0;
          plVar8 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar6 = (longlong)plVar9;
              LOCK();
              bVar11 = plVar9 != DAT_14ca843c0;
              plVar8 = plVar6;
              if (bVar11) {
                plVar9 = DAT_14ca843c0;
                plVar8 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar8;
              UNLOCK();
            } while (bVar11);
          }
          else {
            do {
              *plVar6 = (longlong)plVar8;
              LOCK();
              bVar11 = plVar8 != DAT_14ca843c8;
              plVar9 = plVar6;
              if (bVar11) {
                plVar8 = DAT_14ca843c8;
                plVar9 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar9;
              UNLOCK();
            } while (bVar11);
          }
        }
      }
    }
  }
  else {
    lVar5 = *plVar10;
    *plVar10 = local_a0;
    local_a0 = 0;
    if (lVar5 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar5 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar5 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(lVar5 + 0xd);
          plVar6 = (longlong *)FUN_14001cc68(0x10,8);
          plVar6[1] = lVar5;
          plVar9 = DAT_14ca843c0;
          plVar8 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar6 = (longlong)plVar9;
              LOCK();
              bVar11 = plVar9 != DAT_14ca843c0;
              plVar8 = plVar6;
              if (bVar11) {
                plVar9 = DAT_14ca843c0;
                plVar8 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar8;
              UNLOCK();
            } while (bVar11);
          }
          else {
            do {
              *plVar6 = (longlong)plVar8;
              LOCK();
              bVar11 = plVar8 != DAT_14ca843c8;
              plVar9 = plVar6;
              if (bVar11) {
                plVar8 = DAT_14ca843c8;
                plVar9 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar9;
              UNLOCK();
            } while (bVar11);
          }
        }
      }
      goto LAB_1431f5a61;
    }
  }
  lVar5 = *plVar10;
  cVar4 = *(char *)(param_2 + 0x69);
  if (cVar4 == '\0') {
    FUN_14002049c(param_2,1);
  }
  local_b0 = (undefined8 *)CONCAT44(local_b0._4_4_,1);
  local_b8 = (ulonglong *)CONCAT44(local_b8._4_4_,0xc);
  puVar7 = (undefined8 *)(**(code **)(*DAT_14ca83900 + 0x158))(DAT_14ca83900,param_2,lVar5,0);
  if (cVar4 == '\0') {
    FUN_14002049c(param_2,0);
  }
  *puVar7 = 0;
  *(undefined4 *)(puVar7 + 1) = 0;
  lVar5 = *plVar10;
  if (*(char *)(param_2 + 0x69) == '\0') {
    FUN_14002049c(param_2,1);
    (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_2,lVar5);
    FUN_14002049c(param_2,0);
  }
  else {
    (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_2,lVar5);
  }
  if ((*plVar10 == 0) || ((*(byte *)(*plVar10 + 0x28) & 0x10) == 0)) {
    local_98._0_3_ = 0x12500;
  }
  else {
    local_98._0_3_ = 0x40000;
  }
  local_98 = (ulonglong)(uint3)local_98;
  uStack_90 = 0;
  local_b8 = &local_98;
  (**(code **)(*DAT_14ca83900 + 0x1b8))(DAT_14ca83900,&local_a0,param_2);
  plVar10 = (longlong *)(param_1 + 0x18);
  if (plVar10 != &local_a0) {
    lVar5 = *plVar10;
    *plVar10 = local_a0;
    local_a0 = 0;
    if (lVar5 == 0) goto LAB_1431f5c94;
    LOCK();
    puVar1 = (uint *)(lVar5 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar5 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(lVar5 + 0xd);
        plVar8 = (longlong *)FUN_14001cc68(0x10,8);
        plVar8[1] = lVar5;
        plVar10 = DAT_14ca843c0;
        plVar9 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar8 = (longlong)plVar10;
            LOCK();
            bVar11 = plVar10 != DAT_14ca843c0;
            plVar9 = plVar8;
            if (bVar11) {
              plVar10 = DAT_14ca843c0;
              plVar9 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar9;
            UNLOCK();
          } while (bVar11);
        }
        else {
          do {
            *plVar8 = (longlong)plVar9;
            LOCK();
            bVar11 = plVar9 != DAT_14ca843c8;
            plVar10 = plVar8;
            if (bVar11) {
              plVar9 = DAT_14ca843c8;
              plVar10 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar10;
            UNLOCK();
          } while (bVar11);
        }
      }
    }
  }
  lVar5 = local_a0;
  if (local_a0 != 0) {
    LOCK();
    puVar1 = (uint *)(local_a0 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(local_a0 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(local_a0 + 0xd);
        plVar8 = (longlong *)FUN_14001cc68(0x10,8);
        plVar8[1] = lVar5;
        plVar10 = DAT_14ca843c0;
        plVar9 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar8 = (longlong)plVar10;
            LOCK();
            bVar11 = plVar10 != DAT_14ca843c0;
            plVar9 = plVar8;
            if (bVar11) {
              plVar10 = DAT_14ca843c0;
              plVar9 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar9;
            UNLOCK();
          } while (bVar11);
        }
        else {
          do {
            *plVar8 = (longlong)plVar9;
            LOCK();
            bVar11 = plVar9 != DAT_14ca843c8;
            plVar10 = plVar8;
            if (bVar11) {
              plVar9 = DAT_14ca843c8;
              plVar10 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar10;
            UNLOCK();
          } while (bVar11);
        }
      }
    }
  }
LAB_1431f5c94:
  if ((local_38 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1431f5d23 FUN_1431f5d23 body=47 status=ok
// SIG undefined FUN_1431f5d23(void)

void FUN_1431f5d23(void)

{
  DAT_14ca8c098 = &PTR_FUN_14a387f10;
  FUN_144725486(&DAT_14ca8c098);
  FUN_14631bdb4(&DAT_14ca8c098);
  return;
}



// FUNCTION 1431f5d52 FUN_1431f5d52 body=240 status=ok
// SIG undefined FUN_1431f5d52(void)

void FUN_1431f5d52(void)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  DAT_14ca8c0e8 = &PTR_FUN_14a387f40;
  FUN_144725486(&DAT_14ca8c0e8);
  lVar4 = DAT_14ca8c0f8;
  DAT_14ca8c0e8 = &PTR_FUN_14a38cff0;
  if (DAT_14ca8c0f8 != 0) {
    LOCK();
    puVar1 = (uint *)(DAT_14ca8c0f8 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar4 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(lVar4 + 0xd);
        plVar5 = (longlong *)FUN_14001cc68(0x10,8);
        plVar5[1] = lVar4;
        plVar7 = DAT_14ca843c0;
        plVar6 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar5 = (longlong)plVar7;
            LOCK();
            bVar8 = plVar7 != DAT_14ca843c0;
            plVar6 = plVar5;
            if (bVar8) {
              plVar7 = DAT_14ca843c0;
              plVar6 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar6;
            UNLOCK();
          } while (bVar8);
        }
        else {
          do {
            *plVar5 = (longlong)plVar6;
            LOCK();
            bVar8 = plVar6 != DAT_14ca843c8;
            plVar7 = plVar5;
            if (bVar8) {
              plVar6 = DAT_14ca843c8;
              plVar7 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar7;
            UNLOCK();
          } while (bVar8);
        }
      }
    }
  }
  DAT_14ca8c0e8 = &PTR_FUN_14a38cd70;
  DAT_14ca8c0f6 = 2;
  if ((DAT_14ca8c0f0 != -1) && (DAT_14c868880 == '\0')) {
    FUN_140033559(".\\Runtime/RenderCore/Private/RenderResource.cpp",0xfe,
                  L"A FRenderResource was deleted without being released first!");
  }
  return;
}



// FUNCTION 1431f5e42 FUN_1431f5e42 body=47 status=ok
// SIG undefined FUN_1431f5e42(void)

void FUN_1431f5e42(void)

{
  DAT_14ca94e00 = &PTR_FUN_14a387f70;
  FUN_144725486(&DAT_14ca94e00);
  FUN_14631c116(&DAT_14ca94e00);
  return;
}



// FUNCTION 1431f5e71 FUN_1431f5e71 body=47 status=ok
// SIG undefined FUN_1431f5e71(void)

void FUN_1431f5e71(void)

{
  DAT_14ca8c100 = &PTR_FUN_14a387fa0;
  FUN_144725486(&DAT_14ca8c100);
  FUN_14003f39a(&DAT_14ca8c100);
  return;
}



// FUNCTION 1431f5ea0 FUN_1431f5ea0 body=47 status=ok
// SIG undefined FUN_1431f5ea0(void)

void FUN_1431f5ea0(void)

{
  DAT_14ca8c118 = &PTR_FUN_14a387fd0;
  FUN_144725486(&DAT_14ca8c118);
  FUN_14003f39a(&DAT_14ca8c118);
  return;
}



// FUNCTION 1431f5ecf FUN_1431f5ecf body=47 status=ok
// SIG undefined FUN_1431f5ecf(void)

void FUN_1431f5ecf(void)

{
  DAT_14ca8c130 = &PTR_FUN_14a388000;
  FUN_144725486(&DAT_14ca8c130);
  FUN_14631e8c2(&DAT_14ca8c130);
  return;
}



// FUNCTION 1431f5efe FUN_1431f5efe body=47 status=ok
// SIG undefined FUN_1431f5efe(void)

void FUN_1431f5efe(void)

{
  DAT_14ca8c190 = &PTR_FUN_14a3880b0;
  FUN_144725486(&DAT_14ca8c190);
  FUN_14631e968(&DAT_14ca8c190);
  return;
}



// FUNCTION 1431f5f2e FUN_1431f5f2e body=73 status=ok
// SIG undefined FUN_1431f5f2e(void)

void FUN_1431f5f2e(undefined8 *param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743d4c0(param_1);
  }
  param_1[0xc] = 0xfefefefefefefefe;
  param_1[10] = 0xfefefefefefefefe;
  param_1[0xb] = 0xfefefefefefefefe;
  param_1[8] = 0xfefefefefefefefe;
  param_1[9] = 0xfefefefefefefefe;
  param_1[6] = 0xfefefefefefefefe;
  param_1[7] = 0xfefefefefefefefe;
  param_1[4] = 0xfefefefefefefefe;
  param_1[5] = 0xfefefefefefefefe;
  param_1[2] = 0xfefefefefefefefe;
  param_1[3] = 0xfefefefefefefefe;
  *param_1 = 0xfefefefefefefefe;
  param_1[1] = 0xfefefefefefefefe;
  return;
}



// FUNCTION 1431f5f83 FUN_1431f5f83 body=49 status=ok
// SIG undefined FUN_1431f5f83(void)

void FUN_1431f5f83(void)

{
  FUN_147427580(DAT_14ca8c8d0,DAT_14ca8c8d8);
  if (DAT_14ca8c8d0 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1431f5fcf FUN_1431f5fcf body=69 status=ok
// SIG undefined FUN_1431f5fcf(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431f5fcf(void)

{
  _DAT_14ca8cb38 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431f6011. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca8cb40,1);
  return;
}



// FUNCTION 1431f6014 FUN_1431f6014 body=69 status=ok
// SIG undefined FUN_1431f6014(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431f6014(void)

{
  _DAT_14ca8cb48 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x0001431f6056. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca8cb50,1);
  return;
}



// FUNCTION 1431f6059 FUN_1431f6059 body=47 status=ok
// SIG undefined FUN_1431f6059(void)

void FUN_1431f6059(void)

{
  DAT_14ca8cb58 = &PTR_FUN_14a388140;
  FUN_144725486(&DAT_14ca8cb58);
  FUN_14601f84c(&DAT_14ca8cb58);
  return;
}



// FUNCTION 1431f6094 FUN_1431f6094 body=3218 status=ok
// SIG undefined FUN_1431f6094(void)

void FUN_1431f6094(ulonglong *param_1,int param_2)

{
  uint *puVar1;
  byte bVar2;
  ulonglong *puVar3;
  undefined8 uVar4;
  undefined1 auVar5 [4];
  wchar_t *pwVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  int iVar12;
  longlong lVar13;
  wchar_t *_Dest;
  ulonglong uVar14;
  byte bVar15;
  ulonglong uVar16;
  longlong lVar17;
  ulonglong uVar18;
  uint uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  undefined8 *puVar22;
  bool bVar23;
  undefined1 auStack_358 [36];
  undefined4 local_334;
  undefined1 local_330 [8];
  undefined1 local_328 [8];
  undefined1 local_320 [8];
  longlong local_318 [2];
  undefined4 local_308;
  undefined2 local_304;
  undefined1 local_258 [16];
  undefined1 local_248;
  undefined4 local_244;
  undefined4 local_240;
  undefined4 uStack_23c;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined1 local_230 [7];
  undefined1 auStack_229 [5];
  undefined1 auStack_224 [3];
  undefined1 auStack_221 [5];
  byte abStack_21c [3];
  undefined1 uStack_219;
  undefined8 local_218;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  uint uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 local_1ec;
  ulonglong local_1e8;
  undefined8 uStack_1e0;
  wchar_t *local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined8 uStack_1b4;
  undefined8 local_1ac;
  undefined8 uStack_1a4;
  undefined8 local_19c;
  undefined8 uStack_194;
  undefined8 local_18c;
  undefined5 uStack_184;
  undefined3 uStack_17f;
  undefined5 uStack_17c;
  undefined8 uStack_177;
  undefined1 local_168 [8];
  undefined1 auStack_160 [8];
  undefined1 local_158 [4];
  byte bStack_154;
  undefined3 uStack_153;
  uint local_150;
  undefined8 uStack_148;
  undefined1 local_90;
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  ushort local_68;
  undefined8 local_60;
  ushort local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_358;
  uStack_1fc = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_1c8 = 0;
  uStack_1c0 = 0;
  uStack_1bc = 0;
  local_218 = 1;
  uStack_1f4 = 0x780;
  uStack_1f0 = 0x438;
  local_1ec = 0x10001;
  uStack_210 = 1;
  uStack_1f8 = 0;
  uStack_20c = 0;
  uStack_208 = 0;
  uStack_204 = 0;
  uStack_200 = 0;
  local_1e8 = CONCAT26(local_1e8._6_2_,0xff0002000101);
  local_1d8 = L"LongTaskRenderTarget";
  uStack_1d0 = 0;
  uStack_1e0 = CONCAT44(uStack_1e0._4_4_,0x1000);
  (**(code **)(*DAT_14ca83900 + 0x1a0))(DAT_14ca83900,local_330,&DAT_14ca85100,&local_218);
  lVar13 = 0x15;
  do {
    *(undefined8 *)(local_330 + lVar13 + 3) = 0;
    *(undefined8 *)(local_328 + lVar13 + 3) = 0;
    *(undefined4 *)(local_320 + lVar13 + 3) = 0xffffffff;
    *(undefined2 *)(local_320 + lVar13 + 7) = 0;
    lVar13 = lVar13 + 0x18;
  } while (lVar13 != 0xd5);
  local_244 = 0;
  local_258 = (undefined1  [16])0x0;
  local_248 = 0;
  local_240 = 0xffffffff;
  uStack_23c = 0xffffffff;
  uStack_238 = 0xffffffff;
  uStack_234 = 0xffffffff;
  _local_230 = 0;
  auStack_229._1_4_ = auStack_229._1_4_ & 0xffffff00;
  _auStack_224 = 0;
  auStack_221._1_3_ = 0;
  local_318[0] = (longlong)local_330;
  local_318[1] = 0;
  local_308 = 0xffffffff;
  local_304 = 0x100;
  local_218 = 0xffffffffffffffff;
  uStack_210 = 0xffffffff;
  uStack_208 = local_330._0_4_;
  uStack_204 = local_330._4_4_;
  uStack_200 = CONCAT31(uStack_200._1_3_,1);
  uStack_1fc = 0;
  uStack_1f8 = 0x1000;
  uStack_1f4 = 0;
  local_1e8 = local_1e8 & 0xffffffffffffff00;
  local_320._0_4_ = 1;
  local_328 = (undefined1  [8])&local_218;
  FUN_144760590(param_1,local_328,0);
  _Dest = (wchar_t *)(*param_1 + 1 & 0xfffffffffffffffe);
  pwVar6 = _Dest + 0xc;
  if ((wchar_t *)param_1[1] < pwVar6) {
    FUN_140023dd8(param_1,0x1a);
    _Dest = (wchar_t *)(*param_1 + 1 & 0xfffffffffffffffe);
    pwVar6 = _Dest + 0xc;
  }
  *param_1 = (ulonglong)pwVar6;
  wcscpy(_Dest,L"LongGPUTask");
  puVar22 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar7 = puVar22 + 0x23;
  if ((undefined8 *)param_1[1] < puVar7) {
    FUN_140023dd8(param_1,0x120);
    puVar22 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar7 = puVar22 + 0x23;
  }
  *param_1 = (ulonglong)puVar7;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar22;
  param_1[6] = (ulonglong)(puVar22 + 1);
  puVar22[1] = 0;
  *puVar22 = &PTR_FUN_14a217b50;
  memcpy(puVar22 + 2,local_318,0xe8);
  puVar22[0x1f] = 0;
  puVar22[0x20] = CONCAT44(_auStack_224,auStack_229._1_4_);
  *(uint *)((longlong)puVar22 + 0x107) = CONCAT31(auStack_221._1_3_,auStack_221[0]);
  puVar22[0x22] = _Dest;
  lVar13 = 0x11;
  do {
    *(undefined8 *)(local_230 + lVar13 + 7) = 0;
    *(undefined8 *)(auStack_224 + lVar13 + 3) = 0xffffffff00000000;
    *(undefined2 *)(&uStack_219 + lVar13) = 0;
    lVar13 = lVar13 + 0x18;
  } while (lVar13 != 0xd1);
  _local_158 = _local_158 & 0xffffff0000000000;
  lVar13 = 0xd9;
  do {
    *(undefined8 *)(local_230 + lVar13 + 7) = 0;
    *(undefined8 *)(auStack_224 + lVar13 + 3) = 0xffffffff00000000;
    *(undefined2 *)(&uStack_219 + lVar13) = 0;
    lVar13 = lVar13 + 0x18;
  } while (lVar13 != 0x199);
  local_90 = 0;
  local_60 = 0;
  local_58 = local_58 & 0xff;
  local_88 = (undefined1  [16])0x0;
  local_78 = (undefined1  [16])0x0;
  local_68 = local_68 & 0xff00;
  lVar13 = 0x15;
  do {
    if (*(longlong *)(local_330 + lVar13 + 3) == 0) break;
    *(longlong *)(local_230 + lVar13 + 3) = *(longlong *)(local_330 + lVar13 + 3);
    bVar2 = *(byte *)((longlong)local_318 + lVar13);
    bVar15 = bVar2 >> 2;
    auStack_221[lVar13 + 4] = bVar15;
    abStack_21c[lVar13] = bVar2 & 3;
    *(undefined4 *)(auStack_224 + lVar13 + 3) = *(undefined4 *)(local_320 + lVar13 + 3);
    *(uint *)(auStack_229 + lVar13 + 4) = (uint)(byte)local_320[lVar13 + 7];
    iVar12 = (int)local_158 + 1;
    bVar2 = bStack_154 | bVar15 == 2;
    _local_158 = CONCAT14(bVar2,iVar12);
    if (*(longlong *)(local_328 + lVar13 + 3) != 0) {
      local_90 = 1;
      uVar4 = *(undefined8 *)(auStack_229 + lVar13 + 4);
      *(undefined8 *)(local_168 + lVar13 + 3) = *(undefined8 *)(local_230 + lVar13 + 3);
      *(undefined8 *)(auStack_160 + lVar13 + 3) = uVar4;
      *(undefined8 *)(local_158 + lVar13 + 3) = *(undefined8 *)(auStack_221 + lVar13 + 4);
      *(longlong *)(local_168 + lVar13 + 3) = *(longlong *)(local_328 + lVar13 + 3);
    }
    lVar13 = lVar13 + 0x18;
  } while (lVar13 != 0xd5);
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_88 = ZEXT816(0);
  auVar5 = local_158;
  if (0 < (longlong)(int)local_158) {
    memcpy(param_1 + 0x15,&local_218,(longlong)(int)local_158 * 0x18);
  }
  *(undefined1 (*) [4])(param_1 + 0x14) = auVar5;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  *(undefined1 *)((longlong)param_1 + 0x17a) = 0;
  *(undefined2 *)(param_1 + 0x2f) = 0;
  *(byte *)((longlong)param_1 + 0x17b) = *(byte *)((longlong)param_1 + 0x17b) & 0xfc | 2;
  lVar13 = 0;
  local_1c8 = 0;
  local_1d8 = (wchar_t *)0x0;
  uStack_1d0 = 0;
  local_1e8 = 0;
  uStack_1e0 = 0;
  uStack_1f8 = 0;
  uStack_1f4 = 0;
  uStack_1f0 = 0;
  local_1ec = 0;
  uStack_208 = 0;
  uStack_204 = 0;
  uStack_200 = 0;
  uStack_1fc = 0;
  local_218 = 0;
  uStack_210 = 0;
  uStack_20c = 0;
  uStack_1bc = 0;
  uStack_1b8 = 0;
  uStack_1b4 = 0;
  local_1ac = 0;
  uStack_1a4 = 0;
  local_19c = 0;
  uStack_194 = 0;
  local_18c = 0;
  uStack_184 = 0;
  uStack_17f = 0;
  uStack_17c = 0;
  uStack_177 = 0;
  local_168 = (undefined1  [8])0x0;
  auStack_160 = (undefined1  [8])0x0;
  _local_158 = 0;
  local_150 = 1;
  uStack_148 = 0;
  FUN_144b0e33a(param_1,&local_218);
  local_1e8 = DAT_14c9c0d50;
  uStack_1e0 = DAT_14c9c0db0;
  local_1d8 = (wchar_t *)DAT_14c9c0d98;
  plVar11 = *(longlong **)
             (&DAT_14ca8c1f0 +
             (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) * 8);
  FUN_1415e141e();
  uVar14 = 0;
  if ((int)plVar11[1] != *(int *)((longlong)plVar11 + 0x34)) {
    plVar10 = plVar11 + 7;
    if ((longlong *)plVar11[8] != (longlong *)0x0) {
      plVar10 = (longlong *)plVar11[8];
    }
    iVar12 = *(int *)((longlong)plVar10 +
                     (ulonglong)
                     ((int)plVar11[9] - 1U &
                     (int)DAT_14ca90940 + (int)((ulonglong)DAT_14ca90940 >> 0x20) * 0x17) * 4);
    if (iVar12 != -1) {
      do {
        plVar10 = (longlong *)(*plVar11 + (longlong)iVar12 * 0x18);
        if (*plVar10 == DAT_14ca90940) {
          lVar13 = 0;
          if (plVar10 != (longlong *)0x0) {
            uVar14 = 0;
            if (plVar10 + 1 == (longlong *)0x0) goto LAB_1431f6735;
            lVar13 = plVar10[1];
            puVar3 = *(ulonglong **)(lVar13 + 0x28);
            lVar17 = ((ulonglong)(DAT_14ca90938 * -0x622015f714c7d297) >> 0x2f ^
                     DAT_14ca90938 * -0x622015f714c7d297) * -0x622015f714c7d297;
            uVar14 = puVar3[3];
            if ((uVar14 & 1) != 0) {
              uVar14 = (longlong)puVar3 + ((longlong)uVar14 >> 0x18) + 0x18;
            }
            uVar21 = puVar3[5];
            if ((uVar21 & 1) != 0) {
              uVar21 = (longlong)puVar3 + ((longlong)uVar21 >> 0x18) + 0x28;
            }
            uVar16 = puVar3[1];
            if ((uVar16 & 1) != 0) {
              uVar16 = (longlong)puVar3 + ((longlong)uVar16 >> 0x18) + 8;
            }
            uVar18 = *puVar3;
            if ((uVar18 & 1) != 0) {
              uVar18 = ((longlong)uVar18 >> 0x18) + (longlong)puVar3;
            }
            uVar19 = *(uint *)(uVar18 + (ulonglong)
                                        ((uint)puVar3[2] &
                                         ((uint)((ulonglong)lVar17 >> 0x2f) ^ (uint)lVar17) * 0x2d69
                                        & 0xffff) * 4);
            if (uVar19 != 0xffffffff) {
              goto LAB_1431f66e5;
            }
          }
          break;
        }
        iVar12 = (int)plVar10[2];
      } while (iVar12 != -1);
    }
    goto LAB_1431f6702;
  }
  goto LAB_1431f6735;
  while (uVar19 = *(uint *)(uVar18 + uVar20 * 4), uVar19 != 0xffffffff) {
LAB_1431f6877:
    uVar20 = (ulonglong)uVar19;
    if ((*(longlong *)(uVar21 + uVar20 * 8) == DAT_14ca8cd20) &&
       (*(int *)(uVar16 + uVar20 * 4) == 0)) {
      uVar16 = puVar3[7];
      if ((uVar16 & 1) != 0) {
        uVar16 = (longlong)(puVar3 + 7) + ((longlong)uVar16 >> 0x18);
      }
      uVar21 = *(ulonglong *)(uVar16 + (longlong)(int)uVar19 * 8);
      if ((uVar21 & 1) != 0) {
        uVar21 = ((longlong)uVar21 >> 0x18) + uVar16 + (longlong)(int)uVar19 * 8;
      }
      if (uVar21 != 0) goto LAB_1431f68c9;
      break;
    }
  }
  goto LAB_1431f6894;
  while (uVar19 = *(uint *)(uVar16 + uVar18 * 4), uVar19 != 0xffffffff) {
LAB_1431f66e5:
    uVar18 = (ulonglong)uVar19;
    if ((*(longlong *)(uVar14 + uVar18 * 8) == DAT_14ca90938) &&
       (*(int *)(uVar21 + uVar18 * 4) == 0)) {
      uVar21 = puVar3[7];
      if ((uVar21 & 1) != 0) {
        uVar21 = (longlong)(puVar3 + 7) + ((longlong)uVar21 >> 0x18);
      }
      uVar14 = *(ulonglong *)(uVar21 + (longlong)(int)uVar19 * 8);
      if ((uVar14 & 1) != 0) {
        uVar14 = ((longlong)uVar14 >> 0x18) + uVar21 + (longlong)(int)uVar19 * 8;
      }
      if (uVar14 != 0) goto LAB_1431f6735;
      break;
    }
  }
LAB_1431f6702:
  lVar13 = 0;
  uVar14 = 0;
LAB_1431f6735:
  FUN_1415e141e();
  local_328 = (undefined1  [8])uVar14;
  local_320 = (undefined1  [8])lVar13;
  FUN_1460a1af4();
  if ((int)plVar11[1] != *(int *)((longlong)plVar11 + 0x34)) {
    plVar10 = plVar11 + 7;
    if ((longlong *)plVar11[8] != (longlong *)0x0) {
      plVar10 = (longlong *)plVar11[8];
    }
    iVar12 = *(int *)((longlong)plVar10 +
                     (ulonglong)
                     ((int)plVar11[9] - 1U &
                     (int)DAT_14ca8cd28 + (int)((ulonglong)DAT_14ca8cd28 >> 0x20) * 0x17) * 4);
    if (iVar12 != -1) {
      do {
        plVar10 = (longlong *)(*plVar11 + (longlong)iVar12 * 0x18);
        if (*plVar10 == DAT_14ca8cd28) {
          lVar17 = 0;
          if (plVar10 != (longlong *)0x0) {
            uVar21 = 0;
            if (plVar10 + 1 == (longlong *)0x0) goto LAB_1431f68c9;
            lVar17 = plVar10[1];
            puVar3 = *(ulonglong **)(lVar17 + 0x28);
            lVar8 = ((ulonglong)(DAT_14ca8cd20 * -0x622015f714c7d297) >> 0x2f ^
                    DAT_14ca8cd20 * -0x622015f714c7d297) * -0x622015f714c7d297;
            uVar21 = puVar3[3];
            if ((uVar21 & 1) != 0) {
              uVar21 = (longlong)puVar3 + ((longlong)uVar21 >> 0x18) + 0x18;
            }
            uVar16 = puVar3[5];
            if ((uVar16 & 1) != 0) {
              uVar16 = (longlong)puVar3 + ((longlong)uVar16 >> 0x18) + 0x28;
            }
            uVar18 = puVar3[1];
            if ((uVar18 & 1) != 0) {
              uVar18 = (longlong)puVar3 + ((longlong)uVar18 >> 0x18) + 8;
            }
            uVar20 = *puVar3;
            if ((uVar20 & 1) != 0) {
              uVar20 = ((longlong)uVar20 >> 0x18) + (longlong)puVar3;
            }
            uVar19 = *(uint *)(uVar20 + (ulonglong)
                                        ((uint)puVar3[2] &
                                         ((uint)((ulonglong)lVar8 >> 0x2f) ^ (uint)lVar8) * 0x2d69 &
                                        0xffff) * 4);
            if (uVar19 != 0xffffffff) {
              goto LAB_1431f6877;
            }
          }
          break;
        }
        iVar12 = (int)plVar10[2];
      } while (iVar12 != -1);
    }
  }
LAB_1431f6894:
  lVar17 = 0;
  uVar21 = 0;
LAB_1431f68c9:
  FUN_1460a1af4();
  local_218 = DAT_14ca968c0;
  if (uVar14 == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = *(longlong *)
             (*(longlong *)(*(longlong *)(lVar13 + 8) + 0x50) +
             (longlong)*(int *)(uVar14 + 0xd4) * 8);
    if (lVar8 == 0) {
      lVar8 = FUN_1400bafc2(*(longlong *)(lVar13 + 8),(longlong)*(int *)(uVar14 + 0xd4),1);
    }
  }
  uStack_210 = (undefined4)lVar8;
  uStack_20c = (undefined4)((ulonglong)lVar8 >> 0x20);
  if (uVar21 == 0) {
    lVar13 = 0;
  }
  else {
    lVar13 = *(longlong *)
              (*(longlong *)(*(longlong *)(lVar17 + 8) + 0x50) +
              (longlong)*(int *)(uVar21 + 0xd4) * 8);
    if (lVar13 == 0) {
      lVar13 = FUN_1400bafc2(*(longlong *)(lVar17 + 8),(longlong)*(int *)(uVar21 + 0xd4),1);
    }
  }
  uStack_208 = (undefined4)lVar13;
  uStack_204 = (undefined4)((ulonglong)lVar13 >> 0x20);
  uStack_1c0 = 1;
  lVar13 = FUN_140028f18(param_1);
  if ((lVar13 != 0) && ((local_150 & 0x10000000) == 0)) {
    *(undefined4 *)(param_1 + 0x35) = uStack_1f8;
    *(undefined4 *)((longlong)param_1 + 0x1ac) = uStack_1f4;
    *(undefined4 *)(param_1 + 0x36) = uStack_1f0;
    *(undefined4 *)((longlong)param_1 + 0x1b4) = local_1ec;
    *(undefined4 *)(param_1 + 0x33) = uStack_208;
    *(undefined4 *)((longlong)param_1 + 0x19c) = uStack_204;
    *(undefined4 *)(param_1 + 0x34) = uStack_200;
    *(uint *)((longlong)param_1 + 0x1a4) = uStack_1fc;
    param_1[0x31] = local_218;
    param_1[0x32] = CONCAT44(uStack_20c,uStack_210);
    puVar22 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar7 = puVar22 + 4;
    if ((undefined8 *)param_1[1] < puVar7) {
      FUN_140023dd8(param_1,0x28);
      puVar22 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
      puVar7 = puVar22 + 4;
    }
    *param_1 = (ulonglong)puVar7;
    *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
    *(undefined8 **)param_1[6] = puVar22;
    param_1[6] = (ulonglong)(puVar22 + 1);
    puVar22[1] = 0;
    *puVar22 = &PTR_LAB_14a37d348;
    puVar22[2] = lVar13;
    *(undefined4 *)(puVar22 + 3) = 0;
    *(undefined1 *)((longlong)puVar22 + 0x1c) = 1;
  }
  local_334 = 0;
  if (local_328 == (undefined1  [8])0x0) {
    lVar13 = 0;
  }
  else {
    lVar13 = *(longlong *)
              (*(longlong *)(*(longlong *)((longlong)local_320 + 8) + 0x50) +
              (longlong)*(int *)((longlong)local_328 + 0xd4) * 8);
    if (lVar13 == 0) {
      lVar13 = FUN_1400bafc2(*(longlong *)((longlong)local_320 + 8),
                             (longlong)*(int *)((longlong)local_328 + 0xd4),1);
    }
  }
  FUN_147427e0a(param_1,local_328,lVar13,&local_334);
  uVar4 = DAT_14ca85ce8;
  puVar22 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar7 = puVar22 + 5;
  if ((undefined8 *)param_1[1] < puVar7) {
    FUN_140023dd8(param_1,0x30);
    puVar22 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar7 = puVar22 + 5;
  }
  *param_1 = (ulonglong)puVar7;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar22;
  param_1[6] = (ulonglong)(puVar22 + 1);
  puVar22[1] = 0;
  *puVar22 = &PTR_LAB_14a1fb5a8;
  *(undefined4 *)(puVar22 + 2) = 0;
  puVar22[3] = uVar4;
  *(undefined4 *)(puVar22 + 4) = 0;
  if (param_2 == -1) {
    param_2 = DAT_14ca8cdb8;
  }
  if (0 < param_2) {
    do {
      puVar22 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
      puVar7 = puVar22 + 4;
      if ((undefined8 *)param_1[1] < puVar7) {
        FUN_140023dd8(param_1,0x28);
        puVar22 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
        puVar7 = puVar22 + 4;
      }
      *param_1 = (ulonglong)puVar7;
      *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
      *(undefined8 **)param_1[6] = puVar22;
      param_1[6] = (ulonglong)(puVar22 + 1);
      puVar22[1] = 0;
      *puVar22 = &PTR_LAB_14a1fc200;
      puVar22[2] = 0x200000000;
      *(undefined4 *)(puVar22 + 3) = 1;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  if ((*(byte *)((longlong)param_1 + 0x17b) & 8) != 0) {
    (**(code **)(*DAT_14ca83900 + 0x2a0))(DAT_14ca83900,param_1,1);
    *(byte *)((longlong)param_1 + 0x17b) = *(byte *)((longlong)param_1 + 0x17b) & 0xf7;
  }
  puVar22 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar7 = puVar22 + 2;
  if ((undefined8 *)param_1[1] < puVar7) {
    FUN_140023dd8(param_1,0x18);
    puVar22 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar7 = puVar22 + 2;
  }
  lVar13 = _local_230;
  *param_1 = (ulonglong)puVar7;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar22;
  param_1[6] = (ulonglong)(puVar22 + 1);
  puVar22[1] = 0;
  *puVar22 = &PTR_LAB_14a217b58;
  *(byte *)((longlong)param_1 + 0x17b) = *(byte *)((longlong)param_1 + 0x17b) & 0xfd;
  *(undefined2 *)(param_1 + 0x2f) = 0;
  if (_local_230 != 0) {
    LOCK();
    puVar1 = (uint *)(_local_230 + 8);
    uVar19 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar19 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(_local_230 + 8);
      LOCK();
      uVar19 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar19 >> 0x1e & 1) == 0) {
        bVar2 = *(byte *)(_local_230 + 0xd);
        plVar9 = (longlong *)FUN_14001cc68(0x10,8);
        plVar9[1] = lVar13;
        plVar11 = DAT_14ca843c0;
        plVar10 = DAT_14ca843c8;
        if ((bVar2 & 2) == 0) {
          do {
            *plVar9 = (longlong)plVar11;
            LOCK();
            bVar23 = plVar11 != DAT_14ca843c0;
            plVar10 = plVar9;
            if (bVar23) {
              plVar11 = DAT_14ca843c0;
              plVar10 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar10;
            UNLOCK();
          } while (bVar23);
        }
        else {
          do {
            *plVar9 = (longlong)plVar10;
            LOCK();
            bVar23 = plVar10 != DAT_14ca843c8;
            plVar11 = plVar9;
            if (bVar23) {
              plVar10 = DAT_14ca843c8;
              plVar11 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar11;
            UNLOCK();
          } while (bVar23);
        }
      }
    }
  }
  if (local_330 != (undefined1  [8])0x0) {
    LOCK();
    puVar1 = (uint *)((longlong)local_330 + 8);
    uVar19 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar19 & 0x3fffffff) == 1) {
      puVar1 = (uint *)((longlong)local_330 + 8);
      LOCK();
      uVar19 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar19 >> 0x1e & 1) == 0) {
        bVar2 = *(byte *)((longlong)local_330 + 0xd);
        plVar9 = (longlong *)FUN_14001cc68(0x10,8);
        plVar9[1] = (longlong)local_330;
        plVar11 = DAT_14ca843c0;
        plVar10 = DAT_14ca843c8;
        if ((bVar2 & 2) == 0) {
          do {
            *plVar9 = (longlong)plVar11;
            LOCK();
            bVar23 = plVar11 != DAT_14ca843c0;
            plVar10 = plVar9;
            if (bVar23) {
              plVar11 = DAT_14ca843c0;
              plVar10 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar10;
            UNLOCK();
          } while (bVar23);
        }
        else {
          do {
            *plVar9 = (longlong)plVar10;
            LOCK();
            bVar23 = plVar10 != DAT_14ca843c8;
            plVar11 = plVar9;
            if (bVar23) {
              plVar10 = DAT_14ca843c8;
              plVar11 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar11;
            UNLOCK();
          } while (bVar23);
        }
      }
    }
  }
  if ((local_50 ^ (ulonglong)auStack_358) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1431f6d27 FUN_1431f6d27 body=966 status=ok
// SIG undefined FUN_1431f6d27(void)

void FUN_1431f6d27(undefined8 param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  bool bVar10;
  float fVar11;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  longlong *local_60;
  longlong local_58;
  longlong *local_50;
  longlong *local_48;
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_1456ef0d1(&local_48,2,2);
  plVar9 = local_48;
  (**(code **)(*local_48 + 8))(local_48,&local_58);
  (**(code **)(*plVar9 + 8))(plVar9,&local_68);
  if (DAT_14ca84e01 == '\0') {
    DAT_14ca8cdb8 = 5;
    iVar4 = DAT_14ca8cdb8;
  }
  else {
    local_70 = 0;
    local_78 = 0;
    (**(code **)(*DAT_14ca83900 + 0x2b0))(DAT_14ca83900,param_1,local_58);
    FUN_1431f6094(param_1,5);
    (**(code **)(*DAT_14ca83900 + 0x2b0))(DAT_14ca83900,param_1,local_68);
    local_40 = 0;
    local_38 = 0;
    FUN_14007658c(&DAT_14ca850c8,&local_40,1);
    local_40 = 0;
    local_38 = 0;
    FUN_14007658c(&DAT_14ca850c8,&local_40,5);
    local_88 = 0xffffffff;
    cVar5 = (**(code **)(*DAT_14ca83900 + 0x2b8))(DAT_14ca83900,local_58,&local_70,1);
    iVar4 = 5;
    if (cVar5 != '\0') {
      local_88 = 0xffffffff;
      cVar5 = (**(code **)(*DAT_14ca83900 + 0x2b8))(DAT_14ca83900,local_68,&local_78,1);
      if (cVar5 != '\0') {
        fVar11 = 500.0 / (((float)(ulonglong)(local_78 - local_70) / 1000.0) / 5.0);
        iVar6 = (int)ROUND(fVar11 + fVar11 + -0.5) >> 1;
        if (1999 < iVar6) {
          iVar6 = 2000;
        }
        iVar4 = 1;
        if (1 < iVar6) {
          iVar4 = iVar6;
        }
      }
    }
  }
  DAT_14ca8cdb8 = iVar4;
  if (local_60 == (longlong *)0x0) {
LAB_1431f6f13:
    if (local_68 != 0) {
      LOCK();
      puVar1 = (uint *)(local_68 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_68 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(local_68 + 0xd);
          plVar7 = (longlong *)FUN_14001cc68(0x10,8);
          plVar7[1] = local_68;
          plVar9 = DAT_14ca843c0;
          plVar8 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar7 = (longlong)plVar9;
              LOCK();
              bVar10 = plVar9 != DAT_14ca843c0;
              plVar8 = plVar7;
              if (bVar10) {
                plVar9 = DAT_14ca843c0;
                plVar8 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar8;
              UNLOCK();
            } while (bVar10);
          }
          else {
            do {
              *plVar7 = (longlong)plVar8;
              LOCK();
              bVar10 = plVar8 != DAT_14ca843c8;
              plVar9 = plVar7;
              if (bVar10) {
                plVar8 = DAT_14ca843c8;
                plVar9 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar9;
              UNLOCK();
            } while (bVar10);
          }
        }
      }
    }
  }
  else if (local_68 != 0) {
    (**(code **)(*local_60 + 0x10))(local_60,&local_68);
    local_60 = (longlong *)0x0;
    goto LAB_1431f6f13;
  }
  if (local_50 != (longlong *)0x0) {
    if (local_58 == 0) goto LAB_1431f6f57;
    (**(code **)(*local_50 + 0x10))(local_50,&local_58);
    local_50 = (longlong *)0x0;
  }
  if (local_58 != 0) {
    LOCK();
    puVar1 = (uint *)(local_58 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(local_58 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(local_58 + 0xd);
        plVar7 = (longlong *)FUN_14001cc68(0x10,8);
        plVar7[1] = local_58;
        plVar9 = DAT_14ca843c0;
        plVar8 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar7 = (longlong)plVar9;
            LOCK();
            bVar10 = plVar9 != DAT_14ca843c0;
            plVar8 = plVar7;
            if (bVar10) {
              plVar9 = DAT_14ca843c0;
              plVar8 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar8;
            UNLOCK();
          } while (bVar10);
        }
        else {
          do {
            *plVar7 = (longlong)plVar8;
            LOCK();
            bVar10 = plVar8 != DAT_14ca843c8;
            plVar9 = plVar7;
            if (bVar10) {
              plVar8 = DAT_14ca843c8;
              plVar9 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar9;
            UNLOCK();
          } while (bVar10);
        }
      }
    }
  }
LAB_1431f6f57:
  if (local_48 != (longlong *)0x0) {
    LOCK();
    puVar1 = (uint *)(local_48 + 1);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(local_48 + 1);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)((longlong)local_48 + 0xd);
        plVar7 = (longlong *)FUN_14001cc68(0x10,8);
        plVar7[1] = (longlong)local_48;
        plVar9 = DAT_14ca843c0;
        plVar8 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar7 = (longlong)plVar9;
            LOCK();
            bVar10 = plVar9 != DAT_14ca843c0;
            plVar8 = plVar7;
            if (bVar10) {
              plVar9 = DAT_14ca843c0;
              plVar8 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar8;
            UNLOCK();
          } while (bVar10);
        }
        else {
          do {
            *plVar7 = (longlong)plVar8;
            LOCK();
            bVar10 = plVar8 != DAT_14ca843c8;
            plVar9 = plVar7;
            if (bVar10) {
              plVar8 = DAT_14ca843c8;
              plVar9 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar9;
            UNLOCK();
          } while (bVar10);
        }
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431f70ee FUN_1431f70ee body=47 status=ok
// SIG undefined FUN_1431f70ee(void)

void FUN_1431f70ee(void)

{
  DAT_14ca8cdc0 = &PTR_FUN_14a3881a0;
  FUN_144725486(&DAT_14ca8cdc0);
  FUN_14631c272(&DAT_14ca8cdc0);
  return;
}



// FUNCTION 1431f715a FUN_1431f715a body=243 status=ok
// SIG undefined FUN_1431f715a(void)

longlong * FUN_1431f715a(longlong *param_1,undefined8 param_2)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_145e3820e();
  local_30 = 1;
  local_38 = 1;
  (**(code **)(*DAT_14ca83900 + 0x138))(DAT_14ca83900,&local_28,param_2,DAT_14ca8d650);
  *param_1 = local_28;
  if (local_28 != 0) {
    LOCK();
    *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
    UNLOCK();
    if (local_28 != 0) {
      LOCK();
      puVar1 = (uint *)(local_28 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_28 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(local_28 + 0xd);
          plVar4 = (longlong *)FUN_14001cc68(0x10,8);
          plVar4[1] = local_28;
          plVar6 = DAT_14ca843c0;
          plVar5 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar4 = (longlong)plVar6;
              LOCK();
              bVar7 = plVar6 != DAT_14ca843c0;
              plVar5 = plVar4;
              if (bVar7) {
                plVar6 = DAT_14ca843c0;
                plVar5 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar5;
              UNLOCK();
            } while (bVar7);
          }
          else {
            do {
              *plVar4 = (longlong)plVar5;
              LOCK();
              bVar7 = plVar5 != DAT_14ca843c8;
              plVar6 = plVar4;
              if (bVar7) {
                plVar5 = DAT_14ca843c8;
                plVar6 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar6;
              UNLOCK();
            } while (bVar7);
          }
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



// FUNCTION 1431f7266 FUN_1431f7266 body=243 status=ok
// SIG undefined FUN_1431f7266(void)

longlong * FUN_1431f7266(longlong *param_1,undefined8 param_2)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_145fcb5ae();
  local_30 = 1;
  local_38 = 1;
  (**(code **)(*DAT_14ca83900 + 0x138))(DAT_14ca83900,&local_28,param_2,DAT_14ca8d810);
  *param_1 = local_28;
  if (local_28 != 0) {
    LOCK();
    *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
    UNLOCK();
    if (local_28 != 0) {
      LOCK();
      puVar1 = (uint *)(local_28 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_28 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(local_28 + 0xd);
          plVar4 = (longlong *)FUN_14001cc68(0x10,8);
          plVar4[1] = local_28;
          plVar6 = DAT_14ca843c0;
          plVar5 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar4 = (longlong)plVar6;
              LOCK();
              bVar7 = plVar6 != DAT_14ca843c0;
              plVar5 = plVar4;
              if (bVar7) {
                plVar6 = DAT_14ca843c0;
                plVar5 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar5;
              UNLOCK();
            } while (bVar7);
          }
          else {
            do {
              *plVar4 = (longlong)plVar5;
              LOCK();
              bVar7 = plVar5 != DAT_14ca843c8;
              plVar6 = plVar4;
              if (bVar7) {
                plVar5 = DAT_14ca843c8;
                plVar6 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar6;
              UNLOCK();
            } while (bVar7);
          }
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



// FUNCTION 1431f7372 FUN_1431f7372 body=243 status=ok
// SIG undefined FUN_1431f7372(void)

longlong * FUN_1431f7372(longlong *param_1,undefined8 param_2)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_145fcb948();
  local_30 = 1;
  local_38 = 1;
  (**(code **)(*DAT_14ca83900 + 0x138))(DAT_14ca83900,&local_28,param_2,DAT_14ca8d9d0);
  *param_1 = local_28;
  if (local_28 != 0) {
    LOCK();
    *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
    UNLOCK();
    if (local_28 != 0) {
      LOCK();
      puVar1 = (uint *)(local_28 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_28 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(local_28 + 0xd);
          plVar4 = (longlong *)FUN_14001cc68(0x10,8);
          plVar4[1] = local_28;
          plVar6 = DAT_14ca843c0;
          plVar5 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar4 = (longlong)plVar6;
              LOCK();
              bVar7 = plVar6 != DAT_14ca843c0;
              plVar5 = plVar4;
              if (bVar7) {
                plVar6 = DAT_14ca843c0;
                plVar5 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar5;
              UNLOCK();
            } while (bVar7);
          }
          else {
            do {
              *plVar4 = (longlong)plVar5;
              LOCK();
              bVar7 = plVar5 != DAT_14ca843c8;
              plVar6 = plVar4;
              if (bVar7) {
                plVar5 = DAT_14ca843c8;
                plVar6 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar6;
              UNLOCK();
            } while (bVar7);
          }
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



// FUNCTION 1431f7496 FUN_1431f7496 body=243 status=ok
// SIG undefined FUN_1431f7496(void)

longlong * FUN_1431f7496(longlong *param_1,undefined8 param_2)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_145e3fea0();
  local_30 = 1;
  local_38 = 1;
  (**(code **)(*DAT_14ca83900 + 0x138))(DAT_14ca83900,&local_28,param_2,DAT_14ca8dd50);
  *param_1 = local_28;
  if (local_28 != 0) {
    LOCK();
    *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
    UNLOCK();
    if (local_28 != 0) {
      LOCK();
      puVar1 = (uint *)(local_28 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_28 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(local_28 + 0xd);
          plVar4 = (longlong *)FUN_14001cc68(0x10,8);
          plVar4[1] = local_28;
          plVar6 = DAT_14ca843c0;
          plVar5 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar4 = (longlong)plVar6;
              LOCK();
              bVar7 = plVar6 != DAT_14ca843c0;
              plVar5 = plVar4;
              if (bVar7) {
                plVar6 = DAT_14ca843c0;
                plVar5 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar5;
              UNLOCK();
            } while (bVar7);
          }
          else {
            do {
              *plVar4 = (longlong)plVar5;
              LOCK();
              bVar7 = plVar5 != DAT_14ca843c8;
              plVar6 = plVar4;
              if (bVar7) {
                plVar5 = DAT_14ca843c8;
                plVar6 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar6;
              UNLOCK();
            } while (bVar7);
          }
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



// FUNCTION 1431f75a2 FUN_1431f75a2 body=243 status=ok
// SIG undefined FUN_1431f75a2(void)

longlong * FUN_1431f75a2(longlong *param_1,undefined8 param_2)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_145fa0046();
  local_30 = 1;
  local_38 = 1;
  (**(code **)(*DAT_14ca83900 + 0x138))(DAT_14ca83900,&local_28,param_2,DAT_14ca8df10);
  *param_1 = local_28;
  if (local_28 != 0) {
    LOCK();
    *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
    UNLOCK();
    if (local_28 != 0) {
      LOCK();
      puVar1 = (uint *)(local_28 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_28 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(local_28 + 0xd);
          plVar4 = (longlong *)FUN_14001cc68(0x10,8);
          plVar4[1] = local_28;
          plVar6 = DAT_14ca843c0;
          plVar5 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar4 = (longlong)plVar6;
              LOCK();
              bVar7 = plVar6 != DAT_14ca843c0;
              plVar5 = plVar4;
              if (bVar7) {
                plVar6 = DAT_14ca843c0;
                plVar5 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar5;
              UNLOCK();
            } while (bVar7);
          }
          else {
            do {
              *plVar4 = (longlong)plVar5;
              LOCK();
              bVar7 = plVar5 != DAT_14ca843c8;
              plVar6 = plVar4;
              if (bVar7) {
                plVar5 = DAT_14ca843c8;
                plVar6 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar6;
              UNLOCK();
            } while (bVar7);
          }
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



// FUNCTION 1431f76c6 FUN_1431f76c6 body=243 status=ok
// SIG undefined FUN_1431f76c6(void)

longlong * FUN_1431f76c6(longlong *param_1,undefined8 param_2)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_145f9c64e();
  local_30 = 1;
  local_38 = 1;
  (**(code **)(*DAT_14ca83900 + 0x138))(DAT_14ca83900,&local_28,param_2,DAT_14ca8e290);
  *param_1 = local_28;
  if (local_28 != 0) {
    LOCK();
    *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
    UNLOCK();
    if (local_28 != 0) {
      LOCK();
      puVar1 = (uint *)(local_28 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_28 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(local_28 + 0xd);
          plVar4 = (longlong *)FUN_14001cc68(0x10,8);
          plVar4[1] = local_28;
          plVar6 = DAT_14ca843c0;
          plVar5 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar4 = (longlong)plVar6;
              LOCK();
              bVar7 = plVar6 != DAT_14ca843c0;
              plVar5 = plVar4;
              if (bVar7) {
                plVar6 = DAT_14ca843c0;
                plVar5 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar5;
              UNLOCK();
            } while (bVar7);
          }
          else {
            do {
              *plVar4 = (longlong)plVar5;
              LOCK();
              bVar7 = plVar5 != DAT_14ca843c8;
              plVar6 = plVar4;
              if (bVar7) {
                plVar5 = DAT_14ca843c8;
                plVar6 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar6;
              UNLOCK();
            } while (bVar7);
          }
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



// FUNCTION 1431f77d2 FUN_1431f77d2 body=243 status=ok
// SIG undefined FUN_1431f77d2(void)

longlong * FUN_1431f77d2(longlong *param_1,undefined8 param_2)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_145f9e374();
  local_30 = 1;
  local_38 = 1;
  (**(code **)(*DAT_14ca83900 + 0x138))(DAT_14ca83900,&local_28,param_2,DAT_14ca8e450);
  *param_1 = local_28;
  if (local_28 != 0) {
    LOCK();
    *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
    UNLOCK();
    if (local_28 != 0) {
      LOCK();
      puVar1 = (uint *)(local_28 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_28 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(local_28 + 0xd);
          plVar4 = (longlong *)FUN_14001cc68(0x10,8);
          plVar4[1] = local_28;
          plVar6 = DAT_14ca843c0;
          plVar5 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar4 = (longlong)plVar6;
              LOCK();
              bVar7 = plVar6 != DAT_14ca843c0;
              plVar5 = plVar4;
              if (bVar7) {
                plVar6 = DAT_14ca843c0;
                plVar5 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar5;
              UNLOCK();
            } while (bVar7);
          }
          else {
            do {
              *plVar4 = (longlong)plVar5;
              LOCK();
              bVar7 = plVar5 != DAT_14ca843c8;
              plVar6 = plVar4;
              if (bVar7) {
                plVar5 = DAT_14ca843c8;
                plVar6 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar6;
              UNLOCK();
            } while (bVar7);
          }
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



// FUNCTION 1431f791a FUN_1431f791a body=243 status=ok
// SIG undefined FUN_1431f791a(void)

longlong * FUN_1431f791a(longlong *param_1,undefined8 param_2)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_145e401b4();
  local_30 = 1;
  local_38 = 1;
  (**(code **)(*DAT_14ca83900 + 0x138))(DAT_14ca83900,&local_28,param_2,DAT_14ca8eab8);
  *param_1 = local_28;
  if (local_28 != 0) {
    LOCK();
    *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
    UNLOCK();
    if (local_28 != 0) {
      LOCK();
      puVar1 = (uint *)(local_28 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_28 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(local_28 + 0xd);
          plVar4 = (longlong *)FUN_14001cc68(0x10,8);
          plVar4[1] = local_28;
          plVar6 = DAT_14ca843c0;
          plVar5 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar4 = (longlong)plVar6;
              LOCK();
              bVar7 = plVar6 != DAT_14ca843c0;
              plVar5 = plVar4;
              if (bVar7) {
                plVar6 = DAT_14ca843c0;
                plVar5 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar5;
              UNLOCK();
            } while (bVar7);
          }
          else {
            do {
              *plVar4 = (longlong)plVar5;
              LOCK();
              bVar7 = plVar5 != DAT_14ca843c8;
              plVar6 = plVar4;
              if (bVar7) {
                plVar5 = DAT_14ca843c8;
                plVar6 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar6;
              UNLOCK();
            } while (bVar7);
          }
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



// FUNCTION 1431f7a26 FUN_1431f7a26 body=243 status=ok
// SIG undefined FUN_1431f7a26(void)

longlong * FUN_1431f7a26(longlong *param_1,undefined8 param_2)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_145e3dc0c();
  local_30 = 1;
  local_38 = 1;
  (**(code **)(*DAT_14ca83900 + 0x138))(DAT_14ca83900,&local_28,param_2,DAT_14ca8ec78);
  *param_1 = local_28;
  if (local_28 != 0) {
    LOCK();
    *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
    UNLOCK();
    if (local_28 != 0) {
      LOCK();
      puVar1 = (uint *)(local_28 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_28 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(local_28 + 0xd);
          plVar4 = (longlong *)FUN_14001cc68(0x10,8);
          plVar4[1] = local_28;
          plVar6 = DAT_14ca843c0;
          plVar5 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar4 = (longlong)plVar6;
              LOCK();
              bVar7 = plVar6 != DAT_14ca843c0;
              plVar5 = plVar4;
              if (bVar7) {
                plVar6 = DAT_14ca843c0;
                plVar5 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar5;
              UNLOCK();
            } while (bVar7);
          }
          else {
            do {
              *plVar4 = (longlong)plVar5;
              LOCK();
              bVar7 = plVar5 != DAT_14ca843c8;
              plVar6 = plVar4;
              if (bVar7) {
                plVar5 = DAT_14ca843c8;
                plVar6 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar6;
              UNLOCK();
            } while (bVar7);
          }
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



// FUNCTION 1431f7b32 FUN_1431f7b32 body=243 status=ok
// SIG undefined FUN_1431f7b32(void)

longlong * FUN_1431f7b32(longlong *param_1,undefined8 param_2)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_145fcbce2();
  local_30 = 1;
  local_38 = 1;
  (**(code **)(*DAT_14ca83900 + 0x138))(DAT_14ca83900,&local_28,param_2,DAT_14ca8ee38);
  *param_1 = local_28;
  if (local_28 != 0) {
    LOCK();
    *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
    UNLOCK();
    if (local_28 != 0) {
      LOCK();
      puVar1 = (uint *)(local_28 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_28 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(local_28 + 0xd);
          plVar4 = (longlong *)FUN_14001cc68(0x10,8);
          plVar4[1] = local_28;
          plVar6 = DAT_14ca843c0;
          plVar5 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar4 = (longlong)plVar6;
              LOCK();
              bVar7 = plVar6 != DAT_14ca843c0;
              plVar5 = plVar4;
              if (bVar7) {
                plVar6 = DAT_14ca843c0;
                plVar5 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar5;
              UNLOCK();
            } while (bVar7);
          }
          else {
            do {
              *plVar4 = (longlong)plVar5;
              LOCK();
              bVar7 = plVar5 != DAT_14ca843c8;
              plVar6 = plVar4;
              if (bVar7) {
                plVar5 = DAT_14ca843c8;
                plVar6 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar6;
              UNLOCK();
            } while (bVar7);
          }
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



// FUNCTION 1431f7c3e FUN_1431f7c3e body=243 status=ok
// SIG undefined FUN_1431f7c3e(void)

longlong * FUN_1431f7c3e(longlong *param_1,undefined8 param_2)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_145e404c8();
  local_30 = 1;
  local_38 = 1;
  (**(code **)(*DAT_14ca83900 + 0x138))(DAT_14ca83900,&local_28,param_2,DAT_14ca8eff8);
  *param_1 = local_28;
  if (local_28 != 0) {
    LOCK();
    *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
    UNLOCK();
    if (local_28 != 0) {
      LOCK();
      puVar1 = (uint *)(local_28 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_28 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(local_28 + 0xd);
          plVar4 = (longlong *)FUN_14001cc68(0x10,8);
          plVar4[1] = local_28;
          plVar6 = DAT_14ca843c0;
          plVar5 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar4 = (longlong)plVar6;
              LOCK();
              bVar7 = plVar6 != DAT_14ca843c0;
              plVar5 = plVar4;
              if (bVar7) {
                plVar6 = DAT_14ca843c0;
                plVar5 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar5;
              UNLOCK();
            } while (bVar7);
          }
          else {
            do {
              *plVar4 = (longlong)plVar5;
              LOCK();
              bVar7 = plVar5 != DAT_14ca843c8;
              plVar6 = plVar4;
              if (bVar7) {
                plVar5 = DAT_14ca843c8;
                plVar6 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar6;
              UNLOCK();
            } while (bVar7);
          }
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



// FUNCTION 1431f7d4a FUN_1431f7d4a body=243 status=ok
// SIG undefined FUN_1431f7d4a(void)

longlong * FUN_1431f7d4a(longlong *param_1,undefined8 param_2)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_145fcc07c();
  local_30 = 1;
  local_38 = 1;
  (**(code **)(*DAT_14ca83900 + 0x138))(DAT_14ca83900,&local_28,param_2,DAT_14ca8f1b8);
  *param_1 = local_28;
  if (local_28 != 0) {
    LOCK();
    *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
    UNLOCK();
    if (local_28 != 0) {
      LOCK();
      puVar1 = (uint *)(local_28 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_28 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(local_28 + 0xd);
          plVar4 = (longlong *)FUN_14001cc68(0x10,8);
          plVar4[1] = local_28;
          plVar6 = DAT_14ca843c0;
          plVar5 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar4 = (longlong)plVar6;
              LOCK();
              bVar7 = plVar6 != DAT_14ca843c0;
              plVar5 = plVar4;
              if (bVar7) {
                plVar6 = DAT_14ca843c0;
                plVar5 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar5;
              UNLOCK();
            } while (bVar7);
          }
          else {
            do {
              *plVar4 = (longlong)plVar5;
              LOCK();
              bVar7 = plVar5 != DAT_14ca843c8;
              plVar6 = plVar4;
              if (bVar7) {
                plVar5 = DAT_14ca843c8;
                plVar6 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar6;
              UNLOCK();
            } while (bVar7);
          }
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



// FUNCTION 1431f7e56 FUN_1431f7e56 body=243 status=ok
// SIG undefined FUN_1431f7e56(void)

longlong * FUN_1431f7e56(longlong *param_1,undefined8 param_2)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_145e3851c();
  local_30 = 1;
  local_38 = 1;
  (**(code **)(*DAT_14ca83900 + 0x138))(DAT_14ca83900,&local_28,param_2,DAT_14ca8f378);
  *param_1 = local_28;
  if (local_28 != 0) {
    LOCK();
    *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
    UNLOCK();
    if (local_28 != 0) {
      LOCK();
      puVar1 = (uint *)(local_28 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_28 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(local_28 + 0xd);
          plVar4 = (longlong *)FUN_14001cc68(0x10,8);
          plVar4[1] = local_28;
          plVar6 = DAT_14ca843c0;
          plVar5 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar4 = (longlong)plVar6;
              LOCK();
              bVar7 = plVar6 != DAT_14ca843c0;
              plVar5 = plVar4;
              if (bVar7) {
                plVar6 = DAT_14ca843c0;
                plVar5 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar5;
              UNLOCK();
            } while (bVar7);
          }
          else {
            do {
              *plVar4 = (longlong)plVar5;
              LOCK();
              bVar7 = plVar5 != DAT_14ca843c8;
              plVar6 = plVar4;
              if (bVar7) {
                plVar5 = DAT_14ca843c8;
                plVar6 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar6;
              UNLOCK();
            } while (bVar7);
          }
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



// FUNCTION 1431f7f92 FUN_1431f7f92 body=243 status=ok
// SIG undefined FUN_1431f7f92(void)

longlong * FUN_1431f7f92(longlong *param_1,undefined8 param_2)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_145e38b38();
  local_30 = 1;
  local_38 = 1;
  (**(code **)(*DAT_14ca83900 + 0x138))(DAT_14ca83900,&local_28,param_2,DAT_14ca8f8b8);
  *param_1 = local_28;
  if (local_28 != 0) {
    LOCK();
    *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
    UNLOCK();
    if (local_28 != 0) {
      LOCK();
      puVar1 = (uint *)(local_28 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_28 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(local_28 + 0xd);
          plVar4 = (longlong *)FUN_14001cc68(0x10,8);
          plVar4[1] = local_28;
          plVar6 = DAT_14ca843c0;
          plVar5 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar4 = (longlong)plVar6;
              LOCK();
              bVar7 = plVar6 != DAT_14ca843c0;
              plVar5 = plVar4;
              if (bVar7) {
                plVar6 = DAT_14ca843c0;
                plVar5 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar5;
              UNLOCK();
            } while (bVar7);
          }
          else {
            do {
              *plVar4 = (longlong)plVar5;
              LOCK();
              bVar7 = plVar5 != DAT_14ca843c8;
              plVar6 = plVar4;
              if (bVar7) {
                plVar5 = DAT_14ca843c8;
                plVar6 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar6;
              UNLOCK();
            } while (bVar7);
          }
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



// FUNCTION 1431f80c2 FUN_1431f80c2 body=243 status=ok
// SIG undefined FUN_1431f80c2(void)

longlong * FUN_1431f80c2(longlong *param_1,undefined8 param_2)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_145f9cd72();
  local_30 = 1;
  local_38 = 1;
  (**(code **)(*DAT_14ca83900 + 0x138))(DAT_14ca83900,&local_28,param_2,DAT_14ca8fdf0);
  *param_1 = local_28;
  if (local_28 != 0) {
    LOCK();
    *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
    UNLOCK();
    if (local_28 != 0) {
      LOCK();
      puVar1 = (uint *)(local_28 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(local_28 + 8);
        LOCK();
        uVar2 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar2 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(local_28 + 0xd);
          plVar4 = (longlong *)FUN_14001cc68(0x10,8);
          plVar4[1] = local_28;
          plVar6 = DAT_14ca843c0;
          plVar5 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar4 = (longlong)plVar6;
              LOCK();
              bVar7 = plVar6 != DAT_14ca843c0;
              plVar5 = plVar4;
              if (bVar7) {
                plVar6 = DAT_14ca843c0;
                plVar5 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar5;
              UNLOCK();
            } while (bVar7);
          }
          else {
            do {
              *plVar4 = (longlong)plVar5;
              LOCK();
              bVar7 = plVar5 != DAT_14ca843c8;
              plVar6 = plVar4;
              if (bVar7) {
                plVar5 = DAT_14ca843c8;
                plVar6 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar6;
              UNLOCK();
            } while (bVar7);
          }
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



// FUNCTION 1431f82c2 FUN_1431f82c2 body=1144 status=ok
// SIG undefined FUN_1431f82c2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431f82c2(undefined8 param_1,longlong *param_2,longlong *param_3,undefined8 *param_4)

{
  ulonglong *puVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca89370) && (FUN_144b3d300(&DAT_14ca89370), DAT_14ca89370 == -1)) {
    FUN_145e0da2e();
    FUN_145e0d8e0();
    FUN_140db5666(&DAT_14ca892c8,0,&DAT_14ca89260,L"FScreenVertexShaderVS",
                  L"/Engine/Private/Tools/FullscreenVertexShader.usf",L"MainVS",0,1,FUN_1474193e8,
                  FUN_147419388,&LAB_147419384,&LAB_147419380,&LAB_14712ac0c,&LAB_14712ac08,0xe0,
                  &DAT_14ca911e0);
    _DAT_14ca892c8 = FGlobalShaderType::vftable;
    atexit((_func_5014 *)&LAB_1431f21b4);
    _Init_thread_footer(&DAT_14ca89370);
  }
  if ((int)param_2[1] != *(int *)((longlong)param_2 + 0x34)) {
    plVar5 = param_2 + 7;
    if ((longlong *)param_2[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_2[8];
    }
    iVar4 = *(int *)((longlong)plVar5 +
                    (ulonglong)
                    ((int)param_2[9] - 1U &
                    (int)DAT_14ca892f8 + (int)((ulonglong)DAT_14ca892f8 >> 0x20) * 0x17) * 4);
    if (iVar4 != -1) {
      do {
        plVar5 = (longlong *)(*param_2 + (longlong)iVar4 * 0x18);
        if (*plVar5 == DAT_14ca892f8) {
          uVar6 = 0;
          if (plVar5 != (longlong *)0x0) {
            lVar3 = 0;
            if (plVar5 + 1 == (longlong *)0x0) goto LAB_1431f8484;
            lVar3 = plVar5[1];
            puVar1 = *(ulonglong **)(lVar3 + 0x28);
            lVar2 = ((ulonglong)(DAT_14ca892f0 * -0x622015f714c7d297) >> 0x2f ^
                    DAT_14ca892f0 * -0x622015f714c7d297) * -0x622015f714c7d297;
            uVar6 = puVar1[3];
            if ((uVar6 & 1) != 0) {
              uVar6 = (longlong)puVar1 + ((longlong)uVar6 >> 0x18) + 0x18;
            }
            uVar7 = puVar1[5];
            if ((uVar7 & 1) != 0) {
              uVar7 = (longlong)puVar1 + ((longlong)uVar7 >> 0x18) + 0x28;
            }
            uVar8 = puVar1[1];
            if ((uVar8 & 1) != 0) {
              uVar8 = (longlong)puVar1 + ((longlong)uVar8 >> 0x18) + 8;
            }
            uVar10 = *puVar1;
            if ((uVar10 & 1) != 0) {
              uVar10 = ((longlong)uVar10 >> 0x18) + (longlong)puVar1;
            }
            uVar9 = *(uint *)(uVar10 + (ulonglong)
                                       ((uint)puVar1[2] &
                                        ((uint)((ulonglong)lVar2 >> 0x2f) ^ (uint)lVar2) * 0x2d69 &
                                       0xffff) * 4);
            if (uVar9 != 0xffffffff) {
              goto LAB_1431f8432;
            }
          }
          break;
        }
        iVar4 = (int)plVar5[2];
      } while (iVar4 != -1);
    }
  }
  goto LAB_1431f844f;
  while (uVar9 = *(uint *)(uVar8 + uVar10 * 4), uVar9 != 0xffffffff) {
LAB_1431f8432:
    uVar10 = (ulonglong)uVar9;
    if ((*(longlong *)(uVar6 + uVar10 * 8) == DAT_14ca892f0) && (*(int *)(uVar7 + uVar10 * 4) == 0))
    {
      uVar7 = puVar1[7];
      if ((uVar7 & 1) != 0) {
        uVar7 = (longlong)(puVar1 + 7) + ((longlong)uVar7 >> 0x18);
      }
      uVar6 = *(ulonglong *)(uVar7 + (longlong)(int)uVar9 * 8);
      if ((uVar6 & 1) != 0) {
        uVar6 = ((longlong)uVar6 >> 0x18) + uVar7 + (longlong)(int)uVar9 * 8;
      }
      if (uVar6 != 0) goto LAB_1431f8484;
      break;
    }
  }
LAB_1431f844f:
  uVar6 = 0;
  lVar3 = 0;
LAB_1431f8484:
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca89370) && (FUN_144b3d300(&DAT_14ca89370), DAT_14ca89370 == -1)) {
    FUN_145e0da2e();
    FUN_145e0d8e0();
    FUN_140db5666(&DAT_14ca892c8,0,&DAT_14ca89260,L"FScreenVertexShaderVS",
                  L"/Engine/Private/Tools/FullscreenVertexShader.usf",L"MainVS",0,1,FUN_1474193e8,
                  FUN_147419388,&LAB_147419384,&LAB_147419380,&LAB_14712ac0c,&LAB_14712ac08,0xe0,
                  &DAT_14ca911e0);
    _DAT_14ca892c8 = FGlobalShaderType::vftable;
    atexit((_func_5014 *)&LAB_1431f21b4);
    _Init_thread_footer(&DAT_14ca89370);
  }
  FUN_144b0e33a(param_1,param_4);
  param_4[6] = DAT_14c9c0d50;
  param_4[7] = DAT_14c9c0db0;
  param_4[8] = DAT_14c9c0d98;
  *param_4 = DAT_14ca94df8;
  if (uVar6 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = *(longlong *)
             (*(longlong *)(*(longlong *)(lVar3 + 8) + 0x50) + (longlong)*(int *)(uVar6 + 0xd4) * 8)
    ;
    if (lVar2 == 0) {
      lVar2 = FUN_1400bafc2(*(longlong *)(lVar3 + 8),(longlong)*(int *)(uVar6 + 0xd4),1);
    }
  }
  param_4[1] = lVar2;
  if (*param_3 == 0) {
    lVar3 = 0;
  }
  else {
    lVar2 = (longlong)*(int *)(*param_3 + 0xd4);
    lVar3 = *(longlong *)(*(longlong *)(*(longlong *)(param_3[1] + 8) + 0x50) + lVar2 * 8);
    if (lVar3 == 0) {
      lVar3 = FUN_1400bafc2(*(longlong *)(param_3[1] + 8),lVar2,1);
    }
  }
  param_4[2] = lVar3;
  *(undefined4 *)(param_4 + 0xb) = 0;
  return;
}



// FUNCTION 1431f87ae FUN_1431f87ae body=96 status=ok
// SIG undefined FUN_1431f87ae(void)

undefined8 FUN_1431f87ae(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_1431f88a4();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca91518,1);
  return uVar3;
}



// FUNCTION 1431f880e FUN_1431f880e body=138 status=ok
// SIG undefined FUN_1431f880e(void)

void * FUN_1431f880e(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  *(undefined2 *)((longlong)_Dst + 0x54) = 0xffff;
  *(undefined8 *)((longlong)_Dst + 0x58) = 0;
  *(undefined8 *)((longlong)_Dst + 0x60) = 0;
  *(undefined8 *)((longlong)_Dst + 0x68) = 0;
  *(undefined8 *)((longlong)_Dst + 0x70) = 0;
  *(undefined8 *)((longlong)_Dst + 0x78) = 0;
  *(undefined8 *)((longlong)_Dst + 0x80) = 0;
  *(undefined8 *)((longlong)_Dst + 0x88) = 0;
  *(undefined8 *)((longlong)_Dst + 0x90) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xc0) = 0;
  *(undefined8 *)((longlong)_Dst + 200) = 0;
  *(uint *)((longlong)_Dst + 0xd0) =
       (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)_Dst + 0xd4) = 0xffffffff;
  return _Dst;
}



// FUNCTION 1431f88a4 FUN_1431f88a4 body=445 status=ok
// SIG undefined FUN_1431f88a4(void)

void FUN_1431f88a4(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  longlong lVar9;
  longlong lVar10;
  undefined4 uVar11;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_c8 [32];
  wchar_t *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  char *local_90;
  undefined4 local_88;
  undefined4 local_80;
  longlong *local_78;
  undefined1 local_70;
  undefined8 local_68;
  undefined1 local_60;
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca91598) {
    FUN_144b3d300(&DAT_14ca91598);
    if (DAT_14ca91598 == -1) {
      uVar11 = 0;
      local_58 = 0;
      uStack_50 = 0;
      pcVar8 = FUN_1431f8a6e;
      do {
        pcVar8 = (code *)(*pcVar8)(uVar11,&local_58);
        uVar11 = extraout_XMM0_Da;
      } while (pcVar8 != (code *)0x0);
      if (1 < (longlong)(int)(uint)uStack_50) {
        lVar9 = (longlong)(int)(uint)uStack_50 * 0x30;
        lVar10 = 0;
        do {
          lVar9 = lVar9 + -0x30;
          local_48 = *(undefined8 *)(local_58 + lVar10);
          uStack_40 = ((undefined8 *)(local_58 + lVar10))[1];
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar10);
          local_38 = *puVar1;
          uStack_30 = puVar1[1];
          puVar1 = (undefined8 *)(local_58 + 0x20 + lVar10);
          local_28 = *puVar1;
          uStack_20 = puVar1[1];
          uVar3 = *(undefined8 *)(local_58 + lVar9);
          uVar4 = ((undefined8 *)(local_58 + lVar9))[1];
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar9);
          uVar5 = *puVar1;
          uVar6 = puVar1[1];
          puVar1 = (undefined8 *)(local_58 + 0x20 + lVar9);
          uVar7 = puVar1[1];
          puVar2 = (undefined8 *)(local_58 + 0x20 + lVar10);
          *puVar2 = *puVar1;
          puVar2[1] = uVar7;
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar10);
          *puVar1 = uVar5;
          puVar1[1] = uVar6;
          *(undefined8 *)(local_58 + lVar10) = uVar3;
          ((undefined8 *)(local_58 + lVar10))[1] = uVar4;
          puVar1 = (undefined8 *)(local_58 + 0x20 + lVar9);
          *puVar1 = local_28;
          puVar1[1] = uStack_20;
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar9);
          *puVar1 = local_38;
          puVar1[1] = uStack_30;
          *(undefined8 *)(local_58 + lVar9) = local_48;
          ((undefined8 *)(local_58 + lVar9))[1] = uStack_40;
          lVar10 = lVar10 + 0x30;
        } while ((ulonglong)((uint)uStack_50 >> 1) * 0x30 != lVar10);
      }
      local_60 = 0;
      local_70 = 0;
      local_90 = "Unknown";
      local_a0 = 0;
      uStack_98 = 0;
      local_a8 = L"FParameters";
      local_68 = 0;
      local_80 = 0x10;
      local_88 = 0xcb;
      local_78 = &local_58;
      FUN_140b49562(&DAT_14ca91518,0,1);
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1431f8a62);
      _Init_thread_footer(&DAT_14ca91598);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431f8a6e FUN_1431f8a6e body=136 status=ok
// SIG undefined FUN_1431f8a6e(void)

code * FUN_1431f8a6e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"StagingOutput";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x8000000cd;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 7;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1431f8af6;
}



// FUNCTION 1431f8af6 FUN_1431f8af6 body=130 status=ok
// SIG undefined FUN_1431f8af6(void)

undefined1 * FUN_1431f8af6(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"Texture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xcc;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_1431f8b78;
}



// FUNCTION 1431f8b7c FUN_1431f8b7c body=44 status=ok
// SIG undefined FUN_1431f8b7c(void)

void FUN_1431f8b7c(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 1431f8bac FUN_1431f8bac body=105 status=ok
// SIG undefined FUN_1431f8bac(void)

void FUN_1431f8bac(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  if (*(char *)(param_2 + 0x69) == '\0') {
    FUN_14002049c(param_2,1);
    (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_2,uVar1);
    FUN_14002049c(param_2,0);
  }
  else {
    (**(code **)(*DAT_14ca83900 + 0x168))(DAT_14ca83900,param_2,uVar1);
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}



// FUNCTION 1431f8c46 FUN_1431f8c46 body=1187 status=ok
// SIG undefined FUN_1431f8c46(void)

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1431f8c46(longlong param_1)

{
  uint *puVar1;
  undefined4 uVar2;
  byte bVar3;
  undefined1 auVar4 [16];
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  bool bVar14;
  longlong lVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 unaff_XMM6 [16];
  undefined1 auVar19 [16];
  undefined1 unaff_XMM7 [16];
  undefined1 auVar20 [16];
  undefined1 unaff_XMM10 [16];
  undefined1 auVar21 [16];
  undefined1 auStack_148 [32];
  uint local_128;
  longlong *local_120;
  undefined1 local_118;
  undefined1 local_110;
  undefined8 local_108;
  longlong local_f8 [2];
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined8 uStack_e0;
  uint uStack_d8;
  uint local_d4;
  undefined4 local_d0;
  undefined8 local_cc;
  undefined4 local_c4;
  undefined2 local_c0;
  undefined1 local_be;
  undefined2 local_bd;
  undefined1 local_bb;
  undefined4 local_b8;
  wchar_t *local_b0;
  undefined8 local_a8;
  undefined1 local_a0 [8];
  undefined8 local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_148;
  bVar3 = (byte)DAT_14c760da4 & 0x1f;
  FUN_1446f470e(local_a0,L"FMipColorTexture",1);
  local_be = 0;
  local_f8[1] = 8;
  local_bd = 2;
  local_cc = 0x80000000800;
  local_c4 = 0x10001;
  local_c0 = 0x10c;
  local_e8 = 1;
  local_d0 = 0;
  uStack_e4 = 0;
  uStack_e0 = 0;
  uStack_d8 = 0;
  local_bb = 0xff;
  local_b0 = L"FMipColorTexture";
  local_a8 = 0;
  local_98 = 0;
  local_b8 = 0x70;
  local_d4 = ~(-1 << bVar3);
  (**(code **)(*DAT_14ca83900 + 0x1a0))(DAT_14ca83900,local_f8,&DAT_14ca85100,local_f8 + 1);
  plVar9 = (longlong *)(param_1 + 0x10);
  if (plVar9 != local_f8) {
    lVar15 = *plVar9;
    *plVar9 = local_f8[0];
    local_f8[0] = 0;
    if (lVar15 == 0) goto LAB_1431f8e2b;
    LOCK();
    puVar1 = (uint *)(lVar15 + 8);
    uVar12 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar12 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar15 + 8);
      LOCK();
      uVar12 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar12 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(lVar15 + 0xd);
        plVar5 = (longlong *)FUN_14001cc68(0x10,8);
        plVar5[1] = lVar15;
        plVar8 = DAT_14ca843c0;
        plVar7 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar5 = (longlong)plVar8;
            LOCK();
            bVar14 = plVar8 != DAT_14ca843c0;
            plVar7 = plVar5;
            if (bVar14) {
              plVar8 = DAT_14ca843c0;
              plVar7 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar7;
            UNLOCK();
          } while (bVar14);
        }
        else {
          do {
            *plVar5 = (longlong)plVar7;
            LOCK();
            bVar14 = plVar7 != DAT_14ca843c8;
            plVar8 = plVar5;
            if (bVar14) {
              plVar7 = DAT_14ca843c8;
              plVar8 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar8;
            UNLOCK();
          } while (bVar14);
        }
      }
    }
  }
  lVar15 = local_f8[0];
  if (local_f8[0] != 0) {
    LOCK();
    puVar1 = (uint *)(local_f8[0] + 8);
    uVar12 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar12 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(local_f8[0] + 8);
      LOCK();
      uVar12 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar12 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(local_f8[0] + 0xd);
        plVar5 = (longlong *)FUN_14001cc68(0x10,8);
        plVar5[1] = lVar15;
        plVar8 = DAT_14ca843c0;
        plVar7 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar5 = (longlong)plVar8;
            LOCK();
            bVar14 = plVar8 != DAT_14ca843c0;
            plVar7 = plVar5;
            if (bVar14) {
              plVar8 = DAT_14ca843c0;
              plVar7 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar7;
            UNLOCK();
          } while (bVar14);
        }
        else {
          do {
            *plVar5 = (longlong)plVar7;
            LOCK();
            bVar14 = plVar7 != DAT_14ca843c8;
            plVar8 = plVar5;
            if (bVar14) {
              plVar7 = DAT_14ca843c8;
              plVar8 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar8;
            UNLOCK();
          } while (bVar14);
        }
      }
    }
  }
LAB_1431f8e2b:
  auVar4 = _DAT_149931e80;
  uVar11 = 0x800;
  uVar10 = 0;
  auVar19 = pmovsxbq(unaff_XMM6,0x302);
  auVar20 = pmovsxbq(unaff_XMM7,0x100);
  auVar21 = pmovsxbq(unaff_XMM10,0x404);
  do {
    local_108 = 0;
    local_110 = 1;
    local_118 = 0;
    local_128 = 1;
    local_120 = local_f8;
    lVar6 = (**(code **)(*DAT_14ca83900 + 0x430))(DAT_14ca83900,&DAT_14ca85100,*plVar9);
    uVar2 = *(undefined4 *)(&DAT_14a384b10 + (uint)((0xb - (int)uVar10) * 4));
    lVar15 = uVar11 - 1;
    auVar16._8_4_ = (int)lVar15;
    auVar16._0_8_ = lVar15;
    auVar16._12_4_ = (int)((ulonglong)lVar15 >> 0x20);
    uVar12 = 0;
    do {
      uVar13 = 0;
      auVar17 = auVar20;
      auVar18 = auVar19;
      do {
        lVar15 = SUB168(auVar16 ^ auVar4,0);
        if ((bool)(~(lVar15 < SUB168(auVar17 ^ auVar4,0)) & 1)) {
          *(undefined4 *)(lVar6 + uVar13) = uVar2;
        }
        if (SUB168(auVar17 ^ auVar4,8) <= SUB168(auVar16 ^ auVar4,8)) {
          *(undefined4 *)(lVar6 + 4 + uVar13) = uVar2;
        }
        if ((longlong)(auVar18._0_8_ ^ auVar4._0_8_) <= lVar15) {
          *(undefined4 *)(lVar6 + 8 + uVar13) = uVar2;
          *(undefined4 *)(lVar6 + 0xc + uVar13) = uVar2;
        }
        lVar15 = auVar17._8_8_;
        auVar17._0_8_ = auVar17._0_8_ + auVar21._0_8_;
        auVar17._8_8_ = lVar15 + auVar21._8_8_;
        lVar15 = auVar18._8_8_;
        auVar18._0_8_ = auVar18._0_8_ + auVar21._0_8_;
        auVar18._8_8_ = lVar15 + auVar21._8_8_;
        uVar13 = uVar13 + 0x10;
      } while ((uVar11 * 4 + 0xc & 0xfffffffffffffff0) != uVar13);
      lVar6 = lVar6 + (ulonglong)((uint)local_f8[0] & 0xfffffffc);
      uVar12 = uVar12 + 1;
    } while (uVar12 != (uint)uVar11);
    local_120 = (longlong *)CONCAT71(local_120._1_7_,1);
    local_128 = local_128 & 0xffffff00;
    (**(code **)(*DAT_14ca83900 + 0x438))(DAT_14ca83900,&DAT_14ca85100,*plVar9,uVar10 & 0xffffffff);
    uVar11 = (ulonglong)((uint)uVar11 >> 1);
    uVar10 = uVar10 + 1;
  } while (uVar10 != 0xc);
  local_e8 = 0;
  uStack_e4 = 0x7f7fffff;
  local_f8[1] = 0;
  uStack_e0 = 0;
  uStack_d8 = uStack_d8 & 0xffffff00;
  lVar6 = FUN_1405d51a2();
  lVar15 = *(longlong *)(param_1 + 0x18);
  if (lVar15 != lVar6) {
    *(longlong *)(param_1 + 0x18) = lVar6;
    if (lVar6 != 0) {
      LOCK();
      *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
      UNLOCK();
    }
    if (lVar15 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar15 + 8);
      uVar12 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar12 & 0x3fffffff) == 1) {
        puVar1 = (uint *)(lVar15 + 8);
        LOCK();
        uVar12 = *puVar1;
        *puVar1 = *puVar1 | 0x40000000;
        UNLOCK();
        if ((uVar12 >> 0x1e & 1) == 0) {
          bVar3 = *(byte *)(lVar15 + 0xd);
          plVar7 = (longlong *)FUN_14001cc68(0x10,8);
          plVar7[1] = lVar15;
          plVar9 = DAT_14ca843c0;
          plVar8 = DAT_14ca843c8;
          if ((bVar3 & 2) == 0) {
            do {
              *plVar7 = (longlong)plVar9;
              LOCK();
              bVar14 = plVar9 != DAT_14ca843c0;
              plVar8 = plVar7;
              if (bVar14) {
                plVar9 = DAT_14ca843c0;
                plVar8 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar8;
              UNLOCK();
            } while (bVar14);
          }
          else {
            do {
              *plVar7 = (longlong)plVar8;
              LOCK();
              bVar14 = plVar8 != DAT_14ca843c8;
              plVar9 = plVar7;
              if (bVar14) {
                plVar8 = DAT_14ca843c8;
                plVar9 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar9;
              UNLOCK();
            } while (bVar14);
          }
        }
      }
    }
  }
  if ((local_90 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431f9104 FUN_1431f9104 body=31 status=ok
// SIG undefined FUN_1431f9104(void)

undefined8 FUN_1431f9104(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1431f9124 FUN_1431f9124 body=31 status=ok
// SIG undefined FUN_1431f9124(void)

undefined8 FUN_1431f9124(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1431f9144 FUN_1431f9144 body=1324 status=ok
// SIG undefined FUN_1431f9144(void)

void FUN_1431f9144(longlong param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  void *_Src;
  uint uVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  longlong lVar12;
  undefined8 *puVar13;
  void *pvVar14;
  longlong lVar15;
  longlong lVar16;
  undefined1 *puVar17;
  undefined8 *puVar18;
  size_t _Size;
  ulonglong uVar19;
  void *_Dst;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  longlong local_c8;
  undefined1 local_c0 [8];
  undefined1 *local_b8;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_144b1c6fa(param_1 + 0x10,local_c0);
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar13 = puVar18 + 0x11;
  if ((undefined8 *)param_2[1] < puVar13) {
    FUN_140023dd8(param_2,0x90);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar18 + 0x11;
  }
  *param_2 = (ulonglong)puVar13;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_FUN_14a1fb978;
  puVar18[3] = 0;
  *(int *)(puVar18 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar18 + 0x24) = 8;
  }
  else {
    puVar17 = local_c0;
    if (local_b8 != (undefined1 *)0x0) {
      puVar17 = local_b8;
    }
    FUN_1446fe144(puVar18 + 2,local_b0,0);
    puVar13 = (undefined8 *)puVar18[3];
    if ((undefined8 *)puVar18[3] == (undefined8 *)0x0) {
      puVar13 = puVar18 + 2;
    }
    memcpy(puVar13,puVar17,(longlong)local_b0);
  }
  puVar18[0xd] = 0;
  *(int *)(puVar18 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar18 + 0x74) = 8;
  }
  else {
    puVar17 = local_68;
    if (local_68 == (undefined1 *)0x0) {
      puVar17 = local_a8;
    }
    FUN_1446fe1b8(puVar18 + 5,local_60,0);
    puVar13 = (undefined8 *)puVar18[0xd];
    if ((undefined8 *)puVar18[0xd] == (undefined8 *)0x0) {
      puVar13 = puVar18 + 5;
    }
    memcpy(puVar13,puVar17,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar18 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar18 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar18 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar18 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (local_b8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x1d8);
  uVar4 = *(undefined4 *)(param_1 + 0x1dc);
  uVar7 = *(undefined8 *)(param_1 + 0x1b8);
  uVar8 = *(undefined8 *)(param_1 + 0x1c0);
  local_c8 = CONCAT44(local_c8._4_4_,*(undefined4 *)(param_1 + 0x1e0));
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    uVar10 = 0;
  }
  else {
    lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar15 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    uVar10 = *(ulonglong *)(*(longlong *)(lVar12 + 0x50) + lVar15 * 8);
    if (uVar10 == 0) {
      uVar10 = FUN_1400bafc2(lVar12,lVar15,1);
    }
  }
  uVar11 = FUN_140029432(param_2,uVar10,0);
  param_2[0x37] = uVar10;
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar13 = puVar18 + 3;
  if ((undefined8 *)param_2[1] < puVar13) {
    FUN_140023dd8(param_2,0x20);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar18 + 3;
  }
  *param_2 = (ulonglong)puVar13;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_LAB_14a37d340;
  puVar18[2] = uVar11;
  local_d8 = uVar8;
  FUN_14480864a(param_2,uVar10,*(undefined8 *)(param_1 + 0x1c8),uVar7);
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar13 = puVar18 + 4;
  if ((undefined8 *)param_2[1] < puVar13) {
    FUN_140023dd8(param_2,0x28);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar18 + 4;
  }
  *param_2 = (ulonglong)puVar13;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_LAB_14a1fbc30;
  *(undefined4 *)(puVar18 + 2) = uVar3;
  *(undefined4 *)((longlong)puVar18 + 0x14) = uVar4;
  *(undefined4 *)(puVar18 + 3) = (undefined4)local_c8;
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    lVar12 = 0;
  }
  else {
    lVar15 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar16 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    lVar12 = *(longlong *)(*(longlong *)(lVar15 + 0x50) + lVar16 * 8);
    if (lVar12 == 0) {
      lVar12 = FUN_1400bafc2(lVar15,lVar16,1);
    }
  }
  local_c8 = lVar12;
  if (DAT_14ca8507b == '\x01') {
    puVar1 = param_2 + 0x12;
    if ((0 < (int)param_2[0x13]) &&
       (*(undefined4 *)(param_2 + 0x13) = 0, *(int *)((longlong)param_2 + 0x9c) < 0)) {
      FUN_147139e90(puVar1,0);
    }
    lVar12 = *(longlong *)(param_1 + 0x1c8);
    uVar10 = *(ulonglong *)(lVar12 + 0x10);
    uVar19 = lVar12 + 0x10 + ((longlong)uVar10 >> 0x18);
    if ((uVar10 & 1) == 0) {
      uVar19 = uVar10;
    }
    iVar5 = *(int *)(lVar12 + 0x18);
    if ((longlong)iVar5 != 0) {
      lVar12 = 0;
      do {
        uVar9 = (uint)*(byte *)(uVar19 + 3 + lVar12);
        if ((uVar9 < 0x13) && ((0x44080U >> (uVar9 & 0x1f) & 1) != 0)) {
          bVar2 = *(byte *)(uVar19 + 2 + lVar12);
          iVar6 = (int)param_2[0x13];
          *(uint *)(param_2 + 0x13) = iVar6 + 1U;
          if (*(uint *)((longlong)param_2 + 0x9c) < iVar6 + 1U) {
            FUN_1447477d8(puVar1,iVar6);
          }
          uVar10 = *puVar1;
          *(ushort *)(uVar10 + (longlong)iVar6 * 4) = (ushort)bVar2;
          *(undefined1 *)(uVar10 + 2 + (longlong)iVar6 * 4) = 1;
        }
        lVar12 = lVar12 + 4;
      } while ((longlong)iVar5 * 4 != lVar12);
    }
    uVar10 = param_2[0x13];
    lVar12 = (longlong)(int)uVar10;
    if (0 < lVar12) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar1;
        puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar13 = puVar18 + 5;
        if ((undefined8 *)param_2[1] < puVar13) {
          FUN_140023dd8(param_2,0x30);
          puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
          puVar13 = puVar18 + 5;
        }
        *param_2 = (ulonglong)puVar13;
        *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
        *(undefined8 **)param_2[6] = puVar18;
        param_2[6] = (ulonglong)(puVar18 + 1);
        _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
        pvVar14 = (void *)((longlong)_Dst + lVar12 * 4);
        _Size = lVar12 * 4;
        if ((void *)param_2[1] < pvVar14) {
          FUN_140023dd8(param_2,(uint)_Size | 2);
          _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
          pvVar14 = (void *)((longlong)_Dst + _Size);
        }
        *param_2 = (ulonglong)pvVar14;
        memcpy(_Dst,_Src,_Size);
        puVar18[1] = 0;
        *puVar18 = &PTR_FUN_14a1fbc38;
        puVar18[2] = local_c8;
        puVar18[3] = _Dst;
        *(int *)(puVar18 + 4) = (int)uVar10;
      }
      *(undefined4 *)(param_2 + 0x13) = 0;
      if (*(int *)((longlong)param_2 + 0x9c) < 0) {
        FUN_147139e90(puVar1,0);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1431f96a2 FUN_1431f96a2 body=374 status=ok
// SIG undefined FUN_1431f96a2(void)

void FUN_1431f96a2(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 local_2e;
  undefined4 local_26;
  undefined2 local_22;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_2e = 0x2020207010700;
  local_26 = 0x2020207;
  local_22 = 0xffff;
  (**(code **)(*DAT_14ca83900 + 0x58))(DAT_14ca83900,&local_38);
  plVar7 = (longlong *)(param_1 + 0x10);
  if (plVar7 != &local_38) {
    lVar4 = *plVar7;
    *plVar7 = local_38;
    local_38 = 0;
    if (lVar4 == 0) goto LAB_1431f97c9;
    LOCK();
    puVar1 = (uint *)(lVar4 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar4 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(lVar4 + 0xd);
        plVar5 = (longlong *)FUN_14001cc68(0x10,8);
        plVar5[1] = lVar4;
        plVar7 = DAT_14ca843c0;
        plVar6 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar5 = (longlong)plVar7;
            LOCK();
            bVar8 = plVar7 != DAT_14ca843c0;
            plVar6 = plVar5;
            if (bVar8) {
              plVar7 = DAT_14ca843c0;
              plVar6 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar6;
            UNLOCK();
          } while (bVar8);
        }
        else {
          do {
            *plVar5 = (longlong)plVar6;
            LOCK();
            bVar8 = plVar6 != DAT_14ca843c8;
            plVar7 = plVar5;
            if (bVar8) {
              plVar6 = DAT_14ca843c8;
              plVar7 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar7;
            UNLOCK();
          } while (bVar8);
        }
      }
    }
  }
  lVar4 = local_38;
  if (local_38 != 0) {
    LOCK();
    puVar1 = (uint *)(local_38 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(local_38 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(local_38 + 0xd);
        plVar5 = (longlong *)FUN_14001cc68(0x10,8);
        plVar5[1] = lVar4;
        plVar7 = DAT_14ca843c0;
        plVar6 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar5 = (longlong)plVar7;
            LOCK();
            bVar8 = plVar7 != DAT_14ca843c0;
            plVar6 = plVar5;
            if (bVar8) {
              plVar7 = DAT_14ca843c0;
              plVar6 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar6;
            UNLOCK();
          } while (bVar8);
        }
        else {
          do {
            *plVar5 = (longlong)plVar6;
            LOCK();
            bVar8 = plVar6 != DAT_14ca843c8;
            plVar7 = plVar5;
            if (bVar8) {
              plVar6 = DAT_14ca843c8;
              plVar7 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar7;
            UNLOCK();
          } while (bVar8);
        }
      }
    }
  }
LAB_1431f97c9:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1431f981a FUN_1431f981a body=25 status=ok
// SIG undefined FUN_1431f981a(void)

void FUN_1431f981a(void)

{
  FUN_14134bf06();
  FUN_14170c56a(&DAT_14ca89a10);
  return;
}



// FUNCTION 1431f9834 FUN_1431f9834 body=38 status=ok
// SIG undefined FUN_1431f9834(void)

undefined8 FUN_1431f9834(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1431f985a FUN_1431f985a body=1413 status=ok
// SIG undefined FUN_1431f985a(void)

void FUN_1431f985a(longlong param_1,ulonglong *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined1 auStack_168 [32];
  undefined8 local_148;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined4 local_e0;
  undefined4 uStack_dc;
  int iStack_d8;
  undefined8 uStack_d4;
  undefined8 uStack_cc;
  undefined8 uStack_c4;
  undefined8 local_bc;
  undefined8 uStack_b4;
  undefined8 local_ac;
  undefined5 uStack_a4;
  undefined3 uStack_9f;
  undefined5 uStack_9c;
  undefined8 uStack_97;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  uint local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_144b1c6fa(param_1 + 0x10,&local_138);
  puVar9 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar9 + 0x11;
  if ((undefined8 *)param_2[1] < puVar4) {
    FUN_140023dd8(param_2,0x90);
    puVar9 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar9 + 0x11;
  }
  *param_2 = (ulonglong)puVar4;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar9;
  param_2[6] = (ulonglong)(puVar9 + 1);
  puVar9[1] = 0;
  *puVar9 = &PTR_FUN_14a1fb978;
  puVar9[3] = 0;
  *(int *)(puVar9 + 4) = (int)uStack_128;
  if ((longlong)(int)uStack_128 == 0) {
    *(undefined4 *)((longlong)puVar9 + 0x24) = 8;
  }
  else {
    puVar4 = &local_138;
    if (uStack_130 != (undefined8 *)0x0) {
      puVar4 = uStack_130;
    }
    FUN_1446fe144(puVar9 + 2,(int)uStack_128,0);
    puVar7 = (undefined8 *)puVar9[3];
    if ((undefined8 *)puVar9[3] == (undefined8 *)0x0) {
      puVar7 = puVar9 + 2;
    }
    memcpy(puVar7,puVar4,(longlong)(int)uStack_128);
  }
  puVar9[0xd] = 0;
  puVar4 = (undefined8 *)CONCAT44(uStack_dc,local_e0);
  *(int *)(puVar9 + 0xe) = iStack_d8;
  if ((longlong)iStack_d8 == 0) {
    *(undefined4 *)((longlong)puVar9 + 0x74) = 8;
  }
  else {
    if (puVar4 == (undefined8 *)0x0) {
      puVar4 = &uStack_120;
    }
    FUN_1446fe1b8(puVar9 + 5,iStack_d8,0);
    puVar7 = (undefined8 *)puVar9[0xd];
    if ((undefined8 *)puVar9[0xd] == (undefined8 *)0x0) {
      puVar7 = puVar9 + 5;
    }
    memcpy(puVar7,puVar4,(longlong)iStack_d8 << 3);
    puVar4 = (undefined8 *)CONCAT44(uStack_dc,local_e0);
  }
  *(undefined4 *)(puVar9 + 0xf) = uStack_d4._4_4_;
  *(undefined4 *)((longlong)puVar9 + 0x7c) = (undefined4)uStack_cc;
  *(undefined4 *)(puVar9 + 0x10) = uStack_cc._4_4_;
  *(undefined4 *)((longlong)puVar9 + 0x84) = (undefined4)uStack_c4;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_1400020a8(puVar4);
  }
  if (uStack_130 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  iVar1 = *(int *)(param_1 + 0x1e4);
  iVar2 = *(int *)(param_1 + 0x1e0);
  puVar9 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar9 + 5;
  if ((undefined8 *)param_2[1] < puVar4) {
    FUN_140023dd8(param_2,0x30);
    puVar9 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar9 + 5;
  }
  *param_2 = (ulonglong)puVar4;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar9;
  param_2[6] = (ulonglong)(puVar9 + 1);
  puVar9[1] = 0;
  puVar9[2] = 0;
  *puVar9 = &PTR_LAB_14a1e7fc8;
  *(undefined4 *)(puVar9 + 3) = 0;
  *(float *)((longlong)puVar9 + 0x1c) = (float)iVar2;
  *(float *)(puVar9 + 4) = (float)iVar1;
  *(undefined4 *)((longlong)puVar9 + 0x24) = 0x3f800000;
  local_f0 = 0;
  uStack_e8 = 0;
  local_110 = 0;
  uStack_120 = 0;
  uStack_118 = 0;
  uStack_130 = (undefined8 *)0x0;
  uStack_128 = 0;
  uStack_dc = 0;
  iStack_d8 = 0;
  uStack_d4 = 0;
  uStack_cc = 0;
  uStack_c4 = 0;
  local_bc = 0;
  uStack_b4 = 0;
  local_ac = 0;
  uStack_a4 = 0;
  uStack_9f = 0;
  uStack_9c = 0;
  uStack_97 = 0;
  local_88 = 0;
  uStack_80 = 0;
  lVar5 = 0;
  local_78 = 0;
  local_70 = 1;
  local_68 = 0;
  uStack_f8 = DAT_14c9c0d98;
  local_100 = DAT_14c9c0db0;
  uStack_108 = DAT_14ca111f0;
  local_e0 = 1;
  local_138 = DAT_14ca94df8;
  if (*(longlong *)(param_1 + 0x1b8) != 0) {
    lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x1c0) + 8);
    lVar8 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1b8) + 0xd4);
    lVar5 = *(longlong *)(*(longlong *)(lVar6 + 0x50) + lVar8 * 8);
    if (lVar5 == 0) {
      lVar5 = FUN_1400bafc2(lVar6,lVar8,1);
    }
  }
  uStack_130 = (undefined8 *)lVar5;
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    lVar6 = 0;
  }
  else {
    lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar8 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    lVar6 = *(longlong *)(*(longlong *)(lVar5 + 0x50) + lVar8 * 8);
    if (lVar6 == 0) {
      lVar6 = FUN_1400bafc2(lVar5,lVar8,1);
    }
  }
  uStack_128 = lVar6;
  FUN_144b0e33a(param_2,&local_138);
  lVar5 = FUN_140028f18(param_2,&local_138);
  if ((lVar5 != 0) && ((local_70 & 0x10000000) == 0)) {
    *(undefined4 *)(param_2 + 0x35) = (undefined4)uStack_118;
    *(undefined4 *)((longlong)param_2 + 0x1ac) = uStack_118._4_4_;
    *(undefined4 *)(param_2 + 0x36) = (undefined4)local_110;
    *(undefined4 *)((longlong)param_2 + 0x1b4) = local_110._4_4_;
    *(int *)(param_2 + 0x33) = (int)uStack_128;
    *(undefined4 *)((longlong)param_2 + 0x19c) = uStack_128._4_4_;
    *(undefined4 *)(param_2 + 0x34) = (undefined4)uStack_120;
    *(undefined4 *)((longlong)param_2 + 0x1a4) = uStack_120._4_4_;
    *(undefined4 *)(param_2 + 0x31) = (undefined4)local_138;
    *(undefined4 *)((longlong)param_2 + 0x18c) = local_138._4_4_;
    *(undefined4 *)(param_2 + 0x32) = (undefined4)uStack_130;
    *(undefined4 *)((longlong)param_2 + 0x194) = uStack_130._4_4_;
    puVar9 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar9 + 4;
    if ((undefined8 *)param_2[1] < puVar4) {
      FUN_140023dd8(param_2,0x28);
      puVar9 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar4 = puVar9 + 4;
    }
    *param_2 = (ulonglong)puVar4;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar9;
    param_2[6] = (ulonglong)(puVar9 + 1);
    puVar9[1] = 0;
    *puVar9 = &PTR_LAB_14a37d348;
    puVar9[2] = lVar5;
    *(undefined4 *)(puVar9 + 3) = 0;
    *(undefined1 *)((longlong)puVar9 + 0x1c) = 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x1d8);
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    lVar6 = 0;
  }
  else {
    lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar8 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    lVar6 = *(longlong *)(*(longlong *)(lVar5 + 0x50) + lVar8 * 8);
    if (lVar6 == 0) {
      lVar6 = FUN_1400bafc2(lVar5,lVar8,1);
    }
  }
  FUN_145eb8822();
  local_148 = uVar3;
  FUN_1449cc26b(param_2,lVar6,*(undefined8 *)(param_1 + 0x1c8),&DAT_14ca916c0);
  uVar3 = DAT_14ca89240;
  puVar9 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar9 + 5;
  if ((undefined8 *)param_2[1] < puVar4) {
    FUN_140023dd8(param_2,0x30);
    puVar9 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar9 + 5;
  }
  *param_2 = (ulonglong)puVar4;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar9;
  param_2[6] = (ulonglong)(puVar9 + 1);
  puVar9[1] = 0;
  *puVar9 = &PTR_LAB_14a1fb5a8;
  *(undefined4 *)(puVar9 + 2) = 0;
  puVar9[3] = uVar3;
  *(undefined4 *)(puVar9 + 4) = 0;
  uVar3 = DAT_14ca89258;
  puVar9 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar9 + 6;
  if ((undefined8 *)param_2[1] < puVar4) {
    FUN_140023dd8(param_2,0x38);
    puVar9 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar9 + 6;
  }
  *param_2 = (ulonglong)puVar4;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar9;
  param_2[6] = (ulonglong)(puVar9 + 1);
  puVar9[1] = 0;
  *puVar9 = &PTR_FUN_14a1fb5b0;
  puVar9[2] = uVar3;
  *(undefined4 *)(puVar9 + 3) = 0;
  *(undefined4 *)((longlong)puVar9 + 0x1c) = 0;
  *(undefined4 *)(puVar9 + 4) = 3;
  *(undefined4 *)((longlong)puVar9 + 0x24) = 6;
  puVar9[5] = &DAT_100000001;
  if ((local_60 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431f9de0 FUN_1431f9de0 body=481 status=ok
// SIG undefined FUN_1431f9de0(void)

void FUN_1431f9de0(longlong param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  undefined8 *_Dst;
  undefined8 *puVar2;
  undefined1 *_Src;
  undefined1 auStack_e8 [32];
  undefined8 *local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_144b1c6fa(param_1 + 0x10,&local_c0);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar1 = puVar2 + 0x11;
  if ((undefined8 *)param_2[1] < puVar1) {
    FUN_140023dd8(param_2,0x90);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar1 = puVar2 + 0x11;
  }
  *param_2 = (ulonglong)puVar1;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_FUN_14a1fb978;
  puVar2[3] = 0;
  *(int *)(puVar2 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x24) = 8;
  }
  else {
    puVar1 = (undefined8 *)CONCAT44(uStack_b4,local_b8);
    if ((undefined8 *)CONCAT44(uStack_b4,local_b8) == (undefined8 *)0x0) {
      puVar1 = &local_c0;
    }
    FUN_1446fe144(puVar2 + 2,local_b0,0);
    _Dst = (undefined8 *)puVar2[3];
    if ((undefined8 *)puVar2[3] == (undefined8 *)0x0) {
      _Dst = puVar2 + 2;
    }
    memcpy(_Dst,puVar1,(longlong)local_b0);
  }
  puVar2[0xd] = 0;
  *(int *)(puVar2 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x74) = 8;
  }
  else {
    _Src = local_68;
    if (local_68 == (undefined1 *)0x0) {
      _Src = local_a8;
    }
    FUN_1446fe1b8(puVar2 + 5,local_60,0);
    puVar1 = (undefined8 *)puVar2[0xd];
    if ((undefined8 *)puVar2[0xd] == (undefined8 *)0x0) {
      puVar1 = puVar2 + 5;
    }
    memcpy(puVar1,_Src,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar2 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar2 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar2 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar2 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (CONCAT44(uStack_b4,local_b8) != 0) {
    FUN_1400020a8();
  }
  local_b8 = *(undefined4 *)(param_1 + 0x1e0);
  local_c0 = *(undefined8 *)(param_1 + 0x1d8);
  local_c8 = &local_c0;
  FUN_1458f8d81(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1431f9fc2 FUN_1431f9fc2 body=31 status=ok
// SIG undefined FUN_1431f9fc2(void)

undefined8 FUN_1431f9fc2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1431f9fe2 FUN_1431f9fe2 body=1324 status=ok
// SIG undefined FUN_1431f9fe2(void)

void FUN_1431f9fe2(longlong param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  void *_Src;
  uint uVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  longlong lVar12;
  undefined8 *puVar13;
  void *pvVar14;
  longlong lVar15;
  longlong lVar16;
  undefined1 *puVar17;
  undefined8 *puVar18;
  size_t _Size;
  ulonglong uVar19;
  void *_Dst;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  longlong local_c8;
  undefined1 local_c0 [8];
  undefined1 *local_b8;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_144b1c6fa(param_1 + 0x10,local_c0);
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar13 = puVar18 + 0x11;
  if ((undefined8 *)param_2[1] < puVar13) {
    FUN_140023dd8(param_2,0x90);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar18 + 0x11;
  }
  *param_2 = (ulonglong)puVar13;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_FUN_14a1fb978;
  puVar18[3] = 0;
  *(int *)(puVar18 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar18 + 0x24) = 8;
  }
  else {
    puVar17 = local_c0;
    if (local_b8 != (undefined1 *)0x0) {
      puVar17 = local_b8;
    }
    FUN_1446fe144(puVar18 + 2,local_b0,0);
    puVar13 = (undefined8 *)puVar18[3];
    if ((undefined8 *)puVar18[3] == (undefined8 *)0x0) {
      puVar13 = puVar18 + 2;
    }
    memcpy(puVar13,puVar17,(longlong)local_b0);
  }
  puVar18[0xd] = 0;
  *(int *)(puVar18 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar18 + 0x74) = 8;
  }
  else {
    puVar17 = local_68;
    if (local_68 == (undefined1 *)0x0) {
      puVar17 = local_a8;
    }
    FUN_1446fe1b8(puVar18 + 5,local_60,0);
    puVar13 = (undefined8 *)puVar18[0xd];
    if ((undefined8 *)puVar18[0xd] == (undefined8 *)0x0) {
      puVar13 = puVar18 + 5;
    }
    memcpy(puVar13,puVar17,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar18 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar18 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar18 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar18 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (local_b8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x1d8);
  uVar4 = *(undefined4 *)(param_1 + 0x1dc);
  uVar7 = *(undefined8 *)(param_1 + 0x1b8);
  uVar8 = *(undefined8 *)(param_1 + 0x1c0);
  local_c8 = CONCAT44(local_c8._4_4_,*(undefined4 *)(param_1 + 0x1e0));
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    uVar10 = 0;
  }
  else {
    lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar15 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    uVar10 = *(ulonglong *)(*(longlong *)(lVar12 + 0x50) + lVar15 * 8);
    if (uVar10 == 0) {
      uVar10 = FUN_1400bafc2(lVar12,lVar15,1);
    }
  }
  uVar11 = FUN_140029432(param_2,uVar10,0);
  param_2[0x37] = uVar10;
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar13 = puVar18 + 3;
  if ((undefined8 *)param_2[1] < puVar13) {
    FUN_140023dd8(param_2,0x20);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar18 + 3;
  }
  *param_2 = (ulonglong)puVar13;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_LAB_14a37d340;
  puVar18[2] = uVar11;
  local_d8 = uVar8;
  FUN_14480864a(param_2,uVar10,*(undefined8 *)(param_1 + 0x1c8),uVar7);
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar13 = puVar18 + 4;
  if ((undefined8 *)param_2[1] < puVar13) {
    FUN_140023dd8(param_2,0x28);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar18 + 4;
  }
  *param_2 = (ulonglong)puVar13;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_LAB_14a1fbc30;
  *(undefined4 *)(puVar18 + 2) = uVar3;
  *(undefined4 *)((longlong)puVar18 + 0x14) = uVar4;
  *(undefined4 *)(puVar18 + 3) = (undefined4)local_c8;
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    lVar12 = 0;
  }
  else {
    lVar15 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar16 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    lVar12 = *(longlong *)(*(longlong *)(lVar15 + 0x50) + lVar16 * 8);
    if (lVar12 == 0) {
      lVar12 = FUN_1400bafc2(lVar15,lVar16,1);
    }
  }
  local_c8 = lVar12;
  if (DAT_14ca8507b == '\x01') {
    puVar1 = param_2 + 0x12;
    if ((0 < (int)param_2[0x13]) &&
       (*(undefined4 *)(param_2 + 0x13) = 0, *(int *)((longlong)param_2 + 0x9c) < 0)) {
      FUN_147139e90(puVar1,0);
    }
    lVar12 = *(longlong *)(param_1 + 0x1c8);
    uVar10 = *(ulonglong *)(lVar12 + 0x10);
    uVar19 = lVar12 + 0x10 + ((longlong)uVar10 >> 0x18);
    if ((uVar10 & 1) == 0) {
      uVar19 = uVar10;
    }
    iVar5 = *(int *)(lVar12 + 0x18);
    if ((longlong)iVar5 != 0) {
      lVar12 = 0;
      do {
        uVar9 = (uint)*(byte *)(uVar19 + 3 + lVar12);
        if ((uVar9 < 0x13) && ((0x44080U >> (uVar9 & 0x1f) & 1) != 0)) {
          bVar2 = *(byte *)(uVar19 + 2 + lVar12);
          iVar6 = (int)param_2[0x13];
          *(uint *)(param_2 + 0x13) = iVar6 + 1U;
          if (*(uint *)((longlong)param_2 + 0x9c) < iVar6 + 1U) {
            FUN_1447477d8(puVar1,iVar6);
          }
          uVar10 = *puVar1;
          *(ushort *)(uVar10 + (longlong)iVar6 * 4) = (ushort)bVar2;
          *(undefined1 *)(uVar10 + 2 + (longlong)iVar6 * 4) = 1;
        }
        lVar12 = lVar12 + 4;
      } while ((longlong)iVar5 * 4 != lVar12);
    }
    uVar10 = param_2[0x13];
    lVar12 = (longlong)(int)uVar10;
    if (0 < lVar12) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar1;
        puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar13 = puVar18 + 5;
        if ((undefined8 *)param_2[1] < puVar13) {
          FUN_140023dd8(param_2,0x30);
          puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
          puVar13 = puVar18 + 5;
        }
        *param_2 = (ulonglong)puVar13;
        *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
        *(undefined8 **)param_2[6] = puVar18;
        param_2[6] = (ulonglong)(puVar18 + 1);
        _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
        pvVar14 = (void *)((longlong)_Dst + lVar12 * 4);
        _Size = lVar12 * 4;
        if ((void *)param_2[1] < pvVar14) {
          FUN_140023dd8(param_2,(uint)_Size | 2);
          _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
          pvVar14 = (void *)((longlong)_Dst + _Size);
        }
        *param_2 = (ulonglong)pvVar14;
        memcpy(_Dst,_Src,_Size);
        puVar18[1] = 0;
        *puVar18 = &PTR_FUN_14a1fbc38;
        puVar18[2] = local_c8;
        puVar18[3] = _Dst;
        *(int *)(puVar18 + 4) = (int)uVar10;
      }
      *(undefined4 *)(param_2 + 0x13) = 0;
      if (*(int *)((longlong)param_2 + 0x9c) < 0) {
        FUN_147139e90(puVar1,0);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1431fa510 FUN_1431fa510 body=31 status=ok
// SIG undefined FUN_1431fa510(void)

undefined8 FUN_1431fa510(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}


