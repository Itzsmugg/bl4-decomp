// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14158b3b2 FUN_14158b3b2 body=226 status=ok
// SIG undefined FUN_14158b3b2(void)

longlong * FUN_14158b3b2(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1464721d6;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14158b496 FUN_14158b496 body=164 status=ok
// SIG undefined FUN_14158b496(void)

undefined4 FUN_14158b496(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  longlong *plVar5;
  longlong lVar6;
  
  plVar5 = (longlong *)FUN_14054d1d4();
  plVar5 = (longlong *)(**(code **)(*plVar5 + 0x18))(plVar5,param_2,param_3);
  if ((plVar5 != (longlong *)0x0) &&
     (lVar6 = (**(code **)(*plVar5 + 0x30))(plVar5), lVar6 < 0x7ffffffe)) {
    uVar2 = (uint)lVar6;
    FUN_1400ec3e6(param_1,uVar2 + 2);
    iVar1 = *(int *)(param_1 + 1);
    iVar3 = iVar1 + uVar2;
    *(int *)(param_1 + 1) = iVar3;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < uVar2) {
      FUN_1447403be(param_1);
      iVar3 = *(int *)(param_1 + 1);
    }
    (**(code **)(*plVar5 + 0x170))(plVar5,*param_1,(longlong)iVar3);
    uVar4 = (**(code **)(*plVar5 + 0x1f8))(plVar5);
    (**(code **)*plVar5)(plVar5,1);
    return uVar4;
  }
  return 0;
}



// FUNCTION 14158b53a FUN_14158b53a body=125 status=ok
// SIG undefined FUN_14158b53a(void)

void FUN_14158b53a(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0x1000100;
  *(undefined2 *)((longlong)param_1 + 0xc) = 1;
  uVar1 = DAT_14c8464e8;
  param_1[2] = DAT_14c8464e0;
  param_1[3] = uVar1;
  param_1[4] = DAT_14c8464f0;
  *(undefined2 *)(param_1 + 5) = 0;
  *(undefined1 *)((longlong)param_1 + 0x2a) = 0;
  param_1[6] = 0;
  *(undefined2 *)(param_1 + 10) = 0x18;
  uVar1 = DAT_14c846500;
  param_1[7] = DAT_14c8464f8;
  param_1[8] = uVar1;
  param_1[9] = DAT_14c846508;
  *(undefined1 *)(param_1 + 0xb) = 5;
  *(char *)(param_1 + 0xc) = ((DAT_14c9a8ab4 & 0x20) == 0) * '\x05';
  *(undefined2 *)(param_1 + 0xd) = 0x100;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  return;
}



// FUNCTION 14158b5b8 FUN_14158b5b8 body=388 status=ok
// SIG undefined FUN_14158b5b8(void)

void FUN_14158b5b8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b7be2a0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  if (param_1[0x23] != 0) {
    FUN_1400020a8();
  }
  FUN_145a9f240(param_1 + 0x1b);
  *(undefined4 *)(param_1 + 0x1a) = 0;
  if (param_1[0x19] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x12) = 0;
  if (*(int *)((longlong)param_1 + 0x94) != 0) {
    FUN_14472eb64(param_1 + 0x11,0);
  }
  param_1[0x17] = 0xffffffff;
  *(undefined4 *)(param_1 + 0x16) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0xb4)) {
    *(undefined4 *)((longlong)param_1 + 0xb4) = 0x80;
    FUN_1446efbd8(param_1 + 0x13,0);
  }
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0xf) = 0;
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 7) = 0;
  if (*(int *)((longlong)param_1 + 0x3c) != 0) {
    FUN_14472eb64(param_1 + 6,0);
  }
  param_1[0xc] = 0xffffffff;
  *(undefined4 *)(param_1 + 0xb) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x5c)) {
    *(undefined4 *)((longlong)param_1 + 0x5c) = 0x80;
    FUN_1446efbd8(param_1 + 8,0);
  }
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 14158b73c FUN_14158b73c body=425 status=ok
// SIG undefined FUN_14158b73c(void)

ulonglong FUN_14158b73c(longlong param_1)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  byte bVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  undefined7 uVar9;
  ulonglong uVar8;
  longlong lVar10;
  
  if (*(longlong *)(param_1 + 0x38) == 0) {
    plVar5 = (longlong *)FUN_1415d76b6();
    lVar6 = plVar5[0x22];
    if (lVar6 == 0) {
      (**(code **)(*plVar5 + 1000))(plVar5);
      lVar6 = plVar5[0x22];
      if (lVar6 == 0) goto LAB_14158b781;
    }
    if (*(char *)(lVar6 + 0x38) == '\0') goto LAB_14158b781;
  }
  else {
LAB_14158b781:
    if (*(longlong *)(param_1 + 0x48) == 0) {
      plVar5 = (longlong *)FUN_1415d76b6();
      lVar6 = plVar5[0x22];
      if (lVar6 == 0) {
        (**(code **)(*plVar5 + 1000))(plVar5);
        lVar6 = plVar5[0x22];
        if (lVar6 == 0) goto LAB_14158b7ba;
      }
      if (*(char *)(lVar6 + 0x38) != '\0') goto LAB_14158b7fd;
    }
LAB_14158b7ba:
    if (*(longlong *)(param_1 + 0x30) != 0) {
      if (*(longlong *)(param_1 + 0x68) == 0) {
        plVar5 = (longlong *)FUN_1415d76b6();
        lVar6 = plVar5[0x22];
        if (lVar6 == 0) {
          (**(code **)(*plVar5 + 1000))(plVar5);
          lVar6 = plVar5[0x22];
          if (lVar6 == 0) goto LAB_14158b804;
        }
        if (*(char *)(lVar6 + 0xe0) != '\0') goto LAB_14158b7fd;
      }
LAB_14158b804:
      plVar5 = (longlong *)FUN_1415d76b6();
      lVar6 = plVar5[0x22];
      uVar9 = (undefined7)((ulonglong)plVar5 >> 8);
      if (lVar6 == 0) {
        (**(code **)(*plVar5 + 1000))(plVar5);
        lVar6 = plVar5[0x22];
        if (lVar6 == 0) {
          uVar8 = CONCAT71(uVar9,1);
          goto LAB_14158b8d5;
        }
      }
      uVar8 = CONCAT71(uVar9,1);
      if ((*(char *)(lVar6 + 0xe0) == '\x01') &&
         (iVar1 = *(int *)(param_1 + 0x58), (longlong)iVar1 != 0)) {
        lVar6 = *(longlong *)(param_1 + 0x50);
        uVar8 = CONCAT71(uVar9,1);
        lVar10 = 0;
        do {
          uVar2 = *(ulonglong *)(lVar6 + lVar10);
          if (((((uVar2 >> 0x20 != 0) && (uVar7 = (uint)uVar2, -1 < (int)uVar7)) &&
               ((int)uVar7 < DAT_14c9647dc)) &&
              ((plVar5 = (longlong *)
                         ((ulonglong)((uVar7 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0xd & 0x3fff8))),
               plVar5 != (longlong *)0x0 && ((int)plVar5[2] == (int)(uVar2 >> 0x20))))) &&
             (((*(uint *)(plVar5 + 1) & 0x10200000) == 0 &&
              ((*plVar5 != 0 && (lVar3 = *(longlong *)(*plVar5 + 0x398), lVar3 != 0)))))) {
            bVar4 = FUN_1402bfec4(lVar3,0);
            uVar8 = CONCAT71((int7)(uVar8 >> 8),(byte)uVar8 & (bVar4 ^ 1));
          }
          lVar10 = lVar10 + 8;
        } while ((longlong)iVar1 * 8 != lVar10);
      }
      goto LAB_14158b8d5;
    }
  }
LAB_14158b7fd:
  uVar8 = 0;
LAB_14158b8d5:
  return uVar8 & 0xffffff01;
}



// FUNCTION 14158b8e5 FUN_14158b8e5 body=2740 status=ok
// SIG undefined FUN_14158b8e5(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14158b8e5(longlong *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  uint uVar10;
  int iVar11;
  DWORD DVar12;
  DWORD DVar13;
  ulonglong uVar14;
  undefined4 *puVar15;
  uint *puVar16;
  undefined8 uVar17;
  uint uVar18;
  ulonglong uVar19;
  uint *puVar20;
  ulonglong uVar21;
  uint uVar22;
  ulonglong uVar23;
  longlong *plVar24;
  longlong lVar25;
  undefined8 *puVar26;
  longlong lVar27;
  bool bVar28;
  float unaff_XMM6_Da;
  float unaff_XMM7_Da;
  float unaff_XMM8_Da;
  float unaff_XMM9_Da;
  float unaff_XMM10_Da;
  float unaff_XMM11_Da;
  float unaff_XMM12_Da;
  undefined1 auStack_128 [32];
  undefined1 **local_108;
  undefined1 *local_f8 [2];
  longlong *local_e8;
  longlong local_d8 [5];
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if ((int)param_1[1] == 0) {
    uVar23 = 0;
    uVar21 = 0;
  }
  else {
    uVar18 = ((uint *)*param_1)[1];
    if (((uVar18 == 0) || (uVar22 = *(uint *)*param_1, (int)uVar22 < 0)) ||
       (DAT_14c9647dc <= (int)uVar22)) {
      lVar27 = 0;
      if (_DAT_000003b8 != 0) goto LAB_14158ba03;
LAB_14158bab8:
      lVar27 = *(longlong *)(lVar27 + 0x398);
      if ((DAT_14c950c29 == '\x01') && (lVar27 != 0)) {
        FUN_1456cec3c(lVar27);
LAB_14158bada:
        uVar18 = *(uint *)(lVar27 + 0xc);
        if ((int)uVar18 < DAT_14c9647dc) {
          lVar27 = (ulonglong)((uVar18 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar18 >> 0x10) * 8);
        }
        else {
          lVar27 = 0;
        }
        uVar23 = (ulonglong)*(uint *)(lVar27 + 0x10);
        if (*(uint *)(lVar27 + 0x10) == 0) {
          LOCK();
          iVar11 = DAT_14c964868 + 1;
          UNLOCK();
          uVar22 = DAT_14c964868 + 1;
          bVar28 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar11;
          if (bVar28) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                         );
          }
          uVar23 = 0;
          LOCK();
          uVar10 = *(uint *)(lVar27 + 0x10);
          if (uVar10 == 0) {
            *(uint *)(lVar27 + 0x10) = uVar22;
          }
          else {
            uVar23 = (ulonglong)uVar10;
          }
          UNLOCK();
          if (uVar10 == 0) {
            uVar23 = (ulonglong)uVar22;
          }
        }
      }
      else {
        if (lVar27 != 0) goto LAB_14158bada;
        uVar18 = 0;
        uVar23 = 0;
      }
      uVar23 = uVar23 << 0x20;
      uVar19 = (ulonglong)uVar18;
      uVar14 = 0;
      uVar21 = 0;
    }
    else {
      plVar24 = (longlong *)
                ((ulonglong)((uVar22 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar22 >> 0x10) * 8));
      if (((plVar24 == (longlong *)0x0) || (*(uint *)(plVar24 + 2) != uVar18)) ||
         ((*(uint *)(plVar24 + 1) & 0x10200000) != 0)) {
        lVar27 = 0;
      }
      else {
        lVar27 = *plVar24;
      }
      if (*(longlong *)(lVar27 + 0x3b8) == 0) {
        if (((((int)uVar22 < DAT_14c9647dc) &&
             (plVar24 = (longlong *)
                        ((ulonglong)((uVar22 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar22 >> 0x10) * 8)),
             plVar24 != (longlong *)0x0)) && (*(uint *)(plVar24 + 2) == uVar18)) &&
           ((*(uint *)(plVar24 + 1) & 0x10200000) == 0)) {
          lVar27 = *plVar24;
        }
        else {
          lVar27 = 0;
        }
        goto LAB_14158bab8;
      }
      if ((((int)uVar22 < DAT_14c9647dc) &&
          (plVar24 = (longlong *)
                     ((ulonglong)((uVar22 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar22 >> 0x10) * 8)),
          plVar24 != (longlong *)0x0)) &&
         ((*(uint *)(plVar24 + 2) == uVar18 && ((*(uint *)(plVar24 + 1) & 0x10200000) == 0)))) {
        lVar27 = *plVar24;
      }
      else {
        lVar27 = 0;
      }
LAB_14158ba03:
      lVar27 = *(longlong *)(lVar27 + 0x3b8);
      if ((DAT_14c950c29 == '\x01') && (lVar27 != 0)) {
        FUN_1456cec3c();
LAB_14158ba25:
        uVar18 = *(uint *)(lVar27 + 0xc);
        if ((int)uVar18 < DAT_14c9647dc) {
          lVar27 = (ulonglong)((uVar18 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar18 >> 0x10) * 8);
        }
        else {
          lVar27 = 0;
        }
        uVar21 = (ulonglong)*(uint *)(lVar27 + 0x10);
        if (*(uint *)(lVar27 + 0x10) == 0) {
          LOCK();
          iVar11 = DAT_14c964868 + 1;
          UNLOCK();
          uVar22 = DAT_14c964868 + 1;
          bVar28 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar11;
          if (bVar28) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                         );
          }
          LOCK();
          uVar10 = *(uint *)(lVar27 + 0x10);
          bVar28 = uVar10 == 0;
          if (bVar28) {
            *(uint *)(lVar27 + 0x10) = uVar22;
            uVar10 = 0;
          }
          UNLOCK();
          if (bVar28) {
            uVar10 = uVar22;
          }
          uVar21 = (ulonglong)uVar10;
        }
      }
      else {
        if (lVar27 != 0) goto LAB_14158ba25;
        uVar18 = 0;
        uVar21 = 0;
      }
      uVar21 = uVar21 << 0x20;
      uVar14 = (ulonglong)uVar18;
      uVar19 = 0;
      uVar23 = 0;
    }
    puVar16 = (uint *)*param_1;
    uVar18 = puVar16[1];
    if (uVar18 == 0) {
LAB_14158bd54:
      lVar27 = 0;
    }
    else {
      uVar22 = *puVar16;
      lVar27 = 0;
      if ((-1 < (int)uVar22) && ((int)uVar22 < DAT_14c9647dc)) {
        plVar24 = (longlong *)
                  ((ulonglong)((uVar22 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar22 >> 0x10) * 8));
        if ((plVar24 == (longlong *)0x0) ||
           ((*(uint *)(plVar24 + 2) != uVar18 || ((*(uint *)(plVar24 + 1) & 0x10200000) != 0))))
        goto LAB_14158bd54;
        lVar27 = *plVar24;
      }
    }
    lVar27 = *(longlong *)(lVar27 + 0x390);
    if (uVar18 == 0) {
LAB_14158bd5c:
      lVar25 = 0;
    }
    else {
      uVar22 = *puVar16;
      lVar25 = 0;
      if ((-1 < (int)uVar22) && ((int)uVar22 < DAT_14c9647dc)) {
        plVar24 = (longlong *)
                  ((ulonglong)((uVar22 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar22 >> 0x10) * 8));
        if ((plVar24 == (longlong *)0x0) ||
           ((*(uint *)(plVar24 + 2) != uVar18 || ((*(uint *)(plVar24 + 1) & 0x10200000) != 0))))
        goto LAB_14158bd5c;
        lVar25 = *plVar24;
      }
    }
    lVar25 = *(longlong *)(lVar25 + 0x390);
    unaff_XMM6_Da = (float)*(double *)(lVar25 + 0x170);
    unaff_XMM7_Da = (float)*(double *)(lVar25 + 0x168);
    unaff_XMM8_Da = (float)*(double *)(lVar25 + 0x160);
    if (uVar18 == 0) {
LAB_14158bd64:
      lVar25 = 0;
    }
    else {
      uVar22 = *puVar16;
      lVar25 = 0;
      if ((-1 < (int)uVar22) && ((int)uVar22 < DAT_14c9647dc)) {
        plVar24 = (longlong *)
                  ((ulonglong)((uVar22 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar22 >> 0x10) * 8));
        if ((plVar24 == (longlong *)0x0) ||
           ((*(uint *)(plVar24 + 2) != uVar18 || ((*(uint *)(plVar24 + 1) & 0x10200000) != 0))))
        goto LAB_14158bd64;
        lVar25 = *plVar24;
      }
    }
    unaff_XMM9_Da = (float)(*(double *)(lVar27 + 0x650) * *(double *)(lVar27 + 0x290));
    unaff_XMM11_Da = (float)(*(double *)(lVar27 + 0x288) * *(double *)(lVar27 + 0x648));
    unaff_XMM10_Da = (float)*(double *)(lVar25 + 0x3a0);
    unaff_XMM12_Da = (float)(*(double *)(lVar27 + 0x280) * *(double *)(lVar27 + 0x640));
    uVar23 = uVar23 | uVar19;
    uVar21 = uVar21 | uVar14;
  }
  lVar27 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar11 = *(int *)(lVar27 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    fVar3 = unaff_XMM8_Da;
    fVar4 = unaff_XMM7_Da;
    fVar5 = unaff_XMM6_Da;
    fVar6 = unaff_XMM12_Da;
    fVar7 = unaff_XMM11_Da;
    fVar8 = unaff_XMM9_Da;
    fVar9 = unaff_XMM10_Da;
    if (iVar11 == 2) goto LAB_14158bf08;
    if (iVar11 != 1) goto LAB_14158bcda;
    DVar12 = FUN_140ad26c0();
    DVar13 = GetCurrentThreadId();
    fVar3 = unaff_XMM8_Da;
    fVar4 = unaff_XMM7_Da;
    fVar5 = unaff_XMM6_Da;
    fVar6 = unaff_XMM12_Da;
    fVar7 = unaff_XMM11_Da;
    fVar8 = unaff_XMM9_Da;
    fVar9 = unaff_XMM10_Da;
    if (DVar12 == DVar13) goto LAB_14158bf08;
  }
  else {
LAB_14158bcda:
    fVar3 = unaff_XMM8_Da;
    fVar4 = unaff_XMM7_Da;
    fVar5 = unaff_XMM6_Da;
    fVar6 = unaff_XMM12_Da;
    fVar7 = unaff_XMM11_Da;
    fVar8 = unaff_XMM9_Da;
    fVar9 = unaff_XMM10_Da;
    if (iVar11 == 0x10) goto LAB_14158bf08;
  }
  if (DAT_14ca9a438 == '\0') {
    fVar3 = unaff_XMM8_Da;
    fVar4 = unaff_XMM7_Da;
    fVar5 = unaff_XMM6_Da;
    fVar6 = unaff_XMM12_Da;
    fVar7 = unaff_XMM11_Da;
    fVar8 = unaff_XMM9_Da;
    fVar9 = unaff_XMM10_Da;
    if ((DAT_14c86a9f8 != '\x01') ||
       (iVar11 = *(int *)(lVar27 + 0xc60), fVar3 = unaff_XMM8_Da, fVar4 = unaff_XMM7_Da,
       fVar5 = unaff_XMM6_Da, fVar6 = unaff_XMM12_Da, fVar7 = unaff_XMM11_Da, fVar8 = unaff_XMM9_Da,
       fVar9 = unaff_XMM10_Da, iVar11 == 2)) goto LAB_14158bf08;
    if (iVar11 == 1) {
      DVar12 = FUN_140ad26c0();
      DVar13 = GetCurrentThreadId();
      fVar3 = unaff_XMM8_Da;
      fVar4 = unaff_XMM7_Da;
      fVar5 = unaff_XMM6_Da;
      fVar6 = unaff_XMM12_Da;
      fVar7 = unaff_XMM11_Da;
      fVar8 = unaff_XMM9_Da;
      fVar9 = unaff_XMM10_Da;
      if (DVar12 == DVar13) goto LAB_14158bf08;
    }
  }
  if (DAT_14ca9a43c == 0) {
    puVar2 = (undefined8 *)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x308
             );
    puVar16 = (uint *)*puVar2;
    if (puVar16 != (uint *)0x0) goto LAB_14158c019;
    while( true ) {
      uVar18 = *(uint *)(*(longlong *)
                          ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x318)
      ;
      if ((uVar18 & 1) == 0) {
        *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x318) = uVar18 | 1;
        __tlregdtor(&LAB_144644f89);
      }
      lVar27 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      puVar15 = *(undefined4 **)(lVar27 + 0x310);
      *(undefined8 *)(lVar27 + 0x310) = 0;
      if (puVar15 == (undefined4 *)0x0) {
        puVar15 = _aligned_malloc(0x10000,0x10000);
      }
      *puVar15 = 0xffffffff;
      *(undefined4 **)(puVar15 + 0x10) = puVar15 + 0x16;
      puVar15[0x12] = 0;
      *puVar2 = puVar15;
      FUN_140217a48(puVar2);
      puVar16 = (uint *)*puVar2;
LAB_14158c019:
      puVar26 = (undefined8 *)(*(longlong *)(puVar16 + 0x10) + 7U & 0xfffffffffffffff8);
      puVar20 = (uint *)(puVar26 + 0x1b);
      uVar18 = puVar16[0x12];
      if (puVar20 <= puVar16 + 0x4000) break;
      while( true ) {
        *(uint **)(puVar16 + 0x10) = puVar16 + 0x4000;
        LOCK();
        uVar22 = *puVar16;
        *puVar16 = *puVar16 + uVar18 + 1;
        UNLOCK();
        if ((uVar22 ^ uVar18) != 0xffffffff) break;
        puVar16 = (uint *)*puVar2;
        *puVar16 = 0xffffffff;
        *(uint **)(puVar16 + 0x10) = puVar16 + 0x16;
        puVar16[0x12] = 0;
        *puVar2 = puVar16;
        puVar26 = (undefined8 *)((longlong)puVar16 + 0x5fU & 0xfffffffffffffff8);
        puVar20 = (uint *)(puVar26 + 0x1b);
        uVar18 = 0;
        if (puVar20 <= puVar16 + 0x4000) {
          uVar18 = 1;
          goto LAB_14158c099;
        }
      }
    }
    uVar18 = uVar18 + 1;
LAB_14158c099:
    *(uint **)(puVar16 + 0x10) = puVar20;
    puVar16[0x12] = uVar18;
    iVar11 = 0;
    FUN_1447247dc(puVar26,0);
    *puVar26 = &PTR_FUN_14be8f640;
    puVar26[0x15] = uVar23;
    puVar26[0x16] = uVar21;
    *(float *)(puVar26 + 0x17) = unaff_XMM8_Da;
    *(float *)((longlong)puVar26 + 0xbc) = unaff_XMM7_Da;
    *(float *)(puVar26 + 0x18) = unaff_XMM6_Da;
    *(float *)((longlong)puVar26 + 0xc4) = unaff_XMM12_Da;
    *(float *)(puVar26 + 0x19) = unaff_XMM11_Da;
    *(float *)((longlong)puVar26 + 0xcc) = unaff_XMM9_Da;
    *(float *)(puVar26 + 0x1a) = unaff_XMM10_Da;
    if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
      uVar18 = DAT_14c7585c8 >> 10 & 3;
      if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar18 < 2) {
        uVar23 = (ulonglong)(byte)(&DAT_149e38edc)[uVar18];
        iVar11 = 0;
      }
      else {
        uVar23 = 2;
      }
    }
    else {
      iVar11 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
               *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
      uVar23 = 5;
    }
    if (*(code **)(puVar26[0xe] + 0x18) != FUN_144713626) {
      (**(code **)(puVar26[0xe] + 0x18))(puVar26 + 0xe,puVar26 + 9);
    }
    puVar26[0xe] = LowLevelTasks::
                   TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                   TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                   ::vftable;
    puVar26[9] = puVar26;
    puVar26[10] = puVar26;
    lVar27 = *(longlong *)
              (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x2b8);
    if (lVar27 == 0) {
      uVar21 = 1;
      if ((char)uVar23 != '\x06') {
        uVar21 = uVar23;
      }
      uVar23 = uVar21;
      uVar17 = 0;
    }
    else {
      if ((char)uVar23 == '\x06') {
        uVar23 = *(ulonglong *)(lVar27 + 0x38) >> 0x3b;
      }
      uVar17 = *(undefined8 *)(lVar27 + 0x30);
    }
    puVar26[0xf] = uVar17;
    puVar26[0x10] = uVar23 << 0x3b | 0xc00000527800b400;
    *(int *)((longlong)puVar26 + 0x1c) = iVar11;
    if (puVar26 == (undefined8 *)0x0) {
      local_f8[0] = (undefined1 *)CONCAT71(local_f8[0]._1_7_,1);
      FUN_1447439e4(0);
      uVar23 = _DAT_14cc28720;
      uVar21 = _DAT_14cc28728;
      fVar3 = _DAT_14cc28730;
      fVar4 = _DAT_14cc28734;
      fVar5 = _DAT_14cc28738;
      fVar6 = _DAT_14cc2873c;
      fVar7 = _DAT_14cc28740;
      fVar8 = _DAT_14cc28744;
      fVar9 = _DAT_14cc28748;
    }
    else {
      LOCK();
      *(int *)(puVar26 + 1) = *(int *)(puVar26 + 1) + 1;
      UNLOCK();
      local_f8[0] = (undefined1 *)CONCAT71(local_f8[0]._1_7_,1);
      FUN_1447439e4(puVar26);
      LOCK();
      piVar1 = (int *)(puVar26 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      uVar23 = _DAT_14cc28720;
      uVar21 = _DAT_14cc28728;
      fVar3 = _DAT_14cc28730;
      fVar4 = _DAT_14cc28734;
      fVar5 = _DAT_14cc28738;
      fVar6 = _DAT_14cc2873c;
      fVar7 = _DAT_14cc28740;
      fVar8 = _DAT_14cc28744;
      fVar9 = _DAT_14cc28748;
      if (*piVar1 == 0) {
        (**(code **)*puVar26)(puVar26,1);
        uVar23 = _DAT_14cc28720;
        uVar21 = _DAT_14cc28728;
        fVar3 = _DAT_14cc28730;
        fVar4 = _DAT_14cc28734;
        fVar5 = _DAT_14cc28738;
        fVar6 = _DAT_14cc2873c;
        fVar7 = _DAT_14cc28740;
        fVar8 = _DAT_14cc28744;
        fVar9 = _DAT_14cc28748;
      }
    }
  }
  else {
    local_f8[0] = (undefined1 *)0x0;
    local_e8 = (longlong *)FUN_14001cc68(0x38,8);
    *local_e8 = (longlong)&PTR_LAB_14be8f5d0;
    local_e8[1] = uVar23;
    local_e8[2] = uVar21;
    *(float *)(local_e8 + 3) = unaff_XMM8_Da;
    *(float *)((longlong)local_e8 + 0x1c) = unaff_XMM7_Da;
    *(float *)(local_e8 + 4) = unaff_XMM6_Da;
    *(float *)((longlong)local_e8 + 0x24) = unaff_XMM12_Da;
    *(float *)(local_e8 + 5) = unaff_XMM11_Da;
    *(float *)((longlong)local_e8 + 0x2c) = unaff_XMM9_Da;
    *(float *)(local_e8 + 6) = unaff_XMM10_Da;
    if ((ulonglong *)(local_e8 + 1) != (ulonglong *)0x0) {
      local_f8[0] = &LAB_144645712;
    }
    local_108 = local_f8;
    FUN_14005a792(&DAT_14ca9a440,L"UpdateSingleOcclusionResourceCommand",&DAT_14cc28760);
    uVar23 = _DAT_14cc28720;
    uVar21 = _DAT_14cc28728;
    fVar3 = _DAT_14cc28730;
    fVar4 = _DAT_14cc28734;
    fVar5 = _DAT_14cc28738;
    fVar6 = _DAT_14cc2873c;
    fVar7 = _DAT_14cc28740;
    fVar8 = _DAT_14cc28744;
    fVar9 = _DAT_14cc28748;
    if (local_f8[0] != (undefined1 *)0x0) {
      plVar24 = local_e8;
      if (local_e8 == (longlong *)0x0) {
        plVar24 = local_d8;
      }
      (**(code **)(*plVar24 + 0x10))();
      uVar23 = _DAT_14cc28720;
      uVar21 = _DAT_14cc28728;
      fVar3 = _DAT_14cc28730;
      fVar4 = _DAT_14cc28734;
      fVar5 = _DAT_14cc28738;
      fVar6 = _DAT_14cc2873c;
      fVar7 = _DAT_14cc28740;
      fVar8 = _DAT_14cc28744;
      fVar9 = _DAT_14cc28748;
    }
  }
LAB_14158bf08:
  _DAT_14cc28748 = fVar9;
  _DAT_14cc28744 = fVar8;
  _DAT_14cc28740 = fVar7;
  _DAT_14cc2873c = fVar6;
  _DAT_14cc28738 = fVar5;
  _DAT_14cc28734 = fVar4;
  _DAT_14cc28730 = fVar3;
  _DAT_14cc28728 = uVar21;
  _DAT_14cc28720 = uVar23;
  if (*param_1 != 0) {
    FUN_1400020a8();
  }
  if ((local_b0 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14158c39a FUN_14158c39a body=1769 status=ok
// SIG undefined FUN_14158c39a(void)

/* WARNING: Removing unreachable block (ram,0x00014158c816) */

void FUN_14158c39a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  void *pvVar4;
  ulonglong uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  char cVar9;
  uint uVar10;
  int iVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  undefined4 *puVar14;
  int iVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  bool bVar19;
  undefined1 auStack_e8 [40];
  longlong local_c0;
  longlong local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 *local_88;
  undefined8 uStack_80;
  longlong local_70;
  longlong *local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if ((*(longlong *)(param_1 + 0x80) != 0) || (cVar9 = FUN_14158b73c(), cVar9 != '\0'))
  goto LAB_14158c409;
  plVar12 = (longlong *)FUN_1415d76b6();
  lVar18 = plVar12[0x22];
  if (lVar18 == 0) {
    (**(code **)(*plVar12 + 1000))(plVar12);
    lVar18 = plVar12[0x22];
    if (lVar18 == 0) goto LAB_14158c409;
  }
  local_88 = (undefined4 *)0x0;
  uStack_80 = 1;
  FUN_1406f071e(&local_88,0);
  uVar6 = *(undefined4 *)(lVar18 + 0x4c);
  uVar7 = *(undefined4 *)(lVar18 + 0x50);
  uVar8 = *(undefined4 *)(lVar18 + 0x54);
  *local_88 = *(undefined4 *)(lVar18 + 0x48);
  local_88[1] = uVar6;
  local_88[2] = uVar7;
  local_88[3] = uVar8;
  *(undefined8 *)(local_88 + 4) = 0;
  iVar15 = *(int *)(lVar18 + 0x60);
  pvVar4 = *(void **)(lVar18 + 0x58);
  local_88[6] = iVar15;
  if ((longlong)iVar15 == 0) {
    local_88[7] = 0;
  }
  else {
    puVar13 = (undefined8 *)(local_88 + 4);
    FUN_1446dd670(puVar13,iVar15,0);
    memcpy((void *)*puVar13,pvVar4,(longlong)iVar15 * 2);
  }
  plVar12 = (longlong *)FUN_1415d76b6();
  lVar16 = plVar12[0x22];
  if (lVar16 == 0) {
    (**(code **)(*plVar12 + 1000))(plVar12);
    lVar16 = plVar12[0x22];
    if (lVar16 != 0) goto LAB_14158c4d9;
  }
  else {
LAB_14158c4d9:
    uVar5 = uStack_80;
    if (*(char *)(lVar16 + 0x38) == '\x01') {
      lVar16 = (longlong)(int)uStack_80;
      uVar10 = (int)uStack_80 + 1;
      uStack_80 = CONCAT44(uStack_80._4_4_,uVar10);
      if (uStack_80._4_4_ < uVar10) {
        FUN_1406f071e(&local_88,uVar5 & 0xffffffff);
      }
      uVar6 = *(undefined4 *)(lVar18 + 0x74);
      uVar7 = *(undefined4 *)(lVar18 + 0x78);
      uVar8 = *(undefined4 *)(lVar18 + 0x7c);
      puVar14 = local_88 + lVar16 * 8;
      *puVar14 = *(undefined4 *)(lVar18 + 0x70);
      puVar14[1] = uVar6;
      puVar14[2] = uVar7;
      puVar14[3] = uVar8;
      *(undefined8 *)(local_88 + lVar16 * 8 + 4) = 0;
      iVar15 = *(int *)(lVar18 + 0x88);
      pvVar4 = *(void **)(lVar18 + 0x80);
      local_88[lVar16 * 8 + 6] = iVar15;
      if ((longlong)iVar15 == 0) {
        local_88[lVar16 * 8 + 7] = 0;
      }
      else {
        puVar13 = (undefined8 *)(local_88 + lVar16 * 8 + 4);
        FUN_1446dd670(puVar13,iVar15,0);
        memcpy((void *)*puVar13,pvVar4,(longlong)iVar15 * 2);
      }
      uVar5 = uStack_80;
      puVar14 = (undefined4 *)(lVar18 + 0x98);
      if (*(char *)(lVar18 + 0x39) != '\0') {
        puVar14 = (undefined4 *)(lVar18 + 0xc0);
      }
      lVar16 = (longlong)(int)uStack_80;
      uVar10 = (int)uStack_80 + 1;
      uStack_80 = CONCAT44(uStack_80._4_4_,uVar10);
      if (uStack_80._4_4_ < uVar10) {
        FUN_1406f071e(&local_88,uVar5 & 0xffffffff);
      }
      uVar6 = puVar14[1];
      uVar7 = puVar14[2];
      uVar8 = puVar14[3];
      puVar3 = local_88 + lVar16 * 8;
      *puVar3 = *puVar14;
      puVar3[1] = uVar6;
      puVar3[2] = uVar7;
      puVar3[3] = uVar8;
      *(undefined8 *)(local_88 + lVar16 * 8 + 4) = 0;
      iVar15 = puVar14[6];
      pvVar4 = *(void **)(puVar14 + 4);
      local_88[lVar16 * 8 + 6] = iVar15;
      if ((longlong)iVar15 == 0) {
        local_88[lVar16 * 8 + 7] = 0;
      }
      else {
        puVar13 = (undefined8 *)(local_88 + lVar16 * 8 + 4);
        FUN_1446dd670(puVar13,iVar15,0);
        memcpy((void *)*puVar13,pvVar4,(longlong)iVar15 * 2);
      }
    }
  }
  plVar12 = (longlong *)FUN_1415d76b6();
  lVar16 = plVar12[0x22];
  if (lVar16 == 0) {
    (**(code **)(*plVar12 + 1000))(plVar12);
    lVar16 = plVar12[0x22];
    if (lVar16 != 0) goto LAB_14158c626;
  }
  else {
LAB_14158c626:
    uVar5 = uStack_80;
    if (*(char *)(lVar16 + 0xe0) == '\x01') {
      lVar16 = (longlong)(int)uStack_80;
      uVar10 = (int)uStack_80 + 1;
      uStack_80 = CONCAT44(uStack_80._4_4_,uVar10);
      if (uStack_80._4_4_ < uVar10) {
        FUN_1406f071e(&local_88,uVar5 & 0xffffffff);
      }
      uVar6 = *(undefined4 *)(lVar18 + 0xf4);
      uVar7 = *(undefined4 *)(lVar18 + 0xf8);
      uVar8 = *(undefined4 *)(lVar18 + 0xfc);
      puVar14 = local_88 + lVar16 * 8;
      *puVar14 = *(undefined4 *)(lVar18 + 0xf0);
      puVar14[1] = uVar6;
      puVar14[2] = uVar7;
      puVar14[3] = uVar8;
      *(undefined8 *)(local_88 + lVar16 * 8 + 4) = 0;
      iVar15 = *(int *)(lVar18 + 0x108);
      pvVar4 = *(void **)(lVar18 + 0x100);
      local_88[lVar16 * 8 + 6] = iVar15;
      if ((longlong)iVar15 == 0) {
        local_88[lVar16 * 8 + 7] = 0;
      }
      else {
        puVar13 = (undefined8 *)(local_88 + lVar16 * 8 + 4);
        FUN_1446dd670(puVar13,iVar15,0);
        memcpy((void *)*puVar13,pvVar4,(longlong)iVar15 * 2);
      }
    }
  }
  iVar15 = *(int *)(param_1 + 0x58);
  local_c0 = param_1;
  if ((longlong)iVar15 != 0) {
    lVar18 = *(longlong *)(param_1 + 0x50);
    lVar16 = 0;
    do {
      uVar5 = *(ulonglong *)(lVar18 + lVar16);
      if (((((uVar5 >> 0x20 != 0) && (uVar10 = (uint)uVar5, -1 < (int)uVar10)) &&
           ((int)uVar10 < DAT_14c9647dc)) &&
          ((plVar12 = (longlong *)
                      ((ulonglong)((uVar10 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0xd & 0x3fff8))),
           plVar12 != (longlong *)0x0 && ((int)plVar12[2] == (int)(uVar5 >> 0x20))))) &&
         (((*(uint *)(plVar12 + 1) & 0x10200000) == 0 &&
          ((*plVar12 != 0 && (lVar17 = *(longlong *)(*plVar12 + 0x398), lVar17 != 0)))))) {
        local_b8 = 0;
        uStack_b0 = 0;
        FUN_1401031ac(lVar17,0,&local_b8);
        local_a8 = (undefined8 *)0x0;
        uStack_a0 = 0;
        local_98 = 0;
        uStack_90 = 0;
        local_70 = local_b8;
        iVar11 = (int)uStack_b0 + -1;
        if ((int)uStack_b0 == 0) {
          iVar11 = 0;
        }
        local_68 = (longlong *)CONCAT44(local_68._4_4_,iVar11);
        FUN_14475bf92(&local_a8,&local_70);
        uVar5 = uStack_80;
        lVar17 = (longlong)(int)uStack_80;
        uVar10 = (int)uStack_80 + 1;
        uStack_80 = CONCAT44(uStack_80._4_4_,uVar10);
        if (uStack_80._4_4_ < uVar10) {
          FUN_1406f071e(&local_88,uVar5 & 0xffffffff);
        }
        puVar14 = local_88 + lVar17 * 8;
        *puVar14 = (undefined4)local_a8;
        puVar14[1] = local_a8._4_4_;
        puVar14[2] = (int)uStack_a0;
        puVar14[3] = uStack_a0._4_4_;
        *(undefined8 *)(local_88 + lVar17 * 8 + 4) = 0;
        *(undefined8 *)(local_88 + lVar17 * 8 + 4) = local_98;
        local_88[lVar17 * 8 + 6] = (undefined4)uStack_90;
        local_88[lVar17 * 8 + 7] = uStack_90._4_4_;
        uStack_90 = 0;
        local_98 = 0;
        if (local_b8 != 0) {
          FUN_1400020a8();
        }
      }
      lVar16 = lVar16 + 8;
    } while ((longlong)iVar15 * 8 != lVar16);
  }
  local_a8 = (undefined8 *)0x0;
  uStack_a0 = uStack_a0 & 0xffffffff00000000;
  FUN_1446efa72(&local_a8,0,3,0x10);
  puVar13 = local_a8;
  lVar18 = local_c0;
  uStack_a0 = CONCAT44(uStack_a0._4_4_,3);
  *local_a8 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar17 = DAT_14c758608 + 1;
  lVar16 = DAT_14c758608 + 1;
  if (lVar17 == 0) {
    LOCK();
    UNLOCK();
    lVar17 = DAT_14c758608 + 2;
    lVar16 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar16;
  plVar12 = (longlong *)(local_c0 + 0x80);
  local_a8[2] = lVar17;
  *local_a8 = &PTR_FUN_14be8f8b0;
  local_a8[3] = 0;
  iVar15 = 0;
  if (local_c0 != 0) {
    uVar10 = *(uint *)(local_c0 + 0xc);
    *(uint *)(local_a8 + 3) = uVar10;
    if ((int)uVar10 < DAT_14c9647dc) {
      lVar16 = (ulonglong)((uVar10 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar10 >> 0x10) * 8);
    }
    else {
      lVar16 = 0;
    }
    iVar15 = *(int *)(lVar16 + 0x10);
    if (*(int *)(lVar16 + 0x10) == 0) {
      LOCK();
      iVar15 = DAT_14c964868 + 1;
      UNLOCK();
      iVar11 = DAT_14c964868 + 1;
      bVar19 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar15;
      if (bVar19) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar11);
      }
      LOCK();
      iVar15 = *(int *)(lVar16 + 0x10);
      bVar19 = iVar15 == 0;
      if (bVar19) {
        *(int *)(lVar16 + 0x10) = iVar11;
        iVar15 = 0;
      }
      UNLOCK();
      if (bVar19) {
        iVar15 = iVar11;
      }
    }
  }
  *(int *)((longlong)puVar13 + 0x1c) = iVar15;
  puVar13[4] = FUN_14167915c;
  lVar16 = FUN_14050fd64();
  FUN_14676027e(lVar16 + 0x1e8,&local_70,&local_88,&local_a8);
  plVar1 = local_68;
  if (plVar12 != &local_70) {
    *(longlong *)(lVar18 + 0x80) = local_70;
    local_70 = 0;
    plVar12 = *(longlong **)(lVar18 + 0x88);
    if (local_68 != plVar12) {
      local_68 = (longlong *)0x0;
      *(longlong **)(lVar18 + 0x88) = plVar1;
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
  }
  plVar12 = local_68;
  if (local_68 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_68 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_68)(local_68);
      LOCK();
      piVar2 = (int *)((longlong)plVar12 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar12 + 0x10))(plVar12);
      }
    }
  }
  if ((int)uStack_a0 == 0) {
LAB_14158c9eb:
    if (local_a8 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_a8 != (undefined8 *)0x0) {
    (**(code **)*local_a8)(local_a8,0);
    FUN_1446efa72(&local_a8,0,0,0x10);
    uStack_a0 = uStack_a0 & 0xffffffff00000000;
    goto LAB_14158c9eb;
  }
  FUN_140861e20(local_88,uStack_80 & 0xffffffff);
  if (local_88 != (undefined4 *)0x0) {
    FUN_1400020a8();
  }
LAB_14158c409:
  if ((local_60 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14158ca84 FUN_14158ca84 body=335 status=ok
// SIG undefined FUN_14158ca84(void)

void FUN_14158ca84(longlong param_1,undefined4 param_2,undefined8 param_3,longlong *param_4)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined1 auStack_e8 [40];
  undefined1 local_c0 [16];
  longlong local_b0;
  int local_a8;
  longlong local_a0;
  longlong local_98;
  longlong local_90;
  undefined4 local_88;
  undefined1 *local_50;
  undefined1 *local_48;
  undefined1 *local_40;
  code *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (*(longlong *)(param_1 + 0x2b8) == 0) {
    if ((int)param_4[1] != 0) {
      plVar1 = (longlong *)*param_4;
      if (plVar1 == (longlong *)0x0) goto LAB_14158cb86;
      (**(code **)(*plVar1 + 0x60))(plVar1,param_2,3);
    }
  }
  else {
    local_90 = *param_4;
    *param_4 = 0;
    local_88 = (undefined4)param_4[1];
    *(undefined4 *)(param_4 + 1) = 0;
    local_50 = &LAB_143efcc94;
    local_48 = &LAB_143efccb6;
    local_40 = &LAB_143efccca;
    local_38 = FUN_143efccf4;
    FUN_1401e7e86(local_c0,param_3);
    FUN_14482e566(local_c0);
    local_98 = local_a8 + local_b0;
    local_a0 = local_b0;
    bifrost::messaging::setRoomSubject(*(undefined8 *)(param_1 + 0x2b8),param_2,&local_a0,&local_90)
    ;
    FUN_1401e7e48(local_c0);
  }
  puVar2 = (undefined8 *)*param_4;
  if ((int)param_4[1] != 0) {
    if (puVar2 == (undefined8 *)0x0) goto LAB_14158cb86;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(param_4,0,0,0x10);
    *(undefined4 *)(param_4 + 1) = 0;
    puVar2 = (undefined8 *)*param_4;
  }
  if (puVar2 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_14158cb86:
  if ((local_30 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14158cbd4 FUN_14158cbd4 body=815 status=ok
// SIG undefined FUN_14158cbd4(void)

void FUN_14158cbd4(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  undefined8 uVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  bool bVar12;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  int local_50;
  undefined8 local_48;
  undefined8 *local_40;
  longlong *local_38;
  longlong *plStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  cVar6 = FUN_146076bce((uint *)(param_1 + 0x30),0);
  if (cVar6 != '\0') goto LAB_14158cead;
  FUN_1446f470e(&local_40,L"SHIFT",1);
  FUN_143f3e584(param_1);
  local_58 = local_40;
  plVar8 = (longlong *)FUN_1401e3228();
  if (plVar8 == (longlong *)0x0) {
    local_38 = (longlong *)0x0;
    plStack_30 = (longlong *)0x0;
  }
  else {
    (**(code **)(*plVar8 + 0x80))(plVar8,&local_38);
    plVar8 = local_38;
    if (local_38 != (longlong *)0x0) {
      if (*(int *)(param_1 + 0x34) == 0) {
LAB_14158cece:
        lVar9 = 0;
      }
      else {
        uVar3 = *(uint *)(param_1 + 0x30);
        lVar9 = 0;
        if ((-1 < (int)uVar3) && ((int)uVar3 < DAT_14c9647dc)) {
          plVar10 = (longlong *)
                    ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
          if ((plVar10 == (longlong *)0x0) ||
             (((int)plVar10[2] != *(int *)(param_1 + 0x34) ||
              ((*(uint *)(plVar10 + 1) & 0x10200000) != 0)))) goto LAB_14158cece;
          lVar9 = *plVar10;
        }
      }
      *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(lVar9 + 0x38);
      local_58 = (undefined8 *)0x0;
      local_50 = 0;
      FUN_1446efa72(&local_58,0,4,0x10);
      local_50 = 4;
      plVar10 = *(longlong **)(param_1 + 0x10);
      if (plVar10 == (longlong *)0x0) {
LAB_14158cdd4:
        *local_58 = &PTR_LAB_14b4e4d10;
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
        local_58[2] = lVar11;
        *local_58 = &PTR_FUN_14b4f0390;
        local_58[3] = 0;
        local_58[4] = 0;
        local_58[5] = &LAB_143f3e5e6;
        *(undefined4 *)(local_58 + 6) = 0;
      }
      else {
        iVar7 = (int)plVar10[1];
        do {
          if (iVar7 == 0) goto LAB_14158cdd4;
          LOCK();
          iVar5 = (int)plVar10[1];
          bVar12 = iVar7 == iVar5;
          if (bVar12) {
            *(int *)(plVar10 + 1) = iVar7 + 1;
            iVar5 = iVar7;
          }
          iVar7 = iVar5;
          UNLOCK();
        } while (!bVar12);
        uVar4 = *(undefined8 *)(param_1 + 8);
        LOCK();
        *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
        UNLOCK();
        *local_58 = &PTR_LAB_14b4e4d10;
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
        local_58[2] = lVar11;
        *local_58 = &PTR_FUN_14b4f0390;
        local_58[3] = uVar4;
        local_58[4] = plVar10;
        LOCK();
        *(int *)((longlong)plVar10 + 0xc) = *(int *)((longlong)plVar10 + 0xc) + 1;
        UNLOCK();
        local_58[5] = &LAB_143f3e5e6;
        *(undefined4 *)(local_58 + 6) = 0;
        LOCK();
        plVar1 = plVar10 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar10)(plVar10);
          LOCK();
          piVar2 = (int *)((longlong)plVar10 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
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
          piVar2 = (int *)((longlong)plVar10 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
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
          piVar2 = (int *)((longlong)plVar10 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar10 + 0x10))(plVar10);
          }
        }
      }
      (**(code **)(*plVar8 + 0x28))(plVar8,&local_48,*(undefined4 *)(param_1 + 0x38),&local_58);
      *(undefined8 *)(param_1 + 0x40) = local_48;
      if (local_50 != 0) {
        if (local_58 == (undefined8 *)0x0) goto LAB_14158ce86;
        (**(code **)*local_58)(local_58,0);
        FUN_1446efa72(&local_58,0,0,0x10);
        local_50 = 0;
      }
      if (local_58 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
  }
LAB_14158ce86:
  plVar8 = plStack_30;
  if (plStack_30 != (longlong *)0x0) {
    LOCK();
    plVar10 = plStack_30 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
      (**(code **)*plStack_30)(plStack_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar8 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
  }
LAB_14158cead:
  if ((local_28 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14158cf04 FUN_14158cf04 body=408 status=ok
// SIG undefined FUN_14158cf04(void)

void FUN_14158cf04(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar3 = (ulonglong)*(uint *)(param_1 + 0x110);
  if (uVar3 < 0x20) {
    plVar1 = (longlong *)(param_1 + 0x108);
    if (uVar3 != 0) {
      plVar5 = (longlong *)*plVar1;
      lVar4 = uVar3 << 3;
      do {
        if ((int)param_2 == *(int *)(*plVar5 + 0x18)) {
          if (plVar5 != (longlong *)0x0) goto LAB_14158cf5c;
          break;
        }
        plVar5 = plVar5 + 1;
        lVar4 = lVar4 + -8;
      } while (lVar4 != 0);
    }
    plVar5 = (longlong *)FUN_145a51278();
    lVar4 = plVar5[0x22];
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 1000))(plVar5);
      lVar4 = plVar5[0x22];
    }
    if ((longlong)*(int *)(lVar4 + 0x30) != 0) {
      plVar5 = *(longlong **)(lVar4 + 0x28);
      lVar4 = (longlong)*(int *)(lVar4 + 0x30) << 5;
      do {
        if (*plVar5 == param_2) {
          if ((plVar5 != (longlong *)0x0) && (plVar5[2] != 0)) {
            local_48 = 0;
            FUN_140af9fb2(&local_38,0,plVar5[2],param_2);
            lVar4 = FUN_14628d35a(DAT_14c951640,plVar5[2],local_38);
            if ((lVar4 != 0) && (DAT_14c950c29 != '\0')) {
              FUN_1456cec3c(lVar4);
            }
            iVar2 = *(int *)(param_1 + 0x110);
            *(uint *)(param_1 + 0x110) = iVar2 + 1U;
            if (*(uint *)(param_1 + 0x114) < iVar2 + 1U) {
              FUN_14628dbcc(plVar1,iVar2);
            }
            *(longlong *)(*plVar1 + (longlong)iVar2 * 8) = lVar4;
            if ((lVar4 != 0) && (DAT_14c950c29 != '\0')) {
              FUN_1456cec3c(lVar4);
            }
            iVar2 = *(int *)(param_1 + 0x120);
            *(uint *)(param_1 + 0x120) = iVar2 + 1U;
            if (*(uint *)(param_1 + 0x124) < iVar2 + 1U) {
              FUN_14628dc50((longlong *)(param_1 + 0x118),iVar2);
            }
            *(char *)(*(longlong *)(param_1 + 0x118) + (longlong)iVar2) = (char)plVar5[3];
          }
          break;
        }
        plVar5 = plVar5 + 4;
        lVar4 = lVar4 + -0x20;
      } while (lVar4 != 0);
    }
  }
LAB_14158cf5c:
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14158d09e FUN_14158d09e body=240 status=ok
// SIG undefined FUN_14158d09e(void)

void FUN_14158d09e(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined2 *puVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined8 local_50;
  undefined2 *local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(char *)(param_1 + 0x38) == '\0') {
    if ((longlong)*(int *)(param_1 + 0x30) != 0) {
      lVar5 = (longlong)*(int *)(param_1 + 0x30) << 5;
      lVar3 = *(longlong *)(param_1 + 0x28) + 8;
      do {
        FUN_1400021e4(lVar3,&local_48);
        puVar4 = &DAT_149dfb77a;
        if (local_40 != 0) {
          puVar4 = local_48;
        }
        uVar1 = FUN_145985a6e();
        local_50 = 0;
        local_58 = 0x2000;
        lVar2 = FUN_141433b6f(uVar1,0,puVar4,0);
        if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
          FUN_1456cec3c(lVar2);
        }
        *(longlong *)(lVar3 + 8) = lVar2;
        if (local_48 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        lVar3 = lVar3 + 0x20;
        lVar5 = lVar5 + -0x20;
      } while (lVar5 != 0);
    }
    *(undefined1 *)(param_1 + 0x38) = 1;
  }
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14158d190 FUN_14158d190 body=390 status=ok
// SIG undefined FUN_14158d190(void)

void FUN_14158d190(longlong param_1)

{
  void **ppvVar1;
  int iVar2;
  void *_Src;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  int iVar6;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined4 local_40;
  void *local_38;
  ulonglong uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_145ef5c56(param_1 + 0x128,*(undefined4 *)(param_1 + 0x158));
  local_48 = 0;
  local_40 = 0;
  local_38 = (void *)0x0;
  uStack_30 = 0;
  if (*(int *)(param_1 + 0x158) != 0) {
    FUN_145ef5d5e(&local_48);
  }
  _Src = local_38;
  *(undefined4 *)(param_1 + 0x140) = local_40;
  *(undefined8 *)(param_1 + 0x138) = local_48;
  ppvVar1 = (void **)(param_1 + 0x148);
  if (ppvVar1 != &local_38) {
    iVar2 = (int)uStack_30;
    lVar5 = (longlong)(int)uStack_30;
    *(int *)(param_1 + 0x150) = (int)uStack_30;
    if ((int)uStack_30 == 0 && *(int *)(param_1 + 0x154) == 0) {
      *(undefined4 *)(param_1 + 0x154) = 0;
    }
    else {
      FUN_145ef5bf4(ppvVar1,uStack_30 & 0xffffffff);
      if (iVar2 != 0) {
        memcpy(*ppvVar1,_Src,lVar5 << 3);
      }
    }
  }
  local_48 = CONCAT44((undefined4)local_48,(undefined4)local_48);
  uStack_30 = uStack_30 & 0xffffffff00000000;
  if (local_38 != (void *)0x0) {
    FUN_1400020a8();
  }
  iVar2 = *(int *)(param_1 + 0x158);
  if (iVar2 != 0) {
    iVar6 = 0;
    do {
      uVar3 = *(uint *)(param_1 + 0x138);
      uVar4 = (ulonglong)(uVar3 - *(int *)(param_1 + 0x13c));
      if ((ulonglong)(longlong)*(int *)(param_1 + 0x150) <= uVar4) {
        FUN_145ef5d5e((uint *)(param_1 + 0x138),uVar4 + 1);
        uVar3 = *(uint *)(param_1 + 0x138);
      }
      *(uint *)(param_1 + 0x138) = uVar3 + 1;
      *(longlong *)
       (*(longlong *)(param_1 + 0x148) + (ulonglong)(uVar3 & *(uint *)(param_1 + 0x140)) * 8) =
           (longlong)iVar6 * 0x58 + *(longlong *)(param_1 + 0x128);
      iVar6 = iVar6 + 1;
    } while (iVar2 != iVar6);
  }
  *(undefined8 *)(param_1 + 0x138) = 0;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14158d317 FUN_14158d317 body=39 status=ok
// SIG undefined FUN_14158d317(void)

void FUN_14158d317(longlong param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 0x4c;
    do {
      *(undefined8 *)(param_1 + -0xc) = 0;
      *(undefined8 *)(param_1 + -4) = 0x800000000;
      param_1 = param_1 + 0x58;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14158d33e FUN_14158d33e body=920 status=ok
// SIG undefined FUN_14158d33e(void)

undefined4 FUN_14158d33e(longlong *param_1,longlong *param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  undefined1 *puVar7;
  longlong *plVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  longlong lVar14;
  int iVar15;
  longlong lVar16;
  undefined1 auStack_e8 [32];
  longlong *local_c8;
  uint local_bc;
  ulonglong local_b8;
  longlong *local_b0;
  undefined8 local_a8;
  int local_a0;
  longlong local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  int local_64;
  undefined1 local_60 [8];
  undefined1 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  *(undefined4 *)(param_2 + 1) = 0;
  local_c8 = param_2;
  if (*(int *)((longlong)param_2 + 0xc) < 0) {
    FUN_1402191ca(param_2,0);
  }
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = (undefined1 *)0x0;
  local_50 = 0;
  uVar9 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar9 != 0) {
    if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar9);
    }
    FUN_144732142(&local_98,uVar9);
    if (uVar9 < 4) {
      iVar5 = 1;
    }
    else {
      uVar9 = (uVar9 | 1) + 0xe;
      iVar5 = 0x1f;
      if (uVar9 != 0) {
        for (; uVar9 >> iVar5 == 0; iVar5 = iVar5 + -1) {
        }
      }
      iVar5 = 1 << ((byte)iVar5 & 0x1f);
    }
    if ((local_50 == 0) || (local_50 < iVar5)) {
      local_50 = iVar5;
      FUN_144869b4a();
    }
  }
  iVar5 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar5 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar5);
  }
  if (*(int *)((longlong)local_c8 + 0xc) < iVar5) {
    FUN_1402191ca();
  }
  local_b0 = param_1 + 2;
  local_b8 = 0x100000000;
  local_a8 = 0xffffffff;
  local_a0 = 0;
  if ((int)param_1[5] == 0) {
    uVar11 = 1;
    uVar13 = 0xffffffff;
    local_a8._4_4_ = 0;
    local_b8._0_4_ = 0;
  }
  else {
    FUN_1449c0562(&local_b8);
    uVar11 = local_b8 >> 0x20;
    uVar13 = local_a8 & 0xffffffff;
  }
  plVar4 = local_b0;
  iVar5 = (int)local_b0[3];
  iVar10 = (int)local_b8;
  iVar6 = local_a8._4_4_;
  iVar15 = local_a0;
  if (local_a8._4_4_ < iVar5) {
    do {
      local_bc = (uint)uVar13;
      lVar14 = *param_1;
      lVar16 = (longlong)iVar6 * 0x20;
      if ((int)uStack_90 != local_64) {
        lVar2 = *(longlong *)(lVar14 + lVar16);
        uVar9 = (uint)((ulonglong)lVar2 >> 0x10);
        uVar12 = (uint)lVar2 & 0xffff;
        puVar7 = local_58;
        if (local_58 == (undefined1 *)0x0) {
          puVar7 = local_60;
        }
        for (iVar6 = *(int *)(puVar7 + (ulonglong)
                                       (local_50 - 1U &
                                       (int)((ulonglong)lVar2 >> 0x20) +
                                       ((uint)lVar2 << 0x10 | uVar12) +
                                       (uVar9 << 0x13 | uVar9 & 0xffff) + (uVar12 >> 4)) * 4);
            iVar6 != -1; iVar6 = *(int *)((longlong)iVar6 * 0x10 + local_98 + 8)) {
          if (*(longlong *)(local_98 + (longlong)iVar6 * 0x10) == lVar2) goto LAB_14158d561;
        }
      }
      iVar5 = (int)local_c8[1];
      *(uint *)(local_c8 + 1) = iVar5 + 1U;
      if (*(uint *)((longlong)local_c8 + 0xc) < iVar5 + 1U) {
        FUN_1446f84a2(local_c8,iVar5);
      }
      *(undefined8 *)(*local_c8 + (longlong)iVar5 * 8) = *(undefined8 *)(lVar14 + lVar16);
      FUN_144a13f80(&local_98,&local_b8,lVar16 + *param_1,0);
      iVar5 = (int)plVar4[3];
LAB_14158d561:
      uVar9 = local_bc & ~(uint)uVar11;
      uVar13 = (ulonglong)uVar9;
      plVar8 = (longlong *)plVar4[2];
      if ((longlong *)plVar4[2] == (longlong *)0x0) {
        plVar8 = plVar4;
      }
      lVar14 = (longlong)iVar10;
      uVar9 = *(uint *)((longlong)plVar8 + lVar14 * 4) & uVar9;
      if (uVar9 == 0) {
        iVar6 = iVar5 + 0x1e;
        if (-1 < iVar5 + -1) {
          iVar6 = iVar5 + -1;
        }
        iVar6 = iVar6 >> 5;
        iVar3 = iVar6;
        if (iVar6 < iVar10) {
          iVar3 = iVar10;
        }
        if (iVar6 <= iVar10) break;
        lVar16 = 0;
        while( true ) {
          iVar15 = iVar15 + 0x20;
          uVar9 = *(uint *)((longlong)plVar8 + lVar16 * 4 + lVar14 * 4 + 4);
          if (uVar9 != 0) break;
          lVar16 = lVar16 + 1;
          if (iVar3 - lVar14 == lVar16) goto LAB_14158d639;
        }
        iVar10 = iVar10 + (int)lVar16 + 1;
        uVar13 = 0xffffffff;
      }
      uVar11 = (ulonglong)(-uVar9 & uVar9);
      uVar1 = uVar11 * 2 + 1;
      lVar14 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      iVar6 = (iVar15 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
    } while (iVar6 < iVar5);
  }
LAB_14158d639:
  lVar14 = local_c8[1];
  local_50 = 0;
  if (local_58 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  FUN_14472eaf0(&local_98);
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return (int)lVar14;
}



// FUNCTION 14158d6d8 FUN_14158d6d8 body=802 status=ok
// SIG undefined FUN_14158d6d8(void)

int * FUN_14158d6d8(longlong *param_1,int *param_2,undefined8 *param_3)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  longlong *plVar10;
  byte bVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  ulonglong uVar15;
  uint uVar16;
  longlong *plVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  longlong lVar21;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar20 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar20 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar20) {
      FUN_1447711aa(param_1,iVar20);
    }
    iVar18 = (int)param_1[5];
    if (iVar18 == 0) {
      iVar12 = -1;
    }
    else {
      iVar12 = iVar18 + 0x1e;
      if (-1 < iVar18 + -1) {
        iVar12 = iVar18 + -1;
      }
      iVar12 = iVar12 >> 5;
    }
    plVar10 = param_1 + 2;
    iVar14 = iVar18 + 1;
    iVar19 = iVar18 + 0x1f;
    if (-1 < iVar18) {
      iVar19 = iVar18;
    }
    if (iVar19 >> 5 == iVar12) {
      *(int *)(param_1 + 5) = iVar14;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar18) {
        if (iVar18 + 0x20U < 0xa0) {
          iVar14 = 0x80;
          iVar12 = iVar18;
        }
        else {
          uVar13 = iVar18 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar16 = 4;
            if (4 < uVar13) {
              uVar16 = uVar13;
            }
          }
          else {
            uVar16 = (uVar13 * 3 >> 3) + uVar13 + 0x10;
          }
          uVar15 = FUN_144a3809e(uVar16 << 2,0);
          iVar12 = (int)(uVar15 >> 2);
          iVar14 = -0x20;
          if ((int)uVar13 <= iVar12) {
            iVar14 = iVar12 << 5;
          }
          iVar12 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar14;
        FUN_1446efbd8(plVar10,iVar12);
        iVar14 = (int)param_1[5] + 1;
      }
      iVar12 = iVar14 + 0x1f;
      if (-1 < iVar14) {
        iVar12 = iVar14;
      }
      *(int *)(param_1 + 5) = iVar14;
      if (iVar14 % 0x20 != 0) {
        plVar17 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar17 = plVar10;
        }
        bVar11 = -(char)(iVar14 % 0x20);
        *(uint *)((longlong)plVar17 + (longlong)(iVar12 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar17 + (longlong)(iVar12 >> 5) * 4) << (bVar11 & 0x1f)) >>
             (bVar11 & 0x1f);
      }
    }
    lVar21 = (longlong)iVar20;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar10 = (longlong *)param_1[4];
    }
    bVar11 = (byte)iVar18 & 0x1f;
    puVar1 = (uint *)((longlong)plVar10 + (longlong)(iVar19 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar11 | 0xfffffffeU >> 0x20 - bVar11);
  }
  else {
    iVar20 = (int)param_1[6];
    lVar21 = (longlong)iVar20;
    iVar18 = *(int *)(*param_1 + 4 + lVar21 * 0x20);
    *(int *)(param_1 + 6) = iVar18;
    iVar12 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar12;
    if (iVar12 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar18 * 0x20) = 0xffffffff;
    }
  }
  iVar18 = 1;
  plVar10 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar10 = (longlong *)param_1[4];
  }
  iVar12 = iVar20 + 0x1f;
  if (-1 < iVar20) {
    iVar12 = iVar20;
  }
  puVar1 = (uint *)((longlong)plVar10 + (longlong)(iVar12 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar20 & 0x1f);
  lVar5 = *param_1;
  lVar21 = lVar21 * 0x20;
  puVar2 = (undefined4 *)(lVar5 + lVar21);
  *(undefined4 *)(lVar5 + lVar21) = *(undefined4 *)*param_3;
  puVar4 = (undefined8 *)(lVar5 + 8 + lVar21);
  *puVar4 = 0;
  puVar4[1] = 0;
  FUN_1406893db(0,0);
  *(undefined4 *)(lVar5 + 0x18 + lVar21) = 0xffffffff;
  uVar13 = *(uint *)(lVar5 + lVar21);
  uVar16 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if ((uVar16 != 0) && (uVar16 != 1)) {
    plVar10 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar10 = (longlong *)param_1[8];
    }
    iVar12 = *(int *)((longlong)plVar10 + (ulonglong)((int)param_1[9] - 1U & uVar13) * 4);
    if (iVar12 != -1) {
      do {
        puVar3 = (undefined4 *)(*param_1 + (longlong)iVar12 * 0x20);
        if (*(uint *)(*param_1 + (longlong)iVar12 * 0x20) == uVar13) {
          FUN_1406893db(*(undefined8 *)(puVar3 + 2),puVar3[4]);
          if (*(longlong *)(puVar3 + 2) != 0) {
            FUN_1400020a8();
          }
          uVar6 = *puVar2;
          uVar7 = puVar2[1];
          uVar8 = puVar2[2];
          uVar9 = puVar2[3];
          *(undefined8 *)(puVar3 + 4) = *(undefined8 *)(puVar2 + 4);
          *puVar3 = uVar6;
          puVar3[1] = uVar7;
          puVar3[2] = uVar8;
          puVar3[3] = uVar9;
          FUN_140689452(param_1,iVar20,1);
          iVar20 = iVar12;
          goto LAB_14158d849;
        }
        iVar12 = puVar3[6];
      } while (iVar12 != -1);
    }
  }
  if (3 < uVar16) {
    uVar15 = (ulonglong)(uVar16 & 0xfffffffe) + 0xf;
    lVar21 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar21 == 0; lVar21 = lVar21 + -1) {
      }
    }
    iVar18 = 1 << ((byte)lVar21 & 0x1f);
  }
  if (((int)uVar16 < 1) || (iVar18 <= (int)param_1[9])) {
    uVar13 = (int)param_1[9] - 1U & uVar13;
    puVar2[7] = uVar13;
    plVar10 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar10 = param_1 + 7;
    }
    puVar2[6] = *(undefined4 *)
                 ((longlong)plVar10 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar13) * 4);
    plVar10 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar10 = param_1 + 7;
    }
    *(int *)((longlong)plVar10 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar13) * 4) =
         iVar20;
  }
  else {
    *(int *)(param_1 + 9) = iVar18;
    FUN_14158d9fa(param_1);
  }
LAB_14158d849:
  *param_2 = iVar20;
  return param_2;
}



// FUNCTION 14158d9fa FUN_14158d9fa body=539 status=ok
// SIG undefined FUN_14158d9fa(void)

void FUN_14158d9fa(longlong *param_1)

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
        lVar10 = (longlong)iVar6 * 0x20;
        uVar13 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar11 + lVar10);
        iVar12 = (int)uVar13;
        *(int *)(lVar11 + 0x1c + lVar10) = iVar12;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar11 + 0x18 + lVar10) =
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
            if (iVar2 - lVar11 == lVar10) goto LAB_14158dbd0;
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
LAB_14158dbd0:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14158dc16 FUN_14158dc16 body=617 status=ok
// SIG undefined FUN_14158dc16(void)

/* WARNING: Removing unreachable block (ram,0x00014158de76) */

undefined8 * FUN_14158dc16(undefined8 *param_1)

{
  longlong *plVar1;
  int iVar2;
  ulonglong *puVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  PSRWLOCK SRWLock;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  InitializeSRWLock((PSRWLOCK)(param_1 + 0xe));
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  InitializeSRWLock((PSRWLOCK)(param_1 + 0x11));
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined8 *)((longlong)param_1 + 0xbc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xc4) = 0;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  InitializeSRWLock((PSRWLOCK)(param_1 + 0x1c));
  param_1[0x21] = 0;
  *(undefined4 *)(param_1 + 0x22) = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  *(undefined8 *)((longlong)param_1 + 0x114) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x11c) = 0;
  param_1[0x25] = 0;
  *(undefined4 *)(param_1 + 0x26) = 0;
  InitializeSRWLock((PSRWLOCK)(param_1 + 0x27));
  param_1[0x2c] = 0;
  *(undefined4 *)(param_1 + 0x2d) = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  *(undefined8 *)((longlong)param_1 + 0x16c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x174) = 0;
  param_1[0x30] = 0;
  *(undefined4 *)(param_1 + 0x31) = 0;
  InitializeSRWLock((PSRWLOCK)(param_1 + 0x32));
  param_1[0x37] = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1cc) = 0;
  param_1[0x3b] = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  InitializeSRWLock((PSRWLOCK)(param_1 + 0x3d));
  plVar1 = param_1 + 0x3e;
  FUN_145ef6f3e(plVar1);
  param_1[0x40] = 0;
  FUN_140056680(&local_50,&DAT_14bccc94c);
  iVar2 = *(int *)(param_1 + 0x3f);
  *(uint *)(param_1 + 0x3f) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0x1fc) < iVar2 + 1U) {
    FUN_1447a1bd6(plVar1,iVar2);
  }
  lVar4 = *plVar1;
  lVar5 = (longlong)iVar2 * 0x10;
  *(undefined8 *)(lVar4 + lVar5) = 0;
  *(undefined8 *)(lVar4 + lVar5) = local_50;
  *(undefined4 *)(lVar4 + 8 + lVar5) = (undefined4)local_48;
  *(undefined4 *)(lVar4 + 0xc + lVar5) = local_48._4_4_;
  local_48 = 0;
  local_50 = 0;
  FUN_1412d55ee(0);
  uVar7 = (ulonglong)DAT_14c765148;
  uVar6 = uVar7 * 8;
  lVar4 = uVar6 + 8;
  if (0xfffffffffffffff7 < uVar6) {
    lVar4 = -1;
  }
  if ((longlong)uVar7 < 0) {
    lVar4 = -1;
  }
  puVar3 = (ulonglong *)FUN_144a7d36f(lVar4);
  *puVar3 = uVar7;
  SRWLock = (PSRWLOCK)(puVar3 + 1);
  while (uVar7 != 0) {
    InitializeSRWLock(SRWLock);
    SRWLock = SRWLock + 1;
    uVar6 = uVar6 - 8;
    uVar7 = uVar6;
  }
  param_1[0x40] = (PSRWLOCK)(puVar3 + 1);
  FUN_1412d5698(0);
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14158de80 FUN_14158de80 body=220 status=ok
// SIG undefined FUN_14158de80(void)

void FUN_14158de80(void)

{
  char cVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined1 local_14 [4];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
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
  FUN_1446f470e(&local_20,L"UnrealUSDWrapper",1);
  cVar1 = FUN_14011feae(&DAT_14c874628,local_20);
  if (cVar1 == '\0') {
    FUN_1402c9134(&DAT_14c874628,local_20,local_14,0);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14158df5e FUN_14158df5e body=114 status=ok
// SIG undefined FUN_14158df5e(void)

longlong FUN_14158df5e(void)

{
  undefined8 uVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (DAT_14c990b38 == 0) {
    FUN_1446ddc76(&local_18,&DAT_149f27af2,1);
    uVar1 = FUN_144a52528();
    FUN_14493e38c(uVar1,local_18);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return DAT_14c990b38;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14158dfd2 FUN_14158dfd2 body=289 status=ok
// SIG undefined FUN_14158dfd2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14158dfd2(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9c70c8) {
    FUN_144b3d300(&DAT_14c9c70c8);
    if (DAT_14c9c70c8 == -1) {
      FUN_14158e0f4();
      FUN_145ef93f6();
      FUN_140db5666(&DAT_14c9c7020,0,&DAT_14c9c6fb8,L"FDistanceFieldShadowingCS",
                    L"/Engine/Private/DistanceFieldShadowing.usf",L"DistanceFieldShadowingCS",5,
                    0x360,FUN_14714f592,FUN_14714f532,&LAB_142be0116,&LAB_140b39898,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14c9c8b80);
      _DAT_14c9c7020 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142be0167);
      _Init_thread_footer(&DAT_14c9c70c8);
    }
  }
  return &DAT_14c9c7020;
}



// FUNCTION 14158e0f4 FUN_14158e0f4 body=258 status=ok
// SIG undefined FUN_14158e0f4(void)

void FUN_14158e0f4(void)

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
              0x110) < DAT_14c9c8c00) {
    FUN_144b3d300(&DAT_14c9c8c00);
    if (DAT_14c9c8c00 == -1) {
      FUN_14158e1f8(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x2f0;
      local_58 = 0x125;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9c8b80,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142be774e);
      _Init_thread_footer(&DAT_14c9c8c00);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14158e1f8 FUN_14158e1f8 body=226 status=ok
// SIG undefined FUN_14158e1f8(void)

longlong * FUN_14158e1f8(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462c0b2c;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14158e2dc FUN_14158e2dc body=289 status=ok
// SIG undefined FUN_14158e2dc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14158e2dc(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9c7780) {
    FUN_144b3d300(&DAT_14c9c7780);
    if (DAT_14c9c7780 == -1) {
      FUN_14158e3fe();
      FUN_145efa37c();
      FUN_140db5666(&DAT_14c9c76d8,0,&DAT_14c9c7670,L"FScatterUploadDistanceFieldAtlasCS",
                    L"/Engine/Private/DistanceFieldStreaming.usf",
                    L"ScatterUploadDistanceFieldAtlasCS",5,1,FUN_14714f9ca,FUN_14714f96a,
                    &LAB_1462bdcd8,&LAB_14714f966,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14c9c8eb0)
      ;
      _DAT_14c9c76d8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142be438b);
      _Init_thread_footer(&DAT_14c9c7780);
    }
  }
  return &DAT_14c9c76d8;
}



// FUNCTION 14158e3fe FUN_14158e3fe body=258 status=ok
// SIG undefined FUN_14158e3fe(void)

void FUN_14158e3fe(void)

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
              0x110) < DAT_14c9c8f30) {
    FUN_144b3d300(&DAT_14c9c8f30);
    if (DAT_14c9c8f30 == -1) {
      FUN_145efa4c6(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x30;
      local_58 = 0x8d;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9c8eb0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142be7796);
      _Init_thread_footer(&DAT_14c9c8f30);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14158e502 FUN_14158e502 body=289 status=ok
// SIG undefined FUN_14158e502(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14158e502(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9efd38) {
    FUN_144b3d300(&DAT_14c9efd38);
    if (DAT_14c9efd38 == -1) {
      FUN_14158e624();
      FUN_145efa740();
      FUN_140db5666(&DAT_14c9efc90,0,&DAT_14c9efc28,L"FFixupBordersAndGenerateMipsCS",
                    L"/Engine/Private/Lumen/LumenRadianceCache.usf",L"FixupBordersAndGenerateMipsCS"
                    ,5,2,FUN_1471e023e,FUN_1471e01de,&LAB_1462d73b8,&LAB_1471e01da,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14c9f1440);
      _DAT_14c9efc90 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142d26121);
      _Init_thread_footer(&DAT_14c9efd38);
    }
  }
  return &DAT_14c9efc90;
}



// FUNCTION 14158e624 FUN_14158e624 body=258 status=ok
// SIG undefined FUN_14158e624(void)

void FUN_14158e624(void)

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
              0x110) < DAT_14c9f14c0) {
    FUN_144b3d300(&DAT_14c9f14c0);
    if (DAT_14c9f14c0 == -1) {
      FUN_145efa88a(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x1b0;
      local_58 = 0x3fa;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9f1440,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142d26403);
      _Init_thread_footer(&DAT_14c9f14c0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14158e728 FUN_14158e728 body=258 status=ok
// SIG undefined FUN_14158e728(void)

void FUN_14158e728(void)

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
              0x110) < DAT_14ca18098) {
    FUN_144b3d300(&DAT_14ca18098);
    if (DAT_14ca18098 == -1) {
      FUN_145efac4e(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x40;
      local_58 = 0x4a7;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca18018,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142e276c3);
      _Init_thread_footer(&DAT_14ca18098);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14158e82c FUN_14158e82c body=258 status=ok
// SIG undefined FUN_14158e82c(void)

void FUN_14158e82c(void)

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
              0x110) < DAT_14ca18710) {
    FUN_144b3d300(&DAT_14ca18710);
    if (DAT_14ca18710 == -1) {
      FUN_145efb012(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x40;
      local_58 = 0x1999;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca18690,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142e27feb);
      _Init_thread_footer(&DAT_14ca18710);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14158e930 FUN_14158e930 body=289 status=ok
// SIG undefined FUN_14158e930(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14158e930(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca42e18) {
    FUN_144b3d300(&DAT_14ca42e18);
    if (DAT_14ca42e18 == -1) {
      FUN_14158ea52();
      FUN_145efb28c();
      FUN_140db5666(&DAT_14ca42d70,0,&DAT_14ca42d08,L"FComputeSkyEnvMapDiffuseIrradianceCS",
                    L"/Engine/Private/ReflectionEnvironmentShaders.usf",
                    L"ComputeSkyEnvMapDiffuseIrradianceCS",5,1,FUN_1472c738a,FUN_1472c732a,
                    &LAB_1472c7312,&LAB_1472c730e,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14ca44188)
      ;
      _DAT_14ca42d70 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142f8f50d);
      _Init_thread_footer(&DAT_14ca42e18);
    }
  }
  return &DAT_14ca42d70;
}



// FUNCTION 14158ea52 FUN_14158ea52 body=258 status=ok
// SIG undefined FUN_14158ea52(void)

void FUN_14158ea52(void)

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
              0x110) < DAT_14ca44208) {
    FUN_144b3d300(&DAT_14ca44208);
    if (DAT_14ca44208 == -1) {
      FUN_145efb3d6(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x20;
      local_58 = 0x94;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca44188,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142fb255b);
      _Init_thread_footer(&DAT_14ca44208);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14158eb56 FUN_14158eb56 body=289 status=ok
// SIG undefined FUN_14158eb56(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14158eb56(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca6ac88) {
    FUN_144b3d300(&DAT_14ca6ac88);
    if (DAT_14ca6ac88 == -1) {
      FUN_14158ec78();
      FUN_145efb650();
      FUN_140db5666(&DAT_14ca6abe0,0,&DAT_14ca6ab78,L"FCloudShadowFilterCS",
                    L"/Engine/Private/VolumetricCloud.usf",L"MainShadowFilterCS",5,2,FUN_1473346e6,
                    FUN_147334686,&LAB_14733466e,&LAB_14733466a,&LAB_14712ac0c,&LAB_14712ac08,0xe0,
                    &DAT_14ca6c938);
      _DAT_14ca6abe0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1430f7939);
      _Init_thread_footer(&DAT_14ca6ac88);
    }
  }
  return &DAT_14ca6abe0;
}



// FUNCTION 14158ec78 FUN_14158ec78 body=258 status=ok
// SIG undefined FUN_14158ec78(void)

void FUN_14158ec78(void)

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
              0x110) < DAT_14ca6c9b8) {
    FUN_144b3d300(&DAT_14ca6c9b8);
    if (DAT_14ca6c9b8 == -1) {
      FUN_145efb79a(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x50;
      local_58 = 0x607;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca6c938,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_14310d463);
      _Init_thread_footer(&DAT_14ca6c9b8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14158ed7c FUN_14158ed7c body=610 status=ok
// SIG undefined FUN_14158ed7c(void)

undefined8 ** FUN_14158ed7c(undefined8 **param_1)

{
  undefined8 *puVar1;
  char cVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined8 local_30;
  longlong *local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = (undefined8 *)0x0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c8338a0) {
    FUN_144b3d300(&DAT_14c8338a0);
    if (DAT_14c8338a0 == -1) {
      FUN_1456d85e6(&DAT_14c8337f0);
      atexit((_func_5014 *)&LAB_142748837);
      _Init_thread_footer(&DAT_14c8338a0);
    }
  }
  (**(code **)(DAT_14c8337f0 + 8))(&DAT_14c8337f0);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c8338a0) {
    FUN_144b3d300(&DAT_14c8338a0);
    if (DAT_14c8338a0 == -1) {
      FUN_1456d85e6(&DAT_14c8337f0);
      atexit((_func_5014 *)&LAB_142748837);
      _Init_thread_footer(&DAT_14c8338a0);
    }
  }
  FUN_145c85d54(&local_30);
  FUN_1495491fa(&DAT_14c8337f0,&local_28,local_30);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c8338a0) {
    FUN_144b3d300(&DAT_14c8338a0);
    if (DAT_14c8338a0 == -1) {
      FUN_1456d85e6(&DAT_14c8337f0);
      atexit((_func_5014 *)&LAB_142748837);
      _Init_thread_footer(&DAT_14c8338a0);
    }
  }
  (**(code **)(DAT_14c8337f0 + 0x10))(&DAT_14c8337f0);
  if ((local_20 < 1) || (*local_28 == 0)) {
LAB_14158ee88:
    local_38 = (undefined8 *)FUN_14001cc68(8,0x10);
    *local_38 = &PTR_FUN_14bd3c2a0;
  }
  else {
    cVar2 = (**(code **)(*DAT_14cb0d2b0 + 0x400))();
    if (cVar2 == '\0') goto LAB_14158ee88;
    (**(code **)(*(longlong *)*local_28 + 8))((longlong *)*local_28,&local_38);
  }
  if (local_28 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (&local_38 != param_1) {
    puVar1 = *param_1;
    *param_1 = local_38;
    local_38 = (undefined8 *)0x0;
    if (puVar1 == (undefined8 *)0x0) goto LAB_14158eef8;
    (**(code **)*puVar1)(puVar1,1);
  }
  if (local_38 != (undefined8 *)0x0) {
    (**(code **)*local_38)(local_38,1);
  }
LAB_14158eef8:
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14158efe0 FUN_14158efe0 body=289 status=ok
// SIG undefined FUN_14158efe0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14158efe0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9cc238) {
    FUN_144b3d300(&DAT_14c9cc238);
    if (DAT_14c9cc238 == -1) {
      FUN_14158f102();
      FUN_145efd032();
      FUN_140db5666(&DAT_14c9cc190,0,&DAT_14c9cc128,L"FClearIndirectArgBufferCS",
                    L"/Engine/Private/DistanceField/GlobalDistanceField.usf",
                    L"ClearIndirectArgBufferCS",5,1,FUN_14715abb6,FUN_14715ab56,&LAB_1462c2028,
                    &LAB_14715ab52,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14c9ce738);
      _DAT_14c9cc190 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142c03ced);
      _Init_thread_footer(&DAT_14c9cc238);
    }
  }
  return &DAT_14c9cc190;
}



// FUNCTION 14158f102 FUN_14158f102 body=258 status=ok
// SIG undefined FUN_14158f102(void)

void FUN_14158f102(void)

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
              0x110) < DAT_14c9ce7b8) {
    FUN_144b3d300(&DAT_14c9ce7b8);
    if (DAT_14c9ce7b8 == -1) {
      FUN_145efd17c(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x20;
      local_58 = 0x600;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9ce738,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142c1e21c);
      _Init_thread_footer(&DAT_14c9ce7b8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14158f206 FUN_14158f206 body=289 status=ok
// SIG undefined FUN_14158f206(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14158f206(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9ee2e8) {
    FUN_144b3d300(&DAT_14c9ee2e8);
    if (DAT_14c9ee2e8 == -1) {
      FUN_14158f328();
      FUN_145efd3f8();
      FUN_140db5666(&DAT_14c9ee240,0,&DAT_14c9ee1d8,L"FComputeCulledObjectsStartOffsetCS",
                    L"/Engine/Private/Lumen/LumenMeshSDFCulling.usf",
                    L"ComputeCulledObjectsStartOffsetCS",5,1,FUN_1471deed0,FUN_1471dee70,
                    &LAB_1462d72e6,&LAB_1471dee6c,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14c9f0890)
      ;
      _DAT_14c9ee240 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142d25b2f);
      _Init_thread_footer(&DAT_14c9ee2e8);
    }
  }
  return &DAT_14c9ee240;
}



// FUNCTION 14158f328 FUN_14158f328 body=258 status=ok
// SIG undefined FUN_14158f328(void)

void FUN_14158f328(void)

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
              0x110) < DAT_14c9f0910) {
    FUN_144b3d300(&DAT_14c9f0910);
    if (DAT_14c9f0910 == -1) {
      FUN_145efd542(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x50;
      local_58 = 0x13c;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9f0890,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142d262cb);
      _Init_thread_footer(&DAT_14c9f0910);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14158f42c FUN_14158f42c body=289 status=ok
// SIG undefined FUN_14158f42c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14158f42c(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9fb128) {
    FUN_144b3d300(&DAT_14c9fb128);
    if (DAT_14c9fb128 == -1) {
      FUN_14158f54e();
      FUN_145efd7be();
      FUN_140db5666(&DAT_14c9fb080,0,&DAT_14c9fb018,L"FLumenCardCombineLightingCS",
                    L"/Engine/Private/Lumen/LumenSceneLighting.usf",L"CombineLumenSceneLightingCS",5
                    ,1,FUN_147207bc4,FUN_147207b64,&LAB_1462e172a,&LAB_147207b60,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14c9feb30);
      _DAT_14c9fb080 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142d7babd);
      _Init_thread_footer(&DAT_14c9fb128);
    }
  }
  return &DAT_14c9fb080;
}



// FUNCTION 14158f54e FUN_14158f54e body=258 status=ok
// SIG undefined FUN_14158f54e(void)

void FUN_14158f54e(void)

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
              0x110) < DAT_14c9febb0) {
    FUN_144b3d300(&DAT_14c9febb0);
    if (DAT_14c9febb0 == -1) {
      FUN_145efd908(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x90;
      local_58 = 0x86;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9feb30,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142d9c52f);
      _Init_thread_footer(&DAT_14c9febb0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14158f652 FUN_14158f652 body=289 status=ok
// SIG undefined FUN_14158f652(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14158f652(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9fcc90) {
    FUN_144b3d300(&DAT_14c9fcc90);
    if (DAT_14c9fcc90 == -1) {
      FUN_14158f774();
      FUN_145efdb84();
      FUN_140db5666(&DAT_14c9fcbe8,0,&DAT_14c9fcb80,L"FScreenProbeDownsampleDepthUniformCS",
                    L"/Engine/Private/Lumen/LumenScreenProbeGather.usf",
                    L"ScreenProbeDownsampleDepthUniformCS",5,2,FUN_147208e04,FUN_147208da4,
                    &LAB_14586aa60,&LAB_147208da0,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14c9ff438)
      ;
      _DAT_14c9fcbe8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142d8ccf6);
      _Init_thread_footer(&DAT_14c9fcc90);
    }
  }
  return &DAT_14c9fcbe8;
}



// FUNCTION 14158f774 FUN_14158f774 body=258 status=ok
// SIG undefined FUN_14158f774(void)

void FUN_14158f774(void)

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
              0x110) < DAT_14c9ff4b8) {
    FUN_144b3d300(&DAT_14c9ff4b8);
    if (DAT_14c9ff4b8 == -1) {
      FUN_145efdcce(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x200;
      local_58 = 0x254;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9ff438,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142d9c695);
      _Init_thread_footer(&DAT_14c9ff4b8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14158f878 FUN_14158f878 body=289 status=ok
// SIG undefined FUN_14158f878(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14158f878(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca2fde0) {
    FUN_144b3d300(&DAT_14ca2fde0);
    if (DAT_14ca2fde0 == -1) {
      FUN_14158f99a();
      FUN_145efdf4a();
      FUN_140db5666(&DAT_14ca2fd38,0,&DAT_14ca2fcd0,L"FFillMipsConditionBufferCS",
                    L"/Engine/Private/PostProcessSubsurface.usf",L"FillMipsConditionBufferCS",5,1,
                    FUN_1472997fa,FUN_14729979a,&LAB_147299782,&LAB_14729977e,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14ca33ab8);
      _DAT_14ca2fd38 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142f06064);
      _Init_thread_footer(&DAT_14ca2fde0);
    }
  }
  return &DAT_14ca2fd38;
}



// FUNCTION 14158f99a FUN_14158f99a body=258 status=ok
// SIG undefined FUN_14158f99a(void)

void FUN_14158f99a(void)

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
              0x110) < DAT_14ca33b38) {
    FUN_144b3d300(&DAT_14ca33b38);
    if (DAT_14ca33b38 == -1) {
      FUN_145efe094(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x20;
      local_58 = 0x1dd;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca33ab8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142f14099);
      _Init_thread_footer(&DAT_14ca33b38);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14158fa9e FUN_14158fa9e body=289 status=ok
// SIG undefined FUN_14158fa9e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14158fa9e(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca42cf0) {
    FUN_144b3d300(&DAT_14ca42cf0);
    if (DAT_14ca42cf0 == -1) {
      FUN_14158fbc0();
      FUN_145efe310();
      FUN_140db5666(&DAT_14ca42c48,0,&DAT_14ca42be0,L"FConvolveSpecularFaceCS",
                    L"/Engine/Private/ReflectionEnvironmentShaders.usf",L"FilterCS",5,1,
                    FUN_1472c72ac,FUN_1472c724c,&LAB_1472c7234,&LAB_1472c7230,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14ca44100);
      _DAT_14ca42c48 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142f8f501);
      _Init_thread_footer(&DAT_14ca42cf0);
    }
  }
  return &DAT_14ca42c48;
}



// FUNCTION 14158fbc0 FUN_14158fbc0 body=258 status=ok
// SIG undefined FUN_14158fbc0(void)

void FUN_14158fbc0(void)

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
              0x110) < DAT_14ca44180) {
    FUN_144b3d300(&DAT_14ca44180);
    if (DAT_14ca44180 == -1) {
      FUN_145efe45a(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x40;
      local_58 = 0x6e;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca44100,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142fb254f);
      _Init_thread_footer(&DAT_14ca44180);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14158fcc4 FUN_14158fcc4 body=289 status=ok
// SIG undefined FUN_14158fcc4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14158fcc4(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca60608) {
    FUN_144b3d300(&DAT_14ca60608);
    if (DAT_14ca60608 == -1) {
      FUN_14158fde6();
      FUN_145efe6d6();
      FUN_140db5666(&DAT_14ca60560,0,&DAT_14ca604f8,L"FClearUAVCS",
                    L"/Engine/Private/PostprocessSubsurfaceTile.usf",L"ClearUAV",5,1,FUN_14732144a,
                    FUN_1473213ea,&LAB_1473213e6,&LAB_1473213e2,&LAB_14712ac0c,&LAB_14712ac08,0xe0,
                    &DAT_14ca62988);
      _DAT_14ca60560 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1430a9e62);
      _Init_thread_footer(&DAT_14ca60608);
    }
  }
  return &DAT_14ca60560;
}



// FUNCTION 14158fde6 FUN_14158fde6 body=258 status=ok
// SIG undefined FUN_14158fde6(void)

void FUN_14158fde6(void)

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
              0x110) < DAT_14ca62a08) {
    FUN_144b3d300(&DAT_14ca62a08);
    if (DAT_14ca62a08 == -1) {
      FUN_145efe820(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x30;
      local_58 = 0x42;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca62988,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1430bd59f);
      _Init_thread_footer(&DAT_14ca62a08);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14158feea FUN_14158feea body=1684 status=ok
// SIG undefined FUN_14158feea(void)

void FUN_14158feea(longlong param_1,longlong *param_2,undefined4 param_3)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  uint uVar8;
  undefined2 *puVar9;
  longlong *plVar10;
  byte bVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  bool bVar15;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined8 local_c0;
  undefined *local_b8;
  code *local_b0;
  undefined8 local_a0;
  undefined1 local_98 [24];
  longlong local_80;
  longlong local_70;
  uint local_68;
  int local_64;
  uint local_60;
  int local_5c;
  char local_51;
  undefined8 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_51 = (char)param_3;
  FUN_1406f9c46(param_1,local_98,param_2);
  plVar5 = (longlong *)FUN_1406f9508(param_1,param_2);
  local_50 = "MovieScene";
  local_48 = CONCAT35(local_48._5_3_,10);
  uVar2 = FUN_14001a6c0(&local_50,1);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c874a20) && (FUN_144b3d300(&DAT_14c874a20), DAT_14c874a20 == -1)) {
    FUN_145762954(&DAT_14c874628);
    DAT_14c874a18 = 1;
    atexit(FUN_14278de47);
    _Init_thread_footer(&DAT_14c874a20);
  }
  lVar6 = FUN_1402c9134(&DAT_14c874628,uVar2,&local_50,1);
  if (*(int *)(param_1 + 0x58) == 0) {
    puVar9 = &DAT_149dfb77a;
  }
  else {
    puVar9 = *(undefined2 **)(param_1 + 0x50);
  }
  FUN_1446f470e(&local_a0,puVar9,1);
  local_50 = (char *)0x0;
  if (param_2[2] == 0) {
    uVar8 = 0;
    uVar3 = 0;
  }
  else {
    uVar8 = *(uint *)(param_2[2] + 0xc);
    if ((int)uVar8 < DAT_14c9647dc) {
      lVar14 = (ulonglong)((uVar8 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8);
    }
    else {
      lVar14 = 0;
    }
    uVar3 = *(uint *)(lVar14 + 0x10);
    if (*(uint *)(lVar14 + 0x10) == 0) {
      LOCK();
      iVar4 = DAT_14c964868 + 1;
      UNLOCK();
      uVar12 = DAT_14c964868 + 1;
      bVar15 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar4;
      if (bVar15) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar12);
      }
      LOCK();
      uVar3 = *(uint *)(lVar14 + 0x10);
      bVar15 = uVar3 == 0;
      if (bVar15) {
        *(uint *)(lVar14 + 0x10) = uVar12;
        uVar3 = 0;
      }
      UNLOCK();
      if (bVar15) {
        uVar3 = uVar12;
      }
    }
    local_50 = (char *)CONCAT44(uVar3,uVar8);
  }
  local_48 = local_a0;
  uVar8 = uVar3 >> 0xd ^ uVar8 - uVar3;
  uVar12 = uVar8 << 8 ^ (-0x61c88647 - uVar3) - uVar8;
  uVar13 = uVar12 >> 0xd ^ (uVar3 - uVar8) - uVar12;
  uVar3 = uVar13 >> 0xc ^ (uVar8 - uVar12) - uVar13;
  uVar8 = uVar3 << 0x10 ^ (uVar12 - uVar13) - uVar3;
  uVar12 = uVar8 >> 5 ^ (uVar13 - uVar3) - uVar8;
  uVar13 = uVar12 >> 3 ^ (uVar3 - uVar8) - uVar12;
  uVar3 = uVar13 << 10 ^ (uVar8 - uVar12) - uVar13;
  uVar8 = uVar3 >> 0xf ^ uVar12 - (uVar13 + uVar3);
  uVar3 = (uint)((ulonglong)local_a0 >> 0x10);
  uVar12 = (uint)local_a0 & 0xffff;
  iVar4 = FUN_140fdbc96((longlong *)(lVar6 + 8),
                        (uVar8 >> 2) + 0x9e3779b9 +
                        (uint)local_a0 * 0x10000 + (int)((ulonglong)local_a0 >> 0x20) + uVar12 +
                        (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar12 >> 4) + uVar8 * 0x40 ^ uVar8);
  lVar14 = 0;
  if (iVar4 != -1) {
    lVar14 = (longlong)iVar4 * 0x28 + *(longlong *)(lVar6 + 8);
  }
  if (lVar14 != 0) {
    if ((*(int *)(lVar14 + 0x18) != 0) &&
       (plVar5 = *(longlong **)(lVar14 + 0x10), plVar5 != (longlong *)0x0)) {
      (**(code **)(*plVar5 + 0x60))(plVar5,param_2,param_3);
    }
    goto LAB_141590273;
  }
  if (plVar5 == (longlong *)0x0) {
    if ((((local_64 == 0) || ((int)local_68 < 0)) || (DAT_14c9647dc <= (int)local_68)) ||
       (((plVar5 = (longlong *)
                   ((ulonglong)((local_68 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_68 >> 0x10) * 8)),
         plVar5 == (longlong *)0x0 || ((int)plVar5[2] != local_64)) ||
        (((*(uint *)(plVar5 + 1) & 0x10200000) != 0 || (lVar6 = *plVar5, lVar6 == 0))))))
    goto LAB_141590273;
  }
  else {
    cVar1 = (**(code **)(*plVar5 + 0x80))(plVar5);
    if (cVar1 != '\0') {
      (**(code **)(*plVar5 + 0x98))(plVar5,param_2,&local_51);
      goto LAB_141590273;
    }
    if (((local_64 == 0) || ((int)local_68 < 0)) ||
       (((DAT_14c9647dc <= (int)local_68 ||
         (((plVar10 = (longlong *)
                      ((ulonglong)((local_68 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_68 >> 0x10) * 8)),
           plVar10 == (longlong *)0x0 || ((int)plVar10[2] != local_64)) ||
          ((*(uint *)(plVar10 + 1) & 0x10200000) != 0)))) || (lVar6 = *plVar10, lVar6 == 0)))) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c951d20) && (FUN_144b3d300(&DAT_14c951d20), DAT_14c951d20 == -1))
      {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14c951a88) &&
           (FUN_144b3d300(&DAT_14c951a88), DAT_14c951a88 == -1)) {
          local_b8 = (undefined *)FUN_140342cba();
          local_b0 = FUN_1468c7f1e;
          local_c0 = 0;
          local_c8 = 0x8001;
          FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000);
          atexit(FUN_14280c819);
          _Init_thread_footer(&DAT_14c951a88);
        }
        local_b0 = FUN_14067a048;
        local_b8 = &DAT_14c951a38;
        local_c0 = 0;
        local_c8 = 0x28001;
        FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000);
        atexit(FUN_142811fe5);
        _Init_thread_footer(&DAT_14c951d20);
      }
      puVar7 = (undefined8 *)plVar5[1];
      if (DAT_14c951cd8 == 0) {
        bVar15 = puVar7 != (undefined8 *)0x0;
        if (puVar7 != &DAT_14c951cd0 && bVar15) {
          do {
            puVar7 = (undefined8 *)puVar7[6];
            bVar15 = puVar7 != (undefined8 *)0x0;
            if (puVar7 == &DAT_14c951cd0) break;
          } while (puVar7 != (undefined8 *)0x0);
        }
        if (!bVar15) goto LAB_141590273;
      }
      else if ((puVar7[3] & DAT_14c951cd8) == 0) goto LAB_141590273;
      local_70 = *(int *)((longlong)plVar5 + 0x44) + local_70;
      if (local_51 == '\x01') {
        bVar11 = *(byte *)((longlong)plVar5 + 0x72);
      }
      else {
        bVar11 = 0;
      }
      *(byte *)(local_70 + (ulonglong)*(byte *)((longlong)plVar5 + 0x71)) =
           *(byte *)((ulonglong)*(byte *)((longlong)plVar5 + 0x71) + local_70) &
           ~*(byte *)((longlong)plVar5 + 0x73) | bVar11;
      goto LAB_141590273;
    }
  }
  FUN_14179ee1e(param_2,lVar6,&local_51);
LAB_141590273:
  if (((local_5c != 0) && (-1 < (int)local_60)) &&
     (((int)local_60 < DAT_14c9647dc &&
      ((((plVar5 = (longlong *)
                   ((ulonglong)((local_60 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_60 >> 0x10) * 8)),
         plVar5 != (longlong *)0x0 && ((int)plVar5[2] == local_5c)) &&
        ((*(uint *)(plVar5 + 1) & 0x10200000) == 0)) && (*plVar5 != 0)))))) {
    (**(code **)(*param_2 + 0x248))(param_2,*plVar5,0);
  }
  if (local_80 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141590580 FUN_141590580 body=164 status=ok
// SIG undefined FUN_141590580(void)

void FUN_141590580(void)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = L"Utility";
  local_38 = 7;
  FUN_1446e940c(local_44,&local_40);
  local_40 = L"MaterialExpression";
  local_38 = 0x12;
  FUN_1446e940c(local_48,&local_40);
  local_40 = L"Utility";
  local_38 = 7;
  FUN_140208c1e(&DAT_14caeba90,local_48,local_44,&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141590626 FUN_141590626 body=209 status=ok
// SIG undefined FUN_141590626(void)

void FUN_141590626(longlong param_1,longlong *param_2)

{
  short sVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined1 auStack_a8 [40];
  longlong local_80;
  short local_78;
  longlong local_70;
  longlong local_68;
  short local_60;
  longlong local_58;
  undefined1 local_50 [24];
  longlong local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar2 = *param_2;
  sVar1 = (short)param_2[1];
  lVar3 = param_2[2];
  local_68 = lVar2;
  local_60 = sVar1;
  local_58 = lVar3;
  FUN_146441ddc(&local_68,local_50,0);
  if ((lVar2 != 0 && param_1 != 0) && (sVar1 < 0 || lVar3 != 0)) {
    plVar4 = (longlong *)FUN_141817c28(param_1);
    if (plVar4 != (longlong *)0x0) {
      uVar5 = (**(code **)(*plVar4 + 0x10))(plVar4);
      local_80 = lVar2;
      local_78 = sVar1;
      local_70 = lVar3;
      FUN_140365ba6(uVar5,&local_80,1);
    }
  }
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141590714 FUN_141590714 body=327 status=ok
// SIG undefined FUN_141590714(void)

void FUN_141590714(longlong param_1,int param_2,int param_3)

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
    uVar4 = (longlong)param_2 * 0x78;
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
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_141590782;
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
LAB_141590782:
    iVar5 = (int)(uVar4 / 0x78);
    iVar7 = 0x7fffffff;
    if (param_2 <= iVar5) {
      iVar7 = iVar5;
    }
  }
  if (param_3 < iVar7) {
    FUN_1446f8d3c(param_1,0,iVar7,0x78,8);
    param_3 = iVar7;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14159085b FUN_14159085b body=337 status=ok
// SIG undefined FUN_14159085b(void)

void FUN_14159085b(longlong param_1,undefined8 *param_2,int param_3)

{
  undefined8 *puVar1;
  int iVar2;
  void *pvVar3;
  undefined8 *puVar4;
  
  if (param_3 != 0) {
    puVar4 = (undefined8 *)(param_1 + 0x38);
    do {
      puVar1 = puVar4 + -7;
      puVar4[-7] = 0;
      puVar4[-6] = 0;
      *(undefined4 *)(puVar4 + -5) = 0;
      if (param_2 == puVar1) {
        *(undefined4 *)(puVar4 + -5) = *(undefined4 *)(param_2 + 2);
        puVar4[-4] = 0;
        puVar4[-3] = 0;
        *(undefined4 *)(puVar4 + -2) = 0;
      }
      else {
        iVar2 = *(int *)(param_2 + 1);
        pvVar3 = (void *)*param_2;
        *(int *)(puVar4 + -6) = iVar2;
        if ((longlong)iVar2 == 0) {
          *(undefined4 *)((longlong)puVar4 + -0x2c) = 0;
        }
        else {
          FUN_1446dd670(puVar1,iVar2,0);
          memcpy((void *)*puVar1,pvVar3,(longlong)iVar2 * 2);
        }
        *(undefined4 *)(puVar4 + -5) = *(undefined4 *)(param_2 + 2);
        puVar4[-4] = 0;
        puVar4[-3] = 0;
        *(undefined4 *)(puVar4 + -2) = 0;
        iVar2 = *(int *)(param_2 + 4);
        pvVar3 = (void *)param_2[3];
        *(int *)(puVar4 + -3) = iVar2;
        if ((longlong)iVar2 == 0) {
          *(undefined4 *)((longlong)puVar4 + -0x14) = 0;
        }
        else {
          FUN_1446dd670(puVar4 + -4,iVar2,0);
          memcpy((void *)puVar4[-4],pvVar3,(longlong)iVar2 * 2);
        }
      }
      *(undefined4 *)(puVar4 + -2) = *(undefined4 *)(param_2 + 5);
      *(undefined1 *)(puVar4 + -1) = 0;
      *(undefined4 *)((longlong)puVar4 + -4) = 0;
      *(undefined1 *)(puVar4 + -1) = *(undefined1 *)(param_2 + 6);
      *(undefined4 *)((longlong)puVar4 + -4) = *(undefined4 *)((longlong)param_2 + 0x34);
      *puVar4 = 0;
      puVar4[1] = 0;
      puVar4[2] = 0;
      puVar4[3] = 0;
      puVar4[4] = 0;
      puVar4[5] = 0;
      *(undefined8 *)((longlong)puVar4 + 0x2c) = 0;
      *(undefined8 *)((longlong)puVar4 + 0x34) = 0;
      FUN_1410d422e(puVar4,param_2 + 7);
      *(undefined4 *)(puVar4 + 7) = *(undefined4 *)(param_2 + 0xe);
      param_2 = param_2 + 0xf;
      puVar4 = puVar4 + 0xf;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1415909ac FUN_1415909ac body=226 status=ok
// SIG undefined FUN_1415909ac(void)

longlong * FUN_1415909ac(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462f23fc;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141590a90 FUN_141590a90 body=289 status=ok
// SIG undefined FUN_141590a90(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_141590a90(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9c5d90) {
    FUN_144b3d300(&DAT_14c9c5d90);
    if (DAT_14c9c5d90 == -1) {
      FUN_141590bb2();
      FUN_145f015be();
      FUN_140db5666(&DAT_14c9c5ce8,0,&DAT_14c9c5c80,L"FUpdateHistoryDepthRejectionPS",
                    L"/Engine/Private/DistanceFieldLightingPost.usf",
                    L"UpdateHistoryDepthRejectionPS",3,1,FUN_14714e97c,FUN_14714e91c,FUN_1462bdb78,
                    &LAB_14714e918,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14c9c8058);
      _DAT_14c9c5ce8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142bd5ef4);
      _Init_thread_footer(&DAT_14c9c5d90);
    }
  }
  return &DAT_14c9c5ce8;
}



// FUNCTION 141590bb2 FUN_141590bb2 body=258 status=ok
// SIG undefined FUN_141590bb2(void)

void FUN_141590bb2(void)

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
              0x110) < DAT_14c9c80d8) {
    FUN_144b3d300(&DAT_14c9c80d8);
    if (DAT_14c9c80d8 == -1) {
      FUN_145f01708(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x1f0;
      local_58 = 0x7f;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9c8058,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142be762e);
      _Init_thread_footer(&DAT_14c9c80d8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141590cb6 FUN_141590cb6 body=289 status=ok
// SIG undefined FUN_141590cb6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_141590cb6(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9cb8d0) {
    FUN_144b3d300(&DAT_14c9cb8d0);
    if (DAT_14c9cb8d0 == -1) {
      FUN_141590dd8();
      FUN_145f01f76();
      FUN_140db5666(&DAT_14c9cb828,0,&DAT_14c9cb7c0,L"FMarkHeightfieldPagesCS",
                    L"/Engine/Private/DistanceField/GlobalDistanceFieldHeightfields.usf",
                    L"MarkHeightfieldPagesCS",5,1,FUN_14715a712,FUN_14715a6b2,&LAB_1462c1ff8,
                    &LAB_14715a6ae,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14c9ce408);
      _DAT_14c9cb828 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142c03001);
      _Init_thread_footer(&DAT_14c9cb8d0);
    }
  }
  return &DAT_14c9cb828;
}



// FUNCTION 141590dd8 FUN_141590dd8 body=258 status=ok
// SIG undefined FUN_141590dd8(void)

void FUN_141590dd8(void)

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
              0x110) < DAT_14c9ce488) {
    FUN_144b3d300(&DAT_14c9ce488);
    if (DAT_14c9ce488 == -1) {
      FUN_141590edc(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0xd0;
      local_58 = 0x1b;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9ce408,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142c1e093);
      _Init_thread_footer(&DAT_14c9ce488);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141590edc FUN_141590edc body=226 status=ok
// SIG undefined FUN_141590edc(void)

longlong * FUN_141590edc(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462c3ce0;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141590fc0 FUN_141590fc0 body=289 status=ok
// SIG undefined FUN_141590fc0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_141590fc0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9ec6a8) {
    FUN_144b3d300(&DAT_14c9ec6a8);
    if (DAT_14c9ec6a8 == -1) {
      FUN_1415910e2();
      FUN_145f04bde();
      FUN_140db5666(&DAT_14c9ec600,0,&DAT_14c9ec598,L"FLocalFogVolumeTiledCullingCS",
                    L"/Engine/Private/LocalFogVolumes/LocalFogVolumeTiledCulling.usf",
                    L"LocalFogVolumeTiledCullingCS",5,2,FUN_1471dc3f0,FUN_1471dc390,&LAB_1471dc38c,
                    &LAB_1471dc388,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14c9f0098);
      _DAT_14c9ec600 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142d01580);
      _Init_thread_footer(&DAT_14c9ec6a8);
    }
  }
  return &DAT_14c9ec600;
}



// FUNCTION 1415910e2 FUN_1415910e2 body=258 status=ok
// SIG undefined FUN_1415910e2(void)

void FUN_1415910e2(void)

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
              0x110) < DAT_14c9f0118) {
    FUN_144b3d300(&DAT_14c9f0118);
    if (DAT_14c9f0118 == -1) {
      FUN_1415911e6(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x120;
      local_58 = 0x10e;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9f0098,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142d261eb);
      _Init_thread_footer(&DAT_14c9f0118);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415911e6 FUN_1415911e6 body=226 status=ok
// SIG undefined FUN_1415911e6(void)

longlong * FUN_1415911e6(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462d784c;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415912ca FUN_1415912ca body=289 status=ok
// SIG undefined FUN_1415912ca(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1415912ca(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9eebe0) {
    FUN_144b3d300(&DAT_14c9eebe0);
    if (DAT_14c9eebe0 == -1) {
      FUN_1415913ec();
      FUN_145f04ec4();
      FUN_140db5666(&DAT_14c9eeb38,0,&DAT_14c9eead0,L"FAllocateUsedProbesCS",
                    L"/Engine/Private/Lumen/LumenRadianceCacheUpdate.usf",L"AllocateUsedProbesCS",5,
                    2,FUN_1471df6a4,FUN_1471df644,&LAB_1462d732c,&LAB_1471df640,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14c9f0c48);
      _DAT_14c9eeb38 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142d2606d);
      _Init_thread_footer(&DAT_14c9eebe0);
    }
  }
  return &DAT_14c9eeb38;
}



// FUNCTION 1415913ec FUN_1415913ec body=258 status=ok
// SIG undefined FUN_1415913ec(void)

void FUN_1415913ec(void)

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
              0x110) < DAT_14c9f0cc8) {
    FUN_144b3d300(&DAT_14c9f0cc8);
    if (DAT_14c9f0cc8 == -1) {
      FUN_145f0500e(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x1e0;
      local_58 = 0x193;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9f0c48,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142d2631f);
      _Init_thread_footer(&DAT_14c9f0cc8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415914f0 FUN_1415914f0 body=289 status=ok
// SIG undefined FUN_1415914f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1415914f0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9eee30) {
    FUN_144b3d300(&DAT_14c9eee30);
    if (DAT_14c9eee30 == -1) {
      FUN_141591612();
      FUN_145f0528e();
      FUN_140db5666(&DAT_14c9eed88,0,&DAT_14c9eed20,L"FSelectMaxPriorityBucketCS",
                    L"/Engine/Private/Lumen/LumenRadianceCacheUpdate.usf",
                    L"SelectMaxPriorityBucketCS",5,1,FUN_1471df830,FUN_1471df7d0,&LAB_1462d7340,
                    &LAB_1471df7cc,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14c9f0d58);
      _DAT_14c9eed88 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142d26085);
      _Init_thread_footer(&DAT_14c9eee30);
    }
  }
  return &DAT_14c9eed88;
}



// FUNCTION 141591612 FUN_141591612 body=258 status=ok
// SIG undefined FUN_141591612(void)

void FUN_141591612(void)

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
              0x110) < DAT_14c9f0dd8) {
    FUN_144b3d300(&DAT_14c9f0dd8);
    if (DAT_14c9f0dd8 == -1) {
      FUN_145f053d8(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x40;
      local_58 = 0x1ef;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9f0d58,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142d26337);
      _Init_thread_footer(&DAT_14c9f0dd8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141591716 FUN_141591716 body=289 status=ok
// SIG undefined FUN_141591716(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_141591716(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9ef520) {
    FUN_144b3d300(&DAT_14c9ef520);
    if (DAT_14c9ef520 == -1) {
      FUN_141591838();
      FUN_145f05658();
      FUN_140db5666(&DAT_14c9ef478,0,&DAT_14c9ef410,L"FGenerateProbeTraceTilesCS",
                    L"/Engine/Private/Lumen/LumenRadianceCache.usf",L"GenerateProbeTraceTilesCS",5,2
                    ,FUN_1471dfcd4,FUN_1471dfc74,&LAB_1462d737c,&LAB_1471dfc70,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14c9f1088);
      _DAT_14c9ef478 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142d260cd);
      _Init_thread_footer(&DAT_14c9ef520);
    }
  }
  return &DAT_14c9ef478;
}



// FUNCTION 141591838 FUN_141591838 body=258 status=ok
// SIG undefined FUN_141591838(void)

void FUN_141591838(void)

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
              0x110) < DAT_14c9f1108) {
    FUN_144b3d300(&DAT_14c9f1108);
    if (DAT_14c9f1108 == -1) {
      FUN_145f057a2(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x1e0;
      local_58 = 0x2cc;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9f1088,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142d26397);
      _Init_thread_footer(&DAT_14c9f1108);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14159193c FUN_14159193c body=289 status=ok
// SIG undefined FUN_14159193c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14159193c(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9fc570) {
    FUN_144b3d300(&DAT_14c9fc570);
    if (DAT_14c9fc570 == -1) {
      FUN_141591a5e();
      FUN_145f06bec();
      FUN_140db5666(&DAT_14c9fc4c8,0,&DAT_14c9fc460,L"FScreenProbeCalculateMovingCS",
                    L"/Engine/Private/Lumen/LumenScreenProbeFiltering.usf",
                    L"ScreenProbeCalculateMovingCS",5,3,FUN_1472088cc,FUN_14720886c,&LAB_1462e17ac,
                    &LAB_147208868,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14c9ff2a0);
      _DAT_14c9fc4c8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142d8795c);
      _Init_thread_footer(&DAT_14c9fc570);
    }
  }
  return &DAT_14c9fc4c8;
}



// FUNCTION 141591a5e FUN_141591a5e body=258 status=ok
// SIG undefined FUN_141591a5e(void)

void FUN_141591a5e(void)

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
              0x110) < DAT_14c9ff320) {
    FUN_144b3d300(&DAT_14c9ff320);
    if (DAT_14c9ff320 == -1) {
      FUN_145f06d36(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x180;
      local_58 = 0x147;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9ff2a0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142d9c671);
      _Init_thread_footer(&DAT_14c9ff320);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141591b62 FUN_141591b62 body=289 status=ok
// SIG undefined FUN_141591b62(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_141591b62(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca01068) {
    FUN_144b3d300(&DAT_14ca01068);
    if (DAT_14ca01068 == -1) {
      FUN_141591c84();
      FUN_145f06fb6();
      FUN_140db5666(&DAT_14ca00fc0,0,&DAT_14ca00f58,L"FScreenProbeGenerateRaysCS",
                    L"/Engine/Private/Lumen/LumenScreenProbeImportanceSampling.usf",
                    L"ScreenProbeGenerateRaysCS",5,6,FUN_147220d72,FUN_147220d12,&LAB_1462e731e,
                    &LAB_147220d0e,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14ca05ac0);
      _DAT_14ca00fc0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142dae8a9);
      _Init_thread_footer(&DAT_14ca01068);
    }
  }
  return &DAT_14ca00fc0;
}



// FUNCTION 141591c84 FUN_141591c84 body=258 status=ok
// SIG undefined FUN_141591c84(void)

void FUN_141591c84(void)

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
              0x110) < DAT_14ca05b40) {
    FUN_144b3d300(&DAT_14ca05b40);
    if (DAT_14ca05b40 == -1) {
      FUN_145f07100(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 400;
      local_58 = 0xb7;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca05ac0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142dd2ff5);
      _Init_thread_footer(&DAT_14ca05b40);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141591d88 FUN_141591d88 body=289 status=ok
// SIG undefined FUN_141591d88(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_141591d88(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca01c30) {
    FUN_144b3d300(&DAT_14ca01c30);
    if (DAT_14ca01c30 == -1) {
      FUN_141591eaa();
      FUN_145f07380();
      FUN_140db5666(&DAT_14ca01b88,0,&DAT_14ca01b20,L"FScreenSpaceShortRangeAOCS",
                    L"/Engine/Private/Lumen/LumenScreenSpaceBentNormal.usf",
                    L"ScreenSpaceShortRangeAOCS",5,0x30,FUN_147221668,FUN_147221608,FUN_14176df8e,
                    &LAB_142db4c30,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14ca05f88);
      _DAT_14ca01b88 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142db4c33);
      _Init_thread_footer(&DAT_14ca01c30);
    }
  }
  return &DAT_14ca01b88;
}



// FUNCTION 141591eaa FUN_141591eaa body=258 status=ok
// SIG undefined FUN_141591eaa(void)

void FUN_141591eaa(void)

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
              0x110) < DAT_14ca06008) {
    FUN_144b3d300(&DAT_14ca06008);
    if (DAT_14ca06008 == -1) {
      FUN_141591fae(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x120;
      local_58 = 0x3c;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca05f88,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142dd30c1);
      _Init_thread_footer(&DAT_14ca06008);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141591fae FUN_141591fae body=226 status=ok
// SIG undefined FUN_141591fae(void)

longlong * FUN_141591fae(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462e8b2e;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141592092 FUN_141592092 body=289 status=ok
// SIG undefined FUN_141592092(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_141592092(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca030a8) {
    FUN_144b3d300(&DAT_14ca030a8);
    if (DAT_14ca030a8 == -1) {
      FUN_1415921b4();
      FUN_145f07666();
      FUN_140db5666(&DAT_14ca03000,0,&DAT_14ca02f98,L"FTranslucencyVolumeSpatialSeparableFilterCS",
                    L"/Engine/Private/Lumen/LumenTranslucencyVolumeLighting.usf",
                    L"TranslucencyVolumeSpatialSeparableFilterCS",5,1,FUN_1472228b4,FUN_147222854,
                    &LAB_1462e7406,&LAB_147222850,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14ca065e8)
      ;
      _DAT_14ca03000 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142dbe7c3);
      _Init_thread_footer(&DAT_14ca030a8);
    }
  }
  return &DAT_14ca03000;
}



// FUNCTION 1415921b4 FUN_1415921b4 body=258 status=ok
// SIG undefined FUN_1415921b4(void)

void FUN_1415921b4(void)

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
              0x110) < DAT_14ca06668) {
    FUN_144b3d300(&DAT_14ca06668);
    if (DAT_14ca06668 == -1) {
      FUN_145f077b0(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x150;
      local_58 = 0x1f8;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca065e8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142dd3a43);
      _Init_thread_footer(&DAT_14ca06668);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415922b8 FUN_1415922b8 body=289 status=ok
// SIG undefined FUN_1415922b8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1415922b8(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca14a48) {
    FUN_144b3d300(&DAT_14ca14a48);
    if (DAT_14ca14a48 == -1) {
      FUN_1415923da();
      FUN_145f07a30();
      FUN_140db5666(&DAT_14ca149a0,0,&DAT_14ca14938,L"FInstanceHierarchyAppendUncullable_CS",
                    L"/Engine/Private/Nanite/NaniteInstanceHierarchyCulling.usf",
                    L"AppendUncullableInstanceWork",5,2,FUN_147251e22,FUN_147251dc2,&LAB_1462eecd6,
                    &LAB_147251dbe,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14ca178a8);
      _DAT_14ca149a0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142e0a306);
      _Init_thread_footer(&DAT_14ca14a48);
    }
  }
  return &DAT_14ca149a0;
}



// FUNCTION 1415923da FUN_1415923da body=258 status=ok
// SIG undefined FUN_1415923da(void)

void FUN_1415923da(void)

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
              0x110) < DAT_14ca17928) {
    FUN_144b3d300(&DAT_14ca17928);
    if (DAT_14ca17928 == -1) {
      FUN_145f07b7a(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x80;
      local_58 = 0x2e0;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca178a8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142e2761b);
      _Init_thread_footer(&DAT_14ca17928);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415924de FUN_1415924de body=289 status=ok
// SIG undefined FUN_1415924de(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1415924de(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca1cc48) {
    FUN_144b3d300(&DAT_14ca1cc48);
    if (DAT_14ca1cc48 == -1) {
      FUN_141592600();
      FUN_145f07dfa();
      FUN_140db5666(&DAT_14ca1cba0,0,&DAT_14ca1cb38,L"FOITSortTriangleIndex_WriteOutCS",
                    L"/Engine/Private/OIT/OITSorting.usf",L"MainCS",5,1,FUN_1472711ee,FUN_14727118e,
                    &LAB_14727118a,&LAB_147271186,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14ca216f0)
      ;
      _DAT_14ca1cba0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142e6cdb7);
      _Init_thread_footer(&DAT_14ca1cc48);
    }
  }
  return &DAT_14ca1cba0;
}



// FUNCTION 141592600 FUN_141592600 body=258 status=ok
// SIG undefined FUN_141592600(void)

void FUN_141592600(void)

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
              0x110) < DAT_14ca21770) {
    FUN_144b3d300(&DAT_14ca21770);
    if (DAT_14ca21770 == -1) {
      FUN_145f07f44(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x40;
      local_58 = 0x210;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca216f0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142e941e0);
      _Init_thread_footer(&DAT_14ca21770);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141592704 FUN_141592704 body=289 status=ok
// SIG undefined FUN_141592704(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_141592704(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca25860) {
    FUN_144b3d300(&DAT_14ca25860);
    if (DAT_14ca25860 == -1) {
      FUN_141592826();
      FUN_145f081c4();
      FUN_140db5666(&DAT_14ca257b8,0,&DAT_14ca25750,L"FFXAAPS",L"/Engine/Private/FXAAShader.usf",
                    L"FxaaPS",3,0x18,FUN_147289cea,FUN_147289c8a,&LAB_142eb2d54,&LAB_147289c86,
                    &LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14ca28090);
      _DAT_14ca257b8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142eb2d57);
      _Init_thread_footer(&DAT_14ca25860);
    }
  }
  return &DAT_14ca257b8;
}



// FUNCTION 141592826 FUN_141592826 body=258 status=ok
// SIG undefined FUN_141592826(void)

void FUN_141592826(void)

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
              0x110) < DAT_14ca28110) {
    FUN_144b3d300(&DAT_14ca28110);
    if (DAT_14ca28110 == -1) {
      FUN_145f0830e(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x1d0;
      local_58 = 0x24;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca28090,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142ed6b90);
      _Init_thread_footer(&DAT_14ca28110);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14159292a FUN_14159292a body=289 status=ok
// SIG undefined FUN_14159292a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14159292a(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca45528) {
    FUN_144b3d300(&DAT_14ca45528);
    if (DAT_14ca45528 == -1) {
      FUN_141592a4c();
      FUN_145f08b7c();
      FUN_140db5666(&DAT_14ca45480,0,&DAT_14ca45418,L"FComputeExplicitCellBounds_CS",
                    L"/Engine/Private/SceneCulling/SceneCullingBuildExplicitBounds.usf",
                    L"ComputeExplicitCellBounds",5,2,FUN_1472d99dc,FUN_1472d997c,&LAB_146305af6,
                    &LAB_1472d9978,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14ca46d08);
      _DAT_14ca45480 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142fd6a4b);
      _Init_thread_footer(&DAT_14ca45528);
    }
  }
  return &DAT_14ca45480;
}



// FUNCTION 141592a4c FUN_141592a4c body=258 status=ok
// SIG undefined FUN_141592a4c(void)

void FUN_141592a4c(void)

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
              0x110) < DAT_14ca46d88) {
    FUN_144b3d300(&DAT_14ca46d88);
    if (DAT_14ca46d88 == -1) {
      FUN_145f08cc6(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x60;
      local_58 = 0x304;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca46d08,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142fe94df);
      _Init_thread_footer(&DAT_14ca46d88);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141592b50 FUN_141592b50 body=289 status=ok
// SIG undefined FUN_141592b50(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_141592b50(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca5c340) {
    FUN_144b3d300(&DAT_14ca5c340);
    if (DAT_14ca5c340 == -1) {
      FUN_141592c72();
      FUN_145f08f46();
      FUN_140db5666(&DAT_14ca5c298,0,&DAT_14ca5c230,L"FWaterTileClassificationBuildListsCS",
                    L"/Engine/Private/SingleLayerWaterComposite.usf",
                    L"WaterTileClassificationBuildListsCS",5,1,FUN_147315756,FUN_1473156f6,
                    &LAB_1473156d6,&LAB_1473156d2,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14ca5e9f0)
      ;
      _DAT_14ca5c298 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_143089007);
      _Init_thread_footer(&DAT_14ca5c340);
    }
  }
  return &DAT_14ca5c298;
}



// FUNCTION 141592c72 FUN_141592c72 body=258 status=ok
// SIG undefined FUN_141592c72(void)

void FUN_141592c72(void)

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
              0x110) < DAT_14ca5ea70) {
    FUN_144b3d300(&DAT_14ca5ea70);
    if (DAT_14ca5ea70 == -1) {
      FUN_145f09090(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x50;
      local_58 = 0x183;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca5e9f0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_14309d741);
      _Init_thread_footer(&DAT_14ca5ea70);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141592d76 FUN_141592d76 body=289 status=ok
// SIG undefined FUN_141592d76(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_141592d76(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca5daf0) {
    FUN_144b3d300(&DAT_14ca5daf0);
    if (DAT_14ca5daf0 == -1) {
      FUN_141592e98();
      FUN_145f09310();
      FUN_140db5666(&DAT_14ca5da48,0,&DAT_14ca5d9e0,L"FSplineMeshTextureFillCS",
                    L"/Engine/Private/SplineMeshSceneTexture.usf",L"FillTexture",5,1,FUN_147317118,
                    FUN_1473170b8,&LAB_14630a714,&LAB_1473170b4,&LAB_14712ac0c,&LAB_14712ac08,0xe0,
                    &DAT_14ca5f1e8);
      _DAT_14ca5da48 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_143097e6e);
      _Init_thread_footer(&DAT_14ca5daf0);
    }
  }
  return &DAT_14ca5da48;
}



// FUNCTION 141592e98 FUN_141592e98 body=258 status=ok
// SIG undefined FUN_141592e98(void)

void FUN_141592e98(void)

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
              0x110) < DAT_14ca5f268) {
    FUN_144b3d300(&DAT_14ca5f268);
    if (DAT_14ca5f268 == -1) {
      FUN_145f0945a(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x40;
      local_58 = 0x6d;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca5f1e8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_14309e87b);
      _Init_thread_footer(&DAT_14ca5f268);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141592f9c FUN_141592f9c body=289 status=ok
// SIG undefined FUN_141592f9c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_141592f9c(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca66240) {
    FUN_144b3d300(&DAT_14ca66240);
    if (DAT_14ca66240 == -1) {
      FUN_1415930be();
      FUN_145f09cc8();
      FUN_140db5666(&DAT_14ca66198,0,&DAT_14ca66130,L"FCullPerPageDrawCommandsCs",
                    L"/Engine/Private/VirtualShadowMaps/VirtualShadowMapBuildPerPageDrawCommands.usf"
                    ,L"CullPerPageDrawCommandsCs",5,8,FUN_14732c62e,FUN_14732c5ce,&LAB_1430d8294,
                    &LAB_14732c5ca,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14ca68200);
      _DAT_14ca66198 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1430d82cc);
      _Init_thread_footer(&DAT_14ca66240);
    }
  }
  return &DAT_14ca66198;
}



// FUNCTION 1415930be FUN_1415930be body=258 status=ok
// SIG undefined FUN_1415930be(void)

void FUN_1415930be(void)

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
              0x110) < DAT_14ca68280) {
    FUN_144b3d300(&DAT_14ca68280);
    if (DAT_14ca68280 == -1) {
      FUN_1415931c2(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x100;
      local_58 = 0xabc;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca68200,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1430e64b9);
      _Init_thread_footer(&DAT_14ca68280);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415931c2 FUN_1415931c2 body=226 status=ok
// SIG undefined FUN_1415931c2(void)

longlong * FUN_1415931c2(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1463126d2;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415932a6 FUN_1415932a6 body=289 status=ok
// SIG undefined FUN_1415932a6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1415932a6(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca666f8) {
    FUN_144b3d300(&DAT_14ca666f8);
    if (DAT_14ca666f8 == -1) {
      FUN_1415933c8();
      FUN_145f09fae();
      FUN_140db5666(&DAT_14ca66650,0,&DAT_14ca665e8,L"FSelectPagesForHZBAndUpdateDirtyFlagsCS",
                    L"/Engine/Private/VirtualShadowMaps/VirtualShadowMapPhysicalPageManagement.usf",
                    L"SelectPagesForHZBAndUpdateDirtyFlagsCS",5,2,FUN_14732cb46,FUN_14732cae6,
                    &LAB_14732caae,&LAB_14732caaa,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14ca68530)
      ;
      _DAT_14ca66650 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1430e177c);
      _Init_thread_footer(&DAT_14ca666f8);
    }
  }
  return &DAT_14ca66650;
}



// FUNCTION 1415933c8 FUN_1415933c8 body=258 status=ok
// SIG undefined FUN_1415933c8(void)

void FUN_1415933c8(void)

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
              0x110) < DAT_14ca685b0) {
    FUN_144b3d300(&DAT_14ca685b0);
    if (DAT_14ca685b0 == -1) {
      FUN_145f0a0f8(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x40;
      local_58 = 0xe81;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca68530,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1430e6be3);
      _Init_thread_footer(&DAT_14ca685b0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415934cc FUN_1415934cc body=287 status=ok
// SIG undefined FUN_1415934cc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1415934cc(void)

{
  undefined8 uVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb2c0c8) {
    FUN_144b3d300(&DAT_14cb2c0c8);
    if (DAT_14cb2c0c8 == -1) {
      uVar1 = FUN_1415935ec();
      FUN_145f0dec4();
      FUN_140db5666(&DAT_14cb2c020,0,&DAT_14cb2bfb8,L"FNiagaraDrawIndirectArgsGenCS",
                    L"/Plugin/FX/Niagara/Private/NiagaraDrawIndirectArgsGen.usf",L"MainCS",5,2,
                    FUN_148042b9c,FUN_148042b42,&LAB_148042b3e,&LAB_148042b3a,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,uVar1);
      _DAT_14cb2c020 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1438f5cdd);
      _Init_thread_footer(&DAT_14cb2c0c8);
    }
  }
  return &DAT_14cb2c020;
}



// FUNCTION 1415935ec FUN_1415935ec body=265 status=ok
// SIG undefined FUN_1415935ec(void)

undefined * FUN_1415935ec(void)

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
              0x110) < DAT_14cb2ce60) {
    FUN_144b3d300(&DAT_14cb2ce60);
    if (DAT_14cb2ce60 == -1) {
      FUN_145f0e00e(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x30;
      local_58 = 0x4c;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cb2cde0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1438f6d23);
      _Init_thread_footer(&DAT_14cb2ce60);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14cb2cde0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415936f6 FUN_1415936f6 body=289 status=ok
// SIG undefined FUN_1415936f6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1415936f6(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb50778) {
    FUN_144b3d300(&DAT_14cb50778);
    if (DAT_14cb50778 == -1) {
      FUN_141593818();
      FUN_145f0ee64();
      FUN_140db5666(&DAT_14cb506d0,0,&DAT_14cb50668,L"FComputeDivergenceCS",
                    L"/GbxWindShaders/JacobiSolve.usf",L"ComputeDivergence",5,1,FUN_1485ec6c4,
                    FUN_1485ec664,&LAB_1485ec660,&LAB_1485ec65c,&LAB_14712ac0c,&LAB_14712ac08,0xe0,
                    &DAT_14cb50cb0);
      _DAT_14cb506d0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_143beebb9);
      _Init_thread_footer(&DAT_14cb50778);
    }
  }
  return &DAT_14cb506d0;
}



// FUNCTION 141593818 FUN_141593818 body=258 status=ok
// SIG undefined FUN_141593818(void)

void FUN_141593818(void)

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
              0x110) < DAT_14cb50d30) {
    FUN_144b3d300(&DAT_14cb50d30);
    if (DAT_14cb50d30 == -1) {
      FUN_145f0efae(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x40;
      local_58 = 0x70;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cb50cb0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_143bf2e0a);
      _Init_thread_footer(&DAT_14cb50d30);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14159391c FUN_14159391c body=289 status=ok
// SIG undefined FUN_14159391c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14159391c(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9c18a8) {
    FUN_144b3d300(&DAT_14c9c18a8);
    if (DAT_14c9c18a8 == -1) {
      FUN_141593a3e();
      FUN_145f11778();
      FUN_140db5666(&DAT_14c9c1800,0,&DAT_14c9c1798,L"FPostProcessEdgeDetection2CS",
                    L"/Engine/Private/PostProcessEdgeDetection2.usf",L"MainEdgeDetectCS",5,0xc0,
                    FUN_147144b0a,FUN_147144aaa,&LAB_142ba3490,&LAB_142ba348c,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14c9c3820);
      _DAT_14c9c1800 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142ba34a7);
      _Init_thread_footer(&DAT_14c9c18a8);
    }
  }
  return &DAT_14c9c1800;
}



// FUNCTION 141593a3e FUN_141593a3e body=258 status=ok
// SIG undefined FUN_141593a3e(void)

void FUN_141593a3e(void)

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
              0x110) < DAT_14c9c38a0) {
    FUN_144b3d300(&DAT_14c9c38a0);
    if (DAT_14c9c38a0 == -1) {
      FUN_141593b42(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FComputeShaderEdgeDetection2Parameters";
      local_38 = 0;
      local_50 = 0x140;
      local_58 = 0x9f;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9c3820,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142bc082b);
      _Init_thread_footer(&DAT_14c9c38a0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141593b42 FUN_141593b42 body=226 status=ok
// SIG undefined FUN_141593b42(void)

longlong * FUN_141593b42(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462bc06a;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141593c26 FUN_141593c26 body=289 status=ok
// SIG undefined FUN_141593c26(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_141593c26(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9c2238) {
    FUN_144b3d300(&DAT_14c9c2238);
    if (DAT_14c9c2238 == -1) {
      FUN_141593d48();
      FUN_145f11a60();
      FUN_140db5666(&DAT_14c9c2190,0,&DAT_14c9c2128,L"FPostProcessOutlineTechPS",
                    L"/Engine/Private/PostProcessOutlineTech.usf",L"PixelShaderMain",3,4,
                    FUN_147145326,FUN_1471452c6,&LAB_1462ba792,&LAB_1471452c2,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14c9c3a40);
      _DAT_14c9c2190 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142ba68c4);
      _Init_thread_footer(&DAT_14c9c2238);
    }
  }
  return &DAT_14c9c2190;
}



// FUNCTION 141593d48 FUN_141593d48 body=258 status=ok
// SIG undefined FUN_141593d48(void)

void FUN_141593d48(void)

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
              0x110) < DAT_14c9c3ac0) {
    FUN_144b3d300(&DAT_14c9c3ac0);
    if (DAT_14c9c3ac0 == -1) {
      FUN_141593e4c(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x1a0;
      local_58 = 0x31;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9c3a40,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142bc0a7c);
      _Init_thread_footer(&DAT_14c9c3ac0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141593e4c FUN_141593e4c body=226 status=ok
// SIG undefined FUN_141593e4c(void)

longlong * FUN_141593e4c(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462bc53c;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141593f30 FUN_141593f30 body=289 status=ok
// SIG undefined FUN_141593f30(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_141593f30(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9c7af8) {
    FUN_144b3d300(&DAT_14c9c7af8);
    if (DAT_14c9c7af8 == -1) {
      FUN_141594052();
      FUN_145f11d48();
      FUN_140db5666(&DAT_14c9c7a50,0,&DAT_14c9c79e8,L"FComputeDistanceFieldAssetWantedMipsCS",
                    L"/Engine/Private/DistanceFieldStreaming.usf",
                    L"ComputeDistanceFieldAssetWantedMipsCS",5,1,FUN_14714fc1c,FUN_14714fbbc,
                    &LAB_1462bdcf0,&LAB_14714fbb8,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14c9c9048)
      ;
      _DAT_14c9c7a50 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142be43af);
      _Init_thread_footer(&DAT_14c9c7af8);
    }
  }
  return &DAT_14c9c7a50;
}



// FUNCTION 141594052 FUN_141594052 body=258 status=ok
// SIG undefined FUN_141594052(void)

void FUN_141594052(void)

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
              0x110) < DAT_14c9c90c8) {
    FUN_144b3d300(&DAT_14c9c90c8);
    if (DAT_14c9c90c8 == -1) {
      FUN_145f11e92(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0xc0;
      local_58 = 0xf5;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9c9048,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142be77ba);
      _Init_thread_footer(&DAT_14c9c90c8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141594156 FUN_141594156 body=289 status=ok
// SIG undefined FUN_141594156(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_141594156(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9cbc48) {
    FUN_144b3d300(&DAT_14c9cbc48);
    if (DAT_14c9cbc48 == -1) {
      FUN_141594278();
      FUN_145f12704();
      FUN_140db5666(&DAT_14c9cbba0,0,&DAT_14c9cbb38,L"FComposeHeightfieldsIntoPagesCS",
                    L"/Engine/Private/DistanceField/GlobalDistanceFieldHeightfields.usf",
                    L"ComposeHeightfieldsIntoPagesCS",5,4,FUN_14715a964,FUN_14715a904,&LAB_1462c2010
                    ,&LAB_14715a900,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14c9ce5a0);
      _DAT_14c9cbba0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142c03025);
      _Init_thread_footer(&DAT_14c9cbc48);
    }
  }
  return &DAT_14c9cbba0;
}



// FUNCTION 141594278 FUN_141594278 body=258 status=ok
// SIG undefined FUN_141594278(void)

void FUN_141594278(void)

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
              0x110) < DAT_14c9ce620) {
    FUN_144b3d300(&DAT_14c9ce620);
    if (DAT_14c9ce620 == -1) {
      FUN_14159437c(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x110;
      local_58 = 0x84;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9ce5a0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142c1e0b7);
      _Init_thread_footer(&DAT_14c9ce620);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14159437c FUN_14159437c body=226 status=ok
// SIG undefined FUN_14159437c(void)

longlong * FUN_14159437c(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462c3f00;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141594460 FUN_141594460 body=289 status=ok
// SIG undefined FUN_141594460(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_141594460(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9cbd70) {
    FUN_144b3d300(&DAT_14c9cbd70);
    if (DAT_14c9cbd70 == -1) {
      FUN_141594582();
      FUN_145f129ec();
      FUN_140db5666(&DAT_14c9cbcc8,0,&DAT_14c9cbc60,L"FCompositeHeightfieldsIntoObjectGridPagesCS",
                    L"/Engine/Private/DistanceField/GlobalDistanceFieldHeightfields.usf",
                    L"CompositeHeightfieldsIntoObjectGridPagesCS",5,2,FUN_14715aa2a,FUN_14715a9ca,
                    &LAB_1462c2018,&LAB_14715a9c6,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14c9ce628)
      ;
      _DAT_14c9cbcc8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142c03031);
      _Init_thread_footer(&DAT_14c9cbd70);
    }
  }
  return &DAT_14c9cbcc8;
}



// FUNCTION 141594582 FUN_141594582 body=258 status=ok
// SIG undefined FUN_141594582(void)

void FUN_141594582(void)

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
              0x110) < DAT_14c9ce6a8) {
    FUN_144b3d300(&DAT_14c9ce6a8);
    if (DAT_14c9ce6a8 == -1) {
      FUN_141594686(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x110;
      local_58 = 0xc1;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9ce628,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142c1e0c3);
      _Init_thread_footer(&DAT_14c9ce6a8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141594686 FUN_141594686 body=226 status=ok
// SIG undefined FUN_141594686(void)

longlong * FUN_141594686(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462c4092;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14159476a FUN_14159476a body=289 status=ok
// SIG undefined FUN_14159476a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14159476a(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9cc360) {
    FUN_144b3d300(&DAT_14c9cc360);
    if (DAT_14c9cc360 == -1) {
      FUN_14159488c();
      FUN_145f12cd4();
      FUN_140db5666(&DAT_14c9cc2b8,0,&DAT_14c9cc250,L"FBuildGridTilesCS",
                    L"/Engine/Private/DistanceField/GlobalDistanceField.usf",L"BuildGridTilesCS",5,1
                    ,FUN_14715ac7c,FUN_14715ac1c,&LAB_1462c2030,&LAB_14715ac18,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14c9ce7c0);
      _DAT_14c9cc2b8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142c03cf9);
      _Init_thread_footer(&DAT_14c9cc360);
    }
  }
  return &DAT_14c9cc2b8;
}



// FUNCTION 14159488c FUN_14159488c body=258 status=ok
// SIG undefined FUN_14159488c(void)

void FUN_14159488c(void)

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
              0x110) < DAT_14c9ce840) {
    FUN_144b3d300(&DAT_14c9ce840);
    if (DAT_14c9ce840 == -1) {
      FUN_145f12e1e(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0xb0;
      local_58 = 0x61f;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9ce7c0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142c1e228);
      _Init_thread_footer(&DAT_14c9ce840);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141594990 FUN_141594990 body=258 status=ok
// SIG undefined FUN_141594990(void)

void FUN_141594990(void)

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
              0x110) < DAT_14c9ced08) {
    FUN_144b3d300(&DAT_14c9ced08);
    if (DAT_14c9ced08 == -1) {
      FUN_141594a94(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x90;
      local_58 = 0x7a6;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9cec88,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142c1e294);
      _Init_thread_footer(&DAT_14c9ced08);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141594a94 FUN_141594a94 body=226 status=ok
// SIG undefined FUN_141594a94(void)

longlong * FUN_141594a94(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462c4f24;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141594b78 FUN_141594b78 body=289 status=ok
// SIG undefined FUN_141594b78(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_141594b78(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9e4718) {
    FUN_144b3d300(&DAT_14c9e4718);
    if (DAT_14c9e4718 == -1) {
      FUN_141594c9a();
      FUN_145f15138();
      FUN_140db5666(&DAT_14c9e4670,0,&DAT_14c9e4608,L"FDiffuseIndirectCompositePS",
                    L"/Engine/Private/DiffuseIndirectComposite.usf",L"MainPS",3,0x300,FUN_1471bdf4a,
                    FUN_1471bdeea,FUN_141765632,&LAB_1471bdee6,&LAB_14712ac0c,&LAB_14712ac08,0xe0,
                    &DAT_14c9e6750);
      _DAT_14c9e4670 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142cbfc5c);
      _Init_thread_footer(&DAT_14c9e4718);
    }
  }
  return &DAT_14c9e4670;
}



// FUNCTION 141594c9a FUN_141594c9a body=258 status=ok
// SIG undefined FUN_141594c9a(void)

void FUN_141594c9a(void)

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
              0x110) < DAT_14c9e67d0) {
    FUN_144b3d300(&DAT_14c9e67d0);
    if (DAT_14c9e67d0 == -1) {
      FUN_141594d9e(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x370;
      local_58 = 0xab;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9e6750,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142ccd8f8);
      _Init_thread_footer(&DAT_14c9e67d0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141594d9e FUN_141594d9e body=226 status=ok
// SIG undefined FUN_141594d9e(void)

longlong * FUN_141594d9e(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462d3036;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141594e82 FUN_141594e82 body=289 status=ok
// SIG undefined FUN_141594e82(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_141594e82(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9e8358) {
    FUN_144b3d300(&DAT_14c9e8358);
    if (DAT_14c9e8358 == -1) {
      FUN_141594fa4();
      FUN_145f15420();
      FUN_140db5666(&DAT_14c9e82b0,0,&DAT_14c9e8248,L"FLightGridInjectionCS",
                    L"/Engine/Private/LightGridInjection.usf",L"LightGridInjectionCS",5,0x40,
                    FUN_1471d0d3a,FUN_1471d0cda,&LAB_142cdf91c,&LAB_142cdf918,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14c9ea0f8);
      _DAT_14c9e82b0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142cdf91f);
      _Init_thread_footer(&DAT_14c9e8358);
    }
  }
  return &DAT_14c9e82b0;
}



// FUNCTION 141594fa4 FUN_141594fa4 body=258 status=ok
// SIG undefined FUN_141594fa4(void)

void FUN_141594fa4(void)

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
              0x110) < DAT_14c9ea178) {
    FUN_144b3d300(&DAT_14c9ea178);
    if (DAT_14c9ea178 == -1) {
      FUN_1415950a8(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x140;
      local_58 = 0xff;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9ea0f8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142cf4785);
      _Init_thread_footer(&DAT_14c9ea178);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415950a8 FUN_1415950a8 body=226 status=ok
// SIG undefined FUN_1415950a8(void)

longlong * FUN_1415950a8(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462d51b0;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14159518c FUN_14159518c body=289 status=ok
// SIG undefined FUN_14159518c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14159518c(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9ede48) {
    FUN_144b3d300(&DAT_14c9ede48);
    if (DAT_14c9ede48 == -1) {
      FUN_1415952ae();
      FUN_145f15708();
      FUN_140db5666(&DAT_14c9edda0,0,&DAT_14c9edd38,L"FCombineObjectIndexBuffersCS",
                    L"/Engine/Private/Lumen/LumenMeshSDFCulling.usf",L"CombineObjectIndexBuffersCS",
                    5,1,FUN_1471debb8,FUN_1471deb58,&LAB_1462d72c8,&LAB_1471deb54,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14c9f0670);
      _DAT_14c9edda0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142d25aff);
      _Init_thread_footer(&DAT_14c9ede48);
    }
  }
  return &DAT_14c9edda0;
}



// FUNCTION 1415952ae FUN_1415952ae body=258 status=ok
// SIG undefined FUN_1415952ae(void)

void FUN_1415952ae(void)

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
              0x110) < DAT_14c9f06f0) {
    FUN_144b3d300(&DAT_14c9f06f0);
    if (DAT_14c9f06f0 == -1) {
      FUN_145f15852(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x30;
      local_58 = 0x80;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9f0670,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142d2629b);
      _Init_thread_footer(&DAT_14c9f06f0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415953b2 FUN_1415953b2 body=289 status=ok
// SIG undefined FUN_1415953b2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1415953b2(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9ee990) {
    FUN_144b3d300(&DAT_14c9ee990);
    if (DAT_14c9ee990 == -1) {
      FUN_1415954d4();
      FUN_145f15ad4();
      FUN_140db5666(&DAT_14c9ee8e8,0,&DAT_14c9ee880,L"FUpdateCacheForUsedProbesCS",
                    L"/Engine/Private/Lumen/LumenRadianceCacheUpdate.usf",
                    L"UpdateCacheForUsedProbesCS",5,1,FUN_1471df518,FUN_1471df4b8,&LAB_1462d7318,
                    &LAB_1471df4b4,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14c9f0b38);
      _DAT_14c9ee8e8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142d26055);
      _Init_thread_footer(&DAT_14c9ee990);
    }
  }
  return &DAT_14c9ee8e8;
}



// FUNCTION 1415954d4 FUN_1415954d4 body=258 status=ok
// SIG undefined FUN_1415954d4(void)

void FUN_1415954d4(void)

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
              0x110) < DAT_14c9f0bb8) {
    FUN_144b3d300(&DAT_14c9f0bb8);
    if (DAT_14c9f0bb8 == -1) {
      FUN_145f15c1e(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x220;
      local_58 = 0x148;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9f0b38,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142d26307);
      _Init_thread_footer(&DAT_14c9f0bb8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415955d8 FUN_1415955d8 body=289 status=ok
// SIG undefined FUN_1415955d8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1415955d8(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9eed08) {
    FUN_144b3d300(&DAT_14c9eed08);
    if (DAT_14c9eed08 == -1) {
      FUN_1415956fa();
      FUN_145f15ea0();
      FUN_140db5666(&DAT_14c9eec60,0,&DAT_14c9eebf8,L"FAllocateProbeTracesCS",
                    L"/Engine/Private/Lumen/LumenRadianceCacheUpdate.usf",L"AllocateProbeTracesCS",5
                    ,1,FUN_1471df76a,FUN_1471df70a,&LAB_1462d7336,&LAB_1471df706,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14c9f0cd0);
      _DAT_14c9eec60 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142d26079);
      _Init_thread_footer(&DAT_14c9eed08);
    }
  }
  return &DAT_14c9eec60;
}



// FUNCTION 1415956fa FUN_1415956fa body=258 status=ok
// SIG undefined FUN_1415956fa(void)

void FUN_1415956fa(void)

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
              0x110) < DAT_14c9f0d50) {
    FUN_144b3d300(&DAT_14c9f0d50);
    if (DAT_14c9f0d50 == -1) {
      FUN_1415957fe(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x1f0;
      local_58 = 0x1c1;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9f0cd0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142d2632b);
      _Init_thread_footer(&DAT_14c9f0d50);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415957fe FUN_1415957fe body=226 status=ok
// SIG undefined FUN_1415957fe(void)

longlong * FUN_1415957fe(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462d9370;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415958e2 FUN_1415958e2 body=289 status=ok
// SIG undefined FUN_1415958e2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1415958e2(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9ef080) {
    FUN_144b3d300(&DAT_14c9ef080);
    if (DAT_14c9ef080 == -1) {
      FUN_141595a04();
      FUN_145f16188();
      FUN_140db5666(&DAT_14c9eefd8,0,&DAT_14c9eef70,L"FSetupProbeIndirectArgsCS",
                    L"/Engine/Private/Lumen/LumenRadianceCache.usf",L"SetupProbeIndirectArgsCS",5,1,
                    FUN_1471df9bc,FUN_1471df95c,&LAB_1462d7354,&LAB_1471df958,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14c9f0e68);
      _DAT_14c9eefd8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142d2609d);
      _Init_thread_footer(&DAT_14c9ef080);
    }
  }
  return &DAT_14c9eefd8;
}



// FUNCTION 141595a04 FUN_141595a04 body=258 status=ok
// SIG undefined FUN_141595a04(void)

void FUN_141595a04(void)

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
              0x110) < DAT_14c9f0ee8) {
    FUN_144b3d300(&DAT_14c9f0ee8);
    if (DAT_14c9f0ee8 == -1) {
      FUN_145f162d2(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x1d0;
      local_58 = 0x239;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9f0e68,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142d2634f);
      _Init_thread_footer(&DAT_14c9f0ee8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141595b08 FUN_141595b08 body=289 status=ok
// SIG undefined FUN_141595b08(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_141595b08(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9f3048) {
    FUN_144b3d300(&DAT_14c9f3048);
    if (DAT_14c9f3048 == -1) {
      FUN_141595c2a();
      FUN_145f16554();
      FUN_140db5666(&DAT_14c9f2fa0,0,&DAT_14c9f2f38,L"FLumenRadiositySpatialFilterProbeRadiance",
                    L"/Engine/Private/Lumen/Radiosity/LumenRadiosity.usf",
                    L"LumenRadiositySpatialFilterProbeRadiance",5,0xc,FUN_1471ed678,FUN_1471ed618,
                    &LAB_141768f46,&LAB_142d36362,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14c9f62e8)
      ;
      _DAT_14c9f2fa0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142d36365);
      _Init_thread_footer(&DAT_14c9f3048);
    }
  }
  return &DAT_14c9f2fa0;
}



// FUNCTION 141595c2a FUN_141595c2a body=258 status=ok
// SIG undefined FUN_141595c2a(void)

void FUN_141595c2a(void)

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
              0x110) < DAT_14c9f6368) {
    FUN_144b3d300(&DAT_14c9f6368);
    if (DAT_14c9f6368 == -1) {
      FUN_145f1669e(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0xc0;
      local_58 = 0x1d2;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9f62e8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142d58115);
      _Init_thread_footer(&DAT_14c9f6368);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141595d2e FUN_141595d2e body=289 status=ok
// SIG undefined FUN_141595d2e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_141595d2e(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9f42d0) {
    FUN_144b3d300(&DAT_14c9f42d0);
    if (DAT_14c9f42d0 == -1) {
      FUN_141595e50();
      FUN_145f16920();
      FUN_140db5666(&DAT_14c9f4228,0,&DAT_14c9f41c0,L"FLumenReflectionDenoiserTemporalCS",
                    L"/Engine/Private/Lumen/LumenReflectionDenoiserTemporal.usf",
                    L"LumenReflectionDenoiserTemporalCS",5,8,FUN_1471ef782,FUN_1471ef722,
                    FUN_141769038,&LAB_1471ef708,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14c9f6b68);
      _DAT_14c9f4228 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142d404b6);
      _Init_thread_footer(&DAT_14c9f42d0);
    }
  }
  return &DAT_14c9f4228;
}



// FUNCTION 141595e50 FUN_141595e50 body=258 status=ok
// SIG undefined FUN_141595e50(void)

void FUN_141595e50(void)

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
              0x110) < DAT_14c9f6be8) {
    FUN_144b3d300(&DAT_14c9f6be8);
    if (DAT_14c9f6be8 == -1) {
      FUN_141595f54(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x2b0;
      local_58 = 0x326;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9f6b68,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142d5959d);
      _Init_thread_footer(&DAT_14c9f6be8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141595f54 FUN_141595f54 body=226 status=ok
// SIG undefined FUN_141595f54(void)

longlong * FUN_141595f54(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462de5e4;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141596038 FUN_141596038 body=289 status=ok
// SIG undefined FUN_141596038(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_141596038(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9f4520) {
    FUN_144b3d300(&DAT_14c9f4520);
    if (DAT_14c9f4520 == -1) {
      FUN_14159615a();
      FUN_145f16c08();
      FUN_140db5666(&DAT_14c9f4478,0,&DAT_14c9f4410,L"FLumenReflectionDenoiserSpatialCS",
                    L"/Engine/Private/Lumen/LumenReflectionDenoiserSpatial.usf",
                    L"LumenReflectionDenoiserSpatialCS",5,0x10,FUN_1471ef90a,FUN_1471ef8aa,
                    FUN_14176907a,&LAB_142d404ce,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14c9f6d00);
      _DAT_14c9f4478 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142d404e9);
      _Init_thread_footer(&DAT_14c9f4520);
    }
  }
  return &DAT_14c9f4478;
}



// FUNCTION 14159615a FUN_14159615a body=258 status=ok
// SIG undefined FUN_14159615a(void)

void FUN_14159615a(void)

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
              0x110) < DAT_14c9f6d80) {
    FUN_144b3d300(&DAT_14c9f6d80);
    if (DAT_14c9f6d80 == -1) {
      FUN_145f16d52(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x250;
      local_58 = 899;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9f6d00,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142d595c1);
      _Init_thread_footer(&DAT_14c9f6d80);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14159625e FUN_14159625e body=289 status=ok
// SIG undefined FUN_14159625e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14159625e(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9f4b20) {
    FUN_144b3d300(&DAT_14c9f4b20);
    if (DAT_14c9f4b20 == -1) {
      FUN_141596380();
      FUN_145f16fd4();
      FUN_140db5666(&DAT_14c9f4a78,0,&DAT_14c9f4a10,L"FReflectionCompactTracesCS",
                    L"/Engine/Private/Lumen/LumenReflectionTracing.usf",L"ReflectionCompactTracesCS"
                    ,5,0x1e,FUN_1471efc1e,FUN_1471efbbe,&LAB_141769126,&LAB_142d4a420,&LAB_14712ac0c
                    ,&LAB_14712ac08,0xe0,&DAT_14c9f6f20);
      _DAT_14c9f4a78 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142d4a423);
      _Init_thread_footer(&DAT_14c9f4b20);
    }
  }
  return &DAT_14c9f4a78;
}



// FUNCTION 141596380 FUN_141596380 body=258 status=ok
// SIG undefined FUN_141596380(void)

void FUN_141596380(void)

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
              0x110) < DAT_14c9f6fa0) {
    FUN_144b3d300(&DAT_14c9f6fa0);
    if (DAT_14c9f6fa0 == -1) {
      FUN_145f1711e(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x2a0;
      local_58 = 0x140;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9f6f20,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142d595f1);
      _Init_thread_footer(&DAT_14c9f6fa0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141596484 FUN_141596484 body=289 status=ok
// SIG undefined FUN_141596484(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_141596484(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9f8d70) {
    FUN_144b3d300(&DAT_14c9f8d70);
    if (DAT_14c9f8d70 == -1) {
      FUN_1415965a6();
      FUN_145f173a0();
      FUN_140db5666(&DAT_14c9f8cc8,0,&DAT_14c9f8c60,L"FBuildLightTilesCS",
                    L"/Engine/Private/Lumen/LumenSceneDirectLightingCulling.usf",
                    L"BuildLightTilesCS",5,6,FUN_147204bea,FUN_147204b8a,&LAB_1462e166c,
                    &LAB_147204b86,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14c9fdab8);
      _DAT_14c9f8cc8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142d68e2e);
      _Init_thread_footer(&DAT_14c9f8d70);
    }
  }
  return &DAT_14c9f8cc8;
}



// FUNCTION 1415965a6 FUN_1415965a6 body=258 status=ok
// SIG undefined FUN_1415965a6(void)

void FUN_1415965a6(void)

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
              0x110) < DAT_14c9fdb38) {
    FUN_144b3d300(&DAT_14c9fdb38);
    if (DAT_14c9fdb38 == -1) {
      FUN_1415966aa(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x160;
      local_58 = 0x1a7;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9fdab8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142d992db);
      _Init_thread_footer(&DAT_14c9fdb38);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415966aa FUN_1415966aa body=226 status=ok
// SIG undefined FUN_1415966aa(void)

longlong * FUN_1415966aa(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462e1c78;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14159678e FUN_14159678e body=289 status=ok
// SIG undefined FUN_14159678e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14159678e(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9f8fc0) {
    FUN_144b3d300(&DAT_14c9f8fc0);
    if (DAT_14c9f8fc0 == -1) {
      FUN_1415968b0();
      FUN_145f17688();
      FUN_140db5666(&DAT_14c9f8f18,0,&DAT_14c9f8eb0,L"FCompactLightTilesCS",
                    L"/Engine/Private/Lumen/LumenSceneDirectLightingCulling.usf",
                    L"CompactLightTilesCS",5,1,FUN_147204d76,FUN_147204d16,&LAB_1462e1680,
                    &LAB_147204d12,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14c9fdbc8);
      _DAT_14c9f8f18 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142d68e46);
      _Init_thread_footer(&DAT_14c9f8fc0);
    }
  }
  return &DAT_14c9f8f18;
}



// FUNCTION 1415968b0 FUN_1415968b0 body=258 status=ok
// SIG undefined FUN_1415968b0(void)

void FUN_1415968b0(void)

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
              0x110) < DAT_14c9fdc48) {
    FUN_144b3d300(&DAT_14c9fdc48);
    if (DAT_14c9fdc48 == -1) {
      FUN_145f177d2(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x60;
      local_58 = 0x1f8;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9fdbc8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142d992f3);
      _Init_thread_footer(&DAT_14c9fdc48);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415969b4 FUN_1415969b4 body=289 status=ok
// SIG undefined FUN_1415969b4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1415969b4(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9fb250) {
    FUN_144b3d300(&DAT_14c9fb250);
    if (DAT_14c9fb250 == -1) {
      FUN_141596ad6();
      FUN_145f18044();
      FUN_140db5666(&DAT_14c9fb1a8,0,&DAT_14c9fb140,L"FClearCardUpdateContextCS",
                    L"/Engine/Private/Lumen/LumenSceneLighting.usf",L"ClearCardUpdateContextCS",5,1,
                    FUN_147207c8a,FUN_147207c2a,&LAB_1462e1734,&LAB_147207c26,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14c9febb8);
      _DAT_14c9fb1a8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142d7ff43);
      _Init_thread_footer(&DAT_14c9fb250);
    }
  }
  return &DAT_14c9fb1a8;
}



// FUNCTION 141596ad6 FUN_141596ad6 body=258 status=ok
// SIG undefined FUN_141596ad6(void)

void FUN_141596ad6(void)

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
              0x110) < DAT_14c9fec38) {
    FUN_144b3d300(&DAT_14c9fec38);
    if (DAT_14c9fec38 == -1) {
      FUN_145f1818e(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x30;
      local_58 = 299;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9febb8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142d9c53b);
      _Init_thread_footer(&DAT_14c9fec38);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141596bda FUN_141596bda body=289 status=ok
// SIG undefined FUN_141596bda(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_141596bda(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9fb378) {
    FUN_144b3d300(&DAT_14c9fb378);
    if (DAT_14c9fb378 == -1) {
      FUN_141596cfc();
      FUN_145f18410();
      FUN_140db5666(&DAT_14c9fb2d0,0,&DAT_14c9fb268,L"FBuildPageUpdatePriorityHistogramCS",
                    L"/Engine/Private/Lumen/LumenSceneLighting.usf",
                    L"BuildPageUpdatePriorityHistogramCS",5,2,FUN_147207d50,FUN_147207cf0,
                    &LAB_1462e173e,&LAB_147207cec,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14c9fec40)
      ;
      _DAT_14c9fb2d0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142d7ff4f);
      _Init_thread_footer(&DAT_14c9fb378);
    }
  }
  return &DAT_14c9fb2d0;
}



// FUNCTION 141596cfc FUN_141596cfc body=258 status=ok
// SIG undefined FUN_141596cfc(void)

void FUN_141596cfc(void)

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
              0x110) < DAT_14c9fecc0) {
    FUN_144b3d300(&DAT_14c9fecc0);
    if (DAT_14c9fecc0 == -1) {
      FUN_145f1855a(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x80;
      local_58 = 0x14b;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9fec40,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142d9c547);
      _Init_thread_footer(&DAT_14c9fecc0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141596e00 FUN_141596e00 body=289 status=ok
// SIG undefined FUN_141596e00(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_141596e00(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9fb4a0) {
    FUN_144b3d300(&DAT_14c9fb4a0);
    if (DAT_14c9fb4a0 == -1) {
      FUN_141596f22();
      FUN_145f187dc();
      FUN_140db5666(&DAT_14c9fb3f8,0,&DAT_14c9fb390,L"FSelectMaxUpdateBucketCS",
                    L"/Engine/Private/Lumen/LumenSceneLighting.usf",L"SelectMaxUpdateBucketCS",5,1,
                    FUN_147207e16,FUN_147207db6,&LAB_1462e1748,&LAB_147207db2,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14c9fecc8);
      _DAT_14c9fb3f8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142d7ff5b);
      _Init_thread_footer(&DAT_14c9fb4a0);
    }
  }
  return &DAT_14c9fb3f8;
}



// FUNCTION 141596f22 FUN_141596f22 body=258 status=ok
// SIG undefined FUN_141596f22(void)

void FUN_141596f22(void)

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
              0x110) < DAT_14c9fed48) {
    FUN_144b3d300(&DAT_14c9fed48);
    if (DAT_14c9fed48 == -1) {
      FUN_145f18926(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x20;
      local_58 = 0x175;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9fecc8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142d9c553);
      _Init_thread_footer(&DAT_14c9fed48);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141597026 FUN_141597026 body=289 status=ok
// SIG undefined FUN_141597026(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_141597026(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9fd6f8) {
    FUN_144b3d300(&DAT_14c9fd6f8);
    if (DAT_14c9fd6f8 == -1) {
      FUN_141597148();
      FUN_145f18ba8();
      FUN_140db5666(&DAT_14c9fd650,0,&DAT_14c9fd5e8,L"FScreenProbeTemporalReprojectionCS",
                    L"/Engine/Private/Lumen/LumenScreenProbeGather.usf",
                    L"ScreenProbeTemporalReprojectionCS",5,0x20,FUN_1472094f6,FUN_147209496,
                    FUN_14176b8c6,&LAB_147209492,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14c9ff988);
      _DAT_14c9fd650 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142d8cd62);
      _Init_thread_footer(&DAT_14c9fd6f8);
    }
  }
  return &DAT_14c9fd650;
}



// FUNCTION 141597148 FUN_141597148 body=258 status=ok
// SIG undefined FUN_141597148(void)

void FUN_141597148(void)

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
              0x110) < DAT_14c9ffa08) {
    FUN_144b3d300(&DAT_14c9ffa08);
    if (DAT_14c9ffa08 == -1) {
      FUN_14159724c(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 400;
      local_58 = 0x40b;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9ff988,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142d9c70d);
      _Init_thread_footer(&DAT_14c9ffa08);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14159724c FUN_14159724c body=226 status=ok
// SIG undefined FUN_14159724c(void)

longlong * FUN_14159724c(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462e6b32;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141597330 FUN_141597330 body=289 status=ok
// SIG undefined FUN_141597330(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_141597330(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca14048) {
    FUN_144b3d300(&DAT_14ca14048);
    if (DAT_14ca14048 == -1) {
      FUN_141597452();
      FUN_145f19480();
      FUN_140db5666(&DAT_14ca13fa0,0,&DAT_14ca13f38,L"FEmitCustomDepthStencilPS",
                    L"/Engine/Private/Nanite/NaniteExportGBuffer.usf",L"EmitCustomDepthStencilPS",3,
                    4,FUN_147251636,FUN_1472515d6,&LAB_1462eecc2,&LAB_1472515d2,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14ca17468);
      _DAT_14ca13fa0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142e02cbc);
      _Init_thread_footer(&DAT_14ca14048);
    }
  }
  return &DAT_14ca13fa0;
}



// FUNCTION 141597452 FUN_141597452 body=258 status=ok
// SIG undefined FUN_141597452(void)

void FUN_141597452(void)

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
              0x110) < DAT_14ca174e8) {
    FUN_144b3d300(&DAT_14ca174e8);
    if (DAT_14ca174e8 == -1) {
      FUN_145f195ca(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x180;
      local_58 = 0xcf;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca17468,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142e275af);
      _Init_thread_footer(&DAT_14ca174e8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141597556 FUN_141597556 body=289 status=ok
// SIG undefined FUN_141597556(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_141597556(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca14c98) {
    FUN_144b3d300(&DAT_14ca14c98);
    if (DAT_14ca14c98 == -1) {
      FUN_141597678();
      FUN_145f1984c();
      FUN_140db5666(&DAT_14ca14bf0,0,&DAT_14ca14b88,L"FInitInstanceHierarchyArgs_CS",
                    L"/Engine/Private/Nanite/NaniteInstanceHierarchyCulling.usf",L"InitArgs",5,2,
                    FUN_14725205e,FUN_147251ffe,&LAB_1462eecea,&LAB_147251ffa,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14ca179b8);
      _DAT_14ca14bf0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142e0a31e);
      _Init_thread_footer(&DAT_14ca14c98);
    }
  }
  return &DAT_14ca14bf0;
}



// FUNCTION 141597678 FUN_141597678 body=258 status=ok
// SIG undefined FUN_141597678(void)

void FUN_141597678(void)

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
              0x110) < DAT_14ca17a38) {
    FUN_144b3d300(&DAT_14ca17a38);
    if (DAT_14ca17a38 == -1) {
      FUN_145f19996(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x50;
      local_58 = 0x311;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca179b8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142e27633);
      _Init_thread_footer(&DAT_14ca17a38);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14159777c FUN_14159777c body=289 status=ok
// SIG undefined FUN_14159777c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14159777c(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca1c9f8) {
    FUN_144b3d300(&DAT_14ca1c9f8);
    if (DAT_14ca1c9f8 == -1) {
      FUN_14159789e();
      FUN_145f19c18();
      FUN_140db5666(&DAT_14ca1c950,0,&DAT_14ca1c8e8,L"FOITSortTriangleIndex_ScanCS",
                    L"/Engine/Private/OIT/OITSorting.usf",L"MainCS",5,2,FUN_147270faa,FUN_147270f4a,
                    &LAB_14588876a,&LAB_147270f3a,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14ca215e0)
      ;
      _DAT_14ca1c950 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142e6cd9f);
      _Init_thread_footer(&DAT_14ca1c9f8);
    }
  }
  return &DAT_14ca1c950;
}



// FUNCTION 14159789e FUN_14159789e body=258 status=ok
// SIG undefined FUN_14159789e(void)

void FUN_14159789e(void)

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
              0x110) < DAT_14ca21660) {
    FUN_144b3d300(&DAT_14ca21660);
    if (DAT_14ca21660 == -1) {
      FUN_1415979a2(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x180;
      local_58 = 0x1aa;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca215e0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142e941c8);
      _Init_thread_footer(&DAT_14ca21660);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415979a2 FUN_1415979a2 body=226 status=ok
// SIG undefined FUN_1415979a2(void)

longlong * FUN_1415979a2(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462f5588;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141597a86 FUN_141597a86 body=226 status=ok
// SIG undefined FUN_141597a86(void)

longlong * FUN_141597a86(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_146303c94;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141597b6a FUN_141597b6a body=289 status=ok
// SIG undefined FUN_141597b6a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_141597b6a(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca42bc8) {
    FUN_144b3d300(&DAT_14ca42bc8);
    if (DAT_14ca42bc8 == -1) {
      FUN_141597c8c();
      FUN_145f1b5dc();
      FUN_140db5666(&DAT_14ca42b20,0,&DAT_14ca42ab8,L"FDownsampleCubeFaceCS",
                    L"/Engine/Private/ReflectionEnvironmentShaders.usf",L"DownsampleCS",5,1,
                    FUN_1472c71ce,FUN_1472c716e,&LAB_1472c7156,&LAB_1472c7152,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14ca44078);
      _DAT_14ca42b20 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142f8f4f5);
      _Init_thread_footer(&DAT_14ca42bc8);
    }
  }
  return &DAT_14ca42b20;
}



// FUNCTION 141597c8c FUN_141597c8c body=258 status=ok
// SIG undefined FUN_141597c8c(void)

void FUN_141597c8c(void)

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
              0x110) < DAT_14ca440f8) {
    FUN_144b3d300(&DAT_14ca440f8);
    if (DAT_14ca440f8 == -1) {
      FUN_145f1b726(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x30;
      local_58 = 0x4e;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca44078,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142fb2543);
      _Init_thread_footer(&DAT_14ca440f8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141597d90 FUN_141597d90 body=289 status=ok
// SIG undefined FUN_141597d90(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_141597d90(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca4b8a8) {
    FUN_144b3d300(&DAT_14ca4b8a8);
    if (DAT_14ca4b8a8 == -1) {
      FUN_141597eb2();
      FUN_145f1b9a8();
      FUN_140db5666(&DAT_14ca4b800,0,&DAT_14ca4b798,L"FDownsampleDepthPS",
                    L"/Engine/Private/DownsampleDepthPixelShader.usf",L"Main",3,2,FUN_1472e3a78,
                    FUN_1472e3a18,&LAB_1472e3a00,&LAB_1472e39fc,&LAB_14712ac0c,&LAB_14712ac08,0xe0,
                    &DAT_14ca4bcd0);
      _DAT_14ca4b800 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_14301975f);
      _Init_thread_footer(&DAT_14ca4b8a8);
    }
  }
  return &DAT_14ca4b800;
}



// FUNCTION 141597eb2 FUN_141597eb2 body=258 status=ok
// SIG undefined FUN_141597eb2(void)

void FUN_141597eb2(void)

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
              0x110) < DAT_14ca4bd50) {
    FUN_144b3d300(&DAT_14ca4bd50);
    if (DAT_14ca4bd50 == -1) {
      FUN_145f1baf2(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x160;
      local_58 = 0x193;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca4bcd0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_143022e12);
      _Init_thread_footer(&DAT_14ca4bd50);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141597fb6 FUN_141597fb6 body=289 status=ok
// SIG undefined FUN_141597fb6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_141597fb6(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca5c218) {
    FUN_144b3d300(&DAT_14ca5c218);
    if (DAT_14ca5c218 == -1) {
      FUN_1415980d8();
      FUN_145f1c954();
      FUN_140db5666(&DAT_14ca5c170,0,&DAT_14ca5c108,L"FWaterTileCategorisationMarkCS",
                    L"/Engine/Private/SingleLayerWaterComposite.usf",
                    L"WaterTileCatergorisationMarkCS",5,4,FUN_147315670,FUN_147315610,&LAB_1458264e6
                    ,&LAB_14731560c,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14ca5e968);
      _DAT_14ca5c170 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_143088ffb);
      _Init_thread_footer(&DAT_14ca5c218);
    }
  }
  return &DAT_14ca5c170;
}



// FUNCTION 1415980d8 FUN_1415980d8 body=258 status=ok
// SIG undefined FUN_1415980d8(void)

void FUN_1415980d8(void)

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
              0x110) < DAT_14ca5e9e8) {
    FUN_144b3d300(&DAT_14ca5e9e8);
    if (DAT_14ca5e9e8 == -1) {
      FUN_145f1ca9e(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x120;
      local_58 = 0x157;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca5e968,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_14309d735);
      _Init_thread_footer(&DAT_14ca5e9e8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415981dc FUN_1415981dc body=289 status=ok
// SIG undefined FUN_1415981dc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1415981dc(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca5ce28) {
    FUN_144b3d300(&DAT_14ca5ce28);
    if (DAT_14ca5ce28 == -1) {
      FUN_1415982fe();
      FUN_145f1cd20();
      FUN_140db5666(&DAT_14ca5cd80,0,&DAT_14ca5cd18,L"FRenderSkyAtmospherePS",
                    L"/Engine/Private/SkyAtmosphere.usf",L"RenderSkyAtmosphereRayMarchingPS",3,0x400
                    ,FUN_147315c64,FUN_147315c04,FUN_1430913b2,&LAB_147315c00,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14ca5ec98);
      _DAT_14ca5cd80 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1430914bd);
      _Init_thread_footer(&DAT_14ca5ce28);
    }
  }
  return &DAT_14ca5cd80;
}



// FUNCTION 1415982fe FUN_1415982fe body=258 status=ok
// SIG undefined FUN_1415982fe(void)

void FUN_1415982fe(void)

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
              0x110) < DAT_14ca5ed18) {
    FUN_144b3d300(&DAT_14ca5ed18);
    if (DAT_14ca5ed18 == -1) {
      FUN_141598402(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x260;
      local_58 = 0x2a3;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca5ec98,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_14309e803);
      _Init_thread_footer(&DAT_14ca5ed18);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141598402 FUN_141598402 body=226 status=ok
// SIG undefined FUN_141598402(void)

longlong * FUN_141598402(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_145d72fde;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415984e6 FUN_1415984e6 body=289 status=ok
// SIG undefined FUN_1415984e6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1415984e6(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca611f8) {
    FUN_144b3d300(&DAT_14ca611f8);
    if (DAT_14ca611f8 == -1) {
      FUN_141598608();
      FUN_145f1d5f8();
      FUN_140db5666(&DAT_14ca61150,0,&DAT_14ca610e8,L"FTranslucentLightingInjectBatchPS",
                    L"/Engine/Private/TranslucentLightInjectionShaders.usf",L"InjectBatchMainPS",3,2
                    ,FUN_147322d18,FUN_147322cb8,&LAB_145ae47ce,&LAB_147322cb4,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14ca62b20);
      _DAT_14ca61150 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1430ac46d);
      _Init_thread_footer(&DAT_14ca611f8);
    }
  }
  return &DAT_14ca61150;
}



// FUNCTION 141598608 FUN_141598608 body=258 status=ok
// SIG undefined FUN_141598608(void)

void FUN_141598608(void)

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
              0x110) < DAT_14ca62ba0) {
    FUN_144b3d300(&DAT_14ca62ba0);
    if (DAT_14ca62ba0 == -1) {
      FUN_145f1d742(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x140;
      local_58 = 0x313;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca62b20,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1430bd5c3);
      _Init_thread_footer(&DAT_14ca62ba0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14159870c FUN_14159870c body=289 status=ok
// SIG undefined FUN_14159870c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14159870c(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca61ab0) {
    FUN_144b3d300(&DAT_14ca61ab0);
    if (DAT_14ca61ab0 == -1) {
      FUN_14159882e();
      FUN_145f1d9c4();
      FUN_140db5666(&DAT_14ca61a08,0,&DAT_14ca619a0,L"FComposeSeparateTranslucencyPS",
                    L"/Engine/Private/ComposeSeparateTranslucency.usf",L"MainPS",3,4,FUN_147323248,
                    FUN_1473231e8,&LAB_1473231d0,&LAB_1473231cc,&LAB_14712ac0c,&LAB_14712ac08,0xe0,
                    &DAT_14ca62e50);
      _DAT_14ca61a08 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1430b1d11);
      _Init_thread_footer(&DAT_14ca61ab0);
    }
  }
  return &DAT_14ca61a08;
}



// FUNCTION 14159882e FUN_14159882e body=258 status=ok
// SIG undefined FUN_14159882e(void)

void FUN_14159882e(void)

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
              0x110) < DAT_14ca62ed0) {
    FUN_144b3d300(&DAT_14ca62ed0);
    if (DAT_14ca62ed0 == -1) {
      FUN_141598932(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x1f0;
      local_58 = 0x255;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca62e50,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1430bde70);
      _Init_thread_footer(&DAT_14ca62ed0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141598932 FUN_141598932 body=226 status=ok
// SIG undefined FUN_141598932(void)

longlong * FUN_141598932(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_14630f562;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141598a16 FUN_141598a16 body=289 status=ok
// SIG undefined FUN_141598a16(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_141598a16(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca64d70) {
    FUN_144b3d300(&DAT_14ca64d70);
    if (DAT_14ca64d70 == -1) {
      FUN_141598b38();
      FUN_145f1dcac();
      FUN_140db5666(&DAT_14ca64cc8,0,&DAT_14ca64c60,L"FGenerateHierarchicalPageFlagsCS",
                    L"/Engine/Private/VirtualShadowMaps/VirtualShadowMapPageManagement.usf",
                    L"GenerateHierarchicalPageFlags",5,1,FUN_14732b248,FUN_14732b1e8,&LAB_14732b1b0,
                    &LAB_14732b1ac,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14ca677e8);
      _DAT_14ca64cc8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1430ce8c8);
      _Init_thread_footer(&DAT_14ca64d70);
    }
  }
  return &DAT_14ca64cc8;
}



// FUNCTION 141598b38 FUN_141598b38 body=258 status=ok
// SIG undefined FUN_141598b38(void)

void FUN_141598b38(void)

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
              0x110) < DAT_14ca67868) {
    FUN_144b3d300(&DAT_14ca67868);
    if (DAT_14ca67868 == -1) {
      FUN_145f1ddf6(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x30;
      local_58 = 0x3e4;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca677e8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1430e5457);
      _Init_thread_footer(&DAT_14ca67868);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141598c3c FUN_141598c3c body=289 status=ok
// SIG undefined FUN_141598c3c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_141598c3c(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca65900) {
    FUN_144b3d300(&DAT_14ca65900);
    if (DAT_14ca65900 == -1) {
      FUN_141598d5e();
      FUN_145f1e078();
      FUN_140db5666(&DAT_14ca65858,0,&DAT_14ca657f0,L"FSelectPagesToMergeCS",
                    L"/Engine/Private/VirtualShadowMaps/VirtualShadowMapPhysicalPageManagement.usf",
                    L"SelectPagesToMergeCS",5,2,FUN_14732bd56,FUN_14732bcf6,&LAB_14732bcbe,
                    &LAB_14732bcba,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14ca67dc0);
      _DAT_14ca65858 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1430ce940);
      _Init_thread_footer(&DAT_14ca65900);
    }
  }
  return &DAT_14ca65858;
}



// FUNCTION 141598d5e FUN_141598d5e body=258 status=ok
// SIG undefined FUN_141598d5e(void)

void FUN_141598d5e(void)

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
              0x110) < DAT_14ca67e40) {
    FUN_144b3d300(&DAT_14ca67e40);
    if (DAT_14ca67e40 == -1) {
      FUN_145f1e1c2(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x30;
      local_58 = 0x542;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca67dc0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1430e54db);
      _Init_thread_footer(&DAT_14ca67e40);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141598e62 FUN_141598e62 body=289 status=ok
// SIG undefined FUN_141598e62(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_141598e62(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca6b740) {
    FUN_144b3d300(&DAT_14ca6b740);
    if (DAT_14ca6b740 == -1) {
      FUN_141598f84();
      FUN_145f1e444();
      FUN_140db5666(&DAT_14ca6b698,0,&DAT_14ca6b630,L"FVolumetricFogLightScatteringCS",
                    L"/Engine/Private/VolumetricFog.usf",L"LightScatteringCS",5,0x400,FUN_147334efa,
                    FUN_147334e9a,FUN_141786bd2,&LAB_140190dfc,&LAB_14712ac0c,&LAB_14712ac08,0xe0,
                    &DAT_14ca6ce88);
      _DAT_14ca6b698 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_143102cdc);
      _Init_thread_footer(&DAT_14ca6b740);
    }
  }
  return &DAT_14ca6b698;
}



// FUNCTION 141598f84 FUN_141598f84 body=258 status=ok
// SIG undefined FUN_141598f84(void)

void FUN_141598f84(void)

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
              0x110) < DAT_14ca6cf08) {
    FUN_144b3d300(&DAT_14ca6cf08);
    if (DAT_14ca6cf08 == -1) {
      FUN_141599088(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x5c0;
      local_58 = 0x3d6;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca6ce88,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_14310e77f);
      _Init_thread_footer(&DAT_14ca6cf08);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141599088 FUN_141599088 body=226 status=ok
// SIG undefined FUN_141599088(void)

longlong * FUN_141599088(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1463155d0;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14159916c FUN_14159916c body=289 status=ok
// SIG undefined FUN_14159916c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14159916c(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca6c498) {
    FUN_144b3d300(&DAT_14ca6c498);
    if (DAT_14ca6c498 == -1) {
      FUN_14159928e();
      FUN_145f1e72c();
      FUN_140db5666(&DAT_14ca6c3f0,0,&DAT_14ca6c388,L"FReconstructVolumetricRenderTargetPS",
                    L"/Engine/Private/VolumetricRenderTarget.usf",
                    L"ReconstructVolumetricRenderTargetPS",3,8,FUN_1473356d2,FUN_147335672,
                    &LAB_14733565a,&LAB_147335656,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14ca6d020)
      ;
      _DAT_14ca6c3f0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_14310ba7d);
      _Init_thread_footer(&DAT_14ca6c498);
    }
  }
  return &DAT_14ca6c3f0;
}



// FUNCTION 14159928e FUN_14159928e body=258 status=ok
// SIG undefined FUN_14159928e(void)

void FUN_14159928e(void)

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
              0x110) < DAT_14ca6d0a0) {
    FUN_144b3d300(&DAT_14ca6d0a0);
    if (DAT_14ca6d0a0 == -1) {
      FUN_141599392(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x1e0;
      local_58 = 0x220;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca6d020,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_14310eae0);
      _Init_thread_footer(&DAT_14ca6d0a0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141599392 FUN_141599392 body=226 status=ok
// SIG undefined FUN_141599392(void)

longlong * FUN_141599392(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_146315ed8;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141599476 FUN_141599476 body=289 status=ok
// SIG undefined FUN_141599476(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_141599476(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca95b98) {
    FUN_144b3d300(&DAT_14ca95b98);
    if (DAT_14ca95b98 == -1) {
      FUN_141599598();
      FUN_145f1ea14();
      FUN_140db5666(&DAT_14ca95af0,0,&DAT_14ca95a88,L"FInitIndirectArgs1DCS",
                    L"/Engine/Private/Tools/SetupIndirectArgs.usf",L"InitIndirectArgs1DCS",5,1,
                    FUN_14742bcb8,FUN_14742bc58,&LAB_14742bc54,&LAB_14742bc50,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14ca95fe0);
      _DAT_14ca95af0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_143213b76);
      _Init_thread_footer(&DAT_14ca95b98);
    }
  }
  return &DAT_14ca95af0;
}



// FUNCTION 141599598 FUN_141599598 body=258 status=ok
// SIG undefined FUN_141599598(void)

void FUN_141599598(void)

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
              0x110) < DAT_14ca96060) {
    FUN_144b3d300(&DAT_14ca96060);
    if (DAT_14ca96060 == -1) {
      FUN_145f1eb5e(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x20;
      local_58 = 0x354;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca95fe0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_143214a98);
      _Init_thread_footer(&DAT_14ca96060);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14159969c FUN_14159969c body=289 status=ok
// SIG undefined FUN_14159969c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14159969c(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb09590) {
    FUN_144b3d300(&DAT_14cb09590);
    if (DAT_14cb09590 == -1) {
      FUN_1415997be();
      FUN_145f1ede0();
      FUN_140db5666(&DAT_14cb094e8,0,&DAT_14cb09480,L"FSparseVolumeTextureUpdateFromSparseBufferCS",
                    L"/Engine/Private/SparseVolumeTexture/UpdateSparseVolumeTexture.usf",
                    L"SparseVolumeTextureUpdateFromSparseBufferCS",5,3,FUN_147d4cc78,FUN_147d4cc18,
                    &LAB_147d4cc14,&LAB_147d4cc10,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14cb09bb0)
      ;
      _DAT_14cb094e8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_14370bc82);
      _Init_thread_footer(&DAT_14cb09590);
    }
  }
  return &DAT_14cb094e8;
}



// FUNCTION 1415997be FUN_1415997be body=258 status=ok
// SIG undefined FUN_1415997be(void)

void FUN_1415997be(void)

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
              0x110) < DAT_14cb09c30) {
    FUN_144b3d300(&DAT_14cb09c30);
    if (DAT_14cb09c30 == -1) {
      FUN_1415998c2(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x80;
      local_58 = 0x1b;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cb09bb0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_143715797);
      _Init_thread_footer(&DAT_14cb09c30);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415998c2 FUN_1415998c2 body=226 status=ok
// SIG undefined FUN_1415998c2(void)

longlong * FUN_1415998c2(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_146405aea;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415999a6 FUN_1415999a6 body=289 status=ok
// SIG undefined FUN_1415999a6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1415999a6(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9f8c48) {
    FUN_144b3d300(&DAT_14c9f8c48);
    if (DAT_14c9f8c48 == -1) {
      FUN_141599ac8();
      FUN_145f20cc8();
      FUN_140db5666(&DAT_14c9f8ba0,0,&DAT_14c9f8b38,L"FCalculateCardTileDepthRangesCS",
                    L"/Engine/Private/Lumen/LumenSceneDirectLightingCulling.usf",
                    L"CalculateCardTileDepthRangesCS",5,1,FUN_147204b24,FUN_147204ac4,&LAB_1462e1662
                    ,&LAB_147204ac0,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14c9fda30);
      _DAT_14c9f8ba0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142d68e22);
      _Init_thread_footer(&DAT_14c9f8c48);
    }
  }
  return &DAT_14c9f8ba0;
}



// FUNCTION 141599ac8 FUN_141599ac8 body=258 status=ok
// SIG undefined FUN_141599ac8(void)

void FUN_141599ac8(void)

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
              0x110) < DAT_14c9fdab0) {
    FUN_144b3d300(&DAT_14c9fdab0);
    if (DAT_14c9fdab0 == -1) {
      FUN_145f20e12(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x50;
      local_58 = 0x184;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9fda30,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142d992cf);
      _Init_thread_footer(&DAT_14c9fdab0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141599bcc FUN_141599bcc body=289 status=ok
// SIG undefined FUN_141599bcc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_141599bcc(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca65a28) {
    FUN_144b3d300(&DAT_14ca65a28);
    if (DAT_14ca65a28 == -1) {
      FUN_141599cee();
      FUN_145f26156();
      FUN_140db5666(&DAT_14ca65980,0,&DAT_14ca65918,L"FMergeStaticPhysicalPagesIndirectCS",
                    L"/Engine/Private/VirtualShadowMaps/VirtualShadowMapPhysicalPageManagement.usf",
                    L"MergeStaticPhysicalPagesIndirectCS",5,1,FUN_14732be54,FUN_14732bdf4,
                    &LAB_14732bdbc,&LAB_14732bdb8,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14ca67e48)
      ;
      _DAT_14ca65980 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1430ce94c);
      _Init_thread_footer(&DAT_14ca65a28);
    }
  }
  return &DAT_14ca65980;
}



// FUNCTION 141599cee FUN_141599cee body=258 status=ok
// SIG undefined FUN_141599cee(void)

void FUN_141599cee(void)

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
              0x110) < DAT_14ca67ec8) {
    FUN_144b3d300(&DAT_14ca67ec8);
    if (DAT_14ca67ec8 == -1) {
      FUN_145f262a0(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x30;
      local_58 = 0x551;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca67e48,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1430e54e7);
      _Init_thread_footer(&DAT_14ca67ec8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141599df2 FUN_141599df2 body=212 status=ok
// SIG undefined FUN_141599df2(void)

void FUN_141599df2(longlong *param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  
  if ((char)param_1[0x83] != '\0') {
    return;
  }
  if (param_1[6] != 0) {
    lVar2 = *(longlong *)(param_1[6] + 0x2a0);
    if ((lVar2 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar2);
    }
    else if (lVar2 == 0) goto LAB_141599e42;
    plVar3 = *(longlong **)(lVar2 + 0x118);
    if (plVar3 != (longlong *)0x0) {
      iVar6 = (int)plVar3[1];
      do {
        if (iVar6 == 0) goto LAB_141599e42;
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
      if ((*(longlong *)(lVar2 + 0x110) != 0) &&
         (plVar4 = *(longlong **)(*(longlong *)(lVar2 + 0x110) + 0x510), plVar4 != (longlong *)0x0))
      {
        (**(code **)(*plVar4 + 0x58))();
      }
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
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
  }
LAB_141599e42:
  FUN_14627ee74(DAT_14c98e618,2);
  (**(code **)(*param_1 + 0x588))(param_1);
  FUN_1415aa5bc(param_1);
  return;
}



// FUNCTION 141599ec6 FUN_141599ec6 body=289 status=ok
// SIG undefined FUN_141599ec6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_141599ec6(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9c6250) {
    FUN_144b3d300(&DAT_14c9c6250);
    if (DAT_14c9c6250 == -1) {
      FUN_141599fe8();
      FUN_145f282f0();
      FUN_140db5666(&DAT_14c9c61a8,0,&DAT_14c9c6140,L"FCullObjectsForViewCS",
                    L"/Engine/Private/DistanceFieldObjectCulling.usf",L"CullObjectsForViewCS",5,1,
                    FUN_14714ec94,FUN_14714ec34,&LAB_1462bdc48,&LAB_14714ec30,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14c9c8388);
      _DAT_14c9c61a8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142bd62ed);
      _Init_thread_footer(&DAT_14c9c6250);
    }
  }
  return &DAT_14c9c61a8;
}



// FUNCTION 141599fe8 FUN_141599fe8 body=258 status=ok
// SIG undefined FUN_141599fe8(void)

void FUN_141599fe8(void)

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
              0x110) < DAT_14c9c8408) {
    FUN_144b3d300(&DAT_14c9c8408);
    if (DAT_14c9c8408 == -1) {
      FUN_145f2843a(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0xe0;
      local_58 = 0x2e;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9c8388,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142be7676);
      _Init_thread_footer(&DAT_14c9c8408);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14159a0ec FUN_14159a0ec body=226 status=ok
// SIG undefined FUN_14159a0ec(void)

longlong * FUN_14159a0ec(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462cbb98;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14159a1d0 FUN_14159a1d0 body=289 status=ok
// SIG undefined FUN_14159a1d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14159a1d0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9f3f58) {
    FUN_144b3d300(&DAT_14c9f3f58);
    if (DAT_14c9f3f58 == -1) {
      FUN_14159a2f2();
      FUN_145f2e51c();
      FUN_140db5666(&DAT_14c9f3eb0,0,&DAT_14c9f3e48,L"FReflectionTileClassificationBuildListsCS",
                    L"/Engine/Private/Lumen/LumenReflections.usf",
                    L"ReflectionTileClassificationBuildListsCS",5,4,FUN_1471ef51e,FUN_1471ef4be,
                    FUN_1462db488,&LAB_1471ef4ba,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14c9f69d0);
      _DAT_14c9f3eb0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142d3fdc1);
      _Init_thread_footer(&DAT_14c9f3f58);
    }
  }
  return &DAT_14c9f3eb0;
}



// FUNCTION 14159a2f2 FUN_14159a2f2 body=258 status=ok
// SIG undefined FUN_14159a2f2(void)

void FUN_14159a2f2(void)

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
              0x110) < DAT_14c9f6a50) {
    FUN_144b3d300(&DAT_14c9f6a50);
    if (DAT_14c9f6a50 == -1) {
      FUN_145f2e666(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x170;
      local_58 = 0x1a6;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9f69d0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142d58d31);
      _Init_thread_footer(&DAT_14c9f6a50);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14159a3f6 FUN_14159a3f6 body=289 status=ok
// SIG undefined FUN_14159a3f6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14159a3f6(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9f4080) {
    FUN_144b3d300(&DAT_14c9f4080);
    if (DAT_14c9f4080 == -1) {
      FUN_14159a518();
      FUN_145f2e8ec();
      FUN_140db5666(&DAT_14c9f3fd8,0,&DAT_14c9f3f70,L"FReflectionGenerateRaysCS",
                    L"/Engine/Private/Lumen/LumenReflections.usf",L"ReflectionGenerateRaysCS",5,8,
                    FUN_1471ef5e4,FUN_1471ef584,FUN_141768fb4,&LAB_1471ef580,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14c9f6a58);
      _DAT_14c9f3fd8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142d3fdcd);
      _Init_thread_footer(&DAT_14c9f4080);
    }
  }
  return &DAT_14c9f3fd8;
}



// FUNCTION 14159a518 FUN_14159a518 body=258 status=ok
// SIG undefined FUN_14159a518(void)

void FUN_14159a518(void)

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
              0x110) < DAT_14c9f6ad8) {
    FUN_144b3d300(&DAT_14c9f6ad8);
    if (DAT_14c9f6ad8 == -1) {
      FUN_145f2ea36(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x340;
      local_58 = 0x1d7;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9f6a58,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142d58d3d);
      _Init_thread_footer(&DAT_14c9f6ad8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14159a61c FUN_14159a61c body=226 status=ok
// SIG undefined FUN_14159a61c(void)

longlong * FUN_14159a61c(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462e03a6;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14159a700 FUN_14159a700 body=289 status=ok
// SIG undefined FUN_14159a700(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14159a700(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca648d0) {
    FUN_144b3d300(&DAT_14ca648d0);
    if (DAT_14ca648d0 == -1) {
      FUN_14159a822();
      FUN_145f362e8();
      FUN_140db5666(&DAT_14ca64828,0,&DAT_14ca647c0,L"FPruneLightGridCS",
                    L"/Engine/Private/VirtualShadowMaps/VirtualShadowMapPageMarking.usf",
                    L"PruneLightGridCS",5,1,FUN_14732ae88,FUN_14732ae28,&LAB_14732adf0,
                    &LAB_14732adec,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14ca674b8);
      _DAT_14ca64828 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1430ce81f);
      _Init_thread_footer(&DAT_14ca648d0);
    }
  }
  return &DAT_14ca64828;
}



// FUNCTION 14159a822 FUN_14159a822 body=258 status=ok
// SIG undefined FUN_14159a822(void)

void FUN_14159a822(void)

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
              0x110) < DAT_14ca67538) {
    FUN_144b3d300(&DAT_14ca67538);
    if (DAT_14ca67538 == -1) {
      FUN_145f36432(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x50;
      local_58 = 0x373;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca674b8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1430e540f);
      _Init_thread_footer(&DAT_14ca67538);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14159a926 FUN_14159a926 body=289 status=ok
// SIG undefined FUN_14159a926(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14159a926(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca6b300) {
    FUN_144b3d300(&DAT_14ca6b300);
    if (DAT_14ca6b300 == -1) {
      FUN_14159aa48();
      FUN_145f36cac();
      FUN_140db5666(&DAT_14ca6b258,0,&DAT_14ca6b1f0,L"FInjectShadowedLocalLightPS",
                    L"/Engine/Private/VolumetricFog.usf",L"InjectShadowedLocalLightPS",3,0x80,
                    FUN_147334a5e,FUN_1473349fe,&LAB_1431028d6,&LAB_140d12aae,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14ca6cc68);
      _DAT_14ca6b258 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1431028d9);
      _Init_thread_footer(&DAT_14ca6b300);
    }
  }
  return &DAT_14ca6b258;
}



// FUNCTION 14159aa48 FUN_14159aa48 body=258 status=ok
// SIG undefined FUN_14159aa48(void)

void FUN_14159aa48(void)

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
              0x110) < DAT_14ca6cce8) {
    FUN_144b3d300(&DAT_14ca6cce8);
    if (DAT_14ca6cce8 == -1) {
      FUN_145f36df6(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x5d0;
      local_58 = 0x15a;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca6cc68,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_14310e74f);
      _Init_thread_footer(&DAT_14ca6cce8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14159ab4c FUN_14159ab4c body=226 status=ok
// SIG undefined FUN_14159ab4c(void)

longlong * FUN_14159ab4c(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_14645f99c;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14159ac30 FUN_14159ac30 body=287 status=ok
// SIG undefined FUN_14159ac30(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14159ac30(void)

{
  undefined8 uVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb2f240) {
    FUN_144b3d300(&DAT_14cb2f240);
    if (DAT_14cb2f240 == -1) {
      uVar1 = FUN_14159ad50();
      FUN_145f39350();
      FUN_140db5666(&DAT_14cb2f198,0,&DAT_14cb2f130,L"FNiagaraRibbonVertexReductionFinalizeCS",
                    L"/Plugin/FX/Niagara/Private/Ribbons/NiagaraRibbonVertexReductionFinalization.usf"
                    ,L"OutputRibbonStats",5,0x20,FUN_14804d7c2,FUN_14804d768,&LAB_1438fa1ac,
                    &LAB_1438fa1a8,&LAB_14712ac0c,&LAB_14712ac08,0xe0,uVar1);
      _DAT_14cb2f198 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1438fa1af);
      _Init_thread_footer(&DAT_14cb2f240);
    }
  }
  return &DAT_14cb2f198;
}



// FUNCTION 14159ad50 FUN_14159ad50 body=265 status=ok
// SIG undefined FUN_14159ad50(void)

undefined * FUN_14159ad50(void)

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
              0x110) < DAT_14cb33cd0) {
    FUN_144b3d300(&DAT_14cb33cd0);
    if (DAT_14cb33cd0 == -1) {
      FUN_145f3949a(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FNiagaraRibbonVertexReductionFinalizationParameters";
      local_38 = 0;
      local_50 = 0xe0;
      local_58 = 0xa2;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cb33c50,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1438fb748);
      _Init_thread_footer(&DAT_14cb33cd0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14cb33c50;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14159ae5a FUN_14159ae5a body=226 status=ok
// SIG undefined FUN_14159ae5a(void)

longlong * FUN_14159ae5a(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_14667ae8c;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14159af3e FUN_14159af3e body=262 status=ok
// SIG undefined FUN_14159af3e(void)

void FUN_14159af3e(longlong param_1,undefined8 param_2,int *param_3)

{
  longlong lVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  longlong local_48;
  longlong *local_40;
  longlong local_38;
  undefined4 *local_30;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = param_1 + 0x38;
  FUN_14131d034(*(undefined8 *)(param_1 + 0x20),&local_48,lVar1);
  if (*param_3 == 0) {
    local_30 = &local_4c;
    local_4c = 2;
    local_38 = *(longlong *)(param_1 + 0x28) + 0x30;
    FUN_145ca1206(local_48 + 0x10,local_24);
    FUN_145f836a4(*(undefined8 *)(param_1 + 0x20),lVar1);
    FUN_143f460d4(*(longlong *)(param_1 + 0x20),
                  *(undefined4 *)(*(longlong *)(param_1 + 0x28) + 0x30),
                  *(undefined1 *)(*(longlong *)(param_1 + 0x20) + 0x39));
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 1;
    FUN_143f46faa(param_1);
  }
  else {
    *(undefined4 *)(param_1 + 0x58) = 4;
    if ((*(int *)(param_1 + 0x18) != 0) &&
       (plVar3 = *(longlong **)(param_1 + 0x10), plVar3 != (longlong *)0x0)) {
      (**(code **)(*plVar3 + 0x60))
                (plVar3,*(undefined4 *)(*(longlong *)(param_1 + 0x28) + 0x30),lVar1,0);
    }
  }
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_40 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
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
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14159b046 thunk_FUN_164c294b9 body=158 status=ok
// SIG undefined thunk_FUN_164c294b9(void)

/* WARNING: Removing unreachable block (ram,0x000164c29509) */

undefined8 thunk_FUN_164c294b9(void)

{
  undefined8 in_RAX;
  
  return in_RAX;
}



// FUNCTION 14159b2bc FUN_14159b2bc body=226 status=ok
// SIG undefined FUN_14159b2bc(void)

longlong * FUN_14159b2bc(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462b7900;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14159b3a0 FUN_14159b3a0 body=289 status=ok
// SIG undefined FUN_14159b3a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14159b3a0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9b6ea0) {
    FUN_144b3d300(&DAT_14c9b6ea0);
    if (DAT_14c9b6ea0 == -1) {
      FUN_14159b4c2();
      FUN_145f3d0e0();
      FUN_140db5666(&DAT_14c9b6df8,0,&DAT_14c9b6d90,L"FAmbientOcclusionSetupPS",
                    L"/Engine/Private/PostProcessAmbientOcclusion.usf",L"MainSetupPS",3,1,
                    FUN_147134e0c,FUN_147134dac,&LAB_147134d94,&LAB_147134d90,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14c9b83e8);
      _DAT_14c9b6df8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142b8a92c);
      _Init_thread_footer(&DAT_14c9b6ea0);
    }
  }
  return &DAT_14c9b6df8;
}



// FUNCTION 14159b4c2 FUN_14159b4c2 body=258 status=ok
// SIG undefined FUN_14159b4c2(void)

void FUN_14159b4c2(void)

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
              0x110) < DAT_14c9b8468) {
    FUN_144b3d300(&DAT_14c9b8468);
    if (DAT_14c9b8468 == -1) {
      FUN_145f3d22a(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x270;
      local_58 = 0x207;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9b83e8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142b908c5);
      _Init_thread_footer(&DAT_14c9b8468);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14159b5c6 FUN_14159b5c6 body=289 status=ok
// SIG undefined FUN_14159b5c6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14159b5c6(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9c6a08) {
    FUN_144b3d300(&DAT_14c9c6a08);
    if (DAT_14c9c6a08 == -1) {
      FUN_14159b6e8();
      FUN_145f3e694();
      FUN_140db5666(&DAT_14c9c6960,0,&DAT_14c9c68f8,L"FConeTraceScreenGridGlobalOcclusionCS",
                    L"/Engine/Private/DistanceFieldScreenGridLighting.usf",
                    L"ConeTraceGlobalOcclusionCS",5,2,FUN_14714f138,FUN_14714f0d8,FUN_1462bdc70,
                    &LAB_14714f0d4,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14c9c88d8);
      _DAT_14c9c6960 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142bdf896);
      _Init_thread_footer(&DAT_14c9c6a08);
    }
  }
  return &DAT_14c9c6960;
}



// FUNCTION 14159b6e8 FUN_14159b6e8 body=258 status=ok
// SIG undefined FUN_14159b6e8(void)

void FUN_14159b6e8(void)

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
              0x110) < DAT_14c9c8958) {
    FUN_144b3d300(&DAT_14c9c8958);
    if (DAT_14c9c8958 == -1) {
      FUN_145f3e7de(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x440;
      local_58 = 0xbd;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9c88d8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142be7706);
      _Init_thread_footer(&DAT_14c9c8958);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14159b7ec FUN_14159b7ec body=289 status=ok
// SIG undefined FUN_14159b7ec(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14159b7ec(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9c6b30) {
    FUN_144b3d300(&DAT_14c9c6b30);
    if (DAT_14c9c6b30 == -1) {
      FUN_14159b90e();
      FUN_145f3ea66();
      FUN_140db5666(&DAT_14c9c6a88,0,&DAT_14c9c6a20,L"FCombineConeVisibilityCS",
                    L"/Engine/Private/DistanceFieldScreenGridLighting.usf",
                    L"CombineConeVisibilityCS",5,1,FUN_14714f1fe,FUN_14714f19e,FUN_1462bdca4,
                    &LAB_14714f19a,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14c9c8960);
      _DAT_14c9c6a88 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142bdf8a2);
      _Init_thread_footer(&DAT_14c9c6b30);
    }
  }
  return &DAT_14c9c6a88;
}



// FUNCTION 14159b90e FUN_14159b90e body=258 status=ok
// SIG undefined FUN_14159b90e(void)

void FUN_14159b90e(void)

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
              0x110) < DAT_14c9c89e0) {
    FUN_144b3d300(&DAT_14c9c89e0);
    if (DAT_14c9c89e0 == -1) {
      FUN_145f3ebb0(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x110;
      local_58 = 0xeb;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9c8960,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142be7712);
      _Init_thread_footer(&DAT_14c9c89e0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14159ba12 FUN_14159ba12 body=226 status=ok
// SIG undefined FUN_14159ba12(void)

longlong * FUN_14159ba12(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462c366c;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14159baf6 FUN_14159baf6 body=289 status=ok
// SIG undefined FUN_14159baf6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14159baf6(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9cc110) {
    FUN_144b3d300(&DAT_14c9cc110);
    if (DAT_14c9cc110 == -1) {
      FUN_14159bc18();
      FUN_145f3ff36();
      FUN_140db5666(&DAT_14c9cc068,0,&DAT_14c9cc000,L"FCullObjectsToClipmapCS",
                    L"/Engine/Private/DistanceField/GlobalDistanceField.usf",
                    L"CullObjectsToClipmapCS",5,2,FUN_14715aaf0,FUN_14715aa90,&LAB_1462c2020,
                    &LAB_14715aa8c,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14c9ce6b0);
      _DAT_14c9cc068 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142c03ce1);
      _Init_thread_footer(&DAT_14c9cc110);
    }
  }
  return &DAT_14c9cc068;
}



// FUNCTION 14159bc18 FUN_14159bc18 body=258 status=ok
// SIG undefined FUN_14159bc18(void)

void FUN_14159bc18(void)

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
              0x110) < DAT_14c9ce730) {
    FUN_144b3d300(&DAT_14c9ce730);
    if (DAT_14c9ce730 == -1) {
      FUN_145f40080(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x150;
      local_58 = 0x5d7;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9ce6b0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142c1e210);
      _Init_thread_footer(&DAT_14c9ce730);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14159bd1c FUN_14159bd1c body=289 status=ok
// SIG undefined FUN_14159bd1c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14159bd1c(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9cc5b0) {
    FUN_144b3d300(&DAT_14c9cc5b0);
    if (DAT_14c9cc5b0 == -1) {
      FUN_14159be3e();
      FUN_145f40308();
      FUN_140db5666(&DAT_14c9cc508,0,&DAT_14c9cc4a0,L"FCompositeObjectsIntoObjectGridPagesCS",
                    L"/Engine/Private/DistanceField/GlobalDistanceFieldCompositeObjects.usf",
                    L"CompositeObjectsIntoObjectGridPagesCS",5,0x18,FUN_14715ae04,FUN_14715ada4,
                    &LAB_142c03d16,&LAB_142c03d12,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14c9ce8d0)
      ;
      _DAT_14c9cc508 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142c03d52);
      _Init_thread_footer(&DAT_14c9cc5b0);
    }
  }
  return &DAT_14c9cc508;
}



// FUNCTION 14159be3e FUN_14159be3e body=258 status=ok
// SIG undefined FUN_14159be3e(void)

void FUN_14159be3e(void)

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
              0x110) < DAT_14c9ce950) {
    FUN_144b3d300(&DAT_14c9ce950);
    if (DAT_14c9ce950 == -1) {
      FUN_145f40452(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x230;
      local_58 = 0x685;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9ce8d0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142c1e240);
      _Init_thread_footer(&DAT_14c9ce950);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14159bf42 FUN_14159bf42 body=226 status=ok
// SIG undefined FUN_14159bf42(void)

longlong * FUN_14159bf42(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462c860c;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14159c026 FUN_14159c026 body=226 status=ok
// SIG undefined FUN_14159c026(void)

longlong * FUN_14159c026(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462c991e;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14159c10a FUN_14159c10a body=226 status=ok
// SIG undefined FUN_14159c10a(void)

longlong * FUN_14159c10a(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462cb61c;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14159c1ee FUN_14159c1ee body=226 status=ok
// SIG undefined FUN_14159c1ee(void)

longlong * FUN_14159c1ee(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462cc2a6;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14159c2d2 FUN_14159c2d2 body=226 status=ok
// SIG undefined FUN_14159c2d2(void)

longlong * FUN_14159c2d2(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462cc5de;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14159c3b6 FUN_14159c3b6 body=226 status=ok
// SIG undefined FUN_14159c3b6(void)

longlong * FUN_14159c3b6(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462cc806;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14159c49a FUN_14159c49a body=226 status=ok
// SIG undefined FUN_14159c49a(void)

longlong * FUN_14159c49a(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462ce978;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14159c57e FUN_14159c57e body=226 status=ok
// SIG undefined FUN_14159c57e(void)

longlong * FUN_14159c57e(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462cfab4;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14159c662 FUN_14159c662 body=226 status=ok
// SIG undefined FUN_14159c662(void)

longlong * FUN_14159c662(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462d026e;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14159c746 FUN_14159c746 body=226 status=ok
// SIG undefined FUN_14159c746(void)

longlong * FUN_14159c746(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462d2672;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14159c82a FUN_14159c82a body=289 status=ok
// SIG undefined FUN_14159c82a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14159c82a(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9e4840) {
    FUN_144b3d300(&DAT_14c9e4840);
    if (DAT_14c9e4840 == -1) {
      FUN_14159c94c();
      FUN_145f492f8();
      FUN_140db5666(&DAT_14c9e4798,0,&DAT_14c9e4730,L"FAmbientCubemapCompositePS",
                    L"/Engine/Private/AmbientCubemapComposite.usf",L"MainPS",3,1,FUN_1471be028,
                    FUN_1471bdfc8,&LAB_1471bdfb0,&LAB_1471bdfac,&LAB_14712ac0c,&LAB_14712ac08,0xe0,
                    &DAT_14c9e67d8);
      _DAT_14c9e4798 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142cbfc68);
      _Init_thread_footer(&DAT_14c9e4840);
    }
  }
  return &DAT_14c9e4798;
}



// FUNCTION 14159c94c FUN_14159c94c body=258 status=ok
// SIG undefined FUN_14159c94c(void)

void FUN_14159c94c(void)

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
              0x110) < DAT_14c9e6858) {
    FUN_144b3d300(&DAT_14c9e6858);
    if (DAT_14c9e6858 == -1) {
      FUN_145f49442(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x260;
      local_58 = 0xf3;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9e67d8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142ccd934);
      _Init_thread_footer(&DAT_14c9e6858);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14159ca50 FUN_14159ca50 body=289 status=ok
// SIG undefined FUN_14159ca50(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14159ca50(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9edd20) {
    FUN_144b3d300(&DAT_14c9edd20);
    if (DAT_14c9edd20 == -1) {
      FUN_14159cb72();
      FUN_145f496ca();
      FUN_140db5666(&DAT_14c9edc78,0,&DAT_14c9edc10,L"FCullMeshSDFObjectsForViewCS",
                    L"/Engine/Private/Lumen/LumenMeshSDFCulling.usf",L"CullMeshSDFObjectsForViewCS",
                    5,1,FUN_1471deaf2,FUN_1471dea92,&LAB_1462d72be,&LAB_1471dea8e,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14c9f05e8);
      _DAT_14c9edc78 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142d25af3);
      _Init_thread_footer(&DAT_14c9edd20);
    }
  }
  return &DAT_14c9edc78;
}



// FUNCTION 14159cb72 FUN_14159cb72 body=258 status=ok
// SIG undefined FUN_14159cb72(void)

void FUN_14159cb72(void)

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
              0x110) < DAT_14c9f0668) {
    FUN_144b3d300(&DAT_14c9f0668);
    if (DAT_14c9f0668 == -1) {
      FUN_145f49814(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0xe0;
      local_58 = 0x5d;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9f05e8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142d2628f);
      _Init_thread_footer(&DAT_14c9f0668);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14159cc76 FUN_14159cc76 body=289 status=ok
// SIG undefined FUN_14159cc76(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14159cc76(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9ee410) {
    FUN_144b3d300(&DAT_14c9ee410);
    if (DAT_14c9ee410 == -1) {
      FUN_14159cd98();
      FUN_145f49a9c();
      FUN_140db5666(&DAT_14c9ee368,0,&DAT_14c9ee300,L"FCullHeightfieldObjectsForViewCS",
                    L"/Engine/Private/Lumen/LumenMeshSDFCulling.usf",
                    L"CullHeightfieldObjectsForViewCS",5,1,FUN_1471def96,FUN_1471def36,
                    &LAB_1462d72f0,&LAB_1471def32,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14c9f0918)
      ;
      _DAT_14c9ee368 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142d25b3b);
      _Init_thread_footer(&DAT_14c9ee410);
    }
  }
  return &DAT_14c9ee368;
}



// FUNCTION 14159cd98 FUN_14159cd98 body=258 status=ok
// SIG undefined FUN_14159cd98(void)

void FUN_14159cd98(void)

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
              0x110) < DAT_14c9f0998) {
    FUN_144b3d300(&DAT_14c9f0998);
    if (DAT_14c9f0998 == -1) {
      FUN_145f49be6(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x50;
      local_58 = 0x1c7;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9f0918,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142d262d7);
      _Init_thread_footer(&DAT_14c9f0998);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14159ce9c FUN_14159ce9c body=289 status=ok
// SIG undefined FUN_14159ce9c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14159ce9c(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9f3e30) {
    FUN_144b3d300(&DAT_14c9f3e30);
    if (DAT_14c9f3e30 == -1) {
      FUN_14159cfbe();
      FUN_145f4b646();
      FUN_140db5666(&DAT_14c9f3d88,0,&DAT_14c9f3d20,L"FReflectionTileClassificationMarkCS",
                    L"/Engine/Private/Lumen/LumenReflections.usf",
                    L"ReflectionTileClassificationMarkCS",5,4,FUN_1471ef458,FUN_1471ef3f8,
                    FUN_1462db448,&LAB_1471ef3f4,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14c9f68c0);
      _DAT_14c9f3d88 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142d3fdb5);
      _Init_thread_footer(&DAT_14c9f3e30);
    }
  }
  return &DAT_14c9f3d88;
}



// FUNCTION 14159cfbe FUN_14159cfbe body=258 status=ok
// SIG undefined FUN_14159cfbe(void)

void FUN_14159cfbe(void)

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
              0x110) < DAT_14c9f6940) {
    FUN_144b3d300(&DAT_14c9f6940);
    if (DAT_14c9f6940 == -1) {
      FUN_145f4b790(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x180;
      local_58 = 0x17c;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9f68c0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142d58d19);
      _Init_thread_footer(&DAT_14c9f6940);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14159d0c2 FUN_14159d0c2 body=226 status=ok
// SIG undefined FUN_14159d0c2(void)

longlong * FUN_14159d0c2(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462e2cf2;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14159d1a6 FUN_14159d1a6 body=226 status=ok
// SIG undefined FUN_14159d1a6(void)

longlong * FUN_14159d1a6(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462e3a16;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14159d28a FUN_14159d28a body=289 status=ok
// SIG undefined FUN_14159d28a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14159d28a(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca00f40) {
    FUN_144b3d300(&DAT_14ca00f40);
    if (DAT_14ca00f40 == -1) {
      FUN_14159d3ac();
      FUN_145f4e800();
      FUN_140db5666(&DAT_14ca00e98,0,&DAT_14ca00e30,
                    L"FScreenProbeComputeLightingProbabilityDensityFunctionCS",
                    L"/Engine/Private/Lumen/LumenScreenProbeImportanceSampling.usf",
                    L"ScreenProbeComputeLightingProbabilityDensityFunctionCS",5,0xc,FUN_147220cac,
                    FUN_147220c4c,&LAB_14176ddd6,&LAB_142dae89a,&LAB_14712ac0c,&LAB_14712ac08,0xe0,
                    &DAT_14ca05a38);
      _DAT_14ca00e98 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142dae89d);
      _Init_thread_footer(&DAT_14ca00f40);
    }
  }
  return &DAT_14ca00e98;
}



// FUNCTION 14159d3ac FUN_14159d3ac body=258 status=ok
// SIG undefined FUN_14159d3ac(void)

void FUN_14159d3ac(void)

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
              0x110) < DAT_14ca05ab8) {
    FUN_144b3d300(&DAT_14ca05ab8);
    if (DAT_14ca05ab8 == -1) {
      FUN_145f4e94a(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x380;
      local_58 = 0x7a;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca05a38,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142dd2fe9);
      _Init_thread_footer(&DAT_14ca05ab8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14159d4b0 FUN_14159d4b0 body=226 status=ok
// SIG undefined FUN_14159d4b0(void)

longlong * FUN_14159d4b0(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462ebda4;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14159d594 FUN_14159d594 body=226 status=ok
// SIG undefined FUN_14159d594(void)

longlong * FUN_14159d594(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462f412e;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14159d678 FUN_14159d678 body=226 status=ok
// SIG undefined FUN_14159d678(void)

longlong * FUN_14159d678(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462f5cf8;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


