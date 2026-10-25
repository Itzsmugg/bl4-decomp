// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1407766ee FUN_1407766ee body=134 status=ok
// SIG undefined FUN_1407766ee(void)

undefined4 FUN_1407766ee(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined4 uVar3;
  
  if (((((*(longlong **)(param_1 + 0x28) != (longlong *)0x0) && (*(int *)(param_1 + 0x24) != 0)) &&
       (uVar1 = *(uint *)(param_1 + 0x20), -1 < (int)uVar1)) &&
      (((int)uVar1 < DAT_14c9647dc &&
       (lVar2 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar2 != 0)))) &&
     ((*(int *)(lVar2 + 0x10) == *(int *)(param_1 + 0x24) &&
      (((*(uint *)(lVar2 + 8) & 0x10200000) == 0 &&
       (lVar2 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0x20))(), lVar2 != 0)))))) {
    return *(undefined4 *)(lVar2 + 0x14);
  }
  lVar2 = FUN_145743526(param_1);
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined4 *)(lVar2 + 0x930);
  }
  return uVar3;
}



// FUNCTION 140776774 FUN_140776774 body=535 status=ok
// SIG undefined FUN_140776774(void)

ulonglong FUN_140776774(longlong param_1)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 unaff_RSI;
  ulonglong uVar9;
  float fVar10;
  
  lVar7 = *(longlong *)(param_1 + 0xd8);
  if (lVar7 != 0) {
    lVar4 = *(longlong *)(param_1 + 0x48);
    uVar9 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
    switch(*(undefined1 *)(lVar4 + 0x81)) {
    case 0:
      cVar5 = FUN_14077698c(param_1);
      if (cVar5 == '\0') goto LAB_1407767df;
      lVar7 = *(longlong *)(param_1 + 0xd8);
      iVar3 = *(int *)(lVar7 + 0x700);
      if ((-1 < (longlong)iVar3) && (iVar3 < *(int *)(lVar7 + 0x6e0))) {
        lVar6 = lVar7 + 0xd8;
        if (*(longlong *)(lVar7 + 0x6d8) != 0) {
          lVar6 = *(longlong *)(lVar7 + 0x6d8);
        }
        lVar7 = (longlong)iVar3 * 0xc0;
        iVar3 = *(int *)(lVar6 + 4 + lVar7);
        if ((((iVar3 != 0) && (uVar2 = *(uint *)(lVar6 + lVar7), -1 < (int)uVar2)) &&
            ((int)uVar2 < DAT_14c9647dc)) &&
           (((plVar8 = (longlong *)
                       ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
             plVar8 != (longlong *)0x0 && ((int)plVar8[2] == iVar3)) &&
            (((*(uint *)(plVar8 + 1) & 0x10200000) == 0 && (*plVar8 != 0))))))
        goto switchD_1407767b4_caseD_3;
      }
      break;
    case 1:
      fVar1 = *(float *)(lVar7 + 0x714);
      fVar10 = (float)FUN_1407766ee(lVar7);
      if ((*(char *)(lVar7 + 0x6f5) == '\x01') && (*(char *)(lVar7 + 0x6f4) == '\x01')) {
        fVar10 = fVar10 - *(float *)(lVar7 + 0x6f8);
        if (((*(float *)(lVar7 + 0x6fc) <= 0.0) || (fVar10 <= *(float *)(lVar7 + 0x6fc))) &&
           (fVar1 <= fVar10)) goto switchD_1407767b4_caseD_3;
      }
      break;
    case 2:
      fVar1 = *(float *)(lVar7 + 0x714);
      fVar10 = (float)FUN_1407766ee(lVar7);
      if ((*(char *)(lVar7 + 0x6f5) == '\x01') && (*(char *)(lVar7 + 0x6f4) == '\x01')) {
        fVar10 = fVar10 - *(float *)(lVar7 + 0x6f8);
        if (((0.0 < *(float *)(lVar7 + 0x6fc)) && (*(float *)(lVar7 + 0x6fc) < fVar10)) ||
           (fVar10 < fVar1)) goto LAB_1407768d9;
      }
      else {
LAB_1407768d9:
        cVar5 = FUN_14077698c(param_1);
        if (cVar5 == '\0') goto LAB_1407767df;
      }
      lVar7 = *(longlong *)(param_1 + 0xd8);
      iVar3 = *(int *)(lVar7 + 0x700);
      if ((-1 < (longlong)iVar3) && (iVar3 < *(int *)(lVar7 + 0x6e0))) {
        lVar6 = lVar7 + 0xd8;
        if (*(longlong *)(lVar7 + 0x6d8) != 0) {
          lVar6 = *(longlong *)(lVar7 + 0x6d8);
        }
        lVar7 = FUN_14479d2ce((longlong)iVar3 * 0xc0 + lVar6);
        if (lVar7 != 0) goto switchD_1407767b4_caseD_3;
      }
      if (*(char *)(lVar4 + 0x83) == '\x01') goto switchD_1407767b4_caseD_3;
      goto LAB_1407767df;
    default:
      goto switchD_1407767b4_caseD_3;
    }
    if (*(char *)(lVar4 + 0x83) != '\0') goto switchD_1407767b4_caseD_3;
  }
LAB_1407767df:
  uVar9 = 0;
switchD_1407767b4_caseD_3:
  return uVar9 & 0xffffffff;
}



// FUNCTION 14077698c FUN_14077698c body=529 status=ok
// SIG undefined FUN_14077698c(void)

byte FUN_14077698c(longlong param_1)

{
  int *piVar1;
  code *pcVar2;
  byte bVar3;
  byte bVar4;
  longlong lVar5;
  undefined8 uVar6;
  int iVar7;
  undefined *puVar8;
  bool bVar9;
  int iVar10;
  undefined8 ****ppppuVar11;
  longlong lVar12;
  longlong lVar13;
  float fVar14;
  undefined1 auStack_a8 [32];
  char local_88 [16];
  longlong *local_78;
  int local_60;
  undefined8 ***local_58 [3];
  ushort local_40;
  byte local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar5 = FUN_144860928();
  uVar6 = FUN_140343d7a(param_1);
  local_88[0] = '\0';
  local_60 = 0;
  FUN_1456bb102(local_88,uVar6);
  FUN_1447c3578(lVar5 + 0x570,local_58,local_88);
  bVar4 = FUN_140168b7a(local_58,1);
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_38 * 0x120));
  if (pcVar2 != (code *)0x0) {
    ppppuVar11 = local_58;
    if (0x18 < local_40) {
      ppppuVar11 = (undefined8 ****)local_58[0];
    }
    (*pcVar2)(ppppuVar11);
  }
  if (0x18 < local_40) {
    FUN_1400020a8(local_58[0]);
  }
  lVar5 = DAT_14c9a3da0;
  if ((longlong)local_60 != 0) {
    lVar12 = (longlong)local_60 + -1;
    lVar13 = lVar12 * 0x10;
    FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar13),
                  *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar13));
    if (*(longlong *)(lVar5 + lVar13) != 0) {
      FUN_1400020a8();
    }
    lVar5 = DAT_14c9a3da0;
    iVar10 = (int)lVar12;
    if (DAT_14c9a3dd4 != 0) {
      *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar10;
    }
    *(undefined4 *)(lVar5 + lVar13) = 0xffffffff;
    iVar7 = -1;
    if (0 < DAT_14c9a3dd4) {
      iVar7 = DAT_14c9a3dd0;
    }
    *(int *)(lVar5 + 4 + lVar13) = iVar7;
    DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
    puVar8 = &DAT_14c9a3db0;
    if (DAT_14c9a3dc0 != (undefined *)0x0) {
      puVar8 = DAT_14c9a3dc0;
    }
    iVar7 = iVar10 + 0x1f;
    if (-1 < iVar10) {
      iVar7 = iVar10;
    }
    bVar3 = (byte)lVar12 & 0x1f;
    DAT_14c9a3dd0 = iVar10;
    *(uint *)(puVar8 + (longlong)(iVar7 >> 5) * 4) =
         *(uint *)(puVar8 + (longlong)(iVar7 >> 5) * 4) &
         (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
    local_60 = 0;
  }
  if ((local_88[0] == '\x03') && (local_78 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_78 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_78 + 0x10))();
    }
  }
  lVar5 = *(longlong *)(param_1 + 0xd8);
  bVar9 = true;
  if (lVar5 != 0) {
    fVar14 = (float)FUN_1407766ee(lVar5);
    if ((*(char *)(lVar5 + 0x749) == '\x01') && (*(char *)(lVar5 + 0x748) == '\x01')) {
      if (0.0 < *(float *)(lVar5 + 0x750)) {
        bVar9 = *(float *)(lVar5 + 0x750) < fVar14 - *(float *)(lVar5 + 0x74c);
      }
      else {
        bVar9 = false;
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return bVar4 & bVar9;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140776b9e FUN_140776b9e body=29 status=ok
// SIG undefined FUN_140776b9e(void)

void FUN_140776b9e(longlong param_1)

{
  FUN_140776bbc();
  *(undefined8 *)(param_1 + 0x7b8) = 0;
  *(undefined8 *)(param_1 + 0x7c0) = 0;
  return;
}



// FUNCTION 140776bbc FUN_140776bbc body=905 status=ok
// SIG undefined FUN_140776bbc(void)

void FUN_140776bbc(longlong *param_1)

{
  byte bVar1;
  uint uVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  ulonglong uVar8;
  bool bVar9;
  float fVar10;
  float fVar11;
  undefined1 auStack_b8 [44];
  int local_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  *(byte *)((longlong)param_1 + 0x101) = *(byte *)((longlong)param_1 + 0x101) & 0xf7;
  param_1[0xd2] = 0;
  param_1[0xd3] = 0;
  lVar5 = (**(code **)(*param_1 + 0x180))();
  if (lVar5 == 0) {
    fVar11 = 3.4028235e+38;
  }
  else {
    lVar5 = (**(code **)(*param_1 + 0x180))(param_1);
    fVar11 = (float)(*(double *)(lVar5 + 0x6d0) + -0.4000000059604645);
  }
  if (0 < (longlong)(int)param_1[0xd5]) {
    uVar8 = (longlong)(int)param_1[0xd5] + 1;
    do {
      plVar3 = *(longlong **)(param_1[0xd4] + -0x10 + uVar8 * 8);
      if (plVar3 != (longlong *)0x0) {
        if (param_1[0xeb] != 0) {
          FUN_1401c4d5c(plVar3 + 8,param_1[4]);
        }
        lVar5 = FUN_140288b94();
        if ((*(int *)(plVar3[2] + 0x38) < *(int *)(lVar5 + 0x38)) ||
           (*(longlong *)(*(longlong *)(plVar3[2] + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) !=
            lVar5 + 0x30)) {
          lVar5 = FUN_14081cebe();
          if ((*(int *)(plVar3[2] + 0x38) < *(int *)(lVar5 + 0x38)) ||
             (*(longlong *)(*(longlong *)(plVar3[2] + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8)
              != lVar5 + 0x30)) {
            (**(code **)(*plVar3 + 0x420))(plVar3);
          }
          else {
            if ((*(uint *)(param_1 + 1) & 0x10) == 0) {
              lVar5 = param_1[4];
            }
            else {
              lVar5 = 0;
            }
            FUN_140777194(lVar5);
          }
        }
        else {
          local_88._0_4_ = 0;
          uStack_80 = 0;
          if (param_1 == (longlong *)0x0) {
            iVar4 = 0;
            uVar2 = (uint)local_88;
          }
          else {
            uVar2 = *(uint *)((longlong)param_1 + 0xc);
            local_88 = (ulonglong)uVar2;
            if ((int)uVar2 < DAT_14c9647dc) {
              lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
            }
            else {
              lVar5 = 0;
            }
            iVar4 = *(int *)(lVar5 + 0x10);
            if (*(int *)(lVar5 + 0x10) == 0) {
              LOCK();
              iVar4 = DAT_14c964868 + 1;
              UNLOCK();
              iVar7 = DAT_14c964868 + 1;
              bVar9 = DAT_14c964868 < 1000;
              DAT_14c964868 = iVar4;
              if (bVar9) {
                local_8c = iVar7;
                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                              ,iVar7);
                iVar7 = local_8c;
              }
              LOCK();
              iVar4 = *(int *)(lVar5 + 0x10);
              bVar9 = iVar4 == 0;
              if (bVar9) {
                *(int *)(lVar5 + 0x10) = iVar7;
                iVar4 = 0;
              }
              UNLOCK();
              uVar2 = (uint)local_88;
              if (bVar9) {
                iVar4 = iVar7;
              }
            }
          }
          local_88._0_4_ = uVar2;
          local_88 = CONCAT44(iVar4,(uint)local_88);
          uStack_80 = DAT_14cb85268;
          (**(code **)(*plVar3 + 0xa88))(plVar3,&local_88);
          if ((*(int *)((longlong)plVar3 + 0x3d4) < 0) &&
             ((lVar5 = plVar3[0x16], lVar5 != 0 || (lVar5 = FUN_1448abda6(plVar3), lVar5 != 0)))) {
            fVar10 = (float)*(double *)(lVar5 + 0x6d0);
          }
          else {
            fVar10 = *(float *)((longlong)plVar3 + 0x3c4);
          }
          if ((fVar10 < fVar11) || ((*(uint *)(param_1 + 0x20) & 0x200000) != 0)) {
            bVar1 = *(byte *)((longlong)plVar3 + 0x9e);
            (**(code **)(*plVar3 + 0xa50))(plVar3);
            if ((bVar1 & 0x10) == 0) {
              if ((*(uint *)(param_1 + 1) & 0x10) == 0) {
                lVar5 = param_1[4];
              }
              else {
                lVar5 = 0;
              }
              FUN_140679cfc(lVar5);
            }
          }
          else {
            (**(code **)(*plVar3 + 0x4a0))(plVar3);
            (**(code **)(*plVar3 + 0xa50))(plVar3);
          }
        }
      }
      uVar8 = uVar8 - 1;
    } while (1 < uVar8);
  }
  *(undefined4 *)(param_1 + 0xd5) = 0;
  if (*(int *)((longlong)param_1 + 0x6ac) < 0) {
    FUN_140ec0d20(param_1 + 0xd4);
  }
  if (((*(uint *)(param_1 + 1) & 0x10) == 0) && (lVar5 = param_1[4], lVar5 != 0)) {
    lVar6 = 0;
    if ((*(uint *)(param_1 + 1) & 0x10) == 0) {
      lVar6 = lVar5;
    }
    if (*(longlong *)(lVar6 + 0x540) != 0) {
      lVar6 = 0;
      if ((*(uint *)(param_1 + 1) & 0x10) == 0) {
        lVar6 = lVar5;
      }
      FUN_140776f46(*(undefined8 *)(lVar6 + 0x540),param_1);
    }
  }
  if ((local_70 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140776f46 FUN_140776f46 body=288 status=ok
// SIG undefined FUN_140776f46(void)

void FUN_140776f46(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  ulonglong uVar5;
  bool bVar6;
  
  if (0 < *(int *)(param_1 + 0x308)) {
    plVar1 = (longlong *)(param_1 + 0x300);
    uVar5 = 0;
    bVar6 = false;
    do {
      while( true ) {
        lVar2 = *(longlong *)(*plVar1 + uVar5 * 0x48);
        if (lVar2 == param_2) {
          plVar4 = (longlong *)(*plVar1 + uVar5 * 0x48);
          FUN_14072d42a(plVar4 + 2,0);
          lVar2 = *plVar4;
        }
        if (lVar2 != param_2) break;
        FUN_140777066(plVar1,uVar5 & 0xffffffff);
        bVar6 = true;
        if ((longlong)*(int *)(param_1 + 0x308) <= (longlong)uVar5) goto LAB_140777059;
      }
      uVar5 = uVar5 + 1;
    } while ((longlong)uVar5 < (longlong)*(int *)(param_1 + 0x308));
    if (bVar6) {
LAB_140777059:
      FUN_1407770f4(plVar1);
    }
  }
  iVar3 = *(int *)(param_1 + 0x318);
  if (iVar3 < 1) {
    return;
  }
  plVar1 = (longlong *)(param_1 + 0x310);
  uVar5 = 0;
  bVar6 = false;
  do {
    uVar5 = (ulonglong)(int)uVar5;
    plVar4 = (longlong *)(uVar5 * 0x18 + *plVar1);
    while (*plVar4 != param_2) {
      uVar5 = uVar5 + 1;
      plVar4 = plVar4 + 3;
      if ((longlong)iVar3 <= (longlong)uVar5) {
        if (!bVar6) {
          return;
        }
        goto LAB_14077700b;
      }
    }
    FUN_140b89812(plVar1,uVar5 & 0xffffffff);
    iVar3 = *(int *)(param_1 + 0x318);
    bVar6 = true;
  } while ((int)uVar5 < iVar3);
LAB_14077700b:
  FUN_140b8988e(plVar1);
  return;
}



// FUNCTION 140777066 FUN_140777066 body=142 status=ok
// SIG undefined FUN_140777066(void)

void FUN_140777066(longlong *param_1,uint param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  
  lVar1 = *param_1;
  lVar4 = (longlong)(int)param_2;
  *(undefined8 *)(lVar1 + 0x10 + lVar4 * 0x48) = 0;
  *(undefined8 *)(lVar1 + 0x18 + lVar4 * 0x48) = 0xffffffffffffffff;
  lVar2 = *(longlong *)(lVar1 + 8 + lVar4 * 0x48);
  if ((lVar2 != 0) && ((DAT_14cb26569 & 1) != 0)) {
    FUN_1400848c0(*(undefined8 *)(lVar2 + 0x50));
  }
  iVar3 = (int)param_1[1];
  iVar5 = ~param_2 + iVar3;
  if (iVar5 != 0) {
    iVar6 = 1;
    if (iVar5 < 1) {
      iVar6 = iVar5;
    }
    memmove((void *)(lVar1 + lVar4 * 0x48),(void *)(lVar1 + (longlong)(iVar3 - iVar6) * 0x48),
            (longlong)iVar6 * 0x48);
    iVar3 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar3 + -1;
  return;
}



// FUNCTION 1407770f4 FUN_1407770f4 body=159 status=ok
// SIG undefined FUN_1407770f4(void)

void FUN_1407770f4(longlong param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar3 = (ulonglong)uVar1;
  iVar2 = *(int *)(param_1 + 0xc);
  if (((0x3fff < (ulonglong)((longlong)(int)(iVar2 - uVar1) * 0x48)) ||
      ((int)(uVar1 * 3) < iVar2 * 2)) && (uVar1 == 0 || 0x40 < (int)(iVar2 - uVar1))) {
    if (0 < (int)uVar1) {
      uVar3 = FUN_144a3809e(uVar3 * 0x48,8);
      uVar3 = uVar3 / 0x48;
      iVar2 = *(int *)(param_1 + 0xc);
    }
    if ((int)uVar3 != iVar2) {
      *(int *)(param_1 + 0xc) = (int)uVar3;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar3,0x48,8);
    }
  }
  return;
}



// FUNCTION 140777194 FUN_140777194 body=559 status=ok
// SIG undefined FUN_140777194(void)

void FUN_140777194(longlong param_1,longlong *param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined8 local_80;
  wchar_t *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  code **local_60;
  undefined1 *local_58;
  code *local_50;
  code *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((param_2 == (longlong *)0x0) || ((*(uint *)(param_2 + 1) >> 0x1e & 1) != 0)) {
    if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
  (**(code **)(*param_2 + 0x4a0))(param_2,&DAT_14cadad9c);
  FUN_1401bf202(param_2);
  FUN_1447210f0(param_1);
  if (DAT_14cad3688 == 0) {
    local_60 = &local_48;
    local_48 = FUN_144b223ce;
    local_50 = FUN_14081d0ea;
    local_58 = &LAB_1417963e0;
    local_68 = &LAB_147a2f4c9;
    local_70 = &LAB_1400ea6f8;
    local_78 = L"Engine";
    local_80 = 0x200000000000;
    local_88 = 0x10000004;
    local_90 = 0x10;
    local_98 = 0x720;
    FUN_14081cfa3(L"/Script/Engine",L"StaticMeshComponent",&DAT_14cad3688,FUN_1463bfdc8);
  }
  if ((*(int *)(param_2[2] + 0x38) < *(int *)(DAT_14cad3688 + 0x38)) ||
     (*(longlong *)(*(longlong *)(param_2[2] + 0x30) + (longlong)*(int *)(DAT_14cad3688 + 0x38) * 8)
      != DAT_14cad3688 + 0x30)) {
    lVar3 = FUN_144a74fb4();
    if ((*(int *)(param_2[2] + 0x38) < *(int *)(lVar3 + 0x38)) ||
       (*(longlong *)(*(longlong *)(param_2[2] + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
        lVar3 + 0x30)) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_b8);
    }
    FUN_144a81888(param_2);
  }
  else if ((param_2[0xcc] != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(param_2[0xcc]);
  }
  iVar1 = *(int *)(param_1 + 0x418);
  uVar2 = iVar1 + 1;
  *(uint *)(param_1 + 0x418) = uVar2;
  if (*(uint *)(param_1 + 0x41c) < uVar2) {
    FUN_14574356c(param_1 + 0x410,iVar1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_b8);
}



// FUNCTION 140777470 FUN_140777470 body=180 status=ok
// SIG undefined FUN_140777470(void)

longlong * FUN_140777470(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar4 = *(longlong *)(param_1 + 0x40);
  if (lVar4 != 0) {
    lVar5 = lVar4 + 0x108;
    if (*(longlong *)(lVar4 + 0x188) != 0) {
      lVar5 = *(longlong *)(lVar4 + 0x188);
    }
    if ((longlong)*(int *)(lVar4 + 400) != 0) {
      lVar6 = 0;
      while ((lVar2 = *(longlong *)(lVar5 + lVar6), lVar2 == 0 ||
             (*(longlong *)(lVar2 + 0x10) != *param_2))) {
        lVar6 = lVar6 + 8;
        if ((longlong)*(int *)(lVar4 + 400) * 8 == lVar6) {
          return (longlong *)0x0;
        }
      }
      iVar1 = *(int *)(lVar2 + 0x18);
      if ((-1 < (longlong)iVar1) &&
         ((iVar1 < *(int *)(param_1 + 0x78) &&
          (plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x70) + (longlong)iVar1 * 8),
          plVar3 != (longlong *)0x0)))) {
        lVar4 = (**(code **)(*plVar3 + 8))(plVar3);
        lVar5 = FUN_1400653da();
        if ((lVar5 != 0) && (*(int *)(lVar5 + 0x38) <= *(int *)(lVar4 + 0x38))) {
          if (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) !=
              lVar5 + 0x30) {
            return (longlong *)0x0;
          }
          return plVar3;
        }
      }
    }
  }
  return (longlong *)0x0;
}



// FUNCTION 140777524 FUN_140777524 body=190 status=ok
// SIG undefined FUN_140777524(void)

void FUN_140777524(longlong param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar6 = param_1 + 0x68;
  if (*(longlong *)(param_1 + 0x128) != 0) {
    lVar6 = *(longlong *)(param_1 + 0x128);
  }
  iVar1 = *(int *)(param_1 + 0x130);
  if ((longlong)iVar1 != 0) {
    lVar7 = 0;
    do {
      iVar2 = *(int *)(lVar6 + 4 + lVar7);
      if (((iVar2 != 0) && (uVar3 = *(uint *)(lVar6 + lVar7), -1 < (int)uVar3)) &&
         ((int)uVar3 < DAT_14c9647dc)) {
        plVar5 = (longlong *)
                 ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
        if (((plVar5 != (longlong *)0x0) && ((int)plVar5[2] == iVar2)) &&
           (((*(uint *)(plVar5 + 1) & 0x10200000) == 0 && (lVar4 = *plVar5, lVar4 != 0)))) {
          iVar2 = (int)param_2[1];
          *(uint *)(param_2 + 1) = iVar2 + 1U;
          if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
            FUN_140612240(param_2,iVar2);
          }
          *(longlong *)(*param_2 + (longlong)iVar2 * 8) = lVar4;
        }
      }
      lVar7 = lVar7 + 0x18;
    } while ((longlong)iVar1 * 0x18 != lVar7);
  }
  return;
}



// FUNCTION 1407775e2 FUN_1407775e2 body=437 status=ok
// SIG undefined FUN_1407775e2(void)

void FUN_1407775e2(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  longlong lVar10;
  int iVar11;
  undefined1 auStack_b8 [32];
  undefined4 *local_98;
  longlong *local_90;
  undefined8 local_88;
  longlong local_80;
  uint local_78;
  int iStack_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  longlong local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar1 = (longlong *)(param_1 + 0x10);
  FUN_140777798(param_3,*(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x44));
  lVar2 = param_1 + 0x20;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  local_50 = 0;
  iVar11 = 0;
  local_60 = lVar2;
  if (*(int *)(param_1 + 0x38) != 0) {
    FUN_1449c0562(&local_68);
    iVar11 = *(int *)(param_1 + 0x38);
  }
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_70 = local_50;
  local_6c = local_4c;
  local_88 = local_68;
  local_80 = local_60;
  local_90 = plVar1;
  if ((iStack_54 != iVar11) || (local_60 != lVar2)) {
    do {
      local_98 = (undefined4 *)(*local_90 + (longlong)iStack_74 * 0x20);
      uVar5 = *(undefined8 *)(*local_90 + 0x10 + (longlong)iStack_74 * 0x20);
      FUN_14793d830(param_1,local_98,uVar5,0);
      FUN_1402b308c(uVar5,&local_68,param_2);
      iVar4 = (int)param_3[1];
      *(uint *)(param_3 + 1) = iVar4 + 1U;
      if (*(uint *)((longlong)param_3 + 0xc) < iVar4 + 1U) {
        FUN_14794e12a(param_3,iVar4);
      }
      lVar6 = *param_3;
      lVar10 = (longlong)iVar4 * 0x20;
      uVar7 = local_98[1];
      uVar8 = local_98[2];
      uVar9 = local_98[3];
      puVar3 = (undefined4 *)(lVar6 + lVar10);
      *puVar3 = *local_98;
      puVar3[1] = uVar7;
      puVar3[2] = uVar8;
      puVar3[3] = uVar9;
      *(undefined8 *)(lVar6 + 0x10 + lVar10) = local_68;
      local_68 = 0;
      *(longlong *)(lVar6 + 0x18 + lVar10) = local_60;
      local_60 = 0;
      FUN_1478b24e8();
      local_78 = local_78 & ~local_88._4_4_;
      FUN_1449c0562(&local_88);
    } while (((iStack_74 != iVar11) || (local_80 != lVar2)) || (local_90 != plVar1));
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140777798 FUN_140777798 body=68 status=ok
// SIG undefined FUN_140777798(void)

void FUN_140777798(undefined8 *param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  FUN_140658f7d(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) == param_2) {
    return;
  }
  FUN_14794e0ca(param_1,param_2);
  return;
}



// FUNCTION 1407777dc FUN_1407777dc body=235 status=ok
// SIG undefined FUN_1407777dc(void)

void FUN_1407777dc(longlong *param_1)

{
  param_1[6] = (longlong)&DAT_14a176f00;
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  param_1[6] = (longlong)&PTR_FUN_14a177080;
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)((longlong)param_1 + 0x44) != 0) {
    FUN_14472eb64(param_1 + 7,0);
  }
  param_1[0xd] = 0xffffffff;
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 100)) {
    *(undefined4 *)((longlong)param_1 + 100) = 0x80;
    FUN_1446efbd8(param_1 + 9,0);
  }
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  FUN_1407778c7(*param_1,(int)param_1[1]);
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1407778c7 FUN_1407778c7 body=108 status=ok
// SIG undefined FUN_1407778c7(void)

void FUN_1407778c7(longlong param_1,int param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if (param_2 != 0) {
    puVar3 = (undefined8 *)(param_1 + 0x78);
    do {
      pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 +
                         (ulonglong)((uint)*(byte *)(puVar3 + 4) * 0x120));
      if (pcVar1 != (code *)0x0) {
        puVar2 = puVar3;
        if (0x18 < *(ushort *)(puVar3 + 3)) {
          puVar2 = (undefined8 *)*puVar3;
        }
        (*pcVar1)(puVar2);
      }
      if (0x18 < *(ushort *)(puVar3 + 3)) {
        FUN_1400020a8(*puVar3);
      }
      puVar3 = puVar3 + 0x16;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140777948 FUN_140777948 body=112 status=ok
// SIG undefined FUN_140777948(void)

void FUN_140777948(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_6a8 [32];
  undefined1 local_688 [1648];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_6a8;
  FUN_1407779ba(local_688,param_2,param_3,0);
  (**(code **)(*param_1 + 0x60))(param_1,local_688,0);
  FUN_140779360(local_688);
  FUN_140778010(local_688);
  if ((local_18 ^ (ulonglong)auStack_6a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407779ba FUN_1407779ba body=1622 status=ok
// SIG undefined FUN_1407779ba(void)

undefined8 * FUN_1407779ba(undefined8 *param_1,undefined8 param_2,undefined8 param_3,byte param_4)

{
  undefined8 *lpTlsValue;
  ushort uVar1;
  int iVar2;
  longlong *plVar3;
  byte bVar4;
  char cVar5;
  undefined1 uVar6;
  LPVOID pvVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  bool bVar11;
  
  bVar4 = FUN_1432045d1();
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0xd) = 0;
  *(byte *)((longlong)param_1 + 0x15) = param_4 >> 2 & bVar4;
  param_1[3] = param_2;
  param_1[4] = 0;
  param_1[6] = 0;
  param_1[0xc] = 0;
  lpTlsValue = param_1 + 0xe;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  *(undefined2 *)((longlong)param_1 + 0x94) = 1;
  if (DAT_14c872d30 == 0) {
    FUN_145bdc178();
    bVar11 = DAT_14c872d30 == 0;
    param_1[0x13] = 0;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    param_1[0x18] = 0;
    *(undefined4 *)(param_1 + 0x19) = 0;
    *(undefined2 *)((longlong)param_1 + 0xcc) = 1;
    if (bVar11) {
      FUN_145bdc178();
      bVar11 = DAT_14c872d30 == 0;
      *(undefined1 (*) [16])(param_1 + 0x1a) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(param_1 + 0x1c) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(param_1 + 0x1e) = (undefined1  [16])0x0;
      *(undefined4 *)(param_1 + 0x20) = 0;
      *(undefined2 *)((longlong)param_1 + 0x104) = 1;
      if (bVar11) {
        FUN_145bdc178();
      }
      goto LAB_140777a8e;
    }
  }
  else {
    param_1[0x17] = 0;
    param_1[0x18] = 0;
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    param_1[0x13] = 0;
    param_1[0x14] = 0;
    *(undefined4 *)(param_1 + 0x19) = 0;
    *(undefined2 *)((longlong)param_1 + 0xcc) = 1;
  }
  *(undefined1 (*) [16])(param_1 + 0x1e) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 0x1c) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 0x1a) = (undefined1  [16])0x0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined2 *)((longlong)param_1 + 0x104) = 1;
LAB_140777a8e:
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  pvVar7 = TlsGetValue(DAT_14ca954e4);
  param_1[0x23] = pvVar7;
  TlsSetValue(DAT_14ca954e4,lpTlsValue);
  param_1[0x24] = lpTlsValue;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x40] = 0;
  memset(param_1 + 0x28,0,0xb8);
  param_1[0x41] = &DAT_100000001;
  param_1[0x3f] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x42) = 0;
  param_1[0x44] = 0;
  param_1[0x47] = 0;
  param_1[0x45] = &DAT_100000001;
  param_1[0x48] = &DAT_100000001;
  param_1[0x49] = 0;
  FUN_14471858a(param_1 + 0x46,1);
  param_1[0x4f] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x50] = &DAT_100000001;
  param_1[0x4e] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x51) = 0;
  param_1[0x53] = 0;
  param_1[0x56] = 0;
  param_1[0x54] = &DAT_100000001;
  param_1[0x57] = &DAT_100000001;
  param_1[0x58] = 0;
  FUN_14471858a(param_1 + 0x55,1);
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  uVar8 = 0;
  if (DAT_14c760de0 != 0) {
    uVar8 = DAT_14ca955b8;
  }
  param_1[0x5b] = uVar8;
  *(undefined1 *)(param_1 + 0x5c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x2e1) = 0;
  param_1[0x62] = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  *(undefined4 *)((longlong)param_1 + 0x31c) = 1;
  *(undefined4 *)(param_1 + 99) = 1;
  param_1[0x61] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 100) = 0;
  param_1[0x66] = 0;
  param_1[0x69] = 0;
  param_1[0x67] = &DAT_100000001;
  param_1[0x6a] = &DAT_100000001;
  param_1[0x6b] = 0;
  FUN_14471858a(param_1 + 0x68,1);
  param_1[0x71] = 0;
  param_1[0x6c] = 0;
  param_1[0x6d] = 0;
  param_1[0x6e] = 0;
  param_1[0x6f] = 0;
  param_1[0x72] = &DAT_100000001;
  param_1[0x70] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x73) = 0;
  param_1[0x75] = 0;
  param_1[0x78] = 0;
  param_1[0x76] = &DAT_100000001;
  param_1[0x79] = &DAT_100000001;
  param_1[0x7a] = 0;
  FUN_14471858a(param_1 + 0x77,1);
  param_1[0x7f] = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  param_1[0x7b] = 0;
  param_1[0x7c] = 0;
  *(undefined8 *)((longlong)param_1 + 0x404) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x40c) = 0;
  param_1[0x85] = 0;
  *(undefined4 *)(param_1 + 0x86) = 0;
  param_1[0x87] = 0;
  param_1[0x88] = 0;
  param_1[0x89] = 0;
  param_1[0x8a] = 0;
  param_1[0x8b] = 0;
  param_1[0x8c] = 0;
  param_1[0x8d] = 0;
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  param_1[0x90] = 0;
  *(undefined4 *)(param_1 + 0x91) = 0;
  *(undefined4 *)((longlong)param_1 + 0x48c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x92) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x494) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x93) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x49a) = 0xffffffffffffffff;
  *(undefined4 *)((longlong)param_1 + 0x4a4) = 0;
  *(undefined1 *)(param_1 + 0x95) = 0;
  *(undefined4 *)(param_1 + 0x9a) = 0;
  param_1[0x98] = 0;
  param_1[0x99] = 0;
  param_1[0x96] = 0;
  param_1[0x97] = 0;
  param_1[0x9b] = L"FRDGBuilder::AsyncSetupQueue";
  *(undefined1 *)(param_1 + 0xa5) = 0;
  *(undefined1 *)(param_1 + 0xa9) = 0;
  *(undefined1 *)(param_1 + 0xab) = 0;
  *(undefined1 *)(param_1 + 0xad) = 0;
  *(undefined1 *)(param_1 + 0xaf) = 0;
  *(undefined1 *)(param_1 + 0xb0) = 0;
  param_1[0xb9] = 0;
  *(undefined4 *)(param_1 + 0xba) = 0;
  param_1[0x9c] = 0;
  param_1[0x9d] = 0;
  param_1[0x9e] = 0;
  param_1[0x9f] = 0;
  param_1[0xa0] = 0;
  param_1[0xa1] = 0;
  param_1[0xa2] = 0;
  param_1[0xa3] = 0;
  *(undefined1 *)(param_1 + 0xa4) = 0;
  param_1[0xa6] = 0;
  param_1[0xa7] = 0;
  param_1[0xb1] = 0;
  param_1[0xb2] = 0;
  param_1[0xb3] = 0;
  param_1[0xb4] = 0;
  param_1[0xb5] = 0;
  param_1[0xb6] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5d4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x5dc) = 0;
  param_1[0xbf] = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  param_1[199] = 0;
  param_1[200] = 0x400000000;
  param_1[0xc1] = 0;
  param_1[0xc2] = 0;
  *(undefined1 *)(param_1 + 0xc9) = 0;
  param_1[0xca] = param_1[3];
  DAT_14ca83d40 = DAT_14ca83d40 + 1;
  *(undefined1 *)((longlong)param_1 + 0x65c) = 0;
  *(undefined4 *)(param_1 + 0xcb) = 0;
  *(undefined4 *)(param_1 + 0xcc) = 4;
  lVar9 = FUN_144ada602(param_1 + 0x2d,lpTlsValue);
  *(byte *)(lVar9 + 0x38) = *(byte *)(lVar9 + 0x38) | 8;
  uVar1 = *(ushort *)(lVar9 + 0x28);
  *(undefined4 *)(lVar9 + 0x48) = *(undefined4 *)(lVar9 + 0x2c);
  *(undefined4 *)(lVar9 + 0x4c) = *(undefined4 *)(lVar9 + 0x2c);
  iVar2 = *(int *)(lVar9 + 0xd0);
  *(uint *)(lVar9 + 0xd0) = iVar2 + 1U;
  if (*(uint *)(lVar9 + 0xd4) < iVar2 + 1U) {
    FUN_14742e1f0(lVar9 + 0xc0,iVar2);
  }
  lVar10 = lVar9 + 0xc0;
  if (*(longlong *)(lVar9 + 200) != 0) {
    lVar10 = *(longlong *)(lVar9 + 200);
  }
  *(longlong *)(lVar10 + (longlong)iVar2 * 8) = lVar9;
  iVar2 = *(int *)(lVar9 + 0xe8);
  *(uint *)(lVar9 + 0xe8) = iVar2 + 1U;
  if (*(uint *)(lVar9 + 0xec) < iVar2 + 1U) {
    FUN_14742e1f0(lVar9 + 0xd8,iVar2);
  }
  lVar10 = lVar9 + 0xd8;
  if (*(longlong *)(lVar9 + 0xe0) != 0) {
    lVar10 = *(longlong *)(lVar9 + 0xe0);
  }
  *(longlong *)(lVar10 + (longlong)iVar2 * 8) = lVar9;
  *(uint *)(param_1 + 0x2a) = *(int *)(param_1 + 0x2a) + (uint)((uVar1 >> 2 & 1) != 0);
  *(int *)((longlong)param_1 + 0x154) = *(int *)((longlong)param_1 + 0x154) + (uVar1 & 1);
  *(undefined4 *)(lVar9 + 0x1ac) = *(undefined4 *)(param_1[3] + 0x17c);
  *(undefined8 *)(lVar9 + 0x1b0) = *param_1;
  param_1[0x28] = lVar9;
  cVar5 = FUN_1432045d1();
  if (cVar5 == '\x01' && (param_4 & 4) != 0) {
    *(char *)(param_1 + 0xb0) = (1 < DAT_14c760de8) + '\x01';
  }
  bVar4 = FUN_143204716();
  *(byte *)(param_1 + 0xa4) = bVar4 & param_4;
  bVar4 = FUN_143204716();
  *(byte *)(param_1 + 0xa5) = param_4 >> 1 & bVar4;
  plVar3 = (longlong *)param_1[0x5b];
  if (plVar3 != (longlong *)0x0) {
    uVar6 = (**(code **)(*plVar3 + 8))(plVar3,0);
    *(undefined1 *)(param_1 + 0x5c) = uVar6;
    uVar6 = (**(code **)(*(longlong *)param_1[0x5b] + 8))((longlong *)param_1[0x5b],1);
    *(undefined1 *)((longlong)param_1 + 0x2e1) = uVar6;
  }
  return param_1;
}



// FUNCTION 140778010 FUN_140778010 body=4943 status=ok
// SIG undefined FUN_140778010(void)

void FUN_140778010(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  char cVar8;
  int iVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  uint uVar14;
  longlong lVar15;
  int *piVar16;
  longlong *plVar17;
  ulonglong uVar18;
  bool bVar19;
  undefined1 auStack_258 [40];
  longlong *local_230;
  longlong local_228;
  undefined4 local_220;
  longlong *local_218;
  undefined4 local_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  longlong *local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  longlong *local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong *local_a8;
  undefined8 uStack_a0;
  longlong *local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_258;
  if ((*(char *)(param_1 + 0x580) != '\0') &&
     ((*(char *)(param_1 + 0x558) != '\0' || (0 < DAT_14c760dec)))) {
    if (*(char *)(param_1 + 0x558) != '\0') {
      FUN_1400daade((longlong *)(param_1 + 0x550));
      puVar10 = *(undefined8 **)(param_1 + 0x60);
      *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_1 + 0x550);
      *(undefined8 *)(param_1 + 0x550) = 0;
      if (puVar10 != (undefined8 *)0x0) {
        LOCK();
        piVar16 = (int *)(puVar10 + 1);
        *piVar16 = *piVar16 + -1;
        UNLOCK();
        if (*piVar16 == 0) {
          (**(code **)*puVar10)(puVar10,1);
        }
      }
      if (*(char *)(param_1 + 0x558) == '\x01') {
        puVar10 = *(undefined8 **)(param_1 + 0x550);
        if (puVar10 != (undefined8 *)0x0) {
          LOCK();
          piVar16 = (int *)(puVar10 + 1);
          *piVar16 = *piVar16 + -1;
          UNLOCK();
          if (*piVar16 == 0) {
            (**(code **)*puVar10)(puVar10,1);
          }
        }
        *(undefined1 *)(param_1 + 0x558) = 0;
      }
    }
    FUN_1432047bc(&local_228,param_1 + 0x70);
    local_180 = *(undefined8 *)(param_1 + 0x168);
    *(undefined8 *)(param_1 + 0x168) = 0;
    local_178._0_4_ = *(undefined4 *)(param_1 + 0x170);
    local_178._4_4_ = *(undefined4 *)(param_1 + 0x174);
    *(undefined8 *)(param_1 + 0x170) = 0;
    local_170 = *(undefined8 *)(param_1 + 0x178);
    *(undefined8 *)(param_1 + 0x178) = 0;
    local_168._0_4_ = *(undefined4 *)(param_1 + 0x180);
    local_168._4_4_ = *(undefined4 *)(param_1 + 0x184);
    *(undefined8 *)(param_1 + 0x180) = 0;
    local_160 = *(undefined8 *)(param_1 + 0x188);
    *(undefined8 *)(param_1 + 0x188) = 0;
    local_158._0_4_ = *(undefined4 *)(param_1 + 400);
    local_158._4_4_ = *(undefined4 *)(param_1 + 0x194);
    *(undefined8 *)(param_1 + 400) = 0;
    local_150 = *(undefined8 *)(param_1 + 0x198);
    *(undefined8 *)(param_1 + 0x198) = 0;
    local_148._0_4_ = *(undefined4 *)(param_1 + 0x1a0);
    local_148._4_4_ = *(undefined4 *)(param_1 + 0x1a4);
    *(undefined8 *)(param_1 + 0x1a0) = 0;
    local_140 = *(undefined8 *)(param_1 + 0x1a8);
    *(undefined8 *)(param_1 + 0x1a8) = 0;
    local_138._0_4_ = *(undefined4 *)(param_1 + 0x1b0);
    local_138._4_4_ = *(undefined4 *)(param_1 + 0x1b4);
    *(undefined8 *)(param_1 + 0x1b0) = 0;
    local_130 = *(undefined8 *)(param_1 + 0x120);
    local_128 = *(undefined8 *)(param_1 + 0x128);
    *(undefined8 *)(param_1 + 0x128) = 0;
    local_120._0_4_ = *(undefined4 *)(param_1 + 0x130);
    local_120._4_4_ = *(undefined4 *)(param_1 + 0x134);
    *(undefined8 *)(param_1 + 0x130) = 0;
    local_118 = *(undefined8 *)(param_1 + 0x448);
    *(undefined8 *)(param_1 + 0x448) = 0;
    local_110._0_4_ = *(undefined4 *)(param_1 + 0x450);
    local_110._4_4_ = *(undefined4 *)(param_1 + 0x454);
    *(undefined8 *)(param_1 + 0x450) = 0;
    local_108 = *(undefined8 *)(param_1 + 0x458);
    *(undefined8 *)(param_1 + 0x458) = 0;
    local_100._0_4_ = *(undefined4 *)(param_1 + 0x460);
    local_100._4_4_ = *(undefined4 *)(param_1 + 0x464);
    *(undefined8 *)(param_1 + 0x460) = 0;
    local_f8 = *(undefined8 *)(param_1 + 0x588);
    *(undefined8 *)(param_1 + 0x588) = 0;
    local_f0._0_4_ = *(undefined4 *)(param_1 + 0x590);
    local_f0._4_4_ = *(undefined4 *)(param_1 + 0x594);
    *(undefined8 *)(param_1 + 0x590) = 0;
    local_e8 = (longlong *)0x0;
    local_d8 = (longlong *)0x0;
    puVar10 = (undefined8 *)FUN_14001cc68(0x148,8);
    *puVar10 = &PTR_LAB_14a38b770;
    local_d8 = puVar10;
    FUN_1432047bc(puVar10 + 1,&local_228);
    puVar10[0x16] = local_180;
    local_180 = 0;
    *(undefined4 *)(puVar10 + 0x17) = (undefined4)local_178;
    *(undefined4 *)((longlong)puVar10 + 0xbc) = local_178._4_4_;
    local_178 = 0;
    puVar10[0x18] = local_170;
    local_170 = 0;
    *(undefined4 *)(puVar10 + 0x19) = (undefined4)local_168;
    *(undefined4 *)((longlong)puVar10 + 0xcc) = local_168._4_4_;
    local_168 = 0;
    puVar10[0x1a] = local_160;
    local_160 = 0;
    *(undefined4 *)(puVar10 + 0x1b) = (undefined4)local_158;
    *(undefined4 *)((longlong)puVar10 + 0xdc) = local_158._4_4_;
    local_158 = 0;
    puVar10[0x1c] = local_150;
    local_150 = 0;
    *(undefined4 *)(puVar10 + 0x1d) = (undefined4)local_148;
    *(undefined4 *)((longlong)puVar10 + 0xec) = local_148._4_4_;
    local_148 = 0;
    puVar10[0x1e] = local_140;
    local_140 = 0;
    *(undefined4 *)(puVar10 + 0x1f) = (undefined4)local_138;
    *(undefined4 *)((longlong)puVar10 + 0xfc) = local_138._4_4_;
    local_138 = 0;
    puVar10[0x20] = local_130;
    puVar10[0x21] = local_128;
    local_128 = 0;
    *(undefined4 *)(puVar10 + 0x22) = (undefined4)local_120;
    *(undefined4 *)((longlong)puVar10 + 0x114) = local_120._4_4_;
    local_120 = 0;
    puVar10[0x23] = local_118;
    local_118 = 0;
    *(undefined4 *)(puVar10 + 0x24) = (undefined4)local_110;
    *(undefined4 *)((longlong)puVar10 + 0x124) = local_110._4_4_;
    local_110 = 0;
    puVar10[0x25] = local_108;
    local_108 = 0;
    *(undefined4 *)(puVar10 + 0x26) = (undefined4)local_100;
    *(undefined4 *)((longlong)puVar10 + 0x134) = local_100._4_4_;
    local_100 = 0;
    puVar10[0x27] = local_f8;
    local_f8 = 0;
    *(undefined4 *)(puVar10 + 0x28) = (undefined4)local_f0;
    *(undefined4 *)((longlong)puVar10 + 0x144) = local_f0._4_4_;
    local_f0 = 0;
    if (puVar10 != (undefined8 *)&DAT_fffffffffffffff8) {
      local_e8 = (longlong *)&DAT_143215d44;
    }
    local_a8 = *(longlong **)(param_1 + 0x20);
    uStack_a0 = *(longlong *)(param_1 + 0x28);
    local_98 = *(longlong **)(param_1 + 0x30);
    uStack_90 = *(undefined8 *)(param_1 + 0x38);
    local_88 = *(undefined8 *)(param_1 + 0x40);
    uStack_80 = *(undefined8 *)(param_1 + 0x48);
    local_78 = *(undefined8 *)(param_1 + 0x50);
    uStack_70 = *(undefined8 *)(param_1 + 0x58);
    uVar6 = local_78;
    uVar7 = uStack_70;
    uVar4 = local_88;
    uVar5 = uStack_80;
    uVar3 = uStack_90;
    lVar15 = uStack_a0;
    *(ulonglong *)(param_1 + 0x50) = CONCAT44(uStack_b4,local_b8);
    *(ulonglong *)(param_1 + 0x58) = CONCAT44(uStack_ac,uStack_b0);
    *(ulonglong *)(param_1 + 0x40) = CONCAT44(uStack_c4,local_c8);
    *(ulonglong *)(param_1 + 0x48) = CONCAT44(uStack_bc,uStack_c0);
    *(longlong **)(param_1 + 0x30) = local_d8;
    *(ulonglong *)(param_1 + 0x38) = CONCAT44(uStack_cc,uStack_d0);
    *(longlong **)(param_1 + 0x20) = local_e8;
    *(ulonglong *)(param_1 + 0x28) = CONCAT44(uStack_dc,uStack_e0);
    uStack_a0._4_4_ = (undefined4)((ulonglong)uStack_a0 >> 0x20);
    uStack_90._4_4_ = (undefined4)((ulonglong)uStack_90 >> 0x20);
    local_88._4_4_ = (undefined4)((ulonglong)local_88 >> 0x20);
    uStack_80._4_4_ = (undefined4)((ulonglong)uStack_80 >> 0x20);
    local_78._4_4_ = (undefined4)((ulonglong)local_78 >> 0x20);
    uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
    local_b8 = (undefined4)local_78;
    uStack_b4 = local_78._4_4_;
    uStack_b0 = (undefined4)uStack_70;
    uStack_ac = uStack_70._4_4_;
    local_c8 = (undefined4)local_88;
    uStack_c4 = local_88._4_4_;
    uStack_c0 = (undefined4)uStack_80;
    uStack_bc = uStack_80._4_4_;
    local_d8 = local_98;
    uStack_d0 = (undefined4)uStack_90;
    uStack_cc = uStack_90._4_4_;
    local_e8 = local_a8;
    uStack_e0 = (undefined4)uStack_a0;
    uStack_dc = uStack_a0._4_4_;
    uStack_a0 = lVar15;
    uStack_90 = uVar3;
    local_88 = uVar4;
    uStack_80 = uVar5;
    local_78 = uVar6;
    uStack_70 = uVar7;
    if (local_a8 != (longlong *)0x0) {
      plVar11 = local_d8;
      if (local_98 == (longlong *)0x0) {
        plVar11 = (longlong *)&local_c8;
      }
      (**(code **)(*plVar11 + 0x10))();
    }
    FUN_143204a28(&local_228);
  }
  iVar9 = DAT_14ca83d40 + -1;
  bVar19 = DAT_14ca83d40 == 1;
  DAT_14ca83d40 = iVar9;
  if (bVar19) {
    local_228 = 0;
    local_220 = 0;
    FUN_14007658c(&DAT_14ca850c8,&local_228,3);
  }
  lVar15 = param_1 + 0x618;
  if (*(longlong *)(param_1 + 0x638) != 0) {
    lVar15 = *(longlong *)(param_1 + 0x638);
  }
  FUN_144717c65(lVar15,*(undefined4 *)(param_1 + 0x640));
  if (*(longlong *)(param_1 + 0x638) != 0) {
    FUN_1400020a8();
  }
  FUN_144a80dc3(*(undefined8 *)(param_1 + 0x608),*(undefined4 *)(param_1 + 0x610));
  *(undefined4 *)(param_1 + 0x600) = 0;
  *(undefined4 *)(param_1 + 0x5b0) = 0;
  if (*(int *)(param_1 + 0x5b4) != 0) {
    FUN_143215a7c(param_1 + 0x5a8);
  }
  *(undefined8 *)(param_1 + 0x5d8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x5d0) = 0;
  if (0x80 < *(uint *)(param_1 + 0x5d4)) {
    *(undefined4 *)(param_1 + 0x5d4) = 0x80;
    FUN_14742bf28(param_1 + 0x5b8,0);
  }
  FUN_144b1c938(*(undefined8 *)(param_1 + 0x588),*(undefined4 *)(param_1 + 0x590));
  if (*(char *)(param_1 + 0x578) == '\x01') {
    puVar10 = *(undefined8 **)(param_1 + 0x570);
    if (puVar10 != (undefined8 *)0x0) {
      LOCK();
      piVar16 = (int *)(puVar10 + 1);
      *piVar16 = *piVar16 + -1;
      UNLOCK();
      if (*piVar16 == 0) {
        (**(code **)*puVar10)(puVar10,1);
      }
    }
    *(undefined1 *)(param_1 + 0x578) = 0;
  }
  if (*(char *)(param_1 + 0x568) == '\x01') {
    puVar10 = *(undefined8 **)(param_1 + 0x560);
    if (puVar10 != (undefined8 *)0x0) {
      LOCK();
      piVar16 = (int *)(puVar10 + 1);
      *piVar16 = *piVar16 + -1;
      UNLOCK();
      if (*piVar16 == 0) {
        (**(code **)*puVar10)(puVar10,1);
      }
    }
    *(undefined1 *)(param_1 + 0x568) = 0;
  }
  if (*(char *)(param_1 + 0x558) == '\x01') {
    puVar10 = *(undefined8 **)(param_1 + 0x550);
    if (puVar10 != (undefined8 *)0x0) {
      LOCK();
      piVar16 = (int *)(puVar10 + 1);
      *piVar16 = *piVar16 + -1;
      UNLOCK();
      if (*piVar16 == 0) {
        (**(code **)*puVar10)(puVar10,1);
      }
    }
    *(undefined1 *)(param_1 + 0x558) = 0;
  }
  if (*(char *)(param_1 + 0x548) == '\x01') {
    puVar10 = *(undefined8 **)(param_1 + 0x540);
    if (puVar10 != (undefined8 *)0x0) {
      LOCK();
      piVar16 = (int *)(puVar10 + 1);
      *piVar16 = *piVar16 + -1;
      UNLOCK();
      if (*piVar16 == 0) {
        (**(code **)*puVar10)(puVar10,1);
      }
    }
    *(undefined1 *)(param_1 + 0x548) = 0;
  }
  lVar15 = 0;
  do {
    FUN_14473400f(*(undefined8 *)(param_1 + 0x510 + lVar15),
                  *(undefined4 *)(param_1 + 0x518 + lVar15));
    lVar15 = lVar15 + -0x10;
  } while (lVar15 != -0x20);
  FUN_144a88358(*(undefined8 *)(param_1 + 0x458),*(undefined4 *)(param_1 + 0x460));
  FUN_1447350ca(*(undefined8 *)(param_1 + 0x448),*(undefined4 *)(param_1 + 0x450));
  *(undefined4 *)(param_1 + 0x430) = 0;
  *(undefined4 *)(param_1 + 0x3e0) = 0;
  if (*(int *)(param_1 + 0x3e4) != 0) {
    FUN_143214208(param_1 + 0x3d8);
  }
  *(undefined8 *)(param_1 + 0x408) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x400) = 0;
  if (0x80 < *(uint *)(param_1 + 0x404)) {
    *(undefined4 *)(param_1 + 0x404) = 0x80;
    FUN_14742bf28(param_1 + 1000,0);
  }
  FUN_140047170(param_1 + 0x3c0);
  FUN_14004710c(param_1 + 0x3a8);
  *(undefined4 *)(param_1 + 0x368) = 0;
  if (*(int *)(param_1 + 0x36c) != 0) {
    FUN_14178ebae((longlong *)(param_1 + 0x360),0);
  }
  lVar15 = param_1 + 0x380;
  uVar14 = *(uint *)(param_1 + 0x394);
  iVar9 = 0;
  if ((int)uVar14 < 1) {
    *(undefined4 *)(param_1 + 0x390) = 0;
    FUN_14742c066(lVar15);
    iVar9 = *(int *)(param_1 + 0x390);
    uVar14 = *(uint *)(param_1 + 0x394);
  }
  *(uint *)(param_1 + 0x390) = iVar9 + 1U;
  if (uVar14 < iVar9 + 1U) {
    FUN_14742c124(lVar15,iVar9);
  }
  if (*(longlong *)(param_1 + 0x388) != 0) {
    lVar15 = *(longlong *)(param_1 + 0x388);
  }
  *(undefined8 *)(lVar15 + (longlong)iVar9 * 8) = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x398) = 0;
  *(undefined4 *)(param_1 + 0x378) = 0;
  if (*(int *)(param_1 + 0x37c) != 0) {
    FUN_144adac1c(param_1 + 0x370);
  }
  FUN_1432143d8(param_1 + 0x388);
  FUN_140047170(param_1 + 0x370);
  lVar15 = *(longlong *)(param_1 + 0x360);
  if (lVar15 != 0) {
    piVar16 = (int *)((lVar15 + -8) - (ulonglong)*(uint *)(lVar15 + -8));
    LOCK();
    *piVar16 = *piVar16 + -1;
    UNLOCK();
    if (*piVar16 == 0) {
      if (*(longlong *)(piVar16 + 0x10) - (longlong)piVar16 == 0x10000) {
        lVar15 = DAT_14c872d30;
        if (DAT_14c872d30 == 0) {
          lVar15 = FUN_145bdc178();
        }
        FUN_140028df4(lVar15,piVar16);
      }
      else {
        FUN_144705e74(piVar16);
      }
    }
  }
  FUN_140047170(param_1 + 0x348);
  FUN_14004710c(param_1 + 0x330);
  *(undefined4 *)(param_1 + 0x2f0) = 0;
  if (*(int *)(param_1 + 0x2f4) != 0) {
    FUN_14178ebbc((longlong *)(param_1 + 0x2e8),0);
  }
  lVar15 = param_1 + 0x308;
  uVar14 = *(uint *)(param_1 + 0x31c);
  iVar9 = 0;
  if ((int)uVar14 < 1) {
    *(undefined4 *)(param_1 + 0x318) = 0;
    FUN_14742c066(lVar15);
    iVar9 = *(int *)(param_1 + 0x318);
    uVar14 = *(uint *)(param_1 + 0x31c);
  }
  *(uint *)(param_1 + 0x318) = iVar9 + 1U;
  if (uVar14 < iVar9 + 1U) {
    FUN_14742c124(lVar15,iVar9);
  }
  if (*(longlong *)(param_1 + 0x310) != 0) {
    lVar15 = *(longlong *)(param_1 + 0x310);
  }
  *(undefined8 *)(lVar15 + (longlong)iVar9 * 8) = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 800) = 0;
  *(undefined4 *)(param_1 + 0x300) = 0;
  if (*(int *)(param_1 + 0x304) != 0) {
    FUN_144adac1c(param_1 + 0x2f8);
  }
  FUN_1432143d8(param_1 + 0x310);
  FUN_140047170(param_1 + 0x2f8);
  lVar15 = *(longlong *)(param_1 + 0x2e8);
  if (lVar15 != 0) {
    piVar16 = (int *)((lVar15 + -8) - (ulonglong)*(uint *)(lVar15 + -8));
    LOCK();
    *piVar16 = *piVar16 + -1;
    UNLOCK();
    if (*piVar16 == 0) {
      if (*(longlong *)(piVar16 + 0x10) - (longlong)piVar16 == 0x10000) {
        lVar15 = DAT_14c872d30;
        if (DAT_14c872d30 == 0) {
          lVar15 = FUN_145bdc178();
        }
        FUN_140028df4(lVar15,piVar16);
      }
      else {
        FUN_144705e74(piVar16);
      }
    }
  }
  *(undefined4 *)(param_1 + 600) = 0;
  if (*(int *)(param_1 + 0x25c) != 0) {
    FUN_14321443c(param_1 + 0x250);
  }
  lVar15 = param_1 + 0x270;
  uVar14 = *(uint *)(param_1 + 0x284);
  iVar9 = 0;
  if ((int)uVar14 < 1) {
    *(undefined4 *)(param_1 + 0x280) = 0;
    FUN_14742c1ec(lVar15);
    iVar9 = *(int *)(param_1 + 0x280);
    uVar14 = *(uint *)(param_1 + 0x284);
  }
  *(uint *)(param_1 + 0x280) = iVar9 + 1U;
  if (uVar14 < iVar9 + 1U) {
    FUN_14742c358(lVar15,iVar9);
  }
  if (*(longlong *)(param_1 + 0x278) != 0) {
    lVar15 = *(longlong *)(param_1 + 0x278);
  }
  *(undefined8 *)(lVar15 + (longlong)iVar9 * 8) = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x288) = 0;
  *(undefined4 *)(param_1 + 0x268) = 0;
  if (*(int *)(param_1 + 0x26c) != 0) {
    FUN_14321444a(param_1 + 0x260);
  }
  *(undefined4 *)(param_1 + 0x1e0) = 0;
  if (*(int *)(param_1 + 0x1e4) != 0) {
    FUN_143214458(param_1 + 0x1d8);
  }
  lVar15 = param_1 + 0x1f8;
  uVar14 = *(uint *)(param_1 + 0x20c);
  iVar9 = 0;
  if ((int)uVar14 < 1) {
    *(undefined4 *)(param_1 + 0x208) = 0;
    FUN_14742c1ec(lVar15);
    iVar9 = *(int *)(param_1 + 0x208);
    uVar14 = *(uint *)(param_1 + 0x20c);
  }
  *(uint *)(param_1 + 0x208) = iVar9 + 1U;
  if (uVar14 < iVar9 + 1U) {
    FUN_14742c358(lVar15,iVar9);
  }
  if (*(longlong *)(param_1 + 0x200) != 0) {
    lVar15 = *(longlong *)(param_1 + 0x200);
  }
  *(undefined8 *)(lVar15 + (longlong)iVar9 * 8) = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x210) = 0;
  *(undefined4 *)(param_1 + 0x1f0) = 0;
  if (*(int *)(param_1 + 500) != 0) {
    FUN_14321444a(param_1 + 0x1e8);
  }
  if (0 < (longlong)*(int *)(param_1 + 0x1b0)) {
    uVar13 = (longlong)*(int *)(param_1 + 0x1b0) + 1;
    do {
      puVar10 = *(undefined8 **)(*(longlong *)(param_1 + 0x1a8) + -0x10 + uVar13 * 8);
      (**(code **)*puVar10)(puVar10,0);
      uVar13 = uVar13 - 1;
    } while (1 < uVar13);
  }
  *(undefined4 *)(param_1 + 0x1b0) = 0;
  if (*(int *)(param_1 + 0x1b4) != 0) {
    FUN_143215a6e((longlong *)(param_1 + 0x1a8));
  }
  *(undefined4 *)(param_1 + 0x1a0) = 0;
  if (*(int *)(param_1 + 0x1a4) != 0) {
    FUN_143215a60(param_1 + 0x198);
  }
  FUN_1432159c4(param_1 + 0x188);
  *(undefined4 *)(param_1 + 0x180) = 0;
  if (*(int *)(param_1 + 0x184) != 0) {
    FUN_14178ed58(param_1 + 0x178,0);
  }
  if (0 < (longlong)*(int *)(param_1 + 0x170)) {
    uVar13 = (longlong)*(int *)(param_1 + 0x170) + 1;
    do {
      puVar10 = *(undefined8 **)(*(longlong *)(param_1 + 0x168) + -0x10 + uVar13 * 8);
      (**(code **)*puVar10)(puVar10,0);
      uVar13 = uVar13 - 1;
    } while (1 < uVar13);
  }
  *(undefined4 *)(param_1 + 0x170) = 0;
  if (*(int *)(param_1 + 0x174) != 0) {
    FUN_1432159b6((longlong *)(param_1 + 0x168));
  }
  TlsSetValue(DAT_14ca954e4,*(LPVOID *)(param_1 + 0x118));
  FUN_143204548(param_1 + 0xe0);
  if (*(longlong *)(param_1 + 0x108) != 0) {
    FUN_1400020a8();
  }
  FUN_14004673c(param_1 + 0xe0,0);
  FUN_143204548(param_1 + 0xa8);
  if (*(longlong *)(param_1 + 0xd0) != 0) {
    FUN_1400020a8();
  }
  FUN_14004673c(param_1 + 0xa8,0);
  FUN_143204548(param_1 + 0x70);
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FUN_1400020a8();
  }
  FUN_14004673c(param_1 + 0x70,0);
  if (*(longlong *)(param_1 + 0x20) != 0) {
    local_a8 = DAT_14ca95618;
    if (DAT_14ca95618 != (longlong *)0x0) {
      LOCK();
      *(int *)(DAT_14ca95618 + 1) = (int)DAT_14ca95618[1] + 1;
      UNLOCK();
    }
    uStack_a0 = *(longlong *)(param_1 + 0x60);
    if (uStack_a0 != 0) {
      LOCK();
      *(int *)(uStack_a0 + 8) = *(int *)(uStack_a0 + 8) + 1;
      UNLOCK();
    }
    local_228 = *(longlong *)(param_1 + 0x20);
    local_218 = *(longlong **)(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x30) = 0;
    local_208 = *(undefined4 *)(param_1 + 0x40);
    uStack_204 = *(undefined4 *)(param_1 + 0x44);
    uStack_200 = *(undefined4 *)(param_1 + 0x48);
    uStack_1fc = *(undefined4 *)(param_1 + 0x4c);
    local_1f8 = *(undefined4 *)(param_1 + 0x50);
    uStack_1f4 = *(undefined4 *)(param_1 + 0x54);
    uStack_1f0 = *(undefined4 *)(param_1 + 0x58);
    uStack_1ec = *(undefined4 *)(param_1 + 0x5c);
    if (local_228 != 0) {
      *(undefined8 *)(param_1 + 0x20) = 0;
    }
    plVar11 = TlsGetValue(DAT_14c896140);
    if (plVar11 == (longlong *)0x0) {
      plVar11 = (longlong *)FUN_14001cc68(0x18,0x10);
      *plVar11 = 0;
      plVar11[1] = 0;
      *(undefined4 *)(plVar11 + 2) = 0;
      TlsSetValue(DAT_14c896140,plVar11);
    }
    plVar17 = (longlong *)plVar11[1];
    if (plVar17 == (longlong *)0x0) {
      plVar17 = (longlong *)*plVar11;
      if (plVar17 == (longlong *)0x0) {
        uVar14 = (uint)DAT_14c896180;
        plVar17 = DAT_14c896180;
        while (DAT_14c896180 = plVar17, local_e8 = plVar17, ((ulonglong)plVar17 & 0x3ffffff) != 0) {
          local_230 = (longlong *)(((ulonglong)plVar17 & 0xfffffffffc000000) + 0x4000000);
          if ((ulonglong)local_230 >> 0x1a < (ulonglong)plVar17 >> 0x1a) {
            FUN_14000f986(0x3a83126f);
          }
          uVar13 = (ulonglong)((uVar14 & 0x3ffffff) >> 0xe);
          uVar18 = (ulonglong)((uint)plVar17 & 0x3fff);
          local_230 = (longlong *)
                      ((ulonglong)local_230 & 0xfffffffffc000000 |
                      (ulonglong)
                      *(uint *)(*(longlong *)(&DAT_14c833b00 + uVar13 * 8) + 0x10 + uVar18 * 0x18));
          LOCK();
          bVar19 = local_e8 == DAT_14c896180;
          plVar17 = local_230;
          if (!bVar19) {
            plVar17 = DAT_14c896180;
          }
          DAT_14c896180 = plVar17;
          UNLOCK();
          if (bVar19) {
            *(undefined4 *)(*(longlong *)(&DAT_14c833b00 + uVar13 * 8) + uVar18 * 0x18 + 0x10) = 0;
            plVar17 = *(longlong **)
                       (*(longlong *)(&DAT_14c833b00 + uVar13 * 8) + 8 +
                       (ulonglong)(uVar14 & 0x3fff) * 0x18);
            FUN_1447d080c(uVar14 & 0x3ffffff);
            plVar11[1] = (longlong)plVar17;
            if (plVar17 == (longlong *)0x0) goto LAB_140778e52;
            goto LAB_140778e8d;
          }
          uVar14 = (uint)DAT_14c896180;
          plVar17 = DAT_14c896180;
        }
        plVar11[1] = 0;
LAB_140778e52:
        puVar10 = (undefined8 *)FUN_14001cc68(0x10000,0);
        plVar11[1] = (longlong)puVar10;
        iVar9 = 0xff;
        do {
          puVar12 = puVar10 + 0x20;
          *puVar10 = puVar12;
          iVar9 = iVar9 + -1;
          puVar10 = puVar12;
        } while (iVar9 != 0);
        *puVar12 = 0;
        plVar17 = (longlong *)plVar11[1];
      }
      else {
        plVar11[1] = (longlong)plVar17;
        *plVar11 = 0;
      }
LAB_140778e8d:
      *(undefined4 *)(plVar11 + 2) = 0x100;
      iVar9 = 0xff;
    }
    else {
      iVar9 = (int)plVar11[2] + -1;
    }
    plVar11[1] = *plVar17;
    *(int *)(plVar11 + 2) = iVar9;
    *plVar17 = (longlong)UE::Tasks::Private::FTaskBase::vftable;
    plVar17[1] = (longlong)&DAT_100000002;
    plVar17[2] = 0;
    *(undefined4 *)(plVar17 + 3) = 0;
    *(undefined4 *)(plVar17 + 4) = 0xffffffff;
    plVar17[6] = 0;
    plVar17[7] = 0x100000000;
    *(undefined1 *)(plVar17 + 8) = 1;
    plVar17[0xe] = (longlong)
                   LowLevelTasks::
                   TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                   TTaskDelegateDummy::vftable;
    plVar17[0xf] = 0;
    plVar17[0x10] = -0x17ffffffffffffe0;
    plVar17[0x12] = 0;
    plVar17[0x13] = 0x100000000;
    *(undefined2 *)(plVar17 + 0x14) = 0;
    LOCK();
    bVar19 = (char)plVar17[8] == '\x01';
    if (bVar19) {
      *(char *)(plVar17 + 8) = '\0';
    }
    UNLOCK();
    if (!bVar19) {
      FUN_14008cdb0(plVar17 + 8);
    }
    *plVar17 = (longlong)&PTR_FUN_14a38b758;
    if (*(code **)(plVar17[0xe] + 0x18) != FUN_144713626) {
      (**(code **)(plVar17[0xe] + 0x18))(plVar17 + 0xe,plVar17 + 9);
    }
    plVar17[0xe] = (longlong)
                   LowLevelTasks::
                   TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                   TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                   ::vftable;
    plVar17[9] = (longlong)plVar17;
    plVar17[10] = (longlong)plVar17;
    lVar15 = *(longlong *)
              (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x2b8);
    if (lVar15 == 0) {
      lVar15 = 0;
    }
    else {
      lVar15 = *(longlong *)(lVar15 + 0x30);
    }
    plVar17[0xf] = lVar15;
    plVar17[0x10] = -0x37ffffad71db7800;
    *(undefined4 *)((longlong)plVar17 + 0x1c) = 0;
    plVar17[0x16] = local_228;
    plVar17[0x18] = (longlong)local_218;
    local_218 = (longlong *)0x0;
    plVar17[0x1c] = CONCAT44(uStack_1f4,local_1f8);
    plVar17[0x1d] = CONCAT44(uStack_1ec,uStack_1f0);
    *(undefined4 *)(plVar17 + 0x1a) = local_208;
    *(undefined4 *)((longlong)plVar17 + 0xd4) = uStack_204;
    *(undefined4 *)(plVar17 + 0x1b) = uStack_200;
    *(undefined4 *)((longlong)plVar17 + 0xdc) = uStack_1fc;
    if (local_228 != 0) {
      local_228 = 0;
    }
    *plVar17 = (longlong)&PTR_FUN_14a38b748;
    LOCK();
    *(int *)((longlong)plVar17 + 0xc) = *(int *)((longlong)plVar17 + 0xc) + 2;
    UNLOCK();
    iVar9 = 0;
    lVar15 = 0;
    do {
      lVar2 = *(longlong *)((longlong)&local_a8 + lVar15);
      if ((lVar2 == 0) || (cVar8 = FUN_1456bb142(lVar2 + 0x88,plVar17), cVar8 == '\0')) {
        iVar9 = iVar9 + 1;
      }
      else {
        LOCK();
        *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
        UNLOCK();
        FUN_1456bb1d4(plVar17 + 5,lVar2);
      }
      lVar15 = lVar15 + 8;
    } while (lVar15 != 0x10);
    LOCK();
    *(int *)((longlong)plVar17 + 0xc) = *(int *)((longlong)plVar17 + 0xc) - iVar9;
    UNLOCK();
    local_e8 = (longlong *)CONCAT71(local_e8._1_7_,1);
    FUN_1447439e4(plVar17);
    plVar11 = DAT_14ca95618;
    if (DAT_14ca95618 != (longlong *)0x0) {
      LOCK();
      plVar1 = DAT_14ca95618 + 1;
      DAT_14ca95618 = plVar17;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      plVar17 = DAT_14ca95618;
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar11)(plVar11,1);
        plVar17 = DAT_14ca95618;
      }
    }
    DAT_14ca95618 = plVar17;
    if (local_228 != 0) {
      plVar11 = (longlong *)&local_208;
      if (local_218 != (longlong *)0x0) {
        plVar11 = local_218;
      }
      (**(code **)(*plVar11 + 0x10))(plVar11);
    }
    lVar15 = 0x10;
    do {
      puVar10 = *(undefined8 **)((longlong)&uStack_b0 + lVar15);
      if (puVar10 != (undefined8 *)0x0) {
        LOCK();
        piVar16 = (int *)(puVar10 + 1);
        *piVar16 = *piVar16 + -1;
        UNLOCK();
        if (*piVar16 == 0) {
          (**(code **)*puVar10)(puVar10,1);
        }
      }
      lVar15 = lVar15 + -8;
    } while (lVar15 != 0);
  }
  puVar10 = *(undefined8 **)(param_1 + 0x60);
  if (puVar10 != (undefined8 *)0x0) {
    LOCK();
    piVar16 = (int *)(puVar10 + 1);
    *piVar16 = *piVar16 + -1;
    UNLOCK();
    if (*piVar16 == 0) {
      (**(code **)*puVar10)(puVar10,1);
    }
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    plVar11 = (longlong *)(param_1 + 0x40);
    if (*(longlong **)(param_1 + 0x30) != (longlong *)0x0) {
      plVar11 = *(longlong **)(param_1 + 0x30);
    }
    (**(code **)(*plVar11 + 0x10))(plVar11);
  }
  if ((local_60 ^ (ulonglong)auStack_258) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140779360 FUN_140779360 body=37652 status=ok
// SIG undefined FUN_140779360(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140779360(LARGE_INTEGER *param_1)

{
  int *piVar1;
  byte bVar2;
  byte bVar3;
  ushort uVar4;
  undefined2 uVar5;
  undefined4 uVar6;
  code *pcVar7;
  uint *puVar8;
  ulonglong *puVar9;
  _struct_19 _Var10;
  undefined4 uVar11;
  longlong lVar12;
  longlong lVar13;
  undefined *puVar14;
  undefined4 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  char cVar19;
  undefined1 uVar20;
  byte bVar21;
  int iVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  DWORD DVar26;
  longlong lVar27;
  undefined8 uVar28;
  LARGE_INTEGER *pLVar29;
  LARGE_INTEGER LVar30;
  LARGE_INTEGER *pLVar31;
  undefined8 *puVar32;
  undefined8 *puVar33;
  longlong *plVar34;
  LARGE_INTEGER LVar35;
  longlong *plVar36;
  _struct_19 *p_Var37;
  longlong *plVar38;
  longlong *plVar39;
  undefined8 *puVar40;
  void *pvVar41;
  byte bVar42;
  undefined1 *puVar43;
  int iVar44;
  undefined1 *puVar45;
  undefined7 uVar48;
  LARGE_INTEGER *pLVar46;
  longlong *plVar47;
  int iVar49;
  ulonglong uVar50;
  int iVar51;
  _struct_19 _Var52;
  DWORD DVar53;
  uint uVar54;
  undefined *puVar55;
  LONGLONG LVar56;
  longlong lVar57;
  LARGE_INTEGER *pLVar58;
  DWORD DVar59;
  uint uVar60;
  undefined2 uVar61;
  longlong lVar62;
  ulonglong uVar63;
  ulonglong uVar64;
  uint uVar65;
  undefined4 uVar66;
  longlong lVar67;
  void *_Dst;
  size_t _Size;
  bool bVar68;
  bool bVar69;
  undefined1 local_338 [32];
  undefined4 local_318;
  LARGE_INTEGER *local_310;
  LARGE_INTEGER *local_308;
  byte local_2f9;
  undefined8 local_2f8;
  DWORD local_2ec;
  LARGE_INTEGER *local_2e8;
  longlong *local_2e0;
  LARGE_INTEGER *local_2d8;
  LARGE_INTEGER *local_2d0;
  ulonglong local_2c8;
  undefined4 local_2bc;
  undefined8 *local_2b8;
  LARGE_INTEGER *local_2b0;
  DWORD local_2a8;
  DWORD local_2a4;
  longlong *local_2a0;
  longlong *local_298;
  LARGE_INTEGER *local_290;
  undefined4 local_284;
  undefined4 local_280;
  uint local_27c;
  longlong *local_278;
  LARGE_INTEGER local_270;
  longlong *local_268;
  DWORD local_25c;
  longlong *local_258;
  LARGE_INTEGER *local_250;
  uint local_244;
  longlong *local_240;
  ulonglong local_238;
  int local_230;
  uint local_22c;
  LARGE_INTEGER *local_228;
  ulonglong local_220;
  undefined8 local_218;
  undefined4 local_210;
  LARGE_INTEGER local_208;
  int local_200;
  undefined8 local_1f8;
  uint uStack_1f0;
  uint uStack_1ec;
  _struct_19 local_1e8;
  undefined8 uStack_1e0;
  _struct_19 local_1d8;
  undefined8 uStack_1d0;
  _struct_19 local_1c8;
  undefined8 uStack_1c0;
  longlong local_1b8;
  undefined8 uStack_1b0;
  longlong local_1a8;
  undefined8 uStack_1a0;
  undefined1 local_198 [16];
  undefined1 *local_188;
  undefined8 local_180;
  undefined1 local_178 [16];
  undefined1 *local_168;
  undefined8 local_160;
  LARGE_INTEGER local_158;
  undefined8 uStack_150;
  LARGE_INTEGER local_148;
  LARGE_INTEGER *pLStack_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  LARGE_INTEGER local_118;
  uint uStack_110;
  uint uStack_10c;
  LARGE_INTEGER local_108;
  LARGE_INTEGER *pLStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  LARGE_INTEGER local_98;
  undefined8 local_90;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)local_338;
  FUN_141660056(&DAT_14ca955a8);
  FUN_140069376(param_1);
  local_2b0 = param_1 + 0x2d;
  local_310 = param_1;
  lVar27 = FUN_144ada602(local_2b0,param_1 + 0xe);
  *(byte *)(lVar27 + 0x38) = *(byte *)(lVar27 + 0x38) | 8;
  uVar4 = *(ushort *)(lVar27 + 0x28);
  *(undefined4 *)(lVar27 + 0x48) = *(undefined4 *)(lVar27 + 0x2c);
  *(undefined4 *)(lVar27 + 0x4c) = *(undefined4 *)(lVar27 + 0x2c);
  iVar51 = *(int *)(lVar27 + 0xd0);
  *(uint *)(lVar27 + 0xd0) = iVar51 + 1U;
  if (*(uint *)(lVar27 + 0xd4) < iVar51 + 1U) {
    FUN_14742e1f0(lVar27 + 0xc0,iVar51);
  }
  lVar67 = lVar27 + 0xc0;
  if (*(longlong *)(lVar27 + 200) != 0) {
    lVar67 = *(longlong *)(lVar27 + 200);
  }
  *(longlong *)(lVar67 + (longlong)iVar51 * 8) = lVar27;
  iVar51 = *(int *)(lVar27 + 0xe8);
  *(uint *)(lVar27 + 0xe8) = iVar51 + 1U;
  if (*(uint *)(lVar27 + 0xec) < iVar51 + 1U) {
    FUN_14742e1f0(lVar27 + 0xd8,iVar51);
  }
  lVar67 = lVar27 + 0xd8;
  if (*(longlong *)(lVar27 + 0xe0) != 0) {
    lVar67 = *(longlong *)(lVar27 + 0xe0);
  }
  *(longlong *)(lVar67 + (longlong)iVar51 * 8) = lVar27;
  local_310[0x2a].s.LowPart = local_310[0x2a].s.LowPart + (uint)((uVar4 >> 2 & 1) != 0);
  *(int *)((longlong)local_310 + 0x154) = *(int *)((longlong)local_310 + 0x154) + (uVar4 & 1);
  *(undefined4 *)(lVar27 + 0x1ac) = *(undefined4 *)(local_310[3].QuadPart + 0x17c);
  ((LARGE_INTEGER *)(lVar27 + 0x1b0))->QuadPart = *(LONGLONG *)local_310;
  local_310[0x29].QuadPart = lVar27;
  local_2ec = local_310[0x2e].s.LowPart;
  local_188 = (undefined1 *)0x0;
  local_180 = 0x8000000000;
  local_1e8.LowPart = 0;
  local_1e8.HighPart = 0;
  uStack_1e0 = 0;
  local_1d8.LowPart = 0;
  local_1d8.HighPart = 0;
  uStack_1d0 = 0;
  local_1c8.LowPart = 0;
  local_1c8.HighPart = 0;
  uStack_1c0 = 0;
  local_1b8 = 0;
  uStack_1b0 = 0;
  local_1a8 = 0;
  uStack_1a0 = 0;
  local_168 = (undefined1 *)0x0;
  local_160 = 0x8000000000;
  if (*(char *)(local_310 + 0xc9) == '\x01') {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14ca95548) && (FUN_144b3d300(&DAT_14ca95548), DAT_14ca95548 == -1)) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      DAT_14ca95540 =
           (longlong *)
           (**(code **)(*DAT_14c8407a8 + 200))
                     (DAT_14c8407a8,L"r.pso.EnableAsyncCacheConsolidation",1);
      _Init_thread_footer(&DAT_14ca95548);
    }
    cVar19 = (**(code **)(*DAT_14ca95540 + 0xa8))();
    if (cVar19 == '\0') {
      local_118.s.LowPart = 0;
      local_118.s.HighPart = 0;
      uStack_110 = 0;
      FUN_14007658c(&DAT_14ca850c8,&local_118,1);
    }
    else {
      pLVar31 = local_310 + 0xc3;
      if (pLVar31 != (LARGE_INTEGER *)&DAT_14ca850c8) {
        pLVar29 = (LARGE_INTEGER *)local_310[199].QuadPart;
        if ((LARGE_INTEGER *)local_310[199].QuadPart == (LARGE_INTEGER *)0x0) {
          pLVar29 = pLVar31;
        }
        FUN_144717c65(pLVar29,local_310[200].s.LowPart);
        DVar59 = (DWORD)DAT_14ca850f0;
        puVar14 = DAT_14ca850e8;
        iVar51 = *(int *)((longlong)local_310 + 0x644);
        local_310[200].s.LowPart = (DWORD)DAT_14ca850f0;
        if (DVar59 == 0 && iVar51 == 0) {
          *(undefined4 *)((longlong)local_310 + 0x644) = 4;
        }
        else {
          puVar55 = &DAT_14ca850c8;
          if (puVar14 != (undefined *)0x0) {
            puVar55 = puVar14;
          }
          FUN_144727e94(pLVar31,DVar59);
          pLVar29 = (LARGE_INTEGER *)local_310[199].QuadPart;
          if ((LARGE_INTEGER *)local_310[199].QuadPart == (LARGE_INTEGER *)0x0) {
            pLVar29 = pLVar31;
          }
          FUN_144727e6e(pLVar29,puVar55,DVar59);
        }
      }
    }
  }
  local_2d8 = local_310 + 0xa0;
  if (local_310[0xa1].s.LowPart != 0) {
    FUN_143214472(local_2d8);
    iVar51 = *(int *)((longlong)local_310 + 0x50c);
    FUN_14473400f(local_310[0xa0].QuadPart,local_310[0xa1].s.LowPart);
    local_310[0xa1].s.LowPart = 0;
    if ((iVar51 < 0) && (*(int *)((longlong)local_310 + 0x50c) != 0)) {
      FUN_14742c7a4(local_2d8);
    }
  }
  FUN_140215426(local_310 + 0x98,0x7fffffffffffffff);
  FUN_143205394();
  DVar53 = local_310[0x4b].s.LowPart - local_310[0x51].s.LowPart;
  local_2a4 = local_310[0x30].s.LowPart;
  DVar59 = local_310[0x3c].s.LowPart - local_310[0x42].s.LowPart;
  local_2a8 = local_310[0x32].s.LowPart;
  iVar51 = local_2a8 - DVar53;
  if (*(char *)((longlong)local_310 + 0x2e1) == '\0') {
    iVar51 = 0;
  }
  bVar42 = *(byte *)(local_310 + 0x5c);
  iVar49 = local_2a4 - DVar59;
  if (bVar42 == 0) {
    iVar49 = 0;
  }
  iVar44 = iVar49 + iVar51;
  if (iVar44 < 0) goto LAB_1407814b3;
  DVar26 = local_310[0x36].s.LowPart;
  if ((int)uStack_1e0._4_4_ < iVar44) {
    FUN_144adae10(&local_1e8);
    bVar42 = *(byte *)(local_310 + 0x5c);
  }
  if ((bVar42 & 1) == 0) {
    DVar59 = local_2a4;
  }
  if ((int)DVar59 < 0) goto LAB_140781da2;
  if ((int)uStack_1d0._4_4_ < (int)DVar59) {
    FUN_144adae10(&local_1d8,DVar59);
  }
  if (*(char *)((longlong)local_310 + 0x2e1) == '\0') {
    DVar53 = local_2a8;
  }
  if ((int)DVar53 < 0) goto LAB_140781c28;
  if ((int)uStack_1c0._4_4_ < (int)DVar53) {
    FUN_144adae10(&local_1c8,DVar53);
  }
  uVar54 = local_310[0x36].s.LowPart;
  puVar45 = (undefined1 *)(ulonglong)uVar54;
  if ((int)uVar54 < 0) {
LAB_1407814ba:
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(puVar45);
  }
  if ((int)uStack_1b0._4_4_ < (int)uVar54) {
    FUN_14470e788();
  }
  uVar54 = local_310[0x34].s.LowPart;
  puVar45 = (undefined1 *)(ulonglong)uVar54;
  if ((int)uVar54 < 0) goto LAB_1407814ba;
  if ((int)uStack_1a0._4_4_ < (int)uVar54) {
    FUN_14470e3c6();
  }
  local_180 = CONCAT44(local_180._4_4_,local_310[0x36].s.LowPart);
  uVar54 = local_310[0x36].s.LowPart + 0x1f;
  if (0x1f < uVar54) {
    uVar60 = uVar54 >> 5;
    if (local_180._4_4_ + 0x1fU >> 5 < uVar60) {
      puVar45 = (undefined1 *)0x0;
      FUN_14178eaf4(local_198,0,uVar60);
      local_180 = CONCAT44(uVar54,(uint)local_180) & 0xffffffe0ffffffff;
    }
    puVar43 = local_188;
    if (local_188 == (undefined1 *)0x0) {
      puVar43 = local_198;
    }
    uVar48 = (undefined7)((ulonglong)puVar45 >> 8);
    if (uVar54 < 0x120) {
      uVar60 = uVar54 >> 3 & 0x3c;
      iVar44 = (int)CONCAT71(uVar48,0xff);
    }
    else {
      uVar60 = uVar60 << 2;
      iVar44 = (int)CONCAT71(uVar48,0xff);
    }
    memset(puVar43,iVar44,(ulonglong)uVar60);
    uVar54 = (uint)local_180 + 0x1f;
    if (-1 < (int)(uint)local_180) {
      uVar54 = (uint)local_180;
    }
    puVar45 = (undefined1 *)(ulonglong)(uVar54 & 0xffffffe0);
    if ((int)(uint)local_180 % 0x20 != 0) {
      puVar45 = local_188;
      if (local_188 == (undefined1 *)0x0) {
        puVar45 = local_198;
      }
      bVar42 = -(char)((int)(uint)local_180 % 0x20);
      *(uint *)(puVar45 + (longlong)((int)uVar54 >> 5) * 4) =
           (uint)(*(int *)(puVar45 + (longlong)((int)uVar54 >> 5) * 4) << (bVar42 & 0x1f)) >>
           (bVar42 & 0x1f);
    }
  }
  DVar53 = local_2a8 - iVar51;
  local_160 = CONCAT44(local_160._4_4_,local_310[0x34].s.LowPart);
  uVar54 = local_310[0x34].s.LowPart + 0x1f;
  local_25c = DVar26;
  if (0x1f < uVar54) {
    uVar60 = uVar54 >> 5;
    if (local_160._4_4_ + 0x1fU >> 5 < uVar60) {
      puVar45 = (undefined1 *)0x0;
      FUN_14178eaf4(local_178,0,uVar60);
      local_160 = CONCAT44(uVar54,(int)local_160) & 0xffffffe0ffffffff;
    }
    puVar43 = local_168;
    if (local_168 == (undefined1 *)0x0) {
      puVar43 = local_178;
    }
    uVar48 = (undefined7)((ulonglong)puVar45 >> 8);
    if (uVar54 < 0x120) {
      uVar60 = uVar54 >> 3 & 0x3c;
      iVar51 = (int)CONCAT71(uVar48,0xff);
    }
    else {
      uVar60 = uVar60 << 2;
      iVar51 = (int)CONCAT71(uVar48,0xff);
    }
    memset(puVar43,iVar51,(ulonglong)uVar60);
    iVar51 = (int)local_160 + 0x1f;
    if (-1 < (int)local_160) {
      iVar51 = (int)local_160;
    }
    if ((int)local_160 % 0x20 != 0) {
      puVar45 = local_168;
      if (local_168 == (undefined1 *)0x0) {
        puVar45 = local_178;
      }
      bVar42 = -(char)((int)local_160 % 0x20);
      *(uint *)(puVar45 + (longlong)(iVar51 >> 5) * 4) =
           (uint)(*(int *)(puVar45 + (longlong)(iVar51 >> 5) * 4) << (bVar42 & 0x1f)) >>
           (bVar42 & 0x1f);
    }
  }
  if ((ulonglong)
      ((longlong)(int)local_310[0x6d].s.LowPart - (longlong)(int)local_310[0x73].s.LowPart) <
      (ulonglong)(longlong)(int)DVar53) {
    if ((int)DVar53 < 0) goto LAB_140781c28;
    pLVar31 = local_310 + 0x6c;
    if (*(int *)((longlong)local_310 + 0x36c) < (int)DVar53) {
      FUN_14178ebae(pLVar31,DVar53);
    }
    uVar54 = local_310[0x7a].s.LowPart;
    uVar50 = (longlong)(int)DVar53 * 5;
    uVar60 = uVar54;
    if (uVar54 * 3 <= uVar50) {
      do {
        uVar23 = uVar60;
        uVar60 = uVar23 * 2 + 1;
      } while (uVar60 * 3 <= uVar50);
      uVar23 = uVar23 * 2;
      if (uVar54 <= uVar23) {
        pLVar29 = local_310 + 0x74;
        _Var10 = local_310[0x75].s;
        if (_Var10 == (_struct_19)0x0) {
          local_118.s.LowPart = (pLVar29->s).LowPart;
        }
        uStack_110 = _Var10.LowPart;
        uStack_10c = _Var10.HighPart;
        local_310[0x75].QuadPart = 0;
        local_108 = local_310[0x76];
        local_310[0x76].QuadPart = 0x100000000;
        pLVar58 = local_310 + 0x77;
        pLVar46 = (LARGE_INTEGER *)local_310[0x78].QuadPart;
        if (pLVar46 == (LARGE_INTEGER *)0x0) {
          local_158.s.LowPart = (pLVar58->s).LowPart;
        }
        local_310[0x78].QuadPart = 0;
        local_148 = local_310[0x79];
        local_310[0x79].QuadPart = 0x100000000;
        local_310[0x7a].s.LowPart = uVar60;
        *(undefined4 *)((longlong)local_310 + 0x3d4) = 0;
        uVar60 = uVar23 + 2;
        uStack_150 = pLVar46;
        if ((int)uVar60 < 0) goto LAB_14078266e;
        if (uVar23 < 0x7ffffffe) {
          FUN_144736e44(pLVar29);
          DVar59 = local_310[0x76].s.LowPart;
          iVar51 = *(int *)((longlong)local_310 + 0x3b4);
          uVar60 = local_310[0x7a].s.LowPart + 1;
        }
        else {
          iVar51 = 1;
          DVar59 = 0;
        }
        local_310[0x76].s.LowPart = DVar59 + uVar60;
        if (iVar51 - DVar59 < uVar60) {
          FUN_14742df62(pLVar29,DVar59);
          uVar60 = local_310[0x7a].s.LowPart + 1;
        }
        if ((int)uVar60 < 0) goto LAB_14078266e;
        if (*(int *)((longlong)local_310 + 0x3cc) < (int)uVar60) {
          FUN_144736dc0(pLVar58);
          uVar60 = local_310[0x7a].s.LowPart + 1;
        }
        FUN_14742e398(pLVar58,uVar60);
        pLVar29 = &local_158;
        if (pLVar46 != (LARGE_INTEGER *)0x0) {
          pLVar29 = pLVar46;
        }
        _Var52 = (_struct_19)&local_118;
        if (_Var10 != (_struct_19)0x0) {
          _Var52 = _Var10;
        }
        uVar60 = 0;
        do {
          if (!SBORROW4(0,*(int *)((longlong)pLVar29 + (longlong)(int)uVar60 * 4))) {
            FUN_14742e3e0(pLVar31,*(undefined4 *)((longlong)_Var52 + (longlong)(int)uVar60 * 4));
          }
          uVar60 = uVar60 + 1;
        } while (uVar60 <= uVar54);
        FUN_140047170(&uStack_150);
        FUN_14004710c(&uStack_110);
      }
    }
  }
  DVar59 = local_2a4 - iVar49;
  if ((ulonglong)
      ((longlong)(int)local_310[0x5e].s.LowPart - (longlong)(int)local_310[100].s.LowPart) <
      (ulonglong)(longlong)(int)DVar59) {
    if ((int)DVar59 < 0) goto LAB_140781da2;
    pLVar31 = local_310 + 0x5d;
    if (*(int *)((longlong)local_310 + 0x2f4) < (int)DVar59) {
      FUN_14178ebbc(pLVar31,DVar59);
    }
    uVar54 = local_310[0x6b].s.LowPart;
    uVar50 = (longlong)(int)DVar59 * 5;
    uVar60 = uVar54;
    if (uVar54 * 3 <= uVar50) {
      do {
        uVar23 = uVar60;
        uVar60 = uVar23 * 2 + 1;
      } while (uVar60 * 3 <= uVar50);
      uVar23 = uVar23 * 2;
      if (uVar54 <= uVar23) {
        pLVar29 = local_310 + 0x65;
        _Var10 = local_310[0x66].s;
        if (_Var10 == (_struct_19)0x0) {
          local_118.s.LowPart = (pLVar29->s).LowPart;
        }
        uStack_110 = _Var10.LowPart;
        uStack_10c = _Var10.HighPart;
        local_310[0x66].QuadPart = 0;
        local_108 = local_310[0x67];
        local_310[0x67].QuadPart = 0x100000000;
        pLVar58 = local_310 + 0x68;
        pLVar46 = (LARGE_INTEGER *)local_310[0x69].QuadPart;
        if (pLVar46 == (LARGE_INTEGER *)0x0) {
          local_158.s.LowPart = (pLVar58->s).LowPart;
        }
        local_310[0x69].QuadPart = 0;
        local_148 = local_310[0x6a];
        local_310[0x6a].QuadPart = 0x100000000;
        local_310[0x6b].s.LowPart = uVar60;
        *(undefined4 *)((longlong)local_310 + 0x35c) = 0;
        uVar60 = uVar23 + 2;
        uStack_150 = pLVar46;
        if ((int)uVar60 < 0) {
LAB_14078266e:
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(uVar60);
        }
        if (uVar23 < 0x7ffffffe) {
          FUN_144736e44(pLVar29);
          DVar26 = local_310[0x67].s.LowPart;
          iVar51 = *(int *)((longlong)local_310 + 0x33c);
          uVar60 = local_310[0x6b].s.LowPart + 1;
        }
        else {
          iVar51 = 1;
          DVar26 = 0;
        }
        local_310[0x67].s.LowPart = DVar26 + uVar60;
        if (iVar51 - DVar26 < uVar60) {
          FUN_14742df62(pLVar29,DVar26);
          uVar60 = local_310[0x6b].s.LowPart + 1;
        }
        if ((int)uVar60 < 0) goto LAB_14078266e;
        if (*(int *)((longlong)local_310 + 0x354) < (int)uVar60) {
          FUN_144736dc0(pLVar58);
          uVar60 = local_310[0x6b].s.LowPart + 1;
        }
        FUN_14742e398(pLVar58,uVar60);
        pLVar29 = &local_158;
        if (pLVar46 != (LARGE_INTEGER *)0x0) {
          pLVar29 = pLVar46;
        }
        pLVar58 = &local_118;
        if ((LARGE_INTEGER *)CONCAT44(uStack_10c,uStack_110) != (LARGE_INTEGER *)0x0) {
          pLVar58 = (LARGE_INTEGER *)CONCAT44(uStack_10c,uStack_110);
        }
        uVar60 = 0;
        do {
          if (!SBORROW4(0,*(int *)((longlong)pLVar29 + (longlong)(int)uVar60 * 4))) {
            FUN_14742e4d4(pLVar31,*(undefined4 *)((longlong)pLVar58 + (longlong)(int)uVar60 * 4));
          }
          uVar60 = uVar60 + 1;
        } while (uVar60 <= uVar54);
        FUN_140047170(&uStack_150);
        FUN_14004710c(&uStack_110);
      }
      goto LAB_1407799cf;
    }
  }
  else {
LAB_1407799cf:
    if ((int)DVar59 < 0) {
LAB_140781da2:
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(DVar59);
    }
  }
  if (*(int *)((longlong)local_310 + 0x454) < (int)DVar59) {
    FUN_1400e7fbe(local_310 + 0x89,DVar59);
  }
  if ((int)DVar53 < 0) {
LAB_140781c28:
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(DVar53);
  }
  if (*(int *)((longlong)local_310 + 0x464) < (int)DVar53) {
    FUN_14178ef2c(local_310 + 0x8b,DVar53);
  }
  iVar44 = local_2a4 + local_2a8;
  if (iVar44 < 0) goto LAB_1407814b3;
  if (*(int *)((longlong)local_310 + 0x444) < iVar44) {
    FUN_1400b453e(local_310 + 0x87);
  }
  lVar27 = local_310[0x28].QuadPart;
  iVar51 = DVar59 + DVar53;
  if (*(int *)(lVar27 + 0x164) < iVar51) {
    FUN_144adac32(lVar27 + 0x158,iVar51);
  }
  if (*(int *)(lVar27 + 0x174) < iVar51) {
    FUN_144adad0c(lVar27 + 0x168,iVar51);
  }
  local_2f9 = (int)local_2a4 < 0x21 && (int)local_2a8 < 0x21;
  if ((int)local_2a8 < 0x21) {
LAB_140779b10:
    local_290 = local_310 + 0xa4;
    pLVar29 = *(LARGE_INTEGER **)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    pLVar31 = pLVar29 + 0x18c;
    DVar59 = (pLVar31->s).LowPart;
    if (DVar59 == 1) {
      FUN_140ad26c0();
      DVar59 = GetCurrentThreadId();
      pLVar29 = (LARGE_INTEGER *)(ulonglong)DVar59;
      DVar59 = (pLVar31->s).LowPart;
    }
    if ((DVar59 == 0x60000000) || (DVar59 == 0)) {
      (pLVar31->s).LowPart = 0x40000010;
    }
    DVar53 = local_310[0x5a].s.LowPart;
    pLVar58 = local_310;
    local_308 = pLVar31;
    if ((longlong)(int)DVar53 != 0) {
      lVar27 = local_310[0x59].QuadPart;
      lVar67 = 0;
      do {
        lVar62 = *(longlong *)(lVar27 + lVar67);
        pcVar7 = *(code **)(lVar62 + 0xf0);
        if (pcVar7 != (code *)0x0) {
          p_Var37 = (_struct_19 *)(lVar62 + 0xf0);
          plVar36 = (longlong *)(lVar62 + 0x110);
          if (*(longlong **)(lVar62 + 0x100) != (longlong *)0x0) {
            plVar36 = *(longlong **)(lVar62 + 0x100);
          }
          uVar28 = (**(code **)(*plVar36 + 8))();
          iVar51 = (*pcVar7)(uVar28);
          pLVar29 = pLStack_140;
          *(uint *)(lVar62 + 100) = iVar51 + (uint)(iVar51 == 0);
          local_158 = *(LARGE_INTEGER *)p_Var37;
          pLVar31 = *(LARGE_INTEGER **)(lVar62 + 0xf8);
          local_108 = *(LARGE_INTEGER *)(lVar62 + 0x100);
          pLStack_100 = *(LARGE_INTEGER **)(lVar62 + 0x108);
          local_f8 = *(undefined8 *)(lVar62 + 0x110);
          uStack_f0 = *(undefined8 *)(lVar62 + 0x118);
          local_e8 = *(undefined8 *)(lVar62 + 0x120);
          uStack_e0 = *(undefined8 *)(lVar62 + 0x128);
          uVar17 = local_e8;
          uVar18 = uStack_e0;
          uVar28 = local_f8;
          uVar16 = uStack_f0;
          local_118.s.LowPart = local_158.s.LowPart;
          local_118.s.HighPart = local_158.s.HighPart;
          uStack_110 = (uint)pLVar31;
          uStack_10c = (uint)((ulonglong)pLVar31 >> 0x20);
          *(ulonglong *)(lVar62 + 0x120) = CONCAT44(uStack_124,local_128);
          *(ulonglong *)(lVar62 + 0x128) = CONCAT44(uStack_11c,uStack_120);
          *(ulonglong *)(lVar62 + 0x110) = CONCAT44(uStack_134,local_138);
          *(ulonglong *)(lVar62 + 0x118) = CONCAT44(uStack_12c,uStack_130);
          *(undefined8 *)(lVar62 + 0x100) = 0;
          *(LARGE_INTEGER **)(lVar62 + 0x108) = pLStack_140;
          p_Var37->LowPart = 0;
          p_Var37->HighPart = 0;
          *(LARGE_INTEGER **)(lVar62 + 0xf8) = uStack_150;
          local_f8._4_4_ = (undefined4)((ulonglong)local_f8 >> 0x20);
          uStack_f0._4_4_ = (undefined4)((ulonglong)uStack_f0 >> 0x20);
          local_e8._4_4_ = (undefined4)((ulonglong)local_e8 >> 0x20);
          uStack_e0._4_4_ = (undefined4)((ulonglong)uStack_e0 >> 0x20);
          local_128 = (undefined4)local_e8;
          uStack_124 = local_e8._4_4_;
          uStack_120 = (undefined4)uStack_e0;
          uStack_11c = uStack_e0._4_4_;
          local_138 = (undefined4)local_f8;
          uStack_134 = local_f8._4_4_;
          uStack_130 = (undefined4)uStack_f0;
          uStack_12c = uStack_f0._4_4_;
          local_148.s = local_108.s;
          pLStack_140 = pLStack_100;
          uStack_150 = pLVar31;
          pLVar58 = local_310;
          local_f8 = uVar28;
          uStack_f0 = uVar16;
          local_e8 = uVar17;
          uStack_e0 = uVar18;
          if ((_struct_19)local_158.QuadPart != (_struct_19)0x0) {
            LVar30.QuadPart = local_148.QuadPart;
            if ((longlong *)local_108.QuadPart == (longlong *)0x0) {
              LVar30.QuadPart = (LONGLONG)&local_138;
            }
            pLVar29 = (LARGE_INTEGER *)(**(code **)(*(longlong *)LVar30 + 0x10))();
            pLVar58 = local_310;
          }
        }
        lVar67 = lVar67 + 8;
      } while ((longlong)(int)DVar53 * 8 != lVar67);
    }
    pLVar58[0x5a].s.LowPart = 0;
    if (*(int *)((longlong)pLVar58 + 0x2d4) != 0) {
      pLVar29 = (LARGE_INTEGER *)FUN_143215a52(pLVar58 + 0x59);
    }
    local_2bc = (undefined4)CONCAT71((int7)((ulonglong)pLVar29 >> 8),1);
    if ((DVar59 == 0x60000000) || (DVar59 == 0)) {
      (local_308->s).LowPart = DVar59;
    }
LAB_140779ce1:
    plVar47 = (longlong *)0x0;
  }
  else {
    local_290 = local_310 + 0xa4;
    bVar42 = *(byte *)(local_310 + 0xa4);
    if ((local_310[0x5a].s.LowPart != 0 & bVar42) == 0) goto LAB_140779b10;
    plVar36 = TlsGetValue(DAT_14c896140);
    if (plVar36 == (longlong *)0x0) {
      plVar36 = (longlong *)FUN_14001cc68(0x18,0x10);
      *plVar36 = 0;
      plVar36[1] = 0;
      *(undefined4 *)(plVar36 + 2) = 0;
      TlsSetValue(DAT_14c896140,plVar36);
    }
    plVar47 = (longlong *)plVar36[1];
    if (plVar47 == (longlong *)0x0) {
      plVar47 = (longlong *)*plVar36;
      if (plVar47 == (longlong *)0x0) {
        local_118.s.LowPart = DAT_14c896180.s.LowPart;
        local_118.s.HighPart = DAT_14c896180.s.HighPart;
        LVar30 = DAT_14c896180;
        uVar66 = local_118.s.LowPart;
        while (DAT_14c896180 = LVar30, local_118.s.LowPart = uVar66,
              (LVar30.QuadPart & 0x3ffffffU) != 0) {
          local_158.QuadPart =
               (CONCAT44(local_118.s.HighPart,uVar66) & 0xfffffffffc000000) + 0x4000000;
          if ((ulonglong)local_158.QuadPart >> 0x1a < CONCAT44(local_118.s.HighPart,uVar66) >> 0x1a)
          {
            FUN_14000f986(0x3a83126f);
          }
          uVar50 = (ulonglong)((uVar66 & 0x3ffffff) >> 0xe);
          uVar63 = (ulonglong)(LVar30.s.LowPart & 0x3fff);
          local_158.QuadPart =
               local_158.QuadPart & 0xfffffffffc000000U |
               (ulonglong)
               *(uint *)(*(longlong *)(&DAT_14c833b00 + uVar50 * 8) + 0x10 + uVar63 * 0x18);
          LOCK();
          bVar68 = (LARGE_INTEGER *)CONCAT44(local_118.s.HighPart,local_118.s.LowPart) ==
                   (LARGE_INTEGER *)DAT_14c896180.QuadPart;
          LVar30.QuadPart = local_158.QuadPart;
          if (!bVar68) {
            LVar30 = DAT_14c896180;
          }
          DAT_14c896180 = LVar30;
          UNLOCK();
          if (bVar68) {
            *(undefined4 *)(*(longlong *)(&DAT_14c833b00 + uVar50 * 8) + uVar63 * 0x18 + 0x10) = 0;
            plVar47 = *(longlong **)
                       (*(longlong *)(&DAT_14c833b00 + uVar50 * 8) + 8 +
                       (ulonglong)(uVar66 & 0x3fff) * 0x18);
            FUN_1447d080c(uVar66 & 0x3ffffff);
            plVar36[1] = (longlong)plVar47;
            if (plVar47 == (longlong *)0x0) goto LAB_140780836;
            goto LAB_140780871;
          }
          local_118.s.LowPart = DAT_14c896180.s.LowPart;
          local_118.s.HighPart = DAT_14c896180.s.HighPart;
          LVar30 = DAT_14c896180;
          uVar66 = local_118.s.LowPart;
        }
        plVar36[1] = 0;
LAB_140780836:
        puVar32 = (undefined8 *)FUN_14001cc68(0x10000,0);
        plVar36[1] = (longlong)puVar32;
        iVar51 = 0xff;
        do {
          puVar40 = puVar32 + 0x20;
          *puVar32 = puVar40;
          iVar51 = iVar51 + -1;
          puVar32 = puVar40;
        } while (iVar51 != 0);
        *puVar40 = 0;
        plVar47 = (longlong *)plVar36[1];
      }
      else {
        plVar36[1] = (longlong)plVar47;
        *plVar36 = 0;
      }
LAB_140780871:
      *(undefined4 *)(plVar36 + 2) = 0x100;
      iVar51 = 0x100;
    }
    else {
      iVar51 = (int)plVar36[2];
    }
    plVar36[1] = *plVar47;
    *(int *)(plVar36 + 2) = iVar51 + -1;
    *plVar47 = (longlong)UE::Tasks::Private::FTaskBase::vftable;
    plVar47[1] = (longlong)&DAT_100000002;
    plVar47[2] = 0;
    *(undefined4 *)(plVar47 + 3) = 0;
    *(undefined4 *)(plVar47 + 4) = 0xffffffff;
    plVar47[6] = 0;
    plVar47[7] = 0x100000000;
    *(undefined1 *)(plVar47 + 8) = 1;
    plVar47[0xe] = (longlong)
                   LowLevelTasks::
                   TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                   TTaskDelegateDummy::vftable;
    plVar47[0xf] = 0;
    plVar47[0x10] = -0x17ffffffffffffe0;
    plVar47[0x12] = 0;
    plVar47[0x13] = 0x100000000;
    *(undefined2 *)(plVar47 + 0x14) = 0;
    LOCK();
    bVar68 = (char)plVar47[8] == '\x01';
    if (bVar68) {
      *(char *)(plVar47 + 8) = '\0';
    }
    UNLOCK();
    if (!bVar68) {
      FUN_14008cdb0(plVar47 + 8);
    }
    *plVar47 = (longlong)&PTR_FUN_14a38b808;
    if (*(code **)(plVar47[0xe] + 0x18) != FUN_144713626) {
      (**(code **)(plVar47[0xe] + 0x18))(plVar47 + 0xe,plVar47 + 9);
    }
    plVar47[0xe] = (longlong)
                   LowLevelTasks::
                   TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                   TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                   ::vftable;
    plVar47[9] = (longlong)plVar47;
    plVar47[10] = (longlong)plVar47;
    lVar27 = *(longlong *)
              (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x2b8);
    if (lVar27 == 0) {
      lVar27 = 0;
    }
    else {
      lVar27 = *(longlong *)(lVar27 + 0x30);
    }
    plVar47[0xf] = lVar27;
    plVar47[0x10] = -0x3fffffad77750000;
    *(uint *)((longlong)plVar47 + 0x1c) = bVar42 ^ 1;
    plVar47[0x15] = (longlong)local_310;
    *plVar47 = (longlong)&PTR_FUN_14a38b7f8;
    LOCK();
    UNLOCK();
    LOCK();
    UNLOCK();
    local_118.s.LowPart._0_1_ = 1;
    uVar28 = FUN_1447439e4(plVar47);
    if (plVar47 == (longlong *)0x0) {
      local_2bc = (undefined4)CONCAT71((int7)((ulonglong)uVar28 >> 8),1);
      goto LAB_140779ce1;
    }
    DVar59 = local_310[0xa1].s.LowPart;
    local_310[0xa1].s.LowPart = DVar59 + 1;
    if (*(uint *)((longlong)local_310 + 0x50c) < DVar59 + 1) {
      FUN_1401d03aa(local_2d8,DVar59);
    }
    *(longlong **)(local_310[0xa0].QuadPart + (longlong)(int)DVar59 * 8) = plVar47;
    LOCK();
    *(int *)(plVar47 + 1) = (int)plVar47[1] + 1;
    UNLOCK();
    local_2bc = 0;
  }
  local_278 = plVar47;
  FUN_14473400f(0,0);
  local_1f8._0_4_ = (uint)local_310;
  local_1f8._4_4_ = (int)((ulonglong)local_310 >> 0x20);
  bVar42 = *(byte *)local_290;
  if (((local_2f9 | (byte)(bVar42 ^ 1)) & 1) == 0) {
    plVar36 = TlsGetValue(DAT_14c896140);
    if (plVar36 == (longlong *)0x0) {
      plVar36 = (longlong *)FUN_14001cc68(0x18,0x10);
      *plVar36 = 0;
      plVar36[1] = 0;
      *(undefined4 *)(plVar36 + 2) = 0;
      TlsSetValue(DAT_14c896140,plVar36);
    }
    local_298 = (longlong *)plVar36[1];
    if (local_298 == (longlong *)0x0) {
      local_298 = (longlong *)*plVar36;
      if (local_298 == (longlong *)0x0) {
        local_118.s.LowPart = DAT_14c896180.s.LowPart;
        local_118.s.HighPart = DAT_14c896180.s.HighPart;
        local_298 = (longlong *)0x0;
        LVar30 = DAT_14c896180;
        uVar66 = local_118.s.LowPart;
        while (DAT_14c896180 = LVar30, local_118.s.LowPart = uVar66,
              (LVar30.QuadPart & 0x3ffffffU) != 0) {
          local_158.QuadPart =
               (CONCAT44(local_118.s.HighPart,uVar66) & 0xfffffffffc000000) + 0x4000000;
          if ((ulonglong)local_158.QuadPart >> 0x1a < CONCAT44(local_118.s.HighPart,uVar66) >> 0x1a)
          {
            FUN_14000f986(0x3a83126f);
          }
          uVar50 = (ulonglong)((uVar66 & 0x3ffffff) >> 0xe);
          uVar63 = (ulonglong)(LVar30.s.LowPart & 0x3fff);
          local_158.QuadPart =
               local_158.QuadPart & 0xfffffffffc000000U |
               (ulonglong)
               *(uint *)(*(longlong *)(&DAT_14c833b00 + uVar50 * 8) + 0x10 + uVar63 * 0x18);
          LOCK();
          bVar68 = (LARGE_INTEGER *)CONCAT44(local_118.s.HighPart,local_118.s.LowPart) ==
                   (LARGE_INTEGER *)DAT_14c896180.QuadPart;
          LVar30.QuadPart = local_158.QuadPart;
          if (!bVar68) {
            LVar30 = DAT_14c896180;
          }
          DAT_14c896180 = LVar30;
          UNLOCK();
          if (bVar68) {
            *(undefined4 *)(*(longlong *)(&DAT_14c833b00 + uVar50 * 8) + uVar63 * 0x18 + 0x10) = 0;
            plVar47 = *(longlong **)
                       (*(longlong *)(&DAT_14c833b00 + uVar50 * 8) + 8 +
                       (ulonglong)(uVar66 & 0x3fff) * 0x18);
            FUN_1447d080c(uVar66 & 0x3ffffff);
            plVar36[1] = (longlong)plVar47;
            local_298 = plVar47;
            if (plVar47 == (longlong *)0x0) goto LAB_140779f1c;
            goto LAB_140779f5f;
          }
          local_118.s.LowPart = DAT_14c896180.s.LowPart;
          local_118.s.HighPart = DAT_14c896180.s.HighPart;
          LVar30 = DAT_14c896180;
          uVar66 = local_118.s.LowPart;
        }
        plVar36[1] = 0;
LAB_140779f1c:
        puVar32 = (undefined8 *)FUN_14001cc68(0x10000,0);
        plVar36[1] = (longlong)puVar32;
        iVar51 = 0xff;
        do {
          puVar40 = puVar32 + 0x20;
          *puVar32 = puVar40;
          iVar51 = iVar51 + -1;
          puVar32 = puVar40;
        } while (iVar51 != 0);
        *puVar40 = 0;
        local_298 = (longlong *)plVar36[1];
      }
      else {
        plVar36[1] = (longlong)local_298;
        *plVar36 = 0;
      }
LAB_140779f5f:
      *(undefined4 *)(plVar36 + 2) = 0x100;
      iVar51 = 0x100;
    }
    else {
      iVar51 = (int)plVar36[2];
    }
    plVar47 = local_298;
    plVar36[1] = *local_298;
    *(int *)(plVar36 + 2) = iVar51 + -1;
    *local_298 = (longlong)UE::Tasks::Private::FTaskBase::vftable;
    local_298[1] = (longlong)&DAT_100000002;
    local_298[2] = 0;
    *(undefined4 *)(local_298 + 3) = 0;
    *(undefined4 *)(local_298 + 4) = 0xffffffff;
    local_298[6] = 0;
    local_298[7] = 0x100000000;
    *(undefined1 *)(local_298 + 8) = 1;
    local_298[0xe] =
         (longlong)
         LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
         TTaskDelegateDummy::vftable;
    local_298[0xf] = 0;
    local_298[0x10] = -0x17ffffffffffffe0;
    local_298[0x12] = 0;
    local_298[0x13] = 0x100000000;
    *(undefined2 *)(local_298 + 0x14) = 0;
    LOCK();
    bVar68 = (char)local_298[8] == '\x01';
    if (bVar68) {
      *(char *)(local_298 + 8) = '\0';
    }
    UNLOCK();
    if (!bVar68) {
      FUN_14008cdb0(local_298 + 8);
    }
    *plVar47 = (longlong)&PTR_FUN_14a38b828;
    if (*(code **)(plVar47[0xe] + 0x18) != FUN_144713626) {
      (**(code **)(plVar47[0xe] + 0x18))(plVar47 + 0xe,plVar47 + 9);
    }
    plVar47[0xe] = (longlong)
                   LowLevelTasks::
                   TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                   TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                   ::vftable;
    plVar47[9] = (longlong)plVar47;
    plVar47[10] = (longlong)plVar47;
    lVar27 = *(longlong *)
              (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x2b8);
    if (lVar27 == 0) {
      lVar27 = 0;
    }
    else {
      lVar27 = *(longlong *)(lVar27 + 0x30);
    }
    plVar47[0xf] = lVar27;
    plVar47[0x10] = -0x3fffffad77750000;
    *(uint *)((longlong)plVar47 + 0x1c) = bVar42 ^ 1;
    plVar47[0x15] = CONCAT44(local_1f8._4_4_,(uint)local_1f8);
    *plVar47 = (longlong)&PTR_FUN_14a38b818;
    LOCK();
    UNLOCK();
    LOCK();
    UNLOCK();
    local_118.s.LowPart._0_1_ = 1;
    uVar28 = FUN_1447439e4(plVar47);
    if (plVar47 == (longlong *)0x0) goto LAB_14077a159;
    DVar59 = local_310[0xa1].s.LowPart;
    local_310[0xa1].s.LowPart = DVar59 + 1;
    if (*(uint *)((longlong)local_310 + 0x50c) < DVar59 + 1) {
      FUN_1401d03aa(local_2d8,DVar59);
    }
    *(longlong **)(local_2d8->QuadPart + (longlong)(int)DVar59 * 8) = local_298;
    LOCK();
    *(int *)(local_298 + 1) = (int)local_298[1] + 1;
    UNLOCK();
    local_280 = 0;
  }
  else {
    uVar28 = FUN_143216db4(&local_1f8);
LAB_14077a159:
    local_280 = (undefined4)CONCAT71((int7)((ulonglong)uVar28 >> 8),1);
    local_298 = (longlong *)0x0;
  }
  FUN_14473400f(0,0);
  LVar30.QuadPart = FUN_1448fe162(0xa8);
  *(undefined ***)LVar30 = UE::Tasks::Private::FTaskBase::vftable;
  *(undefined1 **)(LVar30.QuadPart + 8) = &DAT_100000001;
  *(longlong *)(LVar30.QuadPart + 0x10) = 0;
  *(undefined4 *)(LVar30.QuadPart + 0x18) = 0;
  *(undefined4 *)(LVar30.QuadPart + 0x20) = 0xffffffff;
  *(longlong *)(LVar30.QuadPart + 0x30) = 0;
  *(longlong *)(LVar30.QuadPart + 0x38) = 0x100000000;
  *(undefined1 *)(LVar30.QuadPart + 0x40) = 1;
  *(undefined ***)(LVar30.QuadPart + 0x70) =
       LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
       TTaskDelegateDummy::vftable;
  *(longlong *)(LVar30.QuadPart + 0x78) = 0;
  *(longlong *)(LVar30.QuadPart + 0x80) = -0x17ffffffffffffe0;
  *(longlong *)(LVar30.QuadPart + 0x90) = 0;
  *(longlong *)(LVar30.QuadPart + 0x98) = 0x100000000;
  *(undefined2 *)(LVar30.QuadPart + 0xa0) = 0;
  LOCK();
  bVar68 = *(char *)(LVar30.QuadPart + 0x40) == '\x01';
  if (bVar68) {
    *(char *)(LVar30.QuadPart + 0x40) = '\0';
  }
  UNLOCK();
  if (!bVar68) {
    FUN_14008cdb0((longlong *)(LVar30.QuadPart + 0x40));
  }
  *(undefined ***)LVar30 = &PTR_FUN_149e1e2e0;
  pcVar7 = *(code **)(*(longlong *)(LVar30.QuadPart + 0x70) + 0x18);
  if (pcVar7 != FUN_144713626) {
    (*pcVar7)((longlong *)(LVar30.QuadPart + 0x70),(longlong *)(LVar30.QuadPart + 0x48));
  }
  plVar36 = local_278;
  *(undefined ***)(LVar30.QuadPart + 0x70) =
       LowLevelTasks::TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
       ::vftable;
  ((LARGE_INTEGER *)(LVar30.QuadPart + 0x48))->QuadPart = (LONGLONG)LVar30;
  ((LARGE_INTEGER *)(LVar30.QuadPart + 0x50))->QuadPart = (LONGLONG)LVar30;
  lVar27 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  lVar67 = *(longlong *)(lVar27 + 0x2b8);
  if (lVar67 == 0) {
    lVar67 = 0;
  }
  else {
    lVar67 = *(longlong *)(lVar67 + 0x30);
  }
  *(longlong *)(LVar30.QuadPart + 0x78) = lVar67;
  *(longlong *)(LVar30.QuadPart + 0x80) = -0x37ffffad71db3c00;
  *(undefined4 *)(LVar30.QuadPart + 0x1c) = 2;
  if (*(char *)(local_310 + 0xa5) == '\x01') {
    bVar68 = local_310[0xb2].s.LowPart != 0;
  }
  else {
    bVar68 = false;
  }
  if ((longlong *)LVar30.QuadPart != (longlong *)0x0) {
    LOCK();
    *(int *)(LVar30.QuadPart + 8) = *(int *)(LVar30.QuadPart + 8) + 1;
    UNLOCK();
  }
  local_270.QuadPart = LVar30.QuadPart;
  if (bVar68 == false) {
    if ((char)local_2bc == '\0') {
      if (DAT_14c87e718 == '\0') {
        iVar51 = *(int *)((longlong)local_278 + 0x1c);
        if ((2 < iVar51) &&
           (bVar42 = (**(code **)(*DAT_14c82b500 + 0x10))(DAT_14c82b500,0), bVar42 < 3)) {
          local_118.s.LowPart = 1;
          local_118.s.HighPart = 0x201;
          uStack_110 = 0x101;
          uStack_10c = 0x301;
          local_108.QuadPart = CONCAT44(DAT_14c7585c8,DAT_14c7585c8) | 0x20000000000;
          pLStack_100 = (LARGE_INTEGER *)(CONCAT44(DAT_14c7585c8,DAT_14c7585c8) | 0x30000000100);
          local_f8 = 0x20000000000;
          uStack_f0 = 0x30000000100;
          if (*(byte *)((longlong)&local_118 + (ulonglong)(iVar51 - 3) * 4) == bVar42)
          goto LAB_1407823d6;
        }
        QueryPerformanceCounter(&local_158);
        uStack_150 = (LARGE_INTEGER *)0xffffffffffffffff;
        FUN_140056092(plVar36,&local_158);
      }
      else {
LAB_1407823d6:
        FUN_140082318();
      }
    }
    pLVar31 = (LARGE_INTEGER *)local_310[3].QuadPart;
    uVar20 = 0;
    bVar69 = false;
  }
  else if ((char)local_2bc == '\0' && *(byte *)local_290 == 0) {
    uVar20 = 0;
    pLVar31 = (LARGE_INTEGER *)local_310[3].QuadPart;
    bVar69 = false;
    pLVar29 = pLVar31;
    if ((*(byte *)(local_278 + 0x14) & 1) == 0) goto LAB_14077a382;
  }
  else {
    pLVar31 = (LARGE_INTEGER *)local_310[3].QuadPart;
    uVar20 = 0;
    bVar69 = false;
    pLVar29 = pLVar31;
    if (*(byte *)local_290 != 0) {
LAB_14077a382:
      pLVar31 = (LARGE_INTEGER *)FUN_14001cc68(0x308,0x10);
      FUN_14009016e(pLVar31,*(undefined4 *)((longlong)pLVar29 + 0x17c),0);
      local_118.s.LowPart = 0;
      local_118.s.HighPart = 0;
      uStack_110 = 0;
      uStack_10c = 0;
      FUN_144775d28(&local_118,1);
      uVar54 = uStack_110;
      lVar67 = (longlong)(int)uStack_110;
      uStack_110 = uStack_110 + 1;
      if (uStack_10c < uStack_110) {
        FUN_14741464c(&local_118,uVar54);
      }
      *(LARGE_INTEGER **)(CONCAT44(local_118.s.HighPart,local_118.s.LowPart) + lVar67 * 8) = pLVar31
      ;
      local_158.s.HighPart = local_118.s.HighPart;
      local_158.s.LowPart = local_118.s.LowPart;
      uStack_150 = (LARGE_INTEGER *)CONCAT44(uStack_150._4_4_,uStack_110);
      FUN_14007658c(&DAT_14ca850c8,&local_158,0);
      if (CONCAT44(local_118.s.HighPart,local_118.s.LowPart) != 0) {
        FUN_1400020a8();
      }
      uVar20 = 1;
      bVar69 = true;
    }
  }
  local_2a0 = (longlong *)(lVar27 + 0x2b8);
  local_118.s.LowPart = (DWORD)local_310;
  local_118.s.HighPart = (LONG)((ulonglong)local_310 >> 0x20);
  local_108 = local_270;
  local_f8 = CONCAT71(local_f8._1_7_,uVar20);
  uStack_110 = local_118.s.LowPart;
  uStack_10c = local_118.s.HighPart;
  pLStack_100 = pLVar31;
  if (bVar69) {
    puVar32 = TlsGetValue(DAT_14c896140);
    plVar36 = local_278;
    if (puVar32 == (undefined8 *)0x0) {
      puVar32 = (undefined8 *)FUN_14001cc68(0x18,0x10);
      *puVar32 = 0;
      puVar32[1] = 0;
      *(undefined4 *)(puVar32 + 2) = 0;
      TlsSetValue(DAT_14c896140,puVar32);
    }
    plVar47 = (longlong *)puVar32[1];
    if (plVar47 == (longlong *)0x0) {
      plVar47 = (longlong *)*puVar32;
      if (plVar47 == (longlong *)0x0) {
        uVar54 = DAT_14c896180.s.LowPart;
        LVar30 = DAT_14c896180;
        while (DAT_14c896180 = LVar30, local_158 = LVar30, (LVar30.QuadPart & 0x3ffffffU) != 0) {
          local_1f8 = (LVar30.QuadPart & 0xfffffffffc000000U) + 0x4000000;
          if (local_1f8 >> 0x1a < (ulonglong)LVar30.QuadPart >> 0x1a) {
            FUN_14000f986(0x3a83126f);
          }
          uVar50 = (ulonglong)((uVar54 & 0x3ffffff) >> 0xe);
          uVar64 = (ulonglong)(LVar30.s.LowPart & 0x3fff);
          uVar63 = local_1f8 & 0xfffffffffc000000;
          LVar30.QuadPart =
               uVar63 | *(uint *)(*(longlong *)(&DAT_14c833b00 + uVar50 * 8) + 0x10 + uVar64 * 0x18)
          ;
          local_1f8._0_4_ = LVar30.s.LowPart;
          local_1f8._4_4_ = (int)(uVar63 >> 0x20);
          LOCK();
          bVar69 = local_158.QuadPart == DAT_14c896180.QuadPart;
          if (!bVar69) {
            LVar30 = DAT_14c896180;
          }
          DAT_14c896180 = LVar30;
          UNLOCK();
          if (bVar69) {
            *(undefined4 *)(*(longlong *)(&DAT_14c833b00 + uVar50 * 8) + uVar64 * 0x18 + 0x10) = 0;
            plVar47 = *(longlong **)
                       (*(longlong *)(&DAT_14c833b00 + uVar50 * 8) + 8 +
                       (ulonglong)(uVar54 & 0x3fff) * 0x18);
            FUN_1447d080c(uVar54 & 0x3ffffff);
            puVar32[1] = plVar47;
            plVar36 = local_278;
            if (plVar47 == (longlong *)0x0) goto LAB_14077a6cc;
            goto LAB_14077a707;
          }
          uVar54 = DAT_14c896180.s.LowPart;
          LVar30 = DAT_14c896180;
        }
        puVar32[1] = 0;
LAB_14077a6cc:
        plVar36 = local_278;
        puVar40 = (undefined8 *)FUN_14001cc68(0x10000,0);
        puVar32[1] = puVar40;
        iVar51 = 0xff;
        do {
          puVar33 = puVar40 + 0x20;
          *puVar40 = puVar33;
          iVar51 = iVar51 + -1;
          puVar40 = puVar33;
        } while (iVar51 != 0);
        *puVar33 = 0;
        plVar47 = (longlong *)puVar32[1];
      }
      else {
        puVar32[1] = plVar47;
        *puVar32 = 0;
      }
LAB_14077a707:
      *(undefined4 *)(puVar32 + 2) = 0x100;
      iVar51 = 0x100;
    }
    else {
      iVar51 = *(int *)(puVar32 + 2);
    }
    puVar32[1] = *plVar47;
    *(int *)(puVar32 + 2) = iVar51 + -1;
    *plVar47 = (longlong)UE::Tasks::Private::FTaskBase::vftable;
    plVar47[1] = (longlong)&DAT_100000002;
    plVar47[2] = 0;
    *(undefined4 *)(plVar47 + 3) = 0;
    *(undefined4 *)(plVar47 + 4) = 0xffffffff;
    plVar47[6] = 0;
    plVar47[7] = 0x100000000;
    *(undefined1 *)(plVar47 + 8) = 1;
    plVar47[0xe] = (longlong)
                   LowLevelTasks::
                   TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                   TTaskDelegateDummy::vftable;
    plVar47[0xf] = 0;
    plVar47[0x10] = -0x17ffffffffffffe0;
    plVar47[0x12] = 0;
    plVar47[0x13] = 0x100000000;
    *(undefined2 *)(plVar47 + 0x14) = 0;
    LOCK();
    bVar69 = (char)plVar47[8] == '\x01';
    if (bVar69) {
      *(char *)(plVar47 + 8) = '\0';
    }
    UNLOCK();
    if (!bVar69) {
      FUN_14008cdb0(plVar47 + 8);
    }
    *plVar47 = (longlong)&PTR_FUN_14a38b848;
    if (*(code **)(plVar47[0xe] + 0x18) != FUN_144713626) {
      (**(code **)(plVar47[0xe] + 0x18))(plVar47 + 0xe,plVar47 + 9);
    }
    plVar47[0xe] = (longlong)
                   LowLevelTasks::
                   TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                   TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                   ::vftable;
    plVar47[9] = (longlong)plVar47;
    plVar47[10] = (longlong)plVar47;
    if (*local_2a0 == 0) {
      lVar27 = 0;
    }
    else {
      lVar27 = *(longlong *)(*local_2a0 + 0x30);
    }
    plVar47[0xf] = lVar27;
    plVar47[0x10] = -0x3fffffad77cd8400;
    *(uint *)((longlong)plVar47 + 0x1c) = (uint)(bVar68 ^ 1);
    plVar47[0x15] = CONCAT44(local_118.s.HighPart,local_118.s.LowPart);
    plVar47[0x16] = CONCAT44(uStack_10c,uStack_110);
    *(LARGE_INTEGER *)(plVar47 + 0x17) = local_108;
    local_108.QuadPart = 0;
    *(char *)(plVar47 + 0x19) = (char)local_f8;
    plVar47[0x18] = (longlong)pLStack_100;
    *plVar47 = (longlong)&PTR_FUN_14a38b838;
    if ((char)local_2bc == '\0') {
      LOCK();
      *(int *)((longlong)plVar47 + 0xc) = *(int *)((longlong)plVar47 + 0xc) + 1;
      UNLOCK();
      cVar19 = FUN_1456bb142(plVar36 + 0x11,plVar47);
      if (cVar19 == '\0') {
        LOCK();
        *(int *)((longlong)plVar47 + 0xc) = *(int *)((longlong)plVar47 + 0xc) + -1;
        UNLOCK();
      }
      else {
        LOCK();
        *(int *)(plVar36 + 1) = (int)plVar36[1] + 1;
        UNLOCK();
        FUN_1456bb1d4(plVar47 + 5,plVar36);
      }
    }
    local_158.s.LowPart._0_1_ = 1;
    uVar28 = FUN_1447439e4(plVar47);
    if (plVar47 == (longlong *)0x0) {
      local_284 = (undefined4)CONCAT71((int7)((ulonglong)uVar28 >> 8),1);
      goto LAB_14077a94e;
    }
    DVar59 = local_310[0xa1].s.LowPart;
    uVar54 = DVar59 + 1;
    local_310[0xa1].s.LowPart = uVar54;
    if (*(uint *)((longlong)local_310 + 0x50c) < uVar54) {
      FUN_1401d03aa(local_2d8);
    }
    *(longlong **)(local_2d8->QuadPart + (longlong)(int)DVar59 * 8) = plVar47;
    LOCK();
    *(int *)(plVar47 + 1) = (int)plVar47[1] + 1;
    UNLOCK();
    local_284 = 0;
  }
  else {
    piVar1 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    iVar51 = *piVar1;
    if (iVar51 == 1) {
      FUN_140ad26c0();
      GetCurrentThreadId();
      iVar51 = *piVar1;
    }
    if ((iVar51 == 0x60000000) || (iVar51 == 0)) {
      *piVar1 = 0x40000010;
    }
    if ((char)local_f8 == '\x01') {
      FUN_14002049c(pLStack_100,1);
    }
    uVar28 = FUN_1432056a4(CONCAT44(uStack_10c,uStack_110),pLStack_100,&local_108);
    if ((char)local_f8 == '\x01') {
      uVar28 = FUN_1447850c6(pLStack_100);
    }
    local_284 = (undefined4)CONCAT71((int7)((ulonglong)uVar28 >> 8),1);
    if ((iVar51 == 0x60000000) || (iVar51 == 0)) {
      *piVar1 = iVar51;
    }
LAB_14077a94e:
    plVar47 = (longlong *)0x0;
  }
  if ((longlong *)local_108.QuadPart != (longlong *)0x0) {
    LOCK();
    plVar36 = (longlong *)(local_108.QuadPart + 8);
    *(int *)plVar36 = *(int *)plVar36 + -1;
    UNLOCK();
    if (*(int *)plVar36 == 0) {
      (*(code *)**(undefined8 **)local_108)();
    }
  }
  uVar54 = local_310[0x2e].s.LowPart;
  uVar50 = (ulonglong)uVar54;
  if ((int)uVar54 < 0) goto LAB_1407814f5;
  local_250 = local_310 + 0x8d;
  if (*(int *)((longlong)local_310 + 0x474) < (int)uVar54) {
    FUN_14178ee50(local_250);
  }
  uVar54 = uVar54 - 1;
  local_230 = DAT_14c760df0;
  pLVar31 = local_310;
  local_27c = uVar54;
  local_240 = plVar47;
  local_238 = uVar50;
  if ((DAT_14c760df0 < 1) && (local_310[0x2a].s.LowPart == 0)) {
    if ((1 < uVar54) && (*(char *)(local_310 + 0xa4) == '\0')) {
      uVar60 = 1;
      do {
        lVar27 = *(longlong *)(local_2b0->QuadPart + (longlong)(int)uVar60 * 8);
        iVar51 = *(int *)(lVar27 + 0x78);
        if ((longlong)iVar51 != 0) {
          lVar67 = *(longlong *)(lVar27 + 0x70);
          lVar62 = 0;
          do {
            piVar1 = (int *)(*(longlong *)(lVar67 + lVar62) + 0x3c);
            *piVar1 = *piVar1 + *(int *)(lVar67 + 0x28 + lVar62);
            lVar62 = lVar62 + 0x30;
          } while ((longlong)iVar51 * 0x30 != lVar62);
        }
        iVar51 = *(int *)(lVar27 + 0x88);
        if ((longlong)iVar51 != 0) {
          lVar27 = *(longlong *)(lVar27 + 0x80);
          lVar67 = 0;
          do {
            piVar1 = (int *)(*(longlong *)(lVar27 + lVar67) + 0x3c);
            *piVar1 = *piVar1 + *(int *)(lVar27 + 0x30 + lVar67);
            lVar67 = lVar67 + 0x38;
          } while ((longlong)iVar51 * 0x38 - lVar67 != 0);
        }
        uVar60 = uVar60 + 1;
      } while (uVar60 != uVar54);
    }
  }
  else if ((1 < uVar54) && (*(char *)(local_310 + 0xa4) == '\0')) {
    local_228 = local_310 + 0x9e;
    uVar60 = 1;
    do {
      uVar6 = local_118.s.HighPart;
      uVar66 = local_118.s.LowPart;
      lVar27 = *(longlong *)(local_2b0->QuadPart + (longlong)(int)uVar60 * 8);
      local_118.s.LowPart = (DWORD)lVar27;
      uVar11 = local_118.s.LowPart;
      local_118.s.HighPart = (LONG)((ulonglong)lVar27 >> 0x20);
      uVar15 = local_118.s.HighPart;
      local_22c = uVar60;
      local_118.s.LowPart = uVar66;
      local_118.s.HighPart = uVar6;
      if ((longlong)*(int *)(lVar27 + 0x78) == 0) {
        uVar50 = 0;
      }
      else {
        plVar36 = *(longlong **)(lVar27 + 0x70);
        plVar47 = plVar36 + (longlong)*(int *)(lVar27 + 0x78) * 6;
        local_2e0 = (longlong *)(lVar27 + 0x60);
        uVar50 = 0;
        do {
          puVar32 = (undefined8 *)*plVar36;
          *(int *)((longlong)puVar32 + 0x3c) = *(int *)((longlong)puVar32 + 0x3c) + (int)plVar36[5];
          local_2f8 = (LARGE_INTEGER *)CONCAT44(local_2f8._4_4_,*(int *)(puVar32 + 0x1e));
          if (*(int *)(puVar32 + 0x1e) != 0) {
            iVar51 = 0;
            do {
              puVar8 = *(uint **)(plVar36[1] + (longlong)iVar51 * 8);
              if (puVar8 != (uint *)0x0) {
                uVar54 = puVar8[5];
                if (uVar54 == DAT_14ca95bd0) {
                  uVar54 = 0xffffffff;
                }
                local_2d0 = (LARGE_INTEGER *)CONCAT44(local_2d0._4_4_,uVar54);
                uVar54 = *puVar8;
                lVar67 = (longlong)iVar51 * 0x40 + puVar32[0x1d];
                local_308 = (LARGE_INTEGER *)
                            CONCAT71(local_308._1_7_,*(undefined1 *)(lVar27 + 0x2b));
                local_2e8 = (LARGE_INTEGER *)CONCAT44(local_2e8._4_4_,uVar54);
                bVar42 = 3;
                local_118.s.LowPart = uVar11;
                local_118.s.HighPart = uVar15;
                do {
                  lVar62 = (ulonglong)((-bVar42 & bVar42) == 2) * 0x20;
                  if (*(int *)(lVar67 + 0x18 + lVar62) != 0) {
                    plVar34 = (longlong *)(lVar62 + lVar67);
                    lVar62 = *plVar34;
                    if (((((-bVar42 & bVar42) != (byte)local_308) &&
                         ((DAT_14c760db0 & uVar54 & 0xc00) != 0)) &&
                        (pLVar31 = local_310, (int)local_2d0 != -1)) &&
                       (*(int *)((longlong)plVar34 + 0x1c) == (int)local_2d0)) {
                      lVar62 = plVar34[1];
                    }
                    if (lVar62 != 0) {
                      if ((longlong)*(int *)(lVar27 + 0x68) != 0) {
                        uVar63 = 0;
                        do {
                          if (*(longlong *)(*(longlong *)(lVar27 + 0x60) + uVar63) == lVar62) {
                            if ((~uVar63 & 0x7fffffff8) != 0) goto LAB_14077aae8;
                            break;
                          }
                          uVar63 = uVar63 + 8;
                        } while ((longlong)*(int *)(lVar27 + 0x68) * 8 != uVar63);
                      }
                      local_2b8 = puVar32;
                      if (*(char *)(lVar62 + 0x2b) != *(char *)(lVar27 + 0x2b)) {
                        local_2c8 = CONCAT44(local_2c8._4_4_,(int)uVar50);
                        local_244 = *(uint *)(lVar27 + 0x2c);
                        uVar60 = *(uint *)(lVar62 + 0x58);
                        uVar50 = (ulonglong)uVar60;
                        lVar57 = *(longlong *)(lVar62 + 0x50);
                        uVar23 = 0;
                        if (0 < (int)uVar60) {
                          do {
                            uVar25 = (int)(uVar50 >> 1) + uVar23;
                            uVar24 = (uint)uVar50;
                            if (*(uint *)(lVar57 + (ulonglong)uVar25 * 4) < local_244) {
                              uVar23 = uVar25 + (uVar24 & 1);
                            }
                            uVar50 = uVar50 >> 1;
                          } while (1 < uVar24);
                        }
                        uVar50 = (ulonglong)uVar23;
                        local_268 = plVar47;
                        if ((uVar60 - uVar23 == 0 || (int)uVar60 < (int)uVar23) ||
                           (*(uint *)(lVar57 + uVar50 * 4) != local_244)) {
                          local_258 = (longlong *)(lVar62 + 0x50);
                          *(uint *)(lVar62 + 0x58) = uVar60 + 1;
                          local_220 = uVar50;
                          if (*(uint *)(lVar62 + 0x5c) < uVar60 + 1) {
                            FUN_14470e864(local_258);
                            lVar57 = *local_258;
                          }
                          memmove((void *)(lVar57 + local_220 * 4 + 4),
                                  (void *)(lVar57 + local_220 * 4),(ulonglong)(uVar60 - uVar23) << 2
                                 );
                          *(uint *)(*local_258 + local_220 * 4) = local_244;
                          pLVar31 = local_310;
                        }
                        uVar50 = local_2c8 & 0xffffffff;
                        plVar47 = local_268;
                        if ((*(uint *)(lVar27 + 0x3c) == 0xffffffff) ||
                           (*(uint *)(lVar27 + 0x3c) < *(uint *)(lVar62 + 0x2c))) {
                          *(uint *)(lVar27 + 0x3c) = *(uint *)(lVar62 + 0x2c);
                        }
                      }
                      iVar49 = *(int *)(lVar27 + 0x68);
                      uVar60 = iVar49 + 1;
                      *(uint *)(lVar27 + 0x68) = uVar60;
                      if (*(uint *)(lVar27 + 0x6c) < uVar60) {
                        local_2c8 = CONCAT44(local_2c8._4_4_,(int)uVar50);
                        local_268 = plVar47;
                        FUN_14470e57a(local_2e0);
                        uVar50 = local_2c8 & 0xffffffff;
                        plVar47 = local_268;
                        pLVar31 = local_310;
                      }
                      *(longlong *)(*local_2e0 + (longlong)iVar49 * 8) = lVar62;
                      puVar32 = local_2b8;
                    }
                  }
LAB_14077aae8:
                  bVar42 = bVar42 - 1 & bVar42;
                } while (bVar42 != 0);
                pLVar29 = (LARGE_INTEGER *)((ulonglong)((byte)local_308 == '\x02') * 0x20 + lVar67);
                if (((ulonglong)local_2e8 & 0x2fc00) == 0) {
                  pLVar29[2].QuadPart = lVar27;
                  bVar68 = false;
                }
                else {
                  lVar67 = *(longlong *)
                            (lVar67 + 0x10 + (ulonglong)((byte)local_308 == '\x01') * 0x20);
                  DVar59 = (DWORD)local_2e8;
                  if (lVar67 != 0) {
                    if ((longlong)*(int *)(lVar27 + 0x68) != 0) {
                      uVar63 = 0;
                      do {
                        if (*(longlong *)(*(longlong *)(lVar27 + 0x60) + uVar63) == lVar67) {
                          if ((~uVar63 & 0x7fffffff8) != 0) goto LAB_14077ad6a;
                          break;
                        }
                        uVar63 = uVar63 + 8;
                      } while ((longlong)*(int *)(lVar27 + 0x68) * 8 != uVar63);
                    }
                    local_2b8 = puVar32;
                    if (*(char *)(lVar67 + 0x2b) != *(char *)(lVar27 + 0x2b)) {
                      local_2c8 = CONCAT44(local_2c8._4_4_,(int)uVar50);
                      uVar54 = *(uint *)(lVar27 + 0x2c);
                      uVar60 = *(uint *)(lVar67 + 0x58);
                      uVar50 = (ulonglong)uVar60;
                      lVar62 = *(longlong *)(lVar67 + 0x50);
                      uVar23 = 0;
                      if (0 < (int)uVar60) {
                        do {
                          uVar25 = (int)(uVar50 >> 1) + uVar23;
                          uVar24 = (uint)uVar50;
                          if (*(uint *)(lVar62 + (ulonglong)uVar25 * 4) < uVar54) {
                            uVar23 = uVar25 + (uVar24 & 1);
                          }
                          uVar50 = uVar50 >> 1;
                        } while (1 < uVar24);
                      }
                      uVar50 = (ulonglong)uVar23;
                      local_268 = plVar47;
                      if ((uVar60 - uVar23 == 0 || (int)uVar60 < (int)uVar23) ||
                         (*(uint *)(lVar62 + uVar50 * 4) != uVar54)) {
                        local_308 = (LARGE_INTEGER *)(lVar67 + 0x50);
                        *(uint *)(lVar67 + 0x58) = uVar60 + 1;
                        if (*(uint *)(lVar67 + 0x5c) < uVar60 + 1) {
                          FUN_14470e864(local_308);
                          lVar62 = local_308->QuadPart;
                        }
                        memmove((void *)(lVar62 + uVar50 * 4 + 4),(void *)(lVar62 + uVar50 * 4),
                                (ulonglong)(uVar60 - uVar23) << 2);
                        *(uint *)(local_308->QuadPart + uVar50 * 4) = uVar54;
                        pLVar31 = local_310;
                      }
                      uVar50 = local_2c8 & 0xffffffff;
                      plVar47 = local_268;
                      if ((*(uint *)(lVar27 + 0x3c) == 0xffffffff) ||
                         (*(uint *)(lVar27 + 0x3c) < *(uint *)(lVar67 + 0x2c))) {
                        *(uint *)(lVar27 + 0x3c) = *(uint *)(lVar67 + 0x2c);
                      }
                    }
                    iVar49 = *(int *)(lVar27 + 0x68);
                    uVar54 = iVar49 + 1;
                    *(uint *)(lVar27 + 0x68) = uVar54;
                    DVar59 = (DWORD)local_2e8;
                    if (*(uint *)(lVar27 + 0x6c) < uVar54) {
                      FUN_14470e57a(local_2e0);
                      pLVar31 = local_310;
                      DVar59 = (DWORD)local_2e8;
                    }
                    *(longlong *)(*local_2e0 + (longlong)iVar49 * 8) = lVar67;
                    puVar32 = local_2b8;
                  }
LAB_14077ad6a:
                  if (*(int *)((longlong)pLVar29 + 0x1c) == -1) {
                    pLVar58 = &local_118;
                    if ((int)local_2d0 == -1) {
LAB_14077ad83:
                      pLVar29[1] = *pLVar58;
                    }
                  }
                  else {
                    pLVar58 = pLVar29;
                    if (*(int *)((longlong)pLVar29 + 0x1c) != (int)local_2d0) goto LAB_14077ad83;
                  }
                  pLVar29[3].s.LowPart = DVar59;
                  pLVar29->QuadPart = lVar27;
                  *(int *)((longlong)pLVar29 + 0x1c) = (int)local_2d0;
                  pLVar29[2].QuadPart = 0;
                  bVar68 = (*(byte *)((longlong)puVar32 + 0x24) & 3) != 0;
                }
                uVar50 = CONCAT71((int7)(uVar50 >> 8),(byte)uVar50 | bVar68);
              }
              iVar51 = iVar51 + 1;
            } while (iVar51 != (uint)local_2f8);
          }
          plVar36 = plVar36 + 6;
        } while (plVar36 != plVar47);
      }
      if ((longlong)*(int *)(lVar27 + 0x88) != 0) {
        puVar32 = *(undefined8 **)(lVar27 + 0x80);
        puVar40 = puVar32 + (longlong)*(int *)(lVar27 + 0x88) * 7;
        local_2d0 = (LARGE_INTEGER *)(lVar27 + 0x60);
        do {
          pLVar29 = (LARGE_INTEGER *)*puVar32;
          *(int *)((longlong)pLVar29 + 0x3c) =
               *(int *)((longlong)pLVar29 + 0x3c) + *(int *)(puVar32 + 6);
          uVar54 = *(uint *)((longlong)puVar32 + 0x1c);
          uVar60 = *(uint *)(puVar32 + 1);
          if (uVar54 == DAT_14ca95bd0) {
            uVar54 = 0xffffffff;
          }
          local_2e8 = (LARGE_INTEGER *)CONCAT44(local_2e8._4_4_,uVar54);
          bVar42 = *(byte *)(lVar27 + 0x2b);
          local_308 = (LARGE_INTEGER *)CONCAT44(local_308._4_4_,uVar60);
          bVar21 = 3;
          pLVar58 = pLVar29;
          local_118.s.LowPart = uVar11;
          local_118.s.HighPart = uVar15;
          do {
            uVar63 = (ulonglong)((-bVar21 & bVar21) == 2);
            if (pLVar29[uVar63 * 4 + 0x18].s.LowPart != 0) {
              pLVar46 = pLVar29 + uVar63 * 4 + 0x15;
              lVar67 = pLVar46->QuadPart;
              if (((((-bVar21 & bVar21) != bVar42) && ((DAT_14c760db0 & uVar60 & 0xc00) != 0)) &&
                  (pLVar31 = local_310, (DWORD)local_2e8 != -1)) &&
                 (*(int *)((longlong)pLVar46 + 0x1c) == (DWORD)local_2e8)) {
                lVar67 = pLVar46[1].QuadPart;
              }
              if (lVar67 != 0) {
                if ((longlong)*(int *)(lVar27 + 0x68) != 0) {
                  uVar63 = 0;
                  do {
                    if (*(longlong *)(*(longlong *)(lVar27 + 0x60) + uVar63) == lVar67) {
                      if ((~uVar63 & 0x7fffffff8) != 0) goto LAB_14077afce;
                      break;
                    }
                    uVar63 = uVar63 + 8;
                  } while ((longlong)*(int *)(lVar27 + 0x68) * 8 != uVar63);
                }
                local_2f8 = pLVar58;
                if (*(char *)(lVar67 + 0x2b) != *(char *)(lVar27 + 0x2b)) {
                  local_2c8 = CONCAT44(local_2c8._4_4_,(int)uVar50);
                  uVar54 = *(uint *)(lVar27 + 0x2c);
                  uVar23 = *(uint *)(lVar67 + 0x58);
                  uVar50 = (ulonglong)uVar23;
                  lVar62 = *(longlong *)(lVar67 + 0x50);
                  uVar24 = 0;
                  if (0 < (int)uVar23) {
                    do {
                      uVar65 = (int)(uVar50 >> 1) + uVar24;
                      uVar25 = (uint)uVar50;
                      if (*(uint *)(lVar62 + (ulonglong)uVar65 * 4) < uVar54) {
                        uVar24 = uVar65 + (uVar25 & 1);
                      }
                      uVar50 = uVar50 >> 1;
                    } while (1 < uVar25);
                  }
                  local_258 = (longlong *)CONCAT44(local_258._4_4_,uVar54);
                  plVar36 = (longlong *)(ulonglong)uVar24;
                  local_2b8 = puVar40;
                  if ((uVar23 - uVar24 == 0 || (int)uVar23 < (int)uVar24) ||
                     (*(uint *)(lVar62 + (longlong)plVar36 * 4) != uVar54)) {
                    local_2e0 = (longlong *)(lVar67 + 0x50);
                    *(uint *)(lVar67 + 0x58) = uVar23 + 1;
                    local_268 = plVar36;
                    if (*(uint *)(lVar67 + 0x5c) < uVar23 + 1) {
                      FUN_14470e864(local_2e0);
                      lVar62 = *local_2e0;
                    }
                    memmove((void *)(lVar62 + (longlong)local_268 * 4 + 4),
                            (void *)(lVar62 + (longlong)local_268 * 4),
                            (ulonglong)(uVar23 - uVar24) << 2);
                    *(undefined4 *)(*local_2e0 + (longlong)local_268 * 4) = local_258._0_4_;
                    pLVar31 = local_310;
                  }
                  uVar50 = local_2c8 & 0xffffffff;
                  puVar40 = local_2b8;
                  if ((*(uint *)(lVar27 + 0x3c) == 0xffffffff) ||
                     (*(uint *)(lVar27 + 0x3c) < *(uint *)(lVar67 + 0x2c))) {
                    *(uint *)(lVar27 + 0x3c) = *(uint *)(lVar67 + 0x2c);
                  }
                }
                iVar51 = *(int *)(lVar27 + 0x68);
                uVar54 = iVar51 + 1;
                *(uint *)(lVar27 + 0x68) = uVar54;
                if (*(uint *)(lVar27 + 0x6c) < uVar54) {
                  local_2c8 = CONCAT44(local_2c8._4_4_,(int)uVar50);
                  local_2b8 = puVar40;
                  FUN_14470e57a();
                  uVar50 = local_2c8 & 0xffffffff;
                  puVar40 = local_2b8;
                  pLVar31 = local_310;
                }
                *(longlong *)(local_2d0->QuadPart + (longlong)iVar51 * 8) = lVar67;
                pLVar58 = local_2f8;
              }
            }
LAB_14077afce:
            bVar21 = bVar21 - 1 & bVar21;
          } while (bVar21 != 0);
          pLVar46 = pLVar29 + (ulonglong)(bVar42 == 2) * 4 + 0x15;
          if (((ulonglong)local_308 & 0x2fc00) == 0) {
            pLVar46[2].QuadPart = lVar27;
            bVar68 = false;
          }
          else {
            lVar67 = pLVar29[(ulonglong)(bVar42 == 1) * 4 + 0x17].QuadPart;
            DVar59 = (DWORD)local_308;
            if (lVar67 != 0) {
              if ((longlong)*(int *)(lVar27 + 0x68) != 0) {
                uVar63 = 0;
                do {
                  if (*(longlong *)(*(longlong *)(lVar27 + 0x60) + uVar63) == lVar67) {
                    if ((~uVar63 & 0x7fffffff8) != 0) goto LAB_14077b246;
                    break;
                  }
                  uVar63 = uVar63 + 8;
                } while ((longlong)*(int *)(lVar27 + 0x68) * 8 != uVar63);
              }
              if (*(char *)(lVar67 + 0x2b) != *(char *)(lVar27 + 0x2b)) {
                local_2c8 = CONCAT44(local_2c8._4_4_,(int)uVar50);
                uVar54 = *(uint *)(lVar27 + 0x2c);
                uVar60 = *(uint *)(lVar67 + 0x58);
                uVar50 = (ulonglong)uVar60;
                lVar62 = *(longlong *)(lVar67 + 0x50);
                uVar23 = 0;
                if (0 < (int)uVar60) {
                  do {
                    uVar25 = (int)(uVar50 >> 1) + uVar23;
                    uVar24 = (uint)uVar50;
                    if (*(uint *)(lVar62 + (ulonglong)uVar25 * 4) < uVar54) {
                      uVar23 = uVar25 + (uVar24 & 1);
                    }
                    uVar50 = uVar50 >> 1;
                  } while (1 < uVar24);
                }
                uVar50 = (ulonglong)uVar23;
                local_2b8 = puVar40;
                if ((uVar60 - uVar23 == 0 || (int)uVar60 < (int)uVar23) ||
                   (*(uint *)(lVar62 + uVar50 * 4) != uVar54)) {
                  local_2f8 = (LARGE_INTEGER *)(lVar67 + 0x50);
                  *(uint *)(lVar67 + 0x58) = uVar60 + 1;
                  if (*(uint *)(lVar67 + 0x5c) < uVar60 + 1) {
                    FUN_14470e864(local_2f8);
                    lVar62 = local_2f8->QuadPart;
                  }
                  memmove((void *)(lVar62 + uVar50 * 4 + 4),(void *)(lVar62 + uVar50 * 4),
                          (ulonglong)(uVar60 - uVar23) << 2);
                  *(uint *)(local_2f8->QuadPart + uVar50 * 4) = uVar54;
                  pLVar31 = local_310;
                }
                uVar50 = local_2c8 & 0xffffffff;
                puVar40 = local_2b8;
                if ((*(uint *)(lVar27 + 0x3c) == 0xffffffff) ||
                   (*(uint *)(lVar27 + 0x3c) < *(uint *)(lVar67 + 0x2c))) {
                  *(uint *)(lVar27 + 0x3c) = *(uint *)(lVar67 + 0x2c);
                }
              }
              iVar51 = *(int *)(lVar27 + 0x68);
              uVar54 = iVar51 + 1;
              *(uint *)(lVar27 + 0x68) = uVar54;
              DVar59 = (DWORD)local_308;
              if (*(uint *)(lVar27 + 0x6c) < uVar54) {
                FUN_14470e57a(local_2d0);
                pLVar31 = local_310;
                DVar59 = (DWORD)local_308;
              }
              *(longlong *)(local_2d0->QuadPart + (longlong)iVar51 * 8) = lVar67;
            }
LAB_14077b246:
            if (*(int *)((longlong)pLVar46 + 0x1c) == -1) {
              pLVar29 = &local_118;
              if ((DWORD)local_2e8 == -1) {
LAB_14077b25f:
                pLVar46[1] = *pLVar29;
              }
            }
            else {
              pLVar29 = pLVar46;
              if (*(int *)((longlong)pLVar46 + 0x1c) != (DWORD)local_2e8) goto LAB_14077b25f;
            }
            pLVar46[3].s.LowPart = DVar59;
            pLVar46->QuadPart = lVar27;
            *(DWORD *)((longlong)pLVar46 + 0x1c) = (DWORD)local_2e8;
            pLVar46[2].QuadPart = 0;
            bVar68 = (*(byte *)((longlong)pLVar58 + 0x24) & 3) != 0;
          }
          uVar50 = CONCAT71((int7)(uVar50 >> 8),(byte)uVar50 | bVar68);
          puVar32 = puVar32 + 7;
        } while (puVar32 != puVar40);
      }
      uVar54 = local_27c;
      iVar51 = DAT_14c760df0;
      uVar60 = *(uint *)(lVar27 + 0x38);
      *(uint *)(lVar27 + 0x38) = uVar60 & 0xffffffdf | (uint)(0 < DAT_14c760df0) << 5;
      if ((0 < iVar51) &&
         (((((byte)uVar50 | (byte)uVar60 >> 4) & 1) != 0 || ((*(byte *)(lVar27 + 0x28) & 0x10) != 0)
          ))) {
        DVar59 = pLVar31[0x9f].s.LowPart;
        uVar60 = DVar59 + 1;
        pLVar31[0x9f].s.LowPart = uVar60;
        if (*(uint *)((longlong)pLVar31 + 0x4fc) < uVar60) {
          FUN_14470e57a(local_228);
          pLVar31 = local_310;
        }
        *(longlong *)(pLVar31[0x9e].QuadPart + (longlong)(int)DVar59 * 8) = lVar27;
        DVar59 = pLVar31[0x9f].s.LowPart;
        while (DVar59 != 0) {
          lVar27 = *(longlong *)(pLVar31[0x9e].QuadPart + -8 + (longlong)(int)DVar59 * 8);
          DVar59 = DVar59 - 1;
          pLVar31[0x9f].s.LowPart = DVar59;
          if ((*(uint *)(lVar27 + 0x38) & 0x20) != 0) {
            *(uint *)(lVar27 + 0x38) = *(uint *)(lVar27 + 0x38) & 0xffffffdf;
            uVar60 = *(uint *)(lVar27 + 0x68);
            DVar59 = pLVar31[0x9f].s.LowPart;
            if ((longlong)(int)uVar60 != 0) {
              pLVar31[0x9f].s.LowPart = DVar59 + uVar60;
              if (*(int *)((longlong)pLVar31 + 0x4fc) - DVar59 < uVar60) {
                FUN_14470e57a(local_228,DVar59);
                pLVar31 = local_310;
              }
              memcpy((void *)((longlong)(int)DVar59 * 8 + pLVar31[0x9e].QuadPart),
                     *(void **)(lVar27 + 0x60),(longlong)(int)uVar60 << 3);
              DVar59 = local_310[0x9f].s.LowPart;
              pLVar31 = local_310;
            }
          }
        }
      }
      uVar60 = local_22c + 1;
    } while (uVar60 != uVar54);
  }
  DVar59 = pLVar31[0x38].s.LowPart;
  if ((longlong)(int)DVar59 != 0) {
    lVar27 = pLVar31[0x37].QuadPart;
    lVar67 = 0;
    do {
      piVar1 = (int *)(*(longlong *)(lVar27 + lVar67) + 0x3c);
      *piVar1 = *piVar1 + 1;
      lVar67 = lVar67 + 0x10;
    } while ((longlong)(int)DVar59 * 0x10 != lVar67);
  }
  DVar59 = pLVar31[0x3a].s.LowPart;
  if ((longlong)(int)DVar59 != 0) {
    lVar27 = pLVar31[0x39].QuadPart;
    lVar67 = 0;
    do {
      piVar1 = (int *)(*(longlong *)(lVar27 + lVar67) + 0x3c);
      *piVar1 = *piVar1 + 1;
      lVar67 = lVar67 + 0x10;
    } while ((longlong)(int)DVar59 * 0x10 != lVar67);
  }
  iVar51 = (int)local_238;
  if (0 < local_230) {
    *(uint *)(pLVar31[0x29].QuadPart + 0x38) = *(uint *)(pLVar31[0x29].QuadPart + 0x38) & 0xffffffdf
    ;
    *(uint *)(pLVar31[0x28].QuadPart + 0x38) = *(uint *)(pLVar31[0x28].QuadPart + 0x38) & 0xffffffdf
    ;
    if (1 < uVar54) {
      uVar60 = 1;
      do {
        lVar27 = *(longlong *)(local_2b0->QuadPart + (longlong)(int)uVar60 * 8);
        if ((*(byte *)(lVar27 + 0x38) & 0x20) == 0) {
          for (puVar32 = *(undefined8 **)(lVar27 + 0x1b0); puVar32 != (undefined8 *)0x0;
              puVar32 = (undefined8 *)*puVar32) {
            if (puVar32[1] == 0) {
              puVar32[1] = lVar27;
            }
            uVar50 = (ulonglong)(*(char *)(lVar27 + 0x2b) == '\x02');
            if (puVar32[uVar50 + 3] == 0) {
              puVar32[uVar50 + 3] = lVar27;
            }
            puVar32[2] = lVar27;
            puVar32[(ulonglong)(*(char *)(lVar27 + 0x2b) == '\x02') + 5] = lVar27;
          }
        }
        else {
          iVar49 = *(int *)(lVar27 + 0x78);
          if ((longlong)iVar49 != 0) {
            lVar67 = *(longlong *)(lVar27 + 0x70);
            lVar62 = 0;
            do {
              piVar1 = (int *)(*(longlong *)(lVar67 + lVar62) + 0x3c);
              *piVar1 = *piVar1 - *(int *)(lVar67 + 0x28 + lVar62);
              lVar62 = lVar62 + 0x30;
            } while ((longlong)iVar49 * 0x30 != lVar62);
          }
          iVar49 = *(int *)(lVar27 + 0x88);
          pLVar31 = local_310;
          if ((longlong)iVar49 != 0) {
            lVar27 = *(longlong *)(lVar27 + 0x80);
            lVar67 = 0;
            do {
              piVar1 = (int *)(*(longlong *)(lVar27 + lVar67) + 0x3c);
              *piVar1 = *piVar1 - *(int *)(lVar27 + 0x30 + lVar67);
              lVar67 = lVar67 + 0x38;
            } while ((longlong)iVar49 * 0x38 - lVar67 != 0);
          }
        }
        uVar60 = uVar60 + 1;
      } while (uVar60 != uVar54);
    }
  }
  if (((DAT_14c760dfc != 0) && (*(int *)(&DAT_14ca814cc + (ulonglong)DAT_14ca85550 * 0x3c) < 0)) &&
     (*(int *)((longlong)pLVar31 + 0x154) != 0)) {
    local_98.QuadPart = 0;
    local_90 = 0x2000000000;
    local_148.QuadPart = (LONGLONG)&local_1f8;
    local_1f8._0_4_ = 0;
    local_1f8._4_4_ = 0;
    pLStack_140 = &local_208;
    local_208.QuadPart = 0;
    local_158.QuadPart = (LONGLONG)&local_118;
    uStack_150 = pLVar31;
    if (1 < uVar54) {
      uVar54 = 1;
      uVar50 = local_238;
      do {
        lVar27 = *(longlong *)(local_2b0->QuadPart + (longlong)(int)uVar54 * 8);
        if ((*(byte *)(lVar27 + 0x38) & 0x28) == 0) {
          uVar4 = *(ushort *)(lVar27 + 0x28);
          if ((uVar4 & 1) == 0) {
            if ((uVar4 & 4) == 0) {
LAB_14077b821:
              FUN_143204f3a(&local_158);
            }
          }
          else {
            if (((uVar4 & 0x60) != 0) || ((*(byte *)(lVar27 + 0x34) & 0x40) == 0))
            goto LAB_14077b821;
            lVar67 = *(longlong *)(lVar27 + 0x10);
            lVar62 = *(longlong *)(lVar27 + 0x18);
            if (lVar62 == 0) {
              LVar30.QuadPart = lVar67 + (ulonglong)_DAT_00000088;
            }
            else {
              LOCK();
              *(int *)(lVar62 + 8) = *(int *)(lVar62 + 8) + 1;
              UNLOCK();
              LOCK();
              puVar8 = (uint *)(lVar62 + 8);
              uVar60 = *puVar8;
              *puVar8 = *puVar8 - 1;
              UNLOCK();
              LVar30.QuadPart = lVar67 + (ulonglong)*(ushort *)(lVar62 + 0x88);
              if ((uVar60 & 0x3fffffff) == 1) {
                puVar8 = (uint *)(lVar62 + 8);
                LOCK();
                uVar60 = *puVar8;
                *puVar8 = *puVar8 | 0x40000000;
                UNLOCK();
                if ((uVar60 >> 0x1e & 1) == 0) {
                  bVar42 = *(byte *)(lVar62 + 0xd);
                  plVar34 = (longlong *)FUN_14001cc68(0x10,8);
                  plVar34[1] = lVar62;
                  plVar36 = DAT_14ca843c0;
                  plVar47 = DAT_14ca843c8;
                  if ((bVar42 & 2) == 0) {
                    do {
                      *plVar34 = (longlong)plVar36;
                      LOCK();
                      bVar68 = plVar36 != DAT_14ca843c0;
                      plVar47 = plVar34;
                      if (bVar68) {
                        plVar36 = DAT_14ca843c0;
                        plVar47 = DAT_14ca843c0;
                      }
                      DAT_14ca843c0 = plVar47;
                      UNLOCK();
                    } while (bVar68);
                  }
                  else {
                    do {
                      *plVar34 = (longlong)plVar47;
                      LOCK();
                      bVar68 = plVar47 != DAT_14ca843c8;
                      plVar36 = plVar34;
                      if (bVar68) {
                        plVar47 = DAT_14ca843c8;
                        plVar36 = DAT_14ca843c8;
                      }
                      DAT_14ca843c8 = plVar36;
                      UNLOCK();
                    } while (bVar68);
                  }
                }
              }
            }
            lVar67 = CONCAT44(local_1f8._4_4_,(uint)local_1f8);
            if (lVar67 != 0) {
              cVar19 = FUN_14742a1b0(local_208.QuadPart,LVar30.QuadPart);
              if ((cVar19 == '\0') || (*(int *)(lVar67 + 0x1ac) != *(int *)(lVar27 + 0x1ac))) {
                FUN_143204f3a(&local_158);
              }
              else {
                iVar51 = (int)local_90;
                uVar60 = local_90._4_4_;
                if ((int)local_90 == 0) {
                  uVar66 = *(undefined4 *)(lVar67 + 0x2c);
                  local_90 = CONCAT44(local_90._4_4_,1);
                  if (local_90._4_4_ == 0) {
                    FUN_14742e254(&local_118,0);
                  }
                  LVar35 = local_98;
                  if ((LARGE_INTEGER *)local_98.QuadPart == (LARGE_INTEGER *)0x0) {
                    LVar35.QuadPart = (LONGLONG)&local_118;
                  }
                  *(undefined4 *)LVar35 = uVar66;
                  iVar51 = (int)local_90;
                  uVar60 = local_90._4_4_;
                }
                local_90 = CONCAT44(local_90._4_4_,iVar51 + 1U);
                if (uVar60 < iVar51 + 1U) {
                  FUN_14742e254(&local_118,iVar51);
                }
                LVar35 = local_98;
                if ((LARGE_INTEGER *)local_98.QuadPart == (LARGE_INTEGER *)0x0) {
                  LVar35.QuadPart = (LONGLONG)&local_118;
                }
                *(uint *)(LVar35.QuadPart + (longlong)iVar51 * 4) = uVar54;
              }
            }
            local_1f8._0_4_ = (uint)lVar27;
            local_1f8._4_4_ = (int)((ulonglong)lVar27 >> 0x20);
            uVar50 = local_238;
            local_208 = LVar30;
          }
        }
        iVar51 = (int)uVar50;
        uVar54 = uVar54 + 1;
      } while (uVar54 != local_27c);
    }
    FUN_143204f3a(&local_158);
    pLVar31 = local_310;
  }
  if (pLVar31[0x2a].s.LowPart != 0) {
    bVar42 = DAT_14c760e00 != 0 & DAT_14ca84e24;
    local_308 = (LARGE_INTEGER *)CONCAT71(local_308._1_7_,bVar42);
    if (1 < local_27c) {
      pLVar29 = pLVar31 + 0x1c;
      pLVar58 = (LARGE_INTEGER *)(ulonglong)(2 - iVar51);
      iVar44 = 1;
      iVar49 = -1;
      local_2e8 = pLVar58;
      do {
        lVar27 = *(longlong *)(local_2b0->QuadPart + (longlong)iVar44 * 8);
        if ((*(char *)(lVar27 + 0x2b) == '\x02') && ((*(byte *)(lVar27 + 0x38) & 0x20) == 0)) {
          iVar51 = iVar49;
          if (0xfffffffd < iVar49 - 1U) {
            iVar51 = 0;
          }
          iVar22 = *(int *)(lVar27 + 0x3c);
          if (*(int *)(lVar27 + 0x3c) + 1U <= iVar51 + 1U) {
            iVar22 = iVar51;
          }
          lVar67 = *(longlong *)(local_2b0->QuadPart + (longlong)iVar22 * 8);
          *(int *)(lVar27 + 0x40) = iVar22;
          if (bVar42 == 0) {
            if (*(int *)(lVar27 + 0xd4) < 0) {
              *(undefined4 *)(lVar27 + 0xd0) = 0;
              FUN_14742c584(lVar27 + 0xc0,0);
              pLVar31 = local_310;
              bVar42 = (byte)local_308;
            }
            else {
              *(undefined4 *)(lVar27 + 0xd0) = 0;
            }
            lVar62 = *(longlong *)(local_2b0->QuadPart + (longlong)*(int *)(lVar67 + 0x48) * 8);
            iVar51 = *(int *)(lVar62 + 0xd0);
            *(uint *)(lVar62 + 0xd0) = iVar51 + 1U;
            if (*(uint *)(lVar62 + 0xd4) < iVar51 + 1U) {
              local_2d0 = pLVar29;
              FUN_14742e1f0(lVar62 + 0xc0,iVar51);
              pLVar29 = local_2d0;
              pLVar31 = local_310;
              bVar42 = (byte)local_308;
            }
            lVar57 = lVar62 + 0xc0;
            if (*(longlong *)(lVar62 + 200) != 0) {
              lVar57 = *(longlong *)(lVar62 + 200);
            }
            *(longlong *)(lVar57 + (longlong)iVar51 * 8) = lVar27;
            pLVar58 = local_2e8;
          }
          if (iVar49 != iVar22) {
            lVar62 = *(longlong *)(lVar67 + 0x180);
            if (lVar62 == 0) {
              puVar32 = (undefined8 *)(pLVar31[0x1c].QuadPart + 7U & 0xfffffffffffffff8);
              LVar30.QuadPart = (LONGLONG)(puVar32 + 9);
              if ((ulonglong)pLVar31[0x1d] < (ulonglong)LVar30) {
                FUN_140023dd8(pLVar29,0x50);
                puVar32 = (undefined8 *)(pLVar29->QuadPart + 7U & 0xfffffffffffffff8);
                LVar30.QuadPart = (LONGLONG)(puVar32 + 9);
                pLVar31 = local_310;
                bVar42 = (byte)local_308;
              }
              pLVar31[0x1c].QuadPart = (LONGLONG)LVar30;
              uVar20 = *(undefined1 *)(lVar67 + 0x2b);
              *puVar32 = 0;
              puVar32[1] = 0;
              *(undefined4 *)(puVar32 + 2) = 0xffffffff;
              *(undefined1 *)((longlong)puVar32 + 0x14) = 1;
              *(undefined4 *)(puVar32 + 3) = 0xffffffff;
              *(undefined1 *)((longlong)puVar32 + 0x1c) = 1;
              puVar32[4] = 0;
              puVar32[5] = 0;
              puVar32[6] = 0;
              puVar32[7] = 0;
              *(undefined4 *)(puVar32 + 8) = 1;
              *(undefined1 *)((longlong)puVar32 + 0x44) = uVar20;
              *(undefined2 *)((longlong)puVar32 + 0x45) = 2;
              *(undefined1 *)((longlong)puVar32 + 0x47) = 0;
              *(undefined8 **)(lVar67 + 0x180) = puVar32;
              DVar59 = pLVar31[0x8e].s.LowPart;
              pLVar31[0x8e].s.LowPart = DVar59 + 1;
              if (*(uint *)((longlong)pLVar31 + 0x474) < DVar59 + 1) {
                FUN_144adb638(local_250,DVar59);
                pLVar58 = local_2e8;
                pLVar31 = local_310;
                bVar42 = (byte)local_308;
              }
              lVar62 = *(longlong *)(lVar67 + 0x180);
              *(longlong *)(local_250->QuadPart + (longlong)(int)DVar59 * 8) = lVar62;
            }
            lVar57 = pLVar31[0x28].QuadPart;
            *(uint *)(lVar67 + 0x34) = *(uint *)(lVar67 + 0x34) | 0x10;
            if (lVar67 == lVar57) {
              *(undefined1 *)(lVar62 + 0x47) = 1;
            }
            else {
              *(undefined4 *)(lVar62 + 0x40) = 0;
            }
            *(undefined1 *)(lVar62 + 0x46) = 1;
            *(byte *)(lVar27 + 0x34) = *(byte *)(lVar27 + 0x34) | 4;
            bVar21 = *(byte *)(lVar27 + 0x130);
            uVar54 = *(uint *)(*(longlong *)(lVar27 + 0x128) + 0x2c);
            uVar50 = (ulonglong)(*(char *)(*(longlong *)(lVar27 + 0x128) + 0x2b) == '\x02');
            uVar60 = *(uint *)(lVar62 + 0x10 + uVar50 * 8);
            bVar2 = *(byte *)(lVar62 + 0x14 + uVar50 * 8);
            iVar49 = iVar22;
            if ((uVar60 != uVar54) || (bVar2 != bVar21)) {
              bVar3 = bVar2;
              if (bVar21 <= bVar2) {
                bVar3 = bVar21;
              }
              if ((uVar54 <= uVar60) && (bVar21 <= bVar2)) {
                local_2f8 = (LARGE_INTEGER *)CONCAT44(local_2f8._4_4_,(uint)bVar3);
                iVar51 = *(int *)(lVar27 + 0x120);
                uVar60 = iVar51 + 1;
                *(uint *)(lVar27 + 0x120) = uVar60;
                if (*(uint *)(lVar27 + 0x124) < uVar60) {
                  local_2d0 = pLVar29;
                  FUN_144adb9c0(lVar27 + 0xf8);
                  pLVar58 = local_2e8;
                  pLVar29 = local_2d0;
                  pLVar31 = local_310;
                  bVar42 = (byte)local_308;
                }
                lVar67 = lVar27 + 0xf8;
                if (*(longlong *)(lVar27 + 0x118) != 0) {
                  lVar67 = *(longlong *)(lVar27 + 0x118);
                }
                *(longlong *)(lVar67 + (longlong)iVar51 * 8) = lVar62;
                *(ulonglong *)(lVar62 + 0x10 + uVar50 * 8) =
                     (ulonglong)CONCAT14((char)local_2f8,uVar54);
              }
            }
          }
        }
        iVar22 = (int)pLVar58 + iVar44;
        iVar44 = iVar44 + 1;
        iVar51 = (int)local_238;
      } while (iVar22 != 0);
    }
    iVar51 = iVar51 + -2;
    if (iVar51 != 0) {
      uVar54 = 0xffffffff;
      do {
        lVar27 = local_2b0->QuadPart;
        lVar67 = *(longlong *)(lVar27 + (longlong)iVar51 * 8);
        if ((*(char *)(lVar67 + 0x2b) == '\x02') && ((*(byte *)(lVar67 + 0x38) & 0x20) == 0)) {
          uVar60 = 0xffffffff;
          if ((longlong)*(int *)(lVar67 + 0x58) != 0) {
            lVar62 = 0;
            do {
              uVar60 = *(uint *)(*(longlong *)(lVar67 + 0x50) + lVar62);
              if ((*(byte *)(*(longlong *)(lVar27 + (longlong)(int)uVar60 * 8) + 0x38) & 0x20) == 0)
              break;
              lVar62 = lVar62 + 4;
              uVar60 = 0xffffffff;
            } while ((longlong)*(int *)(lVar67 + 0x58) * 4 != lVar62);
            pLVar31 = local_310;
            bVar42 = (byte)local_308;
          }
          uVar23 = local_27c;
          if (uVar54 < local_27c) {
            uVar23 = uVar54;
          }
          if (uVar60 < uVar23) {
            uVar23 = uVar60;
          }
          pLVar29 = *(LARGE_INTEGER **)(lVar27 + (longlong)(int)uVar23 * 8);
          *(uint *)(lVar67 + 0x44) = uVar23;
          if (bVar42 == 0) {
            if (*(int *)(lVar67 + 0xec) < 0) {
              *(undefined4 *)(lVar67 + 0xe8) = 0;
              FUN_14742c584(lVar67 + 0xd8,0);
              pLVar31 = local_310;
              bVar42 = (byte)local_308;
            }
            else {
              *(undefined4 *)(lVar67 + 0xe8) = 0;
            }
            lVar27 = *(longlong *)
                      (local_2b0->QuadPart + (longlong)*(int *)((longlong)pLVar29 + 0x4c) * 8);
            iVar49 = *(int *)(lVar27 + 0xe8);
            *(uint *)(lVar27 + 0xe8) = iVar49 + 1U;
            if (*(uint *)(lVar27 + 0xec) < iVar49 + 1U) {
              FUN_14742e1f0(lVar27 + 0xd8,iVar49);
              pLVar31 = local_310;
              bVar42 = (byte)local_308;
            }
            lVar62 = lVar27 + 0xd8;
            if (*(longlong *)(lVar27 + 0xe0) != 0) {
              lVar62 = *(longlong *)(lVar27 + 0xe0);
            }
            *(longlong *)(lVar62 + (longlong)iVar49 * 8) = lVar67;
          }
          if (uVar54 != uVar23) {
            pLVar58 = (LARGE_INTEGER *)(lVar67 + 0x138);
            if (*(char *)(lVar67 + 0x17e) == '\0') {
              DVar59 = *(int *)(lVar67 + 0x88) + *(int *)(lVar67 + 0x78);
              if ((int)DVar59 < 0) goto LAB_140781da2;
              if (*(int *)(lVar67 + 0x164) < (int)DVar59) {
                FUN_144adac32(lVar67 + 0x158,DVar59);
                bVar42 = (byte)local_308;
              }
              if (*(int *)(lVar67 + 0x174) < (int)DVar59) {
                FUN_144adad0c(lVar67 + 0x168,DVar59);
                bVar42 = (byte)local_308;
              }
              DVar59 = local_310[0x8e].s.LowPart;
              local_310[0x8e].s.LowPart = DVar59 + 1;
              if (*(uint *)((longlong)local_310 + 0x474) < DVar59 + 1) {
                FUN_144adb638(local_250,DVar59);
                bVar42 = (byte)local_308;
              }
              *(LARGE_INTEGER **)(local_250->QuadPart + (longlong)(int)DVar59 * 8) = pLVar58;
              pLVar31 = local_310;
            }
            *(byte *)(lVar67 + 0x34) = *(byte *)(lVar67 + 0x34) | 8;
            *(undefined4 *)(lVar67 + 0x178) = 0;
            *(undefined1 *)(lVar67 + 0x17e) = 1;
            *(byte *)((longlong)pLVar29 + 0x34) = *(byte *)((longlong)pLVar29 + 0x34) | 0x20;
            bVar21 = *(byte *)(pLVar29 + 0x26);
            uVar60 = *(uint *)(pLVar29[0x25].QuadPart + 0x2c);
            uVar50 = (ulonglong)(*(char *)(pLVar29[0x25].QuadPart + 0x2b) == '\x02');
            uVar24 = *(uint *)(lVar67 + 0x148 + uVar50 * 8);
            bVar2 = *(byte *)(lVar67 + 0x14c + uVar50 * 8);
            uVar54 = uVar23;
            if ((uVar24 != uVar60) || (bVar2 != bVar21)) {
              bVar3 = bVar21;
              if (bVar2 < bVar21) {
                bVar3 = bVar2;
              }
              if ((uVar60 <= uVar24) && (bVar21 <= bVar2)) {
                DVar59 = pLVar29[0x24].s.LowPart;
                pLVar29[0x24].s.LowPart = DVar59 + 1;
                pLVar46 = pLVar29;
                local_2e8 = pLVar58;
                if (*(uint *)((longlong)pLVar29 + 0x124) < DVar59 + 1) {
                  local_2f8 = pLVar29;
                  FUN_144adb9c0(pLVar29 + 0x1f,DVar59);
                  pLVar46 = local_2f8;
                  pLVar31 = local_310;
                  bVar42 = (byte)local_308;
                }
                pLVar29 = pLVar29 + 0x1f;
                if ((LARGE_INTEGER *)pLVar46[0x23].QuadPart != (LARGE_INTEGER *)0x0) {
                  pLVar29 = (LARGE_INTEGER *)pLVar46[0x23].QuadPart;
                }
                pLVar29[(int)DVar59].QuadPart = (LONGLONG)local_2e8;
                *(ulonglong *)(lVar67 + 0x148 + uVar50 * 8) = (ulonglong)CONCAT14(bVar3,uVar60);
              }
            }
          }
        }
        iVar51 = iVar51 + -1;
      } while (iVar51 != 0);
    }
  }
  bVar42 = *(byte *)local_290;
  if (((local_2f9 | (byte)(bVar42 ^ 1)) & 1) == 0) {
    puVar32 = TlsGetValue(DAT_14c896140);
    if (puVar32 == (undefined8 *)0x0) {
      puVar32 = (undefined8 *)FUN_14001cc68(0x18,0x10);
      *puVar32 = 0;
      puVar32[1] = 0;
      *(undefined4 *)(puVar32 + 2) = 0;
      TlsSetValue(DAT_14c896140,puVar32);
    }
    pLVar31 = (LARGE_INTEGER *)puVar32[1];
    if (pLVar31 == (LARGE_INTEGER *)0x0) {
      pLVar31 = (LARGE_INTEGER *)*puVar32;
      if (pLVar31 == (LARGE_INTEGER *)0x0) {
        local_118.s.LowPart = DAT_14c896180.s.LowPart;
        local_118.s.HighPart = DAT_14c896180.s.HighPart;
        LVar30 = DAT_14c896180;
        uVar66 = local_118.s.LowPart;
        while (DAT_14c896180 = LVar30, local_118.s.LowPart = uVar66,
              (LVar30.QuadPart & 0x3ffffffU) != 0) {
          local_158.QuadPart =
               (CONCAT44(local_118.s.HighPart,uVar66) & 0xfffffffffc000000) + 0x4000000;
          if ((ulonglong)local_158.QuadPart >> 0x1a < CONCAT44(local_118.s.HighPart,uVar66) >> 0x1a)
          {
            FUN_14000f986(0x3a83126f);
          }
          uVar50 = (ulonglong)((uVar66 & 0x3ffffff) >> 0xe);
          uVar63 = (ulonglong)(LVar30.s.LowPart & 0x3fff);
          local_158.QuadPart =
               local_158.QuadPart & 0xfffffffffc000000U |
               (ulonglong)
               *(uint *)(*(longlong *)(&DAT_14c833b00 + uVar50 * 8) + 0x10 + uVar63 * 0x18);
          LOCK();
          bVar68 = (LARGE_INTEGER *)CONCAT44(local_118.s.HighPart,local_118.s.LowPart) ==
                   (LARGE_INTEGER *)DAT_14c896180.QuadPart;
          LVar30.QuadPart = local_158.QuadPart;
          if (!bVar68) {
            LVar30 = DAT_14c896180;
          }
          DAT_14c896180 = LVar30;
          UNLOCK();
          if (bVar68) {
            *(undefined4 *)(*(longlong *)(&DAT_14c833b00 + uVar50 * 8) + uVar63 * 0x18 + 0x10) = 0;
            pLVar31 = *(LARGE_INTEGER **)
                       (*(longlong *)(&DAT_14c833b00 + uVar50 * 8) + 8 +
                       (ulonglong)(uVar66 & 0x3fff) * 0x18);
            FUN_1447d080c(uVar66 & 0x3ffffff);
            puVar32[1] = pLVar31;
            if (pLVar31 != (LARGE_INTEGER *)0x0) goto LAB_14077c29b;
            goto LAB_140781608;
          }
          local_118.s.LowPart = DAT_14c896180.s.LowPart;
          local_118.s.HighPart = DAT_14c896180.s.HighPart;
          LVar30 = DAT_14c896180;
          uVar66 = local_118.s.LowPart;
        }
        puVar32[1] = 0;
LAB_140781608:
        puVar40 = (undefined8 *)FUN_14001cc68(0x10000,0);
        puVar32[1] = puVar40;
        iVar51 = 0xff;
        do {
          puVar33 = puVar40 + 0x20;
          *puVar40 = puVar33;
          iVar51 = iVar51 + -1;
          puVar40 = puVar33;
        } while (iVar51 != 0);
        *puVar33 = 0;
        pLVar31 = (LARGE_INTEGER *)puVar32[1];
      }
      else {
        puVar32[1] = pLVar31;
        *puVar32 = 0;
      }
LAB_14077c29b:
      *(undefined4 *)(puVar32 + 2) = 0x100;
      iVar51 = 0x100;
    }
    else {
      iVar51 = *(int *)(puVar32 + 2);
    }
    ((LARGE_INTEGER *)(puVar32 + 1))->s = *(_struct_19 *)pLVar31;
    *(int *)(puVar32 + 2) = iVar51 + -1;
    *pLVar31 = (LARGE_INTEGER)UE::Tasks::Private::FTaskBase::vftable;
    pLVar31[1].QuadPart = (LONGLONG)&DAT_100000002;
    pLVar31[2].QuadPart = 0;
    pLVar31[3].s.LowPart = 0;
    pLVar31[4].s.LowPart = 0xffffffff;
    pLVar31[6].QuadPart = 0;
    pLVar31[7].QuadPart = 0x100000000;
    *(undefined1 *)(pLVar31 + 8) = 1;
    pLVar31[0xe] = (LARGE_INTEGER)
                   LowLevelTasks::
                   TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                   TTaskDelegateDummy::vftable;
    pLVar31[0xf].QuadPart = 0;
    pLVar31[0x10].QuadPart = -0x17ffffffffffffe0;
    pLVar31[0x12].QuadPart = 0;
    pLVar31[0x13].QuadPart = 0x100000000;
    *(undefined2 *)(pLVar31 + 0x14) = 0;
    LOCK();
    bVar68 = *(char *)(pLVar31 + 8) == '\x01';
    if (bVar68) {
      *(char *)(pLVar31 + 8) = '\0';
    }
    UNLOCK();
    if (!bVar68) {
      FUN_14008cdb0(pLVar31 + 8);
    }
    *pLVar31 = (LARGE_INTEGER)&PTR_FUN_14a38b868;
    if (*(code **)(pLVar31[0xe].QuadPart + 0x18) != FUN_144713626) {
      (**(code **)(pLVar31[0xe].QuadPart + 0x18))(pLVar31 + 0xe,pLVar31 + 9);
    }
    pLVar31[0xe] = (LARGE_INTEGER)
                   LowLevelTasks::
                   TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                   TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                   ::vftable;
    pLVar31[9].QuadPart = (LONGLONG)pLVar31;
    pLVar31[10].QuadPart = (LONGLONG)pLVar31;
    if (*local_2a0 == 0) {
      LVar30.QuadPart = 0;
    }
    else {
      LVar30 = *(LARGE_INTEGER *)(*local_2a0 + 0x30);
    }
    pLVar31[0xf] = LVar30;
    pLVar31[0x10].QuadPart = -0x3fffffad77750000;
    *(uint *)((longlong)pLVar31 + 0x1c) = bVar42 ^ 1;
    pLVar31[0x15].QuadPart = (LONGLONG)local_310;
    *pLVar31 = (LARGE_INTEGER)&PTR_FUN_14a38b858;
    LOCK();
    UNLOCK();
    LOCK();
    UNLOCK();
    local_118.s.LowPart._0_1_ = 1;
    uVar28 = FUN_1447439e4(pLVar31);
    if (pLVar31 == (LARGE_INTEGER *)0x0) {
      local_2b8 = (undefined8 *)
                  CONCAT44(local_2b8._4_4_,(int)CONCAT71((int7)((ulonglong)uVar28 >> 8),1));
      goto LAB_14077c486;
    }
    DVar59 = local_310[0xa1].s.LowPart;
    local_310[0xa1].s.LowPart = DVar59 + 1;
    if (*(uint *)((longlong)local_310 + 0x50c) < DVar59 + 1) {
      FUN_1401d03aa(local_2d8,DVar59);
    }
    *(LARGE_INTEGER **)(local_2d8->QuadPart + (longlong)(int)DVar59 * 8) = pLVar31;
    LOCK();
    pLVar31[1].s.LowPart = pLVar31[1].s.LowPart + 1;
    UNLOCK();
    local_2b8 = (undefined8 *)((ulonglong)local_2b8 & 0xffffffff00000000);
  }
  else {
    piVar1 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    iVar51 = *piVar1;
    if (iVar51 == 1) {
      FUN_140ad26c0();
      GetCurrentThreadId();
      iVar51 = *piVar1;
      pLVar31 = local_310;
    }
    if ((iVar51 == 0x60000000) || (iVar51 == 0)) {
      *piVar1 = 0x40000010;
    }
    FUN_14320f02e(pLVar31);
    uVar28 = FUN_14320f472(pLVar31);
    local_2b8 = (undefined8 *)
                CONCAT44(local_2b8._4_4_,(int)CONCAT71((int7)((ulonglong)uVar28 >> 8),1));
    if ((iVar51 == 0x60000000) || (iVar51 == 0)) {
      *piVar1 = iVar51;
    }
LAB_14077c486:
    pLVar31 = (LARGE_INTEGER *)0x0;
  }
  local_2d0 = pLVar31;
  FUN_14473400f(0,0);
  if (*(char *)(local_310 + 0xb0) != '\0') {
    lVar27 = local_310[3].QuadPart;
    uStack_110 = *(uint *)(lVar27 + 0x1c8);
    uStack_10c = *(uint *)(lVar27 + 0x1cc);
    local_108 = *(LARGE_INTEGER *)(lVar27 + 0x1d0);
    pLStack_100 = *(LARGE_INTEGER **)(lVar27 + 0x1d8);
    local_f8 = *(undefined8 *)(lVar27 + 0x1e0);
    uStack_f0 = *(undefined8 *)(lVar27 + 0x1e8);
    local_e8 = *(undefined8 *)(lVar27 + 0x1f0);
    uStack_e0 = *(undefined8 *)(lVar27 + 0x1f8);
    uStack_d8 = *(undefined4 *)(lVar27 + 0x200);
    uStack_d4 = *(undefined4 *)(lVar27 + 0x204);
    local_118.s.LowPart = (DWORD)local_310;
    local_118.s.HighPart = (LONG)((ulonglong)local_310 >> 0x20);
    bVar42 = *(byte *)(local_310 + 0xa4);
    if (bVar42 == 0) {
      piVar1 = (int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60);
      iVar51 = *piVar1;
      if (iVar51 == 1) {
        FUN_140ad26c0();
        GetCurrentThreadId();
        iVar51 = *piVar1;
      }
      if ((iVar51 == 0x60000000) || (iVar51 == 0)) {
        *piVar1 = 0x40000010;
      }
      FUN_14320e0b2(local_310,&uStack_110);
      if ((iVar51 == 0x60000000) || (iVar51 == 0)) {
        *piVar1 = iVar51;
      }
    }
    else {
      plVar36 = TlsGetValue(DAT_14c896140);
      if (plVar36 == (longlong *)0x0) {
        plVar36 = (longlong *)FUN_14001cc68(0x18,0x10);
        *plVar36 = 0;
        plVar36[1] = 0;
        *(undefined4 *)(plVar36 + 2) = 0;
        TlsSetValue(DAT_14c896140,plVar36);
      }
      plVar47 = (longlong *)plVar36[1];
      if (plVar47 == (longlong *)0x0) {
        plVar47 = (longlong *)*plVar36;
        if (plVar47 == (longlong *)0x0) {
          uVar54 = DAT_14c896180.s.LowPart;
          LVar30 = DAT_14c896180;
          while (DAT_14c896180 = LVar30, local_158 = LVar30, (LVar30.QuadPart & 0x3ffffffU) != 0) {
            local_1f8 = (LVar30.QuadPart & 0xfffffffffc000000U) + 0x4000000;
            if (local_1f8 >> 0x1a < (ulonglong)LVar30.QuadPart >> 0x1a) {
              FUN_14000f986(0x3a83126f);
            }
            uVar50 = (ulonglong)((uVar54 & 0x3ffffff) >> 0xe);
            uVar64 = (ulonglong)(LVar30.s.LowPart & 0x3fff);
            uVar63 = local_1f8 & 0xfffffffffc000000;
            LVar30.QuadPart =
                 uVar63 | *(uint *)(*(longlong *)(&DAT_14c833b00 + uVar50 * 8) + 0x10 +
                                   uVar64 * 0x18);
            local_1f8._0_4_ = LVar30.s.LowPart;
            local_1f8._4_4_ = (int)(uVar63 >> 0x20);
            LOCK();
            bVar68 = local_158.QuadPart == DAT_14c896180.QuadPart;
            if (!bVar68) {
              LVar30 = DAT_14c896180;
            }
            DAT_14c896180 = LVar30;
            UNLOCK();
            if (bVar68) {
              *(undefined4 *)(*(longlong *)(&DAT_14c833b00 + uVar50 * 8) + uVar64 * 0x18 + 0x10) = 0
              ;
              plVar47 = *(longlong **)
                         (*(longlong *)(&DAT_14c833b00 + uVar50 * 8) + 8 +
                         (ulonglong)(uVar54 & 0x3fff) * 0x18);
              FUN_1447d080c(uVar54 & 0x3ffffff);
              plVar36[1] = (longlong)plVar47;
              if (plVar47 == (longlong *)0x0) goto LAB_14077c6fc;
              goto LAB_14077c737;
            }
            uVar54 = DAT_14c896180.s.LowPart;
            LVar30 = DAT_14c896180;
          }
          plVar36[1] = 0;
LAB_14077c6fc:
          puVar32 = (undefined8 *)FUN_14001cc68(0x10000,0);
          plVar36[1] = (longlong)puVar32;
          iVar51 = 0xff;
          do {
            puVar40 = puVar32 + 0x20;
            *puVar32 = puVar40;
            iVar51 = iVar51 + -1;
            puVar32 = puVar40;
          } while (iVar51 != 0);
          *puVar40 = 0;
          plVar47 = (longlong *)plVar36[1];
        }
        else {
          plVar36[1] = (longlong)plVar47;
          *plVar36 = 0;
        }
LAB_14077c737:
        *(undefined4 *)(plVar36 + 2) = 0x100;
        iVar51 = 0x100;
      }
      else {
        iVar51 = (int)plVar36[2];
      }
      plVar36[1] = *plVar47;
      *(int *)(plVar36 + 2) = iVar51 + -1;
      *plVar47 = (longlong)UE::Tasks::Private::FTaskBase::vftable;
      plVar47[1] = (longlong)&DAT_100000002;
      plVar47[2] = 0;
      *(undefined4 *)(plVar47 + 3) = 0;
      *(undefined4 *)(plVar47 + 4) = 0xffffffff;
      plVar47[6] = 0;
      plVar47[7] = 0x100000000;
      *(undefined1 *)(plVar47 + 8) = 1;
      plVar47[0xe] = (longlong)
                     LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateDummy::vftable;
      plVar47[0xf] = 0;
      plVar47[0x10] = -0x17ffffffffffffe0;
      plVar47[0x12] = 0;
      plVar47[0x13] = 0x100000000;
      *(undefined2 *)(plVar47 + 0x14) = 0;
      LOCK();
      bVar68 = (char)plVar47[8] == '\x01';
      if (bVar68) {
        *(char *)(plVar47 + 8) = '\0';
      }
      UNLOCK();
      if (!bVar68) {
        FUN_14008cdb0(plVar47 + 8);
      }
      *plVar47 = (longlong)&PTR_FUN_14a38b888;
      if (*(code **)(plVar47[0xe] + 0x18) != FUN_144713626) {
        (**(code **)(plVar47[0xe] + 0x18))(plVar47 + 0xe,plVar47 + 9);
      }
      plVar47[0xe] = (longlong)
                     LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                     ::vftable;
      plVar47[9] = (longlong)plVar47;
      plVar47[10] = (longlong)plVar47;
      if (*local_2a0 == 0) {
        lVar27 = 0;
      }
      else {
        lVar27 = *(longlong *)(*local_2a0 + 0x30);
      }
      plVar47[0xf] = lVar27;
      plVar47[0x10] = -0x37ffffad77750000;
      *(uint *)((longlong)plVar47 + 0x1c) = bVar42 ^ 1;
      pLVar31 = &local_118;
      pLVar29 = (LARGE_INTEGER *)(plVar47 + 0x15);
      for (lVar27 = 9; lVar27 != 0; lVar27 = lVar27 + -1) {
        *pLVar29 = *pLVar31;
        pLVar31 = pLVar31 + 1;
        pLVar29 = pLVar29 + 1;
      }
      *plVar47 = (longlong)&PTR_FUN_14a38b878;
      LOCK();
      UNLOCK();
      LOCK();
      UNLOCK();
      local_158.s.LowPart._0_1_ = 1;
      FUN_1447439e4(plVar47);
      if (plVar47 != (longlong *)0x0) {
        DVar59 = local_310[0xa1].s.LowPart;
        local_310[0xa1].s.LowPart = DVar59 + 1;
        if (*(uint *)((longlong)local_310 + 0x50c) < DVar59 + 1) {
          FUN_1401d03aa(local_2d8,DVar59);
        }
        *(longlong **)(local_2d8->QuadPart + (longlong)(int)DVar59 * 8) = plVar47;
        LOCK();
        *(int *)(plVar47 + 1) = (int)plVar47[1] + 1;
        UNLOCK();
        FUN_14473400f(0,0);
        LOCK();
        plVar36 = plVar47 + 1;
        *(int *)plVar36 = (int)*plVar36 + -1;
        UNLOCK();
        if ((int)*plVar36 == 0) {
          (**(code **)*plVar47)(plVar47,1);
        }
        goto LAB_14077c94f;
      }
    }
    FUN_14473400f(0,0);
  }
LAB_14077c94f:
  plVar36 = local_298;
  if ((char)local_280 == '\0') {
    if (DAT_14c87e718 == '\0') {
      iVar51 = *(int *)((longlong)local_298 + 0x1c);
      if ((2 < iVar51) &&
         (bVar42 = (**(code **)(*DAT_14c82b500 + 0x10))(DAT_14c82b500,0), bVar42 < 3)) {
        local_118.s.LowPart = 1;
        local_118.s.HighPart = 0x201;
        uStack_110 = 0x101;
        uStack_10c = 0x301;
        local_108.QuadPart = CONCAT44(DAT_14c7585c8,DAT_14c7585c8) | 0x20000000000;
        pLStack_100 = (LARGE_INTEGER *)(CONCAT44(DAT_14c7585c8,DAT_14c7585c8) | 0x30000000100);
        local_f8 = 0x20000000000;
        uStack_f0 = 0x30000000100;
        if (*(byte *)((longlong)&local_118 + (ulonglong)(iVar51 - 3) * 4) == bVar42)
        goto LAB_140781ee5;
      }
      QueryPerformanceCounter(&local_118);
      uStack_110 = 0xffffffff;
      uStack_10c = 0xffffffff;
      FUN_140056092(plVar36,&local_118);
    }
    else {
LAB_140781ee5:
      FUN_140082318(plVar36);
    }
  }
  DVar59 = local_2ec - 1;
  uVar54 = local_310[0x3c].s.LowPart;
  uVar60 = 0;
  do {
    uVar23 = uVar60;
    pLVar31 = local_310;
    local_2ec = DVar59;
    if (uVar54 == uVar23) goto LAB_14077c9e7;
    uVar60 = uVar23 + 1;
  } while (SBORROW4(0,*(int *)(local_310[0x3d].QuadPart + (longlong)(int)uVar23 * 4)));
  if (uVar54 + 1 != uVar23 + 1) {
    uVar60 = uVar54;
    do {
      uVar63 = uStack_1d0;
      uVar50 = uStack_1e0;
      lVar27 = *(longlong *)(pLVar31[0x3b].QuadPart + 8 + (longlong)(int)uVar23 * 0x10);
      if (*(int *)(lVar27 + 0x3c) == 0) {
        *(undefined4 *)(lVar27 + 0x34) = 0;
        uVar60 = *(uint *)(lVar27 + 0x9c);
        if ((*(byte *)(lVar27 + 0x24) & 8) == 0) {
          iVar51 = (uint)uStack_1d0;
          uVar24 = (uint)uStack_1d0 + 1;
          uStack_1d0 = CONCAT44(uStack_1d0._4_4_,uVar24);
          if (uStack_1d0._4_4_ < uVar24) {
            FUN_144adb26e(&local_1d8,uVar63 & 0xffffffff);
            pLVar31 = local_310;
            DVar59 = local_2ec;
          }
          p_Var37 = &local_1d8;
        }
        else {
          iVar51 = (int)uStack_1e0;
          uVar24 = (int)uStack_1e0 + 1;
          uStack_1e0 = CONCAT44(uStack_1e0._4_4_,uVar24);
          p_Var37 = &local_1e8;
          if (uStack_1e0._4_4_ < uVar24) {
            FUN_144adb26e(&local_1e8,uVar50 & 0xffffffff);
            pLVar31 = local_310;
            DVar59 = local_2ec;
          }
        }
        *(uint *)((longlong)*p_Var37 + (longlong)iVar51 * 4) = uVar60 & 0x3fffffff | 0x80000000;
        *(undefined4 *)(lVar27 + 0x3c) = 0xffffffff;
        uVar60 = pLVar31[0x3c].s.LowPart;
      }
      uVar24 = uVar23 + 1;
      if (uVar23 + 1 < uVar60) {
        uVar24 = uVar60;
      }
      uVar25 = uVar23;
      do {
        uVar23 = uVar24;
        if (uVar24 - 1 == uVar25) break;
        uVar23 = uVar25 + 1;
        uVar25 = uVar23;
      } while (SBORROW4(0,*(int *)(pLVar31[0x3d].QuadPart + (longlong)(int)uVar23 * 4)));
    } while (uVar23 != uVar54);
  }
LAB_14077c9e7:
  uVar54 = pLVar31[0x4b].s.LowPart;
  uVar60 = 0;
  do {
    uVar23 = uVar60;
    if (uVar54 == uVar23) goto LAB_14077ca16;
    uVar60 = uVar23 + 1;
  } while (SBORROW4(0,*(int *)(pLVar31[0x4c].QuadPart + (longlong)(int)uVar23 * 4)));
  if (uVar54 + 1 != uVar23 + 1) {
    uVar60 = uVar54;
    do {
      uVar63 = uStack_1c0;
      uVar50 = uStack_1e0;
      lVar27 = *(longlong *)(pLVar31[0x4a].QuadPart + 8 + (longlong)(int)uVar23 * 0x10);
      if (*(int *)(lVar27 + 0x3c) == 0) {
        *(undefined4 *)(lVar27 + 0x34) = 0;
        uVar60 = *(uint *)(lVar27 + 0x7c);
        if ((*(byte *)(lVar27 + 0x24) & 8) == 0) {
          iVar51 = (uint)uStack_1c0;
          uVar24 = (uint)uStack_1c0 + 1;
          uStack_1c0 = CONCAT44(uStack_1c0._4_4_,uVar24);
          if (uStack_1c0._4_4_ < uVar24) {
            FUN_144adb26e(&local_1c8,uVar63 & 0xffffffff);
            pLVar31 = local_310;
            DVar59 = local_2ec;
          }
          p_Var37 = &local_1c8;
        }
        else {
          iVar51 = (int)uStack_1e0;
          uVar24 = (int)uStack_1e0 + 1;
          uStack_1e0 = CONCAT44(uStack_1e0._4_4_,uVar24);
          p_Var37 = &local_1e8;
          if (uStack_1e0._4_4_ < uVar24) {
            FUN_144adb26e(&local_1e8,uVar50 & 0xffffffff);
            pLVar31 = local_310;
            DVar59 = local_2ec;
          }
        }
        *(uint *)((longlong)*p_Var37 + (longlong)iVar51 * 4) = uVar60 | 0xc0000000;
        *(undefined4 *)(lVar27 + 0x3c) = 0xffffffff;
        uVar60 = pLVar31[0x4b].s.LowPart;
      }
      uVar24 = uVar23 + 1;
      if (uVar23 + 1 < uVar60) {
        uVar24 = uVar60;
      }
      do {
        uVar25 = uVar24;
        if (uVar24 - 1 == uVar23) break;
        uVar23 = uVar23 + 1;
        uVar25 = uVar23;
      } while (SBORROW4(0,*(int *)(pLVar31[0x4c].QuadPart + (longlong)(int)uVar23 * 4)));
      uVar23 = uVar25;
    } while (uVar23 != uVar54);
  }
LAB_14077ca16:
  plVar36 = (longlong *)0x0;
  do {
    pLVar29 = *(LARGE_INTEGER **)(local_2b0->QuadPart + (longlong)(int)plVar36 * 8);
    if ((*(byte *)(pLVar29 + 7) & 0x20) == 0) {
      pLVar58 = pLVar29 + 0x18;
      if ((LARGE_INTEGER *)pLVar29[0x19].QuadPart != (LARGE_INTEGER *)0x0) {
        pLVar58 = (LARGE_INTEGER *)pLVar29[0x19].QuadPart;
      }
      local_308 = pLVar29;
      if ((longlong)(int)pLVar29[0x1a].s.LowPart != 0) {
        local_2e8 = pLVar58 + (int)pLVar29[0x1a].s.LowPart;
        do {
          pLVar29 = local_308;
          lVar27 = pLVar58->QuadPart;
          iVar51 = *(int *)(lVar27 + 0x78);
          if ((longlong)iVar51 != 0) {
            lVar67 = *(longlong *)(lVar27 + 0x70);
            lVar62 = 0;
            do {
              lVar57 = *(longlong *)(lVar67 + lVar62);
              if (*(int *)(lVar57 + 0x30) == -1) {
                *(undefined4 *)(lVar57 + 0x30) = *(undefined4 *)((longlong)pLVar29 + 0x2c);
              }
              if ((*(byte *)(lVar57 + 0x25) & 1) != 0) {
                *(byte *)(lVar57 + 0x25) = *(byte *)(lVar57 + 0x25) & 0xfe;
                uVar54 = *(uint *)(lVar57 + 0x9c);
                if ((*(byte *)(lVar57 + 0x24) & 8) == 0) {
                  iVar49 = (uint)uStack_1d0;
                  uVar60 = (uint)uStack_1d0 + 1;
                  uStack_1d0 = CONCAT44(uStack_1d0._4_4_,uVar60);
                  if (uStack_1d0._4_4_ < uVar60) {
                    local_2f8 = pLVar58;
                    FUN_144adb26e(&local_1d8);
                    pLVar31 = local_310;
                    pLVar58 = local_2f8;
                  }
                  p_Var37 = &local_1d8;
                }
                else {
                  iVar49 = (int)uStack_1e0;
                  uVar60 = (int)uStack_1e0 + 1;
                  uStack_1e0 = CONCAT44(uStack_1e0._4_4_,uVar60);
                  if (uStack_1e0._4_4_ < uVar60) {
                    local_2f8 = pLVar58;
                    FUN_144adb26e(&local_1e8);
                    pLVar31 = local_310;
                    pLVar58 = local_2f8;
                  }
                  p_Var37 = &local_1e8;
                }
                *(uint *)((longlong)*p_Var37 + (longlong)iVar49 * 4) = uVar54 & 0x3fffffff;
              }
              lVar62 = lVar62 + 0x30;
            } while ((longlong)iVar51 * 0x30 != lVar62);
          }
          iVar51 = *(int *)(lVar27 + 0x88);
          if ((longlong)iVar51 != 0) {
            lVar67 = *(longlong *)(lVar27 + 0x80);
            lVar62 = 0;
            do {
              lVar57 = *(longlong *)(lVar67 + lVar62);
              if (*(int *)(lVar57 + 0x30) == -1) {
                *(undefined4 *)(lVar57 + 0x30) = *(undefined4 *)((longlong)pLVar29 + 0x2c);
              }
              if ((*(byte *)(lVar57 + 0x25) & 1) != 0) {
                *(byte *)(lVar57 + 0x25) = *(byte *)(lVar57 + 0x25) & 0xfe;
                uVar54 = *(uint *)(lVar57 + 0x7c);
                if ((*(byte *)(lVar57 + 0x24) & 8) == 0) {
                  pLVar46 = (LARGE_INTEGER *)(uStack_1c0 & 0xffffffff);
                  uVar60 = (uint)uStack_1c0 + 1;
                  uStack_1c0 = CONCAT44(uStack_1c0._4_4_,uVar60);
                  if (uStack_1c0._4_4_ < uVar60) {
                    local_2f8 = pLVar46;
                    FUN_144adb26e(&local_1c8);
                    pLVar46 = local_2f8;
                    pLVar31 = local_310;
                  }
                  iVar49 = (int)pLVar46;
                  p_Var37 = &local_1c8;
                }
                else {
                  iVar49 = (int)uStack_1e0;
                  uVar60 = (int)uStack_1e0 + 1;
                  uStack_1e0 = CONCAT44(uStack_1e0._4_4_,uVar60);
                  if (uStack_1e0._4_4_ < uVar60) {
                    local_2f8 = pLVar58;
                    FUN_144adb26e(&local_1e8);
                    pLVar31 = local_310;
                    pLVar58 = local_2f8;
                  }
                  p_Var37 = &local_1e8;
                }
                *(uint *)((longlong)*p_Var37 + (longlong)iVar49 * 4) =
                     uVar54 & 0x3fffffff | 0x40000000;
              }
              lVar62 = lVar62 + 0x38;
            } while ((longlong)iVar51 * 0x38 - lVar62 != 0);
          }
          iVar51 = *(int *)(lVar27 + 0xa8);
          if ((longlong)iVar51 != 0) {
            uVar50 = *(ulonglong *)(lVar27 + 0xa0);
            lVar67 = 0;
            do {
              uVar54 = *(uint *)(uVar50 + lVar67);
              puVar45 = local_188;
              if (local_188 == (undefined1 *)0x0) {
                puVar45 = local_198;
              }
              uVar60 = uVar54 + 0x1f;
              if (-1 < (int)uVar54) {
                uVar60 = uVar54;
              }
              if ((*(uint *)(puVar45 + (longlong)((int)uVar60 >> 5) * 4) >> (uVar54 & 0x1f) & 1) !=
                  0) {
                plVar47 = (longlong *)(longlong)(int)uStack_1b0;
                uVar23 = (int)uStack_1b0 + 1;
                uStack_1b0 = CONCAT44(uStack_1b0._4_4_,uVar23);
                if (uStack_1b0._4_4_ < uVar23) {
                  local_2f8 = pLVar58;
                  local_2e0 = plVar47;
                  local_2c8 = uVar50;
                  FUN_14742e5c8(&local_1b8,plVar47);
                  plVar47 = local_2e0;
                  pLVar31 = local_310;
                  pLVar58 = local_2f8;
                  uVar50 = local_2c8;
                }
                *(uint *)(local_1b8 + (longlong)plVar47 * 4) = uVar54;
                *(uint *)(puVar45 + (longlong)((int)uVar60 >> 5) * 4) =
                     *(uint *)(puVar45 + (longlong)((int)uVar60 >> 5) * 4) &
                     ~(1 << ((byte)uVar54 & 0x1f));
              }
              lVar67 = lVar67 + 4;
            } while ((longlong)iVar51 * 4 != lVar67);
          }
          iVar51 = *(int *)(lVar27 + 0x98);
          if ((longlong)iVar51 != 0) {
            lVar27 = *(longlong *)(lVar27 + 0x90);
            lVar67 = 0;
            do {
              uVar50 = uStack_1a0;
              uVar54 = *(uint *)(lVar27 + lVar67);
              puVar45 = local_168;
              if (local_168 == (undefined1 *)0x0) {
                puVar45 = local_178;
              }
              uVar60 = uVar54 + 0x1f;
              if (-1 < (int)uVar54) {
                uVar60 = uVar54;
              }
              if ((*(uint *)(puVar45 + (longlong)((int)uVar60 >> 5) * 4) >> (uVar54 & 0x1f) & 1) !=
                  0) {
                lVar62 = (longlong)(int)uStack_1a0;
                uVar23 = (int)uStack_1a0 + 1;
                uStack_1a0 = CONCAT44(uStack_1a0._4_4_,uVar23);
                if (uStack_1a0._4_4_ < uVar23) {
                  local_2f8 = pLVar58;
                  local_2e0 = plVar36;
                  FUN_144adaeec(&local_1a8,uVar50 & 0xffffffff);
                  plVar36 = local_2e0;
                  pLVar31 = local_310;
                  pLVar58 = local_2f8;
                }
                *(uint *)(local_1a8 + lVar62 * 4) = uVar54;
                *(uint *)(puVar45 + (longlong)((int)uVar60 >> 5) * 4) =
                     *(uint *)(puVar45 + (longlong)((int)uVar60 >> 5) * 4) &
                     ~(1 << ((byte)uVar54 & 0x1f));
              }
              lVar67 = lVar67 + 4;
            } while ((longlong)iVar51 * 4 != lVar67);
          }
          pLVar58 = pLVar58 + 1;
        } while (pLVar58 != local_2e8);
      }
      pLVar29 = local_308 + 0x1b;
      if ((LARGE_INTEGER *)local_308[0x1c].QuadPart != (LARGE_INTEGER *)0x0) {
        pLVar29 = (LARGE_INTEGER *)local_308[0x1c].QuadPart;
      }
      DVar59 = local_2ec;
      if ((longlong)(int)local_308[0x1d].s.LowPart != 0) {
        pLVar58 = pLVar29 + (int)local_308[0x1d].s.LowPart;
        pLVar46 = local_308;
        do {
          lVar27 = pLVar29->QuadPart;
          iVar51 = *(int *)(lVar27 + 0x78);
          if ((longlong)iVar51 != 0) {
            lVar67 = *(longlong *)(lVar27 + 0x70);
            lVar62 = 0;
            do {
              uVar63 = uStack_1d0;
              uVar50 = uStack_1e0;
              lVar57 = *(longlong *)(lVar67 + lVar62);
              uVar66 = *(undefined4 *)((longlong)pLVar46 + 0x2c);
              cVar19 = *(char *)((longlong)pLVar46 + 0x2b);
              piVar1 = (int *)(lVar57 + 0x3c);
              *piVar1 = *piVar1 - *(int *)(lVar67 + 0x28 + lVar62);
              iVar49 = *piVar1;
              *(undefined4 *)(lVar57 + 0x34 + (ulonglong)(cVar19 == '\x02') * 4) = uVar66;
              if (iVar49 == 0) {
                uVar54 = *(uint *)(lVar57 + 0x9c);
                uVar60 = uVar54 & 0x3fffffff;
                if ((*(byte *)(lVar57 + 0x24) & 8) == 0) {
                  iVar49 = (uint)uStack_1d0;
                  uVar23 = (uint)uStack_1d0 + 1;
                  uStack_1d0 = CONCAT44(uStack_1d0._4_4_,uVar23);
                  if (uStack_1d0._4_4_ < uVar23) {
                    local_2f8 = (LARGE_INTEGER *)
                                (CONCAT44(local_2f8._4_4_,uVar54) & 0xffffffff3fffffff);
                    local_2e8 = pLVar58;
                    FUN_144adb26e(&local_1d8,uVar63 & 0xffffffff);
                    p_Var37 = &local_1d8;
                    pLVar31 = local_310;
                    pLVar46 = local_308;
                    pLVar58 = local_2e8;
                    uVar60 = (uint)local_2f8;
                  }
                  else {
                    p_Var37 = &local_1d8;
                  }
                }
                else {
                  iVar49 = (int)uStack_1e0;
                  uVar23 = (int)uStack_1e0 + 1;
                  uStack_1e0 = CONCAT44(uStack_1e0._4_4_,uVar23);
                  if (uStack_1e0._4_4_ < uVar23) {
                    local_2f8 = (LARGE_INTEGER *)
                                (CONCAT44(local_2f8._4_4_,uVar54) & 0xffffffff3fffffff);
                    local_2e8 = pLVar58;
                    FUN_144adb26e(&local_1e8,uVar50 & 0xffffffff);
                    p_Var37 = &local_1e8;
                    pLVar31 = local_310;
                    pLVar46 = local_308;
                    pLVar58 = local_2e8;
                    uVar60 = (uint)local_2f8;
                  }
                  else {
                    p_Var37 = &local_1e8;
                  }
                }
                *(uint *)((longlong)*p_Var37 + (longlong)iVar49 * 4) = uVar60 | 0x80000000;
                *(undefined4 *)(lVar57 + 0x3c) = 0xffffffff;
                DVar59 = local_2ec;
              }
              lVar62 = lVar62 + 0x30;
            } while ((longlong)iVar51 * 0x30 != lVar62);
          }
          iVar51 = *(int *)(lVar27 + 0x88);
          if ((longlong)iVar51 != 0) {
            lVar27 = *(longlong *)(lVar27 + 0x80);
            lVar67 = 0;
            do {
              uVar63 = uStack_1c0;
              uVar50 = uStack_1e0;
              lVar62 = *(longlong *)(lVar27 + lVar67);
              uVar66 = *(undefined4 *)((longlong)pLVar46 + 0x2c);
              cVar19 = *(char *)((longlong)pLVar46 + 0x2b);
              piVar1 = (int *)(lVar62 + 0x3c);
              *piVar1 = *piVar1 - *(int *)(lVar27 + 0x30 + lVar67);
              iVar49 = *piVar1;
              *(undefined4 *)(lVar62 + 0x34 + (ulonglong)(cVar19 == '\x02') * 4) = uVar66;
              if (iVar49 == 0) {
                uVar54 = *(uint *)(lVar62 + 0x7c);
                local_2e8 = pLVar58;
                if ((*(byte *)(lVar62 + 0x24) & 8) == 0) {
                  iVar49 = (uint)uStack_1c0;
                  uVar60 = (uint)uStack_1c0 + 1;
                  uStack_1c0 = CONCAT44(uStack_1c0._4_4_,uVar60);
                  if (uStack_1c0._4_4_ < uVar60) {
                    FUN_144adb26e(&local_1c8,uVar63 & 0xffffffff);
                    pLVar31 = local_310;
                    pLVar46 = local_308;
                    DVar59 = local_2ec;
                  }
                  p_Var37 = &local_1c8;
                }
                else {
                  iVar49 = (int)uStack_1e0;
                  uVar60 = (int)uStack_1e0 + 1;
                  uStack_1e0 = CONCAT44(uStack_1e0._4_4_,uVar60);
                  if (uStack_1e0._4_4_ < uVar60) {
                    FUN_144adb26e(&local_1e8,uVar50 & 0xffffffff);
                    pLVar31 = local_310;
                    pLVar46 = local_308;
                    DVar59 = local_2ec;
                  }
                  p_Var37 = &local_1e8;
                }
                *(uint *)((longlong)*p_Var37 + (longlong)iVar49 * 4) = uVar54 | 0xc0000000;
                *(undefined4 *)(lVar62 + 0x3c) = 0xffffffff;
                pLVar58 = local_2e8;
              }
              lVar67 = lVar67 + 0x38;
            } while ((longlong)iVar51 * 0x38 - lVar67 != 0);
          }
          pLVar29 = pLVar29 + 1;
        } while (pLVar29 != pLVar58);
      }
    }
    plVar47 = local_278;
    uVar54 = (int)plVar36 + 1;
    plVar36 = (longlong *)(ulonglong)uVar54;
  } while (uVar54 <= DVar59);
  if ((char)local_2bc == '\0') {
    if (DAT_14c87e718 == '\0') {
      iVar51 = *(int *)((longlong)local_278 + 0x1c);
      if ((2 < iVar51) &&
         (bVar42 = (**(code **)(*DAT_14c82b500 + 0x10))(DAT_14c82b500,0), bVar42 < 3)) {
        local_118.s.LowPart = 1;
        local_118.s.HighPart = 0x201;
        uStack_110 = 0x101;
        uStack_10c = 0x301;
        local_108.QuadPart = CONCAT44(DAT_14c7585c8,DAT_14c7585c8) | 0x20000000000;
        pLStack_100 = (LARGE_INTEGER *)(CONCAT44(DAT_14c7585c8,DAT_14c7585c8) | 0x30000000100);
        local_f8 = 0x20000000000;
        uStack_f0 = 0x30000000100;
        if (*(byte *)((longlong)&local_118 + (ulonglong)(iVar51 - 3) * 4) == bVar42)
        goto LAB_140781f84;
      }
      QueryPerformanceCounter(&local_118);
      uStack_110 = 0xffffffff;
      uStack_10c = 0xffffffff;
      FUN_140056092(plVar47,&local_118);
      pLVar31 = local_310;
    }
    else {
LAB_140781f84:
      FUN_140082318(plVar47);
      pLVar31 = local_310;
    }
  }
  _Var10 = local_1c8;
  LVar30 = local_270;
  local_1c8.LowPart = 0;
  local_1c8.HighPart = 0;
  uVar54 = (uint)uStack_1c0;
  uVar60 = uStack_1c0._4_4_;
  plVar36 = (longlong *)(ulonglong)uStack_1c0._4_4_;
  uStack_1c0 = 0;
  if ((int)local_2a8 < 0x21) {
    if ((longlong *)local_270.QuadPart != (longlong *)0x0) {
      if (DAT_14c87e718 == '\0') {
        iVar51 = *(int *)(local_270.QuadPart + 0x1c);
        if ((2 < iVar51) &&
           (bVar42 = (**(code **)(*DAT_14c82b500 + 0x10))(DAT_14c82b500,0), bVar42 < 3)) {
          local_118.s.LowPart = 1;
          local_118.s.HighPart = 0x201;
          uStack_110 = 0x101;
          uStack_10c = 0x301;
          local_108.QuadPart = CONCAT44(DAT_14c7585c8,DAT_14c7585c8) | 0x20000000000;
          pLStack_100 = (LARGE_INTEGER *)(CONCAT44(DAT_14c7585c8,DAT_14c7585c8) | 0x30000000100);
          local_f8 = 0x20000000000;
          uStack_f0 = 0x30000000100;
          if (*(byte *)((longlong)&local_118 + (ulonglong)(iVar51 - 3) * 4) == bVar42)
          goto LAB_1407822a6;
        }
        QueryPerformanceCounter(&local_158);
        uStack_150 = (LARGE_INTEGER *)0xffffffffffffffff;
        FUN_140056092(LVar30.QuadPart,&local_158);
        pLVar31 = local_310;
      }
      else {
LAB_1407822a6:
        FUN_140082318(LVar30.QuadPart);
        pLVar31 = local_310;
      }
    }
    LVar56 = pLVar31[3].QuadPart;
LAB_14077d1f7:
    piVar1 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    iVar51 = *piVar1;
    if (iVar51 == 1) {
      FUN_140ad26c0();
      GetCurrentThreadId();
      iVar51 = *piVar1;
      pLVar31 = local_310;
    }
    if ((iVar51 == 0x60000000) || (iVar51 == 0)) {
      *piVar1 = 0x40000010;
    }
    local_118.s.LowPart = _Var10.LowPart;
    local_118.s.HighPart = _Var10.HighPart;
    uStack_110 = uVar54;
    uVar28 = FUN_14320d3aa(pLVar31,LVar56);
    local_308 = (LARGE_INTEGER *)
                CONCAT44(local_308._4_4_,(int)CONCAT71((int7)((ulonglong)uVar28 >> 8),1));
    if ((iVar51 == 0x60000000) || (iVar51 == 0)) {
      *piVar1 = iVar51;
    }
LAB_14077d25c:
    plVar47 = (longlong *)0x0;
  }
  else {
    if ((longlong *)local_270.QuadPart != (longlong *)0x0 && *(byte *)local_290 == 0) {
      LVar56 = pLVar31[3].QuadPart;
      if ((*(byte *)(local_270.QuadPart + 0xa0) & 1) == 0) goto LAB_14077dfe1;
      goto LAB_14077d1f7;
    }
    LVar56 = pLVar31[3].QuadPart;
    if (*(byte *)local_290 == 0) goto LAB_14077d1f7;
LAB_14077dfe1:
    lVar27 = FUN_14001cc68(0x308,0x10);
    FUN_14009016e(lVar27,*(undefined4 *)(LVar56 + 0x17c),0);
    local_118.s.LowPart = 0;
    local_118.s.HighPart = 0;
    uStack_110 = 0;
    uStack_10c = 0;
    FUN_144775d28(&local_118,1);
    uVar23 = uStack_110;
    lVar67 = (longlong)(int)uStack_110;
    uStack_110 = uStack_110 + 1;
    if (uStack_10c < uStack_110) {
      FUN_14741464c(&local_118,uVar23);
    }
    *(longlong *)(CONCAT44(local_118.s.HighPart,local_118.s.LowPart) + lVar67 * 8) = lVar27;
    local_158.s.HighPart = local_118.s.HighPart;
    local_158.s.LowPart = local_118.s.LowPart;
    uStack_150 = (LARGE_INTEGER *)CONCAT44(uStack_150._4_4_,uStack_110);
    FUN_14007658c(&DAT_14ca850c8,&local_158,0);
    if (CONCAT44(local_118.s.HighPart,local_118.s.LowPart) != 0) {
      FUN_1400020a8();
    }
    puVar32 = TlsGetValue(DAT_14c896140);
    LVar30 = local_270;
    if (puVar32 == (undefined8 *)0x0) {
      puVar32 = (undefined8 *)FUN_14001cc68(0x18,0x10);
      *puVar32 = 0;
      puVar32[1] = 0;
      *(undefined4 *)(puVar32 + 2) = 0;
      TlsSetValue(DAT_14c896140,puVar32);
    }
    plVar47 = (longlong *)puVar32[1];
    if (plVar47 == (longlong *)0x0) {
      plVar47 = (longlong *)*puVar32;
      if (plVar47 == (longlong *)0x0) {
        local_118.s.LowPart = DAT_14c896180.s.LowPart;
        local_118.s.HighPart = DAT_14c896180.s.HighPart;
        LVar30 = DAT_14c896180;
        uVar66 = local_118.s.LowPart;
        while (DAT_14c896180 = LVar30, local_118.s.LowPart = uVar66,
              (LVar30.QuadPart & 0x3ffffffU) != 0) {
          local_158.QuadPart =
               (CONCAT44(local_118.s.HighPart,uVar66) & 0xfffffffffc000000) + 0x4000000;
          if ((ulonglong)local_158.QuadPart >> 0x1a < CONCAT44(local_118.s.HighPart,uVar66) >> 0x1a)
          {
            FUN_14000f986(0x3a83126f);
          }
          uVar50 = (ulonglong)((uVar66 & 0x3ffffff) >> 0xe);
          uVar63 = (ulonglong)(LVar30.s.LowPart & 0x3fff);
          local_158.QuadPart =
               local_158.QuadPart & 0xfffffffffc000000U |
               (ulonglong)
               *(uint *)(*(longlong *)(&DAT_14c833b00 + uVar50 * 8) + 0x10 + uVar63 * 0x18);
          LOCK();
          bVar68 = (LARGE_INTEGER *)CONCAT44(local_118.s.HighPart,local_118.s.LowPart) ==
                   (LARGE_INTEGER *)DAT_14c896180.QuadPart;
          LVar30.QuadPart = local_158.QuadPart;
          if (!bVar68) {
            LVar30 = DAT_14c896180;
          }
          DAT_14c896180 = LVar30;
          UNLOCK();
          if (bVar68) {
            *(undefined4 *)(*(longlong *)(&DAT_14c833b00 + uVar50 * 8) + uVar63 * 0x18 + 0x10) = 0;
            plVar47 = *(longlong **)
                       (*(longlong *)(&DAT_14c833b00 + uVar50 * 8) + 8 +
                       (ulonglong)(uVar66 & 0x3fff) * 0x18);
            FUN_1447d080c(uVar66 & 0x3ffffff);
            puVar32[1] = plVar47;
            LVar30 = local_270;
            if (plVar47 == (longlong *)0x0) goto LAB_140780d58;
            goto LAB_140780d98;
          }
          local_118.s.LowPart = DAT_14c896180.s.LowPart;
          local_118.s.HighPart = DAT_14c896180.s.HighPart;
          LVar30 = DAT_14c896180;
          uVar66 = local_118.s.LowPart;
        }
        puVar32[1] = 0;
LAB_140780d58:
        LVar30 = local_270;
        puVar40 = (undefined8 *)FUN_14001cc68(0x10000,0);
        puVar32[1] = puVar40;
        iVar51 = 0xff;
        do {
          puVar33 = puVar40 + 0x20;
          *puVar40 = puVar33;
          iVar51 = iVar51 + -1;
          puVar40 = puVar33;
        } while (iVar51 != 0);
        *puVar33 = 0;
        plVar47 = (longlong *)puVar32[1];
      }
      else {
        puVar32[1] = plVar47;
        *puVar32 = 0;
      }
LAB_140780d98:
      *(undefined4 *)(puVar32 + 2) = 0x100;
      iVar51 = 0x100;
    }
    else {
      iVar51 = *(int *)(puVar32 + 2);
    }
    puVar32[1] = *plVar47;
    *(int *)(puVar32 + 2) = iVar51 + -1;
    *plVar47 = (longlong)UE::Tasks::Private::FTaskBase::vftable;
    plVar47[1] = (longlong)&DAT_100000002;
    plVar47[2] = 0;
    *(undefined4 *)(plVar47 + 3) = 0;
    *(undefined4 *)(plVar47 + 4) = 0xffffffff;
    plVar47[6] = 0;
    plVar47[7] = 0x100000000;
    *(undefined1 *)(plVar47 + 8) = 1;
    plVar47[0xe] = (longlong)
                   LowLevelTasks::
                   TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                   TTaskDelegateDummy::vftable;
    plVar47[0xf] = 0;
    plVar47[0x10] = -0x17ffffffffffffe0;
    plVar47[0x12] = 0;
    plVar47[0x13] = 0x100000000;
    *(undefined2 *)(plVar47 + 0x14) = 0;
    LOCK();
    bVar68 = (char)plVar47[8] == '\x01';
    if (bVar68) {
      *(char *)(plVar47 + 8) = '\0';
    }
    UNLOCK();
    if (!bVar68) {
      FUN_14008cdb0(plVar47 + 8);
    }
    *plVar47 = (longlong)&PTR_FUN_14a38b8a8;
    if (*(code **)(plVar47[0xe] + 0x18) != FUN_144713626) {
      (**(code **)(plVar47[0xe] + 0x18))(plVar47 + 0xe,plVar47 + 9);
    }
    plVar47[0xe] = (longlong)
                   LowLevelTasks::
                   TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                   TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                   ::vftable;
    plVar47[9] = (longlong)plVar47;
    plVar47[10] = (longlong)plVar47;
    if (*local_2a0 == 0) {
      lVar67 = 0;
    }
    else {
      lVar67 = *(longlong *)(*local_2a0 + 0x30);
    }
    plVar47[0xf] = lVar67;
    plVar47[0x10] = -0x3fffffad77cd8400;
    *(undefined4 *)((longlong)plVar47 + 0x1c) = 0;
    plVar47[0x15] = (longlong)local_310;
    plVar47[0x16] = (longlong)local_310;
    *(_struct_19 *)(plVar47 + 0x17) = _Var10;
    *(uint *)(plVar47 + 0x18) = uVar54;
    *(uint *)((longlong)plVar47 + 0xc4) = uVar60;
    plVar47[0x19] = lVar27;
    *(undefined1 *)(plVar47 + 0x1a) = 1;
    *plVar47 = (longlong)&PTR_FUN_14a38b898;
    if ((longlong *)LVar30.QuadPart != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar47 + 0xc) = *(int *)((longlong)plVar47 + 0xc) + 1;
      UNLOCK();
      cVar19 = FUN_1456bb142((longlong *)(LVar30.QuadPart + 0x88),plVar47);
      if (cVar19 == '\0') {
        LOCK();
        *(int *)((longlong)plVar47 + 0xc) = *(int *)((longlong)plVar47 + 0xc) + -1;
        UNLOCK();
      }
      else {
        LOCK();
        *(int *)(LVar30.QuadPart + 8) = *(int *)(LVar30.QuadPart + 8) + 1;
        UNLOCK();
        FUN_1456bb1d4(plVar47 + 5,LVar30.QuadPart);
      }
    }
    local_118.s.LowPart._0_1_ = 1;
    uVar28 = FUN_1447439e4(plVar47);
    if (plVar47 == (longlong *)0x0) {
      local_308 = (LARGE_INTEGER *)
                  CONCAT44(local_308._4_4_,(int)CONCAT71((int7)((ulonglong)uVar28 >> 8),1));
      goto LAB_14077d25c;
    }
    DVar59 = local_310[0xa1].s.LowPart;
    local_310[0xa1].s.LowPart = DVar59 + 1;
    if (*(uint *)((longlong)local_310 + 0x50c) < DVar59 + 1) {
      FUN_1401d03aa(local_2d8,DVar59);
    }
    *(longlong **)(local_2d8->QuadPart + (longlong)(int)DVar59 * 8) = plVar47;
    LOCK();
    *(int *)(plVar47 + 1) = (int)plVar47[1] + 1;
    UNLOCK();
    local_308 = (LARGE_INTEGER *)((ulonglong)local_308 & 0xffffffff00000000);
  }
  _Var10 = local_1d8;
  local_1d8.LowPart = 0;
  local_1d8.HighPart = 0;
  uVar54 = (uint)uStack_1d0;
  uVar66 = uStack_1d0._4_4_;
  uStack_1d0 = 0;
  local_2e0 = plVar47;
  if (((int)local_2a4 < 0x21) || (*(byte *)local_290 == 0)) {
    LVar56 = local_310[3].QuadPart;
    piVar1 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    iVar51 = *piVar1;
    if (iVar51 == 1) {
      FUN_140ad26c0();
      GetCurrentThreadId();
      iVar51 = *piVar1;
    }
    if ((iVar51 == 0x60000000) || (iVar51 == 0)) {
      *piVar1 = 0x40000010;
    }
    local_118.s.LowPart = _Var10.LowPart;
    local_118.s.HighPart = _Var10.HighPart;
    uStack_110 = uVar54;
    uVar28 = FUN_14320c89e(local_310,LVar56);
    local_2f8 = (LARGE_INTEGER *)
                CONCAT44(local_2f8._4_4_,(int)CONCAT71((int7)((ulonglong)uVar28 >> 8),1));
    if ((iVar51 == 0x60000000) || (iVar51 == 0)) {
      *piVar1 = iVar51;
    }
    local_2e8 = (LARGE_INTEGER *)0x0;
    plVar47 = local_2e0;
    pLVar31 = local_2d0;
  }
  else {
    lVar27 = local_310[3].QuadPart;
    lVar67 = FUN_14001cc68(0x308,0x10);
    FUN_14009016e(lVar67,*(undefined4 *)(lVar27 + 0x17c),0);
    local_118.s.LowPart = 0;
    local_118.s.HighPart = 0;
    uStack_110 = 0;
    uStack_10c = 0;
    FUN_144775d28(&local_118,1);
    uVar60 = uStack_110;
    lVar27 = (longlong)(int)uStack_110;
    uStack_110 = uStack_110 + 1;
    if (uStack_10c < uStack_110) {
      FUN_14741464c(&local_118,uVar60);
    }
    *(longlong *)(CONCAT44(local_118.s.HighPart,local_118.s.LowPart) + lVar27 * 8) = lVar67;
    local_158.s.HighPart = local_118.s.HighPart;
    local_158.s.LowPart = local_118.s.LowPart;
    uStack_150 = (LARGE_INTEGER *)CONCAT44(uStack_150._4_4_,uStack_110);
    FUN_14007658c(&DAT_14ca850c8,&local_158,0);
    if (CONCAT44(local_118.s.HighPart,local_118.s.LowPart) != 0) {
      FUN_1400020a8();
    }
    plVar36 = TlsGetValue(DAT_14c896140);
    if (plVar36 == (longlong *)0x0) {
      plVar36 = (longlong *)FUN_14001cc68(0x18,0x10);
      *plVar36 = 0;
      plVar36[1] = 0;
      *(undefined4 *)(plVar36 + 2) = 0;
      TlsSetValue(DAT_14c896140,plVar36);
    }
    pLVar29 = (LARGE_INTEGER *)plVar36[1];
    if (pLVar29 == (LARGE_INTEGER *)0x0) {
      pLVar29 = (LARGE_INTEGER *)*plVar36;
      if (pLVar29 == (LARGE_INTEGER *)0x0) {
        local_118.s.LowPart = DAT_14c896180.s.LowPart;
        local_118.s.HighPart = DAT_14c896180.s.HighPart;
        LVar30 = DAT_14c896180;
        uVar11 = local_118.s.LowPart;
        while (DAT_14c896180 = LVar30, local_118.s.LowPart = uVar11,
              (LVar30.QuadPart & 0x3ffffffU) != 0) {
          local_158.QuadPart =
               (CONCAT44(local_118.s.HighPart,uVar11) & 0xfffffffffc000000) + 0x4000000;
          if ((ulonglong)local_158.QuadPart >> 0x1a < CONCAT44(local_118.s.HighPart,uVar11) >> 0x1a)
          {
            FUN_14000f986(0x3a83126f);
          }
          uVar50 = (ulonglong)((uVar11 & 0x3ffffff) >> 0xe);
          uVar63 = (ulonglong)(LVar30.s.LowPart & 0x3fff);
          local_158.QuadPart =
               local_158.QuadPart & 0xfffffffffc000000U |
               (ulonglong)
               *(uint *)(*(longlong *)(&DAT_14c833b00 + uVar50 * 8) + 0x10 + uVar63 * 0x18);
          LOCK();
          bVar68 = (LARGE_INTEGER *)CONCAT44(local_118.s.HighPart,local_118.s.LowPart) ==
                   (LARGE_INTEGER *)DAT_14c896180.QuadPart;
          LVar30.QuadPart = local_158.QuadPart;
          if (!bVar68) {
            LVar30 = DAT_14c896180;
          }
          DAT_14c896180 = LVar30;
          UNLOCK();
          if (bVar68) {
            *(undefined4 *)(*(longlong *)(&DAT_14c833b00 + uVar50 * 8) + uVar63 * 0x18 + 0x10) = 0;
            pLVar29 = *(LARGE_INTEGER **)
                       (*(longlong *)(&DAT_14c833b00 + uVar50 * 8) + 8 +
                       (ulonglong)(uVar11 & 0x3fff) * 0x18);
            FUN_1447d080c(uVar11 & 0x3ffffff);
            plVar36[1] = (longlong)pLVar29;
            plVar47 = local_2e0;
            if (pLVar29 == (LARGE_INTEGER *)0x0) goto LAB_140780aad;
            goto LAB_140780aef;
          }
          local_118.s.LowPart = DAT_14c896180.s.LowPart;
          local_118.s.HighPart = DAT_14c896180.s.HighPart;
          LVar30 = DAT_14c896180;
          uVar11 = local_118.s.LowPart;
        }
        plVar36[1] = 0;
LAB_140780aad:
        plVar47 = local_2e0;
        puVar32 = (undefined8 *)FUN_14001cc68(0x10000,0);
        plVar36[1] = (longlong)puVar32;
        iVar51 = 0xff;
        do {
          puVar40 = puVar32 + 0x20;
          *puVar32 = puVar40;
          iVar51 = iVar51 + -1;
          puVar32 = puVar40;
        } while (iVar51 != 0);
        *puVar40 = 0;
        pLVar29 = (LARGE_INTEGER *)plVar36[1];
      }
      else {
        plVar36[1] = (longlong)pLVar29;
        *plVar36 = 0;
      }
LAB_140780aef:
      *(undefined4 *)(plVar36 + 2) = 0x100;
      iVar51 = 0x100;
    }
    else {
      iVar51 = (int)plVar36[2];
    }
    ((LARGE_INTEGER *)(plVar36 + 1))->s = *(_struct_19 *)pLVar29;
    *(int *)(plVar36 + 2) = iVar51 + -1;
    *pLVar29 = (LARGE_INTEGER)UE::Tasks::Private::FTaskBase::vftable;
    pLVar29[1].QuadPart = (LONGLONG)&DAT_100000002;
    pLVar29[2].QuadPart = 0;
    pLVar29[3].s.LowPart = 0;
    pLVar29[4].s.LowPart = 0xffffffff;
    pLVar29[6].QuadPart = 0;
    pLVar29[7].QuadPart = 0x100000000;
    *(undefined1 *)(pLVar29 + 8) = 1;
    pLVar29[0xe] = (LARGE_INTEGER)
                   LowLevelTasks::
                   TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                   TTaskDelegateDummy::vftable;
    pLVar29[0xf].QuadPart = 0;
    pLVar29[0x10].QuadPart = -0x17ffffffffffffe0;
    pLVar29[0x12].QuadPart = 0;
    pLVar29[0x13].QuadPart = 0x100000000;
    *(undefined2 *)(pLVar29 + 0x14) = 0;
    LOCK();
    bVar68 = *(char *)(pLVar29 + 8) == '\x01';
    if (bVar68) {
      *(char *)(pLVar29 + 8) = '\0';
    }
    UNLOCK();
    if (!bVar68) {
      FUN_14008cdb0(pLVar29 + 8);
    }
    *pLVar29 = (LARGE_INTEGER)&PTR_FUN_14a38b8c8;
    if (*(code **)(pLVar29[0xe].QuadPart + 0x18) != FUN_144713626) {
      (**(code **)(pLVar29[0xe].QuadPart + 0x18))(pLVar29 + 0xe,pLVar29 + 9);
    }
    pLVar29[0xe] = (LARGE_INTEGER)
                   LowLevelTasks::
                   TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                   TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                   ::vftable;
    pLVar29[9].QuadPart = (LONGLONG)pLVar29;
    pLVar29[10].QuadPart = (LONGLONG)pLVar29;
    if (*local_2a0 == 0) {
      LVar30.QuadPart = 0;
    }
    else {
      LVar30 = *(LARGE_INTEGER *)(*local_2a0 + 0x30);
    }
    pLVar29[0xf] = LVar30;
    pLVar29[0x10].QuadPart = -0x3fffffad77cd8400;
    *(undefined4 *)((longlong)pLVar29 + 0x1c) = 0;
    pLVar29[0x15].QuadPart = (LONGLONG)local_310;
    pLVar29[0x16].QuadPart = (LONGLONG)local_310;
    pLVar29[0x17].s = _Var10;
    pLVar29[0x18].s.LowPart = uVar54;
    *(undefined4 *)((longlong)pLVar29 + 0xc4) = uVar66;
    pLVar29[0x19].QuadPart = lVar67;
    *(undefined1 *)(pLVar29 + 0x1a) = 1;
    *pLVar29 = (LARGE_INTEGER)&PTR_FUN_14a38b8b8;
    LOCK();
    UNLOCK();
    LOCK();
    UNLOCK();
    local_118.s.LowPart._0_1_ = 1;
    uVar28 = FUN_1447439e4(pLVar29);
    pLVar31 = local_2d0;
    if (pLVar29 == (LARGE_INTEGER *)0x0) {
      local_2f8 = (LARGE_INTEGER *)
                  CONCAT44(local_2f8._4_4_,(int)CONCAT71((int7)((ulonglong)uVar28 >> 8),1));
      local_2e8 = (LARGE_INTEGER *)0x0;
    }
    else {
      DVar59 = local_310[0xa1].s.LowPart;
      local_310[0xa1].s.LowPart = DVar59 + 1;
      local_2e8 = pLVar29;
      if (*(uint *)((longlong)local_310 + 0x50c) < DVar59 + 1) {
        FUN_1401d03aa(local_2d8,DVar59);
      }
      *(LARGE_INTEGER **)(local_2d8->QuadPart + (longlong)(int)DVar59 * 8) = local_2e8;
      LOCK();
      local_2e8[1].s.LowPart = local_2e8[1].s.LowPart + 1;
      UNLOCK();
      local_2f8 = (LARGE_INTEGER *)((ulonglong)local_2f8 & 0xffffffff00000000);
    }
  }
  FUN_14473400f(0,0);
  _Var10 = local_1e8;
  plVar34 = (longlong *)local_310[0x5b].QuadPart;
  if (plVar34 != (longlong *)0x0) {
    iVar51 = (int)uStack_1e0;
    uVar50 = uStack_1e0 & 0xffffffff;
    (**(code **)(*plVar34 + 0x10))(plVar34,*(undefined1 *)(local_310 + 0xa4));
    local_158.QuadPart = 0;
    uStack_150 = (LARGE_INTEGER *)0x0;
    iVar44 = iVar51 / 2;
    if (iVar51 < -1) {
LAB_1407814b3:
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar44);
    }
    if (iVar51 < 2) {
      plVar47 = local_2e0;
      pLVar31 = local_2d0;
      if (uVar50 == 0) goto LAB_14077deff;
      uVar50 = (ulonglong)iVar51;
    }
    else {
      FUN_14014e28e(&local_158);
    }
    lVar27 = 0;
    plVar36 = &local_1f8;
    pLVar29 = local_310;
    do {
      uVar54 = *(uint *)((longlong)_Var10 + lVar27);
      if ((int)uVar54 < 0) {
        if ((uVar54 >> 0x1e & 1) == 0) {
          lVar67 = *(longlong *)(pLVar29[0x2f].QuadPart + (ulonglong)(uVar54 & 0x3fffffff) * 8);
          lVar62 = *(longlong *)(lVar67 + 0x108);
          if (*(longlong *)(lVar67 + 0xf8) == 0) {
            uVar54 = *(uint *)(lVar67 + 0x34);
            uVar60 = *(uint *)(lVar67 + 0x38);
            local_118.s.LowPart = uVar54;
            if ((longlong)(int)uVar60 == -1) {
              local_118.s.LowPart = 0xffffffff;
              local_118.s.HighPart = 0xffffffff;
              uStack_110 = 0xffffffff;
              uStack_10c = 0;
              if (uVar54 != 0xffffffff) {
                local_118.s.LowPart = uVar54;
              }
            }
            else {
              lVar67 = *(longlong *)(local_2b0->QuadPart + (longlong)(int)uVar60 * 8);
              puVar8 = (uint *)(lVar67 + 0x40);
              uVar28 = *(undefined8 *)puVar8;
              if ((uVar54 == 0xffffffff) || (uVar54 <= *puVar8)) {
                local_118.s.LowPart = 0xffffffff;
              }
              else {
                local_118.s.HighPart = 0xffffffff;
                uStack_110 = 0xffffffff;
                uStack_10c = 0;
                if (*(uint *)(lVar67 + 0x44) <= uVar54) goto LAB_14077d856;
              }
              uStack_110 = (uint)uVar28;
              uStack_10c = (uint)((ulonglong)uVar28 >> 0x20);
              local_118._4_4_ = uVar60;
            }
LAB_14077d856:
            (**(code **)(*(longlong *)pLVar29[0x5b].QuadPart + 0x30))
                      ((longlong *)pLVar29[0x5b].QuadPart,lVar62,&local_118);
            pLVar29 = local_310;
          }
          else {
            if ((*(byte *)(lVar67 + 0x24) & 2) != 0) goto LAB_14077d86e;
            uVar54 = *(uint *)(lVar67 + 0x34);
            uVar60 = *(uint *)(lVar67 + 0x38);
            local_118.s.LowPart = uVar54;
            if ((longlong)(int)uVar60 == -1) {
              local_118.s.LowPart = 0xffffffff;
              local_118.s.HighPart = 0xffffffff;
              uStack_110 = 0xffffffff;
              uStack_10c = 0;
              if (uVar54 != 0xffffffff) {
                local_118.s.LowPart = uVar54;
              }
            }
            else {
              lVar57 = *(longlong *)(local_2b0->QuadPart + (longlong)(int)uVar60 * 8);
              puVar8 = (uint *)(lVar57 + 0x40);
              uVar28 = *(undefined8 *)puVar8;
              if ((uVar54 == 0xffffffff) || (uVar54 <= *puVar8)) {
                local_118.s.LowPart = 0xffffffff;
              }
              else {
                local_118.s.HighPart = 0xffffffff;
                uStack_110 = 0xffffffff;
                uStack_10c = 0;
                if (*(uint *)(lVar57 + 0x44) <= uVar54) goto LAB_14077d8e5;
              }
              uStack_110 = (uint)uVar28;
              uStack_10c = (uint)((ulonglong)uVar28 >> 0x20);
              local_118._4_4_ = uVar60;
            }
LAB_14077d8e5:
            local_1f8._0_4_ = (uint)*(undefined8 *)(lVar67 + 0x118);
            local_1f8._4_4_ = (int)((ulonglong)*(undefined8 *)(lVar67 + 0x118) >> 0x20);
            *(undefined8 *)(lVar67 + 0x118) = 0;
            FUN_14742ab52(plVar36,&local_118);
            if (CONCAT44(local_1f8._4_4_,(uint)local_1f8) != 0) {
              FUN_14047a298();
            }
            pLVar29 = local_310;
            if (*(char *)(lVar62 + 0xa4) == '\0') {
              uVar54 = local_310[0x2e].s.LowPart - 1;
              if (*(uint *)(lVar62 + 0xa0) < uVar54) {
                uVar54 = *(uint *)(lVar62 + 0xa0);
              }
              *(uint *)(lVar67 + 0x2c) = uVar54;
            }
          }
        }
        else {
          lVar67 = *(longlong *)(pLVar29[0x31].QuadPart + (ulonglong)(uVar54 & 0x3fffffff) * 8);
          uVar54 = *(uint *)(lVar67 + 0x34);
          uVar60 = *(uint *)(lVar67 + 0x38);
          local_118.s.LowPart = uVar54;
          if ((longlong)(int)uVar60 == -1) {
            local_118.s.LowPart = 0xffffffff;
            local_118.s.HighPart = 0xffffffff;
            uStack_110 = 0xffffffff;
            uStack_10c = 0;
            if (uVar54 != 0xffffffff) {
              local_118.s.LowPart = uVar54;
            }
          }
          else {
            lVar62 = *(longlong *)(local_2b0->QuadPart + (longlong)(int)uVar60 * 8);
            puVar8 = (uint *)(lVar62 + 0x40);
            uVar28 = *(undefined8 *)puVar8;
            if ((uVar54 == 0xffffffff) || (uVar54 <= *puVar8)) {
              local_118.s.LowPart = 0xffffffff;
            }
            else {
              local_118.s.HighPart = 0xffffffff;
              uStack_110 = 0xffffffff;
              uStack_10c = 0;
              if (*(uint *)(lVar62 + 0x44) <= uVar54) goto LAB_14077d806;
            }
            uStack_110 = (uint)uVar28;
            uStack_10c = (uint)((ulonglong)uVar28 >> 0x20);
            local_118._4_4_ = uVar60;
          }
LAB_14077d806:
          (**(code **)(*(longlong *)pLVar29[0x5b].QuadPart + 0x28))
                    ((longlong *)pLVar29[0x5b].QuadPart,*(undefined8 *)(lVar67 + 0x90),&local_118);
          pLVar29 = local_310;
        }
      }
      else {
        if (uVar54 < 0x40000000) {
          lVar67 = *(longlong *)(pLVar29[0x2f].QuadPart + (ulonglong)uVar54 * 8);
          local_118.s.LowPart = 0xffffffff;
          local_118.s.HighPart = 0xffffffff;
          uStack_110 = 0xffffffff;
          uStack_10c = 0;
          uVar54 = *(uint *)(lVar67 + 0x30);
          lVar62 = *(longlong *)(pLVar29[0x2d].QuadPart + (longlong)(int)uVar54 * 8);
          uVar66 = uVar54;
          if (*(char *)(lVar62 + 0x2b) != '\x01') {
            uVar28 = *(undefined8 *)(lVar62 + 0x40);
            uStack_110 = (uint)uVar28;
            uStack_10c = (uint)((ulonglong)uVar28 >> 0x20);
            uVar66 = local_118.s.LowPart;
            local_118._4_4_ = uVar54;
          }
          local_118.s.LowPart = uVar66;
          lVar62 = (**(code **)(*(longlong *)pLVar29[0x5b].QuadPart + 0x18))
                             ((longlong *)pLVar29[0x5b].QuadPart,lVar67 + 0x60,
                              *(undefined8 *)(lVar67 + 8));
          pLVar31 = uStack_150;
          lVar57 = (longlong)(int)(uint)uStack_150;
          uVar54 = (uint)uStack_150 + 1;
          uStack_150 = (LARGE_INTEGER *)CONCAT44(uStack_150._4_4_,uVar54);
          if (uStack_150._4_4_ < uVar54) {
            FUN_14178f010(&local_158,(ulonglong)pLVar31 & 0xffffffff);
          }
          ((LARGE_INTEGER *)(local_158.QuadPart + lVar57 * 0x10))->QuadPart = lVar67;
          ((LARGE_INTEGER *)(local_158.QuadPart + 8))[lVar57 * 2].QuadPart = lVar62;
          *(longlong *)(lVar67 + 0x108) = lVar62;
        }
        else {
          lVar67 = *(longlong *)(pLVar29[0x31].QuadPart + (ulonglong)(uVar54 & 0x3fffffff) * 8);
          local_118.s.LowPart = 0xffffffff;
          local_118.s.HighPart = 0xffffffff;
          uStack_110 = 0xffffffff;
          uStack_10c = 0;
          uVar54 = *(uint *)(lVar67 + 0x30);
          lVar62 = *(longlong *)(pLVar29[0x2d].QuadPart + (longlong)(int)uVar54 * 8);
          uVar66 = uVar54;
          if (*(char *)(lVar62 + 0x2b) != '\x01') {
            uVar28 = *(undefined8 *)(lVar62 + 0x40);
            uStack_110 = (uint)uVar28;
            uStack_10c = (uint)((ulonglong)uVar28 >> 0x20);
            uVar66 = local_118.s.LowPart;
            local_118._4_4_ = uVar54;
          }
          local_118.s.LowPart = uVar66;
          local_1f8._4_4_ = 1;
          uStack_1f0 = 0;
          local_1f8._0_4_ = *(int *)(lVar67 + 100) * *(int *)(lVar67 + 0x60);
          uVar54 = *(uint *)(lVar67 + 0x68);
          iVar51 = 0;
          if (((uVar54 >> 0xe & 1) != 0) ||
             (iVar51 = *(int *)(lVar67 + 0x60), (uVar54 >> 0x10 & 1) != 0)) {
            local_1f8._4_4_ = iVar51;
            uStack_1f0 = uVar54;
          }
          lVar62 = (**(code **)(*(longlong *)pLVar29[0x5b].QuadPart + 0x20))
                             ((longlong *)pLVar29[0x5b].QuadPart,plVar36,*(undefined8 *)(lVar67 + 8)
                             );
          pLVar31 = uStack_150;
          lVar57 = (longlong)(int)(uint)uStack_150;
          uVar54 = (uint)uStack_150 + 1;
          uStack_150 = (LARGE_INTEGER *)CONCAT44(uStack_150._4_4_,uVar54);
          if (uStack_150._4_4_ < uVar54) {
            FUN_14178f010(&local_158,(ulonglong)pLVar31 & 0xffffffff);
          }
          ((LARGE_INTEGER *)(local_158.QuadPart + lVar57 * 0x10))->QuadPart = lVar67;
          ((LARGE_INTEGER *)(local_158.QuadPart + 8))[lVar57 * 2].QuadPart = lVar62;
          *(longlong *)(lVar67 + 0x90) = lVar62;
        }
        *(undefined4 *)(lVar67 + 0x28) = *(undefined4 *)(lVar62 + 0x98);
        pLVar29 = local_310;
      }
LAB_14077d86e:
      lVar27 = lVar27 + 4;
    } while (uVar50 * 4 != lVar27);
    plVar47 = local_2e0;
    pLVar31 = local_2d0;
    if ((longlong)(int)(uint)uStack_150 != 0) {
      pLVar58 = (LARGE_INTEGER *)((longlong)(int)(uint)uStack_150 * 0x10 + local_158.QuadPart);
      LVar30 = local_158;
      do {
        lVar27 = *(longlong *)LVar30;
        plVar47 = (longlong *)((LARGE_INTEGER *)(LVar30.QuadPart + 8))->QuadPart;
        plVar36 = (longlong *)pLVar29[3].QuadPart;
        lVar67 = plVar47[2];
        if (lVar67 != 0) {
          if (DAT_14c87e718 == '\0') {
            iVar51 = *(int *)(lVar67 + 0x1c);
            if ((2 < iVar51) &&
               (bVar42 = (**(code **)(*DAT_14c82b500 + 0x10))(DAT_14c82b500,0), bVar42 < 3)) {
              local_118.s.LowPart = 1;
              local_118.s.HighPart = 0x201;
              uStack_110 = 0x101;
              uStack_10c = 0x301;
              local_108.QuadPart = CONCAT44(DAT_14c7585c8,DAT_14c7585c8) | 0x20000000000;
              pLStack_100 = (LARGE_INTEGER *)(CONCAT44(DAT_14c7585c8,DAT_14c7585c8) | 0x30000000100)
              ;
              local_f8 = 0x20000000000;
              uStack_f0 = 0x30000000100;
              if (*(byte *)((longlong)&local_118 + (ulonglong)(iVar51 - 3) * 4) == bVar42)
              goto LAB_14077de90;
            }
            QueryPerformanceCounter(&local_118);
            uStack_110 = 0xffffffff;
            uStack_10c = 0xffffffff;
            FUN_140056092(lVar67,&local_118);
          }
          else {
LAB_14077de90:
            FUN_140082318(lVar67);
          }
          lVar67 = plVar47[2];
          lVar62 = *(longlong *)(lVar67 + 0xa8);
          lVar57 = *(longlong *)(lVar67 + 0xb0);
          *(undefined8 *)(lVar67 + 0xa8) = 0;
          lVar67 = plVar47[1];
          plVar47[1] = lVar62;
          if (lVar67 != 0) {
            LOCK();
            puVar8 = (uint *)(lVar67 + 8);
            uVar54 = *puVar8;
            *puVar8 = *puVar8 - 1;
            UNLOCK();
            if ((uVar54 & 0x3fffffff) == 1) {
              puVar8 = (uint *)(lVar67 + 8);
              LOCK();
              uVar54 = *puVar8;
              *puVar8 = *puVar8 | 0x40000000;
              UNLOCK();
              if ((uVar54 >> 0x1e & 1) == 0) {
                bVar42 = *(byte *)(lVar67 + 0xd);
                plVar38 = (longlong *)FUN_14001cc68(0x10,8);
                plVar38[1] = lVar67;
                plVar34 = DAT_14ca843c0;
                plVar39 = DAT_14ca843c8;
                if ((bVar42 & 2) == 0) {
                  do {
                    *plVar38 = (longlong)plVar34;
                    LOCK();
                    bVar68 = plVar34 != DAT_14ca843c0;
                    plVar39 = plVar38;
                    if (bVar68) {
                      plVar34 = DAT_14ca843c0;
                      plVar39 = DAT_14ca843c0;
                    }
                    DAT_14ca843c0 = plVar39;
                    UNLOCK();
                  } while (bVar68);
                }
                else {
                  do {
                    *plVar38 = (longlong)plVar39;
                    LOCK();
                    bVar68 = plVar39 != DAT_14ca843c8;
                    plVar34 = plVar38;
                    if (bVar68) {
                      plVar39 = DAT_14ca843c8;
                      plVar34 = DAT_14ca843c8;
                    }
                    DAT_14ca843c8 = plVar34;
                    UNLOCK();
                  } while (bVar68);
                }
              }
            }
          }
          plVar47[3] = lVar57;
          puVar32 = (undefined8 *)plVar47[2];
          plVar47[2] = 0;
          if (puVar32 != (undefined8 *)0x0) {
            LOCK();
            piVar1 = (int *)(puVar32 + 1);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)*puVar32)(puVar32,1);
            }
          }
        }
        (**(code **)(*plVar47 + 8))(plVar47);
        if (*(char *)(lVar27 + 0x18) == '\x01') {
          *(longlong *)(lVar27 + 0x10) = plVar47[1];
          *(longlong **)(lVar27 + 0x90) = plVar47;
          *(longlong **)(lVar27 + 0x98) = plVar47 + 0x17;
LAB_14077d9ea:
          lVar67 = plVar47[0x12];
          *(longlong *)(lVar27 + 0x48) = plVar47[0x11];
          *(int *)(lVar27 + 0x50) = (int)lVar67;
          if (*(char *)((longlong)plVar47 + 0xa4) == '\0') {
            uVar54 = local_310[0x2e].s.LowPart - 1;
            if (*(uint *)(plVar47 + 0x14) < uVar54) {
              uVar54 = *(uint *)(plVar47 + 0x14);
            }
            *(uint *)(lVar27 + 0x2c) = uVar54;
          }
        }
        else {
          if ((*(byte *)(lVar27 + 0x24) & 2) == 0) {
            *(longlong *)(lVar27 + 0x10) = plVar47[1];
            *(longlong **)(lVar27 + 0x108) = plVar47;
            *(longlong **)(lVar27 + 0x110) = plVar47 + 0x1c;
            goto LAB_14077d9ea;
          }
          if ((longlong)DAT_14ca955f0 == 0) {
            plVar36 = (longlong *)FUN_14001cc68(0x70,0x10);
            plVar36[5] = 0;
            plVar36[6] = 0;
            plVar36[7] = 0;
            plVar36[8] = 0;
            plVar36[1] = 0;
            plVar36[2] = 0;
            plVar36[3] = 0;
            plVar36[4] = 0;
            plVar36[9] = 0;
            plVar36[10] = 0;
            plVar36[0xb] = 0;
            plVar36[0xc] = 0;
            plVar36[0xd] = 0;
            *plVar36 = (longlong)&PTR_FUN_14a38b430;
            plVar36[5] = (longlong)L"UnknownTexture";
            *(undefined4 *)(plVar36 + 6) = 1;
            *(undefined8 *)((longlong)plVar36 + 0x34) = 0;
            *(undefined8 *)((longlong)plVar36 + 0x3c) = 0;
            *(undefined8 *)((longlong)plVar36 + 0x54) = DAT_14c967818;
            *(undefined2 *)((longlong)plVar36 + 0x5e) = 1;
            *(undefined2 *)((longlong)plVar36 + 0x61) = 0xff01;
            lVar67 = 0;
          }
          else {
            plVar36 = *(longlong **)(DAT_14ca955e8 + -8 + (longlong)DAT_14ca955f0 * 8);
            DAT_14ca955f0 = DAT_14ca955f0 + -1;
            FUN_14178f6aa();
            lVar67 = plVar36[1];
          }
          plVar36[4] = (longlong)plVar47;
          lVar57 = plVar47[0x16];
          uVar66 = *(undefined4 *)((longlong)plVar47 + 0xb4);
          lVar12 = plVar47[0x17];
          uVar11 = *(undefined4 *)((longlong)plVar47 + 0xbc);
          lVar13 = plVar47[0x18];
          lVar62 = plVar47[0x15];
          uVar5 = *(undefined2 *)((longlong)plVar47 + 0xdb);
          uVar28 = *(undefined8 *)((longlong)plVar47 + 0xcc);
          cVar19 = *(char *)((longlong)plVar47 + 0xda);
          if (cVar19 == '\x02') {
            uVar61 = *(undefined2 *)((longlong)plVar47 + 0xd4);
          }
          else {
            uVar61 = 0;
          }
          uVar6 = *(undefined4 *)((longlong)plVar47 + 0xd6);
          uVar20 = *(undefined1 *)((longlong)plVar47 + 0xdd);
          plVar36[5] = (longlong)L"UnknownTexture";
          *(int *)(plVar36 + 6) = (int)lVar57;
          *(undefined4 *)((longlong)plVar36 + 0x34) = uVar66;
          *(int *)(plVar36 + 7) = (int)lVar12;
          *(undefined4 *)((longlong)plVar36 + 0x3c) = uVar11;
          *(int *)(plVar36 + 8) = (int)lVar13;
          plVar36[9] = lVar62;
          *(undefined2 *)(plVar36 + 10) = uVar5;
          *(undefined8 *)((longlong)plVar36 + 0x54) = uVar28;
          *(undefined2 *)((longlong)plVar36 + 0x5c) = uVar61;
          *(undefined4 *)((longlong)plVar36 + 0x5e) = uVar6;
          *(undefined1 *)((longlong)plVar36 + 0x62) = uVar20;
          *(char *)((longlong)plVar36 + 99) =
               ((byte)(cVar19 - 3U) < 2) * '\x02' | (cVar19 == '\x04' || cVar19 == '\x01');
          plVar36[5] = plVar47[8];
          *(undefined4 *)(plVar36 + 0xd) = 1;
          lVar62 = plVar47[1];
          if (lVar67 != lVar62) {
            plVar36[1] = lVar62;
            if (lVar62 != 0) {
              LOCK();
              *(int *)(lVar62 + 8) = *(int *)(lVar62 + 8) + 1;
              UNLOCK();
            }
            if (lVar67 != 0) {
              LOCK();
              puVar8 = (uint *)(lVar67 + 8);
              uVar54 = *puVar8;
              *puVar8 = *puVar8 - 1;
              UNLOCK();
              if ((uVar54 & 0x3fffffff) == 1) {
                puVar8 = (uint *)(lVar67 + 8);
                LOCK();
                uVar54 = *puVar8;
                *puVar8 = *puVar8 | 0x40000000;
                UNLOCK();
                if ((uVar54 >> 0x1e & 1) == 0) {
                  bVar42 = *(byte *)(lVar67 + 0xd);
                  plVar38 = (longlong *)FUN_14001cc68(0x10,8);
                  plVar38[1] = lVar67;
                  plVar34 = DAT_14ca843c0;
                  plVar39 = DAT_14ca843c8;
                  if ((bVar42 & 2) == 0) {
                    do {
                      *plVar38 = (longlong)plVar34;
                      LOCK();
                      bVar68 = plVar34 != DAT_14ca843c0;
                      plVar39 = plVar38;
                      if (bVar68) {
                        plVar34 = DAT_14ca843c0;
                        plVar39 = DAT_14ca843c0;
                      }
                      DAT_14ca843c0 = plVar39;
                      UNLOCK();
                    } while (bVar68);
                  }
                  else {
                    do {
                      *plVar38 = (longlong)plVar39;
                      LOCK();
                      bVar68 = plVar39 != DAT_14ca843c8;
                      plVar34 = plVar38;
                      if (bVar68) {
                        plVar39 = DAT_14ca843c8;
                        plVar34 = DAT_14ca843c8;
                      }
                      DAT_14ca843c8 = plVar34;
                      UNLOCK();
                    } while (bVar68);
                  }
                }
              }
            }
            lVar62 = plVar47[1];
          }
          lVar67 = plVar36[2];
          if (lVar67 != lVar62) {
            plVar36[2] = lVar62;
            if (lVar62 != 0) {
              LOCK();
              *(int *)(lVar62 + 8) = *(int *)(lVar62 + 8) + 1;
              UNLOCK();
            }
            if (lVar67 != 0) {
              LOCK();
              puVar8 = (uint *)(lVar67 + 8);
              uVar54 = *puVar8;
              *puVar8 = *puVar8 - 1;
              UNLOCK();
              if ((uVar54 & 0x3fffffff) == 1) {
                puVar8 = (uint *)(lVar67 + 8);
                LOCK();
                uVar54 = *puVar8;
                *puVar8 = *puVar8 | 0x40000000;
                UNLOCK();
                if ((uVar54 >> 0x1e & 1) == 0) {
                  bVar42 = *(byte *)(lVar67 + 0xd);
                  plVar39 = (longlong *)FUN_14001cc68(0x10,8);
                  plVar39[1] = lVar67;
                  plVar47 = DAT_14ca843c0;
                  plVar34 = DAT_14ca843c8;
                  if ((bVar42 & 2) == 0) {
                    do {
                      *plVar39 = (longlong)plVar47;
                      LOCK();
                      bVar68 = plVar47 != DAT_14ca843c0;
                      plVar34 = plVar39;
                      if (bVar68) {
                        plVar47 = DAT_14ca843c0;
                        plVar34 = DAT_14ca843c0;
                      }
                      DAT_14ca843c0 = plVar34;
                      UNLOCK();
                    } while (bVar68);
                  }
                  else {
                    do {
                      *plVar39 = (longlong)plVar34;
                      LOCK();
                      bVar68 = plVar34 != DAT_14ca843c8;
                      plVar47 = plVar39;
                      if (bVar68) {
                        plVar34 = DAT_14ca843c8;
                        plVar47 = DAT_14ca843c8;
                      }
                      DAT_14ca843c8 = plVar47;
                      UNLOCK();
                    } while (bVar68);
                  }
                }
              }
            }
          }
          if (plVar36 == (longlong *)0x0) {
            FUN_1449601da(local_310,lVar27,0);
          }
          else {
            LOCK();
            *(int *)((longlong)plVar36 + 0x6c) = *(int *)((longlong)plVar36 + 0x6c) + 1;
            UNLOCK();
            FUN_1449601da(local_310,lVar27,plVar36);
            FUN_14047a298(plVar36);
          }
        }
        LVar30.QuadPart = LVar30.QuadPart + 0x10;
        plVar47 = local_2e0;
        pLVar31 = local_2d0;
        pLVar29 = local_310;
      } while ((LARGE_INTEGER *)LVar30.QuadPart != pLVar58);
    }
  }
LAB_14077deff:
  local_118.s.LowPart = (DWORD)pLVar31;
  local_118.s.HighPart = (LONG)((ulonglong)pLVar31 >> 0x20);
  if ((char)local_2b8 == '\0') {
    LOCK();
    pLVar31[1].s.LowPart = pLVar31[1].s.LowPart + 1;
    UNLOCK();
  }
  uStack_110 = (uint)plVar47;
  uStack_10c = (uint)((ulonglong)plVar47 >> 0x20);
  if ((byte)local_308 == '\0') {
    LOCK();
    *(int *)(plVar47 + 1) = (int)plVar47[1] + 1;
    UNLOCK();
  }
  local_108.QuadPart = (LONGLONG)local_2e8;
  if ((char)local_2f8 == '\0') {
    LOCK();
    local_2e8[1].s.LowPart = local_2e8[1].s.LowPart + 1;
    UNLOCK();
  }
  local_158.QuadPart = (LONGLONG)&local_118;
  uStack_150 = (LARGE_INTEGER *)CONCAT44(uStack_150._4_4_,3);
  if (local_2f9 == 0) {
    bVar42 = *(byte *)local_290;
    if (bVar42 == 0) {
      lVar27 = 0;
      do {
        if ((*(longlong *)((longlong)&local_118 + lVar27) != 0) &&
           ((*(byte *)(*(longlong *)((longlong)&local_118 + lVar27) + 0xa0) & 1) == 0))
        goto LAB_14077df9b;
        lVar27 = lVar27 + 8;
      } while (lVar27 != 0x18);
      goto LAB_14077e0e0;
    }
LAB_14077df9b:
    plVar36 = TlsGetValue(DAT_14c896140);
    if (plVar36 == (longlong *)0x0) {
      plVar36 = (longlong *)FUN_14001cc68(0x18,0x10);
      *plVar36 = 0;
      plVar36[1] = 0;
      *(undefined4 *)(plVar36 + 2) = 0;
      TlsSetValue(DAT_14c896140,plVar36);
    }
    plVar34 = (longlong *)plVar36[1];
    if (plVar34 == (longlong *)0x0) {
      plVar34 = (longlong *)*plVar36;
      if (plVar34 == (longlong *)0x0) {
        local_1f8._0_4_ = DAT_14c896180.s.LowPart;
        local_1f8._4_4_ = DAT_14c896180.s.HighPart;
        LVar30 = DAT_14c896180;
        uVar54 = (uint)local_1f8;
        while (DAT_14c896180 = LVar30, local_1f8._0_4_ = uVar54, (LVar30.QuadPart & 0x3ffffffU) != 0
              ) {
          local_208.QuadPart = (CONCAT44(local_1f8._4_4_,uVar54) & 0xfffffffffc000000) + 0x4000000;
          if ((ulonglong)local_208.QuadPart >> 0x1a < CONCAT44(local_1f8._4_4_,uVar54) >> 0x1a) {
            FUN_14000f986(0x3a83126f);
          }
          uVar50 = (ulonglong)((uVar54 & 0x3ffffff) >> 0xe);
          uVar63 = (ulonglong)(LVar30.s.LowPart & 0x3fff);
          local_208.QuadPart =
               local_208.QuadPart & 0xfffffffffc000000U |
               (ulonglong)
               *(uint *)(*(longlong *)(&DAT_14c833b00 + uVar50 * 8) + 0x10 + uVar63 * 0x18);
          LOCK();
          bVar68 = (LARGE_INTEGER *)CONCAT44(local_1f8._4_4_,(uint)local_1f8) ==
                   (LARGE_INTEGER *)DAT_14c896180.QuadPart;
          LVar30.QuadPart = local_208.QuadPart;
          if (!bVar68) {
            LVar30 = DAT_14c896180;
          }
          DAT_14c896180 = LVar30;
          UNLOCK();
          if (bVar68) {
            *(undefined4 *)(*(longlong *)(&DAT_14c833b00 + uVar50 * 8) + uVar63 * 0x18 + 0x10) = 0;
            plVar34 = *(longlong **)
                       (*(longlong *)(&DAT_14c833b00 + uVar50 * 8) + 8 +
                       (ulonglong)(uVar54 & 0x3fff) * 0x18);
            FUN_1447d080c(uVar54 & 0x3ffffff);
            plVar36[1] = (longlong)plVar34;
            if (plVar34 != (longlong *)0x0) goto LAB_14077e994;
            goto LAB_14078181d;
          }
          local_1f8._0_4_ = DAT_14c896180.s.LowPart;
          local_1f8._4_4_ = DAT_14c896180.s.HighPart;
          LVar30 = DAT_14c896180;
          uVar54 = (uint)local_1f8;
        }
        plVar36[1] = 0;
LAB_14078181d:
        puVar32 = (undefined8 *)FUN_14001cc68(0x10000,0);
        plVar36[1] = (longlong)puVar32;
        iVar51 = 0xff;
        do {
          puVar40 = puVar32 + 0x20;
          *puVar32 = puVar40;
          iVar51 = iVar51 + -1;
          puVar32 = puVar40;
        } while (iVar51 != 0);
        *puVar40 = 0;
        plVar34 = (longlong *)plVar36[1];
      }
      else {
        plVar36[1] = (longlong)plVar34;
        *plVar36 = 0;
      }
LAB_14077e994:
      *(undefined4 *)(plVar36 + 2) = 0x100;
      iVar51 = 0x100;
    }
    else {
      iVar51 = (int)plVar36[2];
    }
    plVar36[1] = *plVar34;
    *(int *)(plVar36 + 2) = iVar51 + -1;
    *plVar34 = (longlong)UE::Tasks::Private::FTaskBase::vftable;
    plVar34[1] = (longlong)&DAT_100000002;
    plVar34[2] = 0;
    *(undefined4 *)(plVar34 + 3) = 0;
    *(undefined4 *)(plVar34 + 4) = 0xffffffff;
    plVar34[6] = 0;
    plVar34[7] = 0x100000000;
    *(undefined1 *)(plVar34 + 8) = 1;
    plVar34[0xe] = (longlong)
                   LowLevelTasks::
                   TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                   TTaskDelegateDummy::vftable;
    plVar34[0xf] = 0;
    plVar34[0x10] = -0x17ffffffffffffe0;
    plVar34[0x12] = 0;
    plVar34[0x13] = 0x100000000;
    *(undefined2 *)(plVar34 + 0x14) = 0;
    LOCK();
    bVar68 = (char)plVar34[8] == '\x01';
    if (bVar68) {
      *(char *)(plVar34 + 8) = '\0';
    }
    UNLOCK();
    if (!bVar68) {
      FUN_14008cdb0(plVar34 + 8);
    }
    *plVar34 = (longlong)&PTR_FUN_14a38b8e8;
    if (*(code **)(plVar34[0xe] + 0x18) != FUN_144713626) {
      (**(code **)(plVar34[0xe] + 0x18))(plVar34 + 0xe,plVar34 + 9);
    }
    LVar30 = local_158;
    plVar34[0xe] = (longlong)
                   LowLevelTasks::
                   TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                   TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                   ::vftable;
    plVar34[9] = (longlong)plVar34;
    plVar34[10] = (longlong)plVar34;
    iVar51 = 0;
    if (*local_2a0 == 0) {
      lVar27 = 0;
    }
    else {
      lVar27 = *(longlong *)(*local_2a0 + 0x30);
    }
    plVar34[0xf] = lVar27;
    plVar34[0x10] = -0x3fffffad77750000;
    *(uint *)((longlong)plVar34 + 0x1c) = bVar42 ^ 1;
    plVar34[0x15] = (longlong)local_310;
    *plVar34 = (longlong)&PTR_FUN_14a38b8d8;
    LOCK();
    *(int *)((longlong)plVar34 + 0xc) = *(int *)((longlong)plVar34 + 0xc) + (uint)uStack_150;
    UNLOCK();
    lVar27 = (longlong)(int)(uint)uStack_150;
    if (lVar27 != 0) {
      plVar36 = plVar34 + 5;
      lVar67 = 0;
      iVar51 = 0;
      do {
        lVar62 = *(longlong *)(LVar30.QuadPart + lVar67);
        if ((lVar62 == 0) || (cVar19 = FUN_1456bb142(lVar62 + 0x88,plVar34), cVar19 == '\0')) {
          iVar51 = iVar51 + 1;
        }
        else {
          LOCK();
          *(int *)(lVar62 + 8) = *(int *)(lVar62 + 8) + 1;
          UNLOCK();
          FUN_1456bb1d4(plVar36,lVar62);
        }
        lVar67 = lVar67 + 8;
      } while (lVar27 * 8 != lVar67);
    }
    LOCK();
    *(int *)((longlong)plVar34 + 0xc) = *(int *)((longlong)plVar34 + 0xc) - iVar51;
    UNLOCK();
    local_1f8._0_4_ = CONCAT31(local_1f8._1_3_,1);
    FUN_1447439e4(plVar34);
    plVar47 = local_2e0;
    if (plVar34 != (longlong *)0x0) {
      DVar59 = local_310[0xa1].s.LowPart;
      local_310[0xa1].s.LowPart = DVar59 + 1;
      if (*(uint *)((longlong)local_310 + 0x50c) < DVar59 + 1) {
        FUN_1401d03aa(local_2d8,DVar59);
      }
      *(longlong **)(local_2d8->QuadPart + (longlong)(int)DVar59 * 8) = plVar34;
      LOCK();
      *(int *)(plVar34 + 1) = (int)plVar34[1] + 1;
      UNLOCK();
      LOCK();
      plVar39 = plVar34 + 1;
      *(int *)plVar39 = (int)*plVar39 + -1;
      UNLOCK();
      if ((int)*plVar39 == 0) {
        (**(code **)*plVar34)(plVar34,1);
      }
    }
  }
  else {
    FUN_14014fe74(&local_158,0x7fffffffffffffff);
LAB_14077e0e0:
    piVar1 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    iVar51 = *piVar1;
    if (iVar51 == 1) {
      FUN_140ad26c0(local_310);
      GetCurrentThreadId();
      iVar51 = *piVar1;
    }
    if ((iVar51 == 0x60000000) || (iVar51 == 0)) {
      *piVar1 = 0x40000010;
    }
    FUN_143205b8a(local_310);
    if ((iVar51 == 0x60000000) || (iVar51 == 0)) {
      *piVar1 = iVar51;
    }
  }
  pLVar31 = local_2e8;
  lVar27 = 0x18;
  do {
    puVar32 = *(undefined8 **)((longlong)&uStack_120 + lVar27);
    if (puVar32 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar32 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar32)(puVar32,1);
      }
    }
    lVar67 = local_1a8;
    lVar27 = lVar27 + -8;
  } while (lVar27 != 0);
  local_118.s.LowPart = (DWORD)plVar47;
  local_118.s.HighPart = (LONG)((ulonglong)plVar47 >> 0x20);
  if ((byte)local_308 == '\0') {
    LOCK();
    *(int *)(plVar47 + 1) = (int)plVar47[1] + 1;
    UNLOCK();
  }
  uStack_110 = (uint)pLVar31;
  uStack_10c = (uint)((ulonglong)pLVar31 >> 0x20);
  if ((char)local_2f8 == '\0') {
    LOCK();
    pLVar31[1].s.LowPart = pLVar31[1].s.LowPart + 1;
    UNLOCK();
  }
  local_108.QuadPart = (LONGLONG)local_240;
  if ((char)local_284 == '\0') {
    LOCK();
    *(int *)(local_240 + 1) = (int)local_240[1] + 1;
    UNLOCK();
  }
  local_200 = 3;
  local_1a8 = 0;
  iVar51 = (int)uStack_1a0;
  uVar66 = uStack_1a0._4_4_;
  uStack_1a0 = 0;
  local_208.QuadPart = (LONGLONG)&local_118;
  if (local_2f9 == 0) {
    if (*(byte *)local_290 == 0) {
      lVar27 = 0;
      do {
        if ((*(longlong *)((longlong)&local_118 + lVar27) != 0) &&
           ((*(byte *)(*(longlong *)((longlong)&local_118 + lVar27) + 0xa0) & 1) == 0))
        goto LAB_14077e21d;
        lVar27 = lVar27 + 8;
      } while (lVar27 != 0x18);
      goto LAB_14077e321;
    }
LAB_14077e21d:
    lVar27 = local_310[3].QuadPart;
    lVar62 = FUN_14001cc68(0x308,0x10);
    FUN_14009016e(lVar62,*(undefined4 *)(lVar27 + 0x17c),0);
    local_158.QuadPart = 0;
    uStack_150 = (LARGE_INTEGER *)0x0;
    FUN_144775d28(&local_158,1);
    uVar50 = (ulonglong)uStack_150;
    lVar27 = (longlong)(int)(uint)uStack_150;
    uVar54 = (uint)uStack_150 + 1;
    uStack_150 = (LARGE_INTEGER *)CONCAT44(uStack_150._4_4_,uVar54);
    if (uStack_150._4_4_ < uVar54) {
      FUN_14741464c(&local_158,uVar50 & 0xffffffff);
    }
    ((LARGE_INTEGER *)(local_158.QuadPart + lVar27 * 8))->QuadPart = lVar62;
    local_1f8._0_4_ = local_158.s.LowPart;
    local_1f8._4_4_ = local_158.s.HighPart;
    uStack_1f0 = (uint)uStack_150;
    FUN_14007658c(&DAT_14ca850c8,&local_1f8,0);
    if ((LARGE_INTEGER *)local_158.QuadPart != (LARGE_INTEGER *)0x0) {
      FUN_1400020a8();
    }
    puVar32 = TlsGetValue(DAT_14c896140);
    if (puVar32 == (undefined8 *)0x0) {
      puVar32 = (undefined8 *)FUN_14001cc68(0x18,0x10);
      *puVar32 = 0;
      puVar32[1] = 0;
      *(undefined4 *)(puVar32 + 2) = 0;
      TlsSetValue(DAT_14c896140,puVar32);
    }
    plVar36 = (longlong *)puVar32[1];
    if (plVar36 == (longlong *)0x0) {
      plVar36 = (longlong *)*puVar32;
      if (plVar36 == (longlong *)0x0) {
        uVar54 = DAT_14c896180.s.LowPart;
        LVar30 = DAT_14c896180;
        while (DAT_14c896180 = LVar30, local_158 = LVar30, (LVar30.QuadPart & 0x3ffffffU) != 0) {
          local_1f8 = (LVar30.QuadPart & 0xfffffffffc000000U) + 0x4000000;
          if (local_1f8 >> 0x1a < (ulonglong)LVar30.QuadPart >> 0x1a) {
            FUN_14000f986(0x3a83126f);
          }
          uVar50 = (ulonglong)((uVar54 & 0x3ffffff) >> 0xe);
          uVar63 = (ulonglong)(LVar30.s.LowPart & 0x3fff);
          uVar64 = local_1f8 & 0xfffffffffc000000;
          LVar30.QuadPart =
               uVar64 | *(uint *)(*(longlong *)(&DAT_14c833b00 + uVar50 * 8) + 0x10 + uVar63 * 0x18)
          ;
          local_1f8._0_4_ = LVar30.s.LowPart;
          local_1f8._4_4_ = (int)(uVar64 >> 0x20);
          LOCK();
          bVar68 = local_158.QuadPart == DAT_14c896180.QuadPart;
          if (!bVar68) {
            LVar30 = DAT_14c896180;
          }
          DAT_14c896180 = LVar30;
          UNLOCK();
          if (bVar68) {
            *(undefined4 *)(*(longlong *)(&DAT_14c833b00 + uVar50 * 8) + uVar63 * 0x18 + 0x10) = 0;
            plVar36 = *(longlong **)
                       (*(longlong *)(&DAT_14c833b00 + uVar50 * 8) + 8 +
                       (ulonglong)(uVar54 & 0x3fff) * 0x18);
            FUN_1447d080c(uVar54 & 0x3ffffff);
            puVar32[1] = plVar36;
            plVar47 = local_2e0;
            if (plVar36 == (longlong *)0x0) goto LAB_14077ec37;
            goto LAB_14077ec79;
          }
          uVar54 = DAT_14c896180.s.LowPart;
          LVar30 = DAT_14c896180;
        }
        puVar32[1] = 0;
LAB_14077ec37:
        plVar47 = local_2e0;
        puVar40 = (undefined8 *)FUN_14001cc68(0x10000,0);
        puVar32[1] = puVar40;
        iVar49 = 0xff;
        do {
          puVar33 = puVar40 + 0x20;
          *puVar40 = puVar33;
          iVar49 = iVar49 + -1;
          puVar40 = puVar33;
        } while (iVar49 != 0);
        *puVar33 = 0;
        plVar36 = (longlong *)puVar32[1];
      }
      else {
        puVar32[1] = plVar36;
        *puVar32 = 0;
      }
LAB_14077ec79:
      *(undefined4 *)(puVar32 + 2) = 0x100;
      iVar49 = 0x100;
    }
    else {
      iVar49 = *(int *)(puVar32 + 2);
    }
    puVar32[1] = *plVar36;
    *(int *)(puVar32 + 2) = iVar49 + -1;
    *plVar36 = (longlong)UE::Tasks::Private::FTaskBase::vftable;
    plVar36[1] = (longlong)&DAT_100000002;
    plVar36[2] = 0;
    *(undefined4 *)(plVar36 + 3) = 0;
    *(undefined4 *)(plVar36 + 4) = 0xffffffff;
    plVar36[6] = 0;
    plVar36[7] = 0x100000000;
    *(undefined1 *)(plVar36 + 8) = 1;
    plVar36[0xe] = (longlong)
                   LowLevelTasks::
                   TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                   TTaskDelegateDummy::vftable;
    plVar36[0xf] = 0;
    plVar36[0x10] = -0x17ffffffffffffe0;
    plVar36[0x12] = 0;
    plVar36[0x13] = 0x100000000;
    *(undefined2 *)(plVar36 + 0x14) = 0;
    LOCK();
    bVar68 = (char)plVar36[8] == '\x01';
    if (bVar68) {
      *(char *)(plVar36 + 8) = '\0';
    }
    UNLOCK();
    if (!bVar68) {
      FUN_14008cdb0(plVar36 + 8);
    }
    *plVar36 = (longlong)&PTR_FUN_14a38b908;
    if (*(code **)(plVar36[0xe] + 0x18) != FUN_144713626) {
      (**(code **)(plVar36[0xe] + 0x18))(plVar36 + 0xe,plVar36 + 9);
    }
    LVar30 = local_208;
    plVar36[0xe] = (longlong)
                   LowLevelTasks::
                   TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                   TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                   ::vftable;
    plVar36[9] = (longlong)plVar36;
    plVar36[10] = (longlong)plVar36;
    iVar49 = 0;
    if (*local_2a0 == 0) {
      lVar27 = 0;
    }
    else {
      lVar27 = *(longlong *)(*local_2a0 + 0x30);
    }
    plVar36[0xf] = lVar27;
    plVar36[0x10] = -0x3fffffad77cd8400;
    *(undefined4 *)((longlong)plVar36 + 0x1c) = 0;
    plVar36[0x15] = (longlong)local_310;
    plVar36[0x16] = (longlong)local_310;
    plVar36[0x17] = lVar67;
    *(int *)(plVar36 + 0x18) = iVar51;
    *(undefined4 *)((longlong)plVar36 + 0xc4) = uVar66;
    plVar36[0x19] = lVar62;
    *(undefined1 *)(plVar36 + 0x1a) = 1;
    *plVar36 = (longlong)&PTR_FUN_14a38b8f8;
    LOCK();
    *(int *)((longlong)plVar36 + 0xc) = *(int *)((longlong)plVar36 + 0xc) + local_200;
    UNLOCK();
    lVar27 = (longlong)local_200;
    if (lVar27 != 0) {
      lVar67 = 0;
      iVar49 = 0;
      do {
        lVar62 = *(longlong *)(LVar30.QuadPart + lVar67);
        if ((lVar62 == 0) || (cVar19 = FUN_1456bb142(lVar62 + 0x88,plVar36), cVar19 == '\0')) {
          iVar49 = iVar49 + 1;
        }
        else {
          LOCK();
          *(int *)(lVar62 + 8) = *(int *)(lVar62 + 8) + 1;
          UNLOCK();
          FUN_1456bb1d4(plVar36 + 5,lVar62);
        }
        lVar67 = lVar67 + 8;
      } while (lVar27 * 8 != lVar67);
    }
    LOCK();
    *(int *)((longlong)plVar36 + 0xc) = *(int *)((longlong)plVar36 + 0xc) + -iVar49;
    UNLOCK();
    local_158.s.LowPart._0_1_ = 1;
    FUN_1447439e4(plVar36);
    DVar59 = local_25c;
    if (plVar36 == (longlong *)0x0) {
      uVar66 = (undefined4)CONCAT71((uint7)(uint3)((uint)-iVar49 >> 8),1);
      plVar36 = (longlong *)0x0;
      pLVar31 = local_310;
    }
    else {
      DVar53 = local_310[0xa1].s.LowPart;
      local_310[0xa1].s.LowPart = DVar53 + 1;
      if (*(uint *)((longlong)local_310 + 0x50c) < DVar53 + 1) {
        FUN_1401d03aa(local_2d8,DVar53);
      }
      *(longlong **)(local_2d8->QuadPart + (longlong)(int)DVar53 * 8) = plVar36;
      LOCK();
      *(int *)(plVar36 + 1) = (int)plVar36[1] + 1;
      UNLOCK();
      uVar66 = 0;
      pLVar31 = local_310;
    }
  }
  else {
    FUN_14014fe74(&local_208,0x7fffffffffffffff);
LAB_14077e321:
    LVar56 = local_310[3].QuadPart;
    piVar1 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    iVar49 = *piVar1;
    if (iVar49 == 1) {
      FUN_140ad26c0();
      GetCurrentThreadId();
      iVar49 = *piVar1;
    }
    if ((iVar49 == 0x60000000) || (iVar49 == 0)) {
      *piVar1 = 0x40000010;
    }
    pLVar31 = local_310;
    if (iVar51 != 0) {
      plVar36 = (longlong *)0x0;
      do {
        if (*(longlong *)
             (*(longlong *)
               (pLVar31[0x33].QuadPart + (longlong)*(int *)(lVar67 + (longlong)plVar36) * 8) + 0x10)
            == 0) {
          FUN_14470bbcc(LVar56);
          pLVar31 = local_310;
        }
        plVar36 = (longlong *)((longlong)plVar36 + 4);
      } while ((longlong *)((longlong)iVar51 * 4) != plVar36);
    }
    uVar66 = (undefined4)CONCAT71((int7)((ulonglong)plVar36 >> 8),1);
    if ((iVar49 == 0x60000000) || (iVar49 == 0)) {
      *piVar1 = iVar49;
    }
    plVar36 = (longlong *)0x0;
    DVar59 = local_25c;
  }
  lVar27 = 0x18;
  do {
    puVar32 = *(undefined8 **)((longlong)&uStack_120 + lVar27);
    if (puVar32 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar32 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar32)(puVar32,1);
        pLVar31 = local_310;
      }
    }
    lVar27 = lVar27 + -8;
  } while (lVar27 != 0);
  plVar34 = (longlong *)pLVar31[0x5b].QuadPart;
  if (plVar34 != (longlong *)0x0) {
    (**(code **)(*plVar34 + 0x38))(plVar34,pLVar31[3].QuadPart,0);
    pLVar31 = local_310;
  }
  lVar27 = local_1b8;
  local_1b8 = 0;
  iVar51 = (int)uStack_1b0;
  uVar11 = uStack_1b0._4_4_;
  uStack_1b0 = 0;
  local_2c8 = CONCAT44(local_2c8._4_4_,uVar66);
  local_2e0 = plVar36;
  if ((int)DVar59 < 0x20 && (char)uVar66 == '\0') {
    if (DAT_14c87e718 == '\0') {
      iVar49 = *(int *)((longlong)plVar36 + 0x1c);
      if ((2 < iVar49) &&
         (bVar42 = (**(code **)(*DAT_14c82b500 + 0x10))(DAT_14c82b500,0), bVar42 < 3)) {
        local_118.s.LowPart = 1;
        local_118.s.HighPart = 0x201;
        uStack_110 = 0x101;
        uStack_10c = 0x301;
        local_108.QuadPart = CONCAT44(DAT_14c7585c8,DAT_14c7585c8) | 0x20000000000;
        pLStack_100 = (LARGE_INTEGER *)(CONCAT44(DAT_14c7585c8,DAT_14c7585c8) | 0x30000000100);
        local_f8 = 0x20000000000;
        uStack_f0 = 0x30000000100;
        if (*(byte *)((longlong)&local_118 + (ulonglong)(iVar49 - 3) * 4) == bVar42)
        goto LAB_140782023;
      }
      QueryPerformanceCounter(&local_158);
      uStack_150 = (LARGE_INTEGER *)0xffffffffffffffff;
      FUN_140056092(plVar36,&local_158);
      pLVar31 = local_310;
    }
    else {
LAB_140782023:
      FUN_140082318(plVar36);
      pLVar31 = local_310;
    }
LAB_14077f025:
    piVar1 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    iVar49 = *piVar1;
    if (iVar49 == 1) {
      FUN_140ad26c0();
      GetCurrentThreadId();
      iVar49 = *piVar1;
      pLVar31 = local_310;
    }
    if ((iVar49 == 0x60000000) || (iVar49 == 0)) {
      *piVar1 = 0x40000010;
    }
    if (iVar51 != 0) {
      lVar67 = 0;
      do {
        if (*(longlong *)
             (*(longlong *)(pLVar31[0x35].QuadPart + (longlong)*(int *)(lVar27 + lVar67) * 8) + 0x10
             ) == 0) {
          FUN_143204dc0();
          pLVar31 = local_310;
        }
        lVar67 = lVar67 + 4;
      } while ((longlong)iVar51 * 4 != lVar67);
    }
    plVar36 = local_278;
    plVar34 = local_240;
    if ((iVar49 == 0x60000000) || (iVar49 == 0)) {
      *piVar1 = iVar49;
    }
  }
  else {
    if (((int)DVar59 < 0x20) ||
       ((bVar42 = *(byte *)local_290, bVar42 == 0 &&
        (((char)uVar66 != '\0' || ((*(byte *)(plVar36 + 0x14) & 1) != 0)))))) goto LAB_14077f025;
    plVar36 = TlsGetValue(DAT_14c896140);
    if (plVar36 == (longlong *)0x0) {
      plVar36 = (longlong *)FUN_14001cc68(0x18,0x10);
      *plVar36 = 0;
      plVar36[1] = 0;
      *(undefined4 *)(plVar36 + 2) = 0;
      TlsSetValue(DAT_14c896140,plVar36);
    }
    plVar39 = (longlong *)plVar36[1];
    if (plVar39 == (longlong *)0x0) {
      plVar39 = (longlong *)*plVar36;
      if (plVar39 == (longlong *)0x0) {
        local_118.s.LowPart = DAT_14c896180.s.LowPart;
        local_118.s.HighPart = DAT_14c896180.s.HighPart;
        LVar30 = DAT_14c896180;
        uVar66 = local_118.s.LowPart;
        while (DAT_14c896180 = LVar30, local_118.s.LowPart = uVar66,
              (LVar30.QuadPart & 0x3ffffffU) != 0) {
          local_158.QuadPart =
               (CONCAT44(local_118.s.HighPart,uVar66) & 0xfffffffffc000000) + 0x4000000;
          if ((ulonglong)local_158.QuadPart >> 0x1a < CONCAT44(local_118.s.HighPart,uVar66) >> 0x1a)
          {
            FUN_14000f986(0x3a83126f);
          }
          uVar50 = (ulonglong)((uVar66 & 0x3ffffff) >> 0xe);
          uVar63 = (ulonglong)(LVar30.s.LowPart & 0x3fff);
          local_158.QuadPart =
               local_158.QuadPart & 0xfffffffffc000000U |
               (ulonglong)
               *(uint *)(*(longlong *)(&DAT_14c833b00 + uVar50 * 8) + 0x10 + uVar63 * 0x18);
          LOCK();
          bVar68 = (LARGE_INTEGER *)CONCAT44(local_118.s.HighPart,local_118.s.LowPart) ==
                   (LARGE_INTEGER *)DAT_14c896180.QuadPart;
          LVar30.QuadPart = local_158.QuadPart;
          if (!bVar68) {
            LVar30 = DAT_14c896180;
          }
          DAT_14c896180 = LVar30;
          UNLOCK();
          if (bVar68) {
            *(undefined4 *)(*(longlong *)(&DAT_14c833b00 + uVar50 * 8) + uVar63 * 0x18 + 0x10) = 0;
            plVar39 = *(longlong **)
                       (*(longlong *)(&DAT_14c833b00 + uVar50 * 8) + 8 +
                       (ulonglong)(uVar66 & 0x3fff) * 0x18);
            FUN_1447d080c(uVar66 & 0x3ffffff);
            plVar36[1] = (longlong)plVar39;
            if (plVar39 != (longlong *)0x0) goto LAB_140781196;
            goto LAB_140781989;
          }
          local_118.s.LowPart = DAT_14c896180.s.LowPart;
          local_118.s.HighPart = DAT_14c896180.s.HighPart;
          LVar30 = DAT_14c896180;
          uVar66 = local_118.s.LowPart;
        }
        plVar36[1] = 0;
LAB_140781989:
        puVar32 = (undefined8 *)FUN_14001cc68(0x10000,0);
        plVar36[1] = (longlong)puVar32;
        iVar49 = 0xff;
        do {
          puVar40 = puVar32 + 0x20;
          *puVar32 = puVar40;
          iVar49 = iVar49 + -1;
          puVar32 = puVar40;
        } while (iVar49 != 0);
        *puVar40 = 0;
        plVar39 = (longlong *)plVar36[1];
      }
      else {
        plVar36[1] = (longlong)plVar39;
        *plVar36 = 0;
      }
LAB_140781196:
      *(undefined4 *)(plVar36 + 2) = 0x100;
      iVar49 = 0x100;
    }
    else {
      iVar49 = (int)plVar36[2];
    }
    plVar36[1] = *plVar39;
    *(int *)(plVar36 + 2) = iVar49 + -1;
    *plVar39 = (longlong)UE::Tasks::Private::FTaskBase::vftable;
    plVar39[1] = (longlong)&DAT_100000002;
    plVar39[2] = 0;
    *(undefined4 *)(plVar39 + 3) = 0;
    *(undefined4 *)(plVar39 + 4) = 0xffffffff;
    plVar39[6] = 0;
    plVar39[7] = 0x100000000;
    *(undefined1 *)(plVar39 + 8) = 1;
    plVar39[0xe] = (longlong)
                   LowLevelTasks::
                   TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                   TTaskDelegateDummy::vftable;
    plVar39[0xf] = 0;
    plVar39[0x10] = -0x17ffffffffffffe0;
    plVar39[0x12] = 0;
    plVar39[0x13] = 0x100000000;
    *(undefined2 *)(plVar39 + 0x14) = 0;
    LOCK();
    bVar68 = (char)plVar39[8] == '\x01';
    if (bVar68) {
      *(char *)(plVar39 + 8) = '\0';
    }
    UNLOCK();
    if (!bVar68) {
      FUN_14008cdb0(plVar39 + 8);
    }
    plVar38 = local_2e0;
    *plVar39 = (longlong)&PTR_FUN_14a38b928;
    if (*(code **)(plVar39[0xe] + 0x18) != FUN_144713626) {
      (**(code **)(plVar39[0xe] + 0x18))(plVar39 + 0xe,plVar39 + 9);
    }
    plVar34 = local_240;
    plVar36 = local_278;
    plVar39[0xe] = (longlong)
                   LowLevelTasks::
                   TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                   TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                   ::vftable;
    plVar39[9] = (longlong)plVar39;
    plVar39[10] = (longlong)plVar39;
    if (*local_2a0 == 0) {
      lVar67 = 0;
    }
    else {
      lVar67 = *(longlong *)(*local_2a0 + 0x30);
    }
    plVar39[0xf] = lVar67;
    plVar39[0x10] = -0x3fffffad77750000;
    *(uint *)((longlong)plVar39 + 0x1c) = bVar42 ^ 1;
    plVar39[0x15] = (longlong)local_310;
    plVar39[0x16] = lVar27;
    *(int *)(plVar39 + 0x17) = iVar51;
    *(undefined4 *)((longlong)plVar39 + 0xbc) = uVar11;
    *plVar39 = (longlong)&PTR_FUN_14a38b918;
    if ((char)local_2c8 == '\0') {
      LOCK();
      *(int *)((longlong)plVar39 + 0xc) = *(int *)((longlong)plVar39 + 0xc) + 1;
      UNLOCK();
      cVar19 = FUN_1456bb142(plVar38 + 0x11,plVar39);
      if (cVar19 == '\0') {
        LOCK();
        *(int *)((longlong)plVar39 + 0xc) = *(int *)((longlong)plVar39 + 0xc) + -1;
        UNLOCK();
      }
      else {
        LOCK();
        *(int *)(plVar38 + 1) = (int)plVar38[1] + 1;
        UNLOCK();
        FUN_1456bb1d4(plVar39 + 5,plVar38);
      }
    }
    local_118.s.LowPart._0_1_ = 1;
    FUN_1447439e4(plVar39);
    pLVar31 = local_310;
    if (plVar39 != (longlong *)0x0) {
      DVar59 = local_310[0xa1].s.LowPart;
      local_310[0xa1].s.LowPart = DVar59 + 1;
      if (*(uint *)((longlong)local_310 + 0x50c) < DVar59 + 1) {
        FUN_1401d03aa(local_2d8,DVar59);
      }
      *(longlong **)(local_2d8->QuadPart + (longlong)(int)DVar59 * 8) = plVar39;
      LOCK();
      *(int *)(plVar39 + 1) = (int)plVar39[1] + 1;
      UNLOCK();
      LOCK();
      plVar38 = plVar39 + 1;
      *(int *)plVar38 = (int)*plVar38 + -1;
      UNLOCK();
      pLVar31 = local_310;
      if ((int)*plVar38 == 0) {
        (**(code **)*plVar39)(plVar39,1);
        pLVar31 = local_310;
      }
    }
  }
  pLVar29 = local_2e8;
  if ((byte)local_308 == '\0') {
    if (DAT_14c87e718 == '\0') {
      iVar51 = *(int *)((longlong)plVar47 + 0x1c);
      if ((2 < iVar51) &&
         (bVar42 = (**(code **)(*DAT_14c82b500 + 0x10))(DAT_14c82b500,0), bVar42 < 3)) {
        local_118.s.LowPart = 1;
        local_118.s.HighPart = 0x201;
        uStack_110 = 0x101;
        uStack_10c = 0x301;
        local_108.QuadPart = CONCAT44(DAT_14c7585c8,DAT_14c7585c8) | 0x20000000000;
        pLStack_100 = (LARGE_INTEGER *)(CONCAT44(DAT_14c7585c8,DAT_14c7585c8) | 0x30000000100);
        local_f8 = 0x20000000000;
        uStack_f0 = 0x30000000100;
        if (*(byte *)((longlong)&local_118 + (ulonglong)(iVar51 - 3) * 4) == bVar42)
        goto LAB_1407820c2;
      }
      QueryPerformanceCounter(&local_118);
      uStack_110 = 0xffffffff;
      uStack_10c = 0xffffffff;
      FUN_140056092(plVar47,&local_118);
      pLVar31 = local_310;
    }
    else {
LAB_1407820c2:
      FUN_140082318(plVar47);
      pLVar31 = local_310;
    }
  }
  if ((char)local_2f8 == '\0') {
    if (DAT_14c87e718 == '\0') {
      iVar51 = *(int *)((longlong)pLVar29 + 0x1c);
      if ((2 < iVar51) &&
         (bVar42 = (**(code **)(*DAT_14c82b500 + 0x10))(DAT_14c82b500,0), bVar42 < 3)) {
        local_118.s.LowPart = 1;
        local_118.s.HighPart = 0x201;
        uStack_110 = 0x101;
        uStack_10c = 0x301;
        local_108.QuadPart = CONCAT44(DAT_14c7585c8,DAT_14c7585c8) | 0x20000000000;
        pLStack_100 = (LARGE_INTEGER *)(CONCAT44(DAT_14c7585c8,DAT_14c7585c8) | 0x30000000100);
        local_f8 = 0x20000000000;
        uStack_f0 = 0x30000000100;
        if (*(byte *)((longlong)&local_118 + (ulonglong)(iVar51 - 3) * 4) == bVar42)
        goto LAB_140782161;
      }
      QueryPerformanceCounter(&local_118);
      uStack_110 = 0xffffffff;
      uStack_10c = 0xffffffff;
      FUN_140056092(pLVar29,&local_118);
    }
    else {
LAB_140782161:
      FUN_140082318(pLVar29);
    }
    LOCK();
    pLVar58 = pLVar29 + 1;
    (pLVar58->s).LowPart = (pLVar58->s).LowPart - 1;
    UNLOCK();
    pLVar31 = local_310;
    if ((pLVar58->s).LowPart == 0) {
      (**(code **)*(_struct_19 *)pLVar29)(pLVar29,1);
      pLVar31 = local_310;
    }
  }
  if ((byte)local_308 == '\0') {
    LOCK();
    plVar39 = plVar47 + 1;
    *(int *)plVar39 = (int)*plVar39 + -1;
    UNLOCK();
    if ((int)*plVar39 == 0) {
      (**(code **)*plVar47)(plVar47,1);
      pLVar31 = local_310;
    }
  }
  plVar47 = local_298;
  if ((char)local_284 == '\0') {
    LOCK();
    plVar39 = plVar34 + 1;
    *(int *)plVar39 = (int)*plVar39 + -1;
    UNLOCK();
    if ((int)*plVar39 == 0) {
      (**(code **)*plVar34)(plVar34,1);
      pLVar31 = local_310;
    }
  }
  if ((longlong *)local_270.QuadPart != (longlong *)0x0) {
    LOCK();
    plVar34 = (longlong *)(local_270.QuadPart + 8);
    *(int *)plVar34 = *(int *)plVar34 + -1;
    UNLOCK();
    if (*(int *)plVar34 == 0) {
      (*(code *)**(undefined8 **)local_270)(local_270.QuadPart,1);
      pLVar31 = local_310;
    }
  }
  if ((char)local_280 == '\0') {
    LOCK();
    plVar34 = plVar47 + 1;
    *(int *)plVar34 = (int)*plVar34 + -1;
    UNLOCK();
    if ((int)*plVar34 == 0) {
      (**(code **)*plVar47)(plVar47,1);
      pLVar31 = local_310;
    }
  }
  if ((char)local_2bc == '\0') {
    LOCK();
    plVar47 = plVar36 + 1;
    *(int *)plVar47 = (int)*plVar47 + -1;
    UNLOCK();
    if ((int)*plVar47 == 0) {
      (**(code **)*plVar36)(plVar36,1);
      pLVar31 = local_310;
    }
  }
  if (*(char *)(pLVar31 + 0xc9) == '\x01') {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14ca95558) && (FUN_144b3d300(&DAT_14ca95558), DAT_14ca95558 == -1)) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      DAT_14ca95550 =
           (longlong *)
           (**(code **)(*DAT_14c8407a8 + 200))
                     (DAT_14c8407a8,L"r.pso.EnableAsyncCacheConsolidation",1);
      _Init_thread_footer(&DAT_14ca95558);
    }
    cVar19 = (**(code **)(*DAT_14ca95550 + 0xa8))();
    if (cVar19 == '\0') {
      local_118.s.LowPart = 0;
      local_118.s.HighPart = 0;
      uStack_110 = 0;
      FUN_14007658c(&DAT_14ca850c8,&local_118,7);
    }
    else {
      local_118.s.LowPart = 0;
      local_118.s.HighPart = 0;
      uStack_110 = 0;
      FUN_14007658c(&DAT_14ca850c8,&local_118,3);
      FUN_1431eb898(&DAT_14ca850c8,local_310 + 0xc3);
    }
    FUN_1431e24b3();
    pLVar31 = local_310;
  }
  pLVar29 = pLVar31;
  if (pLVar31[0xa3].s.LowPart != 0) {
    FUN_143214472(pLVar31 + 0xa2);
    iVar51 = *(int *)((longlong)local_310 + 0x51c);
    FUN_14473400f(local_310[0xa2].QuadPart,local_310[0xa3].s.LowPart);
    local_310[0xa3].s.LowPart = 0;
    pLVar29 = local_310;
    if ((iVar51 < 0) && (*(int *)((longlong)local_310 + 0x51c) != 0)) {
      FUN_14742c7a4(pLVar31 + 0xa2);
      pLVar29 = local_310;
    }
  }
  if (pLVar29[0xa1].s.LowPart != 0) {
    FUN_143214472(local_2d8);
    iVar51 = *(int *)((longlong)local_310 + 0x50c);
    FUN_14473400f(local_310[0xa0].QuadPart,local_310[0xa1].s.LowPart);
    local_310[0xa1].s.LowPart = 0;
    pLVar29 = local_310;
    if ((iVar51 < 0) && (*(int *)((longlong)local_310 + 0x50c) != 0)) {
      FUN_14742c7a4(local_2d8);
      pLVar29 = local_310;
    }
  }
  local_308 = (LARGE_INTEGER *)CONCAT71(local_308._1_7_,*(undefined1 *)(pLVar29[3].QuadPart + 0x69))
  ;
  if (*(char *)(pLVar29 + 0xb0) == '\0') {
    FUN_14320bc04(pLVar29);
  }
  else {
    if (pLVar29[0x2c].s.LowPart != 0) {
      plVar36 = TlsGetValue(DAT_14c896140);
      if (plVar36 == (longlong *)0x0) {
        plVar36 = (longlong *)FUN_14001cc68(0x18,0x10);
        *plVar36 = 0;
        plVar36[1] = 0;
        *(undefined4 *)(plVar36 + 2) = 0;
        TlsSetValue(DAT_14c896140,plVar36);
      }
      plVar47 = (longlong *)plVar36[1];
      if (plVar47 == (longlong *)0x0) {
        plVar47 = (longlong *)*plVar36;
        if (plVar47 == (longlong *)0x0) {
          local_118.s.LowPart = DAT_14c896180.s.LowPart;
          local_118.s.HighPart = DAT_14c896180.s.HighPart;
          LVar30 = DAT_14c896180;
          uVar66 = local_118.s.LowPart;
          while (DAT_14c896180 = LVar30, local_118.s.LowPart = uVar66,
                (LVar30.QuadPart & 0x3ffffffU) != 0) {
            local_158.QuadPart =
                 (CONCAT44(local_118.s.HighPart,uVar66) & 0xfffffffffc000000) + 0x4000000;
            if ((ulonglong)local_158.QuadPart >> 0x1a <
                CONCAT44(local_118.s.HighPart,uVar66) >> 0x1a) {
              FUN_14000f986(0x3a83126f);
            }
            uVar50 = (ulonglong)((uVar66 & 0x3ffffff) >> 0xe);
            uVar63 = (ulonglong)(LVar30.s.LowPart & 0x3fff);
            local_158.QuadPart =
                 local_158.QuadPart & 0xfffffffffc000000U |
                 (ulonglong)
                 *(uint *)(*(longlong *)(&DAT_14c833b00 + uVar50 * 8) + 0x10 + uVar63 * 0x18);
            LOCK();
            bVar68 = (LARGE_INTEGER *)CONCAT44(local_118.s.HighPart,local_118.s.LowPart) ==
                     (LARGE_INTEGER *)DAT_14c896180.QuadPart;
            LVar30.QuadPart = local_158.QuadPart;
            if (!bVar68) {
              LVar30 = DAT_14c896180;
            }
            DAT_14c896180 = LVar30;
            UNLOCK();
            if (bVar68) {
              *(undefined4 *)(*(longlong *)(&DAT_14c833b00 + uVar50 * 8) + uVar63 * 0x18 + 0x10) = 0
              ;
              plVar47 = *(longlong **)
                         (*(longlong *)(&DAT_14c833b00 + uVar50 * 8) + 8 +
                         (ulonglong)(uVar66 & 0x3fff) * 0x18);
              FUN_1447d080c(uVar66 & 0x3ffffff);
              plVar36[1] = (longlong)plVar47;
              if (plVar47 != (longlong *)0x0) goto LAB_14077f5c4;
              goto LAB_14078171c;
            }
            local_118.s.LowPart = DAT_14c896180.s.LowPart;
            local_118.s.HighPart = DAT_14c896180.s.HighPart;
            LVar30 = DAT_14c896180;
            uVar66 = local_118.s.LowPart;
          }
          plVar36[1] = 0;
LAB_14078171c:
          puVar32 = (undefined8 *)FUN_14001cc68(0x10000,0);
          plVar36[1] = (longlong)puVar32;
          iVar51 = 0xff;
          do {
            puVar40 = puVar32 + 0x20;
            *puVar32 = puVar40;
            iVar51 = iVar51 + -1;
            puVar32 = puVar40;
          } while (iVar51 != 0);
          *puVar40 = 0;
          plVar47 = (longlong *)plVar36[1];
        }
        else {
          plVar36[1] = (longlong)plVar47;
          *plVar36 = 0;
        }
LAB_14077f5c4:
        *(undefined4 *)(plVar36 + 2) = 0x100;
        iVar51 = 0x100;
      }
      else {
        iVar51 = (int)plVar36[2];
      }
      plVar36[1] = *plVar47;
      *(int *)(plVar36 + 2) = iVar51 + -1;
      *plVar47 = (longlong)UE::Tasks::Private::FTaskBase::vftable;
      plVar47[1] = (longlong)&DAT_100000002;
      plVar47[2] = 0;
      *(undefined4 *)(plVar47 + 3) = 0;
      *(undefined4 *)(plVar47 + 4) = 0xffffffff;
      plVar47[6] = 0;
      plVar47[7] = 0x100000000;
      *(undefined1 *)(plVar47 + 8) = 1;
      plVar47[0xe] = (longlong)
                     LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateDummy::vftable;
      plVar47[0xf] = 0;
      plVar47[0x10] = -0x17ffffffffffffe0;
      plVar47[0x12] = 0;
      plVar47[0x13] = 0x100000000;
      *(undefined2 *)(plVar47 + 0x14) = 0;
      LOCK();
      bVar68 = (char)plVar47[8] == '\x01';
      if (bVar68) {
        *(char *)(plVar47 + 8) = '\0';
      }
      UNLOCK();
      if (!bVar68) {
        FUN_14008cdb0(plVar47 + 8);
      }
      *plVar47 = (longlong)&PTR_FUN_14a38b948;
      if (*(code **)(plVar47[0xe] + 0x18) != FUN_144713626) {
        (**(code **)(plVar47[0xe] + 0x18))(plVar47 + 0xe,plVar47 + 9);
      }
      plVar47[0xe] = (longlong)
                     LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                     ::vftable;
      plVar47[9] = (longlong)plVar47;
      plVar47[10] = (longlong)plVar47;
      if (*local_2a0 == 0) {
        lVar27 = 0;
      }
      else {
        lVar27 = *(longlong *)(*local_2a0 + 0x30);
      }
      plVar47[0xf] = lVar27;
      plVar47[0x10] = -0x3fffffad71db1f00;
      *(undefined4 *)((longlong)plVar47 + 0x1c) = 0;
      plVar47[0x15] = (longlong)local_310;
      *plVar47 = (longlong)&PTR_FUN_14a38b938;
      local_118.s.LowPart._0_1_ = 1;
      FUN_1447439e4(plVar47);
      if (plVar47 != (longlong *)0x0) {
        lVar27 = local_310[0xa8].QuadPart;
        LOCK();
        *(int *)(lVar27 + 0xc) = *(int *)(lVar27 + 0xc) + 1;
        UNLOCK();
        cVar19 = FUN_1456bb142(plVar47 + 0x11,lVar27);
        if (cVar19 == '\0') {
          LOCK();
          *(int *)(lVar27 + 0xc) = *(int *)(lVar27 + 0xc) + -1;
          UNLOCK();
        }
        else {
          LOCK();
          *(int *)(plVar47 + 1) = (int)plVar47[1] + 1;
          UNLOCK();
          FUN_1456bb1d4(lVar27 + 0x28,plVar47);
        }
        LOCK();
        plVar36 = plVar47 + 1;
        *(int *)plVar36 = (int)*plVar36 + -1;
        UNLOCK();
        if ((int)*plVar36 == 0) {
          (**(code **)*plVar47)(plVar47,1);
        }
      }
    }
    plVar36 = TlsGetValue(DAT_14c896140);
    if (plVar36 == (longlong *)0x0) {
      plVar36 = (longlong *)FUN_14001cc68(0x18,0x10);
      *plVar36 = 0;
      plVar36[1] = 0;
      *(undefined4 *)(plVar36 + 2) = 0;
      TlsSetValue(DAT_14c896140,plVar36);
    }
    plVar47 = (longlong *)plVar36[1];
    if (plVar47 == (longlong *)0x0) {
      plVar47 = (longlong *)*plVar36;
      if (plVar47 == (longlong *)0x0) {
        local_118.s.LowPart = DAT_14c896180.s.LowPart;
        local_118.s.HighPart = DAT_14c896180.s.HighPart;
        LVar30 = DAT_14c896180;
        uVar66 = local_118.s.LowPart;
        while (DAT_14c896180 = LVar30, local_118.s.LowPart = uVar66,
              (LVar30.QuadPart & 0x3ffffffU) != 0) {
          local_158.QuadPart =
               (CONCAT44(local_118.s.HighPart,uVar66) & 0xfffffffffc000000) + 0x4000000;
          if ((ulonglong)local_158.QuadPart >> 0x1a < CONCAT44(local_118.s.HighPart,uVar66) >> 0x1a)
          {
            FUN_14000f986(0x3a83126f);
          }
          uVar50 = (ulonglong)((uVar66 & 0x3ffffff) >> 0xe);
          uVar63 = (ulonglong)(LVar30.s.LowPart & 0x3fff);
          local_158.QuadPart =
               local_158.QuadPart & 0xfffffffffc000000U |
               (ulonglong)
               *(uint *)(*(longlong *)(&DAT_14c833b00 + uVar50 * 8) + 0x10 + uVar63 * 0x18);
          LOCK();
          bVar68 = (LARGE_INTEGER *)CONCAT44(local_118.s.HighPart,local_118.s.LowPart) ==
                   (LARGE_INTEGER *)DAT_14c896180.QuadPart;
          LVar30.QuadPart = local_158.QuadPart;
          if (!bVar68) {
            LVar30 = DAT_14c896180;
          }
          DAT_14c896180 = LVar30;
          UNLOCK();
          if (bVar68) {
            *(undefined4 *)(*(longlong *)(&DAT_14c833b00 + uVar50 * 8) + uVar63 * 0x18 + 0x10) = 0;
            plVar47 = *(longlong **)
                       (*(longlong *)(&DAT_14c833b00 + uVar50 * 8) + 8 +
                       (ulonglong)(uVar66 & 0x3fff) * 0x18);
            FUN_1447d080c(uVar66 & 0x3ffffff);
            plVar36[1] = (longlong)plVar47;
            if (plVar47 != (longlong *)0x0) goto LAB_14077f8db;
            goto LAB_14078159e;
          }
          local_118.s.LowPart = DAT_14c896180.s.LowPart;
          local_118.s.HighPart = DAT_14c896180.s.HighPart;
          LVar30 = DAT_14c896180;
          uVar66 = local_118.s.LowPart;
        }
        plVar36[1] = 0;
LAB_14078159e:
        puVar32 = (undefined8 *)FUN_14001cc68(0x10000,0);
        plVar36[1] = (longlong)puVar32;
        iVar51 = 0xff;
        do {
          puVar40 = puVar32 + 0x20;
          *puVar32 = puVar40;
          iVar51 = iVar51 + -1;
          puVar32 = puVar40;
        } while (iVar51 != 0);
        *puVar40 = 0;
        plVar47 = (longlong *)plVar36[1];
      }
      else {
        plVar36[1] = (longlong)plVar47;
        *plVar36 = 0;
      }
LAB_14077f8db:
      *(undefined4 *)(plVar36 + 2) = 0x100;
      iVar51 = 0x100;
    }
    else {
      iVar51 = (int)plVar36[2];
    }
    plVar36[1] = *plVar47;
    *(int *)(plVar36 + 2) = iVar51 + -1;
    *plVar47 = (longlong)UE::Tasks::Private::FTaskBase::vftable;
    plVar47[1] = (longlong)&DAT_100000002;
    plVar47[2] = 0;
    *(undefined4 *)(plVar47 + 3) = 0;
    *(undefined4 *)(plVar47 + 4) = 0xffffffff;
    plVar47[6] = 0;
    plVar47[7] = 0x100000000;
    *(undefined1 *)(plVar47 + 8) = 1;
    plVar47[0xe] = (longlong)
                   LowLevelTasks::
                   TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                   TTaskDelegateDummy::vftable;
    plVar47[0xf] = 0;
    plVar47[0x10] = -0x17ffffffffffffe0;
    plVar47[0x12] = 0;
    plVar47[0x13] = 0x100000000;
    *(undefined2 *)(plVar47 + 0x14) = 0;
    LOCK();
    bVar68 = (char)plVar47[8] == '\x01';
    if (bVar68) {
      *(char *)(plVar47 + 8) = '\0';
    }
    UNLOCK();
    if (!bVar68) {
      FUN_14008cdb0(plVar47 + 8);
    }
    *plVar47 = (longlong)&PTR_FUN_14a38b968;
    if (*(code **)(plVar47[0xe] + 0x18) != FUN_144713626) {
      (**(code **)(plVar47[0xe] + 0x18))(plVar47 + 0xe,plVar47 + 9);
    }
    plVar47[0xe] = (longlong)
                   LowLevelTasks::
                   TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                   TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                   ::vftable;
    plVar47[9] = (longlong)plVar47;
    plVar47[10] = (longlong)plVar47;
    if (*local_2a0 == 0) {
      lVar27 = 0;
    }
    else {
      lVar27 = *(longlong *)(*local_2a0 + 0x30);
    }
    plVar47[0xf] = lVar27;
    plVar47[0x10] = -0x37ffffad71db0200;
    *(undefined4 *)((longlong)plVar47 + 0x1c) = 0;
    plVar47[0x15] = (longlong)local_310;
    *plVar47 = (longlong)&PTR_FUN_14a38b958;
    local_118.s.LowPart._0_1_ = 1;
    FUN_1447439e4(plVar47);
    if (plVar47 != (longlong *)0x0) {
      lVar27 = local_310[0xa8].QuadPart;
      LOCK();
      *(int *)(lVar27 + 0xc) = *(int *)(lVar27 + 0xc) + 1;
      UNLOCK();
      cVar19 = FUN_1456bb142(plVar47 + 0x11,lVar27);
      if (cVar19 == '\0') {
        LOCK();
        *(int *)(lVar27 + 0xc) = *(int *)(lVar27 + 0xc) + -1;
        UNLOCK();
      }
      else {
        LOCK();
        *(int *)(plVar47 + 1) = (int)plVar47[1] + 1;
        UNLOCK();
        FUN_1456bb1d4(lVar27 + 0x28,plVar47);
      }
      LOCK();
      plVar36 = plVar47 + 1;
      *(int *)plVar36 = (int)*plVar36 + -1;
      UNLOCK();
      if ((int)*plVar36 == 0) {
        (**(code **)*plVar47)(plVar47,1);
      }
    }
  }
  local_1f8._0_4_ = 0;
  local_1f8._4_4_ = 0;
  uStack_1f0 = 0;
  uStack_1ec = 0;
  if (DAT_14ca84e23 == '\x01') {
    local_218 = 0;
    local_210 = 0;
    local_318 = 0;
    FUN_1431ebb78(local_310[3].QuadPart,&local_218,2,1);
  }
  lVar27 = 0;
  uVar54 = 0;
  pLVar31 = local_310;
  DVar59 = local_2ec;
  do {
    uVar23 = uStack_1f0;
    lVar67 = *(longlong *)(local_2b0->QuadPart + (longlong)(int)uVar54 * 8);
    uVar60 = *(uint *)(lVar67 + 0x38);
    if ((uVar60 & 0x20) == 0) {
      if ((uVar60 & 4) == 0) {
        if ((lVar27 == 0) && (uVar50 = (ulonglong)uStack_1f0, uVar50 != 0)) {
          lVar27 = CONCAT44(local_1f8._4_4_,(uint)local_1f8);
          local_118.s.LowPart = 0;
          local_118.s.HighPart = 0;
          uStack_110 = 0;
          uStack_10c = 0;
          if ((int)uStack_1f0 < 0) goto LAB_1407814f5;
          FUN_144775d28(&local_118,uVar50);
          lVar62 = 0;
          do {
            uVar60 = uStack_110;
            lVar57 = (longlong)(int)uStack_110;
            uStack_110 = uStack_110 + 1;
            if (uStack_10c < uStack_110) {
              FUN_14741464c(&local_118,uVar60);
            }
            *(undefined8 *)(CONCAT44(local_118.s.HighPart,local_118.s.LowPart) + lVar57 * 8) =
                 *(undefined8 *)(lVar27 + lVar62);
            lVar62 = lVar62 + 8;
          } while (uVar50 << 3 != lVar62);
          local_158.s.HighPart = local_118.s.HighPart;
          local_158.s.LowPart = local_118.s.LowPart;
          uStack_150 = (LARGE_INTEGER *)CONCAT44(uStack_150._4_4_,uStack_110);
          FUN_14007658c(&DAT_14ca850c8,&local_158,0);
          if (CONCAT44(local_118.s.HighPart,local_118.s.LowPart) != 0) {
            FUN_1400020a8();
          }
          uStack_1f0 = 0;
          pLVar31 = local_310;
          if ((int)uStack_1ec < 0) {
            FUN_14742c7b2(&local_1f8);
            pLVar31 = local_310;
          }
        }
        FUN_14471624a(pLVar31[3].QuadPart,lVar67);
        pLVar31 = local_310;
        lVar27 = lVar67;
        DVar59 = local_2ec;
        if ((*(byte *)(lVar67 + 0x35) & 1) == 0) goto LAB_14077fe39;
LAB_14077fe07:
        local_118.s.LowPart = 0;
        local_118.s.HighPart = 0;
        uStack_110 = 0;
        FUN_14007658c(&DAT_14ca850c8,&local_118,1);
        pLVar31 = local_310;
        lVar27 = lVar67;
        DVar59 = local_2ec;
      }
      else {
        if ((*(byte *)(lVar67 + 0x35) & 2) == 0) {
          if ((uVar60 & 1) != 0) {
            puVar32 = (undefined8 *)
                      ((longlong)*(int *)(lVar67 + 0x1a8) * 0x20 + pLVar31[0xa6].QuadPart);
            lVar27 = (longlong)(int)uStack_1f0;
            uStack_1f0 = uStack_1f0 + 1;
            if (uStack_1ec < uStack_1f0) {
              FUN_1447a78d4(&local_1f8,uVar23);
              pLVar31 = local_310;
              DVar59 = local_2ec;
            }
            *(undefined8 *)(CONCAT44(local_1f8._4_4_,(uint)local_1f8) + lVar27 * 8) = *puVar32;
            bVar42 = *(byte *)(puVar32 + 3);
            goto LAB_14077fc97;
          }
        }
        else {
          lVar27 = *(longlong *)(lVar67 + 0x1c8);
          if (lVar27 != 0) {
            if (DAT_14c87e718 == '\0') {
              iVar51 = *(int *)(lVar27 + 0x1c);
              if ((2 < iVar51) &&
                 (bVar42 = (**(code **)(*DAT_14c82b500 + 0x10))(DAT_14c82b500,0), bVar42 < 3)) {
                local_118.s.LowPart = 1;
                local_118.s.HighPart = 0x201;
                uStack_110 = 0x101;
                uStack_10c = 0x301;
                local_108.QuadPart = CONCAT44(DAT_14c7585c8,DAT_14c7585c8) | 0x20000000000;
                pLStack_100 = (LARGE_INTEGER *)
                              (CONCAT44(DAT_14c7585c8,DAT_14c7585c8) | 0x30000000100);
                local_f8 = 0x20000000000;
                uStack_f0 = 0x30000000100;
                if (*(byte *)((longlong)&local_118 + (ulonglong)(iVar51 - 3) * 4) == bVar42)
                goto LAB_14077ff0f;
              }
              QueryPerformanceCounter(&local_118);
              uStack_110 = 0xffffffff;
              uStack_10c = 0xffffffff;
              FUN_140056092(lVar27,&local_118);
              pLVar31 = local_310;
              DVar59 = local_2ec;
            }
            else {
LAB_14077ff0f:
              FUN_140082318(lVar27);
              pLVar31 = local_310;
              DVar59 = local_2ec;
            }
          }
          uVar23 = uStack_1f0;
          uVar60 = *(uint *)(lVar67 + 0x1c0);
          if ((longlong)(int)uVar60 != 0) {
            lVar27 = (longlong)(int)uStack_1f0;
            uVar24 = uVar60 + uStack_1f0;
            uVar25 = uStack_1ec - uStack_1f0;
            uStack_1f0 = uVar24;
            if (uVar25 < uVar60) {
              FUN_1447a78d4(&local_1f8,uVar23);
            }
            memmove((void *)(lVar27 * 8 + CONCAT44(local_1f8._4_4_,(uint)local_1f8)),
                    *(void **)(lVar67 + 0x1b8),(longlong)(int)uVar60 << 3);
            *(undefined4 *)(lVar67 + 0x1c0) = 0;
            pLVar31 = local_310;
            DVar59 = local_2ec;
          }
          bVar42 = *(byte *)(lVar67 + 0x35);
LAB_14077fc97:
          if ((bVar42 & 1) != 0) {
            uVar50 = (ulonglong)uStack_1f0;
            if (uVar50 != 0) {
              lVar27 = CONCAT44(local_1f8._4_4_,(uint)local_1f8);
              local_118.s.LowPart = 0;
              local_118.s.HighPart = 0;
              uStack_110 = 0;
              uStack_10c = 0;
              if ((int)uStack_1f0 < 0) goto LAB_1407814f5;
              FUN_144775d28(&local_118,uVar50);
              lVar67 = 0;
              do {
                uVar60 = uStack_110;
                lVar62 = (longlong)(int)uStack_110;
                uStack_110 = uStack_110 + 1;
                if (uStack_10c < uStack_110) {
                  FUN_14741464c(&local_118,uVar60);
                }
                *(undefined8 *)(CONCAT44(local_118.s.HighPart,local_118.s.LowPart) + lVar62 * 8) =
                     *(undefined8 *)(lVar27 + lVar67);
                lVar67 = lVar67 + 8;
              } while (uVar50 << 3 != lVar67);
              local_158.s.HighPart = local_118.s.HighPart;
              local_158.s.LowPart = local_118.s.LowPart;
              uStack_150 = (LARGE_INTEGER *)CONCAT44(uStack_150._4_4_,uStack_110);
              FUN_14007658c(&DAT_14ca850c8,&local_158,0);
              if (CONCAT44(local_118.s.HighPart,local_118.s.LowPart) != 0) {
                FUN_1400020a8();
              }
              uStack_1f0 = 0;
              if ((int)uStack_1ec < 0) {
                FUN_14742c7b2(&local_1f8);
              }
            }
            lVar67 = 0;
            goto LAB_14077fe07;
          }
        }
        lVar27 = 0;
      }
    }
LAB_14077fe39:
    uVar54 = uVar54 + 1;
  } while (uVar54 <= DVar59);
  uVar50 = (ulonglong)uStack_1f0;
  if (uVar50 != 0) {
    lVar27 = CONCAT44(local_1f8._4_4_,(uint)local_1f8);
    local_118.s.LowPart = 0;
    local_118.s.HighPart = 0;
    uStack_110 = 0;
    uStack_10c = 0;
    if ((int)uStack_1f0 < 0) {
LAB_1407814f5:
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar50);
    }
    FUN_144775d28(&local_118,uVar50);
    lVar67 = 0;
    do {
      uVar54 = uStack_110;
      lVar62 = (longlong)(int)uStack_110;
      uStack_110 = uStack_110 + 1;
      if (uStack_10c < uStack_110) {
        FUN_14741464c(&local_118,uVar54);
      }
      *(undefined8 *)(CONCAT44(local_118.s.HighPart,local_118.s.LowPart) + lVar62 * 8) =
           *(undefined8 *)(lVar27 + lVar67);
      lVar67 = lVar67 + 8;
    } while (uVar50 << 3 != lVar67);
    local_158.s.HighPart = local_118.s.HighPart;
    local_158.s.LowPart = local_118.s.LowPart;
    uStack_150 = (LARGE_INTEGER *)CONCAT44(uStack_150._4_4_,uStack_110);
    FUN_14007658c(&DAT_14ca850c8,&local_158,0);
    if (CONCAT44(local_118.s.HighPart,local_118.s.LowPart) != 0) {
      FUN_1400020a8();
    }
    uStack_1f0 = 0;
    pLVar31 = local_310;
    if ((int)uStack_1ec < 0) {
      FUN_14742c7b2(&local_1f8);
      pLVar31 = local_310;
    }
  }
  FUN_14002049c(pLVar31[3].QuadPart,(ulonglong)local_308 & 0xff);
  puVar9 = (ulonglong *)local_310[3].QuadPart;
  puVar40 = (undefined8 *)(*puVar9 + 7 & 0xfffffffffffffff8);
  puVar32 = puVar40 + 0x11;
  if ((undefined8 *)puVar9[1] < puVar32) {
    FUN_140023dd8(puVar9,0x90);
    puVar40 = (undefined8 *)(*puVar9 + 7 & 0xfffffffffffffff8);
    puVar32 = puVar40 + 0x11;
  }
  *puVar9 = (ulonglong)puVar32;
  *(int *)(puVar9 + 0xc) = (int)puVar9[0xc] + 1;
  *(undefined8 **)puVar9[6] = puVar40;
  puVar9[6] = (ulonglong)(puVar40 + 1);
  puVar40[1] = 0;
  *puVar40 = &PTR_FUN_14a1fb978;
  puVar40[3] = 0;
  puVar40[4] = 0x800000000;
  puVar40[0xd] = 0;
  puVar40[0xe] = 0x800000000;
  puVar40[0xf] = 0;
  puVar40[0x10] = 0;
  if ((*(byte *)((longlong)local_310 + 0x65c) & 1) != 0) {
    FUN_14742a2d2(local_310);
  }
  puVar9 = (ulonglong *)local_310[3].QuadPart;
  LVar30 = local_310[0x87];
  DVar59 = local_310[0x88].s.LowPart;
  *(undefined1 *)((longlong)puVar9 + 0x66) = 1;
  puVar40 = (undefined8 *)(*puVar9 + 7 & 0xfffffffffffffff8);
  puVar32 = puVar40 + 4;
  if ((undefined8 *)puVar9[1] < puVar32) {
    FUN_140023dd8(puVar9,0x28);
    puVar40 = (undefined8 *)(*puVar9 + 7 & 0xfffffffffffffff8);
    puVar32 = puVar40 + 4;
  }
  *puVar9 = (ulonglong)puVar32;
  *(int *)(puVar9 + 0xc) = (int)puVar9[0xc] + 1;
  *(undefined8 **)puVar9[6] = puVar40;
  puVar9[6] = (ulonglong)(puVar40 + 1);
  if (DVar59 == 0) {
    _Dst = (void *)0x0;
  }
  else {
    _Size = (longlong)(int)DVar59 * 0x10;
    _Dst = (void *)(*puVar9 + 7 & 0xfffffffffffffff8);
    pvVar41 = (void *)((longlong)_Dst + _Size);
    if ((void *)puVar9[1] < pvVar41) {
      FUN_140023dd8(puVar9,(uint)_Size | 8);
      _Dst = (void *)(*puVar9 + 7 & 0xfffffffffffffff8);
      pvVar41 = (void *)((longlong)_Dst + _Size);
    }
    *puVar9 = (ulonglong)pvVar41;
    memcpy(_Dst,(void *)LVar30,_Size);
  }
  uVar50 = local_2c8;
  pLVar31 = local_2d0;
  plVar36 = local_2e0;
  puVar40[1] = 0;
  *puVar40 = &PTR_LAB_14a380c28;
  puVar40[2] = _Dst;
  *(DWORD *)(puVar40 + 3) = DVar59;
  if (*(char *)(local_310 + 0xa9) != '\x01') goto LAB_140780229;
  pLVar29 = local_310 + 0xa8;
  FUN_1400daade(pLVar29);
  lVar27 = pLVar29->QuadPart;
  if (lVar27 != 0) {
    if (DAT_14c87e718 == '\0') {
      iVar51 = *(int *)(lVar27 + 0x1c);
      if ((2 < iVar51) &&
         (bVar42 = (**(code **)(*DAT_14c82b500 + 0x10))(DAT_14c82b500,0), bVar42 < 3)) {
        local_118.s.LowPart = 1;
        local_118.s.HighPart = 0x201;
        uStack_110 = 0x101;
        uStack_10c = 0x301;
        local_108.QuadPart = CONCAT44(DAT_14c7585c8,DAT_14c7585c8) | 0x20000000000;
        pLStack_100 = (LARGE_INTEGER *)(CONCAT44(DAT_14c7585c8,DAT_14c7585c8) | 0x30000000100);
        local_f8 = 0x20000000000;
        uStack_f0 = 0x30000000100;
        if (*(byte *)((longlong)&local_118 + (ulonglong)(iVar51 - 3) * 4) == bVar42)
        goto LAB_140782337;
      }
      QueryPerformanceCounter(&local_118);
      uStack_110 = 0xffffffff;
      uStack_10c = 0xffffffff;
      FUN_140056092(lVar27,&local_118);
      pLVar31 = local_2d0;
    }
    else {
LAB_140782337:
      FUN_140082318(lVar27);
      pLVar31 = local_2d0;
    }
  }
  if (*(char *)(local_310 + 0xa9) == '\x01') {
    puVar32 = (undefined8 *)pLVar29->QuadPart;
    if (puVar32 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(puVar32 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*puVar32)(puVar32,1);
      }
    }
    *(undefined1 *)(local_310 + 0xa9) = 0;
  }
LAB_140780229:
  pLVar29 = local_310;
  if ((longlong)(int)local_310[0x38].s.LowPart != 0) {
    plVar47 = (longlong *)local_310[0x37].QuadPart;
    plVar34 = plVar47 + (longlong)(int)local_310[0x38].s.LowPart * 2;
    do {
      plVar39 = *(longlong **)(*plVar47 + 0xf8);
      plVar38 = *(longlong **)plVar47[1];
      if (plVar38 != plVar39) {
        *(longlong **)plVar47[1] = plVar39;
        if (plVar39 != (longlong *)0x0) {
          (**(code **)(*plVar39 + 0x30))();
          pLVar29 = local_310;
        }
        if (plVar38 != (longlong *)0x0) {
          (**(code **)(*plVar38 + 0x38))(plVar38);
          pLVar29 = local_310;
        }
      }
      plVar47 = plVar47 + 2;
    } while (plVar47 != plVar34);
  }
  if ((longlong)(int)pLVar29[0x3a].s.LowPart != 0) {
    plVar47 = (longlong *)pLVar29[0x39].QuadPart;
    plVar34 = plVar47 + (longlong)(int)pLVar29[0x3a].s.LowPart * 2;
    do {
      puVar32 = *(undefined8 **)(*plVar47 + 0x88);
      puVar40 = *(undefined8 **)plVar47[1];
      if (puVar40 != puVar32) {
        *(undefined8 **)plVar47[1] = puVar32;
        if (puVar32 != (undefined8 *)0x0) {
          LOCK();
          *(int *)(puVar32 + 1) = *(int *)(puVar32 + 1) + 1;
          UNLOCK();
        }
        if (puVar40 != (undefined8 *)0x0) {
          LOCK();
          piVar1 = (int *)(puVar40 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar40)(puVar40,1);
            pLVar29 = local_310;
          }
        }
      }
      plVar47 = plVar47 + 2;
    } while (plVar47 != plVar34);
  }
  puVar32 = (undefined8 *)pLVar29[0xc1].QuadPart;
  if ((longlong)(int)pLVar29[0xc2].s.LowPart == 0) {
    DVar59 = 0;
  }
  else {
    puVar40 = puVar32 + (longlong)(int)pLVar29[0xc2].s.LowPart * 8;
    do {
      pcVar7 = (code *)*puVar32;
      plVar47 = puVar32 + 4;
      if ((longlong *)puVar32[2] != (longlong *)0x0) {
        plVar47 = (longlong *)puVar32[2];
      }
      uVar28 = (**(code **)(*plVar47 + 8))();
      (*pcVar7)(uVar28);
      puVar32 = puVar32 + 8;
    } while (puVar32 != puVar40);
    DVar59 = local_310[0xc2].s.LowPart;
    puVar32 = (undefined8 *)local_310[0xc1].QuadPart;
    pLVar29 = local_310;
  }
  FUN_144a80dc3(puVar32,DVar59);
  pLVar29[0xc2].s.LowPart = 0;
  if (*(int *)((longlong)pLVar29 + 0x614) != 0) {
    FUN_14321954a(pLVar29 + 0xc1);
    pLVar29 = local_310;
  }
  pLVar29[0x2a].QuadPart = 0;
  if ((char)uVar50 == '\0') {
    LOCK();
    plVar47 = plVar36 + 1;
    *(int *)plVar47 = (int)*plVar47 + -1;
    UNLOCK();
    if ((int)*plVar47 == 0) {
      (**(code **)*plVar36)(plVar36,1);
    }
  }
  if ((char)local_2b8 == '\0') {
    LOCK();
    pLVar29 = pLVar31 + 1;
    (pLVar29->s).LowPart = (pLVar29->s).LowPart - 1;
    UNLOCK();
    if ((pLVar29->s).LowPart == 0) {
      (**(code **)*(_struct_19 *)pLVar31)(pLVar31,1);
    }
  }
  if ((local_80 ^ (ulonglong)local_338) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140782676 FUN_140782676 body=66 status=ok
// SIG undefined FUN_140782676(void)

undefined8 * FUN_140782676(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar2 = FUN_144a2b138(param_1,param_3);
  if (lVar2 == 0) {
    uVar1 = 0x3860a972;
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(lVar2 + 0x3c8);
    uVar1 = *(undefined4 *)(lVar2 + 0x3d0);
  }
  *param_2 = uVar3;
  *(undefined4 *)(param_2 + 1) = uVar1;
  param_2[2] = 0;
  return param_2;
}



// FUNCTION 1407826b8 FUN_1407826b8 body=84 status=ok
// SIG undefined FUN_1407826b8(void)

void FUN_1407826b8(longlong param_1)

{
  byte *pbVar1;
  
  FUN_14078270c();
  if ((((*(uint *)(param_1 + 8) & 0x10) == 0) && (*(longlong *)(param_1 + 0x20) != 0)) &&
     ((*(byte *)(param_1 + 0xb0) & 0x40) != 0)) {
    pbVar1 = (byte *)(*(longlong *)(param_1 + 0x20) + 0xd5);
    *pbVar1 = *pbVar1 & 0xf7;
  }
  if ((~*(uint *)(param_1 + 0xb0) & 0x40002000) == 0) {
    *(uint *)(param_1 + 0xb0) = *(uint *)(param_1 + 0xb0) & 0xbfffffff;
  }
  return;
}



// FUNCTION 14078270c FUN_14078270c body=685 status=ok
// SIG undefined FUN_14078270c(void)

void FUN_14078270c(longlong *param_1)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined4 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined **local_80;
  undefined8 *local_78;
  longlong *local_70;
  longlong *local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((*(byte *)(param_1[2] + 0xd5) & 4) != 0) {
    local_98 = 0;
    uStack_90 = 0;
    FUN_1400033ba(param_1,0,0,0);
  }
  cVar2 = FUN_1400439fc(param_1,0,&local_80);
  if (cVar2 != '\0') {
    (**(code **)(*param_1 + 0x268))(param_1);
  }
  (**(code **)(*param_1 + 0x2a8))(param_1);
  plVar7 = (longlong *)param_1[0x14];
  if (plVar7 != (longlong *)0x0) {
    plVar8 = (longlong *)*plVar7;
    if ((longlong)(int)plVar7[1] == 0) {
      uVar6 = 0;
    }
    else {
      plVar7 = plVar8 + (longlong)(int)plVar7[1] * 5;
      do {
        lVar4 = FUN_140342cba();
        plVar5 = (longlong *)*plVar8;
        if (((((plVar5 == (longlong *)0x0) || (*(int *)((longlong)plVar8 + 0xc) == 0)) ||
             (uVar1 = *(uint *)(plVar8 + 1), (int)uVar1 < 0)) ||
            ((DAT_14c9647dc <= (int)uVar1 ||
             (lVar9 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar9 == 0))))
           || ((*(int *)(lVar9 + 0x10) != *(int *)((longlong)plVar8 + 0xc) ||
               ((*(uint *)(lVar9 + 8) & 0x10200000) != 0)))) {
          if ((int)plVar8[3] == 0) {
LAB_140782834:
            if (plVar5 != (longlong *)0x0) goto LAB_14078283d;
          }
          else {
            plVar5 = (longlong *)FUN_14007daa4(plVar8,param_1,0);
            if (plVar5 != (longlong *)0x0) {
              lVar9 = plVar5[1];
              if (*(ulonglong *)(lVar4 + 8) == 0) {
                bVar10 = lVar9 != 0;
                if (lVar9 != lVar4 && bVar10) {
                  do {
                    lVar9 = *(longlong *)(lVar9 + 0x30);
                    bVar10 = lVar9 != 0;
                    if (lVar9 == lVar4) break;
                  } while (lVar9 != 0);
                }
                if (bVar10) goto LAB_140782831;
              }
              else if ((*(ulonglong *)(lVar9 + 0x18) & *(ulonglong *)(lVar4 + 8)) != 0) {
LAB_140782831:
                *plVar8 = (longlong)plVar5;
                goto LAB_140782834;
              }
            }
            if (*plVar8 != 0) {
              *plVar8 = 0;
              plVar8[1] = 0;
            }
          }
        }
        else {
LAB_14078283d:
          *(longlong **)(param_1[0xc] + (longlong)(int)plVar8[4]) = plVar5;
          local_78 = (undefined8 *)0x0;
          local_80 = &PTR_FUN_149e6e570;
          local_70 = param_1;
          local_68 = param_1 + 0x12;
          (**(code **)(*plVar5 + 0x30))(plVar5,&local_80);
          local_80 = &PTR_LAB_149eb0140;
          if (local_78 != (undefined8 *)0x0) {
            (**(code **)*local_78)(local_78,1);
          }
          if ((DAT_14c950c29 == '\x01') && (iVar3 = (int)param_1[0x13], 0 < iVar3)) {
            lVar4 = param_1[0x12];
            lVar9 = 0;
            do {
              if (*(longlong *)(lVar4 + lVar9 * 8) != 0) {
                FUN_1456cec3c();
                iVar3 = (int)param_1[0x13];
              }
              lVar9 = lVar9 + 1;
            } while (lVar9 < iVar3);
          }
        }
        plVar8 = plVar8 + 5;
      } while (plVar8 != plVar7);
      plVar7 = (longlong *)param_1[0x14];
      if (plVar7 == (longlong *)0x0) goto LAB_14078295f;
      uVar6 = (undefined4)plVar7[1];
      plVar8 = (longlong *)*plVar7;
    }
    FUN_1403a7699(plVar8,uVar6);
    if (*plVar7 != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(plVar7);
    param_1[0x14] = 0;
  }
LAB_14078295f:
  if ((local_60 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1407829ba FUN_1407829ba body=98 status=ok
// SIG undefined FUN_1407829ba(void)

void FUN_1407829ba(undefined8 param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  if ((*(byte *)(param_2 + 0x2c) & 1) == 0) {
    iVar1 = *(int *)(param_2 + 0x18);
    if ((longlong)iVar1 != 0) {
      lVar2 = *(longlong *)(param_2 + 0x10);
      lVar4 = 0;
      do {
        lVar3 = *(longlong *)(*(longlong *)(lVar2 + lVar4) + 8);
        if (lVar3 != 0) {
          *(uint *)(lVar3 + 0x90) = *(uint *)(lVar3 + 0x90) & 0xffffffdb | 0x20;
        }
        lVar4 = lVar4 + 8;
      } while ((longlong)iVar1 * 8 != lVar4);
    }
  }
  else {
    lVar2 = *(longlong *)(param_2 + 8);
    if (lVar2 != 0) {
      *(uint *)(lVar2 + 0x90) = *(uint *)(lVar2 + 0x90) & 0xffffffdb | 0x20;
      return;
    }
  }
  return;
}



// FUNCTION 140782a1c FUN_140782a1c body=142 status=ok
// SIG undefined FUN_140782a1c(void)

void FUN_140782a1c(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if ((param_2 != 0) && (plVar2 = *(longlong **)(param_2 + 8), plVar2 != (longlong *)0x0)) {
    uVar1 = *(uint *)(param_2 + 0x28);
    iVar3 = (int)plVar2[1];
    iVar4 = ~uVar1 + iVar3;
    if (iVar4 != 0) {
      iVar5 = 1;
      if (iVar4 < 1) {
        iVar5 = iVar4;
      }
      memmove((void *)(*plVar2 + (longlong)(int)uVar1 * 8),
              (void *)(*plVar2 + (longlong)(iVar3 - iVar5) * 8),(longlong)iVar5 << 3);
      iVar3 = (int)plVar2[1];
    }
    *(int *)(plVar2 + 1) = iVar3 + -1;
    if ((int)uVar1 < iVar3 + -1) {
      *(uint *)(*(longlong *)(*plVar2 + (longlong)(int)uVar1 * 8) + 0x28) = uVar1;
    }
    *(byte *)(plVar2 + 0x12) = *(byte *)(plVar2 + 0x12) | 2;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined4 *)(param_2 + 0x28) = 0xffffffff;
  }
  return;
}



// FUNCTION 140782aaa FUN_140782aaa body=212 status=ok
// SIG undefined FUN_140782aaa(void)

void FUN_140782aaa(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (param_2 != (longlong *)0x0) {
    uVar1 = *(uint *)((longlong)param_2 + 0x24);
    iVar3 = (int)param_1[1];
    iVar4 = ~uVar1 + iVar3;
    if (iVar4 != 0) {
      iVar5 = 1;
      if (iVar4 < 1) {
        iVar5 = iVar4;
      }
      memmove((void *)(*param_1 + (longlong)(int)uVar1 * 8),
              (void *)(*param_1 + (longlong)(iVar3 - iVar5) * 8),(longlong)iVar5 << 3);
      iVar3 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar3 + -1;
    *(undefined4 *)((longlong)param_2 + 0x24) = 0xffffffff;
    if ((int)uVar1 < (int)param_1[1]) {
      *(uint *)(*(longlong *)(*param_1 + (longlong)(int)uVar1 * 8) + 0x24) = uVar1;
    }
    plVar2 = (longlong *)*param_2;
    if (plVar2 != (longlong *)0x0) {
      *(undefined8 *)(*(longlong *)(*plVar2 + 0x1e8) + (longlong)(int)plVar2[1] * 8) = 0;
      *param_2 = 0;
    }
    *(undefined8 *)((longlong)param_2 + 0x2c) = 0;
    *(undefined4 *)(param_2 + 4) = 0xffffffff;
    *(undefined4 *)(param_2 + 9) = 0xffffffff;
    iVar3 = (int)param_1[3];
    *(uint *)(param_1 + 3) = iVar3 + 1U;
    if (*(uint *)((longlong)param_1 + 0x1c) < iVar3 + 1U) {
      FUN_140479b38(param_1 + 2,iVar3);
    }
    *(longlong **)(param_1[2] + (longlong)iVar3 * 8) = param_2;
  }
  return;
}



// FUNCTION 140782b7e FUN_140782b7e body=257 status=ok
// SIG undefined FUN_140782b7e(void)

void FUN_140782b7e(longlong param_1)

{
  undefined1 auStack_78 [32];
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = (float)(*(double *)(param_1 + 0x1c8) - *(double *)(param_1 + 0x1e0));
  local_54 = (float)(*(double *)(param_1 + 0x1c0) - *(double *)(param_1 + 0x1d8));
  local_58 = (float)(*(double *)(param_1 + 0x1b8) - *(double *)(param_1 + 0x1d0));
  local_44 = (float)(*(double *)(param_1 + 0x1c8) + *(double *)(param_1 + 0x1e0));
  local_48 = (float)(*(double *)(param_1 + 0x1c0) + *(double *)(param_1 + 0x1d8));
  local_4c = (float)(*(double *)(param_1 + 0x1b8) + *(double *)(param_1 + 0x1d0));
  FUN_140782c80(param_1 + 0x970,param_1 + 0x100);
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140782c80 FUN_140782c80 body=193 status=ok
// SIG undefined FUN_140782c80(void)

void FUN_140782c80(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  int iVar10;
  
  FUN_140250f60();
  uVar7 = *(uint *)((longlong)param_1 + 0xdc);
  iVar10 = 0;
  if ((int)uVar7 < 1) {
    *(undefined4 *)(param_1 + 0x1b) = 0;
    FUN_140250e1e(param_1 + 0x1a,1);
    iVar10 = *(int *)(param_1 + 0x1b);
    uVar7 = *(uint *)((longlong)param_1 + 0xdc);
  }
  *(uint *)(param_1 + 0x1b) = iVar10 + 1U;
  if (uVar7 < iVar10 + 1U) {
    FUN_14026f43e(param_1 + 0x1a,iVar10);
  }
  lVar1 = param_1[0x1a];
  lVar8 = (longlong)iVar10 * 0x30;
  uVar2 = *param_1;
  uVar3 = param_1[1];
  uVar4 = param_1[2];
  uVar5 = param_1[3];
  uVar6 = param_1[5];
  puVar9 = (undefined8 *)(lVar1 + 0x20 + lVar8);
  *puVar9 = param_1[4];
  puVar9[1] = uVar6;
  puVar9 = (undefined8 *)(lVar1 + 0x10 + lVar8);
  *puVar9 = uVar4;
  puVar9[1] = uVar5;
  *(undefined8 *)(lVar1 + lVar8) = uVar2;
  ((undefined8 *)(lVar1 + lVar8))[1] = uVar3;
  puVar9 = param_1 + 9;
  if ((undefined8 *)param_1[0xc] != (undefined8 *)0x0) {
    puVar9 = (undefined8 *)param_1[0xc];
  }
  puVar9[2] = param_3[2];
  uVar2 = param_3[1];
  *puVar9 = *param_3;
  puVar9[1] = uVar2;
  return;
}



// FUNCTION 140782d72 FUN_140782d72 body=74 status=ok
// SIG undefined FUN_140782d72(void)

void FUN_140782d72(undefined8 param_1,longlong param_2)

{
  FUN_140782dbc(*(undefined8 *)(param_2 + 0x30),*(undefined4 *)(param_2 + 0x38));
  if (*(longlong *)(param_2 + 0x30) != 0) {
    FUN_1400020a8();
  }
  if ((*(longlong *)(param_2 + 0x28) != 0) && ((DAT_14cb26569 & 1) != 0)) {
    FUN_1400848c0(*(undefined8 *)(*(longlong *)(param_2 + 0x28) + 0x50));
    return;
  }
  return;
}



// FUNCTION 140782dbc FUN_140782dbc body=104 status=ok
// SIG undefined FUN_140782dbc(void)

void FUN_140782dbc(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 0x40);
    do {
      if ((*plVar4 != 0) && ((DAT_14cb26569 & 1) != 0)) {
        FUN_1400848c0(*(undefined8 *)(*plVar4 + 0x50));
      }
      plVar3 = (longlong *)plVar4[-7];
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
      plVar4 = plVar4 + 9;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140782e24 FUN_140782e24 body=925 status=ok
// SIG undefined FUN_140782e24(void)

void FUN_140782e24(undefined8 param_1,longlong param_2,undefined4 param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  longlong *plVar5;
  byte bVar6;
  longlong lVar7;
  byte bVar8;
  longlong lVar9;
  undefined1 *puVar10;
  undefined8 *puVar11;
  longlong lVar12;
  undefined8 *puVar13;
  undefined1 auStack_178 [32];
  code **local_158;
  undefined4 local_150;
  undefined4 local_148;
  undefined8 local_140;
  wchar_t *local_138;
  code *local_130;
  undefined1 *local_128;
  code **local_120;
  undefined1 *local_118;
  code *local_110;
  code *local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined1 local_a8;
  undefined4 local_a4;
  undefined1 local_a0 [32];
  undefined1 *local_80;
  undefined8 local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_178;
  FUN_144909668();
  if (param_2 != 0) {
    lVar7 = FUN_1407831c2();
    if ((((*(int *)(lVar7 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
           (longlong)*(int *)(lVar7 + 0x38) * 8) == lVar7 + 0x30)) &&
        (lVar7 = *(longlong *)(param_2 + 0x630), lVar7 != 0)) &&
       (bVar6 = *(byte *)(lVar7 + 0x79), (bVar6 & 6) != 0)) {
      if ((bVar6 & 2) != 0) {
        bVar6 = bVar6 & 0xfd;
        *(byte *)(lVar7 + 0x79) = bVar6;
        iVar4 = *(int *)(lVar7 + 0xa8);
        if ((longlong)iVar4 != 0) {
          lVar9 = *(longlong *)(lVar7 + 0xa0);
          lVar12 = 0;
          do {
            plVar5 = *(longlong **)(lVar9 + lVar12);
            bVar8 = *(byte *)(plVar5 + 4);
            if ((bVar8 & 8) != 0) {
              (**(code **)(*plVar5 + 8))(plVar5,lVar7,*(undefined1 *)(lVar7 + 0x7a));
              bVar6 = *(byte *)(lVar7 + 0x79) & 0xfd |
                      ((*(byte *)(lVar7 + 0x79) & 2) != 0 || (*(byte *)(plVar5 + 4) & 8) != 0) *
                      '\x02';
              *(byte *)(lVar7 + 0x79) = bVar6;
              bVar8 = *(byte *)(plVar5 + 4);
            }
            if ((bVar8 & 0x10) != 0) {
              (**(code **)(*plVar5 + 0x10))(plVar5,lVar7,param_3);
              bVar6 = *(byte *)(lVar7 + 0x79) & 0xfd |
                      ((*(byte *)(lVar7 + 0x79) & 2) != 0 || (*(byte *)(plVar5 + 4) & 0x10) != 0) *
                      '\x02';
              *(byte *)(lVar7 + 0x79) = bVar6;
            }
            lVar12 = lVar12 + 8;
          } while ((longlong)iVar4 * 8 != lVar12);
        }
      }
      if ((bVar6 & 4) != 0) {
        *(byte *)(lVar7 + 0x79) = bVar6 & 0xfb;
        local_80 = (undefined1 *)0x0;
        local_78 = 0x400000000;
        FUN_1405b2cf0(lVar7,local_a0,1);
        if ((0 < (int)local_78) && ((longlong)*(int *)(lVar7 + 0xb8) != 0)) {
          puVar13 = *(undefined8 **)(lVar7 + 0xb0);
          puVar11 = (undefined8 *)((longlong)*(int *)(lVar7 + 0xb8) * 0x1c + (longlong)puVar13);
          do {
            if (*(char *)(puVar13 + 3) == '\x01') {
              puVar10 = local_80;
              if (local_80 == (undefined1 *)0x0) {
                puVar10 = local_a0;
              }
              lVar7 = (longlong)(int)local_78;
              if (lVar7 != 0) {
                fVar1 = *(float *)(puVar13 + 2);
                fVar2 = *(float *)(puVar13 + 1);
                fVar3 = *(float *)((longlong)puVar13 + 0xc);
                lVar9 = 0;
                do {
                  lVar12 = *(longlong *)(puVar10 + lVar9);
                  if (lVar12 != 0) {
                    if (DAT_14caec470 == 0) {
                      local_108 = FUN_1417df956;
                      local_110 = FUN_14081d0ea;
                      local_118 = &LAB_1463eaa20;
                      local_120 = &local_108;
                      local_128 = &LAB_147bbd9ea;
                      local_130 = FUN_1401cf6d7;
                      local_138 = L"Engine";
                      local_140 = 0;
                      local_148 = 0x10000000;
                      local_150 = 8;
                      local_158 = (code **)CONCAT44(local_158._4_4_,0x330);
                      FUN_14081cfa3(L"/Script/Engine",L"MaterialInstanceDynamic",&DAT_14caec470,
                                    FUN_1463eb22e);
                    }
                    if ((*(int *)(DAT_14caec470 + 0x38) <=
                         *(int *)(*(longlong *)(lVar12 + 0x10) + 0x38)) &&
                       (*(longlong *)
                         (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x30) +
                         (longlong)*(int *)(DAT_14caec470 + 0x38) * 8) == DAT_14caec470 + 0x30)) {
                      local_b0 = *puVar13;
                      local_a8 = 2;
                      local_a4 = 0xffffffff;
                      local_108 = (code *)((ulonglong)local_108 & 0xffffffffffffff00);
                      local_c0 = 0;
                      uStack_b8 = 0;
                      local_d0 = 0;
                      uStack_c8 = 0;
                      local_e0 = 0;
                      uStack_d8 = 0;
                      local_f0 = 0;
                      uStack_e8 = 0;
                      local_100 = 0;
                      uStack_f8 = 0;
                      local_158 = &local_108;
                      FUN_140042bb4(lVar12,&local_b0,(fVar1 + fVar2) * fVar3,0);
                    }
                  }
                  lVar9 = lVar9 + 8;
                } while (lVar7 * 8 != lVar9);
              }
              *(undefined1 *)(puVar13 + 3) = 0;
              puVar13[1] = 0x3f80000000000000;
              *(undefined4 *)(puVar13 + 2) = *(undefined4 *)((longlong)puVar13 + 0x14);
            }
            puVar13 = (undefined8 *)((longlong)puVar13 + 0x1c);
          } while (puVar13 != puVar11);
        }
        if (local_80 != (undefined1 *)0x0) {
          FUN_1400020a8();
        }
      }
    }
  }
  if ((local_70 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407831c2 FUN_1407831c2 body=228 status=ok
// SIG undefined FUN_1407831c2(void)

longlong FUN_1407831c2(void)

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
  if (DAT_14cb69cb0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1433d5220;
    local_20 = FUN_142b32f24;
    local_28 = &LAB_1464cf67c;
    local_38 = &LAB_148758c3f;
    local_40 = FUN_14097c2cd;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000008;
    local_60 = 0x10;
    local_68 = 0x640;
    FUN_14081cfa3(L"/Script/GbxGame",L"InventoryBodyAnimInstance",&DAT_14cb69cb0,&DAT_148758c3e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb69cb0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407832a8 FUN_1407832a8 body=192 status=ok
// SIG undefined FUN_1407832a8(void)

void FUN_1407832a8(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  byte *pbVar1;
  float fVar2;
  char cVar3;
  longlong *plVar4;
  byte bVar5;
  longlong lVar6;
  
  pbVar1 = (byte *)(param_1 + 0x20);
  bVar5 = *(byte *)(param_1 + 0x20) & 0xf7;
  *(byte *)(param_1 + 0x20) = bVar5;
  plVar4 = *(longlong **)(param_1 + 0x38);
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x18))(plVar4,param_2,pbVar1,param_3);
    bVar5 = *pbVar1;
  }
  if (((bVar5 & 0x20) != 0) ||
     (fVar2 = *(float *)(*(longlong *)(param_1 + 0x50) + 0x54), fVar2 < 0.0001)) {
    *(byte *)(param_1 + 0x20) = bVar5 & 0xdd;
    *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 0x30);
    lVar6 = FUN_14078431e(param_2,*(longlong *)(param_1 + 0x50) + 0x48);
    if (lVar6 != 0) {
      fVar2 = *(float *)(param_1 + 0x60);
      cVar3 = *(char *)(*(longlong *)(param_1 + 0x50) + 0x50);
      *(undefined1 *)(lVar6 + 0x18) = 1;
      if (cVar3 == '\0') {
        *(float *)(lVar6 + 8) = fVar2 + *(float *)(lVar6 + 8);
      }
      else if (cVar3 == '\x02') {
        *(float *)(lVar6 + 0x10) = fVar2;
      }
      else if (cVar3 == '\x01') {
        *(float *)(lVar6 + 0xc) = fVar2 * *(float *)(lVar6 + 0xc);
      }
    }
  }
  else if (0.0001 < fVar2) {
    *pbVar1 = bVar5 | 0x10;
  }
  return;
}



// FUNCTION 140783368 FUN_140783368 body=1557 status=ok
// SIG undefined FUN_140783368(void)

void FUN_140783368(longlong param_1,longlong *param_2,undefined1 param_3)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  double dVar7;
  byte bVar8;
  char cVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong lVar13;
  byte bVar14;
  float fVar15;
  float fVar16;
  undefined1 auVar17 [16];
  double dVar18;
  float fVar19;
  
  if ((*(int *)(param_1 + 0x70) != 0) &&
     (plVar4 = *(longlong **)(param_1 + 0x38), plVar4 != (longlong *)0x0)) {
    pbVar1 = (byte *)(param_1 + 0x20);
    bVar2 = *(byte *)(plVar4 + 3);
    bVar14 = *pbVar1;
    if ((bVar14 & 0x40) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x50);
      if ((((*(byte *)(lVar5 + 0x60) & 8) != 0) && (0.0 < *(float *)(lVar5 + 0x68))) &&
         (*(char *)(lVar5 + 0x1e8) == '\x02')) {
        dVar18 = ABS(*(double *)(lVar5 + 400));
        if (ABS(*(double *)(lVar5 + 400)) <= ABS(*(double *)(lVar5 + 0x198))) {
          dVar18 = ABS(*(double *)(lVar5 + 0x198));
        }
        if (dVar18 <= ABS(*(double *)(lVar5 + 0x1a0))) {
          dVar18 = ABS(*(double *)(lVar5 + 0x1a0));
        }
        if (0.0 < (float)dVar18) {
          lVar5 = **(longlong **)(param_1 + 0x68);
          dVar7 = ABS(*(double *)(lVar5 + 0x418));
          if (ABS(*(double *)(lVar5 + 0x418)) <= ABS(*(double *)(lVar5 + 0x420))) {
            dVar7 = ABS(*(double *)(lVar5 + 0x420));
          }
          if (dVar7 <= ABS(*(double *)(lVar5 + 0x428))) {
            dVar7 = ABS(*(double *)(lVar5 + 0x428));
          }
          fVar16 = (float)dVar7 / (float)dVar18;
          auVar17 = roundps(ZEXT416((uint)fVar16),ZEXT416((uint)fVar16),2);
          *(int *)(param_1 + 0x28) = auVar17._0_4_;
        }
      }
      bVar14 = bVar14 & 0xbf;
      *pbVar1 = bVar14;
    }
    (**(code **)(*plVar4 + 0x18))();
    iVar3 = *(int *)(param_1 + 0x70);
    if ((longlong)iVar3 != 0) {
      lVar5 = *(longlong *)(param_1 + 0x68);
      lVar13 = 0;
      do {
        lVar12 = *(longlong *)(lVar5 + lVar13);
        *(undefined4 *)(lVar12 + 0xd8) = *(undefined4 *)(param_1 + 0x30);
        if ((bVar14 & 6) == 4) {
          if ((*(byte *)(*(longlong *)(param_1 + 0x50) + 0x60) & 3) == 1) {
            if (((*(char *)(lVar12 + 0x1b0) == '\0') && (*(char *)(lVar12 + 0x2a8) == '\0')) &&
               (*(char *)(lVar12 + 0x3a0) == '\0')) {
              bVar8 = 1;
            }
            else {
              bVar8 = *(byte *)(lVar12 + 0xdc) ^ 1;
            }
            *pbVar1 = *pbVar1 & 0xfd | bVar8 * '\x02';
            *(undefined4 *)(lVar12 + 0xf8) = 0x3f800000;
            if ((*pbVar1 & 2) == 0) {
              *(undefined1 *)(lVar12 + 0xdc) = 0;
              *(undefined1 *)(lVar12 + 0xdf) = 1;
              if (0.0 < *(float *)(param_1 + 0x28)) {
                *(float *)(lVar12 + 0xf8) = *(float *)(param_1 + 0x28);
              }
            }
          }
        }
        else {
          fVar16 = *(float *)(param_1 + 0x34);
          if ((fVar16 != 0.0) || (NAN(fVar16))) {
            fVar16 = fVar16 + *(float *)(lVar12 + 0x3f8);
            fVar15 = *(float *)(lVar12 + 0x3e4);
            if (fVar15 <= 0.0 || fVar16 <= fVar15) {
              fVar15 = fVar16;
            }
            *(float *)(lVar12 + 0x3f8) = fVar15;
            *(uint *)(lVar12 + 0x460) = *(uint *)(lVar12 + 0x460) & 0xfffffff9 | 2;
          }
        }
        *(byte *)(lVar12 + 0xde) = *(byte *)(param_1 + 0x20) & 1;
        lVar6 = *(longlong *)(param_1 + 0x50);
        if ((*(byte *)(lVar6 + 0x60) & 8) != 0) {
          fVar15 = (float)(**(code **)(*param_2 + 8))(param_2,param_3);
          fVar16 = *(float *)(lVar6 + 100);
          if (fVar16 <= fVar15) {
            fVar16 = *(float *)(lVar6 + 0x68);
            fVar19 = fVar16;
            if (fVar15 <= fVar16) {
              fVar19 = fVar15;
            }
            fVar16 = (float)(~-(uint)(0.0 < fVar16) & (uint)fVar15 |
                            (uint)fVar19 & -(uint)(0.0 < fVar16));
          }
          *(float *)(lVar12 + 0xf4) = fVar16;
        }
        if ((*pbVar1 & 2) == 0) {
          if ((bVar14 & 0x20) != 0) {
            FUN_14078468a(lVar12);
          }
        }
        else {
          FUN_145743682(lVar12);
          if ((*(float *)(lVar12 + 0xd8) != 0.0) || (NAN(*(float *)(lVar12 + 0xd8)))) {
            FUN_14078468a(lVar12);
          }
          *pbVar1 = *pbVar1 & 0xfd;
        }
        lVar13 = lVar13 + 8;
      } while ((longlong)iVar3 * 8 != lVar13);
    }
    if ((bVar14 & 6) == 4) {
      *(undefined4 *)(param_1 + 0x28) = 0;
    }
    else {
      *(undefined4 *)(param_1 + 0x34) = 0;
    }
    bVar14 = *(byte *)(param_1 + 0x20);
    *(byte *)(param_1 + 0x20) = bVar14 & 0xdf;
    *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(**(longlong **)(param_1 + 0x68) + 0xd8);
    *(byte *)(param_1 + 0x20) = bVar14 & 0xd7 | (bVar2 & 1) << 3;
    if (param_2 != (longlong *)0x0) {
      lVar5 = *(longlong *)(param_1 + 0x50);
      lVar13 = *(longlong *)(lVar5 + 0x368);
      if (lVar13 == 0) {
        uVar10 = FUN_1407f787c();
        lVar13 = FUN_14477b664(uVar10);
        *(longlong *)(lVar5 + 0x368) = lVar13;
      }
      if (*(longlong *)(lVar5 + 0x370) == 0) {
        if (*(longlong *)(lVar5 + 0x360) == 0) {
          return;
        }
        if (lVar13 == 0) {
          return;
        }
        plVar4 = *(longlong **)(lVar13 + 0xb8);
        if ((plVar4 == (longlong *)0x0) ||
           (cVar9 = (**(code **)(*plVar4 + 0x108))(plVar4), cVar9 == '\0')) {
          *(undefined8 *)(lVar5 + 0x370) = 0;
          return;
        }
        uVar10 = (**(code **)(*plVar4 + 0x110))(plVar4);
        lVar13 = FUN_144aff482(uVar10,(longlong *)(lVar5 + 0x360));
        *(longlong *)(lVar5 + 0x370) = lVar13;
        if (lVar13 == 0) {
          return;
        }
      }
      fVar16 = *(float *)(param_1 + 0x30);
      if (0.0 < fVar16) {
        *(undefined1 *)(param_1 + 0x48) = 1;
        lVar5 = *(longlong *)(param_1 + 0x50);
        lVar13 = *(longlong *)(lVar5 + 0x368);
        uVar10 = *(undefined8 *)(lVar5 + 0x378);
        if (lVar13 == 0) {
          uVar11 = FUN_1407f787c();
          lVar13 = FUN_14477b664(uVar11);
          *(longlong *)(lVar5 + 0x368) = lVar13;
        }
        lVar12 = *(longlong *)(lVar5 + 0x370);
        if (((lVar12 == 0) && (lVar12 = 0, lVar13 != 0)) && (*(longlong *)(lVar5 + 0x360) != 0)) {
          plVar4 = *(longlong **)(lVar13 + 0xb8);
          if ((plVar4 == (longlong *)0x0) ||
             (cVar9 = (**(code **)(*plVar4 + 0x108))(plVar4), cVar9 == '\0')) {
            lVar12 = 0;
          }
          else {
            uVar11 = (**(code **)(*plVar4 + 0x110))(plVar4);
            lVar12 = FUN_144aff482(uVar11,(longlong *)(lVar5 + 0x360));
          }
          *(longlong *)(lVar5 + 0x370) = lVar12;
        }
        FUN_1407841da(param_2,lVar12,fVar16,uVar10);
        return;
      }
      if (*(char *)(param_1 + 0x48) == '\x01') {
        lVar5 = *(longlong *)(param_1 + 0x50);
        lVar13 = *(longlong *)(lVar5 + 0x368);
        uVar10 = *(undefined8 *)(lVar5 + 0x378);
        if (lVar13 == 0) {
          uVar11 = FUN_1407f787c();
          lVar13 = FUN_14477b664(uVar11);
          *(longlong *)(lVar5 + 0x368) = lVar13;
        }
        lVar12 = *(longlong *)(lVar5 + 0x370);
        if (((lVar12 == 0) && (lVar12 = 0, lVar13 != 0)) && (*(longlong *)(lVar5 + 0x360) != 0)) {
          plVar4 = *(longlong **)(lVar13 + 0xb8);
          if ((plVar4 == (longlong *)0x0) ||
             (cVar9 = (**(code **)(*plVar4 + 0x108))(plVar4), cVar9 == '\0')) {
            lVar12 = 0;
          }
          else {
            uVar11 = (**(code **)(*plVar4 + 0x110))(plVar4);
            lVar12 = FUN_144aff482(uVar11,(longlong *)(lVar5 + 0x360));
          }
          *(longlong *)(lVar5 + 0x370) = lVar12;
        }
        FUN_1407841da(param_2,lVar12,0,uVar10);
        *(undefined1 *)(param_1 + 0x48) = 0;
      }
    }
  }
  return;
}



// FUNCTION 14078397e FUN_14078397e body=2101 status=ok
// SIG undefined FUN_14078397e(void)

void FUN_14078397e(longlong param_1,longlong param_2,ulonglong *param_3,uint param_4)

{
  int *piVar1;
  longlong *plVar2;
  float fVar3;
  byte bVar4;
  byte bVar5;
  code *pcVar6;
  longlong *plVar7;
  ulonglong uVar8;
  char cVar9;
  int iVar10;
  undefined8 uVar11;
  longlong lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  longlong lVar15;
  int iVar16;
  undefined *puVar17;
  uint uVar18;
  ulonglong *puVar19;
  float *pfVar20;
  longlong lVar21;
  float *pfVar22;
  float fVar23;
  float fVar24;
  undefined1 auStack_198 [32];
  undefined4 local_178;
  ulonglong *local_170;
  undefined8 local_168;
  byte local_159;
  longlong local_158;
  float local_150;
  undefined4 uStack_14c;
  ushort local_138;
  byte local_130;
  float local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  longlong local_100;
  ulonglong local_f8 [2];
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  ulonglong uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined2 local_90;
  undefined8 local_8c;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_198;
  bVar4 = *(byte *)(param_1 + 0x18);
  bVar5 = (byte)*param_3;
  if ((bVar5 & 2) != 0) {
    *(byte *)param_3 = bVar5 & 0xfb;
    fVar3 = *(float *)(param_3 + 1);
    if (((((*(byte *)(param_1 + 0x100) & 1) == 0) ||
         (fVar24 = *(float *)(param_1 + 0x104), *(float *)(param_1 + 0x104) <= fVar3)) &&
        (fVar24 = fVar3, (*(byte *)(param_1 + 0x100) & 2) != 0)) &&
       (*(float *)(param_1 + 0x108) < fVar3)) {
      fVar24 = *(float *)(param_1 + 0x108);
    }
    *(float *)(param_3 + 2) = fVar24;
    if (*(char *)(param_1 + 0x1c) != '\x01') {
      *(undefined4 *)(param_3 + 1) = 0;
    }
    goto LAB_140783adb;
  }
  if ((bVar5 & 4) != 0) {
    *(byte *)param_3 = bVar5 & 0xf9;
    *(undefined4 *)(param_3 + 2) = 0;
    *(undefined4 *)(param_3 + 1) = 0;
    goto LAB_140783adb;
  }
  fVar3 = *(float *)(param_3 + 2);
  puVar19 = param_3;
  if ((*(uint *)(param_1 + 0x70) == 0) || ((*(uint *)(param_1 + 0x70) >> (param_4 & 0x1f) & 1) != 0)
     ) {
    if (*(char *)(param_1 + 0x1c) == '\x01') {
      fVar24 = *(float *)(param_3 + 1);
      if ((((*(byte *)(param_1 + 0x100) & 1) == 0) ||
          (fVar23 = *(float *)(param_1 + 0x104), *(float *)(param_1 + 0x104) <= fVar24)) &&
         ((fVar23 = fVar24, (*(byte *)(param_1 + 0x100) & 2) != 0 &&
          (*(float *)(param_1 + 0x108) < fVar24)))) {
        fVar23 = *(float *)(param_1 + 0x108);
      }
      *(float *)(param_3 + 2) = fVar23;
    }
    else {
      puVar19 = local_f8;
      local_f8[0] = local_f8[0] & 0xffffffffffffff00;
      uStack_d0 = uStack_d0 & 0xffffffff00000000;
      FUN_1456bb102(puVar19,*(undefined8 *)(param_2 + 0x40));
      pfVar20 = &local_150;
      FUN_1448729ea(param_1 + 0xb0,pfVar20,puVar19);
      fVar24 = local_150;
      if (local_130 != 3) {
        pfVar22 = &local_128;
        puVar19 = (ulonglong *)CONCAT71((int7)((ulonglong)puVar19 >> 8),3);
        FUN_1400b56fe(pfVar22,&local_150,puVar19);
        fVar24 = 0.0;
        if ((byte)local_108 != 0) {
          fVar24 = local_128;
        }
        pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)(byte)local_108 * 0x120));
        if (pcVar6 != (code *)0x0) {
          if (0x18 < (ushort)local_110) {
            pfVar22 = (float *)CONCAT44(uStack_124,local_128);
          }
          (*pcVar6)(pfVar22);
        }
        if (0x18 < (ushort)local_110) {
          FUN_1400020a8(CONCAT44(uStack_124,local_128));
        }
      }
      if (((((*(byte *)(param_1 + 0x100) & 1) == 0) ||
           (fVar23 = *(float *)(param_1 + 0x104), fVar23 <= fVar24)) &&
          (fVar23 = fVar24, (*(byte *)(param_1 + 0x100) & 2) != 0)) &&
         (*(float *)(param_1 + 0x108) < fVar24)) {
        fVar23 = *(float *)(param_1 + 0x108);
      }
      *(float *)(param_3 + 2) = fVar23;
      pcVar6 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_130 * 0x120));
      if (pcVar6 != (code *)0x0) {
        if (0x18 < local_138) {
          pfVar20 = (float *)CONCAT44(uStack_14c,local_150);
        }
        (*pcVar6)(pfVar20);
      }
      if (0x18 < local_138) {
        FUN_1400020a8(CONCAT44(uStack_14c,local_150));
      }
      lVar12 = DAT_14c9a3da0;
      if ((longlong)(int)uStack_d0 != 0) {
        lVar15 = (longlong)(int)uStack_d0 + -1;
        lVar21 = lVar15 * 0x10;
        FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar21),
                      *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar21));
        if (*(longlong *)(lVar12 + lVar21) != 0) {
          FUN_1400020a8();
        }
        lVar12 = DAT_14c9a3da0;
        iVar10 = (int)lVar15;
        if (DAT_14c9a3dd4 != 0) {
          *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar10;
        }
        *(undefined4 *)(lVar12 + lVar21) = 0xffffffff;
        iVar16 = -1;
        if (0 < DAT_14c9a3dd4) {
          iVar16 = DAT_14c9a3dd0;
        }
        *(int *)(lVar12 + 4 + lVar21) = iVar16;
        DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
        puVar17 = &DAT_14c9a3db0;
        if (DAT_14c9a3dc0 != (undefined *)0x0) {
          puVar17 = DAT_14c9a3dc0;
        }
        iVar16 = iVar10 + 0x1f;
        if (-1 < iVar10) {
          iVar16 = iVar10;
        }
        bVar5 = (byte)lVar15 & 0x1f;
        uVar18 = -2 << bVar5 | 0xfffffffeU >> 0x20 - bVar5;
        puVar19 = (ulonglong *)(ulonglong)uVar18;
        DAT_14c9a3dd0 = iVar10;
        *(uint *)(puVar17 + (longlong)(iVar16 >> 5) * 4) =
             *(uint *)(puVar17 + (longlong)(iVar16 >> 5) * 4) & uVar18;
        uStack_d0 = uStack_d0 & 0xffffffff00000000;
      }
      if (((char)local_f8[0] == '\x03') &&
         (plVar2 = (longlong *)CONCAT44(uStack_e4,local_e8), plVar2 != (longlong *)0x0)) {
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar2 + 0x10))();
        }
      }
      fVar24 = *(float *)(param_3 + 1);
      if ((fVar24 != 0.0) || (NAN(fVar24))) {
        *(float *)((longlong)param_3 + 0x14) = fVar24 + *(float *)((longlong)param_3 + 0x14);
        *(undefined4 *)(param_3 + 1) = 0;
      }
    }
  }
  else {
    *(undefined4 *)(param_3 + 2) = 0;
  }
  if (((*(float *)(param_3 + 2) == fVar3) && (!NAN(*(float *)(param_3 + 2)) && !NAN(fVar3))) ||
     ((*param_3 & 0x20) != 0)) goto LAB_140783adb;
  lVar12 = *(longlong *)(param_1 + 0x98);
  if (lVar12 == 0) {
    uVar11 = FUN_1407f787c();
    lVar12 = FUN_14477b664(uVar11);
    *(longlong *)(param_1 + 0x98) = lVar12;
  }
  plVar2 = (longlong *)(param_1 + 0x90);
  if (*(longlong *)(param_1 + 0xa0) == 0) {
    if ((*plVar2 != 0) && (lVar12 != 0)) {
      plVar7 = *(longlong **)(lVar12 + 0xb8);
      if ((plVar7 == (longlong *)0x0) ||
         (cVar9 = (**(code **)(*plVar7 + 0x108))(plVar7), cVar9 == '\0')) {
        *(undefined8 *)(param_1 + 0xa0) = 0;
      }
      else {
        uVar11 = (**(code **)(*plVar7 + 0x110))(plVar7);
        lVar12 = FUN_144aff482(uVar11,plVar2);
        *(longlong *)(param_1 + 0xa0) = lVar12;
        if (lVar12 != 0) {
          lVar12 = *(longlong *)(param_1 + 0x98);
          goto LAB_1407840b8;
        }
      }
    }
    if ((*(longlong *)(param_2 + 0x48) != 0) && (*(longlong *)(param_2 + 0x40) != 0)) {
      bVar5 = *(byte *)(param_1 + 0xa8);
      lVar12 = *(longlong *)(param_1 + 0x80);
      if (lVar12 == 0) {
        uVar11 = FUN_140067708();
        lVar12 = FUN_14477b664(uVar11);
        *(longlong *)(param_1 + 0x80) = lVar12;
      }
      plVar2 = (longlong *)(param_1 + 0x78);
      lVar15 = *(longlong *)(param_1 + 0x88);
      if (lVar15 == 0) {
        if ((lVar12 == 0) || (*plVar2 == 0)) goto LAB_140783adb;
        plVar7 = *(longlong **)(lVar12 + 0xb8);
        if ((plVar7 == (longlong *)0x0) ||
           (cVar9 = (**(code **)(*plVar7 + 0x108))(plVar7), cVar9 == '\0')) {
          *(undefined8 *)(param_1 + 0x88) = 0;
          goto LAB_140783adb;
        }
        uVar11 = (**(code **)(*plVar7 + 0x110))(plVar7);
        lVar15 = FUN_144aff482(uVar11,plVar2);
        *(longlong *)(param_1 + 0x88) = lVar15;
        if (lVar15 == 0) goto LAB_140783adb;
        lVar12 = *(longlong *)(param_1 + 0x80);
      }
      if (lVar12 == 0) {
        uVar11 = FUN_140067708();
        lVar12 = FUN_14477b664(uVar11);
        *(longlong *)(param_1 + 0x80) = lVar12;
        lVar15 = *(longlong *)(param_1 + 0x88);
        if (((lVar15 == 0) && (lVar15 = 0, lVar12 != 0)) && (*plVar2 != 0)) {
          plVar7 = *(longlong **)(lVar12 + 0xb8);
          if ((plVar7 == (longlong *)0x0) ||
             (cVar9 = (**(code **)(*plVar7 + 0x108))(plVar7), cVar9 == '\0')) {
            lVar15 = 0;
          }
          else {
            uVar11 = (**(code **)(*plVar7 + 0x110))(plVar7);
            lVar15 = FUN_144aff482(uVar11,plVar2);
          }
          *(longlong *)(param_1 + 0x88) = lVar15;
        }
      }
      iVar10 = _finite((double)*(float *)(lVar15 + 0x48));
      if ((iVar10 != 0) && (*(char *)(lVar15 + 0x41) == '\0')) {
        local_159 = bVar5 & 1;
        local_f8[0] = 0;
        local_f8[1] = 0;
        local_e8 = 0;
        uStack_e4 = 0;
        uStack_e0 = 0;
        uStack_dc = 0x3ff00000;
        local_d8 = 0;
        uStack_d0 = 0;
        local_c8 = 0;
        uStack_c0 = 0;
        local_b8 = 0;
        uStack_b4 = 0x3ff00000;
        uStack_b0 = 0;
        uStack_ac = 0x3ff00000;
        local_a8 = 0x3ff0000000000000;
        uStack_a0 = 0;
        local_98 = 0x3f800000;
        local_90 = 0;
        local_8c = 0;
        local_158 = param_2 + 0xc;
        uVar11 = *(undefined8 *)(param_1 + 0x78);
        uVar13 = FUN_14477b664(*(undefined8 *)(param_1 + 0x80));
        uVar14 = FUN_14477b664(uVar13);
        uVar13 = *(undefined8 *)(param_1 + 0x88);
        local_128 = (float)((uint)local_128 & 0xffffff00);
        uStack_124 = 0;
        uStack_120 = 0;
        local_118 = uVar11;
        uVar11 = FUN_14477b664(uVar14);
        local_110 = FUN_14477b664(uVar11);
        local_100 = 0;
        local_168 = 0;
        local_178 = CONCAT31(local_178._1_3_,local_159);
        local_170 = local_f8;
        local_108 = uVar13;
        FUN_140b3303c(&local_150,*(undefined8 *)(param_2 + 0x40),&local_128,local_158);
        if ((local_100 != 0) && ((DAT_14cb26569 & 1) != 0)) {
          FUN_1400848c0(*(undefined8 *)(local_100 + 0x50));
        }
      }
    }
  }
  else {
LAB_1407840b8:
    uVar8 = param_3[2];
    if (lVar12 == 0) {
      uVar11 = FUN_1407f787c();
      lVar12 = FUN_14477b664(uVar11);
      *(longlong *)(param_1 + 0x98) = lVar12;
      if (((*(longlong *)(param_1 + 0xa0) == 0) && (lVar12 != 0)) && (*plVar2 != 0)) {
        plVar7 = *(longlong **)(lVar12 + 0xb8);
        if ((plVar7 == (longlong *)0x0) ||
           (cVar9 = (**(code **)(*plVar7 + 0x108))(plVar7), cVar9 == '\0')) {
          uVar11 = 0;
        }
        else {
          uVar11 = (**(code **)(*plVar7 + 0x110))(plVar7);
          uVar11 = FUN_144aff482(uVar11,plVar2);
        }
        *(undefined8 *)(param_1 + 0xa0) = uVar11;
      }
    }
    local_178 = (int)uVar8;
    FUN_1488c327a(param_2,param_1 + 0x78,
                  CONCAT71((int7)((ulonglong)puVar19 >> 8),*(undefined1 *)(param_1 + 0xa8)) &
                  0xffffffffffffff01);
  }
LAB_140783adb:
  *(byte *)param_3 = (byte)*param_3 & 0xf7 | (bVar4 & 1) << 3;
  if ((local_70 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1407841da FUN_1407841da body=323 status=ok
// SIG undefined FUN_1407841da(void)

void FUN_1407841da(longlong param_1,longlong param_2,undefined4 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  longlong *local_48;
  longlong local_40;
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (((*(longlong *)(param_1 + 0x48) == 0) || (param_2 == 0)) ||
     (*(longlong *)(param_1 + 0x40) == 0)) goto LAB_14078429f;
  FUN_14026e798(&local_40);
  if (local_40 != 0) {
    FUN_1403c747e(local_40,&local_48,param_4);
    if (local_48 != (longlong *)0x0) {
      local_58 = 0;
      FUN_1447997cc(local_48,param_2,param_3,0);
      if ((local_48 != (longlong *)0x0) &&
         (*(int *)(local_48 + 0x21) = (int)local_48[0x21] + -1, (int)local_48[0x26] < 1)) {
        FUN_1400847bc(local_48 + 0x17,0);
        if ((int)local_48[0x21] == 0) {
          FUN_140087e46(local_48);
          if (*local_48 != -1) {
            if (DAT_14cb259f8 == 0) goto LAB_14078428f;
            FUN_14033a6c8(*(undefined8 *)(DAT_14cb259f8 + 0x40),local_48);
          }
          if (DAT_14cb259f8 != 0) {
            FUN_14008869e(*(undefined8 *)(DAT_14cb259f8 + 0x30),local_48);
          }
        }
      }
    }
  }
LAB_14078428f:
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
LAB_14078429f:
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14078431e FUN_14078431e body=847 status=ok
// SIG undefined FUN_14078431e(void)

longlong * FUN_14078431e(longlong param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  char cVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  longlong *plVar9;
  longlong *plVar10;
  ulonglong uVar11;
  undefined4 uVar12;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined4 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  wchar_t *local_b8;
  code *local_b0;
  undefined1 *local_a8;
  code **local_a0;
  undefined1 *local_98;
  code *local_90;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined1 local_78;
  undefined4 local_74;
  longlong local_70;
  code *local_68;
  undefined4 *local_60;
  undefined1 local_48;
  undefined4 local_40;
  undefined1 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  *(byte *)(param_1 + 0x79) = *(byte *)(param_1 + 0x79) | 4;
  uVar1 = *(uint *)(param_1 + 0xb8);
  uVar11 = (ulonglong)uVar1;
  if (0 < (longlong)(int)uVar1) {
    plVar10 = *(longlong **)(param_1 + 0xb0);
    do {
      if (*plVar10 == *param_2) goto LAB_14078436e;
      plVar10 = (longlong *)((longlong)plVar10 + 0x1c);
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  *(uint *)(param_1 + 0xb8) = uVar1 + 1;
  if (*(uint *)(param_1 + 0xbc) < uVar1 + 1) {
    FUN_140784a96((undefined8 *)(param_1 + 0xb0),uVar1);
  }
  lVar6 = *(longlong *)(param_1 + 0xb0);
  lVar2 = (longlong)(int)uVar1 * 0x1c;
  plVar10 = (longlong *)(lVar6 + lVar2);
  FUN_14078466e(plVar10);
  *(longlong *)(lVar6 + lVar2) = *param_2;
  local_70 = *param_2;
  local_74 = 0;
  if (*(int *)(param_1 + 200) != *(int *)(param_1 + 0xf4)) {
    uVar1 = (uint)((ulonglong)local_70 >> 0x10);
    uVar7 = (uint)local_70 & 0xffff;
    lVar6 = param_1 + 0xf8;
    if (*(longlong *)(param_1 + 0x100) != 0) {
      lVar6 = *(longlong *)(param_1 + 0x100);
    }
    iVar8 = *(int *)(lVar6 + (ulonglong)
                             (*(int *)(param_1 + 0x108) - 1U &
                             (int)((ulonglong)local_70 >> 0x20) + ((uint)local_70 << 0x10 | uVar7) +
                             (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar7 >> 4)) * 4);
    if (iVar8 != -1) {
      do {
        plVar4 = (longlong *)(*(longlong *)(param_1 + 0xc0) + (longlong)iVar8 * 0x14);
        if (*plVar4 == local_70) {
          if (plVar4 + 1 != (longlong *)0x0 && plVar4 != (longlong *)0x0) {
            uVar12 = (undefined4)plVar4[1];
            goto LAB_140784518;
          }
          break;
        }
        iVar8 = *(int *)((longlong)plVar4 + 0xc);
      } while (iVar8 != -1);
    }
  }
  plVar4 = (longlong *)FUN_140784a0c(param_1,0);
  if (plVar4 == (longlong *)0x0) {
    uVar12 = 0;
  }
  else {
    if (DAT_14caec470 == 0) {
      local_a0 = &local_68;
      local_68 = FUN_1417df956;
      local_90 = FUN_14081d0ea;
      local_98 = &LAB_1463eaa20;
      local_a8 = &LAB_147bbd9ea;
      local_b0 = FUN_1401cf6d7;
      local_b8 = L"Engine";
      local_c0 = 0;
      local_c8 = 0x10000000;
      local_d0 = 8;
      local_d8 = 0x330;
      FUN_14081cfa3(L"/Script/Engine",L"MaterialInstanceDynamic",&DAT_14caec470,FUN_1463eb22e);
    }
    plVar9 = plVar4;
    if ((*(int *)(DAT_14caec470 + 0x38) <= *(int *)(plVar4[2] + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(plVar4[2] + 0x30) + (longlong)*(int *)(DAT_14caec470 + 0x38) * 8) ==
        DAT_14caec470 + 0x30)) {
      plVar9 = (longlong *)plVar4[0x22];
    }
    puVar5 = (undefined8 *)FUN_1405b2aea(param_1 + 0x120,plVar9,&local_70,0);
    local_88 = (undefined4)*puVar5;
    local_84 = 0;
    local_80 = (undefined4)((ulonglong)*puVar5 >> 0x20);
    local_7c = *(undefined4 *)((longlong)puVar5 + 0xc);
    local_78 = *(undefined1 *)(puVar5 + 1);
    local_48 = 0xff;
    local_40 = 0xffffffff;
    local_3c = 0;
    local_d8 = 3;
    cVar3 = (**(code **)(*plVar4 + 0x3c0))(plVar4,0);
    if (cVar3 != '\0') {
      local_74 = local_68._0_4_;
    }
    local_60 = &local_74;
    local_68 = (code *)&local_70;
    FUN_144a405ac((longlong *)(param_1 + 0xc0),&local_88,&local_68,0);
    uVar12 = local_74;
  }
LAB_140784518:
  *(undefined4 *)((longlong)plVar10 + 0x14) = uVar12;
LAB_14078436e:
  if ((local_38 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar10;
}



// FUNCTION 14078466e FUN_14078466e body=28 status=ok
// SIG undefined FUN_14078466e(void)

void FUN_14078466e(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0x3f80000000000000;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



// FUNCTION 14078468a FUN_14078468a body=310 status=ok
// SIG undefined FUN_14078468a(void)

void FUN_14078468a(longlong param_1)

{
  float fVar1;
  byte bVar2;
  
  *(undefined8 *)(param_1 + 0x3f4) = 0;
  fVar1 = *(float *)(param_1 + 0xd8);
  *(float *)(param_1 + 0x3f0) = fVar1;
  if (*(char *)(param_1 + 0xdd) == '\0') {
    bVar2 = *(byte *)(param_1 + 0xdc);
  }
  else {
    bVar2 = 0.0 < fVar1;
    *(bool *)(param_1 + 0xdc) = 0.0 < fVar1;
  }
  *(uint *)(param_1 + 0x460) = *(uint *)(param_1 + 0x460) & 0xfffffff8 | (uint)bVar2;
  if (*(char *)(param_1 + 0x2e8) != '\0') {
    FUN_140784934(param_1 + 0x430,param_1 + 0x308,param_1 + 0x360,*(undefined4 *)(param_1 + 0xf4),
                  param_1 + 0x308,param_1 + 0x458);
  }
  if (*(char *)(param_1 + 0x1f0) != '\0') {
    FUN_1407847c0(param_1 + 0x418,*(undefined4 *)(param_1 + 0x3f0),param_1 + 0x268,
                  *(undefined4 *)(param_1 + 0xf4),param_1 + 0x210,param_1 + 0x450);
  }
  if (*(char *)(param_1 + 0xfc) != '\0') {
    FUN_140784934(param_1 + 0x400,*(undefined4 *)(param_1 + 0x3f0),param_1 + 0x170,
                  *(undefined4 *)(param_1 + 0xf4),param_1 + 0x118,param_1 + 0x448);
  }
  return;
}



// FUNCTION 1407847c0 FUN_1407847c0 body=215 status=ok
// SIG undefined FUN_1407847c0(void)

void FUN_1407847c0(double *param_1,float param_2,char *param_3,undefined4 param_4,double *param_5,
                  longlong param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  char cVar5;
  
  *(byte *)(param_6 + 4) = *(byte *)(param_6 + 4) & 0xf5;
  dVar1 = *param_5;
  dVar2 = param_5[1];
  dVar3 = param_5[2];
  dVar4 = (double)param_2;
  if ((param_3[0x3c] & 1U) != 0) {
    dVar1 = dVar1 * dVar4;
    dVar2 = dVar2 * dVar4;
    dVar3 = dVar3 * dVar4;
  }
  FUN_140784897(param_2,param_3,param_4,param_6);
  cVar5 = *param_3;
  if (cVar5 != '\x02') {
    if (cVar5 != '\x01') goto LAB_140784843;
    dVar3 = dVar3 * dVar4;
    dVar2 = dVar2 * dVar4;
    dVar1 = dVar1 * dVar4;
  }
  *param_1 = dVar1;
  param_1[1] = dVar2;
  param_1[2] = dVar3;
  cVar5 = *param_3;
LAB_140784843:
  *(byte *)(param_6 + 4) = *(byte *)(param_6 + 4) & 0xfd | (1 < (byte)(cVar5 - 3U)) * '\x02';
  return;
}



// FUNCTION 140784897 FUN_140784897 body=157 status=ok
// SIG undefined FUN_140784897(void)

void FUN_140784897(float param_1,longlong param_2,float param_3,float *param_4)

{
  float fVar1;
  longlong lVar2;
  undefined8 uVar3;
  float fVar4;
  
  fVar4 = *(float *)(param_2 + 8);
  if ((*(byte *)(param_2 + 0x3c) & 2) != 0) {
    fVar1 = *(float *)(param_2 + 4);
    lVar2 = FUN_1447e736e(param_2 + 0x10);
    if (lVar2 != 0) {
      uVar3 = FUN_1447e736e(param_2 + 0x10);
      param_1 = (float)FUN_1449e6cbc(uVar3,param_1);
    }
    fVar4 = (fVar4 - fVar1) * param_1 + fVar1;
  }
  *param_4 = fVar4 * param_3;
  *(byte *)(param_4 + 1) = *(byte *)(param_4 + 1) | 4;
  return;
}



// FUNCTION 140784934 FUN_140784934 body=215 status=ok
// SIG undefined FUN_140784934(void)

void FUN_140784934(double *param_1,float param_2,char *param_3,undefined4 param_4,double *param_5,
                  longlong param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  char cVar5;
  
  *(byte *)(param_6 + 4) = *(byte *)(param_6 + 4) & 0xf5;
  dVar1 = *param_5;
  dVar2 = param_5[1];
  dVar3 = param_5[2];
  dVar4 = (double)param_2;
  if ((param_3[0x3c] & 1U) != 0) {
    dVar1 = dVar1 * dVar4;
    dVar2 = dVar2 * dVar4;
    dVar3 = dVar3 * dVar4;
  }
  FUN_140784897(param_2,param_3,param_4,param_6);
  cVar5 = *param_3;
  if (cVar5 != '\x02') {
    if (cVar5 != '\x01') goto LAB_1407849c3;
    dVar3 = dVar3 * dVar4;
    dVar2 = dVar2 * dVar4;
    dVar1 = dVar1 * dVar4;
  }
  *param_1 = dVar1;
  param_1[1] = dVar2;
  param_1[2] = dVar3;
  cVar5 = *param_3;
LAB_1407849c3:
  *(byte *)(param_6 + 4) = *(byte *)(param_6 + 4) & 0xfd | (1 < (byte)(cVar5 - 3U)) * '\x02';
  return;
}



// FUNCTION 140784a0c FUN_140784a0c body=125 status=ok
// SIG undefined FUN_140784a0c(void)

undefined8 FUN_140784a0c(longlong param_1,char param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar4;
  int iVar5;
  
  plVar1 = *(longlong **)(param_1 + 0x48);
  if ((plVar1 != (longlong *)0x0) && ((*(byte *)(param_1 + 0x78) & 1) == 0)) {
    lVar2 = plVar1[0xc5];
    iVar3 = (**(code **)(*plVar1 + 0x7b0))();
    iVar5 = 0;
    if (iVar3 < (int)lVar2) {
      plVar1 = *(longlong **)(param_1 + 0x48);
      lVar2 = plVar1[0xc5];
      iVar3 = (**(code **)(*plVar1 + 0x7b0))(plVar1,0);
      iVar3 = (int)lVar2 - iVar3;
      iVar5 = 0;
      if (0 < iVar3) {
        iVar5 = iVar3;
      }
    }
    lVar2 = **(longlong **)(param_1 + 0x48);
    if (param_2 == '\0') {
      UNRECOVERED_JUMPTABLE = *(code **)(lVar2 + 0x610);
    }
    else {
      UNRECOVERED_JUMPTABLE = *(code **)(lVar2 + 0x668);
    }
                    /* WARNING: Could not recover jumptable at 0x000140784a55. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (*UNRECOVERED_JUMPTABLE)(*(longlong **)(param_1 + 0x48),iVar5);
    return uVar4;
  }
  return 0;
}



// FUNCTION 140784a8a FUN_140784a8a body=11 status=ok
// SIG undefined FUN_140784a8a(void)

void FUN_140784a8a(undefined4 *param_1)

{
  *param_1 = 0;
  *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) & 0xf0;
  return;
}



// FUNCTION 140784a96 FUN_140784a96 body=378 status=ok
// SIG undefined FUN_140784a96(void)

void FUN_140784a96(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
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
    lVar5 = (longlong)(int)uVar3;
  }
  else {
    lVar5 = (longlong)(int)uVar2 + ((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + 0x10;
  }
  uVar4 = lVar5 * 0x1c;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar7 = uVar4 + 0xf;
      if (uVar4 < 0x7ff1) {
        uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar7 >> 4]];
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
            uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140784b23;
            lVar5 = uVar6 + 1 + uVar8;
            uVar8 = uVar8 - 1;
          } while (lVar5 != 0x33);
        }
        uVar4 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar4 = (ulonglong)DAT_14c841df8;
        }
        uVar4 = -uVar4 & ((uVar7 & 0xfffffffffffffff0) + uVar4) - 1;
      }
    }
    else {
      uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,4);
    }
  }
LAB_140784b23:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar4 / 0x1c)) {
    uVar7 = uVar4 / 0x1c & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x1c,4);
  return;
}



// FUNCTION 140784c10 FUN_140784c10 body=61 status=ok
// SIG undefined FUN_140784c10(void)

void FUN_140784c10(longlong param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x78) == 0) {
    *param_2 = 0;
    uVar1 = 0;
  }
  else {
    *param_2 = *(undefined4 *)(*(longlong *)(param_1 + 0x70) + 4);
    uVar1 = *(undefined4 *)
             (*(longlong *)(param_1 + 0x70) + -0x18 + (longlong)*(int *)(param_1 + 0x78) * 0x1c);
  }
  *param_3 = uVar1;
  return;
}



// FUNCTION 140784c4e FUN_140784c4e body=527 status=ok
// SIG undefined FUN_140784c4e(void)

undefined4 FUN_140784c4e(longlong param_1,longlong *param_2)

{
  longlong ****pppplVar1;
  int *piVar2;
  byte *pbVar3;
  code *pcVar4;
  longlong ****pppplVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  longlong *****ppppplVar9;
  uint uVar10;
  undefined1 auStack_a8 [40];
  undefined **local_80;
  byte **local_78;
  byte *local_70;
  longlong ****local_68 [3];
  ushort local_50;
  byte local_48;
  undefined1 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  uVar6 = FUN_140a45f64();
  if (*param_2 == 0) {
    puVar7 = &DAT_14c9a1308;
  }
  else {
    puVar7 = (undefined8 *)FUN_1446e60f4(*param_2,&DAT_14cb71408);
  }
  pbVar3 = (byte *)*puVar7;
  if ((pbVar3 != (byte *)0x0) && ((~*pbVar3 & 3) == 0)) {
    local_70 = (byte *)0x0;
    local_50 = 0;
    uVar10 = 0;
    local_48 = 0;
    local_40 = 0;
    puVar7 = (undefined8 *)FUN_1446e60f4(pbVar3,&DAT_14cb71410);
    if ((byte *)*puVar7 != (byte *)0x0) {
      if ((*(byte *)*puVar7 & 3) == 0) {
        uVar10 = 0;
      }
      else {
        uVar8 = FUN_14016b804();
        uVar10 = 0;
        FUN_1446e7478(puVar7,&local_70,uVar8,0);
        if (local_48 != 0) {
          FUN_144983130(param_1 + 0x458,&local_70);
          *(undefined1 *)(param_1 + 0x450) = 1;
          uVar10 = (uint)local_48;
        }
      }
    }
    pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar10 * 0x120));
    if (pcVar4 != (code *)0x0) {
      ppppplVar9 = (longlong *****)local_68[0];
      if (local_50 < 0x19) {
        ppppplVar9 = local_68;
      }
      (*pcVar4)(ppppplVar9);
    }
    if (0x18 < local_50) {
      FUN_1400020a8(local_68[0]);
    }
  }
  if (*param_2 == 0) {
    puVar7 = &DAT_14c9a1308;
  }
  else {
    puVar7 = (undefined8 *)FUN_1446e60f4(*param_2,&DAT_14cb71418);
  }
  local_70 = (byte *)*puVar7;
  local_68[0] = (longlong ****)puVar7[1];
  if (local_68[0] != (longlong ****)0x0) {
    LOCK();
    *(int *)(local_68[0] + 1) = *(int *)(local_68[0] + 1) + 1;
    UNLOCK();
  }
  if ((local_70 != (byte *)0x0) && ((~*local_70 & 3) == 0)) {
    local_80 = &PTR_FUN_14a177d40;
    local_78 = &local_70;
    FUN_140784e5e(param_1 + 0x350);
  }
  pppplVar5 = local_68[0];
  if (local_68[0] != (longlong ****)0x0) {
    LOCK();
    pppplVar1 = local_68[0] + 1;
    *(int *)pppplVar1 = *(int *)pppplVar1 + -1;
    UNLOCK();
    if (*(int *)pppplVar1 == 0) {
      (*(code *)**local_68[0])(local_68[0]);
      LOCK();
      piVar2 = (int *)((longlong)pppplVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (*(code *)(*pppplVar5)[2])(pppplVar5);
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6;
}



// FUNCTION 140784e5e FUN_140784e5e body=123 status=ok
// SIG undefined FUN_140784e5e(void)

undefined8 FUN_140784e5e(undefined2 *param_1)

{
  undefined2 uVar1;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong uStack_30;
  undefined4 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  FUN_14078506c(&local_38);
  uVar1 = FUN_140784eda(&DAT_14c9a71d0,&local_38);
  *param_1 = uVar1;
  FUN_140358fe5(local_38,uStack_30 & 0xffffffff);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140784eda FUN_140784eda body=123 status=ok
// SIG undefined FUN_140784eda(void)

int FUN_140784eda(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = FUN_140784f56();
  if (iVar2 == -1) {
    iVar2 = (int)param_1[1];
    lVar3 = (longlong)iVar2;
    *(uint *)(param_1 + 1) = iVar2 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
      FUN_1457439a0(param_1);
    }
    lVar1 = *param_1;
    *(undefined8 *)(lVar1 + lVar3 * 0x18) = 0;
    *(undefined8 *)(lVar1 + lVar3 * 0x18) = *param_2;
    *param_2 = 0;
    *(undefined4 *)(lVar1 + 8 + lVar3 * 0x18) = *(undefined4 *)(param_2 + 1);
    *(undefined4 *)(lVar1 + 0xc + lVar3 * 0x18) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    *(undefined4 *)(lVar1 + 0x10 + lVar3 * 0x18) = *(undefined4 *)(param_2 + 2);
  }
  return iVar2;
}



// FUNCTION 140784f56 FUN_140784f56 body=113 status=ok
// SIG undefined FUN_140784f56(void)

int FUN_140784f56(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  ulonglong uVar4;
  
  lVar2 = param_1[1];
  if ((longlong)(int)lVar2 != 0) {
    lVar1 = *param_1;
    uVar4 = 0;
    do {
      if (((*(int *)(lVar1 + 0x10 + uVar4) == *(int *)(param_2 + 2)) &&
          (*(int *)(lVar1 + 8 + uVar4) == *(int *)(param_2 + 1))) &&
         (cVar3 = FUN_140784fc7(*(undefined8 *)(lVar1 + uVar4),*param_2), cVar3 != '\0')) {
        return (int)(uVar4 >> 3) * -0x55555555;
      }
      uVar4 = uVar4 + 0x18;
    } while ((longlong)(int)lVar2 * 0x18 != uVar4);
  }
  return -1;
}



// FUNCTION 140784fc7 FUN_140784fc7 body=165 status=ok
// SIG undefined FUN_140784fc7(void)

ulonglong FUN_140784fc7(longlong param_1,longlong param_2,int param_3)

{
  char cVar1;
  int iVar2;
  ulonglong uVar3;
  undefined8 *_Buf1;
  undefined8 *_Buf2;
  undefined8 *puVar4;
  undefined8 unaff_RSI;
  ulonglong uVar5;
  undefined8 *puVar6;
  
  uVar5 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if (param_3 != 0) {
    puVar6 = (undefined8 *)(param_1 + 8);
    puVar4 = (undefined8 *)(param_2 + 8);
    do {
      if ((puVar6[6] != puVar4[6]) || (*(byte *)(puVar6 + 4) != *(byte *)(puVar4 + 4))) {
LAB_140785057:
        uVar5 = 0;
        break;
      }
      _Buf2 = puVar4;
      if (0x18 < *(ushort *)(puVar4 + 3)) {
        _Buf2 = (undefined8 *)*puVar4;
      }
      _Buf1 = puVar6;
      if (0x18 < *(ushort *)(puVar6 + 3)) {
        _Buf1 = (undefined8 *)*puVar6;
      }
      uVar3 = (ulonglong)((uint)*(byte *)(puVar6 + 4) * 0x120);
      if (*(code **)(&DAT_14c9a85e0 + uVar3) == (code *)0x0) {
        iVar2 = memcmp(_Buf1,_Buf2,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar3));
        if (iVar2 != 0) goto LAB_140785057;
      }
      else {
        cVar1 = (**(code **)(&DAT_14c9a85e0 + uVar3))();
        if (cVar1 == '\0') goto LAB_140785057;
      }
      puVar6 = puVar6 + 0xb;
      puVar4 = puVar4 + 0xb;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return uVar5 & 0xffffffff;
}



// FUNCTION 14078506c FUN_14078506c body=789 status=ok
// SIG undefined FUN_14078506c(void)

undefined8 FUN_14078506c(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  byte *pbVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  longlong local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_98;
  iVar10 = *(int *)((longlong)param_1 + 0xc);
  FUN_140358fe5(*param_1,(int)param_1[1]);
  *(undefined4 *)(param_1 + 1) = 0;
  if ((iVar10 < 0) && (*(int *)((longlong)param_1 + 0xc) != 0)) {
    FUN_1407866d8(param_1,0);
  }
  pbVar2 = (byte *)*param_3;
  if (pbVar2 != (byte *)0x0) {
    if ((*pbVar2 & 2) == 0) {
      plVar3 = &DAT_14c9a1288;
    }
    else {
      plVar3 = (longlong *)(*(longlong *)(pbVar2 + 8) + 0x18);
    }
    if ((int)plVar3[2] != *(int *)((longlong)plVar3 + 0x3c)) {
      plVar5 = plVar3 + 8;
      if ((longlong *)plVar3[9] != (longlong *)0x0) {
        plVar5 = (longlong *)plVar3[9];
      }
      iVar10 = *(int *)((longlong)plVar5 + (ulonglong)((int)plVar3[10] - 1U & DAT_14c9a71a8) * 4);
      if (iVar10 != -1) {
        do {
          lVar7 = *plVar3 + (longlong)iVar10 * 0x40;
          if (*(uint *)(*plVar3 + (longlong)iVar10 * 0x40) == DAT_14c9a71a8) {
            if ((((lVar7 != 0) &&
                 (puVar4 = (undefined8 *)(lVar7 + 0x28), puVar4 != (undefined8 *)0x0)) &&
                ((byte *)*puVar4 != (byte *)0x0)) && ((*(byte *)*puVar4 & 0x40) == 0))
            goto LAB_14078512c;
            break;
          }
          iVar10 = *(int *)(lVar7 + 0x38);
        } while (iVar10 != -1);
      }
    }
  }
  puVar4 = &DAT_14c9a1308;
LAB_14078512c:
  pbVar2 = (byte *)*puVar4;
  puVar4 = &DAT_14c9a1270;
  if ((pbVar2 != (byte *)0x0) && ((*pbVar2 & 2) != 0)) {
    puVar4 = *(undefined8 **)(pbVar2 + 8);
  }
  if ((longlong)*(int *)(puVar4 + 2) != 0) {
    puVar8 = (undefined8 *)*puVar4;
    puVar4 = puVar8 + (longlong)*(int *)(puVar4 + 2) * 2;
    do {
      pbVar2 = (byte *)*puVar8;
      plVar3 = &DAT_14c9a1308;
      if (pbVar2 != (byte *)0x0) {
        plVar5 = &DAT_14c9a1288;
        if ((*pbVar2 & 2) != 0) {
          plVar5 = (longlong *)(*(longlong *)(pbVar2 + 8) + 0x18);
        }
        plVar3 = &DAT_14c9a1308;
        if ((int)plVar5[2] != *(int *)((longlong)plVar5 + 0x3c)) {
          plVar3 = plVar5 + 8;
          if ((longlong *)plVar5[9] != (longlong *)0x0) {
            plVar3 = (longlong *)plVar5[9];
          }
          iVar10 = *(int *)((longlong)plVar3 + (ulonglong)((int)plVar5[10] - 1U & DAT_14c9a7108) * 4
                           );
          plVar3 = &DAT_14c9a1308;
          if (iVar10 != -1) {
            do {
              lVar7 = *plVar5 + (longlong)iVar10 * 0x40;
              if (*(uint *)(*plVar5 + (longlong)iVar10 * 0x40) == DAT_14c9a7108) {
                plVar3 = &DAT_14c9a1308;
                if (lVar7 == 0) goto LAB_140785203;
                plVar5 = (longlong *)(lVar7 + 0x28);
                plVar3 = &DAT_14c9a1308;
                if ((plVar5 == (longlong *)0x0) ||
                   (((byte *)*plVar5 != (byte *)0x0 &&
                    (plVar3 = plVar5, (*(byte *)*plVar5 & 0x40) == 0)))) goto LAB_140785203;
                break;
              }
              iVar10 = *(int *)(lVar7 + 0x38);
            } while (iVar10 != -1);
            plVar3 = &DAT_14c9a1308;
          }
        }
      }
LAB_140785203:
      local_70 = 0;
      if (*plVar3 != 0) {
        FUN_1400bc2ec(*plVar3,&local_68);
        if (local_68 != 0) {
          lVar7 = *param_1;
          iVar10 = (int)param_1[1];
          lVar11 = (longlong)iVar10;
          if (lVar11 != 0) {
            lVar6 = lVar11 * 0x58;
            lVar12 = lVar7;
            do {
              if (*(longlong *)(lVar12 + 0x38) == local_68) {
                if (lVar12 != 0) goto LAB_14078528c;
                break;
              }
              lVar12 = lVar12 + 0x58;
              lVar6 = lVar6 + -0x58;
            } while (lVar6 != 0);
          }
          *(uint *)(param_1 + 1) = iVar10 + 1U;
          if (*(uint *)((longlong)param_1 + 0xc) < iVar10 + 1U) {
            FUN_140786566(param_1,iVar10);
            lVar7 = *param_1;
          }
          lVar11 = lVar11 * 0x58;
          lVar12 = lVar7 + lVar11;
          FUN_140785382(lVar12,1);
          *(longlong *)(lVar7 + 0x38 + lVar11) = local_68;
          puVar1 = (undefined8 *)(lVar7 + 0x40 + lVar11);
          *puVar1 = 0;
          puVar1[1] = 0;
          *(undefined8 *)(lVar7 + 0x4e + lVar11) = 0;
LAB_14078528c:
          FUN_14078540c(lVar12,param_2);
        }
      }
      puVar8 = puVar8 + 2;
    } while (puVar8 != puVar4);
  }
  iVar10 = *(int *)((longlong)param_1 + 0xc);
  if (iVar10 != (int)param_1[1]) {
    FUN_1407866d8(param_1);
    iVar10 = (int)param_1[1];
  }
  *(undefined4 *)(param_1 + 2) = 0;
  if (iVar10 != 0) {
    lVar7 = 0;
    uVar9 = 0;
    do {
      uVar9 = uVar9 | *(uint *)(*param_1 + lVar7 + 0x50);
      *(uint *)(param_1 + 2) = uVar9;
      lVar7 = lVar7 + 0x58;
    } while ((longlong)iVar10 * 0x58 - lVar7 != 0);
  }
  if ((local_60 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 1;
}



// FUNCTION 140785382 FUN_140785382 body=138 status=ok
// SIG undefined FUN_140785382(void)

undefined8 * FUN_140785382(undefined8 *param_1,byte param_2)

{
  uint uVar1;
  byte bVar2;
  ushort uVar3;
  ulonglong uVar4;
  undefined8 *_Dst;
  
  *param_1 = 0;
  uVar4 = (ulonglong)((uint)param_2 * 0x120);
  uVar1 = *(uint *)((longlong)&DAT_14c9a8510 + uVar4);
  uVar3 = (ushort)uVar1;
  *(ushort *)(param_1 + 4) = uVar3;
  _Dst = param_1 + 1;
  if (0x18 < uVar3) {
    _Dst = (undefined8 *)FUN_14001cc68(uVar1 & 0xffff);
    param_1[1] = _Dst;
  }
  if (*(code **)((longlong)&DAT_14c9a85a8 + uVar4) == (code *)0x0) {
    memset(_Dst,0,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar4));
  }
  else {
    (**(code **)((longlong)&DAT_14c9a85a8 + uVar4))(_Dst);
  }
  *(byte *)(param_1 + 5) = param_2;
  bVar2 = 0;
  if (((&DAT_14c9a8514)[uVar4] & 0x20) == 0) {
    bVar2 = param_2;
  }
  *(byte *)(param_1 + 6) = bVar2;
  return param_1;
}



// FUNCTION 14078540c FUN_14078540c body=789 status=ok
// SIG undefined FUN_14078540c(void)

void FUN_14078540c(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong lVar1;
  byte *pbVar2;
  byte *pbVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  longlong *plVar8;
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  pbVar3 = (byte *)*param_3;
  if (pbVar3 != (byte *)0x0) {
    if ((*pbVar3 & 2) == 0) {
      plVar4 = &DAT_14c9a1288;
    }
    else {
      plVar4 = (longlong *)(*(longlong *)(pbVar3 + 8) + 0x18);
    }
    if ((int)plVar4[2] != *(int *)((longlong)plVar4 + 0x3c)) {
      plVar6 = plVar4 + 8;
      if ((longlong *)plVar4[9] != (longlong *)0x0) {
        plVar6 = (longlong *)plVar4[9];
      }
      iVar7 = *(int *)((longlong)plVar6 + (ulonglong)((int)plVar4[10] - 1U & DAT_14c9a7108) * 4);
      if (iVar7 != -1) {
        do {
          lVar1 = *plVar4 + (longlong)iVar7 * 0x40;
          if (*(uint *)(*plVar4 + (longlong)iVar7 * 0x40) == DAT_14c9a7108) {
            if ((((lVar1 != 0) && (plVar4 = (longlong *)(lVar1 + 0x28), plVar4 != (longlong *)0x0))
                && ((byte *)*plVar4 != (byte *)0x0)) && ((*(byte *)*plVar4 & 0x40) == 0))
            goto LAB_1407854a5;
            break;
          }
          iVar7 = *(int *)(lVar1 + 0x38);
        } while (iVar7 != -1);
      }
    }
  }
  plVar4 = &DAT_14c9a1308;
LAB_1407854a5:
  plVar6 = (longlong *)(param_1 + 0x38);
  plVar8 = plVar6;
  if (*plVar4 != 0) {
    plVar8 = &local_40;
    FUN_1400bc2ec(*plVar4,plVar8,plVar6);
  }
  *plVar6 = *plVar8;
  pbVar3 = (byte *)*param_3;
  if (pbVar3 != (byte *)0x0) {
    if ((*pbVar3 & 2) == 0) {
      plVar4 = &DAT_14c9a1288;
    }
    else {
      plVar4 = (longlong *)(*(longlong *)(pbVar3 + 8) + 0x18);
    }
    if ((int)plVar4[2] != *(int *)((longlong)plVar4 + 0x3c)) {
      plVar6 = plVar4 + 8;
      if ((longlong *)plVar4[9] != (longlong *)0x0) {
        plVar6 = (longlong *)plVar4[9];
      }
      iVar7 = *(int *)((longlong)plVar6 + (ulonglong)((int)plVar4[10] - 1U & DAT_14c9a7130) * 4);
      if (iVar7 != -1) {
        do {
          lVar1 = *plVar4 + (longlong)iVar7 * 0x40;
          if (*(uint *)(*plVar4 + (longlong)iVar7 * 0x40) == DAT_14c9a7130) {
            if (((lVar1 != 0) &&
                (puVar5 = (undefined8 *)(lVar1 + 0x28), puVar5 != (undefined8 *)0x0)) &&
               (((byte *)*puVar5 != (byte *)0x0 && ((*(byte *)*puVar5 & 0x40) == 0))))
            goto LAB_140785543;
            break;
          }
          iVar7 = *(int *)(lVar1 + 0x38);
        } while (iVar7 != -1);
      }
    }
  }
  puVar5 = &DAT_14c9a1308;
LAB_140785543:
  pbVar2 = (byte *)*puVar5;
  if ((pbVar2 != (byte *)0x0) && ((*pbVar2 & 3) == 1)) {
    FUN_1400b22c2(&local_40,*(undefined8 *)(pbVar2 + 8));
    if ((longlong *)(param_1 + 0x40) == &local_40) {
      if (local_40 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*(longlong *)(param_1 + 0x40) != 0) {
        FUN_1400020a8();
      }
      *(longlong *)(param_1 + 0x40) = local_40;
      local_40 = 0;
      *(undefined4 *)(param_1 + 0x48) = local_38;
      *(undefined4 *)(param_1 + 0x4c) = local_34;
    }
    pbVar3 = (byte *)*param_3;
  }
  if (pbVar3 != (byte *)0x0) {
    if ((*pbVar3 & 2) == 0) {
      plVar4 = &DAT_14c9a1288;
    }
    else {
      plVar4 = (longlong *)(*(longlong *)(pbVar3 + 8) + 0x18);
    }
    if ((int)plVar4[2] != *(int *)((longlong)plVar4 + 0x3c)) {
      plVar6 = plVar4 + 8;
      if ((longlong *)plVar4[9] != (longlong *)0x0) {
        plVar6 = (longlong *)plVar4[9];
      }
      iVar7 = *(int *)((longlong)plVar6 + (ulonglong)((int)plVar4[10] - 1U & DAT_14c9a7180) * 4);
      if (iVar7 != -1) {
        do {
          lVar1 = *plVar4 + (longlong)iVar7 * 0x40;
          if (*(uint *)(*plVar4 + (longlong)iVar7 * 0x40) == DAT_14c9a7180) {
            if ((((lVar1 != 0) &&
                 (puVar5 = (undefined8 *)(lVar1 + 0x28), puVar5 != (undefined8 *)0x0)) &&
                ((byte *)*puVar5 != (byte *)0x0)) && ((*(byte *)*puVar5 & 0x40) == 0))
            goto LAB_140785616;
            break;
          }
          iVar7 = *(int *)(lVar1 + 0x38);
        } while (iVar7 != -1);
      }
    }
  }
  puVar5 = &DAT_14c9a1308;
LAB_140785616:
  FUN_140785722(param_1 + 0x50,puVar5);
  *(undefined1 *)(param_1 + 0x54) = 0;
  FUN_14078599e(param_1,param_2,param_3);
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140785722 FUN_140785722 body=634 status=ok
// SIG undefined FUN_140785722(void)

void FUN_140785722(uint *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  uint *puVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong uVar15;
  uint uVar16;
  undefined1 auStack_88 [40];
  uint *local_60;
  longlong local_58;
  undefined1 local_50 [8];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *param_1 = 0;
  pbVar4 = (byte *)*param_2;
  if ((pbVar4 != (byte *)0x0) && ((~*pbVar4 & 3) == 0)) {
    lVar11 = *(longlong *)(pbVar4 + 8);
    iVar2 = *(int *)(lVar11 + 0x48);
    if (iVar2 == 0) {
      uVar15 = 1;
      uVar13 = 0;
      iVar6 = 0;
      iVar12 = 0;
    }
    else {
      puVar8 = *(uint **)(lVar11 + 0x40);
      if (*(uint **)(lVar11 + 0x40) == (uint *)0x0) {
        puVar8 = (uint *)(lVar11 + 0x30);
      }
      uVar16 = *puVar8;
      if (uVar16 == 0) {
        iVar6 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar6 = iVar2 + -1;
        }
        uVar13 = 0;
        uVar15 = (ulonglong)(uint)(iVar6 >> 5);
        if (iVar6 >> 5 < 1) {
          uVar15 = uVar13;
        }
        iVar12 = 0;
        do {
          if (uVar15 == uVar13) goto LAB_14078575b;
          iVar12 = iVar12 + 0x20;
          uVar16 = puVar8[uVar13 + 1];
          uVar13 = uVar13 + 1;
        } while (uVar16 == 0);
      }
      else {
        uVar13 = 0;
        iVar12 = 0;
      }
      uVar15 = (ulonglong)(-uVar16 & uVar16);
      uVar1 = uVar15 * 2 + 1;
      lVar14 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      iVar6 = (iVar12 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
      if (iVar2 <= iVar6) {
        iVar6 = iVar2;
      }
    }
    if (iVar6 != iVar2) {
      uVar16 = 0xffffffff;
      local_60 = (uint *)(lVar11 + 0x30);
      local_58 = lVar11;
      do {
        lVar11 = (longlong)iVar6 * 0x40 + *(longlong *)(local_58 + 0x18);
        if (DAT_14c947fe0 == 0) {
          lVar14 = FUN_14001cc68(0x140,0x10);
          FUN_1456b2032(lVar14);
          DAT_14c947fe0 = lVar14;
        }
        FUN_140045924(DAT_14c947fe0,local_50,lVar11,1);
        lVar11 = *(longlong *)(lVar11 + 0x28);
        if (lVar11 == 0) {
          uVar7 = FUN_1407864f6(local_50);
LAB_140785924:
          uVar7 = ~uVar7 & *param_1;
        }
        else {
          cVar5 = FUN_14000584e(lVar11,0);
          uVar7 = FUN_1407864f6(local_50);
          if (cVar5 == '\0') goto LAB_140785924;
          uVar7 = uVar7 | *param_1;
        }
        *param_1 = uVar7;
        uVar16 = uVar16 & ~(uint)uVar15;
        puVar8 = *(uint **)(local_58 + 0x40);
        if (*(uint **)(local_58 + 0x40) == (uint *)0x0) {
          puVar8 = local_60;
        }
        iVar3 = *(int *)(local_58 + 0x48);
        iVar6 = (int)uVar13;
        lVar11 = (longlong)iVar6;
        uVar7 = puVar8[lVar11] & uVar16;
        if (uVar7 == 0) {
          iVar9 = iVar3 + 0x1e;
          if (-1 < iVar3 + -1) {
            iVar9 = iVar3 + -1;
          }
          iVar9 = iVar9 >> 5;
          iVar12 = iVar12 + 0x20;
          iVar10 = iVar9;
          if (iVar9 < iVar6) {
            iVar10 = iVar6;
          }
          if (iVar6 < iVar9) {
            lVar14 = 0;
            do {
              uVar7 = puVar8[lVar11 + lVar14 + 1];
              if (uVar7 != 0) {
                uVar13 = (ulonglong)(iVar6 + (int)lVar14 + 1);
                uVar16 = 0xffffffff;
                goto LAB_1407858e8;
              }
              iVar12 = iVar12 + 0x20;
              lVar14 = lVar14 + 1;
            } while (iVar10 - lVar11 != lVar14);
            uVar16 = 0xffffffff;
            iVar6 = iVar10;
          }
          uVar13 = (ulonglong)(iVar6 + 1);
          iVar6 = iVar3;
        }
        else {
LAB_1407858e8:
          uVar15 = (ulonglong)(-uVar7 & uVar7);
          uVar1 = uVar15 * 2 + 1;
          lVar11 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
            }
          }
          iVar6 = (iVar12 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
          if (iVar3 <= iVar6) {
            iVar6 = iVar3;
          }
        }
      } while (iVar6 != iVar2);
    }
  }
LAB_14078575b:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14078599e FUN_14078599e body=1267 status=ok
// SIG undefined FUN_14078599e(void)

undefined8 FUN_14078599e(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  code *pcVar4;
  char cVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 ****ppppuVar8;
  byte *pbVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  int iVar13;
  uint uVar14;
  undefined1 auStack_98 [40];
  undefined8 ***local_70;
  undefined8 local_68;
  undefined8 ***local_60;
  undefined4 local_58;
  undefined8 local_50;
  ushort local_48;
  byte local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (DAT_14c9a66c8 == 0) {
    pbVar9 = (byte *)*param_3;
  }
  else {
    pbVar9 = (byte *)*param_3;
    if (*(short *)(DAT_14c9a66c8 + 0xb6) == *(short *)(pbVar9 + 0x20)) {
      local_68 = 0;
      if (pbVar9 == (byte *)0x0) {
        local_70 = (undefined8 ****)0x0;
      }
      else {
        FUN_1400bc2ec(pbVar9,&local_70,&local_68);
      }
      local_58 = 0xf00000d0;
      local_50 = 0;
      local_60 = local_70;
      FUN_145743a34(param_1);
      goto LAB_140785caa;
    }
  }
  if (pbVar9 != (byte *)0x0) {
    bVar1 = *pbVar9;
    if ((bVar1 & 0x6b) == 1) {
      FUN_140785e92(param_1 + 8,bVar1,param_3);
      goto LAB_140785caa;
    }
    if ((bVar1 & 2) == 0) {
      plVar11 = &DAT_14c9a1288;
    }
    else {
      plVar11 = (longlong *)(*(longlong *)(pbVar9 + 8) + 0x18);
    }
    if ((int)plVar11[2] != *(int *)((longlong)plVar11 + 0x3c)) {
      plVar10 = plVar11 + 8;
      if ((longlong *)plVar11[9] != (longlong *)0x0) {
        plVar10 = (longlong *)plVar11[9];
      }
      iVar13 = *(int *)((longlong)plVar10 + (ulonglong)((int)plVar11[10] - 1U & DAT_14c9a8438) * 4);
      if (iVar13 != -1) {
        do {
          lVar6 = *plVar11 + (longlong)iVar13 * 0x40;
          if (*(uint *)(*plVar11 + (longlong)iVar13 * 0x40) == DAT_14c9a8438) {
            if ((((lVar6 != 0) &&
                 (puVar12 = (undefined8 *)(lVar6 + 0x28), puVar12 != (undefined8 *)0x0)) &&
                ((byte *)*puVar12 != (byte *)0x0)) && ((*(byte *)*puVar12 & 0x40) == 0))
            goto LAB_140785a6d;
            break;
          }
          iVar13 = *(int *)(lVar6 + 0x38);
        } while (iVar13 != -1);
      }
    }
  }
  puVar12 = &DAT_14c9a1308;
LAB_140785a6d:
  pbVar3 = (byte *)*puVar12;
  if ((pbVar3 != (byte *)0x0) && ((*pbVar3 & 3) != 0)) {
    local_68 = 0;
    FUN_1400bc2ec(pbVar3,&local_60);
    plVar11 = &DAT_14c9a8508;
    lVar6 = 0;
    do {
      if ((undefined8 ****)local_60 == (undefined8 ****)*plVar11) goto LAB_140785ab9;
      lVar6 = lVar6 + 1;
      plVar11 = plVar11 + 0x24;
    } while (lVar6 != 0x24);
    lVar6 = 0;
LAB_140785ab9:
    *(char *)(param_1 + 0x30) = (char)lVar6;
    pbVar9 = (byte *)*param_3;
  }
  if (pbVar9 != (byte *)0x0) {
    if ((*pbVar9 & 2) == 0) {
      plVar11 = &DAT_14c9a1288;
    }
    else {
      plVar11 = (longlong *)(*(longlong *)(pbVar9 + 8) + 0x18);
    }
    if ((int)plVar11[2] != *(int *)((longlong)plVar11 + 0x3c)) {
      plVar10 = plVar11 + 8;
      if ((longlong *)plVar11[9] != (longlong *)0x0) {
        plVar10 = (longlong *)plVar11[9];
      }
      iVar13 = *(int *)((longlong)plVar10 + (ulonglong)((int)plVar11[10] - 1U & DAT_14c9a8460) * 4);
      if (iVar13 != -1) {
        do {
          lVar6 = *plVar11 + (longlong)iVar13 * 0x40;
          if (*(uint *)(*plVar11 + (longlong)iVar13 * 0x40) == DAT_14c9a8460) {
            if (((lVar6 != 0) &&
                (puVar12 = (undefined8 *)(lVar6 + 0x28), puVar12 != (undefined8 *)0x0)) &&
               (((byte *)*puVar12 != (byte *)0x0 && ((*(byte *)*puVar12 & 0x40) == 0))))
            goto LAB_140785b32;
            break;
          }
          iVar13 = *(int *)(lVar6 + 0x38);
        } while (iVar13 != -1);
      }
    }
  }
  puVar12 = &DAT_14c9a1308;
LAB_140785b32:
  if (((byte *)*puVar12 != (byte *)0x0) && ((*(byte *)*puVar12 & 3) != 0)) {
    FUN_140785e92(param_1 + 8);
  }
  bVar1 = *(byte *)(param_1 + 0x30);
  if ((bVar1 != 0) && (bVar2 = *(byte *)(param_1 + 0x28), bVar2 != bVar1)) {
    uVar14 = (uint)bVar2 * 0x120;
    if ((*(code **)(&DAT_14c9a8560 + uVar14) == (code *)0x0) ||
       (cVar5 = (**(code **)(&DAT_14c9a8560 + uVar14))(bVar1), cVar5 == '\0')) {
      pcVar4 = *(code **)((longlong)&DAT_14c9a8568 + (ulonglong)((uint)bVar1 * 0x120));
      if (((pcVar4 == (code *)0x0) || (cVar5 = (*pcVar4)((uint)bVar2), cVar5 == '\0')) &&
         ((((&DAT_14c9a8514)[uVar14] & 0x20) == 0 ||
          ((((&DAT_14c9a8514)[(uint)bVar1 * 0x120] & 0x20) != 0 ||
           ((*(code **)(&DAT_14c9a8588 + uVar14) != (code *)0x0 &&
            (cVar5 = (**(code **)(&DAT_14c9a8588 + uVar14))(bVar1), cVar5 == '\0')))))))) {
        bVar1 = *(byte *)(param_1 + 0x30);
        uVar7 = (ulonglong)((uint)bVar1 * 0x120);
        local_48 = (ushort)*(uint *)((longlong)&DAT_14c9a8510 + uVar7);
        if (local_48 < 0x19) {
          ppppuVar8 = &local_60;
        }
        else {
          ppppuVar8 = (undefined8 ****)
                      FUN_14001cc68(*(uint *)((longlong)&DAT_14c9a8510 + uVar7) & 0xffff);
          local_60 = ppppuVar8;
        }
        if (*(code **)((longlong)&DAT_14c9a85a8 + uVar7) == (code *)0x0) {
          memset(ppppuVar8,0,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar7));
        }
        else {
          (**(code **)((longlong)&DAT_14c9a85a8 + uVar7))();
        }
        plVar11 = (longlong *)(param_1 + 8);
        pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 +
                           (ulonglong)((uint)*(byte *)(param_1 + 0x28) * 0x120));
        local_40 = bVar1;
        if (pcVar4 != (code *)0x0) {
          plVar10 = plVar11;
          if (0x18 < *(ushort *)(param_1 + 0x20)) {
            plVar10 = (longlong *)*plVar11;
          }
          (*pcVar4)(plVar10);
        }
        if (0x18 < *(ushort *)(param_1 + 0x20)) {
          FUN_1400020a8(*plVar11);
        }
        *(ushort *)(param_1 + 0x20) = local_48;
        if (local_48 < 0x19) {
          uVar7 = (ulonglong)((uint)local_40 * 0x120);
          if (*(code **)((longlong)&DAT_14c9a85b8 + uVar7) == (code *)0x0) {
            if (*(code **)((longlong)&DAT_14c9a85b0 + uVar7) == (code *)0x0) {
              memcpy(plVar11,&local_60,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar7));
            }
            else {
              (**(code **)((longlong)&DAT_14c9a85b0 + uVar7))(plVar11,&local_60);
            }
          }
          else {
            (**(code **)((longlong)&DAT_14c9a85b8 + uVar7))(plVar11,&local_60);
          }
        }
        else {
          *plVar11 = (longlong)local_60;
          local_60 = (undefined8 ****)0x0;
          local_48 = 0;
        }
        *(byte *)(param_1 + 0x28) = local_40;
        local_40 = 0;
        if (DAT_14c9a85d0 != (code *)0x0) {
          ppppuVar8 = (undefined8 ****)local_60;
          if (local_48 < 0x19) {
            ppppuVar8 = &local_60;
          }
          (*DAT_14c9a85d0)(ppppuVar8);
        }
        if (0x18 < local_48) {
          FUN_1400020a8(local_60);
        }
      }
    }
  }
LAB_140785caa:
  if ((local_38 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 0;
}



// FUNCTION 140785e92 FUN_140785e92 body=1556 status=ok
// SIG undefined FUN_140785e92(void)

undefined8 FUN_140785e92(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  uint uVar1;
  byte *pbVar2;
  ulonglong uVar3;
  undefined8 ****ppppuVar4;
  undefined *puVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong lVar8;
  code *pcVar9;
  longlong *plVar10;
  int iVar11;
  longlong lVar12;
  bool bVar13;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  ulonglong local_80;
  undefined8 local_78;
  code *local_70;
  undefined8 ***local_60;
  undefined8 ***local_58;
  int local_50;
  ushort local_40;
  byte local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  pbVar2 = (byte *)*param_3;
  if (pbVar2 == (byte *)0x0) goto LAB_140786221;
  if ((*pbVar2 & 3) != 3) {
    if ((*pbVar2 & 3) == 1) {
      FUN_1400b22c2(&local_58,*(undefined8 *)(pbVar2 + 8));
      local_60 = local_58;
      if (local_50 == 0) {
        local_60 = (undefined8 ***)&DAT_149dfb77a;
      }
      local_88 = DAT_14c872be8;
      FUN_140786820(param_1,&local_60,0,0);
      if ((undefined8 ****)local_58 != (undefined8 ****)0x0) {
        FUN_1400020a8();
      }
    }
    goto LAB_140786221;
  }
  lVar12 = *(longlong *)(pbVar2 + 8);
  if (*(int *)(lVar12 + 0x28) != *(int *)(lVar12 + 0x54)) {
    lVar8 = lVar12 + 0x58;
    if (*(longlong *)(lVar12 + 0x60) != 0) {
      lVar8 = *(longlong *)(lVar12 + 0x60);
    }
    iVar11 = *(int *)(lVar8 + (ulonglong)(*(int *)(lVar12 + 0x68) - 1U & DAT_14c9aada0) * 4);
    if (iVar11 != -1) {
      do {
        lVar8 = *(longlong *)(lVar12 + 0x18) + (longlong)iVar11 * 0x40;
        if (*(uint *)(*(longlong *)(lVar12 + 0x18) + (longlong)iVar11 * 0x40) == DAT_14c9aada0) {
          if ((((lVar8 != 0) && (plVar6 = (longlong *)(lVar8 + 0x28), plVar6 != (longlong *)0x0)) &&
              ((byte *)*plVar6 != (byte *)0x0)) && ((*(byte *)*plVar6 & 0x40) == 0))
          goto LAB_140785f48;
          break;
        }
        iVar11 = *(int *)(lVar8 + 0x38);
      } while (iVar11 != -1);
    }
  }
  plVar6 = &DAT_14c9a1308;
LAB_140785f48:
  local_60 = (undefined8 ****)0x0;
  if (*plVar6 == 0) {
    ppppuVar4 = (undefined8 ****)0x0;
  }
  else {
    FUN_1400bc2ec(*plVar6,&local_58,&local_60);
    ppppuVar4 = (undefined8 ****)local_58;
  }
  puVar7 = &DAT_14c9a8508;
  lVar12 = 0;
  do {
    if (ppppuVar4 == (undefined8 ****)*puVar7) goto LAB_140785f94;
    lVar12 = lVar12 + 1;
    puVar7 = puVar7 + 0x24;
  } while (lVar12 != 0x24);
  lVar12 = 0;
LAB_140785f94:
  uVar3 = (ulonglong)(((uint)lVar12 & 0xff) * 0x120);
  local_40 = (ushort)*(uint *)((longlong)&DAT_14c9a8510 + uVar3);
  if (local_40 < 0x19) {
    ppppuVar4 = &local_58;
  }
  else {
    ppppuVar4 = (undefined8 ****)FUN_14001cc68(*(uint *)((longlong)&DAT_14c9a8510 + uVar3) & 0xffff)
    ;
    local_58 = ppppuVar4;
  }
  if (*(code **)((longlong)&DAT_14c9a85a8 + uVar3) == (code *)0x0) {
    memset(ppppuVar4,0,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar3));
  }
  else {
    (**(code **)((longlong)&DAT_14c9a85a8 + uVar3))();
  }
  pcVar9 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)*(byte *)(param_1 + 4) * 0x120));
  local_38 = (byte)lVar12;
  if (pcVar9 != (code *)0x0) {
    puVar7 = param_1;
    if (0x18 < *(ushort *)(param_1 + 3)) {
      puVar7 = (undefined8 *)*param_1;
    }
    (*pcVar9)(puVar7);
  }
  if (0x18 < *(ushort *)(param_1 + 3)) {
    FUN_1400020a8(*param_1);
  }
  *(ushort *)(param_1 + 3) = local_40;
  if (local_40 < 0x19) {
    uVar3 = (ulonglong)((uint)local_38 * 0x120);
    pcVar9 = *(code **)((longlong)&DAT_14c9a85b8 + uVar3);
    if ((pcVar9 == (code *)0x0) &&
       (pcVar9 = *(code **)((longlong)&DAT_14c9a85b0 + uVar3), pcVar9 == (code *)0x0)) {
      memcpy(param_1,&local_58,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar3));
    }
    else {
      (*pcVar9)(param_1,&local_58);
    }
  }
  else {
    *param_1 = local_58;
    local_58 = (undefined8 ****)0x0;
    local_40 = 0;
  }
  *(byte *)(param_1 + 4) = local_38;
  local_38 = 0;
  if (DAT_14c9a85d0 != (code *)0x0) {
    ppppuVar4 = (undefined8 ****)local_58;
    if (local_40 < 0x19) {
      ppppuVar4 = &local_58;
    }
    (*DAT_14c9a85d0)(ppppuVar4);
  }
  if (0x18 < local_40) {
    FUN_1400020a8(local_58);
  }
  uVar3 = (ulonglong)((uint)*(byte *)(param_1 + 4) * 0x120);
  if (((*(int *)((longlong)&DAT_14c9a853c + uVar3) == 0) ||
      (uVar1 = *(uint *)((longlong)&DAT_14c9a8538 + uVar3), (int)uVar1 < 0)) ||
     ((DAT_14c9647dc <= (int)uVar1 ||
      ((((plVar6 = (longlong *)
                   ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
         plVar6 == (longlong *)0x0 || ((int)plVar6[2] != *(int *)((longlong)&DAT_14c9a853c + uVar3))
         ) || ((*(uint *)(plVar6 + 1) & 0x10200000) != 0)) ||
       (plVar10 = (longlong *)((longlong)&DAT_14c9a8540 + uVar3), *plVar6 == 0)))))) {
    *(undefined8 *)((longlong)&DAT_14c9a8540 + uVar3) = 0;
    goto LAB_140786221;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c951a88) && (FUN_144b3d300(&DAT_14c951a88), DAT_14c951a88 == -1)) {
    local_78 = FUN_140342cba();
    local_70 = FUN_1468c7f1e;
    local_80 = 0;
    local_88 = 0x8001;
    FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0);
    atexit(FUN_14280c819);
    _Init_thread_footer(&DAT_14c951a88);
  }
  lVar12 = *plVar10;
  if (lVar12 == 0) {
LAB_14078627a:
    if (*(int *)((longlong)&DAT_14c9a8558 + uVar3) != 0) {
      lVar12 = FUN_14007daa4(plVar10,0,0);
      if (lVar12 == 0) {
LAB_14078634b:
        if (*plVar10 != 0) {
          *plVar10 = 0;
          *(undefined8 *)((longlong)&DAT_14c9a8548 + uVar3) = 0;
        }
        goto LAB_140786221;
      }
      puVar5 = *(undefined **)(lVar12 + 8);
      if (DAT_14c951a40 == 0) {
        bVar13 = puVar5 != (undefined *)0x0;
        if (puVar5 != &DAT_14c951a38 && bVar13) {
          do {
            puVar5 = *(undefined **)(puVar5 + 0x30);
            bVar13 = puVar5 != (undefined *)0x0;
            if (puVar5 == &DAT_14c951a38) break;
          } while (puVar5 != (undefined *)0x0);
        }
        if (!bVar13) goto LAB_14078634b;
      }
      else if ((*(ulonglong *)(puVar5 + 0x18) & DAT_14c951a40) == 0) goto LAB_14078634b;
      *plVar10 = lVar12;
    }
    if (lVar12 == 0) goto LAB_140786221;
  }
  else if (((*(int *)((longlong)&DAT_14c9a854c + uVar3) == 0) ||
           (uVar1 = *(uint *)((longlong)&DAT_14c9a8548 + uVar3), (int)uVar1 < 0)) ||
          ((DAT_14c9647dc <= (int)uVar1 ||
           (((lVar8 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar8 == 0 ||
             (*(int *)(lVar8 + 0x10) != *(int *)((longlong)&DAT_14c9a854c + uVar3))) ||
            ((*(uint *)(lVar8 + 8) & 0x10200000) != 0)))))) goto LAB_14078627a;
  if (0x18 < *(ushort *)(param_1 + 3)) {
    param_1 = (undefined8 *)*param_1;
  }
  pbVar2 = (byte *)*param_3;
  if (pbVar2 != (byte *)0x0) {
    if ((*pbVar2 & 2) == 0) {
      plVar6 = &DAT_14c9a1288;
    }
    else {
      plVar6 = (longlong *)(*(longlong *)(pbVar2 + 8) + 0x18);
    }
    if ((int)plVar6[2] != *(int *)((longlong)plVar6 + 0x3c)) {
      plVar10 = plVar6 + 8;
      if ((longlong *)plVar6[9] != (longlong *)0x0) {
        plVar10 = (longlong *)plVar6[9];
      }
      iVar11 = *(int *)((longlong)plVar10 + (ulonglong)((int)plVar6[10] - 1U & DAT_14c9aadc8) * 4);
      if (iVar11 != -1) {
        do {
          lVar8 = *plVar6 + (longlong)iVar11 * 0x40;
          if (*(uint *)(*plVar6 + (longlong)iVar11 * 0x40) == DAT_14c9aadc8) {
            if (((lVar8 != 0) &&
                (puVar7 = (undefined8 *)(lVar8 + 0x28), puVar7 != (undefined8 *)0x0)) &&
               (((byte *)*puVar7 != (byte *)0x0 && ((*(byte *)*puVar7 & 0x40) == 0))))
            goto LAB_140786205;
            break;
          }
          iVar11 = *(int *)(lVar8 + 0x38);
        } while (iVar11 != -1);
      }
    }
  }
  puVar7 = &DAT_14c9a1308;
LAB_140786205:
  local_80 = local_80 & 0xffffffffffffff00;
  local_88 = 0;
  FUN_1446e0fc6(puVar7,param_1,lVar12,0xffffffff);
LAB_140786221:
  if ((local_30 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 1;
}



// FUNCTION 1407864b2 FUN_1407864b2 body=68 status=ok
// SIG undefined FUN_1407864b2(void)

void FUN_1407864b2(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = *param_2;
  uVar1 = FUN_14477b664(param_2[1]);
  uVar1 = FUN_14477b664(uVar1);
  param_1[1] = uVar1;
  param_1[2] = param_2[2];
  return;
}



// FUNCTION 1407864f6 FUN_1407864f6 body=112 status=ok
// SIG undefined FUN_1407864f6(void)

undefined4 FUN_1407864f6(longlong *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  puVar3 = &DAT_14c9a7210;
  if (DAT_14c9a7410 != (undefined8 *)0x0) {
    puVar3 = DAT_14c9a7410;
  }
  if ((longlong)DAT_14c9a7418 != 0) {
    lVar4 = 0;
    uVar2 = 0;
    do {
      if ((*(longlong *)((longlong)puVar3 + lVar4) != 0) &&
         (*(longlong *)(*(longlong *)((longlong)puVar3 + lVar4) + 0x18) == *param_1)) {
        uVar1 = 0;
        if (((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9a7418)) &&
           (puVar3[(ulonglong)(uVar2 & 0x7fffffff) * 2] != 0)) {
          uVar1 = *(undefined4 *)(puVar3[(ulonglong)(uVar2 & 0x7fffffff) * 2] + 0x20);
        }
        return uVar1;
      }
      uVar2 = uVar2 + 1;
      lVar4 = lVar4 + 0x10;
    } while ((longlong)DAT_14c9a7418 << 4 != lVar4);
  }
  return 0;
}



// FUNCTION 140786566 FUN_140786566 body=369 status=ok
// SIG undefined FUN_140786566(void)

void FUN_140786566(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1407865ed;
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
LAB_1407865ed:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x58)) {
    uVar7 = uVar5 / 0x58 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x58,8);
  return;
}



// FUNCTION 1407866d8 FUN_1407866d8 body=328 status=ok
// SIG undefined FUN_1407866d8(void)

void FUN_1407866d8(longlong param_1,int param_2)

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
    uVar3 = (longlong)param_2 * 0x58;
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
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_140786742;
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
LAB_140786742:
    uVar5 = 0x7fffffff;
    if (param_2 <= (int)(uVar3 / 0x58)) {
      uVar5 = uVar3 / 0x58 & 0xffffffff;
    }
  }
  if ((int)uVar5 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar5,0x58,8);
  }
  return;
}



// FUNCTION 140786820 FUN_140786820 body=1565 status=ok
// SIG undefined FUN_140786820(void)

undefined8
FUN_140786820(longlong *param_1,undefined8 *param_2,undefined4 param_3,undefined8 param_4,
             undefined8 param_5)

{
  short *psVar1;
  uint uVar2;
  char cVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  code *pcVar7;
  undefined8 ****ppppuVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong lVar11;
  byte bVar12;
  bool bVar13;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  code *local_a0;
  byte local_91;
  longlong *local_90;
  short *local_88;
  byte local_79;
  short *local_78;
  undefined8 ***local_70 [3];
  ushort local_58;
  byte local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_78 = (short *)*param_2;
  cVar3 = FUN_140786e3e(&local_78,&local_79);
  if (cVar3 == '\0') {
    bVar12 = *(byte *)(param_1 + 4);
    if (bVar12 != 0) goto LAB_140786967;
LAB_140786963:
    uVar5 = 0;
  }
  else {
    bVar12 = local_79;
    if (local_79 == 0) {
      local_58 = 0;
      local_50 = 0;
      pcVar7 = *(code **)((longlong)&DAT_14c9a85d0 +
                         (ulonglong)((uint)*(byte *)(param_1 + 4) * 0x120));
      if (pcVar7 != (code *)0x0) {
        plVar10 = param_1;
        if (0x18 < *(ushort *)(param_1 + 3)) {
          plVar10 = (longlong *)*param_1;
        }
        (*pcVar7)(plVar10);
      }
      if (0x18 < *(ushort *)(param_1 + 3)) {
        FUN_1400020a8(*param_1);
      }
      *(undefined2 *)(param_1 + 3) = 0;
      pcVar7 = DAT_14c9a85b8;
      if ((DAT_14c9a85b8 == (code *)0x0) && (pcVar7 = DAT_14c9a85b0, DAT_14c9a85b0 == (code *)0x0))
      {
        memcpy(param_1,local_70,(longlong)DAT_14c9a8510);
      }
      else {
        (*pcVar7)(param_1,local_70);
      }
      *(byte *)(param_1 + 4) = local_50;
      local_50 = 0;
      if (DAT_14c9a85d0 != (code *)0x0) {
        ppppuVar8 = (undefined8 ****)local_70[0];
        if (local_58 < 0x19) {
          ppppuVar8 = local_70;
        }
        (*DAT_14c9a85d0)(ppppuVar8);
      }
      if (0x18 < local_58) {
        FUN_1400020a8(local_70[0]);
      }
    }
    else {
LAB_140786967:
      uVar4 = (ulonglong)((uint)bVar12 * 0x120);
      if (((((*(int *)((longlong)&DAT_14c9a853c + uVar4) == 0) ||
            (uVar2 = *(uint *)((longlong)&DAT_14c9a8538 + uVar4), (int)uVar2 < 0)) ||
           (DAT_14c9647dc <= (int)uVar2)) ||
          ((plVar10 = (longlong *)
                      ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
           plVar10 == (longlong *)0x0 ||
           ((int)plVar10[2] != *(int *)((longlong)&DAT_14c9a853c + uVar4))))) ||
         (((*(uint *)(plVar10 + 1) & 0x10200000) != 0 ||
          (plVar9 = (longlong *)((longlong)&DAT_14c9a8540 + uVar4), *plVar10 == 0)))) {
        *(undefined8 *)((longlong)&DAT_14c9a8540 + uVar4) = 0;
        goto LAB_140786963;
      }
      local_88 = local_78;
      local_91 = *local_78 == 0x2e;
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c951a88) && (FUN_144b3d300(&DAT_14c951a88), DAT_14c951a88 == -1))
      {
        local_a8 = FUN_140342cba();
        local_a0 = FUN_1468c7f1e;
        local_b0 = 0;
        local_b8 = 0x8001;
        FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0);
        atexit(FUN_14280c819);
        _Init_thread_footer(&DAT_14c951a88);
      }
      plVar10 = (longlong *)*plVar9;
      if ((((plVar10 == (longlong *)0x0) || (*(int *)((longlong)&DAT_14c9a854c + uVar4) == 0)) ||
          (uVar2 = *(uint *)((longlong)&DAT_14c9a8548 + uVar4), (int)uVar2 < 0)) ||
         (((DAT_14c9647dc <= (int)uVar2 ||
           (lVar11 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8), lVar11 == 0)) ||
          ((*(int *)(lVar11 + 0x10) != *(int *)((longlong)&DAT_14c9a854c + uVar4) ||
           ((*(uint *)(lVar11 + 8) & 0x10200000) != 0)))))) {
        if (*(int *)((longlong)&DAT_14c9a8558 + uVar4) != 0) {
          local_90 = plVar9;
          plVar10 = (longlong *)FUN_14007daa4(plVar9,0,0);
          if (plVar10 == (longlong *)0x0) {
LAB_140786c86:
            if (*local_90 != 0) {
              *local_90 = 0;
              local_90[1] = 0;
            }
            goto LAB_140786963;
          }
          puVar6 = (undefined *)plVar10[1];
          if (DAT_14c951a40 == 0) {
            bVar13 = puVar6 != (undefined *)0x0;
            if (puVar6 != &DAT_14c951a38 && bVar13) {
              do {
                puVar6 = *(undefined **)(puVar6 + 0x30);
                bVar13 = puVar6 != (undefined *)0x0;
                if (puVar6 == &DAT_14c951a38) break;
              } while (puVar6 != (undefined *)0x0);
            }
            if (!bVar13) goto LAB_140786c86;
          }
          else if ((*(ulonglong *)(puVar6 + 0x18) & DAT_14c951a40) == 0) goto LAB_140786c86;
          *local_90 = (longlong)plVar10;
        }
        if (plVar10 == (longlong *)0x0) goto LAB_140786963;
      }
      local_58 = (ushort)*(uint *)((longlong)&DAT_14c9a8510 + uVar4);
      if (local_58 < 0x19) {
        ppppuVar8 = local_70;
      }
      else {
        ppppuVar8 = (undefined8 ****)
                    FUN_14001cc68(*(uint *)((longlong)&DAT_14c9a8510 + uVar4) & 0xffff);
        local_70[0] = ppppuVar8;
      }
      if (*(code **)((longlong)&DAT_14c9a85a8 + uVar4) == (code *)0x0) {
        memset(ppppuVar8,0,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar4));
      }
      else {
        (**(code **)((longlong)&DAT_14c9a85a8 + uVar4))();
      }
      pcVar7 = *(code **)((longlong)&DAT_14c9a85d0 +
                         (ulonglong)((uint)*(byte *)(param_1 + 4) * 0x120));
      local_50 = bVar12;
      if (pcVar7 != (code *)0x0) {
        plVar9 = param_1;
        if (0x18 < *(ushort *)(param_1 + 3)) {
          plVar9 = (longlong *)*param_1;
        }
        (*pcVar7)(plVar9);
      }
      if (0x18 < *(ushort *)(param_1 + 3)) {
        FUN_1400020a8(*param_1);
      }
      *(ushort *)(param_1 + 3) = local_58;
      if (local_58 < 0x19) {
        uVar4 = (ulonglong)((uint)local_50 * 0x120);
        if (*(code **)((longlong)&DAT_14c9a85b8 + uVar4) == (code *)0x0) {
          if (*(code **)((longlong)&DAT_14c9a85b0 + uVar4) == (code *)0x0) {
            memcpy(param_1,local_70,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar4));
          }
          else {
            (**(code **)((longlong)&DAT_14c9a85b0 + uVar4))(param_1,local_70);
          }
        }
        else {
          (**(code **)((longlong)&DAT_14c9a85b8 + uVar4))(param_1,local_70);
        }
      }
      else {
        *param_1 = (longlong)local_70[0];
        local_70[0] = (undefined8 ****)0x0;
        local_58 = 0;
      }
      uVar4 = (ulonglong)local_91;
      *(byte *)(param_1 + 4) = local_50;
      local_50 = 0;
      if (DAT_14c9a85d0 != (code *)0x0) {
        ppppuVar8 = (undefined8 ****)local_70[0];
        if (local_58 < 0x19) {
          ppppuVar8 = local_70;
        }
        (*DAT_14c9a85d0)(ppppuVar8);
      }
      if (0x18 < local_58) {
        FUN_1400020a8(local_70[0]);
      }
      psVar1 = local_88 + uVar4;
      if (0x18 < *(ushort *)(param_1 + 3)) {
        param_1 = (longlong *)*param_1;
      }
      cVar3 = FUN_140d50488(plVar10,param_3,param_5);
      uVar5 = 0;
      if ((psVar1 != (short *)0x0) && (cVar3 != '\0')) {
        local_a8 = param_5;
        local_b0 = CONCAT44(local_b0._4_4_,param_3) | 0x8000000;
        local_b8 = param_4;
        uVar5 = (**(code **)(*plVar10 + 0xf8))(plVar10,psVar1,param_1,0);
      }
      *param_2 = uVar5;
    }
    uVar5 = 1;
  }
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 140786e3e FUN_140786e3e body=216 status=ok
// SIG undefined FUN_140786e3e(void)

undefined8 FUN_140786e3e(longlong *param_1,undefined1 *param_2)

{
  wint_t wVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_68 [40];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((wint_t *)*param_1 != (wint_t *)0x0) {
    wVar1 = *(wint_t *)*param_1;
    iVar2 = iswalnum(wVar1);
    if ((wVar1 == 0x5f) || (iVar2 != 0)) {
      lVar5 = *param_1;
      lVar6 = lVar5;
      do {
        do {
          wVar1 = *(wint_t *)(lVar6 + 2);
          lVar6 = lVar6 + 2;
          iVar2 = iswalnum(wVar1);
          lVar5 = lVar5 + 2;
        } while (wVar1 == 0x5f);
      } while (iVar2 != 0);
      FUN_1446f82e2(&local_40,(ulonglong)(lVar5 - *param_1) >> 1 & 0xffffffff,*param_1,1);
      plVar4 = &DAT_14c9a8508;
      lVar5 = 0;
      do {
        if (local_40 == *plVar4) {
          *param_2 = (char)lVar5;
          *param_1 = lVar6;
          uVar3 = CONCAT71((int7)((ulonglong)lVar5 >> 8),1);
          goto LAB_140786ef3;
        }
        lVar5 = lVar5 + 1;
        plVar4 = plVar4 + 0x24;
      } while (lVar5 != 0x24);
    }
  }
  uVar3 = 0;
LAB_140786ef3:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140786f28 FUN_140786f28 body=3726 status=ok
// SIG undefined FUN_140786f28(void)

void FUN_140786f28(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  uint uVar4;
  ushort uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined1 *puVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  byte bVar14;
  int iVar15;
  int iVar16;
  undefined4 uVar17;
  int iVar18;
  longlong *plVar19;
  int iVar20;
  code *pcVar21;
  ulonglong uVar22;
  uint uVar23;
  uint uVar24;
  longlong lVar25;
  longlong lVar26;
  ulonglong uVar27;
  bool bVar28;
  undefined1 auStack_2f8 [32];
  undefined4 local_2d8;
  undefined4 local_2d0;
  undefined4 local_2c8;
  undefined8 local_2c0;
  wchar_t *local_2b8;
  undefined1 *local_2b0;
  undefined1 *local_2a8;
  undefined8 *local_2a0;
  code *local_298;
  code *local_290;
  longlong *local_280;
  char local_273;
  undefined2 local_272;
  int *local_270;
  int local_268;
  int local_264;
  int local_260;
  int local_25c;
  undefined4 local_258;
  undefined4 local_254;
  longlong local_250;
  longlong *local_248;
  longlong *local_240;
  ulonglong local_238;
  longlong local_230;
  longlong local_228;
  longlong local_220;
  ulonglong local_218;
  undefined8 local_210;
  undefined1 *local_208;
  longlong local_200;
  int local_1f8;
  undefined4 local_1ec;
  uint uStack_1e8;
  undefined4 local_1e4;
  undefined1 local_1dd;
  undefined4 local_1dc;
  undefined2 local_1d8;
  undefined2 local_1d6;
  undefined8 local_1d4;
  undefined1 local_1cb;
  undefined4 local_1c8;
  undefined1 local_1c4;
  ushort local_1c0 [12];
  undefined1 local_1a8 [40];
  undefined1 local_180 [40];
  longlong local_158;
  uint local_f8 [8];
  undefined8 local_d8;
  uint local_d0 [8];
  undefined8 local_b0;
  undefined1 local_a8 [32];
  undefined1 *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined1 local_68;
  undefined8 *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_2f8;
  local_270 = *(int **)(param_2 + 0x10);
  lVar7 = FUN_14009d2a0();
  lVar8 = FUN_14038fb82();
  local_b0 = 0x10000000000;
  if (*(char *)(*(longlong *)(param_2 + 0x10) + 0x110) == '\0') {
    uVar5 = *(ushort *)(lVar7 + 0x11a);
    iVar15 = uVar5 + 1;
    iVar16 = iVar15;
    if (0xff < uVar5) {
      FUN_14497ddce(local_d0,0);
      iVar16 = (int)local_b0 + iVar15;
    }
    iVar20 = iVar16 + 0x1f;
    if (-1 < iVar16) {
      iVar20 = iVar16;
    }
    local_b0 = CONCAT44(local_b0._4_4_,iVar16);
    if (iVar16 % 0x20 != 0) {
      bVar14 = -(char)(iVar16 % 0x20);
      local_d0[iVar20 >> 5] = (local_d0[iVar20 >> 5] << (bVar14 & 0x1f)) >> (bVar14 & 0x1f);
    }
    FUN_1447c45ca(local_d0,0,iVar15,0);
    local_d0[uVar5 >> 5] = local_d0[uVar5 >> 5] | 1 << ((byte)uVar5 & 0x1f);
  }
  uVar5 = *(ushort *)(lVar7 + 0x11c);
  local_1c0[1] = *(short *)(lVar7 + 0x12e);
  local_1c0[2] = *(short *)(lVar7 + 0x130);
  local_d8 = 0x10000000000;
  lVar25 = 2;
  iVar16 = 0;
  local_1c0[0] = uVar5;
  do {
    iVar15 = uVar5 + 1;
    iVar20 = iVar15 - iVar16;
    if (iVar20 != 0 && iVar16 <= iVar15) {
      if (iVar16 == 0) {
LAB_140787008:
        if (local_d8._4_4_ <= (int)(uint)uVar5) {
          local_d8 = CONCAT44(0x100,(int)local_d8);
          FUN_14497ddce(local_f8,iVar16);
          iVar15 = (int)local_d8 + iVar20;
        }
        iVar18 = iVar15 + 0x1f;
        if (-1 < iVar15) {
          iVar18 = iVar15;
        }
        local_d8 = CONCAT44(local_d8._4_4_,iVar15);
        if (iVar15 % 0x20 != 0) {
          bVar14 = -(char)(iVar15 % 0x20);
          local_f8[iVar18 >> 5] = (local_f8[iVar18 >> 5] << (bVar14 & 0x1f)) >> (bVar14 & 0x1f);
        }
      }
      else {
        iVar18 = iVar16 + 0x1e;
        if (-1 < iVar16 + -1) {
          iVar18 = iVar16 + -1;
        }
        if (iVar18 >> 5 != (uint)(uVar5 >> 5)) goto LAB_140787008;
        local_d8 = CONCAT44(local_d8._4_4_,iVar15);
      }
      FUN_1447c45ca(local_f8,iVar16,iVar20,0);
    }
    local_f8[uVar5 >> 5] = local_f8[uVar5 >> 5] | 1 << ((byte)uVar5 & 0x1f);
    if (lVar25 == 6) break;
    uVar5 = *(ushort *)((longlong)local_1c0 + lVar25);
    lVar25 = lVar25 + 2;
    iVar16 = (int)local_d8;
  } while( true );
  local_1d4._4_2_ = *(undefined2 *)(lVar7 + 0x4a);
  local_1d4._2_2_ = *(undefined2 *)(lVar7 + 0x50);
  local_1cb = 0;
  local_1c8 = 0x6ff;
  local_1c4 = 0;
  FUN_140788658(local_1c0);
  FUN_14010b303(local_d0,local_1a8,1,&local_78);
  local_1d8 = *(undefined2 *)(lVar8 + 0x84);
  local_70 = &local_1d4;
  local_1d6 = *(undefined2 *)(lVar8 + 0xda);
  local_78 = (code *)&local_1d8;
  FUN_1403b5126(local_1a8,&local_78,2);
  FUN_14010b303(local_f8,local_180,1,&local_78);
  if ((local_1c0[1] != -1) && (local_1c0[2] != -1)) {
    lVar7 = *(longlong *)(param_1 + -0x18);
    local_200 = lVar7 + 0x28;
    local_273 = *(char *)(lVar7 + 0x298);
    if (local_273 == '\0') {
      *(int *)(lVar7 + 0x28c) = *(int *)(lVar7 + 0x28c) + 1;
    }
    else {
      LOCK();
      *(int *)(lVar7 + 0x28c) = *(int *)(lVar7 + 0x28c) + 1;
      UNLOCK();
    }
    local_208 = local_1a8;
    local_1f8 = FUN_1403b8464(&local_208);
    local_264 = *(int *)(lVar7 + 0x38);
    if (local_1f8 != local_264) {
      do {
        lVar8 = local_200;
        lVar25 = (longlong)local_1f8;
        lVar7 = *(longlong *)(*(longlong *)(local_200 + 0x60) + lVar25 * 8);
        if (local_273 == '\0') {
          *(undefined4 *)(lVar7 + 0x14) = 0;
          local_250 = lVar7;
        }
        else {
          local_250 = 0;
        }
        if (*(ushort *)(lVar7 + 0xc) != 0) {
          plVar10 = *(longlong **)(lVar7 + 0x28);
          lVar9 = (ulonglong)*(ushort *)(lVar7 + 0xc) << 5;
          do {
            if (*(short *)((longlong)plVar10 + 0x1e) == local_1c0[2]) goto LAB_140787239;
            plVar10 = plVar10 + 4;
            lVar9 = lVar9 + -0x20;
          } while (lVar9 != 0);
        }
        plVar10 = (longlong *)0x0;
LAB_140787239:
        local_25c = *(int *)(lVar7 + 0x14);
        if (local_25c == 1) {
          AcquireSRWLockShared((PSRWLOCK)(plVar10 + 1));
        }
        LOCK();
        *(int *)(plVar10 + 3) = (int)plVar10[3] + 1;
        UNLOCK();
        local_220 = *plVar10;
        if (*(ushort *)(lVar7 + 0xc) != 0) {
          plVar13 = *(longlong **)(lVar7 + 0x28);
          lVar9 = (ulonglong)*(ushort *)(lVar7 + 0xc) << 5;
          do {
            if (*(short *)((longlong)plVar13 + 0x1e) == local_1c0[1]) goto LAB_14078728c;
            plVar13 = plVar13 + 4;
            lVar9 = lVar9 + -0x20;
          } while (lVar9 != 0);
        }
        plVar13 = (longlong *)0x0;
LAB_14078728c:
        local_260 = *(int *)(lVar7 + 0x14);
        if (local_260 == 1) {
          AcquireSRWLockShared((PSRWLOCK)(plVar13 + 1));
        }
        LOCK();
        *(int *)(plVar13 + 3) = (int)plVar13[3] + 1;
        uVar4 = DAT_14cab5c88;
        UNLOCK();
        local_228 = *plVar13;
        local_230 = *(longlong *)(lVar7 + 0x18);
        uVar6 = local_270[0x3c];
        lVar7 = *(longlong *)(local_270 + 0x3a);
        uVar27 = 0;
        if (0 < (int)uVar6) {
          uVar22 = (ulonglong)uVar6;
          uVar23 = uVar6;
          do {
            uVar22 = uVar22 >> 1;
            uVar24 = (uint)uVar22 + (int)uVar27;
            if (*(uint *)(lVar7 + (ulonglong)uVar24 * 0x18) < DAT_14cab5c88) {
              uVar27 = (ulonglong)(uVar24 + (uVar23 & 1));
            }
            bVar28 = 1 < uVar23;
            uVar23 = (uint)uVar22;
          } while (bVar28);
        }
        local_248 = plVar13;
        local_240 = plVar10;
        if (((int)uVar27 < (int)uVar6) && (*(uint *)(lVar7 + uVar27 * 0x18) <= DAT_14cab5c88)) {
          lVar7 = lVar7 + uVar27 * 0x18;
          plVar10 = (longlong *)(lVar7 + 8);
          if (plVar10 == (longlong *)0x0) goto LAB_140787a06;
          pcVar21 = (code *)*plVar10;
          local_280 = *(longlong **)(lVar7 + 0x10);
          if (local_280 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_280 + 1) = (int)local_280[1] + 1;
            UNLOCK();
            LOCK();
            *(int *)(local_280 + 1) = (int)local_280[1] + 1;
            UNLOCK();
            LOCK();
            plVar10 = local_280 + 1;
            *(int *)plVar10 = (int)*plVar10 + -1;
            UNLOCK();
            if ((int)*plVar10 == 0) {
              (**(code **)*local_280)(local_280);
              LOCK();
              piVar1 = (int *)((longlong)local_280 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*local_280 + 0x10))(local_280);
              }
            }
          }
          if (pcVar21 == (code *)0x0) goto LAB_140787a0f;
        }
        else {
LAB_140787a06:
          local_280 = (longlong *)0x0;
LAB_140787a0f:
          plVar13 = (longlong *)FUN_14001cc68(0xf0);
          plVar13[1] = (longlong)&DAT_100000001;
          *plVar13 = (longlong)&PTR_FUN_14a4d7c60;
          pcVar21 = (code *)(plVar13 + 2);
          memset(plVar13 + 3,0,0xd0);
          FUN_145743c44(pcVar21);
          plVar13[2] = (longlong)&PTR_FUN_14a4d7c80;
          plVar13[0x1d] = (longlong)&PTR_FUN_14a4d7cd0;
          local_78 = pcVar21;
          local_70 = plVar13;
          FUN_145743cca(&local_78,pcVar21);
          plVar10 = local_280;
          plVar19 = plVar13;
          if (plVar13 == (longlong *)0x0) {
            if (local_280 != (longlong *)0x0) {
LAB_140787d1a:
              LOCK();
              plVar2 = local_280 + 1;
              *(int *)plVar2 = (int)*plVar2 + -1;
              UNLOCK();
              if ((int)*plVar2 == 0) {
                (**(code **)*local_280)(local_280);
                LOCK();
                piVar1 = (int *)((longlong)plVar10 + 0xc);
                *piVar1 = *piVar1 + -1;
                iVar16 = *piVar1;
                UNLOCK();
joined_r0x000140787d68:
                plVar19 = plVar13;
                if (iVar16 == 0) {
                  (**(code **)(*plVar10 + 0x10))(plVar10);
                }
              }
              goto LAB_140787ab6;
            }
            plVar19 = (longlong *)0x0;
          }
          else {
            LOCK();
            *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
            UNLOCK();
            if (plVar13 == local_280) {
              LOCK();
              plVar10 = plVar13 + 1;
              *(int *)plVar10 = (int)*plVar10 + -1;
              UNLOCK();
              plVar19 = local_280;
              if ((int)*plVar10 == 0) {
                (**(code **)*plVar13)(plVar13);
                LOCK();
                piVar1 = (int *)((longlong)plVar13 + 0xc);
                *piVar1 = *piVar1 + -1;
                iVar16 = *piVar1;
                UNLOCK();
                plVar10 = plVar13;
                plVar13 = local_280;
                goto joined_r0x000140787d68;
              }
            }
            else if (local_280 != (longlong *)0x0) goto LAB_140787d1a;
LAB_140787ab6:
            plVar10 = local_70;
            if (local_70 != (longlong *)0x0) {
              LOCK();
              plVar13 = local_70 + 1;
              *(int *)plVar13 = (int)*plVar13 + -1;
              UNLOCK();
              if ((int)*plVar13 == 0) {
                (**(code **)*local_70)(local_70);
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
          (**(code **)(*(longlong *)pcVar21 + 0x10))(pcVar21,uVar4,local_270);
          if (plVar19 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar19 + 1) = (int)plVar19[1] + 1;
            UNLOCK();
          }
          local_280 = plVar19;
          local_78 = pcVar21;
          local_70 = plVar19;
          FUN_145743d6c(local_270,uVar4,&local_78);
        }
        local_210 = FUN_140732858();
        lVar7 = *(longlong *)(*(longlong *)(lVar8 + 0x60) + lVar25 * 8);
        lVar26 = *(longlong *)(lVar8 + 8) + lVar25 * 0x28;
        lVar9 = FUN_14009d2a0();
        uVar5 = *(ushort *)(lVar9 + 0x10a);
        if ((uVar5 == 0xffff) ||
           (uVar6 = *(uint *)(lVar26 + 0x20), uVar6 == uVar5 || (int)uVar6 < (int)(uint)uVar5)) {
          uVar17 = 0;
        }
        else {
          uVar6 = *(uint *)(lVar26 + (ulonglong)(uVar5 >> 5) * 4);
          uVar17 = CONCAT31((int3)(uVar6 >> 8),(uVar6 >> (uVar5 & 0x1f) & 1) != 0);
        }
        if (((char)uVar17 != '\0') || (*local_270 != 0)) {
          lVar25 = lVar25 * 0x28 + *(longlong *)(lVar8 + 8);
          local_258 = uVar17;
          lVar8 = FUN_14038fb82();
          uVar5 = *(ushort *)(lVar8 + 0xda);
          if ((uVar5 == 0xffff) ||
             (uVar6 = *(uint *)(lVar25 + 0x20), uVar6 == uVar5 || (int)uVar6 < (int)(uint)uVar5)) {
            local_1dd = false;
          }
          else {
            local_1dd = (*(uint *)(lVar25 + (ulonglong)(uVar5 >> 5) * 4) >> (uVar5 & 0x1f) & 1) != 0
            ;
          }
          local_238 = (ulonglong)*(ushort *)(lVar7 + 0xe);
          if (local_238 != 0) {
            uVar27 = 0;
            do {
              pcVar3 = *(code **)(local_220 + uVar27 * 8);
              if (pcVar3 != (code *)0x0) {
                if (DAT_14cac7648 == 0) {
                  local_78 = FUN_144a7958c;
                  local_290 = FUN_14081d0ea;
                  local_298 = FUN_143242436;
                  local_2a8 = &LAB_14789ef1f;
                  local_2b0 = &LAB_1417b008f;
                  local_2b8 = L"Engine";
                  local_2c0 = 0x8000000000;
                  local_2c8 = 0x10000004;
                  local_2d0 = 0x10;
                  local_2d8 = 0x2b0;
                  local_2a0 = &local_78;
                  FUN_14081cfa3(L"/Script/Engine",L"SceneComponent",&DAT_14cac7648,FUN_146393848);
                }
                if ((*(int *)(DAT_14cac7648 + 0x38) <= *(int *)(*(longlong *)(pcVar3 + 0x10) + 0x38)
                    ) && (*(longlong *)
                           (*(longlong *)(*(longlong *)(pcVar3 + 0x10) + 0x30) +
                           (longlong)*(int *)(DAT_14cac7648 + 0x38) * 8) == DAT_14cac7648 + 0x30)) {
                  local_272 = *(undefined2 *)(local_230 + uVar27 * 2);
                  local_254 = *(undefined4 *)(local_228 + uVar27 * 4);
                  local_88 = (undefined1 *)0x0;
                  local_80 = 0x400000000;
                  local_58 = (undefined8 *)0x0;
                  local_50 = 0x400000001;
                  local_78 = pcVar3;
                  local_50._0_4_ = 1;
                  local_218 = uVar27;
                  do {
                    puVar12 = local_58;
                    if (local_58 == (undefined8 *)0x0) {
                      puVar12 = &local_78;
                    }
                    lVar7 = puVar12[(ulonglong)(uint)local_50 - 1];
                    local_50 = CONCAT44(local_50._4_4_,(uint)local_50 - 1);
                    FUN_140787db8(&local_78);
                    uVar27 = local_80;
                    lVar8 = (longlong)(int)local_80;
                    uVar6 = (int)local_80 + 1;
                    local_80 = CONCAT44(local_80._4_4_,uVar6);
                    if (local_80._4_4_ < uVar6) {
                      FUN_140788484(local_a8,uVar27 & 0xffffffff);
                    }
                    puVar11 = local_88;
                    if (local_88 == (undefined1 *)0x0) {
                      puVar11 = local_a8;
                    }
                    *(longlong *)(puVar11 + lVar8 * 8) = lVar7;
                    if (0 < (longlong)*(int *)(lVar7 + 0x140)) {
                      uVar27 = (longlong)*(int *)(lVar7 + 0x140) + 1;
                      do {
                        uVar22 = local_50;
                        lVar8 = *(longlong *)(*(longlong *)(lVar7 + 0x138) + -0x10 + uVar27 * 8);
                        if (lVar8 != 0) {
                          lVar25 = (longlong)(int)(uint)local_50;
                          uVar6 = (uint)local_50 + 1;
                          local_50 = CONCAT44(local_50._4_4_,uVar6);
                          if (local_50._4_4_ < uVar6) {
                            FUN_140788484(&local_78,uVar22 & 0xffffffff);
                          }
                          puVar12 = local_58;
                          if (local_58 == (undefined8 *)0x0) {
                            puVar12 = &local_78;
                          }
                          puVar12[lVar25] = lVar8;
                        }
                        uVar27 = uVar27 - 1;
                      } while (1 < uVar27);
                    }
                  } while (0 < (int)(uint)local_50);
                  if (local_58 != (undefined8 *)0x0) {
                    FUN_1400020a8();
                  }
                  puVar11 = local_88;
                  if (local_88 == (undefined1 *)0x0) {
                    puVar11 = local_a8;
                  }
                  lVar7 = (longlong)(int)local_80;
                  if (lVar7 != 0) {
                    lVar8 = 0;
                    do {
                      lVar25 = *(longlong *)(puVar11 + lVar8);
                      lVar9 = *(longlong *)(pcVar21 + 200);
                      local_78 = (code *)0x0;
                      if (lVar25 == 0) {
                        FUN_14027499e(lVar9,&local_1dc,&local_78);
                        uVar6 = 0;
                        iVar16 = 0;
                      }
                      else {
                        uVar6 = *(uint *)(lVar25 + 0xc);
                        if ((int)uVar6 < DAT_14c9647dc) {
                          lVar26 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
                                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8);
                        }
                        else {
                          lVar26 = 0;
                        }
                        iVar16 = *(int *)(lVar26 + 0x10);
                        if (*(int *)(lVar26 + 0x10) == 0) {
                          LOCK();
                          iVar16 = DAT_14c964868 + 1;
                          UNLOCK();
                          iVar15 = DAT_14c964868 + 1;
                          bVar28 = DAT_14c964868 < 1000;
                          DAT_14c964868 = iVar16;
                          if (bVar28) {
                            local_268 = iVar15;
                            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",
                                          0x23d,
                                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                          ,iVar15);
                            iVar15 = local_268;
                          }
                          LOCK();
                          iVar16 = *(int *)(lVar26 + 0x10);
                          bVar28 = iVar16 == 0;
                          if (bVar28) {
                            *(int *)(lVar26 + 0x10) = iVar15;
                            iVar16 = 0;
                          }
                          UNLOCK();
                          if (bVar28) {
                            iVar16 = iVar15;
                          }
                        }
                        local_78 = (code *)CONCAT44(iVar16,uVar6);
                        FUN_14027499e(lVar9,&local_1dc,&local_78);
                        uVar6 = *(uint *)(lVar25 + 0xc);
                        if ((int)uVar6 < DAT_14c9647dc) {
                          lVar9 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
                                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8);
                        }
                        else {
                          lVar9 = 0;
                        }
                        iVar16 = *(int *)(lVar9 + 0x10);
                        if (*(int *)(lVar9 + 0x10) == 0) {
                          LOCK();
                          iVar16 = DAT_14c964868 + 1;
                          UNLOCK();
                          iVar15 = DAT_14c964868 + 1;
                          bVar28 = DAT_14c964868 < 1000;
                          DAT_14c964868 = iVar16;
                          if (bVar28) {
                            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",
                                          0x23d,
                                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                          ,iVar15);
                          }
                          LOCK();
                          iVar16 = *(int *)(lVar9 + 0x10);
                          bVar28 = iVar16 == 0;
                          if (bVar28) {
                            *(int *)(lVar9 + 0x10) = iVar15;
                            iVar16 = 0;
                          }
                          UNLOCK();
                          if (bVar28) {
                            iVar16 = iVar15;
                          }
                        }
                      }
                      local_78 = (code *)CONCAT44(iVar16,uVar6);
                      FUN_1407880ce(pcVar21,&local_1e4,&local_78);
                      uVar17 = local_1dc;
                      local_1ec = local_1dc;
                      uStack_1e8 = DAT_14cab5c88;
                      local_1dc = CONCAT22(local_1dc._2_2_,local_272);
                      local_78 = (code *)CONCAT44(DAT_14cab5c88,uVar17);
                      local_70 = (longlong *)CONCAT44(local_254,local_1e4);
                      local_68 = (undefined1)local_258;
                      FUN_1449da5a2(local_210,&local_1dc,&local_78);
                      FUN_140787e46(pcVar21,&local_1dd,&local_1ec,lVar25);
                      lVar8 = lVar8 + 8;
                    } while (lVar7 * 8 != lVar8);
                  }
                  uVar27 = local_218;
                  if (local_88 != (undefined1 *)0x0) {
                    FUN_1400020a8();
                    uVar27 = local_218;
                  }
                }
              }
              uVar27 = uVar27 + 1;
            } while (uVar27 != local_238);
          }
        }
        if (local_280 != (longlong *)0x0) {
          LOCK();
          plVar10 = local_280 + 1;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if ((int)*plVar10 == 0) {
            (**(code **)*local_280)(local_280);
            LOCK();
            piVar1 = (int *)((longlong)local_280 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*local_280 + 0x10))();
            }
          }
        }
        plVar10 = local_248;
        lVar7 = local_250;
        if (local_240 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_240 + 3) = (int)local_240[3] + -1;
          UNLOCK();
          if (local_25c == 1) {
            ReleaseSRWLockShared((PSRWLOCK)(local_240 + 1));
          }
        }
        if (plVar10 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar10 + 3) = (int)plVar10[3] + -1;
          UNLOCK();
          if (local_260 == 1) {
            ReleaseSRWLockShared((PSRWLOCK)(plVar10 + 1));
          }
        }
        if (lVar7 != 0) {
          *(undefined4 *)(lVar7 + 0x14) = 1;
        }
        local_1f8 = FUN_1403b8464(&local_208);
      } while (local_1f8 != local_264);
    }
    if (local_208 != (undefined1 *)0x0) {
      if (*(char *)(local_200 + 0x270) == '\0') {
        *(int *)(local_200 + 0x264) = *(int *)(local_200 + 0x264) + -1;
      }
      else {
        LOCK();
        *(int *)(local_200 + 0x264) = *(int *)(local_200 + 0x264) + -1;
        UNLOCK();
      }
    }
  }
  if (local_158 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_2f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140787db8 FUN_140787db8 body=141 status=ok
// SIG undefined FUN_140787db8(void)

void FUN_140787db8(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = *(uint *)(param_1 + 0x28);
  uVar1 = *(uint *)(param_1 + 0x2c);
  if ((ulonglong)uVar4 < 5) {
    uVar4 = 4;
  }
  else {
    iVar3 = uVar1 - uVar4;
    if (((longlong)iVar3 & 0x1ffffffffffff800U) == 0) {
      if (iVar3 < 0x41 || (int)(uVar1 * 2) <= (int)(uVar4 * 3)) {
        return;
      }
    }
    else if (iVar3 < 0x41) {
      return;
    }
    if (0 < (int)uVar4) {
      uVar2 = FUN_144a3809e((ulonglong)uVar4 << 3,0);
      uVar4 = (uint)(uVar2 >> 3);
      uVar1 = *(uint *)(param_1 + 0x2c);
    }
  }
  if (uVar4 == uVar1) {
    return;
  }
  *(uint *)(param_1 + 0x2c) = uVar4;
  FUN_1407885d4(param_1,*(undefined4 *)(param_1 + 0x28));
  return;
}



// FUNCTION 140787e46 FUN_140787e46 body=647 status=ok
// SIG undefined FUN_140787e46(void)

void FUN_140787e46(longlong param_1,char *param_2,longlong param_3,longlong param_4)

{
  uint uVar1;
  byte *pbVar2;
  byte bVar3;
  short sVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  longlong lVar8;
  longlong *plVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
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
  longlong *local_60;
  uint local_54;
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  iVar5 = *(int *)(param_3 + 8);
  lVar8 = FUN_1400e4054(*(undefined8 *)(param_1 + 0xb0));
  if (lVar8 == 0) {
    plVar9 = (longlong *)(param_1 + 0x68);
    goto LAB_140787eba;
  }
  sVar4 = *(short *)(lVar8 + 0xe);
  plVar9 = (longlong *)(param_1 + 0x68);
  lVar8 = (longlong)iVar5 * 0x10;
  bVar3 = *(byte *)(*(longlong *)(param_1 + 0x68) + 0xc + lVar8);
  if (sVar4 == 0) {
    if ((bVar3 & 1) != 0) goto LAB_140787eba;
  }
  else {
    if (((bVar3 & 2) == 0 & bVar3) != 0) goto LAB_140787eba;
    uVar12 = *(uint *)(param_1 + 0xa8);
    lVar6 = *(longlong *)(param_1 + 0xa0);
    uVar11 = 0;
    uVar10 = uVar12;
    if (0 < (int)uVar12) {
      do {
        uVar1 = (uVar10 >> 1) + uVar11;
        if (*(int *)(lVar6 + (ulonglong)uVar1 * 8) < iVar5) {
          uVar11 = uVar1 + (uVar10 & 1);
        }
        bVar7 = 1 < uVar10;
        uVar10 = uVar10 >> 1;
      } while (bVar7);
    }
    if ((((int)uVar11 < (int)uVar12) && (*(int *)(lVar6 + (ulonglong)uVar11 * 8) <= iVar5)) &&
       (lVar6 + (ulonglong)uVar11 * 8 != -4)) goto LAB_140787eba;
  }
  uVar12 = 0;
  if (param_4 != 0) {
    if (DAT_14cac7648 == 0) {
      local_80 = &local_50;
      local_50 = FUN_144a7958c;
      local_70 = FUN_14081d0ea;
      local_78 = FUN_143242436;
      local_88 = &LAB_14789ef1f;
      local_90 = &LAB_1417b008f;
      local_98 = L"Engine";
      local_a0 = 0x8000000000;
      local_a8 = 0x10000004;
      local_b0 = 0x10;
      local_b8 = 0x2b0;
      local_60 = plVar9;
      FUN_14081cfa3(L"/Script/Engine",L"SceneComponent",&DAT_14cac7648,FUN_146393848);
      plVar9 = local_60;
    }
    if ((*(int *)(DAT_14cac7648 + 0x38) <= *(int *)(*(longlong *)(param_4 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_4 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cac7648 + 0x38) * 8) == DAT_14cac7648 + 0x30)) {
      uVar12 = (uint)*(byte *)(param_4 + 0x1fb);
    }
  }
  local_50 = (code *)CONCAT44(local_50._4_4_,iVar5);
  lVar8 = lVar8 + *plVar9;
  local_54 = uVar12;
  if (sVar4 == 0) {
    *(uint *)(lVar8 + 8) = uVar12;
    *(byte *)(lVar8 + 0xc) = *(byte *)(lVar8 + 0xc) | 3;
  }
  else if ((*(byte *)(lVar8 + 0xc) & 1) == 0) {
    *(uint *)(lVar8 + 8) = uVar12;
    *(byte *)(lVar8 + 0xc) = *(byte *)(lVar8 + 0xc) | 1;
  }
  else {
    FUN_145743b62(param_1 + 0xa0,&local_50,&local_54);
  }
LAB_140787eba:
  if (*param_2 == '\x01') {
    pbVar2 = (byte *)(*plVar9 + 0xc + (longlong)iVar5 * 0x10);
    *pbVar2 = *pbVar2 | 2;
  }
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1407880ce FUN_1407880ce body=949 status=ok
// SIG undefined FUN_1407880ce(void)

int * FUN_1407880ce(longlong param_1,int *param_2,int *param_3)

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  undefined8 uVar15;
  uint uVar16;
  int iVar17;
  undefined1 auStack_98 [40];
  ulonglong local_70;
  undefined8 local_68;
  int *local_60;
  int *local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(param_1 + 0x20) != *(int *)(param_1 + 0x4c)) {
    uVar3 = param_3[1];
    uVar10 = uVar3 >> 0xd ^ *param_3 - uVar3;
    uVar13 = uVar10 << 8 ^ (-0x61c88647 - uVar3) - uVar10;
    uVar14 = uVar13 >> 0xd ^ (uVar3 - uVar10) - uVar13;
    uVar16 = uVar14 >> 0xc ^ (uVar10 - uVar13) - uVar14;
    uVar10 = uVar16 << 0x10 ^ (uVar13 - uVar14) - uVar16;
    uVar13 = uVar10 >> 5 ^ (uVar14 - uVar16) - uVar10;
    uVar14 = uVar13 >> 3 ^ (uVar16 - uVar10) - uVar13;
    uVar10 = uVar14 << 10 ^ (uVar10 - uVar13) - uVar14;
    lVar5 = param_1 + 0x50;
    if (*(longlong *)(param_1 + 0x58) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x58);
    }
    iVar17 = *(int *)(lVar5 + (ulonglong)
                              (*(int *)(param_1 + 0x60) - 1U &
                              (uVar10 >> 0xf ^ uVar13 - (uVar14 + uVar10))) * 4);
    if (iVar17 != -1) {
      lVar5 = *(longlong *)(param_1 + 0x18);
      do {
        piVar1 = (int *)(lVar5 + (longlong)iVar17 * 0x14);
        if ((*piVar1 == *param_3) && (*(uint *)(lVar5 + 4 + (longlong)iVar17 * 0x14) == uVar3)) {
          if ((piVar1 != (int *)0x0) && (iVar17 = piVar1[2], *param_2 = iVar17, iVar17 != -1))
          goto LAB_1407882fd;
          break;
        }
        iVar17 = piVar1[3];
      } while (iVar17 != -1);
    }
  }
  uVar15 = *(undefined8 *)param_3;
  if (*(int *)(param_1 + 0x9c) == 0) {
    iVar17 = *(int *)(param_1 + 0x70);
    *(int *)(param_1 + 0x70) = iVar17 + 1;
    if (*(int *)(param_1 + 0x74) == iVar17) {
      FUN_144869a3c(param_1 + 0x68,iVar17);
    }
    iVar8 = *(int *)(param_1 + 0x90);
    if (iVar8 == 0) {
      iVar4 = -1;
    }
    else {
      iVar4 = iVar8 + 0x1e;
      if (-1 < iVar8 + -1) {
        iVar4 = iVar8 + -1;
      }
      iVar4 = iVar4 >> 5;
    }
    lVar11 = param_1 + 0x78;
    iVar9 = iVar8 + 1;
    iVar12 = iVar8 + 0x1f;
    if (-1 < iVar8) {
      iVar12 = iVar8;
    }
    if (iVar12 >> 5 == iVar4) {
      *(int *)(param_1 + 0x90) = iVar9;
    }
    else {
      if (*(int *)(param_1 + 0x94) <= iVar8) {
        uVar3 = iVar8 + 0x20;
        local_70 = (ulonglong)uVar3;
        local_68 = uVar15;
        if (uVar3 < 0xa0) {
          iVar9 = 0x80;
          iVar4 = iVar8;
        }
        else {
          uVar3 = uVar3 >> 5;
          local_70 = (ulonglong)uVar3;
          if (*(int *)(param_1 + 0x94) + 0x1fU < 0xa0) {
            uVar10 = 4;
            if (4 < uVar3) {
              uVar10 = uVar3;
            }
          }
          else {
            uVar10 = (uVar3 * 3 >> 3) + uVar3 + 0x10;
          }
          uVar6 = FUN_144a3809e(uVar10 << 2,0);
          iVar4 = (int)(uVar6 >> 2);
          iVar9 = -0x20;
          if ((int)local_70 <= iVar4) {
            iVar9 = iVar4 << 5;
          }
          iVar4 = *(int *)(param_1 + 0x90);
        }
        *(int *)(param_1 + 0x94) = iVar9;
        FUN_1446efbd8(lVar11,iVar4);
        iVar9 = *(int *)(param_1 + 0x90) + 1;
        uVar15 = local_68;
      }
      iVar4 = iVar9 + 0x1f;
      if (-1 < iVar9) {
        iVar4 = iVar9;
      }
      *(int *)(param_1 + 0x90) = iVar9;
      if (iVar9 % 0x20 != 0) {
        lVar5 = *(longlong *)(param_1 + 0x88);
        if (*(longlong *)(param_1 + 0x88) == 0) {
          lVar5 = lVar11;
        }
        bVar7 = -(char)(iVar9 % 0x20);
        *(uint *)(lVar5 + (longlong)(iVar4 >> 5) * 4) =
             (uint)(*(int *)(lVar5 + (longlong)(iVar4 >> 5) * 4) << (bVar7 & 0x1f)) >>
             (bVar7 & 0x1f);
      }
    }
    lVar5 = (longlong)iVar17;
    if (*(longlong *)(param_1 + 0x88) != 0) {
      lVar11 = *(longlong *)(param_1 + 0x88);
    }
    bVar7 = (byte)iVar8 & 0x1f;
    puVar2 = (uint *)(lVar11 + (longlong)(iVar12 >> 5) * 4);
    *puVar2 = *puVar2 & (-2 << bVar7 | 0xfffffffeU >> 0x20 - bVar7);
  }
  else {
    iVar17 = *(int *)(param_1 + 0x98);
    lVar5 = (longlong)iVar17;
    iVar8 = *(int *)(*(longlong *)(param_1 + 0x68) + 4 + lVar5 * 0x10);
    *(int *)(param_1 + 0x98) = iVar8;
    iVar4 = *(int *)(param_1 + 0x9c) + -1;
    *(int *)(param_1 + 0x9c) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)(*(longlong *)(param_1 + 0x68) + (longlong)iVar8 * 0x10) = 0xffffffff;
    }
  }
  lVar11 = param_1 + 0x78;
  if (*(longlong *)(param_1 + 0x88) != 0) {
    lVar11 = *(longlong *)(param_1 + 0x88);
  }
  iVar8 = iVar17 + 0x1f;
  if (-1 < iVar17) {
    iVar8 = iVar17;
  }
  puVar2 = (uint *)(lVar11 + (longlong)(iVar8 >> 5) * 4);
  *puVar2 = *puVar2 | 1 << ((byte)iVar17 & 0x1f);
  lVar11 = *(longlong *)(param_1 + 0x68);
  *(undefined8 *)(lVar11 + lVar5 * 0x10) = uVar15;
  *(undefined1 *)(lVar11 + 0xc + lVar5 * 0x10) = 0;
  *param_2 = iVar17;
  local_60 = param_3;
  local_58 = param_2;
  FUN_14073929c((longlong *)(param_1 + 0x18),local_4c,&local_60,0);
LAB_1407882fd:
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140788484 FUN_140788484 body=335 status=ok
// SIG undefined FUN_140788484(void)

void FUN_140788484(longlong param_1,int param_2)

{
  ulonglong uVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  
  uVar3 = *(uint *)(param_1 + 0x28);
  if ((int)uVar3 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar3);
  }
  if (uVar3 < 5) {
    iVar8 = 4;
  }
  else {
    lVar5 = (longlong)(int)uVar3;
    if (4 < *(uint *)(param_1 + 0x2c)) {
      lVar5 = lVar5 + ((ulonglong)(lVar5 * 3) >> 3) + 0x10;
    }
    uVar6 = lVar5 * 8;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar1 = uVar6 + 0xf;
        if (uVar6 < 0x7ff1) {
          uVar6 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
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
              uVar6 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar9 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar9 & 0xffffffff] & 0xf) == 0) goto LAB_140788510;
              lVar5 = uVar7 + 1 + uVar9;
              uVar9 = uVar9 - 1;
            } while (lVar5 != 0x33);
          }
          uVar6 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar6 = (ulonglong)DAT_14c841df8;
          }
          uVar6 = -uVar6 & ((uVar1 & 0xfffffffffffffff0) + uVar6) - 1;
        }
      }
      else {
        uVar6 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar6,0);
      }
    }
LAB_140788510:
    iVar4 = (int)(uVar6 >> 3);
    iVar8 = 0x7fffffff;
    if ((int)uVar3 <= iVar4) {
      iVar8 = iVar4;
    }
  }
  *(int *)(param_1 + 0x2c) = iVar8;
  FUN_1407885d4(param_1,param_2);
  return;
}



// FUNCTION 1407885d4 FUN_1407885d4 body=131 status=ok
// SIG undefined FUN_1407885d4(void)

void FUN_1407885d4(void *param_1,int param_2,undefined8 param_3)

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



// FUNCTION 140788658 FUN_140788658 body=355 status=ok
// SIG undefined FUN_140788658(void)

undefined8 * FUN_140788658(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  uint *puVar2;
  ushort uVar3;
  undefined8 uVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  uVar4 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar4;
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  puVar1 = param_1 + 3;
  param_1[7] = 0x10000000000;
  param_1[0xc] = 0x10000000000;
  param_1[0x13] = 0x10000000000;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0x18] = 0x10000000000;
  uVar3 = *(ushort *)((longlong)param_1 + 2);
  iVar8 = uVar3 + 1;
  iVar6 = iVar8;
  if (0xff < uVar3) {
    FUN_14497ddce(puVar1,0);
    iVar6 = *(int *)(param_1 + 7) + iVar8;
  }
  iVar9 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar9 = iVar6;
  }
  *(int *)(param_1 + 7) = iVar6;
  if (iVar6 % 0x20 != 0) {
    bVar5 = -(char)(iVar6 % 0x20);
    *(uint *)((longlong)puVar1 + (longlong)(iVar9 >> 5) * 4) =
         (uint)(*(int *)((longlong)puVar1 + (longlong)(iVar9 >> 5) * 4) << (bVar5 & 0x1f)) >>
         (bVar5 & 0x1f);
  }
  FUN_1447c45ca(puVar1,0,iVar8,0);
  puVar2 = (uint *)((longlong)param_1 + (ulonglong)(uVar3 >> 5) * 4 + 0x18);
  *puVar2 = *puVar2 | 1 << ((byte)uVar3 & 0x1f);
  uVar3 = *(ushort *)((longlong)param_1 + 4);
  iVar8 = uVar3 + 1;
  iVar6 = *(int *)(param_1 + 7);
  iVar9 = iVar8 - iVar6;
  if (iVar9 == 0 || iVar8 < iVar6) goto LAB_140788769;
  if (iVar6 == 0) {
LAB_14078872e:
    if (*(int *)((longlong)param_1 + 0x3c) <= (int)(uint)uVar3) {
      *(undefined4 *)((longlong)param_1 + 0x3c) = 0x100;
      FUN_14497ddce(puVar1,iVar6);
      iVar8 = *(int *)(param_1 + 7) + iVar9;
    }
    iVar7 = iVar8 + 0x1f;
    if (-1 < iVar8) {
      iVar7 = iVar8;
    }
    *(int *)(param_1 + 7) = iVar8;
    if (iVar8 % 0x20 != 0) {
      bVar5 = -(char)(iVar8 % 0x20);
      *(uint *)((longlong)puVar1 + (longlong)(iVar7 >> 5) * 4) =
           (uint)(*(int *)((longlong)puVar1 + (longlong)(iVar7 >> 5) * 4) << (bVar5 & 0x1f)) >>
           (bVar5 & 0x1f);
    }
  }
  else {
    iVar7 = iVar6 + 0x1e;
    if (-1 < iVar6 + -1) {
      iVar7 = iVar6 + -1;
    }
    if (iVar7 >> 5 != (uint)(uVar3 >> 5)) goto LAB_14078872e;
    *(int *)(param_1 + 7) = iVar8;
  }
  FUN_1447c45ca(puVar1,iVar6,iVar9,0);
LAB_140788769:
  puVar2 = (uint *)((longlong)param_1 + (ulonglong)(uVar3 >> 5) * 4 + 0x18);
  *puVar2 = *puVar2 | 1 << ((byte)uVar3 & 0x1f);
  return param_1;
}



// FUNCTION 1407887d6 FUN_1407887d6 body=83 status=ok
// SIG undefined FUN_1407887d6(void)

void FUN_1407887d6(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*(longlong *)(param_1 + 0x28) + 0x78))(param_1 + 0x28);
  if ((((lVar1 != 0) && (*(longlong *)(lVar1 + 0x30) != 0)) &&
      (lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0x30) + 0x2b0), lVar1 != 0)) &&
     ((lVar1 = *(longlong *)(lVar1 + 0x3f0), lVar1 != 0 && (*(int *)(lVar1 + 0x48) == 2)))) {
    FUN_14078882a(lVar1,param_1);
    return;
  }
  return;
}



// FUNCTION 14078882a FUN_14078882a body=187 status=ok
// SIG undefined FUN_14078882a(void)

void FUN_14078882a(longlong param_1,undefined8 param_2)

{
  byte bVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  lVar4 = *(longlong *)(param_1 + 0x40);
  if (lVar4 == 0) {
    lVar4 = FUN_14475ec7e();
  }
  bVar1 = *(byte *)(lVar4 + 0x152);
  if ((bVar1 != 1) && ((6 < bVar1 || ((0x68U >> (bVar1 & 0x1f) & 1) == 0)))) {
    return;
  }
  if ((*(char *)(param_1 + 0x38) == '\x01') && (*(longlong *)(param_1 + 0x40) != 0)) {
    lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x40) + 0x30);
    if (lVar4 == 0) {
      plVar5 = (longlong *)0x0;
    }
    else {
      plVar5 = *(longlong **)(lVar4 + 0x2b0);
    }
    cVar2 = (**(code **)(*plVar5 + 0x658))();
    if (cVar2 != '\0') {
      lVar4 = *(longlong *)(param_1 + 0x40);
      if (lVar4 == 0) {
        lVar4 = FUN_14475ec7e(param_1);
      }
      uVar3 = FUN_1448a6d9c(lVar4);
      FUN_1407888e6(uVar3,param_2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001407888ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0xe0) + 0x2e8))(*(longlong **)(param_1 + 0xe0),param_2);
  return;
}



// FUNCTION 1407888e6 FUN_1407888e6 body=391 status=ok
// SIG undefined FUN_1407888e6(void)

void FUN_1407888e6(longlong param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  undefined1 *puVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_78 [36];
  int local_54;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(char *)(param_2 + 0xb8) != '\x01') {
    puVar5 = (undefined1 *)FUN_14017c366(param_1,param_2);
    if (puVar5 == (undefined1 *)0x0) goto LAB_140788a1b;
    *puVar5 = 0;
    iVar1 = *(int *)(puVar5 + 0x10);
    if ((longlong)iVar1 != 0) {
      lVar3 = *(longlong *)(puVar5 + 8);
      lVar8 = 0;
      do {
        lVar6 = *(longlong *)(lVar3 + lVar8);
        FUN_140455b10(lVar6,DAT_14c761ed0);
        local_50 = 0;
        if (lVar6 != 0) {
          uVar2 = *(uint *)(lVar6 + 0xc);
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
            iVar7 = DAT_14c964868 + 1;
            bVar9 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar4;
            if (bVar9) {
              local_54 = iVar7;
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,iVar7);
              iVar7 = local_54;
            }
            LOCK();
            iVar4 = *(int *)(lVar6 + 0x10);
            bVar9 = iVar4 == 0;
            if (bVar9) {
              *(int *)(lVar6 + 0x10) = iVar7;
              iVar4 = 0;
            }
            UNLOCK();
            if (bVar9) {
              iVar4 = iVar7;
            }
          }
          local_50 = CONCAT44(iVar4,uVar2);
        }
        FUN_1406ba75e(param_1 + 0x80,&local_50);
        lVar8 = lVar8 + 8;
      } while ((longlong)iVar1 * 8 != lVar8);
    }
    if (*(char *)(param_2 + 0xb8) != '\x01') goto LAB_140788a1b;
  }
  *(undefined1 *)(param_2 + 0xb8) = 0;
  *(undefined4 *)(param_2 + 0xb4) = 0;
  FUN_147dcc822(param_2,1);
  *(undefined4 *)(param_2 + 0xb0) = 0;
LAB_140788a1b:
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140788a6e FUN_140788a6e body=15 status=ok
// SIG undefined FUN_140788a6e(void)

void FUN_140788a6e(longlong param_1)

{
  FUN_140788a7e(param_1 + 0x10);
  return;
}



// FUNCTION 140788a7e FUN_140788a7e body=70 status=ok
// SIG undefined FUN_140788a7e(void)

void FUN_140788a7e(LPCRITICAL_SECTION param_1)

{
  longlong lVar1;
  LPCRITICAL_SECTION p_Var2;
  
  FUN_14018802a(param_1[2].SpinCount);
  param_1[2].SpinCount = 0;
  lVar1._0_4_ = param_1[1].LockCount;
  lVar1._4_4_ = param_1[1].RecursionCount;
  if (lVar1 != 0) {
    p_Var2 = param_1 + 2;
    if (param_1[1].LockSemaphore != (LPCRITICAL_SECTION)0x0) {
      p_Var2 = param_1[1].LockSemaphore;
    }
    (*(code *)(p_Var2->DebugInfo->ProcessLocksList).Flink)();
  }
                    /* WARNING: Could not recover jumptable at 0x000140788aa6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection(param_1);
  return;
}



// FUNCTION 140788ac4 FUN_140788ac4 body=88 status=ok
// SIG undefined FUN_140788ac4(void)

void FUN_140788ac4(undefined8 param_1)

{
  undefined1 auStack_48 [39];
  undefined1 local_21;
  code *local_20;
  undefined1 *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_140788b1e();
  local_18 = &local_21;
  local_20 = FUN_143496ee2;
  FUN_140788b96(param_1);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140788b1e FUN_140788b1e body=118 status=ok
// SIG undefined FUN_140788b1e(void)

void FUN_140788b1e(undefined8 param_1)

{
  undefined1 auStack_78 [40];
  undefined1 local_50 [16];
  longlong local_40;
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1401c3c2c();
  FUN_140788cb8(param_1,local_50);
  FUN_140107d74(param_1,local_50);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140788b96 FUN_140788b96 body=288 status=ok
// SIG undefined FUN_140788b96(void)

void FUN_140788b96(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_b8 [32];
  longlong local_98;
  longlong local_90 [8];
  longlong *local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(longlong *)(param_1 + 0xae8) != 0) {
    local_90[0] = *(longlong *)(param_1 + 0xae8);
    (*(code *)*param_2)(param_2[1]);
  }
  local_50 = (longlong *)0x0;
  iVar1 = *(int *)(param_1 + 0xb80);
  uVar2 = *(undefined8 *)(param_1 + 0xb78);
  local_48 = iVar1;
  if (iVar1 != 0) {
    FUN_147a14dd0(local_90,iVar1,0);
    plVar3 = local_50;
    if (local_50 == (longlong *)0x0) {
      plVar3 = local_90;
    }
    FUN_147a14e47(plVar3,uVar2,iVar1);
    lVar5 = (longlong)local_48;
    plVar3 = local_90;
    if (local_50 != (longlong *)0x0) {
      plVar3 = local_50;
    }
    if (lVar5 != 0) {
      lVar4 = 0;
      do {
        if (*(longlong *)((longlong)plVar3 + lVar4) != 0) {
          local_98 = *(longlong *)((longlong)plVar3 + lVar4);
          (*(code *)*param_2)(param_2[1],&local_98);
        }
        lVar4 = lVar4 + 8;
      } while (lVar5 * 8 != lVar4);
    }
    if (local_50 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  if (*(longlong *)(param_1 + 0xaf8) != 0) {
    local_90[0] = *(longlong *)(param_1 + 0xaf8);
    (*(code *)*param_2)(param_2[1]);
  }
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140788cb8 FUN_140788cb8 body=1308 status=ok
// SIG undefined FUN_140788cb8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140788cb8(longlong *param_1,undefined8 *param_2)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined8 *puVar10;
  uint uVar11;
  uint uVar12;
  byte bVar13;
  int iVar14;
  char cVar15;
  longlong *plVar16;
  ulonglong uVar17;
  undefined1 auStack_98 [36];
  undefined4 local_74;
  longlong local_70;
  longlong local_68;
  longlong *local_60;
  longlong local_58;
  undefined2 local_4a;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar5 = (longlong *)(**(code **)(*param_1 + 0xa90))();
  if (plVar5 != (longlong *)0x0) {
    if (param_1[0xcb] == 0) {
      if ((DAT_14c950c29 & param_1[0xcc] != 0) != 0) goto LAB_1407891cb;
      if (param_1[0xcc] != 0) goto LAB_140788d0f;
    }
    else {
      if (DAT_14c950c29 == 1) {
LAB_1407891cb:
        FUN_1456cec3c();
      }
LAB_140788d0f:
      lVar9 = param_1[0x16];
      if ((lVar9 != 0) && (*(longlong *)(lVar9 + 0x218) != 0)) {
        if ((char)param_1[0xd0] == '\x01') {
          lVar6 = param_1[0xd1];
LAB_140788d89:
          cVar1 = FUN_14163814a(*(undefined2 *)
                                 (&DAT_14ca85070 +
                                 (longlong)*(int *)(*(longlong *)(lVar9 + 0x218) + 8) * 2));
          if (lVar6 == 0) goto LAB_140788db4;
LAB_140788ec8:
          local_74 = 0;
LAB_140788ed0:
          param_2[2] = 0;
          param_2[5] = 0;
          param_2[6] = 0x800000000;
          param_2[3] = 0x200000000;
          FUN_147a15bdc(param_2);
          if (DAT_14c950c29 == 1) {
            FUN_1456cec3c(lVar6);
          }
          iVar14 = *(int *)(param_2 + 3);
          *(uint *)(param_2 + 3) = iVar14 + 1U;
          if (*(uint *)((longlong)param_2 + 0x1c) < iVar14 + 1U) {
            FUN_147a15caa(param_2,iVar14);
          }
          puVar8 = (undefined8 *)param_2[2];
          if ((undefined8 *)param_2[2] == (undefined8 *)0x0) {
            puVar8 = param_2;
          }
          puVar8[iVar14] = lVar6;
          if (DAT_14c950c29 == 1) {
            FUN_1456cec3c(lVar6);
          }
          plVar16 = (longlong *)param_1[0xcb];
          if (plVar16 == (longlong *)0x0) {
            plVar16 = (longlong *)param_1[0xcc];
            if ((DAT_14c950c29 & plVar16 != (longlong *)0x0) != 0) goto LAB_140789180;
          }
          else if (DAT_14c950c29 == 1) {
LAB_140789180:
            FUN_1456cec3c(plVar16);
          }
          iVar3 = (**(code **)(*plVar16 + 0x3c0))(plVar16);
          iVar14 = *DAT_14cad2b68;
          if (iVar14 < 0) {
            lVar9 = (**(code **)(*param_1 + 0xa90))(param_1);
            if (lVar9 == 0) {
              iVar14 = -1;
            }
            else {
              iVar14 = *(int *)(lVar9 + 8) + -1;
            }
          }
          uVar11 = *(uint *)(plVar5 + 1);
          if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
            FUN_1456afac4(uVar11);
          }
          puVar8 = param_2 + 4;
          *(undefined4 *)(param_2 + 6) = 0;
          iVar4 = 0;
          uVar12 = uVar11;
          if (*(uint *)((longlong)param_2 + 0x34) != uVar11) {
            FUN_147a15d28(puVar8);
            uVar11 = *(uint *)(plVar5 + 1);
            iVar4 = *(int *)(param_2 + 6);
            uVar12 = *(uint *)((longlong)param_2 + 0x34);
          }
          *(uint *)(param_2 + 6) = uVar11 + iVar4;
          if (uVar12 - iVar4 < uVar11) {
            FUN_146f2eec0(puVar8,iVar4);
            uVar11 = *(uint *)(plVar5 + 1);
          }
          if (0 < (int)uVar11) {
            local_70 = (longlong)iVar14;
            lVar9 = (longlong)iVar3;
            uVar17 = 0;
            local_68 = lVar9;
            local_60 = plVar5;
            do {
              if (cVar1 == '\0') {
                cVar15 = '\0';
              }
              else {
                cVar15 = *(char *)(*(longlong *)(*plVar5 + uVar17 * 8) + 0x159);
              }
              bVar13 = 1;
              bVar2 = 1;
              if ((longlong)uVar17 < lVar9) {
                plVar5 = (longlong *)param_1[0xcb];
                if (plVar5 == (longlong *)0x0) {
                  plVar5 = (longlong *)param_1[0xcc];
                  if ((DAT_14c950c29 & plVar5 != (longlong *)0x0) != 0) goto LAB_1407890bb;
                }
                else if (DAT_14c950c29 == 1) {
LAB_1407890bb:
                  FUN_1456cec3c(plVar5);
                }
                lVar9 = (**(code **)(*plVar5 + 800))(plVar5,uVar17 & 0xffffffff);
                bVar2 = (*(byte *)(lVar9 + 0xd0) & 0x10) >> 4;
                lVar9 = local_68;
                plVar5 = local_60;
              }
              if (cVar15 == '\0') {
                if (((char)local_74 == '\0') || ((char)param_1[0xd2] == '\x01')) {
                  bVar13 = (longlong)uVar17 <= local_70 & bVar2;
                }
                else {
                  bVar13 = 0;
                }
              }
              puVar10 = (undefined8 *)param_2[5];
              if ((undefined8 *)param_2[5] == (undefined8 *)0x0) {
                puVar10 = puVar8;
              }
              *(byte *)((longlong)puVar10 + uVar17) = bVar13 - 1;
              uVar17 = uVar17 + 1;
            } while ((longlong)uVar17 < (longlong)(int)plVar5[1]);
          }
          goto LAB_140788e75;
        }
        plVar16 = (longlong *)param_1[0xcb];
        if (plVar16 == (longlong *)0x0) {
          plVar16 = (longlong *)param_1[0xcc];
          if ((DAT_14c950c29 & plVar16 != (longlong *)0x0) != 0) goto LAB_14078915a;
        }
        else if (DAT_14c950c29 == 1) {
LAB_14078915a:
          FUN_1456cec3c(plVar16);
        }
        lVar6 = (**(code **)(*plVar16 + 0x408))(plVar16);
        lVar9 = param_1[0x16];
        if (lVar9 != 0) goto LAB_140788d89;
        cVar1 = FUN_14163814a(*(undefined2 *)(&DAT_14ca85070 + (longlong)_DAT_00000008 * 2));
        if (lVar6 != 0) goto LAB_140788ec8;
LAB_140788db4:
        if (cVar1 == '\x01' && (char)param_1[0xd2] == '\0') {
          if ((longlong)(int)plVar5[1] != 0) {
            lVar9 = 0;
            do {
              if (*(char *)(*(longlong *)(*plVar5 + lVar9) + 0x159) != '\0') goto LAB_140788dcc;
              lVar9 = lVar9 + 8;
            } while ((longlong)(int)plVar5[1] * 8 != lVar9);
          }
        }
        else if ((char)param_1[0xd2] != '\0') {
LAB_140788dcc:
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110)
               < DAT_14cad2b50) && (FUN_144b3d300(&DAT_14cad2b50), DAT_14cad2b50 == -1)) {
            DAT_14cad2b48 = (longlong *)FUN_14631badc();
            _Init_thread_footer(&DAT_14cad2b50);
          }
          if (DAT_14cad2b48 != (longlong *)0x0) {
            local_4a = 1;
            uVar7 = (**(code **)(*DAT_14cad2b48 + 0x10))(DAT_14cad2b48,&local_58);
            if (local_58 != 0) {
              local_74 = (undefined4)CONCAT71((int7)((ulonglong)uVar7 >> 8),1);
              lVar6 = local_58;
              goto LAB_140788ed0;
            }
          }
        }
      }
    }
  }
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  *(undefined4 *)((longlong)param_2 + 0x1c) = 2;
  param_2[6] = 0x800000000;
LAB_140788e75:
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1407891d6 FUN_1407891d6 body=63 status=ok
// SIG undefined FUN_1407891d6(void)

void FUN_1407891d6(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_140789234(param_1,iVar1);
  }
  FUN_140789215((longlong)iVar1 * 0x28 + *param_1,1);
  return;
}



// FUNCTION 140789215 FUN_140789215 body=30 status=ok
// SIG undefined FUN_140789215(void)

void FUN_140789215(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined4 *)(param_1 + 4) = 0xffb4b4b4;
    param_1 = param_1 + 5;
  }
  return;
}



// FUNCTION 140789234 FUN_140789234 body=373 status=ok
// SIG undefined FUN_140789234(void)

void FUN_140789234(longlong param_1,int param_2)

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
  uVar5 = lVar4 * 0x28;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1407892bf;
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
LAB_1407892bf:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x28)) {
    uVar7 = uVar5 / 0x28 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x28,8);
  return;
}



// FUNCTION 1407893aa FUN_1407893aa body=124 status=ok
// SIG undefined FUN_1407893aa(void)

ulonglong FUN_1407893aa(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined7 uVar5;
  ulonglong uVar4;
  
  if ((*(longlong *)(param_1 + 0x2478) != 0) &&
     (lVar2 = (**(code **)(*(longlong *)(param_1 + -0x448) + 0x650))(param_1 + -0x448), lVar2 == 0))
  {
    uVar5 = (undefined7)((ulonglong)param_1 >> 8);
    if (*(char *)(*(longlong *)(param_1 + 0x2478) + 0x458) != '\x01') {
      uVar4 = CONCAT71(uVar5,1);
      goto LAB_1407893fc;
    }
    plVar3 = (longlong *)FUN_140789426(*(longlong *)(param_1 + 0x2478) + 0x460);
    if (plVar3 != (longlong *)0x0) {
      uVar4 = CONCAT71(uVar5,1);
      cVar1 = (**(code **)(*plVar3 + 0x20))(plVar3,param_2,1,0);
      if (cVar1 == '\0') goto LAB_1407893fc;
    }
  }
  uVar4 = 0;
LAB_1407893fc:
  return uVar4 & 0xffffffff;
}



// FUNCTION 140789426 FUN_140789426 body=136 status=ok
// SIG undefined FUN_140789426(void)

longlong FUN_140789426(undefined8 *param_1)

{
  longlong lVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 local_40 [24];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = param_1[2];
  if (lVar1 == 0) {
    local_48 = *param_1;
    FUN_1446dcdd4(local_40);
    if (DAT_14cb77e20 == 0) {
      lVar1 = 0;
    }
    else {
      lVar1 = FUN_144837462(DAT_14cb77e20,local_40);
    }
    if (local_28 != 0) {
      FUN_1400020a8();
    }
    param_1[2] = lVar1;
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407894b0 FUN_1407894b0 body=2413 status=ok
// SIG undefined FUN_1407894b0(void)

void FUN_1407894b0(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong *plVar13;
  uint *puVar14;
  int iVar15;
  uint uVar16;
  longlong lVar17;
  int iVar18;
  bool bVar19;
  undefined1 auStack_d8 [32];
  wchar_t *local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  wchar_t *local_a0;
  undefined4 local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  code **local_80;
  undefined8 *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  longlong *local_58;
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  param_2 = (longlong *)*param_2;
  if (param_2 == (longlong *)0x0) {
LAB_140789ab4:
    plVar13 = (longlong *)0x0;
  }
  else {
    lVar7 = (**(code **)(*param_2 + 8))();
    lVar8 = FUN_140789f04();
    if ((lVar8 == 0) || (*(int *)(lVar7 + 0x38) < *(int *)(lVar8 + 0x38))) goto LAB_140789ab4;
    plVar13 = (longlong *)0x0;
    if (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) ==
        lVar8 + 0x30) {
      plVar13 = param_2;
    }
  }
  lVar7 = param_1 + -0x3c0;
  *(longlong **)(param_1 + 0x150) = plVar13;
  FUN_14078a36a(param_1 + 0x400,param_1 + 0x10);
  if (*(longlong *)(param_1 + 0x150) != 0) {
    FUN_140633582(lVar7);
    lVar8 = *(longlong *)(param_1 + 0x150);
    if (((lVar8 != 0) && (*(longlong *)(lVar8 + 200) != 0)) &&
       (*(int *)(lVar8 + 0xd0) - 1U < 0xfffffffe)) {
      uVar10 = FUN_1447210f0(lVar7);
      local_78 = *(undefined8 **)(*(longlong *)(param_1 + 0x150) + 200);
      uStack_70 = CONCAT44(uStack_70._4_4_,*(undefined4 *)(*(longlong *)(param_1 + 0x150) + 0xd0));
      local_68 = 0;
      local_b8 = (wchar_t *)CONCAT71(local_b8._1_7_,1);
      FUN_14078bff4(&local_60,&local_78,param_1 + 0x38,uVar10);
      plVar13 = local_58;
      if ((undefined8 *)(param_1 + 0x478) != &local_60) {
        *(undefined8 *)(param_1 + 0x478) = local_60;
        local_60 = 0;
        plVar2 = *(longlong **)(param_1 + 0x480);
        if (local_58 != plVar2) {
          local_58 = (longlong *)0x0;
          *(longlong **)(param_1 + 0x480) = plVar13;
          if (plVar2 != (longlong *)0x0) {
            LOCK();
            plVar13 = plVar2 + 1;
            *(int *)plVar13 = (int)*plVar13 + -1;
            UNLOCK();
            if ((int)*plVar13 == 0) {
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
      plVar13 = local_58;
      if (local_58 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_58 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*local_58)(local_58);
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
  }
  FUN_14078a0a0(param_1 + 0x18,0);
  lVar8 = *(longlong *)(param_1 + 0x150);
  if (lVar8 == 0) {
LAB_140789abb:
    FUN_140355e94(param_1 + 0x380);
  }
  else {
    lVar9 = *(longlong *)(param_1 + -8);
    if (lVar9 != 0) {
      local_78 = (undefined8 *)0x0;
      uStack_70 = uStack_70 & 0xffffffff00000000;
      FUN_1446efa72(&local_78,0,3,0x10);
      puVar3 = local_78;
      uStack_70._0_4_ = 3;
      *local_78 = &PTR_LAB_149e020b0;
      LOCK();
      UNLOCK();
      lVar12 = DAT_14c758608 + 1;
      lVar8 = DAT_14c758608 + 1;
      if (lVar12 == 0) {
        LOCK();
        UNLOCK();
        lVar12 = DAT_14c758608 + 2;
        lVar8 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar8;
      local_78[2] = lVar12;
      *local_78 = &PTR_FUN_14b42e520;
      local_78[3] = 0;
      iVar15 = 0;
      if (lVar7 != 0) {
        uVar6 = *(uint *)(param_1 + -0x3b4);
        *(uint *)(local_78 + 3) = uVar6;
        if ((int)uVar6 < DAT_14c9647dc) {
          lVar8 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8);
        }
        else {
          lVar8 = 0;
        }
        iVar15 = *(int *)(lVar8 + 0x10);
        if (*(int *)(lVar8 + 0x10) == 0) {
          LOCK();
          iVar15 = DAT_14c964868 + 1;
          UNLOCK();
          iVar18 = DAT_14c964868 + 1;
          bVar19 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar15;
          if (bVar19) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                         );
          }
          LOCK();
          iVar15 = *(int *)(lVar8 + 0x10);
          bVar19 = iVar15 == 0;
          if (bVar19) {
            *(int *)(lVar8 + 0x10) = iVar18;
            iVar15 = 0;
          }
          UNLOCK();
          if (bVar19) {
            iVar15 = iVar18;
          }
        }
      }
      *(int *)((longlong)puVar3 + 0x1c) = iVar15;
      puVar3[4] = FUN_140f8b812;
      *(undefined4 *)(puVar3 + 5) = 0;
      FUN_1448b6402(lVar9 + 0x638,&local_60,&local_78);
      if ((int)uStack_70 == 0) {
LAB_14078968e:
        if (local_78 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
      }
      else if (local_78 != (undefined8 *)0x0) {
        (**(code **)*local_78)(local_78,0);
        FUN_1446efa72(&local_78,0,0,0x10);
        uStack_70._0_4_ = 0;
        goto LAB_14078968e;
      }
      local_78 = (undefined8 *)0x0;
      uStack_70 = (ulonglong)uStack_70._4_4_ << 0x20;
      FUN_1446efa72(&local_78,0,3,0x10);
      puVar3 = local_78;
      uStack_70 = CONCAT44(uStack_70._4_4_,3);
      *local_78 = &PTR_LAB_149e020b0;
      LOCK();
      UNLOCK();
      lVar12 = DAT_14c758608 + 1;
      lVar8 = DAT_14c758608 + 1;
      if (lVar12 == 0) {
        LOCK();
        UNLOCK();
        lVar12 = DAT_14c758608 + 2;
        lVar8 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar8;
      local_78[2] = lVar12;
      *local_78 = &PTR_FUN_14b42e520;
      local_78[3] = 0;
      iVar15 = 0;
      if (lVar7 != 0) {
        uVar6 = *(uint *)(param_1 + -0x3b4);
        *(uint *)(local_78 + 3) = uVar6;
        if ((int)uVar6 < DAT_14c9647dc) {
          lVar8 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8);
        }
        else {
          lVar8 = 0;
        }
        iVar15 = *(int *)(lVar8 + 0x10);
        if (*(int *)(lVar8 + 0x10) == 0) {
          LOCK();
          iVar15 = DAT_14c964868 + 1;
          UNLOCK();
          iVar18 = DAT_14c964868 + 1;
          bVar19 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar15;
          if (bVar19) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar18);
          }
          LOCK();
          iVar15 = *(int *)(lVar8 + 0x10);
          bVar19 = iVar15 == 0;
          if (bVar19) {
            *(int *)(lVar8 + 0x10) = iVar18;
            iVar15 = 0;
          }
          UNLOCK();
          if (bVar19) {
            iVar15 = iVar18;
          }
        }
      }
      *(int *)((longlong)puVar3 + 0x1c) = iVar15;
      puVar3[4] = FUN_140f8b882;
      *(undefined4 *)(puVar3 + 5) = 0;
      FUN_1448b6402(lVar9 + 0x650,&local_60,&local_78);
      if ((int)uStack_70 == 0) {
LAB_140789784:
        if (local_78 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
      }
      else if (local_78 != (undefined8 *)0x0) {
        (**(code **)*local_78)(local_78,0);
        FUN_1446efa72(&local_78,0,0,0x10);
        uStack_70 = uStack_70 & 0xffffffff00000000;
        goto LAB_140789784;
      }
      lVar8 = *(longlong *)(param_1 + 0x150);
      if (lVar8 == 0) goto LAB_140789abb;
    }
    local_78 = (undefined8 *)0x0;
    uStack_70 = 0;
    if ((longlong)*(int *)(lVar8 + 0xc0) != 0) {
      puVar14 = *(uint **)(lVar8 + 0xb8);
      lVar8 = (longlong)*(int *)(lVar8 + 0xc0) * 0x28;
      do {
        if (((((puVar14[1] == 0) || (uVar6 = *puVar14, (int)uVar6 < 0)) ||
             ((DAT_14c9647dc <= (int)uVar6 ||
              ((plVar13 = (longlong *)
                          ((ulonglong)((uVar6 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8)),
               plVar13 == (longlong *)0x0 || (*(uint *)(plVar13 + 2) != puVar14[1])))))) ||
            ((*(uint *)(plVar13 + 1) & 0x10200000) != 0)) || (lVar9 = *plVar13, lVar9 == 0)) {
          if (*(longlong *)(puVar14 + 2) != 0) {
            lVar9 = FUN_140007850();
            cVar5 = (*(code *)PTR_FUN_14c758760)();
            if ((lVar9 == 0) || (cVar5 == '\0')) {
              if (lVar9 == 0) {
                puVar14[0] = 0;
                puVar14[1] = 0;
                goto LAB_140789911;
              }
              uVar6 = *(uint *)(lVar9 + 0xc);
              *puVar14 = uVar6;
              if ((int)uVar6 < DAT_14c9647dc) {
                lVar12 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8);
              }
              else {
                lVar12 = 0;
              }
              uVar6 = *(uint *)(lVar12 + 0x10);
              if (*(uint *)(lVar12 + 0x10) == 0) {
                LOCK();
                iVar15 = DAT_14c964868 + 1;
                UNLOCK();
                uVar16 = DAT_14c964868 + 1;
                bVar19 = DAT_14c964868 < 1000;
                DAT_14c964868 = iVar15;
                if (bVar19) {
                  FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                ,uVar16);
                }
                LOCK();
                uVar6 = *(uint *)(lVar12 + 0x10);
                bVar19 = uVar6 == 0;
                if (bVar19) {
                  *(uint *)(lVar12 + 0x10) = uVar16;
                  uVar6 = 0;
                }
                UNLOCK();
                if (bVar19) {
                  uVar6 = uVar16;
                }
              }
              puVar14[1] = uVar6;
            }
            else {
              uVar6 = *(uint *)(lVar9 + 0xc);
              if ((int)uVar6 < DAT_14c9647dc) {
                lVar12 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8);
              }
              else {
                lVar12 = 0;
              }
              if ((*(uint *)(lVar12 + 8) & 0x8400000) == 0) {
                FUN_14485c47a(puVar14,lVar9);
              }
            }
            if ((*(uint *)(lVar9 + 8) >> 0x1e & 1) == 0) goto LAB_14078983a;
          }
        }
        else {
LAB_14078983a:
          if (DAT_14c949118 == 0) {
            local_50 = FUN_140631fbe;
            lVar12 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
            DAT_14c949118 = lVar12;
            FUN_1446f470e(&local_60,L"Class",1);
            local_88 = &LAB_146891e90;
            local_90 = &LAB_146273097;
            local_a0 = L"Engine";
            local_98 = 199;
            local_a8 = 0x20;
            local_b0 = 0x10000000;
            local_b8 = (wchar_t *)CONCAT44(local_b8._4_4_,8);
            local_80 = &local_50;
            FUN_14574b4b2(lVar12);
            DAT_14c949118 = lVar12;
            uVar10 = FUN_144a7a812();
            lVar12 = DAT_14c949118;
            uVar11 = FUN_1449e2fb2();
            local_b8 = L"Class";
            FUN_14574b446(uVar11,lVar12,uVar10,L"/Script/CoreUObject");
          }
          if ((((*(int *)(DAT_14c949118 + 0x38) <= *(int *)(*(longlong *)(lVar9 + 0x10) + 0x38)) &&
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) +
                 (longlong)*(int *)(DAT_14c949118 + 0x38) * 8) == DAT_14c949118 + 0x30)) &&
              (lVar12 = FUN_140789e1e(), lVar12 != 0)) &&
             (*(int *)(lVar12 + 0x38) <= *(int *)(lVar9 + 0x38))) {
            lVar17 = 0;
            if (*(longlong *)(*(longlong *)(lVar9 + 0x30) + (longlong)*(int *)(lVar12 + 0x38) * 8)
                == lVar12 + 0x30) {
              lVar17 = lVar9;
            }
            if ((lVar17 == 0) || (DAT_14c950c29 == '\0')) {
              if (lVar17 == 0) goto LAB_140789911;
            }
            else {
              FUN_1456cec3c(lVar17);
            }
            lVar12 = FUN_140789e1e();
            uVar4 = uStack_70;
            if (((lVar12 != 0) && (*(int *)(lVar12 + 0x38) <= *(int *)(lVar9 + 0x38))) &&
               (*(longlong *)(*(longlong *)(lVar9 + 0x30) + (longlong)*(int *)(lVar12 + 0x38) * 8)
                == lVar12 + 0x30)) {
              lVar12 = (longlong)(int)uStack_70;
              uVar6 = (int)uStack_70 + 1;
              uStack_70 = CONCAT44(uStack_70._4_4_,uVar6);
              if (uStack_70._4_4_ < uVar6) {
                FUN_140789f3e(&local_78,uVar4 & 0xffffffff);
              }
              local_78[lVar12] = lVar9;
              if ((lVar17 != 0) && (DAT_14c950c29 != '\0')) {
                FUN_1456cec3c(lVar9);
              }
            }
          }
        }
LAB_140789911:
        puVar14 = puVar14 + 10;
        lVar8 = lVar8 + -0x28;
      } while (lVar8 != 0);
    }
    FUN_14078b280(param_1 + 0x380,lVar7,&local_78);
    if (local_78 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140789e1e FUN_140789e1e body=228 status=ok
// SIG undefined FUN_140789e1e(void)

longlong FUN_140789e1e(void)

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
  if (DAT_14cb58b70 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_145908fe6;
    local_38 = &LAB_148655bed;
    local_40 = &LAB_1418498f1;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0xa0;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxActorScript",&DAT_14cb58b70,FUN_1464c37d6);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb58b70;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140789f04 FUN_140789f04 body=57 status=ok
// SIG undefined FUN_140789f04(void)

void FUN_140789f04(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6f498 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6f498 = FUN_140002ddd(FUN_146540646,uVar1,L"SpawnPointDef");
  }
  return;
}



// FUNCTION 140789f3e FUN_140789f3e body=353 status=ok
// SIG undefined FUN_140789f3e(void)

void FUN_140789f3e(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140789fc3;
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
LAB_140789fc3:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 14078a0a0 FUN_14078a0a0 body=713 status=ok
// SIG undefined FUN_14078a0a0(void)

ulonglong FUN_14078a0a0(longlong *param_1,byte param_2)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  int iVar10;
  ulonglong uVar11;
  bool bVar12;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar4 = (longlong *)(**(code **)(*param_1 + 0x20))();
  if (plVar4 != (longlong *)0x0) {
    lVar5 = (**(code **)(*param_1 + 0x18))(param_1);
    if (lVar5 == 0) {
      lVar6 = 0;
    }
    else {
      lVar6 = (**(code **)(*(longlong *)(lVar5 + 0x50) + 0x10))(lVar5 + 0x50);
    }
    if ((lVar6 == plVar4[8] & (param_2 ^ 1)) == 0) {
      (**(code **)(*plVar4 + 0x18))(plVar4);
      local_78 = 0;
      uStack_70 = 0;
      local_88 = 0;
      uStack_80 = 0;
      local_68 = 0;
      if (lVar5 == 0) {
        local_88 = 0;
        uStack_80 = 0;
        local_78 = 0;
      }
      else {
        FUN_1400bbfc4(&local_60,lVar5);
        uStack_80 = CONCAT44(uStack_5c,local_60);
        local_78 = CONCAT44(uStack_54,uStack_58);
        if (uStack_70 != 0) {
          FUN_1400020a8();
        }
        uStack_70 = CONCAT44(uStack_4c,local_50);
        local_68 = CONCAT44(uStack_44,uStack_48);
        cVar2 = (*(code *)PTR_FUN_14c758760)();
        uVar1 = *(uint *)(lVar5 + 0xc);
        if (cVar2 != '\0') {
          if ((int)uVar1 < DAT_14c9647dc) {
            lVar7 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
          }
          else {
            lVar7 = 0;
          }
          if ((*(uint *)(lVar7 + 8) & 0x8400000) != 0) {
            local_88 = 0;
            goto LAB_14078a1fa;
          }
        }
        local_88 = CONCAT44(local_88._4_4_,uVar1);
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
          iVar10 = DAT_14c964868 + 1;
          bVar12 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar3;
          if (bVar12) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar10);
          }
          LOCK();
          iVar3 = *(int *)(lVar7 + 0x10);
          bVar12 = iVar3 == 0;
          if (bVar12) {
            *(int *)(lVar7 + 0x10) = iVar10;
            iVar3 = 0;
          }
          UNLOCK();
          if (bVar12) {
            iVar3 = iVar10;
          }
        }
        local_88 = CONCAT44(iVar3,(undefined4)local_88);
      }
LAB_14078a1fa:
      lVar7 = (**(code **)(*param_1 + 0x30))(param_1,&local_88);
      if (uStack_70 != 0) {
        FUN_1400020a8();
      }
      if (lVar7 != 0 && lVar5 != 0) {
        uVar8 = (**(code **)(*param_1 + 0x10))(param_1);
        FUN_140be4e26(lVar7,lVar5,uVar8);
      }
      if ((lVar6 != 0) && (lVar5 = (**(code **)(*param_1 + 0x10))(param_1), lVar5 != 0)) {
        FUN_14160e0aa(plVar4,lVar6,lVar5,0);
      }
      plVar4 = (longlong *)(**(code **)(*param_1 + 0x10))(param_1);
      uVar11 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
      if (plVar4 != (longlong *)0x0) {
        uVar8 = FUN_14058c2fc();
        plVar4 = (longlong *)(**(code **)(*plVar4 + 0x288))(plVar4,uVar8);
        if (plVar4 != (longlong *)0x0) {
          uVar8 = FUN_14058c2fc();
          plVar9 = (longlong *)FUN_144718840(plVar4,uVar8);
          if (((plVar4 != plVar9) && (plVar9 != (longlong *)0x0)) &&
             (lVar5 = (**(code **)(*plVar9 + 0x10))(plVar9), lVar5 != 0)) {
            *(undefined4 *)(lVar5 + 0x38) = 0xffffffff;
            if ((longlong)*(int *)(lVar5 + 0x30) != 0) {
              memset(*(void **)(lVar5 + 0x28),0,(longlong)*(int *)(lVar5 + 0x30) << 3);
            }
            FUN_1409ef882(lVar5 + 0x40,0);
          }
        }
      }
      goto LAB_14078a296;
    }
  }
  uVar11 = 0;
LAB_14078a296:
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar11 & 0xffffffff;
}



// FUNCTION 14078a36a FUN_14078a36a body=715 status=ok
// SIG undefined FUN_14078a36a(void)

void FUN_14078a36a(longlong param_1,longlong *param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 *puVar8;
  longlong lVar9;
  undefined1 auStack_488 [32];
  undefined4 local_468;
  undefined4 local_460;
  undefined4 local_458;
  undefined8 local_450;
  wchar_t *local_448;
  undefined1 *local_440;
  undefined1 *local_438;
  undefined8 *local_430;
  code *local_428;
  code *local_420;
  undefined8 local_418;
  undefined4 uStack_410;
  undefined4 uStack_40c;
  undefined1 local_408 [960];
  undefined1 *local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_488;
  local_48 = (undefined1 *)0x0;
  local_40 = 0xc00000000;
  (**(code **)(*param_2 + 0x10))(param_2,local_408);
  FUN_14078a7c0(param_1);
  FUN_14078a6f4(&local_418,param_2);
  *(undefined4 *)(param_1 + 0x10) = (undefined4)local_418;
  *(undefined4 *)(param_1 + 0x14) = local_418._4_4_;
  *(undefined4 *)(param_1 + 0x18) = uStack_410;
  *(undefined4 *)(param_1 + 0x1c) = uStack_40c;
  if ((((((*(int *)(param_1 + 0x14) != 0) && (uVar2 = *(uint *)(param_1 + 0x10), -1 < (int)uVar2))
        && ((int)uVar2 < DAT_14c9647dc)) &&
       (((plVar7 = (longlong *)
                   ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
         plVar7 != (longlong *)0x0 && ((int)plVar7[2] == *(int *)(param_1 + 0x14))) &&
        (((*(uint *)(plVar7 + 1) & 0x10200000) == 0 &&
         (((longlong *)*plVar7 != (longlong *)0x0 &&
          (lVar6 = (**(code **)(*(longlong *)*plVar7 + 0x180))(), lVar6 != 0)))))))) &&
      ((bVar1 = *(byte *)(lVar6 + 0x152), bVar1 == 1 ||
       ((bVar1 < 7 && ((0x68U >> (bVar1 & 0x1f) & 1) != 0)))))) &&
     (lVar6 = (**(code **)(*param_2 + 8))(param_2), lVar6 != 0)) {
    if (DAT_14cac9ca8 == 0) {
      local_418 = FUN_141030f22;
      local_420 = FUN_14081d0ea;
      local_428 = FUN_14081d0ea;
      local_438 = &LAB_1478c0a72;
      local_440 = &LAB_1417b2375;
      local_448 = L"Engine";
      local_450 = 0x1000000000;
      local_458 = 0x10000004;
      local_460 = 8;
      local_468 = 0x390;
      local_430 = &local_418;
      FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
    }
    if ((*(int *)(DAT_14cac9ca8 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) == DAT_14cac9ca8 + 0x30)) {
      iVar3 = *(int *)(lVar6 + 0x2d8);
      if ((longlong)iVar3 != 0) {
        lVar4 = *(longlong *)(lVar6 + 0x2d0);
        lVar9 = 0;
        do {
          if (((*(int *)(lVar4 + 8 + lVar9) != 0) &&
              (plVar7 = *(longlong **)(lVar4 + lVar9), plVar7 != (longlong *)0x0)) &&
             (cVar5 = (**(code **)(*plVar7 + 0x20))(plVar7,param_1), cVar5 != '\0'))
          goto LAB_14078a4d0;
          lVar9 = lVar9 + 0x10;
        } while ((longlong)iVar3 * 0x10 != lVar9);
      }
      FUN_14078af92(lVar6 + 0x2d0,&local_418,param_1,FUN_14045d442);
    }
  }
LAB_14078a4d0:
  puVar8 = local_408;
  if (local_48 != (undefined1 *)0x0) {
    puVar8 = local_48;
  }
  if ((longlong)(int)local_40 != 0) {
    lVar6 = (longlong)(int)local_40 * 0x50;
    do {
      FUN_14078a636(param_1,puVar8);
      puVar8 = puVar8 + 0x50;
      lVar6 = lVar6 + -0x50;
    } while (lVar6 != 0);
  }
  FUN_14078a6b6(local_408);
  if ((local_38 ^ (ulonglong)auStack_488) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14078a636 FUN_14078a636 body=126 status=ok
// SIG undefined FUN_14078a636(void)

void FUN_14078a636(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1448ec792(param_2,&local_28);
  if (local_28 != 0) {
    FUN_14078ab28(param_1);
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
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14078a6b6 FUN_14078a6b6 body=61 status=ok
// SIG undefined FUN_14078a6b6(void)

void FUN_14078a6b6(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x3c0);
  if (*(longlong *)(param_1 + 0x3c0) == 0) {
    lVar1 = param_1;
  }
  FUN_1401ede73(lVar1,*(undefined4 *)(param_1 + 0x3c8));
  if (*(longlong *)(param_1 + 0x3c0) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14078a6f4 FUN_14078a6f4 body=204 status=ok
// SIG undefined FUN_14078a6f4(void)

uint * FUN_14078a6f4(uint *param_1,longlong *param_2)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  bool bVar6;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  if ((param_2 == (longlong *)0x0) || (lVar4 = (**(code **)(*param_2 + 8))(param_2), lVar4 == 0)) {
    *param_1 = 0;
    uVar3 = 0;
  }
  else {
    uVar3 = *(uint *)(lVar4 + 0xc);
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
      uVar5 = DAT_14c964868 + 1;
      bVar6 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar1;
      if (bVar6) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar5);
      }
      LOCK();
      uVar3 = *(uint *)(lVar4 + 0x10);
      bVar6 = uVar3 == 0;
      if (bVar6) {
        *(uint *)(lVar4 + 0x10) = uVar5;
        uVar3 = 0;
      }
      UNLOCK();
      if (bVar6) {
        uVar3 = uVar5;
      }
    }
  }
  param_1[1] = uVar3;
  cVar2 = FUN_14493c216(param_1,0);
  if (cVar2 == '\0') {
    *(longlong **)(param_1 + 2) = param_2;
  }
  return param_1;
}



// FUNCTION 14078a7c0 FUN_14078a7c0 body=664 status=ok
// SIG undefined FUN_14078a7c0(void)

void FUN_14078a7c0(longlong *param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  wchar_t *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  code **local_70;
  code *local_68;
  code *local_60;
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  puVar1 = (uint *)(param_1 + 2);
  if ((((((longlong *)param_1[3] != (longlong *)0x0) && (*(int *)((longlong)param_1 + 0x14) != 0))
       && (uVar3 = *puVar1, -1 < (int)uVar3)) &&
      (((int)uVar3 < DAT_14c9647dc &&
       (lVar6 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8), lVar6 != 0)))) &&
     ((*(int *)(lVar6 + 0x10) == *(int *)((longlong)param_1 + 0x14) &&
      (((*(uint *)(lVar6 + 8) & 0x10200000) == 0 &&
       (lVar6 = (**(code **)(*(longlong *)param_1[3] + 8))(), lVar6 != 0)))))) {
    if (DAT_14cac9ca8 == 0) {
      local_70 = &local_50;
      local_50 = FUN_141030f22;
      local_60 = FUN_14081d0ea;
      local_68 = FUN_14081d0ea;
      local_78 = &LAB_1478c0a72;
      local_80 = &LAB_1417b2375;
      local_88 = L"Engine";
      local_90 = 0x1000000000;
      local_98 = 0x10000004;
      local_a0 = 8;
      local_a8 = 0x390;
      FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
    }
    if ((*(int *)(DAT_14cac9ca8 + 0x38) <= *(int *)(*(longlong *)(lVar6 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) == DAT_14cac9ca8 + 0x30)) {
      FUN_140457ffc(lVar6 + 0x2d0,param_1);
    }
  }
  lVar6 = *param_1;
  if ((longlong)(int)param_1[1] == 0) {
    uVar5 = 0;
  }
  else {
    lVar8 = (longlong)(int)param_1[1] * 0x88 + lVar6;
    do {
      iVar2 = *(int *)(lVar6 + 0x10);
      if ((longlong)iVar2 != 0) {
        lVar4 = *(longlong *)(lVar6 + 8);
        lVar7 = 0;
        do {
          if (*(longlong *)(lVar4 + lVar7) != 0) {
            FUN_14078b1f4();
          }
          lVar7 = lVar7 + 0x10;
        } while ((longlong)iVar2 * 0x10 != lVar7);
      }
      lVar6 = lVar6 + 0x88;
    } while (lVar6 != lVar8);
    uVar5 = (undefined4)param_1[1];
    lVar6 = *param_1;
  }
  iVar2 = *(int *)((longlong)param_1 + 0xc);
  FUN_14078aa76(lVar6,uVar5);
  *(undefined4 *)(param_1 + 1) = 0;
  if ((iVar2 < 0) && (*(int *)((longlong)param_1 + 0xc) != 0)) {
    FUN_14174000a(param_1,0);
  }
  puVar1[0] = 0;
  puVar1[1] = 0;
  param_1[3] = 0;
  FUN_1448a8284(param_1 + 0xb);
  FUN_1448a8284(param_1 + 8);
  *(undefined4 *)(param_1 + 7) = 0;
  if (*(int *)((longlong)param_1 + 0x3c) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_c8);
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14078aa76 FUN_14078aa76 body=102 status=ok
// SIG undefined FUN_14078aa76(void)

void FUN_14078aa76(longlong param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 != 0) {
    plVar3 = (longlong *)(param_1 + 8);
    do {
      plVar2 = (longlong *)plVar3[0xb];
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar2 + 0x10))();
        }
      }
      if (plVar3[5] != 0) {
        FUN_1400020a8();
      }
      FUN_14078aadc(*plVar3,(int)plVar3[1]);
      if (*plVar3 != 0) {
        FUN_1400020a8();
      }
      plVar3 = plVar3 + 0x11;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14078aadc FUN_14078aadc body=75 status=ok
// SIG undefined FUN_14078aadc(void)

void FUN_14078aadc(longlong param_1,int param_2)

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
      plVar4 = plVar4 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14078ab28 FUN_14078ab28 body=1127 status=ok
// SIG undefined FUN_14078ab28(void)

void FUN_14078ab28(longlong *param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined4 *puVar3;
  uint uVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  undefined1 auStack_b8 [32];
  longlong local_98;
  longlong local_90;
  longlong local_88;
  longlong local_80;
  longlong *local_78;
  longlong local_70;
  longlong *local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((((((0 < *(int *)(param_2 + 0x80)) && (*(int *)((longlong)param_1 + 0x14) != 0)) &&
        (uVar4 = *(uint *)(param_1 + 2), -1 < (int)uVar4)) &&
       (((int)uVar4 < DAT_14c9647dc &&
        (plVar13 = (longlong *)
                   ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8)),
        plVar13 != (longlong *)0x0)))) &&
      (((int)plVar13[2] == *(int *)((longlong)param_1 + 0x14) &&
       (((*(uint *)(plVar13 + 1) & 0x10200000) == 0 && ((longlong *)*plVar13 != (longlong *)0x0)))))
      ) && (lVar8 = (**(code **)(*(longlong *)*plVar13 + 0x180))(), lVar8 != 0)) {
    iVar7 = *(int *)(param_2 + 0x80);
    iVar12 = (int)param_1[1] + iVar7;
    if (iVar12 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar12);
    }
    if (*(int *)((longlong)param_1 + 0xc) < iVar12) {
      FUN_14174000a(param_1);
      iVar7 = *(int *)(param_2 + 0x80);
    }
    if (0 < iVar7) {
      local_98 = param_2 + 0x18;
      lVar8 = 0;
      local_88 = param_2;
      do {
        lVar5 = *(longlong *)(*(longlong *)(param_2 + 0x78) + lVar8 * 0x90);
        if (lVar5 != 0) {
          lVar16 = *param_1;
          iVar7 = (int)param_1[1];
          lVar18 = (longlong)iVar7;
          if (lVar18 != 0) {
            lVar10 = 0;
            do {
              if (*(longlong *)(lVar16 + 0x68 + lVar10) == lVar5) {
                iVar12 = (int)(lVar10 >> 3) * -0xf0f0f0f;
                if (iVar12 != -1) {
                  piVar1 = (int *)(lVar16 + (longlong)iVar12 * 0x88);
                  *piVar1 = *piVar1 + 1;
                  goto LAB_14078ad8f;
                }
                break;
              }
              lVar10 = lVar10 + 0x88;
            } while (lVar18 * 0x88 != lVar10);
          }
          lVar10 = *(longlong *)(param_2 + 0x78) + lVar8 * 0x90;
          if ((*(longlong *)(lVar10 + 0x30) != 0) ||
             ((lVar17 = local_98, *(longlong *)(lVar10 + 0x50) != 0 &&
              (*(longlong *)(lVar10 + 0x58) != 0)))) {
            lVar17 = lVar10 + 0x28;
          }
          if ((longlong)(int)param_1[5] != 0) {
            plVar13 = (longlong *)param_1[4];
            lVar11 = (longlong)(int)param_1[5] * 0x18;
            do {
              if (*plVar13 == lVar5) goto LAB_14078acb4;
              plVar13 = plVar13 + 3;
              lVar11 = lVar11 + -0x18;
            } while (lVar11 != 0);
          }
          plVar13 = (longlong *)0x0;
LAB_14078acb4:
          plVar14 = (longlong *)((longlong)plVar13 + 0xc);
          if (plVar13 == (longlong *)0x0) {
            plVar14 = (longlong *)(lVar10 + 0x18);
          }
          lVar11 = *plVar14;
          iVar12 = (int)plVar14[1];
          if (iVar12 == -1) {
            iVar12 = -1;
            if ((longlong)*(int *)(lVar10 + 0x10) != 0) {
              lVar9 = (longlong)*(int *)(lVar10 + 0x10) << 3;
              lVar15 = 0;
              do {
                if (*(longlong *)(*(longlong *)(lVar10 + 8) + lVar15 * 8) == lVar11) {
                  iVar12 = (int)lVar15;
                  break;
                }
                lVar15 = lVar15 + 1;
                lVar9 = lVar9 + -8;
              } while (lVar9 != 0);
            }
          }
          *(uint *)(param_1 + 1) = iVar7 + 1U;
          local_90 = lVar8;
          if (*(uint *)((longlong)param_1 + 0xc) < iVar7 + 1U) {
            FUN_1470d926a(param_1,iVar7);
            lVar16 = *param_1;
          }
          lVar18 = lVar18 * 0x88;
          puVar3 = (undefined4 *)(lVar16 + lVar18);
          *puVar3 = 1;
          *(undefined8 *)(puVar3 + 2) = 0;
          *(undefined8 *)(puVar3 + 4) = 0;
          FUN_14042b2d2(puVar3 + 6,lVar17);
          *(longlong *)(puVar3 + 0x1a) = lVar5;
          puVar3[0x1c] = (int)local_90;
          *(longlong *)(puVar3 + 0x1e) = lVar11;
          puVar3[0x20] = iVar12;
          puVar3[0x21] = 0xff7fffff;
          iVar7 = *(int *)(lVar10 + 0x80);
          if (iVar7 < 0) {
                    /* WARNING: Subroutine does not return */
            FUN_1456afac4(iVar7);
          }
          lVar5 = lVar16 + lVar18;
          iVar12 = *(int *)(lVar5 + 0x14);
          FUN_14078aadc(*(undefined8 *)(lVar5 + 8),*(undefined4 *)(lVar5 + 0x10));
          *(undefined4 *)(lVar5 + 0x10) = 0;
          if ((iVar12 < iVar7) && (*(int *)(lVar5 + 0x14) != iVar7)) {
            FUN_14173ff36(lVar16 + lVar18 + 8,iVar7);
          }
          lVar8 = local_90;
          param_2 = local_88;
          local_80 = lVar5;
          local_78 = param_1;
          if ((longlong)*(int *)(lVar10 + 0x80) != 0) {
            plVar14 = *(longlong **)(lVar10 + 0x78);
            plVar13 = plVar14 + (longlong)*(int *)(lVar10 + 0x80) * 3;
            do {
              lVar5 = *plVar14;
              plVar6 = (longlong *)plVar14[1];
              if (plVar6 == (longlong *)0x0) {
                if (lVar5 != 0) {
                  local_68 = (longlong *)0x0;
                  local_70 = lVar5;
                  FUN_142b36f5e(&local_80,&local_70);
                }
              }
              else {
                LOCK();
                *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
                UNLOCK();
                LOCK();
                *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
                UNLOCK();
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
                if (lVar5 != 0) {
                  LOCK();
                  *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
                  UNLOCK();
                  local_70 = lVar5;
                  local_68 = plVar6;
                  FUN_142b36f5e(&local_80,&local_70);
                  if (plVar6 != (longlong *)0x0) {
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
              plVar14 = plVar14 + 3;
              param_2 = local_88;
            } while (plVar14 != plVar13);
          }
        }
LAB_14078ad8f:
        lVar8 = lVar8 + 1;
      } while (lVar8 < *(int *)(param_2 + 0x80));
    }
  }
  if ((local_60 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14078af92 FUN_14078af92 body=604 status=ok
// SIG undefined FUN_14078af92(void)

undefined8 * FUN_14078af92(longlong *param_1,undefined8 *param_2,longlong param_3,longlong param_4)

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
  *local_50 = (longlong)&PTR_LAB_14a1c7440;
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
  *local_50 = (longlong)&PTR_FUN_14a1c70f0;
  local_50[3] = param_3;
  local_50[4] = param_4;
  *param_2 = 0;
  if ((local_50 == (longlong *)0x0) || (cVar4 = (**(code **)(*local_50 + 0x30))(), cVar4 == '\0')) {
    if (local_48 != 0) {
      if (local_50 == (longlong *)0x0) goto LAB_14078b0f3;
      (**(code **)*local_50)(local_50,0);
      FUN_1446efa72(&local_50,0,0,0x10);
      goto LAB_14078b0dd;
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
LAB_14078b0dd:
    local_48 = 0;
  }
  if (local_50 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_14078b0f3:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14078b1f4 FUN_14078b1f4 body=139 status=ok
// SIG undefined FUN_14078b1f4(void)

void FUN_14078b1f4(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (param_1[7] != 0) {
    if (DAT_14c872a72 == '\0') {
      if ((char)param_1[9] == '\x01') {
        (**(code **)(*param_1 + 0x48))(param_1);
      }
      (**(code **)(*param_1 + 0x28))(param_1);
    }
    *(undefined1 *)(param_1 + 9) = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    *(undefined4 *)(param_1 + 6) = 0xffffffff;
    param_1[7] = 0;
    plVar3 = (longlong *)param_1[8];
    if (plVar3 != (longlong *)0x0) {
      param_1[8] = 0;
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
                    /* WARNING: Could not recover jumptable at 0x00014078b27b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar3 + 0x10))(plVar3);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 14078b280 FUN_14078b280 body=3336 status=ok
// SIG undefined FUN_14078b280(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14078b280(longlong param_1,ulonglong param_2,longlong *param_3)

{
  ulonglong *puVar1;
  byte bVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  char cVar18;
  longlong lVar19;
  undefined8 uVar20;
  longlong lVar21;
  ulonglong uVar22;
  undefined1 *puVar23;
  longlong lVar24;
  longlong *plVar25;
  longlong *plVar26;
  ulonglong uVar27;
  int iVar28;
  int iVar29;
  longlong lVar30;
  code *pcVar31;
  bool bVar32;
  undefined4 uVar33;
  undefined4 uVar35;
  undefined1 auVar34 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar36 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar37 [16];
  undefined1 in_XMM3 [16];
  undefined1 auVar38 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar39 [16];
  undefined1 in_XMM5 [16];
  undefined1 auVar40 [16];
  undefined1 unaff_XMM6 [16];
  undefined1 auVar41 [16];
  undefined1 unaff_XMM7 [16];
  undefined1 auVar42 [16];
  undefined1 unaff_XMM8 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 unaff_XMM14 [16];
  undefined1 auVar55 [16];
  undefined1 auStack_218 [32];
  undefined4 local_1f8;
  undefined4 local_1f0;
  undefined4 local_1e8;
  undefined8 local_1e0;
  wchar_t *local_1d8;
  undefined1 *local_1d0;
  undefined1 *local_1c8;
  code **local_1c0;
  code *local_1b8;
  code *local_1b0;
  ulonglong local_1a8;
  longlong local_1a0;
  longlong local_198;
  longlong *local_190;
  longlong local_188;
  undefined1 local_180 [8];
  code *local_178;
  ulonglong local_170;
  undefined1 local_168 [16];
  undefined2 local_158;
  undefined1 local_150 [16];
  undefined8 local_140;
  longlong local_138;
  longlong *local_128;
  longlong local_118 [4];
  undefined8 local_f8;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_218;
  if ((param_2 != 0) && (uVar22 = param_2, *(longlong *)(param_1 + 0x60) == 0)) {
    do {
      if ((*(uint *)(uVar22 + 8) & 0x30) != 0) goto LAB_14078beb1;
      puVar1 = (ulonglong *)(uVar22 + 0x20);
      uVar22 = *puVar1;
    } while (*puVar1 != 0);
    lVar19 = FUN_1447210f0(param_2);
    if ((lVar19 != 0) && (*(longlong *)(lVar19 + 0x30) != 0)) {
      if (DAT_14c950c29 == 1) {
        FUN_1456cec3c(param_2);
      }
      bVar2 = DAT_14c950c29;
      *(ulonglong *)(param_1 + 0x60) = param_2;
      if ((bVar2 & 1) != 0) {
        FUN_1456cec3c(param_2);
      }
      *(ulonglong *)(param_1 + 0x50) = param_2;
      uVar20 = FUN_140d4a144();
      uVar20 = FUN_144718840(param_2,uVar20);
      *(undefined8 *)(param_1 + 0x58) = uVar20;
      if (*(longlong *)(param_1 + 0x60) == 0) {
        bVar32 = false;
      }
      else {
        bVar32 = *(char *)(*(longlong *)(param_1 + 0x60) + 0x178) == '\x03';
      }
      *(bool *)(param_1 + 0x68) = bVar32;
      *(undefined1 *)(param_1 + 0x6a) = 0;
      iVar28 = (int)param_3[1];
      if (iVar28 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(iVar28);
      }
      plVar25 = (longlong *)(param_1 + 0x20);
      local_1a8 = param_2;
      if (*(int *)(param_1 + 0x2c) < iVar28) {
        FUN_140b520ec(plVar25);
        iVar28 = (int)param_3[1];
      }
      local_188 = lVar19;
      if (iVar28 != 0) {
        lVar19 = *param_3;
        lVar30 = 0;
        do {
          lVar24 = *(longlong *)(lVar19 + lVar30);
          if ((((lVar24 != 0) && (lVar21 = FUN_140789e1e(), lVar21 != 0)) &&
              (*(int *)(lVar21 + 0x38) <= *(int *)(lVar24 + 0x38))) &&
             ((*(longlong *)(*(longlong *)(lVar24 + 0x30) + (longlong)*(int *)(lVar21 + 0x38) * 8)
               == lVar21 + 0x30 &&
              (plVar26 = *(longlong **)(lVar19 + lVar30), plVar26 != (longlong *)0x0)))) {
            lVar24 = plVar26[0x22];
            if (lVar24 == 0) {
              (**(code **)(*plVar26 + 1000))(plVar26);
              lVar24 = plVar26[0x22];
              if (lVar24 == 0) goto LAB_14078b415;
            }
            lVar21 = *(longlong *)(param_1 + 0x60);
            lVar24 = *(longlong *)(lVar24 + 0x38);
            if ((DAT_14c950c29 == 1) && (lVar24 != 0)) {
              FUN_1456cec3c(lVar24);
LAB_14078b46f:
              if (DAT_14cac9ca8 == 0) {
                local_178 = FUN_141030f22;
                local_1b0 = FUN_14081d0ea;
                local_1b8 = FUN_14081d0ea;
                local_1c0 = &local_178;
                local_1c8 = &LAB_1478c0a72;
                local_1d0 = &LAB_1417b2375;
                local_1d8 = L"Engine";
                local_1e0 = 0x1000000000;
                local_1e8 = 0x10000004;
                local_1f0 = 8;
                local_1f8 = 0x390;
                FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
                if (DAT_14cac9ca8 == 0) goto LAB_14078b497;
              }
              if ((*(int *)(lVar24 + 0x38) < *(int *)(DAT_14cac9ca8 + 0x38)) ||
                 (*(longlong *)
                   (*(longlong *)(lVar24 + 0x30) + (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) !=
                  DAT_14cac9ca8 + 0x30)) goto LAB_14078b497;
            }
            else {
              if (lVar24 != 0) goto LAB_14078b46f;
LAB_14078b497:
              lVar24 = 0;
            }
            lVar21 = *(longlong *)(lVar21 + 0x10);
            if ((*(int *)(lVar24 + 0x38) <= *(int *)(lVar21 + 0x38)) &&
               (*(longlong *)(*(longlong *)(lVar21 + 0x30) + (longlong)*(int *)(lVar24 + 0x38) * 8)
                == lVar24 + 0x30)) {
              iVar29 = *(int *)(param_1 + 0x28);
              *(uint *)(param_1 + 0x28) = iVar29 + 1U;
              if (*(uint *)(param_1 + 0x2c) < iVar29 + 1U) {
                FUN_140789f3e(plVar25,iVar29);
              }
              lVar24 = *(longlong *)(lVar19 + lVar30);
              *(longlong *)(*plVar25 + (longlong)iVar29 * 8) = lVar24;
              if ((lVar24 != 0 & DAT_14c950c29) == 1) {
                FUN_1456cec3c();
              }
            }
          }
LAB_14078b415:
          lVar30 = lVar30 + 8;
        } while ((longlong)iVar28 * 8 != lVar30);
      }
      auVar17 = _DAT_149931e80;
      if ((longlong)*(int *)(param_1 + 0x48) != 0) {
        uVar22 = (longlong)*(int *)(param_1 + 0x48) * 0x88 - 0x88;
        auVar36._8_8_ = 0;
        auVar36._0_8_ = uVar22;
        uVar33 = SUB164(auVar36 * ZEXT816(0xf0f0f0f0f0f0f0f1),8);
        uVar35 = (undefined4)(uVar22 / 0x110000000);
        auVar37._0_8_ = CONCAT44(uVar35,uVar33);
        auVar37._8_4_ = uVar33;
        auVar37._12_4_ = uVar35;
        auVar34._0_8_ = auVar37._0_8_ >> 7;
        auVar34._8_8_ = auVar37._8_8_ >> 7;
        puVar23 = (undefined1 *)(*(longlong *)(param_1 + 0x40) + 0x860);
        uVar27 = 0;
        auVar36 = pmovsxbq(in_XMM1,0xf0e);
        auVar37 = pmovsxbq(in_XMM2,0xd0c);
        auVar38 = pmovsxbq(in_XMM3,0xb0a);
        auVar39 = pmovsxbq(in_XMM4,0x908);
        auVar40 = pmovsxbq(in_XMM5,0x706);
        auVar41 = pmovsxbq(unaff_XMM6,0x504);
        auVar42 = pmovsxbq(unaff_XMM7,0x302);
        auVar43 = pmovsxbq(unaff_XMM8,0x100);
        do {
          auVar44._8_4_ = (int)uVar27;
          auVar44._0_8_ = uVar27;
          auVar44._12_4_ = (int)(uVar27 >> 0x20);
          auVar46 = auVar34 | auVar17;
          auVar47 = (auVar44 | auVar43) ^ auVar17;
          lVar19 = auVar46._0_8_;
          auVar48._0_8_ = -(ulonglong)(lVar19 < auVar47._0_8_);
          lVar30 = auVar46._8_8_;
          auVar48._8_8_ = -(ulonglong)(lVar30 < auVar47._8_8_);
          auVar55 = pshuflw(unaff_XMM14,auVar48,0xe8);
          auVar47._8_4_ = 0xffffffff;
          auVar47._0_8_ = 0xffffffffffffffff;
          auVar47._12_4_ = 0xffffffff;
          auVar47 = packssdw(auVar55 ^ auVar47,auVar55 ^ auVar47);
          if ((auVar47._0_4_ & 1) != 0) {
            puVar23[-0x7f8] = 0;
          }
          auVar48 = packssdw(auVar48,auVar48);
          auVar55._8_4_ = 0xffffffff;
          auVar55._0_8_ = 0xffffffffffffffff;
          auVar55._12_4_ = 0xffffffff;
          auVar48 = packssdw(auVar48 ^ auVar55,auVar48 ^ auVar55);
          auVar48 = packsswb(auVar48,auVar48);
          if ((auVar48[1] & 1) != 0) {
            puVar23[-0x770] = 0;
          }
          auVar48 = (auVar44 | auVar42) ^ auVar17;
          auVar49._0_8_ = -(ulonglong)(lVar19 < auVar48._0_8_);
          auVar49._8_8_ = -(ulonglong)(lVar30 < auVar48._8_8_);
          auVar47 = packssdw(auVar47,auVar49);
          auVar4._8_4_ = 0xffffffff;
          auVar4._0_8_ = 0xffffffffffffffff;
          auVar4._12_4_ = 0xffffffff;
          auVar47 = packssdw(auVar47 ^ auVar4,auVar47 ^ auVar4);
          auVar47 = packsswb(auVar47,auVar47);
          if ((auVar47[2] & 1) != 0) {
            puVar23[-0x6e8] = 0;
          }
          auVar48 = pshufhw(auVar49,auVar49,0x84);
          auVar5._8_4_ = 0xffffffff;
          auVar5._0_8_ = 0xffffffffffffffff;
          auVar5._12_4_ = 0xffffffff;
          auVar48 = packssdw(auVar48 ^ auVar5,auVar48 ^ auVar5);
          auVar48 = packsswb(auVar48,auVar48);
          if ((auVar48[3] & 1) != 0) {
            puVar23[-0x660] = 0;
          }
          auVar48 = (auVar44 | auVar41) ^ auVar17;
          auVar50._0_8_ = -(ulonglong)(lVar19 < auVar48._0_8_);
          auVar50._8_8_ = -(ulonglong)(lVar30 < auVar48._8_8_);
          auVar47 = pshuflw(auVar47,auVar50,0xe8);
          auVar6._8_4_ = 0xffffffff;
          auVar6._0_8_ = 0xffffffffffffffff;
          auVar6._12_4_ = 0xffffffff;
          auVar47 = packssdw(auVar47 ^ auVar6,auVar47 ^ auVar6);
          auVar47 = packsswb(auVar47,auVar47);
          if ((auVar47[4] & 1) != 0) {
            puVar23[-0x5d8] = 0;
          }
          auVar48 = packssdw(auVar50,auVar50);
          auVar7._8_4_ = 0xffffffff;
          auVar7._0_8_ = 0xffffffffffffffff;
          auVar7._12_4_ = 0xffffffff;
          auVar48 = packssdw(auVar48 ^ auVar7,auVar48 ^ auVar7);
          auVar48 = packsswb(auVar48,auVar48);
          if ((auVar48[5] & 1) != 0) {
            puVar23[-0x550] = 0;
          }
          auVar48 = (auVar44 | auVar40) ^ auVar17;
          auVar51._0_8_ = -(ulonglong)(lVar19 < auVar48._0_8_);
          auVar51._8_8_ = -(ulonglong)(lVar30 < auVar48._8_8_);
          auVar47 = packssdw(auVar47,auVar51);
          auVar8._8_4_ = 0xffffffff;
          auVar8._0_8_ = 0xffffffffffffffff;
          auVar8._12_4_ = 0xffffffff;
          auVar47 = packssdw(auVar47 ^ auVar8,auVar47 ^ auVar8);
          auVar47 = packsswb(auVar47,auVar47);
          if ((auVar47[6] & 1) != 0) {
            puVar23[-0x4c8] = 0;
          }
          auVar48 = pshufhw(auVar51,auVar51,0x84);
          auVar9._8_4_ = 0xffffffff;
          auVar9._0_8_ = 0xffffffffffffffff;
          auVar9._12_4_ = 0xffffffff;
          auVar48 = packssdw(auVar48 ^ auVar9,auVar48 ^ auVar9);
          auVar48 = packsswb(auVar48,auVar48);
          if ((auVar48[7] & 1) != 0) {
            puVar23[-0x440] = 0;
          }
          auVar48 = (auVar44 | auVar39) ^ auVar17;
          auVar52._0_8_ = -(ulonglong)(lVar19 < auVar48._0_8_);
          auVar52._8_8_ = -(ulonglong)(lVar30 < auVar48._8_8_);
          auVar47 = pshuflw(auVar47,auVar52,0xe8);
          auVar10._8_4_ = 0xffffffff;
          auVar10._0_8_ = 0xffffffffffffffff;
          auVar10._12_4_ = 0xffffffff;
          auVar47 = packssdw(auVar47 ^ auVar10,auVar47 ^ auVar10);
          auVar47 = packsswb(auVar47,auVar47);
          if ((auVar47[8] & 1) != 0) {
            puVar23[-0x3b8] = 0;
          }
          auVar48 = packssdw(auVar52,auVar52);
          auVar11._8_4_ = 0xffffffff;
          auVar11._0_8_ = 0xffffffffffffffff;
          auVar11._12_4_ = 0xffffffff;
          auVar48 = packssdw(auVar48 ^ auVar11,auVar48 ^ auVar11);
          auVar48 = packsswb(auVar48,auVar48);
          if ((auVar48[9] & 1) != 0) {
            puVar23[-0x330] = 0;
          }
          auVar48 = (auVar44 | auVar38) ^ auVar17;
          auVar53._0_8_ = -(ulonglong)(lVar19 < auVar48._0_8_);
          auVar53._8_8_ = -(ulonglong)(lVar30 < auVar48._8_8_);
          auVar47 = packssdw(auVar47,auVar53);
          auVar12._8_4_ = 0xffffffff;
          auVar12._0_8_ = 0xffffffffffffffff;
          auVar12._12_4_ = 0xffffffff;
          auVar47 = packssdw(auVar47 ^ auVar12,auVar47 ^ auVar12);
          auVar47 = packsswb(auVar47,auVar47);
          if ((auVar47[10] & 1) != 0) {
            puVar23[-0x2a8] = 0;
          }
          auVar48 = pshufhw(auVar53,auVar53,0x84);
          auVar13._8_4_ = 0xffffffff;
          auVar13._0_8_ = 0xffffffffffffffff;
          auVar13._12_4_ = 0xffffffff;
          auVar48 = packssdw(auVar48 ^ auVar13,auVar48 ^ auVar13);
          auVar48 = packsswb(auVar48,auVar48);
          if ((auVar48[0xb] & 1) != 0) {
            puVar23[-0x220] = 0;
          }
          auVar48 = (auVar44 | auVar37) ^ auVar17;
          auVar54._0_8_ = -(ulonglong)(lVar19 < auVar48._0_8_);
          auVar54._8_8_ = -(ulonglong)(lVar30 < auVar48._8_8_);
          auVar47 = pshuflw(auVar47,auVar54,0xe8);
          auVar14._8_4_ = 0xffffffff;
          auVar14._0_8_ = 0xffffffffffffffff;
          auVar14._12_4_ = 0xffffffff;
          auVar47 = packssdw(auVar47 ^ auVar14,auVar47 ^ auVar14);
          unaff_XMM14 = packsswb(auVar47,auVar47);
          if ((unaff_XMM14[0xc] & 1) != 0) {
            puVar23[-0x198] = 0;
          }
          auVar47 = packssdw(auVar54,auVar54);
          auVar15._8_4_ = 0xffffffff;
          auVar15._0_8_ = 0xffffffffffffffff;
          auVar15._12_4_ = 0xffffffff;
          auVar47 = packssdw(auVar47 ^ auVar15,auVar47 ^ auVar15);
          auVar47 = packsswb(auVar47,auVar47);
          if ((auVar47[0xd] & 1) != 0) {
            puVar23[-0x110] = 0;
          }
          auVar47 = (auVar44 | auVar36) ^ auVar17;
          auVar45._0_8_ = -(ulonglong)(lVar19 < auVar47._0_8_);
          auVar45._8_8_ = -(ulonglong)(lVar30 < auVar47._8_8_);
          auVar47 = packssdw(auVar46,auVar45);
          auVar46._8_4_ = 0xffffffff;
          auVar46._0_8_ = 0xffffffffffffffff;
          auVar46._12_4_ = 0xffffffff;
          auVar47 = packssdw(auVar47 ^ auVar46,auVar47 ^ auVar46);
          auVar47 = packsswb(auVar47,auVar47);
          if ((auVar47[0xe] & 1) != 0) {
            puVar23[-0x88] = 0;
          }
          auVar47 = pshufhw(auVar45,auVar45,0x84);
          auVar16._8_4_ = 0xffffffff;
          auVar16._0_8_ = 0xffffffffffffffff;
          auVar16._12_4_ = 0xffffffff;
          auVar47 = packssdw(auVar47 ^ auVar16,auVar47 ^ auVar16);
          auVar47 = packsswb(auVar47,auVar47);
          if ((auVar47[0xf] & 1) != 0) {
            *puVar23 = 0;
          }
          uVar27 = uVar27 + 0x10;
          puVar23 = puVar23 + 0x880;
        } while ((uVar22 / 0x88 + 0x10 & 0xfffffffffffffff0) != uVar27);
      }
      local_198 = (longlong)*(int *)(param_1 + 0x28);
      local_1a0 = param_1;
      if (local_198 != 0) {
        lVar19 = *(longlong *)(param_1 + 0x20);
        local_190 = (longlong *)(param_1 + 0x30);
        local_198 = local_198 << 3;
        lVar30 = 0;
        do {
          lVar24 = *(longlong *)(lVar19 + lVar30);
          if ((((lVar24 == 0) || (lVar21 = FUN_140789e1e(), lVar21 == 0)) ||
              (*(int *)(lVar24 + 0x38) < *(int *)(lVar21 + 0x38))) ||
             (*(longlong *)(*(longlong *)(lVar24 + 0x30) + (longlong)*(int *)(lVar21 + 0x38) * 8) !=
              lVar21 + 0x30)) {
            plVar25 = (longlong *)0x0;
          }
          else {
            plVar25 = *(longlong **)(lVar19 + lVar30);
          }
          plVar26 = (longlong *)plVar25[0x22];
          if (plVar26 == (longlong *)0x0) {
            (**(code **)(*plVar25 + 1000))(plVar25);
            plVar26 = (longlong *)plVar25[0x22];
          }
          cVar18 = (**(code **)(*plVar26 + 0x2c8))();
          if ((cVar18 == '\0') || (*(char *)(local_1a8 + 0x178) == '\x03')) {
            uVar3 = *(uint *)(local_1a8 + 8);
            lVar24 = *(longlong *)(lVar19 + lVar30);
            if (((lVar24 == 0) ||
                ((lVar21 = FUN_140789e1e(), lVar21 == 0 ||
                 (*(int *)(lVar24 + 0x38) < *(int *)(lVar21 + 0x38))))) ||
               (*(longlong *)(*(longlong *)(lVar24 + 0x30) + (longlong)*(int *)(lVar21 + 0x38) * 8)
                != lVar21 + 0x30)) {
              pcVar31 = (code *)0x0;
            }
            else {
              pcVar31 = *(code **)(lVar19 + lVar30);
            }
            uVar22 = local_1a8;
            FUN_14058b40c(local_1a8,
                          L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                         );
            local_128 = (longlong *)0x0;
            local_f8 = 0;
            local_158 = 0;
            local_138 = 0;
            local_170 = uVar22;
            local_168 = ZEXT416(uVar3 & 0x29 | 0x900040) << 0x40;
            local_140 = 0;
            local_150 = (undefined1  [16])0x0;
            local_178 = pcVar31;
            lVar24 = FUN_1402710dd(&local_178);
            if (local_138 != 0) {
              plVar25 = local_128;
              if (local_128 == (longlong *)0x0) {
                plVar25 = local_118;
              }
              (**(code **)(*plVar25 + 0x10))();
            }
            param_1 = local_1a0;
            if ((lVar24 != 0) && (DAT_14c950c29 != 0)) {
              FUN_1456cec3c(lVar24);
            }
            iVar28 = *(int *)(param_1 + 0x38);
            *(uint *)(param_1 + 0x38) = iVar28 + 1U;
            if (*(uint *)(param_1 + 0x3c) < iVar28 + 1U) {
              FUN_1418660f4(local_190,iVar28);
            }
            *(longlong *)(*local_190 + (longlong)iVar28 * 8) = lVar24;
            if ((lVar24 != 0) && (DAT_14c950c29 != 0)) {
              FUN_1456cec3c(lVar24);
            }
            FUN_140a689fe(param_1,lVar24);
            if (cVar18 != '\0') {
              FUN_1487bbc9e(lVar24);
            }
          }
          lVar30 = lVar30 + 8;
        } while (local_198 != lVar30);
      }
      if (*(char *)(*(longlong *)(param_1 + 0x60) + 0x178) != '\x03') {
        iVar28 = *(int *)(param_1 + 0x78);
        if ((longlong)iVar28 != 0) {
          lVar19 = *(longlong *)(param_1 + 0x70);
          lVar30 = 0;
          do {
            lVar24 = *(longlong *)(lVar19 + lVar30);
            if ((lVar24 != 0) && (DAT_14c950c29 != 0)) {
              FUN_1456cec3c(lVar24);
            }
            iVar29 = *(int *)(param_1 + 0x38);
            *(uint *)(param_1 + 0x38) = iVar29 + 1U;
            if (*(uint *)(param_1 + 0x3c) < iVar29 + 1U) {
              FUN_1418660f4((longlong *)(param_1 + 0x30),iVar29);
            }
            *(longlong *)(*(longlong *)(param_1 + 0x30) + (longlong)iVar29 * 8) = lVar24;
            if ((lVar24 != 0) && (DAT_14c950c29 != 0)) {
              FUN_1456cec3c(lVar24);
            }
            FUN_140a689fe(param_1,lVar24);
            lVar30 = lVar30 + 8;
          } while ((longlong)iVar28 * 8 != lVar30);
        }
        *(undefined4 *)(param_1 + 0x78) = 0;
        if (*(int *)(param_1 + 0x7c) < 0) {
          FUN_1487c04e8(param_1 + 0x70,0);
        }
      }
      if ((*(char *)(param_1 + 0x69) == '\x01') &&
         ((bVar2 = *(byte *)(local_188 + 0x152), bVar2 == 1 ||
          ((bVar2 < 7 && ((0x68U >> (bVar2 & 0x1f) & 1) != 0)))))) {
        plVar25 = *(longlong **)(param_1 + 0x60);
        if (plVar25 != (longlong *)0x0) {
          uVar20 = FUN_1401b0f18();
          plVar25 = (longlong *)(**(code **)(*plVar25 + 0x288))(plVar25,uVar20);
          if (plVar25 != (longlong *)0x0) {
            uVar20 = FUN_1401b0f18();
            plVar26 = (longlong *)FUN_144718840(plVar25,uVar20);
            if ((((plVar25 != plVar26) && (plVar26 != (longlong *)0x0)) &&
                (lVar19 = (**(code **)(*plVar26 + 0x28))(plVar26), lVar19 != 0)) &&
               ((*(byte *)(lVar19 + 0x101) < 5 &&
                ((*(byte *)(lVar19 + 0x101) != 4 || (*(longlong *)(lVar19 + 0xd8) == 0)))))) {
              lVar30 = *(longlong *)(param_1 + 0x60);
              local_178 = (code *)0x0;
              local_170 = local_170 & 0xffffffff00000000;
              FUN_1446efa72(&local_178,0,3,0x10);
              pcVar31 = local_178;
              local_170 = CONCAT44(local_170._4_4_,3);
              *(undefined ***)local_178 = &PTR_LAB_149e020b0;
              LOCK();
              UNLOCK();
              lVar21 = DAT_14c758608 + 1;
              lVar24 = DAT_14c758608 + 1;
              if (lVar21 == 0) {
                LOCK();
                UNLOCK();
                lVar21 = DAT_14c758608 + 2;
                lVar24 = DAT_14c758608 + 2;
              }
              DAT_14c758608 = lVar24;
              *(longlong *)(local_178 + 0x10) = lVar21;
              *(undefined ***)local_178 = &PTR_FUN_14b3e7650;
              *(undefined8 *)(local_178 + 0x18) = 0;
              iVar28 = 0;
              if (lVar30 != 0) {
                uVar3 = *(uint *)(lVar30 + 0xc);
                *(uint *)(local_178 + 0x18) = uVar3;
                if ((int)uVar3 < DAT_14c9647dc) {
                  lVar30 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
                }
                else {
                  lVar30 = 0;
                }
                iVar28 = *(int *)(lVar30 + 0x10);
                if (*(int *)(lVar30 + 0x10) == 0) {
                  LOCK();
                  iVar28 = DAT_14c964868 + 1;
                  UNLOCK();
                  iVar29 = DAT_14c964868 + 1;
                  bVar32 = DAT_14c964868 < 1000;
                  DAT_14c964868 = iVar28;
                  if (bVar32) {
                    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                  L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                  ,iVar29);
                  }
                  LOCK();
                  iVar28 = *(int *)(lVar30 + 0x10);
                  bVar32 = iVar28 == 0;
                  if (bVar32) {
                    *(int *)(lVar30 + 0x10) = iVar29;
                    iVar28 = 0;
                  }
                  UNLOCK();
                  param_1 = local_1a0;
                  if (bVar32) {
                    iVar28 = iVar29;
                  }
                }
              }
              *(int *)(pcVar31 + 0x1c) = iVar28;
              *(longlong *)(pcVar31 + 0x20) = param_1;
              FUN_1448b6402(lVar19 + 0x28,local_180,&local_178);
              if ((int)local_170 != 0) {
                if (local_178 == (code *)0x0) goto LAB_14078beb1;
                (*(code *)**(undefined8 **)local_178)(local_178,0);
                FUN_1446efa72(&local_178,0,0,0x10);
                local_170 = local_170 & 0xffffffff00000000;
              }
              if (local_178 != (code *)0x0) {
                FUN_1400020a8();
              }
              goto LAB_14078beb1;
            }
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_e0 ^ (ulonglong)auStack_218);
      }
    }
  }
LAB_14078beb1:
  if ((local_e0 ^ (ulonglong)auStack_218) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14078bff4 FUN_14078bff4 body=1472 status=ok
// SIG undefined FUN_14078bff4(void)

longlong *
FUN_14078bff4(longlong *param_1,longlong *param_2,longlong param_3,longlong param_4,char param_5)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  int iVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_b8 [32];
  longlong local_98;
  longlong local_90;
  longlong *local_88;
  longlong *local_80;
  longlong *local_78;
  longlong local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  *param_1 = 0;
  param_1[1] = 0;
  lVar3 = DAT_14cb259f8;
  if (((param_3 == 0) || (param_4 == 0)) || (DAT_14cb259f8 == 0)) goto LAB_14078c179;
  if ((*param_2 == 0) || (0xfffffffd < (int)param_2[1] - 1U)) {
LAB_14078c1a4:
    plVar7 = (longlong *)FUN_14001cc68(0x310);
    plVar7[1] = (longlong)&DAT_100000001;
    *plVar7 = (longlong)&PTR_FUN_14acb8eb0;
    plVar8 = plVar7 + 2;
    lVar10 = 0;
    memset(plVar8,0,0x2d0);
    *(undefined4 *)(plVar7 + 9) = 0x3f800000;
    plVar7[2] = (longlong)&PTR_FUN_14acb15d0;
    *(undefined4 *)(plVar7 + 0xb) = 0xaaad1010;
    plVar7[0xe] = 0;
    plVar7[0xf] = 0;
    plVar7[0x10] = 0;
    plVar7[0x11] = 0;
    *(undefined4 *)(plVar7 + 0x12) = 0;
    *(undefined4 *)((longlong)plVar7 + 0x94) = 0;
    *(undefined4 *)(plVar7 + 0x13) = 0;
    *(undefined4 *)((longlong)plVar7 + 0x9c) = 0x3ff00000;
    plVar7[0x14] = 0;
    plVar7[0x15] = 0;
    plVar7[0x16] = 0;
    plVar7[0x17] = 0;
    *(undefined4 *)(plVar7 + 0x18) = 0;
    *(undefined4 *)((longlong)plVar7 + 0xc4) = 0x3ff00000;
    *(undefined4 *)(plVar7 + 0x19) = 0;
    *(undefined4 *)((longlong)plVar7 + 0xcc) = 0x3ff00000;
    plVar7[0x1a] = 0x3ff0000000000000;
    plVar7[0x1b] = 0;
    *(undefined4 *)(plVar7 + 0x1c) = 0x3f800000;
    *(undefined4 *)((longlong)plVar7 + 0xec) = 0;
    plVar7[0x21] = 0;
    plVar7[0x22] = 0;
    *(undefined1 *)(plVar7 + 0x23) = 0;
    *(undefined1 *)(plVar7 + 0x25) = 1;
    *(undefined4 *)(plVar7 + 0x2f) = 0;
    plVar7[0x2a] = 0;
    plVar7[0x2b] = 0;
    plVar7[0x28] = 0;
    plVar7[0x29] = 0;
    plVar7[0x26] = 0;
    plVar7[0x27] = 0;
    *(undefined8 *)((longlong)plVar7 + 0x17c) = 0xffffffff00000080;
    plVar7[0x32] = 0;
    plVar7[0x3c] = 0;
    plVar7[0x34] = 0;
    plVar7[0x35] = 0;
    plVar7[0x36] = 0;
    plVar7[0x37] = 0;
    plVar7[0x38] = 0;
    plVar7[0x39] = 0;
    *(undefined8 *)((longlong)plVar7 + 0x1ec) = 0xffffffff00000080;
    plVar7[0x40] = 0;
    plVar7[0x4c] = 0;
    plVar7[0x42] = 0;
    plVar7[0x43] = 0;
    plVar7[0x44] = 0;
    plVar7[0x45] = 0;
    plVar7[0x46] = 0;
    plVar7[0x47] = 0;
    plVar7[0x48] = 0;
    plVar7[0x49] = 0;
    *(undefined8 *)((longlong)plVar7 + 0x26c) = 0xffffffff00000080;
    plVar7[0x50] = 0;
    plVar7[0x56] = 0;
    plVar7[0x52] = 0;
    plVar7[0x53] = 0;
    *(undefined8 *)((longlong)plVar7 + 700) = 0xffffffff00000080;
    plVar7[0x5a] = 0;
    plVar7[0x60] = 0;
    plVar7[0x61] = 0;
    plVar7[0x5e] = 0;
    plVar7[0x5f] = 0;
    plVar7[0x5c] = 0;
    plVar7[0x5d] = 0;
    local_80 = plVar8;
    local_78 = plVar7;
    FUN_14078c5b6(&local_80,plVar8);
    plVar8 = local_80;
    local_80[5] = param_4;
    FUN_14078c658(&local_58,param_3);
    plVar7 = local_80;
    *(undefined4 *)(plVar8 + 3) = local_58;
    *(undefined4 *)((longlong)plVar8 + 0x1c) = uStack_54;
    *(undefined4 *)(plVar8 + 4) = uStack_50;
    *(undefined4 *)((longlong)plVar8 + 0x24) = uStack_4c;
    uVar2 = *(uint *)(param_4 + 0xc);
    *(uint *)(local_80 + 6) = uVar2;
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar10 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    iVar5 = *(int *)(lVar10 + 0x10);
    if (*(int *)(lVar10 + 0x10) == 0) {
      LOCK();
      iVar5 = DAT_14c964868 + 1;
      UNLOCK();
      iVar9 = DAT_14c964868 + 1;
      bVar11 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar5;
      if (bVar11) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar9);
      }
      LOCK();
      iVar5 = *(int *)(lVar10 + 0x10);
      bVar11 = iVar5 == 0;
      if (bVar11) {
        *(int *)(lVar10 + 0x10) = iVar9;
        iVar5 = 0;
      }
      UNLOCK();
      if (bVar11) {
        iVar5 = iVar9;
      }
    }
    plVar8 = local_78;
    *(int *)((longlong)plVar7 + 0x34) = iVar5;
    if (local_78 == (longlong *)0x0) {
      *param_1 = (longlong)local_80;
      plVar7 = (longlong *)param_1[1];
      if (plVar7 != (longlong *)0x0) {
        param_1[1] = 0;
LAB_14078c528:
        LOCK();
        plVar8 = plVar7 + 1;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)*plVar8 == 0) {
          (**(code **)*plVar7)(plVar7);
          LOCK();
          piVar1 = (int *)((longlong)plVar7 + 0xc);
          *piVar1 = *piVar1 + -1;
          iVar5 = *piVar1;
          UNLOCK();
joined_r0x00014078c561:
          if (iVar5 == 0) {
            (**(code **)(*plVar7 + 0x10))(plVar7);
          }
        }
      }
    }
    else {
      LOCK();
      *(int *)(local_78 + 1) = (int)local_78[1] + 1;
      UNLOCK();
      *param_1 = (longlong)local_80;
      plVar7 = (longlong *)param_1[1];
      if (local_78 == plVar7) {
        LOCK();
        plVar7 = local_78 + 1;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)*plVar7 == 0) {
          (**(code **)*local_78)(local_78);
          LOCK();
          piVar1 = (int *)((longlong)plVar8 + 0xc);
          *piVar1 = *piVar1 + -1;
          iVar5 = *piVar1;
          UNLOCK();
          plVar7 = plVar8;
          goto joined_r0x00014078c561;
        }
      }
      else {
        param_1[1] = (longlong)local_78;
        if (plVar7 != (longlong *)0x0) goto LAB_14078c528;
      }
    }
    plVar8 = local_78;
    if (local_78 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_78 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)*local_78)(local_78);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
      }
    }
    lVar10 = *param_1;
    if (lVar10 == 0) goto LAB_14078c179;
  }
  else {
    uVar6 = FUN_14026e850();
    local_70 = *param_2;
    local_68 = (undefined4)param_2[1];
    local_60 = 0;
    local_98 = param_4;
    FUN_140e775d2(&local_58,&local_70,uVar6,param_3);
    lVar10 = CONCAT44(uStack_54,local_58);
    if (lVar10 != 0) {
      uVar6 = FUN_14026e850();
      cVar4 = FUN_1448093f4(lVar10,uVar6);
      if (cVar4 != '\0') {
        plVar8 = (longlong *)CONCAT44(uStack_4c,uStack_50);
        if (plVar8 == (longlong *)0x0) {
          *param_1 = CONCAT44(uStack_54,local_58);
        }
        else {
          LOCK();
          *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
          UNLOCK();
          plVar7 = (longlong *)param_1[1];
          *param_1 = CONCAT44(uStack_54,local_58);
          if (plVar8 == plVar7) {
            LOCK();
            plVar7 = plVar8 + 1;
            *(int *)plVar7 = (int)*plVar7 + -1;
            UNLOCK();
            if ((int)*plVar7 == 0) {
              (**(code **)*plVar8)(plVar8);
              LOCK();
              piVar1 = (int *)((longlong)plVar8 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                lVar10 = *plVar8;
LAB_14078c4e7:
                (**(code **)(lVar10 + 0x10))(plVar8);
              }
            }
          }
          else {
            param_1[1] = (longlong)plVar8;
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
                  lVar10 = *plVar7;
                  plVar8 = plVar7;
                  goto LAB_14078c4e7;
                }
              }
            }
          }
        }
        lVar10 = CONCAT44(uStack_54,local_58);
        if ((*(longlong *)(lVar10 + 0x40) != *param_2) ||
           (*(int *)(lVar10 + 0x48) != (int)param_2[1])) {
          *(longlong *)(lVar10 + 0x40) = *param_2;
          *(int *)(lVar10 + 0x48) = (int)param_2[1];
          *(undefined8 *)(lVar10 + 0x50) = 0;
        }
      }
    }
    plVar8 = (longlong *)CONCAT44(uStack_4c,uStack_50);
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      plVar7 = plVar8 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
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
    lVar10 = *param_1;
    if (lVar10 == 0) goto LAB_14078c1a4;
  }
  plVar8 = (longlong *)param_1[1];
  local_90 = lVar10;
  if (plVar8 == (longlong *)0x0) {
    local_88 = (longlong *)0x0;
    FUN_1408f6a5c(lVar3);
  }
  else {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    local_88 = plVar8;
    FUN_1408f6a5c(lVar3);
    LOCK();
    plVar7 = plVar8 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
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
  if ((param_5 != '\0') &&
     (plVar8 = (longlong *)*param_1, *(char *)((longlong)plVar8 + 0x3c) == '\0')) {
    *(undefined1 *)((longlong)plVar8 + 0x3c) = 1;
    (**(code **)(*plVar8 + 0x10))();
  }
LAB_14078c179:
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14078c5b6 FUN_14078c5b6 body=162 status=ok
// SIG undefined FUN_14078c5b6(void)

void FUN_14078c5b6(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_14078c5f5;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_14078c5f5;
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
LAB_14078c5f5:
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
                    /* WARNING: Could not recover jumptable at 0x00014078c654. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 14078c658 FUN_14078c658 body=204 status=ok
// SIG undefined FUN_14078c658(void)

uint * FUN_14078c658(uint *param_1,longlong *param_2)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  bool bVar6;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  if ((param_2 == (longlong *)0x0) || (lVar4 = (**(code **)(*param_2 + 8))(param_2), lVar4 == 0)) {
    *param_1 = 0;
    uVar3 = 0;
  }
  else {
    uVar3 = *(uint *)(lVar4 + 0xc);
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
      uVar5 = DAT_14c964868 + 1;
      bVar6 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar1;
      if (bVar6) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar5);
      }
      LOCK();
      uVar3 = *(uint *)(lVar4 + 0x10);
      bVar6 = uVar3 == 0;
      if (bVar6) {
        *(uint *)(lVar4 + 0x10) = uVar5;
        uVar3 = 0;
      }
      UNLOCK();
      if (bVar6) {
        uVar3 = uVar5;
      }
    }
  }
  param_1[1] = uVar3;
  cVar2 = FUN_14493c216(param_1,0);
  if (cVar2 == '\0') {
    *(longlong **)(param_1 + 2) = param_2;
  }
  return param_1;
}



// FUNCTION 14078c724 FUN_14078c724 body=1237 status=ok
// SIG undefined FUN_14078c724(void)

void FUN_14078c724(longlong *param_1)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined1 auStack_218 [40];
  undefined8 *local_1f0;
  undefined8 *local_1e8;
  undefined8 *local_1e0;
  undefined8 *local_1d8;
  undefined8 *local_1d0;
  undefined8 *local_1c8;
  undefined8 *local_1c0;
  undefined8 *local_1b8;
  undefined8 *local_1b0;
  undefined8 *local_1a8;
  undefined8 *local_1a0;
  undefined8 *local_198;
  undefined8 *local_190;
  undefined8 *local_188;
  undefined8 *local_180;
  undefined8 *local_178;
  undefined8 *local_170;
  undefined8 *local_168;
  undefined8 *local_160;
  undefined8 *local_158;
  undefined8 *local_150;
  undefined8 **local_148;
  ulonglong *local_140;
  undefined8 *local_138;
  undefined8 local_130;
  undefined8 *local_128;
  undefined8 *local_120;
  undefined8 *local_118;
  undefined8 *local_110;
  undefined8 *local_108;
  undefined8 *local_100;
  undefined8 *local_f8;
  undefined8 *local_f0;
  undefined8 *local_e8;
  undefined8 *local_e0;
  undefined8 *local_d8;
  undefined8 *local_d0;
  undefined8 *local_c8;
  undefined8 *local_c0;
  undefined8 *local_b8;
  undefined8 *local_b0;
  undefined8 *local_a8;
  undefined8 *local_a0;
  undefined8 *local_98;
  undefined8 *local_90;
  undefined8 *local_88;
  undefined8 *local_80;
  undefined8 *local_78;
  undefined8 *local_70;
  undefined8 *local_68;
  ulonglong local_60 [4];
  
  local_60[0] = DAT_14c707940 ^ (ulonglong)auStack_218;
  puVar1 = (undefined8 *)*param_1;
  FUN_14078cbfa(puVar1);
  *puVar1 = &PTR_FUN_14ae20d10;
  puVar1[0x17] = 0;
  local_138 = (undefined8 *)FUN_1402d2740();
  if ((local_138 != (undefined8 *)0x0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_138);
  }
  local_130 = (undefined8 *)CONCAT53(local_130._3_5_,1);
  local_130 = (undefined8 *)CONCAT44(0xffffffff,(undefined4)local_130);
  puVar1[0x18] = 0;
  uVar2 = FUN_144830b78(puVar1 + 0x19,&local_138);
  *(undefined4 *)(puVar1 + 0x19) = uVar2;
  puVar1[0x1a] = 0;
  puVar1[0x1b] = 0;
  puVar1[0x1c] = 0x50300;
  puVar1[0x1d] = 0x3fe0000000000000;
  puVar1[0x1e] = 0x3fe0000000000000;
  puVar1[0x1f] = 0x3ff0000000000000;
  puVar1[0x20] = 0x3ff0000000000000;
  *(byte *)(puVar1 + 0x21) = *(byte *)(puVar1 + 0x21) & 0xe8 | 0x15;
  *(undefined2 *)((longlong)puVar1 + 0x109) = 0;
  *(undefined1 *)((longlong)puVar1 + 0x10b) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x10c) = 0x3f800000;
  *(undefined4 *)((longlong)puVar1 + 0x114) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x11c) = 0x447a0000;
  local_150 = puVar1 + 0x25;
  FUN_140120f5c();
  local_158 = puVar1 + 0x2c;
  FUN_140120f5c();
  local_160 = puVar1 + 0x33;
  FUN_140120f5c();
  local_168 = puVar1 + 0x3a;
  FUN_140120f5c();
  local_170 = puVar1 + 0x41;
  FUN_140120f5c();
  local_178 = puVar1 + 0x48;
  FUN_140120f5c();
  local_180 = puVar1 + 0x4f;
  FUN_140120f5c();
  local_188 = puVar1 + 0x56;
  FUN_140120f5c();
  local_190 = puVar1 + 0x5d;
  FUN_140120f5c();
  local_198 = puVar1 + 100;
  FUN_140120f5c();
  local_1a0 = puVar1 + 0x6b;
  FUN_140120f5c();
  local_1a8 = puVar1 + 0x72;
  FUN_140120f5c();
  local_1b0 = puVar1 + 0x79;
  FUN_140120f5c();
  local_1b8 = puVar1 + 0x80;
  FUN_140120f5c();
  local_1c0 = puVar1 + 0x87;
  FUN_140120f5c();
  local_1c8 = puVar1 + 0x8e;
  FUN_140120f5c();
  local_1d0 = puVar1 + 0x95;
  FUN_140120f5c();
  local_1e0 = puVar1 + 0x9c;
  FUN_140120f5c();
  local_1d8 = puVar1 + 0xa3;
  FUN_140120f5c();
  local_1e8 = puVar1 + 0xb4;
  puVar1[0xaa] = 0;
  puVar1[0xab] = 0;
  puVar1[0xac] = 0;
  puVar1[0xad] = 0;
  puVar1[0xae] = 0;
  puVar1[0xaf] = 0;
  puVar1[0xb0] = 0;
  puVar1[0xb1] = 0;
  puVar1[0xb2] = 0;
  puVar1[0xb3] = 0;
  FUN_140120f5c();
  local_1f0 = puVar1 + 0xbb;
  FUN_140120f5c();
  FUN_140120f5c(puVar1 + 0xc2);
  FUN_140120f5c(puVar1 + 0xc9);
  FUN_140120f5c(puVar1 + 0xd0);
  FUN_140120f5c(puVar1 + 0xd7);
  FUN_140120f5c(puVar1 + 0xde);
  FUN_140120f5c(puVar1 + 0xe5);
  *(undefined4 *)(puVar1 + 0xec) = 0;
  puVar1[0xed] = 0;
  puVar1[0xee] = 0;
  puVar1[0xef] = 0;
  puVar1[0xf0] = 0;
  puVar1[0xf1] = 0;
  puVar1[0xf2] = 0;
  puVar1[0xf3] = 0;
  puVar1[0xf4] = 0;
  puVar1[0xf5] = 0;
  puVar1[0xf6] = 0;
  puVar1[0xf7] = 0;
  puVar1[0xf8] = 0;
  local_138 = local_150;
  local_130 = local_158;
  local_128 = local_160;
  local_120 = local_168;
  local_118 = local_170;
  local_110 = local_178;
  local_108 = local_180;
  local_100 = local_188;
  local_f8 = local_190;
  local_f0 = local_198;
  local_e8 = local_1a0;
  local_e0 = local_1a8;
  local_d8 = local_1b0;
  local_d0 = local_1b8;
  local_c8 = local_1c0;
  local_c0 = local_1c8;
  local_b8 = local_1d0;
  local_b0 = local_1e0;
  local_a8 = local_1e8;
  local_a0 = local_1f0;
  local_68 = local_1d8;
  local_140 = local_60;
  local_148 = &local_138;
  local_98 = puVar1 + 0xc2;
  local_90 = puVar1 + 0xc9;
  local_88 = puVar1 + 0xd0;
  local_80 = puVar1 + 0xd7;
  local_78 = puVar1 + 0xde;
  local_70 = puVar1 + 0xe5;
  FUN_14078cc5e(puVar1 + 0x15);
  if ((local_60[0] ^ (ulonglong)auStack_218) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14078cbfa FUN_14078cbfa body=100 status=ok
// SIG undefined FUN_14078cbfa(void)

undefined8 * FUN_14078cbfa(undefined8 *param_1)

{
  FUN_1400841f8();
  *param_1 = &PTR_FUN_14adc1600;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0xffffffff;
  *(byte *)((longlong)param_1 + 0x4c) = *(byte *)((longlong)param_1 + 0x4c) & 0xfe;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined2 *)((longlong)param_1 + 0x5d) = 0x101;
  FUN_140120f5c(param_1 + 0xc);
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  return param_1;
}



// FUNCTION 14078cc5e FUN_14078cc5e body=109 status=ok
// SIG undefined FUN_14078cc5e(void)

undefined8 * FUN_14078cc5e(undefined8 *param_1,undefined8 *param_2)

{
  void *_Src;
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  
  _Src = (void *)*param_2;
  uVar1 = param_2[1] - (longlong)_Src;
  uVar3 = uVar1 >> 3;
  iVar2 = (int)uVar3;
  *(int *)(param_1 + 1) = iVar2;
  if (*(int *)((longlong)param_1 + 0xc) == 0 && iVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_14078cccc(param_1,uVar3 & 0xffffffff);
    if (iVar2 != 0) {
      memcpy((void *)*param_1,_Src,(longlong)(uVar1 * 0x20000000) >> 0x1d & 0xfffffffffffffff8);
    }
  }
  return param_1;
}



// FUNCTION 14078cccc FUN_14078cccc body=317 status=ok
// SIG undefined FUN_14078cccc(void)

void FUN_14078cccc(longlong param_1,int param_2,int param_3)

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
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14078cd3a;
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
LAB_14078cd3a:
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



// FUNCTION 14078ce09 FUN_14078ce09 body=3523 status=ok
// SIG undefined FUN_14078ce09(void)

void FUN_14078ce09(longlong param_1,longlong param_2,longlong param_3,longlong param_4,int *param_5,
                  undefined8 param_6,ushort param_7,undefined8 param_8,ulonglong *param_9,
                  undefined8 param_10,ulonglong *param_11,byte param_12,undefined8 param_13,
                  longlong param_14)

{
  longlong *plVar1;
  undefined8 uVar2;
  ulonglong *puVar3;
  uint uVar4;
  undefined8 uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  byte bVar10;
  uint uVar11;
  longlong lVar12;
  undefined1 uVar13;
  int iVar14;
  uint uVar15;
  undefined2 uVar16;
  int iVar17;
  int iVar18;
  undefined8 *puVar19;
  ulonglong uVar20;
  undefined1 *puVar21;
  longlong *plVar22;
  undefined8 *puVar23;
  float fVar24;
  float fVar25;
  undefined1 auStack_238 [32];
  int local_218;
  float *local_210;
  double *local_208;
  int *local_200;
  undefined1 local_1f8;
  undefined1 local_1f0;
  undefined1 local_1e8;
  longlong local_1d8;
  longlong *local_1d0;
  longlong local_1c8;
  ulonglong local_1c0;
  longlong local_1b8;
  longlong local_1b0;
  float local_1a8;
  float local_1a4;
  undefined8 local_1a0;
  double local_198 [2];
  int local_188 [3];
  undefined4 local_17c;
  float local_178;
  float local_174;
  undefined8 local_170;
  double local_168 [2];
  int local_158 [3];
  int local_14c;
  float local_148;
  float local_144;
  float local_140;
  float local_13c;
  double local_130;
  double local_128;
  int local_120;
  int local_11c;
  int local_118;
  int local_114;
  ulonglong local_110;
  ulonglong local_108;
  byte local_fd;
  int local_fc;
  uint local_f8;
  uint uStack_f4;
  longlong local_f0;
  longlong *local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  longlong local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 *local_b0;
  undefined1 *local_a8;
  undefined1 *local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  ulonglong local_80;
  
  bVar10 = param_12;
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_238;
  uVar8 = (ulonglong)((param_5[2] - *param_5) + -1 + (uint)(param_5[2] - *param_5 == 0)) * 2 + 1;
  lVar12 = 0x3f;
  if (uVar8 != 0) {
    for (; uVar8 >> lVar12 == 0; lVar12 = lVar12 + -1) {
    }
  }
  local_f8 = (uint)(1 << ((byte)lVar12 & 0x1f)) >> 1;
  local_f8 = local_f8 + (local_f8 == 0);
  uVar8 = (ulonglong)((param_5[3] - param_5[1]) + -1 + (uint)(param_5[3] - param_5[1] == 0)) * 2 + 1
  ;
  lVar12 = 0x3f;
  if (uVar8 != 0) {
    for (; uVar8 >> lVar12 == 0; lVar12 = lVar12 + -1) {
    }
  }
  uStack_f4 = (uint)(1 << ((byte)lVar12 & 0x1f)) >> 1;
  uStack_f4 = uStack_f4 + (uStack_f4 == 0);
  fVar24 = (float)(int)local_f8;
  if ((float)(int)local_f8 <= (float)(int)uStack_f4) {
    fVar24 = (float)(int)uStack_f4;
  }
  local_1d8 = param_1;
  local_1b0 = param_2;
  local_f0 = param_4;
  fVar24 = logf(fVar24);
  uVar4 = uStack_f4;
  uVar7 = local_f8;
  uVar2 = param_10;
  local_fc = (int)ROUND(fVar24 * 1.442695 + fVar24 * 1.442695 + -0.5) >> 1;
  if (local_fc < 2) {
    local_fc = 1;
  }
  local_fd = true;
  if (param_4 == 0 && param_9 == (ulonglong *)0x0) {
    if ((&DAT_14ca814b8)[(ulonglong)param_7 * 0xf] == 1) {
      local_fd = false;
    }
    else {
      local_fd = *(int *)(DAT_14ca4afe8 + 4) == 1;
    }
  }
  puVar21 = (undefined1 *)0x9;
  if ((bool)local_fd != false) {
    puVar21 = &DAT_00020008;
  }
  local_88 = DAT_14ca85098;
  local_98 = CONCAT44(DAT_14ca8508c,DAT_14ca85088);
  uStack_90 = CONCAT44(DAT_14ca85094,DAT_14ca85090);
  uVar15 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  plVar22 = (longlong *)((ulonglong)puVar21 | DAT_14ca4ae50);
  local_b8._0_4_ = (int)CONCAT41(local_b8._4_4_,bVar10) << 0x18;
  local_b8._0_6_ = CONCAT24(0xff00,(int)local_b8);
  uVar13 = (undefined1)local_fc;
  local_b8._0_3_ = CONCAT21(1,uVar13);
  local_e0 = (uint *)CONCAT44(DAT_14ca8508c,DAT_14ca85088);
  uStack_d8 = (byte *)CONCAT44(DAT_14ca85094,DAT_14ca85090);
  local_d0 = (int *)CONCAT44(uVar15,DAT_14ca85098);
  uVar11 = DAT_14ca84e40;
  if ((int)local_f8 < (int)DAT_14ca84e40) {
    uVar11 = local_f8;
  }
  if ((int)uVar11 < 2) {
    uVar11 = 1;
  }
  uVar6 = DAT_14ca84e40;
  if ((int)uStack_f4 < (int)DAT_14ca84e40) {
    uVar6 = uStack_f4;
  }
  local_c8 = (ulonglong)uVar11 << 0x20;
  if ((int)uVar6 < 2) {
    uVar6 = 1;
  }
  local_c0 = (ulonglong *)CONCAT44(0x10001,uVar6);
  plVar1 = (longlong *)(local_1d8 + 0x70);
  uVar20 = *(longlong *)(local_1d8 + 0x70) + 7U & 0xfffffffffffffff8;
  uVar8 = uVar20 + 0x120;
  local_1d0 = plVar1;
  local_1b8 = param_3;
  local_e8 = plVar22;
  if (*(ulonglong *)(local_1d8 + 0x78) < uVar8) {
    FUN_140023dd8(plVar1,0x128);
    uVar20 = *plVar1 + 7U & 0xfffffffffffffff8;
    uVar8 = uVar20 + 0x120;
  }
  local_1c0 = local_1d8 + 0x178;
  *(ulonglong *)(local_1d8 + 0x70) = uVar8;
  FUN_1456bbb8c(uVar20,uVar2,&local_e8,0);
  iVar17 = *(int *)(local_1d8 + 0x180);
  *(uint *)(local_1d8 + 0x180) = iVar17 + 1U;
  if (*(uint *)(local_1d8 + 0x184) < iVar17 + 1U) {
    FUN_14472c0f6(local_1c0,iVar17);
  }
  uVar5 = local_b8;
  plVar1 = local_1d0;
  uVar2 = param_8;
  *(ulonglong *)(*(longlong *)(local_1d8 + 0x178) + (longlong)iVar17 * 8) = uVar20;
  *(int *)(uVar20 + 0x9c) = *(int *)(local_1d8 + 0x180) + -1;
  local_110 = 0;
  local_108 = uVar20;
  if (param_9 != (ulonglong *)0x0) {
    local_b8._0_4_ = (uint)bVar10 << 0x18;
    local_b8._6_2_ = SUB82(uVar5,6);
    local_b8._0_6_ = CONCAT24(0xff00,(int)local_b8);
    local_b8._0_3_ = CONCAT21(1,uVar13);
    local_e0 = (uint *)local_98;
    uStack_d8 = (byte *)uStack_90;
    uVar11 = DAT_14ca84e40;
    if ((int)uVar7 < (int)DAT_14ca84e40) {
      uVar11 = uVar7;
    }
    if ((int)uVar11 < 2) {
      uVar11 = 1;
    }
    uVar7 = DAT_14ca84e40;
    if ((int)uVar4 < (int)DAT_14ca84e40) {
      uVar7 = uVar4;
    }
    local_d0 = (int *)CONCAT44(uVar15,local_88);
    if ((int)uVar7 < 2) {
      uVar7 = 1;
    }
    local_c8 = (ulonglong)uVar11 << 0x20;
    local_c0 = (ulonglong *)CONCAT44(0x10001,uVar7);
    uVar20 = *(longlong *)(local_1d8 + 0x70) + 7U & 0xfffffffffffffff8;
    uVar8 = uVar20 + 0x120;
    local_e8 = plVar22;
    if (*(ulonglong *)(local_1d8 + 0x78) < uVar8) {
      FUN_140023dd8(local_1d0,0x128);
      uVar20 = *plVar1 + 7U & 0xfffffffffffffff8;
      uVar8 = uVar20 + 0x120;
    }
    *(ulonglong *)(local_1d8 + 0x70) = uVar8;
    FUN_1456bbb8c(uVar20,uVar2,&local_e8,0);
    iVar17 = *(int *)(local_1d8 + 0x180);
    *(uint *)(local_1d8 + 0x180) = iVar17 + 1U;
    if (*(uint *)(local_1d8 + 0x184) < iVar17 + 1U) {
      FUN_14472c0f6(local_1c0,iVar17);
    }
    *(ulonglong *)(*(longlong *)(local_1d8 + 0x178) + (longlong)iVar17 * 8) = uVar20;
    *(int *)(uVar20 + 0x9c) = *(int *)(local_1d8 + 0x180) + -1;
    local_110 = uVar20;
  }
  bVar10 = local_fd;
  lVar12 = local_1b8;
  plVar22 = local_1d0;
  puVar3 = param_9;
  uStack_d8 = &local_fd;
  local_e8 = &local_f0;
  local_e0 = &local_f8;
  local_d0 = &local_fc;
  local_c0 = &local_108;
  local_b8 = &local_110;
  local_b0 = &param_14;
  local_a8 = (undefined1 *)&param_13;
  local_a0 = (undefined1 *)&param_6;
  if ((*(char *)(local_1b0 + 0x92) == '\x04') || (*(char *)(local_1b0 + 0x92) == '\x01')) {
    uVar16 = *(undefined2 *)(local_1b0 + 0x8e);
  }
  else {
    uVar16 = 0;
  }
  uVar13 = *(undefined1 *)(local_1b0 + 0x90);
  puVar19 = (undefined8 *)(*(longlong *)(local_1d8 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar23 = puVar19 + 8;
  local_c8 = local_1d8;
  if (*(undefined8 **)(local_1d8 + 0x78) < puVar23) {
    FUN_140023dd8(local_1d0,0x48);
    puVar19 = (undefined8 *)(*plVar22 + 7U & 0xfffffffffffffff8);
    puVar23 = puVar19 + 8;
  }
  local_1c8 = local_1d8 + 0x198;
  *(undefined8 **)(local_1d8 + 0x70) = puVar23;
  puVar19[1] = *(undefined8 *)(local_1b0 + 8);
  puVar19[2] = 0;
  *(undefined1 *)(puVar19 + 3) = 1;
  *(undefined8 *)((longlong)puVar19 + 0x1c) = 0xffffffffffffffff;
  *puVar19 = &PTR_FUN_14a203858;
  *(undefined2 *)(puVar19 + 5) = 0;
  *(undefined1 *)((longlong)puVar19 + 0x2a) = uVar13;
  *(undefined1 *)((longlong)puVar19 + 0x2b) = 0;
  *(undefined2 *)((longlong)puVar19 + 0x2c) = 0;
  *(undefined2 *)((longlong)puVar19 + 0x2e) = uVar16;
  *(undefined1 *)(puVar19 + 6) = 0;
  *(undefined1 *)((longlong)puVar19 + 0x32) = 0;
  puVar19[7] = local_1b0;
  iVar17 = *(int *)(local_1d8 + 0x1a0);
  *(uint *)(local_1d8 + 0x1a0) = iVar17 + 1U;
  if (*(uint *)(local_1d8 + 0x1a4) < iVar17 + 1U) {
    FUN_1447568fc(local_1c8,iVar17);
  }
  plVar22 = local_1d0;
  *(undefined8 **)(*(longlong *)(local_1d8 + 0x198) + (longlong)iVar17 * 8) = puVar19;
  *(int *)((longlong)puVar19 + 0x1c) = *(int *)(local_1d8 + 0x1a0) + -1;
  if (lVar12 == 0) {
    puVar23 = (undefined8 *)0x0;
  }
  else {
    if ((*(char *)(lVar12 + 0x92) == '\x04') || (*(char *)(lVar12 + 0x92) == '\x01')) {
      uVar16 = *(undefined2 *)(lVar12 + 0x8e);
    }
    else {
      uVar16 = 0;
    }
    uVar13 = *(undefined1 *)(lVar12 + 0x90);
    puVar23 = (undefined8 *)(*(longlong *)(local_1d8 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar9 = puVar23 + 8;
    if (*(undefined8 **)(local_1d8 + 0x78) < puVar9) {
      FUN_140023dd8(local_1d0,0x48);
      puVar23 = (undefined8 *)(*plVar22 + 7U & 0xfffffffffffffff8);
      puVar9 = puVar23 + 8;
    }
    *(undefined8 **)(local_1d8 + 0x70) = puVar9;
    puVar23[1] = *(undefined8 *)(lVar12 + 8);
    puVar23[2] = 0;
    *(undefined1 *)(puVar23 + 3) = 1;
    *(undefined8 *)((longlong)puVar23 + 0x1c) = 0xffffffffffffffff;
    *puVar23 = &PTR_FUN_14a203858;
    *(undefined2 *)(puVar23 + 5) = 0;
    *(undefined1 *)((longlong)puVar23 + 0x2a) = uVar13;
    *(undefined1 *)((longlong)puVar23 + 0x2b) = 0;
    *(undefined2 *)((longlong)puVar23 + 0x2c) = 0;
    *(undefined2 *)((longlong)puVar23 + 0x2e) = uVar16;
    *(undefined1 *)(puVar23 + 6) = 0;
    *(undefined1 *)((longlong)puVar23 + 0x32) = 0;
    puVar23[7] = lVar12;
    iVar17 = *(int *)(local_1d8 + 0x1a0);
    *(uint *)(local_1d8 + 0x1a0) = iVar17 + 1U;
    if (*(uint *)(local_1d8 + 0x1a4) < iVar17 + 1U) {
      FUN_1447568fc(local_1c8,iVar17);
    }
    *(undefined8 **)(*(longlong *)(local_1d8 + 0x198) + (longlong)iVar17 * 8) = puVar23;
    *(int *)((longlong)puVar23 + 0x1c) = *(int *)(local_1d8 + 0x1a0) + -1;
  }
  iVar17 = (uint)bVar10 + (uint)bVar10 * 2;
  lVar12 = local_f0;
  if (local_f0 == 0) {
    lVar12 = puVar19[7];
  }
  fVar24 = (float)*(int *)(lVar12 + 0x84);
  fVar25 = (float)*(int *)(lVar12 + 0x88);
  local_148 = 2.0 / fVar24;
  local_144 = 2.0 / fVar25;
  local_120 = *param_5;
  local_11c = param_5[1];
  local_140 = (float)local_120 / fVar24;
  local_13c = (float)local_11c / fVar25;
  local_128 = (double)(((float)param_5[3] + -0.5) / fVar25);
  local_130 = (double)(((float)param_5[2] + -0.5) / fVar24);
  local_114 = param_5[3] + -1;
  local_118 = param_5[2] + -1;
  local_200 = &local_120;
  local_208 = &local_130;
  local_210 = &local_148;
  local_1e8 = param_14 != 0;
  local_1f8 = puVar3 != (ulonglong *)0x0;
  local_1f0 = 1;
  local_218 = 0;
  FUN_14300397e(&local_e8,puVar19,puVar23,*(undefined8 *)(lVar12 + 0x84));
  uVar8 = (ulonglong)(iVar17 + 1U);
  if ((int)(iVar17 + 1U) < local_fc) {
    do {
      local_1c0 = uVar8;
      uVar20 = local_108;
      plVar22 = local_1d0;
      bVar10 = (byte)iVar17;
      iVar18 = 1 << (bVar10 & 0x1f);
      lVar12 = (longlong)(int)(uStack_f4 + iVar18 + -1) / (longlong)iVar18;
      uVar8 = (longlong)(int)(iVar18 + local_f8 + -1) / (longlong)iVar18;
      if (DAT_14ca84e28 == '\x01') {
        if ((*(char *)(local_108 + 0x92) == '\x04') || (*(char *)(local_108 + 0x92) == '\x01')) {
          uVar16 = *(undefined2 *)(local_108 + 0x8e);
        }
        else {
          uVar16 = 0;
        }
        uVar13 = 1;
        iVar18 = iVar17;
      }
      else {
        uVar13 = *(undefined1 *)(local_108 + 0x90);
        if ((*(char *)(local_108 + 0x92) == '\x04') || (*(char *)(local_108 + 0x92) == '\x01')) {
          uVar16 = *(undefined2 *)(local_108 + 0x8e);
        }
        else {
          uVar16 = 0;
        }
        iVar18 = 0;
      }
      puVar19 = (undefined8 *)(*(longlong *)(local_1d8 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar23 = puVar19 + 8;
      if (*(undefined8 **)(local_1d8 + 0x78) < puVar23) {
        FUN_140023dd8(local_1d0,0x48);
        puVar19 = (undefined8 *)(*plVar22 + 7U & 0xfffffffffffffff8);
        puVar23 = puVar19 + 8;
      }
      *(undefined8 **)(local_1d8 + 0x70) = puVar23;
      puVar19[1] = *(undefined8 *)(uVar20 + 8);
      puVar19[2] = 0;
      *(undefined1 *)(puVar19 + 3) = 1;
      *(undefined8 *)((longlong)puVar19 + 0x1c) = 0xffffffffffffffff;
      *puVar19 = &PTR_FUN_14a203858;
      *(undefined1 *)(puVar19 + 5) = 0;
      *(char *)((longlong)puVar19 + 0x29) = (char)iVar18;
      *(undefined1 *)((longlong)puVar19 + 0x2a) = uVar13;
      *(undefined1 *)((longlong)puVar19 + 0x2b) = 0;
      *(undefined2 *)((longlong)puVar19 + 0x2c) = 0;
      *(undefined2 *)((longlong)puVar19 + 0x2e) = uVar16;
      *(undefined1 *)(puVar19 + 6) = 0;
      *(undefined1 *)((longlong)puVar19 + 0x32) = 0;
      puVar19[7] = uVar20;
      iVar18 = *(int *)(local_1d8 + 0x1a0);
      *(uint *)(local_1d8 + 0x1a0) = iVar18 + 1U;
      if (*(uint *)(local_1d8 + 0x1a4) < iVar18 + 1U) {
        FUN_1447568fc(local_1c8,iVar18);
      }
      iVar14 = (int)uVar8;
      fVar24 = 2.0 / (float)iVar14;
      local_14c = (int)lVar12;
      fVar25 = 2.0 / (float)local_14c;
      local_14c = local_14c + -1;
      iVar14 = iVar14 + -1;
      *(undefined8 **)(*(longlong *)(local_1d8 + 0x198) + (longlong)iVar18 * 8) = puVar19;
      *(int *)((longlong)puVar19 + 0x1c) = *(int *)(local_1d8 + 0x1a0) + -1;
      local_158[0] = 0;
      local_158[1] = 0;
      local_1b0 = CONCAT44(local_1b0._4_4_,local_14c);
      local_168[0] = 1.0;
      local_168[1] = 1.0;
      local_170 = 0;
      uVar20 = uVar8 & 0xffffffff | lVar12 << 0x20;
      local_1e8 = 0;
      local_1f8 = 0;
      local_200 = local_158;
      local_208 = local_168;
      local_210 = &local_178;
      local_1f0 = 1;
      local_218 = iVar17 + 1;
      local_178 = fVar24;
      local_174 = fVar25;
      local_158[2] = iVar14;
      FUN_14300397e(&local_e8,puVar19,0,uVar20);
      uVar8 = local_110;
      plVar22 = local_1d0;
      if (param_9 != (ulonglong *)0x0) {
        local_1b8 = CONCAT44(local_1b8._4_4_,iVar17 + 1);
        if (DAT_14ca84e28 == '\x01') {
          if ((*(char *)(local_110 + 0x92) == '\x04') || (*(char *)(local_110 + 0x92) == '\x01')) {
            uVar16 = *(undefined2 *)(local_110 + 0x8e);
          }
          else {
            uVar16 = 0;
          }
          uVar13 = 1;
        }
        else {
          uVar13 = *(undefined1 *)(local_110 + 0x90);
          if ((*(char *)(local_110 + 0x92) == '\x04') || (*(char *)(local_110 + 0x92) == '\x01')) {
            uVar16 = *(undefined2 *)(local_110 + 0x8e);
          }
          else {
            uVar16 = 0;
          }
          bVar10 = 0;
        }
        puVar19 = (undefined8 *)(*(longlong *)(local_1d8 + 0x70) + 7U & 0xfffffffffffffff8);
        puVar23 = puVar19 + 8;
        if (*(undefined8 **)(local_1d8 + 0x78) < puVar23) {
          FUN_140023dd8(local_1d0,0x48);
          puVar19 = (undefined8 *)(*plVar22 + 7U & 0xfffffffffffffff8);
          puVar23 = puVar19 + 8;
        }
        *(undefined8 **)(local_1d8 + 0x70) = puVar23;
        puVar19[1] = *(undefined8 *)(uVar8 + 8);
        puVar19[2] = 0;
        *(undefined1 *)(puVar19 + 3) = 1;
        *(undefined8 *)((longlong)puVar19 + 0x1c) = 0xffffffffffffffff;
        *puVar19 = &PTR_FUN_14a203858;
        *(undefined1 *)(puVar19 + 5) = 0;
        *(byte *)((longlong)puVar19 + 0x29) = bVar10;
        *(undefined1 *)((longlong)puVar19 + 0x2a) = uVar13;
        *(undefined1 *)((longlong)puVar19 + 0x2b) = 0;
        *(undefined2 *)((longlong)puVar19 + 0x2c) = 0;
        *(undefined2 *)((longlong)puVar19 + 0x2e) = uVar16;
        *(undefined1 *)(puVar19 + 6) = 0;
        *(undefined1 *)((longlong)puVar19 + 0x32) = 0;
        puVar19[7] = uVar8;
        iVar18 = *(int *)(local_1d8 + 0x1a0);
        *(uint *)(local_1d8 + 0x1a0) = iVar18 + 1U;
        if (*(uint *)(local_1d8 + 0x1a4) < iVar18 + 1U) {
          FUN_1447568fc(local_1c8,iVar18);
        }
        *(undefined8 **)(*(longlong *)(local_1d8 + 0x198) + (longlong)iVar18 * 8) = puVar19;
        *(int *)((longlong)puVar19 + 0x1c) = *(int *)(local_1d8 + 0x1a0) + -1;
        local_188[0] = 0;
        local_188[1] = 0;
        local_17c = (undefined4)local_1b0;
        local_198[0] = 1.0;
        local_198[1] = 1.0;
        local_1a0 = 0;
        local_1e8 = 0;
        local_1f0 = 0;
        local_200 = local_188;
        local_208 = local_198;
        local_210 = &local_1a8;
        local_218 = (int)local_1b8;
        local_1f8 = 1;
        local_1a8 = fVar24;
        local_1a4 = fVar25;
        local_188[2] = iVar14;
        FUN_14300397e(&local_e8,puVar19,0,uVar20);
      }
      iVar18 = iVar17 + (int)local_1c0;
      iVar17 = iVar17 + (int)local_1c0;
      uVar8 = local_1c0;
    } while (iVar18 + 1 < local_fc);
  }
  *param_11 = local_108;
  if (param_9 != (ulonglong *)0x0) {
    *param_9 = local_110;
  }
  if ((local_80 ^ (ulonglong)auStack_238) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14078dbce FUN_14078dbce body=123 status=ok
// SIG undefined FUN_14078dbce(void)

undefined8 *
FUN_14078dbce(undefined8 *param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4,
             undefined4 param_5)

{
  undefined8 uVar1;
  
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  uVar1 = (**(code **)(*DAT_14c8407a8 + 0x18))(DAT_14c8407a8,param_2,*param_3,param_4,param_5);
  FUN_14078dc50(param_1,uVar1);
  *param_1 = &PTR_FUN_149e142b0;
  uVar1 = (**(code **)(*(longlong *)param_1[1] + 0x68))();
  param_1[2] = uVar1;
  return param_1;
}



// FUNCTION 14078dc50 FUN_14078dc50 body=142 status=ok
// SIG undefined FUN_14078dc50(void)

undefined8 * FUN_14078dc50(undefined8 *param_1,longlong *param_2)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  
  *param_1 = FAutoConsoleObject::vftable;
  param_1[1] = param_2;
  uVar2 = (**(code **)(*param_2 + 0x18))(param_2);
  if ((uVar2 >> 9 & 1) == 0) {
    uVar2 = (**(code **)(*(longlong *)param_1[1] + 0x18))();
    if ((uVar2 >> 10 & 1) == 0) {
      uVar2 = (**(code **)(*(longlong *)param_1[1] + 0x18))();
      if ((uVar2 >> 0xb & 1) == 0) {
        return param_1;
      }
      plVar3 = (longlong *)FUN_1467bc872();
    }
    else {
      plVar3 = (longlong *)FUN_145743eb0();
    }
  }
  else {
    plVar3 = (longlong *)FUN_1467bc808();
  }
  iVar1 = (int)plVar3[1];
  *(uint *)(plVar3 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)plVar3 + 0xc) < iVar1 + 1U) {
    FUN_145743f1a(plVar3,iVar1);
  }
  *(undefined8 **)(*plVar3 + (longlong)iVar1 * 8) = param_1;
  return param_1;
}



// FUNCTION 14078dcde FUN_14078dcde body=125 status=ok
// SIG undefined FUN_14078dcde(void)

void FUN_14078dcde(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined4 param_5)

{
  undefined8 *puVar1;
  longlong *plVar2;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x58,0x10);
  FUN_140f45ebc(puVar1,param_4,param_5);
  puVar1[9] = 0;
  *puVar1 = &PTR_FUN_149e139b0;
  *(undefined4 *)(puVar1 + 10) = param_3;
  *(undefined4 *)((longlong)puVar1 + 0x54) = param_3;
  plVar2 = (longlong *)FUN_140f45f1e(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00014078dd57. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x38))(plVar2);
  return;
}



// FUNCTION 14078dd6a FUN_14078dd6a body=40 status=ok
// SIG undefined FUN_14078dd6a(void)

undefined8 FUN_14078dd6a(undefined8 param_1,int param_2)

{
  FUN_14078dd92();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14078dd92 FUN_14078dd92 body=81 status=ok
// SIG undefined FUN_14078dd92(void)

void FUN_14078dd92(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ada5720;
  if (param_1[0x57] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x55] != 0) {
    FUN_1400020a8();
  }
  FUN_1403aed04(param_1 + 0x3a);
  FUN_140595c52(param_1);
  return;
}



// FUNCTION 14078dde4 FUN_14078dde4 body=302 status=ok
// SIG undefined FUN_14078dde4(void)

undefined4 *
FUN_14078dde4(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  char cVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  uint *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_14078dfac(param_1,local_50);
  puVar1 = (undefined1 *)param_3[1];
  uVar4 = *(uint *)*param_3;
  *local_48 = uVar4;
  *(undefined1 *)(local_48 + 1) = *puVar1;
  local_48[2] = 0xffffffff;
  local_54 = local_50[0];
  local_68 = param_4;
  cVar2 = FUN_14078df14(param_1,uVar4,local_48);
  if (cVar2 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar6 = 1;
    if (3 < uVar5) {
      uVar3 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      local_48[3] = uVar4;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      local_48[2] = *(uint *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
                                      (longlong)(int)uVar4) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_14078e188(param_1);
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14078df14 FUN_14078df14 body=152 status=ok
// SIG undefined FUN_14078df14(void)

void FUN_14078df14(longlong *param_1,uint param_2,int *param_3,int *param_4,undefined1 *param_5)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  longlong *plVar3;
  int iVar4;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar4 != -1) {
      do {
        puVar1 = (undefined8 *)(*param_1 + (longlong)iVar4 * 0x10);
        if (*(int *)(*param_1 + (longlong)iVar4 * 0x10) == *param_3) {
          *puVar1 = *(undefined8 *)param_3;
          FUN_14688bd4a(param_1,*param_4,1);
          *param_4 = iVar4;
          uVar2 = 1;
          break;
        }
        iVar4 = *(int *)(puVar1 + 1);
        uVar2 = 0;
      } while (iVar4 != -1);
      goto LAB_14078df38;
    }
  }
  uVar2 = 0;
LAB_14078df38:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar2;
  }
  return;
}



// FUNCTION 14078dfac FUN_14078dfac body=476 status=ok
// SIG undefined FUN_14078dfac(void)

int * FUN_14078dfac(longlong *param_1,int *param_2)

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
      FUN_144869a3c(param_1,iVar11);
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
    iVar6 = *(int *)(*param_1 + 4 + lVar3 * 0x10);
    *(int *)(param_1 + 6) = iVar6;
    iVar2 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar6 * 0x10) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar3 * 0x10 + *param_1;
  return param_2;
}



// FUNCTION 14078e188 FUN_14078e188 body=640 status=ok
// SIG undefined FUN_14078e188(void)

void FUN_14078e188(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  int iVar14;
  ulonglong uVar15;
  
  plVar5 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar5,0,0,4);
  }
  plVar1 = param_1 + 7;
  uVar7 = *(uint *)(param_1 + 9);
  if (uVar7 == 1) {
    if (*plVar5 != 0) {
      FUN_1446efa72(plVar5,0,0,4);
    }
  }
  else {
    if (uVar7 == 0) {
      return;
    }
    FUN_1446efa72(plVar5,0,uVar7,4);
    if ((int)uVar7 < 1) goto LAB_14078e1eb;
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
  } while (uVar7 != uVar2);
LAB_14078e1eb:
  iVar14 = (int)param_1[5];
  if (iVar14 == 0) {
    uVar3 = 0;
    uVar11 = 1;
    iVar12 = 0;
    iVar4 = 0;
  }
  else {
    puVar10 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar10 = (uint *)(param_1 + 2);
    }
    uVar7 = *puVar10;
    if (uVar7 == 0) {
      iVar12 = iVar14 + 0x1e;
      if (-1 < iVar14 + -1) {
        iVar12 = iVar14 + -1;
      }
      uVar3 = 0;
      uVar11 = (ulonglong)(uint)(iVar12 >> 5);
      if (iVar12 >> 5 < 1) {
        uVar11 = uVar3;
      }
      iVar4 = 0;
      do {
        if (uVar11 == uVar3) {
          return;
        }
        iVar4 = iVar4 + 0x20;
        uVar7 = puVar10[uVar3 + 1];
        uVar3 = uVar3 + 1;
      } while (uVar7 == 0);
    }
    else {
      uVar3 = 0;
      iVar4 = 0;
    }
    uVar11 = (ulonglong)(-uVar7 & uVar7);
    uVar15 = uVar11 * 2 + 1;
    lVar6 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    iVar12 = (iVar4 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
    if (iVar14 <= iVar12) {
      iVar12 = iVar14;
    }
  }
  if (iVar12 < iVar14) {
    uVar7 = 0xffffffff;
    do {
      lVar6 = *param_1;
      lVar13 = (longlong)iVar12 * 0x10;
      uVar15 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar6 + lVar13);
      iVar14 = (int)uVar15;
      *(int *)(lVar6 + 0xc + lVar13) = iVar14;
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(undefined4 *)(lVar6 + 8 + lVar13) =
           *(undefined4 *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & uVar15) * 4);
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(int *)((longlong)plVar5 + ((longlong)iVar14 & (longlong)(int)param_1[9] - 1U) * 4) = iVar12;
      uVar7 = ~(uint)uVar11 & uVar7;
      puVar10 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar10 = (uint *)(param_1 + 2);
      }
      iVar14 = (int)param_1[5];
      iVar12 = (int)uVar3;
      lVar6 = (longlong)iVar12;
      uVar2 = puVar10[lVar6] & uVar7;
      if (uVar2 == 0) {
        iVar8 = iVar14 + 0x1e;
        if (-1 < iVar14 + -1) {
          iVar8 = iVar14 + -1;
        }
        iVar8 = iVar8 >> 5;
        iVar9 = iVar8;
        if (iVar8 < iVar12) {
          iVar9 = iVar12;
        }
        if (iVar8 <= iVar12) {
          return;
        }
        lVar13 = 0;
        while( true ) {
          iVar4 = iVar4 + 0x20;
          uVar2 = puVar10[lVar6 + lVar13 + 1];
          if (uVar2 != 0) break;
          lVar13 = lVar13 + 1;
          if (iVar9 - lVar6 == lVar13) {
            return;
          }
        }
        uVar3 = (ulonglong)(iVar12 + (int)lVar13 + 1);
        uVar7 = 0xffffffff;
      }
      uVar11 = (ulonglong)(-uVar2 & uVar2);
      uVar15 = uVar11 * 2 + 1;
      lVar6 = 0x3f;
      if (uVar15 != 0) {
        for (; uVar15 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar12 = (iVar4 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
    } while (iVar12 < iVar14);
  }
  return;
}



// FUNCTION 14078e408 FUN_14078e408 body=1727 status=ok
// SIG undefined FUN_14078e408(void)

void FUN_14078e408(longlong *param_1,longlong *param_2,float param_3,longlong *param_4)

{
  undefined8 *puVar1;
  float fVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  void *_Src;
  longlong *plVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  longlong *plVar11;
  longlong lVar12;
  int iVar13;
  ulonglong uVar14;
  undefined8 in_R8;
  int iVar15;
  undefined1 uVar16;
  longlong lVar17;
  longlong lVar18;
  bool bVar19;
  float fVar20;
  undefined1 auStack_198 [44];
  int local_16c;
  longlong *local_168;
  longlong *local_160;
  longlong *local_158;
  longlong *local_150;
  longlong local_148;
  longlong *local_140;
  undefined4 local_138;
  float *local_130;
  undefined4 local_128;
  undefined8 *local_120;
  undefined4 local_118;
  longlong local_110;
  undefined4 auStack_108 [2];
  longlong lStack_100;
  undefined4 auStack_f8 [2];
  longlong lStack_f0;
  undefined4 auStack_e8 [2];
  longlong alStack_e0 [2];
  undefined1 local_d0 [64];
  float local_90;
  float local_8c;
  undefined8 local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_198;
  puVar4 = (undefined8 *)*param_4;
  plVar5 = (longlong *)param_4[1];
  lVar12 = param_4[2];
  fVar20 = 1.0 - param_3;
  FUN_142255df0(*(undefined8 *)*param_1,*puVar4,in_R8,*(undefined4 *)((undefined8 *)*param_1 + 1));
  FUN_142255d50(*(undefined8 *)*param_2,*puVar4,fVar20,*(undefined4 *)((undefined8 *)*param_2 + 1));
  FUN_142400cf0(*puVar4,*(undefined4 *)(puVar4 + 1));
  local_168 = (longlong *)param_1[1];
  plVar11 = local_168;
  local_158 = param_1;
  local_150 = param_2;
  local_148 = lVar12;
  if ((ABS(fVar20) <= 1e-05) || (plVar11 = (longlong *)param_2[1], ABS(fVar20 + -1.0) <= 1e-05)) {
    local_168 = plVar11;
    if (plVar5 != local_168) {
      iVar3 = (int)local_168[1];
      _Src = (void *)*local_168;
      *(int *)(plVar5 + 1) = iVar3;
      if (iVar3 == 0 && *(int *)((longlong)plVar5 + 0xc) == 0) {
        *(undefined4 *)((longlong)plVar5 + 0xc) = 0;
      }
      else {
        FUN_14471726c(plVar5,iVar3);
        if (iVar3 != 0) {
          memcpy((void *)*plVar5,_Src,(longlong)iVar3 << 4);
        }
      }
    }
    uVar16 = (undefined1)local_168[2];
LAB_14078e939:
    *(undefined1 *)(plVar5 + 2) = uVar16;
    local_120 = &local_88;
    local_88 = 0x100000000;
    local_118 = 2;
    local_130 = &local_90;
    local_128 = 2;
    local_90 = param_3;
    local_8c = fVar20;
    FUN_14074e50c(&local_110,local_158[2]);
    FUN_14074e50c(local_d0,local_150[2]);
    local_138 = 2;
    local_140 = &local_110;
    FUN_14074e632(&local_140,&local_130,&local_120,local_148);
    lVar12 = 0x40;
    do {
      if (*(longlong *)((longlong)alStack_e0 + lVar12) != 0) {
        FUN_1400020a8();
      }
      FUN_144716785(*(undefined8 *)((longlong)&lStack_f0 + lVar12),
                    *(undefined4 *)((longlong)auStack_e8 + lVar12));
      if (*(longlong *)((longlong)&lStack_f0 + lVar12) != 0) {
        FUN_1400020a8();
      }
      FUN_144716758(*(undefined8 *)((longlong)&lStack_100 + lVar12),
                    *(undefined4 *)((longlong)auStack_f8 + lVar12));
      if (*(longlong *)((longlong)&lStack_100 + lVar12) != 0) {
        FUN_1400020a8();
      }
      FUN_144716727(*(undefined8 *)((longlong)&local_110 + lVar12),
                    *(undefined4 *)((longlong)auStack_108 + lVar12));
      if (*(longlong *)((longlong)&local_110 + lVar12) != 0) {
        FUN_1400020a8();
      }
      lVar12 = lVar12 + -0x40;
    } while (lVar12 != -0x40);
    if ((local_80 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
  *(undefined4 *)(plVar5 + 1) = 0;
  if (*(int *)((longlong)plVar5 + 0xc) < 0) {
    FUN_14480ffb8(plVar5,0);
  }
  plVar7 = local_168;
  local_16c = (int)local_168[1];
  iVar3 = (int)plVar11[1];
  local_160 = plVar11;
  if ((char)local_168[2] == '\0') {
    FUN_144716af1(*local_168,local_16c);
    *(undefined1 *)(plVar7 + 2) = 1;
  }
  plVar11 = local_160;
  if ((char)local_160[2] == '\0') {
    FUN_144716af1(*local_160,(int)local_160[1]);
    *(undefined1 *)(plVar11 + 2) = 1;
  }
  iVar9 = local_16c;
  if (local_16c < iVar3) {
    iVar9 = iVar3;
  }
  iVar9 = iVar9 / 2 + iVar9;
  if (-1 < iVar9) {
    if (*(int *)((longlong)plVar5 + 0xc) < iVar9) {
      FUN_14480ffb8(plVar5);
    }
    bVar19 = local_16c == 0;
    if (bVar19 && 0 < iVar3) {
      iVar13 = 0;
    }
    else {
      iVar10 = 0;
      iVar13 = 0;
      do {
        if (iVar13 == iVar3) {
          iVar15 = local_16c - iVar10;
          if (iVar15 != 0 && iVar10 <= local_16c) {
            lVar12 = plVar5[1];
            iVar9 = (int)lVar12 + iVar15;
            if (-1 < iVar9) {
              if (*(int *)((longlong)plVar5 + 0xc) < iVar9) {
                FUN_14480ffb8(plVar5);
              }
              lVar12 = (longlong)(int)lVar12 << 4;
              lVar17 = (longlong)iVar10 << 4;
              do {
                lVar18 = *local_168;
                iVar3 = (int)plVar5[1];
                *(uint *)(plVar5 + 1) = iVar3 + 1U;
                if (*(uint *)((longlong)plVar5 + 0xc) < iVar3 + 1U) {
                  FUN_1406de67a(plVar5,iVar3);
                }
                lVar6 = *plVar5;
                FUN_14470c6f4((longlong)iVar3 * 0x10 + lVar6,1);
                *(undefined8 *)(lVar6 + (longlong)iVar3 * 0x10) = *(undefined8 *)(lVar18 + lVar17);
                lVar6 = *plVar5;
                fVar2 = *(float *)(lVar18 + 8 + lVar17);
                *(float *)(lVar6 + 8 + lVar12) = (0.0 - fVar2) * fVar20 + fVar2;
                *(undefined1 *)(lVar6 + 0xc + lVar12) = *(undefined1 *)(lVar18 + 0xc + lVar17);
                lVar12 = lVar12 + 0x10;
                lVar17 = lVar17 + 0x10;
                uVar16 = 1;
                iVar15 = iVar15 + -1;
              } while (iVar15 != 0);
              goto LAB_14078e939;
            }
            goto LAB_14078e8c6;
          }
          uVar16 = 1;
          if (bVar19) goto LAB_14078e939;
        }
        puVar4 = (undefined8 *)(*local_168 + (longlong)iVar10 * 0x10);
        puVar1 = (undefined8 *)(*plVar11 + (longlong)iVar13 * 0x10);
        lVar12 = *(longlong *)(*plVar11 + (longlong)iVar13 * 0x10);
        lVar17 = *(longlong *)(*local_168 + (longlong)iVar10 * 0x10);
        if (lVar17 == lVar12) {
          iVar9 = (int)plVar5[1];
          *(uint *)(plVar5 + 1) = iVar9 + 1U;
          if (*(uint *)((longlong)plVar5 + 0xc) < iVar9 + 1U) {
            FUN_1406de67a(plVar5,iVar9);
          }
          lVar12 = *plVar5;
          lVar17 = (longlong)iVar9 * 0x10;
          FUN_14470c6f4(lVar12 + lVar17,1);
          *(undefined8 *)(lVar12 + lVar17) = *puVar4;
          *(float *)(lVar12 + 8 + lVar17) =
               (*(float *)(puVar1 + 1) - *(float *)(puVar4 + 1)) * fVar20 + *(float *)(puVar4 + 1);
          *(byte *)(lVar12 + 0xc + lVar17) =
               *(byte *)((longlong)puVar4 + 0xc) | *(byte *)((longlong)puVar1 + 0xc);
          iVar10 = iVar10 + 1;
LAB_14078e63e:
          iVar13 = iVar13 + 1;
        }
        else {
          iVar9 = (int)lVar17 - (int)lVar12;
          if (iVar9 == 0) {
            iVar9 = (int)((ulonglong)lVar17 >> 0x20) - (int)((ulonglong)lVar12 >> 0x20);
          }
          iVar15 = (int)plVar5[1];
          uVar8 = iVar15 + 1;
          *(uint *)(plVar5 + 1) = uVar8;
          if (-1 < iVar9) {
            if (*(uint *)((longlong)plVar5 + 0xc) < uVar8) {
              FUN_1406de67a(plVar5,iVar15);
            }
            lVar12 = *plVar5;
            lVar17 = (longlong)iVar15 * 0x10;
            FUN_14470c6f4(lVar12 + lVar17,1);
            *(undefined8 *)(lVar12 + lVar17) = *puVar1;
            *(float *)(lVar12 + 8 + lVar17) = *(float *)(puVar1 + 1) * fVar20 + 0.0;
            *(undefined1 *)(lVar12 + 0xc + lVar17) = *(undefined1 *)((longlong)puVar1 + 0xc);
            goto LAB_14078e63e;
          }
          if (*(uint *)((longlong)plVar5 + 0xc) < uVar8) {
            FUN_1406de67a(plVar5,iVar15);
          }
          lVar12 = *plVar5;
          lVar17 = (longlong)iVar15 * 0x10;
          FUN_14470c6f4(lVar12 + lVar17,1);
          *(undefined8 *)(lVar12 + lVar17) = *puVar4;
          *(float *)(lVar12 + 8 + lVar17) =
               (0.0 - *(float *)(puVar4 + 1)) * fVar20 + *(float *)(puVar4 + 1);
          *(undefined1 *)(lVar12 + 0xc + lVar17) = *(undefined1 *)((longlong)puVar4 + 0xc);
          iVar10 = iVar10 + 1;
        }
        bVar19 = iVar10 == local_16c;
        plVar11 = local_160;
      } while ((!bVar19) || (iVar3 <= iVar13));
    }
    iVar9 = (iVar3 - iVar13) + (int)plVar5[1];
    if (-1 < iVar9) {
      if (*(int *)((longlong)plVar5 + 0xc) < iVar9) {
        FUN_14480ffb8(plVar5);
      }
      uVar16 = 1;
      iVar9 = iVar3 - iVar13;
      if (iVar9 != 0 && iVar13 <= iVar3) {
        uVar14 = (longlong)iVar13 << 4 | 0xc;
        do {
          lVar12 = *plVar11;
          iVar3 = (int)plVar5[1];
          *(uint *)(plVar5 + 1) = iVar3 + 1U;
          if (*(uint *)((longlong)plVar5 + 0xc) < iVar3 + 1U) {
            FUN_1406de67a(plVar5,iVar3);
          }
          lVar17 = *plVar5;
          lVar18 = (longlong)iVar3 * 0x10;
          FUN_14470c6f4(lVar17 + lVar18,1);
          *(undefined8 *)(lVar17 + lVar18) = *(undefined8 *)(lVar12 + -0xc + uVar14);
          *(float *)(lVar17 + 8 + lVar18) = *(float *)(lVar12 + -4 + uVar14) * fVar20 + 0.0;
          *(undefined1 *)(lVar17 + 0xc + lVar18) = *(undefined1 *)(lVar12 + uVar14);
          uVar14 = uVar14 + 0x10;
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
      }
      goto LAB_14078e939;
    }
  }
LAB_14078e8c6:
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(iVar9);
}



// FUNCTION 14078eac8 FUN_14078eac8 body=143 status=ok
// SIG undefined FUN_14078eac8(void)

void FUN_14078eac8(longlong *param_1,longlong param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x9f8))(param_1,&local_28);
  if (&local_28 == param_3) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_28;
    *(undefined4 *)(param_3 + 1) = local_20;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14078eb58 FUN_14078eb58 body=116 status=ok
// SIG undefined FUN_14078eb58(void)

longlong * FUN_14078eb58(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  
  *param_2 = 0;
  param_2[1] = 0;
  uVar1 = (**(code **)(*param_1 + 0x7b0))();
  if (0 < (int)uVar1) {
    *(uint *)(param_2 + 1) = uVar1;
    uVar3 = 0;
    FUN_144769b64(param_2);
    memset((void *)*param_2,0,(ulonglong)uVar1 * 8);
    do {
      uVar2 = (**(code **)(*param_1 + 0x610))(param_1,uVar3 & 0xffffffff);
      *(undefined8 *)(*param_2 + uVar3 * 8) = uVar2;
      uVar3 = uVar3 + 1;
    } while (uVar1 != uVar3);
  }
  return param_2;
}



// FUNCTION 14078ebcc FUN_14078ebcc body=570 status=ok
// SIG undefined FUN_14078ebcc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14078ebcc(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  undefined1 auVar2 [32];
  double dVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  
  if ((((param_1[0x2c6] == 0) && (cVar6 = (**(code **)(*param_1 + 0xbf0))(param_1), cVar6 == '\0'))
      && (cVar6 = FUN_140769252(param_1), cVar6 == '\0')) && (param_1[0x2c7] == 0)) {
    FUN_14078eeec(param_1,param_2,param_3);
    return;
  }
  auVar13 = *(undefined1 (*) [16])(param_1 + 0x50) & _DAT_149931180;
  auVar2._16_16_ = _DAT_149931180 & *(undefined1 (*) [16])(param_1 + 0x52);
  auVar2._0_16_ = auVar13;
  auVar14._0_8_ = SUB168(_DAT_149931180 & *(undefined1 (*) [16])(param_1 + 0x52),0);
  auVar14._8_8_ = auVar13._0_8_;
  auVar13 = maxpd(auVar13,auVar2._8_16_);
  auVar14 = maxpd(auVar13,auVar14);
  plVar10 = (longlong *)0x0;
  FUN_144780dac(param_1,param_2,0,(float)auVar14._0_8_ * *(float *)((longlong)param_1 + 0x85c),
                param_3);
  if (param_1 != (longlong *)0x0) {
    uVar9 = FUN_14078ee06();
    plVar10 = (longlong *)FUN_144718840(param_1,uVar9);
  }
  iVar7 = (**(code **)(*plVar10 + 0x40))(plVar10);
  lVar5 = param_1[0x2cc];
  if ((longlong)(int)lVar5 != 0) {
    lVar1 = param_1[0x2cb];
    lVar11 = 0;
    do {
      plVar10 = *(longlong **)(lVar1 + lVar11);
      if ((plVar10 != (longlong *)0x0) && ((int)plVar10[0x17] != -1)) {
        if (iVar7 < 0) {
          dVar3 = (double)param_1[0x32] + (double)param_1[0x32];
        }
        else {
          iVar8 = (**(code **)(*plVar10 + 0x3c0))(plVar10);
          dVar3 = (double)(iVar7 - iVar8);
        }
        iVar8 = (int)param_3[1];
        *(uint *)(param_3 + 1) = iVar8 + 1U;
        if (*(uint *)((longlong)param_3 + 0xc) < iVar8 + 1U) {
          FUN_144781dc0(param_3,iVar8);
        }
        lVar12 = *param_3;
        *(longlong **)(lVar12 + (longlong)iVar8 * 0x50) = plVar10;
        if (DAT_14c950c29 == '\x01') {
          FUN_1456cec3c(plVar10);
        }
        lVar12 = lVar12 + (longlong)iVar8 * 0x50;
        *(longlong *)(lVar12 + 0x38) = param_1[0x32];
        auVar14 = *(undefined1 (*) [16])(param_1 + 0x2c);
        auVar13 = *(undefined1 (*) [16])(param_1 + 0x2e);
        lVar4 = param_1[0x31];
        *(longlong *)(lVar12 + 0x28) = param_1[0x30];
        *(longlong *)(lVar12 + 0x30) = lVar4;
        *(undefined1 (*) [16])(lVar12 + 0x18) = auVar13;
        *(undefined1 (*) [16])(lVar12 + 8) = auVar14;
        *(float *)(lVar12 + 0x40) = (float)dVar3;
        *(undefined4 *)(lVar12 + 0x44) = 0xffff0000;
        *(byte *)(lVar12 + 0x48) = *(byte *)(lVar12 + 0x48) & 0xfc;
      }
      lVar11 = lVar11 + 8;
    } while ((longlong)(int)lVar5 * 8 != lVar11);
  }
  return;
}



// FUNCTION 14078ee06 FUN_14078ee06 body=228 status=ok
// SIG undefined FUN_14078ee06(void)

longlong FUN_14078ee06(void)

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
  if (DAT_14cad85f8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_147a92c03;
    local_40 = FUN_1463c777a;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/Engine",L"LODSyncInterface",&DAT_14cad85f8,&DAT_147a92c02);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cad85f8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14078eeec FUN_14078eeec body=544 status=ok
// SIG undefined FUN_14078eeec(void)

void FUN_14078eeec(longlong param_1,undefined8 param_2,longlong *param_3)

{
  double dVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  longlong *plVar9;
  longlong lVar10;
  
  FUN_144780dac(param_1,param_2,0,*(undefined4 *)(param_1 + 0x85c),param_3);
  lVar10 = *(longlong *)(param_1 + 0x658);
  if (lVar10 == 0) {
    lVar10 = *(longlong *)(param_1 + 0x660);
    if ((DAT_14c950c29 & lVar10 != 0) != 0) goto LAB_14078f0c4;
    if (lVar10 == 0) {
      return;
    }
LAB_14078f05d:
    if ((DAT_14c950c29 & lVar10 != 0) != 0) {
LAB_14078f0ff:
      FUN_1456cec3c(lVar10);
    }
  }
  else if (DAT_14c950c29 != 0) {
LAB_14078f0c4:
    FUN_1456cec3c(lVar10);
    lVar10 = *(longlong *)(param_1 + 0x658);
    if (lVar10 == 0) {
      lVar10 = *(longlong *)(param_1 + 0x660);
      goto LAB_14078f05d;
    }
    if ((DAT_14c950c29 & 1) == 0) goto LAB_14078ef32;
    goto LAB_14078f0ff;
  }
LAB_14078ef32:
  if (*(int *)(lVar10 + 0xb8) == -1) {
    return;
  }
  iVar7 = (**(code **)(*(longlong *)(param_1 + 0x650) + 0x40))(param_1 + 0x650);
  if (iVar7 < 0) {
    dVar1 = *(double *)(param_1 + 400) + *(double *)(param_1 + 400);
  }
  else {
    plVar9 = *(longlong **)(param_1 + 0x658);
    if (plVar9 == (longlong *)0x0) {
      plVar9 = *(longlong **)(param_1 + 0x660);
      if ((DAT_14c950c29 & plVar9 != (longlong *)0x0) != 0) goto LAB_14078f0b7;
    }
    else if (DAT_14c950c29 == 1) {
LAB_14078f0b7:
      FUN_1456cec3c(plVar9);
    }
    iVar8 = (**(code **)(*plVar9 + 0x3c0))(plVar9);
    dVar1 = (double)(iVar7 - iVar8);
  }
  iVar7 = (int)param_3[1];
  *(uint *)(param_3 + 1) = iVar7 + 1U;
  if (*(uint *)((longlong)param_3 + 0xc) < iVar7 + 1U) {
    FUN_144781dc0(param_3,iVar7);
  }
  plVar9 = (longlong *)((longlong)iVar7 * 0x50 + *param_3);
  lVar10 = *(longlong *)(param_1 + 0x658);
  if (lVar10 == 0) {
    lVar10 = *(longlong *)(param_1 + 0x660);
    if ((DAT_14c950c29 & lVar10 != 0) == 0) goto LAB_14078efa0;
  }
  else if (DAT_14c950c29 != 1) goto LAB_14078efa0;
  FUN_1456cec3c(lVar10);
LAB_14078efa0:
  bVar6 = DAT_14c950c29;
  *plVar9 = lVar10;
  if ((lVar10 != 0) && ((bVar6 & 1) != 0)) {
    FUN_1456cec3c(lVar10);
  }
  plVar9[7] = *(longlong *)(param_1 + 400);
  lVar10 = *(longlong *)(param_1 + 0x160);
  lVar2 = *(longlong *)(param_1 + 0x168);
  lVar3 = *(longlong *)(param_1 + 0x170);
  lVar4 = *(longlong *)(param_1 + 0x178);
  lVar5 = *(longlong *)(param_1 + 0x188);
  plVar9[5] = *(longlong *)(param_1 + 0x180);
  plVar9[6] = lVar5;
  plVar9[3] = lVar3;
  plVar9[4] = lVar4;
  plVar9[1] = lVar10;
  plVar9[2] = lVar2;
  *(float *)(plVar9 + 8) = (float)dVar1;
  *(undefined4 *)((longlong)plVar9 + 0x44) = 0xffff0000;
  *(byte *)(plVar9 + 9) = *(byte *)(plVar9 + 9) & 0xfc;
  return;
}



// FUNCTION 14078f116 FUN_14078f116 body=164 status=ok
// SIG undefined FUN_14078f116(void)

void FUN_14078f116(longlong *param_1,longlong param_2,undefined4 param_3)

{
  undefined1 auStack_68 [40];
  longlong local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x2f));
    (**(code **)(*param_1 + 0xd8))(param_1,&local_40,param_2);
    if (1 < local_38) {
      (**(code **)(*param_1 + 0xb8))(param_1,local_40,param_3);
    }
    if (local_40 != 0) {
      FUN_1400020a8();
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x2f));
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14078f1bc FUN_14078f1bc body=249 status=ok
// SIG undefined FUN_14078f1bc(void)

void FUN_14078f1bc(longlong *param_1,undefined8 param_2,char param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined1 auStack_68 [32];
  longlong local_48 [2];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x2f));
  plVar1 = (longlong *)(**(code **)(*param_1 + 0xd0))(param_1,param_2,1);
  if (plVar1 != (longlong *)0x0) {
    FUN_14078f374(param_1 + 0x1b,param_2,plVar1);
    plVar2 = (longlong *)(**(code **)(*plVar1 + 0x38))(plVar1);
    if (plVar2 != (longlong *)0x0) {
      FUN_14078f2d2(param_1 + 0x18,plVar2);
      if (param_3 != '\0') {
        (**(code **)(*plVar2 + 0x20))(plVar2,8);
        goto LAB_14078f24f;
      }
    }
    FUN_140056680(local_48,param_2);
    FUN_14078f4e8(param_1 + 1,local_48);
    if (local_48[0] != 0) {
      FUN_1400020a8();
    }
    (**(code **)(*plVar1 + 0x90))(plVar1);
  }
LAB_14078f24f:
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x2f));
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14078f2d2 FUN_14078f2d2 body=162 status=ok
// SIG undefined FUN_14078f2d2(void)

void FUN_14078f2d2(longlong *param_1,undefined8 param_2)

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
        goto LAB_14078f35f;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_14078f35f:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 14078f374 FUN_14078f374 body=173 status=ok
// SIG undefined FUN_14078f374(void)

void FUN_14078f374(longlong *param_1,undefined8 param_2,undefined8 param_3)

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
        goto LAB_14078f40b;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_14078f40b:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 14078f45e FUN_14078f45e body=137 status=ok
// SIG undefined FUN_14078f45e(void)

undefined8 * FUN_14078f45e(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_149e12cc0;
  plVar1 = param_1 + 4;
  if (*(int *)(param_1 + 5) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) goto LAB_14078f486;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 5) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_14078f486:
  *param_1 = &PTR_LAB_149e12740;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14078f4e8 FUN_14078f4e8 body=449 status=ok
// SIG undefined FUN_14078f4e8(void)

undefined8 FUN_14078f4e8(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  undefined2 *puVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  int iVar14;
  
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
    return 0;
  }
  iVar5 = (int)param_2[1];
  iVar7 = iVar5 + -1;
  if (iVar5 == 0) {
    iVar7 = 0;
  }
  uVar13 = 0;
  if (0 < iVar7) {
    if (iVar5 == 0) {
      puVar8 = &DAT_149dfb77a;
    }
    else {
      puVar8 = (undefined2 *)*param_2;
    }
    lVar11 = 0;
    uVar13 = 0;
    do {
      uVar4 = ((uint)(ushort)puVar8[lVar11] + (uint)(0x19 < (ushort)puVar8[lVar11] - 0x61) * 0x20) -
              0x20;
      uVar13 = uVar13 >> 8 ^ *(uint *)(&DAT_14c75d150 + (ulonglong)((uVar13 ^ uVar4) & 0xff) * 4);
      uVar13 = uVar13 >> 8 ^
               *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar13 & 0xff ^ uVar4 >> 8 & 0xff) * 4);
      lVar11 = lVar11 + 1;
    } while (iVar7 != (int)lVar11);
  }
  plVar9 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar9 = (longlong *)param_1[8];
  }
  iVar7 = *(int *)((longlong)plVar9 + ((longlong)(int)uVar13 & (longlong)(int)param_1[9] - 1U) * 4);
  if (iVar7 == -1) {
    return 0;
  }
  lVar11 = *param_1;
LAB_14078f5c5:
  lVar10 = (longlong)iVar7 * 0x20;
  plVar1 = (longlong *)(lVar11 + lVar10);
  iVar14 = *(int *)(lVar11 + 8 + lVar10);
  if (iVar14 == iVar5) {
    if (1 < iVar5) {
      lVar12 = 0;
      do {
        uVar2 = *(ushort *)(*plVar1 + lVar12);
        uVar3 = *(ushort *)(*param_2 + lVar12);
        if (uVar2 == uVar3) {
          if (uVar2 == 0) break;
        }
        else {
          if (0x7f < (uVar3 | uVar2)) {
            iVar14 = (uint)uVar2 - (uint)uVar3;
            goto LAB_14078f68e;
          }
          if ((&DAT_149e05da0)[uVar2] != (&DAT_149e05da0)[(uint)uVar3]) goto LAB_14078f68b;
        }
        lVar12 = lVar12 + 2;
      } while( true );
    }
    goto LAB_14078f62d;
  }
  if (iVar14 + iVar5 == 1) goto LAB_14078f62d;
  goto LAB_14078f693;
LAB_14078f68b:
  iVar14 = (uint)(byte)(&DAT_149e05da0)[uVar2] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar3];
LAB_14078f68e:
  if (iVar14 == 0) {
LAB_14078f62d:
    iVar5 = *(int *)((longlong)plVar9 + (longlong)*(int *)((longlong)plVar1 + 0x1c) * 4);
    if (iVar5 == iVar7) {
      piVar6 = (int *)((longlong)plVar9 + (longlong)*(int *)((longlong)plVar1 + 0x1c) * 4);
    }
    else {
      do {
        piVar6 = (int *)(lVar11 + (longlong)iVar5 * 0x20 + 0x18);
        iVar5 = *piVar6;
      } while (iVar5 != iVar7);
    }
    *piVar6 = (int)plVar1[3];
    if (*(longlong *)(*param_1 + lVar10) != 0) {
      FUN_1400020a8();
    }
    FUN_14078f6aa(param_1,iVar7);
    return 1;
  }
LAB_14078f693:
  iVar7 = (int)plVar1[3];
  if (iVar7 == -1) {
    return 0;
  }
  goto LAB_14078f5c5;
}



// FUNCTION 14078f6aa FUN_14078f6aa body=114 status=ok
// SIG undefined FUN_14078f6aa(void)

void FUN_14078f6aa(longlong *param_1,int param_2)

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



// FUNCTION 14078f71c FUN_14078f71c body=137 status=ok
// SIG undefined FUN_14078f71c(void)

undefined8 * FUN_14078f71c(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_149e128a0;
  plVar1 = param_1 + 4;
  if (*(int *)(param_1 + 5) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) goto LAB_14078f744;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 5) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_14078f744:
  *param_1 = &PTR_LAB_149e12740;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14078f7a6 FUN_14078f7a6 body=137 status=ok
// SIG undefined FUN_14078f7a6(void)

undefined8 * FUN_14078f7a6(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_149e12a00;
  plVar1 = param_1 + 4;
  if (*(int *)(param_1 + 5) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) goto LAB_14078f7ce;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 5) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_14078f7ce:
  *param_1 = &PTR_LAB_149e12740;
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14078f830 FUN_14078f830 body=107 status=ok
// SIG undefined FUN_14078f830(void)

undefined8 FUN_14078f830(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_14078f875:
    (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30),param_2);
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_14078f875;
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
    (**(code **)(param_1 + 0x28))
              ((longlong)*(int *)(param_1 + 0x30) + *(longlong *)(param_1 + 0x18),param_2);
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



// FUNCTION 14078f8d4 FUN_14078f8d4 body=128 status=ok
// SIG undefined FUN_14078f8d4(void)

undefined8
FUN_14078f8d4(undefined8 param_1,longlong param_2,undefined8 param_3,int param_4,byte param_5)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  iVar1 = FUN_14078f954();
  if (iVar1 < *(int *)(param_2 + 0x130)) {
    uVar2 = 0;
    if (param_4 != 0) {
      if (*(longlong *)(*(longlong *)(param_2 + 0x128) + (longlong)iVar1 * 8) != 0) {
        iVar1 = FUN_14078f954();
        if ((iVar1 < *(int *)(param_2 + 0x130)) &&
           (lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x128) + (longlong)iVar1 * 8), lVar3 != 0)
           ) {
          lVar3 = lVar3 + 8;
        }
        else {
          lVar3 = 0;
        }
        uVar2 = *(undefined8 *)
                 ((ulonglong)param_5 * 0x20 + lVar3 + 0x10 + (ulonglong)(param_4 != 1) * 8);
      }
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 14078f954 FUN_14078f954 body=136 status=ok
// SIG undefined FUN_14078f954(void)

ulonglong FUN_14078f954(void)

{
  ulonglong uVar1;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = (ulonglong)DAT_14c760a80;
  if (DAT_14c760a80 == 0xffffffff) {
    local_28 = 0x16c;
    FUN_140002266(local_20,L"%s %s %d",L"FCASImageData",
                  L".\\Runtime/Renderer/Private/VariableRateShading/ContrastAdaptiveImageGenerator.cpp"
                 );
    uVar1 = FUN_145d12cf0(local_20);
    DAT_14c760a80 = (uint)uVar1;
    if (local_20[0] != 0) {
      FUN_1400020a8();
      uVar1 = (ulonglong)DAT_14c760a80;
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14078f9e8 FUN_14078f9e8 body=219 status=ok
// SIG undefined FUN_14078f9e8(void)

undefined8 * FUN_14078f9e8(undefined8 *param_1)

{
  FUN_140833d68();
  *(undefined4 *)(param_1 + 0xc9) = 0;
  param_1[0xca] = 0x40b3880000000000;
  *(undefined1 *)(param_1 + 0xcb) = 1;
  *(undefined1 *)(param_1 + 0xcc) = 0;
  *param_1 = &PTR_FUN_14b911b10;
  param_1[0x72] = &PTR_FUN_14b9121c0;
  param_1[0xce] = 0;
  param_1[0xcf] = 0;
  param_1[0xd0] = 0;
  param_1[0xd1] = 0;
  param_1[0xd2] = 0;
  param_1[0xd3] = 0;
  *(undefined4 *)(param_1 + 0xd4) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0x6a4) = 0;
  param_1[0xe0] = 0;
  param_1[0xd5] = 0;
  param_1[0xd6] = 0;
  param_1[0xd7] = 0;
  param_1[0xd8] = 0;
  param_1[0xd9] = 0;
  param_1[0xda] = 0;
  param_1[0xdb] = 0;
  param_1[0xdc] = 0;
  param_1[0xdd] = 0;
  param_1[0xde] = 0;
  *(undefined1 *)(param_1 + 0xdf) = 0;
  *(undefined4 *)(param_1 + 0xe1) = 0x6000;
  param_1[0xe2] = 0;
  FUN_1405e4918(param_1,0x3d088889);
  *(undefined4 *)((longlong)param_1 + 0x19c) = 0x3d088889;
  return param_1;
}



// FUNCTION 14078fac4 FUN_14078fac4 body=2217 status=ok
// SIG undefined FUN_14078fac4(void)

longlong FUN_14078fac4(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong lVar5;
  
  lVar5 = *(longlong *)(param_1 + 0x790);
  if (lVar5 != 0) {
    FUN_145743f9e(lVar5);
    FUN_1400020a8(lVar5);
  }
  FUN_144760f98(param_1 + 0x950);
  puVar3 = *(undefined8 **)(param_1 + 0x938);
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3,1);
  }
  FUN_14079057a(param_1 + 0x870);
  FUN_140790396(param_1 + 0x818);
  FUN_144760e21(*(undefined8 *)(param_1 + 0x800),*(undefined4 *)(param_1 + 0x808));
  if (*(longlong *)(param_1 + 0x800) != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(*(undefined8 *)(param_1 + 0x7e8),*(undefined4 *)(param_1 + 0x7f0));
  if (*(longlong *)(param_1 + 0x7e8) != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(*(undefined8 *)(param_1 + 2000),*(undefined4 *)(param_1 + 0x7d8));
  if (*(longlong *)(param_1 + 2000) != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(*(undefined8 *)(param_1 + 0x7b8),*(undefined4 *)(param_1 + 0x7c0));
  if (*(longlong *)(param_1 + 0x7b8) != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(*(undefined8 *)(param_1 + 0x7a0),*(undefined4 *)(param_1 + 0x7a8));
  if (*(longlong *)(param_1 + 0x7a0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x770) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x760) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x6b8) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x6a8) != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(*(undefined8 *)(param_1 + 0x690),*(undefined4 *)(param_1 + 0x698));
  if (*(longlong *)(param_1 + 0x690) != 0) {
    FUN_1400020a8();
  }
  FUN_144760f98(param_1 + 0x658);
  FUN_144760f98(param_1 + 0x628);
  if (*(longlong *)(param_1 + 0x610) != 0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(*(undefined8 *)(param_1 + 0x600),*(undefined4 *)(param_1 + 0x608));
  if (*(longlong *)(param_1 + 0x600) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x5f0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x5e0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x5c8) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x5b8) != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(*(undefined8 *)(param_1 + 0x5a0),*(undefined4 *)(param_1 + 0x5a8));
  if (*(longlong *)(param_1 + 0x5a0) != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(*(undefined8 *)(param_1 + 0x588),*(undefined4 *)(param_1 + 0x590));
  if (*(longlong *)(param_1 + 0x588) != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(*(undefined8 *)(param_1 + 0x570),*(undefined4 *)(param_1 + 0x578));
  if (*(longlong *)(param_1 + 0x570) != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(*(undefined8 *)(param_1 + 0x558),*(undefined4 *)(param_1 + 0x560));
  if (*(longlong *)(param_1 + 0x558) != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(*(undefined8 *)(param_1 + 0x540),*(undefined4 *)(param_1 + 0x548));
  if (*(longlong *)(param_1 + 0x540) != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(*(undefined8 *)(param_1 + 0x528),*(undefined4 *)(param_1 + 0x530));
  if (*(longlong *)(param_1 + 0x528) != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(*(undefined8 *)(param_1 + 0x510),*(undefined4 *)(param_1 + 0x518));
  if (*(longlong *)(param_1 + 0x510) != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(*(undefined8 *)(param_1 + 0x4f8),*(undefined4 *)(param_1 + 0x500));
  if (*(longlong *)(param_1 + 0x4f8) != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(*(undefined8 *)(param_1 + 0x4e0),*(undefined4 *)(param_1 + 0x4e8));
  if (*(longlong *)(param_1 + 0x4e0) != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(*(undefined8 *)(param_1 + 0x4c8),*(undefined4 *)(param_1 + 0x4d0));
  if (*(longlong *)(param_1 + 0x4c8) != 0) {
    FUN_1400020a8();
  }
  FUN_1407909d0(param_1 + 0x460);
  FUN_144760e21(*(undefined8 *)(param_1 + 0x440),*(undefined4 *)(param_1 + 0x448));
  if (*(longlong *)(param_1 + 0x440) != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(*(undefined8 *)(param_1 + 0x428),*(undefined4 *)(param_1 + 0x430));
  if (*(longlong *)(param_1 + 0x428) != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(*(undefined8 *)(param_1 + 0x410),*(undefined4 *)(param_1 + 0x418));
  if (*(longlong *)(param_1 + 0x410) != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(*(undefined8 *)(param_1 + 0x3f8),*(undefined4 *)(param_1 + 0x400));
  if (*(longlong *)(param_1 + 0x3f8) != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(*(undefined8 *)(param_1 + 0x3e0),*(undefined4 *)(param_1 + 1000));
  if (*(longlong *)(param_1 + 0x3e0) != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(*(undefined8 *)(param_1 + 0x3c8),*(undefined4 *)(param_1 + 0x3d0));
  if (*(longlong *)(param_1 + 0x3c8) != 0) {
    FUN_1400020a8();
  }
  lVar5 = 0x360;
  do {
    FUN_14079047c(param_1 + lVar5);
    lVar5 = lVar5 + -0x60;
  } while (lVar5 != 0x2a0);
  if (*(longlong *)(param_1 + 0x2f0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x2e0) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x2d8) = 0;
  if (*(longlong *)(param_1 + 0x2d0) != 0) {
    FUN_1400020a8();
  }
  FUN_1407903ca(param_1 + 0x290);
  plVar4 = *(longlong **)(param_1 + 0x280);
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
  plVar4 = *(longlong **)(param_1 + 0x270);
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
  if (*(longlong *)(param_1 + 0x250) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x240) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x230) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x220) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x1f8) != 0) {
    FUN_1400020a8();
  }
  FUN_14051bf10(param_1 + 0x1d0);
  FUN_144760e21(*(undefined8 *)(param_1 + 0x1b8),*(undefined4 *)(param_1 + 0x1c0));
  if (*(longlong *)(param_1 + 0x1b8) != 0) {
    FUN_1400020a8();
  }
  FUN_14079036d(*(undefined8 *)(param_1 + 0x1a0),*(undefined4 *)(param_1 + 0x1a8));
  if (*(longlong *)(param_1 + 0x1a0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 400) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x138) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x128) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xf8) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    FUN_1400020a8();
  }
  if (*(char *)(param_1 + 0xdb) == '\x01') {
    *(undefined1 *)(param_1 + 0xdb) = 0;
  }
  if (*(char *)(param_1 + 0xd9) == '\x01') {
    *(undefined1 *)(param_1 + 0xd9) = 0;
  }
  if (*(longlong *)(param_1 + 200) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x88) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14079036d FUN_14079036d body=40 status=ok
// SIG undefined FUN_14079036d(void)

void FUN_14079036d(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1456d5336(param_1);
    param_1 = param_1 + 0x78;
  }
  return;
}



// FUNCTION 140790396 FUN_140790396 body=51 status=ok
// SIG undefined FUN_140790396(void)

void FUN_140790396(longlong param_1)

{
  FUN_1407915be(param_1,0);
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_140790542(param_1);
  return;
}



// FUNCTION 1407903ca FUN_1407903ca body=55 status=ok
// SIG undefined FUN_1407903ca(void)

void FUN_1407903ca(longlong *param_1)

{
  FUN_140790402(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140790402 FUN_140790402 body=121 status=ok
// SIG undefined FUN_140790402(void)

void FUN_140790402(longlong param_1,int param_2)

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



// FUNCTION 14079047c FUN_14079047c body=110 status=ok
// SIG undefined FUN_14079047c(void)

void FUN_14079047c(longlong *param_1)

{
  longlong *plVar1;
  
  plVar1 = param_1 + 6;
  if ((longlong *)param_1[10] != (longlong *)0x0) {
    plVar1 = (longlong *)param_1[10];
  }
  FUN_144717c65(plVar1,(int)param_1[0xb]);
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_1407904ea(param_1[2],(int)param_1[3]);
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  FUN_1407906d0(*param_1,(int)param_1[1]);
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1407904ea FUN_1407904ea body=88 status=ok
// SIG undefined FUN_1407904ea(void)

void FUN_1407904ea(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    lVar1 = *param_1;
    if (lVar1 != 0) {
      lVar2 = 0x4ad0;
      do {
        FUN_1479b5446(lVar1 + lVar2);
        lVar2 = lVar2 + -0x130;
      } while (lVar2 != -0x130);
      FUN_1400020a8(lVar1);
    }
    param_1 = param_1 + 1;
  }
  return;
}



// FUNCTION 140790542 FUN_140790542 body=55 status=ok
// SIG undefined FUN_140790542(void)

void FUN_140790542(longlong *param_1)

{
  FUN_140791d4e(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14079057a FUN_14079057a body=106 status=ok
// SIG undefined FUN_14079057a(void)

void FUN_14079057a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14aac8f28;
  FUN_140790e84();
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  FUN_1407905e4(param_1 + 0xb);
  *(undefined4 *)(param_1 + 10) = 0;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_14079061c(param_1 + 1);
  return;
}



// FUNCTION 1407905e4 FUN_1407905e4 body=55 status=ok
// SIG undefined FUN_1407905e4(void)

void FUN_1407905e4(longlong *param_1)

{
  FUN_1407907b2(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14079061c FUN_14079061c body=55 status=ok
// SIG undefined FUN_14079061c(void)

void FUN_14079061c(longlong *param_1)

{
  FUN_140790654(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140790654 FUN_140790654 body=123 status=ok
// SIG undefined FUN_140790654(void)

void FUN_140790654(longlong param_1,int param_2)

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



// FUNCTION 1407906d0 FUN_1407906d0 body=225 status=ok
// SIG undefined FUN_1407906d0(void)

void FUN_1407906d0(longlong *param_1,int param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong lVar4;
  
  do {
    if (param_2 == 0) {
      return;
    }
    lVar1 = *param_1;
    if (lVar1 != 0) {
      lVar4 = 0x5400;
      do {
        if (*(longlong *)(lVar1 + -0x20 + lVar4) != 0) {
          FUN_1400020a8();
        }
        plVar3 = (longlong *)(lVar1 + lVar4 + -0x30);
        if (*(int *)(lVar1 + lVar4 + -0x28) == 0) {
LAB_14079071b:
          if (*plVar3 != 0) {
            FUN_1400020a8();
          }
        }
        else {
          puVar2 = (undefined8 *)*plVar3;
          if (puVar2 != (undefined8 *)0x0) {
            (**(code **)*puVar2)(puVar2,0);
            FUN_1446efa72(plVar3,0,0,0x10);
            *(undefined4 *)(lVar1 + -0x28 + lVar4) = 0;
            goto LAB_14079071b;
          }
        }
        if (*(longlong *)(lVar1 + -0xd8 + lVar4) != 0) {
          FUN_1400020a8();
        }
        if (*(longlong *)(lVar1 + -0xf8 + lVar4) != 0) {
          FUN_1400020a8();
        }
        lVar4 = lVar4 + -0x150;
      } while (lVar4 != 0);
      FUN_1400020a8(lVar1);
    }
    param_1 = param_1 + 1;
    param_2 = param_2 + -1;
  } while( true );
}



// FUNCTION 1407907b2 FUN_1407907b2 body=542 status=ok
// SIG undefined FUN_1407907b2(void)

void FUN_1407907b2(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong *plVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  ulonglong uVar9;
  longlong lVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  
  puVar1 = (uint *)(param_1 + 2);
  iVar3 = (int)param_1[5];
  if (iVar3 == 0) {
    uVar15 = 0;
    uVar14 = 1;
    iVar11 = 0;
    iVar7 = 0;
  }
  else {
    puVar8 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar8 = puVar1;
    }
    uVar12 = *puVar8;
    if (uVar12 == 0) {
      iVar11 = iVar3 + 0x1e;
      if (-1 < iVar3 + -1) {
        iVar11 = iVar3 + -1;
      }
      uVar15 = 0;
      uVar9 = (ulonglong)(uint)(iVar11 >> 5);
      if (iVar11 >> 5 < 1) {
        uVar9 = uVar15;
      }
      iVar11 = 0;
      do {
        if (uVar9 == uVar15) goto LAB_1407907e7;
        iVar11 = iVar11 + 0x20;
        uVar12 = puVar8[uVar15 + 1];
        uVar15 = uVar15 + 1;
      } while (uVar12 == 0);
    }
    else {
      uVar15 = 0;
      iVar11 = 0;
    }
    uVar14 = (ulonglong)(-uVar12 & uVar12);
    uVar9 = uVar14 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar9 != 0) {
      for (; uVar9 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    iVar7 = (iVar11 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
    if (iVar3 <= iVar7) {
      iVar7 = iVar3;
    }
  }
  if (iVar7 < iVar3) {
    uVar12 = 0xffffffff;
    do {
      plVar2 = *(longlong **)(*param_1 + 8 + (longlong)iVar7 * 0x18);
      if (plVar2 != (longlong *)0x0) {
        if (*plVar2 != 0) {
          FUN_1400020a8();
        }
        FUN_1400020a8(plVar2);
        iVar3 = (int)param_1[5];
      }
      uVar12 = uVar12 & ~(uint)uVar14;
      puVar8 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar8 = puVar1;
      }
      iVar7 = (int)uVar15;
      lVar13 = (longlong)iVar7;
      uVar4 = puVar8[lVar13] & uVar12;
      if (uVar4 == 0) {
        iVar5 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar5 = iVar3 + -1;
        }
        iVar5 = iVar5 >> 5;
        iVar6 = iVar5;
        if (iVar5 < iVar7) {
          iVar6 = iVar7;
        }
        if (iVar5 <= iVar7) break;
        lVar10 = 0;
        while( true ) {
          iVar11 = iVar11 + 0x20;
          uVar4 = puVar8[lVar13 + lVar10 + 1];
          if (uVar4 != 0) break;
          lVar10 = lVar10 + 1;
          if (iVar6 - lVar13 == lVar10) goto LAB_1407907e7;
        }
        uVar15 = (ulonglong)(iVar7 + (int)lVar10 + 1);
        uVar12 = 0xffffffff;
      }
      uVar14 = (ulonglong)(-uVar4 & uVar4);
      uVar9 = uVar14 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      iVar7 = (iVar11 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
    } while (iVar7 < iVar3);
  }
LAB_1407907e7:
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_144727cd0(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar12 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (((int)uVar12 <= *(int *)((longlong)param_1 + 0x2c)) &&
     (*(int *)((longlong)param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar4 = 0x80;
  if (0x80 < (int)uVar12) {
    uVar4 = uVar12;
  }
  *(uint *)((longlong)param_1 + 0x2c) = uVar4;
  FUN_1446efbd8(puVar1,0);
  return;
}



// FUNCTION 1407909d0 FUN_1407909d0 body=664 status=ok
// SIG undefined FUN_1407909d0(void)

void FUN_1407909d0(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined1 auStack_e8 [40];
  longlong local_c0;
  longlong *local_b8;
  undefined8 local_b0;
  longlong *plStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  longlong *local_90;
  undefined8 local_88;
  longlong *local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  longlong *local_68;
  longlong *plStack_60;
  ulonglong local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  plVar1 = param_1 + 2;
  local_b8 = (longlong *)&DAT_100000000;
  plStack_a8 = (longlong *)&DAT_ffffffff;
  local_a0 = local_a0 & 0xffffffff00000000;
  iVar9 = 0;
  local_b0 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_b8);
    iVar9 = (int)param_1[5];
  }
  local_78 = plStack_a8;
  plVar4 = local_78;
  local_70 = (uint)local_a0;
  local_6c = local_a0._4_4_;
  local_88 = local_b8;
  local_80 = local_b0;
  local_78._4_4_ = (int)((ulonglong)plStack_a8 >> 0x20);
  iVar7 = local_78._4_4_;
  local_90 = param_1;
  if ((local_78._4_4_ != iVar9) || (local_78 = plVar4, local_b0 != plVar1)) {
    do {
      local_78 = plVar4;
      lVar3 = *local_90;
      plVar4 = *(longlong **)(lVar3 + 8 + (longlong)iVar7 * 0x20);
      if (plVar4 != (longlong *)0x0) {
        plVar2 = plVar4 + 2;
        local_68 = (longlong *)&DAT_100000000;
        local_58 = 0xffffffff;
        uStack_50 = 0;
        local_c0 = lVar3;
        plStack_60 = plVar2;
        if ((int)plVar4[5] == 0) {
          iVar10 = 0;
        }
        else {
          FUN_1449c0562(&local_68);
          iVar10 = (int)plVar4[5];
        }
        uStack_98 = CONCAT44(uStack_4c,uStack_50);
        local_a0 = local_58;
        uVar6 = local_a0;
        local_b0 = local_68;
        plStack_a8 = plStack_60;
        local_a0._4_4_ = (int)(local_58 >> 0x20);
        iVar8 = local_a0._4_4_;
        local_b8 = plVar4;
        if ((local_a0._4_4_ != iVar10) || (local_a0 = uVar6, plStack_60 != plVar2)) {
          do {
            local_a0 = uVar6;
            puVar5 = *(undefined8 **)(*local_b8 + 8 + (longlong)iVar8 * 0x18);
            *(undefined8 *)(*local_b8 + 8 + (longlong)iVar8 * 0x18) = 0;
            if (puVar5 != (undefined8 *)0x0) {
              (**(code **)*puVar5)(puVar5,1);
            }
            local_a0 = CONCAT44(local_a0._4_4_,(uint)local_a0 & ~local_b0._4_4_);
            FUN_1449c0562(&local_b0);
            iVar8 = local_a0._4_4_;
            uVar6 = local_a0;
          } while (((local_a0._4_4_ != iVar10) || (plStack_a8 != plVar2)) || (local_b8 != plVar4));
        }
        FUN_140792310(*(undefined8 *)(local_c0 + (longlong)iVar7 * 0x20 + 8));
      }
      local_78 = (longlong *)CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
      FUN_1449c0562(&local_88);
      iVar7 = local_78._4_4_;
      plVar4 = local_78;
    } while (((local_78._4_4_ != iVar9) || (local_80 != plVar1)) || (local_90 != param_1));
  }
  FUN_140790c69(param_1[10],(int)param_1[0xb]);
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 9) = 0;
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  FUN_140790ce4(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140790c69 FUN_140790c69 body=75 status=ok
// SIG undefined FUN_140790c69(void)

void FUN_140790c69(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 0x10);
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



// FUNCTION 140790cb4 FUN_140790cb4 body=47 status=ok
// SIG undefined FUN_140790cb4(void)

void FUN_140790cb4(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  if (plVar1 != (longlong *)0x0) {
    if (*plVar1 != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(plVar1);
    return;
  }
  return;
}



// FUNCTION 140790ce4 FUN_140790ce4 body=414 status=ok
// SIG undefined FUN_140790ce4(void)

void FUN_140790ce4(longlong *param_1,int param_2)

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



// FUNCTION 140790e84 FUN_140790e84 body=1849 status=ok
// SIG undefined FUN_140790e84(void)

void FUN_140790e84(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  ulonglong uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  longlong *plVar14;
  ulonglong uVar15;
  uint uVar16;
  int iVar17;
  bool bVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  undefined1 auStack_c8 [40];
  longlong *local_a0;
  uint *local_98;
  longlong *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  uint *local_68;
  uint *puStack_60;
  longlong local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  uVar16 = DAT_14cb0ada0;
  plVar14 = DAT_14cb0ad98;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(longlong *)(param_1 + 0xb0) == 0) goto LAB_140790eb3;
  lVar13 = (longlong)(int)DAT_14cb0ada0;
  if (lVar13 == 0) {
LAB_1407912ad:
    FUN_145743fcc();
  }
  else {
    uVar10 = 0;
    uVar9 = 0;
    bVar18 = *DAT_14cb0ad98 == param_1;
    do {
      uVar12 = (uint)uVar9;
      uVar2 = uVar12 + 1;
      if ((int)(uVar12 + 1) < (int)uVar16) {
        uVar2 = uVar16;
      }
      uVar19 = uVar9;
      uVar15 = uVar9;
      do {
        uVar15 = uVar15 + 1;
        uVar20 = (ulonglong)uVar2;
        if (lVar13 <= (longlong)uVar15) break;
        uVar19 = (ulonglong)((int)uVar19 + 1);
        uVar20 = uVar19;
      } while (bVar18 == (plVar14[uVar15] == param_1));
      if (bVar18 == false) {
        iVar17 = (int)uVar20 - uVar12;
        if (uVar10 != uVar12) {
          memmove(plVar14 + (int)uVar10,plVar14 + uVar9,(longlong)iVar17 << 3);
        }
        uVar10 = uVar10 + iVar17;
      }
      uVar9 = uVar20;
      bVar18 = (bool)(bVar18 ^ 1);
    } while ((longlong)uVar15 < lVar13);
    DAT_14cb0ada0 = uVar10;
    if (uVar10 == 0) goto LAB_1407912ad;
  }
  local_98 = (uint *)(param_1 + 0x68);
  local_90 = (longlong *)&DAT_100000000;
  uStack_80 = (uint *)&DAT_ffffffff;
  local_78 = (ulonglong)local_78._4_4_ << 0x20;
  local_88 = local_98;
  if (*(int *)(param_1 + 0x80) == 0) {
    uVar9 = 1;
    uVar16 = 0;
    uVar10 = 0;
    iVar17 = 0;
    uVar12 = 0xffffffff;
    iVar5 = 0;
  }
  else {
    FUN_1449c0562(&local_90);
    uVar9 = (ulonglong)local_90 >> 0x20;
    uVar16 = *(uint *)(param_1 + 0x80);
    uVar10 = uStack_80._4_4_;
    iVar17 = (int)local_90;
    uVar12 = (uint)uStack_80;
    iVar5 = (uint)local_78;
  }
  puVar1 = local_88;
  local_a0 = (longlong *)(param_1 + 0x58);
  plVar14 = local_a0;
  while ((uVar10 != uVar16 || (puVar1 != local_98))) {
    if (*(char *)(*(longlong *)(*plVar14 + 8 + (longlong)(int)uVar10 * 0x18) + 0x10) == '\x01') {
      FUN_14010318a(*(undefined8 *)(*plVar14 + (longlong)(int)uVar10 * 0x18),&local_90,0);
      plVar14 = local_90;
      if ((int)local_88 == 0) {
        plVar14 = (longlong *)&DAT_149dfb77a;
      }
      FUN_140033559(".\\Runtime/Engine/Private/Subsystems/SubsystemCollection.cpp",0xea,
                    L"FSubsystemCollectionBase::Deinitialize called while iterating subsystems of type %s"
                    ,plVar14);
      plVar14 = local_a0;
      if (local_90 != (longlong *)0x0) {
        FUN_1400020a8();
        plVar14 = local_a0;
      }
    }
    uVar12 = uVar12 & ~(uint)uVar9;
    puVar8 = *(uint **)(puVar1 + 4);
    if (*(uint **)(puVar1 + 4) == (uint *)0x0) {
      puVar8 = puVar1;
    }
    uVar2 = puVar1[6];
    lVar13 = (longlong)iVar17;
    uVar10 = puVar8[lVar13] & uVar12;
    if (uVar10 == 0) {
      iVar11 = uVar2 + 0x1e;
      if (-1 < (int)(uVar2 - 1)) {
        iVar11 = uVar2 - 1;
      }
      iVar11 = iVar11 >> 5;
      iVar5 = iVar5 + 0x20;
      iVar6 = iVar11;
      if (iVar11 < iVar17) {
        iVar6 = iVar17;
      }
      if (iVar17 < iVar11) {
        lVar4 = 0;
        do {
          uVar10 = puVar8[lVar13 + lVar4 + 1];
          if (uVar10 != 0) {
            iVar17 = iVar17 + (int)lVar4 + 1;
            uVar12 = 0xffffffff;
            goto LAB_140791503;
          }
          iVar5 = iVar5 + 0x20;
          lVar4 = lVar4 + 1;
        } while (iVar6 - lVar13 != lVar4);
        uVar12 = 0xffffffff;
        iVar17 = iVar6;
      }
      iVar17 = iVar17 + 1;
      plVar14 = local_a0;
      uVar10 = uVar2;
    }
    else {
LAB_140791503:
      uVar9 = (ulonglong)(-uVar10 & uVar10);
      uVar15 = uVar9 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar15 != 0) {
        for (; uVar15 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      uVar10 = (iVar5 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
      if ((int)uVar2 <= (int)uVar10) {
        uVar10 = uVar2;
      }
    }
  }
  plVar14 = (longlong *)(param_1 + 8);
  puVar1 = (uint *)(param_1 + 0x18);
  iVar17 = *(int *)(param_1 + 0x30);
  if (iVar17 == 0) {
    uVar9 = 1;
    uVar15 = 0;
    iVar5 = 0;
    iVar11 = 0;
  }
  else {
    puVar8 = *(uint **)(param_1 + 0x28);
    if (*(uint **)(param_1 + 0x28) == (uint *)0x0) {
      puVar8 = puVar1;
    }
    uVar16 = *puVar8;
    if (uVar16 == 0) {
      iVar5 = iVar17 + 0x1e;
      if (-1 < iVar17 + -1) {
        iVar5 = iVar17 + -1;
      }
      uVar15 = 0;
      uVar9 = (ulonglong)(uint)(iVar5 >> 5);
      if (iVar5 >> 5 < 1) {
        uVar9 = uVar15;
      }
      iVar11 = 0;
      do {
        if (uVar9 == uVar15) goto LAB_140791144;
        iVar11 = iVar11 + 0x20;
        uVar16 = puVar8[uVar15 + 1];
        uVar15 = uVar15 + 1;
      } while (uVar16 == 0);
    }
    else {
      uVar15 = 0;
      iVar11 = 0;
    }
    uVar9 = (ulonglong)(-uVar16 & uVar16);
    uVar19 = uVar9 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar19 != 0) {
      for (; uVar19 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    iVar5 = (iVar11 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
    if (iVar17 <= iVar5) {
      iVar5 = iVar17;
    }
  }
  if (iVar5 < iVar17) {
    uVar16 = 0xffffffff;
    do {
      plVar3 = *(longlong **)(*plVar14 + 8 + (longlong)iVar5 * 0x18);
      if ((plVar3 != (longlong *)0x0) &&
         (plVar3[2] == *(longlong *)(*plVar14 + (longlong)iVar5 * 0x18))) {
        (**(code **)(*plVar3 + 0x2b0))(plVar3);
        plVar3[5] = 0;
        iVar17 = *(int *)(param_1 + 0x30);
      }
      uVar16 = uVar16 & ~(uint)uVar9;
      puVar8 = *(uint **)(param_1 + 0x28);
      if (*(uint **)(param_1 + 0x28) == (uint *)0x0) {
        puVar8 = puVar1;
      }
      iVar5 = (int)uVar15;
      lVar13 = (longlong)iVar5;
      uVar10 = puVar8[lVar13] & uVar16;
      if (uVar10 == 0) {
        iVar6 = iVar17 + 0x1e;
        if (-1 < iVar17 + -1) {
          iVar6 = iVar17 + -1;
        }
        iVar6 = iVar6 >> 5;
        iVar7 = iVar6;
        if (iVar6 < iVar5) {
          iVar7 = iVar5;
        }
        if (iVar6 <= iVar5) break;
        lVar4 = 0;
        while( true ) {
          iVar11 = iVar11 + 0x20;
          uVar10 = puVar8[lVar13 + lVar4 + 1];
          if (uVar10 != 0) break;
          lVar4 = lVar4 + 1;
          if (iVar7 - lVar13 == lVar4) goto LAB_140791144;
        }
        uVar15 = (ulonglong)(iVar5 + (int)lVar4 + 1);
        uVar16 = 0xffffffff;
      }
      uVar9 = (ulonglong)(-uVar10 & uVar10);
      uVar19 = uVar9 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar19 != 0) {
        for (; uVar19 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      iVar5 = (iVar11 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
    } while (iVar5 < iVar17);
  }
LAB_140791144:
  plVar3 = local_a0;
  iVar17 = *(int *)(param_1 + 0xa0);
  if (iVar17 < 2) {
    lVar13 = param_1 + 0x90;
    if (*(longlong *)(param_1 + 0x98) != 0) {
      lVar13 = *(longlong *)(param_1 + 0x98);
    }
    iVar5 = iVar17 + 3;
    if (-1 < iVar17) {
      iVar5 = iVar17;
    }
    if (*(int *)(param_1 + 0x60) - *(int *)(param_1 + 0x8c) < iVar5 >> 2) {
      local_68 = (uint *)&DAT_100000000;
      puStack_60 = local_98;
      local_58 = 0xffffffff;
      uStack_50 = 0;
      if (*(int *)(param_1 + 0x80) == 0) {
        iVar17 = 0;
      }
      else {
        FUN_1449c0562(&local_68);
        iVar17 = *(int *)(param_1 + 0x80);
      }
      local_90 = local_a0;
      uStack_70 = CONCAT44(uStack_4c,uStack_50);
      local_88 = local_68;
      uStack_80 = puStack_60;
      local_78 = local_58;
      lVar4 = local_78;
      local_78._4_4_ = (uint)((ulonglong)local_58 >> 0x20);
      iVar5 = local_78._4_4_;
      if ((local_78._4_4_ != iVar17) || (local_78 = lVar4, puStack_60 != local_98)) {
        do {
          local_78 = lVar4;
          *(undefined4 *)
           (lVar13 + (longlong)*(int *)(*local_90 + 0x14 + (longlong)iVar5 * 0x18) * 4) = 0xffffffff
          ;
          local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
          FUN_1449c0562(&local_88);
          iVar5 = local_78._4_4_;
          lVar4 = local_78;
        } while (local_90 != local_a0 || (uStack_80 != local_98 || local_78._4_4_ != iVar17));
      }
    }
    else if (iVar17 == 1) {
      lVar4 = 0;
      do {
        *(undefined4 *)(lVar13 + lVar4 * 4) = 0xffffffff;
        lVar4 = lVar4 + 1;
      } while (lVar4 < *(int *)(param_1 + 0xa0));
    }
    FUN_1407907b2(local_a0,0);
  }
  else {
    FUN_1407907b2(local_a0,0);
    *(undefined4 *)(param_1 + 0xa0) = 1;
    FUN_1401980b4(plVar3);
  }
  iVar17 = *(int *)(param_1 + 0x50);
  if (iVar17 < 2) {
    lVar13 = param_1 + 0x40;
    if (*(longlong *)(param_1 + 0x48) != 0) {
      lVar13 = *(longlong *)(param_1 + 0x48);
    }
    iVar5 = iVar17 + 3;
    if (-1 < iVar17) {
      iVar5 = iVar17;
    }
    if (*(int *)(param_1 + 0x10) - *(int *)(param_1 + 0x3c) < iVar5 >> 2) {
      local_68 = (uint *)&DAT_100000000;
      local_58 = 0xffffffff;
      uStack_50 = 0;
      puStack_60 = puVar1;
      if (*(int *)(param_1 + 0x30) == 0) {
        iVar17 = 0;
      }
      else {
        FUN_1449c0562(&local_68);
        iVar17 = *(int *)(param_1 + 0x30);
      }
      uStack_70 = CONCAT44(uStack_4c,uStack_50);
      local_88 = local_68;
      uStack_80 = puStack_60;
      local_78 = local_58;
      lVar4 = local_78;
      local_78._4_4_ = (uint)((ulonglong)local_58 >> 0x20);
      iVar5 = local_78._4_4_;
      local_90 = plVar14;
      if ((local_78._4_4_ != iVar17) || (local_78 = local_58, puStack_60 != puVar1)) {
        do {
          local_78 = lVar4;
          *(undefined4 *)
           (lVar13 + (longlong)*(int *)(*local_90 + 0x14 + (longlong)iVar5 * 0x18) * 4) = 0xffffffff
          ;
          local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
          FUN_1449c0562(&local_88);
          iVar5 = local_78._4_4_;
          lVar4 = local_78;
        } while (local_90 != plVar14 || (uStack_80 != puVar1 || local_78._4_4_ != iVar17));
      }
    }
    else if (iVar17 == 1) {
      lVar4 = 0;
      do {
        *(undefined4 *)(lVar13 + lVar4 * 4) = 0xffffffff;
        lVar4 = lVar4 + 1;
      } while (lVar4 < *(int *)(param_1 + 0x50));
    }
    FUN_140790654(plVar14,0);
  }
  else {
    FUN_140790654(plVar14,0);
    *(undefined4 *)(param_1 + 0x50) = 1;
    FUN_140792024(plVar14);
  }
  *(undefined8 *)(param_1 + 0xb0) = 0;
LAB_140790eb3:
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407915be FUN_1407915be body=1530 status=ok
// SIG undefined FUN_1407915be(void)

void FUN_1407915be(code *param_1,longlong param_2)

{
  code *pcVar1;
  code *pcVar2;
  longlong lVar3;
  longlong *plVar4;
  bool bVar5;
  ulonglong uVar6;
  bool bVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  bool bVar13;
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
  longlong local_a8;
  undefined8 uStack_a0;
  code *local_90;
  undefined8 local_88;
  code *local_80;
  uint local_78;
  int iStack_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  code *local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  pcVar1 = param_1 + 0x10;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  local_50 = 0;
  iVar12 = 0;
  local_60 = pcVar1;
  if (*(int *)(param_1 + 0x28) != 0) {
    FUN_1449c0562(&local_68);
    iVar12 = *(int *)(param_1 + 0x28);
  }
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_70 = local_50;
  local_6c = local_4c;
  local_88 = local_68;
  local_80 = local_60;
  local_90 = param_1;
  if ((iStack_54 != iVar12) || (local_60 != pcVar1)) {
    do {
      do {
        FUN_143602932(*(longlong *)local_90 + (longlong)iStack_74 * 0x20 + 8);
        local_78 = local_78 & ~local_88._4_4_;
        FUN_1449c0562(&local_88);
      } while (iStack_74 != iVar12);
    } while ((local_80 != pcVar1) || (local_90 != param_1));
  }
  FUN_140791bba();
  if ((param_2 == 0) ||
     ((*(longlong *)(param_2 + 0x30) == 0 ||
      (lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x30) + 0x2b0), lVar3 == 0))))
  goto LAB_140791697;
  local_a8 = 0;
  uStack_a0 = 0;
  lVar9 = FUN_140791f3e();
  if ((lVar9 == 0) || (DAT_14c950c29 == 0)) {
    if (lVar9 != 0) goto LAB_140791715;
    bVar7 = true;
    if (DAT_14cad00c8 == 0) goto LAB_140791a4d;
    lVar11 = 0;
LAB_140791741:
    bVar5 = bVar7;
    bVar13 = lVar9 != 0;
    if (lVar11 != DAT_14cad00c8) goto LAB_14079174d;
    if ((lVar9 != 0) && (DAT_14c950c29 != 0)) {
      FUN_1456cec3c(lVar9);
    }
    FUN_147c616e6(lVar3,&local_a8);
  }
  else {
    FUN_1456cec3c(lVar9);
LAB_140791715:
    if (DAT_14cad00c8 == 0) {
      local_c0 = &local_90;
      local_90 = FUN_144a7958c;
      local_b0 = FUN_14081d0ea;
      local_b8 = FUN_14081d0ea;
      local_c8 = &LAB_1479b7a0c;
      local_d0 = &LAB_1463b464e;
      local_d8 = L"Engine";
      local_e0 = 0;
      local_e8 = 0x10000005;
      local_f0 = 8;
      local_f8 = 0x110;
      FUN_14081cfa3(L"/Script/Engine",L"ActorComponent",&DAT_14cad00c8,FUN_1463b462c);
      if (DAT_14cad00c8 == 0) {
        bVar7 = false;
LAB_140791a4d:
        local_c0 = &local_90;
        local_90 = FUN_144a7958c;
        local_b0 = FUN_14081d0ea;
        local_b8 = FUN_14081d0ea;
        local_c8 = &LAB_1479b7a0c;
        local_d0 = &LAB_1463b464e;
        local_d8 = L"Engine";
        local_e0 = 0;
        local_e8 = 0x10000005;
        local_f0 = 8;
        local_f8 = 0x110;
        FUN_14081cfa3(L"/Script/Engine",L"ActorComponent",&DAT_14cad00c8,FUN_1463b462c);
        lVar11 = 0;
        goto LAB_140791741;
      }
    }
    bVar13 = true;
    if (*(int *)(lVar9 + 0x38) < *(int *)(DAT_14cad00c8 + 0x38)) {
      bVar5 = false;
    }
    else {
      bVar5 = false;
      lVar11 = lVar9;
      bVar7 = false;
      if (*(longlong *)(*(longlong *)(lVar9 + 0x30) + (longlong)*(int *)(DAT_14cad00c8 + 0x38) * 8)
          == DAT_14cad00c8 + 0x30) goto LAB_140791741;
    }
LAB_14079174d:
    if ((bVar13 != false) && (DAT_14c950c29 != 0)) {
      FUN_1456cec3c(lVar9);
    }
    pcVar1 = (code *)(lVar3 + 0x240);
    pcVar2 = (code *)(lVar3 + 0x250);
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    iStack_54 = 0;
    local_50 = 0;
    iVar12 = 0;
    local_60 = pcVar2;
    if (*(int *)(lVar3 + 0x268) != 0) {
      FUN_1449c0562(&local_68);
      iVar12 = *(int *)(lVar3 + 0x268);
    }
    local_78 = local_58;
    iStack_74 = iStack_54;
    local_70 = local_50;
    local_6c = local_4c;
    local_88 = local_68;
    local_80 = local_60;
    local_90 = pcVar1;
    if ((iStack_54 != iVar12) || (local_60 != pcVar2)) {
      do {
        lVar3 = *(longlong *)(*(longlong *)local_90 + (longlong)iStack_74 * 0x10);
        if (lVar3 != 0) {
          if ((DAT_14c950c29 & bVar13) == 1) {
            FUN_1456cec3c(lVar9);
LAB_140791a0b:
            lVar11 = FUN_144a78d6a();
            if ((lVar11 == 0) || (*(int *)(lVar9 + 0x38) < *(int *)(lVar11 + 0x38)))
            goto LAB_140791996;
            lVar10 = 0;
            if (*(longlong *)(*(longlong *)(lVar9 + 0x30) + (longlong)*(int *)(lVar11 + 0x38) * 8)
                == lVar11 + 0x30) {
              lVar10 = lVar9;
            }
          }
          else {
            if (!bVar5) goto LAB_140791a0b;
LAB_140791996:
            lVar10 = 0;
          }
          uVar6 = uStack_a0;
          if ((*(int *)(lVar10 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar10 + 0x38) * 8) == lVar10 + 0x30)) {
            lVar11 = (longlong)(int)uStack_a0;
            uVar8 = (int)uStack_a0 + 1;
            uStack_a0 = CONCAT44(uStack_a0._4_4_,uVar8);
            if (uStack_a0._4_4_ < uVar8) {
              FUN_147c61820(&local_a8,uVar6 & 0xffffffff);
            }
            *(longlong *)(local_a8 + lVar11 * 8) = lVar3;
          }
        }
        local_78 = local_78 & ~local_88._4_4_;
        FUN_1449c0562(&local_88);
      } while (((iStack_74 != iVar12) || (local_80 != pcVar2)) || (local_90 != pcVar1));
    }
  }
  lVar3 = local_a8;
  lVar9 = (longlong)(int)uStack_a0;
  if (lVar9 != 0) {
    lVar11 = 0;
    do {
      plVar4 = *(longlong **)(lVar3 + lVar11);
      if ((byte)(*(char *)((longlong)plVar4 + 0x69c) - 1U) < 2) {
        *(undefined1 *)((longlong)plVar4 + 0x69c) = 0;
        (**(code **)(*plVar4 + 0x420))(plVar4,0);
      }
      lVar11 = lVar11 + 8;
    } while (lVar9 * 8 != lVar11);
  }
  if (local_a8 != 0) {
    FUN_1400020a8(local_a8);
  }
LAB_140791697:
  if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140791bba FUN_140791bba body=382 status=ok
// SIG undefined FUN_140791bba(void)

void FUN_140791bba(longlong *param_1)

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
  iVar6 = (int)param_1[9];
  if (iVar6 < 2) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
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
    else if (iVar6 == 1) {
      lVar3 = 0;
      do {
        *(undefined4 *)((longlong)plVar5 + lVar3 * 4) = 0xffffffff;
        lVar3 = lVar3 + 1;
      } while (lVar3 < (int)param_1[9]);
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_98);
  }
  FUN_140791d4e(param_1,0);
  *(undefined4 *)(param_1 + 9) = 1;
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  FUN_147c614e6(param_1);
  return;
}



// FUNCTION 140791d4e FUN_140791d4e body=494 status=ok
// SIG undefined FUN_140791d4e(void)

void FUN_140791d4e(longlong *param_1,int param_2)

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
  int iVar10;
  longlong lVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  
  puVar1 = (uint *)(param_1 + 2);
  iVar3 = (int)param_1[5];
  if (iVar3 == 0) {
    uVar13 = 0;
    uVar14 = 1;
    iVar10 = 0;
    iVar4 = 0;
  }
  else {
    puVar8 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar8 = puVar1;
    }
    uVar12 = *puVar8;
    if (uVar12 == 0) {
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
        if (uVar14 == uVar13) goto LAB_140791eaa;
        iVar10 = iVar10 + 0x20;
        uVar12 = puVar8[uVar13 + 1];
        uVar13 = uVar13 + 1;
      } while (uVar12 == 0);
    }
    else {
      uVar13 = 0;
      iVar10 = 0;
    }
    uVar14 = (ulonglong)(-uVar12 & uVar12);
    uVar2 = uVar14 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    iVar4 = (iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    if (iVar3 <= iVar4) {
      iVar4 = iVar3;
    }
  }
  if (iVar4 < iVar3) {
    uVar12 = 0xffffffff;
    do {
      if (*(longlong *)(*param_1 + 8 + (longlong)iVar4 * 0x20) != 0) {
        FUN_1400020a8();
        iVar3 = (int)param_1[5];
      }
      uVar12 = uVar12 & ~(uint)uVar14;
      puVar8 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar8 = puVar1;
      }
      iVar4 = (int)uVar13;
      lVar11 = (longlong)iVar4;
      uVar5 = puVar8[lVar11] & uVar12;
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
          iVar10 = iVar10 + 0x20;
          uVar5 = puVar8[lVar11 + lVar9 + 1];
          if (uVar5 != 0) break;
          lVar9 = lVar9 + 1;
          if (iVar7 - lVar11 == lVar9) goto LAB_140791eaa;
        }
        uVar13 = (ulonglong)(iVar4 + (int)lVar9 + 1);
        uVar12 = 0xffffffff;
      }
      uVar14 = (ulonglong)(-uVar5 & uVar5);
      uVar2 = uVar14 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar4 = (iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    } while (iVar4 < iVar3);
  }
LAB_140791eaa:
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
  if (*(int *)((longlong)param_1 + 0x2c) < (int)uVar12 || 0x80 < *(int *)((longlong)param_1 + 0x2c))
  {
    uVar5 = 0x80;
    if (0x80 < (int)uVar12) {
      uVar5 = uVar12;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar5;
    FUN_1446efbd8(puVar1,0);
    return;
  }
  return;
}



// FUNCTION 140791f3e FUN_140791f3e body=228 status=ok
// SIG undefined FUN_140791f3e(void)

longlong FUN_140791f3e(void)

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
  if (DAT_14cac62d0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14638c6c0;
    local_38 = &LAB_14788b1a6;
    local_40 = &LAB_14602b9a5;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x980;
    FUN_14081cfa3(L"/Script/Engine",L"ParticleSystemComponent",&DAT_14cac62d0,FUN_14638cb2e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cac62d0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140792024 FUN_140792024 body=747 status=ok
// SIG undefined FUN_140792024(void)

void FUN_140792024(longlong *param_1)

{
  longlong *plVar1;
  byte bVar2;
  uint uVar3;
  uint *puVar4;
  longlong *plVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  uint uVar15;
  ulonglong uVar16;
  
  plVar5 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar5,0,0,4);
  }
  plVar1 = param_1 + 7;
  uVar15 = *(uint *)(param_1 + 9);
  if (uVar15 == 1) {
    if (*plVar5 != 0) {
      FUN_1446efa72(plVar5,0,0,4);
    }
  }
  else {
    if (uVar15 == 0) {
      return;
    }
    FUN_1446efa72(plVar5,0,uVar15,4);
    if ((int)uVar15 < 1) goto LAB_14079208a;
  }
  uVar3 = 0;
  do {
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = plVar1;
    }
    *(undefined4 *)((longlong)plVar5 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar3) * 4) =
         0xffffffff;
    uVar3 = uVar3 + 1;
  } while (uVar15 != uVar3);
LAB_14079208a:
  iVar10 = (int)param_1[5];
  if (iVar10 == 0) {
    uVar16 = 0;
    uVar14 = 1;
    iVar9 = 0;
    iVar8 = 0;
  }
  else {
    puVar4 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar4 = (uint *)(param_1 + 2);
    }
    uVar15 = *puVar4;
    if (uVar15 == 0) {
      iVar8 = iVar10 + 0x1e;
      if (-1 < iVar10 + -1) {
        iVar8 = iVar10 + -1;
      }
      uVar16 = 0;
      uVar14 = (ulonglong)(uint)(iVar8 >> 5);
      if (iVar8 >> 5 < 1) {
        uVar14 = uVar16;
      }
      iVar8 = 0;
      do {
        if (uVar14 == uVar16) {
          return;
        }
        iVar8 = iVar8 + 0x20;
        uVar15 = puVar4[uVar16 + 1];
        uVar16 = uVar16 + 1;
      } while (uVar15 == 0);
    }
    else {
      uVar16 = 0;
      iVar8 = 0;
    }
    uVar14 = (ulonglong)(-uVar15 & uVar15);
    uVar11 = uVar14 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar11 != 0) {
      for (; uVar11 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    iVar9 = (iVar8 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
    if (iVar10 <= iVar9) {
      iVar9 = iVar10;
    }
  }
  if (iVar9 < iVar10) {
    uVar15 = 0xffffffff;
    bVar2 = DAT_14c950c29;
    do {
      lVar13 = *param_1;
      uVar11 = *(ulonglong *)(lVar13 + (longlong)iVar9 * 0x18);
      if (((bVar2 & 1) != 0) && (uVar11 != 0)) {
        FUN_1456cec3c(uVar11);
        bVar2 = DAT_14c950c29;
      }
      lVar13 = lVar13 + (longlong)iVar9 * 0x18;
      uVar3 = ((uint)(uVar11 >> 0x14) & 0xffff ^ (uint)(uVar11 >> 4)) * -0x7a143595;
      uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
      uVar11 = (longlong)(int)(uVar3 >> 0x10 ^ uVar3) & (longlong)(int)param_1[9] - 1U;
      iVar10 = (int)uVar11;
      *(int *)(lVar13 + 0x14) = iVar10;
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(undefined4 *)(lVar13 + 0x10) =
           *(undefined4 *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & uVar11) * 4);
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(int *)((longlong)plVar5 + ((longlong)iVar10 & (longlong)(int)param_1[9] - 1U) * 4) = iVar9;
      uVar15 = uVar15 & ~(uint)uVar14;
      puVar4 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar4 = (uint *)(param_1 + 2);
      }
      iVar10 = (int)param_1[5];
      iVar9 = (int)uVar16;
      lVar13 = (longlong)iVar9;
      uVar3 = puVar4[lVar13] & uVar15;
      if (uVar3 == 0) {
        iVar6 = iVar10 + 0x1e;
        if (-1 < iVar10 + -1) {
          iVar6 = iVar10 + -1;
        }
        iVar6 = iVar6 >> 5;
        iVar7 = iVar6;
        if (iVar6 < iVar9) {
          iVar7 = iVar9;
        }
        if (iVar6 <= iVar9) {
          return;
        }
        lVar12 = 0;
        while( true ) {
          iVar8 = iVar8 + 0x20;
          uVar3 = puVar4[lVar13 + lVar12 + 1];
          if (uVar3 != 0) break;
          lVar12 = lVar12 + 1;
          if (iVar7 - lVar13 == lVar12) {
            return;
          }
        }
        uVar16 = (ulonglong)(iVar9 + (int)lVar12 + 1);
        uVar15 = 0xffffffff;
      }
      uVar14 = (ulonglong)(-uVar3 & uVar3);
      uVar11 = uVar14 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar11 != 0) {
        for (; uVar11 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      iVar9 = (iVar8 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
    } while (iVar9 < iVar10);
  }
  return;
}



// FUNCTION 140792310 FUN_140792310 body=70 status=ok
// SIG undefined FUN_140792310(void)

void FUN_140792310(longlong param_1)

{
  if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0x34)) {
    FUN_14574400a();
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)(param_1 + 0xc) < 0) {
      FUN_144727cd0(param_1,0);
    }
    *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 140792356 FUN_140792356 body=29 status=ok
// SIG undefined FUN_140792356(void)

undefined8 FUN_140792356(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140792374 FUN_140792374 body=155 status=ok
// SIG undefined FUN_140792374(void)

void FUN_140792374(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  if (plVar1 != (longlong *)0x0) {
    *(undefined4 *)(plVar1 + 9) = 0;
    if (plVar1[8] != 0) {
      FUN_1400020a8();
    }
    *(undefined4 *)(plVar1 + 1) = 0;
    if (*(int *)((longlong)plVar1 + 0xc) != 0) {
      FUN_144727cd0(plVar1,0);
    }
    plVar1[6] = 0xffffffff;
    *(undefined4 *)(plVar1 + 5) = 0;
    if (0x80 < *(uint *)((longlong)plVar1 + 0x2c)) {
      *(undefined4 *)((longlong)plVar1 + 0x2c) = 0x80;
      FUN_1446efbd8(plVar1 + 2,0);
    }
    if (plVar1[4] != 0) {
      FUN_1400020a8();
    }
    if (*plVar1 != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(plVar1);
    return;
  }
  return;
}



// FUNCTION 14079241e FUN_14079241e body=767 status=ok
// SIG undefined FUN_14079241e(void)

ulonglong FUN_14079241e(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  uint *unaff_RDI;
  ulonglong uVar8;
  undefined1 auStack_b8 [32];
  longlong *local_98;
  undefined4 local_90;
  undefined1 local_88;
  longlong local_78 [2];
  undefined8 local_68;
  ushort local_5c [2];
  longlong local_58;
  longlong local_50;
  undefined8 local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_58 = param_1;
  local_50 = param_1;
  if (*(char *)(param_1 + 0x10) == '\x01') {
LAB_140792675:
    FUN_1407928b2(&local_58);
  }
  else {
    if (*(longlong *)(param_1 + 0x50) == 0) {
      if ((*(longlong *)(param_1 + 0x38) != 0) && (*(longlong *)(param_1 + 0x38) != DAT_14cb71810))
      {
        if (*(int *)(param_1 + 0x34) != 0) {
          unaff_RDI = (uint *)(param_1 + 0x30);
          uVar4 = *unaff_RDI;
          if ((((-1 < (int)uVar4) && ((int)uVar4 < DAT_14c9647dc)) &&
              (plVar7 = (longlong *)
                        ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8)),
              plVar7 != (longlong *)0x0)) &&
             ((((int)plVar7[2] == *(int *)(param_1 + 0x34) &&
               ((*(uint *)(plVar7 + 1) & 0x10200000) == 0)) &&
              ((lVar2 = *plVar7, lVar2 != 0 && (*(longlong *)(lVar2 + 0x408) != 0)))))) {
            lVar5 = FUN_144a78b9e();
            lVar6 = *(longlong *)(lVar2 + 0x408);
            if ((((lVar6 != 0) && (lVar5 != 0)) &&
                ((lVar3 = *(longlong *)(lVar6 + 0x10), lVar3 != 0 &&
                 (((*(int *)(lVar5 + 0x38) <= *(int *)(lVar3 + 0x38) &&
                   (*(longlong *)
                     (*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
                    lVar5 + 0x30)) && ((*(uint *)(lVar6 + 8) >> 0x1e & 1) == 0)))))) &&
               ((lVar6 = FUN_14479d2ce(unaff_RDI), lVar6 != 0 &&
                (lVar6 = FUN_1447210f0(lVar6), lVar6 != 0)))) {
              if ((*(char *)(lVar6 + 0x152) != '\x01') && (*(char *)(lVar6 + 0x152) != '\x03'))
              goto LAB_140792675;
              lVar6 = FUN_1400f6f32(lVar6);
              if ((lVar6 != 0) && (lVar6 = *(longlong *)(lVar6 + 0x68), lVar6 != 0)) {
                FUN_14042af24(lVar6,local_5c,lVar2);
                uVar8 = (ulonglong)(local_5c[0] >> 0xf);
                if ((short)local_5c[0] < 0) {
                  FUN_14079271e(&local_50);
                  goto LAB_1407924e1;
                }
                uVar4 = FUN_1402d8968(lVar6,local_5c);
                if (uVar4 == 5) {
LAB_140792659:
                  FUN_14079295e(param_1);
                }
                else if (uVar4 < 6) {
                  if (*(longlong *)(param_1 + 0x28) == 0) {
                    local_78[0] = param_1;
                    FUN_143c9d918(&local_48,lVar2,local_78);
                    FUN_140056680(local_78,L"PlayerCharacterData");
                    local_88 = 1;
                    local_90 = 0x200000;
                    local_98 = local_78;
                    FUN_1413d987a(lVar6,&local_68,local_5c,&local_48);
                    *(undefined8 *)(param_1 + 0x28) = local_68;
                    if (local_78[0] != 0) {
                      FUN_1400020a8();
                    }
                    FUN_1449db362(&local_48);
                  }
                }
                else if (*(longlong *)(param_1 + 0x50) == 0) goto LAB_140792659;
                FUN_1407928b2(&local_58);
                goto LAB_1407924e1;
              }
            }
          }
        }
        FUN_14079271e(&local_50);
        uVar8 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
        goto LAB_1407924e1;
      }
      goto LAB_140792675;
    }
    if (((*(longlong *)(param_1 + 0x18) != 0) && (*(longlong *)(param_1 + 0x20) != 0)) &&
       (0 < *(int *)(*(longlong *)(param_1 + 0x20) + 8))) {
      FUN_1401cb356();
      local_48 = *(undefined8 *)(param_1 + 0x18);
      local_40 = *(longlong *)(param_1 + 0x20);
      if (local_40 != 0) {
        LOCK();
        *(int *)(local_40 + 0xc) = *(int *)(local_40 + 0xc) + 1;
        UNLOCK();
      }
      FUN_140d61352(&local_48);
      plVar7 = *(longlong **)(param_1 + 0x20);
      *(undefined8 *)(param_1 + 0x18) = 0;
      *(undefined8 *)(param_1 + 0x20) = 0;
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar7 + 0x10))();
        }
      }
    }
  }
  uVar8 = 0;
LAB_1407924e1:
  if ((local_38 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8 & 0xffffffff;
}



// FUNCTION 14079271e FUN_14079271e body=402 status=ok
// SIG undefined FUN_14079271e(void)

void FUN_14079271e(longlong *param_1)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined8 *local_40;
  int local_38;
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = *param_1;
  if (((*(longlong *)(lVar2 + 0x18) == 0) || (*(longlong *)(lVar2 + 0x20) == 0)) ||
     (*(int *)(*(longlong *)(lVar2 + 0x20) + 8) < 1)) {
    uVar5 = FUN_1401cb356();
    local_40 = (undefined8 *)0x0;
    local_38 = 0;
    FUN_1446efa72(&local_40,0,3,0x10);
    local_38 = 3;
    *local_40 = &PTR_LAB_149e02020;
    LOCK();
    UNLOCK();
    lVar6 = DAT_14c758608 + 1;
    lVar4 = DAT_14c758608 + 1;
    if (lVar6 == 0) {
      LOCK();
      UNLOCK();
      lVar6 = DAT_14c758608 + 2;
      lVar4 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar4;
    local_40[2] = lVar6;
    *local_40 = &PTR_FUN_14b3e8be0;
    local_40[3] = lVar2;
    local_40[4] = FUN_14079241e;
    local_48 = 0;
    FUN_1405f67fc(uVar5,&local_30,&local_40,L"FGbxCharacterDefHelper.CheckStreamCharacterContent");
    *(undefined8 *)(lVar2 + 0x18) = local_30;
    local_30 = 0;
    plVar3 = *(longlong **)(lVar2 + 0x20);
    *(longlong **)(lVar2 + 0x20) = local_28;
    local_28 = (longlong *)0x0;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))();
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
    if (local_38 != 0) {
      if (local_40 == (undefined8 *)0x0) goto LAB_140792877;
      (**(code **)*local_40)(local_40,0);
      FUN_1446efa72(&local_40,0,0,0x10);
      local_38 = 0;
    }
    if (local_40 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_140792877:
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407928b2 FUN_1407928b2 body=155 status=ok
// SIG undefined FUN_1407928b2(void)

void FUN_1407928b2(longlong *param_1)

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
  if (((*(longlong *)(lVar2 + 0x18) != 0) && (*(longlong *)(lVar2 + 0x20) != 0)) &&
     (0 < *(int *)(*(longlong *)(lVar2 + 0x20) + 8))) {
    FUN_1401cb356();
    local_28 = *(undefined8 *)(lVar2 + 0x18);
    local_20 = *(longlong *)(lVar2 + 0x20);
    if (local_20 != 0) {
      LOCK();
      *(int *)(local_20 + 0xc) = *(int *)(local_20 + 0xc) + 1;
      UNLOCK();
    }
    FUN_140d61352(&local_28);
    lVar3 = *(longlong *)(lVar2 + 0x20);
    *(undefined8 *)(lVar2 + 0x18) = 0;
    *(undefined8 *)(lVar2 + 0x20) = 0;
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



// FUNCTION 14079295e FUN_14079295e body=1067 status=ok
// SIG undefined FUN_14079295e(void)

void FUN_14079295e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  longlong *plVar5;
  longlong *plVar6;
  char cVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
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
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if ((((*(longlong *)(param_1 + 0x28) != 0) && (*(int *)(param_1 + 0x34) != 0)) &&
      (uVar4 = *(uint *)(param_1 + 0x30), -1 < (int)uVar4)) &&
     ((((((int)uVar4 < DAT_14c9647dc &&
         (plVar11 = (longlong *)
                    ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8)),
         plVar11 != (longlong *)0x0)) &&
        (((int)plVar11[2] == *(int *)(param_1 + 0x34) &&
         (((*(uint *)(plVar11 + 1) & 0x10200000) == 0 && (*plVar11 != 0)))))) &&
       (lVar8 = FUN_1447210f0(), lVar8 != 0)) &&
      ((lVar8 = FUN_1400f6f32(lVar8), lVar8 != 0 && (*(longlong *)(lVar8 + 0x68) != 0)))))) {
    FUN_145bd9d12(*(longlong *)(lVar8 + 0x68),*(undefined8 *)(param_1 + 0x28),0xffffffff);
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  if (((((*(longlong *)(param_1 + 0x38) == 0) || (*(longlong *)(param_1 + 0x38) == DAT_14cb71810))
       || (*(int *)(param_1 + 0x34) == 0)) ||
      (((uVar4 = *(uint *)(param_1 + 0x30), (int)uVar4 < 0 || (DAT_14c9647dc <= (int)uVar4)) ||
       ((plVar11 = (longlong *)
                   ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8)),
        plVar11 == (longlong *)0x0 ||
        (((int)plVar11[2] != *(int *)(param_1 + 0x34) ||
         ((*(uint *)(plVar11 + 1) & 0x10200000) != 0)))))))) ||
     (plVar11 = (longlong *)*plVar11, plVar11 == (longlong *)0x0)) goto LAB_140792b07;
  plVar1 = (longlong *)(param_1 + 0x38);
  (**(code **)(*plVar11 + 0x780))(plVar11);
  if (((*(longlong *)(param_1 + 0x50) == 0) && (*plVar1 != 0)) && (*plVar1 != DAT_14cb71810)) {
    lVar8 = *(longlong *)(param_1 + 0x40);
    if (lVar8 == 0) {
      uVar9 = FUN_140355b7c();
      lVar8 = FUN_14477b664(uVar9);
      *(longlong *)(param_1 + 0x40) = lVar8;
    }
    lVar10 = *(longlong *)(param_1 + 0x48);
    if (lVar10 == 0) {
      if ((lVar8 != 0) && (*plVar1 != 0)) {
        plVar6 = *(longlong **)(lVar8 + 0xb8);
        if ((plVar6 == (longlong *)0x0) ||
           (cVar7 = (**(code **)(*plVar6 + 0x108))(plVar6), cVar7 == '\0')) {
          *(undefined8 *)(param_1 + 0x48) = 0;
        }
        else {
          uVar9 = (**(code **)(*plVar6 + 0x110))(plVar6);
          lVar10 = FUN_144aff482(uVar9,plVar1);
          *(longlong *)(param_1 + 0x48) = lVar10;
          if (lVar10 != 0) goto LAB_140792b74;
        }
      }
    }
    else {
LAB_140792b74:
      lVar8 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      piVar3 = (int *)(lVar8 + 0xfc8);
      *piVar3 = *piVar3 + 1;
      uVar9 = FUN_14050fd64();
      local_a8 = 0;
      FUN_14088df30(uVar9,&local_50,lVar10,100);
      plVar6 = local_48;
      if ((code **)(param_1 + 0x50) != &local_50) {
        *(code **)(param_1 + 0x50) = local_50;
        local_50 = (code *)0x0;
        plVar5 = *(longlong **)(param_1 + 0x58);
        if (local_48 != plVar5) {
          local_48 = (longlong *)0x0;
          *(longlong **)(param_1 + 0x58) = plVar6;
          if (plVar5 != (longlong *)0x0) {
            LOCK();
            plVar6 = plVar5 + 1;
            *(int *)plVar6 = (int)*plVar6 + -1;
            UNLOCK();
            if ((int)*plVar6 == 0) {
              (**(code **)*plVar5)(plVar5);
              LOCK();
              piVar3 = (int *)((longlong)plVar5 + 0xc);
              *piVar3 = *piVar3 + -1;
              UNLOCK();
              if (*piVar3 == 0) {
                (**(code **)(*plVar5 + 0x10))(plVar5);
              }
            }
          }
        }
      }
      plVar6 = local_48;
      piVar3 = (int *)(lVar8 + 0xfc8);
      if (local_48 != (longlong *)0x0) {
        LOCK();
        plVar5 = local_48 + 1;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)*plVar5 == 0) {
          (**(code **)*local_48)(local_48);
          LOCK();
          piVar2 = (int *)((longlong)plVar6 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar6 + 0x10))(plVar6);
          }
        }
      }
      *piVar3 = *piVar3 + -1;
    }
  }
  lVar8 = plVar11[0x81];
  if (lVar8 != 0) {
    if (DAT_14cb5b388 == 0) {
      local_70 = &local_50;
      local_50 = FUN_141864c34;
      local_60 = FUN_14081d0ea;
      local_68 = &LAB_146431698;
      local_78 = &LAB_1486775cb;
      local_80 = &LAB_1464cee35;
      local_88 = &DAT_149e063b2;
      local_90 = 0;
      local_98 = 0x10000005;
      local_a0 = 0x10;
      local_a8 = CONCAT44(local_a8._4_4_,0x3a20);
      FUN_14081cfa3(L"/Script/GbxGame",L"GbxCharacter",&DAT_14cb5b388,FUN_1464cee0e);
      lVar8 = plVar11[0x81];
      if (lVar8 == 0) goto LAB_140792b07;
    }
    if (((DAT_14cb5b388 != 0) && (lVar10 = *(longlong *)(lVar8 + 0x10), lVar10 != 0)) &&
       ((*(int *)(DAT_14cb5b388 + 0x38) <= *(int *)(lVar10 + 0x38) &&
        (((*(longlong *)
            (*(longlong *)(lVar10 + 0x30) + (longlong)*(int *)(DAT_14cb5b388 + 0x38) * 8) ==
           DAT_14cb5b388 + 0x30 && ((*(uint *)(lVar8 + 8) >> 0x1e & 1) == 0)) &&
         ((*(byte *)(lVar8 + 0x65) & 2) == 0)))))) {
      uVar9 = (**(code **)(*(longlong *)(lVar8 + 0x10b0) + 0x28))(lVar8 + 0x10b0);
      local_50 = (code *)*plVar1;
      FUN_1410674bc(uVar9,&local_50,0);
    }
  }
LAB_140792b07:
  if ((local_40 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140792d94 FUN_140792d94 body=94 status=ok
// SIG undefined FUN_140792d94(void)

undefined8 FUN_140792d94(longlong param_1,longlong *param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    uVar1 = FUN_14012344a();
    uVar1 = FUN_14477b664(uVar1);
    *(undefined8 *)(param_1 + 8) = uVar1;
  }
  FUN_14017647a(param_1,param_2);
  (**(code **)(*param_2 + 0x160))(param_2,param_1 + 0x18);
  if ((*(byte *)(param_2 + 5) & 1) != 0) {
    FUN_1405a630a(param_1);
  }
  *param_4 = 1;
  return 1;
}



// FUNCTION 140792df2 FUN_140792df2 body=53 status=ok
// SIG undefined FUN_140792df2(void)

void FUN_140792df2(undefined8 param_1,undefined8 param_2,longlong param_3,int param_4)

{
  uint uVar1;
  
  if (0 < param_4) {
    uVar1 = param_4 + 1;
    do {
      FUN_140792e27(param_2,param_3);
      param_3 = param_3 + 0x10;
      uVar1 = uVar1 - 1;
    } while (1 < uVar1);
  }
  return;
}



// FUNCTION 140792e27 FUN_140792e27 body=405 status=ok
// SIG undefined FUN_140792e27(void)

void FUN_140792e27(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 auStack_798 [32];
  undefined8 local_778;
  undefined8 local_770;
  undefined *local_768;
  code *local_760;
  undefined1 local_750 [1792];
  undefined1 *local_50;
  uint local_48;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_798;
  uVar1 = FUN_140792fbe();
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952478) {
    FUN_144b3d300(&DAT_14c952478);
    if (DAT_14c952478 == -1) {
      FUN_1446f4b16();
      local_760 = FUN_1403a5f94;
      local_768 = &DAT_14c951c78;
      local_770 = 0;
      local_778 = 0x4018001;
      FUN_14000176a(&DAT_14c952428,L"FObjectProperty",0x10000,0);
      atexit(FUN_1428170e8);
      _Init_thread_footer(&DAT_14c952478);
    }
  }
  local_770 = CONCAT44(local_770._4_4_,2);
  local_778 = CONCAT71(local_778._1_7_,1);
  FUN_140021b28(local_750,&DAT_14c952428,uVar1,param_2);
  while (0 < (int)local_48) {
    puVar2 = local_50;
    if (local_50 == (undefined1 *)0x0) {
      puVar2 = local_750;
    }
    puVar3 = *(undefined1 **)(puVar2 + (ulonglong)local_48 * 0xe0 + -0x18);
    if (*(undefined1 **)(puVar2 + (ulonglong)local_48 * 0xe0 + -0x18) == (undefined1 *)0x0) {
      puVar3 = puVar2 + (ulonglong)local_48 * 0xe0 + -0xd8;
    }
    (**(code **)(*param_1 + 0x88))
              (param_1,*(undefined8 *)
                        (puVar3 + (longlong)*(int *)(puVar2 + (ulonglong)local_48 * 0xe0 + -8) *
                                  0x18 + 8),0,0);
    FUN_140caedf2(local_750);
  }
  FUN_140021a7a(local_750);
  if ((local_28 ^ (ulonglong)auStack_798) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140792fbe FUN_140792fbe body=57 status=ok
// SIG undefined FUN_140792fbe(void)

void FUN_140792fbe(void)

{
  undefined8 uVar1;
  
  if (DAT_14cac4970 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14cac4970 = FUN_140002ddd(FUN_1417ad653,uVar1,L"MaterialParameterInfo");
  }
  return;
}



// FUNCTION 140792ffe FUN_140792ffe body=57 status=ok
// SIG undefined FUN_140792ffe(void)

void FUN_140792ffe(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5aeb8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5aeb8 = FUN_140002ddd(FUN_1464cd32f,uVar1,L"GbxBrainAspect_Trick");
  }
  return;
}



// FUNCTION 140793044 FUN_140793044 body=137 status=ok
// SIG undefined FUN_140793044(void)

void FUN_140793044(longlong *param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  int local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  local_20 = 0x7013;
  local_18 = 0;
  if ((*param_2 != 0) || ((int)param_2[1] != 0x7013)) {
    local_28 = *param_2;
    local_20 = (int)param_2[1];
  }
  uVar1 = FUN_14477b072(param_1,DAT_14cb61bf8);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_28);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407930ce FUN_1407930ce body=126 status=ok
// SIG undefined FUN_1407930ce(void)

ulonglong FUN_1407930ce(longlong *param_1,longlong *param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  if (param_2 != (longlong *)0x0) {
    uVar2 = FUN_140338614();
    lVar3 = (**(code **)(*param_2 + 0x288))(param_2,uVar2);
    if (lVar3 != 0) {
      uVar2 = FUN_140338614();
      lVar4 = FUN_144718840(lVar3,uVar2);
      if (lVar3 != lVar4) goto LAB_14079311b;
    }
  }
  lVar4 = 0;
LAB_14079311b:
  cVar1 = (**(code **)(param_1[0x165] + 0x38))(param_1 + 0x165,lVar4);
  if (cVar1 == '\0') {
    uVar5 = 0;
  }
  else {
    uVar5 = (**(code **)(*param_1 + 0x60))(param_1,param_2);
    uVar5 = uVar5 ^ 1;
  }
  return uVar5;
}



// FUNCTION 14079314c FUN_14079314c body=351 status=ok
// SIG undefined FUN_14079314c(void)

ulonglong FUN_14079314c(longlong param_1,longlong *param_2)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  byte bVar4;
  undefined8 unaff_RDI;
  undefined7 uVar6;
  longlong lVar7;
  bool bVar8;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  ulonglong uVar5;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar3 = (**(code **)(*(longlong *)(param_1 + -0x2240) + 0x40))(param_1 + -0x2240);
  uVar6 = (undefined7)((ulonglong)unaff_RDI >> 8);
  bVar8 = true;
  if (((((*(longlong *)(param_1 + 0x150) != 0) && (*(int *)(param_1 + 0x14c) != 0)) &&
       (uVar1 = *(uint *)(param_1 + 0x148), -1 < (int)uVar1)) &&
      (((int)uVar1 < DAT_14c9647dc &&
       (lVar7 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar7 != 0)))) &&
     (*(int *)(lVar7 + 0x10) == *(int *)(param_1 + 0x14c))) {
    bVar8 = (*(uint *)(lVar7 + 8) & 0x10200000) != 0;
  }
  bVar4 = bVar8 & (*(byte *)(lVar3 + 0x99) ^ 1);
  uVar5 = CONCAT71(uVar6,bVar4);
  if (param_2 != (longlong *)0x0) {
    lVar3 = (**(code **)(*param_2 + 0x18))(param_2);
    if (((*(longlong *)(lVar3 + 0x38) == 0) || (*(longlong *)(lVar3 + 0x40) == 0)) &&
       (*(char *)(lVar3 + 0x58) == '\0')) {
      uVar5 = CONCAT71(uVar6,bVar4 & *(char *)(lVar3 + 0x31) == '\0');
    }
    else {
      uVar5 = 0;
    }
  }
  local_30 = DAT_14c9a6400;
  local_28 = 0xffffffff;
  local_40 = DAT_14cbc54b0;
  local_38 = 0xffffffff;
  cVar2 = FUN_1400b1204(param_1 + -0x2128);
  if ((cVar2 != '\0') ||
     ((*(longlong *)(param_1 + 0x2f0) != 0 && (*(longlong *)(param_1 + 0x2f8) != 0)))) {
    uVar5 = 0;
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar5 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407932ac FUN_1407932ac body=296 status=ok
// SIG undefined FUN_1407932ac(void)

undefined4 *
FUN_1407932ac(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4,
             undefined8 param_5)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_58 [2];
  undefined4 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1405dc782(param_1,local_58);
  *local_50 = *(undefined4 *)*param_4;
  *(undefined8 *)(local_50 + 1) = 0xffffffff00000000;
  local_68 = param_5;
  cVar1 = FUN_140263f5a(param_1,param_3,local_50,local_58);
  if (cVar1 == '\0') {
    uVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar4 = 1;
    if (3 < uVar2) {
      uVar3 = (ulonglong)(uVar2 & 0xfffffffe) + 0xf;
      lVar5 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iVar4 = 1 << ((byte)lVar5 & 0x1f);
    }
    if (((int)uVar2 < 1) || (iVar4 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      local_50[3] = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      local_50[2] = *(undefined4 *)
                     (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4
                     );
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_58[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar4;
      FUN_140264164(param_1);
    }
  }
  *param_2 = local_58[0];
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1407933e0 FUN_1407933e0 body=75 status=ok
// SIG undefined FUN_1407933e0(void)

undefined1 FUN_1407933e0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x60) == 0) {
    uVar1 = FUN_140927942();
    uVar1 = FUN_14477b664(uVar1);
    *(undefined8 *)(param_1 + 0x60) = uVar1;
  }
  FUN_14017647a(param_1 + 0x58,param_2);
  FUN_1405f85e0(param_1);
  *param_4 = 1;
  return 1;
}



// FUNCTION 14079342c FUN_14079342c body=8 status=ok
// SIG undefined FUN_14079342c(void)

undefined8 FUN_14079342c(void)

{
  return DAT_14cb78540;
}



// FUNCTION 140793434 FUN_140793434 body=170 status=ok
// SIG undefined FUN_140793434(void)

longlong * FUN_140793434(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  
  plVar2 = *(longlong **)(param_1 + 0x98);
  plVar3 = *(longlong **)(param_1 + 0xa0);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
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
  if (plVar2 != (longlong *)0x0) {
    lVar4 = (**(code **)(*plVar2 + 8))(plVar2);
    lVar5 = FUN_140b7a3c6();
    if ((lVar5 != 0) && (*(int *)(lVar5 + 0x38) <= *(int *)(lVar4 + 0x38))) {
      plVar6 = (longlong *)0x0;
      if (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
          lVar5 + 0x30) {
        plVar6 = plVar2;
      }
      goto LAB_140793492;
    }
  }
  plVar6 = (longlong *)0x0;
LAB_140793492:
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
  return plVar6;
}



// FUNCTION 1407934de FUN_1407934de body=333 status=ok
// SIG undefined FUN_1407934de(void)

undefined8 * FUN_1407934de(undefined8 *param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  if (param_2 != (longlong *)0x0) {
    uVar1 = FUN_14079362c();
    plVar2 = (longlong *)(**(code **)(*param_2 + 0x288))(param_2,uVar1);
    if (plVar2 != (longlong *)0x0) {
      uVar1 = FUN_14079362c();
      plVar3 = (longlong *)FUN_144718840(plVar2,uVar1);
      if ((plVar2 != plVar3) && (plVar3 != (longlong *)0x0)) goto LAB_14079352b;
    }
    lVar5 = FUN_144a6c4d8();
    if ((*(int *)(param_2[2] + 0x38) < *(int *)(lVar5 + 0x38)) ||
       (*(longlong *)(*(longlong *)(param_2[2] + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) !=
        lVar5 + 0x30)) goto LAB_1407935b5;
    plVar2 = (longlong *)(**(code **)(*param_2 + 0x5d8))(param_2);
    if (plVar2 != (longlong *)0x0) {
      uVar1 = FUN_14079362c();
      plVar2 = (longlong *)(**(code **)(*plVar2 + 0x288))(plVar2,uVar1);
      if (plVar2 != (longlong *)0x0) {
        uVar1 = FUN_14079362c();
        plVar3 = (longlong *)FUN_144718840(plVar2,uVar1);
        if (plVar3 != (longlong *)0x0 && plVar2 != plVar3) goto LAB_14079352b;
      }
    }
    plVar2 = (longlong *)(**(code **)(*param_2 + 0x5e8))(param_2);
    if (plVar2 != (longlong *)0x0) {
      uVar1 = FUN_14079362c();
      plVar2 = (longlong *)(**(code **)(*plVar2 + 0x288))(plVar2,uVar1);
      if (plVar2 != (longlong *)0x0) {
        uVar1 = FUN_14079362c();
        plVar3 = (longlong *)FUN_144718840(plVar2,uVar1);
        if (plVar3 != (longlong *)0x0 && plVar2 != plVar3) {
LAB_14079352b:
          puVar4 = (undefined8 *)(**(code **)(*plVar3 + 0x28))(plVar3);
          *param_1 = *puVar4;
          lVar5 = puVar4[1];
          param_1[1] = lVar5;
          if (lVar5 == 0) {
            return param_1;
          }
          LOCK();
          *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
          UNLOCK();
          return param_1;
        }
      }
    }
  }
LAB_1407935b5:
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}



// FUNCTION 14079362c FUN_14079362c body=228 status=ok
// SIG undefined FUN_14079362c(void)

longlong FUN_14079362c(void)

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
  if (DAT_14cb5ce90 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_14869278d;
    local_40 = FUN_1464d957a;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxDiscoveryDiscovererInterface",&DAT_14cb5ce90,
                  &DAT_14869278c);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb5ce90;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140793712 FUN_140793712 body=658 status=ok
// SIG undefined FUN_140793712(void)

undefined8 FUN_140793712(longlong param_1,char *param_2)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 *puVar4;
  int *piVar5;
  int *piVar6;
  undefined1 *puVar7;
  longlong lVar8;
  ulonglong uVar9;
  bool bVar10;
  bool bVar11;
  undefined1 auStack_98 [40];
  int local_70;
  int local_6c;
  undefined1 local_68 [16];
  undefined1 *local_58;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*param_2 == '\x01') {
    FUN_1447a97f4(&local_70,param_2 + 0x10);
    if (0 < local_6c) {
      lVar8 = 0;
      uVar9 = 0;
      iVar1 = local_6c;
      iVar3 = DAT_14c948000;
      do {
        bVar10 = local_70 != 0;
        bVar11 = local_70 != iVar3;
        piVar5 = &DAT_14c948620;
        piVar6 = (int *)&DAT_14c948618;
        if (bVar11 && bVar10) {
          puVar7 = local_68;
          if (0 < local_4c) {
            puVar7 = local_58;
          }
          if (1 < iVar1) {
            puVar7 = local_58;
          }
          piVar5 = (int *)(puVar7 + lVar8 + 8);
          piVar6 = (int *)(puVar7 + lVar8);
        }
        if ((*piVar6 == DAT_14cb7beb0) && (*piVar5 == DAT_14cb7beb8)) {
LAB_14079390f:
          FUN_1402b5374(&local_70,uVar9 & 0xffffffff,0);
          iVar1 = local_6c;
          iVar3 = DAT_14c948000;
        }
        else {
          piVar5 = &DAT_14c948620;
          piVar6 = (int *)&DAT_14c948618;
          if (bVar11 && bVar10) {
            puVar7 = local_68;
            if (0 < local_4c) {
              puVar7 = local_58;
            }
            if (1 < iVar1) {
              puVar7 = local_58;
            }
            piVar5 = (int *)(puVar7 + lVar8 + 8);
            piVar6 = (int *)(puVar7 + lVar8);
          }
          if ((*piVar6 == DAT_14cb7bec8) && (*piVar5 == DAT_14cb7bed0)) goto LAB_14079390f;
          piVar5 = &DAT_14c948620;
          piVar6 = (int *)&DAT_14c948618;
          if (bVar11 && bVar10) {
            puVar7 = local_68;
            if (0 < local_4c) {
              puVar7 = local_58;
            }
            if (1 < iVar1) {
              puVar7 = local_58;
            }
            piVar5 = (int *)(puVar7 + lVar8 + 8);
            piVar6 = (int *)(puVar7 + lVar8);
          }
          if ((*piVar6 == DAT_14cb7bee0) && (*piVar5 == DAT_14cb7bee8)) goto LAB_14079390f;
          piVar5 = &DAT_14c948620;
          piVar6 = (int *)&DAT_14c948618;
          if (bVar11 && bVar10) {
            puVar7 = local_68;
            if (0 < local_4c) {
              puVar7 = local_58;
            }
            if (1 < iVar1) {
              puVar7 = local_58;
            }
            piVar5 = (int *)(puVar7 + lVar8 + 8);
            piVar6 = (int *)(puVar7 + lVar8);
          }
          if ((*piVar6 == DAT_14cb7bef8) && (*piVar5 == DAT_14cb7bf00)) goto LAB_14079390f;
          piVar5 = &DAT_14c948620;
          piVar6 = (int *)&DAT_14c948618;
          if (bVar11 && bVar10) {
            puVar7 = local_68;
            if (0 < local_4c) {
              puVar7 = local_58;
            }
            if (1 < iVar1) {
              puVar7 = local_58;
            }
            piVar5 = (int *)(puVar7 + lVar8 + 8);
            piVar6 = (int *)(puVar7 + lVar8);
          }
          if ((*piVar6 == DAT_14cb7bf10) && (*piVar5 == DAT_14cb7bf18)) goto LAB_14079390f;
        }
        uVar9 = uVar9 + 1;
        lVar8 = lVar8 + 0xc;
      } while ((longlong)uVar9 < (longlong)iVar1);
    }
    if (local_58 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    local_70 = *(int *)(param_2 + 0x10);
  }
  iVar1 = FUN_14100657e((longlong *)(param_1 + 0x390),local_70,param_2);
  if (iVar1 == -1) {
    uVar2 = 0;
  }
  else {
    lVar8 = *(longlong *)(param_1 + 0x390);
    uVar2 = 0;
    if ((lVar8 + (longlong)iVar1 * 0x48 != 0) &&
       (puVar4 = (undefined8 *)(lVar8 + (longlong)iVar1 * 0x48 + 0x38), puVar4 != (undefined8 *)0x0)
       ) {
      uVar2 = *puVar4;
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar2;
}



// FUNCTION 1407939a6 FUN_1407939a6 body=1988 status=ok
// SIG undefined FUN_1407939a6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1407939a6(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  void *_Src;
  void *pvVar5;
  byte bVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  DWORD DVar10;
  DWORD DVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  ulonglong uVar14;
  uint uVar15;
  void *_Dst;
  ulonglong uVar16;
  int iVar17;
  longlong lVar18;
  longlong lVar19;
  longlong *plVar20;
  bool bVar21;
  float fVar22;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  longlong local_60;
  longlong local_58;
  undefined4 local_50 [2];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *(uint *)(param_1 + 0x2b8) = (*(uint *)(param_1 + 0x2b8) & 0xfffffff8) + 1;
  *(undefined8 *)(param_1 + 700) = 0;
  lVar3 = param_1 + 0x2c8;
  lVar19 = *(longlong *)(param_1 + 0x2d8);
  if (*(longlong *)(param_1 + 0x2d8) == 0) {
    lVar19 = lVar3;
  }
  FUN_14079416b(lVar19);
  *(undefined4 *)(param_1 + 0x2e0) = 0;
  if (*(int *)(param_1 + 0x2e4) != 0) {
    FUN_14079422c(lVar3);
  }
  iVar17 = *(int *)(param_1 + 0x230);
  if ((longlong)iVar17 != 0) {
    lVar19 = *(longlong *)(param_1 + 0x228);
    lVar18 = 0;
    do {
      (**(code **)(**(longlong **)(lVar19 + lVar18) + 0x318))();
      lVar18 = lVar18 + 8;
    } while ((longlong)iVar17 * 8 != lVar18);
  }
  if ((*(char *)(param_1 + 0x3d) == '\0') && (*(char *)(param_1 + 0x3c) == '\0')) {
    iVar17 = *(int *)(param_1 + 0x230);
    if (iVar17 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar17);
    }
    if (*(int *)(param_1 + 0x2e4) < iVar17) {
      FUN_14079422c(lVar3);
      iVar17 = *(int *)(param_1 + 0x230);
    }
    if (iVar17 != 0) {
      local_60 = *(longlong *)(param_1 + 0x228);
      lVar19 = 0;
      local_68 = param_3;
      do {
        plVar12 = *(longlong **)(local_60 + lVar19);
        if (((plVar12 != (longlong *)0x0) &&
            (cVar7 = (**(code **)(*plVar12 + 0x308))(plVar12), cVar7 != '\0')) &&
           (plVar12 = (longlong *)(**(code **)(*plVar12 + 0x2a8))(plVar12),
           plVar12 != (longlong *)0x0)) {
          (**(code **)(*plVar12 + 8))(plVar12,param_2);
          iVar4 = *(int *)(param_1 + 0x2e0);
          *(uint *)(param_1 + 0x2e0) = iVar4 + 1U;
          if (*(uint *)(param_1 + 0x2e4) < iVar4 + 1U) {
            FUN_1481c59c2(lVar3,iVar4);
          }
          lVar18 = *(longlong *)(param_1 + 0x2d8);
          if (*(longlong *)(param_1 + 0x2d8) == 0) {
            lVar18 = lVar3;
          }
          *(longlong **)(lVar18 + (longlong)iVar4 * 0x10) = plVar12;
          puVar13 = (undefined8 *)FUN_14001cc68(0x18);
          puVar13[1] = &DAT_100000001;
          *puVar13 = &PTR_LAB_14adf3540;
          puVar13[2] = plVar12;
          *(undefined8 **)(lVar18 + 8 + (longlong)iVar4 * 0x10) = puVar13;
          param_3 = local_68;
        }
        lVar19 = lVar19 + 8;
      } while ((longlong)iVar17 * 8 != lVar19);
    }
  }
  *(byte *)(param_1 + 0x2b8) = *(byte *)(param_1 + 0x2b8) & 0xf9;
  if (((*(longlong *)(param_1 + 0x268) != 0) && (*(char *)(param_1 + 0x3c) == '\x01')) &&
     ((lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x268) + 0x1c8), lVar3 != 0 &&
      (0 < *(int *)(lVar3 + 0xb4))))) {
    iVar17 = 0;
    do {
      FUN_140794830(lVar3,&local_58,iVar17);
      if (local_58 != 0) {
        uVar15 = (uint)*(byte *)(local_58 + 0xe0) * 2 | *(uint *)(param_1 + 0x2b8);
        *(uint *)(param_1 + 0x2b8) = uVar15;
        *(uint *)(param_1 + 0x2b8) = (*(ushort *)(local_58 + 0xe2) & 1) << 2 | uVar15;
      }
      iVar17 = iVar17 + 1;
    } while (iVar17 < *(int *)(lVar3 + 0xb4));
  }
  if (param_2 == 0) {
    uVar15 = 0;
LAB_140793fe3:
    *(uint *)(param_1 + 700) = uVar15;
  }
  else {
    cVar7 = *(char *)(param_1 + 0x3c);
    if (cVar7 == '\0') {
      iVar17 = *(int *)(param_1 + 0x230);
      if ((longlong)iVar17 == 0) {
        cVar7 = '\0';
        uVar15 = 1;
      }
      else {
        lVar3 = *(longlong *)(param_1 + 0x228);
        uVar8 = 1;
        uVar15 = 1;
        lVar19 = 0;
        do {
          plVar12 = *(longlong **)(lVar3 + lVar19);
          if (((plVar12 != (longlong *)0x0) &&
              (cVar7 = (**(code **)(*plVar12 + 0x308))(plVar12), cVar7 != '\0')) &&
             ((cVar7 = (**(code **)(*plVar12 + 0x2d8))(plVar12), cVar7 != '\0' &&
              (uVar9 = FUN_144a2bba0(plVar12), bVar21 = uVar15 < uVar9, uVar15 = uVar8, bVar21)))) {
            uVar15 = uVar9;
            uVar8 = uVar9;
          }
          lVar19 = lVar19 + 8;
        } while ((longlong)iVar17 * 8 != lVar19);
        cVar7 = *(char *)(param_1 + 0x3c);
      }
    }
    else {
      uVar15 = *(uint *)(param_2 + 0x2c);
      if (*(uint *)(param_2 + 0x2c) < *(uint *)(param_2 + 0x30)) {
        uVar15 = *(uint *)(param_2 + 0x30);
      }
      if (uVar15 < *(uint *)(param_2 + 0x34)) {
        uVar15 = *(uint *)(param_2 + 0x34);
      }
      uVar15 = uVar15 + (uVar15 == 0);
    }
    uVar14 = (longlong)DAT_14cb3e300;
    if ((longlong)DAT_14cb3e300 < 1) {
      uVar14 = _DAT_14ca84e48;
    }
    uVar16 = 0xffffffff;
    if (uVar14 / uVar15 < 0xffffffff) {
      uVar16 = uVar14 / uVar15;
    }
    uVar15 = (uint)uVar16;
    *(uint *)(param_1 + 0x2c0) = uVar15;
    *(uint *)(param_1 + 700) = uVar15;
    if (cVar7 == '\x01') {
      uVar8 = 0x40;
      if ((uVar16 & 0xffffffc0) != 0) {
        uVar8 = uVar15 & 0xffffffc0;
      }
      *(uint *)(param_1 + 0x2c0) = uVar8;
      *(uint *)(param_1 + 700) = uVar8 - 1;
    }
    lVar3 = DAT_14cb3e318;
    if (*(char *)(param_1 + 0xd4) == '\x02') {
      iVar17 = *(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60);
      if (iVar17 == 0x40000002) {
        uVar14 = 0;
      }
      else {
        bVar21 = true;
        if ((DAT_14c86a9f8 == '\x01') && (iVar17 != 2)) {
          if (iVar17 == 1) {
            DVar10 = FUN_140ad26c0();
            DVar11 = GetCurrentThreadId();
            bVar21 = DVar10 == DVar11;
          }
          else {
            bVar21 = false;
          }
        }
        uVar14 = (ulonglong)(bVar21 ^ 1);
      }
      fVar22 = *(float *)(lVar3 + uVar14 * 4);
      uVar8 = *(uint *)(param_1 + 0xd8);
      if (0.0 < fVar22) {
        fVar22 = fVar22 * (float)(int)uVar8;
        if (fVar22 <= 0.0) {
          fVar22 = 0.0;
        }
        uVar15 = (uint)(longlong)fVar22;
      }
      else {
        uVar15 = 0;
        if (0 < (int)uVar8) {
          uVar15 = uVar8;
        }
      }
      if (*(uint *)(param_1 + 700) < uVar15) {
        uVar15 = *(uint *)(param_1 + 700);
      }
      goto LAB_140793fe3;
    }
  }
  FUN_14079463e(param_1,param_3);
  *(undefined8 *)(param_1 + 600) = 0;
  plVar12 = *(longlong **)(param_1 + 0x260);
  if (plVar12 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x260) = 0;
    LOCK();
    plVar20 = plVar12 + 1;
    *(int *)plVar20 = (int)*plVar20 + -1;
    UNLOCK();
    if ((int)*plVar20 == 0) {
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
  lVar3 = *(longlong *)(param_1 + 0x268);
  if (lVar3 == 0) goto LAB_140793cdc;
  if ((param_2 != 0) && (iVar17 = *(int *)(lVar3 + 0x358), (longlong)iVar17 != 0)) {
    lVar3 = *(longlong *)(lVar3 + 0x350);
    lVar19 = 0;
    do {
      if ((*(byte *)(lVar3 + 0x4c + lVar19) & 4) != 0) {
        local_58 = *(longlong *)(lVar3 + 0x50 + lVar19);
        local_50[0] = FUN_144830b78(local_50,&DAT_14cb420d0);
        lVar18 = FUN_140aa93c6(param_2,&local_58);
        if (lVar18 != 0) {
          *(uint *)(lVar3 + 0x58 + lVar19) = (uint)*(ushort *)(lVar18 + 2);
        }
      }
      lVar19 = lVar19 + 0xa8;
    } while ((longlong)iVar17 * 0xa8 - lVar19 != 0);
  }
  plVar12 = (longlong *)FUN_14001cc68(0x48,0x10);
  plVar12[1] = (longlong)&DAT_100000001;
  *plVar12 = (longlong)&PTR_FUN_14adf3560;
  plVar12[2] = 0;
  plVar12[3] = 0;
  plVar12[4] = 0;
  plVar12[5] = 0;
  plVar12[6] = 0;
  *(undefined4 *)((longlong)plVar12 + 0x34) = 1;
  plVar12[7] = 0;
  plVar12[8] = 0;
  if (plVar12 == (longlong *)0x0) {
    *(undefined8 *)(param_1 + 600) = 0x10;
    plVar20 = *(longlong **)(param_1 + 0x260);
    if (plVar20 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x260) = 0;
LAB_14079407b:
      LOCK();
      plVar1 = plVar20 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar20)(plVar20);
        LOCK();
        piVar2 = (int *)((longlong)plVar20 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar20 + 0x10))(plVar20);
        }
      }
      if (plVar12 != (longlong *)0x0) goto LAB_140793c62;
    }
  }
  else {
    LOCK();
    *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
    UNLOCK();
    *(longlong **)(param_1 + 600) = plVar12 + 2;
    plVar20 = *(longlong **)(param_1 + 0x260);
    if (plVar12 == plVar20) {
      LOCK();
      plVar20 = plVar12 + 1;
      *(int *)plVar20 = (int)*plVar20 + -1;
      UNLOCK();
      if ((int)*plVar20 == 0) {
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
    else {
      *(longlong **)(param_1 + 0x260) = plVar12;
      if (plVar20 != (longlong *)0x0) goto LAB_14079407b;
    }
LAB_140793c62:
    LOCK();
    plVar20 = plVar12 + 1;
    *(int *)plVar20 = (int)*plVar20 + -1;
    UNLOCK();
    if ((int)*plVar20 == 0) {
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
  _Src = *(void **)(param_1 + 0x248);
  pvVar5 = *(void **)(param_1 + 600);
  iVar17 = *(int *)(param_1 + 0x250);
  *(int *)((longlong)pvVar5 + 0x20) = iVar17;
  if (iVar17 == 0 && *(int *)((longlong)pvVar5 + 0x24) == 0) {
    *(undefined4 *)((longlong)pvVar5 + 0x24) = 1;
  }
  else {
    FUN_140794372(pvVar5,iVar17);
    if (iVar17 != 0) {
      _Dst = *(void **)((longlong)pvVar5 + 0x18);
      if (*(void **)((longlong)pvVar5 + 0x18) == (void *)0x0) {
        _Dst = pvVar5;
      }
      memcpy(_Dst,_Src,(longlong)iVar17 * 0x14);
    }
  }
  FUN_1407941b6(*(longlong *)(param_1 + 600) + 0x28,*(longlong *)(param_1 + 0x268) + 0x350);
LAB_140793cdc:
  bVar6 = FUN_1401e6e8e(param_1 + 0x90);
  uVar15 = *(uint *)(param_1 + 0x2b8) & 0xfffffffe;
  *(uint *)(param_1 + 0x2b8) = uVar15 + bVar6;
  if ((bVar6 != 0) && (*(char *)(param_1 + 0x3c) == '\x01')) {
    if ((*(longlong *)(param_1 + 0x268) == 0) ||
       (lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x268) + 0x1c8), lVar3 == 0)) {
      *(uint *)(param_1 + 0x2b8) = uVar15;
    }
    else {
      lVar19 = *(longlong *)(lVar3 + 0x20);
      plVar12 = *(longlong **)(lVar3 + 0x28);
      if (plVar12 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
        UNLOCK();
      }
      lVar3 = *(longlong *)(lVar19 + 0x48);
      if ((lVar3 == 0) || (DAT_14ca84e50 < *(uint *)(*(longlong *)(lVar3 + 0x48) + 0x84))) {
        *(byte *)(param_1 + 0x2b8) = *(byte *)(param_1 + 0x2b8) & 0xfe;
      }
      if (plVar12 != (longlong *)0x0) {
        LOCK();
        plVar20 = plVar12 + 1;
        *(int *)plVar20 = (int)*plVar20 + -1;
        UNLOCK();
        if ((int)*plVar20 == 0) {
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
  bVar6 = FUN_140794a92(param_1,param_3);
  *(uint *)(param_1 + 0x2b8) = *(uint *)(param_1 + 0x2b8) & (bVar6 | 0xfffffffe);
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14079416b FUN_14079416b body=75 status=ok
// SIG undefined FUN_14079416b(void)

void FUN_14079416b(longlong param_1,int param_2)

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
      plVar4 = plVar4 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1407941b6 FUN_1407941b6 body=93 status=ok
// SIG undefined FUN_1407941b6(void)

undefined8 * FUN_1407941b6(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1401b538e(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1407944f0(param_1,iVar1);
      FUN_1407943ef(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14079422c FUN_14079422c body=193 status=ok
// SIG undefined FUN_14079422c(void)

void FUN_14079422c(longlong param_1,uint param_2)

{
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint uVar4;
  
  uVar4 = param_2;
  if (1 < param_2) {
    uVar2 = (ulonglong)param_2 * 0x10;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (param_2 < 0x800) {
          uVar2 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[param_2]];
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
        uVar2 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar2,0);
      }
    }
    uVar1 = (uint)(uVar2 >> 4);
    uVar4 = 0x7fffffff;
    if ((int)param_2 <= (int)uVar1) {
      uVar4 = uVar1;
    }
  }
  if (uVar4 == *(uint *)(param_1 + 0x1c)) {
    return;
  }
  *(uint *)(param_1 + 0x1c) = uVar4;
  FUN_1407942ee(param_1,*(undefined4 *)(param_1 + 0x18),uVar4);
  return;
}



// FUNCTION 1407942ee FUN_1407942ee body=131 status=ok
// SIG undefined FUN_1407942ee(void)

void FUN_1407942ee(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x10);
  if ((uint)param_3 < 2) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 4);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x10,0,param_3,0x10);
    memmove(*(void **)((longlong)param_1 + 0x10),param_1,(longlong)param_2 << 4);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x10,param_2,param_3,0x10);
  return;
}



// FUNCTION 140794372 FUN_140794372 body=125 status=ok
// SIG undefined FUN_140794372(void)

void FUN_140794372(longlong param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = param_2;
  if (1 < param_2) {
    uVar1 = FUN_144a3809e((longlong)(int)param_2 * 0x14,0);
    uVar2 = (uint)(uVar1 / 0x14);
    uVar3 = 0x7fffffff;
    if ((int)param_2 <= (int)uVar2) {
      uVar3 = uVar2;
    }
  }
  if (((int)param_3 < (int)uVar3) &&
     ((param_3 = uVar3, 1 < uVar3 || (*(longlong *)(param_1 + 0x18) != 0)))) {
    uVar2 = 0;
    if (1 < uVar3) {
      uVar2 = uVar3;
    }
    FUN_1446efa72(param_1 + 0x18,0,uVar2,0x14);
  }
  *(uint *)(param_1 + 0x24) = param_3;
  return;
}



// FUNCTION 1407943ef FUN_1407943ef body=257 status=ok
// SIG undefined FUN_1407943ef(void)

void FUN_1407943ef(longlong param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  
  if (param_3 != 0) {
    puVar13 = (undefined8 *)(param_1 + 0x68);
    do {
      puVar11 = param_2;
      puVar12 = puVar13 + -0xd;
      for (lVar10 = 0xc; lVar10 != 0; lVar10 = lVar10 + -1) {
        *puVar12 = *puVar11;
        puVar11 = puVar11 + 1;
        puVar12 = puVar12 + 1;
      }
      *(undefined4 *)(puVar13 + -1) = *(undefined4 *)(param_2 + 0xc);
      *puVar13 = 0;
      iVar1 = *(int *)(param_2 + 0xe);
      pvVar2 = (void *)param_2[0xd];
      *(int *)(puVar13 + 1) = iVar1;
      if ((longlong)iVar1 == 0) {
        *(undefined4 *)((longlong)puVar13 + 0xc) = 0;
      }
      else {
        FUN_1401b309e(puVar13,iVar1,0);
        memcpy((void *)*puVar13,pvVar2,(longlong)iVar1 << 3);
      }
      puVar13[2] = 0;
      iVar1 = *(int *)(param_2 + 0x10);
      pvVar2 = (void *)param_2[0xf];
      *(int *)(puVar13 + 3) = iVar1;
      if ((longlong)iVar1 == 0) {
        *(undefined4 *)((longlong)puVar13 + 0x1c) = 0;
      }
      else {
        FUN_1401b309e(puVar13 + 2,iVar1,0);
        memcpy((void *)puVar13[2],pvVar2,(longlong)iVar1 << 3);
      }
      uVar3 = *(undefined4 *)(param_2 + 0x11);
      uVar4 = *(undefined4 *)((longlong)param_2 + 0x8c);
      uVar5 = *(undefined4 *)(param_2 + 0x12);
      uVar6 = *(undefined4 *)((longlong)param_2 + 0x94);
      uVar7 = *(undefined4 *)(param_2 + 0x13);
      uVar8 = *(undefined4 *)((longlong)param_2 + 0x9c);
      uVar9 = *(undefined4 *)(param_2 + 0x14);
      *(undefined4 *)((longlong)puVar13 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x94);
      *(undefined4 *)(puVar13 + 6) = uVar7;
      *(undefined4 *)((longlong)puVar13 + 0x34) = uVar8;
      *(undefined4 *)(puVar13 + 7) = uVar9;
      *(undefined4 *)(puVar13 + 4) = uVar3;
      *(undefined4 *)((longlong)puVar13 + 0x24) = uVar4;
      *(undefined4 *)(puVar13 + 5) = uVar5;
      *(undefined4 *)((longlong)puVar13 + 0x2c) = uVar6;
      param_2 = param_2 + 0x15;
      puVar13 = puVar13 + 0x15;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1407944f0 FUN_1407944f0 body=333 status=ok
// SIG undefined FUN_1407944f0(void)

void FUN_1407944f0(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  byte bVar3;
  undefined1 auVar4 [16];
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  
  if (param_2 == 0) {
    iVar8 = 0;
  }
  else {
    uVar5 = (longlong)param_2 * 0xa8;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar1 = uVar5 + 0xf;
        if (uVar5 < 0x7ff1) {
          uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
        }
        else {
          if ((uVar1 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar3 = (&DAT_14c841e00)[uVar1 >> 4];
            uVar7 = 0x32;
            if (0x32 < bVar3) {
              uVar7 = (ulonglong)bVar3;
            }
            uVar9 = 0x32 - (ulonglong)bVar3;
            do {
              uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar9 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar9 & 0xffffffff] & 0xf) == 0) goto LAB_140794561;
              lVar2 = uVar7 + 1 + uVar9;
              uVar9 = uVar9 - 1;
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
LAB_140794561:
    auVar4._8_8_ = 0;
    auVar4._0_8_ = uVar5 >> 3;
    iVar6 = SUB164(auVar4 * ZEXT816(0xc30c30c30c30c31),8);
    iVar8 = 0x7fffffff;
    if (param_2 <= iVar6) {
      iVar8 = iVar6;
    }
  }
  if (param_3 < iVar8) {
    FUN_1446f8d3c(param_1,0,iVar8,0xa8,8);
    param_3 = iVar8;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14079463e FUN_14079463e body=497 status=ok
// SIG undefined FUN_14079463e(void)

void FUN_14079463e(longlong param_1,longlong param_2)

{
  code **ppcVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined8 local_80;
  wchar_t *local_78;
  code *local_70;
  undefined1 *local_68;
  code **local_60;
  code *local_58;
  code *local_50;
  code *local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  ppcVar1 = (code **)(param_1 + 0x350);
  *(undefined4 *)(param_1 + 0x358) = 0;
  if (*(int *)(param_1 + 0x35c) != 0) {
    FUN_1446f8c06(ppcVar1,0);
  }
  lVar2 = FUN_14018d992();
  if (DAT_14c951858 == 0) {
    local_60 = &local_40;
    local_40 = FUN_1449e2820;
    local_50 = FUN_14081d0ea;
    local_58 = FUN_14081d0ea;
    local_68 = &LAB_1468c5283;
    local_70 = FUN_142809da0;
    local_78 = L"Engine";
    local_80 = 0x400000000;
    local_88 = 0x10000000;
    local_90 = 8;
    local_98 = 0x50;
    FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
  }
  lVar3 = *(longlong *)(param_2 + 0x20);
  if (lVar3 != 0) {
    do {
      if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x38) < *(int *)(lVar2 + 0x38)) ||
         (lVar4 = lVar3,
         *(longlong *)
          (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
         != lVar2 + 0x30)) {
        lVar4 = 0;
      }
    } while ((lVar4 == 0) && (lVar3 = *(longlong *)(lVar3 + 0x20), lVar3 != 0));
    if (lVar4 != 0) {
      local_30 = *(undefined8 *)(lVar4 + 0x18);
      FUN_1400021e4(&local_30,&local_40);
      if (ppcVar1 == &local_40) {
        if (local_40 != (code *)0x0) {
          FUN_1400020a8();
        }
      }
      else {
        if (*ppcVar1 != (code *)0x0) {
          FUN_1400020a8();
        }
        *(code **)(param_1 + 0x350) = local_40;
        local_40 = (code *)0x0;
        *(undefined4 *)(param_1 + 0x358) = local_38;
        *(undefined4 *)(param_1 + 0x35c) = local_34;
      }
      FUN_140002184(ppcVar1,0x3a);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140794830 FUN_140794830 body=610 status=ok
// SIG undefined FUN_140794830(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong * FUN_140794830(longlong param_1,ulonglong *param_2,int param_3)

{
  ulonglong uVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  uVar1 = *(ulonglong *)(param_1 + 0x10);
  if (((uVar1 == 0) || ((~*(uint *)(uVar1 + 0x54) & 6) != 0)) || (*(char *)(uVar1 + 0x50) != '\0'))
  {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    puVar2 = *(ulonglong **)(uVar1 + 0x28);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14cb2f758) && (FUN_144b3d300(&DAT_14cb2f758), DAT_14cb2f758 == -1)) {
      FUN_146087666();
      FUN_140db5666(&DAT_14cb2f6b0,3,&DAT_14cb2f648,L"FNiagaraShader",
                    L"/Plugin/FX/Niagara/Private/NiagaraEmitterInstanceShader.usf",L"SimulateMain",5
                    ,1,FUN_14804db30,FUN_14804db08,&LAB_14804db04,&LAB_14804db00,&LAB_14712ac0c,
                    &LAB_14712ac08,0xf8,0);
      _DAT_14cb2f6b0 = &PTR_FUN_14ad4b7e0;
      atexit((_func_5014 *)&LAB_1438fa290);
      _Init_thread_footer(&DAT_14cb2f758);
    }
    uVar4 = (DAT_14cb2f6d8 ^ (longlong)param_3) * -0x622015f714c7d297;
    lVar5 = (uVar4 >> 0x2f ^ (longlong)param_3 ^ uVar4) * -0x622015f714c7d297;
    uVar4 = puVar2[3];
    if ((uVar4 & 1) != 0) {
      uVar4 = (longlong)puVar2 + ((longlong)uVar4 >> 0x18) + 0x18;
    }
    uVar3 = puVar2[5];
    if ((uVar3 & 1) != 0) {
      uVar3 = (longlong)puVar2 + ((longlong)uVar3 >> 0x18) + 0x28;
    }
    uVar6 = puVar2[1];
    if ((uVar6 & 1) != 0) {
      uVar6 = (longlong)puVar2 + ((longlong)uVar6 >> 0x18) + 8;
    }
    uVar8 = *puVar2;
    if ((uVar8 & 1) != 0) {
      uVar8 = ((longlong)uVar8 >> 0x18) + (longlong)puVar2;
    }
    uVar7 = *(uint *)(uVar8 + (ulonglong)
                              ((uint)puVar2[2] &
                               ((uint)((ulonglong)lVar5 >> 0x2f) ^ (uint)lVar5) * 0x2d69 & 0xffff) *
                              4);
    if (uVar7 == 0xffffffff) {
      uVar8 = 0;
    }
    else {
      uVar8 = 0;
      do {
        uVar9 = (ulonglong)uVar7;
        if ((*(ulonglong *)(uVar4 + uVar9 * 8) == DAT_14cb2f6d8) &&
           (*(int *)(uVar3 + uVar9 * 4) == param_3)) {
          uVar4 = puVar2[7];
          if ((uVar4 & 1) != 0) {
            uVar4 = (longlong)(puVar2 + 7) + ((longlong)uVar4 >> 0x18);
          }
          uVar8 = *(ulonglong *)(uVar4 + (longlong)(int)uVar7 * 8);
          if ((uVar8 & 1) != 0) {
            uVar8 = ((longlong)uVar8 >> 0x18) + uVar4 + (longlong)(int)uVar7 * 8;
          }
          break;
        }
        uVar7 = *(uint *)(uVar6 + uVar9 * 4);
      } while (uVar7 != 0xffffffff);
    }
    *param_2 = uVar8;
    param_2[1] = uVar1;
  }
  return param_2;
}



// FUNCTION 140794a92 FUN_140794a92 body=990 status=ok
// SIG undefined FUN_140794a92(void)

ulonglong FUN_140794a92(longlong param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined2 *puVar9;
  undefined *puVar10;
  uint uVar11;
  ulonglong unaff_RBX;
  undefined7 uVar12;
  int iVar13;
  uint uVar14;
  longlong lVar15;
  longlong lVar16;
  ulonglong uVar17;
  longlong lVar18;
  undefined1 auStack_88 [40];
  longlong local_60 [3];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb39fc6 == '\x01') {
    uVar6 = FUN_14018d992();
    lVar7 = FUN_144a78ede(param_2,uVar6);
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = *(longlong *)(lVar7 + 0x18);
    }
    puVar3 = (undefined8 *)FUN_143a7c40e(param_2);
    if (*(int *)(puVar3 + 1) == 0) {
      puVar9 = &DAT_149dfb77a;
    }
    else {
      puVar9 = (undefined2 *)*puVar3;
    }
    FUN_1446f470e(local_60,puVar9,1);
    lVar15 = local_60[0];
    uVar2 = (uint)((ulonglong)local_60[0] >> 0x10);
    uVar14 = (uint)local_60[0] & 0xffff;
    uVar11 = ((uint)local_60[0] << 0x10 | uVar14) + (int)((ulonglong)local_60[0] >> 0x20) +
             (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar14 >> 4);
    unaff_RBX = (ulonglong)uVar11;
    uVar2 = (uint)((ulonglong)lVar7 >> 0x10);
    uVar14 = (uint)lVar7 & 0xffff;
    iVar13 = ((uint)lVar7 << 0x10 | uVar14) + (int)((ulonglong)lVar7 >> 0x20) +
             (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar14 >> 4);
    uVar2 = FUN_144a78877(iVar13,unaff_RBX);
    if (DAT_14cb3a020 != DAT_14cb3a04c) {
      puVar10 = &DAT_14cb3a050;
      if (DAT_14cb3a058 != (undefined *)0x0) {
        puVar10 = DAT_14cb3a058;
      }
      iVar1 = *(int *)(puVar10 + (ulonglong)(DAT_14cb3a060 - 1U & uVar2) * 4);
      while (iVar1 != -1) {
        lVar16 = (longlong)iVar1;
        if ((*(longlong *)(DAT_14cb3a018 + lVar16 * 0x18) == lVar7) &&
           (*(longlong *)(DAT_14cb3a018 + 8 + lVar16 * 0x18) == lVar15)) goto LAB_140794e50;
        iVar1 = *(int *)(DAT_14cb3a018 + lVar16 * 0x18 + 0x10);
      }
    }
    if (*(char *)(param_1 + 0x3c) == '\x01') {
      uVar2 = FUN_144a78877(iVar13,uVar11);
      if (DAT_14cb3a070 != DAT_14cb3a09c) {
        puVar10 = &DAT_14cb3a0a0;
        if (DAT_14cb3a0a8 != (undefined *)0x0) {
          puVar10 = DAT_14cb3a0a8;
        }
        iVar13 = *(int *)(puVar10 + (ulonglong)(DAT_14cb3a0b0 - 1U & uVar2) * 4);
        while (iVar13 != -1) {
          lVar16 = (longlong)iVar13;
          if ((*(longlong *)(DAT_14cb3a068 + lVar16 * 0x18) == lVar7) &&
             (*(longlong *)(DAT_14cb3a068 + 8 + lVar16 * 0x18) == lVar15)) goto LAB_140794e50;
          iVar13 = *(int *)(DAT_14cb3a068 + lVar16 * 0x18 + 0x10);
        }
      }
      if (((DAT_14cb3a0ec < DAT_14cb3a0c0) && (lVar7 = *(longlong *)(param_1 + 0x268), lVar7 != 0))
         && ((longlong)*(int *)(lVar7 + 0x390) != 0)) {
        unaff_RBX = *(ulonglong *)(lVar7 + 0x388);
        uVar17 = (longlong)*(int *)(lVar7 + 0x390) * 0x50 + unaff_RBX;
        do {
          plVar4 = (longlong *)FUN_144741050();
          if (*plVar4 == 0) {
            uVar5 = 0;
            uVar8 = 0;
          }
          else {
            uVar8 = *(ulonglong *)(*plVar4 + 0x18);
            uVar5 = uVar8 & 0xffffffff00000000;
          }
          if (DAT_14cb3a0c0 != DAT_14cb3a0ec) {
            uVar2 = (uint)(uVar8 >> 0x10);
            uVar14 = (uint)uVar8 & 0xffff;
            puVar10 = DAT_14cb3a0f8;
            if (DAT_14cb3a0f8 == (undefined *)0x0) {
              puVar10 = &DAT_14cb3a0f0;
            }
            iVar13 = *(int *)(puVar10 +
                             (ulonglong)
                             (DAT_14cb3a100 - 1U &
                             (int)(uVar5 >> 0x20) + (uint)uVar8 * 0x10000 + uVar14 +
                             (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar14 >> 4)) * 4);
            if (iVar13 != -1) {
              do {
                if (*(ulonglong *)(DAT_14cb3a0b8 + (longlong)iVar13 * 0x10) ==
                    (uVar8 & 0xffffffff | uVar5)) goto LAB_140794e50;
                iVar13 = *(int *)((longlong)iVar13 * 0x10 + DAT_14cb3a0b8 + 8);
              } while (iVar13 != -1);
            }
          }
          unaff_RBX = unaff_RBX + 0x50;
        } while (unaff_RBX != uVar17);
      }
    }
  }
  uVar12 = (undefined7)(unaff_RBX >> 8);
  if (DAT_14c76284c == '\0') {
    uVar17 = CONCAT71(uVar12,*(char *)(param_1 + 0x3c) != '\x01');
  }
  else {
    uVar17 = CONCAT71(uVar12,1);
    if ((DAT_14c76284d == '\0') && (*(char *)(param_1 + 0x3c) == '\x01')) {
      uVar6 = FUN_14018d992();
      lVar7 = FUN_144a78ede(param_2,uVar6);
      if ((lVar7 != 0) && (0 < *(int *)(lVar7 + 0xc0))) {
        lVar18 = 0;
        lVar15 = 0;
        lVar16 = 0;
        do {
          FUN_143a820dc(*(longlong *)(lVar7 + 0xb8) + lVar18,local_60);
          if ((local_60[0] == param_2) && (lVar16 < *(int *)(lVar7 + 0xf0))) {
            uVar17 = CONCAT71(uVar12,*(int *)(*(longlong *)(*(longlong *)(lVar7 + 0xe8) + lVar15) +
                                             0x124) == 0);
            break;
          }
          lVar16 = lVar16 + 1;
          lVar15 = lVar15 + 0x10;
          lVar18 = lVar18 + 0x48;
        } while (lVar16 < *(int *)(lVar7 + 0xc0));
      }
    }
  }
LAB_140794ade:
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar17 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_140794e50:
  uVar17 = 0;
  goto LAB_140794ade;
}



// FUNCTION 140794ec0 FUN_140794ec0 body=107 status=ok
// SIG undefined FUN_140794ec0(void)

void FUN_140794ec0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  if ((longlong)*(int *)(param_1 + 0x58) != 0) {
    lVar1 = 0;
    do {
      if ((*(int *)(*(longlong *)(param_1 + 0x50) + 8 + lVar1) != 0) &&
         (*(longlong *)(*(longlong *)(param_1 + 0x50) + lVar1) != 0)) {
        FUN_1438877ce(param_1 + 0x50,param_1,param_2);
        break;
      }
      lVar1 = lVar1 + 0x10;
    } while ((longlong)*(int *)(param_1 + 0x58) * 0x10 != lVar1);
  }
  *(undefined8 *)(param_1 + 0x128) = 0xbf80000000000000;
  FUN_1410c88e8(*(longlong *)(param_1 + 0x40) + 0x28,param_1);
  return;
}



// FUNCTION 140794f2c FUN_140794f2c body=205 status=ok
// SIG undefined FUN_140794f2c(void)

uint FUN_140794f2c(longlong param_1,uint param_2,undefined4 param_3)

{
  byte bVar1;
  byte bVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  uint uVar6;
  
  uVar6 = 0;
  cVar4 = FUN_1402bfec4(param_1,0);
  if (cVar4 == '\0') {
    if (((((*(byte *)(param_1 + 0xc0) & 1) == 0) ||
         (bVar1 = *(byte *)(param_1 + 0xc5), (int)param_2 <= (int)(uint)bVar1)) ||
        (bVar2 = *(byte *)(param_1 + 0xc3), bVar2 <= bVar1)) || (*(byte *)(param_1 + 0xc6) != bVar1)
       ) {
      uVar6 = 0;
    }
    else {
      uVar6 = (uint)bVar2;
      if (param_2 < bVar2) {
        uVar6 = param_2;
      }
      *(char *)(param_1 + 0xc6) = (char)uVar6;
      *(byte *)(param_1 + 0xc0) = *(byte *)(param_1 + 0xc0) | 4;
      uVar6 = (uint)DAT_14ca84e06;
      lVar5 = FUN_14001cc68(0x670,0x10);
      FUN_140794ffa(lVar5,param_1,param_3,uVar6 + 1);
      lVar3 = *(longlong *)(param_1 + 0x38);
      if (lVar3 != lVar5) {
        *(longlong *)(param_1 + 0x38) = lVar5;
        if (lVar5 != 0) {
          LOCK();
          *(int *)(lVar5 + 100) = *(int *)(lVar5 + 100) + 1;
          UNLOCK();
        }
        if (lVar3 != 0) {
          FUN_14128f1bc();
        }
      }
      uVar6 = CONCAT31((int3)(uVar6 + 1 >> 8),*(undefined1 *)(*(longlong *)(param_1 + 0x38) + 0x5c))
              ^ 1;
    }
  }
  return uVar6;
}



// FUNCTION 140794ffa FUN_140794ffa body=315 status=ok
// SIG undefined FUN_140794ffa(void)

undefined8 *
FUN_140794ffa(undefined8 *param_1,undefined8 param_2,undefined1 param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  undefined ***pppuVar2;
  longlong *plVar3;
  undefined1 auStack_c8 [32];
  code *local_a8 [2];
  undefined ***local_98;
  undefined **local_88;
  undefined8 *local_80;
  longlong local_68 [2];
  longlong *local_58;
  longlong local_48 [4];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14079525c(param_1,param_2,param_4);
  *param_1 = &PTR_FUN_14aac06f0;
  param_1[0xca] = 0;
  puVar1 = (undefined8 *)FUN_14001cc68(0x20,0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)((longlong)puVar1 + 10) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x12) = 0;
  param_1[0xcb] = puVar1;
  if (puVar1 != (undefined8 *)0x0) {
    LOCK();
    *(int *)((longlong)puVar1 + 0xc) = *(int *)((longlong)puVar1 + 0xc) + 1;
    UNLOCK();
  }
  *(undefined1 *)(param_1 + 0xcc) = param_3;
  *(undefined1 *)((longlong)param_1 + 0x661) = 0;
  local_68[0] = 0;
  local_58 = (longlong *)0x0;
  local_98 = (undefined ***)0x0;
  local_88 = &PTR_LAB_14aac2770;
  local_a8[0] = FUN_1437211a8;
  *(undefined4 *)(param_1 + 0xd) = 2;
  local_80 = param_1;
  FUN_140795136(param_1 + 0xe,local_a8);
  *(undefined4 *)(param_1 + 0x16) = 0;
  FUN_140795136(param_1 + 0x18,local_68);
  if (local_a8[0] != (code *)0x0) {
    pppuVar2 = local_98;
    if (local_98 == (undefined ***)0x0) {
      pppuVar2 = &local_88;
    }
    (*(code *)(*pppuVar2)[2])();
  }
  if (local_68[0] != 0) {
    plVar3 = local_58;
    if (local_58 == (longlong *)0x0) {
      plVar3 = local_48;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  if ((local_28 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140795136 FUN_140795136 body=292 status=ok
// SIG undefined FUN_140795136(void)

longlong * FUN_140795136(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_b8 [32];
  longlong local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  undefined8 uStack_50;
  longlong *local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_98 = *param_2;
  local_88 = (longlong *)0x0;
  if (local_98 != 0) {
    plVar7 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar7 = (longlong *)param_2[2];
    }
    (**(code **)*plVar7)(plVar7,&local_88);
  }
  local_58 = *param_1;
  uStack_50 = param_1[1];
  local_48 = (longlong *)param_1[2];
  uStack_40 = param_1[3];
  local_38 = param_1[4];
  uStack_30 = param_1[5];
  local_28 = param_1[6];
  uStack_20 = param_1[7];
  lVar5 = local_28;
  lVar6 = uStack_20;
  lVar3 = local_38;
  lVar4 = uStack_30;
  lVar2 = uStack_40;
  lVar1 = uStack_50;
  param_1[6] = CONCAT44(uStack_64,local_68);
  param_1[7] = CONCAT44(uStack_5c,uStack_60);
  param_1[4] = CONCAT44(uStack_74,local_78);
  param_1[5] = CONCAT44(uStack_6c,uStack_70);
  param_1[2] = (longlong)local_88;
  param_1[3] = CONCAT44(uStack_7c,uStack_80);
  *param_1 = local_98;
  param_1[1] = CONCAT44(uStack_8c,uStack_90);
  uStack_50._4_4_ = (undefined4)((ulonglong)uStack_50 >> 0x20);
  uStack_40._4_4_ = (undefined4)((ulonglong)uStack_40 >> 0x20);
  local_38._4_4_ = (undefined4)((ulonglong)local_38 >> 0x20);
  uStack_30._4_4_ = (undefined4)((ulonglong)uStack_30 >> 0x20);
  local_28._4_4_ = (undefined4)((ulonglong)local_28 >> 0x20);
  uStack_20._4_4_ = (undefined4)((ulonglong)uStack_20 >> 0x20);
  local_68 = (undefined4)local_28;
  uStack_64 = local_28._4_4_;
  uStack_60 = (undefined4)uStack_20;
  uStack_5c = uStack_20._4_4_;
  local_78 = (undefined4)local_38;
  uStack_74 = local_38._4_4_;
  uStack_70 = (undefined4)uStack_30;
  uStack_6c = uStack_30._4_4_;
  uStack_80 = (undefined4)uStack_40;
  uStack_7c = uStack_40._4_4_;
  uStack_90 = (undefined4)uStack_50;
  uStack_8c = uStack_50._4_4_;
  local_98 = local_58;
  local_88 = local_48;
  uStack_50 = lVar1;
  uStack_40 = lVar2;
  local_38 = lVar3;
  uStack_30 = lVar4;
  local_28 = lVar5;
  uStack_20 = lVar6;
  if (local_58 != 0) {
    plVar7 = local_48;
    if (local_48 == (longlong *)0x0) {
      plVar7 = (longlong *)&local_78;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  if ((local_10 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14079525c FUN_14079525c body=180 status=ok
// SIG undefined FUN_14079525c(void)

undefined8 * FUN_14079525c(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  FUN_1403225d8();
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[0xe] = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[0x18] = 0;
  param_1[0x1a] = 0;
  *param_1 = &PTR_FUN_14aac0670;
  memset(param_1 + 0x20,0,0x240);
  lVar2 = 0x340;
  do {
    *(undefined8 *)((longlong)param_1 + lVar2) = 0;
    ((undefined8 *)((longlong)param_1 + lVar2))[1] = 0;
    *(undefined8 *)((longlong)param_1 + lVar2 + 0xe) = 0;
    *(undefined1 *)((longlong)param_1 + lVar2 + 0x16) = 1;
    *(undefined8 *)((longlong)param_1 + lVar2 + 0x50) = 0;
    *(undefined1 *)((longlong)param_1 + lVar2 + 0x58) = 0;
    puVar1 = (undefined8 *)((longlong)param_1 + lVar2 + 0x17);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)((longlong)param_1 + lVar2 + 0x27);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)((longlong)param_1 + lVar2 + 0x37);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined8 *)((longlong)param_1 + lVar2 + 0x44) = 0;
    lVar2 = lVar2 + 0x60;
  } while (lVar2 != 0x640);
  param_1[200] = 0;
  *(undefined4 *)(param_1 + 0xc9) = param_3;
  return param_1;
}



// FUNCTION 140795310 FUN_140795310 body=148 status=ok
// SIG undefined FUN_140795310(void)

void FUN_140795310(longlong param_1,longlong param_2)

{
  FUN_1400f9b98();
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x1d0));
  FUN_1407953a4(param_1 + 0x180);
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x1d0));
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  *(longlong *)(param_1 + 0x40) = param_2;
  FUN_140010566(param_1 + 0x30);
  if (((*(longlong *)(param_1 + 0x120) == 0) && (*(longlong *)(param_1 + 0x40) != 0)) &&
     (*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x120) != 0)) {
    FUN_14073e7a8(param_1);
  }
  FUN_1400f8a51(param_1);
  return;
}



// FUNCTION 1407953a4 FUN_1407953a4 body=382 status=ok
// SIG undefined FUN_1407953a4(void)

void FUN_1407953a4(longlong *param_1)

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
  iVar6 = (int)param_1[9];
  if (iVar6 < 2) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
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
    else if (iVar6 == 1) {
      lVar3 = 0;
      do {
        *(undefined4 *)((longlong)plVar5 + lVar3 * 4) = 0xffffffff;
        lVar3 = lVar3 + 1;
      } while (lVar3 < (int)param_1[9]);
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_98);
  }
  FUN_1403dd5b2(param_1,0);
  *(undefined4 *)(param_1 + 9) = 1;
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  FUN_140772b08(param_1);
  return;
}



// FUNCTION 140795537 FUN_140795537 body=7599 status=ok
// SIG undefined FUN_140795537(void)

/* WARNING: Removing unreachable block (ram,0x00014079712a) */
/* WARNING: Removing unreachable block (ram,0x000140797263) */
/* WARNING: Removing unreachable block (ram,0x00014079713c) */
/* WARNING: Removing unreachable block (ram,0x000140797275) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140795537(longlong param_1,longlong param_2)

{
  wchar_t *pwVar1;
  ushort uVar2;
  undefined4 uVar3;
  longlong lVar4;
  bool bVar5;
  ulonglong uVar6;
  byte bVar7;
  undefined1 uVar8;
  char cVar9;
  undefined4 uVar10;
  uint uVar11;
  int iVar12;
  DWORD DVar13;
  DWORD DVar14;
  uint uVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  longlong lVar18;
  undefined8 uVar19;
  longlong *plVar20;
  int iVar21;
  uint uVar22;
  ulonglong uVar23;
  longlong *plVar24;
  int iVar25;
  int iVar26;
  int *piVar27;
  longlong lVar28;
  undefined1 *puVar29;
  byte bVar30;
  undefined8 *puVar31;
  undefined4 *puVar32;
  bool bVar33;
  undefined1 *puVar34;
  ulonglong uVar35;
  undefined2 uVar36;
  longlong lVar37;
  undefined1 auStack_158 [32];
  undefined8 *local_138;
  byte local_121;
  longlong *local_120;
  uint local_114;
  longlong *local_110;
  undefined8 local_108;
  undefined8 *local_100;
  int local_f4;
  longlong local_f0;
  longlong local_e8;
  int *local_e0;
  ulonglong local_d8;
  ulonglong local_d0;
  ulonglong local_c8;
  undefined4 local_c0 [5];
  undefined4 local_ac;
  undefined8 local_a8 [2];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  char local_80;
  undefined1 uStack_7f;
  byte bStack_7e;
  undefined1 uStack_7d;
  undefined1 uStack_7c;
  undefined2 uStack_7b;
  undefined1 uStack_79;
  uint uStack_78;
  undefined4 uStack_74;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined4 local_60;
  int iStack_5c;
  int iStack_58;
  undefined2 local_54;
  undefined2 uStack_52;
  undefined2 uStack_50;
  undefined1 uStack_4e;
  undefined1 uStack_4d;
  undefined1 uStack_4c;
  undefined1 uStack_4b;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  lVar4 = *(longlong *)(param_2 + 8);
  uVar10 = *(undefined4 *)(lVar4 + 0x5170);
  uVar3 = *(undefined4 *)(lVar4 + 0x5174);
  *(undefined8 *)(lVar4 + 0x5168) = 0;
  *(undefined8 *)(lVar4 + 0x5170) = 0;
  *(undefined8 *)(lVar4 + 0x5174) = 0;
  *(undefined8 *)(lVar4 + 0x517c) = 0;
  *(undefined8 *)(lVar4 + 0x5184) = 0xffffffff;
  *(undefined4 *)(lVar4 + 0x518c) = 0xffffffff;
  *(undefined4 *)(lVar4 + 0x5190) = 0xffffffff;
  *(undefined4 *)(lVar4 + 0x5194) = 0xffffffff;
  *(undefined4 *)(lVar4 + 0x5198) = 0xffffffff;
  *(undefined8 *)(lVar4 + 0x519c) = 0;
  *(undefined8 *)(lVar4 + 0x51a4) = 0;
  *(undefined8 *)(lVar4 + 0x51ac) = 0;
  *(undefined8 *)(lVar4 + 0x51b4) = 0;
  *(undefined8 *)(lVar4 + 0x51bc) = 0;
  *(undefined8 *)(lVar4 + 0x51c4) = 0;
  *(undefined8 *)(lVar4 + 0x51cc) = 0;
  *(undefined8 *)(lVar4 + 0x51d4) = 0;
  *(undefined8 *)(lVar4 + 0x51dc) = 0;
  *(undefined8 *)(lVar4 + 0x51e4) = 0;
  *(undefined8 *)(lVar4 + 0x51ec) = 0;
  *(undefined8 *)(lVar4 + 0x51f4) = 0;
  *(undefined4 *)(lVar4 + 0x51fc) = 0;
  *(undefined4 *)(lVar4 + 0x5170) = uVar10;
  *(undefined4 *)(lVar4 + 0x5174) = uVar3;
  *(undefined1 *)(lVar4 + 0x5178) = *(undefined1 *)(lVar4 + 0x5178);
  piVar27 = DAT_14ca97170;
  uVar2 = *(ushort *)(param_2 + 0x8a8);
  if ((&DAT_14ca814b8)[(ulonglong)uVar2 * 0xf] == 1) {
    bVar30 = DAT_14c760e14 & DAT_14ca964f0;
  }
  else {
    puVar32 = &DAT_14ca96aa8;
    if (DAT_14ca96af8 != (undefined4 *)0x0) {
      puVar32 = DAT_14ca96af8;
    }
    bVar30 = (int)(&DAT_14ca814b8)[(ulonglong)uVar2 * 0xf] < 3 ||
             ((uint)puVar32[uVar2 >> 5] >> (uVar2 & 0x1f) & 1) == 0;
  }
  puVar34 = *(undefined1 **)(param_2 + 0x260);
  local_e0 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
  iVar12 = *local_e0;
  local_e8 = param_2;
  if (iVar12 == 0x40000002) {
    if (*DAT_14ca97170 < 1) {
      puVar34 = &DAT_200000002;
    }
    if (bVar30 == 0) {
      puVar34 = &DAT_200000002;
    }
LAB_140795cbe:
    uVar23 = 0;
    piVar27 = DAT_14ca97170;
  }
  else if ((DAT_14c86a9f8 == '\x01') && (iVar12 != 2)) {
    uVar23 = 1;
    if (iVar12 == 1) {
      DVar13 = FUN_140ad26c0();
      DVar14 = GetCurrentThreadId();
      uVar23 = (ulonglong)(DVar13 != DVar14);
      iVar12 = *local_e0;
    }
    if (piVar27[uVar23] < 1) {
      puVar34 = &DAT_200000002;
    }
    if (bVar30 == 0) {
      puVar34 = &DAT_200000002;
    }
    if (iVar12 != 0x40000002) goto LAB_1407956d3;
    uVar23 = 0;
    piVar27 = DAT_14ca97170;
  }
  else {
    if (*DAT_14ca97170 < 1) {
      puVar34 = &DAT_200000002;
    }
    if (bVar30 == 0) {
      puVar34 = &DAT_200000002;
    }
LAB_1407956d3:
    piVar27 = DAT_14ca97170;
    if ((DAT_14c86a9f8 != '\x01') || (iVar12 == 2)) goto LAB_140795cbe;
    if (iVar12 == 1) {
      DVar13 = FUN_140ad26c0();
      DVar14 = GetCurrentThreadId();
      uVar23 = (ulonglong)(DVar13 != DVar14);
    }
    else {
      uVar23 = 1;
    }
  }
  iVar21 = (int)puVar34;
  iVar12 = (int)((ulonglong)puVar34 >> 0x20);
  local_121 = bVar30;
  if (piVar27[uVar23] < 1) {
    *(undefined4 *)(lVar4 + 0x517c) = 0xc;
    bVar7 = FUN_1407972e7();
    uVar22 = (uint)bVar7;
    local_114 = 0;
    if (bVar30 == 0) {
      iVar26 = 1;
      goto LAB_140795ae2;
    }
  }
  else {
    if (DAT_14ca5dd98 == '\0') {
      if (DAT_14cad8288 != 0) {
        uVar36 = *(undefined2 *)(local_e8 + 0x8a8);
        local_98 = (wchar_t *)0x0;
        uStack_90 = 0;
        local_c0[0] = 1;
        FUN_140056680(local_a8,L"Enabled");
        FUN_14731cdf8(&local_80,local_a8,local_c0);
        lVar18 = (longlong)(int)(uint)uStack_90;
        uVar22 = (uint)uStack_90 + 1;
        uStack_90._0_4_ = uVar22;
        if (uStack_90._4_4_ < uVar22) {
          FUN_146b17dba(&local_98);
        }
        pwVar1 = local_98 + lVar18 * 0x18;
        pwVar1[0] = L'\0';
        pwVar1[1] = L'\0';
        pwVar1[2] = L'\0';
        pwVar1[3] = L'\0';
        *(ulonglong *)(local_98 + lVar18 * 0x18) =
             CONCAT17(uStack_79,
                      CONCAT25(uStack_7b,
                               CONCAT14(uStack_7c,
                                        CONCAT13(uStack_7d,
                                                 CONCAT12(bStack_7e,CONCAT11(uStack_7f,local_80)))))
                     );
        *(uint *)(local_98 + lVar18 * 0x18 + 4) = uStack_78;
        *(undefined4 *)(local_98 + lVar18 * 0x18 + 6) = uStack_74;
        pwVar1 = local_98 + lVar18 * 0x18 + 8;
        pwVar1[0] = L'\0';
        pwVar1[1] = L'\0';
        pwVar1[2] = L'\0';
        pwVar1[3] = L'\0';
        *(ulonglong *)(local_98 + lVar18 * 0x18 + 8) = uStack_70;
        *(undefined4 *)(local_98 + lVar18 * 0x18 + 0xc) = (undefined4)local_68;
        *(undefined4 *)(local_98 + lVar18 * 0x18 + 0xe) = local_68._4_4_;
        *(ulonglong *)(local_98 + lVar18 * 0x18 + 0x10) = CONCAT44(iStack_5c,local_60);
        *(undefined1 *)(local_98 + lVar18 * 0x18 + 0x14) = (undefined1)iStack_58;
        *(uint *)(local_98 + lVar18 * 0x18 + 0x16) = CONCAT22(uStack_52,local_54);
        local_68 = 0;
        uStack_70 = 0;
        uStack_74 = 0;
        uStack_78 = 0;
        uStack_79 = 0;
        uStack_7b = 0;
        uStack_7c = 0;
        uStack_7d = 0;
        bStack_7e = 0;
        uStack_7f = 0;
        local_80 = '\0';
        local_ac = FUN_147430f19(uVar36);
        FUN_140056680(local_c0,L"BytesPerPixel");
        FUN_147087274(&local_80,local_c0,&local_ac);
        lVar18 = (longlong)(int)(uint)uStack_90;
        uStack_90._0_4_ = (uint)uStack_90 + 1;
        if (uStack_90._4_4_ < (uint)uStack_90) {
          FUN_146b17dba(&local_98);
        }
        pwVar1 = local_98 + lVar18 * 0x18;
        pwVar1[0] = L'\0';
        pwVar1[1] = L'\0';
        pwVar1[2] = L'\0';
        pwVar1[3] = L'\0';
        *(ulonglong *)(local_98 + lVar18 * 0x18) =
             CONCAT17(uStack_79,
                      CONCAT25(uStack_7b,
                               CONCAT14(uStack_7c,
                                        CONCAT13(uStack_7d,
                                                 CONCAT12(bStack_7e,CONCAT11(uStack_7f,local_80)))))
                     );
        *(uint *)(local_98 + lVar18 * 0x18 + 4) = uStack_78;
        *(undefined4 *)(local_98 + lVar18 * 0x18 + 6) = uStack_74;
        pwVar1 = local_98 + lVar18 * 0x18 + 8;
        pwVar1[0] = L'\0';
        pwVar1[1] = L'\0';
        pwVar1[2] = L'\0';
        pwVar1[3] = L'\0';
        *(ulonglong *)(local_98 + lVar18 * 0x18 + 8) = uStack_70;
        *(undefined4 *)(local_98 + lVar18 * 0x18 + 0xc) = (undefined4)local_68;
        *(undefined4 *)(local_98 + lVar18 * 0x18 + 0xe) = local_68._4_4_;
        *(ulonglong *)(local_98 + lVar18 * 0x18 + 0x10) = CONCAT44(iStack_5c,local_60);
        *(undefined1 *)(local_98 + lVar18 * 0x18 + 0x14) = (undefined1)iStack_58;
        *(uint *)(local_98 + lVar18 * 0x18 + 0x16) = CONCAT22(uStack_52,local_54);
        local_68 = 0;
        uStack_70 = 0;
        uStack_74 = 0;
        uStack_78 = 0;
        uStack_79 = 0;
        uStack_7b = 0;
        uStack_7c = 0;
        uStack_7d = 0;
        bStack_7e = 0;
        uStack_7f = 0;
        local_80 = '\0';
        FUN_140056680(&local_80,L"Substrate.Usage.ProjectSettings");
        plVar20 = (longlong *)FUN_147a89392();
        (**(code **)(*plVar20 + 0x78))(plVar20,&local_80,&local_98);
        if (CONCAT17(uStack_79,
                     CONCAT25(uStack_7b,
                              CONCAT14(uStack_7c,
                                       CONCAT13(uStack_7d,
                                                CONCAT12(bStack_7e,CONCAT11(uStack_7f,local_80))))))
            != 0) {
          FUN_1400020a8();
        }
        FUN_146b17e4e(local_98,uStack_90 & 0xffffffff);
        if (local_98 != (wchar_t *)0x0) {
          FUN_1400020a8();
        }
      }
      DAT_14ca5dd98 = '\x01';
    }
    *(undefined8 *)(lVar4 + 0x5168) = 0;
    uVar23 = (ulonglong)*(int *)(local_e8 + 0x3f0);
    if (uVar23 == 0) {
      local_108 = (ulonglong)local_108._4_4_ << 0x20;
      local_114 = 0;
    }
    else {
      lVar18 = *(longlong *)(local_e8 + 1000);
      lVar28 = uVar23 * 0x13c10;
      local_114 = 0;
      local_108 = (ulonglong)local_108._4_4_ << 0x20;
      uVar35 = 0;
      do {
        uVar22 = local_114 & 1;
        uVar17 = CONCAT71((int7)(uVar23 >> 8),1);
        local_114 = (uint)uVar17;
        if (uVar22 == 0) {
          uVar19 = *(undefined8 *)(local_e8 + 8);
          uVar17 = FUN_1449a7bda(uVar19,lVar18,0,0);
          local_114 = (uint)CONCAT71((int7)((ulonglong)uVar19 >> 8),1);
          if ((char)uVar17 == '\0') {
            local_138 = (undefined8 *)((ulonglong)local_138 & 0xffffffff00000000);
            local_114 = (uint)CONCAT71((int7)((ulonglong)uVar17 >> 8),1);
            uVar17 = FUN_140444219(lVar18,0);
            if ((char)uVar17 == '\0') {
              uVar17 = FUN_14020031d(lVar18);
              local_114 = (uint)uVar17;
            }
          }
        }
        uVar23 = local_108 & 1;
        local_108 = CONCAT44(local_108._4_4_,(int)CONCAT71((int7)((ulonglong)uVar17 >> 8),1));
        if (uVar23 == 0) {
          uVar23 = (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)*(int *)(lVar18 + 0x3090) * 2);
          cVar9 = FUN_1474312f5(uVar23);
          local_108 = CONCAT44(local_108._4_4_,(int)CONCAT71((int7)(uVar23 >> 8),1));
          if (cVar9 == '\0') {
            uVar10 = FUN_144a617d4(*(undefined2 *)(local_e8 + 0x8a8),1);
            local_108 = CONCAT44(local_108._4_4_,uVar10);
          }
        }
        uVar22 = *(uint *)(lVar4 + 0x5168);
        if (*(uint *)(lVar4 + 0x5168) < *(uint *)(lVar18 + 0x1182c)) {
          uVar22 = *(uint *)(lVar18 + 0x1182c);
        }
        *(uint *)(lVar4 + 0x5168) = uVar22;
        uVar22 = *(uint *)(lVar4 + 0x516c);
        if (*(uint *)(lVar4 + 0x516c) < *(uint *)(lVar18 + 0x11828)) {
          uVar22 = *(uint *)(lVar18 + 0x11828);
        }
        uVar23 = (ulonglong)uVar22;
        *(uint *)(lVar4 + 0x516c) = uVar22;
        uVar6 = uVar35 & 1;
        uVar35 = 1;
        if (uVar6 == 0) {
          uVar23 = FUN_1474312f5(*(undefined2 *)
                                  (&DAT_14ca85070 + (longlong)*(int *)(lVar18 + 0x3090) * 2));
          uVar35 = uVar23 & 0xffffffff;
        }
        if (((*(char *)(lVar18 + 0x23ec) == '\0') && (*(char *)(lVar18 + 0x23eb) == '\0')) &&
           (*(char *)(lVar18 + 0x23e8) == '\0')) {
          uVar22 = *(uint *)(lVar4 + 0x5170);
          if (*(uint *)(lVar4 + 0x5170) < *(uint *)(lVar18 + 0x1182c)) {
            uVar22 = *(uint *)(lVar18 + 0x1182c);
          }
          *(uint *)(lVar4 + 0x5170) = uVar22;
          uVar22 = *(uint *)(lVar4 + 0x5174);
          if (*(uint *)(lVar4 + 0x5174) < *(uint *)(lVar18 + 0x11828)) {
            uVar22 = *(uint *)(lVar18 + 0x11828);
          }
          *(uint *)(lVar4 + 0x5174) = uVar22;
          uVar23 = (ulonglong)CONCAT31((int3)(uVar22 >> 8),*(byte *)(lVar18 + 0x11830));
          *(byte *)(lVar4 + 0x5178) = *(byte *)(lVar4 + 0x5178) | *(byte *)(lVar18 + 0x11830);
        }
        lVar18 = lVar18 + 0x13c10;
        lVar28 = lVar28 + -0x13c10;
      } while (lVar28 != 0);
    }
    lVar18 = local_e8;
    uVar22 = FUN_147430f19(*(undefined2 *)(local_e8 + 0x8a8));
    uVar11 = FUN_147430fbd(*(undefined2 *)(lVar18 + 0x8a8));
    lVar18 = DAT_14ca5dce0;
    if (*local_e0 == 0x40000002) {
      uVar23 = 0;
    }
    else {
      bVar30 = FUN_144a61b4f();
      uVar23 = (ulonglong)(bVar30 ^ 1);
    }
    bVar30 = bStack_7e;
    iVar26 = *(int *)(lVar18 + uVar23 * 4);
    iVar25 = 2;
    if (iVar26 < 2) {
      iVar25 = iVar26;
    }
    iVar26 = 0;
    if (0 < iVar25) {
      iVar26 = iVar25;
    }
    if (iVar26 == 0) {
      uVar15 = *(uint *)(lVar4 + 0x5168);
      uVar11 = *(uint *)(lVar4 + 0x516c);
    }
    else {
      uVar15 = uVar22;
      if (iVar26 == 1) {
        uVar15 = *(uint *)(lVar4 + 0x5168);
        if (*(uint *)(lVar4 + 0x5168) < *(uint *)(lVar4 + 0x5170)) {
          uVar15 = *(uint *)(lVar4 + 0x5170);
        }
        uVar11 = *(uint *)(lVar4 + 0x516c);
        if (*(uint *)(lVar4 + 0x516c) < *(uint *)(lVar4 + 0x5174)) {
          uVar11 = *(uint *)(lVar4 + 0x5174);
        }
      }
    }
    if (uVar15 < uVar22) {
      uVar22 = uVar15;
    }
    uVar15 = 0xc;
    if (0xc < uVar22) {
      uVar15 = uVar22;
    }
    *(uint *)(lVar4 + 0x517c) = uVar15 + 3 & 0xfffffffc;
    *(uint *)(lVar4 + 0x5180) = uVar11;
    if (local_121 == 0) {
      bVar30 = FUN_1407972e7();
      uVar22 = (uint)bVar30;
      iVar26 = 1;
      bVar30 = local_121;
      goto LAB_140795ae2;
    }
    lVar18 = (local_108 & 0xff) << 0x11;
    bStack_7e = (byte)((ulonglong)lVar18 >> 0x10) | 0x20;
    bVar7 = bStack_7e;
    local_88 = DAT_14ca83a40;
    local_98 = (wchar_t *)CONCAT44(DAT_14ca83a34,DAT_14ca83a30);
    uStack_90 = CONCAT44(DAT_14ca83a3c,DAT_14ca83a38);
    bStack_7e = bVar30;
    iVar26 = FUN_14743112e();
    uStack_4d = 0x44;
    if (iVar26 == 0) {
      uStack_4d = 0x1c;
    }
    local_80 = '\t';
    uStack_7f = 0;
    uStack_7d = (undefined1)((ulonglong)lVar18 >> 0x18);
    uStack_7c = 0;
    uStack_7b = 0;
    uStack_79 = 0;
    uStack_78 = (undefined4)local_98;
    uStack_74 = local_98._4_4_;
    uStack_70 = uStack_90;
    local_68 = CONCAT44(-1 << ((byte)DAT_14c760da4 & 0x1f),local_88) ^ 0xffffffff00000000;
    local_60 = 0;
    local_54 = 1;
    uStack_52 = 1;
    uStack_50 = 0x101;
    uStack_4e = 0;
    uStack_4c = 0;
    uStack_4b = 0xff;
    bStack_7e = bVar7;
    iStack_5c = iVar21;
    iStack_58 = iVar12;
    uVar17 = FUN_14472bf7a(param_1,&local_80,L"Substrate.TopLayerTexture",0);
    *(undefined8 *)(lVar4 + 0x51c0) = uVar17;
    cVar9 = FUN_144b1ce23();
    local_108 = CONCAT71(local_108._1_7_,cVar9);
    puVar29 = (undefined1 *)0x400000004;
    if (cVar9 != '\0') {
      puVar29 = puVar34;
    }
    uStack_78 = DAT_14ca83a30;
    uStack_74 = DAT_14ca83a34;
    uStack_70 = CONCAT44(DAT_14ca83a3c,DAT_14ca83a38);
    local_80 = '\t';
    uStack_7f = 0;
    bStack_7e = 2;
    uStack_7d = 0;
    uStack_7c = 0;
    uStack_7b = 0;
    uStack_79 = 0;
    local_68 = CONCAT44(-1 << ((byte)DAT_14c760da4 & 0x1f),DAT_14ca83a40) ^ 0xffffffff00000000;
    local_60 = 0;
    iStack_5c = (int)puVar29;
    iVar26 = iStack_5c;
    iStack_58 = (int)((ulonglong)puVar29 >> 0x20);
    iVar25 = iStack_58;
    local_54 = 1;
    uStack_52 = 1;
    uStack_50 = 0x101;
    uStack_4e = 0;
    uStack_4d = 0x1a;
    uStack_4c = 0;
    uStack_4b = 0xff;
    uStack_70 = FUN_14472bf7a(param_1,&local_80,L"Substrate.OpaqueRoughRefractionTexture",0);
    *(ulonglong *)(lVar4 + 0x51c8) = uStack_70;
    local_80 = *(char *)(uStack_70 + 0x94);
    uStack_78 = uStack_78 & 0xffffff00;
    uStack_7f = 0;
    bStack_7e = 0;
    uStack_7d = 0;
    uStack_7c = 0;
    uStack_7b = 0;
    local_98 = (wchar_t *)((ulonglong)local_98 & 0xffffffffffffff00);
    local_120 = (longlong *)(param_1 + 0x198);
    local_110 = (longlong *)(param_1 + 0x70);
    local_138 = &local_98;
    uVar17 = FUN_144a96e92(local_120,local_110,uStack_70 + 8,&local_80);
    *(undefined8 *)(lVar4 + 0x51d8) = uVar17;
    uStack_78 = DAT_14ca83a30;
    uStack_74 = DAT_14ca83a34;
    uStack_70 = CONCAT44(DAT_14ca83a3c,DAT_14ca83a38);
    local_80 = '\t';
    uStack_7f = 0;
    bStack_7e = 2;
    uStack_7d = 0;
    uStack_7c = 0;
    uStack_7b = 0;
    uStack_79 = 0;
    local_68 = CONCAT44(~(-1 << ((byte)DAT_14c760da4 & 0x1f)),DAT_14ca83a40);
    local_60 = 0;
    local_54 = 1;
    uStack_52 = 1;
    uStack_50 = 0x101;
    uStack_4e = 0;
    uStack_4d = 0x1a;
    uStack_4c = 0;
    uStack_4b = 0xff;
    iStack_5c = iVar26;
    iStack_58 = iVar25;
    uVar17 = FUN_14472bf7a(param_1,&local_80,L"Substrate.SeparatedSubSurfaceSceneColor",0);
    *(undefined8 *)(lVar4 + 0x51e8) = uVar17;
    uStack_78 = DAT_14ca83a30;
    uStack_74 = DAT_14ca83a34;
    uStack_70 = CONCAT44(DAT_14ca83a3c,DAT_14ca83a38);
    local_80 = '\t';
    uStack_7f = 0;
    bStack_7e = 2;
    uStack_7d = 0;
    uStack_7c = 0;
    uStack_7b = 0;
    uStack_79 = 0;
    local_68 = CONCAT44(~(-1 << ((byte)DAT_14c760da4 & 0x1f)),DAT_14ca83a40);
    local_60 = 0;
    local_54 = 1;
    uStack_52 = 1;
    uStack_50 = 0x101;
    uStack_4e = 0;
    uStack_4d = 0x1a;
    uStack_4c = 0;
    uStack_4b = 0xff;
    iStack_5c = iVar26;
    iStack_58 = iVar25;
    uVar17 = FUN_14472bf7a(param_1,&local_80,L"Substrate.SeparatedOpaqueRoughRefractionSceneColor",0
                          );
    *(undefined8 *)(lVar4 + 0x51f0) = uVar17;
    if ((char)local_108 != '\0') {
      lVar18 = *(longlong *)(lVar4 + 0x51c8);
      uVar10 = *(undefined4 *)(lVar18 + 0x6c);
      uVar3 = *(undefined4 *)(lVar18 + 0x70);
      uStack_78 = *(undefined4 *)(lVar18 + 0x74);
      uStack_74 = *(undefined4 *)(lVar18 + 0x78);
      local_80 = (char)uVar10;
      uStack_7f = (undefined1)((uint)uVar10 >> 8);
      bStack_7e = (byte)((uint)uVar10 >> 0x10);
      uStack_7d = (undefined1)((uint)uVar10 >> 0x18);
      uStack_7c = (undefined1)uVar3;
      uStack_7b = (undefined2)((uint)uVar3 >> 8);
      uStack_79 = (undefined1)((uint)uVar3 >> 0x18);
      FUN_14178ea9b(param_1,lVar18,&local_80);
      lVar18 = *(longlong *)(lVar4 + 0x51e8);
      uVar10 = *(undefined4 *)(lVar18 + 0x6c);
      uVar3 = *(undefined4 *)(lVar18 + 0x70);
      uStack_78 = *(undefined4 *)(lVar18 + 0x74);
      uStack_74 = *(undefined4 *)(lVar18 + 0x78);
      local_80 = (char)uVar10;
      uStack_7f = (undefined1)((uint)uVar10 >> 8);
      bStack_7e = (byte)((uint)uVar10 >> 0x10);
      uStack_7d = (undefined1)((uint)uVar10 >> 0x18);
      uStack_7c = (undefined1)uVar3;
      uStack_7b = (undefined2)((uint)uVar3 >> 8);
      uStack_79 = (undefined1)((uint)uVar3 >> 0x18);
      FUN_14178ea9b(param_1,lVar18,&local_80);
      lVar18 = *(longlong *)(lVar4 + 0x51f0);
      uVar10 = *(undefined4 *)(lVar18 + 0x6c);
      uVar3 = *(undefined4 *)(lVar18 + 0x70);
      uStack_78 = *(uint *)(lVar18 + 0x74);
      uStack_74 = *(undefined4 *)(lVar18 + 0x78);
      local_80 = (char)uVar10;
      uStack_7f = (undefined1)((uint)uVar10 >> 8);
      bStack_7e = (byte)((uint)uVar10 >> 0x10);
      uStack_7d = (undefined1)((uint)uVar10 >> 0x18);
      uStack_7c = (undefined1)uVar3;
      uStack_7b = (undefined2)((uint)uVar3 >> 8);
      uStack_79 = (undefined1)((uint)uVar3 >> 0x18);
      FUN_14178ea9b(param_1,lVar18,&local_80);
    }
    if ((char)local_114 != '\0') {
      uStack_78 = DAT_14ca85088;
      uStack_74 = DAT_14ca8508c;
      uStack_70 = CONCAT44(DAT_14ca85094,DAT_14ca85090);
      local_80 = '\b';
      uStack_7f = 0;
      bStack_7e = 2;
      uStack_7d = 0;
      uStack_7c = 0;
      uStack_7b = 0;
      uStack_79 = 0;
      local_68 = CONCAT44(~(-1 << ((byte)DAT_14c760da4 & 0x1f)),DAT_14ca85098);
      local_60 = 0;
      local_54 = 1;
      uStack_52 = 1;
      uStack_50 = 0x101;
      uStack_4e = 0;
      uStack_4d = 0x1c;
      uStack_4c = 0;
      uStack_4b = 0xff;
      iStack_5c = iVar21;
      iStack_58 = iVar12;
      uStack_70 = FUN_14472bf7a(param_1,&local_80,L"Substrate.ClosureOffsets",0);
      *(ulonglong *)(lVar4 + 0x51e0) = uStack_70;
      local_80 = *(char *)(uStack_70 + 0x94);
      uStack_78 = uStack_78 & 0xffffff00;
      uStack_7f = 0;
      bStack_7e = 0;
      uStack_7d = 0;
      uStack_7c = 0;
      uStack_7b = 0;
      local_98 = (wchar_t *)((ulonglong)local_98 & 0xffffffffffffff00);
      local_138 = &local_98;
      uVar17 = FUN_144a96e92(local_120,local_110,uStack_70 + 8,&local_80);
      FUN_14742ba95(param_1,uVar17,0,2);
    }
    bVar7 = FUN_1407972e7();
  }
  local_108 = (ulonglong)bVar7;
  iVar25 = (*(int *)(lVar4 + 0x517c) + 3U >> 2) + (uint)bVar7;
  iVar26 = iVar25 + 2;
  uStack_78 = (uint)_DAT_14ca83a58;
  uStack_74 = (undefined4)((ulonglong)_DAT_14ca83a58 >> 0x20);
  uStack_70 = _DAT_14ca83a60;
  uStack_4e = 1;
  local_80 = '\t';
  uStack_7f = 0;
  bStack_7e = 0x23;
  uStack_7d = 5;
  uStack_7c = 0;
  uStack_7b = 0;
  uStack_79 = 0;
  uStack_4d = 0x1c;
  uStack_4c = 0;
  local_54 = 1;
  uStack_52 = (undefined2)iVar26;
  uStack_50 = 0x101;
  local_60 = 0;
  uStack_4b = (undefined1)(int)((1.0 / (float)iVar26) * 255.0);
  local_68 = CONCAT44(~(-1 << ((byte)DAT_14c760da4 & 0x1f)),DAT_14ca83a68);
  iStack_5c = DAT_14ca84e40;
  if (iVar21 < DAT_14ca84e40) {
    iStack_5c = iVar21;
  }
  if (iStack_5c < 2) {
    iStack_5c = 1;
  }
  iStack_58 = DAT_14ca84e40;
  if (iVar12 < DAT_14ca84e40) {
    iStack_58 = iVar12;
  }
  if (iStack_58 < 2) {
    iStack_58 = 1;
  }
  plVar20 = (longlong *)(param_1 + 0x70);
  uVar35 = *(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8;
  uVar23 = uVar35 + 0x120;
  if (*(ulonglong *)(param_1 + 0x78) < uVar23) {
    FUN_140023dd8(plVar20,0x128);
    uVar35 = *plVar20 + 7U & 0xfffffffffffffff8;
    uVar23 = uVar35 + 0x120;
  }
  *(ulonglong *)(param_1 + 0x70) = uVar23;
  FUN_1456bbb8c(uVar35,L"Substrate.Material",&local_80,0);
  iVar12 = *(int *)(param_1 + 0x180);
  *(uint *)(param_1 + 0x180) = iVar12 + 1U;
  if (*(uint *)(param_1 + 0x184) < iVar12 + 1U) {
    FUN_14472c0f6(param_1 + 0x178,iVar12);
  }
  *(ulonglong *)(*(longlong *)(param_1 + 0x178) + (longlong)iVar12 * 8) = uVar35;
  *(int *)(uVar35 + 0x9c) = *(int *)(param_1 + 0x180) + -1;
  *(ulonglong *)(lVar4 + 0x51a0) = uVar35;
  if ((*(char *)(uVar35 + 0x92) == '\x01') || (*(char *)(uVar35 + 0x92) == '\x04')) {
    uVar36 = *(undefined2 *)(uVar35 + 0x8e);
  }
  else {
    uVar36 = 0;
  }
  uVar8 = *(undefined1 *)(uVar35 + 0x90);
  puVar31 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar16 = puVar31 + 8;
  if (*(undefined8 **)(param_1 + 0x78) < puVar16) {
    FUN_140023dd8(plVar20,0x48);
    puVar31 = (undefined8 *)(*plVar20 + 7U & 0xfffffffffffffff8);
    puVar16 = puVar31 + 8;
  }
  plVar24 = (longlong *)(param_1 + 0x198);
  *(undefined8 **)(param_1 + 0x70) = puVar16;
  puVar31[1] = *(undefined8 *)(uVar35 + 8);
  puVar31[2] = 0;
  *(undefined1 *)(puVar31 + 3) = 1;
  *(undefined8 *)((longlong)puVar31 + 0x1c) = 0xffffffffffffffff;
  *puVar31 = &PTR_FUN_14a203858;
  *(undefined2 *)(puVar31 + 5) = 0;
  *(undefined1 *)((longlong)puVar31 + 0x2a) = uVar8;
  *(undefined1 *)((longlong)puVar31 + 0x2b) = 0;
  *(undefined2 *)((longlong)puVar31 + 0x2c) = 0;
  *(undefined2 *)((longlong)puVar31 + 0x2e) = uVar36;
  *(undefined1 *)(puVar31 + 6) = 0;
  *(undefined1 *)((longlong)puVar31 + 0x32) = 0;
  puVar31[7] = uVar35;
  iVar12 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar12 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar12 + 1U) {
    FUN_1447568fc(plVar24,iVar12);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar12 * 8) = puVar31;
  *(int *)((longlong)puVar31 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
  *(undefined8 **)(lVar4 + 0x51b8) = puVar31;
  lVar18 = *(longlong *)(lVar4 + 0x51a0);
  uVar8 = *(undefined1 *)(lVar18 + 0x94);
  puVar31 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar16 = puVar31 + 9;
  if (*(undefined8 **)(param_1 + 0x78) < puVar16) {
    FUN_140023dd8(plVar20,0x50);
    puVar31 = (undefined8 *)(*plVar20 + 7U & 0xfffffffffffffff8);
    puVar16 = puVar31 + 9;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar16;
  puVar31[1] = *(undefined8 *)(lVar18 + 8);
  puVar31[2] = 0;
  *(undefined1 *)(puVar31 + 3) = 0;
  *(undefined8 *)((longlong)puVar31 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar31 + 5) = 0;
  *puVar31 = &PTR_FUN_14a1fb948;
  *(undefined1 *)(puVar31 + 6) = uVar8;
  *(undefined1 *)(puVar31 + 7) = 0;
  *(undefined4 *)((longlong)puVar31 + 0x31) = 0;
  *(undefined2 *)((longlong)puVar31 + 0x35) = 0;
  puVar31[8] = lVar18;
  iVar12 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar12 + 1U;
  local_110 = plVar20;
  if (*(uint *)(param_1 + 0x1a4) < iVar12 + 1U) {
    FUN_1447568fc(plVar24,iVar12);
  }
  plVar20 = local_110;
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar12 * 8) = puVar31;
  *(int *)((longlong)puVar31 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
  *(undefined8 **)(lVar4 + 0x51b0) = puVar31;
  lVar18 = *(longlong *)(lVar4 + 0x51a0);
  uVar8 = *(undefined1 *)(lVar18 + 0x94);
  puVar31 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar16 = puVar31 + 9;
  if (*(undefined8 **)(param_1 + 0x78) < puVar16) {
    local_120 = plVar24;
    FUN_140023dd8(local_110,0x50);
    puVar31 = (undefined8 *)(*plVar20 + 7U & 0xfffffffffffffff8);
    puVar16 = puVar31 + 9;
    plVar24 = local_120;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar16;
  puVar31[1] = *(undefined8 *)(lVar18 + 8);
  puVar31[2] = 0;
  *(undefined1 *)(puVar31 + 3) = 0;
  *(undefined8 *)((longlong)puVar31 + 0x1c) = 0xffffffffffffffff;
  *(undefined1 *)(puVar31 + 5) = 0;
  *puVar31 = &PTR_FUN_14a1fb948;
  *(undefined1 *)(puVar31 + 6) = uVar8;
  *(undefined1 *)((longlong)puVar31 + 0x31) = 0;
  *(undefined2 *)((longlong)puVar31 + 0x32) = 3;
  *(short *)((longlong)puVar31 + 0x34) = (short)iVar25 + -1;
  *(undefined1 *)((longlong)puVar31 + 0x36) = 0;
  *(undefined1 *)(puVar31 + 7) = 0;
  puVar31[8] = lVar18;
  iVar12 = *(int *)(param_1 + 0x1a0);
  *(uint *)(param_1 + 0x1a0) = iVar12 + 1U;
  if (*(uint *)(param_1 + 0x1a4) < iVar12 + 1U) {
    FUN_1447568fc(plVar24,iVar12);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar12 * 8) = puVar31;
  *(int *)((longlong)puVar31 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
  *(undefined8 **)(lVar4 + 0x51a8) = puVar31;
  uVar22 = (uint)local_108;
  bVar30 = local_121;
LAB_140795ae2:
  uVar8 = FUN_140797354();
  *(undefined1 *)(lVar4 + 0x5188) = uVar8;
  iVar12 = 0;
  if (0 < *(int *)(DAT_14ca5dc80 + 4)) {
    iVar12 = *(int *)(DAT_14ca5dc80 + 4);
  }
  *(int *)(lVar4 + 0x5184) = iVar12;
  *(bool *)(lVar4 + 0x5189) = 0 < *(int *)(DAT_14ca5dc98 + 4);
  if (bVar30 == 0) {
    iVar26 = -1;
    iVar12 = -1;
    iVar21 = -1;
    iVar25 = -1;
  }
  else {
    iVar26 = iVar26 - uVar22;
    iVar12 = iVar26 + -3;
    iVar21 = iVar26 + -2;
    iVar25 = iVar26 + -5;
  }
  local_108 = lVar4 + 0x5168;
  *(int *)(lVar4 + 0x5190) = iVar26;
  *(int *)(lVar4 + 0x518c) = iVar12;
  *(int *)(lVar4 + 0x5198) = iVar21;
  *(int *)(lVar4 + 0x5194) = iVar25;
  if (0 < *(int *)(local_e8 + 0x3f0)) {
    lVar28 = 0;
    lVar37 = 0;
    lVar18 = local_e8;
    do {
      plVar20 = *(longlong **)(lVar18 + 1000);
      uVar8 = *(undefined1 *)((longlong)plVar20 + lVar28 + 0x11830);
      local_110 = plVar20;
      memset((void *)((longlong)plVar20 + lVar28 + 0x11828),0,0xb0);
      *(undefined1 *)((longlong)plVar20 + lVar28 + 0x11830) = uVar8;
      *(ulonglong *)((longlong)plVar20 + lVar28 + 0x118c8) = local_108;
      piVar27 = DAT_14ca97170;
      uVar23 = *(ulonglong *)(lVar18 + 0x260);
      iVar12 = *local_e0;
      if (((iVar12 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar12 == 2)) {
        uVar35 = 0;
      }
      else if (iVar12 == 1) {
        DVar13 = FUN_140ad26c0();
        DVar14 = GetCurrentThreadId();
        uVar35 = (ulonglong)(DVar13 != DVar14);
      }
      else {
        uVar35 = 1;
      }
      if (0 < piVar27[uVar35]) {
        local_d8 = uVar23 >> 0x20;
        local_100 = (undefined8 *)(param_1 + 0x188);
        plVar20 = (longlong *)(param_1 + 0x70);
        local_f0 = param_1 + 0x198;
        iVar12 = (int)uVar23;
        local_120 = plVar20;
        if (local_121 != 0) {
          iVar21 = (int)(uVar23 >> 0x20);
          iVar26 = iVar21 + 7;
          local_f4 = iVar21 + 0xe;
          if (-1 < iVar26) {
            local_f4 = iVar26;
          }
          local_f4 = local_f4 >> 3;
          iVar21 = iVar12 + 0xe;
          if (-1 < iVar12 + 7) {
            iVar21 = iVar12 + 7;
          }
          local_c8 = (ulonglong)(uint)(iVar21 >> 3);
          local_138 = local_a8;
          local_a8[0]._0_1_ = 0;
          local_98 = L"Substrate.SubstrateTileDrawIndirectBuffer";
          uStack_78 = 0x4189;
          uStack_70 = 0;
          uVar22 = 0x10;
          if (DAT_14ca84e48 < 0x10) {
            uVar22 = DAT_14ca84e48;
          }
          iVar21 = uVar22 + (uVar22 == 0);
          local_80 = (char)iVar21;
          uStack_7f = (undefined1)((uint)iVar21 >> 8);
          bStack_7e = (byte)((uint)iVar21 >> 0x10);
          uStack_7d = (undefined1)((uint)iVar21 >> 0x18);
          uVar22 = DAT_14ca84e48;
          if (8 < DAT_14ca84e48) {
            uVar22 = 9;
          }
          iVar21 = uVar22 + (uVar22 == 0);
          uStack_7c = (undefined1)iVar21;
          uStack_7b = (undefined2)((uint)iVar21 >> 8);
          uStack_79 = (undefined1)((uint)iVar21 >> 0x18);
          lVar18 = FUN_144738de6(local_100,plVar20,&local_98,&local_80);
          *(longlong *)((longlong)local_110 + lVar28 + 0x11888) = lVar18;
          local_80 = '\x1c';
          uStack_7f = 0;
          bStack_7e = 0;
          uStack_78 = (uint)lVar18;
          uStack_74 = (undefined4)((ulonglong)lVar18 >> 0x20);
          local_138 = &local_98;
          local_98 = (wchar_t *)((ulonglong)local_98 & 0xffffffffffffff00);
          uVar17 = FUN_144a23c98(local_f0,plVar20,lVar18 + 8,&local_80);
          *(undefined8 *)((longlong)local_110 + lVar28 + 0x11890) = uVar17;
          FUN_1405bfba3(param_1,uVar17,0,2);
          plVar20 = local_120;
          local_138 = local_a8;
          local_a8[0]._0_1_ = 0;
          local_98 = L"Substrate.SubstrateTileDispatchIndirectBuffer";
          uStack_78 = 0x4189;
          uVar22 = 0xc;
          if (DAT_14ca84e48 < 0xc) {
            uVar22 = DAT_14ca84e48;
          }
          uStack_70 = 0;
          iVar21 = uVar22 + (uVar22 == 0);
          local_80 = (char)iVar21;
          uStack_7f = (undefined1)((uint)iVar21 >> 8);
          bStack_7e = (byte)((uint)iVar21 >> 0x10);
          uStack_7d = (undefined1)((uint)iVar21 >> 0x18);
          uVar22 = 9;
          if (DAT_14ca84e48 < 9) {
            uVar22 = DAT_14ca84e48;
          }
          iVar21 = uVar22 + (uVar22 == 0);
          uStack_7c = (undefined1)iVar21;
          uStack_7b = (undefined2)((uint)iVar21 >> 8);
          uStack_79 = (undefined1)((uint)iVar21 >> 0x18);
          lVar18 = FUN_144738de6(local_100,local_120,&local_98,&local_80);
          plVar24 = local_110;
          *(longlong *)((longlong)local_110 + lVar28 + 0x11898) = lVar18;
          local_80 = '\x1c';
          uStack_7f = 0;
          bStack_7e = 0;
          uStack_78 = (uint)lVar18;
          uStack_74 = (undefined4)((ulonglong)lVar18 >> 0x20);
          local_d0 = 0;
          local_138 = &local_98;
          local_98 = (wchar_t *)((ulonglong)local_98 & 0xffffffffffffff00);
          uVar17 = FUN_144a23c98(local_f0,plVar20,lVar18 + 8,&local_80);
          *(undefined8 *)((longlong)plVar24 + lVar28 + 0x118a0) = uVar17;
          FUN_1405bfba3(param_1,uVar17,0,2);
          cVar9 = FUN_144b1ce23();
          iVar21 = (int)local_c8 * local_f4;
          local_f4 = iVar21;
          if (cVar9 == '\0') {
            local_f4 = 4;
          }
          cVar9 = FUN_1474312f5(*(undefined2 *)
                                 (&DAT_14ca85070 +
                                 (longlong)*(int *)((longlong)local_110 + lVar28 + 0x3090) * 2));
          lVar18 = DAT_14ca5dcf8;
          iVar26 = iVar21;
          if (cVar9 == '\0') {
            iVar26 = 4;
          }
          if (*local_e0 != 0x40000002) {
            bVar30 = FUN_144a61b4f();
            local_d0 = (ulonglong)(bVar30 ^ 1);
          }
          bVar5 = 0 < *(int *)(lVar18 + local_d0 * 4);
          bVar33 = ((int)local_d8 < 0x801 && iVar12 < 0x801) && bVar5;
          *(uint *)((longlong)local_110 + lVar28 + 0x1183c) = (uint)bVar33;
          cVar9 = *(char *)(lVar4 + 0x5178);
          *(undefined4 *)((longlong)local_110 + lVar28 + 0x11860) = 0;
          *(int *)((longlong)local_110 + lVar28 + 0x11864) = iVar21;
          *(int *)((longlong)local_110 + lVar28 + 0x11868) = iVar21 * 2;
          *(int *)((longlong)local_110 + lVar28 + 0x1186c) = iVar21 * 3;
          iVar25 = 4;
          if (cVar9 != '\0') {
            iVar25 = iVar21;
          }
          iVar25 = iVar25 + iVar21 * 3;
          *(int *)((longlong)local_110 + lVar28 + 0x11870) = iVar25;
          iVar25 = iVar25 + local_f4;
          *(int *)((longlong)local_110 + lVar28 + 0x11874) = iVar25;
          iVar25 = iVar25 + local_f4;
          *(int *)((longlong)local_110 + lVar28 + 0x11878) = iVar25;
          iVar25 = iVar25 + iVar26;
          *(int *)((longlong)local_110 + lVar28 + 0x1187c) = iVar25;
          iVar25 = iVar25 + iVar26;
          *(int *)((longlong)local_110 + lVar28 + 0x11880) = iVar25;
          uVar22 = (uint)(((int)local_d8 >= 0x801 || iVar12 >= 0x801) || !bVar5) * 2 + 2;
          local_a8[0]._0_1_ = 0;
          local_98 = L"Substrate.TileListBuffer";
          uStack_78 = 0x4109;
          uStack_70 = 0;
          if (DAT_14ca84e48 <= uVar22) {
            uVar22 = DAT_14ca84e48;
          }
          uVar11 = iVar25 + iVar26;
          iVar21 = uVar22 + (uVar22 == 0);
          local_80 = (char)iVar21;
          uStack_7f = (undefined1)((uint)iVar21 >> 8);
          bStack_7e = (byte)((uint)iVar21 >> 0x10);
          uStack_7d = (undefined1)((uint)iVar21 >> 0x18);
          if (DAT_14ca84e48 <= uVar11) {
            uVar11 = DAT_14ca84e48;
          }
          cVar9 = bVar33 * '\x04' + '\x1c';
          iVar21 = uVar11 + (uVar11 == 0);
          uStack_7c = (undefined1)iVar21;
          uStack_7b = (undefined2)((uint)iVar21 >> 8);
          uStack_79 = (undefined1)((uint)iVar21 >> 0x18);
          local_138 = local_a8;
          local_68 = FUN_144738de6(local_100,local_120,&local_98,&local_80);
          plVar20 = local_110;
          *(ulonglong *)((longlong)local_110 + lVar28 + 0x11848) = local_68;
          uStack_7c = 0;
          uStack_7b = 0;
          uStack_79 = 0;
          uStack_78 = 0xffffffff;
          uStack_70 = 0;
          local_80 = cVar9;
          uVar17 = FUN_14475683e(local_f0,local_120,local_68 + 8,&local_80);
          *(undefined8 *)((longlong)plVar20 + lVar28 + 0x11850) = uVar17;
          lVar18 = *(longlong *)((longlong)plVar20 + lVar28 + 0x11848);
          uStack_7f = 0;
          bStack_7e = 0;
          uStack_78 = (uint)lVar18;
          uStack_74 = (undefined4)((ulonglong)lVar18 >> 0x20);
          local_138 = &local_98;
          local_98 = (wchar_t *)((ulonglong)local_98 & 0xffffffffffffff00);
          local_80 = cVar9;
          uVar17 = FUN_144a23c98(local_f0,local_120,lVar18 + 8,&local_80);
          *(undefined8 *)((longlong)plVar20 + lVar28 + 0x11858) = uVar17;
        }
        plVar20 = local_110;
        if ((char)local_114 == '\0') {
          *(undefined1 **)((longlong)local_110 + lVar28 + 0x11834) = &DAT_100000001;
          *(undefined4 *)((longlong)local_110 + lVar28 + 0x11840) = 1;
          *(undefined8 *)((longlong)local_110 + lVar28 + 0x118b0) = 0;
          *(undefined8 *)((longlong)local_110 + lVar28 + 0x118b8) = 0;
          *(undefined8 *)((longlong)local_110 + lVar28 + 0x118c0) = 0;
          uVar17 = 0;
        }
        else {
          iVar21 = iVar12 + 0xe;
          if (-1 < iVar12 + 7) {
            iVar21 = iVar12 + 7;
          }
          iVar26 = (int)local_d8 + 7;
          iVar12 = (int)local_d8 + 0xe;
          if (-1 < iVar26) {
            iVar12 = iVar26;
          }
          iVar26 = FUN_144b18d7b();
          uVar11 = (iVar21 >> 3) * iVar26 * (iVar12 >> 3);
          *(ulonglong *)((longlong)plVar20 + lVar28 + 0x11834) = CONCAT44(iVar12 >> 3,iVar21 >> 3);
          *(int *)((longlong)plVar20 + lVar28 + 0x11840) = iVar26;
          local_138 = local_a8;
          local_a8[0]._0_1_ = 0;
          local_98 = L"Substrate.SubstrateClosureTilePerThreadDispatchIndirectBuffer";
          uVar22 = DAT_14ca84e48;
          if (0xb < DAT_14ca84e48) {
            uVar22 = 0xc;
          }
          iVar12 = uVar22 + (uVar22 == 0);
          uStack_70 = 0;
          local_80 = (char)iVar12;
          uStack_7f = (undefined1)((uint)iVar12 >> 8);
          bStack_7e = (byte)((uint)iVar12 >> 0x10);
          uStack_7d = (undefined1)((uint)iVar12 >> 0x18);
          uStack_7c = 1;
          uStack_7b = 0;
          uStack_79 = 0;
          uStack_78 = 0x4189;
          uVar17 = FUN_144738de6(local_100,local_120,&local_98,&local_80);
          *(undefined8 *)((longlong)plVar20 + lVar28 + 0x118c0) = uVar17;
          local_138 = local_a8;
          local_a8[0]._0_1_ = 0;
          local_98 = L"Substrate.SubstrateClosureTileDispatchIndirectBuffer";
          uStack_70 = 0;
          uVar22 = 0xc;
          if (DAT_14ca84e48 < 0xc) {
            uVar22 = DAT_14ca84e48;
          }
          iVar12 = uVar22 + (uVar22 == 0);
          local_80 = (char)iVar12;
          uStack_7f = (undefined1)((uint)iVar12 >> 8);
          bStack_7e = (byte)((uint)iVar12 >> 0x10);
          uStack_7d = (undefined1)((uint)iVar12 >> 0x18);
          uStack_7c = 1;
          uStack_7b = 0;
          uStack_79 = 0;
          uStack_78 = 0x4189;
          uVar17 = FUN_144738de6(local_100,local_120,&local_98,&local_80);
          *(undefined8 *)((longlong)plVar20 + lVar28 + 0x118b8) = uVar17;
          local_98 = L"Substrate.ClosureTileCount";
          uVar22 = DAT_14ca84e48;
          if (3 < DAT_14ca84e48) {
            uVar22 = 4;
          }
          local_138 = local_a8;
          local_a8[0]._0_1_ = 0;
          iVar12 = uVar22 + (uVar22 == 0);
          uStack_70 = 0;
          local_80 = (char)iVar12;
          uStack_7f = (undefined1)((uint)iVar12 >> 8);
          bStack_7e = (byte)((uint)iVar12 >> 0x10);
          uStack_7d = (undefined1)((uint)iVar12 >> 0x18);
          uStack_7c = 1;
          uStack_7b = 0;
          uStack_79 = 0;
          uStack_78 = 0x4109;
          uVar17 = FUN_144738de6(local_100,local_120,&local_98,&local_80);
          *(undefined8 *)((longlong)plVar20 + lVar28 + 0x118b0) = uVar17;
          local_138 = local_a8;
          local_a8[0]._0_1_ = 0;
          local_98 = L"Substrate.ClosureTileBuffer";
          uStack_78 = 0x4109;
          uStack_70 = 0;
          uVar22 = 4;
          if (DAT_14ca84e48 < 4) {
            uVar22 = DAT_14ca84e48;
          }
          iVar12 = uVar22 + (uVar22 == 0);
          local_80 = (char)iVar12;
          uStack_7f = (undefined1)((uint)iVar12 >> 8);
          bStack_7e = (byte)((uint)iVar12 >> 0x10);
          uStack_7d = (undefined1)((uint)iVar12 >> 0x18);
          if (DAT_14ca84e48 <= uVar11) {
            uVar11 = DAT_14ca84e48;
          }
          iVar12 = uVar11 + (uVar11 == 0);
          uStack_7c = (undefined1)iVar12;
          uStack_7b = (undefined2)((uint)iVar12 >> 8);
          uStack_79 = (undefined1)((uint)iVar12 >> 0x18);
          uVar17 = FUN_144738de6(local_100,local_120);
        }
        plVar20 = local_120;
        *(undefined8 *)((longlong)local_110 + lVar28 + 0x118a8) = uVar17;
        puVar31 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
        puVar16 = puVar31 + 0x10;
        if (*(undefined8 **)(param_1 + 0x78) < puVar16) {
          FUN_140023dd8(local_120,0x90);
          puVar31 = (undefined8 *)(*plVar20 + 0xfU & 0xfffffffffffffff0);
          puVar16 = puVar31 + 0x10;
        }
        *(undefined8 **)(param_1 + 0x70) = puVar16;
        *puVar31 = &PTR_FUN_14a311cf8;
        puVar31[9] = 0;
        puVar31[10] = 0;
        puVar31[0xb] = 0;
        puVar31[0xc] = 0;
        puVar31[0xd] = 0;
        puVar31[0xe] = 0;
        iVar12 = *(int *)(param_1 + 0xa0);
        *(uint *)(param_1 + 0xa0) = iVar12 + 1U;
        if (*(uint *)(param_1 + 0xa4) < iVar12 + 1U) {
          FUN_1448cfae8((longlong *)(param_1 + 0x98),iVar12);
        }
        *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar12 * 8) = puVar31;
        local_100 = puVar31 + 2;
        lVar18 = *(longlong *)((longlong)local_110 + lVar28 + 0x118c8);
        cVar9 = FUN_14473b0f0();
        if ((cVar9 == '\0') || (lVar18 == 0)) {
          lVar18 = FUN_144a8d736(param_1);
          local_138 = (undefined8 *)&DAT_14ca83a58;
          uVar17 = FUN_1447f6ec8(&DAT_14ca63b10,param_1,1,0x1c);
          local_68 = FUN_144aba046(&DAT_14ca63b10,param_1,4,0);
          local_80 = '\x1c';
          uStack_7c = 0;
          uStack_7b = 0;
          uStack_79 = 0;
          uStack_78 = 0xffffffff;
          uStack_70 = 0;
          uVar19 = FUN_14475683e(local_f0,local_120,local_68 + 8);
          *local_100 = 0;
          local_100[1] = 0;
          *(undefined4 *)(local_100 + 2) = 0;
          puVar31[6] = 0xffffffffffffffff;
          puVar31[7] = 0;
          puVar31[8] = 0;
          puVar31[9] = uVar17;
          puVar31[10] = *(undefined8 *)(lVar18 + 0x48);
          uVar17 = *(undefined8 *)(lVar18 + 8);
          puVar31[0xb] = uVar17;
          puVar31[0xc] = uVar17;
          puVar31[0xe] = uVar19;
          puVar31[0xd] = uVar19;
        }
        else {
          bVar30 = *(byte *)(lVar18 + 0x20);
          uVar10 = *(undefined4 *)(lVar18 + 0x1c);
          bVar7 = *(byte *)(lVar18 + 0x21);
          puVar31[2] = *(undefined8 *)(lVar18 + 0x14);
          *(uint *)(puVar31 + 3) = (uint)bVar30;
          *(undefined4 *)((longlong)puVar31 + 0x1c) = uVar10;
          *(uint *)(puVar31 + 4) = (uint)bVar7;
          *(undefined4 *)(puVar31 + 6) = *(undefined4 *)(lVar18 + 0x28);
          *(undefined4 *)((longlong)puVar31 + 0x34) = *(undefined4 *)(lVar18 + 0x30);
          puVar31[7] = 0x300000008;
          puVar31[8] = *(undefined8 *)((longlong)local_110 + lVar28 + 0x11834);
          puVar31[9] = *(undefined8 *)(lVar18 + 0x38);
          puVar31[10] = *(undefined8 *)(lVar18 + 0x58);
          puVar31[0xb] = *(undefined8 *)(lVar18 + 0x60);
          puVar31[0xc] = *(undefined8 *)(lVar18 + 0x78);
          lVar18 = *(longlong *)((longlong)local_110 + lVar28 + 0x118b0);
          if (lVar18 == 0) {
            uVar17 = 0;
          }
          else {
            local_80 = '\x1c';
            uStack_7c = 0;
            uStack_7b = 0;
            uStack_79 = 0;
            uStack_78 = 0xffffffff;
            uStack_70 = 0;
            local_68 = lVar18;
            uVar17 = FUN_14475683e(local_f0,local_120,lVar18 + 8);
          }
          puVar31[0xe] = uVar17;
          lVar18 = *(longlong *)((longlong)local_110 + lVar28 + 0x118a8);
          if (lVar18 == 0) {
            uVar17 = 0;
          }
          else {
            local_80 = '\x1c';
            uStack_7c = 0;
            uStack_7b = 0;
            uStack_79 = 0;
            uStack_78 = 0xffffffff;
            uStack_70 = 0;
            local_68 = lVar18;
            uVar17 = FUN_14475683e(local_f0,local_120,lVar18 + 8);
          }
          puVar31[0xd] = uVar17;
          if (puVar31[0xc] == 0) {
            lVar18 = FUN_144a8d736(param_1);
            local_68 = FUN_144aba046(&DAT_14ca63b10,param_1,4,0);
            local_80 = '\x1c';
            uStack_7c = 0;
            uStack_7b = 0;
            uStack_79 = 0;
            uStack_78 = 0xffffffff;
            uStack_70 = 0;
            uVar17 = FUN_14475683e(local_f0,local_120,local_68 + 8);
            puVar31[0xc] = *(undefined8 *)(lVar18 + 8);
            puVar31[0xe] = uVar17;
            puVar31[0xd] = uVar17;
          }
          if (local_121 == 0) {
            lVar18 = FUN_144a8d736(param_1);
            local_138 = (undefined8 *)&DAT_14ca83a58;
            uVar17 = FUN_1447f6ec8(&DAT_14ca63b10,param_1,1,0x1c);
            puVar31[9] = uVar17;
            puVar31[10] = *(undefined8 *)(lVar18 + 0x48);
            puVar31[0xb] = *(undefined8 *)(lVar18 + 8);
          }
        }
        local_80 = (char)local_100;
        uStack_7f = (undefined1)((ulonglong)local_100 >> 8);
        bStack_7e = (byte)((ulonglong)local_100 >> 0x10);
        uStack_7d = (undefined1)((ulonglong)local_100 >> 0x18);
        uStack_7c = (undefined1)((ulonglong)local_100 >> 0x20);
        uStack_7b = (undefined2)((ulonglong)local_100 >> 0x28);
        uStack_79 = (undefined1)((ulonglong)local_100 >> 0x38);
        FUN_144a2c9be();
        local_98 = DAT_14ca5dd18;
        uVar17 = FUN_14731ce7c(param_1 + 0x1a8,local_120,&local_80);
        *(undefined8 *)((longlong)local_110 + lVar28 + 0x118d0) = uVar17;
        lVar18 = local_e8;
      }
      lVar37 = lVar37 + 1;
      lVar28 = lVar28 + 0x13c10;
    } while (lVar37 < *(int *)(lVar18 + 0x3f0));
  }
  piVar27 = DAT_14ca97170;
  iVar12 = *local_e0;
  if (((iVar12 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (iVar12 == 2)) {
    uVar23 = 0;
  }
  else if (iVar12 == 1) {
    DVar13 = FUN_140ad26c0();
    DVar14 = GetCurrentThreadId();
    uVar23 = (ulonglong)(DVar13 != DVar14);
  }
  else {
    uVar23 = 1;
  }
  if (0 < piVar27[uVar23]) {
    uVar17 = FUN_14731726a(param_1,local_108);
    *(undefined8 *)(lVar4 + 0x51f8) = uVar17;
  }
  if ((local_48 ^ (ulonglong)auStack_158) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1407972e7 FUN_1407972e7 body=109 status=ok
// SIG undefined FUN_1407972e7(void)

undefined8 FUN_1407972e7(void)

{
  uint uVar1;
  longlong lVar2;
  DWORD DVar3;
  DWORD DVar4;
  ulonglong uVar5;
  undefined4 extraout_var;
  ulonglong uVar6;
  
  lVar2 = DAT_14ca972d8;
  uVar1 = *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0xc60);
  uVar5 = (ulonglong)uVar1;
  if (((uVar1 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (uVar1 == 2)) {
    uVar6 = 0;
  }
  else if (uVar1 == 1) {
    DVar3 = FUN_140ad26c0();
    DVar4 = GetCurrentThreadId();
    uVar5 = CONCAT44(extraout_var,DVar4);
    uVar6 = (ulonglong)(DVar3 != DVar4);
  }
  else {
    uVar6 = 1;
  }
  return CONCAT71((int7)(uVar5 >> 8),0 < *(int *)(lVar2 + uVar6 * 4));
}



// FUNCTION 140797354 FUN_140797354 body=109 status=ok
// SIG undefined FUN_140797354(void)

undefined8 FUN_140797354(void)

{
  uint uVar1;
  longlong lVar2;
  DWORD DVar3;
  DWORD DVar4;
  ulonglong uVar5;
  undefined4 extraout_var;
  ulonglong uVar6;
  
  lVar2 = DAT_14ca97248;
  uVar1 = *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0xc60);
  uVar5 = (ulonglong)uVar1;
  if (((uVar1 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (uVar1 == 2)) {
    uVar6 = 0;
  }
  else if (uVar1 == 1) {
    DVar3 = FUN_140ad26c0();
    DVar4 = GetCurrentThreadId();
    uVar5 = CONCAT44(extraout_var,DVar4);
    uVar6 = (ulonglong)(DVar3 != DVar4);
  }
  else {
    uVar6 = 1;
  }
  return CONCAT71((int7)(uVar5 >> 8),0 < *(int *)(lVar2 + uVar6 * 4));
}



// FUNCTION 1407973c2 FUN_1407973c2 body=2020 status=ok
// SIG undefined FUN_1407973c2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1407973c2(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  int iVar14;
  longlong lVar15;
  uint uVar16;
  undefined8 *puVar17;
  undefined1 auStack_158 [36];
  float local_134;
  float local_130;
  float local_12c;
  float local_128;
  float local_124;
  float local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_158;
  lVar1 = *(longlong *)(param_2 + 0x48);
  if (*(int *)(lVar1 + 0x18) != *(int *)(lVar1 + 0x44)) {
    lVar2 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x10);
    lVar15 = lVar1 + 0x48;
    if (*(longlong *)(lVar1 + 0x50) != 0) {
      lVar15 = *(longlong *)(lVar1 + 0x50);
    }
    iVar14 = *(int *)(lVar15 + (ulonglong)
                               (*(int *)(lVar1 + 0x58) - 1U &
                               (int)lVar2 + (int)((ulonglong)lVar2 >> 0x20) * 0x17) * 4);
    if (iVar14 != -1) {
      do {
        lVar15 = *(longlong *)(lVar1 + 0x10) + (longlong)iVar14 * 0x120;
        if (*(longlong *)(*(longlong *)(lVar1 + 0x10) + (longlong)iVar14 * 0x120) == lVar2)
        goto LAB_1407974ae;
        iVar14 = *(int *)(lVar15 + 0x110);
      } while (iVar14 != -1);
    }
  }
  lVar15 = 0;
LAB_1407974ae:
  uVar16 = *(int *)(param_2 + 0x50) + 0xfU & 0xfffffff0;
  FUN_140797ba8();
  *(uint *)(param_2 + 0x50) = DAT_14cc265ec + uVar16;
  puVar17 = (undefined8 *)((ulonglong)uVar16 + *(longlong *)(param_2 + 0x38));
  if (*(char *)(lVar15 + 0x10) == '\x01') {
    *(undefined4 *)puVar17 = *(undefined4 *)(lVar15 + 0xf8);
    *(undefined4 *)((longlong)puVar17 + 4) = *(undefined4 *)(lVar15 + 0xfc);
    puVar13 = (undefined8 *)(lVar15 + 0x100);
    puVar12 = (undefined8 *)(lVar15 + 0x108);
  }
  else {
    *puVar17 = 0;
    puVar12 = &DAT_14cb427b0;
    puVar13 = &DAT_14cb428f0;
  }
  puVar17[1] = *puVar13;
  puVar17[2] = *puVar12;
  *(uint *)(puVar17 + 3) =
       -(uint)(0.0 < *(float *)(lVar15 + 0xc0)) & (uint)(1.0 / *(float *)(lVar15 + 0xc0));
  uVar3 = *(undefined8 *)(lVar15 + 0x28);
  uVar8 = *(undefined8 *)(lVar15 + 0x30);
  uVar9 = *(undefined8 *)(lVar15 + 0x38);
  uVar10 = *(undefined8 *)(lVar15 + 0x40);
  uVar11 = *(undefined8 *)(lVar15 + 0x48);
  uVar4 = *(undefined4 *)(lVar15 + 0x50);
  uVar5 = *(undefined4 *)(lVar15 + 0x54);
  uVar6 = *(undefined4 *)(lVar15 + 0x58);
  uVar7 = *(undefined4 *)(lVar15 + 0x5c);
  puVar17[4] = *(undefined8 *)(lVar15 + 0x20);
  puVar17[5] = uVar3;
  puVar17[6] = uVar8;
  puVar17[7] = uVar9;
  puVar17[8] = uVar10;
  puVar17[9] = uVar11;
  *(undefined4 *)(puVar17 + 10) = uVar4;
  *(undefined4 *)((longlong)puVar17 + 0x54) = uVar5;
  *(undefined4 *)(puVar17 + 0xb) = uVar6;
  *(undefined4 *)((longlong)puVar17 + 0x5c) = uVar7;
  if ((((((1e-08 < ABS(*(float *)(lVar15 + 0x20))) || (1e-08 < ABS(*(float *)(lVar15 + 0x24)))) ||
        (1e-08 < ABS(*(float *)(lVar15 + 0x28)))) ||
       ((1e-08 < ABS(*(float *)(lVar15 + 0x30)) || (1e-08 < ABS(*(float *)(lVar15 + 0x34)))))) ||
      ((1e-08 < ABS(*(float *)(lVar15 + 0x38)) ||
       ((1e-08 < ABS(*(float *)(lVar15 + 0x40)) || (1e-08 < ABS(*(float *)(lVar15 + 0x44)))))))) ||
     (1e-08 < ABS(*(float *)(lVar15 + 0x48)))) {
    FUN_144906c86(&local_118,lVar15 + 0x20);
  }
  else {
    local_e8 = _DAT_14c846280;
    uStack_e0 = _DAT_14c846288;
    local_f8 = _DAT_14c846270;
    uStack_f0 = _DAT_14c846278;
    local_108 = _DAT_14c846260;
    uStack_100 = _DAT_14c846268;
    local_118 = _DAT_14c846250;
    uStack_110 = DAT_14c846258;
  }
  *(undefined4 *)(puVar17 + 0xc) = (undefined4)local_118;
  *(undefined4 *)((longlong)puVar17 + 100) = (undefined4)local_108;
  *(undefined4 *)(puVar17 + 0xd) = (undefined4)local_f8;
  *(undefined4 *)((longlong)puVar17 + 0x6c) = (undefined4)local_e8;
  *(undefined4 *)(puVar17 + 0xe) = local_118._4_4_;
  *(undefined4 *)((longlong)puVar17 + 0x74) = local_108._4_4_;
  *(undefined4 *)(puVar17 + 0xf) = local_f8._4_4_;
  *(undefined4 *)((longlong)puVar17 + 0x7c) = local_e8._4_4_;
  *(undefined4 *)(puVar17 + 0x10) = (undefined4)uStack_110;
  *(undefined4 *)((longlong)puVar17 + 0x84) = (undefined4)uStack_100;
  *(undefined4 *)(puVar17 + 0x11) = (undefined4)uStack_f0;
  *(undefined4 *)((longlong)puVar17 + 0x8c) = (undefined4)uStack_e0;
  *(undefined4 *)(puVar17 + 0x12) = uStack_110._4_4_;
  *(undefined4 *)((longlong)puVar17 + 0x94) = uStack_100._4_4_;
  *(undefined4 *)(puVar17 + 0x13) = uStack_f0._4_4_;
  *(undefined4 *)((longlong)puVar17 + 0x9c) = uStack_e0._4_4_;
  uVar3 = *(undefined8 *)(lVar15 + 0xa8);
  puVar17[0x14] = *(undefined8 *)(lVar15 + 0xa0);
  puVar17[0x15] = uVar3;
  uVar3 = *(undefined8 *)(lVar15 + 0x68);
  uVar8 = *(undefined8 *)(lVar15 + 0x70);
  uVar9 = *(undefined8 *)(lVar15 + 0x78);
  uVar10 = *(undefined8 *)(lVar15 + 0x80);
  uVar11 = *(undefined8 *)(lVar15 + 0x88);
  uVar4 = *(undefined4 *)(lVar15 + 0x90);
  uVar5 = *(undefined4 *)(lVar15 + 0x94);
  uVar6 = *(undefined4 *)(lVar15 + 0x98);
  uVar7 = *(undefined4 *)(lVar15 + 0x9c);
  puVar17[0x16] = *(undefined8 *)(lVar15 + 0x60);
  puVar17[0x17] = uVar3;
  puVar17[0x18] = uVar8;
  puVar17[0x19] = uVar9;
  puVar17[0x1a] = uVar10;
  puVar17[0x1b] = uVar11;
  *(undefined4 *)(puVar17 + 0x1c) = uVar4;
  *(undefined4 *)((longlong)puVar17 + 0xe4) = uVar5;
  *(undefined4 *)(puVar17 + 0x1d) = uVar6;
  *(undefined4 *)((longlong)puVar17 + 0xec) = uVar7;
  if (((((1e-08 < ABS(*(float *)(lVar15 + 0x60))) || (1e-08 < ABS(*(float *)(lVar15 + 100)))) ||
       (1e-08 < ABS(*(float *)(lVar15 + 0x68)))) ||
      (((1e-08 < ABS(*(float *)(lVar15 + 0x70)) || (1e-08 < ABS(*(float *)(lVar15 + 0x74)))) ||
       ((1e-08 < ABS(*(float *)(lVar15 + 0x78)) ||
        ((1e-08 < ABS(*(float *)(lVar15 + 0x80)) || (1e-08 < ABS(*(float *)(lVar15 + 0x84))))))))))
     || (1e-08 < ABS(*(float *)(lVar15 + 0x88)))) {
    FUN_144906c86(&local_118,(undefined8 *)(lVar15 + 0x60));
  }
  else {
    local_e8 = _DAT_14c846280;
    uStack_e0 = _DAT_14c846288;
    local_f8 = _DAT_14c846270;
    uStack_f0 = _DAT_14c846278;
    local_108 = _DAT_14c846260;
    uStack_100 = _DAT_14c846268;
    local_118 = _DAT_14c846250;
    uStack_110 = DAT_14c846258;
  }
  *(undefined4 *)(puVar17 + 0x1e) = (undefined4)local_118;
  *(undefined4 *)((longlong)puVar17 + 0xf4) = (undefined4)local_108;
  *(undefined4 *)(puVar17 + 0x1f) = (undefined4)local_f8;
  *(undefined4 *)((longlong)puVar17 + 0xfc) = (undefined4)local_e8;
  *(undefined4 *)(puVar17 + 0x20) = local_118._4_4_;
  *(undefined4 *)((longlong)puVar17 + 0x104) = local_108._4_4_;
  *(undefined4 *)(puVar17 + 0x21) = local_f8._4_4_;
  *(undefined4 *)((longlong)puVar17 + 0x10c) = local_e8._4_4_;
  *(undefined4 *)(puVar17 + 0x22) = (undefined4)uStack_110;
  *(undefined4 *)((longlong)puVar17 + 0x114) = (undefined4)uStack_100;
  *(undefined4 *)(puVar17 + 0x23) = (undefined4)uStack_f0;
  *(undefined4 *)((longlong)puVar17 + 0x11c) = (undefined4)uStack_e0;
  *(undefined4 *)(puVar17 + 0x24) = uStack_110._4_4_;
  *(undefined4 *)((longlong)puVar17 + 0x124) = uStack_100._4_4_;
  *(undefined4 *)(puVar17 + 0x25) = uStack_f0._4_4_;
  *(undefined4 *)((longlong)puVar17 + 300) = uStack_e0._4_4_;
  uVar3 = *(undefined8 *)(lVar15 + 0xb8);
  puVar17[0x26] = *(undefined8 *)(lVar15 + 0xb0);
  puVar17[0x27] = uVar3;
  local_118 = CONCAT44(*(float *)(lVar15 + 200) - *(float *)(lVar15 + 0xd4),
                       *(float *)(lVar15 + 0xc4) - *(float *)(lVar15 + 0xd0));
  uStack_110 = CONCAT44(*(float *)(lVar15 + 0xc4) + *(float *)(lVar15 + 0xd0),
                        *(float *)(lVar15 + 0xcc) - *(float *)(lVar15 + 0xd8));
  local_108 = CONCAT44(*(float *)(lVar15 + 0xcc) + *(float *)(lVar15 + 0xd8),
                       *(float *)(lVar15 + 200) + *(float *)(lVar15 + 0xd4));
  uStack_100 = CONCAT71(uStack_100._1_7_,1);
  FUN_1402e2fde(&local_118,&local_134,lVar15 + 0x20);
  *(undefined4 *)(puVar17 + 0x29) = *(undefined4 *)(lVar15 + 0xcc);
  puVar17[0x28] = *(undefined8 *)(lVar15 + 0xc4);
  puVar17[0x2a] = *(undefined8 *)(lVar15 + 0xd0);
  *(undefined4 *)(puVar17 + 0x2b) = *(undefined4 *)(lVar15 + 0xd8);
  *(float *)(puVar17 + 0x2c) = (local_134 + local_128) * 0.5;
  *(float *)((longlong)puVar17 + 0x164) = (local_130 + local_124) * 0.5;
  *(float *)(puVar17 + 0x2d) = (local_12c + local_120) * 0.5;
  *(float *)(puVar17 + 0x2e) = (local_128 - local_134) * 0.5;
  *(float *)((longlong)puVar17 + 0x174) = (local_124 - local_130) * 0.5;
  *(float *)(puVar17 + 0x2f) = (local_120 - local_12c) * 0.5;
  puVar17[0x30] = *(undefined8 *)(lVar15 + 0xdc);
  *(undefined4 *)(puVar17 + 0x31) = *(undefined4 *)(lVar15 + 0xe4);
  lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x18);
  uVar3 = *(undefined8 *)(lVar1 + 0x14);
  *(undefined4 *)(puVar17 + 0x33) = *(undefined4 *)(lVar1 + 0x1c);
  puVar17[0x32] = uVar3;
  if ((local_d0 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140797ba8 FUN_140797ba8 body=258 status=ok
// SIG undefined FUN_140797ba8(void)

void FUN_140797ba8(void)

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
              0x110) < DAT_14cc26630) {
    FUN_144b3d300(&DAT_14cc26630);
    if (DAT_14cc26630 == -1) {
      FUN_140797cac(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FShaderParameters";
      local_38 = 0;
      local_50 = 0x1a0;
      local_58 = 0x2a;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cc265b0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_14461c75d);
      _Init_thread_footer(&DAT_14cc26630);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140797cac FUN_140797cac body=226 status=ok
// SIG undefined FUN_140797cac(void)

longlong * FUN_140797cac(longlong *param_1)

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
  pcVar13 = FUN_14675c422;
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



// FUNCTION 140797d9e FUN_140797d9e body=40 status=ok
// SIG undefined FUN_140797d9e(void)

undefined8 FUN_140797d9e(undefined8 param_1,int param_2)

{
  FUN_140797dc6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140797dc6 FUN_140797dc6 body=106 status=ok
// SIG undefined FUN_140797dc6(void)

void FUN_140797dc6(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a890400;
  if (param_1[0x3f] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x3d] != 0) {
    FUN_1400020a8();
  }
  FUN_140797e30(param_1[0x3b],*(undefined4 *)(param_1 + 0x3c));
  if (param_1[0x3b] != 0) {
    FUN_1400020a8();
  }
  FUN_140595c52(param_1);
  return;
}



// FUNCTION 140797e30 FUN_140797e30 body=63 status=ok
// SIG undefined FUN_140797e30(void)

void FUN_140797e30(longlong param_1,int param_2)

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
      plVar1 = plVar1 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140797e70 FUN_140797e70 body=253 status=ok
// SIG undefined FUN_140797e70(void)

void FUN_140797e70(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  float fVar7;
  
  lVar3 = param_2[1];
  if ((lVar3 != 0) && (lVar4 = *param_2, lVar4 != 0)) {
    if ((longlong)*(int *)(lVar4 + 0x40) == 0) {
      iVar5 = 0;
    }
    else {
      lVar6 = 0;
      iVar5 = 0;
      do {
        iVar5 = iVar5 + *(int *)(*(longlong *)(lVar4 + 0x38) + 0x10 + lVar6);
        lVar6 = lVar6 + 0x20;
      } while ((longlong)*(int *)(lVar4 + 0x40) * 0x20 != lVar6);
    }
    if ((iVar5 <= *(int *)(lVar3 + 0x50)) && (param_2[0x18] != 0)) {
      fVar7 = *(float *)((longlong)param_2 + 0x14);
      if (fVar7 <= 0.0) {
        fVar7 = 0.0;
      }
      *(float *)((longlong)param_2 + 0x14) = fVar7;
      if ((int)param_2[4] != *(int *)(lVar3 + 0x10)) {
        plVar1 = param_2 + 3;
        FUN_14005ea14(plVar1);
        uVar2 = *(uint *)(param_2[1] + 0x10);
        iVar5 = (int)param_2[4];
        *(uint *)(param_2 + 4) = iVar5 + uVar2;
        if ((uint)(*(int *)((longlong)param_2 + 0x24) - iVar5) < uVar2) {
          FUN_14475e4ac(plVar1);
        }
        memset((void *)((longlong)iVar5 * 4 + *plVar1),0,(longlong)(int)uVar2 << 2);
      }
      FUN_140797f6e(param_1,param_2);
      return;
    }
  }
  return;
}



// FUNCTION 140797f6e FUN_140797f6e body=1067 status=ok
// SIG undefined FUN_140797f6e(void)

void FUN_140797f6e(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  float fVar10;
  undefined1 auStack_d8 [40];
  longlong local_b0;
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  longlong local_90;
  longlong local_88;
  undefined8 uStack_80;
  longlong local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar9 = *param_2;
  iVar4 = *(int *)((longlong)param_2 + 0x2c);
  if (iVar4 == -1) {
    iVar4 = -1;
    if (0 < (longlong)*(int *)(lVar9 + 0xe8)) {
      plVar7 = *(longlong **)(lVar9 + 0xe0);
      lVar5 = 0;
      do {
        if (*plVar7 == param_2[6]) {
          iVar4 = (int)lVar5;
          break;
        }
        lVar5 = lVar5 + 1;
        plVar7 = plVar7 + 5;
      } while (*(int *)(lVar9 + 0xe8) != lVar5);
    }
    *(int *)((longlong)param_2 + 0x2c) = iVar4;
  }
  if ((((int)param_2[7] == -1) && (*(longlong *)((longlong)param_2 + 0x3c) != 0)) && (iVar4 != -1))
  {
    if (0 < *(int *)(*(longlong *)(lVar9 + 0xe0) + 0x10 + (longlong)iVar4 * 0x28)) {
      lVar5 = *(longlong *)(lVar9 + 0xe0) + (longlong)iVar4 * 0x28;
      lVar8 = 0x10;
      lVar6 = 0;
      do {
        local_90 = *(longlong *)(*(longlong *)(lVar5 + 8) + lVar8);
        if (local_90 == 0) {
          local_88 = 0;
          uStack_80 = 0;
          uStack_80._0_4_ = 0;
        }
        else {
          FUN_1400021e4(&local_90);
        }
        iVar4 = (int)uStack_80 + -1;
        if ((int)uStack_80 == 0) {
          iVar4 = 0;
        }
        FUN_1446f82e2(&local_90,iVar4,local_88,1);
        lVar3 = local_90;
        lVar5 = *(longlong *)((longlong)param_2 + 0x3c);
        if (local_88 != 0) {
          FUN_1400020a8();
        }
        if (lVar5 == lVar3) {
          *(int *)(param_2 + 7) = (int)lVar6;
          break;
        }
        lVar6 = lVar6 + 1;
        lVar5 = *(longlong *)(lVar9 + 0xe0) + (longlong)*(int *)((longlong)param_2 + 0x2c) * 0x28;
        lVar8 = lVar8 + 0x28;
      } while (lVar6 < *(int *)(lVar5 + 0x10));
    }
  }
  if ((char)param_2[0x16] == '\x01') {
    *(undefined1 *)(param_2 + 0x16) = 0;
  }
  FUN_14079848a(&local_98);
  if (((param_2[6] == local_98) || (FUN_140798412(&local_a0), param_2[6] == local_a0)) ||
     (FUN_14079839a(&local_a8), param_2[6] == local_a8)) {
    (**(code **)(*param_1 + 0x2b0))(param_1,param_2);
    FUN_140798cd2(param_1,param_2);
  }
  else {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c9ab76c) && (FUN_144b3d300(&DAT_14c9ab76c), DAT_14c9ab76c == -1)) {
      FUN_1446f470e(&DAT_14c9ab764,L"Animated Death",1);
      _Init_thread_footer(&DAT_14c9ab76c);
    }
    if (param_2[6] == DAT_14c9ab764) {
      puVar1 = (undefined8 *)param_2[1];
      uVar2 = *puVar1;
      fVar10 = *(float *)((longlong)param_2 + 0x14) - *(float *)(param_2 + 2);
      if (fVar10 <= 0.0) {
        fVar10 = 0.0;
      }
      *(float *)((longlong)param_2 + 0x14) = fVar10;
      if (0 < *(int *)(puVar1 + 2)) {
        lVar9 = 0;
        do {
          lVar5 = *(longlong *)(puVar1[1] + lVar9 * 8);
          local_78 = 0;
          uStack_70 = 0;
          uStack_80 = CONCAT71(uStack_80._1_7_,1);
          local_88 = lVar5;
          FUN_14079857a(uVar2,&local_88);
          *(byte *)(lVar5 + 0x20) = ((int)uStack_70 != 0) << 2 | *(byte *)(lVar5 + 0x20) & 0xfb;
          if (local_78 != 0) {
            FUN_1400020a8();
          }
          lVar9 = lVar9 + 1;
        } while (lVar9 < *(int *)(puVar1 + 2));
      }
      FUN_140af34e6(param_2);
      FUN_14079976a(&local_88);
      param_2[6] = local_88;
      FUN_144a2be94(param_1,param_2);
      goto LAB_140798102;
    }
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c9ab760) && (FUN_144b3d300(&DAT_14c9ab760), DAT_14c9ab760 == -1)) {
      FUN_1446f470e(&DAT_14c9ab758,L"Animated",1);
      _Init_thread_footer(&DAT_14c9ab760);
    }
    if ((param_2[6] == DAT_14c9ab758) || (FUN_140798502(&local_b0), param_2[6] == local_b0)) {
      (**(code **)(*param_1 + 0x2b0))(param_1,param_2);
      FUN_1457447cc(param_1,param_2);
    }
    else {
      (**(code **)(*param_1 + 0x2b0))(param_1,param_2);
      FUN_144a2be94(param_1,param_2);
    }
  }
  *(float *)((longlong)param_2 + 0x14) =
       *(float *)(param_2 + 2) + *(float *)((longlong)param_2 + 0x14);
LAB_140798102:
  if ((local_60 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14079839a FUN_14079839a body=120 status=ok
// SIG undefined FUN_14079839a(void)

undefined8 * FUN_14079839a(undefined8 *param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9aba40) {
    FUN_144b3d300(&DAT_14c9aba40);
    if (DAT_14c9aba40 == -1) {
      FUN_1446f470e(&DAT_14c9aba38,L"On Ground",1);
      _Init_thread_footer(&DAT_14c9aba40);
    }
  }
  *param_1 = DAT_14c9aba38;
  return param_1;
}



// FUNCTION 140798412 FUN_140798412 body=120 status=ok
// SIG undefined FUN_140798412(void)

undefined8 * FUN_140798412(undefined8 *param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9aba30) {
    FUN_144b3d300(&DAT_14c9aba30);
    if (DAT_14c9aba30 == -1) {
      FUN_1446f470e(&DAT_14c9aba28,L"In Air",1);
      _Init_thread_footer(&DAT_14c9aba30);
    }
  }
  *param_1 = DAT_14c9aba28;
  return param_1;
}



// FUNCTION 14079848a FUN_14079848a body=120 status=ok
// SIG undefined FUN_14079848a(void)

undefined8 * FUN_14079848a(undefined8 *param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9aba58) {
    FUN_144b3d300(&DAT_14c9aba58);
    if (DAT_14c9aba58 == -1) {
      FUN_1446f470e(&DAT_14c9aba50,L"Auto Live",1);
      _Init_thread_footer(&DAT_14c9aba58);
    }
  }
  *param_1 = DAT_14c9aba50;
  return param_1;
}



// FUNCTION 140798502 FUN_140798502 body=120 status=ok
// SIG undefined FUN_140798502(void)

undefined8 * FUN_140798502(undefined8 *param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9aba64) {
    FUN_144b3d300(&DAT_14c9aba64);
    if (DAT_14c9aba64 == -1) {
      FUN_1446f470e(&DAT_14c9aba5c,L"Animated Ragdoll",1);
      _Init_thread_footer(&DAT_14c9aba64);
    }
  }
  *param_1 = DAT_14c9aba5c;
  return param_1;
}



// FUNCTION 14079857a FUN_14079857a body=507 status=ok
// SIG undefined FUN_14079857a(void)

void FUN_14079857a(longlong param_1,longlong *param_2)

{
  double dVar1;
  longlong lVar2;
  double dVar3;
  undefined **ppuVar4;
  undefined1 auStack_1d8 [40];
  double local_1b0;
  double local_1a8;
  double local_1a0;
  double local_198;
  double local_190;
  double local_188;
  undefined1 local_180;
  longlong local_178;
  longlong *local_170;
  double *local_168;
  double local_158;
  double local_150;
  double local_148;
  int local_10c;
  code *local_108;
  undefined8 local_f8;
  undefined **local_e8;
  longlong *local_e0;
  double *local_d8;
  undefined **local_c8;
  double *local_c0;
  longlong local_b8;
  longlong *local_b0;
  undefined ***local_a8;
  double local_a0;
  double local_98;
  undefined ***local_90;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  lVar2 = *param_2;
  if (lVar2 == 0) goto LAB_140798704;
  FUN_144941734(lVar2,&local_c8);
  dVar1 = *(double *)(lVar2 + 600);
  dVar3 = dVar1 + (double)local_a8;
  FUN_144941734(lVar2,&local_178);
  local_1b0 = *(double *)(lVar2 + 600);
  local_1a0 = local_148 - local_1b0;
  local_1a8 = local_150 - local_1b0;
  local_1b0 = local_158 - local_1b0;
  local_180 = 1;
  local_b8 = param_1 + 0x178;
  ppuVar4 = &PTR_LAB_14a1e3bd0;
  local_c8 = &PTR_LAB_14a1e3bd0;
  local_198 = dVar3;
  local_190 = local_a0 + dVar1;
  local_188 = local_98 + dVar1;
  local_178 = param_1;
  local_170 = param_2;
  local_168 = &local_1b0;
  local_c0 = &local_1b0;
  local_b0 = &local_178;
  local_a8 = &local_c8;
  local_90 = &local_c8;
  if (*(int *)(param_1 + 0x188) == -1) {
LAB_1407986a5:
    (*(code *)ppuVar4[4])(local_90,local_90 != &local_c8);
  }
  else {
    local_10c = *(int *)(param_1 + 0x188);
    FUN_1407997e2(&local_c8);
    if (local_90 != (undefined ***)0x0) {
      ppuVar4 = *local_90;
      goto LAB_1407986a5;
    }
  }
  local_f8 = 0;
  local_e8 = &PTR_LAB_14a1e3c00;
  local_108 = FUN_140798776;
  local_e0 = param_2;
  local_d8 = &local_1b0;
  AcquireSRWLockShared(*(PSRWLOCK *)(param_1 + 0x168));
  FUN_140798776(&local_e0,*(undefined8 *)(param_1 + 0x160));
  ReleaseSRWLockShared(*(PSRWLOCK *)(param_1 + 0x168));
LAB_140798704:
  if ((local_60 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140798776 FUN_140798776 body=1370 status=ok
// SIG undefined FUN_140798776(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_140798776(longlong *param_1,undefined ***param_2)

{
  uint *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  longlong lVar11;
  undefined ***pppuVar12;
  ulonglong *puVar13;
  uint uVar14;
  undefined **ppuVar15;
  uint uVar16;
  ulonglong uVar17;
  bool bVar18;
  undefined1 auStack_698 [40];
  undefined ***local_670;
  undefined1 **local_668;
  undefined ***local_660;
  double **local_658;
  double *local_650;
  undefined **local_648;
  double local_640;
  double local_638 [5];
  undefined1 local_610;
  undefined **local_608;
  int local_5fc;
  undefined1 *local_5f8 [2];
  undefined ***local_5e8;
  undefined **local_5d8;
  undefined ***local_5d0;
  undefined8 uStack_5c0;
  undefined4 auStack_5b8 [2];
  undefined **local_5b0;
  double *local_5a8;
  undefined ***local_5a0 [5];
  undefined ***local_578;
  double dStack_508;
  longlong local_500;
  undefined8 local_b8;
  int local_b0 [2];
  ulonglong local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined ***local_80;
  undefined ****local_78;
  undefined8 *local_70;
  undefined8 *local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_698;
  pppuVar12 = (undefined ***)*param_1;
  if (*(char *)(pppuVar12 + 1) != '\x01') {
    local_5a8 = (double *)param_1[1];
    local_5a0[1] = (undefined ***)&local_90;
    ppuVar15 = &PTR_LAB_14a1e3c40;
    local_5b0 = &PTR_LAB_14a1e3c40;
    local_5a0[0] = param_2;
    local_5a0[2] = &local_5b0;
    local_578 = &local_5b0;
    local_90 = (undefined **)param_2;
    uStack_88 = local_5a8;
    local_80 = pppuVar12;
    if (*(int *)(param_2 + 2) != -1) {
      local_5f8[0] = (undefined1 *)CONCAT44(local_5f8[0]._4_4_,*(int *)(param_2 + 2));
      FUN_142b739dc(&local_5b0);
      if (local_578 == (undefined ***)0x0) goto LAB_140798c75;
      ppuVar15 = *local_578;
    }
    (*(code *)ppuVar15[4])(local_578,local_578 != &local_5b0);
    goto LAB_140798c75;
  }
  local_5a8 = (double *)((ulonglong)local_5a8 & 0xffffffffffffff00);
  local_5a0[0] = (undefined ***)0x0;
  local_5b0 = &PTR_LAB_14a1e1920;
  lVar11 = 0x130;
  do {
    *(undefined8 *)((longlong)local_638 + lVar11) = 0;
    *(undefined8 *)((longlong)local_638 + lVar11 + 8) = 0;
    *(undefined8 *)((longlong)local_638 + lVar11 + 0x10) = 0;
    *(undefined8 *)((longlong)&uStack_5c0 + lVar11) = 0xffffffffffffffff;
    *(undefined4 *)((longlong)auStack_5b8 + lVar11) = 0xffffffff;
    *(undefined8 *)((longlong)&local_5b0 + lVar11) = 0;
    *(undefined8 *)((longlong)&local_5a8 + lVar11) = 0;
    *(undefined8 *)((longlong)local_5a0 + lVar11) = 0;
    *(undefined8 *)((longlong)local_5a0 + lVar11 + 8U) = 0;
    lVar11 = lVar11 + 0x138;
  } while (lVar11 != 0x610);
  local_5d0 = &local_5b0;
  local_b8 = 0;
  local_b0[0] = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_668 = local_5f8;
  local_5e8 = (undefined ***)0x0;
  local_5d8 = &PTR_LAB_14a1e3c20;
  local_5f8[0] = &LAB_142b73954;
  local_648 = *pppuVar12;
  local_660 = &local_608;
  local_650 = &local_640;
  local_610 = 0;
  puVar3 = local_648[0x4b];
  local_638[1] = (double)local_648[0x2c] - (double)puVar3;
  local_638[0] = (double)local_648[0x2b] - (double)puVar3;
  local_640 = (double)local_648[0x2a] - (double)puVar3;
  local_638[4] = (double)local_648[0x2c] + (double)puVar3;
  local_638[3] = (double)local_648[0x2b] + (double)puVar3;
  local_638[2] = (double)local_648[0x2a] + (double)puVar3;
  local_658 = &local_650;
  local_78 = &local_670;
  ppuVar15 = &PTR_LAB_14a1e38e0;
  local_90 = &PTR_LAB_14a1e38e0;
  local_670 = param_2;
  local_608 = local_648;
  uStack_88 = local_650;
  local_80 = param_2;
  local_70 = &local_90;
  local_58 = &local_90;
  if (*(int *)(param_2 + 2) == -1) {
LAB_140798946:
    (*(code *)ppuVar15[4])(local_58,local_58 != &local_90);
  }
  else {
    local_5fc = *(int *)(param_2 + 2);
    FUN_1406024d4(&local_90);
    if (local_58 != (undefined8 *)0x0) {
      ppuVar15 = (undefined **)*local_58;
      goto LAB_140798946;
    }
  }
  if (local_5f8[0] != (undefined1 *)0x0) {
    pppuVar12 = local_5e8;
    if (local_5e8 == (undefined ***)0x0) {
      pppuVar12 = &local_5d8;
    }
    (*(code *)(*pppuVar12)[2])();
  }
  if (0 < (longlong)(int)local_b8) {
    lVar11 = 0;
    do {
      if (0.0 < *(double *)((longlong)&dStack_508 + lVar11)) {
        plVar6 = (longlong *)*param_1;
        iVar4 = local_b0[(ulonglong)(local_500 == *plVar6) * 4];
        uVar17 = (&local_a8)[(ulonglong)(local_500 == *plVar6) * 2];
        iVar5 = (int)plVar6[3];
        *(uint *)(plVar6 + 3) = iVar5 + 1U;
        if (*(uint *)((longlong)plVar6 + 0x1c) < iVar5 + 1U) {
          FUN_141745f20(plVar6 + 2,iVar5);
        }
        lVar11 = plVar6[2];
        puVar1 = (uint *)(lVar11 + (longlong)iVar5 * 0x38);
        puVar2 = (undefined8 *)(lVar11 + (longlong)iVar5 * 0x38);
        *puVar2 = 0;
        uVar7 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
        puVar2[1] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
        puVar2[2] = uVar7;
        puVar2[3] = DAT_14c8464f0;
        uVar10 = DAT_14c8464e8._4_4_;
        uVar9 = (undefined4)DAT_14c8464e8;
        uVar8 = DAT_14c8464e0._4_4_;
        *(undefined4 *)(puVar2 + 4) = (undefined4)DAT_14c8464e0;
        *(undefined4 *)((longlong)puVar2 + 0x24) = uVar8;
        *(undefined4 *)(puVar2 + 5) = uVar9;
        *(undefined4 *)((longlong)puVar2 + 0x2c) = uVar10;
        puVar2[6] = DAT_14c8464f0;
        if (iVar4 == 2) {
LAB_140798b60:
          if (uVar17 == 0) goto LAB_140798bf7;
          uVar16 = *(uint *)(uVar17 + 0xc);
          *puVar1 = uVar16;
          if ((int)uVar16 < DAT_14c9647dc) {
            lVar11 = (ulonglong)((uVar16 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar16 >> 0x10) * 8);
          }
          else {
            lVar11 = 0;
          }
          uVar16 = *(uint *)(lVar11 + 0x10);
          if (*(uint *)(lVar11 + 0x10) == 0) {
            LOCK();
            iVar4 = DAT_14c964868 + 1;
            UNLOCK();
            uVar14 = DAT_14c964868 + 1;
            bVar18 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar4;
            if (bVar18) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,uVar14);
            }
            LOCK();
            uVar16 = *(uint *)(lVar11 + 0x10);
            bVar18 = uVar16 == 0;
            if (bVar18) {
              *(uint *)(lVar11 + 0x10) = uVar14;
              uVar16 = 0;
            }
            UNLOCK();
            if (bVar18) {
              uVar16 = uVar14;
            }
          }
        }
        else {
          if (((((iVar4 == 3) && (uVar17 != 0)) && (uVar17 >> 0x20 != 0)) &&
              ((uVar16 = (uint)uVar17, -1 < (int)uVar16 && ((int)uVar16 < DAT_14c9647dc)))) &&
             ((puVar13 = (ulonglong *)
                         ((ulonglong)((uVar16 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar16 >> 0xd & 0x3fff8))),
              puVar13 != (ulonglong *)0x0 &&
              (((int)puVar13[2] == (int)(uVar17 >> 0x20) && ((puVar13[1] & 0x10200000) == 0)))))) {
            uVar17 = *puVar13;
            goto LAB_140798b60;
          }
LAB_140798bf7:
          *puVar1 = 0;
          uVar16 = 0;
        }
        puVar1[1] = uVar16;
        FUN_1402724f4(local_5a0 + 1,&local_90,local_500 == *(longlong *)*param_1);
        puVar2[3] = local_80;
        *(undefined4 *)(puVar2 + 1) = (undefined4)local_90;
        *(undefined4 *)((longlong)puVar2 + 0xc) = local_90._4_4_;
        *(undefined4 *)(puVar2 + 2) = (undefined4)uStack_88;
        *(undefined4 *)((longlong)puVar2 + 0x14) = uStack_88._4_4_;
        FUN_14571e7c0(local_5a0 + 1,&local_90,local_500 == *(longlong *)*param_1);
        puVar2[6] = local_80;
        *(undefined4 *)(puVar2 + 4) = (undefined4)local_90;
        *(undefined4 *)((longlong)puVar2 + 0x24) = local_90._4_4_;
        *(undefined4 *)(puVar2 + 5) = (undefined4)uStack_88;
        *(undefined4 *)((longlong)puVar2 + 0x2c) = uStack_88._4_4_;
        break;
      }
      lVar11 = lVar11 + 0x138;
    } while ((longlong)(int)local_b8 * 0x138 - lVar11 != 0);
  }
LAB_140798c75:
  if ((local_50 ^ (ulonglong)auStack_698) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140798cd2 FUN_140798cd2 body=1548 status=ok
// SIG undefined FUN_140798cd2(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_140798cd2(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  longlong *plVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong lVar13;
  float fVar14;
  double dVar15;
  undefined8 auStack_1d0 [4];
  undefined8 uStack_1b0;
  undefined1 auStack_1a8 [8];
  longlong local_1a0;
  int local_198;
  undefined1 *local_190;
  longlong *local_188;
  longlong local_180;
  int local_178;
  undefined1 *local_170;
  longlong *local_168;
  longlong local_160;
  int *local_158;
  longlong *local_150;
  longlong local_148;
  longlong local_140;
  longlong *local_138;
  float *local_130;
  undefined1 **local_128;
  undefined1 *local_120;
  int local_114;
  longlong local_110;
  float local_108;
  char local_104;
  undefined1 local_fc;
  int local_f8;
  char local_f4;
  undefined1 local_ec;
  longlong local_e8;
  int local_e0;
  longlong local_d8 [12];
  char local_78;
  ulonglong local_60;
  
  puVar9 = auStack_1a8;
  local_60 = DAT_14c707940 ^ (ulonglong)&local_128;
  lVar13 = *param_2;
  if (*(int *)(lVar13 + 0xe8) != 0) {
    lVar12 = param_2[1];
    auStack_1d0[0] = 0x140798d32;
    local_110 = lVar12;
    iVar3 = FUN_140415702(lVar12);
    auStack_1d0[0] = 0x140798d46;
    iVar4 = FUN_1404157f4(lVar12);
    auStack_1d0[0] = 0x140798d62;
    local_114 = iVar4 + iVar3;
    iVar5 = FUN_140415702(lVar12);
    auStack_1d0[0] = 0x140798d76;
    iVar6 = FUN_1404157f4(lVar12);
    puVar9 = auStack_1a8;
    if (iVar6 + iVar5 != 0) {
      puVar10 = (undefined1 *)0x0;
      auStack_1d0[0] = 0x140798d92;
      iVar5 = FUN_140415702(lVar12);
      auStack_1d0[0] = 0x140798da7;
      iVar6 = FUN_1404157f4(lVar12);
      uStack_1b0 = 0x140798dc1;
      lVar1 = -((longlong)(iVar6 + iVar5) * 8 + 0x1eU & 0xfffffffffffffff0);
      local_120 = auStack_1a8 + lVar1;
      puVar9 = auStack_1a8 + lVar1;
      *(undefined8 *)((longlong)auStack_1d0 + lVar1) = 0x140798ddd;
      memset(auStack_1a8 + lVar1,0,(longlong)(iVar4 + iVar3) << 3);
      *(undefined8 *)((longlong)auStack_1d0 + lVar1) = 0x140798de7;
      iVar3 = FUN_140415702(lVar12,0);
      *(undefined8 *)((longlong)auStack_1d0 + lVar1) = 0x140798dfc;
      iVar4 = FUN_1404157f4(lVar12,0);
      lVar12 = local_110;
      if (iVar4 + iVar3 != 0) {
        *(undefined8 *)((longlong)auStack_1d0 + lVar1) = 0x140798e17;
        iVar3 = FUN_140415702(lVar12,0);
        *(undefined8 *)((longlong)auStack_1d0 + lVar1) = 0x140798e2b;
        iVar4 = FUN_1404157f4(lVar12,0);
        *(undefined8 *)(auStack_1a8 + lVar1 + -8) = 0x140798e44;
        lVar12 = -((longlong)(iVar4 + iVar3) * 8 + 0x1eU & 0xfffffffffffffff0);
        puVar9 = auStack_1a8 + lVar12 + lVar1;
        puVar10 = auStack_1a8 + lVar12 + lVar1;
      }
      lVar12 = local_110;
      *(undefined8 *)(puVar9 + -0x28) = 0x140798e5d;
      FUN_1407992e4(lVar12,puVar10);
      local_130 = &local_108;
      local_104 = '\0';
      local_fc = 0;
      local_f4 = '\0';
      local_ec = 0;
      local_e8 = 0;
      local_e0 = -1;
      local_78 = '\0';
      local_158 = &local_114;
      local_128 = &local_120;
      iVar3 = (int)param_2[4];
      if ((longlong)iVar3 == 0) {
        fVar14 = 0.0;
      }
      else {
        fVar14 = 0.0;
        lVar12 = 0;
        do {
          fVar14 = fVar14 + *(float *)(param_2[3] + lVar12);
          lVar12 = lVar12 + 4;
        } while ((longlong)iVar3 * 4 - lVar12 != 0);
      }
      iVar4 = 1;
      if (1 < iVar3) {
        iVar4 = iVar3;
      }
      local_150 = &local_110;
      local_148 = lVar13;
      local_140 = param_1;
      local_138 = param_2;
      if (fVar14 / (float)iVar4 < 1e-08) {
        *(undefined8 *)(puVar9 + -0x28) = 0x1407990e6;
        FUN_140798412(&local_160);
        if ((longlong)*(int *)(lVar13 + 0xe8) != 0) {
          plVar8 = *(longlong **)(lVar13 + 0xe0);
          lVar12 = (longlong)*(int *)(lVar13 + 0xe8) * 0x28;
LAB_140799109:
          if (*plVar8 != local_160) goto code_r0x000140799112;
          if (((plVar8 != (longlong *)0x0) && ((int)plVar8[4] != 0)) && (param_2[1] != 0)) {
            *(undefined8 *)(puVar9 + -0x28) = 0x140799216;
            uVar7 = FUN_1407996b2();
            *(undefined8 *)(puVar9 + -0x28) = 0x140799227;
            FUN_140799e52(plVar8 + 3,uVar7,param_2,&local_108);
            if (local_d8 != param_2 + 10) {
              if (local_78 == '\x01') {
                plVar8 = local_d8;
                plVar11 = param_2 + 10;
                for (lVar12 = 0xc; lVar12 != 0; lVar12 = lVar12 + -1) {
                  *plVar11 = *plVar8;
                  plVar8 = plVar8 + 1;
                  plVar11 = plVar11 + 1;
                }
                uVar2 = 1;
LAB_14079924f:
                *(undefined1 *)(param_2 + 0x16) = uVar2;
                goto LAB_14079911c;
              }
              if ((char)param_2[0x16] == '\x01') {
                uVar2 = 0;
                goto LAB_14079924f;
              }
            }
          }
        }
LAB_14079911c:
        if (local_e0 == -1) {
          lVar12 = param_2[1];
          local_170 = &LAB_142b513bc;
          local_168 = &local_160;
          *(undefined8 *)(puVar9 + -0x28) = 0x140799279;
          FUN_144a2bfce(lVar12);
        }
        else {
          iVar3 = 0xd;
          if (local_e0 < 0xd) {
            iVar3 = local_e0;
          }
          local_178 = 0;
          if (0 < local_e0 - iVar3) {
            local_178 = local_e0 - iVar3;
          }
          local_180 = (longlong)iVar3 * 8 + local_e8;
          *(undefined8 *)(puVar9 + -0x28) = 0x140799161;
          FUN_140799516(&local_158);
        }
        param_1 = param_1 + 0x28;
      }
      else {
        *(undefined8 *)(puVar9 + -0x28) = 0x140798f0e;
        FUN_14079839a();
        if ((longlong)*(int *)(lVar13 + 0xe8) != 0) {
          plVar8 = *(longlong **)(lVar13 + 0xe0);
          lVar12 = (longlong)*(int *)(lVar13 + 0xe8) * 0x28;
LAB_140798f31:
          if (*plVar8 != local_160) goto code_r0x000140798f3a;
          if (((plVar8 != (longlong *)0x0) && ((int)plVar8[4] != 0)) && (param_2[1] != 0)) {
            *(undefined8 *)(puVar9 + -0x28) = 0x1407991a3;
            uVar7 = FUN_1407996b2();
            *(undefined8 *)(puVar9 + -0x28) = 0x1407991b4;
            FUN_140799e52(plVar8 + 3,uVar7,param_2,&local_108);
            if (local_d8 != param_2 + 10) {
              if (local_78 == '\x01') {
                plVar8 = local_d8;
                plVar11 = param_2 + 10;
                for (lVar12 = 0xc; lVar12 != 0; lVar12 = lVar12 + -1) {
                  *plVar11 = *plVar8;
                  plVar8 = plVar8 + 1;
                  plVar11 = plVar11 + 1;
                }
                uVar2 = 1;
LAB_1407991e0:
                *(undefined1 *)(param_2 + 0x16) = uVar2;
                goto LAB_140798f44;
              }
              if ((char)param_2[0x16] == '\x01') {
                uVar2 = 0;
                goto LAB_1407991e0;
              }
            }
          }
        }
LAB_140798f44:
        local_108 = 0.0;
        local_104 = '\x01';
        if (local_e0 == -1) {
          lVar12 = param_2[1];
          local_190 = &LAB_142b513e6;
          local_188 = &local_160;
          *(undefined8 *)(puVar9 + -0x28) = 0x1407992de;
          FUN_144a2bfce(lVar12);
        }
        else {
          iVar3 = 0xd;
          if (local_e0 < 0xd) {
            iVar3 = local_e0;
          }
          local_198 = 0;
          if (0 < local_e0 - iVar3) {
            local_198 = local_e0 - iVar3;
          }
          local_1a0 = (longlong)iVar3 * 8 + local_e8;
          *(undefined8 *)(puVar9 + -0x28) = 0x140798f94;
          FUN_140799516(&local_158);
        }
        param_1 = param_1 + 0x40;
      }
      lVar12 = local_110;
      *(undefined8 *)(puVar9 + -0x28) = 0x140798fac;
      FUN_144a2c094(param_1,lVar12);
      iVar3 = (int)param_2[4];
      if ((longlong)iVar3 == 0) {
        fVar14 = 0.0;
      }
      else {
        fVar14 = 0.0;
        lVar12 = 0;
        do {
          fVar14 = fVar14 + *(float *)(param_2[3] + lVar12);
          lVar12 = lVar12 + 4;
        } while ((longlong)iVar3 * 4 - lVar12 != 0);
      }
      iVar4 = 1;
      if (1 < iVar3) {
        iVar4 = iVar3;
      }
      if (fVar14 / (float)iVar4 < 1e-08) {
        *(undefined8 *)(puVar9 + -0x28) = 0x140799173;
        FUN_140798412(&local_160);
      }
      else {
        *(undefined8 *)(puVar9 + -0x28) = 0x14079900a;
        FUN_14079839a();
      }
      param_2[6] = local_160;
      if (local_f4 == '\x01') {
        if ((longlong)*(int *)(lVar13 + 0xe8) != 0) {
          plVar8 = *(longlong **)(lVar13 + 0xe0);
          lVar13 = (longlong)*(int *)(lVar13 + 0xe8) * 0x28;
          do {
            if (*plVar8 == local_160) {
              if (plVar8 != (longlong *)0x0) {
                lVar13 = plVar8[1];
                *(undefined8 *)(puVar9 + -0x28) = 0x14079906a;
                lVar13 = FUN_140257578((longlong)local_f8 * 0x28 + lVar13);
                if (lVar13 != 0) {
                  *(undefined8 *)((longlong)param_2 + 0x3c) = *(undefined8 *)(lVar13 + 0x18);
                }
              }
              break;
            }
            plVar8 = plVar8 + 5;
            lVar13 = lVar13 + -0x28;
          } while (lVar13 != 0);
        }
      }
      else {
        *(undefined4 *)(param_2 + 7) = 0xffffffff;
      }
      lVar13 = local_110;
      puVar10 = local_120;
      if (local_104 == '\0') {
        dVar15 = 1.0;
      }
      else {
        dVar15 = (double)local_108;
      }
      *(undefined8 *)(puVar9 + -0x28) = 0x1407990a1;
      FUN_1407993e2(lVar13,puVar10,dVar15);
    }
  }
  if ((local_60 ^ (ulonglong)&local_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)(puVar9 + -0x28) = &UNK_1407990dc;
    FUN_144d8e3a0();
  }
  return;
code_r0x000140799112:
  plVar8 = plVar8 + 5;
  lVar12 = lVar12 + -0x28;
  if (lVar12 == 0) goto LAB_14079911c;
  goto LAB_140799109;
code_r0x000140798f3a:
  plVar8 = plVar8 + 5;
  lVar12 = lVar12 + -0x28;
  if (lVar12 == 0) goto LAB_140798f44;
  goto LAB_140798f31;
}



// FUNCTION 1407992e4 FUN_1407992e4 body=253 status=ok
// SIG undefined FUN_1407992e4(void)

int FUN_1407992e4(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  
  if ((longlong)*(int *)(param_1 + 0x30) == 0) {
    iVar3 = 0;
  }
  else {
    plVar4 = *(longlong **)(param_1 + 0x28);
    plVar1 = plVar4 + *(int *)(param_1 + 0x30);
    iVar3 = 0;
    do {
      lVar2 = *plVar4;
      lVar5 = 0;
      do {
        if (((*(int *)(lVar2 + 0xf30 + lVar5 * 4) != 2) ||
            (lVar6 = *(longlong *)(lVar2 + 0x20), (*(byte *)(lVar6 + 0x20) & 1) != 0)) ||
           (((ABS(*(double *)(lVar6 + 0x60)) <= 9.99999993922529e-09 &&
             (((ABS(*(double *)(lVar6 + 0x68)) <= 9.99999993922529e-09 &&
               (ABS(*(double *)(lVar6 + 0x70)) <= 9.99999993922529e-09)) &&
              (ABS(*(double *)(lVar6 + 0x48)) <= 9.99999993922529e-09)))) &&
            ((ABS(*(double *)(lVar6 + 0x50)) <= 9.99999993922529e-09 &&
             (ABS(*(double *)(lVar6 + 0x58)) <= 9.99999993922529e-09)))))) {
          lVar6 = (longlong)iVar3;
          *(undefined8 *)(param_2 + lVar6 * 8) = *(undefined8 *)(lVar2 + 0x738 + lVar5 * 8);
          iVar3 = iVar3 + 2;
          *(undefined8 *)(param_2 + 8 + lVar6 * 8) = *(undefined8 *)(lVar2 + 0x708 + lVar5 * 8);
        }
        lVar5 = lVar5 + 1;
      } while (lVar5 != 6);
      plVar4 = plVar4 + 1;
    } while (plVar4 != plVar1);
  }
  return iVar3;
}



// FUNCTION 1407993e2 FUN_1407993e2 body=307 status=ok
// SIG undefined FUN_1407993e2(void)

int FUN_1407993e2(longlong param_1,longlong param_2,double param_3)

{
  longlong *plVar1;
  double dVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  double dVar9;
  
  if ((longlong)*(int *)(param_1 + 0x30) == 0) {
    iVar5 = 0;
  }
  else {
    plVar6 = *(longlong **)(param_1 + 0x28);
    plVar1 = plVar6 + *(int *)(param_1 + 0x30);
    iVar5 = 0;
    do {
      lVar4 = *plVar6;
      lVar7 = -0x18;
      do {
        iVar3 = *(int *)(lVar4 + 0xf48 + lVar7);
        if (iVar3 == 2) {
          lVar8 = *(longlong *)(lVar4 + 0x20);
          if (((*(byte *)(lVar8 + 0x20) & 1) != 0) ||
             ((((ABS(*(double *)(lVar8 + 0x60)) <= 9.99999993922529e-09 &&
                (ABS(*(double *)(lVar8 + 0x68)) <= 9.99999993922529e-09)) &&
               (ABS(*(double *)(lVar8 + 0x70)) <= 9.99999993922529e-09)) &&
              (((ABS(*(double *)(lVar8 + 0x48)) <= 9.99999993922529e-09 &&
                (ABS(*(double *)(lVar8 + 0x50)) <= 9.99999993922529e-09)) &&
               (ABS(*(double *)(lVar8 + 0x58)) <= 9.99999993922529e-09)))))) {
LAB_14079948b:
            dVar9 = *(double *)(param_2 + (longlong)iVar5 * 8);
            goto LAB_140799461;
          }
        }
        else {
          if (iVar3 != 1) goto LAB_14079948b;
          dVar9 = *(double *)(param_2 + (longlong)iVar5 * 8);
          dVar2 = *(double *)(lVar4 + 0xf30 + lVar7 * 2);
          if (dVar2 <= dVar9) {
            dVar9 = dVar2;
          }
          dVar2 = *(double *)(lVar4 + 0xf00 + lVar7 * 2);
          if (dVar9 <= dVar2) {
            dVar9 = dVar2;
          }
LAB_140799461:
          lVar8 = (longlong)iVar5;
          *(double *)(lVar4 + 0x768 + lVar7 * 2) = dVar9;
          iVar5 = iVar5 + 2;
          *(double *)(lVar4 + 0x738 + lVar7 * 2) = *(double *)(param_2 + 8 + lVar8 * 8) * param_3;
        }
        lVar7 = lVar7 + 4;
      } while (lVar7 != 0);
      plVar6 = plVar6 + 1;
    } while (plVar6 != plVar1);
  }
  return iVar5;
}



// FUNCTION 140799516 FUN_140799516 body=407 status=ok
// SIG undefined FUN_140799516(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_140799516(undefined8 *param_1,undefined8 *param_2)

{
  double dVar1;
  undefined8 uVar2;
  void *_Src;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong *puVar9;
  undefined1 *_Dst;
  longlong lVar10;
  int iVar11;
  float fVar12;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)&local_38;
  puVar9 = &local_38;
  if ((*(int *)*param_1 != 0) && (puVar9 = &local_38, *(int *)(param_2 + 1) != 0)) {
    uVar2 = *(undefined8 *)param_1[1];
    _Dst = (undefined1 *)0x0;
    iVar3 = FUN_140415702(uVar2,0);
    iVar4 = FUN_1404157f4(uVar2,0);
    puVar9 = &local_38;
    iVar4 = iVar4 + iVar3;
    iVar3 = *(int *)(param_1[2] + 0x28);
    iVar11 = iVar3 * 2;
    iVar5 = iVar11;
    if (iVar11 < iVar4) {
      iVar5 = iVar4;
    }
    if (iVar5 != 0) {
      lVar8 = -((longlong)iVar5 * 8 + 0x1eU & 0xfffffffffffffff0);
      puVar9 = (ulonglong *)((longlong)&local_38 + lVar8);
      _Dst = (undefined1 *)((longlong)&local_38 + lVar8);
    }
    if (iVar4 <= iVar11) {
      _Src = (void *)*param_2;
      *(undefined8 *)((longlong)puVar9 + -0x28) = 0x1407995d3;
      memcpy(_Dst,_Src,(longlong)iVar3 << 4);
      if (iVar4 < iVar11) {
        uVar2 = param_1[4];
        *(undefined8 *)((longlong)puVar9 + -0x28) = 0x1407995ec;
        FUN_1412d64f0(uVar2,_Dst);
      }
      lVar8 = *(longlong *)(param_1[4] + 8);
      if (0 < *(int *)(lVar8 + 0x20)) {
        lVar6 = 0;
        iVar3 = 0;
        do {
          lVar8 = *(longlong *)(*(longlong *)(lVar8 + 0x18) + lVar6 * 8);
          lVar10 = 0;
          do {
            if (*(int *)(lVar8 + 0xf30 + lVar10 * 4) != 2) {
              fVar12 = 1.0;
              if (*(char *)((float *)param_1[5] + 1) == '\x01') {
                fVar12 = *(float *)param_1[5];
              }
              lVar7 = (longlong)iVar3;
              dVar1 = *(double *)(_Dst + lVar7 * 8 + 8);
              *(undefined8 *)(*(longlong *)param_1[6] + lVar7 * 8) =
                   *(undefined8 *)(_Dst + lVar7 * 8);
              *(double *)(*(longlong *)param_1[6] + (lVar7 + 1) * 8) = (double)fVar12 * dVar1;
              iVar3 = iVar3 + 2;
            }
            lVar10 = lVar10 + 1;
          } while (lVar10 != 6);
          lVar6 = lVar6 + 1;
          lVar8 = *(longlong *)(param_1[4] + 8);
        } while (lVar6 < *(int *)(lVar8 + 0x20));
      }
    }
  }
  if ((local_38 ^ (ulonglong)&local_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)((longlong)puVar9 + -0x28) = &UNK_1407996ad;
  FUN_144d8e3a0();
}



// FUNCTION 1407996b2 FUN_1407996b2 body=182 status=ok
// SIG undefined FUN_1407996b2(void)

char FUN_1407996b2(longlong param_1)

{
  char cVar1;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14079839a(&local_20);
  cVar1 = '\0';
  if (local_20 != param_1) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c9ab76c) {
      FUN_144b3d300(&DAT_14c9ab76c);
      if (DAT_14c9ab76c == -1) {
        FUN_1446f470e(&DAT_14c9ab764,L"Animated Death",1);
        _Init_thread_footer(&DAT_14c9ab76c);
      }
    }
    cVar1 = (DAT_14c9ab764 == param_1) + '\x01';
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return cVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14079976a FUN_14079976a body=120 status=ok
// SIG undefined FUN_14079976a(void)

undefined8 * FUN_14079976a(undefined8 *param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9aba4c) {
    FUN_144b3d300(&DAT_14c9aba4c);
    if (DAT_14c9aba4c == -1) {
      FUN_1446f470e(&DAT_14c9aba44,L"No Animation",1);
      _Init_thread_footer(&DAT_14c9aba4c);
    }
  }
  *param_1 = DAT_14c9aba44;
  return param_1;
}



// FUNCTION 1407997e2 FUN_1407997e2 body=1647 status=ok
// SIG undefined FUN_1407997e2(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_1407997e2(longlong param_1,int *param_2)

{
  longlong lVar1;
  uint *puVar2;
  undefined4 *puVar3;
  double dVar4;
  double dVar5;
  int iVar6;
  double *pdVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  uint uVar14;
  longlong lVar15;
  longlong lVar16;
  uint uVar17;
  longlong *plVar18;
  longlong *plVar19;
  longlong lVar20;
  bool bVar21;
  undefined *puStack_630;
  undefined8 auStack_628 [4];
  undefined4 local_608;
  undefined4 uStack_604;
  undefined4 uStack_600;
  undefined4 uStack_5fc;
  undefined8 local_5f8;
  double local_5e8;
  double local_5e0;
  double local_5d8;
  undefined8 uStack_5b8;
  undefined4 auStack_5b0 [2];
  undefined **local_5a8;
  undefined1 local_5a0 [8];
  double local_598;
  double local_590 [18];
  double dStack_500;
  longlong local_4f8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  longlong local_90;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_628;
  pdVar7 = *(double **)(param_1 + 8);
  lVar20 = *(longlong *)(param_1 + 0x10);
  lVar15 = *(longlong *)(lVar20 + 0x28);
  lVar16 = (longlong)*param_2 * 0x50;
  dVar4 = *(double *)(lVar15 + 0x18 + lVar16);
  if ((((pdVar7[3] <= dVar4 && dVar4 != pdVar7[3]) ||
       (lVar1 = lVar15 + lVar16,
       *(double *)(lVar1 + 0x30) <= *pdVar7 && *pdVar7 != *(double *)(lVar1 + 0x30))) ||
      (pdVar7[4] <= *(double *)(lVar1 + 0x20) && *(double *)(lVar1 + 0x20) != pdVar7[4])) ||
     (((*(double *)(lVar1 + 0x38) <= pdVar7[1] && pdVar7[1] != *(double *)(lVar1 + 0x38) ||
       (pdVar7[5] <= *(double *)(lVar1 + 0x28) && *(double *)(lVar1 + 0x28) != pdVar7[5])) ||
      (*(double *)(lVar1 + 0x40) <= pdVar7[2] && pdVar7[2] != *(double *)(lVar1 + 0x40)))))
  goto LAB_140799901;
  if (*(int *)(lVar15 + 0xc + lVar16) != -1) {
    local_5a8 = (undefined **)CONCAT44(local_5a8._4_4_,*(undefined4 *)(lVar15 + 8 + lVar16));
    plVar18 = *(longlong **)(*(longlong *)(param_1 + 0x20) + 0x38);
    if (plVar18 != (longlong *)0x0) {
      puStack_630 = (undefined *)0x1407998d8;
      (**(code **)(*plVar18 + 0x10))(plVar18,&local_5a8);
      local_5a8 = (undefined **)
                  CONCAT44(local_5a8._4_4_,
                           *(undefined4 *)(*(longlong *)(lVar20 + 0x28) + 0xc + lVar16));
      plVar18 = *(longlong **)(*(longlong *)(param_1 + 0x20) + 0x38);
      if (plVar18 != (longlong *)0x0) {
        puStack_630 = (undefined *)0x140799901;
        (**(code **)(*plVar18 + 0x10))(plVar18,&local_5a8);
        goto LAB_140799901;
      }
    }
                    /* WARNING: Subroutine does not return */
    puStack_630 = (undefined *)0x140799e0c;
    std::_Xbad_function_call();
  }
  plVar18 = *(longlong **)(param_1 + 0x18);
  puVar8 = (undefined8 *)plVar18[1];
  lVar20 = *(longlong *)(*(longlong *)(*plVar18 + 0x1a0) + lVar16);
  if (*(char *)(puVar8 + 1) == '\x01') {
    local_5a0[0] = 0;
    local_598 = 0.0;
    local_5a8 = &PTR_LAB_14a1e1920;
    lVar15 = 0x130;
    do {
      *(undefined8 *)((longlong)&puStack_630 + lVar15) = 0;
      *(undefined8 *)((longlong)auStack_628 + lVar15) = 0;
      *(undefined8 *)((longlong)auStack_628 + lVar15 + 8U) = 0;
      *(undefined8 *)((longlong)&uStack_5b8 + lVar15) = 0xffffffffffffffff;
      *(undefined4 *)((longlong)auStack_5b0 + lVar15) = 0xffffffff;
      *(undefined8 *)(local_5a0 + lVar15 + -8) = 0;
      *(undefined8 *)(local_5a0 + lVar15) = 0;
      *(undefined8 *)((longlong)&local_598 + lVar15) = 0;
      *(undefined8 *)((longlong)local_590 + lVar15) = 0;
      lVar15 = lVar15 + 0x138;
    } while (lVar15 != 0x610);
    local_b0 = 0;
    local_a0 = *puVar8;
    local_a8 = 5;
    local_98 = 5;
    puStack_630 = (undefined *)0x140799a1c;
    local_90 = lVar20;
    FUN_1404453ed(local_a0,lVar20,&local_5a8);
    if (0 < (longlong)(int)local_b0) {
      lVar15 = 0;
      do {
        if (0.0 < *(double *)((longlong)&dStack_500 + lVar15)) {
          lVar15 = plVar18[1];
          iVar6 = *(int *)(lVar15 + 0x18);
          *(uint *)(lVar15 + 0x18) = iVar6 + 1U;
          if (*(uint *)(lVar15 + 0x1c) < iVar6 + 1U) {
            puStack_630 = (undefined *)0x140799bce;
            FUN_141745f20((longlong *)(lVar15 + 0x10),iVar6);
          }
          lVar15 = *(longlong *)(lVar15 + 0x10);
          puVar2 = (uint *)(lVar15 + (longlong)iVar6 * 0x38);
          puVar8 = (undefined8 *)(lVar15 + (longlong)iVar6 * 0x38);
          *puVar8 = 0;
          puVar8[3] = DAT_14c8464f0;
          uVar10 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
          puVar8[1] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
          puVar8[2] = uVar10;
          puVar8[6] = DAT_14c8464f0;
          uVar13 = DAT_14c8464e8._4_4_;
          uVar12 = (undefined4)DAT_14c8464e8;
          uVar11 = DAT_14c8464e0._4_4_;
          *(undefined4 *)(puVar8 + 4) = (undefined4)DAT_14c8464e0;
          *(undefined4 *)((longlong)puVar8 + 0x24) = uVar11;
          *(undefined4 *)(puVar8 + 5) = uVar12;
          *(undefined4 *)((longlong)puVar8 + 0x2c) = uVar13;
          if (*(int *)(lVar20 + 0x10) == 3) {
            uVar9 = *(ulonglong *)(lVar20 + 0x18);
            if (((uVar9 >> 0x20 != 0) && (uVar14 = (uint)uVar9, -1 < (int)uVar14)) &&
               (((int)uVar14 < DAT_14c9647dc &&
                (((plVar19 = (longlong *)
                             ((ulonglong)((uVar14 & 0xffff) * 0x18) +
                             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar14 >> 0xd & 0x3fff8))),
                  plVar19 != (longlong *)0x0 && ((int)plVar19[2] == (int)(uVar9 >> 0x20))) &&
                 ((*(uint *)(plVar19 + 1) & 0x10200000) == 0)))))) goto LAB_140799c7a;
LAB_140799c34:
            *puVar2 = 0;
            uVar14 = 0;
          }
          else {
            if (*(int *)(lVar20 + 0x10) != 2) goto LAB_140799c34;
            plVar19 = (longlong *)(lVar20 + 0x18);
LAB_140799c7a:
            if (*plVar19 == 0) goto LAB_140799c34;
            uVar14 = *(uint *)(*plVar19 + 0xc);
            *puVar2 = uVar14;
            if ((int)uVar14 < DAT_14c9647dc) {
              lVar20 = (ulonglong)((uVar14 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar14 >> 0x10) * 8);
            }
            else {
              lVar20 = 0;
            }
            uVar14 = *(uint *)(lVar20 + 0x10);
            if (*(uint *)(lVar20 + 0x10) == 0) {
              LOCK();
              iVar6 = DAT_14c964868 + 1;
              UNLOCK();
              uVar17 = DAT_14c964868 + 1;
              bVar21 = DAT_14c964868 < 1000;
              DAT_14c964868 = iVar6;
              if (bVar21) {
                puStack_630 = (undefined *)0x140799e33;
                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                              ,uVar17);
              }
              LOCK();
              uVar14 = *(uint *)(lVar20 + 0x10);
              bVar21 = uVar14 == 0;
              if (bVar21) {
                *(uint *)(lVar20 + 0x10) = uVar17;
                uVar14 = 0;
              }
              UNLOCK();
              if (bVar21) {
                uVar14 = uVar17;
              }
            }
          }
          puVar2[1] = uVar14;
          puStack_630 = (undefined *)0x140799ce4;
          FUN_1402724f4(local_590,&local_608,local_4f8 != *(longlong *)plVar18[1]);
          puVar8[3] = local_5f8;
          *(undefined4 *)(puVar8 + 1) = local_608;
          *(undefined4 *)((longlong)puVar8 + 0xc) = uStack_604;
          *(undefined4 *)(puVar8 + 2) = uStack_600;
          *(undefined4 *)((longlong)puVar8 + 0x14) = uStack_5fc;
          puStack_630 = (undefined *)0x140799d18;
          FUN_14571e7c0(local_590,&local_608,local_4f8 != *(longlong *)plVar18[1]);
          puVar8[6] = local_5f8;
          *(undefined4 *)(puVar8 + 4) = local_608;
          *(undefined4 *)((longlong)puVar8 + 0x24) = uStack_604;
          *(undefined4 *)(puVar8 + 5) = uStack_600;
          *(undefined4 *)((longlong)puVar8 + 0x2c) = uStack_5fc;
          break;
        }
        lVar15 = lVar15 + 0x138;
      } while ((longlong)(int)local_b0 * 0x138 - lVar15 != 0);
    }
    goto LAB_140799901;
  }
  puStack_630 = (undefined *)0x140799a78;
  FUN_144941734(lVar20,&local_5a8);
  dVar4 = *(double *)(lVar20 + 600);
  puStack_630 = (undefined *)0x140799aab;
  FUN_144941734(lVar20,&local_608);
  dVar5 = *(double *)(lVar20 + 600);
  pdVar7 = (double *)plVar18[2];
  if (((pdVar7[3] <= local_5e8 - dVar5 && local_5e8 - dVar5 != pdVar7[3]) ||
      (local_590[1] + dVar4 < *pdVar7)) ||
     (((pdVar7[4] <= local_5e0 - dVar5 && local_5e0 - dVar5 != pdVar7[4] ||
       ((local_590[2] + dVar4 < pdVar7[1] ||
        (pdVar7[5] <= local_5d8 - dVar5 && local_5d8 - dVar5 != pdVar7[5])))) ||
      (local_590[3] + dVar4 < pdVar7[2])))) goto LAB_140799901;
  lVar15 = plVar18[1];
  iVar6 = *(int *)(lVar15 + 0x18);
  *(uint *)(lVar15 + 0x18) = iVar6 + 1U;
  if (*(uint *)(lVar15 + 0x1c) < iVar6 + 1U) {
    puStack_630 = (undefined *)0x140799b48;
    FUN_141745f20((longlong *)(lVar15 + 0x10),iVar6);
  }
  lVar15 = *(longlong *)(lVar15 + 0x10);
  lVar16 = (longlong)iVar6 * 0x38;
  puVar2 = (uint *)(lVar15 + lVar16);
  *(undefined8 *)(lVar15 + lVar16) = 0;
  *(undefined8 *)(lVar15 + 0x18 + lVar16) = DAT_14c8464f0;
  uVar10 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  puVar8 = (undefined8 *)(lVar15 + 8 + lVar16);
  *puVar8 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  puVar8[1] = uVar10;
  *(undefined8 *)(lVar15 + 0x30 + lVar16) = DAT_14c8464f0;
  uVar13 = DAT_14c8464e8._4_4_;
  uVar12 = (undefined4)DAT_14c8464e8;
  uVar11 = DAT_14c8464e0._4_4_;
  puVar3 = (undefined4 *)(lVar15 + 0x20 + lVar16);
  *puVar3 = (undefined4)DAT_14c8464e0;
  puVar3[1] = uVar11;
  puVar3[2] = uVar12;
  puVar3[3] = uVar13;
  if (*(int *)(lVar20 + 0x10) == 3) {
    uVar9 = *(ulonglong *)(lVar20 + 0x18);
    if (((((uVar9 >> 0x20 != 0) && (uVar14 = (uint)uVar9, -1 < (int)uVar14)) &&
         ((int)uVar14 < DAT_14c9647dc)) &&
        ((plVar18 = (longlong *)
                    ((ulonglong)((uVar14 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar14 >> 0xd & 0x3fff8))),
         plVar18 != (longlong *)0x0 && ((int)plVar18[2] == (int)(uVar9 >> 0x20))))) &&
       ((*(uint *)(plVar18 + 1) & 0x10200000) == 0)) goto LAB_140799d80;
LAB_140799d3b:
    *puVar2 = 0;
    uVar14 = 0;
  }
  else {
    if (*(int *)(lVar20 + 0x10) != 2) goto LAB_140799d3b;
    plVar18 = (longlong *)(lVar20 + 0x18);
LAB_140799d80:
    if (*plVar18 == 0) goto LAB_140799d3b;
    uVar14 = *(uint *)(*plVar18 + 0xc);
    *puVar2 = uVar14;
    if ((int)uVar14 < DAT_14c9647dc) {
      lVar20 = (ulonglong)((uVar14 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar14 >> 0x10) * 8);
    }
    else {
      lVar20 = 0;
    }
    uVar14 = *(uint *)(lVar20 + 0x10);
    if (*(uint *)(lVar20 + 0x10) == 0) {
      LOCK();
      iVar6 = DAT_14c964868 + 1;
      UNLOCK();
      uVar17 = DAT_14c964868 + 1;
      bVar21 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar6;
      if (bVar21) {
        puStack_630 = (undefined *)0x140799e50;
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar17);
      }
      LOCK();
      uVar14 = *(uint *)(lVar20 + 0x10);
      bVar21 = uVar14 == 0;
      if (bVar21) {
        *(uint *)(lVar20 + 0x10) = uVar17;
        uVar14 = 0;
      }
      UNLOCK();
      if (bVar21) {
        uVar14 = uVar17;
      }
    }
  }
  puVar2[1] = uVar14;
LAB_140799901:
  if ((local_80 ^ (ulonglong)auStack_628) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    puStack_630 = &UNK_14079994d;
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140799e52 FUN_140799e52 body=8713 status=ok
// SIG undefined FUN_140799e52(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140799e52(longlong *param_1,int param_2,longlong *param_3,undefined4 *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  uint uVar9;
  longlong lVar10;
  undefined8 *puVar11;
  longlong lVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  longlong lVar17;
  ulonglong uVar18;
  double dVar19;
  double dVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  float fVar26;
  float fVar27;
  double dVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  float fVar31;
  double dVar32;
  double dVar33;
  undefined1 auVar34 [16];
  double dVar40;
  double dVar41;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  double dVar42;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  double dVar46;
  double dVar47;
  undefined1 auVar45 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  double dVar50;
  double dVar51;
  double dVar52;
  double dVar53;
  double dVar54;
  double dVar55;
  undefined1 auVar56 [16];
  double dVar57;
  double dVar58;
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auStack_6d8 [36];
  int local_6b4;
  double local_6b0;
  ulonglong local_6a8;
  undefined4 *local_6a0;
  longlong *local_698;
  double local_690;
  longlong *local_688;
  undefined8 *local_680;
  undefined8 **local_678;
  undefined8 **local_670;
  double local_668;
  longlong local_660;
  double local_658;
  double dStack_650;
  double local_648;
  double dStack_640;
  double local_638;
  double dStack_630;
  undefined8 local_628;
  undefined1 local_618 [16];
  undefined1 local_608 [16];
  undefined1 local_5f8 [16];
  undefined1 local_5e8 [16];
  undefined1 local_5d8 [16];
  double local_5c8;
  double dStack_5c0;
  undefined1 local_5b8 [16];
  undefined1 local_5a8 [16];
  double local_598;
  double dStack_590;
  double local_588;
  double dStack_580;
  double local_578;
  double dStack_570;
  undefined4 local_568;
  undefined4 uStack_564;
  double dStack_560;
  undefined1 local_558 [16];
  undefined1 local_548 [16];
  double local_530;
  double local_528;
  double local_520;
  double local_518;
  double local_510;
  double local_508;
  double local_500;
  undefined1 local_4f8 [16];
  undefined1 local_4e8 [16];
  double local_4d8;
  double dStack_4d0;
  double local_4c8;
  double dStack_4c0;
  undefined1 local_4b8 [16];
  undefined1 local_4a8 [16];
  double local_498;
  double dStack_490;
  double local_488;
  double dStack_480;
  double local_478;
  double dStack_470;
  double local_468;
  double dStack_460;
  undefined1 local_458 [16];
  undefined1 local_448 [16];
  undefined8 local_438;
  undefined8 uStack_430;
  undefined8 local_428;
  undefined8 uStack_420;
  undefined8 local_418;
  undefined8 uStack_410;
  undefined8 local_408;
  undefined8 uStack_400;
  undefined8 local_3f8;
  undefined8 uStack_3f0;
  undefined8 local_3e8;
  undefined8 uStack_3e0;
  undefined8 local_3d8;
  undefined8 uStack_3d0;
  undefined8 local_3c8;
  undefined8 uStack_3c0;
  undefined8 local_3b8;
  undefined8 uStack_3b0;
  undefined8 local_3a8;
  undefined8 uStack_3a0;
  undefined8 local_398;
  undefined8 uStack_390;
  undefined8 local_388;
  undefined8 uStack_380;
  undefined8 *local_378;
  int iStack_370;
  undefined8 *local_368;
  int local_360;
  undefined8 local_358 [12];
  double local_2f8;
  double dStack_2f0;
  double local_2e8;
  double dStack_2e0;
  double local_2d8;
  double dStack_2d0;
  undefined4 local_2c8;
  undefined4 uStack_2c4;
  double dStack_2c0;
  undefined1 local_2b8 [16];
  undefined1 local_2a8 [16];
  double local_298;
  double dStack_290;
  double local_288;
  double dStack_280;
  double local_278;
  double dStack_270;
  double local_268;
  undefined8 uStack_260;
  undefined1 local_258 [16];
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
  undefined1 local_1f8 [16];
  double local_1e8;
  undefined8 uStack_1e0;
  undefined1 local_1d8 [16];
  double local_1c8;
  undefined8 uStack_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  undefined8 uStack_1a0;
  double local_198;
  double dStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  double local_178;
  double dStack_170;
  double local_168;
  undefined8 local_160;
  double local_158;
  double dStack_150;
  double local_148;
  undefined8 local_140;
  double local_138;
  double local_130;
  double local_128;
  undefined8 local_120;
  double local_118;
  double dStack_110;
  double local_108;
  undefined8 local_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_6d8;
  iVar6 = (int)param_3[4];
  if ((longlong)iVar6 == 0) {
    auVar43 = ZEXT816(0);
  }
  else {
    auVar43 = ZEXT816(0);
    lVar12 = 0;
    do {
      auVar43._0_4_ = auVar43._0_4_ + *(float *)(param_3[3] + lVar12);
      lVar12 = lVar12 + 4;
    } while ((longlong)iVar6 * 4 - lVar12 != 0);
  }
  iVar5 = 1;
  if (1 < iVar6) {
    iVar5 = iVar6;
  }
  lVar12 = param_3[1];
  uVar3 = *(uint *)(lVar12 + 0x10);
  dVar53 = DAT_14c8464e0;
  dVar51 = DAT_14c8464e8;
  dVar55 = DAT_14c8464f0;
  local_698 = param_3;
  local_688 = param_1;
  if (auVar43._0_4_ / (float)iVar5 <= 1e-08) {
    if (0 < (int)uVar3) {
      uVar18 = 0;
      do {
        lVar10 = *(longlong *)(*(longlong *)(lVar12 + 8) + uVar18 * 8);
        if (lVar10 != 0) {
          dVar53 = dVar53 + *(double *)(lVar10 + 0xf0);
          dVar51 = dVar51 + *(double *)(lVar10 + 0xf8);
          dVar55 = dVar55 + *(double *)(lVar10 + 0x100);
        }
        uVar18 = uVar18 + 1;
      } while (uVar3 != uVar18);
    }
    dVar19 = dVar55 * dVar55 + dVar53 * dVar53 + dVar51 * dVar51;
    if (9.99999993922529e-09 < dVar19) {
      dVar19 = 1.0 / SQRT(dVar19);
      dVar53 = dVar53 * dVar19;
      dVar51 = dVar51 * dVar19;
      dVar55 = dVar55 * dVar19;
    }
  }
  else {
    local_6b0 = (double)CONCAT44(local_6b0._4_4_,param_2);
    local_6a0 = param_4;
    if (0 < (int)uVar3) {
      lVar10 = 0;
      do {
        lVar1 = *(longlong *)(*(longlong *)(lVar12 + 8) + lVar10 * 8);
        if (lVar1 != 0) {
          uVar3 = FUN_1449d3b02(lVar1);
          local_1f8 = ZEXT416(uVar3) << 0x40;
          if (uVar3 != 0) {
            FUN_140504d0c(local_1f8,0);
            FUN_140504e6e(lVar1);
            uVar2 = local_1f8._0_8_;
            if (0 < (int)uVar3) {
              uVar18 = 0;
              local_6a8 = (ulonglong)uVar3;
              do {
                lVar12 = *(longlong *)(uVar2 + uVar18 * 8);
                if ((lVar12 != 0) && (iVar6 = *(int *)(lVar12 + 0x4f8), 0 < (longlong)iVar6)) {
                  lVar17 = 0;
                  do {
                    FUN_14571e7c0(lVar12 + 0x18 + lVar17,&local_178,
                                  lVar1 == *(longlong *)(lVar12 + 0xb0 + lVar17));
                    dVar53 = dVar53 + local_178;
                    dVar51 = dVar51 + dStack_170;
                    dVar55 = dVar55 + local_168;
                    lVar17 = lVar17 + 0x138;
                  } while ((longlong)iVar6 * 0x138 - lVar17 != 0);
                }
                uVar18 = uVar18 + 1;
              } while (uVar18 != local_6a8);
            }
            param_3 = local_698;
            if (uVar2 != 0) {
              FUN_1400020a8(uVar2);
            }
          }
          lVar12 = param_3[1];
        }
        lVar10 = lVar10 + 1;
      } while (lVar10 < *(int *)(lVar12 + 0x10));
    }
    dVar19 = dVar55 * dVar55 + dVar53 * dVar53 + dVar51 * dVar51;
    if (9.99999993922529e-09 < dVar19) {
      dVar19 = 1.0 / SQRT(dVar19);
      dVar53 = dVar53 * dVar19;
      dVar51 = dVar51 * dVar19;
      dVar55 = dVar55 * dVar19;
    }
    param_4 = local_6a0;
    param_2 = local_6b0._0_4_;
  }
  if (*(int *)(lVar12 + 0x10) < 1) {
    lVar12 = 0;
  }
  else {
    lVar12 = **(longlong **)(lVar12 + 8);
  }
  FUN_144941734(lVar12,&local_2f8);
  puVar7 = (undefined8 *)(lVar12 + 400);
  puVar11 = local_358;
  for (lVar10 = 0xc; lVar10 != 0; lVar10 = lVar10 + -1) {
    *puVar11 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar11 = puVar11 + 1;
  }
  if (0 < (int)local_688[1]) {
    local_6b4 = *(int *)(*param_3 + 0x28) * 2 + 0xd;
    local_670 = &local_368;
    if (param_2 == 0) {
      local_670 = &local_378;
    }
    local_678 = (undefined8 **)(param_4 + 8);
    local_680 = (undefined8 *)(param_4 + 0xc);
    lVar10 = 0;
    local_6a8 = 0;
    local_6b0 = dVar51;
    local_690 = dVar55;
    local_668 = dVar53;
    local_660 = lVar12;
    iVar6 = local_6b4;
    do {
      lVar12 = *local_688;
      iVar5 = *(int *)(lVar12 + 8 + lVar10);
      iVar4 = iVar5 / iVar6;
      if (iVar5 % iVar6 == 0) {
        if (param_2 == 0) {
          local_378 = *(undefined8 **)(lVar12 + lVar10);
          iStack_370 = *(int *)(lVar12 + 8 + lVar10);
          iVar5 = *(int *)(lVar12 + 8 + lVar10);
          uVar3 = (iVar4 + -1) * iVar6;
          uVar13 = (int)uVar3 >> 0x1f & uVar3;
          iVar4 = uVar3 - uVar13;
          iVar14 = uVar13 + 0x7fffffff;
          if (iVar5 <= iVar4) {
            iVar4 = iVar5;
          }
          local_360 = iVar5 - iVar4;
          if (iVar14 < iVar5 - iVar4) {
            local_360 = iVar14;
          }
          uVar3 = 0;
          if (local_360 < 1) {
            local_360 = 0;
          }
          local_368 = (undefined8 *)((longlong)iVar4 * 8 + *(longlong *)(lVar12 + lVar10));
          fVar27 = 0.0;
        }
        else {
          fVar26 = (float)iVar4;
          fVar27 = *(float *)(lVar12 + 0x10 + lVar10);
          if (param_2 == 1) {
            if (fVar27 <= 1e-08) {
              iVar5 = 0;
            }
            else {
              fVar31 = (*(float *)((longlong)param_3 + 0x14) / fVar27) * fVar26;
              iVar5 = (int)ROUND(fVar31 + fVar31 + 0.5);
              iVar5 = (int)(CONCAT44(iVar5 >> 0x1f,iVar5 >> 1) % (longlong)iVar4);
            }
            uVar3 = iVar5 * iVar6;
            iVar14 = *(int *)(lVar12 + 8 + lVar10);
            uVar13 = (int)uVar3 >> 0x1f & uVar3;
            iVar16 = uVar3 - uVar13;
            iVar15 = uVar13 + 0x7fffffff;
            if (iVar14 <= iVar16) {
              iVar16 = iVar14;
            }
            local_360 = iVar14 - iVar16;
            if (iVar15 < iVar14 - iVar16) {
              local_360 = iVar15;
            }
            if (local_360 < 1) {
              local_360 = 0;
            }
            local_368 = (undefined8 *)((longlong)iVar16 * 8 + *(longlong *)(lVar12 + lVar10));
            iVar14 = *(int *)(lVar12 + 8 + lVar10);
            if (0 < iVar5) {
              iVar4 = iVar5;
            }
            uVar13 = (iVar4 + -1) * iVar6;
            uVar9 = (int)uVar13 >> 0x1f & uVar13;
            iVar5 = uVar13 - uVar9;
            iVar4 = uVar9 + 0x7fffffff;
            if (iVar14 <= iVar5) {
              iVar5 = iVar14;
            }
            iStack_370 = iVar14 - iVar5;
            if (iVar4 < iVar14 - iVar5) {
              iStack_370 = iVar4;
            }
            if (iStack_370 < 1) {
              iStack_370 = 0;
            }
            local_378 = (undefined8 *)((longlong)iVar5 * 8 + *(longlong *)(lVar12 + lVar10));
          }
          else {
            iVar5 = 0;
            iVar6 = 0;
            if (1e-08 < fVar27) {
              fVar31 = *(float *)((longlong)local_698 + 0x14);
              if (fVar27 <= *(float *)((longlong)local_698 + 0x14)) {
                fVar31 = fVar27;
              }
              iVar6 = (int)ROUND(fVar31 * fVar26 + fVar31 * fVar26 + 0.5);
              iVar6 = (int)(CONCAT44(iVar6 >> 0x1f,iVar6 >> 1) % (longlong)iVar4);
            }
            uVar3 = iVar6 * local_6b4;
            iVar4 = *(int *)(lVar12 + 8 + lVar10);
            uVar13 = (int)uVar3 >> 0x1f & uVar3;
            iVar14 = uVar3 - uVar13;
            iVar16 = uVar13 + 0x7fffffff;
            if (iVar4 <= iVar14) {
              iVar14 = iVar4;
            }
            local_360 = iVar4 - iVar14;
            if (iVar16 < iVar4 - iVar14) {
              local_360 = iVar16;
            }
            if (local_360 < 1) {
              local_360 = iVar5;
            }
            local_368 = (undefined8 *)((longlong)iVar14 * 8 + *(longlong *)(lVar12 + lVar10));
            iVar4 = *(int *)(lVar12 + 8 + lVar10);
            iVar14 = iVar6 + -1;
            if (iVar6 < 1) {
              iVar14 = iVar5;
            }
            uVar9 = iVar14 * local_6b4;
            uVar13 = (int)uVar9 >> 0x1f & uVar9;
            iVar14 = uVar13 + 0x7fffffff;
            iVar6 = uVar9 - uVar13;
            if (iVar4 <= iVar6) {
              iVar6 = iVar4;
            }
            iStack_370 = iVar4 - iVar6;
            if (iVar14 < iVar4 - iVar6) {
              iStack_370 = iVar14;
            }
            if (iStack_370 < 1) {
              iStack_370 = iVar5;
            }
            local_378 = (undefined8 *)((longlong)iVar6 * 8 + *(longlong *)(lVar12 + lVar10));
            param_3 = local_698;
            iVar6 = local_6b4;
          }
          fVar27 = *(float *)(param_3 + 2) / (fVar27 / fVar26);
        }
        if ((local_360 != 0) && (iStack_370 != 0)) {
          local_6a0 = (undefined4 *)CONCAT44(local_6a0._4_4_,fVar27);
          local_3d8 = *local_378;
          uStack_3d0 = local_378[1];
          local_3c8 = local_378[2];
          uStack_3c0 = local_378[3];
          local_3b8 = local_378[4];
          uStack_3b0 = local_378[5];
          local_3a8 = local_378[6];
          uStack_3a0 = 0;
          local_398 = 0x3ff0000000000000;
          uStack_390 = 0x3ff0000000000000;
          local_388 = 0x3ff0000000000000;
          uStack_380 = 0;
          local_438 = *local_368;
          uStack_430 = local_368[1];
          local_428 = local_368[2];
          uStack_420 = local_368[3];
          local_418 = local_368[4];
          uStack_410 = local_368[5];
          local_408 = local_368[6];
          uStack_400 = 0;
          local_3f8 = 0x3ff0000000000000;
          uStack_3f0 = 0x3ff0000000000000;
          local_3e8 = 0x3ff0000000000000;
          uStack_3e0 = 0;
          puVar7 = &local_438;
          FUN_1449437a2(puVar7,&local_498,&local_3d8);
          auVar43 = _DAT_149934d80;
          local_4c8 = 0.0;
          dStack_4c0 = 0.0;
          local_4d8 = 0.0;
          dStack_4d0 = 0.0;
          dVar51 = local_2b8._0_8_;
          dVar28 = local_2b8._8_8_;
          dVar55 = local_2a8._0_8_;
          dVar33 = local_2a8._8_8_;
          dVar19 = local_458._0_8_;
          dVar52 = local_458._8_8_;
          dVar20 = local_448._0_8_;
          dVar46 = local_448._8_8_;
          auVar34 = minpd(local_458,local_2b8);
          auVar48 = minpd(local_448,local_2a8);
          auVar35._8_8_ = -(ulonglong)(auVar34._8_8_ < 0.0);
          auVar35._0_8_ = -(ulonglong)(auVar34._0_8_ < 0.0);
          iVar5 = movmskpd((int)&local_4d8,auVar35);
          auVar34._8_8_ = -(ulonglong)(auVar48._8_8_ < 0.0);
          auVar34._0_8_ = -(ulonglong)(auVar48._0_8_ < 0.0);
          uVar13 = movmskpd((int)puVar7,auVar34);
          if ((uVar13 & 0x3fffffff) == 0 && iVar5 == 0) {
            dVar54 = local_498 * local_2e8 * 1.0 +
                     dStack_480 * dStack_2f0 +
                     local_488 * local_2f8 * -1.0 + dStack_490 * dStack_2e0;
            dVar32 = local_488 * local_2e8 * -1.0 +
                     ((local_2f8 * local_498 * -1.0 + dStack_480 * dStack_2e0) -
                     dStack_490 * dStack_2f0);
            local_4f8._8_4_ = SUB84(dVar54,0);
            local_4f8._0_8_ =
                 dStack_490 * local_2e8 * -1.0 +
                 local_488 * dStack_2f0 + dStack_480 * local_2f8 * 1.0 + local_498 * dStack_2e0;
            local_4f8._12_4_ = (int)((ulonglong)dVar54 >> 0x20);
            local_4e8._8_4_ = SUB84(dVar32,0);
            local_4e8._0_8_ =
                 dStack_480 * local_2e8 * 1.0 +
                 ((local_2f8 * dStack_490 * 1.0 + local_488 * dStack_2e0) - local_498 * dStack_2f0);
            local_4e8._12_4_ = (int)((ulonglong)dVar32 >> 0x20);
            dVar57 = local_478 * dVar51;
            dVar58 = dStack_470 * dVar28;
            dVar47 = local_468 * dVar55;
            dVar50 = dStack_460 * dVar33;
            dVar32 = dVar58 * local_2f8 - dStack_2f0 * dVar57;
            dVar40 = dVar47 * dStack_2f0 - local_2e8 * dVar58;
            dVar41 = dVar57 * local_2e8 - local_2f8 * dVar47;
            dVar42 = dVar50 * dStack_2e0 - dStack_2e0 * dVar50;
            dVar40 = dVar40 + dVar40;
            dVar41 = dVar41 + dVar41;
            dVar32 = dVar32 + dVar32;
            dVar42 = dVar42 + dVar42;
            dVar54 = (double)CONCAT44(uStack_2c4,local_2c8);
            local_4d8 = (dVar32 * dStack_2f0 - local_2e8 * dVar41) + dStack_2e0 * dVar40 + dVar57 +
                        local_2d8;
            dStack_4d0 = (dVar40 * local_2e8 - dVar32 * local_2f8) + dStack_2e0 * dVar41 + dVar58 +
                         dStack_2d0;
            dStack_4c0 = (dVar42 * dStack_2e0 - dVar42 * dStack_2e0) + dStack_2e0 * dVar42 + dVar50
                         + dStack_2c0;
            auVar59._8_8_ = dVar52 * dVar28;
            auVar59._0_8_ = dVar19 * dVar51;
            local_4c8 = (dVar41 * local_2f8 - dStack_2f0 * dVar40) + dStack_2e0 * dVar32 + dVar47 +
                        dVar54;
          }
          else {
            dVar42 = dStack_2f0 + dStack_2f0;
            dVar54 = local_2e8 + local_2e8;
            dVar47 = local_2f8 * (local_2f8 + local_2f8);
            local_1a8 = (1.0 - (dVar47 + dStack_2f0 * dVar42)) * dVar55;
            dVar32 = (local_2f8 + local_2f8) * dStack_2e0;
            local_1b8 = (dVar42 * dStack_2e0 + local_2f8 * dVar54) * dVar55;
            dStack_1b0 = (dVar54 * dStack_2f0 - dVar32) * dVar55;
            dVar41 = (dVar42 * local_2f8 + dVar54 * dStack_2e0) * dVar51;
            local_1c8 = (dVar54 * dStack_2f0 + dVar32) * dVar28;
            local_1e8 = (local_2f8 * dVar54 - dVar42 * dStack_2e0) * dVar51;
            local_1f8._8_4_ = SUB84(dVar41,0);
            local_1f8._0_8_ = (1.0 - (local_2e8 * dVar54 + dStack_2f0 * dVar42)) * dVar51;
            local_1f8._12_4_ = (int)((ulonglong)dVar41 >> 0x20);
            uStack_1e0 = 0;
            local_1d8._8_8_ = (1.0 - (local_2e8 * dVar54 + dVar47)) * dVar28;
            local_1d8._0_8_ = (dVar42 * local_2f8 - dVar54 * dStack_2e0) * dVar28;
            uStack_1c0 = 0;
            uStack_1a0 = 0;
            local_198 = local_2d8;
            dStack_190 = dStack_2d0;
            local_188 = CONCAT44(uStack_2c4,local_2c8);
            uStack_180 = 0x3ff0000000000000;
            dVar54 = dStack_490 + dStack_490;
            dVar32 = local_488 + local_488;
            dVar41 = local_498 * (local_498 + local_498);
            local_228 = (1.0 - (dVar41 + dStack_490 * dVar54)) * dVar20;
            dVar42 = (local_498 + local_498) * dStack_480;
            local_238 = (dVar54 * dStack_480 + local_498 * dVar32) * dVar20;
            dStack_230 = (dVar32 * dStack_490 - dVar42) * dVar20;
            auVar59._0_8_ = dVar51 * dVar19;
            auVar59._8_8_ = dVar28 * dVar52;
            local_278 = ((double)DAT_149934d80 - (local_488 * dVar32 + dStack_490 * dVar54)) *
                        dVar19;
            dVar51 = (DAT_149934d80._8_8_ - (local_488 * dVar32 + dVar41)) * dVar52;
            dStack_270 = (dVar54 * local_498 + dVar32 * dStack_480) * dVar19;
            local_248 = (dVar32 * dStack_490 + dVar42) * dVar52;
            local_268 = (local_498 * dVar32 - dVar54 * dStack_480) * dVar19;
            uStack_260 = 0;
            local_258._8_4_ = SUB84(dVar51,0);
            local_258._0_8_ = (dVar54 * local_498 - dVar32 * dStack_480) * dVar52;
            local_258._12_4_ = (int)((ulonglong)dVar51 >> 0x20);
            uStack_240 = 0;
            uStack_220 = 0;
            local_218 = local_478;
            dStack_210 = dStack_470;
            local_208 = local_468;
            uStack_200 = 0x3ff0000000000000;
            FUN_1447fea8d(&local_178);
            FUN_144a1c686(&local_178,0x3e45798ee0000000);
            auVar48._8_8_ = -(ulonglong)(0.0 <= auVar59._8_8_);
            auVar48._0_8_ = -(ulonglong)(0.0 <= auVar59._0_8_);
            auVar34 = blendvpd(_DAT_149936790,auVar43,auVar48);
            uVar18 = -(ulonglong)(0.0 <= dVar55 * dVar20);
            dVar51 = (double)(~uVar18 & 0xbff0000000000000 | uVar18 & 0x3ff0000000000000);
            dVar19 = auVar34._0_8_;
            local_168 = local_168 * dVar19;
            dStack_170 = dStack_170 * dVar19;
            local_178 = local_178 * dVar19;
            dVar19 = auVar34._8_8_;
            local_148 = local_148 * dVar19;
            dStack_150 = dStack_150 * dVar19;
            local_158 = dVar19 * local_158;
            local_128 = local_128 * dVar51;
            local_130 = local_130 * dVar51;
            local_138 = dVar51 * local_138;
            FUN_14481fd10(&local_598,&local_178);
            dVar51 = local_588 * local_588 + local_598 * local_598;
            dVar19 = dStack_580 * dStack_580 + dStack_590 * dStack_590;
            auVar38._0_8_ = dVar51 + dVar19;
            auVar38._8_8_ = dVar51 + dVar19;
            auVar23._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar38._8_8_);
            auVar23._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar38._0_8_);
            auVar34 = sqrtpd(auVar38,auVar38);
            auVar43 = divpd(auVar43,auVar34);
            auVar56._0_8_ = auVar43._0_8_ * local_588;
            auVar56._8_8_ = auVar43._8_8_ * dStack_580;
            local_4e8 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar56,auVar23);
            local_4f8._8_8_ =
                 (ulonglong)(dStack_590 * auVar43._8_8_) &
                 -(ulonglong)(9.99999993922529e-09 <= auVar38._8_8_);
            local_4f8._0_8_ =
                 (ulonglong)(local_598 * auVar43._0_8_) &
                 -(ulonglong)(9.99999993922529e-09 <= auVar38._0_8_);
            dStack_4c0 = 0.0;
            local_4d8 = local_118;
            dStack_4d0 = dStack_110;
            dVar54 = (double)CONCAT44(uStack_2c4,local_2c8);
            local_4c8 = local_108;
            iVar6 = local_6b4;
          }
          dVar46 = dVar46 * dVar33;
          local_4a8._8_4_ = SUB84(dVar46,0);
          local_4a8._0_8_ = dVar20 * dVar55;
          local_4a8._12_4_ = (int)((ulonglong)dVar46 >> 0x20);
          local_4b8 = auVar59;
          if (param_2 == 0) {
            local_1e8 = DAT_14c8463c8;
            local_1f8._8_8_ = DAT_14c8463c0;
            local_1f8._0_8_ = DAT_14c8463b8;
            FUN_144a2c3ca(local_358,&local_178,local_4f8);
            FUN_14079c05c(&local_178,local_1f8,&local_510,0);
          }
          else if (param_2 == 1) {
            dVar54 = local_4c8 - dVar54;
            dVar55 = local_4d8 - local_2d8;
            dVar19 = dStack_4d0 - dStack_2d0;
            dVar51 = dVar54 * dVar54 + dVar55 * dVar55 + dVar19 * dVar19;
            if (((dVar51 != 1.0) ||
                (local_510 = dVar55, local_508 = dVar19, local_500 = dVar54, NAN(dVar51))) &&
               (local_510 = DAT_14c8464e0, local_508 = DAT_14c8464e8, local_500 = DAT_14c8464f0,
               9.99999993922529e-09 <= dVar51)) {
              dVar51 = 1.0 / SQRT(dVar51);
              local_510 = dVar55 * dVar51;
              local_508 = dVar19 * dVar51;
              local_500 = dVar54 * dVar51;
            }
          }
          else {
            dVar54 = local_4c8 - dVar54;
            dVar55 = local_4d8 - local_2d8;
            dVar19 = dStack_4d0 - dStack_2d0;
            dVar51 = dVar54 * dVar54 + dVar55 * dVar55 + dVar19 * dVar19;
            param_3 = local_698;
            iVar6 = local_6b4;
            if (((dVar51 != 1.0) ||
                (local_510 = dVar55, local_508 = dVar19, local_500 = dVar54, NAN(dVar51))) &&
               (local_510 = DAT_14c8464e0, local_508 = DAT_14c8464e8, local_500 = DAT_14c8464f0,
               9.99999993922529e-09 <= dVar51)) {
              local_510 = 1.0 / SQRT(dVar51);
              local_500 = dVar54 * local_510;
              local_508 = dVar19 * local_510;
              local_510 = dVar55 * local_510;
            }
          }
          lVar12 = local_660;
          if (*(char *)(param_4 + 3) == '\0') {
            dVar51 = -3.4028234663852886e+38;
          }
          else {
            dVar51 = (double)(float)param_4[2];
          }
          dVar55 = local_500 * local_690 + local_510 * dVar53 + local_508 * local_6b0;
          if (dVar51 < dVar55) {
            param_4[4] = (int)local_6a8;
            *(undefined1 *)(param_4 + 5) = 1;
            param_4[2] = (float)dVar55;
            *(undefined1 *)(param_4 + 3) = 1;
            *param_4 = local_6a0._0_4_;
            *(undefined1 *)(param_4 + 1) = 1;
            if (local_670 != local_678) {
              puVar7 = local_670[1];
              *local_678 = *local_670;
              local_678[1] = puVar7;
            }
            param_4[6] = uVar3;
            *(undefined1 *)(param_4 + 7) = 1;
            puVar7 = local_358;
            FUN_144a2c3ca(puVar7,&local_598,&local_3d8);
            auVar35 = _DAT_149934d80;
            local_5d8 = ZEXT816(0);
            dVar53 = local_558._0_8_;
            dVar20 = local_558._8_8_;
            dVar51 = local_548._0_8_;
            dVar28 = local_548._8_8_;
            auVar43 = *(undefined1 (*) [16])(lVar12 + 800);
            dVar55 = auVar43._0_8_;
            dVar33 = auVar43._8_8_;
            auVar34 = *(undefined1 (*) [16])(lVar12 + 0x330);
            dVar19 = auVar34._0_8_;
            auVar43 = minpd(auVar43,local_558);
            auVar48 = minpd(auVar34,local_548);
            auVar44._8_8_ = -(ulonglong)(auVar43._8_8_ < 0.0);
            auVar44._0_8_ = -(ulonglong)(auVar43._0_8_ < 0.0);
            iVar6 = movmskpd((int)local_5d8,auVar44);
            auVar49._8_8_ = -(ulonglong)(auVar48._8_8_ < 0.0);
            auVar49._0_8_ = -(ulonglong)(auVar48._0_8_ < 0.0);
            uVar3 = movmskpd((int)puVar7,auVar49);
            if ((uVar3 & 0x3fffffff) == 0 && iVar6 == 0) {
              dVar54 = *(double *)(lVar12 + 0x2e0);
              dVar41 = *(double *)(lVar12 + 0x2e8);
              dVar47 = *(double *)(lVar12 + 0x2f0);
              dVar50 = *(double *)(lVar12 + 0x2f8);
              dVar46 = dVar54 * local_588 * 1.0 +
                       dVar50 * dStack_590 + dVar47 * local_598 * -1.0 + dVar41 * dStack_580;
              dVar52 = dVar47 * local_588 * -1.0 +
                       ((local_598 * dVar54 * -1.0 + dVar50 * dStack_580) - dVar41 * dStack_590);
              dVar42 = *(double *)(lVar12 + 0x300) * dVar53;
              dVar32 = *(double *)(lVar12 + 0x308) * dVar20;
              dVar40 = *(double *)(lVar12 + 0x310) * dVar51;
              dVar57 = *(double *)(lVar12 + 0x318) * dVar28;
              local_5f8._8_4_ = SUB84(dVar46,0);
              local_5f8._0_8_ =
                   dVar41 * local_588 * -1.0 +
                   dVar47 * dStack_590 + dVar50 * local_598 * 1.0 + dVar54 * dStack_580;
              local_5f8._12_4_ = (int)((ulonglong)dVar46 >> 0x20);
              local_5e8._8_4_ = SUB84(dVar52,0);
              local_5e8._0_8_ =
                   dVar50 * local_588 * 1.0 +
                   ((local_598 * dVar41 * 1.0 + dVar47 * dStack_580) - dVar54 * dStack_590);
              local_5e8._12_4_ = (int)((ulonglong)dVar52 >> 0x20);
              dVar52 = dVar32 * local_598 - dStack_590 * dVar42;
              dVar46 = dVar40 * dStack_590 - local_588 * dVar32;
              dVar54 = dVar42 * local_588 - local_598 * dVar40;
              dVar41 = dVar57 * dStack_580 - dStack_580 * dVar57;
              dVar46 = dVar46 + dVar46;
              dVar54 = dVar54 + dVar54;
              dVar52 = dVar52 + dVar52;
              dVar41 = dVar41 + dVar41;
              dVar32 = (dVar46 * local_588 - dVar52 * local_598) + dStack_580 * dVar54 + dVar32 +
                       dStack_570;
              local_5d8._8_4_ = SUB84(dVar32,0);
              local_5d8._0_8_ =
                   (dVar52 * dStack_590 - local_588 * dVar54) + dStack_580 * dVar46 + dVar42 +
                   local_578;
              local_5d8._12_4_ = (int)((ulonglong)dVar32 >> 0x20);
              dStack_5c0 = (dVar41 * dStack_580 - dVar41 * dStack_580) +
                           dStack_580 * dVar41 + dVar57 + dStack_560;
              local_5c8 = (dVar54 * local_598 - dStack_590 * dVar46) + dStack_580 * dVar52 + dVar40
                          + (double)CONCAT44(uStack_564,local_568);
            }
            else {
              dVar42 = dStack_590 + dStack_590;
              dVar52 = local_588 + local_588;
              dVar54 = local_598 * (local_598 + local_598);
              local_1a8 = (1.0 - (dVar54 + dStack_590 * dVar42)) * dVar51;
              dVar46 = (local_598 + local_598) * dStack_580;
              local_1b8 = (dVar42 * dStack_580 + local_598 * dVar52) * dVar51;
              dStack_1b0 = (dVar52 * dStack_590 - dVar46) * dVar51;
              dVar54 = (DAT_149934d80._8_8_ - (local_588 * dVar52 + dVar54)) * dVar20;
              dVar32 = (dVar42 * local_598 + dVar52 * dStack_580) * dVar53;
              local_1c8 = (dVar52 * dStack_590 + dVar46) * dVar20;
              local_1e8 = (local_598 * dVar52 - dVar42 * dStack_580) * dVar53;
              local_1f8._8_4_ = SUB84(dVar32,0);
              local_1f8._0_8_ =
                   ((double)DAT_149934d80 - (local_588 * dVar52 + dStack_590 * dVar42)) * dVar53;
              local_1f8._12_4_ = (int)((ulonglong)dVar32 >> 0x20);
              uStack_1e0 = 0;
              local_1d8._8_4_ = SUB84(dVar54,0);
              local_1d8._0_8_ = (dVar42 * local_598 - dVar52 * dStack_580) * dVar20;
              local_1d8._12_4_ = (int)((ulonglong)dVar54 >> 0x20);
              uStack_1c0 = 0;
              uStack_1a0 = 0;
              local_198 = local_578;
              dStack_190 = dStack_570;
              local_188 = CONCAT44(uStack_564,local_568);
              uStack_180 = 0x3ff0000000000000;
              dVar54 = *(double *)(lVar12 + 0x2e0);
              dVar32 = *(double *)(lVar12 + 0x2e8);
              dVar42 = *(double *)(lVar12 + 0x2f0);
              dVar41 = dVar32 + dVar32;
              dVar47 = dVar42 + dVar42;
              dVar57 = dVar54 * (dVar54 + dVar54);
              local_228 = (1.0 - (dVar57 + dVar32 * dVar41)) * dVar19;
              dVar46 = *(double *)(lVar12 + 0x2e0) * dVar47;
              dVar52 = *(double *)(lVar12 + 0x2f8);
              dVar50 = dVar47 * dVar52;
              dVar40 = (dVar54 + dVar54) * *(double *)(lVar12 + 0x2f8);
              dVar52 = dVar41 * dVar52;
              local_238 = (dVar52 + dVar46) * dVar19;
              dStack_230 = (dVar47 * dVar32 - dVar40) * dVar19;
              local_278 = ((double)DAT_149934d80 - (dVar42 * dVar47 + dVar32 * dVar41)) * dVar55;
              dStack_270 = (dVar41 * dVar54 + dVar50) * dVar55;
              local_248 = (dVar47 * dVar32 + dVar40) * dVar33;
              local_268 = (dVar46 - dVar52) * dVar55;
              uStack_260 = 0;
              local_258._8_8_ = (DAT_149934d80._8_8_ - (dVar42 * dVar47 + dVar57)) * dVar33;
              local_258._0_8_ = (dVar41 * dVar54 - dVar50) * dVar33;
              uStack_240 = 0;
              uStack_220 = 0;
              local_218 = *(double *)(lVar12 + 0x300);
              dStack_210 = *(double *)(lVar12 + 0x308);
              local_208 = *(double *)(lVar12 + 0x310);
              uStack_200 = 0x3ff0000000000000;
              FUN_1447fea8d(&local_178);
              FUN_144a1c686(&local_178,0x3e45798ee0000000);
              auVar24._8_8_ = -(ulonglong)(0.0 <= dVar20 * dVar33);
              auVar24._0_8_ = -(ulonglong)(0.0 <= dVar53 * dVar55);
              auVar43 = blendvpd(_DAT_149936790,auVar35,auVar24);
              uVar18 = -(ulonglong)(0.0 <= dVar51 * dVar19);
              dVar52 = (double)(~uVar18 & 0xbff0000000000000 | uVar18 & 0x3ff0000000000000);
              dVar46 = auVar43._0_8_;
              local_168 = local_168 * dVar46;
              dStack_170 = dStack_170 * dVar46;
              local_178 = local_178 * dVar46;
              dVar46 = auVar43._8_8_;
              local_148 = local_148 * dVar46;
              dStack_150 = dStack_150 * dVar46;
              local_158 = dVar46 * local_158;
              local_128 = local_128 * dVar52;
              local_130 = local_130 * dVar52;
              local_138 = dVar52 * local_138;
              FUN_14481fd10(&local_658,&local_178);
              dVar52 = local_648 * local_648 + local_658 * local_658;
              dVar46 = dStack_640 * dStack_640 + dStack_650 * dStack_650;
              auVar39._0_8_ = dVar52 + dVar46;
              auVar39._8_8_ = dVar52 + dVar46;
              auVar25._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar39._8_8_);
              auVar25._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar39._0_8_);
              auVar43 = sqrtpd(auVar39,auVar39);
              auVar43 = divpd(auVar35,auVar43);
              auVar45._0_8_ = auVar43._0_8_ * local_648;
              auVar45._8_8_ = auVar43._8_8_ * dStack_640;
              local_5e8 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar45,auVar25);
              local_5f8._8_8_ =
                   (ulonglong)(dStack_650 * auVar43._8_8_) &
                   -(ulonglong)(9.99999993922529e-09 <= auVar39._8_8_);
              local_5f8._0_8_ =
                   (ulonglong)(local_658 * auVar43._0_8_) &
                   -(ulonglong)(9.99999993922529e-09 <= auVar39._0_8_);
              dStack_5c0 = 0.0;
              local_5d8._8_8_ = dStack_110;
              local_5d8._0_8_ = local_118;
              local_5c8 = local_108;
            }
            dVar28 = auVar34._8_8_ * dVar28;
            local_5b8._8_4_ = SUB84(dVar33 * dVar20,0);
            local_5b8._0_8_ = dVar55 * dVar53;
            local_5b8._12_4_ = (int)((ulonglong)(dVar33 * dVar20) >> 0x20);
            local_5a8._8_4_ = SUB84(dVar28,0);
            local_5a8._0_8_ = dVar19 * dVar51;
            local_5a8._12_4_ = (int)((ulonglong)dVar28 >> 0x20);
            FUN_144a2c3ca(local_358,&local_658,&local_2f8);
            local_168 = DAT_14c8463b0;
            local_178 = DAT_14c8463a0;
            dStack_170 = DAT_14c8463a8;
            puVar8 = local_5f8;
            iVar6 = FUN_14079c05c(puVar8,&local_178,&local_528,&local_530);
            auVar34 = _DAT_149934d80;
            dVar53 = local_618._0_8_;
            dVar20 = local_618._8_8_;
            dVar51 = local_608._0_8_;
            auVar43 = *(undefined1 (*) [16])(lVar12 + 800);
            dVar55 = auVar43._0_8_;
            dVar28 = auVar43._8_8_;
            dVar19 = SUB168(*(undefined1 (*) [16])(lVar12 + 0x330),0);
            auVar43 = minpd(auVar43,local_618);
            auVar35 = minpd(*(undefined1 (*) [16])(lVar12 + 0x330),local_608);
            auVar29._8_8_ = -(ulonglong)(auVar43._8_8_ < 0.0);
            auVar29._0_8_ = -(ulonglong)(auVar43._0_8_ < 0.0);
            iVar5 = movmskpd(iVar6,auVar29);
            auVar36._8_8_ = -(ulonglong)(auVar35._8_8_ < 0.0);
            auVar36._0_8_ = -(ulonglong)(auVar35._0_8_ < 0.0);
            uVar3 = movmskpd((int)puVar8,auVar36);
            if ((uVar3 & 0x3fffffff) == 0 && iVar5 == 0) {
              dVar55 = *(double *)(lVar12 + 0x2e0);
              dVar19 = *(double *)(lVar12 + 0x2e8);
              dVar20 = *(double *)(lVar12 + 0x2f0);
              dVar28 = *(double *)(lVar12 + 0x2f8);
              dVar53 = dVar19 * local_648 * -1.0 +
                       dVar20 * dStack_650 + dVar28 * local_658 * 1.0 + dVar55 * dStack_640;
              dVar51 = dVar55 * local_648 * 1.0 +
                       dVar28 * dStack_650 + dVar20 * local_658 * -1.0 + dVar19 * dStack_640;
              auVar60._0_8_ =
                   dVar28 * local_648 * 1.0 +
                   ((local_658 * dVar19 * 1.0 + dStack_640 * dVar20) - dVar55 * dStack_650);
              auVar60._8_8_ =
                   dVar20 * local_648 * -1.0 +
                   ((local_658 * dVar55 * -1.0 + dStack_640 * dVar28) - dVar19 * dStack_650);
            }
            else {
              dVar46 = dStack_650 + dStack_650;
              dVar54 = local_648 + local_648;
              dVar33 = local_658 * (local_658 + local_658);
              dVar52 = (DAT_149934d80._8_8_ - (local_648 * dVar54 + dVar33)) * dVar20;
              dVar32 = (local_658 + local_658) * dStack_640;
              dStack_1b0 = (dVar54 * dStack_650 - dVar32) * dVar51;
              local_1b8 = (dVar46 * dStack_640 + local_658 * dVar54) * dVar51;
              local_1a8 = (1.0 - (dVar33 + dStack_650 * dVar46)) * dVar51;
              local_1c8 = (dVar54 * dStack_650 + dVar32) * dVar20;
              local_1e8 = (local_658 * dVar54 - dVar46 * dStack_640) * dVar53;
              local_1f8._8_8_ = (dVar46 * local_658 + dVar54 * dStack_640) * dVar53;
              local_1f8._0_8_ =
                   ((double)DAT_149934d80 - (local_648 * dVar54 + dStack_650 * dVar46)) * dVar53;
              uStack_1e0 = 0;
              local_1d8._8_4_ = SUB84(dVar52,0);
              local_1d8._0_8_ = (dVar46 * local_658 - dVar54 * dStack_640) * dVar20;
              local_1d8._12_4_ = (int)((ulonglong)dVar52 >> 0x20);
              uStack_1c0 = 0;
              uStack_1a0 = 0;
              local_198 = local_638;
              dStack_190 = dStack_630;
              local_188 = local_628;
              uStack_180 = 0x3ff0000000000000;
              dVar54 = *(double *)(lVar12 + 0x2e0);
              dVar32 = *(double *)(lVar12 + 0x2e8);
              dVar46 = *(double *)(lVar12 + 0x2f0);
              dVar50 = dVar32 + dVar32;
              dVar42 = dVar46 + dVar46;
              dVar40 = dVar54 * (dVar54 + dVar54);
              dVar52 = *(double *)(lVar12 + 0x2e0) * dVar42;
              dVar33 = *(double *)(lVar12 + 0x2f8);
              dVar41 = dVar42 * dVar33;
              dVar47 = (dVar54 + dVar54) * *(double *)(lVar12 + 0x2f8);
              dVar33 = dVar50 * dVar33;
              dStack_230 = (dVar42 * dVar32 - dVar47) * dVar19;
              local_278 = ((double)DAT_149934d80 - (dVar46 * dVar42 + dVar32 * dVar50)) * dVar55;
              dVar46 = (DAT_149934d80._8_8_ - (dVar46 * dVar42 + dVar40)) * dVar28;
              dStack_270 = (dVar50 * dVar54 + dVar41) * dVar55;
              local_248 = (dVar42 * dVar32 + dVar47) * dVar28;
              local_238 = (dVar33 + dVar52) * dVar19;
              local_268 = (dVar52 - dVar33) * dVar55;
              uStack_260 = 0;
              local_258._8_4_ = SUB84(dVar46,0);
              local_258._0_8_ = (dVar50 * dVar54 - dVar41) * dVar28;
              local_258._12_4_ = (int)((ulonglong)dVar46 >> 0x20);
              uStack_240 = 0;
              local_228 = (1.0 - (dVar40 + dVar32 * dVar50)) * dVar19;
              uStack_220 = 0;
              local_218 = *(double *)(lVar12 + 0x300);
              dStack_210 = *(double *)(lVar12 + 0x308);
              local_208 = *(double *)(lVar12 + 0x310);
              uStack_200 = 0x3ff0000000000000;
              FUN_1447fea8d(&local_178);
              FUN_144a1c686(&local_178,0x3e45798ee0000000);
              auVar21._8_8_ = -(ulonglong)(0.0 <= dVar20 * dVar28);
              auVar21._0_8_ = -(ulonglong)(0.0 <= dVar53 * dVar55);
              auVar43 = blendvpd(_DAT_149936790,auVar34,auVar21);
              uVar18 = -(ulonglong)(0.0 <= dVar51 * dVar19);
              dVar53 = (double)(~uVar18 & 0xbff0000000000000 | uVar18 & 0x3ff0000000000000);
              dVar51 = auVar43._0_8_;
              local_168 = local_168 * dVar51;
              dStack_170 = dStack_170 * dVar51;
              local_178 = local_178 * dVar51;
              dVar51 = auVar43._8_8_;
              local_148 = local_148 * dVar51;
              dStack_150 = dStack_150 * dVar51;
              local_158 = dVar51 * local_158;
              local_128 = local_128 * dVar53;
              local_130 = local_130 * dVar53;
              local_138 = dVar53 * local_138;
              FUN_14481fd10(&local_298,&local_178);
              dVar53 = local_288 * local_288 + local_298 * local_298;
              dVar51 = dStack_280 * dStack_280 + dStack_290 * dStack_290;
              auVar30._0_8_ = dVar53 + dVar51;
              auVar30._8_8_ = dVar53 + dVar51;
              auVar22._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar30._8_8_);
              auVar22._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar30._0_8_);
              auVar43 = sqrtpd(auVar30,auVar30);
              auVar43 = divpd(auVar34,auVar43);
              auVar37._0_8_ = auVar43._0_8_ * local_288;
              auVar37._8_8_ = auVar43._8_8_ * dStack_280;
              dVar53 = (double)((ulonglong)(local_298 * auVar43._0_8_) &
                               -(ulonglong)(9.99999993922529e-09 <= auVar30._0_8_));
              dVar51 = (double)((ulonglong)(dStack_290 * auVar43._8_8_) &
                               -(ulonglong)(9.99999993922529e-09 <= auVar30._8_8_));
              auVar60 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar37,auVar22);
            }
            dVar19 = auVar60._8_8_;
            dVar55 = auVar60._0_8_;
            if (iVar6 == 2) {
              dVar28 = dVar53 * 0.0 + dVar51 * -0.0;
              dVar33 = dVar51 - dVar55 * 0.0;
              dVar20 = dVar55 * 0.0 - dVar53;
              dVar28 = dVar28 + dVar28;
              dVar20 = dVar20 + dVar20;
              dVar33 = dVar33 + dVar33;
              local_518 = dVar19 * dVar28 + 1.0;
              local_528 = dVar19 * dVar33 + 0.0;
LAB_14079ab09:
              local_518 = (dVar53 * dVar20 - dVar33 * dVar51) + local_518;
              local_520 = (dVar55 * dVar33 - dVar28 * dVar53) + dVar19 * dVar20 + 0.0;
              local_528 = (dVar51 * dVar28 - dVar20 * dVar55) + local_528;
            }
            else {
              if (iVar6 == 0) {
                dVar20 = dVar55 - dVar53 * 0.0;
                dVar28 = dVar53 * 0.0 - dVar51;
                dVar33 = dVar51 * 0.0 + dVar55 * -0.0;
                dVar28 = dVar28 + dVar28;
                dVar20 = dVar20 + dVar20;
                dVar33 = dVar33 + dVar33;
                local_518 = dVar19 * dVar28 + 0.0;
                local_528 = dVar19 * dVar33 + 1.0;
                goto LAB_14079ab09;
              }
              if (iVar6 == 1) {
                dVar28 = dVar53 - dVar51 * 0.0;
                dVar20 = dVar55 * 0.0 + dVar53 * -0.0;
                dVar33 = dVar51 * 0.0 - dVar55;
                dVar28 = dVar28 + dVar28;
                dVar20 = dVar20 + dVar20;
                dVar33 = dVar33 + dVar33;
                local_518 = (dVar53 * dVar20 - dVar33 * dVar51) + dVar19 * dVar28 + 0.0;
                local_520 = (dVar55 * dVar33 - dVar28 * dVar53) + dVar19 * dVar20 + 1.0;
                local_528 = (dVar51 * dVar28 - dVar20 * dVar55) + dVar19 * dVar33 + 0.0;
              }
            }
            dVar55 = local_518 * local_530 * DAT_14c8463c8 +
                     local_528 * local_530 * DAT_14c8463b8 + local_520 * local_530 * DAT_14c8463c0;
            dVar51 = local_518 * local_530 - DAT_14c8463c8 * dVar55;
            dVar53 = local_520 * local_530 - DAT_14c8463c0 * dVar55;
            dVar55 = local_528 * local_530 - dVar55 * DAT_14c8463b8;
            dVar19 = dVar51 * dVar51 + dVar55 * dVar55 + dVar53 * dVar53;
            if (((dVar19 != 1.0) || (dVar20 = dVar51, dVar28 = dVar53, dVar33 = dVar55, NAN(dVar19))
                ) && (dVar20 = DAT_14c8464f0, dVar28 = DAT_14c8464e8, dVar33 = DAT_14c8464e0,
                     9.99999993922529e-09 <= dVar19)) {
              dVar19 = 1.0 / SQRT(dVar19);
              dVar20 = dVar51 * dVar19;
              dVar28 = dVar53 * dVar19;
              dVar33 = dVar55 * dVar19;
            }
            local_528 = dVar33;
            local_520 = dVar28;
            local_518 = dVar20;
            if (param_2 == 0) {
              FUN_144a2c3ca(&local_598,&local_178,&local_658);
              local_108 = local_148;
            }
            else if (param_2 == 1) {
              local_108 = (double)CONCAT44(uStack_2c4,local_2c8);
              local_158 = local_2d8;
              dStack_150 = dStack_2d0;
            }
            else {
              FUN_144a2c3ca(&local_598,&local_178,&local_658);
              local_108 = local_148;
            }
            local_148 = DAT_14c8463b8 * dVar28 - dVar33 * DAT_14c8463c0;
            local_160 = 0;
            local_140 = 0;
            local_138 = DAT_14c8463b8;
            local_130 = DAT_14c8463c0;
            local_128 = DAT_14c8463c8;
            local_120 = 0;
            local_100 = 0x3ff0000000000000;
            local_178 = dVar33;
            dStack_170 = dVar28;
            local_168 = dVar20;
            local_118 = local_158;
            local_158 = DAT_14c8463c0 * dVar20 - dVar28 * DAT_14c8463c8;
            dStack_110 = dStack_150;
            dStack_150 = DAT_14c8463c8 * dVar33 - dVar20 * DAT_14c8463b8;
            FUN_1448ac920(local_1f8,&local_178);
            dVar53 = local_668;
            iVar6 = local_6b4;
            if ((undefined8 *)local_1f8 != local_680) {
              puVar7 = (undefined8 *)local_1f8;
              puVar11 = local_680;
              for (lVar12 = 0xc; lVar12 != 0; lVar12 = lVar12 + -1) {
                *puVar11 = *puVar7;
                puVar7 = puVar7 + 1;
                puVar11 = puVar11 + 1;
              }
              *(undefined1 *)(param_4 + 0x24) = 1;
            }
          }
        }
      }
      local_6a8 = local_6a8 + 1;
      lVar10 = lVar10 + 0x18;
    } while ((longlong)local_6a8 < (longlong)(int)local_688[1]);
  }
  if ((local_f0 ^ (ulonglong)auStack_6d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14079c05c FUN_14079c05c body=1031 status=ok
// SIG undefined FUN_14079c05c(void)

void FUN_14079c05c(double *param_1,double *param_2,undefined4 *param_3,ulonglong *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  double *pdVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  undefined8 local_f0;
  double local_e8 [4];
  double local_c8;
  double local_c0;
  double local_b8;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_118;
  dVar14 = param_1[2];
  dVar16 = *param_1;
  dVar1 = param_1[1];
  dVar2 = param_1[3];
  dVar4 = dVar16 + dVar1 * -0.0;
  dVar15 = dVar1 * -0.0 + dVar16 * 0.0;
  dVar3 = dVar16 * 0.0 - dVar1;
  dVar5 = dVar14 + dVar16 * -0.0;
  dVar6 = dVar1 * 0.0 + dVar14 * -0.0;
  dVar3 = dVar3 + dVar3;
  dVar5 = dVar5 + dVar5;
  dVar6 = dVar6 + dVar6;
  pdVar10 = local_e8;
  local_f8 = (dVar1 * dVar3 - dVar5 * dVar14) + dVar2 * dVar6 + 1.0;
  local_f0 = (dVar14 * dVar6 - dVar3 * dVar16) + dVar2 * dVar5 + 0.0;
  local_e8[0] = (dVar16 * dVar5 - dVar6 * dVar1) + dVar2 * dVar3 + 0.0;
  dVar3 = dVar16 * -0.0 + dVar14 * 0.0;
  dVar5 = dVar1 * 0.0 - dVar14;
  dVar4 = dVar4 + dVar4;
  dVar3 = dVar3 + dVar3;
  dVar5 = dVar5 + dVar5;
  local_e8[1] = (dVar1 * dVar4 - dVar3 * dVar14) + dVar2 * dVar5 + 0.0;
  local_e8[2] = (dVar14 * dVar5 - dVar4 * dVar16) + dVar2 * dVar3 + 1.0;
  local_e8[3] = (dVar16 * dVar3 - dVar5 * dVar1) + dVar2 * dVar4 + 0.0;
  dVar4 = dVar14 * 0.0 - dVar16;
  dVar3 = dVar14 * -0.0 + dVar1;
  dVar15 = dVar15 + dVar15;
  dVar4 = dVar4 + dVar4;
  dVar3 = dVar3 + dVar3;
  local_c8 = (dVar1 * dVar15 - dVar4 * dVar14) + dVar2 * dVar3 + 0.0;
  local_c0 = (dVar14 * dVar3 - dVar15 * dVar16) + dVar2 * dVar4 + 0.0;
  local_b8 = (dVar16 * dVar4 - dVar3 * dVar1) + dVar2 * dVar15 + 1.0;
  dVar14 = *param_2;
  uVar13 = 0xffffffff;
  dVar16 = -1.79769313486232e+308;
  uVar12 = 0;
  do {
    dVar1 = param_2[2] * *pdVar10 + pdVar10[-2] * dVar14 + param_2[1] * pdVar10[-1];
    dVar2 = dVar1;
    if (param_4 != (ulonglong *)0x0) {
      dVar2 = ABS(dVar1);
    }
    dVar3 = dVar16;
    if (dVar16 < dVar2) {
      uVar13 = uVar12 & 0xffffffff;
      dVar3 = dVar2;
    }
    if ((param_4 != (ulonglong *)0x0) && (dVar16 < dVar2)) {
      *param_4 = -(ulonglong)(0.0 < dVar1) & 0x3ff0000000000000 |
                 ~-(ulonglong)(0.0 < dVar1) &
                 (ulonglong)((uint)(-(ulonglong)(dVar1 < 0.0) >> 0x20) & 0xbff00000) << 0x20;
      dVar14 = *param_2;
      uVar13 = uVar12 & 0xffffffff;
      dVar3 = dVar2;
    }
    dVar16 = dVar3;
    uVar12 = uVar12 + 1;
    pdVar10 = pdVar10 + 3;
  } while (uVar12 != 3);
  lVar11 = (longlong)(int)uVar13;
  *(double *)(param_3 + 4) = local_e8[lVar11 * 3];
  uVar7 = *(undefined4 *)((longlong)&local_f8 + lVar11 * 0x18 + 4);
  uVar8 = *(undefined4 *)(&local_f0 + lVar11 * 3);
  uVar9 = *(undefined4 *)((longlong)&local_f0 + lVar11 * 0x18 + 4);
  *param_3 = *(undefined4 *)(&local_f8 + lVar11 * 3);
  param_3[1] = uVar7;
  param_3[2] = uVar8;
  param_3[3] = uVar9;
  if ((local_b0 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14079c464 FUN_14079c464 body=208 status=ok
// SIG undefined FUN_14079c464(void)

void FUN_14079c464(longlong *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  longlong *plVar3;
  
  plVar1 = param_1 + 0x1a;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x1e) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x1d)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x1d)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = param_1 + 0x12;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x16) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x15)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x15)) {
    FUN_1400020a8(*plVar1);
  }
  FUN_14079c534(*param_1,(int)param_1[1]);
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14079c534 FUN_14079c534 body=176 status=ok
// SIG undefined FUN_14079c534(void)

void FUN_14079c534(longlong param_1,int param_2)

{
  longlong *plVar1;
  code *pcVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if (param_2 != 0) {
    puVar5 = (undefined8 *)(param_1 + 0x78);
    do {
      plVar1 = puVar5 + 7;
      pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                         (ulonglong)((uint)*(byte *)(puVar5 + 0xb) * 0x120));
      if (pcVar2 != (code *)0x0) {
        plVar3 = plVar1;
        if (0x18 < *(ushort *)(puVar5 + 10)) {
          plVar3 = (longlong *)*plVar1;
        }
        (*pcVar2)(plVar3);
      }
      if (0x18 < *(ushort *)(puVar5 + 10)) {
        FUN_1400020a8(*plVar1);
      }
      pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                         (ulonglong)((uint)*(byte *)(puVar5 + 4) * 0x120));
      if (pcVar2 != (code *)0x0) {
        puVar4 = puVar5;
        if (0x18 < *(ushort *)(puVar5 + 3)) {
          puVar4 = (undefined8 *)*puVar5;
        }
        (*pcVar2)(puVar4);
      }
      if (0x18 < *(ushort *)(puVar5 + 3)) {
        FUN_1400020a8(*puVar5);
      }
      puVar5 = puVar5 + 0x1e;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14079c5e4 FUN_14079c5e4 body=353 status=ok
// SIG undefined FUN_14079c5e4(void)

undefined8 * FUN_14079c5e4(ulonglong *param_1,undefined8 param_2,undefined4 param_3)

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
  puVar1 = (undefined8 *)FUN_14001cc68(0x70,0);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952420) {
    FUN_144b3d300(&DAT_14c952420);
    if (DAT_14c952420 == -1) {
      FUN_14475b26a();
      local_40 = FUN_14079c5e4;
      local_48 = &DAT_14c9520b8;
      local_58 = 0x101008001;
      local_50 = 0;
      FUN_14000176a(&DAT_14c9523d0,L"FDoubleProperty",0x100000000,0);
      atexit(FUN_1428170bb);
      _Init_thread_footer(&DAT_14c952420);
    }
  }
  puVar1[1] = &DAT_14c9523d0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x1c) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x24) = 0;
  puVar1[0xd] = 0;
  *puVar1 = &PTR_LAB_149e712b0;
  local_30 = *param_1;
  if ((((local_30 & 1) != 0) && ((local_30 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')
     ) {
    FUN_1456cec3c();
  }
  FUN_14079c746(puVar1,&local_30,param_2,param_3);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14079c746 FUN_14079c746 body=132 status=ok
// SIG undefined FUN_14079c746(void)

undefined8 *
FUN_14079c746(undefined8 *param_1,ulonglong *param_2,undefined8 param_3,undefined4 param_4)

{
  undefined1 auStack_48 [32];
  ulonglong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_2;
  if ((((local_28 & 1) != 0) && ((local_28 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')
     ) {
    FUN_1456cec3c();
  }
  FUN_14079c7cc(param_1,&local_28,param_3,param_4);
  *param_1 = &PTR_LAB_149e712b0;
  *(byte *)((longlong)param_1 + 0x3e) = *(byte *)((longlong)param_1 + 0x3e) | 8;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14079c7cc FUN_14079c7cc body=128 status=ok
// SIG undefined FUN_14079c7cc(void)

undefined8 *
FUN_14079c7cc(undefined8 *param_1,ulonglong *param_2,undefined8 param_3,undefined4 param_4)

{
  undefined1 auStack_48 [32];
  ulonglong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_2;
  if ((((local_28 & 1) != 0) && ((local_28 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')
     ) {
    FUN_1456cec3c();
  }
  FUN_14079c84e(param_1,&local_28,param_3,param_4);
  *param_1 = &PTR_LAB_149e9f4e0;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14079c84e FUN_14079c84e body=128 status=ok
// SIG undefined FUN_14079c84e(void)

undefined8 *
FUN_14079c84e(undefined8 *param_1,ulonglong *param_2,undefined8 param_3,undefined4 param_4)

{
  undefined1 auStack_48 [32];
  ulonglong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_2;
  if ((((local_28 & 1) != 0) && ((local_28 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')
     ) {
    FUN_1456cec3c();
  }
  FUN_14079c8d0(param_1,&local_28,param_3,param_4);
  *param_1 = &PTR_LAB_149e9f750;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14079c8d0 FUN_14079c8d0 body=135 status=ok
// SIG undefined FUN_14079c8d0(void)

undefined8 *
FUN_14079c8d0(undefined8 *param_1,ulonglong *param_2,undefined8 param_3,undefined4 param_4)

{
  undefined1 auStack_48 [32];
  ulonglong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_2;
  if ((((local_28 & 1) != 0) && ((local_28 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')
     ) {
    FUN_1456cec3c();
  }
  FUN_1405ebf1c(param_1,&local_28,param_3,param_4);
  *param_1 = &PTR_LAB_149e9f9c0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 8;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14079c958 FUN_14079c958 body=114 status=ok
// SIG undefined FUN_14079c958(void)

void FUN_14079c958(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  if (((*(int *)(param_1 + 0xc) != 0) && (uVar1 = *(uint *)(param_1 + 8), -1 < (int)uVar1)) &&
     ((int)uVar1 < DAT_14c9647dc)) {
    plVar2 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar2 != (longlong *)0x0) && ((int)plVar2[2] == *(int *)(param_1 + 0xc))) &&
       (((*(uint *)(plVar2 + 1) & 0x10200000) == 0 && (*plVar2 != 0)))) {
      FUN_14079c9ca();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014079c9c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x10));
  return;
}



// FUNCTION 14079c9ca FUN_14079c9ca body=3709 status=ok
// SIG undefined FUN_14079c9ca(void)

void FUN_14079c9ca(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  bool bVar11;
  bool bVar12;
  ulonglong uVar13;
  char cVar14;
  byte bVar15;
  int iVar16;
  DWORD DVar17;
  DWORD DVar18;
  longlong lVar19;
  undefined4 *puVar20;
  uint *puVar21;
  undefined8 uVar22;
  uint uVar23;
  longlong *plVar24;
  uint *puVar25;
  undefined8 *puVar26;
  int iVar27;
  ulonglong uVar28;
  undefined1 auStack_1b8 [32];
  code **local_198;
  int local_18c;
  longlong *local_188;
  longlong *plStack_180;
  longlong lStack_178;
  undefined4 local_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 local_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 local_150;
  undefined4 uStack_14c;
  longlong lStack_148;
  longlong *local_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  longlong local_128;
  longlong *local_120;
  longlong *plStack_118;
  int local_110;
  undefined4 uStack_10c;
  undefined8 uStack_108;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined8 uStack_e4;
  undefined8 uStack_dc;
  undefined8 local_d4;
  undefined8 uStack_cc;
  undefined4 local_c4;
  longlong local_c0;
  longlong *plStack_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined8 uStack_a8;
  longlong local_a0;
  longlong *plStack_98;
  longlong *local_90;
  code *local_88 [2];
  longlong *local_78;
  longlong local_68 [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  lVar19 = FUN_1447b4020();
  if (lVar19 == 0) goto LAB_14079d1a6;
  iVar16 = *(int *)(param_1 + 0x170);
  iVar4 = *(int *)(param_1 + 0x174);
  uVar22 = *(undefined8 *)(param_1 + 0x170);
  iVar5 = *(int *)(param_1 + 0x178);
  iVar27 = *(int *)(param_1 + 0x17c);
  FUN_141571642(param_1);
  iVar6 = *(int *)(param_1 + 0x194);
  if (((((iVar6 == 0) || (uVar23 = *(uint *)(param_1 + 400), (int)uVar23 < 0)) ||
       (DAT_14c9647dc <= (int)uVar23)) ||
      ((lVar19 = (ulonglong)((uVar23 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar23 >> 0x10) * 8), lVar19 == 0 ||
       (*(int *)(lVar19 + 0x10) != iVar6)))) || ((*(uint *)(lVar19 + 8) & 0x10200000) != 0)) {
    if ((*(float *)(param_1 + 0x1b0) == *(float *)(param_1 + 0x13c)) &&
       (!NAN(*(float *)(param_1 + 0x1b0)) && !NAN(*(float *)(param_1 + 0x13c)))) {
      if ((*(float *)(param_1 + 0x1b4) == *(float *)(param_1 + 0x140)) &&
         (!NAN(*(float *)(param_1 + 0x1b4)) && !NAN(*(float *)(param_1 + 0x140)))) {
        if ((*(float *)(param_1 + 0x1b8) == *(float *)(param_1 + 0x144)) &&
           (!NAN(*(float *)(param_1 + 0x1b8)) && !NAN(*(float *)(param_1 + 0x144)))) {
          if ((*(float *)(param_1 + 0x1bc) == *(float *)(param_1 + 0x148)) &&
             (((!NAN(*(float *)(param_1 + 0x1bc)) && !NAN(*(float *)(param_1 + 0x148)) &&
               (*(byte *)(param_1 + 0x1c0) == (*(byte *)(param_1 + 0xfe) & 1))) &&
              (*(char *)(param_1 + 0x1c1) != '\0')))) goto LAB_14079d1a6;
        }
      }
    }
  }
  *(undefined8 *)(param_1 + 0x1b0) = *(undefined8 *)(param_1 + 0x13c);
  *(undefined8 *)(param_1 + 0x1b8) = *(undefined8 *)(param_1 + 0x144);
  *(byte *)(param_1 + 0x1c0) = *(byte *)(param_1 + 0xfe) & 1;
  local_d4 = 0;
  uStack_cc = 0;
  uStack_e4 = 0;
  uStack_dc = 0;
  local_c0 = 0;
  plStack_b8 = (longlong *)0x0;
  uStack_a8 = (code *)0x8000000000000000;
  local_a0 = 0;
  plStack_98 = (longlong *)0x0;
  local_90 = (longlong *)0x0;
  if (((((iVar6 == 0) || (uVar23 = *(uint *)(param_1 + 400), (int)uVar23 < 0)) ||
       ((DAT_14c9647dc <= (int)uVar23 ||
        ((plVar24 = (longlong *)
                    ((ulonglong)((uVar23 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar23 >> 0x10) * 8)),
         plVar24 == (longlong *)0x0 || ((int)plVar24[2] != iVar6)))))) ||
      ((*(uint *)(plVar24 + 1) & 0x10200000) != 0)) || (lVar19 = *plVar24, lVar19 == 0)) {
    if (*(char *)(param_1 + 0x13a) != '\0') {
LAB_14079cc5b:
      bVar12 = false;
      goto LAB_14079cfcd;
    }
    bVar12 = false;
    if ((((*(int *)(param_1 + 0x170) != iVar16) || (*(int *)(param_1 + 0x174) != iVar4)) ||
        (*(int *)(param_1 + 0x178) != iVar5)) ||
       (bVar12 = false, *(int *)(param_1 + 0x17c) != iVar27)) goto LAB_14079cfcd;
  }
  else {
    lVar7 = *(longlong *)(lVar19 + 0x130);
    plVar24 = *(longlong **)(lVar19 + 0x138);
    if (plVar24 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar24 + 1) = (int)plVar24[1] + 1;
      UNLOCK();
    }
    lVar8 = *(longlong *)(lVar7 + 0x260);
    plVar9 = *(longlong **)(lVar7 + 0x268);
    local_18c = iVar27;
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
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
    if (plVar24 != (longlong *)0x0) {
      LOCK();
      plVar9 = plVar24 + 1;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)*plVar9 == 0) {
        (**(code **)*plVar24)(plVar24);
        LOCK();
        piVar1 = (int *)((longlong)plVar24 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar24 + 0x10))(plVar24);
        }
      }
    }
    if (lVar8 != 0) {
      lVar7 = *(longlong *)(lVar19 + 0x130);
      plVar24 = *(longlong **)(lVar19 + 0x138);
      if (plVar24 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar24 + 1) = (int)plVar24[1] + 1;
        UNLOCK();
      }
      plVar9 = *(longlong **)(lVar7 + 0x260);
      plVar10 = *(longlong **)(lVar7 + 0x268);
      if (plVar10 == (longlong *)0x0) {
        cVar14 = (**(code **)(*plVar9 + 200))(plVar9,1);
      }
      else {
        LOCK();
        *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
        UNLOCK();
        cVar14 = (**(code **)(*plVar9 + 200))(plVar9,1);
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
      iVar27 = local_18c;
      if (plVar24 != (longlong *)0x0) {
        LOCK();
        plVar9 = plVar24 + 1;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)*plVar9 == 0) {
          (**(code **)*plVar24)(plVar24);
          LOCK();
          piVar1 = (int *)((longlong)plVar24 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar24 + 0x10))(plVar24);
          }
        }
      }
      if (cVar14 == '\0') {
        cVar14 = FUN_1477ffcde(*(undefined8 *)(lVar19 + 0x130));
        if (((cVar14 == '\0') &&
            (cVar14 = FUN_1477ffd48(*(undefined8 *)(lVar19 + 0x130)), cVar14 == '\0')) &&
           (cVar14 = FUN_1477ffdb2(*(undefined8 *)(lVar19 + 0x130)), cVar14 == '\0')) {
          *(undefined4 *)(param_1 + 0x150) = 0;
          *(undefined1 *)(param_1 + 0x154) = 0;
          cVar14 = *(char *)(param_1 + 0x13a);
          goto joined_r0x00014079d1ec;
        }
        local_188 = (longlong *)0x0;
        plStack_180 = (longlong *)0x0;
        cVar14 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x1c8) + 0x20) + 8))
                           (*(longlong *)(param_1 + 0x1c8) + 0x20);
        if (cVar14 == '\0') {
          bVar12 = false;
        }
        else {
          FUN_147814054(param_1,&local_188);
          bVar15 = (**(code **)(*local_188 + 0x80))();
          *(byte *)(param_1 + 0xfe) = *(byte *)(param_1 + 0xfe) & 0xfe | bVar15;
          *(byte *)(param_1 + 0x1c0) = bVar15;
          bVar15 = (**(code **)(*local_188 + 0x10))();
          if (bVar15 < 2) {
            bVar15 = *(byte *)(param_1 + 0x14d);
          }
          else {
            bVar15 = (**(code **)(*local_188 + 0x10))();
          }
          *(uint *)(param_1 + 0x210) = (uint)bVar15;
          bVar12 = true;
        }
        local_c0 = *(longlong *)(param_1 + 0x1c8) + 0x20;
        if (*(longlong *)(param_1 + 0x1c8) == 0) {
          local_c0 = 0;
        }
        plVar24 = *(longlong **)(param_1 + 0x1d0);
        plVar9 = plStack_b8;
        if (plStack_b8 != plVar24) {
          if (plVar24 != (longlong *)0x0) {
            LOCK();
            *(int *)((longlong)plVar24 + 0xc) = *(int *)((longlong)plVar24 + 0xc) + 1;
            UNLOCK();
          }
          plVar9 = plVar24;
          if (plStack_b8 != (longlong *)0x0) {
            LOCK();
            piVar1 = (int *)((longlong)plStack_b8 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plStack_b8 + 0x10))();
            }
          }
        }
        plStack_b8 = plVar9;
        local_c4 = FUN_1477ff1e0(*(undefined8 *)(lVar19 + 0x130));
        FUN_1477ff2d4(*(undefined8 *)(lVar19 + 0x130),local_88);
        plVar24 = plStack_180;
        uStack_a8 = local_88[0];
        local_a0 = 0;
        if (plStack_180 != (longlong *)0x0) {
          LOCK();
          plVar9 = plStack_180 + 1;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          if ((int)*plVar9 == 0) {
            (**(code **)*plStack_180)(plStack_180);
            LOCK();
            piVar1 = (int *)((longlong)plVar24 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar24 + 0x10))(plVar24);
            }
          }
        }
      }
      else {
        local_188 = (longlong *)0x0;
        plStack_180 = (longlong *)0x0;
        do {
          cVar14 = (*(code *)**(undefined8 **)(*(longlong *)(param_1 + 0x1c8) + 0x20))
                             (*(longlong *)(param_1 + 0x1c8) + 0x20,&local_188);
          plVar24 = local_188;
        } while (cVar14 != '\0');
        if (local_188 == (longlong *)0x0) {
          bVar12 = false;
        }
        else {
          FUN_147814054(param_1,&local_188);
          plVar9 = local_90;
          if (plStack_180 != (longlong *)0x0) {
            LOCK();
            *(int *)(plStack_180 + 1) = (int)plStack_180[1] + 1;
            UNLOCK();
          }
          plStack_98 = local_188;
          local_90 = plStack_180;
          if (plVar9 != (longlong *)0x0) {
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
          local_c4 = FUN_1477ff1e0(*(undefined8 *)(lVar19 + 0x130));
          (**(code **)(*local_188 + 0x60))(local_188,&uStack_a8);
          bVar15 = (**(code **)(*local_188 + 0x80))();
          *(byte *)(param_1 + 0xfe) = *(byte *)(param_1 + 0xfe) & 0xfe | bVar15;
          *(byte *)(param_1 + 0x1c0) = bVar15;
          bVar15 = (**(code **)(*local_188 + 0x10))();
          if (bVar15 < 2) {
            bVar15 = *(byte *)(param_1 + 0x14d);
          }
          else {
            bVar15 = (**(code **)(*local_188 + 0x10))();
          }
          *(uint *)(param_1 + 0x210) = (uint)bVar15;
          bVar12 = true;
        }
        plVar9 = plStack_180;
        if (plStack_180 != (longlong *)0x0) {
          LOCK();
          plVar10 = plStack_180 + 1;
          *(int *)plVar10 = (int)*plVar10 + -1;
          UNLOCK();
          if ((int)*plVar10 == 0) {
            (**(code **)*plStack_180)(plStack_180);
            LOCK();
            piVar1 = (int *)((longlong)plVar9 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar9 + 0x10))(plVar9);
            }
          }
        }
        iVar27 = local_18c;
        if (plVar24 == (longlong *)0x0) goto LAB_14079d199;
      }
LAB_14079cfcd:
      if (*(char *)(param_1 + 0x14e) == '\0') {
        *(char *)(param_1 + 0xf1) = (1 < *(int *)(param_1 + 0x210)) + '\x01';
      }
      local_f8 = CONCAT31(local_f8._1_3_,*(undefined1 *)(param_1 + 0x13a));
      uStack_f4 = (undefined4)*(undefined8 *)(param_1 + 0x13c);
      uStack_f0 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x13c) >> 0x20);
      uStack_ec = (undefined4)*(undefined8 *)(param_1 + 0x144);
      uStack_e8 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x144) >> 0x20);
      uStack_cc = CONCAT44(iVar27,iVar5);
      uStack_e4 = *(undefined8 *)(param_1 + 0x170);
      uStack_dc = *(undefined8 *)(param_1 + 0x178);
      local_b0 = CONCAT31(local_b0._1_3_,*(undefined1 *)(param_1 + 0x14d));
      local_d4 = uVar22;
      lVar19 = FUN_1447b4020(param_1);
      local_188 = (longlong *)(lVar19 + -0x10);
      if (lVar19 == 0) {
        local_188 = (longlong *)0x0;
      }
      local_110 = *(int *)(param_1 + 0x218);
      plStack_180 = (longlong *)CONCAT44(uStack_f4,local_f8);
      lStack_178 = CONCAT44(uStack_ec,uStack_f0);
      local_170 = uStack_e8;
      uStack_16c = (undefined4)uStack_e4;
      uStack_168 = uStack_e4._4_4_;
      uStack_164 = (undefined4)uStack_dc;
      local_160 = uStack_dc._4_4_;
      uStack_15c = (undefined4)local_d4;
      uStack_158 = local_d4._4_4_;
      uStack_154 = (undefined4)uStack_cc;
      local_150 = uStack_cc._4_4_;
      uStack_14c = local_c4;
      lStack_148 = local_c0;
      local_140 = plStack_b8;
      if (plStack_b8 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plStack_b8 + 0xc) = *(int *)((longlong)plStack_b8 + 0xc) + 1;
        UNLOCK();
      }
      local_128 = local_a0;
      local_138 = local_b0;
      uStack_134 = uStack_ac;
      uStack_130 = (undefined4)uStack_a8;
      uStack_12c = uStack_a8._4_4_;
      local_120 = plStack_98;
      plStack_118 = local_90;
      if (local_90 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_90 + 1) = (int)local_90[1] + 1;
        UNLOCK();
      }
      lVar19 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      iVar16 = *(int *)(lVar19 + 0xc60);
      uStack_108 = param_1;
      if (DAT_14c86a9fc != 0) {
LAB_14079d100:
        if (iVar16 != 0x10) goto LAB_14079d227;
LAB_14079d10c:
        if ((uStack_108 != 0) && ((longlong)DAT_14ca414c0 != 0)) {
          lVar19 = 0;
          bVar11 = false;
          do {
            if (*(longlong *)(DAT_14ca414b8 + 0x18 + lVar19) ==
                *(longlong *)(*(longlong *)(uStack_108 + 0x128) + 0x10)) goto LAB_14079d834;
            lVar19 = lVar19 + 0x30;
          } while ((longlong)DAT_14ca414c0 * 0x30 != lVar19);
          goto LAB_14079d126;
        }
LAB_14079d124:
        bVar11 = false;
        goto LAB_14079d126;
      }
      if (iVar16 == 2) goto LAB_14079d10c;
      if (iVar16 != 1) goto LAB_14079d100;
      DVar17 = FUN_140ad26c0();
      DVar18 = GetCurrentThreadId();
      if (DVar17 == DVar18) goto LAB_14079d10c;
LAB_14079d227:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar16 = *(int *)(lVar19 + 0xc60), iVar16 == 2)) {
LAB_14079d7cf:
          if ((uStack_108 != 0) && ((longlong)DAT_14ca414c0 != 0)) {
            lVar19 = 0;
            bVar11 = false;
            do {
              if (*(longlong *)(DAT_14ca414b8 + 0x18 + lVar19) ==
                  *(longlong *)(*(longlong *)(uStack_108 + 0x128) + 0x10)) goto LAB_14079d834;
              lVar19 = lVar19 + 0x30;
            } while ((longlong)DAT_14ca414c0 * 0x30 != lVar19);
            goto LAB_14079d126;
          }
          goto LAB_14079d124;
        }
        if (iVar16 == 1) {
          DVar17 = FUN_140ad26c0();
          DVar18 = GetCurrentThreadId();
          if (DVar17 == DVar18) goto LAB_14079d7cf;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar21 = (uint *)*puVar2;
        if (puVar21 != (uint *)0x0) goto LAB_14079d30a;
        while( true ) {
          uVar23 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar23 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar23 | 1;
            __tlregdtor(&LAB_14337725b);
          }
          lVar19 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar20 = *(undefined4 **)(lVar19 + 0x310);
          *(undefined8 *)(lVar19 + 0x310) = 0;
          if (puVar20 == (undefined4 *)0x0) {
            puVar20 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar20 = 0xffffffff;
          *(undefined4 **)(puVar20 + 0x10) = puVar20 + 0x16;
          puVar20[0x12] = 0;
          *puVar2 = puVar20;
          FUN_140217a48(puVar2);
          puVar21 = (uint *)*puVar2;
LAB_14079d30a:
          puVar26 = (undefined8 *)(*(longlong *)(puVar21 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar25 = (uint *)(puVar26 + 0x26);
          uVar23 = puVar21[0x12];
          if (puVar25 <= puVar21 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar21 + 0x10) = puVar21 + 0x4000;
            LOCK();
            uVar3 = *puVar21;
            *puVar21 = *puVar21 + uVar23 + 1;
            UNLOCK();
            if ((uVar3 ^ uVar23) != 0xffffffff) break;
            puVar21 = (uint *)*puVar2;
            *puVar21 = 0xffffffff;
            *(uint **)(puVar21 + 0x10) = puVar21 + 0x16;
            puVar21[0x12] = 0;
            *puVar2 = puVar21;
            puVar26 = (undefined8 *)((longlong)puVar21 + 0x5fU & 0xfffffffffffffff8);
            puVar25 = (uint *)(puVar26 + 0x26);
            uVar23 = 0;
            if (puVar25 <= puVar21 + 0x4000) {
              uVar23 = 1;
              goto LAB_14079d38a;
            }
          }
        }
        uVar23 = uVar23 + 1;
LAB_14079d38a:
        *(uint **)(puVar21 + 0x10) = puVar25;
        puVar21[0x12] = uVar23;
        iVar16 = 0;
        FUN_1447247dc(puVar26,0);
        *puVar26 = &PTR_FUN_14a598e18;
        puVar26[0x15] = local_188;
        puVar26[0x1c] = CONCAT44(uStack_14c,local_150);
        *(undefined4 *)(puVar26 + 0x1a) = local_160;
        *(undefined4 *)((longlong)puVar26 + 0xd4) = uStack_15c;
        *(undefined4 *)(puVar26 + 0x1b) = uStack_158;
        *(undefined4 *)((longlong)puVar26 + 0xdc) = uStack_154;
        puVar26[0x18] = CONCAT44(uStack_16c,local_170);
        puVar26[0x19] = CONCAT44(uStack_164,uStack_168);
        puVar26[0x16] = plStack_180;
        puVar26[0x17] = lStack_178;
        puVar26[0x1d] = lStack_148;
        puVar26[0x1e] = local_140;
        lStack_148 = 0;
        local_140 = (longlong *)0x0;
        puVar26[0x21] = local_128;
        *(undefined4 *)(puVar26 + 0x1f) = local_138;
        *(undefined4 *)((longlong)puVar26 + 0xfc) = uStack_134;
        *(undefined4 *)(puVar26 + 0x20) = uStack_130;
        *(undefined4 *)((longlong)puVar26 + 0x104) = uStack_12c;
        puVar26[0x22] = local_120;
        puVar26[0x23] = plStack_118;
        local_120 = (longlong *)0x0;
        plStack_118 = (longlong *)0x0;
        *(int *)(puVar26 + 0x24) = local_110;
        *(undefined4 *)((longlong)puVar26 + 0x124) = uStack_10c;
        *(undefined4 *)(puVar26 + 0x25) = (undefined4)uStack_108;
        *(undefined4 *)((longlong)puVar26 + 300) = uStack_108._4_4_;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar23 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar23 < 2) {
            uVar28 = (ulonglong)(byte)(&DAT_149e38edc)[uVar23];
            iVar16 = 0;
          }
          else {
            uVar28 = 2;
          }
        }
        else {
          iVar16 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                   *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar28 = 5;
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
        lVar19 = *(longlong *)
                  (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x2b8);
        if (lVar19 == 0) {
          uVar13 = 1;
          if ((char)uVar28 != '\x06') {
            uVar13 = uVar28;
          }
          uVar28 = uVar13;
          uVar22 = 0;
        }
        else {
          if ((char)uVar28 == '\x06') {
            uVar28 = *(ulonglong *)(lVar19 + 0x38) >> 0x3b;
          }
          uVar22 = *(undefined8 *)(lVar19 + 0x30);
        }
        puVar26[0xf] = uVar22;
        puVar26[0x10] = uVar28 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar26 + 0x1c) = iVar16;
        if (puVar26 == (undefined8 *)0x0) {
          local_88[0] = (code *)CONCAT71(local_88[0]._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar26 + 1) = *(int *)(puVar26 + 1) + 1;
          UNLOCK();
          local_88[0] = (code *)CONCAT71(local_88[0]._1_7_,1);
          FUN_1447439e4(puVar26);
          LOCK();
          piVar1 = (int *)(puVar26 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar26)(puVar26,1);
          }
        }
      }
      else {
        local_88[0] = (code *)0x0;
        local_78 = (longlong *)FUN_14001cc68(0x90,8);
        *local_78 = (longlong)&PTR_LAB_14a598dc0;
        local_78[1] = (longlong)local_188;
        local_78[8] = CONCAT44(uStack_14c,local_150);
        *(undefined4 *)(local_78 + 6) = local_160;
        *(undefined4 *)((longlong)local_78 + 0x34) = uStack_15c;
        *(undefined4 *)(local_78 + 7) = uStack_158;
        *(undefined4 *)((longlong)local_78 + 0x3c) = uStack_154;
        local_78[4] = CONCAT44(uStack_16c,local_170);
        local_78[5] = CONCAT44(uStack_164,uStack_168);
        local_78[2] = (longlong)plStack_180;
        local_78[3] = lStack_178;
        local_78[9] = lStack_148;
        local_78[10] = (longlong)local_140;
        lStack_148 = 0;
        local_140 = (longlong *)0x0;
        local_78[0xd] = local_128;
        *(undefined4 *)(local_78 + 0xb) = local_138;
        *(undefined4 *)((longlong)local_78 + 0x5c) = uStack_134;
        *(undefined4 *)(local_78 + 0xc) = uStack_130;
        *(undefined4 *)((longlong)local_78 + 100) = uStack_12c;
        local_78[0xe] = (longlong)local_120;
        local_78[0xf] = (longlong)plStack_118;
        local_120 = (longlong *)0x0;
        plStack_118 = (longlong *)0x0;
        *(int *)(local_78 + 0x10) = local_110;
        *(undefined4 *)((longlong)local_78 + 0x84) = uStack_10c;
        *(undefined4 *)(local_78 + 0x11) = (undefined4)uStack_108;
        *(undefined4 *)((longlong)local_78 + 0x8c) = uStack_108._4_4_;
        if (local_78 + 1 != (longlong *)0x0) {
          local_88[0] = FUN_14337740e;
        }
        local_198 = local_88;
        FUN_14005a792(&DAT_14ca9a440,L"MediaTextureResourceRender",&DAT_14cabc970);
        if (local_88[0] != (code *)0x0) {
          plVar24 = local_78;
          if (local_78 == (longlong *)0x0) {
            plVar24 = local_68;
          }
          (**(code **)(*plVar24 + 0x10))();
        }
      }
      goto LAB_14079d17f;
    }
    *(undefined4 *)(param_1 + 0x150) = 0;
    *(undefined1 *)(param_1 + 0x154) = 0;
    cVar14 = *(char *)(param_1 + 0x13a);
    iVar27 = local_18c;
joined_r0x00014079d1ec:
    if (cVar14 != '\0') goto LAB_14079cc5b;
  }
  goto LAB_14079d199;
LAB_14079d834:
  bVar11 = true;
  *(undefined1 *)(DAT_14ca414b8 + 0x2c + lVar19) = 1;
  DAT_14ca41520 = 1;
LAB_14079d126:
  if (local_110 == 1) {
    FUN_1478158cc(local_188,&plStack_180);
  }
  else {
    lVar19 = local_188[0x25];
    if (lVar19 != 0) {
      local_188[0x25] = 0;
      FUN_14781409a(lVar19);
      FUN_1400020a8(lVar19);
    }
    FUN_143370192(local_188,&plStack_180);
  }
  if (bVar11) {
    DAT_14ca41520 = 0;
  }
LAB_14079d17f:
  FUN_14781409a(&plStack_180);
  *(byte *)(param_1 + 0x1c1) = !bVar12 & *(byte *)(param_1 + 0x13a);
LAB_14079d199:
  FUN_14781409a(&local_f8);
LAB_14079d1a6:
  if ((local_48 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14079d848 FUN_14079d848 body=37 status=ok
// SIG undefined FUN_14079d848(void)

void FUN_14079d848(longlong param_1)

{
  FUN_14079d86e();
  if (0 < *(int *)(param_1 + 0x850)) {
    *(byte *)(param_1 + 0x89e) = *(byte *)(param_1 + 0x89e) | 8;
  }
  return;
}



// FUNCTION 14079d86e FUN_14079d86e body=155 status=ok
// SIG undefined FUN_14079d86e(void)

void FUN_14079d86e(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_144842962();
  lVar2 = param_1[0xcb];
  if (lVar2 != 0) {
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c();
      lVar2 = param_1[0xcb];
    }
    param_1[0xcc] = lVar2;
  }
  local_28 = 0x697dd581;
  uStack_24 = 0xe64f41ab;
  uStack_20 = 0xaa4a51ec;
  uStack_1c = 0xbeb7b628;
  iVar1 = FUN_1448a256a(param_1);
  if (iVar1 < 0x57) {
    *(bool *)(param_1 + 0xd0) = param_1[0xd1] != 0;
  }
  (**(code **)(*param_1 + 0x310))(param_1);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14079d90a FUN_14079d90a body=177 status=ok
// SIG undefined FUN_14079d90a(void)

void FUN_14079d90a(longlong param_1)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  
  uVar4 = (ulonglong)*(int *)(param_1 + 0x18);
  if (0 < (longlong)uVar4) {
    iVar5 = -*(int *)(param_1 + 0x18);
    lVar6 = uVar4 * 0x48;
    do {
      cVar2 = FUN_14079e1ea(*(longlong *)(param_1 + 0x10) + lVar6 + -0x40,0);
      if (cVar2 != '\0') {
        uVar3 = *(uint *)(param_1 + 0x18);
        if (uVar4 != uVar3) {
          memmove((void *)(*(longlong *)(param_1 + 0x10) + lVar6 + -0x48),
                  (void *)(*(longlong *)(param_1 + 0x10) + lVar6),
                  (longlong)(int)(uVar3 + iVar5) * 0x48);
          uVar3 = *(uint *)(param_1 + 0x18);
        }
        *(uint *)(param_1 + 0x18) = uVar3 - 1;
        FUN_140ec65ee((longlong *)(param_1 + 0x10));
      }
      iVar5 = iVar5 + 1;
      lVar6 = lVar6 + -0x48;
      bVar1 = 1 < uVar4;
      uVar4 = uVar4 - 1;
    } while (bVar1);
  }
  FUN_14079d9e4(param_1 + -0x20);
  FUN_14079d9bc(param_1 + -0x20);
  return;
}



// FUNCTION 14079d9bc FUN_14079d9bc body=40 status=ok
// SIG undefined FUN_14079d9bc(void)

void FUN_14079d9bc(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  undefined1 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  
  iVar2 = *(int *)(param_1 + 0x38);
  if ((bool)*(char *)(param_1 + 0x50) == 0 < iVar2) {
    return;
  }
  plVar1 = (longlong *)(param_1 + 0x20);
  *(bool *)(param_1 + 0x50) = 0 < iVar2;
  if (iVar2 < 1) {
    FUN_1449db8d8();
    return;
  }
  if ((DAT_14c86a9f8 == '\x01') &&
     (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0xc60) == 1)) {
    FUN_140ad26c0();
    GetCurrentThreadId();
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb0bab8) {
    FUN_144b3d300(&DAT_14cb0bab8);
    if (DAT_14cb0bab8 == -1) {
      FUN_146408b70(&DAT_14cb0ba00);
      atexit((_func_5014 *)&LAB_14373e0ae);
      _Init_thread_footer(&DAT_14cb0bab8);
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14cb0ba38);
  FUN_140548616(&DAT_14cb0ba60);
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cb0ba38);
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14cb0ba00);
  if ((longlong)(int)DAT_14cb0ba30 != 0) {
    lVar7 = 0;
    do {
      if (*(longlong **)(DAT_14cb0ba28 + lVar7) == plVar1) goto LAB_144958e23;
      lVar7 = lVar7 + 0x10;
    } while ((longlong)(int)DAT_14cb0ba30 * 0x10 != lVar7);
  }
  if (DAT_14c963ff1 == '\x01') {
    FUN_14032851c(&DAT_14cb0ba00,plVar1);
  }
  else {
    uVar5 = (**(code **)(*plVar1 + 8))(plVar1);
    uVar6 = (**(code **)(*plVar1 + 0x28))(plVar1);
    uVar4 = DAT_14cb0ba30;
    lVar7 = (longlong)(int)DAT_14cb0ba30;
    DAT_14cb0ba30 = DAT_14cb0ba30 + 1;
    if (DAT_14cb0ba34 < DAT_14cb0ba30) {
      FUN_14084398e(&DAT_14cb0ba28,uVar4);
    }
    lVar3 = DAT_14cb0ba28;
    lVar7 = lVar7 * 0x10;
    *(longlong **)(DAT_14cb0ba28 + lVar7) = plVar1;
    *(undefined1 *)(lVar3 + 8 + lVar7) = uVar5;
    *(undefined4 *)(lVar3 + 0xc + lVar7) = uVar6;
  }
LAB_144958e23:
                    /* WARNING: Could not recover jumptable at 0x000144958e33. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cb0ba00);
  return;
}



// FUNCTION 14079d9e4 FUN_14079d9e4 body=2053 status=ok
// SIG undefined FUN_14079d9e4(void)

void FUN_14079d9e4(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  double dVar3;
  double dVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  float fVar8;
  char cVar9;
  undefined1 uVar10;
  int iVar11;
  uint uVar12;
  double *pdVar13;
  longlong lVar14;
  undefined7 uVar16;
  undefined8 uVar15;
  longlong *plVar17;
  longlong *plVar18;
  longlong lVar19;
  undefined8 *puVar20;
  bool bVar21;
  uint *puVar22;
  undefined8 *puVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  longlong lVar27;
  longlong lVar28;
  double dVar29;
  float fVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined1 auStack_148 [32];
  undefined4 local_128;
  undefined4 local_120;
  undefined4 local_118;
  undefined8 local_110;
  undefined2 *local_108;
  undefined1 *local_100;
  undefined1 *local_f8;
  code **local_f0;
  undefined1 *local_e8;
  code *local_e0;
  uint local_d4;
  ulonglong *local_d0;
  ulonglong local_c8;
  longlong local_c0;
  longlong local_b8;
  longlong local_b0;
  longlong local_a8;
  undefined1 local_9c [4];
  code *local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_148;
  if (0 < *(int *)(param_1 + 0x48)) {
    lVar27 = 0;
    do {
      lVar19 = lVar27 * 0x40;
      iVar11 = *(int *)(*(longlong *)(param_1 + 0x40) + 0x14 + lVar19);
      if ((((iVar11 != 0) &&
           (uVar12 = *(uint *)(*(longlong *)(param_1 + 0x40) + lVar19 + 0x10), -1 < (int)uVar12)) &&
          ((int)uVar12 < DAT_14c9647dc)) &&
         (((plVar17 = (longlong *)
                      ((ulonglong)((uVar12 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8)),
           plVar17 != (longlong *)0x0 && ((int)plVar17[2] == iVar11)) &&
          (((*(uint *)(plVar17 + 1) & 0x10200000) == 0 && (lVar14 = *plVar17, lVar14 != 0)))))) {
        plVar17 = *(longlong **)(lVar14 + 0x3d0);
        local_a8 = lVar14;
        if (plVar17 == (longlong *)0x0) break;
        lVar14 = plVar17[0x39];
        if (lVar14 == 0) {
          pdVar13 = (double *)&DAT_14c8464e0;
          uVar31 = SUB84(DAT_14c8464f0,0);
          uVar32 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
        }
        else {
          uVar31 = (undefined4)*(undefined8 *)(lVar14 + 0x270);
          uVar32 = (undefined4)((ulonglong)*(undefined8 *)(lVar14 + 0x270) >> 0x20);
          pdVar13 = (double *)(lVar14 + 0x260);
        }
        dVar6 = *pdVar13;
        dVar7 = pdVar13[1];
        (**(code **)(*plVar17 + 0x528))(plVar17,&local_98,local_9c);
        fVar8 = local_98._0_4_;
        lVar14 = *(longlong *)(param_1 + 0x40) + lVar19;
        local_d0 = (ulonglong *)(lVar14 + 0x30);
        uVar24 = (ulonglong)*(int *)(lVar14 + 0x38);
        local_b0 = lVar19;
        if ((longlong)uVar24 < 1) {
          local_d4 = 0;
        }
        else {
          local_d4 = 0;
          do {
            uVar25 = uVar24 - 1;
            uVar26 = *local_d0;
            puVar22 = (uint *)(uVar26 + uVar25 * 0x48 + 8);
            local_c8 = uVar24;
            cVar9 = FUN_14079e1ea(puVar22);
            if (cVar9 == '\0') {
              local_c0 = uVar26 + uVar25 * 0x48;
              if ((*(int *)(local_c0 + 0xc) == 0) || (uVar12 = *puVar22, (int)uVar12 < 0)) {
LAB_14079e056:
                lVar19 = 0;
              }
              else {
                lVar19 = 0;
                if ((int)uVar12 < DAT_14c9647dc) {
                  plVar18 = (longlong *)
                            ((ulonglong)((uVar12 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8));
                  if (((plVar18 == (longlong *)0x0) || ((int)plVar18[2] != *(int *)(local_c0 + 0xc))
                      ) || ((*(uint *)(plVar18 + 1) & 0x10200000) != 0)) goto LAB_14079e056;
                  lVar19 = *plVar18;
                }
              }
              lVar19 = *(longlong *)(lVar19 + 0x1c8);
              if (lVar19 == 0) {
                pdVar13 = (double *)&DAT_14c8464e0;
                dVar29 = DAT_14c8464f0;
              }
              else {
                pdVar13 = (double *)(lVar19 + 0x260);
                dVar29 = *(double *)(lVar19 + 0x270);
              }
              local_b8 = uVar25 * 9;
              if ((longlong)*(int *)(param_1 + 0x38) != 0) {
                dVar3 = *pdVar13 - dVar6;
                dVar4 = pdVar13[1] - dVar7;
                dVar29 = dVar29 - (double)CONCAT44(uVar32,uVar31);
                lVar14 = *(longlong *)(param_1 + 0x30) + 8;
                lVar19 = (longlong)*(int *)(param_1 + 0x38) * 0x48;
                do {
                  cVar9 = FUN_140383372(lVar14);
                  if (cVar9 != '\0') {
                    fVar30 = (float)SQRT(dVar29 * dVar29 + dVar3 * dVar3 + dVar4 * dVar4) - fVar8;
                    fVar5 = 0.0;
                    if (0.0 <= fVar30) {
                      fVar5 = fVar30;
                    }
                    if (fVar5 < *(float *)(local_c0 + 0x10) || fVar5 == *(float *)(local_c0 + 0x10))
                    goto LAB_14079deed;
                    break;
                  }
                  lVar14 = lVar14 + 0x48;
                  lVar19 = lVar19 + -0x48;
                } while (lVar19 != 0);
              }
              uVar12 = (uint)local_d0[1];
              if (local_c8 != uVar12) {
                memmove((void *)(*local_d0 + local_b8 * 8),(void *)(*local_d0 + local_b8 * 8 + 0x48)
                        ,(longlong)(int)(uVar12 - (int)local_c8) * 0x48);
                uVar12 = (uint)local_d0[1];
              }
              *(uint *)(local_d0 + 1) = uVar12 - 1;
              uVar15 = FUN_140ec65ee();
              local_d4 = (uint)CONCAT71((int7)((ulonglong)uVar15 >> 8),1);
            }
LAB_14079deed:
            uVar24 = uVar25;
          } while (1 < (longlong)local_c8);
        }
        if (0 < *(int *)(param_1 + 0x38)) {
          lVar19 = 0;
          do {
            lVar14 = *(longlong *)(param_1 + 0x30);
            puVar22 = (uint *)(lVar14 + lVar19 * 0x48 + 8);
            cVar9 = FUN_14079e1ea(puVar22);
            if (cVar9 == '\0') {
              puVar20 = (undefined8 *)(lVar14 + lVar19 * 0x48);
              if ((*(int *)((longlong)puVar20 + 0xc) == 0) || (uVar12 = *puVar22, (int)uVar12 < 0))
              {
LAB_14079df7d:
                lVar14 = 0;
              }
              else {
                lVar14 = 0;
                if ((int)uVar12 < DAT_14c9647dc) {
                  plVar18 = (longlong *)
                            ((ulonglong)((uVar12 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8));
                  if (((plVar18 == (longlong *)0x0) ||
                      ((int)plVar18[2] != *(int *)((longlong)puVar20 + 0xc))) ||
                     ((*(uint *)(plVar18 + 1) & 0x10200000) != 0)) goto LAB_14079df7d;
                  lVar14 = *plVar18;
                }
              }
              lVar14 = *(longlong *)(lVar14 + 0x1c8);
              if (lVar14 == 0) {
                pdVar13 = (double *)&DAT_14c8464e0;
                dVar29 = DAT_14c8464f0;
              }
              else {
                pdVar13 = (double *)(lVar14 + 0x260);
                dVar29 = *(double *)(lVar14 + 0x270);
              }
              dVar3 = *pdVar13 - dVar6;
              dVar4 = pdVar13[1] - dVar7;
              dVar29 = dVar29 - (double)CONCAT44(uVar32,uVar31);
              fVar30 = (float)SQRT(dVar29 * dVar29 + dVar3 * dVar3 + dVar4 * dVar4) - fVar8;
              fVar5 = 0.0;
              if (0.0 <= fVar30) {
                fVar5 = fVar30;
              }
              if (fVar5 <= *(float *)(puVar20 + 2)) {
                uVar16 = (undefined7)((ulonglong)pdVar13 >> 8);
                if (*(float *)((longlong)puVar20 + 0x14) < fVar5) {
                  if (*(char *)(puVar20 + 3) != '\0') {
                    uVar10 = 0;
                    uVar16 = 0;
                    goto LAB_14079df63;
                  }
                }
                else if (*(char *)(puVar20 + 3) != '\x01') {
                  uVar10 = 1;
LAB_14079df63:
                  *(undefined1 *)(puVar20 + 3) = uVar10;
                  local_d4 = (uint)CONCAT71(uVar16,1);
                }
                if (DAT_14cb5b388 == 0) {
                  local_98 = FUN_141864c34;
                  local_e0 = FUN_14081d0ea;
                  local_e8 = &LAB_146431698;
                  local_f8 = &LAB_1486775cb;
                  local_100 = &LAB_1464cee35;
                  local_108 = &DAT_149e063b2;
                  local_110 = 0;
                  local_118 = 0x10000005;
                  local_120 = 0x10;
                  local_128 = 0x3a20;
                  local_f0 = &local_98;
                  FUN_14081cfa3(L"/Script/GbxGame",L"GbxCharacter",&DAT_14cb5b388,FUN_1464cee0e);
                }
                if ((*(int *)(DAT_14cb5b388 + 0x38) <= *(int *)(plVar17[2] + 0x38)) &&
                   (*(longlong *)
                     (*(longlong *)(plVar17[2] + 0x30) +
                     (longlong)*(int *)(DAT_14cb5b388 + 0x38) * 8) == DAT_14cb5b388 + 0x30)) {
                  iVar11 = FUN_14486116a(plVar17 + 0x113);
                  *(bool *)(puVar20 + 8) = iVar11 == 0;
                  *(bool *)((longlong)puVar20 + 0x41) = iVar11 == 1;
                }
                if ((longlong)(int)local_d0[1] == 0) {
                  iVar11 = 0;
                }
                else {
                  local_c8 = *local_d0;
                  local_c0 = (longlong)(int)local_d0[1] * 0x48;
                  lVar14 = local_c8 + 8;
                  lVar28 = 0;
                  do {
                    cVar9 = FUN_140383372(lVar14 + lVar28);
                    if (cVar9 != '\0') {
                      *(undefined1 *)(local_c8 + 0x18 + lVar28) = *(undefined1 *)(puVar20 + 3);
                      goto LAB_14079dc36;
                    }
                    lVar28 = lVar28 + 0x48;
                  } while (local_c0 != lVar28);
                  iVar11 = (int)local_d0[1];
                }
                *(uint *)(local_d0 + 1) = iVar11 + 1U;
                if (*(uint *)((longlong)local_d0 + 0xc) < iVar11 + 1U) {
                  FUN_1411e7dba(local_d0);
                }
                puVar23 = (undefined8 *)((longlong)iVar11 * 0x48 + *local_d0);
                for (lVar14 = 9; lVar14 != 0; lVar14 = lVar14 + -1) {
                  *puVar23 = *puVar20;
                  puVar20 = puVar20 + 1;
                  puVar23 = puVar23 + 1;
                }
                local_d4 = (uint)CONCAT71((int7)(int3)((uint)iVar11 >> 8),1);
              }
            }
LAB_14079dc36:
            lVar19 = lVar19 + 1;
          } while (lVar19 < *(int *)(param_1 + 0x38));
        }
        lVar19 = local_a8;
        if ((local_d4 & 1) != 0) {
          lVar14 = *(longlong *)(param_1 + 0x40) + local_b0;
          iVar11 = *(int *)(lVar14 + 0x2c);
          *(int *)(lVar14 + 0x2c) = iVar11 + 1;
          uVar24 = (ulonglong)*(int *)(lVar14 + 0x20);
          if ((longlong)uVar24 < 1) {
            *(int *)(lVar14 + 0x2c) = iVar11;
          }
          else {
            bVar21 = false;
            do {
              lVar28 = uVar24 * 0x10 + -8;
              uVar26 = uVar24;
              while (((lVar1 = *(longlong *)(lVar14 + 0x18), *(int *)(lVar1 + lVar28) != 0 &&
                      (plVar17 = *(longlong **)(lVar1 + -8 + lVar28), plVar17 != (longlong *)0x0))
                     && (cVar9 = (**(code **)(*plVar17 + 0x60))(plVar17,lVar19,local_d0),
                        cVar9 != '\0'))) {
                lVar28 = lVar28 + -0x10;
                bVar2 = uVar26 < 2;
                uVar26 = uVar26 - 1;
                if (bVar2) {
                  *(int *)(lVar14 + 0x2c) = *(int *)(lVar14 + 0x2c) + -1;
                  if (bVar21) goto LAB_14079e1db;
                  goto LAB_14079dd8a;
                }
              }
              uVar24 = uVar26 - 1;
              bVar21 = true;
            } while (1 < uVar26);
            *(int *)(lVar14 + 0x2c) = *(int *)(lVar14 + 0x2c) + -1;
LAB_14079e1db:
            FUN_14474d06a((longlong *)(lVar14 + 0x18),0);
          }
        }
      }
LAB_14079dd8a:
      lVar27 = lVar27 + 1;
    } while (lVar27 < *(int *)(param_1 + 0x48));
  }
  if ((local_90 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14079e1ea FUN_14079e1ea body=70 status=ok
// SIG undefined FUN_14079e1ea(void)

bool FUN_14079e1ea(uint *param_1)

{
  uint uVar1;
  longlong lVar2;
  bool bVar3;
  
  bVar3 = true;
  if ((((param_1[1] != 0) && (uVar1 = *param_1, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc))
     && ((lVar2 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar2 != 0 &&
         (*(uint *)(lVar2 + 0x10) == param_1[1])))) {
    bVar3 = (*(uint *)(lVar2 + 8) & 0x10200000) != 0;
  }
  return bVar3;
}



// FUNCTION 14079e230 FUN_14079e230 body=189 status=ok
// SIG undefined FUN_14079e230(void)

void FUN_14079e230(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_58 [32];
  undefined1 local_38 [4];
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((DAT_14c75f421 == '\x01') && (lVar4 = param_1[1], (longlong)(int)lVar4 != 0)) {
    lVar1 = *param_1;
    lVar6 = 0;
    do {
      lVar2 = *(longlong *)(*(longlong *)(lVar1 + lVar6) + 8);
      lVar3 = *(longlong *)(lVar2 + 0x9c8);
      lVar5 = *(longlong *)(lVar3 + 0xea0);
      if (*(int *)(lVar5 + 0xa0) == -1) {
        *(undefined4 *)(lVar5 + 0xa0) = *(undefined4 *)(lVar2 + 0x78);
        lVar5 = *(longlong *)(lVar3 + 0xea0);
      }
      local_34 = *(undefined4 *)(*(longlong *)(*(longlong *)(lVar1 + lVar6) + 0x40) + 0x58);
      FUN_14079e2ee(lVar5 + 0x50,local_38,&local_34,0);
      lVar6 = lVar6 + 8;
    } while ((longlong)(int)lVar4 * 8 != lVar6);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14079e2ee FUN_14079e2ee body=297 status=ok
// SIG undefined FUN_14079e2ee(void)

undefined4 * FUN_14079e2ee(longlong param_1,undefined4 *param_2,uint *param_3,undefined8 param_4)

{
  char cVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  uint *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1402c5b10(param_1,local_50);
  uVar3 = *param_3;
  *local_48 = uVar3;
  local_48[1] = 0xffffffff;
  local_54 = local_50[0];
  local_68 = param_4;
  cVar1 = FUN_1402c5a84(param_1,uVar3,local_48);
  if (cVar1 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    if (uVar4 < 4) {
      iVar5 = 1;
    }
    else {
      uVar2 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar6 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar5 = 1 << ((byte)lVar6 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar5 <= *(int *)(param_1 + 0x48))) {
      uVar3 = *(int *)(param_1 + 0x48) - 1U & uVar3;
      local_48[2] = uVar3;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      local_48[1] = *(uint *)(lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
                                      (longlong)(int)uVar3) * 4);
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_1402c65b4(param_1);
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14079e418 FUN_14079e418 body=58 status=ok
// SIG undefined FUN_14079e418(void)

void FUN_14079e418(longlong param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (param_2 != 0) {
    plVar2 = (longlong *)(param_1 + 0x20);
    do {
      if (plVar2[-4] != 0) {
        plVar1 = (longlong *)plVar2[-2];
        if ((longlong *)plVar2[-2] == (longlong *)0x0) {
          plVar1 = plVar2;
        }
        (**(code **)(*plVar1 + 0x10))();
      }
      plVar2 = plVar2 + 8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14079e452 FUN_14079e452 body=12 status=ok
// SIG undefined FUN_14079e452(void)

void FUN_14079e452(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014079e45b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 14079e45e FUN_14079e45e body=31 status=ok
// SIG undefined FUN_14079e45e(void)

undefined8 FUN_14079e45e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14079e4a4 FUN_14079e4a4 body=355 status=ok
// SIG undefined FUN_14079e4a4(void)

void FUN_14079e4a4(longlong *param_1,longlong *param_2,char param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  bool bVar4;
  char cVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  undefined4 *puVar9;
  ulonglong uVar10;
  undefined1 auStack_78 [39];
  char local_51;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_51 = param_3;
  plVar6 = (longlong *)(**(code **)(*param_1 + 0x18))();
  uVar10 = (ulonglong)(int)plVar6[1];
  if (0 < (longlong)uVar10) {
    lVar8 = uVar10 * 0x10 + -8;
    do {
      plVar2 = *(longlong **)(*plVar6 + -8 + lVar8);
      plVar3 = *(longlong **)(*plVar6 + lVar8);
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        UNLOCK();
      }
      if (plVar2 != (longlong *)0x0) {
        puVar9 = &DAT_14c9485f0;
        if (*(undefined4 **)(plVar2[2] + 8) != (undefined4 *)0x0) {
          puVar9 = *(undefined4 **)(plVar2[2] + 8);
        }
        if (DAT_14c947fe0 == 0) {
          lVar7 = FUN_14001cc68(0x140,0x10);
          FUN_1456b2032(lVar7);
          DAT_14c947fe0 = lVar7;
        }
        lVar7 = DAT_14c947fe0;
        FUN_140045924(DAT_14c947fe0,&local_50,puVar9,1);
        cVar5 = local_51;
        if (((local_50 == *param_2) && ((int)param_2[1] == 0x7010)) &&
           ((**(code **)(*plVar2 + 0x20))
                      (plVar2,CONCAT71((int7)((ulonglong)lVar7 >> 8),local_51) & 0xffffffff),
           cVar5 != '\0')) {
          FUN_14079e688(plVar6,(int)uVar10 + -1,1);
        }
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
      lVar8 = lVar8 + -0x10;
      bVar4 = 1 < uVar10;
      uVar10 = uVar10 - 1;
    } while (bVar4);
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14079e608 FUN_14079e608 body=66 status=ok
// SIG undefined FUN_14079e608(void)

void FUN_14079e608(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14b402570;
  plVar3 = *(longlong **)(param_1 + 0x30);
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
                    /* WARNING: Could not recover jumptable at 0x00014079e646. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14079e64a FUN_14079e64a body=61 status=ok
// SIG undefined FUN_14079e64a(void)

void FUN_14079e64a(longlong param_1,char param_2)

{
  float fVar1;
  float fVar2;
  
  fVar2 = 0.0;
  if (param_2 == '\0') {
    fVar2 = *(float *)(param_1 + 0x2c);
    fVar1 = *(float *)(*(longlong *)(param_1 + 0x10) + 0x24);
    if (fVar1 <= fVar2 || fVar2 <= 0.0) {
      fVar2 = fVar1;
    }
    *(undefined1 *)(param_1 + 0x30) = 0;
  }
  *(float *)(param_1 + 0x2c) = fVar2;
  return;
}



// FUNCTION 14079e688 FUN_14079e688 body=113 status=ok
// SIG undefined FUN_14079e688(void)

void FUN_14079e688(longlong *param_1,int param_2,int param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  void *_Dst;
  
  lVar1 = *param_1;
  _Dst = (void *)((longlong)param_2 * 0x10 + lVar1);
  FUN_14079e6f9(_Dst,param_3);
  iVar2 = (int)param_1[1];
  iVar3 = iVar2 - (param_2 + param_3);
  if (param_3 < iVar3) {
    iVar3 = param_3;
  }
  if (iVar3 != 0) {
    memmove(_Dst,(void *)(lVar1 + (longlong)(iVar2 - iVar3) * 0x10),(longlong)iVar3 << 4);
    iVar2 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar2 - param_3;
  return;
}



// FUNCTION 14079e6f9 FUN_14079e6f9 body=75 status=ok
// SIG undefined FUN_14079e6f9(void)

void FUN_14079e6f9(longlong param_1,int param_2)

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
      plVar4 = plVar4 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}


